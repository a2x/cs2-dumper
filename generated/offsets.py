'''
Created using https://github.com/a2x/cs2-dumper
Tue, 23 Jan 2024 06:17:35 +0000
'''

class client_dll: # client.dll
    dwEntityList = 0x17CE6A0
    dwForceAttack = 0x16CDE80
    dwForceAttack2 = 0x16CDF10
    dwForceBackward = 0x16CE150
    dwForceCrouch = 0x16CE420
    dwForceForward = 0x16CE0C0
    dwForceJump = 0x16CE390
    dwForceLeft = 0x16CE1E0
    dwForceRight = 0x16CE270
    dwGameEntitySystem = 0x18FEDD0
    dwGameEntitySystem_getHighestEntityIndex = 0x1510
    dwGameRules = 0x182AD98
    dwGlobalVars = 0x16C9CA8
    dwGlowManager = 0x182A500
    dwInterfaceLinkList = 0x192CA68
    dwLocalPlayerController = 0x181DC98
    dwLocalPlayerPawn = 0x16D4F48
    dwPlantedC4 = 0x18317D8
    dwPrediction = 0x16D4E10
    dwSensitivity = 0x182BA98
    dwSensitivity_sensitivity = 0x40
    dwViewAngles = 0x1890F30
    dwViewMatrix = 0x182CEA0
    dwViewRender = 0x182D6E8

class engine2_dll: # engine2.dll
    dwBuildNumber = 0x4E13D4
    dwNetworkGameClient = 0x4E0988
    dwNetworkGameClient_getLocalPlayer = 0xF0
    dwNetworkGameClient_maxClients = 0x250
    dwNetworkGameClient_signOnState = 0x240
    dwWindowHeight = 0x597E0C
    dwWindowWidth = 0x597E08

class game_info: # Some additional information about the game at dump time
    buildNumber = 0x36A1 # Game build number

class inputsystem_dll: # inputsystem.dll
    dwInputSystem = 0x35760
