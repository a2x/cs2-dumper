// Generated using https://github.com/a2x/cs2-dumper
// 2026-01-30 00:30:02.594526700 UTC

#pragma once

#include <cstddef>
#include <cstdint>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x2312550;
            constexpr std::ptrdiff_t dwEntityList = 0x24A7B28;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x24A7B28;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x20A0;
            constexpr std::ptrdiff_t dwGameRules = 0x23035F8;
            constexpr std::ptrdiff_t dwGlobalVars = 0x20572A8;
            constexpr std::ptrdiff_t dwGlowManager = 0x2303600;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x22ECA28;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x2062850;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x230FCF0;
            constexpr std::ptrdiff_t dwPrediction = 0x2062760;
            constexpr std::ptrdiff_t dwSensitivity = 0x2304128;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x58;
            constexpr std::ptrdiff_t dwViewAngles = 0x2312BD8;
            constexpr std::ptrdiff_t dwViewMatrix = 0x2308860;
            constexpr std::ptrdiff_t dwViewRender = 0x2308A98;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x2291AE0;
        }
        // Module: engine2.dll
        namespace engine2_dll {
            constexpr std::ptrdiff_t dwBuildNumber = 0x606504;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0x900FF0;
            constexpr std::ptrdiff_t dwNetworkGameClient_clientTickCount = 0x378;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x24C;
            constexpr std::ptrdiff_t dwNetworkGameClient_isBackgroundMap = 0x2C141F;
            constexpr std::ptrdiff_t dwNetworkGameClient_localPlayer = 0xF8;
            constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x240;
            constexpr std::ptrdiff_t dwNetworkGameClient_serverTickCount = 0x24C;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x230;
            constexpr std::ptrdiff_t dwWindowHeight = 0x9053A4;
            constexpr std::ptrdiff_t dwWindowWidth = 0x9053A0;
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
            constexpr std::ptrdiff_t dwSoundSystem = 0x4F3490;
            constexpr std::ptrdiff_t dwSoundSystem_engineViewData = 0x7C;
        }
    }
}
