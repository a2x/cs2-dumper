// Generated using https://github.com/a2x/cs2-dumper
// 2025-07-16 05:17:05.277202900 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: pulse_system.dll
        // Class count: 112
        // Enum count: 9
        pub mod pulse_system_dll {
            // Alignment: 4
            // Member count: 6
            #[repr(u32)]
            pub enum EPulseGraphExecutionHistoryFlag {
                NO_FLAGS = 0x0,
                CURSOR_ADD_TAG = 0x1,
                CURSOR_REMOVE_TAG = 0x2,
                CURSOR_RETIRED = 0x4,
                REQUIREMENT_PASS = 0x8,
                REQUIREMENT_FAIL = 0x10
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum PulseTestEnumShape_t {
                CIRCLE = 0x64,
                SQUARE = 0xC8,
                TRIANGLE = 0x12C
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum PulseMethodCallMode_t {
                SYNC_WAIT_FOR_COMPLETION = 0x0,
                ASYNC_FIRE_AND_FORGET = 0x1
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum PulseCursorExecResult_t {
                Succeeded = 0x0,
                Canceled = 0x1,
                Failed = 0x2,
                OngoingNotify = 0x3
            }
            // Alignment: 4
            // Member count: 21
            #[repr(u32)]
            pub enum PulseValueType_t {
                PVAL_INVALID = u32::MAX,
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
            #[repr(u16)]
            pub enum PulseInstructionCode_t {
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
            #[repr(u32)]
            pub enum PulseTestEnumColor_t {
                BLACK = 0x0,
                WHITE = 0x1,
                RED = 0x2,
                GREEN = 0x3,
                BLUE = 0x4
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum PulseCursorCancelPriority_t {
                None = 0x0,
                CancelOnSucceeded = 0x1,
                SoftCancel = 0x2,
                HardCancel = 0x3
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum PulseDomainValueType_t {
                INVALID = u32::MAX,
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
            pub mod CPulseCell_Step_PublicOutput {
                pub const m_OutputIndex: usize = 0x48; // PulseRuntimeOutputIndex_t
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
            pub mod CPulseCell_Val_TestDomainFindEntityByName {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            pub mod CPulseTestFuncs_LibraryA {
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
            pub mod CPulseCell_Step_TestDomainDestroyFakeEntity {
            }
            // Parent: CPulseCell_BaseFlow
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            pub mod CPulseCell_Test_MultiOutflow_WithParams {
                pub const m_Out1: usize = 0x48; // SignatureOutflow_Continue
                pub const m_Out2: usize = 0x78; // SignatureOutflow_Continue
            }
            // Parent: None
            // Field count: 1
            pub mod PulseRuntimeVarIndex_t {
                pub const m_Value: usize = 0x0; // int32
            }
            // Parent: None
            // Field count: 1
            pub mod PulseRuntimeEntrypointIndex_t {
                pub const m_Value: usize = 0x0; // int32
            }
            // Parent: None
            // Field count: 1
            pub mod PulseRuntimeDomainValueIndex_t {
                pub const m_Value: usize = 0x0; // int16
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_Chunk {
                pub const m_Instructions: usize = 0x0; // CUtlLeanVector<PGDInstruction_t>
                pub const m_Registers: usize = 0x10; // CUtlLeanVector<CPulse_RegisterInfo>
                pub const m_InstructionEditorIDs: usize = 0x20; // CUtlLeanVector<PulseDocNodeID_t>
            }
            // Parent: None
            // Field count: 1
            pub mod PulseRuntimeInvokeIndex_t {
                pub const m_Value: usize = 0x0; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_CycleOrdered__InstanceState_t {
                pub const m_nNextIndex: usize = 0x0; // int32
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_WaitForCursorsWithTagBase {
                pub const m_nCursorsAllowedToWait: usize = 0x48; // int32
                pub const m_WaitComplete: usize = 0x50; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            pub mod CPulseTestScriptLib {
            }
            // Parent: None
            // Field count: 1
            pub mod PulseRuntimeRegisterIndex_t {
                pub const m_Value: usize = 0x0; // int16
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Timeline__TimelineEvent_t {
                pub const m_flTimeFromPrevious: usize = 0x0; // float32
                pub const m_bPauseForPreviousEvents: usize = 0x4; // bool
                pub const m_bCallModeSync: usize = 0x5; // bool
                pub const m_EventOutflow: usize = 0x8; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 4
            pub mod CPulse_OutflowConnection {
                pub const m_SourceOutflowName: usize = 0x0; // CUtlSymbolLarge
                pub const m_nDestChunk: usize = 0x8; // PulseRuntimeChunkIndex_t
                pub const m_nInstruction: usize = 0xC; // int32
                pub const m_OutflowRegisterMap: usize = 0x10; // PulseRegisterMap_t
            }
            // Parent: None
            // Field count: 1
            pub mod PulseCursorID_t {
                pub const m_Value: usize = 0x0; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            pub mod CBasePulseGraphInstance {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Base {
                pub const m_nEditorNodeID: usize = 0x8; // PulseDocNodeID_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t {
                pub const nTestStep: usize = 0x0; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PulseGraphExecutionHistoryCursorDesc_t {
                pub const vecAncestorCursorIDs: usize = 0x0; // CUtlVector<PulseCursorID_t>
                pub const nSpawnNodeID: usize = 0x18; // PulseDocNodeID_t
                pub const nRetiredAtNodeID: usize = 0x1C; // PulseDocNodeID_t
                pub const flLastReferenced: usize = 0x20; // float32
                pub const nLastValidEntryIdx: usize = 0x24; // int32
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            pub mod CPulseCell_Inflow_Yield {
                pub const m_UnyieldResume: usize = 0x48; // CPulse_ResumePoint
            }
            // Parent: CPulseCell_Inflow_BaseEntrypoint
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            pub mod CPulseCell_Inflow_GraphHook {
                pub const m_HookName: usize = 0x70; // CUtlSymbolLarge
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
            pub mod CPulseCell_Inflow_Wait {
                pub const m_WakeResume: usize = 0x48; // CPulse_ResumePoint
            }
            // Parent: CPulseExecCursor
            // Field count: 2
            //
            // Metadata:
            // MPulseLibraryBindings
            pub mod CTestDomainDerived_Cursor {
                pub const m_nCursorValueA: usize = 0xA8; // int32
                pub const m_nCursorValueB: usize = 0xAC; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PulseRegisterMap_t {
                pub const m_Inparams: usize = 0x0; // KeyValues3
                pub const m_Outparams: usize = 0x10; // KeyValues3
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
            pub mod CPulseCell_CursorQueue {
                pub const m_nCursorsAllowedToRunParallel: usize = 0x80; // int32
            }
            // Parent: CPulseCell_Base
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseRequirement {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PulseNodeDynamicOutflows_t {
                pub const m_Outflows: usize = 0x0; // CUtlVector<PulseNodeDynamicOutflows_t::DynamicOutflow_t>
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
            pub mod CPulseCell_Value_TestValue50 {
            }
            // Parent: CPulseCell_BaseFlow
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            pub mod CPulseCell_Test_MultiInflow_WithDefault {
            }
            // Parent: None
            // Field count: 0
            pub mod IGapHost_ExecLog {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGapTypeQueriesForScopeSingleton
            pub mod CPulseTestGapTypeQueryRegistration {
            }
            // Parent: CPulseCell_Base
            // Field count: 1
            pub mod CPulseCell_Unknown {
                pub const m_UnknownKeys: usize = 0x48; // KeyValues3
            }
            // Parent: CPulseCell_BaseFlow
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            pub mod CPulseCell_Outflow_StringSwitch {
                pub const m_DefaultCaseOutflow: usize = 0x48; // CPulse_OutflowConnection
                pub const m_CaseOutflows: usize = 0x78; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: CPulseCell_BaseFlow
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            pub mod CPulseCell_Test_NoInflow {
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            pub mod CPulseCell_FireCursors {
                pub const m_Outflows: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
                pub const m_bWaitForChildOutflows: usize = 0x60; // bool
                pub const m_OnFinished: usize = 0x68; // CPulse_ResumePoint
                pub const m_OnCanceled: usize = 0x98; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_CycleShuffled__InstanceState_t {
                pub const m_Shuffle: usize = 0x0; // CUtlVectorFixedGrowable<uint8,8>
                pub const m_nNextShuffle: usize = 0x20; // int32
            }
            // Parent: CPulseCell_Base
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseValue {
            }
            // Parent: CPulse_OutflowConnection
            // Field count: 0
            pub mod CPulse_ResumePoint {
            }
            // Parent: CPulseCell_BaseFlow
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            pub mod CPulseCell_Outflow_CycleRandom {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: CPulseCell_Inflow_BaseEntrypoint
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            pub mod CPulseCell_Inflow_EventHandler {
                pub const m_EventName: usize = 0x70; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseLerp__CursorState_t {
                pub const m_StartTime: usize = 0x0; // GameTime_t
                pub const m_EndTime: usize = 0x4; // GameTime_t
            }
            // Parent: IGapHost_ExecLog
            // Field count: 0
            pub mod IGapHost_Cursor {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_PublicOutput {
                pub const m_Name: usize = 0x0; // CUtlSymbolLarge
                pub const m_Description: usize = 0x8; // CUtlString
                pub const m_ParamType: usize = 0x10; // CPulseValueFullType
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            pub mod CPulseCursorFuncs {
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            pub mod CPulseCell_Timeline {
                pub const m_TimelineEvents: usize = 0x48; // CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
                pub const m_bWaitForChildOutflows: usize = 0x60; // bool
                pub const m_OnFinished: usize = 0x68; // CPulse_ResumePoint
                pub const m_OnCanceled: usize = 0x98; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_OutputConnection {
                pub const m_SourceOutput: usize = 0x0; // CUtlSymbolLarge
                pub const m_TargetEntity: usize = 0x8; // CUtlSymbolLarge
                pub const m_TargetInput: usize = 0x10; // CUtlSymbolLarge
                pub const m_Param: usize = 0x18; // CUtlSymbolLarge
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
            pub mod CPulseCell_LimitCount {
                pub const m_nLimitCount: usize = 0x48; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PulseGraphExecutionHistoryNodeDesc_t {
                pub const strCellDesc: usize = 0x0; // CBufferString
                pub const strBindingName: usize = 0x10; // CUtlSymbolLarge
            }
            // Parent: CPulse_ResumePoint
            // Field count: 0
            pub mod SignatureOutflow_Resume {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            pub mod FakeEntity_tAPI {
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            pub mod CPulseCell_Step_CallExternalMethod {
                pub const m_MethodName: usize = 0x48; // CUtlSymbolLarge
                pub const m_GameBlackboard: usize = 0x50; // CUtlSymbolLarge
                pub const m_ExpectedArgs: usize = 0x58; // CUtlLeanVector<CPulseRuntimeMethodArg>
                pub const m_nAsyncCallMode: usize = 0x68; // PulseMethodCallMode_t
                pub const m_OnFinished: usize = 0x70; // CPulse_ResumePoint
            }
            // Parent: CBasePulseGraphInstance
            // Field count: 0
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseDomainHookInfo
            // MPulseLibraryBindings
            pub mod CPulseGraphInstance_TurtleGraphics {
            }
            // Parent: CPulseCell_Base
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseFlow {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PulseGraphExecutionHistoryEntry_t {
                pub const nCursorID: usize = 0x0; // PulseCursorID_t
                pub const nEditorID: usize = 0x4; // PulseDocNodeID_t
                pub const flExecTime: usize = 0x8; // float32
                pub const unFlags: usize = 0xC; // uint32
                pub const tagName: usize = 0x10; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 1
            pub mod PulseCursorYieldToken_t {
                pub const m_Value: usize = 0x0; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseGraphExecutionHistory {
                pub const m_nInstanceID: usize = 0x0; // PulseGraphInstanceID_t
                pub const m_strFileName: usize = 0x8; // CUtlString
                pub const m_vecHistory: usize = 0x10; // CUtlVector<PulseGraphExecutionHistoryEntry_t*>
                pub const m_mapCellDesc: usize = 0x28; // CUtlOrderedMap<PulseDocNodeID_t,PulseGraphExecutionHistoryNodeDesc_t*>
                pub const m_mapCursorDesc: usize = 0x50; // CUtlOrderedMap<PulseCursorID_t,PulseGraphExecutionHistoryCursorDesc_t*>
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            pub mod CPulseCell_TestWaitWithCursorState {
                pub const m_WakeResume: usize = 0x48; // CPulse_ResumePoint
                pub const m_WakeCancel: usize = 0x78; // CPulse_ResumePoint
                pub const m_WakeFail: usize = 0xA8; // CPulse_ResumePoint
            }
            // Parent: CPulseCell_Inflow_BaseEntrypoint
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            pub mod CPulseCell_Inflow_ObservableVariableListener {
                pub const m_BlackboardReference: usize = 0x70; // CPulse_BlackboardReference
                pub const m_bSelfReference: usize = 0x168; // bool
            }
            // Parent: CPulseCell_BaseFlow
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseYieldingInflow {
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PGDInstruction_t {
                pub const m_nCode: usize = 0x0; // PulseInstructionCode_t
                pub const m_nVar: usize = 0x4; // PulseRuntimeVarIndex_t
                pub const m_nReg0: usize = 0x8; // PulseRuntimeRegisterIndex_t
                pub const m_nReg1: usize = 0xA; // PulseRuntimeRegisterIndex_t
                pub const m_nReg2: usize = 0xC; // PulseRuntimeRegisterIndex_t
                pub const m_nInvokeBindingIndex: usize = 0x10; // PulseRuntimeInvokeIndex_t
                pub const m_nChunk: usize = 0x14; // PulseRuntimeChunkIndex_t
                pub const m_nDestInstruction: usize = 0x18; // int32
                pub const m_nCallInfoIndex: usize = 0x1C; // PulseRuntimeCallInfoIndex_t
                pub const m_nConstIdx: usize = 0x20; // PulseRuntimeConstantIndex_t
                pub const m_nDomainValueIdx: usize = 0x22; // PulseRuntimeDomainValueIndex_t
                pub const m_nBlackboardReferenceIdx: usize = 0x24; // PulseRuntimeBlackboardReferenceIndex_t
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_InvokeBinding {
                pub const m_RegisterMap: usize = 0x0; // PulseRegisterMap_t
                pub const m_FuncName: usize = 0x20; // CUtlSymbolLarge
                pub const m_nCellIndex: usize = 0x28; // PulseRuntimeCellIndex_t
                pub const m_nSrcChunk: usize = 0x2C; // PulseRuntimeChunkIndex_t
                pub const m_nSrcInstruction: usize = 0x30; // int32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_Variable {
                pub const m_Name: usize = 0x0; // CUtlSymbolLarge
                pub const m_Description: usize = 0x8; // CUtlString
                pub const m_Type: usize = 0x10; // CPulseValueFullType
                pub const m_DefaultValue: usize = 0x20; // KeyValues3
                pub const m_bIsPublic: usize = 0x32; // bool
                pub const m_bIsObservable: usize = 0x33; // bool
                pub const m_nEditorNodeID: usize = 0x34; // PulseDocNodeID_t
            }
            // Parent: CPulseCell_Inflow_BaseEntrypoint
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            pub mod CPulseCell_Inflow_Method {
                pub const m_MethodName: usize = 0x70; // CUtlSymbolLarge
                pub const m_Description: usize = 0x78; // CUtlString
                pub const m_bIsPublic: usize = 0x80; // bool
                pub const m_ReturnType: usize = 0x88; // CPulseValueFullType
                pub const m_Args: usize = 0x98; // CUtlLeanVector<CPulseRuntimeMethodArg>
            }
            // Parent: CBasePulseGraphInstance
            // Field count: 6
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseDomainHookInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            pub mod CPulseGraphInstance_TestDomain {
                pub const m_bIsRunningUnitTests: usize = 0xF8; // bool
                pub const m_bExplicitTimeStepping: usize = 0xF9; // bool
                pub const m_bExpectingToDestroyWithYieldedCursors: usize = 0xFA; // bool
                pub const m_nNextValidateIndex: usize = 0xFC; // int32
                pub const m_Tracepoints: usize = 0x100; // CUtlVector<CUtlString>
                pub const m_bTestYesOrNoPath: usize = 0x118; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            pub mod FakeEntityDerivedB_tAPI {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PulseNodeDynamicOutflows_t__DynamicOutflow_t {
                pub const m_OutflowID: usize = 0x0; // CGlobalSymbol
                pub const m_Connection: usize = 0x8; // CPulse_OutflowConnection
            }
            // Parent: CPulseCell_BaseFlow
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            pub mod CPulseCell_Outflow_CycleShuffled {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Field count: 1
            pub mod PulseRuntimeOutputIndex_t {
                pub const m_Value: usize = 0x0; // int32
            }
            // Parent: None
            // Field count: 1
            pub mod CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
                pub const m_TagName: usize = 0x0; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_TestWaitWithCursorState__CursorState_t {
                pub const flWaitValue: usize = 0x0; // float32
                pub const bFailOnCancel: usize = 0x4; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_DomainValue {
                pub const m_nType: usize = 0x0; // PulseDomainValueType_t
                pub const m_Value: usize = 0x8; // CGlobalSymbol
                pub const m_ExpectedRuntimeType: usize = 0x10; // CGlobalSymbol
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
            pub mod CPulseCell_Step_TestDomainCreateFakeEntity {
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
            pub mod CPulseCell_Step_TestDomainEntFire {
                pub const m_Input: usize = 0x48; // CUtlString
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            pub mod CPulseMathlib {
            }
            // Parent: None
            // Field count: 1
            pub mod PulseRuntimeBlackboardReferenceIndex_t {
                pub const m_Value: usize = 0x0; // int16
            }
            // Parent: IGapHost_Cursor
            // Field count: 0
            pub mod IGapHost_YieldingCursor {
            }
            // Parent: CPulse_OutflowConnection
            // Field count: 0
            pub mod SignatureOutflow_Continue {
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            pub mod CPulseCell_Test_MultiOutflow_WithParams_Yielding {
                pub const m_Out1: usize = 0x48; // SignatureOutflow_Continue
                pub const m_AsyncChild1: usize = 0x78; // SignatureOutflow_Continue
                pub const m_AsyncChild2: usize = 0xA8; // SignatureOutflow_Continue
                pub const m_YieldResume1: usize = 0xD8; // SignatureOutflow_Resume
                pub const m_YieldResume2: usize = 0x108; // SignatureOutflow_Resume
            }
            // Parent: CPulseGraphInstance_TestDomain
            // Field count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseDomainHookInfo
            // MPulseLibraryBindings
            pub mod CPulseGraphInstance_TestDomain_Derived {
                pub const m_nInstanceValueX: usize = 0x120; // int32
            }
            // Parent: CPulseCell_Inflow_BaseEntrypoint
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            pub mod CPulseCell_Inflow_EntOutputHandler {
                pub const m_SourceEntity: usize = 0x70; // CUtlSymbolLarge
                pub const m_SourceOutput: usize = 0x78; // CUtlSymbolLarge
                pub const m_TargetInput: usize = 0x80; // CUtlSymbolLarge
                pub const m_ExpectedParamType: usize = 0x88; // CPulseValueFullType
            }
            // Parent: None
            // Field count: 1
            pub mod PulseRuntimeConstantIndex_t {
                pub const m_Value: usize = 0x0; // int16
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            pub mod FakeEntityDerivedA_tAPI {
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
            pub mod CPulseCell_Step_TestDomainTracepoint {
            }
            // Parent: None
            // Field count: 1
            pub mod PulseDocNodeID_t {
                pub const m_Value: usize = 0x0; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_BlackboardReference {
                pub const m_hBlackboardResource: usize = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIPulseGraphDef>>
                pub const m_BlackboardResource: usize = 0xE0; // CUtlSymbolLarge
                pub const m_nNodeID: usize = 0xE8; // PulseDocNodeID_t
                pub const m_NodeName: usize = 0xF0; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_LimitCount__InstanceState_t {
                pub const m_nCurrentCount: usize = 0x0; // int32
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
            pub mod CPulseCell_Val_TestDomainGetEntityName {
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_CallInfo {
                pub const m_PortName: usize = 0x0; // CUtlSymbolLarge
                pub const m_nEditorNodeID: usize = 0x8; // PulseDocNodeID_t
                pub const m_RegisterMap: usize = 0x10; // PulseRegisterMap_t
                pub const m_CallMethodID: usize = 0x30; // PulseDocNodeID_t
                pub const m_nSrcChunk: usize = 0x34; // PulseRuntimeChunkIndex_t
                pub const m_nSrcInstruction: usize = 0x38; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_RegisterInfo {
                pub const m_nReg: usize = 0x0; // PulseRuntimeRegisterIndex_t
                pub const m_Type: usize = 0x8; // CPulseValueFullType
                pub const m_OriginName: usize = 0x18; // CKV3MemberNameWithStorage
                pub const m_nWrittenByInstruction: usize = 0x50; // int32
                pub const m_nLastReadByInstruction: usize = 0x54; // int32
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
            pub mod CPulseCell_Value_RandomFloat {
            }
            // Parent: None
            // Field count: 1
            pub mod PulseRuntimeCellIndex_t {
                pub const m_Value: usize = 0x0; // int32
            }
            // Parent: IGapHost_YieldingCursor
            // Field count: 0
            pub mod CPulseExecCursor {
            }
            // Parent: None
            // Field count: 1
            pub mod PulseGraphInstanceID_t {
                pub const m_Value: usize = 0x0; // uint32
            }
            // Parent: CPulseCell_BaseFlow
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            pub mod CPulseCell_Outflow_IntSwitch {
                pub const m_DefaultCaseOutflow: usize = 0x48; // CPulse_OutflowConnection
                pub const m_CaseOutflows: usize = 0x78; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseGraphDef {
                pub const m_DomainIdentifier: usize = 0x8; // CUtlSymbolLarge
                pub const m_ParentMapName: usize = 0x10; // CUtlSymbolLarge
                pub const m_ParentXmlName: usize = 0x18; // CUtlSymbolLarge
                pub const m_vecGameBlackboards: usize = 0x20; // CUtlVector<CUtlSymbolLarge>
                pub const m_Chunks: usize = 0x38; // CUtlVector<CPulse_Chunk*>
                pub const m_Cells: usize = 0x50; // CUtlVector<CPulseCell_Base*>
                pub const m_Vars: usize = 0x68; // CUtlVector<CPulse_Variable>
                pub const m_PublicOutputs: usize = 0x80; // CUtlVector<CPulse_PublicOutput>
                pub const m_InvokeBindings: usize = 0x98; // CUtlVector<CPulse_InvokeBinding*>
                pub const m_CallInfos: usize = 0xB0; // CUtlVector<CPulse_CallInfo*>
                pub const m_Constants: usize = 0xC8; // CUtlVector<CPulse_Constant>
                pub const m_DomainValues: usize = 0xE0; // CUtlVector<CPulse_DomainValue>
                pub const m_BlackboardReferences: usize = 0xF8; // CUtlVector<CPulse_BlackboardReference>
                pub const m_OutputConnections: usize = 0x110; // CUtlVector<CPulse_OutputConnection*>
            }
            // Parent: CPulseCell_BaseFlow
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            pub mod CPulseCell_Test_MultiInflow_NoDefault {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_Constant {
                pub const m_Type: usize = 0x0; // CPulseValueFullType
                pub const m_Value: usize = 0x10; // KeyValues3
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
            pub mod CPulseCell_WaitForCursorsWithTag {
                pub const m_bTagSelfWhenComplete: usize = 0x80; // bool
                pub const m_nDesiredKillPriority: usize = 0x84; // PulseCursorCancelPriority_t
            }
            // Parent: CPulseCell_BaseFlow
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_BaseEntrypoint {
                pub const m_EntryChunk: usize = 0x48; // PulseRuntimeChunkIndex_t
                pub const m_RegisterMap: usize = 0x50; // PulseRegisterMap_t
            }
            // Parent: None
            // Field count: 1
            pub mod PulseRuntimeCallInfoIndex_t {
                pub const m_Value: usize = 0x0; // int32
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseLerp {
                pub const m_WakeResume: usize = 0x48; // CPulse_ResumePoint
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
            pub mod CPulseCell_Outflow_TestExplicitYesNo {
                pub const m_Yes: usize = 0x48; // CPulse_OutflowConnection
                pub const m_No: usize = 0x78; // CPulse_OutflowConnection
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
            pub mod CPulseCell_Outflow_TestRandomYesNo {
                pub const m_Yes: usize = 0x48; // CPulse_OutflowConnection
                pub const m_No: usize = 0x78; // CPulse_OutflowConnection
            }
            // Parent: CPulseCell_BaseFlow
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            pub mod CPulseCell_Step_DebugLog {
            }
            // Parent: None
            // Field count: 1
            pub mod PulseRuntimeChunkIndex_t {
                pub const m_Value: usize = 0x0; // int32
            }
            // Parent: CPulseCell_BaseFlow
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            pub mod CPulseCell_Outflow_CycleOrdered {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseRuntimeMethodArg {
                pub const m_Name: usize = 0x0; // CKV3MemberNameWithStorage
                pub const m_Description: usize = 0x38; // CUtlString
                pub const m_Type: usize = 0x40; // CPulseValueFullType
            }
            // Parent: None
            // Field count: 1
            pub mod PulseRuntimeStateOffset_t {
                pub const m_Value: usize = 0x0; // uint16
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
            pub mod CPulseCell_Value_RandomInt {
            }
            // Parent: CPulseExecCursor
            // Field count: 4
            //
            // Metadata:
            // MPulseLibraryBindings
            pub mod CPulseTurtleGraphicsCursor {
                pub const m_Color: usize = 0xA8; // Color
                pub const m_vPos: usize = 0xAC; // Vector2D
                pub const m_flHeadingDeg: usize = 0xB4; // float32
                pub const m_bPenUp: usize = 0xB8; // bool
            }
        }
    }
}
