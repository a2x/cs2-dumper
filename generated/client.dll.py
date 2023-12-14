'''
Created using https://github.com/a2x/cs2-dumper
Thu, 14 Dec 2023 11:58:27 +0000
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
    m_OwnerOnlyPredNetBoolVariables = 0xE0 # C_NetworkUtlVectorBase<uint32_t>
    m_OwnerOnlyPredNetByteVariables = 0xF8 # C_NetworkUtlVectorBase<uint8_t>
    m_OwnerOnlyPredNetUInt16Variables = 0x110 # C_NetworkUtlVectorBase<uint16_t>
    m_OwnerOnlyPredNetIntVariables = 0x128 # C_NetworkUtlVectorBase<int32_t>
    m_OwnerOnlyPredNetUInt32Variables = 0x140 # C_NetworkUtlVectorBase<uint32_t>
    m_OwnerOnlyPredNetUInt64Variables = 0x158 # C_NetworkUtlVectorBase<uint64_t>
    m_OwnerOnlyPredNetFloatVariables = 0x170 # C_NetworkUtlVectorBase<float>
    m_OwnerOnlyPredNetVectorVariables = 0x188 # C_NetworkUtlVectorBase<Vector>
    m_OwnerOnlyPredNetQuaternionVariables = 0x1A0 # C_NetworkUtlVectorBase<Quaternion>
    m_nBoolVariablesCount = 0x1B8 # int32_t
    m_nOwnerOnlyBoolVariablesCount = 0x1BC # int32_t
    m_nRandomSeedOffset = 0x1C0 # int32_t
    m_flLastTeleportTime = 0x1C4 # float

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
    m_bInitiallyPopulateInterpHistory = 0xCC0 # bool
    m_bShouldAnimateDuringGameplayPause = 0xCC1 # bool
    m_bSuppressAnimEventSounds = 0xCC3 # bool
    m_bAnimGraphUpdateEnabled = 0xCD0 # bool
    m_flMaxSlopeDistance = 0xCD4 # float
    m_vLastSlopeCheckPos = 0xCD8 # Vector
    m_vecForce = 0xCE8 # Vector
    m_nForceBone = 0xCF4 # int32_t
    m_pClientsideRagdoll = 0xCF8 # CBaseAnimGraph*
    m_bBuiltRagdoll = 0xD00 # bool
    m_pRagdollPose = 0xD18 # PhysicsRagdollPose_t*
    m_bClientRagdoll = 0xD20 # bool
    m_bHasAnimatedMaterialAttributes = 0xD30 # bool

class CBaseAnimGraphController: # CSkeletonAnimationController
    m_baseLayer = 0x18 # CNetworkedSequenceOperation
    m_animGraphNetworkedVars = 0x40 # CAnimGraphNetworkedVariables
    m_bSequenceFinished = 0x1320 # bool
    m_flLastEventCycle = 0x1324 # float
    m_flLastEventAnimTime = 0x1328 # float
    m_flPlaybackRate = 0x132C # CNetworkedQuantizedFloat
    m_flPrevAnimTime = 0x1334 # float
    m_bClientSideAnimation = 0x1338 # bool
    m_bNetworkedAnimationInputsChanged = 0x1339 # bool
    m_nPrevNewSequenceParity = 0x133A # uint8_t
    m_nPrevResetEventsParity = 0x133B # uint8_t
    m_nNewSequenceParity = 0x133C # int32_t
    m_nResetEventsParity = 0x1340 # int32_t
    m_nAnimLoopMode = 0x1344 # AnimLoopMode_t
    m_hAnimationUpdate = 0x13E4 # AnimationUpdateListHandle_t
    m_hLastAnimEventSequence = 0x13E8 # HSequence

class CBasePlayerController: # C_BaseEntity
    m_nFinalPredictedTick = 0x548 # int32_t
    m_CommandContext = 0x550 # C_CommandContext
    m_nInButtonsWhichAreToggles = 0x600 # uint64_t
    m_nTickBase = 0x608 # uint32_t
    m_hPawn = 0x60C # CHandle<C_BasePlayerPawn>
    m_hPredictedPawn = 0x610 # CHandle<C_BasePlayerPawn>
    m_nSplitScreenSlot = 0x614 # CSplitScreenSlot
    m_hSplitOwner = 0x618 # CHandle<CBasePlayerController>
    m_hSplitScreenPlayers = 0x620 # CUtlVector<CHandle<CBasePlayerController>>
    m_bIsHLTV = 0x638 # bool
    m_iConnected = 0x63C # PlayerConnectedState
    m_iszPlayerName = 0x640 # char[128]
    m_steamID = 0x6C8 # uint64_t
    m_bIsLocalPlayerController = 0x6D0 # bool
    m_iDesiredFOV = 0x6D4 # uint32_t

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
    m_bIsFullAuto = 0x10A # bool
    m_nNumBullets = 0x10C # int32_t
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
    m_aShootSounds = 0x218 # CUtlMap<WeaponSound_t,CSoundEventName>
    m_iSlot = 0x238 # int32_t
    m_iPosition = 0x23C # int32_t

class CBaseProp: # CBaseAnimGraph
    m_bModelOverrodeBlockLOS = 0xE80 # bool
    m_iShapeType = 0xE84 # int32_t
    m_bConformToCollisionBounds = 0xE88 # bool
    m_mPreferredCatchTransform = 0xE8C # matrix3x4_t

class CBodyComponent: # CEntityComponent
    m_pSceneNode = 0x8 # CGameSceneNode*
    __m_pChainEntity = 0x20 # CNetworkVarChainer

class CBodyComponentBaseAnimGraph: # CBodyComponentSkeletonInstance
    m_animationController = 0x480 # CBaseAnimGraphController
    __m_pChainEntity = 0x18C0 # CNetworkVarChainer

class CBodyComponentBaseModelEntity: # CBodyComponentSkeletonInstance
    __m_pChainEntity = 0x480 # CNetworkVarChainer

class CBodyComponentPoint: # CBodyComponent
    m_sceneNode = 0x50 # CGameSceneNode
    __m_pChainEntity = 0x1A0 # CNetworkVarChainer

class CBodyComponentSkeletonInstance: # CBodyComponent
    m_skeletonInstance = 0x50 # CSkeletonInstance
    __m_pChainEntity = 0x450 # CNetworkVarChainer

class CBombTarget: # C_BaseTrigger
    m_bBombPlantedHere = 0xCC8 # bool

class CBreachCharge: # C_CSWeaponBase

class CBreachChargeProjectile: # C_BaseGrenade

class CBumpMine: # C_CSWeaponBase

class CBumpMineProjectile: # C_BaseGrenade

class CBuoyancyHelper:
    m_flFluidDensity = 0x18 # float

class CCSGO_WingmanIntroCharacterPosition: # C_CSGO_TeamIntroCharacterPosition

class CCSGO_WingmanIntroCounterTerroristPosition: # CCSGO_WingmanIntroCharacterPosition

class CCSGO_WingmanIntroTerroristPosition: # CCSGO_WingmanIntroCharacterPosition

class CCSGameModeRules:
    __m_pChainEntity = 0x8 # CNetworkVarChainer

class CCSGameModeRules_Deathmatch: # CCSGameModeRules
    m_bFirstThink = 0x30 # bool
    m_bFirstThinkAfterConnected = 0x31 # bool
    m_flDMBonusStartTime = 0x34 # GameTime_t
    m_flDMBonusTimeLength = 0x38 # float
    m_nDMBonusWeaponLoadoutSlot = 0x3C # int16_t

class CCSGameModeRules_Noop: # CCSGameModeRules

class CCSGameModeRules_Scripted: # CCSGameModeRules

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
    m_pInGameMoneyServices = 0x700 # CCSPlayerController_InGameMoneyServices*
    m_pInventoryServices = 0x708 # CCSPlayerController_InventoryServices*
    m_pActionTrackingServices = 0x710 # CCSPlayerController_ActionTrackingServices*
    m_pDamageServices = 0x718 # CCSPlayerController_DamageServices*
    m_iPing = 0x720 # uint32_t
    m_bHasCommunicationAbuseMute = 0x724 # bool
    m_szCrosshairCodes = 0x728 # CUtlSymbolLarge
    m_iPendingTeamNum = 0x730 # uint8_t
    m_flForceTeamTime = 0x734 # GameTime_t
    m_iCompTeammateColor = 0x738 # int32_t
    m_bEverPlayedOnTeam = 0x73C # bool
    m_flPreviousForceJoinTeamTime = 0x740 # GameTime_t
    m_szClan = 0x748 # CUtlSymbolLarge
    m_sSanitizedPlayerName = 0x750 # CUtlString
    m_iCoachingTeam = 0x758 # int32_t
    m_nPlayerDominated = 0x760 # uint64_t
    m_nPlayerDominatingMe = 0x768 # uint64_t
    m_iCompetitiveRanking = 0x770 # int32_t
    m_iCompetitiveWins = 0x774 # int32_t
    m_iCompetitiveRankType = 0x778 # int8_t
    m_iCompetitiveRankingPredicted_Win = 0x77C # int32_t
    m_iCompetitiveRankingPredicted_Loss = 0x780 # int32_t
    m_iCompetitiveRankingPredicted_Tie = 0x784 # int32_t
    m_nEndMatchNextMapVote = 0x788 # int32_t
    m_unActiveQuestId = 0x78C # uint16_t
    m_nQuestProgressReason = 0x790 # QuestProgress::Reason
    m_unPlayerTvControlFlags = 0x794 # uint32_t
    m_iDraftIndex = 0x7C0 # int32_t
    m_msQueuedModeDisconnectionTimestamp = 0x7C4 # uint32_t
    m_uiAbandonRecordedReason = 0x7C8 # uint32_t
    m_bCannotBeKicked = 0x7CC # bool
    m_bEverFullyConnected = 0x7CD # bool
    m_bAbandonAllowsSurrender = 0x7CE # bool
    m_bAbandonOffersInstantSurrender = 0x7CF # bool
    m_bDisconnection1MinWarningPrinted = 0x7D0 # bool
    m_bScoreReported = 0x7D1 # bool
    m_nDisconnectionTick = 0x7D4 # int32_t
    m_bControllingBot = 0x7E0 # bool
    m_bHasControlledBotThisRound = 0x7E1 # bool
    m_bHasBeenControlledByPlayerThisRound = 0x7E2 # bool
    m_nBotsControlledThisRound = 0x7E4 # int32_t
    m_bCanControlObservedBot = 0x7E8 # bool
    m_hPlayerPawn = 0x7EC # CHandle<C_CSPlayerPawn>
    m_hObserverPawn = 0x7F0 # CHandle<C_CSObserverPawn>
    m_bPawnIsAlive = 0x7F4 # bool
    m_iPawnHealth = 0x7F8 # uint32_t
    m_iPawnArmor = 0x7FC # int32_t
    m_bPawnHasDefuser = 0x800 # bool
    m_bPawnHasHelmet = 0x801 # bool
    m_nPawnCharacterDefIndex = 0x802 # uint16_t
    m_iPawnLifetimeStart = 0x804 # int32_t
    m_iPawnLifetimeEnd = 0x808 # int32_t
    m_iPawnBotDifficulty = 0x80C # int32_t
    m_hOriginalControllerOfCurrentPawn = 0x810 # CHandle<CCSPlayerController>
    m_iScore = 0x814 # int32_t
    m_vecKills = 0x818 # C_NetworkUtlVectorBase<EKillTypes_t>
    m_iMVPs = 0x830 # int32_t
    m_bIsPlayerNameDirty = 0x834 # bool

class CCSPlayerController_ActionTrackingServices: # CPlayerControllerComponent
    m_perRoundStats = 0x40 # C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
    m_matchStats = 0x90 # CSMatchStats_t
    m_iNumRoundKills = 0x108 # int32_t
    m_iNumRoundKillsHeadshots = 0x10C # int32_t
    m_unTotalRoundDamageDealt = 0x110 # uint32_t

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
    m_flMaxFallVelocity = 0x210 # float
    m_vecLadderNormal = 0x214 # Vector
    m_nLadderSurfacePropIndex = 0x220 # int32_t
    m_flDuckAmount = 0x224 # float
    m_flDuckSpeed = 0x228 # float
    m_bDuckOverride = 0x22C # bool
    m_bDesiresDuck = 0x22D # bool
    m_flDuckOffset = 0x230 # float
    m_nDuckTimeMsecs = 0x234 # uint32_t
    m_nDuckJumpTimeMsecs = 0x238 # uint32_t
    m_nJumpTimeMsecs = 0x23C # uint32_t
    m_flLastDuckTime = 0x240 # float
    m_vecLastPositionAtFullCrouchSpeed = 0x250 # Vector2D
    m_duckUntilOnGround = 0x258 # bool
    m_bHasWalkMovedSinceLastJump = 0x259 # bool
    m_bInStuckTest = 0x25A # bool
    m_flStuckCheckTime = 0x268 # float[64][2]
    m_nTraceCount = 0x468 # int32_t
    m_StuckLast = 0x46C # int32_t
    m_bSpeedCropped = 0x470 # bool
    m_nOldWaterLevel = 0x474 # int32_t
    m_flWaterEntryTime = 0x478 # float
    m_vecForward = 0x47C # Vector
    m_vecLeft = 0x488 # Vector
    m_vecUp = 0x494 # Vector
    m_vecPreviouslyPredictedOrigin = 0x4A0 # Vector
    m_bOldJumpPressed = 0x4AC # bool
    m_flJumpPressedTime = 0x4B0 # float
    m_flJumpUntil = 0x4B4 # float
    m_flJumpVel = 0x4B8 # float
    m_fStashGrenadeParameterWhen = 0x4BC # GameTime_t
    m_nButtonDownMaskPrev = 0x4C0 # uint64_t
    m_flOffsetTickCompleteTime = 0x4C8 # float
    m_flOffsetTickStashedSpeed = 0x4CC # float
    m_flStamina = 0x4D0 # float
    m_bUpdatePredictedOriginAfterDataUpdate = 0x4D4 # bool
    m_flHeightAtJumpStart = 0x4D8 # float
    m_flMaxJumpHeightThisJump = 0x4DC # float

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
    m_flNextAttack = 0xC0 # GameTime_t
    m_bIsLookingAtWeapon = 0xC4 # bool
    m_bIsHoldingLookAtWeapon = 0xC5 # bool

class CCSWeaponBaseVData: # CBasePlayerWeaponVData
    m_WeaponType = 0x240 # CSWeaponType
    m_WeaponCategory = 0x244 # CSWeaponCategory
    m_szViewModel = 0x248 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    m_szPlayerModel = 0x328 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    m_szWorldDroppedModel = 0x408 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    m_szAimsightLensMaskModel = 0x4E8 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    m_szMagazineModel = 0x5C8 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    m_szHeatEffect = 0x6A8 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    m_szEjectBrassEffect = 0x788 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    m_szMuzzleFlashParticleAlt = 0x868 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    m_szMuzzleFlashThirdPersonParticle = 0x948 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    m_szMuzzleFlashThirdPersonParticleAlt = 0xA28 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    m_szTracerParticle = 0xB08 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    m_GearSlot = 0xBE8 # gear_slot_t
    m_GearSlotPosition = 0xBEC # int32_t
    m_DefaultLoadoutSlot = 0xBF0 # loadout_slot_t
    m_sWrongTeamMsg = 0xBF8 # CUtlString
    m_nPrice = 0xC00 # int32_t
    m_nKillAward = 0xC04 # int32_t
    m_nPrimaryReserveAmmoMax = 0xC08 # int32_t
    m_nSecondaryReserveAmmoMax = 0xC0C # int32_t
    m_bMeleeWeapon = 0xC10 # bool
    m_bHasBurstMode = 0xC11 # bool
    m_bIsRevolver = 0xC12 # bool
    m_bCannotShootUnderwater = 0xC13 # bool
    m_szName = 0xC18 # CUtlString
    m_szAnimExtension = 0xC20 # CUtlString
    m_eSilencerType = 0xC28 # CSWeaponSilencerType
    m_nCrosshairMinDistance = 0xC2C # int32_t
    m_nCrosshairDeltaDistance = 0xC30 # int32_t
    m_flCycleTime = 0xC34 # CFiringModeFloat
    m_flMaxSpeed = 0xC3C # CFiringModeFloat
    m_flSpread = 0xC44 # CFiringModeFloat
    m_flInaccuracyCrouch = 0xC4C # CFiringModeFloat
    m_flInaccuracyStand = 0xC54 # CFiringModeFloat
    m_flInaccuracyJump = 0xC5C # CFiringModeFloat
    m_flInaccuracyLand = 0xC64 # CFiringModeFloat
    m_flInaccuracyLadder = 0xC6C # CFiringModeFloat
    m_flInaccuracyFire = 0xC74 # CFiringModeFloat
    m_flInaccuracyMove = 0xC7C # CFiringModeFloat
    m_flRecoilAngle = 0xC84 # CFiringModeFloat
    m_flRecoilAngleVariance = 0xC8C # CFiringModeFloat
    m_flRecoilMagnitude = 0xC94 # CFiringModeFloat
    m_flRecoilMagnitudeVariance = 0xC9C # CFiringModeFloat
    m_nTracerFrequency = 0xCA4 # CFiringModeInt
    m_flInaccuracyJumpInitial = 0xCAC # float
    m_flInaccuracyJumpApex = 0xCB0 # float
    m_flInaccuracyReload = 0xCB4 # float
    m_nRecoilSeed = 0xCB8 # int32_t
    m_nSpreadSeed = 0xCBC # int32_t
    m_flTimeToIdleAfterFire = 0xCC0 # float
    m_flIdleInterval = 0xCC4 # float
    m_flAttackMovespeedFactor = 0xCC8 # float
    m_flHeatPerShot = 0xCCC # float
    m_flInaccuracyPitchShift = 0xCD0 # float
    m_flInaccuracyAltSoundThreshold = 0xCD4 # float
    m_flBotAudibleRange = 0xCD8 # float
    m_szUseRadioSubtitle = 0xCE0 # CUtlString
    m_bUnzoomsAfterShot = 0xCE8 # bool
    m_bHideViewModelWhenZoomed = 0xCE9 # bool
    m_nZoomLevels = 0xCEC # int32_t
    m_nZoomFOV1 = 0xCF0 # int32_t
    m_nZoomFOV2 = 0xCF4 # int32_t
    m_flZoomTime0 = 0xCF8 # float
    m_flZoomTime1 = 0xCFC # float
    m_flZoomTime2 = 0xD00 # float
    m_flIronSightPullUpSpeed = 0xD04 # float
    m_flIronSightPutDownSpeed = 0xD08 # float
    m_flIronSightFOV = 0xD0C # float
    m_flIronSightPivotForward = 0xD10 # float
    m_flIronSightLooseness = 0xD14 # float
    m_angPivotAngle = 0xD18 # QAngle
    m_vecIronSightEyePos = 0xD24 # Vector
    m_nDamage = 0xD30 # int32_t
    m_flHeadshotMultiplier = 0xD34 # float
    m_flArmorRatio = 0xD38 # float
    m_flPenetration = 0xD3C # float
    m_flRange = 0xD40 # float
    m_flRangeModifier = 0xD44 # float
    m_flFlinchVelocityModifierLarge = 0xD48 # float
    m_flFlinchVelocityModifierSmall = 0xD4C # float
    m_flRecoveryTimeCrouch = 0xD50 # float
    m_flRecoveryTimeStand = 0xD54 # float
    m_flRecoveryTimeCrouchFinal = 0xD58 # float
    m_flRecoveryTimeStandFinal = 0xD5C # float
    m_nRecoveryTransitionStartBullet = 0xD60 # int32_t
    m_nRecoveryTransitionEndBullet = 0xD64 # int32_t
    m_flThrowVelocity = 0xD68 # float
    m_vSmokeColor = 0xD6C # Vector
    m_szAnimClass = 0xD78 # CUtlString

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

class CComicBook:
    m_CoverImage = 0x8 # CPanoramaImageName
    m_XmlFile = 0x18 # CUtlString

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
    m_BuoyancyHelper = 0xCC0 # CBuoyancyHelper

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
    m_bNotifyBoneTransformsChanged = 0x0 # bitfield:1
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
    m_flTracerDuration = 0xCE0 # float
    m_nType = 0xCE4 # GrenadeType_t

class CHitboxComponent: # CEntityComponent
    m_bvDisabledHitGroups = 0x24 # uint32_t[1]

class CHostageRescueZone: # CHostageRescueZoneShim

class CHostageRescueZoneShim: # C_BaseTrigger

class CInfoDynamicShadowHint: # C_PointEntity
    m_bDisabled = 0x540 # bool
    m_flRange = 0x544 # float
    m_nImportance = 0x548 # int32_t
    m_nLightChoice = 0x54C # int32_t
    m_hLight = 0x550 # CHandle<C_BaseEntity>

class CInfoDynamicShadowHintBox: # CInfoDynamicShadowHint
    m_vBoxMins = 0x558 # Vector
    m_vBoxMaxs = 0x564 # Vector

class CInfoOffscreenPanoramaTexture: # C_PointEntity
    m_bDisabled = 0x540 # bool
    m_nResolutionX = 0x544 # int32_t
    m_nResolutionY = 0x548 # int32_t
    m_szLayoutFileName = 0x550 # CUtlSymbolLarge
    m_RenderAttrName = 0x558 # CUtlSymbolLarge
    m_TargetEntities = 0x560 # C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
    m_nTargetChangeCount = 0x578 # int32_t
    m_vecCSSClasses = 0x580 # C_NetworkUtlVectorBase<CUtlSymbolLarge>
    m_bCheckCSSClasses = 0x6F8 # bool

class CInfoParticleTarget: # C_PointEntity

class CInfoTarget: # C_PointEntity

class CInfoWorldLayer: # C_BaseEntity
    m_pOutputOnEntitiesSpawned = 0x540 # CEntityIOOutput
    m_worldName = 0x568 # CUtlSymbolLarge
    m_layerName = 0x570 # CUtlSymbolLarge
    m_bWorldLayerVisible = 0x578 # bool
    m_bEntitiesSpawned = 0x579 # bool
    m_bCreateAsChildSpawnGroup = 0x57A # bool
    m_hLayerSpawnGroup = 0x57C # uint32_t
    m_bWorldLayerActuallyVisible = 0x580 # bool

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
    m_OnTrigger = 0x540 # CEntityIOOutput
    m_OnSpawn = 0x568 # CEntityIOOutput
    m_bDisabled = 0x590 # bool
    m_bWaitForRefire = 0x591 # bool
    m_bTriggerOnce = 0x592 # bool
    m_bFastRetrigger = 0x593 # bool
    m_bPassthoughCaller = 0x594 # bool

class CLogicalEntity: # C_BaseEntity

class CModelState:
    m_hModel = 0xA0 # CStrongHandle<InfoForResourceTypeCModel>
    m_ModelName = 0xA8 # CUtlSymbolLarge
    m_bClientClothCreationSuppressed = 0xE8 # bool
    m_MeshGroupMask = 0x180 # uint64_t
    m_nIdealMotionType = 0x222 # int8_t
    m_nForceLOD = 0x223 # int8_t
    m_nClothUpdateFlags = 0x224 # int8_t

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
    m_flMaxspeed = 0x190 # float
    m_arrForceSubtickMoveWhen = 0x194 # float[4]
    m_flForwardMove = 0x1A4 # float
    m_flLeftMove = 0x1A8 # float
    m_flUpMove = 0x1AC # float
    m_vecLastMovementImpulses = 0x1B0 # Vector
    m_vecOldViewAngles = 0x1BC # QAngle

class CPlayer_MovementServices_Humanoid: # CPlayer_MovementServices
    m_flStepSoundTime = 0x1D0 # float
    m_flFallVelocity = 0x1D4 # float
    m_bInCrouch = 0x1D8 # bool
    m_nCrouchState = 0x1DC # uint32_t
    m_flCrouchTransitionStartTime = 0x1E0 # GameTime_t
    m_bDucked = 0x1E4 # bool
    m_bDucking = 0x1E5 # bool
    m_bInDuckJump = 0x1E6 # bool
    m_groundNormal = 0x1E8 # Vector
    m_flSurfaceFriction = 0x1F4 # float
    m_surfaceProps = 0x1F8 # CUtlStringToken
    m_nStepside = 0x208 # int32_t

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
    m_bAllowSwitchToNoWeapon = 0x40 # bool
    m_hMyWeapons = 0x48 # C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
    m_hActiveWeapon = 0x60 # CHandle<C_BasePlayerWeapon>
    m_hLastWeapon = 0x64 # CHandle<C_BasePlayerWeapon>
    m_iAmmo = 0x68 # uint16_t[32]

class CPointOffScreenIndicatorUi: # C_PointClientUIWorldPanel
    m_bBeenEnabled = 0xF20 # bool
    m_bHide = 0xF21 # bool
    m_flSeenTargetTime = 0xF24 # float
    m_pTargetPanel = 0xF28 # C_PointClientUIWorldPanel*

class CPointTemplate: # CLogicalEntity
    m_iszWorldName = 0x540 # CUtlSymbolLarge
    m_iszSource2EntityLumpName = 0x548 # CUtlSymbolLarge
    m_iszEntityFilterName = 0x550 # CUtlSymbolLarge
    m_flTimeoutInterval = 0x558 # float
    m_bAsynchronouslySpawnEntities = 0x55C # bool
    m_pOutputOnSpawned = 0x560 # CEntityIOOutput
    m_clientOnlyEntityBehavior = 0x588 # PointTemplateClientOnlyEntityBehavior_t
    m_ownerSpawnGroupType = 0x58C # PointTemplateOwnerSpawnGroupType_t
    m_createdSpawnGroupHandles = 0x590 # CUtlVector<uint32_t>
    m_SpawnedEntityHandles = 0x5A8 # CUtlVector<CEntityHandle>
    m_ScriptSpawnCallback = 0x5C0 # HSCRIPT
    m_ScriptCallbackScope = 0x5C8 # HSCRIPT

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
    m_bIsAnimationEnabled = 0x390 # bool
    m_bUseParentRenderBounds = 0x391 # bool
    m_bDisableSolidCollisionsForHierarchy = 0x392 # bool
    m_bDirtyMotionType = 0x0 # bitfield:1
    m_bIsGeneratingLatchedParentSpaceState = 0x0 # bitfield:1
    m_materialGroup = 0x394 # CUtlStringToken
    m_nHitboxSet = 0x398 # uint8_t

class CSkyboxReference: # C_BaseEntity
    m_worldGroupId = 0x540 # WorldGroupId_t
    m_hSkyCamera = 0x544 # CHandle<C_SkyCamera>

class CTablet: # C_CSWeaponBase

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
    m_bEnabled = 0xCC0 # bool
    m_nColorMode = 0xCC4 # int32_t
    m_Color = 0xCC8 # Color
    m_flColorTemperature = 0xCCC # float
    m_flBrightness = 0xCD0 # float
    m_flBrightnessScale = 0xCD4 # float
    m_nDirectLight = 0xCD8 # int32_t
    m_nBakedShadowIndex = 0xCDC # int32_t
    m_nLuminaireShape = 0xCE0 # int32_t
    m_flLuminaireSize = 0xCE4 # float
    m_flLuminaireAnisotropy = 0xCE8 # float
    m_LightStyleString = 0xCF0 # CUtlString
    m_flLightStyleStartTime = 0xCF8 # GameTime_t
    m_QueuedLightStyleStrings = 0xD00 # C_NetworkUtlVectorBase<CUtlString>
    m_LightStyleEvents = 0xD18 # C_NetworkUtlVectorBase<CUtlString>
    m_LightStyleTargets = 0xD30 # C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
    m_StyleEvent = 0xD48 # CEntityIOOutput[4]
    m_hLightCookie = 0xDE8 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_flShape = 0xDF0 # float
    m_flSoftX = 0xDF4 # float
    m_flSoftY = 0xDF8 # float
    m_flSkirt = 0xDFC # float
    m_flSkirtNear = 0xE00 # float
    m_vSizeParams = 0xE04 # Vector
    m_flRange = 0xE10 # float
    m_vShear = 0xE14 # Vector
    m_nBakeSpecularToCubemaps = 0xE20 # int32_t
    m_vBakeSpecularToCubemapsSize = 0xE24 # Vector
    m_nCastShadows = 0xE30 # int32_t
    m_nShadowMapSize = 0xE34 # int32_t
    m_nShadowPriority = 0xE38 # int32_t
    m_bContactShadow = 0xE3C # bool
    m_nBounceLight = 0xE40 # int32_t
    m_flBounceScale = 0xE44 # float
    m_flMinRoughness = 0xE48 # float
    m_vAlternateColor = 0xE4C # Vector
    m_fAlternateColorBrightness = 0xE58 # float
    m_nFog = 0xE5C # int32_t
    m_flFogStrength = 0xE60 # float
    m_nFogShadows = 0xE64 # int32_t
    m_flFogScale = 0xE68 # float
    m_flFadeSizeStart = 0xE6C # float
    m_flFadeSizeEnd = 0xE70 # float
    m_flShadowFadeSizeStart = 0xE74 # float
    m_flShadowFadeSizeEnd = 0xE78 # float
    m_bPrecomputedFieldsValid = 0xE7C # bool
    m_vPrecomputedBoundsMins = 0xE80 # Vector
    m_vPrecomputedBoundsMaxs = 0xE8C # Vector
    m_vPrecomputedOBBOrigin = 0xE98 # Vector
    m_vPrecomputedOBBAngles = 0xEA4 # QAngle
    m_vPrecomputedOBBExtent = 0xEB0 # Vector

class C_BaseButton: # C_BaseToggle
    m_glowEntity = 0xCC0 # CHandle<C_BaseModelEntity>
    m_usable = 0xCC4 # bool
    m_szDisplayText = 0xCC8 # CUtlSymbolLarge

class C_BaseCSGrenade: # C_CSWeaponBase
    m_bClientPredictDelete = 0x1A10 # bool
    m_bRedraw = 0x1A11 # bool
    m_bIsHeldByPlayer = 0x1A12 # bool
    m_bPinPulled = 0x1A13 # bool
    m_bJumpThrow = 0x1A14 # bool
    m_bThrowAnimating = 0x1A15 # bool
    m_fThrowTime = 0x1A18 # GameTime_t
    m_flThrowStrength = 0x1A1C # float
    m_flThrowStrengthApproach = 0x1A20 # float
    m_fDropTime = 0x1A24 # GameTime_t
    m_bJustPulledPin = 0x1A28 # bool
    m_nNextHoldTick = 0x1A2C # GameTick_t
    m_flNextHoldFrac = 0x1A30 # float
    m_hSwitchToWeaponAfterThrow = 0x1A34 # CHandle<C_CSWeaponBase>

class C_BaseCSGrenadeProjectile: # C_BaseGrenade
    m_vInitialPosition = 0x1068 # Vector
    m_vInitialVelocity = 0x1074 # Vector
    m_nBounces = 0x1080 # int32_t
    m_nExplodeEffectIndex = 0x1088 # CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_nExplodeEffectTickBegin = 0x1090 # int32_t
    m_vecExplodeEffectOrigin = 0x1094 # Vector
    m_flSpawnTime = 0x10A0 # GameTime_t
    vecLastTrailLinePos = 0x10A4 # Vector
    flNextTrailLineTime = 0x10B0 # GameTime_t
    m_bExplodeEffectBegan = 0x10B4 # bool
    m_bCanCreateGrenadeTrail = 0x10B5 # bool
    m_nSnapshotTrajectoryEffectIndex = 0x10B8 # ParticleIndex_t
    m_hSnapshotTrajectoryParticleSnapshot = 0x10C0 # CStrongHandle<InfoForResourceTypeIParticleSnapshot>
    m_arrTrajectoryTrailPoints = 0x10C8 # CUtlVector<Vector>
    m_arrTrajectoryTrailPointCreationTimes = 0x10E0 # CUtlVector<float>
    m_flTrajectoryTrailEffectCreationTime = 0x10F8 # float

class C_BaseClientUIEntity: # C_BaseModelEntity
    m_bEnabled = 0xCC8 # bool
    m_DialogXMLName = 0xCD0 # CUtlSymbolLarge
    m_PanelClassName = 0xCD8 # CUtlSymbolLarge
    m_PanelID = 0xCE0 # CUtlSymbolLarge

class C_BaseCombatCharacter: # C_BaseFlex
    m_hMyWearables = 0x1018 # C_NetworkUtlVectorBase<CHandle<C_EconWearable>>
    m_bloodColor = 0x1030 # int32_t
    m_leftFootAttachment = 0x1034 # AttachmentHandle_t
    m_rightFootAttachment = 0x1035 # AttachmentHandle_t
    m_nWaterWakeMode = 0x1038 # C_BaseCombatCharacter::WaterWakeMode_t
    m_flWaterWorldZ = 0x103C # float
    m_flWaterNextTraceTime = 0x1040 # float
    m_flFieldOfView = 0x1044 # float

class C_BaseDoor: # C_BaseToggle
    m_bIsUsable = 0xCC0 # bool

class C_BaseEntity: # CEntityInstance
    m_CBodyComponent = 0x30 # CBodyComponent*
    m_NetworkTransmitComponent = 0x38 # CNetworkTransmitComponent
    m_nLastThinkTick = 0x308 # GameTick_t
    m_pGameSceneNode = 0x310 # CGameSceneNode*
    m_pRenderComponent = 0x318 # CRenderComponent*
    m_pCollision = 0x320 # CCollisionProperty*
    m_iMaxHealth = 0x328 # int32_t
    m_iHealth = 0x32C # int32_t
    m_lifeState = 0x330 # uint8_t
    m_bTakesDamage = 0x331 # bool
    m_nTakeDamageFlags = 0x334 # TakeDamageFlags_t
    m_ubInterpolationFrame = 0x338 # uint8_t
    m_hSceneObjectController = 0x33C # CHandle<C_BaseEntity>
    m_nNoInterpolationTick = 0x340 # int32_t
    m_nVisibilityNoInterpolationTick = 0x344 # int32_t
    m_flProxyRandomValue = 0x348 # float
    m_iEFlags = 0x34C # int32_t
    m_nWaterType = 0x350 # uint8_t
    m_bInterpolateEvenWithNoModel = 0x351 # bool
    m_bPredictionEligible = 0x352 # bool
    m_bApplyLayerMatchIDToModel = 0x353 # bool
    m_tokLayerMatchID = 0x354 # CUtlStringToken
    m_nSubclassID = 0x358 # CUtlStringToken
    m_nSimulationTick = 0x368 # int32_t
    m_iCurrentThinkContext = 0x36C # int32_t
    m_aThinkFunctions = 0x370 # CUtlVector<thinkfunc_t>
    m_flAnimTime = 0x388 # float
    m_flSimulationTime = 0x38C # float
    m_nSceneObjectOverrideFlags = 0x390 # uint8_t
    m_bHasSuccessfullyInterpolated = 0x391 # bool
    m_bHasAddedVarsToInterpolation = 0x392 # bool
    m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x393 # bool
    m_nInterpolationLatchDirtyFlags = 0x394 # int32_t[2]
    m_ListEntry = 0x39C # uint16_t[11]
    m_flCreateTime = 0x3B4 # GameTime_t
    m_flSpeed = 0x3B8 # float
    m_EntClientFlags = 0x3BC # uint16_t
    m_bClientSideRagdoll = 0x3BE # bool
    m_iTeamNum = 0x3BF # uint8_t
    m_spawnflags = 0x3C0 # uint32_t
    m_nNextThinkTick = 0x3C4 # GameTick_t
    m_fFlags = 0x3C8 # uint32_t
    m_vecAbsVelocity = 0x3CC # Vector
    m_vecVelocity = 0x3D8 # CNetworkVelocityVector
    m_vecBaseVelocity = 0x408 # Vector
    m_hEffectEntity = 0x414 # CHandle<C_BaseEntity>
    m_hOwnerEntity = 0x418 # CHandle<C_BaseEntity>
    m_MoveCollide = 0x41C # MoveCollide_t
    m_MoveType = 0x41D # MoveType_t
    m_flWaterLevel = 0x420 # float
    m_fEffects = 0x424 # uint32_t
    m_hGroundEntity = 0x428 # CHandle<C_BaseEntity>
    m_flFriction = 0x42C # float
    m_flElasticity = 0x430 # float
    m_flGravityScale = 0x434 # float
    m_flTimeScale = 0x438 # float
    m_bSimulatedEveryTick = 0x43C # bool
    m_bAnimatedEveryTick = 0x43D # bool
    m_flNavIgnoreUntilTime = 0x440 # GameTime_t
    m_hThink = 0x444 # uint16_t
    m_fBBoxVisFlags = 0x450 # uint8_t
    m_bPredictable = 0x451 # bool
    m_bRenderWithViewModels = 0x452 # bool
    m_nSplitUserPlayerPredictionSlot = 0x454 # CSplitScreenSlot
    m_nFirstPredictableCommand = 0x458 # int32_t
    m_nLastPredictableCommand = 0x45C # int32_t
    m_hOldMoveParent = 0x460 # CHandle<C_BaseEntity>
    m_Particles = 0x468 # CParticleProperty
    m_vecPredictedScriptFloats = 0x490 # CUtlVector<float>
    m_vecPredictedScriptFloatIDs = 0x4A8 # CUtlVector<int32_t>
    m_nNextScriptVarRecordID = 0x4D8 # int32_t
    m_vecAngVelocity = 0x4E8 # QAngle
    m_DataChangeEventRef = 0x4F4 # int32_t
    m_dependencies = 0x4F8 # CUtlVector<CEntityHandle>
    m_nCreationTick = 0x510 # int32_t
    m_bAnimTimeChanged = 0x529 # bool
    m_bSimulationTimeChanged = 0x52A # bool
    m_sUniqueHammerID = 0x538 # CUtlString

class C_BaseFire: # C_BaseEntity
    m_flScale = 0x540 # float
    m_flStartScale = 0x544 # float
    m_flScaleTime = 0x548 # float
    m_nFlags = 0x54C # uint32_t

class C_BaseFlex: # CBaseAnimGraph
    m_flexWeight = 0xE90 # C_NetworkUtlVectorBase<float>
    m_vLookTargetPosition = 0xEA8 # Vector
    m_blinktoggle = 0xEC0 # bool
    m_nLastFlexUpdateFrameCount = 0xF20 # int32_t
    m_CachedViewTarget = 0xF24 # Vector
    m_nNextSceneEventId = 0xF30 # uint32_t
    m_iBlink = 0xF34 # int32_t
    m_blinktime = 0xF38 # float
    m_prevblinktoggle = 0xF3C # bool
    m_iJawOpen = 0xF40 # int32_t
    m_flJawOpenAmount = 0xF44 # float
    m_flBlinkAmount = 0xF48 # float
    m_iMouthAttachment = 0xF4C # AttachmentHandle_t
    m_iEyeAttachment = 0xF4D # AttachmentHandle_t
    m_bResetFlexWeightsOnModelChange = 0xF4E # bool
    m_nEyeOcclusionRendererBone = 0xF68 # int32_t
    m_mEyeOcclusionRendererCameraToBoneTransform = 0xF6C # matrix3x4_t
    m_vEyeOcclusionRendererHalfExtent = 0xF9C # Vector
    m_PhonemeClasses = 0xFB8 # C_BaseFlex::Emphasized_Phoneme[3]

class C_BaseFlex_Emphasized_Phoneme:
    m_sClassName = 0x0 # CUtlString
    m_flAmount = 0x18 # float
    m_bRequired = 0x1C # bool
    m_bBasechecked = 0x1D # bool
    m_bValid = 0x1E # bool

class C_BaseGrenade: # C_BaseFlex
    m_bHasWarnedAI = 0x1018 # bool
    m_bIsSmokeGrenade = 0x1019 # bool
    m_bIsLive = 0x101A # bool
    m_DmgRadius = 0x101C # float
    m_flDetonateTime = 0x1020 # GameTime_t
    m_flWarnAITime = 0x1024 # float
    m_flDamage = 0x1028 # float
    m_iszBounceSound = 0x1030 # CUtlSymbolLarge
    m_ExplosionSound = 0x1038 # CUtlString
    m_hThrower = 0x1044 # CHandle<C_CSPlayerPawn>
    m_flNextAttack = 0x105C # GameTime_t
    m_hOriginalThrower = 0x1060 # CHandle<C_CSPlayerPawn>

class C_BaseModelEntity: # C_BaseEntity
    m_CRenderComponent = 0xA10 # CRenderComponent*
    m_CHitboxComponent = 0xA18 # CHitboxComponent
    m_bInitModelEffects = 0xA60 # bool
    m_bIsStaticProp = 0xA61 # bool
    m_nLastAddDecal = 0xA64 # int32_t
    m_nDecalsAdded = 0xA68 # int32_t
    m_iOldHealth = 0xA6C # int32_t
    m_nRenderMode = 0xA70 # RenderMode_t
    m_nRenderFX = 0xA71 # RenderFx_t
    m_bAllowFadeInView = 0xA72 # bool
    m_clrRender = 0xA73 # Color
    m_vecRenderAttributes = 0xA78 # C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
    m_bRenderToCubemaps = 0xAE0 # bool
    m_Collision = 0xAE8 # CCollisionProperty
    m_Glow = 0xB98 # CGlowProperty
    m_flGlowBackfaceMult = 0xBF0 # float
    m_fadeMinDist = 0xBF4 # float
    m_fadeMaxDist = 0xBF8 # float
    m_flFadeScale = 0xBFC # float
    m_flShadowStrength = 0xC00 # float
    m_nObjectCulling = 0xC04 # uint8_t
    m_nAddDecal = 0xC08 # int32_t
    m_vDecalPosition = 0xC0C # Vector
    m_vDecalForwardAxis = 0xC18 # Vector
    m_flDecalHealBloodRate = 0xC24 # float
    m_flDecalHealHeightRate = 0xC28 # float
    m_ConfigEntitiesToPropagateMaterialDecalsTo = 0xC30 # C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
    m_vecViewOffset = 0xC48 # CNetworkViewOffsetVector
    m_pClientAlphaProperty = 0xC78 # CClientAlphaProperty*
    m_ClientOverrideTint = 0xC80 # Color
    m_bUseClientOverrideTint = 0xC84 # bool

class C_BasePlayerPawn: # C_BaseCombatCharacter
    m_pWeaponServices = 0x10A8 # CPlayer_WeaponServices*
    m_pItemServices = 0x10B0 # CPlayer_ItemServices*
    m_pAutoaimServices = 0x10B8 # CPlayer_AutoaimServices*
    m_pObserverServices = 0x10C0 # CPlayer_ObserverServices*
    m_pWaterServices = 0x10C8 # CPlayer_WaterServices*
    m_pUseServices = 0x10D0 # CPlayer_UseServices*
    m_pFlashlightServices = 0x10D8 # CPlayer_FlashlightServices*
    m_pCameraServices = 0x10E0 # CPlayer_CameraServices*
    m_pMovementServices = 0x10E8 # CPlayer_MovementServices*
    m_ServerViewAngleChanges = 0x10F8 # C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
    m_nHighestConsumedServerViewAngleChangeIndex = 0x1148 # uint32_t
    v_angle = 0x114C # QAngle
    v_anglePrevious = 0x1158 # QAngle
    m_iHideHUD = 0x1164 # uint32_t
    m_skybox3d = 0x1168 # sky3dparams_t
    m_flDeathTime = 0x11F8 # GameTime_t
    m_vecPredictionError = 0x11FC # Vector
    m_flPredictionErrorTime = 0x1208 # GameTime_t
    m_vecLastCameraSetupLocalOrigin = 0x120C # Vector
    m_flLastCameraSetupTime = 0x1218 # GameTime_t
    m_flFOVSensitivityAdjust = 0x121C # float
    m_flMouseSensitivity = 0x1220 # float
    m_vOldOrigin = 0x1224 # Vector
    m_flOldSimulationTime = 0x1230 # float
    m_nLastExecutedCommandNumber = 0x1234 # int32_t
    m_nLastExecutedCommandTick = 0x1238 # int32_t
    m_hController = 0x123C # CHandle<CBasePlayerController>
    m_bIsSwappingToPredictableController = 0x1240 # bool

class C_BasePlayerWeapon: # C_EconEntity
    m_nNextPrimaryAttackTick = 0x1560 # GameTick_t
    m_flNextPrimaryAttackTickRatio = 0x1564 # float
    m_nNextSecondaryAttackTick = 0x1568 # GameTick_t
    m_flNextSecondaryAttackTickRatio = 0x156C # float
    m_iClip1 = 0x1570 # int32_t
    m_iClip2 = 0x1574 # int32_t
    m_pReserveAmmo = 0x1578 # int32_t[2]

class C_BasePropDoor: # C_DynamicProp
    m_eDoorState = 0x10F8 # DoorState_t
    m_modelChanged = 0x10FC # bool
    m_bLocked = 0x10FD # bool
    m_closedPosition = 0x1100 # Vector
    m_closedAngles = 0x110C # QAngle
    m_hMaster = 0x1118 # CHandle<C_BasePropDoor>
    m_vWhereToSetLightingOrigin = 0x111C # Vector

class C_BaseToggle: # C_BaseModelEntity

class C_BaseTrigger: # C_BaseToggle
    m_bDisabled = 0xCC0 # bool
    m_bClientSidePredicted = 0xCC1 # bool

class C_BaseViewModel: # CBaseAnimGraph
    m_vecLastFacing = 0xE88 # Vector
    m_nViewModelIndex = 0xE94 # uint32_t
    m_nAnimationParity = 0xE98 # uint32_t
    m_flAnimationStartTime = 0xE9C # float
    m_hWeapon = 0xEA0 # CHandle<C_BasePlayerWeapon>
    m_sVMName = 0xEA8 # CUtlSymbolLarge
    m_sAnimationPrefix = 0xEB0 # CUtlSymbolLarge
    m_hWeaponModel = 0xEB8 # CHandle<C_ViewmodelWeapon>
    m_iCameraAttachment = 0xEBC # AttachmentHandle_t
    m_vecLastCameraAngles = 0xEC0 # QAngle
    m_previousElapsedDuration = 0xECC # float
    m_previousCycle = 0xED0 # float
    m_nOldAnimationParity = 0xED4 # int32_t
    m_hOldLayerSequence = 0xED8 # HSequence
    m_oldLayer = 0xEDC # int32_t
    m_oldLayerStartTime = 0xEE0 # float
    m_hControlPanel = 0xEE4 # CHandle<C_BaseEntity>

class C_Beam: # C_BaseModelEntity
    m_flFrameRate = 0xCC0 # float
    m_flHDRColorScale = 0xCC4 # float
    m_flFireTime = 0xCC8 # GameTime_t
    m_flDamage = 0xCCC # float
    m_nNumBeamEnts = 0xCD0 # uint8_t
    m_queryHandleHalo = 0xCD4 # int32_t
    m_hBaseMaterial = 0xCF8 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_nHaloIndex = 0xD00 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_nBeamType = 0xD08 # BeamType_t
    m_nBeamFlags = 0xD0C # uint32_t
    m_hAttachEntity = 0xD10 # CHandle<C_BaseEntity>[10]
    m_nAttachIndex = 0xD38 # AttachmentHandle_t[10]
    m_fWidth = 0xD44 # float
    m_fEndWidth = 0xD48 # float
    m_fFadeLength = 0xD4C # float
    m_fHaloScale = 0xD50 # float
    m_fAmplitude = 0xD54 # float
    m_fStartFrame = 0xD58 # float
    m_fSpeed = 0xD5C # float
    m_flFrame = 0xD60 # float
    m_nClipStyle = 0xD64 # BeamClipStyle_t
    m_bTurnedOff = 0xD68 # bool
    m_vecEndPos = 0xD6C # Vector
    m_hEndEntity = 0xD78 # CHandle<C_BaseEntity>

class C_Breakable: # C_BaseModelEntity

class C_BreakableProp: # CBaseProp
    m_OnBreak = 0xEC8 # CEntityIOOutput
    m_OnHealthChanged = 0xEF0 # CEntityOutputTemplate<float>
    m_OnTakeDamage = 0xF18 # CEntityIOOutput
    m_impactEnergyScale = 0xF40 # float
    m_iMinHealthDmg = 0xF44 # int32_t
    m_flPressureDelay = 0xF48 # float
    m_hBreaker = 0xF4C # CHandle<C_BaseEntity>
    m_PerformanceMode = 0xF50 # PerformanceMode_t
    m_flDmgModBullet = 0xF54 # float
    m_flDmgModClub = 0xF58 # float
    m_flDmgModExplosive = 0xF5C # float
    m_flDmgModFire = 0xF60 # float
    m_iszPhysicsDamageTableName = 0xF68 # CUtlSymbolLarge
    m_iszBasePropData = 0xF70 # CUtlSymbolLarge
    m_iInteractions = 0xF78 # int32_t
    m_flPreventDamageBeforeTime = 0xF7C # GameTime_t
    m_bHasBreakPiecesOrCommands = 0xF80 # bool
    m_explodeDamage = 0xF84 # float
    m_explodeRadius = 0xF88 # float
    m_explosionDelay = 0xF90 # float
    m_explosionBuildupSound = 0xF98 # CUtlSymbolLarge
    m_explosionCustomEffect = 0xFA0 # CUtlSymbolLarge
    m_explosionCustomSound = 0xFA8 # CUtlSymbolLarge
    m_explosionModifier = 0xFB0 # CUtlSymbolLarge
    m_hPhysicsAttacker = 0xFB8 # CHandle<C_BasePlayerPawn>
    m_flLastPhysicsInfluenceTime = 0xFBC # GameTime_t
    m_flDefaultFadeScale = 0xFC0 # float
    m_hLastAttacker = 0xFC4 # CHandle<C_BaseEntity>
    m_hFlareEnt = 0xFC8 # CHandle<C_BaseEntity>
    m_noGhostCollision = 0xFCC # bool

class C_BulletHitModel: # CBaseAnimGraph
    m_matLocal = 0xE80 # matrix3x4_t
    m_iBoneIndex = 0xEB0 # int32_t
    m_hPlayerParent = 0xEB4 # CHandle<C_BaseEntity>
    m_bIsHit = 0xEB8 # bool
    m_flTimeCreated = 0xEBC # float
    m_vecStartPos = 0xEC0 # Vector

class C_C4: # C_CSWeaponBase
    m_szScreenText = 0x1A10 # char[32]
    m_activeLightParticleIndex = 0x1A30 # ParticleIndex_t
    m_eActiveLightEffect = 0x1A34 # C4LightEffect_t
    m_bStartedArming = 0x1A38 # bool
    m_fArmedTime = 0x1A3C # GameTime_t
    m_bBombPlacedAnimation = 0x1A40 # bool
    m_bIsPlantingViaUse = 0x1A41 # bool
    m_entitySpottedState = 0x1A48 # EntitySpottedState_t
    m_nSpotRules = 0x1A60 # int32_t
    m_bPlayedArmingBeeps = 0x1A64 # bool[7]
    m_bBombPlanted = 0x1A6B # bool
    m_bDroppedFromDeath = 0x1A6C # bool

class C_CSGOViewModel: # C_PredictedViewModel
    m_bShouldIgnoreOffsetAndAccuracy = 0xF10 # bool
    m_nWeaponParity = 0xF14 # uint32_t
    m_nOldWeaponParity = 0xF18 # uint32_t
    m_nLastKnownAssociatedWeaponEntIndex = 0xF1C # CEntityIndex
    m_bNeedToQueueHighResComposite = 0xF20 # bool
    m_vLoweredWeaponOffset = 0xF64 # QAngle

class C_CSGO_CounterTerroristTeamIntroCamera: # C_CSGO_TeamPreviewCamera

class C_CSGO_CounterTerroristWingmanIntroCamera: # C_CSGO_TeamPreviewCamera

class C_CSGO_EndOfMatchCamera: # C_CSGO_TeamPreviewCamera

class C_CSGO_EndOfMatchCharacterPosition: # C_CSGO_TeamPreviewCharacterPosition

class C_CSGO_EndOfMatchLineupEnd: # C_CSGO_EndOfMatchLineupEndpoint

class C_CSGO_EndOfMatchLineupEndpoint: # C_BaseEntity

class C_CSGO_EndOfMatchLineupStart: # C_CSGO_EndOfMatchLineupEndpoint

class C_CSGO_MapPreviewCameraPath: # C_BaseEntity
    m_flZFar = 0x540 # float
    m_flZNear = 0x544 # float
    m_bLoop = 0x548 # bool
    m_bVerticalFOV = 0x549 # bool
    m_bConstantSpeed = 0x54A # bool
    m_flDuration = 0x54C # float
    m_flPathLength = 0x590 # float
    m_flPathDuration = 0x594 # float

class C_CSGO_MapPreviewCameraPathNode: # C_BaseEntity
    m_szParentPathUniqueID = 0x540 # CUtlSymbolLarge
    m_nPathIndex = 0x548 # int32_t
    m_vInTangentLocal = 0x54C # Vector
    m_vOutTangentLocal = 0x558 # Vector
    m_flFOV = 0x564 # float
    m_flSpeed = 0x568 # float
    m_flEaseIn = 0x56C # float
    m_flEaseOut = 0x570 # float
    m_vInTangentWorld = 0x574 # Vector
    m_vOutTangentWorld = 0x580 # Vector

class C_CSGO_PreviewModel: # C_BaseFlex
    m_animgraph = 0x1018 # CUtlString
    m_animgraphCharacterModeString = 0x1020 # CUtlString
    m_defaultAnim = 0x1028 # CUtlString
    m_nDefaultAnimLoopMode = 0x1030 # AnimLoopMode_t
    m_flInitialModelScale = 0x1034 # float

class C_CSGO_PreviewModelAlias_csgo_item_previewmodel: # C_CSGO_PreviewModel

class C_CSGO_PreviewPlayer: # C_CSPlayerPawn
    m_animgraph = 0x23B8 # CUtlString
    m_animgraphCharacterModeString = 0x23C0 # CUtlString
    m_flInitialModelScale = 0x23C8 # float

class C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel: # C_CSGO_PreviewPlayer

class C_CSGO_TeamIntroCharacterPosition: # C_CSGO_TeamPreviewCharacterPosition

class C_CSGO_TeamIntroCounterTerroristPosition: # C_CSGO_TeamIntroCharacterPosition

class C_CSGO_TeamIntroTerroristPosition: # C_CSGO_TeamIntroCharacterPosition

class C_CSGO_TeamPreviewCamera: # C_CSGO_MapPreviewCameraPath
    m_nVariant = 0x5A0 # int32_t
    m_bDofEnabled = 0x5A4 # bool
    m_flDofNearBlurry = 0x5A8 # float
    m_flDofNearCrisp = 0x5AC # float
    m_flDofFarCrisp = 0x5B0 # float
    m_flDofFarBlurry = 0x5B4 # float
    m_flDofTiltToGround = 0x5B8 # float

class C_CSGO_TeamPreviewCharacterPosition: # C_BaseEntity
    m_nVariant = 0x540 # int32_t
    m_nRandom = 0x544 # int32_t
    m_nOrdinal = 0x548 # int32_t
    m_sWeaponName = 0x550 # CUtlString
    m_xuid = 0x558 # uint64_t
    m_agentItem = 0x560 # C_EconItemView
    m_glovesItem = 0x9A8 # C_EconItemView
    m_weaponItem = 0xDF0 # C_EconItemView

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
    m_flLastPerfSampleTime = 0x4EC0 # double

class C_CSGameRulesProxy: # C_GameRulesProxy
    m_pGameRules = 0x540 # C_CSGameRules*

class C_CSMinimapBoundary: # C_BaseEntity

class C_CSObserverPawn: # C_CSPlayerPawnBase
    m_hDetectParentChange = 0x16B8 # CEntityHandle

class C_CSPlayerPawn: # C_CSPlayerPawnBase
    m_pBulletServices = 0x16B8 # CCSPlayer_BulletServices*
    m_pHostageServices = 0x16C0 # CCSPlayer_HostageServices*
    m_pBuyServices = 0x16C8 # CCSPlayer_BuyServices*
    m_pGlowServices = 0x16D0 # CCSPlayer_GlowServices*
    m_pActionTrackingServices = 0x16D8 # CCSPlayer_ActionTrackingServices*
    m_flHealthShotBoostExpirationTime = 0x16E0 # GameTime_t
    m_flLastFiredWeaponTime = 0x16E4 # GameTime_t
    m_bHasFemaleVoice = 0x16E8 # bool
    m_flLandseconds = 0x16EC # float
    m_flOldFallVelocity = 0x16F0 # float
    m_szLastPlaceName = 0x16F4 # char[18]
    m_bPrevDefuser = 0x1706 # bool
    m_bPrevHelmet = 0x1707 # bool
    m_nPrevArmorVal = 0x1708 # int32_t
    m_nPrevGrenadeAmmoCount = 0x170C # int32_t
    m_unPreviousWeaponHash = 0x1710 # uint32_t
    m_unWeaponHash = 0x1714 # uint32_t
    m_bInBuyZone = 0x1718 # bool
    m_bPreviouslyInBuyZone = 0x1719 # bool
    m_aimPunchAngle = 0x171C # QAngle
    m_aimPunchAngleVel = 0x1728 # QAngle
    m_aimPunchTickBase = 0x1734 # int32_t
    m_aimPunchTickFraction = 0x1738 # float
    m_aimPunchCache = 0x1740 # CUtlVector<QAngle>
    m_bInLanding = 0x1760 # bool
    m_flLandingTime = 0x1764 # float
    m_bInHostageRescueZone = 0x1768 # bool
    m_bInBombZone = 0x1769 # bool
    m_bIsBuyMenuOpen = 0x176A # bool
    m_flTimeOfLastInjury = 0x176C # GameTime_t
    m_flNextSprayDecalTime = 0x1770 # GameTime_t
    m_iRetakesOffering = 0x1888 # int32_t
    m_iRetakesOfferingCard = 0x188C # int32_t
    m_bRetakesHasDefuseKit = 0x1890 # bool
    m_bRetakesMVPLastRound = 0x1891 # bool
    m_iRetakesMVPBoostItem = 0x1894 # int32_t
    m_RetakesMVPBoostExtraUtility = 0x1898 # loadout_slot_t
    m_bNeedToReApplyGloves = 0x18B8 # bool
    m_EconGloves = 0x18C0 # C_EconItemView
    m_bMustSyncRagdollState = 0x1D08 # bool
    m_nRagdollDamageBone = 0x1D0C # int32_t
    m_vRagdollDamageForce = 0x1D10 # Vector
    m_vRagdollDamagePosition = 0x1D1C # Vector
    m_szRagdollDamageWeaponName = 0x1D28 # char[64]
    m_bRagdollDamageHeadshot = 0x1D68 # bool
    m_vRagdollServerOrigin = 0x1D6C # Vector
    m_bLastHeadBoneTransformIsValid = 0x2380 # bool
    m_lastLandTime = 0x2384 # GameTime_t
    m_bOnGroundLastTick = 0x2388 # bool
    m_qDeathEyeAngles = 0x23A4 # QAngle
    m_bSkipOneHeadConstraintUpdate = 0x23B0 # bool

class C_CSPlayerPawnBase: # C_BasePlayerPawn
    m_pPingServices = 0x1268 # CCSPlayer_PingServices*
    m_pViewModelServices = 0x1270 # CPlayer_ViewModelServices*
    m_fRenderingClipPlane = 0x1280 # float[4]
    m_nLastClipPlaneSetupFrame = 0x1290 # int32_t
    m_vecLastClipCameraPos = 0x1294 # Vector
    m_vecLastClipCameraForward = 0x12A0 # Vector
    m_bClipHitStaticWorld = 0x12AC # bool
    m_bCachedPlaneIsValid = 0x12AD # bool
    m_pClippingWeapon = 0x12B0 # C_CSWeaponBase*
    m_previousPlayerState = 0x12B8 # CSPlayerState
    m_flLastCollisionCeiling = 0x12BC # float
    m_flLastCollisionCeilingChangeTime = 0x12C0 # float
    m_grenadeParameterStashTime = 0x12E0 # GameTime_t
    m_bGrenadeParametersStashed = 0x12E4 # bool
    m_angStashedShootAngles = 0x12E8 # QAngle
    m_vecStashedGrenadeThrowPosition = 0x12F4 # Vector
    m_vecStashedVelocity = 0x1300 # Vector
    m_angShootAngleHistory = 0x130C # QAngle[2]
    m_vecThrowPositionHistory = 0x1324 # Vector[2]
    m_vecVelocityHistory = 0x133C # Vector[2]
    m_thirdPersonHeading = 0x1358 # QAngle
    m_flSlopeDropOffset = 0x1370 # float
    m_flSlopeDropHeight = 0x1380 # float
    m_vHeadConstraintOffset = 0x1390 # Vector
    m_bIsScoped = 0x13A8 # bool
    m_bIsWalking = 0x13A9 # bool
    m_bResumeZoom = 0x13AA # bool
    m_iPlayerState = 0x13AC # CSPlayerState
    m_bIsDefusing = 0x13B0 # bool
    m_bIsGrabbingHostage = 0x13B1 # bool
    m_iBlockingUseActionInProgress = 0x13B4 # CSPlayerBlockingUseAction_t
    m_bIsRescuing = 0x13B8 # bool
    m_fImmuneToGunGameDamageTime = 0x13BC # GameTime_t
    m_fImmuneToGunGameDamageTimeLast = 0x13C0 # GameTime_t
    m_bGunGameImmunity = 0x13C4 # bool
    m_bHasMovedSinceSpawn = 0x13C5 # bool
    m_fMolotovUseTime = 0x13C8 # float
    m_fMolotovDamageTime = 0x13CC # float
    m_nWhichBombZone = 0x13D0 # int32_t
    m_bInNoDefuseArea = 0x13D4 # bool
    m_iThrowGrenadeCounter = 0x13D8 # int32_t
    m_bWaitForNoAttack = 0x13DC # bool
    m_flGuardianTooFarDistFrac = 0x13E0 # float
    m_flDetectedByEnemySensorTime = 0x13E4 # GameTime_t
    m_flNextGuardianTooFarWarning = 0x13E8 # float
    m_bSuppressGuardianTooFarWarningAudio = 0x13EC # bool
    m_bKilledByTaser = 0x13ED # bool
    m_iMoveState = 0x13F0 # int32_t
    m_bCanMoveDuringFreezePeriod = 0x13F4 # bool
    m_flLowerBodyYawTarget = 0x13F8 # float
    m_bStrafing = 0x13FC # bool
    m_flLastSpawnTimeIndex = 0x1400 # GameTime_t
    m_flEmitSoundTime = 0x1404 # GameTime_t
    m_iAddonBits = 0x1408 # int32_t
    m_iPrimaryAddon = 0x140C # int32_t
    m_iSecondaryAddon = 0x1410 # int32_t
    m_iProgressBarDuration = 0x1414 # int32_t
    m_flProgressBarStartTime = 0x1418 # float
    m_iDirection = 0x141C # int32_t
    m_iShotsFired = 0x1420 # int32_t
    m_bNightVisionOn = 0x1424 # bool
    m_bHasNightVision = 0x1425 # bool
    m_flVelocityModifier = 0x1428 # float
    m_flHitHeading = 0x142C # float
    m_nHitBodyPart = 0x1430 # int32_t
    m_iStartAccount = 0x1434 # int32_t
    m_vecIntroStartEyePosition = 0x1438 # Vector
    m_vecIntroStartPlayerForward = 0x1444 # Vector
    m_flClientDeathTime = 0x1450 # GameTime_t
    m_flNightVisionAlpha = 0x1454 # float
    m_bScreenTearFrameCaptured = 0x1458 # bool
    m_flFlashBangTime = 0x145C # float
    m_flFlashScreenshotAlpha = 0x1460 # float
    m_flFlashOverlayAlpha = 0x1464 # float
    m_bFlashBuildUp = 0x1468 # bool
    m_bFlashDspHasBeenCleared = 0x1469 # bool
    m_bFlashScreenshotHasBeenGrabbed = 0x146A # bool
    m_flFlashMaxAlpha = 0x146C # float
    m_flFlashDuration = 0x1470 # float
    m_lastStandingPos = 0x1474 # Vector
    m_vecLastMuzzleFlashPos = 0x1480 # Vector
    m_angLastMuzzleFlashAngle = 0x148C # QAngle
    m_hMuzzleFlashShape = 0x1498 # CHandle<C_BaseEntity>
    m_iHealthBarRenderMaskIndex = 0x149C # int32_t
    m_flHealthFadeValue = 0x14A0 # float
    m_flHealthFadeAlpha = 0x14A4 # float
    m_nMyCollisionGroup = 0x14A8 # int32_t
    m_ignoreLadderJumpTime = 0x14AC # float
    m_ladderSurpressionTimer = 0x14B0 # CountdownTimer
    m_lastLadderNormal = 0x14C8 # Vector
    m_lastLadderPos = 0x14D4 # Vector
    m_flDeathCCWeight = 0x14E8 # float
    m_bOldIsScoped = 0x14EC # bool
    m_flPrevRoundEndTime = 0x14F0 # float
    m_flPrevMatchEndTime = 0x14F4 # float
    m_unCurrentEquipmentValue = 0x14F8 # uint16_t
    m_unRoundStartEquipmentValue = 0x14FA # uint16_t
    m_unFreezetimeEndEquipmentValue = 0x14FC # uint16_t
    m_vecThirdPersonViewPositionOverride = 0x1500 # Vector
    m_nHeavyAssaultSuitCooldownRemaining = 0x150C # int32_t
    m_ArmorValue = 0x1510 # int32_t
    m_angEyeAngles = 0x1518 # QAngle
    m_fNextThinkPushAway = 0x1530 # float
    m_bShouldAutobuyDMWeapons = 0x1534 # bool
    m_bShouldAutobuyNow = 0x1535 # bool
    m_bHud_MiniScoreHidden = 0x1536 # bool
    m_bHud_RadarHidden = 0x1537 # bool
    m_nLastKillerIndex = 0x1538 # CEntityIndex
    m_nLastConcurrentKilled = 0x153C # int32_t
    m_nDeathCamMusic = 0x1540 # int32_t
    m_iIDEntIndex = 0x1544 # CEntityIndex
    m_delayTargetIDTimer = 0x1548 # CountdownTimer
    m_iTargetedWeaponEntIndex = 0x1560 # CEntityIndex
    m_iOldIDEntIndex = 0x1564 # CEntityIndex
    m_holdTargetIDTimer = 0x1568 # CountdownTimer
    m_flCurrentMusicStartTime = 0x1584 # float
    m_flMusicRoundStartTime = 0x1588 # float
    m_bDeferStartMusicOnWarmup = 0x158C # bool
    m_cycleLatch = 0x1590 # int32_t
    m_serverIntendedCycle = 0x1594 # float
    m_vecPlayerPatchEconIndices = 0x1598 # uint32_t[5]
    m_bHideTargetID = 0x15B4 # bool
    m_nextTaserShakeTime = 0x15B8 # float
    m_firstTaserShakeTime = 0x15BC # float
    m_flLastSmokeOverlayAlpha = 0x15C0 # float
    m_vLastSmokeOverlayColor = 0x15C4 # Vector
    m_nPlayerSmokedFx = 0x15D0 # ParticleIndex_t
    m_flNextMagDropTime = 0x15D4 # float
    m_nLastMagDropAttachmentIndex = 0x15D8 # int32_t
    m_vecBulletHitModels = 0x15E0 # CUtlVector<C_BulletHitModel*>
    m_vecPickupModelSlerpers = 0x15F8 # CUtlVector<C_PickUpModelSlerper*>
    m_vecLastAliveLocalVelocity = 0x1610 # Vector
    m_entitySpottedState = 0x1638 # EntitySpottedState_t
    m_nSurvivalTeamNumber = 0x1650 # int32_t
    m_bGuardianShouldSprayCustomXMark = 0x1654 # bool
    m_bHasDeathInfo = 0x1655 # bool
    m_flDeathInfoTime = 0x1658 # float
    m_vecDeathInfoOrigin = 0x165C # Vector
    m_bKilledByHeadshot = 0x1668 # bool
    m_hOriginalController = 0x166C # CHandle<CCSPlayerController>

class C_CSPlayerResource: # C_BaseEntity
    m_bHostageAlive = 0x540 # bool[12]
    m_isHostageFollowingSomeone = 0x54C # bool[12]
    m_iHostageEntityIDs = 0x558 # CEntityIndex[12]
    m_bombsiteCenterA = 0x588 # Vector
    m_bombsiteCenterB = 0x594 # Vector
    m_hostageRescueX = 0x5A0 # int32_t[4]
    m_hostageRescueY = 0x5B0 # int32_t[4]
    m_hostageRescueZ = 0x5C0 # int32_t[4]
    m_bEndMatchNextMapAllVoted = 0x5D0 # bool
    m_foundGoalPositions = 0x5D1 # bool

class C_CSTeam: # C_Team
    m_szTeamMatchStat = 0x5F8 # char[512]
    m_numMapVictories = 0x7F8 # int32_t
    m_bSurrendered = 0x7FC # bool
    m_scoreFirstHalf = 0x800 # int32_t
    m_scoreSecondHalf = 0x804 # int32_t
    m_scoreOvertime = 0x808 # int32_t
    m_szClanTeamname = 0x80C # char[129]
    m_iClanID = 0x890 # uint32_t
    m_szTeamFlagImage = 0x894 # char[8]
    m_szTeamLogoImage = 0x89C # char[8]

class C_CSWeaponBase: # C_BasePlayerWeapon
    m_flFireSequenceStartTime = 0x15D4 # float
    m_nFireSequenceStartTimeChange = 0x15D8 # int32_t
    m_nFireSequenceStartTimeAck = 0x15DC # int32_t
    m_ePlayerFireEvent = 0x15E0 # PlayerAnimEvent_t
    m_ePlayerFireEventAttackType = 0x15E4 # WeaponAttackType_t
    m_seqIdle = 0x15E8 # HSequence
    m_seqFirePrimary = 0x15EC # HSequence
    m_seqFireSecondary = 0x15F0 # HSequence
    m_thirdPersonFireSequences = 0x15F8 # CUtlVector<HSequence>
    m_hCurrentThirdPersonSequence = 0x1610 # HSequence
    m_nSilencerBoneIndex = 0x1614 # int32_t
    m_thirdPersonSequences = 0x1618 # HSequence[7]
    m_ClientPreviousWeaponState = 0x1650 # CSWeaponState_t
    m_iState = 0x1654 # CSWeaponState_t
    m_flCrosshairDistance = 0x1658 # float
    m_iAmmoLastCheck = 0x165C # int32_t
    m_iAlpha = 0x1660 # int32_t
    m_iScopeTextureID = 0x1664 # int32_t
    m_iCrosshairTextureID = 0x1668 # int32_t
    m_flGunAccuracyPosition = 0x166C # float
    m_nViewModelIndex = 0x1670 # uint32_t
    m_bReloadsWithClips = 0x1674 # bool
    m_flTimeWeaponIdle = 0x1678 # GameTime_t
    m_bFireOnEmpty = 0x167C # bool
    m_OnPlayerPickup = 0x1680 # CEntityIOOutput
    m_weaponMode = 0x16A8 # CSWeaponMode
    m_flTurningInaccuracyDelta = 0x16AC # float
    m_vecTurningInaccuracyEyeDirLast = 0x16B0 # Vector
    m_flTurningInaccuracy = 0x16BC # float
    m_fAccuracyPenalty = 0x16C0 # float
    m_flLastAccuracyUpdateTime = 0x16C4 # GameTime_t
    m_fAccuracySmoothedForZoom = 0x16C8 # float
    m_fScopeZoomEndTime = 0x16CC # GameTime_t
    m_iRecoilIndex = 0x16D0 # int32_t
    m_flRecoilIndex = 0x16D4 # float
    m_bBurstMode = 0x16D8 # bool
    m_nPostponeFireReadyTicks = 0x16DC # GameTick_t
    m_flPostponeFireReadyFrac = 0x16E0 # float
    m_bInReload = 0x16E4 # bool
    m_bReloadVisuallyComplete = 0x16E5 # bool
    m_flDroppedAtTime = 0x16E8 # GameTime_t
    m_bIsHauledBack = 0x16EC # bool
    m_bSilencerOn = 0x16ED # bool
    m_flTimeSilencerSwitchComplete = 0x16F0 # GameTime_t
    m_iOriginalTeamNumber = 0x16F4 # int32_t
    m_flNextAttackRenderTimeOffset = 0x16F8 # float
    m_bVisualsDataSet = 0x1780 # bool
    m_bOldFirstPersonSpectatedState = 0x1781 # bool
    m_hOurPing = 0x1784 # CHandle<C_BaseEntity>
    m_nOurPingIndex = 0x1788 # CEntityIndex
    m_vecOurPingPos = 0x178C # Vector
    m_bGlowForPing = 0x1798 # bool
    m_bUIWeapon = 0x1799 # bool
    m_hPrevOwner = 0x17A8 # CHandle<C_CSPlayerPawn>
    m_nDropTick = 0x17AC # GameTick_t
    m_donated = 0x17CC # bool
    m_fLastShotTime = 0x17D0 # GameTime_t
    m_bWasOwnedByCT = 0x17D4 # bool
    m_bWasOwnedByTerrorist = 0x17D5 # bool
    m_gunHeat = 0x17D8 # float
    m_smokeAttachments = 0x17DC # uint32_t
    m_lastSmokeTime = 0x17E0 # GameTime_t
    m_flNextClientFireBulletTime = 0x17E4 # float
    m_flNextClientFireBulletTime_Repredict = 0x17E8 # float
    m_IronSightController = 0x18C0 # C_IronSightController
    m_iIronSightMode = 0x1970 # int32_t
    m_flLastLOSTraceFailureTime = 0x1980 # GameTime_t
    m_iNumEmptyAttacks = 0x1984 # int32_t
    m_flLastMagDropRequestTime = 0x1A00 # GameTime_t

class C_CSWeaponBaseGun: # C_CSWeaponBase
    m_zoomLevel = 0x1A10 # int32_t
    m_iBurstShotsRemaining = 0x1A14 # int32_t
    m_iSilencerBodygroup = 0x1A18 # int32_t
    m_silencedModelIndex = 0x1A28 # int32_t
    m_inPrecache = 0x1A2C # bool
    m_bNeedsBoltAction = 0x1A2D # bool

class C_Chicken: # C_DynamicProp
    m_hHolidayHatAddon = 0x10F0 # CHandle<CBaseAnimGraph>
    m_jumpedThisFrame = 0x10F4 # bool
    m_leader = 0x10F8 # CHandle<C_CSPlayerPawnBase>
    m_AttributeManager = 0x1100 # C_AttributeContainer
    m_OriginalOwnerXuidLow = 0x15A8 # uint32_t
    m_OriginalOwnerXuidHigh = 0x15AC # uint32_t
    m_bAttributesInitialized = 0x15B0 # bool
    m_hWaterWakeParticles = 0x15B4 # ParticleIndex_t

class C_ClientRagdoll: # CBaseAnimGraph
    m_bFadeOut = 0xE80 # bool
    m_bImportant = 0xE81 # bool
    m_flEffectTime = 0xE84 # GameTime_t
    m_gibDespawnTime = 0xE88 # GameTime_t
    m_iCurrentFriction = 0xE8C # int32_t
    m_iMinFriction = 0xE90 # int32_t
    m_iMaxFriction = 0xE94 # int32_t
    m_iFrictionAnimState = 0xE98 # int32_t
    m_bReleaseRagdoll = 0xE9C # bool
    m_iEyeAttachment = 0xE9D # AttachmentHandle_t
    m_bFadingOut = 0xE9E # bool
    m_flScaleEnd = 0xEA0 # float[10]
    m_flScaleTimeStart = 0xEC8 # GameTime_t[10]
    m_flScaleTimeEnd = 0xEF0 # GameTime_t[10]

class C_ColorCorrection: # C_BaseEntity
    m_vecOrigin = 0x540 # Vector
    m_MinFalloff = 0x54C # float
    m_MaxFalloff = 0x550 # float
    m_flFadeInDuration = 0x554 # float
    m_flFadeOutDuration = 0x558 # float
    m_flMaxWeight = 0x55C # float
    m_flCurWeight = 0x560 # float
    m_netlookupFilename = 0x564 # char[512]
    m_bEnabled = 0x764 # bool
    m_bMaster = 0x765 # bool
    m_bClientSide = 0x766 # bool
    m_bExclusive = 0x767 # bool
    m_bEnabledOnClient = 0x768 # bool[1]
    m_flCurWeightOnClient = 0x76C # float[1]
    m_bFadingIn = 0x770 # bool[1]
    m_flFadeStartWeight = 0x774 # float[1]
    m_flFadeStartTime = 0x778 # float[1]
    m_flFadeDuration = 0x77C # float[1]

class C_ColorCorrectionVolume: # C_BaseTrigger
    m_LastEnterWeight = 0xCC8 # float
    m_LastEnterTime = 0xCCC # float
    m_LastExitWeight = 0xCD0 # float
    m_LastExitTime = 0xCD4 # float
    m_bEnabled = 0xCD8 # bool
    m_MaxWeight = 0xCDC # float
    m_FadeDuration = 0xCE0 # float
    m_Weight = 0xCE4 # float
    m_lookupFilename = 0xCE8 # char[512]

class C_CommandContext:
    needsprocessing = 0x0 # bool
    command_number = 0xA8 # int32_t

class C_CsmFovOverride: # C_BaseEntity
    m_cameraName = 0x540 # CUtlString
    m_flCsmFovOverrideValue = 0x548 # float

class C_DEagle: # C_CSWeaponBaseGun

class C_DecoyGrenade: # C_BaseCSGrenade

class C_DecoyProjectile: # C_BaseCSGrenadeProjectile
    m_nDecoyShotTick = 0x1100 # int32_t
    m_nClientLastKnownDecoyShotTick = 0x1104 # int32_t
    m_flTimeParticleEffectSpawn = 0x1128 # GameTime_t

class C_DynamicLight: # C_BaseModelEntity
    m_Flags = 0xCC0 # uint8_t
    m_LightStyle = 0xCC1 # uint8_t
    m_Radius = 0xCC4 # float
    m_Exponent = 0xCC8 # int32_t
    m_InnerAngle = 0xCCC # float
    m_OuterAngle = 0xCD0 # float
    m_SpotRadius = 0xCD4 # float

class C_DynamicProp: # C_BreakableProp
    m_bUseHitboxesForRenderBox = 0xFD0 # bool
    m_bUseAnimGraph = 0xFD1 # bool
    m_pOutputAnimBegun = 0xFD8 # CEntityIOOutput
    m_pOutputAnimOver = 0x1000 # CEntityIOOutput
    m_pOutputAnimLoopCycleOver = 0x1028 # CEntityIOOutput
    m_OnAnimReachedStart = 0x1050 # CEntityIOOutput
    m_OnAnimReachedEnd = 0x1078 # CEntityIOOutput
    m_iszDefaultAnim = 0x10A0 # CUtlSymbolLarge
    m_nDefaultAnimLoopMode = 0x10A8 # AnimLoopMode_t
    m_bAnimateOnServer = 0x10AC # bool
    m_bRandomizeCycle = 0x10AD # bool
    m_bStartDisabled = 0x10AE # bool
    m_bScriptedMovement = 0x10AF # bool
    m_bFiredStartEndOutput = 0x10B0 # bool
    m_bForceNpcExclude = 0x10B1 # bool
    m_bCreateNonSolid = 0x10B2 # bool
    m_bIsOverrideProp = 0x10B3 # bool
    m_iInitialGlowState = 0x10B4 # int32_t
    m_nGlowRange = 0x10B8 # int32_t
    m_nGlowRangeMin = 0x10BC # int32_t
    m_glowColor = 0x10C0 # Color
    m_nGlowTeam = 0x10C4 # int32_t
    m_iCachedFrameCount = 0x10C8 # int32_t
    m_vecCachedRenderMins = 0x10CC # Vector
    m_vecCachedRenderMaxs = 0x10D8 # Vector

class C_DynamicPropAlias_cable_dynamic: # C_DynamicProp

class C_DynamicPropAlias_dynamic_prop: # C_DynamicProp

class C_DynamicPropAlias_prop_dynamic_override: # C_DynamicProp

class C_EconEntity: # C_BaseFlex
    m_flFlexDelayTime = 0x1028 # float
    m_flFlexDelayedWeight = 0x1030 # float*
    m_bAttributesInitialized = 0x1038 # bool
    m_AttributeManager = 0x1040 # C_AttributeContainer
    m_OriginalOwnerXuidLow = 0x14E8 # uint32_t
    m_OriginalOwnerXuidHigh = 0x14EC # uint32_t
    m_nFallbackPaintKit = 0x14F0 # int32_t
    m_nFallbackSeed = 0x14F4 # int32_t
    m_flFallbackWear = 0x14F8 # float
    m_nFallbackStatTrak = 0x14FC # int32_t
    m_bClientside = 0x1500 # bool
    m_bParticleSystemsCreated = 0x1501 # bool
    m_vecAttachedParticles = 0x1508 # CUtlVector<int32_t>
    m_hViewmodelAttachment = 0x1520 # CHandle<CBaseAnimGraph>
    m_iOldTeam = 0x1524 # int32_t
    m_bAttachmentDirty = 0x1528 # bool
    m_nUnloadedModelIndex = 0x152C # int32_t
    m_iNumOwnerValidationRetries = 0x1530 # int32_t
    m_hOldProvidee = 0x1540 # CHandle<C_BaseEntity>
    m_vecAttachedModels = 0x1548 # CUtlVector<C_EconEntity::AttachedModelData_t>

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
    m_bIsStoreItem = 0x1E9 # bool
    m_bIsTradeItem = 0x1EA # bool
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
    m_nForceSkin = 0x1560 # int32_t
    m_bAlwaysAllow = 0x1564 # bool

class C_EntityDissolve: # C_BaseModelEntity
    m_flStartTime = 0xCC8 # GameTime_t
    m_flFadeInStart = 0xCCC # float
    m_flFadeInLength = 0xCD0 # float
    m_flFadeOutModelStart = 0xCD4 # float
    m_flFadeOutModelLength = 0xCD8 # float
    m_flFadeOutStart = 0xCDC # float
    m_flFadeOutLength = 0xCE0 # float
    m_flNextSparkTime = 0xCE4 # GameTime_t
    m_nDissolveType = 0xCE8 # EntityDisolveType_t
    m_vDissolverOrigin = 0xCEC # Vector
    m_nMagnitude = 0xCF8 # uint32_t
    m_bCoreExplode = 0xCFC # bool
    m_bLinkedToServerEnt = 0xCFD # bool

class C_EntityFlame: # C_BaseEntity
    m_hEntAttached = 0x540 # CHandle<C_BaseEntity>
    m_hOldAttached = 0x568 # CHandle<C_BaseEntity>
    m_bCheapEffect = 0x56C # bool

class C_EnvCombinedLightProbeVolume: # C_BaseEntity
    m_Color = 0x1598 # Color
    m_flBrightness = 0x159C # float
    m_hCubemapTexture = 0x15A0 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_bCustomCubemapTexture = 0x15A8 # bool
    m_hLightProbeTexture = 0x15B0 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hLightProbeDirectLightIndicesTexture = 0x15B8 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hLightProbeDirectLightScalarsTexture = 0x15C0 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hLightProbeDirectLightShadowsTexture = 0x15C8 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_vBoxMins = 0x15D0 # Vector
    m_vBoxMaxs = 0x15DC # Vector
    m_bMoveable = 0x15E8 # bool
    m_nHandshake = 0x15EC # int32_t
    m_nEnvCubeMapArrayIndex = 0x15F0 # int32_t
    m_nPriority = 0x15F4 # int32_t
    m_bStartDisabled = 0x15F8 # bool
    m_flEdgeFadeDist = 0x15FC # float
    m_vEdgeFadeDists = 0x1600 # Vector
    m_nLightProbeSizeX = 0x160C # int32_t
    m_nLightProbeSizeY = 0x1610 # int32_t
    m_nLightProbeSizeZ = 0x1614 # int32_t
    m_nLightProbeAtlasX = 0x1618 # int32_t
    m_nLightProbeAtlasY = 0x161C # int32_t
    m_nLightProbeAtlasZ = 0x1620 # int32_t
    m_bEnabled = 0x1639 # bool

class C_EnvCubemap: # C_BaseEntity
    m_hCubemapTexture = 0x5C0 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_bCustomCubemapTexture = 0x5C8 # bool
    m_flInfluenceRadius = 0x5CC # float
    m_vBoxProjectMins = 0x5D0 # Vector
    m_vBoxProjectMaxs = 0x5DC # Vector
    m_bMoveable = 0x5E8 # bool
    m_nHandshake = 0x5EC # int32_t
    m_nEnvCubeMapArrayIndex = 0x5F0 # int32_t
    m_nPriority = 0x5F4 # int32_t
    m_flEdgeFadeDist = 0x5F8 # float
    m_vEdgeFadeDists = 0x5FC # Vector
    m_flDiffuseScale = 0x608 # float
    m_bStartDisabled = 0x60C # bool
    m_bDefaultEnvMap = 0x60D # bool
    m_bDefaultSpecEnvMap = 0x60E # bool
    m_bIndoorCubeMap = 0x60F # bool
    m_bCopyDiffuseFromDefaultCubemap = 0x610 # bool
    m_bEnabled = 0x620 # bool

class C_EnvCubemapBox: # C_EnvCubemap

class C_EnvCubemapFog: # C_BaseEntity
    m_flEndDistance = 0x540 # float
    m_flStartDistance = 0x544 # float
    m_flFogFalloffExponent = 0x548 # float
    m_bHeightFogEnabled = 0x54C # bool
    m_flFogHeightWidth = 0x550 # float
    m_flFogHeightEnd = 0x554 # float
    m_flFogHeightStart = 0x558 # float
    m_flFogHeightExponent = 0x55C # float
    m_flLODBias = 0x560 # float
    m_bActive = 0x564 # bool
    m_bStartDisabled = 0x565 # bool
    m_flFogMaxOpacity = 0x568 # float
    m_nCubemapSourceType = 0x56C # int32_t
    m_hSkyMaterial = 0x570 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_iszSkyEntity = 0x578 # CUtlSymbolLarge
    m_hFogCubemapTexture = 0x580 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_bHasHeightFogEnd = 0x588 # bool
    m_bFirstTime = 0x589 # bool

class C_EnvDecal: # C_BaseModelEntity
    m_hDecalMaterial = 0xCC0 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_flWidth = 0xCC8 # float
    m_flHeight = 0xCCC # float
    m_flDepth = 0xCD0 # float
    m_nRenderOrder = 0xCD4 # uint32_t
    m_bProjectOnWorld = 0xCD8 # bool
    m_bProjectOnCharacters = 0xCD9 # bool
    m_bProjectOnWater = 0xCDA # bool
    m_flDepthSortBias = 0xCDC # float

class C_EnvDetailController: # C_BaseEntity
    m_flFadeStartDist = 0x540 # float
    m_flFadeEndDist = 0x544 # float

class C_EnvLightProbeVolume: # C_BaseEntity
    m_hLightProbeTexture = 0x1518 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hLightProbeDirectLightIndicesTexture = 0x1520 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hLightProbeDirectLightScalarsTexture = 0x1528 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hLightProbeDirectLightShadowsTexture = 0x1530 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_vBoxMins = 0x1538 # Vector
    m_vBoxMaxs = 0x1544 # Vector
    m_bMoveable = 0x1550 # bool
    m_nHandshake = 0x1554 # int32_t
    m_nPriority = 0x1558 # int32_t
    m_bStartDisabled = 0x155C # bool
    m_nLightProbeSizeX = 0x1560 # int32_t
    m_nLightProbeSizeY = 0x1564 # int32_t
    m_nLightProbeSizeZ = 0x1568 # int32_t
    m_nLightProbeAtlasX = 0x156C # int32_t
    m_nLightProbeAtlasY = 0x1570 # int32_t
    m_nLightProbeAtlasZ = 0x1574 # int32_t
    m_bEnabled = 0x1581 # bool

class C_EnvParticleGlow: # C_ParticleSystem
    m_flAlphaScale = 0x1270 # float
    m_flRadiusScale = 0x1274 # float
    m_flSelfIllumScale = 0x1278 # float
    m_ColorTint = 0x127C # Color
    m_hTextureOverride = 0x1280 # CStrongHandle<InfoForResourceTypeCTextureBase>

class C_EnvProjectedTexture: # C_ModelPointEntity

class C_EnvScreenOverlay: # C_PointEntity
    m_iszOverlayNames = 0x540 # CUtlSymbolLarge[10]
    m_flOverlayTimes = 0x590 # float[10]
    m_flStartTime = 0x5B8 # GameTime_t
    m_iDesiredOverlay = 0x5BC # int32_t
    m_bIsActive = 0x5C0 # bool
    m_bWasActive = 0x5C1 # bool
    m_iCachedDesiredOverlay = 0x5C4 # int32_t
    m_iCurrentOverlay = 0x5C8 # int32_t
    m_flCurrentOverlayTime = 0x5CC # GameTime_t

class C_EnvSky: # C_BaseModelEntity
    m_hSkyMaterial = 0xCC0 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_hSkyMaterialLightingOnly = 0xCC8 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_bStartDisabled = 0xCD0 # bool
    m_vTintColor = 0xCD1 # Color
    m_vTintColorLightingOnly = 0xCD5 # Color
    m_flBrightnessScale = 0xCDC # float
    m_nFogType = 0xCE0 # int32_t
    m_flFogMinStart = 0xCE4 # float
    m_flFogMinEnd = 0xCE8 # float
    m_flFogMaxStart = 0xCEC # float
    m_flFogMaxEnd = 0xCF0 # float
    m_bEnabled = 0xCF4 # bool

class C_EnvVolumetricFogController: # C_BaseEntity
    m_flScattering = 0x540 # float
    m_flAnisotropy = 0x544 # float
    m_flFadeSpeed = 0x548 # float
    m_flDrawDistance = 0x54C # float
    m_flFadeInStart = 0x550 # float
    m_flFadeInEnd = 0x554 # float
    m_flIndirectStrength = 0x558 # float
    m_nIndirectTextureDimX = 0x55C # int32_t
    m_nIndirectTextureDimY = 0x560 # int32_t
    m_nIndirectTextureDimZ = 0x564 # int32_t
    m_vBoxMins = 0x568 # Vector
    m_vBoxMaxs = 0x574 # Vector
    m_bActive = 0x580 # bool
    m_flStartAnisoTime = 0x584 # GameTime_t
    m_flStartScatterTime = 0x588 # GameTime_t
    m_flStartDrawDistanceTime = 0x58C # GameTime_t
    m_flStartAnisotropy = 0x590 # float
    m_flStartScattering = 0x594 # float
    m_flStartDrawDistance = 0x598 # float
    m_flDefaultAnisotropy = 0x59C # float
    m_flDefaultScattering = 0x5A0 # float
    m_flDefaultDrawDistance = 0x5A4 # float
    m_bStartDisabled = 0x5A8 # bool
    m_bEnableIndirect = 0x5A9 # bool
    m_bIsMaster = 0x5AA # bool
    m_hFogIndirectTexture = 0x5B0 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_nForceRefreshCount = 0x5B8 # int32_t
    m_bFirstTime = 0x5BC # bool

class C_EnvVolumetricFogVolume: # C_BaseEntity
    m_bActive = 0x540 # bool
    m_vBoxMins = 0x544 # Vector
    m_vBoxMaxs = 0x550 # Vector
    m_bStartDisabled = 0x55C # bool
    m_flStrength = 0x560 # float
    m_nFalloffShape = 0x564 # int32_t
    m_flFalloffExponent = 0x568 # float

class C_EnvWind: # C_BaseEntity
    m_EnvWindShared = 0x540 # C_EnvWindShared

class C_EnvWindClientside: # C_BaseEntity
    m_EnvWindShared = 0x540 # C_EnvWindShared

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
    m_nFlameModelIndex = 0x550 # int32_t
    m_nFlameFromAboveModelIndex = 0x554 # int32_t
    m_flScaleRegister = 0x558 # float
    m_flScaleStart = 0x55C # float
    m_flScaleEnd = 0x560 # float
    m_flScaleTimeStart = 0x564 # GameTime_t
    m_flScaleTimeEnd = 0x568 # GameTime_t
    m_flChildFlameSpread = 0x56C # float
    m_flClipPerc = 0x580 # float
    m_bClipTested = 0x584 # bool
    m_bFadingOut = 0x585 # bool
    m_tParticleSpawn = 0x588 # TimedEvent
    m_pFireOverlay = 0x590 # CFireOverlay*

class C_FireSprite: # C_Sprite
    m_vecMoveDir = 0xDF0 # Vector
    m_bFadeFromAbove = 0xDFC # bool

class C_Fish: # CBaseAnimGraph
    m_pos = 0xE80 # Vector
    m_vel = 0xE8C # Vector
    m_angles = 0xE98 # QAngle
    m_localLifeState = 0xEA4 # int32_t
    m_deathDepth = 0xEA8 # float
    m_deathAngle = 0xEAC # float
    m_buoyancy = 0xEB0 # float
    m_wiggleTimer = 0xEB8 # CountdownTimer
    m_wigglePhase = 0xED0 # float
    m_wiggleRate = 0xED4 # float
    m_actualPos = 0xED8 # Vector
    m_actualAngles = 0xEE4 # QAngle
    m_poolOrigin = 0xEF0 # Vector
    m_waterLevel = 0xEFC # float
    m_gotUpdate = 0xF00 # bool
    m_x = 0xF04 # float
    m_y = 0xF08 # float
    m_z = 0xF0C # float
    m_angle = 0xF10 # float
    m_errorHistory = 0xF14 # float[20]
    m_errorHistoryIndex = 0xF64 # int32_t
    m_errorHistoryCount = 0xF68 # int32_t
    m_averageError = 0xF6C # float

class C_Fists: # C_CSWeaponBase
    m_bPlayingUninterruptableAct = 0x1A10 # bool
    m_nUninterruptableActivity = 0x1A14 # PlayerAnimEvent_t

class C_Flashbang: # C_BaseCSGrenade

class C_FlashbangProjectile: # C_BaseCSGrenadeProjectile

class C_FogController: # C_BaseEntity
    m_fog = 0x540 # fogparams_t
    m_bUseAngles = 0x5A8 # bool
    m_iChangedVariables = 0x5AC # int32_t

class C_FootstepControl: # C_BaseTrigger
    m_source = 0xCC8 # CUtlSymbolLarge
    m_destination = 0xCD0 # CUtlSymbolLarge

class C_FuncBrush: # C_BaseModelEntity

class C_FuncConveyor: # C_BaseModelEntity
    m_vecMoveDirEntitySpace = 0xCC8 # Vector
    m_flTargetSpeed = 0xCD4 # float
    m_nTransitionStartTick = 0xCD8 # GameTick_t
    m_nTransitionDurationTicks = 0xCDC # int32_t
    m_flTransitionStartSpeed = 0xCE0 # float
    m_hConveyorModels = 0xCE8 # C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
    m_flCurrentConveyorOffset = 0xD00 # float
    m_flCurrentConveyorSpeed = 0xD04 # float

class C_FuncElectrifiedVolume: # C_FuncBrush
    m_nAmbientEffect = 0xCC0 # ParticleIndex_t
    m_EffectName = 0xCC8 # CUtlSymbolLarge
    m_bState = 0xCD0 # bool

class C_FuncLadder: # C_BaseModelEntity
    m_vecLadderDir = 0xCC0 # Vector
    m_Dismounts = 0xCD0 # CUtlVector<CHandle<C_InfoLadderDismount>>
    m_vecLocalTop = 0xCE8 # Vector
    m_vecPlayerMountPositionTop = 0xCF4 # Vector
    m_vecPlayerMountPositionBottom = 0xD00 # Vector
    m_flAutoRideSpeed = 0xD0C # float
    m_bDisabled = 0xD10 # bool
    m_bFakeLadder = 0xD11 # bool
    m_bHasSlack = 0xD12 # bool

class C_FuncMonitor: # C_FuncBrush
    m_targetCamera = 0xCC0 # CUtlString
    m_nResolutionEnum = 0xCC8 # int32_t
    m_bRenderShadows = 0xCCC # bool
    m_bUseUniqueColorTarget = 0xCCD # bool
    m_brushModelName = 0xCD0 # CUtlString
    m_hTargetCamera = 0xCD8 # CHandle<C_BaseEntity>
    m_bEnabled = 0xCDC # bool
    m_bDraw3DSkybox = 0xCDD # bool

class C_FuncMoveLinear: # C_BaseToggle

class C_FuncRotating: # C_BaseModelEntity

class C_FuncTrackTrain: # C_BaseModelEntity
    m_nLongAxis = 0xCC0 # int32_t
    m_flRadius = 0xCC4 # float
    m_flLineLength = 0xCC8 # float

class C_GameRules:

class C_GameRulesProxy: # C_BaseEntity

class C_GlobalLight: # C_BaseEntity
    m_WindClothForceHandle = 0xA00 # uint16_t

class C_GradientFog: # C_BaseEntity
    m_hGradientFogTexture = 0x540 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_flFogStartDistance = 0x548 # float
    m_flFogEndDistance = 0x54C # float
    m_bHeightFogEnabled = 0x550 # bool
    m_flFogStartHeight = 0x554 # float
    m_flFogEndHeight = 0x558 # float
    m_flFarZ = 0x55C # float
    m_flFogMaxOpacity = 0x560 # float
    m_flFogFalloffExponent = 0x564 # float
    m_flFogVerticalExponent = 0x568 # float
    m_fogColor = 0x56C # Color
    m_flFogStrength = 0x570 # float
    m_flFadeTime = 0x574 # float
    m_bStartDisabled = 0x578 # bool
    m_bIsEnabled = 0x579 # bool
    m_bGradientFogNeedsTextures = 0x57A # bool

class C_HEGrenade: # C_BaseCSGrenade

class C_HEGrenadeProjectile: # C_BaseCSGrenadeProjectile

class C_HandleTest: # C_BaseEntity
    m_Handle = 0x540 # CHandle<C_BaseEntity>
    m_bSendHandle = 0x544 # bool

class C_Hostage: # C_BaseCombatCharacter
    m_entitySpottedState = 0x10A8 # EntitySpottedState_t
    m_leader = 0x10C0 # CHandle<C_BaseEntity>
    m_reuseTimer = 0x10C8 # CountdownTimer
    m_vel = 0x10E0 # Vector
    m_isRescued = 0x10EC # bool
    m_jumpedThisFrame = 0x10ED # bool
    m_nHostageState = 0x10F0 # int32_t
    m_bHandsHaveBeenCut = 0x10F4 # bool
    m_hHostageGrabber = 0x10F8 # CHandle<C_CSPlayerPawn>
    m_fLastGrabTime = 0x10FC # GameTime_t
    m_vecGrabbedPos = 0x1100 # Vector
    m_flRescueStartTime = 0x110C # GameTime_t
    m_flGrabSuccessTime = 0x1110 # GameTime_t
    m_flDropStartTime = 0x1114 # GameTime_t
    m_flDeadOrRescuedTime = 0x1118 # GameTime_t
    m_blinkTimer = 0x1120 # CountdownTimer
    m_lookAt = 0x1138 # Vector
    m_lookAroundTimer = 0x1148 # CountdownTimer
    m_isInit = 0x1160 # bool
    m_eyeAttachment = 0x1161 # AttachmentHandle_t
    m_chestAttachment = 0x1162 # AttachmentHandle_t
    m_pPredictionOwner = 0x1168 # CBasePlayerController*
    m_fNewestAlphaThinkTime = 0x1170 # GameTime_t

class C_HostageCarriableProp: # CBaseAnimGraph

class C_IncendiaryGrenade: # C_MolotovGrenade

class C_Inferno: # C_BaseModelEntity
    m_nfxFireDamageEffect = 0xD00 # ParticleIndex_t
    m_firePositions = 0xD04 # Vector[64]
    m_fireParentPositions = 0x1004 # Vector[64]
    m_bFireIsBurning = 0x1304 # bool[64]
    m_BurnNormal = 0x1344 # Vector[64]
    m_fireCount = 0x1644 # int32_t
    m_nInfernoType = 0x1648 # int32_t
    m_nFireLifetime = 0x164C # float
    m_bInPostEffectTime = 0x1650 # bool
    m_lastFireCount = 0x1654 # int32_t
    m_nFireEffectTickBegin = 0x1658 # int32_t
    m_drawableCount = 0x8260 # int32_t
    m_blosCheck = 0x8264 # bool
    m_nlosperiod = 0x8268 # int32_t
    m_maxFireHalfWidth = 0x826C # float
    m_maxFireHeight = 0x8270 # float
    m_minBounds = 0x8274 # Vector
    m_maxBounds = 0x8280 # Vector
    m_flLastGrassBurnThink = 0x828C # float

class C_InfoInstructorHintHostageRescueZone: # C_PointEntity

class C_InfoLadderDismount: # C_BaseEntity

class C_InfoVisibilityBox: # C_BaseEntity
    m_nMode = 0x544 # int32_t
    m_vBoxSize = 0x548 # Vector
    m_bEnabled = 0x554 # bool

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
    m_bShouldGlow = 0x1560 # bool
    m_pReticleHintTextName = 0x1561 # char[256]

class C_ItemDogtags: # C_Item
    m_OwningPlayer = 0x1668 # CHandle<C_CSPlayerPawn>
    m_KillingPlayer = 0x166C # CHandle<C_CSPlayerPawn>

class C_Item_Healthshot: # C_WeaponBaseItem

class C_Knife: # C_CSWeaponBase

class C_LightDirectionalEntity: # C_LightEntity

class C_LightEntity: # C_BaseModelEntity
    m_CLightComponent = 0xCC0 # CLightComponent*

class C_LightEnvironmentEntity: # C_LightDirectionalEntity

class C_LightGlow: # C_BaseModelEntity
    m_nHorizontalSize = 0xCC0 # uint32_t
    m_nVerticalSize = 0xCC4 # uint32_t
    m_nMinDist = 0xCC8 # uint32_t
    m_nMaxDist = 0xCCC # uint32_t
    m_nOuterMaxDist = 0xCD0 # uint32_t
    m_flGlowProxySize = 0xCD4 # float
    m_flHDRColorScale = 0xCD8 # float
    m_Glow = 0xCE0 # C_LightGlowOverlay

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
    flags = 0xE98 # int32_t
    die = 0xE9C # GameTime_t
    m_flFrameMax = 0xEA0 # float
    x = 0xEA4 # float
    y = 0xEA8 # float
    fadeSpeed = 0xEAC # float
    bounceFactor = 0xEB0 # float
    hitSound = 0xEB4 # int32_t
    priority = 0xEB8 # int32_t
    tentOffset = 0xEBC # Vector
    m_vecTempEntAngVelocity = 0xEC8 # QAngle
    tempent_renderamt = 0xED4 # int32_t
    m_vecNormal = 0xED8 # Vector
    m_flSpriteScale = 0xEE4 # float
    m_nFlickerFrame = 0xEE8 # int32_t
    m_flFrameRate = 0xEEC # float
    m_flFrame = 0xEF0 # float
    m_pszImpactEffect = 0xEF8 # char*
    m_pszParticleEffect = 0xF00 # char*
    m_bParticleCollision = 0xF08 # bool
    m_iLastCollisionFrame = 0xF0C # int32_t
    m_vLastCollisionOrigin = 0xF10 # Vector
    m_vecTempEntVelocity = 0xF1C # Vector
    m_vecPrevAbsOrigin = 0xF28 # Vector
    m_vecTempEntAcceleration = 0xF34 # Vector

class C_MapPreviewParticleSystem: # C_ParticleSystem

class C_MapVetoPickController: # C_BaseEntity
    m_nDraftType = 0x550 # int32_t
    m_nTeamWinningCoinToss = 0x554 # int32_t
    m_nTeamWithFirstChoice = 0x558 # int32_t[64]
    m_nVoteMapIdsList = 0x658 # int32_t[7]
    m_nAccountIDs = 0x674 # int32_t[64]
    m_nMapId0 = 0x774 # int32_t[64]
    m_nMapId1 = 0x874 # int32_t[64]
    m_nMapId2 = 0x974 # int32_t[64]
    m_nMapId3 = 0xA74 # int32_t[64]
    m_nMapId4 = 0xB74 # int32_t[64]
    m_nMapId5 = 0xC74 # int32_t[64]
    m_nStartingSide0 = 0xD74 # int32_t[64]
    m_nCurrentPhase = 0xE74 # int32_t
    m_nPhaseStartTick = 0xE78 # int32_t
    m_nPhaseDurationTicks = 0xE7C # int32_t
    m_nPostDataUpdateTick = 0xE80 # int32_t
    m_bDisabledHud = 0xE84 # bool

class C_Melee: # C_CSWeaponBase

class C_ModelPointEntity: # C_BaseModelEntity

class C_MolotovGrenade: # C_BaseCSGrenade

class C_MolotovProjectile: # C_BaseCSGrenadeProjectile
    m_bIsIncGrenade = 0x1100 # bool

class C_Multimeter: # CBaseAnimGraph
    m_hTargetC4 = 0xE88 # CHandle<C_PlantedC4>

class C_MultiplayRules: # C_GameRules

class C_NetTestBaseCombatCharacter: # C_BaseCombatCharacter

class C_OmniLight: # C_BarnLight
    m_flInnerAngle = 0xF08 # float
    m_flOuterAngle = 0xF0C # float
    m_bShowLight = 0xF10 # bool

class C_ParticleSystem: # C_BaseModelEntity
    m_szSnapshotFileName = 0xCC0 # char[512]
    m_bActive = 0xEC0 # bool
    m_bFrozen = 0xEC1 # bool
    m_flFreezeTransitionDuration = 0xEC4 # float
    m_nStopType = 0xEC8 # int32_t
    m_bAnimateDuringGameplayPause = 0xECC # bool
    m_iEffectIndex = 0xED0 # CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_flStartTime = 0xED8 # GameTime_t
    m_flPreSimTime = 0xEDC # float
    m_vServerControlPoints = 0xEE0 # Vector[4]
    m_iServerControlPointAssignments = 0xF10 # uint8_t[4]
    m_hControlPointEnts = 0xF14 # CHandle<C_BaseEntity>[64]
    m_bNoSave = 0x1014 # bool
    m_bNoFreeze = 0x1015 # bool
    m_bNoRamp = 0x1016 # bool
    m_bStartActive = 0x1017 # bool
    m_iszEffectName = 0x1018 # CUtlSymbolLarge
    m_iszControlPointNames = 0x1020 # CUtlSymbolLarge[64]
    m_nDataCP = 0x1220 # int32_t
    m_vecDataCPValue = 0x1224 # Vector
    m_nTintCP = 0x1230 # int32_t
    m_clrTint = 0x1234 # Color
    m_bOldActive = 0x1258 # bool
    m_bOldFrozen = 0x1259 # bool

class C_PathParticleRope: # C_BaseEntity
    m_bStartActive = 0x540 # bool
    m_flMaxSimulationTime = 0x544 # float
    m_iszEffectName = 0x548 # CUtlSymbolLarge
    m_PathNodes_Name = 0x550 # CUtlVector<CUtlSymbolLarge>
    m_flParticleSpacing = 0x568 # float
    m_flSlack = 0x56C # float
    m_flRadius = 0x570 # float
    m_ColorTint = 0x574 # Color
    m_nEffectState = 0x578 # int32_t
    m_iEffectIndex = 0x580 # CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_PathNodes_Position = 0x588 # C_NetworkUtlVectorBase<Vector>
    m_PathNodes_TangentIn = 0x5A0 # C_NetworkUtlVectorBase<Vector>
    m_PathNodes_TangentOut = 0x5B8 # C_NetworkUtlVectorBase<Vector>
    m_PathNodes_Color = 0x5D0 # C_NetworkUtlVectorBase<Vector>
    m_PathNodes_PinEnabled = 0x5E8 # C_NetworkUtlVectorBase<bool>
    m_PathNodes_RadiusScale = 0x600 # C_NetworkUtlVectorBase<float>

class C_PathParticleRopeAlias_path_particle_rope_clientside: # C_PathParticleRope

class C_PhysBox: # C_Breakable

class C_PhysMagnet: # CBaseAnimGraph
    m_aAttachedObjectsFromServer = 0xE80 # CUtlVector<int32_t>
    m_aAttachedObjects = 0xE98 # CUtlVector<CHandle<C_BaseEntity>>

class C_PhysPropClientside: # C_BreakableProp
    m_flTouchDelta = 0xFD0 # GameTime_t
    m_fDeathTime = 0xFD4 # GameTime_t
    m_impactEnergyScale = 0xFD8 # float
    m_inertiaScale = 0xFDC # float
    m_flDmgModBullet = 0xFE0 # float
    m_flDmgModClub = 0xFE4 # float
    m_flDmgModExplosive = 0xFE8 # float
    m_flDmgModFire = 0xFEC # float
    m_iszPhysicsDamageTableName = 0xFF0 # CUtlSymbolLarge
    m_iszBasePropData = 0xFF8 # CUtlSymbolLarge
    m_iInteractions = 0x1000 # int32_t
    m_bHasBreakPiecesOrCommands = 0x1004 # bool
    m_vecDamagePosition = 0x1008 # Vector
    m_vecDamageDirection = 0x1014 # Vector
    m_nDamageType = 0x1020 # int32_t

class C_PhysicsProp: # C_BreakableProp
    m_bAwake = 0xFD0 # bool

class C_PhysicsPropMultiplayer: # C_PhysicsProp

class C_PickUpModelSlerper: # CBaseAnimGraph
    m_hPlayerParent = 0xE80 # CHandle<C_BaseEntity>
    m_hItem = 0xE84 # CHandle<C_BaseEntity>
    m_flTimePickedUp = 0xE88 # float
    m_angOriginal = 0xE8C # QAngle
    m_vecPosOriginal = 0xE98 # Vector
    m_angRandom = 0xEA8 # QAngle

class C_PlantedC4: # CBaseAnimGraph
    m_bBombTicking = 0xE80 # bool
    m_nBombSite = 0xE84 # int32_t
    m_nSourceSoundscapeHash = 0xE88 # int32_t
    m_entitySpottedState = 0xE90 # EntitySpottedState_t
    m_flNextGlow = 0xEA8 # GameTime_t
    m_flNextBeep = 0xEAC # GameTime_t
    m_flC4Blow = 0xEB0 # GameTime_t
    m_bCannotBeDefused = 0xEB4 # bool
    m_bHasExploded = 0xEB5 # bool
    m_flTimerLength = 0xEB8 # float
    m_bBeingDefused = 0xEBC # bool
    m_bTriggerWarning = 0xEC0 # float
    m_bExplodeWarning = 0xEC4 # float
    m_bC4Activated = 0xEC8 # bool
    m_bTenSecWarning = 0xEC9 # bool
    m_flDefuseLength = 0xECC # float
    m_flDefuseCountDown = 0xED0 # GameTime_t
    m_bBombDefused = 0xED4 # bool
    m_hBombDefuser = 0xED8 # CHandle<C_CSPlayerPawn>
    m_hControlPanel = 0xEDC # CHandle<C_BaseEntity>
    m_hDefuserMultimeter = 0xEE0 # CHandle<C_Multimeter>
    m_flNextRadarFlashTime = 0xEE4 # GameTime_t
    m_bRadarFlash = 0xEE8 # bool
    m_pBombDefuser = 0xEEC # CHandle<C_CSPlayerPawn>
    m_fLastDefuseTime = 0xEF0 # GameTime_t
    m_pPredictionOwner = 0xEF8 # CBasePlayerController*

class C_PlayerPing: # C_BaseEntity
    m_hPlayer = 0x570 # CHandle<C_CSPlayerPawn>
    m_hPingedEntity = 0x574 # CHandle<C_BaseEntity>
    m_iType = 0x578 # int32_t
    m_bUrgent = 0x57C # bool
    m_szPlaceName = 0x57D # char[18]

class C_PlayerSprayDecal: # C_ModelPointEntity
    m_nUniqueID = 0xCC0 # int32_t
    m_unAccountID = 0xCC4 # uint32_t
    m_unTraceID = 0xCC8 # uint32_t
    m_rtGcTime = 0xCCC # uint32_t
    m_vecEndPos = 0xCD0 # Vector
    m_vecStart = 0xCDC # Vector
    m_vecLeft = 0xCE8 # Vector
    m_vecNormal = 0xCF4 # Vector
    m_nPlayer = 0xD00 # int32_t
    m_nEntity = 0xD04 # int32_t
    m_nHitbox = 0xD08 # int32_t
    m_flCreationTime = 0xD0C # float
    m_nTintID = 0xD10 # int32_t
    m_nVersion = 0xD14 # uint8_t
    m_ubSignature = 0xD15 # uint8_t[128]
    m_SprayRenderHelper = 0xDA0 # CPlayerSprayDecalRenderHelper

class C_PlayerVisibility: # C_BaseEntity
    m_flVisibilityStrength = 0x540 # float
    m_flFogDistanceMultiplier = 0x544 # float
    m_flFogMaxDensityMultiplier = 0x548 # float
    m_flFadeTime = 0x54C # float
    m_bStartDisabled = 0x550 # bool
    m_bIsEnabled = 0x551 # bool

class C_PointCamera: # C_BaseEntity
    m_FOV = 0x540 # float
    m_Resolution = 0x544 # float
    m_bFogEnable = 0x548 # bool
    m_FogColor = 0x549 # Color
    m_flFogStart = 0x550 # float
    m_flFogEnd = 0x554 # float
    m_flFogMaxDensity = 0x558 # float
    m_bActive = 0x55C # bool
    m_bUseScreenAspectRatio = 0x55D # bool
    m_flAspectRatio = 0x560 # float
    m_bNoSky = 0x564 # bool
    m_fBrightness = 0x568 # float
    m_flZFar = 0x56C # float
    m_flZNear = 0x570 # float
    m_bCanHLTVUse = 0x574 # bool
    m_bDofEnabled = 0x575 # bool
    m_flDofNearBlurry = 0x578 # float
    m_flDofNearCrisp = 0x57C # float
    m_flDofFarCrisp = 0x580 # float
    m_flDofFarBlurry = 0x584 # float
    m_flDofTiltToGround = 0x588 # float
    m_TargetFOV = 0x58C # float
    m_DegreesPerSecond = 0x590 # float
    m_bIsOn = 0x594 # bool
    m_pNext = 0x598 # C_PointCamera*

class C_PointCameraVFOV: # C_PointCamera
    m_flVerticalFOV = 0x5A0 # float

class C_PointClientUIDialog: # C_BaseClientUIEntity
    m_hActivator = 0xCF0 # CHandle<C_BaseEntity>
    m_bStartEnabled = 0xCF4 # bool

class C_PointClientUIHUD: # C_BaseClientUIEntity
    m_bCheckCSSClasses = 0xCF8 # bool
    m_bIgnoreInput = 0xE80 # bool
    m_flWidth = 0xE84 # float
    m_flHeight = 0xE88 # float
    m_flDPI = 0xE8C # float
    m_flInteractDistance = 0xE90 # float
    m_flDepthOffset = 0xE94 # float
    m_unOwnerContext = 0xE98 # uint32_t
    m_unHorizontalAlign = 0xE9C # uint32_t
    m_unVerticalAlign = 0xEA0 # uint32_t
    m_unOrientation = 0xEA4 # uint32_t
    m_bAllowInteractionFromAllSceneWorlds = 0xEA8 # bool
    m_vecCSSClasses = 0xEB0 # C_NetworkUtlVectorBase<CUtlSymbolLarge>

class C_PointClientUIWorldPanel: # C_BaseClientUIEntity
    m_bForceRecreateNextUpdate = 0xCF8 # bool
    m_bMoveViewToPlayerNextThink = 0xCF9 # bool
    m_bCheckCSSClasses = 0xCFA # bool
    m_anchorDeltaTransform = 0xD00 # CTransform
    m_pOffScreenIndicator = 0xEA0 # CPointOffScreenIndicatorUi*
    m_bIgnoreInput = 0xEC8 # bool
    m_bLit = 0xEC9 # bool
    m_bFollowPlayerAcrossTeleport = 0xECA # bool
    m_flWidth = 0xECC # float
    m_flHeight = 0xED0 # float
    m_flDPI = 0xED4 # float
    m_flInteractDistance = 0xED8 # float
    m_flDepthOffset = 0xEDC # float
    m_unOwnerContext = 0xEE0 # uint32_t
    m_unHorizontalAlign = 0xEE4 # uint32_t
    m_unVerticalAlign = 0xEE8 # uint32_t
    m_unOrientation = 0xEEC # uint32_t
    m_bAllowInteractionFromAllSceneWorlds = 0xEF0 # bool
    m_vecCSSClasses = 0xEF8 # C_NetworkUtlVectorBase<CUtlSymbolLarge>
    m_bOpaque = 0xF10 # bool
    m_bNoDepth = 0xF11 # bool
    m_bRenderBackface = 0xF12 # bool
    m_bUseOffScreenIndicator = 0xF13 # bool
    m_bExcludeFromSaveGames = 0xF14 # bool
    m_bGrabbable = 0xF15 # bool
    m_bOnlyRenderToTexture = 0xF16 # bool
    m_bDisableMipGen = 0xF17 # bool
    m_nExplicitImageLayout = 0xF18 # int32_t

class C_PointClientUIWorldTextPanel: # C_PointClientUIWorldPanel
    m_messageText = 0xF20 # char[512]

class C_PointCommentaryNode: # CBaseAnimGraph
    m_bActive = 0xE88 # bool
    m_bWasActive = 0xE89 # bool
    m_flEndTime = 0xE8C # GameTime_t
    m_flStartTime = 0xE90 # GameTime_t
    m_flStartTimeInCommentary = 0xE94 # float
    m_iszCommentaryFile = 0xE98 # CUtlSymbolLarge
    m_iszTitle = 0xEA0 # CUtlSymbolLarge
    m_iszSpeakers = 0xEA8 # CUtlSymbolLarge
    m_iNodeNumber = 0xEB0 # int32_t
    m_iNodeNumberMax = 0xEB4 # int32_t
    m_bListenedTo = 0xEB8 # bool
    m_hViewPosition = 0xEC8 # CHandle<C_BaseEntity>
    m_bRestartAfterRestore = 0xECC # bool

class C_PointEntity: # C_BaseEntity

class C_PointValueRemapper: # C_BaseEntity
    m_bDisabled = 0x540 # bool
    m_bDisabledOld = 0x541 # bool
    m_bUpdateOnClient = 0x542 # bool
    m_nInputType = 0x544 # ValueRemapperInputType_t
    m_hRemapLineStart = 0x548 # CHandle<C_BaseEntity>
    m_hRemapLineEnd = 0x54C # CHandle<C_BaseEntity>
    m_flMaximumChangePerSecond = 0x550 # float
    m_flDisengageDistance = 0x554 # float
    m_flEngageDistance = 0x558 # float
    m_bRequiresUseKey = 0x55C # bool
    m_nOutputType = 0x560 # ValueRemapperOutputType_t
    m_hOutputEntities = 0x568 # C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
    m_nHapticsType = 0x580 # ValueRemapperHapticsType_t
    m_nMomentumType = 0x584 # ValueRemapperMomentumType_t
    m_flMomentumModifier = 0x588 # float
    m_flSnapValue = 0x58C # float
    m_flCurrentMomentum = 0x590 # float
    m_nRatchetType = 0x594 # ValueRemapperRatchetType_t
    m_flRatchetOffset = 0x598 # float
    m_flInputOffset = 0x59C # float
    m_bEngaged = 0x5A0 # bool
    m_bFirstUpdate = 0x5A1 # bool
    m_flPreviousValue = 0x5A4 # float
    m_flPreviousUpdateTickTime = 0x5A8 # GameTime_t
    m_vecPreviousTestPoint = 0x5AC # Vector

class C_PointWorldText: # C_ModelPointEntity
    m_bForceRecreateNextUpdate = 0xCC8 # bool
    m_messageText = 0xCD8 # char[512]
    m_FontName = 0xED8 # char[64]
    m_bEnabled = 0xF18 # bool
    m_bFullbright = 0xF19 # bool
    m_flWorldUnitsPerPx = 0xF1C # float
    m_flFontSize = 0xF20 # float
    m_flDepthOffset = 0xF24 # float
    m_Color = 0xF28 # Color
    m_nJustifyHorizontal = 0xF2C # PointWorldTextJustifyHorizontal_t
    m_nJustifyVertical = 0xF30 # PointWorldTextJustifyVertical_t
    m_nReorientMode = 0xF34 # PointWorldTextReorientMode_t

class C_PostProcessingVolume: # C_BaseTrigger
    m_hPostSettings = 0xCD8 # CStrongHandle<InfoForResourceTypeCPostProcessingResource>
    m_flFadeDuration = 0xCE0 # float
    m_flMinLogExposure = 0xCE4 # float
    m_flMaxLogExposure = 0xCE8 # float
    m_flMinExposure = 0xCEC # float
    m_flMaxExposure = 0xCF0 # float
    m_flExposureCompensation = 0xCF4 # float
    m_flExposureFadeSpeedUp = 0xCF8 # float
    m_flExposureFadeSpeedDown = 0xCFC # float
    m_flTonemapEVSmoothingRange = 0xD00 # float
    m_bMaster = 0xD04 # bool
    m_bExposureControl = 0xD05 # bool
    m_flRate = 0xD08 # float
    m_flTonemapPercentTarget = 0xD0C # float
    m_flTonemapPercentBrightPixels = 0xD10 # float
    m_flTonemapMinAvgLum = 0xD14 # float

class C_Precipitation: # C_BaseTrigger
    m_flDensity = 0xCC8 # float
    m_flParticleInnerDist = 0xCD8 # float
    m_pParticleDef = 0xCE0 # char*
    m_tParticlePrecipTraceTimer = 0xD08 # TimedEvent[1]
    m_bActiveParticlePrecipEmitter = 0xD10 # bool[1]
    m_bParticlePrecipInitialized = 0xD11 # bool
    m_bHasSimulatedSinceLastSceneObjectUpdate = 0xD12 # bool
    m_nAvailableSheetSequencesMaxIndex = 0xD14 # int32_t

class C_PrecipitationBlocker: # C_BaseModelEntity

class C_PredictedViewModel: # C_BaseViewModel
    m_LagAnglesHistory = 0xEE8 # QAngle
    m_vPredictedOffset = 0xF00 # Vector

class C_RagdollManager: # C_BaseEntity
    m_iCurrentMaxRagdollCount = 0x540 # int8_t

class C_RagdollProp: # CBaseAnimGraph
    m_ragPos = 0xE88 # C_NetworkUtlVectorBase<Vector>
    m_ragAngles = 0xEA0 # C_NetworkUtlVectorBase<QAngle>
    m_flBlendWeight = 0xEB8 # float
    m_hRagdollSource = 0xEBC # CHandle<C_BaseEntity>
    m_iEyeAttachment = 0xEC0 # AttachmentHandle_t
    m_flBlendWeightCurrent = 0xEC4 # float
    m_parentPhysicsBoneIndices = 0xEC8 # CUtlVector<int32_t>
    m_worldSpaceBoneComputationOrder = 0xEE0 # CUtlVector<int32_t>

class C_RagdollPropAttached: # C_RagdollProp
    m_boneIndexAttached = 0xEF8 # uint32_t
    m_ragdollAttachedObjectIndex = 0xEFC # uint32_t
    m_attachmentPointBoneSpace = 0xF00 # Vector
    m_attachmentPointRagdollSpace = 0xF0C # Vector
    m_vecOffset = 0xF18 # Vector
    m_parentTime = 0xF24 # float
    m_bHasParent = 0xF28 # bool

class C_RectLight: # C_BarnLight
    m_bShowLight = 0xF08 # bool

class C_RetakeGameRules:
    m_nMatchSeed = 0xF8 # int32_t
    m_bBlockersPresent = 0xFC # bool
    m_bRoundInProgress = 0xFD # bool
    m_iFirstSecondHalfRound = 0x100 # int32_t
    m_iBombSite = 0x104 # int32_t

class C_RopeKeyframe: # C_BaseModelEntity
    m_LinksTouchingSomething = 0xCC8 # CBitVec<10>
    m_nLinksTouchingSomething = 0xCCC # int32_t
    m_bApplyWind = 0xCD0 # bool
    m_fPrevLockedPoints = 0xCD4 # int32_t
    m_iForcePointMoveCounter = 0xCD8 # int32_t
    m_bPrevEndPointPos = 0xCDC # bool[2]
    m_vPrevEndPointPos = 0xCE0 # Vector[2]
    m_flCurScroll = 0xCF8 # float
    m_flScrollSpeed = 0xCFC # float
    m_RopeFlags = 0xD00 # uint16_t
    m_iRopeMaterialModelIndex = 0xD08 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_LightValues = 0xF80 # Vector[10]
    m_nSegments = 0xFF8 # uint8_t
    m_hStartPoint = 0xFFC # CHandle<C_BaseEntity>
    m_hEndPoint = 0x1000 # CHandle<C_BaseEntity>
    m_iStartAttachment = 0x1004 # AttachmentHandle_t
    m_iEndAttachment = 0x1005 # AttachmentHandle_t
    m_Subdiv = 0x1006 # uint8_t
    m_RopeLength = 0x1008 # int16_t
    m_Slack = 0x100A # int16_t
    m_TextureScale = 0x100C # float
    m_fLockedPoints = 0x1010 # uint8_t
    m_nChangeCount = 0x1011 # uint8_t
    m_Width = 0x1014 # float
    m_PhysicsDelegate = 0x1018 # C_RopeKeyframe::CPhysicsDelegate
    m_hMaterial = 0x1028 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_TextureHeight = 0x1030 # int32_t
    m_vecImpulse = 0x1034 # Vector
    m_vecPreviousImpulse = 0x1040 # Vector
    m_flCurrentGustTimer = 0x104C # float
    m_flCurrentGustLifetime = 0x1050 # float
    m_flTimeToNextGust = 0x1054 # float
    m_vWindDir = 0x1058 # Vector
    m_vColorMod = 0x1064 # Vector
    m_vCachedEndPointAttachmentPos = 0x1070 # Vector[2]
    m_vCachedEndPointAttachmentAngle = 0x1088 # QAngle[2]
    m_bConstrainBetweenEndpoints = 0x10A0 # bool
    m_bEndPointAttachmentPositionsDirty = 0x0 # bitfield:1
    m_bEndPointAttachmentAnglesDirty = 0x0 # bitfield:1
    m_bNewDataThisFrame = 0x0 # bitfield:1
    m_bPhysicsInitted = 0x0 # bitfield:1

class C_RopeKeyframe_CPhysicsDelegate:
    m_pKeyframe = 0x8 # C_RopeKeyframe*

class C_SceneEntity: # C_PointEntity
    m_bIsPlayingBack = 0x548 # bool
    m_bPaused = 0x549 # bool
    m_bMultiplayer = 0x54A # bool
    m_bAutogenerated = 0x54B # bool
    m_flForceClientTime = 0x54C # float
    m_nSceneStringIndex = 0x550 # uint16_t
    m_bClientOnly = 0x552 # bool
    m_hOwner = 0x554 # CHandle<C_BaseFlex>
    m_hActorList = 0x558 # C_NetworkUtlVectorBase<CHandle<C_BaseFlex>>
    m_bWasPlaying = 0x570 # bool
    m_QueuedEvents = 0x580 # CUtlVector<C_SceneEntity::QueuedEvents_t>
    m_flCurrentTime = 0x598 # float

class C_SceneEntity_QueuedEvents_t:
    starttime = 0x0 # float

class C_SensorGrenade: # C_BaseCSGrenade

class C_SensorGrenadeProjectile: # C_BaseCSGrenadeProjectile

class C_ShatterGlassShardPhysics: # C_PhysicsProp
    m_ShardDesc = 0xFE0 # shard_model_desc_t

class C_SingleplayRules: # C_GameRules

class C_SkyCamera: # C_BaseEntity
    m_skyboxData = 0x540 # sky3dparams_t
    m_skyboxSlotToken = 0x5D0 # CUtlStringToken
    m_bUseAngles = 0x5D4 # bool
    m_pNext = 0x5D8 # C_SkyCamera*

class C_SmokeGrenade: # C_BaseCSGrenade

class C_SmokeGrenadeProjectile: # C_BaseCSGrenadeProjectile
    m_nSmokeEffectTickBegin = 0x1108 # int32_t
    m_bDidSmokeEffect = 0x110C # bool
    m_nRandomSeed = 0x1110 # int32_t
    m_vSmokeColor = 0x1114 # Vector
    m_vSmokeDetonationPos = 0x1120 # Vector
    m_VoxelFrameData = 0x1130 # CUtlVector<uint8_t>
    m_bSmokeVolumeDataReceived = 0x1148 # bool
    m_bSmokeEffectSpawned = 0x1149 # bool

class C_SoundAreaEntityBase: # C_BaseEntity
    m_bDisabled = 0x540 # bool
    m_bWasEnabled = 0x548 # bool
    m_iszSoundAreaType = 0x550 # CUtlSymbolLarge
    m_vPos = 0x558 # Vector

class C_SoundAreaEntityOrientedBox: # C_SoundAreaEntityBase
    m_vMin = 0x568 # Vector
    m_vMax = 0x574 # Vector

class C_SoundAreaEntitySphere: # C_SoundAreaEntityBase
    m_flRadius = 0x568 # float

class C_SoundOpvarSetAABBEntity: # C_SoundOpvarSetPointEntity

class C_SoundOpvarSetOBBEntity: # C_SoundOpvarSetAABBEntity

class C_SoundOpvarSetOBBWindEntity: # C_SoundOpvarSetPointBase

class C_SoundOpvarSetPathCornerEntity: # C_SoundOpvarSetPointEntity

class C_SoundOpvarSetPointBase: # C_BaseEntity
    m_iszStackName = 0x540 # CUtlSymbolLarge
    m_iszOperatorName = 0x548 # CUtlSymbolLarge
    m_iszOpvarName = 0x550 # CUtlSymbolLarge
    m_iOpvarIndex = 0x558 # int32_t
    m_bUseAutoCompare = 0x55C # bool

class C_SoundOpvarSetPointEntity: # C_SoundOpvarSetPointBase

class C_SpotlightEnd: # C_BaseModelEntity
    m_flLightScale = 0xCC0 # float
    m_Radius = 0xCC4 # float

class C_Sprite: # C_BaseModelEntity
    m_hSpriteMaterial = 0xCD8 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_hAttachedToEntity = 0xCE0 # CHandle<C_BaseEntity>
    m_nAttachment = 0xCE4 # AttachmentHandle_t
    m_flSpriteFramerate = 0xCE8 # float
    m_flFrame = 0xCEC # float
    m_flDieTime = 0xCF0 # GameTime_t
    m_nBrightness = 0xD00 # uint32_t
    m_flBrightnessDuration = 0xD04 # float
    m_flSpriteScale = 0xD08 # float
    m_flScaleDuration = 0xD0C # float
    m_bWorldSpaceScale = 0xD10 # bool
    m_flGlowProxySize = 0xD14 # float
    m_flHDRColorScale = 0xD18 # float
    m_flLastTime = 0xD1C # GameTime_t
    m_flMaxFrame = 0xD20 # float
    m_flStartScale = 0xD24 # float
    m_flDestScale = 0xD28 # float
    m_flScaleTimeStart = 0xD2C # GameTime_t
    m_nStartBrightness = 0xD30 # int32_t
    m_nDestBrightness = 0xD34 # int32_t
    m_flBrightnessTimeStart = 0xD38 # GameTime_t
    m_hOldSpriteMaterial = 0xD40 # CWeakHandle<InfoForResourceTypeIMaterial2>
    m_nSpriteWidth = 0xDE8 # int32_t
    m_nSpriteHeight = 0xDEC # int32_t

class C_SpriteOriented: # C_Sprite

class C_Sun: # C_BaseModelEntity
    m_fxSSSunFlareEffectIndex = 0xCC0 # ParticleIndex_t
    m_fxSunFlareEffectIndex = 0xCC4 # ParticleIndex_t
    m_fdistNormalize = 0xCC8 # float
    m_vSunPos = 0xCCC # Vector
    m_vDirection = 0xCD8 # Vector
    m_iszEffectName = 0xCE8 # CUtlSymbolLarge
    m_iszSSEffectName = 0xCF0 # CUtlSymbolLarge
    m_clrOverlay = 0xCF8 # Color
    m_bOn = 0xCFC # bool
    m_bmaxColor = 0xCFD # bool
    m_flSize = 0xD00 # float
    m_flHazeScale = 0xD04 # float
    m_flRotation = 0xD08 # float
    m_flHDRColorScale = 0xD0C # float
    m_flAlphaHaze = 0xD10 # float
    m_flAlphaScale = 0xD14 # float
    m_flAlphaHdr = 0xD18 # float
    m_flFarZScale = 0xD1C # float

class C_SunGlowOverlay: # CGlowOverlay
    m_bModulateByDot = 0xD0 # bool

class C_Team: # C_BaseEntity
    m_aPlayerControllers = 0x540 # C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
    m_aPlayers = 0x558 # C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
    m_iScore = 0x570 # int32_t
    m_szTeamname = 0x574 # char[129]

class C_TeamRoundTimer: # C_BaseEntity
    m_bTimerPaused = 0x540 # bool
    m_flTimeRemaining = 0x544 # float
    m_flTimerEndTime = 0x548 # GameTime_t
    m_bIsDisabled = 0x54C # bool
    m_bShowInHUD = 0x54D # bool
    m_nTimerLength = 0x550 # int32_t
    m_nTimerInitialLength = 0x554 # int32_t
    m_nTimerMaxLength = 0x558 # int32_t
    m_bAutoCountdown = 0x55C # bool
    m_nSetupTimeLength = 0x560 # int32_t
    m_nState = 0x564 # int32_t
    m_bStartPaused = 0x568 # bool
    m_bInCaptureWatchState = 0x569 # bool
    m_flTotalTime = 0x56C # float
    m_bStopWatchTimer = 0x570 # bool
    m_bFireFinished = 0x571 # bool
    m_bFire5MinRemain = 0x572 # bool
    m_bFire4MinRemain = 0x573 # bool
    m_bFire3MinRemain = 0x574 # bool
    m_bFire2MinRemain = 0x575 # bool
    m_bFire1MinRemain = 0x576 # bool
    m_bFire30SecRemain = 0x577 # bool
    m_bFire10SecRemain = 0x578 # bool
    m_bFire5SecRemain = 0x579 # bool
    m_bFire4SecRemain = 0x57A # bool
    m_bFire3SecRemain = 0x57B # bool
    m_bFire2SecRemain = 0x57C # bool
    m_bFire1SecRemain = 0x57D # bool
    m_nOldTimerLength = 0x580 # int32_t
    m_nOldTimerState = 0x584 # int32_t

class C_TeamplayRules: # C_MultiplayRules

class C_TextureBasedAnimatable: # C_BaseModelEntity
    m_bLoop = 0xCC0 # bool
    m_flFPS = 0xCC4 # float
    m_hPositionKeys = 0xCC8 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hRotationKeys = 0xCD0 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_vAnimationBoundsMin = 0xCD8 # Vector
    m_vAnimationBoundsMax = 0xCE4 # Vector
    m_flStartTime = 0xCF0 # float
    m_flStartFrame = 0xCF4 # float

class C_TintController: # C_BaseEntity

class C_TonemapController2: # C_BaseEntity
    m_flAutoExposureMin = 0x540 # float
    m_flAutoExposureMax = 0x544 # float
    m_flTonemapPercentTarget = 0x548 # float
    m_flTonemapPercentBrightPixels = 0x54C # float
    m_flTonemapMinAvgLum = 0x550 # float
    m_flExposureAdaptationSpeedUp = 0x554 # float
    m_flExposureAdaptationSpeedDown = 0x558 # float
    m_flTonemapEVSmoothingRange = 0x55C # float

class C_TonemapController2Alias_env_tonemap_controller2: # C_TonemapController2

class C_TriggerBuoyancy: # C_BaseTrigger
    m_BuoyancyHelper = 0xCC8 # CBuoyancyHelper
    m_flFluidDensity = 0xCE8 # float

class C_TriggerLerpObject: # C_BaseTrigger

class C_TriggerMultiple: # C_BaseTrigger

class C_TriggerVolume: # C_BaseModelEntity

class C_ViewmodelAttachmentModel: # CBaseAnimGraph

class C_ViewmodelWeapon: # CBaseAnimGraph
    m_worldModel = 0xE80 # char*

class C_VoteController: # C_BaseEntity
    m_iActiveIssueIndex = 0x550 # int32_t
    m_iOnlyTeamToVote = 0x554 # int32_t
    m_nVoteOptionCount = 0x558 # int32_t[5]
    m_nPotentialVotes = 0x56C # int32_t
    m_bVotesDirty = 0x570 # bool
    m_bTypeDirty = 0x571 # bool
    m_bIsYesNoVote = 0x572 # bool

class C_WaterBullet: # CBaseAnimGraph

class C_WeaponAWP: # C_CSWeaponBaseGun

class C_WeaponAug: # C_CSWeaponBaseGun

class C_WeaponBaseItem: # C_CSWeaponBase
    m_SequenceCompleteTimer = 0x1A10 # CountdownTimer
    m_bRedraw = 0x1A28 # bool

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
    m_flDisplayHealth = 0x1A30 # float

class C_WeaponTaser: # C_CSWeaponBaseGun
    m_fFireTime = 0x1A30 # GameTime_t

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
