/*
 * Created using https://github.com/a2x/cs2-dumper
 * Tue, 23 Jan 2024 06:17:35 +0000
 */

public static class client_dll { // client.dll
    public const nint dwEntityList = 0x17CE6A0;
    public const nint dwForceAttack = 0x16CDE80;
    public const nint dwForceAttack2 = 0x16CDF10;
    public const nint dwForceBackward = 0x16CE150;
    public const nint dwForceCrouch = 0x16CE420;
    public const nint dwForceForward = 0x16CE0C0;
    public const nint dwForceJump = 0x16CE390;
    public const nint dwForceLeft = 0x16CE1E0;
    public const nint dwForceRight = 0x16CE270;
    public const nint dwGameEntitySystem = 0x18FEDD0;
    public const nint dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    public const nint dwGameRules = 0x182AD98;
    public const nint dwGlobalVars = 0x16C9CA8;
    public const nint dwGlowManager = 0x182A500;
    public const nint dwInterfaceLinkList = 0x192CA68;
    public const nint dwLocalPlayerController = 0x181DC98;
    public const nint dwLocalPlayerPawn = 0x16D4F48;
    public const nint dwPlantedC4 = 0x18317D8;
    public const nint dwPrediction = 0x16D4E10;
    public const nint dwSensitivity = 0x182BA98;
    public const nint dwSensitivity_sensitivity = 0x40;
    public const nint dwViewAngles = 0x1890F30;
    public const nint dwViewMatrix = 0x182CEA0;
    public const nint dwViewRender = 0x182D6E8;
}

public static class engine2_dll { // engine2.dll
    public const nint dwBuildNumber = 0x4E13D4;
    public const nint dwNetworkGameClient = 0x4E0988;
    public const nint dwNetworkGameClient_getLocalPlayer = 0xF0;
    public const nint dwNetworkGameClient_maxClients = 0x250;
    public const nint dwNetworkGameClient_signOnState = 0x240;
    public const nint dwWindowHeight = 0x597E0C;
    public const nint dwWindowWidth = 0x597E08;
}

public static class game_info { // Some additional information about the game at dump time
    public const nint buildNumber = 0x36A1; // Game build number
}

public static class inputsystem_dll { // inputsystem.dll
    public const nint dwInputSystem = 0x35760;
}