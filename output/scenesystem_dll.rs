// Generated using https://github.com/a2x/cs2-dumper
// 2026-01-22 12:23:57.753951800 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: scenesystem.dll
        // Class count: 0
        // Enum count: 4
        pub mod scenesystem_dll {
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum ESilhouetteType_t {
                SILHOUETTE_NONE = 0x0,
                SILHOUETTE_LIGHT = 0x1,
                SILHOUETTE_ENVMAP = 0x2,
                SILHOUETTE_LPV = 0x4
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
            // Alignment: 1
            // Member count: 6
            #[repr(u8)]
            pub enum DecalRtEncoding_t {
                kDecalInvalid = 0xFF,
                kDecalMin = 0x0,
                kDecalCloak = 0x1,
                kDecalMax = 0x2
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
        }
    }
}
