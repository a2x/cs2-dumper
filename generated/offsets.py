'''
Created using https://github.com/a2x/cs2-dumper
Fri, 9 Feb 2024 02:38:11 +0000
'''

class client_dll: # client.dll
    dwEntityList = 0x18B0FC8
    dwForceAttack = 0x171F160
    dwForceAttack2 = 0x171F1F0
    dwForceBackward = 0x171F430
    dwForceCrouch = 0x171F700
    dwForceForward = 0x171F3A0
    dwForceJump = 0x171F670
    dwForceLeft = 0x171F4C0
    dwForceRight = 0x171F550
    dwGameEntitySystem = 0x19CC7D0
    dwGameEntitySystem_getHighestEntityIndex = 0x1510
    dwGameRules = 0x190DFA0
    dwGlobalVars = 0x1719E40
    dwGlowManager = 0x190E3B8
    dwInterfaceLinkList = 0x19FD7F8
    dwLocalPlayerController = 0x1900928
    dwLocalPlayerPawn = 0x17262E8
    dwPlantedC4 = 0x19161C8
    dwPrediction = 0x17261B0
    dwSensitivity = 0x190ECD8
    dwSensitivity_sensitivity = 0x40
    dwViewAngles = 0x191E0E0
    dwViewMatrix = 0x19102B0
    dwViewRender = 0x1910B30

class engine2_dll: # engine2.dll
    dwBuildNumber = 0x512554
    dwNetworkGameClient = 0x511AC8
    dwNetworkGameClient_getLocalPlayer = 0xF0
    dwNetworkGameClient_maxClients = 0x250
    dwNetworkGameClient_signOnState = 0x240
    dwWindowHeight = 0x5C99FC
    dwWindowWidth = 0x5C99F8

class game_info: # Some additional information about the game at dump time
    buildNumber = 0x36A6 # Game build number

class inputsystem_dll: # inputsystem.dll
    dwInputSystem = 0x367A0
