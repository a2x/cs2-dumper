'''
Created using https://github.com/a2x/cs2-dumper
Thu, 15 Feb 2024 02:02:58 +0000
'''

class client_dll: # client.dll
    dwEntityList = 0x18B3018
    dwForceAttack = 0x1721140
    dwForceAttack2 = 0x17211D0
    dwForceBackward = 0x1721410
    dwForceCrouch = 0x17216E0
    dwForceForward = 0x1721380
    dwForceJump = 0x1721650
    dwForceLeft = 0x17214A0
    dwForceRight = 0x1721530
    dwGameEntitySystem = 0x19CE850
    dwGameEntitySystem_getHighestEntityIndex = 0x1510
    dwGameRules = 0x1910010
    dwGlobalVars = 0x171BE20
    dwGlowManager = 0x1910428
    dwInterfaceLinkList = 0x19FF8A8
    dwLocalPlayerController = 0x1902988
    dwLocalPlayerPawn = 0x17282B8
    dwPlantedC4 = 0x1918238
    dwPrediction = 0x1728180
    dwSensitivity = 0x1910D48
    dwSensitivity_sensitivity = 0x40
    dwViewAngles = 0x1920150
    dwViewMatrix = 0x1912320
    dwViewRender = 0x1912BA0

class engine2_dll: # engine2.dll
    dwBuildNumber = 0x512554
    dwNetworkGameClient = 0x511AC8
    dwNetworkGameClient_getLocalPlayer = 0xF0
    dwNetworkGameClient_maxClients = 0x250
    dwNetworkGameClient_signOnState = 0x240
    dwWindowHeight = 0x5C9A2C
    dwWindowWidth = 0x5C9A28

class game_info: # Some additional information about the game at dump time
    buildNumber = 0x36A8 # Game build number

class inputsystem_dll: # inputsystem.dll
    dwInputSystem = 0x367A0
