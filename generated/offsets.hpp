/*
 * Created using https://github.com/a2x/cs2-dumper
 * Sat, 4 Nov 2023 04:05:17 +0000
 */

#pragma once

#include <cstddef>

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t dwEntityList = 0x17AB958;
    constexpr std::ptrdiff_t dwForceAttack = 0x16B02B0;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x16B0340;
    constexpr std::ptrdiff_t dwForceBackward = 0x16B0580;
    constexpr std::ptrdiff_t dwForceCrouch = 0x16B0850;
    constexpr std::ptrdiff_t dwForceForward = 0x16B04F0;
    constexpr std::ptrdiff_t dwForceJump = 0x16B07C0;
    constexpr std::ptrdiff_t dwForceLeft = 0x16B0610;
    constexpr std::ptrdiff_t dwForceRight = 0x16B06A0;
    constexpr std::ptrdiff_t dwGameEntitySystem = 0x18D51A8;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    constexpr std::ptrdiff_t dwGameRules = 0x1807FA8;
    constexpr std::ptrdiff_t dwGlobalVars = 0x16AC100;
    constexpr std::ptrdiff_t dwGlowManager = 0x1807708;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x1902EB8;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x17FAC68;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x16B7340;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x180EB48;
    constexpr std::ptrdiff_t dwPrediction = 0x16B7210;
    constexpr std::ptrdiff_t dwViewAngles = 0x18690D8;
    constexpr std::ptrdiff_t dwViewMatrix = 0x180A0D0;
    constexpr std::ptrdiff_t dwViewRender = 0x180A090;
}

namespace engine2_dll { // engine2.dll
    constexpr std::ptrdiff_t dwBuildNumber = 0x488514;
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x487AB0;
    constexpr std::ptrdiff_t dwNetworkGameClient_getLocalPlayer = 0xF0;
    constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
    constexpr std::ptrdiff_t dwWindowHeight = 0x5397DC;
    constexpr std::ptrdiff_t dwWindowWidth = 0x5397D8;
}

namespace inputsystem_dll { // inputsystem.dll
    constexpr std::ptrdiff_t dwInputSystem = 0x35770;
}