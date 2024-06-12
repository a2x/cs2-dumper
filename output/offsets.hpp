// Generated using https://github.com/a2x/cs2-dumper
// 2024-06-12 12:24:23.003810900 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x1A1E190;
            constexpr std::ptrdiff_t dwEntityList = 0x19B4998;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x1AD38B8;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x1510;
            constexpr std::ptrdiff_t dwGameRules = 0x1A123F8;
            constexpr std::ptrdiff_t dwGlobalVars = 0x180E4E0;
            constexpr std::ptrdiff_t dwGlowManager = 0x1A11B10;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x1A04748;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x181A998;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x1A1B508;
            constexpr std::ptrdiff_t dwPrediction = 0x181A850;
            constexpr std::ptrdiff_t dwSensitivity = 0x1A13238;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
            constexpr std::ptrdiff_t dwViewAngles = 0x1A235A8;
            constexpr std::ptrdiff_t dwViewMatrix = 0x1A16A50;
            constexpr std::ptrdiff_t dwViewRender = 0x1A17368;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x19B86D0;
        }
        // Module: engine2.dll
        namespace engine2_dll {
            constexpr std::ptrdiff_t dwBuildNumber = 0x52F834;
            constexpr std::ptrdiff_t dwEngineViewData = 0x5ECBFC;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0x52EBA0;
            constexpr std::ptrdiff_t dwNetworkGameClient_clientTickCount = 0x178;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x278;
            constexpr std::ptrdiff_t dwNetworkGameClient_isBackgroundMap = 0x281477;
            constexpr std::ptrdiff_t dwNetworkGameClient_localPlayer = 0xF0;
            constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x270;
            constexpr std::ptrdiff_t dwNetworkGameClient_serverTickCount = 0x174;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x260;
            constexpr std::ptrdiff_t dwSoundService = 0x5ECB60;
            constexpr std::ptrdiff_t dwWindowHeight = 0x5F040C;
            constexpr std::ptrdiff_t dwWindowWidth = 0x5F0408;
        }
        // Module: inputsystem.dll
        namespace inputsystem_dll {
            constexpr std::ptrdiff_t dwInputSystem = 0x387F0;
        }
        // Module: matchmaking.dll
        namespace matchmaking_dll {
            constexpr std::ptrdiff_t dwGameTypes = 0x1A41C0;
            constexpr std::ptrdiff_t dwGameTypes_mapName = 0x1A42E0;
        }
    }
}
