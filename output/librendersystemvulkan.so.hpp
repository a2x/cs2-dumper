// Generated using https://github.com/a2x/cs2-dumper
// 2024-04-16 02:29:53.956513739 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: librendersystemvulkan.so
        // Classes count: 3
        // Enums count: 0
        namespace librendersystemvulkan_so {
            // Parent: None
            // Fields count: 4
            namespace VsInputSignatureElement_t {
                constexpr std::ptrdiff_t m_pName = 0x0; // char[64]
                constexpr std::ptrdiff_t m_pSemantic = 0x40; // char[64]
                constexpr std::ptrdiff_t m_pD3DSemanticName = 0x80; // char[64]
                constexpr std::ptrdiff_t m_nD3DSemanticIndex = 0xC0; // int32
            }
            // Parent: None
            // Fields count: 1
            namespace VsInputSignature_t {
                constexpr std::ptrdiff_t m_elems = 0x0; // CUtlVector<VsInputSignatureElement_t>
            }
            // Parent: None
            // Fields count: 7
            namespace RenderInputLayoutField_t {
                constexpr std::ptrdiff_t m_pSemanticName = 0x0; // uint8[32]
                constexpr std::ptrdiff_t m_nSemanticIndex = 0x20; // int32
                constexpr std::ptrdiff_t m_Format = 0x24; // uint32
                constexpr std::ptrdiff_t m_nOffset = 0x28; // int32
                constexpr std::ptrdiff_t m_nSlot = 0x2C; // int32
                constexpr std::ptrdiff_t m_nSlotType = 0x30; // RenderSlotType_t
                constexpr std::ptrdiff_t m_nInstanceStepRate = 0x34; // int32
            }
        }
    }
}
