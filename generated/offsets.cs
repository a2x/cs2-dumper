/*
 * Created using https://github.com/a2x/cs2-dumper
 * Fri, 23 Feb 2024 13:32:08 +0000
 */

public static class client_dll { // client.dll
    public const nint dwEntityList = 0x18B3FA8;
    public const nint dwForceAttack = 0x17221D0;
    public const nint dwForceAttack2 = 0x1722260;
    public const nint dwForceBackward = 0x17224A0;
    public const nint dwForceCrouch = 0x1722770;
    public const nint dwForceForward = 0x1722410;
    public const nint dwForceJump = 0x17226E0;
    public const nint dwForceLeft = 0x1722530;
    public const nint dwForceRight = 0x17225C0;
    public const nint dwGameEntitySystem = 0x19D1980;
    public const nint dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    public const nint dwGameRules = 0x1910FC0;
    public const nint dwGlobalVars = 0x171CE70;
    public const nint dwGlowManager = 0x19113E0;
    public const nint dwInterfaceLinkList = 0x1A029D8;
    public const nint dwLocalPlayerController = 0x19038F8;
    public const nint dwLocalPlayerPawn = 0x1729348;
    public const nint dwPlantedC4 = 0x191B508;
    public const nint dwPrediction = 0x1729210;
    public const nint dwSensitivity = 0x1911D08;
    public const nint dwSensitivity_sensitivity = 0x40;
    public const nint dwViewAngles = 0x19233E0;
    public const nint dwViewMatrix = 0x19154C0;
    public const nint dwViewRender = 0x1915D40;
}

public static class engine2_dll { // engine2.dll
    public const nint dwBuildNumber = 0x513564;
    public const nint dwNetworkGameClient = 0x512AC8;
    public const nint dwNetworkGameClient_getLocalPlayer = 0xF0;
    public const nint dwNetworkGameClient_deltaTick = 0x258;
    public const nint dwNetworkGameClient_maxClients = 0x250;
    public const nint dwNetworkGameClient_signOnState = 0x240;
    public const nint dwWindowHeight = 0x5CABC4;
    public const nint dwWindowWidth = 0x5CABC0;
}

public static class game_info { // Some additional information about the game at dump time
    public const nint buildNumber = 0x36AA; // Game build number
}

public static class inputsystem_dll { // inputsystem.dll
    public const nint dwInputSystem = 0x367A0;
}

public static class matchmaking_dll { // matchmaking.dll
    public const nint dwGameTypes = 0x1D21E0;
    public const nint dwGameTypes_mapName = 0x1D2300;
}