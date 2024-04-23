// Generated using https://github.com/a2x/cs2-dumper
// 2024-04-23 10:42:31.964705500 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: pulse_system.dll
        // Classes count: 85
        // Enums count: 7
        namespace pulse_system_dll {
            // Alignment: 4
            // Members count: 3
            enum class PulseTestEnumShape_t : uint32_t {
                CIRCLE = 0x64,
                SQUARE = 0xC8,
                TRIANGLE = 0x12C
            };
            // Alignment: 4
            // Members count: 2
            enum class PulseMethodCallMode_t : uint32_t {
                SYNC_WAIT_FOR_COMPLETION = 0x0,
                ASYNC_FIRE_AND_FORGET = 0x1
            };
            // Alignment: 4
            // Members count: 3
            enum class PulseCursorExecResult_t : uint32_t {
                Succeeded = 0x0,
                Canceled = 0x1,
                Failed = 0x2
            };
            // Alignment: 4
            // Members count: 19
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
                PVAL_ENTITY_NAME = 0xA,
                PVAL_SCHEMA_PTR = 0xB,
                PVAL_TYPESAFE_INT = 0xC,
                PVAL_CURSOR_FLOW = 0xD,
                PVAL_ANY = 0xE,
                PVAL_SCHEMA_ENUM = 0xF,
                PVAL_PANORAMA_PANEL_HANDLE = 0x10,
                PVAL_COUNT = 0x11
            };
            // Alignment: 2
            // Members count: 61
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
            };
            // Alignment: 4
            // Members count: 5
            enum class PulseTestEnumColor_t : uint32_t {
                BLACK = 0x0,
                WHITE = 0x1,
                RED = 0x2,
                GREEN = 0x3,
                BLUE = 0x4
            };
            // Alignment: 4
            // Members count: 4
            enum class PulseCursorCancelPriority_t : uint32_t {
                None = 0x0,
                CancelOnSucceeded = 0x1,
                SoftCancel = 0x2,
                HardCancel = 0x3
            };
            // Parent: CPulseCell_BaseFlow
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            namespace CPulseCell_Step_PublicOutput {
                constexpr std::ptrdiff_t m_OutputIndex = 0x48; // PulseRuntimeOutputIndex_t
            }
            // Parent: CPulseCell_BaseValue
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            namespace CPulseCell_Val_TestDomainFindEntityByName {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            namespace CPulseTestFuncs_LibraryA {
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            namespace CPulseCell_Step_TestDomainDestroyFakeEntity {
            }
            // Parent: None
            // Fields count: 1
            namespace PulseRuntimeVarIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Fields count: 1
            namespace PulseRuntimeEntrypointIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_Chunk {
                constexpr std::ptrdiff_t m_Instructions = 0x0; // CUtlLeanVector<PGDInstruction_t>
                constexpr std::ptrdiff_t m_Registers = 0x10; // CUtlLeanVector<CPulse_RegisterInfo>
                constexpr std::ptrdiff_t m_InstructionEditorIDs = 0x20; // CUtlLeanVector<PulseDocNodeID_t>
            }
            // Parent: None
            // Fields count: 1
            namespace PulseRuntimeInvokeIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleOrdered__InstanceState_t {
                constexpr std::ptrdiff_t m_nNextIndex = 0x0; // int32
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_WaitForCursorsWithTagBase {
                constexpr std::ptrdiff_t m_nCursorsAllowedToWait = 0x48; // int32
                constexpr std::ptrdiff_t m_WaitComplete = 0x50; // CPulse_ResumePoint
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            namespace CPulseTestScriptLib {
            }
            // Parent: None
            // Fields count: 1
            namespace PulseRuntimeRegisterIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int16
            }
            // Parent: None
            // Fields count: 4
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
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_OutflowConnection {
                constexpr std::ptrdiff_t m_SourceOutflowName = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nDestChunk = 0x8; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nInstruction = 0xC; // int32
            }
            // Parent: None
            // Fields count: 1
            namespace PulseCursorID_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            namespace CBasePulseGraphInstance {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Base {
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x8; // PulseDocNodeID_t
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            namespace CPulseTestFuncs_DerivedDomain {
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            namespace CPulseCell_Inflow_Yield {
                constexpr std::ptrdiff_t m_UnyieldResume = 0x48; // CPulse_ResumePoint
            }
            // Parent: CPulseCell_Inflow_BaseEntrypoint
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            namespace CPulseCell_Inflow_GraphHook {
                constexpr std::ptrdiff_t m_HookName = 0x70; // CUtlSymbolLarge
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
            namespace CPulseCell_Inflow_Wait {
                constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
            }
            // Parent: CPulseExecCursor
            // Fields count: 2
            //
            // Metadata:
            // MPulseLibraryBindings
            namespace CTestDomainDerived_Cursor {
                constexpr std::ptrdiff_t m_nCursorValueA = 0x168; // int32
                constexpr std::ptrdiff_t m_nCursorValueB = 0x16C; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseRegisterMap_t {
                constexpr std::ptrdiff_t m_Inparams = 0x0; // KeyValues3
                constexpr std::ptrdiff_t m_Outparams = 0x10; // KeyValues3
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
            namespace CPulseCell_CursorQueue {
                constexpr std::ptrdiff_t m_nCursorsAllowedToRunParallel = 0x60; // int32
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
            namespace CPulseCell_Value_TestValue50 {
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            namespace CPulseCell_Test_MultiInflow_WithDefault {
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            namespace CPulseCell_Outflow_StringSwitch {
                constexpr std::ptrdiff_t m_DefaultCaseOutflow = 0x48; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_CaseOutflows = 0x58; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            namespace CPulseCell_Test_NoInflow {
            }
            // Parent: None
            // Fields count: 1
            namespace PulseTestEHandle_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleShuffled__InstanceState_t {
                constexpr std::ptrdiff_t m_Shuffle = 0x0; // CUtlVectorFixedGrowable<uint8>
                constexpr std::ptrdiff_t m_nNextShuffle = 0x20; // int32
            }
            // Parent: CPulseCell_Base
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseValue {
            }
            // Parent: CPulse_OutflowConnection
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_ResumePoint {
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            namespace CPulseCell_Outflow_CycleRandom {
                constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: CPulseCell_Inflow_BaseEntrypoint
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            namespace CPulseCell_Inflow_EventHandler {
                constexpr std::ptrdiff_t m_EventName = 0x70; // CUtlSymbolLarge
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_PublicOutput {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_Description = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_ParamType = 0x10; // CPulseValueFullType
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            namespace CPulseCursorFuncs {
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            namespace CPulseCell_Timeline {
                constexpr std::ptrdiff_t m_TimelineEvents = 0x48; // CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
                constexpr std::ptrdiff_t m_bWaitForChildOutflows = 0x60; // bool
                constexpr std::ptrdiff_t m_OnFinished = 0x68; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_OnCanceled = 0x78; // CPulse_ResumePoint
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_OutputConnection {
                constexpr std::ptrdiff_t m_SourceOutput = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_TargetEntity = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_TargetInput = 0x10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_Param = 0x18; // CUtlSymbolLarge
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace FakeEntity_tAPI {
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            namespace CPulseCell_Step_CallExternalMethod {
                constexpr std::ptrdiff_t m_MethodName = 0x48; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_ExpectedArgs = 0x50; // CUtlVector<CPulseRuntimeMethodArg>
                constexpr std::ptrdiff_t m_nAsyncCallMode = 0x68; // PulseMethodCallMode_t
                constexpr std::ptrdiff_t m_OnFinished = 0x70; // CPulse_ResumePoint
            }
            // Parent: CBasePulseGraphInstance
            // Fields count: 0
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            namespace CPulseGraphInstance_TurtleGraphics {
            }
            // Parent: CPulseCell_Base
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseFlow {
            }
            // Parent: None
            // Fields count: 1
            namespace PulseCursorYieldToken_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Fields count: 7
            namespace FakeEntity_t {
                constexpr std::ptrdiff_t m_nHandle = 0x0; // PulseTestEHandle_t
                constexpr std::ptrdiff_t m_Name = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_Class = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_bDestroyed = 0x18; // bool
                constexpr std::ptrdiff_t m_pAssociatedGraphInstance = 0x20; // CPulseGraphInstance_TestDomain*
                constexpr std::ptrdiff_t m_bFuncWasCalled = 0x28; // bool
                constexpr std::ptrdiff_t m_fValue = 0x2C; // float32
            }
            // Parent: CPulseCell_BaseYieldingInflow
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            namespace CPulseCell_TestWaitWithCursorState {
                constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_WakeCancel = 0x58; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_WakeFail = 0x68; // CPulse_ResumePoint
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseYieldingInflow {
            }
            // Parent: None
            // Fields count: 11
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
                constexpr std::ptrdiff_t m_DomainValue = 0x28; // CBufferString
            }
            // Parent: None
            // Fields count: 5
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
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_Variable {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_Description = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_Type = 0x10; // CPulseValueFullType
                constexpr std::ptrdiff_t m_DefaultValue = 0x20; // KeyValues3
                constexpr std::ptrdiff_t m_bIsPublic = 0x32; // bool
            }
            // Parent: CPulseCell_Inflow_BaseEntrypoint
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            namespace CPulseCell_Inflow_Method {
                constexpr std::ptrdiff_t m_MethodName = 0x70; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_Description = 0x78; // CUtlString
                constexpr std::ptrdiff_t m_bIsPublic = 0x80; // bool
                constexpr std::ptrdiff_t m_ReturnType = 0x88; // CPulseValueFullType
                constexpr std::ptrdiff_t m_Args = 0x98; // CUtlVector<CPulseRuntimeMethodArg>
            }
            // Parent: CBasePulseGraphInstance
            // Fields count: 6
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace CPulseGraphInstance_TestDomain {
                constexpr std::ptrdiff_t m_bIsRunningUnitTests = 0xD8; // bool
                constexpr std::ptrdiff_t m_bExplicitTimeStepping = 0xD9; // bool
                constexpr std::ptrdiff_t m_bExpectingToDestroyWithYieldedCursors = 0xDA; // bool
                constexpr std::ptrdiff_t m_nNextValidateIndex = 0xDC; // int32
                constexpr std::ptrdiff_t m_Tracepoints = 0xE0; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_bTestYesOrNoPath = 0xF8; // bool
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            namespace CPulseCell_Outflow_CycleShuffled {
                constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Fields count: 1
            namespace PulseRuntimeOutputIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Fields count: 1
            namespace CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
                constexpr std::ptrdiff_t m_TagName = 0x0; // CUtlSymbolLarge
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_TestWaitWithCursorState__CursorState_t {
                constexpr std::ptrdiff_t flWaitValue = 0x0; // float32
                constexpr std::ptrdiff_t bFailOnCancel = 0x4; // bool
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            namespace CPulseCell_Step_TestDomainCreateFakeEntity {
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
            namespace CPulseCell_Step_TestDomainEntFire {
                constexpr std::ptrdiff_t m_Input = 0x48; // CUtlString
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            // MPropertyDescription
            namespace CPulseMathlib {
            }
            // Parent: CPulseGraphInstance_TestDomain
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            namespace CPulseGraphInstance_TestDomain_Derived {
                constexpr std::ptrdiff_t m_nInstanceValueX = 0x100; // int32
            }
            // Parent: CPulseCell_Inflow_BaseEntrypoint
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            namespace CPulseCell_Inflow_EntOutputHandler {
                constexpr std::ptrdiff_t m_SourceEntity = 0x70; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_SourceOutput = 0x78; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_TargetInput = 0x80; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_ExpectedParamType = 0x88; // CPulseValueFullType
            }
            // Parent: None
            // Fields count: 1
            namespace PulseRuntimeConstantIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int16
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            namespace CPulseCell_Step_TestDomainTracepoint {
            }
            // Parent: None
            // Fields count: 1
            namespace PulseDocNodeID_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: CPulseCell_BaseValue
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            // MPropertyFriendlyName
            namespace CPulseCell_Val_TestDomainGetEntityName {
            }
            // Parent: None
            // Fields count: 6
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
            // Fields count: 5
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
            // Parent: None
            // Fields count: 1
            namespace PulseRuntimeCellIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Fields count: 0
            namespace CPulseExecCursor {
            }
            // Parent: None
            // Fields count: 1
            namespace PulseGraphInstanceID_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // uint32
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            namespace CPulseCell_Outflow_IntSwitch {
                constexpr std::ptrdiff_t m_DefaultCaseOutflow = 0x48; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_CaseOutflows = 0x58; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseGraphDef {
                constexpr std::ptrdiff_t m_DomainIdentifier = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_ParentMapName = 0x10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_Chunks = 0x18; // CUtlVector<CPulse_Chunk*>
                constexpr std::ptrdiff_t m_Cells = 0x30; // CUtlVector<CPulseCell_Base*>
                constexpr std::ptrdiff_t m_Vars = 0x48; // CUtlVector<CPulse_Variable>
                constexpr std::ptrdiff_t m_PublicOutputs = 0x60; // CUtlVector<CPulse_PublicOutput>
                constexpr std::ptrdiff_t m_InvokeBindings = 0x78; // CUtlVector<CPulse_InvokeBinding*>
                constexpr std::ptrdiff_t m_CallInfos = 0x90; // CUtlVector<CPulse_CallInfo*>
                constexpr std::ptrdiff_t m_Constants = 0xA8; // CUtlVector<CPulse_Constant>
                constexpr std::ptrdiff_t m_OutputConnections = 0xC0; // CUtlVector<CPulse_OutputConnection*>
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            namespace CPulseCell_Test_MultiInflow_NoDefault {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_Constant {
                constexpr std::ptrdiff_t m_Type = 0x0; // CPulseValueFullType
                constexpr std::ptrdiff_t m_Value = 0x10; // KeyValues3
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
            namespace CPulseCell_WaitForCursorsWithTag {
                constexpr std::ptrdiff_t m_bTagSelfWhenComplete = 0x60; // bool
                constexpr std::ptrdiff_t m_nDesiredKillPriority = 0x64; // PulseCursorCancelPriority_t
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_BaseEntrypoint {
                constexpr std::ptrdiff_t m_EntryChunk = 0x48; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_RegisterMap = 0x50; // PulseRegisterMap_t
            }
            // Parent: None
            // Fields count: 1
            namespace PulseRuntimeCallInfoIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
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
            namespace CPulseCell_Outflow_TestExplicitYesNo {
                constexpr std::ptrdiff_t m_Yes = 0x48; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_No = 0x58; // CPulse_OutflowConnection
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
            namespace CPulseCell_Outflow_TestRandomYesNo {
                constexpr std::ptrdiff_t m_Yes = 0x48; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_No = 0x58; // CPulse_OutflowConnection
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            namespace CPulseCell_Step_DebugLog {
            }
            // Parent: None
            // Fields count: 1
            namespace PulseRuntimeChunkIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: CPulseCell_BaseFlow
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCellForDomain
            // MPulseCellMethodBindings
            namespace CPulseCell_Outflow_CycleOrdered {
                constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseRuntimeMethodArg {
                constexpr std::ptrdiff_t m_Name = 0x0; // CKV3MemberNameWithStorage
                constexpr std::ptrdiff_t m_Description = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_Type = 0x40; // CPulseValueFullType
            }
            // Parent: None
            // Fields count: 1
            namespace PulseRuntimeStateOffset_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // uint16
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
            namespace CPulseCell_Value_RandomInt {
            }
            // Parent: CPulseExecCursor
            // Fields count: 4
            //
            // Metadata:
            // MPulseLibraryBindings
            namespace CPulseTurtleGraphicsCursor {
                constexpr std::ptrdiff_t m_Color = 0x168; // Color
                constexpr std::ptrdiff_t m_vPos = 0x16C; // Vector2D
                constexpr std::ptrdiff_t m_flHeadingDeg = 0x174; // float32
                constexpr std::ptrdiff_t m_bPenUp = 0x178; // bool
            }
        }
    }
}
