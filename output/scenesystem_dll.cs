// Generated using https://github.com/a2x/cs2-dumper
// 2025-02-05 01:24:08.259372 UTC

namespace CS2Dumper.Schemas {
    // Module: scenesystem.dll
    // Class count: 9
    // Enum count: 1
    public static class ScenesystemDll {
        // Alignment: 1
        // Member count: 4
        public enum DisableShadows_t : byte {
            kDisableShadows_None = 0x0,
            kDisableShadows_All = 0x1,
            kDisableShadows_Baked = 0x2,
            kDisableShadows_Realtime = 0x3
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSSDSMsg_ViewTarget {
            public const nint m_Name = 0x0; // CUtlString
            public const nint m_TextureId = 0x8; // uint64
            public const nint m_nWidth = 0x10; // int32
            public const nint m_nHeight = 0x14; // int32
            public const nint m_nRequestedWidth = 0x18; // int32
            public const nint m_nRequestedHeight = 0x1C; // int32
            public const nint m_nNumMipLevels = 0x20; // int32
            public const nint m_nDepth = 0x24; // int32
            public const nint m_nMultisampleNumSamples = 0x28; // int32
            public const nint m_nFormat = 0x2C; // int32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SceneViewId_t {
            public const nint m_nViewId = 0x0; // uint64
            public const nint m_nFrameCount = 0x8; // uint64
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSSDSEndFrameViewInfo {
            public const nint m_nViewId = 0x0; // uint64
            public const nint m_ViewName = 0x8; // CUtlString
        }
        // Parent: CSSDSMsg_LayerBase
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSSDSMsg_PostLayer {
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSSDSMsg_LayerBase {
            public const nint m_viewId = 0x0; // SceneViewId_t
            public const nint m_ViewName = 0x10; // CUtlString
            public const nint m_nLayerIndex = 0x18; // int32
            public const nint m_nLayerId = 0x20; // uint64
            public const nint m_LayerName = 0x28; // CUtlString
            public const nint m_displayText = 0x30; // CUtlString
        }
        // Parent: CSSDSMsg_LayerBase
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSSDSMsg_PreLayer {
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSSDSMsg_ViewTargetList {
            public const nint m_viewId = 0x0; // SceneViewId_t
            public const nint m_ViewName = 0x10; // CUtlString
            public const nint m_Targets = 0x18; // CUtlVector<CSSDSMsg_ViewTarget>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSSDSMsg_ViewRender {
            public const nint m_viewId = 0x0; // SceneViewId_t
            public const nint m_ViewName = 0x10; // CUtlString
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSSDSMsg_EndFrame {
            public const nint m_Views = 0x0; // CUtlVector<CSSDSEndFrameViewInfo>
        }
    }
}
