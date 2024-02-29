/*
 * Created using https://github.com/a2x/cs2-dumper
 * Thu, 29 Feb 2024 02:15:37 +0000
 */

#pragma once

#include <cstddef>

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t dwEntityList = 0x18BBAF8;
    constexpr std::ptrdiff_t dwForceAttack = 0x1728F90;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x1729020;
    constexpr std::ptrdiff_t dwForceBackward = 0x1729260;
    constexpr std::ptrdiff_t dwForceCrouch = 0x1729530;
    constexpr std::ptrdiff_t dwForceForward = 0x17291D0;
    constexpr std::ptrdiff_t dwForceJump = 0x17294A0;
    constexpr std::ptrdiff_t dwForceLeft = 0x17292F0;
    constexpr std::ptrdiff_t dwForceRight = 0x1729380;
    constexpr std::ptrdiff_t dwGameEntitySystem = 0x19D9450;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    constexpr std::ptrdiff_t dwGameRules = 0x1918A30;
    constexpr std::ptrdiff_t dwGlobalVars = 0x1723B10;
    constexpr std::ptrdiff_t dwGlowManager = 0x1918E50;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x1A0A598;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x190B308;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x1730118;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x1921858;
    constexpr std::ptrdiff_t dwPrediction = 0x172FFE0;
    constexpr std::ptrdiff_t dwSensitivity = 0x1919778;
    constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
    constexpr std::ptrdiff_t dwViewAngles = 0x1929730;
    constexpr std::ptrdiff_t dwViewMatrix = 0x191CF30;
    constexpr std::ptrdiff_t dwViewRender = 0x191D7B0;
}

namespace engine2_dll { // engine2.dll
    constexpr std::ptrdiff_t dwBuildNumber = 0x513574;
    constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x258;
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x512AC8;
    constexpr std::ptrdiff_t dwNetworkGameClient_getLocalPlayer = 0xF0;
    constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
    constexpr std::ptrdiff_t dwWindowHeight = 0x5CBC64;
    constexpr std::ptrdiff_t dwWindowWidth = 0x5CBC60;
}

namespace game_info { // Some additional information about the game at dump time
    constexpr std::ptrdiff_t buildNumber = 0x36AB; // Game build number
}

namespace inputsystem_dll { // inputsystem.dll
    constexpr std::ptrdiff_t dwInputSystem = 0x367A0;
}

namespace matchmaking_dll { // matchmaking.dll
    constexpr std::ptrdiff_t dwGameTypes = 0x1D21E0;
    constexpr std::ptrdiff_t dwGameTypes_mapName = 0x1D2300;
}