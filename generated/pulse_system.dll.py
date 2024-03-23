'''
Generated using https://github.com/a2x/cs2-dumper
Sat, 23 Mar 2024 05:02:03 +0000
'''

class CBasePulseGraphInstance:

class CPulseCell_Base:
    m_nEditorNodeID = 0x8 # PulseDocNodeID_t

class CPulseCell_BaseFlow: # CPulseCell_Base

class CPulseCell_BaseValue: # CPulseCell_Base

class CPulseCell_BaseYieldingInflow: # CPulseCell_BaseFlow

class CPulseCell_CursorQueue: # CPulseCell_WaitForCursorsWithTagBase
    m_nCursorsAllowedToRunParallel = 0x60 # int32_t

class CPulseCell_Inflow_BaseEntrypoint: # CPulseCell_BaseFlow
    m_EntryChunk = 0x48 # PulseRuntimeChunkIndex_t
    m_RegisterMap = 0x50 # PulseRegisterMap_t

class CPulseCell_Inflow_EntOutputHandler: # CPulseCell_Inflow_BaseEntrypoint
    m_SourceEntity = 0x70 # CUtlSymbolLarge
    m_SourceOutput = 0x78 # CUtlSymbolLarge
    m_TargetInput = 0x80 # CUtlSymbolLarge
    m_ExpectedParamType = 0x88 # CPulseValueFullType

class CPulseCell_Inflow_EventHandler: # CPulseCell_Inflow_BaseEntrypoint
    m_EventName = 0x70 # CUtlSymbolLarge

class CPulseCell_Inflow_GraphHook: # CPulseCell_Inflow_BaseEntrypoint
    m_HookName = 0x70 # CUtlSymbolLarge

class CPulseCell_Inflow_Method: # CPulseCell_Inflow_BaseEntrypoint
    m_MethodName = 0x70 # CUtlSymbolLarge
    m_Description = 0x78 # CUtlString
    m_bIsPublic = 0x80 # bool
    m_ReturnType = 0x88 # CPulseValueFullType
    m_Args = 0x98 # CUtlVector<CPulseRuntimeMethodArg>

class CPulseCell_Inflow_Wait: # CPulseCell_BaseYieldingInflow
    m_WakeResume = 0x48 # CPulse_ResumePoint

class CPulseCell_Inflow_Yield: # CPulseCell_BaseYieldingInflow
    m_UnyieldResume = 0x48 # CPulse_ResumePoint

class CPulseCell_Outflow_CycleOrdered: # CPulseCell_BaseFlow
    m_Outputs = 0x48 # CUtlVector<CPulse_OutflowConnection>

class CPulseCell_Outflow_CycleOrdered_InstanceState_t:
    m_nNextIndex = 0x0 # int32_t

class CPulseCell_Outflow_CycleRandom: # CPulseCell_BaseFlow
    m_Outputs = 0x48 # CUtlVector<CPulse_OutflowConnection>

class CPulseCell_Outflow_CycleShuffled: # CPulseCell_BaseFlow
    m_Outputs = 0x48 # CUtlVector<CPulse_OutflowConnection>

class CPulseCell_Outflow_CycleShuffled_InstanceState_t:
    m_Shuffle = 0x0 # CUtlVectorFixedGrowable<uint8_t>
    m_nNextShuffle = 0x20 # int32_t

class CPulseCell_Outflow_IntSwitch: # CPulseCell_BaseFlow
    m_DefaultCaseOutflow = 0x48 # CPulse_OutflowConnection
    m_CaseOutflows = 0x58 # CUtlVector<CPulse_OutflowConnection>

class CPulseCell_Outflow_StringSwitch: # CPulseCell_BaseFlow
    m_DefaultCaseOutflow = 0x48 # CPulse_OutflowConnection
    m_CaseOutflows = 0x58 # CUtlVector<CPulse_OutflowConnection>

class CPulseCell_Outflow_TestExplicitYesNo: # CPulseCell_BaseFlow
    m_Yes = 0x48 # CPulse_OutflowConnection
    m_No = 0x58 # CPulse_OutflowConnection

class CPulseCell_Outflow_TestRandomYesNo: # CPulseCell_BaseFlow
    m_Yes = 0x48 # CPulse_OutflowConnection
    m_No = 0x58 # CPulse_OutflowConnection

class CPulseCell_Step_CallExternalMethod: # CPulseCell_BaseYieldingInflow
    m_MethodName = 0x48 # CUtlSymbolLarge
    m_ExpectedArgs = 0x50 # CUtlVector<CPulseRuntimeMethodArg>
    m_nAsyncCallMode = 0x68 # PulseMethodCallMode_t
    m_OnFinished = 0x70 # CPulse_ResumePoint

class CPulseCell_Step_DebugLog: # CPulseCell_BaseFlow

class CPulseCell_Step_PublicOutput: # CPulseCell_BaseFlow
    m_OutputIndex = 0x48 # PulseRuntimeOutputIndex_t

class CPulseCell_Step_TestDomainCreateFakeEntity: # CPulseCell_BaseFlow

class CPulseCell_Step_TestDomainDestroyFakeEntity: # CPulseCell_BaseFlow

class CPulseCell_Step_TestDomainEntFire: # CPulseCell_BaseFlow
    m_Input = 0x48 # CUtlString

class CPulseCell_Step_TestDomainTracepoint: # CPulseCell_BaseFlow

class CPulseCell_TestWaitWithCursorState: # CPulseCell_BaseYieldingInflow
    m_WakeResume = 0x48 # CPulse_ResumePoint
    m_WakeCancel = 0x58 # CPulse_ResumePoint
    m_WakeFail = 0x68 # CPulse_ResumePoint

class CPulseCell_TestWaitWithCursorState_CursorState_t:
    flWaitValue = 0x0 # float
    bFailOnCancel = 0x4 # bool

class CPulseCell_Test_MultiInflow_NoDefault: # CPulseCell_BaseFlow

class CPulseCell_Test_MultiInflow_WithDefault: # CPulseCell_BaseFlow

class CPulseCell_Test_NoInflow: # CPulseCell_BaseFlow

class CPulseCell_Timeline: # CPulseCell_BaseYieldingInflow
    m_TimelineEvents = 0x48 # CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
    m_bWaitForChildOutflows = 0x60 # bool
    m_OnFinished = 0x68 # CPulse_ResumePoint
    m_OnCanceled = 0x78 # CPulse_ResumePoint

class CPulseCell_Timeline_TimelineEvent_t:
    m_flTimeFromPrevious = 0x0 # float
    m_bPauseForPreviousEvents = 0x4 # bool
    m_bCallModeSync = 0x5 # bool
    m_EventOutflow = 0x8 # CPulse_OutflowConnection

class CPulseCell_Val_TestDomainFindEntityByName: # CPulseCell_BaseValue

class CPulseCell_Val_TestDomainGetEntityName: # CPulseCell_BaseValue

class CPulseCell_Value_RandomInt: # CPulseCell_BaseValue

class CPulseCell_Value_TestValue50: # CPulseCell_BaseValue

class CPulseCell_WaitForCursorsWithTag: # CPulseCell_WaitForCursorsWithTagBase
    m_bTagSelfWhenComplete = 0x60 # bool
    m_nDesiredKillPriority = 0x64 # PulseCursorCancelPriority_t

class CPulseCell_WaitForCursorsWithTagBase: # CPulseCell_BaseYieldingInflow
    m_nCursorsAllowedToWait = 0x48 # int32_t
    m_WaitComplete = 0x50 # CPulse_ResumePoint

class CPulseCell_WaitForCursorsWithTagBase_CursorState_t:
    m_TagName = 0x0 # CUtlSymbolLarge

class CPulseCursorFuncs:

class CPulseExecCursor:

class CPulseGraphDef:
    m_DomainIdentifier = 0x8 # CUtlSymbolLarge
    m_ParentMapName = 0x10 # CUtlSymbolLarge
    m_Chunks = 0x18 # CUtlVector<CPulse_Chunk*>
    m_Cells = 0x30 # CUtlVector<CPulseCell_Base*>
    m_Vars = 0x48 # CUtlVector<CPulse_Variable>
    m_PublicOutputs = 0x60 # CUtlVector<CPulse_PublicOutput>
    m_InvokeBindings = 0x78 # CUtlVector<CPulse_InvokeBinding*>
    m_CallInfos = 0x90 # CUtlVector<CPulse_CallInfo*>
    m_Constants = 0xA8 # CUtlVector<CPulse_Constant>
    m_OutputConnections = 0xC0 # CUtlVector<CPulse_OutputConnection*>

class CPulseGraphInstance_TestDomain: # CBasePulseGraphInstance
    m_bIsRunningUnitTests = 0xD8 # bool
    m_bExplicitTimeStepping = 0xD9 # bool
    m_bExpectingToDestroyWithYieldedCursors = 0xDA # bool
    m_nNextValidateIndex = 0xDC # int32_t
    m_Tracepoints = 0xE0 # CUtlVector<CUtlString>
    m_bTestYesOrNoPath = 0xF8 # bool

class CPulseGraphInstance_TestDomain_Derived: # CPulseGraphInstance_TestDomain
    m_nInstanceValueX = 0x100 # int32_t

class CPulseGraphInstance_TurtleGraphics: # CBasePulseGraphInstance

class CPulseMathlib:

class CPulseRuntimeMethodArg:
    m_Name = 0x0 # CKV3MemberNameWithStorage
    m_Description = 0x38 # CUtlString
    m_Type = 0x40 # CPulseValueFullType

class CPulseTestFuncs_DerivedDomain:

class CPulseTestFuncs_LibraryA:

class CPulseTestScriptLib:

class CPulseTurtleGraphicsCursor: # CPulseExecCursor
    m_Color = 0x168 # Color
    m_vPos = 0x16C # Vector2D
    m_flHeadingDeg = 0x174 # float
    m_bPenUp = 0x178 # bool

class CPulse_CallInfo:
    m_PortName = 0x0 # CUtlSymbolLarge
    m_nEditorNodeID = 0x8 # PulseDocNodeID_t
    m_RegisterMap = 0x10 # PulseRegisterMap_t
    m_CallMethodID = 0x30 # PulseDocNodeID_t
    m_nSrcChunk = 0x34 # PulseRuntimeChunkIndex_t
    m_nSrcInstruction = 0x38 # int32_t

class CPulse_Chunk:
    m_Instructions = 0x0 # CUtlLeanVector<PGDInstruction_t>
    m_Registers = 0x10 # CUtlLeanVector<CPulse_RegisterInfo>
    m_InstructionEditorIDs = 0x20 # CUtlLeanVector<PulseDocNodeID_t>

class CPulse_Constant:
    m_Type = 0x0 # CPulseValueFullType
    m_Value = 0x10 # KeyValues3

class CPulse_InvokeBinding:
    m_RegisterMap = 0x0 # PulseRegisterMap_t
    m_FuncName = 0x20 # CUtlSymbolLarge
    m_nCellIndex = 0x28 # PulseRuntimeCellIndex_t
    m_nSrcChunk = 0x2C # PulseRuntimeChunkIndex_t
    m_nSrcInstruction = 0x30 # int32_t

class CPulse_OutflowConnection:
    m_SourceOutflowName = 0x0 # CUtlSymbolLarge
    m_nDestChunk = 0x8 # PulseRuntimeChunkIndex_t
    m_nInstruction = 0xC # int32_t

class CPulse_OutputConnection:
    m_SourceOutput = 0x0 # CUtlSymbolLarge
    m_TargetEntity = 0x8 # CUtlSymbolLarge
    m_TargetInput = 0x10 # CUtlSymbolLarge
    m_Param = 0x18 # CUtlSymbolLarge

class CPulse_PublicOutput:
    m_Name = 0x0 # CUtlSymbolLarge
    m_Description = 0x8 # CUtlString
    m_ParamType = 0x10 # CPulseValueFullType

class CPulse_RegisterInfo:
    m_nReg = 0x0 # PulseRuntimeRegisterIndex_t
    m_Type = 0x8 # CPulseValueFullType
    m_OriginName = 0x18 # CKV3MemberNameWithStorage
    m_nWrittenByInstruction = 0x50 # int32_t
    m_nLastReadByInstruction = 0x54 # int32_t

class CPulse_ResumePoint: # CPulse_OutflowConnection

class CPulse_Variable:
    m_Name = 0x0 # CUtlSymbolLarge
    m_Description = 0x8 # CUtlString
    m_Type = 0x10 # CPulseValueFullType
    m_DefaultValue = 0x20 # KeyValues3
    m_bIsPublic = 0x32 # bool

class CTestDomainDerived_Cursor: # CPulseExecCursor
    m_nCursorValueA = 0x168 # int32_t
    m_nCursorValueB = 0x16C # int32_t

class FakeEntity_t:
    m_nHandle = 0x0 # PulseTestEHandle_t
    m_Name = 0x8 # CUtlString
    m_Class = 0x10 # CUtlString
    m_bDestroyed = 0x18 # bool
    m_pAssociatedGraphInstance = 0x20 # CPulseGraphInstance_TestDomain*
    m_bFuncWasCalled = 0x28 # bool
    m_fValue = 0x2C # float

class FakeEntity_tAPI:

class PGDInstruction_t:
    m_nCode = 0x0 # PulseInstructionCode_t
    m_nVar = 0x4 # PulseRuntimeVarIndex_t
    m_nReg0 = 0x8 # PulseRuntimeRegisterIndex_t
    m_nReg1 = 0xA # PulseRuntimeRegisterIndex_t
    m_nReg2 = 0xC # PulseRuntimeRegisterIndex_t
    m_nInvokeBindingIndex = 0x10 # PulseRuntimeInvokeIndex_t
    m_nChunk = 0x14 # PulseRuntimeChunkIndex_t
    m_nDestInstruction = 0x18 # int32_t
    m_nCallInfoIndex = 0x1C # PulseRuntimeCallInfoIndex_t
    m_nConstIdx = 0x20 # PulseRuntimeConstantIndex_t
    m_DomainValue = 0x28 # CBufferString

class PulseCursorID_t:
    m_Value = 0x0 # int32_t

class PulseCursorYieldToken_t:
    m_Value = 0x0 # int32_t

class PulseDocNodeID_t:
    m_Value = 0x0 # int32_t

class PulseGraphInstanceID_t:
    m_Value = 0x0 # uint32_t

class PulseRegisterMap_t:
    m_Inparams = 0x0 # KeyValues3
    m_Outparams = 0x10 # KeyValues3

class PulseRuntimeCallInfoIndex_t:
    m_Value = 0x0 # int32_t

class PulseRuntimeCellIndex_t:
    m_Value = 0x0 # int32_t

class PulseRuntimeChunkIndex_t:
    m_Value = 0x0 # int32_t

class PulseRuntimeConstantIndex_t:
    m_Value = 0x0 # int16_t

class PulseRuntimeEntrypointIndex_t:
    m_Value = 0x0 # int32_t

class PulseRuntimeInvokeIndex_t:
    m_Value = 0x0 # int32_t

class PulseRuntimeOutputIndex_t:
    m_Value = 0x0 # int32_t

class PulseRuntimeRegisterIndex_t:
    m_Value = 0x0 # int16_t

class PulseRuntimeStateOffset_t:
    m_Value = 0x0 # uint16_t

class PulseRuntimeVarIndex_t:
    m_Value = 0x0 # int32_t

class PulseTestEHandle_t:
    m_Value = 0x0 # uint32_t
