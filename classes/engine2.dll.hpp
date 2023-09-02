#pragma once

#include <cstddef>

namespace EngineLoopState_t {
    constexpr std::ptrdiff_t m_nPlatWindowWidth = 0x18;
    constexpr std::ptrdiff_t m_nPlatWindowHeight = 0x1c;
    constexpr std::ptrdiff_t m_nRenderWidth = 0x20;
    constexpr std::ptrdiff_t m_nRenderHeight = 0x24;
}

namespace EventModInitialized_t {
}

namespace EventFrameBoundary_t {
    constexpr std::ptrdiff_t m_flFrameTime = 0x0;
}

namespace EventProfileStorageAvailable_t {
    constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x0;
}

namespace EventSplitScreenStateChanged_t {
}

namespace EventSetTime_t {
    constexpr std::ptrdiff_t m_LoopState = 0x0;
    constexpr std::ptrdiff_t m_nClientOutputFrames = 0x28;
    constexpr std::ptrdiff_t m_flRealTime = 0x30;
    constexpr std::ptrdiff_t m_flRenderTime = 0x38;
    constexpr std::ptrdiff_t m_flRenderFrameTime = 0x40;
    constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x48;
    constexpr std::ptrdiff_t m_flRenderFrameTimeUnscaled = 0x50;
    constexpr std::ptrdiff_t m_flTickRemainder = 0x58;
}

namespace EventClientPollInput_t {
    constexpr std::ptrdiff_t m_LoopState = 0x0;
    constexpr std::ptrdiff_t m_flRealTime = 0x28;
}

namespace EventClientProcessInput_t {
    constexpr std::ptrdiff_t m_LoopState = 0x0;
    constexpr std::ptrdiff_t m_flRealTime = 0x28;
}

namespace EventClientProcessGameInput_t {
    constexpr std::ptrdiff_t m_LoopState = 0x0;
    constexpr std::ptrdiff_t m_flRealTime = 0x28;
    constexpr std::ptrdiff_t m_flFrameTime = 0x2c;
}

namespace EventClientPreOutput_t {
    constexpr std::ptrdiff_t m_LoopState = 0x0;
    constexpr std::ptrdiff_t m_flRenderTime = 0x28;
    constexpr std::ptrdiff_t m_flRenderFrameTime = 0x30;
    constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x38;
    constexpr std::ptrdiff_t m_flRealTime = 0x40;
    constexpr std::ptrdiff_t m_bRenderOnly = 0x44;
}

namespace EventClientSceneSystemThreadStateChange_t {
    constexpr std::ptrdiff_t m_bThreadsActive = 0x0;
}

namespace EventClientOutput_t {
    constexpr std::ptrdiff_t m_LoopState = 0x0;
    constexpr std::ptrdiff_t m_flRenderTime = 0x28;
    constexpr std::ptrdiff_t m_flRealTime = 0x2c;
    constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x30;
    constexpr std::ptrdiff_t m_bRenderOnly = 0x34;
}

namespace EventClientPostOutput_t {
    constexpr std::ptrdiff_t m_LoopState = 0x0;
    constexpr std::ptrdiff_t m_flRenderTime = 0x28;
    constexpr std::ptrdiff_t m_flRenderFrameTime = 0x30;
    constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x34;
    constexpr std::ptrdiff_t m_bRenderOnly = 0x38;
}

namespace EventClientFrameSimulate_t {
    constexpr std::ptrdiff_t m_LoopState = 0x0;
    constexpr std::ptrdiff_t m_flRealTime = 0x28;
    constexpr std::ptrdiff_t m_flFrameTime = 0x2c;
}

namespace EventSimpleLoopFrameUpdate_t {
    constexpr std::ptrdiff_t m_LoopState = 0x0;
    constexpr std::ptrdiff_t m_flRealTime = 0x28;
    constexpr std::ptrdiff_t m_flFrameTime = 0x2c;
}

namespace EventSimulate_t {
    constexpr std::ptrdiff_t m_LoopState = 0x0;
    constexpr std::ptrdiff_t m_bFirstTick = 0x28;
    constexpr std::ptrdiff_t m_bLastTick = 0x29;
}

namespace EventAdvanceTick_t {
    constexpr std::ptrdiff_t m_nCurrentTick = 0x30;
    constexpr std::ptrdiff_t m_nCurrentTickThisFrame = 0x34;
    constexpr std::ptrdiff_t m_nTotalTicksThisFrame = 0x38;
    constexpr std::ptrdiff_t m_nTotalTicks = 0x3c;
}

namespace EventPostAdvanceTick_t {
    constexpr std::ptrdiff_t m_nCurrentTick = 0x30;
    constexpr std::ptrdiff_t m_nCurrentTickThisFrame = 0x34;
    constexpr std::ptrdiff_t m_nTotalTicksThisFrame = 0x38;
    constexpr std::ptrdiff_t m_nTotalTicks = 0x3c;
}

namespace EventServerAdvanceTick_t {
}

namespace EventServerPostAdvanceTick_t {
}

namespace EventClientAdvanceTick_t {
}

namespace EventClientPostAdvanceTick_t {
}

namespace EventClientSendInput_t {
    constexpr std::ptrdiff_t m_bFinalClientCommandTick = 0x0;
    constexpr std::ptrdiff_t m_nAdditionalClientCommandsToCreate = 0x4;
}

namespace EventClientPredictionPostNetupdate_t {
}

namespace EventClientPollNetworking_t {
    constexpr std::ptrdiff_t m_nTickCount = 0x0;
}

namespace EventClientProcessNetworking_t {
}

namespace EventClientPreSimulate_t {
}

namespace EventClientSimulate_t {
}

namespace EventServerPollNetworking_t {
}

namespace EventServerProcessNetworking_t {
}

namespace EventServerSimulate_t {
}

namespace EventServerPostSimulate_t {
}

namespace EventClientPostSimulate_t {
}

namespace EventClientPauseSimulate_t {
}

namespace EventPostDataUpdate_t {
    constexpr std::ptrdiff_t m_nCount = 0x0;
}

namespace EventPreDataUpdate_t {
    constexpr std::ptrdiff_t m_nCount = 0x0;
}

namespace EventAppShutdown_t {
    constexpr std::ptrdiff_t m_nDummy0 = 0x0;
}

namespace IHandleEntity {
}

namespace CNetworkVarChainer {
    constexpr std::ptrdiff_t m_PathIndex = 0x20;
}

namespace CVariantDefaultAllocator {
}

namespace EntOutput_t {
}

namespace EntComponentInfo_t {
    constexpr std::ptrdiff_t m_pName = 0x0;
    constexpr std::ptrdiff_t m_pCPPClassname = 0x8;
    constexpr std::ptrdiff_t m_pNetworkDataReferencedDescription = 0x10;
    constexpr std::ptrdiff_t m_pNetworkDataReferencedPtrPropDescription = 0x18;
    constexpr std::ptrdiff_t m_nRuntimeIndex = 0x20;
    constexpr std::ptrdiff_t m_nFlags = 0x24;
    constexpr std::ptrdiff_t m_pBaseClassComponentHelper = 0x60;
}

namespace CEntityComponent {
}

namespace EntInput_t {
}

namespace CEntityComponentHelper {
    constexpr std::ptrdiff_t m_flags = 0x8;
    constexpr std::ptrdiff_t m_pInfo = 0x10;
    constexpr std::ptrdiff_t m_nPriority = 0x18;
    constexpr std::ptrdiff_t m_pNext = 0x20;
}

namespace CEntityIdentity {
    constexpr std::ptrdiff_t m_nameStringableIndex = 0x14;
    constexpr std::ptrdiff_t m_name = 0x18;
    constexpr std::ptrdiff_t m_designerName = 0x20;
    constexpr std::ptrdiff_t m_flags = 0x30;
    constexpr std::ptrdiff_t m_worldGroupId = 0x38;
    constexpr std::ptrdiff_t m_fDataObjectTypes = 0x3c;
    constexpr std::ptrdiff_t m_PathIndex = 0x40;
    constexpr std::ptrdiff_t m_pPrev = 0x58;
    constexpr std::ptrdiff_t m_pNext = 0x60;
    constexpr std::ptrdiff_t m_pPrevByClass = 0x68;
    constexpr std::ptrdiff_t m_pNextByClass = 0x70;
}

namespace CEmptyEntityInstance {
}

namespace CEntityInstance {
    constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8;
    constexpr std::ptrdiff_t m_pEntity = 0x10;
    constexpr std::ptrdiff_t m_CScriptComponent = 0x28;
}

namespace CEntityIOOutput {
    constexpr std::ptrdiff_t m_Value = 0x18;
}

namespace CScriptComponent {
    constexpr std::ptrdiff_t m_scriptClassName = 0x30;
}

