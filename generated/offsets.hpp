/*
 * Created using https://github.com/a2x/cs2-dumper
 * Fri, 3 Nov 2023 01:49:49 +0000
 */

#pragma once

#include <cstddef>

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t dwBaseEntityModel_setModel = 0x5812D0;
    constexpr std::ptrdiff_t dwEntityList = 0x17AA8F8;
    constexpr std::ptrdiff_t dwForceBackward = 0x16AF570;
    constexpr std::ptrdiff_t dwForceCrouch = 0x16AF840;
    constexpr std::ptrdiff_t dwForceForward = 0x16AF4E0;
    constexpr std::ptrdiff_t dwForceJump = 0x16AF7B0;
    constexpr std::ptrdiff_t dwForceLeft = 0x16AF600;
    constexpr std::ptrdiff_t dwForceRight = 0x16AF690;
    constexpr std::ptrdiff_t dwGameEntitySystem = 0x1964168;
    constexpr std::ptrdiff_t dwGameEntitySystem_getBaseEntity = 0x6048E0;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x5F65D0;
    constexpr std::ptrdiff_t dwGameRules = 0x1806F58;
    constexpr std::ptrdiff_t dwGlobalVars = 0x16AB2E0;
    constexpr std::ptrdiff_t dwGlowManager = 0x18066B8;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x1991E78;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x17F9C18;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x16B6318;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x189DB08;
    constexpr std::ptrdiff_t dwViewAngles = 0x18F8090;
    constexpr std::ptrdiff_t dwViewMatrix = 0x1899080;
    constexpr std::ptrdiff_t dwViewRender = 0x1899A58;
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