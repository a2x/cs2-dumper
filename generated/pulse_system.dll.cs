/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 23 Mar 2024 05:02:03 +0000
 */

public static class CBasePulseGraphInstance {
}

public static class CPulseCell_Base {
    public const nint m_nEditorNodeID = 0x8; // PulseDocNodeID_t
}

public static class CPulseCell_BaseFlow { // CPulseCell_Base
}

public static class CPulseCell_BaseValue { // CPulseCell_Base
}

public static class CPulseCell_BaseYieldingInflow { // CPulseCell_BaseFlow
}

public static class CPulseCell_CursorQueue { // CPulseCell_WaitForCursorsWithTagBase
    public const nint m_nCursorsAllowedToRunParallel = 0x60; // int32_t
}

public static class CPulseCell_Inflow_BaseEntrypoint { // CPulseCell_BaseFlow
    public const nint m_EntryChunk = 0x48; // PulseRuntimeChunkIndex_t
    public const nint m_RegisterMap = 0x50; // PulseRegisterMap_t
}

public static class CPulseCell_Inflow_EntOutputHandler { // CPulseCell_Inflow_BaseEntrypoint
    public const nint m_SourceEntity = 0x70; // CUtlSymbolLarge
    public const nint m_SourceOutput = 0x78; // CUtlSymbolLarge
    public const nint m_TargetInput = 0x80; // CUtlSymbolLarge
    public const nint m_ExpectedParamType = 0x88; // CPulseValueFullType
}

public static class CPulseCell_Inflow_EventHandler { // CPulseCell_Inflow_BaseEntrypoint
    public const nint m_EventName = 0x70; // CUtlSymbolLarge
}

public static class CPulseCell_Inflow_GraphHook { // CPulseCell_Inflow_BaseEntrypoint
    public const nint m_HookName = 0x70; // CUtlSymbolLarge
}

public static class CPulseCell_Inflow_Method { // CPulseCell_Inflow_BaseEntrypoint
    public const nint m_MethodName = 0x70; // CUtlSymbolLarge
    public const nint m_Description = 0x78; // CUtlString
    public const nint m_bIsPublic = 0x80; // bool
    public const nint m_ReturnType = 0x88; // CPulseValueFullType
    public const nint m_Args = 0x98; // CUtlVector<CPulseRuntimeMethodArg>
}

public static class CPulseCell_Inflow_Wait { // CPulseCell_BaseYieldingInflow
    public const nint m_WakeResume = 0x48; // CPulse_ResumePoint
}

public static class CPulseCell_Inflow_Yield { // CPulseCell_BaseYieldingInflow
    public const nint m_UnyieldResume = 0x48; // CPulse_ResumePoint
}

public static class CPulseCell_Outflow_CycleOrdered { // CPulseCell_BaseFlow
    public const nint m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
}

public static class CPulseCell_Outflow_CycleOrdered_InstanceState_t {
    public const nint m_nNextIndex = 0x0; // int32_t
}

public static class CPulseCell_Outflow_CycleRandom { // CPulseCell_BaseFlow
    public const nint m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
}

public static class CPulseCell_Outflow_CycleShuffled { // CPulseCell_BaseFlow
    public const nint m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
}

public static class CPulseCell_Outflow_CycleShuffled_InstanceState_t {
    public const nint m_Shuffle = 0x0; // CUtlVectorFixedGrowable<uint8_t>
    public const nint m_nNextShuffle = 0x20; // int32_t
}

public static class CPulseCell_Outflow_IntSwitch { // CPulseCell_BaseFlow
    public const nint m_DefaultCaseOutflow = 0x48; // CPulse_OutflowConnection
    public const nint m_CaseOutflows = 0x58; // CUtlVector<CPulse_OutflowConnection>
}

public static class CPulseCell_Outflow_StringSwitch { // CPulseCell_BaseFlow
    public const nint m_DefaultCaseOutflow = 0x48; // CPulse_OutflowConnection
    public const nint m_CaseOutflows = 0x58; // CUtlVector<CPulse_OutflowConnection>
}

public static class CPulseCell_Outflow_TestExplicitYesNo { // CPulseCell_BaseFlow
    public const nint m_Yes = 0x48; // CPulse_OutflowConnection
    public const nint m_No = 0x58; // CPulse_OutflowConnection
}

public static class CPulseCell_Outflow_TestRandomYesNo { // CPulseCell_BaseFlow
    public const nint m_Yes = 0x48; // CPulse_OutflowConnection
    public const nint m_No = 0x58; // CPulse_OutflowConnection
}

public static class CPulseCell_Step_CallExternalMethod { // CPulseCell_BaseYieldingInflow
    public const nint m_MethodName = 0x48; // CUtlSymbolLarge
    public const nint m_ExpectedArgs = 0x50; // CUtlVector<CPulseRuntimeMethodArg>
    public const nint m_nAsyncCallMode = 0x68; // PulseMethodCallMode_t
    public const nint m_OnFinished = 0x70; // CPulse_ResumePoint
}

public static class CPulseCell_Step_DebugLog { // CPulseCell_BaseFlow
}

public static class CPulseCell_Step_PublicOutput { // CPulseCell_BaseFlow
    public const nint m_OutputIndex = 0x48; // PulseRuntimeOutputIndex_t
}

public static class CPulseCell_Step_TestDomainCreateFakeEntity { // CPulseCell_BaseFlow
}

public static class CPulseCell_Step_TestDomainDestroyFakeEntity { // CPulseCell_BaseFlow
}

public static class CPulseCell_Step_TestDomainEntFire { // CPulseCell_BaseFlow
    public const nint m_Input = 0x48; // CUtlString
}

public static class CPulseCell_Step_TestDomainTracepoint { // CPulseCell_BaseFlow
}

public static class CPulseCell_TestWaitWithCursorState { // CPulseCell_BaseYieldingInflow
    public const nint m_WakeResume = 0x48; // CPulse_ResumePoint
    public const nint m_WakeCancel = 0x58; // CPulse_ResumePoint
    public const nint m_WakeFail = 0x68; // CPulse_ResumePoint
}

public static class CPulseCell_TestWaitWithCursorState_CursorState_t {
    public const nint flWaitValue = 0x0; // float
    public const nint bFailOnCancel = 0x4; // bool
}

public static class CPulseCell_Test_MultiInflow_NoDefault { // CPulseCell_BaseFlow
}

public static class CPulseCell_Test_MultiInflow_WithDefault { // CPulseCell_BaseFlow
}

public static class CPulseCell_Test_NoInflow { // CPulseCell_BaseFlow
}

public static class CPulseCell_Timeline { // CPulseCell_BaseYieldingInflow
    public const nint m_TimelineEvents = 0x48; // CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
    public const nint m_bWaitForChildOutflows = 0x60; // bool
    public const nint m_OnFinished = 0x68; // CPulse_ResumePoint
    public const nint m_OnCanceled = 0x78; // CPulse_ResumePoint
}

public static class CPulseCell_Timeline_TimelineEvent_t {
    public const nint m_flTimeFromPrevious = 0x0; // float
    public const nint m_bPauseForPreviousEvents = 0x4; // bool
    public const nint m_bCallModeSync = 0x5; // bool
    public const nint m_EventOutflow = 0x8; // CPulse_OutflowConnection
}

public static class CPulseCell_Val_TestDomainFindEntityByName { // CPulseCell_BaseValue
}

public static class CPulseCell_Val_TestDomainGetEntityName { // CPulseCell_BaseValue
}

public static class CPulseCell_Value_RandomInt { // CPulseCell_BaseValue
}

public static class CPulseCell_Value_TestValue50 { // CPulseCell_BaseValue
}

public static class CPulseCell_WaitForCursorsWithTag { // CPulseCell_WaitForCursorsWithTagBase
    public const nint m_bTagSelfWhenComplete = 0x60; // bool
    public const nint m_nDesiredKillPriority = 0x64; // PulseCursorCancelPriority_t
}

public static class CPulseCell_WaitForCursorsWithTagBase { // CPulseCell_BaseYieldingInflow
    public const nint m_nCursorsAllowedToWait = 0x48; // int32_t
    public const nint m_WaitComplete = 0x50; // CPulse_ResumePoint
}

public static class CPulseCell_WaitForCursorsWithTagBase_CursorState_t {
    public const nint m_TagName = 0x0; // CUtlSymbolLarge
}

public static class CPulseCursorFuncs {
}

public static class CPulseExecCursor {
}

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

public static class CPulseGraphInstance_TestDomain { // CBasePulseGraphInstance
    public const nint m_bIsRunningUnitTests = 0xD8; // bool
    public const nint m_bExplicitTimeStepping = 0xD9; // bool
    public const nint m_bExpectingToDestroyWithYieldedCursors = 0xDA; // bool
    public const nint m_nNextValidateIndex = 0xDC; // int32_t
    public const nint m_Tracepoints = 0xE0; // CUtlVector<CUtlString>
    public const nint m_bTestYesOrNoPath = 0xF8; // bool
}

public static class CPulseGraphInstance_TestDomain_Derived { // CPulseGraphInstance_TestDomain
    public const nint m_nInstanceValueX = 0x100; // int32_t
}

public static class CPulseGraphInstance_TurtleGraphics { // CBasePulseGraphInstance
}

public static class CPulseMathlib {
}

public static class CPulseRuntimeMethodArg {
    public const nint m_Name = 0x0; // CKV3MemberNameWithStorage
    public const nint m_Description = 0x38; // CUtlString
    public const nint m_Type = 0x40; // CPulseValueFullType
}

public static class CPulseTestFuncs_DerivedDomain {
}

public static class CPulseTestFuncs_LibraryA {
}

public static class CPulseTestScriptLib {
}

public static class CPulseTurtleGraphicsCursor { // CPulseExecCursor
    public const nint m_Color = 0x168; // Color
    public const nint m_vPos = 0x16C; // Vector2D
    public const nint m_flHeadingDeg = 0x174; // float
    public const nint m_bPenUp = 0x178; // bool
}

public static class CPulse_CallInfo {
    public const nint m_PortName = 0x0; // CUtlSymbolLarge
    public const nint m_nEditorNodeID = 0x8; // PulseDocNodeID_t
    public const nint m_RegisterMap = 0x10; // PulseRegisterMap_t
    public const nint m_CallMethodID = 0x30; // PulseDocNodeID_t
    public const nint m_nSrcChunk = 0x34; // PulseRuntimeChunkIndex_t
    public const nint m_nSrcInstruction = 0x38; // int32_t
}

public static class CPulse_Chunk {
    public const nint m_Instructions = 0x0; // CUtlLeanVector<PGDInstruction_t>
    public const nint m_Registers = 0x10; // CUtlLeanVector<CPulse_RegisterInfo>
    public const nint m_InstructionEditorIDs = 0x20; // CUtlLeanVector<PulseDocNodeID_t>
}

public static class CPulse_Constant {
    public const nint m_Type = 0x0; // CPulseValueFullType
    public const nint m_Value = 0x10; // KeyValues3
}

public static class CPulse_InvokeBinding {
    public const nint m_RegisterMap = 0x0; // PulseRegisterMap_t
    public const nint m_FuncName = 0x20; // CUtlSymbolLarge
    public const nint m_nCellIndex = 0x28; // PulseRuntimeCellIndex_t
    public const nint m_nSrcChunk = 0x2C; // PulseRuntimeChunkIndex_t
    public const nint m_nSrcInstruction = 0x30; // int32_t
}

public static class CPulse_OutflowConnection {
    public const nint m_SourceOutflowName = 0x0; // CUtlSymbolLarge
    public const nint m_nDestChunk = 0x8; // PulseRuntimeChunkIndex_t
    public const nint m_nInstruction = 0xC; // int32_t
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
    public const nint m_nWrittenByInstruction = 0x50; // int32_t
    public const nint m_nLastReadByInstruction = 0x54; // int32_t
}

public static class CPulse_ResumePoint { // CPulse_OutflowConnection
}

public static class CPulse_Variable {
    public const nint m_Name = 0x0; // CUtlSymbolLarge
    public const nint m_Description = 0x8; // CUtlString
    public const nint m_Type = 0x10; // CPulseValueFullType
    public const nint m_DefaultValue = 0x20; // KeyValues3
    public const nint m_bIsPublic = 0x32; // bool
}

public static class CTestDomainDerived_Cursor { // CPulseExecCursor
    public const nint m_nCursorValueA = 0x168; // int32_t
    public const nint m_nCursorValueB = 0x16C; // int32_t
}

public static class FakeEntity_t {
    public const nint m_nHandle = 0x0; // PulseTestEHandle_t
    public const nint m_Name = 0x8; // CUtlString
    public const nint m_Class = 0x10; // CUtlString
    public const nint m_bDestroyed = 0x18; // bool
    public const nint m_pAssociatedGraphInstance = 0x20; // CPulseGraphInstance_TestDomain*
    public const nint m_bFuncWasCalled = 0x28; // bool
    public const nint m_fValue = 0x2C; // float
}

public static class FakeEntity_tAPI {
}

public static class PGDInstruction_t {
    public const nint m_nCode = 0x0; // PulseInstructionCode_t
    public const nint m_nVar = 0x4; // PulseRuntimeVarIndex_t
    public const nint m_nReg0 = 0x8; // PulseRuntimeRegisterIndex_t
    public const nint m_nReg1 = 0xA; // PulseRuntimeRegisterIndex_t
    public const nint m_nReg2 = 0xC; // PulseRuntimeRegisterIndex_t
    public const nint m_nInvokeBindingIndex = 0x10; // PulseRuntimeInvokeIndex_t
    public const nint m_nChunk = 0x14; // PulseRuntimeChunkIndex_t
    public const nint m_nDestInstruction = 0x18; // int32_t
    public const nint m_nCallInfoIndex = 0x1C; // PulseRuntimeCallInfoIndex_t
    public const nint m_nConstIdx = 0x20; // PulseRuntimeConstantIndex_t
    public const nint m_DomainValue = 0x28; // CBufferString
}

public static class PulseCursorID_t {
    public const nint m_Value = 0x0; // int32_t
}

public static class PulseCursorYieldToken_t {
    public const nint m_Value = 0x0; // int32_t
}

public static class PulseDocNodeID_t {
    public const nint m_Value = 0x0; // int32_t
}

public static class PulseGraphInstanceID_t {
    public const nint m_Value = 0x0; // uint32_t
}

public static class PulseRegisterMap_t {
    public const nint m_Inparams = 0x0; // KeyValues3
    public const nint m_Outparams = 0x10; // KeyValues3
}

public static class PulseRuntimeCallInfoIndex_t {
    public const nint m_Value = 0x0; // int32_t
}

public static class PulseRuntimeCellIndex_t {
    public const nint m_Value = 0x0; // int32_t
}

public static class PulseRuntimeChunkIndex_t {
    public const nint m_Value = 0x0; // int32_t
}

public static class PulseRuntimeConstantIndex_t {
    public const nint m_Value = 0x0; // int16_t
}

public static class PulseRuntimeEntrypointIndex_t {
    public const nint m_Value = 0x0; // int32_t
}

public static class PulseRuntimeInvokeIndex_t {
    public const nint m_Value = 0x0; // int32_t
}

public static class PulseRuntimeOutputIndex_t {
    public const nint m_Value = 0x0; // int32_t
}

public static class PulseRuntimeRegisterIndex_t {
    public const nint m_Value = 0x0; // int16_t
}

public static class PulseRuntimeStateOffset_t {
    public const nint m_Value = 0x0; // uint16_t
}

public static class PulseRuntimeVarIndex_t {
    public const nint m_Value = 0x0; // int32_t
}

public static class PulseTestEHandle_t {
    public const nint m_Value = 0x0; // uint32_t
}