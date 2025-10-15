// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-14 23:58:25.486779500 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: rendersystemdx11.dll
        // Class count: 8
        // Enum count: 8
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
            // Member count: 13
            #[repr(u32)]
            pub enum RenderBufferFlags_t {
                RENDER_BUFFER_USAGE_NONE = 0x0,
                RENDER_BUFFER_USAGE_VERTEX_BUFFER = 0x1,
                RENDER_BUFFER_USAGE_INDEX_BUFFER = 0x2,
                RENDER_BUFFER_USAGE_SHADER_RESOURCE = 0x4,
                RENDER_BUFFER_USAGE_UNORDERED_ACCESS = 0x8,
                RENDER_BUFFER_BYTEADDRESS_BUFFER = 0x10,
                RENDER_BUFFER_STRUCTURED_BUFFER = 0x20,
                RENDER_BUFFER_UAV_DRAW_INDIRECT_ARGS = 0x100,
                RENDER_BUFFER_ACCELERATION_STRUCTURE = 0x200,
                RENDER_BUFFER_SHADER_BINDING_TABLE = 0x400,
                RENDER_BUFFER_POOL_ALLOCATED = 0x800,
                RENDER_BUFFER_USAGE_CONDITIONAL_RENDERING = 0x1000,
                RENDER_BUFFER_IMMOVABLE_ALLOCATION = 0x2000
            }
            // Alignment: 1
            // Member count: 3
            #[repr(u8)]
            pub enum RsCullMode_t {
                RS_CULL_NONE = 0x0,
                RS_CULL_BACK = 0x1,
                RS_CULL_FRONT = 0x2
            }
            // Alignment: 1
            // Member count: 8
            #[repr(u8)]
            pub enum RsComparison_t {
                RS_CMP_NEVER = 0x0,
                RS_CMP_LESS = 0x1,
                RS_CMP_EQUAL = 0x2,
                RS_CMP_LESS_EQUAL = 0x3,
                RS_CMP_GREATER = 0x4,
                RS_CMP_NOT_EQUAL = 0x5,
                RS_CMP_GREATER_EQUAL = 0x6,
                RS_CMP_ALWAYS = 0x7
            }
            // Alignment: 1
            // Member count: 2
            #[repr(u8)]
            pub enum RsFillMode_t {
                RS_FILL_SOLID = 0x0,
                RS_FILL_WIREFRAME = 0x1
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
            // Alignment: 1
            // Member count: 4
            #[repr(u8)]
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
            pub mod RsDepthStencilStateDesc_t {
                pub const m_bDepthTestEnable: usize = 0x0; // bitfield:1
                pub const m_bDepthWriteEnable: usize = 0x0; // bitfield:1
                pub const m_depthFunc: usize = 0x1; // RsComparison_t
                pub const m_stencilState: usize = 0x2; // RsStencilStateDesc_t
            }
            // Parent: None
            // Field count: 1
            pub mod SheetSequenceIntegerId_t {
                pub const m_Value: usize = 0x0; // uint32
            }
            // Parent: None
            // Field count: 11
            pub mod RsBlendStateDesc_t {
                pub const m_srcBlendBits: usize = 0x0; // uint32
                pub const m_destBlendBits: usize = 0x4; // uint32
                pub const m_srcBlendAlphaBits: usize = 0x8; // uint32
                pub const m_destBlendAlphaBits: usize = 0xC; // uint32
                pub const m_renderTargetWriteMaskBits: usize = 0x10; // uint32
                pub const m_blendOpBits: usize = 0x0; // bitfield:30
                pub const m_bAlphaToCoverageEnable: usize = 0x0; // bitfield:1
                pub const m_bIndependentBlendEnable: usize = 0x0; // bitfield:1
                pub const m_blendOpAlphaBits: usize = 0x18; // uint32
                pub const m_blendEnableBits: usize = 0x1C; // uint8
                pub const m_srgbWriteEnableBits: usize = 0x1D; // uint8
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
            // Field count: 7
            pub mod RsRasterizerStateDesc_t {
                pub const m_nFillMode: usize = 0x0; // RsFillMode_t
                pub const m_nCullMode: usize = 0x1; // RsCullMode_t
                pub const m_bDepthClipEnable: usize = 0x2; // bool
                pub const m_bMultisampleEnable: usize = 0x3; // bool
                pub const m_nDepthBias: usize = 0x4; // int32
                pub const m_flDepthBiasClamp: usize = 0x8; // float32
                pub const m_flSlopeScaledDepthBias: usize = 0xC; // float32
            }
            // Parent: None
            // Field count: 11
            pub mod RsStencilStateDesc_t {
                pub const m_bStencilEnable: usize = 0x0; // bitfield:1
                pub const m_frontStencilFailOp: usize = 0x0; // bitfield:3
                pub const m_frontStencilDepthFailOp: usize = 0x0; // bitfield:3
                pub const m_frontStencilPassOp: usize = 0x0; // bitfield:3
                pub const m_frontStencilFunc: usize = 0x0; // bitfield:3
                pub const m_backStencilFailOp: usize = 0x0; // bitfield:3
                pub const m_backStencilDepthFailOp: usize = 0x0; // bitfield:3
                pub const m_backStencilPassOp: usize = 0x0; // bitfield:3
                pub const m_backStencilFunc: usize = 0x0; // bitfield:3
                pub const m_nStencilReadMask: usize = 0x4; // uint8
                pub const m_nStencilWriteMask: usize = 0x5; // uint8
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
