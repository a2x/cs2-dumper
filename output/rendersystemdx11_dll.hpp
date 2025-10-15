// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-14 23:58:25.486779500 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: rendersystemdx11.dll
        // Class count: 8
        // Enum count: 8
        namespace rendersystemdx11_dll {
            // Alignment: 4
            // Member count: 14
            enum class RenderPrimitiveType_t : uint32_t {
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
            };
            // Alignment: 4
            // Member count: 13
            enum class RenderBufferFlags_t : uint32_t {
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
            };
            // Alignment: 1
            // Member count: 3
            enum class RsCullMode_t : uint8_t {
                RS_CULL_NONE = 0x0,
                RS_CULL_BACK = 0x1,
                RS_CULL_FRONT = 0x2
            };
            // Alignment: 1
            // Member count: 8
            enum class RsComparison_t : uint8_t {
                RS_CMP_NEVER = 0x0,
                RS_CMP_LESS = 0x1,
                RS_CMP_EQUAL = 0x2,
                RS_CMP_LESS_EQUAL = 0x3,
                RS_CMP_GREATER = 0x4,
                RS_CMP_NOT_EQUAL = 0x5,
                RS_CMP_GREATER_EQUAL = 0x6,
                RS_CMP_ALWAYS = 0x7
            };
            // Alignment: 1
            // Member count: 2
            enum class RsFillMode_t : uint8_t {
                RS_FILL_SOLID = 0x0,
                RS_FILL_WIREFRAME = 0x1
            };
            // Alignment: 1
            // Member count: 8
            enum class RenderMultisampleType_t : uint8_t {
                RENDER_MULTISAMPLE_INVALID = 0xFFFFFFFFFFFFFFFF,
                RENDER_MULTISAMPLE_NONE = 0x0,
                RENDER_MULTISAMPLE_2X = 0x1,
                RENDER_MULTISAMPLE_4X = 0x2,
                RENDER_MULTISAMPLE_6X = 0x3,
                RENDER_MULTISAMPLE_8X = 0x4,
                RENDER_MULTISAMPLE_16X = 0x5,
                RENDER_MULTISAMPLE_TYPE_COUNT = 0x6
            };
            // Alignment: 1
            // Member count: 4
            enum class InputLayoutVariation_t : uint8_t {
                INPUT_LAYOUT_VARIATION_DEFAULT = 0x0,
                INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID = 0x1,
                INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID_MORPH_VERT_ID = 0x2,
                INPUT_LAYOUT_VARIATION_MAX = 0x3
            };
            // Alignment: 1
            // Member count: 3
            enum class RenderSlotType_t : uint8_t {
                RENDER_SLOT_INVALID = 0xFFFFFFFFFFFFFFFF,
                RENDER_SLOT_PER_VERTEX = 0x0,
                RENDER_SLOT_PER_INSTANCE = 0x1
            };
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
