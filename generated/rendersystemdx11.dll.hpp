/*
 * Created using https://github.com/a2x/cs2-dumper
 * Tue, 13 Feb 2024 02:41:13 +0000
 */

#pragma once

#include <cstddef>

namespace RenderInputLayoutField_t {
    constexpr std::ptrdiff_t m_pSemanticName = 0x0; // uint8_t[32]
    constexpr std::ptrdiff_t m_nSemanticIndex = 0x20; // int32_t
    constexpr std::ptrdiff_t m_Format = 0x24; // uint32_t
    constexpr std::ptrdiff_t m_nOffset = 0x28; // int32_t
    constexpr std::ptrdiff_t m_nSlot = 0x2C; // int32_t
    constexpr std::ptrdiff_t m_nSlotType = 0x30; // RenderSlotType_t
    constexpr std::ptrdiff_t m_nInstanceStepRate = 0x34; // int32_t
}

namespace VsInputSignatureElement_t {
    constexpr std::ptrdiff_t m_pName = 0x0; // char[64]
    constexpr std::ptrdiff_t m_pSemantic = 0x40; // char[64]
    constexpr std::ptrdiff_t m_pD3DSemanticName = 0x80; // char[64]
    constexpr std::ptrdiff_t m_nD3DSemanticIndex = 0xC0; // int32_t
}

namespace VsInputSignature_t {
    constexpr std::ptrdiff_t m_elems = 0x0; // CUtlVector<VsInputSignatureElement_t>
}