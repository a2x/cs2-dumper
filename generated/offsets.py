'''
Created using https://github.com/a2x/cs2-dumper
Thu, 8 Feb 2024 02:46:19 +0000
'''

class client_dll: # client.dll
    dwEntityList = 0x18B0FB8
    dwForceAttack = 0x171F150
    dwForceAttack2 = 0x171F1E0
    dwForceBackward = 0x171F420
    dwForceCrouch = 0x171F6F0
    dwForceForward = 0x171F390
    dwForceJump = 0x171F660
    dwForceLeft = 0x171F4B0
    dwForceRight = 0x171F540
    dwGameEntitySystem = 0x19CC7C0
    dwGameEntitySystem_getHighestEntityIndex = 0x1510
    dwGameRules = 0x190DF90
    dwGlobalVars = 0x1719E30
    dwGlowManager = 0x190E3A8
    dwInterfaceLinkList = 0x19FD7E8
    dwLocalPlayerController = 0x1900918
    dwLocalPlayerPawn = 0x17262D8
    dwPlantedC4 = 0x19161B8
    dwPrediction = 0x17261A0
    dwSensitivity = 0x190ECC8
    dwSensitivity_sensitivity = 0x40
    dwViewAngles = 0x191E0D0
    dwViewMatrix = 0x19102A0
    dwViewRender = 0x1910B20

class engine2_dll: # engine2.dll
    dwBuildNumber = 0x512554
    dwNetworkGameClient = 0x511AC8
    dwNetworkGameClient_getLocalPlayer = 0xF0
    dwNetworkGameClient_maxClients = 0x250
    dwNetworkGameClient_signOnState = 0x240
    dwWindowHeight = 0x5C9A6C
    dwWindowWidth = 0x5C9A68

class game_info: # Some additional information about the game at dump time
    buildNumber = 0x36A4 # Game build number

class inputsystem_dll: # inputsystem.dll
    dwInputSystem = 0x367A0
