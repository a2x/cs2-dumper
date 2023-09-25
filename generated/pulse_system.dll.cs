public static class CPulseCell_Base {
    public const nint m_nEditorNodeID = 0x8;
}

public static class CPulseCell_Inflow_BaseEntrypoint {
    public const nint m_EntryChunk = 0x48;
    public const nint m_RegisterMap = 0x50;
}

public static class CPulseCell_Inflow_EntOutputHandler {
    public const nint m_SourceEntity = 0x70;
    public const nint m_SourceOutput = 0x78;
    public const nint m_TargetInput = 0x80;
    public const nint m_ExpectedParamType = 0x88;
}

public static class CPulseCell_Inflow_EventHandler {
    public const nint m_EventName = 0x70;
}

public static class CPulseCell_Inflow_GraphHook {
    public const nint m_HookName = 0x70;
}

public static class CPulseCell_Inflow_Method {
    public const nint m_MethodName = 0x70;
    public const nint m_Description = 0x78;
    public const nint m_bIsPublic = 0x80;
    public const nint m_ReturnType = 0x88;
    public const nint m_Args = 0x98;
}

public static class CPulseCell_Inflow_Wait {
    public const nint m_WakeResume = 0x48;
}

public static class CPulseCell_Inflow_Yield {
    public const nint m_UnyieldResume = 0x48;
}

public static class CPulseCell_Outflow_CycleOrdered {
    public const nint m_Outputs = 0x48;
}

public static class CPulseCell_Outflow_CycleOrdered_InstanceState_t {
    public const nint m_nNextIndex = 0x0;
}

public static class CPulseCell_Outflow_CycleRandom {
    public const nint m_Outputs = 0x48;
}

public static class CPulseCell_Outflow_CycleShuffled {
    public const nint m_Outputs = 0x48;
}

public static class CPulseCell_Outflow_CycleShuffled_InstanceState_t {
    public const nint m_Shuffle = 0x0;
    public const nint m_nNextShuffle = 0x20;
}

public static class CPulseCell_Outflow_IntSwitch {
    public const nint m_DefaultCaseOutflow = 0x48;
    public const nint m_CaseOutflows = 0x58;
}

public static class CPulseCell_Outflow_SimultaneousParallel {
    public const nint m_Outputs = 0x48;
}

public static class CPulseCell_Outflow_StringSwitch {
    public const nint m_DefaultCaseOutflow = 0x48;
    public const nint m_CaseOutflows = 0x58;
}

public static class CPulseCell_Outflow_TestExplicitYesNo {
    public const nint m_Yes = 0x48;
    public const nint m_No = 0x58;
}

public static class CPulseCell_Outflow_TestRandomYesNo {
    public const nint m_Yes = 0x48;
    public const nint m_No = 0x58;
}

public static class CPulseCell_Step_CallExternalMethod {
    public const nint m_MethodName = 0x48;
    public const nint m_ExpectedArgs = 0x50;
}

public static class CPulseCell_Step_PublicOutput {
    public const nint m_OutputIndex = 0x48;
}

public static class CPulseCell_Step_TestDomainEntFire {
    public const nint m_Input = 0x48;
}

public static class CPulseGraphDef {
    public const nint m_DomainIdentifier = 0x8;
    public const nint m_ParentMapName = 0x10;
    public const nint m_Chunks = 0x18;
    public const nint m_Cells = 0x30;
    public const nint m_Vars = 0x48;
    public const nint m_PublicOutputs = 0x60;
    public const nint m_InvokeBindings = 0x78;
    public const nint m_CallInfos = 0x90;
    public const nint m_OutputConnections = 0xA8;
}

public static class CPulseGraphInstance_TestDomain {
    public const nint m_bIsRunningUnitTests = 0xD0;
    public const nint m_bExplicitTimeStepping = 0xD1;
    public const nint m_bExpectingToDestroyWithYieldedCursors = 0xD2;
    public const nint m_nNextValidateIndex = 0xD4;
    public const nint m_Tracepoints = 0xD8;
    public const nint m_bTestYesOrNoPath = 0xF0;
}

public static class CPulseGraphInstance_TestDomain_Derived {
    public const nint m_nInstanceValueX = 0xF8;
}

public static class CPulseRuntimeMethodArg {
    public const nint m_Name = 0x0;
    public const nint m_Description = 0x38;
    public const nint m_Type = 0x40;
}

public static class CPulseTurtleGraphicsCursor {
    public const nint m_Color = 0x188;
    public const nint m_vPos = 0x18C;
    public const nint m_flHeadingDeg = 0x194;
    public const nint m_bPenUp = 0x198;
}

public static class CPulse_CallInfo {
    public const nint m_PortName = 0x0;
    public const nint m_nEditorNodeID = 0x8;
    public const nint m_RegisterMap = 0x10;
    public const nint m_CallMethodID = 0x30;
    public const nint m_nSrcChunk = 0x34;
    public const nint m_nSrcInstruction = 0x38;
}

public static class CPulse_Chunk {
    public const nint m_Instructions = 0x0;
    public const nint m_Registers = 0x10;
    public const nint m_InstructionEditorIDs = 0x20;
}

public static class CPulse_InvokeBinding {
    public const nint m_RegisterMap = 0x0;
    public const nint m_FuncName = 0x20;
    public const nint m_nCellIndex = 0x28;
    public const nint m_InstanceType = 0x30;
    public const nint m_nSrcChunk = 0x40;
    public const nint m_nSrcInstruction = 0x44;
}

public static class CPulse_OutflowConnection {
    public const nint m_SourceOutflowName = 0x0;
    public const nint m_nDestChunk = 0x8;
    public const nint m_nInstruction = 0xC;
}

public static class CPulse_OutputConnection {
    public const nint m_SourceOutput = 0x0;
    public const nint m_TargetEntity = 0x8;
    public const nint m_TargetInput = 0x10;
    public const nint m_Param = 0x18;
}

public static class CPulse_PublicOutput {
    public const nint m_Name = 0x0;
    public const nint m_Description = 0x8;
    public const nint m_ParamType = 0x10;
}

public static class CPulse_RegisterInfo {
    public const nint m_nReg = 0x0;
    public const nint m_Type = 0x8;
    public const nint m_OriginName = 0x18;
    public const nint m_nWrittenByInstruction = 0x50;
    public const nint m_nLastReadByInstruction = 0x54;
}

public static class CPulse_Variable {
    public const nint m_Name = 0x0;
    public const nint m_Description = 0x8;
    public const nint m_Type = 0x10;
    public const nint m_DefaultValue = 0x20;
    public const nint m_bIsPublic = 0x32;
}

public static class CTestDomainDerived_Cursor {
    public const nint m_nCursorValueA = 0x188;
    public const nint m_nCursorValueB = 0x18C;
}

public static class FakeEntity_t {
    public const nint m_nHandle = 0x0;
    public const nint m_Name = 0x8;
    public const nint m_Class = 0x10;
    public const nint m_bDestroyed = 0x18;
    public const nint m_pAssociatedGraphInstance = 0x20;
    public const nint m_bFuncWasCalled = 0x28;
    public const nint m_fValue = 0x2C;
}

public static class PGDInstruction_t {
    public const nint m_nCode = 0x0;
    public const nint m_nVar = 0x4;
    public const nint m_nReg0 = 0x8;
    public const nint m_nReg1 = 0xA;
    public const nint m_nReg2 = 0xC;
    public const nint m_nInvokeBindingIndex = 0x10;
    public const nint m_nChunk = 0x14;
    public const nint m_nDestInstruction = 0x18;
    public const nint m_nCallInfoIndex = 0x1C;
    public const nint m_Arg0Name = 0x20;
    public const nint m_Arg1Name = 0x28;
    public const nint m_bLiteralBool = 0x30;
    public const nint m_nLiteralInt = 0x34;
    public const nint m_flLiteralFloat = 0x38;
    public const nint m_LiteralString = 0x40;
    public const nint m_vLiteralVec3 = 0x50;
}

public static class PulseDocNodeID_t {
    public const nint m_Value = 0x0;
}

public static class PulseRegisterMap_t {
    public const nint m_Inparams = 0x0;
    public const nint m_Outparams = 0x10;
}

public static class PulseRuntimeCallInfoIndex_t {
    public const nint m_Value = 0x0;
}

public static class PulseRuntimeCellIndex_t {
    public const nint m_Value = 0x0;
}

public static class PulseRuntimeChunkIndex_t {
    public const nint m_Value = 0x0;
}

public static class PulseRuntimeEntrypointIndex_t {
    public const nint m_Value = 0x0;
}

public static class PulseRuntimeInvokeIndex_t {
    public const nint m_Value = 0x0;
}

public static class PulseRuntimeOutputIndex_t {
    public const nint m_Value = 0x0;
}

public static class PulseRuntimeRegisterIndex_t {
    public const nint m_Value = 0x0;
}

public static class PulseRuntimeStateOffset_t {
    public const nint m_Value = 0x0;
}

public static class PulseRuntimeVarIndex_t {
    public const nint m_Value = 0x0;
}

public static class PulseTestEHandle_t {
    public const nint m_Value = 0x0;
}