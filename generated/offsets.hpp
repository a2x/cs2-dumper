/*
 * Created using https://github.com/a2x/cs2-dumper
 * Fri, 3 Nov 2023 09:10:10 +0000
 */

#pragma once

#include <cstddef>

namespace client_dll { // client.dll
    constexpr std::ptrdiff_t dwBaseEntityModel_setModel = 0x581310;
    constexpr std::ptrdiff_t dwEntityList = 0x17AA8E8;
    constexpr std::ptrdiff_t dwForceAttack = 0x16AF290;
    constexpr std::ptrdiff_t dwForceAttack2 = 0x16AF320;
    constexpr std::ptrdiff_t dwForceBackward = 0x16AF560;
    constexpr std::ptrdiff_t dwForceCrouch = 0x16AF830;
    constexpr std::ptrdiff_t dwForceForward = 0x16AF4D0;
    constexpr std::ptrdiff_t dwForceJump = 0x16AF7A0;
    constexpr std::ptrdiff_t dwForceLeft = 0x16AF5F0;
    constexpr std::ptrdiff_t dwForceRight = 0x16AF680;
    constexpr std::ptrdiff_t dwGameEntitySystem = 0x1964158;
    constexpr std::ptrdiff_t dwGameEntitySystem_getBaseEntity = 0x604920;
    constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x5F6610;
    constexpr std::ptrdiff_t dwGameRules = 0x1806F48;
    constexpr std::ptrdiff_t dwGlobalVars = 0x16AB2D0;
    constexpr std::ptrdiff_t dwGlowManager = 0x18066A8;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x1991E68;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x17F9C08;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x16B6320;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x189DAF8;
    constexpr std::ptrdiff_t dwPrediction = 0x16B61F0;
    constexpr std::ptrdiff_t dwViewAngles = 0x18F8088;
    constexpr std::ptrdiff_t dwViewMatrix = 0x1899070;
    constexpr std::ptrdiff_t dwViewRender = 0x1899A48;
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