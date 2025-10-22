// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-22 23:24:33.374715900 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x1E2FE00;
            constexpr std::ptrdiff_t dwEntityList = 0x1D07A80;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x1FAC650;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x20F0;
            constexpr std::ptrdiff_t dwGameRules = 0x1E25180;
            constexpr std::ptrdiff_t dwGlobalVars = 0x1BD8060;
            constexpr std::ptrdiff_t dwGlowManager = 0x1E22018;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x1E11978;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x1BE2D10;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x1E2B3D0;
            constexpr std::ptrdiff_t dwPrediction = 0x1BE2C40;
            constexpr std::ptrdiff_t dwSensitivity = 0x1E22A78;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x50;
            constexpr std::ptrdiff_t dwViewAngles = 0x1E304B0;
            constexpr std::ptrdiff_t dwViewMatrix = 0x1E25F30;
            constexpr std::ptrdiff_t dwViewRender = 0x1E26AA8;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x1DC2E48;
        }
        // Module: engine2.dll
        namespace engine2_dll {
            constexpr std::ptrdiff_t dwBuildNumber = 0x5EF3E4;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0x5EE4F0;
            constexpr std::ptrdiff_t dwNetworkGameClient_clientTickCount = 0x358;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x23C;
            constexpr std::ptrdiff_t dwNetworkGameClient_isBackgroundMap = 0x2C142F;
            constexpr std::ptrdiff_t dwNetworkGameClient_localPlayer = 0xE8;
            constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x230;
            constexpr std::ptrdiff_t dwNetworkGameClient_serverTickCount = 0x23C;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x220;
            constexpr std::ptrdiff_t dwWindowHeight = 0x8ED624;
            constexpr std::ptrdiff_t dwWindowWidth = 0x8ED620;
        }
        // Module: inputsystem.dll
        namespace inputsystem_dll {
            constexpr std::ptrdiff_t dwInputSystem = 0x45A20;
        }
        // Module: matchmaking.dll
        namespace matchmaking_dll {
            constexpr std::ptrdiff_t dwGameTypes = 0x1B5EE0;
        }
        // Module: soundsystem.dll
        namespace soundsystem_dll {
            constexpr std::ptrdiff_t dwSoundSystem = 0x3EAE50;
            constexpr std::ptrdiff_t dwSoundSystem_engineViewData = 0x7C;
        }
    }
}
