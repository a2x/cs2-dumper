/*
 * Created using https://github.com/a2x/cs2-dumper
 * Sat, 30 Dec 2023 03:17:26 +0000
 */

#pragma once

#include <cstddef>

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t dwEntityList = 0x17C1950;
    constexpr std::ptrdiff_t dwForceAttack = 0x16C1E70;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x16C1F00;
    constexpr std::ptrdiff_t dwForceBackward = 0x16C2140;
    constexpr std::ptrdiff_t dwForceCrouch = 0x16C2410;
    constexpr std::ptrdiff_t dwForceForward = 0x16C20B0;
    constexpr std::ptrdiff_t dwForceJump = 0x16C2380;
    constexpr std::ptrdiff_t dwForceLeft = 0x16C21D0;
    constexpr std::ptrdiff_t dwForceRight = 0x16C2260;
    constexpr std::ptrdiff_t dwGameEntitySystem = 0x18ED250;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    constexpr std::ptrdiff_t dwGameRules = 0x181E048;
    constexpr std::ptrdiff_t dwGlobalVars = 0x16BDC98;
    constexpr std::ptrdiff_t dwGlowManager = 0x181D7B0;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x191AEE8;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x1810F48;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x16C8F38;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x1824A88;
    constexpr std::ptrdiff_t dwPrediction = 0x16C8E00;
    constexpr std::ptrdiff_t dwSensitivity = 0x181ED48;
    constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
    constexpr std::ptrdiff_t dwViewAngles = 0x1880DC0;
    constexpr std::ptrdiff_t dwViewMatrix = 0x1820150;
    constexpr std::ptrdiff_t dwViewRender = 0x1820998;
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

namespace game_info { // Some additional information about the game at dump time
    constexpr std::ptrdiff_t buildNumber = 0x369F; // Game build number
}

namespace inputsystem_dll { // inputsystem.dll
    constexpr std::ptrdiff_t dwInputSystem = 0x35760;
}