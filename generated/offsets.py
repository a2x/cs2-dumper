'''
Created using https://github.com/a2x/cs2-dumper
Thu, 29 Feb 2024 02:15:37 +0000
'''

class client_dll: # client.dll
    dwEntityList = 0x18BBAF8
    dwForceAttack = 0x1728F90
    dwForceAttack2 = 0x1729020
    dwForceBackward = 0x1729260
    dwForceCrouch = 0x1729530
    dwForceForward = 0x17291D0
    dwForceJump = 0x17294A0
    dwForceLeft = 0x17292F0
    dwForceRight = 0x1729380
    dwGameEntitySystem = 0x19D9450
    dwGameEntitySystem_getHighestEntityIndex = 0x1510
    dwGameRules = 0x1918A30
    dwGlobalVars = 0x1723B10
    dwGlowManager = 0x1918E50
    dwInterfaceLinkList = 0x1A0A598
    dwLocalPlayerController = 0x190B308
    dwLocalPlayerPawn = 0x1730118
    dwPlantedC4 = 0x1921858
    dwPrediction = 0x172FFE0
    dwSensitivity = 0x1919778
    dwSensitivity_sensitivity = 0x40
    dwViewAngles = 0x1929730
    dwViewMatrix = 0x191CF30
    dwViewRender = 0x191D7B0

class engine2_dll: # engine2.dll
    dwBuildNumber = 0x513574
    dwNetworkGameClient_deltaTick = 0x258
    dwNetworkGameClient = 0x512AC8
    dwNetworkGameClient_getLocalPlayer = 0xF0
    dwNetworkGameClient_maxClients = 0x250
    dwNetworkGameClient_signOnState = 0x240
    dwWindowHeight = 0x5CBC64
    dwWindowWidth = 0x5CBC60

class game_info: # Some additional information about the game at dump time
    buildNumber = 0x36AB # Game build number

class inputsystem_dll: # inputsystem.dll
    dwInputSystem = 0x367A0

class matchmaking_dll: # matchmaking.dll
    dwGameTypes = 0x1D21E0
    dwGameTypes_mapName = 0x1D2300
