// Generated using https://github.com/a2x/cs2-dumper
// 2026-11-09 17:25:12.687006700 UTC

#pragma once

#include <cstddef>
#include <cstdint>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x2580A10;
            constexpr std::ptrdiff_t dwEntityList = 0x271FBB8;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x271FBB8;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x2120;
            constexpr std::ptrdiff_t dwGameRules = 0x256A3F8;
            constexpr std::ptrdiff_t dwGlobalVars = 0x2235108;
            constexpr std::ptrdiff_t dwGlowManager = 0x2567120;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x2542548;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x256A948;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x24D0B70;
            constexpr std::ptrdiff_t dwPrediction = 0x256A850;
            constexpr std::ptrdiff_t dwSensitivity = 0x2567C48;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x58;
            constexpr std::ptrdiff_t dwViewAngles = 0x2581098;
            constexpr std::ptrdiff_t dwViewMatrix = 0x2570250;
            constexpr std::ptrdiff_t dwViewRender = 0x2570C18;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x24CF118;
        }
        // Module: engine2.dll
        namespace engine2_dll {
            constexpr std::ptrdiff_t dwBuildNumber = 0x6BA028;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0x9B88C0;
            constexpr std::ptrdiff_t dwNetworkGameClient_clientTickCount = 0x398;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x24C;
            constexpr std::ptrdiff_t dwNetworkGameClient_isBackgroundMap = 0x2C143F;
            constexpr std::ptrdiff_t dwNetworkGameClient_localPlayer = 0xF8;
            constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x240;
            constexpr std::ptrdiff_t dwNetworkGameClient_serverTickCount = 0x24C;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x230;
            constexpr std::ptrdiff_t dwWindowHeight = 0x9BCFEC;
            constexpr std::ptrdiff_t dwWindowWidth = 0x9BCFE8;
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
            constexpr std::ptrdiff_t dwSoundSystem = 0x532420;
            constexpr std::ptrdiff_t dwSoundSystem_engineViewData = 0x6C;
        }
    }
}
