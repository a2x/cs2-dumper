/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Thu, 7 Mar 2024 10:34:48 +0000
 */

#pragma once

#include <cstddef>

namespace game_info { // Some additional information about the game at dump time
    constexpr std::ptrdiff_t buildNumber = 0x36AB; // Game build number
}

namespace libclient_so { // libclient.so
    constexpr std::ptrdiff_t dwEntityList = 0x35A5808;
    constexpr std::ptrdiff_t dwForceAttack = 0x372FEB0;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x372FE10;
    constexpr std::ptrdiff_t dwGameEntitySystem = 0x385B700;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1540;
    constexpr std::ptrdiff_t dwGameRules = 0x3731248;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x3716778;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x3736A38;
    constexpr std::ptrdiff_t dwViewMatrix = 0x3737660;
}

namespace libengine2_so { // libengine2.so
    constexpr std::ptrdiff_t dwBuildNumber = 0x6D35F4;
    constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x278;
}