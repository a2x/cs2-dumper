/*
 * Created using https://github.com/a2x/cs2-dumper
 * Fri, 9 Feb 2024 02:38:11 +0000
 */

public static class client_dll { // client.dll
    public const nint dwEntityList = 0x18B0FC8;
    public const nint dwForceAttack = 0x171F160;
    public const nint dwForceAttack2 = 0x171F1F0;
    public const nint dwForceBackward = 0x171F430;
    public const nint dwForceCrouch = 0x171F700;
    public const nint dwForceForward = 0x171F3A0;
    public const nint dwForceJump = 0x171F670;
    public const nint dwForceLeft = 0x171F4C0;
    public const nint dwForceRight = 0x171F550;
    public const nint dwGameEntitySystem = 0x19CC7D0;
    public const nint dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    public const nint dwGameRules = 0x190DFA0;
    public const nint dwGlobalVars = 0x1719E40;
    public const nint dwGlowManager = 0x190E3B8;
    public const nint dwInterfaceLinkList = 0x19FD7F8;
    public const nint dwLocalPlayerController = 0x1900928;
    public const nint dwLocalPlayerPawn = 0x17262E8;
    public const nint dwPlantedC4 = 0x19161C8;
    public const nint dwPrediction = 0x17261B0;
    public const nint dwSensitivity = 0x190ECD8;
    public const nint dwSensitivity_sensitivity = 0x40;
    public const nint dwViewAngles = 0x191E0E0;
    public const nint dwViewMatrix = 0x19102B0;
    public const nint dwViewRender = 0x1910B30;
}

public static class engine2_dll { // engine2.dll
    public const nint dwBuildNumber = 0x512554;
    public const nint dwNetworkGameClient = 0x511AC8;
    public const nint dwNetworkGameClient_getLocalPlayer = 0xF0;
    public const nint dwNetworkGameClient_maxClients = 0x250;
    public const nint dwNetworkGameClient_signOnState = 0x240;
    public const nint dwWindowHeight = 0x5C99FC;
    public const nint dwWindowWidth = 0x5C99F8;
}

public static class game_info { // Some additional information about the game at dump time
    public const nint buildNumber = 0x36A6; // Game build number
}

public static class inputsystem_dll { // inputsystem.dll
    public const nint dwInputSystem = 0x367A0;
}