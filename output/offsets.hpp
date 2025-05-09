// Generated using https://github.com/a2x/cs2-dumper
// 2025-05-09 03:40:00.267016600 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x1A69EF0;
            constexpr std::ptrdiff_t dwEntityList = 0x19F6F00;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x1B1A718;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x20F0;
            constexpr std::ptrdiff_t dwGameRules = 0x1A5B7D8;
            constexpr std::ptrdiff_t dwGlobalVars = 0x183F148;
            constexpr std::ptrdiff_t dwGlowManager = 0x1A5AF20;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x1A459E0;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x184B0D0;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x1A660B8;
            constexpr std::ptrdiff_t dwPrediction = 0x184AF50;
            constexpr std::ptrdiff_t dwSensitivity = 0x1A5C4F8;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
            constexpr std::ptrdiff_t dwViewAngles = 0x1A6A2C0;
            constexpr std::ptrdiff_t dwViewMatrix = 0x1A5FED0;
            constexpr std::ptrdiff_t dwViewRender = 0x1A60988;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x19F9260;
        }
        // Module: engine2.dll
        namespace engine2_dll {
            constexpr std::ptrdiff_t dwBuildNumber = 0x541BE4;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0x540CE0;
            constexpr std::ptrdiff_t dwNetworkGameClient_clientTickCount = 0x368;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x244;
            constexpr std::ptrdiff_t dwNetworkGameClient_isBackgroundMap = 0x281447;
            constexpr std::ptrdiff_t dwNetworkGameClient_localPlayer = 0xF0;
            constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x238;
            constexpr std::ptrdiff_t dwNetworkGameClient_serverTickCount = 0x36C;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x228;
            constexpr std::ptrdiff_t dwWindowHeight = 0x62456C;
            constexpr std::ptrdiff_t dwWindowWidth = 0x624568;
        }
        // Module: inputsystem.dll
        namespace inputsystem_dll {
            constexpr std::ptrdiff_t dwInputSystem = 0x387E0;
        }
        // Module: matchmaking.dll
        namespace matchmaking_dll {
            constexpr std::ptrdiff_t dwGameTypes = 0x1A3190;
            constexpr std::ptrdiff_t dwGameTypes_mapName = 0x120;
        }
        // Module: soundsystem.dll
        namespace soundsystem_dll {
            constexpr std::ptrdiff_t dwSoundSystem = 0x3A15F0;
            constexpr std::ptrdiff_t dwSoundSystem_engineViewData = 0x7C;
        }
    }
}
