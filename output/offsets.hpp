// Generated using https://github.com/a2x/cs2-dumper
// 2025-07-03 04:46:07.725715 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x1A77100;
            constexpr std::ptrdiff_t dwEntityList = 0x1A044C0;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x1B27B48;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x20F0;
            constexpr std::ptrdiff_t dwGameRules = 0x1A68B28;
            constexpr std::ptrdiff_t dwGlobalVars = 0x184BEB0;
            constexpr std::ptrdiff_t dwGlowManager = 0x1A68278;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x1A52D00;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x18580D0;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x1A71C30;
            constexpr std::ptrdiff_t dwPrediction = 0x1857F50;
            constexpr std::ptrdiff_t dwSensitivity = 0x1A69848;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
            constexpr std::ptrdiff_t dwViewAngles = 0x1A774D0;
            constexpr std::ptrdiff_t dwViewMatrix = 0x1A6D260;
            constexpr std::ptrdiff_t dwViewRender = 0x1A6DB70;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x1A06550;
        }
        // Module: engine2.dll
        namespace engine2_dll {
            constexpr std::ptrdiff_t dwBuildNumber = 0x540BE4;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0x53FCE0;
            constexpr std::ptrdiff_t dwNetworkGameClient_clientTickCount = 0x368;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x27C;
            constexpr std::ptrdiff_t dwNetworkGameClient_isBackgroundMap = 0x281447;
            constexpr std::ptrdiff_t dwNetworkGameClient_localPlayer = 0xF0;
            constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x238;
            constexpr std::ptrdiff_t dwNetworkGameClient_serverTickCount = 0x36C;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x228;
            constexpr std::ptrdiff_t dwWindowHeight = 0x62359C;
            constexpr std::ptrdiff_t dwWindowWidth = 0x623598;
        }
        // Module: inputsystem.dll
        namespace inputsystem_dll {
            constexpr std::ptrdiff_t dwInputSystem = 0x387E0;
        }
        // Module: matchmaking.dll
        namespace matchmaking_dll {
            constexpr std::ptrdiff_t dwGameTypes = 0x1A52E0;
            constexpr std::ptrdiff_t dwGameTypes_mapName = 0x120;
        }
        // Module: soundsystem.dll
        namespace soundsystem_dll {
            constexpr std::ptrdiff_t dwSoundSystem = 0x3A15F0;
            constexpr std::ptrdiff_t dwSoundSystem_engineViewData = 0x7C;
        }
    }
}
