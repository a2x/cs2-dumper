#pragma once

#include <cstddef>

/*
 * https://github.com/a2x/cs2-dumper
 * 2023-10-15 12:13:32.968868800 UTC
 */

namespace CAnimScriptBase {
    constexpr std::ptrdiff_t m_bIsValid = 0x8; // bool
}

namespace EmptyTestScript {
    constexpr std::ptrdiff_t m_hTest = 0x10; // CAnimScriptParam<float>
}