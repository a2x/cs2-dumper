'''
Created using https://github.com/a2x/cs2-dumper
Fri, 16 Feb 2024 11:36:44 +0000
'''

class client_dll: # client.dll
    dwEntityList = 0x18B3F98
    dwForceAttack = 0x17221C0
    dwForceAttack2 = 0x1722250
    dwForceBackward = 0x1722490
    dwForceCrouch = 0x1722760
    dwForceForward = 0x1722400
    dwForceJump = 0x17226D0
    dwForceLeft = 0x1722520
    dwForceRight = 0x17225B0
    dwGameEntitySystem = 0x19D1970
    dwGameEntitySystem_getHighestEntityIndex = 0x1510
    dwGameRules = 0x1910FB0
    dwGlobalVars = 0x171CE60
    dwGlowManager = 0x19113D0
    dwInterfaceLinkList = 0x1A029C8
    dwLocalPlayerController = 0x19038E8
    dwLocalPlayerPawn = 0x1729338
    dwPlantedC4 = 0x191B4F8
    dwPrediction = 0x1729200
    dwSensitivity = 0x1911CF8
    dwSensitivity_sensitivity = 0x40
    dwViewAngles = 0x19233D0
    dwViewMatrix = 0x19154B0
    dwViewRender = 0x1915D30

class engine2_dll: # engine2.dll
    dwBuildNumber = 0x513564
    dwNetworkGameClient = 0x512AC8
    dwNetworkGameClient_getLocalPlayer = 0xF0
    dwNetworkGameClient_maxClients = 0x250
    dwNetworkGameClient_signOnState = 0x240
    dwWindowHeight = 0x5CAC04
    dwWindowWidth = 0x5CAC00

class game_info: # Some additional information about the game at dump time
    buildNumber = 0x36A9 # Game build number

class inputsystem_dll: # inputsystem.dll
    dwInputSystem = 0x367A0
