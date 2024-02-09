/*
 * Created using https://github.com/a2x/cs2-dumper
 * Fri, 9 Feb 2024 00:34:46 +0000
 */

#pragma once

#include <cstddef>

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t dwEntityList = 0x18B0FC8;
    constexpr std::ptrdiff_t dwForceAttack = 0x171F160;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x171F1F0;
    constexpr std::ptrdiff_t dwForceBackward = 0x171F430;
    constexpr std::ptrdiff_t dwForceCrouch = 0x171F700;
    constexpr std::ptrdiff_t dwForceForward = 0x171F3A0;
    constexpr std::ptrdiff_t dwForceJump = 0x171F670;
    constexpr std::ptrdiff_t dwForceLeft = 0x171F4C0;
    constexpr std::ptrdiff_t dwForceRight = 0x171F550;
    constexpr std::ptrdiff_t dwGameEntitySystem = 0x19CC7D0;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    constexpr std::ptrdiff_t dwGameRules = 0x190DFA0;
    constexpr std::ptrdiff_t dwGlobalVars = 0x1719E40;
    constexpr std::ptrdiff_t dwGlowManager = 0x190E3B8;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x19FD7F8;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x1900928;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x17262E8;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x19161C8;
    constexpr std::ptrdiff_t dwPrediction = 0x17261B0;
    constexpr std::ptrdiff_t dwSensitivity = 0x190ECD8;
    constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
    constexpr std::ptrdiff_t dwViewAngles = 0x191E0E0;
    constexpr std::ptrdiff_t dwViewMatrix = 0x19102B0;
    constexpr std::ptrdiff_t dwViewRender = 0x1910B30;
}

namespace engine2_dll { // engine2.dll
    constexpr std::ptrdiff_t dwBuildNumber = 0x512554;
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x511AC8;
    constexpr std::ptrdiff_t dwNetworkGameClient_getLocalPlayer = 0xF0;
    constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
    constexpr std::ptrdiff_t dwWindowHeight = 0x5C99FC;
    constexpr std::ptrdiff_t dwWindowWidth = 0x5C99F8;
}

namespace game_info { // Some additional information about the game at dump time
    constexpr std::ptrdiff_t buildNumber = 0x36A5; // Game build number
}

namespace inputsystem_dll { // inputsystem.dll
    constexpr std::ptrdiff_t dwInputSystem = 0x367A0;
}