/*
 * Created using https://github.com/a2x/cs2-dumper
 * Mon, 30 Oct 2023 00:17:09 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod client_dll { // client.dll
    pub const dwBaseEntityModel_setModel: usize = 0x57EA50;
    pub const dwEntityList: usize = 0x17995C0;
    pub const dwForceAttack: usize = 0x169EE60;
    pub const dwForceAttack2: usize = 0x169EEF0;
    pub const dwForceBackward: usize = 0x169F130;
    pub const dwForceCrouch: usize = 0x169F400;
    pub const dwForceForward: usize = 0x169F0A0;
    pub const dwForceJump: usize = 0x169F370;
    pub const dwForceLeft: usize = 0x169F1C0;
    pub const dwForceRight: usize = 0x169F250;
    pub const dwGameEntitySystem: usize = 0x1952588;
    pub const dwGameEntitySystem_getBaseEntity: usize = 0x602050;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x5F3D40;
    pub const dwGameRules: usize = 0x17F5488;
    pub const dwGlobalVars: usize = 0x169AFE0;
    pub const dwGlowManager: usize = 0x17F4C10;
    pub const dwInterfaceLinkList: usize = 0x1980298;
    pub const dwLocalPlayerController: usize = 0x17E8158;
    pub const dwLocalPlayerPawn: usize = 0x1886C48;
    pub const dwPlantedC4: usize = 0x188BFE0;
    pub const dwViewAngles: usize = 0x18E6770;
    pub const dwViewMatrix: usize = 0x1887730;
    pub const dwViewRender: usize = 0x1888128;
}

pub mod engine2_dll { // engine2.dll
    pub const dwBuildNumber: usize = 0x488514;
    pub const dwNetworkGameClient: usize = 0x487AB0;
    pub const dwNetworkGameClient_getLocalPlayer: usize = 0xF0;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
    pub const dwWindowHeight: usize = 0x5396DC;
    pub const dwWindowWidth: usize = 0x5396D8;
}

pub mod inputsystem_dll { // inputsystem.dll
    pub const dwInputSystem: usize = 0x35770;
}