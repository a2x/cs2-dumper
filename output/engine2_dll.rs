// Generated using https://github.com/a2x/cs2-dumper
// 2024-08-08 22:44:32.016601800 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: engine2.dll
        // Classes count: 44
        // Enums count: 4
        pub mod engine2_dll {
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum EntityDormancyType_t {
                ENTITY_NOT_DORMANT = 0x0,
                ENTITY_DORMANT = 0x1,
                ENTITY_SUSPENDED = 0x2
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum EntityIOTargetType_t {
                ENTITY_IO_TARGET_INVALID = u32::MAX,
                ENTITY_IO_TARGET_ENTITYNAME = 0x2,
                ENTITY_IO_TARGET_EHANDLE = 0x6,
                ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME = 0x7
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum SpawnDebugOverrideState_t {
                SPAWN_DEBUG_OVERRIDE_NONE = 0x0,
                SPAWN_DEBUG_OVERRIDE_FORCE_ENABLED = 0x1,
                SPAWN_DEBUG_OVERRIDE_FORCE_DISABLED = 0x2
            }
            // Alignment: 4
            // Member count: 5
            #[repr(u32)]
            pub enum SpawnDebugRestrictionOverrideState_t {
                SPAWN_DEBUG_RESTRICT_NONE = 0x0,
                SPAWN_DEBUG_RESTRICT_IGNORE_MANAGER_DISTANCE_REQS = 0x1,
                SPAWN_DEBUG_RESTRICT_IGNORE_TEMPLATE_DISTANCE_LOS_REQS = 0x2,
                SPAWN_DEBUG_RESTRICT_IGNORE_TEMPLATE_COOLDOWN_LIMITS = 0x4,
                SPAWN_DEBUG_RESTRICT_IGNORE_TARGET_COOLDOWN_LIMITS = 0x8
            }
            // Parent: EventSimulate_t
            // Field count: 0
            pub mod EventClientPostSimulate_t {
            }
            // Parent: None
            // Field count: 3
            pub mod EventSimpleLoopFrameUpdate_t {
                pub const m_LoopState: usize = 0x0; // 
                pub const m_flRealTime: usize = 0x28; // 
                pub const m_flFrameTime: usize = 0x2C; // 
            }
            // Parent: EventSimulate_t
            // Field count: 4
            pub mod EventPostAdvanceTick_t {
                pub const m_nCurrentTick: usize = 0x30; // 
                pub const m_nCurrentTickThisFrame: usize = 0x34; // 
                pub const m_nTotalTicksThisFrame: usize = 0x38; // 
                pub const m_nTotalTicks: usize = 0x3C; // 
            }
            // Parent: None
            // Field count: 1
            pub mod CEntityIOOutput {
                pub const m_Value: usize = 0x18; // CVariantBase<CVariantDefaultAllocator>
            }
            // Parent: None
            // Field count: 1
            pub mod EventClientSceneSystemThreadStateChange_t {
                pub const m_bThreadsActive: usize = 0x0; // 
            }
            // Parent: None
            // Field count: 5
            pub mod EventClientOutput_t {
                pub const m_LoopState: usize = 0x0; // 
                pub const m_flRenderTime: usize = 0x28; // 
                pub const m_flRealTime: usize = 0x2C; // 
                pub const m_flRenderFrameTimeUnbounded: usize = 0x30; // 
                pub const m_bRenderOnly: usize = 0x34; // 
            }
            // Parent: EventSimulate_t
            // Field count: 0
            pub mod EventServerPostSimulate_t {
            }
            // Parent: None
            // Field count: 4
            pub mod CEntityComponentHelper {
                pub const m_flags: usize = 0x8; // 
                pub const m_pInfo: usize = 0x10; // 
                pub const m_nPriority: usize = 0x18; // 
                pub const m_pNext: usize = 0x20; // 
            }
            // Parent: EventAdvanceTick_t
            // Field count: 0
            pub mod EventClientAdvanceTick_t {
            }
            // Parent: None
            // Field count: 0
            pub mod EntInput_t {
            }
            // Parent: None
            // Field count: 1
            pub mod CNetworkVarChainer {
                pub const m_PathIndex: usize = 0x20; // 
            }
            // Parent: EventSimulate_t
            // Field count: 0
            pub mod EventClientSimulate_t {
            }
            // Parent: None
            // Field count: 5
            pub mod EventClientPostOutput_t {
                pub const m_LoopState: usize = 0x0; // 
                pub const m_flRenderTime: usize = 0x28; // 
                pub const m_flRenderFrameTime: usize = 0x30; // 
                pub const m_flRenderFrameTimeUnbounded: usize = 0x34; // 
                pub const m_bRenderOnly: usize = 0x38; // 
            }
            // Parent: None
            // Field count: 2
            pub mod EventClientPollInput_t {
                pub const m_LoopState: usize = 0x0; // 
                pub const m_flRealTime: usize = 0x28; // 
            }
            // Parent: None
            // Field count: 1
            pub mod EventPreDataUpdate_t {
                pub const m_nCount: usize = 0x0; // 
            }
            // Parent: None
            // Field count: 3
            pub mod EventClientProcessGameInput_t {
                pub const m_LoopState: usize = 0x0; // 
                pub const m_flRealTime: usize = 0x28; // 
                pub const m_flFrameTime: usize = 0x2C; // 
            }
            // Parent: None
            // Field count: 1
            pub mod EventFrameBoundary_t {
                pub const m_flFrameTime: usize = 0x0; // 
            }
            // Parent: None
            // Field count: 1
            pub mod EventAppShutdown_t {
                pub const m_nDummy0: usize = 0x0; // 
            }
            // Parent: EventSimulate_t
            // Field count: 0
            pub mod EventServerSimulate_t {
            }
            // Parent: EventPostAdvanceTick_t
            // Field count: 0
            pub mod EventServerPostAdvanceTick_t {
            }
            // Parent: None
            // Field count: 1
            pub mod EventProfileStorageAvailable_t {
                pub const m_nSplitScreenSlot: usize = 0x0; // 
            }
            // Parent: None
            // Field count: 1
            pub mod EventPostDataUpdate_t {
                pub const m_nCount: usize = 0x0; // 
            }
            // Parent: EventSimulate_t
            // Field count: 0
            pub mod EventClientPreSimulate_t {
            }
            // Parent: EventSimulate_t
            // Field count: 0
            pub mod EventClientPauseSimulate_t {
            }
            // Parent: None
            // Field count: 0
            pub mod EventClientProcessNetworking_t {
            }
            // Parent: EventSimulate_t
            // Field count: 4
            pub mod EventAdvanceTick_t {
                pub const m_nCurrentTick: usize = 0x30; // 
                pub const m_nCurrentTickThisFrame: usize = 0x34; // 
                pub const m_nTotalTicksThisFrame: usize = 0x38; // 
                pub const m_nTotalTicks: usize = 0x3C; // 
            }
            // Parent: None
            // Field count: 0
            pub mod EventSplitScreenStateChanged_t {
            }
            // Parent: EventPostAdvanceTick_t
            // Field count: 0
            pub mod EventClientPostAdvanceTick_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CVariantDefaultAllocator {
            }
            // Parent: None
            // Field count: 0
            pub mod EventModInitialized_t {
            }
            // Parent: None
            // Field count: 6
            pub mod EventClientPreOutput_t {
                pub const m_LoopState: usize = 0x0; // 
                pub const m_flRenderTime: usize = 0x28; // 
                pub const m_flRenderFrameTime: usize = 0x30; // 
                pub const m_flRenderFrameTimeUnbounded: usize = 0x38; // 
                pub const m_flRealTime: usize = 0x40; // 
                pub const m_bRenderOnly: usize = 0x44; // 
            }
            // Parent: None
            // Field count: 4
            pub mod EventClientFrameSimulate_t {
                pub const m_LoopState: usize = 0x0; // 
                pub const m_flRealTime: usize = 0x28; // 
                pub const m_flFrameTime: usize = 0x2C; // 
                pub const m_bScheduleSendTickPacket: usize = 0x30; // 
            }
            // Parent: EventAdvanceTick_t
            // Field count: 0
            pub mod EventServerAdvanceTick_t {
            }
            // Parent: None
            // Field count: 8
            pub mod EventSetTime_t {
                pub const m_LoopState: usize = 0x0; // 
                pub const m_nClientOutputFrames: usize = 0x28; // 
                pub const m_flRealTime: usize = 0x30; // 
                pub const m_flRenderTime: usize = 0x38; // 
                pub const m_flRenderFrameTime: usize = 0x40; // 
                pub const m_flRenderFrameTimeUnbounded: usize = 0x48; // 
                pub const m_flRenderFrameTimeUnscaled: usize = 0x50; // 
                pub const m_flTickRemainder: usize = 0x58; // 
            }
            // Parent: None
            // Field count: 0
            pub mod EntOutput_t {
            }
            // Parent: None
            // Field count: 3
            pub mod EventSimulate_t {
                pub const m_LoopState: usize = 0x0; // 
                pub const m_bFirstTick: usize = 0x28; // 
                pub const m_bLastTick: usize = 0x29; // 
            }
            // Parent: None
            // Field count: 0
            pub mod EventClientAdvanceNonRenderedFrame_t {
            }
            // Parent: EventSimulate_t
            // Field count: 0
            pub mod EventServerProcessNetworking_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CEmptyEntityInstance {
            }
            // Parent: None
            // Field count: 7
            pub mod EntComponentInfo_t {
                pub const m_pName: usize = 0x0; // 
                pub const m_pCPPClassname: usize = 0x8; // 
                pub const m_pNetworkDataReferencedDescription: usize = 0x10; // 
                pub const m_pNetworkDataReferencedPtrPropDescription: usize = 0x18; // 
                pub const m_nRuntimeIndex: usize = 0x20; // 
                pub const m_nFlags: usize = 0x24; // 
                pub const m_pBaseClassComponentHelper: usize = 0x60; // 
            }
            // Parent: None
            // Field count: 4
            pub mod EngineLoopState_t {
                pub const m_nPlatWindowWidth: usize = 0x18; // 
                pub const m_nPlatWindowHeight: usize = 0x1C; // 
                pub const m_nRenderWidth: usize = 0x20; // 
                pub const m_nRenderHeight: usize = 0x24; // 
            }
            // Parent: None
            // Field count: 1
            pub mod EventClientPollNetworking_t {
                pub const m_nTickCount: usize = 0x0; // 
            }
            // Parent: None
            // Field count: 4
            pub mod EventClientProcessInput_t {
                pub const m_LoopState: usize = 0x0; // 
                pub const m_flRealTime: usize = 0x28; // 
                pub const m_flTickInterval: usize = 0x2C; // 
                pub const m_flTickStartTime: usize = 0x30; // 
            }
            // Parent: EventSimulate_t
            // Field count: 0
            pub mod EventServerPollNetworking_t {
            }
        }
    }
}
