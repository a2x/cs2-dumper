'''
Generated using https://github.com/a2x/cs2-dumper
Sat, 23 Mar 2024 05:02:04 +0000
'''

class ActiveModelConfig_t:
    m_Handle = 0x28 # ModelConfigHandle_t
    m_Name = 0x30 # CUtlSymbolLarge
    m_AssociatedEntities = 0x38 # C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
    m_AssociatedEntityNames = 0x50 # C_NetworkUtlVectorBase<CUtlSymbolLarge>

class CAnimGraphNetworkedVariables:
    m_PredNetBoolVariables = 0x8 # C_NetworkUtlVectorBase<uint32_t>
    m_PredNetByteVariables = 0x20 # C_NetworkUtlVectorBase<uint8_t>
    m_PredNetUInt16Variables = 0x38 # C_NetworkUtlVectorBase<uint16_t>
    m_PredNetIntVariables = 0x50 # C_NetworkUtlVectorBase<int32_t>
    m_PredNetUInt32Variables = 0x68 # C_NetworkUtlVectorBase<uint32_t>
    m_PredNetUInt64Variables = 0x80 # C_NetworkUtlVectorBase<uint64_t>
    m_PredNetFloatVariables = 0x98 # C_NetworkUtlVectorBase<float>
    m_PredNetVectorVariables = 0xB0 # C_NetworkUtlVectorBase<Vector>
    m_PredNetQuaternionVariables = 0xC8 # C_NetworkUtlVectorBase<Quaternion>
    m_PredNetGlobalSymbolVariables = 0xE0 # C_NetworkUtlVectorBase<CGlobalSymbol>
    m_OwnerOnlyPredNetBoolVariables = 0xF8 # C_NetworkUtlVectorBase<uint32_t>
    m_OwnerOnlyPredNetByteVariables = 0x110 # C_NetworkUtlVectorBase<uint8_t>
    m_OwnerOnlyPredNetUInt16Variables = 0x128 # C_NetworkUtlVectorBase<uint16_t>
    m_OwnerOnlyPredNetIntVariables = 0x140 # C_NetworkUtlVectorBase<int32_t>
    m_OwnerOnlyPredNetUInt32Variables = 0x158 # C_NetworkUtlVectorBase<uint32_t>
    m_OwnerOnlyPredNetUInt64Variables = 0x170 # C_NetworkUtlVectorBase<uint64_t>
    m_OwnerOnlyPredNetFloatVariables = 0x188 # C_NetworkUtlVectorBase<float>
    m_OwnerOnlyPredNetVectorVariables = 0x1A0 # C_NetworkUtlVectorBase<Vector>
    m_OwnerOnlyPredNetQuaternionVariables = 0x1B8 # C_NetworkUtlVectorBase<Quaternion>
    m_OwnerOnlyPredNetGlobalSymbolVariables = 0x1D0 # C_NetworkUtlVectorBase<CGlobalSymbol>
    m_nBoolVariablesCount = 0x1E8 # int32_t
    m_nOwnerOnlyBoolVariablesCount = 0x1EC # int32_t
    m_nRandomSeedOffset = 0x1F0 # int32_t
    m_flLastTeleportTime = 0x1F4 # float

class CAttributeList:
    m_Attributes = 0x8 # C_UtlVectorEmbeddedNetworkVar<CEconItemAttribute>
    m_pManager = 0x58 # CAttributeManager*

class CAttributeManager:
    m_Providers = 0x8 # CUtlVector<CHandle<C_BaseEntity>>
    m_iReapplyProvisionParity = 0x20 # int32_t
    m_hOuter = 0x24 # CHandle<C_BaseEntity>
    m_bPreventLoopback = 0x28 # bool
    m_ProviderType = 0x2C # attributeprovidertypes_t
    m_CachedResults = 0x30 # CUtlVector<CAttributeManager::cached_attribute_float_t>

class CAttributeManager_cached_attribute_float_t:
    flIn = 0x0 # float
    iAttribHook = 0x8 # CUtlSymbolLarge
    flOut = 0x10 # float

class CBaseAnimGraph: # C_BaseModelEntity
    m_bInitiallyPopulateInterpHistory = 0xD48 # bool
    m_bSuppressAnimEventSounds = 0xD4A # bool
    m_bAnimGraphUpdateEnabled = 0xD58 # bool
    m_flMaxSlopeDistance = 0xD5C # float
    m_vLastSlopeCheckPos = 0xD60 # Vector
    m_bAnimationUpdateScheduled = 0xD6C # bool
    m_vecForce = 0xD70 # Vector
    m_nForceBone = 0xD7C # int32_t
    m_pClientsideRagdoll = 0xD80 # CBaseAnimGraph*
    m_bBuiltRagdoll = 0xD88 # bool
    m_pRagdollPose = 0xDA0 # PhysicsRagdollPose_t*
    m_bClientRagdoll = 0xDA8 # bool
    m_bHasAnimatedMaterialAttributes = 0xDB8 # bool

class CBaseAnimGraphController: # CSkeletonAnimationController
    m_animGraphNetworkedVars = 0x18 # CAnimGraphNetworkedVariables
    m_bSequenceFinished = 0x14A8 # bool
    m_flSoundSyncTime = 0x14AC # float
    m_hSequence = 0x14B0 # HSequence
    m_flSeqStartTime = 0x14B4 # GameTime_t
    m_flSeqFixedCycle = 0x14B8 # float
    m_nAnimLoopMode = 0x14BC # AnimLoopMode_t
    m_flPlaybackRate = 0x14C0 # CNetworkedQuantizedFloat
    m_nNotifyState = 0x14CC # SequenceFinishNotifyState_t
    m_bNetworkedAnimationInputsChanged = 0x14CE # bool
    m_bNetworkedSequenceChanged = 0x14CF # bool
    m_bLastUpdateSkipped = 0x14D0 # bool
    m_flPrevAnimUpdateTime = 0x14D4 # GameTime_t

class CBasePlayerController: # C_BaseEntity
    m_nFinalPredictedTick = 0x558 # int32_t
    m_CommandContext = 0x560 # C_CommandContext
    m_nInButtonsWhichAreToggles = 0x5F8 # uint64_t
    m_nTickBase = 0x600 # uint32_t
    m_hPawn = 0x604 # CHandle<C_BasePlayerPawn>
    m_hPredictedPawn = 0x608 # CHandle<C_BasePlayerPawn>
    m_nSplitScreenSlot = 0x60C # CSplitScreenSlot
    m_hSplitOwner = 0x610 # CHandle<CBasePlayerController>
    m_hSplitScreenPlayers = 0x618 # CUtlVector<CHandle<CBasePlayerController>>
    m_bIsHLTV = 0x630 # bool
    m_iConnected = 0x634 # PlayerConnectedState
    m_iszPlayerName = 0x638 # char[128]
    m_steamID = 0x6C0 # uint64_t
    m_bIsLocalPlayerController = 0x6C8 # bool
    m_iDesiredFOV = 0x6CC # uint32_t

class CBasePlayerControllerAPI:

class CBasePlayerVData: # CEntitySubclassVDataBase
    m_sModelName = 0x28 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    m_flHeadDamageMultiplier = 0x108 # CSkillFloat
    m_flChestDamageMultiplier = 0x118 # CSkillFloat
    m_flStomachDamageMultiplier = 0x128 # CSkillFloat
    m_flArmDamageMultiplier = 0x138 # CSkillFloat
    m_flLegDamageMultiplier = 0x148 # CSkillFloat
    m_flHoldBreathTime = 0x158 # float
    m_flDrowningDamageInterval = 0x15C # float
    m_nDrowningDamageInitial = 0x160 # int32_t
    m_nDrowningDamageMax = 0x164 # int32_t
    m_nWaterSpeed = 0x168 # int32_t
    m_flUseRange = 0x16C # float
    m_flUseAngleTolerance = 0x170 # float
    m_flCrouchTime = 0x174 # float

class CBasePlayerWeaponVData: # CEntitySubclassVDataBase
    m_szWorldModel = 0x28 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    m_bBuiltRightHanded = 0x108 # bool
    m_bAllowFlipping = 0x109 # bool
    m_sMuzzleAttachment = 0x110 # CUtlString
    m_szMuzzleFlashParticle = 0x118 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    m_iFlags = 0x1F8 # ItemFlagTypes_t
    m_nPrimaryAmmoType = 0x1F9 # AmmoIndex_t
    m_nSecondaryAmmoType = 0x1FA # AmmoIndex_t
    m_iMaxClip1 = 0x1FC # int32_t
    m_iMaxClip2 = 0x200 # int32_t
    m_iDefaultClip1 = 0x204 # int32_t
    m_iDefaultClip2 = 0x208 # int32_t
    m_iWeight = 0x20C # int32_t
    m_bAutoSwitchTo = 0x210 # bool
    m_bAutoSwitchFrom = 0x211 # bool
    m_iRumbleEffect = 0x214 # RumbleEffect_t
    m_bLinkedCooldowns = 0x218 # bool
    m_aShootSounds = 0x220 # CUtlMap<WeaponSound_t,CSoundEventName>
    m_iSlot = 0x240 # int32_t
    m_iPosition = 0x244 # int32_t

class CBaseProp: # CBaseAnimGraph
    m_bModelOverrodeBlockLOS = 0xED8 # bool
    m_iShapeType = 0xEDC # int32_t
    m_bConformToCollisionBounds = 0xEE0 # bool
    m_mPreferredCatchTransform = 0xEE4 # matrix3x4_t

class CBodyComponent: # CEntityComponent
    m_pSceneNode = 0x8 # CGameSceneNode*
    __m_pChainEntity = 0x20 # CNetworkVarChainer

class CBodyComponentBaseAnimGraph: # CBodyComponentSkeletonInstance
    m_animationController = 0x460 # CBaseAnimGraphController
    __m_pChainEntity = 0x1C28 # CNetworkVarChainer

class CBodyComponentBaseModelEntity: # CBodyComponentSkeletonInstance
    __m_pChainEntity = 0x460 # CNetworkVarChainer

class CBodyComponentPoint: # CBodyComponent
    m_sceneNode = 0x50 # CGameSceneNode
    __m_pChainEntity = 0x1A0 # CNetworkVarChainer

class CBodyComponentSkeletonInstance: # CBodyComponent
    m_skeletonInstance = 0x50 # CSkeletonInstance
    __m_pChainEntity = 0x430 # CNetworkVarChainer

class CBombTarget: # C_BaseTrigger
    m_bBombPlantedHere = 0xCD8 # bool

class CBreachCharge: # C_CSWeaponBase

class CBreachChargeProjectile: # C_BaseGrenade

class CBumpMine: # C_CSWeaponBase

class CBumpMineProjectile: # C_BaseGrenade

class CBuoyancyHelper:
    m_flFluidDensity = 0x18 # float

class CCSArmsRaceScript: # CCSGameModeScript
    m_pOuter = 0xD8 # CCSGameModeRules_ArmsRace*

class CCSDeathmatchScript: # CCSGameModeScript
    m_pOuter = 0xD8 # CCSGameModeRules_Deathmatch*

class CCSGO_WingmanIntroCharacterPosition: # C_CSGO_TeamIntroCharacterPosition

class CCSGO_WingmanIntroCounterTerroristPosition: # CCSGO_WingmanIntroCharacterPosition

class CCSGO_WingmanIntroTerroristPosition: # CCSGO_WingmanIntroCharacterPosition

class CCSGameModeRules:
    __m_pChainEntity = 0x8 # CNetworkVarChainer

class CCSGameModeRules_ArmsRace: # CCSGameModeRules
    m_WeaponSequence = 0x38 # C_NetworkUtlVectorBase<CUtlString>

class CCSGameModeRules_Deathmatch: # CCSGameModeRules
    m_flDMBonusStartTime = 0x38 # GameTime_t
    m_flDMBonusTimeLength = 0x3C # float
    m_nDMBonusWeaponLoadoutSlot = 0x40 # int16_t

class CCSGameModeRules_Noop: # CCSGameModeRules

class CCSGameModeScript: # CBasePulseGraphInstance

class CCSObserver_CameraServices: # CCSPlayerBase_CameraServices

class CCSObserver_MovementServices: # CPlayer_MovementServices

class CCSObserver_ObserverServices: # CPlayer_ObserverServices
    m_hLastObserverTarget = 0x58 # CEntityHandle
    m_vecObserverInterpolateOffset = 0x5C # Vector
    m_vecObserverInterpStartPos = 0x68 # Vector
    m_flObsInterp_PathLength = 0x74 # float
    m_qObsInterp_OrientationStart = 0x80 # Quaternion
    m_qObsInterp_OrientationTravelDir = 0x90 # Quaternion
    m_obsInterpState = 0xA0 # ObserverInterpState_t
    m_bObserverInterpolationNeedsDeferredSetup = 0xA4 # bool

class CCSObserver_UseServices: # CPlayer_UseServices

class CCSObserver_ViewModelServices: # CPlayer_ViewModelServices

class CCSPlayerBase_CameraServices: # CPlayer_CameraServices
    m_iFOV = 0x210 # uint32_t
    m_iFOVStart = 0x214 # uint32_t
    m_flFOVTime = 0x218 # GameTime_t
    m_flFOVRate = 0x21C # float
    m_hZoomOwner = 0x220 # CHandle<C_BaseEntity>
    m_flLastShotFOV = 0x224 # float

class CCSPlayerController: # CBasePlayerController
    m_pInGameMoneyServices = 0x6F8 # CCSPlayerController_InGameMoneyServices*
    m_pInventoryServices = 0x700 # CCSPlayerController_InventoryServices*
    m_pActionTrackingServices = 0x708 # CCSPlayerController_ActionTrackingServices*
    m_pDamageServices = 0x710 # CCSPlayerController_DamageServices*
    m_iPing = 0x718 # uint32_t
    m_bHasCommunicationAbuseMute = 0x71C # bool
    m_szCrosshairCodes = 0x720 # CUtlSymbolLarge
    m_iPendingTeamNum = 0x728 # uint8_t
    m_flForceTeamTime = 0x72C # GameTime_t
    m_iCompTeammateColor = 0x730 # int32_t
    m_bEverPlayedOnTeam = 0x734 # bool
    m_flPreviousForceJoinTeamTime = 0x738 # GameTime_t
    m_szClan = 0x740 # CUtlSymbolLarge
    m_sSanitizedPlayerName = 0x748 # CUtlString
    m_iCoachingTeam = 0x750 # int32_t
    m_nPlayerDominated = 0x758 # uint64_t
    m_nPlayerDominatingMe = 0x760 # uint64_t
    m_iCompetitiveRanking = 0x768 # int32_t
    m_iCompetitiveWins = 0x76C # int32_t
    m_iCompetitiveRankType = 0x770 # int8_t
    m_iCompetitiveRankingPredicted_Win = 0x774 # int32_t
    m_iCompetitiveRankingPredicted_Loss = 0x778 # int32_t
    m_iCompetitiveRankingPredicted_Tie = 0x77C # int32_t
    m_nEndMatchNextMapVote = 0x780 # int32_t
    m_unActiveQuestId = 0x784 # uint16_t
    m_nQuestProgressReason = 0x788 # QuestProgress::Reason
    m_unPlayerTvControlFlags = 0x78C # uint32_t
    m_iDraftIndex = 0x7B8 # int32_t
    m_msQueuedModeDisconnectionTimestamp = 0x7BC # uint32_t
    m_uiAbandonRecordedReason = 0x7C0 # uint32_t
    m_bCannotBeKicked = 0x7C4 # bool
    m_bEverFullyConnected = 0x7C5 # bool
    m_bAbandonAllowsSurrender = 0x7C6 # bool
    m_bAbandonOffersInstantSurrender = 0x7C7 # bool
    m_bDisconnection1MinWarningPrinted = 0x7C8 # bool
    m_bScoreReported = 0x7C9 # bool
    m_nDisconnectionTick = 0x7CC # int32_t
    m_bControllingBot = 0x7D8 # bool
    m_bHasControlledBotThisRound = 0x7D9 # bool
    m_bHasBeenControlledByPlayerThisRound = 0x7DA # bool
    m_nBotsControlledThisRound = 0x7DC # int32_t
    m_bCanControlObservedBot = 0x7E0 # bool
    m_hPlayerPawn = 0x7E4 # CHandle<C_CSPlayerPawn>
    m_hObserverPawn = 0x7E8 # CHandle<C_CSObserverPawn>
    m_bPawnIsAlive = 0x7EC # bool
    m_iPawnHealth = 0x7F0 # uint32_t
    m_iPawnArmor = 0x7F4 # int32_t
    m_bPawnHasDefuser = 0x7F8 # bool
    m_bPawnHasHelmet = 0x7F9 # bool
    m_nPawnCharacterDefIndex = 0x7FA # uint16_t
    m_iPawnLifetimeStart = 0x7FC # int32_t
    m_iPawnLifetimeEnd = 0x800 # int32_t
    m_iPawnBotDifficulty = 0x804 # int32_t
    m_hOriginalControllerOfCurrentPawn = 0x808 # CHandle<CCSPlayerController>
    m_iScore = 0x80C # int32_t
    m_vecKills = 0x810 # C_NetworkUtlVectorBase<EKillTypes_t>
    m_bMvpNoMusic = 0x828 # bool
    m_eMvpReason = 0x82C # int32_t
    m_iMusicKitID = 0x830 # int32_t
    m_iMusicKitMVPs = 0x834 # int32_t
    m_iMVPs = 0x838 # int32_t
    m_bIsPlayerNameDirty = 0x83C # bool

class CCSPlayerControllerAPI:

class CCSPlayerController_ActionTrackingServices: # CPlayerControllerComponent
    m_perRoundStats = 0x40 # C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
    m_matchStats = 0x90 # CSMatchStats_t
    m_iNumRoundKills = 0x110 # int32_t
    m_iNumRoundKillsHeadshots = 0x114 # int32_t
    m_unTotalRoundDamageDealt = 0x118 # uint32_t

class CCSPlayerController_DamageServices: # CPlayerControllerComponent
    m_nSendUpdate = 0x40 # int32_t
    m_DamageList = 0x48 # C_UtlVectorEmbeddedNetworkVar<CDamageRecord>

class CCSPlayerController_InGameMoneyServices: # CPlayerControllerComponent
    m_iAccount = 0x40 # int32_t
    m_iStartAccount = 0x44 # int32_t
    m_iTotalCashSpent = 0x48 # int32_t
    m_iCashSpentThisRound = 0x4C # int32_t
    m_nPreviousAccount = 0x50 # int32_t

class CCSPlayerController_InventoryServices: # CPlayerControllerComponent
    m_unMusicID = 0x40 # uint16_t
    m_rank = 0x44 # MedalRank_t[6]
    m_nPersonaDataPublicLevel = 0x5C # int32_t
    m_nPersonaDataPublicCommendsLeader = 0x60 # int32_t
    m_nPersonaDataPublicCommendsTeacher = 0x64 # int32_t
    m_nPersonaDataPublicCommendsFriendly = 0x68 # int32_t
    m_nPersonaDataXpTrailLevel = 0x6C # int32_t
    m_vecServerAuthoritativeWeaponSlots = 0x70 # C_UtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>

class CCSPlayer_ActionTrackingServices: # CPlayerPawnComponent
    m_hLastWeaponBeforeC4AutoSwitch = 0x40 # CHandle<C_BasePlayerWeapon>
    m_bIsRescuing = 0x44 # bool
    m_weaponPurchasesThisMatch = 0x48 # WeaponPurchaseTracker_t
    m_weaponPurchasesThisRound = 0xA0 # WeaponPurchaseTracker_t

class CCSPlayer_BulletServices: # CPlayerPawnComponent
    m_totalHitsOnServer = 0x40 # int32_t

class CCSPlayer_BuyServices: # CPlayerPawnComponent
    m_vecSellbackPurchaseEntries = 0x40 # C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>

class CCSPlayer_CameraServices: # CCSPlayerBase_CameraServices
    m_flDeathCamTilt = 0x228 # float

class CCSPlayer_GlowServices: # CPlayerPawnComponent

class CCSPlayer_HostageServices: # CPlayerPawnComponent
    m_hCarriedHostage = 0x40 # CHandle<C_BaseEntity>
    m_hCarriedHostageProp = 0x44 # CHandle<C_BaseEntity>

class CCSPlayer_ItemServices: # CPlayer_ItemServices
    m_bHasDefuser = 0x40 # bool
    m_bHasHelmet = 0x41 # bool
    m_bHasHeavyArmor = 0x42 # bool

class CCSPlayer_MovementServices: # CPlayer_MovementServices_Humanoid
    m_flMaxFallVelocity = 0x218 # float
    m_vecLadderNormal = 0x21C # Vector
    m_nLadderSurfacePropIndex = 0x228 # int32_t
    m_flDuckAmount = 0x22C # float
    m_flDuckSpeed = 0x230 # float
    m_bDuckOverride = 0x234 # bool
    m_bDesiresDuck = 0x235 # bool
    m_flDuckOffset = 0x238 # float
    m_nDuckTimeMsecs = 0x23C # uint32_t
    m_nDuckJumpTimeMsecs = 0x240 # uint32_t
    m_nJumpTimeMsecs = 0x244 # uint32_t
    m_flLastDuckTime = 0x248 # float
    m_vecLastPositionAtFullCrouchSpeed = 0x258 # Vector2D
    m_duckUntilOnGround = 0x260 # bool
    m_bHasWalkMovedSinceLastJump = 0x261 # bool
    m_bInStuckTest = 0x262 # bool
    m_flStuckCheckTime = 0x270 # float[64][2]
    m_nTraceCount = 0x470 # int32_t
    m_StuckLast = 0x474 # int32_t
    m_bSpeedCropped = 0x478 # bool
    m_nOldWaterLevel = 0x47C # int32_t
    m_flWaterEntryTime = 0x480 # float
    m_vecForward = 0x484 # Vector
    m_vecLeft = 0x490 # Vector
    m_vecUp = 0x49C # Vector
    m_nGameCodeHasMovedPlayerAfterCommand = 0x4A8 # int32_t
    m_bOldJumpPressed = 0x4AC # bool
    m_flJumpPressedTime = 0x4B0 # float
    m_flJumpUntil = 0x4B4 # float
    m_flJumpVel = 0x4B8 # float
    m_fStashGrenadeParameterWhen = 0x4BC # GameTime_t
    m_nButtonDownMaskPrev = 0x4C0 # uint64_t
    m_flOffsetTickCompleteTime = 0x4C8 # float
    m_flOffsetTickStashedSpeed = 0x4CC # float
    m_flStamina = 0x4D0 # float
    m_flHeightAtJumpStart = 0x4D4 # float
    m_flMaxJumpHeightThisJump = 0x4D8 # float

class CCSPlayer_PingServices: # CPlayerPawnComponent
    m_hPlayerPing = 0x40 # CHandle<C_BaseEntity>

class CCSPlayer_UseServices: # CPlayer_UseServices

class CCSPlayer_ViewModelServices: # CPlayer_ViewModelServices
    m_hViewModel = 0x40 # CHandle<C_BaseViewModel>[3]

class CCSPlayer_WaterServices: # CPlayer_WaterServices
    m_flWaterJumpTime = 0x40 # float
    m_vecWaterJumpVel = 0x44 # Vector
    m_flSwimSoundTime = 0x50 # float

class CCSPlayer_WeaponServices: # CPlayer_WeaponServices
    m_flNextAttack = 0xB8 # GameTime_t
    m_bIsLookingAtWeapon = 0xBC # bool
    m_bIsHoldingLookAtWeapon = 0xBD # bool
    m_nOldShootPositionHistoryCount = 0xC0 # uint32_t
    m_nOldInputHistoryCount = 0x458 # uint32_t

class CCSTakeDamageInfoAPI:

class CCSWeaponBaseAPI:

class CCSWeaponBaseVData: # CBasePlayerWeaponVData
    m_WeaponType = 0x248 # CSWeaponType
    m_WeaponCategory = 0x24C # CSWeaponCategory
    m_szViewModel = 0x250 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    m_szPlayerModel = 0x330 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    m_szWorldDroppedModel = 0x410 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    m_szAimsightLensMaskModel = 0x4F0 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    m_szMagazineModel = 0x5D0 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    m_szHeatEffect = 0x6B0 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    m_szEjectBrassEffect = 0x790 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    m_szMuzzleFlashParticleAlt = 0x870 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    m_szMuzzleFlashThirdPersonParticle = 0x950 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    m_szMuzzleFlashThirdPersonParticleAlt = 0xA30 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    m_szTracerParticle = 0xB10 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    m_GearSlot = 0xBF0 # gear_slot_t
    m_GearSlotPosition = 0xBF4 # int32_t
    m_DefaultLoadoutSlot = 0xBF8 # loadout_slot_t
    m_sWrongTeamMsg = 0xC00 # CUtlString
    m_nPrice = 0xC08 # int32_t
    m_nKillAward = 0xC0C # int32_t
    m_nPrimaryReserveAmmoMax = 0xC10 # int32_t
    m_nSecondaryReserveAmmoMax = 0xC14 # int32_t
    m_bMeleeWeapon = 0xC18 # bool
    m_bHasBurstMode = 0xC19 # bool
    m_bIsRevolver = 0xC1A # bool
    m_bCannotShootUnderwater = 0xC1B # bool
    m_szName = 0xC20 # CGlobalSymbol
    m_szAnimExtension = 0xC28 # CUtlString
    m_eSilencerType = 0xC30 # CSWeaponSilencerType
    m_nCrosshairMinDistance = 0xC34 # int32_t
    m_nCrosshairDeltaDistance = 0xC38 # int32_t
    m_bIsFullAuto = 0xC3C # bool
    m_nNumBullets = 0xC40 # int32_t
    m_flCycleTime = 0xC44 # CFiringModeFloat
    m_flMaxSpeed = 0xC4C # CFiringModeFloat
    m_flSpread = 0xC54 # CFiringModeFloat
    m_flInaccuracyCrouch = 0xC5C # CFiringModeFloat
    m_flInaccuracyStand = 0xC64 # CFiringModeFloat
    m_flInaccuracyJump = 0xC6C # CFiringModeFloat
    m_flInaccuracyLand = 0xC74 # CFiringModeFloat
    m_flInaccuracyLadder = 0xC7C # CFiringModeFloat
    m_flInaccuracyFire = 0xC84 # CFiringModeFloat
    m_flInaccuracyMove = 0xC8C # CFiringModeFloat
    m_flRecoilAngle = 0xC94 # CFiringModeFloat
    m_flRecoilAngleVariance = 0xC9C # CFiringModeFloat
    m_flRecoilMagnitude = 0xCA4 # CFiringModeFloat
    m_flRecoilMagnitudeVariance = 0xCAC # CFiringModeFloat
    m_nTracerFrequency = 0xCB4 # CFiringModeInt
    m_flInaccuracyJumpInitial = 0xCBC # float
    m_flInaccuracyJumpApex = 0xCC0 # float
    m_flInaccuracyReload = 0xCC4 # float
    m_nRecoilSeed = 0xCC8 # int32_t
    m_nSpreadSeed = 0xCCC # int32_t
    m_flTimeToIdleAfterFire = 0xCD0 # float
    m_flIdleInterval = 0xCD4 # float
    m_flAttackMovespeedFactor = 0xCD8 # float
    m_flHeatPerShot = 0xCDC # float
    m_flInaccuracyPitchShift = 0xCE0 # float
    m_flInaccuracyAltSoundThreshold = 0xCE4 # float
    m_flBotAudibleRange = 0xCE8 # float
    m_szUseRadioSubtitle = 0xCF0 # CUtlString
    m_bUnzoomsAfterShot = 0xCF8 # bool
    m_bHideViewModelWhenZoomed = 0xCF9 # bool
    m_nZoomLevels = 0xCFC # int32_t
    m_nZoomFOV1 = 0xD00 # int32_t
    m_nZoomFOV2 = 0xD04 # int32_t
    m_flZoomTime0 = 0xD08 # float
    m_flZoomTime1 = 0xD0C # float
    m_flZoomTime2 = 0xD10 # float
    m_flIronSightPullUpSpeed = 0xD14 # float
    m_flIronSightPutDownSpeed = 0xD18 # float
    m_flIronSightFOV = 0xD1C # float
    m_flIronSightPivotForward = 0xD20 # float
    m_flIronSightLooseness = 0xD24 # float
    m_angPivotAngle = 0xD28 # QAngle
    m_vecIronSightEyePos = 0xD34 # Vector
    m_nDamage = 0xD40 # int32_t
    m_flHeadshotMultiplier = 0xD44 # float
    m_flArmorRatio = 0xD48 # float
    m_flPenetration = 0xD4C # float
    m_flRange = 0xD50 # float
    m_flRangeModifier = 0xD54 # float
    m_flFlinchVelocityModifierLarge = 0xD58 # float
    m_flFlinchVelocityModifierSmall = 0xD5C # float
    m_flRecoveryTimeCrouch = 0xD60 # float
    m_flRecoveryTimeStand = 0xD64 # float
    m_flRecoveryTimeCrouchFinal = 0xD68 # float
    m_flRecoveryTimeStandFinal = 0xD6C # float
    m_nRecoveryTransitionStartBullet = 0xD70 # int32_t
    m_nRecoveryTransitionEndBullet = 0xD74 # int32_t
    m_flThrowVelocity = 0xD78 # float
    m_vSmokeColor = 0xD7C # Vector
    m_szAnimClass = 0xD88 # CGlobalSymbol

class CCSWeaponBaseVDataAPI:

class CClientAlphaProperty: # IClientAlphaProperty
    m_nRenderFX = 0x10 # uint8_t
    m_nRenderMode = 0x11 # uint8_t
    m_bAlphaOverride = 0x0 # bitfield:1
    m_bShadowAlphaOverride = 0x0 # bitfield:1
    m_nReserved = 0x0 # bitfield:6
    m_nAlpha = 0x13 # uint8_t
    m_nDesyncOffset = 0x14 # uint16_t
    m_nReserved2 = 0x16 # uint16_t
    m_nDistFadeStart = 0x18 # uint16_t
    m_nDistFadeEnd = 0x1A # uint16_t
    m_flFadeScale = 0x1C # float
    m_flRenderFxStartTime = 0x20 # GameTime_t
    m_flRenderFxDuration = 0x24 # float

class CClientPointEntityAPI:

class CClientScriptEntity: # C_BaseEntity

class CCollisionProperty:
    m_collisionAttribute = 0x10 # VPhysicsCollisionAttribute_t
    m_vecMins = 0x40 # Vector
    m_vecMaxs = 0x4C # Vector
    m_usSolidFlags = 0x5A # uint8_t
    m_nSolidType = 0x5B # SolidType_t
    m_triggerBloat = 0x5C # uint8_t
    m_nSurroundType = 0x5D # SurroundingBoundsType_t
    m_CollisionGroup = 0x5E # uint8_t
    m_nEnablePhysics = 0x5F # uint8_t
    m_flBoundingRadius = 0x60 # float
    m_vecSpecifiedSurroundingMins = 0x64 # Vector
    m_vecSpecifiedSurroundingMaxs = 0x70 # Vector
    m_vecSurroundingMaxs = 0x7C # Vector
    m_vecSurroundingMins = 0x88 # Vector
    m_vCapsuleCenter1 = 0x94 # Vector
    m_vCapsuleCenter2 = 0xA0 # Vector
    m_flCapsuleRadius = 0xAC # float

class CCompositeMaterialEditorDoc:
    m_nVersion = 0x8 # int32_t
    m_Points = 0x10 # CUtlVector<CompositeMaterialEditorPoint_t>
    m_KVthumbnail = 0x28 # KeyValues3

class CDamageRecord:
    m_PlayerDamager = 0x28 # CHandle<C_CSPlayerPawnBase>
    m_PlayerRecipient = 0x2C # CHandle<C_CSPlayerPawnBase>
    m_hPlayerControllerDamager = 0x30 # CHandle<CCSPlayerController>
    m_hPlayerControllerRecipient = 0x34 # CHandle<CCSPlayerController>
    m_szPlayerDamagerName = 0x38 # CUtlString
    m_szPlayerRecipientName = 0x40 # CUtlString
    m_DamagerXuid = 0x48 # uint64_t
    m_RecipientXuid = 0x50 # uint64_t
    m_iDamage = 0x58 # int32_t
    m_iActualHealthRemoved = 0x5C # int32_t
    m_iNumHits = 0x60 # int32_t
    m_iLastBulletUpdate = 0x64 # int32_t
    m_bIsOtherEnemy = 0x68 # bool
    m_killType = 0x69 # EKillTypes_t

class CDecalInfo:
    m_flAnimationScale = 0x0 # float
    m_flAnimationLifeSpan = 0x4 # float
    m_flPlaceTime = 0x8 # float
    m_flFadeStartTime = 0xC # float
    m_flFadeDuration = 0x10 # float
    m_nVBSlot = 0x14 # int32_t
    m_nBoneIndex = 0x18 # int32_t
    m_vPosition = 0x28 # Vector
    m_flBoundingRadiusSqr = 0x34 # float
    m_pNext = 0x40 # CDecalInfo*
    m_pPrev = 0x48 # CDecalInfo*
    m_nDecalMaterialIndex = 0xA8 # int32_t

class CDynamicPropAPI:

class CEconItemAttribute:
    m_iAttributeDefinitionIndex = 0x30 # uint16_t
    m_flValue = 0x34 # float
    m_flInitialValue = 0x38 # float
    m_nRefundableCurrency = 0x3C # int32_t
    m_bSetBonus = 0x40 # bool

class CEffectData:
    m_vOrigin = 0x8 # Vector
    m_vStart = 0x14 # Vector
    m_vNormal = 0x20 # Vector
    m_vAngles = 0x2C # QAngle
    m_hEntity = 0x38 # CEntityHandle
    m_hOtherEntity = 0x3C # CEntityHandle
    m_flScale = 0x40 # float
    m_flMagnitude = 0x44 # float
    m_flRadius = 0x48 # float
    m_nSurfaceProp = 0x4C # CUtlStringToken
    m_nEffectIndex = 0x50 # CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_nDamageType = 0x58 # uint32_t
    m_nPenetrate = 0x5C # uint8_t
    m_nMaterial = 0x5E # uint16_t
    m_nHitBox = 0x60 # uint16_t
    m_nColor = 0x62 # uint8_t
    m_fFlags = 0x63 # uint8_t
    m_nAttachmentIndex = 0x64 # AttachmentHandle_t
    m_nAttachmentName = 0x68 # CUtlStringToken
    m_iEffectName = 0x6C # uint16_t
    m_nExplosionType = 0x6E # uint8_t

class CEntityComponent:

class CEntityIdentity:
    m_nameStringableIndex = 0x14 # int32_t
    m_name = 0x18 # CUtlSymbolLarge
    m_designerName = 0x20 # CUtlSymbolLarge
    m_flags = 0x30 # uint32_t
    m_worldGroupId = 0x38 # WorldGroupId_t
    m_fDataObjectTypes = 0x3C # uint32_t
    m_PathIndex = 0x40 # ChangeAccessorFieldPathIndex_t
    m_pPrev = 0x58 # CEntityIdentity*
    m_pNext = 0x60 # CEntityIdentity*
    m_pPrevByClass = 0x68 # CEntityIdentity*
    m_pNextByClass = 0x70 # CEntityIdentity*

class CEntityInstance:
    m_iszPrivateVScripts = 0x8 # CUtlSymbolLarge
    m_pEntity = 0x10 # CEntityIdentity*
    m_CScriptComponent = 0x28 # CScriptComponent*
    m_bVisibleinPVS = 0x30 # bool

class CFireOverlay: # CGlowOverlay
    m_pOwner = 0xD0 # C_FireSmoke*
    m_vBaseColors = 0xD8 # Vector[4]
    m_flScale = 0x108 # float
    m_nGUID = 0x10C # int32_t

class CFlashlightEffect:
    m_bIsOn = 0x10 # bool
    m_bMuzzleFlashEnabled = 0x20 # bool
    m_flMuzzleFlashBrightness = 0x24 # float
    m_quatMuzzleFlashOrientation = 0x30 # Quaternion
    m_vecMuzzleFlashOrigin = 0x40 # Vector
    m_flFov = 0x4C # float
    m_flFarZ = 0x50 # float
    m_flLinearAtten = 0x54 # float
    m_bCastsShadows = 0x58 # bool
    m_flCurrentPullBackDist = 0x5C # float
    m_FlashlightTexture = 0x60 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_MuzzleFlashTexture = 0x68 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_textureName = 0x70 # char[64]

class CFuncWater: # C_BaseModelEntity
    m_BuoyancyHelper = 0xCD0 # CBuoyancyHelper

class CGameSceneNode:
    m_nodeToWorld = 0x10 # CTransform
    m_pOwner = 0x30 # CEntityInstance*
    m_pParent = 0x38 # CGameSceneNode*
    m_pChild = 0x40 # CGameSceneNode*
    m_pNextSibling = 0x48 # CGameSceneNode*
    m_hParent = 0x70 # CGameSceneNodeHandle
    m_vecOrigin = 0x80 # CNetworkOriginCellCoordQuantizedVector
    m_angRotation = 0xB8 # QAngle
    m_flScale = 0xC4 # float
    m_vecAbsOrigin = 0xC8 # Vector
    m_angAbsRotation = 0xD4 # QAngle
    m_flAbsScale = 0xE0 # float
    m_nParentAttachmentOrBone = 0xE4 # int16_t
    m_bDebugAbsOriginChanges = 0xE6 # bool
    m_bDormant = 0xE7 # bool
    m_bForceParentToBeNetworked = 0xE8 # bool
    m_bDirtyHierarchy = 0x0 # bitfield:1
    m_bDirtyBoneMergeInfo = 0x0 # bitfield:1
    m_bNetworkedPositionChanged = 0x0 # bitfield:1
    m_bNetworkedAnglesChanged = 0x0 # bitfield:1
    m_bNetworkedScaleChanged = 0x0 # bitfield:1
    m_bWillBeCallingPostDataUpdate = 0x0 # bitfield:1
    m_bBoneMergeFlex = 0x0 # bitfield:1
    m_nLatchAbsOrigin = 0x0 # bitfield:2
    m_bDirtyBoneMergeBoneToRoot = 0x0 # bitfield:1
    m_nHierarchicalDepth = 0xEB # uint8_t
    m_nHierarchyType = 0xEC # uint8_t
    m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xED # uint8_t
    m_name = 0xF0 # CUtlStringToken
    m_hierarchyAttachName = 0x130 # CUtlStringToken
    m_flZOffset = 0x134 # float
    m_vRenderOrigin = 0x138 # Vector

class CGameSceneNodeHandle:
    m_hOwner = 0x8 # CEntityHandle
    m_name = 0xC # CUtlStringToken

class CGlobalLightBase:
    m_bSpotLight = 0x10 # bool
    m_SpotLightOrigin = 0x14 # Vector
    m_SpotLightAngles = 0x20 # QAngle
    m_ShadowDirection = 0x2C # Vector
    m_AmbientDirection = 0x38 # Vector
    m_SpecularDirection = 0x44 # Vector
    m_InspectorSpecularDirection = 0x50 # Vector
    m_flSpecularPower = 0x5C # float
    m_flSpecularIndependence = 0x60 # float
    m_SpecularColor = 0x64 # Color
    m_bStartDisabled = 0x68 # bool
    m_bEnabled = 0x69 # bool
    m_LightColor = 0x6A # Color
    m_AmbientColor1 = 0x6E # Color
    m_AmbientColor2 = 0x72 # Color
    m_AmbientColor3 = 0x76 # Color
    m_flSunDistance = 0x7C # float
    m_flFOV = 0x80 # float
    m_flNearZ = 0x84 # float
    m_flFarZ = 0x88 # float
    m_bEnableShadows = 0x8C # bool
    m_bOldEnableShadows = 0x8D # bool
    m_bBackgroundClearNotRequired = 0x8E # bool
    m_flCloudScale = 0x90 # float
    m_flCloud1Speed = 0x94 # float
    m_flCloud1Direction = 0x98 # float
    m_flCloud2Speed = 0x9C # float
    m_flCloud2Direction = 0xA0 # float
    m_flAmbientScale1 = 0xB0 # float
    m_flAmbientScale2 = 0xB4 # float
    m_flGroundScale = 0xB8 # float
    m_flLightScale = 0xBC # float
    m_flFoWDarkness = 0xC0 # float
    m_bEnableSeparateSkyboxFog = 0xC4 # bool
    m_vFowColor = 0xC8 # Vector
    m_ViewOrigin = 0xD4 # Vector
    m_ViewAngles = 0xE0 # QAngle
    m_flViewFoV = 0xEC # float
    m_WorldPoints = 0xF0 # Vector[8]
    m_vFogOffsetLayer0 = 0x4A8 # Vector2D
    m_vFogOffsetLayer1 = 0x4B0 # Vector2D
    m_hEnvWind = 0x4B8 # CHandle<C_BaseEntity>
    m_hEnvSky = 0x4BC # CHandle<C_BaseEntity>

class CGlowOverlay:
    m_vPos = 0x8 # Vector
    m_bDirectional = 0x14 # bool
    m_vDirection = 0x18 # Vector
    m_bInSky = 0x24 # bool
    m_skyObstructionScale = 0x28 # float
    m_Sprites = 0x30 # CGlowSprite[4]
    m_nSprites = 0xB0 # int32_t
    m_flProxyRadius = 0xB4 # float
    m_flHDRColorScale = 0xB8 # float
    m_flGlowObstructionScale = 0xBC # float
    m_bCacheGlowObstruction = 0xC0 # bool
    m_bCacheSkyObstruction = 0xC1 # bool
    m_bActivated = 0xC2 # int16_t
    m_ListIndex = 0xC4 # uint16_t
    m_queryHandle = 0xC8 # int32_t

class CGlowProperty:
    m_fGlowColor = 0x8 # Vector
    m_iGlowType = 0x30 # int32_t
    m_iGlowTeam = 0x34 # int32_t
    m_nGlowRange = 0x38 # int32_t
    m_nGlowRangeMin = 0x3C # int32_t
    m_glowColorOverride = 0x40 # Color
    m_bFlashing = 0x44 # bool
    m_flGlowTime = 0x48 # float
    m_flGlowStartTime = 0x4C # float
    m_bEligibleForScreenHighlight = 0x50 # bool
    m_bGlowing = 0x51 # bool

class CGlowSprite:
    m_vColor = 0x0 # Vector
    m_flHorzSize = 0xC # float
    m_flVertSize = 0x10 # float
    m_hMaterial = 0x18 # CStrongHandle<InfoForResourceTypeIMaterial2>

class CGrenadeTracer: # C_BaseModelEntity
    m_flTracerDuration = 0xCF0 # float
    m_nType = 0xCF4 # GrenadeType_t

class CHitboxComponent: # CEntityComponent
    m_bvDisabledHitGroups = 0x24 # uint32_t[1]

class CHostageRescueZone: # CHostageRescueZoneShim

class CHostageRescueZoneShim: # C_BaseTrigger

class CInfoDynamicShadowHint: # C_PointEntity
    m_bDisabled = 0x550 # bool
    m_flRange = 0x554 # float
    m_nImportance = 0x558 # int32_t
    m_nLightChoice = 0x55C # int32_t
    m_hLight = 0x560 # CHandle<C_BaseEntity>

class CInfoDynamicShadowHintBox: # CInfoDynamicShadowHint
    m_vBoxMins = 0x568 # Vector
    m_vBoxMaxs = 0x574 # Vector

class CInfoOffscreenPanoramaTexture: # C_PointEntity
    m_bDisabled = 0x550 # bool
    m_nResolutionX = 0x554 # int32_t
    m_nResolutionY = 0x558 # int32_t
    m_szLayoutFileName = 0x560 # CUtlSymbolLarge
    m_RenderAttrName = 0x568 # CUtlSymbolLarge
    m_TargetEntities = 0x570 # C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
    m_nTargetChangeCount = 0x588 # int32_t
    m_vecCSSClasses = 0x590 # C_NetworkUtlVectorBase<CUtlSymbolLarge>
    m_bCheckCSSClasses = 0x708 # bool

class CInfoParticleTarget: # C_PointEntity

class CInfoTarget: # C_PointEntity

class CInfoWorldLayer: # C_BaseEntity
    m_pOutputOnEntitiesSpawned = 0x550 # CEntityIOOutput
    m_worldName = 0x578 # CUtlSymbolLarge
    m_layerName = 0x580 # CUtlSymbolLarge
    m_bWorldLayerVisible = 0x588 # bool
    m_bEntitiesSpawned = 0x589 # bool
    m_bCreateAsChildSpawnGroup = 0x58A # bool
    m_hLayerSpawnGroup = 0x58C # uint32_t
    m_bWorldLayerActuallyVisible = 0x590 # bool

class CInterpolatedValue:
    m_flStartTime = 0x0 # float
    m_flEndTime = 0x4 # float
    m_flStartValue = 0x8 # float
    m_flEndValue = 0xC # float
    m_nInterpType = 0x10 # int32_t

class CLightComponent: # CEntityComponent
    __m_pChainEntity = 0x48 # CNetworkVarChainer
    m_Color = 0x85 # Color
    m_SecondaryColor = 0x89 # Color
    m_flBrightness = 0x90 # float
    m_flBrightnessScale = 0x94 # float
    m_flBrightnessMult = 0x98 # float
    m_flRange = 0x9C # float
    m_flFalloff = 0xA0 # float
    m_flAttenuation0 = 0xA4 # float
    m_flAttenuation1 = 0xA8 # float
    m_flAttenuation2 = 0xAC # float
    m_flTheta = 0xB0 # float
    m_flPhi = 0xB4 # float
    m_hLightCookie = 0xB8 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_nCascades = 0xC0 # int32_t
    m_nCastShadows = 0xC4 # int32_t
    m_nShadowWidth = 0xC8 # int32_t
    m_nShadowHeight = 0xCC # int32_t
    m_bRenderDiffuse = 0xD0 # bool
    m_nRenderSpecular = 0xD4 # int32_t
    m_bRenderTransmissive = 0xD8 # bool
    m_flOrthoLightWidth = 0xDC # float
    m_flOrthoLightHeight = 0xE0 # float
    m_nStyle = 0xE4 # int32_t
    m_Pattern = 0xE8 # CUtlString
    m_nCascadeRenderStaticObjects = 0xF0 # int32_t
    m_flShadowCascadeCrossFade = 0xF4 # float
    m_flShadowCascadeDistanceFade = 0xF8 # float
    m_flShadowCascadeDistance0 = 0xFC # float
    m_flShadowCascadeDistance1 = 0x100 # float
    m_flShadowCascadeDistance2 = 0x104 # float
    m_flShadowCascadeDistance3 = 0x108 # float
    m_nShadowCascadeResolution0 = 0x10C # int32_t
    m_nShadowCascadeResolution1 = 0x110 # int32_t
    m_nShadowCascadeResolution2 = 0x114 # int32_t
    m_nShadowCascadeResolution3 = 0x118 # int32_t
    m_bUsesBakedShadowing = 0x11C # bool
    m_nShadowPriority = 0x120 # int32_t
    m_nBakedShadowIndex = 0x124 # int32_t
    m_bRenderToCubemaps = 0x128 # bool
    m_nDirectLight = 0x12C # int32_t
    m_nIndirectLight = 0x130 # int32_t
    m_flFadeMinDist = 0x134 # float
    m_flFadeMaxDist = 0x138 # float
    m_flShadowFadeMinDist = 0x13C # float
    m_flShadowFadeMaxDist = 0x140 # float
    m_bEnabled = 0x144 # bool
    m_bFlicker = 0x145 # bool
    m_bPrecomputedFieldsValid = 0x146 # bool
    m_vPrecomputedBoundsMins = 0x148 # Vector
    m_vPrecomputedBoundsMaxs = 0x154 # Vector
    m_vPrecomputedOBBOrigin = 0x160 # Vector
    m_vPrecomputedOBBAngles = 0x16C # QAngle
    m_vPrecomputedOBBExtent = 0x178 # Vector
    m_flPrecomputedMaxRange = 0x184 # float
    m_nFogLightingMode = 0x188 # int32_t
    m_flFogContributionStength = 0x18C # float
    m_flNearClipPlane = 0x190 # float
    m_SkyColor = 0x194 # Color
    m_flSkyIntensity = 0x198 # float
    m_SkyAmbientBounce = 0x19C # Color
    m_bUseSecondaryColor = 0x1A0 # bool
    m_bMixedShadows = 0x1A1 # bool
    m_flLightStyleStartTime = 0x1A4 # GameTime_t
    m_flCapsuleLength = 0x1A8 # float
    m_flMinRoughness = 0x1AC # float

class CLogicRelay: # CLogicalEntity
    m_OnTrigger = 0x550 # CEntityIOOutput
    m_OnSpawn = 0x578 # CEntityIOOutput
    m_bDisabled = 0x5A0 # bool
    m_bWaitForRefire = 0x5A1 # bool
    m_bTriggerOnce = 0x5A2 # bool
    m_bFastRetrigger = 0x5A3 # bool
    m_bPassthoughCaller = 0x5A4 # bool

class CLogicalEntity: # C_BaseEntity

class CModelState:
    m_hModel = 0xA0 # CStrongHandle<InfoForResourceTypeCModel>
    m_ModelName = 0xA8 # CUtlSymbolLarge
    m_bClientClothCreationSuppressed = 0xE8 # bool
    m_MeshGroupMask = 0x180 # uint64_t
    m_nIdealMotionType = 0x202 # int8_t
    m_nForceLOD = 0x203 # int8_t
    m_nClothUpdateFlags = 0x204 # int8_t

class CNetworkedSequenceOperation:
    m_hSequence = 0x8 # HSequence
    m_flPrevCycle = 0xC # float
    m_flCycle = 0x10 # float
    m_flWeight = 0x14 # CNetworkedQuantizedFloat
    m_bSequenceChangeNetworked = 0x1C # bool
    m_bDiscontinuity = 0x1D # bool
    m_flPrevCycleFromDiscontinuity = 0x20 # float
    m_flPrevCycleForAnimEventDetection = 0x24 # float

class CPlayerSprayDecalRenderHelper:

class CPlayer_AutoaimServices: # CPlayerPawnComponent

class CPlayer_CameraServices: # CPlayerPawnComponent
    m_vecCsViewPunchAngle = 0x40 # QAngle
    m_nCsViewPunchAngleTick = 0x4C # GameTick_t
    m_flCsViewPunchAngleTickRatio = 0x50 # float
    m_PlayerFog = 0x58 # C_fogplayerparams_t
    m_hColorCorrectionCtrl = 0x98 # CHandle<C_ColorCorrection>
    m_hViewEntity = 0x9C # CHandle<C_BaseEntity>
    m_hTonemapController = 0xA0 # CHandle<C_TonemapController2>
    m_audio = 0xA8 # audioparams_t
    m_PostProcessingVolumes = 0x120 # C_NetworkUtlVectorBase<CHandle<C_PostProcessingVolume>>
    m_flOldPlayerZ = 0x138 # float
    m_flOldPlayerViewOffsetZ = 0x13C # float
    m_CurrentFog = 0x140 # fogparams_t
    m_hOldFogController = 0x1A8 # CHandle<C_FogController>
    m_bOverrideFogColor = 0x1AC # bool[5]
    m_OverrideFogColor = 0x1B1 # Color[5]
    m_bOverrideFogStartEnd = 0x1C5 # bool[5]
    m_fOverrideFogStart = 0x1CC # float[5]
    m_fOverrideFogEnd = 0x1E0 # float[5]
    m_hActivePostProcessingVolume = 0x1F4 # CHandle<C_PostProcessingVolume>
    m_angDemoViewAngles = 0x1F8 # QAngle

class CPlayer_FlashlightServices: # CPlayerPawnComponent

class CPlayer_ItemServices: # CPlayerPawnComponent

class CPlayer_MovementServices: # CPlayerPawnComponent
    m_nImpulse = 0x40 # int32_t
    m_nButtons = 0x48 # CInButtonState
    m_nQueuedButtonDownMask = 0x68 # uint64_t
    m_nQueuedButtonChangeMask = 0x70 # uint64_t
    m_nButtonDoublePressed = 0x78 # uint64_t
    m_pButtonPressedCmdNumber = 0x80 # uint32_t[64]
    m_nLastCommandNumberProcessed = 0x180 # uint32_t
    m_nToggleButtonDownMask = 0x188 # uint64_t
    m_flMaxspeed = 0x198 # float
    m_arrForceSubtickMoveWhen = 0x19C # float[4]
    m_flForwardMove = 0x1AC # float
    m_flLeftMove = 0x1B0 # float
    m_flUpMove = 0x1B4 # float
    m_vecLastMovementImpulses = 0x1B8 # Vector
    m_vecOldViewAngles = 0x1C4 # QAngle

class CPlayer_MovementServices_Humanoid: # CPlayer_MovementServices
    m_flStepSoundTime = 0x1D8 # float
    m_flFallVelocity = 0x1DC # float
    m_bInCrouch = 0x1E0 # bool
    m_nCrouchState = 0x1E4 # uint32_t
    m_flCrouchTransitionStartTime = 0x1E8 # GameTime_t
    m_bDucked = 0x1EC # bool
    m_bDucking = 0x1ED # bool
    m_bInDuckJump = 0x1EE # bool
    m_groundNormal = 0x1F0 # Vector
    m_flSurfaceFriction = 0x1FC # float
    m_surfaceProps = 0x200 # CUtlStringToken
    m_nStepside = 0x210 # int32_t

class CPlayer_ObserverServices: # CPlayerPawnComponent
    m_iObserverMode = 0x40 # uint8_t
    m_hObserverTarget = 0x44 # CHandle<C_BaseEntity>
    m_iObserverLastMode = 0x48 # ObserverMode_t
    m_bForcedObserverMode = 0x4C # bool
    m_flObserverChaseDistance = 0x50 # float
    m_flObserverChaseDistanceCalcTime = 0x54 # GameTime_t

class CPlayer_UseServices: # CPlayerPawnComponent

class CPlayer_ViewModelServices: # CPlayerPawnComponent

class CPlayer_WaterServices: # CPlayerPawnComponent

class CPlayer_WeaponServices: # CPlayerPawnComponent
    m_hMyWeapons = 0x40 # C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
    m_hActiveWeapon = 0x58 # CHandle<C_BasePlayerWeapon>
    m_hLastWeapon = 0x5C # CHandle<C_BasePlayerWeapon>
    m_iAmmo = 0x60 # uint16_t[32]

class CPointOffScreenIndicatorUi: # C_PointClientUIWorldPanel
    m_bBeenEnabled = 0xF30 # bool
    m_bHide = 0xF31 # bool
    m_flSeenTargetTime = 0xF34 # float
    m_pTargetPanel = 0xF38 # C_PointClientUIWorldPanel*

class CPointTemplate: # CLogicalEntity
    m_iszWorldName = 0x550 # CUtlSymbolLarge
    m_iszSource2EntityLumpName = 0x558 # CUtlSymbolLarge
    m_iszEntityFilterName = 0x560 # CUtlSymbolLarge
    m_flTimeoutInterval = 0x568 # float
    m_bAsynchronouslySpawnEntities = 0x56C # bool
    m_pOutputOnSpawned = 0x570 # CEntityIOOutput
    m_clientOnlyEntityBehavior = 0x598 # PointTemplateClientOnlyEntityBehavior_t
    m_ownerSpawnGroupType = 0x59C # PointTemplateOwnerSpawnGroupType_t
    m_createdSpawnGroupHandles = 0x5A0 # CUtlVector<uint32_t>
    m_SpawnedEntityHandles = 0x5B8 # CUtlVector<CEntityHandle>
    m_ScriptSpawnCallback = 0x5D0 # HSCRIPT
    m_ScriptCallbackScope = 0x5D8 # HSCRIPT

class CPrecipitationVData: # CEntitySubclassVDataBase
    m_szParticlePrecipitationEffect = 0x28 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    m_flInnerDistance = 0x108 # float
    m_nAttachType = 0x10C # ParticleAttachment_t
    m_bBatchSameVolumeType = 0x110 # bool
    m_nRTEnvCP = 0x114 # int32_t
    m_nRTEnvCPComponent = 0x118 # int32_t
    m_szModifier = 0x120 # CUtlString

class CProjectedTextureBase:
    m_hTargetEntity = 0xC # CHandle<C_BaseEntity>
    m_bState = 0x10 # bool
    m_bAlwaysUpdate = 0x11 # bool
    m_flLightFOV = 0x14 # float
    m_bEnableShadows = 0x18 # bool
    m_bSimpleProjection = 0x19 # bool
    m_bLightOnlyTarget = 0x1A # bool
    m_bLightWorld = 0x1B # bool
    m_bCameraSpace = 0x1C # bool
    m_flBrightnessScale = 0x20 # float
    m_LightColor = 0x24 # Color
    m_flIntensity = 0x28 # float
    m_flLinearAttenuation = 0x2C # float
    m_flQuadraticAttenuation = 0x30 # float
    m_bVolumetric = 0x34 # bool
    m_flVolumetricIntensity = 0x38 # float
    m_flNoiseStrength = 0x3C # float
    m_flFlashlightTime = 0x40 # float
    m_nNumPlanes = 0x44 # uint32_t
    m_flPlaneOffset = 0x48 # float
    m_flColorTransitionTime = 0x4C # float
    m_flAmbient = 0x50 # float
    m_SpotlightTextureName = 0x54 # char[512]
    m_nSpotlightTextureFrame = 0x254 # int32_t
    m_nShadowQuality = 0x258 # uint32_t
    m_flNearZ = 0x25C # float
    m_flFarZ = 0x260 # float
    m_flProjectionSize = 0x264 # float
    m_flRotation = 0x268 # float
    m_bFlipHorizontal = 0x26C # bool

class CPulseGraphInstance_ClientEntity: # CBasePulseGraphInstance
    m_pParent = 0xD8 # CClientScriptEntity*

class CRenderComponent: # CEntityComponent
    __m_pChainEntity = 0x10 # CNetworkVarChainer
    m_bIsRenderingWithViewModels = 0x50 # bool
    m_nSplitscreenFlags = 0x54 # uint32_t
    m_bEnableRendering = 0x60 # bool
    m_bInterpolationReadyToDraw = 0xB0 # bool

class CSMatchStats_t: # CSPerRoundStats_t
    m_iEnemy5Ks = 0x68 # int32_t
    m_iEnemy4Ks = 0x6C # int32_t
    m_iEnemy3Ks = 0x70 # int32_t
    m_iEnemyKnifeKills = 0x74 # int32_t
    m_iEnemyTaserKills = 0x78 # int32_t

class CSPerRoundStats_t:
    m_iKills = 0x30 # int32_t
    m_iDeaths = 0x34 # int32_t
    m_iAssists = 0x38 # int32_t
    m_iDamage = 0x3C # int32_t
    m_iEquipmentValue = 0x40 # int32_t
    m_iMoneySaved = 0x44 # int32_t
    m_iKillReward = 0x48 # int32_t
    m_iLiveTime = 0x4C # int32_t
    m_iHeadShotKills = 0x50 # int32_t
    m_iObjective = 0x54 # int32_t
    m_iCashEarned = 0x58 # int32_t
    m_iUtilityDamage = 0x5C # int32_t
    m_iEnemiesFlashed = 0x60 # int32_t

class CScriptComponent: # CEntityComponent
    m_scriptClassName = 0x30 # CUtlSymbolLarge

class CServerOnlyModelEntity: # C_BaseModelEntity

class CSkeletonInstance: # CGameSceneNode
    m_modelState = 0x160 # CModelState
    m_bIsAnimationEnabled = 0x370 # bool
    m_bUseParentRenderBounds = 0x371 # bool
    m_bDisableSolidCollisionsForHierarchy = 0x372 # bool
    m_bDirtyMotionType = 0x0 # bitfield:1
    m_bIsGeneratingLatchedParentSpaceState = 0x0 # bitfield:1
    m_materialGroup = 0x374 # CUtlStringToken
    m_nHitboxSet = 0x378 # uint8_t

class CSkyboxReference: # C_BaseEntity
    m_worldGroupId = 0x550 # WorldGroupId_t
    m_hSkyCamera = 0x554 # CHandle<C_SkyCamera>

class CTablet: # C_CSWeaponBase

class CTakeDamageInfoAPI:

class CTimeline: # IntervalTimer
    m_flValues = 0x10 # float[64]
    m_nValueCounts = 0x110 # int32_t[64]
    m_nBucketCount = 0x210 # int32_t
    m_flInterval = 0x214 # float
    m_flFinalValue = 0x218 # float
    m_nCompressionType = 0x21C # TimelineCompression_t
    m_bStopped = 0x220 # bool

class CTripWireFire: # C_BaseCSGrenade

class CTripWireFireProjectile: # C_BaseGrenade

class CWaterSplasher: # C_BaseModelEntity

class CWeaponZoneRepulsor: # C_CSWeaponBaseGun

class C_AK47: # C_CSWeaponBaseGun

class C_AttributeContainer: # CAttributeManager
    m_Item = 0x50 # C_EconItemView
    m_iExternalItemProviderRegisteredToken = 0x498 # int32_t
    m_ullRegisteredAsItemID = 0x4A0 # uint64_t

class C_BarnLight: # C_BaseModelEntity
    m_bEnabled = 0xCD0 # bool
    m_nColorMode = 0xCD4 # int32_t
    m_Color = 0xCD8 # Color
    m_flColorTemperature = 0xCDC # float
    m_flBrightness = 0xCE0 # float
    m_flBrightnessScale = 0xCE4 # float
    m_nDirectLight = 0xCE8 # int32_t
    m_nBakedShadowIndex = 0xCEC # int32_t
    m_nLuminaireShape = 0xCF0 # int32_t
    m_flLuminaireSize = 0xCF4 # float
    m_flLuminaireAnisotropy = 0xCF8 # float
    m_LightStyleString = 0xD00 # CUtlString
    m_flLightStyleStartTime = 0xD08 # GameTime_t
    m_QueuedLightStyleStrings = 0xD10 # C_NetworkUtlVectorBase<CUtlString>
    m_LightStyleEvents = 0xD28 # C_NetworkUtlVectorBase<CUtlString>
    m_LightStyleTargets = 0xD40 # C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
    m_StyleEvent = 0xD58 # CEntityIOOutput[4]
    m_hLightCookie = 0xDF8 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_flShape = 0xE00 # float
    m_flSoftX = 0xE04 # float
    m_flSoftY = 0xE08 # float
    m_flSkirt = 0xE0C # float
    m_flSkirtNear = 0xE10 # float
    m_vSizeParams = 0xE14 # Vector
    m_flRange = 0xE20 # float
    m_vShear = 0xE24 # Vector
    m_nBakeSpecularToCubemaps = 0xE30 # int32_t
    m_vBakeSpecularToCubemapsSize = 0xE34 # Vector
    m_nCastShadows = 0xE40 # int32_t
    m_nShadowMapSize = 0xE44 # int32_t
    m_nShadowPriority = 0xE48 # int32_t
    m_bContactShadow = 0xE4C # bool
    m_nBounceLight = 0xE50 # int32_t
    m_flBounceScale = 0xE54 # float
    m_flMinRoughness = 0xE58 # float
    m_vAlternateColor = 0xE5C # Vector
    m_fAlternateColorBrightness = 0xE68 # float
    m_nFog = 0xE6C # int32_t
    m_flFogStrength = 0xE70 # float
    m_nFogShadows = 0xE74 # int32_t
    m_flFogScale = 0xE78 # float
    m_flFadeSizeStart = 0xE7C # float
    m_flFadeSizeEnd = 0xE80 # float
    m_flShadowFadeSizeStart = 0xE84 # float
    m_flShadowFadeSizeEnd = 0xE88 # float
    m_bPrecomputedFieldsValid = 0xE8C # bool
    m_vPrecomputedBoundsMins = 0xE90 # Vector
    m_vPrecomputedBoundsMaxs = 0xE9C # Vector
    m_vPrecomputedOBBOrigin = 0xEA8 # Vector
    m_vPrecomputedOBBAngles = 0xEB4 # QAngle
    m_vPrecomputedOBBExtent = 0xEC0 # Vector

class C_BaseButton: # C_BaseToggle
    m_glowEntity = 0xCD0 # CHandle<C_BaseModelEntity>
    m_usable = 0xCD4 # bool
    m_szDisplayText = 0xCD8 # CUtlSymbolLarge

class C_BaseCSGrenade: # C_CSWeaponBase
    m_bClientPredictDelete = 0x1A70 # bool
    m_bRedraw = 0x1A71 # bool
    m_bIsHeldByPlayer = 0x1A72 # bool
    m_bPinPulled = 0x1A73 # bool
    m_bJumpThrow = 0x1A74 # bool
    m_bThrowAnimating = 0x1A75 # bool
    m_fThrowTime = 0x1A78 # GameTime_t
    m_flThrowStrength = 0x1A7C # float
    m_flThrowStrengthApproach = 0x1A80 # float
    m_fDropTime = 0x1A84 # GameTime_t
    m_bJustPulledPin = 0x1A88 # bool
    m_nNextHoldTick = 0x1A8C # GameTick_t
    m_flNextHoldFrac = 0x1A90 # float
    m_hSwitchToWeaponAfterThrow = 0x1A94 # CHandle<C_CSWeaponBase>

class C_BaseCSGrenadeProjectile: # C_BaseGrenade
    m_vInitialPosition = 0x10C0 # Vector
    m_vInitialVelocity = 0x10CC # Vector
    m_nBounces = 0x10D8 # int32_t
    m_nExplodeEffectIndex = 0x10E0 # CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_nExplodeEffectTickBegin = 0x10E8 # int32_t
    m_vecExplodeEffectOrigin = 0x10EC # Vector
    m_flSpawnTime = 0x10F8 # GameTime_t
    vecLastTrailLinePos = 0x10FC # Vector
    flNextTrailLineTime = 0x1108 # GameTime_t
    m_bExplodeEffectBegan = 0x110C # bool
    m_bCanCreateGrenadeTrail = 0x110D # bool
    m_nSnapshotTrajectoryEffectIndex = 0x1110 # ParticleIndex_t
    m_hSnapshotTrajectoryParticleSnapshot = 0x1118 # CStrongHandle<InfoForResourceTypeIParticleSnapshot>
    m_arrTrajectoryTrailPoints = 0x1120 # CUtlVector<Vector>
    m_arrTrajectoryTrailPointCreationTimes = 0x1138 # CUtlVector<float>
    m_flTrajectoryTrailEffectCreationTime = 0x1150 # float

class C_BaseClientUIEntity: # C_BaseModelEntity
    m_bEnabled = 0xCD8 # bool
    m_DialogXMLName = 0xCE0 # CUtlSymbolLarge
    m_PanelClassName = 0xCE8 # CUtlSymbolLarge
    m_PanelID = 0xCF0 # CUtlSymbolLarge

class C_BaseCombatCharacter: # C_BaseFlex
    m_hMyWearables = 0x1070 # C_NetworkUtlVectorBase<CHandle<C_EconWearable>>
    m_bloodColor = 0x1088 # int32_t
    m_leftFootAttachment = 0x108C # AttachmentHandle_t
    m_rightFootAttachment = 0x108D # AttachmentHandle_t
    m_nWaterWakeMode = 0x1090 # C_BaseCombatCharacter::WaterWakeMode_t
    m_flWaterWorldZ = 0x1094 # float
    m_flWaterNextTraceTime = 0x1098 # float
    m_flFieldOfView = 0x109C # float

class C_BaseDoor: # C_BaseToggle
    m_bIsUsable = 0xCD0 # bool

class C_BaseEntity: # CEntityInstance
    m_CBodyComponent = 0x38 # CBodyComponent*
    m_NetworkTransmitComponent = 0x40 # CNetworkTransmitComponent
    m_nLastThinkTick = 0x310 # GameTick_t
    m_pGameSceneNode = 0x318 # CGameSceneNode*
    m_pRenderComponent = 0x320 # CRenderComponent*
    m_pCollision = 0x328 # CCollisionProperty*
    m_iMaxHealth = 0x330 # int32_t
    m_iHealth = 0x334 # int32_t
    m_lifeState = 0x338 # uint8_t
    m_bTakesDamage = 0x339 # bool
    m_nTakeDamageFlags = 0x33C # TakeDamageFlags_t
    m_bIsPlatform = 0x340 # bool
    m_ubInterpolationFrame = 0x341 # uint8_t
    m_hSceneObjectController = 0x344 # CHandle<C_BaseEntity>
    m_nNoInterpolationTick = 0x348 # int32_t
    m_nVisibilityNoInterpolationTick = 0x34C # int32_t
    m_flProxyRandomValue = 0x350 # float
    m_iEFlags = 0x354 # int32_t
    m_nWaterType = 0x358 # uint8_t
    m_bInterpolateEvenWithNoModel = 0x359 # bool
    m_bPredictionEligible = 0x35A # bool
    m_bApplyLayerMatchIDToModel = 0x35B # bool
    m_tokLayerMatchID = 0x35C # CUtlStringToken
    m_nSubclassID = 0x360 # CUtlStringToken
    m_nSimulationTick = 0x370 # int32_t
    m_iCurrentThinkContext = 0x374 # int32_t
    m_aThinkFunctions = 0x378 # CUtlVector<thinkfunc_t>
    m_nDisableContextThinkStartTick = 0x390 # GameTick_t
    m_flAnimTime = 0x394 # float
    m_flSimulationTime = 0x398 # float
    m_nSceneObjectOverrideFlags = 0x39C # uint8_t
    m_bHasSuccessfullyInterpolated = 0x39D # bool
    m_bHasAddedVarsToInterpolation = 0x39E # bool
    m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x39F # bool
    m_nInterpolationLatchDirtyFlags = 0x3A0 # int32_t[2]
    m_ListEntry = 0x3A8 # uint16_t[11]
    m_flCreateTime = 0x3C0 # GameTime_t
    m_flSpeed = 0x3C4 # float
    m_EntClientFlags = 0x3C8 # uint16_t
    m_bClientSideRagdoll = 0x3CA # bool
    m_iTeamNum = 0x3CB # uint8_t
    m_spawnflags = 0x3CC # uint32_t
    m_nNextThinkTick = 0x3D0 # GameTick_t
    m_fFlags = 0x3D4 # uint32_t
    m_vecAbsVelocity = 0x3D8 # Vector
    m_vecVelocity = 0x3E8 # CNetworkVelocityVector
    m_vecBaseVelocity = 0x418 # Vector
    m_hEffectEntity = 0x424 # CHandle<C_BaseEntity>
    m_hOwnerEntity = 0x428 # CHandle<C_BaseEntity>
    m_MoveCollide = 0x42C # MoveCollide_t
    m_MoveType = 0x42D # MoveType_t
    m_nActualMoveType = 0x42E # MoveType_t
    m_flWaterLevel = 0x430 # float
    m_fEffects = 0x434 # uint32_t
    m_hGroundEntity = 0x438 # CHandle<C_BaseEntity>
    m_flFriction = 0x43C # float
    m_flElasticity = 0x440 # float
    m_flGravityScale = 0x444 # float
    m_flTimeScale = 0x448 # float
    m_bAnimatedEveryTick = 0x44C # bool
    m_flNavIgnoreUntilTime = 0x450 # GameTime_t
    m_hThink = 0x454 # uint16_t
    m_fBBoxVisFlags = 0x460 # uint8_t
    m_bPredictable = 0x461 # bool
    m_bRenderWithViewModels = 0x462 # bool
    m_nSplitUserPlayerPredictionSlot = 0x464 # CSplitScreenSlot
    m_nFirstPredictableCommand = 0x468 # int32_t
    m_nLastPredictableCommand = 0x46C # int32_t
    m_hOldMoveParent = 0x470 # CHandle<C_BaseEntity>
    m_Particles = 0x478 # CParticleProperty
    m_vecPredictedScriptFloats = 0x4A0 # CUtlVector<float>
    m_vecPredictedScriptFloatIDs = 0x4B8 # CUtlVector<int32_t>
    m_nNextScriptVarRecordID = 0x4E8 # int32_t
    m_vecAngVelocity = 0x4F8 # QAngle
    m_DataChangeEventRef = 0x504 # int32_t
    m_dependencies = 0x508 # CUtlVector<CEntityHandle>
    m_nCreationTick = 0x520 # int32_t
    m_bAnimTimeChanged = 0x539 # bool
    m_bSimulationTimeChanged = 0x53A # bool
    m_sUniqueHammerID = 0x548 # CUtlString

class C_BaseEntityAPI:

class C_BaseFire: # C_BaseEntity
    m_flScale = 0x550 # float
    m_flStartScale = 0x554 # float
    m_flScaleTime = 0x558 # float
    m_nFlags = 0x55C # uint32_t

class C_BaseFlex: # CBaseAnimGraph
    m_flexWeight = 0xEE8 # C_NetworkUtlVectorBase<float>
    m_vLookTargetPosition = 0xF00 # Vector
    m_blinktoggle = 0xF18 # bool
    m_nLastFlexUpdateFrameCount = 0xF78 # int32_t
    m_CachedViewTarget = 0xF7C # Vector
    m_nNextSceneEventId = 0xF88 # uint32_t
    m_iBlink = 0xF8C # int32_t
    m_blinktime = 0xF90 # float
    m_prevblinktoggle = 0xF94 # bool
    m_iJawOpen = 0xF98 # int32_t
    m_flJawOpenAmount = 0xF9C # float
    m_flBlinkAmount = 0xFA0 # float
    m_iMouthAttachment = 0xFA4 # AttachmentHandle_t
    m_iEyeAttachment = 0xFA5 # AttachmentHandle_t
    m_bResetFlexWeightsOnModelChange = 0xFA6 # bool
    m_nEyeOcclusionRendererBone = 0xFC0 # int32_t
    m_mEyeOcclusionRendererCameraToBoneTransform = 0xFC4 # matrix3x4_t
    m_vEyeOcclusionRendererHalfExtent = 0xFF4 # Vector
    m_PhonemeClasses = 0x1010 # C_BaseFlex::Emphasized_Phoneme[3]

class C_BaseFlex_Emphasized_Phoneme:
    m_sClassName = 0x0 # CUtlString
    m_flAmount = 0x18 # float
    m_bRequired = 0x1C # bool
    m_bBasechecked = 0x1D # bool
    m_bValid = 0x1E # bool

class C_BaseGrenade: # C_BaseFlex
    m_bHasWarnedAI = 0x1070 # bool
    m_bIsSmokeGrenade = 0x1071 # bool
    m_bIsLive = 0x1072 # bool
    m_DmgRadius = 0x1074 # float
    m_flDetonateTime = 0x1078 # GameTime_t
    m_flWarnAITime = 0x107C # float
    m_flDamage = 0x1080 # float
    m_iszBounceSound = 0x1088 # CUtlSymbolLarge
    m_ExplosionSound = 0x1090 # CUtlString
    m_hThrower = 0x109C # CHandle<C_CSPlayerPawn>
    m_flNextAttack = 0x10B4 # GameTime_t
    m_hOriginalThrower = 0x10B8 # CHandle<C_CSPlayerPawn>

class C_BaseModelEntity: # C_BaseEntity
    m_CRenderComponent = 0xA20 # CRenderComponent*
    m_CHitboxComponent = 0xA28 # CHitboxComponent
    m_bInitModelEffects = 0xA70 # bool
    m_bIsStaticProp = 0xA71 # bool
    m_nLastAddDecal = 0xA74 # int32_t
    m_nDecalsAdded = 0xA78 # int32_t
    m_iOldHealth = 0xA7C # int32_t
    m_nRenderMode = 0xA80 # RenderMode_t
    m_nRenderFX = 0xA81 # RenderFx_t
    m_bAllowFadeInView = 0xA82 # bool
    m_clrRender = 0xA83 # Color
    m_vecRenderAttributes = 0xA88 # C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
    m_bRenderToCubemaps = 0xAF0 # bool
    m_Collision = 0xAF8 # CCollisionProperty
    m_Glow = 0xBA8 # CGlowProperty
    m_flGlowBackfaceMult = 0xC00 # float
    m_fadeMinDist = 0xC04 # float
    m_fadeMaxDist = 0xC08 # float
    m_flFadeScale = 0xC0C # float
    m_flShadowStrength = 0xC10 # float
    m_nObjectCulling = 0xC14 # uint8_t
    m_nAddDecal = 0xC18 # int32_t
    m_vDecalPosition = 0xC1C # Vector
    m_vDecalForwardAxis = 0xC28 # Vector
    m_flDecalHealBloodRate = 0xC34 # float
    m_flDecalHealHeightRate = 0xC38 # float
    m_ConfigEntitiesToPropagateMaterialDecalsTo = 0xC40 # C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
    m_vecViewOffset = 0xC58 # CNetworkViewOffsetVector
    m_pClientAlphaProperty = 0xC88 # CClientAlphaProperty*
    m_ClientOverrideTint = 0xC90 # Color
    m_bUseClientOverrideTint = 0xC94 # bool

class C_BasePlayerPawn: # C_BaseCombatCharacter
    m_pWeaponServices = 0x1100 # CPlayer_WeaponServices*
    m_pItemServices = 0x1108 # CPlayer_ItemServices*
    m_pAutoaimServices = 0x1110 # CPlayer_AutoaimServices*
    m_pObserverServices = 0x1118 # CPlayer_ObserverServices*
    m_pWaterServices = 0x1120 # CPlayer_WaterServices*
    m_pUseServices = 0x1128 # CPlayer_UseServices*
    m_pFlashlightServices = 0x1130 # CPlayer_FlashlightServices*
    m_pCameraServices = 0x1138 # CPlayer_CameraServices*
    m_pMovementServices = 0x1140 # CPlayer_MovementServices*
    m_ServerViewAngleChanges = 0x1150 # C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
    m_nHighestConsumedServerViewAngleChangeIndex = 0x11A0 # uint32_t
    v_angle = 0x11A4 # QAngle
    v_anglePrevious = 0x11B0 # QAngle
    m_iHideHUD = 0x11BC # uint32_t
    m_skybox3d = 0x11C0 # sky3dparams_t
    m_flDeathTime = 0x1250 # GameTime_t
    m_vecPredictionError = 0x1254 # Vector
    m_flPredictionErrorTime = 0x1260 # GameTime_t
    m_vecLastCameraSetupLocalOrigin = 0x1264 # Vector
    m_flLastCameraSetupTime = 0x1270 # GameTime_t
    m_flFOVSensitivityAdjust = 0x1274 # float
    m_flMouseSensitivity = 0x1278 # float
    m_vOldOrigin = 0x127C # Vector
    m_flOldSimulationTime = 0x1288 # float
    m_nLastExecutedCommandNumber = 0x128C # int32_t
    m_nLastExecutedCommandTick = 0x1290 # int32_t
    m_hController = 0x1294 # CHandle<CBasePlayerController>
    m_bIsSwappingToPredictableController = 0x1298 # bool

class C_BasePlayerWeapon: # C_EconEntity
    m_nNextPrimaryAttackTick = 0x15B8 # GameTick_t
    m_flNextPrimaryAttackTickRatio = 0x15BC # float
    m_nNextSecondaryAttackTick = 0x15C0 # GameTick_t
    m_flNextSecondaryAttackTickRatio = 0x15C4 # float
    m_iClip1 = 0x15C8 # int32_t
    m_iClip2 = 0x15CC # int32_t
    m_pReserveAmmo = 0x15D0 # int32_t[2]

class C_BasePropDoor: # C_DynamicProp
    m_eDoorState = 0x1150 # DoorState_t
    m_modelChanged = 0x1154 # bool
    m_bLocked = 0x1155 # bool
    m_closedPosition = 0x1158 # Vector
    m_closedAngles = 0x1164 # QAngle
    m_hMaster = 0x1170 # CHandle<C_BasePropDoor>
    m_vWhereToSetLightingOrigin = 0x1174 # Vector

class C_BaseToggle: # C_BaseModelEntity

class C_BaseTrigger: # C_BaseToggle
    m_bDisabled = 0xCD0 # bool
    m_bClientSidePredicted = 0xCD1 # bool

class C_BaseViewModel: # CBaseAnimGraph
    m_vecLastFacing = 0xEE0 # Vector
    m_nViewModelIndex = 0xEEC # uint32_t
    m_nAnimationParity = 0xEF0 # uint32_t
    m_flAnimationStartTime = 0xEF4 # float
    m_hWeapon = 0xEF8 # CHandle<C_BasePlayerWeapon>
    m_sVMName = 0xF00 # CUtlSymbolLarge
    m_sAnimationPrefix = 0xF08 # CUtlSymbolLarge
    m_hWeaponModel = 0xF10 # CHandle<C_ViewmodelWeapon>
    m_iCameraAttachment = 0xF14 # AttachmentHandle_t
    m_vecLastCameraAngles = 0xF18 # QAngle
    m_previousElapsedDuration = 0xF24 # float
    m_previousCycle = 0xF28 # float
    m_nOldAnimationParity = 0xF2C # int32_t
    m_hOldLayerSequence = 0xF30 # HSequence
    m_oldLayer = 0xF34 # int32_t
    m_oldLayerStartTime = 0xF38 # float
    m_hControlPanel = 0xF3C # CHandle<C_BaseEntity>

class C_Beam: # C_BaseModelEntity
    m_flFrameRate = 0xCD0 # float
    m_flHDRColorScale = 0xCD4 # float
    m_flFireTime = 0xCD8 # GameTime_t
    m_flDamage = 0xCDC # float
    m_nNumBeamEnts = 0xCE0 # uint8_t
    m_queryHandleHalo = 0xCE4 # int32_t
    m_hBaseMaterial = 0xD08 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_nHaloIndex = 0xD10 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_nBeamType = 0xD18 # BeamType_t
    m_nBeamFlags = 0xD1C # uint32_t
    m_hAttachEntity = 0xD20 # CHandle<C_BaseEntity>[10]
    m_nAttachIndex = 0xD48 # AttachmentHandle_t[10]
    m_fWidth = 0xD54 # float
    m_fEndWidth = 0xD58 # float
    m_fFadeLength = 0xD5C # float
    m_fHaloScale = 0xD60 # float
    m_fAmplitude = 0xD64 # float
    m_fStartFrame = 0xD68 # float
    m_fSpeed = 0xD6C # float
    m_flFrame = 0xD70 # float
    m_nClipStyle = 0xD74 # BeamClipStyle_t
    m_bTurnedOff = 0xD78 # bool
    m_vecEndPos = 0xD7C # Vector
    m_hEndEntity = 0xD88 # CHandle<C_BaseEntity>

class C_Breakable: # C_BaseModelEntity

class C_BreakableProp: # CBaseProp
    m_OnBreak = 0xF20 # CEntityIOOutput
    m_OnHealthChanged = 0xF48 # CEntityOutputTemplate<float>
    m_OnTakeDamage = 0xF70 # CEntityIOOutput
    m_impactEnergyScale = 0xF98 # float
    m_iMinHealthDmg = 0xF9C # int32_t
    m_flPressureDelay = 0xFA0 # float
    m_hBreaker = 0xFA4 # CHandle<C_BaseEntity>
    m_PerformanceMode = 0xFA8 # PerformanceMode_t
    m_flDmgModBullet = 0xFAC # float
    m_flDmgModClub = 0xFB0 # float
    m_flDmgModExplosive = 0xFB4 # float
    m_flDmgModFire = 0xFB8 # float
    m_iszPhysicsDamageTableName = 0xFC0 # CUtlSymbolLarge
    m_iszBasePropData = 0xFC8 # CUtlSymbolLarge
    m_iInteractions = 0xFD0 # int32_t
    m_flPreventDamageBeforeTime = 0xFD4 # GameTime_t
    m_bHasBreakPiecesOrCommands = 0xFD8 # bool
    m_explodeDamage = 0xFDC # float
    m_explodeRadius = 0xFE0 # float
    m_explosionDelay = 0xFE8 # float
    m_explosionBuildupSound = 0xFF0 # CUtlSymbolLarge
    m_explosionCustomEffect = 0xFF8 # CUtlSymbolLarge
    m_explosionCustomSound = 0x1000 # CUtlSymbolLarge
    m_explosionModifier = 0x1008 # CUtlSymbolLarge
    m_hPhysicsAttacker = 0x1010 # CHandle<C_BasePlayerPawn>
    m_flLastPhysicsInfluenceTime = 0x1014 # GameTime_t
    m_flDefaultFadeScale = 0x1018 # float
    m_hLastAttacker = 0x101C # CHandle<C_BaseEntity>
    m_hFlareEnt = 0x1020 # CHandle<C_BaseEntity>
    m_noGhostCollision = 0x1024 # bool

class C_BulletHitModel: # CBaseAnimGraph
    m_matLocal = 0xED8 # matrix3x4_t
    m_iBoneIndex = 0xF08 # int32_t
    m_hPlayerParent = 0xF0C # CHandle<C_BaseEntity>
    m_bIsHit = 0xF10 # bool
    m_flTimeCreated = 0xF14 # float
    m_vecStartPos = 0xF18 # Vector

class C_C4: # C_CSWeaponBase
    m_szScreenText = 0x1A70 # char[32]
    m_activeLightParticleIndex = 0x1A90 # ParticleIndex_t
    m_eActiveLightEffect = 0x1A94 # C4LightEffect_t
    m_bStartedArming = 0x1A98 # bool
    m_fArmedTime = 0x1A9C # GameTime_t
    m_bBombPlacedAnimation = 0x1AA0 # bool
    m_bIsPlantingViaUse = 0x1AA1 # bool
    m_entitySpottedState = 0x1AA8 # EntitySpottedState_t
    m_nSpotRules = 0x1AC0 # int32_t
    m_bPlayedArmingBeeps = 0x1AC4 # bool[7]
    m_bBombPlanted = 0x1ACB # bool

class C_CSGOViewModel: # C_PredictedViewModel
    m_bShouldIgnoreOffsetAndAccuracy = 0xF68 # bool
    m_nWeaponParity = 0xF6C # uint32_t
    m_nOldWeaponParity = 0xF70 # uint32_t
    m_nLastKnownAssociatedWeaponEntIndex = 0xF74 # CEntityIndex
    m_bNeedToQueueHighResComposite = 0xF78 # bool
    m_vLoweredWeaponOffset = 0xFDC # QAngle

class C_CSGO_CounterTerroristTeamIntroCamera: # C_CSGO_TeamPreviewCamera

class C_CSGO_CounterTerroristWingmanIntroCamera: # C_CSGO_TeamPreviewCamera

class C_CSGO_EndOfMatchCamera: # C_CSGO_TeamPreviewCamera

class C_CSGO_EndOfMatchCharacterPosition: # C_CSGO_TeamPreviewCharacterPosition

class C_CSGO_EndOfMatchLineupEnd: # C_CSGO_EndOfMatchLineupEndpoint

class C_CSGO_EndOfMatchLineupEndpoint: # C_BaseEntity

class C_CSGO_EndOfMatchLineupStart: # C_CSGO_EndOfMatchLineupEndpoint

class C_CSGO_MapPreviewCameraPath: # C_BaseEntity
    m_flZFar = 0x550 # float
    m_flZNear = 0x554 # float
    m_bLoop = 0x558 # bool
    m_bVerticalFOV = 0x559 # bool
    m_bConstantSpeed = 0x55A # bool
    m_flDuration = 0x55C # float
    m_flPathLength = 0x5A0 # float
    m_flPathDuration = 0x5A4 # float

class C_CSGO_MapPreviewCameraPathNode: # C_BaseEntity
    m_szParentPathUniqueID = 0x550 # CUtlSymbolLarge
    m_nPathIndex = 0x558 # int32_t
    m_vInTangentLocal = 0x55C # Vector
    m_vOutTangentLocal = 0x568 # Vector
    m_flFOV = 0x574 # float
    m_flSpeed = 0x578 # float
    m_flEaseIn = 0x57C # float
    m_flEaseOut = 0x580 # float
    m_vInTangentWorld = 0x584 # Vector
    m_vOutTangentWorld = 0x590 # Vector

class C_CSGO_PreviewModel: # C_BaseFlex
    m_animgraph = 0x1070 # CUtlString
    m_animgraphCharacterModeString = 0x1078 # CGlobalSymbol
    m_defaultAnim = 0x1080 # CUtlString
    m_nDefaultAnimLoopMode = 0x1088 # AnimLoopMode_t
    m_flInitialModelScale = 0x108C # float
    m_sInitialWeaponState = 0x1090 # CUtlString

class C_CSGO_PreviewModelAlias_csgo_item_previewmodel: # C_CSGO_PreviewModel

class C_CSGO_PreviewModel_GraphController: # CAnimGraphControllerBase
    m_pszCharacterMode = 0x18 # CAnimGraphParamOptionalRef<char*>
    m_pszWeaponState = 0x38 # CAnimGraphParamOptionalRef<char*>
    m_pszWeaponType = 0x58 # CAnimGraphParamOptionalRef<char*>
    m_pszEndOfMatchCelebration = 0x78 # CAnimGraphParamOptionalRef<char*>

class C_CSGO_PreviewPlayer: # C_CSPlayerPawn
    m_animgraph = 0x2418 # CUtlString
    m_animgraphCharacterModeString = 0x2420 # CGlobalSymbol
    m_flInitialModelScale = 0x2428 # float

class C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel: # C_CSGO_PreviewPlayer

class C_CSGO_PreviewPlayer_GraphController: # CAnimGraphControllerBase
    m_pszCharacterMode = 0x18 # CAnimGraphParamOptionalRef<char*>
    m_pszTeamPreviewVariant = 0x38 # CAnimGraphParamOptionalRef<char*>
    m_pszTeamPreviewPosition = 0x58 # CAnimGraphParamOptionalRef<char*>
    m_pszEndOfMatchCelebration = 0x78 # CAnimGraphParamOptionalRef<char*>
    m_nTeamPreviewRandom = 0x98 # CAnimGraphParamOptionalRef<int32_t>
    m_pszWeaponState = 0xB0 # CAnimGraphParamOptionalRef<char*>
    m_pszWeaponType = 0xD0 # CAnimGraphParamOptionalRef<char*>
    m_bCT = 0xF0 # CAnimGraphParamOptionalRef<bool>

class C_CSGO_TeamIntroCharacterPosition: # C_CSGO_TeamPreviewCharacterPosition

class C_CSGO_TeamIntroCounterTerroristPosition: # C_CSGO_TeamIntroCharacterPosition

class C_CSGO_TeamIntroTerroristPosition: # C_CSGO_TeamIntroCharacterPosition

class C_CSGO_TeamPreviewCamera: # C_CSGO_MapPreviewCameraPath
    m_nVariant = 0x5B0 # int32_t
    m_bDofEnabled = 0x5B4 # bool
    m_flDofNearBlurry = 0x5B8 # float
    m_flDofNearCrisp = 0x5BC # float
    m_flDofFarCrisp = 0x5C0 # float
    m_flDofFarBlurry = 0x5C4 # float
    m_flDofTiltToGround = 0x5C8 # float

class C_CSGO_TeamPreviewCharacterPosition: # C_BaseEntity
    m_nVariant = 0x550 # int32_t
    m_nRandom = 0x554 # int32_t
    m_nOrdinal = 0x558 # int32_t
    m_sWeaponName = 0x560 # CUtlString
    m_xuid = 0x568 # uint64_t
    m_agentItem = 0x570 # C_EconItemView
    m_glovesItem = 0x9B8 # C_EconItemView
    m_weaponItem = 0xE00 # C_EconItemView

class C_CSGO_TeamPreviewModel: # C_CSGO_PreviewPlayer

class C_CSGO_TeamSelectCamera: # C_CSGO_TeamPreviewCamera

class C_CSGO_TeamSelectCharacterPosition: # C_CSGO_TeamPreviewCharacterPosition

class C_CSGO_TeamSelectCounterTerroristPosition: # C_CSGO_TeamSelectCharacterPosition

class C_CSGO_TeamSelectTerroristPosition: # C_CSGO_TeamSelectCharacterPosition

class C_CSGO_TerroristTeamIntroCamera: # C_CSGO_TeamPreviewCamera

class C_CSGO_TerroristWingmanIntroCamera: # C_CSGO_TeamPreviewCamera

class C_CSGameRules: # C_TeamplayRules
    __m_pChainEntity = 0x8 # CNetworkVarChainer
    m_bFreezePeriod = 0x30 # bool
    m_bWarmupPeriod = 0x31 # bool
    m_fWarmupPeriodEnd = 0x34 # GameTime_t
    m_fWarmupPeriodStart = 0x38 # GameTime_t
    m_nTotalPausedTicks = 0x3C # int32_t
    m_nPauseStartTick = 0x40 # int32_t
    m_bServerPaused = 0x44 # bool
    m_bGamePaused = 0x45 # bool
    m_bTerroristTimeOutActive = 0x46 # bool
    m_bCTTimeOutActive = 0x47 # bool
    m_flTerroristTimeOutRemaining = 0x48 # float
    m_flCTTimeOutRemaining = 0x4C # float
    m_nTerroristTimeOuts = 0x50 # int32_t
    m_nCTTimeOuts = 0x54 # int32_t
    m_bTechnicalTimeOut = 0x58 # bool
    m_bMatchWaitingForResume = 0x59 # bool
    m_iRoundTime = 0x5C # int32_t
    m_fMatchStartTime = 0x60 # float
    m_fRoundStartTime = 0x64 # GameTime_t
    m_flRestartRoundTime = 0x68 # GameTime_t
    m_bGameRestart = 0x6C # bool
    m_flGameStartTime = 0x70 # float
    m_timeUntilNextPhaseStarts = 0x74 # float
    m_gamePhase = 0x78 # int32_t
    m_totalRoundsPlayed = 0x7C # int32_t
    m_nRoundsPlayedThisPhase = 0x80 # int32_t
    m_nOvertimePlaying = 0x84 # int32_t
    m_iHostagesRemaining = 0x88 # int32_t
    m_bAnyHostageReached = 0x8C # bool
    m_bMapHasBombTarget = 0x8D # bool
    m_bMapHasRescueZone = 0x8E # bool
    m_bMapHasBuyZone = 0x8F # bool
    m_bIsQueuedMatchmaking = 0x90 # bool
    m_nQueuedMatchmakingMode = 0x94 # int32_t
    m_bIsValveDS = 0x98 # bool
    m_bLogoMap = 0x99 # bool
    m_bPlayAllStepSoundsOnServer = 0x9A # bool
    m_iSpectatorSlotCount = 0x9C # int32_t
    m_MatchDevice = 0xA0 # int32_t
    m_bHasMatchStarted = 0xA4 # bool
    m_nNextMapInMapgroup = 0xA8 # int32_t
    m_szTournamentEventName = 0xAC # char[512]
    m_szTournamentEventStage = 0x2AC # char[512]
    m_szMatchStatTxt = 0x4AC # char[512]
    m_szTournamentPredictionsTxt = 0x6AC # char[512]
    m_nTournamentPredictionsPct = 0x8AC # int32_t
    m_flCMMItemDropRevealStartTime = 0x8B0 # GameTime_t
    m_flCMMItemDropRevealEndTime = 0x8B4 # GameTime_t
    m_bIsDroppingItems = 0x8B8 # bool
    m_bIsQuestEligible = 0x8B9 # bool
    m_bIsHltvActive = 0x8BA # bool
    m_nGuardianModeWaveNumber = 0x8BC # int32_t
    m_nGuardianModeSpecialKillsRemaining = 0x8C0 # int32_t
    m_nGuardianModeSpecialWeaponNeeded = 0x8C4 # int32_t
    m_nGuardianGrenadesToGiveBots = 0x8C8 # int32_t
    m_nNumHeaviesToSpawn = 0x8CC # int32_t
    m_numGlobalGiftsGiven = 0x8D0 # uint32_t
    m_numGlobalGifters = 0x8D4 # uint32_t
    m_numGlobalGiftsPeriodSeconds = 0x8D8 # uint32_t
    m_arrFeaturedGiftersAccounts = 0x8DC # uint32_t[4]
    m_arrFeaturedGiftersGifts = 0x8EC # uint32_t[4]
    m_arrProhibitedItemIndices = 0x8FC # uint16_t[100]
    m_arrTournamentActiveCasterAccounts = 0x9C4 # uint32_t[4]
    m_numBestOfMaps = 0x9D4 # int32_t
    m_nHalloweenMaskListSeed = 0x9D8 # int32_t
    m_bBombDropped = 0x9DC # bool
    m_bBombPlanted = 0x9DD # bool
    m_iRoundWinStatus = 0x9E0 # int32_t
    m_eRoundWinReason = 0x9E4 # int32_t
    m_bTCantBuy = 0x9E8 # bool
    m_bCTCantBuy = 0x9E9 # bool
    m_flGuardianBuyUntilTime = 0x9EC # GameTime_t
    m_iMatchStats_RoundResults = 0x9F0 # int32_t[30]
    m_iMatchStats_PlayersAlive_CT = 0xA68 # int32_t[30]
    m_iMatchStats_PlayersAlive_T = 0xAE0 # int32_t[30]
    m_TeamRespawnWaveTimes = 0xB58 # float[32]
    m_flNextRespawnWave = 0xBD8 # GameTime_t[32]
    m_nServerQuestID = 0xC58 # int32_t
    m_vMinimapMins = 0xC5C # Vector
    m_vMinimapMaxs = 0xC68 # Vector
    m_MinimapVerticalSectionHeights = 0xC74 # float[8]
    m_bDontIncrementCoopWave = 0xC94 # bool
    m_bSpawnedTerrorHuntHeavy = 0xC95 # bool
    m_nEndMatchMapGroupVoteTypes = 0xC98 # int32_t[10]
    m_nEndMatchMapGroupVoteOptions = 0xCC0 # int32_t[10]
    m_nEndMatchMapVoteWinner = 0xCE8 # int32_t
    m_iNumConsecutiveCTLoses = 0xCEC # int32_t
    m_iNumConsecutiveTerroristLoses = 0xCF0 # int32_t
    m_bMarkClientStopRecordAtRoundEnd = 0xD10 # bool
    m_nMatchAbortedEarlyReason = 0xD68 # int32_t
    m_bHasTriggeredRoundStartMusic = 0xD6C # bool
    m_bHasTriggeredCoopSpawnReset = 0xD6D # bool
    m_bSwitchingTeamsAtRoundReset = 0xD6E # bool
    m_pGameModeRules = 0xD88 # CCSGameModeRules*
    m_RetakeRules = 0xD90 # C_RetakeGameRules
    m_nMatchEndCount = 0xEA8 # uint8_t
    m_nTTeamIntroVariant = 0xEAC # int32_t
    m_nCTTeamIntroVariant = 0xEB0 # int32_t
    m_bTeamIntroPeriod = 0xEB4 # bool
    m_iRoundEndWinnerTeam = 0xEB8 # int32_t
    m_eRoundEndReason = 0xEBC # int32_t
    m_bRoundEndShowTimerDefend = 0xEC0 # bool
    m_iRoundEndTimerTime = 0xEC4 # int32_t
    m_sRoundEndFunFactToken = 0xEC8 # CUtlString
    m_iRoundEndFunFactPlayerSlot = 0xED0 # CPlayerSlot
    m_iRoundEndFunFactData1 = 0xED4 # int32_t
    m_iRoundEndFunFactData2 = 0xED8 # int32_t
    m_iRoundEndFunFactData3 = 0xEDC # int32_t
    m_sRoundEndMessage = 0xEE0 # CUtlString
    m_iRoundEndPlayerCount = 0xEE8 # int32_t
    m_bRoundEndNoMusic = 0xEEC # bool
    m_iRoundEndLegacy = 0xEF0 # int32_t
    m_nRoundEndCount = 0xEF4 # uint8_t
    m_iRoundStartRoundNumber = 0xEF8 # int32_t
    m_nRoundStartCount = 0xEFC # uint8_t
    m_flLastPerfSampleTime = 0x4F08 # double

class C_CSGameRulesProxy: # C_GameRulesProxy
    m_pGameRules = 0x550 # C_CSGameRules*

class C_CSMinimapBoundary: # C_BaseEntity

class C_CSObserverPawn: # C_CSPlayerPawnBase
    m_hDetectParentChange = 0x1718 # CEntityHandle

class C_CSObserverPawnAPI:

class C_CSPlayerPawn: # C_CSPlayerPawnBase
    m_pBulletServices = 0x1718 # CCSPlayer_BulletServices*
    m_pHostageServices = 0x1720 # CCSPlayer_HostageServices*
    m_pBuyServices = 0x1728 # CCSPlayer_BuyServices*
    m_pGlowServices = 0x1730 # CCSPlayer_GlowServices*
    m_pActionTrackingServices = 0x1738 # CCSPlayer_ActionTrackingServices*
    m_flHealthShotBoostExpirationTime = 0x1740 # GameTime_t
    m_flLastFiredWeaponTime = 0x1744 # GameTime_t
    m_bHasFemaleVoice = 0x1748 # bool
    m_flLandseconds = 0x174C # float
    m_flOldFallVelocity = 0x1750 # float
    m_szLastPlaceName = 0x1754 # char[18]
    m_bPrevDefuser = 0x1766 # bool
    m_bPrevHelmet = 0x1767 # bool
    m_nPrevArmorVal = 0x1768 # int32_t
    m_nPrevGrenadeAmmoCount = 0x176C # int32_t
    m_unPreviousWeaponHash = 0x1770 # uint32_t
    m_unWeaponHash = 0x1774 # uint32_t
    m_bInBuyZone = 0x1778 # bool
    m_bPreviouslyInBuyZone = 0x1779 # bool
    m_aimPunchAngle = 0x177C # QAngle
    m_aimPunchAngleVel = 0x1788 # QAngle
    m_aimPunchTickBase = 0x1794 # int32_t
    m_aimPunchTickFraction = 0x1798 # float
    m_aimPunchCache = 0x17A0 # CUtlVector<QAngle>
    m_bInLanding = 0x17C0 # bool
    m_flLandingTime = 0x17C4 # float
    m_bInHostageRescueZone = 0x17C8 # bool
    m_bInBombZone = 0x17C9 # bool
    m_bIsBuyMenuOpen = 0x17CA # bool
    m_flTimeOfLastInjury = 0x17CC # GameTime_t
    m_flNextSprayDecalTime = 0x17D0 # GameTime_t
    m_iRetakesOffering = 0x18E8 # int32_t
    m_iRetakesOfferingCard = 0x18EC # int32_t
    m_bRetakesHasDefuseKit = 0x18F0 # bool
    m_bRetakesMVPLastRound = 0x18F1 # bool
    m_iRetakesMVPBoostItem = 0x18F4 # int32_t
    m_RetakesMVPBoostExtraUtility = 0x18F8 # loadout_slot_t
    m_bNeedToReApplyGloves = 0x1918 # bool
    m_EconGloves = 0x1920 # C_EconItemView
    m_nEconGlovesChanged = 0x1D68 # uint8_t
    m_bMustSyncRagdollState = 0x1D69 # bool
    m_nRagdollDamageBone = 0x1D6C # int32_t
    m_vRagdollDamageForce = 0x1D70 # Vector
    m_vRagdollDamagePosition = 0x1D7C # Vector
    m_szRagdollDamageWeaponName = 0x1D88 # char[64]
    m_bRagdollDamageHeadshot = 0x1DC8 # bool
    m_vRagdollServerOrigin = 0x1DCC # Vector
    m_bLastHeadBoneTransformIsValid = 0x23E0 # bool
    m_lastLandTime = 0x23E4 # GameTime_t
    m_bOnGroundLastTick = 0x23E8 # bool
    m_qDeathEyeAngles = 0x2404 # QAngle
    m_bSkipOneHeadConstraintUpdate = 0x2410 # bool

class C_CSPlayerPawnAPI:

class C_CSPlayerPawnBase: # C_BasePlayerPawn
    m_pPingServices = 0x12C0 # CCSPlayer_PingServices*
    m_pViewModelServices = 0x12C8 # CPlayer_ViewModelServices*
    m_fRenderingClipPlane = 0x12D8 # float[4]
    m_nLastClipPlaneSetupFrame = 0x12E8 # int32_t
    m_vecLastClipCameraPos = 0x12EC # Vector
    m_vecLastClipCameraForward = 0x12F8 # Vector
    m_bClipHitStaticWorld = 0x1304 # bool
    m_bCachedPlaneIsValid = 0x1305 # bool
    m_pClippingWeapon = 0x1308 # C_CSWeaponBase*
    m_previousPlayerState = 0x1310 # CSPlayerState
    m_flLastCollisionCeiling = 0x1314 # float
    m_flLastCollisionCeilingChangeTime = 0x1318 # float
    m_grenadeParameterStashTime = 0x1338 # GameTime_t
    m_bGrenadeParametersStashed = 0x133C # bool
    m_angStashedShootAngles = 0x1340 # QAngle
    m_vecStashedGrenadeThrowPosition = 0x134C # Vector
    m_vecStashedVelocity = 0x1358 # Vector
    m_angShootAngleHistory = 0x1364 # QAngle[2]
    m_vecThrowPositionHistory = 0x137C # Vector[2]
    m_vecVelocityHistory = 0x1394 # Vector[2]
    m_thirdPersonHeading = 0x13B0 # QAngle
    m_flSlopeDropOffset = 0x13C8 # float
    m_flSlopeDropHeight = 0x13D8 # float
    m_vHeadConstraintOffset = 0x13E8 # Vector
    m_bIsScoped = 0x1400 # bool
    m_bIsWalking = 0x1401 # bool
    m_bResumeZoom = 0x1402 # bool
    m_iPlayerState = 0x1404 # CSPlayerState
    m_bIsDefusing = 0x1408 # bool
    m_bIsGrabbingHostage = 0x1409 # bool
    m_iBlockingUseActionInProgress = 0x140C # CSPlayerBlockingUseAction_t
    m_bIsRescuing = 0x1410 # bool
    m_fImmuneToGunGameDamageTime = 0x1414 # GameTime_t
    m_fImmuneToGunGameDamageTimeLast = 0x1418 # GameTime_t
    m_bGunGameImmunity = 0x141C # bool
    m_GunGameImmunityColor = 0x141D # Color
    m_bHasMovedSinceSpawn = 0x1421 # bool
    m_fMolotovUseTime = 0x1424 # float
    m_fMolotovDamageTime = 0x1428 # float
    m_nWhichBombZone = 0x142C # int32_t
    m_bInNoDefuseArea = 0x1430 # bool
    m_iThrowGrenadeCounter = 0x1434 # int32_t
    m_bWaitForNoAttack = 0x1438 # bool
    m_flGuardianTooFarDistFrac = 0x143C # float
    m_flDetectedByEnemySensorTime = 0x1440 # GameTime_t
    m_flNextGuardianTooFarWarning = 0x1444 # float
    m_bSuppressGuardianTooFarWarningAudio = 0x1448 # bool
    m_bKilledByTaser = 0x1449 # bool
    m_iMoveState = 0x144C # int32_t
    m_bCanMoveDuringFreezePeriod = 0x1450 # bool
    m_flLowerBodyYawTarget = 0x1454 # float
    m_bStrafing = 0x1458 # bool
    m_flLastSpawnTimeIndex = 0x145C # GameTime_t
    m_flEmitSoundTime = 0x1460 # GameTime_t
    m_iAddonBits = 0x1464 # int32_t
    m_iPrimaryAddon = 0x1468 # int32_t
    m_iSecondaryAddon = 0x146C # int32_t
    m_iProgressBarDuration = 0x1470 # int32_t
    m_flProgressBarStartTime = 0x1474 # float
    m_iDirection = 0x1478 # int32_t
    m_iShotsFired = 0x147C # int32_t
    m_bNightVisionOn = 0x1480 # bool
    m_bHasNightVision = 0x1481 # bool
    m_flVelocityModifier = 0x1484 # float
    m_flHitHeading = 0x1488 # float
    m_nHitBodyPart = 0x148C # int32_t
    m_iStartAccount = 0x1490 # int32_t
    m_vecIntroStartEyePosition = 0x1494 # Vector
    m_vecIntroStartPlayerForward = 0x14A0 # Vector
    m_flClientDeathTime = 0x14AC # GameTime_t
    m_flNightVisionAlpha = 0x14B0 # float
    m_bScreenTearFrameCaptured = 0x14B4 # bool
    m_flFlashBangTime = 0x14B8 # float
    m_flFlashScreenshotAlpha = 0x14BC # float
    m_flFlashOverlayAlpha = 0x14C0 # float
    m_bFlashBuildUp = 0x14C4 # bool
    m_bFlashDspHasBeenCleared = 0x14C5 # bool
    m_bFlashScreenshotHasBeenGrabbed = 0x14C6 # bool
    m_flFlashMaxAlpha = 0x14C8 # float
    m_flFlashDuration = 0x14CC # float
    m_lastStandingPos = 0x14D0 # Vector
    m_vecLastMuzzleFlashPos = 0x14DC # Vector
    m_angLastMuzzleFlashAngle = 0x14E8 # QAngle
    m_hMuzzleFlashShape = 0x14F4 # CHandle<C_BaseEntity>
    m_iHealthBarRenderMaskIndex = 0x14F8 # int32_t
    m_flHealthFadeValue = 0x14FC # float
    m_flHealthFadeAlpha = 0x1500 # float
    m_nMyCollisionGroup = 0x1504 # int32_t
    m_ignoreLadderJumpTime = 0x1508 # float
    m_ladderSurpressionTimer = 0x1510 # CountdownTimer
    m_lastLadderNormal = 0x1528 # Vector
    m_lastLadderPos = 0x1534 # Vector
    m_flDeathCCWeight = 0x1548 # float
    m_bOldIsScoped = 0x154C # bool
    m_flPrevRoundEndTime = 0x1550 # float
    m_flPrevMatchEndTime = 0x1554 # float
    m_unCurrentEquipmentValue = 0x1558 # uint16_t
    m_unRoundStartEquipmentValue = 0x155A # uint16_t
    m_unFreezetimeEndEquipmentValue = 0x155C # uint16_t
    m_vecThirdPersonViewPositionOverride = 0x1560 # Vector
    m_nHeavyAssaultSuitCooldownRemaining = 0x156C # int32_t
    m_ArmorValue = 0x1570 # int32_t
    m_angEyeAngles = 0x1578 # QAngle
    m_fNextThinkPushAway = 0x1590 # float
    m_bShouldAutobuyDMWeapons = 0x1594 # bool
    m_bShouldAutobuyNow = 0x1595 # bool
    m_bHud_MiniScoreHidden = 0x1596 # bool
    m_bHud_RadarHidden = 0x1597 # bool
    m_nLastKillerIndex = 0x1598 # CEntityIndex
    m_nLastConcurrentKilled = 0x159C # int32_t
    m_nDeathCamMusic = 0x15A0 # int32_t
    m_iIDEntIndex = 0x15A4 # CEntityIndex
    m_delayTargetIDTimer = 0x15A8 # CountdownTimer
    m_iTargetedWeaponEntIndex = 0x15C0 # CEntityIndex
    m_iOldIDEntIndex = 0x15C4 # CEntityIndex
    m_holdTargetIDTimer = 0x15C8 # CountdownTimer
    m_flCurrentMusicStartTime = 0x15E4 # float
    m_flMusicRoundStartTime = 0x15E8 # float
    m_bDeferStartMusicOnWarmup = 0x15EC # bool
    m_cycleLatch = 0x15F0 # int32_t
    m_serverIntendedCycle = 0x15F4 # float
    m_vecPlayerPatchEconIndices = 0x15F8 # uint32_t[5]
    m_bHideTargetID = 0x1614 # bool
    m_flLastSmokeOverlayAlpha = 0x1618 # float
    m_flLastSmokeAge = 0x161C # float
    m_vLastSmokeOverlayColor = 0x1620 # Vector
    m_nPlayerSmokedFx = 0x162C # ParticleIndex_t
    m_nPlayerInfernoBodyFx = 0x1630 # ParticleIndex_t
    m_nPlayerInfernoFootFx = 0x1634 # ParticleIndex_t
    m_flNextMagDropTime = 0x1638 # float
    m_nLastMagDropAttachmentIndex = 0x163C # int32_t
    m_vecBulletHitModels = 0x1640 # CUtlVector<C_BulletHitModel*>
    m_vecPickupModelSlerpers = 0x1658 # CUtlVector<C_PickUpModelSlerper*>
    m_vecLastAliveLocalVelocity = 0x1670 # Vector
    m_entitySpottedState = 0x1698 # EntitySpottedState_t
    m_nSurvivalTeamNumber = 0x16B0 # int32_t
    m_bGuardianShouldSprayCustomXMark = 0x16B4 # bool
    m_bHasDeathInfo = 0x16B5 # bool
    m_flDeathInfoTime = 0x16B8 # float
    m_vecDeathInfoOrigin = 0x16BC # Vector
    m_bKilledByHeadshot = 0x16C8 # bool
    m_hOriginalController = 0x16CC # CHandle<CCSPlayerController>

class C_CSPlayerResource: # C_BaseEntity
    m_bHostageAlive = 0x550 # bool[12]
    m_isHostageFollowingSomeone = 0x55C # bool[12]
    m_iHostageEntityIDs = 0x568 # CEntityIndex[12]
    m_bombsiteCenterA = 0x598 # Vector
    m_bombsiteCenterB = 0x5A4 # Vector
    m_hostageRescueX = 0x5B0 # int32_t[4]
    m_hostageRescueY = 0x5C0 # int32_t[4]
    m_hostageRescueZ = 0x5D0 # int32_t[4]
    m_bEndMatchNextMapAllVoted = 0x5E0 # bool
    m_foundGoalPositions = 0x5E1 # bool

class C_CSTeam: # C_Team
    m_szTeamMatchStat = 0x608 # char[512]
    m_numMapVictories = 0x808 # int32_t
    m_bSurrendered = 0x80C # bool
    m_scoreFirstHalf = 0x810 # int32_t
    m_scoreSecondHalf = 0x814 # int32_t
    m_scoreOvertime = 0x818 # int32_t
    m_szClanTeamname = 0x81C # char[129]
    m_iClanID = 0x8A0 # uint32_t
    m_szTeamFlagImage = 0x8A4 # char[8]
    m_szTeamLogoImage = 0x8AC # char[8]

class C_CSWeaponBase: # C_BasePlayerWeapon
    m_flFireSequenceStartTime = 0x162C # float
    m_nFireSequenceStartTimeChange = 0x1630 # int32_t
    m_nFireSequenceStartTimeAck = 0x1634 # int32_t
    m_ePlayerFireEvent = 0x1638 # PlayerAnimEvent_t
    m_ePlayerFireEventAttackType = 0x163C # WeaponAttackType_t
    m_seqIdle = 0x1640 # HSequence
    m_seqFirePrimary = 0x1644 # HSequence
    m_seqFireSecondary = 0x1648 # HSequence
    m_thirdPersonFireSequences = 0x1650 # CUtlVector<HSequence>
    m_hCurrentThirdPersonSequence = 0x1668 # HSequence
    m_nSilencerBoneIndex = 0x166C # int32_t
    m_thirdPersonSequences = 0x1670 # HSequence[7]
    m_ClientPreviousWeaponState = 0x16A8 # CSWeaponState_t
    m_iState = 0x16AC # CSWeaponState_t
    m_flCrosshairDistance = 0x16B0 # float
    m_iAmmoLastCheck = 0x16B4 # int32_t
    m_iAlpha = 0x16B8 # int32_t
    m_iScopeTextureID = 0x16BC # int32_t
    m_iCrosshairTextureID = 0x16C0 # int32_t
    m_flGunAccuracyPositionDeprecated = 0x16C4 # float
    m_nLastEmptySoundCmdNum = 0x16C8 # int32_t
    m_nViewModelIndex = 0x16CC # uint32_t
    m_bReloadsWithClips = 0x16D0 # bool
    m_flTimeWeaponIdle = 0x16D4 # GameTime_t
    m_bFireOnEmpty = 0x16D8 # bool
    m_OnPlayerPickup = 0x16E0 # CEntityIOOutput
    m_weaponMode = 0x1708 # CSWeaponMode
    m_flTurningInaccuracyDelta = 0x170C # float
    m_vecTurningInaccuracyEyeDirLast = 0x1710 # Vector
    m_flTurningInaccuracy = 0x171C # float
    m_fAccuracyPenalty = 0x1720 # float
    m_flLastAccuracyUpdateTime = 0x1724 # GameTime_t
    m_fAccuracySmoothedForZoom = 0x1728 # float
    m_fScopeZoomEndTime = 0x172C # GameTime_t
    m_iRecoilIndex = 0x1730 # int32_t
    m_flRecoilIndex = 0x1734 # float
    m_bBurstMode = 0x1738 # bool
    m_nPostponeFireReadyTicks = 0x173C # GameTick_t
    m_flPostponeFireReadyFrac = 0x1740 # float
    m_bInReload = 0x1744 # bool
    m_bReloadVisuallyComplete = 0x1745 # bool
    m_flDroppedAtTime = 0x1748 # GameTime_t
    m_bIsHauledBack = 0x174C # bool
    m_bSilencerOn = 0x174D # bool
    m_flTimeSilencerSwitchComplete = 0x1750 # GameTime_t
    m_iOriginalTeamNumber = 0x1754 # int32_t
    m_flNextAttackRenderTimeOffset = 0x1758 # float
    m_bVisualsDataSet = 0x17E0 # bool
    m_bOldFirstPersonSpectatedState = 0x17E1 # bool
    m_hOurPing = 0x17E4 # CHandle<C_BaseEntity>
    m_nOurPingIndex = 0x17E8 # CEntityIndex
    m_vecOurPingPos = 0x17EC # Vector
    m_bGlowForPing = 0x17F8 # bool
    m_bUIWeapon = 0x17F9 # bool
    m_hPrevOwner = 0x1808 # CHandle<C_CSPlayerPawn>
    m_nDropTick = 0x180C # GameTick_t
    m_donated = 0x182C # bool
    m_fLastShotTime = 0x1830 # GameTime_t
    m_bWasOwnedByCT = 0x1834 # bool
    m_bWasOwnedByTerrorist = 0x1835 # bool
    m_gunHeat = 0x1838 # float
    m_smokeAttachments = 0x183C # uint32_t
    m_lastSmokeTime = 0x1840 # GameTime_t
    m_flNextClientFireBulletTime = 0x1844 # float
    m_flNextClientFireBulletTime_Repredict = 0x1848 # float
    m_IronSightController = 0x1920 # C_IronSightController
    m_iIronSightMode = 0x19D0 # int32_t
    m_flLastLOSTraceFailureTime = 0x19E0 # GameTime_t
    m_iNumEmptyAttacks = 0x19E4 # int32_t
    m_flLastMagDropRequestTime = 0x1A60 # GameTime_t
    m_flWatTickOffset = 0x1A64 # float

class C_CSWeaponBaseGun: # C_CSWeaponBase
    m_zoomLevel = 0x1A70 # int32_t
    m_iBurstShotsRemaining = 0x1A74 # int32_t
    m_iSilencerBodygroup = 0x1A78 # int32_t
    m_silencedModelIndex = 0x1A88 # int32_t
    m_inPrecache = 0x1A8C # bool
    m_bNeedsBoltAction = 0x1A8D # bool

class C_Chicken: # C_DynamicProp
    m_hHolidayHatAddon = 0x1148 # CHandle<CBaseAnimGraph>
    m_jumpedThisFrame = 0x114C # bool
    m_leader = 0x1150 # CHandle<C_CSPlayerPawn>
    m_AttributeManager = 0x1158 # C_AttributeContainer
    m_OriginalOwnerXuidLow = 0x1600 # uint32_t
    m_OriginalOwnerXuidHigh = 0x1604 # uint32_t
    m_bAttributesInitialized = 0x1608 # bool
    m_hWaterWakeParticles = 0x160C # ParticleIndex_t

class C_ClientRagdoll: # CBaseAnimGraph
    m_bFadeOut = 0xED8 # bool
    m_bImportant = 0xED9 # bool
    m_flEffectTime = 0xEDC # GameTime_t
    m_gibDespawnTime = 0xEE0 # GameTime_t
    m_iCurrentFriction = 0xEE4 # int32_t
    m_iMinFriction = 0xEE8 # int32_t
    m_iMaxFriction = 0xEEC # int32_t
    m_iFrictionAnimState = 0xEF0 # int32_t
    m_bReleaseRagdoll = 0xEF4 # bool
    m_iEyeAttachment = 0xEF5 # AttachmentHandle_t
    m_bFadingOut = 0xEF6 # bool
    m_flScaleEnd = 0xEF8 # float[10]
    m_flScaleTimeStart = 0xF20 # GameTime_t[10]
    m_flScaleTimeEnd = 0xF48 # GameTime_t[10]

class C_ColorCorrection: # C_BaseEntity
    m_vecOrigin = 0x550 # Vector
    m_MinFalloff = 0x55C # float
    m_MaxFalloff = 0x560 # float
    m_flFadeInDuration = 0x564 # float
    m_flFadeOutDuration = 0x568 # float
    m_flMaxWeight = 0x56C # float
    m_flCurWeight = 0x570 # float
    m_netlookupFilename = 0x574 # char[512]
    m_bEnabled = 0x774 # bool
    m_bMaster = 0x775 # bool
    m_bClientSide = 0x776 # bool
    m_bExclusive = 0x777 # bool
    m_bEnabledOnClient = 0x778 # bool[1]
    m_flCurWeightOnClient = 0x77C # float[1]
    m_bFadingIn = 0x780 # bool[1]
    m_flFadeStartWeight = 0x784 # float[1]
    m_flFadeStartTime = 0x788 # float[1]
    m_flFadeDuration = 0x78C # float[1]

class C_ColorCorrectionVolume: # C_BaseTrigger
    m_LastEnterWeight = 0xCD8 # float
    m_LastEnterTime = 0xCDC # float
    m_LastExitWeight = 0xCE0 # float
    m_LastExitTime = 0xCE4 # float
    m_bEnabled = 0xCE8 # bool
    m_MaxWeight = 0xCEC # float
    m_FadeDuration = 0xCF0 # float
    m_Weight = 0xCF4 # float
    m_lookupFilename = 0xCF8 # char[512]

class C_CommandContext:
    needsprocessing = 0x0 # bool
    command_number = 0x90 # int32_t

class C_CsmFovOverride: # C_BaseEntity
    m_cameraName = 0x550 # CUtlString
    m_flCsmFovOverrideValue = 0x558 # float

class C_DEagle: # C_CSWeaponBaseGun

class C_DecoyGrenade: # C_BaseCSGrenade

class C_DecoyProjectile: # C_BaseCSGrenadeProjectile
    m_nDecoyShotTick = 0x1158 # int32_t
    m_nClientLastKnownDecoyShotTick = 0x115C # int32_t
    m_flTimeParticleEffectSpawn = 0x1180 # GameTime_t

class C_DynamicLight: # C_BaseModelEntity
    m_Flags = 0xCD0 # uint8_t
    m_LightStyle = 0xCD1 # uint8_t
    m_Radius = 0xCD4 # float
    m_Exponent = 0xCD8 # int32_t
    m_InnerAngle = 0xCDC # float
    m_OuterAngle = 0xCE0 # float
    m_SpotRadius = 0xCE4 # float

class C_DynamicProp: # C_BreakableProp
    m_bUseHitboxesForRenderBox = 0x1028 # bool
    m_bUseAnimGraph = 0x1029 # bool
    m_pOutputAnimBegun = 0x1030 # CEntityIOOutput
    m_pOutputAnimOver = 0x1058 # CEntityIOOutput
    m_pOutputAnimLoopCycleOver = 0x1080 # CEntityIOOutput
    m_OnAnimReachedStart = 0x10A8 # CEntityIOOutput
    m_OnAnimReachedEnd = 0x10D0 # CEntityIOOutput
    m_iszIdleAnim = 0x10F8 # CUtlSymbolLarge
    m_nIdleAnimLoopMode = 0x1100 # AnimLoopMode_t
    m_bRandomizeCycle = 0x1104 # bool
    m_bStartDisabled = 0x1105 # bool
    m_bFiredStartEndOutput = 0x1106 # bool
    m_bForceNpcExclude = 0x1107 # bool
    m_bCreateNonSolid = 0x1108 # bool
    m_bIsOverrideProp = 0x1109 # bool
    m_iInitialGlowState = 0x110C # int32_t
    m_nGlowRange = 0x1110 # int32_t
    m_nGlowRangeMin = 0x1114 # int32_t
    m_glowColor = 0x1118 # Color
    m_nGlowTeam = 0x111C # int32_t
    m_iCachedFrameCount = 0x1120 # int32_t
    m_vecCachedRenderMins = 0x1124 # Vector
    m_vecCachedRenderMaxs = 0x1130 # Vector

class C_DynamicPropAlias_cable_dynamic: # C_DynamicProp

class C_DynamicPropAlias_dynamic_prop: # C_DynamicProp

class C_DynamicPropAlias_prop_dynamic_override: # C_DynamicProp

class C_EconEntity: # C_BaseFlex
    m_flFlexDelayTime = 0x1080 # float
    m_flFlexDelayedWeight = 0x1088 # float*
    m_bAttributesInitialized = 0x1090 # bool
    m_AttributeManager = 0x1098 # C_AttributeContainer
    m_OriginalOwnerXuidLow = 0x1540 # uint32_t
    m_OriginalOwnerXuidHigh = 0x1544 # uint32_t
    m_nFallbackPaintKit = 0x1548 # int32_t
    m_nFallbackSeed = 0x154C # int32_t
    m_flFallbackWear = 0x1550 # float
    m_nFallbackStatTrak = 0x1554 # int32_t
    m_bClientside = 0x1558 # bool
    m_bParticleSystemsCreated = 0x1559 # bool
    m_vecAttachedParticles = 0x1560 # CUtlVector<int32_t>
    m_hViewmodelAttachment = 0x1578 # CHandle<CBaseAnimGraph>
    m_iOldTeam = 0x157C # int32_t
    m_bAttachmentDirty = 0x1580 # bool
    m_nUnloadedModelIndex = 0x1584 # int32_t
    m_iNumOwnerValidationRetries = 0x1588 # int32_t
    m_hOldProvidee = 0x1598 # CHandle<C_BaseEntity>
    m_vecAttachedModels = 0x15A0 # CUtlVector<C_EconEntity::AttachedModelData_t>

class C_EconEntity_AttachedModelData_t:
    m_iModelDisplayFlags = 0x0 # int32_t

class C_EconItemView: # IEconItemInterface
    m_bInventoryImageRgbaRequested = 0x60 # bool
    m_bInventoryImageTriedCache = 0x61 # bool
    m_nInventoryImageRgbaWidth = 0x80 # int32_t
    m_nInventoryImageRgbaHeight = 0x84 # int32_t
    m_szCurrentLoadCachedFileName = 0x88 # char[260]
    m_bRestoreCustomMaterialAfterPrecache = 0x1B8 # bool
    m_iItemDefinitionIndex = 0x1BA # uint16_t
    m_iEntityQuality = 0x1BC # int32_t
    m_iEntityLevel = 0x1C0 # uint32_t
    m_iItemID = 0x1C8 # uint64_t
    m_iItemIDHigh = 0x1D0 # uint32_t
    m_iItemIDLow = 0x1D4 # uint32_t
    m_iAccountID = 0x1D8 # uint32_t
    m_iInventoryPosition = 0x1DC # uint32_t
    m_bInitialized = 0x1E8 # bool
    m_bDisallowSOC = 0x1E9 # bool
    m_bIsStoreItem = 0x1EA # bool
    m_bIsTradeItem = 0x1EB # bool
    m_iEntityQuantity = 0x1EC # int32_t
    m_iRarityOverride = 0x1F0 # int32_t
    m_iQualityOverride = 0x1F4 # int32_t
    m_unClientFlags = 0x1F8 # uint8_t
    m_unOverrideStyle = 0x1F9 # uint8_t
    m_AttributeList = 0x210 # CAttributeList
    m_NetworkedDynamicAttributes = 0x270 # CAttributeList
    m_szCustomName = 0x2D0 # char[161]
    m_szCustomNameOverride = 0x371 # char[161]
    m_bInitializedTags = 0x440 # bool

class C_EconWearable: # C_EconEntity
    m_nForceSkin = 0x15B8 # int32_t
    m_bAlwaysAllow = 0x15BC # bool

class C_EntityDissolve: # C_BaseModelEntity
    m_flStartTime = 0xCD8 # GameTime_t
    m_flFadeInStart = 0xCDC # float
    m_flFadeInLength = 0xCE0 # float
    m_flFadeOutModelStart = 0xCE4 # float
    m_flFadeOutModelLength = 0xCE8 # float
    m_flFadeOutStart = 0xCEC # float
    m_flFadeOutLength = 0xCF0 # float
    m_flNextSparkTime = 0xCF4 # GameTime_t
    m_nDissolveType = 0xCF8 # EntityDisolveType_t
    m_vDissolverOrigin = 0xCFC # Vector
    m_nMagnitude = 0xD08 # uint32_t
    m_bCoreExplode = 0xD0C # bool
    m_bLinkedToServerEnt = 0xD0D # bool

class C_EntityFlame: # C_BaseEntity
    m_hEntAttached = 0x550 # CHandle<C_BaseEntity>
    m_hOldAttached = 0x578 # CHandle<C_BaseEntity>
    m_bCheapEffect = 0x57C # bool

class C_EnvCombinedLightProbeVolume: # C_BaseEntity
    m_Color = 0x15A8 # Color
    m_flBrightness = 0x15AC # float
    m_hCubemapTexture = 0x15B0 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_bCustomCubemapTexture = 0x15B8 # bool
    m_hLightProbeTexture = 0x15C0 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hLightProbeDirectLightIndicesTexture = 0x15C8 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hLightProbeDirectLightScalarsTexture = 0x15D0 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hLightProbeDirectLightShadowsTexture = 0x15D8 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_vBoxMins = 0x15E0 # Vector
    m_vBoxMaxs = 0x15EC # Vector
    m_bMoveable = 0x15F8 # bool
    m_nHandshake = 0x15FC # int32_t
    m_nEnvCubeMapArrayIndex = 0x1600 # int32_t
    m_nPriority = 0x1604 # int32_t
    m_bStartDisabled = 0x1608 # bool
    m_flEdgeFadeDist = 0x160C # float
    m_vEdgeFadeDists = 0x1610 # Vector
    m_nLightProbeSizeX = 0x161C # int32_t
    m_nLightProbeSizeY = 0x1620 # int32_t
    m_nLightProbeSizeZ = 0x1624 # int32_t
    m_nLightProbeAtlasX = 0x1628 # int32_t
    m_nLightProbeAtlasY = 0x162C # int32_t
    m_nLightProbeAtlasZ = 0x1630 # int32_t
    m_bEnabled = 0x1649 # bool

class C_EnvCubemap: # C_BaseEntity
    m_hCubemapTexture = 0x5D0 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_bCustomCubemapTexture = 0x5D8 # bool
    m_flInfluenceRadius = 0x5DC # float
    m_vBoxProjectMins = 0x5E0 # Vector
    m_vBoxProjectMaxs = 0x5EC # Vector
    m_bMoveable = 0x5F8 # bool
    m_nHandshake = 0x5FC # int32_t
    m_nEnvCubeMapArrayIndex = 0x600 # int32_t
    m_nPriority = 0x604 # int32_t
    m_flEdgeFadeDist = 0x608 # float
    m_vEdgeFadeDists = 0x60C # Vector
    m_flDiffuseScale = 0x618 # float
    m_bStartDisabled = 0x61C # bool
    m_bDefaultEnvMap = 0x61D # bool
    m_bDefaultSpecEnvMap = 0x61E # bool
    m_bIndoorCubeMap = 0x61F # bool
    m_bCopyDiffuseFromDefaultCubemap = 0x620 # bool
    m_bEnabled = 0x630 # bool

class C_EnvCubemapBox: # C_EnvCubemap

class C_EnvCubemapFog: # C_BaseEntity
    m_flEndDistance = 0x550 # float
    m_flStartDistance = 0x554 # float
    m_flFogFalloffExponent = 0x558 # float
    m_bHeightFogEnabled = 0x55C # bool
    m_flFogHeightWidth = 0x560 # float
    m_flFogHeightEnd = 0x564 # float
    m_flFogHeightStart = 0x568 # float
    m_flFogHeightExponent = 0x56C # float
    m_flLODBias = 0x570 # float
    m_bActive = 0x574 # bool
    m_bStartDisabled = 0x575 # bool
    m_flFogMaxOpacity = 0x578 # float
    m_nCubemapSourceType = 0x57C # int32_t
    m_hSkyMaterial = 0x580 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_iszSkyEntity = 0x588 # CUtlSymbolLarge
    m_hFogCubemapTexture = 0x590 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_bHasHeightFogEnd = 0x598 # bool
    m_bFirstTime = 0x599 # bool

class C_EnvDecal: # C_BaseModelEntity
    m_hDecalMaterial = 0xCD0 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_flWidth = 0xCD8 # float
    m_flHeight = 0xCDC # float
    m_flDepth = 0xCE0 # float
    m_nRenderOrder = 0xCE4 # uint32_t
    m_bProjectOnWorld = 0xCE8 # bool
    m_bProjectOnCharacters = 0xCE9 # bool
    m_bProjectOnWater = 0xCEA # bool
    m_flDepthSortBias = 0xCEC # float

class C_EnvDetailController: # C_BaseEntity
    m_flFadeStartDist = 0x550 # float
    m_flFadeEndDist = 0x554 # float

class C_EnvLightProbeVolume: # C_BaseEntity
    m_hLightProbeTexture = 0x1528 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hLightProbeDirectLightIndicesTexture = 0x1530 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hLightProbeDirectLightScalarsTexture = 0x1538 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hLightProbeDirectLightShadowsTexture = 0x1540 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_vBoxMins = 0x1548 # Vector
    m_vBoxMaxs = 0x1554 # Vector
    m_bMoveable = 0x1560 # bool
    m_nHandshake = 0x1564 # int32_t
    m_nPriority = 0x1568 # int32_t
    m_bStartDisabled = 0x156C # bool
    m_nLightProbeSizeX = 0x1570 # int32_t
    m_nLightProbeSizeY = 0x1574 # int32_t
    m_nLightProbeSizeZ = 0x1578 # int32_t
    m_nLightProbeAtlasX = 0x157C # int32_t
    m_nLightProbeAtlasY = 0x1580 # int32_t
    m_nLightProbeAtlasZ = 0x1584 # int32_t
    m_bEnabled = 0x1591 # bool

class C_EnvParticleGlow: # C_ParticleSystem
    m_flAlphaScale = 0x1280 # float
    m_flRadiusScale = 0x1284 # float
    m_flSelfIllumScale = 0x1288 # float
    m_ColorTint = 0x128C # Color
    m_hTextureOverride = 0x1290 # CStrongHandle<InfoForResourceTypeCTextureBase>

class C_EnvProjectedTexture: # C_ModelPointEntity

class C_EnvScreenOverlay: # C_PointEntity
    m_iszOverlayNames = 0x550 # CUtlSymbolLarge[10]
    m_flOverlayTimes = 0x5A0 # float[10]
    m_flStartTime = 0x5C8 # GameTime_t
    m_iDesiredOverlay = 0x5CC # int32_t
    m_bIsActive = 0x5D0 # bool
    m_bWasActive = 0x5D1 # bool
    m_iCachedDesiredOverlay = 0x5D4 # int32_t
    m_iCurrentOverlay = 0x5D8 # int32_t
    m_flCurrentOverlayTime = 0x5DC # GameTime_t

class C_EnvSky: # C_BaseModelEntity
    m_hSkyMaterial = 0xCD0 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_hSkyMaterialLightingOnly = 0xCD8 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_bStartDisabled = 0xCE0 # bool
    m_vTintColor = 0xCE1 # Color
    m_vTintColorLightingOnly = 0xCE5 # Color
    m_flBrightnessScale = 0xCEC # float
    m_nFogType = 0xCF0 # int32_t
    m_flFogMinStart = 0xCF4 # float
    m_flFogMinEnd = 0xCF8 # float
    m_flFogMaxStart = 0xCFC # float
    m_flFogMaxEnd = 0xD00 # float
    m_bEnabled = 0xD04 # bool

class C_EnvVolumetricFogController: # C_BaseEntity
    m_flScattering = 0x550 # float
    m_flAnisotropy = 0x554 # float
    m_flFadeSpeed = 0x558 # float
    m_flDrawDistance = 0x55C # float
    m_flFadeInStart = 0x560 # float
    m_flFadeInEnd = 0x564 # float
    m_flIndirectStrength = 0x568 # float
    m_nIndirectTextureDimX = 0x56C # int32_t
    m_nIndirectTextureDimY = 0x570 # int32_t
    m_nIndirectTextureDimZ = 0x574 # int32_t
    m_vBoxMins = 0x578 # Vector
    m_vBoxMaxs = 0x584 # Vector
    m_bActive = 0x590 # bool
    m_flStartAnisoTime = 0x594 # GameTime_t
    m_flStartScatterTime = 0x598 # GameTime_t
    m_flStartDrawDistanceTime = 0x59C # GameTime_t
    m_flStartAnisotropy = 0x5A0 # float
    m_flStartScattering = 0x5A4 # float
    m_flStartDrawDistance = 0x5A8 # float
    m_flDefaultAnisotropy = 0x5AC # float
    m_flDefaultScattering = 0x5B0 # float
    m_flDefaultDrawDistance = 0x5B4 # float
    m_bStartDisabled = 0x5B8 # bool
    m_bEnableIndirect = 0x5B9 # bool
    m_bIsMaster = 0x5BA # bool
    m_hFogIndirectTexture = 0x5C0 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_nForceRefreshCount = 0x5C8 # int32_t
    m_bFirstTime = 0x5CC # bool

class C_EnvVolumetricFogVolume: # C_BaseEntity
    m_bActive = 0x550 # bool
    m_vBoxMins = 0x554 # Vector
    m_vBoxMaxs = 0x560 # Vector
    m_bStartDisabled = 0x56C # bool
    m_flStrength = 0x570 # float
    m_nFalloffShape = 0x574 # int32_t
    m_flFalloffExponent = 0x578 # float

class C_EnvWind: # C_BaseEntity
    m_EnvWindShared = 0x550 # C_EnvWindShared

class C_EnvWindClientside: # C_BaseEntity
    m_EnvWindShared = 0x550 # C_EnvWindShared

class C_EnvWindShared:
    m_flStartTime = 0x8 # GameTime_t
    m_iWindSeed = 0xC # uint32_t
    m_iMinWind = 0x10 # uint16_t
    m_iMaxWind = 0x12 # uint16_t
    m_windRadius = 0x14 # int32_t
    m_iMinGust = 0x18 # uint16_t
    m_iMaxGust = 0x1A # uint16_t
    m_flMinGustDelay = 0x1C # float
    m_flMaxGustDelay = 0x20 # float
    m_flGustDuration = 0x24 # float
    m_iGustDirChange = 0x28 # uint16_t
    m_location = 0x2C # Vector
    m_iszGustSound = 0x38 # int32_t
    m_iWindDir = 0x3C # int32_t
    m_flWindSpeed = 0x40 # float
    m_currentWindVector = 0x44 # Vector
    m_CurrentSwayVector = 0x50 # Vector
    m_PrevSwayVector = 0x5C # Vector
    m_iInitialWindDir = 0x68 # uint16_t
    m_flInitialWindSpeed = 0x6C # float
    m_flVariationTime = 0x70 # GameTime_t
    m_flSwayTime = 0x74 # GameTime_t
    m_flSimTime = 0x78 # GameTime_t
    m_flSwitchTime = 0x7C # GameTime_t
    m_flAveWindSpeed = 0x80 # float
    m_bGusting = 0x84 # bool
    m_flWindAngleVariation = 0x88 # float
    m_flWindSpeedVariation = 0x8C # float
    m_iEntIndex = 0x90 # CEntityIndex

class C_EnvWindShared_WindAveEvent_t:
    m_flStartWindSpeed = 0x0 # float
    m_flAveWindSpeed = 0x4 # float

class C_EnvWindShared_WindVariationEvent_t:
    m_flWindAngleVariation = 0x0 # float
    m_flWindSpeedVariation = 0x4 # float

class C_FireCrackerBlast: # C_Inferno

class C_FireFromAboveSprite: # C_Sprite

class C_FireSmoke: # C_BaseFire
    m_nFlameModelIndex = 0x560 # int32_t
    m_nFlameFromAboveModelIndex = 0x564 # int32_t
    m_flScaleRegister = 0x568 # float
    m_flScaleStart = 0x56C # float
    m_flScaleEnd = 0x570 # float
    m_flScaleTimeStart = 0x574 # GameTime_t
    m_flScaleTimeEnd = 0x578 # GameTime_t
    m_flChildFlameSpread = 0x57C # float
    m_flClipPerc = 0x590 # float
    m_bClipTested = 0x594 # bool
    m_bFadingOut = 0x595 # bool
    m_tParticleSpawn = 0x598 # TimedEvent
    m_pFireOverlay = 0x5A0 # CFireOverlay*

class C_FireSprite: # C_Sprite
    m_vecMoveDir = 0xE00 # Vector
    m_bFadeFromAbove = 0xE0C # bool

class C_Fish: # CBaseAnimGraph
    m_pos = 0xED8 # Vector
    m_vel = 0xEE4 # Vector
    m_angles = 0xEF0 # QAngle
    m_localLifeState = 0xEFC # int32_t
    m_deathDepth = 0xF00 # float
    m_deathAngle = 0xF04 # float
    m_buoyancy = 0xF08 # float
    m_wiggleTimer = 0xF10 # CountdownTimer
    m_wigglePhase = 0xF28 # float
    m_wiggleRate = 0xF2C # float
    m_actualPos = 0xF30 # Vector
    m_actualAngles = 0xF3C # QAngle
    m_poolOrigin = 0xF48 # Vector
    m_waterLevel = 0xF54 # float
    m_gotUpdate = 0xF58 # bool
    m_x = 0xF5C # float
    m_y = 0xF60 # float
    m_z = 0xF64 # float
    m_angle = 0xF68 # float
    m_errorHistory = 0xF6C # float[20]
    m_errorHistoryIndex = 0xFBC # int32_t
    m_errorHistoryCount = 0xFC0 # int32_t
    m_averageError = 0xFC4 # float

class C_Fists: # C_CSWeaponBase
    m_bPlayingUninterruptableAct = 0x1A70 # bool
    m_nUninterruptableActivity = 0x1A74 # PlayerAnimEvent_t

class C_Flashbang: # C_BaseCSGrenade

class C_FlashbangProjectile: # C_BaseCSGrenadeProjectile

class C_FogController: # C_BaseEntity
    m_fog = 0x550 # fogparams_t
    m_bUseAngles = 0x5B8 # bool
    m_iChangedVariables = 0x5BC # int32_t

class C_FootstepControl: # C_BaseTrigger
    m_source = 0xCD8 # CUtlSymbolLarge
    m_destination = 0xCE0 # CUtlSymbolLarge

class C_FuncBrush: # C_BaseModelEntity

class C_FuncConveyor: # C_BaseModelEntity
    m_vecMoveDirEntitySpace = 0xCD8 # Vector
    m_flTargetSpeed = 0xCE4 # float
    m_nTransitionStartTick = 0xCE8 # GameTick_t
    m_nTransitionDurationTicks = 0xCEC # int32_t
    m_flTransitionStartSpeed = 0xCF0 # float
    m_hConveyorModels = 0xCF8 # C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
    m_flCurrentConveyorOffset = 0xD10 # float
    m_flCurrentConveyorSpeed = 0xD14 # float

class C_FuncElectrifiedVolume: # C_FuncBrush
    m_nAmbientEffect = 0xCD0 # ParticleIndex_t
    m_EffectName = 0xCD8 # CUtlSymbolLarge
    m_bState = 0xCE0 # bool

class C_FuncLadder: # C_BaseModelEntity
    m_vecLadderDir = 0xCD0 # Vector
    m_Dismounts = 0xCE0 # CUtlVector<CHandle<C_InfoLadderDismount>>
    m_vecLocalTop = 0xCF8 # Vector
    m_vecPlayerMountPositionTop = 0xD04 # Vector
    m_vecPlayerMountPositionBottom = 0xD10 # Vector
    m_flAutoRideSpeed = 0xD1C # float
    m_bDisabled = 0xD20 # bool
    m_bFakeLadder = 0xD21 # bool
    m_bHasSlack = 0xD22 # bool

class C_FuncMonitor: # C_FuncBrush
    m_targetCamera = 0xCD0 # CUtlString
    m_nResolutionEnum = 0xCD8 # int32_t
    m_bRenderShadows = 0xCDC # bool
    m_bUseUniqueColorTarget = 0xCDD # bool
    m_brushModelName = 0xCE0 # CUtlString
    m_hTargetCamera = 0xCE8 # CHandle<C_BaseEntity>
    m_bEnabled = 0xCEC # bool
    m_bDraw3DSkybox = 0xCED # bool

class C_FuncMoveLinear: # C_BaseToggle

class C_FuncRotating: # C_BaseModelEntity

class C_FuncTrackTrain: # C_BaseModelEntity
    m_nLongAxis = 0xCD0 # int32_t
    m_flRadius = 0xCD4 # float
    m_flLineLength = 0xCD8 # float

class C_GameRules:

class C_GameRulesProxy: # C_BaseEntity

class C_GlobalLight: # C_BaseEntity
    m_WindClothForceHandle = 0xA10 # uint16_t

class C_GradientFog: # C_BaseEntity
    m_hGradientFogTexture = 0x550 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_flFogStartDistance = 0x558 # float
    m_flFogEndDistance = 0x55C # float
    m_bHeightFogEnabled = 0x560 # bool
    m_flFogStartHeight = 0x564 # float
    m_flFogEndHeight = 0x568 # float
    m_flFarZ = 0x56C # float
    m_flFogMaxOpacity = 0x570 # float
    m_flFogFalloffExponent = 0x574 # float
    m_flFogVerticalExponent = 0x578 # float
    m_fogColor = 0x57C # Color
    m_flFogStrength = 0x580 # float
    m_flFadeTime = 0x584 # float
    m_bStartDisabled = 0x588 # bool
    m_bIsEnabled = 0x589 # bool
    m_bGradientFogNeedsTextures = 0x58A # bool

class C_HEGrenade: # C_BaseCSGrenade

class C_HEGrenadeProjectile: # C_BaseCSGrenadeProjectile

class C_HandleTest: # C_BaseEntity
    m_Handle = 0x550 # CHandle<C_BaseEntity>
    m_bSendHandle = 0x554 # bool

class C_Hostage: # C_BaseCombatCharacter
    m_entitySpottedState = 0x1100 # EntitySpottedState_t
    m_leader = 0x1118 # CHandle<C_BaseEntity>
    m_reuseTimer = 0x1120 # CountdownTimer
    m_vel = 0x1138 # Vector
    m_isRescued = 0x1144 # bool
    m_jumpedThisFrame = 0x1145 # bool
    m_nHostageState = 0x1148 # int32_t
    m_bHandsHaveBeenCut = 0x114C # bool
    m_hHostageGrabber = 0x1150 # CHandle<C_CSPlayerPawn>
    m_fLastGrabTime = 0x1154 # GameTime_t
    m_vecGrabbedPos = 0x1158 # Vector
    m_flRescueStartTime = 0x1164 # GameTime_t
    m_flGrabSuccessTime = 0x1168 # GameTime_t
    m_flDropStartTime = 0x116C # GameTime_t
    m_flDeadOrRescuedTime = 0x1170 # GameTime_t
    m_blinkTimer = 0x1178 # CountdownTimer
    m_lookAt = 0x1190 # Vector
    m_lookAroundTimer = 0x11A0 # CountdownTimer
    m_isInit = 0x11B8 # bool
    m_eyeAttachment = 0x11B9 # AttachmentHandle_t
    m_chestAttachment = 0x11BA # AttachmentHandle_t
    m_pPredictionOwner = 0x11C0 # CBasePlayerController*
    m_fNewestAlphaThinkTime = 0x11C8 # GameTime_t

class C_HostageCarriableProp: # CBaseAnimGraph

class C_IncendiaryGrenade: # C_MolotovGrenade

class C_Inferno: # C_BaseModelEntity
    m_nfxFireDamageEffect = 0xD10 # ParticleIndex_t
    m_firePositions = 0xD14 # Vector[64]
    m_fireParentPositions = 0x1014 # Vector[64]
    m_bFireIsBurning = 0x1314 # bool[64]
    m_BurnNormal = 0x1354 # Vector[64]
    m_fireCount = 0x1654 # int32_t
    m_nInfernoType = 0x1658 # int32_t
    m_nFireLifetime = 0x165C # float
    m_bInPostEffectTime = 0x1660 # bool
    m_lastFireCount = 0x1664 # int32_t
    m_nFireEffectTickBegin = 0x1668 # int32_t
    m_drawableCount = 0x8270 # int32_t
    m_blosCheck = 0x8274 # bool
    m_nlosperiod = 0x8278 # int32_t
    m_maxFireHalfWidth = 0x827C # float
    m_maxFireHeight = 0x8280 # float
    m_minBounds = 0x8284 # Vector
    m_maxBounds = 0x8290 # Vector
    m_flLastGrassBurnThink = 0x829C # float

class C_InfoInstructorHintHostageRescueZone: # C_PointEntity

class C_InfoLadderDismount: # C_BaseEntity

class C_InfoVisibilityBox: # C_BaseEntity
    m_nMode = 0x554 # int32_t
    m_vBoxSize = 0x558 # Vector
    m_bEnabled = 0x564 # bool

class C_IronSightController:
    m_bIronSightAvailable = 0x10 # bool
    m_flIronSightAmount = 0x14 # float
    m_flIronSightAmountGained = 0x18 # float
    m_flIronSightAmountBiased = 0x1C # float
    m_flIronSightAmount_Interpolated = 0x20 # float
    m_flIronSightAmountGained_Interpolated = 0x24 # float
    m_flIronSightAmountBiased_Interpolated = 0x28 # float
    m_flInterpolationLastUpdated = 0x2C # float
    m_angDeltaAverage = 0x30 # QAngle[8]
    m_angViewLast = 0x90 # QAngle
    m_vecDotCoords = 0x9C # Vector2D
    m_flDotBlur = 0xA4 # float
    m_flSpeedRatio = 0xA8 # float

class C_Item: # C_EconEntity
    m_bShouldGlow = 0x15B8 # bool
    m_pReticleHintTextName = 0x15B9 # char[256]

class C_ItemDogtags: # C_Item
    m_OwningPlayer = 0x16C0 # CHandle<C_CSPlayerPawn>
    m_KillingPlayer = 0x16C4 # CHandle<C_CSPlayerPawn>

class C_Item_Healthshot: # C_WeaponBaseItem

class C_Knife: # C_CSWeaponBase

class C_LightDirectionalEntity: # C_LightEntity

class C_LightEntity: # C_BaseModelEntity
    m_CLightComponent = 0xCD0 # CLightComponent*

class C_LightEnvironmentEntity: # C_LightDirectionalEntity

class C_LightGlow: # C_BaseModelEntity
    m_nHorizontalSize = 0xCD0 # uint32_t
    m_nVerticalSize = 0xCD4 # uint32_t
    m_nMinDist = 0xCD8 # uint32_t
    m_nMaxDist = 0xCDC # uint32_t
    m_nOuterMaxDist = 0xCE0 # uint32_t
    m_flGlowProxySize = 0xCE4 # float
    m_flHDRColorScale = 0xCE8 # float
    m_Glow = 0xCF0 # C_LightGlowOverlay

class C_LightGlowOverlay: # CGlowOverlay
    m_vecOrigin = 0xD0 # Vector
    m_vecDirection = 0xDC # Vector
    m_nMinDist = 0xE8 # int32_t
    m_nMaxDist = 0xEC # int32_t
    m_nOuterMaxDist = 0xF0 # int32_t
    m_bOneSided = 0xF4 # bool
    m_bModulateByDot = 0xF5 # bool

class C_LightOrthoEntity: # C_LightEntity

class C_LightSpotEntity: # C_LightEntity

class C_LocalTempEntity: # CBaseAnimGraph
    flags = 0xEF0 # int32_t
    die = 0xEF4 # GameTime_t
    m_flFrameMax = 0xEF8 # float
    x = 0xEFC # float
    y = 0xF00 # float
    fadeSpeed = 0xF04 # float
    bounceFactor = 0xF08 # float
    hitSound = 0xF0C # int32_t
    priority = 0xF10 # int32_t
    tentOffset = 0xF14 # Vector
    m_vecTempEntAngVelocity = 0xF20 # QAngle
    tempent_renderamt = 0xF2C # int32_t
    m_vecNormal = 0xF30 # Vector
    m_flSpriteScale = 0xF3C # float
    m_nFlickerFrame = 0xF40 # int32_t
    m_flFrameRate = 0xF44 # float
    m_flFrame = 0xF48 # float
    m_pszImpactEffect = 0xF50 # char*
    m_pszParticleEffect = 0xF58 # char*
    m_bParticleCollision = 0xF60 # bool
    m_iLastCollisionFrame = 0xF64 # int32_t
    m_vLastCollisionOrigin = 0xF68 # Vector
    m_vecTempEntVelocity = 0xF74 # Vector
    m_vecPrevAbsOrigin = 0xF80 # Vector
    m_vecTempEntAcceleration = 0xF8C # Vector

class C_MapPreviewParticleSystem: # C_ParticleSystem

class C_MapVetoPickController: # C_BaseEntity
    m_nDraftType = 0x560 # int32_t
    m_nTeamWinningCoinToss = 0x564 # int32_t
    m_nTeamWithFirstChoice = 0x568 # int32_t[64]
    m_nVoteMapIdsList = 0x668 # int32_t[7]
    m_nAccountIDs = 0x684 # int32_t[64]
    m_nMapId0 = 0x784 # int32_t[64]
    m_nMapId1 = 0x884 # int32_t[64]
    m_nMapId2 = 0x984 # int32_t[64]
    m_nMapId3 = 0xA84 # int32_t[64]
    m_nMapId4 = 0xB84 # int32_t[64]
    m_nMapId5 = 0xC84 # int32_t[64]
    m_nStartingSide0 = 0xD84 # int32_t[64]
    m_nCurrentPhase = 0xE84 # int32_t
    m_nPhaseStartTick = 0xE88 # int32_t
    m_nPhaseDurationTicks = 0xE8C # int32_t
    m_nPostDataUpdateTick = 0xE90 # int32_t
    m_bDisabledHud = 0xE94 # bool

class C_Melee: # C_CSWeaponBase

class C_ModelPointEntity: # C_BaseModelEntity

class C_MolotovGrenade: # C_BaseCSGrenade

class C_MolotovProjectile: # C_BaseCSGrenadeProjectile
    m_bIsIncGrenade = 0x1158 # bool

class C_Multimeter: # CBaseAnimGraph
    m_hTargetC4 = 0xEE0 # CHandle<C_PlantedC4>

class C_MultiplayRules: # C_GameRules

class C_NetTestBaseCombatCharacter: # C_BaseCombatCharacter

class C_OmniLight: # C_BarnLight
    m_flInnerAngle = 0xF18 # float
    m_flOuterAngle = 0xF1C # float
    m_bShowLight = 0xF20 # bool

class C_ParticleSystem: # C_BaseModelEntity
    m_szSnapshotFileName = 0xCD0 # char[512]
    m_bActive = 0xED0 # bool
    m_bFrozen = 0xED1 # bool
    m_flFreezeTransitionDuration = 0xED4 # float
    m_nStopType = 0xED8 # int32_t
    m_bAnimateDuringGameplayPause = 0xEDC # bool
    m_iEffectIndex = 0xEE0 # CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_flStartTime = 0xEE8 # GameTime_t
    m_flPreSimTime = 0xEEC # float
    m_vServerControlPoints = 0xEF0 # Vector[4]
    m_iServerControlPointAssignments = 0xF20 # uint8_t[4]
    m_hControlPointEnts = 0xF24 # CHandle<C_BaseEntity>[64]
    m_bNoSave = 0x1024 # bool
    m_bNoFreeze = 0x1025 # bool
    m_bNoRamp = 0x1026 # bool
    m_bStartActive = 0x1027 # bool
    m_iszEffectName = 0x1028 # CUtlSymbolLarge
    m_iszControlPointNames = 0x1030 # CUtlSymbolLarge[64]
    m_nDataCP = 0x1230 # int32_t
    m_vecDataCPValue = 0x1234 # Vector
    m_nTintCP = 0x1240 # int32_t
    m_clrTint = 0x1244 # Color
    m_bOldActive = 0x1268 # bool
    m_bOldFrozen = 0x1269 # bool

class C_PathParticleRope: # C_BaseEntity
    m_bStartActive = 0x550 # bool
    m_flMaxSimulationTime = 0x554 # float
    m_iszEffectName = 0x558 # CUtlSymbolLarge
    m_PathNodes_Name = 0x560 # CUtlVector<CUtlSymbolLarge>
    m_flParticleSpacing = 0x578 # float
    m_flSlack = 0x57C # float
    m_flRadius = 0x580 # float
    m_ColorTint = 0x584 # Color
    m_nEffectState = 0x588 # int32_t
    m_iEffectIndex = 0x590 # CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_PathNodes_Position = 0x598 # C_NetworkUtlVectorBase<Vector>
    m_PathNodes_TangentIn = 0x5B0 # C_NetworkUtlVectorBase<Vector>
    m_PathNodes_TangentOut = 0x5C8 # C_NetworkUtlVectorBase<Vector>
    m_PathNodes_Color = 0x5E0 # C_NetworkUtlVectorBase<Vector>
    m_PathNodes_PinEnabled = 0x5F8 # C_NetworkUtlVectorBase<bool>
    m_PathNodes_RadiusScale = 0x610 # C_NetworkUtlVectorBase<float>

class C_PathParticleRopeAlias_path_particle_rope_clientside: # C_PathParticleRope

class C_PhysBox: # C_Breakable

class C_PhysMagnet: # CBaseAnimGraph
    m_aAttachedObjectsFromServer = 0xED8 # CUtlVector<int32_t>
    m_aAttachedObjects = 0xEF0 # CUtlVector<CHandle<C_BaseEntity>>

class C_PhysPropClientside: # C_BreakableProp
    m_flTouchDelta = 0x1028 # GameTime_t
    m_fDeathTime = 0x102C # GameTime_t
    m_impactEnergyScale = 0x1030 # float
    m_inertiaScale = 0x1034 # float
    m_flDmgModBullet = 0x1038 # float
    m_flDmgModClub = 0x103C # float
    m_flDmgModExplosive = 0x1040 # float
    m_flDmgModFire = 0x1044 # float
    m_iszPhysicsDamageTableName = 0x1048 # CUtlSymbolLarge
    m_iszBasePropData = 0x1050 # CUtlSymbolLarge
    m_iInteractions = 0x1058 # int32_t
    m_bHasBreakPiecesOrCommands = 0x105C # bool
    m_vecDamagePosition = 0x1060 # Vector
    m_vecDamageDirection = 0x106C # Vector
    m_nDamageType = 0x1078 # int32_t

class C_PhysicsProp: # C_BreakableProp
    m_bAwake = 0x1028 # bool

class C_PhysicsPropMultiplayer: # C_PhysicsProp

class C_PickUpModelSlerper: # CBaseAnimGraph
    m_hPlayerParent = 0xED8 # CHandle<C_BaseEntity>
    m_hItem = 0xEDC # CHandle<C_BaseEntity>
    m_flTimePickedUp = 0xEE0 # float
    m_angOriginal = 0xEE4 # QAngle
    m_vecPosOriginal = 0xEF0 # Vector
    m_angRandom = 0xF00 # QAngle

class C_PlantedC4: # CBaseAnimGraph
    m_bBombTicking = 0xED8 # bool
    m_nBombSite = 0xEDC # int32_t
    m_nSourceSoundscapeHash = 0xEE0 # int32_t
    m_entitySpottedState = 0xEE8 # EntitySpottedState_t
    m_flNextGlow = 0xF00 # GameTime_t
    m_flNextBeep = 0xF04 # GameTime_t
    m_flC4Blow = 0xF08 # GameTime_t
    m_bCannotBeDefused = 0xF0C # bool
    m_bHasExploded = 0xF0D # bool
    m_flTimerLength = 0xF10 # float
    m_bBeingDefused = 0xF14 # bool
    m_bTriggerWarning = 0xF18 # float
    m_bExplodeWarning = 0xF1C # float
    m_bC4Activated = 0xF20 # bool
    m_bTenSecWarning = 0xF21 # bool
    m_flDefuseLength = 0xF24 # float
    m_flDefuseCountDown = 0xF28 # GameTime_t
    m_bBombDefused = 0xF2C # bool
    m_hBombDefuser = 0xF30 # CHandle<C_CSPlayerPawn>
    m_hControlPanel = 0xF34 # CHandle<C_BaseEntity>
    m_hDefuserMultimeter = 0xF38 # CHandle<C_Multimeter>
    m_flNextRadarFlashTime = 0xF3C # GameTime_t
    m_bRadarFlash = 0xF40 # bool
    m_pBombDefuser = 0xF44 # CHandle<C_CSPlayerPawn>
    m_fLastDefuseTime = 0xF48 # GameTime_t
    m_pPredictionOwner = 0xF50 # CBasePlayerController*
    m_vecC4ExplodeSpectatePos = 0xF58 # Vector
    m_vecC4ExplodeSpectateAng = 0xF64 # QAngle
    m_flC4ExplodeSpectateDuration = 0xF70 # float

class C_PlayerPing: # C_BaseEntity
    m_hPlayer = 0x580 # CHandle<C_CSPlayerPawn>
    m_hPingedEntity = 0x584 # CHandle<C_BaseEntity>
    m_iType = 0x588 # int32_t
    m_bUrgent = 0x58C # bool
    m_szPlaceName = 0x58D # char[18]

class C_PlayerSprayDecal: # C_ModelPointEntity
    m_nUniqueID = 0xCD0 # int32_t
    m_unAccountID = 0xCD4 # uint32_t
    m_unTraceID = 0xCD8 # uint32_t
    m_rtGcTime = 0xCDC # uint32_t
    m_vecEndPos = 0xCE0 # Vector
    m_vecStart = 0xCEC # Vector
    m_vecLeft = 0xCF8 # Vector
    m_vecNormal = 0xD04 # Vector
    m_nPlayer = 0xD10 # int32_t
    m_nEntity = 0xD14 # int32_t
    m_nHitbox = 0xD18 # int32_t
    m_flCreationTime = 0xD1C # float
    m_nTintID = 0xD20 # int32_t
    m_nVersion = 0xD24 # uint8_t
    m_ubSignature = 0xD25 # uint8_t[128]
    m_SprayRenderHelper = 0xDB0 # CPlayerSprayDecalRenderHelper

class C_PlayerVisibility: # C_BaseEntity
    m_flVisibilityStrength = 0x550 # float
    m_flFogDistanceMultiplier = 0x554 # float
    m_flFogMaxDensityMultiplier = 0x558 # float
    m_flFadeTime = 0x55C # float
    m_bStartDisabled = 0x560 # bool
    m_bIsEnabled = 0x561 # bool

class C_PointCamera: # C_BaseEntity
    m_FOV = 0x550 # float
    m_Resolution = 0x554 # float
    m_bFogEnable = 0x558 # bool
    m_FogColor = 0x559 # Color
    m_flFogStart = 0x560 # float
    m_flFogEnd = 0x564 # float
    m_flFogMaxDensity = 0x568 # float
    m_bActive = 0x56C # bool
    m_bUseScreenAspectRatio = 0x56D # bool
    m_flAspectRatio = 0x570 # float
    m_bNoSky = 0x574 # bool
    m_fBrightness = 0x578 # float
    m_flZFar = 0x57C # float
    m_flZNear = 0x580 # float
    m_bCanHLTVUse = 0x584 # bool
    m_bDofEnabled = 0x585 # bool
    m_flDofNearBlurry = 0x588 # float
    m_flDofNearCrisp = 0x58C # float
    m_flDofFarCrisp = 0x590 # float
    m_flDofFarBlurry = 0x594 # float
    m_flDofTiltToGround = 0x598 # float
    m_TargetFOV = 0x59C # float
    m_DegreesPerSecond = 0x5A0 # float
    m_bIsOn = 0x5A4 # bool
    m_pNext = 0x5A8 # C_PointCamera*

class C_PointCameraVFOV: # C_PointCamera
    m_flVerticalFOV = 0x5B0 # float

class C_PointClientUIDialog: # C_BaseClientUIEntity
    m_hActivator = 0xD00 # CHandle<C_BaseEntity>
    m_bStartEnabled = 0xD04 # bool

class C_PointClientUIHUD: # C_BaseClientUIEntity
    m_bCheckCSSClasses = 0xD08 # bool
    m_bIgnoreInput = 0xE90 # bool
    m_flWidth = 0xE94 # float
    m_flHeight = 0xE98 # float
    m_flDPI = 0xE9C # float
    m_flInteractDistance = 0xEA0 # float
    m_flDepthOffset = 0xEA4 # float
    m_unOwnerContext = 0xEA8 # uint32_t
    m_unHorizontalAlign = 0xEAC # uint32_t
    m_unVerticalAlign = 0xEB0 # uint32_t
    m_unOrientation = 0xEB4 # uint32_t
    m_bAllowInteractionFromAllSceneWorlds = 0xEB8 # bool
    m_vecCSSClasses = 0xEC0 # C_NetworkUtlVectorBase<CUtlSymbolLarge>

class C_PointClientUIWorldPanel: # C_BaseClientUIEntity
    m_bForceRecreateNextUpdate = 0xD08 # bool
    m_bMoveViewToPlayerNextThink = 0xD09 # bool
    m_bCheckCSSClasses = 0xD0A # bool
    m_anchorDeltaTransform = 0xD10 # CTransform
    m_pOffScreenIndicator = 0xEB0 # CPointOffScreenIndicatorUi*
    m_bIgnoreInput = 0xED8 # bool
    m_bLit = 0xED9 # bool
    m_bFollowPlayerAcrossTeleport = 0xEDA # bool
    m_flWidth = 0xEDC # float
    m_flHeight = 0xEE0 # float
    m_flDPI = 0xEE4 # float
    m_flInteractDistance = 0xEE8 # float
    m_flDepthOffset = 0xEEC # float
    m_unOwnerContext = 0xEF0 # uint32_t
    m_unHorizontalAlign = 0xEF4 # uint32_t
    m_unVerticalAlign = 0xEF8 # uint32_t
    m_unOrientation = 0xEFC # uint32_t
    m_bAllowInteractionFromAllSceneWorlds = 0xF00 # bool
    m_vecCSSClasses = 0xF08 # C_NetworkUtlVectorBase<CUtlSymbolLarge>
    m_bOpaque = 0xF20 # bool
    m_bNoDepth = 0xF21 # bool
    m_bRenderBackface = 0xF22 # bool
    m_bUseOffScreenIndicator = 0xF23 # bool
    m_bExcludeFromSaveGames = 0xF24 # bool
    m_bGrabbable = 0xF25 # bool
    m_bOnlyRenderToTexture = 0xF26 # bool
    m_bDisableMipGen = 0xF27 # bool
    m_nExplicitImageLayout = 0xF28 # int32_t

class C_PointClientUIWorldTextPanel: # C_PointClientUIWorldPanel
    m_messageText = 0xF30 # char[512]

class C_PointCommentaryNode: # CBaseAnimGraph
    m_bActive = 0xEE0 # bool
    m_bWasActive = 0xEE1 # bool
    m_flEndTime = 0xEE4 # GameTime_t
    m_flStartTime = 0xEE8 # GameTime_t
    m_flStartTimeInCommentary = 0xEEC # float
    m_iszCommentaryFile = 0xEF0 # CUtlSymbolLarge
    m_iszTitle = 0xEF8 # CUtlSymbolLarge
    m_iszSpeakers = 0xF00 # CUtlSymbolLarge
    m_iNodeNumber = 0xF08 # int32_t
    m_iNodeNumberMax = 0xF0C # int32_t
    m_bListenedTo = 0xF10 # bool
    m_hViewPosition = 0xF20 # CHandle<C_BaseEntity>
    m_bRestartAfterRestore = 0xF24 # bool

class C_PointEntity: # C_BaseEntity

class C_PointValueRemapper: # C_BaseEntity
    m_bDisabled = 0x550 # bool
    m_bDisabledOld = 0x551 # bool
    m_bUpdateOnClient = 0x552 # bool
    m_nInputType = 0x554 # ValueRemapperInputType_t
    m_hRemapLineStart = 0x558 # CHandle<C_BaseEntity>
    m_hRemapLineEnd = 0x55C # CHandle<C_BaseEntity>
    m_flMaximumChangePerSecond = 0x560 # float
    m_flDisengageDistance = 0x564 # float
    m_flEngageDistance = 0x568 # float
    m_bRequiresUseKey = 0x56C # bool
    m_nOutputType = 0x570 # ValueRemapperOutputType_t
    m_hOutputEntities = 0x578 # C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
    m_nHapticsType = 0x590 # ValueRemapperHapticsType_t
    m_nMomentumType = 0x594 # ValueRemapperMomentumType_t
    m_flMomentumModifier = 0x598 # float
    m_flSnapValue = 0x59C # float
    m_flCurrentMomentum = 0x5A0 # float
    m_nRatchetType = 0x5A4 # ValueRemapperRatchetType_t
    m_flRatchetOffset = 0x5A8 # float
    m_flInputOffset = 0x5AC # float
    m_bEngaged = 0x5B0 # bool
    m_bFirstUpdate = 0x5B1 # bool
    m_flPreviousValue = 0x5B4 # float
    m_flPreviousUpdateTickTime = 0x5B8 # GameTime_t
    m_vecPreviousTestPoint = 0x5BC # Vector

class C_PointWorldText: # C_ModelPointEntity
    m_bForceRecreateNextUpdate = 0xCD8 # bool
    m_messageText = 0xCE8 # char[512]
    m_FontName = 0xEE8 # char[64]
    m_bEnabled = 0xF28 # bool
    m_bFullbright = 0xF29 # bool
    m_flWorldUnitsPerPx = 0xF2C # float
    m_flFontSize = 0xF30 # float
    m_flDepthOffset = 0xF34 # float
    m_Color = 0xF38 # Color
    m_nJustifyHorizontal = 0xF3C # PointWorldTextJustifyHorizontal_t
    m_nJustifyVertical = 0xF40 # PointWorldTextJustifyVertical_t
    m_nReorientMode = 0xF44 # PointWorldTextReorientMode_t

class C_PostProcessingVolume: # C_BaseTrigger
    m_hPostSettings = 0xCE8 # CStrongHandle<InfoForResourceTypeCPostProcessingResource>
    m_flFadeDuration = 0xCF0 # float
    m_flMinLogExposure = 0xCF4 # float
    m_flMaxLogExposure = 0xCF8 # float
    m_flMinExposure = 0xCFC # float
    m_flMaxExposure = 0xD00 # float
    m_flExposureCompensation = 0xD04 # float
    m_flExposureFadeSpeedUp = 0xD08 # float
    m_flExposureFadeSpeedDown = 0xD0C # float
    m_flTonemapEVSmoothingRange = 0xD10 # float
    m_bMaster = 0xD14 # bool
    m_bExposureControl = 0xD15 # bool
    m_flRate = 0xD18 # float
    m_flTonemapPercentTarget = 0xD1C # float
    m_flTonemapPercentBrightPixels = 0xD20 # float
    m_flTonemapMinAvgLum = 0xD24 # float

class C_Precipitation: # C_BaseTrigger
    m_flDensity = 0xCD8 # float
    m_flParticleInnerDist = 0xCE8 # float
    m_pParticleDef = 0xCF0 # char*
    m_tParticlePrecipTraceTimer = 0xD18 # TimedEvent[1]
    m_bActiveParticlePrecipEmitter = 0xD20 # bool[1]
    m_bParticlePrecipInitialized = 0xD21 # bool
    m_bHasSimulatedSinceLastSceneObjectUpdate = 0xD22 # bool
    m_nAvailableSheetSequencesMaxIndex = 0xD24 # int32_t

class C_PrecipitationBlocker: # C_BaseModelEntity

class C_PredictedViewModel: # C_BaseViewModel
    m_vPredictedLagOffset = 0xF40 # Vector
    m_targetSpeed = 0xF4C # QAngle
    m_currentSpeed = 0xF58 # QAngle

class C_PropDoorRotating: # C_BasePropDoor

class C_RagdollManager: # C_BaseEntity
    m_iCurrentMaxRagdollCount = 0x550 # int8_t

class C_RagdollProp: # CBaseAnimGraph
    m_ragPos = 0xEE0 # C_NetworkUtlVectorBase<Vector>
    m_ragAngles = 0xEF8 # C_NetworkUtlVectorBase<QAngle>
    m_flBlendWeight = 0xF10 # float
    m_hRagdollSource = 0xF14 # CHandle<C_BaseEntity>
    m_iEyeAttachment = 0xF18 # AttachmentHandle_t
    m_flBlendWeightCurrent = 0xF1C # float
    m_parentPhysicsBoneIndices = 0xF20 # CUtlVector<int32_t>
    m_worldSpaceBoneComputationOrder = 0xF38 # CUtlVector<int32_t>

class C_RagdollPropAttached: # C_RagdollProp
    m_boneIndexAttached = 0xF50 # uint32_t
    m_ragdollAttachedObjectIndex = 0xF54 # uint32_t
    m_attachmentPointBoneSpace = 0xF58 # Vector
    m_attachmentPointRagdollSpace = 0xF64 # Vector
    m_vecOffset = 0xF70 # Vector
    m_parentTime = 0xF7C # float
    m_bHasParent = 0xF80 # bool

class C_RectLight: # C_BarnLight
    m_bShowLight = 0xF18 # bool

class C_RetakeGameRules:
    m_nMatchSeed = 0xF8 # int32_t
    m_bBlockersPresent = 0xFC # bool
    m_bRoundInProgress = 0xFD # bool
    m_iFirstSecondHalfRound = 0x100 # int32_t
    m_iBombSite = 0x104 # int32_t

class C_RopeKeyframe: # C_BaseModelEntity
    m_LinksTouchingSomething = 0xCD8 # CBitVec<10>
    m_nLinksTouchingSomething = 0xCDC # int32_t
    m_bApplyWind = 0xCE0 # bool
    m_fPrevLockedPoints = 0xCE4 # int32_t
    m_iForcePointMoveCounter = 0xCE8 # int32_t
    m_bPrevEndPointPos = 0xCEC # bool[2]
    m_vPrevEndPointPos = 0xCF0 # Vector[2]
    m_flCurScroll = 0xD08 # float
    m_flScrollSpeed = 0xD0C # float
    m_RopeFlags = 0xD10 # uint16_t
    m_iRopeMaterialModelIndex = 0xD18 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_LightValues = 0xF90 # Vector[10]
    m_nSegments = 0x1008 # uint8_t
    m_hStartPoint = 0x100C # CHandle<C_BaseEntity>
    m_hEndPoint = 0x1010 # CHandle<C_BaseEntity>
    m_iStartAttachment = 0x1014 # AttachmentHandle_t
    m_iEndAttachment = 0x1015 # AttachmentHandle_t
    m_Subdiv = 0x1016 # uint8_t
    m_RopeLength = 0x1018 # int16_t
    m_Slack = 0x101A # int16_t
    m_TextureScale = 0x101C # float
    m_fLockedPoints = 0x1020 # uint8_t
    m_nChangeCount = 0x1021 # uint8_t
    m_Width = 0x1024 # float
    m_PhysicsDelegate = 0x1028 # C_RopeKeyframe::CPhysicsDelegate
    m_hMaterial = 0x1038 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_TextureHeight = 0x1040 # int32_t
    m_vecImpulse = 0x1044 # Vector
    m_vecPreviousImpulse = 0x1050 # Vector
    m_flCurrentGustTimer = 0x105C # float
    m_flCurrentGustLifetime = 0x1060 # float
    m_flTimeToNextGust = 0x1064 # float
    m_vWindDir = 0x1068 # Vector
    m_vColorMod = 0x1074 # Vector
    m_vCachedEndPointAttachmentPos = 0x1080 # Vector[2]
    m_vCachedEndPointAttachmentAngle = 0x1098 # QAngle[2]
    m_bConstrainBetweenEndpoints = 0x10B0 # bool
    m_bEndPointAttachmentPositionsDirty = 0x0 # bitfield:1
    m_bEndPointAttachmentAnglesDirty = 0x0 # bitfield:1
    m_bNewDataThisFrame = 0x0 # bitfield:1
    m_bPhysicsInitted = 0x0 # bitfield:1

class C_RopeKeyframe_CPhysicsDelegate:
    m_pKeyframe = 0x8 # C_RopeKeyframe*

class C_SceneEntity: # C_PointEntity
    m_bIsPlayingBack = 0x558 # bool
    m_bPaused = 0x559 # bool
    m_bMultiplayer = 0x55A # bool
    m_bAutogenerated = 0x55B # bool
    m_flForceClientTime = 0x55C # float
    m_nSceneStringIndex = 0x560 # uint16_t
    m_bClientOnly = 0x562 # bool
    m_hOwner = 0x564 # CHandle<C_BaseFlex>
    m_hActorList = 0x568 # C_NetworkUtlVectorBase<CHandle<C_BaseFlex>>
    m_bWasPlaying = 0x580 # bool
    m_QueuedEvents = 0x590 # CUtlVector<C_SceneEntity::QueuedEvents_t>
    m_flCurrentTime = 0x5A8 # float

class C_SceneEntity_QueuedEvents_t:
    starttime = 0x0 # float

class C_SensorGrenade: # C_BaseCSGrenade

class C_SensorGrenadeProjectile: # C_BaseCSGrenadeProjectile

class C_ShatterGlassShardPhysics: # C_PhysicsProp
    m_ShardDesc = 0x1038 # shard_model_desc_t

class C_SingleplayRules: # C_GameRules

class C_SkyCamera: # C_BaseEntity
    m_skyboxData = 0x550 # sky3dparams_t
    m_skyboxSlotToken = 0x5E0 # CUtlStringToken
    m_bUseAngles = 0x5E4 # bool
    m_pNext = 0x5E8 # C_SkyCamera*

class C_SmokeGrenade: # C_BaseCSGrenade

class C_SmokeGrenadeProjectile: # C_BaseCSGrenadeProjectile
    m_nSmokeEffectTickBegin = 0x1160 # int32_t
    m_bDidSmokeEffect = 0x1164 # bool
    m_nRandomSeed = 0x1168 # int32_t
    m_vSmokeColor = 0x116C # Vector
    m_vSmokeDetonationPos = 0x1178 # Vector
    m_VoxelFrameData = 0x1188 # CUtlVector<uint8_t>
    m_bSmokeVolumeDataReceived = 0x11A0 # bool
    m_bSmokeEffectSpawned = 0x11A1 # bool

class C_SoundAreaEntityBase: # C_BaseEntity
    m_bDisabled = 0x550 # bool
    m_bWasEnabled = 0x558 # bool
    m_iszSoundAreaType = 0x560 # CUtlSymbolLarge
    m_vPos = 0x568 # Vector

class C_SoundAreaEntityOrientedBox: # C_SoundAreaEntityBase
    m_vMin = 0x578 # Vector
    m_vMax = 0x584 # Vector

class C_SoundAreaEntitySphere: # C_SoundAreaEntityBase
    m_flRadius = 0x578 # float

class C_SoundOpvarSetAABBEntity: # C_SoundOpvarSetPointEntity

class C_SoundOpvarSetAutoRoomEntity: # C_SoundOpvarSetPointEntity

class C_SoundOpvarSetOBBEntity: # C_SoundOpvarSetAABBEntity

class C_SoundOpvarSetOBBWindEntity: # C_SoundOpvarSetPointBase

class C_SoundOpvarSetPathCornerEntity: # C_SoundOpvarSetPointEntity

class C_SoundOpvarSetPointBase: # C_BaseEntity
    m_iszStackName = 0x550 # CUtlSymbolLarge
    m_iszOperatorName = 0x558 # CUtlSymbolLarge
    m_iszOpvarName = 0x560 # CUtlSymbolLarge
    m_iOpvarIndex = 0x568 # int32_t
    m_bUseAutoCompare = 0x56C # bool

class C_SoundOpvarSetPointEntity: # C_SoundOpvarSetPointBase

class C_SpotlightEnd: # C_BaseModelEntity
    m_flLightScale = 0xCD0 # float
    m_Radius = 0xCD4 # float

class C_Sprite: # C_BaseModelEntity
    m_hSpriteMaterial = 0xCE8 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_hAttachedToEntity = 0xCF0 # CHandle<C_BaseEntity>
    m_nAttachment = 0xCF4 # AttachmentHandle_t
    m_flSpriteFramerate = 0xCF8 # float
    m_flFrame = 0xCFC # float
    m_flDieTime = 0xD00 # GameTime_t
    m_nBrightness = 0xD10 # uint32_t
    m_flBrightnessDuration = 0xD14 # float
    m_flSpriteScale = 0xD18 # float
    m_flScaleDuration = 0xD1C # float
    m_bWorldSpaceScale = 0xD20 # bool
    m_flGlowProxySize = 0xD24 # float
    m_flHDRColorScale = 0xD28 # float
    m_flLastTime = 0xD2C # GameTime_t
    m_flMaxFrame = 0xD30 # float
    m_flStartScale = 0xD34 # float
    m_flDestScale = 0xD38 # float
    m_flScaleTimeStart = 0xD3C # GameTime_t
    m_nStartBrightness = 0xD40 # int32_t
    m_nDestBrightness = 0xD44 # int32_t
    m_flBrightnessTimeStart = 0xD48 # GameTime_t
    m_hOldSpriteMaterial = 0xD50 # CWeakHandle<InfoForResourceTypeIMaterial2>
    m_nSpriteWidth = 0xDF8 # int32_t
    m_nSpriteHeight = 0xDFC # int32_t

class C_SpriteOriented: # C_Sprite

class C_Sun: # C_BaseModelEntity
    m_fxSSSunFlareEffectIndex = 0xCD0 # ParticleIndex_t
    m_fxSunFlareEffectIndex = 0xCD4 # ParticleIndex_t
    m_fdistNormalize = 0xCD8 # float
    m_vSunPos = 0xCDC # Vector
    m_vDirection = 0xCE8 # Vector
    m_iszEffectName = 0xCF8 # CUtlSymbolLarge
    m_iszSSEffectName = 0xD00 # CUtlSymbolLarge
    m_clrOverlay = 0xD08 # Color
    m_bOn = 0xD0C # bool
    m_bmaxColor = 0xD0D # bool
    m_flSize = 0xD10 # float
    m_flHazeScale = 0xD14 # float
    m_flRotation = 0xD18 # float
    m_flHDRColorScale = 0xD1C # float
    m_flAlphaHaze = 0xD20 # float
    m_flAlphaScale = 0xD24 # float
    m_flAlphaHdr = 0xD28 # float
    m_flFarZScale = 0xD2C # float

class C_SunGlowOverlay: # CGlowOverlay
    m_bModulateByDot = 0xD0 # bool

class C_Team: # C_BaseEntity
    m_aPlayerControllers = 0x550 # C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
    m_aPlayers = 0x568 # C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
    m_iScore = 0x580 # int32_t
    m_szTeamname = 0x584 # char[129]

class C_TeamRoundTimer: # C_BaseEntity
    m_bTimerPaused = 0x550 # bool
    m_flTimeRemaining = 0x554 # float
    m_flTimerEndTime = 0x558 # GameTime_t
    m_bIsDisabled = 0x55C # bool
    m_bShowInHUD = 0x55D # bool
    m_nTimerLength = 0x560 # int32_t
    m_nTimerInitialLength = 0x564 # int32_t
    m_nTimerMaxLength = 0x568 # int32_t
    m_bAutoCountdown = 0x56C # bool
    m_nSetupTimeLength = 0x570 # int32_t
    m_nState = 0x574 # int32_t
    m_bStartPaused = 0x578 # bool
    m_bInCaptureWatchState = 0x579 # bool
    m_flTotalTime = 0x57C # float
    m_bStopWatchTimer = 0x580 # bool
    m_bFireFinished = 0x581 # bool
    m_bFire5MinRemain = 0x582 # bool
    m_bFire4MinRemain = 0x583 # bool
    m_bFire3MinRemain = 0x584 # bool
    m_bFire2MinRemain = 0x585 # bool
    m_bFire1MinRemain = 0x586 # bool
    m_bFire30SecRemain = 0x587 # bool
    m_bFire10SecRemain = 0x588 # bool
    m_bFire5SecRemain = 0x589 # bool
    m_bFire4SecRemain = 0x58A # bool
    m_bFire3SecRemain = 0x58B # bool
    m_bFire2SecRemain = 0x58C # bool
    m_bFire1SecRemain = 0x58D # bool
    m_nOldTimerLength = 0x590 # int32_t
    m_nOldTimerState = 0x594 # int32_t

class C_TeamplayRules: # C_MultiplayRules

class C_TextureBasedAnimatable: # C_BaseModelEntity
    m_bLoop = 0xCD0 # bool
    m_flFPS = 0xCD4 # float
    m_hPositionKeys = 0xCD8 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hRotationKeys = 0xCE0 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_vAnimationBoundsMin = 0xCE8 # Vector
    m_vAnimationBoundsMax = 0xCF4 # Vector
    m_flStartTime = 0xD00 # float
    m_flStartFrame = 0xD04 # float

class C_TintController: # C_BaseEntity

class C_TonemapController2: # C_BaseEntity
    m_flAutoExposureMin = 0x550 # float
    m_flAutoExposureMax = 0x554 # float
    m_flTonemapPercentTarget = 0x558 # float
    m_flTonemapPercentBrightPixels = 0x55C # float
    m_flTonemapMinAvgLum = 0x560 # float
    m_flExposureAdaptationSpeedUp = 0x564 # float
    m_flExposureAdaptationSpeedDown = 0x568 # float
    m_flTonemapEVSmoothingRange = 0x56C # float

class C_TonemapController2Alias_env_tonemap_controller2: # C_TonemapController2

class C_TriggerBuoyancy: # C_BaseTrigger
    m_BuoyancyHelper = 0xCD8 # CBuoyancyHelper
    m_flFluidDensity = 0xCF8 # float

class C_TriggerLerpObject: # C_BaseTrigger

class C_TriggerMultiple: # C_BaseTrigger

class C_TriggerPhysics: # C_BaseTrigger
    m_gravityScale = 0xCD8 # float
    m_linearLimit = 0xCDC # float
    m_linearDamping = 0xCE0 # float
    m_angularLimit = 0xCE4 # float
    m_angularDamping = 0xCE8 # float
    m_linearForce = 0xCEC # float
    m_flFrequency = 0xCF0 # float
    m_flDampingRatio = 0xCF4 # float
    m_vecLinearForcePointAt = 0xCF8 # Vector
    m_bCollapseToForcePoint = 0xD04 # bool
    m_vecLinearForcePointAtWorld = 0xD08 # Vector
    m_vecLinearForceDirection = 0xD14 # Vector
    m_bConvertToDebrisWhenPossible = 0xD20 # bool

class C_TriggerVolume: # C_BaseModelEntity

class C_ViewmodelAttachmentModel: # CBaseAnimGraph

class C_ViewmodelWeapon: # CBaseAnimGraph
    m_worldModel = 0xED8 # char*

class C_VoteController: # C_BaseEntity
    m_iActiveIssueIndex = 0x560 # int32_t
    m_iOnlyTeamToVote = 0x564 # int32_t
    m_nVoteOptionCount = 0x568 # int32_t[5]
    m_nPotentialVotes = 0x57C # int32_t
    m_bVotesDirty = 0x580 # bool
    m_bTypeDirty = 0x581 # bool
    m_bIsYesNoVote = 0x582 # bool

class C_WaterBullet: # CBaseAnimGraph

class C_WeaponAWP: # C_CSWeaponBaseGun

class C_WeaponAug: # C_CSWeaponBaseGun

class C_WeaponBaseItem: # C_CSWeaponBase
    m_SequenceCompleteTimer = 0x1A70 # CountdownTimer
    m_bRedraw = 0x1A88 # bool

class C_WeaponBizon: # C_CSWeaponBaseGun

class C_WeaponCZ75a: # C_CSWeaponBaseGun

class C_WeaponElite: # C_CSWeaponBaseGun

class C_WeaponFamas: # C_CSWeaponBaseGun

class C_WeaponFiveSeven: # C_CSWeaponBaseGun

class C_WeaponG3SG1: # C_CSWeaponBaseGun

class C_WeaponGalilAR: # C_CSWeaponBaseGun

class C_WeaponGlock: # C_CSWeaponBaseGun

class C_WeaponHKP2000: # C_CSWeaponBaseGun

class C_WeaponM249: # C_CSWeaponBaseGun

class C_WeaponM4A1: # C_CSWeaponBaseGun

class C_WeaponM4A1Silencer: # C_CSWeaponBaseGun

class C_WeaponMAC10: # C_CSWeaponBaseGun

class C_WeaponMP5SD: # C_CSWeaponBaseGun

class C_WeaponMP7: # C_CSWeaponBaseGun

class C_WeaponMP9: # C_CSWeaponBaseGun

class C_WeaponMag7: # C_CSWeaponBaseGun

class C_WeaponNOVA: # C_CSWeaponBase

class C_WeaponNegev: # C_CSWeaponBaseGun

class C_WeaponP250: # C_CSWeaponBaseGun

class C_WeaponP90: # C_CSWeaponBaseGun

class C_WeaponRevolver: # C_CSWeaponBaseGun

class C_WeaponSCAR20: # C_CSWeaponBaseGun

class C_WeaponSG556: # C_CSWeaponBaseGun

class C_WeaponSSG08: # C_CSWeaponBaseGun

class C_WeaponSawedoff: # C_CSWeaponBase

class C_WeaponShield: # C_CSWeaponBaseGun
    m_flDisplayHealth = 0x1A90 # float

class C_WeaponTaser: # C_CSWeaponBaseGun
    m_fFireTime = 0x1A90 # GameTime_t

class C_WeaponTec9: # C_CSWeaponBaseGun

class C_WeaponUMP45: # C_CSWeaponBaseGun

class C_WeaponUSPSilencer: # C_CSWeaponBaseGun

class C_WeaponXM1014: # C_CSWeaponBase

class C_World: # C_BaseModelEntity

class C_WorldModelGloves: # CBaseAnimGraph

class C_WorldModelNametag: # CBaseAnimGraph

class C_WorldModelStattrak: # CBaseAnimGraph

class C_fogplayerparams_t:
    m_hCtrl = 0x8 # CHandle<C_FogController>
    m_flTransitionTime = 0xC # float
    m_OldColor = 0x10 # Color
    m_flOldStart = 0x14 # float
    m_flOldEnd = 0x18 # float
    m_flOldMaxDensity = 0x1C # float
    m_flOldHDRColorScale = 0x20 # float
    m_flOldFarZ = 0x24 # float
    m_NewColor = 0x28 # Color
    m_flNewStart = 0x2C # float
    m_flNewEnd = 0x30 # float
    m_flNewMaxDensity = 0x34 # float
    m_flNewHDRColorScale = 0x38 # float
    m_flNewFarZ = 0x3C # float

class CompMatMutatorCondition_t:
    m_nMutatorCondition = 0x0 # CompMatPropertyMutatorConditionType_t
    m_strMutatorConditionContainerName = 0x8 # CUtlString
    m_strMutatorConditionContainerVarName = 0x10 # CUtlString
    m_strMutatorConditionContainerVarValue = 0x18 # CUtlString
    m_bPassWhenTrue = 0x20 # bool

class CompMatPropertyMutator_t:
    m_bEnabled = 0x0 # bool
    m_nMutatorCommandType = 0x4 # CompMatPropertyMutatorType_t
    m_strInitWith_Container = 0x8 # CUtlString
    m_strCopyProperty_InputContainerSrc = 0x10 # CUtlString
    m_strCopyProperty_InputContainerProperty = 0x18 # CUtlString
    m_strCopyProperty_TargetProperty = 0x20 # CUtlString
    m_strRandomRollInputVars_SeedInputVar = 0x28 # CUtlString
    m_vecRandomRollInputVars_InputVarsToRoll = 0x30 # CUtlVector<CUtlString>
    m_strCopyMatchingKeys_InputContainerSrc = 0x48 # CUtlString
    m_strCopyKeysWithSuffix_InputContainerSrc = 0x50 # CUtlString
    m_strCopyKeysWithSuffix_FindSuffix = 0x58 # CUtlString
    m_strCopyKeysWithSuffix_ReplaceSuffix = 0x60 # CUtlString
    m_nSetValue_Value = 0x68 # CompositeMaterialInputLooseVariable_t
    m_strGenerateTexture_TargetParam = 0x2D8 # CUtlString
    m_strGenerateTexture_InitialContainer = 0x2E0 # CUtlString
    m_nResolution = 0x2E8 # int32_t
    m_bIsScratchTarget = 0x2EC # bool
    m_bSplatDebugInfo = 0x2ED # bool
    m_bCaptureInRenderDoc = 0x2EE # bool
    m_vecTexGenInstructions = 0x2F0 # CUtlVector<CompMatPropertyMutator_t>
    m_vecConditionalMutators = 0x308 # CUtlVector<CompMatPropertyMutator_t>
    m_strPopInputQueue_Container = 0x320 # CUtlString
    m_strDrawText_InputContainerSrc = 0x328 # CUtlString
    m_strDrawText_InputContainerProperty = 0x330 # CUtlString
    m_vecDrawText_Position = 0x338 # Vector2D
    m_colDrawText_Color = 0x340 # Color
    m_strDrawText_Font = 0x348 # CUtlString
    m_vecConditions = 0x350 # CUtlVector<CompMatMutatorCondition_t>

class CompositeMaterialAssemblyProcedure_t:
    m_vecCompMatIncludes = 0x0 # CUtlVector<CResourceName>
    m_vecMatchFilters = 0x18 # CUtlVector<CompositeMaterialMatchFilter_t>
    m_vecCompositeInputContainers = 0x30 # CUtlVector<CompositeMaterialInputContainer_t>
    m_vecPropertyMutators = 0x48 # CUtlVector<CompMatPropertyMutator_t>

class CompositeMaterialEditorPoint_t:
    m_ModelName = 0x0 # CResourceName
    m_nSequenceIndex = 0xE0 # int32_t
    m_flCycle = 0xE4 # float
    m_KVModelStateChoices = 0xE8 # KeyValues3
    m_bEnableChildModel = 0xF8 # bool
    m_ChildModelName = 0x100 # CResourceName
    m_vecCompositeMaterialAssemblyProcedures = 0x1E0 # CUtlVector<CompositeMaterialAssemblyProcedure_t>
    m_vecCompositeMaterials = 0x1F8 # CUtlVector<CompositeMaterial_t>

class CompositeMaterialInputContainer_t:
    m_bEnabled = 0x0 # bool
    m_nCompositeMaterialInputContainerSourceType = 0x4 # CompositeMaterialInputContainerSourceType_t
    m_strSpecificContainerMaterial = 0x8 # CResourceName
    m_strAttrName = 0xE8 # CUtlString
    m_strAlias = 0xF0 # CUtlString
    m_vecLooseVariables = 0xF8 # CUtlVector<CompositeMaterialInputLooseVariable_t>
    m_strAttrNameForVar = 0x110 # CUtlString
    m_bExposeExternally = 0x118 # bool

class CompositeMaterialInputLooseVariable_t:
    m_strName = 0x0 # CUtlString
    m_bExposeExternally = 0x8 # bool
    m_strExposedFriendlyName = 0x10 # CUtlString
    m_strExposedFriendlyGroupName = 0x18 # CUtlString
    m_bExposedVariableIsFixedRange = 0x20 # bool
    m_strExposedVisibleWhenTrue = 0x28 # CUtlString
    m_strExposedHiddenWhenTrue = 0x30 # CUtlString
    m_nVariableType = 0x38 # CompositeMaterialInputLooseVariableType_t
    m_bValueBoolean = 0x3C # bool
    m_nValueIntX = 0x40 # int32_t
    m_nValueIntY = 0x44 # int32_t
    m_nValueIntZ = 0x48 # int32_t
    m_nValueIntW = 0x4C # int32_t
    m_bHasFloatBounds = 0x50 # bool
    m_flValueFloatX = 0x54 # float
    m_flValueFloatX_Min = 0x58 # float
    m_flValueFloatX_Max = 0x5C # float
    m_flValueFloatY = 0x60 # float
    m_flValueFloatY_Min = 0x64 # float
    m_flValueFloatY_Max = 0x68 # float
    m_flValueFloatZ = 0x6C # float
    m_flValueFloatZ_Min = 0x70 # float
    m_flValueFloatZ_Max = 0x74 # float
    m_flValueFloatW = 0x78 # float
    m_flValueFloatW_Min = 0x7C # float
    m_flValueFloatW_Max = 0x80 # float
    m_cValueColor4 = 0x84 # Color
    m_nValueSystemVar = 0x88 # CompositeMaterialVarSystemVar_t
    m_strResourceMaterial = 0x90 # CResourceName
    m_strTextureContentAssetPath = 0x170 # CUtlString
    m_strTextureRuntimeResourcePath = 0x178 # CResourceName
    m_strTextureCompilationVtexTemplate = 0x258 # CUtlString
    m_nTextureType = 0x260 # CompositeMaterialInputTextureType_t
    m_strString = 0x268 # CUtlString

class CompositeMaterialMatchFilter_t:
    m_nCompositeMaterialMatchFilterType = 0x0 # CompositeMaterialMatchFilterType_t
    m_strMatchFilter = 0x8 # CUtlString
    m_strMatchValue = 0x10 # CUtlString
    m_bPassWhenTrue = 0x18 # bool

class CompositeMaterial_t:
    m_TargetKVs = 0x8 # KeyValues3
    m_PreGenerationKVs = 0x18 # KeyValues3
    m_FinalKVs = 0x28 # KeyValues3
    m_vecGeneratedTextures = 0x40 # CUtlVector<GeneratedTextureHandle_t>

class CountdownTimer:
    m_duration = 0x8 # float
    m_timestamp = 0xC # GameTime_t
    m_timescale = 0x10 # float
    m_nWorldGroupId = 0x14 # WorldGroupId_t

class EngineCountdownTimer:
    m_duration = 0x8 # float
    m_timestamp = 0xC # float
    m_timescale = 0x10 # float

class EntityRenderAttribute_t:
    m_ID = 0x30 # CUtlStringToken
    m_Values = 0x34 # Vector4D

class EntitySpottedState_t:
    m_bSpotted = 0x8 # bool
    m_bSpottedByMask = 0xC # uint32_t[2]

class GeneratedTextureHandle_t:
    m_strBitmapName = 0x0 # CUtlString

class IClientAlphaProperty:

class IntervalTimer:
    m_timestamp = 0x8 # GameTime_t
    m_nWorldGroupId = 0xC # WorldGroupId_t

class PhysicsRagdollPose_t:
    __m_pChainEntity = 0x8 # CNetworkVarChainer
    m_Transforms = 0x30 # C_NetworkUtlVectorBase<CTransform>
    m_hOwner = 0x48 # CHandle<C_BaseEntity>
    m_bDirty = 0x68 # bool

class SellbackPurchaseEntry_t:
    m_unDefIdx = 0x30 # uint16_t
    m_nCost = 0x34 # int32_t
    m_nPrevArmor = 0x38 # int32_t
    m_bPrevHelmet = 0x3C # bool
    m_hItem = 0x40 # CEntityHandle

class SequenceHistory_t:
    m_hSequence = 0x0 # HSequence
    m_flSeqStartTime = 0x4 # GameTime_t
    m_flSeqFixedCycle = 0x8 # float
    m_nSeqLoopMode = 0xC # AnimLoopMode_t
    m_flPlaybackRate = 0x10 # float
    m_flCyclesPerSecond = 0x14 # float

class ServerAuthoritativeWeaponSlot_t:
    unClass = 0x28 # uint16_t
    unSlot = 0x2A # uint16_t
    unItemDefIdx = 0x2C # uint16_t

class TimedEvent:
    m_TimeBetweenEvents = 0x0 # float
    m_fNextEvent = 0x4 # float

class VPhysicsCollisionAttribute_t:
    m_nInteractsAs = 0x8 # uint64_t
    m_nInteractsWith = 0x10 # uint64_t
    m_nInteractsExclude = 0x18 # uint64_t
    m_nEntityId = 0x20 # uint32_t
    m_nOwnerId = 0x24 # uint32_t
    m_nHierarchyId = 0x28 # uint16_t
    m_nCollisionGroup = 0x2A # uint8_t
    m_nCollisionFunctionMask = 0x2B # uint8_t

class ViewAngleServerChange_t:
    nType = 0x30 # FixAngleSet_t
    qAngle = 0x34 # QAngle
    nIndex = 0x40 # uint32_t

class WeaponPurchaseCount_t:
    m_nItemDefIndex = 0x30 # uint16_t
    m_nCount = 0x32 # uint16_t

class WeaponPurchaseTracker_t:
    m_weaponPurchases = 0x8 # C_UtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>

class audioparams_t:
    localSound = 0x8 # Vector[8]
    soundscapeIndex = 0x68 # int32_t
    localBits = 0x6C # uint8_t
    soundscapeEntityListIndex = 0x70 # int32_t
    soundEventHash = 0x74 # uint32_t

class fogparams_t:
    dirPrimary = 0x8 # Vector
    colorPrimary = 0x14 # Color
    colorSecondary = 0x18 # Color
    colorPrimaryLerpTo = 0x1C # Color
    colorSecondaryLerpTo = 0x20 # Color
    start = 0x24 # float
    end = 0x28 # float
    farz = 0x2C # float
    maxdensity = 0x30 # float
    exponent = 0x34 # float
    HDRColorScale = 0x38 # float
    skyboxFogFactor = 0x3C # float
    skyboxFogFactorLerpTo = 0x40 # float
    startLerpTo = 0x44 # float
    endLerpTo = 0x48 # float
    maxdensityLerpTo = 0x4C # float
    lerptime = 0x50 # GameTime_t
    duration = 0x54 # float
    blendtobackground = 0x58 # float
    scattering = 0x5C # float
    locallightscale = 0x60 # float
    enable = 0x64 # bool
    blend = 0x65 # bool
    m_bNoReflectionFog = 0x66 # bool
    m_bPadding = 0x67 # bool

class shard_model_desc_t:
    m_nModelID = 0x8 # int32_t
    m_hMaterial = 0x10 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_solid = 0x18 # ShardSolid_t
    m_ShatterPanelMode = 0x19 # ShatterPanelMode
    m_vecPanelSize = 0x1C # Vector2D
    m_vecStressPositionA = 0x24 # Vector2D
    m_vecStressPositionB = 0x2C # Vector2D
    m_vecPanelVertices = 0x38 # C_NetworkUtlVectorBase<Vector2D>
    m_flGlassHalfThickness = 0x50 # float
    m_bHasParent = 0x54 # bool
    m_bParentFrozen = 0x55 # bool
    m_SurfacePropStringToken = 0x58 # CUtlStringToken

class sky3dparams_t:
    scale = 0x8 # int16_t
    origin = 0xC # Vector
    bClip3DSkyBoxNearToWorldFar = 0x18 # bool
    flClip3DSkyBoxNearToWorldFarOffset = 0x1C # float
    fog = 0x20 # fogparams_t
    m_nWorldGroupID = 0x88 # WorldGroupId_t
