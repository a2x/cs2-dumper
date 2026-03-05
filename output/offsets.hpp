// Generated using https://github.com/a2x/cs2-dumper
// 2026-03-04 23:22:00.942727700 UTC

#pragma once

#include <cstddef>
#include <cstdint>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x2317040;
            constexpr std::ptrdiff_t dwEntityList = 0x24AC2A8;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x24AC2A8;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x20A0;
            constexpr std::ptrdiff_t dwGameRules = 0x230AF60;
            constexpr std::ptrdiff_t dwGlobalVars = 0x205B5C0;
            constexpr std::ptrdiff_t dwGlowManager = 0x2307D68;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x22F1208;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x2066B60;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x23147C0;
            constexpr std::ptrdiff_t dwPrediction = 0x2066A70;
            constexpr std::ptrdiff_t dwSensitivity = 0x2308878;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x58;
            constexpr std::ptrdiff_t dwViewAngles = 0x23176C8;
            constexpr std::ptrdiff_t dwViewMatrix = 0x230CFA0;
            constexpr std::ptrdiff_t dwViewRender = 0x230D3B8;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x2296410;
        }
        // Module: engine2.dll
        namespace engine2_dll {
            constexpr std::ptrdiff_t dwBuildNumber = 0x60D514;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0x908500;
            constexpr std::ptrdiff_t dwNetworkGameClient_clientTickCount = 0x378;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x24C;
            constexpr std::ptrdiff_t dwNetworkGameClient_isBackgroundMap = 0x2C141F;
            constexpr std::ptrdiff_t dwNetworkGameClient_localPlayer = 0xF8;
            constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x240;
            constexpr std::ptrdiff_t dwNetworkGameClient_serverTickCount = 0x24C;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x230;
            constexpr std::ptrdiff_t dwWindowHeight = 0x90C8AC;
            constexpr std::ptrdiff_t dwWindowWidth = 0x90C8A8;
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
