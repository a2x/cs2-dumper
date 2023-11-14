/*
 * Created using https://github.com/a2x/cs2-dumper
 * Tue, 14 Nov 2023 08:44:01 +0000
 */

#pragma once

#include <cstddef>

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t dwEntityList = 0x17ADAF0;
    constexpr std::ptrdiff_t dwForceAttack = 0x16B2300;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x16B2390;
    constexpr std::ptrdiff_t dwForceBackward = 0x16B25D0;
    constexpr std::ptrdiff_t dwForceCrouch = 0x16B28A0;
    constexpr std::ptrdiff_t dwForceForward = 0x16B2540;
    constexpr std::ptrdiff_t dwForceJump = 0x16B2810;
    constexpr std::ptrdiff_t dwForceLeft = 0x16B2660;
    constexpr std::ptrdiff_t dwForceRight = 0x16B26F0;
    constexpr std::ptrdiff_t dwGameEntitySystem = 0x18D8110;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    constexpr std::ptrdiff_t dwGameRules = 0x1809740;
    constexpr std::ptrdiff_t dwGlobalVars = 0x16AE488;
    constexpr std::ptrdiff_t dwGlowManager = 0x1809768;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x1905DA8;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x17FCDC8;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x16B9388;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x1810CD8;
    constexpr std::ptrdiff_t dwPrediction = 0x16B9250;
    constexpr std::ptrdiff_t dwViewAngles = 0x186BF18;
    constexpr std::ptrdiff_t dwViewMatrix = 0x180C100;
    constexpr std::ptrdiff_t dwViewRender = 0x180C958;
}

namespace engine2_dll { // engine2.dll
    constexpr std::ptrdiff_t dwBuildNumber = 0x48B524;
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x48AAC0;
    constexpr std::ptrdiff_t dwNetworkGameClient_getLocalPlayer = 0xF0;
    constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
    constexpr std::ptrdiff_t dwWindowHeight = 0x541E1C;
    constexpr std::ptrdiff_t dwWindowWidth = 0x541E18;
}

namespace inputsystem_dll { // inputsystem.dll
    constexpr std::ptrdiff_t dwInputSystem = 0x35770;
}