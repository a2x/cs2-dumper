/*
 * Created using https://github.com/a2x/cs2-dumper
 * Tue, 13 Feb 2024 04:04:49 +0000
 */

public static class client_dll { // client.dll
    public const nint dwEntityList = 0x18B1FE8;
    public const nint dwForceAttack = 0x1720160;
    public const nint dwForceAttack2 = 0x17201F0;
    public const nint dwForceBackward = 0x1720430;
    public const nint dwForceCrouch = 0x1720700;
    public const nint dwForceForward = 0x17203A0;
    public const nint dwForceJump = 0x1720670;
    public const nint dwForceLeft = 0x17204C0;
    public const nint dwForceRight = 0x1720550;
    public const nint dwGameEntitySystem = 0x19CD800;
    public const nint dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    public const nint dwGameRules = 0x190EFC0;
    public const nint dwGlobalVars = 0x171AE40;
    public const nint dwGlowManager = 0x190F3D8;
    public const nint dwInterfaceLinkList = 0x19FE828;
    public const nint dwLocalPlayerController = 0x1901948;
    public const nint dwLocalPlayerPawn = 0x17272E8;
    public const nint dwPlantedC4 = 0x19171E8;
    public const nint dwPrediction = 0x17271B0;
    public const nint dwSensitivity = 0x190FCF8;
    public const nint dwSensitivity_sensitivity = 0x40;
    public const nint dwViewAngles = 0x191F100;
    public const nint dwViewMatrix = 0x19112D0;
    public const nint dwViewRender = 0x1911B50;
}

public static class engine2_dll { // engine2.dll
    public const nint dwBuildNumber = 0x512554;
    public const nint dwNetworkGameClient = 0x511AC8;
    public const nint dwNetworkGameClient_getLocalPlayer = 0xF0;
    public const nint dwNetworkGameClient_maxClients = 0x250;
    public const nint dwNetworkGameClient_signOnState = 0x240;
    public const nint dwWindowHeight = 0x5C9A2C;
    public const nint dwWindowWidth = 0x5C9A28;
}

public static class game_info { // Some additional information about the game at dump time
    public const nint buildNumber = 0x36A8; // Game build number
}

public static class inputsystem_dll { // inputsystem.dll
    public const nint dwInputSystem = 0x367A0;
}