'''
Generated using https://github.com/a2x/cs2-dumper
Sat, 23 Mar 2024 05:02:05 +0000
'''

class client_dll: # client.dll
    dwEntityList = 0x18C2D58
    dwForceAttack = 0x1730020
    dwForceAttack2 = 0x17300B0
    dwForceBackward = 0x17302F0
    dwForceCrouch = 0x17305C0
    dwForceForward = 0x1730260
    dwForceJump = 0x1730530
    dwForceLeft = 0x1730380
    dwForceRight = 0x1730410
    dwGameEntitySystem = 0x19E0790
    dwGameEntitySystem_getHighestEntityIndex = 0x1510
    dwGameRules = 0x191FCA0
    dwGlobalVars = 0x172ABA0
    dwGlowManager = 0x19200C0
    dwInterfaceLinkList = 0x1A118D8
    dwLocalPlayerController = 0x1912578
    dwLocalPlayerPawn = 0x17371A8
    dwPlantedC4 = 0x1928AD8
    dwPrediction = 0x1737070
    dwSensitivity = 0x19209E8
    dwSensitivity_sensitivity = 0x40
    dwViewAngles = 0x19309B0
    dwViewMatrix = 0x19241A0
    dwViewRender = 0x1924A20

class engine2_dll: # engine2.dll
    dwBuildNumber = 0x514574
    dwNetworkGameClient_deltaTick = 0x258
    dwNetworkGameClient = 0x513AC8
    dwNetworkGameClient_getLocalPlayer = 0xF0
    dwNetworkGameClient_maxClients = 0x250
    dwNetworkGameClient_signOnState = 0x240
    dwWindowHeight = 0x5CCCDC
    dwWindowWidth = 0x5CCCD8

class game_info: # Some additional information about the game at dump time
    buildNumber = 0x36B0 # Game build number

class inputsystem_dll: # inputsystem.dll
    dwInputSystem = 0x367A0

class matchmaking_dll: # matchmaking.dll
    dwGameTypes = 0x1D21E0
    dwGameTypes_mapName = 0x1D2300
