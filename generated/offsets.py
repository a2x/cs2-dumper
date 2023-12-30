'''
Created using https://github.com/a2x/cs2-dumper
Sat, 30 Dec 2023 03:17:26 +0000
'''

class client_dll: # client.dll
    dwEntityList = 0x17C1950
    dwForceAttack = 0x16C1E70
    dwForceAttack2 = 0x16C1F00
    dwForceBackward = 0x16C2140
    dwForceCrouch = 0x16C2410
    dwForceForward = 0x16C20B0
    dwForceJump = 0x16C2380
    dwForceLeft = 0x16C21D0
    dwForceRight = 0x16C2260
    dwGameEntitySystem = 0x18ED250
    dwGameEntitySystem_getHighestEntityIndex = 0x1510
    dwGameRules = 0x181E048
    dwGlobalVars = 0x16BDC98
    dwGlowManager = 0x181D7B0
    dwInterfaceLinkList = 0x191AEE8
    dwLocalPlayerController = 0x1810F48
    dwLocalPlayerPawn = 0x16C8F38
    dwPlantedC4 = 0x1824A88
    dwPrediction = 0x16C8E00
    dwSensitivity = 0x181ED48
    dwSensitivity_sensitivity = 0x40
    dwViewAngles = 0x1880DC0
    dwViewMatrix = 0x1820150
    dwViewRender = 0x1820998

class engine2_dll: # engine2.dll
    dwBuildNumber = 0x4E03D4
    dwNetworkGameClient = 0x4DF988
    dwNetworkGameClient_getLocalPlayer = 0xF0
    dwNetworkGameClient_maxClients = 0x250
    dwNetworkGameClient_signOnState = 0x240
    dwWindowHeight = 0x596E1C
    dwWindowWidth = 0x596E18

class game_info: # Some additional information about the game at dump time
    buildNumber = 0x369F # Game build number

class inputsystem_dll: # inputsystem.dll
    dwInputSystem = 0x35760
