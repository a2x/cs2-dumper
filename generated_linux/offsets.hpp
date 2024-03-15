/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Fri, 15 Mar 2024 16:10:00 +0000
 */

#pragma once

#include <cstddef>

namespace game_info { // Some additional information about the game at dump time
    constexpr std::ptrdiff_t buildNumber = 0x36AC; // Game build number
}

namespace libclient_so { // libclient.so
    constexpr std::ptrdiff_t dwEntityList = 0x35A7848;
    constexpr std::ptrdiff_t dwForceAttack = 0x3731FD0;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x3731F30;
    constexpr std::ptrdiff_t dwGameEntitySystem = 0x385D880;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1540;
    constexpr std::ptrdiff_t dwGameRules = 0x3733368;
    constexpr std::ptrdiff_t dwGlobalVars = 0x35689D0;
    constexpr std::ptrdiff_t dwGlowManager = 0x3737C70;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x37D00B0;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x3718898;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x3738C58;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x374D4B8;
    constexpr std::ptrdiff_t dwPrediction = 0x3738B20;
    constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
    constexpr std::ptrdiff_t dwViewAngles = 0x37459A0;
    constexpr std::ptrdiff_t dwViewMatrix = 0x3739780;
    constexpr std::ptrdiff_t dwViewRender = 0x3739930;
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