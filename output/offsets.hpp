// Generated using https://github.com/a2x/cs2-dumper
// 2026-05-07 22:28:06.173739700 UTC

#pragma once

#include <cstddef>
#include <cstdint>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x233FC00;
            constexpr std::ptrdiff_t dwEntityList = 0x24D0DC0;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x24D0DC0;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x2090;
            constexpr std::ptrdiff_t dwGameRules = 0x232AF48;
            constexpr std::ptrdiff_t dwGlobalVars = 0x204B5D8;
            constexpr std::ptrdiff_t dwGlowManager = 0x2327D40;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x230A4F0;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x2056700;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x2338A68;
            constexpr std::ptrdiff_t dwPrediction = 0x2056610;
            constexpr std::ptrdiff_t dwSensitivity = 0x2328858;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x58;
            constexpr std::ptrdiff_t dwViewAngles = 0x2340288;
            constexpr std::ptrdiff_t dwViewMatrix = 0x2330AE0;
            constexpr std::ptrdiff_t dwViewRender = 0x232FCD0;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x22A8E38;
        }
        // Module: engine2.dll
        namespace engine2_dll {
            constexpr std::ptrdiff_t dwBuildNumber = 0x60BC74;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0x9090C0;
            constexpr std::ptrdiff_t dwNetworkGameClient_clientTickCount = 0x378;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x24C;
            constexpr std::ptrdiff_t dwNetworkGameClient_isBackgroundMap = 0x2C141F;
            constexpr std::ptrdiff_t dwNetworkGameClient_localPlayer = 0xF8;
            constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x240;
            constexpr std::ptrdiff_t dwNetworkGameClient_serverTickCount = 0x24C;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x230;
            constexpr std::ptrdiff_t dwWindowHeight = 0x90D4EC;
            constexpr std::ptrdiff_t dwWindowWidth = 0x90D4E8;
        }
        // Module: inputsystem.dll
        namespace inputsystem_dll {
            constexpr std::ptrdiff_t dwInputSystem = 0x42B50;
        }
        // Module: matchmaking.dll
        namespace matchmaking_dll {
            constexpr std::ptrdiff_t dwGameTypes = 0x1B0F80;
        }
        // Module: soundsystem.dll
        namespace soundsystem_dll {
            constexpr std::ptrdiff_t dwSoundSystem = 0x512360;
            constexpr std::ptrdiff_t dwSoundSystem_engineViewData = 0x7C;
        }
    }
}
