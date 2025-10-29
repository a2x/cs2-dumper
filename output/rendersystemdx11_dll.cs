// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-29 20:26:00.560999200 UTC

namespace CS2Dumper.Schemas {
    // Module: rendersystemdx11.dll
    // Class count: 8
    // Enum count: 3
    public static class Rendersystemdx11Dll {
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
