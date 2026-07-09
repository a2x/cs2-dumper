// Generated using https://github.com/a2x/cs2-dumper
// Updated with new offsets
// 2026-07-09 03:35:56.124581200 UTC

pub const cs2_dumper = struct {
    pub const offsets = struct {
        // Module: client.dll
        pub const client_dll = struct {
            pub const dwCSGOInput: usize = 0x239E7F8;              // Updated
            pub const dwEntityList: usize = 0x254DE50;             // Updated
            pub const dwGameEntitySystem: usize = 0x24E7680;
            pub const dwGameEntitySystem_highestEntityIndex: usize = 0x2090;
            pub const dwGameRules: usize = 0x2340FE8;
            pub const dwGlobalVars: usize = 0x208ED60;             // Updated
            pub const dwGlowManager: usize = 0x233DDE0;
            pub const dwLocalPlayerController: usize = 0x202B350;  // Updated
            pub const dwLocalPlayerPawn: usize = 0x21CFDF0;        // Updated
            pub const dwPlantedC4: usize = 0x23BA4F8;              // Updated
            pub const dwPrediction: usize = 0x2341430;
            pub const dwSensitivity: usize = 0x239E7F8;            // Updated
            pub const dwSensitivity_sensitivity: usize = 0x81C;    // Updated
            pub const dwViewAngles: usize = 0x25C7630;             // Updated
            pub const dwViewMatrix: usize = 0x23A8340;             // Updated
            pub const dwViewRender: usize = 0x2346D70;
            pub const dwWeaponC4: usize = 0x22BED18;
        };
        // Module: engine2.dll
        pub const engine2_dll = struct {
            pub const dwBuildNumber: usize = 0x60CC74;
            pub const dwNetworkGameClient: usize = 0x90A1A0;
            pub const dwNetworkGameClient_clientTickCount: usize = 0x378;
            pub const dwNetworkGameClient_deltaTick: usize = 0x24C;
            pub const dwNetworkGameClient_isBackgroundMap: usize = 0x2C141F;
            pub const dwNetworkGameClient_localPlayer: usize = 0xF8;
            pub const dwNetworkGameClient_maxClients: usize = 0x240;
            pub const dwNetworkGameClient_serverTickCount: usize = 0x24C;
            pub const dwNetworkGameClient_signOnState: usize = 0x230;
            pub const dwWindowHeight: usize = 0x90E5C4;
            pub const dwWindowWidth: usize = 0x90E5C0;
        };
        // Module: inputsystem.dll
        pub const inputsystem_dll = struct {
            pub const dwInputSystem: usize = 0x42B50;
        };
        // Module: matchmaking.dll
        pub const matchmaking_dll = struct {
            pub const dwGameTypes: usize = 0x1B0F80;
        };
        // Module: soundsystem.dll
        pub const soundsystem_dll = struct {
            pub const dwSoundSystem: usize = 0x512360;
            pub const dwSoundSystem_engineViewData: usize = 0x7C;
        };
        // Class Fields (Structure-relative offsets)
        pub const class_fields = struct {
            pub const m_iHealth: usize = 0x348;
            pub const m_iTeamNum: usize = 0x3E7;
            pub const m_lifeState: usize = 0x354;
            pub const m_fFlags: usize = 0x63;
            pub const m_pGameSceneNode: usize = 0x330;
            pub const m_vecAbsVelocity: usize = 0x3F8;
            pub const m_vecViewOffset: usize = 0xE78;
            pub const m_clrRender: usize = 0xC98;
            pub const m_vOldOrigin: usize = 0x13B8;
            pub const m_bDormant: usize = 0x103;
            pub const m_modelState: usize = 0x140;
            pub const m_hPawn: usize = 0x6BC;
            pub const m_iszPlayerName: usize = 0x6F4;
            pub const m_vecCsViewPunchAngle: usize = 0x48;
            pub const m_iShotsFired: usize = 0x1C84;
            pub const m_pAimPunchServices: usize = 0x14B8;
            pub const m_entitySpottedState: usize = 0x1C58;
            pub const m_iIDEntIndex: usize = 0x3DA;
            pub const m_aimPunchAngle: usize = 0x58;
            pub const m_aimPunchCache: usize = 0x68;
            pub const m_pClippingWeapon: usize = 0x1610;
            pub const m_bIsScoped: usize = 0x1C70;
            pub const m_flFlashDuration: usize = 0x1428;
            pub const m_AttributeManager: usize = 0x1200;
            pub const m_Item: usize = 0x50;
            pub const m_iItemDefinitionIndex: usize = 0x1BA;
            pub const m_fAccuracyPenalty: usize = 0x17F0;
            pub const m_nBombSite: usize = 0x11A4;
            pub const m_bBombDefused: usize = 0x11F4;
            pub const m_flDefuseCountDown: usize = 0x11F0;
            pub const m_flC4Blow: usize = 0x11D0;
            pub const m_bBeingDefused: usize = 0x11DC;
        };
    };
};
