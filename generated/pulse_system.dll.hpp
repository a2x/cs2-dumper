#pragma once

#include <cstddef>

namespace CPulseCell_Base {
    constexpr std::ptrdiff_t m_nEditorNodeID = 0x8; // PulseDocNodeID_t
}

namespace CPulseCell_Inflow_BaseEntrypoint {
    constexpr std::ptrdiff_t m_EntryChunk = 0x48; // PulseRuntimeChunkIndex_t
    constexpr std::ptrdiff_t m_RegisterMap = 0x50; // PulseRegisterMap_t
}

namespace CPulseCell_Inflow_EntOutputHandler {
    constexpr std::ptrdiff_t m_SourceEntity = 0x70; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SourceOutput = 0x78; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_TargetInput = 0x80; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_ExpectedParamType = 0x88; // CPulseValueFullType
}

namespace CPulseCell_Inflow_EventHandler {
    constexpr std::ptrdiff_t m_EventName = 0x70; // CUtlSymbolLarge
}

namespace CPulseCell_Inflow_GraphHook {
    constexpr std::ptrdiff_t m_HookName = 0x70; // CUtlSymbolLarge
}

namespace CPulseCell_Inflow_Method {
    constexpr std::ptrdiff_t m_MethodName = 0x70; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_Description = 0x78; // CUtlString
    constexpr std::ptrdiff_t m_bIsPublic = 0x80; // bool
    constexpr std::ptrdiff_t m_ReturnType = 0x88; // CPulseValueFullType
    constexpr std::ptrdiff_t m_Args = 0x98; // CUtlVector< CPulseRuntimeMethodArg >
}

namespace CPulseCell_Inflow_Wait {
    constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
}

namespace CPulseCell_Inflow_Yield {
    constexpr std::ptrdiff_t m_UnyieldResume = 0x48; // CPulse_ResumePoint
}

namespace CPulseCell_Outflow_CycleOrdered {
    constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector< CPulse_OutflowConnection >
}

namespace CPulseCell_Outflow_CycleOrdered_InstanceState_t {
    constexpr std::ptrdiff_t m_nNextIndex = 0x0; // int32
}

namespace CPulseCell_Outflow_CycleRandom {
    constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector< CPulse_OutflowConnection >
}

namespace CPulseCell_Outflow_CycleShuffled {
    constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector< CPulse_OutflowConnection >
}

namespace CPulseCell_Outflow_CycleShuffled_InstanceState_t {
    constexpr std::ptrdiff_t m_Shuffle = 0x0; // CUtlVectorFixedGrowable< uint8 >
    constexpr std::ptrdiff_t m_nNextShuffle = 0x20; // int32
}

namespace CPulseCell_Outflow_IntSwitch {
    constexpr std::ptrdiff_t m_DefaultCaseOutflow = 0x48; // CPulse_OutflowConnection
    constexpr std::ptrdiff_t m_CaseOutflows = 0x58; // CUtlVector< CPulse_OutflowConnection >
}

namespace CPulseCell_Outflow_SimultaneousParallel {
    constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector< CPulse_OutflowConnection >
}

namespace CPulseCell_Outflow_StringSwitch {
    constexpr std::ptrdiff_t m_DefaultCaseOutflow = 0x48; // CPulse_OutflowConnection
    constexpr std::ptrdiff_t m_CaseOutflows = 0x58; // CUtlVector< CPulse_OutflowConnection >
}

namespace CPulseCell_Outflow_TestExplicitYesNo {
    constexpr std::ptrdiff_t m_Yes = 0x48; // CPulse_OutflowConnection
    constexpr std::ptrdiff_t m_No = 0x58; // CPulse_OutflowConnection
}

namespace CPulseCell_Outflow_TestRandomYesNo {
    constexpr std::ptrdiff_t m_Yes = 0x48; // CPulse_OutflowConnection
    constexpr std::ptrdiff_t m_No = 0x58; // CPulse_OutflowConnection
}

namespace CPulseCell_Step_CallExternalMethod {
    constexpr std::ptrdiff_t m_MethodName = 0x48; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_ExpectedArgs = 0x50; // CUtlVector< CPulseRuntimeMethodArg >
}

namespace CPulseCell_Step_PublicOutput {
    constexpr std::ptrdiff_t m_OutputIndex = 0x48; // PulseRuntimeOutputIndex_t
}

namespace CPulseCell_Step_TestDomainEntFire {
    constexpr std::ptrdiff_t m_Input = 0x48; // CUtlString
}

namespace CPulseGraphDef {
    constexpr std::ptrdiff_t m_DomainIdentifier = 0x8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_ParentMapName = 0x10; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_Chunks = 0x18; // CUtlVector< CPulse_Chunk* >
    constexpr std::ptrdiff_t m_Cells = 0x30; // CUtlVector< CPulseCell_Base* >
    constexpr std::ptrdiff_t m_Vars = 0x48; // CUtlVector< CPulse_Variable >
    constexpr std::ptrdiff_t m_PublicOutputs = 0x60; // CUtlVector< CPulse_PublicOutput >
    constexpr std::ptrdiff_t m_InvokeBindings = 0x78; // CUtlVector< CPulse_InvokeBinding* >
    constexpr std::ptrdiff_t m_CallInfos = 0x90; // CUtlVector< CPulse_CallInfo* >
    constexpr std::ptrdiff_t m_OutputConnections = 0xA8; // CUtlVector< CPulse_OutputConnection* >
}

namespace CPulseGraphInstance_TestDomain {
    constexpr std::ptrdiff_t m_bIsRunningUnitTests = 0xD0; // bool
    constexpr std::ptrdiff_t m_bExplicitTimeStepping = 0xD1; // bool
    constexpr std::ptrdiff_t m_bExpectingToDestroyWithYieldedCursors = 0xD2; // bool
    constexpr std::ptrdiff_t m_nNextValidateIndex = 0xD4; // int32
    constexpr std::ptrdiff_t m_Tracepoints = 0xD8; // CUtlVector< CUtlString >
    constexpr std::ptrdiff_t m_bTestYesOrNoPath = 0xF0; // bool
}

namespace CPulseGraphInstance_TestDomain_Derived {
    constexpr std::ptrdiff_t m_nInstanceValueX = 0xF8; // int32
}

namespace CPulseRuntimeMethodArg {
    constexpr std::ptrdiff_t m_Name = 0x0; // CKV3MemberNameWithStorage
    constexpr std::ptrdiff_t m_Description = 0x38; // CUtlString
    constexpr std::ptrdiff_t m_Type = 0x40; // CPulseValueFullType
}

namespace CPulseTurtleGraphicsCursor {
    constexpr std::ptrdiff_t m_Color = 0x188; // Color
    constexpr std::ptrdiff_t m_vPos = 0x18C; // Vector2D
    constexpr std::ptrdiff_t m_flHeadingDeg = 0x194; // float32
    constexpr std::ptrdiff_t m_bPenUp = 0x198; // bool
}

namespace CPulse_CallInfo {
    constexpr std::ptrdiff_t m_PortName = 0x0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nEditorNodeID = 0x8; // PulseDocNodeID_t
    constexpr std::ptrdiff_t m_RegisterMap = 0x10; // PulseRegisterMap_t
    constexpr std::ptrdiff_t m_CallMethodID = 0x30; // PulseDocNodeID_t
    constexpr std::ptrdiff_t m_nSrcChunk = 0x34; // PulseRuntimeChunkIndex_t
    constexpr std::ptrdiff_t m_nSrcInstruction = 0x38; // int32
}

namespace CPulse_Chunk {
    constexpr std::ptrdiff_t m_Instructions = 0x0; // CUtlLeanVector< PGDInstruction_t >
    constexpr std::ptrdiff_t m_Registers = 0x10; // CUtlLeanVector< CPulse_RegisterInfo >
    constexpr std::ptrdiff_t m_InstructionEditorIDs = 0x20; // CUtlLeanVector< PulseDocNodeID_t >
}

namespace CPulse_InvokeBinding {
    constexpr std::ptrdiff_t m_RegisterMap = 0x0; // PulseRegisterMap_t
    constexpr std::ptrdiff_t m_FuncName = 0x20; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nCellIndex = 0x28; // PulseRuntimeCellIndex_t
    constexpr std::ptrdiff_t m_InstanceType = 0x30; // CPulseValueFullType
    constexpr std::ptrdiff_t m_nSrcChunk = 0x40; // PulseRuntimeChunkIndex_t
    constexpr std::ptrdiff_t m_nSrcInstruction = 0x44; // int32
}

namespace CPulse_OutflowConnection {
    constexpr std::ptrdiff_t m_SourceOutflowName = 0x0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nDestChunk = 0x8; // PulseRuntimeChunkIndex_t
    constexpr std::ptrdiff_t m_nInstruction = 0xC; // int32
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
    constexpr std::ptrdiff_t m_nWrittenByInstruction = 0x50; // int32
    constexpr std::ptrdiff_t m_nLastReadByInstruction = 0x54; // int32
}

namespace CPulse_Variable {
    constexpr std::ptrdiff_t m_Name = 0x0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_Description = 0x8; // CUtlString
    constexpr std::ptrdiff_t m_Type = 0x10; // CPulseValueFullType
    constexpr std::ptrdiff_t m_DefaultValue = 0x20; // KeyValues3
    constexpr std::ptrdiff_t m_bIsPublic = 0x32; // bool
}

namespace CTestDomainDerived_Cursor {
    constexpr std::ptrdiff_t m_nCursorValueA = 0x188; // int32
    constexpr std::ptrdiff_t m_nCursorValueB = 0x18C; // int32
}

namespace FakeEntity_t {
    constexpr std::ptrdiff_t m_nHandle = 0x0; // PulseTestEHandle_t
    constexpr std::ptrdiff_t m_Name = 0x8; // CUtlString
    constexpr std::ptrdiff_t m_Class = 0x10; // CUtlString
    constexpr std::ptrdiff_t m_bDestroyed = 0x18; // bool
    constexpr std::ptrdiff_t m_pAssociatedGraphInstance = 0x20; // CPulseGraphInstance_TestDomain*
    constexpr std::ptrdiff_t m_bFuncWasCalled = 0x28; // bool
    constexpr std::ptrdiff_t m_fValue = 0x2C; // float32
}

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
    constexpr std::ptrdiff_t m_Arg0Name = 0x20; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_Arg1Name = 0x28; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bLiteralBool = 0x30; // bool
    constexpr std::ptrdiff_t m_nLiteralInt = 0x34; // int32
    constexpr std::ptrdiff_t m_flLiteralFloat = 0x38; // float32
    constexpr std::ptrdiff_t m_LiteralString = 0x40; // CBufferString
    constexpr std::ptrdiff_t m_vLiteralVec3 = 0x50; // Vector
}

namespace PulseDocNodeID_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // int32
}

namespace PulseRegisterMap_t {
    constexpr std::ptrdiff_t m_Inparams = 0x0; // KeyValues3
    constexpr std::ptrdiff_t m_Outparams = 0x10; // KeyValues3
}

namespace PulseRuntimeCallInfoIndex_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // int32
}

namespace PulseRuntimeCellIndex_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // int32
}

namespace PulseRuntimeChunkIndex_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // int32
}

namespace PulseRuntimeEntrypointIndex_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // int32
}

namespace PulseRuntimeInvokeIndex_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // int32
}

namespace PulseRuntimeOutputIndex_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // int32
}

namespace PulseRuntimeRegisterIndex_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // int16
}

namespace PulseRuntimeStateOffset_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // uint16
}

namespace PulseRuntimeVarIndex_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // int32
}

namespace PulseTestEHandle_t {
    constexpr std::ptrdiff_t m_Value = 0x0; // int32
}