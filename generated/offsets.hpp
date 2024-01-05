/*
 * Created using https://github.com/a2x/cs2-dumper
 * Fri, 5 Jan 2024 01:00:02 +0000
 */

#pragma once

#include <cstddef>

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t dwEntityList = 0x17C1950;
    constexpr std::ptrdiff_t dwForceAttack = 0x16C1E90;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x16C1F20;
    constexpr std::ptrdiff_t dwForceBackward = 0x16C2160;
    constexpr std::ptrdiff_t dwForceCrouch = 0x16C2430;
    constexpr std::ptrdiff_t dwForceForward = 0x16C20D0;
    constexpr std::ptrdiff_t dwForceJump = 0x16C23A0;
    constexpr std::ptrdiff_t dwForceLeft = 0x16C21F0;
    constexpr std::ptrdiff_t dwForceRight = 0x16C2280;
    constexpr std::ptrdiff_t dwGameEntitySystem = 0x18ED240;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    constexpr std::ptrdiff_t dwGameRules = 0x181E048;
    constexpr std::ptrdiff_t dwGlobalVars = 0x16BDCB8;
    constexpr std::ptrdiff_t dwGlowManager = 0x181D7B0;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x191AED8;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x1810F48;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x16C8F58;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x1824A88;
    constexpr std::ptrdiff_t dwPrediction = 0x16C8E20;
    constexpr std::ptrdiff_t dwSensitivity = 0x181ED48;
    constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
    constexpr std::ptrdiff_t dwViewAngles = 0x1880DC0;
    constexpr std::ptrdiff_t dwViewMatrix = 0x1820150;
    constexpr std::ptrdiff_t dwViewRender = 0x1820998;
}

namespace engine2_dll { // engine2.dll
    constexpr std::ptrdiff_t dwBuildNumber = 0x4E13D4;
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x4E0988;
    constexpr std::ptrdiff_t dwNetworkGameClient_getLocalPlayer = 0xF0;
    constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
    constexpr std::ptrdiff_t dwWindowHeight = 0x597E0C;
    constexpr std::ptrdiff_t dwWindowWidth = 0x597E08;
}

namespace game_info { // Some additional information about the game at dump time
    constexpr std::ptrdiff_t buildNumber = 0x36A0; // Game build number
}

namespace inputsystem_dll { // inputsystem.dll
    constexpr std::ptrdiff_t dwInputSystem = 0x35760;
}