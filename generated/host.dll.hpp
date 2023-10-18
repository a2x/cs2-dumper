/*
 * https://github.com/a2x/cs2-dumper
 * 2023-10-18 10:31:51.044401200 UTC
 */

#pragma once

#include <cstddef>

namespace CAnimScriptBase {
    constexpr std::ptrdiff_t m_bIsValid = 0x8; // bool
}

namespace EmptyTestScript { // CAnimScriptBase
    constexpr std::ptrdiff_t m_hTest = 0x10; // CAnimScriptParam<float>
}