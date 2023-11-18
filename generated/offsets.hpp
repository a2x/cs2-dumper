/*
 * Created using https://github.com/a2x/cs2-dumper
 * Sat, 18 Nov 2023 01:51:41 +0000
 */

#pragma once

#include <cstddef>

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t dwEntityList = 0x17B0CF0;
    constexpr std::ptrdiff_t dwForceAttack = 0x16B5400;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x16B5490;
    constexpr std::ptrdiff_t dwForceBackward = 0x16B56D0;
    constexpr std::ptrdiff_t dwForceCrouch = 0x16B59A0;
    constexpr std::ptrdiff_t dwForceForward = 0x16B5640;
    constexpr std::ptrdiff_t dwForceJump = 0x16B5910;
    constexpr std::ptrdiff_t dwForceLeft = 0x16B5760;
    constexpr std::ptrdiff_t dwForceRight = 0x16B57F0;
    constexpr std::ptrdiff_t dwGameEntitySystem = 0x18DC3D0;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    constexpr std::ptrdiff_t dwGameRules = 0x180C9A0;
    constexpr std::ptrdiff_t dwGlobalVars = 0x16B14E0;
    constexpr std::ptrdiff_t dwGlowManager = 0x180C9C8;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x190A068;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x1800008;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x16BC4A8;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x1813F68;
    constexpr std::ptrdiff_t dwPrediction = 0x16BC370;
    constexpr std::ptrdiff_t dwSensitivity = 0x180DF58;
    constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
    constexpr std::ptrdiff_t dwViewAngles = 0x186FFB0;
    constexpr std::ptrdiff_t dwViewMatrix = 0x180F330;
    constexpr std::ptrdiff_t dwViewRender = 0x180FBB0;
}

namespace engine2_dll { // engine2.dll
    constexpr std::ptrdiff_t dwBuildNumber = 0x48A514;
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x489AC0;
    constexpr std::ptrdiff_t dwNetworkGameClient_getLocalPlayer = 0xF0;
    constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
    constexpr std::ptrdiff_t dwWindowHeight = 0x540CE4;
    constexpr std::ptrdiff_t dwWindowWidth = 0x540CE0;
}

namespace inputsystem_dll { // inputsystem.dll
    constexpr std::ptrdiff_t dwInputSystem = 0x35760;
}