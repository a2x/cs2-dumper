/*
 * Created using https://github.com/a2x/cs2-dumper
 * Thu, 9 Nov 2023 06:05:32 +0000
 */

#pragma once

#include <cstddef>

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t dwEntityList = 0x17ADAF0;
    constexpr std::ptrdiff_t dwForceAttack = 0x16B2320;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x16B23B0;
    constexpr std::ptrdiff_t dwForceBackward = 0x16B25F0;
    constexpr std::ptrdiff_t dwForceCrouch = 0x16B28C0;
    constexpr std::ptrdiff_t dwForceForward = 0x16B2560;
    constexpr std::ptrdiff_t dwForceJump = 0x16B2830;
    constexpr std::ptrdiff_t dwForceLeft = 0x16B2680;
    constexpr std::ptrdiff_t dwForceRight = 0x16B2710;
    constexpr std::ptrdiff_t dwGameEntitySystem = 0x18D72E0;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    constexpr std::ptrdiff_t dwGameRules = 0x1809730;
    constexpr std::ptrdiff_t dwGlobalVars = 0x16AE4A8;
    constexpr std::ptrdiff_t dwGlowManager = 0x1809758;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x1904F78;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x17FCDC8;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x16B9398;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x1810CD8;
    constexpr std::ptrdiff_t dwPrediction = 0x16B9260;
    constexpr std::ptrdiff_t dwViewAngles = 0x186B108;
    constexpr std::ptrdiff_t dwViewMatrix = 0x180C0F0;
    constexpr std::ptrdiff_t dwViewRender = 0x180C948;
}

namespace engine2_dll { // engine2.dll
    constexpr std::ptrdiff_t dwBuildNumber = 0x48B524;
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x48AAC0;
    constexpr std::ptrdiff_t dwNetworkGameClient_getLocalPlayer = 0xF0;
    constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
    constexpr std::ptrdiff_t dwWindowHeight = 0x541E0C;
    constexpr std::ptrdiff_t dwWindowWidth = 0x541E08;
}

namespace inputsystem_dll { // inputsystem.dll
    constexpr std::ptrdiff_t dwInputSystem = 0x35770;
}