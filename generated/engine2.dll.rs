#![allow(non_snake_case, non_upper_case_globals)]

// Created using https://github.com/a2x/cs2-dumper
// 2023-10-13 02:10:19.282839400 UTC

pub mod CEntityComponentHelper {
    pub const m_flags: usize = 0x8; // uint32_t
    pub const m_pInfo: usize = 0x10; // EntComponentInfo_t*
    pub const m_nPriority: usize = 0x18; // int32_t
    pub const m_pNext: usize = 0x20; // CEntityComponentHelper*
}

pub mod CEntityIOOutput {
    pub const m_Value: usize = 0x18; // CVariantBase<CVariantDefaultAllocator>
}

pub mod CEntityIdentity {
    pub const m_nameStringableIndex: usize = 0x14; // int32_t
    pub const m_name: usize = 0x18; // CUtlSymbolLarge
    pub const m_designerName: usize = 0x20; // CUtlSymbolLarge
    pub const m_flags: usize = 0x30; // uint32_t
    pub const m_worldGroupId: usize = 0x38; // WorldGroupId_t
    pub const m_fDataObjectTypes: usize = 0x3C; // uint32_t
    pub const m_PathIndex: usize = 0x40; // ChangeAccessorFieldPathIndex_t
    pub const m_pPrev: usize = 0x58; // CEntityIdentity*
    pub const m_pNext: usize = 0x60; // CEntityIdentity*
    pub const m_pPrevByClass: usize = 0x68; // CEntityIdentity*
    pub const m_pNextByClass: usize = 0x70; // CEntityIdentity*
}

pub mod CEntityInstance {
    pub const m_iszPrivateVScripts: usize = 0x8; // CUtlSymbolLarge
    pub const m_pEntity: usize = 0x10; // CEntityIdentity*
    pub const m_CScriptComponent: usize = 0x28; // CScriptComponent*
}

pub mod CNetworkVarChainer {
    pub const m_PathIndex: usize = 0x20; // ChangeAccessorFieldPathIndex_t
}

pub mod CScriptComponent {
    pub const m_scriptClassName: usize = 0x30; // CUtlSymbolLarge
}

pub mod EngineLoopState_t {
    pub const m_nPlatWindowWidth: usize = 0x18; // int32_t
    pub const m_nPlatWindowHeight: usize = 0x1C; // int32_t
    pub const m_nRenderWidth: usize = 0x20; // int32_t
    pub const m_nRenderHeight: usize = 0x24; // int32_t
}

pub mod EntComponentInfo_t {
    pub const m_pName: usize = 0x0; // char*
    pub const m_pCPPClassname: usize = 0x8; // char*
    pub const m_pNetworkDataReferencedDescription: usize = 0x10; // char*
    pub const m_pNetworkDataReferencedPtrPropDescription: usize = 0x18; // char*
    pub const m_nRuntimeIndex: usize = 0x20; // int32_t
    pub const m_nFlags: usize = 0x24; // uint32_t
    pub const m_pBaseClassComponentHelper: usize = 0x60; // CEntityComponentHelper*
}

pub mod EventAdvanceTick_t {
    pub const m_nCurrentTick: usize = 0x30; // int32_t
    pub const m_nCurrentTickThisFrame: usize = 0x34; // int32_t
    pub const m_nTotalTicksThisFrame: usize = 0x38; // int32_t
    pub const m_nTotalTicks: usize = 0x3C; // int32_t
}

pub mod EventAppShutdown_t {
    pub const m_nDummy0: usize = 0x0; // int32_t
}

pub mod EventClientFrameSimulate_t {
    pub const m_LoopState: usize = 0x0; // EngineLoopState_t
    pub const m_flRealTime: usize = 0x28; // float
    pub const m_flFrameTime: usize = 0x2C; // float
}

pub mod EventClientOutput_t {
    pub const m_LoopState: usize = 0x0; // EngineLoopState_t
    pub const m_flRenderTime: usize = 0x28; // float
    pub const m_flRealTime: usize = 0x2C; // float
    pub const m_flRenderFrameTimeUnbounded: usize = 0x30; // float
    pub const m_bRenderOnly: usize = 0x34; // bool
}

pub mod EventClientPollInput_t {
    pub const m_LoopState: usize = 0x0; // EngineLoopState_t
    pub const m_flRealTime: usize = 0x28; // float
}

pub mod EventClientPollNetworking_t {
    pub const m_nTickCount: usize = 0x0; // int32_t
}

pub mod EventClientPostOutput_t {
    pub const m_LoopState: usize = 0x0; // EngineLoopState_t
    pub const m_flRenderTime: usize = 0x28; // double
    pub const m_flRenderFrameTime: usize = 0x30; // float
    pub const m_flRenderFrameTimeUnbounded: usize = 0x34; // float
    pub const m_bRenderOnly: usize = 0x38; // bool
}

pub mod EventClientPreOutput_t {
    pub const m_LoopState: usize = 0x0; // EngineLoopState_t
    pub const m_flRenderTime: usize = 0x28; // double
    pub const m_flRenderFrameTime: usize = 0x30; // double
    pub const m_flRenderFrameTimeUnbounded: usize = 0x38; // double
    pub const m_flRealTime: usize = 0x40; // float
    pub const m_bRenderOnly: usize = 0x44; // bool
}

pub mod EventClientProcessGameInput_t {
    pub const m_LoopState: usize = 0x0; // EngineLoopState_t
    pub const m_flRealTime: usize = 0x28; // float
    pub const m_flFrameTime: usize = 0x2C; // float
}

pub mod EventClientProcessInput_t {
    pub const m_LoopState: usize = 0x0; // EngineLoopState_t
    pub const m_flRealTime: usize = 0x28; // float
}

pub mod EventClientSceneSystemThreadStateChange_t {
    pub const m_bThreadsActive: usize = 0x0; // bool
}

pub mod EventClientSendInput_t {
    pub const m_bFinalClientCommandTick: usize = 0x0; // bool
    pub const m_nAdditionalClientCommandsToCreate: usize = 0x4; // int32_t
}

pub mod EventFrameBoundary_t {
    pub const m_flFrameTime: usize = 0x0; // float
}

pub mod EventPostAdvanceTick_t {
    pub const m_nCurrentTick: usize = 0x30; // int32_t
    pub const m_nCurrentTickThisFrame: usize = 0x34; // int32_t
    pub const m_nTotalTicksThisFrame: usize = 0x38; // int32_t
    pub const m_nTotalTicks: usize = 0x3C; // int32_t
}

pub mod EventPostDataUpdate_t {
    pub const m_nCount: usize = 0x0; // int32_t
}

pub mod EventPreDataUpdate_t {
    pub const m_nCount: usize = 0x0; // int32_t
}

pub mod EventProfileStorageAvailable_t {
    pub const m_nSplitScreenSlot: usize = 0x0; // CSplitScreenSlot
}

pub mod EventSetTime_t {
    pub const m_LoopState: usize = 0x0; // EngineLoopState_t
    pub const m_nClientOutputFrames: usize = 0x28; // int32_t
    pub const m_flRealTime: usize = 0x30; // double
    pub const m_flRenderTime: usize = 0x38; // double
    pub const m_flRenderFrameTime: usize = 0x40; // double
    pub const m_flRenderFrameTimeUnbounded: usize = 0x48; // double
    pub const m_flRenderFrameTimeUnscaled: usize = 0x50; // double
    pub const m_flTickRemainder: usize = 0x58; // double
}

pub mod EventSimpleLoopFrameUpdate_t {
    pub const m_LoopState: usize = 0x0; // EngineLoopState_t
    pub const m_flRealTime: usize = 0x28; // float
    pub const m_flFrameTime: usize = 0x2C; // float
}

pub mod EventSimulate_t {
    pub const m_LoopState: usize = 0x0; // EngineLoopState_t
    pub const m_bFirstTick: usize = 0x28; // bool
    pub const m_bLastTick: usize = 0x29; // bool
}