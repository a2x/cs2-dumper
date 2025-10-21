// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-21 05:02:55.957173600 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: rendersystemdx11.dll
        // Class count: 8
        // Enum count: 0
        namespace rendersystemdx11_dll {
            // Parent: None
            // Field count: 4
            namespace RsDepthStencilStateDesc_t {
                constexpr std::ptrdiff_t m_bDepthTestEnable = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bDepthWriteEnable = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_depthFunc = 0x1; // RsComparison_t
                constexpr std::ptrdiff_t m_stencilState = 0x2; // RsStencilStateDesc_t
            }
            // Parent: None
            // Field count: 1
            namespace SheetSequenceIntegerId_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // uint32
            }
            // Parent: None
            // Field count: 11
            namespace RsBlendStateDesc_t {
                constexpr std::ptrdiff_t m_srcBlendBits = 0x0; // uint32
                constexpr std::ptrdiff_t m_destBlendBits = 0x4; // uint32
                constexpr std::ptrdiff_t m_srcBlendAlphaBits = 0x8; // uint32
                constexpr std::ptrdiff_t m_destBlendAlphaBits = 0xC; // uint32
                constexpr std::ptrdiff_t m_renderTargetWriteMaskBits = 0x10; // uint32
                constexpr std::ptrdiff_t m_blendOpBits = 0x0; // bitfield:30
                constexpr std::ptrdiff_t m_bAlphaToCoverageEnable = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bIndependentBlendEnable = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_blendOpAlphaBits = 0x18; // uint32
                constexpr std::ptrdiff_t m_blendEnableBits = 0x1C; // uint8
                constexpr std::ptrdiff_t m_srgbWriteEnableBits = 0x1D; // uint8
            }
            // Parent: None
            // Field count: 4
            namespace VsInputSignatureElement_t {
                constexpr std::ptrdiff_t m_pName = 0x0; // char[64]
                constexpr std::ptrdiff_t m_pSemantic = 0x40; // char[64]
                constexpr std::ptrdiff_t m_pD3DSemanticName = 0x80; // char[64]
                constexpr std::ptrdiff_t m_nD3DSemanticIndex = 0xC0; // int32
            }
            // Parent: None
            // Field count: 7
            namespace RsRasterizerStateDesc_t {
                constexpr std::ptrdiff_t m_nFillMode = 0x0; // RsFillMode_t
                constexpr std::ptrdiff_t m_nCullMode = 0x1; // RsCullMode_t
                constexpr std::ptrdiff_t m_bDepthClipEnable = 0x2; // bool
                constexpr std::ptrdiff_t m_bMultisampleEnable = 0x3; // bool
                constexpr std::ptrdiff_t m_nDepthBias = 0x4; // int32
                constexpr std::ptrdiff_t m_flDepthBiasClamp = 0x8; // float32
                constexpr std::ptrdiff_t m_flSlopeScaledDepthBias = 0xC; // float32
            }
            // Parent: None
            // Field count: 11
            namespace RsStencilStateDesc_t {
                constexpr std::ptrdiff_t m_bStencilEnable = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_frontStencilFailOp = 0x0; // bitfield:3
                constexpr std::ptrdiff_t m_frontStencilDepthFailOp = 0x0; // bitfield:3
                constexpr std::ptrdiff_t m_frontStencilPassOp = 0x0; // bitfield:3
                constexpr std::ptrdiff_t m_frontStencilFunc = 0x0; // bitfield:3
                constexpr std::ptrdiff_t m_backStencilFailOp = 0x0; // bitfield:3
                constexpr std::ptrdiff_t m_backStencilDepthFailOp = 0x0; // bitfield:3
                constexpr std::ptrdiff_t m_backStencilPassOp = 0x0; // bitfield:3
                constexpr std::ptrdiff_t m_backStencilFunc = 0x0; // bitfield:3
                constexpr std::ptrdiff_t m_nStencilReadMask = 0x4; // uint8
                constexpr std::ptrdiff_t m_nStencilWriteMask = 0x5; // uint8
            }
            // Parent: None
            // Field count: 2
            namespace VsInputSignature_t {
                constexpr std::ptrdiff_t m_elems = 0x0; // CUtlVector<VsInputSignatureElement_t>
                constexpr std::ptrdiff_t m_depth_elems = 0x18; // CUtlVector<VsInputSignatureElement_t>
            }
            // Parent: None
            // Field count: 6
            namespace RenderInputLayoutField_t {
                constexpr std::ptrdiff_t m_pSemanticName = 0x0; // char[32]
                constexpr std::ptrdiff_t m_nSemanticIndex = 0x20; // int8
                constexpr std::ptrdiff_t m_nOffset = 0x28; // int16
                constexpr std::ptrdiff_t m_nSlot = 0x2A; // int8
                constexpr std::ptrdiff_t m_nSlotType = 0x2B; // RenderSlotType_t
                constexpr std::ptrdiff_t m_szShaderSemantic = 0x2C; // char[32]
            }
        }
    }
}
