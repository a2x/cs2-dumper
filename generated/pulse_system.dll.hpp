/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 23 Mar 2024 05:02:03 +0000
 */

#pragma once

#include <cstddef>

namespace CBasePulseGraphInstance {
}

namespace CPulseCell_Base {
    constexpr std::ptrdiff_t m_nEditorNodeID = 0x8; // PulseDocNodeID_t
}

namespace CPulseCell_BaseFlow { // CPulseCell_Base
}

namespace CPulseCell_BaseValue { // CPulseCell_Base
}

namespace CPulseCell_BaseYieldingInflow { // CPulseCell_BaseFlow
}

namespace CPulseCell_CursorQueue { // CPulseCell_WaitForCursorsWithTagBase
    constexpr std::ptrdiff_t m_nCursorsAllowedToRunParallel = 0x60; // int32_t
}

namespace CPulseCell_Inflow_BaseEntrypoint { // CPulseCell_BaseFlow
    constexpr std::ptrdiff_t m_EntryChunk = 0x48; // PulseRuntimeChunkIndex_t
    constexpr std::ptrdiff_t m_RegisterMap = 0x50; // PulseRegisterMap_t
}

namespace CPulseCell_Inflow_EntOutputHandler { // CPulseCell_Inflow_BaseEntrypoint
    constexpr std::ptrdiff_t m_SourceEntity = 0x70; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SourceOutput = 0x78; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_TargetInput = 0x80; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_ExpectedParamType = 0x88; // CPulseValueFullType
}

namespace CPulseCell_Inflow_EventHandler { // CPulseCell_Inflow_BaseEntrypoint
    constexpr std::ptrdiff_t m_EventName = 0x70; // CUtlSymbolLarge
}

namespace CPulseCell_Inflow_GraphHook { // CPulseCell_Inflow_BaseEntrypoint
    constexpr std::ptrdiff_t m_HookName = 0x70; // CUtlSymbolLarge
}

namespace CPulseCell_Inflow_Method { // CPulseCell_Inflow_BaseEntrypoint
    constexpr std::ptrdiff_t m_MethodName = 0x70; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_Description = 0x78; // CUtlString
    constexpr std::ptrdiff_t m_bIsPublic = 0x80; // bool
    constexpr std::ptrdiff_t m_ReturnType = 0x88; // CPulseValueFullType
    constexpr std::ptrdiff_t m_Args = 0x98; // CUtlVector<CPulseRuntimeMethodArg>
}

namespace CPulseCell_Inflow_Wait { // CPulseCell_BaseYieldingInflow
    constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
}

namespace CPulseCell_Inflow_Yield { // CPulseCell_BaseYieldingInflow
    constexpr std::ptrdiff_t m_UnyieldResume = 0x48; // CPulse_ResumePoint
}

namespace CPulseCell_Outflow_CycleOrdered { // CPulseCell_BaseFlow
    constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
}

namespace CPulseCell_Outflow_CycleOrdered_InstanceState_t {
    constexpr std::ptrdiff_t m_nNextIndex = 0x0; // int32_t
}

namespace CPulseCell_Outflow_CycleRandom { // CPulseCell_BaseFlow
    constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
}

namespace CPulseCell_Outflow_CycleShuffled { // CPulseCell_BaseFlow
    constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
}

namespace CPulseCell_Outflow_CycleShuffled_InstanceState_t {
    constexpr std::ptrdiff_t m_Shuffle = 0x0; // CUtlVectorFixedGrowable<uint8_t>
    constexpr std::ptrdiff_t m_nNextShuffle = 0x20; // int32_t
}

namespace CPulseCell_Outflow_IntSwitch { // CPulseCell_BaseFlow
    constexpr std::ptrdiff_t m_DefaultCaseOutflow = 0x48; // CPulse_OutflowConnection
    constexpr std::ptrdiff_t m_CaseOutflows = 0x58; // CUtlVector<CPulse_OutflowConnection>
}

namespace CPulseCell_Outflow_StringSwitch { // CPulseCell_BaseFlow
    constexpr std::ptrdiff_t m_DefaultCaseOutflow = 0x48; // CPulse_OutflowConnection
    constexpr std::ptrdiff_t m_CaseOutflows = 0x58; // CUtlVector<CPulse_OutflowConnection>
}

namespace CPulseCell_Outflow_TestExplicitYesNo { // CPulseCell_BaseFlow
    constexpr std::ptrdiff_t m_Yes = 0x48; // CPulse_OutflowConnection
    constexpr std::ptrdiff_t m_No = 0x58; // CPulse_OutflowConnection
}

namespace CPulseCell_Outflow_TestRandomYesNo { // CPulseCell_BaseFlow
    constexpr std::ptrdiff_t m_Yes = 0x48; // CPulse_OutflowConnection
    constexpr std::ptrdiff_t m_No = 0x58; // CPulse_OutflowConnection
}

namespace CPulseCell_Step_CallExternalMethod { // CPulseCell_BaseYieldingInflow
    constexpr std::ptrdiff_t m_MethodName = 0x48; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_ExpectedArgs = 0x50; // CUtlVector<CPulseRuntimeMethodArg>
    constexpr std::ptrdiff_t m_nAsyncCallMode = 0x68; // PulseMethodCallMode_t
    constexpr std::ptrdiff_t m_OnFinished = 0x70; // CPulse_ResumePoint
}

namespace CPulseCell_Step_DebugLog { // CPulseCell_BaseFlow
}

namespace CPulseCell_Step_PublicOutput { // CPulseCell_BaseFlow
    constexpr std::ptrdiff_t m_OutputIndex = 0x48; // PulseRuntimeOutputIndex_t
}

namespace CPulseCell_Step_TestDomainCreateFakeEntity { // CPulseCell_BaseFlow
}

namespace CPulseCell_Step_TestDomainDestroyFakeEntity { // CPulseCell_BaseFlow
}

namespace CPulseCell_Step_TestDomainEntFire { // CPulseCell_BaseFlow
    constexpr std::ptrdiff_t m_Input = 0x48; // CUtlString
}

namespace CPulseCell_Step_TestDomainTracepoint { // CPulseCell_BaseFlow
}

namespace CPulseCell_TestWaitWithCursorState { // CPulseCell_BaseYieldingInflow
    constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
    constexpr std::ptrdiff_t m_WakeCancel = 0x58; // CPulse_ResumePoint
    constexpr std::ptrdiff_t m_WakeFail = 0x68; // CPulse_ResumePoint
}

namespace CPulseCell_TestWaitWithCursorState_CursorState_t {
    constexpr std::ptrdiff_t flWaitValue = 0x0; // float
    constexpr std::ptrdiff_t bFailOnCancel = 0x4; // bool
}

namespace CPulseCell_Test_MultiInflow_NoDefault { // CPulseCell_BaseFlow
}

namespace CPulseCell_Test_MultiInflow_WithDefault { // CPulseCell_BaseFlow
}

namespace CPulseCell_Test_NoInflow { // CPulseCell_BaseFlow
}

namespace CPulseCell_Timeline { // CPulseCell_BaseYieldingInflow
    constexpr std::ptrdiff_t m_TimelineEvents = 0x48; // CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
    constexpr std::ptrdiff_t m_bWaitForChildOutflows = 0x60; // bool
    constexpr std::ptrdiff_t m_OnFinished = 0x68; // CPulse_ResumePoint
    constexpr std::ptrdiff_t m_OnCanceled = 0x78; // CPulse_ResumePoint
}

namespace CPulseCell_Timeline_TimelineEvent_t {
    constexpr std::ptrdiff_t m_flTimeFromPrevious = 0x0; // float
    constexpr std::ptrdiff_t m_bPauseForPreviousEvents = 0x4; // bool
    constexpr std::ptrdiff_t m_bCallModeSync = 0x5; // bool
    constexpr std::ptrdiff_t m_EventOutflow = 0x8; // CPulse_OutflowConnection
}

namespace CPulseCell_Val_TestDomainFindEntityByName { // CPulseCell_BaseValue
}

namespace CPulseCell_Val_TestDomainGetEntityName { // CPulseCell_BaseValue
}

namespace CPulseCell_Value_RandomInt { // CPulseCell_BaseValue
}

namespace CPulseCell_Value_TestValue50 { // CPulseCell_BaseValue
}

namespace CPulseCell_WaitForCursorsWithTag { // CPulseCell_WaitForCursorsWithTagBase
    constexpr std::ptrdiff_t m_bTagSelfWhenComplete = 0x60; // bool
    constexpr std::ptrdiff_t m_nDesiredKillPriority = 0x64; // PulseCursorCancelPriority_t
}

namespace CPulseCell_WaitForCursorsWithTagBase { // CPulseCell_BaseYieldingInflow
    constexpr std::ptrdiff_t m_nCursorsAllowedToWait = 0x48; // int32_t
    constexpr std::ptrdiff_t m_WaitComplete = 0x50; // CPulse_ResumePoint
}

namespace CPulseCell_WaitForCursorsWithTagBase_CursorState_t {
    constexpr std::ptrdiff_t m_TagName = 0x0; // CUtlSymbolLarge
}

namespace CPulseCursorFuncs {
}

namespace CPulseExecCursor {
}

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

namespace CPulseGraphInstance_TestDomain { // CBasePulseGraphInstance
    constexpr std::ptrdiff_t m_bIsRunningUnitTests = 0xD8; // bool
    constexpr std::ptrdiff_t m_bExplicitTimeStepping = 0xD9; // bool
    constexpr std::ptrdiff_t m_bExpectingToDestroyWithYieldedCursors = 0xDA; // bool
    constexpr std::ptrdiff_t m_nNextValidateIndex = 0xDC; // int32_t
    constexpr std::ptrdiff_t m_Tracepoints = 0xE0; // CUtlVector<CUtlString>
    constexpr std::ptrdiff_t m_bTestYesOrNoPath = 0xF8; // bool
}

namespace CPulseGraphInstance_TestDomain_Derived { // CPulseGraphInstance_TestDomain
    constexpr std::ptrdiff_t m_nInstanceValueX = 0x100; // int32_t
}

namespace CPulseGraphInstance_TurtleGraphics { // CBasePulseGraphInstance
}

namespace CPulseMathlib {
}

namespace CPulseRuntimeMethodArg {
    constexpr std::ptrdiff_t m_Name = 0x0; // CKV3MemberNameWithStorage
    constexpr std::ptrdiff_t m_Description = 0x38; // CUtlString
    constexpr std::ptrdiff_t m_Type = 0x40; // CPulseValueFullType
}

namespace CPulseTestFuncs_DerivedDomain {
}

namespace CPulseTestFuncs_LibraryA {
}

namespace CPulseTestScriptLib {
}

namespace CPulseTurtleGraphicsCursor { // CPulseExecCursor
    constexpr std::ptrdiff_t m_Color = 0x168; // Color
    constexpr std::ptrdiff_t m_vPos = 0x16C; // Vector2D
    constexpr std::ptrdiff_t m_flHeadingDeg = 0x174; // float
    constexpr std::ptrdiff_t m_bPenUp = 0x178; // bool
}

namespace CPulse_CallInfo {
    constexpr std::ptrdiff_t m_PortName = 0x0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nEditorNodeID = 0x8; // PulseDocNodeID_t
    constexpr std::ptrdiff_t m_RegisterMap = 0x10; // PulseRegisterMap_t
    constexpr std::ptrdiff_t m_CallMethodID = 0x30; // PulseDocNodeID_t
    constexpr std::ptrdiff_t m_nSrcChunk = 0x34; // PulseRuntimeChunkIndex_t
    constexpr std::ptrdiff_t m_nSrcInstruction = 0x38; // int32_t
}

namespace CPulse_Chunk {
    constexpr std::ptrdiff_t m_Instructions = 0x0; // CUtlLeanVector<PGDInstruction_t>
    constexpr std::ptrdiff_t m_Registers = 0x10; // CUtlLeanVector<CPulse_RegisterInfo>
    constexpr std::ptrdiff_t m_InstructionEditorIDs = 0x20; // CUtlLeanVector<PulseDocNodeID_t>
}

namespace CPulse_Constant {
    constexpr std::ptrdiff_t m_Type = 0x0; // CPulseValueFullType
    constexpr std::ptrdiff_t m_Value = 0x10; // KeyValues3
}

namespace CPulse_InvokeBinding {
    constexpr std::ptrdiff_t m_RegisterMap = 0x0; // PulseRegisterMap_t
    constexpr std::ptrdiff_t m_FuncName = 0x20; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nCellIndex = 0x28; // PulseRuntimeCellIndex_t
    constexpr std::ptrdiff_t m_nSrcChunk = 0x2C; // PulseRuntimeChunkIndex_t
    constexpr std::ptrdiff_t m_nSrcInstruction = 0x30; // int32_t
}

namespace CPulse_OutflowConnection {
    constexpr std::ptrdiff_t m_SourceOutflowName = 0x0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nDestChunk = 0x8; // PulseRuntimeChunkIndex_t
    constexpr std::ptrdiff_t m_nInstruction = 0xC; // int32_t
}

namespace CPulse_OutputConnection {
    constexpr std::ptrdiff_t m_SourceOutput = 0x0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_TargetEntity = 0x8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_TargetInput = 0x10; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_Param = 0x18; // CUtlSymbolLarge
}

namespace CPulse_PublicOutput {
    constexpr std::ptrdiff_t m_Name = 0x0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_Description = 0x8; // CUtlString
    constexpr std::ptrdiff_t m_ParamType = 0x10; // CPulseValueFullType
}

namespace CPulse_RegisterInfo {
    constexpr std::ptrdiff_t m_nReg = 0x0; // PulseRuntimeRegisterIndex_t
    constexpr std::ptrdiff_t m_Type = 0x8; // CPulseValueFullType
    constexpr std::ptrdiff_t m_OriginName = 0x18; // CKV3MemberNameWithStorage
    constexpr std::ptrdiff_t m_nWrittenByInstruction = 0x50; // int32_t
    constexpr std::ptrdiff_t m_nLastReadByInstruction = 0x54; // int32_t
}

namespace CPulse_ResumePoint { // CPulse_OutflowConnection
}

namespace CPulse_Variable {
    constexpr std::ptrdiff_t m_Name = 0x0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_Description = 0x8; // CUtlString
    constexpr std::ptrdiff_t m_Type = 0x10; // CPulseValueFullType
    constexpr std::ptrdiff_t m_DefaultValue = 0x20; // KeyValues3
    constexpr std::ptrdiff_t m_bIsPublic = 0x32; // bool
}

namespace CTestDomainDerived_Cursor { // CPulseExecCursor
    constexpr std::ptrdiff_t m_nCursorValueA = 0x168; // int32_t
    constexpr std::ptrdiff_t m_nCursorValueB = 0x16C; // int32_t
}

namespace FakeEntity_t {
    constexpr std::ptrdiff_t m_nHandle = 0x0; // PulseTestEHandle_t
    constexpr std::ptrdiff_t m_Name = 0x8; // CUtlString
    constexpr std::ptrdiff_t m_Class = 0x10; // CUtlString
    constexpr std::ptrdiff_t m_bDestroyed = 0x18; // bool
    constexpr std::ptrdiff_t m_pAssociatedGraphInstance = 0x20; // CPulseGraphInstance_TestDomain*
    constexpr std::ptrdiff_t m_bFuncWasCalled = 0x28; // bool
    constexpr std::ptrdiff_t m_fValue = 0x2C; // float
}

namespace FakeEntity_tAPI {
}

namespace PGDInstruction_t {
    constexpr std::ptrdiff_t m_nCode = 0x0; // PulseInstructionCode_t
    constexpr std::ptrdiff_t m_nVar = 0x4; // PulseRuntimeVarIndex_t
    constexpr std::ptrdiff_t m_nReg0 = 0x8; // PulseRuntimeRegisterIndex_t
    constexpr std::ptrdiff_t m_nReg1 = 0xA; // PulseRuntimeRegisterIndex_t
    constexpr std::ptrdiff_t m_nReg2 = 0xC; // PulseRuntimeRegisterIndex_t
    constexpr std::ptrdiff_t m_nInvokeBindingIndex = 0x10; // PulseRuntimeInvokeIndex_t
    constexpr std::ptrdiff_t m_nChunk = 0x14; // PulseRuntimeChunkIndex_t
    constexpr std::ptrdiff_t m_nDestInstruction = 0x18; // int32_t
    constexpr std::ptrdiff_t m_nCallInfoIndex = 0x1C; // PulseRuntimeCallInfoIndex_t
    constexpr std::ptrdiff_t m_nConstIdx = 0x20; // PulseRuntimeConstantIndex_t
    constexpr std::ptrdiff_t m_DomainValue = 0x28; // CBufferString
}

namespace PulseCursorID_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // int32_t
}

namespace PulseCursorYieldToken_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // int32_t
}

namespace PulseDocNodeID_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // int32_t
}

namespace PulseGraphInstanceID_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // uint32_t
}

namespace PulseRegisterMap_t {
    constexpr std::ptrdiff_t m_Inparams = 0x0; // KeyValues3
    constexpr std::ptrdiff_t m_Outparams = 0x10; // KeyValues3
}

namespace PulseRuntimeCallInfoIndex_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // int32_t
}

namespace PulseRuntimeCellIndex_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // int32_t
}

namespace PulseRuntimeChunkIndex_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // int32_t
}

namespace PulseRuntimeConstantIndex_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // int16_t
}

namespace PulseRuntimeEntrypointIndex_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // int32_t
}

namespace PulseRuntimeInvokeIndex_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // int32_t
}

namespace PulseRuntimeOutputIndex_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // int32_t
}

namespace PulseRuntimeRegisterIndex_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // int16_t
}

namespace PulseRuntimeStateOffset_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // uint16_t
}

namespace PulseRuntimeVarIndex_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // int32_t
}

namespace PulseTestEHandle_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // uint32_t
}