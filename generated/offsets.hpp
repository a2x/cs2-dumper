/*
 * Created using https://github.com/a2x/cs2-dumper
 * Tue, 13 Feb 2024 04:04:49 +0000
 */

#pragma once

#include <cstddef>

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t dwEntityList = 0x18B1FE8;
    constexpr std::ptrdiff_t dwForceAttack = 0x1720160;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x17201F0;
    constexpr std::ptrdiff_t dwForceBackward = 0x1720430;
    constexpr std::ptrdiff_t dwForceCrouch = 0x1720700;
    constexpr std::ptrdiff_t dwForceForward = 0x17203A0;
    constexpr std::ptrdiff_t dwForceJump = 0x1720670;
    constexpr std::ptrdiff_t dwForceLeft = 0x17204C0;
    constexpr std::ptrdiff_t dwForceRight = 0x1720550;
    constexpr std::ptrdiff_t dwGameEntitySystem = 0x19CD800;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    constexpr std::ptrdiff_t dwGameRules = 0x190EFC0;
    constexpr std::ptrdiff_t dwGlobalVars = 0x171AE40;
    constexpr std::ptrdiff_t dwGlowManager = 0x190F3D8;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x19FE828;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x1901948;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x17272E8;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x19171E8;
    constexpr std::ptrdiff_t dwPrediction = 0x17271B0;
    constexpr std::ptrdiff_t dwSensitivity = 0x190FCF8;
    constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
    constexpr std::ptrdiff_t dwViewAngles = 0x191F100;
    constexpr std::ptrdiff_t dwViewMatrix = 0x19112D0;
    constexpr std::ptrdiff_t dwViewRender = 0x1911B50;
}

namespace engine2_dll { // engine2.dll
    constexpr std::ptrdiff_t dwBuildNumber = 0x512554;
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x511AC8;
    constexpr std::ptrdiff_t dwNetworkGameClient_getLocalPlayer = 0xF0;
    constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
    constexpr std::ptrdiff_t dwWindowHeight = 0x5C9A2C;
    constexpr std::ptrdiff_t dwWindowWidth = 0x5C9A28;
}

namespace game_info { // Some additional information about the game at dump time
    constexpr std::ptrdiff_t buildNumber = 0x36A8; // Game build number
}

namespace inputsystem_dll { // inputsystem.dll
    constexpr std::ptrdiff_t dwInputSystem = 0x367A0;
}