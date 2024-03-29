// Generated using https://github.com/a2x/cs2-dumper
// 2024-03-29 21:16:02.890657436 UTC

namespace CS2Dumper.Schemas {
    // Module: libpulse_system.so
    // Classes count: 49
    // Enums count: 0
    public static class LibpulseSystem {
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class FakeEntity_tAPI {
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
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_Constant {
            public const nint m_Type = 0x0; // CPulseValueFullType
            public const nint m_Value = 0x10; // KeyValues3
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
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyDescription
        public static class CPulseMathlib {
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
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PulseRegisterMap_t {
            public const nint m_Inparams = 0x0; // KeyValues3
            public const nint m_Outparams = 0x10; // KeyValues3
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
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_OutflowConnection {
            public const nint m_SourceOutflowName = 0x0; // CUtlSymbolLarge
            public const nint m_nDestChunk = 0x8; // PulseRuntimeChunkIndex_t
            public const nint m_nInstruction = 0xC; // int32
        }
        // Parent: CPulse_OutflowConnection
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_ResumePoint {
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Base {
            public const nint m_nEditorNodeID = 0x8; // PulseDocNodeID_t
        }
        // Parent: CPulseCell_Base
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseFlow {
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
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseRuntimeMethodArg {
            public const nint m_Name = 0x0; // CKV3MemberNameWithStorage
            public const nint m_Description = 0x38; // CUtlString
            public const nint m_Type = 0x40; // CPulseValueFullType
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseYieldingInflow {
        }
        // Parent: CPulseCell_Base
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseValue {
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
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_CycleOrdered__InstanceState_t {
            public const nint m_nNextIndex = 0x0; // int32
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
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        public static class CPulseCell_Step_TestDomainTracepoint {
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
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        public static class CPulseCell_Step_TestDomainDestroyFakeEntity {
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
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_TestWaitWithCursorState__CursorState_t {
            public const nint flWaitValue = 0x0; // float32
            public const nint bFailOnCancel = 0x4; // bool
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyDescription
        public static class CPulseTestFuncs_DerivedDomain {
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
        // Fields count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        public static class CPulseCell_Test_MultiInflow_NoDefault {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        public static class CPulseGraphInstance_TurtleGraphics {
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
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_WaitForCursorsWithTagBase {
            public const nint m_nCursorsAllowedToWait = 0x48; // int32
            public const nint m_WaitComplete = 0x50; // CPulse_ResumePoint
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
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyDescription
        public static class CPulseTestFuncs_LibraryA {
        }
    }
}
