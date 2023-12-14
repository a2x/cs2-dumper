/*
 * Created using https://github.com/a2x/cs2-dumper
 * Thu, 14 Dec 2023 11:58:27 +0000
 */

#pragma once

#include <cstddef>

namespace ActiveModelConfig_t {
    constexpr std::ptrdiff_t m_Handle = 0x28; // ModelConfigHandle_t
    constexpr std::ptrdiff_t m_Name = 0x30; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_AssociatedEntities = 0x38; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
    constexpr std::ptrdiff_t m_AssociatedEntityNames = 0x50; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
}

namespace CAnimGraphNetworkedVariables {
    constexpr std::ptrdiff_t m_PredNetBoolVariables = 0x8; // C_NetworkUtlVectorBase<uint32_t>
    constexpr std::ptrdiff_t m_PredNetByteVariables = 0x20; // C_NetworkUtlVectorBase<uint8_t>
    constexpr std::ptrdiff_t m_PredNetUInt16Variables = 0x38; // C_NetworkUtlVectorBase<uint16_t>
    constexpr std::ptrdiff_t m_PredNetIntVariables = 0x50; // C_NetworkUtlVectorBase<int32_t>
    constexpr std::ptrdiff_t m_PredNetUInt32Variables = 0x68; // C_NetworkUtlVectorBase<uint32_t>
    constexpr std::ptrdiff_t m_PredNetUInt64Variables = 0x80; // C_NetworkUtlVectorBase<uint64_t>
    constexpr std::ptrdiff_t m_PredNetFloatVariables = 0x98; // C_NetworkUtlVectorBase<float>
    constexpr std::ptrdiff_t m_PredNetVectorVariables = 0xB0; // C_NetworkUtlVectorBase<Vector>
    constexpr std::ptrdiff_t m_PredNetQuaternionVariables = 0xC8; // C_NetworkUtlVectorBase<Quaternion>
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetBoolVariables = 0xE0; // C_NetworkUtlVectorBase<uint32_t>
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetByteVariables = 0xF8; // C_NetworkUtlVectorBase<uint8_t>
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt16Variables = 0x110; // C_NetworkUtlVectorBase<uint16_t>
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetIntVariables = 0x128; // C_NetworkUtlVectorBase<int32_t>
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt32Variables = 0x140; // C_NetworkUtlVectorBase<uint32_t>
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt64Variables = 0x158; // C_NetworkUtlVectorBase<uint64_t>
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetFloatVariables = 0x170; // C_NetworkUtlVectorBase<float>
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetVectorVariables = 0x188; // C_NetworkUtlVectorBase<Vector>
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetQuaternionVariables = 0x1A0; // C_NetworkUtlVectorBase<Quaternion>
    constexpr std::ptrdiff_t m_nBoolVariablesCount = 0x1B8; // int32_t
    constexpr std::ptrdiff_t m_nOwnerOnlyBoolVariablesCount = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_nRandomSeedOffset = 0x1C0; // int32_t
    constexpr std::ptrdiff_t m_flLastTeleportTime = 0x1C4; // float
}

namespace CAttributeList {
    constexpr std::ptrdiff_t m_Attributes = 0x8; // C_UtlVectorEmbeddedNetworkVar<CEconItemAttribute>
    constexpr std::ptrdiff_t m_pManager = 0x58; // CAttributeManager*
}

namespace CAttributeManager {
    constexpr std::ptrdiff_t m_Providers = 0x8; // CUtlVector<CHandle<C_BaseEntity>>
    constexpr std::ptrdiff_t m_iReapplyProvisionParity = 0x20; // int32_t
    constexpr std::ptrdiff_t m_hOuter = 0x24; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_bPreventLoopback = 0x28; // bool
    constexpr std::ptrdiff_t m_ProviderType = 0x2C; // attributeprovidertypes_t
    constexpr std::ptrdiff_t m_CachedResults = 0x30; // CUtlVector<CAttributeManager::cached_attribute_float_t>
}

namespace CAttributeManager_cached_attribute_float_t {
    constexpr std::ptrdiff_t flIn = 0x0; // float
    constexpr std::ptrdiff_t iAttribHook = 0x8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t flOut = 0x10; // float
}

namespace CBaseAnimGraph { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_bInitiallyPopulateInterpHistory = 0xCC0; // bool
    constexpr std::ptrdiff_t m_bShouldAnimateDuringGameplayPause = 0xCC1; // bool
    constexpr std::ptrdiff_t m_bSuppressAnimEventSounds = 0xCC3; // bool
    constexpr std::ptrdiff_t m_bAnimGraphUpdateEnabled = 0xCD0; // bool
    constexpr std::ptrdiff_t m_flMaxSlopeDistance = 0xCD4; // float
    constexpr std::ptrdiff_t m_vLastSlopeCheckPos = 0xCD8; // Vector
    constexpr std::ptrdiff_t m_vecForce = 0xCE8; // Vector
    constexpr std::ptrdiff_t m_nForceBone = 0xCF4; // int32_t
    constexpr std::ptrdiff_t m_pClientsideRagdoll = 0xCF8; // CBaseAnimGraph*
    constexpr std::ptrdiff_t m_bBuiltRagdoll = 0xD00; // bool
    constexpr std::ptrdiff_t m_pRagdollPose = 0xD18; // PhysicsRagdollPose_t*
    constexpr std::ptrdiff_t m_bClientRagdoll = 0xD20; // bool
    constexpr std::ptrdiff_t m_bHasAnimatedMaterialAttributes = 0xD30; // bool
}

namespace CBaseAnimGraphController { // CSkeletonAnimationController
    constexpr std::ptrdiff_t m_baseLayer = 0x18; // CNetworkedSequenceOperation
    constexpr std::ptrdiff_t m_animGraphNetworkedVars = 0x40; // CAnimGraphNetworkedVariables
    constexpr std::ptrdiff_t m_bSequenceFinished = 0x1320; // bool
    constexpr std::ptrdiff_t m_flLastEventCycle = 0x1324; // float
    constexpr std::ptrdiff_t m_flLastEventAnimTime = 0x1328; // float
    constexpr std::ptrdiff_t m_flPlaybackRate = 0x132C; // CNetworkedQuantizedFloat
    constexpr std::ptrdiff_t m_flPrevAnimTime = 0x1334; // float
    constexpr std::ptrdiff_t m_bClientSideAnimation = 0x1338; // bool
    constexpr std::ptrdiff_t m_bNetworkedAnimationInputsChanged = 0x1339; // bool
    constexpr std::ptrdiff_t m_nPrevNewSequenceParity = 0x133A; // uint8_t
    constexpr std::ptrdiff_t m_nPrevResetEventsParity = 0x133B; // uint8_t
    constexpr std::ptrdiff_t m_nNewSequenceParity = 0x133C; // int32_t
    constexpr std::ptrdiff_t m_nResetEventsParity = 0x1340; // int32_t
    constexpr std::ptrdiff_t m_nAnimLoopMode = 0x1344; // AnimLoopMode_t
    constexpr std::ptrdiff_t m_hAnimationUpdate = 0x13E4; // AnimationUpdateListHandle_t
    constexpr std::ptrdiff_t m_hLastAnimEventSequence = 0x13E8; // HSequence
}

namespace CBasePlayerController { // C_BaseEntity
    constexpr std::ptrdiff_t m_nFinalPredictedTick = 0x548; // int32_t
    constexpr std::ptrdiff_t m_CommandContext = 0x550; // C_CommandContext
    constexpr std::ptrdiff_t m_nInButtonsWhichAreToggles = 0x600; // uint64_t
    constexpr std::ptrdiff_t m_nTickBase = 0x608; // uint32_t
    constexpr std::ptrdiff_t m_hPawn = 0x60C; // CHandle<C_BasePlayerPawn>
    constexpr std::ptrdiff_t m_hPredictedPawn = 0x610; // CHandle<C_BasePlayerPawn>
    constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x614; // CSplitScreenSlot
    constexpr std::ptrdiff_t m_hSplitOwner = 0x618; // CHandle<CBasePlayerController>
    constexpr std::ptrdiff_t m_hSplitScreenPlayers = 0x620; // CUtlVector<CHandle<CBasePlayerController>>
    constexpr std::ptrdiff_t m_bIsHLTV = 0x638; // bool
    constexpr std::ptrdiff_t m_iConnected = 0x63C; // PlayerConnectedState
    constexpr std::ptrdiff_t m_iszPlayerName = 0x640; // char[128]
    constexpr std::ptrdiff_t m_steamID = 0x6C8; // uint64_t
    constexpr std::ptrdiff_t m_bIsLocalPlayerController = 0x6D0; // bool
    constexpr std::ptrdiff_t m_iDesiredFOV = 0x6D4; // uint32_t
}

namespace CBasePlayerVData { // CEntitySubclassVDataBase
    constexpr std::ptrdiff_t m_sModelName = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    constexpr std::ptrdiff_t m_flHeadDamageMultiplier = 0x108; // CSkillFloat
    constexpr std::ptrdiff_t m_flChestDamageMultiplier = 0x118; // CSkillFloat
    constexpr std::ptrdiff_t m_flStomachDamageMultiplier = 0x128; // CSkillFloat
    constexpr std::ptrdiff_t m_flArmDamageMultiplier = 0x138; // CSkillFloat
    constexpr std::ptrdiff_t m_flLegDamageMultiplier = 0x148; // CSkillFloat
    constexpr std::ptrdiff_t m_flHoldBreathTime = 0x158; // float
    constexpr std::ptrdiff_t m_flDrowningDamageInterval = 0x15C; // float
    constexpr std::ptrdiff_t m_nDrowningDamageInitial = 0x160; // int32_t
    constexpr std::ptrdiff_t m_nDrowningDamageMax = 0x164; // int32_t
    constexpr std::ptrdiff_t m_nWaterSpeed = 0x168; // int32_t
    constexpr std::ptrdiff_t m_flUseRange = 0x16C; // float
    constexpr std::ptrdiff_t m_flUseAngleTolerance = 0x170; // float
    constexpr std::ptrdiff_t m_flCrouchTime = 0x174; // float
}

namespace CBasePlayerWeaponVData { // CEntitySubclassVDataBase
    constexpr std::ptrdiff_t m_szWorldModel = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    constexpr std::ptrdiff_t m_bBuiltRightHanded = 0x108; // bool
    constexpr std::ptrdiff_t m_bAllowFlipping = 0x109; // bool
    constexpr std::ptrdiff_t m_bIsFullAuto = 0x10A; // bool
    constexpr std::ptrdiff_t m_nNumBullets = 0x10C; // int32_t
    constexpr std::ptrdiff_t m_sMuzzleAttachment = 0x110; // CUtlString
    constexpr std::ptrdiff_t m_szMuzzleFlashParticle = 0x118; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    constexpr std::ptrdiff_t m_iFlags = 0x1F8; // ItemFlagTypes_t
    constexpr std::ptrdiff_t m_nPrimaryAmmoType = 0x1F9; // AmmoIndex_t
    constexpr std::ptrdiff_t m_nSecondaryAmmoType = 0x1FA; // AmmoIndex_t
    constexpr std::ptrdiff_t m_iMaxClip1 = 0x1FC; // int32_t
    constexpr std::ptrdiff_t m_iMaxClip2 = 0x200; // int32_t
    constexpr std::ptrdiff_t m_iDefaultClip1 = 0x204; // int32_t
    constexpr std::ptrdiff_t m_iDefaultClip2 = 0x208; // int32_t
    constexpr std::ptrdiff_t m_iWeight = 0x20C; // int32_t
    constexpr std::ptrdiff_t m_bAutoSwitchTo = 0x210; // bool
    constexpr std::ptrdiff_t m_bAutoSwitchFrom = 0x211; // bool
    constexpr std::ptrdiff_t m_iRumbleEffect = 0x214; // RumbleEffect_t
    constexpr std::ptrdiff_t m_aShootSounds = 0x218; // CUtlMap<WeaponSound_t,CSoundEventName>
    constexpr std::ptrdiff_t m_iSlot = 0x238; // int32_t
    constexpr std::ptrdiff_t m_iPosition = 0x23C; // int32_t
}

namespace CBaseProp { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_bModelOverrodeBlockLOS = 0xE80; // bool
    constexpr std::ptrdiff_t m_iShapeType = 0xE84; // int32_t
    constexpr std::ptrdiff_t m_bConformToCollisionBounds = 0xE88; // bool
    constexpr std::ptrdiff_t m_mPreferredCatchTransform = 0xE8C; // matrix3x4_t
}

namespace CBodyComponent { // CEntityComponent
    constexpr std::ptrdiff_t m_pSceneNode = 0x8; // CGameSceneNode*
    constexpr std::ptrdiff_t __m_pChainEntity = 0x20; // CNetworkVarChainer
}

namespace CBodyComponentBaseAnimGraph { // CBodyComponentSkeletonInstance
    constexpr std::ptrdiff_t m_animationController = 0x480; // CBaseAnimGraphController
    constexpr std::ptrdiff_t __m_pChainEntity = 0x18C0; // CNetworkVarChainer
}

namespace CBodyComponentBaseModelEntity { // CBodyComponentSkeletonInstance
    constexpr std::ptrdiff_t __m_pChainEntity = 0x480; // CNetworkVarChainer
}

namespace CBodyComponentPoint { // CBodyComponent
    constexpr std::ptrdiff_t m_sceneNode = 0x50; // CGameSceneNode
    constexpr std::ptrdiff_t __m_pChainEntity = 0x1A0; // CNetworkVarChainer
}

namespace CBodyComponentSkeletonInstance { // CBodyComponent
    constexpr std::ptrdiff_t m_skeletonInstance = 0x50; // CSkeletonInstance
    constexpr std::ptrdiff_t __m_pChainEntity = 0x450; // CNetworkVarChainer
}

namespace CBombTarget { // C_BaseTrigger
    constexpr std::ptrdiff_t m_bBombPlantedHere = 0xCC8; // bool
}

namespace CBreachCharge { // C_CSWeaponBase
}

namespace CBreachChargeProjectile { // C_BaseGrenade
}

namespace CBumpMine { // C_CSWeaponBase
}

namespace CBumpMineProjectile { // C_BaseGrenade
}

namespace CBuoyancyHelper {
    constexpr std::ptrdiff_t m_flFluidDensity = 0x18; // float
}

namespace CCSGO_WingmanIntroCharacterPosition { // C_CSGO_TeamIntroCharacterPosition
}

namespace CCSGO_WingmanIntroCounterTerroristPosition { // CCSGO_WingmanIntroCharacterPosition
}

namespace CCSGO_WingmanIntroTerroristPosition { // CCSGO_WingmanIntroCharacterPosition
}

namespace CCSGameModeRules {
    constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
}

namespace CCSGameModeRules_Deathmatch { // CCSGameModeRules
    constexpr std::ptrdiff_t m_bFirstThink = 0x30; // bool
    constexpr std::ptrdiff_t m_bFirstThinkAfterConnected = 0x31; // bool
    constexpr std::ptrdiff_t m_flDMBonusStartTime = 0x34; // GameTime_t
    constexpr std::ptrdiff_t m_flDMBonusTimeLength = 0x38; // float
    constexpr std::ptrdiff_t m_nDMBonusWeaponLoadoutSlot = 0x3C; // int16_t
}

namespace CCSGameModeRules_Noop { // CCSGameModeRules
}

namespace CCSGameModeRules_Scripted { // CCSGameModeRules
}

namespace CCSGameModeScript { // CBasePulseGraphInstance
}

namespace CCSObserver_CameraServices { // CCSPlayerBase_CameraServices
}

namespace CCSObserver_MovementServices { // CPlayer_MovementServices
}

namespace CCSObserver_ObserverServices { // CPlayer_ObserverServices
    constexpr std::ptrdiff_t m_hLastObserverTarget = 0x58; // CEntityHandle
    constexpr std::ptrdiff_t m_vecObserverInterpolateOffset = 0x5C; // Vector
    constexpr std::ptrdiff_t m_vecObserverInterpStartPos = 0x68; // Vector
    constexpr std::ptrdiff_t m_flObsInterp_PathLength = 0x74; // float
    constexpr std::ptrdiff_t m_qObsInterp_OrientationStart = 0x80; // Quaternion
    constexpr std::ptrdiff_t m_qObsInterp_OrientationTravelDir = 0x90; // Quaternion
    constexpr std::ptrdiff_t m_obsInterpState = 0xA0; // ObserverInterpState_t
    constexpr std::ptrdiff_t m_bObserverInterpolationNeedsDeferredSetup = 0xA4; // bool
}

namespace CCSObserver_UseServices { // CPlayer_UseServices
}

namespace CCSObserver_ViewModelServices { // CPlayer_ViewModelServices
}

namespace CCSPlayerBase_CameraServices { // CPlayer_CameraServices
    constexpr std::ptrdiff_t m_iFOV = 0x210; // uint32_t
    constexpr std::ptrdiff_t m_iFOVStart = 0x214; // uint32_t
    constexpr std::ptrdiff_t m_flFOVTime = 0x218; // GameTime_t
    constexpr std::ptrdiff_t m_flFOVRate = 0x21C; // float
    constexpr std::ptrdiff_t m_hZoomOwner = 0x220; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_flLastShotFOV = 0x224; // float
}

namespace CCSPlayerController { // CBasePlayerController
    constexpr std::ptrdiff_t m_pInGameMoneyServices = 0x700; // CCSPlayerController_InGameMoneyServices*
    constexpr std::ptrdiff_t m_pInventoryServices = 0x708; // CCSPlayerController_InventoryServices*
    constexpr std::ptrdiff_t m_pActionTrackingServices = 0x710; // CCSPlayerController_ActionTrackingServices*
    constexpr std::ptrdiff_t m_pDamageServices = 0x718; // CCSPlayerController_DamageServices*
    constexpr std::ptrdiff_t m_iPing = 0x720; // uint32_t
    constexpr std::ptrdiff_t m_bHasCommunicationAbuseMute = 0x724; // bool
    constexpr std::ptrdiff_t m_szCrosshairCodes = 0x728; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iPendingTeamNum = 0x730; // uint8_t
    constexpr std::ptrdiff_t m_flForceTeamTime = 0x734; // GameTime_t
    constexpr std::ptrdiff_t m_iCompTeammateColor = 0x738; // int32_t
    constexpr std::ptrdiff_t m_bEverPlayedOnTeam = 0x73C; // bool
    constexpr std::ptrdiff_t m_flPreviousForceJoinTeamTime = 0x740; // GameTime_t
    constexpr std::ptrdiff_t m_szClan = 0x748; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sSanitizedPlayerName = 0x750; // CUtlString
    constexpr std::ptrdiff_t m_iCoachingTeam = 0x758; // int32_t
    constexpr std::ptrdiff_t m_nPlayerDominated = 0x760; // uint64_t
    constexpr std::ptrdiff_t m_nPlayerDominatingMe = 0x768; // uint64_t
    constexpr std::ptrdiff_t m_iCompetitiveRanking = 0x770; // int32_t
    constexpr std::ptrdiff_t m_iCompetitiveWins = 0x774; // int32_t
    constexpr std::ptrdiff_t m_iCompetitiveRankType = 0x778; // int8_t
    constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Win = 0x77C; // int32_t
    constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Loss = 0x780; // int32_t
    constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Tie = 0x784; // int32_t
    constexpr std::ptrdiff_t m_nEndMatchNextMapVote = 0x788; // int32_t
    constexpr std::ptrdiff_t m_unActiveQuestId = 0x78C; // uint16_t
    constexpr std::ptrdiff_t m_nQuestProgressReason = 0x790; // QuestProgress::Reason
    constexpr std::ptrdiff_t m_unPlayerTvControlFlags = 0x794; // uint32_t
    constexpr std::ptrdiff_t m_iDraftIndex = 0x7C0; // int32_t
    constexpr std::ptrdiff_t m_msQueuedModeDisconnectionTimestamp = 0x7C4; // uint32_t
    constexpr std::ptrdiff_t m_uiAbandonRecordedReason = 0x7C8; // uint32_t
    constexpr std::ptrdiff_t m_bCannotBeKicked = 0x7CC; // bool
    constexpr std::ptrdiff_t m_bEverFullyConnected = 0x7CD; // bool
    constexpr std::ptrdiff_t m_bAbandonAllowsSurrender = 0x7CE; // bool
    constexpr std::ptrdiff_t m_bAbandonOffersInstantSurrender = 0x7CF; // bool
    constexpr std::ptrdiff_t m_bDisconnection1MinWarningPrinted = 0x7D0; // bool
    constexpr std::ptrdiff_t m_bScoreReported = 0x7D1; // bool
    constexpr std::ptrdiff_t m_nDisconnectionTick = 0x7D4; // int32_t
    constexpr std::ptrdiff_t m_bControllingBot = 0x7E0; // bool
    constexpr std::ptrdiff_t m_bHasControlledBotThisRound = 0x7E1; // bool
    constexpr std::ptrdiff_t m_bHasBeenControlledByPlayerThisRound = 0x7E2; // bool
    constexpr std::ptrdiff_t m_nBotsControlledThisRound = 0x7E4; // int32_t
    constexpr std::ptrdiff_t m_bCanControlObservedBot = 0x7E8; // bool
    constexpr std::ptrdiff_t m_hPlayerPawn = 0x7EC; // CHandle<C_CSPlayerPawn>
    constexpr std::ptrdiff_t m_hObserverPawn = 0x7F0; // CHandle<C_CSObserverPawn>
    constexpr std::ptrdiff_t m_bPawnIsAlive = 0x7F4; // bool
    constexpr std::ptrdiff_t m_iPawnHealth = 0x7F8; // uint32_t
    constexpr std::ptrdiff_t m_iPawnArmor = 0x7FC; // int32_t
    constexpr std::ptrdiff_t m_bPawnHasDefuser = 0x800; // bool
    constexpr std::ptrdiff_t m_bPawnHasHelmet = 0x801; // bool
    constexpr std::ptrdiff_t m_nPawnCharacterDefIndex = 0x802; // uint16_t
    constexpr std::ptrdiff_t m_iPawnLifetimeStart = 0x804; // int32_t
    constexpr std::ptrdiff_t m_iPawnLifetimeEnd = 0x808; // int32_t
    constexpr std::ptrdiff_t m_iPawnBotDifficulty = 0x80C; // int32_t
    constexpr std::ptrdiff_t m_hOriginalControllerOfCurrentPawn = 0x810; // CHandle<CCSPlayerController>
    constexpr std::ptrdiff_t m_iScore = 0x814; // int32_t
    constexpr std::ptrdiff_t m_vecKills = 0x818; // C_NetworkUtlVectorBase<EKillTypes_t>
    constexpr std::ptrdiff_t m_iMVPs = 0x830; // int32_t
    constexpr std::ptrdiff_t m_bIsPlayerNameDirty = 0x834; // bool
}

namespace CCSPlayerController_ActionTrackingServices { // CPlayerControllerComponent
    constexpr std::ptrdiff_t m_perRoundStats = 0x40; // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
    constexpr std::ptrdiff_t m_matchStats = 0x90; // CSMatchStats_t
    constexpr std::ptrdiff_t m_iNumRoundKills = 0x108; // int32_t
    constexpr std::ptrdiff_t m_iNumRoundKillsHeadshots = 0x10C; // int32_t
    constexpr std::ptrdiff_t m_unTotalRoundDamageDealt = 0x110; // uint32_t
}

namespace CCSPlayerController_DamageServices { // CPlayerControllerComponent
    constexpr std::ptrdiff_t m_nSendUpdate = 0x40; // int32_t
    constexpr std::ptrdiff_t m_DamageList = 0x48; // C_UtlVectorEmbeddedNetworkVar<CDamageRecord>
}

namespace CCSPlayerController_InGameMoneyServices { // CPlayerControllerComponent
    constexpr std::ptrdiff_t m_iAccount = 0x40; // int32_t
    constexpr std::ptrdiff_t m_iStartAccount = 0x44; // int32_t
    constexpr std::ptrdiff_t m_iTotalCashSpent = 0x48; // int32_t
    constexpr std::ptrdiff_t m_iCashSpentThisRound = 0x4C; // int32_t
    constexpr std::ptrdiff_t m_nPreviousAccount = 0x50; // int32_t
}

namespace CCSPlayerController_InventoryServices { // CPlayerControllerComponent
    constexpr std::ptrdiff_t m_unMusicID = 0x40; // uint16_t
    constexpr std::ptrdiff_t m_rank = 0x44; // MedalRank_t[6]
    constexpr std::ptrdiff_t m_nPersonaDataPublicLevel = 0x5C; // int32_t
    constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsLeader = 0x60; // int32_t
    constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsTeacher = 0x64; // int32_t
    constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsFriendly = 0x68; // int32_t
    constexpr std::ptrdiff_t m_vecServerAuthoritativeWeaponSlots = 0x70; // C_UtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
}

namespace CCSPlayer_ActionTrackingServices { // CPlayerPawnComponent
    constexpr std::ptrdiff_t m_hLastWeaponBeforeC4AutoSwitch = 0x40; // CHandle<C_BasePlayerWeapon>
    constexpr std::ptrdiff_t m_bIsRescuing = 0x44; // bool
    constexpr std::ptrdiff_t m_weaponPurchasesThisMatch = 0x48; // WeaponPurchaseTracker_t
    constexpr std::ptrdiff_t m_weaponPurchasesThisRound = 0xA0; // WeaponPurchaseTracker_t
}

namespace CCSPlayer_BulletServices { // CPlayerPawnComponent
    constexpr std::ptrdiff_t m_totalHitsOnServer = 0x40; // int32_t
}

namespace CCSPlayer_BuyServices { // CPlayerPawnComponent
    constexpr std::ptrdiff_t m_vecSellbackPurchaseEntries = 0x40; // C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
}

namespace CCSPlayer_CameraServices { // CCSPlayerBase_CameraServices
    constexpr std::ptrdiff_t m_flDeathCamTilt = 0x228; // float
}

namespace CCSPlayer_GlowServices { // CPlayerPawnComponent
}

namespace CCSPlayer_HostageServices { // CPlayerPawnComponent
    constexpr std::ptrdiff_t m_hCarriedHostage = 0x40; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_hCarriedHostageProp = 0x44; // CHandle<C_BaseEntity>
}

namespace CCSPlayer_ItemServices { // CPlayer_ItemServices
    constexpr std::ptrdiff_t m_bHasDefuser = 0x40; // bool
    constexpr std::ptrdiff_t m_bHasHelmet = 0x41; // bool
    constexpr std::ptrdiff_t m_bHasHeavyArmor = 0x42; // bool
}

namespace CCSPlayer_MovementServices { // CPlayer_MovementServices_Humanoid
    constexpr std::ptrdiff_t m_flMaxFallVelocity = 0x210; // float
    constexpr std::ptrdiff_t m_vecLadderNormal = 0x214; // Vector
    constexpr std::ptrdiff_t m_nLadderSurfacePropIndex = 0x220; // int32_t
    constexpr std::ptrdiff_t m_flDuckAmount = 0x224; // float
    constexpr std::ptrdiff_t m_flDuckSpeed = 0x228; // float
    constexpr std::ptrdiff_t m_bDuckOverride = 0x22C; // bool
    constexpr std::ptrdiff_t m_bDesiresDuck = 0x22D; // bool
    constexpr std::ptrdiff_t m_flDuckOffset = 0x230; // float
    constexpr std::ptrdiff_t m_nDuckTimeMsecs = 0x234; // uint32_t
    constexpr std::ptrdiff_t m_nDuckJumpTimeMsecs = 0x238; // uint32_t
    constexpr std::ptrdiff_t m_nJumpTimeMsecs = 0x23C; // uint32_t
    constexpr std::ptrdiff_t m_flLastDuckTime = 0x240; // float
    constexpr std::ptrdiff_t m_vecLastPositionAtFullCrouchSpeed = 0x250; // Vector2D
    constexpr std::ptrdiff_t m_duckUntilOnGround = 0x258; // bool
    constexpr std::ptrdiff_t m_bHasWalkMovedSinceLastJump = 0x259; // bool
    constexpr std::ptrdiff_t m_bInStuckTest = 0x25A; // bool
    constexpr std::ptrdiff_t m_flStuckCheckTime = 0x268; // float[64][2]
    constexpr std::ptrdiff_t m_nTraceCount = 0x468; // int32_t
    constexpr std::ptrdiff_t m_StuckLast = 0x46C; // int32_t
    constexpr std::ptrdiff_t m_bSpeedCropped = 0x470; // bool
    constexpr std::ptrdiff_t m_nOldWaterLevel = 0x474; // int32_t
    constexpr std::ptrdiff_t m_flWaterEntryTime = 0x478; // float
    constexpr std::ptrdiff_t m_vecForward = 0x47C; // Vector
    constexpr std::ptrdiff_t m_vecLeft = 0x488; // Vector
    constexpr std::ptrdiff_t m_vecUp = 0x494; // Vector
    constexpr std::ptrdiff_t m_vecPreviouslyPredictedOrigin = 0x4A0; // Vector
    constexpr std::ptrdiff_t m_bOldJumpPressed = 0x4AC; // bool
    constexpr std::ptrdiff_t m_flJumpPressedTime = 0x4B0; // float
    constexpr std::ptrdiff_t m_flJumpUntil = 0x4B4; // float
    constexpr std::ptrdiff_t m_flJumpVel = 0x4B8; // float
    constexpr std::ptrdiff_t m_fStashGrenadeParameterWhen = 0x4BC; // GameTime_t
    constexpr std::ptrdiff_t m_nButtonDownMaskPrev = 0x4C0; // uint64_t
    constexpr std::ptrdiff_t m_flOffsetTickCompleteTime = 0x4C8; // float
    constexpr std::ptrdiff_t m_flOffsetTickStashedSpeed = 0x4CC; // float
    constexpr std::ptrdiff_t m_flStamina = 0x4D0; // float
    constexpr std::ptrdiff_t m_bUpdatePredictedOriginAfterDataUpdate = 0x4D4; // bool
    constexpr std::ptrdiff_t m_flHeightAtJumpStart = 0x4D8; // float
    constexpr std::ptrdiff_t m_flMaxJumpHeightThisJump = 0x4DC; // float
}

namespace CCSPlayer_PingServices { // CPlayerPawnComponent
    constexpr std::ptrdiff_t m_hPlayerPing = 0x40; // CHandle<C_BaseEntity>
}

namespace CCSPlayer_UseServices { // CPlayer_UseServices
}

namespace CCSPlayer_ViewModelServices { // CPlayer_ViewModelServices
    constexpr std::ptrdiff_t m_hViewModel = 0x40; // CHandle<C_BaseViewModel>[3]
}

namespace CCSPlayer_WaterServices { // CPlayer_WaterServices
    constexpr std::ptrdiff_t m_flWaterJumpTime = 0x40; // float
    constexpr std::ptrdiff_t m_vecWaterJumpVel = 0x44; // Vector
    constexpr std::ptrdiff_t m_flSwimSoundTime = 0x50; // float
}

namespace CCSPlayer_WeaponServices { // CPlayer_WeaponServices
    constexpr std::ptrdiff_t m_flNextAttack = 0xC0; // GameTime_t
    constexpr std::ptrdiff_t m_bIsLookingAtWeapon = 0xC4; // bool
    constexpr std::ptrdiff_t m_bIsHoldingLookAtWeapon = 0xC5; // bool
}

namespace CCSWeaponBaseVData { // CBasePlayerWeaponVData
    constexpr std::ptrdiff_t m_WeaponType = 0x240; // CSWeaponType
    constexpr std::ptrdiff_t m_WeaponCategory = 0x244; // CSWeaponCategory
    constexpr std::ptrdiff_t m_szViewModel = 0x248; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    constexpr std::ptrdiff_t m_szPlayerModel = 0x328; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    constexpr std::ptrdiff_t m_szWorldDroppedModel = 0x408; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    constexpr std::ptrdiff_t m_szAimsightLensMaskModel = 0x4E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    constexpr std::ptrdiff_t m_szMagazineModel = 0x5C8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    constexpr std::ptrdiff_t m_szHeatEffect = 0x6A8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    constexpr std::ptrdiff_t m_szEjectBrassEffect = 0x788; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    constexpr std::ptrdiff_t m_szMuzzleFlashParticleAlt = 0x868; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    constexpr std::ptrdiff_t m_szMuzzleFlashThirdPersonParticle = 0x948; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    constexpr std::ptrdiff_t m_szMuzzleFlashThirdPersonParticleAlt = 0xA28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    constexpr std::ptrdiff_t m_szTracerParticle = 0xB08; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    constexpr std::ptrdiff_t m_GearSlot = 0xBE8; // gear_slot_t
    constexpr std::ptrdiff_t m_GearSlotPosition = 0xBEC; // int32_t
    constexpr std::ptrdiff_t m_DefaultLoadoutSlot = 0xBF0; // loadout_slot_t
    constexpr std::ptrdiff_t m_sWrongTeamMsg = 0xBF8; // CUtlString
    constexpr std::ptrdiff_t m_nPrice = 0xC00; // int32_t
    constexpr std::ptrdiff_t m_nKillAward = 0xC04; // int32_t
    constexpr std::ptrdiff_t m_nPrimaryReserveAmmoMax = 0xC08; // int32_t
    constexpr std::ptrdiff_t m_nSecondaryReserveAmmoMax = 0xC0C; // int32_t
    constexpr std::ptrdiff_t m_bMeleeWeapon = 0xC10; // bool
    constexpr std::ptrdiff_t m_bHasBurstMode = 0xC11; // bool
    constexpr std::ptrdiff_t m_bIsRevolver = 0xC12; // bool
    constexpr std::ptrdiff_t m_bCannotShootUnderwater = 0xC13; // bool
    constexpr std::ptrdiff_t m_szName = 0xC18; // CUtlString
    constexpr std::ptrdiff_t m_szAnimExtension = 0xC20; // CUtlString
    constexpr std::ptrdiff_t m_eSilencerType = 0xC28; // CSWeaponSilencerType
    constexpr std::ptrdiff_t m_nCrosshairMinDistance = 0xC2C; // int32_t
    constexpr std::ptrdiff_t m_nCrosshairDeltaDistance = 0xC30; // int32_t
    constexpr std::ptrdiff_t m_flCycleTime = 0xC34; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flMaxSpeed = 0xC3C; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flSpread = 0xC44; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyCrouch = 0xC4C; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyStand = 0xC54; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyJump = 0xC5C; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyLand = 0xC64; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyLadder = 0xC6C; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyFire = 0xC74; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyMove = 0xC7C; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flRecoilAngle = 0xC84; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flRecoilAngleVariance = 0xC8C; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flRecoilMagnitude = 0xC94; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flRecoilMagnitudeVariance = 0xC9C; // CFiringModeFloat
    constexpr std::ptrdiff_t m_nTracerFrequency = 0xCA4; // CFiringModeInt
    constexpr std::ptrdiff_t m_flInaccuracyJumpInitial = 0xCAC; // float
    constexpr std::ptrdiff_t m_flInaccuracyJumpApex = 0xCB0; // float
    constexpr std::ptrdiff_t m_flInaccuracyReload = 0xCB4; // float
    constexpr std::ptrdiff_t m_nRecoilSeed = 0xCB8; // int32_t
    constexpr std::ptrdiff_t m_nSpreadSeed = 0xCBC; // int32_t
    constexpr std::ptrdiff_t m_flTimeToIdleAfterFire = 0xCC0; // float
    constexpr std::ptrdiff_t m_flIdleInterval = 0xCC4; // float
    constexpr std::ptrdiff_t m_flAttackMovespeedFactor = 0xCC8; // float
    constexpr std::ptrdiff_t m_flHeatPerShot = 0xCCC; // float
    constexpr std::ptrdiff_t m_flInaccuracyPitchShift = 0xCD0; // float
    constexpr std::ptrdiff_t m_flInaccuracyAltSoundThreshold = 0xCD4; // float
    constexpr std::ptrdiff_t m_flBotAudibleRange = 0xCD8; // float
    constexpr std::ptrdiff_t m_szUseRadioSubtitle = 0xCE0; // CUtlString
    constexpr std::ptrdiff_t m_bUnzoomsAfterShot = 0xCE8; // bool
    constexpr std::ptrdiff_t m_bHideViewModelWhenZoomed = 0xCE9; // bool
    constexpr std::ptrdiff_t m_nZoomLevels = 0xCEC; // int32_t
    constexpr std::ptrdiff_t m_nZoomFOV1 = 0xCF0; // int32_t
    constexpr std::ptrdiff_t m_nZoomFOV2 = 0xCF4; // int32_t
    constexpr std::ptrdiff_t m_flZoomTime0 = 0xCF8; // float
    constexpr std::ptrdiff_t m_flZoomTime1 = 0xCFC; // float
    constexpr std::ptrdiff_t m_flZoomTime2 = 0xD00; // float
    constexpr std::ptrdiff_t m_flIronSightPullUpSpeed = 0xD04; // float
    constexpr std::ptrdiff_t m_flIronSightPutDownSpeed = 0xD08; // float
    constexpr std::ptrdiff_t m_flIronSightFOV = 0xD0C; // float
    constexpr std::ptrdiff_t m_flIronSightPivotForward = 0xD10; // float
    constexpr std::ptrdiff_t m_flIronSightLooseness = 0xD14; // float
    constexpr std::ptrdiff_t m_angPivotAngle = 0xD18; // QAngle
    constexpr std::ptrdiff_t m_vecIronSightEyePos = 0xD24; // Vector
    constexpr std::ptrdiff_t m_nDamage = 0xD30; // int32_t
    constexpr std::ptrdiff_t m_flHeadshotMultiplier = 0xD34; // float
    constexpr std::ptrdiff_t m_flArmorRatio = 0xD38; // float
    constexpr std::ptrdiff_t m_flPenetration = 0xD3C; // float
    constexpr std::ptrdiff_t m_flRange = 0xD40; // float
    constexpr std::ptrdiff_t m_flRangeModifier = 0xD44; // float
    constexpr std::ptrdiff_t m_flFlinchVelocityModifierLarge = 0xD48; // float
    constexpr std::ptrdiff_t m_flFlinchVelocityModifierSmall = 0xD4C; // float
    constexpr std::ptrdiff_t m_flRecoveryTimeCrouch = 0xD50; // float
    constexpr std::ptrdiff_t m_flRecoveryTimeStand = 0xD54; // float
    constexpr std::ptrdiff_t m_flRecoveryTimeCrouchFinal = 0xD58; // float
    constexpr std::ptrdiff_t m_flRecoveryTimeStandFinal = 0xD5C; // float
    constexpr std::ptrdiff_t m_nRecoveryTransitionStartBullet = 0xD60; // int32_t
    constexpr std::ptrdiff_t m_nRecoveryTransitionEndBullet = 0xD64; // int32_t
    constexpr std::ptrdiff_t m_flThrowVelocity = 0xD68; // float
    constexpr std::ptrdiff_t m_vSmokeColor = 0xD6C; // Vector
    constexpr std::ptrdiff_t m_szAnimClass = 0xD78; // CUtlString
}

namespace CClientAlphaProperty { // IClientAlphaProperty
    constexpr std::ptrdiff_t m_nRenderFX = 0x10; // uint8_t
    constexpr std::ptrdiff_t m_nRenderMode = 0x11; // uint8_t
    constexpr std::ptrdiff_t m_bAlphaOverride = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bShadowAlphaOverride = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_nReserved = 0x0; // bitfield:6
    constexpr std::ptrdiff_t m_nAlpha = 0x13; // uint8_t
    constexpr std::ptrdiff_t m_nDesyncOffset = 0x14; // uint16_t
    constexpr std::ptrdiff_t m_nReserved2 = 0x16; // uint16_t
    constexpr std::ptrdiff_t m_nDistFadeStart = 0x18; // uint16_t
    constexpr std::ptrdiff_t m_nDistFadeEnd = 0x1A; // uint16_t
    constexpr std::ptrdiff_t m_flFadeScale = 0x1C; // float
    constexpr std::ptrdiff_t m_flRenderFxStartTime = 0x20; // GameTime_t
    constexpr std::ptrdiff_t m_flRenderFxDuration = 0x24; // float
}

namespace CCollisionProperty {
    constexpr std::ptrdiff_t m_collisionAttribute = 0x10; // VPhysicsCollisionAttribute_t
    constexpr std::ptrdiff_t m_vecMins = 0x40; // Vector
    constexpr std::ptrdiff_t m_vecMaxs = 0x4C; // Vector
    constexpr std::ptrdiff_t m_usSolidFlags = 0x5A; // uint8_t
    constexpr std::ptrdiff_t m_nSolidType = 0x5B; // SolidType_t
    constexpr std::ptrdiff_t m_triggerBloat = 0x5C; // uint8_t
    constexpr std::ptrdiff_t m_nSurroundType = 0x5D; // SurroundingBoundsType_t
    constexpr std::ptrdiff_t m_CollisionGroup = 0x5E; // uint8_t
    constexpr std::ptrdiff_t m_nEnablePhysics = 0x5F; // uint8_t
    constexpr std::ptrdiff_t m_flBoundingRadius = 0x60; // float
    constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMins = 0x64; // Vector
    constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMaxs = 0x70; // Vector
    constexpr std::ptrdiff_t m_vecSurroundingMaxs = 0x7C; // Vector
    constexpr std::ptrdiff_t m_vecSurroundingMins = 0x88; // Vector
    constexpr std::ptrdiff_t m_vCapsuleCenter1 = 0x94; // Vector
    constexpr std::ptrdiff_t m_vCapsuleCenter2 = 0xA0; // Vector
    constexpr std::ptrdiff_t m_flCapsuleRadius = 0xAC; // float
}

namespace CComicBook {
    constexpr std::ptrdiff_t m_CoverImage = 0x8; // CPanoramaImageName
    constexpr std::ptrdiff_t m_XmlFile = 0x18; // CUtlString
}

namespace CCompositeMaterialEditorDoc {
    constexpr std::ptrdiff_t m_nVersion = 0x8; // int32_t
    constexpr std::ptrdiff_t m_Points = 0x10; // CUtlVector<CompositeMaterialEditorPoint_t>
    constexpr std::ptrdiff_t m_KVthumbnail = 0x28; // KeyValues3
}

namespace CDamageRecord {
    constexpr std::ptrdiff_t m_PlayerDamager = 0x28; // CHandle<C_CSPlayerPawnBase>
    constexpr std::ptrdiff_t m_PlayerRecipient = 0x2C; // CHandle<C_CSPlayerPawnBase>
    constexpr std::ptrdiff_t m_hPlayerControllerDamager = 0x30; // CHandle<CCSPlayerController>
    constexpr std::ptrdiff_t m_hPlayerControllerRecipient = 0x34; // CHandle<CCSPlayerController>
    constexpr std::ptrdiff_t m_szPlayerDamagerName = 0x38; // CUtlString
    constexpr std::ptrdiff_t m_szPlayerRecipientName = 0x40; // CUtlString
    constexpr std::ptrdiff_t m_DamagerXuid = 0x48; // uint64_t
    constexpr std::ptrdiff_t m_RecipientXuid = 0x50; // uint64_t
    constexpr std::ptrdiff_t m_iDamage = 0x58; // int32_t
    constexpr std::ptrdiff_t m_iActualHealthRemoved = 0x5C; // int32_t
    constexpr std::ptrdiff_t m_iNumHits = 0x60; // int32_t
    constexpr std::ptrdiff_t m_iLastBulletUpdate = 0x64; // int32_t
    constexpr std::ptrdiff_t m_bIsOtherEnemy = 0x68; // bool
    constexpr std::ptrdiff_t m_killType = 0x69; // EKillTypes_t
}

namespace CDecalInfo {
    constexpr std::ptrdiff_t m_flAnimationScale = 0x0; // float
    constexpr std::ptrdiff_t m_flAnimationLifeSpan = 0x4; // float
    constexpr std::ptrdiff_t m_flPlaceTime = 0x8; // float
    constexpr std::ptrdiff_t m_flFadeStartTime = 0xC; // float
    constexpr std::ptrdiff_t m_flFadeDuration = 0x10; // float
    constexpr std::ptrdiff_t m_nVBSlot = 0x14; // int32_t
    constexpr std::ptrdiff_t m_nBoneIndex = 0x18; // int32_t
    constexpr std::ptrdiff_t m_vPosition = 0x28; // Vector
    constexpr std::ptrdiff_t m_flBoundingRadiusSqr = 0x34; // float
    constexpr std::ptrdiff_t m_pNext = 0x40; // CDecalInfo*
    constexpr std::ptrdiff_t m_pPrev = 0x48; // CDecalInfo*
    constexpr std::ptrdiff_t m_nDecalMaterialIndex = 0xA8; // int32_t
}

namespace CEconItemAttribute {
    constexpr std::ptrdiff_t m_iAttributeDefinitionIndex = 0x30; // uint16_t
    constexpr std::ptrdiff_t m_flValue = 0x34; // float
    constexpr std::ptrdiff_t m_flInitialValue = 0x38; // float
    constexpr std::ptrdiff_t m_nRefundableCurrency = 0x3C; // int32_t
    constexpr std::ptrdiff_t m_bSetBonus = 0x40; // bool
}

namespace CEffectData {
    constexpr std::ptrdiff_t m_vOrigin = 0x8; // Vector
    constexpr std::ptrdiff_t m_vStart = 0x14; // Vector
    constexpr std::ptrdiff_t m_vNormal = 0x20; // Vector
    constexpr std::ptrdiff_t m_vAngles = 0x2C; // QAngle
    constexpr std::ptrdiff_t m_hEntity = 0x38; // CEntityHandle
    constexpr std::ptrdiff_t m_hOtherEntity = 0x3C; // CEntityHandle
    constexpr std::ptrdiff_t m_flScale = 0x40; // float
    constexpr std::ptrdiff_t m_flMagnitude = 0x44; // float
    constexpr std::ptrdiff_t m_flRadius = 0x48; // float
    constexpr std::ptrdiff_t m_nSurfaceProp = 0x4C; // CUtlStringToken
    constexpr std::ptrdiff_t m_nEffectIndex = 0x50; // CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
    constexpr std::ptrdiff_t m_nDamageType = 0x58; // uint32_t
    constexpr std::ptrdiff_t m_nPenetrate = 0x5C; // uint8_t
    constexpr std::ptrdiff_t m_nMaterial = 0x5E; // uint16_t
    constexpr std::ptrdiff_t m_nHitBox = 0x60; // uint16_t
    constexpr std::ptrdiff_t m_nColor = 0x62; // uint8_t
    constexpr std::ptrdiff_t m_fFlags = 0x63; // uint8_t
    constexpr std::ptrdiff_t m_nAttachmentIndex = 0x64; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_nAttachmentName = 0x68; // CUtlStringToken
    constexpr std::ptrdiff_t m_iEffectName = 0x6C; // uint16_t
    constexpr std::ptrdiff_t m_nExplosionType = 0x6E; // uint8_t
}

namespace CEntityComponent {
}

namespace CEntityIdentity {
    constexpr std::ptrdiff_t m_nameStringableIndex = 0x14; // int32_t
    constexpr std::ptrdiff_t m_name = 0x18; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_designerName = 0x20; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flags = 0x30; // uint32_t
    constexpr std::ptrdiff_t m_worldGroupId = 0x38; // WorldGroupId_t
    constexpr std::ptrdiff_t m_fDataObjectTypes = 0x3C; // uint32_t
    constexpr std::ptrdiff_t m_PathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
    constexpr std::ptrdiff_t m_pPrev = 0x58; // CEntityIdentity*
    constexpr std::ptrdiff_t m_pNext = 0x60; // CEntityIdentity*
    constexpr std::ptrdiff_t m_pPrevByClass = 0x68; // CEntityIdentity*
    constexpr std::ptrdiff_t m_pNextByClass = 0x70; // CEntityIdentity*
}

namespace CEntityInstance {
    constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_pEntity = 0x10; // CEntityIdentity*
    constexpr std::ptrdiff_t m_CScriptComponent = 0x28; // CScriptComponent*
}

namespace CFireOverlay { // CGlowOverlay
    constexpr std::ptrdiff_t m_pOwner = 0xD0; // C_FireSmoke*
    constexpr std::ptrdiff_t m_vBaseColors = 0xD8; // Vector[4]
    constexpr std::ptrdiff_t m_flScale = 0x108; // float
    constexpr std::ptrdiff_t m_nGUID = 0x10C; // int32_t
}

namespace CFlashlightEffect {
    constexpr std::ptrdiff_t m_bIsOn = 0x10; // bool
    constexpr std::ptrdiff_t m_bMuzzleFlashEnabled = 0x20; // bool
    constexpr std::ptrdiff_t m_flMuzzleFlashBrightness = 0x24; // float
    constexpr std::ptrdiff_t m_quatMuzzleFlashOrientation = 0x30; // Quaternion
    constexpr std::ptrdiff_t m_vecMuzzleFlashOrigin = 0x40; // Vector
    constexpr std::ptrdiff_t m_flFov = 0x4C; // float
    constexpr std::ptrdiff_t m_flFarZ = 0x50; // float
    constexpr std::ptrdiff_t m_flLinearAtten = 0x54; // float
    constexpr std::ptrdiff_t m_bCastsShadows = 0x58; // bool
    constexpr std::ptrdiff_t m_flCurrentPullBackDist = 0x5C; // float
    constexpr std::ptrdiff_t m_FlashlightTexture = 0x60; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_MuzzleFlashTexture = 0x68; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_textureName = 0x70; // char[64]
}

namespace CFuncWater { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_BuoyancyHelper = 0xCC0; // CBuoyancyHelper
}

namespace CGameSceneNode {
    constexpr std::ptrdiff_t m_nodeToWorld = 0x10; // CTransform
    constexpr std::ptrdiff_t m_pOwner = 0x30; // CEntityInstance*
    constexpr std::ptrdiff_t m_pParent = 0x38; // CGameSceneNode*
    constexpr std::ptrdiff_t m_pChild = 0x40; // CGameSceneNode*
    constexpr std::ptrdiff_t m_pNextSibling = 0x48; // CGameSceneNode*
    constexpr std::ptrdiff_t m_hParent = 0x70; // CGameSceneNodeHandle
    constexpr std::ptrdiff_t m_vecOrigin = 0x80; // CNetworkOriginCellCoordQuantizedVector
    constexpr std::ptrdiff_t m_angRotation = 0xB8; // QAngle
    constexpr std::ptrdiff_t m_flScale = 0xC4; // float
    constexpr std::ptrdiff_t m_vecAbsOrigin = 0xC8; // Vector
    constexpr std::ptrdiff_t m_angAbsRotation = 0xD4; // QAngle
    constexpr std::ptrdiff_t m_flAbsScale = 0xE0; // float
    constexpr std::ptrdiff_t m_nParentAttachmentOrBone = 0xE4; // int16_t
    constexpr std::ptrdiff_t m_bDebugAbsOriginChanges = 0xE6; // bool
    constexpr std::ptrdiff_t m_bDormant = 0xE7; // bool
    constexpr std::ptrdiff_t m_bForceParentToBeNetworked = 0xE8; // bool
    constexpr std::ptrdiff_t m_bDirtyHierarchy = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bDirtyBoneMergeInfo = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bNetworkedPositionChanged = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bNetworkedAnglesChanged = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bNetworkedScaleChanged = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bWillBeCallingPostDataUpdate = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bNotifyBoneTransformsChanged = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bBoneMergeFlex = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_nLatchAbsOrigin = 0x0; // bitfield:2
    constexpr std::ptrdiff_t m_bDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_nHierarchicalDepth = 0xEB; // uint8_t
    constexpr std::ptrdiff_t m_nHierarchyType = 0xEC; // uint8_t
    constexpr std::ptrdiff_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xED; // uint8_t
    constexpr std::ptrdiff_t m_name = 0xF0; // CUtlStringToken
    constexpr std::ptrdiff_t m_hierarchyAttachName = 0x130; // CUtlStringToken
    constexpr std::ptrdiff_t m_flZOffset = 0x134; // float
    constexpr std::ptrdiff_t m_vRenderOrigin = 0x138; // Vector
}

namespace CGameSceneNodeHandle {
    constexpr std::ptrdiff_t m_hOwner = 0x8; // CEntityHandle
    constexpr std::ptrdiff_t m_name = 0xC; // CUtlStringToken
}

namespace CGlobalLightBase {
    constexpr std::ptrdiff_t m_bSpotLight = 0x10; // bool
    constexpr std::ptrdiff_t m_SpotLightOrigin = 0x14; // Vector
    constexpr std::ptrdiff_t m_SpotLightAngles = 0x20; // QAngle
    constexpr std::ptrdiff_t m_ShadowDirection = 0x2C; // Vector
    constexpr std::ptrdiff_t m_AmbientDirection = 0x38; // Vector
    constexpr std::ptrdiff_t m_SpecularDirection = 0x44; // Vector
    constexpr std::ptrdiff_t m_InspectorSpecularDirection = 0x50; // Vector
    constexpr std::ptrdiff_t m_flSpecularPower = 0x5C; // float
    constexpr std::ptrdiff_t m_flSpecularIndependence = 0x60; // float
    constexpr std::ptrdiff_t m_SpecularColor = 0x64; // Color
    constexpr std::ptrdiff_t m_bStartDisabled = 0x68; // bool
    constexpr std::ptrdiff_t m_bEnabled = 0x69; // bool
    constexpr std::ptrdiff_t m_LightColor = 0x6A; // Color
    constexpr std::ptrdiff_t m_AmbientColor1 = 0x6E; // Color
    constexpr std::ptrdiff_t m_AmbientColor2 = 0x72; // Color
    constexpr std::ptrdiff_t m_AmbientColor3 = 0x76; // Color
    constexpr std::ptrdiff_t m_flSunDistance = 0x7C; // float
    constexpr std::ptrdiff_t m_flFOV = 0x80; // float
    constexpr std::ptrdiff_t m_flNearZ = 0x84; // float
    constexpr std::ptrdiff_t m_flFarZ = 0x88; // float
    constexpr std::ptrdiff_t m_bEnableShadows = 0x8C; // bool
    constexpr std::ptrdiff_t m_bOldEnableShadows = 0x8D; // bool
    constexpr std::ptrdiff_t m_bBackgroundClearNotRequired = 0x8E; // bool
    constexpr std::ptrdiff_t m_flCloudScale = 0x90; // float
    constexpr std::ptrdiff_t m_flCloud1Speed = 0x94; // float
    constexpr std::ptrdiff_t m_flCloud1Direction = 0x98; // float
    constexpr std::ptrdiff_t m_flCloud2Speed = 0x9C; // float
    constexpr std::ptrdiff_t m_flCloud2Direction = 0xA0; // float
    constexpr std::ptrdiff_t m_flAmbientScale1 = 0xB0; // float
    constexpr std::ptrdiff_t m_flAmbientScale2 = 0xB4; // float
    constexpr std::ptrdiff_t m_flGroundScale = 0xB8; // float
    constexpr std::ptrdiff_t m_flLightScale = 0xBC; // float
    constexpr std::ptrdiff_t m_flFoWDarkness = 0xC0; // float
    constexpr std::ptrdiff_t m_bEnableSeparateSkyboxFog = 0xC4; // bool
    constexpr std::ptrdiff_t m_vFowColor = 0xC8; // Vector
    constexpr std::ptrdiff_t m_ViewOrigin = 0xD4; // Vector
    constexpr std::ptrdiff_t m_ViewAngles = 0xE0; // QAngle
    constexpr std::ptrdiff_t m_flViewFoV = 0xEC; // float
    constexpr std::ptrdiff_t m_WorldPoints = 0xF0; // Vector[8]
    constexpr std::ptrdiff_t m_vFogOffsetLayer0 = 0x4A8; // Vector2D
    constexpr std::ptrdiff_t m_vFogOffsetLayer1 = 0x4B0; // Vector2D
    constexpr std::ptrdiff_t m_hEnvWind = 0x4B8; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_hEnvSky = 0x4BC; // CHandle<C_BaseEntity>
}

namespace CGlowOverlay {
    constexpr std::ptrdiff_t m_vPos = 0x8; // Vector
    constexpr std::ptrdiff_t m_bDirectional = 0x14; // bool
    constexpr std::ptrdiff_t m_vDirection = 0x18; // Vector
    constexpr std::ptrdiff_t m_bInSky = 0x24; // bool
    constexpr std::ptrdiff_t m_skyObstructionScale = 0x28; // float
    constexpr std::ptrdiff_t m_Sprites = 0x30; // CGlowSprite[4]
    constexpr std::ptrdiff_t m_nSprites = 0xB0; // int32_t
    constexpr std::ptrdiff_t m_flProxyRadius = 0xB4; // float
    constexpr std::ptrdiff_t m_flHDRColorScale = 0xB8; // float
    constexpr std::ptrdiff_t m_flGlowObstructionScale = 0xBC; // float
    constexpr std::ptrdiff_t m_bCacheGlowObstruction = 0xC0; // bool
    constexpr std::ptrdiff_t m_bCacheSkyObstruction = 0xC1; // bool
    constexpr std::ptrdiff_t m_bActivated = 0xC2; // int16_t
    constexpr std::ptrdiff_t m_ListIndex = 0xC4; // uint16_t
    constexpr std::ptrdiff_t m_queryHandle = 0xC8; // int32_t
}

namespace CGlowProperty {
    constexpr std::ptrdiff_t m_fGlowColor = 0x8; // Vector
    constexpr std::ptrdiff_t m_iGlowType = 0x30; // int32_t
    constexpr std::ptrdiff_t m_iGlowTeam = 0x34; // int32_t
    constexpr std::ptrdiff_t m_nGlowRange = 0x38; // int32_t
    constexpr std::ptrdiff_t m_nGlowRangeMin = 0x3C; // int32_t
    constexpr std::ptrdiff_t m_glowColorOverride = 0x40; // Color
    constexpr std::ptrdiff_t m_bFlashing = 0x44; // bool
    constexpr std::ptrdiff_t m_flGlowTime = 0x48; // float
    constexpr std::ptrdiff_t m_flGlowStartTime = 0x4C; // float
    constexpr std::ptrdiff_t m_bEligibleForScreenHighlight = 0x50; // bool
    constexpr std::ptrdiff_t m_bGlowing = 0x51; // bool
}

namespace CGlowSprite {
    constexpr std::ptrdiff_t m_vColor = 0x0; // Vector
    constexpr std::ptrdiff_t m_flHorzSize = 0xC; // float
    constexpr std::ptrdiff_t m_flVertSize = 0x10; // float
    constexpr std::ptrdiff_t m_hMaterial = 0x18; // CStrongHandle<InfoForResourceTypeIMaterial2>
}

namespace CGrenadeTracer { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_flTracerDuration = 0xCE0; // float
    constexpr std::ptrdiff_t m_nType = 0xCE4; // GrenadeType_t
}

namespace CHitboxComponent { // CEntityComponent
    constexpr std::ptrdiff_t m_bvDisabledHitGroups = 0x24; // uint32_t[1]
}

namespace CHostageRescueZone { // CHostageRescueZoneShim
}

namespace CHostageRescueZoneShim { // C_BaseTrigger
}

namespace CInfoDynamicShadowHint { // C_PointEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x540; // bool
    constexpr std::ptrdiff_t m_flRange = 0x544; // float
    constexpr std::ptrdiff_t m_nImportance = 0x548; // int32_t
    constexpr std::ptrdiff_t m_nLightChoice = 0x54C; // int32_t
    constexpr std::ptrdiff_t m_hLight = 0x550; // CHandle<C_BaseEntity>
}

namespace CInfoDynamicShadowHintBox { // CInfoDynamicShadowHint
    constexpr std::ptrdiff_t m_vBoxMins = 0x558; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x564; // Vector
}

namespace CInfoOffscreenPanoramaTexture { // C_PointEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x540; // bool
    constexpr std::ptrdiff_t m_nResolutionX = 0x544; // int32_t
    constexpr std::ptrdiff_t m_nResolutionY = 0x548; // int32_t
    constexpr std::ptrdiff_t m_szLayoutFileName = 0x550; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_RenderAttrName = 0x558; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_TargetEntities = 0x560; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
    constexpr std::ptrdiff_t m_nTargetChangeCount = 0x578; // int32_t
    constexpr std::ptrdiff_t m_vecCSSClasses = 0x580; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
    constexpr std::ptrdiff_t m_bCheckCSSClasses = 0x6F8; // bool
}

namespace CInfoParticleTarget { // C_PointEntity
}

namespace CInfoTarget { // C_PointEntity
}

namespace CInfoWorldLayer { // C_BaseEntity
    constexpr std::ptrdiff_t m_pOutputOnEntitiesSpawned = 0x540; // CEntityIOOutput
    constexpr std::ptrdiff_t m_worldName = 0x568; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_layerName = 0x570; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bWorldLayerVisible = 0x578; // bool
    constexpr std::ptrdiff_t m_bEntitiesSpawned = 0x579; // bool
    constexpr std::ptrdiff_t m_bCreateAsChildSpawnGroup = 0x57A; // bool
    constexpr std::ptrdiff_t m_hLayerSpawnGroup = 0x57C; // uint32_t
    constexpr std::ptrdiff_t m_bWorldLayerActuallyVisible = 0x580; // bool
}

namespace CInterpolatedValue {
    constexpr std::ptrdiff_t m_flStartTime = 0x0; // float
    constexpr std::ptrdiff_t m_flEndTime = 0x4; // float
    constexpr std::ptrdiff_t m_flStartValue = 0x8; // float
    constexpr std::ptrdiff_t m_flEndValue = 0xC; // float
    constexpr std::ptrdiff_t m_nInterpType = 0x10; // int32_t
}

namespace CLightComponent { // CEntityComponent
    constexpr std::ptrdiff_t __m_pChainEntity = 0x48; // CNetworkVarChainer
    constexpr std::ptrdiff_t m_Color = 0x85; // Color
    constexpr std::ptrdiff_t m_SecondaryColor = 0x89; // Color
    constexpr std::ptrdiff_t m_flBrightness = 0x90; // float
    constexpr std::ptrdiff_t m_flBrightnessScale = 0x94; // float
    constexpr std::ptrdiff_t m_flBrightnessMult = 0x98; // float
    constexpr std::ptrdiff_t m_flRange = 0x9C; // float
    constexpr std::ptrdiff_t m_flFalloff = 0xA0; // float
    constexpr std::ptrdiff_t m_flAttenuation0 = 0xA4; // float
    constexpr std::ptrdiff_t m_flAttenuation1 = 0xA8; // float
    constexpr std::ptrdiff_t m_flAttenuation2 = 0xAC; // float
    constexpr std::ptrdiff_t m_flTheta = 0xB0; // float
    constexpr std::ptrdiff_t m_flPhi = 0xB4; // float
    constexpr std::ptrdiff_t m_hLightCookie = 0xB8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_nCascades = 0xC0; // int32_t
    constexpr std::ptrdiff_t m_nCastShadows = 0xC4; // int32_t
    constexpr std::ptrdiff_t m_nShadowWidth = 0xC8; // int32_t
    constexpr std::ptrdiff_t m_nShadowHeight = 0xCC; // int32_t
    constexpr std::ptrdiff_t m_bRenderDiffuse = 0xD0; // bool
    constexpr std::ptrdiff_t m_nRenderSpecular = 0xD4; // int32_t
    constexpr std::ptrdiff_t m_bRenderTransmissive = 0xD8; // bool
    constexpr std::ptrdiff_t m_flOrthoLightWidth = 0xDC; // float
    constexpr std::ptrdiff_t m_flOrthoLightHeight = 0xE0; // float
    constexpr std::ptrdiff_t m_nStyle = 0xE4; // int32_t
    constexpr std::ptrdiff_t m_Pattern = 0xE8; // CUtlString
    constexpr std::ptrdiff_t m_nCascadeRenderStaticObjects = 0xF0; // int32_t
    constexpr std::ptrdiff_t m_flShadowCascadeCrossFade = 0xF4; // float
    constexpr std::ptrdiff_t m_flShadowCascadeDistanceFade = 0xF8; // float
    constexpr std::ptrdiff_t m_flShadowCascadeDistance0 = 0xFC; // float
    constexpr std::ptrdiff_t m_flShadowCascadeDistance1 = 0x100; // float
    constexpr std::ptrdiff_t m_flShadowCascadeDistance2 = 0x104; // float
    constexpr std::ptrdiff_t m_flShadowCascadeDistance3 = 0x108; // float
    constexpr std::ptrdiff_t m_nShadowCascadeResolution0 = 0x10C; // int32_t
    constexpr std::ptrdiff_t m_nShadowCascadeResolution1 = 0x110; // int32_t
    constexpr std::ptrdiff_t m_nShadowCascadeResolution2 = 0x114; // int32_t
    constexpr std::ptrdiff_t m_nShadowCascadeResolution3 = 0x118; // int32_t
    constexpr std::ptrdiff_t m_bUsesBakedShadowing = 0x11C; // bool
    constexpr std::ptrdiff_t m_nShadowPriority = 0x120; // int32_t
    constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x124; // int32_t
    constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x128; // bool
    constexpr std::ptrdiff_t m_nDirectLight = 0x12C; // int32_t
    constexpr std::ptrdiff_t m_nIndirectLight = 0x130; // int32_t
    constexpr std::ptrdiff_t m_flFadeMinDist = 0x134; // float
    constexpr std::ptrdiff_t m_flFadeMaxDist = 0x138; // float
    constexpr std::ptrdiff_t m_flShadowFadeMinDist = 0x13C; // float
    constexpr std::ptrdiff_t m_flShadowFadeMaxDist = 0x140; // float
    constexpr std::ptrdiff_t m_bEnabled = 0x144; // bool
    constexpr std::ptrdiff_t m_bFlicker = 0x145; // bool
    constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x146; // bool
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x148; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x154; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x160; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x16C; // QAngle
    constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x178; // Vector
    constexpr std::ptrdiff_t m_flPrecomputedMaxRange = 0x184; // float
    constexpr std::ptrdiff_t m_nFogLightingMode = 0x188; // int32_t
    constexpr std::ptrdiff_t m_flFogContributionStength = 0x18C; // float
    constexpr std::ptrdiff_t m_flNearClipPlane = 0x190; // float
    constexpr std::ptrdiff_t m_SkyColor = 0x194; // Color
    constexpr std::ptrdiff_t m_flSkyIntensity = 0x198; // float
    constexpr std::ptrdiff_t m_SkyAmbientBounce = 0x19C; // Color
    constexpr std::ptrdiff_t m_bUseSecondaryColor = 0x1A0; // bool
    constexpr std::ptrdiff_t m_bMixedShadows = 0x1A1; // bool
    constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x1A4; // GameTime_t
    constexpr std::ptrdiff_t m_flCapsuleLength = 0x1A8; // float
    constexpr std::ptrdiff_t m_flMinRoughness = 0x1AC; // float
}

namespace CLogicRelay { // CLogicalEntity
    constexpr std::ptrdiff_t m_OnTrigger = 0x540; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnSpawn = 0x568; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bDisabled = 0x590; // bool
    constexpr std::ptrdiff_t m_bWaitForRefire = 0x591; // bool
    constexpr std::ptrdiff_t m_bTriggerOnce = 0x592; // bool
    constexpr std::ptrdiff_t m_bFastRetrigger = 0x593; // bool
    constexpr std::ptrdiff_t m_bPassthoughCaller = 0x594; // bool
}

namespace CLogicalEntity { // C_BaseEntity
}

namespace CModelState {
    constexpr std::ptrdiff_t m_hModel = 0xA0; // CStrongHandle<InfoForResourceTypeCModel>
    constexpr std::ptrdiff_t m_ModelName = 0xA8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bClientClothCreationSuppressed = 0xE8; // bool
    constexpr std::ptrdiff_t m_MeshGroupMask = 0x180; // uint64_t
    constexpr std::ptrdiff_t m_nIdealMotionType = 0x222; // int8_t
    constexpr std::ptrdiff_t m_nForceLOD = 0x223; // int8_t
    constexpr std::ptrdiff_t m_nClothUpdateFlags = 0x224; // int8_t
}

namespace CNetworkedSequenceOperation {
    constexpr std::ptrdiff_t m_hSequence = 0x8; // HSequence
    constexpr std::ptrdiff_t m_flPrevCycle = 0xC; // float
    constexpr std::ptrdiff_t m_flCycle = 0x10; // float
    constexpr std::ptrdiff_t m_flWeight = 0x14; // CNetworkedQuantizedFloat
    constexpr std::ptrdiff_t m_bSequenceChangeNetworked = 0x1C; // bool
    constexpr std::ptrdiff_t m_bDiscontinuity = 0x1D; // bool
    constexpr std::ptrdiff_t m_flPrevCycleFromDiscontinuity = 0x20; // float
    constexpr std::ptrdiff_t m_flPrevCycleForAnimEventDetection = 0x24; // float
}

namespace CPlayerSprayDecalRenderHelper {
}

namespace CPlayer_AutoaimServices { // CPlayerPawnComponent
}

namespace CPlayer_CameraServices { // CPlayerPawnComponent
    constexpr std::ptrdiff_t m_vecCsViewPunchAngle = 0x40; // QAngle
    constexpr std::ptrdiff_t m_nCsViewPunchAngleTick = 0x4C; // GameTick_t
    constexpr std::ptrdiff_t m_flCsViewPunchAngleTickRatio = 0x50; // float
    constexpr std::ptrdiff_t m_PlayerFog = 0x58; // C_fogplayerparams_t
    constexpr std::ptrdiff_t m_hColorCorrectionCtrl = 0x98; // CHandle<C_ColorCorrection>
    constexpr std::ptrdiff_t m_hViewEntity = 0x9C; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_hTonemapController = 0xA0; // CHandle<C_TonemapController2>
    constexpr std::ptrdiff_t m_audio = 0xA8; // audioparams_t
    constexpr std::ptrdiff_t m_PostProcessingVolumes = 0x120; // C_NetworkUtlVectorBase<CHandle<C_PostProcessingVolume>>
    constexpr std::ptrdiff_t m_flOldPlayerZ = 0x138; // float
    constexpr std::ptrdiff_t m_flOldPlayerViewOffsetZ = 0x13C; // float
    constexpr std::ptrdiff_t m_CurrentFog = 0x140; // fogparams_t
    constexpr std::ptrdiff_t m_hOldFogController = 0x1A8; // CHandle<C_FogController>
    constexpr std::ptrdiff_t m_bOverrideFogColor = 0x1AC; // bool[5]
    constexpr std::ptrdiff_t m_OverrideFogColor = 0x1B1; // Color[5]
    constexpr std::ptrdiff_t m_bOverrideFogStartEnd = 0x1C5; // bool[5]
    constexpr std::ptrdiff_t m_fOverrideFogStart = 0x1CC; // float[5]
    constexpr std::ptrdiff_t m_fOverrideFogEnd = 0x1E0; // float[5]
    constexpr std::ptrdiff_t m_hActivePostProcessingVolume = 0x1F4; // CHandle<C_PostProcessingVolume>
    constexpr std::ptrdiff_t m_angDemoViewAngles = 0x1F8; // QAngle
}

namespace CPlayer_FlashlightServices { // CPlayerPawnComponent
}

namespace CPlayer_ItemServices { // CPlayerPawnComponent
}

namespace CPlayer_MovementServices { // CPlayerPawnComponent
    constexpr std::ptrdiff_t m_nImpulse = 0x40; // int32_t
    constexpr std::ptrdiff_t m_nButtons = 0x48; // CInButtonState
    constexpr std::ptrdiff_t m_nQueuedButtonDownMask = 0x68; // uint64_t
    constexpr std::ptrdiff_t m_nQueuedButtonChangeMask = 0x70; // uint64_t
    constexpr std::ptrdiff_t m_nButtonDoublePressed = 0x78; // uint64_t
    constexpr std::ptrdiff_t m_pButtonPressedCmdNumber = 0x80; // uint32_t[64]
    constexpr std::ptrdiff_t m_nLastCommandNumberProcessed = 0x180; // uint32_t
    constexpr std::ptrdiff_t m_nToggleButtonDownMask = 0x188; // uint64_t
    constexpr std::ptrdiff_t m_flMaxspeed = 0x190; // float
    constexpr std::ptrdiff_t m_arrForceSubtickMoveWhen = 0x194; // float[4]
    constexpr std::ptrdiff_t m_flForwardMove = 0x1A4; // float
    constexpr std::ptrdiff_t m_flLeftMove = 0x1A8; // float
    constexpr std::ptrdiff_t m_flUpMove = 0x1AC; // float
    constexpr std::ptrdiff_t m_vecLastMovementImpulses = 0x1B0; // Vector
    constexpr std::ptrdiff_t m_vecOldViewAngles = 0x1BC; // QAngle
}

namespace CPlayer_MovementServices_Humanoid { // CPlayer_MovementServices
    constexpr std::ptrdiff_t m_flStepSoundTime = 0x1D0; // float
    constexpr std::ptrdiff_t m_flFallVelocity = 0x1D4; // float
    constexpr std::ptrdiff_t m_bInCrouch = 0x1D8; // bool
    constexpr std::ptrdiff_t m_nCrouchState = 0x1DC; // uint32_t
    constexpr std::ptrdiff_t m_flCrouchTransitionStartTime = 0x1E0; // GameTime_t
    constexpr std::ptrdiff_t m_bDucked = 0x1E4; // bool
    constexpr std::ptrdiff_t m_bDucking = 0x1E5; // bool
    constexpr std::ptrdiff_t m_bInDuckJump = 0x1E6; // bool
    constexpr std::ptrdiff_t m_groundNormal = 0x1E8; // Vector
    constexpr std::ptrdiff_t m_flSurfaceFriction = 0x1F4; // float
    constexpr std::ptrdiff_t m_surfaceProps = 0x1F8; // CUtlStringToken
    constexpr std::ptrdiff_t m_nStepside = 0x208; // int32_t
}

namespace CPlayer_ObserverServices { // CPlayerPawnComponent
    constexpr std::ptrdiff_t m_iObserverMode = 0x40; // uint8_t
    constexpr std::ptrdiff_t m_hObserverTarget = 0x44; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_iObserverLastMode = 0x48; // ObserverMode_t
    constexpr std::ptrdiff_t m_bForcedObserverMode = 0x4C; // bool
    constexpr std::ptrdiff_t m_flObserverChaseDistance = 0x50; // float
    constexpr std::ptrdiff_t m_flObserverChaseDistanceCalcTime = 0x54; // GameTime_t
}

namespace CPlayer_UseServices { // CPlayerPawnComponent
}

namespace CPlayer_ViewModelServices { // CPlayerPawnComponent
}

namespace CPlayer_WaterServices { // CPlayerPawnComponent
}

namespace CPlayer_WeaponServices { // CPlayerPawnComponent
    constexpr std::ptrdiff_t m_bAllowSwitchToNoWeapon = 0x40; // bool
    constexpr std::ptrdiff_t m_hMyWeapons = 0x48; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
    constexpr std::ptrdiff_t m_hActiveWeapon = 0x60; // CHandle<C_BasePlayerWeapon>
    constexpr std::ptrdiff_t m_hLastWeapon = 0x64; // CHandle<C_BasePlayerWeapon>
    constexpr std::ptrdiff_t m_iAmmo = 0x68; // uint16_t[32]
}

namespace CPointOffScreenIndicatorUi { // C_PointClientUIWorldPanel
    constexpr std::ptrdiff_t m_bBeenEnabled = 0xF20; // bool
    constexpr std::ptrdiff_t m_bHide = 0xF21; // bool
    constexpr std::ptrdiff_t m_flSeenTargetTime = 0xF24; // float
    constexpr std::ptrdiff_t m_pTargetPanel = 0xF28; // C_PointClientUIWorldPanel*
}

namespace CPointTemplate { // CLogicalEntity
    constexpr std::ptrdiff_t m_iszWorldName = 0x540; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSource2EntityLumpName = 0x548; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszEntityFilterName = 0x550; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flTimeoutInterval = 0x558; // float
    constexpr std::ptrdiff_t m_bAsynchronouslySpawnEntities = 0x55C; // bool
    constexpr std::ptrdiff_t m_pOutputOnSpawned = 0x560; // CEntityIOOutput
    constexpr std::ptrdiff_t m_clientOnlyEntityBehavior = 0x588; // PointTemplateClientOnlyEntityBehavior_t
    constexpr std::ptrdiff_t m_ownerSpawnGroupType = 0x58C; // PointTemplateOwnerSpawnGroupType_t
    constexpr std::ptrdiff_t m_createdSpawnGroupHandles = 0x590; // CUtlVector<uint32_t>
    constexpr std::ptrdiff_t m_SpawnedEntityHandles = 0x5A8; // CUtlVector<CEntityHandle>
    constexpr std::ptrdiff_t m_ScriptSpawnCallback = 0x5C0; // HSCRIPT
    constexpr std::ptrdiff_t m_ScriptCallbackScope = 0x5C8; // HSCRIPT
}

namespace CPrecipitationVData { // CEntitySubclassVDataBase
    constexpr std::ptrdiff_t m_szParticlePrecipitationEffect = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    constexpr std::ptrdiff_t m_flInnerDistance = 0x108; // float
    constexpr std::ptrdiff_t m_nAttachType = 0x10C; // ParticleAttachment_t
    constexpr std::ptrdiff_t m_bBatchSameVolumeType = 0x110; // bool
    constexpr std::ptrdiff_t m_nRTEnvCP = 0x114; // int32_t
    constexpr std::ptrdiff_t m_nRTEnvCPComponent = 0x118; // int32_t
    constexpr std::ptrdiff_t m_szModifier = 0x120; // CUtlString
}

namespace CProjectedTextureBase {
    constexpr std::ptrdiff_t m_hTargetEntity = 0xC; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_bState = 0x10; // bool
    constexpr std::ptrdiff_t m_bAlwaysUpdate = 0x11; // bool
    constexpr std::ptrdiff_t m_flLightFOV = 0x14; // float
    constexpr std::ptrdiff_t m_bEnableShadows = 0x18; // bool
    constexpr std::ptrdiff_t m_bSimpleProjection = 0x19; // bool
    constexpr std::ptrdiff_t m_bLightOnlyTarget = 0x1A; // bool
    constexpr std::ptrdiff_t m_bLightWorld = 0x1B; // bool
    constexpr std::ptrdiff_t m_bCameraSpace = 0x1C; // bool
    constexpr std::ptrdiff_t m_flBrightnessScale = 0x20; // float
    constexpr std::ptrdiff_t m_LightColor = 0x24; // Color
    constexpr std::ptrdiff_t m_flIntensity = 0x28; // float
    constexpr std::ptrdiff_t m_flLinearAttenuation = 0x2C; // float
    constexpr std::ptrdiff_t m_flQuadraticAttenuation = 0x30; // float
    constexpr std::ptrdiff_t m_bVolumetric = 0x34; // bool
    constexpr std::ptrdiff_t m_flVolumetricIntensity = 0x38; // float
    constexpr std::ptrdiff_t m_flNoiseStrength = 0x3C; // float
    constexpr std::ptrdiff_t m_flFlashlightTime = 0x40; // float
    constexpr std::ptrdiff_t m_nNumPlanes = 0x44; // uint32_t
    constexpr std::ptrdiff_t m_flPlaneOffset = 0x48; // float
    constexpr std::ptrdiff_t m_flColorTransitionTime = 0x4C; // float
    constexpr std::ptrdiff_t m_flAmbient = 0x50; // float
    constexpr std::ptrdiff_t m_SpotlightTextureName = 0x54; // char[512]
    constexpr std::ptrdiff_t m_nSpotlightTextureFrame = 0x254; // int32_t
    constexpr std::ptrdiff_t m_nShadowQuality = 0x258; // uint32_t
    constexpr std::ptrdiff_t m_flNearZ = 0x25C; // float
    constexpr std::ptrdiff_t m_flFarZ = 0x260; // float
    constexpr std::ptrdiff_t m_flProjectionSize = 0x264; // float
    constexpr std::ptrdiff_t m_flRotation = 0x268; // float
    constexpr std::ptrdiff_t m_bFlipHorizontal = 0x26C; // bool
}

namespace CRenderComponent { // CEntityComponent
    constexpr std::ptrdiff_t __m_pChainEntity = 0x10; // CNetworkVarChainer
    constexpr std::ptrdiff_t m_bIsRenderingWithViewModels = 0x50; // bool
    constexpr std::ptrdiff_t m_nSplitscreenFlags = 0x54; // uint32_t
    constexpr std::ptrdiff_t m_bEnableRendering = 0x60; // bool
    constexpr std::ptrdiff_t m_bInterpolationReadyToDraw = 0xB0; // bool
}

namespace CSMatchStats_t { // CSPerRoundStats_t
    constexpr std::ptrdiff_t m_iEnemy5Ks = 0x68; // int32_t
    constexpr std::ptrdiff_t m_iEnemy4Ks = 0x6C; // int32_t
    constexpr std::ptrdiff_t m_iEnemy3Ks = 0x70; // int32_t
}

namespace CSPerRoundStats_t {
    constexpr std::ptrdiff_t m_iKills = 0x30; // int32_t
    constexpr std::ptrdiff_t m_iDeaths = 0x34; // int32_t
    constexpr std::ptrdiff_t m_iAssists = 0x38; // int32_t
    constexpr std::ptrdiff_t m_iDamage = 0x3C; // int32_t
    constexpr std::ptrdiff_t m_iEquipmentValue = 0x40; // int32_t
    constexpr std::ptrdiff_t m_iMoneySaved = 0x44; // int32_t
    constexpr std::ptrdiff_t m_iKillReward = 0x48; // int32_t
    constexpr std::ptrdiff_t m_iLiveTime = 0x4C; // int32_t
    constexpr std::ptrdiff_t m_iHeadShotKills = 0x50; // int32_t
    constexpr std::ptrdiff_t m_iObjective = 0x54; // int32_t
    constexpr std::ptrdiff_t m_iCashEarned = 0x58; // int32_t
    constexpr std::ptrdiff_t m_iUtilityDamage = 0x5C; // int32_t
    constexpr std::ptrdiff_t m_iEnemiesFlashed = 0x60; // int32_t
}

namespace CScriptComponent { // CEntityComponent
    constexpr std::ptrdiff_t m_scriptClassName = 0x30; // CUtlSymbolLarge
}

namespace CServerOnlyModelEntity { // C_BaseModelEntity
}

namespace CSkeletonInstance { // CGameSceneNode
    constexpr std::ptrdiff_t m_modelState = 0x160; // CModelState
    constexpr std::ptrdiff_t m_bIsAnimationEnabled = 0x390; // bool
    constexpr std::ptrdiff_t m_bUseParentRenderBounds = 0x391; // bool
    constexpr std::ptrdiff_t m_bDisableSolidCollisionsForHierarchy = 0x392; // bool
    constexpr std::ptrdiff_t m_bDirtyMotionType = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_materialGroup = 0x394; // CUtlStringToken
    constexpr std::ptrdiff_t m_nHitboxSet = 0x398; // uint8_t
}

namespace CSkyboxReference { // C_BaseEntity
    constexpr std::ptrdiff_t m_worldGroupId = 0x540; // WorldGroupId_t
    constexpr std::ptrdiff_t m_hSkyCamera = 0x544; // CHandle<C_SkyCamera>
}

namespace CTablet { // C_CSWeaponBase
}

namespace CTimeline { // IntervalTimer
    constexpr std::ptrdiff_t m_flValues = 0x10; // float[64]
    constexpr std::ptrdiff_t m_nValueCounts = 0x110; // int32_t[64]
    constexpr std::ptrdiff_t m_nBucketCount = 0x210; // int32_t
    constexpr std::ptrdiff_t m_flInterval = 0x214; // float
    constexpr std::ptrdiff_t m_flFinalValue = 0x218; // float
    constexpr std::ptrdiff_t m_nCompressionType = 0x21C; // TimelineCompression_t
    constexpr std::ptrdiff_t m_bStopped = 0x220; // bool
}

namespace CTripWireFire { // C_BaseCSGrenade
}

namespace CTripWireFireProjectile { // C_BaseGrenade
}

namespace CWaterSplasher { // C_BaseModelEntity
}

namespace CWeaponZoneRepulsor { // C_CSWeaponBaseGun
}

namespace C_AK47 { // C_CSWeaponBaseGun
}

namespace C_AttributeContainer { // CAttributeManager
    constexpr std::ptrdiff_t m_Item = 0x50; // C_EconItemView
    constexpr std::ptrdiff_t m_iExternalItemProviderRegisteredToken = 0x498; // int32_t
    constexpr std::ptrdiff_t m_ullRegisteredAsItemID = 0x4A0; // uint64_t
}

namespace C_BarnLight { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_bEnabled = 0xCC0; // bool
    constexpr std::ptrdiff_t m_nColorMode = 0xCC4; // int32_t
    constexpr std::ptrdiff_t m_Color = 0xCC8; // Color
    constexpr std::ptrdiff_t m_flColorTemperature = 0xCCC; // float
    constexpr std::ptrdiff_t m_flBrightness = 0xCD0; // float
    constexpr std::ptrdiff_t m_flBrightnessScale = 0xCD4; // float
    constexpr std::ptrdiff_t m_nDirectLight = 0xCD8; // int32_t
    constexpr std::ptrdiff_t m_nBakedShadowIndex = 0xCDC; // int32_t
    constexpr std::ptrdiff_t m_nLuminaireShape = 0xCE0; // int32_t
    constexpr std::ptrdiff_t m_flLuminaireSize = 0xCE4; // float
    constexpr std::ptrdiff_t m_flLuminaireAnisotropy = 0xCE8; // float
    constexpr std::ptrdiff_t m_LightStyleString = 0xCF0; // CUtlString
    constexpr std::ptrdiff_t m_flLightStyleStartTime = 0xCF8; // GameTime_t
    constexpr std::ptrdiff_t m_QueuedLightStyleStrings = 0xD00; // C_NetworkUtlVectorBase<CUtlString>
    constexpr std::ptrdiff_t m_LightStyleEvents = 0xD18; // C_NetworkUtlVectorBase<CUtlString>
    constexpr std::ptrdiff_t m_LightStyleTargets = 0xD30; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
    constexpr std::ptrdiff_t m_StyleEvent = 0xD48; // CEntityIOOutput[4]
    constexpr std::ptrdiff_t m_hLightCookie = 0xDE8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_flShape = 0xDF0; // float
    constexpr std::ptrdiff_t m_flSoftX = 0xDF4; // float
    constexpr std::ptrdiff_t m_flSoftY = 0xDF8; // float
    constexpr std::ptrdiff_t m_flSkirt = 0xDFC; // float
    constexpr std::ptrdiff_t m_flSkirtNear = 0xE00; // float
    constexpr std::ptrdiff_t m_vSizeParams = 0xE04; // Vector
    constexpr std::ptrdiff_t m_flRange = 0xE10; // float
    constexpr std::ptrdiff_t m_vShear = 0xE14; // Vector
    constexpr std::ptrdiff_t m_nBakeSpecularToCubemaps = 0xE20; // int32_t
    constexpr std::ptrdiff_t m_vBakeSpecularToCubemapsSize = 0xE24; // Vector
    constexpr std::ptrdiff_t m_nCastShadows = 0xE30; // int32_t
    constexpr std::ptrdiff_t m_nShadowMapSize = 0xE34; // int32_t
    constexpr std::ptrdiff_t m_nShadowPriority = 0xE38; // int32_t
    constexpr std::ptrdiff_t m_bContactShadow = 0xE3C; // bool
    constexpr std::ptrdiff_t m_nBounceLight = 0xE40; // int32_t
    constexpr std::ptrdiff_t m_flBounceScale = 0xE44; // float
    constexpr std::ptrdiff_t m_flMinRoughness = 0xE48; // float
    constexpr std::ptrdiff_t m_vAlternateColor = 0xE4C; // Vector
    constexpr std::ptrdiff_t m_fAlternateColorBrightness = 0xE58; // float
    constexpr std::ptrdiff_t m_nFog = 0xE5C; // int32_t
    constexpr std::ptrdiff_t m_flFogStrength = 0xE60; // float
    constexpr std::ptrdiff_t m_nFogShadows = 0xE64; // int32_t
    constexpr std::ptrdiff_t m_flFogScale = 0xE68; // float
    constexpr std::ptrdiff_t m_flFadeSizeStart = 0xE6C; // float
    constexpr std::ptrdiff_t m_flFadeSizeEnd = 0xE70; // float
    constexpr std::ptrdiff_t m_flShadowFadeSizeStart = 0xE74; // float
    constexpr std::ptrdiff_t m_flShadowFadeSizeEnd = 0xE78; // float
    constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0xE7C; // bool
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0xE80; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0xE8C; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0xE98; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0xEA4; // QAngle
    constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0xEB0; // Vector
}

namespace C_BaseButton { // C_BaseToggle
    constexpr std::ptrdiff_t m_glowEntity = 0xCC0; // CHandle<C_BaseModelEntity>
    constexpr std::ptrdiff_t m_usable = 0xCC4; // bool
    constexpr std::ptrdiff_t m_szDisplayText = 0xCC8; // CUtlSymbolLarge
}

namespace C_BaseCSGrenade { // C_CSWeaponBase
    constexpr std::ptrdiff_t m_bClientPredictDelete = 0x1A10; // bool
    constexpr std::ptrdiff_t m_bRedraw = 0x1A11; // bool
    constexpr std::ptrdiff_t m_bIsHeldByPlayer = 0x1A12; // bool
    constexpr std::ptrdiff_t m_bPinPulled = 0x1A13; // bool
    constexpr std::ptrdiff_t m_bJumpThrow = 0x1A14; // bool
    constexpr std::ptrdiff_t m_bThrowAnimating = 0x1A15; // bool
    constexpr std::ptrdiff_t m_fThrowTime = 0x1A18; // GameTime_t
    constexpr std::ptrdiff_t m_flThrowStrength = 0x1A1C; // float
    constexpr std::ptrdiff_t m_flThrowStrengthApproach = 0x1A20; // float
    constexpr std::ptrdiff_t m_fDropTime = 0x1A24; // GameTime_t
    constexpr std::ptrdiff_t m_bJustPulledPin = 0x1A28; // bool
    constexpr std::ptrdiff_t m_nNextHoldTick = 0x1A2C; // GameTick_t
    constexpr std::ptrdiff_t m_flNextHoldFrac = 0x1A30; // float
    constexpr std::ptrdiff_t m_hSwitchToWeaponAfterThrow = 0x1A34; // CHandle<C_CSWeaponBase>
}

namespace C_BaseCSGrenadeProjectile { // C_BaseGrenade
    constexpr std::ptrdiff_t m_vInitialPosition = 0x1068; // Vector
    constexpr std::ptrdiff_t m_vInitialVelocity = 0x1074; // Vector
    constexpr std::ptrdiff_t m_nBounces = 0x1080; // int32_t
    constexpr std::ptrdiff_t m_nExplodeEffectIndex = 0x1088; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    constexpr std::ptrdiff_t m_nExplodeEffectTickBegin = 0x1090; // int32_t
    constexpr std::ptrdiff_t m_vecExplodeEffectOrigin = 0x1094; // Vector
    constexpr std::ptrdiff_t m_flSpawnTime = 0x10A0; // GameTime_t
    constexpr std::ptrdiff_t vecLastTrailLinePos = 0x10A4; // Vector
    constexpr std::ptrdiff_t flNextTrailLineTime = 0x10B0; // GameTime_t
    constexpr std::ptrdiff_t m_bExplodeEffectBegan = 0x10B4; // bool
    constexpr std::ptrdiff_t m_bCanCreateGrenadeTrail = 0x10B5; // bool
    constexpr std::ptrdiff_t m_nSnapshotTrajectoryEffectIndex = 0x10B8; // ParticleIndex_t
    constexpr std::ptrdiff_t m_hSnapshotTrajectoryParticleSnapshot = 0x10C0; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
    constexpr std::ptrdiff_t m_arrTrajectoryTrailPoints = 0x10C8; // CUtlVector<Vector>
    constexpr std::ptrdiff_t m_arrTrajectoryTrailPointCreationTimes = 0x10E0; // CUtlVector<float>
    constexpr std::ptrdiff_t m_flTrajectoryTrailEffectCreationTime = 0x10F8; // float
}

namespace C_BaseClientUIEntity { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_bEnabled = 0xCC8; // bool
    constexpr std::ptrdiff_t m_DialogXMLName = 0xCD0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_PanelClassName = 0xCD8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_PanelID = 0xCE0; // CUtlSymbolLarge
}

namespace C_BaseCombatCharacter { // C_BaseFlex
    constexpr std::ptrdiff_t m_hMyWearables = 0x1018; // C_NetworkUtlVectorBase<CHandle<C_EconWearable>>
    constexpr std::ptrdiff_t m_bloodColor = 0x1030; // int32_t
    constexpr std::ptrdiff_t m_leftFootAttachment = 0x1034; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_rightFootAttachment = 0x1035; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_nWaterWakeMode = 0x1038; // C_BaseCombatCharacter::WaterWakeMode_t
    constexpr std::ptrdiff_t m_flWaterWorldZ = 0x103C; // float
    constexpr std::ptrdiff_t m_flWaterNextTraceTime = 0x1040; // float
    constexpr std::ptrdiff_t m_flFieldOfView = 0x1044; // float
}

namespace C_BaseDoor { // C_BaseToggle
    constexpr std::ptrdiff_t m_bIsUsable = 0xCC0; // bool
}

namespace C_BaseEntity { // CEntityInstance
    constexpr std::ptrdiff_t m_CBodyComponent = 0x30; // CBodyComponent*
    constexpr std::ptrdiff_t m_NetworkTransmitComponent = 0x38; // CNetworkTransmitComponent
    constexpr std::ptrdiff_t m_nLastThinkTick = 0x308; // GameTick_t
    constexpr std::ptrdiff_t m_pGameSceneNode = 0x310; // CGameSceneNode*
    constexpr std::ptrdiff_t m_pRenderComponent = 0x318; // CRenderComponent*
    constexpr std::ptrdiff_t m_pCollision = 0x320; // CCollisionProperty*
    constexpr std::ptrdiff_t m_iMaxHealth = 0x328; // int32_t
    constexpr std::ptrdiff_t m_iHealth = 0x32C; // int32_t
    constexpr std::ptrdiff_t m_lifeState = 0x330; // uint8_t
    constexpr std::ptrdiff_t m_bTakesDamage = 0x331; // bool
    constexpr std::ptrdiff_t m_nTakeDamageFlags = 0x334; // TakeDamageFlags_t
    constexpr std::ptrdiff_t m_ubInterpolationFrame = 0x338; // uint8_t
    constexpr std::ptrdiff_t m_hSceneObjectController = 0x33C; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_nNoInterpolationTick = 0x340; // int32_t
    constexpr std::ptrdiff_t m_nVisibilityNoInterpolationTick = 0x344; // int32_t
    constexpr std::ptrdiff_t m_flProxyRandomValue = 0x348; // float
    constexpr std::ptrdiff_t m_iEFlags = 0x34C; // int32_t
    constexpr std::ptrdiff_t m_nWaterType = 0x350; // uint8_t
    constexpr std::ptrdiff_t m_bInterpolateEvenWithNoModel = 0x351; // bool
    constexpr std::ptrdiff_t m_bPredictionEligible = 0x352; // bool
    constexpr std::ptrdiff_t m_bApplyLayerMatchIDToModel = 0x353; // bool
    constexpr std::ptrdiff_t m_tokLayerMatchID = 0x354; // CUtlStringToken
    constexpr std::ptrdiff_t m_nSubclassID = 0x358; // CUtlStringToken
    constexpr std::ptrdiff_t m_nSimulationTick = 0x368; // int32_t
    constexpr std::ptrdiff_t m_iCurrentThinkContext = 0x36C; // int32_t
    constexpr std::ptrdiff_t m_aThinkFunctions = 0x370; // CUtlVector<thinkfunc_t>
    constexpr std::ptrdiff_t m_flAnimTime = 0x388; // float
    constexpr std::ptrdiff_t m_flSimulationTime = 0x38C; // float
    constexpr std::ptrdiff_t m_nSceneObjectOverrideFlags = 0x390; // uint8_t
    constexpr std::ptrdiff_t m_bHasSuccessfullyInterpolated = 0x391; // bool
    constexpr std::ptrdiff_t m_bHasAddedVarsToInterpolation = 0x392; // bool
    constexpr std::ptrdiff_t m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x393; // bool
    constexpr std::ptrdiff_t m_nInterpolationLatchDirtyFlags = 0x394; // int32_t[2]
    constexpr std::ptrdiff_t m_ListEntry = 0x39C; // uint16_t[11]
    constexpr std::ptrdiff_t m_flCreateTime = 0x3B4; // GameTime_t
    constexpr std::ptrdiff_t m_flSpeed = 0x3B8; // float
    constexpr std::ptrdiff_t m_EntClientFlags = 0x3BC; // uint16_t
    constexpr std::ptrdiff_t m_bClientSideRagdoll = 0x3BE; // bool
    constexpr std::ptrdiff_t m_iTeamNum = 0x3BF; // uint8_t
    constexpr std::ptrdiff_t m_spawnflags = 0x3C0; // uint32_t
    constexpr std::ptrdiff_t m_nNextThinkTick = 0x3C4; // GameTick_t
    constexpr std::ptrdiff_t m_fFlags = 0x3C8; // uint32_t
    constexpr std::ptrdiff_t m_vecAbsVelocity = 0x3CC; // Vector
    constexpr std::ptrdiff_t m_vecVelocity = 0x3D8; // CNetworkVelocityVector
    constexpr std::ptrdiff_t m_vecBaseVelocity = 0x408; // Vector
    constexpr std::ptrdiff_t m_hEffectEntity = 0x414; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_hOwnerEntity = 0x418; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_MoveCollide = 0x41C; // MoveCollide_t
    constexpr std::ptrdiff_t m_MoveType = 0x41D; // MoveType_t
    constexpr std::ptrdiff_t m_flWaterLevel = 0x420; // float
    constexpr std::ptrdiff_t m_fEffects = 0x424; // uint32_t
    constexpr std::ptrdiff_t m_hGroundEntity = 0x428; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_flFriction = 0x42C; // float
    constexpr std::ptrdiff_t m_flElasticity = 0x430; // float
    constexpr std::ptrdiff_t m_flGravityScale = 0x434; // float
    constexpr std::ptrdiff_t m_flTimeScale = 0x438; // float
    constexpr std::ptrdiff_t m_bSimulatedEveryTick = 0x43C; // bool
    constexpr std::ptrdiff_t m_bAnimatedEveryTick = 0x43D; // bool
    constexpr std::ptrdiff_t m_flNavIgnoreUntilTime = 0x440; // GameTime_t
    constexpr std::ptrdiff_t m_hThink = 0x444; // uint16_t
    constexpr std::ptrdiff_t m_fBBoxVisFlags = 0x450; // uint8_t
    constexpr std::ptrdiff_t m_bPredictable = 0x451; // bool
    constexpr std::ptrdiff_t m_bRenderWithViewModels = 0x452; // bool
    constexpr std::ptrdiff_t m_nSplitUserPlayerPredictionSlot = 0x454; // CSplitScreenSlot
    constexpr std::ptrdiff_t m_nFirstPredictableCommand = 0x458; // int32_t
    constexpr std::ptrdiff_t m_nLastPredictableCommand = 0x45C; // int32_t
    constexpr std::ptrdiff_t m_hOldMoveParent = 0x460; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_Particles = 0x468; // CParticleProperty
    constexpr std::ptrdiff_t m_vecPredictedScriptFloats = 0x490; // CUtlVector<float>
    constexpr std::ptrdiff_t m_vecPredictedScriptFloatIDs = 0x4A8; // CUtlVector<int32_t>
    constexpr std::ptrdiff_t m_nNextScriptVarRecordID = 0x4D8; // int32_t
    constexpr std::ptrdiff_t m_vecAngVelocity = 0x4E8; // QAngle
    constexpr std::ptrdiff_t m_DataChangeEventRef = 0x4F4; // int32_t
    constexpr std::ptrdiff_t m_dependencies = 0x4F8; // CUtlVector<CEntityHandle>
    constexpr std::ptrdiff_t m_nCreationTick = 0x510; // int32_t
    constexpr std::ptrdiff_t m_bAnimTimeChanged = 0x529; // bool
    constexpr std::ptrdiff_t m_bSimulationTimeChanged = 0x52A; // bool
    constexpr std::ptrdiff_t m_sUniqueHammerID = 0x538; // CUtlString
}

namespace C_BaseFire { // C_BaseEntity
    constexpr std::ptrdiff_t m_flScale = 0x540; // float
    constexpr std::ptrdiff_t m_flStartScale = 0x544; // float
    constexpr std::ptrdiff_t m_flScaleTime = 0x548; // float
    constexpr std::ptrdiff_t m_nFlags = 0x54C; // uint32_t
}

namespace C_BaseFlex { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_flexWeight = 0xE90; // C_NetworkUtlVectorBase<float>
    constexpr std::ptrdiff_t m_vLookTargetPosition = 0xEA8; // Vector
    constexpr std::ptrdiff_t m_blinktoggle = 0xEC0; // bool
    constexpr std::ptrdiff_t m_nLastFlexUpdateFrameCount = 0xF20; // int32_t
    constexpr std::ptrdiff_t m_CachedViewTarget = 0xF24; // Vector
    constexpr std::ptrdiff_t m_nNextSceneEventId = 0xF30; // uint32_t
    constexpr std::ptrdiff_t m_iBlink = 0xF34; // int32_t
    constexpr std::ptrdiff_t m_blinktime = 0xF38; // float
    constexpr std::ptrdiff_t m_prevblinktoggle = 0xF3C; // bool
    constexpr std::ptrdiff_t m_iJawOpen = 0xF40; // int32_t
    constexpr std::ptrdiff_t m_flJawOpenAmount = 0xF44; // float
    constexpr std::ptrdiff_t m_flBlinkAmount = 0xF48; // float
    constexpr std::ptrdiff_t m_iMouthAttachment = 0xF4C; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_iEyeAttachment = 0xF4D; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_bResetFlexWeightsOnModelChange = 0xF4E; // bool
    constexpr std::ptrdiff_t m_nEyeOcclusionRendererBone = 0xF68; // int32_t
    constexpr std::ptrdiff_t m_mEyeOcclusionRendererCameraToBoneTransform = 0xF6C; // matrix3x4_t
    constexpr std::ptrdiff_t m_vEyeOcclusionRendererHalfExtent = 0xF9C; // Vector
    constexpr std::ptrdiff_t m_PhonemeClasses = 0xFB8; // C_BaseFlex::Emphasized_Phoneme[3]
}

namespace C_BaseFlex_Emphasized_Phoneme {
    constexpr std::ptrdiff_t m_sClassName = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_flAmount = 0x18; // float
    constexpr std::ptrdiff_t m_bRequired = 0x1C; // bool
    constexpr std::ptrdiff_t m_bBasechecked = 0x1D; // bool
    constexpr std::ptrdiff_t m_bValid = 0x1E; // bool
}

namespace C_BaseGrenade { // C_BaseFlex
    constexpr std::ptrdiff_t m_bHasWarnedAI = 0x1018; // bool
    constexpr std::ptrdiff_t m_bIsSmokeGrenade = 0x1019; // bool
    constexpr std::ptrdiff_t m_bIsLive = 0x101A; // bool
    constexpr std::ptrdiff_t m_DmgRadius = 0x101C; // float
    constexpr std::ptrdiff_t m_flDetonateTime = 0x1020; // GameTime_t
    constexpr std::ptrdiff_t m_flWarnAITime = 0x1024; // float
    constexpr std::ptrdiff_t m_flDamage = 0x1028; // float
    constexpr std::ptrdiff_t m_iszBounceSound = 0x1030; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_ExplosionSound = 0x1038; // CUtlString
    constexpr std::ptrdiff_t m_hThrower = 0x1044; // CHandle<C_CSPlayerPawn>
    constexpr std::ptrdiff_t m_flNextAttack = 0x105C; // GameTime_t
    constexpr std::ptrdiff_t m_hOriginalThrower = 0x1060; // CHandle<C_CSPlayerPawn>
}

namespace C_BaseModelEntity { // C_BaseEntity
    constexpr std::ptrdiff_t m_CRenderComponent = 0xA10; // CRenderComponent*
    constexpr std::ptrdiff_t m_CHitboxComponent = 0xA18; // CHitboxComponent
    constexpr std::ptrdiff_t m_bInitModelEffects = 0xA60; // bool
    constexpr std::ptrdiff_t m_bIsStaticProp = 0xA61; // bool
    constexpr std::ptrdiff_t m_nLastAddDecal = 0xA64; // int32_t
    constexpr std::ptrdiff_t m_nDecalsAdded = 0xA68; // int32_t
    constexpr std::ptrdiff_t m_iOldHealth = 0xA6C; // int32_t
    constexpr std::ptrdiff_t m_nRenderMode = 0xA70; // RenderMode_t
    constexpr std::ptrdiff_t m_nRenderFX = 0xA71; // RenderFx_t
    constexpr std::ptrdiff_t m_bAllowFadeInView = 0xA72; // bool
    constexpr std::ptrdiff_t m_clrRender = 0xA73; // Color
    constexpr std::ptrdiff_t m_vecRenderAttributes = 0xA78; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
    constexpr std::ptrdiff_t m_bRenderToCubemaps = 0xAE0; // bool
    constexpr std::ptrdiff_t m_Collision = 0xAE8; // CCollisionProperty
    constexpr std::ptrdiff_t m_Glow = 0xB98; // CGlowProperty
    constexpr std::ptrdiff_t m_flGlowBackfaceMult = 0xBF0; // float
    constexpr std::ptrdiff_t m_fadeMinDist = 0xBF4; // float
    constexpr std::ptrdiff_t m_fadeMaxDist = 0xBF8; // float
    constexpr std::ptrdiff_t m_flFadeScale = 0xBFC; // float
    constexpr std::ptrdiff_t m_flShadowStrength = 0xC00; // float
    constexpr std::ptrdiff_t m_nObjectCulling = 0xC04; // uint8_t
    constexpr std::ptrdiff_t m_nAddDecal = 0xC08; // int32_t
    constexpr std::ptrdiff_t m_vDecalPosition = 0xC0C; // Vector
    constexpr std::ptrdiff_t m_vDecalForwardAxis = 0xC18; // Vector
    constexpr std::ptrdiff_t m_flDecalHealBloodRate = 0xC24; // float
    constexpr std::ptrdiff_t m_flDecalHealHeightRate = 0xC28; // float
    constexpr std::ptrdiff_t m_ConfigEntitiesToPropagateMaterialDecalsTo = 0xC30; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
    constexpr std::ptrdiff_t m_vecViewOffset = 0xC48; // CNetworkViewOffsetVector
    constexpr std::ptrdiff_t m_pClientAlphaProperty = 0xC78; // CClientAlphaProperty*
    constexpr std::ptrdiff_t m_ClientOverrideTint = 0xC80; // Color
    constexpr std::ptrdiff_t m_bUseClientOverrideTint = 0xC84; // bool
}

namespace C_BasePlayerPawn { // C_BaseCombatCharacter
    constexpr std::ptrdiff_t m_pWeaponServices = 0x10A8; // CPlayer_WeaponServices*
    constexpr std::ptrdiff_t m_pItemServices = 0x10B0; // CPlayer_ItemServices*
    constexpr std::ptrdiff_t m_pAutoaimServices = 0x10B8; // CPlayer_AutoaimServices*
    constexpr std::ptrdiff_t m_pObserverServices = 0x10C0; // CPlayer_ObserverServices*
    constexpr std::ptrdiff_t m_pWaterServices = 0x10C8; // CPlayer_WaterServices*
    constexpr std::ptrdiff_t m_pUseServices = 0x10D0; // CPlayer_UseServices*
    constexpr std::ptrdiff_t m_pFlashlightServices = 0x10D8; // CPlayer_FlashlightServices*
    constexpr std::ptrdiff_t m_pCameraServices = 0x10E0; // CPlayer_CameraServices*
    constexpr std::ptrdiff_t m_pMovementServices = 0x10E8; // CPlayer_MovementServices*
    constexpr std::ptrdiff_t m_ServerViewAngleChanges = 0x10F8; // C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
    constexpr std::ptrdiff_t m_nHighestConsumedServerViewAngleChangeIndex = 0x1148; // uint32_t
    constexpr std::ptrdiff_t v_angle = 0x114C; // QAngle
    constexpr std::ptrdiff_t v_anglePrevious = 0x1158; // QAngle
    constexpr std::ptrdiff_t m_iHideHUD = 0x1164; // uint32_t
    constexpr std::ptrdiff_t m_skybox3d = 0x1168; // sky3dparams_t
    constexpr std::ptrdiff_t m_flDeathTime = 0x11F8; // GameTime_t
    constexpr std::ptrdiff_t m_vecPredictionError = 0x11FC; // Vector
    constexpr std::ptrdiff_t m_flPredictionErrorTime = 0x1208; // GameTime_t
    constexpr std::ptrdiff_t m_vecLastCameraSetupLocalOrigin = 0x120C; // Vector
    constexpr std::ptrdiff_t m_flLastCameraSetupTime = 0x1218; // GameTime_t
    constexpr std::ptrdiff_t m_flFOVSensitivityAdjust = 0x121C; // float
    constexpr std::ptrdiff_t m_flMouseSensitivity = 0x1220; // float
    constexpr std::ptrdiff_t m_vOldOrigin = 0x1224; // Vector
    constexpr std::ptrdiff_t m_flOldSimulationTime = 0x1230; // float
    constexpr std::ptrdiff_t m_nLastExecutedCommandNumber = 0x1234; // int32_t
    constexpr std::ptrdiff_t m_nLastExecutedCommandTick = 0x1238; // int32_t
    constexpr std::ptrdiff_t m_hController = 0x123C; // CHandle<CBasePlayerController>
    constexpr std::ptrdiff_t m_bIsSwappingToPredictableController = 0x1240; // bool
}

namespace C_BasePlayerWeapon { // C_EconEntity
    constexpr std::ptrdiff_t m_nNextPrimaryAttackTick = 0x1560; // GameTick_t
    constexpr std::ptrdiff_t m_flNextPrimaryAttackTickRatio = 0x1564; // float
    constexpr std::ptrdiff_t m_nNextSecondaryAttackTick = 0x1568; // GameTick_t
    constexpr std::ptrdiff_t m_flNextSecondaryAttackTickRatio = 0x156C; // float
    constexpr std::ptrdiff_t m_iClip1 = 0x1570; // int32_t
    constexpr std::ptrdiff_t m_iClip2 = 0x1574; // int32_t
    constexpr std::ptrdiff_t m_pReserveAmmo = 0x1578; // int32_t[2]
}

namespace C_BasePropDoor { // C_DynamicProp
    constexpr std::ptrdiff_t m_eDoorState = 0x10F8; // DoorState_t
    constexpr std::ptrdiff_t m_modelChanged = 0x10FC; // bool
    constexpr std::ptrdiff_t m_bLocked = 0x10FD; // bool
    constexpr std::ptrdiff_t m_closedPosition = 0x1100; // Vector
    constexpr std::ptrdiff_t m_closedAngles = 0x110C; // QAngle
    constexpr std::ptrdiff_t m_hMaster = 0x1118; // CHandle<C_BasePropDoor>
    constexpr std::ptrdiff_t m_vWhereToSetLightingOrigin = 0x111C; // Vector
}

namespace C_BaseToggle { // C_BaseModelEntity
}

namespace C_BaseTrigger { // C_BaseToggle
    constexpr std::ptrdiff_t m_bDisabled = 0xCC0; // bool
    constexpr std::ptrdiff_t m_bClientSidePredicted = 0xCC1; // bool
}

namespace C_BaseViewModel { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_vecLastFacing = 0xE88; // Vector
    constexpr std::ptrdiff_t m_nViewModelIndex = 0xE94; // uint32_t
    constexpr std::ptrdiff_t m_nAnimationParity = 0xE98; // uint32_t
    constexpr std::ptrdiff_t m_flAnimationStartTime = 0xE9C; // float
    constexpr std::ptrdiff_t m_hWeapon = 0xEA0; // CHandle<C_BasePlayerWeapon>
    constexpr std::ptrdiff_t m_sVMName = 0xEA8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sAnimationPrefix = 0xEB0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hWeaponModel = 0xEB8; // CHandle<C_ViewmodelWeapon>
    constexpr std::ptrdiff_t m_iCameraAttachment = 0xEBC; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_vecLastCameraAngles = 0xEC0; // QAngle
    constexpr std::ptrdiff_t m_previousElapsedDuration = 0xECC; // float
    constexpr std::ptrdiff_t m_previousCycle = 0xED0; // float
    constexpr std::ptrdiff_t m_nOldAnimationParity = 0xED4; // int32_t
    constexpr std::ptrdiff_t m_hOldLayerSequence = 0xED8; // HSequence
    constexpr std::ptrdiff_t m_oldLayer = 0xEDC; // int32_t
    constexpr std::ptrdiff_t m_oldLayerStartTime = 0xEE0; // float
    constexpr std::ptrdiff_t m_hControlPanel = 0xEE4; // CHandle<C_BaseEntity>
}

namespace C_Beam { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_flFrameRate = 0xCC0; // float
    constexpr std::ptrdiff_t m_flHDRColorScale = 0xCC4; // float
    constexpr std::ptrdiff_t m_flFireTime = 0xCC8; // GameTime_t
    constexpr std::ptrdiff_t m_flDamage = 0xCCC; // float
    constexpr std::ptrdiff_t m_nNumBeamEnts = 0xCD0; // uint8_t
    constexpr std::ptrdiff_t m_queryHandleHalo = 0xCD4; // int32_t
    constexpr std::ptrdiff_t m_hBaseMaterial = 0xCF8; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_nHaloIndex = 0xD00; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_nBeamType = 0xD08; // BeamType_t
    constexpr std::ptrdiff_t m_nBeamFlags = 0xD0C; // uint32_t
    constexpr std::ptrdiff_t m_hAttachEntity = 0xD10; // CHandle<C_BaseEntity>[10]
    constexpr std::ptrdiff_t m_nAttachIndex = 0xD38; // AttachmentHandle_t[10]
    constexpr std::ptrdiff_t m_fWidth = 0xD44; // float
    constexpr std::ptrdiff_t m_fEndWidth = 0xD48; // float
    constexpr std::ptrdiff_t m_fFadeLength = 0xD4C; // float
    constexpr std::ptrdiff_t m_fHaloScale = 0xD50; // float
    constexpr std::ptrdiff_t m_fAmplitude = 0xD54; // float
    constexpr std::ptrdiff_t m_fStartFrame = 0xD58; // float
    constexpr std::ptrdiff_t m_fSpeed = 0xD5C; // float
    constexpr std::ptrdiff_t m_flFrame = 0xD60; // float
    constexpr std::ptrdiff_t m_nClipStyle = 0xD64; // BeamClipStyle_t
    constexpr std::ptrdiff_t m_bTurnedOff = 0xD68; // bool
    constexpr std::ptrdiff_t m_vecEndPos = 0xD6C; // Vector
    constexpr std::ptrdiff_t m_hEndEntity = 0xD78; // CHandle<C_BaseEntity>
}

namespace C_Breakable { // C_BaseModelEntity
}

namespace C_BreakableProp { // CBaseProp
    constexpr std::ptrdiff_t m_OnBreak = 0xEC8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnHealthChanged = 0xEF0; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnTakeDamage = 0xF18; // CEntityIOOutput
    constexpr std::ptrdiff_t m_impactEnergyScale = 0xF40; // float
    constexpr std::ptrdiff_t m_iMinHealthDmg = 0xF44; // int32_t
    constexpr std::ptrdiff_t m_flPressureDelay = 0xF48; // float
    constexpr std::ptrdiff_t m_hBreaker = 0xF4C; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_PerformanceMode = 0xF50; // PerformanceMode_t
    constexpr std::ptrdiff_t m_flDmgModBullet = 0xF54; // float
    constexpr std::ptrdiff_t m_flDmgModClub = 0xF58; // float
    constexpr std::ptrdiff_t m_flDmgModExplosive = 0xF5C; // float
    constexpr std::ptrdiff_t m_flDmgModFire = 0xF60; // float
    constexpr std::ptrdiff_t m_iszPhysicsDamageTableName = 0xF68; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszBasePropData = 0xF70; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iInteractions = 0xF78; // int32_t
    constexpr std::ptrdiff_t m_flPreventDamageBeforeTime = 0xF7C; // GameTime_t
    constexpr std::ptrdiff_t m_bHasBreakPiecesOrCommands = 0xF80; // bool
    constexpr std::ptrdiff_t m_explodeDamage = 0xF84; // float
    constexpr std::ptrdiff_t m_explodeRadius = 0xF88; // float
    constexpr std::ptrdiff_t m_explosionDelay = 0xF90; // float
    constexpr std::ptrdiff_t m_explosionBuildupSound = 0xF98; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_explosionCustomEffect = 0xFA0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_explosionCustomSound = 0xFA8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_explosionModifier = 0xFB0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hPhysicsAttacker = 0xFB8; // CHandle<C_BasePlayerPawn>
    constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0xFBC; // GameTime_t
    constexpr std::ptrdiff_t m_flDefaultFadeScale = 0xFC0; // float
    constexpr std::ptrdiff_t m_hLastAttacker = 0xFC4; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_hFlareEnt = 0xFC8; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_noGhostCollision = 0xFCC; // bool
}

namespace C_BulletHitModel { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_matLocal = 0xE80; // matrix3x4_t
    constexpr std::ptrdiff_t m_iBoneIndex = 0xEB0; // int32_t
    constexpr std::ptrdiff_t m_hPlayerParent = 0xEB4; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_bIsHit = 0xEB8; // bool
    constexpr std::ptrdiff_t m_flTimeCreated = 0xEBC; // float
    constexpr std::ptrdiff_t m_vecStartPos = 0xEC0; // Vector
}

namespace C_C4 { // C_CSWeaponBase
    constexpr std::ptrdiff_t m_szScreenText = 0x1A10; // char[32]
    constexpr std::ptrdiff_t m_activeLightParticleIndex = 0x1A30; // ParticleIndex_t
    constexpr std::ptrdiff_t m_eActiveLightEffect = 0x1A34; // C4LightEffect_t
    constexpr std::ptrdiff_t m_bStartedArming = 0x1A38; // bool
    constexpr std::ptrdiff_t m_fArmedTime = 0x1A3C; // GameTime_t
    constexpr std::ptrdiff_t m_bBombPlacedAnimation = 0x1A40; // bool
    constexpr std::ptrdiff_t m_bIsPlantingViaUse = 0x1A41; // bool
    constexpr std::ptrdiff_t m_entitySpottedState = 0x1A48; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_nSpotRules = 0x1A60; // int32_t
    constexpr std::ptrdiff_t m_bPlayedArmingBeeps = 0x1A64; // bool[7]
    constexpr std::ptrdiff_t m_bBombPlanted = 0x1A6B; // bool
    constexpr std::ptrdiff_t m_bDroppedFromDeath = 0x1A6C; // bool
}

namespace C_CSGOViewModel { // C_PredictedViewModel
    constexpr std::ptrdiff_t m_bShouldIgnoreOffsetAndAccuracy = 0xF10; // bool
    constexpr std::ptrdiff_t m_nWeaponParity = 0xF14; // uint32_t
    constexpr std::ptrdiff_t m_nOldWeaponParity = 0xF18; // uint32_t
    constexpr std::ptrdiff_t m_nLastKnownAssociatedWeaponEntIndex = 0xF1C; // CEntityIndex
    constexpr std::ptrdiff_t m_bNeedToQueueHighResComposite = 0xF20; // bool
    constexpr std::ptrdiff_t m_vLoweredWeaponOffset = 0xF64; // QAngle
}

namespace C_CSGO_CounterTerroristTeamIntroCamera { // C_CSGO_TeamPreviewCamera
}

namespace C_CSGO_CounterTerroristWingmanIntroCamera { // C_CSGO_TeamPreviewCamera
}

namespace C_CSGO_EndOfMatchCamera { // C_CSGO_TeamPreviewCamera
}

namespace C_CSGO_EndOfMatchCharacterPosition { // C_CSGO_TeamPreviewCharacterPosition
}

namespace C_CSGO_EndOfMatchLineupEnd { // C_CSGO_EndOfMatchLineupEndpoint
}

namespace C_CSGO_EndOfMatchLineupEndpoint { // C_BaseEntity
}

namespace C_CSGO_EndOfMatchLineupStart { // C_CSGO_EndOfMatchLineupEndpoint
}

namespace C_CSGO_MapPreviewCameraPath { // C_BaseEntity
    constexpr std::ptrdiff_t m_flZFar = 0x540; // float
    constexpr std::ptrdiff_t m_flZNear = 0x544; // float
    constexpr std::ptrdiff_t m_bLoop = 0x548; // bool
    constexpr std::ptrdiff_t m_bVerticalFOV = 0x549; // bool
    constexpr std::ptrdiff_t m_bConstantSpeed = 0x54A; // bool
    constexpr std::ptrdiff_t m_flDuration = 0x54C; // float
    constexpr std::ptrdiff_t m_flPathLength = 0x590; // float
    constexpr std::ptrdiff_t m_flPathDuration = 0x594; // float
}

namespace C_CSGO_MapPreviewCameraPathNode { // C_BaseEntity
    constexpr std::ptrdiff_t m_szParentPathUniqueID = 0x540; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nPathIndex = 0x548; // int32_t
    constexpr std::ptrdiff_t m_vInTangentLocal = 0x54C; // Vector
    constexpr std::ptrdiff_t m_vOutTangentLocal = 0x558; // Vector
    constexpr std::ptrdiff_t m_flFOV = 0x564; // float
    constexpr std::ptrdiff_t m_flSpeed = 0x568; // float
    constexpr std::ptrdiff_t m_flEaseIn = 0x56C; // float
    constexpr std::ptrdiff_t m_flEaseOut = 0x570; // float
    constexpr std::ptrdiff_t m_vInTangentWorld = 0x574; // Vector
    constexpr std::ptrdiff_t m_vOutTangentWorld = 0x580; // Vector
}

namespace C_CSGO_PreviewModel { // C_BaseFlex
    constexpr std::ptrdiff_t m_animgraph = 0x1018; // CUtlString
    constexpr std::ptrdiff_t m_animgraphCharacterModeString = 0x1020; // CUtlString
    constexpr std::ptrdiff_t m_defaultAnim = 0x1028; // CUtlString
    constexpr std::ptrdiff_t m_nDefaultAnimLoopMode = 0x1030; // AnimLoopMode_t
    constexpr std::ptrdiff_t m_flInitialModelScale = 0x1034; // float
}

namespace C_CSGO_PreviewModelAlias_csgo_item_previewmodel { // C_CSGO_PreviewModel
}

namespace C_CSGO_PreviewPlayer { // C_CSPlayerPawn
    constexpr std::ptrdiff_t m_animgraph = 0x23B8; // CUtlString
    constexpr std::ptrdiff_t m_animgraphCharacterModeString = 0x23C0; // CUtlString
    constexpr std::ptrdiff_t m_flInitialModelScale = 0x23C8; // float
}

namespace C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel { // C_CSGO_PreviewPlayer
}

namespace C_CSGO_TeamIntroCharacterPosition { // C_CSGO_TeamPreviewCharacterPosition
}

namespace C_CSGO_TeamIntroCounterTerroristPosition { // C_CSGO_TeamIntroCharacterPosition
}

namespace C_CSGO_TeamIntroTerroristPosition { // C_CSGO_TeamIntroCharacterPosition
}

namespace C_CSGO_TeamPreviewCamera { // C_CSGO_MapPreviewCameraPath
    constexpr std::ptrdiff_t m_nVariant = 0x5A0; // int32_t
    constexpr std::ptrdiff_t m_bDofEnabled = 0x5A4; // bool
    constexpr std::ptrdiff_t m_flDofNearBlurry = 0x5A8; // float
    constexpr std::ptrdiff_t m_flDofNearCrisp = 0x5AC; // float
    constexpr std::ptrdiff_t m_flDofFarCrisp = 0x5B0; // float
    constexpr std::ptrdiff_t m_flDofFarBlurry = 0x5B4; // float
    constexpr std::ptrdiff_t m_flDofTiltToGround = 0x5B8; // float
}

namespace C_CSGO_TeamPreviewCharacterPosition { // C_BaseEntity
    constexpr std::ptrdiff_t m_nVariant = 0x540; // int32_t
    constexpr std::ptrdiff_t m_nRandom = 0x544; // int32_t
    constexpr std::ptrdiff_t m_nOrdinal = 0x548; // int32_t
    constexpr std::ptrdiff_t m_sWeaponName = 0x550; // CUtlString
    constexpr std::ptrdiff_t m_xuid = 0x558; // uint64_t
    constexpr std::ptrdiff_t m_agentItem = 0x560; // C_EconItemView
    constexpr std::ptrdiff_t m_glovesItem = 0x9A8; // C_EconItemView
    constexpr std::ptrdiff_t m_weaponItem = 0xDF0; // C_EconItemView
}

namespace C_CSGO_TeamPreviewModel { // C_CSGO_PreviewPlayer
}

namespace C_CSGO_TeamSelectCamera { // C_CSGO_TeamPreviewCamera
}

namespace C_CSGO_TeamSelectCharacterPosition { // C_CSGO_TeamPreviewCharacterPosition
}

namespace C_CSGO_TeamSelectCounterTerroristPosition { // C_CSGO_TeamSelectCharacterPosition
}

namespace C_CSGO_TeamSelectTerroristPosition { // C_CSGO_TeamSelectCharacterPosition
}

namespace C_CSGO_TerroristTeamIntroCamera { // C_CSGO_TeamPreviewCamera
}

namespace C_CSGO_TerroristWingmanIntroCamera { // C_CSGO_TeamPreviewCamera
}

namespace C_CSGameRules { // C_TeamplayRules
    constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
    constexpr std::ptrdiff_t m_bFreezePeriod = 0x30; // bool
    constexpr std::ptrdiff_t m_bWarmupPeriod = 0x31; // bool
    constexpr std::ptrdiff_t m_fWarmupPeriodEnd = 0x34; // GameTime_t
    constexpr std::ptrdiff_t m_fWarmupPeriodStart = 0x38; // GameTime_t
    constexpr std::ptrdiff_t m_nTotalPausedTicks = 0x3C; // int32_t
    constexpr std::ptrdiff_t m_nPauseStartTick = 0x40; // int32_t
    constexpr std::ptrdiff_t m_bServerPaused = 0x44; // bool
    constexpr std::ptrdiff_t m_bGamePaused = 0x45; // bool
    constexpr std::ptrdiff_t m_bTerroristTimeOutActive = 0x46; // bool
    constexpr std::ptrdiff_t m_bCTTimeOutActive = 0x47; // bool
    constexpr std::ptrdiff_t m_flTerroristTimeOutRemaining = 0x48; // float
    constexpr std::ptrdiff_t m_flCTTimeOutRemaining = 0x4C; // float
    constexpr std::ptrdiff_t m_nTerroristTimeOuts = 0x50; // int32_t
    constexpr std::ptrdiff_t m_nCTTimeOuts = 0x54; // int32_t
    constexpr std::ptrdiff_t m_bTechnicalTimeOut = 0x58; // bool
    constexpr std::ptrdiff_t m_bMatchWaitingForResume = 0x59; // bool
    constexpr std::ptrdiff_t m_iRoundTime = 0x5C; // int32_t
    constexpr std::ptrdiff_t m_fMatchStartTime = 0x60; // float
    constexpr std::ptrdiff_t m_fRoundStartTime = 0x64; // GameTime_t
    constexpr std::ptrdiff_t m_flRestartRoundTime = 0x68; // GameTime_t
    constexpr std::ptrdiff_t m_bGameRestart = 0x6C; // bool
    constexpr std::ptrdiff_t m_flGameStartTime = 0x70; // float
    constexpr std::ptrdiff_t m_timeUntilNextPhaseStarts = 0x74; // float
    constexpr std::ptrdiff_t m_gamePhase = 0x78; // int32_t
    constexpr std::ptrdiff_t m_totalRoundsPlayed = 0x7C; // int32_t
    constexpr std::ptrdiff_t m_nRoundsPlayedThisPhase = 0x80; // int32_t
    constexpr std::ptrdiff_t m_nOvertimePlaying = 0x84; // int32_t
    constexpr std::ptrdiff_t m_iHostagesRemaining = 0x88; // int32_t
    constexpr std::ptrdiff_t m_bAnyHostageReached = 0x8C; // bool
    constexpr std::ptrdiff_t m_bMapHasBombTarget = 0x8D; // bool
    constexpr std::ptrdiff_t m_bMapHasRescueZone = 0x8E; // bool
    constexpr std::ptrdiff_t m_bMapHasBuyZone = 0x8F; // bool
    constexpr std::ptrdiff_t m_bIsQueuedMatchmaking = 0x90; // bool
    constexpr std::ptrdiff_t m_nQueuedMatchmakingMode = 0x94; // int32_t
    constexpr std::ptrdiff_t m_bIsValveDS = 0x98; // bool
    constexpr std::ptrdiff_t m_bLogoMap = 0x99; // bool
    constexpr std::ptrdiff_t m_bPlayAllStepSoundsOnServer = 0x9A; // bool
    constexpr std::ptrdiff_t m_iSpectatorSlotCount = 0x9C; // int32_t
    constexpr std::ptrdiff_t m_MatchDevice = 0xA0; // int32_t
    constexpr std::ptrdiff_t m_bHasMatchStarted = 0xA4; // bool
    constexpr std::ptrdiff_t m_nNextMapInMapgroup = 0xA8; // int32_t
    constexpr std::ptrdiff_t m_szTournamentEventName = 0xAC; // char[512]
    constexpr std::ptrdiff_t m_szTournamentEventStage = 0x2AC; // char[512]
    constexpr std::ptrdiff_t m_szMatchStatTxt = 0x4AC; // char[512]
    constexpr std::ptrdiff_t m_szTournamentPredictionsTxt = 0x6AC; // char[512]
    constexpr std::ptrdiff_t m_nTournamentPredictionsPct = 0x8AC; // int32_t
    constexpr std::ptrdiff_t m_flCMMItemDropRevealStartTime = 0x8B0; // GameTime_t
    constexpr std::ptrdiff_t m_flCMMItemDropRevealEndTime = 0x8B4; // GameTime_t
    constexpr std::ptrdiff_t m_bIsDroppingItems = 0x8B8; // bool
    constexpr std::ptrdiff_t m_bIsQuestEligible = 0x8B9; // bool
    constexpr std::ptrdiff_t m_bIsHltvActive = 0x8BA; // bool
    constexpr std::ptrdiff_t m_nGuardianModeWaveNumber = 0x8BC; // int32_t
    constexpr std::ptrdiff_t m_nGuardianModeSpecialKillsRemaining = 0x8C0; // int32_t
    constexpr std::ptrdiff_t m_nGuardianModeSpecialWeaponNeeded = 0x8C4; // int32_t
    constexpr std::ptrdiff_t m_nGuardianGrenadesToGiveBots = 0x8C8; // int32_t
    constexpr std::ptrdiff_t m_nNumHeaviesToSpawn = 0x8CC; // int32_t
    constexpr std::ptrdiff_t m_numGlobalGiftsGiven = 0x8D0; // uint32_t
    constexpr std::ptrdiff_t m_numGlobalGifters = 0x8D4; // uint32_t
    constexpr std::ptrdiff_t m_numGlobalGiftsPeriodSeconds = 0x8D8; // uint32_t
    constexpr std::ptrdiff_t m_arrFeaturedGiftersAccounts = 0x8DC; // uint32_t[4]
    constexpr std::ptrdiff_t m_arrFeaturedGiftersGifts = 0x8EC; // uint32_t[4]
    constexpr std::ptrdiff_t m_arrProhibitedItemIndices = 0x8FC; // uint16_t[100]
    constexpr std::ptrdiff_t m_arrTournamentActiveCasterAccounts = 0x9C4; // uint32_t[4]
    constexpr std::ptrdiff_t m_numBestOfMaps = 0x9D4; // int32_t
    constexpr std::ptrdiff_t m_nHalloweenMaskListSeed = 0x9D8; // int32_t
    constexpr std::ptrdiff_t m_bBombDropped = 0x9DC; // bool
    constexpr std::ptrdiff_t m_bBombPlanted = 0x9DD; // bool
    constexpr std::ptrdiff_t m_iRoundWinStatus = 0x9E0; // int32_t
    constexpr std::ptrdiff_t m_eRoundWinReason = 0x9E4; // int32_t
    constexpr std::ptrdiff_t m_bTCantBuy = 0x9E8; // bool
    constexpr std::ptrdiff_t m_bCTCantBuy = 0x9E9; // bool
    constexpr std::ptrdiff_t m_flGuardianBuyUntilTime = 0x9EC; // GameTime_t
    constexpr std::ptrdiff_t m_iMatchStats_RoundResults = 0x9F0; // int32_t[30]
    constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_CT = 0xA68; // int32_t[30]
    constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_T = 0xAE0; // int32_t[30]
    constexpr std::ptrdiff_t m_TeamRespawnWaveTimes = 0xB58; // float[32]
    constexpr std::ptrdiff_t m_flNextRespawnWave = 0xBD8; // GameTime_t[32]
    constexpr std::ptrdiff_t m_nServerQuestID = 0xC58; // int32_t
    constexpr std::ptrdiff_t m_vMinimapMins = 0xC5C; // Vector
    constexpr std::ptrdiff_t m_vMinimapMaxs = 0xC68; // Vector
    constexpr std::ptrdiff_t m_MinimapVerticalSectionHeights = 0xC74; // float[8]
    constexpr std::ptrdiff_t m_bDontIncrementCoopWave = 0xC94; // bool
    constexpr std::ptrdiff_t m_bSpawnedTerrorHuntHeavy = 0xC95; // bool
    constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteTypes = 0xC98; // int32_t[10]
    constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteOptions = 0xCC0; // int32_t[10]
    constexpr std::ptrdiff_t m_nEndMatchMapVoteWinner = 0xCE8; // int32_t
    constexpr std::ptrdiff_t m_iNumConsecutiveCTLoses = 0xCEC; // int32_t
    constexpr std::ptrdiff_t m_iNumConsecutiveTerroristLoses = 0xCF0; // int32_t
    constexpr std::ptrdiff_t m_bMarkClientStopRecordAtRoundEnd = 0xD10; // bool
    constexpr std::ptrdiff_t m_nMatchAbortedEarlyReason = 0xD68; // int32_t
    constexpr std::ptrdiff_t m_bHasTriggeredRoundStartMusic = 0xD6C; // bool
    constexpr std::ptrdiff_t m_bHasTriggeredCoopSpawnReset = 0xD6D; // bool
    constexpr std::ptrdiff_t m_bSwitchingTeamsAtRoundReset = 0xD6E; // bool
    constexpr std::ptrdiff_t m_pGameModeRules = 0xD88; // CCSGameModeRules*
    constexpr std::ptrdiff_t m_RetakeRules = 0xD90; // C_RetakeGameRules
    constexpr std::ptrdiff_t m_nMatchEndCount = 0xEA8; // uint8_t
    constexpr std::ptrdiff_t m_nTTeamIntroVariant = 0xEAC; // int32_t
    constexpr std::ptrdiff_t m_nCTTeamIntroVariant = 0xEB0; // int32_t
    constexpr std::ptrdiff_t m_bTeamIntroPeriod = 0xEB4; // bool
    constexpr std::ptrdiff_t m_flLastPerfSampleTime = 0x4EC0; // double
}

namespace C_CSGameRulesProxy { // C_GameRulesProxy
    constexpr std::ptrdiff_t m_pGameRules = 0x540; // C_CSGameRules*
}

namespace C_CSMinimapBoundary { // C_BaseEntity
}

namespace C_CSObserverPawn { // C_CSPlayerPawnBase
    constexpr std::ptrdiff_t m_hDetectParentChange = 0x16B8; // CEntityHandle
}

namespace C_CSPlayerPawn { // C_CSPlayerPawnBase
    constexpr std::ptrdiff_t m_pBulletServices = 0x16B8; // CCSPlayer_BulletServices*
    constexpr std::ptrdiff_t m_pHostageServices = 0x16C0; // CCSPlayer_HostageServices*
    constexpr std::ptrdiff_t m_pBuyServices = 0x16C8; // CCSPlayer_BuyServices*
    constexpr std::ptrdiff_t m_pGlowServices = 0x16D0; // CCSPlayer_GlowServices*
    constexpr std::ptrdiff_t m_pActionTrackingServices = 0x16D8; // CCSPlayer_ActionTrackingServices*
    constexpr std::ptrdiff_t m_flHealthShotBoostExpirationTime = 0x16E0; // GameTime_t
    constexpr std::ptrdiff_t m_flLastFiredWeaponTime = 0x16E4; // GameTime_t
    constexpr std::ptrdiff_t m_bHasFemaleVoice = 0x16E8; // bool
    constexpr std::ptrdiff_t m_flLandseconds = 0x16EC; // float
    constexpr std::ptrdiff_t m_flOldFallVelocity = 0x16F0; // float
    constexpr std::ptrdiff_t m_szLastPlaceName = 0x16F4; // char[18]
    constexpr std::ptrdiff_t m_bPrevDefuser = 0x1706; // bool
    constexpr std::ptrdiff_t m_bPrevHelmet = 0x1707; // bool
    constexpr std::ptrdiff_t m_nPrevArmorVal = 0x1708; // int32_t
    constexpr std::ptrdiff_t m_nPrevGrenadeAmmoCount = 0x170C; // int32_t
    constexpr std::ptrdiff_t m_unPreviousWeaponHash = 0x1710; // uint32_t
    constexpr std::ptrdiff_t m_unWeaponHash = 0x1714; // uint32_t
    constexpr std::ptrdiff_t m_bInBuyZone = 0x1718; // bool
    constexpr std::ptrdiff_t m_bPreviouslyInBuyZone = 0x1719; // bool
    constexpr std::ptrdiff_t m_aimPunchAngle = 0x171C; // QAngle
    constexpr std::ptrdiff_t m_aimPunchAngleVel = 0x1728; // QAngle
    constexpr std::ptrdiff_t m_aimPunchTickBase = 0x1734; // int32_t
    constexpr std::ptrdiff_t m_aimPunchTickFraction = 0x1738; // float
    constexpr std::ptrdiff_t m_aimPunchCache = 0x1740; // CUtlVector<QAngle>
    constexpr std::ptrdiff_t m_bInLanding = 0x1760; // bool
    constexpr std::ptrdiff_t m_flLandingTime = 0x1764; // float
    constexpr std::ptrdiff_t m_bInHostageRescueZone = 0x1768; // bool
    constexpr std::ptrdiff_t m_bInBombZone = 0x1769; // bool
    constexpr std::ptrdiff_t m_bIsBuyMenuOpen = 0x176A; // bool
    constexpr std::ptrdiff_t m_flTimeOfLastInjury = 0x176C; // GameTime_t
    constexpr std::ptrdiff_t m_flNextSprayDecalTime = 0x1770; // GameTime_t
    constexpr std::ptrdiff_t m_iRetakesOffering = 0x1888; // int32_t
    constexpr std::ptrdiff_t m_iRetakesOfferingCard = 0x188C; // int32_t
    constexpr std::ptrdiff_t m_bRetakesHasDefuseKit = 0x1890; // bool
    constexpr std::ptrdiff_t m_bRetakesMVPLastRound = 0x1891; // bool
    constexpr std::ptrdiff_t m_iRetakesMVPBoostItem = 0x1894; // int32_t
    constexpr std::ptrdiff_t m_RetakesMVPBoostExtraUtility = 0x1898; // loadout_slot_t
    constexpr std::ptrdiff_t m_bNeedToReApplyGloves = 0x18B8; // bool
    constexpr std::ptrdiff_t m_EconGloves = 0x18C0; // C_EconItemView
    constexpr std::ptrdiff_t m_bMustSyncRagdollState = 0x1D08; // bool
    constexpr std::ptrdiff_t m_nRagdollDamageBone = 0x1D0C; // int32_t
    constexpr std::ptrdiff_t m_vRagdollDamageForce = 0x1D10; // Vector
    constexpr std::ptrdiff_t m_vRagdollDamagePosition = 0x1D1C; // Vector
    constexpr std::ptrdiff_t m_szRagdollDamageWeaponName = 0x1D28; // char[64]
    constexpr std::ptrdiff_t m_bRagdollDamageHeadshot = 0x1D68; // bool
    constexpr std::ptrdiff_t m_vRagdollServerOrigin = 0x1D6C; // Vector
    constexpr std::ptrdiff_t m_bLastHeadBoneTransformIsValid = 0x2380; // bool
    constexpr std::ptrdiff_t m_lastLandTime = 0x2384; // GameTime_t
    constexpr std::ptrdiff_t m_bOnGroundLastTick = 0x2388; // bool
    constexpr std::ptrdiff_t m_qDeathEyeAngles = 0x23A4; // QAngle
    constexpr std::ptrdiff_t m_bSkipOneHeadConstraintUpdate = 0x23B0; // bool
}

namespace C_CSPlayerPawnBase { // C_BasePlayerPawn
    constexpr std::ptrdiff_t m_pPingServices = 0x1268; // CCSPlayer_PingServices*
    constexpr std::ptrdiff_t m_pViewModelServices = 0x1270; // CPlayer_ViewModelServices*
    constexpr std::ptrdiff_t m_fRenderingClipPlane = 0x1280; // float[4]
    constexpr std::ptrdiff_t m_nLastClipPlaneSetupFrame = 0x1290; // int32_t
    constexpr std::ptrdiff_t m_vecLastClipCameraPos = 0x1294; // Vector
    constexpr std::ptrdiff_t m_vecLastClipCameraForward = 0x12A0; // Vector
    constexpr std::ptrdiff_t m_bClipHitStaticWorld = 0x12AC; // bool
    constexpr std::ptrdiff_t m_bCachedPlaneIsValid = 0x12AD; // bool
    constexpr std::ptrdiff_t m_pClippingWeapon = 0x12B0; // C_CSWeaponBase*
    constexpr std::ptrdiff_t m_previousPlayerState = 0x12B8; // CSPlayerState
    constexpr std::ptrdiff_t m_flLastCollisionCeiling = 0x12BC; // float
    constexpr std::ptrdiff_t m_flLastCollisionCeilingChangeTime = 0x12C0; // float
    constexpr std::ptrdiff_t m_grenadeParameterStashTime = 0x12E0; // GameTime_t
    constexpr std::ptrdiff_t m_bGrenadeParametersStashed = 0x12E4; // bool
    constexpr std::ptrdiff_t m_angStashedShootAngles = 0x12E8; // QAngle
    constexpr std::ptrdiff_t m_vecStashedGrenadeThrowPosition = 0x12F4; // Vector
    constexpr std::ptrdiff_t m_vecStashedVelocity = 0x1300; // Vector
    constexpr std::ptrdiff_t m_angShootAngleHistory = 0x130C; // QAngle[2]
    constexpr std::ptrdiff_t m_vecThrowPositionHistory = 0x1324; // Vector[2]
    constexpr std::ptrdiff_t m_vecVelocityHistory = 0x133C; // Vector[2]
    constexpr std::ptrdiff_t m_thirdPersonHeading = 0x1358; // QAngle
    constexpr std::ptrdiff_t m_flSlopeDropOffset = 0x1370; // float
    constexpr std::ptrdiff_t m_flSlopeDropHeight = 0x1380; // float
    constexpr std::ptrdiff_t m_vHeadConstraintOffset = 0x1390; // Vector
    constexpr std::ptrdiff_t m_bIsScoped = 0x13A8; // bool
    constexpr std::ptrdiff_t m_bIsWalking = 0x13A9; // bool
    constexpr std::ptrdiff_t m_bResumeZoom = 0x13AA; // bool
    constexpr std::ptrdiff_t m_iPlayerState = 0x13AC; // CSPlayerState
    constexpr std::ptrdiff_t m_bIsDefusing = 0x13B0; // bool
    constexpr std::ptrdiff_t m_bIsGrabbingHostage = 0x13B1; // bool
    constexpr std::ptrdiff_t m_iBlockingUseActionInProgress = 0x13B4; // CSPlayerBlockingUseAction_t
    constexpr std::ptrdiff_t m_bIsRescuing = 0x13B8; // bool
    constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTime = 0x13BC; // GameTime_t
    constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTimeLast = 0x13C0; // GameTime_t
    constexpr std::ptrdiff_t m_bGunGameImmunity = 0x13C4; // bool
    constexpr std::ptrdiff_t m_bHasMovedSinceSpawn = 0x13C5; // bool
    constexpr std::ptrdiff_t m_fMolotovUseTime = 0x13C8; // float
    constexpr std::ptrdiff_t m_fMolotovDamageTime = 0x13CC; // float
    constexpr std::ptrdiff_t m_nWhichBombZone = 0x13D0; // int32_t
    constexpr std::ptrdiff_t m_bInNoDefuseArea = 0x13D4; // bool
    constexpr std::ptrdiff_t m_iThrowGrenadeCounter = 0x13D8; // int32_t
    constexpr std::ptrdiff_t m_bWaitForNoAttack = 0x13DC; // bool
    constexpr std::ptrdiff_t m_flGuardianTooFarDistFrac = 0x13E0; // float
    constexpr std::ptrdiff_t m_flDetectedByEnemySensorTime = 0x13E4; // GameTime_t
    constexpr std::ptrdiff_t m_flNextGuardianTooFarWarning = 0x13E8; // float
    constexpr std::ptrdiff_t m_bSuppressGuardianTooFarWarningAudio = 0x13EC; // bool
    constexpr std::ptrdiff_t m_bKilledByTaser = 0x13ED; // bool
    constexpr std::ptrdiff_t m_iMoveState = 0x13F0; // int32_t
    constexpr std::ptrdiff_t m_bCanMoveDuringFreezePeriod = 0x13F4; // bool
    constexpr std::ptrdiff_t m_flLowerBodyYawTarget = 0x13F8; // float
    constexpr std::ptrdiff_t m_bStrafing = 0x13FC; // bool
    constexpr std::ptrdiff_t m_flLastSpawnTimeIndex = 0x1400; // GameTime_t
    constexpr std::ptrdiff_t m_flEmitSoundTime = 0x1404; // GameTime_t
    constexpr std::ptrdiff_t m_iAddonBits = 0x1408; // int32_t
    constexpr std::ptrdiff_t m_iPrimaryAddon = 0x140C; // int32_t
    constexpr std::ptrdiff_t m_iSecondaryAddon = 0x1410; // int32_t
    constexpr std::ptrdiff_t m_iProgressBarDuration = 0x1414; // int32_t
    constexpr std::ptrdiff_t m_flProgressBarStartTime = 0x1418; // float
    constexpr std::ptrdiff_t m_iDirection = 0x141C; // int32_t
    constexpr std::ptrdiff_t m_iShotsFired = 0x1420; // int32_t
    constexpr std::ptrdiff_t m_bNightVisionOn = 0x1424; // bool
    constexpr std::ptrdiff_t m_bHasNightVision = 0x1425; // bool
    constexpr std::ptrdiff_t m_flVelocityModifier = 0x1428; // float
    constexpr std::ptrdiff_t m_flHitHeading = 0x142C; // float
    constexpr std::ptrdiff_t m_nHitBodyPart = 0x1430; // int32_t
    constexpr std::ptrdiff_t m_iStartAccount = 0x1434; // int32_t
    constexpr std::ptrdiff_t m_vecIntroStartEyePosition = 0x1438; // Vector
    constexpr std::ptrdiff_t m_vecIntroStartPlayerForward = 0x1444; // Vector
    constexpr std::ptrdiff_t m_flClientDeathTime = 0x1450; // GameTime_t
    constexpr std::ptrdiff_t m_flNightVisionAlpha = 0x1454; // float
    constexpr std::ptrdiff_t m_bScreenTearFrameCaptured = 0x1458; // bool
    constexpr std::ptrdiff_t m_flFlashBangTime = 0x145C; // float
    constexpr std::ptrdiff_t m_flFlashScreenshotAlpha = 0x1460; // float
    constexpr std::ptrdiff_t m_flFlashOverlayAlpha = 0x1464; // float
    constexpr std::ptrdiff_t m_bFlashBuildUp = 0x1468; // bool
    constexpr std::ptrdiff_t m_bFlashDspHasBeenCleared = 0x1469; // bool
    constexpr std::ptrdiff_t m_bFlashScreenshotHasBeenGrabbed = 0x146A; // bool
    constexpr std::ptrdiff_t m_flFlashMaxAlpha = 0x146C; // float
    constexpr std::ptrdiff_t m_flFlashDuration = 0x1470; // float
    constexpr std::ptrdiff_t m_lastStandingPos = 0x1474; // Vector
    constexpr std::ptrdiff_t m_vecLastMuzzleFlashPos = 0x1480; // Vector
    constexpr std::ptrdiff_t m_angLastMuzzleFlashAngle = 0x148C; // QAngle
    constexpr std::ptrdiff_t m_hMuzzleFlashShape = 0x1498; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_iHealthBarRenderMaskIndex = 0x149C; // int32_t
    constexpr std::ptrdiff_t m_flHealthFadeValue = 0x14A0; // float
    constexpr std::ptrdiff_t m_flHealthFadeAlpha = 0x14A4; // float
    constexpr std::ptrdiff_t m_nMyCollisionGroup = 0x14A8; // int32_t
    constexpr std::ptrdiff_t m_ignoreLadderJumpTime = 0x14AC; // float
    constexpr std::ptrdiff_t m_ladderSurpressionTimer = 0x14B0; // CountdownTimer
    constexpr std::ptrdiff_t m_lastLadderNormal = 0x14C8; // Vector
    constexpr std::ptrdiff_t m_lastLadderPos = 0x14D4; // Vector
    constexpr std::ptrdiff_t m_flDeathCCWeight = 0x14E8; // float
    constexpr std::ptrdiff_t m_bOldIsScoped = 0x14EC; // bool
    constexpr std::ptrdiff_t m_flPrevRoundEndTime = 0x14F0; // float
    constexpr std::ptrdiff_t m_flPrevMatchEndTime = 0x14F4; // float
    constexpr std::ptrdiff_t m_unCurrentEquipmentValue = 0x14F8; // uint16_t
    constexpr std::ptrdiff_t m_unRoundStartEquipmentValue = 0x14FA; // uint16_t
    constexpr std::ptrdiff_t m_unFreezetimeEndEquipmentValue = 0x14FC; // uint16_t
    constexpr std::ptrdiff_t m_vecThirdPersonViewPositionOverride = 0x1500; // Vector
    constexpr std::ptrdiff_t m_nHeavyAssaultSuitCooldownRemaining = 0x150C; // int32_t
    constexpr std::ptrdiff_t m_ArmorValue = 0x1510; // int32_t
    constexpr std::ptrdiff_t m_angEyeAngles = 0x1518; // QAngle
    constexpr std::ptrdiff_t m_fNextThinkPushAway = 0x1530; // float
    constexpr std::ptrdiff_t m_bShouldAutobuyDMWeapons = 0x1534; // bool
    constexpr std::ptrdiff_t m_bShouldAutobuyNow = 0x1535; // bool
    constexpr std::ptrdiff_t m_bHud_MiniScoreHidden = 0x1536; // bool
    constexpr std::ptrdiff_t m_bHud_RadarHidden = 0x1537; // bool
    constexpr std::ptrdiff_t m_nLastKillerIndex = 0x1538; // CEntityIndex
    constexpr std::ptrdiff_t m_nLastConcurrentKilled = 0x153C; // int32_t
    constexpr std::ptrdiff_t m_nDeathCamMusic = 0x1540; // int32_t
    constexpr std::ptrdiff_t m_iIDEntIndex = 0x1544; // CEntityIndex
    constexpr std::ptrdiff_t m_delayTargetIDTimer = 0x1548; // CountdownTimer
    constexpr std::ptrdiff_t m_iTargetedWeaponEntIndex = 0x1560; // CEntityIndex
    constexpr std::ptrdiff_t m_iOldIDEntIndex = 0x1564; // CEntityIndex
    constexpr std::ptrdiff_t m_holdTargetIDTimer = 0x1568; // CountdownTimer
    constexpr std::ptrdiff_t m_flCurrentMusicStartTime = 0x1584; // float
    constexpr std::ptrdiff_t m_flMusicRoundStartTime = 0x1588; // float
    constexpr std::ptrdiff_t m_bDeferStartMusicOnWarmup = 0x158C; // bool
    constexpr std::ptrdiff_t m_cycleLatch = 0x1590; // int32_t
    constexpr std::ptrdiff_t m_serverIntendedCycle = 0x1594; // float
    constexpr std::ptrdiff_t m_vecPlayerPatchEconIndices = 0x1598; // uint32_t[5]
    constexpr std::ptrdiff_t m_bHideTargetID = 0x15B4; // bool
    constexpr std::ptrdiff_t m_nextTaserShakeTime = 0x15B8; // float
    constexpr std::ptrdiff_t m_firstTaserShakeTime = 0x15BC; // float
    constexpr std::ptrdiff_t m_flLastSmokeOverlayAlpha = 0x15C0; // float
    constexpr std::ptrdiff_t m_vLastSmokeOverlayColor = 0x15C4; // Vector
    constexpr std::ptrdiff_t m_nPlayerSmokedFx = 0x15D0; // ParticleIndex_t
    constexpr std::ptrdiff_t m_flNextMagDropTime = 0x15D4; // float
    constexpr std::ptrdiff_t m_nLastMagDropAttachmentIndex = 0x15D8; // int32_t
    constexpr std::ptrdiff_t m_vecBulletHitModels = 0x15E0; // CUtlVector<C_BulletHitModel*>
    constexpr std::ptrdiff_t m_vecPickupModelSlerpers = 0x15F8; // CUtlVector<C_PickUpModelSlerper*>
    constexpr std::ptrdiff_t m_vecLastAliveLocalVelocity = 0x1610; // Vector
    constexpr std::ptrdiff_t m_entitySpottedState = 0x1638; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_nSurvivalTeamNumber = 0x1650; // int32_t
    constexpr std::ptrdiff_t m_bGuardianShouldSprayCustomXMark = 0x1654; // bool
    constexpr std::ptrdiff_t m_bHasDeathInfo = 0x1655; // bool
    constexpr std::ptrdiff_t m_flDeathInfoTime = 0x1658; // float
    constexpr std::ptrdiff_t m_vecDeathInfoOrigin = 0x165C; // Vector
    constexpr std::ptrdiff_t m_bKilledByHeadshot = 0x1668; // bool
    constexpr std::ptrdiff_t m_hOriginalController = 0x166C; // CHandle<CCSPlayerController>
}

namespace C_CSPlayerResource { // C_BaseEntity
    constexpr std::ptrdiff_t m_bHostageAlive = 0x540; // bool[12]
    constexpr std::ptrdiff_t m_isHostageFollowingSomeone = 0x54C; // bool[12]
    constexpr std::ptrdiff_t m_iHostageEntityIDs = 0x558; // CEntityIndex[12]
    constexpr std::ptrdiff_t m_bombsiteCenterA = 0x588; // Vector
    constexpr std::ptrdiff_t m_bombsiteCenterB = 0x594; // Vector
    constexpr std::ptrdiff_t m_hostageRescueX = 0x5A0; // int32_t[4]
    constexpr std::ptrdiff_t m_hostageRescueY = 0x5B0; // int32_t[4]
    constexpr std::ptrdiff_t m_hostageRescueZ = 0x5C0; // int32_t[4]
    constexpr std::ptrdiff_t m_bEndMatchNextMapAllVoted = 0x5D0; // bool
    constexpr std::ptrdiff_t m_foundGoalPositions = 0x5D1; // bool
}

namespace C_CSTeam { // C_Team
    constexpr std::ptrdiff_t m_szTeamMatchStat = 0x5F8; // char[512]
    constexpr std::ptrdiff_t m_numMapVictories = 0x7F8; // int32_t
    constexpr std::ptrdiff_t m_bSurrendered = 0x7FC; // bool
    constexpr std::ptrdiff_t m_scoreFirstHalf = 0x800; // int32_t
    constexpr std::ptrdiff_t m_scoreSecondHalf = 0x804; // int32_t
    constexpr std::ptrdiff_t m_scoreOvertime = 0x808; // int32_t
    constexpr std::ptrdiff_t m_szClanTeamname = 0x80C; // char[129]
    constexpr std::ptrdiff_t m_iClanID = 0x890; // uint32_t
    constexpr std::ptrdiff_t m_szTeamFlagImage = 0x894; // char[8]
    constexpr std::ptrdiff_t m_szTeamLogoImage = 0x89C; // char[8]
}

namespace C_CSWeaponBase { // C_BasePlayerWeapon
    constexpr std::ptrdiff_t m_flFireSequenceStartTime = 0x15D4; // float
    constexpr std::ptrdiff_t m_nFireSequenceStartTimeChange = 0x15D8; // int32_t
    constexpr std::ptrdiff_t m_nFireSequenceStartTimeAck = 0x15DC; // int32_t
    constexpr std::ptrdiff_t m_ePlayerFireEvent = 0x15E0; // PlayerAnimEvent_t
    constexpr std::ptrdiff_t m_ePlayerFireEventAttackType = 0x15E4; // WeaponAttackType_t
    constexpr std::ptrdiff_t m_seqIdle = 0x15E8; // HSequence
    constexpr std::ptrdiff_t m_seqFirePrimary = 0x15EC; // HSequence
    constexpr std::ptrdiff_t m_seqFireSecondary = 0x15F0; // HSequence
    constexpr std::ptrdiff_t m_thirdPersonFireSequences = 0x15F8; // CUtlVector<HSequence>
    constexpr std::ptrdiff_t m_hCurrentThirdPersonSequence = 0x1610; // HSequence
    constexpr std::ptrdiff_t m_nSilencerBoneIndex = 0x1614; // int32_t
    constexpr std::ptrdiff_t m_thirdPersonSequences = 0x1618; // HSequence[7]
    constexpr std::ptrdiff_t m_ClientPreviousWeaponState = 0x1650; // CSWeaponState_t
    constexpr std::ptrdiff_t m_iState = 0x1654; // CSWeaponState_t
    constexpr std::ptrdiff_t m_flCrosshairDistance = 0x1658; // float
    constexpr std::ptrdiff_t m_iAmmoLastCheck = 0x165C; // int32_t
    constexpr std::ptrdiff_t m_iAlpha = 0x1660; // int32_t
    constexpr std::ptrdiff_t m_iScopeTextureID = 0x1664; // int32_t
    constexpr std::ptrdiff_t m_iCrosshairTextureID = 0x1668; // int32_t
    constexpr std::ptrdiff_t m_flGunAccuracyPosition = 0x166C; // float
    constexpr std::ptrdiff_t m_nViewModelIndex = 0x1670; // uint32_t
    constexpr std::ptrdiff_t m_bReloadsWithClips = 0x1674; // bool
    constexpr std::ptrdiff_t m_flTimeWeaponIdle = 0x1678; // GameTime_t
    constexpr std::ptrdiff_t m_bFireOnEmpty = 0x167C; // bool
    constexpr std::ptrdiff_t m_OnPlayerPickup = 0x1680; // CEntityIOOutput
    constexpr std::ptrdiff_t m_weaponMode = 0x16A8; // CSWeaponMode
    constexpr std::ptrdiff_t m_flTurningInaccuracyDelta = 0x16AC; // float
    constexpr std::ptrdiff_t m_vecTurningInaccuracyEyeDirLast = 0x16B0; // Vector
    constexpr std::ptrdiff_t m_flTurningInaccuracy = 0x16BC; // float
    constexpr std::ptrdiff_t m_fAccuracyPenalty = 0x16C0; // float
    constexpr std::ptrdiff_t m_flLastAccuracyUpdateTime = 0x16C4; // GameTime_t
    constexpr std::ptrdiff_t m_fAccuracySmoothedForZoom = 0x16C8; // float
    constexpr std::ptrdiff_t m_fScopeZoomEndTime = 0x16CC; // GameTime_t
    constexpr std::ptrdiff_t m_iRecoilIndex = 0x16D0; // int32_t
    constexpr std::ptrdiff_t m_flRecoilIndex = 0x16D4; // float
    constexpr std::ptrdiff_t m_bBurstMode = 0x16D8; // bool
    constexpr std::ptrdiff_t m_nPostponeFireReadyTicks = 0x16DC; // GameTick_t
    constexpr std::ptrdiff_t m_flPostponeFireReadyFrac = 0x16E0; // float
    constexpr std::ptrdiff_t m_bInReload = 0x16E4; // bool
    constexpr std::ptrdiff_t m_bReloadVisuallyComplete = 0x16E5; // bool
    constexpr std::ptrdiff_t m_flDroppedAtTime = 0x16E8; // GameTime_t
    constexpr std::ptrdiff_t m_bIsHauledBack = 0x16EC; // bool
    constexpr std::ptrdiff_t m_bSilencerOn = 0x16ED; // bool
    constexpr std::ptrdiff_t m_flTimeSilencerSwitchComplete = 0x16F0; // GameTime_t
    constexpr std::ptrdiff_t m_iOriginalTeamNumber = 0x16F4; // int32_t
    constexpr std::ptrdiff_t m_flNextAttackRenderTimeOffset = 0x16F8; // float
    constexpr std::ptrdiff_t m_bVisualsDataSet = 0x1780; // bool
    constexpr std::ptrdiff_t m_bOldFirstPersonSpectatedState = 0x1781; // bool
    constexpr std::ptrdiff_t m_hOurPing = 0x1784; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_nOurPingIndex = 0x1788; // CEntityIndex
    constexpr std::ptrdiff_t m_vecOurPingPos = 0x178C; // Vector
    constexpr std::ptrdiff_t m_bGlowForPing = 0x1798; // bool
    constexpr std::ptrdiff_t m_bUIWeapon = 0x1799; // bool
    constexpr std::ptrdiff_t m_hPrevOwner = 0x17A8; // CHandle<C_CSPlayerPawn>
    constexpr std::ptrdiff_t m_nDropTick = 0x17AC; // GameTick_t
    constexpr std::ptrdiff_t m_donated = 0x17CC; // bool
    constexpr std::ptrdiff_t m_fLastShotTime = 0x17D0; // GameTime_t
    constexpr std::ptrdiff_t m_bWasOwnedByCT = 0x17D4; // bool
    constexpr std::ptrdiff_t m_bWasOwnedByTerrorist = 0x17D5; // bool
    constexpr std::ptrdiff_t m_gunHeat = 0x17D8; // float
    constexpr std::ptrdiff_t m_smokeAttachments = 0x17DC; // uint32_t
    constexpr std::ptrdiff_t m_lastSmokeTime = 0x17E0; // GameTime_t
    constexpr std::ptrdiff_t m_flNextClientFireBulletTime = 0x17E4; // float
    constexpr std::ptrdiff_t m_flNextClientFireBulletTime_Repredict = 0x17E8; // float
    constexpr std::ptrdiff_t m_IronSightController = 0x18C0; // C_IronSightController
    constexpr std::ptrdiff_t m_iIronSightMode = 0x1970; // int32_t
    constexpr std::ptrdiff_t m_flLastLOSTraceFailureTime = 0x1980; // GameTime_t
    constexpr std::ptrdiff_t m_iNumEmptyAttacks = 0x1984; // int32_t
    constexpr std::ptrdiff_t m_flLastMagDropRequestTime = 0x1A00; // GameTime_t
}

namespace C_CSWeaponBaseGun { // C_CSWeaponBase
    constexpr std::ptrdiff_t m_zoomLevel = 0x1A10; // int32_t
    constexpr std::ptrdiff_t m_iBurstShotsRemaining = 0x1A14; // int32_t
    constexpr std::ptrdiff_t m_iSilencerBodygroup = 0x1A18; // int32_t
    constexpr std::ptrdiff_t m_silencedModelIndex = 0x1A28; // int32_t
    constexpr std::ptrdiff_t m_inPrecache = 0x1A2C; // bool
    constexpr std::ptrdiff_t m_bNeedsBoltAction = 0x1A2D; // bool
}

namespace C_Chicken { // C_DynamicProp
    constexpr std::ptrdiff_t m_hHolidayHatAddon = 0x10F0; // CHandle<CBaseAnimGraph>
    constexpr std::ptrdiff_t m_jumpedThisFrame = 0x10F4; // bool
    constexpr std::ptrdiff_t m_leader = 0x10F8; // CHandle<C_CSPlayerPawnBase>
    constexpr std::ptrdiff_t m_AttributeManager = 0x1100; // C_AttributeContainer
    constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0x15A8; // uint32_t
    constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x15AC; // uint32_t
    constexpr std::ptrdiff_t m_bAttributesInitialized = 0x15B0; // bool
    constexpr std::ptrdiff_t m_hWaterWakeParticles = 0x15B4; // ParticleIndex_t
}

namespace C_ClientRagdoll { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_bFadeOut = 0xE80; // bool
    constexpr std::ptrdiff_t m_bImportant = 0xE81; // bool
    constexpr std::ptrdiff_t m_flEffectTime = 0xE84; // GameTime_t
    constexpr std::ptrdiff_t m_gibDespawnTime = 0xE88; // GameTime_t
    constexpr std::ptrdiff_t m_iCurrentFriction = 0xE8C; // int32_t
    constexpr std::ptrdiff_t m_iMinFriction = 0xE90; // int32_t
    constexpr std::ptrdiff_t m_iMaxFriction = 0xE94; // int32_t
    constexpr std::ptrdiff_t m_iFrictionAnimState = 0xE98; // int32_t
    constexpr std::ptrdiff_t m_bReleaseRagdoll = 0xE9C; // bool
    constexpr std::ptrdiff_t m_iEyeAttachment = 0xE9D; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_bFadingOut = 0xE9E; // bool
    constexpr std::ptrdiff_t m_flScaleEnd = 0xEA0; // float[10]
    constexpr std::ptrdiff_t m_flScaleTimeStart = 0xEC8; // GameTime_t[10]
    constexpr std::ptrdiff_t m_flScaleTimeEnd = 0xEF0; // GameTime_t[10]
}

namespace C_ColorCorrection { // C_BaseEntity
    constexpr std::ptrdiff_t m_vecOrigin = 0x540; // Vector
    constexpr std::ptrdiff_t m_MinFalloff = 0x54C; // float
    constexpr std::ptrdiff_t m_MaxFalloff = 0x550; // float
    constexpr std::ptrdiff_t m_flFadeInDuration = 0x554; // float
    constexpr std::ptrdiff_t m_flFadeOutDuration = 0x558; // float
    constexpr std::ptrdiff_t m_flMaxWeight = 0x55C; // float
    constexpr std::ptrdiff_t m_flCurWeight = 0x560; // float
    constexpr std::ptrdiff_t m_netlookupFilename = 0x564; // char[512]
    constexpr std::ptrdiff_t m_bEnabled = 0x764; // bool
    constexpr std::ptrdiff_t m_bMaster = 0x765; // bool
    constexpr std::ptrdiff_t m_bClientSide = 0x766; // bool
    constexpr std::ptrdiff_t m_bExclusive = 0x767; // bool
    constexpr std::ptrdiff_t m_bEnabledOnClient = 0x768; // bool[1]
    constexpr std::ptrdiff_t m_flCurWeightOnClient = 0x76C; // float[1]
    constexpr std::ptrdiff_t m_bFadingIn = 0x770; // bool[1]
    constexpr std::ptrdiff_t m_flFadeStartWeight = 0x774; // float[1]
    constexpr std::ptrdiff_t m_flFadeStartTime = 0x778; // float[1]
    constexpr std::ptrdiff_t m_flFadeDuration = 0x77C; // float[1]
}

namespace C_ColorCorrectionVolume { // C_BaseTrigger
    constexpr std::ptrdiff_t m_LastEnterWeight = 0xCC8; // float
    constexpr std::ptrdiff_t m_LastEnterTime = 0xCCC; // float
    constexpr std::ptrdiff_t m_LastExitWeight = 0xCD0; // float
    constexpr std::ptrdiff_t m_LastExitTime = 0xCD4; // float
    constexpr std::ptrdiff_t m_bEnabled = 0xCD8; // bool
    constexpr std::ptrdiff_t m_MaxWeight = 0xCDC; // float
    constexpr std::ptrdiff_t m_FadeDuration = 0xCE0; // float
    constexpr std::ptrdiff_t m_Weight = 0xCE4; // float
    constexpr std::ptrdiff_t m_lookupFilename = 0xCE8; // char[512]
}

namespace C_CommandContext {
    constexpr std::ptrdiff_t needsprocessing = 0x0; // bool
    constexpr std::ptrdiff_t command_number = 0xA8; // int32_t
}

namespace C_CsmFovOverride { // C_BaseEntity
    constexpr std::ptrdiff_t m_cameraName = 0x540; // CUtlString
    constexpr std::ptrdiff_t m_flCsmFovOverrideValue = 0x548; // float
}

namespace C_DEagle { // C_CSWeaponBaseGun
}

namespace C_DecoyGrenade { // C_BaseCSGrenade
}

namespace C_DecoyProjectile { // C_BaseCSGrenadeProjectile
    constexpr std::ptrdiff_t m_nDecoyShotTick = 0x1100; // int32_t
    constexpr std::ptrdiff_t m_nClientLastKnownDecoyShotTick = 0x1104; // int32_t
    constexpr std::ptrdiff_t m_flTimeParticleEffectSpawn = 0x1128; // GameTime_t
}

namespace C_DynamicLight { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_Flags = 0xCC0; // uint8_t
    constexpr std::ptrdiff_t m_LightStyle = 0xCC1; // uint8_t
    constexpr std::ptrdiff_t m_Radius = 0xCC4; // float
    constexpr std::ptrdiff_t m_Exponent = 0xCC8; // int32_t
    constexpr std::ptrdiff_t m_InnerAngle = 0xCCC; // float
    constexpr std::ptrdiff_t m_OuterAngle = 0xCD0; // float
    constexpr std::ptrdiff_t m_SpotRadius = 0xCD4; // float
}

namespace C_DynamicProp { // C_BreakableProp
    constexpr std::ptrdiff_t m_bUseHitboxesForRenderBox = 0xFD0; // bool
    constexpr std::ptrdiff_t m_bUseAnimGraph = 0xFD1; // bool
    constexpr std::ptrdiff_t m_pOutputAnimBegun = 0xFD8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_pOutputAnimOver = 0x1000; // CEntityIOOutput
    constexpr std::ptrdiff_t m_pOutputAnimLoopCycleOver = 0x1028; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAnimReachedStart = 0x1050; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAnimReachedEnd = 0x1078; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iszDefaultAnim = 0x10A0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nDefaultAnimLoopMode = 0x10A8; // AnimLoopMode_t
    constexpr std::ptrdiff_t m_bAnimateOnServer = 0x10AC; // bool
    constexpr std::ptrdiff_t m_bRandomizeCycle = 0x10AD; // bool
    constexpr std::ptrdiff_t m_bStartDisabled = 0x10AE; // bool
    constexpr std::ptrdiff_t m_bScriptedMovement = 0x10AF; // bool
    constexpr std::ptrdiff_t m_bFiredStartEndOutput = 0x10B0; // bool
    constexpr std::ptrdiff_t m_bForceNpcExclude = 0x10B1; // bool
    constexpr std::ptrdiff_t m_bCreateNonSolid = 0x10B2; // bool
    constexpr std::ptrdiff_t m_bIsOverrideProp = 0x10B3; // bool
    constexpr std::ptrdiff_t m_iInitialGlowState = 0x10B4; // int32_t
    constexpr std::ptrdiff_t m_nGlowRange = 0x10B8; // int32_t
    constexpr std::ptrdiff_t m_nGlowRangeMin = 0x10BC; // int32_t
    constexpr std::ptrdiff_t m_glowColor = 0x10C0; // Color
    constexpr std::ptrdiff_t m_nGlowTeam = 0x10C4; // int32_t
    constexpr std::ptrdiff_t m_iCachedFrameCount = 0x10C8; // int32_t
    constexpr std::ptrdiff_t m_vecCachedRenderMins = 0x10CC; // Vector
    constexpr std::ptrdiff_t m_vecCachedRenderMaxs = 0x10D8; // Vector
}

namespace C_DynamicPropAlias_cable_dynamic { // C_DynamicProp
}

namespace C_DynamicPropAlias_dynamic_prop { // C_DynamicProp
}

namespace C_DynamicPropAlias_prop_dynamic_override { // C_DynamicProp
}

namespace C_EconEntity { // C_BaseFlex
    constexpr std::ptrdiff_t m_flFlexDelayTime = 0x1028; // float
    constexpr std::ptrdiff_t m_flFlexDelayedWeight = 0x1030; // float*
    constexpr std::ptrdiff_t m_bAttributesInitialized = 0x1038; // bool
    constexpr std::ptrdiff_t m_AttributeManager = 0x1040; // C_AttributeContainer
    constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0x14E8; // uint32_t
    constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x14EC; // uint32_t
    constexpr std::ptrdiff_t m_nFallbackPaintKit = 0x14F0; // int32_t
    constexpr std::ptrdiff_t m_nFallbackSeed = 0x14F4; // int32_t
    constexpr std::ptrdiff_t m_flFallbackWear = 0x14F8; // float
    constexpr std::ptrdiff_t m_nFallbackStatTrak = 0x14FC; // int32_t
    constexpr std::ptrdiff_t m_bClientside = 0x1500; // bool
    constexpr std::ptrdiff_t m_bParticleSystemsCreated = 0x1501; // bool
    constexpr std::ptrdiff_t m_vecAttachedParticles = 0x1508; // CUtlVector<int32_t>
    constexpr std::ptrdiff_t m_hViewmodelAttachment = 0x1520; // CHandle<CBaseAnimGraph>
    constexpr std::ptrdiff_t m_iOldTeam = 0x1524; // int32_t
    constexpr std::ptrdiff_t m_bAttachmentDirty = 0x1528; // bool
    constexpr std::ptrdiff_t m_nUnloadedModelIndex = 0x152C; // int32_t
    constexpr std::ptrdiff_t m_iNumOwnerValidationRetries = 0x1530; // int32_t
    constexpr std::ptrdiff_t m_hOldProvidee = 0x1540; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_vecAttachedModels = 0x1548; // CUtlVector<C_EconEntity::AttachedModelData_t>
}

namespace C_EconEntity_AttachedModelData_t {
    constexpr std::ptrdiff_t m_iModelDisplayFlags = 0x0; // int32_t
}

namespace C_EconItemView { // IEconItemInterface
    constexpr std::ptrdiff_t m_bInventoryImageRgbaRequested = 0x60; // bool
    constexpr std::ptrdiff_t m_bInventoryImageTriedCache = 0x61; // bool
    constexpr std::ptrdiff_t m_nInventoryImageRgbaWidth = 0x80; // int32_t
    constexpr std::ptrdiff_t m_nInventoryImageRgbaHeight = 0x84; // int32_t
    constexpr std::ptrdiff_t m_szCurrentLoadCachedFileName = 0x88; // char[260]
    constexpr std::ptrdiff_t m_bRestoreCustomMaterialAfterPrecache = 0x1B8; // bool
    constexpr std::ptrdiff_t m_iItemDefinitionIndex = 0x1BA; // uint16_t
    constexpr std::ptrdiff_t m_iEntityQuality = 0x1BC; // int32_t
    constexpr std::ptrdiff_t m_iEntityLevel = 0x1C0; // uint32_t
    constexpr std::ptrdiff_t m_iItemID = 0x1C8; // uint64_t
    constexpr std::ptrdiff_t m_iItemIDHigh = 0x1D0; // uint32_t
    constexpr std::ptrdiff_t m_iItemIDLow = 0x1D4; // uint32_t
    constexpr std::ptrdiff_t m_iAccountID = 0x1D8; // uint32_t
    constexpr std::ptrdiff_t m_iInventoryPosition = 0x1DC; // uint32_t
    constexpr std::ptrdiff_t m_bInitialized = 0x1E8; // bool
    constexpr std::ptrdiff_t m_bIsStoreItem = 0x1E9; // bool
    constexpr std::ptrdiff_t m_bIsTradeItem = 0x1EA; // bool
    constexpr std::ptrdiff_t m_iEntityQuantity = 0x1EC; // int32_t
    constexpr std::ptrdiff_t m_iRarityOverride = 0x1F0; // int32_t
    constexpr std::ptrdiff_t m_iQualityOverride = 0x1F4; // int32_t
    constexpr std::ptrdiff_t m_unClientFlags = 0x1F8; // uint8_t
    constexpr std::ptrdiff_t m_unOverrideStyle = 0x1F9; // uint8_t
    constexpr std::ptrdiff_t m_AttributeList = 0x210; // CAttributeList
    constexpr std::ptrdiff_t m_NetworkedDynamicAttributes = 0x270; // CAttributeList
    constexpr std::ptrdiff_t m_szCustomName = 0x2D0; // char[161]
    constexpr std::ptrdiff_t m_szCustomNameOverride = 0x371; // char[161]
    constexpr std::ptrdiff_t m_bInitializedTags = 0x440; // bool
}

namespace C_EconWearable { // C_EconEntity
    constexpr std::ptrdiff_t m_nForceSkin = 0x1560; // int32_t
    constexpr std::ptrdiff_t m_bAlwaysAllow = 0x1564; // bool
}

namespace C_EntityDissolve { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_flStartTime = 0xCC8; // GameTime_t
    constexpr std::ptrdiff_t m_flFadeInStart = 0xCCC; // float
    constexpr std::ptrdiff_t m_flFadeInLength = 0xCD0; // float
    constexpr std::ptrdiff_t m_flFadeOutModelStart = 0xCD4; // float
    constexpr std::ptrdiff_t m_flFadeOutModelLength = 0xCD8; // float
    constexpr std::ptrdiff_t m_flFadeOutStart = 0xCDC; // float
    constexpr std::ptrdiff_t m_flFadeOutLength = 0xCE0; // float
    constexpr std::ptrdiff_t m_flNextSparkTime = 0xCE4; // GameTime_t
    constexpr std::ptrdiff_t m_nDissolveType = 0xCE8; // EntityDisolveType_t
    constexpr std::ptrdiff_t m_vDissolverOrigin = 0xCEC; // Vector
    constexpr std::ptrdiff_t m_nMagnitude = 0xCF8; // uint32_t
    constexpr std::ptrdiff_t m_bCoreExplode = 0xCFC; // bool
    constexpr std::ptrdiff_t m_bLinkedToServerEnt = 0xCFD; // bool
}

namespace C_EntityFlame { // C_BaseEntity
    constexpr std::ptrdiff_t m_hEntAttached = 0x540; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_hOldAttached = 0x568; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_bCheapEffect = 0x56C; // bool
}

namespace C_EnvCombinedLightProbeVolume { // C_BaseEntity
    constexpr std::ptrdiff_t m_Color = 0x1598; // Color
    constexpr std::ptrdiff_t m_flBrightness = 0x159C; // float
    constexpr std::ptrdiff_t m_hCubemapTexture = 0x15A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_bCustomCubemapTexture = 0x15A8; // bool
    constexpr std::ptrdiff_t m_hLightProbeTexture = 0x15B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_hLightProbeDirectLightIndicesTexture = 0x15B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_hLightProbeDirectLightScalarsTexture = 0x15C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_hLightProbeDirectLightShadowsTexture = 0x15C8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_vBoxMins = 0x15D0; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x15DC; // Vector
    constexpr std::ptrdiff_t m_bMoveable = 0x15E8; // bool
    constexpr std::ptrdiff_t m_nHandshake = 0x15EC; // int32_t
    constexpr std::ptrdiff_t m_nEnvCubeMapArrayIndex = 0x15F0; // int32_t
    constexpr std::ptrdiff_t m_nPriority = 0x15F4; // int32_t
    constexpr std::ptrdiff_t m_bStartDisabled = 0x15F8; // bool
    constexpr std::ptrdiff_t m_flEdgeFadeDist = 0x15FC; // float
    constexpr std::ptrdiff_t m_vEdgeFadeDists = 0x1600; // Vector
    constexpr std::ptrdiff_t m_nLightProbeSizeX = 0x160C; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeSizeY = 0x1610; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeSizeZ = 0x1614; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeAtlasX = 0x1618; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeAtlasY = 0x161C; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeAtlasZ = 0x1620; // int32_t
    constexpr std::ptrdiff_t m_bEnabled = 0x1639; // bool
}

namespace C_EnvCubemap { // C_BaseEntity
    constexpr std::ptrdiff_t m_hCubemapTexture = 0x5C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_bCustomCubemapTexture = 0x5C8; // bool
    constexpr std::ptrdiff_t m_flInfluenceRadius = 0x5CC; // float
    constexpr std::ptrdiff_t m_vBoxProjectMins = 0x5D0; // Vector
    constexpr std::ptrdiff_t m_vBoxProjectMaxs = 0x5DC; // Vector
    constexpr std::ptrdiff_t m_bMoveable = 0x5E8; // bool
    constexpr std::ptrdiff_t m_nHandshake = 0x5EC; // int32_t
    constexpr std::ptrdiff_t m_nEnvCubeMapArrayIndex = 0x5F0; // int32_t
    constexpr std::ptrdiff_t m_nPriority = 0x5F4; // int32_t
    constexpr std::ptrdiff_t m_flEdgeFadeDist = 0x5F8; // float
    constexpr std::ptrdiff_t m_vEdgeFadeDists = 0x5FC; // Vector
    constexpr std::ptrdiff_t m_flDiffuseScale = 0x608; // float
    constexpr std::ptrdiff_t m_bStartDisabled = 0x60C; // bool
    constexpr std::ptrdiff_t m_bDefaultEnvMap = 0x60D; // bool
    constexpr std::ptrdiff_t m_bDefaultSpecEnvMap = 0x60E; // bool
    constexpr std::ptrdiff_t m_bIndoorCubeMap = 0x60F; // bool
    constexpr std::ptrdiff_t m_bCopyDiffuseFromDefaultCubemap = 0x610; // bool
    constexpr std::ptrdiff_t m_bEnabled = 0x620; // bool
}

namespace C_EnvCubemapBox { // C_EnvCubemap
}

namespace C_EnvCubemapFog { // C_BaseEntity
    constexpr std::ptrdiff_t m_flEndDistance = 0x540; // float
    constexpr std::ptrdiff_t m_flStartDistance = 0x544; // float
    constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x548; // float
    constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x54C; // bool
    constexpr std::ptrdiff_t m_flFogHeightWidth = 0x550; // float
    constexpr std::ptrdiff_t m_flFogHeightEnd = 0x554; // float
    constexpr std::ptrdiff_t m_flFogHeightStart = 0x558; // float
    constexpr std::ptrdiff_t m_flFogHeightExponent = 0x55C; // float
    constexpr std::ptrdiff_t m_flLODBias = 0x560; // float
    constexpr std::ptrdiff_t m_bActive = 0x564; // bool
    constexpr std::ptrdiff_t m_bStartDisabled = 0x565; // bool
    constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x568; // float
    constexpr std::ptrdiff_t m_nCubemapSourceType = 0x56C; // int32_t
    constexpr std::ptrdiff_t m_hSkyMaterial = 0x570; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_iszSkyEntity = 0x578; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFogCubemapTexture = 0x580; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_bHasHeightFogEnd = 0x588; // bool
    constexpr std::ptrdiff_t m_bFirstTime = 0x589; // bool
}

namespace C_EnvDecal { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_hDecalMaterial = 0xCC0; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_flWidth = 0xCC8; // float
    constexpr std::ptrdiff_t m_flHeight = 0xCCC; // float
    constexpr std::ptrdiff_t m_flDepth = 0xCD0; // float
    constexpr std::ptrdiff_t m_nRenderOrder = 0xCD4; // uint32_t
    constexpr std::ptrdiff_t m_bProjectOnWorld = 0xCD8; // bool
    constexpr std::ptrdiff_t m_bProjectOnCharacters = 0xCD9; // bool
    constexpr std::ptrdiff_t m_bProjectOnWater = 0xCDA; // bool
    constexpr std::ptrdiff_t m_flDepthSortBias = 0xCDC; // float
}

namespace C_EnvDetailController { // C_BaseEntity
    constexpr std::ptrdiff_t m_flFadeStartDist = 0x540; // float
    constexpr std::ptrdiff_t m_flFadeEndDist = 0x544; // float
}

namespace C_EnvLightProbeVolume { // C_BaseEntity
    constexpr std::ptrdiff_t m_hLightProbeTexture = 0x1518; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_hLightProbeDirectLightIndicesTexture = 0x1520; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_hLightProbeDirectLightScalarsTexture = 0x1528; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_hLightProbeDirectLightShadowsTexture = 0x1530; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_vBoxMins = 0x1538; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x1544; // Vector
    constexpr std::ptrdiff_t m_bMoveable = 0x1550; // bool
    constexpr std::ptrdiff_t m_nHandshake = 0x1554; // int32_t
    constexpr std::ptrdiff_t m_nPriority = 0x1558; // int32_t
    constexpr std::ptrdiff_t m_bStartDisabled = 0x155C; // bool
    constexpr std::ptrdiff_t m_nLightProbeSizeX = 0x1560; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeSizeY = 0x1564; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeSizeZ = 0x1568; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeAtlasX = 0x156C; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeAtlasY = 0x1570; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeAtlasZ = 0x1574; // int32_t
    constexpr std::ptrdiff_t m_bEnabled = 0x1581; // bool
}

namespace C_EnvParticleGlow { // C_ParticleSystem
    constexpr std::ptrdiff_t m_flAlphaScale = 0x1270; // float
    constexpr std::ptrdiff_t m_flRadiusScale = 0x1274; // float
    constexpr std::ptrdiff_t m_flSelfIllumScale = 0x1278; // float
    constexpr std::ptrdiff_t m_ColorTint = 0x127C; // Color
    constexpr std::ptrdiff_t m_hTextureOverride = 0x1280; // CStrongHandle<InfoForResourceTypeCTextureBase>
}

namespace C_EnvProjectedTexture { // C_ModelPointEntity
}

namespace C_EnvScreenOverlay { // C_PointEntity
    constexpr std::ptrdiff_t m_iszOverlayNames = 0x540; // CUtlSymbolLarge[10]
    constexpr std::ptrdiff_t m_flOverlayTimes = 0x590; // float[10]
    constexpr std::ptrdiff_t m_flStartTime = 0x5B8; // GameTime_t
    constexpr std::ptrdiff_t m_iDesiredOverlay = 0x5BC; // int32_t
    constexpr std::ptrdiff_t m_bIsActive = 0x5C0; // bool
    constexpr std::ptrdiff_t m_bWasActive = 0x5C1; // bool
    constexpr std::ptrdiff_t m_iCachedDesiredOverlay = 0x5C4; // int32_t
    constexpr std::ptrdiff_t m_iCurrentOverlay = 0x5C8; // int32_t
    constexpr std::ptrdiff_t m_flCurrentOverlayTime = 0x5CC; // GameTime_t
}

namespace C_EnvSky { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_hSkyMaterial = 0xCC0; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_hSkyMaterialLightingOnly = 0xCC8; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_bStartDisabled = 0xCD0; // bool
    constexpr std::ptrdiff_t m_vTintColor = 0xCD1; // Color
    constexpr std::ptrdiff_t m_vTintColorLightingOnly = 0xCD5; // Color
    constexpr std::ptrdiff_t m_flBrightnessScale = 0xCDC; // float
    constexpr std::ptrdiff_t m_nFogType = 0xCE0; // int32_t
    constexpr std::ptrdiff_t m_flFogMinStart = 0xCE4; // float
    constexpr std::ptrdiff_t m_flFogMinEnd = 0xCE8; // float
    constexpr std::ptrdiff_t m_flFogMaxStart = 0xCEC; // float
    constexpr std::ptrdiff_t m_flFogMaxEnd = 0xCF0; // float
    constexpr std::ptrdiff_t m_bEnabled = 0xCF4; // bool
}

namespace C_EnvVolumetricFogController { // C_BaseEntity
    constexpr std::ptrdiff_t m_flScattering = 0x540; // float
    constexpr std::ptrdiff_t m_flAnisotropy = 0x544; // float
    constexpr std::ptrdiff_t m_flFadeSpeed = 0x548; // float
    constexpr std::ptrdiff_t m_flDrawDistance = 0x54C; // float
    constexpr std::ptrdiff_t m_flFadeInStart = 0x550; // float
    constexpr std::ptrdiff_t m_flFadeInEnd = 0x554; // float
    constexpr std::ptrdiff_t m_flIndirectStrength = 0x558; // float
    constexpr std::ptrdiff_t m_nIndirectTextureDimX = 0x55C; // int32_t
    constexpr std::ptrdiff_t m_nIndirectTextureDimY = 0x560; // int32_t
    constexpr std::ptrdiff_t m_nIndirectTextureDimZ = 0x564; // int32_t
    constexpr std::ptrdiff_t m_vBoxMins = 0x568; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x574; // Vector
    constexpr std::ptrdiff_t m_bActive = 0x580; // bool
    constexpr std::ptrdiff_t m_flStartAnisoTime = 0x584; // GameTime_t
    constexpr std::ptrdiff_t m_flStartScatterTime = 0x588; // GameTime_t
    constexpr std::ptrdiff_t m_flStartDrawDistanceTime = 0x58C; // GameTime_t
    constexpr std::ptrdiff_t m_flStartAnisotropy = 0x590; // float
    constexpr std::ptrdiff_t m_flStartScattering = 0x594; // float
    constexpr std::ptrdiff_t m_flStartDrawDistance = 0x598; // float
    constexpr std::ptrdiff_t m_flDefaultAnisotropy = 0x59C; // float
    constexpr std::ptrdiff_t m_flDefaultScattering = 0x5A0; // float
    constexpr std::ptrdiff_t m_flDefaultDrawDistance = 0x5A4; // float
    constexpr std::ptrdiff_t m_bStartDisabled = 0x5A8; // bool
    constexpr std::ptrdiff_t m_bEnableIndirect = 0x5A9; // bool
    constexpr std::ptrdiff_t m_bIsMaster = 0x5AA; // bool
    constexpr std::ptrdiff_t m_hFogIndirectTexture = 0x5B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_nForceRefreshCount = 0x5B8; // int32_t
    constexpr std::ptrdiff_t m_bFirstTime = 0x5BC; // bool
}

namespace C_EnvVolumetricFogVolume { // C_BaseEntity
    constexpr std::ptrdiff_t m_bActive = 0x540; // bool
    constexpr std::ptrdiff_t m_vBoxMins = 0x544; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x550; // Vector
    constexpr std::ptrdiff_t m_bStartDisabled = 0x55C; // bool
    constexpr std::ptrdiff_t m_flStrength = 0x560; // float
    constexpr std::ptrdiff_t m_nFalloffShape = 0x564; // int32_t
    constexpr std::ptrdiff_t m_flFalloffExponent = 0x568; // float
}

namespace C_EnvWind { // C_BaseEntity
    constexpr std::ptrdiff_t m_EnvWindShared = 0x540; // C_EnvWindShared
}

namespace C_EnvWindClientside { // C_BaseEntity
    constexpr std::ptrdiff_t m_EnvWindShared = 0x540; // C_EnvWindShared
}

namespace C_EnvWindShared {
    constexpr std::ptrdiff_t m_flStartTime = 0x8; // GameTime_t
    constexpr std::ptrdiff_t m_iWindSeed = 0xC; // uint32_t
    constexpr std::ptrdiff_t m_iMinWind = 0x10; // uint16_t
    constexpr std::ptrdiff_t m_iMaxWind = 0x12; // uint16_t
    constexpr std::ptrdiff_t m_windRadius = 0x14; // int32_t
    constexpr std::ptrdiff_t m_iMinGust = 0x18; // uint16_t
    constexpr std::ptrdiff_t m_iMaxGust = 0x1A; // uint16_t
    constexpr std::ptrdiff_t m_flMinGustDelay = 0x1C; // float
    constexpr std::ptrdiff_t m_flMaxGustDelay = 0x20; // float
    constexpr std::ptrdiff_t m_flGustDuration = 0x24; // float
    constexpr std::ptrdiff_t m_iGustDirChange = 0x28; // uint16_t
    constexpr std::ptrdiff_t m_location = 0x2C; // Vector
    constexpr std::ptrdiff_t m_iszGustSound = 0x38; // int32_t
    constexpr std::ptrdiff_t m_iWindDir = 0x3C; // int32_t
    constexpr std::ptrdiff_t m_flWindSpeed = 0x40; // float
    constexpr std::ptrdiff_t m_currentWindVector = 0x44; // Vector
    constexpr std::ptrdiff_t m_CurrentSwayVector = 0x50; // Vector
    constexpr std::ptrdiff_t m_PrevSwayVector = 0x5C; // Vector
    constexpr std::ptrdiff_t m_iInitialWindDir = 0x68; // uint16_t
    constexpr std::ptrdiff_t m_flInitialWindSpeed = 0x6C; // float
    constexpr std::ptrdiff_t m_flVariationTime = 0x70; // GameTime_t
    constexpr std::ptrdiff_t m_flSwayTime = 0x74; // GameTime_t
    constexpr std::ptrdiff_t m_flSimTime = 0x78; // GameTime_t
    constexpr std::ptrdiff_t m_flSwitchTime = 0x7C; // GameTime_t
    constexpr std::ptrdiff_t m_flAveWindSpeed = 0x80; // float
    constexpr std::ptrdiff_t m_bGusting = 0x84; // bool
    constexpr std::ptrdiff_t m_flWindAngleVariation = 0x88; // float
    constexpr std::ptrdiff_t m_flWindSpeedVariation = 0x8C; // float
    constexpr std::ptrdiff_t m_iEntIndex = 0x90; // CEntityIndex
}

namespace C_EnvWindShared_WindAveEvent_t {
    constexpr std::ptrdiff_t m_flStartWindSpeed = 0x0; // float
    constexpr std::ptrdiff_t m_flAveWindSpeed = 0x4; // float
}

namespace C_EnvWindShared_WindVariationEvent_t {
    constexpr std::ptrdiff_t m_flWindAngleVariation = 0x0; // float
    constexpr std::ptrdiff_t m_flWindSpeedVariation = 0x4; // float
}

namespace C_FireCrackerBlast { // C_Inferno
}

namespace C_FireFromAboveSprite { // C_Sprite
}

namespace C_FireSmoke { // C_BaseFire
    constexpr std::ptrdiff_t m_nFlameModelIndex = 0x550; // int32_t
    constexpr std::ptrdiff_t m_nFlameFromAboveModelIndex = 0x554; // int32_t
    constexpr std::ptrdiff_t m_flScaleRegister = 0x558; // float
    constexpr std::ptrdiff_t m_flScaleStart = 0x55C; // float
    constexpr std::ptrdiff_t m_flScaleEnd = 0x560; // float
    constexpr std::ptrdiff_t m_flScaleTimeStart = 0x564; // GameTime_t
    constexpr std::ptrdiff_t m_flScaleTimeEnd = 0x568; // GameTime_t
    constexpr std::ptrdiff_t m_flChildFlameSpread = 0x56C; // float
    constexpr std::ptrdiff_t m_flClipPerc = 0x580; // float
    constexpr std::ptrdiff_t m_bClipTested = 0x584; // bool
    constexpr std::ptrdiff_t m_bFadingOut = 0x585; // bool
    constexpr std::ptrdiff_t m_tParticleSpawn = 0x588; // TimedEvent
    constexpr std::ptrdiff_t m_pFireOverlay = 0x590; // CFireOverlay*
}

namespace C_FireSprite { // C_Sprite
    constexpr std::ptrdiff_t m_vecMoveDir = 0xDF0; // Vector
    constexpr std::ptrdiff_t m_bFadeFromAbove = 0xDFC; // bool
}

namespace C_Fish { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_pos = 0xE80; // Vector
    constexpr std::ptrdiff_t m_vel = 0xE8C; // Vector
    constexpr std::ptrdiff_t m_angles = 0xE98; // QAngle
    constexpr std::ptrdiff_t m_localLifeState = 0xEA4; // int32_t
    constexpr std::ptrdiff_t m_deathDepth = 0xEA8; // float
    constexpr std::ptrdiff_t m_deathAngle = 0xEAC; // float
    constexpr std::ptrdiff_t m_buoyancy = 0xEB0; // float
    constexpr std::ptrdiff_t m_wiggleTimer = 0xEB8; // CountdownTimer
    constexpr std::ptrdiff_t m_wigglePhase = 0xED0; // float
    constexpr std::ptrdiff_t m_wiggleRate = 0xED4; // float
    constexpr std::ptrdiff_t m_actualPos = 0xED8; // Vector
    constexpr std::ptrdiff_t m_actualAngles = 0xEE4; // QAngle
    constexpr std::ptrdiff_t m_poolOrigin = 0xEF0; // Vector
    constexpr std::ptrdiff_t m_waterLevel = 0xEFC; // float
    constexpr std::ptrdiff_t m_gotUpdate = 0xF00; // bool
    constexpr std::ptrdiff_t m_x = 0xF04; // float
    constexpr std::ptrdiff_t m_y = 0xF08; // float
    constexpr std::ptrdiff_t m_z = 0xF0C; // float
    constexpr std::ptrdiff_t m_angle = 0xF10; // float
    constexpr std::ptrdiff_t m_errorHistory = 0xF14; // float[20]
    constexpr std::ptrdiff_t m_errorHistoryIndex = 0xF64; // int32_t
    constexpr std::ptrdiff_t m_errorHistoryCount = 0xF68; // int32_t
    constexpr std::ptrdiff_t m_averageError = 0xF6C; // float
}

namespace C_Fists { // C_CSWeaponBase
    constexpr std::ptrdiff_t m_bPlayingUninterruptableAct = 0x1A10; // bool
    constexpr std::ptrdiff_t m_nUninterruptableActivity = 0x1A14; // PlayerAnimEvent_t
}

namespace C_Flashbang { // C_BaseCSGrenade
}

namespace C_FlashbangProjectile { // C_BaseCSGrenadeProjectile
}

namespace C_FogController { // C_BaseEntity
    constexpr std::ptrdiff_t m_fog = 0x540; // fogparams_t
    constexpr std::ptrdiff_t m_bUseAngles = 0x5A8; // bool
    constexpr std::ptrdiff_t m_iChangedVariables = 0x5AC; // int32_t
}

namespace C_FootstepControl { // C_BaseTrigger
    constexpr std::ptrdiff_t m_source = 0xCC8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_destination = 0xCD0; // CUtlSymbolLarge
}

namespace C_FuncBrush { // C_BaseModelEntity
}

namespace C_FuncConveyor { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_vecMoveDirEntitySpace = 0xCC8; // Vector
    constexpr std::ptrdiff_t m_flTargetSpeed = 0xCD4; // float
    constexpr std::ptrdiff_t m_nTransitionStartTick = 0xCD8; // GameTick_t
    constexpr std::ptrdiff_t m_nTransitionDurationTicks = 0xCDC; // int32_t
    constexpr std::ptrdiff_t m_flTransitionStartSpeed = 0xCE0; // float
    constexpr std::ptrdiff_t m_hConveyorModels = 0xCE8; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
    constexpr std::ptrdiff_t m_flCurrentConveyorOffset = 0xD00; // float
    constexpr std::ptrdiff_t m_flCurrentConveyorSpeed = 0xD04; // float
}

namespace C_FuncElectrifiedVolume { // C_FuncBrush
    constexpr std::ptrdiff_t m_nAmbientEffect = 0xCC0; // ParticleIndex_t
    constexpr std::ptrdiff_t m_EffectName = 0xCC8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bState = 0xCD0; // bool
}

namespace C_FuncLadder { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_vecLadderDir = 0xCC0; // Vector
    constexpr std::ptrdiff_t m_Dismounts = 0xCD0; // CUtlVector<CHandle<C_InfoLadderDismount>>
    constexpr std::ptrdiff_t m_vecLocalTop = 0xCE8; // Vector
    constexpr std::ptrdiff_t m_vecPlayerMountPositionTop = 0xCF4; // Vector
    constexpr std::ptrdiff_t m_vecPlayerMountPositionBottom = 0xD00; // Vector
    constexpr std::ptrdiff_t m_flAutoRideSpeed = 0xD0C; // float
    constexpr std::ptrdiff_t m_bDisabled = 0xD10; // bool
    constexpr std::ptrdiff_t m_bFakeLadder = 0xD11; // bool
    constexpr std::ptrdiff_t m_bHasSlack = 0xD12; // bool
}

namespace C_FuncMonitor { // C_FuncBrush
    constexpr std::ptrdiff_t m_targetCamera = 0xCC0; // CUtlString
    constexpr std::ptrdiff_t m_nResolutionEnum = 0xCC8; // int32_t
    constexpr std::ptrdiff_t m_bRenderShadows = 0xCCC; // bool
    constexpr std::ptrdiff_t m_bUseUniqueColorTarget = 0xCCD; // bool
    constexpr std::ptrdiff_t m_brushModelName = 0xCD0; // CUtlString
    constexpr std::ptrdiff_t m_hTargetCamera = 0xCD8; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_bEnabled = 0xCDC; // bool
    constexpr std::ptrdiff_t m_bDraw3DSkybox = 0xCDD; // bool
}

namespace C_FuncMoveLinear { // C_BaseToggle
}

namespace C_FuncRotating { // C_BaseModelEntity
}

namespace C_FuncTrackTrain { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_nLongAxis = 0xCC0; // int32_t
    constexpr std::ptrdiff_t m_flRadius = 0xCC4; // float
    constexpr std::ptrdiff_t m_flLineLength = 0xCC8; // float
}

namespace C_GameRules {
}

namespace C_GameRulesProxy { // C_BaseEntity
}

namespace C_GlobalLight { // C_BaseEntity
    constexpr std::ptrdiff_t m_WindClothForceHandle = 0xA00; // uint16_t
}

namespace C_GradientFog { // C_BaseEntity
    constexpr std::ptrdiff_t m_hGradientFogTexture = 0x540; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_flFogStartDistance = 0x548; // float
    constexpr std::ptrdiff_t m_flFogEndDistance = 0x54C; // float
    constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x550; // bool
    constexpr std::ptrdiff_t m_flFogStartHeight = 0x554; // float
    constexpr std::ptrdiff_t m_flFogEndHeight = 0x558; // float
    constexpr std::ptrdiff_t m_flFarZ = 0x55C; // float
    constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x560; // float
    constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x564; // float
    constexpr std::ptrdiff_t m_flFogVerticalExponent = 0x568; // float
    constexpr std::ptrdiff_t m_fogColor = 0x56C; // Color
    constexpr std::ptrdiff_t m_flFogStrength = 0x570; // float
    constexpr std::ptrdiff_t m_flFadeTime = 0x574; // float
    constexpr std::ptrdiff_t m_bStartDisabled = 0x578; // bool
    constexpr std::ptrdiff_t m_bIsEnabled = 0x579; // bool
    constexpr std::ptrdiff_t m_bGradientFogNeedsTextures = 0x57A; // bool
}

namespace C_HEGrenade { // C_BaseCSGrenade
}

namespace C_HEGrenadeProjectile { // C_BaseCSGrenadeProjectile
}

namespace C_HandleTest { // C_BaseEntity
    constexpr std::ptrdiff_t m_Handle = 0x540; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_bSendHandle = 0x544; // bool
}

namespace C_Hostage { // C_BaseCombatCharacter
    constexpr std::ptrdiff_t m_entitySpottedState = 0x10A8; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_leader = 0x10C0; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_reuseTimer = 0x10C8; // CountdownTimer
    constexpr std::ptrdiff_t m_vel = 0x10E0; // Vector
    constexpr std::ptrdiff_t m_isRescued = 0x10EC; // bool
    constexpr std::ptrdiff_t m_jumpedThisFrame = 0x10ED; // bool
    constexpr std::ptrdiff_t m_nHostageState = 0x10F0; // int32_t
    constexpr std::ptrdiff_t m_bHandsHaveBeenCut = 0x10F4; // bool
    constexpr std::ptrdiff_t m_hHostageGrabber = 0x10F8; // CHandle<C_CSPlayerPawn>
    constexpr std::ptrdiff_t m_fLastGrabTime = 0x10FC; // GameTime_t
    constexpr std::ptrdiff_t m_vecGrabbedPos = 0x1100; // Vector
    constexpr std::ptrdiff_t m_flRescueStartTime = 0x110C; // GameTime_t
    constexpr std::ptrdiff_t m_flGrabSuccessTime = 0x1110; // GameTime_t
    constexpr std::ptrdiff_t m_flDropStartTime = 0x1114; // GameTime_t
    constexpr std::ptrdiff_t m_flDeadOrRescuedTime = 0x1118; // GameTime_t
    constexpr std::ptrdiff_t m_blinkTimer = 0x1120; // CountdownTimer
    constexpr std::ptrdiff_t m_lookAt = 0x1138; // Vector
    constexpr std::ptrdiff_t m_lookAroundTimer = 0x1148; // CountdownTimer
    constexpr std::ptrdiff_t m_isInit = 0x1160; // bool
    constexpr std::ptrdiff_t m_eyeAttachment = 0x1161; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_chestAttachment = 0x1162; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_pPredictionOwner = 0x1168; // CBasePlayerController*
    constexpr std::ptrdiff_t m_fNewestAlphaThinkTime = 0x1170; // GameTime_t
}

namespace C_HostageCarriableProp { // CBaseAnimGraph
}

namespace C_IncendiaryGrenade { // C_MolotovGrenade
}

namespace C_Inferno { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_nfxFireDamageEffect = 0xD00; // ParticleIndex_t
    constexpr std::ptrdiff_t m_firePositions = 0xD04; // Vector[64]
    constexpr std::ptrdiff_t m_fireParentPositions = 0x1004; // Vector[64]
    constexpr std::ptrdiff_t m_bFireIsBurning = 0x1304; // bool[64]
    constexpr std::ptrdiff_t m_BurnNormal = 0x1344; // Vector[64]
    constexpr std::ptrdiff_t m_fireCount = 0x1644; // int32_t
    constexpr std::ptrdiff_t m_nInfernoType = 0x1648; // int32_t
    constexpr std::ptrdiff_t m_nFireLifetime = 0x164C; // float
    constexpr std::ptrdiff_t m_bInPostEffectTime = 0x1650; // bool
    constexpr std::ptrdiff_t m_lastFireCount = 0x1654; // int32_t
    constexpr std::ptrdiff_t m_nFireEffectTickBegin = 0x1658; // int32_t
    constexpr std::ptrdiff_t m_drawableCount = 0x8260; // int32_t
    constexpr std::ptrdiff_t m_blosCheck = 0x8264; // bool
    constexpr std::ptrdiff_t m_nlosperiod = 0x8268; // int32_t
    constexpr std::ptrdiff_t m_maxFireHalfWidth = 0x826C; // float
    constexpr std::ptrdiff_t m_maxFireHeight = 0x8270; // float
    constexpr std::ptrdiff_t m_minBounds = 0x8274; // Vector
    constexpr std::ptrdiff_t m_maxBounds = 0x8280; // Vector
    constexpr std::ptrdiff_t m_flLastGrassBurnThink = 0x828C; // float
}

namespace C_InfoInstructorHintHostageRescueZone { // C_PointEntity
}

namespace C_InfoLadderDismount { // C_BaseEntity
}

namespace C_InfoVisibilityBox { // C_BaseEntity
    constexpr std::ptrdiff_t m_nMode = 0x544; // int32_t
    constexpr std::ptrdiff_t m_vBoxSize = 0x548; // Vector
    constexpr std::ptrdiff_t m_bEnabled = 0x554; // bool
}

namespace C_IronSightController {
    constexpr std::ptrdiff_t m_bIronSightAvailable = 0x10; // bool
    constexpr std::ptrdiff_t m_flIronSightAmount = 0x14; // float
    constexpr std::ptrdiff_t m_flIronSightAmountGained = 0x18; // float
    constexpr std::ptrdiff_t m_flIronSightAmountBiased = 0x1C; // float
    constexpr std::ptrdiff_t m_flIronSightAmount_Interpolated = 0x20; // float
    constexpr std::ptrdiff_t m_flIronSightAmountGained_Interpolated = 0x24; // float
    constexpr std::ptrdiff_t m_flIronSightAmountBiased_Interpolated = 0x28; // float
    constexpr std::ptrdiff_t m_flInterpolationLastUpdated = 0x2C; // float
    constexpr std::ptrdiff_t m_angDeltaAverage = 0x30; // QAngle[8]
    constexpr std::ptrdiff_t m_angViewLast = 0x90; // QAngle
    constexpr std::ptrdiff_t m_vecDotCoords = 0x9C; // Vector2D
    constexpr std::ptrdiff_t m_flDotBlur = 0xA4; // float
    constexpr std::ptrdiff_t m_flSpeedRatio = 0xA8; // float
}

namespace C_Item { // C_EconEntity
    constexpr std::ptrdiff_t m_bShouldGlow = 0x1560; // bool
    constexpr std::ptrdiff_t m_pReticleHintTextName = 0x1561; // char[256]
}

namespace C_ItemDogtags { // C_Item
    constexpr std::ptrdiff_t m_OwningPlayer = 0x1668; // CHandle<C_CSPlayerPawn>
    constexpr std::ptrdiff_t m_KillingPlayer = 0x166C; // CHandle<C_CSPlayerPawn>
}

namespace C_Item_Healthshot { // C_WeaponBaseItem
}

namespace C_Knife { // C_CSWeaponBase
}

namespace C_LightDirectionalEntity { // C_LightEntity
}

namespace C_LightEntity { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_CLightComponent = 0xCC0; // CLightComponent*
}

namespace C_LightEnvironmentEntity { // C_LightDirectionalEntity
}

namespace C_LightGlow { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_nHorizontalSize = 0xCC0; // uint32_t
    constexpr std::ptrdiff_t m_nVerticalSize = 0xCC4; // uint32_t
    constexpr std::ptrdiff_t m_nMinDist = 0xCC8; // uint32_t
    constexpr std::ptrdiff_t m_nMaxDist = 0xCCC; // uint32_t
    constexpr std::ptrdiff_t m_nOuterMaxDist = 0xCD0; // uint32_t
    constexpr std::ptrdiff_t m_flGlowProxySize = 0xCD4; // float
    constexpr std::ptrdiff_t m_flHDRColorScale = 0xCD8; // float
    constexpr std::ptrdiff_t m_Glow = 0xCE0; // C_LightGlowOverlay
}

namespace C_LightGlowOverlay { // CGlowOverlay
    constexpr std::ptrdiff_t m_vecOrigin = 0xD0; // Vector
    constexpr std::ptrdiff_t m_vecDirection = 0xDC; // Vector
    constexpr std::ptrdiff_t m_nMinDist = 0xE8; // int32_t
    constexpr std::ptrdiff_t m_nMaxDist = 0xEC; // int32_t
    constexpr std::ptrdiff_t m_nOuterMaxDist = 0xF0; // int32_t
    constexpr std::ptrdiff_t m_bOneSided = 0xF4; // bool
    constexpr std::ptrdiff_t m_bModulateByDot = 0xF5; // bool
}

namespace C_LightOrthoEntity { // C_LightEntity
}

namespace C_LightSpotEntity { // C_LightEntity
}

namespace C_LocalTempEntity { // CBaseAnimGraph
    constexpr std::ptrdiff_t flags = 0xE98; // int32_t
    constexpr std::ptrdiff_t die = 0xE9C; // GameTime_t
    constexpr std::ptrdiff_t m_flFrameMax = 0xEA0; // float
    constexpr std::ptrdiff_t x = 0xEA4; // float
    constexpr std::ptrdiff_t y = 0xEA8; // float
    constexpr std::ptrdiff_t fadeSpeed = 0xEAC; // float
    constexpr std::ptrdiff_t bounceFactor = 0xEB0; // float
    constexpr std::ptrdiff_t hitSound = 0xEB4; // int32_t
    constexpr std::ptrdiff_t priority = 0xEB8; // int32_t
    constexpr std::ptrdiff_t tentOffset = 0xEBC; // Vector
    constexpr std::ptrdiff_t m_vecTempEntAngVelocity = 0xEC8; // QAngle
    constexpr std::ptrdiff_t tempent_renderamt = 0xED4; // int32_t
    constexpr std::ptrdiff_t m_vecNormal = 0xED8; // Vector
    constexpr std::ptrdiff_t m_flSpriteScale = 0xEE4; // float
    constexpr std::ptrdiff_t m_nFlickerFrame = 0xEE8; // int32_t
    constexpr std::ptrdiff_t m_flFrameRate = 0xEEC; // float
    constexpr std::ptrdiff_t m_flFrame = 0xEF0; // float
    constexpr std::ptrdiff_t m_pszImpactEffect = 0xEF8; // char*
    constexpr std::ptrdiff_t m_pszParticleEffect = 0xF00; // char*
    constexpr std::ptrdiff_t m_bParticleCollision = 0xF08; // bool
    constexpr std::ptrdiff_t m_iLastCollisionFrame = 0xF0C; // int32_t
    constexpr std::ptrdiff_t m_vLastCollisionOrigin = 0xF10; // Vector
    constexpr std::ptrdiff_t m_vecTempEntVelocity = 0xF1C; // Vector
    constexpr std::ptrdiff_t m_vecPrevAbsOrigin = 0xF28; // Vector
    constexpr std::ptrdiff_t m_vecTempEntAcceleration = 0xF34; // Vector
}

namespace C_MapPreviewParticleSystem { // C_ParticleSystem
}

namespace C_MapVetoPickController { // C_BaseEntity
    constexpr std::ptrdiff_t m_nDraftType = 0x550; // int32_t
    constexpr std::ptrdiff_t m_nTeamWinningCoinToss = 0x554; // int32_t
    constexpr std::ptrdiff_t m_nTeamWithFirstChoice = 0x558; // int32_t[64]
    constexpr std::ptrdiff_t m_nVoteMapIdsList = 0x658; // int32_t[7]
    constexpr std::ptrdiff_t m_nAccountIDs = 0x674; // int32_t[64]
    constexpr std::ptrdiff_t m_nMapId0 = 0x774; // int32_t[64]
    constexpr std::ptrdiff_t m_nMapId1 = 0x874; // int32_t[64]
    constexpr std::ptrdiff_t m_nMapId2 = 0x974; // int32_t[64]
    constexpr std::ptrdiff_t m_nMapId3 = 0xA74; // int32_t[64]
    constexpr std::ptrdiff_t m_nMapId4 = 0xB74; // int32_t[64]
    constexpr std::ptrdiff_t m_nMapId5 = 0xC74; // int32_t[64]
    constexpr std::ptrdiff_t m_nStartingSide0 = 0xD74; // int32_t[64]
    constexpr std::ptrdiff_t m_nCurrentPhase = 0xE74; // int32_t
    constexpr std::ptrdiff_t m_nPhaseStartTick = 0xE78; // int32_t
    constexpr std::ptrdiff_t m_nPhaseDurationTicks = 0xE7C; // int32_t
    constexpr std::ptrdiff_t m_nPostDataUpdateTick = 0xE80; // int32_t
    constexpr std::ptrdiff_t m_bDisabledHud = 0xE84; // bool
}

namespace C_Melee { // C_CSWeaponBase
}

namespace C_ModelPointEntity { // C_BaseModelEntity
}

namespace C_MolotovGrenade { // C_BaseCSGrenade
}

namespace C_MolotovProjectile { // C_BaseCSGrenadeProjectile
    constexpr std::ptrdiff_t m_bIsIncGrenade = 0x1100; // bool
}

namespace C_Multimeter { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_hTargetC4 = 0xE88; // CHandle<C_PlantedC4>
}

namespace C_MultiplayRules { // C_GameRules
}

namespace C_NetTestBaseCombatCharacter { // C_BaseCombatCharacter
}

namespace C_OmniLight { // C_BarnLight
    constexpr std::ptrdiff_t m_flInnerAngle = 0xF08; // float
    constexpr std::ptrdiff_t m_flOuterAngle = 0xF0C; // float
    constexpr std::ptrdiff_t m_bShowLight = 0xF10; // bool
}

namespace C_ParticleSystem { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_szSnapshotFileName = 0xCC0; // char[512]
    constexpr std::ptrdiff_t m_bActive = 0xEC0; // bool
    constexpr std::ptrdiff_t m_bFrozen = 0xEC1; // bool
    constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0xEC4; // float
    constexpr std::ptrdiff_t m_nStopType = 0xEC8; // int32_t
    constexpr std::ptrdiff_t m_bAnimateDuringGameplayPause = 0xECC; // bool
    constexpr std::ptrdiff_t m_iEffectIndex = 0xED0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    constexpr std::ptrdiff_t m_flStartTime = 0xED8; // GameTime_t
    constexpr std::ptrdiff_t m_flPreSimTime = 0xEDC; // float
    constexpr std::ptrdiff_t m_vServerControlPoints = 0xEE0; // Vector[4]
    constexpr std::ptrdiff_t m_iServerControlPointAssignments = 0xF10; // uint8_t[4]
    constexpr std::ptrdiff_t m_hControlPointEnts = 0xF14; // CHandle<C_BaseEntity>[64]
    constexpr std::ptrdiff_t m_bNoSave = 0x1014; // bool
    constexpr std::ptrdiff_t m_bNoFreeze = 0x1015; // bool
    constexpr std::ptrdiff_t m_bNoRamp = 0x1016; // bool
    constexpr std::ptrdiff_t m_bStartActive = 0x1017; // bool
    constexpr std::ptrdiff_t m_iszEffectName = 0x1018; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszControlPointNames = 0x1020; // CUtlSymbolLarge[64]
    constexpr std::ptrdiff_t m_nDataCP = 0x1220; // int32_t
    constexpr std::ptrdiff_t m_vecDataCPValue = 0x1224; // Vector
    constexpr std::ptrdiff_t m_nTintCP = 0x1230; // int32_t
    constexpr std::ptrdiff_t m_clrTint = 0x1234; // Color
    constexpr std::ptrdiff_t m_bOldActive = 0x1258; // bool
    constexpr std::ptrdiff_t m_bOldFrozen = 0x1259; // bool
}

namespace C_PathParticleRope { // C_BaseEntity
    constexpr std::ptrdiff_t m_bStartActive = 0x540; // bool
    constexpr std::ptrdiff_t m_flMaxSimulationTime = 0x544; // float
    constexpr std::ptrdiff_t m_iszEffectName = 0x548; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_PathNodes_Name = 0x550; // CUtlVector<CUtlSymbolLarge>
    constexpr std::ptrdiff_t m_flParticleSpacing = 0x568; // float
    constexpr std::ptrdiff_t m_flSlack = 0x56C; // float
    constexpr std::ptrdiff_t m_flRadius = 0x570; // float
    constexpr std::ptrdiff_t m_ColorTint = 0x574; // Color
    constexpr std::ptrdiff_t m_nEffectState = 0x578; // int32_t
    constexpr std::ptrdiff_t m_iEffectIndex = 0x580; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    constexpr std::ptrdiff_t m_PathNodes_Position = 0x588; // C_NetworkUtlVectorBase<Vector>
    constexpr std::ptrdiff_t m_PathNodes_TangentIn = 0x5A0; // C_NetworkUtlVectorBase<Vector>
    constexpr std::ptrdiff_t m_PathNodes_TangentOut = 0x5B8; // C_NetworkUtlVectorBase<Vector>
    constexpr std::ptrdiff_t m_PathNodes_Color = 0x5D0; // C_NetworkUtlVectorBase<Vector>
    constexpr std::ptrdiff_t m_PathNodes_PinEnabled = 0x5E8; // C_NetworkUtlVectorBase<bool>
    constexpr std::ptrdiff_t m_PathNodes_RadiusScale = 0x600; // C_NetworkUtlVectorBase<float>
}

namespace C_PathParticleRopeAlias_path_particle_rope_clientside { // C_PathParticleRope
}

namespace C_PhysBox { // C_Breakable
}

namespace C_PhysMagnet { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_aAttachedObjectsFromServer = 0xE80; // CUtlVector<int32_t>
    constexpr std::ptrdiff_t m_aAttachedObjects = 0xE98; // CUtlVector<CHandle<C_BaseEntity>>
}

namespace C_PhysPropClientside { // C_BreakableProp
    constexpr std::ptrdiff_t m_flTouchDelta = 0xFD0; // GameTime_t
    constexpr std::ptrdiff_t m_fDeathTime = 0xFD4; // GameTime_t
    constexpr std::ptrdiff_t m_impactEnergyScale = 0xFD8; // float
    constexpr std::ptrdiff_t m_inertiaScale = 0xFDC; // float
    constexpr std::ptrdiff_t m_flDmgModBullet = 0xFE0; // float
    constexpr std::ptrdiff_t m_flDmgModClub = 0xFE4; // float
    constexpr std::ptrdiff_t m_flDmgModExplosive = 0xFE8; // float
    constexpr std::ptrdiff_t m_flDmgModFire = 0xFEC; // float
    constexpr std::ptrdiff_t m_iszPhysicsDamageTableName = 0xFF0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszBasePropData = 0xFF8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iInteractions = 0x1000; // int32_t
    constexpr std::ptrdiff_t m_bHasBreakPiecesOrCommands = 0x1004; // bool
    constexpr std::ptrdiff_t m_vecDamagePosition = 0x1008; // Vector
    constexpr std::ptrdiff_t m_vecDamageDirection = 0x1014; // Vector
    constexpr std::ptrdiff_t m_nDamageType = 0x1020; // int32_t
}

namespace C_PhysicsProp { // C_BreakableProp
    constexpr std::ptrdiff_t m_bAwake = 0xFD0; // bool
}

namespace C_PhysicsPropMultiplayer { // C_PhysicsProp
}

namespace C_PickUpModelSlerper { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_hPlayerParent = 0xE80; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_hItem = 0xE84; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_flTimePickedUp = 0xE88; // float
    constexpr std::ptrdiff_t m_angOriginal = 0xE8C; // QAngle
    constexpr std::ptrdiff_t m_vecPosOriginal = 0xE98; // Vector
    constexpr std::ptrdiff_t m_angRandom = 0xEA8; // QAngle
}

namespace C_PlantedC4 { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_bBombTicking = 0xE80; // bool
    constexpr std::ptrdiff_t m_nBombSite = 0xE84; // int32_t
    constexpr std::ptrdiff_t m_nSourceSoundscapeHash = 0xE88; // int32_t
    constexpr std::ptrdiff_t m_entitySpottedState = 0xE90; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_flNextGlow = 0xEA8; // GameTime_t
    constexpr std::ptrdiff_t m_flNextBeep = 0xEAC; // GameTime_t
    constexpr std::ptrdiff_t m_flC4Blow = 0xEB0; // GameTime_t
    constexpr std::ptrdiff_t m_bCannotBeDefused = 0xEB4; // bool
    constexpr std::ptrdiff_t m_bHasExploded = 0xEB5; // bool
    constexpr std::ptrdiff_t m_flTimerLength = 0xEB8; // float
    constexpr std::ptrdiff_t m_bBeingDefused = 0xEBC; // bool
    constexpr std::ptrdiff_t m_bTriggerWarning = 0xEC0; // float
    constexpr std::ptrdiff_t m_bExplodeWarning = 0xEC4; // float
    constexpr std::ptrdiff_t m_bC4Activated = 0xEC8; // bool
    constexpr std::ptrdiff_t m_bTenSecWarning = 0xEC9; // bool
    constexpr std::ptrdiff_t m_flDefuseLength = 0xECC; // float
    constexpr std::ptrdiff_t m_flDefuseCountDown = 0xED0; // GameTime_t
    constexpr std::ptrdiff_t m_bBombDefused = 0xED4; // bool
    constexpr std::ptrdiff_t m_hBombDefuser = 0xED8; // CHandle<C_CSPlayerPawn>
    constexpr std::ptrdiff_t m_hControlPanel = 0xEDC; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_hDefuserMultimeter = 0xEE0; // CHandle<C_Multimeter>
    constexpr std::ptrdiff_t m_flNextRadarFlashTime = 0xEE4; // GameTime_t
    constexpr std::ptrdiff_t m_bRadarFlash = 0xEE8; // bool
    constexpr std::ptrdiff_t m_pBombDefuser = 0xEEC; // CHandle<C_CSPlayerPawn>
    constexpr std::ptrdiff_t m_fLastDefuseTime = 0xEF0; // GameTime_t
    constexpr std::ptrdiff_t m_pPredictionOwner = 0xEF8; // CBasePlayerController*
}

namespace C_PlayerPing { // C_BaseEntity
    constexpr std::ptrdiff_t m_hPlayer = 0x570; // CHandle<C_CSPlayerPawn>
    constexpr std::ptrdiff_t m_hPingedEntity = 0x574; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_iType = 0x578; // int32_t
    constexpr std::ptrdiff_t m_bUrgent = 0x57C; // bool
    constexpr std::ptrdiff_t m_szPlaceName = 0x57D; // char[18]
}

namespace C_PlayerSprayDecal { // C_ModelPointEntity
    constexpr std::ptrdiff_t m_nUniqueID = 0xCC0; // int32_t
    constexpr std::ptrdiff_t m_unAccountID = 0xCC4; // uint32_t
    constexpr std::ptrdiff_t m_unTraceID = 0xCC8; // uint32_t
    constexpr std::ptrdiff_t m_rtGcTime = 0xCCC; // uint32_t
    constexpr std::ptrdiff_t m_vecEndPos = 0xCD0; // Vector
    constexpr std::ptrdiff_t m_vecStart = 0xCDC; // Vector
    constexpr std::ptrdiff_t m_vecLeft = 0xCE8; // Vector
    constexpr std::ptrdiff_t m_vecNormal = 0xCF4; // Vector
    constexpr std::ptrdiff_t m_nPlayer = 0xD00; // int32_t
    constexpr std::ptrdiff_t m_nEntity = 0xD04; // int32_t
    constexpr std::ptrdiff_t m_nHitbox = 0xD08; // int32_t
    constexpr std::ptrdiff_t m_flCreationTime = 0xD0C; // float
    constexpr std::ptrdiff_t m_nTintID = 0xD10; // int32_t
    constexpr std::ptrdiff_t m_nVersion = 0xD14; // uint8_t
    constexpr std::ptrdiff_t m_ubSignature = 0xD15; // uint8_t[128]
    constexpr std::ptrdiff_t m_SprayRenderHelper = 0xDA0; // CPlayerSprayDecalRenderHelper
}

namespace C_PlayerVisibility { // C_BaseEntity
    constexpr std::ptrdiff_t m_flVisibilityStrength = 0x540; // float
    constexpr std::ptrdiff_t m_flFogDistanceMultiplier = 0x544; // float
    constexpr std::ptrdiff_t m_flFogMaxDensityMultiplier = 0x548; // float
    constexpr std::ptrdiff_t m_flFadeTime = 0x54C; // float
    constexpr std::ptrdiff_t m_bStartDisabled = 0x550; // bool
    constexpr std::ptrdiff_t m_bIsEnabled = 0x551; // bool
}

namespace C_PointCamera { // C_BaseEntity
    constexpr std::ptrdiff_t m_FOV = 0x540; // float
    constexpr std::ptrdiff_t m_Resolution = 0x544; // float
    constexpr std::ptrdiff_t m_bFogEnable = 0x548; // bool
    constexpr std::ptrdiff_t m_FogColor = 0x549; // Color
    constexpr std::ptrdiff_t m_flFogStart = 0x550; // float
    constexpr std::ptrdiff_t m_flFogEnd = 0x554; // float
    constexpr std::ptrdiff_t m_flFogMaxDensity = 0x558; // float
    constexpr std::ptrdiff_t m_bActive = 0x55C; // bool
    constexpr std::ptrdiff_t m_bUseScreenAspectRatio = 0x55D; // bool
    constexpr std::ptrdiff_t m_flAspectRatio = 0x560; // float
    constexpr std::ptrdiff_t m_bNoSky = 0x564; // bool
    constexpr std::ptrdiff_t m_fBrightness = 0x568; // float
    constexpr std::ptrdiff_t m_flZFar = 0x56C; // float
    constexpr std::ptrdiff_t m_flZNear = 0x570; // float
    constexpr std::ptrdiff_t m_bCanHLTVUse = 0x574; // bool
    constexpr std::ptrdiff_t m_bDofEnabled = 0x575; // bool
    constexpr std::ptrdiff_t m_flDofNearBlurry = 0x578; // float
    constexpr std::ptrdiff_t m_flDofNearCrisp = 0x57C; // float
    constexpr std::ptrdiff_t m_flDofFarCrisp = 0x580; // float
    constexpr std::ptrdiff_t m_flDofFarBlurry = 0x584; // float
    constexpr std::ptrdiff_t m_flDofTiltToGround = 0x588; // float
    constexpr std::ptrdiff_t m_TargetFOV = 0x58C; // float
    constexpr std::ptrdiff_t m_DegreesPerSecond = 0x590; // float
    constexpr std::ptrdiff_t m_bIsOn = 0x594; // bool
    constexpr std::ptrdiff_t m_pNext = 0x598; // C_PointCamera*
}

namespace C_PointCameraVFOV { // C_PointCamera
    constexpr std::ptrdiff_t m_flVerticalFOV = 0x5A0; // float
}

namespace C_PointClientUIDialog { // C_BaseClientUIEntity
    constexpr std::ptrdiff_t m_hActivator = 0xCF0; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_bStartEnabled = 0xCF4; // bool
}

namespace C_PointClientUIHUD { // C_BaseClientUIEntity
    constexpr std::ptrdiff_t m_bCheckCSSClasses = 0xCF8; // bool
    constexpr std::ptrdiff_t m_bIgnoreInput = 0xE80; // bool
    constexpr std::ptrdiff_t m_flWidth = 0xE84; // float
    constexpr std::ptrdiff_t m_flHeight = 0xE88; // float
    constexpr std::ptrdiff_t m_flDPI = 0xE8C; // float
    constexpr std::ptrdiff_t m_flInteractDistance = 0xE90; // float
    constexpr std::ptrdiff_t m_flDepthOffset = 0xE94; // float
    constexpr std::ptrdiff_t m_unOwnerContext = 0xE98; // uint32_t
    constexpr std::ptrdiff_t m_unHorizontalAlign = 0xE9C; // uint32_t
    constexpr std::ptrdiff_t m_unVerticalAlign = 0xEA0; // uint32_t
    constexpr std::ptrdiff_t m_unOrientation = 0xEA4; // uint32_t
    constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0xEA8; // bool
    constexpr std::ptrdiff_t m_vecCSSClasses = 0xEB0; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
}

namespace C_PointClientUIWorldPanel { // C_BaseClientUIEntity
    constexpr std::ptrdiff_t m_bForceRecreateNextUpdate = 0xCF8; // bool
    constexpr std::ptrdiff_t m_bMoveViewToPlayerNextThink = 0xCF9; // bool
    constexpr std::ptrdiff_t m_bCheckCSSClasses = 0xCFA; // bool
    constexpr std::ptrdiff_t m_anchorDeltaTransform = 0xD00; // CTransform
    constexpr std::ptrdiff_t m_pOffScreenIndicator = 0xEA0; // CPointOffScreenIndicatorUi*
    constexpr std::ptrdiff_t m_bIgnoreInput = 0xEC8; // bool
    constexpr std::ptrdiff_t m_bLit = 0xEC9; // bool
    constexpr std::ptrdiff_t m_bFollowPlayerAcrossTeleport = 0xECA; // bool
    constexpr std::ptrdiff_t m_flWidth = 0xECC; // float
    constexpr std::ptrdiff_t m_flHeight = 0xED0; // float
    constexpr std::ptrdiff_t m_flDPI = 0xED4; // float
    constexpr std::ptrdiff_t m_flInteractDistance = 0xED8; // float
    constexpr std::ptrdiff_t m_flDepthOffset = 0xEDC; // float
    constexpr std::ptrdiff_t m_unOwnerContext = 0xEE0; // uint32_t
    constexpr std::ptrdiff_t m_unHorizontalAlign = 0xEE4; // uint32_t
    constexpr std::ptrdiff_t m_unVerticalAlign = 0xEE8; // uint32_t
    constexpr std::ptrdiff_t m_unOrientation = 0xEEC; // uint32_t
    constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0xEF0; // bool
    constexpr std::ptrdiff_t m_vecCSSClasses = 0xEF8; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
    constexpr std::ptrdiff_t m_bOpaque = 0xF10; // bool
    constexpr std::ptrdiff_t m_bNoDepth = 0xF11; // bool
    constexpr std::ptrdiff_t m_bRenderBackface = 0xF12; // bool
    constexpr std::ptrdiff_t m_bUseOffScreenIndicator = 0xF13; // bool
    constexpr std::ptrdiff_t m_bExcludeFromSaveGames = 0xF14; // bool
    constexpr std::ptrdiff_t m_bGrabbable = 0xF15; // bool
    constexpr std::ptrdiff_t m_bOnlyRenderToTexture = 0xF16; // bool
    constexpr std::ptrdiff_t m_bDisableMipGen = 0xF17; // bool
    constexpr std::ptrdiff_t m_nExplicitImageLayout = 0xF18; // int32_t
}

namespace C_PointClientUIWorldTextPanel { // C_PointClientUIWorldPanel
    constexpr std::ptrdiff_t m_messageText = 0xF20; // char[512]
}

namespace C_PointCommentaryNode { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_bActive = 0xE88; // bool
    constexpr std::ptrdiff_t m_bWasActive = 0xE89; // bool
    constexpr std::ptrdiff_t m_flEndTime = 0xE8C; // GameTime_t
    constexpr std::ptrdiff_t m_flStartTime = 0xE90; // GameTime_t
    constexpr std::ptrdiff_t m_flStartTimeInCommentary = 0xE94; // float
    constexpr std::ptrdiff_t m_iszCommentaryFile = 0xE98; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTitle = 0xEA0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSpeakers = 0xEA8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iNodeNumber = 0xEB0; // int32_t
    constexpr std::ptrdiff_t m_iNodeNumberMax = 0xEB4; // int32_t
    constexpr std::ptrdiff_t m_bListenedTo = 0xEB8; // bool
    constexpr std::ptrdiff_t m_hViewPosition = 0xEC8; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_bRestartAfterRestore = 0xECC; // bool
}

namespace C_PointEntity { // C_BaseEntity
}

namespace C_PointValueRemapper { // C_BaseEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x540; // bool
    constexpr std::ptrdiff_t m_bDisabledOld = 0x541; // bool
    constexpr std::ptrdiff_t m_bUpdateOnClient = 0x542; // bool
    constexpr std::ptrdiff_t m_nInputType = 0x544; // ValueRemapperInputType_t
    constexpr std::ptrdiff_t m_hRemapLineStart = 0x548; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_hRemapLineEnd = 0x54C; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_flMaximumChangePerSecond = 0x550; // float
    constexpr std::ptrdiff_t m_flDisengageDistance = 0x554; // float
    constexpr std::ptrdiff_t m_flEngageDistance = 0x558; // float
    constexpr std::ptrdiff_t m_bRequiresUseKey = 0x55C; // bool
    constexpr std::ptrdiff_t m_nOutputType = 0x560; // ValueRemapperOutputType_t
    constexpr std::ptrdiff_t m_hOutputEntities = 0x568; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
    constexpr std::ptrdiff_t m_nHapticsType = 0x580; // ValueRemapperHapticsType_t
    constexpr std::ptrdiff_t m_nMomentumType = 0x584; // ValueRemapperMomentumType_t
    constexpr std::ptrdiff_t m_flMomentumModifier = 0x588; // float
    constexpr std::ptrdiff_t m_flSnapValue = 0x58C; // float
    constexpr std::ptrdiff_t m_flCurrentMomentum = 0x590; // float
    constexpr std::ptrdiff_t m_nRatchetType = 0x594; // ValueRemapperRatchetType_t
    constexpr std::ptrdiff_t m_flRatchetOffset = 0x598; // float
    constexpr std::ptrdiff_t m_flInputOffset = 0x59C; // float
    constexpr std::ptrdiff_t m_bEngaged = 0x5A0; // bool
    constexpr std::ptrdiff_t m_bFirstUpdate = 0x5A1; // bool
    constexpr std::ptrdiff_t m_flPreviousValue = 0x5A4; // float
    constexpr std::ptrdiff_t m_flPreviousUpdateTickTime = 0x5A8; // GameTime_t
    constexpr std::ptrdiff_t m_vecPreviousTestPoint = 0x5AC; // Vector
}

namespace C_PointWorldText { // C_ModelPointEntity
    constexpr std::ptrdiff_t m_bForceRecreateNextUpdate = 0xCC8; // bool
    constexpr std::ptrdiff_t m_messageText = 0xCD8; // char[512]
    constexpr std::ptrdiff_t m_FontName = 0xED8; // char[64]
    constexpr std::ptrdiff_t m_bEnabled = 0xF18; // bool
    constexpr std::ptrdiff_t m_bFullbright = 0xF19; // bool
    constexpr std::ptrdiff_t m_flWorldUnitsPerPx = 0xF1C; // float
    constexpr std::ptrdiff_t m_flFontSize = 0xF20; // float
    constexpr std::ptrdiff_t m_flDepthOffset = 0xF24; // float
    constexpr std::ptrdiff_t m_Color = 0xF28; // Color
    constexpr std::ptrdiff_t m_nJustifyHorizontal = 0xF2C; // PointWorldTextJustifyHorizontal_t
    constexpr std::ptrdiff_t m_nJustifyVertical = 0xF30; // PointWorldTextJustifyVertical_t
    constexpr std::ptrdiff_t m_nReorientMode = 0xF34; // PointWorldTextReorientMode_t
}

namespace C_PostProcessingVolume { // C_BaseTrigger
    constexpr std::ptrdiff_t m_hPostSettings = 0xCD8; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
    constexpr std::ptrdiff_t m_flFadeDuration = 0xCE0; // float
    constexpr std::ptrdiff_t m_flMinLogExposure = 0xCE4; // float
    constexpr std::ptrdiff_t m_flMaxLogExposure = 0xCE8; // float
    constexpr std::ptrdiff_t m_flMinExposure = 0xCEC; // float
    constexpr std::ptrdiff_t m_flMaxExposure = 0xCF0; // float
    constexpr std::ptrdiff_t m_flExposureCompensation = 0xCF4; // float
    constexpr std::ptrdiff_t m_flExposureFadeSpeedUp = 0xCF8; // float
    constexpr std::ptrdiff_t m_flExposureFadeSpeedDown = 0xCFC; // float
    constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0xD00; // float
    constexpr std::ptrdiff_t m_bMaster = 0xD04; // bool
    constexpr std::ptrdiff_t m_bExposureControl = 0xD05; // bool
    constexpr std::ptrdiff_t m_flRate = 0xD08; // float
    constexpr std::ptrdiff_t m_flTonemapPercentTarget = 0xD0C; // float
    constexpr std::ptrdiff_t m_flTonemapPercentBrightPixels = 0xD10; // float
    constexpr std::ptrdiff_t m_flTonemapMinAvgLum = 0xD14; // float
}

namespace C_Precipitation { // C_BaseTrigger
    constexpr std::ptrdiff_t m_flDensity = 0xCC8; // float
    constexpr std::ptrdiff_t m_flParticleInnerDist = 0xCD8; // float
    constexpr std::ptrdiff_t m_pParticleDef = 0xCE0; // char*
    constexpr std::ptrdiff_t m_tParticlePrecipTraceTimer = 0xD08; // TimedEvent[1]
    constexpr std::ptrdiff_t m_bActiveParticlePrecipEmitter = 0xD10; // bool[1]
    constexpr std::ptrdiff_t m_bParticlePrecipInitialized = 0xD11; // bool
    constexpr std::ptrdiff_t m_bHasSimulatedSinceLastSceneObjectUpdate = 0xD12; // bool
    constexpr std::ptrdiff_t m_nAvailableSheetSequencesMaxIndex = 0xD14; // int32_t
}

namespace C_PrecipitationBlocker { // C_BaseModelEntity
}

namespace C_PredictedViewModel { // C_BaseViewModel
    constexpr std::ptrdiff_t m_LagAnglesHistory = 0xEE8; // QAngle
    constexpr std::ptrdiff_t m_vPredictedOffset = 0xF00; // Vector
}

namespace C_RagdollManager { // C_BaseEntity
    constexpr std::ptrdiff_t m_iCurrentMaxRagdollCount = 0x540; // int8_t
}

namespace C_RagdollProp { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_ragPos = 0xE88; // C_NetworkUtlVectorBase<Vector>
    constexpr std::ptrdiff_t m_ragAngles = 0xEA0; // C_NetworkUtlVectorBase<QAngle>
    constexpr std::ptrdiff_t m_flBlendWeight = 0xEB8; // float
    constexpr std::ptrdiff_t m_hRagdollSource = 0xEBC; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_iEyeAttachment = 0xEC0; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_flBlendWeightCurrent = 0xEC4; // float
    constexpr std::ptrdiff_t m_parentPhysicsBoneIndices = 0xEC8; // CUtlVector<int32_t>
    constexpr std::ptrdiff_t m_worldSpaceBoneComputationOrder = 0xEE0; // CUtlVector<int32_t>
}

namespace C_RagdollPropAttached { // C_RagdollProp
    constexpr std::ptrdiff_t m_boneIndexAttached = 0xEF8; // uint32_t
    constexpr std::ptrdiff_t m_ragdollAttachedObjectIndex = 0xEFC; // uint32_t
    constexpr std::ptrdiff_t m_attachmentPointBoneSpace = 0xF00; // Vector
    constexpr std::ptrdiff_t m_attachmentPointRagdollSpace = 0xF0C; // Vector
    constexpr std::ptrdiff_t m_vecOffset = 0xF18; // Vector
    constexpr std::ptrdiff_t m_parentTime = 0xF24; // float
    constexpr std::ptrdiff_t m_bHasParent = 0xF28; // bool
}

namespace C_RectLight { // C_BarnLight
    constexpr std::ptrdiff_t m_bShowLight = 0xF08; // bool
}

namespace C_RetakeGameRules {
    constexpr std::ptrdiff_t m_nMatchSeed = 0xF8; // int32_t
    constexpr std::ptrdiff_t m_bBlockersPresent = 0xFC; // bool
    constexpr std::ptrdiff_t m_bRoundInProgress = 0xFD; // bool
    constexpr std::ptrdiff_t m_iFirstSecondHalfRound = 0x100; // int32_t
    constexpr std::ptrdiff_t m_iBombSite = 0x104; // int32_t
}

namespace C_RopeKeyframe { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_LinksTouchingSomething = 0xCC8; // CBitVec<10>
    constexpr std::ptrdiff_t m_nLinksTouchingSomething = 0xCCC; // int32_t
    constexpr std::ptrdiff_t m_bApplyWind = 0xCD0; // bool
    constexpr std::ptrdiff_t m_fPrevLockedPoints = 0xCD4; // int32_t
    constexpr std::ptrdiff_t m_iForcePointMoveCounter = 0xCD8; // int32_t
    constexpr std::ptrdiff_t m_bPrevEndPointPos = 0xCDC; // bool[2]
    constexpr std::ptrdiff_t m_vPrevEndPointPos = 0xCE0; // Vector[2]
    constexpr std::ptrdiff_t m_flCurScroll = 0xCF8; // float
    constexpr std::ptrdiff_t m_flScrollSpeed = 0xCFC; // float
    constexpr std::ptrdiff_t m_RopeFlags = 0xD00; // uint16_t
    constexpr std::ptrdiff_t m_iRopeMaterialModelIndex = 0xD08; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_LightValues = 0xF80; // Vector[10]
    constexpr std::ptrdiff_t m_nSegments = 0xFF8; // uint8_t
    constexpr std::ptrdiff_t m_hStartPoint = 0xFFC; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_hEndPoint = 0x1000; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_iStartAttachment = 0x1004; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_iEndAttachment = 0x1005; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_Subdiv = 0x1006; // uint8_t
    constexpr std::ptrdiff_t m_RopeLength = 0x1008; // int16_t
    constexpr std::ptrdiff_t m_Slack = 0x100A; // int16_t
    constexpr std::ptrdiff_t m_TextureScale = 0x100C; // float
    constexpr std::ptrdiff_t m_fLockedPoints = 0x1010; // uint8_t
    constexpr std::ptrdiff_t m_nChangeCount = 0x1011; // uint8_t
    constexpr std::ptrdiff_t m_Width = 0x1014; // float
    constexpr std::ptrdiff_t m_PhysicsDelegate = 0x1018; // C_RopeKeyframe::CPhysicsDelegate
    constexpr std::ptrdiff_t m_hMaterial = 0x1028; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_TextureHeight = 0x1030; // int32_t
    constexpr std::ptrdiff_t m_vecImpulse = 0x1034; // Vector
    constexpr std::ptrdiff_t m_vecPreviousImpulse = 0x1040; // Vector
    constexpr std::ptrdiff_t m_flCurrentGustTimer = 0x104C; // float
    constexpr std::ptrdiff_t m_flCurrentGustLifetime = 0x1050; // float
    constexpr std::ptrdiff_t m_flTimeToNextGust = 0x1054; // float
    constexpr std::ptrdiff_t m_vWindDir = 0x1058; // Vector
    constexpr std::ptrdiff_t m_vColorMod = 0x1064; // Vector
    constexpr std::ptrdiff_t m_vCachedEndPointAttachmentPos = 0x1070; // Vector[2]
    constexpr std::ptrdiff_t m_vCachedEndPointAttachmentAngle = 0x1088; // QAngle[2]
    constexpr std::ptrdiff_t m_bConstrainBetweenEndpoints = 0x10A0; // bool
    constexpr std::ptrdiff_t m_bEndPointAttachmentPositionsDirty = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bEndPointAttachmentAnglesDirty = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bNewDataThisFrame = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bPhysicsInitted = 0x0; // bitfield:1
}

namespace C_RopeKeyframe_CPhysicsDelegate {
    constexpr std::ptrdiff_t m_pKeyframe = 0x8; // C_RopeKeyframe*
}

namespace C_SceneEntity { // C_PointEntity
    constexpr std::ptrdiff_t m_bIsPlayingBack = 0x548; // bool
    constexpr std::ptrdiff_t m_bPaused = 0x549; // bool
    constexpr std::ptrdiff_t m_bMultiplayer = 0x54A; // bool
    constexpr std::ptrdiff_t m_bAutogenerated = 0x54B; // bool
    constexpr std::ptrdiff_t m_flForceClientTime = 0x54C; // float
    constexpr std::ptrdiff_t m_nSceneStringIndex = 0x550; // uint16_t
    constexpr std::ptrdiff_t m_bClientOnly = 0x552; // bool
    constexpr std::ptrdiff_t m_hOwner = 0x554; // CHandle<C_BaseFlex>
    constexpr std::ptrdiff_t m_hActorList = 0x558; // C_NetworkUtlVectorBase<CHandle<C_BaseFlex>>
    constexpr std::ptrdiff_t m_bWasPlaying = 0x570; // bool
    constexpr std::ptrdiff_t m_QueuedEvents = 0x580; // CUtlVector<C_SceneEntity::QueuedEvents_t>
    constexpr std::ptrdiff_t m_flCurrentTime = 0x598; // float
}

namespace C_SceneEntity_QueuedEvents_t {
    constexpr std::ptrdiff_t starttime = 0x0; // float
}

namespace C_SensorGrenade { // C_BaseCSGrenade
}

namespace C_SensorGrenadeProjectile { // C_BaseCSGrenadeProjectile
}

namespace C_ShatterGlassShardPhysics { // C_PhysicsProp
    constexpr std::ptrdiff_t m_ShardDesc = 0xFE0; // shard_model_desc_t
}

namespace C_SingleplayRules { // C_GameRules
}

namespace C_SkyCamera { // C_BaseEntity
    constexpr std::ptrdiff_t m_skyboxData = 0x540; // sky3dparams_t
    constexpr std::ptrdiff_t m_skyboxSlotToken = 0x5D0; // CUtlStringToken
    constexpr std::ptrdiff_t m_bUseAngles = 0x5D4; // bool
    constexpr std::ptrdiff_t m_pNext = 0x5D8; // C_SkyCamera*
}

namespace C_SmokeGrenade { // C_BaseCSGrenade
}

namespace C_SmokeGrenadeProjectile { // C_BaseCSGrenadeProjectile
    constexpr std::ptrdiff_t m_nSmokeEffectTickBegin = 0x1108; // int32_t
    constexpr std::ptrdiff_t m_bDidSmokeEffect = 0x110C; // bool
    constexpr std::ptrdiff_t m_nRandomSeed = 0x1110; // int32_t
    constexpr std::ptrdiff_t m_vSmokeColor = 0x1114; // Vector
    constexpr std::ptrdiff_t m_vSmokeDetonationPos = 0x1120; // Vector
    constexpr std::ptrdiff_t m_VoxelFrameData = 0x1130; // CUtlVector<uint8_t>
    constexpr std::ptrdiff_t m_bSmokeVolumeDataReceived = 0x1148; // bool
    constexpr std::ptrdiff_t m_bSmokeEffectSpawned = 0x1149; // bool
}

namespace C_SoundAreaEntityBase { // C_BaseEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x540; // bool
    constexpr std::ptrdiff_t m_bWasEnabled = 0x548; // bool
    constexpr std::ptrdiff_t m_iszSoundAreaType = 0x550; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_vPos = 0x558; // Vector
}

namespace C_SoundAreaEntityOrientedBox { // C_SoundAreaEntityBase
    constexpr std::ptrdiff_t m_vMin = 0x568; // Vector
    constexpr std::ptrdiff_t m_vMax = 0x574; // Vector
}

namespace C_SoundAreaEntitySphere { // C_SoundAreaEntityBase
    constexpr std::ptrdiff_t m_flRadius = 0x568; // float
}

namespace C_SoundOpvarSetAABBEntity { // C_SoundOpvarSetPointEntity
}

namespace C_SoundOpvarSetOBBEntity { // C_SoundOpvarSetAABBEntity
}

namespace C_SoundOpvarSetOBBWindEntity { // C_SoundOpvarSetPointBase
}

namespace C_SoundOpvarSetPathCornerEntity { // C_SoundOpvarSetPointEntity
}

namespace C_SoundOpvarSetPointBase { // C_BaseEntity
    constexpr std::ptrdiff_t m_iszStackName = 0x540; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOperatorName = 0x548; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOpvarName = 0x550; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iOpvarIndex = 0x558; // int32_t
    constexpr std::ptrdiff_t m_bUseAutoCompare = 0x55C; // bool
}

namespace C_SoundOpvarSetPointEntity { // C_SoundOpvarSetPointBase
}

namespace C_SpotlightEnd { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_flLightScale = 0xCC0; // float
    constexpr std::ptrdiff_t m_Radius = 0xCC4; // float
}

namespace C_Sprite { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_hSpriteMaterial = 0xCD8; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_hAttachedToEntity = 0xCE0; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_nAttachment = 0xCE4; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_flSpriteFramerate = 0xCE8; // float
    constexpr std::ptrdiff_t m_flFrame = 0xCEC; // float
    constexpr std::ptrdiff_t m_flDieTime = 0xCF0; // GameTime_t
    constexpr std::ptrdiff_t m_nBrightness = 0xD00; // uint32_t
    constexpr std::ptrdiff_t m_flBrightnessDuration = 0xD04; // float
    constexpr std::ptrdiff_t m_flSpriteScale = 0xD08; // float
    constexpr std::ptrdiff_t m_flScaleDuration = 0xD0C; // float
    constexpr std::ptrdiff_t m_bWorldSpaceScale = 0xD10; // bool
    constexpr std::ptrdiff_t m_flGlowProxySize = 0xD14; // float
    constexpr std::ptrdiff_t m_flHDRColorScale = 0xD18; // float
    constexpr std::ptrdiff_t m_flLastTime = 0xD1C; // GameTime_t
    constexpr std::ptrdiff_t m_flMaxFrame = 0xD20; // float
    constexpr std::ptrdiff_t m_flStartScale = 0xD24; // float
    constexpr std::ptrdiff_t m_flDestScale = 0xD28; // float
    constexpr std::ptrdiff_t m_flScaleTimeStart = 0xD2C; // GameTime_t
    constexpr std::ptrdiff_t m_nStartBrightness = 0xD30; // int32_t
    constexpr std::ptrdiff_t m_nDestBrightness = 0xD34; // int32_t
    constexpr std::ptrdiff_t m_flBrightnessTimeStart = 0xD38; // GameTime_t
    constexpr std::ptrdiff_t m_hOldSpriteMaterial = 0xD40; // CWeakHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_nSpriteWidth = 0xDE8; // int32_t
    constexpr std::ptrdiff_t m_nSpriteHeight = 0xDEC; // int32_t
}

namespace C_SpriteOriented { // C_Sprite
}

namespace C_Sun { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_fxSSSunFlareEffectIndex = 0xCC0; // ParticleIndex_t
    constexpr std::ptrdiff_t m_fxSunFlareEffectIndex = 0xCC4; // ParticleIndex_t
    constexpr std::ptrdiff_t m_fdistNormalize = 0xCC8; // float
    constexpr std::ptrdiff_t m_vSunPos = 0xCCC; // Vector
    constexpr std::ptrdiff_t m_vDirection = 0xCD8; // Vector
    constexpr std::ptrdiff_t m_iszEffectName = 0xCE8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSSEffectName = 0xCF0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_clrOverlay = 0xCF8; // Color
    constexpr std::ptrdiff_t m_bOn = 0xCFC; // bool
    constexpr std::ptrdiff_t m_bmaxColor = 0xCFD; // bool
    constexpr std::ptrdiff_t m_flSize = 0xD00; // float
    constexpr std::ptrdiff_t m_flHazeScale = 0xD04; // float
    constexpr std::ptrdiff_t m_flRotation = 0xD08; // float
    constexpr std::ptrdiff_t m_flHDRColorScale = 0xD0C; // float
    constexpr std::ptrdiff_t m_flAlphaHaze = 0xD10; // float
    constexpr std::ptrdiff_t m_flAlphaScale = 0xD14; // float
    constexpr std::ptrdiff_t m_flAlphaHdr = 0xD18; // float
    constexpr std::ptrdiff_t m_flFarZScale = 0xD1C; // float
}

namespace C_SunGlowOverlay { // CGlowOverlay
    constexpr std::ptrdiff_t m_bModulateByDot = 0xD0; // bool
}

namespace C_Team { // C_BaseEntity
    constexpr std::ptrdiff_t m_aPlayerControllers = 0x540; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
    constexpr std::ptrdiff_t m_aPlayers = 0x558; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
    constexpr std::ptrdiff_t m_iScore = 0x570; // int32_t
    constexpr std::ptrdiff_t m_szTeamname = 0x574; // char[129]
}

namespace C_TeamRoundTimer { // C_BaseEntity
    constexpr std::ptrdiff_t m_bTimerPaused = 0x540; // bool
    constexpr std::ptrdiff_t m_flTimeRemaining = 0x544; // float
    constexpr std::ptrdiff_t m_flTimerEndTime = 0x548; // GameTime_t
    constexpr std::ptrdiff_t m_bIsDisabled = 0x54C; // bool
    constexpr std::ptrdiff_t m_bShowInHUD = 0x54D; // bool
    constexpr std::ptrdiff_t m_nTimerLength = 0x550; // int32_t
    constexpr std::ptrdiff_t m_nTimerInitialLength = 0x554; // int32_t
    constexpr std::ptrdiff_t m_nTimerMaxLength = 0x558; // int32_t
    constexpr std::ptrdiff_t m_bAutoCountdown = 0x55C; // bool
    constexpr std::ptrdiff_t m_nSetupTimeLength = 0x560; // int32_t
    constexpr std::ptrdiff_t m_nState = 0x564; // int32_t
    constexpr std::ptrdiff_t m_bStartPaused = 0x568; // bool
    constexpr std::ptrdiff_t m_bInCaptureWatchState = 0x569; // bool
    constexpr std::ptrdiff_t m_flTotalTime = 0x56C; // float
    constexpr std::ptrdiff_t m_bStopWatchTimer = 0x570; // bool
    constexpr std::ptrdiff_t m_bFireFinished = 0x571; // bool
    constexpr std::ptrdiff_t m_bFire5MinRemain = 0x572; // bool
    constexpr std::ptrdiff_t m_bFire4MinRemain = 0x573; // bool
    constexpr std::ptrdiff_t m_bFire3MinRemain = 0x574; // bool
    constexpr std::ptrdiff_t m_bFire2MinRemain = 0x575; // bool
    constexpr std::ptrdiff_t m_bFire1MinRemain = 0x576; // bool
    constexpr std::ptrdiff_t m_bFire30SecRemain = 0x577; // bool
    constexpr std::ptrdiff_t m_bFire10SecRemain = 0x578; // bool
    constexpr std::ptrdiff_t m_bFire5SecRemain = 0x579; // bool
    constexpr std::ptrdiff_t m_bFire4SecRemain = 0x57A; // bool
    constexpr std::ptrdiff_t m_bFire3SecRemain = 0x57B; // bool
    constexpr std::ptrdiff_t m_bFire2SecRemain = 0x57C; // bool
    constexpr std::ptrdiff_t m_bFire1SecRemain = 0x57D; // bool
    constexpr std::ptrdiff_t m_nOldTimerLength = 0x580; // int32_t
    constexpr std::ptrdiff_t m_nOldTimerState = 0x584; // int32_t
}

namespace C_TeamplayRules { // C_MultiplayRules
}

namespace C_TextureBasedAnimatable { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_bLoop = 0xCC0; // bool
    constexpr std::ptrdiff_t m_flFPS = 0xCC4; // float
    constexpr std::ptrdiff_t m_hPositionKeys = 0xCC8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_hRotationKeys = 0xCD0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_vAnimationBoundsMin = 0xCD8; // Vector
    constexpr std::ptrdiff_t m_vAnimationBoundsMax = 0xCE4; // Vector
    constexpr std::ptrdiff_t m_flStartTime = 0xCF0; // float
    constexpr std::ptrdiff_t m_flStartFrame = 0xCF4; // float
}

namespace C_TintController { // C_BaseEntity
}

namespace C_TonemapController2 { // C_BaseEntity
    constexpr std::ptrdiff_t m_flAutoExposureMin = 0x540; // float
    constexpr std::ptrdiff_t m_flAutoExposureMax = 0x544; // float
    constexpr std::ptrdiff_t m_flTonemapPercentTarget = 0x548; // float
    constexpr std::ptrdiff_t m_flTonemapPercentBrightPixels = 0x54C; // float
    constexpr std::ptrdiff_t m_flTonemapMinAvgLum = 0x550; // float
    constexpr std::ptrdiff_t m_flExposureAdaptationSpeedUp = 0x554; // float
    constexpr std::ptrdiff_t m_flExposureAdaptationSpeedDown = 0x558; // float
    constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x55C; // float
}

namespace C_TonemapController2Alias_env_tonemap_controller2 { // C_TonemapController2
}

namespace C_TriggerBuoyancy { // C_BaseTrigger
    constexpr std::ptrdiff_t m_BuoyancyHelper = 0xCC8; // CBuoyancyHelper
    constexpr std::ptrdiff_t m_flFluidDensity = 0xCE8; // float
}

namespace C_TriggerLerpObject { // C_BaseTrigger
}

namespace C_TriggerMultiple { // C_BaseTrigger
}

namespace C_TriggerVolume { // C_BaseModelEntity
}

namespace C_ViewmodelAttachmentModel { // CBaseAnimGraph
}

namespace C_ViewmodelWeapon { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_worldModel = 0xE80; // char*
}

namespace C_VoteController { // C_BaseEntity
    constexpr std::ptrdiff_t m_iActiveIssueIndex = 0x550; // int32_t
    constexpr std::ptrdiff_t m_iOnlyTeamToVote = 0x554; // int32_t
    constexpr std::ptrdiff_t m_nVoteOptionCount = 0x558; // int32_t[5]
    constexpr std::ptrdiff_t m_nPotentialVotes = 0x56C; // int32_t
    constexpr std::ptrdiff_t m_bVotesDirty = 0x570; // bool
    constexpr std::ptrdiff_t m_bTypeDirty = 0x571; // bool
    constexpr std::ptrdiff_t m_bIsYesNoVote = 0x572; // bool
}

namespace C_WaterBullet { // CBaseAnimGraph
}

namespace C_WeaponAWP { // C_CSWeaponBaseGun
}

namespace C_WeaponAug { // C_CSWeaponBaseGun
}

namespace C_WeaponBaseItem { // C_CSWeaponBase
    constexpr std::ptrdiff_t m_SequenceCompleteTimer = 0x1A10; // CountdownTimer
    constexpr std::ptrdiff_t m_bRedraw = 0x1A28; // bool
}

namespace C_WeaponBizon { // C_CSWeaponBaseGun
}

namespace C_WeaponCZ75a { // C_CSWeaponBaseGun
}

namespace C_WeaponElite { // C_CSWeaponBaseGun
}

namespace C_WeaponFamas { // C_CSWeaponBaseGun
}

namespace C_WeaponFiveSeven { // C_CSWeaponBaseGun
}

namespace C_WeaponG3SG1 { // C_CSWeaponBaseGun
}

namespace C_WeaponGalilAR { // C_CSWeaponBaseGun
}

namespace C_WeaponGlock { // C_CSWeaponBaseGun
}

namespace C_WeaponHKP2000 { // C_CSWeaponBaseGun
}

namespace C_WeaponM249 { // C_CSWeaponBaseGun
}

namespace C_WeaponM4A1 { // C_CSWeaponBaseGun
}

namespace C_WeaponM4A1Silencer { // C_CSWeaponBaseGun
}

namespace C_WeaponMAC10 { // C_CSWeaponBaseGun
}

namespace C_WeaponMP5SD { // C_CSWeaponBaseGun
}

namespace C_WeaponMP7 { // C_CSWeaponBaseGun
}

namespace C_WeaponMP9 { // C_CSWeaponBaseGun
}

namespace C_WeaponMag7 { // C_CSWeaponBaseGun
}

namespace C_WeaponNOVA { // C_CSWeaponBase
}

namespace C_WeaponNegev { // C_CSWeaponBaseGun
}

namespace C_WeaponP250 { // C_CSWeaponBaseGun
}

namespace C_WeaponP90 { // C_CSWeaponBaseGun
}

namespace C_WeaponRevolver { // C_CSWeaponBaseGun
}

namespace C_WeaponSCAR20 { // C_CSWeaponBaseGun
}

namespace C_WeaponSG556 { // C_CSWeaponBaseGun
}

namespace C_WeaponSSG08 { // C_CSWeaponBaseGun
}

namespace C_WeaponSawedoff { // C_CSWeaponBase
}

namespace C_WeaponShield { // C_CSWeaponBaseGun
    constexpr std::ptrdiff_t m_flDisplayHealth = 0x1A30; // float
}

namespace C_WeaponTaser { // C_CSWeaponBaseGun
    constexpr std::ptrdiff_t m_fFireTime = 0x1A30; // GameTime_t
}

namespace C_WeaponTec9 { // C_CSWeaponBaseGun
}

namespace C_WeaponUMP45 { // C_CSWeaponBaseGun
}

namespace C_WeaponUSPSilencer { // C_CSWeaponBaseGun
}

namespace C_WeaponXM1014 { // C_CSWeaponBase
}

namespace C_World { // C_BaseModelEntity
}

namespace C_WorldModelGloves { // CBaseAnimGraph
}

namespace C_WorldModelNametag { // CBaseAnimGraph
}

namespace C_WorldModelStattrak { // CBaseAnimGraph
}

namespace C_fogplayerparams_t {
    constexpr std::ptrdiff_t m_hCtrl = 0x8; // CHandle<C_FogController>
    constexpr std::ptrdiff_t m_flTransitionTime = 0xC; // float
    constexpr std::ptrdiff_t m_OldColor = 0x10; // Color
    constexpr std::ptrdiff_t m_flOldStart = 0x14; // float
    constexpr std::ptrdiff_t m_flOldEnd = 0x18; // float
    constexpr std::ptrdiff_t m_flOldMaxDensity = 0x1C; // float
    constexpr std::ptrdiff_t m_flOldHDRColorScale = 0x20; // float
    constexpr std::ptrdiff_t m_flOldFarZ = 0x24; // float
    constexpr std::ptrdiff_t m_NewColor = 0x28; // Color
    constexpr std::ptrdiff_t m_flNewStart = 0x2C; // float
    constexpr std::ptrdiff_t m_flNewEnd = 0x30; // float
    constexpr std::ptrdiff_t m_flNewMaxDensity = 0x34; // float
    constexpr std::ptrdiff_t m_flNewHDRColorScale = 0x38; // float
    constexpr std::ptrdiff_t m_flNewFarZ = 0x3C; // float
}

namespace CompMatMutatorCondition_t {
    constexpr std::ptrdiff_t m_nMutatorCondition = 0x0; // CompMatPropertyMutatorConditionType_t
    constexpr std::ptrdiff_t m_strMutatorConditionContainerName = 0x8; // CUtlString
    constexpr std::ptrdiff_t m_strMutatorConditionContainerVarName = 0x10; // CUtlString
    constexpr std::ptrdiff_t m_strMutatorConditionContainerVarValue = 0x18; // CUtlString
    constexpr std::ptrdiff_t m_bPassWhenTrue = 0x20; // bool
}

namespace CompMatPropertyMutator_t {
    constexpr std::ptrdiff_t m_bEnabled = 0x0; // bool
    constexpr std::ptrdiff_t m_nMutatorCommandType = 0x4; // CompMatPropertyMutatorType_t
    constexpr std::ptrdiff_t m_strInitWith_Container = 0x8; // CUtlString
    constexpr std::ptrdiff_t m_strCopyProperty_InputContainerSrc = 0x10; // CUtlString
    constexpr std::ptrdiff_t m_strCopyProperty_InputContainerProperty = 0x18; // CUtlString
    constexpr std::ptrdiff_t m_strCopyProperty_TargetProperty = 0x20; // CUtlString
    constexpr std::ptrdiff_t m_strRandomRollInputVars_SeedInputVar = 0x28; // CUtlString
    constexpr std::ptrdiff_t m_vecRandomRollInputVars_InputVarsToRoll = 0x30; // CUtlVector<CUtlString>
    constexpr std::ptrdiff_t m_strCopyMatchingKeys_InputContainerSrc = 0x48; // CUtlString
    constexpr std::ptrdiff_t m_strCopyKeysWithSuffix_InputContainerSrc = 0x50; // CUtlString
    constexpr std::ptrdiff_t m_strCopyKeysWithSuffix_FindSuffix = 0x58; // CUtlString
    constexpr std::ptrdiff_t m_strCopyKeysWithSuffix_ReplaceSuffix = 0x60; // CUtlString
    constexpr std::ptrdiff_t m_nSetValue_Value = 0x68; // CompositeMaterialInputLooseVariable_t
    constexpr std::ptrdiff_t m_strGenerateTexture_TargetParam = 0x2D8; // CUtlString
    constexpr std::ptrdiff_t m_strGenerateTexture_InitialContainer = 0x2E0; // CUtlString
    constexpr std::ptrdiff_t m_nResolution = 0x2E8; // int32_t
    constexpr std::ptrdiff_t m_bIsScratchTarget = 0x2EC; // bool
    constexpr std::ptrdiff_t m_bSplatDebugInfo = 0x2ED; // bool
    constexpr std::ptrdiff_t m_bCaptureInRenderDoc = 0x2EE; // bool
    constexpr std::ptrdiff_t m_vecTexGenInstructions = 0x2F0; // CUtlVector<CompMatPropertyMutator_t>
    constexpr std::ptrdiff_t m_vecConditionalMutators = 0x308; // CUtlVector<CompMatPropertyMutator_t>
    constexpr std::ptrdiff_t m_strPopInputQueue_Container = 0x320; // CUtlString
    constexpr std::ptrdiff_t m_strDrawText_InputContainerSrc = 0x328; // CUtlString
    constexpr std::ptrdiff_t m_strDrawText_InputContainerProperty = 0x330; // CUtlString
    constexpr std::ptrdiff_t m_vecDrawText_Position = 0x338; // Vector2D
    constexpr std::ptrdiff_t m_colDrawText_Color = 0x340; // Color
    constexpr std::ptrdiff_t m_strDrawText_Font = 0x348; // CUtlString
    constexpr std::ptrdiff_t m_vecConditions = 0x350; // CUtlVector<CompMatMutatorCondition_t>
}

namespace CompositeMaterialAssemblyProcedure_t {
    constexpr std::ptrdiff_t m_vecCompMatIncludes = 0x0; // CUtlVector<CResourceName>
    constexpr std::ptrdiff_t m_vecMatchFilters = 0x18; // CUtlVector<CompositeMaterialMatchFilter_t>
    constexpr std::ptrdiff_t m_vecCompositeInputContainers = 0x30; // CUtlVector<CompositeMaterialInputContainer_t>
    constexpr std::ptrdiff_t m_vecPropertyMutators = 0x48; // CUtlVector<CompMatPropertyMutator_t>
}

namespace CompositeMaterialEditorPoint_t {
    constexpr std::ptrdiff_t m_ModelName = 0x0; // CResourceName
    constexpr std::ptrdiff_t m_nSequenceIndex = 0xE0; // int32_t
    constexpr std::ptrdiff_t m_flCycle = 0xE4; // float
    constexpr std::ptrdiff_t m_KVModelStateChoices = 0xE8; // KeyValues3
    constexpr std::ptrdiff_t m_bEnableChildModel = 0xF8; // bool
    constexpr std::ptrdiff_t m_ChildModelName = 0x100; // CResourceName
    constexpr std::ptrdiff_t m_vecCompositeMaterialAssemblyProcedures = 0x1E0; // CUtlVector<CompositeMaterialAssemblyProcedure_t>
    constexpr std::ptrdiff_t m_vecCompositeMaterials = 0x1F8; // CUtlVector<CompositeMaterial_t>
}

namespace CompositeMaterialInputContainer_t {
    constexpr std::ptrdiff_t m_bEnabled = 0x0; // bool
    constexpr std::ptrdiff_t m_nCompositeMaterialInputContainerSourceType = 0x4; // CompositeMaterialInputContainerSourceType_t
    constexpr std::ptrdiff_t m_strSpecificContainerMaterial = 0x8; // CResourceName
    constexpr std::ptrdiff_t m_strAttrName = 0xE8; // CUtlString
    constexpr std::ptrdiff_t m_strAlias = 0xF0; // CUtlString
    constexpr std::ptrdiff_t m_vecLooseVariables = 0xF8; // CUtlVector<CompositeMaterialInputLooseVariable_t>
    constexpr std::ptrdiff_t m_strAttrNameForVar = 0x110; // CUtlString
    constexpr std::ptrdiff_t m_bExposeExternally = 0x118; // bool
}

namespace CompositeMaterialInputLooseVariable_t {
    constexpr std::ptrdiff_t m_strName = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_bExposeExternally = 0x8; // bool
    constexpr std::ptrdiff_t m_strExposedFriendlyName = 0x10; // CUtlString
    constexpr std::ptrdiff_t m_strExposedFriendlyGroupName = 0x18; // CUtlString
    constexpr std::ptrdiff_t m_bExposedVariableIsFixedRange = 0x20; // bool
    constexpr std::ptrdiff_t m_strExposedVisibleWhenTrue = 0x28; // CUtlString
    constexpr std::ptrdiff_t m_strExposedHiddenWhenTrue = 0x30; // CUtlString
    constexpr std::ptrdiff_t m_nVariableType = 0x38; // CompositeMaterialInputLooseVariableType_t
    constexpr std::ptrdiff_t m_bValueBoolean = 0x3C; // bool
    constexpr std::ptrdiff_t m_nValueIntX = 0x40; // int32_t
    constexpr std::ptrdiff_t m_nValueIntY = 0x44; // int32_t
    constexpr std::ptrdiff_t m_nValueIntZ = 0x48; // int32_t
    constexpr std::ptrdiff_t m_nValueIntW = 0x4C; // int32_t
    constexpr std::ptrdiff_t m_bHasFloatBounds = 0x50; // bool
    constexpr std::ptrdiff_t m_flValueFloatX = 0x54; // float
    constexpr std::ptrdiff_t m_flValueFloatX_Min = 0x58; // float
    constexpr std::ptrdiff_t m_flValueFloatX_Max = 0x5C; // float
    constexpr std::ptrdiff_t m_flValueFloatY = 0x60; // float
    constexpr std::ptrdiff_t m_flValueFloatY_Min = 0x64; // float
    constexpr std::ptrdiff_t m_flValueFloatY_Max = 0x68; // float
    constexpr std::ptrdiff_t m_flValueFloatZ = 0x6C; // float
    constexpr std::ptrdiff_t m_flValueFloatZ_Min = 0x70; // float
    constexpr std::ptrdiff_t m_flValueFloatZ_Max = 0x74; // float
    constexpr std::ptrdiff_t m_flValueFloatW = 0x78; // float
    constexpr std::ptrdiff_t m_flValueFloatW_Min = 0x7C; // float
    constexpr std::ptrdiff_t m_flValueFloatW_Max = 0x80; // float
    constexpr std::ptrdiff_t m_cValueColor4 = 0x84; // Color
    constexpr std::ptrdiff_t m_nValueSystemVar = 0x88; // CompositeMaterialVarSystemVar_t
    constexpr std::ptrdiff_t m_strResourceMaterial = 0x90; // CResourceName
    constexpr std::ptrdiff_t m_strTextureContentAssetPath = 0x170; // CUtlString
    constexpr std::ptrdiff_t m_strTextureRuntimeResourcePath = 0x178; // CResourceName
    constexpr std::ptrdiff_t m_strTextureCompilationVtexTemplate = 0x258; // CUtlString
    constexpr std::ptrdiff_t m_nTextureType = 0x260; // CompositeMaterialInputTextureType_t
    constexpr std::ptrdiff_t m_strString = 0x268; // CUtlString
}

namespace CompositeMaterialMatchFilter_t {
    constexpr std::ptrdiff_t m_nCompositeMaterialMatchFilterType = 0x0; // CompositeMaterialMatchFilterType_t
    constexpr std::ptrdiff_t m_strMatchFilter = 0x8; // CUtlString
    constexpr std::ptrdiff_t m_strMatchValue = 0x10; // CUtlString
    constexpr std::ptrdiff_t m_bPassWhenTrue = 0x18; // bool
}

namespace CompositeMaterial_t {
    constexpr std::ptrdiff_t m_TargetKVs = 0x8; // KeyValues3
    constexpr std::ptrdiff_t m_PreGenerationKVs = 0x18; // KeyValues3
    constexpr std::ptrdiff_t m_FinalKVs = 0x28; // KeyValues3
    constexpr std::ptrdiff_t m_vecGeneratedTextures = 0x40; // CUtlVector<GeneratedTextureHandle_t>
}

namespace CountdownTimer {
    constexpr std::ptrdiff_t m_duration = 0x8; // float
    constexpr std::ptrdiff_t m_timestamp = 0xC; // GameTime_t
    constexpr std::ptrdiff_t m_timescale = 0x10; // float
    constexpr std::ptrdiff_t m_nWorldGroupId = 0x14; // WorldGroupId_t
}

namespace EngineCountdownTimer {
    constexpr std::ptrdiff_t m_duration = 0x8; // float
    constexpr std::ptrdiff_t m_timestamp = 0xC; // float
    constexpr std::ptrdiff_t m_timescale = 0x10; // float
}

namespace EntityRenderAttribute_t {
    constexpr std::ptrdiff_t m_ID = 0x30; // CUtlStringToken
    constexpr std::ptrdiff_t m_Values = 0x34; // Vector4D
}

namespace EntitySpottedState_t {
    constexpr std::ptrdiff_t m_bSpotted = 0x8; // bool
    constexpr std::ptrdiff_t m_bSpottedByMask = 0xC; // uint32_t[2]
}

namespace GeneratedTextureHandle_t {
    constexpr std::ptrdiff_t m_strBitmapName = 0x0; // CUtlString
}

namespace IClientAlphaProperty {
}

namespace IntervalTimer {
    constexpr std::ptrdiff_t m_timestamp = 0x8; // GameTime_t
    constexpr std::ptrdiff_t m_nWorldGroupId = 0xC; // WorldGroupId_t
}

namespace PhysicsRagdollPose_t {
    constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
    constexpr std::ptrdiff_t m_Transforms = 0x30; // C_NetworkUtlVectorBase<CTransform>
    constexpr std::ptrdiff_t m_hOwner = 0x48; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_bDirty = 0x68; // bool
}

namespace SellbackPurchaseEntry_t {
    constexpr std::ptrdiff_t m_unDefIdx = 0x30; // uint16_t
    constexpr std::ptrdiff_t m_nCost = 0x34; // int32_t
    constexpr std::ptrdiff_t m_nPrevArmor = 0x38; // int32_t
    constexpr std::ptrdiff_t m_bPrevHelmet = 0x3C; // bool
    constexpr std::ptrdiff_t m_hItem = 0x40; // CEntityHandle
}

namespace ServerAuthoritativeWeaponSlot_t {
    constexpr std::ptrdiff_t unClass = 0x28; // uint16_t
    constexpr std::ptrdiff_t unSlot = 0x2A; // uint16_t
    constexpr std::ptrdiff_t unItemDefIdx = 0x2C; // uint16_t
}

namespace TimedEvent {
    constexpr std::ptrdiff_t m_TimeBetweenEvents = 0x0; // float
    constexpr std::ptrdiff_t m_fNextEvent = 0x4; // float
}

namespace VPhysicsCollisionAttribute_t {
    constexpr std::ptrdiff_t m_nInteractsAs = 0x8; // uint64_t
    constexpr std::ptrdiff_t m_nInteractsWith = 0x10; // uint64_t
    constexpr std::ptrdiff_t m_nInteractsExclude = 0x18; // uint64_t
    constexpr std::ptrdiff_t m_nEntityId = 0x20; // uint32_t
    constexpr std::ptrdiff_t m_nOwnerId = 0x24; // uint32_t
    constexpr std::ptrdiff_t m_nHierarchyId = 0x28; // uint16_t
    constexpr std::ptrdiff_t m_nCollisionGroup = 0x2A; // uint8_t
    constexpr std::ptrdiff_t m_nCollisionFunctionMask = 0x2B; // uint8_t
}

namespace ViewAngleServerChange_t {
    constexpr std::ptrdiff_t nType = 0x30; // FixAngleSet_t
    constexpr std::ptrdiff_t qAngle = 0x34; // QAngle
    constexpr std::ptrdiff_t nIndex = 0x40; // uint32_t
}

namespace WeaponPurchaseCount_t {
    constexpr std::ptrdiff_t m_nItemDefIndex = 0x30; // uint16_t
    constexpr std::ptrdiff_t m_nCount = 0x32; // uint16_t
}

namespace WeaponPurchaseTracker_t {
    constexpr std::ptrdiff_t m_weaponPurchases = 0x8; // C_UtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
}

namespace audioparams_t {
    constexpr std::ptrdiff_t localSound = 0x8; // Vector[8]
    constexpr std::ptrdiff_t soundscapeIndex = 0x68; // int32_t
    constexpr std::ptrdiff_t localBits = 0x6C; // uint8_t
    constexpr std::ptrdiff_t soundscapeEntityListIndex = 0x70; // int32_t
    constexpr std::ptrdiff_t soundEventHash = 0x74; // uint32_t
}

namespace fogparams_t {
    constexpr std::ptrdiff_t dirPrimary = 0x8; // Vector
    constexpr std::ptrdiff_t colorPrimary = 0x14; // Color
    constexpr std::ptrdiff_t colorSecondary = 0x18; // Color
    constexpr std::ptrdiff_t colorPrimaryLerpTo = 0x1C; // Color
    constexpr std::ptrdiff_t colorSecondaryLerpTo = 0x20; // Color
    constexpr std::ptrdiff_t start = 0x24; // float
    constexpr std::ptrdiff_t end = 0x28; // float
    constexpr std::ptrdiff_t farz = 0x2C; // float
    constexpr std::ptrdiff_t maxdensity = 0x30; // float
    constexpr std::ptrdiff_t exponent = 0x34; // float
    constexpr std::ptrdiff_t HDRColorScale = 0x38; // float
    constexpr std::ptrdiff_t skyboxFogFactor = 0x3C; // float
    constexpr std::ptrdiff_t skyboxFogFactorLerpTo = 0x40; // float
    constexpr std::ptrdiff_t startLerpTo = 0x44; // float
    constexpr std::ptrdiff_t endLerpTo = 0x48; // float
    constexpr std::ptrdiff_t maxdensityLerpTo = 0x4C; // float
    constexpr std::ptrdiff_t lerptime = 0x50; // GameTime_t
    constexpr std::ptrdiff_t duration = 0x54; // float
    constexpr std::ptrdiff_t blendtobackground = 0x58; // float
    constexpr std::ptrdiff_t scattering = 0x5C; // float
    constexpr std::ptrdiff_t locallightscale = 0x60; // float
    constexpr std::ptrdiff_t enable = 0x64; // bool
    constexpr std::ptrdiff_t blend = 0x65; // bool
    constexpr std::ptrdiff_t m_bNoReflectionFog = 0x66; // bool
    constexpr std::ptrdiff_t m_bPadding = 0x67; // bool
}

namespace shard_model_desc_t {
    constexpr std::ptrdiff_t m_nModelID = 0x8; // int32_t
    constexpr std::ptrdiff_t m_hMaterial = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_solid = 0x18; // ShardSolid_t
    constexpr std::ptrdiff_t m_ShatterPanelMode = 0x19; // ShatterPanelMode
    constexpr std::ptrdiff_t m_vecPanelSize = 0x1C; // Vector2D
    constexpr std::ptrdiff_t m_vecStressPositionA = 0x24; // Vector2D
    constexpr std::ptrdiff_t m_vecStressPositionB = 0x2C; // Vector2D
    constexpr std::ptrdiff_t m_vecPanelVertices = 0x38; // C_NetworkUtlVectorBase<Vector2D>
    constexpr std::ptrdiff_t m_flGlassHalfThickness = 0x50; // float
    constexpr std::ptrdiff_t m_bHasParent = 0x54; // bool
    constexpr std::ptrdiff_t m_bParentFrozen = 0x55; // bool
    constexpr std::ptrdiff_t m_SurfacePropStringToken = 0x58; // CUtlStringToken
}

namespace sky3dparams_t {
    constexpr std::ptrdiff_t scale = 0x8; // int16_t
    constexpr std::ptrdiff_t origin = 0xC; // Vector
    constexpr std::ptrdiff_t bClip3DSkyBoxNearToWorldFar = 0x18; // bool
    constexpr std::ptrdiff_t flClip3DSkyBoxNearToWorldFarOffset = 0x1C; // float
    constexpr std::ptrdiff_t fog = 0x20; // fogparams_t
    constexpr std::ptrdiff_t m_nWorldGroupID = 0x88; // WorldGroupId_t
}