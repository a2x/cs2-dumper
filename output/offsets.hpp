// Generated using https://github.com/a2x/cs2-dumper
// 2024-09-03 23:41:14.067576500 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x19C20D8;
            constexpr std::ptrdiff_t dwEntityList = 0x1956A68;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x1A76178;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x1510;
            constexpr std::ptrdiff_t dwGameRules = 0x19B3A58;
            constexpr std::ptrdiff_t dwGlobalVars = 0x17B74F8;
            constexpr std::ptrdiff_t dwGlowManager = 0x19B3A78;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x19A66C8;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x17C37F0;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x19BD438;
            constexpr std::ptrdiff_t dwPrediction = 0x17C3690;
            constexpr std::ptrdiff_t dwSensitivity = 0x19B5038;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
            constexpr std::ptrdiff_t dwViewAngles = 0x19C7E58;
            constexpr std::ptrdiff_t dwViewMatrix = 0x19B89F0;
            constexpr std::ptrdiff_t dwViewRender = 0x19B9180;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x195AA70;
        }
        // Module: engine2.dll
        namespace engine2_dll {
            constexpr std::ptrdiff_t dwBuildNumber = 0x52F7F4;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0x52EB80;
            constexpr std::ptrdiff_t dwNetworkGameClient_clientTickCount = 0x178;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x27C;
            constexpr std::ptrdiff_t dwNetworkGameClient_isBackgroundMap = 0x281477;
            constexpr std::ptrdiff_t dwNetworkGameClient_localPlayer = 0xF0;
            constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x270;
            constexpr std::ptrdiff_t dwNetworkGameClient_serverTickCount = 0x174;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x260;
            constexpr std::ptrdiff_t dwWindowHeight = 0x5F4BF4;
            constexpr std::ptrdiff_t dwWindowWidth = 0x5F4BF0;
        }
        // Module: inputsystem.dll
        namespace inputsystem_dll {
            constexpr std::ptrdiff_t dwInputSystem = 0x377E0;
        }
        // Module: matchmaking.dll
        namespace matchmaking_dll {
            constexpr std::ptrdiff_t dwGameTypes = 0x1A41C0;
            constexpr std::ptrdiff_t dwGameTypes_mapName = 0x120;
        }
        // Module: soundsystem.dll
        namespace soundsystem_dll {
            constexpr std::ptrdiff_t dwSoundSystem = 0x334E30;
            constexpr std::ptrdiff_t dwSoundSystem_engineViewData = 0x7C;
        }
    }
}
