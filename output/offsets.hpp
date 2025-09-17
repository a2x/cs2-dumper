// Generated using https://github.com/a2x/cs2-dumper
// 2025-09-17 01:09:41.918835800 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x1E290E0;
            constexpr std::ptrdiff_t dwEntityList = 0x1D01F58;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x1FA2F88;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x20F0;
            constexpr std::ptrdiff_t dwGameRules = 0x1E1DEC0;
            constexpr std::ptrdiff_t dwGlobalVars = 0x1BD3030;
            constexpr std::ptrdiff_t dwGlowManager = 0x1E1ACA8;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x1E0AFD8;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x1BDDD10;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x1E24200;
            constexpr std::ptrdiff_t dwPrediction = 0x1BDDC40;
            constexpr std::ptrdiff_t dwSensitivity = 0x1E1B7B8;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x48;
            constexpr std::ptrdiff_t dwViewAngles = 0x1E29890;
            constexpr std::ptrdiff_t dwViewMatrix = 0x1E1EC80;
            constexpr std::ptrdiff_t dwViewRender = 0x1E1FAA0;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x1DBC3F0;
        }
        // Module: engine2.dll
        namespace engine2_dll {
            constexpr std::ptrdiff_t dwBuildNumber = 0x5EB3D4;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0x5EA4F0;
            constexpr std::ptrdiff_t dwNetworkGameClient_clientTickCount = 0x358;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x23C;
            constexpr std::ptrdiff_t dwNetworkGameClient_isBackgroundMap = 0x2C142F;
            constexpr std::ptrdiff_t dwNetworkGameClient_localPlayer = 0xE8;
            constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x230;
            constexpr std::ptrdiff_t dwNetworkGameClient_serverTickCount = 0x23C;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x220;
            constexpr std::ptrdiff_t dwWindowHeight = 0x8E967C;
            constexpr std::ptrdiff_t dwWindowWidth = 0x8E9678;
        }
        // Module: inputsystem.dll
        namespace inputsystem_dll {
            constexpr std::ptrdiff_t dwInputSystem = 0x45A20;
        }
        // Module: matchmaking.dll
        namespace matchmaking_dll {
            constexpr std::ptrdiff_t dwGameTypes = 0x1B5EE0;
        }
        // Module: soundsystem.dll
        namespace soundsystem_dll {
            constexpr std::ptrdiff_t dwSoundSystem = 0x3E3E30;
            constexpr std::ptrdiff_t dwSoundSystem_engineViewData = 0x7C;
        }
    }
}
