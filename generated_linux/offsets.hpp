/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 16 Mar 2024 22:04:11 +0000
 */

#pragma once

#include <cstddef>

namespace game_info { // Some additional information about the game at dump time
    constexpr std::ptrdiff_t buildNumber = 0x36AE; // Game build number
}

namespace libclient_so { // libclient.so
    constexpr std::ptrdiff_t dwEntityList = 0x35AA8C8;
    constexpr std::ptrdiff_t dwForceAttack = 0x3735050;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x3734FB0;
    constexpr std::ptrdiff_t dwGameEntitySystem = 0x38609C0;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1540;
    constexpr std::ptrdiff_t dwGameRules = 0x37363E8;
    constexpr std::ptrdiff_t dwGlobalVars = 0x379E780;
    constexpr std::ptrdiff_t dwGlowManager = 0x373ACF0;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x37D3130;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x371B918;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x373BCD8;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x3750538;
    constexpr std::ptrdiff_t dwPrediction = 0x373BBA0;
    constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
    constexpr std::ptrdiff_t dwViewAngles = 0x3748A20;
    constexpr std::ptrdiff_t dwViewMatrix = 0x373C800;
    constexpr std::ptrdiff_t dwViewRender = 0x373C9B0;
}

namespace libengine2_so { // libengine2.so
    constexpr std::ptrdiff_t dwBuildNumber = 0x6D35F4;
    constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x278;
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x6D3F88;
    constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x260;
    constexpr std::ptrdiff_t dwWindowHeight = 0x6DCDBC;
    constexpr std::ptrdiff_t dwWindowWidth = 0x6DCDB8;
}

namespace libmatchmaking_so { // libmatchmaking.so
    constexpr std::ptrdiff_t dwGameTypes = 0x37C9A0;
    constexpr std::ptrdiff_t dwGameTypes_mapName = 0x37CAC0;
}