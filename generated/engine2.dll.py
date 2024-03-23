'''
Generated using https://github.com/a2x/cs2-dumper
Sat, 23 Mar 2024 05:02:03 +0000
'''

class CEmptyEntityInstance:

class CEntityComponent:

class CEntityComponentHelper:
    m_flags = 0x8 # uint32_t
    m_pInfo = 0x10 # EntComponentInfo_t*
    m_nPriority = 0x18 # int32_t
    m_pNext = 0x20 # CEntityComponentHelper*

class CEntityIOOutput:
    m_Value = 0x18 # CVariantBase<CVariantDefaultAllocator>

class CEntityIdentity:
    m_nameStringableIndex = 0x14 # int32_t
    m_name = 0x18 # CUtlSymbolLarge
    m_designerName = 0x20 # CUtlSymbolLarge
    m_flags = 0x30 # uint32_t
    m_worldGroupId = 0x38 # WorldGroupId_t
    m_fDataObjectTypes = 0x3C # uint32_t
    m_PathIndex = 0x40 # ChangeAccessorFieldPathIndex_t
    m_pPrev = 0x58 # CEntityIdentity*
    m_pNext = 0x60 # CEntityIdentity*
    m_pPrevByClass = 0x68 # CEntityIdentity*
    m_pNextByClass = 0x70 # CEntityIdentity*

class CEntityInstance:
    m_iszPrivateVScripts = 0x8 # CUtlSymbolLarge
    m_pEntity = 0x10 # CEntityIdentity*
    m_CScriptComponent = 0x28 # CScriptComponent*
    m_bVisibleinPVS = 0x30 # bool

class CNetworkVarChainer:
    m_PathIndex = 0x20 # ChangeAccessorFieldPathIndex_t

class CScriptComponent: # CEntityComponent
    m_scriptClassName = 0x30 # CUtlSymbolLarge

class CVariantDefaultAllocator:

class EngineLoopState_t:
    m_nPlatWindowWidth = 0x18 # int32_t
    m_nPlatWindowHeight = 0x1C # int32_t
    m_nRenderWidth = 0x20 # int32_t
    m_nRenderHeight = 0x24 # int32_t

class EntComponentInfo_t:
    m_pName = 0x0 # char*
    m_pCPPClassname = 0x8 # char*
    m_pNetworkDataReferencedDescription = 0x10 # char*
    m_pNetworkDataReferencedPtrPropDescription = 0x18 # char*
    m_nRuntimeIndex = 0x20 # int32_t
    m_nFlags = 0x24 # uint32_t
    m_pBaseClassComponentHelper = 0x60 # CEntityComponentHelper*

class EntInput_t:

class EntOutput_t:

class EventAdvanceTick_t: # EventSimulate_t
    m_nCurrentTick = 0x30 # int32_t
    m_nCurrentTickThisFrame = 0x34 # int32_t
    m_nTotalTicksThisFrame = 0x38 # int32_t
    m_nTotalTicks = 0x3C # int32_t

class EventAppShutdown_t:
    m_nDummy0 = 0x0 # int32_t

class EventClientAdvanceTick_t: # EventAdvanceTick_t

class EventClientFrameSimulate_t:
    m_LoopState = 0x0 # EngineLoopState_t
    m_flRealTime = 0x28 # float
    m_flFrameTime = 0x2C # float
    m_flWhenScheduleSendTickPacket = 0x30 # double

class EventClientOutput_t:
    m_LoopState = 0x0 # EngineLoopState_t
    m_flRenderTime = 0x28 # float
    m_flRealTime = 0x2C # float
    m_flRenderFrameTimeUnbounded = 0x30 # float
    m_bRenderOnly = 0x34 # bool

class EventClientPauseSimulate_t: # EventSimulate_t

class EventClientPollInput_t:
    m_LoopState = 0x0 # EngineLoopState_t
    m_flRealTime = 0x28 # float

class EventClientPollNetworking_t:
    m_nTickCount = 0x0 # int32_t

class EventClientPostAdvanceTick_t: # EventPostAdvanceTick_t

class EventClientPostOutput_t:
    m_LoopState = 0x0 # EngineLoopState_t
    m_flRenderTime = 0x28 # double
    m_flRenderFrameTime = 0x30 # float
    m_flRenderFrameTimeUnbounded = 0x34 # float
    m_bRenderOnly = 0x38 # bool

class EventClientPostSimulate_t: # EventSimulate_t

class EventClientPreOutput_t:
    m_LoopState = 0x0 # EngineLoopState_t
    m_flRenderTime = 0x28 # double
    m_flRenderFrameTime = 0x30 # double
    m_flRenderFrameTimeUnbounded = 0x38 # double
    m_flRealTime = 0x40 # float
    m_bRenderOnly = 0x44 # bool

class EventClientPreSimulate_t: # EventSimulate_t

class EventClientPredictionPostNetupdate_t:

class EventClientProcessGameInput_t:
    m_LoopState = 0x0 # EngineLoopState_t
    m_flRealTime = 0x28 # float
    m_flFrameTime = 0x2C # float

class EventClientProcessInput_t:
    m_LoopState = 0x0 # EngineLoopState_t
    m_flRealTime = 0x28 # float
    m_flTickInterval = 0x2C # float
    m_flTickStartTime = 0x30 # double

class EventClientProcessNetworking_t:

class EventClientSceneSystemThreadStateChange_t:
    m_bThreadsActive = 0x0 # bool

class EventClientSimulate_t: # EventSimulate_t

class EventFrameBoundary_t:
    m_flFrameTime = 0x0 # float

class EventModInitialized_t:

class EventPostAdvanceTick_t: # EventSimulate_t
    m_nCurrentTick = 0x30 # int32_t
    m_nCurrentTickThisFrame = 0x34 # int32_t
    m_nTotalTicksThisFrame = 0x38 # int32_t
    m_nTotalTicks = 0x3C # int32_t

class EventPostDataUpdate_t:
    m_nCount = 0x0 # int32_t

class EventPreDataUpdate_t:
    m_nCount = 0x0 # int32_t

class EventProfileStorageAvailable_t:
    m_nSplitScreenSlot = 0x0 # CSplitScreenSlot

class EventServerAdvanceTick_t: # EventAdvanceTick_t

class EventServerPollNetworking_t: # EventSimulate_t

class EventServerPostAdvanceTick_t: # EventPostAdvanceTick_t

class EventServerPostSimulate_t: # EventSimulate_t

class EventServerProcessNetworking_t: # EventSimulate_t

class EventServerSimulate_t: # EventSimulate_t

class EventSetTime_t:
    m_LoopState = 0x0 # EngineLoopState_t
    m_nClientOutputFrames = 0x28 # int32_t
    m_flRealTime = 0x30 # double
    m_flRenderTime = 0x38 # double
    m_flRenderFrameTime = 0x40 # double
    m_flRenderFrameTimeUnbounded = 0x48 # double
    m_flRenderFrameTimeUnscaled = 0x50 # double
    m_flTickRemainder = 0x58 # double

class EventSimpleLoopFrameUpdate_t:
    m_LoopState = 0x0 # EngineLoopState_t
    m_flRealTime = 0x28 # float
    m_flFrameTime = 0x2C # float

class EventSimulate_t:
    m_LoopState = 0x0 # EngineLoopState_t
    m_bFirstTick = 0x28 # bool
    m_bLastTick = 0x29 # bool

class EventSplitScreenStateChanged_t:
