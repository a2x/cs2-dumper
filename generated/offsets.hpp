/*
 * Created using https://github.com/a2x/cs2-dumper
 * Fri, 23 Feb 2024 13:32:08 +0000
 */

#pragma once

#include <cstddef>

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t dwEntityList = 0x18B3FA8;
    constexpr std::ptrdiff_t dwForceAttack = 0x17221D0;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x1722260;
    constexpr std::ptrdiff_t dwForceBackward = 0x17224A0;
    constexpr std::ptrdiff_t dwForceCrouch = 0x1722770;
    constexpr std::ptrdiff_t dwForceForward = 0x1722410;
    constexpr std::ptrdiff_t dwForceJump = 0x17226E0;
    constexpr std::ptrdiff_t dwForceLeft = 0x1722530;
    constexpr std::ptrdiff_t dwForceRight = 0x17225C0;
    constexpr std::ptrdiff_t dwGameEntitySystem = 0x19D1980;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    constexpr std::ptrdiff_t dwGameRules = 0x1910FC0;
    constexpr std::ptrdiff_t dwGlobalVars = 0x171CE70;
    constexpr std::ptrdiff_t dwGlowManager = 0x19113E0;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x1A029D8;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x19038F8;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x1729348;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x191B508;
    constexpr std::ptrdiff_t dwPrediction = 0x1729210;
    constexpr std::ptrdiff_t dwSensitivity = 0x1911D08;
    constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
    constexpr std::ptrdiff_t dwViewAngles = 0x19233E0;
    constexpr std::ptrdiff_t dwViewMatrix = 0x19154C0;
    constexpr std::ptrdiff_t dwViewRender = 0x1915D40;
}

namespace engine2_dll { // engine2.dll
    constexpr std::ptrdiff_t dwBuildNumber = 0x513564;
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x512AC8;
    constexpr std::ptrdiff_t dwNetworkGameClient_getLocalPlayer = 0xF0;
    constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x258;
    constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
    constexpr std::ptrdiff_t dwWindowHeight = 0x5CABC4;
    constexpr std::ptrdiff_t dwWindowWidth = 0x5CABC0;
}

namespace game_info { // Some additional information about the game at dump time
    constexpr std::ptrdiff_t buildNumber = 0x36AA; // Game build number
}

namespace inputsystem_dll { // inputsystem.dll
    constexpr std::ptrdiff_t dwInputSystem = 0x367A0;
}

namespace matchmaking_dll { // matchmaking.dll
    constexpr std::ptrdiff_t dwGameTypes = 0x1D21E0;
    constexpr std::ptrdiff_t dwGameTypes_mapName = 0x1D2300;
}