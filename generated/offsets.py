'''
Created using https://github.com/a2x/cs2-dumper
Tue, 21 Nov 2023 00:47:43 +0000
'''

class client_dll: # client.dll
    dwEntityList = 0x17B5200
    dwForceAttack = 0x16B5510
    dwForceAttack2 = 0x16B55A0
    dwForceBackward = 0x16B57E0
    dwForceCrouch = 0x16B5AB0
    dwForceForward = 0x16B5750
    dwForceJump = 0x16B5A20
    dwForceLeft = 0x16B5870
    dwForceRight = 0x16B5900
    dwGameEntitySystem = 0x18E08E0
    dwGameEntitySystem_getHighestEntityIndex = 0x1510
    dwGameRules = 0x1810EB0
    dwGlobalVars = 0x16B1670
    dwGlowManager = 0x1810ED8
    dwInterfaceLinkList = 0x190E578
    dwLocalPlayerController = 0x1804518
    dwLocalPlayerPawn = 0x16BC5B8
    dwPlantedC4 = 0x1818478
    dwPrediction = 0x16BC480
    dwSensitivity = 0x1812468
    dwSensitivity_sensitivity = 0x40
    dwViewAngles = 0x18744C0
    dwViewMatrix = 0x1813840
    dwViewRender = 0x18140C0

class engine2_dll: # engine2.dll
    dwBuildNumber = 0x48B514
    dwNetworkGameClient = 0x48AAC0
    dwNetworkGameClient_getLocalPlayer = 0xF0
    dwNetworkGameClient_maxClients = 0x250
    dwNetworkGameClient_signOnState = 0x240
    dwWindowHeight = 0x541D8C
    dwWindowWidth = 0x541D88

class inputsystem_dll: # inputsystem.dll
    dwInputSystem = 0x35760
