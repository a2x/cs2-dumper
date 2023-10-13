#pragma once

#include <cstddef>

// Created using https://github.com/a2x/cs2-dumper
// 2023-10-13 02:10:21.542899200 UTC

namespace client_dll {
    constexpr std::ptrdiff_t dwEntityList = 0x178DC58;
    constexpr std::ptrdiff_t dwForceAttack = 0x1694DD0;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x1694E60;
    constexpr std::ptrdiff_t dwForceBackward = 0x16950A0;
    constexpr std::ptrdiff_t dwForceCrouch = 0x1695370;
    constexpr std::ptrdiff_t dwForceForward = 0x1695010;
    constexpr std::ptrdiff_t dwForceJump = 0x16952E0;
    constexpr std::ptrdiff_t dwForceLeft = 0x1695130;
    constexpr std::ptrdiff_t dwForceRight = 0x16951C0;
    constexpr std::ptrdiff_t dwGameRules = 0x17E9808;
    constexpr std::ptrdiff_t dwGlobalVars = 0x1690EC8;
    constexpr std::ptrdiff_t dwGlowManager = 0x17E8F88;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x1974098;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x17DC4E8;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x187AFC8;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x18815E0;
    constexpr std::ptrdiff_t dwViewAngles = 0x18DAAF0;
    constexpr std::ptrdiff_t dwViewMatrix = 0x187BAB0;
    constexpr std::ptrdiff_t dwViewRender = 0x187C4A8;
}

namespace engine2_dll {
    constexpr std::ptrdiff_t dwBuildNumber = 0x487514;
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x486AB0;
    constexpr std::ptrdiff_t dwNetworkGameClient_getLocalPlayer = 0xF0;
    constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
    constexpr std::ptrdiff_t dwWindowHeight = 0x538694;
    constexpr std::ptrdiff_t dwWindowWidth = 0x538690;
}