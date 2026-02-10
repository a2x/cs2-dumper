// Generated using https://github.com/a2x/cs2-dumper
// 2026-02-10 22:35:02.976159900 UTC

#pragma once

#include <cstddef>
#include <cstdint>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x2314910;
            constexpr std::ptrdiff_t dwEntityList = 0x24AA0D8;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x24AA0D8;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x20A0;
            constexpr std::ptrdiff_t dwGameRules = 0x2308DA0;
            constexpr std::ptrdiff_t dwGlobalVars = 0x20595D0;
            constexpr std::ptrdiff_t dwGlowManager = 0x2305BA0;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x22EF0B8;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x2064AE0;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x23120B0;
            constexpr std::ptrdiff_t dwPrediction = 0x20649F0;
            constexpr std::ptrdiff_t dwSensitivity = 0x23066B8;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x58;
            constexpr std::ptrdiff_t dwViewAngles = 0x2314F98;
            constexpr std::ptrdiff_t dwViewMatrix = 0x230ADE0;
            constexpr std::ptrdiff_t dwViewRender = 0x230B1E8;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x2293E30;
        }
        // Module: engine2.dll
        namespace engine2_dll {
            constexpr std::ptrdiff_t dwBuildNumber = 0x60A504;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0x905310;
            constexpr std::ptrdiff_t dwNetworkGameClient_clientTickCount = 0x378;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x24C;
            constexpr std::ptrdiff_t dwNetworkGameClient_isBackgroundMap = 0x2C141F;
            constexpr std::ptrdiff_t dwNetworkGameClient_localPlayer = 0xF8;
            constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x240;
            constexpr std::ptrdiff_t dwNetworkGameClient_serverTickCount = 0x24C;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x230;
            constexpr std::ptrdiff_t dwWindowHeight = 0x9096DC;
            constexpr std::ptrdiff_t dwWindowWidth = 0x9096D8;
        }
        // Module: inputsystem.dll
        namespace inputsystem_dll {
            constexpr std::ptrdiff_t dwInputSystem = 0x45AD0;
        }
        // Module: matchmaking.dll
        namespace matchmaking_dll {
            constexpr std::ptrdiff_t dwGameTypes = 0x1B8000;
        }
        // Module: soundsystem.dll
        namespace soundsystem_dll {
            constexpr std::ptrdiff_t dwSoundSystem = 0x4F3490;
            constexpr std::ptrdiff_t dwSoundSystem_engineViewData = 0x7C;
        }
    }
}
