#pragma once

#include <cstddef>

// Created using https://github.com/a2x/cs2-dumper
// 2023-10-05 13:02:39.758365100 UTC

namespace client_dll {
    constexpr std::ptrdiff_t dwEntityList = 0x178D8E8;
    constexpr std::ptrdiff_t dwForceBackward = 0x1694EF0;
    constexpr std::ptrdiff_t dwForceCrouch = 0x16951C0;
    constexpr std::ptrdiff_t dwForceForward = 0x1694E60;
    constexpr std::ptrdiff_t dwForceJump = 0x1695130;
    constexpr std::ptrdiff_t dwForceLeft = 0x1694F80;
    constexpr std::ptrdiff_t dwForceRight = 0x1695010;
    constexpr std::ptrdiff_t dwGlobalVars = 0x1690D18;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x1973BA8;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x17DC158;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x187AC48;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x1880DE0;
    constexpr std::ptrdiff_t dwViewAngles = 0x18DA700;
    constexpr std::ptrdiff_t dwViewMatrix = 0x187B730;
    constexpr std::ptrdiff_t dwViewRender = 0x187C120;
}

namespace engine2_dll {
    constexpr std::ptrdiff_t dwBuildNumber = 0x48C504;
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x48BAB0;
    constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
}