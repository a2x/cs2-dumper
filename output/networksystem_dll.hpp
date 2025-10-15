// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-14 23:58:25.486779500 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: networksystem.dll
        // Class count: 1
        // Enum count: 1
        namespace networksystem_dll {
            // Alignment: 4
            // Member count: 4
            enum class OutOfPVSUpdates_t : uint32_t {
                OOPVSUpdates_OptOut = 0x0,
                OOPVSUpdates_OptIn = 0x1,
                OOPVSUpdates_Default = 0x2,
                OOPVSUpdates_Count = 0x3
            };
            // Parent: None
            // Field count: 1
            namespace ChangeAccessorFieldPathIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
        }
    }
}
