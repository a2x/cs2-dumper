/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 23 Mar 2024 05:02:03 +0000
 */

public static class CEmptyEntityInstance {
}

public static class CEntityComponent {
}

public static class CEntityComponentHelper {
    public const nint m_flags = 0x8; // uint32_t
    public const nint m_pInfo = 0x10; // EntComponentInfo_t*
    public const nint m_nPriority = 0x18; // int32_t
    public const nint m_pNext = 0x20; // CEntityComponentHelper*
}

public static class CEntityIOOutput {
    public const nint m_Value = 0x18; // CVariantBase<CVariantDefaultAllocator>
}

public static class CEntityIdentity {
    public const nint m_nameStringableIndex = 0x14; // int32_t
    public const nint m_name = 0x18; // CUtlSymbolLarge
    public const nint m_designerName = 0x20; // CUtlSymbolLarge
    public const nint m_flags = 0x30; // uint32_t
    public const nint m_worldGroupId = 0x38; // WorldGroupId_t
    public const nint m_fDataObjectTypes = 0x3C; // uint32_t
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
    public const nint m_bVisibleinPVS = 0x30; // bool
}

public static class CNetworkVarChainer {
    public const nint m_PathIndex = 0x20; // ChangeAccessorFieldPathIndex_t
}

public static class CScriptComponent { // CEntityComponent
    public const nint m_scriptClassName = 0x30; // CUtlSymbolLarge
}

public static class CVariantDefaultAllocator {
}

public static class EngineLoopState_t {
    public const nint m_nPlatWindowWidth = 0x18; // int32_t
    public const nint m_nPlatWindowHeight = 0x1C; // int32_t
    public const nint m_nRenderWidth = 0x20; // int32_t
    public const nint m_nRenderHeight = 0x24; // int32_t
}

public static class EntComponentInfo_t {
    public const nint m_pName = 0x0; // char*
    public const nint m_pCPPClassname = 0x8; // char*
    public const nint m_pNetworkDataReferencedDescription = 0x10; // char*
    public const nint m_pNetworkDataReferencedPtrPropDescription = 0x18; // char*
    public const nint m_nRuntimeIndex = 0x20; // int32_t
    public const nint m_nFlags = 0x24; // uint32_t
    public const nint m_pBaseClassComponentHelper = 0x60; // CEntityComponentHelper*
}

public static class EntInput_t {
}

public static class EntOutput_t {
}

public static class EventAdvanceTick_t { // EventSimulate_t
    public const nint m_nCurrentTick = 0x30; // int32_t
    public const nint m_nCurrentTickThisFrame = 0x34; // int32_t
    public const nint m_nTotalTicksThisFrame = 0x38; // int32_t
    public const nint m_nTotalTicks = 0x3C; // int32_t
}

public static class EventAppShutdown_t {
    public const nint m_nDummy0 = 0x0; // int32_t
}

public static class EventClientAdvanceTick_t { // EventAdvanceTick_t
}

public static class EventClientFrameSimulate_t {
    public const nint m_LoopState = 0x0; // EngineLoopState_t
    public const nint m_flRealTime = 0x28; // float
    public const nint m_flFrameTime = 0x2C; // float
    public const nint m_flWhenScheduleSendTickPacket = 0x30; // double
}

public static class EventClientOutput_t {
    public const nint m_LoopState = 0x0; // EngineLoopState_t
    public const nint m_flRenderTime = 0x28; // float
    public const nint m_flRealTime = 0x2C; // float
    public const nint m_flRenderFrameTimeUnbounded = 0x30; // float
    public const nint m_bRenderOnly = 0x34; // bool
}

public static class EventClientPauseSimulate_t { // EventSimulate_t
}

public static class EventClientPollInput_t {
    public const nint m_LoopState = 0x0; // EngineLoopState_t
    public const nint m_flRealTime = 0x28; // float
}

public static class EventClientPollNetworking_t {
    public const nint m_nTickCount = 0x0; // int32_t
}

public static class EventClientPostAdvanceTick_t { // EventPostAdvanceTick_t
}

public static class EventClientPostOutput_t {
    public const nint m_LoopState = 0x0; // EngineLoopState_t
    public const nint m_flRenderTime = 0x28; // double
    public const nint m_flRenderFrameTime = 0x30; // float
    public const nint m_flRenderFrameTimeUnbounded = 0x34; // float
    public const nint m_bRenderOnly = 0x38; // bool
}

public static class EventClientPostSimulate_t { // EventSimulate_t
}

public static class EventClientPreOutput_t {
    public const nint m_LoopState = 0x0; // EngineLoopState_t
    public const nint m_flRenderTime = 0x28; // double
    public const nint m_flRenderFrameTime = 0x30; // double
    public const nint m_flRenderFrameTimeUnbounded = 0x38; // double
    public const nint m_flRealTime = 0x40; // float
    public const nint m_bRenderOnly = 0x44; // bool
}

public static class EventClientPreSimulate_t { // EventSimulate_t
}

public static class EventClientPredictionPostNetupdate_t {
}

public static class EventClientProcessGameInput_t {
    public const nint m_LoopState = 0x0; // EngineLoopState_t
    public const nint m_flRealTime = 0x28; // float
    public const nint m_flFrameTime = 0x2C; // float
}

public static class EventClientProcessInput_t {
    public const nint m_LoopState = 0x0; // EngineLoopState_t
    public const nint m_flRealTime = 0x28; // float
    public const nint m_flTickInterval = 0x2C; // float
    public const nint m_flTickStartTime = 0x30; // double
}

public static class EventClientProcessNetworking_t {
}

public static class EventClientSceneSystemThreadStateChange_t {
    public const nint m_bThreadsActive = 0x0; // bool
}

public static class EventClientSimulate_t { // EventSimulate_t
}

public static class EventFrameBoundary_t {
    public const nint m_flFrameTime = 0x0; // float
}

public static class EventModInitialized_t {
}

public static class EventPostAdvanceTick_t { // EventSimulate_t
    public const nint m_nCurrentTick = 0x30; // int32_t
    public const nint m_nCurrentTickThisFrame = 0x34; // int32_t
    public const nint m_nTotalTicksThisFrame = 0x38; // int32_t
    public const nint m_nTotalTicks = 0x3C; // int32_t
}

public static class EventPostDataUpdate_t {
    public const nint m_nCount = 0x0; // int32_t
}

public static class EventPreDataUpdate_t {
    public const nint m_nCount = 0x0; // int32_t
}

public static class EventProfileStorageAvailable_t {
    public const nint m_nSplitScreenSlot = 0x0; // CSplitScreenSlot
}

public static class EventServerAdvanceTick_t { // EventAdvanceTick_t
}

public static class EventServerPollNetworking_t { // EventSimulate_t
}

public static class EventServerPostAdvanceTick_t { // EventPostAdvanceTick_t
}

public static class EventServerPostSimulate_t { // EventSimulate_t
}

public static class EventServerProcessNetworking_t { // EventSimulate_t
}

public static class EventServerSimulate_t { // EventSimulate_t
}

public static class EventSetTime_t {
    public const nint m_LoopState = 0x0; // EngineLoopState_t
    public const nint m_nClientOutputFrames = 0x28; // int32_t
    public const nint m_flRealTime = 0x30; // double
    public const nint m_flRenderTime = 0x38; // double
    public const nint m_flRenderFrameTime = 0x40; // double
    public const nint m_flRenderFrameTimeUnbounded = 0x48; // double
    public const nint m_flRenderFrameTimeUnscaled = 0x50; // double
    public const nint m_flTickRemainder = 0x58; // double
}

public static class EventSimpleLoopFrameUpdate_t {
    public const nint m_LoopState = 0x0; // EngineLoopState_t
    public const nint m_flRealTime = 0x28; // float
    public const nint m_flFrameTime = 0x2C; // float
}

public static class EventSimulate_t {
    public const nint m_LoopState = 0x0; // EngineLoopState_t
    public const nint m_bFirstTick = 0x28; // bool
    public const nint m_bLastTick = 0x29; // bool
}

public static class EventSplitScreenStateChanged_t {
}