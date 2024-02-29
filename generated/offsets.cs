/*
 * Created using https://github.com/a2x/cs2-dumper
 * Thu, 29 Feb 2024 02:15:37 +0000
 */

public static class client_dll { // client.dll
    public const nint dwEntityList = 0x18BBAF8;
    public const nint dwForceAttack = 0x1728F90;
    public const nint dwForceAttack2 = 0x1729020;
    public const nint dwForceBackward = 0x1729260;
    public const nint dwForceCrouch = 0x1729530;
    public const nint dwForceForward = 0x17291D0;
    public const nint dwForceJump = 0x17294A0;
    public const nint dwForceLeft = 0x17292F0;
    public const nint dwForceRight = 0x1729380;
    public const nint dwGameEntitySystem = 0x19D9450;
    public const nint dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    public const nint dwGameRules = 0x1918A30;
    public const nint dwGlobalVars = 0x1723B10;
    public const nint dwGlowManager = 0x1918E50;
    public const nint dwInterfaceLinkList = 0x1A0A598;
    public const nint dwLocalPlayerController = 0x190B308;
    public const nint dwLocalPlayerPawn = 0x1730118;
    public const nint dwPlantedC4 = 0x1921858;
    public const nint dwPrediction = 0x172FFE0;
    public const nint dwSensitivity = 0x1919778;
    public const nint dwSensitivity_sensitivity = 0x40;
    public const nint dwViewAngles = 0x1929730;
    public const nint dwViewMatrix = 0x191CF30;
    public const nint dwViewRender = 0x191D7B0;
}

public static class engine2_dll { // engine2.dll
    public const nint dwBuildNumber = 0x513574;
    public const nint dwNetworkGameClient_deltaTick = 0x258;
    public const nint dwNetworkGameClient = 0x512AC8;
    public const nint dwNetworkGameClient_getLocalPlayer = 0xF0;
    public const nint dwNetworkGameClient_maxClients = 0x250;
    public const nint dwNetworkGameClient_signOnState = 0x240;
    public const nint dwWindowHeight = 0x5CBC64;
    public const nint dwWindowWidth = 0x5CBC60;
}

public static class game_info { // Some additional information about the game at dump time
    public const nint buildNumber = 0x36AB; // Game build number
}

public static class inputsystem_dll { // inputsystem.dll
    public const nint dwInputSystem = 0x367A0;
}

public static class matchmaking_dll { // matchmaking.dll
    public const nint dwGameTypes = 0x1D21E0;
    public const nint dwGameTypes_mapName = 0x1D2300;
}