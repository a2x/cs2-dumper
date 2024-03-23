/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 23 Mar 2024 05:02:03 +0000
 */

public static class CSSDSEndFrameViewInfo {
    public const nint m_nViewId = 0x0; // uint64_t
    public const nint m_ViewName = 0x8; // CUtlString
}

public static class CSSDSMsg_EndFrame {
    public const nint m_Views = 0x0; // CUtlVector<CSSDSEndFrameViewInfo>
}

public static class CSSDSMsg_LayerBase {
    public const nint m_viewId = 0x0; // SceneViewId_t
    public const nint m_ViewName = 0x10; // CUtlString
    public const nint m_nLayerIndex = 0x18; // int32_t
    public const nint m_nLayerId = 0x20; // uint64_t
    public const nint m_LayerName = 0x28; // CUtlString
    public const nint m_displayText = 0x30; // CUtlString
}

public static class CSSDSMsg_PostLayer { // CSSDSMsg_LayerBase
}

public static class CSSDSMsg_PreLayer { // CSSDSMsg_LayerBase
}

public static class CSSDSMsg_ViewRender {
    public const nint m_viewId = 0x0; // SceneViewId_t
    public const nint m_ViewName = 0x10; // CUtlString
}

public static class CSSDSMsg_ViewTarget {
    public const nint m_Name = 0x0; // CUtlString
    public const nint m_TextureId = 0x8; // uint64_t
    public const nint m_nWidth = 0x10; // int32_t
    public const nint m_nHeight = 0x14; // int32_t
    public const nint m_nRequestedWidth = 0x18; // int32_t
    public const nint m_nRequestedHeight = 0x1C; // int32_t
    public const nint m_nNumMipLevels = 0x20; // int32_t
    public const nint m_nDepth = 0x24; // int32_t
    public const nint m_nMultisampleNumSamples = 0x28; // int32_t
    public const nint m_nFormat = 0x2C; // int32_t
}

public static class CSSDSMsg_ViewTargetList {
    public const nint m_viewId = 0x0; // SceneViewId_t
    public const nint m_ViewName = 0x10; // CUtlString
    public const nint m_Targets = 0x18; // CUtlVector<CSSDSMsg_ViewTarget>
}

public static class SceneViewId_t {
    public const nint m_nViewId = 0x0; // uint64_t
    public const nint m_nFrameCount = 0x8; // uint64_t
}