// Generated using https://github.com/a2x/cs2-dumper
// 2026-05-19 09:08:26.848173800 UTC

#pragma once

#include <cstddef>
#include <cstdint>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x237B5B0;
            constexpr std::ptrdiff_t dwEntityList = 0x250C5B0;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x250C5B0;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x2090;
            constexpr std::ptrdiff_t dwGameRules = 0x2366788;
            constexpr std::ptrdiff_t dwGlobalVars = 0x2085788;
            constexpr std::ptrdiff_t dwGlowManager = 0x2363580;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x2345D50;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x2090880;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x2374278;
            constexpr std::ptrdiff_t dwPrediction = 0x2090790;
            constexpr std::ptrdiff_t dwSensitivity = 0x2364098;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x58;
            constexpr std::ptrdiff_t dwViewAngles = 0x237BC38;
            constexpr std::ptrdiff_t dwViewMatrix = 0x236C2F0;
            constexpr std::ptrdiff_t dwViewRender = 0x236B4F8;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x22E4518;
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
            constexpr std::ptrdiff_t dwGameTypes = 0x1DF0B0;
        }
        // Module: soundsystem.dll
        namespace soundsystem_dll {
            constexpr std::ptrdiff_t dwSoundSystem = 0x512360;
            constexpr std::ptrdiff_t dwSoundSystem_engineViewData = 0x7C;
        }
    }
}
