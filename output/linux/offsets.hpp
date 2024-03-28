// Generated using https://github.com/a2x/cs2-dumper
// 2024-03-29 08:41:42.046663095 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace offsets {
        // Module: libclient.so
        namespace libclient {
            constexpr std::ptrdiff_t dwCSGOInput = 0x3744680;
            constexpr std::ptrdiff_t dwEntityList = 0x35AB8C8;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x38619C0;
            constexpr std::ptrdiff_t dwGameEntitySystem_getHighestEntityIndex = 0x1540;
            constexpr std::ptrdiff_t dwGameRules = 0x37373E8;
            constexpr std::ptrdiff_t dwGlobalVars = 0x356C9D0;
            constexpr std::ptrdiff_t dwGlowManager = 0x373BCF0;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x371C918;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x373CCD8;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x3751538;
            constexpr std::ptrdiff_t dwPrediction = 0x373CBA0;
            constexpr std::ptrdiff_t dwSensitivity = 0x373B208;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
            constexpr std::ptrdiff_t dwViewAngles = 0x3749A20;
            constexpr std::ptrdiff_t dwViewMatrix = 0x373D800;
            constexpr std::ptrdiff_t dwViewRender = 0x373D9B0;
        }
        // Module: libengine2.so
        namespace libengine2 {
            constexpr std::ptrdiff_t dwBuildNumber = 0x6D35F4;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0x6D3F88;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x278;
            constexpr std::ptrdiff_t dwNetworkGameClient_getLocalPlayer = 0x13C0;
            constexpr std::ptrdiff_t dwNetworkGameClient_getMaxClients = 0x250;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x260;
            constexpr std::ptrdiff_t dwWindowHeight = 0x6DCDC4;
            constexpr std::ptrdiff_t dwWindowWidth = 0x6DCDC0;
        }
        // Module: libinputsystem.so
        namespace libinputsystem {
            constexpr std::ptrdiff_t dwInputSystem = 0x40160;
        }
        // Module: libmatchmaking.so
        namespace libmatchmaking {
            constexpr std::ptrdiff_t dwGameTypes = 0x37C9A0;
            constexpr std::ptrdiff_t dwGameTypes_mapName = 0x37CAC0;
        }
    }
}
