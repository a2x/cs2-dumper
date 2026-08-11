// Generated using https://github.com/a2x/cs2-dumper
// 2026-08-11 02:15:46.596267700 UTC

#pragma once

#include <cstddef>
#include <cstdint>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x23BEB20;
            constexpr std::ptrdiff_t dwEntityList = 0x2554050;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x2554050;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x2090;
            constexpr std::ptrdiff_t dwGameRules = 0x23A8BD8;
            constexpr std::ptrdiff_t dwGlobalVars = 0x2094D38;
            constexpr std::ptrdiff_t dwGlowManager = 0x23A5908;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x2383DA0;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x23A9118;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x2373888;
            constexpr std::ptrdiff_t dwPrediction = 0x23A9020;
            constexpr std::ptrdiff_t dwSensitivity = 0x23A6428;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x58;
            constexpr std::ptrdiff_t dwViewAngles = 0x23BF1A8;
            constexpr std::ptrdiff_t dwViewMatrix = 0x23AE550;
            constexpr std::ptrdiff_t dwViewRender = 0x23AE5A8;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x2321D90;
        }
        // Module: engine2.dll
        namespace engine2_dll {
            constexpr std::ptrdiff_t dwBuildNumber = 0x60F594;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0x90D4B0;
            constexpr std::ptrdiff_t dwNetworkGameClient_clientTickCount = 0x378;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x24C;
            constexpr std::ptrdiff_t dwNetworkGameClient_isBackgroundMap = 0x2C141F;
            constexpr std::ptrdiff_t dwNetworkGameClient_localPlayer = 0xF8;
            constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x240;
            constexpr std::ptrdiff_t dwNetworkGameClient_serverTickCount = 0x24C;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x230;
            constexpr std::ptrdiff_t dwWindowHeight = 0x9118D4;
            constexpr std::ptrdiff_t dwWindowWidth = 0x9118D0;
        }
        // Module: inputsystem.dll
        namespace inputsystem_dll {
            constexpr std::ptrdiff_t dwInputSystem = 0x45BA0;
        }
        // Module: matchmaking.dll
        namespace matchmaking_dll {
            constexpr std::ptrdiff_t dwGameTypes = 0x1ADF80;
        }
        // Module: soundsystem.dll
        namespace soundsystem_dll {
            constexpr std::ptrdiff_t dwSoundSystem = 0x54B5D0;
            constexpr std::ptrdiff_t dwSoundSystem_engineViewData = 0x7C;
        }
    }
}
