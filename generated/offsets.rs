/*
 * Created using https://github.com/a2x/cs2-dumper
 * Fri, 3 Nov 2023 01:49:49 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod client_dll { // client.dll
    pub const dwBaseEntityModel_setModel: usize = 0x5812D0;
    pub const dwEntityList: usize = 0x17AA8F8;
    pub const dwForceBackward: usize = 0x16AF570;
    pub const dwForceCrouch: usize = 0x16AF840;
    pub const dwForceForward: usize = 0x16AF4E0;
    pub const dwForceJump: usize = 0x16AF7B0;
    pub const dwForceLeft: usize = 0x16AF600;
    pub const dwForceRight: usize = 0x16AF690;
    pub const dwGameEntitySystem: usize = 0x1964168;
    pub const dwGameEntitySystem_getBaseEntity: usize = 0x6048E0;
    pub const dwGameEntitySystem_getHighestEntityIndex: usize = 0x5F65D0;
    pub const dwGameRules: usize = 0x1806F58;
    pub const dwGlobalVars: usize = 0x16AB2E0;
    pub const dwGlowManager: usize = 0x18066B8;
    pub const dwInterfaceLinkList: usize = 0x1991E78;
    pub const dwLocalPlayerController: usize = 0x17F9C18;
    pub const dwLocalPlayerPawn: usize = 0x16B6318;
    pub const dwPlantedC4: usize = 0x189DB08;
    pub const dwViewAngles: usize = 0x18F8090;
    pub const dwViewMatrix: usize = 0x1899080;
    pub const dwViewRender: usize = 0x1899A58;
}

pub mod engine2_dll { // engine2.dll
    pub const dwBuildNumber: usize = 0x488514;
    pub const dwNetworkGameClient: usize = 0x487AB0;
    pub const dwNetworkGameClient_getLocalPlayer: usize = 0xF0;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
    pub const dwWindowHeight: usize = 0x5397DC;
    pub const dwWindowWidth: usize = 0x5397D8;
}

pub mod inputsystem_dll { // inputsystem.dll
    pub const dwInputSystem: usize = 0x35770;
}