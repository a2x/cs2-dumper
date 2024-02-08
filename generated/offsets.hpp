/*
 * Created using https://github.com/a2x/cs2-dumper
 * Thu, 8 Feb 2024 02:46:19 +0000
 */

#pragma once

#include <cstddef>

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t dwEntityList = 0x18B0FB8;
    constexpr std::ptrdiff_t dwForceAttack = 0x171F150;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x171F1E0;
    constexpr std::ptrdiff_t dwForceBackward = 0x171F420;
    constexpr std::ptrdiff_t dwForceCrouch = 0x171F6F0;
    constexpr std::ptrdiff_t dwForceForward = 0x171F390;
    constexpr std::ptrdiff_t dwForceJump = 0x171F660;
    constexpr std::ptrdiff_t dwForceLeft = 0x171F4B0;
    constexpr std::ptrdiff_t dwForceRight = 0x171F540;
    constexpr std::ptrdiff_t dwGameEntitySystem = 0x19CC7C0;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    constexpr std::ptrdiff_t dwGameRules = 0x190DF90;
    constexpr std::ptrdiff_t dwGlobalVars = 0x1719E30;
    constexpr std::ptrdiff_t dwGlowManager = 0x190E3A8;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x19FD7E8;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x1900918;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x17262D8;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x19161B8;
    constexpr std::ptrdiff_t dwPrediction = 0x17261A0;
    constexpr std::ptrdiff_t dwSensitivity = 0x190ECC8;
    constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
    constexpr std::ptrdiff_t dwViewAngles = 0x191E0D0;
    constexpr std::ptrdiff_t dwViewMatrix = 0x19102A0;
    constexpr std::ptrdiff_t dwViewRender = 0x1910B20;
}

namespace engine2_dll { // engine2.dll
    constexpr std::ptrdiff_t dwBuildNumber = 0x512554;
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x511AC8;
    constexpr std::ptrdiff_t dwNetworkGameClient_getLocalPlayer = 0xF0;
    constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
    constexpr std::ptrdiff_t dwWindowHeight = 0x5C9A6C;
    constexpr std::ptrdiff_t dwWindowWidth = 0x5C9A68;
}

namespace game_info { // Some additional information about the game at dump time
    constexpr std::ptrdiff_t buildNumber = 0x36A4; // Game build number
}

namespace inputsystem_dll { // inputsystem.dll
    constexpr std::ptrdiff_t dwInputSystem = 0x367A0;
}