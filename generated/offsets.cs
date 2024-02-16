/*
 * Created using https://github.com/a2x/cs2-dumper
 * Fri, 16 Feb 2024 11:36:44 +0000
 */

public static class client_dll { // client.dll
    public const nint dwEntityList = 0x18B3F98;
    public const nint dwForceAttack = 0x17221C0;
    public const nint dwForceAttack2 = 0x1722250;
    public const nint dwForceBackward = 0x1722490;
    public const nint dwForceCrouch = 0x1722760;
    public const nint dwForceForward = 0x1722400;
    public const nint dwForceJump = 0x17226D0;
    public const nint dwForceLeft = 0x1722520;
    public const nint dwForceRight = 0x17225B0;
    public const nint dwGameEntitySystem = 0x19D1970;
    public const nint dwGameEntitySystem_getHighestEntityIndex = 0x1510;
    public const nint dwGameRules = 0x1910FB0;
    public const nint dwGlobalVars = 0x171CE60;
    public const nint dwGlowManager = 0x19113D0;
    public const nint dwInterfaceLinkList = 0x1A029C8;
    public const nint dwLocalPlayerController = 0x19038E8;
    public const nint dwLocalPlayerPawn = 0x1729338;
    public const nint dwPlantedC4 = 0x191B4F8;
    public const nint dwPrediction = 0x1729200;
    public const nint dwSensitivity = 0x1911CF8;
    public const nint dwSensitivity_sensitivity = 0x40;
    public const nint dwViewAngles = 0x19233D0;
    public const nint dwViewMatrix = 0x19154B0;
    public const nint dwViewRender = 0x1915D30;
}

public static class engine2_dll { // engine2.dll
    public const nint dwBuildNumber = 0x513564;
    public const nint dwNetworkGameClient = 0x512AC8;
    public const nint dwNetworkGameClient_getLocalPlayer = 0xF0;
    public const nint dwNetworkGameClient_maxClients = 0x250;
    public const nint dwNetworkGameClient_signOnState = 0x240;
    public const nint dwWindowHeight = 0x5CAC04;
    public const nint dwWindowWidth = 0x5CAC00;
}

public static class game_info { // Some additional information about the game at dump time
    public const nint buildNumber = 0x36A9; // Game build number
}

public static class inputsystem_dll { // inputsystem.dll
    public const nint dwInputSystem = 0x367A0;
}