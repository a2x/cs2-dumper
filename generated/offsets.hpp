/*
 * Created using https://github.com/a2x/cs2-dumper
 * Tue, 23 Jan 2024 06:17:35 +0000
 */

#pragma once

#include <cstddef>

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t dwEntityList = 0x17CE6A0;
    constexpr std::ptrdiff_t dwForceAttack = 0x16CDE80;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x16CDF10;
    constexpr std::ptrdiff_t dwForceBackward = 0x16CE150;
    constexpr std::ptrdiff_t dwForceCrouch = 0x16CE420;
    constexpr std::ptrdiff_t dwForceForward = 0x16CE0C0;
    constexpr std::ptrdiff_t dwForceJump = 0x16CE390;
    constexpr std::ptrdiff_t dwForceLeft = 0x16CE1E0;
    constexpr std::ptrdiff_t dwForceRight = 0x16CE270;
    constexpr std::ptrdiff_t dwGameEntitySystem = 0x18FEDD0;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    constexpr std::ptrdiff_t dwGameRules = 0x182AD98;
    constexpr std::ptrdiff_t dwGlobalVars = 0x16C9CA8;
    constexpr std::ptrdiff_t dwGlowManager = 0x182A500;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x192CA68;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x181DC98;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x16D4F48;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x18317D8;
    constexpr std::ptrdiff_t dwPrediction = 0x16D4E10;
    constexpr std::ptrdiff_t dwSensitivity = 0x182BA98;
    constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
    constexpr std::ptrdiff_t dwViewAngles = 0x1890F30;
    constexpr std::ptrdiff_t dwViewMatrix = 0x182CEA0;
    constexpr std::ptrdiff_t dwViewRender = 0x182D6E8;
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
    constexpr std::ptrdiff_t buildNumber = 0x36A1; // Game build number
}

namespace inputsystem_dll { // inputsystem.dll
    constexpr std::ptrdiff_t dwInputSystem = 0x35760;
}