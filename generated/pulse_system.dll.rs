#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulseCell_Base {
    pub const m_nEditorNodeID: usize = 0x8;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulseCell_Inflow_BaseEntrypoint {
    pub const m_EntryChunk: usize = 0x48;
    pub const m_RegisterMap: usize = 0x50;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulseCell_Inflow_EntOutputHandler {
    pub const m_SourceEntity: usize = 0x70;
    pub const m_SourceOutput: usize = 0x78;
    pub const m_TargetInput: usize = 0x80;
    pub const m_ExpectedParamType: usize = 0x88;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulseCell_Inflow_EventHandler {
    pub const m_EventName: usize = 0x70;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulseCell_Inflow_GraphHook {
    pub const m_HookName: usize = 0x70;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulseCell_Inflow_Method {
    pub const m_MethodName: usize = 0x70;
    pub const m_Description: usize = 0x78;
    pub const m_bIsPublic: usize = 0x80;
    pub const m_ReturnType: usize = 0x88;
    pub const m_Args: usize = 0x98;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulseCell_Inflow_Wait {
    pub const m_WakeResume: usize = 0x48;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulseCell_Inflow_Yield {
    pub const m_UnyieldResume: usize = 0x48;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulseCell_Outflow_CycleOrdered {
    pub const m_Outputs: usize = 0x48;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulseCell_Outflow_CycleOrdered_InstanceState_t {
    pub const m_nNextIndex: usize = 0x0;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulseCell_Outflow_CycleRandom {
    pub const m_Outputs: usize = 0x48;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulseCell_Outflow_CycleShuffled {
    pub const m_Outputs: usize = 0x48;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulseCell_Outflow_CycleShuffled_InstanceState_t {
    pub const m_Shuffle: usize = 0x0;
    pub const m_nNextShuffle: usize = 0x20;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulseCell_Outflow_IntSwitch {
    pub const m_DefaultCaseOutflow: usize = 0x48;
    pub const m_CaseOutflows: usize = 0x58;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulseCell_Outflow_SimultaneousParallel {
    pub const m_Outputs: usize = 0x48;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulseCell_Outflow_StringSwitch {
    pub const m_DefaultCaseOutflow: usize = 0x48;
    pub const m_CaseOutflows: usize = 0x58;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulseCell_Outflow_TestExplicitYesNo {
    pub const m_Yes: usize = 0x48;
    pub const m_No: usize = 0x58;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulseCell_Outflow_TestRandomYesNo {
    pub const m_Yes: usize = 0x48;
    pub const m_No: usize = 0x58;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulseCell_Step_CallExternalMethod {
    pub const m_MethodName: usize = 0x48;
    pub const m_ExpectedArgs: usize = 0x50;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulseCell_Step_PublicOutput {
    pub const m_OutputIndex: usize = 0x48;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulseCell_Step_TestDomainEntFire {
    pub const m_Input: usize = 0x48;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulseGraphDef {
    pub const m_DomainIdentifier: usize = 0x8;
    pub const m_ParentMapName: usize = 0x10;
    pub const m_Chunks: usize = 0x18;
    pub const m_Cells: usize = 0x30;
    pub const m_Vars: usize = 0x48;
    pub const m_PublicOutputs: usize = 0x60;
    pub const m_InvokeBindings: usize = 0x78;
    pub const m_CallInfos: usize = 0x90;
    pub const m_OutputConnections: usize = 0xa8;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulseGraphInstance_TestDomain {
    pub const m_bIsRunningUnitTests: usize = 0xd0;
    pub const m_bExplicitTimeStepping: usize = 0xd1;
    pub const m_bExpectingToDestroyWithYieldedCursors: usize = 0xd2;
    pub const m_nNextValidateIndex: usize = 0xd4;
    pub const m_Tracepoints: usize = 0xd8;
    pub const m_bTestYesOrNoPath: usize = 0xf0;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulseGraphInstance_TestDomain_Derived {
    pub const m_nInstanceValueX: usize = 0xf8;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulseRuntimeMethodArg {
    pub const m_Name: usize = 0x0;
    pub const m_Description: usize = 0x38;
    pub const m_Type: usize = 0x40;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulseTurtleGraphicsCursor {
    pub const m_Color: usize = 0x188;
    pub const m_vPos: usize = 0x18c;
    pub const m_flHeadingDeg: usize = 0x194;
    pub const m_bPenUp: usize = 0x198;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulse_CallInfo {
    pub const m_PortName: usize = 0x0;
    pub const m_nEditorNodeID: usize = 0x8;
    pub const m_RegisterMap: usize = 0x10;
    pub const m_CallMethodID: usize = 0x30;
    pub const m_nSrcChunk: usize = 0x34;
    pub const m_nSrcInstruction: usize = 0x38;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulse_Chunk {
    pub const m_Instructions: usize = 0x0;
    pub const m_Registers: usize = 0x10;
    pub const m_InstructionEditorIDs: usize = 0x20;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulse_InvokeBinding {
    pub const m_RegisterMap: usize = 0x0;
    pub const m_FuncName: usize = 0x20;
    pub const m_nCellIndex: usize = 0x28;
    pub const m_InstanceType: usize = 0x30;
    pub const m_nSrcChunk: usize = 0x40;
    pub const m_nSrcInstruction: usize = 0x44;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulse_OutflowConnection {
    pub const m_SourceOutflowName: usize = 0x0;
    pub const m_nDestChunk: usize = 0x8;
    pub const m_nInstruction: usize = 0xc;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulse_OutputConnection {
    pub const m_SourceOutput: usize = 0x0;
    pub const m_TargetEntity: usize = 0x8;
    pub const m_TargetInput: usize = 0x10;
    pub const m_Param: usize = 0x18;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulse_PublicOutput {
    pub const m_Name: usize = 0x0;
    pub const m_Description: usize = 0x8;
    pub const m_ParamType: usize = 0x10;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulse_RegisterInfo {
    pub const m_nReg: usize = 0x0;
    pub const m_Type: usize = 0x8;
    pub const m_OriginName: usize = 0x18;
    pub const m_nWrittenByInstruction: usize = 0x50;
    pub const m_nLastReadByInstruction: usize = 0x54;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CPulse_Variable {
    pub const m_Name: usize = 0x0;
    pub const m_Description: usize = 0x8;
    pub const m_Type: usize = 0x10;
    pub const m_DefaultValue: usize = 0x20;
    pub const m_bIsPublic: usize = 0x32;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CTestDomainDerived_Cursor {
    pub const m_nCursorValueA: usize = 0x188;
    pub const m_nCursorValueB: usize = 0x18c;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod FakeEntity_t {
    pub const m_nHandle: usize = 0x0;
    pub const m_Name: usize = 0x8;
    pub const m_Class: usize = 0x10;
    pub const m_bDestroyed: usize = 0x18;
    pub const m_pAssociatedGraphInstance: usize = 0x20;
    pub const m_bFuncWasCalled: usize = 0x28;
    pub const m_fValue: usize = 0x2c;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod PGDInstruction_t {
    pub const m_nCode: usize = 0x0;
    pub const m_nVar: usize = 0x4;
    pub const m_nReg0: usize = 0x8;
    pub const m_nReg1: usize = 0xa;
    pub const m_nReg2: usize = 0xc;
    pub const m_nInvokeBindingIndex: usize = 0x10;
    pub const m_nChunk: usize = 0x14;
    pub const m_nDestInstruction: usize = 0x18;
    pub const m_nCallInfoIndex: usize = 0x1c;
    pub const m_Arg0Name: usize = 0x20;
    pub const m_Arg1Name: usize = 0x28;
    pub const m_bLiteralBool: usize = 0x30;
    pub const m_nLiteralInt: usize = 0x34;
    pub const m_flLiteralFloat: usize = 0x38;
    pub const m_LiteralString: usize = 0x40;
    pub const m_vLiteralVec3: usize = 0x50;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod PulseDocNodeID_t {
    pub const m_Value: usize = 0x0;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod PulseRegisterMap_t {
    pub const m_Inparams: usize = 0x0;
    pub const m_Outparams: usize = 0x10;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod PulseRuntimeCallInfoIndex_t {
    pub const m_Value: usize = 0x0;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod PulseRuntimeCellIndex_t {
    pub const m_Value: usize = 0x0;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod PulseRuntimeChunkIndex_t {
    pub const m_Value: usize = 0x0;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod PulseRuntimeEntrypointIndex_t {
    pub const m_Value: usize = 0x0;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod PulseRuntimeInvokeIndex_t {
    pub const m_Value: usize = 0x0;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod PulseRuntimeOutputIndex_t {
    pub const m_Value: usize = 0x0;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod PulseRuntimeRegisterIndex_t {
    pub const m_Value: usize = 0x0;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod PulseRuntimeStateOffset_t {
    pub const m_Value: usize = 0x0;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod PulseRuntimeVarIndex_t {
    pub const m_Value: usize = 0x0;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod PulseTestEHandle_t {
    pub const m_Value: usize = 0x0;
}