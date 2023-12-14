/*
 * Created using https://github.com/a2x/cs2-dumper
 * Thu, 14 Dec 2023 01:10:27 +0000
 */

#pragma once

#include <cstddef>

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t dwEntityList = 0x17C18D0;
    constexpr std::ptrdiff_t dwForceAttack = 0x16C2180;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x16C2330;
    constexpr std::ptrdiff_t dwForceBackward = 0x16C20F0;
    constexpr std::ptrdiff_t dwForceCrouch = 0x16C23C0;
    constexpr std::ptrdiff_t dwForceForward = 0x16C2060;
    constexpr std::ptrdiff_t dwForceJump = 0x16C2330;
    constexpr std::ptrdiff_t dwForceLeft = 0x16C2180;
    constexpr std::ptrdiff_t dwForceRight = 0x16C2210;
    constexpr std::ptrdiff_t dwGameEntitySystem = 0x18ED1A0;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    constexpr std::ptrdiff_t dwGameRules = 0x181DFE8;
    constexpr std::ptrdiff_t dwGlobalVars = 0x16BDE18;
    constexpr std::ptrdiff_t dwGlowManager = 0x181D758;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x191AE38;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x1810ED0;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x16C8EC8;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x1824B88;
    constexpr std::ptrdiff_t dwPrediction = 0x16C8D90;
    constexpr std::ptrdiff_t dwSensitivity = 0x181ECE8;
    constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
    constexpr std::ptrdiff_t dwViewAngles = 0x1880D50;
    constexpr std::ptrdiff_t dwViewMatrix = 0x18200F0;
    constexpr std::ptrdiff_t dwViewRender = 0x1820938;
}

namespace engine2_dll { // engine2.dll
    constexpr std::ptrdiff_t dwBuildNumber = 0x4E03D4;
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x4DF988;
    constexpr std::ptrdiff_t dwNetworkGameClient_getLocalPlayer = 0xF0;
    constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
    constexpr std::ptrdiff_t dwWindowHeight = 0x596E1C;
    constexpr std::ptrdiff_t dwWindowWidth = 0x596E18;
}

namespace inputsystem_dll { // inputsystem.dll
    constexpr std::ptrdiff_t dwInputSystem = 0x35760;
}