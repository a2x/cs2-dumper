// Generated using https://github.com/a2x/cs2-dumper
// 2024-05-25 01:48:22.657979400 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x1A0D080;
            constexpr std::ptrdiff_t dwEntityList = 0x19A3328;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x1AC2028;
            constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1510;
            constexpr std::ptrdiff_t dwGameRules = 0x1A00D08;
            constexpr std::ptrdiff_t dwGlobalVars = 0x1801BF0;
            constexpr std::ptrdiff_t dwGlowManager = 0x1A00420;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x19F3298;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x180DB18;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x1A0A3F8;
            constexpr std::ptrdiff_t dwPrediction = 0x180D9D0;
            constexpr std::ptrdiff_t dwSensitivity = 0x1A019B8;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
            constexpr std::ptrdiff_t dwViewAngles = 0x1A12498;
            constexpr std::ptrdiff_t dwViewMatrix = 0x1A052D0;
            constexpr std::ptrdiff_t dwViewRender = 0x1A05AE0;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x19A71B0;
        }
        // Module: engine2.dll
        namespace engine2_dll {
            constexpr std::ptrdiff_t dwBuildNumber = 0x51D784;
            constexpr std::ptrdiff_t dwEngineViewData = 0x5D99DC;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0x51CB58;
            constexpr std::ptrdiff_t dwNetworkGameClient_clientTickCount = 0x178;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x278;
            constexpr std::ptrdiff_t dwNetworkGameClient_isBackgroundMap = 0x28145F;
            constexpr std::ptrdiff_t dwNetworkGameClient_localPlayer = 0xF0;
            constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x270;
            constexpr std::ptrdiff_t dwNetworkGameClient_serverTickCount = 0x174;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x260;
            constexpr std::ptrdiff_t dwSoundService = 0x5D9940;
            constexpr std::ptrdiff_t dwWindowHeight = 0x5DD2B4;
            constexpr std::ptrdiff_t dwWindowWidth = 0x5DD2B0;
        }
        // Module: inputsystem.dll
        namespace inputsystem_dll {
            constexpr std::ptrdiff_t dwInputSystem = 0x387D0;
        }
        // Module: matchmaking.dll
        namespace matchmaking_dll {
            constexpr std::ptrdiff_t dwGameTypes = 0x1D2290;
            constexpr std::ptrdiff_t dwGameTypes_mapName = 0x1D23B0;
        }
    }
}
