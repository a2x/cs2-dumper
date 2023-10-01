#pragma once

#include <cstddef>

namespace client_dll {
    constexpr std::ptrdiff_t entityList = 0x178B898;
    constexpr std::ptrdiff_t globalVars = 0x168ECE8;
    constexpr std::ptrdiff_t interfaceLinkList = 0x1971A58;
    constexpr std::ptrdiff_t localPlayerController = 0x17DA118;
    constexpr std::ptrdiff_t localPlayerPawn = 0x1878C08;
    constexpr std::ptrdiff_t plantedC4 = 0x187E9A0;
    constexpr std::ptrdiff_t viewAngles = 0x18D85B0;
    constexpr std::ptrdiff_t viewMatrix = 0x18796F0;
}

namespace engine2_dll {
    constexpr std::ptrdiff_t networkGameClient = 0x48AAB0;
    constexpr std::ptrdiff_t networkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t networkGameClient_signOnState = 0x240;
}