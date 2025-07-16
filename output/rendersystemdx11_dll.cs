// Generated using https://github.com/a2x/cs2-dumper
// 2025-07-16 05:17:05.277202900 UTC

namespace CS2Dumper.Schemas {
    // Module: rendersystemdx11.dll
    // Class count: 3
    // Enum count: 5
    public static class Rendersystemdx11Dll {
        // Alignment: 4
        // Member count: 13
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
            RENDER_PRIM_TYPE_COUNT = 0xC
        }
        // Alignment: 4
        // Member count: 13
        public enum RenderBufferFlags_t : uint {
            RENDER_BUFFER_USAGE_VERTEX_BUFFER = 0x1,
            RENDER_BUFFER_USAGE_INDEX_BUFFER = 0x2,
            RENDER_BUFFER_USAGE_SHADER_RESOURCE = 0x4,
            RENDER_BUFFER_USAGE_UNORDERED_ACCESS = 0x8,
            RENDER_BUFFER_BYTEADDRESS_BUFFER = 0x10,
            RENDER_BUFFER_STRUCTURED_BUFFER = 0x20,
            RENDER_BUFFER_APPEND_CONSUME_BUFFER = 0x40,
            RENDER_BUFFER_UAV_COUNTER = 0x80,
            RENDER_BUFFER_UAV_DRAW_INDIRECT_ARGS = 0x100,
            RENDER_BUFFER_ACCELERATION_STRUCTURE = 0x200,
            RENDER_BUFFER_SHADER_BINDING_TABLE = 0x400,
            RENDER_BUFFER_PER_FRAME_WRITE_ONCE = 0x800,
            RENDER_BUFFER_POOL_ALLOCATED = 0x1000
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
        // Alignment: 4
        // Member count: 4
        public enum InputLayoutVariation_t : uint {
            INPUT_LAYOUT_VARIATION_DEFAULT = 0x0,
            INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID = 0x1,
            INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID_MORPH_VERT_ID = 0x2,
            INPUT_LAYOUT_VARIATION_MAX = 0x3
        }
        // Alignment: 4
        // Member count: 3
        public enum RenderSlotType_t : uint {
            RENDER_SLOT_INVALID = unchecked((uint)-1),
            RENDER_SLOT_PER_VERTEX = 0x0,
            RENDER_SLOT_PER_INSTANCE = 0x1
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
        // Field count: 1
        public static class VsInputSignature_t {
            public const nint m_elems = 0x0; // CUtlVector<VsInputSignatureElement_t>
        }
        // Parent: None
        // Field count: 7
        public static class RenderInputLayoutField_t {
            public const nint m_pSemanticName = 0x0; // uint8[32]
            public const nint m_nSemanticIndex = 0x20; // int32
            public const nint m_Format = 0x24; // uint32
            public const nint m_nOffset = 0x28; // int32
            public const nint m_nSlot = 0x2C; // int32
            public const nint m_nSlotType = 0x30; // RenderSlotType_t
            public const nint m_nInstanceStepRate = 0x34; // int32
        }
    }
}
