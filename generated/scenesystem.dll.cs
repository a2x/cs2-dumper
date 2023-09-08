public static class CSSDSEndFrameViewInfo {
    public const ulong m_nViewId = 0x0;
    public const ulong m_ViewName = 0x8;
}

public static class CSSDSMsg_EndFrame {
    public const ulong m_Views = 0x0;
}

public static class CSSDSMsg_LayerBase {
    public const ulong m_viewId = 0x0;
    public const ulong m_ViewName = 0x10;
    public const ulong m_nLayerIndex = 0x18;
    public const ulong m_nLayerId = 0x20;
    public const ulong m_LayerName = 0x28;
    public const ulong m_displayText = 0x30;
}

public static class CSSDSMsg_ViewRender {
    public const ulong m_viewId = 0x0;
    public const ulong m_ViewName = 0x10;
}

public static class CSSDSMsg_ViewTarget {
    public const ulong m_Name = 0x0;
    public const ulong m_TextureId = 0x8;
    public const ulong m_nWidth = 0x10;
    public const ulong m_nHeight = 0x14;
    public const ulong m_nRequestedWidth = 0x18;
    public const ulong m_nRequestedHeight = 0x1c;
    public const ulong m_nNumMipLevels = 0x20;
    public const ulong m_nDepth = 0x24;
    public const ulong m_nMultisampleNumSamples = 0x28;
    public const ulong m_nFormat = 0x2c;
}

public static class CSSDSMsg_ViewTargetList {
    public const ulong m_viewId = 0x0;
    public const ulong m_ViewName = 0x10;
    public const ulong m_Targets = 0x18;
}

public static class SceneViewId_t {
    public const ulong m_nViewId = 0x0;
    public const ulong m_nFrameCount = 0x8;
}