// Generated using https://github.com/a2x/cs2-dumper
// 2025-01-25 11:40:13.476421 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x1A8E5D0;
            constexpr std::ptrdiff_t dwEntityList = 0x1A197E8;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x1B3F728;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x20F0;
            constexpr std::ptrdiff_t dwGameRules = 0x1A80188;
            constexpr std::ptrdiff_t dwGlobalVars = 0x1861AA8;
            constexpr std::ptrdiff_t dwGlowManager = 0x1A7F8D0;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x1A6A210;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x186DE00;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x1A88DA0;
            constexpr std::ptrdiff_t dwPrediction = 0x186DC80;
            constexpr std::ptrdiff_t dwSensitivity = 0x1A81018;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
            constexpr std::ptrdiff_t dwViewAngles = 0x1A8E9A0;
            constexpr std::ptrdiff_t dwViewMatrix = 0x1A84890;
            constexpr std::ptrdiff_t dwViewRender = 0x1A85208;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x1A1CA70;
        }
        // Module: engine2.dll
        namespace engine2_dll {
            constexpr std::ptrdiff_t dwBuildNumber = 0x53ABE4;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0x539CE0;
            constexpr std::ptrdiff_t dwNetworkGameClient_clientTickCount = 0x368;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x27C;
            constexpr std::ptrdiff_t dwNetworkGameClient_isBackgroundMap = 0x281447;
            constexpr std::ptrdiff_t dwNetworkGameClient_localPlayer = 0xF0;
            constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x238;
            constexpr std::ptrdiff_t dwNetworkGameClient_serverTickCount = 0x36C;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x228;
            constexpr std::ptrdiff_t dwWindowHeight = 0x61D3E4;
            constexpr std::ptrdiff_t dwWindowWidth = 0x61D3E0;
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
