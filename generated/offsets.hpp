#pragma once

#include <cstddef>

// Created using https://github.com/a2x/cs2-dumper
// 2023-10-11 03:22:33.059568400 UTC

namespace client_dll {
    constexpr std::ptrdiff_t dwEntityList = 0x178A808;
    constexpr std::ptrdiff_t dwForceAttack = 0x1691C70;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x1691D00;
    constexpr std::ptrdiff_t dwForceBackward = 0x1691F40;
    constexpr std::ptrdiff_t dwForceCrouch = 0x1692210;
    constexpr std::ptrdiff_t dwForceForward = 0x1691EB0;
    constexpr std::ptrdiff_t dwForceJump = 0x1692180;
    constexpr std::ptrdiff_t dwForceLeft = 0x1691FD0;
    constexpr std::ptrdiff_t dwForceRight = 0x1692060;
    constexpr std::ptrdiff_t dwGlobalVars = 0x168DD60;
    constexpr std::ptrdiff_t dwGlowManager = 0x17E5CC8;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x1970D48;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x17D9218;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x1877CF8;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x187E5A0;
    constexpr std::ptrdiff_t dwViewAngles = 0x18D77B0;
    constexpr std::ptrdiff_t dwViewMatrix = 0x18787E0;
    constexpr std::ptrdiff_t dwViewRender = 0x18791D0;
}

namespace engine2_dll {
    constexpr std::ptrdiff_t dwBuildNumber = 0x486514;
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x485AB0;
    constexpr std::ptrdiff_t dwNetworkGameClient_getLocalPlayer = 0xF0;
    constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
    constexpr std::ptrdiff_t dwWindowHeight = 0x53768C;
    constexpr std::ptrdiff_t dwWindowWidth = 0x537688;
}