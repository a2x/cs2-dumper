// Generated using https://github.com/a2x/cs2-dumper
// 2026-10-01 06:22:34.554410 UTC

#pragma once

#include <cstddef>
#include <cstdint>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x2576160;
            constexpr std::ptrdiff_t dwEntityList = 0x2715828;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x2715828;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x2120;
            constexpr std::ptrdiff_t dwGameRules = 0x255CE50;
            constexpr std::ptrdiff_t dwGlobalVars = 0x222BE98;
            constexpr std::ptrdiff_t dwGlowManager = 0x255CE60;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x2538008;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x2560698;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x24C88D0;
            constexpr std::ptrdiff_t dwPrediction = 0x25605A0;
            constexpr std::ptrdiff_t dwSensitivity = 0x255D998;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x58;
            constexpr std::ptrdiff_t dwViewAngles = 0x25767E8;
            constexpr std::ptrdiff_t dwViewMatrix = 0x2566910;
            constexpr std::ptrdiff_t dwViewRender = 0x2565D20;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x24C4A90;
        }
        // Module: engine2.dll
        namespace engine2_dll {
            constexpr std::ptrdiff_t dwBuildNumber = 0x61CFE8;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0x91AFC0;
            constexpr std::ptrdiff_t dwNetworkGameClient_clientTickCount = 0x398;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x24C;
            constexpr std::ptrdiff_t dwNetworkGameClient_isBackgroundMap = 0x2C143F;
            constexpr std::ptrdiff_t dwNetworkGameClient_localPlayer = 0xF8;
            constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x240;
            constexpr std::ptrdiff_t dwNetworkGameClient_serverTickCount = 0x24C;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x230;
            constexpr std::ptrdiff_t dwWindowHeight = 0x91F334;
            constexpr std::ptrdiff_t dwWindowWidth = 0x91F330;
        }
        // Module: inputsystem.dll
        namespace inputsystem_dll {
            constexpr std::ptrdiff_t dwInputSystem = 0x46BC0;
        }
        // Module: matchmaking.dll
        namespace matchmaking_dll {
            constexpr std::ptrdiff_t dwGameTypes = 0x1B0FD0;
        }
        // Module: soundsystem.dll
        namespace soundsystem_dll {
            constexpr std::ptrdiff_t dwSoundSystem = 0x535350;
            constexpr std::ptrdiff_t dwSoundSystem_engineViewData = 0x6C;
        }
    }
}
