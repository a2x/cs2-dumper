#[allow(non_snake_case, non_upper_case_globals)]
pub mod CSSDSEndFrameViewInfo {
    pub const m_nViewId: usize = 0x0;
    pub const m_ViewName: usize = 0x8;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CSSDSMsg_EndFrame {
    pub const m_Views: usize = 0x0;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CSSDSMsg_LayerBase {
    pub const m_viewId: usize = 0x0;
    pub const m_ViewName: usize = 0x10;
    pub const m_nLayerIndex: usize = 0x18;
    pub const m_nLayerId: usize = 0x20;
    pub const m_LayerName: usize = 0x28;
    pub const m_displayText: usize = 0x30;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CSSDSMsg_ViewRender {
    pub const m_viewId: usize = 0x0;
    pub const m_ViewName: usize = 0x10;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CSSDSMsg_ViewTarget {
    pub const m_Name: usize = 0x0;
    pub const m_TextureId: usize = 0x8;
    pub const m_nWidth: usize = 0x10;
    pub const m_nHeight: usize = 0x14;
    pub const m_nRequestedWidth: usize = 0x18;
    pub const m_nRequestedHeight: usize = 0x1c;
    pub const m_nNumMipLevels: usize = 0x20;
    pub const m_nDepth: usize = 0x24;
    pub const m_nMultisampleNumSamples: usize = 0x28;
    pub const m_nFormat: usize = 0x2c;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod CSSDSMsg_ViewTargetList {
    pub const m_viewId: usize = 0x0;
    pub const m_ViewName: usize = 0x10;
    pub const m_Targets: usize = 0x18;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod SceneViewId_t {
    pub const m_nViewId: usize = 0x0;
    pub const m_nFrameCount: usize = 0x8;
}