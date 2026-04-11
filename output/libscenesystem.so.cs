// Generated using https://github.com/a2x/cs2-dumper
// 2026-04-11 10:20:28.886370999 UTC

namespace CS2Dumper.Schemas {
    // Module: libscenesystem.so
    // Classes count: 9
    // Enums count: 0
    public static class LibscenesystemSo {
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // ���x.
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
        // Fields count: 2
        //
        // Metadata:
        // ���x.
        public static class SceneViewId_t {
            public const nint m_nViewId = 0x0; // uint64
            public const nint m_nFrameCount = 0x8; // uint64
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // ���x.
        public static class CSSDSEndFrameViewInfo {
            public const nint m_nViewId = 0x0; // uint64
            public const nint m_ViewName = 0x8; // CUtlString
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CSSDSMsg_PostLayer {
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // ���x.
        public static class CSSDSMsg_LayerBase {
            public const nint m_viewId = 0x0; // SceneViewId_t
            public const nint m_ViewName = 0x10; // CUtlString
            public const nint m_nLayerId = 0x18; // uint64
            public const nint m_LayerName = 0x20; // CUtlString
            public const nint m_displayText = 0x28; // CUtlString
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // ���x.
        // 
        // Invalid
        // 
        // p4�x.
        // @��x.
        // 
        // char
        // 
        // p4�x.
        // @��x.
        // 
        // uint8
        // 
        // p4�x.
        // @��x.
        // 
        // uint16
        // 
        // p4�x.
        // @��x.
        // 
        // uint32
        // 
        // p4�x.
        // @��x.
        // 
        // uint64
        // 
        // p4�x.
        // @��x.
        // 
        // float64
        // 
        // p4�x.
        // @��x.
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // P�k�+
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        // 
        public static class CSSDSMsg_PreLayer {
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // ���x.
        public static class CSSDSMsg_ViewTargetList {
            public const nint m_viewId = 0x0; // SceneViewId_t
            public const nint m_ViewName = 0x10; // CUtlString
            public const nint m_Targets = 0x18; // CUtlVector<CSSDSMsg_ViewTarget>
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // ���x.
        public static class CSSDSMsg_ViewRender {
            public const nint m_viewId = 0x0; // SceneViewId_t
            public const nint m_ViewName = 0x10; // CUtlString
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // ���x.
        public static class CSSDSMsg_EndFrame {
            public const nint m_Views = 0x0; // CUtlVector<CSSDSEndFrameViewInfo>
        }
    }
}
