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
struct Il2CppMetadataField
{
    uint32_t offset;
    uint32_t typeIndex;
    const char* name;
    bool isStatic;
};
enum Il2CppMetadataTypeFlags
{
    kNone = 0,
    kValueType = 1 << 0,
    kArray = 1 << 1,
    kArrayRankMask = 0xFFFF0000
};
struct Il2CppMetadataType
{
    Il2CppMetadataTypeFlags flags;
    Il2CppMetadataField* fields;
    uint32_t fieldCount;
    uint32_t staticsSize;
    uint8_t* statics;
    uint32_t baseOrElementTypeIndex;
    char* name;
    const char* assemblyName;
    uint64_t typeInfoAddress;
    uint32_t size;
};
struct Il2CppMetadataSnapshot
{
    uint32_t typeCount;
    Il2CppMetadataType* types;
};
struct Il2CppManagedMemorySection
{
    uint64_t sectionStartAddress;
    uint32_t sectionSize;
    uint8_t* sectionBytes;
};
struct Il2CppManagedHeap
{
    uint32_t sectionCount;
    Il2CppManagedMemorySection* sections;
};
struct Il2CppStacks
{
    uint32_t stackCount;
    Il2CppManagedMemorySection* stacks;
};
struct NativeObject
{
    uint32_t gcHandleIndex;
    uint32_t size;
    uint32_t instanceId;
    uint32_t classId;
    uint32_t referencedNativeObjectIndicesCount;
    uint32_t* referencedNativeObjectIndices;
};
struct Il2CppGCHandles
{
    uint32_t trackedObjectCount;
    uint64_t* pointersToObjects;
};
struct Il2CppRuntimeInformation
{
    uint32_t pointerSize;
    uint32_t objectHeaderSize;
    uint32_t arrayHeaderSize;
    uint32_t arrayBoundsOffsetInHeader;
    uint32_t arraySizeOffsetInHeader;
    uint32_t allocationGranularity;
};
struct Il2CppManagedMemorySnapshot
{
    Il2CppManagedHeap heap;
    Il2CppStacks stacks;
    Il2CppMetadataSnapshot metadata;
    Il2CppGCHandles gcHandles;
    Il2CppRuntimeInformation runtimeInformation;
    void* additionalUserInformation;
};
namespace il2cpp
{
namespace vm
{
namespace MemoryInformation
{
    Il2CppManagedMemorySnapshot* CaptureManagedMemorySnapshot();
    void FreeCapturedManagedMemorySnapshot(Il2CppManagedMemorySnapshot* snapshot);
}
}
}
       
       
       
       
enum Il2CppTypeEnum
{
    IL2CPP_TYPE_END = 0x00,
    IL2CPP_TYPE_VOID = 0x01,
    IL2CPP_TYPE_BOOLEAN = 0x02,
    IL2CPP_TYPE_CHAR = 0x03,
    IL2CPP_TYPE_I1 = 0x04,
    IL2CPP_TYPE_U1 = 0x05,
    IL2CPP_TYPE_I2 = 0x06,
    IL2CPP_TYPE_U2 = 0x07,
    IL2CPP_TYPE_I4 = 0x08,
    IL2CPP_TYPE_U4 = 0x09,
    IL2CPP_TYPE_I8 = 0x0a,
    IL2CPP_TYPE_U8 = 0x0b,
    IL2CPP_TYPE_R4 = 0x0c,
    IL2CPP_TYPE_R8 = 0x0d,
    IL2CPP_TYPE_STRING = 0x0e,
    IL2CPP_TYPE_PTR = 0x0f,
    IL2CPP_TYPE_BYREF = 0x10,
    IL2CPP_TYPE_VALUETYPE = 0x11,
    IL2CPP_TYPE_CLASS = 0x12,
    IL2CPP_TYPE_VAR = 0x13,
    IL2CPP_TYPE_ARRAY = 0x14,
    IL2CPP_TYPE_GENERICINST = 0x15,
    IL2CPP_TYPE_TYPEDBYREF = 0x16,
    IL2CPP_TYPE_I = 0x18,
    IL2CPP_TYPE_U = 0x19,
    IL2CPP_TYPE_FNPTR = 0x1b,
    IL2CPP_TYPE_OBJECT = 0x1c,
    IL2CPP_TYPE_SZARRAY = 0x1d,
    IL2CPP_TYPE_MVAR = 0x1e,
    IL2CPP_TYPE_CMOD_REQD = 0x1f,
    IL2CPP_TYPE_CMOD_OPT = 0x20,
    IL2CPP_TYPE_INTERNAL = 0x21,
    IL2CPP_TYPE_MODIFIER = 0x40,
    IL2CPP_TYPE_SENTINEL = 0x41,
    IL2CPP_TYPE_PINNED = 0x45,
    IL2CPP_TYPE_ENUM = 0x55
};
       
typedef int32_t TypeIndex;
typedef int32_t TypeDefinitionIndex;
typedef int32_t FieldIndex;
typedef int32_t DefaultValueIndex;
typedef int32_t DefaultValueDataIndex;
typedef int32_t CustomAttributeIndex;
typedef int32_t ParameterIndex;
typedef int32_t MethodIndex;
typedef int32_t GenericMethodIndex;
typedef int32_t PropertyIndex;
typedef int32_t EventIndex;
typedef int32_t GenericContainerIndex;
typedef int32_t GenericParameterIndex;
typedef int16_t GenericParameterConstraintIndex;
typedef int32_t NestedTypeIndex;
typedef int32_t InterfacesIndex;
typedef int32_t VTableIndex;
typedef int32_t InterfaceOffsetIndex;
typedef int32_t RGCTXIndex;
typedef int32_t StringIndex;
typedef int32_t StringLiteralIndex;
typedef int32_t GenericInstIndex;
typedef int32_t ImageIndex;
typedef int32_t AssemblyIndex;
typedef int32_t InteropDataIndex;
const TypeIndex kTypeIndexInvalid = -1;
const TypeDefinitionIndex kTypeDefinitionIndexInvalid = -1;
const DefaultValueDataIndex kDefaultValueIndexNull = -1;
const EventIndex kEventIndexInvalid = -1;
const FieldIndex kFieldIndexInvalid = -1;
const MethodIndex kMethodIndexInvalid = -1;
const PropertyIndex kPropertyIndexInvalid = -1;
const GenericContainerIndex kGenericContainerIndexInvalid = -1;
const GenericParameterIndex kGenericParameterIndexInvalid = -1;
const RGCTXIndex kRGCTXIndexInvalid = -1;
const StringLiteralIndex kStringLiteralIndexInvalid = -1;
const InteropDataIndex kInteropDataIndexInvalid = -1;
typedef uint32_t EncodedMethodIndex;
enum Il2CppMetadataUsage
{
    kIl2CppMetadataUsageInvalid,
    kIl2CppMetadataUsageTypeInfo,
    kIl2CppMetadataUsageIl2CppType,
    kIl2CppMetadataUsageMethodDef,
    kIl2CppMetadataUsageFieldInfo,
    kIl2CppMetadataUsageStringLiteral,
    kIl2CppMetadataUsageMethodRef,
};
static inline Il2CppMetadataUsage GetEncodedIndexType(EncodedMethodIndex index)
{
    return (Il2CppMetadataUsage)((index & 0xE0000000) >> 29);
}
static inline uint32_t GetDecodedMethodIndex(EncodedMethodIndex index)
{
    return index & 0x1FFFFFFFU;
}
struct Il2CppImage;
struct Il2CppType;
struct Il2CppTypeDefinitionMetadata;
union Il2CppRGCTXDefinitionData
{
    int32_t rgctxDataDummy;
    MethodIndex methodIndex;
    TypeIndex typeIndex;
};
enum Il2CppRGCTXDataType
{
    IL2CPP_RGCTX_DATA_INVALID,
    IL2CPP_RGCTX_DATA_TYPE,
    IL2CPP_RGCTX_DATA_CLASS,
    IL2CPP_RGCTX_DATA_METHOD,
    IL2CPP_RGCTX_DATA_ARRAY,
};
struct Il2CppRGCTXDefinition
{
    Il2CppRGCTXDataType type;
    Il2CppRGCTXDefinitionData data;
};
struct Il2CppInterfaceOffsetPair
{
    TypeIndex interfaceTypeIndex;
    int32_t offset;
};
struct Il2CppTypeDefinition
{
    StringIndex nameIndex;
    StringIndex namespaceIndex;
    CustomAttributeIndex customAttributeIndex;
    TypeIndex byvalTypeIndex;
    TypeIndex byrefTypeIndex;
    TypeIndex declaringTypeIndex;
    TypeIndex parentIndex;
    TypeIndex elementTypeIndex;
    RGCTXIndex rgctxStartIndex;
    int32_t rgctxCount;
    GenericContainerIndex genericContainerIndex;
    uint32_t flags;
    FieldIndex fieldStart;
    MethodIndex methodStart;
    EventIndex eventStart;
    PropertyIndex propertyStart;
    NestedTypeIndex nestedTypesStart;
    InterfacesIndex interfacesStart;
    VTableIndex vtableStart;
    InterfacesIndex interfaceOffsetsStart;
    uint16_t method_count;
    uint16_t property_count;
    uint16_t field_count;
    uint16_t event_count;
    uint16_t nested_type_count;
    uint16_t vtable_count;
    uint16_t interfaces_count;
    uint16_t interface_offsets_count;
    uint32_t bitfield;
    uint32_t token;
};
struct Il2CppFieldDefinition
{
    StringIndex nameIndex;
    TypeIndex typeIndex;
    CustomAttributeIndex customAttributeIndex;
    uint32_t token;
};
struct Il2CppFieldDefaultValue
{
    FieldIndex fieldIndex;
    TypeIndex typeIndex;
    DefaultValueDataIndex dataIndex;
};
struct Il2CppFieldMarshaledSize
{
    FieldIndex fieldIndex;
    TypeIndex typeIndex;
    int32_t size;
};
struct Il2CppFieldRef
{
    TypeIndex typeIndex;
    FieldIndex fieldIndex;
};
struct Il2CppParameterDefinition
{
    StringIndex nameIndex;
    uint32_t token;
    CustomAttributeIndex customAttributeIndex;
    TypeIndex typeIndex;
};
struct Il2CppParameterDefaultValue
{
    ParameterIndex parameterIndex;
    TypeIndex typeIndex;
    DefaultValueDataIndex dataIndex;
};
struct Il2CppMethodDefinition
{
    StringIndex nameIndex;
    TypeDefinitionIndex declaringType;
    TypeIndex returnType;
    ParameterIndex parameterStart;
    CustomAttributeIndex customAttributeIndex;
    GenericContainerIndex genericContainerIndex;
    MethodIndex methodIndex;
    MethodIndex invokerIndex;
    MethodIndex reversePInvokeWrapperIndex;
    RGCTXIndex rgctxStartIndex;
    int32_t rgctxCount;
    uint32_t token;
    uint16_t flags;
    uint16_t iflags;
    uint16_t slot;
    uint16_t parameterCount;
};
struct Il2CppEventDefinition
{
    StringIndex nameIndex;
    TypeIndex typeIndex;
    MethodIndex add;
    MethodIndex remove;
    MethodIndex raise;
    CustomAttributeIndex customAttributeIndex;
    uint32_t token;
};
struct Il2CppPropertyDefinition
{
    StringIndex nameIndex;
    MethodIndex get;
    MethodIndex set;
    uint32_t attrs;
    CustomAttributeIndex customAttributeIndex;
    uint32_t token;
};
struct Il2CppMethodSpec
{
    MethodIndex methodDefinitionIndex;
    GenericInstIndex classIndexIndex;
    GenericInstIndex methodIndexIndex;
};
struct Il2CppStringLiteral
{
    uint32_t length;
    StringLiteralIndex dataIndex;
};
struct Il2CppGenericMethodIndices
{
    MethodIndex methodIndex;
    MethodIndex invokerIndex;
};
struct Il2CppGenericMethodFunctionsDefinitions
{
    GenericMethodIndex genericMethodIndex;
    Il2CppGenericMethodIndices indices;
};
const int kPublicKeyByteLength = 8;
struct Il2CppAssemblyName
{
    StringIndex nameIndex;
    StringIndex cultureIndex;
    StringIndex hashValueIndex;
    StringIndex publicKeyIndex;
    uint32_t hash_alg;
    int32_t hash_len;
    uint32_t flags;
    int32_t major;
    int32_t minor;
    int32_t build;
    int32_t revision;
    uint8_t publicKeyToken[kPublicKeyByteLength];
};
struct Il2CppImageDefinition
{
    StringIndex nameIndex;
    AssemblyIndex assemblyIndex;
    TypeDefinitionIndex typeStart;
    uint32_t typeCount;
    TypeDefinitionIndex exportedTypeStart;
    uint32_t exportedTypeCount;
    MethodIndex entryPointIndex;
    uint32_t token;
};
struct Il2CppAssembly
{
    ImageIndex imageIndex;
    CustomAttributeIndex customAttributeIndex;
    int32_t referencedAssemblyStart;
    int32_t referencedAssemblyCount;
    Il2CppAssemblyName aname;
};
struct Il2CppMetadataUsageList
{
    uint32_t start;
    uint32_t count;
};
struct Il2CppMetadataUsagePair
{
    uint32_t destinationIndex;
    uint32_t encodedSourceIndex;
};
struct Il2CppCustomAttributeTypeRange
{
    int32_t start;
    int32_t count;
};
struct Il2CppRange
{
    int32_t start;
    int32_t length;
};
struct Il2CppWindowsRuntimeTypeNamePair
{
    StringIndex nameIndex;
    TypeIndex typeIndex;
};
#pragma pack(push, p1,4)
struct Il2CppGlobalMetadataHeader
{
    int32_t sanity;
    int32_t version;
    int32_t stringLiteralOffset;
    int32_t stringLiteralCount;
    int32_t stringLiteralDataOffset;
    int32_t stringLiteralDataCount;
    int32_t stringOffset;
    int32_t stringCount;
    int32_t eventsOffset;
    int32_t eventsCount;
    int32_t propertiesOffset;
    int32_t propertiesCount;
    int32_t methodsOffset;
    int32_t methodsCount;
    int32_t parameterDefaultValuesOffset;
    int32_t parameterDefaultValuesCount;
    int32_t fieldDefaultValuesOffset;
    int32_t fieldDefaultValuesCount;
    int32_t fieldAndParameterDefaultValueDataOffset;
    int32_t fieldAndParameterDefaultValueDataCount;
    int32_t fieldMarshaledSizesOffset;
    int32_t fieldMarshaledSizesCount;
    int32_t parametersOffset;
    int32_t parametersCount;
    int32_t fieldsOffset;
    int32_t fieldsCount;
    int32_t genericParametersOffset;
    int32_t genericParametersCount;
    int32_t genericParameterConstraintsOffset;
    int32_t genericParameterConstraintsCount;
    int32_t genericContainersOffset;
    int32_t genericContainersCount;
    int32_t nestedTypesOffset;
    int32_t nestedTypesCount;
    int32_t interfacesOffset;
    int32_t interfacesCount;
    int32_t vtableMethodsOffset;
    int32_t vtableMethodsCount;
    int32_t interfaceOffsetsOffset;
    int32_t interfaceOffsetsCount;
    int32_t typeDefinitionsOffset;
    int32_t typeDefinitionsCount;
    int32_t rgctxEntriesOffset;
    int32_t rgctxEntriesCount;
    int32_t imagesOffset;
    int32_t imagesCount;
    int32_t assembliesOffset;
    int32_t assembliesCount;
    int32_t metadataUsageListsOffset;
    int32_t metadataUsageListsCount;
    int32_t metadataUsagePairsOffset;
    int32_t metadataUsagePairsCount;
    int32_t fieldRefsOffset;
    int32_t fieldRefsCount;
    int32_t referencedAssembliesOffset;
    int32_t referencedAssembliesCount;
    int32_t attributesInfoOffset;
    int32_t attributesInfoCount;
    int32_t attributeTypesOffset;
    int32_t attributeTypesCount;
    int32_t unresolvedVirtualCallParameterTypesOffset;
    int32_t unresolvedVirtualCallParameterTypesCount;
    int32_t unresolvedVirtualCallParameterRangesOffset;
    int32_t unresolvedVirtualCallParameterRangesCount;
    int32_t windowsRuntimeTypeNamesOffset;
    int32_t windowsRuntimeTypeNamesSize;
    int32_t exportedTypeDefinitionsOffset;
    int32_t exportedTypeDefinitionsCount;
};
#pragma pack(pop, p1)
struct Il2CppClass;
struct MethodInfo;
struct Il2CppType;
struct Il2CppArrayType
{
    const Il2CppType* etype;
    uint8_t rank;
    uint8_t numsizes;
    uint8_t numlobounds;
    int *sizes;
    int *lobounds;
};
struct Il2CppGenericInst
{
    uint32_t type_argc;
    const Il2CppType **type_argv;
};
struct Il2CppGenericContext
{
    const Il2CppGenericInst *class_inst;
    const Il2CppGenericInst *method_inst;
};
struct Il2CppGenericParameter
{
    GenericContainerIndex ownerIndex;
    StringIndex nameIndex;
    GenericParameterConstraintIndex constraintsStart;
    int16_t constraintsCount;
    uint16_t num;
    uint16_t flags;
};
struct Il2CppGenericContainer
{
    int32_t ownerIndex;
    int32_t type_argc;
    int32_t is_method;
    GenericParameterIndex genericParameterStart;
};
struct Il2CppGenericClass
{
    TypeDefinitionIndex typeDefinitionIndex;
    Il2CppGenericContext context;
    Il2CppClass *cached_class;
};
struct Il2CppGenericMethod
{
    const MethodInfo* methodDefinition;
    Il2CppGenericContext context;
};
struct Il2CppType
{
    union
    {
        void* dummy;
        TypeDefinitionIndex klassIndex;
        const Il2CppType *type;
        Il2CppArrayType *array;
        GenericParameterIndex genericParameterIndex;
        Il2CppGenericClass *generic_class;
    } data;
    unsigned int attrs : 16;
    Il2CppTypeEnum type : 8;
    unsigned int num_mods : 6;
    unsigned int byref : 1;
    unsigned int pinned : 1;
};
typedef enum
{
    IL2CPP_CALL_DEFAULT,
    IL2CPP_CALL_C,
    IL2CPP_CALL_STDCALL,
    IL2CPP_CALL_THISCALL,
    IL2CPP_CALL_FASTCALL,
    IL2CPP_CALL_VARARG
} Il2CppCallConvention;
enum Il2CppCharSet
{
    CHARSET_ANSI,
    CHARSET_UNICODE
};
struct Il2CppClass;
struct Il2CppGuid;
struct Il2CppImage;
struct Il2CppAssembly;
struct Il2CppAppDomain;
struct Il2CppAppDomainSetup;
struct Il2CppDelegate;
struct Il2CppAppContext;
struct Il2CppNameToTypeDefinitionIndexHashTable;
struct VirtualInvokeData
{
    Il2CppMethodPointer methodPtr;
    const MethodInfo* method;
};
enum Il2CppTypeNameFormat
{
    IL2CPP_TYPE_NAME_FORMAT_IL,
    IL2CPP_TYPE_NAME_FORMAT_REFLECTION,
    IL2CPP_TYPE_NAME_FORMAT_FULL_NAME,
    IL2CPP_TYPE_NAME_FORMAT_ASSEMBLY_QUALIFIED
};
extern bool g_il2cpp_is_fully_initialized;
typedef struct
{
    Il2CppImage *corlib;
    Il2CppClass *object_class;
    Il2CppClass *byte_class;
    Il2CppClass *void_class;
    Il2CppClass *boolean_class;
    Il2CppClass *sbyte_class;
    Il2CppClass *int16_class;
    Il2CppClass *uint16_class;
    Il2CppClass *int32_class;
    Il2CppClass *uint32_class;
    Il2CppClass *int_class;
    Il2CppClass *uint_class;
    Il2CppClass *int64_class;
    Il2CppClass *uint64_class;
    Il2CppClass *single_class;
    Il2CppClass *double_class;
    Il2CppClass *char_class;
    Il2CppClass *string_class;
    Il2CppClass *enum_class;
    Il2CppClass *array_class;
    Il2CppClass *delegate_class;
    Il2CppClass *multicastdelegate_class;
    Il2CppClass *asyncresult_class;
    Il2CppClass *manualresetevent_class;
    Il2CppClass *typehandle_class;
    Il2CppClass *fieldhandle_class;
    Il2CppClass *methodhandle_class;
    Il2CppClass *systemtype_class;
    Il2CppClass *monotype_class;
    Il2CppClass *exception_class;
    Il2CppClass *threadabortexception_class;
    Il2CppClass *thread_class;
    Il2CppClass *internal_thread_class;
    Il2CppClass *appdomain_class;
    Il2CppClass *appdomain_setup_class;
    Il2CppClass *field_info_class;
    Il2CppClass *method_info_class;
    Il2CppClass *property_info_class;
    Il2CppClass *event_info_class;
    Il2CppClass *mono_event_info_class;
    Il2CppClass *stringbuilder_class;
    Il2CppClass *stack_frame_class;
    Il2CppClass *stack_trace_class;
    Il2CppClass *marshal_class;
    Il2CppClass *typed_reference_class;
    Il2CppClass *marshalbyrefobject_class;
    Il2CppClass *generic_ilist_class;
    Il2CppClass *generic_icollection_class;
    Il2CppClass *generic_ienumerable_class;
    Il2CppClass *generic_ireadonlylist_class;
    Il2CppClass *generic_ireadonlycollection_class;
    Il2CppClass *runtimetype_class;
    Il2CppClass *generic_nullable_class;
    Il2CppClass *il2cpp_com_object_class;
    Il2CppClass *customattribute_data_class;
    Il2CppClass *version;
    Il2CppClass *culture_info;
    Il2CppClass *async_call_class;
    Il2CppClass *assembly_class;
    Il2CppClass *mono_assembly_class;
    Il2CppClass *assembly_name_class;
    Il2CppClass *mono_field_class;
    Il2CppClass *mono_method_class;
    Il2CppClass *mono_method_info_class;
    Il2CppClass *mono_property_info_class;
    Il2CppClass *parameter_info_class;
    Il2CppClass *mono_parameter_info_class;
    Il2CppClass *module_class;
    Il2CppClass *pointer_class;
    Il2CppClass *system_exception_class;
    Il2CppClass *argument_exception_class;
    Il2CppClass *wait_handle_class;
    Il2CppClass *safe_handle_class;
    Il2CppClass *sort_key_class;
    Il2CppClass *dbnull_class;
    Il2CppClass *error_wrapper_class;
    Il2CppClass *missing_class;
    Il2CppClass *value_type_class;
    Il2CppClass *threadpool_wait_callback_class;
    MethodInfo *threadpool_perform_wait_callback_method;
    Il2CppClass *mono_method_message_class;
    Il2CppClass* ireference_class;
    Il2CppClass* ikey_value_pair_class;
    Il2CppClass* key_value_pair_class;
    Il2CppClass* windows_foundation_uri_class;
    Il2CppClass* windows_foundation_iuri_runtime_class_class;
    Il2CppClass* system_uri_class;
} Il2CppDefaults;
extern Il2CppDefaults il2cpp_defaults;
struct Il2CppClass;
struct MethodInfo;
struct FieldInfo;
struct Il2CppObject;
struct MemberInfo;
struct CustomAttributesCache
{
    int count;
    Il2CppObject** attributes;
};
struct CustomAttributeTypeCache
{
    int count;
    Il2CppClass** attributeTypes;
};
typedef void (*CustomAttributesCacheGenerator)(CustomAttributesCache*);
const int THREAD_STATIC_FIELD_OFFSET = -1;
struct FieldInfo
{
    const char* name;
    const Il2CppType* type;
    Il2CppClass *parent;
    int32_t offset;
    CustomAttributeIndex customAttributeIndex;
    uint32_t token;
};
struct PropertyInfo
{
    Il2CppClass *parent;
    const char *name;
    const MethodInfo *get;
    const MethodInfo *set;
    uint32_t attrs;
    CustomAttributeIndex customAttributeIndex;
    uint32_t token;
};
struct EventInfo
{
    const char* name;
    const Il2CppType* eventType;
    Il2CppClass* parent;
    const MethodInfo* add;
    const MethodInfo* remove;
    const MethodInfo* raise;
    CustomAttributeIndex customAttributeIndex;
    uint32_t token;
};
struct ParameterInfo
{
    const char* name;
    int32_t position;
    uint32_t token;
    CustomAttributeIndex customAttributeIndex;
    const Il2CppType* parameter_type;
};
typedef void* (*InvokerMethod)(Il2CppMethodPointer, const MethodInfo*, void*, void**);
union Il2CppRGCTXData
{
    void* rgctxDataDummy;
    const MethodInfo* method;
    const Il2CppType* type;
    Il2CppClass* klass;
};
struct MethodInfo
{
    Il2CppMethodPointer methodPointer;
    InvokerMethod invoker_method;
    const char* name;
    Il2CppClass *declaring_type;
    const Il2CppType *return_type;
    const ParameterInfo* parameters;
    union
    {
        const Il2CppRGCTXData* rgctx_data;
        const Il2CppMethodDefinition* methodDefinition;
    };
    union
    {
        const Il2CppGenericMethod* genericMethod;
        const Il2CppGenericContainer* genericContainer;
    };
    CustomAttributeIndex customAttributeIndex;
    uint32_t token;
    uint16_t flags;
    uint16_t iflags;
    uint16_t slot;
    uint8_t parameters_count;
    uint8_t is_generic : 1;
    uint8_t is_inflated : 1;
};
struct Il2CppRuntimeInterfaceOffsetPair
{
    Il2CppClass* interfaceType;
    int32_t offset;
};
typedef void (*PInvokeMarshalToNativeFunc)(void* managedStructure, void* marshaledStructure);
typedef void (*PInvokeMarshalFromNativeFunc)(void* marshaledStructure, void* managedStructure);
typedef void (*PInvokeMarshalCleanupFunc)(void* marshaledStructure);
typedef struct Il2CppIUnknown* (*CreateCCWFunc)(Il2CppObject* obj);
struct Il2CppInteropData
{
    Il2CppMethodPointer delegatePInvokeWrapperFunction;
    PInvokeMarshalToNativeFunc pinvokeMarshalToNativeFunction;
    PInvokeMarshalFromNativeFunc pinvokeMarshalFromNativeFunction;
    PInvokeMarshalCleanupFunc pinvokeMarshalCleanupFunction;
    CreateCCWFunc createCCWFunction;
    const Il2CppGuid* guid;
    const Il2CppType* type;
};
struct Il2CppClass
{
    const Il2CppImage* image;
    void* gc_desc;
    const char* name;
    const char* namespaze;
    const Il2CppType* byval_arg;
    const Il2CppType* this_arg;
    Il2CppClass* element_class;
    Il2CppClass* castClass;
    Il2CppClass* declaringType;
    Il2CppClass* parent;
    Il2CppGenericClass *generic_class;
    const Il2CppTypeDefinition* typeDefinition;
    const Il2CppInteropData* interopData;
    FieldInfo* fields;
    const EventInfo* events;
    const PropertyInfo* properties;
    const MethodInfo** methods;
    Il2CppClass** nestedTypes;
    Il2CppClass** implementedInterfaces;
    Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
    void* static_fields;
    const Il2CppRGCTXData* rgctx_data;
    Il2CppClass** typeHierarchy;
    uint32_t cctor_started;
    uint32_t cctor_finished;
    __attribute__((aligned(8))) uint64_t cctor_thread;
    GenericContainerIndex genericContainerIndex;
    CustomAttributeIndex customAttributeIndex;
    uint32_t instance_size;
    uint32_t actualSize;
    uint32_t element_size;
    int32_t native_size;
    uint32_t static_fields_size;
    uint32_t thread_static_fields_size;
    int32_t thread_static_fields_offset;
    uint32_t flags;
    uint32_t token;
    uint16_t method_count;
    uint16_t property_count;
    uint16_t field_count;
    uint16_t event_count;
    uint16_t nested_type_count;
    uint16_t vtable_count;
    uint16_t interfaces_count;
    uint16_t interface_offsets_count;
    uint8_t typeHierarchyDepth;
    uint8_t genericRecursionDepth;
    uint8_t rank;
    uint8_t minimumAlignment;
    uint8_t packingSize;
    uint8_t valuetype : 1;
    uint8_t initialized : 1;
    uint8_t enumtype : 1;
    uint8_t is_generic : 1;
    uint8_t has_references : 1;
    uint8_t init_pending : 1;
    uint8_t size_inited : 1;
    uint8_t has_finalize : 1;
    uint8_t has_cctor : 1;
    uint8_t is_blittable : 1;
    uint8_t is_import_or_windows_runtime : 1;
    uint8_t is_vtable_initialized : 1;
    VirtualInvokeData vtable[0];
};
struct Il2CppTypeDefinitionSizes
{
    uint32_t instance_size;
    int32_t native_size;
    uint32_t static_fields_size;
    uint32_t thread_static_fields_size;
};
struct Il2CppDomain
{
    Il2CppAppDomain* domain;
    Il2CppAppDomainSetup* setup;
    Il2CppAppContext* default_context;
    const char* friendly_name;
    uint32_t domain_id;
    volatile int threadpool_jobs;
};
struct Il2CppImage
{
    const char* name;
    const char *nameNoExt;
    AssemblyIndex assemblyIndex;
    TypeDefinitionIndex typeStart;
    uint32_t typeCount;
    TypeDefinitionIndex exportedTypeStart;
    uint32_t exportedTypeCount;
    MethodIndex entryPointIndex;
    mutable Il2CppNameToTypeDefinitionIndexHashTable* nameToClassHashTable;
    uint32_t token;
};
struct Il2CppCodeGenOptions
{
    bool enablePrimitiveValueTypeGenericSharing;
};
struct Il2CppCodeRegistration
{
    uint32_t methodPointersCount;
    const Il2CppMethodPointer* methodPointers;
    uint32_t reversePInvokeWrapperCount;
    const Il2CppMethodPointer* reversePInvokeWrappers;
    uint32_t genericMethodPointersCount;
    const Il2CppMethodPointer* genericMethodPointers;
    uint32_t invokerPointersCount;
    const InvokerMethod* invokerPointers;
    CustomAttributeIndex customAttributeCount;
    const CustomAttributesCacheGenerator* customAttributeGenerators;
    uint32_t unresolvedVirtualCallCount;
    const Il2CppMethodPointer* unresolvedVirtualCallPointers;
    uint32_t interopDataCount;
    Il2CppInteropData* interopData;
};
struct Il2CppMetadataRegistration
{
    int32_t genericClassesCount;
    Il2CppGenericClass* const * genericClasses;
    int32_t genericInstsCount;
    const Il2CppGenericInst* const * genericInsts;
    int32_t genericMethodTableCount;
    const Il2CppGenericMethodFunctionsDefinitions* genericMethodTable;
    int32_t typesCount;
    const Il2CppType* const * types;
    int32_t methodSpecsCount;
    const Il2CppMethodSpec* methodSpecs;
    FieldIndex fieldOffsetsCount;
    const int32_t** fieldOffsets;
    TypeDefinitionIndex typeDefinitionsSizesCount;
    const Il2CppTypeDefinitionSizes** typeDefinitionsSizes;
    const size_t metadataUsagesCount;
    void** const* metadataUsages;
};
struct Il2CppRuntimeStats
{
    uint64_t new_object_count;
    uint64_t initialized_class_count;
    uint64_t method_count;
    uint64_t class_static_data_size;
    uint64_t generic_instance_count;
    uint64_t generic_class_count;
    uint64_t inflated_method_count;
    uint64_t inflated_type_count;
    bool enabled;
};
extern Il2CppRuntimeStats il2cpp_runtime_stats;
struct Il2CppPerfCounters
{
    uint32_t jit_methods;
    uint32_t jit_bytes;
    uint32_t jit_time;
    uint32_t jit_failures;
    uint32_t exceptions_thrown;
    uint32_t exceptions_filters;
    uint32_t exceptions_finallys;
    uint32_t exceptions_depth;
    uint32_t aspnet_requests_queued;
    uint32_t aspnet_requests;
    uint32_t gc_collections0;
    uint32_t gc_collections1;
    uint32_t gc_collections2;
    uint32_t gc_promotions0;
    uint32_t gc_promotions1;
    uint32_t gc_promotion_finalizers;
    uint32_t gc_gen0size;
    uint32_t gc_gen1size;
    uint32_t gc_gen2size;
    uint32_t gc_lossize;
    uint32_t gc_fin_survivors;
    uint32_t gc_num_handles;
    uint32_t gc_allocated;
    uint32_t gc_induced;
    uint32_t gc_time;
    uint32_t gc_total_bytes;
    uint32_t gc_committed_bytes;
    uint32_t gc_reserved_bytes;
    uint32_t gc_num_pinned;
    uint32_t gc_sync_blocks;
    uint32_t remoting_calls;
    uint32_t remoting_channels;
    uint32_t remoting_proxies;
    uint32_t remoting_classes;
    uint32_t remoting_objects;
    uint32_t remoting_contexts;
    uint32_t loader_classes;
    uint32_t loader_total_classes;
    uint32_t loader_appdomains;
    uint32_t loader_total_appdomains;
    uint32_t loader_assemblies;
    uint32_t loader_total_assemblies;
    uint32_t loader_failures;
    uint32_t loader_bytes;
    uint32_t loader_appdomains_uloaded;
    uint32_t thread_contentions;
    uint32_t thread_queue_len;
    uint32_t thread_queue_max;
    uint32_t thread_num_logical;
    uint32_t thread_num_physical;
    uint32_t thread_cur_recognized;
    uint32_t thread_num_recognized;
    uint32_t interop_num_ccw;
    uint32_t interop_num_stubs;
    uint32_t interop_num_marshals;
    uint32_t security_num_checks;
    uint32_t security_num_link_checks;
    uint32_t security_time;
    uint32_t security_depth;
    uint32_t unused;
    uint64_t threadpool_workitems;
    uint64_t threadpool_ioworkitems;
    unsigned int threadpool_threads;
    unsigned int threadpool_iothreads;
};
struct Il2CppClass;
struct MethodInfo;
struct PropertyInfo;
struct FieldInfo;
struct EventInfo;
struct Il2CppType;
struct Il2CppAssembly;
struct Il2CppException;
struct Il2CppImage;
struct Il2CppDomain;
struct Il2CppString;
struct Il2CppReflectionMethod;
struct Il2CppAsyncCall;
struct Il2CppIUnknown;
struct Il2CppWaitHandle;
struct MonitorData;
namespace il2cpp
{
namespace os
{
    class FastMutex;
    class Thread;
}
}
struct Il2CppReflectionAssembly;
struct Il2CppObject
{
    Il2CppClass *klass;
    MonitorData *monitor;
};
typedef int32_t il2cpp_array_lower_bound_t;
struct Il2CppArrayBounds
{
    il2cpp_array_size_t length;
    il2cpp_array_lower_bound_t lower_bound;
};
struct Il2CppArray : public Il2CppObject
{
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
};
struct Il2CppArraySize : public Il2CppArray
{
    __attribute__((aligned(8))) void* vector;
};
const size_t kIl2CppSizeOfArray = (__builtin_offsetof (Il2CppArraySize, vector));
const size_t kIl2CppOffsetOfArrayBounds = (__builtin_offsetof (Il2CppArray, bounds));
const size_t kIl2CppOffsetOfArrayLength = (__builtin_offsetof (Il2CppArray, max_length));
struct Il2CppString
{
    Il2CppObject object;
    int32_t length;
    Il2CppChar chars[0];
};
struct Il2CppReflectionType
{
    Il2CppObject object;
    const Il2CppType *type;
};
struct Il2CppReflectionRuntimeType
{
    Il2CppReflectionType type;
    Il2CppObject *type_info;
    Il2CppObject* genericCache;
    Il2CppObject* serializationCtor;
};
struct Il2CppReflectionMonoType
{
    Il2CppReflectionRuntimeType type;
    const Il2CppType* GetIl2CppType() const
    {
        return type.type.type;
    }
};
struct Il2CppReflectionEvent
{
    Il2CppObject object;
    Il2CppObject *cached_add_event;
};
struct Il2CppReflectionMonoEvent
{
    Il2CppReflectionEvent event;
    Il2CppReflectionType* reflectedType;
    const EventInfo* eventInfo;
};
struct Il2CppReflectionMonoEventInfo
{
    Il2CppReflectionType* declaringType;
    Il2CppReflectionType* reflectedType;
    Il2CppString* name;
    Il2CppReflectionMethod* addMethod;
    Il2CppReflectionMethod* removeMethod;
    Il2CppReflectionMethod* raiseMethod;
    uint32_t eventAttributes;
    Il2CppArray* otherMethods;
};
struct Il2CppReflectionField
{
    Il2CppObject object;
    Il2CppClass *klass;
    FieldInfo *field;
    Il2CppString *name;
    Il2CppReflectionType *type;
    uint32_t attrs;
};
struct Il2CppReflectionProperty
{
    Il2CppObject object;
    Il2CppClass *klass;
    const PropertyInfo *property;
};
struct Il2CppReflectionMethod
{
    Il2CppObject object;
    const MethodInfo *method;
    Il2CppString *name;
    Il2CppReflectionType *reftype;
};
struct Il2CppReflectionGenericMethod
{
    Il2CppReflectionMethod base;
};
struct Il2CppMethodInfo
{
    Il2CppReflectionType *parent;
    Il2CppReflectionType *ret;
    uint32_t attrs;
    uint32_t implattrs;
    uint32_t callconv;
};
struct Il2CppPropertyInfo
{
    Il2CppReflectionType* parent;
    Il2CppReflectionType* declaringType;
    Il2CppString *name;
    Il2CppReflectionMethod *get;
    Il2CppReflectionMethod *set;
    uint32_t attrs;
};
struct Il2CppReflectionParameter
{
    Il2CppObject object;
    Il2CppReflectionType *ClassImpl;
    Il2CppObject *DefaultValueImpl;
    Il2CppObject *MemberImpl;
    Il2CppString *NameImpl;
    int32_t PositionImpl;
    uint32_t AttrsImpl;
    Il2CppObject *MarshalAsImpl;
};
struct Il2CppReflectionModule
{
    Il2CppObject obj;
    const Il2CppImage* image;
    Il2CppReflectionAssembly* assembly;
    Il2CppString* fqname;
    Il2CppString* name;
    Il2CppString* scopename;
    bool is_resource;
    uint32_t token;
};
struct Il2CppReflectionAssemblyName
{
    Il2CppObject obj;
    Il2CppString *name;
    Il2CppString *codebase;
    int32_t major, minor, build, revision;
    Il2CppObject *cultureInfo;
    uint32_t flags;
    uint32_t hashalg;
    Il2CppObject *keypair;
    Il2CppArray *publicKey;
    Il2CppArray *keyToken;
    uint32_t versioncompat;
    Il2CppObject *version;
    uint32_t processor_architecture;
    uint32_t contentType;
};
struct Il2CppReflectionAssembly
{
    Il2CppObject object;
    const Il2CppAssembly *assembly;
    Il2CppObject *resolve_event_holder;
    Il2CppObject *evidence;
    Il2CppObject *minimum;
    Il2CppObject *optional;
    Il2CppObject *refuse;
    Il2CppObject *granted;
    Il2CppObject *denied;
    bool from_byte_array;
    Il2CppString *name;
};
struct Il2CppReflectionMarshal
{
    Il2CppObject object;
    int32_t count;
    int32_t type;
    int32_t eltype;
    Il2CppString* guid;
    Il2CppString* mcookie;
    Il2CppString* marshaltype;
    Il2CppObject* marshaltyperef;
    int32_t param_num;
    bool has_size;
};
struct Il2CppReflectionPointer
{
    Il2CppObject object;
    void* data;
    Il2CppReflectionType* type;
};
struct Il2CppInternalThread
{
    Il2CppObject obj;
    int lock_thread_id;
    il2cpp::os::Thread* handle;
    void* native_handle;
    Il2CppArray* cached_culture_info;
    Il2CppChar* name;
    int name_len;
    uint32_t state;
    Il2CppObject* abort_exc;
    int abort_state_handle;
    uint64_t tid;
    void* stack_ptr;
    void** static_data;
    void* runtime_thread_info;
    Il2CppObject* current_appcontext;
    Il2CppObject* root_domain_thread;
    Il2CppArray* _serialized_principal;
    int _serialized_principal_version;
    void* appdomain_refs;
    int32_t interruption_requested;
    il2cpp::os::FastMutex* synch_cs;
    bool threadpool_thread;
    bool thread_interrupt_requested;
    int stack_size;
    uint8_t apartment_state;
    int critical_region_level;
    int managed_id;
    uint32_t small_id;
    void* manage_callback;
    void* interrupt_on_stop;
    void* flags;
    void* thread_pinning_ref;
    void* abort_protected_block_count;
    int32_t priority;
    void* owned_mutexes;
    void * suspended;
    int32_t self_suspended;
    size_t thread_state;
    size_t unused2;
    void* last;
};
struct Il2CppIOSelectorJob
{
    Il2CppObject object;
    int32_t operation;
    Il2CppObject *callback;
    Il2CppObject *state;
};
typedef enum
{
    Il2Cpp_CallType_Sync = 0,
    Il2Cpp_CallType_BeginInvoke = 1,
    Il2Cpp_CallType_EndInvoke = 2,
    Il2Cpp_CallType_OneWay = 3
} Il2CppCallType;
struct Il2CppMethodMessage
{
    Il2CppObject obj;
    Il2CppReflectionMethod *method;
    Il2CppArray *args;
    Il2CppArray *names;
    Il2CppArray *arg_types;
    Il2CppObject *ctx;
    Il2CppObject *rval;
    Il2CppObject *exc;
    Il2CppAsyncResult *async_result;
    uint32_t call_type;
};
struct Il2CppAppDomainSetup
{
    Il2CppObject object;
    Il2CppString* application_base;
    Il2CppString* application_name;
    Il2CppString* cache_path;
    Il2CppString* configuration_file;
    Il2CppString* dynamic_base;
    Il2CppString* license_file;
    Il2CppString* private_bin_path;
    Il2CppString* private_bin_path_probe;
    Il2CppString* shadow_copy_directories;
    Il2CppString* shadow_copy_files;
    uint8_t publisher_policy;
    uint8_t path_changed;
    int loader_optimization;
    uint8_t disallow_binding_redirects;
    uint8_t disallow_code_downloads;
    Il2CppObject* activation_arguments;
    Il2CppObject* domain_initializer;
    Il2CppObject* application_trust;
    Il2CppArray* domain_initializer_args;
    uint8_t disallow_appbase_probe;
    Il2CppArray* configuration_bytes;
    Il2CppArray* serialized_non_primitives;
};
struct Il2CppThread
{
    Il2CppObject obj;
    Il2CppInternalThread* internal_thread;
    Il2CppObject* start_obj;
    Il2CppException* pending_exception;
    Il2CppObject* principal;
    int32_t principal_version;
    Il2CppDelegate* delegate;
    Il2CppObject* executionContext;
    bool executionContextBelongsToOuterScope;
    Il2CppInternalThread* GetInternalThread() const
    {
        return internal_thread;
    }
};
struct Il2CppException : public Il2CppObject
{
    Il2CppString* className;
    Il2CppString* message;
    Il2CppObject* _data;
    Il2CppException* inner_ex;
    Il2CppString* _helpURL;
    Il2CppArray* trace_ips;
    Il2CppString* stack_trace;
    Il2CppString* remote_stack_trace;
    int remote_stack_index;
    Il2CppObject* _dynamicMethods;
    il2cpp_hresult_t hresult;
    Il2CppString* source;
    Il2CppObject* safeSerializationManager;
    Il2CppArray* captured_traces;
    Il2CppArray* native_trace_ips;
};
struct Il2CppSystemException
{
    Il2CppException base;
};
struct Il2CppArgumentException
{
    Il2CppException base;
    Il2CppString *argName;
};
struct Il2CppTypedRef
{
    Il2CppType *type;
    void* value;
    Il2CppClass *klass;
};
struct Il2CppDelegate
{
    Il2CppObject object;
    Il2CppMethodPointer method_ptr;
    InvokerMethod invoke_impl;
    Il2CppObject *target;
    const MethodInfo *method;
    void* delegate_trampoline;
    intptr_t extraArg;
    uint8_t **method_code;
    Il2CppReflectionMethod *method_info;
    Il2CppReflectionMethod *original_method_info;
    Il2CppObject *data;
    bool method_is_virtual;
};
struct Il2CppMulticastDelegate
{
    Il2CppDelegate delegate;
    Il2CppArray *delegates;
};
struct Il2CppMarshalByRefObject
{
    Il2CppObject obj;
    Il2CppObject *identity;
};
struct Il2CppComObject : Il2CppObject
{
    Il2CppIUnknown* identity;
    volatile int32_t refCount;
};
struct Il2CppAppDomain
{
    Il2CppMarshalByRefObject mbr;
    Il2CppDomain *data;
};
struct Il2CppStackFrame
{
    Il2CppObject obj;
    int32_t il_offset;
    int32_t native_offset;
    uint64_t methodAddress;
    uint32_t methodIndex;
    Il2CppReflectionMethod *method;
    Il2CppString *filename;
    int32_t line;
    int32_t column;
    Il2CppString *internal_method_name;
};
struct Il2CppDateTimeFormatInfo
{
    Il2CppObject obj;
    Il2CppObject* CultureData;
    Il2CppString* Name;
    Il2CppString* LangName;
    Il2CppObject* CompareInfo;
    Il2CppObject* CultureInfo;
    Il2CppString* AMDesignator;
    Il2CppString* PMDesignator;
    Il2CppString* DateSeparator;
    Il2CppString* GeneralShortTimePattern;
    Il2CppString* GeneralLongTimePattern;
    Il2CppString* TimeSeparator;
    Il2CppString* MonthDayPattern;
    Il2CppString* DateTimeOffsetPattern;
    Il2CppObject* Calendar;
    uint32_t FirstDayOfWeek;
    uint32_t CalendarWeekRule;
    Il2CppString* FullDateTimePattern;
    Il2CppArray* AbbreviatedDayNames;
    Il2CppArray* ShortDayNames;
    Il2CppArray* DayNames;
    Il2CppArray* AbbreviatedMonthNames;
    Il2CppArray* MonthNames;
    Il2CppArray* GenitiveMonthNames;
    Il2CppArray* GenitiveAbbreviatedMonthNames;
    Il2CppArray* LeapYearMonthNames;
    Il2CppString* LongDatePattern;
    Il2CppString* ShortDatePattern;
    Il2CppString* YearMonthPattern;
    Il2CppString* LongTimePattern;
    Il2CppString* ShortTimePattern;
    Il2CppArray* YearMonthPatterns;
    Il2CppArray* ShortDatePatterns;
    Il2CppArray* LongDatePatterns;
    Il2CppArray* ShortTimePatterns;
    Il2CppArray* LongTimePatterns;
    Il2CppArray* EraNames;
    Il2CppArray* AbbrevEraNames;
    Il2CppArray* AbbrevEnglishEraNames;
    Il2CppArray* OptionalCalendars;
    bool readOnly;
    int32_t FormatFlags;
    int32_t CultureID;
    bool UseUserOverride;
    bool UseCalendarInfo;
    int32_t DataItem;
    bool IsDefaultCalendar;
    Il2CppArray* DateWords;
    Il2CppString* FullTimeSpanPositivePattern;
    Il2CppString* FullTimeSpanNegativePattern;
    Il2CppArray* dtfiTokenHash;
};
struct Il2CppNumberFormatInfo
{
    Il2CppObject obj;
    Il2CppArray* numberGroupSizes;
    Il2CppArray* currencyGroupSizes;
    Il2CppArray* percentGroupSizes;
    Il2CppString* positiveSign;
    Il2CppString* negativeSign;
    Il2CppString* numberDecimalSeparator;
    Il2CppString* numberGroupSeparator;
    Il2CppString* currencyGroupSeparator;
    Il2CppString* currencyDecimalSeparator;
    Il2CppString* currencySymbol;
    Il2CppString* ansiCurrencySymbol;
    Il2CppString* naNSymbol;
    Il2CppString* positiveInfinitySymbol;
    Il2CppString* negativeInfinitySymbol;
    Il2CppString* percentDecimalSeparator;
    Il2CppString* percentGroupSeparator;
    Il2CppString* percentSymbol;
    Il2CppString* perMilleSymbol;
    Il2CppArray* nativeDigits;
    int dataItem;
    int numberDecimalDigits;
    int currencyDecimalDigits;
    int currencyPositivePattern;
    int currencyNegativePattern;
    int numberNegativePattern;
    int percentPositivePattern;
    int percentNegativePattern;
    int percentDecimalDigits;
    int digitSubstitution;
    bool readOnly;
    bool useUserOverride;
    bool isInvariant;
    bool validForParseAsNumber;
    bool validForParseAsCurrency;
};
struct Il2CppCultureData
{
    Il2CppObject obj;
    Il2CppString *AMDesignator;
    Il2CppString *PMDesignator;
    Il2CppString *TimeSeparator;
    Il2CppArray *LongTimePatterns;
    Il2CppArray *ShortTimePatterns;
    uint32_t FirstDayOfWeek;
    uint32_t CalendarWeekRule;
};
struct Il2CppCalendarData
{
    Il2CppObject obj;
    Il2CppString *NativeName;
    Il2CppArray *ShortDatePatterns;
    Il2CppArray *YearMonthPatterns;
    Il2CppArray *LongDatePatterns;
    Il2CppString *MonthDayPattern;
    Il2CppArray *EraNames;
    Il2CppArray *AbbreviatedEraNames;
    Il2CppArray *AbbreviatedEnglishEraNames;
    Il2CppArray *DayNames;
    Il2CppArray *AbbreviatedDayNames;
    Il2CppArray *SuperShortDayNames;
    Il2CppArray *MonthNames;
    Il2CppArray *AbbreviatedMonthNames;
    Il2CppArray *GenitiveMonthNames;
    Il2CppArray *GenitiveAbbreviatedMonthNames;
};
struct Il2CppCultureInfo
{
    Il2CppObject obj;
    bool is_read_only;
    int32_t lcid;
    int32_t parent_lcid;
    int32_t datetime_index;
    int32_t number_index;
    int32_t default_calendar_type;
    bool use_user_override;
    Il2CppNumberFormatInfo* number_format;
    Il2CppDateTimeFormatInfo* datetime_format;
    Il2CppObject* textinfo;
    Il2CppString* name;
    Il2CppString* englishname;
    Il2CppString* nativename;
    Il2CppString* iso3lang;
    Il2CppString* iso2lang;
    Il2CppString* win3lang;
    Il2CppString* territory;
    Il2CppArray* native_calendar_names;
    Il2CppString* compareinfo;
    const void* text_info_data;
    int dataItem;
    Il2CppObject* calendar;
    Il2CppObject* parent_culture;
    bool constructed;
    Il2CppArray* cached_serialized_form;
    Il2CppObject* cultureData;
    bool isInherited;
};
struct Il2CppRegionInfo
{
    Il2CppObject obj;
    int32_t geo_id;
    Il2CppString* iso2name;
    Il2CppString* iso3name;
    Il2CppString* win3name;
    Il2CppString* english_name;
    Il2CppString* currency_symbol;
    Il2CppString* iso_currency_symbol;
    Il2CppString* currency_english_name;
};
struct Il2CppSafeHandle
{
    Il2CppObject base;
    void* handle;
    int state;
    bool owns_handle;
    bool fullyInitialized;
};
struct Il2CppStringBuilder
{
    Il2CppObject object;
    Il2CppArray* chunkChars;
    Il2CppStringBuilder* chunkPrevious;
    int chunkLength;
    int chunkOffset;
    int maxCapacity;
};
struct Il2CppSocketAddress
{
    Il2CppObject base;
    int m_Size;
    Il2CppArray* data;
    bool m_changed;
    int m_hash;
};
struct Il2CppSortKey
{
    Il2CppObject base;
    Il2CppString *str;
    Il2CppArray *key;
    int32_t options;
    int32_t lcid;
};
struct Il2CppErrorWrapper
{
    Il2CppObject base;
    int32_t errorCode;
};
struct Il2CppAsyncResult
{
    Il2CppObject base;
    Il2CppObject *async_state;
    Il2CppWaitHandle *handle;
    Il2CppDelegate *async_delegate;
    void* data;
    Il2CppAsyncCall *object_data;
    bool sync_completed;
    bool completed;
    bool endinvoke_called;
    Il2CppObject *async_callback;
    Il2CppObject *execution_context;
    Il2CppObject *original_context;
};
struct Il2CppAsyncCall
{
    Il2CppObject base;
    Il2CppMethodMessage *msg;
    MethodInfo *cb_method;
    Il2CppDelegate *cb_target;
    Il2CppObject *state;
    Il2CppObject *res;
    Il2CppArray *out_args;
};
struct Il2CppExceptionWrapper
{
    Il2CppException* ex;
    Il2CppExceptionWrapper(Il2CppException* ex) : ex(ex) {}
};
struct Il2CppIOAsyncResult
{
    Il2CppObject base;
    Il2CppDelegate* callback;
    Il2CppObject* state;
    Il2CppWaitHandle* wait_handle;
    bool completed_synchronously;
    bool completed;
};
struct Il2CppSocketAsyncResult
{
    Il2CppIOAsyncResult base;
    Il2CppObject* socket;
    int32_t operation;
    Il2CppException* delayedException;
    Il2CppObject* endPoint;
    Il2CppArray* buffer;
    int32_t offset;
    int32_t size;
    int32_t socket_flags;
    Il2CppObject* acceptSocket;
    Il2CppArray* addresses;
    int32_t port;
    Il2CppObject* buffers;
    bool reuseSocket;
    int32_t currentAddress;
    Il2CppObject* acceptedSocket;
    int32_t total;
    int32_t error;
    int32_t endCalled;
};
enum Il2CppResourceLocation
{
    IL2CPP_RESOURCE_LOCATION_EMBEDDED = 1,
    IL2CPP_RESOURCE_LOCATION_ANOTHER_ASSEMBLY = 2,
    IL2CPP_RESOURCE_LOCATION_IN_MANIFEST = 4
};
struct Il2CppManifestResourceInfo
{
    Il2CppObject object;
    Il2CppReflectionAssembly* assembly;
    Il2CppString* filename;
    uint32_t location;
};
struct Il2CppAppContext
{
    Il2CppObject obj;
    int32_t domain_id;
    int32_t context_id;
    void* static_data;
};
struct Il2CppDecimal
{
    uint16_t reserved;
    union
    {
        struct
        {
            uint8_t scale;
            uint8_t sign;
        } u;
        uint16_t signscale;
    } u;
    uint32_t Hi32;
    union
    {
        struct
        {
            uint32_t Lo32;
            uint32_t Mid32;
        } v;
        uint64_t Lo64;
    } v;
};
struct Il2CppDouble
{
    uint32_t mantLo : 32;
    uint32_t mantHi : 20;
    uint32_t exp : 11;
    uint32_t sign : 1;
};
typedef union
{
    Il2CppDouble s;
    double d;
} Il2CppDouble_double;
typedef enum
{
    IL2CPP_DECIMAL_CMP_LT = -1,
    IL2CPP_DECIMAL_CMP_EQ,
    IL2CPP_DECIMAL_CMP_GT
} Il2CppDecimalCompareResult;
struct Il2CppSingle
{
    uint32_t mant : 23;
    uint32_t exp : 8;
    uint32_t sign : 1;
};
typedef union
{
    Il2CppSingle s;
    float f;
} Il2CppSingle_float;
struct Il2CppGuid
{
    uint32_t data1;
    uint16_t data2;
    uint16_t data3;
    uint8_t data4[8];
};
struct Il2CppSafeArrayBound
{
    uint32_t element_count;
    int32_t lower_bound;
};
struct Il2CppSafeArray
{
    uint16_t dimension_count;
    uint16_t features;
    uint32_t element_size;
    uint32_t lock_count;
    void* data;
    Il2CppSafeArrayBound bounds[1];
};
struct Il2CppWin32Decimal
{
    uint16_t reserved;
    union
    {
        struct
        {
            uint8_t scale;
            uint8_t sign;
        } s;
        uint16_t signscale;
    } u;
    uint32_t hi32;
    union
    {
        struct
        {
            uint32_t lo32;
            uint32_t mid32;
        } s2;
        uint64_t lo64;
    } u2;
};
typedef int16_t IL2CPP_VARIANT_BOOL;
enum Il2CppVarType
{
    IL2CPP_VT_EMPTY = 0,
    IL2CPP_VT_NULL = 1,
    IL2CPP_VT_I2 = 2,
    IL2CPP_VT_I4 = 3,
    IL2CPP_VT_R4 = 4,
    IL2CPP_VT_R8 = 5,
    IL2CPP_VT_CY = 6,
    IL2CPP_VT_DATE = 7,
    IL2CPP_VT_BSTR = 8,
    IL2CPP_VT_DISPATCH = 9,
    IL2CPP_VT_ERROR = 10,
    IL2CPP_VT_BOOL = 11,
    IL2CPP_VT_VARIANT = 12,
    IL2CPP_VT_UNKNOWN = 13,
    IL2CPP_VT_DECIMAL = 14,
    IL2CPP_VT_I1 = 16,
    IL2CPP_VT_UI1 = 17,
    IL2CPP_VT_UI2 = 18,
    IL2CPP_VT_UI4 = 19,
    IL2CPP_VT_I8 = 20,
    IL2CPP_VT_UI8 = 21,
    IL2CPP_VT_INT = 22,
    IL2CPP_VT_UINT = 23,
    IL2CPP_VT_VOID = 24,
    IL2CPP_VT_HRESULT = 25,
    IL2CPP_VT_PTR = 26,
    IL2CPP_VT_SAFEARRAY = 27,
    IL2CPP_VT_CARRAY = 28,
    IL2CPP_VT_USERDEFINED = 29,
    IL2CPP_VT_LPSTR = 30,
    IL2CPP_VT_LPWSTR = 31,
    IL2CPP_VT_RECORD = 36,
    IL2CPP_VT_INT_PTR = 37,
    IL2CPP_VT_UINT_PTR = 38,
    IL2CPP_VT_FILETIME = 64,
    IL2CPP_VT_BLOB = 65,
    IL2CPP_VT_STREAM = 66,
    IL2CPP_VT_STORAGE = 67,
    IL2CPP_VT_STREAMED_OBJECT = 68,
    IL2CPP_VT_STORED_OBJECT = 69,
    IL2CPP_VT_BLOB_OBJECT = 70,
    IL2CPP_VT_CF = 71,
    IL2CPP_VT_CLSID = 72,
    IL2CPP_VT_VERSIONED_STREAM = 73,
    IL2CPP_VT_BSTR_BLOB = 0xfff,
    IL2CPP_VT_VECTOR = 0x1000,
    IL2CPP_VT_ARRAY = 0x2000,
    IL2CPP_VT_BYREF = 0x4000,
    IL2CPP_VT_RESERVED = 0x8000,
    IL2CPP_VT_ILLEGAL = 0xffff,
    IL2CPP_VT_ILLEGALMASKED = 0xfff,
    IL2CPP_VT_TYPEMASK = 0xfff,
};
struct Il2CppVariant
{
    union
    {
        struct __tagVARIANT
        {
            uint16_t type;
            uint16_t reserved1;
            uint16_t reserved2;
            uint16_t reserved3;
            union
            {
                int64_t llVal;
                int32_t lVal;
                uint8_t bVal;
                int16_t iVal;
                float fltVal;
                double dblVal;
                IL2CPP_VARIANT_BOOL boolVal;
                int32_t scode;
                int64_t cyVal;
                double date;
                Il2CppChar* bstrVal;
                Il2CppIUnknown* punkVal;
                void* pdispVal;
                Il2CppSafeArray* parray;
                uint8_t* pbVal;
                int16_t* piVal;
                int32_t* plVal;
                int64_t* pllVal;
                float* pfltVal;
                double* pdblVal;
                IL2CPP_VARIANT_BOOL* pboolVal;
                int32_t* pscode;
                int64_t* pcyVal;
                double* pdate;
                Il2CppChar* pbstrVal;
                Il2CppIUnknown** ppunkVal;
                void** ppdispVal;
                Il2CppSafeArray** pparray;
                Il2CppVariant* pvarVal;
                void* byref;
                char cVal;
                uint16_t uiVal;
                uint32_t ulVal;
                uint64_t ullVal;
                int intVal;
                unsigned int uintVal;
                Il2CppWin32Decimal* pdecVal;
                char* pcVal;
                uint16_t* puiVal;
                uint32_t* pulVal;
                uint64_t* pullVal;
                int* pintVal;
                unsigned int* puintVal;
                struct __tagBRECORD
                {
                    void* pvRecord;
                    void* pRecInfo;
                } n4;
            } n3;
        } n2;
        Il2CppWin32Decimal decVal;
    } n1;
};
struct Il2CppFileTime
{
    uint32_t low;
    uint32_t high;
};
struct Il2CppStatStg
{
    Il2CppChar* name;
    uint32_t type;
    uint64_t size;
    Il2CppFileTime mtime;
    Il2CppFileTime ctime;
    Il2CppFileTime atime;
    uint32_t mode;
    uint32_t locks;
    Il2CppGuid clsid;
    uint32_t state;
    uint32_t reserved;
};
struct Il2CppHString__
{
    int unused;
};
typedef Il2CppHString__* Il2CppHString;
struct Il2CppHStringHeader
{
    union
    {
        void* Reserved1;
        char Reserved2[24];
    } Reserved;
};
struct Il2CppIUnknown
{
    static const Il2CppGuid IID;
    virtual il2cpp_hresult_t QueryInterface(const Il2CppGuid& iid, void** object) = 0;
    virtual uint32_t AddRef() = 0;
    virtual uint32_t Release() = 0;
};
struct Il2CppISequentialStream : Il2CppIUnknown
{
    static const Il2CppGuid IID;
    virtual il2cpp_hresult_t Read(void* buffer, uint32_t size, uint32_t* read) = 0;
    virtual il2cpp_hresult_t Write(const void* buffer, uint32_t size, uint32_t* written) = 0;
};
struct Il2CppIStream : Il2CppISequentialStream
{
    static const Il2CppGuid IID;
    virtual il2cpp_hresult_t Seek(int64_t move, uint32_t origin, uint64_t* position) = 0;
    virtual il2cpp_hresult_t SetSize(uint64_t size) = 0;
    virtual il2cpp_hresult_t CopyTo(Il2CppIStream* stream, uint64_t size, uint64_t* read, uint64_t* written) = 0;
    virtual il2cpp_hresult_t Commit(uint32_t flags) = 0;
    virtual il2cpp_hresult_t Revert() = 0;
    virtual il2cpp_hresult_t LockRegion(uint64_t offset, uint64_t size, uint32_t type) = 0;
    virtual il2cpp_hresult_t UnlockRegion(uint64_t offset, uint64_t size, uint32_t type) = 0;
    virtual il2cpp_hresult_t Stat(Il2CppStatStg* data, uint32_t flags) = 0;
    virtual il2cpp_hresult_t Clone(Il2CppIStream** stream) = 0;
};
struct Il2CppIMarshal : Il2CppIUnknown
{
    static const Il2CppGuid IID;
    virtual il2cpp_hresult_t GetUnmarshalClass(const Il2CppGuid& iid, void* object, uint32_t context, void* reserved, uint32_t flags, Il2CppGuid* clsid) = 0;
    virtual il2cpp_hresult_t GetMarshalSizeMax(const Il2CppGuid& iid, void* object, uint32_t context, void* reserved, uint32_t flags, uint32_t* size) = 0;
    virtual il2cpp_hresult_t MarshalInterface(Il2CppIStream* stream, const Il2CppGuid& iid, void* object, uint32_t context, void* reserved, uint32_t flags) = 0;
    virtual il2cpp_hresult_t UnmarshalInterface(Il2CppIStream* stream, const Il2CppGuid& iid, void** object) = 0;
    virtual il2cpp_hresult_t ReleaseMarshalData(Il2CppIStream* stream) = 0;
    virtual il2cpp_hresult_t DisconnectObject(uint32_t reserved) = 0;
};
struct Il2CppIManagedObject : Il2CppIUnknown
{
    static const Il2CppGuid IID;
    virtual il2cpp_hresult_t GetSerializedBuffer(Il2CppChar** bstr) = 0;
    virtual il2cpp_hresult_t GetObjectIdentity(Il2CppChar** bstr_guid, int32_t* app_domain_id, intptr_t* ccw) = 0;
};
struct Il2CppIManagedObjectHolder : Il2CppIUnknown
{
    static const Il2CppGuid IID;
    virtual Il2CppObject* GetManagedObject() = 0;
    virtual void Destroy() = 0;
};
struct Il2CppIInspectable : Il2CppIUnknown
{
    static const Il2CppGuid IID;
    virtual il2cpp_hresult_t GetIids(uint32_t* iidCount, Il2CppGuid** iids) = 0;
    virtual il2cpp_hresult_t GetRuntimeClassName(Il2CppHString* className) = 0;
    virtual il2cpp_hresult_t GetTrustLevel(int32_t* trustLevel) = 0;
};
struct Il2CppIActivationFactory : Il2CppIInspectable
{
    static const Il2CppGuid IID;
    virtual il2cpp_hresult_t ActivateInstance(Il2CppIInspectable** instance) = 0;
};
struct Il2CppIRestrictedErrorInfo : Il2CppIUnknown
{
    static const Il2CppGuid IID;
    virtual il2cpp_hresult_t GetErrorDetails(Il2CppChar** bstrDescription, il2cpp_hresult_t* error, Il2CppChar** bstrRestrictedDescription, Il2CppChar** bstrCapabilitySid) = 0;
    virtual il2cpp_hresult_t GetReference(Il2CppChar** bstrReference) = 0;
};
struct Il2CppILanguageExceptionErrorInfo : Il2CppIUnknown
{
    static const Il2CppGuid IID;
    virtual il2cpp_hresult_t GetLanguageException(Il2CppIUnknown** languageException) = 0;
};
struct Il2CppIAgileObject : Il2CppIUnknown
{
    static const Il2CppGuid IID;
    virtual il2cpp_hresult_t GetLanguageException(Il2CppIUnknown** languageException) = 0;
};
