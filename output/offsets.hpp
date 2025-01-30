// Generated using https://github.com/a2x/cs2-dumper
// 2025-01-30 15:41:34.124155800 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x1A9E030;
            constexpr std::ptrdiff_t dwEntityList = 0x1A292F0;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x1B4F1F8;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x20F0;
            constexpr std::ptrdiff_t dwGameRules = 0x1A8FBD8;
            constexpr std::ptrdiff_t dwGlobalVars = 0x1870BA8;
            constexpr std::ptrdiff_t dwGlowManager = 0x1A8F300;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x1A79C58;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x187CEF0;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x1A986D0;
            constexpr std::ptrdiff_t dwPrediction = 0x187CD70;
            constexpr std::ptrdiff_t dwSensitivity = 0x1A908F8;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
            constexpr std::ptrdiff_t dwViewAngles = 0x1A9E400;
            constexpr std::ptrdiff_t dwViewMatrix = 0x1A942F0;
            constexpr std::ptrdiff_t dwViewRender = 0x1A94AD8;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x1A2C420;
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
            constexpr std::ptrdiff_t dwWindowHeight = 0x62354C;
            constexpr std::ptrdiff_t dwWindowWidth = 0x623548;
        }
        // Module: inputsystem.dll
        namespace inputsystem_dll {
            constexpr std::ptrdiff_t dwInputSystem = 0x387E0;
        }
        // Module: matchmaking.dll
        namespace matchmaking_dll {
            constexpr std::ptrdiff_t dwGameTypes = 0x1A41B0;
            constexpr std::ptrdiff_t dwGameTypes_mapName = 0x120;
        }
        // Module: soundsystem.dll
        namespace soundsystem_dll {
            constexpr std::ptrdiff_t dwSoundSystem = 0x39E5E0;
            constexpr std::ptrdiff_t dwSoundSystem_engineViewData = 0x7C;
        }
    }
}
