#pragma once

#include <cstddef>

namespace CEntityComponentHelper {
    constexpr std::ptrdiff_t m_flags = 0x8; // uint32
    constexpr std::ptrdiff_t m_pInfo = 0x10; // EntComponentInfo_t*
    constexpr std::ptrdiff_t m_nPriority = 0x18; // int32
    constexpr std::ptrdiff_t m_pNext = 0x20; // CEntityComponentHelper*
}

namespace CEntityIOOutput {
    constexpr std::ptrdiff_t m_Value = 0x18; // CVariantBase< CVariantDefaultAllocator >
}

namespace CEntityIdentity {
    constexpr std::ptrdiff_t m_nameStringableIndex = 0x14; // int32
    constexpr std::ptrdiff_t m_name = 0x18; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_designerName = 0x20; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flags = 0x30; // uint32
    constexpr std::ptrdiff_t m_worldGroupId = 0x38; // WorldGroupId_t
    constexpr std::ptrdiff_t m_fDataObjectTypes = 0x3C; // uint32
    constexpr std::ptrdiff_t m_PathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
    constexpr std::ptrdiff_t m_pPrev = 0x58; // CEntityIdentity*
    constexpr std::ptrdiff_t m_pNext = 0x60; // CEntityIdentity*
    constexpr std::ptrdiff_t m_pPrevByClass = 0x68; // CEntityIdentity*
    constexpr std::ptrdiff_t m_pNextByClass = 0x70; // CEntityIdentity*
}

namespace CEntityInstance {
    constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_pEntity = 0x10; // CEntityIdentity*
    constexpr std::ptrdiff_t m_CScriptComponent = 0x28; // CScriptComponent*
}

namespace CNetworkVarChainer {
    constexpr std::ptrdiff_t m_PathIndex = 0x20; // ChangeAccessorFieldPathIndex_t
}

namespace CScriptComponent {
    constexpr std::ptrdiff_t m_scriptClassName = 0x30; // CUtlSymbolLarge
}

namespace EngineLoopState_t {
    constexpr std::ptrdiff_t m_nPlatWindowWidth = 0x18; // int32
    constexpr std::ptrdiff_t m_nPlatWindowHeight = 0x1C; // int32
    constexpr std::ptrdiff_t m_nRenderWidth = 0x20; // int32
    constexpr std::ptrdiff_t m_nRenderHeight = 0x24; // int32
}

namespace EntComponentInfo_t {
    constexpr std::ptrdiff_t m_pName = 0x0; // char*
    constexpr std::ptrdiff_t m_pCPPClassname = 0x8; // char*
    constexpr std::ptrdiff_t m_pNetworkDataReferencedDescription = 0x10; // char*
    constexpr std::ptrdiff_t m_pNetworkDataReferencedPtrPropDescription = 0x18; // char*
    constexpr std::ptrdiff_t m_nRuntimeIndex = 0x20; // int32
    constexpr std::ptrdiff_t m_nFlags = 0x24; // uint32
    constexpr std::ptrdiff_t m_pBaseClassComponentHelper = 0x60; // CEntityComponentHelper*
}

namespace EventAdvanceTick_t {
    constexpr std::ptrdiff_t m_nCurrentTick = 0x30; // int32
    constexpr std::ptrdiff_t m_nCurrentTickThisFrame = 0x34; // int32
    constexpr std::ptrdiff_t m_nTotalTicksThisFrame = 0x38; // int32
    constexpr std::ptrdiff_t m_nTotalTicks = 0x3C; // int32
}

namespace EventAppShutdown_t {
    constexpr std::ptrdiff_t m_nDummy0 = 0x0; // int32
}

namespace EventClientFrameSimulate_t {
    constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
    constexpr std::ptrdiff_t m_flRealTime = 0x28; // float32
    constexpr std::ptrdiff_t m_flFrameTime = 0x2C; // float32
}

namespace EventClientOutput_t {
    constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
    constexpr std::ptrdiff_t m_flRenderTime = 0x28; // float32
    constexpr std::ptrdiff_t m_flRealTime = 0x2C; // float32
    constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x30; // float32
    constexpr std::ptrdiff_t m_bRenderOnly = 0x34; // bool
}

namespace EventClientPollInput_t {
    constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
    constexpr std::ptrdiff_t m_flRealTime = 0x28; // float32
}

namespace EventClientPollNetworking_t {
    constexpr std::ptrdiff_t m_nTickCount = 0x0; // int32
}

namespace EventClientPostOutput_t {
    constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
    constexpr std::ptrdiff_t m_flRenderTime = 0x28; // float64
    constexpr std::ptrdiff_t m_flRenderFrameTime = 0x30; // float32
    constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x34; // float32
    constexpr std::ptrdiff_t m_bRenderOnly = 0x38; // bool
}

namespace EventClientPreOutput_t {
    constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
    constexpr std::ptrdiff_t m_flRenderTime = 0x28; // float64
    constexpr std::ptrdiff_t m_flRenderFrameTime = 0x30; // float64
    constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x38; // float64
    constexpr std::ptrdiff_t m_flRealTime = 0x40; // float32
    constexpr std::ptrdiff_t m_bRenderOnly = 0x44; // bool
}

namespace EventClientProcessGameInput_t {
    constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
    constexpr std::ptrdiff_t m_flRealTime = 0x28; // float32
    constexpr std::ptrdiff_t m_flFrameTime = 0x2C; // float32
}

namespace EventClientProcessInput_t {
    constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
    constexpr std::ptrdiff_t m_flRealTime = 0x28; // float32
}

namespace EventClientSceneSystemThreadStateChange_t {
    constexpr std::ptrdiff_t m_bThreadsActive = 0x0; // bool
}

namespace EventClientSendInput_t {
    constexpr std::ptrdiff_t m_bFinalClientCommandTick = 0x0; // bool
    constexpr std::ptrdiff_t m_nAdditionalClientCommandsToCreate = 0x4; // int32
}

namespace EventFrameBoundary_t {
    constexpr std::ptrdiff_t m_flFrameTime = 0x0; // float32
}

namespace EventPostAdvanceTick_t {
    constexpr std::ptrdiff_t m_nCurrentTick = 0x30; // int32
    constexpr std::ptrdiff_t m_nCurrentTickThisFrame = 0x34; // int32
    constexpr std::ptrdiff_t m_nTotalTicksThisFrame = 0x38; // int32
    constexpr std::ptrdiff_t m_nTotalTicks = 0x3C; // int32
}

namespace EventPostDataUpdate_t {
    constexpr std::ptrdiff_t m_nCount = 0x0; // int32
}

namespace EventPreDataUpdate_t {
    constexpr std::ptrdiff_t m_nCount = 0x0; // int32
}

namespace EventProfileStorageAvailable_t {
    constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x0; // CSplitScreenSlot
}

namespace EventSetTime_t {
    constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
    constexpr std::ptrdiff_t m_nClientOutputFrames = 0x28; // int32
    constexpr std::ptrdiff_t m_flRealTime = 0x30; // float64
    constexpr std::ptrdiff_t m_flRenderTime = 0x38; // float64
    constexpr std::ptrdiff_t m_flRenderFrameTime = 0x40; // float64
    constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x48; // float64
    constexpr std::ptrdiff_t m_flRenderFrameTimeUnscaled = 0x50; // float64
    constexpr std::ptrdiff_t m_flTickRemainder = 0x58; // float64
}

namespace EventSimpleLoopFrameUpdate_t {
    constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
    constexpr std::ptrdiff_t m_flRealTime = 0x28; // float32
    constexpr std::ptrdiff_t m_flFrameTime = 0x2C; // float32
}

namespace EventSimulate_t {
    constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
    constexpr std::ptrdiff_t m_bFirstTick = 0x28; // bool
    constexpr std::ptrdiff_t m_bLastTick = 0x29; // bool
}