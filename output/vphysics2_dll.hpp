// Generated using https://github.com/a2x/cs2-dumper
// 2026-01-22 12:23:57.753951800 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: vphysics2.dll
        // Class count: 0
        // Enum count: 3
        namespace vphysics2_dll {
            // Alignment: 4
            // Member count: 3
            enum class JointMotion_t : uint32_t {
                JOINT_MOTION_FREE = 0x0,
                JOINT_MOTION_LOCKED = 0x1,
                JOINT_MOTION_COUNT = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class JointAxis_t : uint32_t {
                JOINT_AXIS_X = 0x0,
                JOINT_AXIS_Y = 0x1,
                JOINT_AXIS_Z = 0x2,
                JOINT_AXIS_COUNT = 0x3
            };
            // Alignment: 1
            // Member count: 3
            enum class DynamicContinuousContactBehavior_t : uint8_t {
                DYNAMIC_CONTINUOUS_ALLOW_IF_REQUESTED_BY_OTHER_BODY = 0x0,
                DYNAMIC_CONTINUOUS_ALWAYS = 0x1,
                DYNAMIC_CONTINUOUS_NEVER = 0x2
            };
        }
    }
}
