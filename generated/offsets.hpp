#pragma once

#include <cstddef>

// Created using https://github.com/a2x/cs2-dumper
// 2023-10-03 00:41:25.579783600 UTC

namespace client_dll {
    constexpr std::ptrdiff_t dwEntityList = 0x178D8C8;
    constexpr std::ptrdiff_t dwForceBackward = 0x1694ED0;
    constexpr std::ptrdiff_t dwForceCrouch = 0x16951A0;
    constexpr std::ptrdiff_t dwForceForward = 0x1694E40;
    constexpr std::ptrdiff_t dwForceJump = 0x1695110;
    constexpr std::ptrdiff_t dwForceLeft = 0x1694F60;
    constexpr std::ptrdiff_t dwForceRight = 0x1694FF0;
    constexpr std::ptrdiff_t dwGlobalVars = 0x1690CF8;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x1973A68;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x17DC148;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x187AC28;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x1880AE0;
    constexpr std::ptrdiff_t dwViewAngles = 0x18DA5C0;
    constexpr std::ptrdiff_t dwViewMatrix = 0x187B710;
}

namespace engine2_dll {
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x48AAB0;
    constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
}