// Generated using https://github.com/a2x/cs2-dumper
// 2025-07-29 08:05:49.300075200 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: rendersystemdx11.dll
        // Class count: 3
        // Enum count: 5
        pub mod rendersystemdx11_dll {
            // Alignment: 4
            // Member count: 14
            #[repr(u32)]
            pub enum RenderPrimitiveType_t {
                RENDER_PRIM_POINTS = 0x0,
                RENDER_PRIM_LINES = 0x1,
                RENDER_PRIM_LINES_WITH_ADJACENCY = 0x2,
                RENDER_PRIM_LINE_STRIP = 0x3,
                RENDER_PRIM_LINE_STRIP_WITH_ADJACENCY = 0x4,
                RENDER_PRIM_TRIANGLES = 0x5,
                RENDER_PRIM_TRIANGLES_WITH_ADJACENCY = 0x6,
                RENDER_PRIM_TRIANGLE_STRIP = 0x7,
                RENDER_PRIM_TRIANGLE_STRIP_WITH_ADJACENCY = 0x8,
                RENDER_PRIM_INSTANCED_QUADS = 0x9,
                RENDER_PRIM_HETEROGENOUS = 0xA,
                RENDER_PRIM_COMPUTE_SHADER = 0xB,
                RENDER_PRIM_MESH_SHADER = 0xC,
                RENDER_PRIM_TYPE_COUNT = 0xD
            }
            // Alignment: 4
            // Member count: 12
            #[repr(u32)]
            pub enum RenderBufferFlags_t {
                RENDER_BUFFER_USAGE_VERTEX_BUFFER = 0x1,
                RENDER_BUFFER_USAGE_INDEX_BUFFER = 0x2,
                RENDER_BUFFER_USAGE_SHADER_RESOURCE = 0x4,
                RENDER_BUFFER_USAGE_UNORDERED_ACCESS = 0x8,
                RENDER_BUFFER_BYTEADDRESS_BUFFER = 0x10,
                RENDER_BUFFER_STRUCTURED_BUFFER = 0x20,
                RENDER_BUFFER_UAV_DRAW_INDIRECT_ARGS = 0x100,
                RENDER_BUFFER_ACCELERATION_STRUCTURE = 0x200,
                RENDER_BUFFER_SHADER_BINDING_TABLE = 0x400,
                RENDER_BUFFER_PER_FRAME_WRITE_ONCE = 0x800,
                RENDER_BUFFER_POOL_ALLOCATED = 0x1000,
                RENDER_BUFFER_USAGE_CONDITIONAL_RENDERING = 0x2000
            }
            // Alignment: 1
            // Member count: 8
            #[repr(u8)]
            pub enum RenderMultisampleType_t {
                RENDER_MULTISAMPLE_INVALID = u8::MAX,
                RENDER_MULTISAMPLE_NONE = 0x0,
                RENDER_MULTISAMPLE_2X = 0x1,
                RENDER_MULTISAMPLE_4X = 0x2,
                RENDER_MULTISAMPLE_6X = 0x3,
                RENDER_MULTISAMPLE_8X = 0x4,
                RENDER_MULTISAMPLE_16X = 0x5,
                RENDER_MULTISAMPLE_TYPE_COUNT = 0x6
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum InputLayoutVariation_t {
                INPUT_LAYOUT_VARIATION_DEFAULT = 0x0,
                INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID = 0x1,
                INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID_MORPH_VERT_ID = 0x2,
                INPUT_LAYOUT_VARIATION_MAX = 0x3
            }
            // Alignment: 1
            // Member count: 3
            #[repr(u8)]
            pub enum RenderSlotType_t {
                RENDER_SLOT_INVALID = u8::MAX,
                RENDER_SLOT_PER_VERTEX = 0x0,
                RENDER_SLOT_PER_INSTANCE = 0x1
            }
            // Parent: None
            // Field count: 4
            pub mod VsInputSignatureElement_t {
                pub const m_pName: usize = 0x0; // char[64]
                pub const m_pSemantic: usize = 0x40; // char[64]
                pub const m_pD3DSemanticName: usize = 0x80; // char[64]
                pub const m_nD3DSemanticIndex: usize = 0xC0; // int32
            }
            // Parent: None
            // Field count: 2
            pub mod VsInputSignature_t {
                pub const m_elems: usize = 0x0; // CUtlVector<VsInputSignatureElement_t>
                pub const m_depth_elems: usize = 0x18; // CUtlVector<VsInputSignatureElement_t>
            }
            // Parent: None
            // Field count: 6
            pub mod RenderInputLayoutField_t {
                pub const m_pSemanticName: usize = 0x0; // char[32]
                pub const m_nSemanticIndex: usize = 0x20; // int8
                pub const m_nOffset: usize = 0x28; // int16
                pub const m_nSlot: usize = 0x2A; // int8
                pub const m_nSlotType: usize = 0x2B; // RenderSlotType_t
                pub const m_szShaderSemantic: usize = 0x2C; // char[32]
            }
        }
    }
}
