'''
Generated using https://github.com/a2x/cs2-dumper
Thu, 14 Mar 2024 05:07:42 +0000
'''

class client_dll: # client.dll
    dwEntityList = 0x18BFC08
    dwForceAttack = 0x172D030
    dwForceAttack2 = 0x172D0C0
    dwForceBackward = 0x172D300
    dwForceCrouch = 0x172D5D0
    dwForceForward = 0x172D270
    dwForceJump = 0x172D540
    dwForceLeft = 0x172D390
    dwForceRight = 0x172D420
    dwGameEntitySystem = 0x19DD590
    dwGameEntitySystem_getHighestEntityIndex = 0x1510
    dwGameRules = 0x191CB50
    dwGlobalVars = 0x1727BB0
    dwGlowManager = 0x191CF70
    dwInterfaceLinkList = 0x1A0E6D8
    dwLocalPlayerController = 0x190F428
    dwLocalPlayerPawn = 0x17341B8
    dwPlantedC4 = 0x1925988
    dwPrediction = 0x1734080
    dwSensitivity = 0x191D898
    dwSensitivity_sensitivity = 0x40
    dwViewAngles = 0x192D860
    dwViewMatrix = 0x1921050
    dwViewRender = 0x19218D0

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
    buildNumber = 0x36AC # Game build number

class inputsystem_dll: # inputsystem.dll
    dwInputSystem = 0x367A0

class matchmaking_dll: # matchmaking.dll
    dwGameTypes = 0x1D21E0
    dwGameTypes_mapName = 0x1D2300
