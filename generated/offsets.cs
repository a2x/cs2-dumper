/*
 * Created using https://github.com/a2x/cs2-dumper
 * Fri, 5 Jan 2024 01:00:02 +0000
 */

public static class client_dll { // client.dll
    public const nint dwEntityList = 0x17C1950;
    public const nint dwForceAttack = 0x16C1E90;
    public const nint dwForceAttack2 = 0x16C1F20;
    public const nint dwForceBackward = 0x16C2160;
    public const nint dwForceCrouch = 0x16C2430;
    public const nint dwForceForward = 0x16C20D0;
    public const nint dwForceJump = 0x16C23A0;
    public const nint dwForceLeft = 0x16C21F0;
    public const nint dwForceRight = 0x16C2280;
    public const nint dwGameEntitySystem = 0x18ED240;
    public const nint dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    public const nint dwGameRules = 0x181E048;
    public const nint dwGlobalVars = 0x16BDCB8;
    public const nint dwGlowManager = 0x181D7B0;
    public const nint dwInterfaceLinkList = 0x191AED8;
    public const nint dwLocalPlayerController = 0x1810F48;
    public const nint dwLocalPlayerPawn = 0x16C8F58;
    public const nint dwPlantedC4 = 0x1824A88;
    public const nint dwPrediction = 0x16C8E20;
    public const nint dwSensitivity = 0x181ED48;
    public const nint dwSensitivity_sensitivity = 0x40;
    public const nint dwViewAngles = 0x1880DC0;
    public const nint dwViewMatrix = 0x1820150;
    public const nint dwViewRender = 0x1820998;
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
    public const nint buildNumber = 0x36A0; // Game build number
}

public static class inputsystem_dll { // inputsystem.dll
    public const nint dwInputSystem = 0x35760;
}