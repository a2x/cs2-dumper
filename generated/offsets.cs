/*
 * Created using https://github.com/a2x/cs2-dumper
 * Thu, 15 Feb 2024 02:02:58 +0000
 */

public static class client_dll { // client.dll
    public const nint dwEntityList = 0x18B3018;
    public const nint dwForceAttack = 0x1721140;
    public const nint dwForceAttack2 = 0x17211D0;
    public const nint dwForceBackward = 0x1721410;
    public const nint dwForceCrouch = 0x17216E0;
    public const nint dwForceForward = 0x1721380;
    public const nint dwForceJump = 0x1721650;
    public const nint dwForceLeft = 0x17214A0;
    public const nint dwForceRight = 0x1721530;
    public const nint dwGameEntitySystem = 0x19CE850;
    public const nint dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    public const nint dwGameRules = 0x1910010;
    public const nint dwGlobalVars = 0x171BE20;
    public const nint dwGlowManager = 0x1910428;
    public const nint dwInterfaceLinkList = 0x19FF8A8;
    public const nint dwLocalPlayerController = 0x1902988;
    public const nint dwLocalPlayerPawn = 0x17282B8;
    public const nint dwPlantedC4 = 0x1918238;
    public const nint dwPrediction = 0x1728180;
    public const nint dwSensitivity = 0x1910D48;
    public const nint dwSensitivity_sensitivity = 0x40;
    public const nint dwViewAngles = 0x1920150;
    public const nint dwViewMatrix = 0x1912320;
    public const nint dwViewRender = 0x1912BA0;
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