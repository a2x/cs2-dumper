// Generated using https://github.com/a2x/cs2-dumper
// 2026-07-09 21:54:28.505310310 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace offsets {
        // Module: libclient.so
        namespace libclient_so {
            constexpr std::ptrdiff_t dwCSGOInput = 0x45738B8;
            constexpr std::ptrdiff_t dwEntityList = 0x45AB780;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x4A42B50;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x20A0;
            constexpr std::ptrdiff_t dwGameRules = 0x486C434;
            constexpr std::ptrdiff_t dwGlobalVars = 0x4568478;
            constexpr std::ptrdiff_t dwGlowManager = 0x47F92B8;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x47CC138;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x47FF168;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x45BFDE7;
            constexpr std::ptrdiff_t dwPrediction = 0x47FF020;
            constexpr std::ptrdiff_t dwSensitivity = 0x47FD458;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x58;
            constexpr std::ptrdiff_t dwViewAngles = 0x4573E00;
            constexpr std::ptrdiff_t dwViewMatrix = 0x4806200;
            constexpr std::ptrdiff_t dwViewRender = 0x4806310;
        }
        // Module: libengine2.so
        namespace libengine2_so {
            constexpr std::ptrdiff_t dwBuildNumber = 0xC71268;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0xA2F5D0;
            constexpr std::ptrdiff_t dwNetworkGameClient_clientTickCount = 0x388;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x38C;
            constexpr std::ptrdiff_t dwNetworkGameClient_isBackgroundMap = 0x288;
            constexpr std::ptrdiff_t dwNetworkGameClient_localPlayer = 0x280;
            constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x240;
            constexpr std::ptrdiff_t dwNetworkGameClient_serverTickCount = 0x25C;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x284;
            constexpr std::ptrdiff_t dwWindowHeight = 0x9E25A4;
            constexpr std::ptrdiff_t dwWindowWidth = 0x9E25A0;
        }
        // Module: libinputsystem.so
        namespace libinputsystem_so {
            constexpr std::ptrdiff_t dwInputSystem = 0x7FBC0;
        }
        // Module: libmatchmaking.so
        namespace libmatchmaking_so {
            constexpr std::ptrdiff_t dwGameTypes = 0x39BC20;
            constexpr std::ptrdiff_t dwGameTypes_mapName = 0x39BD40;
        }
        // Module: libpanorama.so
        namespace libpanorama_so {
            constexpr std::ptrdiff_t HUD_CONTEXT = 0x67C320;
            constexpr std::ptrdiff_t MENU_CONTEXT = 0x67C300;
        }
    }
}
