typedef uint32_t Il2CppMethodSlot;
const uint32_t kInvalidIl2CppMethodSlot = 65535;
template<bool value>
struct Il2CppStaticAssertHelper;
template<>
struct Il2CppStaticAssertHelper<true>
{
};
const int32_t kIl2CppInt32Min = (-2147483647-1);
const int32_t kIl2CppInt32Max = (2147483647);
const uint32_t kIl2CppUInt32Max = (4294967295U);
const int64_t kIl2CppInt64Min = (-9223372036854775807L -1);
const int64_t kIl2CppInt64Max = (9223372036854775807L);
const uint64_t kIl2CppUInt64Max = (18446744073709551615UL);
const intptr_t kIl2CppIntPtrMin = kIl2CppInt64Min;
const intptr_t kIl2CppIntPtrMax = kIl2CppInt64Max;
const uintptr_t kIl2CppUIntPtrMax = kIl2CppUInt64Max;
const int ipv6AddressSize = 16;
typedef int32_t il2cpp_hresult_t;
       
struct Il2CppClass;
struct Il2CppType;
struct EventInfo;
struct MethodInfo;
struct FieldInfo;
struct PropertyInfo;
struct Il2CppAssembly;
struct Il2CppArray;
struct Il2CppDelegate;
struct Il2CppDomain;
struct Il2CppImage;
struct Il2CppException;
struct Il2CppProfiler;
struct Il2CppObject;
struct Il2CppReflectionMethod;
struct Il2CppReflectionType;
struct Il2CppString;
struct Il2CppThread;
struct Il2CppAsyncResult;
enum Il2CppProfileFlags
{
    IL2CPP_PROFILE_NONE = 0,
    IL2CPP_PROFILE_APPDOMAIN_EVENTS = 1 << 0,
    IL2CPP_PROFILE_ASSEMBLY_EVENTS = 1 << 1,
    IL2CPP_PROFILE_MODULE_EVENTS = 1 << 2,
    IL2CPP_PROFILE_CLASS_EVENTS = 1 << 3,
    IL2CPP_PROFILE_JIT_COMPILATION = 1 << 4,
    IL2CPP_PROFILE_INLINING = 1 << 5,
    IL2CPP_PROFILE_EXCEPTIONS = 1 << 6,
    IL2CPP_PROFILE_ALLOCATIONS = 1 << 7,
    IL2CPP_PROFILE_GC = 1 << 8,
    IL2CPP_PROFILE_THREADS = 1 << 9,
    IL2CPP_PROFILE_REMOTING = 1 << 10,
    IL2CPP_PROFILE_TRANSITIONS = 1 << 11,
    IL2CPP_PROFILE_ENTER_LEAVE = 1 << 12,
    IL2CPP_PROFILE_COVERAGE = 1 << 13,
    IL2CPP_PROFILE_INS_COVERAGE = 1 << 14,
    IL2CPP_PROFILE_STATISTICAL = 1 << 15,
    IL2CPP_PROFILE_METHOD_EVENTS = 1 << 16,
    IL2CPP_PROFILE_MONITOR_EVENTS = 1 << 17,
    IL2CPP_PROFILE_IOMAP_EVENTS = 1 << 18,
    IL2CPP_PROFILE_GC_MOVES = 1 << 19,
    IL2CPP_PROFILE_FILEIO = 1 << 20
};
enum Il2CppProfileFileIOKind
{
    IL2CPP_PROFILE_FILEIO_WRITE = 0,
    IL2CPP_PROFILE_FILEIO_READ
};
enum Il2CppGCEvent
{
    IL2CPP_GC_EVENT_START,
    IL2CPP_GC_EVENT_MARK_START,
    IL2CPP_GC_EVENT_MARK_END,
    IL2CPP_GC_EVENT_RECLAIM_START,
    IL2CPP_GC_EVENT_RECLAIM_END,
    IL2CPP_GC_EVENT_END,
    IL2CPP_GC_EVENT_PRE_STOP_WORLD,
    IL2CPP_GC_EVENT_POST_STOP_WORLD,
    IL2CPP_GC_EVENT_PRE_START_WORLD,
    IL2CPP_GC_EVENT_POST_START_WORLD
};
enum Il2CppStat
{
    IL2CPP_STAT_NEW_OBJECT_COUNT,
    IL2CPP_STAT_INITIALIZED_CLASS_COUNT,
    IL2CPP_STAT_METHOD_COUNT,
    IL2CPP_STAT_CLASS_STATIC_DATA_SIZE,
    IL2CPP_STAT_GENERIC_INSTANCE_COUNT,
    IL2CPP_STAT_GENERIC_CLASS_COUNT,
    IL2CPP_STAT_INFLATED_METHOD_COUNT,
    IL2CPP_STAT_INFLATED_TYPE_COUNT,
};
enum Il2CppRuntimeUnhandledExceptionPolicy
{
    IL2CPP_UNHANDLED_POLICY_LEGACY,
    IL2CPP_UNHANDLED_POLICY_CURRENT
};
struct Il2CppStackFrameInfo
{
    const MethodInfo *method;
};
typedef struct
{
    void* (*malloc_func)(size_t size);
    void* (*aligned_malloc_func)(size_t size, size_t alignment);
    void (*free_func)(void *ptr);
    void (*aligned_free_func)(void *ptr);
    void* (*calloc_func)(size_t nmemb, size_t size);
    void* (*realloc_func)(void *ptr, size_t size);
    void* (*aligned_realloc_func)(void *ptr, size_t size, size_t alignment);
} Il2CppMemoryCallbacks;
typedef uint16_t Il2CppChar;
typedef char Il2CppNativeChar;
typedef void (*il2cpp_register_object_callback)(Il2CppObject** arr, int size, void* userdata);
typedef void (*il2cpp_WorldChangedCallback)();
typedef void (*Il2CppFrameWalkFunc) (const Il2CppStackFrameInfo *info, void *user_data);
typedef void (*Il2CppProfileFunc) (Il2CppProfiler* prof);
typedef void (*Il2CppProfileMethodFunc) (Il2CppProfiler* prof, const MethodInfo *method);
typedef void (*Il2CppProfileAllocFunc) (Il2CppProfiler* prof, Il2CppObject *obj, Il2CppClass *klass);
typedef void (*Il2CppProfileGCFunc) (Il2CppProfiler* prof, Il2CppGCEvent event, int generation);
typedef void (*Il2CppProfileGCResizeFunc) (Il2CppProfiler* prof, int64_t new_size);
typedef void (*Il2CppProfileFileIOFunc) (Il2CppProfiler* prof, Il2CppProfileFileIOKind kind, int count);
typedef const Il2CppNativeChar* (*Il2CppSetFindPlugInCallback)(const Il2CppNativeChar*);
typedef void (*Il2CppLogCallback)(const char*);
struct Il2CppManagedMemorySnapshot;
typedef void (*Il2CppMethodPointer)();
typedef uintptr_t il2cpp_array_size_t;
const Il2CppChar kIl2CppNewLine[] = { '\n', '\0' };
extern "C"
{
__attribute__ ((visibility ("default"))) void il2cpp_init (const char* domain_name);;
__attribute__ ((visibility ("default"))) void il2cpp_init_utf16 (const Il2CppChar * domain_name);;
__attribute__ ((visibility ("default"))) void il2cpp_shutdown ();;
__attribute__ ((visibility ("default"))) void il2cpp_set_config_dir (const char *config_path);;
__attribute__ ((visibility ("default"))) void il2cpp_set_data_dir (const char *data_path);;
__attribute__ ((visibility ("default"))) void il2cpp_set_temp_dir (const char *temp_path);;
__attribute__ ((visibility ("default"))) void il2cpp_set_commandline_arguments (int argc, const char* const argv[], const char* basedir);;
__attribute__ ((visibility ("default"))) void il2cpp_set_commandline_arguments_utf16 (int argc, const Il2CppChar * const argv[], const char* basedir);;
__attribute__ ((visibility ("default"))) void il2cpp_set_config_utf16 (const Il2CppChar * executablePath);;
__attribute__ ((visibility ("default"))) void il2cpp_set_config (const char* executablePath);;
__attribute__ ((visibility ("default"))) void il2cpp_set_memory_callbacks (Il2CppMemoryCallbacks * callbacks);;
__attribute__ ((visibility ("default"))) const Il2CppImage* il2cpp_get_corlib ();;
__attribute__ ((visibility ("default"))) void il2cpp_add_internal_call (const char* name, Il2CppMethodPointer method);;
__attribute__ ((visibility ("default"))) Il2CppMethodPointer il2cpp_resolve_icall (const char* name);;
__attribute__ ((visibility ("default"))) void* il2cpp_alloc (size_t size);;
__attribute__ ((visibility ("default"))) void il2cpp_free (void* ptr);;
__attribute__ ((visibility ("default"))) Il2CppClass* il2cpp_array_class_get (Il2CppClass * element_class, uint32_t rank);;
__attribute__ ((visibility ("default"))) uint32_t il2cpp_array_length (Il2CppArray * array);;
__attribute__ ((visibility ("default"))) uint32_t il2cpp_array_get_byte_length (Il2CppArray * array);;
__attribute__ ((visibility ("default"))) Il2CppArray* il2cpp_array_new (Il2CppClass * elementTypeInfo, il2cpp_array_size_t length);;
__attribute__ ((visibility ("default"))) Il2CppArray* il2cpp_array_new_specific (Il2CppClass * arrayTypeInfo, il2cpp_array_size_t length);;
__attribute__ ((visibility ("default"))) Il2CppArray* il2cpp_array_new_full (Il2CppClass * array_class, il2cpp_array_size_t * lengths, il2cpp_array_size_t * lower_bounds);;
__attribute__ ((visibility ("default"))) Il2CppClass* il2cpp_bounded_array_class_get (Il2CppClass * element_class, uint32_t rank, bool bounded);;
__attribute__ ((visibility ("default"))) int il2cpp_array_element_size (const Il2CppClass * array_class);;
__attribute__ ((visibility ("default"))) const Il2CppImage* il2cpp_assembly_get_image (const Il2CppAssembly * assembly);;
__attribute__ ((visibility ("default"))) const Il2CppType* il2cpp_class_enum_basetype (Il2CppClass * klass);;
__attribute__ ((visibility ("default"))) bool il2cpp_class_is_generic (const Il2CppClass * klass);;
__attribute__ ((visibility ("default"))) bool il2cpp_class_is_inflated (const Il2CppClass * klass);;
__attribute__ ((visibility ("default"))) bool il2cpp_class_is_assignable_from (Il2CppClass * klass, Il2CppClass * oklass);;
__attribute__ ((visibility ("default"))) bool il2cpp_class_is_subclass_of (Il2CppClass * klass, Il2CppClass * klassc, bool check_interfaces);;
__attribute__ ((visibility ("default"))) bool il2cpp_class_has_parent (Il2CppClass * klass, Il2CppClass * klassc);;
__attribute__ ((visibility ("default"))) Il2CppClass* il2cpp_class_from_il2cpp_type (const Il2CppType * type);;
__attribute__ ((visibility ("default"))) Il2CppClass* il2cpp_class_from_name (const Il2CppImage * image, const char* namespaze, const char *name);;
__attribute__ ((visibility ("default"))) Il2CppClass* il2cpp_class_from_system_type (Il2CppReflectionType * type);;
__attribute__ ((visibility ("default"))) Il2CppClass* il2cpp_class_get_element_class (Il2CppClass * klass);;
__attribute__ ((visibility ("default"))) const EventInfo* il2cpp_class_get_events (Il2CppClass * klass, void* *iter);;
__attribute__ ((visibility ("default"))) FieldInfo* il2cpp_class_get_fields (Il2CppClass * klass, void* *iter);;
__attribute__ ((visibility ("default"))) Il2CppClass* il2cpp_class_get_nested_types (Il2CppClass * klass, void* *iter);;
__attribute__ ((visibility ("default"))) Il2CppClass* il2cpp_class_get_interfaces (Il2CppClass * klass, void* *iter);;
__attribute__ ((visibility ("default"))) const PropertyInfo* il2cpp_class_get_properties (Il2CppClass * klass, void* *iter);;
__attribute__ ((visibility ("default"))) const PropertyInfo* il2cpp_class_get_property_from_name (Il2CppClass * klass, const char *name);;
__attribute__ ((visibility ("default"))) FieldInfo* il2cpp_class_get_field_from_name (Il2CppClass * klass, const char *name);;
__attribute__ ((visibility ("default"))) const MethodInfo* il2cpp_class_get_methods (Il2CppClass * klass, void* *iter);;
__attribute__ ((visibility ("default"))) const MethodInfo* il2cpp_class_get_method_from_name (Il2CppClass * klass, const char* name, int argsCount);;
__attribute__ ((visibility ("default"))) const char* il2cpp_class_get_name (Il2CppClass * klass);;
__attribute__ ((visibility ("default"))) const char* il2cpp_class_get_namespace (Il2CppClass * klass);;
__attribute__ ((visibility ("default"))) Il2CppClass* il2cpp_class_get_parent (Il2CppClass * klass);;
__attribute__ ((visibility ("default"))) Il2CppClass* il2cpp_class_get_declaring_type (Il2CppClass * klass);;
__attribute__ ((visibility ("default"))) int32_t il2cpp_class_instance_size (Il2CppClass * klass);;
__attribute__ ((visibility ("default"))) size_t il2cpp_class_num_fields (const Il2CppClass * enumKlass);;
__attribute__ ((visibility ("default"))) bool il2cpp_class_is_valuetype (const Il2CppClass * klass);;
__attribute__ ((visibility ("default"))) int32_t il2cpp_class_value_size (Il2CppClass * klass, uint32_t * align);;
__attribute__ ((visibility ("default"))) bool il2cpp_class_is_blittable (const Il2CppClass * klass);;
__attribute__ ((visibility ("default"))) int il2cpp_class_get_flags (const Il2CppClass * klass);;
__attribute__ ((visibility ("default"))) bool il2cpp_class_is_abstract (const Il2CppClass * klass);;
__attribute__ ((visibility ("default"))) bool il2cpp_class_is_interface (const Il2CppClass * klass);;
__attribute__ ((visibility ("default"))) int il2cpp_class_array_element_size (const Il2CppClass * klass);;
__attribute__ ((visibility ("default"))) Il2CppClass* il2cpp_class_from_type (const Il2CppType * type);;
__attribute__ ((visibility ("default"))) const Il2CppType* il2cpp_class_get_type (Il2CppClass * klass);;
__attribute__ ((visibility ("default"))) bool il2cpp_class_has_attribute (Il2CppClass * klass, Il2CppClass * attr_class);;
__attribute__ ((visibility ("default"))) bool il2cpp_class_has_references (Il2CppClass * klass);;
__attribute__ ((visibility ("default"))) bool il2cpp_class_is_enum (const Il2CppClass * klass);;
__attribute__ ((visibility ("default"))) const Il2CppImage* il2cpp_class_get_image (Il2CppClass * klass);;
__attribute__ ((visibility ("default"))) const char* il2cpp_class_get_assemblyname (const Il2CppClass * klass);;
__attribute__ ((visibility ("default"))) size_t il2cpp_class_get_bitmap_size (const Il2CppClass * klass);;
__attribute__ ((visibility ("default"))) void il2cpp_class_get_bitmap (Il2CppClass * klass, size_t * bitmap);;
__attribute__ ((visibility ("default"))) bool il2cpp_stats_dump_to_file (const char *path);;
__attribute__ ((visibility ("default"))) uint64_t il2cpp_stats_get_value (Il2CppStat stat);;
__attribute__ ((visibility ("default"))) Il2CppDomain* il2cpp_domain_get ();;
__attribute__ ((visibility ("default"))) const Il2CppAssembly* il2cpp_domain_assembly_open (Il2CppDomain * domain, const char* name);;
__attribute__ ((visibility ("default"))) const Il2CppAssembly** il2cpp_domain_get_assemblies (const Il2CppDomain * domain, size_t * size);;
__attribute__ ((visibility ("default"))) void il2cpp_raise_exception (Il2CppException*);;
__attribute__ ((visibility ("default"))) Il2CppException* il2cpp_exception_from_name_msg (const Il2CppImage * image, const char *name_space, const char *name, const char *msg);;
__attribute__ ((visibility ("default"))) Il2CppException* il2cpp_get_exception_argument_null (const char *arg);;
__attribute__ ((visibility ("default"))) void il2cpp_format_exception (const Il2CppException * ex, char* message, int message_size);;
__attribute__ ((visibility ("default"))) void il2cpp_format_stack_trace (const Il2CppException * ex, char* output, int output_size);;
__attribute__ ((visibility ("default"))) void il2cpp_unhandled_exception (Il2CppException*);;
__attribute__ ((visibility ("default"))) int il2cpp_field_get_flags (FieldInfo * field);;
__attribute__ ((visibility ("default"))) const char* il2cpp_field_get_name (FieldInfo * field);;
__attribute__ ((visibility ("default"))) Il2CppClass* il2cpp_field_get_parent (FieldInfo * field);;
__attribute__ ((visibility ("default"))) size_t il2cpp_field_get_offset (FieldInfo * field);;
__attribute__ ((visibility ("default"))) const Il2CppType* il2cpp_field_get_type (FieldInfo * field);;
__attribute__ ((visibility ("default"))) void il2cpp_field_get_value (Il2CppObject * obj, FieldInfo * field, void *value);;
__attribute__ ((visibility ("default"))) Il2CppObject* il2cpp_field_get_value_object (FieldInfo * field, Il2CppObject * obj);;
__attribute__ ((visibility ("default"))) bool il2cpp_field_has_attribute (FieldInfo * field, Il2CppClass * attr_class);;
__attribute__ ((visibility ("default"))) void il2cpp_field_set_value (Il2CppObject * obj, FieldInfo * field, void *value);;
__attribute__ ((visibility ("default"))) void il2cpp_field_static_get_value (FieldInfo * field, void *value);;
__attribute__ ((visibility ("default"))) void il2cpp_field_static_set_value (FieldInfo * field, void *value);;
__attribute__ ((visibility ("default"))) void il2cpp_field_set_value_object (Il2CppObject * instance, FieldInfo * field, Il2CppObject * value);;
__attribute__ ((visibility ("default"))) void il2cpp_gc_collect (int maxGenerations);;
__attribute__ ((visibility ("default"))) int32_t il2cpp_gc_collect_a_little ();;
__attribute__ ((visibility ("default"))) void il2cpp_gc_disable ();;
__attribute__ ((visibility ("default"))) void il2cpp_gc_enable ();;
__attribute__ ((visibility ("default"))) int64_t il2cpp_gc_get_used_size ();;
__attribute__ ((visibility ("default"))) int64_t il2cpp_gc_get_heap_size ();;
__attribute__ ((visibility ("default"))) uint32_t il2cpp_gchandle_new (Il2CppObject * obj, bool pinned);;
__attribute__ ((visibility ("default"))) uint32_t il2cpp_gchandle_new_weakref (Il2CppObject * obj, bool track_resurrection);;
__attribute__ ((visibility ("default"))) Il2CppObject* il2cpp_gchandle_get_target (uint32_t gchandle);;
__attribute__ ((visibility ("default"))) void il2cpp_gchandle_free (uint32_t gchandle);;
__attribute__ ((visibility ("default"))) void* il2cpp_unity_liveness_calculation_begin (Il2CppClass * filter, int max_object_count, il2cpp_register_object_callback callback, void* userdata, il2cpp_WorldChangedCallback onWorldStarted, il2cpp_WorldChangedCallback onWorldStopped);;
__attribute__ ((visibility ("default"))) void il2cpp_unity_liveness_calculation_end (void* state);;
__attribute__ ((visibility ("default"))) void il2cpp_unity_liveness_calculation_from_root (Il2CppObject * root, void* state);;
__attribute__ ((visibility ("default"))) void il2cpp_unity_liveness_calculation_from_statics (void* state);;
__attribute__ ((visibility ("default"))) const Il2CppType* il2cpp_method_get_return_type (const MethodInfo * method);;
__attribute__ ((visibility ("default"))) Il2CppClass* il2cpp_method_get_declaring_type (const MethodInfo * method);;
__attribute__ ((visibility ("default"))) const char* il2cpp_method_get_name (const MethodInfo * method);;
__attribute__ ((visibility ("default"))) Il2CppReflectionMethod* il2cpp_method_get_object (const MethodInfo * method, Il2CppClass * refclass);;
__attribute__ ((visibility ("default"))) bool il2cpp_method_is_generic (const MethodInfo * method);;
__attribute__ ((visibility ("default"))) bool il2cpp_method_is_inflated (const MethodInfo * method);;
__attribute__ ((visibility ("default"))) bool il2cpp_method_is_instance (const MethodInfo * method);;
__attribute__ ((visibility ("default"))) uint32_t il2cpp_method_get_param_count (const MethodInfo * method);;
__attribute__ ((visibility ("default"))) const Il2CppType* il2cpp_method_get_param (const MethodInfo * method, uint32_t index);;
__attribute__ ((visibility ("default"))) Il2CppClass* il2cpp_method_get_class (const MethodInfo * method);;
__attribute__ ((visibility ("default"))) bool il2cpp_method_has_attribute (const MethodInfo * method, Il2CppClass * attr_class);;
__attribute__ ((visibility ("default"))) uint32_t il2cpp_method_get_flags (const MethodInfo * method, uint32_t * iflags);;
__attribute__ ((visibility ("default"))) uint32_t il2cpp_method_get_token (const MethodInfo * method);;
__attribute__ ((visibility ("default"))) const char* il2cpp_method_get_param_name (const MethodInfo * method, uint32_t index);;
__attribute__ ((visibility ("default"))) void il2cpp_profiler_install (Il2CppProfiler * prof, Il2CppProfileFunc shutdown_callback);;
__attribute__ ((visibility ("default"))) void il2cpp_profiler_set_events (Il2CppProfileFlags events);;
__attribute__ ((visibility ("default"))) void il2cpp_profiler_install_enter_leave (Il2CppProfileMethodFunc enter, Il2CppProfileMethodFunc fleave);;
__attribute__ ((visibility ("default"))) void il2cpp_profiler_install_allocation (Il2CppProfileAllocFunc callback);;
__attribute__ ((visibility ("default"))) void il2cpp_profiler_install_gc (Il2CppProfileGCFunc callback, Il2CppProfileGCResizeFunc heap_resize_callback);;
__attribute__ ((visibility ("default"))) void il2cpp_profiler_install_fileio (Il2CppProfileFileIOFunc callback);;
__attribute__ ((visibility ("default"))) uint32_t il2cpp_property_get_flags (PropertyInfo * prop);;
__attribute__ ((visibility ("default"))) const MethodInfo* il2cpp_property_get_get_method (PropertyInfo * prop);;
__attribute__ ((visibility ("default"))) const MethodInfo* il2cpp_property_get_set_method (PropertyInfo * prop);;
__attribute__ ((visibility ("default"))) const char* il2cpp_property_get_name (PropertyInfo * prop);;
__attribute__ ((visibility ("default"))) Il2CppClass* il2cpp_property_get_parent (PropertyInfo * prop);;
__attribute__ ((visibility ("default"))) Il2CppClass* il2cpp_object_get_class (Il2CppObject * obj);;
__attribute__ ((visibility ("default"))) uint32_t il2cpp_object_get_size (Il2CppObject * obj);;
__attribute__ ((visibility ("default"))) const MethodInfo* il2cpp_object_get_virtual_method (Il2CppObject * obj, const MethodInfo * method);;
__attribute__ ((visibility ("default"))) Il2CppObject* il2cpp_object_new (const Il2CppClass * klass);;
__attribute__ ((visibility ("default"))) void* il2cpp_object_unbox (Il2CppObject * obj);;
__attribute__ ((visibility ("default"))) Il2CppObject* il2cpp_value_box (Il2CppClass * klass, void* data);;
__attribute__ ((visibility ("default"))) void il2cpp_monitor_enter (Il2CppObject * obj);;
__attribute__ ((visibility ("default"))) bool il2cpp_monitor_try_enter (Il2CppObject * obj, uint32_t timeout);;
__attribute__ ((visibility ("default"))) void il2cpp_monitor_exit (Il2CppObject * obj);;
__attribute__ ((visibility ("default"))) void il2cpp_monitor_pulse (Il2CppObject * obj);;
__attribute__ ((visibility ("default"))) void il2cpp_monitor_pulse_all (Il2CppObject * obj);;
__attribute__ ((visibility ("default"))) void il2cpp_monitor_wait (Il2CppObject * obj);;
__attribute__ ((visibility ("default"))) bool il2cpp_monitor_try_wait (Il2CppObject * obj, uint32_t timeout);;
__attribute__ ((visibility ("default"))) Il2CppObject* il2cpp_runtime_invoke (const MethodInfo * method, void *obj, void **params, Il2CppException **exc);;
__attribute__ ((visibility ("default"))) Il2CppObject* il2cpp_runtime_invoke_convert_args (const MethodInfo * method, void *obj, Il2CppObject **params, int paramCount, Il2CppException **exc);;
__attribute__ ((visibility ("default"))) void il2cpp_runtime_class_init (Il2CppClass * klass);;
__attribute__ ((visibility ("default"))) void il2cpp_runtime_object_init (Il2CppObject * obj);;
__attribute__ ((visibility ("default"))) void il2cpp_runtime_object_init_exception (Il2CppObject * obj, Il2CppException** exc);;
__attribute__ ((visibility ("default"))) void il2cpp_runtime_unhandled_exception_policy_set (Il2CppRuntimeUnhandledExceptionPolicy value);;
__attribute__ ((visibility ("default"))) int32_t il2cpp_string_length (Il2CppString * str);;
__attribute__ ((visibility ("default"))) Il2CppChar* il2cpp_string_chars (Il2CppString * str);;
__attribute__ ((visibility ("default"))) Il2CppString* il2cpp_string_new (const char* str);;
__attribute__ ((visibility ("default"))) Il2CppString* il2cpp_string_new_len (const char* str, uint32_t length);;
__attribute__ ((visibility ("default"))) Il2CppString* il2cpp_string_new_utf16 (const Il2CppChar * text, int32_t len);;
__attribute__ ((visibility ("default"))) Il2CppString* il2cpp_string_new_wrapper (const char* str);;
__attribute__ ((visibility ("default"))) Il2CppString* il2cpp_string_intern (Il2CppString * str);;
__attribute__ ((visibility ("default"))) Il2CppString* il2cpp_string_is_interned (Il2CppString * str);;
__attribute__ ((visibility ("default"))) char* il2cpp_thread_get_name (Il2CppThread * thread, uint32_t * len);;
__attribute__ ((visibility ("default"))) Il2CppThread* il2cpp_thread_current ();;
__attribute__ ((visibility ("default"))) Il2CppThread* il2cpp_thread_attach (Il2CppDomain * domain);;
__attribute__ ((visibility ("default"))) void il2cpp_thread_detach (Il2CppThread * thread);;
__attribute__ ((visibility ("default"))) Il2CppThread** il2cpp_thread_get_all_attached_threads (size_t * size);;
__attribute__ ((visibility ("default"))) bool il2cpp_is_vm_thread (Il2CppThread * thread);;
__attribute__ ((visibility ("default"))) void il2cpp_current_thread_walk_frame_stack (Il2CppFrameWalkFunc func, void* user_data);;
__attribute__ ((visibility ("default"))) void il2cpp_thread_walk_frame_stack (Il2CppThread * thread, Il2CppFrameWalkFunc func, void* user_data);;
__attribute__ ((visibility ("default"))) bool il2cpp_current_thread_get_top_frame (Il2CppStackFrameInfo & frame);;
__attribute__ ((visibility ("default"))) bool il2cpp_thread_get_top_frame (Il2CppThread * thread, Il2CppStackFrameInfo & frame);;
__attribute__ ((visibility ("default"))) bool il2cpp_current_thread_get_frame_at (int32_t offset, Il2CppStackFrameInfo & frame);;
__attribute__ ((visibility ("default"))) bool il2cpp_thread_get_frame_at (Il2CppThread * thread, int32_t offset, Il2CppStackFrameInfo & frame);;
__attribute__ ((visibility ("default"))) int32_t il2cpp_current_thread_get_stack_depth ();;
__attribute__ ((visibility ("default"))) int32_t il2cpp_thread_get_stack_depth (Il2CppThread * thread);;
__attribute__ ((visibility ("default"))) Il2CppObject* il2cpp_type_get_object (const Il2CppType * type);;
__attribute__ ((visibility ("default"))) int il2cpp_type_get_type (const Il2CppType * type);;
__attribute__ ((visibility ("default"))) Il2CppClass* il2cpp_type_get_class_or_element_class (const Il2CppType * type);;
__attribute__ ((visibility ("default"))) char* il2cpp_type_get_name (const Il2CppType * type);;
__attribute__ ((visibility ("default"))) const Il2CppAssembly* il2cpp_image_get_assembly (const Il2CppImage * image);;
__attribute__ ((visibility ("default"))) const char* il2cpp_image_get_name (const Il2CppImage * image);;
__attribute__ ((visibility ("default"))) const char* il2cpp_image_get_filename (const Il2CppImage * image);;
__attribute__ ((visibility ("default"))) const MethodInfo* il2cpp_image_get_entry_point (const Il2CppImage * image);;
__attribute__ ((visibility ("default"))) Il2CppManagedMemorySnapshot* il2cpp_capture_memory_snapshot ();;
__attribute__ ((visibility ("default"))) void il2cpp_free_captured_memory_snapshot (Il2CppManagedMemorySnapshot * snapshot);;
__attribute__ ((visibility ("default"))) void il2cpp_set_find_plugin_callback (Il2CppSetFindPlugInCallback method);;
__attribute__ ((visibility ("default"))) void il2cpp_register_log_callback (Il2CppLogCallback method);;
}
