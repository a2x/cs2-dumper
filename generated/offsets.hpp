#pragma once

#include <cstddef>

// Created using https://github.com/a2x/cs2-dumper
// 2023-10-05 09:19:39.896326900 UTC

namespace client_dll {
    constexpr std::ptrdiff_t dwEntityList = 0x178D8D8;
    constexpr std::ptrdiff_t dwForceBackward = 0x1694F00;
    constexpr std::ptrdiff_t dwForceCrouch = 0x16951D0;
    constexpr std::ptrdiff_t dwForceForward = 0x1694E70;
    constexpr std::ptrdiff_t dwForceJump = 0x1695140;
    constexpr std::ptrdiff_t dwForceLeft = 0x1694F90;
    constexpr std::ptrdiff_t dwForceRight = 0x1695020;
    constexpr std::ptrdiff_t dwGlobalVars = 0x1690D28;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x1973B98;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x17DC148;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x187AC38;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x1880D80;
    constexpr std::ptrdiff_t dwViewAngles = 0x18DA6F0;
    constexpr std::ptrdiff_t dwViewMatrix = 0x187B720;
    constexpr std::ptrdiff_t dwViewRender = 0x187C110;
}

namespace engine2_dll {
    constexpr std::ptrdiff_t dwBuildNumber = 0x48B504;
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x48AAB0;
    constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
}