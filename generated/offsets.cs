/*
 * Created using https://github.com/a2x/cs2-dumper
 * Wed, 7 Feb 2024 04:10:49 +0000
 */

public static class client_dll { // client.dll
    public const nint dwEntityList = 0x18AFFB8;
    public const nint dwForceAttack = 0x171E130;
    public const nint dwForceAttack2 = 0x171E1C0;
    public const nint dwForceBackward = 0x171E400;
    public const nint dwForceCrouch = 0x171E6D0;
    public const nint dwForceForward = 0x171E370;
    public const nint dwForceJump = 0x171E640;
    public const nint dwForceLeft = 0x171E490;
    public const nint dwForceRight = 0x171E520;
    public const nint dwGameEntitySystem = 0x19CB7B0;
    public const nint dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    public const nint dwGameRules = 0x190CF90;
    public const nint dwGlobalVars = 0x1718E10;
    public const nint dwGlowManager = 0x190D3A8;
    public const nint dwInterfaceLinkList = 0x19FC7D8;
    public const nint dwLocalPlayerController = 0x18FF918;
    public const nint dwLocalPlayerPawn = 0x17252B8;
    public const nint dwPlantedC4 = 0x19151B8;
    public const nint dwPrediction = 0x1725180;
    public const nint dwSensitivity = 0x190DCC8;
    public const nint dwSensitivity_sensitivity = 0x40;
    public const nint dwViewAngles = 0x191D0D0;
    public const nint dwViewMatrix = 0x190F2A0;
    public const nint dwViewRender = 0x190FB20;
}

public static class engine2_dll { // engine2.dll
    public const nint dwBuildNumber = 0x512554;
    public const nint dwNetworkGameClient = 0x511AC8;
    public const nint dwNetworkGameClient_getLocalPlayer = 0xF0;
    public const nint dwNetworkGameClient_maxClients = 0x250;
    public const nint dwNetworkGameClient_signOnState = 0x240;
    public const nint dwWindowHeight = 0x5C99DC;
    public const nint dwWindowWidth = 0x5C99D8;
}

public static class game_info { // Some additional information about the game at dump time
    public const nint buildNumber = 0x36A3; // Game build number
}

public static class inputsystem_dll { // inputsystem.dll
    public const nint dwInputSystem = 0x367A0;
}