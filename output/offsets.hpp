// Generated using https://github.com/a2x/cs2-dumper
// Updated with new offsets

#pragma once

#include <cstddef>
#include <cstdint>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x239E7F8;              
            constexpr std::ptrdiff_t dwEntityList = 0x254DE50;             
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x24E7680;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x2090;
            constexpr std::ptrdiff_t dwGameRules = 0x2340FE8;
            constexpr std::ptrdiff_t dwGlobalVars = 0x208ED60;            
            constexpr std::ptrdiff_t dwGlowManager = 0x233DDE0;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x202B350;  
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x21CFDF0;       
            constexpr std::ptrdiff_t dwPlantedC4 = 0x23BA4F8;             
            constexpr std::ptrdiff_t dwPrediction = 0x2341430;
            constexpr std::ptrdiff_t dwSensitivity = 0x239E7F8;       
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x81C;   
            constexpr std::ptrdiff_t dwViewAngles = 0x25C7630;          
            constexpr std::ptrdiff_t dwViewMatrix = 0x23A8340;          
            constexpr std::ptrdiff_t dwViewRender = 0x2346D70;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x22BED18;
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
            constexpr std::ptrdiff_t dwGameTypes = 0x1B0F80;
        }
        // Module: soundsystem.dll
        namespace soundsystem_dll {
            constexpr std::ptrdiff_t dwSoundSystem = 0x512360;
            constexpr std::ptrdiff_t dwSoundSystem_engineViewData = 0x7C;
        }
        // Class Fields (Structure-relative offsets)
        namespace class_fields {
            constexpr std::ptrdiff_t m_iHealth = 0x348;
            constexpr std::ptrdiff_t m_iTeamNum = 0x3E7;
            constexpr std::ptrdiff_t m_lifeState = 0x354;
            constexpr std::ptrdiff_t m_fFlags = 0x63;
            constexpr std::ptrdiff_t m_pGameSceneNode = 0x330;
            constexpr std::ptrdiff_t m_vecAbsVelocity = 0x3F8;
            constexpr std::ptrdiff_t m_vecViewOffset = 0xE78;
            constexpr std::ptrdiff_t m_clrRender = 0xC98;
            constexpr std::ptrdiff_t m_vOldOrigin = 0x13B8;
            constexpr std::ptrdiff_t m_bDormant = 0x103;
            constexpr std::ptrdiff_t m_modelState = 0x140;
            constexpr std::ptrdiff_t m_hPawn = 0x6BC;
            constexpr std::ptrdiff_t m_iszPlayerName = 0x6F4;
            constexpr std::ptrdiff_t m_vecCsViewPunchAngle = 0x48;
            constexpr std::ptrdiff_t m_iShotsFired = 0x1C84;
            constexpr std::ptrdiff_t m_pAimPunchServices = 0x14B8;
            constexpr std::ptrdiff_t m_entitySpottedState = 0x1C58;
            constexpr std::ptrdiff_t m_iIDEntIndex = 0x3DA;
            constexpr std::ptrdiff_t m_aimPunchAngle = 0x58;
            constexpr std::ptrdiff_t m_aimPunchCache = 0x68;
            constexpr std::ptrdiff_t m_pClippingWeapon = 0x1610;
            constexpr std::ptrdiff_t m_bIsScoped = 0x1C70;
            constexpr std::ptrdiff_t m_flFlashDuration = 0x1428;
            constexpr std::ptrdiff_t m_AttributeManager = 0x1200;
            constexpr std::ptrdiff_t m_Item = 0x50;
            constexpr std::ptrdiff_t m_iItemDefinitionIndex = 0x1BA;
            constexpr std::ptrdiff_t m_fAccuracyPenalty = 0x17F0;
            constexpr std::ptrdiff_t m_nBombSite = 0x11A4;
            constexpr std::ptrdiff_t m_bBombDefused = 0x11F4;
            constexpr std::ptrdiff_t m_flDefuseCountDown = 0x11F0;
            constexpr std::ptrdiff_t m_flC4Blow = 0x11D0;
            constexpr std::ptrdiff_t m_bBeingDefused = 0x11DC;
        }
    }
}
