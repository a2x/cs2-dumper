// Generated using https://github.com/a2x/cs2-dumper
// 2026-07-01 03:08:20.812145800 UTC

#pragma once

#include <cstddef>
#include <cstdint>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x23560C0;
            constexpr std::ptrdiff_t dwEntityList = 0x24E7680;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x24E7680;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x2090;
            constexpr std::ptrdiff_t dwGameRules = 0x2340FE8;
            constexpr std::ptrdiff_t dwGlobalVars = 0x20616D0;
            constexpr std::ptrdiff_t dwGlowManager = 0x233DDE0;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x2320570;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x2341528;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x234FE28;
            constexpr std::ptrdiff_t dwPrediction = 0x2341430;
            constexpr std::ptrdiff_t dwSensitivity = 0x233E8F8;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x58;
            constexpr std::ptrdiff_t dwViewAngles = 0x2356748;
            constexpr std::ptrdiff_t dwViewMatrix = 0x23469C0;
            constexpr std::ptrdiff_t dwViewRender = 0x2346D70;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x22BED18;
        }
        // Module: engine2.dll
        namespace engine2_dll {
            constexpr std::ptrdiff_t dwBuildNumber = 0x60CC74;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0x90A1A0;
            constexpr std::ptrdiff_t dwNetworkGameClient_clientTickCount = 0x378;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x24C;
            constexpr std::ptrdiff_t dwNetworkGameClient_isBackgroundMap = 0x2C141F;
            constexpr std::ptrdiff_t dwNetworkGameClient_localPlayer = 0xF8;
            constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x240;
            constexpr std::ptrdiff_t dwNetworkGameClient_serverTickCount = 0x24C;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x230;
            constexpr std::ptrdiff_t dwWindowHeight = 0x90E5C4;
            constexpr std::ptrdiff_t dwWindowWidth = 0x90E5C0;
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
