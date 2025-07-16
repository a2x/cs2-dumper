// Generated using https://github.com/a2x/cs2-dumper
// 2025-07-16 05:17:05.277202900 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: pulse_system.dll
        // Class count: 112
        // Enum count: 9
        namespace pulse_system_dll {
            // Alignment: 4
            // Member count: 6
            enum class EPulseGraphExecutionHistoryFlag : uint32_t {
                NO_FLAGS = 0x0,
                CURSOR_ADD_TAG = 0x1,
                CURSOR_REMOVE_TAG = 0x2,
                CURSOR_RETIRED = 0x4,
                REQUIREMENT_PASS = 0x8,
                REQUIREMENT_FAIL = 0x10
            };
            // Alignment: 4
            // Member count: 3
            enum class PulseTestEnumShape_t : uint32_t {
                CIRCLE = 0x64,
                SQUARE = 0xC8,
                TRIANGLE = 0x12C
            };
            // Alignment: 4
            // Member count: 2
            enum class PulseMethodCallMode_t : uint32_t {
                SYNC_WAIT_FOR_COMPLETION = 0x0,
                ASYNC_FIRE_AND_FORGET = 0x1
            };
            // Alignment: 4
            // Member count: 4
            enum class PulseCursorExecResult_t : uint32_t {
                Succeeded = 0x0,
                Canceled = 0x1,
                Failed = 0x2,
                OngoingNotify = 0x3
            };
            // Alignment: 4
            // Member count: 21
            enum class PulseValueType_t : uint32_t {
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
            };
            // Alignment: 2
            // Member count: 75
            enum class PulseInstructionCode_t : uint16_t {
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
            };
            // Alignment: 4
            // Member count: 5
            enum class PulseTestEnumColor_t : uint32_t {
                BLACK = 0x0,
                WHITE = 0x1,
                RED = 0x2,
                GREEN = 0x3,
                BLUE = 0x4
            };
            // Alignment: 4
            // Member count: 4
            enum class PulseCursorCancelPriority_t : uint32_t {
                None = 0x0,
                CancelOnSucceeded = 0x1,
                SoftCancel = 0x2,
                HardCancel = 0x3
            };
            // Alignment: 4
            // Member count: 4
            enum class PulseDomainValueType_t : uint32_t {
                INVALID = 0xFFFFFFFFFFFFFFFF,
                ENTITY_NAME = 0x0,
                PANEL_ID = 0x1,
                COUNT = 0x2
            };
            // Parent: CPulseCell_BaseFlow
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            namespace CPulseCell_Step_PublicOutput {
                constexpr std::ptrdiff_t m_OutputIndex = 0x48; // PulseRuntimeOutputIndex_t
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
            namespace CPulseCell_Val_TestDomainFindEntityByName {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            namespace CPulseTestFuncs_LibraryA {
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
            namespace CPulseCell_Step_TestDomainDestroyFakeEntity {
            }
            // Parent: CPulseCell_BaseFlow
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            namespace CPulseCell_Test_MultiOutflow_WithParams {
                constexpr std::ptrdiff_t m_Out1 = 0x48; // SignatureOutflow_Continue
                constexpr std::ptrdiff_t m_Out2 = 0x78; // SignatureOutflow_Continue
            }
            // Parent: None
            // Field count: 1
            namespace PulseRuntimeVarIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Field count: 1
            namespace PulseRuntimeEntrypointIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Field count: 1
            namespace PulseRuntimeDomainValueIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int16
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_Chunk {
                constexpr std::ptrdiff_t m_Instructions = 0x0; // CUtlLeanVector<PGDInstruction_t>
                constexpr std::ptrdiff_t m_Registers = 0x10; // CUtlLeanVector<CPulse_RegisterInfo>
                constexpr std::ptrdiff_t m_InstructionEditorIDs = 0x20; // CUtlLeanVector<PulseDocNodeID_t>
            }
            // Parent: None
            // Field count: 1
            namespace PulseRuntimeInvokeIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleOrdered__InstanceState_t {
                constexpr std::ptrdiff_t m_nNextIndex = 0x0; // int32
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_WaitForCursorsWithTagBase {
                constexpr std::ptrdiff_t m_nCursorsAllowedToWait = 0x48; // int32
                constexpr std::ptrdiff_t m_WaitComplete = 0x50; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            namespace CPulseTestScriptLib {
            }
            // Parent: None
            // Field count: 1
            namespace PulseRuntimeRegisterIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int16
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Timeline__TimelineEvent_t {
                constexpr std::ptrdiff_t m_flTimeFromPrevious = 0x0; // float32
                constexpr std::ptrdiff_t m_bPauseForPreviousEvents = 0x4; // bool
                constexpr std::ptrdiff_t m_bCallModeSync = 0x5; // bool
                constexpr std::ptrdiff_t m_EventOutflow = 0x8; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 4
            namespace CPulse_OutflowConnection {
                constexpr std::ptrdiff_t m_SourceOutflowName = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nDestChunk = 0x8; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nInstruction = 0xC; // int32
                constexpr std::ptrdiff_t m_OutflowRegisterMap = 0x10; // PulseRegisterMap_t
            }
            // Parent: None
            // Field count: 1
            namespace PulseCursorID_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            namespace CBasePulseGraphInstance {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Base {
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x8; // PulseDocNodeID_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t {
                constexpr std::ptrdiff_t nTestStep = 0x0; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseGraphExecutionHistoryCursorDesc_t {
                constexpr std::ptrdiff_t vecAncestorCursorIDs = 0x0; // CUtlVector<PulseCursorID_t>
                constexpr std::ptrdiff_t nSpawnNodeID = 0x18; // PulseDocNodeID_t
                constexpr std::ptrdiff_t nRetiredAtNodeID = 0x1C; // PulseDocNodeID_t
                constexpr std::ptrdiff_t flLastReferenced = 0x20; // float32
                constexpr std::ptrdiff_t nLastValidEntryIdx = 0x24; // int32
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            namespace CPulseCell_Inflow_Yield {
                constexpr std::ptrdiff_t m_UnyieldResume = 0x48; // CPulse_ResumePoint
            }
            // Parent: CPulseCell_Inflow_BaseEntrypoint
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            namespace CPulseCell_Inflow_GraphHook {
                constexpr std::ptrdiff_t m_HookName = 0x70; // CUtlSymbolLarge
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
            namespace CPulseCell_Inflow_Wait {
                constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
            }
            // Parent: CPulseExecCursor
            // Field count: 2
            //
            // Metadata:
            // MPulseLibraryBindings
            namespace CTestDomainDerived_Cursor {
                constexpr std::ptrdiff_t m_nCursorValueA = 0xA8; // int32
                constexpr std::ptrdiff_t m_nCursorValueB = 0xAC; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseRegisterMap_t {
                constexpr std::ptrdiff_t m_Inparams = 0x0; // KeyValues3
                constexpr std::ptrdiff_t m_Outparams = 0x10; // KeyValues3
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
            namespace CPulseCell_CursorQueue {
                constexpr std::ptrdiff_t m_nCursorsAllowedToRunParallel = 0x80; // int32
            }
            // Parent: CPulseCell_Base
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseRequirement {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseNodeDynamicOutflows_t {
                constexpr std::ptrdiff_t m_Outflows = 0x0; // CUtlVector<PulseNodeDynamicOutflows_t::DynamicOutflow_t>
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
            namespace CPulseCell_Value_TestValue50 {
            }
            // Parent: CPulseCell_BaseFlow
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            namespace CPulseCell_Test_MultiInflow_WithDefault {
            }
            // Parent: None
            // Field count: 0
            namespace IGapHost_ExecLog {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGapTypeQueriesForScopeSingleton
            namespace CPulseTestGapTypeQueryRegistration {
            }
            // Parent: CPulseCell_Base
            // Field count: 1
            namespace CPulseCell_Unknown {
                constexpr std::ptrdiff_t m_UnknownKeys = 0x48; // KeyValues3
            }
            // Parent: CPulseCell_BaseFlow
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            namespace CPulseCell_Outflow_StringSwitch {
                constexpr std::ptrdiff_t m_DefaultCaseOutflow = 0x48; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_CaseOutflows = 0x78; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: CPulseCell_BaseFlow
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            namespace CPulseCell_Test_NoInflow {
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            namespace CPulseCell_FireCursors {
                constexpr std::ptrdiff_t m_Outflows = 0x48; // CUtlVector<CPulse_OutflowConnection>
                constexpr std::ptrdiff_t m_bWaitForChildOutflows = 0x60; // bool
                constexpr std::ptrdiff_t m_OnFinished = 0x68; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_OnCanceled = 0x98; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleShuffled__InstanceState_t {
                constexpr std::ptrdiff_t m_Shuffle = 0x0; // CUtlVectorFixedGrowable<uint8,8>
                constexpr std::ptrdiff_t m_nNextShuffle = 0x20; // int32
            }
            // Parent: CPulseCell_Base
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseValue {
            }
            // Parent: CPulse_OutflowConnection
            // Field count: 0
            namespace CPulse_ResumePoint {
            }
            // Parent: CPulseCell_BaseFlow
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            namespace CPulseCell_Outflow_CycleRandom {
                constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: CPulseCell_Inflow_BaseEntrypoint
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            namespace CPulseCell_Inflow_EventHandler {
                constexpr std::ptrdiff_t m_EventName = 0x70; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseLerp__CursorState_t {
                constexpr std::ptrdiff_t m_StartTime = 0x0; // GameTime_t
                constexpr std::ptrdiff_t m_EndTime = 0x4; // GameTime_t
            }
            // Parent: IGapHost_ExecLog
            // Field count: 0
            namespace IGapHost_Cursor {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_PublicOutput {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_Description = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_ParamType = 0x10; // CPulseValueFullType
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            namespace CPulseCursorFuncs {
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            namespace CPulseCell_Timeline {
                constexpr std::ptrdiff_t m_TimelineEvents = 0x48; // CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
                constexpr std::ptrdiff_t m_bWaitForChildOutflows = 0x60; // bool
                constexpr std::ptrdiff_t m_OnFinished = 0x68; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_OnCanceled = 0x98; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_OutputConnection {
                constexpr std::ptrdiff_t m_SourceOutput = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_TargetEntity = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_TargetInput = 0x10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_Param = 0x18; // CUtlSymbolLarge
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
            namespace CPulseCell_LimitCount {
                constexpr std::ptrdiff_t m_nLimitCount = 0x48; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseGraphExecutionHistoryNodeDesc_t {
                constexpr std::ptrdiff_t strCellDesc = 0x0; // CBufferString
                constexpr std::ptrdiff_t strBindingName = 0x10; // CUtlSymbolLarge
            }
            // Parent: CPulse_ResumePoint
            // Field count: 0
            namespace SignatureOutflow_Resume {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace FakeEntity_tAPI {
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            namespace CPulseCell_Step_CallExternalMethod {
                constexpr std::ptrdiff_t m_MethodName = 0x48; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_GameBlackboard = 0x50; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_ExpectedArgs = 0x58; // CUtlLeanVector<CPulseRuntimeMethodArg>
                constexpr std::ptrdiff_t m_nAsyncCallMode = 0x68; // PulseMethodCallMode_t
                constexpr std::ptrdiff_t m_OnFinished = 0x70; // CPulse_ResumePoint
            }
            // Parent: CBasePulseGraphInstance
            // Field count: 0
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseDomainHookInfo
            // MPulseLibraryBindings
            namespace CPulseGraphInstance_TurtleGraphics {
            }
            // Parent: CPulseCell_Base
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseFlow {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseGraphExecutionHistoryEntry_t {
                constexpr std::ptrdiff_t nCursorID = 0x0; // PulseCursorID_t
                constexpr std::ptrdiff_t nEditorID = 0x4; // PulseDocNodeID_t
                constexpr std::ptrdiff_t flExecTime = 0x8; // float32
                constexpr std::ptrdiff_t unFlags = 0xC; // uint32
                constexpr std::ptrdiff_t tagName = 0x10; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 1
            namespace PulseCursorYieldToken_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseGraphExecutionHistory {
                constexpr std::ptrdiff_t m_nInstanceID = 0x0; // PulseGraphInstanceID_t
                constexpr std::ptrdiff_t m_strFileName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_vecHistory = 0x10; // CUtlVector<PulseGraphExecutionHistoryEntry_t*>
                constexpr std::ptrdiff_t m_mapCellDesc = 0x28; // CUtlOrderedMap<PulseDocNodeID_t,PulseGraphExecutionHistoryNodeDesc_t*>
                constexpr std::ptrdiff_t m_mapCursorDesc = 0x50; // CUtlOrderedMap<PulseCursorID_t,PulseGraphExecutionHistoryCursorDesc_t*>
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            namespace CPulseCell_TestWaitWithCursorState {
                constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_WakeCancel = 0x78; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_WakeFail = 0xA8; // CPulse_ResumePoint
            }
            // Parent: CPulseCell_Inflow_BaseEntrypoint
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            namespace CPulseCell_Inflow_ObservableVariableListener {
                constexpr std::ptrdiff_t m_BlackboardReference = 0x70; // CPulse_BlackboardReference
                constexpr std::ptrdiff_t m_bSelfReference = 0x168; // bool
            }
            // Parent: CPulseCell_BaseFlow
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseYieldingInflow {
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PGDInstruction_t {
                constexpr std::ptrdiff_t m_nCode = 0x0; // PulseInstructionCode_t
                constexpr std::ptrdiff_t m_nVar = 0x4; // PulseRuntimeVarIndex_t
                constexpr std::ptrdiff_t m_nReg0 = 0x8; // PulseRuntimeRegisterIndex_t
                constexpr std::ptrdiff_t m_nReg1 = 0xA; // PulseRuntimeRegisterIndex_t
                constexpr std::ptrdiff_t m_nReg2 = 0xC; // PulseRuntimeRegisterIndex_t
                constexpr std::ptrdiff_t m_nInvokeBindingIndex = 0x10; // PulseRuntimeInvokeIndex_t
                constexpr std::ptrdiff_t m_nChunk = 0x14; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nDestInstruction = 0x18; // int32
                constexpr std::ptrdiff_t m_nCallInfoIndex = 0x1C; // PulseRuntimeCallInfoIndex_t
                constexpr std::ptrdiff_t m_nConstIdx = 0x20; // PulseRuntimeConstantIndex_t
                constexpr std::ptrdiff_t m_nDomainValueIdx = 0x22; // PulseRuntimeDomainValueIndex_t
                constexpr std::ptrdiff_t m_nBlackboardReferenceIdx = 0x24; // PulseRuntimeBlackboardReferenceIndex_t
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_InvokeBinding {
                constexpr std::ptrdiff_t m_RegisterMap = 0x0; // PulseRegisterMap_t
                constexpr std::ptrdiff_t m_FuncName = 0x20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nCellIndex = 0x28; // PulseRuntimeCellIndex_t
                constexpr std::ptrdiff_t m_nSrcChunk = 0x2C; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nSrcInstruction = 0x30; // int32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_Variable {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_Description = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_Type = 0x10; // CPulseValueFullType
                constexpr std::ptrdiff_t m_DefaultValue = 0x20; // KeyValues3
                constexpr std::ptrdiff_t m_bIsPublic = 0x32; // bool
                constexpr std::ptrdiff_t m_bIsObservable = 0x33; // bool
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x34; // PulseDocNodeID_t
            }
            // Parent: CPulseCell_Inflow_BaseEntrypoint
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            namespace CPulseCell_Inflow_Method {
                constexpr std::ptrdiff_t m_MethodName = 0x70; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_Description = 0x78; // CUtlString
                constexpr std::ptrdiff_t m_bIsPublic = 0x80; // bool
                constexpr std::ptrdiff_t m_ReturnType = 0x88; // CPulseValueFullType
                constexpr std::ptrdiff_t m_Args = 0x98; // CUtlLeanVector<CPulseRuntimeMethodArg>
            }
            // Parent: CBasePulseGraphInstance
            // Field count: 6
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseDomainHookInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace CPulseGraphInstance_TestDomain {
                constexpr std::ptrdiff_t m_bIsRunningUnitTests = 0xF8; // bool
                constexpr std::ptrdiff_t m_bExplicitTimeStepping = 0xF9; // bool
                constexpr std::ptrdiff_t m_bExpectingToDestroyWithYieldedCursors = 0xFA; // bool
                constexpr std::ptrdiff_t m_nNextValidateIndex = 0xFC; // int32
                constexpr std::ptrdiff_t m_Tracepoints = 0x100; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_bTestYesOrNoPath = 0x118; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace FakeEntityDerivedB_tAPI {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseNodeDynamicOutflows_t__DynamicOutflow_t {
                constexpr std::ptrdiff_t m_OutflowID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_Connection = 0x8; // CPulse_OutflowConnection
            }
            // Parent: CPulseCell_BaseFlow
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            namespace CPulseCell_Outflow_CycleShuffled {
                constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Field count: 1
            namespace PulseRuntimeOutputIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
                constexpr std::ptrdiff_t m_TagName = 0x0; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_TestWaitWithCursorState__CursorState_t {
                constexpr std::ptrdiff_t flWaitValue = 0x0; // float32
                constexpr std::ptrdiff_t bFailOnCancel = 0x4; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_DomainValue {
                constexpr std::ptrdiff_t m_nType = 0x0; // PulseDomainValueType_t
                constexpr std::ptrdiff_t m_Value = 0x8; // CGlobalSymbol
                constexpr std::ptrdiff_t m_ExpectedRuntimeType = 0x10; // CGlobalSymbol
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
            namespace CPulseCell_Step_TestDomainCreateFakeEntity {
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
            namespace CPulseCell_Step_TestDomainEntFire {
                constexpr std::ptrdiff_t m_Input = 0x48; // CUtlString
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            namespace CPulseMathlib {
            }
            // Parent: None
            // Field count: 1
            namespace PulseRuntimeBlackboardReferenceIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int16
            }
            // Parent: IGapHost_Cursor
            // Field count: 0
            namespace IGapHost_YieldingCursor {
            }
            // Parent: CPulse_OutflowConnection
            // Field count: 0
            namespace SignatureOutflow_Continue {
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            namespace CPulseCell_Test_MultiOutflow_WithParams_Yielding {
                constexpr std::ptrdiff_t m_Out1 = 0x48; // SignatureOutflow_Continue
                constexpr std::ptrdiff_t m_AsyncChild1 = 0x78; // SignatureOutflow_Continue
                constexpr std::ptrdiff_t m_AsyncChild2 = 0xA8; // SignatureOutflow_Continue
                constexpr std::ptrdiff_t m_YieldResume1 = 0xD8; // SignatureOutflow_Resume
                constexpr std::ptrdiff_t m_YieldResume2 = 0x108; // SignatureOutflow_Resume
            }
            // Parent: CPulseGraphInstance_TestDomain
            // Field count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseDomainHookInfo
            // MPulseLibraryBindings
            namespace CPulseGraphInstance_TestDomain_Derived {
                constexpr std::ptrdiff_t m_nInstanceValueX = 0x120; // int32
            }
            // Parent: CPulseCell_Inflow_BaseEntrypoint
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            namespace CPulseCell_Inflow_EntOutputHandler {
                constexpr std::ptrdiff_t m_SourceEntity = 0x70; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_SourceOutput = 0x78; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_TargetInput = 0x80; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_ExpectedParamType = 0x88; // CPulseValueFullType
            }
            // Parent: None
            // Field count: 1
            namespace PulseRuntimeConstantIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int16
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace FakeEntityDerivedA_tAPI {
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
            namespace CPulseCell_Step_TestDomainTracepoint {
            }
            // Parent: None
            // Field count: 1
            namespace PulseDocNodeID_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_BlackboardReference {
                constexpr std::ptrdiff_t m_hBlackboardResource = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIPulseGraphDef>>
                constexpr std::ptrdiff_t m_BlackboardResource = 0xE0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nNodeID = 0xE8; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_NodeName = 0xF0; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_LimitCount__InstanceState_t {
                constexpr std::ptrdiff_t m_nCurrentCount = 0x0; // int32
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
            namespace CPulseCell_Val_TestDomainGetEntityName {
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_CallInfo {
                constexpr std::ptrdiff_t m_PortName = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x8; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_RegisterMap = 0x10; // PulseRegisterMap_t
                constexpr std::ptrdiff_t m_CallMethodID = 0x30; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_nSrcChunk = 0x34; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nSrcInstruction = 0x38; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_RegisterInfo {
                constexpr std::ptrdiff_t m_nReg = 0x0; // PulseRuntimeRegisterIndex_t
                constexpr std::ptrdiff_t m_Type = 0x8; // CPulseValueFullType
                constexpr std::ptrdiff_t m_OriginName = 0x18; // CKV3MemberNameWithStorage
                constexpr std::ptrdiff_t m_nWrittenByInstruction = 0x50; // int32
                constexpr std::ptrdiff_t m_nLastReadByInstruction = 0x54; // int32
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
            namespace CPulseCell_Value_RandomFloat {
            }
            // Parent: None
            // Field count: 1
            namespace PulseRuntimeCellIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: IGapHost_YieldingCursor
            // Field count: 0
            namespace CPulseExecCursor {
            }
            // Parent: None
            // Field count: 1
            namespace PulseGraphInstanceID_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // uint32
            }
            // Parent: CPulseCell_BaseFlow
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            namespace CPulseCell_Outflow_IntSwitch {
                constexpr std::ptrdiff_t m_DefaultCaseOutflow = 0x48; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_CaseOutflows = 0x78; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseGraphDef {
                constexpr std::ptrdiff_t m_DomainIdentifier = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_ParentMapName = 0x10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_ParentXmlName = 0x18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vecGameBlackboards = 0x20; // CUtlVector<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_Chunks = 0x38; // CUtlVector<CPulse_Chunk*>
                constexpr std::ptrdiff_t m_Cells = 0x50; // CUtlVector<CPulseCell_Base*>
                constexpr std::ptrdiff_t m_Vars = 0x68; // CUtlVector<CPulse_Variable>
                constexpr std::ptrdiff_t m_PublicOutputs = 0x80; // CUtlVector<CPulse_PublicOutput>
                constexpr std::ptrdiff_t m_InvokeBindings = 0x98; // CUtlVector<CPulse_InvokeBinding*>
                constexpr std::ptrdiff_t m_CallInfos = 0xB0; // CUtlVector<CPulse_CallInfo*>
                constexpr std::ptrdiff_t m_Constants = 0xC8; // CUtlVector<CPulse_Constant>
                constexpr std::ptrdiff_t m_DomainValues = 0xE0; // CUtlVector<CPulse_DomainValue>
                constexpr std::ptrdiff_t m_BlackboardReferences = 0xF8; // CUtlVector<CPulse_BlackboardReference>
                constexpr std::ptrdiff_t m_OutputConnections = 0x110; // CUtlVector<CPulse_OutputConnection*>
            }
            // Parent: CPulseCell_BaseFlow
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            namespace CPulseCell_Test_MultiInflow_NoDefault {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_Constant {
                constexpr std::ptrdiff_t m_Type = 0x0; // CPulseValueFullType
                constexpr std::ptrdiff_t m_Value = 0x10; // KeyValues3
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
            namespace CPulseCell_WaitForCursorsWithTag {
                constexpr std::ptrdiff_t m_bTagSelfWhenComplete = 0x80; // bool
                constexpr std::ptrdiff_t m_nDesiredKillPriority = 0x84; // PulseCursorCancelPriority_t
            }
            // Parent: CPulseCell_BaseFlow
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_BaseEntrypoint {
                constexpr std::ptrdiff_t m_EntryChunk = 0x48; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_RegisterMap = 0x50; // PulseRegisterMap_t
            }
            // Parent: None
            // Field count: 1
            namespace PulseRuntimeCallInfoIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseLerp {
                constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
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
            namespace CPulseCell_Outflow_TestExplicitYesNo {
                constexpr std::ptrdiff_t m_Yes = 0x48; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_No = 0x78; // CPulse_OutflowConnection
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
            namespace CPulseCell_Outflow_TestRandomYesNo {
                constexpr std::ptrdiff_t m_Yes = 0x48; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_No = 0x78; // CPulse_OutflowConnection
            }
            // Parent: CPulseCell_BaseFlow
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            namespace CPulseCell_Step_DebugLog {
            }
            // Parent: None
            // Field count: 1
            namespace PulseRuntimeChunkIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: CPulseCell_BaseFlow
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPulseCellOutflowHookInfo
            namespace CPulseCell_Outflow_CycleOrdered {
                constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseRuntimeMethodArg {
                constexpr std::ptrdiff_t m_Name = 0x0; // CKV3MemberNameWithStorage
                constexpr std::ptrdiff_t m_Description = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_Type = 0x40; // CPulseValueFullType
            }
            // Parent: None
            // Field count: 1
            namespace PulseRuntimeStateOffset_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // uint16
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
            namespace CPulseCell_Value_RandomInt {
            }
            // Parent: CPulseExecCursor
            // Field count: 4
            //
            // Metadata:
            // MPulseLibraryBindings
            namespace CPulseTurtleGraphicsCursor {
                constexpr std::ptrdiff_t m_Color = 0xA8; // Color
                constexpr std::ptrdiff_t m_vPos = 0xAC; // Vector2D
                constexpr std::ptrdiff_t m_flHeadingDeg = 0xB4; // float32
                constexpr std::ptrdiff_t m_bPenUp = 0xB8; // bool
            }
        }
    }
}
