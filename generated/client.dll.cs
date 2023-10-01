public static class ActiveModelConfig_t {
    public const nint m_Handle = 0x28; // ModelConfigHandle_t
    public const nint m_Name = 0x30; // CUtlSymbolLarge
    public const nint m_AssociatedEntities = 0x38; // C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > >
    public const nint m_AssociatedEntityNames = 0x50; // C_NetworkUtlVectorBase< CUtlSymbolLarge >
}

public static class CAnimGraphNetworkedVariables {
    public const nint m_PredNetBoolVariables = 0x8; // C_NetworkUtlVectorBase< uint32 >
    public const nint m_PredNetByteVariables = 0x20; // C_NetworkUtlVectorBase< uint8 >
    public const nint m_PredNetUInt16Variables = 0x38; // C_NetworkUtlVectorBase< uint16 >
    public const nint m_PredNetIntVariables = 0x50; // C_NetworkUtlVectorBase< int32 >
    public const nint m_PredNetUInt32Variables = 0x68; // C_NetworkUtlVectorBase< uint32 >
    public const nint m_PredNetUInt64Variables = 0x80; // C_NetworkUtlVectorBase< uint64 >
    public const nint m_PredNetFloatVariables = 0x98; // C_NetworkUtlVectorBase< float32 >
    public const nint m_PredNetVectorVariables = 0xB0; // C_NetworkUtlVectorBase< Vector >
    public const nint m_PredNetQuaternionVariables = 0xC8; // C_NetworkUtlVectorBase< Quaternion >
    public const nint m_OwnerOnlyPredNetBoolVariables = 0xE0; // C_NetworkUtlVectorBase< uint32 >
    public const nint m_OwnerOnlyPredNetByteVariables = 0xF8; // C_NetworkUtlVectorBase< uint8 >
    public const nint m_OwnerOnlyPredNetUInt16Variables = 0x110; // C_NetworkUtlVectorBase< uint16 >
    public const nint m_OwnerOnlyPredNetIntVariables = 0x128; // C_NetworkUtlVectorBase< int32 >
    public const nint m_OwnerOnlyPredNetUInt32Variables = 0x140; // C_NetworkUtlVectorBase< uint32 >
    public const nint m_OwnerOnlyPredNetUInt64Variables = 0x158; // C_NetworkUtlVectorBase< uint64 >
    public const nint m_OwnerOnlyPredNetFloatVariables = 0x170; // C_NetworkUtlVectorBase< float32 >
    public const nint m_OwnerOnlyPredNetVectorVariables = 0x188; // C_NetworkUtlVectorBase< Vector >
    public const nint m_OwnerOnlyPredNetQuaternionVariables = 0x1A0; // C_NetworkUtlVectorBase< Quaternion >
    public const nint m_nBoolVariablesCount = 0x1B8; // int32
    public const nint m_nOwnerOnlyBoolVariablesCount = 0x1BC; // int32
    public const nint m_nRandomSeedOffset = 0x1C0; // int32
    public const nint m_flLastTeleportTime = 0x1C4; // float32
}

public static class CAttributeList {
    public const nint m_Attributes = 0x8; // C_UtlVectorEmbeddedNetworkVar< CEconItemAttribute >
    public const nint m_pManager = 0x58; // CAttributeManager*
}

public static class CAttributeManager {
    public const nint m_Providers = 0x8; // CUtlVector< CHandle< C_BaseEntity > >
    public const nint m_iReapplyProvisionParity = 0x20; // int32
    public const nint m_hOuter = 0x24; // CHandle< C_BaseEntity >
    public const nint m_bPreventLoopback = 0x28; // bool
    public const nint m_ProviderType = 0x2C; // attributeprovidertypes_t
    public const nint m_CachedResults = 0x30; // CUtlVector< CAttributeManager::cached_attribute_float_t >
}

public static class CAttributeManager_cached_attribute_float_t {
    public const nint flIn = 0x0; // float32
    public const nint iAttribHook = 0x8; // CUtlSymbolLarge
    public const nint flOut = 0x10; // float32
}

public static class CBaseAnimGraph {
    public const nint m_bInitiallyPopulateInterpHistory = 0xCC0; // bool
    public const nint m_bShouldAnimateDuringGameplayPause = 0xCC1; // bool
    public const nint m_bSuppressAnimEventSounds = 0xCC3; // bool
    public const nint m_bAnimGraphUpdateEnabled = 0xCD0; // bool
    public const nint m_flMaxSlopeDistance = 0xCD4; // float32
    public const nint m_vLastSlopeCheckPos = 0xCD8; // Vector
    public const nint m_vecForce = 0xCE8; // Vector
    public const nint m_nForceBone = 0xCF4; // int32
    public const nint m_pClientsideRagdoll = 0xCF8; // CBaseAnimGraph*
    public const nint m_bBuiltRagdoll = 0xD00; // bool
    public const nint m_pRagdollPose = 0xD18; // PhysicsRagdollPose_t*
    public const nint m_bClientRagdoll = 0xD20; // bool
    public const nint m_bHasAnimatedMaterialAttributes = 0xD30; // bool
}

public static class CBaseAnimGraphController {
    public const nint m_baseLayer = 0x18; // CNetworkedSequenceOperation
    public const nint m_animGraphNetworkedVars = 0x40; // CAnimGraphNetworkedVariables
    public const nint m_bSequenceFinished = 0x1320; // bool
    public const nint m_flLastEventCycle = 0x1324; // float32
    public const nint m_flLastEventAnimTime = 0x1328; // float32
    public const nint m_flPlaybackRate = 0x132C; // CNetworkedQuantizedFloat
    public const nint m_flPrevAnimTime = 0x1334; // float32
    public const nint m_bClientSideAnimation = 0x1338; // bool
    public const nint m_bNetworkedAnimationInputsChanged = 0x1339; // bool
    public const nint m_nPrevNewSequenceParity = 0x133A; // uint8
    public const nint m_nPrevResetEventsParity = 0x133B; // uint8
    public const nint m_nNewSequenceParity = 0x133C; // int32
    public const nint m_nResetEventsParity = 0x1340; // int32
    public const nint m_nAnimLoopMode = 0x1344; // AnimLoopMode_t
    public const nint m_hAnimationUpdate = 0x13E4; // AnimationUpdateListHandle_t
    public const nint m_hLastAnimEventSequence = 0x13E8; // HSequence
}

public static class CBasePlayerController {
    public const nint m_nFinalPredictedTick = 0x548; // int32
    public const nint m_CommandContext = 0x550; // C_CommandContext
    public const nint m_nInButtonsWhichAreToggles = 0x5D0; // uint64
    public const nint m_nTickBase = 0x5D8; // uint32
    public const nint m_hPawn = 0x5DC; // CHandle< C_BasePlayerPawn >
    public const nint m_hPredictedPawn = 0x5E0; // CHandle< C_BasePlayerPawn >
    public const nint m_nSplitScreenSlot = 0x5E4; // CSplitScreenSlot
    public const nint m_hSplitOwner = 0x5E8; // CHandle< CBasePlayerController >
    public const nint m_hSplitScreenPlayers = 0x5F0; // CUtlVector< CHandle< CBasePlayerController > >
    public const nint m_bIsHLTV = 0x608; // bool
    public const nint m_iConnected = 0x60C; // PlayerConnectedState
    public const nint m_iszPlayerName = 0x610; // char[128]
    public const nint m_steamID = 0x698; // uint64
    public const nint m_bIsLocalPlayerController = 0x6A0; // bool
    public const nint m_iDesiredFOV = 0x6A4; // uint32
}

public static class CBasePlayerVData {
    public const nint m_sModelName = 0x28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    public const nint m_flHeadDamageMultiplier = 0x108; // CSkillFloat
    public const nint m_flChestDamageMultiplier = 0x118; // CSkillFloat
    public const nint m_flStomachDamageMultiplier = 0x128; // CSkillFloat
    public const nint m_flArmDamageMultiplier = 0x138; // CSkillFloat
    public const nint m_flLegDamageMultiplier = 0x148; // CSkillFloat
    public const nint m_flHoldBreathTime = 0x158; // float32
    public const nint m_flDrowningDamageInterval = 0x15C; // float32
    public const nint m_nDrowningDamageInitial = 0x160; // int32
    public const nint m_nDrowningDamageMax = 0x164; // int32
    public const nint m_nWaterSpeed = 0x168; // int32
    public const nint m_flUseRange = 0x16C; // float32
    public const nint m_flUseAngleTolerance = 0x170; // float32
    public const nint m_flCrouchTime = 0x174; // float32
}

public static class CBasePlayerWeaponVData {
    public const nint m_szWorldModel = 0x28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    public const nint m_bBuiltRightHanded = 0x108; // bool
    public const nint m_bAllowFlipping = 0x109; // bool
    public const nint m_bIsFullAuto = 0x10A; // bool
    public const nint m_nNumBullets = 0x10C; // int32
    public const nint m_sMuzzleAttachment = 0x110; // CUtlString
    public const nint m_szMuzzleFlashParticle = 0x118; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    public const nint m_iFlags = 0x1F8; // ItemFlagTypes_t
    public const nint m_nPrimaryAmmoType = 0x1F9; // AmmoIndex_t
    public const nint m_nSecondaryAmmoType = 0x1FA; // AmmoIndex_t
    public const nint m_iMaxClip1 = 0x1FC; // int32
    public const nint m_iMaxClip2 = 0x200; // int32
    public const nint m_iDefaultClip1 = 0x204; // int32
    public const nint m_iDefaultClip2 = 0x208; // int32
    public const nint m_iWeight = 0x20C; // int32
    public const nint m_bAutoSwitchTo = 0x210; // bool
    public const nint m_bAutoSwitchFrom = 0x211; // bool
    public const nint m_iRumbleEffect = 0x214; // RumbleEffect_t
    public const nint m_aShootSounds = 0x218; // CUtlMap< WeaponSound_t, CSoundEventName >
    public const nint m_iSlot = 0x238; // int32
    public const nint m_iPosition = 0x23C; // int32
}

public static class CBaseProp {
    public const nint m_bModelOverrodeBlockLOS = 0xE80; // bool
    public const nint m_iShapeType = 0xE84; // int32
    public const nint m_bConformToCollisionBounds = 0xE88; // bool
    public const nint m_mPreferredCatchTransform = 0xE8C; // matrix3x4_t
}

public static class CBodyComponent {
    public const nint m_pSceneNode = 0x8; // CGameSceneNode*
    public const nint __m_pChainEntity = 0x20; // CNetworkVarChainer
}

public static class CBodyComponentBaseAnimGraph {
    public const nint m_animationController = 0x470; // CBaseAnimGraphController
    public const nint __m_pChainEntity = 0x18B0; // CNetworkVarChainer
}

public static class CBodyComponentBaseModelEntity {
    public const nint __m_pChainEntity = 0x470; // CNetworkVarChainer
}

public static class CBodyComponentPoint {
    public const nint m_sceneNode = 0x50; // CGameSceneNode
    public const nint __m_pChainEntity = 0x1A0; // CNetworkVarChainer
}

public static class CBodyComponentSkeletonInstance {
    public const nint m_skeletonInstance = 0x50; // CSkeletonInstance
    public const nint __m_pChainEntity = 0x440; // CNetworkVarChainer
}

public static class CBombTarget {
    public const nint m_bBombPlantedHere = 0xCC8; // bool
}

public static class CBuoyancyHelper {
    public const nint m_flFluidDensity = 0x18; // float32
}

public static class CCSGameModeRules {
    public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
}

public static class CCSGameModeRules_Deathmatch {
    public const nint m_bFirstThink = 0x30; // bool
    public const nint m_bFirstThinkAfterConnected = 0x31; // bool
    public const nint m_flDMBonusStartTime = 0x34; // GameTime_t
    public const nint m_flDMBonusTimeLength = 0x38; // float32
    public const nint m_nDMBonusWeaponLoadoutSlot = 0x3C; // int16
}

public static class CCSObserver_ObserverServices {
    public const nint m_hLastObserverTarget = 0x58; // CEntityHandle
    public const nint m_vecObserverInterpolateOffset = 0x5C; // Vector
    public const nint m_vecObserverInterpStartPos = 0x68; // Vector
    public const nint m_flObsInterp_PathLength = 0x74; // float32
    public const nint m_qObsInterp_OrientationStart = 0x80; // Quaternion
    public const nint m_qObsInterp_OrientationTravelDir = 0x90; // Quaternion
    public const nint m_obsInterpState = 0xA0; // ObserverInterpState_t
    public const nint m_bObserverInterpolationNeedsDeferredSetup = 0xA4; // bool
}

public static class CCSPlayerBase_CameraServices {
    public const nint m_iFOV = 0x210; // uint32
    public const nint m_iFOVStart = 0x214; // uint32
    public const nint m_flFOVTime = 0x218; // GameTime_t
    public const nint m_flFOVRate = 0x21C; // float32
    public const nint m_hZoomOwner = 0x220; // CHandle< C_BaseEntity >
    public const nint m_flLastShotFOV = 0x224; // float32
}

public static class CCSPlayerController {
    public const nint m_pInGameMoneyServices = 0x6D0; // CCSPlayerController_InGameMoneyServices*
    public const nint m_pInventoryServices = 0x6D8; // CCSPlayerController_InventoryServices*
    public const nint m_pActionTrackingServices = 0x6E0; // CCSPlayerController_ActionTrackingServices*
    public const nint m_pDamageServices = 0x6E8; // CCSPlayerController_DamageServices*
    public const nint m_iPing = 0x6F0; // uint32
    public const nint m_bHasCommunicationAbuseMute = 0x6F4; // bool
    public const nint m_szCrosshairCodes = 0x6F8; // CUtlSymbolLarge
    public const nint m_iPendingTeamNum = 0x700; // uint8
    public const nint m_flForceTeamTime = 0x704; // GameTime_t
    public const nint m_iCompTeammateColor = 0x708; // int32
    public const nint m_bEverPlayedOnTeam = 0x70C; // bool
    public const nint m_flPreviousForceJoinTeamTime = 0x710; // GameTime_t
    public const nint m_szClan = 0x718; // CUtlSymbolLarge
    public const nint m_sSanitizedPlayerName = 0x720; // CUtlString
    public const nint m_iCoachingTeam = 0x728; // int32
    public const nint m_nPlayerDominated = 0x730; // uint64
    public const nint m_nPlayerDominatingMe = 0x738; // uint64
    public const nint m_iCompetitiveRanking = 0x740; // int32
    public const nint m_iCompetitiveWins = 0x744; // int32
    public const nint m_iCompetitiveRankType = 0x748; // int8
    public const nint m_iCompetitiveRankingPredicted_Win = 0x74C; // int32
    public const nint m_iCompetitiveRankingPredicted_Loss = 0x750; // int32
    public const nint m_iCompetitiveRankingPredicted_Tie = 0x754; // int32
    public const nint m_nEndMatchNextMapVote = 0x758; // int32
    public const nint m_unActiveQuestId = 0x75C; // uint16
    public const nint m_nQuestProgressReason = 0x760; // QuestProgress::Reason
    public const nint m_unPlayerTvControlFlags = 0x764; // uint32
    public const nint m_iDraftIndex = 0x7D0; // int32
    public const nint m_msQueuedModeDisconnectionTimestamp = 0x7D4; // uint32
    public const nint m_uiAbandonRecordedReason = 0x7D8; // uint32
    public const nint m_bEverFullyConnected = 0x7DC; // bool
    public const nint m_bAbandonAllowsSurrender = 0x7DD; // bool
    public const nint m_bAbandonOffersInstantSurrender = 0x7DE; // bool
    public const nint m_bDisconnection1MinWarningPrinted = 0x7DF; // bool
    public const nint m_bScoreReported = 0x7E0; // bool
    public const nint m_nDisconnectionTick = 0x7E4; // int32
    public const nint m_bControllingBot = 0x7F0; // bool
    public const nint m_bHasControlledBotThisRound = 0x7F1; // bool
    public const nint m_bHasBeenControlledByPlayerThisRound = 0x7F2; // bool
    public const nint m_nBotsControlledThisRound = 0x7F4; // int32
    public const nint m_bCanControlObservedBot = 0x7F8; // bool
    public const nint m_hPlayerPawn = 0x7FC; // CHandle< C_CSPlayerPawn >
    public const nint m_hObserverPawn = 0x800; // CHandle< C_CSObserverPawn >
    public const nint m_bPawnIsAlive = 0x804; // bool
    public const nint m_iPawnHealth = 0x808; // uint32
    public const nint m_iPawnArmor = 0x80C; // int32
    public const nint m_bPawnHasDefuser = 0x810; // bool
    public const nint m_bPawnHasHelmet = 0x811; // bool
    public const nint m_nPawnCharacterDefIndex = 0x812; // uint16
    public const nint m_iPawnLifetimeStart = 0x814; // int32
    public const nint m_iPawnLifetimeEnd = 0x818; // int32
    public const nint m_iPawnBotDifficulty = 0x81C; // int32
    public const nint m_hOriginalControllerOfCurrentPawn = 0x820; // CHandle< CCSPlayerController >
    public const nint m_iScore = 0x824; // int32
    public const nint m_vecKills = 0x828; // C_NetworkUtlVectorBase< EKillTypes_t >
    public const nint m_iMVPs = 0x840; // int32
    public const nint m_bIsPlayerNameDirty = 0x844; // bool
}

public static class CCSPlayerController_ActionTrackingServices {
    public const nint m_perRoundStats = 0x40; // C_UtlVectorEmbeddedNetworkVar< CSPerRoundStats_t >
    public const nint m_matchStats = 0x90; // CSMatchStats_t
    public const nint m_iNumRoundKills = 0x108; // int32
    public const nint m_iNumRoundKillsHeadshots = 0x10C; // int32
}

public static class CCSPlayerController_DamageServices {
    public const nint m_nSendUpdate = 0x40; // int32
    public const nint m_DamageList = 0x48; // C_UtlVectorEmbeddedNetworkVar< CDamageRecord >
}

public static class CCSPlayerController_InGameMoneyServices {
    public const nint m_iAccount = 0x40; // int32
    public const nint m_iStartAccount = 0x44; // int32
    public const nint m_iTotalCashSpent = 0x48; // int32
    public const nint m_iCashSpentThisRound = 0x4C; // int32
    public const nint m_nPreviousAccount = 0x50; // int32
}

public static class CCSPlayerController_InventoryServices {
    public const nint m_unMusicID = 0x40; // uint16
    public const nint m_rank = 0x44; // MedalRank_t[6]
    public const nint m_nPersonaDataPublicLevel = 0x5C; // int32
    public const nint m_nPersonaDataPublicCommendsLeader = 0x60; // int32
    public const nint m_nPersonaDataPublicCommendsTeacher = 0x64; // int32
    public const nint m_nPersonaDataPublicCommendsFriendly = 0x68; // int32
    public const nint m_vecTerroristLoadoutCache = 0x70; // C_UtlVectorEmbeddedNetworkVar< C_EconItemView >
    public const nint m_vecCounterTerroristLoadoutCache = 0xC0; // C_UtlVectorEmbeddedNetworkVar< C_EconItemView >
}

public static class CCSPlayer_ActionTrackingServices {
    public const nint m_hLastWeaponBeforeC4AutoSwitch = 0x40; // CHandle< C_BasePlayerWeapon >
    public const nint m_bIsRescuing = 0x44; // bool
    public const nint m_weaponPurchasesThisMatch = 0x48; // WeaponPurchaseTracker_t
    public const nint m_weaponPurchasesThisRound = 0xA0; // WeaponPurchaseTracker_t
}

public static class CCSPlayer_BulletServices {
    public const nint m_totalHitsOnServer = 0x40; // int32
}

public static class CCSPlayer_BuyServices {
    public const nint m_vecSellbackPurchaseEntries = 0x40; // C_UtlVectorEmbeddedNetworkVar< SellbackPurchaseEntry_t >
}

public static class CCSPlayer_CameraServices {
    public const nint m_flDeathCamTilt = 0x228; // float32
}

public static class CCSPlayer_HostageServices {
    public const nint m_hCarriedHostage = 0x40; // CHandle< C_BaseEntity >
    public const nint m_hCarriedHostageProp = 0x44; // CHandle< C_BaseEntity >
}

public static class CCSPlayer_ItemServices {
    public const nint m_bHasDefuser = 0x40; // bool
    public const nint m_bHasHelmet = 0x41; // bool
    public const nint m_bHasHeavyArmor = 0x42; // bool
}

public static class CCSPlayer_MovementServices {
    public const nint m_flMaxFallVelocity = 0x210; // float32
    public const nint m_vecLadderNormal = 0x214; // Vector
    public const nint m_nLadderSurfacePropIndex = 0x220; // int32
    public const nint m_flDuckAmount = 0x224; // float32
    public const nint m_flDuckSpeed = 0x228; // float32
    public const nint m_bDuckOverride = 0x22C; // bool
    public const nint m_bDesiresDuck = 0x22D; // bool
    public const nint m_flDuckOffset = 0x230; // float32
    public const nint m_nDuckTimeMsecs = 0x234; // uint32
    public const nint m_nDuckJumpTimeMsecs = 0x238; // uint32
    public const nint m_nJumpTimeMsecs = 0x23C; // uint32
    public const nint m_flLastDuckTime = 0x240; // float32
    public const nint m_vecLastPositionAtFullCrouchSpeed = 0x250; // Vector2D
    public const nint m_duckUntilOnGround = 0x258; // bool
    public const nint m_bHasWalkMovedSinceLastJump = 0x259; // bool
    public const nint m_bInStuckTest = 0x25A; // bool
    public const nint m_flStuckCheckTime = 0x268; // float32[64][2]
    public const nint m_nTraceCount = 0x468; // int32
    public const nint m_StuckLast = 0x46C; // int32
    public const nint m_bSpeedCropped = 0x470; // bool
    public const nint m_nOldWaterLevel = 0x474; // int32
    public const nint m_flWaterEntryTime = 0x478; // float32
    public const nint m_vecForward = 0x47C; // Vector
    public const nint m_vecLeft = 0x488; // Vector
    public const nint m_vecUp = 0x494; // Vector
    public const nint m_vecPreviouslyPredictedOrigin = 0x4A0; // Vector
    public const nint m_bOldJumpPressed = 0x4AC; // bool
    public const nint m_flJumpPressedTime = 0x4B0; // float32
    public const nint m_flJumpUntil = 0x4B4; // float32
    public const nint m_flJumpVel = 0x4B8; // float32
    public const nint m_fStashGrenadeParameterWhen = 0x4BC; // GameTime_t
    public const nint m_nButtonDownMaskPrev = 0x4C0; // uint64
    public const nint m_flOffsetTickCompleteTime = 0x4C8; // float32
    public const nint m_flOffsetTickStashedSpeed = 0x4CC; // float32
    public const nint m_flStamina = 0x4D0; // float32
    public const nint m_bUpdatePredictedOriginAfterDataUpdate = 0x4D4; // bool
}

public static class CCSPlayer_PingServices {
    public const nint m_hPlayerPing = 0x40; // CHandle< C_BaseEntity >
}

public static class CCSPlayer_ViewModelServices {
    public const nint m_hViewModel = 0x40; // CHandle< C_BaseViewModel >[3]
}

public static class CCSPlayer_WaterServices {
    public const nint m_flWaterJumpTime = 0x40; // float32
    public const nint m_vecWaterJumpVel = 0x44; // Vector
    public const nint m_flSwimSoundTime = 0x50; // float32
}

public static class CCSPlayer_WeaponServices {
    public const nint m_flNextAttack = 0xA8; // GameTime_t
    public const nint m_bIsLookingAtWeapon = 0xAC; // bool
    public const nint m_bIsHoldingLookAtWeapon = 0xAD; // bool
}

public static class CCSWeaponBaseVData {
    public const nint m_WeaponType = 0x240; // CSWeaponType
    public const nint m_WeaponCategory = 0x244; // CSWeaponCategory
    public const nint m_szViewModel = 0x248; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    public const nint m_szPlayerModel = 0x328; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    public const nint m_szWorldDroppedModel = 0x408; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    public const nint m_szAimsightLensMaskModel = 0x4E8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    public const nint m_szMagazineModel = 0x5C8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    public const nint m_szHeatEffect = 0x6A8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    public const nint m_szEjectBrassEffect = 0x788; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    public const nint m_szMuzzleFlashParticleAlt = 0x868; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    public const nint m_szMuzzleFlashThirdPersonParticle = 0x948; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    public const nint m_szMuzzleFlashThirdPersonParticleAlt = 0xA28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    public const nint m_szTracerParticle = 0xB08; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    public const nint m_GearSlot = 0xBE8; // gear_slot_t
    public const nint m_GearSlotPosition = 0xBEC; // int32
    public const nint m_DefaultLoadoutSlot = 0xBF0; // loadout_slot_t
    public const nint m_sWrongTeamMsg = 0xBF8; // CUtlString
    public const nint m_nPrice = 0xC00; // int32
    public const nint m_nKillAward = 0xC04; // int32
    public const nint m_nPrimaryReserveAmmoMax = 0xC08; // int32
    public const nint m_nSecondaryReserveAmmoMax = 0xC0C; // int32
    public const nint m_bMeleeWeapon = 0xC10; // bool
    public const nint m_bHasBurstMode = 0xC11; // bool
    public const nint m_bIsRevolver = 0xC12; // bool
    public const nint m_bCannotShootUnderwater = 0xC13; // bool
    public const nint m_szName = 0xC18; // CUtlString
    public const nint m_szAnimExtension = 0xC20; // CUtlString
    public const nint m_eSilencerType = 0xC28; // CSWeaponSilencerType
    public const nint m_nCrosshairMinDistance = 0xC2C; // int32
    public const nint m_nCrosshairDeltaDistance = 0xC30; // int32
    public const nint m_flCycleTime = 0xC34; // CFiringModeFloat
    public const nint m_flMaxSpeed = 0xC3C; // CFiringModeFloat
    public const nint m_flSpread = 0xC44; // CFiringModeFloat
    public const nint m_flInaccuracyCrouch = 0xC4C; // CFiringModeFloat
    public const nint m_flInaccuracyStand = 0xC54; // CFiringModeFloat
    public const nint m_flInaccuracyJump = 0xC5C; // CFiringModeFloat
    public const nint m_flInaccuracyLand = 0xC64; // CFiringModeFloat
    public const nint m_flInaccuracyLadder = 0xC6C; // CFiringModeFloat
    public const nint m_flInaccuracyFire = 0xC74; // CFiringModeFloat
    public const nint m_flInaccuracyMove = 0xC7C; // CFiringModeFloat
    public const nint m_flRecoilAngle = 0xC84; // CFiringModeFloat
    public const nint m_flRecoilAngleVariance = 0xC8C; // CFiringModeFloat
    public const nint m_flRecoilMagnitude = 0xC94; // CFiringModeFloat
    public const nint m_flRecoilMagnitudeVariance = 0xC9C; // CFiringModeFloat
    public const nint m_nTracerFrequency = 0xCA4; // CFiringModeInt
    public const nint m_flInaccuracyJumpInitial = 0xCAC; // float32
    public const nint m_flInaccuracyJumpApex = 0xCB0; // float32
    public const nint m_flInaccuracyReload = 0xCB4; // float32
    public const nint m_nRecoilSeed = 0xCB8; // int32
    public const nint m_nSpreadSeed = 0xCBC; // int32
    public const nint m_flTimeToIdleAfterFire = 0xCC0; // float32
    public const nint m_flIdleInterval = 0xCC4; // float32
    public const nint m_flAttackMovespeedFactor = 0xCC8; // float32
    public const nint m_flHeatPerShot = 0xCCC; // float32
    public const nint m_flInaccuracyPitchShift = 0xCD0; // float32
    public const nint m_flInaccuracyAltSoundThreshold = 0xCD4; // float32
    public const nint m_flBotAudibleRange = 0xCD8; // float32
    public const nint m_szUseRadioSubtitle = 0xCE0; // CUtlString
    public const nint m_bUnzoomsAfterShot = 0xCE8; // bool
    public const nint m_bHideViewModelWhenZoomed = 0xCE9; // bool
    public const nint m_nZoomLevels = 0xCEC; // int32
    public const nint m_nZoomFOV1 = 0xCF0; // int32
    public const nint m_nZoomFOV2 = 0xCF4; // int32
    public const nint m_flZoomTime0 = 0xCF8; // float32
    public const nint m_flZoomTime1 = 0xCFC; // float32
    public const nint m_flZoomTime2 = 0xD00; // float32
    public const nint m_flIronSightPullUpSpeed = 0xD04; // float32
    public const nint m_flIronSightPutDownSpeed = 0xD08; // float32
    public const nint m_flIronSightFOV = 0xD0C; // float32
    public const nint m_flIronSightPivotForward = 0xD10; // float32
    public const nint m_flIronSightLooseness = 0xD14; // float32
    public const nint m_angPivotAngle = 0xD18; // QAngle
    public const nint m_vecIronSightEyePos = 0xD24; // Vector
    public const nint m_nDamage = 0xD30; // int32
    public const nint m_flHeadshotMultiplier = 0xD34; // float32
    public const nint m_flArmorRatio = 0xD38; // float32
    public const nint m_flPenetration = 0xD3C; // float32
    public const nint m_flRange = 0xD40; // float32
    public const nint m_flRangeModifier = 0xD44; // float32
    public const nint m_flFlinchVelocityModifierLarge = 0xD48; // float32
    public const nint m_flFlinchVelocityModifierSmall = 0xD4C; // float32
    public const nint m_flRecoveryTimeCrouch = 0xD50; // float32
    public const nint m_flRecoveryTimeStand = 0xD54; // float32
    public const nint m_flRecoveryTimeCrouchFinal = 0xD58; // float32
    public const nint m_flRecoveryTimeStandFinal = 0xD5C; // float32
    public const nint m_nRecoveryTransitionStartBullet = 0xD60; // int32
    public const nint m_nRecoveryTransitionEndBullet = 0xD64; // int32
    public const nint m_flThrowVelocity = 0xD68; // float32
    public const nint m_vSmokeColor = 0xD6C; // Vector
    public const nint m_szAnimClass = 0xD78; // CUtlString
}

public static class CClientAlphaProperty {
    public const nint m_nRenderFX = 0x10; // uint8
    public const nint m_nRenderMode = 0x11; // uint8
    public const nint m_bAlphaOverride = 0x0; // bitfield:1
    public const nint m_bShadowAlphaOverride = 0x0; // bitfield:1
    public const nint m_nReserved = 0x0; // bitfield:6
    public const nint m_nAlpha = 0x13; // uint8
    public const nint m_nDesyncOffset = 0x14; // uint16
    public const nint m_nReserved2 = 0x16; // uint16
    public const nint m_nDistFadeStart = 0x18; // uint16
    public const nint m_nDistFadeEnd = 0x1A; // uint16
    public const nint m_flFadeScale = 0x1C; // float32
    public const nint m_flRenderFxStartTime = 0x20; // GameTime_t
    public const nint m_flRenderFxDuration = 0x24; // float32
}

public static class CCollisionProperty {
    public const nint m_collisionAttribute = 0x10; // VPhysicsCollisionAttribute_t
    public const nint m_vecMins = 0x40; // Vector
    public const nint m_vecMaxs = 0x4C; // Vector
    public const nint m_usSolidFlags = 0x5A; // uint8
    public const nint m_nSolidType = 0x5B; // SolidType_t
    public const nint m_triggerBloat = 0x5C; // uint8
    public const nint m_nSurroundType = 0x5D; // SurroundingBoundsType_t
    public const nint m_CollisionGroup = 0x5E; // uint8
    public const nint m_nEnablePhysics = 0x5F; // uint8
    public const nint m_flBoundingRadius = 0x60; // float32
    public const nint m_vecSpecifiedSurroundingMins = 0x64; // Vector
    public const nint m_vecSpecifiedSurroundingMaxs = 0x70; // Vector
    public const nint m_vecSurroundingMaxs = 0x7C; // Vector
    public const nint m_vecSurroundingMins = 0x88; // Vector
    public const nint m_vCapsuleCenter1 = 0x94; // Vector
    public const nint m_vCapsuleCenter2 = 0xA0; // Vector
    public const nint m_flCapsuleRadius = 0xAC; // float32
}

public static class CComicBook {
    public const nint m_CoverImage = 0x8; // CPanoramaImageName
    public const nint m_XmlFile = 0x18; // CUtlString
}

public static class CCompositeMaterialEditorDoc {
    public const nint m_nVersion = 0x8; // int32
    public const nint m_Points = 0x10; // CUtlVector< CompositeMaterialEditorPoint_t >
    public const nint m_KVthumbnail = 0x28; // KeyValues3
}

public static class CDamageRecord {
    public const nint m_PlayerDamager = 0x28; // CHandle< C_CSPlayerPawnBase >
    public const nint m_PlayerRecipient = 0x2C; // CHandle< C_CSPlayerPawnBase >
    public const nint m_hPlayerControllerDamager = 0x30; // CHandle< CCSPlayerController >
    public const nint m_hPlayerControllerRecipient = 0x34; // CHandle< CCSPlayerController >
    public const nint m_szPlayerDamagerName = 0x38; // CUtlString
    public const nint m_szPlayerRecipientName = 0x40; // CUtlString
    public const nint m_DamagerXuid = 0x48; // uint64
    public const nint m_RecipientXuid = 0x50; // uint64
    public const nint m_iDamage = 0x58; // int32
    public const nint m_iActualHealthRemoved = 0x5C; // int32
    public const nint m_iNumHits = 0x60; // int32
    public const nint m_iLastBulletUpdate = 0x64; // int32
    public const nint m_bIsOtherEnemy = 0x68; // bool
    public const nint m_killType = 0x69; // EKillTypes_t
}

public static class CDecalInfo {
    public const nint m_flAnimationScale = 0x0; // float32
    public const nint m_flAnimationLifeSpan = 0x4; // float32
    public const nint m_flPlaceTime = 0x8; // float32
    public const nint m_flFadeStartTime = 0xC; // float32
    public const nint m_flFadeDuration = 0x10; // float32
    public const nint m_nVBSlot = 0x14; // int32
    public const nint m_nBoneIndex = 0x18; // int32
    public const nint m_pNext = 0x28; // CDecalInfo*
    public const nint m_pPrev = 0x30; // CDecalInfo*
    public const nint m_nDecalMaterialIndex = 0x90; // int32
}

public static class CEconItemAttribute {
    public const nint m_iAttributeDefinitionIndex = 0x30; // uint16
    public const nint m_flValue = 0x34; // float32
    public const nint m_flInitialValue = 0x38; // float32
    public const nint m_nRefundableCurrency = 0x3C; // int32
    public const nint m_bSetBonus = 0x40; // bool
}

public static class CEffectData {
    public const nint m_vOrigin = 0x8; // Vector
    public const nint m_vStart = 0x14; // Vector
    public const nint m_vNormal = 0x20; // Vector
    public const nint m_vAngles = 0x2C; // QAngle
    public const nint m_hEntity = 0x38; // CEntityHandle
    public const nint m_hOtherEntity = 0x3C; // CEntityHandle
    public const nint m_flScale = 0x40; // float32
    public const nint m_flMagnitude = 0x44; // float32
    public const nint m_flRadius = 0x48; // float32
    public const nint m_nSurfaceProp = 0x4C; // CUtlStringToken
    public const nint m_nEffectIndex = 0x50; // CWeakHandle< InfoForResourceTypeIParticleSystemDefinition >
    public const nint m_nDamageType = 0x58; // uint32
    public const nint m_nPenetrate = 0x5C; // uint8
    public const nint m_nMaterial = 0x5E; // uint16
    public const nint m_nHitBox = 0x60; // uint16
    public const nint m_nColor = 0x62; // uint8
    public const nint m_fFlags = 0x63; // uint8
    public const nint m_nAttachmentIndex = 0x64; // AttachmentHandle_t
    public const nint m_nAttachmentName = 0x68; // CUtlStringToken
    public const nint m_iEffectName = 0x6C; // uint16
    public const nint m_nExplosionType = 0x6E; // uint8
}

public static class CEntityIdentity {
    public const nint m_nameStringableIndex = 0x14; // int32
    public const nint m_name = 0x18; // CUtlSymbolLarge
    public const nint m_designerName = 0x20; // CUtlSymbolLarge
    public const nint m_flags = 0x30; // uint32
    public const nint m_worldGroupId = 0x38; // WorldGroupId_t
    public const nint m_fDataObjectTypes = 0x3C; // uint32
    public const nint m_PathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
    public const nint m_pPrev = 0x58; // CEntityIdentity*
    public const nint m_pNext = 0x60; // CEntityIdentity*
    public const nint m_pPrevByClass = 0x68; // CEntityIdentity*
    public const nint m_pNextByClass = 0x70; // CEntityIdentity*
}

public static class CEntityInstance {
    public const nint m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
    public const nint m_pEntity = 0x10; // CEntityIdentity*
    public const nint m_CScriptComponent = 0x28; // CScriptComponent*
}

public static class CFireOverlay {
    public const nint m_pOwner = 0xD0; // C_FireSmoke*
    public const nint m_vBaseColors = 0xD8; // Vector[4]
    public const nint m_flScale = 0x108; // float32
    public const nint m_nGUID = 0x10C; // int32
}

public static class CFlashlightEffect {
    public const nint m_bIsOn = 0x10; // bool
    public const nint m_bMuzzleFlashEnabled = 0x20; // bool
    public const nint m_flMuzzleFlashBrightness = 0x24; // float32
    public const nint m_quatMuzzleFlashOrientation = 0x30; // Quaternion
    public const nint m_vecMuzzleFlashOrigin = 0x40; // Vector
    public const nint m_flFov = 0x4C; // float32
    public const nint m_flFarZ = 0x50; // float32
    public const nint m_flLinearAtten = 0x54; // float32
    public const nint m_bCastsShadows = 0x58; // bool
    public const nint m_flCurrentPullBackDist = 0x5C; // float32
    public const nint m_FlashlightTexture = 0x60; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_MuzzleFlashTexture = 0x68; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_textureName = 0x70; // char[64]
}

public static class CFuncWater {
    public const nint m_BuoyancyHelper = 0xCC0; // CBuoyancyHelper
}

public static class CGameSceneNode {
    public const nint m_nodeToWorld = 0x10; // CTransform
    public const nint m_pOwner = 0x30; // CEntityInstance*
    public const nint m_pParent = 0x38; // CGameSceneNode*
    public const nint m_pChild = 0x40; // CGameSceneNode*
    public const nint m_pNextSibling = 0x48; // CGameSceneNode*
    public const nint m_hParent = 0x70; // CGameSceneNodeHandle
    public const nint m_vecOrigin = 0x80; // CNetworkOriginCellCoordQuantizedVector
    public const nint m_angRotation = 0xB8; // QAngle
    public const nint m_flScale = 0xC4; // float32
    public const nint m_vecAbsOrigin = 0xC8; // Vector
    public const nint m_angAbsRotation = 0xD4; // QAngle
    public const nint m_flAbsScale = 0xE0; // float32
    public const nint m_nParentAttachmentOrBone = 0xE4; // int16
    public const nint m_bDebugAbsOriginChanges = 0xE6; // bool
    public const nint m_bDormant = 0xE7; // bool
    public const nint m_bForceParentToBeNetworked = 0xE8; // bool
    public const nint m_bDirtyHierarchy = 0x0; // bitfield:1
    public const nint m_bDirtyBoneMergeInfo = 0x0; // bitfield:1
    public const nint m_bNetworkedPositionChanged = 0x0; // bitfield:1
    public const nint m_bNetworkedAnglesChanged = 0x0; // bitfield:1
    public const nint m_bNetworkedScaleChanged = 0x0; // bitfield:1
    public const nint m_bWillBeCallingPostDataUpdate = 0x0; // bitfield:1
    public const nint m_bNotifyBoneTransformsChanged = 0x0; // bitfield:1
    public const nint m_bBoneMergeFlex = 0x0; // bitfield:1
    public const nint m_nLatchAbsOrigin = 0x0; // bitfield:2
    public const nint m_bDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
    public const nint m_nHierarchicalDepth = 0xEB; // uint8
    public const nint m_nHierarchyType = 0xEC; // uint8
    public const nint m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xED; // uint8
    public const nint m_name = 0xF0; // CUtlStringToken
    public const nint m_hierarchyAttachName = 0x130; // CUtlStringToken
    public const nint m_flZOffset = 0x134; // float32
    public const nint m_vRenderOrigin = 0x138; // Vector
}

public static class CGameSceneNodeHandle {
    public const nint m_hOwner = 0x8; // CEntityHandle
    public const nint m_name = 0xC; // CUtlStringToken
}

public static class CGlobalLightBase {
    public const nint m_bSpotLight = 0x10; // bool
    public const nint m_SpotLightOrigin = 0x14; // Vector
    public const nint m_SpotLightAngles = 0x20; // QAngle
    public const nint m_ShadowDirection = 0x2C; // Vector
    public const nint m_AmbientDirection = 0x38; // Vector
    public const nint m_SpecularDirection = 0x44; // Vector
    public const nint m_InspectorSpecularDirection = 0x50; // Vector
    public const nint m_flSpecularPower = 0x5C; // float32
    public const nint m_flSpecularIndependence = 0x60; // float32
    public const nint m_SpecularColor = 0x64; // Color
    public const nint m_bStartDisabled = 0x68; // bool
    public const nint m_bEnabled = 0x69; // bool
    public const nint m_LightColor = 0x6A; // Color
    public const nint m_AmbientColor1 = 0x6E; // Color
    public const nint m_AmbientColor2 = 0x72; // Color
    public const nint m_AmbientColor3 = 0x76; // Color
    public const nint m_flSunDistance = 0x7C; // float32
    public const nint m_flFOV = 0x80; // float32
    public const nint m_flNearZ = 0x84; // float32
    public const nint m_flFarZ = 0x88; // float32
    public const nint m_bEnableShadows = 0x8C; // bool
    public const nint m_bOldEnableShadows = 0x8D; // bool
    public const nint m_bBackgroundClearNotRequired = 0x8E; // bool
    public const nint m_flCloudScale = 0x90; // float32
    public const nint m_flCloud1Speed = 0x94; // float32
    public const nint m_flCloud1Direction = 0x98; // float32
    public const nint m_flCloud2Speed = 0x9C; // float32
    public const nint m_flCloud2Direction = 0xA0; // float32
    public const nint m_flAmbientScale1 = 0xB0; // float32
    public const nint m_flAmbientScale2 = 0xB4; // float32
    public const nint m_flGroundScale = 0xB8; // float32
    public const nint m_flLightScale = 0xBC; // float32
    public const nint m_flFoWDarkness = 0xC0; // float32
    public const nint m_bEnableSeparateSkyboxFog = 0xC4; // bool
    public const nint m_vFowColor = 0xC8; // Vector
    public const nint m_ViewOrigin = 0xD4; // Vector
    public const nint m_ViewAngles = 0xE0; // QAngle
    public const nint m_flViewFoV = 0xEC; // float32
    public const nint m_WorldPoints = 0xF0; // Vector[8]
    public const nint m_vFogOffsetLayer0 = 0x4A8; // Vector2D
    public const nint m_vFogOffsetLayer1 = 0x4B0; // Vector2D
    public const nint m_hEnvWind = 0x4B8; // CHandle< C_BaseEntity >
    public const nint m_hEnvSky = 0x4BC; // CHandle< C_BaseEntity >
}

public static class CGlowOverlay {
    public const nint m_vPos = 0x8; // Vector
    public const nint m_bDirectional = 0x14; // bool
    public const nint m_vDirection = 0x18; // Vector
    public const nint m_bInSky = 0x24; // bool
    public const nint m_skyObstructionScale = 0x28; // float32
    public const nint m_Sprites = 0x30; // CGlowSprite[4]
    public const nint m_nSprites = 0xB0; // int32
    public const nint m_flProxyRadius = 0xB4; // float32
    public const nint m_flHDRColorScale = 0xB8; // float32
    public const nint m_flGlowObstructionScale = 0xBC; // float32
    public const nint m_bCacheGlowObstruction = 0xC0; // bool
    public const nint m_bCacheSkyObstruction = 0xC1; // bool
    public const nint m_bActivated = 0xC2; // int16
    public const nint m_ListIndex = 0xC4; // uint16
    public const nint m_queryHandle = 0xC8; // int32
}

public static class CGlowProperty {
    public const nint m_fGlowColor = 0x8; // Vector
    public const nint m_iGlowType = 0x30; // int32
    public const nint m_iGlowTeam = 0x34; // int32
    public const nint m_nGlowRange = 0x38; // int32
    public const nint m_nGlowRangeMin = 0x3C; // int32
    public const nint m_glowColorOverride = 0x40; // Color
    public const nint m_bFlashing = 0x44; // bool
    public const nint m_flGlowTime = 0x48; // float32
    public const nint m_flGlowStartTime = 0x4C; // float32
    public const nint m_bEligibleForScreenHighlight = 0x50; // bool
    public const nint m_bGlowing = 0x51; // bool
}

public static class CGlowSprite {
    public const nint m_vColor = 0x0; // Vector
    public const nint m_flHorzSize = 0xC; // float32
    public const nint m_flVertSize = 0x10; // float32
    public const nint m_hMaterial = 0x18; // CStrongHandle< InfoForResourceTypeIMaterial2 >
}

public static class CGrenadeTracer {
    public const nint m_flTracerDuration = 0xCE0; // float32
    public const nint m_nType = 0xCE4; // GrenadeType_t
}

public static class CHitboxComponent {
    public const nint m_bvDisabledHitGroups = 0x24; // uint32[1]
}

public static class CInfoDynamicShadowHint {
    public const nint m_bDisabled = 0x540; // bool
    public const nint m_flRange = 0x544; // float32
    public const nint m_nImportance = 0x548; // int32
    public const nint m_nLightChoice = 0x54C; // int32
    public const nint m_hLight = 0x550; // CHandle< C_BaseEntity >
}

public static class CInfoDynamicShadowHintBox {
    public const nint m_vBoxMins = 0x558; // Vector
    public const nint m_vBoxMaxs = 0x564; // Vector
}

public static class CInfoOffscreenPanoramaTexture {
    public const nint m_bDisabled = 0x540; // bool
    public const nint m_nResolutionX = 0x544; // int32
    public const nint m_nResolutionY = 0x548; // int32
    public const nint m_szLayoutFileName = 0x550; // CUtlSymbolLarge
    public const nint m_RenderAttrName = 0x558; // CUtlSymbolLarge
    public const nint m_TargetEntities = 0x560; // C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > >
    public const nint m_nTargetChangeCount = 0x578; // int32
    public const nint m_vecCSSClasses = 0x580; // C_NetworkUtlVectorBase< CUtlSymbolLarge >
    public const nint m_bCheckCSSClasses = 0x6F8; // bool
}

public static class CInfoWorldLayer {
    public const nint m_pOutputOnEntitiesSpawned = 0x540; // CEntityIOOutput
    public const nint m_worldName = 0x568; // CUtlSymbolLarge
    public const nint m_layerName = 0x570; // CUtlSymbolLarge
    public const nint m_bWorldLayerVisible = 0x578; // bool
    public const nint m_bEntitiesSpawned = 0x579; // bool
    public const nint m_bCreateAsChildSpawnGroup = 0x57A; // bool
    public const nint m_hLayerSpawnGroup = 0x57C; // uint32
    public const nint m_bWorldLayerActuallyVisible = 0x580; // bool
}

public static class CInterpolatedValue {
    public const nint m_flStartTime = 0x0; // float32
    public const nint m_flEndTime = 0x4; // float32
    public const nint m_flStartValue = 0x8; // float32
    public const nint m_flEndValue = 0xC; // float32
    public const nint m_nInterpType = 0x10; // int32
}

public static class CLightComponent {
    public const nint __m_pChainEntity = 0x48; // CNetworkVarChainer
    public const nint m_Color = 0x85; // Color
    public const nint m_SecondaryColor = 0x89; // Color
    public const nint m_flBrightness = 0x90; // float32
    public const nint m_flBrightnessScale = 0x94; // float32
    public const nint m_flBrightnessMult = 0x98; // float32
    public const nint m_flRange = 0x9C; // float32
    public const nint m_flFalloff = 0xA0; // float32
    public const nint m_flAttenuation0 = 0xA4; // float32
    public const nint m_flAttenuation1 = 0xA8; // float32
    public const nint m_flAttenuation2 = 0xAC; // float32
    public const nint m_flTheta = 0xB0; // float32
    public const nint m_flPhi = 0xB4; // float32
    public const nint m_hLightCookie = 0xB8; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_nCascades = 0xC0; // int32
    public const nint m_nCastShadows = 0xC4; // int32
    public const nint m_nShadowWidth = 0xC8; // int32
    public const nint m_nShadowHeight = 0xCC; // int32
    public const nint m_bRenderDiffuse = 0xD0; // bool
    public const nint m_nRenderSpecular = 0xD4; // int32
    public const nint m_bRenderTransmissive = 0xD8; // bool
    public const nint m_flOrthoLightWidth = 0xDC; // float32
    public const nint m_flOrthoLightHeight = 0xE0; // float32
    public const nint m_nStyle = 0xE4; // int32
    public const nint m_Pattern = 0xE8; // CUtlString
    public const nint m_nCascadeRenderStaticObjects = 0xF0; // int32
    public const nint m_flShadowCascadeCrossFade = 0xF4; // float32
    public const nint m_flShadowCascadeDistanceFade = 0xF8; // float32
    public const nint m_flShadowCascadeDistance0 = 0xFC; // float32
    public const nint m_flShadowCascadeDistance1 = 0x100; // float32
    public const nint m_flShadowCascadeDistance2 = 0x104; // float32
    public const nint m_flShadowCascadeDistance3 = 0x108; // float32
    public const nint m_nShadowCascadeResolution0 = 0x10C; // int32
    public const nint m_nShadowCascadeResolution1 = 0x110; // int32
    public const nint m_nShadowCascadeResolution2 = 0x114; // int32
    public const nint m_nShadowCascadeResolution3 = 0x118; // int32
    public const nint m_bUsesBakedShadowing = 0x11C; // bool
    public const nint m_nShadowPriority = 0x120; // int32
    public const nint m_nBakedShadowIndex = 0x124; // int32
    public const nint m_bRenderToCubemaps = 0x128; // bool
    public const nint m_LightGroups = 0x130; // CUtlSymbolLarge
    public const nint m_nDirectLight = 0x138; // int32
    public const nint m_nIndirectLight = 0x13C; // int32
    public const nint m_flFadeMinDist = 0x140; // float32
    public const nint m_flFadeMaxDist = 0x144; // float32
    public const nint m_flShadowFadeMinDist = 0x148; // float32
    public const nint m_flShadowFadeMaxDist = 0x14C; // float32
    public const nint m_bEnabled = 0x150; // bool
    public const nint m_bFlicker = 0x151; // bool
    public const nint m_bPrecomputedFieldsValid = 0x152; // bool
    public const nint m_vPrecomputedBoundsMins = 0x154; // Vector
    public const nint m_vPrecomputedBoundsMaxs = 0x160; // Vector
    public const nint m_vPrecomputedOBBOrigin = 0x16C; // Vector
    public const nint m_vPrecomputedOBBAngles = 0x178; // QAngle
    public const nint m_vPrecomputedOBBExtent = 0x184; // Vector
    public const nint m_flPrecomputedMaxRange = 0x190; // float32
    public const nint m_nFogLightingMode = 0x194; // int32
    public const nint m_flFogContributionStength = 0x198; // float32
    public const nint m_flNearClipPlane = 0x19C; // float32
    public const nint m_SkyColor = 0x1A0; // Color
    public const nint m_flSkyIntensity = 0x1A4; // float32
    public const nint m_SkyAmbientBounce = 0x1A8; // Color
    public const nint m_bUseSecondaryColor = 0x1AC; // bool
    public const nint m_bMixedShadows = 0x1AD; // bool
    public const nint m_flLightStyleStartTime = 0x1B0; // GameTime_t
    public const nint m_flCapsuleLength = 0x1B4; // float32
    public const nint m_flMinRoughness = 0x1B8; // float32
}

public static class CLogicRelay {
    public const nint m_OnTrigger = 0x540; // CEntityIOOutput
    public const nint m_OnSpawn = 0x568; // CEntityIOOutput
    public const nint m_bDisabled = 0x590; // bool
    public const nint m_bWaitForRefire = 0x591; // bool
    public const nint m_bTriggerOnce = 0x592; // bool
    public const nint m_bFastRetrigger = 0x593; // bool
    public const nint m_bPassthoughCaller = 0x594; // bool
}

public static class CModelState {
    public const nint m_hModel = 0xA0; // CStrongHandle< InfoForResourceTypeCModel >
    public const nint m_ModelName = 0xA8; // CUtlSymbolLarge
    public const nint m_bClientClothCreationSuppressed = 0xE8; // bool
    public const nint m_MeshGroupMask = 0x180; // uint64
    public const nint m_nIdealMotionType = 0x222; // int8
    public const nint m_nForceLOD = 0x223; // int8
    public const nint m_nClothUpdateFlags = 0x224; // int8
}

public static class CNetworkedSequenceOperation {
    public const nint m_hSequence = 0x8; // HSequence
    public const nint m_flPrevCycle = 0xC; // float32
    public const nint m_flCycle = 0x10; // float32
    public const nint m_flWeight = 0x14; // CNetworkedQuantizedFloat
    public const nint m_bSequenceChangeNetworked = 0x1C; // bool
    public const nint m_bDiscontinuity = 0x1D; // bool
    public const nint m_flPrevCycleFromDiscontinuity = 0x20; // float32
    public const nint m_flPrevCycleForAnimEventDetection = 0x24; // float32
}

public static class CPlayer_CameraServices {
    public const nint m_vecCsViewPunchAngle = 0x40; // QAngle
    public const nint m_nCsViewPunchAngleTick = 0x4C; // GameTick_t
    public const nint m_flCsViewPunchAngleTickRatio = 0x50; // float32
    public const nint m_PlayerFog = 0x58; // C_fogplayerparams_t
    public const nint m_hColorCorrectionCtrl = 0x98; // CHandle< C_ColorCorrection >
    public const nint m_hViewEntity = 0x9C; // CHandle< C_BaseEntity >
    public const nint m_hTonemapController = 0xA0; // CHandle< C_TonemapController2 >
    public const nint m_audio = 0xA8; // audioparams_t
    public const nint m_PostProcessingVolumes = 0x120; // C_NetworkUtlVectorBase< CHandle< C_PostProcessingVolume > >
    public const nint m_flOldPlayerZ = 0x138; // float32
    public const nint m_flOldPlayerViewOffsetZ = 0x13C; // float32
    public const nint m_CurrentFog = 0x140; // fogparams_t
    public const nint m_hOldFogController = 0x1A8; // CHandle< C_FogController >
    public const nint m_bOverrideFogColor = 0x1AC; // bool[5]
    public const nint m_OverrideFogColor = 0x1B1; // Color[5]
    public const nint m_bOverrideFogStartEnd = 0x1C5; // bool[5]
    public const nint m_fOverrideFogStart = 0x1CC; // float32[5]
    public const nint m_fOverrideFogEnd = 0x1E0; // float32[5]
    public const nint m_hActivePostProcessingVolume = 0x1F4; // CHandle< C_PostProcessingVolume >
    public const nint m_angDemoViewAngles = 0x1F8; // QAngle
}

public static class CPlayer_MovementServices {
    public const nint m_nImpulse = 0x40; // int32
    public const nint m_nButtons = 0x48; // CInButtonState
    public const nint m_nQueuedButtonDownMask = 0x68; // uint64
    public const nint m_nQueuedButtonChangeMask = 0x70; // uint64
    public const nint m_nButtonDoublePressed = 0x78; // uint64
    public const nint m_pButtonPressedCmdNumber = 0x80; // uint32[64]
    public const nint m_nLastCommandNumberProcessed = 0x180; // uint32
    public const nint m_nToggleButtonDownMask = 0x188; // uint64
    public const nint m_flMaxspeed = 0x190; // float32
    public const nint m_arrForceSubtickMoveWhen = 0x194; // float32[4]
    public const nint m_flForwardMove = 0x1A4; // float32
    public const nint m_flLeftMove = 0x1A8; // float32
    public const nint m_flUpMove = 0x1AC; // float32
    public const nint m_vecLastMovementImpulses = 0x1B0; // Vector
    public const nint m_vecOldViewAngles = 0x1BC; // QAngle
}

public static class CPlayer_MovementServices_Humanoid {
    public const nint m_flStepSoundTime = 0x1D0; // float32
    public const nint m_flFallVelocity = 0x1D4; // float32
    public const nint m_bInCrouch = 0x1D8; // bool
    public const nint m_nCrouchState = 0x1DC; // uint32
    public const nint m_flCrouchTransitionStartTime = 0x1E0; // GameTime_t
    public const nint m_bDucked = 0x1E4; // bool
    public const nint m_bDucking = 0x1E5; // bool
    public const nint m_bInDuckJump = 0x1E6; // bool
    public const nint m_groundNormal = 0x1E8; // Vector
    public const nint m_flSurfaceFriction = 0x1F4; // float32
    public const nint m_surfaceProps = 0x1F8; // CUtlStringToken
    public const nint m_nStepside = 0x208; // int32
}

public static class CPlayer_ObserverServices {
    public const nint m_iObserverMode = 0x40; // uint8
    public const nint m_hObserverTarget = 0x44; // CHandle< C_BaseEntity >
    public const nint m_iObserverLastMode = 0x48; // ObserverMode_t
    public const nint m_bForcedObserverMode = 0x4C; // bool
    public const nint m_flObserverChaseDistance = 0x50; // float32
    public const nint m_flObserverChaseDistanceCalcTime = 0x54; // GameTime_t
}

public static class CPlayer_WeaponServices {
    public const nint m_bAllowSwitchToNoWeapon = 0x40; // bool
    public const nint m_hMyWeapons = 0x48; // C_NetworkUtlVectorBase< CHandle< C_BasePlayerWeapon > >
    public const nint m_hActiveWeapon = 0x60; // CHandle< C_BasePlayerWeapon >
    public const nint m_hLastWeapon = 0x64; // CHandle< C_BasePlayerWeapon >
    public const nint m_iAmmo = 0x68; // uint16[32]
}

public static class CPointOffScreenIndicatorUi {
    public const nint m_bBeenEnabled = 0xF20; // bool
    public const nint m_bHide = 0xF21; // bool
    public const nint m_flSeenTargetTime = 0xF24; // float32
    public const nint m_pTargetPanel = 0xF28; // C_PointClientUIWorldPanel*
}

public static class CPointTemplate {
    public const nint m_iszWorldName = 0x540; // CUtlSymbolLarge
    public const nint m_iszSource2EntityLumpName = 0x548; // CUtlSymbolLarge
    public const nint m_iszEntityFilterName = 0x550; // CUtlSymbolLarge
    public const nint m_flTimeoutInterval = 0x558; // float32
    public const nint m_bAsynchronouslySpawnEntities = 0x55C; // bool
    public const nint m_pOutputOnSpawned = 0x560; // CEntityIOOutput
    public const nint m_clientOnlyEntityBehavior = 0x588; // PointTemplateClientOnlyEntityBehavior_t
    public const nint m_ownerSpawnGroupType = 0x58C; // PointTemplateOwnerSpawnGroupType_t
    public const nint m_createdSpawnGroupHandles = 0x590; // CUtlVector< uint32 >
    public const nint m_SpawnedEntityHandles = 0x5A8; // CUtlVector< CEntityHandle >
    public const nint m_ScriptSpawnCallback = 0x5C0; // HSCRIPT
    public const nint m_ScriptCallbackScope = 0x5C8; // HSCRIPT
}

public static class CPrecipitationVData {
    public const nint m_szParticlePrecipitationEffect = 0x28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    public const nint m_flInnerDistance = 0x108; // float32
    public const nint m_nAttachType = 0x10C; // ParticleAttachment_t
    public const nint m_bBatchSameVolumeType = 0x110; // bool
    public const nint m_nRTEnvCP = 0x114; // int32
    public const nint m_nRTEnvCPComponent = 0x118; // int32
    public const nint m_szModifier = 0x120; // CUtlString
}

public static class CProjectedTextureBase {
    public const nint m_hTargetEntity = 0xC; // CHandle< C_BaseEntity >
    public const nint m_bState = 0x10; // bool
    public const nint m_bAlwaysUpdate = 0x11; // bool
    public const nint m_flLightFOV = 0x14; // float32
    public const nint m_bEnableShadows = 0x18; // bool
    public const nint m_bSimpleProjection = 0x19; // bool
    public const nint m_bLightOnlyTarget = 0x1A; // bool
    public const nint m_bLightWorld = 0x1B; // bool
    public const nint m_bCameraSpace = 0x1C; // bool
    public const nint m_flBrightnessScale = 0x20; // float32
    public const nint m_LightColor = 0x24; // Color
    public const nint m_flIntensity = 0x28; // float32
    public const nint m_flLinearAttenuation = 0x2C; // float32
    public const nint m_flQuadraticAttenuation = 0x30; // float32
    public const nint m_bVolumetric = 0x34; // bool
    public const nint m_flVolumetricIntensity = 0x38; // float32
    public const nint m_flNoiseStrength = 0x3C; // float32
    public const nint m_flFlashlightTime = 0x40; // float32
    public const nint m_nNumPlanes = 0x44; // uint32
    public const nint m_flPlaneOffset = 0x48; // float32
    public const nint m_flColorTransitionTime = 0x4C; // float32
    public const nint m_flAmbient = 0x50; // float32
    public const nint m_SpotlightTextureName = 0x54; // char[512]
    public const nint m_nSpotlightTextureFrame = 0x254; // int32
    public const nint m_nShadowQuality = 0x258; // uint32
    public const nint m_flNearZ = 0x25C; // float32
    public const nint m_flFarZ = 0x260; // float32
    public const nint m_flProjectionSize = 0x264; // float32
    public const nint m_flRotation = 0x268; // float32
    public const nint m_bFlipHorizontal = 0x26C; // bool
}

public static class CRenderComponent {
    public const nint __m_pChainEntity = 0x10; // CNetworkVarChainer
    public const nint m_bIsRenderingWithViewModels = 0x50; // bool
    public const nint m_nSplitscreenFlags = 0x54; // uint32
    public const nint m_bEnableRendering = 0x60; // bool
    public const nint m_bInterpolationReadyToDraw = 0xB0; // bool
}

public static class CSMatchStats_t {
    public const nint m_iEnemy5Ks = 0x68; // int32
    public const nint m_iEnemy4Ks = 0x6C; // int32
    public const nint m_iEnemy3Ks = 0x70; // int32
}

public static class CSPerRoundStats_t {
    public const nint m_iKills = 0x30; // int32
    public const nint m_iDeaths = 0x34; // int32
    public const nint m_iAssists = 0x38; // int32
    public const nint m_iDamage = 0x3C; // int32
    public const nint m_iEquipmentValue = 0x40; // int32
    public const nint m_iMoneySaved = 0x44; // int32
    public const nint m_iKillReward = 0x48; // int32
    public const nint m_iLiveTime = 0x4C; // int32
    public const nint m_iHeadShotKills = 0x50; // int32
    public const nint m_iObjective = 0x54; // int32
    public const nint m_iCashEarned = 0x58; // int32
    public const nint m_iUtilityDamage = 0x5C; // int32
    public const nint m_iEnemiesFlashed = 0x60; // int32
}

public static class CScriptComponent {
    public const nint m_scriptClassName = 0x30; // CUtlSymbolLarge
}

public static class CSkeletonInstance {
    public const nint m_modelState = 0x160; // CModelState
    public const nint m_bIsAnimationEnabled = 0x390; // bool
    public const nint m_bUseParentRenderBounds = 0x391; // bool
    public const nint m_bDisableSolidCollisionsForHierarchy = 0x392; // bool
    public const nint m_bDirtyMotionType = 0x0; // bitfield:1
    public const nint m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
    public const nint m_materialGroup = 0x394; // CUtlStringToken
    public const nint m_nHitboxSet = 0x398; // uint8
}

public static class CSkyboxReference {
    public const nint m_worldGroupId = 0x540; // WorldGroupId_t
    public const nint m_hSkyCamera = 0x544; // CHandle< C_SkyCamera >
}

public static class CTimeline {
    public const nint m_flValues = 0x10; // float32[64]
    public const nint m_nValueCounts = 0x110; // int32[64]
    public const nint m_nBucketCount = 0x210; // int32
    public const nint m_flInterval = 0x214; // float32
    public const nint m_flFinalValue = 0x218; // float32
    public const nint m_nCompressionType = 0x21C; // TimelineCompression_t
    public const nint m_bStopped = 0x220; // bool
}

public static class C_AttributeContainer {
    public const nint m_Item = 0x50; // C_EconItemView
    public const nint m_iExternalItemProviderRegisteredToken = 0x498; // int32
    public const nint m_ullRegisteredAsItemID = 0x4A0; // uint64
}

public static class C_BarnLight {
    public const nint m_bEnabled = 0xCC0; // bool
    public const nint m_nColorMode = 0xCC4; // int32
    public const nint m_Color = 0xCC8; // Color
    public const nint m_flColorTemperature = 0xCCC; // float32
    public const nint m_flBrightness = 0xCD0; // float32
    public const nint m_flBrightnessScale = 0xCD4; // float32
    public const nint m_nDirectLight = 0xCD8; // int32
    public const nint m_nBakedShadowIndex = 0xCDC; // int32
    public const nint m_nLuminaireShape = 0xCE0; // int32
    public const nint m_flLuminaireSize = 0xCE4; // float32
    public const nint m_flLuminaireAnisotropy = 0xCE8; // float32
    public const nint m_LightStyleString = 0xCF0; // CUtlString
    public const nint m_flLightStyleStartTime = 0xCF8; // GameTime_t
    public const nint m_QueuedLightStyleStrings = 0xD00; // C_NetworkUtlVectorBase< CUtlString >
    public const nint m_LightStyleEvents = 0xD18; // C_NetworkUtlVectorBase< CUtlString >
    public const nint m_LightStyleTargets = 0xD30; // C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > >
    public const nint m_StyleEvent = 0xD48; // CEntityIOOutput[4]
    public const nint m_hLightCookie = 0xDE8; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_flShape = 0xDF0; // float32
    public const nint m_flSoftX = 0xDF4; // float32
    public const nint m_flSoftY = 0xDF8; // float32
    public const nint m_flSkirt = 0xDFC; // float32
    public const nint m_flSkirtNear = 0xE00; // float32
    public const nint m_vSizeParams = 0xE04; // Vector
    public const nint m_flRange = 0xE10; // float32
    public const nint m_vShear = 0xE14; // Vector
    public const nint m_nBakeSpecularToCubemaps = 0xE20; // int32
    public const nint m_vBakeSpecularToCubemapsSize = 0xE24; // Vector
    public const nint m_nCastShadows = 0xE30; // int32
    public const nint m_nShadowMapSize = 0xE34; // int32
    public const nint m_nShadowPriority = 0xE38; // int32
    public const nint m_bContactShadow = 0xE3C; // bool
    public const nint m_nBounceLight = 0xE40; // int32
    public const nint m_flBounceScale = 0xE44; // float32
    public const nint m_flMinRoughness = 0xE48; // float32
    public const nint m_vAlternateColor = 0xE4C; // Vector
    public const nint m_fAlternateColorBrightness = 0xE58; // float32
    public const nint m_nFog = 0xE5C; // int32
    public const nint m_flFogStrength = 0xE60; // float32
    public const nint m_nFogShadows = 0xE64; // int32
    public const nint m_flFogScale = 0xE68; // float32
    public const nint m_flFadeSizeStart = 0xE6C; // float32
    public const nint m_flFadeSizeEnd = 0xE70; // float32
    public const nint m_flShadowFadeSizeStart = 0xE74; // float32
    public const nint m_flShadowFadeSizeEnd = 0xE78; // float32
    public const nint m_bPrecomputedFieldsValid = 0xE7C; // bool
    public const nint m_vPrecomputedBoundsMins = 0xE80; // Vector
    public const nint m_vPrecomputedBoundsMaxs = 0xE8C; // Vector
    public const nint m_vPrecomputedOBBOrigin = 0xE98; // Vector
    public const nint m_vPrecomputedOBBAngles = 0xEA4; // QAngle
    public const nint m_vPrecomputedOBBExtent = 0xEB0; // Vector
}

public static class C_BaseButton {
    public const nint m_glowEntity = 0xCC0; // CHandle< C_BaseModelEntity >
    public const nint m_usable = 0xCC4; // bool
    public const nint m_szDisplayText = 0xCC8; // CUtlSymbolLarge
}

public static class C_BaseCSGrenade {
    public const nint m_bClientPredictDelete = 0x18E0; // bool
    public const nint m_bRedraw = 0x1908; // bool
    public const nint m_bIsHeldByPlayer = 0x1909; // bool
    public const nint m_bPinPulled = 0x190A; // bool
    public const nint m_bJumpThrow = 0x190B; // bool
    public const nint m_eThrowStatus = 0x190C; // EGrenadeThrowState
    public const nint m_fThrowTime = 0x1910; // GameTime_t
    public const nint m_flThrowStrength = 0x1914; // float32
    public const nint m_flThrowStrengthApproach = 0x1918; // float32
    public const nint m_fDropTime = 0x191C; // GameTime_t
}

public static class C_BaseCSGrenadeProjectile {
    public const nint m_vInitialVelocity = 0x1068; // Vector
    public const nint m_nBounces = 0x1074; // int32
    public const nint m_nExplodeEffectIndex = 0x1078; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
    public const nint m_nExplodeEffectTickBegin = 0x1080; // int32
    public const nint m_vecExplodeEffectOrigin = 0x1084; // Vector
    public const nint m_flSpawnTime = 0x1090; // GameTime_t
    public const nint vecLastTrailLinePos = 0x1094; // Vector
    public const nint flNextTrailLineTime = 0x10A0; // GameTime_t
    public const nint m_bExplodeEffectBegan = 0x10A4; // bool
    public const nint m_bCanCreateGrenadeTrail = 0x10A5; // bool
    public const nint m_nSnapshotTrajectoryEffectIndex = 0x10A8; // ParticleIndex_t
    public const nint m_hSnapshotTrajectoryParticleSnapshot = 0x10B0; // CStrongHandle< InfoForResourceTypeIParticleSnapshot >
    public const nint m_arrTrajectoryTrailPoints = 0x10B8; // CUtlVector< Vector >
    public const nint m_arrTrajectoryTrailPointCreationTimes = 0x10D0; // CUtlVector< float32 >
    public const nint m_flTrajectoryTrailEffectCreationTime = 0x10E8; // float32
}

public static class C_BaseClientUIEntity {
    public const nint m_bEnabled = 0xCC8; // bool
    public const nint m_DialogXMLName = 0xCD0; // CUtlSymbolLarge
    public const nint m_PanelClassName = 0xCD8; // CUtlSymbolLarge
    public const nint m_PanelID = 0xCE0; // CUtlSymbolLarge
}

public static class C_BaseCombatCharacter {
    public const nint m_hMyWearables = 0x1018; // C_NetworkUtlVectorBase< CHandle< C_EconWearable > >
    public const nint m_bloodColor = 0x1030; // int32
    public const nint m_leftFootAttachment = 0x1034; // AttachmentHandle_t
    public const nint m_rightFootAttachment = 0x1035; // AttachmentHandle_t
    public const nint m_nWaterWakeMode = 0x1038; // C_BaseCombatCharacter::WaterWakeMode_t
    public const nint m_flWaterWorldZ = 0x103C; // float32
    public const nint m_flWaterNextTraceTime = 0x1040; // float32
    public const nint m_flFieldOfView = 0x1044; // float32
}

public static class C_BaseDoor {
    public const nint m_bIsUsable = 0xCC0; // bool
}

public static class C_BaseEntity {
    public const nint m_CBodyComponent = 0x30; // CBodyComponent*
    public const nint m_NetworkTransmitComponent = 0x38; // CNetworkTransmitComponent
    public const nint m_nLastThinkTick = 0x308; // GameTick_t
    public const nint m_pGameSceneNode = 0x310; // CGameSceneNode*
    public const nint m_pRenderComponent = 0x318; // CRenderComponent*
    public const nint m_pCollision = 0x320; // CCollisionProperty*
    public const nint m_iMaxHealth = 0x328; // int32
    public const nint m_iHealth = 0x32C; // int32
    public const nint m_lifeState = 0x330; // uint8
    public const nint m_bTakesDamage = 0x331; // bool
    public const nint m_nTakeDamageFlags = 0x334; // TakeDamageFlags_t
    public const nint m_ubInterpolationFrame = 0x338; // uint8
    public const nint m_hSceneObjectController = 0x33C; // CHandle< C_BaseEntity >
    public const nint m_nNoInterpolationTick = 0x340; // int32
    public const nint m_nVisibilityNoInterpolationTick = 0x344; // int32
    public const nint m_flProxyRandomValue = 0x348; // float32
    public const nint m_iEFlags = 0x34C; // int32
    public const nint m_nWaterType = 0x350; // uint8
    public const nint m_bInterpolateEvenWithNoModel = 0x351; // bool
    public const nint m_bPredictionEligible = 0x352; // bool
    public const nint m_bApplyLayerMatchIDToModel = 0x353; // bool
    public const nint m_tokLayerMatchID = 0x354; // CUtlStringToken
    public const nint m_nSubclassID = 0x358; // CUtlStringToken
    public const nint m_nSimulationTick = 0x368; // int32
    public const nint m_iCurrentThinkContext = 0x36C; // int32
    public const nint m_aThinkFunctions = 0x370; // CUtlVector< thinkfunc_t >
    public const nint m_flAnimTime = 0x388; // float32
    public const nint m_flSimulationTime = 0x38C; // float32
    public const nint m_nSceneObjectOverrideFlags = 0x390; // uint8
    public const nint m_bHasSuccessfullyInterpolated = 0x391; // bool
    public const nint m_bHasAddedVarsToInterpolation = 0x392; // bool
    public const nint m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x393; // bool
    public const nint m_nInterpolationLatchDirtyFlags = 0x394; // int32[2]
    public const nint m_ListEntry = 0x39C; // uint16[11]
    public const nint m_flCreateTime = 0x3B4; // GameTime_t
    public const nint m_flSpeed = 0x3B8; // float32
    public const nint m_EntClientFlags = 0x3BC; // uint16
    public const nint m_bClientSideRagdoll = 0x3BE; // bool
    public const nint m_iTeamNum = 0x3BF; // uint8
    public const nint m_spawnflags = 0x3C0; // uint32
    public const nint m_nNextThinkTick = 0x3C4; // GameTick_t
    public const nint m_fFlags = 0x3C8; // uint32
    public const nint m_vecAbsVelocity = 0x3CC; // Vector
    public const nint m_vecVelocity = 0x3D8; // CNetworkVelocityVector
    public const nint m_vecBaseVelocity = 0x408; // Vector
    public const nint m_hEffectEntity = 0x414; // CHandle< C_BaseEntity >
    public const nint m_hOwnerEntity = 0x418; // CHandle< C_BaseEntity >
    public const nint m_MoveCollide = 0x41C; // MoveCollide_t
    public const nint m_MoveType = 0x41D; // MoveType_t
    public const nint m_flWaterLevel = 0x420; // float32
    public const nint m_fEffects = 0x424; // uint32
    public const nint m_hGroundEntity = 0x428; // CHandle< C_BaseEntity >
    public const nint m_flFriction = 0x42C; // float32
    public const nint m_flElasticity = 0x430; // float32
    public const nint m_flGravityScale = 0x434; // float32
    public const nint m_flTimeScale = 0x438; // float32
    public const nint m_bSimulatedEveryTick = 0x43C; // bool
    public const nint m_bAnimatedEveryTick = 0x43D; // bool
    public const nint m_flNavIgnoreUntilTime = 0x440; // GameTime_t
    public const nint m_hThink = 0x444; // uint16
    public const nint m_fBBoxVisFlags = 0x450; // uint8
    public const nint m_bPredictable = 0x451; // bool
    public const nint m_bRenderWithViewModels = 0x452; // bool
    public const nint m_nSplitUserPlayerPredictionSlot = 0x454; // CSplitScreenSlot
    public const nint m_nFirstPredictableCommand = 0x458; // int32
    public const nint m_nLastPredictableCommand = 0x45C; // int32
    public const nint m_hOldMoveParent = 0x460; // CHandle< C_BaseEntity >
    public const nint m_Particles = 0x468; // CParticleProperty
    public const nint m_vecPredictedScriptFloats = 0x490; // CUtlVector< float32 >
    public const nint m_vecPredictedScriptFloatIDs = 0x4A8; // CUtlVector< int32 >
    public const nint m_nNextScriptVarRecordID = 0x4D8; // int32
    public const nint m_vecAngVelocity = 0x4E8; // QAngle
    public const nint m_DataChangeEventRef = 0x4F4; // int32
    public const nint m_dependencies = 0x4F8; // CUtlVector< CEntityHandle >
    public const nint m_nCreationTick = 0x510; // int32
    public const nint m_bAnimTimeChanged = 0x529; // bool
    public const nint m_bSimulationTimeChanged = 0x52A; // bool
    public const nint m_sUniqueHammerID = 0x538; // CUtlString
}

public static class C_BaseFire {
    public const nint m_flScale = 0x540; // float32
    public const nint m_flStartScale = 0x544; // float32
    public const nint m_flScaleTime = 0x548; // float32
    public const nint m_nFlags = 0x54C; // uint32
}

public static class C_BaseFlex {
    public const nint m_flexWeight = 0xE90; // C_NetworkUtlVectorBase< float32 >
    public const nint m_vLookTargetPosition = 0xEA8; // Vector
    public const nint m_blinktoggle = 0xEC0; // bool
    public const nint m_nLastFlexUpdateFrameCount = 0xF20; // int32
    public const nint m_CachedViewTarget = 0xF24; // Vector
    public const nint m_nNextSceneEventId = 0xF30; // uint32
    public const nint m_iBlink = 0xF34; // int32
    public const nint m_blinktime = 0xF38; // float32
    public const nint m_prevblinktoggle = 0xF3C; // bool
    public const nint m_iJawOpen = 0xF40; // int32
    public const nint m_flJawOpenAmount = 0xF44; // float32
    public const nint m_flBlinkAmount = 0xF48; // float32
    public const nint m_iMouthAttachment = 0xF4C; // AttachmentHandle_t
    public const nint m_iEyeAttachment = 0xF4D; // AttachmentHandle_t
    public const nint m_bResetFlexWeightsOnModelChange = 0xF4E; // bool
    public const nint m_nEyeOcclusionRendererBone = 0xF68; // int32
    public const nint m_mEyeOcclusionRendererCameraToBoneTransform = 0xF6C; // matrix3x4_t
    public const nint m_vEyeOcclusionRendererHalfExtent = 0xF9C; // Vector
    public const nint m_PhonemeClasses = 0xFB8; // C_BaseFlex::Emphasized_Phoneme[3]
}

public static class C_BaseFlex_Emphasized_Phoneme {
    public const nint m_sClassName = 0x0; // CUtlString
    public const nint m_flAmount = 0x18; // float32
    public const nint m_bRequired = 0x1C; // bool
    public const nint m_bBasechecked = 0x1D; // bool
    public const nint m_bValid = 0x1E; // bool
}

public static class C_BaseGrenade {
    public const nint m_bHasWarnedAI = 0x1018; // bool
    public const nint m_bIsSmokeGrenade = 0x1019; // bool
    public const nint m_bIsLive = 0x101A; // bool
    public const nint m_DmgRadius = 0x101C; // float32
    public const nint m_flDetonateTime = 0x1020; // GameTime_t
    public const nint m_flWarnAITime = 0x1024; // float32
    public const nint m_flDamage = 0x1028; // float32
    public const nint m_iszBounceSound = 0x1030; // CUtlSymbolLarge
    public const nint m_ExplosionSound = 0x1038; // CUtlString
    public const nint m_hThrower = 0x1044; // CHandle< C_CSPlayerPawn >
    public const nint m_flNextAttack = 0x105C; // GameTime_t
    public const nint m_hOriginalThrower = 0x1060; // CHandle< C_CSPlayerPawn >
}

public static class C_BaseModelEntity {
    public const nint m_CRenderComponent = 0xA10; // CRenderComponent*
    public const nint m_CHitboxComponent = 0xA18; // CHitboxComponent
    public const nint m_bInitModelEffects = 0xA60; // bool
    public const nint m_bIsStaticProp = 0xA61; // bool
    public const nint m_nLastAddDecal = 0xA64; // int32
    public const nint m_nDecalsAdded = 0xA68; // int32
    public const nint m_iOldHealth = 0xA6C; // int32
    public const nint m_nRenderMode = 0xA70; // RenderMode_t
    public const nint m_nRenderFX = 0xA71; // RenderFx_t
    public const nint m_bAllowFadeInView = 0xA72; // bool
    public const nint m_clrRender = 0xA73; // Color
    public const nint m_vecRenderAttributes = 0xA78; // C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t >
    public const nint m_LightGroup = 0xAE0; // CUtlStringToken
    public const nint m_bRenderToCubemaps = 0xAE4; // bool
    public const nint m_Collision = 0xAE8; // CCollisionProperty
    public const nint m_Glow = 0xB98; // CGlowProperty
    public const nint m_flGlowBackfaceMult = 0xBF0; // float32
    public const nint m_fadeMinDist = 0xBF4; // float32
    public const nint m_fadeMaxDist = 0xBF8; // float32
    public const nint m_flFadeScale = 0xBFC; // float32
    public const nint m_flShadowStrength = 0xC00; // float32
    public const nint m_nObjectCulling = 0xC04; // uint8
    public const nint m_nAddDecal = 0xC08; // int32
    public const nint m_vDecalPosition = 0xC0C; // Vector
    public const nint m_vDecalForwardAxis = 0xC18; // Vector
    public const nint m_flDecalHealBloodRate = 0xC24; // float32
    public const nint m_flDecalHealHeightRate = 0xC28; // float32
    public const nint m_ConfigEntitiesToPropagateMaterialDecalsTo = 0xC30; // C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > >
    public const nint m_vecViewOffset = 0xC48; // CNetworkViewOffsetVector
    public const nint m_pClientAlphaProperty = 0xC78; // CClientAlphaProperty*
    public const nint m_ClientOverrideTint = 0xC80; // Color
    public const nint m_bUseClientOverrideTint = 0xC84; // bool
}

public static class C_BasePlayerPawn {
    public const nint m_pWeaponServices = 0x10A8; // CPlayer_WeaponServices*
    public const nint m_pItemServices = 0x10B0; // CPlayer_ItemServices*
    public const nint m_pAutoaimServices = 0x10B8; // CPlayer_AutoaimServices*
    public const nint m_pObserverServices = 0x10C0; // CPlayer_ObserverServices*
    public const nint m_pWaterServices = 0x10C8; // CPlayer_WaterServices*
    public const nint m_pUseServices = 0x10D0; // CPlayer_UseServices*
    public const nint m_pFlashlightServices = 0x10D8; // CPlayer_FlashlightServices*
    public const nint m_pCameraServices = 0x10E0; // CPlayer_CameraServices*
    public const nint m_pMovementServices = 0x10E8; // CPlayer_MovementServices*
    public const nint m_ServerViewAngleChanges = 0x10F8; // C_UtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t >
    public const nint m_nHighestConsumedServerViewAngleChangeIndex = 0x1148; // uint32
    public const nint v_angle = 0x114C; // QAngle
    public const nint v_anglePrevious = 0x1158; // QAngle
    public const nint m_iHideHUD = 0x1164; // uint32
    public const nint m_skybox3d = 0x1168; // sky3dparams_t
    public const nint m_flDeathTime = 0x11F8; // GameTime_t
    public const nint m_vecPredictionError = 0x11FC; // Vector
    public const nint m_flPredictionErrorTime = 0x1208; // GameTime_t
    public const nint m_flFOVSensitivityAdjust = 0x120C; // float32
    public const nint m_flMouseSensitivity = 0x1210; // float32
    public const nint m_vOldOrigin = 0x1214; // Vector
    public const nint m_flOldSimulationTime = 0x1220; // float32
    public const nint m_nLastExecutedCommandNumber = 0x1224; // int32
    public const nint m_nLastExecutedCommandTick = 0x1228; // int32
    public const nint m_hController = 0x122C; // CHandle< CBasePlayerController >
    public const nint m_bIsSwappingToPredictableController = 0x1230; // bool
}

public static class C_BasePlayerWeapon {
    public const nint m_nNextPrimaryAttackTick = 0x1560; // GameTick_t
    public const nint m_flNextPrimaryAttackTickRatio = 0x1564; // float32
    public const nint m_nNextSecondaryAttackTick = 0x1568; // GameTick_t
    public const nint m_flNextSecondaryAttackTickRatio = 0x156C; // float32
    public const nint m_iClip1 = 0x1570; // int32
    public const nint m_iClip2 = 0x1574; // int32
    public const nint m_pReserveAmmo = 0x1578; // int32[2]
}

public static class C_BasePropDoor {
    public const nint m_eDoorState = 0x10F8; // DoorState_t
    public const nint m_modelChanged = 0x10FC; // bool
    public const nint m_bLocked = 0x10FD; // bool
    public const nint m_closedPosition = 0x1100; // Vector
    public const nint m_closedAngles = 0x110C; // QAngle
    public const nint m_hMaster = 0x1118; // CHandle< C_BasePropDoor >
    public const nint m_vWhereToSetLightingOrigin = 0x111C; // Vector
}

public static class C_BaseTrigger {
    public const nint m_bDisabled = 0xCC0; // bool
    public const nint m_bClientSidePredicted = 0xCC1; // bool
}

public static class C_BaseViewModel {
    public const nint m_vecLastFacing = 0xE88; // Vector
    public const nint m_nViewModelIndex = 0xE94; // uint32
    public const nint m_nAnimationParity = 0xE98; // uint32
    public const nint m_flAnimationStartTime = 0xE9C; // float32
    public const nint m_hWeapon = 0xEA0; // CHandle< C_BasePlayerWeapon >
    public const nint m_sVMName = 0xEA8; // CUtlSymbolLarge
    public const nint m_sAnimationPrefix = 0xEB0; // CUtlSymbolLarge
    public const nint m_hWeaponModel = 0xEB8; // CHandle< C_ViewmodelWeapon >
    public const nint m_iCameraAttachment = 0xEBC; // AttachmentHandle_t
    public const nint m_vecLastCameraAngles = 0xEC0; // QAngle
    public const nint m_previousElapsedDuration = 0xECC; // float32
    public const nint m_previousCycle = 0xED0; // float32
    public const nint m_nOldAnimationParity = 0xED4; // int32
    public const nint m_hOldLayerSequence = 0xED8; // HSequence
    public const nint m_oldLayer = 0xEDC; // int32
    public const nint m_oldLayerStartTime = 0xEE0; // float32
    public const nint m_hControlPanel = 0xEE4; // CHandle< C_BaseEntity >
}

public static class C_Beam {
    public const nint m_flFrameRate = 0xCC0; // float32
    public const nint m_flHDRColorScale = 0xCC4; // float32
    public const nint m_flFireTime = 0xCC8; // GameTime_t
    public const nint m_flDamage = 0xCCC; // float32
    public const nint m_nNumBeamEnts = 0xCD0; // uint8
    public const nint m_queryHandleHalo = 0xCD4; // int32
    public const nint m_hBaseMaterial = 0xCF8; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    public const nint m_nHaloIndex = 0xD00; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    public const nint m_nBeamType = 0xD08; // BeamType_t
    public const nint m_nBeamFlags = 0xD0C; // uint32
    public const nint m_hAttachEntity = 0xD10; // CHandle< C_BaseEntity >[10]
    public const nint m_nAttachIndex = 0xD38; // AttachmentHandle_t[10]
    public const nint m_fWidth = 0xD44; // float32
    public const nint m_fEndWidth = 0xD48; // float32
    public const nint m_fFadeLength = 0xD4C; // float32
    public const nint m_fHaloScale = 0xD50; // float32
    public const nint m_fAmplitude = 0xD54; // float32
    public const nint m_fStartFrame = 0xD58; // float32
    public const nint m_fSpeed = 0xD5C; // float32
    public const nint m_flFrame = 0xD60; // float32
    public const nint m_nClipStyle = 0xD64; // BeamClipStyle_t
    public const nint m_bTurnedOff = 0xD68; // bool
    public const nint m_vecEndPos = 0xD6C; // Vector
    public const nint m_hEndEntity = 0xD78; // CHandle< C_BaseEntity >
}

public static class C_BreakableProp {
    public const nint m_OnBreak = 0xEC8; // CEntityIOOutput
    public const nint m_OnHealthChanged = 0xEF0; // CEntityOutputTemplate< float32 >
    public const nint m_OnTakeDamage = 0xF18; // CEntityIOOutput
    public const nint m_impactEnergyScale = 0xF40; // float32
    public const nint m_iMinHealthDmg = 0xF44; // int32
    public const nint m_flPressureDelay = 0xF48; // float32
    public const nint m_hBreaker = 0xF4C; // CHandle< C_BaseEntity >
    public const nint m_PerformanceMode = 0xF50; // PerformanceMode_t
    public const nint m_flDmgModBullet = 0xF54; // float32
    public const nint m_flDmgModClub = 0xF58; // float32
    public const nint m_flDmgModExplosive = 0xF5C; // float32
    public const nint m_flDmgModFire = 0xF60; // float32
    public const nint m_iszPhysicsDamageTableName = 0xF68; // CUtlSymbolLarge
    public const nint m_iszBasePropData = 0xF70; // CUtlSymbolLarge
    public const nint m_iInteractions = 0xF78; // int32
    public const nint m_flPreventDamageBeforeTime = 0xF7C; // GameTime_t
    public const nint m_bHasBreakPiecesOrCommands = 0xF80; // bool
    public const nint m_explodeDamage = 0xF84; // float32
    public const nint m_explodeRadius = 0xF88; // float32
    public const nint m_explosionDelay = 0xF90; // float32
    public const nint m_explosionBuildupSound = 0xF98; // CUtlSymbolLarge
    public const nint m_explosionCustomEffect = 0xFA0; // CUtlSymbolLarge
    public const nint m_explosionCustomSound = 0xFA8; // CUtlSymbolLarge
    public const nint m_explosionModifier = 0xFB0; // CUtlSymbolLarge
    public const nint m_hPhysicsAttacker = 0xFB8; // CHandle< C_BasePlayerPawn >
    public const nint m_flLastPhysicsInfluenceTime = 0xFBC; // GameTime_t
    public const nint m_flDefaultFadeScale = 0xFC0; // float32
    public const nint m_hLastAttacker = 0xFC4; // CHandle< C_BaseEntity >
    public const nint m_hFlareEnt = 0xFC8; // CHandle< C_BaseEntity >
    public const nint m_noGhostCollision = 0xFCC; // bool
}

public static class C_BulletHitModel {
    public const nint m_matLocal = 0xE80; // matrix3x4_t
    public const nint m_iBoneIndex = 0xEB0; // int32
    public const nint m_hPlayerParent = 0xEB4; // CHandle< C_BaseEntity >
    public const nint m_bIsHit = 0xEB8; // bool
    public const nint m_flTimeCreated = 0xEBC; // float32
    public const nint m_vecStartPos = 0xEC0; // Vector
}

public static class C_C4 {
    public const nint m_szScreenText = 0x18E0; // char[32]
    public const nint m_bombdroppedlightParticleIndex = 0x1900; // ParticleIndex_t
    public const nint m_bStartedArming = 0x1904; // bool
    public const nint m_fArmedTime = 0x1908; // GameTime_t
    public const nint m_bBombPlacedAnimation = 0x190C; // bool
    public const nint m_bIsPlantingViaUse = 0x190D; // bool
    public const nint m_entitySpottedState = 0x1910; // EntitySpottedState_t
    public const nint m_nSpotRules = 0x1928; // int32
    public const nint m_bPlayedArmingBeeps = 0x192C; // bool[7]
    public const nint m_bBombPlanted = 0x1933; // bool
    public const nint m_bDroppedFromDeath = 0x1934; // bool
}

public static class C_CSGOViewModel {
    public const nint m_bShouldIgnoreOffsetAndAccuracy = 0xF10; // bool
    public const nint m_nWeaponParity = 0xF14; // uint32
    public const nint m_nOldWeaponParity = 0xF18; // uint32
    public const nint m_nLastKnownAssociatedWeaponEntIndex = 0xF1C; // CEntityIndex
    public const nint m_bNeedToQueueHighResComposite = 0xF20; // bool
    public const nint m_vLoweredWeaponOffset = 0xF64; // QAngle
}

public static class C_CSGO_MapPreviewCameraPath {
    public const nint m_flZFar = 0x540; // float32
    public const nint m_flZNear = 0x544; // float32
    public const nint m_bLoop = 0x548; // bool
    public const nint m_bVerticalFOV = 0x549; // bool
    public const nint m_bConstantSpeed = 0x54A; // bool
    public const nint m_flDuration = 0x54C; // float32
    public const nint m_flPathLength = 0x590; // float32
    public const nint m_flPathDuration = 0x594; // float32
}

public static class C_CSGO_MapPreviewCameraPathNode {
    public const nint m_szParentPathUniqueID = 0x540; // CUtlSymbolLarge
    public const nint m_nPathIndex = 0x548; // int32
    public const nint m_vInTangentLocal = 0x54C; // Vector
    public const nint m_vOutTangentLocal = 0x558; // Vector
    public const nint m_flFOV = 0x564; // float32
    public const nint m_flSpeed = 0x568; // float32
    public const nint m_flEaseIn = 0x56C; // float32
    public const nint m_flEaseOut = 0x570; // float32
    public const nint m_vInTangentWorld = 0x574; // Vector
    public const nint m_vOutTangentWorld = 0x580; // Vector
}

public static class C_CSGO_PreviewModel {
    public const nint m_animgraph = 0x1018; // CUtlString
    public const nint m_animgraphCharacterModeString = 0x1020; // CUtlString
    public const nint m_defaultAnim = 0x1028; // CUtlString
    public const nint m_nDefaultAnimLoopMode = 0x1030; // AnimLoopMode_t
    public const nint m_flInitialModelScale = 0x1034; // float32
}

public static class C_CSGO_PreviewPlayer {
    public const nint m_animgraph = 0x22A0; // CUtlString
    public const nint m_animgraphCharacterModeString = 0x22A8; // CUtlString
    public const nint m_flInitialModelScale = 0x22B0; // float32
}

public static class C_CSGO_TeamPreviewCamera {
    public const nint m_nVariant = 0x5A0; // int32
    public const nint m_bDofEnabled = 0x5A4; // bool
    public const nint m_flDofNearBlurry = 0x5A8; // float32
    public const nint m_flDofNearCrisp = 0x5AC; // float32
    public const nint m_flDofFarCrisp = 0x5B0; // float32
    public const nint m_flDofFarBlurry = 0x5B4; // float32
    public const nint m_flDofTiltToGround = 0x5B8; // float32
}

public static class C_CSGO_TeamPreviewCharacterPosition {
    public const nint m_nVariant = 0x540; // int32
    public const nint m_nRandom = 0x544; // int32
    public const nint m_nOrdinal = 0x548; // int32
    public const nint m_sWeaponName = 0x550; // CUtlString
    public const nint m_xuid = 0x558; // uint64
    public const nint m_weaponItem = 0x560; // C_EconItemView
}

public static class C_CSGameRules {
    public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
    public const nint m_bFreezePeriod = 0x30; // bool
    public const nint m_bWarmupPeriod = 0x31; // bool
    public const nint m_fWarmupPeriodEnd = 0x34; // GameTime_t
    public const nint m_fWarmupPeriodStart = 0x38; // GameTime_t
    public const nint m_nTotalPausedTicks = 0x3C; // int32
    public const nint m_nPauseStartTick = 0x40; // int32
    public const nint m_bServerPaused = 0x44; // bool
    public const nint m_bGamePaused = 0x45; // bool
    public const nint m_bTerroristTimeOutActive = 0x46; // bool
    public const nint m_bCTTimeOutActive = 0x47; // bool
    public const nint m_flTerroristTimeOutRemaining = 0x48; // float32
    public const nint m_flCTTimeOutRemaining = 0x4C; // float32
    public const nint m_nTerroristTimeOuts = 0x50; // int32
    public const nint m_nCTTimeOuts = 0x54; // int32
    public const nint m_bTechnicalTimeOut = 0x58; // bool
    public const nint m_bMatchWaitingForResume = 0x59; // bool
    public const nint m_iRoundTime = 0x5C; // int32
    public const nint m_fMatchStartTime = 0x60; // float32
    public const nint m_fRoundStartTime = 0x64; // GameTime_t
    public const nint m_flRestartRoundTime = 0x68; // GameTime_t
    public const nint m_bGameRestart = 0x6C; // bool
    public const nint m_flGameStartTime = 0x70; // float32
    public const nint m_timeUntilNextPhaseStarts = 0x74; // float32
    public const nint m_gamePhase = 0x78; // int32
    public const nint m_totalRoundsPlayed = 0x7C; // int32
    public const nint m_nRoundsPlayedThisPhase = 0x80; // int32
    public const nint m_nOvertimePlaying = 0x84; // int32
    public const nint m_iHostagesRemaining = 0x88; // int32
    public const nint m_bAnyHostageReached = 0x8C; // bool
    public const nint m_bMapHasBombTarget = 0x8D; // bool
    public const nint m_bMapHasRescueZone = 0x8E; // bool
    public const nint m_bMapHasBuyZone = 0x8F; // bool
    public const nint m_bIsQueuedMatchmaking = 0x90; // bool
    public const nint m_nQueuedMatchmakingMode = 0x94; // int32
    public const nint m_bIsValveDS = 0x98; // bool
    public const nint m_bLogoMap = 0x99; // bool
    public const nint m_bPlayAllStepSoundsOnServer = 0x9A; // bool
    public const nint m_iSpectatorSlotCount = 0x9C; // int32
    public const nint m_MatchDevice = 0xA0; // int32
    public const nint m_bHasMatchStarted = 0xA4; // bool
    public const nint m_nNextMapInMapgroup = 0xA8; // int32
    public const nint m_szTournamentEventName = 0xAC; // char[512]
    public const nint m_szTournamentEventStage = 0x2AC; // char[512]
    public const nint m_szMatchStatTxt = 0x4AC; // char[512]
    public const nint m_szTournamentPredictionsTxt = 0x6AC; // char[512]
    public const nint m_nTournamentPredictionsPct = 0x8AC; // int32
    public const nint m_flCMMItemDropRevealStartTime = 0x8B0; // GameTime_t
    public const nint m_flCMMItemDropRevealEndTime = 0x8B4; // GameTime_t
    public const nint m_bIsDroppingItems = 0x8B8; // bool
    public const nint m_bIsQuestEligible = 0x8B9; // bool
    public const nint m_nGuardianModeWaveNumber = 0x8BC; // int32
    public const nint m_nGuardianModeSpecialKillsRemaining = 0x8C0; // int32
    public const nint m_nGuardianModeSpecialWeaponNeeded = 0x8C4; // int32
    public const nint m_nGuardianGrenadesToGiveBots = 0x8C8; // int32
    public const nint m_nNumHeaviesToSpawn = 0x8CC; // int32
    public const nint m_numGlobalGiftsGiven = 0x8D0; // uint32
    public const nint m_numGlobalGifters = 0x8D4; // uint32
    public const nint m_numGlobalGiftsPeriodSeconds = 0x8D8; // uint32
    public const nint m_arrFeaturedGiftersAccounts = 0x8DC; // uint32[4]
    public const nint m_arrFeaturedGiftersGifts = 0x8EC; // uint32[4]
    public const nint m_arrProhibitedItemIndices = 0x8FC; // uint16[100]
    public const nint m_arrTournamentActiveCasterAccounts = 0x9C4; // uint32[4]
    public const nint m_numBestOfMaps = 0x9D4; // int32
    public const nint m_nHalloweenMaskListSeed = 0x9D8; // int32
    public const nint m_bBombDropped = 0x9DC; // bool
    public const nint m_bBombPlanted = 0x9DD; // bool
    public const nint m_iRoundWinStatus = 0x9E0; // int32
    public const nint m_eRoundWinReason = 0x9E4; // int32
    public const nint m_bTCantBuy = 0x9E8; // bool
    public const nint m_bCTCantBuy = 0x9E9; // bool
    public const nint m_flGuardianBuyUntilTime = 0x9EC; // GameTime_t
    public const nint m_iMatchStats_RoundResults = 0x9F0; // int32[30]
    public const nint m_iMatchStats_PlayersAlive_CT = 0xA68; // int32[30]
    public const nint m_iMatchStats_PlayersAlive_T = 0xAE0; // int32[30]
    public const nint m_TeamRespawnWaveTimes = 0xB58; // float32[32]
    public const nint m_flNextRespawnWave = 0xBD8; // GameTime_t[32]
    public const nint m_nServerQuestID = 0xC58; // int32
    public const nint m_vMinimapMins = 0xC5C; // Vector
    public const nint m_vMinimapMaxs = 0xC68; // Vector
    public const nint m_MinimapVerticalSectionHeights = 0xC74; // float32[8]
    public const nint m_bDontIncrementCoopWave = 0xC94; // bool
    public const nint m_bSpawnedTerrorHuntHeavy = 0xC95; // bool
    public const nint m_nEndMatchMapGroupVoteTypes = 0xC98; // int32[10]
    public const nint m_nEndMatchMapGroupVoteOptions = 0xCC0; // int32[10]
    public const nint m_nEndMatchMapVoteWinner = 0xCE8; // int32
    public const nint m_iNumConsecutiveCTLoses = 0xCEC; // int32
    public const nint m_iNumConsecutiveTerroristLoses = 0xCF0; // int32
    public const nint m_bMarkClientStopRecordAtRoundEnd = 0xD10; // bool
    public const nint m_bMatchAbortedDueToPlayerBan = 0xD68; // bool
    public const nint m_bHasTriggeredRoundStartMusic = 0xD69; // bool
    public const nint m_bHasTriggeredCoopSpawnReset = 0xD6A; // bool
    public const nint m_bSwitchingTeamsAtRoundReset = 0xD6B; // bool
    public const nint m_pGameModeRules = 0xD88; // CCSGameModeRules*
    public const nint m_RetakeRules = 0xD90; // C_RetakeGameRules
    public const nint m_nMatchEndCount = 0xEA8; // uint8
    public const nint m_nTTeamIntroVariant = 0xEAC; // int32
    public const nint m_nCTTeamIntroVariant = 0xEB0; // int32
    public const nint m_bTeamIntroPeriod = 0xEB4; // bool
    public const nint m_flLastPerfSampleTime = 0x1E70; // float64
    public const nint m_bSkipNextPerfSample = 0x1E78; // bool
}

public static class C_CSGameRulesProxy {
    public const nint m_pGameRules = 0x540; // C_CSGameRules*
}

public static class C_CSObserverPawn {
    public const nint m_hDetectParentChange = 0x16A0; // CEntityHandle
}

public static class C_CSPlayerPawn {
    public const nint m_pBulletServices = 0x16A0; // CCSPlayer_BulletServices*
    public const nint m_pHostageServices = 0x16A8; // CCSPlayer_HostageServices*
    public const nint m_pBuyServices = 0x16B0; // CCSPlayer_BuyServices*
    public const nint m_pGlowServices = 0x16B8; // CCSPlayer_GlowServices*
    public const nint m_pActionTrackingServices = 0x16C0; // CCSPlayer_ActionTrackingServices*
    public const nint m_flHealthShotBoostExpirationTime = 0x16C8; // GameTime_t
    public const nint m_flLastFiredWeaponTime = 0x16CC; // GameTime_t
    public const nint m_bHasFemaleVoice = 0x16D0; // bool
    public const nint m_flLandseconds = 0x16D4; // float32
    public const nint m_flOldFallVelocity = 0x16D8; // float32
    public const nint m_szLastPlaceName = 0x16DC; // char[18]
    public const nint m_bPrevDefuser = 0x16EE; // bool
    public const nint m_bPrevHelmet = 0x16EF; // bool
    public const nint m_nPrevArmorVal = 0x16F0; // int32
    public const nint m_nPrevGrenadeAmmoCount = 0x16F4; // int32
    public const nint m_unPreviousWeaponHash = 0x16F8; // uint32
    public const nint m_unWeaponHash = 0x16FC; // uint32
    public const nint m_bInBuyZone = 0x1700; // bool
    public const nint m_bPreviouslyInBuyZone = 0x1701; // bool
    public const nint m_aimPunchAngle = 0x1704; // QAngle
    public const nint m_aimPunchAngleVel = 0x1710; // QAngle
    public const nint m_aimPunchTickBase = 0x171C; // int32
    public const nint m_aimPunchTickFraction = 0x1720; // float32
    public const nint m_aimPunchCache = 0x1728; // CUtlVector< QAngle >
    public const nint m_bInLanding = 0x1748; // bool
    public const nint m_flLandingTime = 0x174C; // float32
    public const nint m_bInHostageRescueZone = 0x1750; // bool
    public const nint m_bInBombZone = 0x1751; // bool
    public const nint m_bIsBuyMenuOpen = 0x1752; // bool
    public const nint m_flTimeOfLastInjury = 0x1754; // GameTime_t
    public const nint m_flNextSprayDecalTime = 0x1758; // GameTime_t
    public const nint m_iRetakesOffering = 0x1870; // int32
    public const nint m_iRetakesOfferingCard = 0x1874; // int32
    public const nint m_bRetakesHasDefuseKit = 0x1878; // bool
    public const nint m_bRetakesMVPLastRound = 0x1879; // bool
    public const nint m_iRetakesMVPBoostItem = 0x187C; // int32
    public const nint m_RetakesMVPBoostExtraUtility = 0x1880; // loadout_slot_t
    public const nint m_bNeedToReApplyGloves = 0x18A0; // bool
    public const nint m_EconGloves = 0x18A8; // C_EconItemView
    public const nint m_bMustSyncRagdollState = 0x1CF0; // bool
    public const nint m_nRagdollDamageBone = 0x1CF4; // int32
    public const nint m_vRagdollDamageForce = 0x1CF8; // Vector
    public const nint m_vRagdollDamagePosition = 0x1D04; // Vector
    public const nint m_szRagdollDamageWeaponName = 0x1D10; // char[64]
    public const nint m_bRagdollDamageHeadshot = 0x1D50; // bool
    public const nint m_bLastHeadBoneTransformIsValid = 0x2270; // bool
    public const nint m_lastLandTime = 0x2274; // GameTime_t
    public const nint m_qDeathEyeAngles = 0x2290; // QAngle
    public const nint m_bSkipOneHeadConstraintUpdate = 0x229C; // bool
}

public static class C_CSPlayerPawnBase {
    public const nint m_pPingServices = 0x1250; // CCSPlayer_PingServices*
    public const nint m_pViewModelServices = 0x1258; // CPlayer_ViewModelServices*
    public const nint m_fRenderingClipPlane = 0x1260; // float32[4]
    public const nint m_nLastClipPlaneSetupFrame = 0x1270; // int32
    public const nint m_vecLastClipCameraPos = 0x1274; // Vector
    public const nint m_vecLastClipCameraForward = 0x1280; // Vector
    public const nint m_bClipHitStaticWorld = 0x128C; // bool
    public const nint m_bCachedPlaneIsValid = 0x128D; // bool
    public const nint m_pClippingWeapon = 0x1290; // C_CSWeaponBase*
    public const nint m_previousPlayerState = 0x1298; // CSPlayerState
    public const nint m_flLastCollisionCeiling = 0x129C; // float32
    public const nint m_flLastCollisionCeilingChangeTime = 0x12A0; // float32
    public const nint m_grenadeParameterStashTime = 0x12C0; // GameTime_t
    public const nint m_bGrenadeParametersStashed = 0x12C4; // bool
    public const nint m_angStashedShootAngles = 0x12C8; // QAngle
    public const nint m_vecStashedGrenadeThrowPosition = 0x12D4; // Vector
    public const nint m_vecStashedVelocity = 0x12E0; // Vector
    public const nint m_angShootAngleHistory = 0x12EC; // QAngle[2]
    public const nint m_vecThrowPositionHistory = 0x1304; // Vector[2]
    public const nint m_vecVelocityHistory = 0x131C; // Vector[2]
    public const nint m_thirdPersonHeading = 0x1338; // QAngle
    public const nint m_flSlopeDropOffset = 0x1350; // float32
    public const nint m_flSlopeDropHeight = 0x1360; // float32
    public const nint m_vHeadConstraintOffset = 0x1370; // Vector
    public const nint m_bIsScoped = 0x1388; // bool
    public const nint m_bIsWalking = 0x1389; // bool
    public const nint m_bResumeZoom = 0x138A; // bool
    public const nint m_iPlayerState = 0x138C; // CSPlayerState
    public const nint m_bIsDefusing = 0x1390; // bool
    public const nint m_bIsGrabbingHostage = 0x1391; // bool
    public const nint m_iBlockingUseActionInProgress = 0x1394; // CSPlayerBlockingUseAction_t
    public const nint m_bIsRescuing = 0x1398; // bool
    public const nint m_fImmuneToGunGameDamageTime = 0x139C; // GameTime_t
    public const nint m_fImmuneToGunGameDamageTimeLast = 0x13A0; // GameTime_t
    public const nint m_bGunGameImmunity = 0x13A4; // bool
    public const nint m_bHasMovedSinceSpawn = 0x13A5; // bool
    public const nint m_unTotalRoundDamageDealt = 0x13A8; // uint32
    public const nint m_fMolotovUseTime = 0x13AC; // float32
    public const nint m_fMolotovDamageTime = 0x13B0; // float32
    public const nint m_nWhichBombZone = 0x13B4; // int32
    public const nint m_bInNoDefuseArea = 0x13B8; // bool
    public const nint m_iThrowGrenadeCounter = 0x13BC; // int32
    public const nint m_bWaitForNoAttack = 0x13C0; // bool
    public const nint m_flGuardianTooFarDistFrac = 0x13C4; // float32
    public const nint m_flDetectedByEnemySensorTime = 0x13C8; // GameTime_t
    public const nint m_flNextGuardianTooFarWarning = 0x13CC; // float32
    public const nint m_bSuppressGuardianTooFarWarningAudio = 0x13D0; // bool
    public const nint m_bKilledByTaser = 0x13D1; // bool
    public const nint m_iMoveState = 0x13D4; // int32
    public const nint m_bCanMoveDuringFreezePeriod = 0x13D8; // bool
    public const nint m_flLowerBodyYawTarget = 0x13DC; // float32
    public const nint m_bStrafing = 0x13E0; // bool
    public const nint m_flLastSpawnTimeIndex = 0x13E4; // GameTime_t
    public const nint m_flEmitSoundTime = 0x13E8; // GameTime_t
    public const nint m_iAddonBits = 0x13EC; // int32
    public const nint m_iPrimaryAddon = 0x13F0; // int32
    public const nint m_iSecondaryAddon = 0x13F4; // int32
    public const nint m_iProgressBarDuration = 0x13F8; // int32
    public const nint m_flProgressBarStartTime = 0x13FC; // float32
    public const nint m_iDirection = 0x1400; // int32
    public const nint m_iShotsFired = 0x1404; // int32
    public const nint m_bNightVisionOn = 0x1408; // bool
    public const nint m_bHasNightVision = 0x1409; // bool
    public const nint m_flVelocityModifier = 0x140C; // float32
    public const nint m_flHitHeading = 0x1410; // float32
    public const nint m_nHitBodyPart = 0x1414; // int32
    public const nint m_iStartAccount = 0x1418; // int32
    public const nint m_vecIntroStartEyePosition = 0x141C; // Vector
    public const nint m_vecIntroStartPlayerForward = 0x1428; // Vector
    public const nint m_flClientDeathTime = 0x1434; // GameTime_t
    public const nint m_flNightVisionAlpha = 0x1438; // float32
    public const nint m_bScreenTearFrameCaptured = 0x143C; // bool
    public const nint m_flFlashBangTime = 0x1440; // float32
    public const nint m_flFlashScreenshotAlpha = 0x1444; // float32
    public const nint m_flFlashOverlayAlpha = 0x1448; // float32
    public const nint m_bFlashBuildUp = 0x144C; // bool
    public const nint m_bFlashDspHasBeenCleared = 0x144D; // bool
    public const nint m_bFlashScreenshotHasBeenGrabbed = 0x144E; // bool
    public const nint m_flFlashMaxAlpha = 0x1450; // float32
    public const nint m_flFlashDuration = 0x1454; // float32
    public const nint m_lastStandingPos = 0x1458; // Vector
    public const nint m_vecLastMuzzleFlashPos = 0x1464; // Vector
    public const nint m_angLastMuzzleFlashAngle = 0x1470; // QAngle
    public const nint m_hMuzzleFlashShape = 0x147C; // CHandle< C_BaseEntity >
    public const nint m_iHealthBarRenderMaskIndex = 0x1480; // int32
    public const nint m_flHealthFadeValue = 0x1484; // float32
    public const nint m_flHealthFadeAlpha = 0x1488; // float32
    public const nint m_nMyCollisionGroup = 0x148C; // int32
    public const nint m_ignoreLadderJumpTime = 0x1490; // float32
    public const nint m_ladderSurpressionTimer = 0x1498; // CountdownTimer
    public const nint m_lastLadderNormal = 0x14B0; // Vector
    public const nint m_lastLadderPos = 0x14BC; // Vector
    public const nint m_flDeathCCWeight = 0x14D0; // float32
    public const nint m_bOldIsScoped = 0x14D4; // bool
    public const nint m_flPrevRoundEndTime = 0x14D8; // float32
    public const nint m_flPrevMatchEndTime = 0x14DC; // float32
    public const nint m_unCurrentEquipmentValue = 0x14E0; // uint16
    public const nint m_unRoundStartEquipmentValue = 0x14E2; // uint16
    public const nint m_unFreezetimeEndEquipmentValue = 0x14E4; // uint16
    public const nint m_vecThirdPersonViewPositionOverride = 0x14E8; // Vector
    public const nint m_nHeavyAssaultSuitCooldownRemaining = 0x14F4; // int32
    public const nint m_ArmorValue = 0x14F8; // int32
    public const nint m_angEyeAngles = 0x1500; // QAngle
    public const nint m_fNextThinkPushAway = 0x1518; // float32
    public const nint m_bShouldAutobuyDMWeapons = 0x151C; // bool
    public const nint m_bShouldAutobuyNow = 0x151D; // bool
    public const nint m_bHud_MiniScoreHidden = 0x151E; // bool
    public const nint m_bHud_RadarHidden = 0x151F; // bool
    public const nint m_nLastKillerIndex = 0x1520; // CEntityIndex
    public const nint m_nLastConcurrentKilled = 0x1524; // int32
    public const nint m_nDeathCamMusic = 0x1528; // int32
    public const nint m_iIDEntIndex = 0x152C; // CEntityIndex
    public const nint m_delayTargetIDTimer = 0x1530; // CountdownTimer
    public const nint m_iTargetedWeaponEntIndex = 0x1548; // CEntityIndex
    public const nint m_iOldIDEntIndex = 0x154C; // CEntityIndex
    public const nint m_holdTargetIDTimer = 0x1550; // CountdownTimer
    public const nint m_flCurrentMusicStartTime = 0x156C; // float32
    public const nint m_flMusicRoundStartTime = 0x1570; // float32
    public const nint m_bDeferStartMusicOnWarmup = 0x1574; // bool
    public const nint m_cycleLatch = 0x1578; // int32
    public const nint m_serverIntendedCycle = 0x157C; // float32
    public const nint m_vecPlayerPatchEconIndices = 0x1580; // uint32[5]
    public const nint m_bHideTargetID = 0x159C; // bool
    public const nint m_nextTaserShakeTime = 0x15A0; // float32
    public const nint m_firstTaserShakeTime = 0x15A4; // float32
    public const nint m_flLastSmokeOverlayAlpha = 0x15A8; // float32
    public const nint m_vLastSmokeOverlayColor = 0x15AC; // Vector
    public const nint m_nPlayerSmokedFx = 0x15B8; // ParticleIndex_t
    public const nint m_flNextMagDropTime = 0x15BC; // float32
    public const nint m_nLastMagDropAttachmentIndex = 0x15C0; // int32
    public const nint m_vecBulletHitModels = 0x15C8; // CUtlVector< C_BulletHitModel* >
    public const nint m_vecPickupModelSlerpers = 0x15E0; // CUtlVector< C_PickUpModelSlerper* >
    public const nint m_vecLastAliveLocalVelocity = 0x15F8; // Vector
    public const nint m_entitySpottedState = 0x1620; // EntitySpottedState_t
    public const nint m_nSurvivalTeamNumber = 0x1638; // int32
    public const nint m_bGuardianShouldSprayCustomXMark = 0x163C; // bool
    public const nint m_bHasDeathInfo = 0x163D; // bool
    public const nint m_flDeathInfoTime = 0x1640; // float32
    public const nint m_vecDeathInfoOrigin = 0x1644; // Vector
    public const nint m_bKilledByHeadshot = 0x1650; // bool
    public const nint m_hOriginalController = 0x1654; // CHandle< CCSPlayerController >
}

public static class C_CSPlayerResource {
    public const nint m_bHostageAlive = 0x540; // bool[12]
    public const nint m_isHostageFollowingSomeone = 0x54C; // bool[12]
    public const nint m_iHostageEntityIDs = 0x558; // CEntityIndex[12]
    public const nint m_bombsiteCenterA = 0x588; // Vector
    public const nint m_bombsiteCenterB = 0x594; // Vector
    public const nint m_hostageRescueX = 0x5A0; // int32[4]
    public const nint m_hostageRescueY = 0x5B0; // int32[4]
    public const nint m_hostageRescueZ = 0x5C0; // int32[4]
    public const nint m_bEndMatchNextMapAllVoted = 0x5D0; // bool
    public const nint m_foundGoalPositions = 0x5D1; // bool
}

public static class C_CSTeam {
    public const nint m_szTeamMatchStat = 0x5F8; // char[512]
    public const nint m_numMapVictories = 0x7F8; // int32
    public const nint m_bSurrendered = 0x7FC; // bool
    public const nint m_scoreFirstHalf = 0x800; // int32
    public const nint m_scoreSecondHalf = 0x804; // int32
    public const nint m_scoreOvertime = 0x808; // int32
    public const nint m_szClanTeamname = 0x80C; // char[129]
    public const nint m_iClanID = 0x890; // uint32
    public const nint m_szTeamFlagImage = 0x894; // char[8]
    public const nint m_szTeamLogoImage = 0x89C; // char[8]
}

public static class C_CSWeaponBase {
    public const nint m_flFireSequenceStartTime = 0x15D0; // float32
    public const nint m_nFireSequenceStartTimeChange = 0x15D4; // int32
    public const nint m_nFireSequenceStartTimeAck = 0x15D8; // int32
    public const nint m_bPlayerFireEventIsPrimary = 0x15DC; // bool
    public const nint m_seqIdle = 0x15E0; // HSequence
    public const nint m_seqFirePrimary = 0x15E4; // HSequence
    public const nint m_seqFireSecondary = 0x15E8; // HSequence
    public const nint m_iState = 0x1600; // CSWeaponState_t
    public const nint m_flCrosshairDistance = 0x1604; // float32
    public const nint m_iAmmoLastCheck = 0x1608; // int32
    public const nint m_iAlpha = 0x160C; // int32
    public const nint m_iScopeTextureID = 0x1610; // int32
    public const nint m_iCrosshairTextureID = 0x1614; // int32
    public const nint m_flGunAccuracyPosition = 0x1618; // float32
    public const nint m_nViewModelIndex = 0x161C; // uint32
    public const nint m_bReloadsWithClips = 0x1620; // bool
    public const nint m_flTimeWeaponIdle = 0x1624; // GameTime_t
    public const nint m_bFireOnEmpty = 0x1628; // bool
    public const nint m_OnPlayerPickup = 0x1630; // CEntityIOOutput
    public const nint m_weaponMode = 0x1658; // CSWeaponMode
    public const nint m_flTurningInaccuracyDelta = 0x165C; // float32
    public const nint m_vecTurningInaccuracyEyeDirLast = 0x1660; // Vector
    public const nint m_flTurningInaccuracy = 0x166C; // float32
    public const nint m_fAccuracyPenalty = 0x1670; // float32
    public const nint m_flLastAccuracyUpdateTime = 0x1674; // GameTime_t
    public const nint m_fAccuracySmoothedForZoom = 0x1678; // float32
    public const nint m_fScopeZoomEndTime = 0x167C; // GameTime_t
    public const nint m_iRecoilIndex = 0x1680; // int32
    public const nint m_flRecoilIndex = 0x1684; // float32
    public const nint m_bBurstMode = 0x1688; // bool
    public const nint m_flPostponeFireReadyTime = 0x168C; // GameTime_t
    public const nint m_bInReload = 0x1690; // bool
    public const nint m_bReloadVisuallyComplete = 0x1691; // bool
    public const nint m_flDroppedAtTime = 0x1694; // GameTime_t
    public const nint m_bIsHauledBack = 0x1698; // bool
    public const nint m_bSilencerOn = 0x1699; // bool
    public const nint m_flTimeSilencerSwitchComplete = 0x169C; // GameTime_t
    public const nint m_iOriginalTeamNumber = 0x16A0; // int32
    public const nint m_flNextAttackRenderTimeOffset = 0x16A4; // float32
    public const nint m_bVisualsDataSet = 0x1720; // bool
    public const nint m_bOldFirstPersonSpectatedState = 0x1721; // bool
    public const nint m_hOurPing = 0x1724; // CHandle< C_BaseEntity >
    public const nint m_nOurPingIndex = 0x1728; // CEntityIndex
    public const nint m_vecOurPingPos = 0x172C; // Vector
    public const nint m_bGlowForPing = 0x1738; // bool
    public const nint m_bUIWeapon = 0x1739; // bool
    public const nint m_hPrevOwner = 0x1748; // CHandle< C_CSPlayerPawn >
    public const nint m_nDropTick = 0x174C; // GameTick_t
    public const nint m_donated = 0x176C; // bool
    public const nint m_fLastShotTime = 0x1770; // GameTime_t
    public const nint m_bWasOwnedByCT = 0x1774; // bool
    public const nint m_bWasOwnedByTerrorist = 0x1775; // bool
    public const nint m_gunHeat = 0x1778; // float32
    public const nint m_smokeAttachments = 0x177C; // uint32
    public const nint m_lastSmokeTime = 0x1780; // GameTime_t
    public const nint m_flLastClientFireBulletTime = 0x1784; // float32
    public const nint m_IronSightController = 0x17E0; // C_IronSightController
    public const nint m_iIronSightMode = 0x1890; // int32
    public const nint m_flLastLOSTraceFailureTime = 0x18A0; // GameTime_t
    public const nint m_iNumEmptyAttacks = 0x18A4; // int32
}

public static class C_CSWeaponBaseGun {
    public const nint m_zoomLevel = 0x18E0; // int32
    public const nint m_iBurstShotsRemaining = 0x18E4; // int32
    public const nint m_iSilencerBodygroup = 0x18E8; // int32
    public const nint m_silencedModelIndex = 0x18F8; // int32
    public const nint m_inPrecache = 0x18FC; // bool
    public const nint m_bNeedsBoltAction = 0x18FD; // bool
}

public static class C_Chicken {
    public const nint m_hHolidayHatAddon = 0x10F0; // CHandle< CBaseAnimGraph >
    public const nint m_jumpedThisFrame = 0x10F4; // bool
    public const nint m_leader = 0x10F8; // CHandle< C_CSPlayerPawnBase >
    public const nint m_AttributeManager = 0x1100; // C_AttributeContainer
    public const nint m_OriginalOwnerXuidLow = 0x15A8; // uint32
    public const nint m_OriginalOwnerXuidHigh = 0x15AC; // uint32
    public const nint m_bAttributesInitialized = 0x15B0; // bool
    public const nint m_hWaterWakeParticles = 0x15B4; // ParticleIndex_t
}

public static class C_ClientRagdoll {
    public const nint m_bFadeOut = 0xE80; // bool
    public const nint m_bImportant = 0xE81; // bool
    public const nint m_flEffectTime = 0xE84; // GameTime_t
    public const nint m_gibDespawnTime = 0xE88; // GameTime_t
    public const nint m_iCurrentFriction = 0xE8C; // int32
    public const nint m_iMinFriction = 0xE90; // int32
    public const nint m_iMaxFriction = 0xE94; // int32
    public const nint m_iFrictionAnimState = 0xE98; // int32
    public const nint m_bReleaseRagdoll = 0xE9C; // bool
    public const nint m_iEyeAttachment = 0xE9D; // AttachmentHandle_t
    public const nint m_bFadingOut = 0xE9E; // bool
    public const nint m_flScaleEnd = 0xEA0; // float32[10]
    public const nint m_flScaleTimeStart = 0xEC8; // GameTime_t[10]
    public const nint m_flScaleTimeEnd = 0xEF0; // GameTime_t[10]
}

public static class C_ColorCorrection {
    public const nint m_vecOrigin = 0x540; // Vector
    public const nint m_MinFalloff = 0x54C; // float32
    public const nint m_MaxFalloff = 0x550; // float32
    public const nint m_flFadeInDuration = 0x554; // float32
    public const nint m_flFadeOutDuration = 0x558; // float32
    public const nint m_flMaxWeight = 0x55C; // float32
    public const nint m_flCurWeight = 0x560; // float32
    public const nint m_netlookupFilename = 0x564; // char[512]
    public const nint m_bEnabled = 0x764; // bool
    public const nint m_bMaster = 0x765; // bool
    public const nint m_bClientSide = 0x766; // bool
    public const nint m_bExclusive = 0x767; // bool
    public const nint m_bEnabledOnClient = 0x768; // bool[1]
    public const nint m_flCurWeightOnClient = 0x76C; // float32[1]
    public const nint m_bFadingIn = 0x770; // bool[1]
    public const nint m_flFadeStartWeight = 0x774; // float32[1]
    public const nint m_flFadeStartTime = 0x778; // float32[1]
    public const nint m_flFadeDuration = 0x77C; // float32[1]
}

public static class C_ColorCorrectionVolume {
    public const nint m_LastEnterWeight = 0xCC8; // float32
    public const nint m_LastEnterTime = 0xCCC; // float32
    public const nint m_LastExitWeight = 0xCD0; // float32
    public const nint m_LastExitTime = 0xCD4; // float32
    public const nint m_bEnabled = 0xCD8; // bool
    public const nint m_MaxWeight = 0xCDC; // float32
    public const nint m_FadeDuration = 0xCE0; // float32
    public const nint m_Weight = 0xCE4; // float32
    public const nint m_lookupFilename = 0xCE8; // char[512]
}

public static class C_CommandContext {
    public const nint needsprocessing = 0x0; // bool
    public const nint command_number = 0x78; // int32
}

public static class C_CsmFovOverride {
    public const nint m_cameraName = 0x540; // CUtlString
    public const nint m_flCsmFovOverrideValue = 0x548; // float32
}

public static class C_DecoyProjectile {
    public const nint m_flTimeParticleEffectSpawn = 0x1110; // GameTime_t
}

public static class C_DynamicLight {
    public const nint m_Flags = 0xCC0; // uint8
    public const nint m_LightStyle = 0xCC1; // uint8
    public const nint m_Radius = 0xCC4; // float32
    public const nint m_Exponent = 0xCC8; // int32
    public const nint m_InnerAngle = 0xCCC; // float32
    public const nint m_OuterAngle = 0xCD0; // float32
    public const nint m_SpotRadius = 0xCD4; // float32
}

public static class C_DynamicProp {
    public const nint m_bUseHitboxesForRenderBox = 0xFD0; // bool
    public const nint m_bUseAnimGraph = 0xFD1; // bool
    public const nint m_pOutputAnimBegun = 0xFD8; // CEntityIOOutput
    public const nint m_pOutputAnimOver = 0x1000; // CEntityIOOutput
    public const nint m_pOutputAnimLoopCycleOver = 0x1028; // CEntityIOOutput
    public const nint m_OnAnimReachedStart = 0x1050; // CEntityIOOutput
    public const nint m_OnAnimReachedEnd = 0x1078; // CEntityIOOutput
    public const nint m_iszDefaultAnim = 0x10A0; // CUtlSymbolLarge
    public const nint m_nDefaultAnimLoopMode = 0x10A8; // AnimLoopMode_t
    public const nint m_bAnimateOnServer = 0x10AC; // bool
    public const nint m_bRandomizeCycle = 0x10AD; // bool
    public const nint m_bStartDisabled = 0x10AE; // bool
    public const nint m_bScriptedMovement = 0x10AF; // bool
    public const nint m_bFiredStartEndOutput = 0x10B0; // bool
    public const nint m_bForceNpcExclude = 0x10B1; // bool
    public const nint m_bCreateNonSolid = 0x10B2; // bool
    public const nint m_bIsOverrideProp = 0x10B3; // bool
    public const nint m_iInitialGlowState = 0x10B4; // int32
    public const nint m_nGlowRange = 0x10B8; // int32
    public const nint m_nGlowRangeMin = 0x10BC; // int32
    public const nint m_glowColor = 0x10C0; // Color
    public const nint m_nGlowTeam = 0x10C4; // int32
    public const nint m_iCachedFrameCount = 0x10C8; // int32
    public const nint m_vecCachedRenderMins = 0x10CC; // Vector
    public const nint m_vecCachedRenderMaxs = 0x10D8; // Vector
}

public static class C_EconEntity {
    public const nint m_flFlexDelayTime = 0x1028; // float32
    public const nint m_flFlexDelayedWeight = 0x1030; // float32*
    public const nint m_bAttributesInitialized = 0x1038; // bool
    public const nint m_AttributeManager = 0x1040; // C_AttributeContainer
    public const nint m_OriginalOwnerXuidLow = 0x14E8; // uint32
    public const nint m_OriginalOwnerXuidHigh = 0x14EC; // uint32
    public const nint m_nFallbackPaintKit = 0x14F0; // int32
    public const nint m_nFallbackSeed = 0x14F4; // int32
    public const nint m_flFallbackWear = 0x14F8; // float32
    public const nint m_nFallbackStatTrak = 0x14FC; // int32
    public const nint m_bClientside = 0x1500; // bool
    public const nint m_bParticleSystemsCreated = 0x1501; // bool
    public const nint m_vecAttachedParticles = 0x1508; // CUtlVector< int32 >
    public const nint m_hViewmodelAttachment = 0x1520; // CHandle< CBaseAnimGraph >
    public const nint m_iOldTeam = 0x1524; // int32
    public const nint m_bAttachmentDirty = 0x1528; // bool
    public const nint m_nUnloadedModelIndex = 0x152C; // int32
    public const nint m_iNumOwnerValidationRetries = 0x1530; // int32
    public const nint m_hOldProvidee = 0x1540; // CHandle< C_BaseEntity >
    public const nint m_vecAttachedModels = 0x1548; // CUtlVector< C_EconEntity::AttachedModelData_t >
}

public static class C_EconEntity_AttachedModelData_t {
    public const nint m_iModelDisplayFlags = 0x0; // int32
}

public static class C_EconItemView {
    public const nint m_bInventoryImageRgbaRequested = 0x60; // bool
    public const nint m_bInventoryImageTriedCache = 0x61; // bool
    public const nint m_nInventoryImageRgbaWidth = 0x80; // int32
    public const nint m_nInventoryImageRgbaHeight = 0x84; // int32
    public const nint m_szCurrentLoadCachedFileName = 0x88; // char[260]
    public const nint m_bRestoreCustomMaterialAfterPrecache = 0x1B8; // bool
    public const nint m_iItemDefinitionIndex = 0x1BA; // uint16
    public const nint m_iEntityQuality = 0x1BC; // int32
    public const nint m_iEntityLevel = 0x1C0; // uint32
    public const nint m_iItemID = 0x1C8; // uint64
    public const nint m_iItemIDHigh = 0x1D0; // uint32
    public const nint m_iItemIDLow = 0x1D4; // uint32
    public const nint m_iAccountID = 0x1D8; // uint32
    public const nint m_iInventoryPosition = 0x1DC; // uint32
    public const nint m_bInitialized = 0x1E8; // bool
    public const nint m_bIsStoreItem = 0x1E9; // bool
    public const nint m_bIsTradeItem = 0x1EA; // bool
    public const nint m_iEntityQuantity = 0x1EC; // int32
    public const nint m_iRarityOverride = 0x1F0; // int32
    public const nint m_iQualityOverride = 0x1F4; // int32
    public const nint m_unClientFlags = 0x1F8; // uint8
    public const nint m_unOverrideStyle = 0x1F9; // uint8
    public const nint m_AttributeList = 0x210; // CAttributeList
    public const nint m_NetworkedDynamicAttributes = 0x270; // CAttributeList
    public const nint m_szCustomName = 0x2D0; // char[161]
    public const nint m_szCustomNameOverride = 0x371; // char[161]
    public const nint m_bInitializedTags = 0x440; // bool
}

public static class C_EconWearable {
    public const nint m_nForceSkin = 0x1560; // int32
    public const nint m_bAlwaysAllow = 0x1564; // bool
}

public static class C_EntityDissolve {
    public const nint m_flStartTime = 0xCC8; // GameTime_t
    public const nint m_flFadeInStart = 0xCCC; // float32
    public const nint m_flFadeInLength = 0xCD0; // float32
    public const nint m_flFadeOutModelStart = 0xCD4; // float32
    public const nint m_flFadeOutModelLength = 0xCD8; // float32
    public const nint m_flFadeOutStart = 0xCDC; // float32
    public const nint m_flFadeOutLength = 0xCE0; // float32
    public const nint m_flNextSparkTime = 0xCE4; // GameTime_t
    public const nint m_nDissolveType = 0xCE8; // EntityDisolveType_t
    public const nint m_vDissolverOrigin = 0xCEC; // Vector
    public const nint m_nMagnitude = 0xCF8; // uint32
    public const nint m_bCoreExplode = 0xCFC; // bool
    public const nint m_bLinkedToServerEnt = 0xCFD; // bool
}

public static class C_EntityFlame {
    public const nint m_hEntAttached = 0x540; // CHandle< C_BaseEntity >
    public const nint m_hOldAttached = 0x568; // CHandle< C_BaseEntity >
    public const nint m_bCheapEffect = 0x56C; // bool
}

public static class C_EnvCombinedLightProbeVolume {
    public const nint m_Color = 0x15A8; // Color
    public const nint m_flBrightness = 0x15AC; // float32
    public const nint m_hCubemapTexture = 0x15B0; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_bCustomCubemapTexture = 0x15B8; // bool
    public const nint m_hLightProbeTexture = 0x15C0; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_hLightProbeDirectLightIndicesTexture = 0x15C8; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_hLightProbeDirectLightScalarsTexture = 0x15D0; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_hLightProbeDirectLightShadowsTexture = 0x15D8; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_vBoxMins = 0x15E0; // Vector
    public const nint m_vBoxMaxs = 0x15EC; // Vector
    public const nint m_LightGroups = 0x15F8; // CUtlSymbolLarge
    public const nint m_bMoveable = 0x1600; // bool
    public const nint m_nHandshake = 0x1604; // int32
    public const nint m_nEnvCubeMapArrayIndex = 0x1608; // int32
    public const nint m_nPriority = 0x160C; // int32
    public const nint m_bStartDisabled = 0x1610; // bool
    public const nint m_flEdgeFadeDist = 0x1614; // float32
    public const nint m_vEdgeFadeDists = 0x1618; // Vector
    public const nint m_nLightProbeSizeX = 0x1624; // int32
    public const nint m_nLightProbeSizeY = 0x1628; // int32
    public const nint m_nLightProbeSizeZ = 0x162C; // int32
    public const nint m_nLightProbeAtlasX = 0x1630; // int32
    public const nint m_nLightProbeAtlasY = 0x1634; // int32
    public const nint m_nLightProbeAtlasZ = 0x1638; // int32
    public const nint m_bEnabled = 0x1651; // bool
}

public static class C_EnvCubemap {
    public const nint m_hCubemapTexture = 0x5C8; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_bCustomCubemapTexture = 0x5D0; // bool
    public const nint m_flInfluenceRadius = 0x5D4; // float32
    public const nint m_vBoxProjectMins = 0x5D8; // Vector
    public const nint m_vBoxProjectMaxs = 0x5E4; // Vector
    public const nint m_LightGroups = 0x5F0; // CUtlSymbolLarge
    public const nint m_bMoveable = 0x5F8; // bool
    public const nint m_nHandshake = 0x5FC; // int32
    public const nint m_nEnvCubeMapArrayIndex = 0x600; // int32
    public const nint m_nPriority = 0x604; // int32
    public const nint m_flEdgeFadeDist = 0x608; // float32
    public const nint m_vEdgeFadeDists = 0x60C; // Vector
    public const nint m_flDiffuseScale = 0x618; // float32
    public const nint m_bStartDisabled = 0x61C; // bool
    public const nint m_bDefaultEnvMap = 0x61D; // bool
    public const nint m_bDefaultSpecEnvMap = 0x61E; // bool
    public const nint m_bIndoorCubeMap = 0x61F; // bool
    public const nint m_bCopyDiffuseFromDefaultCubemap = 0x620; // bool
    public const nint m_bEnabled = 0x630; // bool
}

public static class C_EnvCubemapFog {
    public const nint m_flEndDistance = 0x540; // float32
    public const nint m_flStartDistance = 0x544; // float32
    public const nint m_flFogFalloffExponent = 0x548; // float32
    public const nint m_bHeightFogEnabled = 0x54C; // bool
    public const nint m_flFogHeightWidth = 0x550; // float32
    public const nint m_flFogHeightEnd = 0x554; // float32
    public const nint m_flFogHeightStart = 0x558; // float32
    public const nint m_flFogHeightExponent = 0x55C; // float32
    public const nint m_flLODBias = 0x560; // float32
    public const nint m_bActive = 0x564; // bool
    public const nint m_bStartDisabled = 0x565; // bool
    public const nint m_flFogMaxOpacity = 0x568; // float32
    public const nint m_nCubemapSourceType = 0x56C; // int32
    public const nint m_hSkyMaterial = 0x570; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    public const nint m_iszSkyEntity = 0x578; // CUtlSymbolLarge
    public const nint m_hFogCubemapTexture = 0x580; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_bHasHeightFogEnd = 0x588; // bool
    public const nint m_bFirstTime = 0x589; // bool
}

public static class C_EnvDecal {
    public const nint m_hDecalMaterial = 0xCC0; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    public const nint m_flWidth = 0xCC8; // float32
    public const nint m_flHeight = 0xCCC; // float32
    public const nint m_flDepth = 0xCD0; // float32
    public const nint m_nRenderOrder = 0xCD4; // uint32
    public const nint m_bProjectOnWorld = 0xCD8; // bool
    public const nint m_bProjectOnCharacters = 0xCD9; // bool
    public const nint m_bProjectOnWater = 0xCDA; // bool
    public const nint m_flDepthSortBias = 0xCDC; // float32
}

public static class C_EnvDetailController {
    public const nint m_flFadeStartDist = 0x540; // float32
    public const nint m_flFadeEndDist = 0x544; // float32
}

public static class C_EnvLightProbeVolume {
    public const nint m_hLightProbeTexture = 0x1520; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_hLightProbeDirectLightIndicesTexture = 0x1528; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_hLightProbeDirectLightScalarsTexture = 0x1530; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_hLightProbeDirectLightShadowsTexture = 0x1538; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_vBoxMins = 0x1540; // Vector
    public const nint m_vBoxMaxs = 0x154C; // Vector
    public const nint m_LightGroups = 0x1558; // CUtlSymbolLarge
    public const nint m_bMoveable = 0x1560; // bool
    public const nint m_nHandshake = 0x1564; // int32
    public const nint m_nPriority = 0x1568; // int32
    public const nint m_bStartDisabled = 0x156C; // bool
    public const nint m_nLightProbeSizeX = 0x1570; // int32
    public const nint m_nLightProbeSizeY = 0x1574; // int32
    public const nint m_nLightProbeSizeZ = 0x1578; // int32
    public const nint m_nLightProbeAtlasX = 0x157C; // int32
    public const nint m_nLightProbeAtlasY = 0x1580; // int32
    public const nint m_nLightProbeAtlasZ = 0x1584; // int32
    public const nint m_bEnabled = 0x1591; // bool
}

public static class C_EnvParticleGlow {
    public const nint m_flAlphaScale = 0x1270; // float32
    public const nint m_flRadiusScale = 0x1274; // float32
    public const nint m_flSelfIllumScale = 0x1278; // float32
    public const nint m_ColorTint = 0x127C; // Color
    public const nint m_hTextureOverride = 0x1280; // CStrongHandle< InfoForResourceTypeCTextureBase >
}

public static class C_EnvScreenOverlay {
    public const nint m_iszOverlayNames = 0x540; // CUtlSymbolLarge[10]
    public const nint m_flOverlayTimes = 0x590; // float32[10]
    public const nint m_flStartTime = 0x5B8; // GameTime_t
    public const nint m_iDesiredOverlay = 0x5BC; // int32
    public const nint m_bIsActive = 0x5C0; // bool
    public const nint m_bWasActive = 0x5C1; // bool
    public const nint m_iCachedDesiredOverlay = 0x5C4; // int32
    public const nint m_iCurrentOverlay = 0x5C8; // int32
    public const nint m_flCurrentOverlayTime = 0x5CC; // GameTime_t
}

public static class C_EnvSky {
    public const nint m_hSkyMaterial = 0xCC0; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    public const nint m_hSkyMaterialLightingOnly = 0xCC8; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    public const nint m_bStartDisabled = 0xCD0; // bool
    public const nint m_vTintColor = 0xCD1; // Color
    public const nint m_vTintColorLightingOnly = 0xCD5; // Color
    public const nint m_flBrightnessScale = 0xCDC; // float32
    public const nint m_nFogType = 0xCE0; // int32
    public const nint m_flFogMinStart = 0xCE4; // float32
    public const nint m_flFogMinEnd = 0xCE8; // float32
    public const nint m_flFogMaxStart = 0xCEC; // float32
    public const nint m_flFogMaxEnd = 0xCF0; // float32
    public const nint m_bEnabled = 0xCF4; // bool
}

public static class C_EnvVolumetricFogController {
    public const nint m_flScattering = 0x540; // float32
    public const nint m_flAnisotropy = 0x544; // float32
    public const nint m_flFadeSpeed = 0x548; // float32
    public const nint m_flDrawDistance = 0x54C; // float32
    public const nint m_flFadeInStart = 0x550; // float32
    public const nint m_flFadeInEnd = 0x554; // float32
    public const nint m_flIndirectStrength = 0x558; // float32
    public const nint m_nIndirectTextureDimX = 0x55C; // int32
    public const nint m_nIndirectTextureDimY = 0x560; // int32
    public const nint m_nIndirectTextureDimZ = 0x564; // int32
    public const nint m_vBoxMins = 0x568; // Vector
    public const nint m_vBoxMaxs = 0x574; // Vector
    public const nint m_bActive = 0x580; // bool
    public const nint m_flStartAnisoTime = 0x584; // GameTime_t
    public const nint m_flStartScatterTime = 0x588; // GameTime_t
    public const nint m_flStartDrawDistanceTime = 0x58C; // GameTime_t
    public const nint m_flStartAnisotropy = 0x590; // float32
    public const nint m_flStartScattering = 0x594; // float32
    public const nint m_flStartDrawDistance = 0x598; // float32
    public const nint m_flDefaultAnisotropy = 0x59C; // float32
    public const nint m_flDefaultScattering = 0x5A0; // float32
    public const nint m_flDefaultDrawDistance = 0x5A4; // float32
    public const nint m_bStartDisabled = 0x5A8; // bool
    public const nint m_bEnableIndirect = 0x5A9; // bool
    public const nint m_bIsMaster = 0x5AA; // bool
    public const nint m_hFogIndirectTexture = 0x5B0; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_nForceRefreshCount = 0x5B8; // int32
    public const nint m_bFirstTime = 0x5BC; // bool
}

public static class C_EnvVolumetricFogVolume {
    public const nint m_bActive = 0x540; // bool
    public const nint m_vBoxMins = 0x544; // Vector
    public const nint m_vBoxMaxs = 0x550; // Vector
    public const nint m_bStartDisabled = 0x55C; // bool
    public const nint m_flStrength = 0x560; // float32
    public const nint m_nFalloffShape = 0x564; // int32
    public const nint m_flFalloffExponent = 0x568; // float32
}

public static class C_EnvWind {
    public const nint m_EnvWindShared = 0x540; // C_EnvWindShared
}

public static class C_EnvWindClientside {
    public const nint m_EnvWindShared = 0x540; // C_EnvWindShared
}

public static class C_EnvWindShared {
    public const nint m_flStartTime = 0x8; // GameTime_t
    public const nint m_iWindSeed = 0xC; // uint32
    public const nint m_iMinWind = 0x10; // uint16
    public const nint m_iMaxWind = 0x12; // uint16
    public const nint m_windRadius = 0x14; // int32
    public const nint m_iMinGust = 0x18; // uint16
    public const nint m_iMaxGust = 0x1A; // uint16
    public const nint m_flMinGustDelay = 0x1C; // float32
    public const nint m_flMaxGustDelay = 0x20; // float32
    public const nint m_flGustDuration = 0x24; // float32
    public const nint m_iGustDirChange = 0x28; // uint16
    public const nint m_location = 0x2C; // Vector
    public const nint m_iszGustSound = 0x38; // int32
    public const nint m_iWindDir = 0x3C; // int32
    public const nint m_flWindSpeed = 0x40; // float32
    public const nint m_currentWindVector = 0x44; // Vector
    public const nint m_CurrentSwayVector = 0x50; // Vector
    public const nint m_PrevSwayVector = 0x5C; // Vector
    public const nint m_iInitialWindDir = 0x68; // uint16
    public const nint m_flInitialWindSpeed = 0x6C; // float32
    public const nint m_flVariationTime = 0x70; // GameTime_t
    public const nint m_flSwayTime = 0x74; // GameTime_t
    public const nint m_flSimTime = 0x78; // GameTime_t
    public const nint m_flSwitchTime = 0x7C; // GameTime_t
    public const nint m_flAveWindSpeed = 0x80; // float32
    public const nint m_bGusting = 0x84; // bool
    public const nint m_flWindAngleVariation = 0x88; // float32
    public const nint m_flWindSpeedVariation = 0x8C; // float32
    public const nint m_iEntIndex = 0x90; // CEntityIndex
}

public static class C_EnvWindShared_WindAveEvent_t {
    public const nint m_flStartWindSpeed = 0x0; // float32
    public const nint m_flAveWindSpeed = 0x4; // float32
}

public static class C_EnvWindShared_WindVariationEvent_t {
    public const nint m_flWindAngleVariation = 0x0; // float32
    public const nint m_flWindSpeedVariation = 0x4; // float32
}

public static class C_FireSmoke {
    public const nint m_nFlameModelIndex = 0x550; // int32
    public const nint m_nFlameFromAboveModelIndex = 0x554; // int32
    public const nint m_flScaleRegister = 0x558; // float32
    public const nint m_flScaleStart = 0x55C; // float32
    public const nint m_flScaleEnd = 0x560; // float32
    public const nint m_flScaleTimeStart = 0x564; // GameTime_t
    public const nint m_flScaleTimeEnd = 0x568; // GameTime_t
    public const nint m_flChildFlameSpread = 0x56C; // float32
    public const nint m_flClipPerc = 0x580; // float32
    public const nint m_bClipTested = 0x584; // bool
    public const nint m_bFadingOut = 0x585; // bool
    public const nint m_tParticleSpawn = 0x588; // TimedEvent
    public const nint m_pFireOverlay = 0x590; // CFireOverlay*
}

public static class C_FireSprite {
    public const nint m_vecMoveDir = 0xDF0; // Vector
    public const nint m_bFadeFromAbove = 0xDFC; // bool
}

public static class C_Fish {
    public const nint m_pos = 0xE80; // Vector
    public const nint m_vel = 0xE8C; // Vector
    public const nint m_angles = 0xE98; // QAngle
    public const nint m_localLifeState = 0xEA4; // int32
    public const nint m_deathDepth = 0xEA8; // float32
    public const nint m_deathAngle = 0xEAC; // float32
    public const nint m_buoyancy = 0xEB0; // float32
    public const nint m_wiggleTimer = 0xEB8; // CountdownTimer
    public const nint m_wigglePhase = 0xED0; // float32
    public const nint m_wiggleRate = 0xED4; // float32
    public const nint m_actualPos = 0xED8; // Vector
    public const nint m_actualAngles = 0xEE4; // QAngle
    public const nint m_poolOrigin = 0xEF0; // Vector
    public const nint m_waterLevel = 0xEFC; // float32
    public const nint m_gotUpdate = 0xF00; // bool
    public const nint m_x = 0xF04; // float32
    public const nint m_y = 0xF08; // float32
    public const nint m_z = 0xF0C; // float32
    public const nint m_angle = 0xF10; // float32
    public const nint m_errorHistory = 0xF14; // float32[20]
    public const nint m_errorHistoryIndex = 0xF64; // int32
    public const nint m_errorHistoryCount = 0xF68; // int32
    public const nint m_averageError = 0xF6C; // float32
}

public static class C_Fists {
    public const nint m_bPlayingUninterruptableAct = 0x18E0; // bool
    public const nint m_nUninterruptableActivity = 0x18E4; // PlayerAnimEvent_t
}

public static class C_FogController {
    public const nint m_fog = 0x540; // fogparams_t
    public const nint m_bUseAngles = 0x5A8; // bool
    public const nint m_iChangedVariables = 0x5AC; // int32
}

public static class C_FootstepControl {
    public const nint m_source = 0xCC8; // CUtlSymbolLarge
    public const nint m_destination = 0xCD0; // CUtlSymbolLarge
}

public static class C_FuncConveyor {
    public const nint m_vecMoveDirEntitySpace = 0xCC8; // Vector
    public const nint m_flTargetSpeed = 0xCD4; // float32
    public const nint m_nTransitionStartTick = 0xCD8; // GameTick_t
    public const nint m_nTransitionDurationTicks = 0xCDC; // int32
    public const nint m_flTransitionStartSpeed = 0xCE0; // float32
    public const nint m_hConveyorModels = 0xCE8; // C_NetworkUtlVectorBase< CHandle< C_BaseEntity > >
    public const nint m_flCurrentConveyorOffset = 0xD00; // float32
    public const nint m_flCurrentConveyorSpeed = 0xD04; // float32
}

public static class C_FuncElectrifiedVolume {
    public const nint m_nAmbientEffect = 0xCC0; // ParticleIndex_t
    public const nint m_EffectName = 0xCC8; // CUtlSymbolLarge
    public const nint m_bState = 0xCD0; // bool
}

public static class C_FuncLadder {
    public const nint m_vecLadderDir = 0xCC0; // Vector
    public const nint m_Dismounts = 0xCD0; // CUtlVector< CHandle< C_InfoLadderDismount > >
    public const nint m_vecLocalTop = 0xCE8; // Vector
    public const nint m_vecPlayerMountPositionTop = 0xCF4; // Vector
    public const nint m_vecPlayerMountPositionBottom = 0xD00; // Vector
    public const nint m_flAutoRideSpeed = 0xD0C; // float32
    public const nint m_bDisabled = 0xD10; // bool
    public const nint m_bFakeLadder = 0xD11; // bool
    public const nint m_bHasSlack = 0xD12; // bool
}

public static class C_FuncMonitor {
    public const nint m_targetCamera = 0xCC0; // CUtlString
    public const nint m_nResolutionEnum = 0xCC8; // int32
    public const nint m_bRenderShadows = 0xCCC; // bool
    public const nint m_bUseUniqueColorTarget = 0xCCD; // bool
    public const nint m_brushModelName = 0xCD0; // CUtlString
    public const nint m_hTargetCamera = 0xCD8; // CHandle< C_BaseEntity >
    public const nint m_bEnabled = 0xCDC; // bool
    public const nint m_bDraw3DSkybox = 0xCDD; // bool
}

public static class C_FuncTrackTrain {
    public const nint m_nLongAxis = 0xCC0; // int32
    public const nint m_flRadius = 0xCC4; // float32
    public const nint m_flLineLength = 0xCC8; // float32
}

public static class C_GlobalLight {
    public const nint m_WindClothForceHandle = 0xA00; // uint16
}

public static class C_GradientFog {
    public const nint m_hGradientFogTexture = 0x540; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_flFogStartDistance = 0x548; // float32
    public const nint m_flFogEndDistance = 0x54C; // float32
    public const nint m_bHeightFogEnabled = 0x550; // bool
    public const nint m_flFogStartHeight = 0x554; // float32
    public const nint m_flFogEndHeight = 0x558; // float32
    public const nint m_flFarZ = 0x55C; // float32
    public const nint m_flFogMaxOpacity = 0x560; // float32
    public const nint m_flFogFalloffExponent = 0x564; // float32
    public const nint m_flFogVerticalExponent = 0x568; // float32
    public const nint m_fogColor = 0x56C; // Color
    public const nint m_flFogStrength = 0x570; // float32
    public const nint m_flFadeTime = 0x574; // float32
    public const nint m_bStartDisabled = 0x578; // bool
    public const nint m_bIsEnabled = 0x579; // bool
    public const nint m_bGradientFogNeedsTextures = 0x57A; // bool
}

public static class C_HandleTest {
    public const nint m_Handle = 0x540; // CHandle< C_BaseEntity >
    public const nint m_bSendHandle = 0x544; // bool
}

public static class C_Hostage {
    public const nint m_entitySpottedState = 0x10A8; // EntitySpottedState_t
    public const nint m_leader = 0x10C0; // CHandle< C_BaseEntity >
    public const nint m_reuseTimer = 0x10C8; // CountdownTimer
    public const nint m_vel = 0x10E0; // Vector
    public const nint m_isRescued = 0x10EC; // bool
    public const nint m_jumpedThisFrame = 0x10ED; // bool
    public const nint m_nHostageState = 0x10F0; // int32
    public const nint m_bHandsHaveBeenCut = 0x10F4; // bool
    public const nint m_hHostageGrabber = 0x10F8; // CHandle< C_CSPlayerPawn >
    public const nint m_fLastGrabTime = 0x10FC; // GameTime_t
    public const nint m_vecGrabbedPos = 0x1100; // Vector
    public const nint m_flRescueStartTime = 0x110C; // GameTime_t
    public const nint m_flGrabSuccessTime = 0x1110; // GameTime_t
    public const nint m_flDropStartTime = 0x1114; // GameTime_t
    public const nint m_flDeadOrRescuedTime = 0x1118; // GameTime_t
    public const nint m_blinkTimer = 0x1120; // CountdownTimer
    public const nint m_lookAt = 0x1138; // Vector
    public const nint m_lookAroundTimer = 0x1148; // CountdownTimer
    public const nint m_isInit = 0x1160; // bool
    public const nint m_eyeAttachment = 0x1161; // AttachmentHandle_t
    public const nint m_chestAttachment = 0x1162; // AttachmentHandle_t
    public const nint m_pPredictionOwner = 0x1168; // CBasePlayerController*
    public const nint m_fNewestAlphaThinkTime = 0x1170; // GameTime_t
}

public static class C_Inferno {
    public const nint m_nfxFireDamageEffect = 0xD00; // ParticleIndex_t
    public const nint m_fireXDelta = 0xD04; // int32[64]
    public const nint m_fireYDelta = 0xE04; // int32[64]
    public const nint m_fireZDelta = 0xF04; // int32[64]
    public const nint m_fireParentXDelta = 0x1004; // int32[64]
    public const nint m_fireParentYDelta = 0x1104; // int32[64]
    public const nint m_fireParentZDelta = 0x1204; // int32[64]
    public const nint m_bFireIsBurning = 0x1304; // bool[64]
    public const nint m_BurnNormal = 0x1344; // Vector[64]
    public const nint m_fireCount = 0x1644; // int32
    public const nint m_nInfernoType = 0x1648; // int32
    public const nint m_nFireLifetime = 0x164C; // float32
    public const nint m_bInPostEffectTime = 0x1650; // bool
    public const nint m_lastFireCount = 0x1654; // int32
    public const nint m_nFireEffectTickBegin = 0x1658; // int32
    public const nint m_drawableCount = 0x8260; // int32
    public const nint m_blosCheck = 0x8264; // bool
    public const nint m_nlosperiod = 0x8268; // int32
    public const nint m_maxFireHalfWidth = 0x826C; // float32
    public const nint m_maxFireHeight = 0x8270; // float32
    public const nint m_minBounds = 0x8274; // Vector
    public const nint m_maxBounds = 0x8280; // Vector
    public const nint m_flLastGrassBurnThink = 0x828C; // float32
}

public static class C_InfoVisibilityBox {
    public const nint m_nMode = 0x544; // int32
    public const nint m_vBoxSize = 0x548; // Vector
    public const nint m_bEnabled = 0x554; // bool
}

public static class C_IronSightController {
    public const nint m_bIronSightAvailable = 0x10; // bool
    public const nint m_flIronSightAmount = 0x14; // float32
    public const nint m_flIronSightAmountGained = 0x18; // float32
    public const nint m_flIronSightAmountBiased = 0x1C; // float32
    public const nint m_flIronSightAmount_Interpolated = 0x20; // float32
    public const nint m_flIronSightAmountGained_Interpolated = 0x24; // float32
    public const nint m_flIronSightAmountBiased_Interpolated = 0x28; // float32
    public const nint m_flInterpolationLastUpdated = 0x2C; // float32
    public const nint m_angDeltaAverage = 0x30; // QAngle[8]
    public const nint m_angViewLast = 0x90; // QAngle
    public const nint m_vecDotCoords = 0x9C; // Vector2D
    public const nint m_flDotBlur = 0xA4; // float32
    public const nint m_flSpeedRatio = 0xA8; // float32
}

public static class C_Item {
    public const nint m_bShouldGlow = 0x1560; // bool
    public const nint m_pReticleHintTextName = 0x1561; // char[256]
}

public static class C_ItemDogtags {
    public const nint m_OwningPlayer = 0x1668; // CHandle< C_CSPlayerPawn >
    public const nint m_KillingPlayer = 0x166C; // CHandle< C_CSPlayerPawn >
}

public static class C_LightEntity {
    public const nint m_CLightComponent = 0xCC0; // CLightComponent*
}

public static class C_LightGlow {
    public const nint m_nHorizontalSize = 0xCC0; // uint32
    public const nint m_nVerticalSize = 0xCC4; // uint32
    public const nint m_nMinDist = 0xCC8; // uint32
    public const nint m_nMaxDist = 0xCCC; // uint32
    public const nint m_nOuterMaxDist = 0xCD0; // uint32
    public const nint m_flGlowProxySize = 0xCD4; // float32
    public const nint m_flHDRColorScale = 0xCD8; // float32
    public const nint m_Glow = 0xCE0; // C_LightGlowOverlay
}

public static class C_LightGlowOverlay {
    public const nint m_vecOrigin = 0xD0; // Vector
    public const nint m_vecDirection = 0xDC; // Vector
    public const nint m_nMinDist = 0xE8; // int32
    public const nint m_nMaxDist = 0xEC; // int32
    public const nint m_nOuterMaxDist = 0xF0; // int32
    public const nint m_bOneSided = 0xF4; // bool
    public const nint m_bModulateByDot = 0xF5; // bool
}

public static class C_LocalTempEntity {
    public const nint flags = 0xE98; // int32
    public const nint die = 0xE9C; // GameTime_t
    public const nint m_flFrameMax = 0xEA0; // float32
    public const nint x = 0xEA4; // float32
    public const nint y = 0xEA8; // float32
    public const nint fadeSpeed = 0xEAC; // float32
    public const nint bounceFactor = 0xEB0; // float32
    public const nint hitSound = 0xEB4; // int32
    public const nint priority = 0xEB8; // int32
    public const nint tentOffset = 0xEBC; // Vector
    public const nint m_vecTempEntAngVelocity = 0xEC8; // QAngle
    public const nint tempent_renderamt = 0xED4; // int32
    public const nint m_vecNormal = 0xED8; // Vector
    public const nint m_flSpriteScale = 0xEE4; // float32
    public const nint m_nFlickerFrame = 0xEE8; // int32
    public const nint m_flFrameRate = 0xEEC; // float32
    public const nint m_flFrame = 0xEF0; // float32
    public const nint m_pszImpactEffect = 0xEF8; // char*
    public const nint m_pszParticleEffect = 0xF00; // char*
    public const nint m_bParticleCollision = 0xF08; // bool
    public const nint m_iLastCollisionFrame = 0xF0C; // int32
    public const nint m_vLastCollisionOrigin = 0xF10; // Vector
    public const nint m_vecTempEntVelocity = 0xF1C; // Vector
    public const nint m_vecPrevAbsOrigin = 0xF28; // Vector
    public const nint m_vecTempEntAcceleration = 0xF34; // Vector
}

public static class C_MapVetoPickController {
    public const nint m_nDraftType = 0x550; // int32
    public const nint m_nTeamWinningCoinToss = 0x554; // int32
    public const nint m_nTeamWithFirstChoice = 0x558; // int32[64]
    public const nint m_nVoteMapIdsList = 0x658; // int32[7]
    public const nint m_nAccountIDs = 0x674; // int32[64]
    public const nint m_nMapId0 = 0x774; // int32[64]
    public const nint m_nMapId1 = 0x874; // int32[64]
    public const nint m_nMapId2 = 0x974; // int32[64]
    public const nint m_nMapId3 = 0xA74; // int32[64]
    public const nint m_nMapId4 = 0xB74; // int32[64]
    public const nint m_nMapId5 = 0xC74; // int32[64]
    public const nint m_nStartingSide0 = 0xD74; // int32[64]
    public const nint m_nCurrentPhase = 0xE74; // int32
    public const nint m_nPhaseStartTick = 0xE78; // int32
    public const nint m_nPhaseDurationTicks = 0xE7C; // int32
    public const nint m_nPostDataUpdateTick = 0xE80; // int32
    public const nint m_bDisabledHud = 0xE84; // bool
}

public static class C_Melee {
    public const nint m_flThrowAt = 0x18E0; // GameTime_t
}

public static class C_MolotovProjectile {
    public const nint m_bIsIncGrenade = 0x10F0; // bool
}

public static class C_Multimeter {
    public const nint m_hTargetC4 = 0xE88; // CHandle< C_PlantedC4 >
}

public static class C_OmniLight {
    public const nint m_flInnerAngle = 0xF08; // float32
    public const nint m_flOuterAngle = 0xF0C; // float32
    public const nint m_bShowLight = 0xF10; // bool
}

public static class C_ParticleSystem {
    public const nint m_szSnapshotFileName = 0xCC0; // char[512]
    public const nint m_bActive = 0xEC0; // bool
    public const nint m_bFrozen = 0xEC1; // bool
    public const nint m_flFreezeTransitionDuration = 0xEC4; // float32
    public const nint m_nStopType = 0xEC8; // int32
    public const nint m_bAnimateDuringGameplayPause = 0xECC; // bool
    public const nint m_iEffectIndex = 0xED0; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
    public const nint m_flStartTime = 0xED8; // GameTime_t
    public const nint m_flPreSimTime = 0xEDC; // float32
    public const nint m_vServerControlPoints = 0xEE0; // Vector[4]
    public const nint m_iServerControlPointAssignments = 0xF10; // uint8[4]
    public const nint m_hControlPointEnts = 0xF14; // CHandle< C_BaseEntity >[64]
    public const nint m_bNoSave = 0x1014; // bool
    public const nint m_bNoFreeze = 0x1015; // bool
    public const nint m_bNoRamp = 0x1016; // bool
    public const nint m_bStartActive = 0x1017; // bool
    public const nint m_iszEffectName = 0x1018; // CUtlSymbolLarge
    public const nint m_iszControlPointNames = 0x1020; // CUtlSymbolLarge[64]
    public const nint m_nDataCP = 0x1220; // int32
    public const nint m_vecDataCPValue = 0x1224; // Vector
    public const nint m_nTintCP = 0x1230; // int32
    public const nint m_clrTint = 0x1234; // Color
    public const nint m_bOldActive = 0x1258; // bool
    public const nint m_bOldFrozen = 0x1259; // bool
}

public static class C_PathParticleRope {
    public const nint m_bStartActive = 0x540; // bool
    public const nint m_flMaxSimulationTime = 0x544; // float32
    public const nint m_iszEffectName = 0x548; // CUtlSymbolLarge
    public const nint m_PathNodes_Name = 0x550; // CUtlVector< CUtlSymbolLarge >
    public const nint m_flParticleSpacing = 0x568; // float32
    public const nint m_flSlack = 0x56C; // float32
    public const nint m_flRadius = 0x570; // float32
    public const nint m_ColorTint = 0x574; // Color
    public const nint m_nEffectState = 0x578; // int32
    public const nint m_iEffectIndex = 0x580; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
    public const nint m_PathNodes_Position = 0x588; // C_NetworkUtlVectorBase< Vector >
    public const nint m_PathNodes_TangentIn = 0x5A0; // C_NetworkUtlVectorBase< Vector >
    public const nint m_PathNodes_TangentOut = 0x5B8; // C_NetworkUtlVectorBase< Vector >
    public const nint m_PathNodes_Color = 0x5D0; // C_NetworkUtlVectorBase< Vector >
    public const nint m_PathNodes_PinEnabled = 0x5E8; // C_NetworkUtlVectorBase< bool >
    public const nint m_PathNodes_RadiusScale = 0x600; // C_NetworkUtlVectorBase< float32 >
}

public static class C_PhysMagnet {
    public const nint m_aAttachedObjectsFromServer = 0xE80; // CUtlVector< int32 >
    public const nint m_aAttachedObjects = 0xE98; // CUtlVector< CHandle< C_BaseEntity > >
}

public static class C_PhysPropClientside {
    public const nint m_flTouchDelta = 0xFD0; // GameTime_t
    public const nint m_fDeathTime = 0xFD4; // GameTime_t
    public const nint m_impactEnergyScale = 0xFD8; // float32
    public const nint m_inertiaScale = 0xFDC; // float32
    public const nint m_flDmgModBullet = 0xFE0; // float32
    public const nint m_flDmgModClub = 0xFE4; // float32
    public const nint m_flDmgModExplosive = 0xFE8; // float32
    public const nint m_flDmgModFire = 0xFEC; // float32
    public const nint m_iszPhysicsDamageTableName = 0xFF0; // CUtlSymbolLarge
    public const nint m_iszBasePropData = 0xFF8; // CUtlSymbolLarge
    public const nint m_iInteractions = 0x1000; // int32
    public const nint m_bHasBreakPiecesOrCommands = 0x1004; // bool
    public const nint m_vecDamagePosition = 0x1008; // Vector
    public const nint m_vecDamageDirection = 0x1014; // Vector
    public const nint m_nDamageType = 0x1020; // int32
}

public static class C_PhysicsProp {
    public const nint m_bAwake = 0xFD0; // bool
}

public static class C_PickUpModelSlerper {
    public const nint m_hPlayerParent = 0xE80; // CHandle< C_BaseEntity >
    public const nint m_hItem = 0xE84; // CHandle< C_BaseEntity >
    public const nint m_flTimePickedUp = 0xE88; // float32
    public const nint m_angOriginal = 0xE8C; // QAngle
    public const nint m_vecPosOriginal = 0xE98; // Vector
    public const nint m_angRandom = 0xEA8; // QAngle
}

public static class C_PlantedC4 {
    public const nint m_bBombTicking = 0xE80; // bool
    public const nint m_nBombSite = 0xE84; // int32
    public const nint m_nSourceSoundscapeHash = 0xE88; // int32
    public const nint m_entitySpottedState = 0xE90; // EntitySpottedState_t
    public const nint m_flNextGlow = 0xEA8; // GameTime_t
    public const nint m_flNextBeep = 0xEAC; // GameTime_t
    public const nint m_flC4Blow = 0xEB0; // GameTime_t
    public const nint m_bCannotBeDefused = 0xEB4; // bool
    public const nint m_bHasExploded = 0xEB5; // bool
    public const nint m_flTimerLength = 0xEB8; // float32
    public const nint m_bBeingDefused = 0xEBC; // bool
    public const nint m_bTenSecWarning = 0xEC0; // float32
    public const nint m_bTriggerWarning = 0xEC4; // float32
    public const nint m_bExplodeWarning = 0xEC8; // float32
    public const nint m_bC4Activated = 0xECC; // bool
    public const nint m_flDefuseLength = 0xED0; // float32
    public const nint m_flDefuseCountDown = 0xED4; // GameTime_t
    public const nint m_bBombDefused = 0xED8; // bool
    public const nint m_hBombDefuser = 0xEDC; // CHandle< C_CSPlayerPawn >
    public const nint m_hControlPanel = 0xEE0; // CHandle< C_BaseEntity >
    public const nint m_hDefuserMultimeter = 0xEE4; // CHandle< C_Multimeter >
    public const nint m_flNextRadarFlashTime = 0xEE8; // GameTime_t
    public const nint m_bRadarFlash = 0xEEC; // bool
    public const nint m_pBombDefuser = 0xEF0; // CHandle< C_CSPlayerPawn >
    public const nint m_fLastDefuseTime = 0xEF4; // GameTime_t
    public const nint m_pPredictionOwner = 0xEF8; // CBasePlayerController*
}

public static class C_PlayerPing {
    public const nint m_hPlayer = 0x570; // CHandle< C_CSPlayerPawn >
    public const nint m_hPingedEntity = 0x574; // CHandle< C_BaseEntity >
    public const nint m_iType = 0x578; // int32
    public const nint m_bUrgent = 0x57C; // bool
    public const nint m_szPlaceName = 0x57D; // char[18]
}

public static class C_PlayerSprayDecal {
    public const nint m_nUniqueID = 0xCC0; // int32
    public const nint m_unAccountID = 0xCC4; // uint32
    public const nint m_unTraceID = 0xCC8; // uint32
    public const nint m_rtGcTime = 0xCCC; // uint32
    public const nint m_vecEndPos = 0xCD0; // Vector
    public const nint m_vecStart = 0xCDC; // Vector
    public const nint m_vecLeft = 0xCE8; // Vector
    public const nint m_vecNormal = 0xCF4; // Vector
    public const nint m_nPlayer = 0xD00; // int32
    public const nint m_nEntity = 0xD04; // int32
    public const nint m_nHitbox = 0xD08; // int32
    public const nint m_flCreationTime = 0xD0C; // float32
    public const nint m_nTintID = 0xD10; // int32
    public const nint m_nVersion = 0xD14; // uint8
    public const nint m_ubSignature = 0xD15; // uint8[128]
    public const nint m_SprayRenderHelper = 0xDA0; // CPlayerSprayDecalRenderHelper
}

public static class C_PlayerVisibility {
    public const nint m_flVisibilityStrength = 0x540; // float32
    public const nint m_flFogDistanceMultiplier = 0x544; // float32
    public const nint m_flFogMaxDensityMultiplier = 0x548; // float32
    public const nint m_flFadeTime = 0x54C; // float32
    public const nint m_bStartDisabled = 0x550; // bool
    public const nint m_bIsEnabled = 0x551; // bool
}

public static class C_PointCamera {
    public const nint m_FOV = 0x540; // float32
    public const nint m_Resolution = 0x544; // float32
    public const nint m_bFogEnable = 0x548; // bool
    public const nint m_FogColor = 0x549; // Color
    public const nint m_flFogStart = 0x550; // float32
    public const nint m_flFogEnd = 0x554; // float32
    public const nint m_flFogMaxDensity = 0x558; // float32
    public const nint m_bActive = 0x55C; // bool
    public const nint m_bUseScreenAspectRatio = 0x55D; // bool
    public const nint m_flAspectRatio = 0x560; // float32
    public const nint m_bNoSky = 0x564; // bool
    public const nint m_fBrightness = 0x568; // float32
    public const nint m_flZFar = 0x56C; // float32
    public const nint m_flZNear = 0x570; // float32
    public const nint m_bCanHLTVUse = 0x574; // bool
    public const nint m_bDofEnabled = 0x575; // bool
    public const nint m_flDofNearBlurry = 0x578; // float32
    public const nint m_flDofNearCrisp = 0x57C; // float32
    public const nint m_flDofFarCrisp = 0x580; // float32
    public const nint m_flDofFarBlurry = 0x584; // float32
    public const nint m_flDofTiltToGround = 0x588; // float32
    public const nint m_TargetFOV = 0x58C; // float32
    public const nint m_DegreesPerSecond = 0x590; // float32
    public const nint m_bIsOn = 0x594; // bool
    public const nint m_pNext = 0x598; // C_PointCamera*
}

public static class C_PointCameraVFOV {
    public const nint m_flVerticalFOV = 0x5A0; // float32
}

public static class C_PointClientUIDialog {
    public const nint m_hActivator = 0xCF0; // CHandle< C_BaseEntity >
    public const nint m_bStartEnabled = 0xCF4; // bool
}

public static class C_PointClientUIHUD {
    public const nint m_bCheckCSSClasses = 0xCF8; // bool
    public const nint m_bIgnoreInput = 0xE80; // bool
    public const nint m_flWidth = 0xE84; // float32
    public const nint m_flHeight = 0xE88; // float32
    public const nint m_flDPI = 0xE8C; // float32
    public const nint m_flInteractDistance = 0xE90; // float32
    public const nint m_flDepthOffset = 0xE94; // float32
    public const nint m_unOwnerContext = 0xE98; // uint32
    public const nint m_unHorizontalAlign = 0xE9C; // uint32
    public const nint m_unVerticalAlign = 0xEA0; // uint32
    public const nint m_unOrientation = 0xEA4; // uint32
    public const nint m_bAllowInteractionFromAllSceneWorlds = 0xEA8; // bool
    public const nint m_vecCSSClasses = 0xEB0; // C_NetworkUtlVectorBase< CUtlSymbolLarge >
}

public static class C_PointClientUIWorldPanel {
    public const nint m_bForceRecreateNextUpdate = 0xCF8; // bool
    public const nint m_bMoveViewToPlayerNextThink = 0xCF9; // bool
    public const nint m_bCheckCSSClasses = 0xCFA; // bool
    public const nint m_anchorDeltaTransform = 0xD00; // CTransform
    public const nint m_pOffScreenIndicator = 0xEA0; // CPointOffScreenIndicatorUi*
    public const nint m_bIgnoreInput = 0xEC8; // bool
    public const nint m_bLit = 0xEC9; // bool
    public const nint m_bFollowPlayerAcrossTeleport = 0xECA; // bool
    public const nint m_flWidth = 0xECC; // float32
    public const nint m_flHeight = 0xED0; // float32
    public const nint m_flDPI = 0xED4; // float32
    public const nint m_flInteractDistance = 0xED8; // float32
    public const nint m_flDepthOffset = 0xEDC; // float32
    public const nint m_unOwnerContext = 0xEE0; // uint32
    public const nint m_unHorizontalAlign = 0xEE4; // uint32
    public const nint m_unVerticalAlign = 0xEE8; // uint32
    public const nint m_unOrientation = 0xEEC; // uint32
    public const nint m_bAllowInteractionFromAllSceneWorlds = 0xEF0; // bool
    public const nint m_vecCSSClasses = 0xEF8; // C_NetworkUtlVectorBase< CUtlSymbolLarge >
    public const nint m_bOpaque = 0xF10; // bool
    public const nint m_bNoDepth = 0xF11; // bool
    public const nint m_bRenderBackface = 0xF12; // bool
    public const nint m_bUseOffScreenIndicator = 0xF13; // bool
    public const nint m_bExcludeFromSaveGames = 0xF14; // bool
    public const nint m_bGrabbable = 0xF15; // bool
    public const nint m_bOnlyRenderToTexture = 0xF16; // bool
    public const nint m_bDisableMipGen = 0xF17; // bool
    public const nint m_nExplicitImageLayout = 0xF18; // int32
}

public static class C_PointClientUIWorldTextPanel {
    public const nint m_messageText = 0xF20; // char[512]
}

public static class C_PointCommentaryNode {
    public const nint m_bActive = 0xE88; // bool
    public const nint m_bWasActive = 0xE89; // bool
    public const nint m_flEndTime = 0xE8C; // GameTime_t
    public const nint m_flStartTime = 0xE90; // GameTime_t
    public const nint m_flStartTimeInCommentary = 0xE94; // float32
    public const nint m_iszCommentaryFile = 0xE98; // CUtlSymbolLarge
    public const nint m_iszTitle = 0xEA0; // CUtlSymbolLarge
    public const nint m_iszSpeakers = 0xEA8; // CUtlSymbolLarge
    public const nint m_iNodeNumber = 0xEB0; // int32
    public const nint m_iNodeNumberMax = 0xEB4; // int32
    public const nint m_bListenedTo = 0xEB8; // bool
    public const nint m_hViewPosition = 0xEC8; // CHandle< C_BaseEntity >
    public const nint m_bRestartAfterRestore = 0xECC; // bool
}

public static class C_PointValueRemapper {
    public const nint m_bDisabled = 0x540; // bool
    public const nint m_bDisabledOld = 0x541; // bool
    public const nint m_bUpdateOnClient = 0x542; // bool
    public const nint m_nInputType = 0x544; // ValueRemapperInputType_t
    public const nint m_hRemapLineStart = 0x548; // CHandle< C_BaseEntity >
    public const nint m_hRemapLineEnd = 0x54C; // CHandle< C_BaseEntity >
    public const nint m_flMaximumChangePerSecond = 0x550; // float32
    public const nint m_flDisengageDistance = 0x554; // float32
    public const nint m_flEngageDistance = 0x558; // float32
    public const nint m_bRequiresUseKey = 0x55C; // bool
    public const nint m_nOutputType = 0x560; // ValueRemapperOutputType_t
    public const nint m_hOutputEntities = 0x568; // C_NetworkUtlVectorBase< CHandle< C_BaseEntity > >
    public const nint m_nHapticsType = 0x580; // ValueRemapperHapticsType_t
    public const nint m_nMomentumType = 0x584; // ValueRemapperMomentumType_t
    public const nint m_flMomentumModifier = 0x588; // float32
    public const nint m_flSnapValue = 0x58C; // float32
    public const nint m_flCurrentMomentum = 0x590; // float32
    public const nint m_nRatchetType = 0x594; // ValueRemapperRatchetType_t
    public const nint m_flRatchetOffset = 0x598; // float32
    public const nint m_flInputOffset = 0x59C; // float32
    public const nint m_bEngaged = 0x5A0; // bool
    public const nint m_bFirstUpdate = 0x5A1; // bool
    public const nint m_flPreviousValue = 0x5A4; // float32
    public const nint m_flPreviousUpdateTickTime = 0x5A8; // GameTime_t
    public const nint m_vecPreviousTestPoint = 0x5AC; // Vector
}

public static class C_PointWorldText {
    public const nint m_bForceRecreateNextUpdate = 0xCC8; // bool
    public const nint m_messageText = 0xCD8; // char[512]
    public const nint m_FontName = 0xED8; // char[64]
    public const nint m_bEnabled = 0xF18; // bool
    public const nint m_bFullbright = 0xF19; // bool
    public const nint m_flWorldUnitsPerPx = 0xF1C; // float32
    public const nint m_flFontSize = 0xF20; // float32
    public const nint m_flDepthOffset = 0xF24; // float32
    public const nint m_Color = 0xF28; // Color
    public const nint m_nJustifyHorizontal = 0xF2C; // PointWorldTextJustifyHorizontal_t
    public const nint m_nJustifyVertical = 0xF30; // PointWorldTextJustifyVertical_t
    public const nint m_nReorientMode = 0xF34; // PointWorldTextReorientMode_t
}

public static class C_PostProcessingVolume {
    public const nint m_hPostSettings = 0xCD8; // CStrongHandle< InfoForResourceTypeCPostProcessingResource >
    public const nint m_flFadeDuration = 0xCE0; // float32
    public const nint m_flMinLogExposure = 0xCE4; // float32
    public const nint m_flMaxLogExposure = 0xCE8; // float32
    public const nint m_flMinExposure = 0xCEC; // float32
    public const nint m_flMaxExposure = 0xCF0; // float32
    public const nint m_flExposureCompensation = 0xCF4; // float32
    public const nint m_flExposureFadeSpeedUp = 0xCF8; // float32
    public const nint m_flExposureFadeSpeedDown = 0xCFC; // float32
    public const nint m_flTonemapEVSmoothingRange = 0xD00; // float32
    public const nint m_bMaster = 0xD04; // bool
    public const nint m_bExposureControl = 0xD05; // bool
    public const nint m_flRate = 0xD08; // float32
    public const nint m_flTonemapPercentTarget = 0xD0C; // float32
    public const nint m_flTonemapPercentBrightPixels = 0xD10; // float32
    public const nint m_flTonemapMinAvgLum = 0xD14; // float32
}

public static class C_Precipitation {
    public const nint m_flDensity = 0xCC8; // float32
    public const nint m_flParticleInnerDist = 0xCD8; // float32
    public const nint m_pParticleDef = 0xCE0; // char*
    public const nint m_tParticlePrecipTraceTimer = 0xD08; // TimedEvent[1]
    public const nint m_bActiveParticlePrecipEmitter = 0xD10; // bool[1]
    public const nint m_bParticlePrecipInitialized = 0xD11; // bool
    public const nint m_bHasSimulatedSinceLastSceneObjectUpdate = 0xD12; // bool
    public const nint m_nAvailableSheetSequencesMaxIndex = 0xD14; // int32
}

public static class C_PredictedViewModel {
    public const nint m_LagAnglesHistory = 0xEE8; // QAngle
    public const nint m_vPredictedOffset = 0xF00; // Vector
}

public static class C_RagdollManager {
    public const nint m_iCurrentMaxRagdollCount = 0x540; // int8
}

public static class C_RagdollProp {
    public const nint m_ragPos = 0xE88; // C_NetworkUtlVectorBase< Vector >
    public const nint m_ragAngles = 0xEA0; // C_NetworkUtlVectorBase< QAngle >
    public const nint m_flBlendWeight = 0xEB8; // float32
    public const nint m_hRagdollSource = 0xEBC; // CHandle< C_BaseEntity >
    public const nint m_iEyeAttachment = 0xEC0; // AttachmentHandle_t
    public const nint m_flBlendWeightCurrent = 0xEC4; // float32
    public const nint m_parentPhysicsBoneIndices = 0xEC8; // CUtlVector< int32 >
    public const nint m_worldSpaceBoneComputationOrder = 0xEE0; // CUtlVector< int32 >
}

public static class C_RagdollPropAttached {
    public const nint m_boneIndexAttached = 0xEF8; // uint32
    public const nint m_ragdollAttachedObjectIndex = 0xEFC; // uint32
    public const nint m_attachmentPointBoneSpace = 0xF00; // Vector
    public const nint m_attachmentPointRagdollSpace = 0xF0C; // Vector
    public const nint m_vecOffset = 0xF18; // Vector
    public const nint m_parentTime = 0xF24; // float32
    public const nint m_bHasParent = 0xF28; // bool
}

public static class C_RectLight {
    public const nint m_bShowLight = 0xF08; // bool
}

public static class C_RetakeGameRules {
    public const nint m_nMatchSeed = 0xF8; // int32
    public const nint m_bBlockersPresent = 0xFC; // bool
    public const nint m_bRoundInProgress = 0xFD; // bool
    public const nint m_iFirstSecondHalfRound = 0x100; // int32
    public const nint m_iBombSite = 0x104; // int32
}

public static class C_RopeKeyframe {
    public const nint m_LinksTouchingSomething = 0xCC8; // CBitVec< 10 >
    public const nint m_nLinksTouchingSomething = 0xCCC; // int32
    public const nint m_bApplyWind = 0xCD0; // bool
    public const nint m_fPrevLockedPoints = 0xCD4; // int32
    public const nint m_iForcePointMoveCounter = 0xCD8; // int32
    public const nint m_bPrevEndPointPos = 0xCDC; // bool[2]
    public const nint m_vPrevEndPointPos = 0xCE0; // Vector[2]
    public const nint m_flCurScroll = 0xCF8; // float32
    public const nint m_flScrollSpeed = 0xCFC; // float32
    public const nint m_RopeFlags = 0xD00; // uint16
    public const nint m_iRopeMaterialModelIndex = 0xD08; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    public const nint m_LightValues = 0xF80; // Vector[10]
    public const nint m_nSegments = 0xFF8; // uint8
    public const nint m_hStartPoint = 0xFFC; // CHandle< C_BaseEntity >
    public const nint m_hEndPoint = 0x1000; // CHandle< C_BaseEntity >
    public const nint m_iStartAttachment = 0x1004; // AttachmentHandle_t
    public const nint m_iEndAttachment = 0x1005; // AttachmentHandle_t
    public const nint m_Subdiv = 0x1006; // uint8
    public const nint m_RopeLength = 0x1008; // int16
    public const nint m_Slack = 0x100A; // int16
    public const nint m_TextureScale = 0x100C; // float32
    public const nint m_fLockedPoints = 0x1010; // uint8
    public const nint m_nChangeCount = 0x1011; // uint8
    public const nint m_Width = 0x1014; // float32
    public const nint m_PhysicsDelegate = 0x1018; // C_RopeKeyframe::CPhysicsDelegate
    public const nint m_hMaterial = 0x1028; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    public const nint m_TextureHeight = 0x1030; // int32
    public const nint m_vecImpulse = 0x1034; // Vector
    public const nint m_vecPreviousImpulse = 0x1040; // Vector
    public const nint m_flCurrentGustTimer = 0x104C; // float32
    public const nint m_flCurrentGustLifetime = 0x1050; // float32
    public const nint m_flTimeToNextGust = 0x1054; // float32
    public const nint m_vWindDir = 0x1058; // Vector
    public const nint m_vColorMod = 0x1064; // Vector
    public const nint m_vCachedEndPointAttachmentPos = 0x1070; // Vector[2]
    public const nint m_vCachedEndPointAttachmentAngle = 0x1088; // QAngle[2]
    public const nint m_bConstrainBetweenEndpoints = 0x10A0; // bool
    public const nint m_bEndPointAttachmentPositionsDirty = 0x0; // bitfield:1
    public const nint m_bEndPointAttachmentAnglesDirty = 0x0; // bitfield:1
    public const nint m_bNewDataThisFrame = 0x0; // bitfield:1
    public const nint m_bPhysicsInitted = 0x0; // bitfield:1
}

public static class C_RopeKeyframe_CPhysicsDelegate {
    public const nint m_pKeyframe = 0x8; // C_RopeKeyframe*
}

public static class C_SceneEntity {
    public const nint m_bIsPlayingBack = 0x548; // bool
    public const nint m_bPaused = 0x549; // bool
    public const nint m_bMultiplayer = 0x54A; // bool
    public const nint m_bAutogenerated = 0x54B; // bool
    public const nint m_flForceClientTime = 0x54C; // float32
    public const nint m_nSceneStringIndex = 0x550; // uint16
    public const nint m_bClientOnly = 0x552; // bool
    public const nint m_hOwner = 0x554; // CHandle< C_BaseFlex >
    public const nint m_hActorList = 0x558; // C_NetworkUtlVectorBase< CHandle< C_BaseFlex > >
    public const nint m_bWasPlaying = 0x570; // bool
    public const nint m_QueuedEvents = 0x580; // CUtlVector< C_SceneEntity::QueuedEvents_t >
    public const nint m_flCurrentTime = 0x598; // float32
}

public static class C_SceneEntity_QueuedEvents_t {
    public const nint starttime = 0x0; // float32
}

public static class C_ShatterGlassShardPhysics {
    public const nint m_ShardDesc = 0xFE0; // shard_model_desc_t
}

public static class C_SkyCamera {
    public const nint m_skyboxData = 0x540; // sky3dparams_t
    public const nint m_skyboxSlotToken = 0x5D0; // CUtlStringToken
    public const nint m_bUseAngles = 0x5D4; // bool
    public const nint m_pNext = 0x5D8; // C_SkyCamera*
}

public static class C_SmokeGrenadeProjectile {
    public const nint m_nSmokeEffectTickBegin = 0x10F8; // int32
    public const nint m_bDidSmokeEffect = 0x10FC; // bool
    public const nint m_nRandomSeed = 0x1100; // int32
    public const nint m_vSmokeColor = 0x1104; // Vector
    public const nint m_vSmokeDetonationPos = 0x1110; // Vector
    public const nint m_VoxelFrameData = 0x1120; // CUtlVector< uint8 >
    public const nint m_bSmokeVolumeDataReceived = 0x1138; // bool
    public const nint m_bSmokeEffectSpawned = 0x1139; // bool
}

public static class C_SoundAreaEntityBase {
    public const nint m_bDisabled = 0x540; // bool
    public const nint m_bWasEnabled = 0x548; // bool
    public const nint m_iszSoundAreaType = 0x550; // CUtlSymbolLarge
    public const nint m_vPos = 0x558; // Vector
}

public static class C_SoundAreaEntityOrientedBox {
    public const nint m_vMin = 0x568; // Vector
    public const nint m_vMax = 0x574; // Vector
}

public static class C_SoundAreaEntitySphere {
    public const nint m_flRadius = 0x568; // float32
}

public static class C_SoundOpvarSetPointBase {
    public const nint m_iszStackName = 0x540; // CUtlSymbolLarge
    public const nint m_iszOperatorName = 0x548; // CUtlSymbolLarge
    public const nint m_iszOpvarName = 0x550; // CUtlSymbolLarge
    public const nint m_iOpvarIndex = 0x558; // int32
    public const nint m_bUseAutoCompare = 0x55C; // bool
}

public static class C_SpotlightEnd {
    public const nint m_flLightScale = 0xCC0; // float32
    public const nint m_Radius = 0xCC4; // float32
}

public static class C_Sprite {
    public const nint m_hSpriteMaterial = 0xCD8; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    public const nint m_hAttachedToEntity = 0xCE0; // CHandle< C_BaseEntity >
    public const nint m_nAttachment = 0xCE4; // AttachmentHandle_t
    public const nint m_flSpriteFramerate = 0xCE8; // float32
    public const nint m_flFrame = 0xCEC; // float32
    public const nint m_flDieTime = 0xCF0; // GameTime_t
    public const nint m_nBrightness = 0xD00; // uint32
    public const nint m_flBrightnessDuration = 0xD04; // float32
    public const nint m_flSpriteScale = 0xD08; // float32
    public const nint m_flScaleDuration = 0xD0C; // float32
    public const nint m_bWorldSpaceScale = 0xD10; // bool
    public const nint m_flGlowProxySize = 0xD14; // float32
    public const nint m_flHDRColorScale = 0xD18; // float32
    public const nint m_flLastTime = 0xD1C; // GameTime_t
    public const nint m_flMaxFrame = 0xD20; // float32
    public const nint m_flStartScale = 0xD24; // float32
    public const nint m_flDestScale = 0xD28; // float32
    public const nint m_flScaleTimeStart = 0xD2C; // GameTime_t
    public const nint m_nStartBrightness = 0xD30; // int32
    public const nint m_nDestBrightness = 0xD34; // int32
    public const nint m_flBrightnessTimeStart = 0xD38; // GameTime_t
    public const nint m_hOldSpriteMaterial = 0xD40; // CWeakHandle< InfoForResourceTypeIMaterial2 >
    public const nint m_nSpriteWidth = 0xDE8; // int32
    public const nint m_nSpriteHeight = 0xDEC; // int32
}

public static class C_Sun {
    public const nint m_fxSSSunFlareEffectIndex = 0xCC0; // ParticleIndex_t
    public const nint m_fxSunFlareEffectIndex = 0xCC4; // ParticleIndex_t
    public const nint m_fdistNormalize = 0xCC8; // float32
    public const nint m_vSunPos = 0xCCC; // Vector
    public const nint m_vDirection = 0xCD8; // Vector
    public const nint m_iszEffectName = 0xCE8; // CUtlSymbolLarge
    public const nint m_iszSSEffectName = 0xCF0; // CUtlSymbolLarge
    public const nint m_clrOverlay = 0xCF8; // Color
    public const nint m_bOn = 0xCFC; // bool
    public const nint m_bmaxColor = 0xCFD; // bool
    public const nint m_flSize = 0xD00; // float32
    public const nint m_flHazeScale = 0xD04; // float32
    public const nint m_flRotation = 0xD08; // float32
    public const nint m_flHDRColorScale = 0xD0C; // float32
    public const nint m_flAlphaHaze = 0xD10; // float32
    public const nint m_flAlphaScale = 0xD14; // float32
    public const nint m_flAlphaHdr = 0xD18; // float32
    public const nint m_flFarZScale = 0xD1C; // float32
}

public static class C_SunGlowOverlay {
    public const nint m_bModulateByDot = 0xD0; // bool
}

public static class C_Team {
    public const nint m_aPlayerControllers = 0x540; // C_NetworkUtlVectorBase< CHandle< CBasePlayerController > >
    public const nint m_aPlayers = 0x558; // C_NetworkUtlVectorBase< CHandle< C_BasePlayerPawn > >
    public const nint m_iScore = 0x570; // int32
    public const nint m_szTeamname = 0x574; // char[129]
}

public static class C_TeamRoundTimer {
    public const nint m_bTimerPaused = 0x540; // bool
    public const nint m_flTimeRemaining = 0x544; // float32
    public const nint m_flTimerEndTime = 0x548; // GameTime_t
    public const nint m_bIsDisabled = 0x54C; // bool
    public const nint m_bShowInHUD = 0x54D; // bool
    public const nint m_nTimerLength = 0x550; // int32
    public const nint m_nTimerInitialLength = 0x554; // int32
    public const nint m_nTimerMaxLength = 0x558; // int32
    public const nint m_bAutoCountdown = 0x55C; // bool
    public const nint m_nSetupTimeLength = 0x560; // int32
    public const nint m_nState = 0x564; // int32
    public const nint m_bStartPaused = 0x568; // bool
    public const nint m_bInCaptureWatchState = 0x569; // bool
    public const nint m_flTotalTime = 0x56C; // float32
    public const nint m_bStopWatchTimer = 0x570; // bool
    public const nint m_bFireFinished = 0x571; // bool
    public const nint m_bFire5MinRemain = 0x572; // bool
    public const nint m_bFire4MinRemain = 0x573; // bool
    public const nint m_bFire3MinRemain = 0x574; // bool
    public const nint m_bFire2MinRemain = 0x575; // bool
    public const nint m_bFire1MinRemain = 0x576; // bool
    public const nint m_bFire30SecRemain = 0x577; // bool
    public const nint m_bFire10SecRemain = 0x578; // bool
    public const nint m_bFire5SecRemain = 0x579; // bool
    public const nint m_bFire4SecRemain = 0x57A; // bool
    public const nint m_bFire3SecRemain = 0x57B; // bool
    public const nint m_bFire2SecRemain = 0x57C; // bool
    public const nint m_bFire1SecRemain = 0x57D; // bool
    public const nint m_nOldTimerLength = 0x580; // int32
    public const nint m_nOldTimerState = 0x584; // int32
}

public static class C_TextureBasedAnimatable {
    public const nint m_bLoop = 0xCC0; // bool
    public const nint m_flFPS = 0xCC4; // float32
    public const nint m_hPositionKeys = 0xCC8; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_hRotationKeys = 0xCD0; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_vAnimationBoundsMin = 0xCD8; // Vector
    public const nint m_vAnimationBoundsMax = 0xCE4; // Vector
    public const nint m_flStartTime = 0xCF0; // float32
    public const nint m_flStartFrame = 0xCF4; // float32
}

public static class C_TonemapController2 {
    public const nint m_flAutoExposureMin = 0x540; // float32
    public const nint m_flAutoExposureMax = 0x544; // float32
    public const nint m_flTonemapPercentTarget = 0x548; // float32
    public const nint m_flTonemapPercentBrightPixels = 0x54C; // float32
    public const nint m_flTonemapMinAvgLum = 0x550; // float32
    public const nint m_flExposureAdaptationSpeedUp = 0x554; // float32
    public const nint m_flExposureAdaptationSpeedDown = 0x558; // float32
    public const nint m_flTonemapEVSmoothingRange = 0x55C; // float32
}

public static class C_TriggerBuoyancy {
    public const nint m_BuoyancyHelper = 0xCC8; // CBuoyancyHelper
    public const nint m_flFluidDensity = 0xCE8; // float32
}

public static class C_ViewmodelWeapon {
    public const nint m_worldModel = 0xE80; // char*
}

public static class C_VoteController {
    public const nint m_iActiveIssueIndex = 0x550; // int32
    public const nint m_iOnlyTeamToVote = 0x554; // int32
    public const nint m_nVoteOptionCount = 0x558; // int32[5]
    public const nint m_nPotentialVotes = 0x56C; // int32
    public const nint m_bVotesDirty = 0x570; // bool
    public const nint m_bTypeDirty = 0x571; // bool
    public const nint m_bIsYesNoVote = 0x572; // bool
}

public static class C_WeaponBaseItem {
    public const nint m_SequenceCompleteTimer = 0x18E0; // CountdownTimer
    public const nint m_bRedraw = 0x18F8; // bool
}

public static class C_WeaponShield {
    public const nint m_flDisplayHealth = 0x1900; // float32
}

public static class C_WeaponTaser {
    public const nint m_fFireTime = 0x1900; // GameTime_t
}

public static class C_fogplayerparams_t {
    public const nint m_hCtrl = 0x8; // CHandle< C_FogController >
    public const nint m_flTransitionTime = 0xC; // float32
    public const nint m_OldColor = 0x10; // Color
    public const nint m_flOldStart = 0x14; // float32
    public const nint m_flOldEnd = 0x18; // float32
    public const nint m_flOldMaxDensity = 0x1C; // float32
    public const nint m_flOldHDRColorScale = 0x20; // float32
    public const nint m_flOldFarZ = 0x24; // float32
    public const nint m_NewColor = 0x28; // Color
    public const nint m_flNewStart = 0x2C; // float32
    public const nint m_flNewEnd = 0x30; // float32
    public const nint m_flNewMaxDensity = 0x34; // float32
    public const nint m_flNewHDRColorScale = 0x38; // float32
    public const nint m_flNewFarZ = 0x3C; // float32
}

public static class CompMatMutatorCondition_t {
    public const nint m_nMutatorCondition = 0x0; // CompMatPropertyMutatorConditionType_t
    public const nint m_strMutatorConditionContainerName = 0x8; // CUtlString
    public const nint m_strMutatorConditionContainerVarName = 0x10; // CUtlString
    public const nint m_strMutatorConditionContainerVarValue = 0x18; // CUtlString
    public const nint m_bPassWhenTrue = 0x20; // bool
}

public static class CompMatPropertyMutator_t {
    public const nint m_bEnabled = 0x0; // bool
    public const nint m_nMutatorCommandType = 0x4; // CompMatPropertyMutatorType_t
    public const nint m_strInitWith_Container = 0x8; // CUtlString
    public const nint m_strCopyProperty_InputContainerSrc = 0x10; // CUtlString
    public const nint m_strCopyProperty_InputContainerProperty = 0x18; // CUtlString
    public const nint m_strCopyProperty_TargetProperty = 0x20; // CUtlString
    public const nint m_strRandomRollInputVars_SeedInputVar = 0x28; // CUtlString
    public const nint m_vecRandomRollInputVars_InputVarsToRoll = 0x30; // CUtlVector< CUtlString >
    public const nint m_strCopyMatchingKeys_InputContainerSrc = 0x48; // CUtlString
    public const nint m_strCopyKeysWithSuffix_InputContainerSrc = 0x50; // CUtlString
    public const nint m_strCopyKeysWithSuffix_FindSuffix = 0x58; // CUtlString
    public const nint m_strCopyKeysWithSuffix_ReplaceSuffix = 0x60; // CUtlString
    public const nint m_nSetValue_Value = 0x68; // CompositeMaterialInputLooseVariable_t
    public const nint m_strGenerateTexture_TargetParam = 0x2D8; // CUtlString
    public const nint m_strGenerateTexture_InitialContainer = 0x2E0; // CUtlString
    public const nint m_nResolution = 0x2E8; // int32
    public const nint m_bIsScratchTarget = 0x2EC; // bool
    public const nint m_bSplatDebugInfo = 0x2ED; // bool
    public const nint m_bCaptureInRenderDoc = 0x2EE; // bool
    public const nint m_vecTexGenInstructions = 0x2F0; // CUtlVector< CompMatPropertyMutator_t >
    public const nint m_vecConditionalMutators = 0x308; // CUtlVector< CompMatPropertyMutator_t >
    public const nint m_strPopInputQueue_Container = 0x320; // CUtlString
    public const nint m_strDrawText_InputContainerSrc = 0x328; // CUtlString
    public const nint m_strDrawText_InputContainerProperty = 0x330; // CUtlString
    public const nint m_vecDrawText_Position = 0x338; // Vector2D
    public const nint m_colDrawText_Color = 0x340; // Color
    public const nint m_strDrawText_Font = 0x348; // CUtlString
    public const nint m_vecConditions = 0x350; // CUtlVector< CompMatMutatorCondition_t >
}

public static class CompositeMaterialAssemblyProcedure_t {
    public const nint m_vecCompMatIncludes = 0x0; // CUtlVector< CResourceName >
    public const nint m_vecMatchFilters = 0x18; // CUtlVector< CompositeMaterialMatchFilter_t >
    public const nint m_vecCompositeInputContainers = 0x30; // CUtlVector< CompositeMaterialInputContainer_t >
    public const nint m_vecPropertyMutators = 0x48; // CUtlVector< CompMatPropertyMutator_t >
}

public static class CompositeMaterialEditorPoint_t {
    public const nint m_ModelName = 0x0; // CResourceName
    public const nint m_nSequenceIndex = 0xE0; // int32
    public const nint m_flCycle = 0xE4; // float32
    public const nint m_KVModelStateChoices = 0xE8; // KeyValues3
    public const nint m_bEnableChildModel = 0xF8; // bool
    public const nint m_ChildModelName = 0x100; // CResourceName
    public const nint m_vecCompositeMaterialAssemblyProcedures = 0x1E0; // CUtlVector< CompositeMaterialAssemblyProcedure_t >
    public const nint m_vecCompositeMaterials = 0x1F8; // CUtlVector< CompositeMaterial_t >
}

public static class CompositeMaterialInputContainer_t {
    public const nint m_bEnabled = 0x0; // bool
    public const nint m_nCompositeMaterialInputContainerSourceType = 0x4; // CompositeMaterialInputContainerSourceType_t
    public const nint m_strSpecificContainerMaterial = 0x8; // CResourceName
    public const nint m_strAttrName = 0xE8; // CUtlString
    public const nint m_strAlias = 0xF0; // CUtlString
    public const nint m_vecLooseVariables = 0xF8; // CUtlVector< CompositeMaterialInputLooseVariable_t >
    public const nint m_strAttrNameForVar = 0x110; // CUtlString
    public const nint m_bExposeExternally = 0x118; // bool
}

public static class CompositeMaterialInputLooseVariable_t {
    public const nint m_strName = 0x0; // CUtlString
    public const nint m_bExposeExternally = 0x8; // bool
    public const nint m_strExposedFriendlyName = 0x10; // CUtlString
    public const nint m_strExposedFriendlyGroupName = 0x18; // CUtlString
    public const nint m_bExposedVariableIsFixedRange = 0x20; // bool
    public const nint m_strExposedVisibleWhenTrue = 0x28; // CUtlString
    public const nint m_strExposedHiddenWhenTrue = 0x30; // CUtlString
    public const nint m_nVariableType = 0x38; // CompositeMaterialInputLooseVariableType_t
    public const nint m_bValueBoolean = 0x3C; // bool
    public const nint m_nValueIntX = 0x40; // int32
    public const nint m_nValueIntY = 0x44; // int32
    public const nint m_nValueIntZ = 0x48; // int32
    public const nint m_nValueIntW = 0x4C; // int32
    public const nint m_bHasFloatBounds = 0x50; // bool
    public const nint m_flValueFloatX = 0x54; // float32
    public const nint m_flValueFloatX_Min = 0x58; // float32
    public const nint m_flValueFloatX_Max = 0x5C; // float32
    public const nint m_flValueFloatY = 0x60; // float32
    public const nint m_flValueFloatY_Min = 0x64; // float32
    public const nint m_flValueFloatY_Max = 0x68; // float32
    public const nint m_flValueFloatZ = 0x6C; // float32
    public const nint m_flValueFloatZ_Min = 0x70; // float32
    public const nint m_flValueFloatZ_Max = 0x74; // float32
    public const nint m_flValueFloatW = 0x78; // float32
    public const nint m_flValueFloatW_Min = 0x7C; // float32
    public const nint m_flValueFloatW_Max = 0x80; // float32
    public const nint m_cValueColor4 = 0x84; // Color
    public const nint m_nValueSystemVar = 0x88; // CompositeMaterialVarSystemVar_t
    public const nint m_strResourceMaterial = 0x90; // CResourceName
    public const nint m_strTextureContentAssetPath = 0x170; // CUtlString
    public const nint m_strTextureRuntimeResourcePath = 0x178; // CResourceName
    public const nint m_strTextureCompilationVtexTemplate = 0x258; // CUtlString
    public const nint m_nTextureType = 0x260; // CompositeMaterialInputTextureType_t
    public const nint m_strString = 0x268; // CUtlString
}

public static class CompositeMaterialMatchFilter_t {
    public const nint m_nCompositeMaterialMatchFilterType = 0x0; // CompositeMaterialMatchFilterType_t
    public const nint m_strMatchFilter = 0x8; // CUtlString
    public const nint m_strMatchValue = 0x10; // CUtlString
    public const nint m_bPassWhenTrue = 0x18; // bool
}

public static class CompositeMaterial_t {
    public const nint m_TargetKVs = 0x8; // KeyValues3
    public const nint m_PreGenerationKVs = 0x18; // KeyValues3
    public const nint m_FinalKVs = 0x28; // KeyValues3
    public const nint m_vecGeneratedTextures = 0x40; // CUtlVector< GeneratedTextureHandle_t >
}

public static class CountdownTimer {
    public const nint m_duration = 0x8; // float32
    public const nint m_timestamp = 0xC; // GameTime_t
    public const nint m_timescale = 0x10; // float32
    public const nint m_nWorldGroupId = 0x14; // WorldGroupId_t
}

public static class EngineCountdownTimer {
    public const nint m_duration = 0x8; // float32
    public const nint m_timestamp = 0xC; // float32
    public const nint m_timescale = 0x10; // float32
}

public static class EntityRenderAttribute_t {
    public const nint m_ID = 0x30; // CUtlStringToken
    public const nint m_Values = 0x34; // Vector4D
}

public static class EntitySpottedState_t {
    public const nint m_bSpotted = 0x8; // bool
    public const nint m_bSpottedByMask = 0xC; // uint32[2]
}

public static class GeneratedTextureHandle_t {
    public const nint m_strBitmapName = 0x0; // CUtlString
}

public static class IntervalTimer {
    public const nint m_timestamp = 0x8; // GameTime_t
    public const nint m_nWorldGroupId = 0xC; // WorldGroupId_t
}

public static class PhysicsRagdollPose_t {
    public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
    public const nint m_Transforms = 0x30; // C_NetworkUtlVectorBase< CTransform >
    public const nint m_hOwner = 0x48; // CHandle< C_BaseEntity >
    public const nint m_bDirty = 0x68; // bool
}

public static class SellbackPurchaseEntry_t {
    public const nint m_unDefIdx = 0x30; // uint16
    public const nint m_nCost = 0x34; // int32
    public const nint m_nPrevArmor = 0x38; // int32
    public const nint m_bPrevHelmet = 0x3C; // bool
    public const nint m_hItem = 0x40; // CEntityHandle
}

public static class TimedEvent {
    public const nint m_TimeBetweenEvents = 0x0; // float32
    public const nint m_fNextEvent = 0x4; // float32
}

public static class VPhysicsCollisionAttribute_t {
    public const nint m_nInteractsAs = 0x8; // uint64
    public const nint m_nInteractsWith = 0x10; // uint64
    public const nint m_nInteractsExclude = 0x18; // uint64
    public const nint m_nEntityId = 0x20; // uint32
    public const nint m_nOwnerId = 0x24; // uint32
    public const nint m_nHierarchyId = 0x28; // uint16
    public const nint m_nCollisionGroup = 0x2A; // uint8
    public const nint m_nCollisionFunctionMask = 0x2B; // uint8
}

public static class ViewAngleServerChange_t {
    public const nint nType = 0x30; // FixAngleSet_t
    public const nint qAngle = 0x34; // QAngle
    public const nint nIndex = 0x40; // uint32
}

public static class WeaponPurchaseCount_t {
    public const nint m_nItemDefIndex = 0x30; // uint16
    public const nint m_nCount = 0x32; // uint16
}

public static class WeaponPurchaseTracker_t {
    public const nint m_weaponPurchases = 0x8; // C_UtlVectorEmbeddedNetworkVar< WeaponPurchaseCount_t >
}

public static class audioparams_t {
    public const nint localSound = 0x8; // Vector[8]
    public const nint soundscapeIndex = 0x68; // int32
    public const nint localBits = 0x6C; // uint8
    public const nint soundscapeEntityListIndex = 0x70; // int32
    public const nint soundEventHash = 0x74; // uint32
}

public static class fogparams_t {
    public const nint dirPrimary = 0x8; // Vector
    public const nint colorPrimary = 0x14; // Color
    public const nint colorSecondary = 0x18; // Color
    public const nint colorPrimaryLerpTo = 0x1C; // Color
    public const nint colorSecondaryLerpTo = 0x20; // Color
    public const nint start = 0x24; // float32
    public const nint end = 0x28; // float32
    public const nint farz = 0x2C; // float32
    public const nint maxdensity = 0x30; // float32
    public const nint exponent = 0x34; // float32
    public const nint HDRColorScale = 0x38; // float32
    public const nint skyboxFogFactor = 0x3C; // float32
    public const nint skyboxFogFactorLerpTo = 0x40; // float32
    public const nint startLerpTo = 0x44; // float32
    public const nint endLerpTo = 0x48; // float32
    public const nint maxdensityLerpTo = 0x4C; // float32
    public const nint lerptime = 0x50; // GameTime_t
    public const nint duration = 0x54; // float32
    public const nint blendtobackground = 0x58; // float32
    public const nint scattering = 0x5C; // float32
    public const nint locallightscale = 0x60; // float32
    public const nint enable = 0x64; // bool
    public const nint blend = 0x65; // bool
    public const nint m_bNoReflectionFog = 0x66; // bool
    public const nint m_bPadding = 0x67; // bool
}

public static class shard_model_desc_t {
    public const nint m_nModelID = 0x8; // int32
    public const nint m_hMaterial = 0x10; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    public const nint m_solid = 0x18; // ShardSolid_t
    public const nint m_ShatterPanelMode = 0x19; // ShatterPanelMode
    public const nint m_vecPanelSize = 0x1C; // Vector2D
    public const nint m_vecStressPositionA = 0x24; // Vector2D
    public const nint m_vecStressPositionB = 0x2C; // Vector2D
    public const nint m_vecPanelVertices = 0x38; // C_NetworkUtlVectorBase< Vector2D >
    public const nint m_flGlassHalfThickness = 0x50; // float32
    public const nint m_bHasParent = 0x54; // bool
    public const nint m_bParentFrozen = 0x55; // bool
    public const nint m_SurfacePropStringToken = 0x58; // CUtlStringToken
    public const nint m_LightGroup = 0x5C; // CUtlStringToken
}

public static class sky3dparams_t {
    public const nint scale = 0x8; // int16
    public const nint origin = 0xC; // Vector
    public const nint bClip3DSkyBoxNearToWorldFar = 0x18; // bool
    public const nint flClip3DSkyBoxNearToWorldFarOffset = 0x1C; // float32
    public const nint fog = 0x20; // fogparams_t
    public const nint m_nWorldGroupID = 0x88; // WorldGroupId_t
}