/*
 * Created using https://github.com/a2x/cs2-dumper
 * Tue, 19 Dec 2023 04:46:28 +0000
 */

#pragma once

#include <cstddef>

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t dwEntityList = 0x17C1960;
    constexpr std::ptrdiff_t dwForceAttack = 0x16C1E80;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x16C1F10;
    constexpr std::ptrdiff_t dwForceBackward = 0x16C2150;
    constexpr std::ptrdiff_t dwForceCrouch = 0x16C2420;
    constexpr std::ptrdiff_t dwForceForward = 0x16C20C0;
    constexpr std::ptrdiff_t dwForceJump = 0x16C2390;
    constexpr std::ptrdiff_t dwForceLeft = 0x16C21E0;
    constexpr std::ptrdiff_t dwForceRight = 0x16C2270;
    constexpr std::ptrdiff_t dwGameEntitySystem = 0x18ED260;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    constexpr std::ptrdiff_t dwGameRules = 0x181E058;
    constexpr std::ptrdiff_t dwGlobalVars = 0x16BDCA8;
    constexpr std::ptrdiff_t dwGlowManager = 0x181D7C0;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x191AEF8;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x1810F58;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x16C8F48;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x1824A98;
    constexpr std::ptrdiff_t dwPrediction = 0x16C8E10;
    constexpr std::ptrdiff_t dwSensitivity = 0x181ED58;
    constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
    constexpr std::ptrdiff_t dwViewAngles = 0x1880DD0;
    constexpr std::ptrdiff_t dwViewMatrix = 0x1820160;
    constexpr std::ptrdiff_t dwViewRender = 0x18209A8;
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