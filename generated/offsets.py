'''
Created using https://github.com/a2x/cs2-dumper
Sat, 17 Feb 2024 02:19:06 +0000
'''

class client_dll: # client.dll
    dwEntityList = 0x18B3FA8
    dwForceAttack = 0x17221D0
    dwForceAttack2 = 0x1722260
    dwForceBackward = 0x17224A0
    dwForceCrouch = 0x1722770
    dwForceForward = 0x1722410
    dwForceJump = 0x17226E0
    dwForceLeft = 0x1722530
    dwForceRight = 0x17225C0
    dwGameEntitySystem = 0x19D1980
    dwGameEntitySystem_getHighestEntityIndex = 0x1510
    dwGameRules = 0x1910FC0
    dwGlobalVars = 0x171CE70
    dwGlowManager = 0x19113E0
    dwInterfaceLinkList = 0x1A029D8
    dwLocalPlayerController = 0x19038F8
    dwLocalPlayerPawn = 0x1729348
    dwPlantedC4 = 0x191B508
    dwPrediction = 0x1729210
    dwSensitivity = 0x1911D08
    dwSensitivity_sensitivity = 0x40
    dwViewAngles = 0x19233E0
    dwViewMatrix = 0x19154C0
    dwViewRender = 0x1915D40

class engine2_dll: # engine2.dll
    dwBuildNumber = 0x513564
    dwNetworkGameClient = 0x512AC8
    dwNetworkGameClient_getLocalPlayer = 0xF0
    dwNetworkGameClient_maxClients = 0x250
    dwNetworkGameClient_signOnState = 0x240
    dwWindowHeight = 0x5CABC4
    dwWindowWidth = 0x5CABC0

class game_info: # Some additional information about the game at dump time
    buildNumber = 0x36AA # Game build number

class inputsystem_dll: # inputsystem.dll
    dwInputSystem = 0x367A0

class matchmaking_dll: # matchmaking.dll
    dwGameTypes = 0x1D21E0
    dwGameTypes_mapName = 0x1D2300
