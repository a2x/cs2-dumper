// Generated using https://github.com/a2x/cs2-dumper
// 2025-07-16 05:17:05.277202900 UTC

namespace CS2Dumper.Schemas {
    // Module: pulse_system.dll
    // Class count: 112
    // Enum count: 9
    public static class PulseSystemDll {
        // Alignment: 4
        // Member count: 6
        public enum EPulseGraphExecutionHistoryFlag : uint {
            NO_FLAGS = 0x0,
            CURSOR_ADD_TAG = 0x1,
            CURSOR_REMOVE_TAG = 0x2,
            CURSOR_RETIRED = 0x4,
            REQUIREMENT_PASS = 0x8,
            REQUIREMENT_FAIL = 0x10
        }
        // Alignment: 4
        // Member count: 3
        public enum PulseTestEnumShape_t : uint {
            CIRCLE = 0x64,
            SQUARE = 0xC8,
            TRIANGLE = 0x12C
        }
        // Alignment: 4
        // Member count: 2
        public enum PulseMethodCallMode_t : uint {
            SYNC_WAIT_FOR_COMPLETION = 0x0,
            ASYNC_FIRE_AND_FORGET = 0x1
        }
        // Alignment: 4
        // Member count: 4
        public enum PulseCursorExecResult_t : uint {
            Succeeded = 0x0,
            Canceled = 0x1,
            Failed = 0x2,
            OngoingNotify = 0x3
        }
        // Alignment: 4
        // Member count: 21
        public enum PulseValueType_t : uint {
            PVAL_INVALID = unchecked((uint)-1),
            PVAL_BOOL = 0x0,
            PVAL_INT = 0x1,
            PVAL_FLOAT = 0x2,
            PVAL_STRING = 0x3,
            PVAL_VEC3 = 0x4,
            PVAL_TRANSFORM = 0x5,
            PVAL_COLOR_RGB = 0x6,
            PVAL_EHANDLE = 0x7,
            PVAL_RESOURCE = 0x8,
            PVAL_SNDEVT_GUID = 0x9,
            PVAL_SNDEVT_NAME = 0xA,
            PVAL_ENTITY_NAME = 0xB,
            PVAL_OPAQUE_HANDLE = 0xC,
            PVAL_TYPESAFE_INT = 0xD,
            PVAL_CURSOR_FLOW = 0xE,
            PVAL_ANY = 0xF,
            PVAL_SCHEMA_ENUM = 0x10,
            PVAL_PANORAMA_PANEL_HANDLE = 0x11,
            PVAL_TEST_HANDLE = 0x12,
            PVAL_COUNT = 0x13
        }
        // Alignment: 2
        // Member count: 75
        public enum PulseInstructionCode_t : ushort {
            INVALID = 0x0,
            IMMEDIATE_HALT = 0x1,
            RETURN_VOID = 0x2,
            RETURN_VALUE = 0x3,
            NOP = 0x4,
            JUMP = 0x5,
            JUMP_COND = 0x6,
            CHUNK_LEAP = 0x7,
            CHUNK_LEAP_COND = 0x8,
            PULSE_CALL_SYNC = 0x9,
            PULSE_CALL_ASYNC_FIRE = 0xA,
            CELL_INVOKE = 0xB,
            LIBRARY_INVOKE = 0xC,
            SET_VAR = 0xD,
            GET_VAR = 0xE,
            GET_CONST = 0xF,
            GET_DOMAIN_VALUE = 0x10,
            COPY = 0x11,
            NOT = 0x12,
            NEGATE = 0x13,
            ADD = 0x14,
            SUB = 0x15,
            MUL = 0x16,
            DIV = 0x17,
            MOD = 0x18,
            LT = 0x19,
            LTE = 0x1A,
            EQ = 0x1B,
            NE = 0x1C,
            AND = 0x1D,
            OR = 0x1E,
            CONVERT_VALUE = 0x1F,
            REINTERPRET_INSTANCE = 0x20,
            GET_BLACKBOARD_REFERENCE = 0x21,
            SET_BLACKBOARD_REFERENCE = 0x22,
            REQUIREMENT_RESULT = 0x23,
            LAST_SERIALIZED_CODE = 0x24,
            NEGATE_INT = 0x25,
            NEGATE_FLOAT = 0x26,
            ADD_INT = 0x27,
            ADD_FLOAT = 0x28,
            ADD_STRING = 0x29,
            SUB_INT = 0x2A,
            SUB_FLOAT = 0x2B,
            MUL_INT = 0x2C,
            MUL_FLOAT = 0x2D,
            DIV_INT = 0x2E,
            DIV_FLOAT = 0x2F,
            MOD_INT = 0x30,
            MOD_FLOAT = 0x31,
            LT_INT = 0x32,
            LT_FLOAT = 0x33,
            LTE_INT = 0x34,
            LTE_FLOAT = 0x35,
            EQ_BOOL = 0x36,
            EQ_INT = 0x37,
            EQ_FLOAT = 0x38,
            EQ_STRING = 0x39,
            EQ_ENTITY_NAME = 0x3A,
            EQ_SCHEMA_ENUM = 0x3B,
            EQ_EHANDLE = 0x3C,
            EQ_PANEL_HANDLE = 0x3D,
            EQ_OPAQUE_HANDLE = 0x3E,
            EQ_TEST_HANDLE = 0x3F,
            NE_BOOL = 0x40,
            NE_INT = 0x41,
            NE_FLOAT = 0x42,
            NE_STRING = 0x43,
            NE_ENTITY_NAME = 0x44,
            NE_SCHEMA_ENUM = 0x45,
            NE_EHANDLE = 0x46,
            NE_PANEL_HANDLE = 0x47,
            NE_OPAQUE_HANDLE = 0x48,
            NE_TEST_HANDLE = 0x49,
            GET_CONST_INLINE_STORAGE = 0x4A
        }
        // Alignment: 4
        // Member count: 5
        public enum PulseTestEnumColor_t : uint {
            BLACK = 0x0,
            WHITE = 0x1,
            RED = 0x2,
            GREEN = 0x3,
            BLUE = 0x4
        }
        // Alignment: 4
        // Member count: 4
        public enum PulseCursorCancelPriority_t : uint {
            None = 0x0,
            CancelOnSucceeded = 0x1,
            SoftCancel = 0x2,
            HardCancel = 0x3
        }
        // Alignment: 4
        // Member count: 4
        public enum PulseDomainValueType_t : uint {
            INVALID = unchecked((uint)-1),
            ENTITY_NAME = 0x0,
            PANEL_ID = 0x1,
            COUNT = 0x2
        }
        // Parent: CPulseCell_BaseFlow
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        public static class CPulseCell_Step_PublicOutput {
            public const nint m_OutputIndex = 0x48; // PulseRuntimeOutputIndex_t
        }
        // Parent: CPulseCell_BaseValue
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        // MPropertyFriendlyName
        public static class CPulseCell_Val_TestDomainFindEntityByName {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyDescription
        public static class CPulseTestFuncs_LibraryA {
        }
        // Parent: CPulseCell_BaseFlow
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        // MPropertyFriendlyName
        public static class CPulseCell_Step_TestDomainDestroyFakeEntity {
        }
        // Parent: CPulseCell_BaseFlow
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        public static class CPulseCell_Test_MultiOutflow_WithParams {
            public const nint m_Out1 = 0x48; // SignatureOutflow_Continue
            public const nint m_Out2 = 0x78; // SignatureOutflow_Continue
        }
        // Parent: None
        // Field count: 1
        public static class PulseRuntimeVarIndex_t {
            public const nint m_Value = 0x0; // int32
        }
        // Parent: None
        // Field count: 1
        public static class PulseRuntimeEntrypointIndex_t {
            public const nint m_Value = 0x0; // int32
        }
        // Parent: None
        // Field count: 1
        public static class PulseRuntimeDomainValueIndex_t {
            public const nint m_Value = 0x0; // int16
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_Chunk {
            public const nint m_Instructions = 0x0; // CUtlLeanVector<PGDInstruction_t>
            public const nint m_Registers = 0x10; // CUtlLeanVector<CPulse_RegisterInfo>
            public const nint m_InstructionEditorIDs = 0x20; // CUtlLeanVector<PulseDocNodeID_t>
        }
        // Parent: None
        // Field count: 1
        public static class PulseRuntimeInvokeIndex_t {
            public const nint m_Value = 0x0; // int32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_CycleOrdered__InstanceState_t {
            public const nint m_nNextIndex = 0x0; // int32
        }
        // Parent: CPulseCell_BaseYieldingInflow
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_WaitForCursorsWithTagBase {
            public const nint m_nCursorsAllowedToWait = 0x48; // int32
            public const nint m_WaitComplete = 0x50; // CPulse_ResumePoint
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyDescription
        public static class CPulseTestScriptLib {
        }
        // Parent: None
        // Field count: 1
        public static class PulseRuntimeRegisterIndex_t {
            public const nint m_Value = 0x0; // int16
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Timeline__TimelineEvent_t {
            public const nint m_flTimeFromPrevious = 0x0; // float32
            public const nint m_bPauseForPreviousEvents = 0x4; // bool
            public const nint m_bCallModeSync = 0x5; // bool
            public const nint m_EventOutflow = 0x8; // CPulse_OutflowConnection
        }
        // Parent: None
        // Field count: 4
        public static class CPulse_OutflowConnection {
            public const nint m_SourceOutflowName = 0x0; // CUtlSymbolLarge
            public const nint m_nDestChunk = 0x8; // PulseRuntimeChunkIndex_t
            public const nint m_nInstruction = 0xC; // int32
            public const nint m_OutflowRegisterMap = 0x10; // PulseRegisterMap_t
        }
        // Parent: None
        // Field count: 1
        public static class PulseCursorID_t {
            public const nint m_Value = 0x0; // int32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        public static class CBasePulseGraphInstance {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Base {
            public const nint m_nEditorNodeID = 0x8; // PulseDocNodeID_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t {
            public const nint nTestStep = 0x0; // int32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PulseGraphExecutionHistoryCursorDesc_t {
            public const nint vecAncestorCursorIDs = 0x0; // CUtlVector<PulseCursorID_t>
            public const nint nSpawnNodeID = 0x18; // PulseDocNodeID_t
            public const nint nRetiredAtNodeID = 0x1C; // PulseDocNodeID_t
            public const nint flLastReferenced = 0x20; // float32
            public const nint nLastValidEntryIdx = 0x24; // int32
        }
        // Parent: CPulseCell_BaseYieldingInflow
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        public static class CPulseCell_Inflow_Yield {
            public const nint m_UnyieldResume = 0x48; // CPulse_ResumePoint
        }
        // Parent: CPulseCell_Inflow_BaseEntrypoint
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        public static class CPulseCell_Inflow_GraphHook {
            public const nint m_HookName = 0x70; // CUtlSymbolLarge
        }
        // Parent: CPulseCell_BaseYieldingInflow
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_Inflow_Wait {
            public const nint m_WakeResume = 0x48; // CPulse_ResumePoint
        }
        // Parent: CPulseExecCursor
        // Field count: 2
        //
        // Metadata:
        // MPulseLibraryBindings
        public static class CTestDomainDerived_Cursor {
            public const nint m_nCursorValueA = 0xA8; // int32
            public const nint m_nCursorValueB = 0xAC; // int32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PulseRegisterMap_t {
            public const nint m_Inparams = 0x0; // KeyValues3
            public const nint m_Outparams = 0x10; // KeyValues3
        }
        // Parent: CPulseCell_WaitForCursorsWithTagBase
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_CursorQueue {
            public const nint m_nCursorsAllowedToRunParallel = 0x80; // int32
        }
        // Parent: CPulseCell_Base
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseRequirement {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PulseNodeDynamicOutflows_t {
            public const nint m_Outflows = 0x0; // CUtlVector<PulseNodeDynamicOutflows_t::DynamicOutflow_t>
        }
        // Parent: CPulseCell_BaseValue
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseCell_Value_TestValue50 {
        }
        // Parent: CPulseCell_BaseFlow
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        public static class CPulseCell_Test_MultiInflow_WithDefault {
        }
        // Parent: None
        // Field count: 0
        public static class IGapHost_ExecLog {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGapTypeQueriesForScopeSingleton
        public static class CPulseTestGapTypeQueryRegistration {
        }
        // Parent: CPulseCell_Base
        // Field count: 1
        public static class CPulseCell_Unknown {
            public const nint m_UnknownKeys = 0x48; // KeyValues3
        }
        // Parent: CPulseCell_BaseFlow
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        public static class CPulseCell_Outflow_StringSwitch {
            public const nint m_DefaultCaseOutflow = 0x48; // CPulse_OutflowConnection
            public const nint m_CaseOutflows = 0x78; // CUtlVector<CPulse_OutflowConnection>
        }
        // Parent: CPulseCell_BaseFlow
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        public static class CPulseCell_Test_NoInflow {
        }
        // Parent: CPulseCell_BaseYieldingInflow
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        public static class CPulseCell_FireCursors {
            public const nint m_Outflows = 0x48; // CUtlVector<CPulse_OutflowConnection>
            public const nint m_bWaitForChildOutflows = 0x60; // bool
            public const nint m_OnFinished = 0x68; // CPulse_ResumePoint
            public const nint m_OnCanceled = 0x98; // CPulse_ResumePoint
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_CycleShuffled__InstanceState_t {
            public const nint m_Shuffle = 0x0; // CUtlVectorFixedGrowable<uint8,8>
            public const nint m_nNextShuffle = 0x20; // int32
        }
        // Parent: CPulseCell_Base
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseValue {
        }
        // Parent: CPulse_OutflowConnection
        // Field count: 0
        public static class CPulse_ResumePoint {
        }
        // Parent: CPulseCell_BaseFlow
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        public static class CPulseCell_Outflow_CycleRandom {
            public const nint m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
        }
        // Parent: CPulseCell_Inflow_BaseEntrypoint
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        public static class CPulseCell_Inflow_EventHandler {
            public const nint m_EventName = 0x70; // CUtlSymbolLarge
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseLerp__CursorState_t {
            public const nint m_StartTime = 0x0; // GameTime_t
            public const nint m_EndTime = 0x4; // GameTime_t
        }
        // Parent: IGapHost_ExecLog
        // Field count: 0
        public static class IGapHost_Cursor {
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_PublicOutput {
            public const nint m_Name = 0x0; // CUtlSymbolLarge
            public const nint m_Description = 0x8; // CUtlString
            public const nint m_ParamType = 0x10; // CPulseValueFullType
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyDescription
        public static class CPulseCursorFuncs {
        }
        // Parent: CPulseCell_BaseYieldingInflow
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        public static class CPulseCell_Timeline {
            public const nint m_TimelineEvents = 0x48; // CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
            public const nint m_bWaitForChildOutflows = 0x60; // bool
            public const nint m_OnFinished = 0x68; // CPulse_ResumePoint
            public const nint m_OnCanceled = 0x98; // CPulse_ResumePoint
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_OutputConnection {
            public const nint m_SourceOutput = 0x0; // CUtlSymbolLarge
            public const nint m_TargetEntity = 0x8; // CUtlSymbolLarge
            public const nint m_TargetInput = 0x10; // CUtlSymbolLarge
            public const nint m_Param = 0x18; // CUtlSymbolLarge
        }
        // Parent: CPulseCell_BaseRequirement
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseRequirementPass
        // MPulseRequirementSummaryExpr
        public static class CPulseCell_LimitCount {
            public const nint m_nLimitCount = 0x48; // int32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PulseGraphExecutionHistoryNodeDesc_t {
            public const nint strCellDesc = 0x0; // CBufferString
            public const nint strBindingName = 0x10; // CUtlSymbolLarge
        }
        // Parent: CPulse_ResumePoint
        // Field count: 0
        public static class SignatureOutflow_Resume {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class FakeEntity_tAPI {
        }
        // Parent: CPulseCell_BaseYieldingInflow
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        public static class CPulseCell_Step_CallExternalMethod {
            public const nint m_MethodName = 0x48; // CUtlSymbolLarge
            public const nint m_GameBlackboard = 0x50; // CUtlSymbolLarge
            public const nint m_ExpectedArgs = 0x58; // CUtlLeanVector<CPulseRuntimeMethodArg>
            public const nint m_nAsyncCallMode = 0x68; // PulseMethodCallMode_t
            public const nint m_OnFinished = 0x70; // CPulse_ResumePoint
        }
        // Parent: CBasePulseGraphInstance
        // Field count: 0
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseDomainHookInfo
        // MPulseLibraryBindings
        public static class CPulseGraphInstance_TurtleGraphics {
        }
        // Parent: CPulseCell_Base
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseFlow {
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PulseGraphExecutionHistoryEntry_t {
            public const nint nCursorID = 0x0; // PulseCursorID_t
            public const nint nEditorID = 0x4; // PulseDocNodeID_t
            public const nint flExecTime = 0x8; // float32
            public const nint unFlags = 0xC; // uint32
            public const nint tagName = 0x10; // CUtlSymbolLarge
        }
        // Parent: None
        // Field count: 1
        public static class PulseCursorYieldToken_t {
            public const nint m_Value = 0x0; // int32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseGraphExecutionHistory {
            public const nint m_nInstanceID = 0x0; // PulseGraphInstanceID_t
            public const nint m_strFileName = 0x8; // CUtlString
            public const nint m_vecHistory = 0x10; // CUtlVector<PulseGraphExecutionHistoryEntry_t*>
            public const nint m_mapCellDesc = 0x28; // CUtlOrderedMap<PulseDocNodeID_t,PulseGraphExecutionHistoryNodeDesc_t*>
            public const nint m_mapCursorDesc = 0x50; // CUtlOrderedMap<PulseCursorID_t,PulseGraphExecutionHistoryCursorDesc_t*>
        }
        // Parent: CPulseCell_BaseYieldingInflow
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        public static class CPulseCell_TestWaitWithCursorState {
            public const nint m_WakeResume = 0x48; // CPulse_ResumePoint
            public const nint m_WakeCancel = 0x78; // CPulse_ResumePoint
            public const nint m_WakeFail = 0xA8; // CPulse_ResumePoint
        }
        // Parent: CPulseCell_Inflow_BaseEntrypoint
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        public static class CPulseCell_Inflow_ObservableVariableListener {
            public const nint m_BlackboardReference = 0x70; // CPulse_BlackboardReference
            public const nint m_bSelfReference = 0x168; // bool
        }
        // Parent: CPulseCell_BaseFlow
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseYieldingInflow {
        }
        // Parent: None
        // Field count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PGDInstruction_t {
            public const nint m_nCode = 0x0; // PulseInstructionCode_t
            public const nint m_nVar = 0x4; // PulseRuntimeVarIndex_t
            public const nint m_nReg0 = 0x8; // PulseRuntimeRegisterIndex_t
            public const nint m_nReg1 = 0xA; // PulseRuntimeRegisterIndex_t
            public const nint m_nReg2 = 0xC; // PulseRuntimeRegisterIndex_t
            public const nint m_nInvokeBindingIndex = 0x10; // PulseRuntimeInvokeIndex_t
            public const nint m_nChunk = 0x14; // PulseRuntimeChunkIndex_t
            public const nint m_nDestInstruction = 0x18; // int32
            public const nint m_nCallInfoIndex = 0x1C; // PulseRuntimeCallInfoIndex_t
            public const nint m_nConstIdx = 0x20; // PulseRuntimeConstantIndex_t
            public const nint m_nDomainValueIdx = 0x22; // PulseRuntimeDomainValueIndex_t
            public const nint m_nBlackboardReferenceIdx = 0x24; // PulseRuntimeBlackboardReferenceIndex_t
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_InvokeBinding {
            public const nint m_RegisterMap = 0x0; // PulseRegisterMap_t
            public const nint m_FuncName = 0x20; // CUtlSymbolLarge
            public const nint m_nCellIndex = 0x28; // PulseRuntimeCellIndex_t
            public const nint m_nSrcChunk = 0x2C; // PulseRuntimeChunkIndex_t
            public const nint m_nSrcInstruction = 0x30; // int32
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_Variable {
            public const nint m_Name = 0x0; // CUtlSymbolLarge
            public const nint m_Description = 0x8; // CUtlString
            public const nint m_Type = 0x10; // CPulseValueFullType
            public const nint m_DefaultValue = 0x20; // KeyValues3
            public const nint m_bIsPublic = 0x32; // bool
            public const nint m_bIsObservable = 0x33; // bool
            public const nint m_nEditorNodeID = 0x34; // PulseDocNodeID_t
        }
        // Parent: CPulseCell_Inflow_BaseEntrypoint
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        public static class CPulseCell_Inflow_Method {
            public const nint m_MethodName = 0x70; // CUtlSymbolLarge
            public const nint m_Description = 0x78; // CUtlString
            public const nint m_bIsPublic = 0x80; // bool
            public const nint m_ReturnType = 0x88; // CPulseValueFullType
            public const nint m_Args = 0x98; // CUtlLeanVector<CPulseRuntimeMethodArg>
        }
        // Parent: CBasePulseGraphInstance
        // Field count: 6
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseDomainHookInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CPulseGraphInstance_TestDomain {
            public const nint m_bIsRunningUnitTests = 0xF8; // bool
            public const nint m_bExplicitTimeStepping = 0xF9; // bool
            public const nint m_bExpectingToDestroyWithYieldedCursors = 0xFA; // bool
            public const nint m_nNextValidateIndex = 0xFC; // int32
            public const nint m_Tracepoints = 0x100; // CUtlVector<CUtlString>
            public const nint m_bTestYesOrNoPath = 0x118; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class FakeEntityDerivedB_tAPI {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PulseNodeDynamicOutflows_t__DynamicOutflow_t {
            public const nint m_OutflowID = 0x0; // CGlobalSymbol
            public const nint m_Connection = 0x8; // CPulse_OutflowConnection
        }
        // Parent: CPulseCell_BaseFlow
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        public static class CPulseCell_Outflow_CycleShuffled {
            public const nint m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
        }
        // Parent: None
        // Field count: 1
        public static class PulseRuntimeOutputIndex_t {
            public const nint m_Value = 0x0; // int32
        }
        // Parent: None
        // Field count: 1
        public static class CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
            public const nint m_TagName = 0x0; // CUtlSymbolLarge
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_TestWaitWithCursorState__CursorState_t {
            public const nint flWaitValue = 0x0; // float32
            public const nint bFailOnCancel = 0x4; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_DomainValue {
            public const nint m_nType = 0x0; // PulseDomainValueType_t
            public const nint m_Value = 0x8; // CGlobalSymbol
            public const nint m_ExpectedRuntimeType = 0x10; // CGlobalSymbol
        }
        // Parent: CPulseCell_BaseFlow
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        // MPropertyFriendlyName
        public static class CPulseCell_Step_TestDomainCreateFakeEntity {
        }
        // Parent: CPulseCell_BaseFlow
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        // MPropertyFriendlyName
        // MPulseEditorHeaderText
        public static class CPulseCell_Step_TestDomainEntFire {
            public const nint m_Input = 0x48; // CUtlString
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyDescription
        public static class CPulseMathlib {
        }
        // Parent: None
        // Field count: 1
        public static class PulseRuntimeBlackboardReferenceIndex_t {
            public const nint m_Value = 0x0; // int16
        }
        // Parent: IGapHost_Cursor
        // Field count: 0
        public static class IGapHost_YieldingCursor {
        }
        // Parent: CPulse_OutflowConnection
        // Field count: 0
        public static class SignatureOutflow_Continue {
        }
        // Parent: CPulseCell_BaseYieldingInflow
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        public static class CPulseCell_Test_MultiOutflow_WithParams_Yielding {
            public const nint m_Out1 = 0x48; // SignatureOutflow_Continue
            public const nint m_AsyncChild1 = 0x78; // SignatureOutflow_Continue
            public const nint m_AsyncChild2 = 0xA8; // SignatureOutflow_Continue
            public const nint m_YieldResume1 = 0xD8; // SignatureOutflow_Resume
            public const nint m_YieldResume2 = 0x108; // SignatureOutflow_Resume
        }
        // Parent: CPulseGraphInstance_TestDomain
        // Field count: 1
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseDomainHookInfo
        // MPulseLibraryBindings
        public static class CPulseGraphInstance_TestDomain_Derived {
            public const nint m_nInstanceValueX = 0x120; // int32
        }
        // Parent: CPulseCell_Inflow_BaseEntrypoint
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        public static class CPulseCell_Inflow_EntOutputHandler {
            public const nint m_SourceEntity = 0x70; // CUtlSymbolLarge
            public const nint m_SourceOutput = 0x78; // CUtlSymbolLarge
            public const nint m_TargetInput = 0x80; // CUtlSymbolLarge
            public const nint m_ExpectedParamType = 0x88; // CPulseValueFullType
        }
        // Parent: None
        // Field count: 1
        public static class PulseRuntimeConstantIndex_t {
            public const nint m_Value = 0x0; // int16
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class FakeEntityDerivedA_tAPI {
        }
        // Parent: CPulseCell_BaseFlow
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        // MPropertyFriendlyName
        public static class CPulseCell_Step_TestDomainTracepoint {
        }
        // Parent: None
        // Field count: 1
        public static class PulseDocNodeID_t {
            public const nint m_Value = 0x0; // int32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_BlackboardReference {
            public const nint m_hBlackboardResource = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIPulseGraphDef>>
            public const nint m_BlackboardResource = 0xE0; // CUtlSymbolLarge
            public const nint m_nNodeID = 0xE8; // PulseDocNodeID_t
            public const nint m_NodeName = 0xF0; // CGlobalSymbol
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_LimitCount__InstanceState_t {
            public const nint m_nCurrentCount = 0x0; // int32
        }
        // Parent: CPulseCell_BaseValue
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        // MPropertyFriendlyName
        public static class CPulseCell_Val_TestDomainGetEntityName {
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_CallInfo {
            public const nint m_PortName = 0x0; // CUtlSymbolLarge
            public const nint m_nEditorNodeID = 0x8; // PulseDocNodeID_t
            public const nint m_RegisterMap = 0x10; // PulseRegisterMap_t
            public const nint m_CallMethodID = 0x30; // PulseDocNodeID_t
            public const nint m_nSrcChunk = 0x34; // PulseRuntimeChunkIndex_t
            public const nint m_nSrcInstruction = 0x38; // int32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_RegisterInfo {
            public const nint m_nReg = 0x0; // PulseRuntimeRegisterIndex_t
            public const nint m_Type = 0x8; // CPulseValueFullType
            public const nint m_OriginName = 0x18; // CKV3MemberNameWithStorage
            public const nint m_nWrittenByInstruction = 0x50; // int32
            public const nint m_nLastReadByInstruction = 0x54; // int32
        }
        // Parent: CPulseCell_BaseValue
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_Value_RandomFloat {
        }
        // Parent: None
        // Field count: 1
        public static class PulseRuntimeCellIndex_t {
            public const nint m_Value = 0x0; // int32
        }
        // Parent: IGapHost_YieldingCursor
        // Field count: 0
        public static class CPulseExecCursor {
        }
        // Parent: None
        // Field count: 1
        public static class PulseGraphInstanceID_t {
            public const nint m_Value = 0x0; // uint32
        }
        // Parent: CPulseCell_BaseFlow
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        public static class CPulseCell_Outflow_IntSwitch {
            public const nint m_DefaultCaseOutflow = 0x48; // CPulse_OutflowConnection
            public const nint m_CaseOutflows = 0x78; // CUtlVector<CPulse_OutflowConnection>
        }
        // Parent: None
        // Field count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseGraphDef {
            public const nint m_DomainIdentifier = 0x8; // CUtlSymbolLarge
            public const nint m_ParentMapName = 0x10; // CUtlSymbolLarge
            public const nint m_ParentXmlName = 0x18; // CUtlSymbolLarge
            public const nint m_vecGameBlackboards = 0x20; // CUtlVector<CUtlSymbolLarge>
            public const nint m_Chunks = 0x38; // CUtlVector<CPulse_Chunk*>
            public const nint m_Cells = 0x50; // CUtlVector<CPulseCell_Base*>
            public const nint m_Vars = 0x68; // CUtlVector<CPulse_Variable>
            public const nint m_PublicOutputs = 0x80; // CUtlVector<CPulse_PublicOutput>
            public const nint m_InvokeBindings = 0x98; // CUtlVector<CPulse_InvokeBinding*>
            public const nint m_CallInfos = 0xB0; // CUtlVector<CPulse_CallInfo*>
            public const nint m_Constants = 0xC8; // CUtlVector<CPulse_Constant>
            public const nint m_DomainValues = 0xE0; // CUtlVector<CPulse_DomainValue>
            public const nint m_BlackboardReferences = 0xF8; // CUtlVector<CPulse_BlackboardReference>
            public const nint m_OutputConnections = 0x110; // CUtlVector<CPulse_OutputConnection*>
        }
        // Parent: CPulseCell_BaseFlow
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        public static class CPulseCell_Test_MultiInflow_NoDefault {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_Constant {
            public const nint m_Type = 0x0; // CPulseValueFullType
            public const nint m_Value = 0x10; // KeyValues3
        }
        // Parent: CPulseCell_WaitForCursorsWithTagBase
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_WaitForCursorsWithTag {
            public const nint m_bTagSelfWhenComplete = 0x80; // bool
            public const nint m_nDesiredKillPriority = 0x84; // PulseCursorCancelPriority_t
        }
        // Parent: CPulseCell_BaseFlow
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_BaseEntrypoint {
            public const nint m_EntryChunk = 0x48; // PulseRuntimeChunkIndex_t
            public const nint m_RegisterMap = 0x50; // PulseRegisterMap_t
        }
        // Parent: None
        // Field count: 1
        public static class PulseRuntimeCallInfoIndex_t {
            public const nint m_Value = 0x0; // int32
        }
        // Parent: CPulseCell_BaseYieldingInflow
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseLerp {
            public const nint m_WakeResume = 0x48; // CPulse_ResumePoint
        }
        // Parent: CPulseCell_BaseFlow
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseCell_Outflow_TestExplicitYesNo {
            public const nint m_Yes = 0x48; // CPulse_OutflowConnection
            public const nint m_No = 0x78; // CPulse_OutflowConnection
        }
        // Parent: CPulseCell_BaseFlow
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseCell_Outflow_TestRandomYesNo {
            public const nint m_Yes = 0x48; // CPulse_OutflowConnection
            public const nint m_No = 0x78; // CPulse_OutflowConnection
        }
        // Parent: CPulseCell_BaseFlow
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        public static class CPulseCell_Step_DebugLog {
        }
        // Parent: None
        // Field count: 1
        public static class PulseRuntimeChunkIndex_t {
            public const nint m_Value = 0x0; // int32
        }
        // Parent: CPulseCell_BaseFlow
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        public static class CPulseCell_Outflow_CycleOrdered {
            public const nint m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseRuntimeMethodArg {
            public const nint m_Name = 0x0; // CKV3MemberNameWithStorage
            public const nint m_Description = 0x38; // CUtlString
            public const nint m_Type = 0x40; // CPulseValueFullType
        }
        // Parent: None
        // Field count: 1
        public static class PulseRuntimeStateOffset_t {
            public const nint m_Value = 0x0; // uint16
        }
        // Parent: CPulseCell_BaseValue
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPulseCellOutflowHookInfo
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_Value_RandomInt {
        }
        // Parent: CPulseExecCursor
        // Field count: 4
        //
        // Metadata:
        // MPulseLibraryBindings
        public static class CPulseTurtleGraphicsCursor {
            public const nint m_Color = 0xA8; // Color
            public const nint m_vPos = 0xAC; // Vector2D
            public const nint m_flHeadingDeg = 0xB4; // float32
            public const nint m_bPenUp = 0xB8; // bool
        }
    }
}
