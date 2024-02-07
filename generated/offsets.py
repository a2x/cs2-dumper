'''
Created using https://github.com/a2x/cs2-dumper
Wed, 7 Feb 2024 04:10:49 +0000
'''

class client_dll: # client.dll
    dwEntityList = 0x18AFFB8
    dwForceAttack = 0x171E130
    dwForceAttack2 = 0x171E1C0
    dwForceBackward = 0x171E400
    dwForceCrouch = 0x171E6D0
    dwForceForward = 0x171E370
    dwForceJump = 0x171E640
    dwForceLeft = 0x171E490
    dwForceRight = 0x171E520
    dwGameEntitySystem = 0x19CB7B0
    dwGameEntitySystem_getHighestEntityIndex = 0x1510
    dwGameRules = 0x190CF90
    dwGlobalVars = 0x1718E10
    dwGlowManager = 0x190D3A8
    dwInterfaceLinkList = 0x19FC7D8
    dwLocalPlayerController = 0x18FF918
    dwLocalPlayerPawn = 0x17252B8
    dwPlantedC4 = 0x19151B8
    dwPrediction = 0x1725180
    dwSensitivity = 0x190DCC8
    dwSensitivity_sensitivity = 0x40
    dwViewAngles = 0x191D0D0
    dwViewMatrix = 0x190F2A0
    dwViewRender = 0x190FB20

class engine2_dll: # engine2.dll
    dwBuildNumber = 0x512554
    dwNetworkGameClient = 0x511AC8
    dwNetworkGameClient_getLocalPlayer = 0xF0
    dwNetworkGameClient_maxClients = 0x250
    dwNetworkGameClient_signOnState = 0x240
    dwWindowHeight = 0x5C99DC
    dwWindowWidth = 0x5C99D8

class game_info: # Some additional information about the game at dump time
    buildNumber = 0x36A3 # Game build number

class inputsystem_dll: # inputsystem.dll
    dwInputSystem = 0x367A0
