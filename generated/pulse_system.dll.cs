public static class CPulseCell_Base {
    public const nint m_nEditorNodeID = 0x8; // PulseDocNodeID_t
}

public static class CPulseCell_Inflow_BaseEntrypoint {
    public const nint m_EntryChunk = 0x48; // PulseRuntimeChunkIndex_t
    public const nint m_RegisterMap = 0x50; // PulseRegisterMap_t
}

public static class CPulseCell_Inflow_EntOutputHandler {
    public const nint m_SourceEntity = 0x70; // CUtlSymbolLarge
    public const nint m_SourceOutput = 0x78; // CUtlSymbolLarge
    public const nint m_TargetInput = 0x80; // CUtlSymbolLarge
    public const nint m_ExpectedParamType = 0x88; // CPulseValueFullType
}

public static class CPulseCell_Inflow_EventHandler {
    public const nint m_EventName = 0x70; // CUtlSymbolLarge
}

public static class CPulseCell_Inflow_GraphHook {
    public const nint m_HookName = 0x70; // CUtlSymbolLarge
}

public static class CPulseCell_Inflow_Method {
    public const nint m_MethodName = 0x70; // CUtlSymbolLarge
    public const nint m_Description = 0x78; // CUtlString
    public const nint m_bIsPublic = 0x80; // bool
    public const nint m_ReturnType = 0x88; // CPulseValueFullType
    public const nint m_Args = 0x98; // CUtlVector< CPulseRuntimeMethodArg >
}

public static class CPulseCell_Inflow_Wait {
    public const nint m_WakeResume = 0x48; // CPulse_ResumePoint
}

public static class CPulseCell_Inflow_Yield {
    public const nint m_UnyieldResume = 0x48; // CPulse_ResumePoint
}

public static class CPulseCell_Outflow_CycleOrdered {
    public const nint m_Outputs = 0x48; // CUtlVector< CPulse_OutflowConnection >
}

public static class CPulseCell_Outflow_CycleOrdered_InstanceState_t {
    public const nint m_nNextIndex = 0x0; // int32
}

public static class CPulseCell_Outflow_CycleRandom {
    public const nint m_Outputs = 0x48; // CUtlVector< CPulse_OutflowConnection >
}

public static class CPulseCell_Outflow_CycleShuffled {
    public const nint m_Outputs = 0x48; // CUtlVector< CPulse_OutflowConnection >
}

public static class CPulseCell_Outflow_CycleShuffled_InstanceState_t {
    public const nint m_Shuffle = 0x0; // CUtlVectorFixedGrowable< uint8 >
    public const nint m_nNextShuffle = 0x20; // int32
}

public static class CPulseCell_Outflow_IntSwitch {
    public const nint m_DefaultCaseOutflow = 0x48; // CPulse_OutflowConnection
    public const nint m_CaseOutflows = 0x58; // CUtlVector< CPulse_OutflowConnection >
}

public static class CPulseCell_Outflow_SimultaneousParallel {
    public const nint m_Outputs = 0x48; // CUtlVector< CPulse_OutflowConnection >
}

public static class CPulseCell_Outflow_StringSwitch {
    public const nint m_DefaultCaseOutflow = 0x48; // CPulse_OutflowConnection
    public const nint m_CaseOutflows = 0x58; // CUtlVector< CPulse_OutflowConnection >
}

public static class CPulseCell_Outflow_TestExplicitYesNo {
    public const nint m_Yes = 0x48; // CPulse_OutflowConnection
    public const nint m_No = 0x58; // CPulse_OutflowConnection
}

public static class CPulseCell_Outflow_TestRandomYesNo {
    public const nint m_Yes = 0x48; // CPulse_OutflowConnection
    public const nint m_No = 0x58; // CPulse_OutflowConnection
}

public static class CPulseCell_Step_CallExternalMethod {
    public const nint m_MethodName = 0x48; // CUtlSymbolLarge
    public const nint m_ExpectedArgs = 0x50; // CUtlVector< CPulseRuntimeMethodArg >
}

public static class CPulseCell_Step_PublicOutput {
    public const nint m_OutputIndex = 0x48; // PulseRuntimeOutputIndex_t
}

public static class CPulseCell_Step_TestDomainEntFire {
    public const nint m_Input = 0x48; // CUtlString
}

public static class CPulseGraphDef {
    public const nint m_DomainIdentifier = 0x8; // CUtlSymbolLarge
    public const nint m_ParentMapName = 0x10; // CUtlSymbolLarge
    public const nint m_Chunks = 0x18; // CUtlVector< CPulse_Chunk* >
    public const nint m_Cells = 0x30; // CUtlVector< CPulseCell_Base* >
    public const nint m_Vars = 0x48; // CUtlVector< CPulse_Variable >
    public const nint m_PublicOutputs = 0x60; // CUtlVector< CPulse_PublicOutput >
    public const nint m_InvokeBindings = 0x78; // CUtlVector< CPulse_InvokeBinding* >
    public const nint m_CallInfos = 0x90; // CUtlVector< CPulse_CallInfo* >
    public const nint m_OutputConnections = 0xA8; // CUtlVector< CPulse_OutputConnection* >
}

public static class CPulseGraphInstance_TestDomain {
    public const nint m_bIsRunningUnitTests = 0xD0; // bool
    public const nint m_bExplicitTimeStepping = 0xD1; // bool
    public const nint m_bExpectingToDestroyWithYieldedCursors = 0xD2; // bool
    public const nint m_nNextValidateIndex = 0xD4; // int32
    public const nint m_Tracepoints = 0xD8; // CUtlVector< CUtlString >
    public const nint m_bTestYesOrNoPath = 0xF0; // bool
}

public static class CPulseGraphInstance_TestDomain_Derived {
    public const nint m_nInstanceValueX = 0xF8; // int32
}

public static class CPulseRuntimeMethodArg {
    public const nint m_Name = 0x0; // CKV3MemberNameWithStorage
    public const nint m_Description = 0x38; // CUtlString
    public const nint m_Type = 0x40; // CPulseValueFullType
}

public static class CPulseTurtleGraphicsCursor {
    public const nint m_Color = 0x188; // Color
    public const nint m_vPos = 0x18C; // Vector2D
    public const nint m_flHeadingDeg = 0x194; // float32
    public const nint m_bPenUp = 0x198; // bool
}

public static class CPulse_CallInfo {
    public const nint m_PortName = 0x0; // CUtlSymbolLarge
    public const nint m_nEditorNodeID = 0x8; // PulseDocNodeID_t
    public const nint m_RegisterMap = 0x10; // PulseRegisterMap_t
    public const nint m_CallMethodID = 0x30; // PulseDocNodeID_t
    public const nint m_nSrcChunk = 0x34; // PulseRuntimeChunkIndex_t
    public const nint m_nSrcInstruction = 0x38; // int32
}

public static class CPulse_Chunk {
    public const nint m_Instructions = 0x0; // CUtlLeanVector< PGDInstruction_t >
    public const nint m_Registers = 0x10; // CUtlLeanVector< CPulse_RegisterInfo >
    public const nint m_InstructionEditorIDs = 0x20; // CUtlLeanVector< PulseDocNodeID_t >
}

public static class CPulse_InvokeBinding {
    public const nint m_RegisterMap = 0x0; // PulseRegisterMap_t
    public const nint m_FuncName = 0x20; // CUtlSymbolLarge
    public const nint m_nCellIndex = 0x28; // PulseRuntimeCellIndex_t
    public const nint m_InstanceType = 0x30; // CPulseValueFullType
    public const nint m_nSrcChunk = 0x40; // PulseRuntimeChunkIndex_t
    public const nint m_nSrcInstruction = 0x44; // int32
}

public static class CPulse_OutflowConnection {
    public const nint m_SourceOutflowName = 0x0; // CUtlSymbolLarge
    public const nint m_nDestChunk = 0x8; // PulseRuntimeChunkIndex_t
    public const nint m_nInstruction = 0xC; // int32
}

public static class CPulse_OutputConnection {
    public const nint m_SourceOutput = 0x0; // CUtlSymbolLarge
    public const nint m_TargetEntity = 0x8; // CUtlSymbolLarge
    public const nint m_TargetInput = 0x10; // CUtlSymbolLarge
    public const nint m_Param = 0x18; // CUtlSymbolLarge
}

public static class CPulse_PublicOutput {
    public const nint m_Name = 0x0; // CUtlSymbolLarge
    public const nint m_Description = 0x8; // CUtlString
    public const nint m_ParamType = 0x10; // CPulseValueFullType
}

public static class CPulse_RegisterInfo {
    public const nint m_nReg = 0x0; // PulseRuntimeRegisterIndex_t
    public const nint m_Type = 0x8; // CPulseValueFullType
    public const nint m_OriginName = 0x18; // CKV3MemberNameWithStorage
    public const nint m_nWrittenByInstruction = 0x50; // int32
    public const nint m_nLastReadByInstruction = 0x54; // int32
}

public static class CPulse_Variable {
    public const nint m_Name = 0x0; // CUtlSymbolLarge
    public const nint m_Description = 0x8; // CUtlString
    public const nint m_Type = 0x10; // CPulseValueFullType
    public const nint m_DefaultValue = 0x20; // KeyValues3
    public const nint m_bIsPublic = 0x32; // bool
}

public static class CTestDomainDerived_Cursor {
    public const nint m_nCursorValueA = 0x188; // int32
    public const nint m_nCursorValueB = 0x18C; // int32
}

public static class FakeEntity_t {
    public const nint m_nHandle = 0x0; // PulseTestEHandle_t
    public const nint m_Name = 0x8; // CUtlString
    public const nint m_Class = 0x10; // CUtlString
    public const nint m_bDestroyed = 0x18; // bool
    public const nint m_pAssociatedGraphInstance = 0x20; // CPulseGraphInstance_TestDomain*
    public const nint m_bFuncWasCalled = 0x28; // bool
    public const nint m_fValue = 0x2C; // float32
}

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
    public const nint m_Arg0Name = 0x20; // CUtlSymbolLarge
    public const nint m_Arg1Name = 0x28; // CUtlSymbolLarge
    public const nint m_bLiteralBool = 0x30; // bool
    public const nint m_nLiteralInt = 0x34; // int32
    public const nint m_flLiteralFloat = 0x38; // float32
    public const nint m_LiteralString = 0x40; // CBufferString
    public const nint m_vLiteralVec3 = 0x50; // Vector
}

public static class PulseDocNodeID_t {
    public const nint m_Value = 0x0; // int32
}

public static class PulseRegisterMap_t {
    public const nint m_Inparams = 0x0; // KeyValues3
    public const nint m_Outparams = 0x10; // KeyValues3
}

public static class PulseRuntimeCallInfoIndex_t {
    public const nint m_Value = 0x0; // int32
}

public static class PulseRuntimeCellIndex_t {
    public const nint m_Value = 0x0; // int32
}

public static class PulseRuntimeChunkIndex_t {
    public const nint m_Value = 0x0; // int32
}

public static class PulseRuntimeEntrypointIndex_t {
    public const nint m_Value = 0x0; // int32
}

public static class PulseRuntimeInvokeIndex_t {
    public const nint m_Value = 0x0; // int32
}

public static class PulseRuntimeOutputIndex_t {
    public const nint m_Value = 0x0; // int32
}

public static class PulseRuntimeRegisterIndex_t {
    public const nint m_Value = 0x0; // int16
}

public static class PulseRuntimeStateOffset_t {
    public const nint m_Value = 0x0; // uint16
}

public static class PulseRuntimeVarIndex_t {
    public const nint m_Value = 0x0; // int32
}

public static class PulseTestEHandle_t {
    public const nint m_Value = 0x0; // int32
}