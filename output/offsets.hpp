// Generated using https://github.com/a2x/cs2-dumper
// 2025-03-20 23:35:58.992097100 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x1AAE4B0;
            constexpr std::ptrdiff_t dwEntityList = 0x1A38800;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x1B5F568;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x20F0;
            constexpr std::ptrdiff_t dwGameRules = 0x1A9F630;
            constexpr std::ptrdiff_t dwGlobalVars = 0x1880CD0;
            constexpr std::ptrdiff_t dwGlowManager = 0x1A9F650;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x1A89E90;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x188CF70;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x1AA97F0;
            constexpr std::ptrdiff_t dwPrediction = 0x188CDF0;
            constexpr std::ptrdiff_t dwSensitivity = 0x1AA0C28;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
            constexpr std::ptrdiff_t dwViewAngles = 0x1AAE880;
            constexpr std::ptrdiff_t dwViewMatrix = 0x1AA45F0;
            constexpr std::ptrdiff_t dwViewRender = 0x1AA4E00;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x1A3CD60;
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
            constexpr std::ptrdiff_t dwWindowHeight = 0x6234FC;
            constexpr std::ptrdiff_t dwWindowWidth = 0x6234F8;
        }
        // Module: inputsystem.dll
        namespace inputsystem_dll {
            constexpr std::ptrdiff_t dwInputSystem = 0x387E0;
        }
        // Module: matchmaking.dll
        namespace matchmaking_dll {
            constexpr std::ptrdiff_t dwGameTypes = 0x1A3190;
            constexpr std::ptrdiff_t dwGameTypes_mapName = 0x120;
        }
        // Module: soundsystem.dll
        namespace soundsystem_dll {
            constexpr std::ptrdiff_t dwSoundSystem = 0x3A15F0;
            constexpr std::ptrdiff_t dwSoundSystem_engineViewData = 0x7C;
        }
    }
}
