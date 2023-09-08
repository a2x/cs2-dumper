public static class CPulseCell_Base {
    public const ulong m_nEditorNodeID = 0x8;
}

public static class CPulseCell_Inflow_BaseEntrypoint {
    public const ulong m_EntryChunk = 0x48;
    public const ulong m_RegisterMap = 0x50;
}

public static class CPulseCell_Inflow_EntOutputHandler {
    public const ulong m_SourceEntity = 0x70;
    public const ulong m_SourceOutput = 0x78;
    public const ulong m_TargetInput = 0x80;
    public const ulong m_ExpectedParamType = 0x88;
}

public static class CPulseCell_Inflow_EventHandler {
    public const ulong m_EventName = 0x70;
}

public static class CPulseCell_Inflow_GraphHook {
    public const ulong m_HookName = 0x70;
}

public static class CPulseCell_Inflow_Method {
    public const ulong m_MethodName = 0x70;
    public const ulong m_Description = 0x78;
    public const ulong m_bIsPublic = 0x80;
    public const ulong m_ReturnType = 0x88;
    public const ulong m_Args = 0x98;
}

public static class CPulseCell_Inflow_Wait {
    public const ulong m_WakeResume = 0x48;
}

public static class CPulseCell_Inflow_Yield {
    public const ulong m_UnyieldResume = 0x48;
}

public static class CPulseCell_Outflow_CycleOrdered {
    public const ulong m_Outputs = 0x48;
}

public static class CPulseCell_Outflow_CycleOrdered_InstanceState_t {
    public const ulong m_nNextIndex = 0x0;
}

public static class CPulseCell_Outflow_CycleRandom {
    public const ulong m_Outputs = 0x48;
}

public static class CPulseCell_Outflow_CycleShuffled {
    public const ulong m_Outputs = 0x48;
}

public static class CPulseCell_Outflow_CycleShuffled_InstanceState_t {
    public const ulong m_Shuffle = 0x0;
    public const ulong m_nNextShuffle = 0x20;
}

public static class CPulseCell_Outflow_IntSwitch {
    public const ulong m_DefaultCaseOutflow = 0x48;
    public const ulong m_CaseOutflows = 0x58;
}

public static class CPulseCell_Outflow_SimultaneousParallel {
    public const ulong m_Outputs = 0x48;
}

public static class CPulseCell_Outflow_StringSwitch {
    public const ulong m_DefaultCaseOutflow = 0x48;
    public const ulong m_CaseOutflows = 0x58;
}

public static class CPulseCell_Outflow_TestExplicitYesNo {
    public const ulong m_Yes = 0x48;
    public const ulong m_No = 0x58;
}

public static class CPulseCell_Outflow_TestRandomYesNo {
    public const ulong m_Yes = 0x48;
    public const ulong m_No = 0x58;
}

public static class CPulseCell_Step_CallExternalMethod {
    public const ulong m_MethodName = 0x48;
    public const ulong m_ExpectedArgs = 0x50;
}

public static class CPulseCell_Step_PublicOutput {
    public const ulong m_OutputIndex = 0x48;
}

public static class CPulseCell_Step_TestDomainEntFire {
    public const ulong m_Input = 0x48;
}

public static class CPulseGraphDef {
    public const ulong m_DomainIdentifier = 0x8;
    public const ulong m_ParentMapName = 0x10;
    public const ulong m_Chunks = 0x18;
    public const ulong m_Cells = 0x30;
    public const ulong m_Vars = 0x48;
    public const ulong m_PublicOutputs = 0x60;
    public const ulong m_InvokeBindings = 0x78;
    public const ulong m_CallInfos = 0x90;
    public const ulong m_OutputConnections = 0xa8;
}

public static class CPulseGraphInstance_TestDomain {
    public const ulong m_bIsRunningUnitTests = 0xd0;
    public const ulong m_bExplicitTimeStepping = 0xd1;
    public const ulong m_bExpectingToDestroyWithYieldedCursors = 0xd2;
    public const ulong m_nNextValidateIndex = 0xd4;
    public const ulong m_Tracepoints = 0xd8;
    public const ulong m_bTestYesOrNoPath = 0xf0;
}

public static class CPulseGraphInstance_TestDomain_Derived {
    public const ulong m_nInstanceValueX = 0xf8;
}

public static class CPulseRuntimeMethodArg {
    public const ulong m_Name = 0x0;
    public const ulong m_Description = 0x38;
    public const ulong m_Type = 0x40;
}

public static class CPulseTurtleGraphicsCursor {
    public const ulong m_Color = 0x188;
    public const ulong m_vPos = 0x18c;
    public const ulong m_flHeadingDeg = 0x194;
    public const ulong m_bPenUp = 0x198;
}

public static class CPulse_CallInfo {
    public const ulong m_PortName = 0x0;
    public const ulong m_nEditorNodeID = 0x8;
    public const ulong m_RegisterMap = 0x10;
    public const ulong m_CallMethodID = 0x30;
    public const ulong m_nSrcChunk = 0x34;
    public const ulong m_nSrcInstruction = 0x38;
}

public static class CPulse_Chunk {
    public const ulong m_Instructions = 0x0;
    public const ulong m_Registers = 0x10;
    public const ulong m_InstructionEditorIDs = 0x20;
}

public static class CPulse_InvokeBinding {
    public const ulong m_RegisterMap = 0x0;
    public const ulong m_FuncName = 0x20;
    public const ulong m_nCellIndex = 0x28;
    public const ulong m_InstanceType = 0x30;
    public const ulong m_nSrcChunk = 0x40;
    public const ulong m_nSrcInstruction = 0x44;
}

public static class CPulse_OutflowConnection {
    public const ulong m_SourceOutflowName = 0x0;
    public const ulong m_nDestChunk = 0x8;
    public const ulong m_nInstruction = 0xc;
}

public static class CPulse_OutputConnection {
    public const ulong m_SourceOutput = 0x0;
    public const ulong m_TargetEntity = 0x8;
    public const ulong m_TargetInput = 0x10;
    public const ulong m_Param = 0x18;
}

public static class CPulse_PublicOutput {
    public const ulong m_Name = 0x0;
    public const ulong m_Description = 0x8;
    public const ulong m_ParamType = 0x10;
}

public static class CPulse_RegisterInfo {
    public const ulong m_nReg = 0x0;
    public const ulong m_Type = 0x8;
    public const ulong m_OriginName = 0x18;
    public const ulong m_nWrittenByInstruction = 0x50;
    public const ulong m_nLastReadByInstruction = 0x54;
}

public static class CPulse_Variable {
    public const ulong m_Name = 0x0;
    public const ulong m_Description = 0x8;
    public const ulong m_Type = 0x10;
    public const ulong m_DefaultValue = 0x20;
    public const ulong m_bIsPublic = 0x32;
}

public static class CTestDomainDerived_Cursor {
    public const ulong m_nCursorValueA = 0x188;
    public const ulong m_nCursorValueB = 0x18c;
}

public static class FakeEntity_t {
    public const ulong m_nHandle = 0x0;
    public const ulong m_Name = 0x8;
    public const ulong m_Class = 0x10;
    public const ulong m_bDestroyed = 0x18;
    public const ulong m_pAssociatedGraphInstance = 0x20;
    public const ulong m_bFuncWasCalled = 0x28;
    public const ulong m_fValue = 0x2c;
}

public static class PGDInstruction_t {
    public const ulong m_nCode = 0x0;
    public const ulong m_nVar = 0x4;
    public const ulong m_nReg0 = 0x8;
    public const ulong m_nReg1 = 0xa;
    public const ulong m_nReg2 = 0xc;
    public const ulong m_nInvokeBindingIndex = 0x10;
    public const ulong m_nChunk = 0x14;
    public const ulong m_nDestInstruction = 0x18;
    public const ulong m_nCallInfoIndex = 0x1c;
    public const ulong m_Arg0Name = 0x20;
    public const ulong m_Arg1Name = 0x28;
    public const ulong m_bLiteralBool = 0x30;
    public const ulong m_nLiteralInt = 0x34;
    public const ulong m_flLiteralFloat = 0x38;
    public const ulong m_LiteralString = 0x40;
    public const ulong m_vLiteralVec3 = 0x50;
}

public static class PulseDocNodeID_t {
    public const ulong m_Value = 0x0;
}

public static class PulseRegisterMap_t {
    public const ulong m_Inparams = 0x0;
    public const ulong m_Outparams = 0x10;
}

public static class PulseRuntimeCallInfoIndex_t {
    public const ulong m_Value = 0x0;
}

public static class PulseRuntimeCellIndex_t {
    public const ulong m_Value = 0x0;
}

public static class PulseRuntimeChunkIndex_t {
    public const ulong m_Value = 0x0;
}

public static class PulseRuntimeEntrypointIndex_t {
    public const ulong m_Value = 0x0;
}

public static class PulseRuntimeInvokeIndex_t {
    public const ulong m_Value = 0x0;
}

public static class PulseRuntimeOutputIndex_t {
    public const ulong m_Value = 0x0;
}

public static class PulseRuntimeRegisterIndex_t {
    public const ulong m_Value = 0x0;
}

public static class PulseRuntimeStateOffset_t {
    public const ulong m_Value = 0x0;
}

public static class PulseRuntimeVarIndex_t {
    public const ulong m_Value = 0x0;
}

public static class PulseTestEHandle_t {
    public const ulong m_Value = 0x0;
}