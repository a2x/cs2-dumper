// Generated using https://github.com/a2x/cs2-dumper
// 2026-01-22 12:23:57.753951800 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: worldrenderer.dll
        // Class count: 4
        // Enum count: 3
        pub mod worldrenderer_dll {
            // Alignment: 1
            // Member count: 2
            #[repr(u8)]
            pub enum RTProxyInstanceFlags_t {
                RTPROXY_INSTANCE_FLAG_NONE = 0x0,
                RTPROXY_INSTANCE_UNIQUE_MESH = 0x1
            }
            // Alignment: 4
            // Member count: 15
            #[repr(u32)]
            pub enum ObjectTypeFlags_t {
                OBJECT_TYPE_NONE = 0x0,
                OBJECT_TYPE_MODEL = 0x8,
                OBJECT_TYPE_BLOCK_LIGHT = 0x10,
                OBJECT_TYPE_NO_SHADOWS = 0x20,
                OBJECT_TYPE_WORLDSPACE_TEXURE_BLEND = 0x40,
                OBJECT_TYPE_DISABLED_IN_LOW_QUALITY = 0x80,
                OBJECT_TYPE_NO_SUN_SHADOWS = 0x100,
                OBJECT_TYPE_RENDER_WITH_DYNAMIC = 0x200,
                OBJECT_TYPE_RENDER_TO_CUBEMAPS = 0x400,
                OBJECT_TYPE_MODEL_HAS_LODS = 0x800,
                OBJECT_TYPE_OVERLAY = 0x2000,
                OBJECT_TYPE_PRECOMPUTED_VISMEMBERS = 0x4000,
                OBJECT_TYPE_STATIC_CUBE_MAP = 0x8000,
                OBJECT_TYPE_DISABLE_VIS_CULLING = 0x10000,
                OBJECT_TYPE_BAKED_GEOMETRY = 0x20000
            }
            // Alignment: 1
            // Member count: 4
            #[repr(u8)]
            pub enum AggregateInstanceStream_t {
                AGGREGATE_INSTANCE_STREAM_NONE = 0x0,
                AGGREGATE_INSTANCE_STREAM_LIGHTMAPUV_UNORM16 = 0x1,
                AGGREGATE_INSTANCE_STREAM_VERTEXTINT_UNORM8 = 0x2,
                AGGREGATE_INSTANCE_STREAM_VERTEXBLEND_UNORM8 = 0x4
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_pEntity (CEntityIdentity*)
            // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
            pub mod CEntityInstance {
                pub const m_iszPrivateVScripts: usize = 0x8; // CUtlSymbolLarge
                pub const m_pEntity: usize = 0x10; // CEntityIdentity*
                pub const m_CScriptComponent: usize = 0x30; // CScriptComponent*
            }
            // Parent: 
            // Field count: 0
            pub mod CEntityComponent {
            }
            // Parent: CEntityComponent
            // Field count: 1
            pub mod CScriptComponent {
                pub const m_scriptClassName: usize = 0x30; // CUtlSymbolLarge
            }
            // Parent: 
            // Field count: 12
            //
            // Metadata:
            // NetworkVarNames: m_nameStringableIndex (int32)
            pub mod CEntityIdentity {
                pub const m_nameStringableIndex: usize = 0x14; // int32
                pub const m_name: usize = 0x18; // CUtlSymbolLarge
                pub const m_designerName: usize = 0x20; // CUtlSymbolLarge
                pub const m_flags: usize = 0x30; // uint32
                pub const m_worldGroupId: usize = 0x38; // WorldGroupId_t
                pub const m_fDataObjectTypes: usize = 0x3C; // uint32
                pub const m_PathIndex: usize = 0x40; // ChangeAccessorFieldPathIndex_t
                pub const m_pAttributes: usize = 0x48; // CEntityAttributeTable*
                pub const m_pPrev: usize = 0x50; // CEntityIdentity*
                pub const m_pNext: usize = 0x58; // CEntityIdentity*
                pub const m_pPrevByClass: usize = 0x60; // CEntityIdentity*
                pub const m_pNextByClass: usize = 0x68; // CEntityIdentity*
            }
        }
    }
}
