public static class CEntityComponentHelper {
    public const nint m_flags = 0x8; // uint32
    public const nint m_pInfo = 0x10; // EntComponentInfo_t*
    public const nint m_nPriority = 0x18; // int32
    public const nint m_pNext = 0x20; // CEntityComponentHelper*
}

public static class CEntityIOOutput {
    public const nint m_Value = 0x18; // CVariantBase< CVariantDefaultAllocator >
}

public static class CEntityIdentity {
    public const nint m_nameStringableIndex = 0x14; // int32
    public const nint m_name = 0x18; // CUtlSymbolLarge
    public const nint m_designerName = 0x20; // CUtlSymbolLarge
    public const nint m_flags = 0x30; // uint32
    public const nint m_worldGroupId = 0x38; // WorldGroupId_t
    public const nint m_fDataObjectTypes = 0x3C; // uint32
    public const nint m_PathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
    public const nint m_pPrev = 0x58; // CEntityIdentity*
    public const nint m_pNext = 0x60; // CEntityIdentity*
    public const nint m_pPrevByClass = 0x68; // CEntityIdentity*
    public const nint m_pNextByClass = 0x70; // CEntityIdentity*
}

public static class CEntityInstance {
    public const nint m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
    public const nint m_pEntity = 0x10; // CEntityIdentity*
    public const nint m_CScriptComponent = 0x28; // CScriptComponent*
}

public static class CNetworkVarChainer {
    public const nint m_PathIndex = 0x20; // ChangeAccessorFieldPathIndex_t
}

public static class CScriptComponent {
    public const nint m_scriptClassName = 0x30; // CUtlSymbolLarge
}

public static class EngineLoopState_t {
    public const nint m_nPlatWindowWidth = 0x18; // int32
    public const nint m_nPlatWindowHeight = 0x1C; // int32
    public const nint m_nRenderWidth = 0x20; // int32
    public const nint m_nRenderHeight = 0x24; // int32
}

public static class EntComponentInfo_t {
    public const nint m_pName = 0x0; // char*
    public const nint m_pCPPClassname = 0x8; // char*
    public const nint m_pNetworkDataReferencedDescription = 0x10; // char*
    public const nint m_pNetworkDataReferencedPtrPropDescription = 0x18; // char*
    public const nint m_nRuntimeIndex = 0x20; // int32
    public const nint m_nFlags = 0x24; // uint32
    public const nint m_pBaseClassComponentHelper = 0x60; // CEntityComponentHelper*
}

public static class EventAdvanceTick_t {
    public const nint m_nCurrentTick = 0x30; // int32
    public const nint m_nCurrentTickThisFrame = 0x34; // int32
    public const nint m_nTotalTicksThisFrame = 0x38; // int32
    public const nint m_nTotalTicks = 0x3C; // int32
}

public static class EventAppShutdown_t {
    public const nint m_nDummy0 = 0x0; // int32
}

public static class EventClientFrameSimulate_t {
    public const nint m_LoopState = 0x0; // EngineLoopState_t
    public const nint m_flRealTime = 0x28; // float32
    public const nint m_flFrameTime = 0x2C; // float32
}

public static class EventClientOutput_t {
    public const nint m_LoopState = 0x0; // EngineLoopState_t
    public const nint m_flRenderTime = 0x28; // float32
    public const nint m_flRealTime = 0x2C; // float32
    public const nint m_flRenderFrameTimeUnbounded = 0x30; // float32
    public const nint m_bRenderOnly = 0x34; // bool
}

public static class EventClientPollInput_t {
    public const nint m_LoopState = 0x0; // EngineLoopState_t
    public const nint m_flRealTime = 0x28; // float32
}

public static class EventClientPollNetworking_t {
    public const nint m_nTickCount = 0x0; // int32
}

public static class EventClientPostOutput_t {
    public const nint m_LoopState = 0x0; // EngineLoopState_t
    public const nint m_flRenderTime = 0x28; // float64
    public const nint m_flRenderFrameTime = 0x30; // float32
    public const nint m_flRenderFrameTimeUnbounded = 0x34; // float32
    public const nint m_bRenderOnly = 0x38; // bool
}

public static class EventClientPreOutput_t {
    public const nint m_LoopState = 0x0; // EngineLoopState_t
    public const nint m_flRenderTime = 0x28; // float64
    public const nint m_flRenderFrameTime = 0x30; // float64
    public const nint m_flRenderFrameTimeUnbounded = 0x38; // float64
    public const nint m_flRealTime = 0x40; // float32
    public const nint m_bRenderOnly = 0x44; // bool
}

public static class EventClientProcessGameInput_t {
    public const nint m_LoopState = 0x0; // EngineLoopState_t
    public const nint m_flRealTime = 0x28; // float32
    public const nint m_flFrameTime = 0x2C; // float32
}

public static class EventClientProcessInput_t {
    public const nint m_LoopState = 0x0; // EngineLoopState_t
    public const nint m_flRealTime = 0x28; // float32
}

public static class EventClientSceneSystemThreadStateChange_t {
    public const nint m_bThreadsActive = 0x0; // bool
}

public static class EventClientSendInput_t {
    public const nint m_bFinalClientCommandTick = 0x0; // bool
    public const nint m_nAdditionalClientCommandsToCreate = 0x4; // int32
}

public static class EventFrameBoundary_t {
    public const nint m_flFrameTime = 0x0; // float32
}

public static class EventPostAdvanceTick_t {
    public const nint m_nCurrentTick = 0x30; // int32
    public const nint m_nCurrentTickThisFrame = 0x34; // int32
    public const nint m_nTotalTicksThisFrame = 0x38; // int32
    public const nint m_nTotalTicks = 0x3C; // int32
}

public static class EventPostDataUpdate_t {
    public const nint m_nCount = 0x0; // int32
}

public static class EventPreDataUpdate_t {
    public const nint m_nCount = 0x0; // int32
}

public static class EventProfileStorageAvailable_t {
    public const nint m_nSplitScreenSlot = 0x0; // CSplitScreenSlot
}

public static class EventSetTime_t {
    public const nint m_LoopState = 0x0; // EngineLoopState_t
    public const nint m_nClientOutputFrames = 0x28; // int32
    public const nint m_flRealTime = 0x30; // float64
    public const nint m_flRenderTime = 0x38; // float64
    public const nint m_flRenderFrameTime = 0x40; // float64
    public const nint m_flRenderFrameTimeUnbounded = 0x48; // float64
    public const nint m_flRenderFrameTimeUnscaled = 0x50; // float64
    public const nint m_flTickRemainder = 0x58; // float64
}

public static class EventSimpleLoopFrameUpdate_t {
    public const nint m_LoopState = 0x0; // EngineLoopState_t
    public const nint m_flRealTime = 0x28; // float32
    public const nint m_flFrameTime = 0x2C; // float32
}

public static class EventSimulate_t {
    public const nint m_LoopState = 0x0; // EngineLoopState_t
    public const nint m_bFirstTick = 0x28; // bool
    public const nint m_bLastTick = 0x29; // bool
}