/*
 * Created using https://github.com/a2x/cs2-dumper
 * Wed, 7 Feb 2024 04:10:49 +0000
 */

#pragma once

#include <cstddef>

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t dwEntityList = 0x18AFFB8;
    constexpr std::ptrdiff_t dwForceAttack = 0x171E130;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x171E1C0;
    constexpr std::ptrdiff_t dwForceBackward = 0x171E400;
    constexpr std::ptrdiff_t dwForceCrouch = 0x171E6D0;
    constexpr std::ptrdiff_t dwForceForward = 0x171E370;
    constexpr std::ptrdiff_t dwForceJump = 0x171E640;
    constexpr std::ptrdiff_t dwForceLeft = 0x171E490;
    constexpr std::ptrdiff_t dwForceRight = 0x171E520;
    constexpr std::ptrdiff_t dwGameEntitySystem = 0x19CB7B0;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    constexpr std::ptrdiff_t dwGameRules = 0x190CF90;
    constexpr std::ptrdiff_t dwGlobalVars = 0x1718E10;
    constexpr std::ptrdiff_t dwGlowManager = 0x190D3A8;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x19FC7D8;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x18FF918;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x17252B8;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x19151B8;
    constexpr std::ptrdiff_t dwPrediction = 0x1725180;
    constexpr std::ptrdiff_t dwSensitivity = 0x190DCC8;
    constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
    constexpr std::ptrdiff_t dwViewAngles = 0x191D0D0;
    constexpr std::ptrdiff_t dwViewMatrix = 0x190F2A0;
    constexpr std::ptrdiff_t dwViewRender = 0x190FB20;
}

namespace engine2_dll { // engine2.dll
    constexpr std::ptrdiff_t dwBuildNumber = 0x512554;
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x511AC8;
    constexpr std::ptrdiff_t dwNetworkGameClient_getLocalPlayer = 0xF0;
    constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
    constexpr std::ptrdiff_t dwWindowHeight = 0x5C99DC;
    constexpr std::ptrdiff_t dwWindowWidth = 0x5C99D8;
}

namespace game_info { // Some additional information about the game at dump time
    constexpr std::ptrdiff_t buildNumber = 0x36A3; // Game build number
}

namespace inputsystem_dll { // inputsystem.dll
    constexpr std::ptrdiff_t dwInputSystem = 0x367A0;
}