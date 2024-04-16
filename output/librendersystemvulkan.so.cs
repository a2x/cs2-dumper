// Generated using https://github.com/a2x/cs2-dumper
// 2024-04-16 02:29:53.956513739 UTC

namespace CS2Dumper.Schemas {
    // Module: librendersystemvulkan.so
    // Classes count: 3
    // Enums count: 0
    public static class LibrendersystemvulkanSo {
        // Parent: None
        // Fields count: 4
        public static class VsInputSignatureElement_t {
            public const nint m_pName = 0x0; // char[64]
            public const nint m_pSemantic = 0x40; // char[64]
            public const nint m_pD3DSemanticName = 0x80; // char[64]
            public const nint m_nD3DSemanticIndex = 0xC0; // int32
        }
        // Parent: None
        // Fields count: 1
        public static class VsInputSignature_t {
            public const nint m_elems = 0x0; // CUtlVector<VsInputSignatureElement_t>
        }
        // Parent: None
        // Fields count: 7
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
