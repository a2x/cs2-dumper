#![allow(non_snake_case, non_upper_case_globals)]

pub mod CSSDSEndFrameViewInfo {
    pub const m_nViewId: usize = 0x0; // uint64
    pub const m_ViewName: usize = 0x8; // CUtlString
}

pub mod CSSDSMsg_EndFrame {
    pub const m_Views: usize = 0x0; // CUtlVector< CSSDSEndFrameViewInfo >
}

pub mod CSSDSMsg_LayerBase {
    pub const m_viewId: usize = 0x0; // SceneViewId_t
    pub const m_ViewName: usize = 0x10; // CUtlString
    pub const m_nLayerIndex: usize = 0x18; // int32
    pub const m_nLayerId: usize = 0x20; // uint64
    pub const m_LayerName: usize = 0x28; // CUtlString
    pub const m_displayText: usize = 0x30; // CUtlString
}

pub mod CSSDSMsg_ViewRender {
    pub const m_viewId: usize = 0x0; // SceneViewId_t
    pub const m_ViewName: usize = 0x10; // CUtlString
}

pub mod CSSDSMsg_ViewTarget {
    pub const m_Name: usize = 0x0; // CUtlString
    pub const m_TextureId: usize = 0x8; // uint64
    pub const m_nWidth: usize = 0x10; // int32
    pub const m_nHeight: usize = 0x14; // int32
    pub const m_nRequestedWidth: usize = 0x18; // int32
    pub const m_nRequestedHeight: usize = 0x1C; // int32
    pub const m_nNumMipLevels: usize = 0x20; // int32
    pub const m_nDepth: usize = 0x24; // int32
    pub const m_nMultisampleNumSamples: usize = 0x28; // int32
    pub const m_nFormat: usize = 0x2C; // int32
}

pub mod CSSDSMsg_ViewTargetList {
    pub const m_viewId: usize = 0x0; // SceneViewId_t
    pub const m_ViewName: usize = 0x10; // CUtlString
    pub const m_Targets: usize = 0x18; // CUtlVector< CSSDSMsg_ViewTarget >
}

pub mod SceneViewId_t {
    pub const m_nViewId: usize = 0x0; // uint64
    pub const m_nFrameCount: usize = 0x8; // uint64
}