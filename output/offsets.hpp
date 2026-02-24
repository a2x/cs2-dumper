// Generated using https://github.com/a2x/cs2-dumper
// 2026-02-24 01:42:29.356100200 UTC

#pragma once

#include <cstddef>
#include <cstdint>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x2315F60;
            constexpr std::ptrdiff_t dwEntityList = 0x24AB1C8;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x24AB1C8;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x20A0;
            constexpr std::ptrdiff_t dwGameRules = 0x2309EA0;
            constexpr std::ptrdiff_t dwGlobalVars = 0x205A580;
            constexpr std::ptrdiff_t dwGlowManager = 0x2306CA8;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x22F0188;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x2065AF0;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x2313700;
            constexpr std::ptrdiff_t dwPrediction = 0x2065A00;
            constexpr std::ptrdiff_t dwSensitivity = 0x23077B8;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x58;
            constexpr std::ptrdiff_t dwViewAngles = 0x23165E8;
            constexpr std::ptrdiff_t dwViewMatrix = 0x230BEE0;
            constexpr std::ptrdiff_t dwViewRender = 0x230C2F8;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x2295070;
        }
        // Module: engine2.dll
        namespace engine2_dll {
            constexpr std::ptrdiff_t dwBuildNumber = 0x60D504;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0x9084E0;
            constexpr std::ptrdiff_t dwNetworkGameClient_clientTickCount = 0x378;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x24C;
            constexpr std::ptrdiff_t dwNetworkGameClient_isBackgroundMap = 0x2C141F;
            constexpr std::ptrdiff_t dwNetworkGameClient_localPlayer = 0xF8;
            constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x240;
            constexpr std::ptrdiff_t dwNetworkGameClient_serverTickCount = 0x24C;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x230;
            constexpr std::ptrdiff_t dwWindowHeight = 0x90C894;
            constexpr std::ptrdiff_t dwWindowWidth = 0x90C890;
        }
        // Module: inputsystem.dll
        namespace inputsystem_dll {
            constexpr std::ptrdiff_t dwInputSystem = 0x45AD0;
        }
        // Module: matchmaking.dll
        namespace matchmaking_dll {
            constexpr std::ptrdiff_t dwGameTypes = 0x1B8000;
        }
        // Module: soundsystem.dll
        namespace soundsystem_dll {
            constexpr std::ptrdiff_t dwSoundSystem = 0x4F3470;
            constexpr std::ptrdiff_t dwSoundSystem_engineViewData = 0x7C;
        }
    }
}
