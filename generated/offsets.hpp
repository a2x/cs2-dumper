#pragma once

#include <cstddef>

namespace client_dll {
    constexpr std::ptrdiff_t entityList = 0x178C878;
    constexpr std::ptrdiff_t globalVars = 0x168FCC8;
    constexpr std::ptrdiff_t interfaceLinkList = 0x1972A38;
    constexpr std::ptrdiff_t localPlayerController = 0x17DB0F8;
    constexpr std::ptrdiff_t localPlayerPawn = 0x1879BE8;
    constexpr std::ptrdiff_t viewAngles = 0x18D9590;
    constexpr std::ptrdiff_t viewMatrix = 0x187A6D0;
}

namespace engine2_dll {
    constexpr std::ptrdiff_t networkGameClient = 0x489AB0;
    constexpr std::ptrdiff_t networkGameClient_signOnState = 0x240;
}