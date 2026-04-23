// Generated using https://github.com/a2x/cs2-dumper
// 2026-04-23 01:25:07.655854600 UTC

#pragma once

#include <cstddef>
#include <cstdint>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x233DD80;
            constexpr std::ptrdiff_t dwEntityList = 0x24CED50;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x24CED50;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x2090;
            constexpr std::ptrdiff_t dwGameRules = 0x2328F38;
            constexpr std::ptrdiff_t dwGlobalVars = 0x20496A0;
            constexpr std::ptrdiff_t dwGlowManager = 0x2325D30;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x2308520;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x20547A0;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x2336A48;
            constexpr std::ptrdiff_t dwPrediction = 0x20546B0;
            constexpr std::ptrdiff_t dwSensitivity = 0x2326848;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x58;
            constexpr std::ptrdiff_t dwViewAngles = 0x233E408;
            constexpr std::ptrdiff_t dwViewMatrix = 0x232EAC0;
            constexpr std::ptrdiff_t dwViewRender = 0x232DCB8;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x22A6CB8;
        }
        // Module: engine2.dll
        namespace engine2_dll {
            constexpr std::ptrdiff_t dwBuildNumber = 0x60CC74;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0x90A0C0;
            constexpr std::ptrdiff_t dwNetworkGameClient_clientTickCount = 0x378;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x24C;
            constexpr std::ptrdiff_t dwNetworkGameClient_isBackgroundMap = 0x2C141F;
            constexpr std::ptrdiff_t dwNetworkGameClient_localPlayer = 0xF8;
            constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x240;
            constexpr std::ptrdiff_t dwNetworkGameClient_serverTickCount = 0x24C;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x230;
            constexpr std::ptrdiff_t dwWindowHeight = 0x90E4EC;
            constexpr std::ptrdiff_t dwWindowWidth = 0x90E4E8;
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
