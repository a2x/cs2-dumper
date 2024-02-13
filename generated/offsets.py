'''
Created using https://github.com/a2x/cs2-dumper
Tue, 13 Feb 2024 02:41:15 +0000
'''

class client_dll: # client.dll
    dwEntityList = 0x18B1FE8
    dwForceAttack = 0x1720160
    dwForceAttack2 = 0x17201F0
    dwForceBackward = 0x1720430
    dwForceCrouch = 0x1720700
    dwForceForward = 0x17203A0
    dwForceJump = 0x1720670
    dwForceLeft = 0x17204C0
    dwForceRight = 0x1720550
    dwGameEntitySystem = 0x19CD800
    dwGameEntitySystem_getHighestEntityIndex = 0x1510
    dwGameRules = 0x190EFC0
    dwGlobalVars = 0x171AE40
    dwGlowManager = 0x190F3D8
    dwInterfaceLinkList = 0x19FE828
    dwLocalPlayerController = 0x1901948
    dwLocalPlayerPawn = 0x17272E8
    dwPlantedC4 = 0x19171E8
    dwPrediction = 0x17271B0
    dwSensitivity = 0x190FCF8
    dwSensitivity_sensitivity = 0x40
    dwViewAngles = 0x191F100
    dwViewMatrix = 0x19112D0
    dwViewRender = 0x1911B50

class engine2_dll: # engine2.dll
    dwBuildNumber = 0x512554
    dwNetworkGameClient = 0x511AC8
    dwNetworkGameClient_getLocalPlayer = 0xF0
    dwNetworkGameClient_maxClients = 0x250
    dwNetworkGameClient_signOnState = 0x240
    dwWindowHeight = 0x5C9A2C
    dwWindowWidth = 0x5C9A28

class game_info: # Some additional information about the game at dump time
    buildNumber = 0x36A7 # Game build number

class inputsystem_dll: # inputsystem.dll
    dwInputSystem = 0x367A0
