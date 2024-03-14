/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Thu, 14 Mar 2024 05:07:42 +0000
 */

#pragma once

#include <cstddef>

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t dwEntityList = 0x18BFC08;
    constexpr std::ptrdiff_t dwForceAttack = 0x172D030;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x172D0C0;
    constexpr std::ptrdiff_t dwForceBackward = 0x172D300;
    constexpr std::ptrdiff_t dwForceCrouch = 0x172D5D0;
    constexpr std::ptrdiff_t dwForceForward = 0x172D270;
    constexpr std::ptrdiff_t dwForceJump = 0x172D540;
    constexpr std::ptrdiff_t dwForceLeft = 0x172D390;
    constexpr std::ptrdiff_t dwForceRight = 0x172D420;
    constexpr std::ptrdiff_t dwGameEntitySystem = 0x19DD590;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    constexpr std::ptrdiff_t dwGameRules = 0x191CB50;
    constexpr std::ptrdiff_t dwGlobalVars = 0x1727BB0;
    constexpr std::ptrdiff_t dwGlowManager = 0x191CF70;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x1A0E6D8;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x190F428;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x17341B8;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x1925988;
    constexpr std::ptrdiff_t dwPrediction = 0x1734080;
    constexpr std::ptrdiff_t dwSensitivity = 0x191D898;
    constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
    constexpr std::ptrdiff_t dwViewAngles = 0x192D860;
    constexpr std::ptrdiff_t dwViewMatrix = 0x1921050;
    constexpr std::ptrdiff_t dwViewRender = 0x19218D0;
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
    constexpr std::ptrdiff_t buildNumber = 0x36AC; // Game build number
}

namespace inputsystem_dll { // inputsystem.dll
    constexpr std::ptrdiff_t dwInputSystem = 0x367A0;
}

namespace matchmaking_dll { // matchmaking.dll
    constexpr std::ptrdiff_t dwGameTypes = 0x1D21E0;
    constexpr std::ptrdiff_t dwGameTypes_mapName = 0x1D2300;
}