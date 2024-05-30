// Generated using https://github.com/a2x/cs2-dumper
// 2024-05-30 01:25:57.219187800 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x1A0E270;
            constexpr std::ptrdiff_t dwEntityList = 0x19A4380;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x1AC3208;
            constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1510;
            constexpr std::ptrdiff_t dwGameRules = 0x1A01EE8;
            constexpr std::ptrdiff_t dwGlobalVars = 0x1802BF8;
            constexpr std::ptrdiff_t dwGlowManager = 0x1A01600;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x19F4468;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x180EFB8;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x1A0B5E8;
            constexpr std::ptrdiff_t dwPrediction = 0x180EE70;
            constexpr std::ptrdiff_t dwSensitivity = 0x1A02BA8;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
            constexpr std::ptrdiff_t dwViewAngles = 0x1A13688;
            constexpr std::ptrdiff_t dwViewMatrix = 0x1A06530;
            constexpr std::ptrdiff_t dwViewRender = 0x1A06E48;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x19A8390;
        }
        // Module: engine2.dll
        namespace engine2_dll {
            constexpr std::ptrdiff_t dwBuildNumber = 0x5207C4;
            constexpr std::ptrdiff_t dwEngineViewData = 0x5DCB7C;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0x51FB70;
            constexpr std::ptrdiff_t dwNetworkGameClient_clientTickCount = 0x178;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x278;
            constexpr std::ptrdiff_t dwNetworkGameClient_isBackgroundMap = 0x28145F;
            constexpr std::ptrdiff_t dwNetworkGameClient_localPlayer = 0xF0;
            constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x270;
            constexpr std::ptrdiff_t dwNetworkGameClient_serverTickCount = 0x174;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x260;
            constexpr std::ptrdiff_t dwSoundService = 0x5DCAE0;
            constexpr std::ptrdiff_t dwWindowHeight = 0x5E045C;
            constexpr std::ptrdiff_t dwWindowWidth = 0x5E0458;
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
