/*
 * Created using https://github.com/a2x/cs2-dumper
 * Fri, 16 Feb 2024 11:36:44 +0000
 */

#pragma once

#include <cstddef>

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t dwEntityList = 0x18B3F98;
    constexpr std::ptrdiff_t dwForceAttack = 0x17221C0;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x1722250;
    constexpr std::ptrdiff_t dwForceBackward = 0x1722490;
    constexpr std::ptrdiff_t dwForceCrouch = 0x1722760;
    constexpr std::ptrdiff_t dwForceForward = 0x1722400;
    constexpr std::ptrdiff_t dwForceJump = 0x17226D0;
    constexpr std::ptrdiff_t dwForceLeft = 0x1722520;
    constexpr std::ptrdiff_t dwForceRight = 0x17225B0;
    constexpr std::ptrdiff_t dwGameEntitySystem = 0x19D1970;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    constexpr std::ptrdiff_t dwGameRules = 0x1910FB0;
    constexpr std::ptrdiff_t dwGlobalVars = 0x171CE60;
    constexpr std::ptrdiff_t dwGlowManager = 0x19113D0;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x1A029C8;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x19038E8;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x1729338;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x191B4F8;
    constexpr std::ptrdiff_t dwPrediction = 0x1729200;
    constexpr std::ptrdiff_t dwSensitivity = 0x1911CF8;
    constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
    constexpr std::ptrdiff_t dwViewAngles = 0x19233D0;
    constexpr std::ptrdiff_t dwViewMatrix = 0x19154B0;
    constexpr std::ptrdiff_t dwViewRender = 0x1915D30;
}

namespace engine2_dll { // engine2.dll
    constexpr std::ptrdiff_t dwBuildNumber = 0x513564;
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x512AC8;
    constexpr std::ptrdiff_t dwNetworkGameClient_getLocalPlayer = 0xF0;
    constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
    constexpr std::ptrdiff_t dwWindowHeight = 0x5CAC04;
    constexpr std::ptrdiff_t dwWindowWidth = 0x5CAC00;
}

namespace game_info { // Some additional information about the game at dump time
    constexpr std::ptrdiff_t buildNumber = 0x36A9; // Game build number
}

namespace inputsystem_dll { // inputsystem.dll
    constexpr std::ptrdiff_t dwInputSystem = 0x367A0;
}