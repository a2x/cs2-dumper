/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 23 Mar 2024 05:02:05 +0000
 */

public static class client_dll { // client.dll
    public const nint dwEntityList = 0x18C2D58;
    public const nint dwForceAttack = 0x1730020;
    public const nint dwForceAttack2 = 0x17300B0;
    public const nint dwForceBackward = 0x17302F0;
    public const nint dwForceCrouch = 0x17305C0;
    public const nint dwForceForward = 0x1730260;
    public const nint dwForceJump = 0x1730530;
    public const nint dwForceLeft = 0x1730380;
    public const nint dwForceRight = 0x1730410;
    public const nint dwGameEntitySystem = 0x19E0790;
    public const nint dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    public const nint dwGameRules = 0x191FCA0;
    public const nint dwGlobalVars = 0x172ABA0;
    public const nint dwGlowManager = 0x19200C0;
    public const nint dwInterfaceLinkList = 0x1A118D8;
    public const nint dwLocalPlayerController = 0x1912578;
    public const nint dwLocalPlayerPawn = 0x17371A8;
    public const nint dwPlantedC4 = 0x1928AD8;
    public const nint dwPrediction = 0x1737070;
    public const nint dwSensitivity = 0x19209E8;
    public const nint dwSensitivity_sensitivity = 0x40;
    public const nint dwViewAngles = 0x19309B0;
    public const nint dwViewMatrix = 0x19241A0;
    public const nint dwViewRender = 0x1924A20;
}

public static class engine2_dll { // engine2.dll
    public const nint dwBuildNumber = 0x514574;
    public const nint dwNetworkGameClient_deltaTick = 0x258;
    public const nint dwNetworkGameClient = 0x513AC8;
    public const nint dwNetworkGameClient_getLocalPlayer = 0xF0;
    public const nint dwNetworkGameClient_maxClients = 0x250;
    public const nint dwNetworkGameClient_signOnState = 0x240;
    public const nint dwWindowHeight = 0x5CCCDC;
    public const nint dwWindowWidth = 0x5CCCD8;
}

public static class game_info { // Some additional information about the game at dump time
    public const nint buildNumber = 0x36B0; // Game build number
}

public static class inputsystem_dll { // inputsystem.dll
    public const nint dwInputSystem = 0x367A0;
}

public static class matchmaking_dll { // matchmaking.dll
    public const nint dwGameTypes = 0x1D21E0;
    public const nint dwGameTypes_mapName = 0x1D2300;
}