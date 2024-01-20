/*
 * Created using https://github.com/a2x/cs2-dumper
 * Sat, 20 Jan 2024 14:19:41 +0000
 */

#pragma once

#include <cstddef>

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t dwEntityList = 0x17C26A0;
    constexpr std::ptrdiff_t dwForceAttack = 0x16C1E80;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x16C1F10;
    constexpr std::ptrdiff_t dwForceBackward = 0x16C2150;
    constexpr std::ptrdiff_t dwForceCrouch = 0x16C2420;
    constexpr std::ptrdiff_t dwForceForward = 0x16C20C0;
    constexpr std::ptrdiff_t dwForceJump = 0x16C2390;
    constexpr std::ptrdiff_t dwForceLeft = 0x16C21E0;
    constexpr std::ptrdiff_t dwForceRight = 0x16C2270;
    constexpr std::ptrdiff_t dwGameEntitySystem = 0x18F2DB0;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    constexpr std::ptrdiff_t dwGameRules = 0x181ED98;
    constexpr std::ptrdiff_t dwGlobalVars = 0x16BDCA8;
    constexpr std::ptrdiff_t dwGlowManager = 0x181E500;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x1920A48;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x1811C98;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x16C8F48;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x18257D8;
    constexpr std::ptrdiff_t dwPrediction = 0x16C8E10;
    constexpr std::ptrdiff_t dwSensitivity = 0x181FA98;
    constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
    constexpr std::ptrdiff_t dwViewAngles = 0x1884F30;
    constexpr std::ptrdiff_t dwViewMatrix = 0x1820EA0;
    constexpr std::ptrdiff_t dwViewRender = 0x18216E8;
}

namespace engine2_dll { // engine2.dll
    constexpr std::ptrdiff_t dwBuildNumber = 0x4E13D4;
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x4E0988;
    constexpr std::ptrdiff_t dwNetworkGameClient_getLocalPlayer = 0xF0;
    constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
    constexpr std::ptrdiff_t dwWindowHeight = 0x597E0C;
    constexpr std::ptrdiff_t dwWindowWidth = 0x597E08;
}

namespace inputsystem_dll { // inputsystem.dll
    constexpr std::ptrdiff_t dwInputSystem = 0x35760;
}