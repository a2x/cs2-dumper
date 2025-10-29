// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-29 20:26:00.560999200 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: rendersystemdx11.dll
        // Class count: 8
        // Enum count: 3
        pub mod rendersystemdx11_dll {
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
