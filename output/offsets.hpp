// Generated using https://github.com/a2x/cs2-dumper
// 2025-09-19 17:18:57.328261100 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x1E2C670;
            constexpr std::ptrdiff_t dwEntityList = 0x1D05458;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x1FA6548;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x20F0;
            constexpr std::ptrdiff_t dwGameRules = 0x1E21450;
            constexpr std::ptrdiff_t dwGlobalVars = 0x1BD6150;
            constexpr std::ptrdiff_t dwGlowManager = 0x1E1E220;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x1E0E578;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x1BE0E90;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x1E27910;
            constexpr std::ptrdiff_t dwPrediction = 0x1BE0DC0;
            constexpr std::ptrdiff_t dwSensitivity = 0x1E1ED48;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x48;
            constexpr std::ptrdiff_t dwViewAngles = 0x1E2CE20;
            constexpr std::ptrdiff_t dwViewMatrix = 0x1E22220;
            constexpr std::ptrdiff_t dwViewRender = 0x1E23040;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x1DBFAD8;
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
