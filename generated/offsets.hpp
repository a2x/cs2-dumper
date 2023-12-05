/*
 * Created using https://github.com/a2x/cs2-dumper
 * Tue, 5 Dec 2023 00:38:26 +0000
 */

#pragma once

#include <cstddef>

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t dwEntityList = 0x17BB5B0;
    constexpr std::ptrdiff_t dwForceAttack = 0x16BBA70;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x16BBB00;
    constexpr std::ptrdiff_t dwForceBackward = 0x16BBD40;
    constexpr std::ptrdiff_t dwForceCrouch = 0x16BC010;
    constexpr std::ptrdiff_t dwForceForward = 0x16BBCB0;
    constexpr std::ptrdiff_t dwForceJump = 0x16BBF80;
    constexpr std::ptrdiff_t dwForceLeft = 0x16BBDD0;
    constexpr std::ptrdiff_t dwForceRight = 0x16BBE60;
    constexpr std::ptrdiff_t dwGameEntitySystem = 0x18E6DE0;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    constexpr std::ptrdiff_t dwGameRules = 0x18173C8;
    constexpr std::ptrdiff_t dwGlobalVars = 0x16B7BE0;
    constexpr std::ptrdiff_t dwGlowManager = 0x18173E8;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x1914A78;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x180AA20;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x16C2B18;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x181E988;
    constexpr std::ptrdiff_t dwPrediction = 0x16C29E0;
    constexpr std::ptrdiff_t dwSensitivity = 0x1818AD8;
    constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
    constexpr std::ptrdiff_t dwViewAngles = 0x187A9D0;
    constexpr std::ptrdiff_t dwViewMatrix = 0x1819D40;
    constexpr std::ptrdiff_t dwViewRender = 0x181A5C0;
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