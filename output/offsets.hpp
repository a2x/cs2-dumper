// Generated using https://github.com/a2x/cs2-dumper
// 2025-08-27 00:14:42.751419600 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x1E37740;
            constexpr std::ptrdiff_t dwEntityList = 0x1D0FE08;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x1FAFD98;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x20F0;
            constexpr std::ptrdiff_t dwGameRules = 0x1E29038;
            constexpr std::ptrdiff_t dwGlobalVars = 0x1BE1990;
            constexpr std::ptrdiff_t dwGlowManager = 0x1E29048;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x1E19010;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x1BEC440;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x1E32140;
            constexpr std::ptrdiff_t dwPrediction = 0x1BEC370;
            constexpr std::ptrdiff_t dwSensitivity = 0x1E29B68;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x48;
            constexpr std::ptrdiff_t dwViewAngles = 0x1E37EF0;
            constexpr std::ptrdiff_t dwViewMatrix = 0x1E2D030;
            constexpr std::ptrdiff_t dwViewRender = 0x1E2DCC0;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x1DCA4C0;
        }
        // Module: engine2.dll
        namespace engine2_dll {
            constexpr std::ptrdiff_t dwBuildNumber = 0x5E2144;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0x5E1230;
            constexpr std::ptrdiff_t dwNetworkGameClient_clientTickCount = 0x358;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x23C;
            constexpr std::ptrdiff_t dwNetworkGameClient_isBackgroundMap = 0x2C142F;
            constexpr std::ptrdiff_t dwNetworkGameClient_localPlayer = 0xE8;
            constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x230;
            constexpr std::ptrdiff_t dwNetworkGameClient_serverTickCount = 0x23C;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x220;
            constexpr std::ptrdiff_t dwWindowHeight = 0x8DA4C4;
            constexpr std::ptrdiff_t dwWindowWidth = 0x8DA4C0;
        }
        // Module: inputsystem.dll
        namespace inputsystem_dll {
            constexpr std::ptrdiff_t dwInputSystem = 0x45A20;
        }
        // Module: matchmaking.dll
        namespace matchmaking_dll {
            constexpr std::ptrdiff_t dwGameTypes = 0x1B4F10;
        }
        // Module: soundsystem.dll
        namespace soundsystem_dll {
            constexpr std::ptrdiff_t dwSoundSystem = 0x3DEB70;
            constexpr std::ptrdiff_t dwSoundSystem_engineViewData = 0x7C;
        }
    }
}
