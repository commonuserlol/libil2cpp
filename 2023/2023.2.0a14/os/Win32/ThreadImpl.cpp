#include "il2cpp-config.h"

#if !IL2CPP_THREADS_STD && IL2CPP_THREADS_WIN32 && !RUNTIME_TINY

#include "ThreadImpl.h"
#include "os/ThreadLocalValue.h"
#include "os/Time.h"
#include "utils/StringUtils.h"
#include "os/Debug.h"
#include "WindowsHelpers.h"

namespace il2cpp
{
namespace os
{
    struct ThreadImplStartData
    {
        Thread::StartFunc m_StartFunc;
        void* m_StartArg;
        volatile DWORD* m_ThreadId;
    };

    static DWORD WINAPI ThreadStartWrapper(LPVOID arg)
    {
        ThreadImplStartData startData = *(ThreadImplStartData*)arg;
        free(arg);
        *startData.m_ThreadId = GetCurrentThreadId();
        startData.m_StartFunc(startData.m_StartArg);
        return 0;
    }

    static Event* s_ThreadSleepObject = nullptr;

    void ThreadImpl::AllocateStaticData()
    {
        s_ThreadSleepObject = new Event();
    }

    void ThreadImpl::FreeStaticData()
    {
        delete s_ThreadSleepObject;
        s_ThreadSleepObject = nullptr;
    }

    ThreadImpl::ThreadImpl()
        : m_ThreadHandle(0), m_ThreadId(0), m_StackSize(IL2CPP_DEFAULT_STACK_SIZE), m_ApartmentState(kApartmentStateUnknown), m_Priority(kThreadPriorityNormal)
        , m_ConditionSemaphore(1)
    {
    }

    ThreadImpl::~ThreadImpl()
    {
        if (m_ThreadHandle != NULL)
            CloseHandle(m_ThreadHandle);
    }

    size_t ThreadImpl::Id()
    {
        return m_ThreadId;
    }

    void ThreadImpl::SetNameForDebugger(const char* name)
    {
        // http://msdn.microsoft.com/en-us/library/xcb2z8hs.aspx

        const DWORD MS_VC_EXCEPTION = 0x406D1388;

#pragma pack(push,8)
        typedef struct tagTHREADNAME_INFO
        {
            DWORD dwType; // Must be 0x1000.
            LPCSTR szName; // Pointer to name (in user addr space).
            DWORD dwThreadID; // Thread ID (-1=caller thread).
            DWORD dwFlags; // Reserved for future use, must be zero.
        } THREADNAME_INFO;
#pragma pack(pop)

        THREADNAME_INFO info;
        info.dwType = 0x1000;
        info.szName = name;
        info.dwThreadID = static_cast<DWORD>(Id());
        info.dwFlags = 0;

        __try
        {
            RaiseException(MS_VC_EXCEPTION, 0, sizeof(info) / sizeof(ULONG_PTR), (ULONG_PTR*)&info);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
        }
    }

    typedef HRESULT (__stdcall *SETTHREADPROC) (HANDLE, PCWSTR);
    void ThreadImpl::SetName(const char* name)
    {
        SetThreadDescription(m_ThreadHandle, utils::StringUtils::Utf8ToUtf16(name).c_str());

        if (Debug::IsDebuggerPresent())
            SetNameForDebugger(name);
    }

    void ThreadImpl::SetPriority(ThreadPriority priority)
    {
        if (m_ThreadHandle == NULL)
            m_Priority = priority;
        else
        {
            int ret = ::SetThreadPriority(m_ThreadHandle, priority - 2);
            IL2CPP_ASSERT(ret);
        }
    }

    ThreadPriority ThreadImpl::GetPriority()
    {
        if (m_ThreadHandle == NULL)
            return m_Priority;
        int ret = ::GetThreadPriority(m_ThreadHandle) + 2;
        IL2CPP_ASSERT(ret != THREAD_PRIORITY_ERROR_RETURN);
        return (ThreadPriority)ret;
    }

    ErrorCode ThreadImpl::Run(Thread::StartFunc func, void* arg, int64_t affinityMask)
    {
        // It might happen that func will start executing and will try to access m_ThreadId before CreateThread gets a chance to assign it.
        // Therefore m_ThreadId is assigned both by this thread and from the newly created thread (race condition could go the other way too).

        ThreadImplStartData* startData = (ThreadImplStartData*)malloc(sizeof(ThreadImplStartData));
        startData->m_StartFunc = func;
        startData->m_StartArg = arg;
        startData->m_ThreadId = &m_ThreadId;

        // Create thread.
        DWORD threadId;
        HANDLE threadHandle = ::CreateThread(NULL, m_StackSize, &ThreadStartWrapper, startData, STACK_SIZE_PARAM_IS_A_RESERVATION, &threadId);

        if (!threadHandle)
            return kErrorCodeGenFailure;

#if IL2CPP_TARGET_WINDOWS_GAMES
        if (affinityMask != Thread::kThreadAffinityAll)
            SetThreadAffinityMask(threadHandle, static_cast<DWORD_PTR>(affinityMask));
#endif

        m_ThreadHandle = threadHandle;
        m_ThreadId = threadId;

        SetPriority(m_Priority);

        return kErrorCodeSuccess;
    }

    void ThreadImpl::Sleep(uint32_t ms, bool interruptible)
    {
        /// An Event that we never signal. This is used for sleeping threads in an alertable state. They
        /// simply wait on this object with the sleep timer as the timeout. This way we don't need a separate
        /// codepath for implementing sleep logic.

        s_ThreadSleepObject->Wait(ms, interruptible);
    }

    void ThreadImpl::CheckForUserAPCAndHandle()
    {
        m_PendingAPCsMutex.Acquire();

        while (!m_PendingAPCs.empty())
        {
            APCRequest apcRequest = m_PendingAPCs.front();

            // Remove from list. Do before calling the function to make sure the list
            // is up to date in case the function throws.
            m_PendingAPCs.erase(m_PendingAPCs.begin());

            // Release mutex while we call the function so that we don't deadlock
            // if the function starts waiting on a thread that tries queuing an APC
            // on us.
            m_PendingAPCsMutex.Release();

            // Call function.
            apcRequest.callback(apcRequest.context);

            // Re-acquire mutex.
            m_PendingAPCsMutex.Acquire();
        }

        m_PendingAPCsMutex.Release();
    }

    void ThreadImpl::SetWaitObject(WaitObject* waitObject)
    {
        // This is an unprotected write as write acccess is restricted to the
        // current thread.
        m_CurrentWaitObject = waitObject;
    }

    void ThreadImpl::QueueUserAPC(Thread::APCFunc func, void* context)
    {
        IL2CPP_ASSERT(func != NULL);

        // Put on queue.
        {
            m_PendingAPCsMutex.Acquire();
            m_PendingAPCs.push_back(APCRequest(func, context));
            m_PendingAPCsMutex.Release();
        }

        // Interrupt an ongoing wait, only interrupt if we have an object waiting
        if (m_CurrentWaitObject.load())
        {
            m_ConditionSemaphore.Release(1);
        }
    }

    int ThreadImpl::GetMaxStackSize()
    {
        return INT_MAX;
    }

    ThreadImpl* ThreadImpl::GetCurrentThread()
    {
        return Thread::GetCurrentThread()->m_Thread;
    }

namespace
{
    ApartmentState GetApartmentImpl(bool* implicit)
    {
        *implicit = false;

        APTTYPE type;
        APTTYPEQUALIFIER qualifier;
        const HRESULT hr = CoGetApartmentType(&type, &qualifier);
        if (FAILED(hr))
        {
            IL2CPP_ASSERT(CO_E_NOTINITIALIZED == hr);
            return kApartmentStateUnknown;
        }

        switch (type)
        {
            case APTTYPE_STA:
            case APTTYPE_MAINSTA:
                return kApartmentStateInSTA;

            case APTTYPE_MTA:
                *implicit = (APTTYPEQUALIFIER_IMPLICIT_MTA == qualifier);
                return kApartmentStateInMTA;

            case APTTYPE_NA:
                switch (qualifier)
                {
                    case APTTYPEQUALIFIER_NA_ON_STA:
                    case APTTYPEQUALIFIER_NA_ON_MAINSTA:
                        return kApartmentStateInSTA;

                    case APTTYPEQUALIFIER_NA_ON_MTA:
                        return kApartmentStateInMTA;

                    case APTTYPEQUALIFIER_NA_ON_IMPLICIT_MTA:
                        *implicit = true;
                        return kApartmentStateInMTA;
                }
                break;
        }

        IL2CPP_ASSERT(0 && "CoGetApartmentType returned unexpected value.");
        return kApartmentStateUnknown;
    }
}

    ApartmentState ThreadImpl::GetApartment()
    {
        Assert(GetCurrentThreadId() == m_ThreadId);

        ApartmentState state = static_cast<ApartmentState>(m_ApartmentState & ~kApartmentStateCoInitialized);

        if (kApartmentStateUnknown == state)
        {
            bool implicit;
            state = GetApartmentImpl(&implicit);
            if (!implicit)
                m_ApartmentState = state;
        }

        return state;
    }

    ApartmentState ThreadImpl::GetExplicitApartment()
    {
        return static_cast<ApartmentState>(m_ApartmentState & ~kApartmentStateCoInitialized);
    }

    ApartmentState ThreadImpl::SetApartment(ApartmentState state)
    {
        Assert(GetCurrentThreadId() == m_ThreadId);

        // Unknown state uninitializes COM.
        if (kApartmentStateUnknown == state)
        {
            if (m_ApartmentState & kApartmentStateCoInitialized)
            {
                CoUninitialize();
                m_ApartmentState = kApartmentStateUnknown;
            }

            return GetApartment();
        }

        // Initialize apartment state. Ignore result of this function because it will return MTA value for both implicit and explicit apartment.
        // On the other hand m_ApartmentState will only be set to MTA if it was initialized explicitly with CoInitializeEx.
        GetApartment();

        ApartmentState currentState = static_cast<ApartmentState>(m_ApartmentState & ~kApartmentStateCoInitialized);

        if (kApartmentStateUnknown != currentState)
        {
            Assert(state == currentState);
            return currentState;
        }

        HRESULT hr = CoInitializeEx(nullptr, (kApartmentStateInSTA == state) ? COINIT_APARTMENTTHREADED : COINIT_MULTITHREADED);
        if (SUCCEEDED(hr))
        {
            m_ApartmentState = state;
            if (S_OK == hr)
                m_ApartmentState = static_cast<ApartmentState>(m_ApartmentState | kApartmentStateCoInitialized);
            else
                CoUninitialize(); // Someone has already called correct CoInitialize. Don't leave incorrect reference count.
        }
        else if (RPC_E_CHANGED_MODE == hr)
        {
            // CoInitialize has already been called with a different apartment state.
            m_ApartmentState = (kApartmentStateInSTA == state) ? kApartmentStateInMTA : kApartmentStateInSTA;
        }
        else
        {
            // Based on where this function is called (Init and Shutdown) we can't really recover from this, so
            // just abort.
            abort();
        }

        return GetApartment();
    }

    void ThreadImpl::SetExplicitApartment(ApartmentState state)
    {
        Assert(!(m_ApartmentState & kApartmentStateCoInitialized));
        m_ApartmentState = state;
    }

    size_t ThreadImpl::CurrentThreadId()
    {
        return GetCurrentThreadId();
    }

    ThreadImpl* ThreadImpl::CreateForCurrentThread()
    {
        ThreadImpl* thread = new ThreadImpl();
        BOOL duplicateResult = DuplicateHandle(::GetCurrentProcess(), ::GetCurrentThread(), ::GetCurrentProcess(), &thread->m_ThreadHandle, 0, FALSE, DUPLICATE_SAME_ACCESS);
        Assert(duplicateResult && "DuplicateHandle failed.");
        thread->m_ThreadId = ::GetCurrentThreadId();
        return thread;
    }

    bool ThreadImpl::YieldInternal()
    {
        return SwitchToThread();
    }

#if IL2CPP_HAS_NATIVE_THREAD_CLEANUP

    static Thread::ThreadCleanupFunc s_ThreadCleanupFunction;
    static ThreadLocalValue s_ThreadCleanupArguments;

    void ThreadImpl::SetNativeThreadCleanup(Thread::ThreadCleanupFunc cleanupFunction)
    {
        s_ThreadCleanupFunction = cleanupFunction;
    }

    void ThreadImpl::RegisterCurrentThreadForCleanup(void* arg)
    {
        s_ThreadCleanupArguments.SetValue(arg);
    }

    void ThreadImpl::UnregisterCurrentThreadForCleanup()
    {
        s_ThreadCleanupArguments.SetValue(NULL);
    }

    void ThreadImpl::OnCurrentThreadExiting()
    {
        Thread::ThreadCleanupFunc cleanupFunction = s_ThreadCleanupFunction;
        if (cleanupFunction == NULL)
            return;

        void* threadCleanupArgument = NULL;
        s_ThreadCleanupArguments.GetValue(&threadCleanupArgument);

        if (threadCleanupArgument != NULL)
            cleanupFunction(threadCleanupArgument);
    }

#endif
}
}

#endif
