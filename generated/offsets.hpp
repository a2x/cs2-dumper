/*
 * Created using https://github.com/a2x/cs2-dumper
 * Fri, 1 Dec 2023 04:38:02 +0000
 */

#pragma once

#include <cstddef>

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t dwEntityList = 0x17BB470;
    constexpr std::ptrdiff_t dwForceAttack = 0x16BB940;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x16BB9D0;
    constexpr std::ptrdiff_t dwForceBackward = 0x16BBC10;
    constexpr std::ptrdiff_t dwForceCrouch = 0x16BBEE0;
    constexpr std::ptrdiff_t dwForceForward = 0x16BBB80;
    constexpr std::ptrdiff_t dwForceJump = 0x16BBE50;
    constexpr std::ptrdiff_t dwForceLeft = 0x16BBCA0;
    constexpr std::ptrdiff_t dwForceRight = 0x16BBD30;
    constexpr std::ptrdiff_t dwGameEntitySystem = 0x18E6CA0;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    constexpr std::ptrdiff_t dwGameRules = 0x1817298;
    constexpr std::ptrdiff_t dwGlobalVars = 0x16B7AB0;
    constexpr std::ptrdiff_t dwGlowManager = 0x18172B8;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x1914938;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x180A8F0;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x16C29E8;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x181E858;
    constexpr std::ptrdiff_t dwPrediction = 0x16C28B0;
    constexpr std::ptrdiff_t dwSensitivity = 0x18189A8;
    constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
    constexpr std::ptrdiff_t dwViewAngles = 0x187A8C0;
    constexpr std::ptrdiff_t dwViewMatrix = 0x1819C10;
    constexpr std::ptrdiff_t dwViewRender = 0x181A490;
}

namespace engine2_dll { // engine2.dll
    constexpr std::ptrdiff_t dwBuildNumber = 0x48A344;
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x4898F8;
    constexpr std::ptrdiff_t dwNetworkGameClient_getLocalPlayer = 0xF0;
    constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
    constexpr std::ptrdiff_t dwWindowHeight = 0x540A4C;
    constexpr std::ptrdiff_t dwWindowWidth = 0x540A48;
}

namespace inputsystem_dll { // inputsystem.dll
    constexpr std::ptrdiff_t dwInputSystem = 0x35760;
}