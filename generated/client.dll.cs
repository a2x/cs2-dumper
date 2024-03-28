/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 23 Mar 2024 05:02:04 +0000
 */

public static class ActiveModelConfig_t {
    public const nint m_Handle = 0x28; // ModelConfigHandle_t
    public const nint m_Name = 0x30; // CUtlSymbolLarge
    public const nint m_AssociatedEntities = 0x38; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
    public const nint m_AssociatedEntityNames = 0x50; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
}

public static class CAnimGraphNetworkedVariables {
    public const nint m_PredNetBoolVariables = 0x8; // C_NetworkUtlVectorBase<uint32_t>
    public const nint m_PredNetByteVariables = 0x20; // C_NetworkUtlVectorBase<uint8_t>
    public const nint m_PredNetUInt16Variables = 0x38; // C_NetworkUtlVectorBase<uint16_t>
    public const nint m_PredNetIntVariables = 0x50; // C_NetworkUtlVectorBase<int32_t>
    public const nint m_PredNetUInt32Variables = 0x68; // C_NetworkUtlVectorBase<uint32_t>
    public const nint m_PredNetUInt64Variables = 0x80; // C_NetworkUtlVectorBase<uint64_t>
    public const nint m_PredNetFloatVariables = 0x98; // C_NetworkUtlVectorBase<float>
    public const nint m_PredNetVectorVariables = 0xB0; // C_NetworkUtlVectorBase<Vector>
    public const nint m_PredNetQuaternionVariables = 0xC8; // C_NetworkUtlVectorBase<Quaternion>
    public const nint m_PredNetGlobalSymbolVariables = 0xE0; // C_NetworkUtlVectorBase<CGlobalSymbol>
    public const nint m_OwnerOnlyPredNetBoolVariables = 0xF8; // C_NetworkUtlVectorBase<uint32_t>
    public const nint m_OwnerOnlyPredNetByteVariables = 0x110; // C_NetworkUtlVectorBase<uint8_t>
    public const nint m_OwnerOnlyPredNetUInt16Variables = 0x128; // C_NetworkUtlVectorBase<uint16_t>
    public const nint m_OwnerOnlyPredNetIntVariables = 0x140; // C_NetworkUtlVectorBase<int32_t>
    public const nint m_OwnerOnlyPredNetUInt32Variables = 0x158; // C_NetworkUtlVectorBase<uint32_t>
    public const nint m_OwnerOnlyPredNetUInt64Variables = 0x170; // C_NetworkUtlVectorBase<uint64_t>
    public const nint m_OwnerOnlyPredNetFloatVariables = 0x188; // C_NetworkUtlVectorBase<float>
    public const nint m_OwnerOnlyPredNetVectorVariables = 0x1A0; // C_NetworkUtlVectorBase<Vector>
    public const nint m_OwnerOnlyPredNetQuaternionVariables = 0x1B8; // C_NetworkUtlVectorBase<Quaternion>
    public const nint m_OwnerOnlyPredNetGlobalSymbolVariables = 0x1D0; // C_NetworkUtlVectorBase<CGlobalSymbol>
    public const nint m_nBoolVariablesCount = 0x1E8; // int32_t
    public const nint m_nOwnerOnlyBoolVariablesCount = 0x1EC; // int32_t
    public const nint m_nRandomSeedOffset = 0x1F0; // int32_t
    public const nint m_flLastTeleportTime = 0x1F4; // float
}

public static class CAttributeList {
    public const nint m_Attributes = 0x8; // C_UtlVectorEmbeddedNetworkVar<CEconItemAttribute>
    public const nint m_pManager = 0x58; // CAttributeManager*
}

public static class CAttributeManager {
    public const nint m_Providers = 0x8; // CUtlVector<CHandle<C_BaseEntity>>
    public const nint m_iReapplyProvisionParity = 0x20; // int32_t
    public const nint m_hOuter = 0x24; // CHandle<C_BaseEntity>
    public const nint m_bPreventLoopback = 0x28; // bool
    public const nint m_ProviderType = 0x2C; // attributeprovidertypes_t
    public const nint m_CachedResults = 0x30; // CUtlVector<CAttributeManager::cached_attribute_float_t>
}

public static class CAttributeManager_cached_attribute_float_t {
    public const nint flIn = 0x0; // float
    public const nint iAttribHook = 0x8; // CUtlSymbolLarge
    public const nint flOut = 0x10; // float
}

public static class CBaseAnimGraph { // C_BaseModelEntity
    public const nint m_bInitiallyPopulateInterpHistory = 0xD48; // bool
    public const nint m_bSuppressAnimEventSounds = 0xD4A; // bool
    public const nint m_bAnimGraphUpdateEnabled = 0xD58; // bool
    public const nint m_flMaxSlopeDistance = 0xD5C; // float
    public const nint m_vLastSlopeCheckPos = 0xD60; // Vector
    public const nint m_bAnimationUpdateScheduled = 0xD6C; // bool
    public const nint m_vecForce = 0xD70; // Vector
    public const nint m_nForceBone = 0xD7C; // int32_t
    public const nint m_pClientsideRagdoll = 0xD80; // CBaseAnimGraph*
    public const nint m_bBuiltRagdoll = 0xD88; // bool
    public const nint m_pRagdollPose = 0xDA0; // PhysicsRagdollPose_t*
    public const nint m_bClientRagdoll = 0xDA8; // bool
    public const nint m_bHasAnimatedMaterialAttributes = 0xDB8; // bool
}

public static class CBaseAnimGraphController { // CSkeletonAnimationController
    public const nint m_animGraphNetworkedVars = 0x18; // CAnimGraphNetworkedVariables
    public const nint m_bSequenceFinished = 0x14A8; // bool
    public const nint m_flSoundSyncTime = 0x14AC; // float
    public const nint m_hSequence = 0x14B0; // HSequence
    public const nint m_flSeqStartTime = 0x14B4; // GameTime_t
    public const nint m_flSeqFixedCycle = 0x14B8; // float
    public const nint m_nAnimLoopMode = 0x14BC; // AnimLoopMode_t
    public const nint m_flPlaybackRate = 0x14C0; // CNetworkedQuantizedFloat
    public const nint m_nNotifyState = 0x14CC; // SequenceFinishNotifyState_t
    public const nint m_bNetworkedAnimationInputsChanged = 0x14CE; // bool
    public const nint m_bNetworkedSequenceChanged = 0x14CF; // bool
    public const nint m_bLastUpdateSkipped = 0x14D0; // bool
    public const nint m_flPrevAnimUpdateTime = 0x14D4; // GameTime_t
}

public static class CBasePlayerController { // C_BaseEntity
    public const nint m_nFinalPredictedTick = 0x558; // int32_t
    public const nint m_CommandContext = 0x560; // C_CommandContext
    public const nint m_nInButtonsWhichAreToggles = 0x5F8; // uint64_t
    public const nint m_nTickBase = 0x600; // uint32_t
    public const nint m_hPawn = 0x604; // CHandle<C_BasePlayerPawn>
    public const nint m_hPredictedPawn = 0x608; // CHandle<C_BasePlayerPawn>
    public const nint m_nSplitScreenSlot = 0x60C; // CSplitScreenSlot
    public const nint m_hSplitOwner = 0x610; // CHandle<CBasePlayerController>
    public const nint m_hSplitScreenPlayers = 0x618; // CUtlVector<CHandle<CBasePlayerController>>
    public const nint m_bIsHLTV = 0x630; // bool
    public const nint m_iConnected = 0x634; // PlayerConnectedState
    public const nint m_iszPlayerName = 0x638; // char[128]
    public const nint m_steamID = 0x6C0; // uint64_t
    public const nint m_bIsLocalPlayerController = 0x6C8; // bool
    public const nint m_iDesiredFOV = 0x6CC; // uint32_t
}

public static class CBasePlayerControllerAPI {
}

public static class CBasePlayerVData { // CEntitySubclassVDataBase
    public const nint m_sModelName = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    public const nint m_flHeadDamageMultiplier = 0x108; // CSkillFloat
    public const nint m_flChestDamageMultiplier = 0x118; // CSkillFloat
    public const nint m_flStomachDamageMultiplier = 0x128; // CSkillFloat
    public const nint m_flArmDamageMultiplier = 0x138; // CSkillFloat
    public const nint m_flLegDamageMultiplier = 0x148; // CSkillFloat
    public const nint m_flHoldBreathTime = 0x158; // float
    public const nint m_flDrowningDamageInterval = 0x15C; // float
    public const nint m_nDrowningDamageInitial = 0x160; // int32_t
    public const nint m_nDrowningDamageMax = 0x164; // int32_t
    public const nint m_nWaterSpeed = 0x168; // int32_t
    public const nint m_flUseRange = 0x16C; // float
    public const nint m_flUseAngleTolerance = 0x170; // float
    public const nint m_flCrouchTime = 0x174; // float
}

public static class CBasePlayerWeaponVData { // CEntitySubclassVDataBase
    public const nint m_szWorldModel = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    public const nint m_bBuiltRightHanded = 0x108; // bool
    public const nint m_bAllowFlipping = 0x109; // bool
    public const nint m_sMuzzleAttachment = 0x110; // CUtlString
    public const nint m_szMuzzleFlashParticle = 0x118; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    public const nint m_iFlags = 0x1F8; // ItemFlagTypes_t
    public const nint m_nPrimaryAmmoType = 0x1F9; // AmmoIndex_t
    public const nint m_nSecondaryAmmoType = 0x1FA; // AmmoIndex_t
    public const nint m_iMaxClip1 = 0x1FC; // int32_t
    public const nint m_iMaxClip2 = 0x200; // int32_t
    public const nint m_iDefaultClip1 = 0x204; // int32_t
    public const nint m_iDefaultClip2 = 0x208; // int32_t
    public const nint m_iWeight = 0x20C; // int32_t
    public const nint m_bAutoSwitchTo = 0x210; // bool
    public const nint m_bAutoSwitchFrom = 0x211; // bool
    public const nint m_iRumbleEffect = 0x214; // RumbleEffect_t
    public const nint m_bLinkedCooldowns = 0x218; // bool
    public const nint m_aShootSounds = 0x220; // CUtlMap<WeaponSound_t,CSoundEventName>
    public const nint m_iSlot = 0x240; // int32_t
    public const nint m_iPosition = 0x244; // int32_t
}

public static class CBaseProp { // CBaseAnimGraph
    public const nint m_bModelOverrodeBlockLOS = 0xED8; // bool
    public const nint m_iShapeType = 0xEDC; // int32_t
    public const nint m_bConformToCollisionBounds = 0xEE0; // bool
    public const nint m_mPreferredCatchTransform = 0xEE4; // matrix3x4_t
}

public static class CBodyComponent { // CEntityComponent
    public const nint m_pSceneNode = 0x8; // CGameSceneNode*
    public const nint __m_pChainEntity = 0x20; // CNetworkVarChainer
}

public static class CBodyComponentBaseAnimGraph { // CBodyComponentSkeletonInstance
    public const nint m_animationController = 0x460; // CBaseAnimGraphController
    public const nint __m_pChainEntity = 0x1C28; // CNetworkVarChainer
}

public static class CBodyComponentBaseModelEntity { // CBodyComponentSkeletonInstance
    public const nint __m_pChainEntity = 0x460; // CNetworkVarChainer
}

public static class CBodyComponentPoint { // CBodyComponent
    public const nint m_sceneNode = 0x50; // CGameSceneNode
    public const nint __m_pChainEntity = 0x1A0; // CNetworkVarChainer
}

public static class CBodyComponentSkeletonInstance { // CBodyComponent
    public const nint m_skeletonInstance = 0x50; // CSkeletonInstance
    public const nint __m_pChainEntity = 0x430; // CNetworkVarChainer
}

public static class CBombTarget { // C_BaseTrigger
    public const nint m_bBombPlantedHere = 0xCD8; // bool
}

public static class CBreachCharge { // C_CSWeaponBase
}

public static class CBreachChargeProjectile { // C_BaseGrenade
}

public static class CBumpMine { // C_CSWeaponBase
}

public static class CBumpMineProjectile { // C_BaseGrenade
}

public static class CBuoyancyHelper {
    public const nint m_flFluidDensity = 0x18; // float
}

public static class CCSArmsRaceScript { // CCSGameModeScript
    public const nint m_pOuter = 0xD8; // CCSGameModeRules_ArmsRace*
}

public static class CCSDeathmatchScript { // CCSGameModeScript
    public const nint m_pOuter = 0xD8; // CCSGameModeRules_Deathmatch*
}

public static class CCSGO_WingmanIntroCharacterPosition { // C_CSGO_TeamIntroCharacterPosition
}

public static class CCSGO_WingmanIntroCounterTerroristPosition { // CCSGO_WingmanIntroCharacterPosition
}

public static class CCSGO_WingmanIntroTerroristPosition { // CCSGO_WingmanIntroCharacterPosition
}

public static class CCSGameModeRules {
    public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
}

public static class CCSGameModeRules_ArmsRace { // CCSGameModeRules
    public const nint m_WeaponSequence = 0x38; // C_NetworkUtlVectorBase<CUtlString>
}

public static class CCSGameModeRules_Deathmatch { // CCSGameModeRules
    public const nint m_flDMBonusStartTime = 0x38; // GameTime_t
    public const nint m_flDMBonusTimeLength = 0x3C; // float
    public const nint m_nDMBonusWeaponLoadoutSlot = 0x40; // int16_t
}

public static class CCSGameModeRules_Noop { // CCSGameModeRules
}

public static class CCSGameModeScript { // CBasePulseGraphInstance
}

public static class CCSObserver_CameraServices { // CCSPlayerBase_CameraServices
}

public static class CCSObserver_MovementServices { // CPlayer_MovementServices
}

public static class CCSObserver_ObserverServices { // CPlayer_ObserverServices
    public const nint m_hLastObserverTarget = 0x58; // CEntityHandle
    public const nint m_vecObserverInterpolateOffset = 0x5C; // Vector
    public const nint m_vecObserverInterpStartPos = 0x68; // Vector
    public const nint m_flObsInterp_PathLength = 0x74; // float
    public const nint m_qObsInterp_OrientationStart = 0x80; // Quaternion
    public const nint m_qObsInterp_OrientationTravelDir = 0x90; // Quaternion
    public const nint m_obsInterpState = 0xA0; // ObserverInterpState_t
    public const nint m_bObserverInterpolationNeedsDeferredSetup = 0xA4; // bool
}

public static class CCSObserver_UseServices { // CPlayer_UseServices
}

public static class CCSObserver_ViewModelServices { // CPlayer_ViewModelServices
}

public static class CCSPlayerBase_CameraServices { // CPlayer_CameraServices
    public const nint m_iFOV = 0x210; // uint32_t
    public const nint m_iFOVStart = 0x214; // uint32_t
    public const nint m_flFOVTime = 0x218; // GameTime_t
    public const nint m_flFOVRate = 0x21C; // float
    public const nint m_hZoomOwner = 0x220; // CHandle<C_BaseEntity>
    public const nint m_flLastShotFOV = 0x224; // float
}

public static class CCSPlayerController { // CBasePlayerController
    public const nint m_pInGameMoneyServices = 0x6F8; // CCSPlayerController_InGameMoneyServices*
    public const nint m_pInventoryServices = 0x700; // CCSPlayerController_InventoryServices*
    public const nint m_pActionTrackingServices = 0x708; // CCSPlayerController_ActionTrackingServices*
    public const nint m_pDamageServices = 0x710; // CCSPlayerController_DamageServices*
    public const nint m_iPing = 0x718; // uint32_t
    public const nint m_bHasCommunicationAbuseMute = 0x71C; // bool
    public const nint m_szCrosshairCodes = 0x720; // CUtlSymbolLarge
    public const nint m_iPendingTeamNum = 0x728; // uint8_t
    public const nint m_flForceTeamTime = 0x72C; // GameTime_t
    public const nint m_iCompTeammateColor = 0x730; // int32_t
    public const nint m_bEverPlayedOnTeam = 0x734; // bool
    public const nint m_flPreviousForceJoinTeamTime = 0x738; // GameTime_t
    public const nint m_szClan = 0x740; // CUtlSymbolLarge
    public const nint m_sSanitizedPlayerName = 0x748; // CUtlString
    public const nint m_iCoachingTeam = 0x750; // int32_t
    public const nint m_nPlayerDominated = 0x758; // uint64_t
    public const nint m_nPlayerDominatingMe = 0x760; // uint64_t
    public const nint m_iCompetitiveRanking = 0x768; // int32_t
    public const nint m_iCompetitiveWins = 0x76C; // int32_t
    public const nint m_iCompetitiveRankType = 0x770; // int8_t
    public const nint m_iCompetitiveRankingPredicted_Win = 0x774; // int32_t
    public const nint m_iCompetitiveRankingPredicted_Loss = 0x778; // int32_t
    public const nint m_iCompetitiveRankingPredicted_Tie = 0x77C; // int32_t
    public const nint m_nEndMatchNextMapVote = 0x780; // int32_t
    public const nint m_unActiveQuestId = 0x784; // uint16_t
    public const nint m_nQuestProgressReason = 0x788; // QuestProgress::Reason
    public const nint m_unPlayerTvControlFlags = 0x78C; // uint32_t
    public const nint m_iDraftIndex = 0x7B8; // int32_t
    public const nint m_msQueuedModeDisconnectionTimestamp = 0x7BC; // uint32_t
    public const nint m_uiAbandonRecordedReason = 0x7C0; // uint32_t
    public const nint m_bCannotBeKicked = 0x7C4; // bool
    public const nint m_bEverFullyConnected = 0x7C5; // bool
    public const nint m_bAbandonAllowsSurrender = 0x7C6; // bool
    public const nint m_bAbandonOffersInstantSurrender = 0x7C7; // bool
    public const nint m_bDisconnection1MinWarningPrinted = 0x7C8; // bool
    public const nint m_bScoreReported = 0x7C9; // bool
    public const nint m_nDisconnectionTick = 0x7CC; // int32_t
    public const nint m_bControllingBot = 0x7D8; // bool
    public const nint m_bHasControlledBotThisRound = 0x7D9; // bool
    public const nint m_bHasBeenControlledByPlayerThisRound = 0x7DA; // bool
    public const nint m_nBotsControlledThisRound = 0x7DC; // int32_t
    public const nint m_bCanControlObservedBot = 0x7E0; // bool
    public const nint m_hPlayerPawn = 0x7E4; // CHandle<C_CSPlayerPawn>
    public const nint m_hObserverPawn = 0x7E8; // CHandle<C_CSObserverPawn>
    public const nint m_bPawnIsAlive = 0x7EC; // bool
    public const nint m_iPawnHealth = 0x7F0; // uint32_t
    public const nint m_iPawnArmor = 0x7F4; // int32_t
    public const nint m_bPawnHasDefuser = 0x7F8; // bool
    public const nint m_bPawnHasHelmet = 0x7F9; // bool
    public const nint m_nPawnCharacterDefIndex = 0x7FA; // uint16_t
    public const nint m_iPawnLifetimeStart = 0x7FC; // int32_t
    public const nint m_iPawnLifetimeEnd = 0x800; // int32_t
    public const nint m_iPawnBotDifficulty = 0x804; // int32_t
    public const nint m_hOriginalControllerOfCurrentPawn = 0x808; // CHandle<CCSPlayerController>
    public const nint m_iScore = 0x80C; // int32_t
    public const nint m_vecKills = 0x810; // C_NetworkUtlVectorBase<EKillTypes_t>
    public const nint m_bMvpNoMusic = 0x828; // bool
    public const nint m_eMvpReason = 0x82C; // int32_t
    public const nint m_iMusicKitID = 0x830; // int32_t
    public const nint m_iMusicKitMVPs = 0x834; // int32_t
    public const nint m_iMVPs = 0x838; // int32_t
    public const nint m_bIsPlayerNameDirty = 0x83C; // bool
}

public static class CCSPlayerControllerAPI {
}

public static class CCSPlayerController_ActionTrackingServices { // CPlayerControllerComponent
    public const nint m_perRoundStats = 0x40; // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
    public const nint m_matchStats = 0x90; // CSMatchStats_t
    public const nint m_iNumRoundKills = 0x110; // int32_t
    public const nint m_iNumRoundKillsHeadshots = 0x114; // int32_t
    public const nint m_unTotalRoundDamageDealt = 0x118; // uint32_t
}

public static class CCSPlayerController_DamageServices { // CPlayerControllerComponent
    public const nint m_nSendUpdate = 0x40; // int32_t
    public const nint m_DamageList = 0x48; // C_UtlVectorEmbeddedNetworkVar<CDamageRecord>
}

public static class CCSPlayerController_InGameMoneyServices { // CPlayerControllerComponent
    public const nint m_iAccount = 0x40; // int32_t
    public const nint m_iStartAccount = 0x44; // int32_t
    public const nint m_iTotalCashSpent = 0x48; // int32_t
    public const nint m_iCashSpentThisRound = 0x4C; // int32_t
    public const nint m_nPreviousAccount = 0x50; // int32_t
}

public static class CCSPlayerController_InventoryServices { // CPlayerControllerComponent
    public const nint m_unMusicID = 0x40; // uint16_t
    public const nint m_rank = 0x44; // MedalRank_t[6]
    public const nint m_nPersonaDataPublicLevel = 0x5C; // int32_t
    public const nint m_nPersonaDataPublicCommendsLeader = 0x60; // int32_t
    public const nint m_nPersonaDataPublicCommendsTeacher = 0x64; // int32_t
    public const nint m_nPersonaDataPublicCommendsFriendly = 0x68; // int32_t
    public const nint m_nPersonaDataXpTrailLevel = 0x6C; // int32_t
    public const nint m_vecServerAuthoritativeWeaponSlots = 0x70; // C_UtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
}

public static class CCSPlayer_ActionTrackingServices { // CPlayerPawnComponent
    public const nint m_hLastWeaponBeforeC4AutoSwitch = 0x40; // CHandle<C_BasePlayerWeapon>
    public const nint m_bIsRescuing = 0x44; // bool
    public const nint m_weaponPurchasesThisMatch = 0x48; // WeaponPurchaseTracker_t
    public const nint m_weaponPurchasesThisRound = 0xA0; // WeaponPurchaseTracker_t
}

public static class CCSPlayer_BulletServices { // CPlayerPawnComponent
    public const nint m_totalHitsOnServer = 0x40; // int32_t
}

public static class CCSPlayer_BuyServices { // CPlayerPawnComponent
    public const nint m_vecSellbackPurchaseEntries = 0x40; // C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
}

public static class CCSPlayer_CameraServices { // CCSPlayerBase_CameraServices
    public const nint m_flDeathCamTilt = 0x228; // float
}

public static class CCSPlayer_GlowServices { // CPlayerPawnComponent
}

public static class CCSPlayer_HostageServices { // CPlayerPawnComponent
    public const nint m_hCarriedHostage = 0x40; // CHandle<C_BaseEntity>
    public const nint m_hCarriedHostageProp = 0x44; // CHandle<C_BaseEntity>
}

public static class CCSPlayer_ItemServices { // CPlayer_ItemServices
    public const nint m_bHasDefuser = 0x40; // bool
    public const nint m_bHasHelmet = 0x41; // bool
    public const nint m_bHasHeavyArmor = 0x42; // bool
}

public static class CCSPlayer_MovementServices { // CPlayer_MovementServices_Humanoid
    public const nint m_flMaxFallVelocity = 0x218; // float
    public const nint m_vecLadderNormal = 0x21C; // Vector
    public const nint m_nLadderSurfacePropIndex = 0x228; // int32_t
    public const nint m_flDuckAmount = 0x22C; // float
    public const nint m_flDuckSpeed = 0x230; // float
    public const nint m_bDuckOverride = 0x234; // bool
    public const nint m_bDesiresDuck = 0x235; // bool
    public const nint m_flDuckOffset = 0x238; // float
    public const nint m_nDuckTimeMsecs = 0x23C; // uint32_t
    public const nint m_nDuckJumpTimeMsecs = 0x240; // uint32_t
    public const nint m_nJumpTimeMsecs = 0x244; // uint32_t
    public const nint m_flLastDuckTime = 0x248; // float
    public const nint m_vecLastPositionAtFullCrouchSpeed = 0x258; // Vector2D
    public const nint m_duckUntilOnGround = 0x260; // bool
    public const nint m_bHasWalkMovedSinceLastJump = 0x261; // bool
    public const nint m_bInStuckTest = 0x262; // bool
    public const nint m_flStuckCheckTime = 0x270; // float[64][2]
    public const nint m_nTraceCount = 0x470; // int32_t
    public const nint m_StuckLast = 0x474; // int32_t
    public const nint m_bSpeedCropped = 0x478; // bool
    public const nint m_nOldWaterLevel = 0x47C; // int32_t
    public const nint m_flWaterEntryTime = 0x480; // float
    public const nint m_vecForward = 0x484; // Vector
    public const nint m_vecLeft = 0x490; // Vector
    public const nint m_vecUp = 0x49C; // Vector
    public const nint m_nGameCodeHasMovedPlayerAfterCommand = 0x4A8; // int32_t
    public const nint m_bOldJumpPressed = 0x4AC; // bool
    public const nint m_flJumpPressedTime = 0x4B0; // float
    public const nint m_flJumpUntil = 0x4B4; // float
    public const nint m_flJumpVel = 0x4B8; // float
    public const nint m_fStashGrenadeParameterWhen = 0x4BC; // GameTime_t
    public const nint m_nButtonDownMaskPrev = 0x4C0; // uint64_t
    public const nint m_flOffsetTickCompleteTime = 0x4C8; // float
    public const nint m_flOffsetTickStashedSpeed = 0x4CC; // float
    public const nint m_flStamina = 0x4D0; // float
    public const nint m_flHeightAtJumpStart = 0x4D4; // float
    public const nint m_flMaxJumpHeightThisJump = 0x4D8; // float
}

public static class CCSPlayer_PingServices { // CPlayerPawnComponent
    public const nint m_hPlayerPing = 0x40; // CHandle<C_BaseEntity>
}

public static class CCSPlayer_UseServices { // CPlayer_UseServices
}

public static class CCSPlayer_ViewModelServices { // CPlayer_ViewModelServices
    public const nint m_hViewModel = 0x40; // CHandle<C_BaseViewModel>[3]
}

public static class CCSPlayer_WaterServices { // CPlayer_WaterServices
    public const nint m_flWaterJumpTime = 0x40; // float
    public const nint m_vecWaterJumpVel = 0x44; // Vector
    public const nint m_flSwimSoundTime = 0x50; // float
}

public static class CCSPlayer_WeaponServices { // CPlayer_WeaponServices
    public const nint m_flNextAttack = 0xB8; // GameTime_t
    public const nint m_bIsLookingAtWeapon = 0xBC; // bool
    public const nint m_bIsHoldingLookAtWeapon = 0xBD; // bool
    public const nint m_nOldShootPositionHistoryCount = 0xC0; // uint32_t
    public const nint m_nOldInputHistoryCount = 0x458; // uint32_t
}

public static class CCSTakeDamageInfoAPI {
}

public static class CCSWeaponBaseAPI {
}

public static class CCSWeaponBaseVData { // CBasePlayerWeaponVData
    public const nint m_WeaponType = 0x248; // CSWeaponType
    public const nint m_WeaponCategory = 0x24C; // CSWeaponCategory
    public const nint m_szViewModel = 0x250; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    public const nint m_szPlayerModel = 0x330; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    public const nint m_szWorldDroppedModel = 0x410; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    public const nint m_szAimsightLensMaskModel = 0x4F0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    public const nint m_szMagazineModel = 0x5D0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    public const nint m_szHeatEffect = 0x6B0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    public const nint m_szEjectBrassEffect = 0x790; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    public const nint m_szMuzzleFlashParticleAlt = 0x870; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    public const nint m_szMuzzleFlashThirdPersonParticle = 0x950; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    public const nint m_szMuzzleFlashThirdPersonParticleAlt = 0xA30; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    public const nint m_szTracerParticle = 0xB10; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    public const nint m_GearSlot = 0xBF0; // gear_slot_t
    public const nint m_GearSlotPosition = 0xBF4; // int32_t
    public const nint m_DefaultLoadoutSlot = 0xBF8; // loadout_slot_t
    public const nint m_sWrongTeamMsg = 0xC00; // CUtlString
    public const nint m_nPrice = 0xC08; // int32_t
    public const nint m_nKillAward = 0xC0C; // int32_t
    public const nint m_nPrimaryReserveAmmoMax = 0xC10; // int32_t
    public const nint m_nSecondaryReserveAmmoMax = 0xC14; // int32_t
    public const nint m_bMeleeWeapon = 0xC18; // bool
    public const nint m_bHasBurstMode = 0xC19; // bool
    public const nint m_bIsRevolver = 0xC1A; // bool
    public const nint m_bCannotShootUnderwater = 0xC1B; // bool
    public const nint m_szName = 0xC20; // CGlobalSymbol
    public const nint m_szAnimExtension = 0xC28; // CUtlString
    public const nint m_eSilencerType = 0xC30; // CSWeaponSilencerType
    public const nint m_nCrosshairMinDistance = 0xC34; // int32_t
    public const nint m_nCrosshairDeltaDistance = 0xC38; // int32_t
    public const nint m_bIsFullAuto = 0xC3C; // bool
    public const nint m_nNumBullets = 0xC40; // int32_t
    public const nint m_flCycleTime = 0xC44; // CFiringModeFloat
    public const nint m_flMaxSpeed = 0xC4C; // CFiringModeFloat
    public const nint m_flSpread = 0xC54; // CFiringModeFloat
    public const nint m_flInaccuracyCrouch = 0xC5C; // CFiringModeFloat
    public const nint m_flInaccuracyStand = 0xC64; // CFiringModeFloat
    public const nint m_flInaccuracyJump = 0xC6C; // CFiringModeFloat
    public const nint m_flInaccuracyLand = 0xC74; // CFiringModeFloat
    public const nint m_flInaccuracyLadder = 0xC7C; // CFiringModeFloat
    public const nint m_flInaccuracyFire = 0xC84; // CFiringModeFloat
    public const nint m_flInaccuracyMove = 0xC8C; // CFiringModeFloat
    public const nint m_flRecoilAngle = 0xC94; // CFiringModeFloat
    public const nint m_flRecoilAngleVariance = 0xC9C; // CFiringModeFloat
    public const nint m_flRecoilMagnitude = 0xCA4; // CFiringModeFloat
    public const nint m_flRecoilMagnitudeVariance = 0xCAC; // CFiringModeFloat
    public const nint m_nTracerFrequency = 0xCB4; // CFiringModeInt
    public const nint m_flInaccuracyJumpInitial = 0xCBC; // float
    public const nint m_flInaccuracyJumpApex = 0xCC0; // float
    public const nint m_flInaccuracyReload = 0xCC4; // float
    public const nint m_nRecoilSeed = 0xCC8; // int32_t
    public const nint m_nSpreadSeed = 0xCCC; // int32_t
    public const nint m_flTimeToIdleAfterFire = 0xCD0; // float
    public const nint m_flIdleInterval = 0xCD4; // float
    public const nint m_flAttackMovespeedFactor = 0xCD8; // float
    public const nint m_flHeatPerShot = 0xCDC; // float
    public const nint m_flInaccuracyPitchShift = 0xCE0; // float
    public const nint m_flInaccuracyAltSoundThreshold = 0xCE4; // float
    public const nint m_flBotAudibleRange = 0xCE8; // float
    public const nint m_szUseRadioSubtitle = 0xCF0; // CUtlString
    public const nint m_bUnzoomsAfterShot = 0xCF8; // bool
    public const nint m_bHideViewModelWhenZoomed = 0xCF9; // bool
    public const nint m_nZoomLevels = 0xCFC; // int32_t
    public const nint m_nZoomFOV1 = 0xD00; // int32_t
    public const nint m_nZoomFOV2 = 0xD04; // int32_t
    public const nint m_flZoomTime0 = 0xD08; // float
    public const nint m_flZoomTime1 = 0xD0C; // float
    public const nint m_flZoomTime2 = 0xD10; // float
    public const nint m_flIronSightPullUpSpeed = 0xD14; // float
    public const nint m_flIronSightPutDownSpeed = 0xD18; // float
    public const nint m_flIronSightFOV = 0xD1C; // float
    public const nint m_flIronSightPivotForward = 0xD20; // float
    public const nint m_flIronSightLooseness = 0xD24; // float
    public const nint m_angPivotAngle = 0xD28; // QAngle
    public const nint m_vecIronSightEyePos = 0xD34; // Vector
    public const nint m_nDamage = 0xD40; // int32_t
    public const nint m_flHeadshotMultiplier = 0xD44; // float
    public const nint m_flArmorRatio = 0xD48; // float
    public const nint m_flPenetration = 0xD4C; // float
    public const nint m_flRange = 0xD50; // float
    public const nint m_flRangeModifier = 0xD54; // float
    public const nint m_flFlinchVelocityModifierLarge = 0xD58; // float
    public const nint m_flFlinchVelocityModifierSmall = 0xD5C; // float
    public const nint m_flRecoveryTimeCrouch = 0xD60; // float
    public const nint m_flRecoveryTimeStand = 0xD64; // float
    public const nint m_flRecoveryTimeCrouchFinal = 0xD68; // float
    public const nint m_flRecoveryTimeStandFinal = 0xD6C; // float
    public const nint m_nRecoveryTransitionStartBullet = 0xD70; // int32_t
    public const nint m_nRecoveryTransitionEndBullet = 0xD74; // int32_t
    public const nint m_flThrowVelocity = 0xD78; // float
    public const nint m_vSmokeColor = 0xD7C; // Vector
    public const nint m_szAnimClass = 0xD88; // CGlobalSymbol
}

public static class CCSWeaponBaseVDataAPI {
}

public static class CClientAlphaProperty { // IClientAlphaProperty
    public const nint m_nRenderFX = 0x10; // uint8_t
    public const nint m_nRenderMode = 0x11; // uint8_t
    public const nint m_bAlphaOverride = 0x0; // bitfield:1
    public const nint m_bShadowAlphaOverride = 0x0; // bitfield:1
    public const nint m_nReserved = 0x0; // bitfield:6
    public const nint m_nAlpha = 0x13; // uint8_t
    public const nint m_nDesyncOffset = 0x14; // uint16_t
    public const nint m_nReserved2 = 0x16; // uint16_t
    public const nint m_nDistFadeStart = 0x18; // uint16_t
    public const nint m_nDistFadeEnd = 0x1A; // uint16_t
    public const nint m_flFadeScale = 0x1C; // float
    public const nint m_flRenderFxStartTime = 0x20; // GameTime_t
    public const nint m_flRenderFxDuration = 0x24; // float
}

public static class CClientPointEntityAPI {
}

public static class CClientScriptEntity { // C_BaseEntity
}

public static class CCollisionProperty {
    public const nint m_collisionAttribute = 0x10; // VPhysicsCollisionAttribute_t
    public const nint m_vecMins = 0x40; // Vector
    public const nint m_vecMaxs = 0x4C; // Vector
    public const nint m_usSolidFlags = 0x5A; // uint8_t
    public const nint m_nSolidType = 0x5B; // SolidType_t
    public const nint m_triggerBloat = 0x5C; // uint8_t
    public const nint m_nSurroundType = 0x5D; // SurroundingBoundsType_t
    public const nint m_CollisionGroup = 0x5E; // uint8_t
    public const nint m_nEnablePhysics = 0x5F; // uint8_t
    public const nint m_flBoundingRadius = 0x60; // float
    public const nint m_vecSpecifiedSurroundingMins = 0x64; // Vector
    public const nint m_vecSpecifiedSurroundingMaxs = 0x70; // Vector
    public const nint m_vecSurroundingMaxs = 0x7C; // Vector
    public const nint m_vecSurroundingMins = 0x88; // Vector
    public const nint m_vCapsuleCenter1 = 0x94; // Vector
    public const nint m_vCapsuleCenter2 = 0xA0; // Vector
    public const nint m_flCapsuleRadius = 0xAC; // float
}

public static class CCompositeMaterialEditorDoc {
    public const nint m_nVersion = 0x8; // int32_t
    public const nint m_Points = 0x10; // CUtlVector<CompositeMaterialEditorPoint_t>
    public const nint m_KVthumbnail = 0x28; // KeyValues3
}

public static class CDamageRecord {
    public const nint m_PlayerDamager = 0x28; // CHandle<C_CSPlayerPawnBase>
    public const nint m_PlayerRecipient = 0x2C; // CHandle<C_CSPlayerPawnBase>
    public const nint m_hPlayerControllerDamager = 0x30; // CHandle<CCSPlayerController>
    public const nint m_hPlayerControllerRecipient = 0x34; // CHandle<CCSPlayerController>
    public const nint m_szPlayerDamagerName = 0x38; // CUtlString
    public const nint m_szPlayerRecipientName = 0x40; // CUtlString
    public const nint m_DamagerXuid = 0x48; // uint64_t
    public const nint m_RecipientXuid = 0x50; // uint64_t
    public const nint m_iDamage = 0x58; // int32_t
    public const nint m_iActualHealthRemoved = 0x5C; // int32_t
    public const nint m_iNumHits = 0x60; // int32_t
    public const nint m_iLastBulletUpdate = 0x64; // int32_t
    public const nint m_bIsOtherEnemy = 0x68; // bool
    public const nint m_killType = 0x69; // EKillTypes_t
}

public static class CDecalInfo {
    public const nint m_flAnimationScale = 0x0; // float
    public const nint m_flAnimationLifeSpan = 0x4; // float
    public const nint m_flPlaceTime = 0x8; // float
    public const nint m_flFadeStartTime = 0xC; // float
    public const nint m_flFadeDuration = 0x10; // float
    public const nint m_nVBSlot = 0x14; // int32_t
    public const nint m_nBoneIndex = 0x18; // int32_t
    public const nint m_vPosition = 0x28; // Vector
    public const nint m_flBoundingRadiusSqr = 0x34; // float
    public const nint m_pNext = 0x40; // CDecalInfo*
    public const nint m_pPrev = 0x48; // CDecalInfo*
    public const nint m_nDecalMaterialIndex = 0xA8; // int32_t
}

public static class CDynamicPropAPI {
}

public static class CEconItemAttribute {
    public const nint m_iAttributeDefinitionIndex = 0x30; // uint16_t
    public const nint m_flValue = 0x34; // float
    public const nint m_flInitialValue = 0x38; // float
    public const nint m_nRefundableCurrency = 0x3C; // int32_t
    public const nint m_bSetBonus = 0x40; // bool
}

public static class CEffectData {
    public const nint m_vOrigin = 0x8; // Vector
    public const nint m_vStart = 0x14; // Vector
    public const nint m_vNormal = 0x20; // Vector
    public const nint m_vAngles = 0x2C; // QAngle
    public const nint m_hEntity = 0x38; // CEntityHandle
    public const nint m_hOtherEntity = 0x3C; // CEntityHandle
    public const nint m_flScale = 0x40; // float
    public const nint m_flMagnitude = 0x44; // float
    public const nint m_flRadius = 0x48; // float
    public const nint m_nSurfaceProp = 0x4C; // CUtlStringToken
    public const nint m_nEffectIndex = 0x50; // CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
    public const nint m_nDamageType = 0x58; // uint32_t
    public const nint m_nPenetrate = 0x5C; // uint8_t
    public const nint m_nMaterial = 0x5E; // uint16_t
    public const nint m_nHitBox = 0x60; // uint16_t
    public const nint m_nColor = 0x62; // uint8_t
    public const nint m_fFlags = 0x63; // uint8_t
    public const nint m_nAttachmentIndex = 0x64; // AttachmentHandle_t
    public const nint m_nAttachmentName = 0x68; // CUtlStringToken
    public const nint m_iEffectName = 0x6C; // uint16_t
    public const nint m_nExplosionType = 0x6E; // uint8_t
}

public static class CEntityComponent {
}

public static class CEntityIdentity {
    public const nint m_nameStringableIndex = 0x14; // int32_t
    public const nint m_name = 0x18; // CUtlSymbolLarge
    public const nint m_designerName = 0x20; // CUtlSymbolLarge
    public const nint m_flags = 0x30; // uint32_t
    public const nint m_worldGroupId = 0x38; // WorldGroupId_t
    public const nint m_fDataObjectTypes = 0x3C; // uint32_t
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
    public const nint m_bVisibleinPVS = 0x30; // bool
}

public static class CFireOverlay { // CGlowOverlay
    public const nint m_pOwner = 0xD0; // C_FireSmoke*
    public const nint m_vBaseColors = 0xD8; // Vector[4]
    public const nint m_flScale = 0x108; // float
    public const nint m_nGUID = 0x10C; // int32_t
}

public static class CFlashlightEffect {
    public const nint m_bIsOn = 0x10; // bool
    public const nint m_bMuzzleFlashEnabled = 0x20; // bool
    public const nint m_flMuzzleFlashBrightness = 0x24; // float
    public const nint m_quatMuzzleFlashOrientation = 0x30; // Quaternion
    public const nint m_vecMuzzleFlashOrigin = 0x40; // Vector
    public const nint m_flFov = 0x4C; // float
    public const nint m_flFarZ = 0x50; // float
    public const nint m_flLinearAtten = 0x54; // float
    public const nint m_bCastsShadows = 0x58; // bool
    public const nint m_flCurrentPullBackDist = 0x5C; // float
    public const nint m_FlashlightTexture = 0x60; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_MuzzleFlashTexture = 0x68; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_textureName = 0x70; // char[64]
}

public static class CFuncWater { // C_BaseModelEntity
    public const nint m_BuoyancyHelper = 0xCD0; // CBuoyancyHelper
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
    public const nint m_flScale = 0xC4; // float
    public const nint m_vecAbsOrigin = 0xC8; // Vector
    public const nint m_angAbsRotation = 0xD4; // QAngle
    public const nint m_flAbsScale = 0xE0; // float
    public const nint m_nParentAttachmentOrBone = 0xE4; // int16_t
    public const nint m_bDebugAbsOriginChanges = 0xE6; // bool
    public const nint m_bDormant = 0xE7; // bool
    public const nint m_bForceParentToBeNetworked = 0xE8; // bool
    public const nint m_bDirtyHierarchy = 0x0; // bitfield:1
    public const nint m_bDirtyBoneMergeInfo = 0x0; // bitfield:1
    public const nint m_bNetworkedPositionChanged = 0x0; // bitfield:1
    public const nint m_bNetworkedAnglesChanged = 0x0; // bitfield:1
    public const nint m_bNetworkedScaleChanged = 0x0; // bitfield:1
    public const nint m_bWillBeCallingPostDataUpdate = 0x0; // bitfield:1
    public const nint m_bBoneMergeFlex = 0x0; // bitfield:1
    public const nint m_nLatchAbsOrigin = 0x0; // bitfield:2
    public const nint m_bDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
    public const nint m_nHierarchicalDepth = 0xEB; // uint8_t
    public const nint m_nHierarchyType = 0xEC; // uint8_t
    public const nint m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xED; // uint8_t
    public const nint m_name = 0xF0; // CUtlStringToken
    public const nint m_hierarchyAttachName = 0x130; // CUtlStringToken
    public const nint m_flZOffset = 0x134; // float
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
    public const nint m_flSpecularPower = 0x5C; // float
    public const nint m_flSpecularIndependence = 0x60; // float
    public const nint m_SpecularColor = 0x64; // Color
    public const nint m_bStartDisabled = 0x68; // bool
    public const nint m_bEnabled = 0x69; // bool
    public const nint m_LightColor = 0x6A; // Color
    public const nint m_AmbientColor1 = 0x6E; // Color
    public const nint m_AmbientColor2 = 0x72; // Color
    public const nint m_AmbientColor3 = 0x76; // Color
    public const nint m_flSunDistance = 0x7C; // float
    public const nint m_flFOV = 0x80; // float
    public const nint m_flNearZ = 0x84; // float
    public const nint m_flFarZ = 0x88; // float
    public const nint m_bEnableShadows = 0x8C; // bool
    public const nint m_bOldEnableShadows = 0x8D; // bool
    public const nint m_bBackgroundClearNotRequired = 0x8E; // bool
    public const nint m_flCloudScale = 0x90; // float
    public const nint m_flCloud1Speed = 0x94; // float
    public const nint m_flCloud1Direction = 0x98; // float
    public const nint m_flCloud2Speed = 0x9C; // float
    public const nint m_flCloud2Direction = 0xA0; // float
    public const nint m_flAmbientScale1 = 0xB0; // float
    public const nint m_flAmbientScale2 = 0xB4; // float
    public const nint m_flGroundScale = 0xB8; // float
    public const nint m_flLightScale = 0xBC; // float
    public const nint m_flFoWDarkness = 0xC0; // float
    public const nint m_bEnableSeparateSkyboxFog = 0xC4; // bool
    public const nint m_vFowColor = 0xC8; // Vector
    public const nint m_ViewOrigin = 0xD4; // Vector
    public const nint m_ViewAngles = 0xE0; // QAngle
    public const nint m_flViewFoV = 0xEC; // float
    public const nint m_WorldPoints = 0xF0; // Vector[8]
    public const nint m_vFogOffsetLayer0 = 0x4A8; // Vector2D
    public const nint m_vFogOffsetLayer1 = 0x4B0; // Vector2D
    public const nint m_hEnvWind = 0x4B8; // CHandle<C_BaseEntity>
    public const nint m_hEnvSky = 0x4BC; // CHandle<C_BaseEntity>
}

public static class CGlowOverlay {
    public const nint m_vPos = 0x8; // Vector
    public const nint m_bDirectional = 0x14; // bool
    public const nint m_vDirection = 0x18; // Vector
    public const nint m_bInSky = 0x24; // bool
    public const nint m_skyObstructionScale = 0x28; // float
    public const nint m_Sprites = 0x30; // CGlowSprite[4]
    public const nint m_nSprites = 0xB0; // int32_t
    public const nint m_flProxyRadius = 0xB4; // float
    public const nint m_flHDRColorScale = 0xB8; // float
    public const nint m_flGlowObstructionScale = 0xBC; // float
    public const nint m_bCacheGlowObstruction = 0xC0; // bool
    public const nint m_bCacheSkyObstruction = 0xC1; // bool
    public const nint m_bActivated = 0xC2; // int16_t
    public const nint m_ListIndex = 0xC4; // uint16_t
    public const nint m_queryHandle = 0xC8; // int32_t
}

public static class CGlowProperty {
    public const nint m_fGlowColor = 0x8; // Vector
    public const nint m_iGlowType = 0x30; // int32_t
    public const nint m_iGlowTeam = 0x34; // int32_t
    public const nint m_nGlowRange = 0x38; // int32_t
    public const nint m_nGlowRangeMin = 0x3C; // int32_t
    public const nint m_glowColorOverride = 0x40; // Color
    public const nint m_bFlashing = 0x44; // bool
    public const nint m_flGlowTime = 0x48; // float
    public const nint m_flGlowStartTime = 0x4C; // float
    public const nint m_bEligibleForScreenHighlight = 0x50; // bool
    public const nint m_bGlowing = 0x51; // bool
}

public static class CGlowSprite {
    public const nint m_vColor = 0x0; // Vector
    public const nint m_flHorzSize = 0xC; // float
    public const nint m_flVertSize = 0x10; // float
    public const nint m_hMaterial = 0x18; // CStrongHandle<InfoForResourceTypeIMaterial2>
}

public static class CGrenadeTracer { // C_BaseModelEntity
    public const nint m_flTracerDuration = 0xCF0; // float
    public const nint m_nType = 0xCF4; // GrenadeType_t
}

public static class CHitboxComponent { // CEntityComponent
    public const nint m_bvDisabledHitGroups = 0x24; // uint32_t[1]
}

public static class CHostageRescueZone { // CHostageRescueZoneShim
}

public static class CHostageRescueZoneShim { // C_BaseTrigger
}

public static class CInfoDynamicShadowHint { // C_PointEntity
    public const nint m_bDisabled = 0x550; // bool
    public const nint m_flRange = 0x554; // float
    public const nint m_nImportance = 0x558; // int32_t
    public const nint m_nLightChoice = 0x55C; // int32_t
    public const nint m_hLight = 0x560; // CHandle<C_BaseEntity>
}

public static class CInfoDynamicShadowHintBox { // CInfoDynamicShadowHint
    public const nint m_vBoxMins = 0x568; // Vector
    public const nint m_vBoxMaxs = 0x574; // Vector
}

public static class CInfoOffscreenPanoramaTexture { // C_PointEntity
    public const nint m_bDisabled = 0x550; // bool
    public const nint m_nResolutionX = 0x554; // int32_t
    public const nint m_nResolutionY = 0x558; // int32_t
    public const nint m_szLayoutFileName = 0x560; // CUtlSymbolLarge
    public const nint m_RenderAttrName = 0x568; // CUtlSymbolLarge
    public const nint m_TargetEntities = 0x570; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
    public const nint m_nTargetChangeCount = 0x588; // int32_t
    public const nint m_vecCSSClasses = 0x590; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
    public const nint m_bCheckCSSClasses = 0x708; // bool
}

public static class CInfoParticleTarget { // C_PointEntity
}

public static class CInfoTarget { // C_PointEntity
}

public static class CInfoWorldLayer { // C_BaseEntity
    public const nint m_pOutputOnEntitiesSpawned = 0x550; // CEntityIOOutput
    public const nint m_worldName = 0x578; // CUtlSymbolLarge
    public const nint m_layerName = 0x580; // CUtlSymbolLarge
    public const nint m_bWorldLayerVisible = 0x588; // bool
    public const nint m_bEntitiesSpawned = 0x589; // bool
    public const nint m_bCreateAsChildSpawnGroup = 0x58A; // bool
    public const nint m_hLayerSpawnGroup = 0x58C; // uint32_t
    public const nint m_bWorldLayerActuallyVisible = 0x590; // bool
}

public static class CInterpolatedValue {
    public const nint m_flStartTime = 0x0; // float
    public const nint m_flEndTime = 0x4; // float
    public const nint m_flStartValue = 0x8; // float
    public const nint m_flEndValue = 0xC; // float
    public const nint m_nInterpType = 0x10; // int32_t
}

public static class CLightComponent { // CEntityComponent
    public const nint __m_pChainEntity = 0x48; // CNetworkVarChainer
    public const nint m_Color = 0x85; // Color
    public const nint m_SecondaryColor = 0x89; // Color
    public const nint m_flBrightness = 0x90; // float
    public const nint m_flBrightnessScale = 0x94; // float
    public const nint m_flBrightnessMult = 0x98; // float
    public const nint m_flRange = 0x9C; // float
    public const nint m_flFalloff = 0xA0; // float
    public const nint m_flAttenuation0 = 0xA4; // float
    public const nint m_flAttenuation1 = 0xA8; // float
    public const nint m_flAttenuation2 = 0xAC; // float
    public const nint m_flTheta = 0xB0; // float
    public const nint m_flPhi = 0xB4; // float
    public const nint m_hLightCookie = 0xB8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_nCascades = 0xC0; // int32_t
    public const nint m_nCastShadows = 0xC4; // int32_t
    public const nint m_nShadowWidth = 0xC8; // int32_t
    public const nint m_nShadowHeight = 0xCC; // int32_t
    public const nint m_bRenderDiffuse = 0xD0; // bool
    public const nint m_nRenderSpecular = 0xD4; // int32_t
    public const nint m_bRenderTransmissive = 0xD8; // bool
    public const nint m_flOrthoLightWidth = 0xDC; // float
    public const nint m_flOrthoLightHeight = 0xE0; // float
    public const nint m_nStyle = 0xE4; // int32_t
    public const nint m_Pattern = 0xE8; // CUtlString
    public const nint m_nCascadeRenderStaticObjects = 0xF0; // int32_t
    public const nint m_flShadowCascadeCrossFade = 0xF4; // float
    public const nint m_flShadowCascadeDistanceFade = 0xF8; // float
    public const nint m_flShadowCascadeDistance0 = 0xFC; // float
    public const nint m_flShadowCascadeDistance1 = 0x100; // float
    public const nint m_flShadowCascadeDistance2 = 0x104; // float
    public const nint m_flShadowCascadeDistance3 = 0x108; // float
    public const nint m_nShadowCascadeResolution0 = 0x10C; // int32_t
    public const nint m_nShadowCascadeResolution1 = 0x110; // int32_t
    public const nint m_nShadowCascadeResolution2 = 0x114; // int32_t
    public const nint m_nShadowCascadeResolution3 = 0x118; // int32_t
    public const nint m_bUsesBakedShadowing = 0x11C; // bool
    public const nint m_nShadowPriority = 0x120; // int32_t
    public const nint m_nBakedShadowIndex = 0x124; // int32_t
    public const nint m_bRenderToCubemaps = 0x128; // bool
    public const nint m_nDirectLight = 0x12C; // int32_t
    public const nint m_nIndirectLight = 0x130; // int32_t
    public const nint m_flFadeMinDist = 0x134; // float
    public const nint m_flFadeMaxDist = 0x138; // float
    public const nint m_flShadowFadeMinDist = 0x13C; // float
    public const nint m_flShadowFadeMaxDist = 0x140; // float
    public const nint m_bEnabled = 0x144; // bool
    public const nint m_bFlicker = 0x145; // bool
    public const nint m_bPrecomputedFieldsValid = 0x146; // bool
    public const nint m_vPrecomputedBoundsMins = 0x148; // Vector
    public const nint m_vPrecomputedBoundsMaxs = 0x154; // Vector
    public const nint m_vPrecomputedOBBOrigin = 0x160; // Vector
    public const nint m_vPrecomputedOBBAngles = 0x16C; // QAngle
    public const nint m_vPrecomputedOBBExtent = 0x178; // Vector
    public const nint m_flPrecomputedMaxRange = 0x184; // float
    public const nint m_nFogLightingMode = 0x188; // int32_t
    public const nint m_flFogContributionStength = 0x18C; // float
    public const nint m_flNearClipPlane = 0x190; // float
    public const nint m_SkyColor = 0x194; // Color
    public const nint m_flSkyIntensity = 0x198; // float
    public const nint m_SkyAmbientBounce = 0x19C; // Color
    public const nint m_bUseSecondaryColor = 0x1A0; // bool
    public const nint m_bMixedShadows = 0x1A1; // bool
    public const nint m_flLightStyleStartTime = 0x1A4; // GameTime_t
    public const nint m_flCapsuleLength = 0x1A8; // float
    public const nint m_flMinRoughness = 0x1AC; // float
}

public static class CLogicRelay { // CLogicalEntity
    public const nint m_OnTrigger = 0x550; // CEntityIOOutput
    public const nint m_OnSpawn = 0x578; // CEntityIOOutput
    public const nint m_bDisabled = 0x5A0; // bool
    public const nint m_bWaitForRefire = 0x5A1; // bool
    public const nint m_bTriggerOnce = 0x5A2; // bool
    public const nint m_bFastRetrigger = 0x5A3; // bool
    public const nint m_bPassthoughCaller = 0x5A4; // bool
}

public static class CLogicalEntity { // C_BaseEntity
}

public static class CModelState {
    public const nint m_hModel = 0xA0; // CStrongHandle<InfoForResourceTypeCModel>
    public const nint m_ModelName = 0xA8; // CUtlSymbolLarge
    public const nint m_bClientClothCreationSuppressed = 0xE8; // bool
    public const nint m_MeshGroupMask = 0x180; // uint64_t
    public const nint m_nIdealMotionType = 0x202; // int8_t
    public const nint m_nForceLOD = 0x203; // int8_t
    public const nint m_nClothUpdateFlags = 0x204; // int8_t
}

public static class CNetworkedSequenceOperation {
    public const nint m_hSequence = 0x8; // HSequence
    public const nint m_flPrevCycle = 0xC; // float
    public const nint m_flCycle = 0x10; // float
    public const nint m_flWeight = 0x14; // CNetworkedQuantizedFloat
    public const nint m_bSequenceChangeNetworked = 0x1C; // bool
    public const nint m_bDiscontinuity = 0x1D; // bool
    public const nint m_flPrevCycleFromDiscontinuity = 0x20; // float
    public const nint m_flPrevCycleForAnimEventDetection = 0x24; // float
}

public static class CPlayerSprayDecalRenderHelper {
}

public static class CPlayer_AutoaimServices { // CPlayerPawnComponent
}

public static class CPlayer_CameraServices { // CPlayerPawnComponent
    public const nint m_vecCsViewPunchAngle = 0x40; // QAngle
    public const nint m_nCsViewPunchAngleTick = 0x4C; // GameTick_t
    public const nint m_flCsViewPunchAngleTickRatio = 0x50; // float
    public const nint m_PlayerFog = 0x58; // C_fogplayerparams_t
    public const nint m_hColorCorrectionCtrl = 0x98; // CHandle<C_ColorCorrection>
    public const nint m_hViewEntity = 0x9C; // CHandle<C_BaseEntity>
    public const nint m_hTonemapController = 0xA0; // CHandle<C_TonemapController2>
    public const nint m_audio = 0xA8; // audioparams_t
    public const nint m_PostProcessingVolumes = 0x120; // C_NetworkUtlVectorBase<CHandle<C_PostProcessingVolume>>
    public const nint m_flOldPlayerZ = 0x138; // float
    public const nint m_flOldPlayerViewOffsetZ = 0x13C; // float
    public const nint m_CurrentFog = 0x140; // fogparams_t
    public const nint m_hOldFogController = 0x1A8; // CHandle<C_FogController>
    public const nint m_bOverrideFogColor = 0x1AC; // bool[5]
    public const nint m_OverrideFogColor = 0x1B1; // Color[5]
    public const nint m_bOverrideFogStartEnd = 0x1C5; // bool[5]
    public const nint m_fOverrideFogStart = 0x1CC; // float[5]
    public const nint m_fOverrideFogEnd = 0x1E0; // float[5]
    public const nint m_hActivePostProcessingVolume = 0x1F4; // CHandle<C_PostProcessingVolume>
    public const nint m_angDemoViewAngles = 0x1F8; // QAngle
}

public static class CPlayer_FlashlightServices { // CPlayerPawnComponent
}

public static class CPlayer_ItemServices { // CPlayerPawnComponent
}

public static class CPlayer_MovementServices { // CPlayerPawnComponent
    public const nint m_nImpulse = 0x40; // int32_t
    public const nint m_nButtons = 0x48; // CInButtonState
    public const nint m_nQueuedButtonDownMask = 0x68; // uint64_t
    public const nint m_nQueuedButtonChangeMask = 0x70; // uint64_t
    public const nint m_nButtonDoublePressed = 0x78; // uint64_t
    public const nint m_pButtonPressedCmdNumber = 0x80; // uint32_t[64]
    public const nint m_nLastCommandNumberProcessed = 0x180; // uint32_t
    public const nint m_nToggleButtonDownMask = 0x188; // uint64_t
    public const nint m_flMaxspeed = 0x198; // float
    public const nint m_arrForceSubtickMoveWhen = 0x19C; // float[4]
    public const nint m_flForwardMove = 0x1AC; // float
    public const nint m_flLeftMove = 0x1B0; // float
    public const nint m_flUpMove = 0x1B4; // float
    public const nint m_vecLastMovementImpulses = 0x1B8; // Vector
    public const nint m_vecOldViewAngles = 0x1C4; // QAngle
}

public static class CPlayer_MovementServices_Humanoid { // CPlayer_MovementServices
    public const nint m_flStepSoundTime = 0x1D8; // float
    public const nint m_flFallVelocity = 0x1DC; // float
    public const nint m_bInCrouch = 0x1E0; // bool
    public const nint m_nCrouchState = 0x1E4; // uint32_t
    public const nint m_flCrouchTransitionStartTime = 0x1E8; // GameTime_t
    public const nint m_bDucked = 0x1EC; // bool
    public const nint m_bDucking = 0x1ED; // bool
    public const nint m_bInDuckJump = 0x1EE; // bool
    public const nint m_groundNormal = 0x1F0; // Vector
    public const nint m_flSurfaceFriction = 0x1FC; // float
    public const nint m_surfaceProps = 0x200; // CUtlStringToken
    public const nint m_nStepside = 0x210; // int32_t
}

public static class CPlayer_ObserverServices { // CPlayerPawnComponent
    public const nint m_iObserverMode = 0x40; // uint8_t
    public const nint m_hObserverTarget = 0x44; // CHandle<C_BaseEntity>
    public const nint m_iObserverLastMode = 0x48; // ObserverMode_t
    public const nint m_bForcedObserverMode = 0x4C; // bool
    public const nint m_flObserverChaseDistance = 0x50; // float
    public const nint m_flObserverChaseDistanceCalcTime = 0x54; // GameTime_t
}

public static class CPlayer_UseServices { // CPlayerPawnComponent
}

public static class CPlayer_ViewModelServices { // CPlayerPawnComponent
}

public static class CPlayer_WaterServices { // CPlayerPawnComponent
}

public static class CPlayer_WeaponServices { // CPlayerPawnComponent
    public const nint m_hMyWeapons = 0x40; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
    public const nint m_hActiveWeapon = 0x58; // CHandle<C_BasePlayerWeapon>
    public const nint m_hLastWeapon = 0x5C; // CHandle<C_BasePlayerWeapon>
    public const nint m_iAmmo = 0x60; // uint16_t[32]
}

public static class CPointOffScreenIndicatorUi { // C_PointClientUIWorldPanel
    public const nint m_bBeenEnabled = 0xF30; // bool
    public const nint m_bHide = 0xF31; // bool
    public const nint m_flSeenTargetTime = 0xF34; // float
    public const nint m_pTargetPanel = 0xF38; // C_PointClientUIWorldPanel*
}

public static class CPointTemplate { // CLogicalEntity
    public const nint m_iszWorldName = 0x550; // CUtlSymbolLarge
    public const nint m_iszSource2EntityLumpName = 0x558; // CUtlSymbolLarge
    public const nint m_iszEntityFilterName = 0x560; // CUtlSymbolLarge
    public const nint m_flTimeoutInterval = 0x568; // float
    public const nint m_bAsynchronouslySpawnEntities = 0x56C; // bool
    public const nint m_pOutputOnSpawned = 0x570; // CEntityIOOutput
    public const nint m_clientOnlyEntityBehavior = 0x598; // PointTemplateClientOnlyEntityBehavior_t
    public const nint m_ownerSpawnGroupType = 0x59C; // PointTemplateOwnerSpawnGroupType_t
    public const nint m_createdSpawnGroupHandles = 0x5A0; // CUtlVector<uint32_t>
    public const nint m_SpawnedEntityHandles = 0x5B8; // CUtlVector<CEntityHandle>
    public const nint m_ScriptSpawnCallback = 0x5D0; // HSCRIPT
    public const nint m_ScriptCallbackScope = 0x5D8; // HSCRIPT
}

public static class CPrecipitationVData { // CEntitySubclassVDataBase
    public const nint m_szParticlePrecipitationEffect = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    public const nint m_flInnerDistance = 0x108; // float
    public const nint m_nAttachType = 0x10C; // ParticleAttachment_t
    public const nint m_bBatchSameVolumeType = 0x110; // bool
    public const nint m_nRTEnvCP = 0x114; // int32_t
    public const nint m_nRTEnvCPComponent = 0x118; // int32_t
    public const nint m_szModifier = 0x120; // CUtlString
}

public static class CProjectedTextureBase {
    public const nint m_hTargetEntity = 0xC; // CHandle<C_BaseEntity>
    public const nint m_bState = 0x10; // bool
    public const nint m_bAlwaysUpdate = 0x11; // bool
    public const nint m_flLightFOV = 0x14; // float
    public const nint m_bEnableShadows = 0x18; // bool
    public const nint m_bSimpleProjection = 0x19; // bool
    public const nint m_bLightOnlyTarget = 0x1A; // bool
    public const nint m_bLightWorld = 0x1B; // bool
    public const nint m_bCameraSpace = 0x1C; // bool
    public const nint m_flBrightnessScale = 0x20; // float
    public const nint m_LightColor = 0x24; // Color
    public const nint m_flIntensity = 0x28; // float
    public const nint m_flLinearAttenuation = 0x2C; // float
    public const nint m_flQuadraticAttenuation = 0x30; // float
    public const nint m_bVolumetric = 0x34; // bool
    public const nint m_flVolumetricIntensity = 0x38; // float
    public const nint m_flNoiseStrength = 0x3C; // float
    public const nint m_flFlashlightTime = 0x40; // float
    public const nint m_nNumPlanes = 0x44; // uint32_t
    public const nint m_flPlaneOffset = 0x48; // float
    public const nint m_flColorTransitionTime = 0x4C; // float
    public const nint m_flAmbient = 0x50; // float
    public const nint m_SpotlightTextureName = 0x54; // char[512]
    public const nint m_nSpotlightTextureFrame = 0x254; // int32_t
    public const nint m_nShadowQuality = 0x258; // uint32_t
    public const nint m_flNearZ = 0x25C; // float
    public const nint m_flFarZ = 0x260; // float
    public const nint m_flProjectionSize = 0x264; // float
    public const nint m_flRotation = 0x268; // float
    public const nint m_bFlipHorizontal = 0x26C; // bool
}

public static class CPulseGraphInstance_ClientEntity { // CBasePulseGraphInstance
    public const nint m_pParent = 0xD8; // CClientScriptEntity*
}

public static class CRenderComponent { // CEntityComponent
    public const nint __m_pChainEntity = 0x10; // CNetworkVarChainer
    public const nint m_bIsRenderingWithViewModels = 0x50; // bool
    public const nint m_nSplitscreenFlags = 0x54; // uint32_t
    public const nint m_bEnableRendering = 0x60; // bool
    public const nint m_bInterpolationReadyToDraw = 0xB0; // bool
}

public static class CSMatchStats_t { // CSPerRoundStats_t
    public const nint m_iEnemy5Ks = 0x68; // int32_t
    public const nint m_iEnemy4Ks = 0x6C; // int32_t
    public const nint m_iEnemy3Ks = 0x70; // int32_t
    public const nint m_iEnemyKnifeKills = 0x74; // int32_t
    public const nint m_iEnemyTaserKills = 0x78; // int32_t
}

public static class CSPerRoundStats_t {
    public const nint m_iKills = 0x30; // int32_t
    public const nint m_iDeaths = 0x34; // int32_t
    public const nint m_iAssists = 0x38; // int32_t
    public const nint m_iDamage = 0x3C; // int32_t
    public const nint m_iEquipmentValue = 0x40; // int32_t
    public const nint m_iMoneySaved = 0x44; // int32_t
    public const nint m_iKillReward = 0x48; // int32_t
    public const nint m_iLiveTime = 0x4C; // int32_t
    public const nint m_iHeadShotKills = 0x50; // int32_t
    public const nint m_iObjective = 0x54; // int32_t
    public const nint m_iCashEarned = 0x58; // int32_t
    public const nint m_iUtilityDamage = 0x5C; // int32_t
    public const nint m_iEnemiesFlashed = 0x60; // int32_t
}

public static class CScriptComponent { // CEntityComponent
    public const nint m_scriptClassName = 0x30; // CUtlSymbolLarge
}

public static class CServerOnlyModelEntity { // C_BaseModelEntity
}

public static class CSkeletonInstance { // CGameSceneNode
    public const nint m_modelState = 0x160; // CModelState
    public const nint m_bIsAnimationEnabled = 0x370; // bool
    public const nint m_bUseParentRenderBounds = 0x371; // bool
    public const nint m_bDisableSolidCollisionsForHierarchy = 0x372; // bool
    public const nint m_bDirtyMotionType = 0x0; // bitfield:1
    public const nint m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
    public const nint m_materialGroup = 0x374; // CUtlStringToken
    public const nint m_nHitboxSet = 0x378; // uint8_t
}

public static class CSkyboxReference { // C_BaseEntity
    public const nint m_worldGroupId = 0x550; // WorldGroupId_t
    public const nint m_hSkyCamera = 0x554; // CHandle<C_SkyCamera>
}

public static class CTablet { // C_CSWeaponBase
}

public static class CTakeDamageInfoAPI {
}

public static class CTimeline { // IntervalTimer
    public const nint m_flValues = 0x10; // float[64]
    public const nint m_nValueCounts = 0x110; // int32_t[64]
    public const nint m_nBucketCount = 0x210; // int32_t
    public const nint m_flInterval = 0x214; // float
    public const nint m_flFinalValue = 0x218; // float
    public const nint m_nCompressionType = 0x21C; // TimelineCompression_t
    public const nint m_bStopped = 0x220; // bool
}

public static class CTripWireFire { // C_BaseCSGrenade
}

public static class CTripWireFireProjectile { // C_BaseGrenade
}

public static class CWaterSplasher { // C_BaseModelEntity
}

public static class CWeaponZoneRepulsor { // C_CSWeaponBaseGun
}

public static class C_AK47 { // C_CSWeaponBaseGun
}

public static class C_AttributeContainer { // CAttributeManager
    public const nint m_Item = 0x50; // C_EconItemView
    public const nint m_iExternalItemProviderRegisteredToken = 0x498; // int32_t
    public const nint m_ullRegisteredAsItemID = 0x4A0; // uint64_t
}

public static class C_BarnLight { // C_BaseModelEntity
    public const nint m_bEnabled = 0xCD0; // bool
    public const nint m_nColorMode = 0xCD4; // int32_t
    public const nint m_Color = 0xCD8; // Color
    public const nint m_flColorTemperature = 0xCDC; // float
    public const nint m_flBrightness = 0xCE0; // float
    public const nint m_flBrightnessScale = 0xCE4; // float
    public const nint m_nDirectLight = 0xCE8; // int32_t
    public const nint m_nBakedShadowIndex = 0xCEC; // int32_t
    public const nint m_nLuminaireShape = 0xCF0; // int32_t
    public const nint m_flLuminaireSize = 0xCF4; // float
    public const nint m_flLuminaireAnisotropy = 0xCF8; // float
    public const nint m_LightStyleString = 0xD00; // CUtlString
    public const nint m_flLightStyleStartTime = 0xD08; // GameTime_t
    public const nint m_QueuedLightStyleStrings = 0xD10; // C_NetworkUtlVectorBase<CUtlString>
    public const nint m_LightStyleEvents = 0xD28; // C_NetworkUtlVectorBase<CUtlString>
    public const nint m_LightStyleTargets = 0xD40; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
    public const nint m_StyleEvent = 0xD58; // CEntityIOOutput[4]
    public const nint m_hLightCookie = 0xDF8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_flShape = 0xE00; // float
    public const nint m_flSoftX = 0xE04; // float
    public const nint m_flSoftY = 0xE08; // float
    public const nint m_flSkirt = 0xE0C; // float
    public const nint m_flSkirtNear = 0xE10; // float
    public const nint m_vSizeParams = 0xE14; // Vector
    public const nint m_flRange = 0xE20; // float
    public const nint m_vShear = 0xE24; // Vector
    public const nint m_nBakeSpecularToCubemaps = 0xE30; // int32_t
    public const nint m_vBakeSpecularToCubemapsSize = 0xE34; // Vector
    public const nint m_nCastShadows = 0xE40; // int32_t
    public const nint m_nShadowMapSize = 0xE44; // int32_t
    public const nint m_nShadowPriority = 0xE48; // int32_t
    public const nint m_bContactShadow = 0xE4C; // bool
    public const nint m_nBounceLight = 0xE50; // int32_t
    public const nint m_flBounceScale = 0xE54; // float
    public const nint m_flMinRoughness = 0xE58; // float
    public const nint m_vAlternateColor = 0xE5C; // Vector
    public const nint m_fAlternateColorBrightness = 0xE68; // float
    public const nint m_nFog = 0xE6C; // int32_t
    public const nint m_flFogStrength = 0xE70; // float
    public const nint m_nFogShadows = 0xE74; // int32_t
    public const nint m_flFogScale = 0xE78; // float
    public const nint m_flFadeSizeStart = 0xE7C; // float
    public const nint m_flFadeSizeEnd = 0xE80; // float
    public const nint m_flShadowFadeSizeStart = 0xE84; // float
    public const nint m_flShadowFadeSizeEnd = 0xE88; // float
    public const nint m_bPrecomputedFieldsValid = 0xE8C; // bool
    public const nint m_vPrecomputedBoundsMins = 0xE90; // Vector
    public const nint m_vPrecomputedBoundsMaxs = 0xE9C; // Vector
    public const nint m_vPrecomputedOBBOrigin = 0xEA8; // Vector
    public const nint m_vPrecomputedOBBAngles = 0xEB4; // QAngle
    public const nint m_vPrecomputedOBBExtent = 0xEC0; // Vector
}

public static class C_BaseButton { // C_BaseToggle
    public const nint m_glowEntity = 0xCD0; // CHandle<C_BaseModelEntity>
    public const nint m_usable = 0xCD4; // bool
    public const nint m_szDisplayText = 0xCD8; // CUtlSymbolLarge
}

public static class C_BaseCSGrenade { // C_CSWeaponBase
    public const nint m_bClientPredictDelete = 0x1A70; // bool
    public const nint m_bRedraw = 0x1A71; // bool
    public const nint m_bIsHeldByPlayer = 0x1A72; // bool
    public const nint m_bPinPulled = 0x1A73; // bool
    public const nint m_bJumpThrow = 0x1A74; // bool
    public const nint m_bThrowAnimating = 0x1A75; // bool
    public const nint m_fThrowTime = 0x1A78; // GameTime_t
    public const nint m_flThrowStrength = 0x1A7C; // float
    public const nint m_flThrowStrengthApproach = 0x1A80; // float
    public const nint m_fDropTime = 0x1A84; // GameTime_t
    public const nint m_bJustPulledPin = 0x1A88; // bool
    public const nint m_nNextHoldTick = 0x1A8C; // GameTick_t
    public const nint m_flNextHoldFrac = 0x1A90; // float
    public const nint m_hSwitchToWeaponAfterThrow = 0x1A94; // CHandle<C_CSWeaponBase>
}

public static class C_BaseCSGrenadeProjectile { // C_BaseGrenade
    public const nint m_vInitialPosition = 0x10C0; // Vector
    public const nint m_vInitialVelocity = 0x10CC; // Vector
    public const nint m_nBounces = 0x10D8; // int32_t
    public const nint m_nExplodeEffectIndex = 0x10E0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    public const nint m_nExplodeEffectTickBegin = 0x10E8; // int32_t
    public const nint m_vecExplodeEffectOrigin = 0x10EC; // Vector
    public const nint m_flSpawnTime = 0x10F8; // GameTime_t
    public const nint vecLastTrailLinePos = 0x10FC; // Vector
    public const nint flNextTrailLineTime = 0x1108; // GameTime_t
    public const nint m_bExplodeEffectBegan = 0x110C; // bool
    public const nint m_bCanCreateGrenadeTrail = 0x110D; // bool
    public const nint m_nSnapshotTrajectoryEffectIndex = 0x1110; // ParticleIndex_t
    public const nint m_hSnapshotTrajectoryParticleSnapshot = 0x1118; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
    public const nint m_arrTrajectoryTrailPoints = 0x1120; // CUtlVector<Vector>
    public const nint m_arrTrajectoryTrailPointCreationTimes = 0x1138; // CUtlVector<float>
    public const nint m_flTrajectoryTrailEffectCreationTime = 0x1150; // float
}

public static class C_BaseClientUIEntity { // C_BaseModelEntity
    public const nint m_bEnabled = 0xCD8; // bool
    public const nint m_DialogXMLName = 0xCE0; // CUtlSymbolLarge
    public const nint m_PanelClassName = 0xCE8; // CUtlSymbolLarge
    public const nint m_PanelID = 0xCF0; // CUtlSymbolLarge
}

public static class C_BaseCombatCharacter { // C_BaseFlex
    public const nint m_hMyWearables = 0x1070; // C_NetworkUtlVectorBase<CHandle<C_EconWearable>>
    public const nint m_bloodColor = 0x1088; // int32_t
    public const nint m_leftFootAttachment = 0x108C; // AttachmentHandle_t
    public const nint m_rightFootAttachment = 0x108D; // AttachmentHandle_t
    public const nint m_nWaterWakeMode = 0x1090; // C_BaseCombatCharacter::WaterWakeMode_t
    public const nint m_flWaterWorldZ = 0x1094; // float
    public const nint m_flWaterNextTraceTime = 0x1098; // float
    public const nint m_flFieldOfView = 0x109C; // float
}

public static class C_BaseDoor { // C_BaseToggle
    public const nint m_bIsUsable = 0xCD0; // bool
}

public static class C_BaseEntity { // CEntityInstance
    public const nint m_CBodyComponent = 0x38; // CBodyComponent*
    public const nint m_NetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
    public const nint m_nLastThinkTick = 0x310; // GameTick_t
    public const nint m_pGameSceneNode = 0x318; // CGameSceneNode*
    public const nint m_pRenderComponent = 0x320; // CRenderComponent*
    public const nint m_pCollision = 0x328; // CCollisionProperty*
    public const nint m_iMaxHealth = 0x330; // int32_t
    public const nint m_iHealth = 0x334; // int32_t
    public const nint m_lifeState = 0x338; // uint8_t
    public const nint m_bTakesDamage = 0x339; // bool
    public const nint m_nTakeDamageFlags = 0x33C; // TakeDamageFlags_t
    public const nint m_bIsPlatform = 0x340; // bool
    public const nint m_ubInterpolationFrame = 0x341; // uint8_t
    public const nint m_hSceneObjectController = 0x344; // CHandle<C_BaseEntity>
    public const nint m_nNoInterpolationTick = 0x348; // int32_t
    public const nint m_nVisibilityNoInterpolationTick = 0x34C; // int32_t
    public const nint m_flProxyRandomValue = 0x350; // float
    public const nint m_iEFlags = 0x354; // int32_t
    public const nint m_nWaterType = 0x358; // uint8_t
    public const nint m_bInterpolateEvenWithNoModel = 0x359; // bool
    public const nint m_bPredictionEligible = 0x35A; // bool
    public const nint m_bApplyLayerMatchIDToModel = 0x35B; // bool
    public const nint m_tokLayerMatchID = 0x35C; // CUtlStringToken
    public const nint m_nSubclassID = 0x360; // CUtlStringToken
    public const nint m_nSimulationTick = 0x370; // int32_t
    public const nint m_iCurrentThinkContext = 0x374; // int32_t
    public const nint m_aThinkFunctions = 0x378; // CUtlVector<thinkfunc_t>
    public const nint m_nDisableContextThinkStartTick = 0x390; // GameTick_t
    public const nint m_flAnimTime = 0x394; // float
    public const nint m_flSimulationTime = 0x398; // float
    public const nint m_nSceneObjectOverrideFlags = 0x39C; // uint8_t
    public const nint m_bHasSuccessfullyInterpolated = 0x39D; // bool
    public const nint m_bHasAddedVarsToInterpolation = 0x39E; // bool
    public const nint m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x39F; // bool
    public const nint m_nInterpolationLatchDirtyFlags = 0x3A0; // int32_t[2]
    public const nint m_ListEntry = 0x3A8; // uint16_t[11]
    public const nint m_flCreateTime = 0x3C0; // GameTime_t
    public const nint m_flSpeed = 0x3C4; // float
    public const nint m_EntClientFlags = 0x3C8; // uint16_t
    public const nint m_bClientSideRagdoll = 0x3CA; // bool
    public const nint m_iTeamNum = 0x3CB; // uint8_t
    public const nint m_spawnflags = 0x3CC; // uint32_t
    public const nint m_nNextThinkTick = 0x3D0; // GameTick_t
    public const nint m_fFlags = 0x3D4; // uint32_t
    public const nint m_vecAbsVelocity = 0x3D8; // Vector
    public const nint m_vecVelocity = 0x3E8; // CNetworkVelocityVector
    public const nint m_vecBaseVelocity = 0x418; // Vector
    public const nint m_hEffectEntity = 0x424; // CHandle<C_BaseEntity>
    public const nint m_hOwnerEntity = 0x428; // CHandle<C_BaseEntity>
    public const nint m_MoveCollide = 0x42C; // MoveCollide_t
    public const nint m_MoveType = 0x42D; // MoveType_t
    public const nint m_nActualMoveType = 0x42E; // MoveType_t
    public const nint m_flWaterLevel = 0x430; // float
    public const nint m_fEffects = 0x434; // uint32_t
    public const nint m_hGroundEntity = 0x438; // CHandle<C_BaseEntity>
    public const nint m_flFriction = 0x43C; // float
    public const nint m_flElasticity = 0x440; // float
    public const nint m_flGravityScale = 0x444; // float
    public const nint m_flTimeScale = 0x448; // float
    public const nint m_bAnimatedEveryTick = 0x44C; // bool
    public const nint m_flNavIgnoreUntilTime = 0x450; // GameTime_t
    public const nint m_hThink = 0x454; // uint16_t
    public const nint m_fBBoxVisFlags = 0x460; // uint8_t
    public const nint m_bPredictable = 0x461; // bool
    public const nint m_bRenderWithViewModels = 0x462; // bool
    public const nint m_nSplitUserPlayerPredictionSlot = 0x464; // CSplitScreenSlot
    public const nint m_nFirstPredictableCommand = 0x468; // int32_t
    public const nint m_nLastPredictableCommand = 0x46C; // int32_t
    public const nint m_hOldMoveParent = 0x470; // CHandle<C_BaseEntity>
    public const nint m_Particles = 0x478; // CParticleProperty
    public const nint m_vecPredictedScriptFloats = 0x4A0; // CUtlVector<float>
    public const nint m_vecPredictedScriptFloatIDs = 0x4B8; // CUtlVector<int32_t>
    public const nint m_nNextScriptVarRecordID = 0x4E8; // int32_t
    public const nint m_vecAngVelocity = 0x4F8; // QAngle
    public const nint m_DataChangeEventRef = 0x504; // int32_t
    public const nint m_dependencies = 0x508; // CUtlVector<CEntityHandle>
    public const nint m_nCreationTick = 0x520; // int32_t
    public const nint m_bAnimTimeChanged = 0x539; // bool
    public const nint m_bSimulationTimeChanged = 0x53A; // bool
    public const nint m_sUniqueHammerID = 0x548; // CUtlString
}

public static class C_BaseEntityAPI {
}

public static class C_BaseFire { // C_BaseEntity
    public const nint m_flScale = 0x550; // float
    public const nint m_flStartScale = 0x554; // float
    public const nint m_flScaleTime = 0x558; // float
    public const nint m_nFlags = 0x55C; // uint32_t
}

public static class C_BaseFlex { // CBaseAnimGraph
    public const nint m_flexWeight = 0xEE8; // C_NetworkUtlVectorBase<float>
    public const nint m_vLookTargetPosition = 0xF00; // Vector
    public const nint m_blinktoggle = 0xF18; // bool
    public const nint m_nLastFlexUpdateFrameCount = 0xF78; // int32_t
    public const nint m_CachedViewTarget = 0xF7C; // Vector
    public const nint m_nNextSceneEventId = 0xF88; // uint32_t
    public const nint m_iBlink = 0xF8C; // int32_t
    public const nint m_blinktime = 0xF90; // float
    public const nint m_prevblinktoggle = 0xF94; // bool
    public const nint m_iJawOpen = 0xF98; // int32_t
    public const nint m_flJawOpenAmount = 0xF9C; // float
    public const nint m_flBlinkAmount = 0xFA0; // float
    public const nint m_iMouthAttachment = 0xFA4; // AttachmentHandle_t
    public const nint m_iEyeAttachment = 0xFA5; // AttachmentHandle_t
    public const nint m_bResetFlexWeightsOnModelChange = 0xFA6; // bool
    public const nint m_nEyeOcclusionRendererBone = 0xFC0; // int32_t
    public const nint m_mEyeOcclusionRendererCameraToBoneTransform = 0xFC4; // matrix3x4_t
    public const nint m_vEyeOcclusionRendererHalfExtent = 0xFF4; // Vector
    public const nint m_PhonemeClasses = 0x1010; // C_BaseFlex::Emphasized_Phoneme[3]
}

public static class C_BaseFlex_Emphasized_Phoneme {
    public const nint m_sClassName = 0x0; // CUtlString
    public const nint m_flAmount = 0x18; // float
    public const nint m_bRequired = 0x1C; // bool
    public const nint m_bBasechecked = 0x1D; // bool
    public const nint m_bValid = 0x1E; // bool
}

public static class C_BaseGrenade { // C_BaseFlex
    public const nint m_bHasWarnedAI = 0x1070; // bool
    public const nint m_bIsSmokeGrenade = 0x1071; // bool
    public const nint m_bIsLive = 0x1072; // bool
    public const nint m_DmgRadius = 0x1074; // float
    public const nint m_flDetonateTime = 0x1078; // GameTime_t
    public const nint m_flWarnAITime = 0x107C; // float
    public const nint m_flDamage = 0x1080; // float
    public const nint m_iszBounceSound = 0x1088; // CUtlSymbolLarge
    public const nint m_ExplosionSound = 0x1090; // CUtlString
    public const nint m_hThrower = 0x109C; // CHandle<C_CSPlayerPawn>
    public const nint m_flNextAttack = 0x10B4; // GameTime_t
    public const nint m_hOriginalThrower = 0x10B8; // CHandle<C_CSPlayerPawn>
}

public static class C_BaseModelEntity { // C_BaseEntity
    public const nint m_CRenderComponent = 0xA20; // CRenderComponent*
    public const nint m_CHitboxComponent = 0xA28; // CHitboxComponent
    public const nint m_bInitModelEffects = 0xA70; // bool
    public const nint m_bIsStaticProp = 0xA71; // bool
    public const nint m_nLastAddDecal = 0xA74; // int32_t
    public const nint m_nDecalsAdded = 0xA78; // int32_t
    public const nint m_iOldHealth = 0xA7C; // int32_t
    public const nint m_nRenderMode = 0xA80; // RenderMode_t
    public const nint m_nRenderFX = 0xA81; // RenderFx_t
    public const nint m_bAllowFadeInView = 0xA82; // bool
    public const nint m_clrRender = 0xA83; // Color
    public const nint m_vecRenderAttributes = 0xA88; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
    public const nint m_bRenderToCubemaps = 0xAF0; // bool
    public const nint m_Collision = 0xAF8; // CCollisionProperty
    public const nint m_Glow = 0xBA8; // CGlowProperty
    public const nint m_flGlowBackfaceMult = 0xC00; // float
    public const nint m_fadeMinDist = 0xC04; // float
    public const nint m_fadeMaxDist = 0xC08; // float
    public const nint m_flFadeScale = 0xC0C; // float
    public const nint m_flShadowStrength = 0xC10; // float
    public const nint m_nObjectCulling = 0xC14; // uint8_t
    public const nint m_nAddDecal = 0xC18; // int32_t
    public const nint m_vDecalPosition = 0xC1C; // Vector
    public const nint m_vDecalForwardAxis = 0xC28; // Vector
    public const nint m_flDecalHealBloodRate = 0xC34; // float
    public const nint m_flDecalHealHeightRate = 0xC38; // float
    public const nint m_ConfigEntitiesToPropagateMaterialDecalsTo = 0xC40; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
    public const nint m_vecViewOffset = 0xC58; // CNetworkViewOffsetVector
    public const nint m_pClientAlphaProperty = 0xC88; // CClientAlphaProperty*
    public const nint m_ClientOverrideTint = 0xC90; // Color
    public const nint m_bUseClientOverrideTint = 0xC94; // bool
}

public static class C_BasePlayerPawn { // C_BaseCombatCharacter
    public const nint m_pWeaponServices = 0x1100; // CPlayer_WeaponServices*
    public const nint m_pItemServices = 0x1108; // CPlayer_ItemServices*
    public const nint m_pAutoaimServices = 0x1110; // CPlayer_AutoaimServices*
    public const nint m_pObserverServices = 0x1118; // CPlayer_ObserverServices*
    public const nint m_pWaterServices = 0x1120; // CPlayer_WaterServices*
    public const nint m_pUseServices = 0x1128; // CPlayer_UseServices*
    public const nint m_pFlashlightServices = 0x1130; // CPlayer_FlashlightServices*
    public const nint m_pCameraServices = 0x1138; // CPlayer_CameraServices*
    public const nint m_pMovementServices = 0x1140; // CPlayer_MovementServices*
    public const nint m_ServerViewAngleChanges = 0x1150; // C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
    public const nint m_nHighestConsumedServerViewAngleChangeIndex = 0x11A0; // uint32_t
    public const nint v_angle = 0x11A4; // QAngle
    public const nint v_anglePrevious = 0x11B0; // QAngle
    public const nint m_iHideHUD = 0x11BC; // uint32_t
    public const nint m_skybox3d = 0x11C0; // sky3dparams_t
    public const nint m_flDeathTime = 0x1250; // GameTime_t
    public const nint m_vecPredictionError = 0x1254; // Vector
    public const nint m_flPredictionErrorTime = 0x1260; // GameTime_t
    public const nint m_vecLastCameraSetupLocalOrigin = 0x1264; // Vector
    public const nint m_flLastCameraSetupTime = 0x1270; // GameTime_t
    public const nint m_flFOVSensitivityAdjust = 0x1274; // float
    public const nint m_flMouseSensitivity = 0x1278; // float
    public const nint m_vOldOrigin = 0x127C; // Vector
    public const nint m_flOldSimulationTime = 0x1288; // float
    public const nint m_nLastExecutedCommandNumber = 0x128C; // int32_t
    public const nint m_nLastExecutedCommandTick = 0x1290; // int32_t
    public const nint m_hController = 0x1294; // CHandle<CBasePlayerController>
    public const nint m_bIsSwappingToPredictableController = 0x1298; // bool
}

public static class C_BasePlayerWeapon { // C_EconEntity
    public const nint m_nNextPrimaryAttackTick = 0x15B8; // GameTick_t
    public const nint m_flNextPrimaryAttackTickRatio = 0x15BC; // float
    public const nint m_nNextSecondaryAttackTick = 0x15C0; // GameTick_t
    public const nint m_flNextSecondaryAttackTickRatio = 0x15C4; // float
    public const nint m_iClip1 = 0x15C8; // int32_t
    public const nint m_iClip2 = 0x15CC; // int32_t
    public const nint m_pReserveAmmo = 0x15D0; // int32_t[2]
}

public static class C_BasePropDoor { // C_DynamicProp
    public const nint m_eDoorState = 0x1150; // DoorState_t
    public const nint m_modelChanged = 0x1154; // bool
    public const nint m_bLocked = 0x1155; // bool
    public const nint m_closedPosition = 0x1158; // Vector
    public const nint m_closedAngles = 0x1164; // QAngle
    public const nint m_hMaster = 0x1170; // CHandle<C_BasePropDoor>
    public const nint m_vWhereToSetLightingOrigin = 0x1174; // Vector
}

public static class C_BaseToggle { // C_BaseModelEntity
}

public static class C_BaseTrigger { // C_BaseToggle
    public const nint m_bDisabled = 0xCD0; // bool
    public const nint m_bClientSidePredicted = 0xCD1; // bool
}

public static class C_BaseViewModel { // CBaseAnimGraph
    public const nint m_vecLastFacing = 0xEE0; // Vector
    public const nint m_nViewModelIndex = 0xEEC; // uint32_t
    public const nint m_nAnimationParity = 0xEF0; // uint32_t
    public const nint m_flAnimationStartTime = 0xEF4; // float
    public const nint m_hWeapon = 0xEF8; // CHandle<C_BasePlayerWeapon>
    public const nint m_sVMName = 0xF00; // CUtlSymbolLarge
    public const nint m_sAnimationPrefix = 0xF08; // CUtlSymbolLarge
    public const nint m_hWeaponModel = 0xF10; // CHandle<C_ViewmodelWeapon>
    public const nint m_iCameraAttachment = 0xF14; // AttachmentHandle_t
    public const nint m_vecLastCameraAngles = 0xF18; // QAngle
    public const nint m_previousElapsedDuration = 0xF24; // float
    public const nint m_previousCycle = 0xF28; // float
    public const nint m_nOldAnimationParity = 0xF2C; // int32_t
    public const nint m_hOldLayerSequence = 0xF30; // HSequence
    public const nint m_oldLayer = 0xF34; // int32_t
    public const nint m_oldLayerStartTime = 0xF38; // float
    public const nint m_hControlPanel = 0xF3C; // CHandle<C_BaseEntity>
}

public static class C_Beam { // C_BaseModelEntity
    public const nint m_flFrameRate = 0xCD0; // float
    public const nint m_flHDRColorScale = 0xCD4; // float
    public const nint m_flFireTime = 0xCD8; // GameTime_t
    public const nint m_flDamage = 0xCDC; // float
    public const nint m_nNumBeamEnts = 0xCE0; // uint8_t
    public const nint m_queryHandleHalo = 0xCE4; // int32_t
    public const nint m_hBaseMaterial = 0xD08; // CStrongHandle<InfoForResourceTypeIMaterial2>
    public const nint m_nHaloIndex = 0xD10; // CStrongHandle<InfoForResourceTypeIMaterial2>
    public const nint m_nBeamType = 0xD18; // BeamType_t
    public const nint m_nBeamFlags = 0xD1C; // uint32_t
    public const nint m_hAttachEntity = 0xD20; // CHandle<C_BaseEntity>[10]
    public const nint m_nAttachIndex = 0xD48; // AttachmentHandle_t[10]
    public const nint m_fWidth = 0xD54; // float
    public const nint m_fEndWidth = 0xD58; // float
    public const nint m_fFadeLength = 0xD5C; // float
    public const nint m_fHaloScale = 0xD60; // float
    public const nint m_fAmplitude = 0xD64; // float
    public const nint m_fStartFrame = 0xD68; // float
    public const nint m_fSpeed = 0xD6C; // float
    public const nint m_flFrame = 0xD70; // float
    public const nint m_nClipStyle = 0xD74; // BeamClipStyle_t
    public const nint m_bTurnedOff = 0xD78; // bool
    public const nint m_vecEndPos = 0xD7C; // Vector
    public const nint m_hEndEntity = 0xD88; // CHandle<C_BaseEntity>
}

public static class C_Breakable { // C_BaseModelEntity
}

public static class C_BreakableProp { // CBaseProp
    public const nint m_OnBreak = 0xF20; // CEntityIOOutput
    public const nint m_OnHealthChanged = 0xF48; // CEntityOutputTemplate<float>
    public const nint m_OnTakeDamage = 0xF70; // CEntityIOOutput
    public const nint m_impactEnergyScale = 0xF98; // float
    public const nint m_iMinHealthDmg = 0xF9C; // int32_t
    public const nint m_flPressureDelay = 0xFA0; // float
    public const nint m_hBreaker = 0xFA4; // CHandle<C_BaseEntity>
    public const nint m_PerformanceMode = 0xFA8; // PerformanceMode_t
    public const nint m_flDmgModBullet = 0xFAC; // float
    public const nint m_flDmgModClub = 0xFB0; // float
    public const nint m_flDmgModExplosive = 0xFB4; // float
    public const nint m_flDmgModFire = 0xFB8; // float
    public const nint m_iszPhysicsDamageTableName = 0xFC0; // CUtlSymbolLarge
    public const nint m_iszBasePropData = 0xFC8; // CUtlSymbolLarge
    public const nint m_iInteractions = 0xFD0; // int32_t
    public const nint m_flPreventDamageBeforeTime = 0xFD4; // GameTime_t
    public const nint m_bHasBreakPiecesOrCommands = 0xFD8; // bool
    public const nint m_explodeDamage = 0xFDC; // float
    public const nint m_explodeRadius = 0xFE0; // float
    public const nint m_explosionDelay = 0xFE8; // float
    public const nint m_explosionBuildupSound = 0xFF0; // CUtlSymbolLarge
    public const nint m_explosionCustomEffect = 0xFF8; // CUtlSymbolLarge
    public const nint m_explosionCustomSound = 0x1000; // CUtlSymbolLarge
    public const nint m_explosionModifier = 0x1008; // CUtlSymbolLarge
    public const nint m_hPhysicsAttacker = 0x1010; // CHandle<C_BasePlayerPawn>
    public const nint m_flLastPhysicsInfluenceTime = 0x1014; // GameTime_t
    public const nint m_flDefaultFadeScale = 0x1018; // float
    public const nint m_hLastAttacker = 0x101C; // CHandle<C_BaseEntity>
    public const nint m_hFlareEnt = 0x1020; // CHandle<C_BaseEntity>
    public const nint m_noGhostCollision = 0x1024; // bool
}

public static class C_BulletHitModel { // CBaseAnimGraph
    public const nint m_matLocal = 0xED8; // matrix3x4_t
    public const nint m_iBoneIndex = 0xF08; // int32_t
    public const nint m_hPlayerParent = 0xF0C; // CHandle<C_BaseEntity>
    public const nint m_bIsHit = 0xF10; // bool
    public const nint m_flTimeCreated = 0xF14; // float
    public const nint m_vecStartPos = 0xF18; // Vector
}

public static class C_C4 { // C_CSWeaponBase
    public const nint m_szScreenText = 0x1A70; // char[32]
    public const nint m_activeLightParticleIndex = 0x1A90; // ParticleIndex_t
    public const nint m_eActiveLightEffect = 0x1A94; // C4LightEffect_t
    public const nint m_bStartedArming = 0x1A98; // bool
    public const nint m_fArmedTime = 0x1A9C; // GameTime_t
    public const nint m_bBombPlacedAnimation = 0x1AA0; // bool
    public const nint m_bIsPlantingViaUse = 0x1AA1; // bool
    public const nint m_entitySpottedState = 0x1AA8; // EntitySpottedState_t
    public const nint m_nSpotRules = 0x1AC0; // int32_t
    public const nint m_bPlayedArmingBeeps = 0x1AC4; // bool[7]
    public const nint m_bBombPlanted = 0x1ACB; // bool
}

public static class C_CSGOViewModel { // C_PredictedViewModel
    public const nint m_bShouldIgnoreOffsetAndAccuracy = 0xF68; // bool
    public const nint m_nWeaponParity = 0xF6C; // uint32_t
    public const nint m_nOldWeaponParity = 0xF70; // uint32_t
    public const nint m_nLastKnownAssociatedWeaponEntIndex = 0xF74; // CEntityIndex
    public const nint m_bNeedToQueueHighResComposite = 0xF78; // bool
    public const nint m_vLoweredWeaponOffset = 0xFDC; // QAngle
}

public static class C_CSGO_CounterTerroristTeamIntroCamera { // C_CSGO_TeamPreviewCamera
}

public static class C_CSGO_CounterTerroristWingmanIntroCamera { // C_CSGO_TeamPreviewCamera
}

public static class C_CSGO_EndOfMatchCamera { // C_CSGO_TeamPreviewCamera
}

public static class C_CSGO_EndOfMatchCharacterPosition { // C_CSGO_TeamPreviewCharacterPosition
}

public static class C_CSGO_EndOfMatchLineupEnd { // C_CSGO_EndOfMatchLineupEndpoint
}

public static class C_CSGO_EndOfMatchLineupEndpoint { // C_BaseEntity
}

public static class C_CSGO_EndOfMatchLineupStart { // C_CSGO_EndOfMatchLineupEndpoint
}

public static class C_CSGO_MapPreviewCameraPath { // C_BaseEntity
    public const nint m_flZFar = 0x550; // float
    public const nint m_flZNear = 0x554; // float
    public const nint m_bLoop = 0x558; // bool
    public const nint m_bVerticalFOV = 0x559; // bool
    public const nint m_bConstantSpeed = 0x55A; // bool
    public const nint m_flDuration = 0x55C; // float
    public const nint m_flPathLength = 0x5A0; // float
    public const nint m_flPathDuration = 0x5A4; // float
}

public static class C_CSGO_MapPreviewCameraPathNode { // C_BaseEntity
    public const nint m_szParentPathUniqueID = 0x550; // CUtlSymbolLarge
    public const nint m_nPathIndex = 0x558; // int32_t
    public const nint m_vInTangentLocal = 0x55C; // Vector
    public const nint m_vOutTangentLocal = 0x568; // Vector
    public const nint m_flFOV = 0x574; // float
    public const nint m_flSpeed = 0x578; // float
    public const nint m_flEaseIn = 0x57C; // float
    public const nint m_flEaseOut = 0x580; // float
    public const nint m_vInTangentWorld = 0x584; // Vector
    public const nint m_vOutTangentWorld = 0x590; // Vector
}

public static class C_CSGO_PreviewModel { // C_BaseFlex
    public const nint m_animgraph = 0x1070; // CUtlString
    public const nint m_animgraphCharacterModeString = 0x1078; // CGlobalSymbol
    public const nint m_defaultAnim = 0x1080; // CUtlString
    public const nint m_nDefaultAnimLoopMode = 0x1088; // AnimLoopMode_t
    public const nint m_flInitialModelScale = 0x108C; // float
    public const nint m_sInitialWeaponState = 0x1090; // CUtlString
}

public static class C_CSGO_PreviewModelAlias_csgo_item_previewmodel { // C_CSGO_PreviewModel
}

public static class C_CSGO_PreviewModel_GraphController { // CAnimGraphControllerBase
    public const nint m_pszCharacterMode = 0x18; // CAnimGraphParamOptionalRef<char*>
    public const nint m_pszWeaponState = 0x38; // CAnimGraphParamOptionalRef<char*>
    public const nint m_pszWeaponType = 0x58; // CAnimGraphParamOptionalRef<char*>
    public const nint m_pszEndOfMatchCelebration = 0x78; // CAnimGraphParamOptionalRef<char*>
}

public static class C_CSGO_PreviewPlayer { // C_CSPlayerPawn
    public const nint m_animgraph = 0x2418; // CUtlString
    public const nint m_animgraphCharacterModeString = 0x2420; // CGlobalSymbol
    public const nint m_flInitialModelScale = 0x2428; // float
}

public static class C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel { // C_CSGO_PreviewPlayer
}

public static class C_CSGO_PreviewPlayer_GraphController { // CAnimGraphControllerBase
    public const nint m_pszCharacterMode = 0x18; // CAnimGraphParamOptionalRef<char*>
    public const nint m_pszTeamPreviewVariant = 0x38; // CAnimGraphParamOptionalRef<char*>
    public const nint m_pszTeamPreviewPosition = 0x58; // CAnimGraphParamOptionalRef<char*>
    public const nint m_pszEndOfMatchCelebration = 0x78; // CAnimGraphParamOptionalRef<char*>
    public const nint m_nTeamPreviewRandom = 0x98; // CAnimGraphParamOptionalRef<int32_t>
    public const nint m_pszWeaponState = 0xB0; // CAnimGraphParamOptionalRef<char*>
    public const nint m_pszWeaponType = 0xD0; // CAnimGraphParamOptionalRef<char*>
    public const nint m_bCT = 0xF0; // CAnimGraphParamOptionalRef<bool>
}

public static class C_CSGO_TeamIntroCharacterPosition { // C_CSGO_TeamPreviewCharacterPosition
}

public static class C_CSGO_TeamIntroCounterTerroristPosition { // C_CSGO_TeamIntroCharacterPosition
}

public static class C_CSGO_TeamIntroTerroristPosition { // C_CSGO_TeamIntroCharacterPosition
}

public static class C_CSGO_TeamPreviewCamera { // C_CSGO_MapPreviewCameraPath
    public const nint m_nVariant = 0x5B0; // int32_t
    public const nint m_bDofEnabled = 0x5B4; // bool
    public const nint m_flDofNearBlurry = 0x5B8; // float
    public const nint m_flDofNearCrisp = 0x5BC; // float
    public const nint m_flDofFarCrisp = 0x5C0; // float
    public const nint m_flDofFarBlurry = 0x5C4; // float
    public const nint m_flDofTiltToGround = 0x5C8; // float
}

public static class C_CSGO_TeamPreviewCharacterPosition { // C_BaseEntity
    public const nint m_nVariant = 0x550; // int32_t
    public const nint m_nRandom = 0x554; // int32_t
    public const nint m_nOrdinal = 0x558; // int32_t
    public const nint m_sWeaponName = 0x560; // CUtlString
    public const nint m_xuid = 0x568; // uint64_t
    public const nint m_agentItem = 0x570; // C_EconItemView
    public const nint m_glovesItem = 0x9B8; // C_EconItemView
    public const nint m_weaponItem = 0xE00; // C_EconItemView
}

public static class C_CSGO_TeamPreviewModel { // C_CSGO_PreviewPlayer
}

public static class C_CSGO_TeamSelectCamera { // C_CSGO_TeamPreviewCamera
}

public static class C_CSGO_TeamSelectCharacterPosition { // C_CSGO_TeamPreviewCharacterPosition
}

public static class C_CSGO_TeamSelectCounterTerroristPosition { // C_CSGO_TeamSelectCharacterPosition
}

public static class C_CSGO_TeamSelectTerroristPosition { // C_CSGO_TeamSelectCharacterPosition
}

public static class C_CSGO_TerroristTeamIntroCamera { // C_CSGO_TeamPreviewCamera
}

public static class C_CSGO_TerroristWingmanIntroCamera { // C_CSGO_TeamPreviewCamera
}

public static class C_CSGameRules { // C_TeamplayRules
    public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
    public const nint m_bFreezePeriod = 0x30; // bool
    public const nint m_bWarmupPeriod = 0x31; // bool
    public const nint m_fWarmupPeriodEnd = 0x34; // GameTime_t
    public const nint m_fWarmupPeriodStart = 0x38; // GameTime_t
    public const nint m_nTotalPausedTicks = 0x3C; // int32_t
    public const nint m_nPauseStartTick = 0x40; // int32_t
    public const nint m_bServerPaused = 0x44; // bool
    public const nint m_bGamePaused = 0x45; // bool
    public const nint m_bTerroristTimeOutActive = 0x46; // bool
    public const nint m_bCTTimeOutActive = 0x47; // bool
    public const nint m_flTerroristTimeOutRemaining = 0x48; // float
    public const nint m_flCTTimeOutRemaining = 0x4C; // float
    public const nint m_nTerroristTimeOuts = 0x50; // int32_t
    public const nint m_nCTTimeOuts = 0x54; // int32_t
    public const nint m_bTechnicalTimeOut = 0x58; // bool
    public const nint m_bMatchWaitingForResume = 0x59; // bool
    public const nint m_iRoundTime = 0x5C; // int32_t
    public const nint m_fMatchStartTime = 0x60; // float
    public const nint m_fRoundStartTime = 0x64; // GameTime_t
    public const nint m_flRestartRoundTime = 0x68; // GameTime_t
    public const nint m_bGameRestart = 0x6C; // bool
    public const nint m_flGameStartTime = 0x70; // float
    public const nint m_timeUntilNextPhaseStarts = 0x74; // float
    public const nint m_gamePhase = 0x78; // int32_t
    public const nint m_totalRoundsPlayed = 0x7C; // int32_t
    public const nint m_nRoundsPlayedThisPhase = 0x80; // int32_t
    public const nint m_nOvertimePlaying = 0x84; // int32_t
    public const nint m_iHostagesRemaining = 0x88; // int32_t
    public const nint m_bAnyHostageReached = 0x8C; // bool
    public const nint m_bMapHasBombTarget = 0x8D; // bool
    public const nint m_bMapHasRescueZone = 0x8E; // bool
    public const nint m_bMapHasBuyZone = 0x8F; // bool
    public const nint m_bIsQueuedMatchmaking = 0x90; // bool
    public const nint m_nQueuedMatchmakingMode = 0x94; // int32_t
    public const nint m_bIsValveDS = 0x98; // bool
    public const nint m_bLogoMap = 0x99; // bool
    public const nint m_bPlayAllStepSoundsOnServer = 0x9A; // bool
    public const nint m_iSpectatorSlotCount = 0x9C; // int32_t
    public const nint m_MatchDevice = 0xA0; // int32_t
    public const nint m_bHasMatchStarted = 0xA4; // bool
    public const nint m_nNextMapInMapgroup = 0xA8; // int32_t
    public const nint m_szTournamentEventName = 0xAC; // char[512]
    public const nint m_szTournamentEventStage = 0x2AC; // char[512]
    public const nint m_szMatchStatTxt = 0x4AC; // char[512]
    public const nint m_szTournamentPredictionsTxt = 0x6AC; // char[512]
    public const nint m_nTournamentPredictionsPct = 0x8AC; // int32_t
    public const nint m_flCMMItemDropRevealStartTime = 0x8B0; // GameTime_t
    public const nint m_flCMMItemDropRevealEndTime = 0x8B4; // GameTime_t
    public const nint m_bIsDroppingItems = 0x8B8; // bool
    public const nint m_bIsQuestEligible = 0x8B9; // bool
    public const nint m_bIsHltvActive = 0x8BA; // bool
    public const nint m_nGuardianModeWaveNumber = 0x8BC; // int32_t
    public const nint m_nGuardianModeSpecialKillsRemaining = 0x8C0; // int32_t
    public const nint m_nGuardianModeSpecialWeaponNeeded = 0x8C4; // int32_t
    public const nint m_nGuardianGrenadesToGiveBots = 0x8C8; // int32_t
    public const nint m_nNumHeaviesToSpawn = 0x8CC; // int32_t
    public const nint m_numGlobalGiftsGiven = 0x8D0; // uint32_t
    public const nint m_numGlobalGifters = 0x8D4; // uint32_t
    public const nint m_numGlobalGiftsPeriodSeconds = 0x8D8; // uint32_t
    public const nint m_arrFeaturedGiftersAccounts = 0x8DC; // uint32_t[4]
    public const nint m_arrFeaturedGiftersGifts = 0x8EC; // uint32_t[4]
    public const nint m_arrProhibitedItemIndices = 0x8FC; // uint16_t[100]
    public const nint m_arrTournamentActiveCasterAccounts = 0x9C4; // uint32_t[4]
    public const nint m_numBestOfMaps = 0x9D4; // int32_t
    public const nint m_nHalloweenMaskListSeed = 0x9D8; // int32_t
    public const nint m_bBombDropped = 0x9DC; // bool
    public const nint m_bBombPlanted = 0x9DD; // bool
    public const nint m_iRoundWinStatus = 0x9E0; // int32_t
    public const nint m_eRoundWinReason = 0x9E4; // int32_t
    public const nint m_bTCantBuy = 0x9E8; // bool
    public const nint m_bCTCantBuy = 0x9E9; // bool
    public const nint m_flGuardianBuyUntilTime = 0x9EC; // GameTime_t
    public const nint m_iMatchStats_RoundResults = 0x9F0; // int32_t[30]
    public const nint m_iMatchStats_PlayersAlive_CT = 0xA68; // int32_t[30]
    public const nint m_iMatchStats_PlayersAlive_T = 0xAE0; // int32_t[30]
    public const nint m_TeamRespawnWaveTimes = 0xB58; // float[32]
    public const nint m_flNextRespawnWave = 0xBD8; // GameTime_t[32]
    public const nint m_nServerQuestID = 0xC58; // int32_t
    public const nint m_vMinimapMins = 0xC5C; // Vector
    public const nint m_vMinimapMaxs = 0xC68; // Vector
    public const nint m_MinimapVerticalSectionHeights = 0xC74; // float[8]
    public const nint m_bDontIncrementCoopWave = 0xC94; // bool
    public const nint m_bSpawnedTerrorHuntHeavy = 0xC95; // bool
    public const nint m_nEndMatchMapGroupVoteTypes = 0xC98; // int32_t[10]
    public const nint m_nEndMatchMapGroupVoteOptions = 0xCC0; // int32_t[10]
    public const nint m_nEndMatchMapVoteWinner = 0xCE8; // int32_t
    public const nint m_iNumConsecutiveCTLoses = 0xCEC; // int32_t
    public const nint m_iNumConsecutiveTerroristLoses = 0xCF0; // int32_t
    public const nint m_bMarkClientStopRecordAtRoundEnd = 0xD10; // bool
    public const nint m_nMatchAbortedEarlyReason = 0xD68; // int32_t
    public const nint m_bHasTriggeredRoundStartMusic = 0xD6C; // bool
    public const nint m_bHasTriggeredCoopSpawnReset = 0xD6D; // bool
    public const nint m_bSwitchingTeamsAtRoundReset = 0xD6E; // bool
    public const nint m_pGameModeRules = 0xD88; // CCSGameModeRules*
    public const nint m_RetakeRules = 0xD90; // C_RetakeGameRules
    public const nint m_nMatchEndCount = 0xEA8; // uint8_t
    public const nint m_nTTeamIntroVariant = 0xEAC; // int32_t
    public const nint m_nCTTeamIntroVariant = 0xEB0; // int32_t
    public const nint m_bTeamIntroPeriod = 0xEB4; // bool
    public const nint m_iRoundEndWinnerTeam = 0xEB8; // int32_t
    public const nint m_eRoundEndReason = 0xEBC; // int32_t
    public const nint m_bRoundEndShowTimerDefend = 0xEC0; // bool
    public const nint m_iRoundEndTimerTime = 0xEC4; // int32_t
    public const nint m_sRoundEndFunFactToken = 0xEC8; // CUtlString
    public const nint m_iRoundEndFunFactPlayerSlot = 0xED0; // CPlayerSlot
    public const nint m_iRoundEndFunFactData1 = 0xED4; // int32_t
    public const nint m_iRoundEndFunFactData2 = 0xED8; // int32_t
    public const nint m_iRoundEndFunFactData3 = 0xEDC; // int32_t
    public const nint m_sRoundEndMessage = 0xEE0; // CUtlString
    public const nint m_iRoundEndPlayerCount = 0xEE8; // int32_t
    public const nint m_bRoundEndNoMusic = 0xEEC; // bool
    public const nint m_iRoundEndLegacy = 0xEF0; // int32_t
    public const nint m_nRoundEndCount = 0xEF4; // uint8_t
    public const nint m_iRoundStartRoundNumber = 0xEF8; // int32_t
    public const nint m_nRoundStartCount = 0xEFC; // uint8_t
    public const nint m_flLastPerfSampleTime = 0x4F08; // double
}

public static class C_CSGameRulesProxy { // C_GameRulesProxy
    public const nint m_pGameRules = 0x550; // C_CSGameRules*
}

public static class C_CSMinimapBoundary { // C_BaseEntity
}

public static class C_CSObserverPawn { // C_CSPlayerPawnBase
    public const nint m_hDetectParentChange = 0x1718; // CEntityHandle
}

public static class C_CSObserverPawnAPI {
}

public static class C_CSPlayerPawn { // C_CSPlayerPawnBase
    public const nint m_pBulletServices = 0x1718; // CCSPlayer_BulletServices*
    public const nint m_pHostageServices = 0x1720; // CCSPlayer_HostageServices*
    public const nint m_pBuyServices = 0x1728; // CCSPlayer_BuyServices*
    public const nint m_pGlowServices = 0x1730; // CCSPlayer_GlowServices*
    public const nint m_pActionTrackingServices = 0x1738; // CCSPlayer_ActionTrackingServices*
    public const nint m_flHealthShotBoostExpirationTime = 0x1740; // GameTime_t
    public const nint m_flLastFiredWeaponTime = 0x1744; // GameTime_t
    public const nint m_bHasFemaleVoice = 0x1748; // bool
    public const nint m_flLandseconds = 0x174C; // float
    public const nint m_flOldFallVelocity = 0x1750; // float
    public const nint m_szLastPlaceName = 0x1754; // char[18]
    public const nint m_bPrevDefuser = 0x1766; // bool
    public const nint m_bPrevHelmet = 0x1767; // bool
    public const nint m_nPrevArmorVal = 0x1768; // int32_t
    public const nint m_nPrevGrenadeAmmoCount = 0x176C; // int32_t
    public const nint m_unPreviousWeaponHash = 0x1770; // uint32_t
    public const nint m_unWeaponHash = 0x1774; // uint32_t
    public const nint m_bInBuyZone = 0x1778; // bool
    public const nint m_bPreviouslyInBuyZone = 0x1779; // bool
    public const nint m_aimPunchAngle = 0x177C; // QAngle
    public const nint m_aimPunchAngleVel = 0x1788; // QAngle
    public const nint m_aimPunchTickBase = 0x1794; // int32_t
    public const nint m_aimPunchTickFraction = 0x1798; // float
    public const nint m_aimPunchCache = 0x17A0; // CUtlVector<QAngle>
    public const nint m_bInLanding = 0x17C0; // bool
    public const nint m_flLandingTime = 0x17C4; // float
    public const nint m_bInHostageRescueZone = 0x17C8; // bool
    public const nint m_bInBombZone = 0x17C9; // bool
    public const nint m_bIsBuyMenuOpen = 0x17CA; // bool
    public const nint m_flTimeOfLastInjury = 0x17CC; // GameTime_t
    public const nint m_flNextSprayDecalTime = 0x17D0; // GameTime_t
    public const nint m_iRetakesOffering = 0x18E8; // int32_t
    public const nint m_iRetakesOfferingCard = 0x18EC; // int32_t
    public const nint m_bRetakesHasDefuseKit = 0x18F0; // bool
    public const nint m_bRetakesMVPLastRound = 0x18F1; // bool
    public const nint m_iRetakesMVPBoostItem = 0x18F4; // int32_t
    public const nint m_RetakesMVPBoostExtraUtility = 0x18F8; // loadout_slot_t
    public const nint m_bNeedToReApplyGloves = 0x1918; // bool
    public const nint m_EconGloves = 0x1920; // C_EconItemView
    public const nint m_nEconGlovesChanged = 0x1D68; // uint8_t
    public const nint m_bMustSyncRagdollState = 0x1D69; // bool
    public const nint m_nRagdollDamageBone = 0x1D6C; // int32_t
    public const nint m_vRagdollDamageForce = 0x1D70; // Vector
    public const nint m_vRagdollDamagePosition = 0x1D7C; // Vector
    public const nint m_szRagdollDamageWeaponName = 0x1D88; // char[64]
    public const nint m_bRagdollDamageHeadshot = 0x1DC8; // bool
    public const nint m_vRagdollServerOrigin = 0x1DCC; // Vector
    public const nint m_bLastHeadBoneTransformIsValid = 0x23E0; // bool
    public const nint m_lastLandTime = 0x23E4; // GameTime_t
    public const nint m_bOnGroundLastTick = 0x23E8; // bool
    public const nint m_qDeathEyeAngles = 0x2404; // QAngle
    public const nint m_bSkipOneHeadConstraintUpdate = 0x2410; // bool
}

public static class C_CSPlayerPawnAPI {
}

public static class C_CSPlayerPawnBase { // C_BasePlayerPawn
    public const nint m_pPingServices = 0x12C0; // CCSPlayer_PingServices*
    public const nint m_pViewModelServices = 0x12C8; // CPlayer_ViewModelServices*
    public const nint m_fRenderingClipPlane = 0x12D8; // float[4]
    public const nint m_nLastClipPlaneSetupFrame = 0x12E8; // int32_t
    public const nint m_vecLastClipCameraPos = 0x12EC; // Vector
    public const nint m_vecLastClipCameraForward = 0x12F8; // Vector
    public const nint m_bClipHitStaticWorld = 0x1304; // bool
    public const nint m_bCachedPlaneIsValid = 0x1305; // bool
    public const nint m_pClippingWeapon = 0x1308; // C_CSWeaponBase*
    public const nint m_previousPlayerState = 0x1310; // CSPlayerState
    public const nint m_flLastCollisionCeiling = 0x1314; // float
    public const nint m_flLastCollisionCeilingChangeTime = 0x1318; // float
    public const nint m_grenadeParameterStashTime = 0x1338; // GameTime_t
    public const nint m_bGrenadeParametersStashed = 0x133C; // bool
    public const nint m_angStashedShootAngles = 0x1340; // QAngle
    public const nint m_vecStashedGrenadeThrowPosition = 0x134C; // Vector
    public const nint m_vecStashedVelocity = 0x1358; // Vector
    public const nint m_angShootAngleHistory = 0x1364; // QAngle[2]
    public const nint m_vecThrowPositionHistory = 0x137C; // Vector[2]
    public const nint m_vecVelocityHistory = 0x1394; // Vector[2]
    public const nint m_thirdPersonHeading = 0x13B0; // QAngle
    public const nint m_flSlopeDropOffset = 0x13C8; // float
    public const nint m_flSlopeDropHeight = 0x13D8; // float
    public const nint m_vHeadConstraintOffset = 0x13E8; // Vector
    public const nint m_bIsScoped = 0x1400; // bool
    public const nint m_bIsWalking = 0x1401; // bool
    public const nint m_bResumeZoom = 0x1402; // bool
    public const nint m_iPlayerState = 0x1404; // CSPlayerState
    public const nint m_bIsDefusing = 0x1408; // bool
    public const nint m_bIsGrabbingHostage = 0x1409; // bool
    public const nint m_iBlockingUseActionInProgress = 0x140C; // CSPlayerBlockingUseAction_t
    public const nint m_bIsRescuing = 0x1410; // bool
    public const nint m_fImmuneToGunGameDamageTime = 0x1414; // GameTime_t
    public const nint m_fImmuneToGunGameDamageTimeLast = 0x1418; // GameTime_t
    public const nint m_bGunGameImmunity = 0x141C; // bool
    public const nint m_GunGameImmunityColor = 0x141D; // Color
    public const nint m_bHasMovedSinceSpawn = 0x1421; // bool
    public const nint m_fMolotovUseTime = 0x1424; // float
    public const nint m_fMolotovDamageTime = 0x1428; // float
    public const nint m_nWhichBombZone = 0x142C; // int32_t
    public const nint m_bInNoDefuseArea = 0x1430; // bool
    public const nint m_iThrowGrenadeCounter = 0x1434; // int32_t
    public const nint m_bWaitForNoAttack = 0x1438; // bool
    public const nint m_flGuardianTooFarDistFrac = 0x143C; // float
    public const nint m_flDetectedByEnemySensorTime = 0x1440; // GameTime_t
    public const nint m_flNextGuardianTooFarWarning = 0x1444; // float
    public const nint m_bSuppressGuardianTooFarWarningAudio = 0x1448; // bool
    public const nint m_bKilledByTaser = 0x1449; // bool
    public const nint m_iMoveState = 0x144C; // int32_t
    public const nint m_bCanMoveDuringFreezePeriod = 0x1450; // bool
    public const nint m_flLowerBodyYawTarget = 0x1454; // float
    public const nint m_bStrafing = 0x1458; // bool
    public const nint m_flLastSpawnTimeIndex = 0x145C; // GameTime_t
    public const nint m_flEmitSoundTime = 0x1460; // GameTime_t
    public const nint m_iAddonBits = 0x1464; // int32_t
    public const nint m_iPrimaryAddon = 0x1468; // int32_t
    public const nint m_iSecondaryAddon = 0x146C; // int32_t
    public const nint m_iProgressBarDuration = 0x1470; // int32_t
    public const nint m_flProgressBarStartTime = 0x1474; // float
    public const nint m_iDirection = 0x1478; // int32_t
    public const nint m_iShotsFired = 0x147C; // int32_t
    public const nint m_bNightVisionOn = 0x1480; // bool
    public const nint m_bHasNightVision = 0x1481; // bool
    public const nint m_flVelocityModifier = 0x1484; // float
    public const nint m_flHitHeading = 0x1488; // float
    public const nint m_nHitBodyPart = 0x148C; // int32_t
    public const nint m_iStartAccount = 0x1490; // int32_t
    public const nint m_vecIntroStartEyePosition = 0x1494; // Vector
    public const nint m_vecIntroStartPlayerForward = 0x14A0; // Vector
    public const nint m_flClientDeathTime = 0x14AC; // GameTime_t
    public const nint m_flNightVisionAlpha = 0x14B0; // float
    public const nint m_bScreenTearFrameCaptured = 0x14B4; // bool
    public const nint m_flFlashBangTime = 0x14B8; // float
    public const nint m_flFlashScreenshotAlpha = 0x14BC; // float
    public const nint m_flFlashOverlayAlpha = 0x14C0; // float
    public const nint m_bFlashBuildUp = 0x14C4; // bool
    public const nint m_bFlashDspHasBeenCleared = 0x14C5; // bool
    public const nint m_bFlashScreenshotHasBeenGrabbed = 0x14C6; // bool
    public const nint m_flFlashMaxAlpha = 0x14C8; // float
    public const nint m_flFlashDuration = 0x14CC; // float
    public const nint m_lastStandingPos = 0x14D0; // Vector
    public const nint m_vecLastMuzzleFlashPos = 0x14DC; // Vector
    public const nint m_angLastMuzzleFlashAngle = 0x14E8; // QAngle
    public const nint m_hMuzzleFlashShape = 0x14F4; // CHandle<C_BaseEntity>
    public const nint m_iHealthBarRenderMaskIndex = 0x14F8; // int32_t
    public const nint m_flHealthFadeValue = 0x14FC; // float
    public const nint m_flHealthFadeAlpha = 0x1500; // float
    public const nint m_nMyCollisionGroup = 0x1504; // int32_t
    public const nint m_ignoreLadderJumpTime = 0x1508; // float
    public const nint m_ladderSurpressionTimer = 0x1510; // CountdownTimer
    public const nint m_lastLadderNormal = 0x1528; // Vector
    public const nint m_lastLadderPos = 0x1534; // Vector
    public const nint m_flDeathCCWeight = 0x1548; // float
    public const nint m_bOldIsScoped = 0x154C; // bool
    public const nint m_flPrevRoundEndTime = 0x1550; // float
    public const nint m_flPrevMatchEndTime = 0x1554; // float
    public const nint m_unCurrentEquipmentValue = 0x1558; // uint16_t
    public const nint m_unRoundStartEquipmentValue = 0x155A; // uint16_t
    public const nint m_unFreezetimeEndEquipmentValue = 0x155C; // uint16_t
    public const nint m_vecThirdPersonViewPositionOverride = 0x1560; // Vector
    public const nint m_nHeavyAssaultSuitCooldownRemaining = 0x156C; // int32_t
    public const nint m_ArmorValue = 0x1570; // int32_t
    public const nint m_angEyeAngles = 0x1578; // QAngle
    public const nint m_fNextThinkPushAway = 0x1590; // float
    public const nint m_bShouldAutobuyDMWeapons = 0x1594; // bool
    public const nint m_bShouldAutobuyNow = 0x1595; // bool
    public const nint m_bHud_MiniScoreHidden = 0x1596; // bool
    public const nint m_bHud_RadarHidden = 0x1597; // bool
    public const nint m_nLastKillerIndex = 0x1598; // CEntityIndex
    public const nint m_nLastConcurrentKilled = 0x159C; // int32_t
    public const nint m_nDeathCamMusic = 0x15A0; // int32_t
    public const nint m_iIDEntIndex = 0x15A4; // CEntityIndex
    public const nint m_delayTargetIDTimer = 0x15A8; // CountdownTimer
    public const nint m_iTargetedWeaponEntIndex = 0x15C0; // CEntityIndex
    public const nint m_iOldIDEntIndex = 0x15C4; // CEntityIndex
    public const nint m_holdTargetIDTimer = 0x15C8; // CountdownTimer
    public const nint m_flCurrentMusicStartTime = 0x15E4; // float
    public const nint m_flMusicRoundStartTime = 0x15E8; // float
    public const nint m_bDeferStartMusicOnWarmup = 0x15EC; // bool
    public const nint m_cycleLatch = 0x15F0; // int32_t
    public const nint m_serverIntendedCycle = 0x15F4; // float
    public const nint m_vecPlayerPatchEconIndices = 0x15F8; // uint32_t[5]
    public const nint m_bHideTargetID = 0x1614; // bool
    public const nint m_flLastSmokeOverlayAlpha = 0x1618; // float
    public const nint m_flLastSmokeAge = 0x161C; // float
    public const nint m_vLastSmokeOverlayColor = 0x1620; // Vector
    public const nint m_nPlayerSmokedFx = 0x162C; // ParticleIndex_t
    public const nint m_nPlayerInfernoBodyFx = 0x1630; // ParticleIndex_t
    public const nint m_nPlayerInfernoFootFx = 0x1634; // ParticleIndex_t
    public const nint m_flNextMagDropTime = 0x1638; // float
    public const nint m_nLastMagDropAttachmentIndex = 0x163C; // int32_t
    public const nint m_vecBulletHitModels = 0x1640; // CUtlVector<C_BulletHitModel*>
    public const nint m_vecPickupModelSlerpers = 0x1658; // CUtlVector<C_PickUpModelSlerper*>
    public const nint m_vecLastAliveLocalVelocity = 0x1670; // Vector
    public const nint m_entitySpottedState = 0x1698; // EntitySpottedState_t
    public const nint m_nSurvivalTeamNumber = 0x16B0; // int32_t
    public const nint m_bGuardianShouldSprayCustomXMark = 0x16B4; // bool
    public const nint m_bHasDeathInfo = 0x16B5; // bool
    public const nint m_flDeathInfoTime = 0x16B8; // float
    public const nint m_vecDeathInfoOrigin = 0x16BC; // Vector
    public const nint m_bKilledByHeadshot = 0x16C8; // bool
    public const nint m_hOriginalController = 0x16CC; // CHandle<CCSPlayerController>
}

public static class C_CSPlayerResource { // C_BaseEntity
    public const nint m_bHostageAlive = 0x550; // bool[12]
    public const nint m_isHostageFollowingSomeone = 0x55C; // bool[12]
    public const nint m_iHostageEntityIDs = 0x568; // CEntityIndex[12]
    public const nint m_bombsiteCenterA = 0x598; // Vector
    public const nint m_bombsiteCenterB = 0x5A4; // Vector
    public const nint m_hostageRescueX = 0x5B0; // int32_t[4]
    public const nint m_hostageRescueY = 0x5C0; // int32_t[4]
    public const nint m_hostageRescueZ = 0x5D0; // int32_t[4]
    public const nint m_bEndMatchNextMapAllVoted = 0x5E0; // bool
    public const nint m_foundGoalPositions = 0x5E1; // bool
}

public static class C_CSTeam { // C_Team
    public const nint m_szTeamMatchStat = 0x608; // char[512]
    public const nint m_numMapVictories = 0x808; // int32_t
    public const nint m_bSurrendered = 0x80C; // bool
    public const nint m_scoreFirstHalf = 0x810; // int32_t
    public const nint m_scoreSecondHalf = 0x814; // int32_t
    public const nint m_scoreOvertime = 0x818; // int32_t
    public const nint m_szClanTeamname = 0x81C; // char[129]
    public const nint m_iClanID = 0x8A0; // uint32_t
    public const nint m_szTeamFlagImage = 0x8A4; // char[8]
    public const nint m_szTeamLogoImage = 0x8AC; // char[8]
}

public static class C_CSWeaponBase { // C_BasePlayerWeapon
    public const nint m_flFireSequenceStartTime = 0x162C; // float
    public const nint m_nFireSequenceStartTimeChange = 0x1630; // int32_t
    public const nint m_nFireSequenceStartTimeAck = 0x1634; // int32_t
    public const nint m_ePlayerFireEvent = 0x1638; // PlayerAnimEvent_t
    public const nint m_ePlayerFireEventAttackType = 0x163C; // WeaponAttackType_t
    public const nint m_seqIdle = 0x1640; // HSequence
    public const nint m_seqFirePrimary = 0x1644; // HSequence
    public const nint m_seqFireSecondary = 0x1648; // HSequence
    public const nint m_thirdPersonFireSequences = 0x1650; // CUtlVector<HSequence>
    public const nint m_hCurrentThirdPersonSequence = 0x1668; // HSequence
    public const nint m_nSilencerBoneIndex = 0x166C; // int32_t
    public const nint m_thirdPersonSequences = 0x1670; // HSequence[7]
    public const nint m_ClientPreviousWeaponState = 0x16A8; // CSWeaponState_t
    public const nint m_iState = 0x16AC; // CSWeaponState_t
    public const nint m_flCrosshairDistance = 0x16B0; // float
    public const nint m_iAmmoLastCheck = 0x16B4; // int32_t
    public const nint m_iAlpha = 0x16B8; // int32_t
    public const nint m_iScopeTextureID = 0x16BC; // int32_t
    public const nint m_iCrosshairTextureID = 0x16C0; // int32_t
    public const nint m_flGunAccuracyPositionDeprecated = 0x16C4; // float
    public const nint m_nLastEmptySoundCmdNum = 0x16C8; // int32_t
    public const nint m_nViewModelIndex = 0x16CC; // uint32_t
    public const nint m_bReloadsWithClips = 0x16D0; // bool
    public const nint m_flTimeWeaponIdle = 0x16D4; // GameTime_t
    public const nint m_bFireOnEmpty = 0x16D8; // bool
    public const nint m_OnPlayerPickup = 0x16E0; // CEntityIOOutput
    public const nint m_weaponMode = 0x1708; // CSWeaponMode
    public const nint m_flTurningInaccuracyDelta = 0x170C; // float
    public const nint m_vecTurningInaccuracyEyeDirLast = 0x1710; // Vector
    public const nint m_flTurningInaccuracy = 0x171C; // float
    public const nint m_fAccuracyPenalty = 0x1720; // float
    public const nint m_flLastAccuracyUpdateTime = 0x1724; // GameTime_t
    public const nint m_fAccuracySmoothedForZoom = 0x1728; // float
    public const nint m_fScopeZoomEndTime = 0x172C; // GameTime_t
    public const nint m_iRecoilIndex = 0x1730; // int32_t
    public const nint m_flRecoilIndex = 0x1734; // float
    public const nint m_bBurstMode = 0x1738; // bool
    public const nint m_nPostponeFireReadyTicks = 0x173C; // GameTick_t
    public const nint m_flPostponeFireReadyFrac = 0x1740; // float
    public const nint m_bInReload = 0x1744; // bool
    public const nint m_bReloadVisuallyComplete = 0x1745; // bool
    public const nint m_flDroppedAtTime = 0x1748; // GameTime_t
    public const nint m_bIsHauledBack = 0x174C; // bool
    public const nint m_bSilencerOn = 0x174D; // bool
    public const nint m_flTimeSilencerSwitchComplete = 0x1750; // GameTime_t
    public const nint m_iOriginalTeamNumber = 0x1754; // int32_t
    public const nint m_flNextAttackRenderTimeOffset = 0x1758; // float
    public const nint m_bVisualsDataSet = 0x17E0; // bool
    public const nint m_bOldFirstPersonSpectatedState = 0x17E1; // bool
    public const nint m_hOurPing = 0x17E4; // CHandle<C_BaseEntity>
    public const nint m_nOurPingIndex = 0x17E8; // CEntityIndex
    public const nint m_vecOurPingPos = 0x17EC; // Vector
    public const nint m_bGlowForPing = 0x17F8; // bool
    public const nint m_bUIWeapon = 0x17F9; // bool
    public const nint m_hPrevOwner = 0x1808; // CHandle<C_CSPlayerPawn>
    public const nint m_nDropTick = 0x180C; // GameTick_t
    public const nint m_donated = 0x182C; // bool
    public const nint m_fLastShotTime = 0x1830; // GameTime_t
    public const nint m_bWasOwnedByCT = 0x1834; // bool
    public const nint m_bWasOwnedByTerrorist = 0x1835; // bool
    public const nint m_gunHeat = 0x1838; // float
    public const nint m_smokeAttachments = 0x183C; // uint32_t
    public const nint m_lastSmokeTime = 0x1840; // GameTime_t
    public const nint m_flNextClientFireBulletTime = 0x1844; // float
    public const nint m_flNextClientFireBulletTime_Repredict = 0x1848; // float
    public const nint m_IronSightController = 0x1920; // C_IronSightController
    public const nint m_iIronSightMode = 0x19D0; // int32_t
    public const nint m_flLastLOSTraceFailureTime = 0x19E0; // GameTime_t
    public const nint m_iNumEmptyAttacks = 0x19E4; // int32_t
    public const nint m_flLastMagDropRequestTime = 0x1A60; // GameTime_t
    public const nint m_flWatTickOffset = 0x1A64; // float
}

public static class C_CSWeaponBaseGun { // C_CSWeaponBase
    public const nint m_zoomLevel = 0x1A70; // int32_t
    public const nint m_iBurstShotsRemaining = 0x1A74; // int32_t
    public const nint m_iSilencerBodygroup = 0x1A78; // int32_t
    public const nint m_silencedModelIndex = 0x1A88; // int32_t
    public const nint m_inPrecache = 0x1A8C; // bool
    public const nint m_bNeedsBoltAction = 0x1A8D; // bool
}

public static class C_Chicken { // C_DynamicProp
    public const nint m_hHolidayHatAddon = 0x1148; // CHandle<CBaseAnimGraph>
    public const nint m_jumpedThisFrame = 0x114C; // bool
    public const nint m_leader = 0x1150; // CHandle<C_CSPlayerPawn>
    public const nint m_AttributeManager = 0x1158; // C_AttributeContainer
    public const nint m_OriginalOwnerXuidLow = 0x1600; // uint32_t
    public const nint m_OriginalOwnerXuidHigh = 0x1604; // uint32_t
    public const nint m_bAttributesInitialized = 0x1608; // bool
    public const nint m_hWaterWakeParticles = 0x160C; // ParticleIndex_t
}

public static class C_ClientRagdoll { // CBaseAnimGraph
    public const nint m_bFadeOut = 0xED8; // bool
    public const nint m_bImportant = 0xED9; // bool
    public const nint m_flEffectTime = 0xEDC; // GameTime_t
    public const nint m_gibDespawnTime = 0xEE0; // GameTime_t
    public const nint m_iCurrentFriction = 0xEE4; // int32_t
    public const nint m_iMinFriction = 0xEE8; // int32_t
    public const nint m_iMaxFriction = 0xEEC; // int32_t
    public const nint m_iFrictionAnimState = 0xEF0; // int32_t
    public const nint m_bReleaseRagdoll = 0xEF4; // bool
    public const nint m_iEyeAttachment = 0xEF5; // AttachmentHandle_t
    public const nint m_bFadingOut = 0xEF6; // bool
    public const nint m_flScaleEnd = 0xEF8; // float[10]
    public const nint m_flScaleTimeStart = 0xF20; // GameTime_t[10]
    public const nint m_flScaleTimeEnd = 0xF48; // GameTime_t[10]
}

public static class C_ColorCorrection { // C_BaseEntity
    public const nint m_vecOrigin = 0x550; // Vector
    public const nint m_MinFalloff = 0x55C; // float
    public const nint m_MaxFalloff = 0x560; // float
    public const nint m_flFadeInDuration = 0x564; // float
    public const nint m_flFadeOutDuration = 0x568; // float
    public const nint m_flMaxWeight = 0x56C; // float
    public const nint m_flCurWeight = 0x570; // float
    public const nint m_netlookupFilename = 0x574; // char[512]
    public const nint m_bEnabled = 0x774; // bool
    public const nint m_bMaster = 0x775; // bool
    public const nint m_bClientSide = 0x776; // bool
    public const nint m_bExclusive = 0x777; // bool
    public const nint m_bEnabledOnClient = 0x778; // bool[1]
    public const nint m_flCurWeightOnClient = 0x77C; // float[1]
    public const nint m_bFadingIn = 0x780; // bool[1]
    public const nint m_flFadeStartWeight = 0x784; // float[1]
    public const nint m_flFadeStartTime = 0x788; // float[1]
    public const nint m_flFadeDuration = 0x78C; // float[1]
}

public static class C_ColorCorrectionVolume { // C_BaseTrigger
    public const nint m_LastEnterWeight = 0xCD8; // float
    public const nint m_LastEnterTime = 0xCDC; // float
    public const nint m_LastExitWeight = 0xCE0; // float
    public const nint m_LastExitTime = 0xCE4; // float
    public const nint m_bEnabled = 0xCE8; // bool
    public const nint m_MaxWeight = 0xCEC; // float
    public const nint m_FadeDuration = 0xCF0; // float
    public const nint m_Weight = 0xCF4; // float
    public const nint m_lookupFilename = 0xCF8; // char[512]
}

public static class C_CommandContext {
    public const nint needsprocessing = 0x0; // bool
    public const nint command_number = 0x90; // int32_t
}

public static class C_CsmFovOverride { // C_BaseEntity
    public const nint m_cameraName = 0x550; // CUtlString
    public const nint m_flCsmFovOverrideValue = 0x558; // float
}

public static class C_DEagle { // C_CSWeaponBaseGun
}

public static class C_DecoyGrenade { // C_BaseCSGrenade
}

public static class C_DecoyProjectile { // C_BaseCSGrenadeProjectile
    public const nint m_nDecoyShotTick = 0x1158; // int32_t
    public const nint m_nClientLastKnownDecoyShotTick = 0x115C; // int32_t
    public const nint m_flTimeParticleEffectSpawn = 0x1180; // GameTime_t
}

public static class C_DynamicLight { // C_BaseModelEntity
    public const nint m_Flags = 0xCD0; // uint8_t
    public const nint m_LightStyle = 0xCD1; // uint8_t
    public const nint m_Radius = 0xCD4; // float
    public const nint m_Exponent = 0xCD8; // int32_t
    public const nint m_InnerAngle = 0xCDC; // float
    public const nint m_OuterAngle = 0xCE0; // float
    public const nint m_SpotRadius = 0xCE4; // float
}

public static class C_DynamicProp { // C_BreakableProp
    public const nint m_bUseHitboxesForRenderBox = 0x1028; // bool
    public const nint m_bUseAnimGraph = 0x1029; // bool
    public const nint m_pOutputAnimBegun = 0x1030; // CEntityIOOutput
    public const nint m_pOutputAnimOver = 0x1058; // CEntityIOOutput
    public const nint m_pOutputAnimLoopCycleOver = 0x1080; // CEntityIOOutput
    public const nint m_OnAnimReachedStart = 0x10A8; // CEntityIOOutput
    public const nint m_OnAnimReachedEnd = 0x10D0; // CEntityIOOutput
    public const nint m_iszIdleAnim = 0x10F8; // CUtlSymbolLarge
    public const nint m_nIdleAnimLoopMode = 0x1100; // AnimLoopMode_t
    public const nint m_bRandomizeCycle = 0x1104; // bool
    public const nint m_bStartDisabled = 0x1105; // bool
    public const nint m_bFiredStartEndOutput = 0x1106; // bool
    public const nint m_bForceNpcExclude = 0x1107; // bool
    public const nint m_bCreateNonSolid = 0x1108; // bool
    public const nint m_bIsOverrideProp = 0x1109; // bool
    public const nint m_iInitialGlowState = 0x110C; // int32_t
    public const nint m_nGlowRange = 0x1110; // int32_t
    public const nint m_nGlowRangeMin = 0x1114; // int32_t
    public const nint m_glowColor = 0x1118; // Color
    public const nint m_nGlowTeam = 0x111C; // int32_t
    public const nint m_iCachedFrameCount = 0x1120; // int32_t
    public const nint m_vecCachedRenderMins = 0x1124; // Vector
    public const nint m_vecCachedRenderMaxs = 0x1130; // Vector
}

public static class C_DynamicPropAlias_cable_dynamic { // C_DynamicProp
}

public static class C_DynamicPropAlias_dynamic_prop { // C_DynamicProp
}

public static class C_DynamicPropAlias_prop_dynamic_override { // C_DynamicProp
}

public static class C_EconEntity { // C_BaseFlex
    public const nint m_flFlexDelayTime = 0x1080; // float
    public const nint m_flFlexDelayedWeight = 0x1088; // float*
    public const nint m_bAttributesInitialized = 0x1090; // bool
    public const nint m_AttributeManager = 0x1098; // C_AttributeContainer
    public const nint m_OriginalOwnerXuidLow = 0x1540; // uint32_t
    public const nint m_OriginalOwnerXuidHigh = 0x1544; // uint32_t
    public const nint m_nFallbackPaintKit = 0x1548; // int32_t
    public const nint m_nFallbackSeed = 0x154C; // int32_t
    public const nint m_flFallbackWear = 0x1550; // float
    public const nint m_nFallbackStatTrak = 0x1554; // int32_t
    public const nint m_bClientside = 0x1558; // bool
    public const nint m_bParticleSystemsCreated = 0x1559; // bool
    public const nint m_vecAttachedParticles = 0x1560; // CUtlVector<int32_t>
    public const nint m_hViewmodelAttachment = 0x1578; // CHandle<CBaseAnimGraph>
    public const nint m_iOldTeam = 0x157C; // int32_t
    public const nint m_bAttachmentDirty = 0x1580; // bool
    public const nint m_nUnloadedModelIndex = 0x1584; // int32_t
    public const nint m_iNumOwnerValidationRetries = 0x1588; // int32_t
    public const nint m_hOldProvidee = 0x1598; // CHandle<C_BaseEntity>
    public const nint m_vecAttachedModels = 0x15A0; // CUtlVector<C_EconEntity::AttachedModelData_t>
}

public static class C_EconEntity_AttachedModelData_t {
    public const nint m_iModelDisplayFlags = 0x0; // int32_t
}

public static class C_EconItemView { // IEconItemInterface
    public const nint m_bInventoryImageRgbaRequested = 0x60; // bool
    public const nint m_bInventoryImageTriedCache = 0x61; // bool
    public const nint m_nInventoryImageRgbaWidth = 0x80; // int32_t
    public const nint m_nInventoryImageRgbaHeight = 0x84; // int32_t
    public const nint m_szCurrentLoadCachedFileName = 0x88; // char[260]
    public const nint m_bRestoreCustomMaterialAfterPrecache = 0x1B8; // bool
    public const nint m_iItemDefinitionIndex = 0x1BA; // uint16_t
    public const nint m_iEntityQuality = 0x1BC; // int32_t
    public const nint m_iEntityLevel = 0x1C0; // uint32_t
    public const nint m_iItemID = 0x1C8; // uint64_t
    public const nint m_iItemIDHigh = 0x1D0; // uint32_t
    public const nint m_iItemIDLow = 0x1D4; // uint32_t
    public const nint m_iAccountID = 0x1D8; // uint32_t
    public const nint m_iInventoryPosition = 0x1DC; // uint32_t
    public const nint m_bInitialized = 0x1E8; // bool
    public const nint m_bDisallowSOC = 0x1E9; // bool
    public const nint m_bIsStoreItem = 0x1EA; // bool
    public const nint m_bIsTradeItem = 0x1EB; // bool
    public const nint m_iEntityQuantity = 0x1EC; // int32_t
    public const nint m_iRarityOverride = 0x1F0; // int32_t
    public const nint m_iQualityOverride = 0x1F4; // int32_t
    public const nint m_unClientFlags = 0x1F8; // uint8_t
    public const nint m_unOverrideStyle = 0x1F9; // uint8_t
    public const nint m_AttributeList = 0x210; // CAttributeList
    public const nint m_NetworkedDynamicAttributes = 0x270; // CAttributeList
    public const nint m_szCustomName = 0x2D0; // char[161]
    public const nint m_szCustomNameOverride = 0x371; // char[161]
    public const nint m_bInitializedTags = 0x440; // bool
}

public static class C_EconWearable { // C_EconEntity
    public const nint m_nForceSkin = 0x15B8; // int32_t
    public const nint m_bAlwaysAllow = 0x15BC; // bool
}

public static class C_EntityDissolve { // C_BaseModelEntity
    public const nint m_flStartTime = 0xCD8; // GameTime_t
    public const nint m_flFadeInStart = 0xCDC; // float
    public const nint m_flFadeInLength = 0xCE0; // float
    public const nint m_flFadeOutModelStart = 0xCE4; // float
    public const nint m_flFadeOutModelLength = 0xCE8; // float
    public const nint m_flFadeOutStart = 0xCEC; // float
    public const nint m_flFadeOutLength = 0xCF0; // float
    public const nint m_flNextSparkTime = 0xCF4; // GameTime_t
    public const nint m_nDissolveType = 0xCF8; // EntityDisolveType_t
    public const nint m_vDissolverOrigin = 0xCFC; // Vector
    public const nint m_nMagnitude = 0xD08; // uint32_t
    public const nint m_bCoreExplode = 0xD0C; // bool
    public const nint m_bLinkedToServerEnt = 0xD0D; // bool
}

public static class C_EntityFlame { // C_BaseEntity
    public const nint m_hEntAttached = 0x550; // CHandle<C_BaseEntity>
    public const nint m_hOldAttached = 0x578; // CHandle<C_BaseEntity>
    public const nint m_bCheapEffect = 0x57C; // bool
}

public static class C_EnvCombinedLightProbeVolume { // C_BaseEntity
    public const nint m_Color = 0x15A8; // Color
    public const nint m_flBrightness = 0x15AC; // float
    public const nint m_hCubemapTexture = 0x15B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_bCustomCubemapTexture = 0x15B8; // bool
    public const nint m_hLightProbeTexture = 0x15C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_hLightProbeDirectLightIndicesTexture = 0x15C8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_hLightProbeDirectLightScalarsTexture = 0x15D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_hLightProbeDirectLightShadowsTexture = 0x15D8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_vBoxMins = 0x15E0; // Vector
    public const nint m_vBoxMaxs = 0x15EC; // Vector
    public const nint m_bMoveable = 0x15F8; // bool
    public const nint m_nHandshake = 0x15FC; // int32_t
    public const nint m_nEnvCubeMapArrayIndex = 0x1600; // int32_t
    public const nint m_nPriority = 0x1604; // int32_t
    public const nint m_bStartDisabled = 0x1608; // bool
    public const nint m_flEdgeFadeDist = 0x160C; // float
    public const nint m_vEdgeFadeDists = 0x1610; // Vector
    public const nint m_nLightProbeSizeX = 0x161C; // int32_t
    public const nint m_nLightProbeSizeY = 0x1620; // int32_t
    public const nint m_nLightProbeSizeZ = 0x1624; // int32_t
    public const nint m_nLightProbeAtlasX = 0x1628; // int32_t
    public const nint m_nLightProbeAtlasY = 0x162C; // int32_t
    public const nint m_nLightProbeAtlasZ = 0x1630; // int32_t
    public const nint m_bEnabled = 0x1649; // bool
}

public static class C_EnvCubemap { // C_BaseEntity
    public const nint m_hCubemapTexture = 0x5D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_bCustomCubemapTexture = 0x5D8; // bool
    public const nint m_flInfluenceRadius = 0x5DC; // float
    public const nint m_vBoxProjectMins = 0x5E0; // Vector
    public const nint m_vBoxProjectMaxs = 0x5EC; // Vector
    public const nint m_bMoveable = 0x5F8; // bool
    public const nint m_nHandshake = 0x5FC; // int32_t
    public const nint m_nEnvCubeMapArrayIndex = 0x600; // int32_t
    public const nint m_nPriority = 0x604; // int32_t
    public const nint m_flEdgeFadeDist = 0x608; // float
    public const nint m_vEdgeFadeDists = 0x60C; // Vector
    public const nint m_flDiffuseScale = 0x618; // float
    public const nint m_bStartDisabled = 0x61C; // bool
    public const nint m_bDefaultEnvMap = 0x61D; // bool
    public const nint m_bDefaultSpecEnvMap = 0x61E; // bool
    public const nint m_bIndoorCubeMap = 0x61F; // bool
    public const nint m_bCopyDiffuseFromDefaultCubemap = 0x620; // bool
    public const nint m_bEnabled = 0x630; // bool
}

public static class C_EnvCubemapBox { // C_EnvCubemap
}

public static class C_EnvCubemapFog { // C_BaseEntity
    public const nint m_flEndDistance = 0x550; // float
    public const nint m_flStartDistance = 0x554; // float
    public const nint m_flFogFalloffExponent = 0x558; // float
    public const nint m_bHeightFogEnabled = 0x55C; // bool
    public const nint m_flFogHeightWidth = 0x560; // float
    public const nint m_flFogHeightEnd = 0x564; // float
    public const nint m_flFogHeightStart = 0x568; // float
    public const nint m_flFogHeightExponent = 0x56C; // float
    public const nint m_flLODBias = 0x570; // float
    public const nint m_bActive = 0x574; // bool
    public const nint m_bStartDisabled = 0x575; // bool
    public const nint m_flFogMaxOpacity = 0x578; // float
    public const nint m_nCubemapSourceType = 0x57C; // int32_t
    public const nint m_hSkyMaterial = 0x580; // CStrongHandle<InfoForResourceTypeIMaterial2>
    public const nint m_iszSkyEntity = 0x588; // CUtlSymbolLarge
    public const nint m_hFogCubemapTexture = 0x590; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_bHasHeightFogEnd = 0x598; // bool
    public const nint m_bFirstTime = 0x599; // bool
}

public static class C_EnvDecal { // C_BaseModelEntity
    public const nint m_hDecalMaterial = 0xCD0; // CStrongHandle<InfoForResourceTypeIMaterial2>
    public const nint m_flWidth = 0xCD8; // float
    public const nint m_flHeight = 0xCDC; // float
    public const nint m_flDepth = 0xCE0; // float
    public const nint m_nRenderOrder = 0xCE4; // uint32_t
    public const nint m_bProjectOnWorld = 0xCE8; // bool
    public const nint m_bProjectOnCharacters = 0xCE9; // bool
    public const nint m_bProjectOnWater = 0xCEA; // bool
    public const nint m_flDepthSortBias = 0xCEC; // float
}

public static class C_EnvDetailController { // C_BaseEntity
    public const nint m_flFadeStartDist = 0x550; // float
    public const nint m_flFadeEndDist = 0x554; // float
}

public static class C_EnvLightProbeVolume { // C_BaseEntity
    public const nint m_hLightProbeTexture = 0x1528; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_hLightProbeDirectLightIndicesTexture = 0x1530; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_hLightProbeDirectLightScalarsTexture = 0x1538; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_hLightProbeDirectLightShadowsTexture = 0x1540; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_vBoxMins = 0x1548; // Vector
    public const nint m_vBoxMaxs = 0x1554; // Vector
    public const nint m_bMoveable = 0x1560; // bool
    public const nint m_nHandshake = 0x1564; // int32_t
    public const nint m_nPriority = 0x1568; // int32_t
    public const nint m_bStartDisabled = 0x156C; // bool
    public const nint m_nLightProbeSizeX = 0x1570; // int32_t
    public const nint m_nLightProbeSizeY = 0x1574; // int32_t
    public const nint m_nLightProbeSizeZ = 0x1578; // int32_t
    public const nint m_nLightProbeAtlasX = 0x157C; // int32_t
    public const nint m_nLightProbeAtlasY = 0x1580; // int32_t
    public const nint m_nLightProbeAtlasZ = 0x1584; // int32_t
    public const nint m_bEnabled = 0x1591; // bool
}

public static class C_EnvParticleGlow { // C_ParticleSystem
    public const nint m_flAlphaScale = 0x1280; // float
    public const nint m_flRadiusScale = 0x1284; // float
    public const nint m_flSelfIllumScale = 0x1288; // float
    public const nint m_ColorTint = 0x128C; // Color
    public const nint m_hTextureOverride = 0x1290; // CStrongHandle<InfoForResourceTypeCTextureBase>
}

public static class C_EnvProjectedTexture { // C_ModelPointEntity
}

public static class C_EnvScreenOverlay { // C_PointEntity
    public const nint m_iszOverlayNames = 0x550; // CUtlSymbolLarge[10]
    public const nint m_flOverlayTimes = 0x5A0; // float[10]
    public const nint m_flStartTime = 0x5C8; // GameTime_t
    public const nint m_iDesiredOverlay = 0x5CC; // int32_t
    public const nint m_bIsActive = 0x5D0; // bool
    public const nint m_bWasActive = 0x5D1; // bool
    public const nint m_iCachedDesiredOverlay = 0x5D4; // int32_t
    public const nint m_iCurrentOverlay = 0x5D8; // int32_t
    public const nint m_flCurrentOverlayTime = 0x5DC; // GameTime_t
}

public static class C_EnvSky { // C_BaseModelEntity
    public const nint m_hSkyMaterial = 0xCD0; // CStrongHandle<InfoForResourceTypeIMaterial2>
    public const nint m_hSkyMaterialLightingOnly = 0xCD8; // CStrongHandle<InfoForResourceTypeIMaterial2>
    public const nint m_bStartDisabled = 0xCE0; // bool
    public const nint m_vTintColor = 0xCE1; // Color
    public const nint m_vTintColorLightingOnly = 0xCE5; // Color
    public const nint m_flBrightnessScale = 0xCEC; // float
    public const nint m_nFogType = 0xCF0; // int32_t
    public const nint m_flFogMinStart = 0xCF4; // float
    public const nint m_flFogMinEnd = 0xCF8; // float
    public const nint m_flFogMaxStart = 0xCFC; // float
    public const nint m_flFogMaxEnd = 0xD00; // float
    public const nint m_bEnabled = 0xD04; // bool
}

public static class C_EnvVolumetricFogController { // C_BaseEntity
    public const nint m_flScattering = 0x550; // float
    public const nint m_flAnisotropy = 0x554; // float
    public const nint m_flFadeSpeed = 0x558; // float
    public const nint m_flDrawDistance = 0x55C; // float
    public const nint m_flFadeInStart = 0x560; // float
    public const nint m_flFadeInEnd = 0x564; // float
    public const nint m_flIndirectStrength = 0x568; // float
    public const nint m_nIndirectTextureDimX = 0x56C; // int32_t
    public const nint m_nIndirectTextureDimY = 0x570; // int32_t
    public const nint m_nIndirectTextureDimZ = 0x574; // int32_t
    public const nint m_vBoxMins = 0x578; // Vector
    public const nint m_vBoxMaxs = 0x584; // Vector
    public const nint m_bActive = 0x590; // bool
    public const nint m_flStartAnisoTime = 0x594; // GameTime_t
    public const nint m_flStartScatterTime = 0x598; // GameTime_t
    public const nint m_flStartDrawDistanceTime = 0x59C; // GameTime_t
    public const nint m_flStartAnisotropy = 0x5A0; // float
    public const nint m_flStartScattering = 0x5A4; // float
    public const nint m_flStartDrawDistance = 0x5A8; // float
    public const nint m_flDefaultAnisotropy = 0x5AC; // float
    public const nint m_flDefaultScattering = 0x5B0; // float
    public const nint m_flDefaultDrawDistance = 0x5B4; // float
    public const nint m_bStartDisabled = 0x5B8; // bool
    public const nint m_bEnableIndirect = 0x5B9; // bool
    public const nint m_bIsMaster = 0x5BA; // bool
    public const nint m_hFogIndirectTexture = 0x5C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_nForceRefreshCount = 0x5C8; // int32_t
    public const nint m_bFirstTime = 0x5CC; // bool
}

public static class C_EnvVolumetricFogVolume { // C_BaseEntity
    public const nint m_bActive = 0x550; // bool
    public const nint m_vBoxMins = 0x554; // Vector
    public const nint m_vBoxMaxs = 0x560; // Vector
    public const nint m_bStartDisabled = 0x56C; // bool
    public const nint m_flStrength = 0x570; // float
    public const nint m_nFalloffShape = 0x574; // int32_t
    public const nint m_flFalloffExponent = 0x578; // float
}

public static class C_EnvWind { // C_BaseEntity
    public const nint m_EnvWindShared = 0x550; // C_EnvWindShared
}

public static class C_EnvWindClientside { // C_BaseEntity
    public const nint m_EnvWindShared = 0x550; // C_EnvWindShared
}

public static class C_EnvWindShared {
    public const nint m_flStartTime = 0x8; // GameTime_t
    public const nint m_iWindSeed = 0xC; // uint32_t
    public const nint m_iMinWind = 0x10; // uint16_t
    public const nint m_iMaxWind = 0x12; // uint16_t
    public const nint m_windRadius = 0x14; // int32_t
    public const nint m_iMinGust = 0x18; // uint16_t
    public const nint m_iMaxGust = 0x1A; // uint16_t
    public const nint m_flMinGustDelay = 0x1C; // float
    public const nint m_flMaxGustDelay = 0x20; // float
    public const nint m_flGustDuration = 0x24; // float
    public const nint m_iGustDirChange = 0x28; // uint16_t
    public const nint m_location = 0x2C; // Vector
    public const nint m_iszGustSound = 0x38; // int32_t
    public const nint m_iWindDir = 0x3C; // int32_t
    public const nint m_flWindSpeed = 0x40; // float
    public const nint m_currentWindVector = 0x44; // Vector
    public const nint m_CurrentSwayVector = 0x50; // Vector
    public const nint m_PrevSwayVector = 0x5C; // Vector
    public const nint m_iInitialWindDir = 0x68; // uint16_t
    public const nint m_flInitialWindSpeed = 0x6C; // float
    public const nint m_flVariationTime = 0x70; // GameTime_t
    public const nint m_flSwayTime = 0x74; // GameTime_t
    public const nint m_flSimTime = 0x78; // GameTime_t
    public const nint m_flSwitchTime = 0x7C; // GameTime_t
    public const nint m_flAveWindSpeed = 0x80; // float
    public const nint m_bGusting = 0x84; // bool
    public const nint m_flWindAngleVariation = 0x88; // float
    public const nint m_flWindSpeedVariation = 0x8C; // float
    public const nint m_iEntIndex = 0x90; // CEntityIndex
}

public static class C_EnvWindShared_WindAveEvent_t {
    public const nint m_flStartWindSpeed = 0x0; // float
    public const nint m_flAveWindSpeed = 0x4; // float
}

public static class C_EnvWindShared_WindVariationEvent_t {
    public const nint m_flWindAngleVariation = 0x0; // float
    public const nint m_flWindSpeedVariation = 0x4; // float
}

public static class C_FireCrackerBlast { // C_Inferno
}

public static class C_FireFromAboveSprite { // C_Sprite
}

public static class C_FireSmoke { // C_BaseFire
    public const nint m_nFlameModelIndex = 0x560; // int32_t
    public const nint m_nFlameFromAboveModelIndex = 0x564; // int32_t
    public const nint m_flScaleRegister = 0x568; // float
    public const nint m_flScaleStart = 0x56C; // float
    public const nint m_flScaleEnd = 0x570; // float
    public const nint m_flScaleTimeStart = 0x574; // GameTime_t
    public const nint m_flScaleTimeEnd = 0x578; // GameTime_t
    public const nint m_flChildFlameSpread = 0x57C; // float
    public const nint m_flClipPerc = 0x590; // float
    public const nint m_bClipTested = 0x594; // bool
    public const nint m_bFadingOut = 0x595; // bool
    public const nint m_tParticleSpawn = 0x598; // TimedEvent
    public const nint m_pFireOverlay = 0x5A0; // CFireOverlay*
}

public static class C_FireSprite { // C_Sprite
    public const nint m_vecMoveDir = 0xE00; // Vector
    public const nint m_bFadeFromAbove = 0xE0C; // bool
}

public static class C_Fish { // CBaseAnimGraph
    public const nint m_pos = 0xED8; // Vector
    public const nint m_vel = 0xEE4; // Vector
    public const nint m_angles = 0xEF0; // QAngle
    public const nint m_localLifeState = 0xEFC; // int32_t
    public const nint m_deathDepth = 0xF00; // float
    public const nint m_deathAngle = 0xF04; // float
    public const nint m_buoyancy = 0xF08; // float
    public const nint m_wiggleTimer = 0xF10; // CountdownTimer
    public const nint m_wigglePhase = 0xF28; // float
    public const nint m_wiggleRate = 0xF2C; // float
    public const nint m_actualPos = 0xF30; // Vector
    public const nint m_actualAngles = 0xF3C; // QAngle
    public const nint m_poolOrigin = 0xF48; // Vector
    public const nint m_waterLevel = 0xF54; // float
    public const nint m_gotUpdate = 0xF58; // bool
    public const nint m_x = 0xF5C; // float
    public const nint m_y = 0xF60; // float
    public const nint m_z = 0xF64; // float
    public const nint m_angle = 0xF68; // float
    public const nint m_errorHistory = 0xF6C; // float[20]
    public const nint m_errorHistoryIndex = 0xFBC; // int32_t
    public const nint m_errorHistoryCount = 0xFC0; // int32_t
    public const nint m_averageError = 0xFC4; // float
}

public static class C_Fists { // C_CSWeaponBase
    public const nint m_bPlayingUninterruptableAct = 0x1A70; // bool
    public const nint m_nUninterruptableActivity = 0x1A74; // PlayerAnimEvent_t
}

public static class C_Flashbang { // C_BaseCSGrenade
}

public static class C_FlashbangProjectile { // C_BaseCSGrenadeProjectile
}

public static class C_FogController { // C_BaseEntity
    public const nint m_fog = 0x550; // fogparams_t
    public const nint m_bUseAngles = 0x5B8; // bool
    public const nint m_iChangedVariables = 0x5BC; // int32_t
}

public static class C_FootstepControl { // C_BaseTrigger
    public const nint m_source = 0xCD8; // CUtlSymbolLarge
    public const nint m_destination = 0xCE0; // CUtlSymbolLarge
}

public static class C_FuncBrush { // C_BaseModelEntity
}

public static class C_FuncConveyor { // C_BaseModelEntity
    public const nint m_vecMoveDirEntitySpace = 0xCD8; // Vector
    public const nint m_flTargetSpeed = 0xCE4; // float
    public const nint m_nTransitionStartTick = 0xCE8; // GameTick_t
    public const nint m_nTransitionDurationTicks = 0xCEC; // int32_t
    public const nint m_flTransitionStartSpeed = 0xCF0; // float
    public const nint m_hConveyorModels = 0xCF8; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
    public const nint m_flCurrentConveyorOffset = 0xD10; // float
    public const nint m_flCurrentConveyorSpeed = 0xD14; // float
}

public static class C_FuncElectrifiedVolume { // C_FuncBrush
    public const nint m_nAmbientEffect = 0xCD0; // ParticleIndex_t
    public const nint m_EffectName = 0xCD8; // CUtlSymbolLarge
    public const nint m_bState = 0xCE0; // bool
}

public static class C_FuncLadder { // C_BaseModelEntity
    public const nint m_vecLadderDir = 0xCD0; // Vector
    public const nint m_Dismounts = 0xCE0; // CUtlVector<CHandle<C_InfoLadderDismount>>
    public const nint m_vecLocalTop = 0xCF8; // Vector
    public const nint m_vecPlayerMountPositionTop = 0xD04; // Vector
    public const nint m_vecPlayerMountPositionBottom = 0xD10; // Vector
    public const nint m_flAutoRideSpeed = 0xD1C; // float
    public const nint m_bDisabled = 0xD20; // bool
    public const nint m_bFakeLadder = 0xD21; // bool
    public const nint m_bHasSlack = 0xD22; // bool
}

public static class C_FuncMonitor { // C_FuncBrush
    public const nint m_targetCamera = 0xCD0; // CUtlString
    public const nint m_nResolutionEnum = 0xCD8; // int32_t
    public const nint m_bRenderShadows = 0xCDC; // bool
    public const nint m_bUseUniqueColorTarget = 0xCDD; // bool
    public const nint m_brushModelName = 0xCE0; // CUtlString
    public const nint m_hTargetCamera = 0xCE8; // CHandle<C_BaseEntity>
    public const nint m_bEnabled = 0xCEC; // bool
    public const nint m_bDraw3DSkybox = 0xCED; // bool
}

public static class C_FuncMoveLinear { // C_BaseToggle
}

public static class C_FuncRotating { // C_BaseModelEntity
}

public static class C_FuncTrackTrain { // C_BaseModelEntity
    public const nint m_nLongAxis = 0xCD0; // int32_t
    public const nint m_flRadius = 0xCD4; // float
    public const nint m_flLineLength = 0xCD8; // float
}

public static class C_GameRules {
}

public static class C_GameRulesProxy { // C_BaseEntity
}

public static class C_GlobalLight { // C_BaseEntity
    public const nint m_WindClothForceHandle = 0xA10; // uint16_t
}

public static class C_GradientFog { // C_BaseEntity
    public const nint m_hGradientFogTexture = 0x550; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_flFogStartDistance = 0x558; // float
    public const nint m_flFogEndDistance = 0x55C; // float
    public const nint m_bHeightFogEnabled = 0x560; // bool
    public const nint m_flFogStartHeight = 0x564; // float
    public const nint m_flFogEndHeight = 0x568; // float
    public const nint m_flFarZ = 0x56C; // float
    public const nint m_flFogMaxOpacity = 0x570; // float
    public const nint m_flFogFalloffExponent = 0x574; // float
    public const nint m_flFogVerticalExponent = 0x578; // float
    public const nint m_fogColor = 0x57C; // Color
    public const nint m_flFogStrength = 0x580; // float
    public const nint m_flFadeTime = 0x584; // float
    public const nint m_bStartDisabled = 0x588; // bool
    public const nint m_bIsEnabled = 0x589; // bool
    public const nint m_bGradientFogNeedsTextures = 0x58A; // bool
}

public static class C_HEGrenade { // C_BaseCSGrenade
}

public static class C_HEGrenadeProjectile { // C_BaseCSGrenadeProjectile
}

public static class C_HandleTest { // C_BaseEntity
    public const nint m_Handle = 0x550; // CHandle<C_BaseEntity>
    public const nint m_bSendHandle = 0x554; // bool
}

public static class C_Hostage { // C_BaseCombatCharacter
    public const nint m_entitySpottedState = 0x1100; // EntitySpottedState_t
    public const nint m_leader = 0x1118; // CHandle<C_BaseEntity>
    public const nint m_reuseTimer = 0x1120; // CountdownTimer
    public const nint m_vel = 0x1138; // Vector
    public const nint m_isRescued = 0x1144; // bool
    public const nint m_jumpedThisFrame = 0x1145; // bool
    public const nint m_nHostageState = 0x1148; // int32_t
    public const nint m_bHandsHaveBeenCut = 0x114C; // bool
    public const nint m_hHostageGrabber = 0x1150; // CHandle<C_CSPlayerPawn>
    public const nint m_fLastGrabTime = 0x1154; // GameTime_t
    public const nint m_vecGrabbedPos = 0x1158; // Vector
    public const nint m_flRescueStartTime = 0x1164; // GameTime_t
    public const nint m_flGrabSuccessTime = 0x1168; // GameTime_t
    public const nint m_flDropStartTime = 0x116C; // GameTime_t
    public const nint m_flDeadOrRescuedTime = 0x1170; // GameTime_t
    public const nint m_blinkTimer = 0x1178; // CountdownTimer
    public const nint m_lookAt = 0x1190; // Vector
    public const nint m_lookAroundTimer = 0x11A0; // CountdownTimer
    public const nint m_isInit = 0x11B8; // bool
    public const nint m_eyeAttachment = 0x11B9; // AttachmentHandle_t
    public const nint m_chestAttachment = 0x11BA; // AttachmentHandle_t
    public const nint m_pPredictionOwner = 0x11C0; // CBasePlayerController*
    public const nint m_fNewestAlphaThinkTime = 0x11C8; // GameTime_t
}

public static class C_HostageCarriableProp { // CBaseAnimGraph
}

public static class C_IncendiaryGrenade { // C_MolotovGrenade
}

public static class C_Inferno { // C_BaseModelEntity
    public const nint m_nfxFireDamageEffect = 0xD10; // ParticleIndex_t
    public const nint m_firePositions = 0xD14; // Vector[64]
    public const nint m_fireParentPositions = 0x1014; // Vector[64]
    public const nint m_bFireIsBurning = 0x1314; // bool[64]
    public const nint m_BurnNormal = 0x1354; // Vector[64]
    public const nint m_fireCount = 0x1654; // int32_t
    public const nint m_nInfernoType = 0x1658; // int32_t
    public const nint m_nFireLifetime = 0x165C; // float
    public const nint m_bInPostEffectTime = 0x1660; // bool
    public const nint m_lastFireCount = 0x1664; // int32_t
    public const nint m_nFireEffectTickBegin = 0x1668; // int32_t
    public const nint m_drawableCount = 0x8270; // int32_t
    public const nint m_blosCheck = 0x8274; // bool
    public const nint m_nlosperiod = 0x8278; // int32_t
    public const nint m_maxFireHalfWidth = 0x827C; // float
    public const nint m_maxFireHeight = 0x8280; // float
    public const nint m_minBounds = 0x8284; // Vector
    public const nint m_maxBounds = 0x8290; // Vector
    public const nint m_flLastGrassBurnThink = 0x829C; // float
}

public static class C_InfoInstructorHintHostageRescueZone { // C_PointEntity
}

public static class C_InfoLadderDismount { // C_BaseEntity
}

public static class C_InfoVisibilityBox { // C_BaseEntity
    public const nint m_nMode = 0x554; // int32_t
    public const nint m_vBoxSize = 0x558; // Vector
    public const nint m_bEnabled = 0x564; // bool
}

public static class C_IronSightController {
    public const nint m_bIronSightAvailable = 0x10; // bool
    public const nint m_flIronSightAmount = 0x14; // float
    public const nint m_flIronSightAmountGained = 0x18; // float
    public const nint m_flIronSightAmountBiased = 0x1C; // float
    public const nint m_flIronSightAmount_Interpolated = 0x20; // float
    public const nint m_flIronSightAmountGained_Interpolated = 0x24; // float
    public const nint m_flIronSightAmountBiased_Interpolated = 0x28; // float
    public const nint m_flInterpolationLastUpdated = 0x2C; // float
    public const nint m_angDeltaAverage = 0x30; // QAngle[8]
    public const nint m_angViewLast = 0x90; // QAngle
    public const nint m_vecDotCoords = 0x9C; // Vector2D
    public const nint m_flDotBlur = 0xA4; // float
    public const nint m_flSpeedRatio = 0xA8; // float
}

public static class C_Item { // C_EconEntity
    public const nint m_bShouldGlow = 0x15B8; // bool
    public const nint m_pReticleHintTextName = 0x15B9; // char[256]
}

public static class C_ItemDogtags { // C_Item
    public const nint m_OwningPlayer = 0x16C0; // CHandle<C_CSPlayerPawn>
    public const nint m_KillingPlayer = 0x16C4; // CHandle<C_CSPlayerPawn>
}

public static class C_Item_Healthshot { // C_WeaponBaseItem
}

public static class C_Knife { // C_CSWeaponBase
}

public static class C_LightDirectionalEntity { // C_LightEntity
}

public static class C_LightEntity { // C_BaseModelEntity
    public const nint m_CLightComponent = 0xCD0; // CLightComponent*
}

public static class C_LightEnvironmentEntity { // C_LightDirectionalEntity
}

public static class C_LightGlow { // C_BaseModelEntity
    public const nint m_nHorizontalSize = 0xCD0; // uint32_t
    public const nint m_nVerticalSize = 0xCD4; // uint32_t
    public const nint m_nMinDist = 0xCD8; // uint32_t
    public const nint m_nMaxDist = 0xCDC; // uint32_t
    public const nint m_nOuterMaxDist = 0xCE0; // uint32_t
    public const nint m_flGlowProxySize = 0xCE4; // float
    public const nint m_flHDRColorScale = 0xCE8; // float
    public const nint m_Glow = 0xCF0; // C_LightGlowOverlay
}

public static class C_LightGlowOverlay { // CGlowOverlay
    public const nint m_vecOrigin = 0xD0; // Vector
    public const nint m_vecDirection = 0xDC; // Vector
    public const nint m_nMinDist = 0xE8; // int32_t
    public const nint m_nMaxDist = 0xEC; // int32_t
    public const nint m_nOuterMaxDist = 0xF0; // int32_t
    public const nint m_bOneSided = 0xF4; // bool
    public const nint m_bModulateByDot = 0xF5; // bool
}

public static class C_LightOrthoEntity { // C_LightEntity
}

public static class C_LightSpotEntity { // C_LightEntity
}

public static class C_LocalTempEntity { // CBaseAnimGraph
    public const nint flags = 0xEF0; // int32_t
    public const nint die = 0xEF4; // GameTime_t
    public const nint m_flFrameMax = 0xEF8; // float
    public const nint x = 0xEFC; // float
    public const nint y = 0xF00; // float
    public const nint fadeSpeed = 0xF04; // float
    public const nint bounceFactor = 0xF08; // float
    public const nint hitSound = 0xF0C; // int32_t
    public const nint priority = 0xF10; // int32_t
    public const nint tentOffset = 0xF14; // Vector
    public const nint m_vecTempEntAngVelocity = 0xF20; // QAngle
    public const nint tempent_renderamt = 0xF2C; // int32_t
    public const nint m_vecNormal = 0xF30; // Vector
    public const nint m_flSpriteScale = 0xF3C; // float
    public const nint m_nFlickerFrame = 0xF40; // int32_t
    public const nint m_flFrameRate = 0xF44; // float
    public const nint m_flFrame = 0xF48; // float
    public const nint m_pszImpactEffect = 0xF50; // char*
    public const nint m_pszParticleEffect = 0xF58; // char*
    public const nint m_bParticleCollision = 0xF60; // bool
    public const nint m_iLastCollisionFrame = 0xF64; // int32_t
    public const nint m_vLastCollisionOrigin = 0xF68; // Vector
    public const nint m_vecTempEntVelocity = 0xF74; // Vector
    public const nint m_vecPrevAbsOrigin = 0xF80; // Vector
    public const nint m_vecTempEntAcceleration = 0xF8C; // Vector
}

public static class C_MapPreviewParticleSystem { // C_ParticleSystem
}

public static class C_MapVetoPickController { // C_BaseEntity
    public const nint m_nDraftType = 0x560; // int32_t
    public const nint m_nTeamWinningCoinToss = 0x564; // int32_t
    public const nint m_nTeamWithFirstChoice = 0x568; // int32_t[64]
    public const nint m_nVoteMapIdsList = 0x668; // int32_t[7]
    public const nint m_nAccountIDs = 0x684; // int32_t[64]
    public const nint m_nMapId0 = 0x784; // int32_t[64]
    public const nint m_nMapId1 = 0x884; // int32_t[64]
    public const nint m_nMapId2 = 0x984; // int32_t[64]
    public const nint m_nMapId3 = 0xA84; // int32_t[64]
    public const nint m_nMapId4 = 0xB84; // int32_t[64]
    public const nint m_nMapId5 = 0xC84; // int32_t[64]
    public const nint m_nStartingSide0 = 0xD84; // int32_t[64]
    public const nint m_nCurrentPhase = 0xE84; // int32_t
    public const nint m_nPhaseStartTick = 0xE88; // int32_t
    public const nint m_nPhaseDurationTicks = 0xE8C; // int32_t
    public const nint m_nPostDataUpdateTick = 0xE90; // int32_t
    public const nint m_bDisabledHud = 0xE94; // bool
}

public static class C_Melee { // C_CSWeaponBase
}

public static class C_ModelPointEntity { // C_BaseModelEntity
}

public static class C_MolotovGrenade { // C_BaseCSGrenade
}

public static class C_MolotovProjectile { // C_BaseCSGrenadeProjectile
    public const nint m_bIsIncGrenade = 0x1158; // bool
}

public static class C_Multimeter { // CBaseAnimGraph
    public const nint m_hTargetC4 = 0xEE0; // CHandle<C_PlantedC4>
}

public static class C_MultiplayRules { // C_GameRules
}

public static class C_NetTestBaseCombatCharacter { // C_BaseCombatCharacter
}

public static class C_OmniLight { // C_BarnLight
    public const nint m_flInnerAngle = 0xF18; // float
    public const nint m_flOuterAngle = 0xF1C; // float
    public const nint m_bShowLight = 0xF20; // bool
}

public static class C_ParticleSystem { // C_BaseModelEntity
    public const nint m_szSnapshotFileName = 0xCD0; // char[512]
    public const nint m_bActive = 0xED0; // bool
    public const nint m_bFrozen = 0xED1; // bool
    public const nint m_flFreezeTransitionDuration = 0xED4; // float
    public const nint m_nStopType = 0xED8; // int32_t
    public const nint m_bAnimateDuringGameplayPause = 0xEDC; // bool
    public const nint m_iEffectIndex = 0xEE0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    public const nint m_flStartTime = 0xEE8; // GameTime_t
    public const nint m_flPreSimTime = 0xEEC; // float
    public const nint m_vServerControlPoints = 0xEF0; // Vector[4]
    public const nint m_iServerControlPointAssignments = 0xF20; // uint8_t[4]
    public const nint m_hControlPointEnts = 0xF24; // CHandle<C_BaseEntity>[64]
    public const nint m_bNoSave = 0x1024; // bool
    public const nint m_bNoFreeze = 0x1025; // bool
    public const nint m_bNoRamp = 0x1026; // bool
    public const nint m_bStartActive = 0x1027; // bool
    public const nint m_iszEffectName = 0x1028; // CUtlSymbolLarge
    public const nint m_iszControlPointNames = 0x1030; // CUtlSymbolLarge[64]
    public const nint m_nDataCP = 0x1230; // int32_t
    public const nint m_vecDataCPValue = 0x1234; // Vector
    public const nint m_nTintCP = 0x1240; // int32_t
    public const nint m_clrTint = 0x1244; // Color
    public const nint m_bOldActive = 0x1268; // bool
    public const nint m_bOldFrozen = 0x1269; // bool
}

public static class C_PathParticleRope { // C_BaseEntity
    public const nint m_bStartActive = 0x550; // bool
    public const nint m_flMaxSimulationTime = 0x554; // float
    public const nint m_iszEffectName = 0x558; // CUtlSymbolLarge
    public const nint m_PathNodes_Name = 0x560; // CUtlVector<CUtlSymbolLarge>
    public const nint m_flParticleSpacing = 0x578; // float
    public const nint m_flSlack = 0x57C; // float
    public const nint m_flRadius = 0x580; // float
    public const nint m_ColorTint = 0x584; // Color
    public const nint m_nEffectState = 0x588; // int32_t
    public const nint m_iEffectIndex = 0x590; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    public const nint m_PathNodes_Position = 0x598; // C_NetworkUtlVectorBase<Vector>
    public const nint m_PathNodes_TangentIn = 0x5B0; // C_NetworkUtlVectorBase<Vector>
    public const nint m_PathNodes_TangentOut = 0x5C8; // C_NetworkUtlVectorBase<Vector>
    public const nint m_PathNodes_Color = 0x5E0; // C_NetworkUtlVectorBase<Vector>
    public const nint m_PathNodes_PinEnabled = 0x5F8; // C_NetworkUtlVectorBase<bool>
    public const nint m_PathNodes_RadiusScale = 0x610; // C_NetworkUtlVectorBase<float>
}

public static class C_PathParticleRopeAlias_path_particle_rope_clientside { // C_PathParticleRope
}

public static class C_PhysBox { // C_Breakable
}

public static class C_PhysMagnet { // CBaseAnimGraph
    public const nint m_aAttachedObjectsFromServer = 0xED8; // CUtlVector<int32_t>
    public const nint m_aAttachedObjects = 0xEF0; // CUtlVector<CHandle<C_BaseEntity>>
}

public static class C_PhysPropClientside { // C_BreakableProp
    public const nint m_flTouchDelta = 0x1028; // GameTime_t
    public const nint m_fDeathTime = 0x102C; // GameTime_t
    public const nint m_impactEnergyScale = 0x1030; // float
    public const nint m_inertiaScale = 0x1034; // float
    public const nint m_flDmgModBullet = 0x1038; // float
    public const nint m_flDmgModClub = 0x103C; // float
    public const nint m_flDmgModExplosive = 0x1040; // float
    public const nint m_flDmgModFire = 0x1044; // float
    public const nint m_iszPhysicsDamageTableName = 0x1048; // CUtlSymbolLarge
    public const nint m_iszBasePropData = 0x1050; // CUtlSymbolLarge
    public const nint m_iInteractions = 0x1058; // int32_t
    public const nint m_bHasBreakPiecesOrCommands = 0x105C; // bool
    public const nint m_vecDamagePosition = 0x1060; // Vector
    public const nint m_vecDamageDirection = 0x106C; // Vector
    public const nint m_nDamageType = 0x1078; // int32_t
}

public static class C_PhysicsProp { // C_BreakableProp
    public const nint m_bAwake = 0x1028; // bool
}

public static class C_PhysicsPropMultiplayer { // C_PhysicsProp
}

public static class C_PickUpModelSlerper { // CBaseAnimGraph
    public const nint m_hPlayerParent = 0xED8; // CHandle<C_BaseEntity>
    public const nint m_hItem = 0xEDC; // CHandle<C_BaseEntity>
    public const nint m_flTimePickedUp = 0xEE0; // float
    public const nint m_angOriginal = 0xEE4; // QAngle
    public const nint m_vecPosOriginal = 0xEF0; // Vector
    public const nint m_angRandom = 0xF00; // QAngle
}

public static class C_PlantedC4 { // CBaseAnimGraph
    public const nint m_bBombTicking = 0xED8; // bool
    public const nint m_nBombSite = 0xEDC; // int32_t
    public const nint m_nSourceSoundscapeHash = 0xEE0; // int32_t
    public const nint m_entitySpottedState = 0xEE8; // EntitySpottedState_t
    public const nint m_flNextGlow = 0xF00; // GameTime_t
    public const nint m_flNextBeep = 0xF04; // GameTime_t
    public const nint m_flC4Blow = 0xF08; // GameTime_t
    public const nint m_bCannotBeDefused = 0xF0C; // bool
    public const nint m_bHasExploded = 0xF0D; // bool
    public const nint m_flTimerLength = 0xF10; // float
    public const nint m_bBeingDefused = 0xF14; // bool
    public const nint m_bTriggerWarning = 0xF18; // float
    public const nint m_bExplodeWarning = 0xF1C; // float
    public const nint m_bC4Activated = 0xF20; // bool
    public const nint m_bTenSecWarning = 0xF21; // bool
    public const nint m_flDefuseLength = 0xF24; // float
    public const nint m_flDefuseCountDown = 0xF28; // GameTime_t
    public const nint m_bBombDefused = 0xF2C; // bool
    public const nint m_hBombDefuser = 0xF30; // CHandle<C_CSPlayerPawn>
    public const nint m_hControlPanel = 0xF34; // CHandle<C_BaseEntity>
    public const nint m_hDefuserMultimeter = 0xF38; // CHandle<C_Multimeter>
    public const nint m_flNextRadarFlashTime = 0xF3C; // GameTime_t
    public const nint m_bRadarFlash = 0xF40; // bool
    public const nint m_pBombDefuser = 0xF44; // CHandle<C_CSPlayerPawn>
    public const nint m_fLastDefuseTime = 0xF48; // GameTime_t
    public const nint m_pPredictionOwner = 0xF50; // CBasePlayerController*
    public const nint m_vecC4ExplodeSpectatePos = 0xF58; // Vector
    public const nint m_vecC4ExplodeSpectateAng = 0xF64; // QAngle
    public const nint m_flC4ExplodeSpectateDuration = 0xF70; // float
}

public static class C_PlayerPing { // C_BaseEntity
    public const nint m_hPlayer = 0x580; // CHandle<C_CSPlayerPawn>
    public const nint m_hPingedEntity = 0x584; // CHandle<C_BaseEntity>
    public const nint m_iType = 0x588; // int32_t
    public const nint m_bUrgent = 0x58C; // bool
    public const nint m_szPlaceName = 0x58D; // char[18]
}

public static class C_PlayerSprayDecal { // C_ModelPointEntity
    public const nint m_nUniqueID = 0xCD0; // int32_t
    public const nint m_unAccountID = 0xCD4; // uint32_t
    public const nint m_unTraceID = 0xCD8; // uint32_t
    public const nint m_rtGcTime = 0xCDC; // uint32_t
    public const nint m_vecEndPos = 0xCE0; // Vector
    public const nint m_vecStart = 0xCEC; // Vector
    public const nint m_vecLeft = 0xCF8; // Vector
    public const nint m_vecNormal = 0xD04; // Vector
    public const nint m_nPlayer = 0xD10; // int32_t
    public const nint m_nEntity = 0xD14; // int32_t
    public const nint m_nHitbox = 0xD18; // int32_t
    public const nint m_flCreationTime = 0xD1C; // float
    public const nint m_nTintID = 0xD20; // int32_t
    public const nint m_nVersion = 0xD24; // uint8_t
    public const nint m_ubSignature = 0xD25; // uint8_t[128]
    public const nint m_SprayRenderHelper = 0xDB0; // CPlayerSprayDecalRenderHelper
}

public static class C_PlayerVisibility { // C_BaseEntity
    public const nint m_flVisibilityStrength = 0x550; // float
    public const nint m_flFogDistanceMultiplier = 0x554; // float
    public const nint m_flFogMaxDensityMultiplier = 0x558; // float
    public const nint m_flFadeTime = 0x55C; // float
    public const nint m_bStartDisabled = 0x560; // bool
    public const nint m_bIsEnabled = 0x561; // bool
}

public static class C_PointCamera { // C_BaseEntity
    public const nint m_FOV = 0x550; // float
    public const nint m_Resolution = 0x554; // float
    public const nint m_bFogEnable = 0x558; // bool
    public const nint m_FogColor = 0x559; // Color
    public const nint m_flFogStart = 0x560; // float
    public const nint m_flFogEnd = 0x564; // float
    public const nint m_flFogMaxDensity = 0x568; // float
    public const nint m_bActive = 0x56C; // bool
    public const nint m_bUseScreenAspectRatio = 0x56D; // bool
    public const nint m_flAspectRatio = 0x570; // float
    public const nint m_bNoSky = 0x574; // bool
    public const nint m_fBrightness = 0x578; // float
    public const nint m_flZFar = 0x57C; // float
    public const nint m_flZNear = 0x580; // float
    public const nint m_bCanHLTVUse = 0x584; // bool
    public const nint m_bDofEnabled = 0x585; // bool
    public const nint m_flDofNearBlurry = 0x588; // float
    public const nint m_flDofNearCrisp = 0x58C; // float
    public const nint m_flDofFarCrisp = 0x590; // float
    public const nint m_flDofFarBlurry = 0x594; // float
    public const nint m_flDofTiltToGround = 0x598; // float
    public const nint m_TargetFOV = 0x59C; // float
    public const nint m_DegreesPerSecond = 0x5A0; // float
    public const nint m_bIsOn = 0x5A4; // bool
    public const nint m_pNext = 0x5A8; // C_PointCamera*
}

public static class C_PointCameraVFOV { // C_PointCamera
    public const nint m_flVerticalFOV = 0x5B0; // float
}

public static class C_PointClientUIDialog { // C_BaseClientUIEntity
    public const nint m_hActivator = 0xD00; // CHandle<C_BaseEntity>
    public const nint m_bStartEnabled = 0xD04; // bool
}

public static class C_PointClientUIHUD { // C_BaseClientUIEntity
    public const nint m_bCheckCSSClasses = 0xD08; // bool
    public const nint m_bIgnoreInput = 0xE90; // bool
    public const nint m_flWidth = 0xE94; // float
    public const nint m_flHeight = 0xE98; // float
    public const nint m_flDPI = 0xE9C; // float
    public const nint m_flInteractDistance = 0xEA0; // float
    public const nint m_flDepthOffset = 0xEA4; // float
    public const nint m_unOwnerContext = 0xEA8; // uint32_t
    public const nint m_unHorizontalAlign = 0xEAC; // uint32_t
    public const nint m_unVerticalAlign = 0xEB0; // uint32_t
    public const nint m_unOrientation = 0xEB4; // uint32_t
    public const nint m_bAllowInteractionFromAllSceneWorlds = 0xEB8; // bool
    public const nint m_vecCSSClasses = 0xEC0; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
}

public static class C_PointClientUIWorldPanel { // C_BaseClientUIEntity
    public const nint m_bForceRecreateNextUpdate = 0xD08; // bool
    public const nint m_bMoveViewToPlayerNextThink = 0xD09; // bool
    public const nint m_bCheckCSSClasses = 0xD0A; // bool
    public const nint m_anchorDeltaTransform = 0xD10; // CTransform
    public const nint m_pOffScreenIndicator = 0xEB0; // CPointOffScreenIndicatorUi*
    public const nint m_bIgnoreInput = 0xED8; // bool
    public const nint m_bLit = 0xED9; // bool
    public const nint m_bFollowPlayerAcrossTeleport = 0xEDA; // bool
    public const nint m_flWidth = 0xEDC; // float
    public const nint m_flHeight = 0xEE0; // float
    public const nint m_flDPI = 0xEE4; // float
    public const nint m_flInteractDistance = 0xEE8; // float
    public const nint m_flDepthOffset = 0xEEC; // float
    public const nint m_unOwnerContext = 0xEF0; // uint32_t
    public const nint m_unHorizontalAlign = 0xEF4; // uint32_t
    public const nint m_unVerticalAlign = 0xEF8; // uint32_t
    public const nint m_unOrientation = 0xEFC; // uint32_t
    public const nint m_bAllowInteractionFromAllSceneWorlds = 0xF00; // bool
    public const nint m_vecCSSClasses = 0xF08; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
    public const nint m_bOpaque = 0xF20; // bool
    public const nint m_bNoDepth = 0xF21; // bool
    public const nint m_bRenderBackface = 0xF22; // bool
    public const nint m_bUseOffScreenIndicator = 0xF23; // bool
    public const nint m_bExcludeFromSaveGames = 0xF24; // bool
    public const nint m_bGrabbable = 0xF25; // bool
    public const nint m_bOnlyRenderToTexture = 0xF26; // bool
    public const nint m_bDisableMipGen = 0xF27; // bool
    public const nint m_nExplicitImageLayout = 0xF28; // int32_t
}

public static class C_PointClientUIWorldTextPanel { // C_PointClientUIWorldPanel
    public const nint m_messageText = 0xF30; // char[512]
}

public static class C_PointCommentaryNode { // CBaseAnimGraph
    public const nint m_bActive = 0xEE0; // bool
    public const nint m_bWasActive = 0xEE1; // bool
    public const nint m_flEndTime = 0xEE4; // GameTime_t
    public const nint m_flStartTime = 0xEE8; // GameTime_t
    public const nint m_flStartTimeInCommentary = 0xEEC; // float
    public const nint m_iszCommentaryFile = 0xEF0; // CUtlSymbolLarge
    public const nint m_iszTitle = 0xEF8; // CUtlSymbolLarge
    public const nint m_iszSpeakers = 0xF00; // CUtlSymbolLarge
    public const nint m_iNodeNumber = 0xF08; // int32_t
    public const nint m_iNodeNumberMax = 0xF0C; // int32_t
    public const nint m_bListenedTo = 0xF10; // bool
    public const nint m_hViewPosition = 0xF20; // CHandle<C_BaseEntity>
    public const nint m_bRestartAfterRestore = 0xF24; // bool
}

public static class C_PointEntity { // C_BaseEntity
}

public static class C_PointValueRemapper { // C_BaseEntity
    public const nint m_bDisabled = 0x550; // bool
    public const nint m_bDisabledOld = 0x551; // bool
    public const nint m_bUpdateOnClient = 0x552; // bool
    public const nint m_nInputType = 0x554; // ValueRemapperInputType_t
    public const nint m_hRemapLineStart = 0x558; // CHandle<C_BaseEntity>
    public const nint m_hRemapLineEnd = 0x55C; // CHandle<C_BaseEntity>
    public const nint m_flMaximumChangePerSecond = 0x560; // float
    public const nint m_flDisengageDistance = 0x564; // float
    public const nint m_flEngageDistance = 0x568; // float
    public const nint m_bRequiresUseKey = 0x56C; // bool
    public const nint m_nOutputType = 0x570; // ValueRemapperOutputType_t
    public const nint m_hOutputEntities = 0x578; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
    public const nint m_nHapticsType = 0x590; // ValueRemapperHapticsType_t
    public const nint m_nMomentumType = 0x594; // ValueRemapperMomentumType_t
    public const nint m_flMomentumModifier = 0x598; // float
    public const nint m_flSnapValue = 0x59C; // float
    public const nint m_flCurrentMomentum = 0x5A0; // float
    public const nint m_nRatchetType = 0x5A4; // ValueRemapperRatchetType_t
    public const nint m_flRatchetOffset = 0x5A8; // float
    public const nint m_flInputOffset = 0x5AC; // float
    public const nint m_bEngaged = 0x5B0; // bool
    public const nint m_bFirstUpdate = 0x5B1; // bool
    public const nint m_flPreviousValue = 0x5B4; // float
    public const nint m_flPreviousUpdateTickTime = 0x5B8; // GameTime_t
    public const nint m_vecPreviousTestPoint = 0x5BC; // Vector
}

public static class C_PointWorldText { // C_ModelPointEntity
    public const nint m_bForceRecreateNextUpdate = 0xCD8; // bool
    public const nint m_messageText = 0xCE8; // char[512]
    public const nint m_FontName = 0xEE8; // char[64]
    public const nint m_bEnabled = 0xF28; // bool
    public const nint m_bFullbright = 0xF29; // bool
    public const nint m_flWorldUnitsPerPx = 0xF2C; // float
    public const nint m_flFontSize = 0xF30; // float
    public const nint m_flDepthOffset = 0xF34; // float
    public const nint m_Color = 0xF38; // Color
    public const nint m_nJustifyHorizontal = 0xF3C; // PointWorldTextJustifyHorizontal_t
    public const nint m_nJustifyVertical = 0xF40; // PointWorldTextJustifyVertical_t
    public const nint m_nReorientMode = 0xF44; // PointWorldTextReorientMode_t
}

public static class C_PostProcessingVolume { // C_BaseTrigger
    public const nint m_hPostSettings = 0xCE8; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
    public const nint m_flFadeDuration = 0xCF0; // float
    public const nint m_flMinLogExposure = 0xCF4; // float
    public const nint m_flMaxLogExposure = 0xCF8; // float
    public const nint m_flMinExposure = 0xCFC; // float
    public const nint m_flMaxExposure = 0xD00; // float
    public const nint m_flExposureCompensation = 0xD04; // float
    public const nint m_flExposureFadeSpeedUp = 0xD08; // float
    public const nint m_flExposureFadeSpeedDown = 0xD0C; // float
    public const nint m_flTonemapEVSmoothingRange = 0xD10; // float
    public const nint m_bMaster = 0xD14; // bool
    public const nint m_bExposureControl = 0xD15; // bool
    public const nint m_flRate = 0xD18; // float
    public const nint m_flTonemapPercentTarget = 0xD1C; // float
    public const nint m_flTonemapPercentBrightPixels = 0xD20; // float
    public const nint m_flTonemapMinAvgLum = 0xD24; // float
}

public static class C_Precipitation { // C_BaseTrigger
    public const nint m_flDensity = 0xCD8; // float
    public const nint m_flParticleInnerDist = 0xCE8; // float
    public const nint m_pParticleDef = 0xCF0; // char*
    public const nint m_tParticlePrecipTraceTimer = 0xD18; // TimedEvent[1]
    public const nint m_bActiveParticlePrecipEmitter = 0xD20; // bool[1]
    public const nint m_bParticlePrecipInitialized = 0xD21; // bool
    public const nint m_bHasSimulatedSinceLastSceneObjectUpdate = 0xD22; // bool
    public const nint m_nAvailableSheetSequencesMaxIndex = 0xD24; // int32_t
}

public static class C_PrecipitationBlocker { // C_BaseModelEntity
}

public static class C_PredictedViewModel { // C_BaseViewModel
    public const nint m_vPredictedLagOffset = 0xF40; // Vector
    public const nint m_targetSpeed = 0xF4C; // QAngle
    public const nint m_currentSpeed = 0xF58; // QAngle
}

public static class C_PropDoorRotating { // C_BasePropDoor
}

public static class C_RagdollManager { // C_BaseEntity
    public const nint m_iCurrentMaxRagdollCount = 0x550; // int8_t
}

public static class C_RagdollProp { // CBaseAnimGraph
    public const nint m_ragPos = 0xEE0; // C_NetworkUtlVectorBase<Vector>
    public const nint m_ragAngles = 0xEF8; // C_NetworkUtlVectorBase<QAngle>
    public const nint m_flBlendWeight = 0xF10; // float
    public const nint m_hRagdollSource = 0xF14; // CHandle<C_BaseEntity>
    public const nint m_iEyeAttachment = 0xF18; // AttachmentHandle_t
    public const nint m_flBlendWeightCurrent = 0xF1C; // float
    public const nint m_parentPhysicsBoneIndices = 0xF20; // CUtlVector<int32_t>
    public const nint m_worldSpaceBoneComputationOrder = 0xF38; // CUtlVector<int32_t>
}

public static class C_RagdollPropAttached { // C_RagdollProp
    public const nint m_boneIndexAttached = 0xF50; // uint32_t
    public const nint m_ragdollAttachedObjectIndex = 0xF54; // uint32_t
    public const nint m_attachmentPointBoneSpace = 0xF58; // Vector
    public const nint m_attachmentPointRagdollSpace = 0xF64; // Vector
    public const nint m_vecOffset = 0xF70; // Vector
    public const nint m_parentTime = 0xF7C; // float
    public const nint m_bHasParent = 0xF80; // bool
}

public static class C_RectLight { // C_BarnLight
    public const nint m_bShowLight = 0xF18; // bool
}

public static class C_RetakeGameRules {
    public const nint m_nMatchSeed = 0xF8; // int32_t
    public const nint m_bBlockersPresent = 0xFC; // bool
    public const nint m_bRoundInProgress = 0xFD; // bool
    public const nint m_iFirstSecondHalfRound = 0x100; // int32_t
    public const nint m_iBombSite = 0x104; // int32_t
}

public static class C_RopeKeyframe { // C_BaseModelEntity
    public const nint m_LinksTouchingSomething = 0xCD8; // CBitVec<10>
    public const nint m_nLinksTouchingSomething = 0xCDC; // int32_t
    public const nint m_bApplyWind = 0xCE0; // bool
    public const nint m_fPrevLockedPoints = 0xCE4; // int32_t
    public const nint m_iForcePointMoveCounter = 0xCE8; // int32_t
    public const nint m_bPrevEndPointPos = 0xCEC; // bool[2]
    public const nint m_vPrevEndPointPos = 0xCF0; // Vector[2]
    public const nint m_flCurScroll = 0xD08; // float
    public const nint m_flScrollSpeed = 0xD0C; // float
    public const nint m_RopeFlags = 0xD10; // uint16_t
    public const nint m_iRopeMaterialModelIndex = 0xD18; // CStrongHandle<InfoForResourceTypeIMaterial2>
    public const nint m_LightValues = 0xF90; // Vector[10]
    public const nint m_nSegments = 0x1008; // uint8_t
    public const nint m_hStartPoint = 0x100C; // CHandle<C_BaseEntity>
    public const nint m_hEndPoint = 0x1010; // CHandle<C_BaseEntity>
    public const nint m_iStartAttachment = 0x1014; // AttachmentHandle_t
    public const nint m_iEndAttachment = 0x1015; // AttachmentHandle_t
    public const nint m_Subdiv = 0x1016; // uint8_t
    public const nint m_RopeLength = 0x1018; // int16_t
    public const nint m_Slack = 0x101A; // int16_t
    public const nint m_TextureScale = 0x101C; // float
    public const nint m_fLockedPoints = 0x1020; // uint8_t
    public const nint m_nChangeCount = 0x1021; // uint8_t
    public const nint m_Width = 0x1024; // float
    public const nint m_PhysicsDelegate = 0x1028; // C_RopeKeyframe::CPhysicsDelegate
    public const nint m_hMaterial = 0x1038; // CStrongHandle<InfoForResourceTypeIMaterial2>
    public const nint m_TextureHeight = 0x1040; // int32_t
    public const nint m_vecImpulse = 0x1044; // Vector
    public const nint m_vecPreviousImpulse = 0x1050; // Vector
    public const nint m_flCurrentGustTimer = 0x105C; // float
    public const nint m_flCurrentGustLifetime = 0x1060; // float
    public const nint m_flTimeToNextGust = 0x1064; // float
    public const nint m_vWindDir = 0x1068; // Vector
    public const nint m_vColorMod = 0x1074; // Vector
    public const nint m_vCachedEndPointAttachmentPos = 0x1080; // Vector[2]
    public const nint m_vCachedEndPointAttachmentAngle = 0x1098; // QAngle[2]
    public const nint m_bConstrainBetweenEndpoints = 0x10B0; // bool
    public const nint m_bEndPointAttachmentPositionsDirty = 0x0; // bitfield:1
    public const nint m_bEndPointAttachmentAnglesDirty = 0x0; // bitfield:1
    public const nint m_bNewDataThisFrame = 0x0; // bitfield:1
    public const nint m_bPhysicsInitted = 0x0; // bitfield:1
}

public static class C_RopeKeyframe_CPhysicsDelegate {
    public const nint m_pKeyframe = 0x8; // C_RopeKeyframe*
}

public static class C_SceneEntity { // C_PointEntity
    public const nint m_bIsPlayingBack = 0x558; // bool
    public const nint m_bPaused = 0x559; // bool
    public const nint m_bMultiplayer = 0x55A; // bool
    public const nint m_bAutogenerated = 0x55B; // bool
    public const nint m_flForceClientTime = 0x55C; // float
    public const nint m_nSceneStringIndex = 0x560; // uint16_t
    public const nint m_bClientOnly = 0x562; // bool
    public const nint m_hOwner = 0x564; // CHandle<C_BaseFlex>
    public const nint m_hActorList = 0x568; // C_NetworkUtlVectorBase<CHandle<C_BaseFlex>>
    public const nint m_bWasPlaying = 0x580; // bool
    public const nint m_QueuedEvents = 0x590; // CUtlVector<C_SceneEntity::QueuedEvents_t>
    public const nint m_flCurrentTime = 0x5A8; // float
}

public static class C_SceneEntity_QueuedEvents_t {
    public const nint starttime = 0x0; // float
}

public static class C_SensorGrenade { // C_BaseCSGrenade
}

public static class C_SensorGrenadeProjectile { // C_BaseCSGrenadeProjectile
}

public static class C_ShatterGlassShardPhysics { // C_PhysicsProp
    public const nint m_ShardDesc = 0x1038; // shard_model_desc_t
}

public static class C_SingleplayRules { // C_GameRules
}

public static class C_SkyCamera { // C_BaseEntity
    public const nint m_skyboxData = 0x550; // sky3dparams_t
    public const nint m_skyboxSlotToken = 0x5E0; // CUtlStringToken
    public const nint m_bUseAngles = 0x5E4; // bool
    public const nint m_pNext = 0x5E8; // C_SkyCamera*
}

public static class C_SmokeGrenade { // C_BaseCSGrenade
}

public static class C_SmokeGrenadeProjectile { // C_BaseCSGrenadeProjectile
    public const nint m_nSmokeEffectTickBegin = 0x1160; // int32_t
    public const nint m_bDidSmokeEffect = 0x1164; // bool
    public const nint m_nRandomSeed = 0x1168; // int32_t
    public const nint m_vSmokeColor = 0x116C; // Vector
    public const nint m_vSmokeDetonationPos = 0x1178; // Vector
    public const nint m_VoxelFrameData = 0x1188; // CUtlVector<uint8_t>
    public const nint m_bSmokeVolumeDataReceived = 0x11A0; // bool
    public const nint m_bSmokeEffectSpawned = 0x11A1; // bool
}

public static class C_SoundAreaEntityBase { // C_BaseEntity
    public const nint m_bDisabled = 0x550; // bool
    public const nint m_bWasEnabled = 0x558; // bool
    public const nint m_iszSoundAreaType = 0x560; // CUtlSymbolLarge
    public const nint m_vPos = 0x568; // Vector
}

public static class C_SoundAreaEntityOrientedBox { // C_SoundAreaEntityBase
    public const nint m_vMin = 0x578; // Vector
    public const nint m_vMax = 0x584; // Vector
}

public static class C_SoundAreaEntitySphere { // C_SoundAreaEntityBase
    public const nint m_flRadius = 0x578; // float
}

public static class C_SoundOpvarSetAABBEntity { // C_SoundOpvarSetPointEntity
}

public static class C_SoundOpvarSetAutoRoomEntity { // C_SoundOpvarSetPointEntity
}

public static class C_SoundOpvarSetOBBEntity { // C_SoundOpvarSetAABBEntity
}

public static class C_SoundOpvarSetOBBWindEntity { // C_SoundOpvarSetPointBase
}

public static class C_SoundOpvarSetPathCornerEntity { // C_SoundOpvarSetPointEntity
}

public static class C_SoundOpvarSetPointBase { // C_BaseEntity
    public const nint m_iszStackName = 0x550; // CUtlSymbolLarge
    public const nint m_iszOperatorName = 0x558; // CUtlSymbolLarge
    public const nint m_iszOpvarName = 0x560; // CUtlSymbolLarge
    public const nint m_iOpvarIndex = 0x568; // int32_t
    public const nint m_bUseAutoCompare = 0x56C; // bool
}

public static class C_SoundOpvarSetPointEntity { // C_SoundOpvarSetPointBase
}

public static class C_SpotlightEnd { // C_BaseModelEntity
    public const nint m_flLightScale = 0xCD0; // float
    public const nint m_Radius = 0xCD4; // float
}

public static class C_Sprite { // C_BaseModelEntity
    public const nint m_hSpriteMaterial = 0xCE8; // CStrongHandle<InfoForResourceTypeIMaterial2>
    public const nint m_hAttachedToEntity = 0xCF0; // CHandle<C_BaseEntity>
    public const nint m_nAttachment = 0xCF4; // AttachmentHandle_t
    public const nint m_flSpriteFramerate = 0xCF8; // float
    public const nint m_flFrame = 0xCFC; // float
    public const nint m_flDieTime = 0xD00; // GameTime_t
    public const nint m_nBrightness = 0xD10; // uint32_t
    public const nint m_flBrightnessDuration = 0xD14; // float
    public const nint m_flSpriteScale = 0xD18; // float
    public const nint m_flScaleDuration = 0xD1C; // float
    public const nint m_bWorldSpaceScale = 0xD20; // bool
    public const nint m_flGlowProxySize = 0xD24; // float
    public const nint m_flHDRColorScale = 0xD28; // float
    public const nint m_flLastTime = 0xD2C; // GameTime_t
    public const nint m_flMaxFrame = 0xD30; // float
    public const nint m_flStartScale = 0xD34; // float
    public const nint m_flDestScale = 0xD38; // float
    public const nint m_flScaleTimeStart = 0xD3C; // GameTime_t
    public const nint m_nStartBrightness = 0xD40; // int32_t
    public const nint m_nDestBrightness = 0xD44; // int32_t
    public const nint m_flBrightnessTimeStart = 0xD48; // GameTime_t
    public const nint m_hOldSpriteMaterial = 0xD50; // CWeakHandle<InfoForResourceTypeIMaterial2>
    public const nint m_nSpriteWidth = 0xDF8; // int32_t
    public const nint m_nSpriteHeight = 0xDFC; // int32_t
}

public static class C_SpriteOriented { // C_Sprite
}

public static class C_Sun { // C_BaseModelEntity
    public const nint m_fxSSSunFlareEffectIndex = 0xCD0; // ParticleIndex_t
    public const nint m_fxSunFlareEffectIndex = 0xCD4; // ParticleIndex_t
    public const nint m_fdistNormalize = 0xCD8; // float
    public const nint m_vSunPos = 0xCDC; // Vector
    public const nint m_vDirection = 0xCE8; // Vector
    public const nint m_iszEffectName = 0xCF8; // CUtlSymbolLarge
    public const nint m_iszSSEffectName = 0xD00; // CUtlSymbolLarge
    public const nint m_clrOverlay = 0xD08; // Color
    public const nint m_bOn = 0xD0C; // bool
    public const nint m_bmaxColor = 0xD0D; // bool
    public const nint m_flSize = 0xD10; // float
    public const nint m_flHazeScale = 0xD14; // float
    public const nint m_flRotation = 0xD18; // float
    public const nint m_flHDRColorScale = 0xD1C; // float
    public const nint m_flAlphaHaze = 0xD20; // float
    public const nint m_flAlphaScale = 0xD24; // float
    public const nint m_flAlphaHdr = 0xD28; // float
    public const nint m_flFarZScale = 0xD2C; // float
}

public static class C_SunGlowOverlay { // CGlowOverlay
    public const nint m_bModulateByDot = 0xD0; // bool
}

public static class C_Team { // C_BaseEntity
    public const nint m_aPlayerControllers = 0x550; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
    public const nint m_aPlayers = 0x568; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
    public const nint m_iScore = 0x580; // int32_t
    public const nint m_szTeamname = 0x584; // char[129]
}

public static class C_TeamRoundTimer { // C_BaseEntity
    public const nint m_bTimerPaused = 0x550; // bool
    public const nint m_flTimeRemaining = 0x554; // float
    public const nint m_flTimerEndTime = 0x558; // GameTime_t
    public const nint m_bIsDisabled = 0x55C; // bool
    public const nint m_bShowInHUD = 0x55D; // bool
    public const nint m_nTimerLength = 0x560; // int32_t
    public const nint m_nTimerInitialLength = 0x564; // int32_t
    public const nint m_nTimerMaxLength = 0x568; // int32_t
    public const nint m_bAutoCountdown = 0x56C; // bool
    public const nint m_nSetupTimeLength = 0x570; // int32_t
    public const nint m_nState = 0x574; // int32_t
    public const nint m_bStartPaused = 0x578; // bool
    public const nint m_bInCaptureWatchState = 0x579; // bool
    public const nint m_flTotalTime = 0x57C; // float
    public const nint m_bStopWatchTimer = 0x580; // bool
    public const nint m_bFireFinished = 0x581; // bool
    public const nint m_bFire5MinRemain = 0x582; // bool
    public const nint m_bFire4MinRemain = 0x583; // bool
    public const nint m_bFire3MinRemain = 0x584; // bool
    public const nint m_bFire2MinRemain = 0x585; // bool
    public const nint m_bFire1MinRemain = 0x586; // bool
    public const nint m_bFire30SecRemain = 0x587; // bool
    public const nint m_bFire10SecRemain = 0x588; // bool
    public const nint m_bFire5SecRemain = 0x589; // bool
    public const nint m_bFire4SecRemain = 0x58A; // bool
    public const nint m_bFire3SecRemain = 0x58B; // bool
    public const nint m_bFire2SecRemain = 0x58C; // bool
    public const nint m_bFire1SecRemain = 0x58D; // bool
    public const nint m_nOldTimerLength = 0x590; // int32_t
    public const nint m_nOldTimerState = 0x594; // int32_t
}

public static class C_TeamplayRules { // C_MultiplayRules
}

public static class C_TextureBasedAnimatable { // C_BaseModelEntity
    public const nint m_bLoop = 0xCD0; // bool
    public const nint m_flFPS = 0xCD4; // float
    public const nint m_hPositionKeys = 0xCD8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_hRotationKeys = 0xCE0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_vAnimationBoundsMin = 0xCE8; // Vector
    public const nint m_vAnimationBoundsMax = 0xCF4; // Vector
    public const nint m_flStartTime = 0xD00; // float
    public const nint m_flStartFrame = 0xD04; // float
}

public static class C_TintController { // C_BaseEntity
}

public static class C_TonemapController2 { // C_BaseEntity
    public const nint m_flAutoExposureMin = 0x550; // float
    public const nint m_flAutoExposureMax = 0x554; // float
    public const nint m_flTonemapPercentTarget = 0x558; // float
    public const nint m_flTonemapPercentBrightPixels = 0x55C; // float
    public const nint m_flTonemapMinAvgLum = 0x560; // float
    public const nint m_flExposureAdaptationSpeedUp = 0x564; // float
    public const nint m_flExposureAdaptationSpeedDown = 0x568; // float
    public const nint m_flTonemapEVSmoothingRange = 0x56C; // float
}

public static class C_TonemapController2Alias_env_tonemap_controller2 { // C_TonemapController2
}

public static class C_TriggerBuoyancy { // C_BaseTrigger
    public const nint m_BuoyancyHelper = 0xCD8; // CBuoyancyHelper
    public const nint m_flFluidDensity = 0xCF8; // float
}

public static class C_TriggerLerpObject { // C_BaseTrigger
}

public static class C_TriggerMultiple { // C_BaseTrigger
}

public static class C_TriggerPhysics { // C_BaseTrigger
    public const nint m_gravityScale = 0xCD8; // float
    public const nint m_linearLimit = 0xCDC; // float
    public const nint m_linearDamping = 0xCE0; // float
    public const nint m_angularLimit = 0xCE4; // float
    public const nint m_angularDamping = 0xCE8; // float
    public const nint m_linearForce = 0xCEC; // float
    public const nint m_flFrequency = 0xCF0; // float
    public const nint m_flDampingRatio = 0xCF4; // float
    public const nint m_vecLinearForcePointAt = 0xCF8; // Vector
    public const nint m_bCollapseToForcePoint = 0xD04; // bool
    public const nint m_vecLinearForcePointAtWorld = 0xD08; // Vector
    public const nint m_vecLinearForceDirection = 0xD14; // Vector
    public const nint m_bConvertToDebrisWhenPossible = 0xD20; // bool
}

public static class C_TriggerVolume { // C_BaseModelEntity
}

public static class C_ViewmodelAttachmentModel { // CBaseAnimGraph
}

public static class C_ViewmodelWeapon { // CBaseAnimGraph
    public const nint m_worldModel = 0xED8; // char*
}

public static class C_VoteController { // C_BaseEntity
    public const nint m_iActiveIssueIndex = 0x560; // int32_t
    public const nint m_iOnlyTeamToVote = 0x564; // int32_t
    public const nint m_nVoteOptionCount = 0x568; // int32_t[5]
    public const nint m_nPotentialVotes = 0x57C; // int32_t
    public const nint m_bVotesDirty = 0x580; // bool
    public const nint m_bTypeDirty = 0x581; // bool
    public const nint m_bIsYesNoVote = 0x582; // bool
}

public static class C_WaterBullet { // CBaseAnimGraph
}

public static class C_WeaponAWP { // C_CSWeaponBaseGun
}

public static class C_WeaponAug { // C_CSWeaponBaseGun
}

public static class C_WeaponBaseItem { // C_CSWeaponBase
    public const nint m_SequenceCompleteTimer = 0x1A70; // CountdownTimer
    public const nint m_bRedraw = 0x1A88; // bool
}

public static class C_WeaponBizon { // C_CSWeaponBaseGun
}

public static class C_WeaponCZ75a { // C_CSWeaponBaseGun
}

public static class C_WeaponElite { // C_CSWeaponBaseGun
}

public static class C_WeaponFamas { // C_CSWeaponBaseGun
}

public static class C_WeaponFiveSeven { // C_CSWeaponBaseGun
}

public static class C_WeaponG3SG1 { // C_CSWeaponBaseGun
}

public static class C_WeaponGalilAR { // C_CSWeaponBaseGun
}

public static class C_WeaponGlock { // C_CSWeaponBaseGun
}

public static class C_WeaponHKP2000 { // C_CSWeaponBaseGun
}

public static class C_WeaponM249 { // C_CSWeaponBaseGun
}

public static class C_WeaponM4A1 { // C_CSWeaponBaseGun
}

public static class C_WeaponM4A1Silencer { // C_CSWeaponBaseGun
}

public static class C_WeaponMAC10 { // C_CSWeaponBaseGun
}

public static class C_WeaponMP5SD { // C_CSWeaponBaseGun
}

public static class C_WeaponMP7 { // C_CSWeaponBaseGun
}

public static class C_WeaponMP9 { // C_CSWeaponBaseGun
}

public static class C_WeaponMag7 { // C_CSWeaponBaseGun
}

public static class C_WeaponNOVA { // C_CSWeaponBase
}

public static class C_WeaponNegev { // C_CSWeaponBaseGun
}

public static class C_WeaponP250 { // C_CSWeaponBaseGun
}

public static class C_WeaponP90 { // C_CSWeaponBaseGun
}

public static class C_WeaponRevolver { // C_CSWeaponBaseGun
}

public static class C_WeaponSCAR20 { // C_CSWeaponBaseGun
}

public static class C_WeaponSG556 { // C_CSWeaponBaseGun
}

public static class C_WeaponSSG08 { // C_CSWeaponBaseGun
}

public static class C_WeaponSawedoff { // C_CSWeaponBase
}

public static class C_WeaponShield { // C_CSWeaponBaseGun
    public const nint m_flDisplayHealth = 0x1A90; // float
}

public static class C_WeaponTaser { // C_CSWeaponBaseGun
    public const nint m_fFireTime = 0x1A90; // GameTime_t
}

public static class C_WeaponTec9 { // C_CSWeaponBaseGun
}

public static class C_WeaponUMP45 { // C_CSWeaponBaseGun
}

public static class C_WeaponUSPSilencer { // C_CSWeaponBaseGun
}

public static class C_WeaponXM1014 { // C_CSWeaponBase
}

public static class C_World { // C_BaseModelEntity
}

public static class C_WorldModelGloves { // CBaseAnimGraph
}

public static class C_WorldModelNametag { // CBaseAnimGraph
}

public static class C_WorldModelStattrak { // CBaseAnimGraph
}

public static class C_fogplayerparams_t {
    public const nint m_hCtrl = 0x8; // CHandle<C_FogController>
    public const nint m_flTransitionTime = 0xC; // float
    public const nint m_OldColor = 0x10; // Color
    public const nint m_flOldStart = 0x14; // float
    public const nint m_flOldEnd = 0x18; // float
    public const nint m_flOldMaxDensity = 0x1C; // float
    public const nint m_flOldHDRColorScale = 0x20; // float
    public const nint m_flOldFarZ = 0x24; // float
    public const nint m_NewColor = 0x28; // Color
    public const nint m_flNewStart = 0x2C; // float
    public const nint m_flNewEnd = 0x30; // float
    public const nint m_flNewMaxDensity = 0x34; // float
    public const nint m_flNewHDRColorScale = 0x38; // float
    public const nint m_flNewFarZ = 0x3C; // float
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
    public const nint m_vecRandomRollInputVars_InputVarsToRoll = 0x30; // CUtlVector<CUtlString>
    public const nint m_strCopyMatchingKeys_InputContainerSrc = 0x48; // CUtlString
    public const nint m_strCopyKeysWithSuffix_InputContainerSrc = 0x50; // CUtlString
    public const nint m_strCopyKeysWithSuffix_FindSuffix = 0x58; // CUtlString
    public const nint m_strCopyKeysWithSuffix_ReplaceSuffix = 0x60; // CUtlString
    public const nint m_nSetValue_Value = 0x68; // CompositeMaterialInputLooseVariable_t
    public const nint m_strGenerateTexture_TargetParam = 0x2D8; // CUtlString
    public const nint m_strGenerateTexture_InitialContainer = 0x2E0; // CUtlString
    public const nint m_nResolution = 0x2E8; // int32_t
    public const nint m_bIsScratchTarget = 0x2EC; // bool
    public const nint m_bSplatDebugInfo = 0x2ED; // bool
    public const nint m_bCaptureInRenderDoc = 0x2EE; // bool
    public const nint m_vecTexGenInstructions = 0x2F0; // CUtlVector<CompMatPropertyMutator_t>
    public const nint m_vecConditionalMutators = 0x308; // CUtlVector<CompMatPropertyMutator_t>
    public const nint m_strPopInputQueue_Container = 0x320; // CUtlString
    public const nint m_strDrawText_InputContainerSrc = 0x328; // CUtlString
    public const nint m_strDrawText_InputContainerProperty = 0x330; // CUtlString
    public const nint m_vecDrawText_Position = 0x338; // Vector2D
    public const nint m_colDrawText_Color = 0x340; // Color
    public const nint m_strDrawText_Font = 0x348; // CUtlString
    public const nint m_vecConditions = 0x350; // CUtlVector<CompMatMutatorCondition_t>
}

public static class CompositeMaterialAssemblyProcedure_t {
    public const nint m_vecCompMatIncludes = 0x0; // CUtlVector<CResourceName>
    public const nint m_vecMatchFilters = 0x18; // CUtlVector<CompositeMaterialMatchFilter_t>
    public const nint m_vecCompositeInputContainers = 0x30; // CUtlVector<CompositeMaterialInputContainer_t>
    public const nint m_vecPropertyMutators = 0x48; // CUtlVector<CompMatPropertyMutator_t>
}

public static class CompositeMaterialEditorPoint_t {
    public const nint m_ModelName = 0x0; // CResourceName
    public const nint m_nSequenceIndex = 0xE0; // int32_t
    public const nint m_flCycle = 0xE4; // float
    public const nint m_KVModelStateChoices = 0xE8; // KeyValues3
    public const nint m_bEnableChildModel = 0xF8; // bool
    public const nint m_ChildModelName = 0x100; // CResourceName
    public const nint m_vecCompositeMaterialAssemblyProcedures = 0x1E0; // CUtlVector<CompositeMaterialAssemblyProcedure_t>
    public const nint m_vecCompositeMaterials = 0x1F8; // CUtlVector<CompositeMaterial_t>
}

public static class CompositeMaterialInputContainer_t {
    public const nint m_bEnabled = 0x0; // bool
    public const nint m_nCompositeMaterialInputContainerSourceType = 0x4; // CompositeMaterialInputContainerSourceType_t
    public const nint m_strSpecificContainerMaterial = 0x8; // CResourceName
    public const nint m_strAttrName = 0xE8; // CUtlString
    public const nint m_strAlias = 0xF0; // CUtlString
    public const nint m_vecLooseVariables = 0xF8; // CUtlVector<CompositeMaterialInputLooseVariable_t>
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
    public const nint m_nValueIntX = 0x40; // int32_t
    public const nint m_nValueIntY = 0x44; // int32_t
    public const nint m_nValueIntZ = 0x48; // int32_t
    public const nint m_nValueIntW = 0x4C; // int32_t
    public const nint m_bHasFloatBounds = 0x50; // bool
    public const nint m_flValueFloatX = 0x54; // float
    public const nint m_flValueFloatX_Min = 0x58; // float
    public const nint m_flValueFloatX_Max = 0x5C; // float
    public const nint m_flValueFloatY = 0x60; // float
    public const nint m_flValueFloatY_Min = 0x64; // float
    public const nint m_flValueFloatY_Max = 0x68; // float
    public const nint m_flValueFloatZ = 0x6C; // float
    public const nint m_flValueFloatZ_Min = 0x70; // float
    public const nint m_flValueFloatZ_Max = 0x74; // float
    public const nint m_flValueFloatW = 0x78; // float
    public const nint m_flValueFloatW_Min = 0x7C; // float
    public const nint m_flValueFloatW_Max = 0x80; // float
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
    public const nint m_vecGeneratedTextures = 0x40; // CUtlVector<GeneratedTextureHandle_t>
}

public static class CountdownTimer {
    public const nint m_duration = 0x8; // float
    public const nint m_timestamp = 0xC; // GameTime_t
    public const nint m_timescale = 0x10; // float
    public const nint m_nWorldGroupId = 0x14; // WorldGroupId_t
}

public static class EngineCountdownTimer {
    public const nint m_duration = 0x8; // float
    public const nint m_timestamp = 0xC; // float
    public const nint m_timescale = 0x10; // float
}

public static class EntityRenderAttribute_t {
    public const nint m_ID = 0x30; // CUtlStringToken
    public const nint m_Values = 0x34; // Vector4D
}

public static class EntitySpottedState_t {
    public const nint m_bSpotted = 0x8; // bool
    public const nint m_bSpottedByMask = 0xC; // uint32_t[2]
}

public static class GeneratedTextureHandle_t {
    public const nint m_strBitmapName = 0x0; // CUtlString
}

public static class IClientAlphaProperty {
}

public static class IntervalTimer {
    public const nint m_timestamp = 0x8; // GameTime_t
    public const nint m_nWorldGroupId = 0xC; // WorldGroupId_t
}

public static class PhysicsRagdollPose_t {
    public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
    public const nint m_Transforms = 0x30; // C_NetworkUtlVectorBase<CTransform>
    public const nint m_hOwner = 0x48; // CHandle<C_BaseEntity>
    public const nint m_bDirty = 0x68; // bool
}

public static class SellbackPurchaseEntry_t {
    public const nint m_unDefIdx = 0x30; // uint16_t
    public const nint m_nCost = 0x34; // int32_t
    public const nint m_nPrevArmor = 0x38; // int32_t
    public const nint m_bPrevHelmet = 0x3C; // bool
    public const nint m_hItem = 0x40; // CEntityHandle
}

public static class SequenceHistory_t {
    public const nint m_hSequence = 0x0; // HSequence
    public const nint m_flSeqStartTime = 0x4; // GameTime_t
    public const nint m_flSeqFixedCycle = 0x8; // float
    public const nint m_nSeqLoopMode = 0xC; // AnimLoopMode_t
    public const nint m_flPlaybackRate = 0x10; // float
    public const nint m_flCyclesPerSecond = 0x14; // float
}

public static class ServerAuthoritativeWeaponSlot_t {
    public const nint unClass = 0x28; // uint16_t
    public const nint unSlot = 0x2A; // uint16_t
    public const nint unItemDefIdx = 0x2C; // uint16_t
}

public static class TimedEvent {
    public const nint m_TimeBetweenEvents = 0x0; // float
    public const nint m_fNextEvent = 0x4; // float
}

public static class VPhysicsCollisionAttribute_t {
    public const nint m_nInteractsAs = 0x8; // uint64_t
    public const nint m_nInteractsWith = 0x10; // uint64_t
    public const nint m_nInteractsExclude = 0x18; // uint64_t
    public const nint m_nEntityId = 0x20; // uint32_t
    public const nint m_nOwnerId = 0x24; // uint32_t
    public const nint m_nHierarchyId = 0x28; // uint16_t
    public const nint m_nCollisionGroup = 0x2A; // uint8_t
    public const nint m_nCollisionFunctionMask = 0x2B; // uint8_t
}

public static class ViewAngleServerChange_t {
    public const nint nType = 0x30; // FixAngleSet_t
    public const nint qAngle = 0x34; // QAngle
    public const nint nIndex = 0x40; // uint32_t
}

public static class WeaponPurchaseCount_t {
    public const nint m_nItemDefIndex = 0x30; // uint16_t
    public const nint m_nCount = 0x32; // uint16_t
}

public static class WeaponPurchaseTracker_t {
    public const nint m_weaponPurchases = 0x8; // C_UtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
}

public static class audioparams_t {
    public const nint localSound = 0x8; // Vector[8]
    public const nint soundscapeIndex = 0x68; // int32_t
    public const nint localBits = 0x6C; // uint8_t
    public const nint soundscapeEntityListIndex = 0x70; // int32_t
    public const nint soundEventHash = 0x74; // uint32_t
}

public static class fogparams_t {
    public const nint dirPrimary = 0x8; // Vector
    public const nint colorPrimary = 0x14; // Color
    public const nint colorSecondary = 0x18; // Color
    public const nint colorPrimaryLerpTo = 0x1C; // Color
    public const nint colorSecondaryLerpTo = 0x20; // Color
    public const nint start = 0x24; // float
    public const nint end = 0x28; // float
    public const nint farz = 0x2C; // float
    public const nint maxdensity = 0x30; // float
    public const nint exponent = 0x34; // float
    public const nint HDRColorScale = 0x38; // float
    public const nint skyboxFogFactor = 0x3C; // float
    public const nint skyboxFogFactorLerpTo = 0x40; // float
    public const nint startLerpTo = 0x44; // float
    public const nint endLerpTo = 0x48; // float
    public const nint maxdensityLerpTo = 0x4C; // float
    public const nint lerptime = 0x50; // GameTime_t
    public const nint duration = 0x54; // float
    public const nint blendtobackground = 0x58; // float
    public const nint scattering = 0x5C; // float
    public const nint locallightscale = 0x60; // float
    public const nint enable = 0x64; // bool
    public const nint blend = 0x65; // bool
    public const nint m_bNoReflectionFog = 0x66; // bool
    public const nint m_bPadding = 0x67; // bool
}

public static class shard_model_desc_t {
    public const nint m_nModelID = 0x8; // int32_t
    public const nint m_hMaterial = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
    public const nint m_solid = 0x18; // ShardSolid_t
    public const nint m_ShatterPanelMode = 0x19; // ShatterPanelMode
    public const nint m_vecPanelSize = 0x1C; // Vector2D
    public const nint m_vecStressPositionA = 0x24; // Vector2D
    public const nint m_vecStressPositionB = 0x2C; // Vector2D
    public const nint m_vecPanelVertices = 0x38; // C_NetworkUtlVectorBase<Vector2D>
    public const nint m_flGlassHalfThickness = 0x50; // float
    public const nint m_bHasParent = 0x54; // bool
    public const nint m_bParentFrozen = 0x55; // bool
    public const nint m_SurfacePropStringToken = 0x58; // CUtlStringToken
}

public static class sky3dparams_t {
    public const nint scale = 0x8; // int16_t
    public const nint origin = 0xC; // Vector
    public const nint bClip3DSkyBoxNearToWorldFar = 0x18; // bool
    public const nint flClip3DSkyBoxNearToWorldFarOffset = 0x1C; // float
    public const nint fog = 0x20; // fogparams_t
    public const nint m_nWorldGroupID = 0x88; // WorldGroupId_t
}