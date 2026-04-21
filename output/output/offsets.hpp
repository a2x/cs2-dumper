// Generated using https://github.com/a2x/cs2-dumper
// 2026-04-21 18:24:51.331450100 UTC

#pragma once

#include <cstddef>
#include <cstdint>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x23386E0;
            constexpr std::ptrdiff_t dwEntityList = 0x24C9710;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x24C9710;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x2090;
            constexpr std::ptrdiff_t dwGameRules = 0x19E9B80;
            constexpr std::ptrdiff_t dwGlobalVars = 0x20444E8;
            constexpr std::ptrdiff_t dwGlowManager = 0x23207A8;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x2302E80;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x204F630;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x2331848;
            constexpr std::ptrdiff_t dwPrediction = 0x204F540;
            constexpr std::ptrdiff_t dwSensitivity = 0x2321208;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x58;
            constexpr std::ptrdiff_t dwViewAngles = 0x2338D68;
            constexpr std::ptrdiff_t dwViewMatrix = 0x23290D0;
            constexpr std::ptrdiff_t dwViewRender = 0x23292E8;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x22A1928;
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
