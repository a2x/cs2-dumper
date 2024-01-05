'''
Created using https://github.com/a2x/cs2-dumper
Fri, 5 Jan 2024 01:00:02 +0000
'''

class client_dll: # client.dll
    dwEntityList = 0x17C1950
    dwForceAttack = 0x16C1E90
    dwForceAttack2 = 0x16C1F20
    dwForceBackward = 0x16C2160
    dwForceCrouch = 0x16C2430
    dwForceForward = 0x16C20D0
    dwForceJump = 0x16C23A0
    dwForceLeft = 0x16C21F0
    dwForceRight = 0x16C2280
    dwGameEntitySystem = 0x18ED240
    dwGameEntitySystem_getHighestEntityIndex = 0x1510
    dwGameRules = 0x181E048
    dwGlobalVars = 0x16BDCB8
    dwGlowManager = 0x181D7B0
    dwInterfaceLinkList = 0x191AED8
    dwLocalPlayerController = 0x1810F48
    dwLocalPlayerPawn = 0x16C8F58
    dwPlantedC4 = 0x1824A88
    dwPrediction = 0x16C8E20
    dwSensitivity = 0x181ED48
    dwSensitivity_sensitivity = 0x40
    dwViewAngles = 0x1880DC0
    dwViewMatrix = 0x1820150
    dwViewRender = 0x1820998

class engine2_dll: # engine2.dll
    dwBuildNumber = 0x4E13D4
    dwNetworkGameClient = 0x4E0988
    dwNetworkGameClient_getLocalPlayer = 0xF0
    dwNetworkGameClient_maxClients = 0x250
    dwNetworkGameClient_signOnState = 0x240
    dwWindowHeight = 0x597E0C
    dwWindowWidth = 0x597E08

class game_info: # Some additional information about the game at dump time
    buildNumber = 0x36A0 # Game build number

class inputsystem_dll: # inputsystem.dll
    dwInputSystem = 0x35760
