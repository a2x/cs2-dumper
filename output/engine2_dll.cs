// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-14 23:58:25.486779500 UTC

namespace CS2Dumper.Schemas {
    // Module: engine2.dll
    // Class count: 48
    // Enum count: 2
    public static class Engine2Dll {
        // Alignment: 4
        // Member count: 3
        public enum EntityDormancyType_t : uint {
            ENTITY_NOT_DORMANT = 0x0,
            ENTITY_DORMANT = 0x1,
            ENTITY_SUSPENDED = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum EntityIOTargetType_t : uint {
            ENTITY_IO_TARGET_INVALID = unchecked((uint)-1),
            ENTITY_IO_TARGET_ENTITYNAME = 0x2,
            ENTITY_IO_TARGET_EHANDLE = 0x6,
            ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME = 0x7
        }
        // Parent: None
        // Field count: 0
        public static class EventClientPostSimulate_t {
        }
        // Parent: None
        // Field count: 3
        public static class EventSimpleLoopFrameUpdate_t {
            public const nint m_LoopState = 0x0; // EngineLoopState_t
            public const nint m_flRealTime = 0x28; // float32
            public const nint m_flFrameTime = 0x2C; // float32
        }
        // Parent: None
        // Field count: 4
        public static class EventPostAdvanceTick_t {
            public const nint m_nCurrentTick = 0x30; // int32
            public const nint m_nCurrentTickThisFrame = 0x34; // int32
            public const nint m_nTotalTicksThisFrame = 0x38; // int32
            public const nint m_nTotalTicks = 0x3C; // int32
        }
        // Parent: 
        // Field count: 1
        public static class CEntityIOOutput {
            public const nint m_Value = 0x18; // CVariantBase<CVariantDefaultAllocator>
        }
        // Parent: None
        // Field count: 1
        public static class EventClientSceneSystemThreadStateChange_t {
            public const nint m_bThreadsActive = 0x0; // bool
        }
        // Parent: None
        // Field count: 5
        public static class EventClientOutput_t {
            public const nint m_LoopState = 0x0; // EngineLoopState_t
            public const nint m_flRenderTime = 0x28; // float32
            public const nint m_flRealTime = 0x2C; // float32
            public const nint m_flRenderFrameTimeUnbounded = 0x30; // float32
            public const nint m_bRenderOnly = 0x34; // bool
        }
        // Parent: None
        // Field count: 0
        public static class EventServerPostSimulate_t {
        }
        // Parent: None
        // Field count: 4
        public static class CEntityComponentHelper {
            public const nint m_flags = 0x8; // uint32
            public const nint m_pInfo = 0x10; // EntComponentInfo_t*
            public const nint m_nPriority = 0x18; // int32
            public const nint m_pNext = 0x20; // CEntityComponentHelper*
        }
        // Parent: None
        // Field count: 1
        public static class GameTime_t {
            public const nint m_Value = 0x0; // float32
        }
        // Parent: None
        // Field count: 0
        public static class EventServerEndAsyncPostTickWork_t {
        }
        // Parent: None
        // Field count: 0
        public static class EventClientAdvanceTick_t {
        }
        // Parent: None
        // Field count: 0
        public static class EntInput_t {
        }
        // Parent: None
        // Field count: 1
        public static class CNetworkVarChainer {
            public const nint m_PathIndex = 0x20; // ChangeAccessorFieldPathIndex_t
        }
        // Parent: None
        // Field count: 0
        public static class EventClientSimulate_t {
        }
        // Parent: None
        // Field count: 5
        public static class EventClientPostOutput_t {
            public const nint m_LoopState = 0x0; // EngineLoopState_t
            public const nint m_flRenderTime = 0x28; // float64
            public const nint m_flRenderFrameTime = 0x30; // float32
            public const nint m_flRenderFrameTimeUnbounded = 0x34; // float32
            public const nint m_bRenderOnly = 0x38; // bool
        }
        // Parent: None
        // Field count: 1
        public static class GameTick_t {
            public const nint m_Value = 0x0; // int32
        }
        // Parent: None
        // Field count: 2
        public static class EventClientPollInput_t {
            public const nint m_LoopState = 0x0; // EngineLoopState_t
            public const nint m_flRealTime = 0x28; // float32
        }
        // Parent: None
        // Field count: 1
        public static class EventPreDataUpdate_t {
            public const nint m_nCount = 0x0; // int32
        }
        // Parent: None
        // Field count: 3
        public static class EventClientProcessGameInput_t {
            public const nint m_LoopState = 0x0; // EngineLoopState_t
            public const nint m_flRealTime = 0x28; // float32
            public const nint m_flFrameTime = 0x2C; // float32
        }
        // Parent: None
        // Field count: 1
        public static class EventFrameBoundary_t {
            public const nint m_flFrameTime = 0x0; // float32
        }
        // Parent: None
        // Field count: 1
        public static class EventAppShutdown_t {
            public const nint m_nDummy0 = 0x0; // int32
        }
        // Parent: None
        // Field count: 0
        public static class EventServerSimulate_t {
        }
        // Parent: None
        // Field count: 0
        public static class EventServerPostAdvanceTick_t {
        }
        // Parent: None
        // Field count: 1
        public static class EventProfileStorageAvailable_t {
            public const nint m_nSplitScreenSlot = 0x0; // CSplitScreenSlot
        }
        // Parent: None
        // Field count: 1
        public static class EventPostDataUpdate_t {
            public const nint m_nCount = 0x0; // int32
        }
        // Parent: None
        // Field count: 0
        public static class EventClientPreSimulate_t {
        }
        // Parent: None
        // Field count: 0
        public static class EventClientPauseSimulate_t {
        }
        // Parent: None
        // Field count: 1
        public static class EventClientProcessNetworking_t {
            public const nint m_nTickCount = 0x0; // int32
        }
        // Parent: None
        // Field count: 4
        public static class EventAdvanceTick_t {
            public const nint m_nCurrentTick = 0x30; // int32
            public const nint m_nCurrentTickThisFrame = 0x34; // int32
            public const nint m_nTotalTicksThisFrame = 0x38; // int32
            public const nint m_nTotalTicks = 0x3C; // int32
        }
        // Parent: None
        // Field count: 0
        public static class EventSplitScreenStateChanged_t {
        }
        // Parent: None
        // Field count: 0
        public static class EventClientPostAdvanceTick_t {
        }
        // Parent: None
        // Field count: 0
        public static class CVariantDefaultAllocator {
        }
        // Parent: None
        // Field count: 0
        public static class EventModInitialized_t {
        }
        // Parent: None
        // Field count: 6
        public static class EventClientPreOutput_t {
            public const nint m_LoopState = 0x0; // EngineLoopState_t
            public const nint m_flRenderTime = 0x28; // float64
            public const nint m_flRenderFrameTime = 0x30; // float64
            public const nint m_flRenderFrameTimeUnbounded = 0x38; // float64
            public const nint m_flRealTime = 0x40; // float32
            public const nint m_bRenderOnly = 0x44; // bool
        }
        // Parent: None
        // Field count: 4
        public static class EventClientFrameSimulate_t {
            public const nint m_LoopState = 0x0; // EngineLoopState_t
            public const nint m_flRealTime = 0x28; // float32
            public const nint m_flFrameTime = 0x2C; // float32
            public const nint m_bScheduleSendTickPacket = 0x30; // bool
        }
        // Parent: None
        // Field count: 0
        public static class EventServerAdvanceTick_t {
        }
        // Parent: None
        // Field count: 8
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
        // Parent: None
        // Field count: 0
        public static class EntOutput_t {
        }
        // Parent: None
        // Field count: 3
        public static class EventSimulate_t {
            public const nint m_LoopState = 0x0; // EngineLoopState_t
            public const nint m_bFirstTick = 0x28; // bool
            public const nint m_bLastTick = 0x29; // bool
        }
        // Parent: None
        // Field count: 0
        public static class EventClientAdvanceNonRenderedFrame_t {
        }
        // Parent: None
        // Field count: 0
        public static class EventServerProcessNetworking_t {
        }
        // Parent: None
        // Field count: 0
        public static class CEmptyEntityInstance {
        }
        // Parent: None
        // Field count: 7
        public static class EntComponentInfo_t {
            public const nint m_pName = 0x0; // char*
            public const nint m_pCPPClassname = 0x8; // char*
            public const nint m_pNetworkDataReferencedDescription = 0x10; // char*
            public const nint m_pNetworkDataReferencedPtrPropDescription = 0x18; // char*
            public const nint m_nRuntimeIndex = 0x20; // int32
            public const nint m_nFlags = 0x24; // uint32
            public const nint m_pBaseClassComponentHelper = 0x60; // CEntityComponentHelper*
        }
        // Parent: None
        // Field count: 4
        public static class EngineLoopState_t {
            public const nint m_nPlatWindowWidth = 0x18; // int32
            public const nint m_nPlatWindowHeight = 0x1C; // int32
            public const nint m_nRenderWidth = 0x20; // int32
            public const nint m_nRenderHeight = 0x24; // int32
        }
        // Parent: None
        // Field count: 1
        public static class EventClientPollNetworking_t {
            public const nint m_nTickCount = 0x0; // int32
        }
        // Parent: None
        // Field count: 0
        public static class EventServerBeginAsyncPostTickWork_t {
        }
        // Parent: None
        // Field count: 4
        public static class EventClientProcessInput_t {
            public const nint m_LoopState = 0x0; // EngineLoopState_t
            public const nint m_flRealTime = 0x28; // float32
            public const nint m_flTickInterval = 0x2C; // float32
            public const nint m_flTickStartTime = 0x30; // float64
        }
        // Parent: None
        // Field count: 0
        public static class EventServerPollNetworking_t {
        }
    }
}
