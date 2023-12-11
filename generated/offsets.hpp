/*
 * Created using https://github.com/a2x/cs2-dumper
 * Mon, 11 Dec 2023 23:16:32 +0000
 */

#pragma once

#include <cstddef>

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t dwEntityList = 0x17BB840;
    constexpr std::ptrdiff_t dwForceAttack = 0x16BBCF0;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x16BBD80;
    constexpr std::ptrdiff_t dwForceBackward = 0x16BBFC0;
    constexpr std::ptrdiff_t dwForceCrouch = 0x16BC290;
    constexpr std::ptrdiff_t dwForceForward = 0x16BBF30;
    constexpr std::ptrdiff_t dwForceJump = 0x16BC200;
    constexpr std::ptrdiff_t dwForceLeft = 0x16BC050;
    constexpr std::ptrdiff_t dwForceRight = 0x16BC0E0;
    constexpr std::ptrdiff_t dwGameEntitySystem = 0x18E7070;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    constexpr std::ptrdiff_t dwGameRules = 0x1817668;
    constexpr std::ptrdiff_t dwGlobalVars = 0x16B7E60;
    constexpr std::ptrdiff_t dwGlowManager = 0x1817688;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x1914D08;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x180ACC0;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x16C2D98;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x181ED48;
    constexpr std::ptrdiff_t dwPrediction = 0x16C2C60;
    constexpr std::ptrdiff_t dwSensitivity = 0x1818D78;
    constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
    constexpr std::ptrdiff_t dwViewAngles = 0x187AC60;
    constexpr std::ptrdiff_t dwViewMatrix = 0x1819FE0;
    constexpr std::ptrdiff_t dwViewRender = 0x181A860;
}

namespace engine2_dll { // engine2.dll
    constexpr std::ptrdiff_t dwBuildNumber = 0x48B344;
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x48A8F8;
    constexpr std::ptrdiff_t dwNetworkGameClient_getLocalPlayer = 0xF0;
    constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
    constexpr std::ptrdiff_t dwWindowHeight = 0x541A6C;
    constexpr std::ptrdiff_t dwWindowWidth = 0x541A68;
}

namespace inputsystem_dll { // inputsystem.dll
    constexpr std::ptrdiff_t dwInputSystem = 0x35760;
}