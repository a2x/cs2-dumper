/*
 * Created using https://github.com/a2x/cs2-dumper
 * Tue, 13 Feb 2024 04:04:48 +0000
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
    constexpr std::ptrdiff_t m_PredNetGlobalSymbolVariables = 0xE0; // C_NetworkUtlVectorBase<CGlobalSymbol>
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetBoolVariables = 0xF8; // C_NetworkUtlVectorBase<uint32_t>
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetByteVariables = 0x110; // C_NetworkUtlVectorBase<uint8_t>
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt16Variables = 0x128; // C_NetworkUtlVectorBase<uint16_t>
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetIntVariables = 0x140; // C_NetworkUtlVectorBase<int32_t>
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt32Variables = 0x158; // C_NetworkUtlVectorBase<uint32_t>
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt64Variables = 0x170; // C_NetworkUtlVectorBase<uint64_t>
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetFloatVariables = 0x188; // C_NetworkUtlVectorBase<float>
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetVectorVariables = 0x1A0; // C_NetworkUtlVectorBase<Vector>
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetQuaternionVariables = 0x1B8; // C_NetworkUtlVectorBase<Quaternion>
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetGlobalSymbolVariables = 0x1D0; // C_NetworkUtlVectorBase<CGlobalSymbol>
    constexpr std::ptrdiff_t m_nBoolVariablesCount = 0x1E8; // int32_t
    constexpr std::ptrdiff_t m_nOwnerOnlyBoolVariablesCount = 0x1EC; // int32_t
    constexpr std::ptrdiff_t m_nRandomSeedOffset = 0x1F0; // int32_t
    constexpr std::ptrdiff_t m_flLastTeleportTime = 0x1F4; // float
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
    constexpr std::ptrdiff_t m_bInitiallyPopulateInterpHistory = 0xD48; // bool
    constexpr std::ptrdiff_t m_bSuppressAnimEventSounds = 0xD4A; // bool
    constexpr std::ptrdiff_t m_bAnimGraphUpdateEnabled = 0xD58; // bool
    constexpr std::ptrdiff_t m_flMaxSlopeDistance = 0xD5C; // float
    constexpr std::ptrdiff_t m_vLastSlopeCheckPos = 0xD60; // Vector
    constexpr std::ptrdiff_t m_bAnimationUpdateScheduled = 0xD6C; // bool
    constexpr std::ptrdiff_t m_vecForce = 0xD70; // Vector
    constexpr std::ptrdiff_t m_nForceBone = 0xD7C; // int32_t
    constexpr std::ptrdiff_t m_pClientsideRagdoll = 0xD80; // CBaseAnimGraph*
    constexpr std::ptrdiff_t m_bBuiltRagdoll = 0xD88; // bool
    constexpr std::ptrdiff_t m_pRagdollPose = 0xDA0; // PhysicsRagdollPose_t*
    constexpr std::ptrdiff_t m_bClientRagdoll = 0xDA8; // bool
    constexpr std::ptrdiff_t m_bHasAnimatedMaterialAttributes = 0xDB8; // bool
}

namespace CBaseAnimGraphController { // CSkeletonAnimationController
    constexpr std::ptrdiff_t m_animGraphNetworkedVars = 0x18; // CAnimGraphNetworkedVariables
    constexpr std::ptrdiff_t m_bSequenceFinished = 0x14A8; // bool
    constexpr std::ptrdiff_t m_flSoundSyncTime = 0x14AC; // float
    constexpr std::ptrdiff_t m_hSequence = 0x14B0; // HSequence
    constexpr std::ptrdiff_t m_flSeqStartTime = 0x14B4; // GameTime_t
    constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x14B8; // float
    constexpr std::ptrdiff_t m_nAnimLoopMode = 0x14BC; // AnimLoopMode_t
    constexpr std::ptrdiff_t m_flPlaybackRate = 0x14C0; // CNetworkedQuantizedFloat
    constexpr std::ptrdiff_t m_nNotifyState = 0x14CC; // SequenceFinishNotifyState_t
    constexpr std::ptrdiff_t m_bNetworkedAnimationInputsChanged = 0x14CE; // bool
    constexpr std::ptrdiff_t m_bNetworkedSequenceChanged = 0x14CF; // bool
    constexpr std::ptrdiff_t m_bLastUpdateSkipped = 0x14D0; // bool
    constexpr std::ptrdiff_t m_flPrevAnimUpdateTime = 0x14D4; // GameTime_t
}

namespace CBasePlayerController { // C_BaseEntity
    constexpr std::ptrdiff_t m_nFinalPredictedTick = 0x558; // int32_t
    constexpr std::ptrdiff_t m_CommandContext = 0x560; // C_CommandContext
    constexpr std::ptrdiff_t m_nInButtonsWhichAreToggles = 0x5F8; // uint64_t
    constexpr std::ptrdiff_t m_nTickBase = 0x600; // uint32_t
    constexpr std::ptrdiff_t m_hPawn = 0x604; // CHandle<C_BasePlayerPawn>
    constexpr std::ptrdiff_t m_hPredictedPawn = 0x608; // CHandle<C_BasePlayerPawn>
    constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x60C; // CSplitScreenSlot
    constexpr std::ptrdiff_t m_hSplitOwner = 0x610; // CHandle<CBasePlayerController>
    constexpr std::ptrdiff_t m_hSplitScreenPlayers = 0x618; // CUtlVector<CHandle<CBasePlayerController>>
    constexpr std::ptrdiff_t m_bIsHLTV = 0x630; // bool
    constexpr std::ptrdiff_t m_iConnected = 0x634; // PlayerConnectedState
    constexpr std::ptrdiff_t m_iszPlayerName = 0x638; // char[128]
    constexpr std::ptrdiff_t m_steamID = 0x6C0; // uint64_t
    constexpr std::ptrdiff_t m_bIsLocalPlayerController = 0x6C8; // bool
    constexpr std::ptrdiff_t m_iDesiredFOV = 0x6CC; // uint32_t
}

namespace CBasePlayerControllerAPI {
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
    constexpr std::ptrdiff_t m_bLinkedCooldowns = 0x218; // bool
    constexpr std::ptrdiff_t m_aShootSounds = 0x220; // CUtlMap<WeaponSound_t,CSoundEventName>
    constexpr std::ptrdiff_t m_iSlot = 0x240; // int32_t
    constexpr std::ptrdiff_t m_iPosition = 0x244; // int32_t
}

namespace CBaseProp { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_bModelOverrodeBlockLOS = 0xED8; // bool
    constexpr std::ptrdiff_t m_iShapeType = 0xEDC; // int32_t
    constexpr std::ptrdiff_t m_bConformToCollisionBounds = 0xEE0; // bool
    constexpr std::ptrdiff_t m_mPreferredCatchTransform = 0xEE4; // matrix3x4_t
}

namespace CBodyComponent { // CEntityComponent
    constexpr std::ptrdiff_t m_pSceneNode = 0x8; // CGameSceneNode*
    constexpr std::ptrdiff_t __m_pChainEntity = 0x20; // CNetworkVarChainer
}

namespace CBodyComponentBaseAnimGraph { // CBodyComponentSkeletonInstance
    constexpr std::ptrdiff_t m_animationController = 0x460; // CBaseAnimGraphController
    constexpr std::ptrdiff_t __m_pChainEntity = 0x1C28; // CNetworkVarChainer
}

namespace CBodyComponentBaseModelEntity { // CBodyComponentSkeletonInstance
    constexpr std::ptrdiff_t __m_pChainEntity = 0x460; // CNetworkVarChainer
}

namespace CBodyComponentPoint { // CBodyComponent
    constexpr std::ptrdiff_t m_sceneNode = 0x50; // CGameSceneNode
    constexpr std::ptrdiff_t __m_pChainEntity = 0x1A0; // CNetworkVarChainer
}

namespace CBodyComponentSkeletonInstance { // CBodyComponent
    constexpr std::ptrdiff_t m_skeletonInstance = 0x50; // CSkeletonInstance
    constexpr std::ptrdiff_t __m_pChainEntity = 0x430; // CNetworkVarChainer
}

namespace CBombTarget { // C_BaseTrigger
    constexpr std::ptrdiff_t m_bBombPlantedHere = 0xCD8; // bool
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

namespace CCSArmsRaceScript { // CCSGameModeScript
    constexpr std::ptrdiff_t m_pOuter = 0xD8; // CCSGameModeRules_ArmsRace*
}

namespace CCSDeathmatchScript { // CCSGameModeScript
    constexpr std::ptrdiff_t m_pOuter = 0xD8; // CCSGameModeRules_Deathmatch*
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

namespace CCSGameModeRules_ArmsRace { // CCSGameModeRules
    constexpr std::ptrdiff_t m_WeaponSequence = 0x38; // C_NetworkUtlVectorBase<CUtlString>
}

namespace CCSGameModeRules_Deathmatch { // CCSGameModeRules
    constexpr std::ptrdiff_t m_flDMBonusStartTime = 0x38; // GameTime_t
    constexpr std::ptrdiff_t m_flDMBonusTimeLength = 0x3C; // float
    constexpr std::ptrdiff_t m_nDMBonusWeaponLoadoutSlot = 0x40; // int16_t
}

namespace CCSGameModeRules_Noop { // CCSGameModeRules
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
    constexpr std::ptrdiff_t m_pInGameMoneyServices = 0x6F8; // CCSPlayerController_InGameMoneyServices*
    constexpr std::ptrdiff_t m_pInventoryServices = 0x700; // CCSPlayerController_InventoryServices*
    constexpr std::ptrdiff_t m_pActionTrackingServices = 0x708; // CCSPlayerController_ActionTrackingServices*
    constexpr std::ptrdiff_t m_pDamageServices = 0x710; // CCSPlayerController_DamageServices*
    constexpr std::ptrdiff_t m_iPing = 0x718; // uint32_t
    constexpr std::ptrdiff_t m_bHasCommunicationAbuseMute = 0x71C; // bool
    constexpr std::ptrdiff_t m_szCrosshairCodes = 0x720; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iPendingTeamNum = 0x728; // uint8_t
    constexpr std::ptrdiff_t m_flForceTeamTime = 0x72C; // GameTime_t
    constexpr std::ptrdiff_t m_iCompTeammateColor = 0x730; // int32_t
    constexpr std::ptrdiff_t m_bEverPlayedOnTeam = 0x734; // bool
    constexpr std::ptrdiff_t m_flPreviousForceJoinTeamTime = 0x738; // GameTime_t
    constexpr std::ptrdiff_t m_szClan = 0x740; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sSanitizedPlayerName = 0x748; // CUtlString
    constexpr std::ptrdiff_t m_iCoachingTeam = 0x750; // int32_t
    constexpr std::ptrdiff_t m_nPlayerDominated = 0x758; // uint64_t
    constexpr std::ptrdiff_t m_nPlayerDominatingMe = 0x760; // uint64_t
    constexpr std::ptrdiff_t m_iCompetitiveRanking = 0x768; // int32_t
    constexpr std::ptrdiff_t m_iCompetitiveWins = 0x76C; // int32_t
    constexpr std::ptrdiff_t m_iCompetitiveRankType = 0x770; // int8_t
    constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Win = 0x774; // int32_t
    constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Loss = 0x778; // int32_t
    constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Tie = 0x77C; // int32_t
    constexpr std::ptrdiff_t m_nEndMatchNextMapVote = 0x780; // int32_t
    constexpr std::ptrdiff_t m_unActiveQuestId = 0x784; // uint16_t
    constexpr std::ptrdiff_t m_nQuestProgressReason = 0x788; // QuestProgress::Reason
    constexpr std::ptrdiff_t m_unPlayerTvControlFlags = 0x78C; // uint32_t
    constexpr std::ptrdiff_t m_iDraftIndex = 0x7B8; // int32_t
    constexpr std::ptrdiff_t m_msQueuedModeDisconnectionTimestamp = 0x7BC; // uint32_t
    constexpr std::ptrdiff_t m_uiAbandonRecordedReason = 0x7C0; // uint32_t
    constexpr std::ptrdiff_t m_bCannotBeKicked = 0x7C4; // bool
    constexpr std::ptrdiff_t m_bEverFullyConnected = 0x7C5; // bool
    constexpr std::ptrdiff_t m_bAbandonAllowsSurrender = 0x7C6; // bool
    constexpr std::ptrdiff_t m_bAbandonOffersInstantSurrender = 0x7C7; // bool
    constexpr std::ptrdiff_t m_bDisconnection1MinWarningPrinted = 0x7C8; // bool
    constexpr std::ptrdiff_t m_bScoreReported = 0x7C9; // bool
    constexpr std::ptrdiff_t m_nDisconnectionTick = 0x7CC; // int32_t
    constexpr std::ptrdiff_t m_bControllingBot = 0x7D8; // bool
    constexpr std::ptrdiff_t m_bHasControlledBotThisRound = 0x7D9; // bool
    constexpr std::ptrdiff_t m_bHasBeenControlledByPlayerThisRound = 0x7DA; // bool
    constexpr std::ptrdiff_t m_nBotsControlledThisRound = 0x7DC; // int32_t
    constexpr std::ptrdiff_t m_bCanControlObservedBot = 0x7E0; // bool
    constexpr std::ptrdiff_t m_hPlayerPawn = 0x7E4; // CHandle<C_CSPlayerPawn>
    constexpr std::ptrdiff_t m_hObserverPawn = 0x7E8; // CHandle<C_CSObserverPawn>
    constexpr std::ptrdiff_t m_bPawnIsAlive = 0x7EC; // bool
    constexpr std::ptrdiff_t m_iPawnHealth = 0x7F0; // uint32_t
    constexpr std::ptrdiff_t m_iPawnArmor = 0x7F4; // int32_t
    constexpr std::ptrdiff_t m_bPawnHasDefuser = 0x7F8; // bool
    constexpr std::ptrdiff_t m_bPawnHasHelmet = 0x7F9; // bool
    constexpr std::ptrdiff_t m_nPawnCharacterDefIndex = 0x7FA; // uint16_t
    constexpr std::ptrdiff_t m_iPawnLifetimeStart = 0x7FC; // int32_t
    constexpr std::ptrdiff_t m_iPawnLifetimeEnd = 0x800; // int32_t
    constexpr std::ptrdiff_t m_iPawnBotDifficulty = 0x804; // int32_t
    constexpr std::ptrdiff_t m_hOriginalControllerOfCurrentPawn = 0x808; // CHandle<CCSPlayerController>
    constexpr std::ptrdiff_t m_iScore = 0x80C; // int32_t
    constexpr std::ptrdiff_t m_vecKills = 0x810; // C_NetworkUtlVectorBase<EKillTypes_t>
    constexpr std::ptrdiff_t m_iMVPs = 0x828; // int32_t
    constexpr std::ptrdiff_t m_bIsPlayerNameDirty = 0x82C; // bool
}

namespace CCSPlayerControllerAPI {
}

namespace CCSPlayerController_ActionTrackingServices { // CPlayerControllerComponent
    constexpr std::ptrdiff_t m_perRoundStats = 0x40; // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
    constexpr std::ptrdiff_t m_matchStats = 0x90; // CSMatchStats_t
    constexpr std::ptrdiff_t m_iNumRoundKills = 0x110; // int32_t
    constexpr std::ptrdiff_t m_iNumRoundKillsHeadshots = 0x114; // int32_t
    constexpr std::ptrdiff_t m_unTotalRoundDamageDealt = 0x118; // uint32_t
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
    constexpr std::ptrdiff_t m_nPersonaDataXpTrailLevel = 0x6C; // int32_t
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
    constexpr std::ptrdiff_t m_flMaxFallVelocity = 0x218; // float
    constexpr std::ptrdiff_t m_vecLadderNormal = 0x21C; // Vector
    constexpr std::ptrdiff_t m_nLadderSurfacePropIndex = 0x228; // int32_t
    constexpr std::ptrdiff_t m_flDuckAmount = 0x22C; // float
    constexpr std::ptrdiff_t m_flDuckSpeed = 0x230; // float
    constexpr std::ptrdiff_t m_bDuckOverride = 0x234; // bool
    constexpr std::ptrdiff_t m_bDesiresDuck = 0x235; // bool
    constexpr std::ptrdiff_t m_flDuckOffset = 0x238; // float
    constexpr std::ptrdiff_t m_nDuckTimeMsecs = 0x23C; // uint32_t
    constexpr std::ptrdiff_t m_nDuckJumpTimeMsecs = 0x240; // uint32_t
    constexpr std::ptrdiff_t m_nJumpTimeMsecs = 0x244; // uint32_t
    constexpr std::ptrdiff_t m_flLastDuckTime = 0x248; // float
    constexpr std::ptrdiff_t m_vecLastPositionAtFullCrouchSpeed = 0x258; // Vector2D
    constexpr std::ptrdiff_t m_duckUntilOnGround = 0x260; // bool
    constexpr std::ptrdiff_t m_bHasWalkMovedSinceLastJump = 0x261; // bool
    constexpr std::ptrdiff_t m_bInStuckTest = 0x262; // bool
    constexpr std::ptrdiff_t m_flStuckCheckTime = 0x270; // float[64][2]
    constexpr std::ptrdiff_t m_nTraceCount = 0x470; // int32_t
    constexpr std::ptrdiff_t m_StuckLast = 0x474; // int32_t
    constexpr std::ptrdiff_t m_bSpeedCropped = 0x478; // bool
    constexpr std::ptrdiff_t m_nOldWaterLevel = 0x47C; // int32_t
    constexpr std::ptrdiff_t m_flWaterEntryTime = 0x480; // float
    constexpr std::ptrdiff_t m_vecForward = 0x484; // Vector
    constexpr std::ptrdiff_t m_vecLeft = 0x490; // Vector
    constexpr std::ptrdiff_t m_vecUp = 0x49C; // Vector
    constexpr std::ptrdiff_t m_nGameCodeHasMovedPlayerAfterCommand = 0x4A8; // int32_t
    constexpr std::ptrdiff_t m_bOldJumpPressed = 0x4AC; // bool
    constexpr std::ptrdiff_t m_flJumpPressedTime = 0x4B0; // float
    constexpr std::ptrdiff_t m_flJumpUntil = 0x4B4; // float
    constexpr std::ptrdiff_t m_flJumpVel = 0x4B8; // float
    constexpr std::ptrdiff_t m_fStashGrenadeParameterWhen = 0x4BC; // GameTime_t
    constexpr std::ptrdiff_t m_nButtonDownMaskPrev = 0x4C0; // uint64_t
    constexpr std::ptrdiff_t m_flOffsetTickCompleteTime = 0x4C8; // float
    constexpr std::ptrdiff_t m_flOffsetTickStashedSpeed = 0x4CC; // float
    constexpr std::ptrdiff_t m_flStamina = 0x4D0; // float
    constexpr std::ptrdiff_t m_flHeightAtJumpStart = 0x4D4; // float
    constexpr std::ptrdiff_t m_flMaxJumpHeightThisJump = 0x4D8; // float
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
    constexpr std::ptrdiff_t m_flNextAttack = 0xB8; // GameTime_t
    constexpr std::ptrdiff_t m_bIsLookingAtWeapon = 0xBC; // bool
    constexpr std::ptrdiff_t m_bIsHoldingLookAtWeapon = 0xBD; // bool
    constexpr std::ptrdiff_t m_nOldShootPositionHistoryCount = 0xC0; // uint32_t
    constexpr std::ptrdiff_t m_nOldInputHistoryCount = 0x458; // uint32_t
}

namespace CCSTakeDamageInfoAPI {
}

namespace CCSWeaponBaseAPI {
}

namespace CCSWeaponBaseVData { // CBasePlayerWeaponVData
    constexpr std::ptrdiff_t m_WeaponType = 0x248; // CSWeaponType
    constexpr std::ptrdiff_t m_WeaponCategory = 0x24C; // CSWeaponCategory
    constexpr std::ptrdiff_t m_szViewModel = 0x250; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    constexpr std::ptrdiff_t m_szPlayerModel = 0x330; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    constexpr std::ptrdiff_t m_szWorldDroppedModel = 0x410; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    constexpr std::ptrdiff_t m_szAimsightLensMaskModel = 0x4F0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    constexpr std::ptrdiff_t m_szMagazineModel = 0x5D0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    constexpr std::ptrdiff_t m_szHeatEffect = 0x6B0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    constexpr std::ptrdiff_t m_szEjectBrassEffect = 0x790; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    constexpr std::ptrdiff_t m_szMuzzleFlashParticleAlt = 0x870; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    constexpr std::ptrdiff_t m_szMuzzleFlashThirdPersonParticle = 0x950; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    constexpr std::ptrdiff_t m_szMuzzleFlashThirdPersonParticleAlt = 0xA30; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    constexpr std::ptrdiff_t m_szTracerParticle = 0xB10; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    constexpr std::ptrdiff_t m_GearSlot = 0xBF0; // gear_slot_t
    constexpr std::ptrdiff_t m_GearSlotPosition = 0xBF4; // int32_t
    constexpr std::ptrdiff_t m_DefaultLoadoutSlot = 0xBF8; // loadout_slot_t
    constexpr std::ptrdiff_t m_sWrongTeamMsg = 0xC00; // CUtlString
    constexpr std::ptrdiff_t m_nPrice = 0xC08; // int32_t
    constexpr std::ptrdiff_t m_nKillAward = 0xC0C; // int32_t
    constexpr std::ptrdiff_t m_nPrimaryReserveAmmoMax = 0xC10; // int32_t
    constexpr std::ptrdiff_t m_nSecondaryReserveAmmoMax = 0xC14; // int32_t
    constexpr std::ptrdiff_t m_bMeleeWeapon = 0xC18; // bool
    constexpr std::ptrdiff_t m_bHasBurstMode = 0xC19; // bool
    constexpr std::ptrdiff_t m_bIsRevolver = 0xC1A; // bool
    constexpr std::ptrdiff_t m_bCannotShootUnderwater = 0xC1B; // bool
    constexpr std::ptrdiff_t m_szName = 0xC20; // CGlobalSymbol
    constexpr std::ptrdiff_t m_szAnimExtension = 0xC28; // CUtlString
    constexpr std::ptrdiff_t m_eSilencerType = 0xC30; // CSWeaponSilencerType
    constexpr std::ptrdiff_t m_nCrosshairMinDistance = 0xC34; // int32_t
    constexpr std::ptrdiff_t m_nCrosshairDeltaDistance = 0xC38; // int32_t
    constexpr std::ptrdiff_t m_bIsFullAuto = 0xC3C; // bool
    constexpr std::ptrdiff_t m_nNumBullets = 0xC40; // int32_t
    constexpr std::ptrdiff_t m_flCycleTime = 0xC44; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flMaxSpeed = 0xC4C; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flSpread = 0xC54; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyCrouch = 0xC5C; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyStand = 0xC64; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyJump = 0xC6C; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyLand = 0xC74; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyLadder = 0xC7C; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyFire = 0xC84; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyMove = 0xC8C; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flRecoilAngle = 0xC94; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flRecoilAngleVariance = 0xC9C; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flRecoilMagnitude = 0xCA4; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flRecoilMagnitudeVariance = 0xCAC; // CFiringModeFloat
    constexpr std::ptrdiff_t m_nTracerFrequency = 0xCB4; // CFiringModeInt
    constexpr std::ptrdiff_t m_flInaccuracyJumpInitial = 0xCBC; // float
    constexpr std::ptrdiff_t m_flInaccuracyJumpApex = 0xCC0; // float
    constexpr std::ptrdiff_t m_flInaccuracyReload = 0xCC4; // float
    constexpr std::ptrdiff_t m_nRecoilSeed = 0xCC8; // int32_t
    constexpr std::ptrdiff_t m_nSpreadSeed = 0xCCC; // int32_t
    constexpr std::ptrdiff_t m_flTimeToIdleAfterFire = 0xCD0; // float
    constexpr std::ptrdiff_t m_flIdleInterval = 0xCD4; // float
    constexpr std::ptrdiff_t m_flAttackMovespeedFactor = 0xCD8; // float
    constexpr std::ptrdiff_t m_flHeatPerShot = 0xCDC; // float
    constexpr std::ptrdiff_t m_flInaccuracyPitchShift = 0xCE0; // float
    constexpr std::ptrdiff_t m_flInaccuracyAltSoundThreshold = 0xCE4; // float
    constexpr std::ptrdiff_t m_flBotAudibleRange = 0xCE8; // float
    constexpr std::ptrdiff_t m_szUseRadioSubtitle = 0xCF0; // CUtlString
    constexpr std::ptrdiff_t m_bUnzoomsAfterShot = 0xCF8; // bool
    constexpr std::ptrdiff_t m_bHideViewModelWhenZoomed = 0xCF9; // bool
    constexpr std::ptrdiff_t m_nZoomLevels = 0xCFC; // int32_t
    constexpr std::ptrdiff_t m_nZoomFOV1 = 0xD00; // int32_t
    constexpr std::ptrdiff_t m_nZoomFOV2 = 0xD04; // int32_t
    constexpr std::ptrdiff_t m_flZoomTime0 = 0xD08; // float
    constexpr std::ptrdiff_t m_flZoomTime1 = 0xD0C; // float
    constexpr std::ptrdiff_t m_flZoomTime2 = 0xD10; // float
    constexpr std::ptrdiff_t m_flIronSightPullUpSpeed = 0xD14; // float
    constexpr std::ptrdiff_t m_flIronSightPutDownSpeed = 0xD18; // float
    constexpr std::ptrdiff_t m_flIronSightFOV = 0xD1C; // float
    constexpr std::ptrdiff_t m_flIronSightPivotForward = 0xD20; // float
    constexpr std::ptrdiff_t m_flIronSightLooseness = 0xD24; // float
    constexpr std::ptrdiff_t m_angPivotAngle = 0xD28; // QAngle
    constexpr std::ptrdiff_t m_vecIronSightEyePos = 0xD34; // Vector
    constexpr std::ptrdiff_t m_nDamage = 0xD40; // int32_t
    constexpr std::ptrdiff_t m_flHeadshotMultiplier = 0xD44; // float
    constexpr std::ptrdiff_t m_flArmorRatio = 0xD48; // float
    constexpr std::ptrdiff_t m_flPenetration = 0xD4C; // float
    constexpr std::ptrdiff_t m_flRange = 0xD50; // float
    constexpr std::ptrdiff_t m_flRangeModifier = 0xD54; // float
    constexpr std::ptrdiff_t m_flFlinchVelocityModifierLarge = 0xD58; // float
    constexpr std::ptrdiff_t m_flFlinchVelocityModifierSmall = 0xD5C; // float
    constexpr std::ptrdiff_t m_flRecoveryTimeCrouch = 0xD60; // float
    constexpr std::ptrdiff_t m_flRecoveryTimeStand = 0xD64; // float
    constexpr std::ptrdiff_t m_flRecoveryTimeCrouchFinal = 0xD68; // float
    constexpr std::ptrdiff_t m_flRecoveryTimeStandFinal = 0xD6C; // float
    constexpr std::ptrdiff_t m_nRecoveryTransitionStartBullet = 0xD70; // int32_t
    constexpr std::ptrdiff_t m_nRecoveryTransitionEndBullet = 0xD74; // int32_t
    constexpr std::ptrdiff_t m_flThrowVelocity = 0xD78; // float
    constexpr std::ptrdiff_t m_vSmokeColor = 0xD7C; // Vector
    constexpr std::ptrdiff_t m_szAnimClass = 0xD88; // CGlobalSymbol
}

namespace CCSWeaponBaseVDataAPI {
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

namespace CClientPointEntityAPI {
}

namespace CClientScriptEntity { // C_BaseEntity
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

namespace CDynamicPropAPI {
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
    constexpr std::ptrdiff_t m_bVisibleinPVS = 0x30; // bool
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
    constexpr std::ptrdiff_t m_BuoyancyHelper = 0xCD0; // CBuoyancyHelper
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
    constexpr std::ptrdiff_t m_flTracerDuration = 0xCF0; // float
    constexpr std::ptrdiff_t m_nType = 0xCF4; // GrenadeType_t
}

namespace CHitboxComponent { // CEntityComponent
    constexpr std::ptrdiff_t m_bvDisabledHitGroups = 0x24; // uint32_t[1]
}

namespace CHostageRescueZone { // CHostageRescueZoneShim
}

namespace CHostageRescueZoneShim { // C_BaseTrigger
}

namespace CInfoDynamicShadowHint { // C_PointEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x550; // bool
    constexpr std::ptrdiff_t m_flRange = 0x554; // float
    constexpr std::ptrdiff_t m_nImportance = 0x558; // int32_t
    constexpr std::ptrdiff_t m_nLightChoice = 0x55C; // int32_t
    constexpr std::ptrdiff_t m_hLight = 0x560; // CHandle<C_BaseEntity>
}

namespace CInfoDynamicShadowHintBox { // CInfoDynamicShadowHint
    constexpr std::ptrdiff_t m_vBoxMins = 0x568; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x574; // Vector
}

namespace CInfoOffscreenPanoramaTexture { // C_PointEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x550; // bool
    constexpr std::ptrdiff_t m_nResolutionX = 0x554; // int32_t
    constexpr std::ptrdiff_t m_nResolutionY = 0x558; // int32_t
    constexpr std::ptrdiff_t m_szLayoutFileName = 0x560; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_RenderAttrName = 0x568; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_TargetEntities = 0x570; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
    constexpr std::ptrdiff_t m_nTargetChangeCount = 0x588; // int32_t
    constexpr std::ptrdiff_t m_vecCSSClasses = 0x590; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
    constexpr std::ptrdiff_t m_bCheckCSSClasses = 0x708; // bool
}

namespace CInfoParticleTarget { // C_PointEntity
}

namespace CInfoTarget { // C_PointEntity
}

namespace CInfoWorldLayer { // C_BaseEntity
    constexpr std::ptrdiff_t m_pOutputOnEntitiesSpawned = 0x550; // CEntityIOOutput
    constexpr std::ptrdiff_t m_worldName = 0x578; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_layerName = 0x580; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bWorldLayerVisible = 0x588; // bool
    constexpr std::ptrdiff_t m_bEntitiesSpawned = 0x589; // bool
    constexpr std::ptrdiff_t m_bCreateAsChildSpawnGroup = 0x58A; // bool
    constexpr std::ptrdiff_t m_hLayerSpawnGroup = 0x58C; // uint32_t
    constexpr std::ptrdiff_t m_bWorldLayerActuallyVisible = 0x590; // bool
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
    constexpr std::ptrdiff_t m_OnTrigger = 0x550; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnSpawn = 0x578; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bDisabled = 0x5A0; // bool
    constexpr std::ptrdiff_t m_bWaitForRefire = 0x5A1; // bool
    constexpr std::ptrdiff_t m_bTriggerOnce = 0x5A2; // bool
    constexpr std::ptrdiff_t m_bFastRetrigger = 0x5A3; // bool
    constexpr std::ptrdiff_t m_bPassthoughCaller = 0x5A4; // bool
}

namespace CLogicalEntity { // C_BaseEntity
}

namespace CModelState {
    constexpr std::ptrdiff_t m_hModel = 0xA0; // CStrongHandle<InfoForResourceTypeCModel>
    constexpr std::ptrdiff_t m_ModelName = 0xA8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bClientClothCreationSuppressed = 0xE8; // bool
    constexpr std::ptrdiff_t m_MeshGroupMask = 0x180; // uint64_t
    constexpr std::ptrdiff_t m_nIdealMotionType = 0x202; // int8_t
    constexpr std::ptrdiff_t m_nForceLOD = 0x203; // int8_t
    constexpr std::ptrdiff_t m_nClothUpdateFlags = 0x204; // int8_t
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
    constexpr std::ptrdiff_t m_flMaxspeed = 0x198; // float
    constexpr std::ptrdiff_t m_arrForceSubtickMoveWhen = 0x19C; // float[4]
    constexpr std::ptrdiff_t m_flForwardMove = 0x1AC; // float
    constexpr std::ptrdiff_t m_flLeftMove = 0x1B0; // float
    constexpr std::ptrdiff_t m_flUpMove = 0x1B4; // float
    constexpr std::ptrdiff_t m_vecLastMovementImpulses = 0x1B8; // Vector
    constexpr std::ptrdiff_t m_vecOldViewAngles = 0x1C4; // QAngle
}

namespace CPlayer_MovementServices_Humanoid { // CPlayer_MovementServices
    constexpr std::ptrdiff_t m_flStepSoundTime = 0x1D8; // float
    constexpr std::ptrdiff_t m_flFallVelocity = 0x1DC; // float
    constexpr std::ptrdiff_t m_bInCrouch = 0x1E0; // bool
    constexpr std::ptrdiff_t m_nCrouchState = 0x1E4; // uint32_t
    constexpr std::ptrdiff_t m_flCrouchTransitionStartTime = 0x1E8; // GameTime_t
    constexpr std::ptrdiff_t m_bDucked = 0x1EC; // bool
    constexpr std::ptrdiff_t m_bDucking = 0x1ED; // bool
    constexpr std::ptrdiff_t m_bInDuckJump = 0x1EE; // bool
    constexpr std::ptrdiff_t m_groundNormal = 0x1F0; // Vector
    constexpr std::ptrdiff_t m_flSurfaceFriction = 0x1FC; // float
    constexpr std::ptrdiff_t m_surfaceProps = 0x200; // CUtlStringToken
    constexpr std::ptrdiff_t m_nStepside = 0x210; // int32_t
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
    constexpr std::ptrdiff_t m_hMyWeapons = 0x40; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
    constexpr std::ptrdiff_t m_hActiveWeapon = 0x58; // CHandle<C_BasePlayerWeapon>
    constexpr std::ptrdiff_t m_hLastWeapon = 0x5C; // CHandle<C_BasePlayerWeapon>
    constexpr std::ptrdiff_t m_iAmmo = 0x60; // uint16_t[32]
}

namespace CPointOffScreenIndicatorUi { // C_PointClientUIWorldPanel
    constexpr std::ptrdiff_t m_bBeenEnabled = 0xF30; // bool
    constexpr std::ptrdiff_t m_bHide = 0xF31; // bool
    constexpr std::ptrdiff_t m_flSeenTargetTime = 0xF34; // float
    constexpr std::ptrdiff_t m_pTargetPanel = 0xF38; // C_PointClientUIWorldPanel*
}

namespace CPointTemplate { // CLogicalEntity
    constexpr std::ptrdiff_t m_iszWorldName = 0x550; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSource2EntityLumpName = 0x558; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszEntityFilterName = 0x560; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flTimeoutInterval = 0x568; // float
    constexpr std::ptrdiff_t m_bAsynchronouslySpawnEntities = 0x56C; // bool
    constexpr std::ptrdiff_t m_pOutputOnSpawned = 0x570; // CEntityIOOutput
    constexpr std::ptrdiff_t m_clientOnlyEntityBehavior = 0x598; // PointTemplateClientOnlyEntityBehavior_t
    constexpr std::ptrdiff_t m_ownerSpawnGroupType = 0x59C; // PointTemplateOwnerSpawnGroupType_t
    constexpr std::ptrdiff_t m_createdSpawnGroupHandles = 0x5A0; // CUtlVector<uint32_t>
    constexpr std::ptrdiff_t m_SpawnedEntityHandles = 0x5B8; // CUtlVector<CEntityHandle>
    constexpr std::ptrdiff_t m_ScriptSpawnCallback = 0x5D0; // HSCRIPT
    constexpr std::ptrdiff_t m_ScriptCallbackScope = 0x5D8; // HSCRIPT
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

namespace CPulseGraphInstance_ClientEntity { // CBasePulseGraphInstance
    constexpr std::ptrdiff_t m_pParent = 0xD8; // CClientScriptEntity*
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
    constexpr std::ptrdiff_t m_iEnemyKnifeKills = 0x74; // int32_t
    constexpr std::ptrdiff_t m_iEnemyTaserKills = 0x78; // int32_t
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
    constexpr std::ptrdiff_t m_bIsAnimationEnabled = 0x370; // bool
    constexpr std::ptrdiff_t m_bUseParentRenderBounds = 0x371; // bool
    constexpr std::ptrdiff_t m_bDisableSolidCollisionsForHierarchy = 0x372; // bool
    constexpr std::ptrdiff_t m_bDirtyMotionType = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_materialGroup = 0x374; // CUtlStringToken
    constexpr std::ptrdiff_t m_nHitboxSet = 0x378; // uint8_t
}

namespace CSkyboxReference { // C_BaseEntity
    constexpr std::ptrdiff_t m_worldGroupId = 0x550; // WorldGroupId_t
    constexpr std::ptrdiff_t m_hSkyCamera = 0x554; // CHandle<C_SkyCamera>
}

namespace CTablet { // C_CSWeaponBase
}

namespace CTakeDamageInfoAPI {
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
    constexpr std::ptrdiff_t m_bEnabled = 0xCD0; // bool
    constexpr std::ptrdiff_t m_nColorMode = 0xCD4; // int32_t
    constexpr std::ptrdiff_t m_Color = 0xCD8; // Color
    constexpr std::ptrdiff_t m_flColorTemperature = 0xCDC; // float
    constexpr std::ptrdiff_t m_flBrightness = 0xCE0; // float
    constexpr std::ptrdiff_t m_flBrightnessScale = 0xCE4; // float
    constexpr std::ptrdiff_t m_nDirectLight = 0xCE8; // int32_t
    constexpr std::ptrdiff_t m_nBakedShadowIndex = 0xCEC; // int32_t
    constexpr std::ptrdiff_t m_nLuminaireShape = 0xCF0; // int32_t
    constexpr std::ptrdiff_t m_flLuminaireSize = 0xCF4; // float
    constexpr std::ptrdiff_t m_flLuminaireAnisotropy = 0xCF8; // float
    constexpr std::ptrdiff_t m_LightStyleString = 0xD00; // CUtlString
    constexpr std::ptrdiff_t m_flLightStyleStartTime = 0xD08; // GameTime_t
    constexpr std::ptrdiff_t m_QueuedLightStyleStrings = 0xD10; // C_NetworkUtlVectorBase<CUtlString>
    constexpr std::ptrdiff_t m_LightStyleEvents = 0xD28; // C_NetworkUtlVectorBase<CUtlString>
    constexpr std::ptrdiff_t m_LightStyleTargets = 0xD40; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
    constexpr std::ptrdiff_t m_StyleEvent = 0xD58; // CEntityIOOutput[4]
    constexpr std::ptrdiff_t m_hLightCookie = 0xDF8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_flShape = 0xE00; // float
    constexpr std::ptrdiff_t m_flSoftX = 0xE04; // float
    constexpr std::ptrdiff_t m_flSoftY = 0xE08; // float
    constexpr std::ptrdiff_t m_flSkirt = 0xE0C; // float
    constexpr std::ptrdiff_t m_flSkirtNear = 0xE10; // float
    constexpr std::ptrdiff_t m_vSizeParams = 0xE14; // Vector
    constexpr std::ptrdiff_t m_flRange = 0xE20; // float
    constexpr std::ptrdiff_t m_vShear = 0xE24; // Vector
    constexpr std::ptrdiff_t m_nBakeSpecularToCubemaps = 0xE30; // int32_t
    constexpr std::ptrdiff_t m_vBakeSpecularToCubemapsSize = 0xE34; // Vector
    constexpr std::ptrdiff_t m_nCastShadows = 0xE40; // int32_t
    constexpr std::ptrdiff_t m_nShadowMapSize = 0xE44; // int32_t
    constexpr std::ptrdiff_t m_nShadowPriority = 0xE48; // int32_t
    constexpr std::ptrdiff_t m_bContactShadow = 0xE4C; // bool
    constexpr std::ptrdiff_t m_nBounceLight = 0xE50; // int32_t
    constexpr std::ptrdiff_t m_flBounceScale = 0xE54; // float
    constexpr std::ptrdiff_t m_flMinRoughness = 0xE58; // float
    constexpr std::ptrdiff_t m_vAlternateColor = 0xE5C; // Vector
    constexpr std::ptrdiff_t m_fAlternateColorBrightness = 0xE68; // float
    constexpr std::ptrdiff_t m_nFog = 0xE6C; // int32_t
    constexpr std::ptrdiff_t m_flFogStrength = 0xE70; // float
    constexpr std::ptrdiff_t m_nFogShadows = 0xE74; // int32_t
    constexpr std::ptrdiff_t m_flFogScale = 0xE78; // float
    constexpr std::ptrdiff_t m_flFadeSizeStart = 0xE7C; // float
    constexpr std::ptrdiff_t m_flFadeSizeEnd = 0xE80; // float
    constexpr std::ptrdiff_t m_flShadowFadeSizeStart = 0xE84; // float
    constexpr std::ptrdiff_t m_flShadowFadeSizeEnd = 0xE88; // float
    constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0xE8C; // bool
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0xE90; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0xE9C; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0xEA8; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0xEB4; // QAngle
    constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0xEC0; // Vector
}

namespace C_BaseButton { // C_BaseToggle
    constexpr std::ptrdiff_t m_glowEntity = 0xCD0; // CHandle<C_BaseModelEntity>
    constexpr std::ptrdiff_t m_usable = 0xCD4; // bool
    constexpr std::ptrdiff_t m_szDisplayText = 0xCD8; // CUtlSymbolLarge
}

namespace C_BaseCSGrenade { // C_CSWeaponBase
    constexpr std::ptrdiff_t m_bClientPredictDelete = 0x1A70; // bool
    constexpr std::ptrdiff_t m_bRedraw = 0x1A71; // bool
    constexpr std::ptrdiff_t m_bIsHeldByPlayer = 0x1A72; // bool
    constexpr std::ptrdiff_t m_bPinPulled = 0x1A73; // bool
    constexpr std::ptrdiff_t m_bJumpThrow = 0x1A74; // bool
    constexpr std::ptrdiff_t m_bThrowAnimating = 0x1A75; // bool
    constexpr std::ptrdiff_t m_fThrowTime = 0x1A78; // GameTime_t
    constexpr std::ptrdiff_t m_flThrowStrength = 0x1A7C; // float
    constexpr std::ptrdiff_t m_flThrowStrengthApproach = 0x1A80; // float
    constexpr std::ptrdiff_t m_fDropTime = 0x1A84; // GameTime_t
    constexpr std::ptrdiff_t m_bJustPulledPin = 0x1A88; // bool
    constexpr std::ptrdiff_t m_nNextHoldTick = 0x1A8C; // GameTick_t
    constexpr std::ptrdiff_t m_flNextHoldFrac = 0x1A90; // float
    constexpr std::ptrdiff_t m_hSwitchToWeaponAfterThrow = 0x1A94; // CHandle<C_CSWeaponBase>
}

namespace C_BaseCSGrenadeProjectile { // C_BaseGrenade
    constexpr std::ptrdiff_t m_vInitialPosition = 0x10C0; // Vector
    constexpr std::ptrdiff_t m_vInitialVelocity = 0x10CC; // Vector
    constexpr std::ptrdiff_t m_nBounces = 0x10D8; // int32_t
    constexpr std::ptrdiff_t m_nExplodeEffectIndex = 0x10E0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    constexpr std::ptrdiff_t m_nExplodeEffectTickBegin = 0x10E8; // int32_t
    constexpr std::ptrdiff_t m_vecExplodeEffectOrigin = 0x10EC; // Vector
    constexpr std::ptrdiff_t m_flSpawnTime = 0x10F8; // GameTime_t
    constexpr std::ptrdiff_t vecLastTrailLinePos = 0x10FC; // Vector
    constexpr std::ptrdiff_t flNextTrailLineTime = 0x1108; // GameTime_t
    constexpr std::ptrdiff_t m_bExplodeEffectBegan = 0x110C; // bool
    constexpr std::ptrdiff_t m_bCanCreateGrenadeTrail = 0x110D; // bool
    constexpr std::ptrdiff_t m_nSnapshotTrajectoryEffectIndex = 0x1110; // ParticleIndex_t
    constexpr std::ptrdiff_t m_hSnapshotTrajectoryParticleSnapshot = 0x1118; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
    constexpr std::ptrdiff_t m_arrTrajectoryTrailPoints = 0x1120; // CUtlVector<Vector>
    constexpr std::ptrdiff_t m_arrTrajectoryTrailPointCreationTimes = 0x1138; // CUtlVector<float>
    constexpr std::ptrdiff_t m_flTrajectoryTrailEffectCreationTime = 0x1150; // float
}

namespace C_BaseClientUIEntity { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_bEnabled = 0xCD8; // bool
    constexpr std::ptrdiff_t m_DialogXMLName = 0xCE0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_PanelClassName = 0xCE8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_PanelID = 0xCF0; // CUtlSymbolLarge
}

namespace C_BaseCombatCharacter { // C_BaseFlex
    constexpr std::ptrdiff_t m_hMyWearables = 0x1070; // C_NetworkUtlVectorBase<CHandle<C_EconWearable>>
    constexpr std::ptrdiff_t m_bloodColor = 0x1088; // int32_t
    constexpr std::ptrdiff_t m_leftFootAttachment = 0x108C; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_rightFootAttachment = 0x108D; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_nWaterWakeMode = 0x1090; // C_BaseCombatCharacter::WaterWakeMode_t
    constexpr std::ptrdiff_t m_flWaterWorldZ = 0x1094; // float
    constexpr std::ptrdiff_t m_flWaterNextTraceTime = 0x1098; // float
    constexpr std::ptrdiff_t m_flFieldOfView = 0x109C; // float
}

namespace C_BaseDoor { // C_BaseToggle
    constexpr std::ptrdiff_t m_bIsUsable = 0xCD0; // bool
}

namespace C_BaseEntity { // CEntityInstance
    constexpr std::ptrdiff_t m_CBodyComponent = 0x38; // CBodyComponent*
    constexpr std::ptrdiff_t m_NetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
    constexpr std::ptrdiff_t m_nLastThinkTick = 0x310; // GameTick_t
    constexpr std::ptrdiff_t m_pGameSceneNode = 0x318; // CGameSceneNode*
    constexpr std::ptrdiff_t m_pRenderComponent = 0x320; // CRenderComponent*
    constexpr std::ptrdiff_t m_pCollision = 0x328; // CCollisionProperty*
    constexpr std::ptrdiff_t m_iMaxHealth = 0x330; // int32_t
    constexpr std::ptrdiff_t m_iHealth = 0x334; // int32_t
    constexpr std::ptrdiff_t m_lifeState = 0x338; // uint8_t
    constexpr std::ptrdiff_t m_bTakesDamage = 0x339; // bool
    constexpr std::ptrdiff_t m_nTakeDamageFlags = 0x33C; // TakeDamageFlags_t
    constexpr std::ptrdiff_t m_bIsPlatform = 0x340; // bool
    constexpr std::ptrdiff_t m_ubInterpolationFrame = 0x341; // uint8_t
    constexpr std::ptrdiff_t m_hSceneObjectController = 0x344; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_nNoInterpolationTick = 0x348; // int32_t
    constexpr std::ptrdiff_t m_nVisibilityNoInterpolationTick = 0x34C; // int32_t
    constexpr std::ptrdiff_t m_flProxyRandomValue = 0x350; // float
    constexpr std::ptrdiff_t m_iEFlags = 0x354; // int32_t
    constexpr std::ptrdiff_t m_nWaterType = 0x358; // uint8_t
    constexpr std::ptrdiff_t m_bInterpolateEvenWithNoModel = 0x359; // bool
    constexpr std::ptrdiff_t m_bPredictionEligible = 0x35A; // bool
    constexpr std::ptrdiff_t m_bApplyLayerMatchIDToModel = 0x35B; // bool
    constexpr std::ptrdiff_t m_tokLayerMatchID = 0x35C; // CUtlStringToken
    constexpr std::ptrdiff_t m_nSubclassID = 0x360; // CUtlStringToken
    constexpr std::ptrdiff_t m_nSimulationTick = 0x370; // int32_t
    constexpr std::ptrdiff_t m_iCurrentThinkContext = 0x374; // int32_t
    constexpr std::ptrdiff_t m_aThinkFunctions = 0x378; // CUtlVector<thinkfunc_t>
    constexpr std::ptrdiff_t m_nDisableContextThinkStartTick = 0x390; // GameTick_t
    constexpr std::ptrdiff_t m_flAnimTime = 0x394; // float
    constexpr std::ptrdiff_t m_flSimulationTime = 0x398; // float
    constexpr std::ptrdiff_t m_nSceneObjectOverrideFlags = 0x39C; // uint8_t
    constexpr std::ptrdiff_t m_bHasSuccessfullyInterpolated = 0x39D; // bool
    constexpr std::ptrdiff_t m_bHasAddedVarsToInterpolation = 0x39E; // bool
    constexpr std::ptrdiff_t m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x39F; // bool
    constexpr std::ptrdiff_t m_nInterpolationLatchDirtyFlags = 0x3A0; // int32_t[2]
    constexpr std::ptrdiff_t m_ListEntry = 0x3A8; // uint16_t[11]
    constexpr std::ptrdiff_t m_flCreateTime = 0x3C0; // GameTime_t
    constexpr std::ptrdiff_t m_flSpeed = 0x3C4; // float
    constexpr std::ptrdiff_t m_EntClientFlags = 0x3C8; // uint16_t
    constexpr std::ptrdiff_t m_bClientSideRagdoll = 0x3CA; // bool
    constexpr std::ptrdiff_t m_iTeamNum = 0x3CB; // uint8_t
    constexpr std::ptrdiff_t m_spawnflags = 0x3CC; // uint32_t
    constexpr std::ptrdiff_t m_nNextThinkTick = 0x3D0; // GameTick_t
    constexpr std::ptrdiff_t m_fFlags = 0x3D4; // uint32_t
    constexpr std::ptrdiff_t m_vecAbsVelocity = 0x3D8; // Vector
    constexpr std::ptrdiff_t m_vecVelocity = 0x3E8; // CNetworkVelocityVector
    constexpr std::ptrdiff_t m_vecBaseVelocity = 0x418; // Vector
    constexpr std::ptrdiff_t m_hEffectEntity = 0x424; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_hOwnerEntity = 0x428; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_MoveCollide = 0x42C; // MoveCollide_t
    constexpr std::ptrdiff_t m_MoveType = 0x42D; // MoveType_t
    constexpr std::ptrdiff_t m_nActualMoveType = 0x42E; // MoveType_t
    constexpr std::ptrdiff_t m_flWaterLevel = 0x430; // float
    constexpr std::ptrdiff_t m_fEffects = 0x434; // uint32_t
    constexpr std::ptrdiff_t m_hGroundEntity = 0x438; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_flFriction = 0x43C; // float
    constexpr std::ptrdiff_t m_flElasticity = 0x440; // float
    constexpr std::ptrdiff_t m_flGravityScale = 0x444; // float
    constexpr std::ptrdiff_t m_flTimeScale = 0x448; // float
    constexpr std::ptrdiff_t m_bAnimatedEveryTick = 0x44C; // bool
    constexpr std::ptrdiff_t m_flNavIgnoreUntilTime = 0x450; // GameTime_t
    constexpr std::ptrdiff_t m_hThink = 0x454; // uint16_t
    constexpr std::ptrdiff_t m_fBBoxVisFlags = 0x460; // uint8_t
    constexpr std::ptrdiff_t m_bPredictable = 0x461; // bool
    constexpr std::ptrdiff_t m_bRenderWithViewModels = 0x462; // bool
    constexpr std::ptrdiff_t m_nSplitUserPlayerPredictionSlot = 0x464; // CSplitScreenSlot
    constexpr std::ptrdiff_t m_nFirstPredictableCommand = 0x468; // int32_t
    constexpr std::ptrdiff_t m_nLastPredictableCommand = 0x46C; // int32_t
    constexpr std::ptrdiff_t m_hOldMoveParent = 0x470; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_Particles = 0x478; // CParticleProperty
    constexpr std::ptrdiff_t m_vecPredictedScriptFloats = 0x4A0; // CUtlVector<float>
    constexpr std::ptrdiff_t m_vecPredictedScriptFloatIDs = 0x4B8; // CUtlVector<int32_t>
    constexpr std::ptrdiff_t m_nNextScriptVarRecordID = 0x4E8; // int32_t
    constexpr std::ptrdiff_t m_vecAngVelocity = 0x4F8; // QAngle
    constexpr std::ptrdiff_t m_DataChangeEventRef = 0x504; // int32_t
    constexpr std::ptrdiff_t m_dependencies = 0x508; // CUtlVector<CEntityHandle>
    constexpr std::ptrdiff_t m_nCreationTick = 0x520; // int32_t
    constexpr std::ptrdiff_t m_bAnimTimeChanged = 0x539; // bool
    constexpr std::ptrdiff_t m_bSimulationTimeChanged = 0x53A; // bool
    constexpr std::ptrdiff_t m_sUniqueHammerID = 0x548; // CUtlString
}

namespace C_BaseEntityAPI {
}

namespace C_BaseFire { // C_BaseEntity
    constexpr std::ptrdiff_t m_flScale = 0x550; // float
    constexpr std::ptrdiff_t m_flStartScale = 0x554; // float
    constexpr std::ptrdiff_t m_flScaleTime = 0x558; // float
    constexpr std::ptrdiff_t m_nFlags = 0x55C; // uint32_t
}

namespace C_BaseFlex { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_flexWeight = 0xEE8; // C_NetworkUtlVectorBase<float>
    constexpr std::ptrdiff_t m_vLookTargetPosition = 0xF00; // Vector
    constexpr std::ptrdiff_t m_blinktoggle = 0xF18; // bool
    constexpr std::ptrdiff_t m_nLastFlexUpdateFrameCount = 0xF78; // int32_t
    constexpr std::ptrdiff_t m_CachedViewTarget = 0xF7C; // Vector
    constexpr std::ptrdiff_t m_nNextSceneEventId = 0xF88; // uint32_t
    constexpr std::ptrdiff_t m_iBlink = 0xF8C; // int32_t
    constexpr std::ptrdiff_t m_blinktime = 0xF90; // float
    constexpr std::ptrdiff_t m_prevblinktoggle = 0xF94; // bool
    constexpr std::ptrdiff_t m_iJawOpen = 0xF98; // int32_t
    constexpr std::ptrdiff_t m_flJawOpenAmount = 0xF9C; // float
    constexpr std::ptrdiff_t m_flBlinkAmount = 0xFA0; // float
    constexpr std::ptrdiff_t m_iMouthAttachment = 0xFA4; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_iEyeAttachment = 0xFA5; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_bResetFlexWeightsOnModelChange = 0xFA6; // bool
    constexpr std::ptrdiff_t m_nEyeOcclusionRendererBone = 0xFC0; // int32_t
    constexpr std::ptrdiff_t m_mEyeOcclusionRendererCameraToBoneTransform = 0xFC4; // matrix3x4_t
    constexpr std::ptrdiff_t m_vEyeOcclusionRendererHalfExtent = 0xFF4; // Vector
    constexpr std::ptrdiff_t m_PhonemeClasses = 0x1010; // C_BaseFlex::Emphasized_Phoneme[3]
}

namespace C_BaseFlex_Emphasized_Phoneme {
    constexpr std::ptrdiff_t m_sClassName = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_flAmount = 0x18; // float
    constexpr std::ptrdiff_t m_bRequired = 0x1C; // bool
    constexpr std::ptrdiff_t m_bBasechecked = 0x1D; // bool
    constexpr std::ptrdiff_t m_bValid = 0x1E; // bool
}

namespace C_BaseGrenade { // C_BaseFlex
    constexpr std::ptrdiff_t m_bHasWarnedAI = 0x1070; // bool
    constexpr std::ptrdiff_t m_bIsSmokeGrenade = 0x1071; // bool
    constexpr std::ptrdiff_t m_bIsLive = 0x1072; // bool
    constexpr std::ptrdiff_t m_DmgRadius = 0x1074; // float
    constexpr std::ptrdiff_t m_flDetonateTime = 0x1078; // GameTime_t
    constexpr std::ptrdiff_t m_flWarnAITime = 0x107C; // float
    constexpr std::ptrdiff_t m_flDamage = 0x1080; // float
    constexpr std::ptrdiff_t m_iszBounceSound = 0x1088; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_ExplosionSound = 0x1090; // CUtlString
    constexpr std::ptrdiff_t m_hThrower = 0x109C; // CHandle<C_CSPlayerPawn>
    constexpr std::ptrdiff_t m_flNextAttack = 0x10B4; // GameTime_t
    constexpr std::ptrdiff_t m_hOriginalThrower = 0x10B8; // CHandle<C_CSPlayerPawn>
}

namespace C_BaseModelEntity { // C_BaseEntity
    constexpr std::ptrdiff_t m_CRenderComponent = 0xA20; // CRenderComponent*
    constexpr std::ptrdiff_t m_CHitboxComponent = 0xA28; // CHitboxComponent
    constexpr std::ptrdiff_t m_bInitModelEffects = 0xA70; // bool
    constexpr std::ptrdiff_t m_bIsStaticProp = 0xA71; // bool
    constexpr std::ptrdiff_t m_nLastAddDecal = 0xA74; // int32_t
    constexpr std::ptrdiff_t m_nDecalsAdded = 0xA78; // int32_t
    constexpr std::ptrdiff_t m_iOldHealth = 0xA7C; // int32_t
    constexpr std::ptrdiff_t m_nRenderMode = 0xA80; // RenderMode_t
    constexpr std::ptrdiff_t m_nRenderFX = 0xA81; // RenderFx_t
    constexpr std::ptrdiff_t m_bAllowFadeInView = 0xA82; // bool
    constexpr std::ptrdiff_t m_clrRender = 0xA83; // Color
    constexpr std::ptrdiff_t m_vecRenderAttributes = 0xA88; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
    constexpr std::ptrdiff_t m_bRenderToCubemaps = 0xAF0; // bool
    constexpr std::ptrdiff_t m_Collision = 0xAF8; // CCollisionProperty
    constexpr std::ptrdiff_t m_Glow = 0xBA8; // CGlowProperty
    constexpr std::ptrdiff_t m_flGlowBackfaceMult = 0xC00; // float
    constexpr std::ptrdiff_t m_fadeMinDist = 0xC04; // float
    constexpr std::ptrdiff_t m_fadeMaxDist = 0xC08; // float
    constexpr std::ptrdiff_t m_flFadeScale = 0xC0C; // float
    constexpr std::ptrdiff_t m_flShadowStrength = 0xC10; // float
    constexpr std::ptrdiff_t m_nObjectCulling = 0xC14; // uint8_t
    constexpr std::ptrdiff_t m_nAddDecal = 0xC18; // int32_t
    constexpr std::ptrdiff_t m_vDecalPosition = 0xC1C; // Vector
    constexpr std::ptrdiff_t m_vDecalForwardAxis = 0xC28; // Vector
    constexpr std::ptrdiff_t m_flDecalHealBloodRate = 0xC34; // float
    constexpr std::ptrdiff_t m_flDecalHealHeightRate = 0xC38; // float
    constexpr std::ptrdiff_t m_ConfigEntitiesToPropagateMaterialDecalsTo = 0xC40; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
    constexpr std::ptrdiff_t m_vecViewOffset = 0xC58; // CNetworkViewOffsetVector
    constexpr std::ptrdiff_t m_pClientAlphaProperty = 0xC88; // CClientAlphaProperty*
    constexpr std::ptrdiff_t m_ClientOverrideTint = 0xC90; // Color
    constexpr std::ptrdiff_t m_bUseClientOverrideTint = 0xC94; // bool
}

namespace C_BasePlayerPawn { // C_BaseCombatCharacter
    constexpr std::ptrdiff_t m_pWeaponServices = 0x1100; // CPlayer_WeaponServices*
    constexpr std::ptrdiff_t m_pItemServices = 0x1108; // CPlayer_ItemServices*
    constexpr std::ptrdiff_t m_pAutoaimServices = 0x1110; // CPlayer_AutoaimServices*
    constexpr std::ptrdiff_t m_pObserverServices = 0x1118; // CPlayer_ObserverServices*
    constexpr std::ptrdiff_t m_pWaterServices = 0x1120; // CPlayer_WaterServices*
    constexpr std::ptrdiff_t m_pUseServices = 0x1128; // CPlayer_UseServices*
    constexpr std::ptrdiff_t m_pFlashlightServices = 0x1130; // CPlayer_FlashlightServices*
    constexpr std::ptrdiff_t m_pCameraServices = 0x1138; // CPlayer_CameraServices*
    constexpr std::ptrdiff_t m_pMovementServices = 0x1140; // CPlayer_MovementServices*
    constexpr std::ptrdiff_t m_ServerViewAngleChanges = 0x1150; // C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
    constexpr std::ptrdiff_t m_nHighestConsumedServerViewAngleChangeIndex = 0x11A0; // uint32_t
    constexpr std::ptrdiff_t v_angle = 0x11A4; // QAngle
    constexpr std::ptrdiff_t v_anglePrevious = 0x11B0; // QAngle
    constexpr std::ptrdiff_t m_iHideHUD = 0x11BC; // uint32_t
    constexpr std::ptrdiff_t m_skybox3d = 0x11C0; // sky3dparams_t
    constexpr std::ptrdiff_t m_flDeathTime = 0x1250; // GameTime_t
    constexpr std::ptrdiff_t m_vecPredictionError = 0x1254; // Vector
    constexpr std::ptrdiff_t m_flPredictionErrorTime = 0x1260; // GameTime_t
    constexpr std::ptrdiff_t m_vecLastCameraSetupLocalOrigin = 0x1264; // Vector
    constexpr std::ptrdiff_t m_flLastCameraSetupTime = 0x1270; // GameTime_t
    constexpr std::ptrdiff_t m_flFOVSensitivityAdjust = 0x1274; // float
    constexpr std::ptrdiff_t m_flMouseSensitivity = 0x1278; // float
    constexpr std::ptrdiff_t m_vOldOrigin = 0x127C; // Vector
    constexpr std::ptrdiff_t m_flOldSimulationTime = 0x1288; // float
    constexpr std::ptrdiff_t m_nLastExecutedCommandNumber = 0x128C; // int32_t
    constexpr std::ptrdiff_t m_nLastExecutedCommandTick = 0x1290; // int32_t
    constexpr std::ptrdiff_t m_hController = 0x1294; // CHandle<CBasePlayerController>
    constexpr std::ptrdiff_t m_bIsSwappingToPredictableController = 0x1298; // bool
}

namespace C_BasePlayerWeapon { // C_EconEntity
    constexpr std::ptrdiff_t m_nNextPrimaryAttackTick = 0x15B8; // GameTick_t
    constexpr std::ptrdiff_t m_flNextPrimaryAttackTickRatio = 0x15BC; // float
    constexpr std::ptrdiff_t m_nNextSecondaryAttackTick = 0x15C0; // GameTick_t
    constexpr std::ptrdiff_t m_flNextSecondaryAttackTickRatio = 0x15C4; // float
    constexpr std::ptrdiff_t m_iClip1 = 0x15C8; // int32_t
    constexpr std::ptrdiff_t m_iClip2 = 0x15CC; // int32_t
    constexpr std::ptrdiff_t m_pReserveAmmo = 0x15D0; // int32_t[2]
}

namespace C_BasePropDoor { // C_DynamicProp
    constexpr std::ptrdiff_t m_eDoorState = 0x1150; // DoorState_t
    constexpr std::ptrdiff_t m_modelChanged = 0x1154; // bool
    constexpr std::ptrdiff_t m_bLocked = 0x1155; // bool
    constexpr std::ptrdiff_t m_closedPosition = 0x1158; // Vector
    constexpr std::ptrdiff_t m_closedAngles = 0x1164; // QAngle
    constexpr std::ptrdiff_t m_hMaster = 0x1170; // CHandle<C_BasePropDoor>
    constexpr std::ptrdiff_t m_vWhereToSetLightingOrigin = 0x1174; // Vector
}

namespace C_BaseToggle { // C_BaseModelEntity
}

namespace C_BaseTrigger { // C_BaseToggle
    constexpr std::ptrdiff_t m_bDisabled = 0xCD0; // bool
    constexpr std::ptrdiff_t m_bClientSidePredicted = 0xCD1; // bool
}

namespace C_BaseViewModel { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_vecLastFacing = 0xEE0; // Vector
    constexpr std::ptrdiff_t m_nViewModelIndex = 0xEEC; // uint32_t
    constexpr std::ptrdiff_t m_nAnimationParity = 0xEF0; // uint32_t
    constexpr std::ptrdiff_t m_flAnimationStartTime = 0xEF4; // float
    constexpr std::ptrdiff_t m_hWeapon = 0xEF8; // CHandle<C_BasePlayerWeapon>
    constexpr std::ptrdiff_t m_sVMName = 0xF00; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sAnimationPrefix = 0xF08; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hWeaponModel = 0xF10; // CHandle<C_ViewmodelWeapon>
    constexpr std::ptrdiff_t m_iCameraAttachment = 0xF14; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_vecLastCameraAngles = 0xF18; // QAngle
    constexpr std::ptrdiff_t m_previousElapsedDuration = 0xF24; // float
    constexpr std::ptrdiff_t m_previousCycle = 0xF28; // float
    constexpr std::ptrdiff_t m_nOldAnimationParity = 0xF2C; // int32_t
    constexpr std::ptrdiff_t m_hOldLayerSequence = 0xF30; // HSequence
    constexpr std::ptrdiff_t m_oldLayer = 0xF34; // int32_t
    constexpr std::ptrdiff_t m_oldLayerStartTime = 0xF38; // float
    constexpr std::ptrdiff_t m_hControlPanel = 0xF3C; // CHandle<C_BaseEntity>
}

namespace C_Beam { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_flFrameRate = 0xCD0; // float
    constexpr std::ptrdiff_t m_flHDRColorScale = 0xCD4; // float
    constexpr std::ptrdiff_t m_flFireTime = 0xCD8; // GameTime_t
    constexpr std::ptrdiff_t m_flDamage = 0xCDC; // float
    constexpr std::ptrdiff_t m_nNumBeamEnts = 0xCE0; // uint8_t
    constexpr std::ptrdiff_t m_queryHandleHalo = 0xCE4; // int32_t
    constexpr std::ptrdiff_t m_hBaseMaterial = 0xD08; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_nHaloIndex = 0xD10; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_nBeamType = 0xD18; // BeamType_t
    constexpr std::ptrdiff_t m_nBeamFlags = 0xD1C; // uint32_t
    constexpr std::ptrdiff_t m_hAttachEntity = 0xD20; // CHandle<C_BaseEntity>[10]
    constexpr std::ptrdiff_t m_nAttachIndex = 0xD48; // AttachmentHandle_t[10]
    constexpr std::ptrdiff_t m_fWidth = 0xD54; // float
    constexpr std::ptrdiff_t m_fEndWidth = 0xD58; // float
    constexpr std::ptrdiff_t m_fFadeLength = 0xD5C; // float
    constexpr std::ptrdiff_t m_fHaloScale = 0xD60; // float
    constexpr std::ptrdiff_t m_fAmplitude = 0xD64; // float
    constexpr std::ptrdiff_t m_fStartFrame = 0xD68; // float
    constexpr std::ptrdiff_t m_fSpeed = 0xD6C; // float
    constexpr std::ptrdiff_t m_flFrame = 0xD70; // float
    constexpr std::ptrdiff_t m_nClipStyle = 0xD74; // BeamClipStyle_t
    constexpr std::ptrdiff_t m_bTurnedOff = 0xD78; // bool
    constexpr std::ptrdiff_t m_vecEndPos = 0xD7C; // Vector
    constexpr std::ptrdiff_t m_hEndEntity = 0xD88; // CHandle<C_BaseEntity>
}

namespace C_Breakable { // C_BaseModelEntity
}

namespace C_BreakableProp { // CBaseProp
    constexpr std::ptrdiff_t m_OnBreak = 0xF20; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnHealthChanged = 0xF48; // CEntityOutputTemplate<float>
    constexpr std::ptrdiff_t m_OnTakeDamage = 0xF70; // CEntityIOOutput
    constexpr std::ptrdiff_t m_impactEnergyScale = 0xF98; // float
    constexpr std::ptrdiff_t m_iMinHealthDmg = 0xF9C; // int32_t
    constexpr std::ptrdiff_t m_flPressureDelay = 0xFA0; // float
    constexpr std::ptrdiff_t m_hBreaker = 0xFA4; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_PerformanceMode = 0xFA8; // PerformanceMode_t
    constexpr std::ptrdiff_t m_flDmgModBullet = 0xFAC; // float
    constexpr std::ptrdiff_t m_flDmgModClub = 0xFB0; // float
    constexpr std::ptrdiff_t m_flDmgModExplosive = 0xFB4; // float
    constexpr std::ptrdiff_t m_flDmgModFire = 0xFB8; // float
    constexpr std::ptrdiff_t m_iszPhysicsDamageTableName = 0xFC0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszBasePropData = 0xFC8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iInteractions = 0xFD0; // int32_t
    constexpr std::ptrdiff_t m_flPreventDamageBeforeTime = 0xFD4; // GameTime_t
    constexpr std::ptrdiff_t m_bHasBreakPiecesOrCommands = 0xFD8; // bool
    constexpr std::ptrdiff_t m_explodeDamage = 0xFDC; // float
    constexpr std::ptrdiff_t m_explodeRadius = 0xFE0; // float
    constexpr std::ptrdiff_t m_explosionDelay = 0xFE8; // float
    constexpr std::ptrdiff_t m_explosionBuildupSound = 0xFF0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_explosionCustomEffect = 0xFF8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_explosionCustomSound = 0x1000; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_explosionModifier = 0x1008; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hPhysicsAttacker = 0x1010; // CHandle<C_BasePlayerPawn>
    constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0x1014; // GameTime_t
    constexpr std::ptrdiff_t m_flDefaultFadeScale = 0x1018; // float
    constexpr std::ptrdiff_t m_hLastAttacker = 0x101C; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_hFlareEnt = 0x1020; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_noGhostCollision = 0x1024; // bool
}

namespace C_BulletHitModel { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_matLocal = 0xED8; // matrix3x4_t
    constexpr std::ptrdiff_t m_iBoneIndex = 0xF08; // int32_t
    constexpr std::ptrdiff_t m_hPlayerParent = 0xF0C; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_bIsHit = 0xF10; // bool
    constexpr std::ptrdiff_t m_flTimeCreated = 0xF14; // float
    constexpr std::ptrdiff_t m_vecStartPos = 0xF18; // Vector
}

namespace C_C4 { // C_CSWeaponBase
    constexpr std::ptrdiff_t m_szScreenText = 0x1A70; // char[32]
    constexpr std::ptrdiff_t m_activeLightParticleIndex = 0x1A90; // ParticleIndex_t
    constexpr std::ptrdiff_t m_eActiveLightEffect = 0x1A94; // C4LightEffect_t
    constexpr std::ptrdiff_t m_bStartedArming = 0x1A98; // bool
    constexpr std::ptrdiff_t m_fArmedTime = 0x1A9C; // GameTime_t
    constexpr std::ptrdiff_t m_bBombPlacedAnimation = 0x1AA0; // bool
    constexpr std::ptrdiff_t m_bIsPlantingViaUse = 0x1AA1; // bool
    constexpr std::ptrdiff_t m_entitySpottedState = 0x1AA8; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_nSpotRules = 0x1AC0; // int32_t
    constexpr std::ptrdiff_t m_bPlayedArmingBeeps = 0x1AC4; // bool[7]
    constexpr std::ptrdiff_t m_bBombPlanted = 0x1ACB; // bool
    constexpr std::ptrdiff_t m_bDroppedFromDeath = 0x1ACC; // bool
}

namespace C_CSGOViewModel { // C_PredictedViewModel
    constexpr std::ptrdiff_t m_bShouldIgnoreOffsetAndAccuracy = 0xF68; // bool
    constexpr std::ptrdiff_t m_nWeaponParity = 0xF6C; // uint32_t
    constexpr std::ptrdiff_t m_nOldWeaponParity = 0xF70; // uint32_t
    constexpr std::ptrdiff_t m_nLastKnownAssociatedWeaponEntIndex = 0xF74; // CEntityIndex
    constexpr std::ptrdiff_t m_bNeedToQueueHighResComposite = 0xF78; // bool
    constexpr std::ptrdiff_t m_vLoweredWeaponOffset = 0xFBC; // QAngle
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
    constexpr std::ptrdiff_t m_flZFar = 0x550; // float
    constexpr std::ptrdiff_t m_flZNear = 0x554; // float
    constexpr std::ptrdiff_t m_bLoop = 0x558; // bool
    constexpr std::ptrdiff_t m_bVerticalFOV = 0x559; // bool
    constexpr std::ptrdiff_t m_bConstantSpeed = 0x55A; // bool
    constexpr std::ptrdiff_t m_flDuration = 0x55C; // float
    constexpr std::ptrdiff_t m_flPathLength = 0x5A0; // float
    constexpr std::ptrdiff_t m_flPathDuration = 0x5A4; // float
}

namespace C_CSGO_MapPreviewCameraPathNode { // C_BaseEntity
    constexpr std::ptrdiff_t m_szParentPathUniqueID = 0x550; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nPathIndex = 0x558; // int32_t
    constexpr std::ptrdiff_t m_vInTangentLocal = 0x55C; // Vector
    constexpr std::ptrdiff_t m_vOutTangentLocal = 0x568; // Vector
    constexpr std::ptrdiff_t m_flFOV = 0x574; // float
    constexpr std::ptrdiff_t m_flSpeed = 0x578; // float
    constexpr std::ptrdiff_t m_flEaseIn = 0x57C; // float
    constexpr std::ptrdiff_t m_flEaseOut = 0x580; // float
    constexpr std::ptrdiff_t m_vInTangentWorld = 0x584; // Vector
    constexpr std::ptrdiff_t m_vOutTangentWorld = 0x590; // Vector
}

namespace C_CSGO_PreviewModel { // C_BaseFlex
    constexpr std::ptrdiff_t m_animgraph = 0x1070; // CUtlString
    constexpr std::ptrdiff_t m_animgraphCharacterModeString = 0x1078; // CGlobalSymbol
    constexpr std::ptrdiff_t m_defaultAnim = 0x1080; // CUtlString
    constexpr std::ptrdiff_t m_nDefaultAnimLoopMode = 0x1088; // AnimLoopMode_t
    constexpr std::ptrdiff_t m_flInitialModelScale = 0x108C; // float
}

namespace C_CSGO_PreviewModelAlias_csgo_item_previewmodel { // C_CSGO_PreviewModel
}

namespace C_CSGO_PreviewModel_GraphController { // CAnimGraphControllerBase
    constexpr std::ptrdiff_t m_pszCharacterMode = 0x18; // CAnimGraphParamOptionalRef<char*>
    constexpr std::ptrdiff_t m_pszWeaponState = 0x38; // CAnimGraphParamOptionalRef<char*>
    constexpr std::ptrdiff_t m_pszWeaponType = 0x58; // CAnimGraphParamOptionalRef<char*>
    constexpr std::ptrdiff_t m_pszEndOfMatchCelebration = 0x78; // CAnimGraphParamOptionalRef<char*>
}

namespace C_CSGO_PreviewPlayer { // C_CSPlayerPawn
    constexpr std::ptrdiff_t m_animgraph = 0x2418; // CUtlString
    constexpr std::ptrdiff_t m_animgraphCharacterModeString = 0x2420; // CGlobalSymbol
    constexpr std::ptrdiff_t m_flInitialModelScale = 0x2428; // float
}

namespace C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel { // C_CSGO_PreviewPlayer
}

namespace C_CSGO_PreviewPlayer_GraphController { // CAnimGraphControllerBase
    constexpr std::ptrdiff_t m_pszCharacterMode = 0x18; // CAnimGraphParamOptionalRef<char*>
    constexpr std::ptrdiff_t m_pszTeamPreviewVariant = 0x38; // CAnimGraphParamOptionalRef<char*>
    constexpr std::ptrdiff_t m_pszTeamPreviewPosition = 0x58; // CAnimGraphParamOptionalRef<char*>
    constexpr std::ptrdiff_t m_pszEndOfMatchCelebration = 0x78; // CAnimGraphParamOptionalRef<char*>
    constexpr std::ptrdiff_t m_nTeamPreviewRandom = 0x98; // CAnimGraphParamOptionalRef<int32_t>
    constexpr std::ptrdiff_t m_pszWeaponState = 0xB0; // CAnimGraphParamOptionalRef<char*>
    constexpr std::ptrdiff_t m_pszWeaponType = 0xD0; // CAnimGraphParamOptionalRef<char*>
    constexpr std::ptrdiff_t m_bCT = 0xF0; // CAnimGraphParamOptionalRef<bool>
}

namespace C_CSGO_TeamIntroCharacterPosition { // C_CSGO_TeamPreviewCharacterPosition
}

namespace C_CSGO_TeamIntroCounterTerroristPosition { // C_CSGO_TeamIntroCharacterPosition
}

namespace C_CSGO_TeamIntroTerroristPosition { // C_CSGO_TeamIntroCharacterPosition
}

namespace C_CSGO_TeamPreviewCamera { // C_CSGO_MapPreviewCameraPath
    constexpr std::ptrdiff_t m_nVariant = 0x5B0; // int32_t
    constexpr std::ptrdiff_t m_bDofEnabled = 0x5B4; // bool
    constexpr std::ptrdiff_t m_flDofNearBlurry = 0x5B8; // float
    constexpr std::ptrdiff_t m_flDofNearCrisp = 0x5BC; // float
    constexpr std::ptrdiff_t m_flDofFarCrisp = 0x5C0; // float
    constexpr std::ptrdiff_t m_flDofFarBlurry = 0x5C4; // float
    constexpr std::ptrdiff_t m_flDofTiltToGround = 0x5C8; // float
}

namespace C_CSGO_TeamPreviewCharacterPosition { // C_BaseEntity
    constexpr std::ptrdiff_t m_nVariant = 0x550; // int32_t
    constexpr std::ptrdiff_t m_nRandom = 0x554; // int32_t
    constexpr std::ptrdiff_t m_nOrdinal = 0x558; // int32_t
    constexpr std::ptrdiff_t m_sWeaponName = 0x560; // CUtlString
    constexpr std::ptrdiff_t m_xuid = 0x568; // uint64_t
    constexpr std::ptrdiff_t m_agentItem = 0x570; // C_EconItemView
    constexpr std::ptrdiff_t m_glovesItem = 0x9B8; // C_EconItemView
    constexpr std::ptrdiff_t m_weaponItem = 0xE00; // C_EconItemView
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
    constexpr std::ptrdiff_t m_iRoundEndWinnerTeam = 0xEB8; // int32_t
    constexpr std::ptrdiff_t m_eRoundEndReason = 0xEBC; // int32_t
    constexpr std::ptrdiff_t m_bRoundEndShowTimerDefend = 0xEC0; // bool
    constexpr std::ptrdiff_t m_iRoundEndTimerTime = 0xEC4; // int32_t
    constexpr std::ptrdiff_t m_sRoundEndFunFactToken = 0xEC8; // CUtlString
    constexpr std::ptrdiff_t m_iRoundEndFunFactPlayerSlot = 0xED0; // CPlayerSlot
    constexpr std::ptrdiff_t m_iRoundEndFunFactData1 = 0xED4; // int32_t
    constexpr std::ptrdiff_t m_iRoundEndFunFactData2 = 0xED8; // int32_t
    constexpr std::ptrdiff_t m_iRoundEndFunFactData3 = 0xEDC; // int32_t
    constexpr std::ptrdiff_t m_sRoundEndMessage = 0xEE0; // CUtlString
    constexpr std::ptrdiff_t m_iRoundEndPlayerCount = 0xEE8; // int32_t
    constexpr std::ptrdiff_t m_bRoundEndNoMusic = 0xEEC; // bool
    constexpr std::ptrdiff_t m_iRoundEndLegacy = 0xEF0; // int32_t
    constexpr std::ptrdiff_t m_nRoundEndCount = 0xEF4; // uint8_t
    constexpr std::ptrdiff_t m_iRoundStartRoundNumber = 0xEF8; // int32_t
    constexpr std::ptrdiff_t m_nRoundStartCount = 0xEFC; // uint8_t
    constexpr std::ptrdiff_t m_flLastPerfSampleTime = 0x4F08; // double
}

namespace C_CSGameRulesProxy { // C_GameRulesProxy
    constexpr std::ptrdiff_t m_pGameRules = 0x550; // C_CSGameRules*
}

namespace C_CSMinimapBoundary { // C_BaseEntity
}

namespace C_CSObserverPawn { // C_CSPlayerPawnBase
    constexpr std::ptrdiff_t m_hDetectParentChange = 0x1718; // CEntityHandle
}

namespace C_CSObserverPawnAPI {
}

namespace C_CSPlayerPawn { // C_CSPlayerPawnBase
    constexpr std::ptrdiff_t m_pBulletServices = 0x1718; // CCSPlayer_BulletServices*
    constexpr std::ptrdiff_t m_pHostageServices = 0x1720; // CCSPlayer_HostageServices*
    constexpr std::ptrdiff_t m_pBuyServices = 0x1728; // CCSPlayer_BuyServices*
    constexpr std::ptrdiff_t m_pGlowServices = 0x1730; // CCSPlayer_GlowServices*
    constexpr std::ptrdiff_t m_pActionTrackingServices = 0x1738; // CCSPlayer_ActionTrackingServices*
    constexpr std::ptrdiff_t m_flHealthShotBoostExpirationTime = 0x1740; // GameTime_t
    constexpr std::ptrdiff_t m_flLastFiredWeaponTime = 0x1744; // GameTime_t
    constexpr std::ptrdiff_t m_bHasFemaleVoice = 0x1748; // bool
    constexpr std::ptrdiff_t m_flLandseconds = 0x174C; // float
    constexpr std::ptrdiff_t m_flOldFallVelocity = 0x1750; // float
    constexpr std::ptrdiff_t m_szLastPlaceName = 0x1754; // char[18]
    constexpr std::ptrdiff_t m_bPrevDefuser = 0x1766; // bool
    constexpr std::ptrdiff_t m_bPrevHelmet = 0x1767; // bool
    constexpr std::ptrdiff_t m_nPrevArmorVal = 0x1768; // int32_t
    constexpr std::ptrdiff_t m_nPrevGrenadeAmmoCount = 0x176C; // int32_t
    constexpr std::ptrdiff_t m_unPreviousWeaponHash = 0x1770; // uint32_t
    constexpr std::ptrdiff_t m_unWeaponHash = 0x1774; // uint32_t
    constexpr std::ptrdiff_t m_bInBuyZone = 0x1778; // bool
    constexpr std::ptrdiff_t m_bPreviouslyInBuyZone = 0x1779; // bool
    constexpr std::ptrdiff_t m_aimPunchAngle = 0x177C; // QAngle
    constexpr std::ptrdiff_t m_aimPunchAngleVel = 0x1788; // QAngle
    constexpr std::ptrdiff_t m_aimPunchTickBase = 0x1794; // int32_t
    constexpr std::ptrdiff_t m_aimPunchTickFraction = 0x1798; // float
    constexpr std::ptrdiff_t m_aimPunchCache = 0x17A0; // CUtlVector<QAngle>
    constexpr std::ptrdiff_t m_bInLanding = 0x17C0; // bool
    constexpr std::ptrdiff_t m_flLandingTime = 0x17C4; // float
    constexpr std::ptrdiff_t m_bInHostageRescueZone = 0x17C8; // bool
    constexpr std::ptrdiff_t m_bInBombZone = 0x17C9; // bool
    constexpr std::ptrdiff_t m_bIsBuyMenuOpen = 0x17CA; // bool
    constexpr std::ptrdiff_t m_flTimeOfLastInjury = 0x17CC; // GameTime_t
    constexpr std::ptrdiff_t m_flNextSprayDecalTime = 0x17D0; // GameTime_t
    constexpr std::ptrdiff_t m_iRetakesOffering = 0x18E8; // int32_t
    constexpr std::ptrdiff_t m_iRetakesOfferingCard = 0x18EC; // int32_t
    constexpr std::ptrdiff_t m_bRetakesHasDefuseKit = 0x18F0; // bool
    constexpr std::ptrdiff_t m_bRetakesMVPLastRound = 0x18F1; // bool
    constexpr std::ptrdiff_t m_iRetakesMVPBoostItem = 0x18F4; // int32_t
    constexpr std::ptrdiff_t m_RetakesMVPBoostExtraUtility = 0x18F8; // loadout_slot_t
    constexpr std::ptrdiff_t m_bNeedToReApplyGloves = 0x1918; // bool
    constexpr std::ptrdiff_t m_EconGloves = 0x1920; // C_EconItemView
    constexpr std::ptrdiff_t m_nEconGlovesChanged = 0x1D68; // uint8_t
    constexpr std::ptrdiff_t m_bMustSyncRagdollState = 0x1D69; // bool
    constexpr std::ptrdiff_t m_nRagdollDamageBone = 0x1D6C; // int32_t
    constexpr std::ptrdiff_t m_vRagdollDamageForce = 0x1D70; // Vector
    constexpr std::ptrdiff_t m_vRagdollDamagePosition = 0x1D7C; // Vector
    constexpr std::ptrdiff_t m_szRagdollDamageWeaponName = 0x1D88; // char[64]
    constexpr std::ptrdiff_t m_bRagdollDamageHeadshot = 0x1DC8; // bool
    constexpr std::ptrdiff_t m_vRagdollServerOrigin = 0x1DCC; // Vector
    constexpr std::ptrdiff_t m_bLastHeadBoneTransformIsValid = 0x23E0; // bool
    constexpr std::ptrdiff_t m_lastLandTime = 0x23E4; // GameTime_t
    constexpr std::ptrdiff_t m_bOnGroundLastTick = 0x23E8; // bool
    constexpr std::ptrdiff_t m_qDeathEyeAngles = 0x2404; // QAngle
    constexpr std::ptrdiff_t m_bSkipOneHeadConstraintUpdate = 0x2410; // bool
}

namespace C_CSPlayerPawnAPI {
}

namespace C_CSPlayerPawnBase { // C_BasePlayerPawn
    constexpr std::ptrdiff_t m_pPingServices = 0x12C0; // CCSPlayer_PingServices*
    constexpr std::ptrdiff_t m_pViewModelServices = 0x12C8; // CPlayer_ViewModelServices*
    constexpr std::ptrdiff_t m_fRenderingClipPlane = 0x12D8; // float[4]
    constexpr std::ptrdiff_t m_nLastClipPlaneSetupFrame = 0x12E8; // int32_t
    constexpr std::ptrdiff_t m_vecLastClipCameraPos = 0x12EC; // Vector
    constexpr std::ptrdiff_t m_vecLastClipCameraForward = 0x12F8; // Vector
    constexpr std::ptrdiff_t m_bClipHitStaticWorld = 0x1304; // bool
    constexpr std::ptrdiff_t m_bCachedPlaneIsValid = 0x1305; // bool
    constexpr std::ptrdiff_t m_pClippingWeapon = 0x1308; // C_CSWeaponBase*
    constexpr std::ptrdiff_t m_previousPlayerState = 0x1310; // CSPlayerState
    constexpr std::ptrdiff_t m_flLastCollisionCeiling = 0x1314; // float
    constexpr std::ptrdiff_t m_flLastCollisionCeilingChangeTime = 0x1318; // float
    constexpr std::ptrdiff_t m_grenadeParameterStashTime = 0x1338; // GameTime_t
    constexpr std::ptrdiff_t m_bGrenadeParametersStashed = 0x133C; // bool
    constexpr std::ptrdiff_t m_angStashedShootAngles = 0x1340; // QAngle
    constexpr std::ptrdiff_t m_vecStashedGrenadeThrowPosition = 0x134C; // Vector
    constexpr std::ptrdiff_t m_vecStashedVelocity = 0x1358; // Vector
    constexpr std::ptrdiff_t m_angShootAngleHistory = 0x1364; // QAngle[2]
    constexpr std::ptrdiff_t m_vecThrowPositionHistory = 0x137C; // Vector[2]
    constexpr std::ptrdiff_t m_vecVelocityHistory = 0x1394; // Vector[2]
    constexpr std::ptrdiff_t m_thirdPersonHeading = 0x13B0; // QAngle
    constexpr std::ptrdiff_t m_flSlopeDropOffset = 0x13C8; // float
    constexpr std::ptrdiff_t m_flSlopeDropHeight = 0x13D8; // float
    constexpr std::ptrdiff_t m_vHeadConstraintOffset = 0x13E8; // Vector
    constexpr std::ptrdiff_t m_bIsScoped = 0x1400; // bool
    constexpr std::ptrdiff_t m_bIsWalking = 0x1401; // bool
    constexpr std::ptrdiff_t m_bResumeZoom = 0x1402; // bool
    constexpr std::ptrdiff_t m_iPlayerState = 0x1404; // CSPlayerState
    constexpr std::ptrdiff_t m_bIsDefusing = 0x1408; // bool
    constexpr std::ptrdiff_t m_bIsGrabbingHostage = 0x1409; // bool
    constexpr std::ptrdiff_t m_iBlockingUseActionInProgress = 0x140C; // CSPlayerBlockingUseAction_t
    constexpr std::ptrdiff_t m_bIsRescuing = 0x1410; // bool
    constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTime = 0x1414; // GameTime_t
    constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTimeLast = 0x1418; // GameTime_t
    constexpr std::ptrdiff_t m_bGunGameImmunity = 0x141C; // bool
    constexpr std::ptrdiff_t m_GunGameImmunityColor = 0x141D; // Color
    constexpr std::ptrdiff_t m_bHasMovedSinceSpawn = 0x1421; // bool
    constexpr std::ptrdiff_t m_fMolotovUseTime = 0x1424; // float
    constexpr std::ptrdiff_t m_fMolotovDamageTime = 0x1428; // float
    constexpr std::ptrdiff_t m_nWhichBombZone = 0x142C; // int32_t
    constexpr std::ptrdiff_t m_bInNoDefuseArea = 0x1430; // bool
    constexpr std::ptrdiff_t m_iThrowGrenadeCounter = 0x1434; // int32_t
    constexpr std::ptrdiff_t m_bWaitForNoAttack = 0x1438; // bool
    constexpr std::ptrdiff_t m_flGuardianTooFarDistFrac = 0x143C; // float
    constexpr std::ptrdiff_t m_flDetectedByEnemySensorTime = 0x1440; // GameTime_t
    constexpr std::ptrdiff_t m_flNextGuardianTooFarWarning = 0x1444; // float
    constexpr std::ptrdiff_t m_bSuppressGuardianTooFarWarningAudio = 0x1448; // bool
    constexpr std::ptrdiff_t m_bKilledByTaser = 0x1449; // bool
    constexpr std::ptrdiff_t m_iMoveState = 0x144C; // int32_t
    constexpr std::ptrdiff_t m_bCanMoveDuringFreezePeriod = 0x1450; // bool
    constexpr std::ptrdiff_t m_flLowerBodyYawTarget = 0x1454; // float
    constexpr std::ptrdiff_t m_bStrafing = 0x1458; // bool
    constexpr std::ptrdiff_t m_flLastSpawnTimeIndex = 0x145C; // GameTime_t
    constexpr std::ptrdiff_t m_flEmitSoundTime = 0x1460; // GameTime_t
    constexpr std::ptrdiff_t m_iAddonBits = 0x1464; // int32_t
    constexpr std::ptrdiff_t m_iPrimaryAddon = 0x1468; // int32_t
    constexpr std::ptrdiff_t m_iSecondaryAddon = 0x146C; // int32_t
    constexpr std::ptrdiff_t m_iProgressBarDuration = 0x1470; // int32_t
    constexpr std::ptrdiff_t m_flProgressBarStartTime = 0x1474; // float
    constexpr std::ptrdiff_t m_iDirection = 0x1478; // int32_t
    constexpr std::ptrdiff_t m_iShotsFired = 0x147C; // int32_t
    constexpr std::ptrdiff_t m_bNightVisionOn = 0x1480; // bool
    constexpr std::ptrdiff_t m_bHasNightVision = 0x1481; // bool
    constexpr std::ptrdiff_t m_flVelocityModifier = 0x1484; // float
    constexpr std::ptrdiff_t m_flHitHeading = 0x1488; // float
    constexpr std::ptrdiff_t m_nHitBodyPart = 0x148C; // int32_t
    constexpr std::ptrdiff_t m_iStartAccount = 0x1490; // int32_t
    constexpr std::ptrdiff_t m_vecIntroStartEyePosition = 0x1494; // Vector
    constexpr std::ptrdiff_t m_vecIntroStartPlayerForward = 0x14A0; // Vector
    constexpr std::ptrdiff_t m_flClientDeathTime = 0x14AC; // GameTime_t
    constexpr std::ptrdiff_t m_flNightVisionAlpha = 0x14B0; // float
    constexpr std::ptrdiff_t m_bScreenTearFrameCaptured = 0x14B4; // bool
    constexpr std::ptrdiff_t m_flFlashBangTime = 0x14B8; // float
    constexpr std::ptrdiff_t m_flFlashScreenshotAlpha = 0x14BC; // float
    constexpr std::ptrdiff_t m_flFlashOverlayAlpha = 0x14C0; // float
    constexpr std::ptrdiff_t m_bFlashBuildUp = 0x14C4; // bool
    constexpr std::ptrdiff_t m_bFlashDspHasBeenCleared = 0x14C5; // bool
    constexpr std::ptrdiff_t m_bFlashScreenshotHasBeenGrabbed = 0x14C6; // bool
    constexpr std::ptrdiff_t m_flFlashMaxAlpha = 0x14C8; // float
    constexpr std::ptrdiff_t m_flFlashDuration = 0x14CC; // float
    constexpr std::ptrdiff_t m_lastStandingPos = 0x14D0; // Vector
    constexpr std::ptrdiff_t m_vecLastMuzzleFlashPos = 0x14DC; // Vector
    constexpr std::ptrdiff_t m_angLastMuzzleFlashAngle = 0x14E8; // QAngle
    constexpr std::ptrdiff_t m_hMuzzleFlashShape = 0x14F4; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_iHealthBarRenderMaskIndex = 0x14F8; // int32_t
    constexpr std::ptrdiff_t m_flHealthFadeValue = 0x14FC; // float
    constexpr std::ptrdiff_t m_flHealthFadeAlpha = 0x1500; // float
    constexpr std::ptrdiff_t m_nMyCollisionGroup = 0x1504; // int32_t
    constexpr std::ptrdiff_t m_ignoreLadderJumpTime = 0x1508; // float
    constexpr std::ptrdiff_t m_ladderSurpressionTimer = 0x1510; // CountdownTimer
    constexpr std::ptrdiff_t m_lastLadderNormal = 0x1528; // Vector
    constexpr std::ptrdiff_t m_lastLadderPos = 0x1534; // Vector
    constexpr std::ptrdiff_t m_flDeathCCWeight = 0x1548; // float
    constexpr std::ptrdiff_t m_bOldIsScoped = 0x154C; // bool
    constexpr std::ptrdiff_t m_flPrevRoundEndTime = 0x1550; // float
    constexpr std::ptrdiff_t m_flPrevMatchEndTime = 0x1554; // float
    constexpr std::ptrdiff_t m_unCurrentEquipmentValue = 0x1558; // uint16_t
    constexpr std::ptrdiff_t m_unRoundStartEquipmentValue = 0x155A; // uint16_t
    constexpr std::ptrdiff_t m_unFreezetimeEndEquipmentValue = 0x155C; // uint16_t
    constexpr std::ptrdiff_t m_vecThirdPersonViewPositionOverride = 0x1560; // Vector
    constexpr std::ptrdiff_t m_nHeavyAssaultSuitCooldownRemaining = 0x156C; // int32_t
    constexpr std::ptrdiff_t m_ArmorValue = 0x1570; // int32_t
    constexpr std::ptrdiff_t m_angEyeAngles = 0x1578; // QAngle
    constexpr std::ptrdiff_t m_fNextThinkPushAway = 0x1590; // float
    constexpr std::ptrdiff_t m_bShouldAutobuyDMWeapons = 0x1594; // bool
    constexpr std::ptrdiff_t m_bShouldAutobuyNow = 0x1595; // bool
    constexpr std::ptrdiff_t m_bHud_MiniScoreHidden = 0x1596; // bool
    constexpr std::ptrdiff_t m_bHud_RadarHidden = 0x1597; // bool
    constexpr std::ptrdiff_t m_nLastKillerIndex = 0x1598; // CEntityIndex
    constexpr std::ptrdiff_t m_nLastConcurrentKilled = 0x159C; // int32_t
    constexpr std::ptrdiff_t m_nDeathCamMusic = 0x15A0; // int32_t
    constexpr std::ptrdiff_t m_iIDEntIndex = 0x15A4; // CEntityIndex
    constexpr std::ptrdiff_t m_delayTargetIDTimer = 0x15A8; // CountdownTimer
    constexpr std::ptrdiff_t m_iTargetedWeaponEntIndex = 0x15C0; // CEntityIndex
    constexpr std::ptrdiff_t m_iOldIDEntIndex = 0x15C4; // CEntityIndex
    constexpr std::ptrdiff_t m_holdTargetIDTimer = 0x15C8; // CountdownTimer
    constexpr std::ptrdiff_t m_flCurrentMusicStartTime = 0x15E4; // float
    constexpr std::ptrdiff_t m_flMusicRoundStartTime = 0x15E8; // float
    constexpr std::ptrdiff_t m_bDeferStartMusicOnWarmup = 0x15EC; // bool
    constexpr std::ptrdiff_t m_cycleLatch = 0x15F0; // int32_t
    constexpr std::ptrdiff_t m_serverIntendedCycle = 0x15F4; // float
    constexpr std::ptrdiff_t m_vecPlayerPatchEconIndices = 0x15F8; // uint32_t[5]
    constexpr std::ptrdiff_t m_bHideTargetID = 0x1614; // bool
    constexpr std::ptrdiff_t m_flLastSmokeOverlayAlpha = 0x1618; // float
    constexpr std::ptrdiff_t m_vLastSmokeOverlayColor = 0x161C; // Vector
    constexpr std::ptrdiff_t m_nPlayerSmokedFx = 0x1628; // ParticleIndex_t
    constexpr std::ptrdiff_t m_nPlayerInfernoBodyFx = 0x162C; // ParticleIndex_t
    constexpr std::ptrdiff_t m_nPlayerInfernoFootFx = 0x1630; // ParticleIndex_t
    constexpr std::ptrdiff_t m_flNextMagDropTime = 0x1634; // float
    constexpr std::ptrdiff_t m_nLastMagDropAttachmentIndex = 0x1638; // int32_t
    constexpr std::ptrdiff_t m_vecBulletHitModels = 0x1640; // CUtlVector<C_BulletHitModel*>
    constexpr std::ptrdiff_t m_vecPickupModelSlerpers = 0x1658; // CUtlVector<C_PickUpModelSlerper*>
    constexpr std::ptrdiff_t m_vecLastAliveLocalVelocity = 0x1670; // Vector
    constexpr std::ptrdiff_t m_entitySpottedState = 0x1698; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_nSurvivalTeamNumber = 0x16B0; // int32_t
    constexpr std::ptrdiff_t m_bGuardianShouldSprayCustomXMark = 0x16B4; // bool
    constexpr std::ptrdiff_t m_bHasDeathInfo = 0x16B5; // bool
    constexpr std::ptrdiff_t m_flDeathInfoTime = 0x16B8; // float
    constexpr std::ptrdiff_t m_vecDeathInfoOrigin = 0x16BC; // Vector
    constexpr std::ptrdiff_t m_bKilledByHeadshot = 0x16C8; // bool
    constexpr std::ptrdiff_t m_hOriginalController = 0x16CC; // CHandle<CCSPlayerController>
}

namespace C_CSPlayerResource { // C_BaseEntity
    constexpr std::ptrdiff_t m_bHostageAlive = 0x550; // bool[12]
    constexpr std::ptrdiff_t m_isHostageFollowingSomeone = 0x55C; // bool[12]
    constexpr std::ptrdiff_t m_iHostageEntityIDs = 0x568; // CEntityIndex[12]
    constexpr std::ptrdiff_t m_bombsiteCenterA = 0x598; // Vector
    constexpr std::ptrdiff_t m_bombsiteCenterB = 0x5A4; // Vector
    constexpr std::ptrdiff_t m_hostageRescueX = 0x5B0; // int32_t[4]
    constexpr std::ptrdiff_t m_hostageRescueY = 0x5C0; // int32_t[4]
    constexpr std::ptrdiff_t m_hostageRescueZ = 0x5D0; // int32_t[4]
    constexpr std::ptrdiff_t m_bEndMatchNextMapAllVoted = 0x5E0; // bool
    constexpr std::ptrdiff_t m_foundGoalPositions = 0x5E1; // bool
}

namespace C_CSTeam { // C_Team
    constexpr std::ptrdiff_t m_szTeamMatchStat = 0x608; // char[512]
    constexpr std::ptrdiff_t m_numMapVictories = 0x808; // int32_t
    constexpr std::ptrdiff_t m_bSurrendered = 0x80C; // bool
    constexpr std::ptrdiff_t m_scoreFirstHalf = 0x810; // int32_t
    constexpr std::ptrdiff_t m_scoreSecondHalf = 0x814; // int32_t
    constexpr std::ptrdiff_t m_scoreOvertime = 0x818; // int32_t
    constexpr std::ptrdiff_t m_szClanTeamname = 0x81C; // char[129]
    constexpr std::ptrdiff_t m_iClanID = 0x8A0; // uint32_t
    constexpr std::ptrdiff_t m_szTeamFlagImage = 0x8A4; // char[8]
    constexpr std::ptrdiff_t m_szTeamLogoImage = 0x8AC; // char[8]
}

namespace C_CSWeaponBase { // C_BasePlayerWeapon
    constexpr std::ptrdiff_t m_flFireSequenceStartTime = 0x162C; // float
    constexpr std::ptrdiff_t m_nFireSequenceStartTimeChange = 0x1630; // int32_t
    constexpr std::ptrdiff_t m_nFireSequenceStartTimeAck = 0x1634; // int32_t
    constexpr std::ptrdiff_t m_ePlayerFireEvent = 0x1638; // PlayerAnimEvent_t
    constexpr std::ptrdiff_t m_ePlayerFireEventAttackType = 0x163C; // WeaponAttackType_t
    constexpr std::ptrdiff_t m_seqIdle = 0x1640; // HSequence
    constexpr std::ptrdiff_t m_seqFirePrimary = 0x1644; // HSequence
    constexpr std::ptrdiff_t m_seqFireSecondary = 0x1648; // HSequence
    constexpr std::ptrdiff_t m_thirdPersonFireSequences = 0x1650; // CUtlVector<HSequence>
    constexpr std::ptrdiff_t m_hCurrentThirdPersonSequence = 0x1668; // HSequence
    constexpr std::ptrdiff_t m_nSilencerBoneIndex = 0x166C; // int32_t
    constexpr std::ptrdiff_t m_thirdPersonSequences = 0x1670; // HSequence[7]
    constexpr std::ptrdiff_t m_ClientPreviousWeaponState = 0x16A8; // CSWeaponState_t
    constexpr std::ptrdiff_t m_iState = 0x16AC; // CSWeaponState_t
    constexpr std::ptrdiff_t m_flCrosshairDistance = 0x16B0; // float
    constexpr std::ptrdiff_t m_iAmmoLastCheck = 0x16B4; // int32_t
    constexpr std::ptrdiff_t m_iAlpha = 0x16B8; // int32_t
    constexpr std::ptrdiff_t m_iScopeTextureID = 0x16BC; // int32_t
    constexpr std::ptrdiff_t m_iCrosshairTextureID = 0x16C0; // int32_t
    constexpr std::ptrdiff_t m_flGunAccuracyPosition = 0x16C4; // float
    constexpr std::ptrdiff_t m_nLastEmptySoundCmdNum = 0x16C8; // int32_t
    constexpr std::ptrdiff_t m_nViewModelIndex = 0x16CC; // uint32_t
    constexpr std::ptrdiff_t m_bReloadsWithClips = 0x16D0; // bool
    constexpr std::ptrdiff_t m_flTimeWeaponIdle = 0x16D4; // GameTime_t
    constexpr std::ptrdiff_t m_bFireOnEmpty = 0x16D8; // bool
    constexpr std::ptrdiff_t m_OnPlayerPickup = 0x16E0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_weaponMode = 0x1708; // CSWeaponMode
    constexpr std::ptrdiff_t m_flTurningInaccuracyDelta = 0x170C; // float
    constexpr std::ptrdiff_t m_vecTurningInaccuracyEyeDirLast = 0x1710; // Vector
    constexpr std::ptrdiff_t m_flTurningInaccuracy = 0x171C; // float
    constexpr std::ptrdiff_t m_fAccuracyPenalty = 0x1720; // float
    constexpr std::ptrdiff_t m_flLastAccuracyUpdateTime = 0x1724; // GameTime_t
    constexpr std::ptrdiff_t m_fAccuracySmoothedForZoom = 0x1728; // float
    constexpr std::ptrdiff_t m_fScopeZoomEndTime = 0x172C; // GameTime_t
    constexpr std::ptrdiff_t m_iRecoilIndex = 0x1730; // int32_t
    constexpr std::ptrdiff_t m_flRecoilIndex = 0x1734; // float
    constexpr std::ptrdiff_t m_bBurstMode = 0x1738; // bool
    constexpr std::ptrdiff_t m_nPostponeFireReadyTicks = 0x173C; // GameTick_t
    constexpr std::ptrdiff_t m_flPostponeFireReadyFrac = 0x1740; // float
    constexpr std::ptrdiff_t m_bInReload = 0x1744; // bool
    constexpr std::ptrdiff_t m_bReloadVisuallyComplete = 0x1745; // bool
    constexpr std::ptrdiff_t m_flDroppedAtTime = 0x1748; // GameTime_t
    constexpr std::ptrdiff_t m_bIsHauledBack = 0x174C; // bool
    constexpr std::ptrdiff_t m_bSilencerOn = 0x174D; // bool
    constexpr std::ptrdiff_t m_flTimeSilencerSwitchComplete = 0x1750; // GameTime_t
    constexpr std::ptrdiff_t m_iOriginalTeamNumber = 0x1754; // int32_t
    constexpr std::ptrdiff_t m_flNextAttackRenderTimeOffset = 0x1758; // float
    constexpr std::ptrdiff_t m_bVisualsDataSet = 0x17E0; // bool
    constexpr std::ptrdiff_t m_bOldFirstPersonSpectatedState = 0x17E1; // bool
    constexpr std::ptrdiff_t m_hOurPing = 0x17E4; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_nOurPingIndex = 0x17E8; // CEntityIndex
    constexpr std::ptrdiff_t m_vecOurPingPos = 0x17EC; // Vector
    constexpr std::ptrdiff_t m_bGlowForPing = 0x17F8; // bool
    constexpr std::ptrdiff_t m_bUIWeapon = 0x17F9; // bool
    constexpr std::ptrdiff_t m_hPrevOwner = 0x1808; // CHandle<C_CSPlayerPawn>
    constexpr std::ptrdiff_t m_nDropTick = 0x180C; // GameTick_t
    constexpr std::ptrdiff_t m_donated = 0x182C; // bool
    constexpr std::ptrdiff_t m_fLastShotTime = 0x1830; // GameTime_t
    constexpr std::ptrdiff_t m_bWasOwnedByCT = 0x1834; // bool
    constexpr std::ptrdiff_t m_bWasOwnedByTerrorist = 0x1835; // bool
    constexpr std::ptrdiff_t m_gunHeat = 0x1838; // float
    constexpr std::ptrdiff_t m_smokeAttachments = 0x183C; // uint32_t
    constexpr std::ptrdiff_t m_lastSmokeTime = 0x1840; // GameTime_t
    constexpr std::ptrdiff_t m_flNextClientFireBulletTime = 0x1844; // float
    constexpr std::ptrdiff_t m_flNextClientFireBulletTime_Repredict = 0x1848; // float
    constexpr std::ptrdiff_t m_IronSightController = 0x1920; // C_IronSightController
    constexpr std::ptrdiff_t m_iIronSightMode = 0x19D0; // int32_t
    constexpr std::ptrdiff_t m_flLastLOSTraceFailureTime = 0x19E0; // GameTime_t
    constexpr std::ptrdiff_t m_iNumEmptyAttacks = 0x19E4; // int32_t
    constexpr std::ptrdiff_t m_flLastMagDropRequestTime = 0x1A60; // GameTime_t
    constexpr std::ptrdiff_t m_flWatTickOffset = 0x1A64; // float
}

namespace C_CSWeaponBaseGun { // C_CSWeaponBase
    constexpr std::ptrdiff_t m_zoomLevel = 0x1A70; // int32_t
    constexpr std::ptrdiff_t m_iBurstShotsRemaining = 0x1A74; // int32_t
    constexpr std::ptrdiff_t m_iSilencerBodygroup = 0x1A78; // int32_t
    constexpr std::ptrdiff_t m_silencedModelIndex = 0x1A88; // int32_t
    constexpr std::ptrdiff_t m_inPrecache = 0x1A8C; // bool
    constexpr std::ptrdiff_t m_bNeedsBoltAction = 0x1A8D; // bool
}

namespace C_Chicken { // C_DynamicProp
    constexpr std::ptrdiff_t m_hHolidayHatAddon = 0x1148; // CHandle<CBaseAnimGraph>
    constexpr std::ptrdiff_t m_jumpedThisFrame = 0x114C; // bool
    constexpr std::ptrdiff_t m_leader = 0x1150; // CHandle<C_CSPlayerPawn>
    constexpr std::ptrdiff_t m_AttributeManager = 0x1158; // C_AttributeContainer
    constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0x1600; // uint32_t
    constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x1604; // uint32_t
    constexpr std::ptrdiff_t m_bAttributesInitialized = 0x1608; // bool
    constexpr std::ptrdiff_t m_hWaterWakeParticles = 0x160C; // ParticleIndex_t
}

namespace C_ClientRagdoll { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_bFadeOut = 0xED8; // bool
    constexpr std::ptrdiff_t m_bImportant = 0xED9; // bool
    constexpr std::ptrdiff_t m_flEffectTime = 0xEDC; // GameTime_t
    constexpr std::ptrdiff_t m_gibDespawnTime = 0xEE0; // GameTime_t
    constexpr std::ptrdiff_t m_iCurrentFriction = 0xEE4; // int32_t
    constexpr std::ptrdiff_t m_iMinFriction = 0xEE8; // int32_t
    constexpr std::ptrdiff_t m_iMaxFriction = 0xEEC; // int32_t
    constexpr std::ptrdiff_t m_iFrictionAnimState = 0xEF0; // int32_t
    constexpr std::ptrdiff_t m_bReleaseRagdoll = 0xEF4; // bool
    constexpr std::ptrdiff_t m_iEyeAttachment = 0xEF5; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_bFadingOut = 0xEF6; // bool
    constexpr std::ptrdiff_t m_flScaleEnd = 0xEF8; // float[10]
    constexpr std::ptrdiff_t m_flScaleTimeStart = 0xF20; // GameTime_t[10]
    constexpr std::ptrdiff_t m_flScaleTimeEnd = 0xF48; // GameTime_t[10]
}

namespace C_ColorCorrection { // C_BaseEntity
    constexpr std::ptrdiff_t m_vecOrigin = 0x550; // Vector
    constexpr std::ptrdiff_t m_MinFalloff = 0x55C; // float
    constexpr std::ptrdiff_t m_MaxFalloff = 0x560; // float
    constexpr std::ptrdiff_t m_flFadeInDuration = 0x564; // float
    constexpr std::ptrdiff_t m_flFadeOutDuration = 0x568; // float
    constexpr std::ptrdiff_t m_flMaxWeight = 0x56C; // float
    constexpr std::ptrdiff_t m_flCurWeight = 0x570; // float
    constexpr std::ptrdiff_t m_netlookupFilename = 0x574; // char[512]
    constexpr std::ptrdiff_t m_bEnabled = 0x774; // bool
    constexpr std::ptrdiff_t m_bMaster = 0x775; // bool
    constexpr std::ptrdiff_t m_bClientSide = 0x776; // bool
    constexpr std::ptrdiff_t m_bExclusive = 0x777; // bool
    constexpr std::ptrdiff_t m_bEnabledOnClient = 0x778; // bool[1]
    constexpr std::ptrdiff_t m_flCurWeightOnClient = 0x77C; // float[1]
    constexpr std::ptrdiff_t m_bFadingIn = 0x780; // bool[1]
    constexpr std::ptrdiff_t m_flFadeStartWeight = 0x784; // float[1]
    constexpr std::ptrdiff_t m_flFadeStartTime = 0x788; // float[1]
    constexpr std::ptrdiff_t m_flFadeDuration = 0x78C; // float[1]
}

namespace C_ColorCorrectionVolume { // C_BaseTrigger
    constexpr std::ptrdiff_t m_LastEnterWeight = 0xCD8; // float
    constexpr std::ptrdiff_t m_LastEnterTime = 0xCDC; // float
    constexpr std::ptrdiff_t m_LastExitWeight = 0xCE0; // float
    constexpr std::ptrdiff_t m_LastExitTime = 0xCE4; // float
    constexpr std::ptrdiff_t m_bEnabled = 0xCE8; // bool
    constexpr std::ptrdiff_t m_MaxWeight = 0xCEC; // float
    constexpr std::ptrdiff_t m_FadeDuration = 0xCF0; // float
    constexpr std::ptrdiff_t m_Weight = 0xCF4; // float
    constexpr std::ptrdiff_t m_lookupFilename = 0xCF8; // char[512]
}

namespace C_CommandContext {
    constexpr std::ptrdiff_t needsprocessing = 0x0; // bool
    constexpr std::ptrdiff_t command_number = 0x90; // int32_t
}

namespace C_CsmFovOverride { // C_BaseEntity
    constexpr std::ptrdiff_t m_cameraName = 0x550; // CUtlString
    constexpr std::ptrdiff_t m_flCsmFovOverrideValue = 0x558; // float
}

namespace C_DEagle { // C_CSWeaponBaseGun
}

namespace C_DecoyGrenade { // C_BaseCSGrenade
}

namespace C_DecoyProjectile { // C_BaseCSGrenadeProjectile
    constexpr std::ptrdiff_t m_nDecoyShotTick = 0x1158; // int32_t
    constexpr std::ptrdiff_t m_nClientLastKnownDecoyShotTick = 0x115C; // int32_t
    constexpr std::ptrdiff_t m_flTimeParticleEffectSpawn = 0x1180; // GameTime_t
}

namespace C_DynamicLight { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_Flags = 0xCD0; // uint8_t
    constexpr std::ptrdiff_t m_LightStyle = 0xCD1; // uint8_t
    constexpr std::ptrdiff_t m_Radius = 0xCD4; // float
    constexpr std::ptrdiff_t m_Exponent = 0xCD8; // int32_t
    constexpr std::ptrdiff_t m_InnerAngle = 0xCDC; // float
    constexpr std::ptrdiff_t m_OuterAngle = 0xCE0; // float
    constexpr std::ptrdiff_t m_SpotRadius = 0xCE4; // float
}

namespace C_DynamicProp { // C_BreakableProp
    constexpr std::ptrdiff_t m_bUseHitboxesForRenderBox = 0x1028; // bool
    constexpr std::ptrdiff_t m_bUseAnimGraph = 0x1029; // bool
    constexpr std::ptrdiff_t m_pOutputAnimBegun = 0x1030; // CEntityIOOutput
    constexpr std::ptrdiff_t m_pOutputAnimOver = 0x1058; // CEntityIOOutput
    constexpr std::ptrdiff_t m_pOutputAnimLoopCycleOver = 0x1080; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAnimReachedStart = 0x10A8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAnimReachedEnd = 0x10D0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iszIdleAnim = 0x10F8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nIdleAnimLoopMode = 0x1100; // AnimLoopMode_t
    constexpr std::ptrdiff_t m_bRandomizeCycle = 0x1104; // bool
    constexpr std::ptrdiff_t m_bStartDisabled = 0x1105; // bool
    constexpr std::ptrdiff_t m_bFiredStartEndOutput = 0x1106; // bool
    constexpr std::ptrdiff_t m_bForceNpcExclude = 0x1107; // bool
    constexpr std::ptrdiff_t m_bCreateNonSolid = 0x1108; // bool
    constexpr std::ptrdiff_t m_bIsOverrideProp = 0x1109; // bool
    constexpr std::ptrdiff_t m_iInitialGlowState = 0x110C; // int32_t
    constexpr std::ptrdiff_t m_nGlowRange = 0x1110; // int32_t
    constexpr std::ptrdiff_t m_nGlowRangeMin = 0x1114; // int32_t
    constexpr std::ptrdiff_t m_glowColor = 0x1118; // Color
    constexpr std::ptrdiff_t m_nGlowTeam = 0x111C; // int32_t
    constexpr std::ptrdiff_t m_iCachedFrameCount = 0x1120; // int32_t
    constexpr std::ptrdiff_t m_vecCachedRenderMins = 0x1124; // Vector
    constexpr std::ptrdiff_t m_vecCachedRenderMaxs = 0x1130; // Vector
}

namespace C_DynamicPropAlias_cable_dynamic { // C_DynamicProp
}

namespace C_DynamicPropAlias_dynamic_prop { // C_DynamicProp
}

namespace C_DynamicPropAlias_prop_dynamic_override { // C_DynamicProp
}

namespace C_EconEntity { // C_BaseFlex
    constexpr std::ptrdiff_t m_flFlexDelayTime = 0x1080; // float
    constexpr std::ptrdiff_t m_flFlexDelayedWeight = 0x1088; // float*
    constexpr std::ptrdiff_t m_bAttributesInitialized = 0x1090; // bool
    constexpr std::ptrdiff_t m_AttributeManager = 0x1098; // C_AttributeContainer
    constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0x1540; // uint32_t
    constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x1544; // uint32_t
    constexpr std::ptrdiff_t m_nFallbackPaintKit = 0x1548; // int32_t
    constexpr std::ptrdiff_t m_nFallbackSeed = 0x154C; // int32_t
    constexpr std::ptrdiff_t m_flFallbackWear = 0x1550; // float
    constexpr std::ptrdiff_t m_nFallbackStatTrak = 0x1554; // int32_t
    constexpr std::ptrdiff_t m_bClientside = 0x1558; // bool
    constexpr std::ptrdiff_t m_bParticleSystemsCreated = 0x1559; // bool
    constexpr std::ptrdiff_t m_vecAttachedParticles = 0x1560; // CUtlVector<int32_t>
    constexpr std::ptrdiff_t m_hViewmodelAttachment = 0x1578; // CHandle<CBaseAnimGraph>
    constexpr std::ptrdiff_t m_iOldTeam = 0x157C; // int32_t
    constexpr std::ptrdiff_t m_bAttachmentDirty = 0x1580; // bool
    constexpr std::ptrdiff_t m_nUnloadedModelIndex = 0x1584; // int32_t
    constexpr std::ptrdiff_t m_iNumOwnerValidationRetries = 0x1588; // int32_t
    constexpr std::ptrdiff_t m_hOldProvidee = 0x1598; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_vecAttachedModels = 0x15A0; // CUtlVector<C_EconEntity::AttachedModelData_t>
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
    constexpr std::ptrdiff_t m_bDisallowSOC = 0x1E9; // bool
    constexpr std::ptrdiff_t m_bIsStoreItem = 0x1EA; // bool
    constexpr std::ptrdiff_t m_bIsTradeItem = 0x1EB; // bool
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
    constexpr std::ptrdiff_t m_nForceSkin = 0x15B8; // int32_t
    constexpr std::ptrdiff_t m_bAlwaysAllow = 0x15BC; // bool
}

namespace C_EntityDissolve { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_flStartTime = 0xCD8; // GameTime_t
    constexpr std::ptrdiff_t m_flFadeInStart = 0xCDC; // float
    constexpr std::ptrdiff_t m_flFadeInLength = 0xCE0; // float
    constexpr std::ptrdiff_t m_flFadeOutModelStart = 0xCE4; // float
    constexpr std::ptrdiff_t m_flFadeOutModelLength = 0xCE8; // float
    constexpr std::ptrdiff_t m_flFadeOutStart = 0xCEC; // float
    constexpr std::ptrdiff_t m_flFadeOutLength = 0xCF0; // float
    constexpr std::ptrdiff_t m_flNextSparkTime = 0xCF4; // GameTime_t
    constexpr std::ptrdiff_t m_nDissolveType = 0xCF8; // EntityDisolveType_t
    constexpr std::ptrdiff_t m_vDissolverOrigin = 0xCFC; // Vector
    constexpr std::ptrdiff_t m_nMagnitude = 0xD08; // uint32_t
    constexpr std::ptrdiff_t m_bCoreExplode = 0xD0C; // bool
    constexpr std::ptrdiff_t m_bLinkedToServerEnt = 0xD0D; // bool
}

namespace C_EntityFlame { // C_BaseEntity
    constexpr std::ptrdiff_t m_hEntAttached = 0x550; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_hOldAttached = 0x578; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_bCheapEffect = 0x57C; // bool
}

namespace C_EnvCombinedLightProbeVolume { // C_BaseEntity
    constexpr std::ptrdiff_t m_Color = 0x15A8; // Color
    constexpr std::ptrdiff_t m_flBrightness = 0x15AC; // float
    constexpr std::ptrdiff_t m_hCubemapTexture = 0x15B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_bCustomCubemapTexture = 0x15B8; // bool
    constexpr std::ptrdiff_t m_hLightProbeTexture = 0x15C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_hLightProbeDirectLightIndicesTexture = 0x15C8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_hLightProbeDirectLightScalarsTexture = 0x15D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_hLightProbeDirectLightShadowsTexture = 0x15D8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_vBoxMins = 0x15E0; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x15EC; // Vector
    constexpr std::ptrdiff_t m_bMoveable = 0x15F8; // bool
    constexpr std::ptrdiff_t m_nHandshake = 0x15FC; // int32_t
    constexpr std::ptrdiff_t m_nEnvCubeMapArrayIndex = 0x1600; // int32_t
    constexpr std::ptrdiff_t m_nPriority = 0x1604; // int32_t
    constexpr std::ptrdiff_t m_bStartDisabled = 0x1608; // bool
    constexpr std::ptrdiff_t m_flEdgeFadeDist = 0x160C; // float
    constexpr std::ptrdiff_t m_vEdgeFadeDists = 0x1610; // Vector
    constexpr std::ptrdiff_t m_nLightProbeSizeX = 0x161C; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeSizeY = 0x1620; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeSizeZ = 0x1624; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeAtlasX = 0x1628; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeAtlasY = 0x162C; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeAtlasZ = 0x1630; // int32_t
    constexpr std::ptrdiff_t m_bEnabled = 0x1649; // bool
}

namespace C_EnvCubemap { // C_BaseEntity
    constexpr std::ptrdiff_t m_hCubemapTexture = 0x5D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_bCustomCubemapTexture = 0x5D8; // bool
    constexpr std::ptrdiff_t m_flInfluenceRadius = 0x5DC; // float
    constexpr std::ptrdiff_t m_vBoxProjectMins = 0x5E0; // Vector
    constexpr std::ptrdiff_t m_vBoxProjectMaxs = 0x5EC; // Vector
    constexpr std::ptrdiff_t m_bMoveable = 0x5F8; // bool
    constexpr std::ptrdiff_t m_nHandshake = 0x5FC; // int32_t
    constexpr std::ptrdiff_t m_nEnvCubeMapArrayIndex = 0x600; // int32_t
    constexpr std::ptrdiff_t m_nPriority = 0x604; // int32_t
    constexpr std::ptrdiff_t m_flEdgeFadeDist = 0x608; // float
    constexpr std::ptrdiff_t m_vEdgeFadeDists = 0x60C; // Vector
    constexpr std::ptrdiff_t m_flDiffuseScale = 0x618; // float
    constexpr std::ptrdiff_t m_bStartDisabled = 0x61C; // bool
    constexpr std::ptrdiff_t m_bDefaultEnvMap = 0x61D; // bool
    constexpr std::ptrdiff_t m_bDefaultSpecEnvMap = 0x61E; // bool
    constexpr std::ptrdiff_t m_bIndoorCubeMap = 0x61F; // bool
    constexpr std::ptrdiff_t m_bCopyDiffuseFromDefaultCubemap = 0x620; // bool
    constexpr std::ptrdiff_t m_bEnabled = 0x630; // bool
}

namespace C_EnvCubemapBox { // C_EnvCubemap
}

namespace C_EnvCubemapFog { // C_BaseEntity
    constexpr std::ptrdiff_t m_flEndDistance = 0x550; // float
    constexpr std::ptrdiff_t m_flStartDistance = 0x554; // float
    constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x558; // float
    constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x55C; // bool
    constexpr std::ptrdiff_t m_flFogHeightWidth = 0x560; // float
    constexpr std::ptrdiff_t m_flFogHeightEnd = 0x564; // float
    constexpr std::ptrdiff_t m_flFogHeightStart = 0x568; // float
    constexpr std::ptrdiff_t m_flFogHeightExponent = 0x56C; // float
    constexpr std::ptrdiff_t m_flLODBias = 0x570; // float
    constexpr std::ptrdiff_t m_bActive = 0x574; // bool
    constexpr std::ptrdiff_t m_bStartDisabled = 0x575; // bool
    constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x578; // float
    constexpr std::ptrdiff_t m_nCubemapSourceType = 0x57C; // int32_t
    constexpr std::ptrdiff_t m_hSkyMaterial = 0x580; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_iszSkyEntity = 0x588; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFogCubemapTexture = 0x590; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_bHasHeightFogEnd = 0x598; // bool
    constexpr std::ptrdiff_t m_bFirstTime = 0x599; // bool
}

namespace C_EnvDecal { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_hDecalMaterial = 0xCD0; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_flWidth = 0xCD8; // float
    constexpr std::ptrdiff_t m_flHeight = 0xCDC; // float
    constexpr std::ptrdiff_t m_flDepth = 0xCE0; // float
    constexpr std::ptrdiff_t m_nRenderOrder = 0xCE4; // uint32_t
    constexpr std::ptrdiff_t m_bProjectOnWorld = 0xCE8; // bool
    constexpr std::ptrdiff_t m_bProjectOnCharacters = 0xCE9; // bool
    constexpr std::ptrdiff_t m_bProjectOnWater = 0xCEA; // bool
    constexpr std::ptrdiff_t m_flDepthSortBias = 0xCEC; // float
}

namespace C_EnvDetailController { // C_BaseEntity
    constexpr std::ptrdiff_t m_flFadeStartDist = 0x550; // float
    constexpr std::ptrdiff_t m_flFadeEndDist = 0x554; // float
}

namespace C_EnvLightProbeVolume { // C_BaseEntity
    constexpr std::ptrdiff_t m_hLightProbeTexture = 0x1528; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_hLightProbeDirectLightIndicesTexture = 0x1530; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_hLightProbeDirectLightScalarsTexture = 0x1538; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_hLightProbeDirectLightShadowsTexture = 0x1540; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_vBoxMins = 0x1548; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x1554; // Vector
    constexpr std::ptrdiff_t m_bMoveable = 0x1560; // bool
    constexpr std::ptrdiff_t m_nHandshake = 0x1564; // int32_t
    constexpr std::ptrdiff_t m_nPriority = 0x1568; // int32_t
    constexpr std::ptrdiff_t m_bStartDisabled = 0x156C; // bool
    constexpr std::ptrdiff_t m_nLightProbeSizeX = 0x1570; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeSizeY = 0x1574; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeSizeZ = 0x1578; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeAtlasX = 0x157C; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeAtlasY = 0x1580; // int32_t
    constexpr std::ptrdiff_t m_nLightProbeAtlasZ = 0x1584; // int32_t
    constexpr std::ptrdiff_t m_bEnabled = 0x1591; // bool
}

namespace C_EnvParticleGlow { // C_ParticleSystem
    constexpr std::ptrdiff_t m_flAlphaScale = 0x1280; // float
    constexpr std::ptrdiff_t m_flRadiusScale = 0x1284; // float
    constexpr std::ptrdiff_t m_flSelfIllumScale = 0x1288; // float
    constexpr std::ptrdiff_t m_ColorTint = 0x128C; // Color
    constexpr std::ptrdiff_t m_hTextureOverride = 0x1290; // CStrongHandle<InfoForResourceTypeCTextureBase>
}

namespace C_EnvProjectedTexture { // C_ModelPointEntity
}

namespace C_EnvScreenOverlay { // C_PointEntity
    constexpr std::ptrdiff_t m_iszOverlayNames = 0x550; // CUtlSymbolLarge[10]
    constexpr std::ptrdiff_t m_flOverlayTimes = 0x5A0; // float[10]
    constexpr std::ptrdiff_t m_flStartTime = 0x5C8; // GameTime_t
    constexpr std::ptrdiff_t m_iDesiredOverlay = 0x5CC; // int32_t
    constexpr std::ptrdiff_t m_bIsActive = 0x5D0; // bool
    constexpr std::ptrdiff_t m_bWasActive = 0x5D1; // bool
    constexpr std::ptrdiff_t m_iCachedDesiredOverlay = 0x5D4; // int32_t
    constexpr std::ptrdiff_t m_iCurrentOverlay = 0x5D8; // int32_t
    constexpr std::ptrdiff_t m_flCurrentOverlayTime = 0x5DC; // GameTime_t
}

namespace C_EnvSky { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_hSkyMaterial = 0xCD0; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_hSkyMaterialLightingOnly = 0xCD8; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_bStartDisabled = 0xCE0; // bool
    constexpr std::ptrdiff_t m_vTintColor = 0xCE1; // Color
    constexpr std::ptrdiff_t m_vTintColorLightingOnly = 0xCE5; // Color
    constexpr std::ptrdiff_t m_flBrightnessScale = 0xCEC; // float
    constexpr std::ptrdiff_t m_nFogType = 0xCF0; // int32_t
    constexpr std::ptrdiff_t m_flFogMinStart = 0xCF4; // float
    constexpr std::ptrdiff_t m_flFogMinEnd = 0xCF8; // float
    constexpr std::ptrdiff_t m_flFogMaxStart = 0xCFC; // float
    constexpr std::ptrdiff_t m_flFogMaxEnd = 0xD00; // float
    constexpr std::ptrdiff_t m_bEnabled = 0xD04; // bool
}

namespace C_EnvVolumetricFogController { // C_BaseEntity
    constexpr std::ptrdiff_t m_flScattering = 0x550; // float
    constexpr std::ptrdiff_t m_flAnisotropy = 0x554; // float
    constexpr std::ptrdiff_t m_flFadeSpeed = 0x558; // float
    constexpr std::ptrdiff_t m_flDrawDistance = 0x55C; // float
    constexpr std::ptrdiff_t m_flFadeInStart = 0x560; // float
    constexpr std::ptrdiff_t m_flFadeInEnd = 0x564; // float
    constexpr std::ptrdiff_t m_flIndirectStrength = 0x568; // float
    constexpr std::ptrdiff_t m_nIndirectTextureDimX = 0x56C; // int32_t
    constexpr std::ptrdiff_t m_nIndirectTextureDimY = 0x570; // int32_t
    constexpr std::ptrdiff_t m_nIndirectTextureDimZ = 0x574; // int32_t
    constexpr std::ptrdiff_t m_vBoxMins = 0x578; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x584; // Vector
    constexpr std::ptrdiff_t m_bActive = 0x590; // bool
    constexpr std::ptrdiff_t m_flStartAnisoTime = 0x594; // GameTime_t
    constexpr std::ptrdiff_t m_flStartScatterTime = 0x598; // GameTime_t
    constexpr std::ptrdiff_t m_flStartDrawDistanceTime = 0x59C; // GameTime_t
    constexpr std::ptrdiff_t m_flStartAnisotropy = 0x5A0; // float
    constexpr std::ptrdiff_t m_flStartScattering = 0x5A4; // float
    constexpr std::ptrdiff_t m_flStartDrawDistance = 0x5A8; // float
    constexpr std::ptrdiff_t m_flDefaultAnisotropy = 0x5AC; // float
    constexpr std::ptrdiff_t m_flDefaultScattering = 0x5B0; // float
    constexpr std::ptrdiff_t m_flDefaultDrawDistance = 0x5B4; // float
    constexpr std::ptrdiff_t m_bStartDisabled = 0x5B8; // bool
    constexpr std::ptrdiff_t m_bEnableIndirect = 0x5B9; // bool
    constexpr std::ptrdiff_t m_bIsMaster = 0x5BA; // bool
    constexpr std::ptrdiff_t m_hFogIndirectTexture = 0x5C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_nForceRefreshCount = 0x5C8; // int32_t
    constexpr std::ptrdiff_t m_bFirstTime = 0x5CC; // bool
}

namespace C_EnvVolumetricFogVolume { // C_BaseEntity
    constexpr std::ptrdiff_t m_bActive = 0x550; // bool
    constexpr std::ptrdiff_t m_vBoxMins = 0x554; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x560; // Vector
    constexpr std::ptrdiff_t m_bStartDisabled = 0x56C; // bool
    constexpr std::ptrdiff_t m_flStrength = 0x570; // float
    constexpr std::ptrdiff_t m_nFalloffShape = 0x574; // int32_t
    constexpr std::ptrdiff_t m_flFalloffExponent = 0x578; // float
}

namespace C_EnvWind { // C_BaseEntity
    constexpr std::ptrdiff_t m_EnvWindShared = 0x550; // C_EnvWindShared
}

namespace C_EnvWindClientside { // C_BaseEntity
    constexpr std::ptrdiff_t m_EnvWindShared = 0x550; // C_EnvWindShared
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
    constexpr std::ptrdiff_t m_nFlameModelIndex = 0x560; // int32_t
    constexpr std::ptrdiff_t m_nFlameFromAboveModelIndex = 0x564; // int32_t
    constexpr std::ptrdiff_t m_flScaleRegister = 0x568; // float
    constexpr std::ptrdiff_t m_flScaleStart = 0x56C; // float
    constexpr std::ptrdiff_t m_flScaleEnd = 0x570; // float
    constexpr std::ptrdiff_t m_flScaleTimeStart = 0x574; // GameTime_t
    constexpr std::ptrdiff_t m_flScaleTimeEnd = 0x578; // GameTime_t
    constexpr std::ptrdiff_t m_flChildFlameSpread = 0x57C; // float
    constexpr std::ptrdiff_t m_flClipPerc = 0x590; // float
    constexpr std::ptrdiff_t m_bClipTested = 0x594; // bool
    constexpr std::ptrdiff_t m_bFadingOut = 0x595; // bool
    constexpr std::ptrdiff_t m_tParticleSpawn = 0x598; // TimedEvent
    constexpr std::ptrdiff_t m_pFireOverlay = 0x5A0; // CFireOverlay*
}

namespace C_FireSprite { // C_Sprite
    constexpr std::ptrdiff_t m_vecMoveDir = 0xE00; // Vector
    constexpr std::ptrdiff_t m_bFadeFromAbove = 0xE0C; // bool
}

namespace C_Fish { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_pos = 0xED8; // Vector
    constexpr std::ptrdiff_t m_vel = 0xEE4; // Vector
    constexpr std::ptrdiff_t m_angles = 0xEF0; // QAngle
    constexpr std::ptrdiff_t m_localLifeState = 0xEFC; // int32_t
    constexpr std::ptrdiff_t m_deathDepth = 0xF00; // float
    constexpr std::ptrdiff_t m_deathAngle = 0xF04; // float
    constexpr std::ptrdiff_t m_buoyancy = 0xF08; // float
    constexpr std::ptrdiff_t m_wiggleTimer = 0xF10; // CountdownTimer
    constexpr std::ptrdiff_t m_wigglePhase = 0xF28; // float
    constexpr std::ptrdiff_t m_wiggleRate = 0xF2C; // float
    constexpr std::ptrdiff_t m_actualPos = 0xF30; // Vector
    constexpr std::ptrdiff_t m_actualAngles = 0xF3C; // QAngle
    constexpr std::ptrdiff_t m_poolOrigin = 0xF48; // Vector
    constexpr std::ptrdiff_t m_waterLevel = 0xF54; // float
    constexpr std::ptrdiff_t m_gotUpdate = 0xF58; // bool
    constexpr std::ptrdiff_t m_x = 0xF5C; // float
    constexpr std::ptrdiff_t m_y = 0xF60; // float
    constexpr std::ptrdiff_t m_z = 0xF64; // float
    constexpr std::ptrdiff_t m_angle = 0xF68; // float
    constexpr std::ptrdiff_t m_errorHistory = 0xF6C; // float[20]
    constexpr std::ptrdiff_t m_errorHistoryIndex = 0xFBC; // int32_t
    constexpr std::ptrdiff_t m_errorHistoryCount = 0xFC0; // int32_t
    constexpr std::ptrdiff_t m_averageError = 0xFC4; // float
}

namespace C_Fists { // C_CSWeaponBase
    constexpr std::ptrdiff_t m_bPlayingUninterruptableAct = 0x1A70; // bool
    constexpr std::ptrdiff_t m_nUninterruptableActivity = 0x1A74; // PlayerAnimEvent_t
}

namespace C_Flashbang { // C_BaseCSGrenade
}

namespace C_FlashbangProjectile { // C_BaseCSGrenadeProjectile
}

namespace C_FogController { // C_BaseEntity
    constexpr std::ptrdiff_t m_fog = 0x550; // fogparams_t
    constexpr std::ptrdiff_t m_bUseAngles = 0x5B8; // bool
    constexpr std::ptrdiff_t m_iChangedVariables = 0x5BC; // int32_t
}

namespace C_FootstepControl { // C_BaseTrigger
    constexpr std::ptrdiff_t m_source = 0xCD8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_destination = 0xCE0; // CUtlSymbolLarge
}

namespace C_FuncBrush { // C_BaseModelEntity
}

namespace C_FuncConveyor { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_vecMoveDirEntitySpace = 0xCD8; // Vector
    constexpr std::ptrdiff_t m_flTargetSpeed = 0xCE4; // float
    constexpr std::ptrdiff_t m_nTransitionStartTick = 0xCE8; // GameTick_t
    constexpr std::ptrdiff_t m_nTransitionDurationTicks = 0xCEC; // int32_t
    constexpr std::ptrdiff_t m_flTransitionStartSpeed = 0xCF0; // float
    constexpr std::ptrdiff_t m_hConveyorModels = 0xCF8; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
    constexpr std::ptrdiff_t m_flCurrentConveyorOffset = 0xD10; // float
    constexpr std::ptrdiff_t m_flCurrentConveyorSpeed = 0xD14; // float
}

namespace C_FuncElectrifiedVolume { // C_FuncBrush
    constexpr std::ptrdiff_t m_nAmbientEffect = 0xCD0; // ParticleIndex_t
    constexpr std::ptrdiff_t m_EffectName = 0xCD8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bState = 0xCE0; // bool
}

namespace C_FuncLadder { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_vecLadderDir = 0xCD0; // Vector
    constexpr std::ptrdiff_t m_Dismounts = 0xCE0; // CUtlVector<CHandle<C_InfoLadderDismount>>
    constexpr std::ptrdiff_t m_vecLocalTop = 0xCF8; // Vector
    constexpr std::ptrdiff_t m_vecPlayerMountPositionTop = 0xD04; // Vector
    constexpr std::ptrdiff_t m_vecPlayerMountPositionBottom = 0xD10; // Vector
    constexpr std::ptrdiff_t m_flAutoRideSpeed = 0xD1C; // float
    constexpr std::ptrdiff_t m_bDisabled = 0xD20; // bool
    constexpr std::ptrdiff_t m_bFakeLadder = 0xD21; // bool
    constexpr std::ptrdiff_t m_bHasSlack = 0xD22; // bool
}

namespace C_FuncMonitor { // C_FuncBrush
    constexpr std::ptrdiff_t m_targetCamera = 0xCD0; // CUtlString
    constexpr std::ptrdiff_t m_nResolutionEnum = 0xCD8; // int32_t
    constexpr std::ptrdiff_t m_bRenderShadows = 0xCDC; // bool
    constexpr std::ptrdiff_t m_bUseUniqueColorTarget = 0xCDD; // bool
    constexpr std::ptrdiff_t m_brushModelName = 0xCE0; // CUtlString
    constexpr std::ptrdiff_t m_hTargetCamera = 0xCE8; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_bEnabled = 0xCEC; // bool
    constexpr std::ptrdiff_t m_bDraw3DSkybox = 0xCED; // bool
}

namespace C_FuncMoveLinear { // C_BaseToggle
}

namespace C_FuncRotating { // C_BaseModelEntity
}

namespace C_FuncTrackTrain { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_nLongAxis = 0xCD0; // int32_t
    constexpr std::ptrdiff_t m_flRadius = 0xCD4; // float
    constexpr std::ptrdiff_t m_flLineLength = 0xCD8; // float
}

namespace C_GameRules {
}

namespace C_GameRulesProxy { // C_BaseEntity
}

namespace C_GlobalLight { // C_BaseEntity
    constexpr std::ptrdiff_t m_WindClothForceHandle = 0xA10; // uint16_t
}

namespace C_GradientFog { // C_BaseEntity
    constexpr std::ptrdiff_t m_hGradientFogTexture = 0x550; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_flFogStartDistance = 0x558; // float
    constexpr std::ptrdiff_t m_flFogEndDistance = 0x55C; // float
    constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x560; // bool
    constexpr std::ptrdiff_t m_flFogStartHeight = 0x564; // float
    constexpr std::ptrdiff_t m_flFogEndHeight = 0x568; // float
    constexpr std::ptrdiff_t m_flFarZ = 0x56C; // float
    constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x570; // float
    constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x574; // float
    constexpr std::ptrdiff_t m_flFogVerticalExponent = 0x578; // float
    constexpr std::ptrdiff_t m_fogColor = 0x57C; // Color
    constexpr std::ptrdiff_t m_flFogStrength = 0x580; // float
    constexpr std::ptrdiff_t m_flFadeTime = 0x584; // float
    constexpr std::ptrdiff_t m_bStartDisabled = 0x588; // bool
    constexpr std::ptrdiff_t m_bIsEnabled = 0x589; // bool
    constexpr std::ptrdiff_t m_bGradientFogNeedsTextures = 0x58A; // bool
}

namespace C_HEGrenade { // C_BaseCSGrenade
}

namespace C_HEGrenadeProjectile { // C_BaseCSGrenadeProjectile
}

namespace C_HandleTest { // C_BaseEntity
    constexpr std::ptrdiff_t m_Handle = 0x550; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_bSendHandle = 0x554; // bool
}

namespace C_Hostage { // C_BaseCombatCharacter
    constexpr std::ptrdiff_t m_entitySpottedState = 0x1100; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_leader = 0x1118; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_reuseTimer = 0x1120; // CountdownTimer
    constexpr std::ptrdiff_t m_vel = 0x1138; // Vector
    constexpr std::ptrdiff_t m_isRescued = 0x1144; // bool
    constexpr std::ptrdiff_t m_jumpedThisFrame = 0x1145; // bool
    constexpr std::ptrdiff_t m_nHostageState = 0x1148; // int32_t
    constexpr std::ptrdiff_t m_bHandsHaveBeenCut = 0x114C; // bool
    constexpr std::ptrdiff_t m_hHostageGrabber = 0x1150; // CHandle<C_CSPlayerPawn>
    constexpr std::ptrdiff_t m_fLastGrabTime = 0x1154; // GameTime_t
    constexpr std::ptrdiff_t m_vecGrabbedPos = 0x1158; // Vector
    constexpr std::ptrdiff_t m_flRescueStartTime = 0x1164; // GameTime_t
    constexpr std::ptrdiff_t m_flGrabSuccessTime = 0x1168; // GameTime_t
    constexpr std::ptrdiff_t m_flDropStartTime = 0x116C; // GameTime_t
    constexpr std::ptrdiff_t m_flDeadOrRescuedTime = 0x1170; // GameTime_t
    constexpr std::ptrdiff_t m_blinkTimer = 0x1178; // CountdownTimer
    constexpr std::ptrdiff_t m_lookAt = 0x1190; // Vector
    constexpr std::ptrdiff_t m_lookAroundTimer = 0x11A0; // CountdownTimer
    constexpr std::ptrdiff_t m_isInit = 0x11B8; // bool
    constexpr std::ptrdiff_t m_eyeAttachment = 0x11B9; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_chestAttachment = 0x11BA; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_pPredictionOwner = 0x11C0; // CBasePlayerController*
    constexpr std::ptrdiff_t m_fNewestAlphaThinkTime = 0x11C8; // GameTime_t
}

namespace C_HostageCarriableProp { // CBaseAnimGraph
}

namespace C_IncendiaryGrenade { // C_MolotovGrenade
}

namespace C_Inferno { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_nfxFireDamageEffect = 0xD10; // ParticleIndex_t
    constexpr std::ptrdiff_t m_firePositions = 0xD14; // Vector[64]
    constexpr std::ptrdiff_t m_fireParentPositions = 0x1014; // Vector[64]
    constexpr std::ptrdiff_t m_bFireIsBurning = 0x1314; // bool[64]
    constexpr std::ptrdiff_t m_BurnNormal = 0x1354; // Vector[64]
    constexpr std::ptrdiff_t m_fireCount = 0x1654; // int32_t
    constexpr std::ptrdiff_t m_nInfernoType = 0x1658; // int32_t
    constexpr std::ptrdiff_t m_nFireLifetime = 0x165C; // float
    constexpr std::ptrdiff_t m_bInPostEffectTime = 0x1660; // bool
    constexpr std::ptrdiff_t m_lastFireCount = 0x1664; // int32_t
    constexpr std::ptrdiff_t m_nFireEffectTickBegin = 0x1668; // int32_t
    constexpr std::ptrdiff_t m_drawableCount = 0x8270; // int32_t
    constexpr std::ptrdiff_t m_blosCheck = 0x8274; // bool
    constexpr std::ptrdiff_t m_nlosperiod = 0x8278; // int32_t
    constexpr std::ptrdiff_t m_maxFireHalfWidth = 0x827C; // float
    constexpr std::ptrdiff_t m_maxFireHeight = 0x8280; // float
    constexpr std::ptrdiff_t m_minBounds = 0x8284; // Vector
    constexpr std::ptrdiff_t m_maxBounds = 0x8290; // Vector
    constexpr std::ptrdiff_t m_flLastGrassBurnThink = 0x829C; // float
}

namespace C_InfoInstructorHintHostageRescueZone { // C_PointEntity
}

namespace C_InfoLadderDismount { // C_BaseEntity
}

namespace C_InfoVisibilityBox { // C_BaseEntity
    constexpr std::ptrdiff_t m_nMode = 0x554; // int32_t
    constexpr std::ptrdiff_t m_vBoxSize = 0x558; // Vector
    constexpr std::ptrdiff_t m_bEnabled = 0x564; // bool
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
    constexpr std::ptrdiff_t m_bShouldGlow = 0x15B8; // bool
    constexpr std::ptrdiff_t m_pReticleHintTextName = 0x15B9; // char[256]
}

namespace C_ItemDogtags { // C_Item
    constexpr std::ptrdiff_t m_OwningPlayer = 0x16C0; // CHandle<C_CSPlayerPawn>
    constexpr std::ptrdiff_t m_KillingPlayer = 0x16C4; // CHandle<C_CSPlayerPawn>
}

namespace C_Item_Healthshot { // C_WeaponBaseItem
}

namespace C_Knife { // C_CSWeaponBase
}

namespace C_LightDirectionalEntity { // C_LightEntity
}

namespace C_LightEntity { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_CLightComponent = 0xCD0; // CLightComponent*
}

namespace C_LightEnvironmentEntity { // C_LightDirectionalEntity
}

namespace C_LightGlow { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_nHorizontalSize = 0xCD0; // uint32_t
    constexpr std::ptrdiff_t m_nVerticalSize = 0xCD4; // uint32_t
    constexpr std::ptrdiff_t m_nMinDist = 0xCD8; // uint32_t
    constexpr std::ptrdiff_t m_nMaxDist = 0xCDC; // uint32_t
    constexpr std::ptrdiff_t m_nOuterMaxDist = 0xCE0; // uint32_t
    constexpr std::ptrdiff_t m_flGlowProxySize = 0xCE4; // float
    constexpr std::ptrdiff_t m_flHDRColorScale = 0xCE8; // float
    constexpr std::ptrdiff_t m_Glow = 0xCF0; // C_LightGlowOverlay
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
    constexpr std::ptrdiff_t flags = 0xEF0; // int32_t
    constexpr std::ptrdiff_t die = 0xEF4; // GameTime_t
    constexpr std::ptrdiff_t m_flFrameMax = 0xEF8; // float
    constexpr std::ptrdiff_t x = 0xEFC; // float
    constexpr std::ptrdiff_t y = 0xF00; // float
    constexpr std::ptrdiff_t fadeSpeed = 0xF04; // float
    constexpr std::ptrdiff_t bounceFactor = 0xF08; // float
    constexpr std::ptrdiff_t hitSound = 0xF0C; // int32_t
    constexpr std::ptrdiff_t priority = 0xF10; // int32_t
    constexpr std::ptrdiff_t tentOffset = 0xF14; // Vector
    constexpr std::ptrdiff_t m_vecTempEntAngVelocity = 0xF20; // QAngle
    constexpr std::ptrdiff_t tempent_renderamt = 0xF2C; // int32_t
    constexpr std::ptrdiff_t m_vecNormal = 0xF30; // Vector
    constexpr std::ptrdiff_t m_flSpriteScale = 0xF3C; // float
    constexpr std::ptrdiff_t m_nFlickerFrame = 0xF40; // int32_t
    constexpr std::ptrdiff_t m_flFrameRate = 0xF44; // float
    constexpr std::ptrdiff_t m_flFrame = 0xF48; // float
    constexpr std::ptrdiff_t m_pszImpactEffect = 0xF50; // char*
    constexpr std::ptrdiff_t m_pszParticleEffect = 0xF58; // char*
    constexpr std::ptrdiff_t m_bParticleCollision = 0xF60; // bool
    constexpr std::ptrdiff_t m_iLastCollisionFrame = 0xF64; // int32_t
    constexpr std::ptrdiff_t m_vLastCollisionOrigin = 0xF68; // Vector
    constexpr std::ptrdiff_t m_vecTempEntVelocity = 0xF74; // Vector
    constexpr std::ptrdiff_t m_vecPrevAbsOrigin = 0xF80; // Vector
    constexpr std::ptrdiff_t m_vecTempEntAcceleration = 0xF8C; // Vector
}

namespace C_MapPreviewParticleSystem { // C_ParticleSystem
}

namespace C_MapVetoPickController { // C_BaseEntity
    constexpr std::ptrdiff_t m_nDraftType = 0x560; // int32_t
    constexpr std::ptrdiff_t m_nTeamWinningCoinToss = 0x564; // int32_t
    constexpr std::ptrdiff_t m_nTeamWithFirstChoice = 0x568; // int32_t[64]
    constexpr std::ptrdiff_t m_nVoteMapIdsList = 0x668; // int32_t[7]
    constexpr std::ptrdiff_t m_nAccountIDs = 0x684; // int32_t[64]
    constexpr std::ptrdiff_t m_nMapId0 = 0x784; // int32_t[64]
    constexpr std::ptrdiff_t m_nMapId1 = 0x884; // int32_t[64]
    constexpr std::ptrdiff_t m_nMapId2 = 0x984; // int32_t[64]
    constexpr std::ptrdiff_t m_nMapId3 = 0xA84; // int32_t[64]
    constexpr std::ptrdiff_t m_nMapId4 = 0xB84; // int32_t[64]
    constexpr std::ptrdiff_t m_nMapId5 = 0xC84; // int32_t[64]
    constexpr std::ptrdiff_t m_nStartingSide0 = 0xD84; // int32_t[64]
    constexpr std::ptrdiff_t m_nCurrentPhase = 0xE84; // int32_t
    constexpr std::ptrdiff_t m_nPhaseStartTick = 0xE88; // int32_t
    constexpr std::ptrdiff_t m_nPhaseDurationTicks = 0xE8C; // int32_t
    constexpr std::ptrdiff_t m_nPostDataUpdateTick = 0xE90; // int32_t
    constexpr std::ptrdiff_t m_bDisabledHud = 0xE94; // bool
}

namespace C_Melee { // C_CSWeaponBase
}

namespace C_ModelPointEntity { // C_BaseModelEntity
}

namespace C_MolotovGrenade { // C_BaseCSGrenade
}

namespace C_MolotovProjectile { // C_BaseCSGrenadeProjectile
    constexpr std::ptrdiff_t m_bIsIncGrenade = 0x1158; // bool
}

namespace C_Multimeter { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_hTargetC4 = 0xEE0; // CHandle<C_PlantedC4>
}

namespace C_MultiplayRules { // C_GameRules
}

namespace C_NetTestBaseCombatCharacter { // C_BaseCombatCharacter
}

namespace C_OmniLight { // C_BarnLight
    constexpr std::ptrdiff_t m_flInnerAngle = 0xF18; // float
    constexpr std::ptrdiff_t m_flOuterAngle = 0xF1C; // float
    constexpr std::ptrdiff_t m_bShowLight = 0xF20; // bool
}

namespace C_ParticleSystem { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_szSnapshotFileName = 0xCD0; // char[512]
    constexpr std::ptrdiff_t m_bActive = 0xED0; // bool
    constexpr std::ptrdiff_t m_bFrozen = 0xED1; // bool
    constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0xED4; // float
    constexpr std::ptrdiff_t m_nStopType = 0xED8; // int32_t
    constexpr std::ptrdiff_t m_bAnimateDuringGameplayPause = 0xEDC; // bool
    constexpr std::ptrdiff_t m_iEffectIndex = 0xEE0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    constexpr std::ptrdiff_t m_flStartTime = 0xEE8; // GameTime_t
    constexpr std::ptrdiff_t m_flPreSimTime = 0xEEC; // float
    constexpr std::ptrdiff_t m_vServerControlPoints = 0xEF0; // Vector[4]
    constexpr std::ptrdiff_t m_iServerControlPointAssignments = 0xF20; // uint8_t[4]
    constexpr std::ptrdiff_t m_hControlPointEnts = 0xF24; // CHandle<C_BaseEntity>[64]
    constexpr std::ptrdiff_t m_bNoSave = 0x1024; // bool
    constexpr std::ptrdiff_t m_bNoFreeze = 0x1025; // bool
    constexpr std::ptrdiff_t m_bNoRamp = 0x1026; // bool
    constexpr std::ptrdiff_t m_bStartActive = 0x1027; // bool
    constexpr std::ptrdiff_t m_iszEffectName = 0x1028; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszControlPointNames = 0x1030; // CUtlSymbolLarge[64]
    constexpr std::ptrdiff_t m_nDataCP = 0x1230; // int32_t
    constexpr std::ptrdiff_t m_vecDataCPValue = 0x1234; // Vector
    constexpr std::ptrdiff_t m_nTintCP = 0x1240; // int32_t
    constexpr std::ptrdiff_t m_clrTint = 0x1244; // Color
    constexpr std::ptrdiff_t m_bOldActive = 0x1268; // bool
    constexpr std::ptrdiff_t m_bOldFrozen = 0x1269; // bool
}

namespace C_PathParticleRope { // C_BaseEntity
    constexpr std::ptrdiff_t m_bStartActive = 0x550; // bool
    constexpr std::ptrdiff_t m_flMaxSimulationTime = 0x554; // float
    constexpr std::ptrdiff_t m_iszEffectName = 0x558; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_PathNodes_Name = 0x560; // CUtlVector<CUtlSymbolLarge>
    constexpr std::ptrdiff_t m_flParticleSpacing = 0x578; // float
    constexpr std::ptrdiff_t m_flSlack = 0x57C; // float
    constexpr std::ptrdiff_t m_flRadius = 0x580; // float
    constexpr std::ptrdiff_t m_ColorTint = 0x584; // Color
    constexpr std::ptrdiff_t m_nEffectState = 0x588; // int32_t
    constexpr std::ptrdiff_t m_iEffectIndex = 0x590; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    constexpr std::ptrdiff_t m_PathNodes_Position = 0x598; // C_NetworkUtlVectorBase<Vector>
    constexpr std::ptrdiff_t m_PathNodes_TangentIn = 0x5B0; // C_NetworkUtlVectorBase<Vector>
    constexpr std::ptrdiff_t m_PathNodes_TangentOut = 0x5C8; // C_NetworkUtlVectorBase<Vector>
    constexpr std::ptrdiff_t m_PathNodes_Color = 0x5E0; // C_NetworkUtlVectorBase<Vector>
    constexpr std::ptrdiff_t m_PathNodes_PinEnabled = 0x5F8; // C_NetworkUtlVectorBase<bool>
    constexpr std::ptrdiff_t m_PathNodes_RadiusScale = 0x610; // C_NetworkUtlVectorBase<float>
}

namespace C_PathParticleRopeAlias_path_particle_rope_clientside { // C_PathParticleRope
}

namespace C_PhysBox { // C_Breakable
}

namespace C_PhysMagnet { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_aAttachedObjectsFromServer = 0xED8; // CUtlVector<int32_t>
    constexpr std::ptrdiff_t m_aAttachedObjects = 0xEF0; // CUtlVector<CHandle<C_BaseEntity>>
}

namespace C_PhysPropClientside { // C_BreakableProp
    constexpr std::ptrdiff_t m_flTouchDelta = 0x1028; // GameTime_t
    constexpr std::ptrdiff_t m_fDeathTime = 0x102C; // GameTime_t
    constexpr std::ptrdiff_t m_impactEnergyScale = 0x1030; // float
    constexpr std::ptrdiff_t m_inertiaScale = 0x1034; // float
    constexpr std::ptrdiff_t m_flDmgModBullet = 0x1038; // float
    constexpr std::ptrdiff_t m_flDmgModClub = 0x103C; // float
    constexpr std::ptrdiff_t m_flDmgModExplosive = 0x1040; // float
    constexpr std::ptrdiff_t m_flDmgModFire = 0x1044; // float
    constexpr std::ptrdiff_t m_iszPhysicsDamageTableName = 0x1048; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszBasePropData = 0x1050; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iInteractions = 0x1058; // int32_t
    constexpr std::ptrdiff_t m_bHasBreakPiecesOrCommands = 0x105C; // bool
    constexpr std::ptrdiff_t m_vecDamagePosition = 0x1060; // Vector
    constexpr std::ptrdiff_t m_vecDamageDirection = 0x106C; // Vector
    constexpr std::ptrdiff_t m_nDamageType = 0x1078; // int32_t
}

namespace C_PhysicsProp { // C_BreakableProp
    constexpr std::ptrdiff_t m_bAwake = 0x1028; // bool
}

namespace C_PhysicsPropMultiplayer { // C_PhysicsProp
}

namespace C_PickUpModelSlerper { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_hPlayerParent = 0xED8; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_hItem = 0xEDC; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_flTimePickedUp = 0xEE0; // float
    constexpr std::ptrdiff_t m_angOriginal = 0xEE4; // QAngle
    constexpr std::ptrdiff_t m_vecPosOriginal = 0xEF0; // Vector
    constexpr std::ptrdiff_t m_angRandom = 0xF00; // QAngle
}

namespace C_PlantedC4 { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_bBombTicking = 0xED8; // bool
    constexpr std::ptrdiff_t m_nBombSite = 0xEDC; // int32_t
    constexpr std::ptrdiff_t m_nSourceSoundscapeHash = 0xEE0; // int32_t
    constexpr std::ptrdiff_t m_entitySpottedState = 0xEE8; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_flNextGlow = 0xF00; // GameTime_t
    constexpr std::ptrdiff_t m_flNextBeep = 0xF04; // GameTime_t
    constexpr std::ptrdiff_t m_flC4Blow = 0xF08; // GameTime_t
    constexpr std::ptrdiff_t m_bCannotBeDefused = 0xF0C; // bool
    constexpr std::ptrdiff_t m_bHasExploded = 0xF0D; // bool
    constexpr std::ptrdiff_t m_flTimerLength = 0xF10; // float
    constexpr std::ptrdiff_t m_bBeingDefused = 0xF14; // bool
    constexpr std::ptrdiff_t m_bTriggerWarning = 0xF18; // float
    constexpr std::ptrdiff_t m_bExplodeWarning = 0xF1C; // float
    constexpr std::ptrdiff_t m_bC4Activated = 0xF20; // bool
    constexpr std::ptrdiff_t m_bTenSecWarning = 0xF21; // bool
    constexpr std::ptrdiff_t m_flDefuseLength = 0xF24; // float
    constexpr std::ptrdiff_t m_flDefuseCountDown = 0xF28; // GameTime_t
    constexpr std::ptrdiff_t m_bBombDefused = 0xF2C; // bool
    constexpr std::ptrdiff_t m_hBombDefuser = 0xF30; // CHandle<C_CSPlayerPawn>
    constexpr std::ptrdiff_t m_hControlPanel = 0xF34; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_hDefuserMultimeter = 0xF38; // CHandle<C_Multimeter>
    constexpr std::ptrdiff_t m_flNextRadarFlashTime = 0xF3C; // GameTime_t
    constexpr std::ptrdiff_t m_bRadarFlash = 0xF40; // bool
    constexpr std::ptrdiff_t m_pBombDefuser = 0xF44; // CHandle<C_CSPlayerPawn>
    constexpr std::ptrdiff_t m_fLastDefuseTime = 0xF48; // GameTime_t
    constexpr std::ptrdiff_t m_pPredictionOwner = 0xF50; // CBasePlayerController*
    constexpr std::ptrdiff_t m_vecC4ExplodeSpectatePos = 0xF58; // Vector
    constexpr std::ptrdiff_t m_vecC4ExplodeSpectateAng = 0xF64; // QAngle
    constexpr std::ptrdiff_t m_flC4ExplodeSpectateDuration = 0xF70; // float
}

namespace C_PlayerPing { // C_BaseEntity
    constexpr std::ptrdiff_t m_hPlayer = 0x580; // CHandle<C_CSPlayerPawn>
    constexpr std::ptrdiff_t m_hPingedEntity = 0x584; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_iType = 0x588; // int32_t
    constexpr std::ptrdiff_t m_bUrgent = 0x58C; // bool
    constexpr std::ptrdiff_t m_szPlaceName = 0x58D; // char[18]
}

namespace C_PlayerSprayDecal { // C_ModelPointEntity
    constexpr std::ptrdiff_t m_nUniqueID = 0xCD0; // int32_t
    constexpr std::ptrdiff_t m_unAccountID = 0xCD4; // uint32_t
    constexpr std::ptrdiff_t m_unTraceID = 0xCD8; // uint32_t
    constexpr std::ptrdiff_t m_rtGcTime = 0xCDC; // uint32_t
    constexpr std::ptrdiff_t m_vecEndPos = 0xCE0; // Vector
    constexpr std::ptrdiff_t m_vecStart = 0xCEC; // Vector
    constexpr std::ptrdiff_t m_vecLeft = 0xCF8; // Vector
    constexpr std::ptrdiff_t m_vecNormal = 0xD04; // Vector
    constexpr std::ptrdiff_t m_nPlayer = 0xD10; // int32_t
    constexpr std::ptrdiff_t m_nEntity = 0xD14; // int32_t
    constexpr std::ptrdiff_t m_nHitbox = 0xD18; // int32_t
    constexpr std::ptrdiff_t m_flCreationTime = 0xD1C; // float
    constexpr std::ptrdiff_t m_nTintID = 0xD20; // int32_t
    constexpr std::ptrdiff_t m_nVersion = 0xD24; // uint8_t
    constexpr std::ptrdiff_t m_ubSignature = 0xD25; // uint8_t[128]
    constexpr std::ptrdiff_t m_SprayRenderHelper = 0xDB0; // CPlayerSprayDecalRenderHelper
}

namespace C_PlayerVisibility { // C_BaseEntity
    constexpr std::ptrdiff_t m_flVisibilityStrength = 0x550; // float
    constexpr std::ptrdiff_t m_flFogDistanceMultiplier = 0x554; // float
    constexpr std::ptrdiff_t m_flFogMaxDensityMultiplier = 0x558; // float
    constexpr std::ptrdiff_t m_flFadeTime = 0x55C; // float
    constexpr std::ptrdiff_t m_bStartDisabled = 0x560; // bool
    constexpr std::ptrdiff_t m_bIsEnabled = 0x561; // bool
}

namespace C_PointCamera { // C_BaseEntity
    constexpr std::ptrdiff_t m_FOV = 0x550; // float
    constexpr std::ptrdiff_t m_Resolution = 0x554; // float
    constexpr std::ptrdiff_t m_bFogEnable = 0x558; // bool
    constexpr std::ptrdiff_t m_FogColor = 0x559; // Color
    constexpr std::ptrdiff_t m_flFogStart = 0x560; // float
    constexpr std::ptrdiff_t m_flFogEnd = 0x564; // float
    constexpr std::ptrdiff_t m_flFogMaxDensity = 0x568; // float
    constexpr std::ptrdiff_t m_bActive = 0x56C; // bool
    constexpr std::ptrdiff_t m_bUseScreenAspectRatio = 0x56D; // bool
    constexpr std::ptrdiff_t m_flAspectRatio = 0x570; // float
    constexpr std::ptrdiff_t m_bNoSky = 0x574; // bool
    constexpr std::ptrdiff_t m_fBrightness = 0x578; // float
    constexpr std::ptrdiff_t m_flZFar = 0x57C; // float
    constexpr std::ptrdiff_t m_flZNear = 0x580; // float
    constexpr std::ptrdiff_t m_bCanHLTVUse = 0x584; // bool
    constexpr std::ptrdiff_t m_bDofEnabled = 0x585; // bool
    constexpr std::ptrdiff_t m_flDofNearBlurry = 0x588; // float
    constexpr std::ptrdiff_t m_flDofNearCrisp = 0x58C; // float
    constexpr std::ptrdiff_t m_flDofFarCrisp = 0x590; // float
    constexpr std::ptrdiff_t m_flDofFarBlurry = 0x594; // float
    constexpr std::ptrdiff_t m_flDofTiltToGround = 0x598; // float
    constexpr std::ptrdiff_t m_TargetFOV = 0x59C; // float
    constexpr std::ptrdiff_t m_DegreesPerSecond = 0x5A0; // float
    constexpr std::ptrdiff_t m_bIsOn = 0x5A4; // bool
    constexpr std::ptrdiff_t m_pNext = 0x5A8; // C_PointCamera*
}

namespace C_PointCameraVFOV { // C_PointCamera
    constexpr std::ptrdiff_t m_flVerticalFOV = 0x5B0; // float
}

namespace C_PointClientUIDialog { // C_BaseClientUIEntity
    constexpr std::ptrdiff_t m_hActivator = 0xD00; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_bStartEnabled = 0xD04; // bool
}

namespace C_PointClientUIHUD { // C_BaseClientUIEntity
    constexpr std::ptrdiff_t m_bCheckCSSClasses = 0xD08; // bool
    constexpr std::ptrdiff_t m_bIgnoreInput = 0xE90; // bool
    constexpr std::ptrdiff_t m_flWidth = 0xE94; // float
    constexpr std::ptrdiff_t m_flHeight = 0xE98; // float
    constexpr std::ptrdiff_t m_flDPI = 0xE9C; // float
    constexpr std::ptrdiff_t m_flInteractDistance = 0xEA0; // float
    constexpr std::ptrdiff_t m_flDepthOffset = 0xEA4; // float
    constexpr std::ptrdiff_t m_unOwnerContext = 0xEA8; // uint32_t
    constexpr std::ptrdiff_t m_unHorizontalAlign = 0xEAC; // uint32_t
    constexpr std::ptrdiff_t m_unVerticalAlign = 0xEB0; // uint32_t
    constexpr std::ptrdiff_t m_unOrientation = 0xEB4; // uint32_t
    constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0xEB8; // bool
    constexpr std::ptrdiff_t m_vecCSSClasses = 0xEC0; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
}

namespace C_PointClientUIWorldPanel { // C_BaseClientUIEntity
    constexpr std::ptrdiff_t m_bForceRecreateNextUpdate = 0xD08; // bool
    constexpr std::ptrdiff_t m_bMoveViewToPlayerNextThink = 0xD09; // bool
    constexpr std::ptrdiff_t m_bCheckCSSClasses = 0xD0A; // bool
    constexpr std::ptrdiff_t m_anchorDeltaTransform = 0xD10; // CTransform
    constexpr std::ptrdiff_t m_pOffScreenIndicator = 0xEB0; // CPointOffScreenIndicatorUi*
    constexpr std::ptrdiff_t m_bIgnoreInput = 0xED8; // bool
    constexpr std::ptrdiff_t m_bLit = 0xED9; // bool
    constexpr std::ptrdiff_t m_bFollowPlayerAcrossTeleport = 0xEDA; // bool
    constexpr std::ptrdiff_t m_flWidth = 0xEDC; // float
    constexpr std::ptrdiff_t m_flHeight = 0xEE0; // float
    constexpr std::ptrdiff_t m_flDPI = 0xEE4; // float
    constexpr std::ptrdiff_t m_flInteractDistance = 0xEE8; // float
    constexpr std::ptrdiff_t m_flDepthOffset = 0xEEC; // float
    constexpr std::ptrdiff_t m_unOwnerContext = 0xEF0; // uint32_t
    constexpr std::ptrdiff_t m_unHorizontalAlign = 0xEF4; // uint32_t
    constexpr std::ptrdiff_t m_unVerticalAlign = 0xEF8; // uint32_t
    constexpr std::ptrdiff_t m_unOrientation = 0xEFC; // uint32_t
    constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0xF00; // bool
    constexpr std::ptrdiff_t m_vecCSSClasses = 0xF08; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
    constexpr std::ptrdiff_t m_bOpaque = 0xF20; // bool
    constexpr std::ptrdiff_t m_bNoDepth = 0xF21; // bool
    constexpr std::ptrdiff_t m_bRenderBackface = 0xF22; // bool
    constexpr std::ptrdiff_t m_bUseOffScreenIndicator = 0xF23; // bool
    constexpr std::ptrdiff_t m_bExcludeFromSaveGames = 0xF24; // bool
    constexpr std::ptrdiff_t m_bGrabbable = 0xF25; // bool
    constexpr std::ptrdiff_t m_bOnlyRenderToTexture = 0xF26; // bool
    constexpr std::ptrdiff_t m_bDisableMipGen = 0xF27; // bool
    constexpr std::ptrdiff_t m_nExplicitImageLayout = 0xF28; // int32_t
}

namespace C_PointClientUIWorldTextPanel { // C_PointClientUIWorldPanel
    constexpr std::ptrdiff_t m_messageText = 0xF30; // char[512]
}

namespace C_PointCommentaryNode { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_bActive = 0xEE0; // bool
    constexpr std::ptrdiff_t m_bWasActive = 0xEE1; // bool
    constexpr std::ptrdiff_t m_flEndTime = 0xEE4; // GameTime_t
    constexpr std::ptrdiff_t m_flStartTime = 0xEE8; // GameTime_t
    constexpr std::ptrdiff_t m_flStartTimeInCommentary = 0xEEC; // float
    constexpr std::ptrdiff_t m_iszCommentaryFile = 0xEF0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTitle = 0xEF8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSpeakers = 0xF00; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iNodeNumber = 0xF08; // int32_t
    constexpr std::ptrdiff_t m_iNodeNumberMax = 0xF0C; // int32_t
    constexpr std::ptrdiff_t m_bListenedTo = 0xF10; // bool
    constexpr std::ptrdiff_t m_hViewPosition = 0xF20; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_bRestartAfterRestore = 0xF24; // bool
}

namespace C_PointEntity { // C_BaseEntity
}

namespace C_PointValueRemapper { // C_BaseEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x550; // bool
    constexpr std::ptrdiff_t m_bDisabledOld = 0x551; // bool
    constexpr std::ptrdiff_t m_bUpdateOnClient = 0x552; // bool
    constexpr std::ptrdiff_t m_nInputType = 0x554; // ValueRemapperInputType_t
    constexpr std::ptrdiff_t m_hRemapLineStart = 0x558; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_hRemapLineEnd = 0x55C; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_flMaximumChangePerSecond = 0x560; // float
    constexpr std::ptrdiff_t m_flDisengageDistance = 0x564; // float
    constexpr std::ptrdiff_t m_flEngageDistance = 0x568; // float
    constexpr std::ptrdiff_t m_bRequiresUseKey = 0x56C; // bool
    constexpr std::ptrdiff_t m_nOutputType = 0x570; // ValueRemapperOutputType_t
    constexpr std::ptrdiff_t m_hOutputEntities = 0x578; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
    constexpr std::ptrdiff_t m_nHapticsType = 0x590; // ValueRemapperHapticsType_t
    constexpr std::ptrdiff_t m_nMomentumType = 0x594; // ValueRemapperMomentumType_t
    constexpr std::ptrdiff_t m_flMomentumModifier = 0x598; // float
    constexpr std::ptrdiff_t m_flSnapValue = 0x59C; // float
    constexpr std::ptrdiff_t m_flCurrentMomentum = 0x5A0; // float
    constexpr std::ptrdiff_t m_nRatchetType = 0x5A4; // ValueRemapperRatchetType_t
    constexpr std::ptrdiff_t m_flRatchetOffset = 0x5A8; // float
    constexpr std::ptrdiff_t m_flInputOffset = 0x5AC; // float
    constexpr std::ptrdiff_t m_bEngaged = 0x5B0; // bool
    constexpr std::ptrdiff_t m_bFirstUpdate = 0x5B1; // bool
    constexpr std::ptrdiff_t m_flPreviousValue = 0x5B4; // float
    constexpr std::ptrdiff_t m_flPreviousUpdateTickTime = 0x5B8; // GameTime_t
    constexpr std::ptrdiff_t m_vecPreviousTestPoint = 0x5BC; // Vector
}

namespace C_PointWorldText { // C_ModelPointEntity
    constexpr std::ptrdiff_t m_bForceRecreateNextUpdate = 0xCD8; // bool
    constexpr std::ptrdiff_t m_messageText = 0xCE8; // char[512]
    constexpr std::ptrdiff_t m_FontName = 0xEE8; // char[64]
    constexpr std::ptrdiff_t m_bEnabled = 0xF28; // bool
    constexpr std::ptrdiff_t m_bFullbright = 0xF29; // bool
    constexpr std::ptrdiff_t m_flWorldUnitsPerPx = 0xF2C; // float
    constexpr std::ptrdiff_t m_flFontSize = 0xF30; // float
    constexpr std::ptrdiff_t m_flDepthOffset = 0xF34; // float
    constexpr std::ptrdiff_t m_Color = 0xF38; // Color
    constexpr std::ptrdiff_t m_nJustifyHorizontal = 0xF3C; // PointWorldTextJustifyHorizontal_t
    constexpr std::ptrdiff_t m_nJustifyVertical = 0xF40; // PointWorldTextJustifyVertical_t
    constexpr std::ptrdiff_t m_nReorientMode = 0xF44; // PointWorldTextReorientMode_t
}

namespace C_PostProcessingVolume { // C_BaseTrigger
    constexpr std::ptrdiff_t m_hPostSettings = 0xCE8; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
    constexpr std::ptrdiff_t m_flFadeDuration = 0xCF0; // float
    constexpr std::ptrdiff_t m_flMinLogExposure = 0xCF4; // float
    constexpr std::ptrdiff_t m_flMaxLogExposure = 0xCF8; // float
    constexpr std::ptrdiff_t m_flMinExposure = 0xCFC; // float
    constexpr std::ptrdiff_t m_flMaxExposure = 0xD00; // float
    constexpr std::ptrdiff_t m_flExposureCompensation = 0xD04; // float
    constexpr std::ptrdiff_t m_flExposureFadeSpeedUp = 0xD08; // float
    constexpr std::ptrdiff_t m_flExposureFadeSpeedDown = 0xD0C; // float
    constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0xD10; // float
    constexpr std::ptrdiff_t m_bMaster = 0xD14; // bool
    constexpr std::ptrdiff_t m_bExposureControl = 0xD15; // bool
    constexpr std::ptrdiff_t m_flRate = 0xD18; // float
    constexpr std::ptrdiff_t m_flTonemapPercentTarget = 0xD1C; // float
    constexpr std::ptrdiff_t m_flTonemapPercentBrightPixels = 0xD20; // float
    constexpr std::ptrdiff_t m_flTonemapMinAvgLum = 0xD24; // float
}

namespace C_Precipitation { // C_BaseTrigger
    constexpr std::ptrdiff_t m_flDensity = 0xCD8; // float
    constexpr std::ptrdiff_t m_flParticleInnerDist = 0xCE8; // float
    constexpr std::ptrdiff_t m_pParticleDef = 0xCF0; // char*
    constexpr std::ptrdiff_t m_tParticlePrecipTraceTimer = 0xD18; // TimedEvent[1]
    constexpr std::ptrdiff_t m_bActiveParticlePrecipEmitter = 0xD20; // bool[1]
    constexpr std::ptrdiff_t m_bParticlePrecipInitialized = 0xD21; // bool
    constexpr std::ptrdiff_t m_bHasSimulatedSinceLastSceneObjectUpdate = 0xD22; // bool
    constexpr std::ptrdiff_t m_nAvailableSheetSequencesMaxIndex = 0xD24; // int32_t
}

namespace C_PrecipitationBlocker { // C_BaseModelEntity
}

namespace C_PredictedViewModel { // C_BaseViewModel
    constexpr std::ptrdiff_t m_LagAnglesHistory = 0xF40; // QAngle
    constexpr std::ptrdiff_t m_vPredictedOffset = 0xF58; // Vector
}

namespace C_PropDoorRotating { // C_BasePropDoor
}

namespace C_RagdollManager { // C_BaseEntity
    constexpr std::ptrdiff_t m_iCurrentMaxRagdollCount = 0x550; // int8_t
}

namespace C_RagdollProp { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_ragPos = 0xEE0; // C_NetworkUtlVectorBase<Vector>
    constexpr std::ptrdiff_t m_ragAngles = 0xEF8; // C_NetworkUtlVectorBase<QAngle>
    constexpr std::ptrdiff_t m_flBlendWeight = 0xF10; // float
    constexpr std::ptrdiff_t m_hRagdollSource = 0xF14; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_iEyeAttachment = 0xF18; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_flBlendWeightCurrent = 0xF1C; // float
    constexpr std::ptrdiff_t m_parentPhysicsBoneIndices = 0xF20; // CUtlVector<int32_t>
    constexpr std::ptrdiff_t m_worldSpaceBoneComputationOrder = 0xF38; // CUtlVector<int32_t>
}

namespace C_RagdollPropAttached { // C_RagdollProp
    constexpr std::ptrdiff_t m_boneIndexAttached = 0xF50; // uint32_t
    constexpr std::ptrdiff_t m_ragdollAttachedObjectIndex = 0xF54; // uint32_t
    constexpr std::ptrdiff_t m_attachmentPointBoneSpace = 0xF58; // Vector
    constexpr std::ptrdiff_t m_attachmentPointRagdollSpace = 0xF64; // Vector
    constexpr std::ptrdiff_t m_vecOffset = 0xF70; // Vector
    constexpr std::ptrdiff_t m_parentTime = 0xF7C; // float
    constexpr std::ptrdiff_t m_bHasParent = 0xF80; // bool
}

namespace C_RectLight { // C_BarnLight
    constexpr std::ptrdiff_t m_bShowLight = 0xF18; // bool
}

namespace C_RetakeGameRules {
    constexpr std::ptrdiff_t m_nMatchSeed = 0xF8; // int32_t
    constexpr std::ptrdiff_t m_bBlockersPresent = 0xFC; // bool
    constexpr std::ptrdiff_t m_bRoundInProgress = 0xFD; // bool
    constexpr std::ptrdiff_t m_iFirstSecondHalfRound = 0x100; // int32_t
    constexpr std::ptrdiff_t m_iBombSite = 0x104; // int32_t
}

namespace C_RopeKeyframe { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_LinksTouchingSomething = 0xCD8; // CBitVec<10>
    constexpr std::ptrdiff_t m_nLinksTouchingSomething = 0xCDC; // int32_t
    constexpr std::ptrdiff_t m_bApplyWind = 0xCE0; // bool
    constexpr std::ptrdiff_t m_fPrevLockedPoints = 0xCE4; // int32_t
    constexpr std::ptrdiff_t m_iForcePointMoveCounter = 0xCE8; // int32_t
    constexpr std::ptrdiff_t m_bPrevEndPointPos = 0xCEC; // bool[2]
    constexpr std::ptrdiff_t m_vPrevEndPointPos = 0xCF0; // Vector[2]
    constexpr std::ptrdiff_t m_flCurScroll = 0xD08; // float
    constexpr std::ptrdiff_t m_flScrollSpeed = 0xD0C; // float
    constexpr std::ptrdiff_t m_RopeFlags = 0xD10; // uint16_t
    constexpr std::ptrdiff_t m_iRopeMaterialModelIndex = 0xD18; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_LightValues = 0xF90; // Vector[10]
    constexpr std::ptrdiff_t m_nSegments = 0x1008; // uint8_t
    constexpr std::ptrdiff_t m_hStartPoint = 0x100C; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_hEndPoint = 0x1010; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_iStartAttachment = 0x1014; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_iEndAttachment = 0x1015; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_Subdiv = 0x1016; // uint8_t
    constexpr std::ptrdiff_t m_RopeLength = 0x1018; // int16_t
    constexpr std::ptrdiff_t m_Slack = 0x101A; // int16_t
    constexpr std::ptrdiff_t m_TextureScale = 0x101C; // float
    constexpr std::ptrdiff_t m_fLockedPoints = 0x1020; // uint8_t
    constexpr std::ptrdiff_t m_nChangeCount = 0x1021; // uint8_t
    constexpr std::ptrdiff_t m_Width = 0x1024; // float
    constexpr std::ptrdiff_t m_PhysicsDelegate = 0x1028; // C_RopeKeyframe::CPhysicsDelegate
    constexpr std::ptrdiff_t m_hMaterial = 0x1038; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_TextureHeight = 0x1040; // int32_t
    constexpr std::ptrdiff_t m_vecImpulse = 0x1044; // Vector
    constexpr std::ptrdiff_t m_vecPreviousImpulse = 0x1050; // Vector
    constexpr std::ptrdiff_t m_flCurrentGustTimer = 0x105C; // float
    constexpr std::ptrdiff_t m_flCurrentGustLifetime = 0x1060; // float
    constexpr std::ptrdiff_t m_flTimeToNextGust = 0x1064; // float
    constexpr std::ptrdiff_t m_vWindDir = 0x1068; // Vector
    constexpr std::ptrdiff_t m_vColorMod = 0x1074; // Vector
    constexpr std::ptrdiff_t m_vCachedEndPointAttachmentPos = 0x1080; // Vector[2]
    constexpr std::ptrdiff_t m_vCachedEndPointAttachmentAngle = 0x1098; // QAngle[2]
    constexpr std::ptrdiff_t m_bConstrainBetweenEndpoints = 0x10B0; // bool
    constexpr std::ptrdiff_t m_bEndPointAttachmentPositionsDirty = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bEndPointAttachmentAnglesDirty = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bNewDataThisFrame = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bPhysicsInitted = 0x0; // bitfield:1
}

namespace C_RopeKeyframe_CPhysicsDelegate {
    constexpr std::ptrdiff_t m_pKeyframe = 0x8; // C_RopeKeyframe*
}

namespace C_SceneEntity { // C_PointEntity
    constexpr std::ptrdiff_t m_bIsPlayingBack = 0x558; // bool
    constexpr std::ptrdiff_t m_bPaused = 0x559; // bool
    constexpr std::ptrdiff_t m_bMultiplayer = 0x55A; // bool
    constexpr std::ptrdiff_t m_bAutogenerated = 0x55B; // bool
    constexpr std::ptrdiff_t m_flForceClientTime = 0x55C; // float
    constexpr std::ptrdiff_t m_nSceneStringIndex = 0x560; // uint16_t
    constexpr std::ptrdiff_t m_bClientOnly = 0x562; // bool
    constexpr std::ptrdiff_t m_hOwner = 0x564; // CHandle<C_BaseFlex>
    constexpr std::ptrdiff_t m_hActorList = 0x568; // C_NetworkUtlVectorBase<CHandle<C_BaseFlex>>
    constexpr std::ptrdiff_t m_bWasPlaying = 0x580; // bool
    constexpr std::ptrdiff_t m_QueuedEvents = 0x590; // CUtlVector<C_SceneEntity::QueuedEvents_t>
    constexpr std::ptrdiff_t m_flCurrentTime = 0x5A8; // float
}

namespace C_SceneEntity_QueuedEvents_t {
    constexpr std::ptrdiff_t starttime = 0x0; // float
}

namespace C_SensorGrenade { // C_BaseCSGrenade
}

namespace C_SensorGrenadeProjectile { // C_BaseCSGrenadeProjectile
}

namespace C_ShatterGlassShardPhysics { // C_PhysicsProp
    constexpr std::ptrdiff_t m_ShardDesc = 0x1038; // shard_model_desc_t
}

namespace C_SingleplayRules { // C_GameRules
}

namespace C_SkyCamera { // C_BaseEntity
    constexpr std::ptrdiff_t m_skyboxData = 0x550; // sky3dparams_t
    constexpr std::ptrdiff_t m_skyboxSlotToken = 0x5E0; // CUtlStringToken
    constexpr std::ptrdiff_t m_bUseAngles = 0x5E4; // bool
    constexpr std::ptrdiff_t m_pNext = 0x5E8; // C_SkyCamera*
}

namespace C_SmokeGrenade { // C_BaseCSGrenade
}

namespace C_SmokeGrenadeProjectile { // C_BaseCSGrenadeProjectile
    constexpr std::ptrdiff_t m_nSmokeEffectTickBegin = 0x1160; // int32_t
    constexpr std::ptrdiff_t m_bDidSmokeEffect = 0x1164; // bool
    constexpr std::ptrdiff_t m_nRandomSeed = 0x1168; // int32_t
    constexpr std::ptrdiff_t m_vSmokeColor = 0x116C; // Vector
    constexpr std::ptrdiff_t m_vSmokeDetonationPos = 0x1178; // Vector
    constexpr std::ptrdiff_t m_VoxelFrameData = 0x1188; // CUtlVector<uint8_t>
    constexpr std::ptrdiff_t m_bSmokeVolumeDataReceived = 0x11A0; // bool
    constexpr std::ptrdiff_t m_bSmokeEffectSpawned = 0x11A1; // bool
}

namespace C_SoundAreaEntityBase { // C_BaseEntity
    constexpr std::ptrdiff_t m_bDisabled = 0x550; // bool
    constexpr std::ptrdiff_t m_bWasEnabled = 0x558; // bool
    constexpr std::ptrdiff_t m_iszSoundAreaType = 0x560; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_vPos = 0x568; // Vector
}

namespace C_SoundAreaEntityOrientedBox { // C_SoundAreaEntityBase
    constexpr std::ptrdiff_t m_vMin = 0x578; // Vector
    constexpr std::ptrdiff_t m_vMax = 0x584; // Vector
}

namespace C_SoundAreaEntitySphere { // C_SoundAreaEntityBase
    constexpr std::ptrdiff_t m_flRadius = 0x578; // float
}

namespace C_SoundOpvarSetAABBEntity { // C_SoundOpvarSetPointEntity
}

namespace C_SoundOpvarSetAutoRoomEntity { // C_SoundOpvarSetPointEntity
}

namespace C_SoundOpvarSetOBBEntity { // C_SoundOpvarSetAABBEntity
}

namespace C_SoundOpvarSetOBBWindEntity { // C_SoundOpvarSetPointBase
}

namespace C_SoundOpvarSetPathCornerEntity { // C_SoundOpvarSetPointEntity
}

namespace C_SoundOpvarSetPointBase { // C_BaseEntity
    constexpr std::ptrdiff_t m_iszStackName = 0x550; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOperatorName = 0x558; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOpvarName = 0x560; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iOpvarIndex = 0x568; // int32_t
    constexpr std::ptrdiff_t m_bUseAutoCompare = 0x56C; // bool
}

namespace C_SoundOpvarSetPointEntity { // C_SoundOpvarSetPointBase
}

namespace C_SpotlightEnd { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_flLightScale = 0xCD0; // float
    constexpr std::ptrdiff_t m_Radius = 0xCD4; // float
}

namespace C_Sprite { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_hSpriteMaterial = 0xCE8; // CStrongHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_hAttachedToEntity = 0xCF0; // CHandle<C_BaseEntity>
    constexpr std::ptrdiff_t m_nAttachment = 0xCF4; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_flSpriteFramerate = 0xCF8; // float
    constexpr std::ptrdiff_t m_flFrame = 0xCFC; // float
    constexpr std::ptrdiff_t m_flDieTime = 0xD00; // GameTime_t
    constexpr std::ptrdiff_t m_nBrightness = 0xD10; // uint32_t
    constexpr std::ptrdiff_t m_flBrightnessDuration = 0xD14; // float
    constexpr std::ptrdiff_t m_flSpriteScale = 0xD18; // float
    constexpr std::ptrdiff_t m_flScaleDuration = 0xD1C; // float
    constexpr std::ptrdiff_t m_bWorldSpaceScale = 0xD20; // bool
    constexpr std::ptrdiff_t m_flGlowProxySize = 0xD24; // float
    constexpr std::ptrdiff_t m_flHDRColorScale = 0xD28; // float
    constexpr std::ptrdiff_t m_flLastTime = 0xD2C; // GameTime_t
    constexpr std::ptrdiff_t m_flMaxFrame = 0xD30; // float
    constexpr std::ptrdiff_t m_flStartScale = 0xD34; // float
    constexpr std::ptrdiff_t m_flDestScale = 0xD38; // float
    constexpr std::ptrdiff_t m_flScaleTimeStart = 0xD3C; // GameTime_t
    constexpr std::ptrdiff_t m_nStartBrightness = 0xD40; // int32_t
    constexpr std::ptrdiff_t m_nDestBrightness = 0xD44; // int32_t
    constexpr std::ptrdiff_t m_flBrightnessTimeStart = 0xD48; // GameTime_t
    constexpr std::ptrdiff_t m_hOldSpriteMaterial = 0xD50; // CWeakHandle<InfoForResourceTypeIMaterial2>
    constexpr std::ptrdiff_t m_nSpriteWidth = 0xDF8; // int32_t
    constexpr std::ptrdiff_t m_nSpriteHeight = 0xDFC; // int32_t
}

namespace C_SpriteOriented { // C_Sprite
}

namespace C_Sun { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_fxSSSunFlareEffectIndex = 0xCD0; // ParticleIndex_t
    constexpr std::ptrdiff_t m_fxSunFlareEffectIndex = 0xCD4; // ParticleIndex_t
    constexpr std::ptrdiff_t m_fdistNormalize = 0xCD8; // float
    constexpr std::ptrdiff_t m_vSunPos = 0xCDC; // Vector
    constexpr std::ptrdiff_t m_vDirection = 0xCE8; // Vector
    constexpr std::ptrdiff_t m_iszEffectName = 0xCF8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSSEffectName = 0xD00; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_clrOverlay = 0xD08; // Color
    constexpr std::ptrdiff_t m_bOn = 0xD0C; // bool
    constexpr std::ptrdiff_t m_bmaxColor = 0xD0D; // bool
    constexpr std::ptrdiff_t m_flSize = 0xD10; // float
    constexpr std::ptrdiff_t m_flHazeScale = 0xD14; // float
    constexpr std::ptrdiff_t m_flRotation = 0xD18; // float
    constexpr std::ptrdiff_t m_flHDRColorScale = 0xD1C; // float
    constexpr std::ptrdiff_t m_flAlphaHaze = 0xD20; // float
    constexpr std::ptrdiff_t m_flAlphaScale = 0xD24; // float
    constexpr std::ptrdiff_t m_flAlphaHdr = 0xD28; // float
    constexpr std::ptrdiff_t m_flFarZScale = 0xD2C; // float
}

namespace C_SunGlowOverlay { // CGlowOverlay
    constexpr std::ptrdiff_t m_bModulateByDot = 0xD0; // bool
}

namespace C_Team { // C_BaseEntity
    constexpr std::ptrdiff_t m_aPlayerControllers = 0x550; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
    constexpr std::ptrdiff_t m_aPlayers = 0x568; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
    constexpr std::ptrdiff_t m_iScore = 0x580; // int32_t
    constexpr std::ptrdiff_t m_szTeamname = 0x584; // char[129]
}

namespace C_TeamRoundTimer { // C_BaseEntity
    constexpr std::ptrdiff_t m_bTimerPaused = 0x550; // bool
    constexpr std::ptrdiff_t m_flTimeRemaining = 0x554; // float
    constexpr std::ptrdiff_t m_flTimerEndTime = 0x558; // GameTime_t
    constexpr std::ptrdiff_t m_bIsDisabled = 0x55C; // bool
    constexpr std::ptrdiff_t m_bShowInHUD = 0x55D; // bool
    constexpr std::ptrdiff_t m_nTimerLength = 0x560; // int32_t
    constexpr std::ptrdiff_t m_nTimerInitialLength = 0x564; // int32_t
    constexpr std::ptrdiff_t m_nTimerMaxLength = 0x568; // int32_t
    constexpr std::ptrdiff_t m_bAutoCountdown = 0x56C; // bool
    constexpr std::ptrdiff_t m_nSetupTimeLength = 0x570; // int32_t
    constexpr std::ptrdiff_t m_nState = 0x574; // int32_t
    constexpr std::ptrdiff_t m_bStartPaused = 0x578; // bool
    constexpr std::ptrdiff_t m_bInCaptureWatchState = 0x579; // bool
    constexpr std::ptrdiff_t m_flTotalTime = 0x57C; // float
    constexpr std::ptrdiff_t m_bStopWatchTimer = 0x580; // bool
    constexpr std::ptrdiff_t m_bFireFinished = 0x581; // bool
    constexpr std::ptrdiff_t m_bFire5MinRemain = 0x582; // bool
    constexpr std::ptrdiff_t m_bFire4MinRemain = 0x583; // bool
    constexpr std::ptrdiff_t m_bFire3MinRemain = 0x584; // bool
    constexpr std::ptrdiff_t m_bFire2MinRemain = 0x585; // bool
    constexpr std::ptrdiff_t m_bFire1MinRemain = 0x586; // bool
    constexpr std::ptrdiff_t m_bFire30SecRemain = 0x587; // bool
    constexpr std::ptrdiff_t m_bFire10SecRemain = 0x588; // bool
    constexpr std::ptrdiff_t m_bFire5SecRemain = 0x589; // bool
    constexpr std::ptrdiff_t m_bFire4SecRemain = 0x58A; // bool
    constexpr std::ptrdiff_t m_bFire3SecRemain = 0x58B; // bool
    constexpr std::ptrdiff_t m_bFire2SecRemain = 0x58C; // bool
    constexpr std::ptrdiff_t m_bFire1SecRemain = 0x58D; // bool
    constexpr std::ptrdiff_t m_nOldTimerLength = 0x590; // int32_t
    constexpr std::ptrdiff_t m_nOldTimerState = 0x594; // int32_t
}

namespace C_TeamplayRules { // C_MultiplayRules
}

namespace C_TextureBasedAnimatable { // C_BaseModelEntity
    constexpr std::ptrdiff_t m_bLoop = 0xCD0; // bool
    constexpr std::ptrdiff_t m_flFPS = 0xCD4; // float
    constexpr std::ptrdiff_t m_hPositionKeys = 0xCD8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_hRotationKeys = 0xCE0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    constexpr std::ptrdiff_t m_vAnimationBoundsMin = 0xCE8; // Vector
    constexpr std::ptrdiff_t m_vAnimationBoundsMax = 0xCF4; // Vector
    constexpr std::ptrdiff_t m_flStartTime = 0xD00; // float
    constexpr std::ptrdiff_t m_flStartFrame = 0xD04; // float
}

namespace C_TintController { // C_BaseEntity
}

namespace C_TonemapController2 { // C_BaseEntity
    constexpr std::ptrdiff_t m_flAutoExposureMin = 0x550; // float
    constexpr std::ptrdiff_t m_flAutoExposureMax = 0x554; // float
    constexpr std::ptrdiff_t m_flTonemapPercentTarget = 0x558; // float
    constexpr std::ptrdiff_t m_flTonemapPercentBrightPixels = 0x55C; // float
    constexpr std::ptrdiff_t m_flTonemapMinAvgLum = 0x560; // float
    constexpr std::ptrdiff_t m_flExposureAdaptationSpeedUp = 0x564; // float
    constexpr std::ptrdiff_t m_flExposureAdaptationSpeedDown = 0x568; // float
    constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x56C; // float
}

namespace C_TonemapController2Alias_env_tonemap_controller2 { // C_TonemapController2
}

namespace C_TriggerBuoyancy { // C_BaseTrigger
    constexpr std::ptrdiff_t m_BuoyancyHelper = 0xCD8; // CBuoyancyHelper
    constexpr std::ptrdiff_t m_flFluidDensity = 0xCF8; // float
}

namespace C_TriggerLerpObject { // C_BaseTrigger
}

namespace C_TriggerMultiple { // C_BaseTrigger
}

namespace C_TriggerPhysics { // C_BaseTrigger
    constexpr std::ptrdiff_t m_gravityScale = 0xCD8; // float
    constexpr std::ptrdiff_t m_linearLimit = 0xCDC; // float
    constexpr std::ptrdiff_t m_linearDamping = 0xCE0; // float
    constexpr std::ptrdiff_t m_angularLimit = 0xCE4; // float
    constexpr std::ptrdiff_t m_angularDamping = 0xCE8; // float
    constexpr std::ptrdiff_t m_linearForce = 0xCEC; // float
    constexpr std::ptrdiff_t m_flFrequency = 0xCF0; // float
    constexpr std::ptrdiff_t m_flDampingRatio = 0xCF4; // float
    constexpr std::ptrdiff_t m_vecLinearForcePointAt = 0xCF8; // Vector
    constexpr std::ptrdiff_t m_bCollapseToForcePoint = 0xD04; // bool
    constexpr std::ptrdiff_t m_vecLinearForcePointAtWorld = 0xD08; // Vector
    constexpr std::ptrdiff_t m_vecLinearForceDirection = 0xD14; // Vector
    constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0xD20; // bool
}

namespace C_TriggerVolume { // C_BaseModelEntity
}

namespace C_ViewmodelAttachmentModel { // CBaseAnimGraph
}

namespace C_ViewmodelWeapon { // CBaseAnimGraph
    constexpr std::ptrdiff_t m_worldModel = 0xED8; // char*
}

namespace C_VoteController { // C_BaseEntity
    constexpr std::ptrdiff_t m_iActiveIssueIndex = 0x560; // int32_t
    constexpr std::ptrdiff_t m_iOnlyTeamToVote = 0x564; // int32_t
    constexpr std::ptrdiff_t m_nVoteOptionCount = 0x568; // int32_t[5]
    constexpr std::ptrdiff_t m_nPotentialVotes = 0x57C; // int32_t
    constexpr std::ptrdiff_t m_bVotesDirty = 0x580; // bool
    constexpr std::ptrdiff_t m_bTypeDirty = 0x581; // bool
    constexpr std::ptrdiff_t m_bIsYesNoVote = 0x582; // bool
}

namespace C_WaterBullet { // CBaseAnimGraph
}

namespace C_WeaponAWP { // C_CSWeaponBaseGun
}

namespace C_WeaponAug { // C_CSWeaponBaseGun
}

namespace C_WeaponBaseItem { // C_CSWeaponBase
    constexpr std::ptrdiff_t m_SequenceCompleteTimer = 0x1A70; // CountdownTimer
    constexpr std::ptrdiff_t m_bRedraw = 0x1A88; // bool
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
    constexpr std::ptrdiff_t m_flDisplayHealth = 0x1A90; // float
}

namespace C_WeaponTaser { // C_CSWeaponBaseGun
    constexpr std::ptrdiff_t m_fFireTime = 0x1A90; // GameTime_t
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

namespace SequenceHistory_t {
    constexpr std::ptrdiff_t m_hSequence = 0x0; // HSequence
    constexpr std::ptrdiff_t m_flSeqStartTime = 0x4; // GameTime_t
    constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x8; // float
    constexpr std::ptrdiff_t m_nSeqLoopMode = 0xC; // AnimLoopMode_t
    constexpr std::ptrdiff_t m_flPlaybackRate = 0x10; // float
    constexpr std::ptrdiff_t m_flCyclesPerSecond = 0x14; // float
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