// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-14 23:58:25.486779500 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: scenesystem.dll
        // Class count: 9
        // Enum count: 3
        pub mod scenesystem_dll {
            // Alignment: 1
            // Member count: 6
            #[repr(u8)]
            pub enum DecalMode_t {
                kDecalInvalid = 0xFF,
                kDecalBlood = 0x0,
                kDecalCloak = 0x1,
                kDecalCloakDamage = 0x2,
                kDecalMax = 0x3
            }
            // Alignment: 1
            // Member count: 4
            #[repr(u8)]
            pub enum DisableShadows_t {
                kDisableShadows_None = 0x0,
                kDisableShadows_All = 0x1,
                kDisableShadows_Baked = 0x2,
                kDisableShadows_Realtime = 0x3
            }
            // Alignment: 4
            // Member count: 6
            #[repr(u32)]
            pub enum ESceneObjectVisualization {
                SCENEOBJECT_VIS_NONE = 0x0,
                SCENEOBJECT_VIS_OBJECT = 0x1,
                SCENEOBJECT_VIS_MATERIAL = 0x2,
                SCENEOBJECT_VIS_TEXTURE_SIZE = 0x3,
                SCENEOBJECT_VIS_LOD = 0x4,
                SCENEOBJECT_VIS_INSTANCING = 0x5
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
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
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SceneViewId_t {
                pub const m_nViewId: usize = 0x0; // uint64
                pub const m_nFrameCount: usize = 0x8; // uint64
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSSDSEndFrameViewInfo {
                pub const m_nViewId: usize = 0x0; // uint64
                pub const m_ViewName: usize = 0x8; // CUtlString
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSSDSMsg_PostLayer {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSSDSMsg_LayerBase {
                pub const m_viewId: usize = 0x0; // SceneViewId_t
                pub const m_ViewName: usize = 0x10; // CUtlString
                pub const m_nLayerId: usize = 0x18; // uint64
                pub const m_LayerName: usize = 0x20; // CUtlString
                pub const m_displayText: usize = 0x28; // CUtlString
            }
            // Parent: None
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
                pub const m_viewId: usize = 0x0; // SceneViewId_t
                pub const m_ViewName: usize = 0x10; // CUtlString
                pub const m_Targets: usize = 0x18; // CUtlVector<CSSDSMsg_ViewTarget>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSSDSMsg_ViewRender {
                pub const m_viewId: usize = 0x0; // SceneViewId_t
                pub const m_ViewName: usize = 0x10; // CUtlString
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
