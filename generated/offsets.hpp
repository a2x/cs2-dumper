/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 23 Mar 2024 05:02:05 +0000
 */

#pragma once

#include <cstddef>

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t dwEntityList = 0x18C2D58;
    constexpr std::ptrdiff_t dwForceAttack = 0x1730020;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x17300B0;
    constexpr std::ptrdiff_t dwForceBackward = 0x17302F0;
    constexpr std::ptrdiff_t dwForceCrouch = 0x17305C0;
    constexpr std::ptrdiff_t dwForceForward = 0x1730260;
    constexpr std::ptrdiff_t dwForceJump = 0x1730530;
    constexpr std::ptrdiff_t dwForceLeft = 0x1730380;
    constexpr std::ptrdiff_t dwForceRight = 0x1730410;
    constexpr std::ptrdiff_t dwGameEntitySystem = 0x19E0790;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    constexpr std::ptrdiff_t dwGameRules = 0x191FCA0;
    constexpr std::ptrdiff_t dwGlobalVars = 0x172ABA0;
    constexpr std::ptrdiff_t dwGlowManager = 0x19200C0;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x1A118D8;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x1912578;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x17371A8;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x1928AD8;
    constexpr std::ptrdiff_t dwPrediction = 0x1737070;
    constexpr std::ptrdiff_t dwSensitivity = 0x19209E8;
    constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
    constexpr std::ptrdiff_t dwViewAngles = 0x19309B0;
    constexpr std::ptrdiff_t dwViewMatrix = 0x19241A0;
    constexpr std::ptrdiff_t dwViewRender = 0x1924A20;
}

namespace engine2_dll { // engine2.dll
    constexpr std::ptrdiff_t dwBuildNumber = 0x514574;
    constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x258;
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x513AC8;
    constexpr std::ptrdiff_t dwNetworkGameClient_getLocalPlayer = 0xF0;
    constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
    constexpr std::ptrdiff_t dwWindowHeight = 0x5CCCDC;
    constexpr std::ptrdiff_t dwWindowWidth = 0x5CCCD8;
}

namespace game_info { // Some additional information about the game at dump time
    constexpr std::ptrdiff_t buildNumber = 0x36B0; // Game build number
}

namespace inputsystem_dll { // inputsystem.dll
    constexpr std::ptrdiff_t dwInputSystem = 0x367A0;
}

namespace matchmaking_dll { // matchmaking.dll
    constexpr std::ptrdiff_t dwGameTypes = 0x1D21E0;
    constexpr std::ptrdiff_t dwGameTypes_mapName = 0x1D2300;
}