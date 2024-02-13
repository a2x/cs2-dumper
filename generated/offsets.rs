/*
 * Created using https://github.com/a2x/cs2-dumper
 * Tue, 13 Feb 2024 02:41:15 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod client_dll { // client.dll
    pub const dwEntityList: usize = 0x18B1FE8;
    pub const dwForceAttack: usize = 0x1720160;
    pub const dwForceAttack2: usize = 0x17201F0;
    pub const dwForceBackward: usize = 0x1720430;
    pub const dwForceCrouch: usize = 0x1720700;
    pub const dwForceForward: usize = 0x17203A0;
    pub const dwForceJump: usize = 0x1720670;
    pub const dwForceLeft: usize = 0x17204C0;
    pub const dwForceRight: usize = 0x1720550;
    pub const dwGameEntitySystem: usize = 0x19CD800;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x1510;
    pub const dwGameRules: usize = 0x190EFC0;
    pub const dwGlobalVars: usize = 0x171AE40;
    pub const dwGlowManager: usize = 0x190F3D8;
    pub const dwInterfaceLinkList: usize = 0x19FE828;
    pub const dwLocalPlayerController: usize = 0x1901948;
    pub const dwLocalPlayerPawn: usize = 0x17272E8;
    pub const dwPlantedC4: usize = 0x19171E8;
    pub const dwPrediction: usize = 0x17271B0;
    pub const dwSensitivity: usize = 0x190FCF8;
    pub const dwSensitivity_sensitivity: usize = 0x40;
    pub const dwViewAngles: usize = 0x191F100;
    pub const dwViewMatrix: usize = 0x19112D0;
    pub const dwViewRender: usize = 0x1911B50;
}

pub mod engine2_dll { // engine2.dll
    pub const dwBuildNumber: usize = 0x512554;
    pub const dwNetworkGameClient: usize = 0x511AC8;
    pub const dwNetworkGameClient_getLocalPlayer: usize = 0xF0;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
    pub const dwWindowHeight: usize = 0x5C9A2C;
    pub const dwWindowWidth: usize = 0x5C9A28;
}

pub mod game_info { // Some additional information about the game at dump time
    pub const buildNumber: usize = 0x36A7; // Game build number
}

pub mod inputsystem_dll { // inputsystem.dll
    pub const dwInputSystem: usize = 0x367A0;
}