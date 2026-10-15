// Generated using https://github.com/a2x/cs2-dumper
// 2026-10-15 20:28:01.381534584 UTC

#pragma once

#include <cstddef>
#include <cstdint>

namespace cs2_dumper {
    namespace offsets {
        // Module: libclient.so
        namespace libclient_so {
            constexpr std::ptrdiff_t dwCSGOInput = 0x468E510;
            constexpr std::ptrdiff_t dwEntityList = 0x46C3000;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x4B95610;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x2120;
            constexpr std::ptrdiff_t dwGameRules = 0x493F0F0;
            constexpr std::ptrdiff_t dwGlobalVars = 0x4687D38;
            constexpr std::ptrdiff_t dwGlowManager = 0x49397B8;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x49083B8;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x49404D8;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x46D8127;
            constexpr std::ptrdiff_t dwPrediction = 0x4940390;
            constexpr std::ptrdiff_t dwSensitivity = 0x493E5F8;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x58;
            constexpr std::ptrdiff_t dwViewAngles = 0x468EA58;
            constexpr std::ptrdiff_t dwViewMatrix = 0x4947B00;
            constexpr std::ptrdiff_t dwViewRender = 0x4947C10;
        }
        // Module: libengine2.so
        namespace libengine2_so {
            constexpr std::ptrdiff_t dwBuildNumber = 0xA4B510;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0x9F6C70;
            constexpr std::ptrdiff_t dwNetworkGameClient_clientTickCount = 0x3A8;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x3AC;
            constexpr std::ptrdiff_t dwNetworkGameClient_isBackgroundMap = 0x288;
            constexpr std::ptrdiff_t dwNetworkGameClient_localPlayer = 0x280;
            constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x240;
            constexpr std::ptrdiff_t dwNetworkGameClient_serverTickCount = 0x25C;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x284;
            constexpr std::ptrdiff_t dwWindowHeight = 0xA01364;
            constexpr std::ptrdiff_t dwWindowWidth = 0xA01360;
        }
        // Module: libinputsystem.so
        namespace libinputsystem_so {
            constexpr std::ptrdiff_t dwInputSystem = 0x7FCA0;
        }
        // Module: libmatchmaking.so
        namespace libmatchmaking_so {
            constexpr std::ptrdiff_t dwGameTypes = 0x39D2E0;
            constexpr std::ptrdiff_t dwGameTypes_mapName = 0x39D400;
        }
        // Module: libpanorama.so
        namespace libpanorama_so {
            constexpr std::ptrdiff_t HUD_CONTEXT = 0x6C9100;
            constexpr std::ptrdiff_t MENU_CONTEXT = 0x6C90E0;
        }
    }
}
