#![allow(non_snake_case, non_upper_case_globals)]

pub mod client_dll {
    pub const entityList: usize = 0x178B898;
    pub const globalVars: usize = 0x168ECE8;
    pub const interfaceLinkList: usize = 0x1971A58;
    pub const localPlayerController: usize = 0x17DA118;
    pub const localPlayerPawn: usize = 0x1878C08;
    pub const plantedC4: usize = 0x187E9A0;
    pub const viewAngles: usize = 0x18D85B0;
    pub const viewMatrix: usize = 0x18796F0;
}

pub mod engine2_dll {
    pub const networkGameClient: usize = 0x48AAB0;
    pub const networkGameClient_maxClients: usize = 0x250;
    pub const networkGameClient_signOnState: usize = 0x240;
}