// Generated using https://github.com/a2x/cs2-dumper
// 2026-03-27 23:29:07.271766300 UTC

#pragma once

#include <cstddef>
#include <cstdint>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x231B2E0;
            constexpr std::ptrdiff_t dwEntityList = 0x24B0258;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x24B0258;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x20A0;
            constexpr std::ptrdiff_t dwGameRules = 0x230EED0;
            constexpr std::ptrdiff_t dwGlobalVars = 0x205F540;
            constexpr std::ptrdiff_t dwGlowManager = 0x230BCD8;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x22F5028;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x206A9E0;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x2318A60;
            constexpr std::ptrdiff_t dwPrediction = 0x206A8F0;
            constexpr std::ptrdiff_t dwSensitivity = 0x230C7E8;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x58;
            constexpr std::ptrdiff_t dwViewAngles = 0x231B968;
            constexpr std::ptrdiff_t dwViewMatrix = 0x2310F10;
            constexpr std::ptrdiff_t dwViewRender = 0x2311328;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x229A2B0;
        }
        // Module: engine2.dll
        namespace engine2_dll {
            constexpr std::ptrdiff_t dwBuildNumber = 0x60E514;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0x9095D0;
            constexpr std::ptrdiff_t dwNetworkGameClient_clientTickCount = 0x378;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x24C;
            constexpr std::ptrdiff_t dwNetworkGameClient_isBackgroundMap = 0x2C141F;
            constexpr std::ptrdiff_t dwNetworkGameClient_localPlayer = 0xF8;
            constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x240;
            constexpr std::ptrdiff_t dwNetworkGameClient_serverTickCount = 0x24C;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x230;
            constexpr std::ptrdiff_t dwWindowHeight = 0x90D99C;
            constexpr std::ptrdiff_t dwWindowWidth = 0x90D998;
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
