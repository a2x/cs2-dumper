// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-14 23:58:25.486779500 UTC

namespace CS2Dumper.Schemas {
    // Module: rendersystemdx11.dll
    // Class count: 8
    // Enum count: 8
    public static class Rendersystemdx11Dll {
        // Alignment: 4
        // Member count: 14
        public enum RenderPrimitiveType_t : uint {
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
        public enum RenderBufferFlags_t : uint {
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
        public enum RsCullMode_t : byte {
            RS_CULL_NONE = 0x0,
            RS_CULL_BACK = 0x1,
            RS_CULL_FRONT = 0x2
        }
        // Alignment: 1
        // Member count: 8
        public enum RsComparison_t : byte {
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
        public enum RsFillMode_t : byte {
            RS_FILL_SOLID = 0x0,
            RS_FILL_WIREFRAME = 0x1
        }
        // Alignment: 1
        // Member count: 8
        public enum RenderMultisampleType_t : byte {
            RENDER_MULTISAMPLE_INVALID = unchecked((byte)-1),
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
        public enum InputLayoutVariation_t : byte {
            INPUT_LAYOUT_VARIATION_DEFAULT = 0x0,
            INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID = 0x1,
            INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID_MORPH_VERT_ID = 0x2,
            INPUT_LAYOUT_VARIATION_MAX = 0x3
        }
        // Alignment: 1
        // Member count: 3
        public enum RenderSlotType_t : byte {
            RENDER_SLOT_INVALID = unchecked((byte)-1),
            RENDER_SLOT_PER_VERTEX = 0x0,
            RENDER_SLOT_PER_INSTANCE = 0x1
        }
        // Parent: None
        // Field count: 4
        public static class RsDepthStencilStateDesc_t {
            public const nint m_bDepthTestEnable = 0x0; // bitfield:1
            public const nint m_bDepthWriteEnable = 0x0; // bitfield:1
            public const nint m_depthFunc = 0x1; // RsComparison_t
            public const nint m_stencilState = 0x2; // RsStencilStateDesc_t
        }
        // Parent: None
        // Field count: 1
        public static class SheetSequenceIntegerId_t {
            public const nint m_Value = 0x0; // uint32
        }
        // Parent: None
        // Field count: 11
        public static class RsBlendStateDesc_t {
            public const nint m_srcBlendBits = 0x0; // uint32
            public const nint m_destBlendBits = 0x4; // uint32
            public const nint m_srcBlendAlphaBits = 0x8; // uint32
            public const nint m_destBlendAlphaBits = 0xC; // uint32
            public const nint m_renderTargetWriteMaskBits = 0x10; // uint32
            public const nint m_blendOpBits = 0x0; // bitfield:30
            public const nint m_bAlphaToCoverageEnable = 0x0; // bitfield:1
            public const nint m_bIndependentBlendEnable = 0x0; // bitfield:1
            public const nint m_blendOpAlphaBits = 0x18; // uint32
            public const nint m_blendEnableBits = 0x1C; // uint8
            public const nint m_srgbWriteEnableBits = 0x1D; // uint8
        }
        // Parent: None
        // Field count: 4
        public static class VsInputSignatureElement_t {
            public const nint m_pName = 0x0; // char[64]
            public const nint m_pSemantic = 0x40; // char[64]
            public const nint m_pD3DSemanticName = 0x80; // char[64]
            public const nint m_nD3DSemanticIndex = 0xC0; // int32
        }
        // Parent: None
        // Field count: 7
        public static class RsRasterizerStateDesc_t {
            public const nint m_nFillMode = 0x0; // RsFillMode_t
            public const nint m_nCullMode = 0x1; // RsCullMode_t
            public const nint m_bDepthClipEnable = 0x2; // bool
            public const nint m_bMultisampleEnable = 0x3; // bool
            public const nint m_nDepthBias = 0x4; // int32
            public const nint m_flDepthBiasClamp = 0x8; // float32
            public const nint m_flSlopeScaledDepthBias = 0xC; // float32
        }
        // Parent: None
        // Field count: 11
        public static class RsStencilStateDesc_t {
            public const nint m_bStencilEnable = 0x0; // bitfield:1
            public const nint m_frontStencilFailOp = 0x0; // bitfield:3
            public const nint m_frontStencilDepthFailOp = 0x0; // bitfield:3
            public const nint m_frontStencilPassOp = 0x0; // bitfield:3
            public const nint m_frontStencilFunc = 0x0; // bitfield:3
            public const nint m_backStencilFailOp = 0x0; // bitfield:3
            public const nint m_backStencilDepthFailOp = 0x0; // bitfield:3
            public const nint m_backStencilPassOp = 0x0; // bitfield:3
            public const nint m_backStencilFunc = 0x0; // bitfield:3
            public const nint m_nStencilReadMask = 0x4; // uint8
            public const nint m_nStencilWriteMask = 0x5; // uint8
        }
        // Parent: None
        // Field count: 2
        public static class VsInputSignature_t {
            public const nint m_elems = 0x0; // CUtlVector<VsInputSignatureElement_t>
            public const nint m_depth_elems = 0x18; // CUtlVector<VsInputSignatureElement_t>
        }
        // Parent: None
        // Field count: 6
        public static class RenderInputLayoutField_t {
            public const nint m_pSemanticName = 0x0; // char[32]
            public const nint m_nSemanticIndex = 0x20; // int8
            public const nint m_nOffset = 0x28; // int16
            public const nint m_nSlot = 0x2A; // int8
            public const nint m_nSlotType = 0x2B; // RenderSlotType_t
            public const nint m_szShaderSemantic = 0x2C; // char[32]
        }
    }
}
