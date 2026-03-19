// Generated using https://github.com/a2x/cs2-dumper
// 2026-03-19 10:05:24.652271200 UTC

#pragma once

#include <cstddef>
#include <cstdint>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x2319FC0;
            constexpr std::ptrdiff_t dwEntityList = 0x24AF268;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x24AF268;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x20A0;
            constexpr std::ptrdiff_t dwGameRules = 0x230DEE0;
            constexpr std::ptrdiff_t dwGlobalVars = 0x205E5C0;
            constexpr std::ptrdiff_t dwGlowManager = 0x230ACE8;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x22F4188;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x2069B50;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x2317740;
            constexpr std::ptrdiff_t dwPrediction = 0x2069A60;
            constexpr std::ptrdiff_t dwSensitivity = 0x230B7F8;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x58;
            constexpr std::ptrdiff_t dwViewAngles = 0x231A648;
            constexpr std::ptrdiff_t dwViewMatrix = 0x230FF20;
            constexpr std::ptrdiff_t dwViewRender = 0x2310338;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x2298F00;
        }
        // Module: engine2.dll
        namespace engine2_dll {
            constexpr std::ptrdiff_t dwBuildNumber = 0x60D514;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0x908530;
            constexpr std::ptrdiff_t dwNetworkGameClient_clientTickCount = 0x378;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x24C;
            constexpr std::ptrdiff_t dwNetworkGameClient_isBackgroundMap = 0x2C141F;
            constexpr std::ptrdiff_t dwNetworkGameClient_localPlayer = 0xF8;
            constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x240;
            constexpr std::ptrdiff_t dwNetworkGameClient_serverTickCount = 0x24C;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x230;
            constexpr std::ptrdiff_t dwWindowHeight = 0x90C8F4;
            constexpr std::ptrdiff_t dwWindowWidth = 0x90C8F0;
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
            constexpr std::ptrdiff_t dwSoundSystem = 0x4F3470;
            constexpr std::ptrdiff_t dwSoundSystem_engineViewData = 0x7C;
        }
    }
}
