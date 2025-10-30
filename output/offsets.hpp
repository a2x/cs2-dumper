// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-30 00:26:21.405923900 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x1E34D90;
            constexpr std::ptrdiff_t dwEntityList = 0x1D0C9F8;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x1FB15D0;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x20F0;
            constexpr std::ptrdiff_t dwGameRules = 0x1E2A080;
            constexpr std::ptrdiff_t dwGlobalVars = 0x1BDD078;
            constexpr std::ptrdiff_t dwGlowManager = 0x1E26F18;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x1E16870;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x1BE7DA0;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x1E30360;
            constexpr std::ptrdiff_t dwPrediction = 0x1BE7CD0;
            constexpr std::ptrdiff_t dwSensitivity = 0x1E27978;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x50;
            constexpr std::ptrdiff_t dwViewAngles = 0x1E35440;
            constexpr std::ptrdiff_t dwViewMatrix = 0x1E2AEC0;
            constexpr std::ptrdiff_t dwViewRender = 0x1E2BA38;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x1DC7DC8;
        }
        // Module: engine2.dll
        namespace engine2_dll {
            constexpr std::ptrdiff_t dwBuildNumber = 0x5EF3D4;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0x5EE4F0;
            constexpr std::ptrdiff_t dwNetworkGameClient_clientTickCount = 0x390;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x23C;
            constexpr std::ptrdiff_t dwNetworkGameClient_isBackgroundMap = 0x2C1467;
            constexpr std::ptrdiff_t dwNetworkGameClient_localPlayer = 0xE8;
            constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x230;
            constexpr std::ptrdiff_t dwNetworkGameClient_serverTickCount = 0x23C;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x220;
            constexpr std::ptrdiff_t dwWindowHeight = 0x8ED61C;
            constexpr std::ptrdiff_t dwWindowWidth = 0x8ED618;
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
            constexpr std::ptrdiff_t dwSoundSystem = 0x3EAE50;
            constexpr std::ptrdiff_t dwSoundSystem_engineViewData = 0x7C;
        }
    }
}
