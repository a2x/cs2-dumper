#pragma once

#include <cstddef>

// Created using https://github.com/a2x/cs2-dumper
// 2023-10-02 15:54:55.604453 UTC

namespace client_dll {
    constexpr std::ptrdiff_t dwEntityList = 0x178B898;
    constexpr std::ptrdiff_t dwForceBackward = 0x1692EC0;
    constexpr std::ptrdiff_t dwForceCrouch = 0x1693190;
    constexpr std::ptrdiff_t dwForceForward = 0x1692E30;
    constexpr std::ptrdiff_t dwForceJump = 0x1693100;
    constexpr std::ptrdiff_t dwForceLeft = 0x1692F50;
    constexpr std::ptrdiff_t dwForceRight = 0x1692FE0;
    constexpr std::ptrdiff_t dwGlobalVars = 0x168ECE8;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x1971A58;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x17DA118;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x1878C08;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x187E9A0;
    constexpr std::ptrdiff_t dwViewAngles = 0x18D85B0;
    constexpr std::ptrdiff_t dwViewMatrix = 0x18796F0;
}

namespace engine2_dll {
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x48AAB0;
    constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
}