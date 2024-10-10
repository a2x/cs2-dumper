// Generated using https://github.com/a2x/cs2-dumper
// 2024-10-10 00:00:51.448403700 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: scenesystem.dll
        // Class count: 9
        // Enum count: 1
        pub mod scenesystem_dll {
            // Alignment: 1
            // Member count: 4
            #[repr(u8)]
            pub enum DisableShadows_t {
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
            pub mod CSSDSMsg_ViewTarget {
                pub const m_Name: usize = 0x0; // 
                pub const m_TextureId: usize = 0x8; // 
                pub const m_nWidth: usize = 0x10; // 
                pub const m_nHeight: usize = 0x14; // 
                pub const m_nRequestedWidth: usize = 0x18; // 
                pub const m_nRequestedHeight: usize = 0x1C; // 
                pub const m_nNumMipLevels: usize = 0x20; // 
                pub const m_nDepth: usize = 0x24; // 
                pub const m_nMultisampleNumSamples: usize = 0x28; // 
                pub const m_nFormat: usize = 0x2C; // 
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SceneViewId_t {
                pub const m_nViewId: usize = 0x0; // 
                pub const m_nFrameCount: usize = 0x8; // 
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSSDSEndFrameViewInfo {
                pub const m_nViewId: usize = 0x0; // 
                pub const m_ViewName: usize = 0x8; // 
            }
            // Parent: CSSDSMsg_LayerBase
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSSDSMsg_PostLayer {
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSSDSMsg_LayerBase {
                pub const m_viewId: usize = 0x0; // 
                pub const m_ViewName: usize = 0x10; // 
                pub const m_nLayerIndex: usize = 0x18; // 
                pub const m_nLayerId: usize = 0x20; // 
                pub const m_LayerName: usize = 0x28; // 
                pub const m_displayText: usize = 0x30; // 
            }
            // Parent: CSSDSMsg_LayerBase
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSSDSMsg_PreLayer {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSSDSMsg_ViewTargetList {
                pub const m_viewId: usize = 0x0; // 
                pub const m_ViewName: usize = 0x10; // 
                pub const m_Targets: usize = 0x18; // CUtlVector<CSSDSMsg_ViewTarget>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSSDSMsg_ViewRender {
                pub const m_viewId: usize = 0x0; // 
                pub const m_ViewName: usize = 0x10; // 
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSSDSMsg_EndFrame {
                pub const m_Views: usize = 0x0; // CUtlVector<CSSDSEndFrameViewInfo>
            }
        }
    }
}
