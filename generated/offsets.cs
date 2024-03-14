/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Thu, 14 Mar 2024 05:07:42 +0000
 */

public static class client_dll { // client.dll
    public const nint dwEntityList = 0x18BFC08;
    public const nint dwForceAttack = 0x172D030;
    public const nint dwForceAttack2 = 0x172D0C0;
    public const nint dwForceBackward = 0x172D300;
    public const nint dwForceCrouch = 0x172D5D0;
    public const nint dwForceForward = 0x172D270;
    public const nint dwForceJump = 0x172D540;
    public const nint dwForceLeft = 0x172D390;
    public const nint dwForceRight = 0x172D420;
    public const nint dwGameEntitySystem = 0x19DD590;
    public const nint dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    public const nint dwGameRules = 0x191CB50;
    public const nint dwGlobalVars = 0x1727BB0;
    public const nint dwGlowManager = 0x191CF70;
    public const nint dwInterfaceLinkList = 0x1A0E6D8;
    public const nint dwLocalPlayerController = 0x190F428;
    public const nint dwLocalPlayerPawn = 0x17341B8;
    public const nint dwPlantedC4 = 0x1925988;
    public const nint dwPrediction = 0x1734080;
    public const nint dwSensitivity = 0x191D898;
    public const nint dwSensitivity_sensitivity = 0x40;
    public const nint dwViewAngles = 0x192D860;
    public const nint dwViewMatrix = 0x1921050;
    public const nint dwViewRender = 0x19218D0;
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
    public const nint buildNumber = 0x36AC; // Game build number
}

public static class inputsystem_dll { // inputsystem.dll
    public const nint dwInputSystem = 0x367A0;
}

public static class matchmaking_dll { // matchmaking.dll
    public const nint dwGameTypes = 0x1D21E0;
    public const nint dwGameTypes_mapName = 0x1D2300;
}