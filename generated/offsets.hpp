#pragma once

#include <cstddef>

// Created using https://github.com/a2x/cs2-dumper
// 2023-10-07 01:42:59.789624800 UTC

namespace client_dll {
    constexpr std::ptrdiff_t dwEntityList = 0x17888D8;
    constexpr std::ptrdiff_t dwForceBackward = 0x168FEC0;
    constexpr std::ptrdiff_t dwForceCrouch = 0x1690190;
    constexpr std::ptrdiff_t dwForceForward = 0x168FE30;
    constexpr std::ptrdiff_t dwForceJump = 0x1690100;
    constexpr std::ptrdiff_t dwForceLeft = 0x168FF50;
    constexpr std::ptrdiff_t dwForceRight = 0x168FFE0;
    constexpr std::ptrdiff_t dwGlobalVars = 0x168BCE8;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x196EC98;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x17D7158;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x1875C48;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x187B9E0;
    constexpr std::ptrdiff_t dwViewAngles = 0x18D5700;
    constexpr std::ptrdiff_t dwViewMatrix = 0x1876730;
    constexpr std::ptrdiff_t dwViewRender = 0x1877120;
}

namespace engine2_dll {
    constexpr std::ptrdiff_t dwBuildNumber = 0x486514;
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x485AB0;
    constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
    constexpr std::ptrdiff_t dwWindowHeight = 0x5376AC;
    constexpr std::ptrdiff_t dwWindowWidth = 0x5376A8;
}