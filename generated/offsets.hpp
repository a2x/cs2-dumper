/*
 * Created using https://github.com/a2x/cs2-dumper
 * 2023-10-20 23:01:51.629418100 UTC
 */

#pragma once

#include <cstddef>

namespace ClientDll { // client.dll
    constexpr std::ptrdiff_t dwBaseEntityModel_setModel = 0x57DA70;
    constexpr std::ptrdiff_t dwEntityList = 0x1798738;
    constexpr std::ptrdiff_t dwForceAttack = 0x169DE50;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x169DEE0;
    constexpr std::ptrdiff_t dwForceBackward = 0x169E120;
    constexpr std::ptrdiff_t dwForceCrouch = 0x169E3F0;
    constexpr std::ptrdiff_t dwForceForward = 0x169E090;
    constexpr std::ptrdiff_t dwForceJump = 0x169E360;
    constexpr std::ptrdiff_t dwForceLeft = 0x169E1B0;
    constexpr std::ptrdiff_t dwForceRight = 0x169E240;
    constexpr std::ptrdiff_t dwGameEntitySystem_getBaseEntity = 0x601070;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x5F2D60;
    constexpr std::ptrdiff_t dwGameRules = 0x17F4478;
    constexpr std::ptrdiff_t dwGlobalVars = 0x1699F40;
    constexpr std::ptrdiff_t dwGlowManager = 0x17F3BF8;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x197F2B8;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x17E7158;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x1885C28;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x188CAD0;
    constexpr std::ptrdiff_t dwViewAngles = 0x18E5740;
    constexpr std::ptrdiff_t dwViewMatrix = 0x1886710;
    constexpr std::ptrdiff_t dwViewRender = 0x1887108;
}

namespace Engine2Dll { // engine2.dll
    constexpr std::ptrdiff_t dwBuildNumber = 0x487514;
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x486AB0;
    constexpr std::ptrdiff_t dwNetworkGameClient_getLocalPlayer = 0xF0;
    constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
    constexpr std::ptrdiff_t dwWindowHeight = 0x53867C;
    constexpr std::ptrdiff_t dwWindowWidth = 0x538678;
}