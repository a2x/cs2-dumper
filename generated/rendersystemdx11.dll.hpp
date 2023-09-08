#pragma once

#include <cstddef>

namespace RenderInputLayoutField_t {
    constexpr std::ptrdiff_t m_pSemanticName = 0x0;
    constexpr std::ptrdiff_t m_nSemanticIndex = 0x20;
    constexpr std::ptrdiff_t m_Format = 0x24;
    constexpr std::ptrdiff_t m_nOffset = 0x28;
    constexpr std::ptrdiff_t m_nSlot = 0x2c;
    constexpr std::ptrdiff_t m_nSlotType = 0x30;
    constexpr std::ptrdiff_t m_nInstanceStepRate = 0x34;
}

namespace VsInputSignatureElement_t {
    constexpr std::ptrdiff_t m_pName = 0x0;
    constexpr std::ptrdiff_t m_pSemantic = 0x40;
    constexpr std::ptrdiff_t m_pD3DSemanticName = 0x80;
    constexpr std::ptrdiff_t m_nD3DSemanticIndex = 0xc0;
}

namespace VsInputSignature_t {
    constexpr std::ptrdiff_t m_elems = 0x0;
}

