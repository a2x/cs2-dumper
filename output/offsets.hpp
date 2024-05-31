// Generated using https://github.com/a2x/cs2-dumper
// 2024-05-31 11:14:33.690971400 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x1A102E0;
            constexpr std::ptrdiff_t dwEntityList = 0x19A63A0;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x1AC52A8;
            constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1510;
            constexpr std::ptrdiff_t dwGameRules = 0x1A03F58;
            constexpr std::ptrdiff_t dwGlobalVars = 0x1804C58;
            constexpr std::ptrdiff_t dwGlowManager = 0x1A03670;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x19F6488;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x1810FA8;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x1A0D658;
            constexpr std::ptrdiff_t dwPrediction = 0x1810E60;
            constexpr std::ptrdiff_t dwSensitivity = 0x1A04C18;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
            constexpr std::ptrdiff_t dwViewAngles = 0x1A156F8;
            constexpr std::ptrdiff_t dwViewMatrix = 0x1A085A0;
            constexpr std::ptrdiff_t dwViewRender = 0x1A08EB8;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x19AA3B0;
        }
        // Module: engine2.dll
        namespace engine2_dll {
            constexpr std::ptrdiff_t dwBuildNumber = 0x5207D4;
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
