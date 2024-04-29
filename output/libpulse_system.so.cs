// Generated using https://github.com/a2x/cs2-dumper
// 2024-04-29 23:05:53.220233445 UTC

namespace CS2Dumper.Schemas {
    // Module: libpulse_system.so
    // Classes count: 85
    // Enums count: 7
    public static class LibpulseSystemSo {
        // Alignment: 4
        // Members count: 3
        public enum PulseTestEnumShape_t : uint {
            CIRCLE = 0x64,
            SQUARE = 0xC8,
            TRIANGLE = 0x12C
        }
        // Alignment: 4
        // Members count: 2
        public enum PulseMethodCallMode_t : uint {
            SYNC_WAIT_FOR_COMPLETION = 0x0,
            ASYNC_FIRE_AND_FORGET = 0x1
        }
        // Alignment: 4
        // Members count: 3
        public enum PulseCursorExecResult_t : uint {
            Succeeded = 0x0,
            Canceled = 0x1,
            Failed = 0x2
        }
        // Alignment: 4
        // Members count: 19
        public enum PulseValueType_t : uint {
            PVAL_INVALID = 0xFFFFFFFFFFFFFFFF,
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
            PVAL_ENTITY_NAME = 0xA,
            PVAL_SCHEMA_PTR = 0xB,
            PVAL_TYPESAFE_INT = 0xC,
            PVAL_CURSOR_FLOW = 0xD,
            PVAL_ANY = 0xE,
            PVAL_SCHEMA_ENUM = 0xF,
            PVAL_PANORAMA_PANEL_HANDLE = 0x10,
            PVAL_COUNT = 0x11
        }
        // Alignment: 2
        // Members count: 61
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
            SET_REGISTER_DOMAIN_VALUE = 0x10,
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
            LAST_SERIALIZED_CODE = 0x20,
            NEGATE_INT = 0x21,
            NEGATE_FLOAT = 0x22,
            ADD_INT = 0x23,
            ADD_FLOAT = 0x24,
            ADD_STRING = 0x25,
            SUB_INT = 0x26,
            SUB_FLOAT = 0x27,
            MUL_INT = 0x28,
            MUL_FLOAT = 0x29,
            DIV_INT = 0x2A,
            DIV_FLOAT = 0x2B,
            MOD_INT = 0x2C,
            MOD_FLOAT = 0x2D,
            LT_INT = 0x2E,
            LT_FLOAT = 0x2F,
            LTE_INT = 0x30,
            LTE_FLOAT = 0x31,
            EQ_BOOL = 0x32,
            EQ_INT = 0x33,
            EQ_FLOAT = 0x34,
            EQ_STRING = 0x35,
            EQ_ENTITY_NAME = 0x36,
            NE_BOOL = 0x37,
            NE_INT = 0x38,
            NE_FLOAT = 0x39,
            NE_STRING = 0x3A,
            NE_ENTITY_NAME = 0x3B,
            GET_CONST_INLINE_STORAGE = 0x3C
        }
        // Alignment: 4
        // Members count: 5
        public enum PulseTestEnumColor_t : uint {
            BLACK = 0x0,
            WHITE = 0x1,
            RED = 0x2,
            GREEN = 0x3,
            BLUE = 0x4
        }
        // Alignment: 4
        // Members count: 4
        public enum PulseCursorCancelPriority_t : uint {
            None = 0x0,
            CancelOnSucceeded = 0x1,
            SoftCancel = 0x2,
            HardCancel = 0x3
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCell_Step_PublicOutput {
            public const nint m_OutputIndex = 0x48; // PulseRuntimeOutputIndex_t
        }
        // Parent: CPulseCell_BaseValue
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        public static class CPulseCell_Val_TestDomainFindEntityByName {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyDescription
        public static class CPulseTestFuncs_LibraryA {
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        public static class CPulseCell_Step_TestDomainDestroyFakeEntity {
        }
        // Parent: None
        // Fields count: 1
        public static class PulseRuntimeVarIndex_t {
            public const nint m_Value = 0x0; // int32
        }
        // Parent: None
        // Fields count: 1
        public static class PulseRuntimeEntrypointIndex_t {
            public const nint m_Value = 0x0; // int32
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_Chunk {
            public const nint m_Instructions = 0x0; // CUtlLeanVector<PGDInstruction_t>
            public const nint m_Registers = 0x10; // CUtlLeanVector<CPulse_RegisterInfo>
            public const nint m_InstructionEditorIDs = 0x20; // CUtlLeanVector<PulseDocNodeID_t>
        }
        // Parent: None
        // Fields count: 1
        public static class PulseRuntimeInvokeIndex_t {
            public const nint m_Value = 0x0; // int32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_CycleOrdered__InstanceState_t {
            public const nint m_nNextIndex = 0x0; // int32
        }
        // Parent: CPulseCell_BaseYieldingInflow
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_WaitForCursorsWithTagBase {
            public const nint m_nCursorsAllowedToWait = 0x48; // int32
            public const nint m_WaitComplete = 0x50; // CPulse_ResumePoint
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyDescription
        public static class CPulseTestScriptLib {
        }
        // Parent: None
        // Fields count: 1
        public static class PulseRuntimeRegisterIndex_t {
            public const nint m_Value = 0x0; // int16
        }
        // Parent: None
        // Fields count: 4
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
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_OutflowConnection {
            public const nint m_SourceOutflowName = 0x0; // CUtlSymbolLarge
            public const nint m_nDestChunk = 0x8; // PulseRuntimeChunkIndex_t
            public const nint m_nInstruction = 0xC; // int32
        }
        // Parent: None
        // Fields count: 1
        public static class PulseCursorID_t {
            public const nint m_Value = 0x0; // int32
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        public static class CBasePulseGraphInstance {
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Base {
            public const nint m_nEditorNodeID = 0x8; // PulseDocNodeID_t
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyDescription
        public static class CPulseTestFuncs_DerivedDomain {
        }
        // Parent: CPulseCell_BaseYieldingInflow
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCell_Inflow_Yield {
            public const nint m_UnyieldResume = 0x48; // CPulse_ResumePoint
        }
        // Parent: CPulseCell_Inflow_BaseEntrypoint
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCell_Inflow_GraphHook {
            public const nint m_HookName = 0x70; // CUtlSymbolLarge
        }
        // Parent: CPulseCell_BaseYieldingInflow
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_Inflow_Wait {
            public const nint m_WakeResume = 0x48; // CPulse_ResumePoint
        }
        // Parent: CPulseExecCursor
        // Fields count: 2
        //
        // Metadata:
        // MPulseLibraryBindings
        public static class CTestDomainDerived_Cursor {
            public const nint m_nCursorValueA = 0x164; // int32
            public const nint m_nCursorValueB = 0x168; // int32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PulseRegisterMap_t {
            public const nint m_Inparams = 0x0; // KeyValues3
            public const nint m_Outparams = 0x10; // KeyValues3
        }
        // Parent: CPulseCell_WaitForCursorsWithTagBase
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_CursorQueue {
            public const nint m_nCursorsAllowedToRunParallel = 0x60; // int32
        }
        // Parent: CPulseCell_BaseValue
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseCell_Value_TestValue50 {
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCell_Test_MultiInflow_WithDefault {
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCell_Outflow_StringSwitch {
            public const nint m_DefaultCaseOutflow = 0x48; // CPulse_OutflowConnection
            public const nint m_CaseOutflows = 0x58; // CUtlVector<CPulse_OutflowConnection>
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCell_Test_NoInflow {
        }
        // Parent: None
        // Fields count: 1
        public static class PulseTestEHandle_t {
            public const nint m_Value = 0x0; // uint32
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_CycleShuffled__InstanceState_t {
            public const nint m_Shuffle = 0x0; // CUtlVectorFixedGrowable<uint8>
            public const nint m_nNextShuffle = 0x20; // int32
        }
        // Parent: CPulseCell_Base
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseValue {
        }
        // Parent: CPulse_OutflowConnection
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_ResumePoint {
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCell_Outflow_CycleRandom {
            public const nint m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
        }
        // Parent: CPulseCell_Inflow_BaseEntrypoint
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCell_Inflow_EventHandler {
            public const nint m_EventName = 0x70; // CUtlSymbolLarge
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_PublicOutput {
            public const nint m_Name = 0x0; // CUtlSymbolLarge
            public const nint m_Description = 0x8; // CUtlString
            public const nint m_ParamType = 0x10; // CPulseValueFullType
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyDescription
        public static class CPulseCursorFuncs {
        }
        // Parent: CPulseCell_BaseYieldingInflow
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCell_Timeline {
            public const nint m_TimelineEvents = 0x48; // CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
            public const nint m_bWaitForChildOutflows = 0x60; // bool
            public const nint m_OnFinished = 0x68; // CPulse_ResumePoint
            public const nint m_OnCanceled = 0x78; // CPulse_ResumePoint
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_OutputConnection {
            public const nint m_SourceOutput = 0x0; // CUtlSymbolLarge
            public const nint m_TargetEntity = 0x8; // CUtlSymbolLarge
            public const nint m_TargetInput = 0x10; // CUtlSymbolLarge
            public const nint m_Param = 0x18; // CUtlSymbolLarge
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class FakeEntity_tAPI {
        }
        // Parent: CPulseCell_BaseYieldingInflow
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCell_Step_CallExternalMethod {
            public const nint m_MethodName = 0x48; // CUtlSymbolLarge
            public const nint m_ExpectedArgs = 0x50; // CUtlVector<CPulseRuntimeMethodArg>
            public const nint m_nAsyncCallMode = 0x68; // PulseMethodCallMode_t
            public const nint m_OnFinished = 0x70; // CPulse_ResumePoint
        }
        // Parent: CBasePulseGraphInstance
        // Fields count: 0
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        public static class CPulseGraphInstance_TurtleGraphics {
        }
        // Parent: CPulseCell_Base
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseFlow {
        }
        // Parent: None
        // Fields count: 1
        public static class PulseCursorYieldToken_t {
            public const nint m_Value = 0x0; // int32
        }
        // Parent: None
        // Fields count: 7
        public static class FakeEntity_t {
            public const nint m_nHandle = 0x0; // PulseTestEHandle_t
            public const nint m_Name = 0x8; // CUtlString
            public const nint m_Class = 0x10; // CUtlString
            public const nint m_bDestroyed = 0x18; // bool
            public const nint m_pAssociatedGraphInstance = 0x20; // CPulseGraphInstance_TestDomain*
            public const nint m_bFuncWasCalled = 0x28; // bool
            public const nint m_fValue = 0x2C; // float32
        }
        // Parent: CPulseCell_BaseYieldingInflow
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCell_TestWaitWithCursorState {
            public const nint m_WakeResume = 0x48; // CPulse_ResumePoint
            public const nint m_WakeCancel = 0x58; // CPulse_ResumePoint
            public const nint m_WakeFail = 0x68; // CPulse_ResumePoint
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseYieldingInflow {
        }
        // Parent: None
        // Fields count: 11
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
            public const nint m_DomainValue = 0x28; // CBufferString
        }
        // Parent: None
        // Fields count: 5
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
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_Variable {
            public const nint m_Name = 0x0; // CUtlSymbolLarge
            public const nint m_Description = 0x8; // CUtlString
            public const nint m_Type = 0x10; // CPulseValueFullType
            public const nint m_DefaultValue = 0x20; // KeyValues3
            public const nint m_bIsPublic = 0x32; // bool
        }
        // Parent: CPulseCell_Inflow_BaseEntrypoint
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCell_Inflow_Method {
            public const nint m_MethodName = 0x70; // CUtlSymbolLarge
            public const nint m_Description = 0x78; // CUtlString
            public const nint m_bIsPublic = 0x80; // bool
            public const nint m_ReturnType = 0x88; // CPulseValueFullType
            public const nint m_Args = 0x98; // CUtlVector<CPulseRuntimeMethodArg>
        }
        // Parent: CBasePulseGraphInstance
        // Fields count: 6
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CPulseGraphInstance_TestDomain {
            public const nint m_bIsRunningUnitTests = 0xD8; // bool
            public const nint m_bExplicitTimeStepping = 0xD9; // bool
            public const nint m_bExpectingToDestroyWithYieldedCursors = 0xDA; // bool
            public const nint m_nNextValidateIndex = 0xDC; // int32
            public const nint m_Tracepoints = 0xE0; // CUtlVector<CUtlString>
            public const nint m_bTestYesOrNoPath = 0xF8; // bool
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCell_Outflow_CycleShuffled {
            public const nint m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
        }
        // Parent: None
        // Fields count: 1
        public static class PulseRuntimeOutputIndex_t {
            public const nint m_Value = 0x0; // int32
        }
        // Parent: None
        // Fields count: 1
        public static class CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
            public const nint m_TagName = 0x0; // CUtlSymbolLarge
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_TestWaitWithCursorState__CursorState_t {
            public const nint flWaitValue = 0x0; // float32
            public const nint bFailOnCancel = 0x4; // bool
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        public static class CPulseCell_Step_TestDomainCreateFakeEntity {
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        // MPulseEditorHeaderText
        public static class CPulseCell_Step_TestDomainEntFire {
            public const nint m_Input = 0x48; // CUtlString
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyDescription
        public static class CPulseMathlib {
        }
        // Parent: CPulseGraphInstance_TestDomain
        // Fields count: 1
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        public static class CPulseGraphInstance_TestDomain_Derived {
            public const nint m_nInstanceValueX = 0xFC; // int32
        }
        // Parent: CPulseCell_Inflow_BaseEntrypoint
        // Fields count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCell_Inflow_EntOutputHandler {
            public const nint m_SourceEntity = 0x70; // CUtlSymbolLarge
            public const nint m_SourceOutput = 0x78; // CUtlSymbolLarge
            public const nint m_TargetInput = 0x80; // CUtlSymbolLarge
            public const nint m_ExpectedParamType = 0x88; // CPulseValueFullType
        }
        // Parent: None
        // Fields count: 1
        public static class PulseRuntimeConstantIndex_t {
            public const nint m_Value = 0x0; // int16
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        public static class CPulseCell_Step_TestDomainTracepoint {
        }
        // Parent: None
        // Fields count: 1
        public static class PulseDocNodeID_t {
            public const nint m_Value = 0x0; // int32
        }
        // Parent: CPulseCell_BaseValue
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        public static class CPulseCell_Val_TestDomainGetEntityName {
        }
        // Parent: None
        // Fields count: 6
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
        // Fields count: 5
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
        // Parent: None
        // Fields count: 1
        public static class PulseRuntimeCellIndex_t {
            public const nint m_Value = 0x0; // int32
        }
        // Parent: None
        // Fields count: 0
        public static class CPulseExecCursor {
        }
        // Parent: None
        // Fields count: 1
        public static class PulseGraphInstanceID_t {
            public const nint m_Value = 0x0; // uint32
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCell_Outflow_IntSwitch {
            public const nint m_DefaultCaseOutflow = 0x48; // CPulse_OutflowConnection
            public const nint m_CaseOutflows = 0x58; // CUtlVector<CPulse_OutflowConnection>
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseGraphDef {
            public const nint m_DomainIdentifier = 0x8; // CUtlSymbolLarge
            public const nint m_ParentMapName = 0x10; // CUtlSymbolLarge
            public const nint m_Chunks = 0x18; // CUtlVector<CPulse_Chunk*>
            public const nint m_Cells = 0x30; // CUtlVector<CPulseCell_Base*>
            public const nint m_Vars = 0x48; // CUtlVector<CPulse_Variable>
            public const nint m_PublicOutputs = 0x60; // CUtlVector<CPulse_PublicOutput>
            public const nint m_InvokeBindings = 0x78; // CUtlVector<CPulse_InvokeBinding*>
            public const nint m_CallInfos = 0x90; // CUtlVector<CPulse_CallInfo*>
            public const nint m_Constants = 0xA8; // CUtlVector<CPulse_Constant>
            public const nint m_OutputConnections = 0xC0; // CUtlVector<CPulse_OutputConnection*>
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCell_Test_MultiInflow_NoDefault {
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_Constant {
            public const nint m_Type = 0x0; // CPulseValueFullType
            public const nint m_Value = 0x10; // KeyValues3
        }
        // Parent: CPulseCell_WaitForCursorsWithTagBase
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_WaitForCursorsWithTag {
            public const nint m_bTagSelfWhenComplete = 0x60; // bool
            public const nint m_nDesiredKillPriority = 0x64; // PulseCursorCancelPriority_t
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_BaseEntrypoint {
            public const nint m_EntryChunk = 0x48; // PulseRuntimeChunkIndex_t
            public const nint m_RegisterMap = 0x50; // PulseRegisterMap_t
        }
        // Parent: None
        // Fields count: 1
        public static class PulseRuntimeCallInfoIndex_t {
            public const nint m_Value = 0x0; // int32
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseCell_Outflow_TestExplicitYesNo {
            public const nint m_Yes = 0x48; // CPulse_OutflowConnection
            public const nint m_No = 0x58; // CPulse_OutflowConnection
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseCell_Outflow_TestRandomYesNo {
            public const nint m_Yes = 0x48; // CPulse_OutflowConnection
            public const nint m_No = 0x58; // CPulse_OutflowConnection
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCell_Step_DebugLog {
        }
        // Parent: None
        // Fields count: 1
        public static class PulseRuntimeChunkIndex_t {
            public const nint m_Value = 0x0; // int32
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCell_Outflow_CycleOrdered {
            public const nint m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseRuntimeMethodArg {
            public const nint m_Name = 0x0; // CKV3MemberNameWithStorage
            public const nint m_Description = 0x38; // CUtlString
            public const nint m_Type = 0x40; // CPulseValueFullType
        }
        // Parent: None
        // Fields count: 1
        public static class PulseRuntimeStateOffset_t {
            public const nint m_Value = 0x0; // uint16
        }
        // Parent: CPulseCell_BaseValue
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_Value_RandomInt {
        }
        // Parent: CPulseExecCursor
        // Fields count: 4
        //
        // Metadata:
        // MPulseLibraryBindings
        public static class CPulseTurtleGraphicsCursor {
            public const nint m_Color = 0x162; // Color
            public const nint m_vPos = 0x168; // Vector2D
            public const nint m_flHeadingDeg = 0x170; // float32
            public const nint m_bPenUp = 0x174; // bool
        }
    }
}
