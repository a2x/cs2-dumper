#pragma once

#include <cstddef>

namespace client_dll {
    constexpr std::ptrdiff_t entityList = 0x178C8A8;
    constexpr std::ptrdiff_t globalVars = 0x168FCE8;
    constexpr std::ptrdiff_t interfaceLinkList = 0x1972A68;
    constexpr std::ptrdiff_t localPlayerController = 0x17DB128;
    constexpr std::ptrdiff_t localPlayerPawn = 0x1879C18;
    constexpr std::ptrdiff_t viewAngles = 0x18D95C0;
    constexpr std::ptrdiff_t viewMatrix = 0x187A700;
}

namespace engine2_dll {
    constexpr std::ptrdiff_t networkGameClient = 0x48AAB0;
    constexpr std::ptrdiff_t networkGameClient_signOnState = 0x240;
}