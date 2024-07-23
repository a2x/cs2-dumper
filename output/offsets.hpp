// Generated using https://github.com/a2x/cs2-dumper
// 2024-07-23 02:33:52.197332800 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x1A28E30;
            constexpr std::ptrdiff_t dwEntityList = 0x19BEEB0;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x1ADDBC8;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x1510;
            constexpr std::ptrdiff_t dwGameRules = 0x1A1C668;
            constexpr std::ptrdiff_t dwGlobalVars = 0x1818638;
            constexpr std::ptrdiff_t dwGlowManager = 0x1A1BD50;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x1A0E9A8;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x1824A08;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x1A261A8;
            constexpr std::ptrdiff_t dwPrediction = 0x18248C0;
            constexpr std::ptrdiff_t dwSensitivity = 0x1A1D338;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
            constexpr std::ptrdiff_t dwViewAngles = 0x1A2E248;
            constexpr std::ptrdiff_t dwViewMatrix = 0x1A20CD0;
            constexpr std::ptrdiff_t dwViewRender = 0x1A21468;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x19C2940;
        }
        // Module: engine2.dll
        namespace engine2_dll {
            constexpr std::ptrdiff_t dwBuildNumber = 0x52F834;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0x52EBA0;
            constexpr std::ptrdiff_t dwNetworkGameClient_clientTickCount = 0x178;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x278;
            constexpr std::ptrdiff_t dwNetworkGameClient_isBackgroundMap = 0x281477;
            constexpr std::ptrdiff_t dwNetworkGameClient_localPlayer = 0xF0;
            constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x270;
            constexpr std::ptrdiff_t dwNetworkGameClient_serverTickCount = 0x174;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x260;
            constexpr std::ptrdiff_t dwWindowHeight = 0x5F0424;
            constexpr std::ptrdiff_t dwWindowWidth = 0x5F0420;
        }
        // Module: inputsystem.dll
        namespace inputsystem_dll {
            constexpr std::ptrdiff_t dwInputSystem = 0x387F0;
        }
        // Module: matchmaking.dll
        namespace matchmaking_dll {
            constexpr std::ptrdiff_t dwGameTypes = 0x1A41C0;
            constexpr std::ptrdiff_t dwGameTypes_mapName = 0x120;
        }
        // Module: soundsystem.dll
        namespace soundsystem_dll {
            constexpr std::ptrdiff_t dwSoundSystem = 0x334E40;
            constexpr std::ptrdiff_t dwSoundSystem_engineViewData = 0x7C;
        }
    }
}
