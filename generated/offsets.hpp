/*
 * https://github.com/a2x/cs2-dumper
 * 2023-10-17 02:04:52.169744400 UTC
 */

#pragma once

#include <cstddef>

namespace ClientDll {
    constexpr std::ptrdiff_t dwEntityList = 0x178FC88;
    constexpr std::ptrdiff_t dwForceAttack = 0x1696DF0;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x1696E80;
    constexpr std::ptrdiff_t dwForceBackward = 0x16970C0;
    constexpr std::ptrdiff_t dwForceCrouch = 0x1697390;
    constexpr std::ptrdiff_t dwForceForward = 0x1697030;
    constexpr std::ptrdiff_t dwForceJump = 0x1697300;
    constexpr std::ptrdiff_t dwForceLeft = 0x1697150;
    constexpr std::ptrdiff_t dwForceRight = 0x16971E0;
    constexpr std::ptrdiff_t dwGameRules = 0x17EB818;
    constexpr std::ptrdiff_t dwGlobalVars = 0x1692EE8;
    constexpr std::ptrdiff_t dwGlowManager = 0x17EAF98;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x1976138;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x17DE508;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x187CFC8;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x18838C0;
    constexpr std::ptrdiff_t dwViewAngles = 0x18DCAF0;
    constexpr std::ptrdiff_t dwViewMatrix = 0x187DAB0;
    constexpr std::ptrdiff_t dwViewRender = 0x187E4A8;
}

namespace Engine2Dll {
    constexpr std::ptrdiff_t dwBuildNumber = 0x487514;
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x486AB0;
    constexpr std::ptrdiff_t dwNetworkGameClient_getLocalPlayer = 0xF0;
    constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
    constexpr std::ptrdiff_t dwWindowHeight = 0x538674;
    constexpr std::ptrdiff_t dwWindowWidth = 0x538670;
}