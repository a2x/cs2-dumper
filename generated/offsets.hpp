/*
 * https://github.com/a2x/cs2-dumper
 * 2023-10-20 05:22:30.275924300 UTC
 */

#pragma once

#include <cstddef>

namespace ClientDll { // client.dll
    constexpr std::ptrdiff_t dwBaseEntityModel_setModel = 0x57C750;
    constexpr std::ptrdiff_t dwEntityList = 0x1793DC8;
    constexpr std::ptrdiff_t dwForceAttack = 0x169AE50;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x169AEE0;
    constexpr std::ptrdiff_t dwForceBackward = 0x169B120;
    constexpr std::ptrdiff_t dwForceCrouch = 0x169B3F0;
    constexpr std::ptrdiff_t dwForceForward = 0x169B090;
    constexpr std::ptrdiff_t dwForceJump = 0x169B360;
    constexpr std::ptrdiff_t dwForceLeft = 0x169B1B0;
    constexpr std::ptrdiff_t dwForceRight = 0x169B240;
    constexpr std::ptrdiff_t dwGameEntitySystem_getBaseEntity = 0x5FFD50;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x5F1A40;
    constexpr std::ptrdiff_t dwGameRules = 0x17EFAD8;
    constexpr std::ptrdiff_t dwGlobalVars = 0x1696F40;
    constexpr std::ptrdiff_t dwGlowManager = 0x17EF258;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x197A678;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x17E27C8;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x1881288;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x1887FC0;
    constexpr std::ptrdiff_t dwViewAngles = 0x18E0DA0;
    constexpr std::ptrdiff_t dwViewMatrix = 0x1881D70;
    constexpr std::ptrdiff_t dwViewRender = 0x1882768;
}

namespace Engine2Dll { // engine2.dll
    constexpr std::ptrdiff_t dwBuildNumber = 0x487514;
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x486AB0;
    constexpr std::ptrdiff_t dwNetworkGameClient_getLocalPlayer = 0xF0;
    constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
    constexpr std::ptrdiff_t dwWindowHeight = 0x5386D4;
    constexpr std::ptrdiff_t dwWindowWidth = 0x5386D0;
}