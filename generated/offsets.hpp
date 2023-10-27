/*
 * Created using https://github.com/a2x/cs2-dumper
 * Fri, 27 Oct 2023 01:03:39 +0000
 */

#pragma once

#include <cstddef>

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t dwBaseEntityModel_setModel = 0x57EA50;
    constexpr std::ptrdiff_t dwEntityList = 0x17995C0;
    constexpr std::ptrdiff_t dwForceAttack = 0x169EE60;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x169EEF0;
    constexpr std::ptrdiff_t dwForceBackward = 0x169F130;
    constexpr std::ptrdiff_t dwForceCrouch = 0x169F400;
    constexpr std::ptrdiff_t dwForceForward = 0x169F0A0;
    constexpr std::ptrdiff_t dwForceJump = 0x169F370;
    constexpr std::ptrdiff_t dwForceLeft = 0x169F1C0;
    constexpr std::ptrdiff_t dwForceRight = 0x169F250;
    constexpr std::ptrdiff_t dwGameEntitySystem = 0x1952588;
    constexpr std::ptrdiff_t dwGameEntitySystem_getBaseEntity = 0x602050;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x5F3D40;
    constexpr std::ptrdiff_t dwGameRules = 0x17F5488;
    constexpr std::ptrdiff_t dwGlobalVars = 0x169AFE0;
    constexpr std::ptrdiff_t dwGlowManager = 0x17F4C10;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x1980298;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x17E8158;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x1886C48;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x188BFE0;
    constexpr std::ptrdiff_t dwViewAngles = 0x18E6770;
    constexpr std::ptrdiff_t dwViewMatrix = 0x1887730;
    constexpr std::ptrdiff_t dwViewRender = 0x1888128;
}

namespace engine2_dll { // engine2.dll
    constexpr std::ptrdiff_t dwBuildNumber = 0x488514;
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x487AB0;
    constexpr std::ptrdiff_t dwNetworkGameClient_getLocalPlayer = 0xF0;
    constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
    constexpr std::ptrdiff_t dwWindowHeight = 0x5396DC;
    constexpr std::ptrdiff_t dwWindowWidth = 0x5396D8;
}