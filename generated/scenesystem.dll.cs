public static class CSSDSEndFrameViewInfo {
    public const nint m_nViewId = 0x0;
    public const nint m_ViewName = 0x8;
}

public static class CSSDSMsg_EndFrame {
    public const nint m_Views = 0x0;
}

public static class CSSDSMsg_LayerBase {
    public const nint m_viewId = 0x0;
    public const nint m_ViewName = 0x10;
    public const nint m_nLayerIndex = 0x18;
    public const nint m_nLayerId = 0x20;
    public const nint m_LayerName = 0x28;
    public const nint m_displayText = 0x30;
}

public static class CSSDSMsg_ViewRender {
    public const nint m_viewId = 0x0;
    public const nint m_ViewName = 0x10;
}

public static class CSSDSMsg_ViewTarget {
    public const nint m_Name = 0x0;
    public const nint m_TextureId = 0x8;
    public const nint m_nWidth = 0x10;
    public const nint m_nHeight = 0x14;
    public const nint m_nRequestedWidth = 0x18;
    public const nint m_nRequestedHeight = 0x1C;
    public const nint m_nNumMipLevels = 0x20;
    public const nint m_nDepth = 0x24;
    public const nint m_nMultisampleNumSamples = 0x28;
    public const nint m_nFormat = 0x2C;
}

public static class CSSDSMsg_ViewTargetList {
    public const nint m_viewId = 0x0;
    public const nint m_ViewName = 0x10;
    public const nint m_Targets = 0x18;
}

public static class SceneViewId_t {
    public const nint m_nViewId = 0x0;
    public const nint m_nFrameCount = 0x8;
}