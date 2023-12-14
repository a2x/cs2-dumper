/*
 * Created using https://github.com/a2x/cs2-dumper
 * Thu, 14 Dec 2023 15:21:21 +0000
 */

#pragma once

#include <cstddef>

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t dwEntityList = 0x17C18E0;
    constexpr std::ptrdiff_t dwForceAttack = 0x16C1E30;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x16C1EC0;
    constexpr std::ptrdiff_t dwForceBackward = 0x16C2100;
    constexpr std::ptrdiff_t dwForceCrouch = 0x16C23D0;
    constexpr std::ptrdiff_t dwForceForward = 0x16C2070;
    constexpr std::ptrdiff_t dwForceJump = 0x16C2340;
    constexpr std::ptrdiff_t dwForceLeft = 0x16C2190;
    constexpr std::ptrdiff_t dwForceRight = 0x16C2220;
    constexpr std::ptrdiff_t dwGameEntitySystem = 0x18ED1C0;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    constexpr std::ptrdiff_t dwGameRules = 0x181DFF8;
    constexpr std::ptrdiff_t dwGlobalVars = 0x16BDE28;
    constexpr std::ptrdiff_t dwGlowManager = 0x181D768;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x191AE58;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x1810EE0;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x16C8ED8;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x1824B98;
    constexpr std::ptrdiff_t dwPrediction = 0x16C8DA0;
    constexpr std::ptrdiff_t dwSensitivity = 0x181ECF8;
    constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
    constexpr std::ptrdiff_t dwViewAngles = 0x1880D60;
    constexpr std::ptrdiff_t dwViewMatrix = 0x1820100;
    constexpr std::ptrdiff_t dwViewRender = 0x1820948;
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