/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 23 Mar 2024 05:02:04 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod ActiveModelConfig_t {
    pub const m_Handle: usize = 0x28; // ModelConfigHandle_t
    pub const m_Name: usize = 0x30; // CUtlSymbolLarge
    pub const m_AssociatedEntities: usize = 0x38; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
    pub const m_AssociatedEntityNames: usize = 0x50; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
}

pub mod CAnimGraphNetworkedVariables {
    pub const m_PredNetBoolVariables: usize = 0x8; // C_NetworkUtlVectorBase<uint32_t>
    pub const m_PredNetByteVariables: usize = 0x20; // C_NetworkUtlVectorBase<uint8_t>
    pub const m_PredNetUInt16Variables: usize = 0x38; // C_NetworkUtlVectorBase<uint16_t>
    pub const m_PredNetIntVariables: usize = 0x50; // C_NetworkUtlVectorBase<int32_t>
    pub const m_PredNetUInt32Variables: usize = 0x68; // C_NetworkUtlVectorBase<uint32_t>
    pub const m_PredNetUInt64Variables: usize = 0x80; // C_NetworkUtlVectorBase<uint64_t>
    pub const m_PredNetFloatVariables: usize = 0x98; // C_NetworkUtlVectorBase<float>
    pub const m_PredNetVectorVariables: usize = 0xB0; // C_NetworkUtlVectorBase<Vector>
    pub const m_PredNetQuaternionVariables: usize = 0xC8; // C_NetworkUtlVectorBase<Quaternion>
    pub const m_PredNetGlobalSymbolVariables: usize = 0xE0; // C_NetworkUtlVectorBase<CGlobalSymbol>
    pub const m_OwnerOnlyPredNetBoolVariables: usize = 0xF8; // C_NetworkUtlVectorBase<uint32_t>
    pub const m_OwnerOnlyPredNetByteVariables: usize = 0x110; // C_NetworkUtlVectorBase<uint8_t>
    pub const m_OwnerOnlyPredNetUInt16Variables: usize = 0x128; // C_NetworkUtlVectorBase<uint16_t>
    pub const m_OwnerOnlyPredNetIntVariables: usize = 0x140; // C_NetworkUtlVectorBase<int32_t>
    pub const m_OwnerOnlyPredNetUInt32Variables: usize = 0x158; // C_NetworkUtlVectorBase<uint32_t>
    pub const m_OwnerOnlyPredNetUInt64Variables: usize = 0x170; // C_NetworkUtlVectorBase<uint64_t>
    pub const m_OwnerOnlyPredNetFloatVariables: usize = 0x188; // C_NetworkUtlVectorBase<float>
    pub const m_OwnerOnlyPredNetVectorVariables: usize = 0x1A0; // C_NetworkUtlVectorBase<Vector>
    pub const m_OwnerOnlyPredNetQuaternionVariables: usize = 0x1B8; // C_NetworkUtlVectorBase<Quaternion>
    pub const m_OwnerOnlyPredNetGlobalSymbolVariables: usize = 0x1D0; // C_NetworkUtlVectorBase<CGlobalSymbol>
    pub const m_nBoolVariablesCount: usize = 0x1E8; // int32_t
    pub const m_nOwnerOnlyBoolVariablesCount: usize = 0x1EC; // int32_t
    pub const m_nRandomSeedOffset: usize = 0x1F0; // int32_t
    pub const m_flLastTeleportTime: usize = 0x1F4; // float
}

pub mod CAttributeList {
    pub const m_Attributes: usize = 0x8; // C_UtlVectorEmbeddedNetworkVar<CEconItemAttribute>
    pub const m_pManager: usize = 0x58; // CAttributeManager*
}

pub mod CAttributeManager {
    pub const m_Providers: usize = 0x8; // CUtlVector<CHandle<C_BaseEntity>>
    pub const m_iReapplyProvisionParity: usize = 0x20; // int32_t
    pub const m_hOuter: usize = 0x24; // CHandle<C_BaseEntity>
    pub const m_bPreventLoopback: usize = 0x28; // bool
    pub const m_ProviderType: usize = 0x2C; // attributeprovidertypes_t
    pub const m_CachedResults: usize = 0x30; // CUtlVector<CAttributeManager::cached_attribute_float_t>
}

pub mod CAttributeManager_cached_attribute_float_t {
    pub const flIn: usize = 0x0; // float
    pub const iAttribHook: usize = 0x8; // CUtlSymbolLarge
    pub const flOut: usize = 0x10; // float
}

pub mod CBaseAnimGraph { // C_BaseModelEntity
    pub const m_bInitiallyPopulateInterpHistory: usize = 0xD48; // bool
    pub const m_bSuppressAnimEventSounds: usize = 0xD4A; // bool
    pub const m_bAnimGraphUpdateEnabled: usize = 0xD58; // bool
    pub const m_flMaxSlopeDistance: usize = 0xD5C; // float
    pub const m_vLastSlopeCheckPos: usize = 0xD60; // Vector
    pub const m_bAnimationUpdateScheduled: usize = 0xD6C; // bool
    pub const m_vecForce: usize = 0xD70; // Vector
    pub const m_nForceBone: usize = 0xD7C; // int32_t
    pub const m_pClientsideRagdoll: usize = 0xD80; // CBaseAnimGraph*
    pub const m_bBuiltRagdoll: usize = 0xD88; // bool
    pub const m_pRagdollPose: usize = 0xDA0; // PhysicsRagdollPose_t*
    pub const m_bClientRagdoll: usize = 0xDA8; // bool
    pub const m_bHasAnimatedMaterialAttributes: usize = 0xDB8; // bool
}

pub mod CBaseAnimGraphController { // CSkeletonAnimationController
    pub const m_animGraphNetworkedVars: usize = 0x18; // CAnimGraphNetworkedVariables
    pub const m_bSequenceFinished: usize = 0x14A8; // bool
    pub const m_flSoundSyncTime: usize = 0x14AC; // float
    pub const m_hSequence: usize = 0x14B0; // HSequence
    pub const m_flSeqStartTime: usize = 0x14B4; // GameTime_t
    pub const m_flSeqFixedCycle: usize = 0x14B8; // float
    pub const m_nAnimLoopMode: usize = 0x14BC; // AnimLoopMode_t
    pub const m_flPlaybackRate: usize = 0x14C0; // CNetworkedQuantizedFloat
    pub const m_nNotifyState: usize = 0x14CC; // SequenceFinishNotifyState_t
    pub const m_bNetworkedAnimationInputsChanged: usize = 0x14CE; // bool
    pub const m_bNetworkedSequenceChanged: usize = 0x14CF; // bool
    pub const m_bLastUpdateSkipped: usize = 0x14D0; // bool
    pub const m_flPrevAnimUpdateTime: usize = 0x14D4; // GameTime_t
}

pub mod CBasePlayerController { // C_BaseEntity
    pub const m_nFinalPredictedTick: usize = 0x558; // int32_t
    pub const m_CommandContext: usize = 0x560; // C_CommandContext
    pub const m_nInButtonsWhichAreToggles: usize = 0x5F8; // uint64_t
    pub const m_nTickBase: usize = 0x600; // uint32_t
    pub const m_hPawn: usize = 0x604; // CHandle<C_BasePlayerPawn>
    pub const m_hPredictedPawn: usize = 0x608; // CHandle<C_BasePlayerPawn>
    pub const m_nSplitScreenSlot: usize = 0x60C; // CSplitScreenSlot
    pub const m_hSplitOwner: usize = 0x610; // CHandle<CBasePlayerController>
    pub const m_hSplitScreenPlayers: usize = 0x618; // CUtlVector<CHandle<CBasePlayerController>>
    pub const m_bIsHLTV: usize = 0x630; // bool
    pub const m_iConnected: usize = 0x634; // PlayerConnectedState
    pub const m_iszPlayerName: usize = 0x638; // char[128]
    pub const m_steamID: usize = 0x6C0; // uint64_t
    pub const m_bIsLocalPlayerController: usize = 0x6C8; // bool
    pub const m_iDesiredFOV: usize = 0x6CC; // uint32_t
}

pub mod CBasePlayerControllerAPI {
}

pub mod CBasePlayerVData { // CEntitySubclassVDataBase
    pub const m_sModelName: usize = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    pub const m_flHeadDamageMultiplier: usize = 0x108; // CSkillFloat
    pub const m_flChestDamageMultiplier: usize = 0x118; // CSkillFloat
    pub const m_flStomachDamageMultiplier: usize = 0x128; // CSkillFloat
    pub const m_flArmDamageMultiplier: usize = 0x138; // CSkillFloat
    pub const m_flLegDamageMultiplier: usize = 0x148; // CSkillFloat
    pub const m_flHoldBreathTime: usize = 0x158; // float
    pub const m_flDrowningDamageInterval: usize = 0x15C; // float
    pub const m_nDrowningDamageInitial: usize = 0x160; // int32_t
    pub const m_nDrowningDamageMax: usize = 0x164; // int32_t
    pub const m_nWaterSpeed: usize = 0x168; // int32_t
    pub const m_flUseRange: usize = 0x16C; // float
    pub const m_flUseAngleTolerance: usize = 0x170; // float
    pub const m_flCrouchTime: usize = 0x174; // float
}

pub mod CBasePlayerWeaponVData { // CEntitySubclassVDataBase
    pub const m_szWorldModel: usize = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    pub const m_bBuiltRightHanded: usize = 0x108; // bool
    pub const m_bAllowFlipping: usize = 0x109; // bool
    pub const m_sMuzzleAttachment: usize = 0x110; // CUtlString
    pub const m_szMuzzleFlashParticle: usize = 0x118; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    pub const m_iFlags: usize = 0x1F8; // ItemFlagTypes_t
    pub const m_nPrimaryAmmoType: usize = 0x1F9; // AmmoIndex_t
    pub const m_nSecondaryAmmoType: usize = 0x1FA; // AmmoIndex_t
    pub const m_iMaxClip1: usize = 0x1FC; // int32_t
    pub const m_iMaxClip2: usize = 0x200; // int32_t
    pub const m_iDefaultClip1: usize = 0x204; // int32_t
    pub const m_iDefaultClip2: usize = 0x208; // int32_t
    pub const m_iWeight: usize = 0x20C; // int32_t
    pub const m_bAutoSwitchTo: usize = 0x210; // bool
    pub const m_bAutoSwitchFrom: usize = 0x211; // bool
    pub const m_iRumbleEffect: usize = 0x214; // RumbleEffect_t
    pub const m_bLinkedCooldowns: usize = 0x218; // bool
    pub const m_aShootSounds: usize = 0x220; // CUtlMap<WeaponSound_t,CSoundEventName>
    pub const m_iSlot: usize = 0x240; // int32_t
    pub const m_iPosition: usize = 0x244; // int32_t
}

pub mod CBaseProp { // CBaseAnimGraph
    pub const m_bModelOverrodeBlockLOS: usize = 0xED8; // bool
    pub const m_iShapeType: usize = 0xEDC; // int32_t
    pub const m_bConformToCollisionBounds: usize = 0xEE0; // bool
    pub const m_mPreferredCatchTransform: usize = 0xEE4; // matrix3x4_t
}

pub mod CBodyComponent { // CEntityComponent
    pub const m_pSceneNode: usize = 0x8; // CGameSceneNode*
    pub const __m_pChainEntity: usize = 0x20; // CNetworkVarChainer
}

pub mod CBodyComponentBaseAnimGraph { // CBodyComponentSkeletonInstance
    pub const m_animationController: usize = 0x460; // CBaseAnimGraphController
    pub const __m_pChainEntity: usize = 0x1C28; // CNetworkVarChainer
}

pub mod CBodyComponentBaseModelEntity { // CBodyComponentSkeletonInstance
    pub const __m_pChainEntity: usize = 0x460; // CNetworkVarChainer
}

pub mod CBodyComponentPoint { // CBodyComponent
    pub const m_sceneNode: usize = 0x50; // CGameSceneNode
    pub const __m_pChainEntity: usize = 0x1A0; // CNetworkVarChainer
}

pub mod CBodyComponentSkeletonInstance { // CBodyComponent
    pub const m_skeletonInstance: usize = 0x50; // CSkeletonInstance
    pub const __m_pChainEntity: usize = 0x430; // CNetworkVarChainer
}

pub mod CBombTarget { // C_BaseTrigger
    pub const m_bBombPlantedHere: usize = 0xCD8; // bool
}

pub mod CBreachCharge { // C_CSWeaponBase
}

pub mod CBreachChargeProjectile { // C_BaseGrenade
}

pub mod CBumpMine { // C_CSWeaponBase
}

pub mod CBumpMineProjectile { // C_BaseGrenade
}

pub mod CBuoyancyHelper {
    pub const m_flFluidDensity: usize = 0x18; // float
}

pub mod CCSArmsRaceScript { // CCSGameModeScript
    pub const m_pOuter: usize = 0xD8; // CCSGameModeRules_ArmsRace*
}

pub mod CCSDeathmatchScript { // CCSGameModeScript
    pub const m_pOuter: usize = 0xD8; // CCSGameModeRules_Deathmatch*
}

pub mod CCSGO_WingmanIntroCharacterPosition { // C_CSGO_TeamIntroCharacterPosition
}

pub mod CCSGO_WingmanIntroCounterTerroristPosition { // CCSGO_WingmanIntroCharacterPosition
}

pub mod CCSGO_WingmanIntroTerroristPosition { // CCSGO_WingmanIntroCharacterPosition
}

pub mod CCSGameModeRules {
    pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
}

pub mod CCSGameModeRules_ArmsRace { // CCSGameModeRules
    pub const m_WeaponSequence: usize = 0x38; // C_NetworkUtlVectorBase<CUtlString>
}

pub mod CCSGameModeRules_Deathmatch { // CCSGameModeRules
    pub const m_flDMBonusStartTime: usize = 0x38; // GameTime_t
    pub const m_flDMBonusTimeLength: usize = 0x3C; // float
    pub const m_nDMBonusWeaponLoadoutSlot: usize = 0x40; // int16_t
}

pub mod CCSGameModeRules_Noop { // CCSGameModeRules
}

pub mod CCSGameModeScript { // CBasePulseGraphInstance
}

pub mod CCSObserver_CameraServices { // CCSPlayerBase_CameraServices
}

pub mod CCSObserver_MovementServices { // CPlayer_MovementServices
}

pub mod CCSObserver_ObserverServices { // CPlayer_ObserverServices
    pub const m_hLastObserverTarget: usize = 0x58; // CEntityHandle
    pub const m_vecObserverInterpolateOffset: usize = 0x5C; // Vector
    pub const m_vecObserverInterpStartPos: usize = 0x68; // Vector
    pub const m_flObsInterp_PathLength: usize = 0x74; // float
    pub const m_qObsInterp_OrientationStart: usize = 0x80; // Quaternion
    pub const m_qObsInterp_OrientationTravelDir: usize = 0x90; // Quaternion
    pub const m_obsInterpState: usize = 0xA0; // ObserverInterpState_t
    pub const m_bObserverInterpolationNeedsDeferredSetup: usize = 0xA4; // bool
}

pub mod CCSObserver_UseServices { // CPlayer_UseServices
}

pub mod CCSObserver_ViewModelServices { // CPlayer_ViewModelServices
}

pub mod CCSPlayerBase_CameraServices { // CPlayer_CameraServices
    pub const m_iFOV: usize = 0x210; // uint32_t
    pub const m_iFOVStart: usize = 0x214; // uint32_t
    pub const m_flFOVTime: usize = 0x218; // GameTime_t
    pub const m_flFOVRate: usize = 0x21C; // float
    pub const m_hZoomOwner: usize = 0x220; // CHandle<C_BaseEntity>
    pub const m_flLastShotFOV: usize = 0x224; // float
}

pub mod CCSPlayerController { // CBasePlayerController
    pub const m_pInGameMoneyServices: usize = 0x6F8; // CCSPlayerController_InGameMoneyServices*
    pub const m_pInventoryServices: usize = 0x700; // CCSPlayerController_InventoryServices*
    pub const m_pActionTrackingServices: usize = 0x708; // CCSPlayerController_ActionTrackingServices*
    pub const m_pDamageServices: usize = 0x710; // CCSPlayerController_DamageServices*
    pub const m_iPing: usize = 0x718; // uint32_t
    pub const m_bHasCommunicationAbuseMute: usize = 0x71C; // bool
    pub const m_szCrosshairCodes: usize = 0x720; // CUtlSymbolLarge
    pub const m_iPendingTeamNum: usize = 0x728; // uint8_t
    pub const m_flForceTeamTime: usize = 0x72C; // GameTime_t
    pub const m_iCompTeammateColor: usize = 0x730; // int32_t
    pub const m_bEverPlayedOnTeam: usize = 0x734; // bool
    pub const m_flPreviousForceJoinTeamTime: usize = 0x738; // GameTime_t
    pub const m_szClan: usize = 0x740; // CUtlSymbolLarge
    pub const m_sSanitizedPlayerName: usize = 0x748; // CUtlString
    pub const m_iCoachingTeam: usize = 0x750; // int32_t
    pub const m_nPlayerDominated: usize = 0x758; // uint64_t
    pub const m_nPlayerDominatingMe: usize = 0x760; // uint64_t
    pub const m_iCompetitiveRanking: usize = 0x768; // int32_t
    pub const m_iCompetitiveWins: usize = 0x76C; // int32_t
    pub const m_iCompetitiveRankType: usize = 0x770; // int8_t
    pub const m_iCompetitiveRankingPredicted_Win: usize = 0x774; // int32_t
    pub const m_iCompetitiveRankingPredicted_Loss: usize = 0x778; // int32_t
    pub const m_iCompetitiveRankingPredicted_Tie: usize = 0x77C; // int32_t
    pub const m_nEndMatchNextMapVote: usize = 0x780; // int32_t
    pub const m_unActiveQuestId: usize = 0x784; // uint16_t
    pub const m_nQuestProgressReason: usize = 0x788; // QuestProgress::Reason
    pub const m_unPlayerTvControlFlags: usize = 0x78C; // uint32_t
    pub const m_iDraftIndex: usize = 0x7B8; // int32_t
    pub const m_msQueuedModeDisconnectionTimestamp: usize = 0x7BC; // uint32_t
    pub const m_uiAbandonRecordedReason: usize = 0x7C0; // uint32_t
    pub const m_bCannotBeKicked: usize = 0x7C4; // bool
    pub const m_bEverFullyConnected: usize = 0x7C5; // bool
    pub const m_bAbandonAllowsSurrender: usize = 0x7C6; // bool
    pub const m_bAbandonOffersInstantSurrender: usize = 0x7C7; // bool
    pub const m_bDisconnection1MinWarningPrinted: usize = 0x7C8; // bool
    pub const m_bScoreReported: usize = 0x7C9; // bool
    pub const m_nDisconnectionTick: usize = 0x7CC; // int32_t
    pub const m_bControllingBot: usize = 0x7D8; // bool
    pub const m_bHasControlledBotThisRound: usize = 0x7D9; // bool
    pub const m_bHasBeenControlledByPlayerThisRound: usize = 0x7DA; // bool
    pub const m_nBotsControlledThisRound: usize = 0x7DC; // int32_t
    pub const m_bCanControlObservedBot: usize = 0x7E0; // bool
    pub const m_hPlayerPawn: usize = 0x7E4; // CHandle<C_CSPlayerPawn>
    pub const m_hObserverPawn: usize = 0x7E8; // CHandle<C_CSObserverPawn>
    pub const m_bPawnIsAlive: usize = 0x7EC; // bool
    pub const m_iPawnHealth: usize = 0x7F0; // uint32_t
    pub const m_iPawnArmor: usize = 0x7F4; // int32_t
    pub const m_bPawnHasDefuser: usize = 0x7F8; // bool
    pub const m_bPawnHasHelmet: usize = 0x7F9; // bool
    pub const m_nPawnCharacterDefIndex: usize = 0x7FA; // uint16_t
    pub const m_iPawnLifetimeStart: usize = 0x7FC; // int32_t
    pub const m_iPawnLifetimeEnd: usize = 0x800; // int32_t
    pub const m_iPawnBotDifficulty: usize = 0x804; // int32_t
    pub const m_hOriginalControllerOfCurrentPawn: usize = 0x808; // CHandle<CCSPlayerController>
    pub const m_iScore: usize = 0x80C; // int32_t
    pub const m_vecKills: usize = 0x810; // C_NetworkUtlVectorBase<EKillTypes_t>
    pub const m_bMvpNoMusic: usize = 0x828; // bool
    pub const m_eMvpReason: usize = 0x82C; // int32_t
    pub const m_iMusicKitID: usize = 0x830; // int32_t
    pub const m_iMusicKitMVPs: usize = 0x834; // int32_t
    pub const m_iMVPs: usize = 0x838; // int32_t
    pub const m_bIsPlayerNameDirty: usize = 0x83C; // bool
}

pub mod CCSPlayerControllerAPI {
}

pub mod CCSPlayerController_ActionTrackingServices { // CPlayerControllerComponent
    pub const m_perRoundStats: usize = 0x40; // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
    pub const m_matchStats: usize = 0x90; // CSMatchStats_t
    pub const m_iNumRoundKills: usize = 0x110; // int32_t
    pub const m_iNumRoundKillsHeadshots: usize = 0x114; // int32_t
    pub const m_unTotalRoundDamageDealt: usize = 0x118; // uint32_t
}

pub mod CCSPlayerController_DamageServices { // CPlayerControllerComponent
    pub const m_nSendUpdate: usize = 0x40; // int32_t
    pub const m_DamageList: usize = 0x48; // C_UtlVectorEmbeddedNetworkVar<CDamageRecord>
}

pub mod CCSPlayerController_InGameMoneyServices { // CPlayerControllerComponent
    pub const m_iAccount: usize = 0x40; // int32_t
    pub const m_iStartAccount: usize = 0x44; // int32_t
    pub const m_iTotalCashSpent: usize = 0x48; // int32_t
    pub const m_iCashSpentThisRound: usize = 0x4C; // int32_t
    pub const m_nPreviousAccount: usize = 0x50; // int32_t
}

pub mod CCSPlayerController_InventoryServices { // CPlayerControllerComponent
    pub const m_unMusicID: usize = 0x40; // uint16_t
    pub const m_rank: usize = 0x44; // MedalRank_t[6]
    pub const m_nPersonaDataPublicLevel: usize = 0x5C; // int32_t
    pub const m_nPersonaDataPublicCommendsLeader: usize = 0x60; // int32_t
    pub const m_nPersonaDataPublicCommendsTeacher: usize = 0x64; // int32_t
    pub const m_nPersonaDataPublicCommendsFriendly: usize = 0x68; // int32_t
    pub const m_nPersonaDataXpTrailLevel: usize = 0x6C; // int32_t
    pub const m_vecServerAuthoritativeWeaponSlots: usize = 0x70; // C_UtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
}

pub mod CCSPlayer_ActionTrackingServices { // CPlayerPawnComponent
    pub const m_hLastWeaponBeforeC4AutoSwitch: usize = 0x40; // CHandle<C_BasePlayerWeapon>
    pub const m_bIsRescuing: usize = 0x44; // bool
    pub const m_weaponPurchasesThisMatch: usize = 0x48; // WeaponPurchaseTracker_t
    pub const m_weaponPurchasesThisRound: usize = 0xA0; // WeaponPurchaseTracker_t
}

pub mod CCSPlayer_BulletServices { // CPlayerPawnComponent
    pub const m_totalHitsOnServer: usize = 0x40; // int32_t
}

pub mod CCSPlayer_BuyServices { // CPlayerPawnComponent
    pub const m_vecSellbackPurchaseEntries: usize = 0x40; // C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
}

pub mod CCSPlayer_CameraServices { // CCSPlayerBase_CameraServices
    pub const m_flDeathCamTilt: usize = 0x228; // float
}

pub mod CCSPlayer_GlowServices { // CPlayerPawnComponent
}

pub mod CCSPlayer_HostageServices { // CPlayerPawnComponent
    pub const m_hCarriedHostage: usize = 0x40; // CHandle<C_BaseEntity>
    pub const m_hCarriedHostageProp: usize = 0x44; // CHandle<C_BaseEntity>
}

pub mod CCSPlayer_ItemServices { // CPlayer_ItemServices
    pub const m_bHasDefuser: usize = 0x40; // bool
    pub const m_bHasHelmet: usize = 0x41; // bool
    pub const m_bHasHeavyArmor: usize = 0x42; // bool
}

pub mod CCSPlayer_MovementServices { // CPlayer_MovementServices_Humanoid
    pub const m_flMaxFallVelocity: usize = 0x218; // float
    pub const m_vecLadderNormal: usize = 0x21C; // Vector
    pub const m_nLadderSurfacePropIndex: usize = 0x228; // int32_t
    pub const m_flDuckAmount: usize = 0x22C; // float
    pub const m_flDuckSpeed: usize = 0x230; // float
    pub const m_bDuckOverride: usize = 0x234; // bool
    pub const m_bDesiresDuck: usize = 0x235; // bool
    pub const m_flDuckOffset: usize = 0x238; // float
    pub const m_nDuckTimeMsecs: usize = 0x23C; // uint32_t
    pub const m_nDuckJumpTimeMsecs: usize = 0x240; // uint32_t
    pub const m_nJumpTimeMsecs: usize = 0x244; // uint32_t
    pub const m_flLastDuckTime: usize = 0x248; // float
    pub const m_vecLastPositionAtFullCrouchSpeed: usize = 0x258; // Vector2D
    pub const m_duckUntilOnGround: usize = 0x260; // bool
    pub const m_bHasWalkMovedSinceLastJump: usize = 0x261; // bool
    pub const m_bInStuckTest: usize = 0x262; // bool
    pub const m_flStuckCheckTime: usize = 0x270; // float[64][2]
    pub const m_nTraceCount: usize = 0x470; // int32_t
    pub const m_StuckLast: usize = 0x474; // int32_t
    pub const m_bSpeedCropped: usize = 0x478; // bool
    pub const m_nOldWaterLevel: usize = 0x47C; // int32_t
    pub const m_flWaterEntryTime: usize = 0x480; // float
    pub const m_vecForward: usize = 0x484; // Vector
    pub const m_vecLeft: usize = 0x490; // Vector
    pub const m_vecUp: usize = 0x49C; // Vector
    pub const m_nGameCodeHasMovedPlayerAfterCommand: usize = 0x4A8; // int32_t
    pub const m_bOldJumpPressed: usize = 0x4AC; // bool
    pub const m_flJumpPressedTime: usize = 0x4B0; // float
    pub const m_flJumpUntil: usize = 0x4B4; // float
    pub const m_flJumpVel: usize = 0x4B8; // float
    pub const m_fStashGrenadeParameterWhen: usize = 0x4BC; // GameTime_t
    pub const m_nButtonDownMaskPrev: usize = 0x4C0; // uint64_t
    pub const m_flOffsetTickCompleteTime: usize = 0x4C8; // float
    pub const m_flOffsetTickStashedSpeed: usize = 0x4CC; // float
    pub const m_flStamina: usize = 0x4D0; // float
    pub const m_flHeightAtJumpStart: usize = 0x4D4; // float
    pub const m_flMaxJumpHeightThisJump: usize = 0x4D8; // float
}

pub mod CCSPlayer_PingServices { // CPlayerPawnComponent
    pub const m_hPlayerPing: usize = 0x40; // CHandle<C_BaseEntity>
}

pub mod CCSPlayer_UseServices { // CPlayer_UseServices
}

pub mod CCSPlayer_ViewModelServices { // CPlayer_ViewModelServices
    pub const m_hViewModel: usize = 0x40; // CHandle<C_BaseViewModel>[3]
}

pub mod CCSPlayer_WaterServices { // CPlayer_WaterServices
    pub const m_flWaterJumpTime: usize = 0x40; // float
    pub const m_vecWaterJumpVel: usize = 0x44; // Vector
    pub const m_flSwimSoundTime: usize = 0x50; // float
}

pub mod CCSPlayer_WeaponServices { // CPlayer_WeaponServices
    pub const m_flNextAttack: usize = 0xB8; // GameTime_t
    pub const m_bIsLookingAtWeapon: usize = 0xBC; // bool
    pub const m_bIsHoldingLookAtWeapon: usize = 0xBD; // bool
    pub const m_nOldShootPositionHistoryCount: usize = 0xC0; // uint32_t
    pub const m_nOldInputHistoryCount: usize = 0x458; // uint32_t
}

pub mod CCSTakeDamageInfoAPI {
}

pub mod CCSWeaponBaseAPI {
}

pub mod CCSWeaponBaseVData { // CBasePlayerWeaponVData
    pub const m_WeaponType: usize = 0x248; // CSWeaponType
    pub const m_WeaponCategory: usize = 0x24C; // CSWeaponCategory
    pub const m_szViewModel: usize = 0x250; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    pub const m_szPlayerModel: usize = 0x330; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    pub const m_szWorldDroppedModel: usize = 0x410; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    pub const m_szAimsightLensMaskModel: usize = 0x4F0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    pub const m_szMagazineModel: usize = 0x5D0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    pub const m_szHeatEffect: usize = 0x6B0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    pub const m_szEjectBrassEffect: usize = 0x790; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    pub const m_szMuzzleFlashParticleAlt: usize = 0x870; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    pub const m_szMuzzleFlashThirdPersonParticle: usize = 0x950; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    pub const m_szMuzzleFlashThirdPersonParticleAlt: usize = 0xA30; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    pub const m_szTracerParticle: usize = 0xB10; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    pub const m_GearSlot: usize = 0xBF0; // gear_slot_t
    pub const m_GearSlotPosition: usize = 0xBF4; // int32_t
    pub const m_DefaultLoadoutSlot: usize = 0xBF8; // loadout_slot_t
    pub const m_sWrongTeamMsg: usize = 0xC00; // CUtlString
    pub const m_nPrice: usize = 0xC08; // int32_t
    pub const m_nKillAward: usize = 0xC0C; // int32_t
    pub const m_nPrimaryReserveAmmoMax: usize = 0xC10; // int32_t
    pub const m_nSecondaryReserveAmmoMax: usize = 0xC14; // int32_t
    pub const m_bMeleeWeapon: usize = 0xC18; // bool
    pub const m_bHasBurstMode: usize = 0xC19; // bool
    pub const m_bIsRevolver: usize = 0xC1A; // bool
    pub const m_bCannotShootUnderwater: usize = 0xC1B; // bool
    pub const m_szName: usize = 0xC20; // CGlobalSymbol
    pub const m_szAnimExtension: usize = 0xC28; // CUtlString
    pub const m_eSilencerType: usize = 0xC30; // CSWeaponSilencerType
    pub const m_nCrosshairMinDistance: usize = 0xC34; // int32_t
    pub const m_nCrosshairDeltaDistance: usize = 0xC38; // int32_t
    pub const m_bIsFullAuto: usize = 0xC3C; // bool
    pub const m_nNumBullets: usize = 0xC40; // int32_t
    pub const m_flCycleTime: usize = 0xC44; // CFiringModeFloat
    pub const m_flMaxSpeed: usize = 0xC4C; // CFiringModeFloat
    pub const m_flSpread: usize = 0xC54; // CFiringModeFloat
    pub const m_flInaccuracyCrouch: usize = 0xC5C; // CFiringModeFloat
    pub const m_flInaccuracyStand: usize = 0xC64; // CFiringModeFloat
    pub const m_flInaccuracyJump: usize = 0xC6C; // CFiringModeFloat
    pub const m_flInaccuracyLand: usize = 0xC74; // CFiringModeFloat
    pub const m_flInaccuracyLadder: usize = 0xC7C; // CFiringModeFloat
    pub const m_flInaccuracyFire: usize = 0xC84; // CFiringModeFloat
    pub const m_flInaccuracyMove: usize = 0xC8C; // CFiringModeFloat
    pub const m_flRecoilAngle: usize = 0xC94; // CFiringModeFloat
    pub const m_flRecoilAngleVariance: usize = 0xC9C; // CFiringModeFloat
    pub const m_flRecoilMagnitude: usize = 0xCA4; // CFiringModeFloat
    pub const m_flRecoilMagnitudeVariance: usize = 0xCAC; // CFiringModeFloat
    pub const m_nTracerFrequency: usize = 0xCB4; // CFiringModeInt
    pub const m_flInaccuracyJumpInitial: usize = 0xCBC; // float
    pub const m_flInaccuracyJumpApex: usize = 0xCC0; // float
    pub const m_flInaccuracyReload: usize = 0xCC4; // float
    pub const m_nRecoilSeed: usize = 0xCC8; // int32_t
    pub const m_nSpreadSeed: usize = 0xCCC; // int32_t
    pub const m_flTimeToIdleAfterFire: usize = 0xCD0; // float
    pub const m_flIdleInterval: usize = 0xCD4; // float
    pub const m_flAttackMovespeedFactor: usize = 0xCD8; // float
    pub const m_flHeatPerShot: usize = 0xCDC; // float
    pub const m_flInaccuracyPitchShift: usize = 0xCE0; // float
    pub const m_flInaccuracyAltSoundThreshold: usize = 0xCE4; // float
    pub const m_flBotAudibleRange: usize = 0xCE8; // float
    pub const m_szUseRadioSubtitle: usize = 0xCF0; // CUtlString
    pub const m_bUnzoomsAfterShot: usize = 0xCF8; // bool
    pub const m_bHideViewModelWhenZoomed: usize = 0xCF9; // bool
    pub const m_nZoomLevels: usize = 0xCFC; // int32_t
    pub const m_nZoomFOV1: usize = 0xD00; // int32_t
    pub const m_nZoomFOV2: usize = 0xD04; // int32_t
    pub const m_flZoomTime0: usize = 0xD08; // float
    pub const m_flZoomTime1: usize = 0xD0C; // float
    pub const m_flZoomTime2: usize = 0xD10; // float
    pub const m_flIronSightPullUpSpeed: usize = 0xD14; // float
    pub const m_flIronSightPutDownSpeed: usize = 0xD18; // float
    pub const m_flIronSightFOV: usize = 0xD1C; // float
    pub const m_flIronSightPivotForward: usize = 0xD20; // float
    pub const m_flIronSightLooseness: usize = 0xD24; // float
    pub const m_angPivotAngle: usize = 0xD28; // QAngle
    pub const m_vecIronSightEyePos: usize = 0xD34; // Vector
    pub const m_nDamage: usize = 0xD40; // int32_t
    pub const m_flHeadshotMultiplier: usize = 0xD44; // float
    pub const m_flArmorRatio: usize = 0xD48; // float
    pub const m_flPenetration: usize = 0xD4C; // float
    pub const m_flRange: usize = 0xD50; // float
    pub const m_flRangeModifier: usize = 0xD54; // float
    pub const m_flFlinchVelocityModifierLarge: usize = 0xD58; // float
    pub const m_flFlinchVelocityModifierSmall: usize = 0xD5C; // float
    pub const m_flRecoveryTimeCrouch: usize = 0xD60; // float
    pub const m_flRecoveryTimeStand: usize = 0xD64; // float
    pub const m_flRecoveryTimeCrouchFinal: usize = 0xD68; // float
    pub const m_flRecoveryTimeStandFinal: usize = 0xD6C; // float
    pub const m_nRecoveryTransitionStartBullet: usize = 0xD70; // int32_t
    pub const m_nRecoveryTransitionEndBullet: usize = 0xD74; // int32_t
    pub const m_flThrowVelocity: usize = 0xD78; // float
    pub const m_vSmokeColor: usize = 0xD7C; // Vector
    pub const m_szAnimClass: usize = 0xD88; // CGlobalSymbol
}

pub mod CCSWeaponBaseVDataAPI {
}

pub mod CClientAlphaProperty { // IClientAlphaProperty
    pub const m_nRenderFX: usize = 0x10; // uint8_t
    pub const m_nRenderMode: usize = 0x11; // uint8_t
    pub const m_bAlphaOverride: usize = 0x0; // bitfield:1
    pub const m_bShadowAlphaOverride: usize = 0x0; // bitfield:1
    pub const m_nReserved: usize = 0x0; // bitfield:6
    pub const m_nAlpha: usize = 0x13; // uint8_t
    pub const m_nDesyncOffset: usize = 0x14; // uint16_t
    pub const m_nReserved2: usize = 0x16; // uint16_t
    pub const m_nDistFadeStart: usize = 0x18; // uint16_t
    pub const m_nDistFadeEnd: usize = 0x1A; // uint16_t
    pub const m_flFadeScale: usize = 0x1C; // float
    pub const m_flRenderFxStartTime: usize = 0x20; // GameTime_t
    pub const m_flRenderFxDuration: usize = 0x24; // float
}

pub mod CClientPointEntityAPI {
}

pub mod CClientScriptEntity { // C_BaseEntity
}

pub mod CCollisionProperty {
    pub const m_collisionAttribute: usize = 0x10; // VPhysicsCollisionAttribute_t
    pub const m_vecMins: usize = 0x40; // Vector
    pub const m_vecMaxs: usize = 0x4C; // Vector
    pub const m_usSolidFlags: usize = 0x5A; // uint8_t
    pub const m_nSolidType: usize = 0x5B; // SolidType_t
    pub const m_triggerBloat: usize = 0x5C; // uint8_t
    pub const m_nSurroundType: usize = 0x5D; // SurroundingBoundsType_t
    pub const m_CollisionGroup: usize = 0x5E; // uint8_t
    pub const m_nEnablePhysics: usize = 0x5F; // uint8_t
    pub const m_flBoundingRadius: usize = 0x60; // float
    pub const m_vecSpecifiedSurroundingMins: usize = 0x64; // Vector
    pub const m_vecSpecifiedSurroundingMaxs: usize = 0x70; // Vector
    pub const m_vecSurroundingMaxs: usize = 0x7C; // Vector
    pub const m_vecSurroundingMins: usize = 0x88; // Vector
    pub const m_vCapsuleCenter1: usize = 0x94; // Vector
    pub const m_vCapsuleCenter2: usize = 0xA0; // Vector
    pub const m_flCapsuleRadius: usize = 0xAC; // float
}

pub mod CCompositeMaterialEditorDoc {
    pub const m_nVersion: usize = 0x8; // int32_t
    pub const m_Points: usize = 0x10; // CUtlVector<CompositeMaterialEditorPoint_t>
    pub const m_KVthumbnail: usize = 0x28; // KeyValues3
}

pub mod CDamageRecord {
    pub const m_PlayerDamager: usize = 0x28; // CHandle<C_CSPlayerPawnBase>
    pub const m_PlayerRecipient: usize = 0x2C; // CHandle<C_CSPlayerPawnBase>
    pub const m_hPlayerControllerDamager: usize = 0x30; // CHandle<CCSPlayerController>
    pub const m_hPlayerControllerRecipient: usize = 0x34; // CHandle<CCSPlayerController>
    pub const m_szPlayerDamagerName: usize = 0x38; // CUtlString
    pub const m_szPlayerRecipientName: usize = 0x40; // CUtlString
    pub const m_DamagerXuid: usize = 0x48; // uint64_t
    pub const m_RecipientXuid: usize = 0x50; // uint64_t
    pub const m_iDamage: usize = 0x58; // int32_t
    pub const m_iActualHealthRemoved: usize = 0x5C; // int32_t
    pub const m_iNumHits: usize = 0x60; // int32_t
    pub const m_iLastBulletUpdate: usize = 0x64; // int32_t
    pub const m_bIsOtherEnemy: usize = 0x68; // bool
    pub const m_killType: usize = 0x69; // EKillTypes_t
}

pub mod CDecalInfo {
    pub const m_flAnimationScale: usize = 0x0; // float
    pub const m_flAnimationLifeSpan: usize = 0x4; // float
    pub const m_flPlaceTime: usize = 0x8; // float
    pub const m_flFadeStartTime: usize = 0xC; // float
    pub const m_flFadeDuration: usize = 0x10; // float
    pub const m_nVBSlot: usize = 0x14; // int32_t
    pub const m_nBoneIndex: usize = 0x18; // int32_t
    pub const m_vPosition: usize = 0x28; // Vector
    pub const m_flBoundingRadiusSqr: usize = 0x34; // float
    pub const m_pNext: usize = 0x40; // CDecalInfo*
    pub const m_pPrev: usize = 0x48; // CDecalInfo*
    pub const m_nDecalMaterialIndex: usize = 0xA8; // int32_t
}

pub mod CDynamicPropAPI {
}

pub mod CEconItemAttribute {
    pub const m_iAttributeDefinitionIndex: usize = 0x30; // uint16_t
    pub const m_flValue: usize = 0x34; // float
    pub const m_flInitialValue: usize = 0x38; // float
    pub const m_nRefundableCurrency: usize = 0x3C; // int32_t
    pub const m_bSetBonus: usize = 0x40; // bool
}

pub mod CEffectData {
    pub const m_vOrigin: usize = 0x8; // Vector
    pub const m_vStart: usize = 0x14; // Vector
    pub const m_vNormal: usize = 0x20; // Vector
    pub const m_vAngles: usize = 0x2C; // QAngle
    pub const m_hEntity: usize = 0x38; // CEntityHandle
    pub const m_hOtherEntity: usize = 0x3C; // CEntityHandle
    pub const m_flScale: usize = 0x40; // float
    pub const m_flMagnitude: usize = 0x44; // float
    pub const m_flRadius: usize = 0x48; // float
    pub const m_nSurfaceProp: usize = 0x4C; // CUtlStringToken
    pub const m_nEffectIndex: usize = 0x50; // CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
    pub const m_nDamageType: usize = 0x58; // uint32_t
    pub const m_nPenetrate: usize = 0x5C; // uint8_t
    pub const m_nMaterial: usize = 0x5E; // uint16_t
    pub const m_nHitBox: usize = 0x60; // uint16_t
    pub const m_nColor: usize = 0x62; // uint8_t
    pub const m_fFlags: usize = 0x63; // uint8_t
    pub const m_nAttachmentIndex: usize = 0x64; // AttachmentHandle_t
    pub const m_nAttachmentName: usize = 0x68; // CUtlStringToken
    pub const m_iEffectName: usize = 0x6C; // uint16_t
    pub const m_nExplosionType: usize = 0x6E; // uint8_t
}

pub mod CEntityComponent {
}

pub mod CEntityIdentity {
    pub const m_nameStringableIndex: usize = 0x14; // int32_t
    pub const m_name: usize = 0x18; // CUtlSymbolLarge
    pub const m_designerName: usize = 0x20; // CUtlSymbolLarge
    pub const m_flags: usize = 0x30; // uint32_t
    pub const m_worldGroupId: usize = 0x38; // WorldGroupId_t
    pub const m_fDataObjectTypes: usize = 0x3C; // uint32_t
    pub const m_PathIndex: usize = 0x40; // ChangeAccessorFieldPathIndex_t
    pub const m_pPrev: usize = 0x58; // CEntityIdentity*
    pub const m_pNext: usize = 0x60; // CEntityIdentity*
    pub const m_pPrevByClass: usize = 0x68; // CEntityIdentity*
    pub const m_pNextByClass: usize = 0x70; // CEntityIdentity*
}

pub mod CEntityInstance {
    pub const m_iszPrivateVScripts: usize = 0x8; // CUtlSymbolLarge
    pub const m_pEntity: usize = 0x10; // CEntityIdentity*
    pub const m_CScriptComponent: usize = 0x28; // CScriptComponent*
    pub const m_bVisibleinPVS: usize = 0x30; // bool
}

pub mod CFireOverlay { // CGlowOverlay
    pub const m_pOwner: usize = 0xD0; // C_FireSmoke*
    pub const m_vBaseColors: usize = 0xD8; // Vector[4]
    pub const m_flScale: usize = 0x108; // float
    pub const m_nGUID: usize = 0x10C; // int32_t
}

pub mod CFlashlightEffect {
    pub const m_bIsOn: usize = 0x10; // bool
    pub const m_bMuzzleFlashEnabled: usize = 0x20; // bool
    pub const m_flMuzzleFlashBrightness: usize = 0x24; // float
    pub const m_quatMuzzleFlashOrientation: usize = 0x30; // Quaternion
    pub const m_vecMuzzleFlashOrigin: usize = 0x40; // Vector
    pub const m_flFov: usize = 0x4C; // float
    pub const m_flFarZ: usize = 0x50; // float
    pub const m_flLinearAtten: usize = 0x54; // float
    pub const m_bCastsShadows: usize = 0x58; // bool
    pub const m_flCurrentPullBackDist: usize = 0x5C; // float
    pub const m_FlashlightTexture: usize = 0x60; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_MuzzleFlashTexture: usize = 0x68; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_textureName: usize = 0x70; // char[64]
}

pub mod CFuncWater { // C_BaseModelEntity
    pub const m_BuoyancyHelper: usize = 0xCD0; // CBuoyancyHelper
}

pub mod CGameSceneNode {
    pub const m_nodeToWorld: usize = 0x10; // CTransform
    pub const m_pOwner: usize = 0x30; // CEntityInstance*
    pub const m_pParent: usize = 0x38; // CGameSceneNode*
    pub const m_pChild: usize = 0x40; // CGameSceneNode*
    pub const m_pNextSibling: usize = 0x48; // CGameSceneNode*
    pub const m_hParent: usize = 0x70; // CGameSceneNodeHandle
    pub const m_vecOrigin: usize = 0x80; // CNetworkOriginCellCoordQuantizedVector
    pub const m_angRotation: usize = 0xB8; // QAngle
    pub const m_flScale: usize = 0xC4; // float
    pub const m_vecAbsOrigin: usize = 0xC8; // Vector
    pub const m_angAbsRotation: usize = 0xD4; // QAngle
    pub const m_flAbsScale: usize = 0xE0; // float
    pub const m_nParentAttachmentOrBone: usize = 0xE4; // int16_t
    pub const m_bDebugAbsOriginChanges: usize = 0xE6; // bool
    pub const m_bDormant: usize = 0xE7; // bool
    pub const m_bForceParentToBeNetworked: usize = 0xE8; // bool
    pub const m_bDirtyHierarchy: usize = 0x0; // bitfield:1
    pub const m_bDirtyBoneMergeInfo: usize = 0x0; // bitfield:1
    pub const m_bNetworkedPositionChanged: usize = 0x0; // bitfield:1
    pub const m_bNetworkedAnglesChanged: usize = 0x0; // bitfield:1
    pub const m_bNetworkedScaleChanged: usize = 0x0; // bitfield:1
    pub const m_bWillBeCallingPostDataUpdate: usize = 0x0; // bitfield:1
    pub const m_bBoneMergeFlex: usize = 0x0; // bitfield:1
    pub const m_nLatchAbsOrigin: usize = 0x0; // bitfield:2
    pub const m_bDirtyBoneMergeBoneToRoot: usize = 0x0; // bitfield:1
    pub const m_nHierarchicalDepth: usize = 0xEB; // uint8_t
    pub const m_nHierarchyType: usize = 0xEC; // uint8_t
    pub const m_nDoNotSetAnimTimeInInvalidatePhysicsCount: usize = 0xED; // uint8_t
    pub const m_name: usize = 0xF0; // CUtlStringToken
    pub const m_hierarchyAttachName: usize = 0x130; // CUtlStringToken
    pub const m_flZOffset: usize = 0x134; // float
    pub const m_vRenderOrigin: usize = 0x138; // Vector
}

pub mod CGameSceneNodeHandle {
    pub const m_hOwner: usize = 0x8; // CEntityHandle
    pub const m_name: usize = 0xC; // CUtlStringToken
}

pub mod CGlobalLightBase {
    pub const m_bSpotLight: usize = 0x10; // bool
    pub const m_SpotLightOrigin: usize = 0x14; // Vector
    pub const m_SpotLightAngles: usize = 0x20; // QAngle
    pub const m_ShadowDirection: usize = 0x2C; // Vector
    pub const m_AmbientDirection: usize = 0x38; // Vector
    pub const m_SpecularDirection: usize = 0x44; // Vector
    pub const m_InspectorSpecularDirection: usize = 0x50; // Vector
    pub const m_flSpecularPower: usize = 0x5C; // float
    pub const m_flSpecularIndependence: usize = 0x60; // float
    pub const m_SpecularColor: usize = 0x64; // Color
    pub const m_bStartDisabled: usize = 0x68; // bool
    pub const m_bEnabled: usize = 0x69; // bool
    pub const m_LightColor: usize = 0x6A; // Color
    pub const m_AmbientColor1: usize = 0x6E; // Color
    pub const m_AmbientColor2: usize = 0x72; // Color
    pub const m_AmbientColor3: usize = 0x76; // Color
    pub const m_flSunDistance: usize = 0x7C; // float
    pub const m_flFOV: usize = 0x80; // float
    pub const m_flNearZ: usize = 0x84; // float
    pub const m_flFarZ: usize = 0x88; // float
    pub const m_bEnableShadows: usize = 0x8C; // bool
    pub const m_bOldEnableShadows: usize = 0x8D; // bool
    pub const m_bBackgroundClearNotRequired: usize = 0x8E; // bool
    pub const m_flCloudScale: usize = 0x90; // float
    pub const m_flCloud1Speed: usize = 0x94; // float
    pub const m_flCloud1Direction: usize = 0x98; // float
    pub const m_flCloud2Speed: usize = 0x9C; // float
    pub const m_flCloud2Direction: usize = 0xA0; // float
    pub const m_flAmbientScale1: usize = 0xB0; // float
    pub const m_flAmbientScale2: usize = 0xB4; // float
    pub const m_flGroundScale: usize = 0xB8; // float
    pub const m_flLightScale: usize = 0xBC; // float
    pub const m_flFoWDarkness: usize = 0xC0; // float
    pub const m_bEnableSeparateSkyboxFog: usize = 0xC4; // bool
    pub const m_vFowColor: usize = 0xC8; // Vector
    pub const m_ViewOrigin: usize = 0xD4; // Vector
    pub const m_ViewAngles: usize = 0xE0; // QAngle
    pub const m_flViewFoV: usize = 0xEC; // float
    pub const m_WorldPoints: usize = 0xF0; // Vector[8]
    pub const m_vFogOffsetLayer0: usize = 0x4A8; // Vector2D
    pub const m_vFogOffsetLayer1: usize = 0x4B0; // Vector2D
    pub const m_hEnvWind: usize = 0x4B8; // CHandle<C_BaseEntity>
    pub const m_hEnvSky: usize = 0x4BC; // CHandle<C_BaseEntity>
}

pub mod CGlowOverlay {
    pub const m_vPos: usize = 0x8; // Vector
    pub const m_bDirectional: usize = 0x14; // bool
    pub const m_vDirection: usize = 0x18; // Vector
    pub const m_bInSky: usize = 0x24; // bool
    pub const m_skyObstructionScale: usize = 0x28; // float
    pub const m_Sprites: usize = 0x30; // CGlowSprite[4]
    pub const m_nSprites: usize = 0xB0; // int32_t
    pub const m_flProxyRadius: usize = 0xB4; // float
    pub const m_flHDRColorScale: usize = 0xB8; // float
    pub const m_flGlowObstructionScale: usize = 0xBC; // float
    pub const m_bCacheGlowObstruction: usize = 0xC0; // bool
    pub const m_bCacheSkyObstruction: usize = 0xC1; // bool
    pub const m_bActivated: usize = 0xC2; // int16_t
    pub const m_ListIndex: usize = 0xC4; // uint16_t
    pub const m_queryHandle: usize = 0xC8; // int32_t
}

pub mod CGlowProperty {
    pub const m_fGlowColor: usize = 0x8; // Vector
    pub const m_iGlowType: usize = 0x30; // int32_t
    pub const m_iGlowTeam: usize = 0x34; // int32_t
    pub const m_nGlowRange: usize = 0x38; // int32_t
    pub const m_nGlowRangeMin: usize = 0x3C; // int32_t
    pub const m_glowColorOverride: usize = 0x40; // Color
    pub const m_bFlashing: usize = 0x44; // bool
    pub const m_flGlowTime: usize = 0x48; // float
    pub const m_flGlowStartTime: usize = 0x4C; // float
    pub const m_bEligibleForScreenHighlight: usize = 0x50; // bool
    pub const m_bGlowing: usize = 0x51; // bool
}

pub mod CGlowSprite {
    pub const m_vColor: usize = 0x0; // Vector
    pub const m_flHorzSize: usize = 0xC; // float
    pub const m_flVertSize: usize = 0x10; // float
    pub const m_hMaterial: usize = 0x18; // CStrongHandle<InfoForResourceTypeIMaterial2>
}

pub mod CGrenadeTracer { // C_BaseModelEntity
    pub const m_flTracerDuration: usize = 0xCF0; // float
    pub const m_nType: usize = 0xCF4; // GrenadeType_t
}

pub mod CHitboxComponent { // CEntityComponent
    pub const m_bvDisabledHitGroups: usize = 0x24; // uint32_t[1]
}

pub mod CHostageRescueZone { // CHostageRescueZoneShim
}

pub mod CHostageRescueZoneShim { // C_BaseTrigger
}

pub mod CInfoDynamicShadowHint { // C_PointEntity
    pub const m_bDisabled: usize = 0x550; // bool
    pub const m_flRange: usize = 0x554; // float
    pub const m_nImportance: usize = 0x558; // int32_t
    pub const m_nLightChoice: usize = 0x55C; // int32_t
    pub const m_hLight: usize = 0x560; // CHandle<C_BaseEntity>
}

pub mod CInfoDynamicShadowHintBox { // CInfoDynamicShadowHint
    pub const m_vBoxMins: usize = 0x568; // Vector
    pub const m_vBoxMaxs: usize = 0x574; // Vector
}

pub mod CInfoOffscreenPanoramaTexture { // C_PointEntity
    pub const m_bDisabled: usize = 0x550; // bool
    pub const m_nResolutionX: usize = 0x554; // int32_t
    pub const m_nResolutionY: usize = 0x558; // int32_t
    pub const m_szLayoutFileName: usize = 0x560; // CUtlSymbolLarge
    pub const m_RenderAttrName: usize = 0x568; // CUtlSymbolLarge
    pub const m_TargetEntities: usize = 0x570; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
    pub const m_nTargetChangeCount: usize = 0x588; // int32_t
    pub const m_vecCSSClasses: usize = 0x590; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
    pub const m_bCheckCSSClasses: usize = 0x708; // bool
}

pub mod CInfoParticleTarget { // C_PointEntity
}

pub mod CInfoTarget { // C_PointEntity
}

pub mod CInfoWorldLayer { // C_BaseEntity
    pub const m_pOutputOnEntitiesSpawned: usize = 0x550; // CEntityIOOutput
    pub const m_worldName: usize = 0x578; // CUtlSymbolLarge
    pub const m_layerName: usize = 0x580; // CUtlSymbolLarge
    pub const m_bWorldLayerVisible: usize = 0x588; // bool
    pub const m_bEntitiesSpawned: usize = 0x589; // bool
    pub const m_bCreateAsChildSpawnGroup: usize = 0x58A; // bool
    pub const m_hLayerSpawnGroup: usize = 0x58C; // uint32_t
    pub const m_bWorldLayerActuallyVisible: usize = 0x590; // bool
}

pub mod CInterpolatedValue {
    pub const m_flStartTime: usize = 0x0; // float
    pub const m_flEndTime: usize = 0x4; // float
    pub const m_flStartValue: usize = 0x8; // float
    pub const m_flEndValue: usize = 0xC; // float
    pub const m_nInterpType: usize = 0x10; // int32_t
}

pub mod CLightComponent { // CEntityComponent
    pub const __m_pChainEntity: usize = 0x48; // CNetworkVarChainer
    pub const m_Color: usize = 0x85; // Color
    pub const m_SecondaryColor: usize = 0x89; // Color
    pub const m_flBrightness: usize = 0x90; // float
    pub const m_flBrightnessScale: usize = 0x94; // float
    pub const m_flBrightnessMult: usize = 0x98; // float
    pub const m_flRange: usize = 0x9C; // float
    pub const m_flFalloff: usize = 0xA0; // float
    pub const m_flAttenuation0: usize = 0xA4; // float
    pub const m_flAttenuation1: usize = 0xA8; // float
    pub const m_flAttenuation2: usize = 0xAC; // float
    pub const m_flTheta: usize = 0xB0; // float
    pub const m_flPhi: usize = 0xB4; // float
    pub const m_hLightCookie: usize = 0xB8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_nCascades: usize = 0xC0; // int32_t
    pub const m_nCastShadows: usize = 0xC4; // int32_t
    pub const m_nShadowWidth: usize = 0xC8; // int32_t
    pub const m_nShadowHeight: usize = 0xCC; // int32_t
    pub const m_bRenderDiffuse: usize = 0xD0; // bool
    pub const m_nRenderSpecular: usize = 0xD4; // int32_t
    pub const m_bRenderTransmissive: usize = 0xD8; // bool
    pub const m_flOrthoLightWidth: usize = 0xDC; // float
    pub const m_flOrthoLightHeight: usize = 0xE0; // float
    pub const m_nStyle: usize = 0xE4; // int32_t
    pub const m_Pattern: usize = 0xE8; // CUtlString
    pub const m_nCascadeRenderStaticObjects: usize = 0xF0; // int32_t
    pub const m_flShadowCascadeCrossFade: usize = 0xF4; // float
    pub const m_flShadowCascadeDistanceFade: usize = 0xF8; // float
    pub const m_flShadowCascadeDistance0: usize = 0xFC; // float
    pub const m_flShadowCascadeDistance1: usize = 0x100; // float
    pub const m_flShadowCascadeDistance2: usize = 0x104; // float
    pub const m_flShadowCascadeDistance3: usize = 0x108; // float
    pub const m_nShadowCascadeResolution0: usize = 0x10C; // int32_t
    pub const m_nShadowCascadeResolution1: usize = 0x110; // int32_t
    pub const m_nShadowCascadeResolution2: usize = 0x114; // int32_t
    pub const m_nShadowCascadeResolution3: usize = 0x118; // int32_t
    pub const m_bUsesBakedShadowing: usize = 0x11C; // bool
    pub const m_nShadowPriority: usize = 0x120; // int32_t
    pub const m_nBakedShadowIndex: usize = 0x124; // int32_t
    pub const m_bRenderToCubemaps: usize = 0x128; // bool
    pub const m_nDirectLight: usize = 0x12C; // int32_t
    pub const m_nIndirectLight: usize = 0x130; // int32_t
    pub const m_flFadeMinDist: usize = 0x134; // float
    pub const m_flFadeMaxDist: usize = 0x138; // float
    pub const m_flShadowFadeMinDist: usize = 0x13C; // float
    pub const m_flShadowFadeMaxDist: usize = 0x140; // float
    pub const m_bEnabled: usize = 0x144; // bool
    pub const m_bFlicker: usize = 0x145; // bool
    pub const m_bPrecomputedFieldsValid: usize = 0x146; // bool
    pub const m_vPrecomputedBoundsMins: usize = 0x148; // Vector
    pub const m_vPrecomputedBoundsMaxs: usize = 0x154; // Vector
    pub const m_vPrecomputedOBBOrigin: usize = 0x160; // Vector
    pub const m_vPrecomputedOBBAngles: usize = 0x16C; // QAngle
    pub const m_vPrecomputedOBBExtent: usize = 0x178; // Vector
    pub const m_flPrecomputedMaxRange: usize = 0x184; // float
    pub const m_nFogLightingMode: usize = 0x188; // int32_t
    pub const m_flFogContributionStength: usize = 0x18C; // float
    pub const m_flNearClipPlane: usize = 0x190; // float
    pub const m_SkyColor: usize = 0x194; // Color
    pub const m_flSkyIntensity: usize = 0x198; // float
    pub const m_SkyAmbientBounce: usize = 0x19C; // Color
    pub const m_bUseSecondaryColor: usize = 0x1A0; // bool
    pub const m_bMixedShadows: usize = 0x1A1; // bool
    pub const m_flLightStyleStartTime: usize = 0x1A4; // GameTime_t
    pub const m_flCapsuleLength: usize = 0x1A8; // float
    pub const m_flMinRoughness: usize = 0x1AC; // float
}

pub mod CLogicRelay { // CLogicalEntity
    pub const m_OnTrigger: usize = 0x550; // CEntityIOOutput
    pub const m_OnSpawn: usize = 0x578; // CEntityIOOutput
    pub const m_bDisabled: usize = 0x5A0; // bool
    pub const m_bWaitForRefire: usize = 0x5A1; // bool
    pub const m_bTriggerOnce: usize = 0x5A2; // bool
    pub const m_bFastRetrigger: usize = 0x5A3; // bool
    pub const m_bPassthoughCaller: usize = 0x5A4; // bool
}

pub mod CLogicalEntity { // C_BaseEntity
}

pub mod CModelState {
    pub const m_hModel: usize = 0xA0; // CStrongHandle<InfoForResourceTypeCModel>
    pub const m_ModelName: usize = 0xA8; // CUtlSymbolLarge
    pub const m_bClientClothCreationSuppressed: usize = 0xE8; // bool
    pub const m_MeshGroupMask: usize = 0x180; // uint64_t
    pub const m_nIdealMotionType: usize = 0x202; // int8_t
    pub const m_nForceLOD: usize = 0x203; // int8_t
    pub const m_nClothUpdateFlags: usize = 0x204; // int8_t
}

pub mod CNetworkedSequenceOperation {
    pub const m_hSequence: usize = 0x8; // HSequence
    pub const m_flPrevCycle: usize = 0xC; // float
    pub const m_flCycle: usize = 0x10; // float
    pub const m_flWeight: usize = 0x14; // CNetworkedQuantizedFloat
    pub const m_bSequenceChangeNetworked: usize = 0x1C; // bool
    pub const m_bDiscontinuity: usize = 0x1D; // bool
    pub const m_flPrevCycleFromDiscontinuity: usize = 0x20; // float
    pub const m_flPrevCycleForAnimEventDetection: usize = 0x24; // float
}

pub mod CPlayerSprayDecalRenderHelper {
}

pub mod CPlayer_AutoaimServices { // CPlayerPawnComponent
}

pub mod CPlayer_CameraServices { // CPlayerPawnComponent
    pub const m_vecCsViewPunchAngle: usize = 0x40; // QAngle
    pub const m_nCsViewPunchAngleTick: usize = 0x4C; // GameTick_t
    pub const m_flCsViewPunchAngleTickRatio: usize = 0x50; // float
    pub const m_PlayerFog: usize = 0x58; // C_fogplayerparams_t
    pub const m_hColorCorrectionCtrl: usize = 0x98; // CHandle<C_ColorCorrection>
    pub const m_hViewEntity: usize = 0x9C; // CHandle<C_BaseEntity>
    pub const m_hTonemapController: usize = 0xA0; // CHandle<C_TonemapController2>
    pub const m_audio: usize = 0xA8; // audioparams_t
    pub const m_PostProcessingVolumes: usize = 0x120; // C_NetworkUtlVectorBase<CHandle<C_PostProcessingVolume>>
    pub const m_flOldPlayerZ: usize = 0x138; // float
    pub const m_flOldPlayerViewOffsetZ: usize = 0x13C; // float
    pub const m_CurrentFog: usize = 0x140; // fogparams_t
    pub const m_hOldFogController: usize = 0x1A8; // CHandle<C_FogController>
    pub const m_bOverrideFogColor: usize = 0x1AC; // bool[5]
    pub const m_OverrideFogColor: usize = 0x1B1; // Color[5]
    pub const m_bOverrideFogStartEnd: usize = 0x1C5; // bool[5]
    pub const m_fOverrideFogStart: usize = 0x1CC; // float[5]
    pub const m_fOverrideFogEnd: usize = 0x1E0; // float[5]
    pub const m_hActivePostProcessingVolume: usize = 0x1F4; // CHandle<C_PostProcessingVolume>
    pub const m_angDemoViewAngles: usize = 0x1F8; // QAngle
}

pub mod CPlayer_FlashlightServices { // CPlayerPawnComponent
}

pub mod CPlayer_ItemServices { // CPlayerPawnComponent
}

pub mod CPlayer_MovementServices { // CPlayerPawnComponent
    pub const m_nImpulse: usize = 0x40; // int32_t
    pub const m_nButtons: usize = 0x48; // CInButtonState
    pub const m_nQueuedButtonDownMask: usize = 0x68; // uint64_t
    pub const m_nQueuedButtonChangeMask: usize = 0x70; // uint64_t
    pub const m_nButtonDoublePressed: usize = 0x78; // uint64_t
    pub const m_pButtonPressedCmdNumber: usize = 0x80; // uint32_t[64]
    pub const m_nLastCommandNumberProcessed: usize = 0x180; // uint32_t
    pub const m_nToggleButtonDownMask: usize = 0x188; // uint64_t
    pub const m_flMaxspeed: usize = 0x198; // float
    pub const m_arrForceSubtickMoveWhen: usize = 0x19C; // float[4]
    pub const m_flForwardMove: usize = 0x1AC; // float
    pub const m_flLeftMove: usize = 0x1B0; // float
    pub const m_flUpMove: usize = 0x1B4; // float
    pub const m_vecLastMovementImpulses: usize = 0x1B8; // Vector
    pub const m_vecOldViewAngles: usize = 0x1C4; // QAngle
}

pub mod CPlayer_MovementServices_Humanoid { // CPlayer_MovementServices
    pub const m_flStepSoundTime: usize = 0x1D8; // float
    pub const m_flFallVelocity: usize = 0x1DC; // float
    pub const m_bInCrouch: usize = 0x1E0; // bool
    pub const m_nCrouchState: usize = 0x1E4; // uint32_t
    pub const m_flCrouchTransitionStartTime: usize = 0x1E8; // GameTime_t
    pub const m_bDucked: usize = 0x1EC; // bool
    pub const m_bDucking: usize = 0x1ED; // bool
    pub const m_bInDuckJump: usize = 0x1EE; // bool
    pub const m_groundNormal: usize = 0x1F0; // Vector
    pub const m_flSurfaceFriction: usize = 0x1FC; // float
    pub const m_surfaceProps: usize = 0x200; // CUtlStringToken
    pub const m_nStepside: usize = 0x210; // int32_t
}

pub mod CPlayer_ObserverServices { // CPlayerPawnComponent
    pub const m_iObserverMode: usize = 0x40; // uint8_t
    pub const m_hObserverTarget: usize = 0x44; // CHandle<C_BaseEntity>
    pub const m_iObserverLastMode: usize = 0x48; // ObserverMode_t
    pub const m_bForcedObserverMode: usize = 0x4C; // bool
    pub const m_flObserverChaseDistance: usize = 0x50; // float
    pub const m_flObserverChaseDistanceCalcTime: usize = 0x54; // GameTime_t
}

pub mod CPlayer_UseServices { // CPlayerPawnComponent
}

pub mod CPlayer_ViewModelServices { // CPlayerPawnComponent
}

pub mod CPlayer_WaterServices { // CPlayerPawnComponent
}

pub mod CPlayer_WeaponServices { // CPlayerPawnComponent
    pub const m_hMyWeapons: usize = 0x40; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
    pub const m_hActiveWeapon: usize = 0x58; // CHandle<C_BasePlayerWeapon>
    pub const m_hLastWeapon: usize = 0x5C; // CHandle<C_BasePlayerWeapon>
    pub const m_iAmmo: usize = 0x60; // uint16_t[32]
}

pub mod CPointOffScreenIndicatorUi { // C_PointClientUIWorldPanel
    pub const m_bBeenEnabled: usize = 0xF30; // bool
    pub const m_bHide: usize = 0xF31; // bool
    pub const m_flSeenTargetTime: usize = 0xF34; // float
    pub const m_pTargetPanel: usize = 0xF38; // C_PointClientUIWorldPanel*
}

pub mod CPointTemplate { // CLogicalEntity
    pub const m_iszWorldName: usize = 0x550; // CUtlSymbolLarge
    pub const m_iszSource2EntityLumpName: usize = 0x558; // CUtlSymbolLarge
    pub const m_iszEntityFilterName: usize = 0x560; // CUtlSymbolLarge
    pub const m_flTimeoutInterval: usize = 0x568; // float
    pub const m_bAsynchronouslySpawnEntities: usize = 0x56C; // bool
    pub const m_pOutputOnSpawned: usize = 0x570; // CEntityIOOutput
    pub const m_clientOnlyEntityBehavior: usize = 0x598; // PointTemplateClientOnlyEntityBehavior_t
    pub const m_ownerSpawnGroupType: usize = 0x59C; // PointTemplateOwnerSpawnGroupType_t
    pub const m_createdSpawnGroupHandles: usize = 0x5A0; // CUtlVector<uint32_t>
    pub const m_SpawnedEntityHandles: usize = 0x5B8; // CUtlVector<CEntityHandle>
    pub const m_ScriptSpawnCallback: usize = 0x5D0; // HSCRIPT
    pub const m_ScriptCallbackScope: usize = 0x5D8; // HSCRIPT
}

pub mod CPrecipitationVData { // CEntitySubclassVDataBase
    pub const m_szParticlePrecipitationEffect: usize = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    pub const m_flInnerDistance: usize = 0x108; // float
    pub const m_nAttachType: usize = 0x10C; // ParticleAttachment_t
    pub const m_bBatchSameVolumeType: usize = 0x110; // bool
    pub const m_nRTEnvCP: usize = 0x114; // int32_t
    pub const m_nRTEnvCPComponent: usize = 0x118; // int32_t
    pub const m_szModifier: usize = 0x120; // CUtlString
}

pub mod CProjectedTextureBase {
    pub const m_hTargetEntity: usize = 0xC; // CHandle<C_BaseEntity>
    pub const m_bState: usize = 0x10; // bool
    pub const m_bAlwaysUpdate: usize = 0x11; // bool
    pub const m_flLightFOV: usize = 0x14; // float
    pub const m_bEnableShadows: usize = 0x18; // bool
    pub const m_bSimpleProjection: usize = 0x19; // bool
    pub const m_bLightOnlyTarget: usize = 0x1A; // bool
    pub const m_bLightWorld: usize = 0x1B; // bool
    pub const m_bCameraSpace: usize = 0x1C; // bool
    pub const m_flBrightnessScale: usize = 0x20; // float
    pub const m_LightColor: usize = 0x24; // Color
    pub const m_flIntensity: usize = 0x28; // float
    pub const m_flLinearAttenuation: usize = 0x2C; // float
    pub const m_flQuadraticAttenuation: usize = 0x30; // float
    pub const m_bVolumetric: usize = 0x34; // bool
    pub const m_flVolumetricIntensity: usize = 0x38; // float
    pub const m_flNoiseStrength: usize = 0x3C; // float
    pub const m_flFlashlightTime: usize = 0x40; // float
    pub const m_nNumPlanes: usize = 0x44; // uint32_t
    pub const m_flPlaneOffset: usize = 0x48; // float
    pub const m_flColorTransitionTime: usize = 0x4C; // float
    pub const m_flAmbient: usize = 0x50; // float
    pub const m_SpotlightTextureName: usize = 0x54; // char[512]
    pub const m_nSpotlightTextureFrame: usize = 0x254; // int32_t
    pub const m_nShadowQuality: usize = 0x258; // uint32_t
    pub const m_flNearZ: usize = 0x25C; // float
    pub const m_flFarZ: usize = 0x260; // float
    pub const m_flProjectionSize: usize = 0x264; // float
    pub const m_flRotation: usize = 0x268; // float
    pub const m_bFlipHorizontal: usize = 0x26C; // bool
}

pub mod CPulseGraphInstance_ClientEntity { // CBasePulseGraphInstance
    pub const m_pParent: usize = 0xD8; // CClientScriptEntity*
}

pub mod CRenderComponent { // CEntityComponent
    pub const __m_pChainEntity: usize = 0x10; // CNetworkVarChainer
    pub const m_bIsRenderingWithViewModels: usize = 0x50; // bool
    pub const m_nSplitscreenFlags: usize = 0x54; // uint32_t
    pub const m_bEnableRendering: usize = 0x60; // bool
    pub const m_bInterpolationReadyToDraw: usize = 0xB0; // bool
}

pub mod CSMatchStats_t { // CSPerRoundStats_t
    pub const m_iEnemy5Ks: usize = 0x68; // int32_t
    pub const m_iEnemy4Ks: usize = 0x6C; // int32_t
    pub const m_iEnemy3Ks: usize = 0x70; // int32_t
    pub const m_iEnemyKnifeKills: usize = 0x74; // int32_t
    pub const m_iEnemyTaserKills: usize = 0x78; // int32_t
}

pub mod CSPerRoundStats_t {
    pub const m_iKills: usize = 0x30; // int32_t
    pub const m_iDeaths: usize = 0x34; // int32_t
    pub const m_iAssists: usize = 0x38; // int32_t
    pub const m_iDamage: usize = 0x3C; // int32_t
    pub const m_iEquipmentValue: usize = 0x40; // int32_t
    pub const m_iMoneySaved: usize = 0x44; // int32_t
    pub const m_iKillReward: usize = 0x48; // int32_t
    pub const m_iLiveTime: usize = 0x4C; // int32_t
    pub const m_iHeadShotKills: usize = 0x50; // int32_t
    pub const m_iObjective: usize = 0x54; // int32_t
    pub const m_iCashEarned: usize = 0x58; // int32_t
    pub const m_iUtilityDamage: usize = 0x5C; // int32_t
    pub const m_iEnemiesFlashed: usize = 0x60; // int32_t
}

pub mod CScriptComponent { // CEntityComponent
    pub const m_scriptClassName: usize = 0x30; // CUtlSymbolLarge
}

pub mod CServerOnlyModelEntity { // C_BaseModelEntity
}

pub mod CSkeletonInstance { // CGameSceneNode
    pub const m_modelState: usize = 0x160; // CModelState
    pub const m_bIsAnimationEnabled: usize = 0x370; // bool
    pub const m_bUseParentRenderBounds: usize = 0x371; // bool
    pub const m_bDisableSolidCollisionsForHierarchy: usize = 0x372; // bool
    pub const m_bDirtyMotionType: usize = 0x0; // bitfield:1
    pub const m_bIsGeneratingLatchedParentSpaceState: usize = 0x0; // bitfield:1
    pub const m_materialGroup: usize = 0x374; // CUtlStringToken
    pub const m_nHitboxSet: usize = 0x378; // uint8_t
}

pub mod CSkyboxReference { // C_BaseEntity
    pub const m_worldGroupId: usize = 0x550; // WorldGroupId_t
    pub const m_hSkyCamera: usize = 0x554; // CHandle<C_SkyCamera>
}

pub mod CTablet { // C_CSWeaponBase
}

pub mod CTakeDamageInfoAPI {
}

pub mod CTimeline { // IntervalTimer
    pub const m_flValues: usize = 0x10; // float[64]
    pub const m_nValueCounts: usize = 0x110; // int32_t[64]
    pub const m_nBucketCount: usize = 0x210; // int32_t
    pub const m_flInterval: usize = 0x214; // float
    pub const m_flFinalValue: usize = 0x218; // float
    pub const m_nCompressionType: usize = 0x21C; // TimelineCompression_t
    pub const m_bStopped: usize = 0x220; // bool
}

pub mod CTripWireFire { // C_BaseCSGrenade
}

pub mod CTripWireFireProjectile { // C_BaseGrenade
}

pub mod CWaterSplasher { // C_BaseModelEntity
}

pub mod CWeaponZoneRepulsor { // C_CSWeaponBaseGun
}

pub mod C_AK47 { // C_CSWeaponBaseGun
}

pub mod C_AttributeContainer { // CAttributeManager
    pub const m_Item: usize = 0x50; // C_EconItemView
    pub const m_iExternalItemProviderRegisteredToken: usize = 0x498; // int32_t
    pub const m_ullRegisteredAsItemID: usize = 0x4A0; // uint64_t
}

pub mod C_BarnLight { // C_BaseModelEntity
    pub const m_bEnabled: usize = 0xCD0; // bool
    pub const m_nColorMode: usize = 0xCD4; // int32_t
    pub const m_Color: usize = 0xCD8; // Color
    pub const m_flColorTemperature: usize = 0xCDC; // float
    pub const m_flBrightness: usize = 0xCE0; // float
    pub const m_flBrightnessScale: usize = 0xCE4; // float
    pub const m_nDirectLight: usize = 0xCE8; // int32_t
    pub const m_nBakedShadowIndex: usize = 0xCEC; // int32_t
    pub const m_nLuminaireShape: usize = 0xCF0; // int32_t
    pub const m_flLuminaireSize: usize = 0xCF4; // float
    pub const m_flLuminaireAnisotropy: usize = 0xCF8; // float
    pub const m_LightStyleString: usize = 0xD00; // CUtlString
    pub const m_flLightStyleStartTime: usize = 0xD08; // GameTime_t
    pub const m_QueuedLightStyleStrings: usize = 0xD10; // C_NetworkUtlVectorBase<CUtlString>
    pub const m_LightStyleEvents: usize = 0xD28; // C_NetworkUtlVectorBase<CUtlString>
    pub const m_LightStyleTargets: usize = 0xD40; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
    pub const m_StyleEvent: usize = 0xD58; // CEntityIOOutput[4]
    pub const m_hLightCookie: usize = 0xDF8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_flShape: usize = 0xE00; // float
    pub const m_flSoftX: usize = 0xE04; // float
    pub const m_flSoftY: usize = 0xE08; // float
    pub const m_flSkirt: usize = 0xE0C; // float
    pub const m_flSkirtNear: usize = 0xE10; // float
    pub const m_vSizeParams: usize = 0xE14; // Vector
    pub const m_flRange: usize = 0xE20; // float
    pub const m_vShear: usize = 0xE24; // Vector
    pub const m_nBakeSpecularToCubemaps: usize = 0xE30; // int32_t
    pub const m_vBakeSpecularToCubemapsSize: usize = 0xE34; // Vector
    pub const m_nCastShadows: usize = 0xE40; // int32_t
    pub const m_nShadowMapSize: usize = 0xE44; // int32_t
    pub const m_nShadowPriority: usize = 0xE48; // int32_t
    pub const m_bContactShadow: usize = 0xE4C; // bool
    pub const m_nBounceLight: usize = 0xE50; // int32_t
    pub const m_flBounceScale: usize = 0xE54; // float
    pub const m_flMinRoughness: usize = 0xE58; // float
    pub const m_vAlternateColor: usize = 0xE5C; // Vector
    pub const m_fAlternateColorBrightness: usize = 0xE68; // float
    pub const m_nFog: usize = 0xE6C; // int32_t
    pub const m_flFogStrength: usize = 0xE70; // float
    pub const m_nFogShadows: usize = 0xE74; // int32_t
    pub const m_flFogScale: usize = 0xE78; // float
    pub const m_flFadeSizeStart: usize = 0xE7C; // float
    pub const m_flFadeSizeEnd: usize = 0xE80; // float
    pub const m_flShadowFadeSizeStart: usize = 0xE84; // float
    pub const m_flShadowFadeSizeEnd: usize = 0xE88; // float
    pub const m_bPrecomputedFieldsValid: usize = 0xE8C; // bool
    pub const m_vPrecomputedBoundsMins: usize = 0xE90; // Vector
    pub const m_vPrecomputedBoundsMaxs: usize = 0xE9C; // Vector
    pub const m_vPrecomputedOBBOrigin: usize = 0xEA8; // Vector
    pub const m_vPrecomputedOBBAngles: usize = 0xEB4; // QAngle
    pub const m_vPrecomputedOBBExtent: usize = 0xEC0; // Vector
}

pub mod C_BaseButton { // C_BaseToggle
    pub const m_glowEntity: usize = 0xCD0; // CHandle<C_BaseModelEntity>
    pub const m_usable: usize = 0xCD4; // bool
    pub const m_szDisplayText: usize = 0xCD8; // CUtlSymbolLarge
}

pub mod C_BaseCSGrenade { // C_CSWeaponBase
    pub const m_bClientPredictDelete: usize = 0x1A70; // bool
    pub const m_bRedraw: usize = 0x1A71; // bool
    pub const m_bIsHeldByPlayer: usize = 0x1A72; // bool
    pub const m_bPinPulled: usize = 0x1A73; // bool
    pub const m_bJumpThrow: usize = 0x1A74; // bool
    pub const m_bThrowAnimating: usize = 0x1A75; // bool
    pub const m_fThrowTime: usize = 0x1A78; // GameTime_t
    pub const m_flThrowStrength: usize = 0x1A7C; // float
    pub const m_flThrowStrengthApproach: usize = 0x1A80; // float
    pub const m_fDropTime: usize = 0x1A84; // GameTime_t
    pub const m_bJustPulledPin: usize = 0x1A88; // bool
    pub const m_nNextHoldTick: usize = 0x1A8C; // GameTick_t
    pub const m_flNextHoldFrac: usize = 0x1A90; // float
    pub const m_hSwitchToWeaponAfterThrow: usize = 0x1A94; // CHandle<C_CSWeaponBase>
}

pub mod C_BaseCSGrenadeProjectile { // C_BaseGrenade
    pub const m_vInitialPosition: usize = 0x10C0; // Vector
    pub const m_vInitialVelocity: usize = 0x10CC; // Vector
    pub const m_nBounces: usize = 0x10D8; // int32_t
    pub const m_nExplodeEffectIndex: usize = 0x10E0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    pub const m_nExplodeEffectTickBegin: usize = 0x10E8; // int32_t
    pub const m_vecExplodeEffectOrigin: usize = 0x10EC; // Vector
    pub const m_flSpawnTime: usize = 0x10F8; // GameTime_t
    pub const vecLastTrailLinePos: usize = 0x10FC; // Vector
    pub const flNextTrailLineTime: usize = 0x1108; // GameTime_t
    pub const m_bExplodeEffectBegan: usize = 0x110C; // bool
    pub const m_bCanCreateGrenadeTrail: usize = 0x110D; // bool
    pub const m_nSnapshotTrajectoryEffectIndex: usize = 0x1110; // ParticleIndex_t
    pub const m_hSnapshotTrajectoryParticleSnapshot: usize = 0x1118; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
    pub const m_arrTrajectoryTrailPoints: usize = 0x1120; // CUtlVector<Vector>
    pub const m_arrTrajectoryTrailPointCreationTimes: usize = 0x1138; // CUtlVector<float>
    pub const m_flTrajectoryTrailEffectCreationTime: usize = 0x1150; // float
}

pub mod C_BaseClientUIEntity { // C_BaseModelEntity
    pub const m_bEnabled: usize = 0xCD8; // bool
    pub const m_DialogXMLName: usize = 0xCE0; // CUtlSymbolLarge
    pub const m_PanelClassName: usize = 0xCE8; // CUtlSymbolLarge
    pub const m_PanelID: usize = 0xCF0; // CUtlSymbolLarge
}

pub mod C_BaseCombatCharacter { // C_BaseFlex
    pub const m_hMyWearables: usize = 0x1070; // C_NetworkUtlVectorBase<CHandle<C_EconWearable>>
    pub const m_bloodColor: usize = 0x1088; // int32_t
    pub const m_leftFootAttachment: usize = 0x108C; // AttachmentHandle_t
    pub const m_rightFootAttachment: usize = 0x108D; // AttachmentHandle_t
    pub const m_nWaterWakeMode: usize = 0x1090; // C_BaseCombatCharacter::WaterWakeMode_t
    pub const m_flWaterWorldZ: usize = 0x1094; // float
    pub const m_flWaterNextTraceTime: usize = 0x1098; // float
    pub const m_flFieldOfView: usize = 0x109C; // float
}

pub mod C_BaseDoor { // C_BaseToggle
    pub const m_bIsUsable: usize = 0xCD0; // bool
}

pub mod C_BaseEntity { // CEntityInstance
    pub const m_CBodyComponent: usize = 0x38; // CBodyComponent*
    pub const m_NetworkTransmitComponent: usize = 0x40; // CNetworkTransmitComponent
    pub const m_nLastThinkTick: usize = 0x310; // GameTick_t
    pub const m_pGameSceneNode: usize = 0x318; // CGameSceneNode*
    pub const m_pRenderComponent: usize = 0x320; // CRenderComponent*
    pub const m_pCollision: usize = 0x328; // CCollisionProperty*
    pub const m_iMaxHealth: usize = 0x330; // int32_t
    pub const m_iHealth: usize = 0x334; // int32_t
    pub const m_lifeState: usize = 0x338; // uint8_t
    pub const m_bTakesDamage: usize = 0x339; // bool
    pub const m_nTakeDamageFlags: usize = 0x33C; // TakeDamageFlags_t
    pub const m_bIsPlatform: usize = 0x340; // bool
    pub const m_ubInterpolationFrame: usize = 0x341; // uint8_t
    pub const m_hSceneObjectController: usize = 0x344; // CHandle<C_BaseEntity>
    pub const m_nNoInterpolationTick: usize = 0x348; // int32_t
    pub const m_nVisibilityNoInterpolationTick: usize = 0x34C; // int32_t
    pub const m_flProxyRandomValue: usize = 0x350; // float
    pub const m_iEFlags: usize = 0x354; // int32_t
    pub const m_nWaterType: usize = 0x358; // uint8_t
    pub const m_bInterpolateEvenWithNoModel: usize = 0x359; // bool
    pub const m_bPredictionEligible: usize = 0x35A; // bool
    pub const m_bApplyLayerMatchIDToModel: usize = 0x35B; // bool
    pub const m_tokLayerMatchID: usize = 0x35C; // CUtlStringToken
    pub const m_nSubclassID: usize = 0x360; // CUtlStringToken
    pub const m_nSimulationTick: usize = 0x370; // int32_t
    pub const m_iCurrentThinkContext: usize = 0x374; // int32_t
    pub const m_aThinkFunctions: usize = 0x378; // CUtlVector<thinkfunc_t>
    pub const m_nDisableContextThinkStartTick: usize = 0x390; // GameTick_t
    pub const m_flAnimTime: usize = 0x394; // float
    pub const m_flSimulationTime: usize = 0x398; // float
    pub const m_nSceneObjectOverrideFlags: usize = 0x39C; // uint8_t
    pub const m_bHasSuccessfullyInterpolated: usize = 0x39D; // bool
    pub const m_bHasAddedVarsToInterpolation: usize = 0x39E; // bool
    pub const m_bRenderEvenWhenNotSuccessfullyInterpolated: usize = 0x39F; // bool
    pub const m_nInterpolationLatchDirtyFlags: usize = 0x3A0; // int32_t[2]
    pub const m_ListEntry: usize = 0x3A8; // uint16_t[11]
    pub const m_flCreateTime: usize = 0x3C0; // GameTime_t
    pub const m_flSpeed: usize = 0x3C4; // float
    pub const m_EntClientFlags: usize = 0x3C8; // uint16_t
    pub const m_bClientSideRagdoll: usize = 0x3CA; // bool
    pub const m_iTeamNum: usize = 0x3CB; // uint8_t
    pub const m_spawnflags: usize = 0x3CC; // uint32_t
    pub const m_nNextThinkTick: usize = 0x3D0; // GameTick_t
    pub const m_fFlags: usize = 0x3D4; // uint32_t
    pub const m_vecAbsVelocity: usize = 0x3D8; // Vector
    pub const m_vecVelocity: usize = 0x3E8; // CNetworkVelocityVector
    pub const m_vecBaseVelocity: usize = 0x418; // Vector
    pub const m_hEffectEntity: usize = 0x424; // CHandle<C_BaseEntity>
    pub const m_hOwnerEntity: usize = 0x428; // CHandle<C_BaseEntity>
    pub const m_MoveCollide: usize = 0x42C; // MoveCollide_t
    pub const m_MoveType: usize = 0x42D; // MoveType_t
    pub const m_nActualMoveType: usize = 0x42E; // MoveType_t
    pub const m_flWaterLevel: usize = 0x430; // float
    pub const m_fEffects: usize = 0x434; // uint32_t
    pub const m_hGroundEntity: usize = 0x438; // CHandle<C_BaseEntity>
    pub const m_flFriction: usize = 0x43C; // float
    pub const m_flElasticity: usize = 0x440; // float
    pub const m_flGravityScale: usize = 0x444; // float
    pub const m_flTimeScale: usize = 0x448; // float
    pub const m_bAnimatedEveryTick: usize = 0x44C; // bool
    pub const m_flNavIgnoreUntilTime: usize = 0x450; // GameTime_t
    pub const m_hThink: usize = 0x454; // uint16_t
    pub const m_fBBoxVisFlags: usize = 0x460; // uint8_t
    pub const m_bPredictable: usize = 0x461; // bool
    pub const m_bRenderWithViewModels: usize = 0x462; // bool
    pub const m_nSplitUserPlayerPredictionSlot: usize = 0x464; // CSplitScreenSlot
    pub const m_nFirstPredictableCommand: usize = 0x468; // int32_t
    pub const m_nLastPredictableCommand: usize = 0x46C; // int32_t
    pub const m_hOldMoveParent: usize = 0x470; // CHandle<C_BaseEntity>
    pub const m_Particles: usize = 0x478; // CParticleProperty
    pub const m_vecPredictedScriptFloats: usize = 0x4A0; // CUtlVector<float>
    pub const m_vecPredictedScriptFloatIDs: usize = 0x4B8; // CUtlVector<int32_t>
    pub const m_nNextScriptVarRecordID: usize = 0x4E8; // int32_t
    pub const m_vecAngVelocity: usize = 0x4F8; // QAngle
    pub const m_DataChangeEventRef: usize = 0x504; // int32_t
    pub const m_dependencies: usize = 0x508; // CUtlVector<CEntityHandle>
    pub const m_nCreationTick: usize = 0x520; // int32_t
    pub const m_bAnimTimeChanged: usize = 0x539; // bool
    pub const m_bSimulationTimeChanged: usize = 0x53A; // bool
    pub const m_sUniqueHammerID: usize = 0x548; // CUtlString
}

pub mod C_BaseEntityAPI {
}

pub mod C_BaseFire { // C_BaseEntity
    pub const m_flScale: usize = 0x550; // float
    pub const m_flStartScale: usize = 0x554; // float
    pub const m_flScaleTime: usize = 0x558; // float
    pub const m_nFlags: usize = 0x55C; // uint32_t
}

pub mod C_BaseFlex { // CBaseAnimGraph
    pub const m_flexWeight: usize = 0xEE8; // C_NetworkUtlVectorBase<float>
    pub const m_vLookTargetPosition: usize = 0xF00; // Vector
    pub const m_blinktoggle: usize = 0xF18; // bool
    pub const m_nLastFlexUpdateFrameCount: usize = 0xF78; // int32_t
    pub const m_CachedViewTarget: usize = 0xF7C; // Vector
    pub const m_nNextSceneEventId: usize = 0xF88; // uint32_t
    pub const m_iBlink: usize = 0xF8C; // int32_t
    pub const m_blinktime: usize = 0xF90; // float
    pub const m_prevblinktoggle: usize = 0xF94; // bool
    pub const m_iJawOpen: usize = 0xF98; // int32_t
    pub const m_flJawOpenAmount: usize = 0xF9C; // float
    pub const m_flBlinkAmount: usize = 0xFA0; // float
    pub const m_iMouthAttachment: usize = 0xFA4; // AttachmentHandle_t
    pub const m_iEyeAttachment: usize = 0xFA5; // AttachmentHandle_t
    pub const m_bResetFlexWeightsOnModelChange: usize = 0xFA6; // bool
    pub const m_nEyeOcclusionRendererBone: usize = 0xFC0; // int32_t
    pub const m_mEyeOcclusionRendererCameraToBoneTransform: usize = 0xFC4; // matrix3x4_t
    pub const m_vEyeOcclusionRendererHalfExtent: usize = 0xFF4; // Vector
    pub const m_PhonemeClasses: usize = 0x1010; // C_BaseFlex::Emphasized_Phoneme[3]
}

pub mod C_BaseFlex_Emphasized_Phoneme {
    pub const m_sClassName: usize = 0x0; // CUtlString
    pub const m_flAmount: usize = 0x18; // float
    pub const m_bRequired: usize = 0x1C; // bool
    pub const m_bBasechecked: usize = 0x1D; // bool
    pub const m_bValid: usize = 0x1E; // bool
}

pub mod C_BaseGrenade { // C_BaseFlex
    pub const m_bHasWarnedAI: usize = 0x1070; // bool
    pub const m_bIsSmokeGrenade: usize = 0x1071; // bool
    pub const m_bIsLive: usize = 0x1072; // bool
    pub const m_DmgRadius: usize = 0x1074; // float
    pub const m_flDetonateTime: usize = 0x1078; // GameTime_t
    pub const m_flWarnAITime: usize = 0x107C; // float
    pub const m_flDamage: usize = 0x1080; // float
    pub const m_iszBounceSound: usize = 0x1088; // CUtlSymbolLarge
    pub const m_ExplosionSound: usize = 0x1090; // CUtlString
    pub const m_hThrower: usize = 0x109C; // CHandle<C_CSPlayerPawn>
    pub const m_flNextAttack: usize = 0x10B4; // GameTime_t
    pub const m_hOriginalThrower: usize = 0x10B8; // CHandle<C_CSPlayerPawn>
}

pub mod C_BaseModelEntity { // C_BaseEntity
    pub const m_CRenderComponent: usize = 0xA20; // CRenderComponent*
    pub const m_CHitboxComponent: usize = 0xA28; // CHitboxComponent
    pub const m_bInitModelEffects: usize = 0xA70; // bool
    pub const m_bIsStaticProp: usize = 0xA71; // bool
    pub const m_nLastAddDecal: usize = 0xA74; // int32_t
    pub const m_nDecalsAdded: usize = 0xA78; // int32_t
    pub const m_iOldHealth: usize = 0xA7C; // int32_t
    pub const m_nRenderMode: usize = 0xA80; // RenderMode_t
    pub const m_nRenderFX: usize = 0xA81; // RenderFx_t
    pub const m_bAllowFadeInView: usize = 0xA82; // bool
    pub const m_clrRender: usize = 0xA83; // Color
    pub const m_vecRenderAttributes: usize = 0xA88; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
    pub const m_bRenderToCubemaps: usize = 0xAF0; // bool
    pub const m_Collision: usize = 0xAF8; // CCollisionProperty
    pub const m_Glow: usize = 0xBA8; // CGlowProperty
    pub const m_flGlowBackfaceMult: usize = 0xC00; // float
    pub const m_fadeMinDist: usize = 0xC04; // float
    pub const m_fadeMaxDist: usize = 0xC08; // float
    pub const m_flFadeScale: usize = 0xC0C; // float
    pub const m_flShadowStrength: usize = 0xC10; // float
    pub const m_nObjectCulling: usize = 0xC14; // uint8_t
    pub const m_nAddDecal: usize = 0xC18; // int32_t
    pub const m_vDecalPosition: usize = 0xC1C; // Vector
    pub const m_vDecalForwardAxis: usize = 0xC28; // Vector
    pub const m_flDecalHealBloodRate: usize = 0xC34; // float
    pub const m_flDecalHealHeightRate: usize = 0xC38; // float
    pub const m_ConfigEntitiesToPropagateMaterialDecalsTo: usize = 0xC40; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
    pub const m_vecViewOffset: usize = 0xC58; // CNetworkViewOffsetVector
    pub const m_pClientAlphaProperty: usize = 0xC88; // CClientAlphaProperty*
    pub const m_ClientOverrideTint: usize = 0xC90; // Color
    pub const m_bUseClientOverrideTint: usize = 0xC94; // bool
}

pub mod C_BasePlayerPawn { // C_BaseCombatCharacter
    pub const m_pWeaponServices: usize = 0x1100; // CPlayer_WeaponServices*
    pub const m_pItemServices: usize = 0x1108; // CPlayer_ItemServices*
    pub const m_pAutoaimServices: usize = 0x1110; // CPlayer_AutoaimServices*
    pub const m_pObserverServices: usize = 0x1118; // CPlayer_ObserverServices*
    pub const m_pWaterServices: usize = 0x1120; // CPlayer_WaterServices*
    pub const m_pUseServices: usize = 0x1128; // CPlayer_UseServices*
    pub const m_pFlashlightServices: usize = 0x1130; // CPlayer_FlashlightServices*
    pub const m_pCameraServices: usize = 0x1138; // CPlayer_CameraServices*
    pub const m_pMovementServices: usize = 0x1140; // CPlayer_MovementServices*
    pub const m_ServerViewAngleChanges: usize = 0x1150; // C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
    pub const m_nHighestConsumedServerViewAngleChangeIndex: usize = 0x11A0; // uint32_t
    pub const v_angle: usize = 0x11A4; // QAngle
    pub const v_anglePrevious: usize = 0x11B0; // QAngle
    pub const m_iHideHUD: usize = 0x11BC; // uint32_t
    pub const m_skybox3d: usize = 0x11C0; // sky3dparams_t
    pub const m_flDeathTime: usize = 0x1250; // GameTime_t
    pub const m_vecPredictionError: usize = 0x1254; // Vector
    pub const m_flPredictionErrorTime: usize = 0x1260; // GameTime_t
    pub const m_vecLastCameraSetupLocalOrigin: usize = 0x1264; // Vector
    pub const m_flLastCameraSetupTime: usize = 0x1270; // GameTime_t
    pub const m_flFOVSensitivityAdjust: usize = 0x1274; // float
    pub const m_flMouseSensitivity: usize = 0x1278; // float
    pub const m_vOldOrigin: usize = 0x127C; // Vector
    pub const m_flOldSimulationTime: usize = 0x1288; // float
    pub const m_nLastExecutedCommandNumber: usize = 0x128C; // int32_t
    pub const m_nLastExecutedCommandTick: usize = 0x1290; // int32_t
    pub const m_hController: usize = 0x1294; // CHandle<CBasePlayerController>
    pub const m_bIsSwappingToPredictableController: usize = 0x1298; // bool
}

pub mod C_BasePlayerWeapon { // C_EconEntity
    pub const m_nNextPrimaryAttackTick: usize = 0x15B8; // GameTick_t
    pub const m_flNextPrimaryAttackTickRatio: usize = 0x15BC; // float
    pub const m_nNextSecondaryAttackTick: usize = 0x15C0; // GameTick_t
    pub const m_flNextSecondaryAttackTickRatio: usize = 0x15C4; // float
    pub const m_iClip1: usize = 0x15C8; // int32_t
    pub const m_iClip2: usize = 0x15CC; // int32_t
    pub const m_pReserveAmmo: usize = 0x15D0; // int32_t[2]
}

pub mod C_BasePropDoor { // C_DynamicProp
    pub const m_eDoorState: usize = 0x1150; // DoorState_t
    pub const m_modelChanged: usize = 0x1154; // bool
    pub const m_bLocked: usize = 0x1155; // bool
    pub const m_closedPosition: usize = 0x1158; // Vector
    pub const m_closedAngles: usize = 0x1164; // QAngle
    pub const m_hMaster: usize = 0x1170; // CHandle<C_BasePropDoor>
    pub const m_vWhereToSetLightingOrigin: usize = 0x1174; // Vector
}

pub mod C_BaseToggle { // C_BaseModelEntity
}

pub mod C_BaseTrigger { // C_BaseToggle
    pub const m_bDisabled: usize = 0xCD0; // bool
    pub const m_bClientSidePredicted: usize = 0xCD1; // bool
}

pub mod C_BaseViewModel { // CBaseAnimGraph
    pub const m_vecLastFacing: usize = 0xEE0; // Vector
    pub const m_nViewModelIndex: usize = 0xEEC; // uint32_t
    pub const m_nAnimationParity: usize = 0xEF0; // uint32_t
    pub const m_flAnimationStartTime: usize = 0xEF4; // float
    pub const m_hWeapon: usize = 0xEF8; // CHandle<C_BasePlayerWeapon>
    pub const m_sVMName: usize = 0xF00; // CUtlSymbolLarge
    pub const m_sAnimationPrefix: usize = 0xF08; // CUtlSymbolLarge
    pub const m_hWeaponModel: usize = 0xF10; // CHandle<C_ViewmodelWeapon>
    pub const m_iCameraAttachment: usize = 0xF14; // AttachmentHandle_t
    pub const m_vecLastCameraAngles: usize = 0xF18; // QAngle
    pub const m_previousElapsedDuration: usize = 0xF24; // float
    pub const m_previousCycle: usize = 0xF28; // float
    pub const m_nOldAnimationParity: usize = 0xF2C; // int32_t
    pub const m_hOldLayerSequence: usize = 0xF30; // HSequence
    pub const m_oldLayer: usize = 0xF34; // int32_t
    pub const m_oldLayerStartTime: usize = 0xF38; // float
    pub const m_hControlPanel: usize = 0xF3C; // CHandle<C_BaseEntity>
}

pub mod C_Beam { // C_BaseModelEntity
    pub const m_flFrameRate: usize = 0xCD0; // float
    pub const m_flHDRColorScale: usize = 0xCD4; // float
    pub const m_flFireTime: usize = 0xCD8; // GameTime_t
    pub const m_flDamage: usize = 0xCDC; // float
    pub const m_nNumBeamEnts: usize = 0xCE0; // uint8_t
    pub const m_queryHandleHalo: usize = 0xCE4; // int32_t
    pub const m_hBaseMaterial: usize = 0xD08; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_nHaloIndex: usize = 0xD10; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_nBeamType: usize = 0xD18; // BeamType_t
    pub const m_nBeamFlags: usize = 0xD1C; // uint32_t
    pub const m_hAttachEntity: usize = 0xD20; // CHandle<C_BaseEntity>[10]
    pub const m_nAttachIndex: usize = 0xD48; // AttachmentHandle_t[10]
    pub const m_fWidth: usize = 0xD54; // float
    pub const m_fEndWidth: usize = 0xD58; // float
    pub const m_fFadeLength: usize = 0xD5C; // float
    pub const m_fHaloScale: usize = 0xD60; // float
    pub const m_fAmplitude: usize = 0xD64; // float
    pub const m_fStartFrame: usize = 0xD68; // float
    pub const m_fSpeed: usize = 0xD6C; // float
    pub const m_flFrame: usize = 0xD70; // float
    pub const m_nClipStyle: usize = 0xD74; // BeamClipStyle_t
    pub const m_bTurnedOff: usize = 0xD78; // bool
    pub const m_vecEndPos: usize = 0xD7C; // Vector
    pub const m_hEndEntity: usize = 0xD88; // CHandle<C_BaseEntity>
}

pub mod C_Breakable { // C_BaseModelEntity
}

pub mod C_BreakableProp { // CBaseProp
    pub const m_OnBreak: usize = 0xF20; // CEntityIOOutput
    pub const m_OnHealthChanged: usize = 0xF48; // CEntityOutputTemplate<float>
    pub const m_OnTakeDamage: usize = 0xF70; // CEntityIOOutput
    pub const m_impactEnergyScale: usize = 0xF98; // float
    pub const m_iMinHealthDmg: usize = 0xF9C; // int32_t
    pub const m_flPressureDelay: usize = 0xFA0; // float
    pub const m_hBreaker: usize = 0xFA4; // CHandle<C_BaseEntity>
    pub const m_PerformanceMode: usize = 0xFA8; // PerformanceMode_t
    pub const m_flDmgModBullet: usize = 0xFAC; // float
    pub const m_flDmgModClub: usize = 0xFB0; // float
    pub const m_flDmgModExplosive: usize = 0xFB4; // float
    pub const m_flDmgModFire: usize = 0xFB8; // float
    pub const m_iszPhysicsDamageTableName: usize = 0xFC0; // CUtlSymbolLarge
    pub const m_iszBasePropData: usize = 0xFC8; // CUtlSymbolLarge
    pub const m_iInteractions: usize = 0xFD0; // int32_t
    pub const m_flPreventDamageBeforeTime: usize = 0xFD4; // GameTime_t
    pub const m_bHasBreakPiecesOrCommands: usize = 0xFD8; // bool
    pub const m_explodeDamage: usize = 0xFDC; // float
    pub const m_explodeRadius: usize = 0xFE0; // float
    pub const m_explosionDelay: usize = 0xFE8; // float
    pub const m_explosionBuildupSound: usize = 0xFF0; // CUtlSymbolLarge
    pub const m_explosionCustomEffect: usize = 0xFF8; // CUtlSymbolLarge
    pub const m_explosionCustomSound: usize = 0x1000; // CUtlSymbolLarge
    pub const m_explosionModifier: usize = 0x1008; // CUtlSymbolLarge
    pub const m_hPhysicsAttacker: usize = 0x1010; // CHandle<C_BasePlayerPawn>
    pub const m_flLastPhysicsInfluenceTime: usize = 0x1014; // GameTime_t
    pub const m_flDefaultFadeScale: usize = 0x1018; // float
    pub const m_hLastAttacker: usize = 0x101C; // CHandle<C_BaseEntity>
    pub const m_hFlareEnt: usize = 0x1020; // CHandle<C_BaseEntity>
    pub const m_noGhostCollision: usize = 0x1024; // bool
}

pub mod C_BulletHitModel { // CBaseAnimGraph
    pub const m_matLocal: usize = 0xED8; // matrix3x4_t
    pub const m_iBoneIndex: usize = 0xF08; // int32_t
    pub const m_hPlayerParent: usize = 0xF0C; // CHandle<C_BaseEntity>
    pub const m_bIsHit: usize = 0xF10; // bool
    pub const m_flTimeCreated: usize = 0xF14; // float
    pub const m_vecStartPos: usize = 0xF18; // Vector
}

pub mod C_C4 { // C_CSWeaponBase
    pub const m_szScreenText: usize = 0x1A70; // char[32]
    pub const m_activeLightParticleIndex: usize = 0x1A90; // ParticleIndex_t
    pub const m_eActiveLightEffect: usize = 0x1A94; // C4LightEffect_t
    pub const m_bStartedArming: usize = 0x1A98; // bool
    pub const m_fArmedTime: usize = 0x1A9C; // GameTime_t
    pub const m_bBombPlacedAnimation: usize = 0x1AA0; // bool
    pub const m_bIsPlantingViaUse: usize = 0x1AA1; // bool
    pub const m_entitySpottedState: usize = 0x1AA8; // EntitySpottedState_t
    pub const m_nSpotRules: usize = 0x1AC0; // int32_t
    pub const m_bPlayedArmingBeeps: usize = 0x1AC4; // bool[7]
    pub const m_bBombPlanted: usize = 0x1ACB; // bool
}

pub mod C_CSGOViewModel { // C_PredictedViewModel
    pub const m_bShouldIgnoreOffsetAndAccuracy: usize = 0xF68; // bool
    pub const m_nWeaponParity: usize = 0xF6C; // uint32_t
    pub const m_nOldWeaponParity: usize = 0xF70; // uint32_t
    pub const m_nLastKnownAssociatedWeaponEntIndex: usize = 0xF74; // CEntityIndex
    pub const m_bNeedToQueueHighResComposite: usize = 0xF78; // bool
    pub const m_vLoweredWeaponOffset: usize = 0xFDC; // QAngle
}

pub mod C_CSGO_CounterTerroristTeamIntroCamera { // C_CSGO_TeamPreviewCamera
}

pub mod C_CSGO_CounterTerroristWingmanIntroCamera { // C_CSGO_TeamPreviewCamera
}

pub mod C_CSGO_EndOfMatchCamera { // C_CSGO_TeamPreviewCamera
}

pub mod C_CSGO_EndOfMatchCharacterPosition { // C_CSGO_TeamPreviewCharacterPosition
}

pub mod C_CSGO_EndOfMatchLineupEnd { // C_CSGO_EndOfMatchLineupEndpoint
}

pub mod C_CSGO_EndOfMatchLineupEndpoint { // C_BaseEntity
}

pub mod C_CSGO_EndOfMatchLineupStart { // C_CSGO_EndOfMatchLineupEndpoint
}

pub mod C_CSGO_MapPreviewCameraPath { // C_BaseEntity
    pub const m_flZFar: usize = 0x550; // float
    pub const m_flZNear: usize = 0x554; // float
    pub const m_bLoop: usize = 0x558; // bool
    pub const m_bVerticalFOV: usize = 0x559; // bool
    pub const m_bConstantSpeed: usize = 0x55A; // bool
    pub const m_flDuration: usize = 0x55C; // float
    pub const m_flPathLength: usize = 0x5A0; // float
    pub const m_flPathDuration: usize = 0x5A4; // float
}

pub mod C_CSGO_MapPreviewCameraPathNode { // C_BaseEntity
    pub const m_szParentPathUniqueID: usize = 0x550; // CUtlSymbolLarge
    pub const m_nPathIndex: usize = 0x558; // int32_t
    pub const m_vInTangentLocal: usize = 0x55C; // Vector
    pub const m_vOutTangentLocal: usize = 0x568; // Vector
    pub const m_flFOV: usize = 0x574; // float
    pub const m_flSpeed: usize = 0x578; // float
    pub const m_flEaseIn: usize = 0x57C; // float
    pub const m_flEaseOut: usize = 0x580; // float
    pub const m_vInTangentWorld: usize = 0x584; // Vector
    pub const m_vOutTangentWorld: usize = 0x590; // Vector
}

pub mod C_CSGO_PreviewModel { // C_BaseFlex
    pub const m_animgraph: usize = 0x1070; // CUtlString
    pub const m_animgraphCharacterModeString: usize = 0x1078; // CGlobalSymbol
    pub const m_defaultAnim: usize = 0x1080; // CUtlString
    pub const m_nDefaultAnimLoopMode: usize = 0x1088; // AnimLoopMode_t
    pub const m_flInitialModelScale: usize = 0x108C; // float
    pub const m_sInitialWeaponState: usize = 0x1090; // CUtlString
}

pub mod C_CSGO_PreviewModelAlias_csgo_item_previewmodel { // C_CSGO_PreviewModel
}

pub mod C_CSGO_PreviewModel_GraphController { // CAnimGraphControllerBase
    pub const m_pszCharacterMode: usize = 0x18; // CAnimGraphParamOptionalRef<char*>
    pub const m_pszWeaponState: usize = 0x38; // CAnimGraphParamOptionalRef<char*>
    pub const m_pszWeaponType: usize = 0x58; // CAnimGraphParamOptionalRef<char*>
    pub const m_pszEndOfMatchCelebration: usize = 0x78; // CAnimGraphParamOptionalRef<char*>
}

pub mod C_CSGO_PreviewPlayer { // C_CSPlayerPawn
    pub const m_animgraph: usize = 0x2418; // CUtlString
    pub const m_animgraphCharacterModeString: usize = 0x2420; // CGlobalSymbol
    pub const m_flInitialModelScale: usize = 0x2428; // float
}

pub mod C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel { // C_CSGO_PreviewPlayer
}

pub mod C_CSGO_PreviewPlayer_GraphController { // CAnimGraphControllerBase
    pub const m_pszCharacterMode: usize = 0x18; // CAnimGraphParamOptionalRef<char*>
    pub const m_pszTeamPreviewVariant: usize = 0x38; // CAnimGraphParamOptionalRef<char*>
    pub const m_pszTeamPreviewPosition: usize = 0x58; // CAnimGraphParamOptionalRef<char*>
    pub const m_pszEndOfMatchCelebration: usize = 0x78; // CAnimGraphParamOptionalRef<char*>
    pub const m_nTeamPreviewRandom: usize = 0x98; // CAnimGraphParamOptionalRef<int32_t>
    pub const m_pszWeaponState: usize = 0xB0; // CAnimGraphParamOptionalRef<char*>
    pub const m_pszWeaponType: usize = 0xD0; // CAnimGraphParamOptionalRef<char*>
    pub const m_bCT: usize = 0xF0; // CAnimGraphParamOptionalRef<bool>
}

pub mod C_CSGO_TeamIntroCharacterPosition { // C_CSGO_TeamPreviewCharacterPosition
}

pub mod C_CSGO_TeamIntroCounterTerroristPosition { // C_CSGO_TeamIntroCharacterPosition
}

pub mod C_CSGO_TeamIntroTerroristPosition { // C_CSGO_TeamIntroCharacterPosition
}

pub mod C_CSGO_TeamPreviewCamera { // C_CSGO_MapPreviewCameraPath
    pub const m_nVariant: usize = 0x5B0; // int32_t
    pub const m_bDofEnabled: usize = 0x5B4; // bool
    pub const m_flDofNearBlurry: usize = 0x5B8; // float
    pub const m_flDofNearCrisp: usize = 0x5BC; // float
    pub const m_flDofFarCrisp: usize = 0x5C0; // float
    pub const m_flDofFarBlurry: usize = 0x5C4; // float
    pub const m_flDofTiltToGround: usize = 0x5C8; // float
}

pub mod C_CSGO_TeamPreviewCharacterPosition { // C_BaseEntity
    pub const m_nVariant: usize = 0x550; // int32_t
    pub const m_nRandom: usize = 0x554; // int32_t
    pub const m_nOrdinal: usize = 0x558; // int32_t
    pub const m_sWeaponName: usize = 0x560; // CUtlString
    pub const m_xuid: usize = 0x568; // uint64_t
    pub const m_agentItem: usize = 0x570; // C_EconItemView
    pub const m_glovesItem: usize = 0x9B8; // C_EconItemView
    pub const m_weaponItem: usize = 0xE00; // C_EconItemView
}

pub mod C_CSGO_TeamPreviewModel { // C_CSGO_PreviewPlayer
}

pub mod C_CSGO_TeamSelectCamera { // C_CSGO_TeamPreviewCamera
}

pub mod C_CSGO_TeamSelectCharacterPosition { // C_CSGO_TeamPreviewCharacterPosition
}

pub mod C_CSGO_TeamSelectCounterTerroristPosition { // C_CSGO_TeamSelectCharacterPosition
}

pub mod C_CSGO_TeamSelectTerroristPosition { // C_CSGO_TeamSelectCharacterPosition
}

pub mod C_CSGO_TerroristTeamIntroCamera { // C_CSGO_TeamPreviewCamera
}

pub mod C_CSGO_TerroristWingmanIntroCamera { // C_CSGO_TeamPreviewCamera
}

pub mod C_CSGameRules { // C_TeamplayRules
    pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
    pub const m_bFreezePeriod: usize = 0x30; // bool
    pub const m_bWarmupPeriod: usize = 0x31; // bool
    pub const m_fWarmupPeriodEnd: usize = 0x34; // GameTime_t
    pub const m_fWarmupPeriodStart: usize = 0x38; // GameTime_t
    pub const m_nTotalPausedTicks: usize = 0x3C; // int32_t
    pub const m_nPauseStartTick: usize = 0x40; // int32_t
    pub const m_bServerPaused: usize = 0x44; // bool
    pub const m_bGamePaused: usize = 0x45; // bool
    pub const m_bTerroristTimeOutActive: usize = 0x46; // bool
    pub const m_bCTTimeOutActive: usize = 0x47; // bool
    pub const m_flTerroristTimeOutRemaining: usize = 0x48; // float
    pub const m_flCTTimeOutRemaining: usize = 0x4C; // float
    pub const m_nTerroristTimeOuts: usize = 0x50; // int32_t
    pub const m_nCTTimeOuts: usize = 0x54; // int32_t
    pub const m_bTechnicalTimeOut: usize = 0x58; // bool
    pub const m_bMatchWaitingForResume: usize = 0x59; // bool
    pub const m_iRoundTime: usize = 0x5C; // int32_t
    pub const m_fMatchStartTime: usize = 0x60; // float
    pub const m_fRoundStartTime: usize = 0x64; // GameTime_t
    pub const m_flRestartRoundTime: usize = 0x68; // GameTime_t
    pub const m_bGameRestart: usize = 0x6C; // bool
    pub const m_flGameStartTime: usize = 0x70; // float
    pub const m_timeUntilNextPhaseStarts: usize = 0x74; // float
    pub const m_gamePhase: usize = 0x78; // int32_t
    pub const m_totalRoundsPlayed: usize = 0x7C; // int32_t
    pub const m_nRoundsPlayedThisPhase: usize = 0x80; // int32_t
    pub const m_nOvertimePlaying: usize = 0x84; // int32_t
    pub const m_iHostagesRemaining: usize = 0x88; // int32_t
    pub const m_bAnyHostageReached: usize = 0x8C; // bool
    pub const m_bMapHasBombTarget: usize = 0x8D; // bool
    pub const m_bMapHasRescueZone: usize = 0x8E; // bool
    pub const m_bMapHasBuyZone: usize = 0x8F; // bool
    pub const m_bIsQueuedMatchmaking: usize = 0x90; // bool
    pub const m_nQueuedMatchmakingMode: usize = 0x94; // int32_t
    pub const m_bIsValveDS: usize = 0x98; // bool
    pub const m_bLogoMap: usize = 0x99; // bool
    pub const m_bPlayAllStepSoundsOnServer: usize = 0x9A; // bool
    pub const m_iSpectatorSlotCount: usize = 0x9C; // int32_t
    pub const m_MatchDevice: usize = 0xA0; // int32_t
    pub const m_bHasMatchStarted: usize = 0xA4; // bool
    pub const m_nNextMapInMapgroup: usize = 0xA8; // int32_t
    pub const m_szTournamentEventName: usize = 0xAC; // char[512]
    pub const m_szTournamentEventStage: usize = 0x2AC; // char[512]
    pub const m_szMatchStatTxt: usize = 0x4AC; // char[512]
    pub const m_szTournamentPredictionsTxt: usize = 0x6AC; // char[512]
    pub const m_nTournamentPredictionsPct: usize = 0x8AC; // int32_t
    pub const m_flCMMItemDropRevealStartTime: usize = 0x8B0; // GameTime_t
    pub const m_flCMMItemDropRevealEndTime: usize = 0x8B4; // GameTime_t
    pub const m_bIsDroppingItems: usize = 0x8B8; // bool
    pub const m_bIsQuestEligible: usize = 0x8B9; // bool
    pub const m_bIsHltvActive: usize = 0x8BA; // bool
    pub const m_nGuardianModeWaveNumber: usize = 0x8BC; // int32_t
    pub const m_nGuardianModeSpecialKillsRemaining: usize = 0x8C0; // int32_t
    pub const m_nGuardianModeSpecialWeaponNeeded: usize = 0x8C4; // int32_t
    pub const m_nGuardianGrenadesToGiveBots: usize = 0x8C8; // int32_t
    pub const m_nNumHeaviesToSpawn: usize = 0x8CC; // int32_t
    pub const m_numGlobalGiftsGiven: usize = 0x8D0; // uint32_t
    pub const m_numGlobalGifters: usize = 0x8D4; // uint32_t
    pub const m_numGlobalGiftsPeriodSeconds: usize = 0x8D8; // uint32_t
    pub const m_arrFeaturedGiftersAccounts: usize = 0x8DC; // uint32_t[4]
    pub const m_arrFeaturedGiftersGifts: usize = 0x8EC; // uint32_t[4]
    pub const m_arrProhibitedItemIndices: usize = 0x8FC; // uint16_t[100]
    pub const m_arrTournamentActiveCasterAccounts: usize = 0x9C4; // uint32_t[4]
    pub const m_numBestOfMaps: usize = 0x9D4; // int32_t
    pub const m_nHalloweenMaskListSeed: usize = 0x9D8; // int32_t
    pub const m_bBombDropped: usize = 0x9DC; // bool
    pub const m_bBombPlanted: usize = 0x9DD; // bool
    pub const m_iRoundWinStatus: usize = 0x9E0; // int32_t
    pub const m_eRoundWinReason: usize = 0x9E4; // int32_t
    pub const m_bTCantBuy: usize = 0x9E8; // bool
    pub const m_bCTCantBuy: usize = 0x9E9; // bool
    pub const m_flGuardianBuyUntilTime: usize = 0x9EC; // GameTime_t
    pub const m_iMatchStats_RoundResults: usize = 0x9F0; // int32_t[30]
    pub const m_iMatchStats_PlayersAlive_CT: usize = 0xA68; // int32_t[30]
    pub const m_iMatchStats_PlayersAlive_T: usize = 0xAE0; // int32_t[30]
    pub const m_TeamRespawnWaveTimes: usize = 0xB58; // float[32]
    pub const m_flNextRespawnWave: usize = 0xBD8; // GameTime_t[32]
    pub const m_nServerQuestID: usize = 0xC58; // int32_t
    pub const m_vMinimapMins: usize = 0xC5C; // Vector
    pub const m_vMinimapMaxs: usize = 0xC68; // Vector
    pub const m_MinimapVerticalSectionHeights: usize = 0xC74; // float[8]
    pub const m_bDontIncrementCoopWave: usize = 0xC94; // bool
    pub const m_bSpawnedTerrorHuntHeavy: usize = 0xC95; // bool
    pub const m_nEndMatchMapGroupVoteTypes: usize = 0xC98; // int32_t[10]
    pub const m_nEndMatchMapGroupVoteOptions: usize = 0xCC0; // int32_t[10]
    pub const m_nEndMatchMapVoteWinner: usize = 0xCE8; // int32_t
    pub const m_iNumConsecutiveCTLoses: usize = 0xCEC; // int32_t
    pub const m_iNumConsecutiveTerroristLoses: usize = 0xCF0; // int32_t
    pub const m_bMarkClientStopRecordAtRoundEnd: usize = 0xD10; // bool
    pub const m_nMatchAbortedEarlyReason: usize = 0xD68; // int32_t
    pub const m_bHasTriggeredRoundStartMusic: usize = 0xD6C; // bool
    pub const m_bHasTriggeredCoopSpawnReset: usize = 0xD6D; // bool
    pub const m_bSwitchingTeamsAtRoundReset: usize = 0xD6E; // bool
    pub const m_pGameModeRules: usize = 0xD88; // CCSGameModeRules*
    pub const m_RetakeRules: usize = 0xD90; // C_RetakeGameRules
    pub const m_nMatchEndCount: usize = 0xEA8; // uint8_t
    pub const m_nTTeamIntroVariant: usize = 0xEAC; // int32_t
    pub const m_nCTTeamIntroVariant: usize = 0xEB0; // int32_t
    pub const m_bTeamIntroPeriod: usize = 0xEB4; // bool
    pub const m_iRoundEndWinnerTeam: usize = 0xEB8; // int32_t
    pub const m_eRoundEndReason: usize = 0xEBC; // int32_t
    pub const m_bRoundEndShowTimerDefend: usize = 0xEC0; // bool
    pub const m_iRoundEndTimerTime: usize = 0xEC4; // int32_t
    pub const m_sRoundEndFunFactToken: usize = 0xEC8; // CUtlString
    pub const m_iRoundEndFunFactPlayerSlot: usize = 0xED0; // CPlayerSlot
    pub const m_iRoundEndFunFactData1: usize = 0xED4; // int32_t
    pub const m_iRoundEndFunFactData2: usize = 0xED8; // int32_t
    pub const m_iRoundEndFunFactData3: usize = 0xEDC; // int32_t
    pub const m_sRoundEndMessage: usize = 0xEE0; // CUtlString
    pub const m_iRoundEndPlayerCount: usize = 0xEE8; // int32_t
    pub const m_bRoundEndNoMusic: usize = 0xEEC; // bool
    pub const m_iRoundEndLegacy: usize = 0xEF0; // int32_t
    pub const m_nRoundEndCount: usize = 0xEF4; // uint8_t
    pub const m_iRoundStartRoundNumber: usize = 0xEF8; // int32_t
    pub const m_nRoundStartCount: usize = 0xEFC; // uint8_t
    pub const m_flLastPerfSampleTime: usize = 0x4F08; // double
}

pub mod C_CSGameRulesProxy { // C_GameRulesProxy
    pub const m_pGameRules: usize = 0x550; // C_CSGameRules*
}

pub mod C_CSMinimapBoundary { // C_BaseEntity
}

pub mod C_CSObserverPawn { // C_CSPlayerPawnBase
    pub const m_hDetectParentChange: usize = 0x1718; // CEntityHandle
}

pub mod C_CSObserverPawnAPI {
}

pub mod C_CSPlayerPawn { // C_CSPlayerPawnBase
    pub const m_pBulletServices: usize = 0x1718; // CCSPlayer_BulletServices*
    pub const m_pHostageServices: usize = 0x1720; // CCSPlayer_HostageServices*
    pub const m_pBuyServices: usize = 0x1728; // CCSPlayer_BuyServices*
    pub const m_pGlowServices: usize = 0x1730; // CCSPlayer_GlowServices*
    pub const m_pActionTrackingServices: usize = 0x1738; // CCSPlayer_ActionTrackingServices*
    pub const m_flHealthShotBoostExpirationTime: usize = 0x1740; // GameTime_t
    pub const m_flLastFiredWeaponTime: usize = 0x1744; // GameTime_t
    pub const m_bHasFemaleVoice: usize = 0x1748; // bool
    pub const m_flLandseconds: usize = 0x174C; // float
    pub const m_flOldFallVelocity: usize = 0x1750; // float
    pub const m_szLastPlaceName: usize = 0x1754; // char[18]
    pub const m_bPrevDefuser: usize = 0x1766; // bool
    pub const m_bPrevHelmet: usize = 0x1767; // bool
    pub const m_nPrevArmorVal: usize = 0x1768; // int32_t
    pub const m_nPrevGrenadeAmmoCount: usize = 0x176C; // int32_t
    pub const m_unPreviousWeaponHash: usize = 0x1770; // uint32_t
    pub const m_unWeaponHash: usize = 0x1774; // uint32_t
    pub const m_bInBuyZone: usize = 0x1778; // bool
    pub const m_bPreviouslyInBuyZone: usize = 0x1779; // bool
    pub const m_aimPunchAngle: usize = 0x177C; // QAngle
    pub const m_aimPunchAngleVel: usize = 0x1788; // QAngle
    pub const m_aimPunchTickBase: usize = 0x1794; // int32_t
    pub const m_aimPunchTickFraction: usize = 0x1798; // float
    pub const m_aimPunchCache: usize = 0x17A0; // CUtlVector<QAngle>
    pub const m_bInLanding: usize = 0x17C0; // bool
    pub const m_flLandingTime: usize = 0x17C4; // float
    pub const m_bInHostageRescueZone: usize = 0x17C8; // bool
    pub const m_bInBombZone: usize = 0x17C9; // bool
    pub const m_bIsBuyMenuOpen: usize = 0x17CA; // bool
    pub const m_flTimeOfLastInjury: usize = 0x17CC; // GameTime_t
    pub const m_flNextSprayDecalTime: usize = 0x17D0; // GameTime_t
    pub const m_iRetakesOffering: usize = 0x18E8; // int32_t
    pub const m_iRetakesOfferingCard: usize = 0x18EC; // int32_t
    pub const m_bRetakesHasDefuseKit: usize = 0x18F0; // bool
    pub const m_bRetakesMVPLastRound: usize = 0x18F1; // bool
    pub const m_iRetakesMVPBoostItem: usize = 0x18F4; // int32_t
    pub const m_RetakesMVPBoostExtraUtility: usize = 0x18F8; // loadout_slot_t
    pub const m_bNeedToReApplyGloves: usize = 0x1918; // bool
    pub const m_EconGloves: usize = 0x1920; // C_EconItemView
    pub const m_nEconGlovesChanged: usize = 0x1D68; // uint8_t
    pub const m_bMustSyncRagdollState: usize = 0x1D69; // bool
    pub const m_nRagdollDamageBone: usize = 0x1D6C; // int32_t
    pub const m_vRagdollDamageForce: usize = 0x1D70; // Vector
    pub const m_vRagdollDamagePosition: usize = 0x1D7C; // Vector
    pub const m_szRagdollDamageWeaponName: usize = 0x1D88; // char[64]
    pub const m_bRagdollDamageHeadshot: usize = 0x1DC8; // bool
    pub const m_vRagdollServerOrigin: usize = 0x1DCC; // Vector
    pub const m_bLastHeadBoneTransformIsValid: usize = 0x23E0; // bool
    pub const m_lastLandTime: usize = 0x23E4; // GameTime_t
    pub const m_bOnGroundLastTick: usize = 0x23E8; // bool
    pub const m_qDeathEyeAngles: usize = 0x2404; // QAngle
    pub const m_bSkipOneHeadConstraintUpdate: usize = 0x2410; // bool
}

pub mod C_CSPlayerPawnAPI {
}

pub mod C_CSPlayerPawnBase { // C_BasePlayerPawn
    pub const m_pPingServices: usize = 0x12C0; // CCSPlayer_PingServices*
    pub const m_pViewModelServices: usize = 0x12C8; // CPlayer_ViewModelServices*
    pub const m_fRenderingClipPlane: usize = 0x12D8; // float[4]
    pub const m_nLastClipPlaneSetupFrame: usize = 0x12E8; // int32_t
    pub const m_vecLastClipCameraPos: usize = 0x12EC; // Vector
    pub const m_vecLastClipCameraForward: usize = 0x12F8; // Vector
    pub const m_bClipHitStaticWorld: usize = 0x1304; // bool
    pub const m_bCachedPlaneIsValid: usize = 0x1305; // bool
    pub const m_pClippingWeapon: usize = 0x1308; // C_CSWeaponBase*
    pub const m_previousPlayerState: usize = 0x1310; // CSPlayerState
    pub const m_flLastCollisionCeiling: usize = 0x1314; // float
    pub const m_flLastCollisionCeilingChangeTime: usize = 0x1318; // float
    pub const m_grenadeParameterStashTime: usize = 0x1338; // GameTime_t
    pub const m_bGrenadeParametersStashed: usize = 0x133C; // bool
    pub const m_angStashedShootAngles: usize = 0x1340; // QAngle
    pub const m_vecStashedGrenadeThrowPosition: usize = 0x134C; // Vector
    pub const m_vecStashedVelocity: usize = 0x1358; // Vector
    pub const m_angShootAngleHistory: usize = 0x1364; // QAngle[2]
    pub const m_vecThrowPositionHistory: usize = 0x137C; // Vector[2]
    pub const m_vecVelocityHistory: usize = 0x1394; // Vector[2]
    pub const m_thirdPersonHeading: usize = 0x13B0; // QAngle
    pub const m_flSlopeDropOffset: usize = 0x13C8; // float
    pub const m_flSlopeDropHeight: usize = 0x13D8; // float
    pub const m_vHeadConstraintOffset: usize = 0x13E8; // Vector
    pub const m_bIsScoped: usize = 0x1400; // bool
    pub const m_bIsWalking: usize = 0x1401; // bool
    pub const m_bResumeZoom: usize = 0x1402; // bool
    pub const m_iPlayerState: usize = 0x1404; // CSPlayerState
    pub const m_bIsDefusing: usize = 0x1408; // bool
    pub const m_bIsGrabbingHostage: usize = 0x1409; // bool
    pub const m_iBlockingUseActionInProgress: usize = 0x140C; // CSPlayerBlockingUseAction_t
    pub const m_bIsRescuing: usize = 0x1410; // bool
    pub const m_fImmuneToGunGameDamageTime: usize = 0x1414; // GameTime_t
    pub const m_fImmuneToGunGameDamageTimeLast: usize = 0x1418; // GameTime_t
    pub const m_bGunGameImmunity: usize = 0x141C; // bool
    pub const m_GunGameImmunityColor: usize = 0x141D; // Color
    pub const m_bHasMovedSinceSpawn: usize = 0x1421; // bool
    pub const m_fMolotovUseTime: usize = 0x1424; // float
    pub const m_fMolotovDamageTime: usize = 0x1428; // float
    pub const m_nWhichBombZone: usize = 0x142C; // int32_t
    pub const m_bInNoDefuseArea: usize = 0x1430; // bool
    pub const m_iThrowGrenadeCounter: usize = 0x1434; // int32_t
    pub const m_bWaitForNoAttack: usize = 0x1438; // bool
    pub const m_flGuardianTooFarDistFrac: usize = 0x143C; // float
    pub const m_flDetectedByEnemySensorTime: usize = 0x1440; // GameTime_t
    pub const m_flNextGuardianTooFarWarning: usize = 0x1444; // float
    pub const m_bSuppressGuardianTooFarWarningAudio: usize = 0x1448; // bool
    pub const m_bKilledByTaser: usize = 0x1449; // bool
    pub const m_iMoveState: usize = 0x144C; // int32_t
    pub const m_bCanMoveDuringFreezePeriod: usize = 0x1450; // bool
    pub const m_flLowerBodyYawTarget: usize = 0x1454; // float
    pub const m_bStrafing: usize = 0x1458; // bool
    pub const m_flLastSpawnTimeIndex: usize = 0x145C; // GameTime_t
    pub const m_flEmitSoundTime: usize = 0x1460; // GameTime_t
    pub const m_iAddonBits: usize = 0x1464; // int32_t
    pub const m_iPrimaryAddon: usize = 0x1468; // int32_t
    pub const m_iSecondaryAddon: usize = 0x146C; // int32_t
    pub const m_iProgressBarDuration: usize = 0x1470; // int32_t
    pub const m_flProgressBarStartTime: usize = 0x1474; // float
    pub const m_iDirection: usize = 0x1478; // int32_t
    pub const m_iShotsFired: usize = 0x147C; // int32_t
    pub const m_bNightVisionOn: usize = 0x1480; // bool
    pub const m_bHasNightVision: usize = 0x1481; // bool
    pub const m_flVelocityModifier: usize = 0x1484; // float
    pub const m_flHitHeading: usize = 0x1488; // float
    pub const m_nHitBodyPart: usize = 0x148C; // int32_t
    pub const m_iStartAccount: usize = 0x1490; // int32_t
    pub const m_vecIntroStartEyePosition: usize = 0x1494; // Vector
    pub const m_vecIntroStartPlayerForward: usize = 0x14A0; // Vector
    pub const m_flClientDeathTime: usize = 0x14AC; // GameTime_t
    pub const m_flNightVisionAlpha: usize = 0x14B0; // float
    pub const m_bScreenTearFrameCaptured: usize = 0x14B4; // bool
    pub const m_flFlashBangTime: usize = 0x14B8; // float
    pub const m_flFlashScreenshotAlpha: usize = 0x14BC; // float
    pub const m_flFlashOverlayAlpha: usize = 0x14C0; // float
    pub const m_bFlashBuildUp: usize = 0x14C4; // bool
    pub const m_bFlashDspHasBeenCleared: usize = 0x14C5; // bool
    pub const m_bFlashScreenshotHasBeenGrabbed: usize = 0x14C6; // bool
    pub const m_flFlashMaxAlpha: usize = 0x14C8; // float
    pub const m_flFlashDuration: usize = 0x14CC; // float
    pub const m_lastStandingPos: usize = 0x14D0; // Vector
    pub const m_vecLastMuzzleFlashPos: usize = 0x14DC; // Vector
    pub const m_angLastMuzzleFlashAngle: usize = 0x14E8; // QAngle
    pub const m_hMuzzleFlashShape: usize = 0x14F4; // CHandle<C_BaseEntity>
    pub const m_iHealthBarRenderMaskIndex: usize = 0x14F8; // int32_t
    pub const m_flHealthFadeValue: usize = 0x14FC; // float
    pub const m_flHealthFadeAlpha: usize = 0x1500; // float
    pub const m_nMyCollisionGroup: usize = 0x1504; // int32_t
    pub const m_ignoreLadderJumpTime: usize = 0x1508; // float
    pub const m_ladderSurpressionTimer: usize = 0x1510; // CountdownTimer
    pub const m_lastLadderNormal: usize = 0x1528; // Vector
    pub const m_lastLadderPos: usize = 0x1534; // Vector
    pub const m_flDeathCCWeight: usize = 0x1548; // float
    pub const m_bOldIsScoped: usize = 0x154C; // bool
    pub const m_flPrevRoundEndTime: usize = 0x1550; // float
    pub const m_flPrevMatchEndTime: usize = 0x1554; // float
    pub const m_unCurrentEquipmentValue: usize = 0x1558; // uint16_t
    pub const m_unRoundStartEquipmentValue: usize = 0x155A; // uint16_t
    pub const m_unFreezetimeEndEquipmentValue: usize = 0x155C; // uint16_t
    pub const m_vecThirdPersonViewPositionOverride: usize = 0x1560; // Vector
    pub const m_nHeavyAssaultSuitCooldownRemaining: usize = 0x156C; // int32_t
    pub const m_ArmorValue: usize = 0x1570; // int32_t
    pub const m_angEyeAngles: usize = 0x1578; // QAngle
    pub const m_fNextThinkPushAway: usize = 0x1590; // float
    pub const m_bShouldAutobuyDMWeapons: usize = 0x1594; // bool
    pub const m_bShouldAutobuyNow: usize = 0x1595; // bool
    pub const m_bHud_MiniScoreHidden: usize = 0x1596; // bool
    pub const m_bHud_RadarHidden: usize = 0x1597; // bool
    pub const m_nLastKillerIndex: usize = 0x1598; // CEntityIndex
    pub const m_nLastConcurrentKilled: usize = 0x159C; // int32_t
    pub const m_nDeathCamMusic: usize = 0x15A0; // int32_t
    pub const m_iIDEntIndex: usize = 0x15A4; // CEntityIndex
    pub const m_delayTargetIDTimer: usize = 0x15A8; // CountdownTimer
    pub const m_iTargetedWeaponEntIndex: usize = 0x15C0; // CEntityIndex
    pub const m_iOldIDEntIndex: usize = 0x15C4; // CEntityIndex
    pub const m_holdTargetIDTimer: usize = 0x15C8; // CountdownTimer
    pub const m_flCurrentMusicStartTime: usize = 0x15E4; // float
    pub const m_flMusicRoundStartTime: usize = 0x15E8; // float
    pub const m_bDeferStartMusicOnWarmup: usize = 0x15EC; // bool
    pub const m_cycleLatch: usize = 0x15F0; // int32_t
    pub const m_serverIntendedCycle: usize = 0x15F4; // float
    pub const m_vecPlayerPatchEconIndices: usize = 0x15F8; // uint32_t[5]
    pub const m_bHideTargetID: usize = 0x1614; // bool
    pub const m_flLastSmokeOverlayAlpha: usize = 0x1618; // float
    pub const m_flLastSmokeAge: usize = 0x161C; // float
    pub const m_vLastSmokeOverlayColor: usize = 0x1620; // Vector
    pub const m_nPlayerSmokedFx: usize = 0x162C; // ParticleIndex_t
    pub const m_nPlayerInfernoBodyFx: usize = 0x1630; // ParticleIndex_t
    pub const m_nPlayerInfernoFootFx: usize = 0x1634; // ParticleIndex_t
    pub const m_flNextMagDropTime: usize = 0x1638; // float
    pub const m_nLastMagDropAttachmentIndex: usize = 0x163C; // int32_t
    pub const m_vecBulletHitModels: usize = 0x1640; // CUtlVector<C_BulletHitModel*>
    pub const m_vecPickupModelSlerpers: usize = 0x1658; // CUtlVector<C_PickUpModelSlerper*>
    pub const m_vecLastAliveLocalVelocity: usize = 0x1670; // Vector
    pub const m_entitySpottedState: usize = 0x1698; // EntitySpottedState_t
    pub const m_nSurvivalTeamNumber: usize = 0x16B0; // int32_t
    pub const m_bGuardianShouldSprayCustomXMark: usize = 0x16B4; // bool
    pub const m_bHasDeathInfo: usize = 0x16B5; // bool
    pub const m_flDeathInfoTime: usize = 0x16B8; // float
    pub const m_vecDeathInfoOrigin: usize = 0x16BC; // Vector
    pub const m_bKilledByHeadshot: usize = 0x16C8; // bool
    pub const m_hOriginalController: usize = 0x16CC; // CHandle<CCSPlayerController>
}

pub mod C_CSPlayerResource { // C_BaseEntity
    pub const m_bHostageAlive: usize = 0x550; // bool[12]
    pub const m_isHostageFollowingSomeone: usize = 0x55C; // bool[12]
    pub const m_iHostageEntityIDs: usize = 0x568; // CEntityIndex[12]
    pub const m_bombsiteCenterA: usize = 0x598; // Vector
    pub const m_bombsiteCenterB: usize = 0x5A4; // Vector
    pub const m_hostageRescueX: usize = 0x5B0; // int32_t[4]
    pub const m_hostageRescueY: usize = 0x5C0; // int32_t[4]
    pub const m_hostageRescueZ: usize = 0x5D0; // int32_t[4]
    pub const m_bEndMatchNextMapAllVoted: usize = 0x5E0; // bool
    pub const m_foundGoalPositions: usize = 0x5E1; // bool
}

pub mod C_CSTeam { // C_Team
    pub const m_szTeamMatchStat: usize = 0x608; // char[512]
    pub const m_numMapVictories: usize = 0x808; // int32_t
    pub const m_bSurrendered: usize = 0x80C; // bool
    pub const m_scoreFirstHalf: usize = 0x810; // int32_t
    pub const m_scoreSecondHalf: usize = 0x814; // int32_t
    pub const m_scoreOvertime: usize = 0x818; // int32_t
    pub const m_szClanTeamname: usize = 0x81C; // char[129]
    pub const m_iClanID: usize = 0x8A0; // uint32_t
    pub const m_szTeamFlagImage: usize = 0x8A4; // char[8]
    pub const m_szTeamLogoImage: usize = 0x8AC; // char[8]
}

pub mod C_CSWeaponBase { // C_BasePlayerWeapon
    pub const m_flFireSequenceStartTime: usize = 0x162C; // float
    pub const m_nFireSequenceStartTimeChange: usize = 0x1630; // int32_t
    pub const m_nFireSequenceStartTimeAck: usize = 0x1634; // int32_t
    pub const m_ePlayerFireEvent: usize = 0x1638; // PlayerAnimEvent_t
    pub const m_ePlayerFireEventAttackType: usize = 0x163C; // WeaponAttackType_t
    pub const m_seqIdle: usize = 0x1640; // HSequence
    pub const m_seqFirePrimary: usize = 0x1644; // HSequence
    pub const m_seqFireSecondary: usize = 0x1648; // HSequence
    pub const m_thirdPersonFireSequences: usize = 0x1650; // CUtlVector<HSequence>
    pub const m_hCurrentThirdPersonSequence: usize = 0x1668; // HSequence
    pub const m_nSilencerBoneIndex: usize = 0x166C; // int32_t
    pub const m_thirdPersonSequences: usize = 0x1670; // HSequence[7]
    pub const m_ClientPreviousWeaponState: usize = 0x16A8; // CSWeaponState_t
    pub const m_iState: usize = 0x16AC; // CSWeaponState_t
    pub const m_flCrosshairDistance: usize = 0x16B0; // float
    pub const m_iAmmoLastCheck: usize = 0x16B4; // int32_t
    pub const m_iAlpha: usize = 0x16B8; // int32_t
    pub const m_iScopeTextureID: usize = 0x16BC; // int32_t
    pub const m_iCrosshairTextureID: usize = 0x16C0; // int32_t
    pub const m_flGunAccuracyPositionDeprecated: usize = 0x16C4; // float
    pub const m_nLastEmptySoundCmdNum: usize = 0x16C8; // int32_t
    pub const m_nViewModelIndex: usize = 0x16CC; // uint32_t
    pub const m_bReloadsWithClips: usize = 0x16D0; // bool
    pub const m_flTimeWeaponIdle: usize = 0x16D4; // GameTime_t
    pub const m_bFireOnEmpty: usize = 0x16D8; // bool
    pub const m_OnPlayerPickup: usize = 0x16E0; // CEntityIOOutput
    pub const m_weaponMode: usize = 0x1708; // CSWeaponMode
    pub const m_flTurningInaccuracyDelta: usize = 0x170C; // float
    pub const m_vecTurningInaccuracyEyeDirLast: usize = 0x1710; // Vector
    pub const m_flTurningInaccuracy: usize = 0x171C; // float
    pub const m_fAccuracyPenalty: usize = 0x1720; // float
    pub const m_flLastAccuracyUpdateTime: usize = 0x1724; // GameTime_t
    pub const m_fAccuracySmoothedForZoom: usize = 0x1728; // float
    pub const m_fScopeZoomEndTime: usize = 0x172C; // GameTime_t
    pub const m_iRecoilIndex: usize = 0x1730; // int32_t
    pub const m_flRecoilIndex: usize = 0x1734; // float
    pub const m_bBurstMode: usize = 0x1738; // bool
    pub const m_nPostponeFireReadyTicks: usize = 0x173C; // GameTick_t
    pub const m_flPostponeFireReadyFrac: usize = 0x1740; // float
    pub const m_bInReload: usize = 0x1744; // bool
    pub const m_bReloadVisuallyComplete: usize = 0x1745; // bool
    pub const m_flDroppedAtTime: usize = 0x1748; // GameTime_t
    pub const m_bIsHauledBack: usize = 0x174C; // bool
    pub const m_bSilencerOn: usize = 0x174D; // bool
    pub const m_flTimeSilencerSwitchComplete: usize = 0x1750; // GameTime_t
    pub const m_iOriginalTeamNumber: usize = 0x1754; // int32_t
    pub const m_flNextAttackRenderTimeOffset: usize = 0x1758; // float
    pub const m_bVisualsDataSet: usize = 0x17E0; // bool
    pub const m_bOldFirstPersonSpectatedState: usize = 0x17E1; // bool
    pub const m_hOurPing: usize = 0x17E4; // CHandle<C_BaseEntity>
    pub const m_nOurPingIndex: usize = 0x17E8; // CEntityIndex
    pub const m_vecOurPingPos: usize = 0x17EC; // Vector
    pub const m_bGlowForPing: usize = 0x17F8; // bool
    pub const m_bUIWeapon: usize = 0x17F9; // bool
    pub const m_hPrevOwner: usize = 0x1808; // CHandle<C_CSPlayerPawn>
    pub const m_nDropTick: usize = 0x180C; // GameTick_t
    pub const m_donated: usize = 0x182C; // bool
    pub const m_fLastShotTime: usize = 0x1830; // GameTime_t
    pub const m_bWasOwnedByCT: usize = 0x1834; // bool
    pub const m_bWasOwnedByTerrorist: usize = 0x1835; // bool
    pub const m_gunHeat: usize = 0x1838; // float
    pub const m_smokeAttachments: usize = 0x183C; // uint32_t
    pub const m_lastSmokeTime: usize = 0x1840; // GameTime_t
    pub const m_flNextClientFireBulletTime: usize = 0x1844; // float
    pub const m_flNextClientFireBulletTime_Repredict: usize = 0x1848; // float
    pub const m_IronSightController: usize = 0x1920; // C_IronSightController
    pub const m_iIronSightMode: usize = 0x19D0; // int32_t
    pub const m_flLastLOSTraceFailureTime: usize = 0x19E0; // GameTime_t
    pub const m_iNumEmptyAttacks: usize = 0x19E4; // int32_t
    pub const m_flLastMagDropRequestTime: usize = 0x1A60; // GameTime_t
    pub const m_flWatTickOffset: usize = 0x1A64; // float
}

pub mod C_CSWeaponBaseGun { // C_CSWeaponBase
    pub const m_zoomLevel: usize = 0x1A70; // int32_t
    pub const m_iBurstShotsRemaining: usize = 0x1A74; // int32_t
    pub const m_iSilencerBodygroup: usize = 0x1A78; // int32_t
    pub const m_silencedModelIndex: usize = 0x1A88; // int32_t
    pub const m_inPrecache: usize = 0x1A8C; // bool
    pub const m_bNeedsBoltAction: usize = 0x1A8D; // bool
}

pub mod C_Chicken { // C_DynamicProp
    pub const m_hHolidayHatAddon: usize = 0x1148; // CHandle<CBaseAnimGraph>
    pub const m_jumpedThisFrame: usize = 0x114C; // bool
    pub const m_leader: usize = 0x1150; // CHandle<C_CSPlayerPawn>
    pub const m_AttributeManager: usize = 0x1158; // C_AttributeContainer
    pub const m_OriginalOwnerXuidLow: usize = 0x1600; // uint32_t
    pub const m_OriginalOwnerXuidHigh: usize = 0x1604; // uint32_t
    pub const m_bAttributesInitialized: usize = 0x1608; // bool
    pub const m_hWaterWakeParticles: usize = 0x160C; // ParticleIndex_t
}

pub mod C_ClientRagdoll { // CBaseAnimGraph
    pub const m_bFadeOut: usize = 0xED8; // bool
    pub const m_bImportant: usize = 0xED9; // bool
    pub const m_flEffectTime: usize = 0xEDC; // GameTime_t
    pub const m_gibDespawnTime: usize = 0xEE0; // GameTime_t
    pub const m_iCurrentFriction: usize = 0xEE4; // int32_t
    pub const m_iMinFriction: usize = 0xEE8; // int32_t
    pub const m_iMaxFriction: usize = 0xEEC; // int32_t
    pub const m_iFrictionAnimState: usize = 0xEF0; // int32_t
    pub const m_bReleaseRagdoll: usize = 0xEF4; // bool
    pub const m_iEyeAttachment: usize = 0xEF5; // AttachmentHandle_t
    pub const m_bFadingOut: usize = 0xEF6; // bool
    pub const m_flScaleEnd: usize = 0xEF8; // float[10]
    pub const m_flScaleTimeStart: usize = 0xF20; // GameTime_t[10]
    pub const m_flScaleTimeEnd: usize = 0xF48; // GameTime_t[10]
}

pub mod C_ColorCorrection { // C_BaseEntity
    pub const m_vecOrigin: usize = 0x550; // Vector
    pub const m_MinFalloff: usize = 0x55C; // float
    pub const m_MaxFalloff: usize = 0x560; // float
    pub const m_flFadeInDuration: usize = 0x564; // float
    pub const m_flFadeOutDuration: usize = 0x568; // float
    pub const m_flMaxWeight: usize = 0x56C; // float
    pub const m_flCurWeight: usize = 0x570; // float
    pub const m_netlookupFilename: usize = 0x574; // char[512]
    pub const m_bEnabled: usize = 0x774; // bool
    pub const m_bMaster: usize = 0x775; // bool
    pub const m_bClientSide: usize = 0x776; // bool
    pub const m_bExclusive: usize = 0x777; // bool
    pub const m_bEnabledOnClient: usize = 0x778; // bool[1]
    pub const m_flCurWeightOnClient: usize = 0x77C; // float[1]
    pub const m_bFadingIn: usize = 0x780; // bool[1]
    pub const m_flFadeStartWeight: usize = 0x784; // float[1]
    pub const m_flFadeStartTime: usize = 0x788; // float[1]
    pub const m_flFadeDuration: usize = 0x78C; // float[1]
}

pub mod C_ColorCorrectionVolume { // C_BaseTrigger
    pub const m_LastEnterWeight: usize = 0xCD8; // float
    pub const m_LastEnterTime: usize = 0xCDC; // float
    pub const m_LastExitWeight: usize = 0xCE0; // float
    pub const m_LastExitTime: usize = 0xCE4; // float
    pub const m_bEnabled: usize = 0xCE8; // bool
    pub const m_MaxWeight: usize = 0xCEC; // float
    pub const m_FadeDuration: usize = 0xCF0; // float
    pub const m_Weight: usize = 0xCF4; // float
    pub const m_lookupFilename: usize = 0xCF8; // char[512]
}

pub mod C_CommandContext {
    pub const needsprocessing: usize = 0x0; // bool
    pub const command_number: usize = 0x90; // int32_t
}

pub mod C_CsmFovOverride { // C_BaseEntity
    pub const m_cameraName: usize = 0x550; // CUtlString
    pub const m_flCsmFovOverrideValue: usize = 0x558; // float
}

pub mod C_DEagle { // C_CSWeaponBaseGun
}

pub mod C_DecoyGrenade { // C_BaseCSGrenade
}

pub mod C_DecoyProjectile { // C_BaseCSGrenadeProjectile
    pub const m_nDecoyShotTick: usize = 0x1158; // int32_t
    pub const m_nClientLastKnownDecoyShotTick: usize = 0x115C; // int32_t
    pub const m_flTimeParticleEffectSpawn: usize = 0x1180; // GameTime_t
}

pub mod C_DynamicLight { // C_BaseModelEntity
    pub const m_Flags: usize = 0xCD0; // uint8_t
    pub const m_LightStyle: usize = 0xCD1; // uint8_t
    pub const m_Radius: usize = 0xCD4; // float
    pub const m_Exponent: usize = 0xCD8; // int32_t
    pub const m_InnerAngle: usize = 0xCDC; // float
    pub const m_OuterAngle: usize = 0xCE0; // float
    pub const m_SpotRadius: usize = 0xCE4; // float
}

pub mod C_DynamicProp { // C_BreakableProp
    pub const m_bUseHitboxesForRenderBox: usize = 0x1028; // bool
    pub const m_bUseAnimGraph: usize = 0x1029; // bool
    pub const m_pOutputAnimBegun: usize = 0x1030; // CEntityIOOutput
    pub const m_pOutputAnimOver: usize = 0x1058; // CEntityIOOutput
    pub const m_pOutputAnimLoopCycleOver: usize = 0x1080; // CEntityIOOutput
    pub const m_OnAnimReachedStart: usize = 0x10A8; // CEntityIOOutput
    pub const m_OnAnimReachedEnd: usize = 0x10D0; // CEntityIOOutput
    pub const m_iszIdleAnim: usize = 0x10F8; // CUtlSymbolLarge
    pub const m_nIdleAnimLoopMode: usize = 0x1100; // AnimLoopMode_t
    pub const m_bRandomizeCycle: usize = 0x1104; // bool
    pub const m_bStartDisabled: usize = 0x1105; // bool
    pub const m_bFiredStartEndOutput: usize = 0x1106; // bool
    pub const m_bForceNpcExclude: usize = 0x1107; // bool
    pub const m_bCreateNonSolid: usize = 0x1108; // bool
    pub const m_bIsOverrideProp: usize = 0x1109; // bool
    pub const m_iInitialGlowState: usize = 0x110C; // int32_t
    pub const m_nGlowRange: usize = 0x1110; // int32_t
    pub const m_nGlowRangeMin: usize = 0x1114; // int32_t
    pub const m_glowColor: usize = 0x1118; // Color
    pub const m_nGlowTeam: usize = 0x111C; // int32_t
    pub const m_iCachedFrameCount: usize = 0x1120; // int32_t
    pub const m_vecCachedRenderMins: usize = 0x1124; // Vector
    pub const m_vecCachedRenderMaxs: usize = 0x1130; // Vector
}

pub mod C_DynamicPropAlias_cable_dynamic { // C_DynamicProp
}

pub mod C_DynamicPropAlias_dynamic_prop { // C_DynamicProp
}

pub mod C_DynamicPropAlias_prop_dynamic_override { // C_DynamicProp
}

pub mod C_EconEntity { // C_BaseFlex
    pub const m_flFlexDelayTime: usize = 0x1080; // float
    pub const m_flFlexDelayedWeight: usize = 0x1088; // float*
    pub const m_bAttributesInitialized: usize = 0x1090; // bool
    pub const m_AttributeManager: usize = 0x1098; // C_AttributeContainer
    pub const m_OriginalOwnerXuidLow: usize = 0x1540; // uint32_t
    pub const m_OriginalOwnerXuidHigh: usize = 0x1544; // uint32_t
    pub const m_nFallbackPaintKit: usize = 0x1548; // int32_t
    pub const m_nFallbackSeed: usize = 0x154C; // int32_t
    pub const m_flFallbackWear: usize = 0x1550; // float
    pub const m_nFallbackStatTrak: usize = 0x1554; // int32_t
    pub const m_bClientside: usize = 0x1558; // bool
    pub const m_bParticleSystemsCreated: usize = 0x1559; // bool
    pub const m_vecAttachedParticles: usize = 0x1560; // CUtlVector<int32_t>
    pub const m_hViewmodelAttachment: usize = 0x1578; // CHandle<CBaseAnimGraph>
    pub const m_iOldTeam: usize = 0x157C; // int32_t
    pub const m_bAttachmentDirty: usize = 0x1580; // bool
    pub const m_nUnloadedModelIndex: usize = 0x1584; // int32_t
    pub const m_iNumOwnerValidationRetries: usize = 0x1588; // int32_t
    pub const m_hOldProvidee: usize = 0x1598; // CHandle<C_BaseEntity>
    pub const m_vecAttachedModels: usize = 0x15A0; // CUtlVector<C_EconEntity::AttachedModelData_t>
}

pub mod C_EconEntity_AttachedModelData_t {
    pub const m_iModelDisplayFlags: usize = 0x0; // int32_t
}

pub mod C_EconItemView { // IEconItemInterface
    pub const m_bInventoryImageRgbaRequested: usize = 0x60; // bool
    pub const m_bInventoryImageTriedCache: usize = 0x61; // bool
    pub const m_nInventoryImageRgbaWidth: usize = 0x80; // int32_t
    pub const m_nInventoryImageRgbaHeight: usize = 0x84; // int32_t
    pub const m_szCurrentLoadCachedFileName: usize = 0x88; // char[260]
    pub const m_bRestoreCustomMaterialAfterPrecache: usize = 0x1B8; // bool
    pub const m_iItemDefinitionIndex: usize = 0x1BA; // uint16_t
    pub const m_iEntityQuality: usize = 0x1BC; // int32_t
    pub const m_iEntityLevel: usize = 0x1C0; // uint32_t
    pub const m_iItemID: usize = 0x1C8; // uint64_t
    pub const m_iItemIDHigh: usize = 0x1D0; // uint32_t
    pub const m_iItemIDLow: usize = 0x1D4; // uint32_t
    pub const m_iAccountID: usize = 0x1D8; // uint32_t
    pub const m_iInventoryPosition: usize = 0x1DC; // uint32_t
    pub const m_bInitialized: usize = 0x1E8; // bool
    pub const m_bDisallowSOC: usize = 0x1E9; // bool
    pub const m_bIsStoreItem: usize = 0x1EA; // bool
    pub const m_bIsTradeItem: usize = 0x1EB; // bool
    pub const m_iEntityQuantity: usize = 0x1EC; // int32_t
    pub const m_iRarityOverride: usize = 0x1F0; // int32_t
    pub const m_iQualityOverride: usize = 0x1F4; // int32_t
    pub const m_unClientFlags: usize = 0x1F8; // uint8_t
    pub const m_unOverrideStyle: usize = 0x1F9; // uint8_t
    pub const m_AttributeList: usize = 0x210; // CAttributeList
    pub const m_NetworkedDynamicAttributes: usize = 0x270; // CAttributeList
    pub const m_szCustomName: usize = 0x2D0; // char[161]
    pub const m_szCustomNameOverride: usize = 0x371; // char[161]
    pub const m_bInitializedTags: usize = 0x440; // bool
}

pub mod C_EconWearable { // C_EconEntity
    pub const m_nForceSkin: usize = 0x15B8; // int32_t
    pub const m_bAlwaysAllow: usize = 0x15BC; // bool
}

pub mod C_EntityDissolve { // C_BaseModelEntity
    pub const m_flStartTime: usize = 0xCD8; // GameTime_t
    pub const m_flFadeInStart: usize = 0xCDC; // float
    pub const m_flFadeInLength: usize = 0xCE0; // float
    pub const m_flFadeOutModelStart: usize = 0xCE4; // float
    pub const m_flFadeOutModelLength: usize = 0xCE8; // float
    pub const m_flFadeOutStart: usize = 0xCEC; // float
    pub const m_flFadeOutLength: usize = 0xCF0; // float
    pub const m_flNextSparkTime: usize = 0xCF4; // GameTime_t
    pub const m_nDissolveType: usize = 0xCF8; // EntityDisolveType_t
    pub const m_vDissolverOrigin: usize = 0xCFC; // Vector
    pub const m_nMagnitude: usize = 0xD08; // uint32_t
    pub const m_bCoreExplode: usize = 0xD0C; // bool
    pub const m_bLinkedToServerEnt: usize = 0xD0D; // bool
}

pub mod C_EntityFlame { // C_BaseEntity
    pub const m_hEntAttached: usize = 0x550; // CHandle<C_BaseEntity>
    pub const m_hOldAttached: usize = 0x578; // CHandle<C_BaseEntity>
    pub const m_bCheapEffect: usize = 0x57C; // bool
}

pub mod C_EnvCombinedLightProbeVolume { // C_BaseEntity
    pub const m_Color: usize = 0x15A8; // Color
    pub const m_flBrightness: usize = 0x15AC; // float
    pub const m_hCubemapTexture: usize = 0x15B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_bCustomCubemapTexture: usize = 0x15B8; // bool
    pub const m_hLightProbeTexture: usize = 0x15C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_hLightProbeDirectLightIndicesTexture: usize = 0x15C8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_hLightProbeDirectLightScalarsTexture: usize = 0x15D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_hLightProbeDirectLightShadowsTexture: usize = 0x15D8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_vBoxMins: usize = 0x15E0; // Vector
    pub const m_vBoxMaxs: usize = 0x15EC; // Vector
    pub const m_bMoveable: usize = 0x15F8; // bool
    pub const m_nHandshake: usize = 0x15FC; // int32_t
    pub const m_nEnvCubeMapArrayIndex: usize = 0x1600; // int32_t
    pub const m_nPriority: usize = 0x1604; // int32_t
    pub const m_bStartDisabled: usize = 0x1608; // bool
    pub const m_flEdgeFadeDist: usize = 0x160C; // float
    pub const m_vEdgeFadeDists: usize = 0x1610; // Vector
    pub const m_nLightProbeSizeX: usize = 0x161C; // int32_t
    pub const m_nLightProbeSizeY: usize = 0x1620; // int32_t
    pub const m_nLightProbeSizeZ: usize = 0x1624; // int32_t
    pub const m_nLightProbeAtlasX: usize = 0x1628; // int32_t
    pub const m_nLightProbeAtlasY: usize = 0x162C; // int32_t
    pub const m_nLightProbeAtlasZ: usize = 0x1630; // int32_t
    pub const m_bEnabled: usize = 0x1649; // bool
}

pub mod C_EnvCubemap { // C_BaseEntity
    pub const m_hCubemapTexture: usize = 0x5D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_bCustomCubemapTexture: usize = 0x5D8; // bool
    pub const m_flInfluenceRadius: usize = 0x5DC; // float
    pub const m_vBoxProjectMins: usize = 0x5E0; // Vector
    pub const m_vBoxProjectMaxs: usize = 0x5EC; // Vector
    pub const m_bMoveable: usize = 0x5F8; // bool
    pub const m_nHandshake: usize = 0x5FC; // int32_t
    pub const m_nEnvCubeMapArrayIndex: usize = 0x600; // int32_t
    pub const m_nPriority: usize = 0x604; // int32_t
    pub const m_flEdgeFadeDist: usize = 0x608; // float
    pub const m_vEdgeFadeDists: usize = 0x60C; // Vector
    pub const m_flDiffuseScale: usize = 0x618; // float
    pub const m_bStartDisabled: usize = 0x61C; // bool
    pub const m_bDefaultEnvMap: usize = 0x61D; // bool
    pub const m_bDefaultSpecEnvMap: usize = 0x61E; // bool
    pub const m_bIndoorCubeMap: usize = 0x61F; // bool
    pub const m_bCopyDiffuseFromDefaultCubemap: usize = 0x620; // bool
    pub const m_bEnabled: usize = 0x630; // bool
}

pub mod C_EnvCubemapBox { // C_EnvCubemap
}

pub mod C_EnvCubemapFog { // C_BaseEntity
    pub const m_flEndDistance: usize = 0x550; // float
    pub const m_flStartDistance: usize = 0x554; // float
    pub const m_flFogFalloffExponent: usize = 0x558; // float
    pub const m_bHeightFogEnabled: usize = 0x55C; // bool
    pub const m_flFogHeightWidth: usize = 0x560; // float
    pub const m_flFogHeightEnd: usize = 0x564; // float
    pub const m_flFogHeightStart: usize = 0x568; // float
    pub const m_flFogHeightExponent: usize = 0x56C; // float
    pub const m_flLODBias: usize = 0x570; // float
    pub const m_bActive: usize = 0x574; // bool
    pub const m_bStartDisabled: usize = 0x575; // bool
    pub const m_flFogMaxOpacity: usize = 0x578; // float
    pub const m_nCubemapSourceType: usize = 0x57C; // int32_t
    pub const m_hSkyMaterial: usize = 0x580; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_iszSkyEntity: usize = 0x588; // CUtlSymbolLarge
    pub const m_hFogCubemapTexture: usize = 0x590; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_bHasHeightFogEnd: usize = 0x598; // bool
    pub const m_bFirstTime: usize = 0x599; // bool
}

pub mod C_EnvDecal { // C_BaseModelEntity
    pub const m_hDecalMaterial: usize = 0xCD0; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_flWidth: usize = 0xCD8; // float
    pub const m_flHeight: usize = 0xCDC; // float
    pub const m_flDepth: usize = 0xCE0; // float
    pub const m_nRenderOrder: usize = 0xCE4; // uint32_t
    pub const m_bProjectOnWorld: usize = 0xCE8; // bool
    pub const m_bProjectOnCharacters: usize = 0xCE9; // bool
    pub const m_bProjectOnWater: usize = 0xCEA; // bool
    pub const m_flDepthSortBias: usize = 0xCEC; // float
}

pub mod C_EnvDetailController { // C_BaseEntity
    pub const m_flFadeStartDist: usize = 0x550; // float
    pub const m_flFadeEndDist: usize = 0x554; // float
}

pub mod C_EnvLightProbeVolume { // C_BaseEntity
    pub const m_hLightProbeTexture: usize = 0x1528; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_hLightProbeDirectLightIndicesTexture: usize = 0x1530; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_hLightProbeDirectLightScalarsTexture: usize = 0x1538; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_hLightProbeDirectLightShadowsTexture: usize = 0x1540; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_vBoxMins: usize = 0x1548; // Vector
    pub const m_vBoxMaxs: usize = 0x1554; // Vector
    pub const m_bMoveable: usize = 0x1560; // bool
    pub const m_nHandshake: usize = 0x1564; // int32_t
    pub const m_nPriority: usize = 0x1568; // int32_t
    pub const m_bStartDisabled: usize = 0x156C; // bool
    pub const m_nLightProbeSizeX: usize = 0x1570; // int32_t
    pub const m_nLightProbeSizeY: usize = 0x1574; // int32_t
    pub const m_nLightProbeSizeZ: usize = 0x1578; // int32_t
    pub const m_nLightProbeAtlasX: usize = 0x157C; // int32_t
    pub const m_nLightProbeAtlasY: usize = 0x1580; // int32_t
    pub const m_nLightProbeAtlasZ: usize = 0x1584; // int32_t
    pub const m_bEnabled: usize = 0x1591; // bool
}

pub mod C_EnvParticleGlow { // C_ParticleSystem
    pub const m_flAlphaScale: usize = 0x1280; // float
    pub const m_flRadiusScale: usize = 0x1284; // float
    pub const m_flSelfIllumScale: usize = 0x1288; // float
    pub const m_ColorTint: usize = 0x128C; // Color
    pub const m_hTextureOverride: usize = 0x1290; // CStrongHandle<InfoForResourceTypeCTextureBase>
}

pub mod C_EnvProjectedTexture { // C_ModelPointEntity
}

pub mod C_EnvScreenOverlay { // C_PointEntity
    pub const m_iszOverlayNames: usize = 0x550; // CUtlSymbolLarge[10]
    pub const m_flOverlayTimes: usize = 0x5A0; // float[10]
    pub const m_flStartTime: usize = 0x5C8; // GameTime_t
    pub const m_iDesiredOverlay: usize = 0x5CC; // int32_t
    pub const m_bIsActive: usize = 0x5D0; // bool
    pub const m_bWasActive: usize = 0x5D1; // bool
    pub const m_iCachedDesiredOverlay: usize = 0x5D4; // int32_t
    pub const m_iCurrentOverlay: usize = 0x5D8; // int32_t
    pub const m_flCurrentOverlayTime: usize = 0x5DC; // GameTime_t
}

pub mod C_EnvSky { // C_BaseModelEntity
    pub const m_hSkyMaterial: usize = 0xCD0; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_hSkyMaterialLightingOnly: usize = 0xCD8; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_bStartDisabled: usize = 0xCE0; // bool
    pub const m_vTintColor: usize = 0xCE1; // Color
    pub const m_vTintColorLightingOnly: usize = 0xCE5; // Color
    pub const m_flBrightnessScale: usize = 0xCEC; // float
    pub const m_nFogType: usize = 0xCF0; // int32_t
    pub const m_flFogMinStart: usize = 0xCF4; // float
    pub const m_flFogMinEnd: usize = 0xCF8; // float
    pub const m_flFogMaxStart: usize = 0xCFC; // float
    pub const m_flFogMaxEnd: usize = 0xD00; // float
    pub const m_bEnabled: usize = 0xD04; // bool
}

pub mod C_EnvVolumetricFogController { // C_BaseEntity
    pub const m_flScattering: usize = 0x550; // float
    pub const m_flAnisotropy: usize = 0x554; // float
    pub const m_flFadeSpeed: usize = 0x558; // float
    pub const m_flDrawDistance: usize = 0x55C; // float
    pub const m_flFadeInStart: usize = 0x560; // float
    pub const m_flFadeInEnd: usize = 0x564; // float
    pub const m_flIndirectStrength: usize = 0x568; // float
    pub const m_nIndirectTextureDimX: usize = 0x56C; // int32_t
    pub const m_nIndirectTextureDimY: usize = 0x570; // int32_t
    pub const m_nIndirectTextureDimZ: usize = 0x574; // int32_t
    pub const m_vBoxMins: usize = 0x578; // Vector
    pub const m_vBoxMaxs: usize = 0x584; // Vector
    pub const m_bActive: usize = 0x590; // bool
    pub const m_flStartAnisoTime: usize = 0x594; // GameTime_t
    pub const m_flStartScatterTime: usize = 0x598; // GameTime_t
    pub const m_flStartDrawDistanceTime: usize = 0x59C; // GameTime_t
    pub const m_flStartAnisotropy: usize = 0x5A0; // float
    pub const m_flStartScattering: usize = 0x5A4; // float
    pub const m_flStartDrawDistance: usize = 0x5A8; // float
    pub const m_flDefaultAnisotropy: usize = 0x5AC; // float
    pub const m_flDefaultScattering: usize = 0x5B0; // float
    pub const m_flDefaultDrawDistance: usize = 0x5B4; // float
    pub const m_bStartDisabled: usize = 0x5B8; // bool
    pub const m_bEnableIndirect: usize = 0x5B9; // bool
    pub const m_bIsMaster: usize = 0x5BA; // bool
    pub const m_hFogIndirectTexture: usize = 0x5C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_nForceRefreshCount: usize = 0x5C8; // int32_t
    pub const m_bFirstTime: usize = 0x5CC; // bool
}

pub mod C_EnvVolumetricFogVolume { // C_BaseEntity
    pub const m_bActive: usize = 0x550; // bool
    pub const m_vBoxMins: usize = 0x554; // Vector
    pub const m_vBoxMaxs: usize = 0x560; // Vector
    pub const m_bStartDisabled: usize = 0x56C; // bool
    pub const m_flStrength: usize = 0x570; // float
    pub const m_nFalloffShape: usize = 0x574; // int32_t
    pub const m_flFalloffExponent: usize = 0x578; // float
}

pub mod C_EnvWind { // C_BaseEntity
    pub const m_EnvWindShared: usize = 0x550; // C_EnvWindShared
}

pub mod C_EnvWindClientside { // C_BaseEntity
    pub const m_EnvWindShared: usize = 0x550; // C_EnvWindShared
}

pub mod C_EnvWindShared {
    pub const m_flStartTime: usize = 0x8; // GameTime_t
    pub const m_iWindSeed: usize = 0xC; // uint32_t
    pub const m_iMinWind: usize = 0x10; // uint16_t
    pub const m_iMaxWind: usize = 0x12; // uint16_t
    pub const m_windRadius: usize = 0x14; // int32_t
    pub const m_iMinGust: usize = 0x18; // uint16_t
    pub const m_iMaxGust: usize = 0x1A; // uint16_t
    pub const m_flMinGustDelay: usize = 0x1C; // float
    pub const m_flMaxGustDelay: usize = 0x20; // float
    pub const m_flGustDuration: usize = 0x24; // float
    pub const m_iGustDirChange: usize = 0x28; // uint16_t
    pub const m_location: usize = 0x2C; // Vector
    pub const m_iszGustSound: usize = 0x38; // int32_t
    pub const m_iWindDir: usize = 0x3C; // int32_t
    pub const m_flWindSpeed: usize = 0x40; // float
    pub const m_currentWindVector: usize = 0x44; // Vector
    pub const m_CurrentSwayVector: usize = 0x50; // Vector
    pub const m_PrevSwayVector: usize = 0x5C; // Vector
    pub const m_iInitialWindDir: usize = 0x68; // uint16_t
    pub const m_flInitialWindSpeed: usize = 0x6C; // float
    pub const m_flVariationTime: usize = 0x70; // GameTime_t
    pub const m_flSwayTime: usize = 0x74; // GameTime_t
    pub const m_flSimTime: usize = 0x78; // GameTime_t
    pub const m_flSwitchTime: usize = 0x7C; // GameTime_t
    pub const m_flAveWindSpeed: usize = 0x80; // float
    pub const m_bGusting: usize = 0x84; // bool
    pub const m_flWindAngleVariation: usize = 0x88; // float
    pub const m_flWindSpeedVariation: usize = 0x8C; // float
    pub const m_iEntIndex: usize = 0x90; // CEntityIndex
}

pub mod C_EnvWindShared_WindAveEvent_t {
    pub const m_flStartWindSpeed: usize = 0x0; // float
    pub const m_flAveWindSpeed: usize = 0x4; // float
}

pub mod C_EnvWindShared_WindVariationEvent_t {
    pub const m_flWindAngleVariation: usize = 0x0; // float
    pub const m_flWindSpeedVariation: usize = 0x4; // float
}

pub mod C_FireCrackerBlast { // C_Inferno
}

pub mod C_FireFromAboveSprite { // C_Sprite
}

pub mod C_FireSmoke { // C_BaseFire
    pub const m_nFlameModelIndex: usize = 0x560; // int32_t
    pub const m_nFlameFromAboveModelIndex: usize = 0x564; // int32_t
    pub const m_flScaleRegister: usize = 0x568; // float
    pub const m_flScaleStart: usize = 0x56C; // float
    pub const m_flScaleEnd: usize = 0x570; // float
    pub const m_flScaleTimeStart: usize = 0x574; // GameTime_t
    pub const m_flScaleTimeEnd: usize = 0x578; // GameTime_t
    pub const m_flChildFlameSpread: usize = 0x57C; // float
    pub const m_flClipPerc: usize = 0x590; // float
    pub const m_bClipTested: usize = 0x594; // bool
    pub const m_bFadingOut: usize = 0x595; // bool
    pub const m_tParticleSpawn: usize = 0x598; // TimedEvent
    pub const m_pFireOverlay: usize = 0x5A0; // CFireOverlay*
}

pub mod C_FireSprite { // C_Sprite
    pub const m_vecMoveDir: usize = 0xE00; // Vector
    pub const m_bFadeFromAbove: usize = 0xE0C; // bool
}

pub mod C_Fish { // CBaseAnimGraph
    pub const m_pos: usize = 0xED8; // Vector
    pub const m_vel: usize = 0xEE4; // Vector
    pub const m_angles: usize = 0xEF0; // QAngle
    pub const m_localLifeState: usize = 0xEFC; // int32_t
    pub const m_deathDepth: usize = 0xF00; // float
    pub const m_deathAngle: usize = 0xF04; // float
    pub const m_buoyancy: usize = 0xF08; // float
    pub const m_wiggleTimer: usize = 0xF10; // CountdownTimer
    pub const m_wigglePhase: usize = 0xF28; // float
    pub const m_wiggleRate: usize = 0xF2C; // float
    pub const m_actualPos: usize = 0xF30; // Vector
    pub const m_actualAngles: usize = 0xF3C; // QAngle
    pub const m_poolOrigin: usize = 0xF48; // Vector
    pub const m_waterLevel: usize = 0xF54; // float
    pub const m_gotUpdate: usize = 0xF58; // bool
    pub const m_x: usize = 0xF5C; // float
    pub const m_y: usize = 0xF60; // float
    pub const m_z: usize = 0xF64; // float
    pub const m_angle: usize = 0xF68; // float
    pub const m_errorHistory: usize = 0xF6C; // float[20]
    pub const m_errorHistoryIndex: usize = 0xFBC; // int32_t
    pub const m_errorHistoryCount: usize = 0xFC0; // int32_t
    pub const m_averageError: usize = 0xFC4; // float
}

pub mod C_Fists { // C_CSWeaponBase
    pub const m_bPlayingUninterruptableAct: usize = 0x1A70; // bool
    pub const m_nUninterruptableActivity: usize = 0x1A74; // PlayerAnimEvent_t
}

pub mod C_Flashbang { // C_BaseCSGrenade
}

pub mod C_FlashbangProjectile { // C_BaseCSGrenadeProjectile
}

pub mod C_FogController { // C_BaseEntity
    pub const m_fog: usize = 0x550; // fogparams_t
    pub const m_bUseAngles: usize = 0x5B8; // bool
    pub const m_iChangedVariables: usize = 0x5BC; // int32_t
}

pub mod C_FootstepControl { // C_BaseTrigger
    pub const m_source: usize = 0xCD8; // CUtlSymbolLarge
    pub const m_destination: usize = 0xCE0; // CUtlSymbolLarge
}

pub mod C_FuncBrush { // C_BaseModelEntity
}

pub mod C_FuncConveyor { // C_BaseModelEntity
    pub const m_vecMoveDirEntitySpace: usize = 0xCD8; // Vector
    pub const m_flTargetSpeed: usize = 0xCE4; // float
    pub const m_nTransitionStartTick: usize = 0xCE8; // GameTick_t
    pub const m_nTransitionDurationTicks: usize = 0xCEC; // int32_t
    pub const m_flTransitionStartSpeed: usize = 0xCF0; // float
    pub const m_hConveyorModels: usize = 0xCF8; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
    pub const m_flCurrentConveyorOffset: usize = 0xD10; // float
    pub const m_flCurrentConveyorSpeed: usize = 0xD14; // float
}

pub mod C_FuncElectrifiedVolume { // C_FuncBrush
    pub const m_nAmbientEffect: usize = 0xCD0; // ParticleIndex_t
    pub const m_EffectName: usize = 0xCD8; // CUtlSymbolLarge
    pub const m_bState: usize = 0xCE0; // bool
}

pub mod C_FuncLadder { // C_BaseModelEntity
    pub const m_vecLadderDir: usize = 0xCD0; // Vector
    pub const m_Dismounts: usize = 0xCE0; // CUtlVector<CHandle<C_InfoLadderDismount>>
    pub const m_vecLocalTop: usize = 0xCF8; // Vector
    pub const m_vecPlayerMountPositionTop: usize = 0xD04; // Vector
    pub const m_vecPlayerMountPositionBottom: usize = 0xD10; // Vector
    pub const m_flAutoRideSpeed: usize = 0xD1C; // float
    pub const m_bDisabled: usize = 0xD20; // bool
    pub const m_bFakeLadder: usize = 0xD21; // bool
    pub const m_bHasSlack: usize = 0xD22; // bool
}

pub mod C_FuncMonitor { // C_FuncBrush
    pub const m_targetCamera: usize = 0xCD0; // CUtlString
    pub const m_nResolutionEnum: usize = 0xCD8; // int32_t
    pub const m_bRenderShadows: usize = 0xCDC; // bool
    pub const m_bUseUniqueColorTarget: usize = 0xCDD; // bool
    pub const m_brushModelName: usize = 0xCE0; // CUtlString
    pub const m_hTargetCamera: usize = 0xCE8; // CHandle<C_BaseEntity>
    pub const m_bEnabled: usize = 0xCEC; // bool
    pub const m_bDraw3DSkybox: usize = 0xCED; // bool
}

pub mod C_FuncMoveLinear { // C_BaseToggle
}

pub mod C_FuncRotating { // C_BaseModelEntity
}

pub mod C_FuncTrackTrain { // C_BaseModelEntity
    pub const m_nLongAxis: usize = 0xCD0; // int32_t
    pub const m_flRadius: usize = 0xCD4; // float
    pub const m_flLineLength: usize = 0xCD8; // float
}

pub mod C_GameRules {
}

pub mod C_GameRulesProxy { // C_BaseEntity
}

pub mod C_GlobalLight { // C_BaseEntity
    pub const m_WindClothForceHandle: usize = 0xA10; // uint16_t
}

pub mod C_GradientFog { // C_BaseEntity
    pub const m_hGradientFogTexture: usize = 0x550; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_flFogStartDistance: usize = 0x558; // float
    pub const m_flFogEndDistance: usize = 0x55C; // float
    pub const m_bHeightFogEnabled: usize = 0x560; // bool
    pub const m_flFogStartHeight: usize = 0x564; // float
    pub const m_flFogEndHeight: usize = 0x568; // float
    pub const m_flFarZ: usize = 0x56C; // float
    pub const m_flFogMaxOpacity: usize = 0x570; // float
    pub const m_flFogFalloffExponent: usize = 0x574; // float
    pub const m_flFogVerticalExponent: usize = 0x578; // float
    pub const m_fogColor: usize = 0x57C; // Color
    pub const m_flFogStrength: usize = 0x580; // float
    pub const m_flFadeTime: usize = 0x584; // float
    pub const m_bStartDisabled: usize = 0x588; // bool
    pub const m_bIsEnabled: usize = 0x589; // bool
    pub const m_bGradientFogNeedsTextures: usize = 0x58A; // bool
}

pub mod C_HEGrenade { // C_BaseCSGrenade
}

pub mod C_HEGrenadeProjectile { // C_BaseCSGrenadeProjectile
}

pub mod C_HandleTest { // C_BaseEntity
    pub const m_Handle: usize = 0x550; // CHandle<C_BaseEntity>
    pub const m_bSendHandle: usize = 0x554; // bool
}

pub mod C_Hostage { // C_BaseCombatCharacter
    pub const m_entitySpottedState: usize = 0x1100; // EntitySpottedState_t
    pub const m_leader: usize = 0x1118; // CHandle<C_BaseEntity>
    pub const m_reuseTimer: usize = 0x1120; // CountdownTimer
    pub const m_vel: usize = 0x1138; // Vector
    pub const m_isRescued: usize = 0x1144; // bool
    pub const m_jumpedThisFrame: usize = 0x1145; // bool
    pub const m_nHostageState: usize = 0x1148; // int32_t
    pub const m_bHandsHaveBeenCut: usize = 0x114C; // bool
    pub const m_hHostageGrabber: usize = 0x1150; // CHandle<C_CSPlayerPawn>
    pub const m_fLastGrabTime: usize = 0x1154; // GameTime_t
    pub const m_vecGrabbedPos: usize = 0x1158; // Vector
    pub const m_flRescueStartTime: usize = 0x1164; // GameTime_t
    pub const m_flGrabSuccessTime: usize = 0x1168; // GameTime_t
    pub const m_flDropStartTime: usize = 0x116C; // GameTime_t
    pub const m_flDeadOrRescuedTime: usize = 0x1170; // GameTime_t
    pub const m_blinkTimer: usize = 0x1178; // CountdownTimer
    pub const m_lookAt: usize = 0x1190; // Vector
    pub const m_lookAroundTimer: usize = 0x11A0; // CountdownTimer
    pub const m_isInit: usize = 0x11B8; // bool
    pub const m_eyeAttachment: usize = 0x11B9; // AttachmentHandle_t
    pub const m_chestAttachment: usize = 0x11BA; // AttachmentHandle_t
    pub const m_pPredictionOwner: usize = 0x11C0; // CBasePlayerController*
    pub const m_fNewestAlphaThinkTime: usize = 0x11C8; // GameTime_t
}

pub mod C_HostageCarriableProp { // CBaseAnimGraph
}

pub mod C_IncendiaryGrenade { // C_MolotovGrenade
}

pub mod C_Inferno { // C_BaseModelEntity
    pub const m_nfxFireDamageEffect: usize = 0xD10; // ParticleIndex_t
    pub const m_firePositions: usize = 0xD14; // Vector[64]
    pub const m_fireParentPositions: usize = 0x1014; // Vector[64]
    pub const m_bFireIsBurning: usize = 0x1314; // bool[64]
    pub const m_BurnNormal: usize = 0x1354; // Vector[64]
    pub const m_fireCount: usize = 0x1654; // int32_t
    pub const m_nInfernoType: usize = 0x1658; // int32_t
    pub const m_nFireLifetime: usize = 0x165C; // float
    pub const m_bInPostEffectTime: usize = 0x1660; // bool
    pub const m_lastFireCount: usize = 0x1664; // int32_t
    pub const m_nFireEffectTickBegin: usize = 0x1668; // int32_t
    pub const m_drawableCount: usize = 0x8270; // int32_t
    pub const m_blosCheck: usize = 0x8274; // bool
    pub const m_nlosperiod: usize = 0x8278; // int32_t
    pub const m_maxFireHalfWidth: usize = 0x827C; // float
    pub const m_maxFireHeight: usize = 0x8280; // float
    pub const m_minBounds: usize = 0x8284; // Vector
    pub const m_maxBounds: usize = 0x8290; // Vector
    pub const m_flLastGrassBurnThink: usize = 0x829C; // float
}

pub mod C_InfoInstructorHintHostageRescueZone { // C_PointEntity
}

pub mod C_InfoLadderDismount { // C_BaseEntity
}

pub mod C_InfoVisibilityBox { // C_BaseEntity
    pub const m_nMode: usize = 0x554; // int32_t
    pub const m_vBoxSize: usize = 0x558; // Vector
    pub const m_bEnabled: usize = 0x564; // bool
}

pub mod C_IronSightController {
    pub const m_bIronSightAvailable: usize = 0x10; // bool
    pub const m_flIronSightAmount: usize = 0x14; // float
    pub const m_flIronSightAmountGained: usize = 0x18; // float
    pub const m_flIronSightAmountBiased: usize = 0x1C; // float
    pub const m_flIronSightAmount_Interpolated: usize = 0x20; // float
    pub const m_flIronSightAmountGained_Interpolated: usize = 0x24; // float
    pub const m_flIronSightAmountBiased_Interpolated: usize = 0x28; // float
    pub const m_flInterpolationLastUpdated: usize = 0x2C; // float
    pub const m_angDeltaAverage: usize = 0x30; // QAngle[8]
    pub const m_angViewLast: usize = 0x90; // QAngle
    pub const m_vecDotCoords: usize = 0x9C; // Vector2D
    pub const m_flDotBlur: usize = 0xA4; // float
    pub const m_flSpeedRatio: usize = 0xA8; // float
}

pub mod C_Item { // C_EconEntity
    pub const m_bShouldGlow: usize = 0x15B8; // bool
    pub const m_pReticleHintTextName: usize = 0x15B9; // char[256]
}

pub mod C_ItemDogtags { // C_Item
    pub const m_OwningPlayer: usize = 0x16C0; // CHandle<C_CSPlayerPawn>
    pub const m_KillingPlayer: usize = 0x16C4; // CHandle<C_CSPlayerPawn>
}

pub mod C_Item_Healthshot { // C_WeaponBaseItem
}

pub mod C_Knife { // C_CSWeaponBase
}

pub mod C_LightDirectionalEntity { // C_LightEntity
}

pub mod C_LightEntity { // C_BaseModelEntity
    pub const m_CLightComponent: usize = 0xCD0; // CLightComponent*
}

pub mod C_LightEnvironmentEntity { // C_LightDirectionalEntity
}

pub mod C_LightGlow { // C_BaseModelEntity
    pub const m_nHorizontalSize: usize = 0xCD0; // uint32_t
    pub const m_nVerticalSize: usize = 0xCD4; // uint32_t
    pub const m_nMinDist: usize = 0xCD8; // uint32_t
    pub const m_nMaxDist: usize = 0xCDC; // uint32_t
    pub const m_nOuterMaxDist: usize = 0xCE0; // uint32_t
    pub const m_flGlowProxySize: usize = 0xCE4; // float
    pub const m_flHDRColorScale: usize = 0xCE8; // float
    pub const m_Glow: usize = 0xCF0; // C_LightGlowOverlay
}

pub mod C_LightGlowOverlay { // CGlowOverlay
    pub const m_vecOrigin: usize = 0xD0; // Vector
    pub const m_vecDirection: usize = 0xDC; // Vector
    pub const m_nMinDist: usize = 0xE8; // int32_t
    pub const m_nMaxDist: usize = 0xEC; // int32_t
    pub const m_nOuterMaxDist: usize = 0xF0; // int32_t
    pub const m_bOneSided: usize = 0xF4; // bool
    pub const m_bModulateByDot: usize = 0xF5; // bool
}

pub mod C_LightOrthoEntity { // C_LightEntity
}

pub mod C_LightSpotEntity { // C_LightEntity
}

pub mod C_LocalTempEntity { // CBaseAnimGraph
    pub const flags: usize = 0xEF0; // int32_t
    pub const die: usize = 0xEF4; // GameTime_t
    pub const m_flFrameMax: usize = 0xEF8; // float
    pub const x: usize = 0xEFC; // float
    pub const y: usize = 0xF00; // float
    pub const fadeSpeed: usize = 0xF04; // float
    pub const bounceFactor: usize = 0xF08; // float
    pub const hitSound: usize = 0xF0C; // int32_t
    pub const priority: usize = 0xF10; // int32_t
    pub const tentOffset: usize = 0xF14; // Vector
    pub const m_vecTempEntAngVelocity: usize = 0xF20; // QAngle
    pub const tempent_renderamt: usize = 0xF2C; // int32_t
    pub const m_vecNormal: usize = 0xF30; // Vector
    pub const m_flSpriteScale: usize = 0xF3C; // float
    pub const m_nFlickerFrame: usize = 0xF40; // int32_t
    pub const m_flFrameRate: usize = 0xF44; // float
    pub const m_flFrame: usize = 0xF48; // float
    pub const m_pszImpactEffect: usize = 0xF50; // char*
    pub const m_pszParticleEffect: usize = 0xF58; // char*
    pub const m_bParticleCollision: usize = 0xF60; // bool
    pub const m_iLastCollisionFrame: usize = 0xF64; // int32_t
    pub const m_vLastCollisionOrigin: usize = 0xF68; // Vector
    pub const m_vecTempEntVelocity: usize = 0xF74; // Vector
    pub const m_vecPrevAbsOrigin: usize = 0xF80; // Vector
    pub const m_vecTempEntAcceleration: usize = 0xF8C; // Vector
}

pub mod C_MapPreviewParticleSystem { // C_ParticleSystem
}

pub mod C_MapVetoPickController { // C_BaseEntity
    pub const m_nDraftType: usize = 0x560; // int32_t
    pub const m_nTeamWinningCoinToss: usize = 0x564; // int32_t
    pub const m_nTeamWithFirstChoice: usize = 0x568; // int32_t[64]
    pub const m_nVoteMapIdsList: usize = 0x668; // int32_t[7]
    pub const m_nAccountIDs: usize = 0x684; // int32_t[64]
    pub const m_nMapId0: usize = 0x784; // int32_t[64]
    pub const m_nMapId1: usize = 0x884; // int32_t[64]
    pub const m_nMapId2: usize = 0x984; // int32_t[64]
    pub const m_nMapId3: usize = 0xA84; // int32_t[64]
    pub const m_nMapId4: usize = 0xB84; // int32_t[64]
    pub const m_nMapId5: usize = 0xC84; // int32_t[64]
    pub const m_nStartingSide0: usize = 0xD84; // int32_t[64]
    pub const m_nCurrentPhase: usize = 0xE84; // int32_t
    pub const m_nPhaseStartTick: usize = 0xE88; // int32_t
    pub const m_nPhaseDurationTicks: usize = 0xE8C; // int32_t
    pub const m_nPostDataUpdateTick: usize = 0xE90; // int32_t
    pub const m_bDisabledHud: usize = 0xE94; // bool
}

pub mod C_Melee { // C_CSWeaponBase
}

pub mod C_ModelPointEntity { // C_BaseModelEntity
}

pub mod C_MolotovGrenade { // C_BaseCSGrenade
}

pub mod C_MolotovProjectile { // C_BaseCSGrenadeProjectile
    pub const m_bIsIncGrenade: usize = 0x1158; // bool
}

pub mod C_Multimeter { // CBaseAnimGraph
    pub const m_hTargetC4: usize = 0xEE0; // CHandle<C_PlantedC4>
}

pub mod C_MultiplayRules { // C_GameRules
}

pub mod C_NetTestBaseCombatCharacter { // C_BaseCombatCharacter
}

pub mod C_OmniLight { // C_BarnLight
    pub const m_flInnerAngle: usize = 0xF18; // float
    pub const m_flOuterAngle: usize = 0xF1C; // float
    pub const m_bShowLight: usize = 0xF20; // bool
}

pub mod C_ParticleSystem { // C_BaseModelEntity
    pub const m_szSnapshotFileName: usize = 0xCD0; // char[512]
    pub const m_bActive: usize = 0xED0; // bool
    pub const m_bFrozen: usize = 0xED1; // bool
    pub const m_flFreezeTransitionDuration: usize = 0xED4; // float
    pub const m_nStopType: usize = 0xED8; // int32_t
    pub const m_bAnimateDuringGameplayPause: usize = 0xEDC; // bool
    pub const m_iEffectIndex: usize = 0xEE0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    pub const m_flStartTime: usize = 0xEE8; // GameTime_t
    pub const m_flPreSimTime: usize = 0xEEC; // float
    pub const m_vServerControlPoints: usize = 0xEF0; // Vector[4]
    pub const m_iServerControlPointAssignments: usize = 0xF20; // uint8_t[4]
    pub const m_hControlPointEnts: usize = 0xF24; // CHandle<C_BaseEntity>[64]
    pub const m_bNoSave: usize = 0x1024; // bool
    pub const m_bNoFreeze: usize = 0x1025; // bool
    pub const m_bNoRamp: usize = 0x1026; // bool
    pub const m_bStartActive: usize = 0x1027; // bool
    pub const m_iszEffectName: usize = 0x1028; // CUtlSymbolLarge
    pub const m_iszControlPointNames: usize = 0x1030; // CUtlSymbolLarge[64]
    pub const m_nDataCP: usize = 0x1230; // int32_t
    pub const m_vecDataCPValue: usize = 0x1234; // Vector
    pub const m_nTintCP: usize = 0x1240; // int32_t
    pub const m_clrTint: usize = 0x1244; // Color
    pub const m_bOldActive: usize = 0x1268; // bool
    pub const m_bOldFrozen: usize = 0x1269; // bool
}

pub mod C_PathParticleRope { // C_BaseEntity
    pub const m_bStartActive: usize = 0x550; // bool
    pub const m_flMaxSimulationTime: usize = 0x554; // float
    pub const m_iszEffectName: usize = 0x558; // CUtlSymbolLarge
    pub const m_PathNodes_Name: usize = 0x560; // CUtlVector<CUtlSymbolLarge>
    pub const m_flParticleSpacing: usize = 0x578; // float
    pub const m_flSlack: usize = 0x57C; // float
    pub const m_flRadius: usize = 0x580; // float
    pub const m_ColorTint: usize = 0x584; // Color
    pub const m_nEffectState: usize = 0x588; // int32_t
    pub const m_iEffectIndex: usize = 0x590; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    pub const m_PathNodes_Position: usize = 0x598; // C_NetworkUtlVectorBase<Vector>
    pub const m_PathNodes_TangentIn: usize = 0x5B0; // C_NetworkUtlVectorBase<Vector>
    pub const m_PathNodes_TangentOut: usize = 0x5C8; // C_NetworkUtlVectorBase<Vector>
    pub const m_PathNodes_Color: usize = 0x5E0; // C_NetworkUtlVectorBase<Vector>
    pub const m_PathNodes_PinEnabled: usize = 0x5F8; // C_NetworkUtlVectorBase<bool>
    pub const m_PathNodes_RadiusScale: usize = 0x610; // C_NetworkUtlVectorBase<float>
}

pub mod C_PathParticleRopeAlias_path_particle_rope_clientside { // C_PathParticleRope
}

pub mod C_PhysBox { // C_Breakable
}

pub mod C_PhysMagnet { // CBaseAnimGraph
    pub const m_aAttachedObjectsFromServer: usize = 0xED8; // CUtlVector<int32_t>
    pub const m_aAttachedObjects: usize = 0xEF0; // CUtlVector<CHandle<C_BaseEntity>>
}

pub mod C_PhysPropClientside { // C_BreakableProp
    pub const m_flTouchDelta: usize = 0x1028; // GameTime_t
    pub const m_fDeathTime: usize = 0x102C; // GameTime_t
    pub const m_impactEnergyScale: usize = 0x1030; // float
    pub const m_inertiaScale: usize = 0x1034; // float
    pub const m_flDmgModBullet: usize = 0x1038; // float
    pub const m_flDmgModClub: usize = 0x103C; // float
    pub const m_flDmgModExplosive: usize = 0x1040; // float
    pub const m_flDmgModFire: usize = 0x1044; // float
    pub const m_iszPhysicsDamageTableName: usize = 0x1048; // CUtlSymbolLarge
    pub const m_iszBasePropData: usize = 0x1050; // CUtlSymbolLarge
    pub const m_iInteractions: usize = 0x1058; // int32_t
    pub const m_bHasBreakPiecesOrCommands: usize = 0x105C; // bool
    pub const m_vecDamagePosition: usize = 0x1060; // Vector
    pub const m_vecDamageDirection: usize = 0x106C; // Vector
    pub const m_nDamageType: usize = 0x1078; // int32_t
}

pub mod C_PhysicsProp { // C_BreakableProp
    pub const m_bAwake: usize = 0x1028; // bool
}

pub mod C_PhysicsPropMultiplayer { // C_PhysicsProp
}

pub mod C_PickUpModelSlerper { // CBaseAnimGraph
    pub const m_hPlayerParent: usize = 0xED8; // CHandle<C_BaseEntity>
    pub const m_hItem: usize = 0xEDC; // CHandle<C_BaseEntity>
    pub const m_flTimePickedUp: usize = 0xEE0; // float
    pub const m_angOriginal: usize = 0xEE4; // QAngle
    pub const m_vecPosOriginal: usize = 0xEF0; // Vector
    pub const m_angRandom: usize = 0xF00; // QAngle
}

pub mod C_PlantedC4 { // CBaseAnimGraph
    pub const m_bBombTicking: usize = 0xED8; // bool
    pub const m_nBombSite: usize = 0xEDC; // int32_t
    pub const m_nSourceSoundscapeHash: usize = 0xEE0; // int32_t
    pub const m_entitySpottedState: usize = 0xEE8; // EntitySpottedState_t
    pub const m_flNextGlow: usize = 0xF00; // GameTime_t
    pub const m_flNextBeep: usize = 0xF04; // GameTime_t
    pub const m_flC4Blow: usize = 0xF08; // GameTime_t
    pub const m_bCannotBeDefused: usize = 0xF0C; // bool
    pub const m_bHasExploded: usize = 0xF0D; // bool
    pub const m_flTimerLength: usize = 0xF10; // float
    pub const m_bBeingDefused: usize = 0xF14; // bool
    pub const m_bTriggerWarning: usize = 0xF18; // float
    pub const m_bExplodeWarning: usize = 0xF1C; // float
    pub const m_bC4Activated: usize = 0xF20; // bool
    pub const m_bTenSecWarning: usize = 0xF21; // bool
    pub const m_flDefuseLength: usize = 0xF24; // float
    pub const m_flDefuseCountDown: usize = 0xF28; // GameTime_t
    pub const m_bBombDefused: usize = 0xF2C; // bool
    pub const m_hBombDefuser: usize = 0xF30; // CHandle<C_CSPlayerPawn>
    pub const m_hControlPanel: usize = 0xF34; // CHandle<C_BaseEntity>
    pub const m_hDefuserMultimeter: usize = 0xF38; // CHandle<C_Multimeter>
    pub const m_flNextRadarFlashTime: usize = 0xF3C; // GameTime_t
    pub const m_bRadarFlash: usize = 0xF40; // bool
    pub const m_pBombDefuser: usize = 0xF44; // CHandle<C_CSPlayerPawn>
    pub const m_fLastDefuseTime: usize = 0xF48; // GameTime_t
    pub const m_pPredictionOwner: usize = 0xF50; // CBasePlayerController*
    pub const m_vecC4ExplodeSpectatePos: usize = 0xF58; // Vector
    pub const m_vecC4ExplodeSpectateAng: usize = 0xF64; // QAngle
    pub const m_flC4ExplodeSpectateDuration: usize = 0xF70; // float
}

pub mod C_PlayerPing { // C_BaseEntity
    pub const m_hPlayer: usize = 0x580; // CHandle<C_CSPlayerPawn>
    pub const m_hPingedEntity: usize = 0x584; // CHandle<C_BaseEntity>
    pub const m_iType: usize = 0x588; // int32_t
    pub const m_bUrgent: usize = 0x58C; // bool
    pub const m_szPlaceName: usize = 0x58D; // char[18]
}

pub mod C_PlayerSprayDecal { // C_ModelPointEntity
    pub const m_nUniqueID: usize = 0xCD0; // int32_t
    pub const m_unAccountID: usize = 0xCD4; // uint32_t
    pub const m_unTraceID: usize = 0xCD8; // uint32_t
    pub const m_rtGcTime: usize = 0xCDC; // uint32_t
    pub const m_vecEndPos: usize = 0xCE0; // Vector
    pub const m_vecStart: usize = 0xCEC; // Vector
    pub const m_vecLeft: usize = 0xCF8; // Vector
    pub const m_vecNormal: usize = 0xD04; // Vector
    pub const m_nPlayer: usize = 0xD10; // int32_t
    pub const m_nEntity: usize = 0xD14; // int32_t
    pub const m_nHitbox: usize = 0xD18; // int32_t
    pub const m_flCreationTime: usize = 0xD1C; // float
    pub const m_nTintID: usize = 0xD20; // int32_t
    pub const m_nVersion: usize = 0xD24; // uint8_t
    pub const m_ubSignature: usize = 0xD25; // uint8_t[128]
    pub const m_SprayRenderHelper: usize = 0xDB0; // CPlayerSprayDecalRenderHelper
}

pub mod C_PlayerVisibility { // C_BaseEntity
    pub const m_flVisibilityStrength: usize = 0x550; // float
    pub const m_flFogDistanceMultiplier: usize = 0x554; // float
    pub const m_flFogMaxDensityMultiplier: usize = 0x558; // float
    pub const m_flFadeTime: usize = 0x55C; // float
    pub const m_bStartDisabled: usize = 0x560; // bool
    pub const m_bIsEnabled: usize = 0x561; // bool
}

pub mod C_PointCamera { // C_BaseEntity
    pub const m_FOV: usize = 0x550; // float
    pub const m_Resolution: usize = 0x554; // float
    pub const m_bFogEnable: usize = 0x558; // bool
    pub const m_FogColor: usize = 0x559; // Color
    pub const m_flFogStart: usize = 0x560; // float
    pub const m_flFogEnd: usize = 0x564; // float
    pub const m_flFogMaxDensity: usize = 0x568; // float
    pub const m_bActive: usize = 0x56C; // bool
    pub const m_bUseScreenAspectRatio: usize = 0x56D; // bool
    pub const m_flAspectRatio: usize = 0x570; // float
    pub const m_bNoSky: usize = 0x574; // bool
    pub const m_fBrightness: usize = 0x578; // float
    pub const m_flZFar: usize = 0x57C; // float
    pub const m_flZNear: usize = 0x580; // float
    pub const m_bCanHLTVUse: usize = 0x584; // bool
    pub const m_bDofEnabled: usize = 0x585; // bool
    pub const m_flDofNearBlurry: usize = 0x588; // float
    pub const m_flDofNearCrisp: usize = 0x58C; // float
    pub const m_flDofFarCrisp: usize = 0x590; // float
    pub const m_flDofFarBlurry: usize = 0x594; // float
    pub const m_flDofTiltToGround: usize = 0x598; // float
    pub const m_TargetFOV: usize = 0x59C; // float
    pub const m_DegreesPerSecond: usize = 0x5A0; // float
    pub const m_bIsOn: usize = 0x5A4; // bool
    pub const m_pNext: usize = 0x5A8; // C_PointCamera*
}

pub mod C_PointCameraVFOV { // C_PointCamera
    pub const m_flVerticalFOV: usize = 0x5B0; // float
}

pub mod C_PointClientUIDialog { // C_BaseClientUIEntity
    pub const m_hActivator: usize = 0xD00; // CHandle<C_BaseEntity>
    pub const m_bStartEnabled: usize = 0xD04; // bool
}

pub mod C_PointClientUIHUD { // C_BaseClientUIEntity
    pub const m_bCheckCSSClasses: usize = 0xD08; // bool
    pub const m_bIgnoreInput: usize = 0xE90; // bool
    pub const m_flWidth: usize = 0xE94; // float
    pub const m_flHeight: usize = 0xE98; // float
    pub const m_flDPI: usize = 0xE9C; // float
    pub const m_flInteractDistance: usize = 0xEA0; // float
    pub const m_flDepthOffset: usize = 0xEA4; // float
    pub const m_unOwnerContext: usize = 0xEA8; // uint32_t
    pub const m_unHorizontalAlign: usize = 0xEAC; // uint32_t
    pub const m_unVerticalAlign: usize = 0xEB0; // uint32_t
    pub const m_unOrientation: usize = 0xEB4; // uint32_t
    pub const m_bAllowInteractionFromAllSceneWorlds: usize = 0xEB8; // bool
    pub const m_vecCSSClasses: usize = 0xEC0; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
}

pub mod C_PointClientUIWorldPanel { // C_BaseClientUIEntity
    pub const m_bForceRecreateNextUpdate: usize = 0xD08; // bool
    pub const m_bMoveViewToPlayerNextThink: usize = 0xD09; // bool
    pub const m_bCheckCSSClasses: usize = 0xD0A; // bool
    pub const m_anchorDeltaTransform: usize = 0xD10; // CTransform
    pub const m_pOffScreenIndicator: usize = 0xEB0; // CPointOffScreenIndicatorUi*
    pub const m_bIgnoreInput: usize = 0xED8; // bool
    pub const m_bLit: usize = 0xED9; // bool
    pub const m_bFollowPlayerAcrossTeleport: usize = 0xEDA; // bool
    pub const m_flWidth: usize = 0xEDC; // float
    pub const m_flHeight: usize = 0xEE0; // float
    pub const m_flDPI: usize = 0xEE4; // float
    pub const m_flInteractDistance: usize = 0xEE8; // float
    pub const m_flDepthOffset: usize = 0xEEC; // float
    pub const m_unOwnerContext: usize = 0xEF0; // uint32_t
    pub const m_unHorizontalAlign: usize = 0xEF4; // uint32_t
    pub const m_unVerticalAlign: usize = 0xEF8; // uint32_t
    pub const m_unOrientation: usize = 0xEFC; // uint32_t
    pub const m_bAllowInteractionFromAllSceneWorlds: usize = 0xF00; // bool
    pub const m_vecCSSClasses: usize = 0xF08; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
    pub const m_bOpaque: usize = 0xF20; // bool
    pub const m_bNoDepth: usize = 0xF21; // bool
    pub const m_bRenderBackface: usize = 0xF22; // bool
    pub const m_bUseOffScreenIndicator: usize = 0xF23; // bool
    pub const m_bExcludeFromSaveGames: usize = 0xF24; // bool
    pub const m_bGrabbable: usize = 0xF25; // bool
    pub const m_bOnlyRenderToTexture: usize = 0xF26; // bool
    pub const m_bDisableMipGen: usize = 0xF27; // bool
    pub const m_nExplicitImageLayout: usize = 0xF28; // int32_t
}

pub mod C_PointClientUIWorldTextPanel { // C_PointClientUIWorldPanel
    pub const m_messageText: usize = 0xF30; // char[512]
}

pub mod C_PointCommentaryNode { // CBaseAnimGraph
    pub const m_bActive: usize = 0xEE0; // bool
    pub const m_bWasActive: usize = 0xEE1; // bool
    pub const m_flEndTime: usize = 0xEE4; // GameTime_t
    pub const m_flStartTime: usize = 0xEE8; // GameTime_t
    pub const m_flStartTimeInCommentary: usize = 0xEEC; // float
    pub const m_iszCommentaryFile: usize = 0xEF0; // CUtlSymbolLarge
    pub const m_iszTitle: usize = 0xEF8; // CUtlSymbolLarge
    pub const m_iszSpeakers: usize = 0xF00; // CUtlSymbolLarge
    pub const m_iNodeNumber: usize = 0xF08; // int32_t
    pub const m_iNodeNumberMax: usize = 0xF0C; // int32_t
    pub const m_bListenedTo: usize = 0xF10; // bool
    pub const m_hViewPosition: usize = 0xF20; // CHandle<C_BaseEntity>
    pub const m_bRestartAfterRestore: usize = 0xF24; // bool
}

pub mod C_PointEntity { // C_BaseEntity
}

pub mod C_PointValueRemapper { // C_BaseEntity
    pub const m_bDisabled: usize = 0x550; // bool
    pub const m_bDisabledOld: usize = 0x551; // bool
    pub const m_bUpdateOnClient: usize = 0x552; // bool
    pub const m_nInputType: usize = 0x554; // ValueRemapperInputType_t
    pub const m_hRemapLineStart: usize = 0x558; // CHandle<C_BaseEntity>
    pub const m_hRemapLineEnd: usize = 0x55C; // CHandle<C_BaseEntity>
    pub const m_flMaximumChangePerSecond: usize = 0x560; // float
    pub const m_flDisengageDistance: usize = 0x564; // float
    pub const m_flEngageDistance: usize = 0x568; // float
    pub const m_bRequiresUseKey: usize = 0x56C; // bool
    pub const m_nOutputType: usize = 0x570; // ValueRemapperOutputType_t
    pub const m_hOutputEntities: usize = 0x578; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
    pub const m_nHapticsType: usize = 0x590; // ValueRemapperHapticsType_t
    pub const m_nMomentumType: usize = 0x594; // ValueRemapperMomentumType_t
    pub const m_flMomentumModifier: usize = 0x598; // float
    pub const m_flSnapValue: usize = 0x59C; // float
    pub const m_flCurrentMomentum: usize = 0x5A0; // float
    pub const m_nRatchetType: usize = 0x5A4; // ValueRemapperRatchetType_t
    pub const m_flRatchetOffset: usize = 0x5A8; // float
    pub const m_flInputOffset: usize = 0x5AC; // float
    pub const m_bEngaged: usize = 0x5B0; // bool
    pub const m_bFirstUpdate: usize = 0x5B1; // bool
    pub const m_flPreviousValue: usize = 0x5B4; // float
    pub const m_flPreviousUpdateTickTime: usize = 0x5B8; // GameTime_t
    pub const m_vecPreviousTestPoint: usize = 0x5BC; // Vector
}

pub mod C_PointWorldText { // C_ModelPointEntity
    pub const m_bForceRecreateNextUpdate: usize = 0xCD8; // bool
    pub const m_messageText: usize = 0xCE8; // char[512]
    pub const m_FontName: usize = 0xEE8; // char[64]
    pub const m_bEnabled: usize = 0xF28; // bool
    pub const m_bFullbright: usize = 0xF29; // bool
    pub const m_flWorldUnitsPerPx: usize = 0xF2C; // float
    pub const m_flFontSize: usize = 0xF30; // float
    pub const m_flDepthOffset: usize = 0xF34; // float
    pub const m_Color: usize = 0xF38; // Color
    pub const m_nJustifyHorizontal: usize = 0xF3C; // PointWorldTextJustifyHorizontal_t
    pub const m_nJustifyVertical: usize = 0xF40; // PointWorldTextJustifyVertical_t
    pub const m_nReorientMode: usize = 0xF44; // PointWorldTextReorientMode_t
}

pub mod C_PostProcessingVolume { // C_BaseTrigger
    pub const m_hPostSettings: usize = 0xCE8; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
    pub const m_flFadeDuration: usize = 0xCF0; // float
    pub const m_flMinLogExposure: usize = 0xCF4; // float
    pub const m_flMaxLogExposure: usize = 0xCF8; // float
    pub const m_flMinExposure: usize = 0xCFC; // float
    pub const m_flMaxExposure: usize = 0xD00; // float
    pub const m_flExposureCompensation: usize = 0xD04; // float
    pub const m_flExposureFadeSpeedUp: usize = 0xD08; // float
    pub const m_flExposureFadeSpeedDown: usize = 0xD0C; // float
    pub const m_flTonemapEVSmoothingRange: usize = 0xD10; // float
    pub const m_bMaster: usize = 0xD14; // bool
    pub const m_bExposureControl: usize = 0xD15; // bool
    pub const m_flRate: usize = 0xD18; // float
    pub const m_flTonemapPercentTarget: usize = 0xD1C; // float
    pub const m_flTonemapPercentBrightPixels: usize = 0xD20; // float
    pub const m_flTonemapMinAvgLum: usize = 0xD24; // float
}

pub mod C_Precipitation { // C_BaseTrigger
    pub const m_flDensity: usize = 0xCD8; // float
    pub const m_flParticleInnerDist: usize = 0xCE8; // float
    pub const m_pParticleDef: usize = 0xCF0; // char*
    pub const m_tParticlePrecipTraceTimer: usize = 0xD18; // TimedEvent[1]
    pub const m_bActiveParticlePrecipEmitter: usize = 0xD20; // bool[1]
    pub const m_bParticlePrecipInitialized: usize = 0xD21; // bool
    pub const m_bHasSimulatedSinceLastSceneObjectUpdate: usize = 0xD22; // bool
    pub const m_nAvailableSheetSequencesMaxIndex: usize = 0xD24; // int32_t
}

pub mod C_PrecipitationBlocker { // C_BaseModelEntity
}

pub mod C_PredictedViewModel { // C_BaseViewModel
    pub const m_vPredictedLagOffset: usize = 0xF40; // Vector
    pub const m_targetSpeed: usize = 0xF4C; // QAngle
    pub const m_currentSpeed: usize = 0xF58; // QAngle
}

pub mod C_PropDoorRotating { // C_BasePropDoor
}

pub mod C_RagdollManager { // C_BaseEntity
    pub const m_iCurrentMaxRagdollCount: usize = 0x550; // int8_t
}

pub mod C_RagdollProp { // CBaseAnimGraph
    pub const m_ragPos: usize = 0xEE0; // C_NetworkUtlVectorBase<Vector>
    pub const m_ragAngles: usize = 0xEF8; // C_NetworkUtlVectorBase<QAngle>
    pub const m_flBlendWeight: usize = 0xF10; // float
    pub const m_hRagdollSource: usize = 0xF14; // CHandle<C_BaseEntity>
    pub const m_iEyeAttachment: usize = 0xF18; // AttachmentHandle_t
    pub const m_flBlendWeightCurrent: usize = 0xF1C; // float
    pub const m_parentPhysicsBoneIndices: usize = 0xF20; // CUtlVector<int32_t>
    pub const m_worldSpaceBoneComputationOrder: usize = 0xF38; // CUtlVector<int32_t>
}

pub mod C_RagdollPropAttached { // C_RagdollProp
    pub const m_boneIndexAttached: usize = 0xF50; // uint32_t
    pub const m_ragdollAttachedObjectIndex: usize = 0xF54; // uint32_t
    pub const m_attachmentPointBoneSpace: usize = 0xF58; // Vector
    pub const m_attachmentPointRagdollSpace: usize = 0xF64; // Vector
    pub const m_vecOffset: usize = 0xF70; // Vector
    pub const m_parentTime: usize = 0xF7C; // float
    pub const m_bHasParent: usize = 0xF80; // bool
}

pub mod C_RectLight { // C_BarnLight
    pub const m_bShowLight: usize = 0xF18; // bool
}

pub mod C_RetakeGameRules {
    pub const m_nMatchSeed: usize = 0xF8; // int32_t
    pub const m_bBlockersPresent: usize = 0xFC; // bool
    pub const m_bRoundInProgress: usize = 0xFD; // bool
    pub const m_iFirstSecondHalfRound: usize = 0x100; // int32_t
    pub const m_iBombSite: usize = 0x104; // int32_t
}

pub mod C_RopeKeyframe { // C_BaseModelEntity
    pub const m_LinksTouchingSomething: usize = 0xCD8; // CBitVec<10>
    pub const m_nLinksTouchingSomething: usize = 0xCDC; // int32_t
    pub const m_bApplyWind: usize = 0xCE0; // bool
    pub const m_fPrevLockedPoints: usize = 0xCE4; // int32_t
    pub const m_iForcePointMoveCounter: usize = 0xCE8; // int32_t
    pub const m_bPrevEndPointPos: usize = 0xCEC; // bool[2]
    pub const m_vPrevEndPointPos: usize = 0xCF0; // Vector[2]
    pub const m_flCurScroll: usize = 0xD08; // float
    pub const m_flScrollSpeed: usize = 0xD0C; // float
    pub const m_RopeFlags: usize = 0xD10; // uint16_t
    pub const m_iRopeMaterialModelIndex: usize = 0xD18; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_LightValues: usize = 0xF90; // Vector[10]
    pub const m_nSegments: usize = 0x1008; // uint8_t
    pub const m_hStartPoint: usize = 0x100C; // CHandle<C_BaseEntity>
    pub const m_hEndPoint: usize = 0x1010; // CHandle<C_BaseEntity>
    pub const m_iStartAttachment: usize = 0x1014; // AttachmentHandle_t
    pub const m_iEndAttachment: usize = 0x1015; // AttachmentHandle_t
    pub const m_Subdiv: usize = 0x1016; // uint8_t
    pub const m_RopeLength: usize = 0x1018; // int16_t
    pub const m_Slack: usize = 0x101A; // int16_t
    pub const m_TextureScale: usize = 0x101C; // float
    pub const m_fLockedPoints: usize = 0x1020; // uint8_t
    pub const m_nChangeCount: usize = 0x1021; // uint8_t
    pub const m_Width: usize = 0x1024; // float
    pub const m_PhysicsDelegate: usize = 0x1028; // C_RopeKeyframe::CPhysicsDelegate
    pub const m_hMaterial: usize = 0x1038; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_TextureHeight: usize = 0x1040; // int32_t
    pub const m_vecImpulse: usize = 0x1044; // Vector
    pub const m_vecPreviousImpulse: usize = 0x1050; // Vector
    pub const m_flCurrentGustTimer: usize = 0x105C; // float
    pub const m_flCurrentGustLifetime: usize = 0x1060; // float
    pub const m_flTimeToNextGust: usize = 0x1064; // float
    pub const m_vWindDir: usize = 0x1068; // Vector
    pub const m_vColorMod: usize = 0x1074; // Vector
    pub const m_vCachedEndPointAttachmentPos: usize = 0x1080; // Vector[2]
    pub const m_vCachedEndPointAttachmentAngle: usize = 0x1098; // QAngle[2]
    pub const m_bConstrainBetweenEndpoints: usize = 0x10B0; // bool
    pub const m_bEndPointAttachmentPositionsDirty: usize = 0x0; // bitfield:1
    pub const m_bEndPointAttachmentAnglesDirty: usize = 0x0; // bitfield:1
    pub const m_bNewDataThisFrame: usize = 0x0; // bitfield:1
    pub const m_bPhysicsInitted: usize = 0x0; // bitfield:1
}

pub mod C_RopeKeyframe_CPhysicsDelegate {
    pub const m_pKeyframe: usize = 0x8; // C_RopeKeyframe*
}

pub mod C_SceneEntity { // C_PointEntity
    pub const m_bIsPlayingBack: usize = 0x558; // bool
    pub const m_bPaused: usize = 0x559; // bool
    pub const m_bMultiplayer: usize = 0x55A; // bool
    pub const m_bAutogenerated: usize = 0x55B; // bool
    pub const m_flForceClientTime: usize = 0x55C; // float
    pub const m_nSceneStringIndex: usize = 0x560; // uint16_t
    pub const m_bClientOnly: usize = 0x562; // bool
    pub const m_hOwner: usize = 0x564; // CHandle<C_BaseFlex>
    pub const m_hActorList: usize = 0x568; // C_NetworkUtlVectorBase<CHandle<C_BaseFlex>>
    pub const m_bWasPlaying: usize = 0x580; // bool
    pub const m_QueuedEvents: usize = 0x590; // CUtlVector<C_SceneEntity::QueuedEvents_t>
    pub const m_flCurrentTime: usize = 0x5A8; // float
}

pub mod C_SceneEntity_QueuedEvents_t {
    pub const starttime: usize = 0x0; // float
}

pub mod C_SensorGrenade { // C_BaseCSGrenade
}

pub mod C_SensorGrenadeProjectile { // C_BaseCSGrenadeProjectile
}

pub mod C_ShatterGlassShardPhysics { // C_PhysicsProp
    pub const m_ShardDesc: usize = 0x1038; // shard_model_desc_t
}

pub mod C_SingleplayRules { // C_GameRules
}

pub mod C_SkyCamera { // C_BaseEntity
    pub const m_skyboxData: usize = 0x550; // sky3dparams_t
    pub const m_skyboxSlotToken: usize = 0x5E0; // CUtlStringToken
    pub const m_bUseAngles: usize = 0x5E4; // bool
    pub const m_pNext: usize = 0x5E8; // C_SkyCamera*
}

pub mod C_SmokeGrenade { // C_BaseCSGrenade
}

pub mod C_SmokeGrenadeProjectile { // C_BaseCSGrenadeProjectile
    pub const m_nSmokeEffectTickBegin: usize = 0x1160; // int32_t
    pub const m_bDidSmokeEffect: usize = 0x1164; // bool
    pub const m_nRandomSeed: usize = 0x1168; // int32_t
    pub const m_vSmokeColor: usize = 0x116C; // Vector
    pub const m_vSmokeDetonationPos: usize = 0x1178; // Vector
    pub const m_VoxelFrameData: usize = 0x1188; // CUtlVector<uint8_t>
    pub const m_bSmokeVolumeDataReceived: usize = 0x11A0; // bool
    pub const m_bSmokeEffectSpawned: usize = 0x11A1; // bool
}

pub mod C_SoundAreaEntityBase { // C_BaseEntity
    pub const m_bDisabled: usize = 0x550; // bool
    pub const m_bWasEnabled: usize = 0x558; // bool
    pub const m_iszSoundAreaType: usize = 0x560; // CUtlSymbolLarge
    pub const m_vPos: usize = 0x568; // Vector
}

pub mod C_SoundAreaEntityOrientedBox { // C_SoundAreaEntityBase
    pub const m_vMin: usize = 0x578; // Vector
    pub const m_vMax: usize = 0x584; // Vector
}

pub mod C_SoundAreaEntitySphere { // C_SoundAreaEntityBase
    pub const m_flRadius: usize = 0x578; // float
}

pub mod C_SoundOpvarSetAABBEntity { // C_SoundOpvarSetPointEntity
}

pub mod C_SoundOpvarSetAutoRoomEntity { // C_SoundOpvarSetPointEntity
}

pub mod C_SoundOpvarSetOBBEntity { // C_SoundOpvarSetAABBEntity
}

pub mod C_SoundOpvarSetOBBWindEntity { // C_SoundOpvarSetPointBase
}

pub mod C_SoundOpvarSetPathCornerEntity { // C_SoundOpvarSetPointEntity
}

pub mod C_SoundOpvarSetPointBase { // C_BaseEntity
    pub const m_iszStackName: usize = 0x550; // CUtlSymbolLarge
    pub const m_iszOperatorName: usize = 0x558; // CUtlSymbolLarge
    pub const m_iszOpvarName: usize = 0x560; // CUtlSymbolLarge
    pub const m_iOpvarIndex: usize = 0x568; // int32_t
    pub const m_bUseAutoCompare: usize = 0x56C; // bool
}

pub mod C_SoundOpvarSetPointEntity { // C_SoundOpvarSetPointBase
}

pub mod C_SpotlightEnd { // C_BaseModelEntity
    pub const m_flLightScale: usize = 0xCD0; // float
    pub const m_Radius: usize = 0xCD4; // float
}

pub mod C_Sprite { // C_BaseModelEntity
    pub const m_hSpriteMaterial: usize = 0xCE8; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_hAttachedToEntity: usize = 0xCF0; // CHandle<C_BaseEntity>
    pub const m_nAttachment: usize = 0xCF4; // AttachmentHandle_t
    pub const m_flSpriteFramerate: usize = 0xCF8; // float
    pub const m_flFrame: usize = 0xCFC; // float
    pub const m_flDieTime: usize = 0xD00; // GameTime_t
    pub const m_nBrightness: usize = 0xD10; // uint32_t
    pub const m_flBrightnessDuration: usize = 0xD14; // float
    pub const m_flSpriteScale: usize = 0xD18; // float
    pub const m_flScaleDuration: usize = 0xD1C; // float
    pub const m_bWorldSpaceScale: usize = 0xD20; // bool
    pub const m_flGlowProxySize: usize = 0xD24; // float
    pub const m_flHDRColorScale: usize = 0xD28; // float
    pub const m_flLastTime: usize = 0xD2C; // GameTime_t
    pub const m_flMaxFrame: usize = 0xD30; // float
    pub const m_flStartScale: usize = 0xD34; // float
    pub const m_flDestScale: usize = 0xD38; // float
    pub const m_flScaleTimeStart: usize = 0xD3C; // GameTime_t
    pub const m_nStartBrightness: usize = 0xD40; // int32_t
    pub const m_nDestBrightness: usize = 0xD44; // int32_t
    pub const m_flBrightnessTimeStart: usize = 0xD48; // GameTime_t
    pub const m_hOldSpriteMaterial: usize = 0xD50; // CWeakHandle<InfoForResourceTypeIMaterial2>
    pub const m_nSpriteWidth: usize = 0xDF8; // int32_t
    pub const m_nSpriteHeight: usize = 0xDFC; // int32_t
}

pub mod C_SpriteOriented { // C_Sprite
}

pub mod C_Sun { // C_BaseModelEntity
    pub const m_fxSSSunFlareEffectIndex: usize = 0xCD0; // ParticleIndex_t
    pub const m_fxSunFlareEffectIndex: usize = 0xCD4; // ParticleIndex_t
    pub const m_fdistNormalize: usize = 0xCD8; // float
    pub const m_vSunPos: usize = 0xCDC; // Vector
    pub const m_vDirection: usize = 0xCE8; // Vector
    pub const m_iszEffectName: usize = 0xCF8; // CUtlSymbolLarge
    pub const m_iszSSEffectName: usize = 0xD00; // CUtlSymbolLarge
    pub const m_clrOverlay: usize = 0xD08; // Color
    pub const m_bOn: usize = 0xD0C; // bool
    pub const m_bmaxColor: usize = 0xD0D; // bool
    pub const m_flSize: usize = 0xD10; // float
    pub const m_flHazeScale: usize = 0xD14; // float
    pub const m_flRotation: usize = 0xD18; // float
    pub const m_flHDRColorScale: usize = 0xD1C; // float
    pub const m_flAlphaHaze: usize = 0xD20; // float
    pub const m_flAlphaScale: usize = 0xD24; // float
    pub const m_flAlphaHdr: usize = 0xD28; // float
    pub const m_flFarZScale: usize = 0xD2C; // float
}

pub mod C_SunGlowOverlay { // CGlowOverlay
    pub const m_bModulateByDot: usize = 0xD0; // bool
}

pub mod C_Team { // C_BaseEntity
    pub const m_aPlayerControllers: usize = 0x550; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
    pub const m_aPlayers: usize = 0x568; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
    pub const m_iScore: usize = 0x580; // int32_t
    pub const m_szTeamname: usize = 0x584; // char[129]
}

pub mod C_TeamRoundTimer { // C_BaseEntity
    pub const m_bTimerPaused: usize = 0x550; // bool
    pub const m_flTimeRemaining: usize = 0x554; // float
    pub const m_flTimerEndTime: usize = 0x558; // GameTime_t
    pub const m_bIsDisabled: usize = 0x55C; // bool
    pub const m_bShowInHUD: usize = 0x55D; // bool
    pub const m_nTimerLength: usize = 0x560; // int32_t
    pub const m_nTimerInitialLength: usize = 0x564; // int32_t
    pub const m_nTimerMaxLength: usize = 0x568; // int32_t
    pub const m_bAutoCountdown: usize = 0x56C; // bool
    pub const m_nSetupTimeLength: usize = 0x570; // int32_t
    pub const m_nState: usize = 0x574; // int32_t
    pub const m_bStartPaused: usize = 0x578; // bool
    pub const m_bInCaptureWatchState: usize = 0x579; // bool
    pub const m_flTotalTime: usize = 0x57C; // float
    pub const m_bStopWatchTimer: usize = 0x580; // bool
    pub const m_bFireFinished: usize = 0x581; // bool
    pub const m_bFire5MinRemain: usize = 0x582; // bool
    pub const m_bFire4MinRemain: usize = 0x583; // bool
    pub const m_bFire3MinRemain: usize = 0x584; // bool
    pub const m_bFire2MinRemain: usize = 0x585; // bool
    pub const m_bFire1MinRemain: usize = 0x586; // bool
    pub const m_bFire30SecRemain: usize = 0x587; // bool
    pub const m_bFire10SecRemain: usize = 0x588; // bool
    pub const m_bFire5SecRemain: usize = 0x589; // bool
    pub const m_bFire4SecRemain: usize = 0x58A; // bool
    pub const m_bFire3SecRemain: usize = 0x58B; // bool
    pub const m_bFire2SecRemain: usize = 0x58C; // bool
    pub const m_bFire1SecRemain: usize = 0x58D; // bool
    pub const m_nOldTimerLength: usize = 0x590; // int32_t
    pub const m_nOldTimerState: usize = 0x594; // int32_t
}

pub mod C_TeamplayRules { // C_MultiplayRules
}

pub mod C_TextureBasedAnimatable { // C_BaseModelEntity
    pub const m_bLoop: usize = 0xCD0; // bool
    pub const m_flFPS: usize = 0xCD4; // float
    pub const m_hPositionKeys: usize = 0xCD8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_hRotationKeys: usize = 0xCE0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_vAnimationBoundsMin: usize = 0xCE8; // Vector
    pub const m_vAnimationBoundsMax: usize = 0xCF4; // Vector
    pub const m_flStartTime: usize = 0xD00; // float
    pub const m_flStartFrame: usize = 0xD04; // float
}

pub mod C_TintController { // C_BaseEntity
}

pub mod C_TonemapController2 { // C_BaseEntity
    pub const m_flAutoExposureMin: usize = 0x550; // float
    pub const m_flAutoExposureMax: usize = 0x554; // float
    pub const m_flTonemapPercentTarget: usize = 0x558; // float
    pub const m_flTonemapPercentBrightPixels: usize = 0x55C; // float
    pub const m_flTonemapMinAvgLum: usize = 0x560; // float
    pub const m_flExposureAdaptationSpeedUp: usize = 0x564; // float
    pub const m_flExposureAdaptationSpeedDown: usize = 0x568; // float
    pub const m_flTonemapEVSmoothingRange: usize = 0x56C; // float
}

pub mod C_TonemapController2Alias_env_tonemap_controller2 { // C_TonemapController2
}

pub mod C_TriggerBuoyancy { // C_BaseTrigger
    pub const m_BuoyancyHelper: usize = 0xCD8; // CBuoyancyHelper
    pub const m_flFluidDensity: usize = 0xCF8; // float
}

pub mod C_TriggerLerpObject { // C_BaseTrigger
}

pub mod C_TriggerMultiple { // C_BaseTrigger
}

pub mod C_TriggerPhysics { // C_BaseTrigger
    pub const m_gravityScale: usize = 0xCD8; // float
    pub const m_linearLimit: usize = 0xCDC; // float
    pub const m_linearDamping: usize = 0xCE0; // float
    pub const m_angularLimit: usize = 0xCE4; // float
    pub const m_angularDamping: usize = 0xCE8; // float
    pub const m_linearForce: usize = 0xCEC; // float
    pub const m_flFrequency: usize = 0xCF0; // float
    pub const m_flDampingRatio: usize = 0xCF4; // float
    pub const m_vecLinearForcePointAt: usize = 0xCF8; // Vector
    pub const m_bCollapseToForcePoint: usize = 0xD04; // bool
    pub const m_vecLinearForcePointAtWorld: usize = 0xD08; // Vector
    pub const m_vecLinearForceDirection: usize = 0xD14; // Vector
    pub const m_bConvertToDebrisWhenPossible: usize = 0xD20; // bool
}

pub mod C_TriggerVolume { // C_BaseModelEntity
}

pub mod C_ViewmodelAttachmentModel { // CBaseAnimGraph
}

pub mod C_ViewmodelWeapon { // CBaseAnimGraph
    pub const m_worldModel: usize = 0xED8; // char*
}

pub mod C_VoteController { // C_BaseEntity
    pub const m_iActiveIssueIndex: usize = 0x560; // int32_t
    pub const m_iOnlyTeamToVote: usize = 0x564; // int32_t
    pub const m_nVoteOptionCount: usize = 0x568; // int32_t[5]
    pub const m_nPotentialVotes: usize = 0x57C; // int32_t
    pub const m_bVotesDirty: usize = 0x580; // bool
    pub const m_bTypeDirty: usize = 0x581; // bool
    pub const m_bIsYesNoVote: usize = 0x582; // bool
}

pub mod C_WaterBullet { // CBaseAnimGraph
}

pub mod C_WeaponAWP { // C_CSWeaponBaseGun
}

pub mod C_WeaponAug { // C_CSWeaponBaseGun
}

pub mod C_WeaponBaseItem { // C_CSWeaponBase
    pub const m_SequenceCompleteTimer: usize = 0x1A70; // CountdownTimer
    pub const m_bRedraw: usize = 0x1A88; // bool
}

pub mod C_WeaponBizon { // C_CSWeaponBaseGun
}

pub mod C_WeaponCZ75a { // C_CSWeaponBaseGun
}

pub mod C_WeaponElite { // C_CSWeaponBaseGun
}

pub mod C_WeaponFamas { // C_CSWeaponBaseGun
}

pub mod C_WeaponFiveSeven { // C_CSWeaponBaseGun
}

pub mod C_WeaponG3SG1 { // C_CSWeaponBaseGun
}

pub mod C_WeaponGalilAR { // C_CSWeaponBaseGun
}

pub mod C_WeaponGlock { // C_CSWeaponBaseGun
}

pub mod C_WeaponHKP2000 { // C_CSWeaponBaseGun
}

pub mod C_WeaponM249 { // C_CSWeaponBaseGun
}

pub mod C_WeaponM4A1 { // C_CSWeaponBaseGun
}

pub mod C_WeaponM4A1Silencer { // C_CSWeaponBaseGun
}

pub mod C_WeaponMAC10 { // C_CSWeaponBaseGun
}

pub mod C_WeaponMP5SD { // C_CSWeaponBaseGun
}

pub mod C_WeaponMP7 { // C_CSWeaponBaseGun
}

pub mod C_WeaponMP9 { // C_CSWeaponBaseGun
}

pub mod C_WeaponMag7 { // C_CSWeaponBaseGun
}

pub mod C_WeaponNOVA { // C_CSWeaponBase
}

pub mod C_WeaponNegev { // C_CSWeaponBaseGun
}

pub mod C_WeaponP250 { // C_CSWeaponBaseGun
}

pub mod C_WeaponP90 { // C_CSWeaponBaseGun
}

pub mod C_WeaponRevolver { // C_CSWeaponBaseGun
}

pub mod C_WeaponSCAR20 { // C_CSWeaponBaseGun
}

pub mod C_WeaponSG556 { // C_CSWeaponBaseGun
}

pub mod C_WeaponSSG08 { // C_CSWeaponBaseGun
}

pub mod C_WeaponSawedoff { // C_CSWeaponBase
}

pub mod C_WeaponShield { // C_CSWeaponBaseGun
    pub const m_flDisplayHealth: usize = 0x1A90; // float
}

pub mod C_WeaponTaser { // C_CSWeaponBaseGun
    pub const m_fFireTime: usize = 0x1A90; // GameTime_t
}

pub mod C_WeaponTec9 { // C_CSWeaponBaseGun
}

pub mod C_WeaponUMP45 { // C_CSWeaponBaseGun
}

pub mod C_WeaponUSPSilencer { // C_CSWeaponBaseGun
}

pub mod C_WeaponXM1014 { // C_CSWeaponBase
}

pub mod C_World { // C_BaseModelEntity
}

pub mod C_WorldModelGloves { // CBaseAnimGraph
}

pub mod C_WorldModelNametag { // CBaseAnimGraph
}

pub mod C_WorldModelStattrak { // CBaseAnimGraph
}

pub mod C_fogplayerparams_t {
    pub const m_hCtrl: usize = 0x8; // CHandle<C_FogController>
    pub const m_flTransitionTime: usize = 0xC; // float
    pub const m_OldColor: usize = 0x10; // Color
    pub const m_flOldStart: usize = 0x14; // float
    pub const m_flOldEnd: usize = 0x18; // float
    pub const m_flOldMaxDensity: usize = 0x1C; // float
    pub const m_flOldHDRColorScale: usize = 0x20; // float
    pub const m_flOldFarZ: usize = 0x24; // float
    pub const m_NewColor: usize = 0x28; // Color
    pub const m_flNewStart: usize = 0x2C; // float
    pub const m_flNewEnd: usize = 0x30; // float
    pub const m_flNewMaxDensity: usize = 0x34; // float
    pub const m_flNewHDRColorScale: usize = 0x38; // float
    pub const m_flNewFarZ: usize = 0x3C; // float
}

pub mod CompMatMutatorCondition_t {
    pub const m_nMutatorCondition: usize = 0x0; // CompMatPropertyMutatorConditionType_t
    pub const m_strMutatorConditionContainerName: usize = 0x8; // CUtlString
    pub const m_strMutatorConditionContainerVarName: usize = 0x10; // CUtlString
    pub const m_strMutatorConditionContainerVarValue: usize = 0x18; // CUtlString
    pub const m_bPassWhenTrue: usize = 0x20; // bool
}

pub mod CompMatPropertyMutator_t {
    pub const m_bEnabled: usize = 0x0; // bool
    pub const m_nMutatorCommandType: usize = 0x4; // CompMatPropertyMutatorType_t
    pub const m_strInitWith_Container: usize = 0x8; // CUtlString
    pub const m_strCopyProperty_InputContainerSrc: usize = 0x10; // CUtlString
    pub const m_strCopyProperty_InputContainerProperty: usize = 0x18; // CUtlString
    pub const m_strCopyProperty_TargetProperty: usize = 0x20; // CUtlString
    pub const m_strRandomRollInputVars_SeedInputVar: usize = 0x28; // CUtlString
    pub const m_vecRandomRollInputVars_InputVarsToRoll: usize = 0x30; // CUtlVector<CUtlString>
    pub const m_strCopyMatchingKeys_InputContainerSrc: usize = 0x48; // CUtlString
    pub const m_strCopyKeysWithSuffix_InputContainerSrc: usize = 0x50; // CUtlString
    pub const m_strCopyKeysWithSuffix_FindSuffix: usize = 0x58; // CUtlString
    pub const m_strCopyKeysWithSuffix_ReplaceSuffix: usize = 0x60; // CUtlString
    pub const m_nSetValue_Value: usize = 0x68; // CompositeMaterialInputLooseVariable_t
    pub const m_strGenerateTexture_TargetParam: usize = 0x2D8; // CUtlString
    pub const m_strGenerateTexture_InitialContainer: usize = 0x2E0; // CUtlString
    pub const m_nResolution: usize = 0x2E8; // int32_t
    pub const m_bIsScratchTarget: usize = 0x2EC; // bool
    pub const m_bSplatDebugInfo: usize = 0x2ED; // bool
    pub const m_bCaptureInRenderDoc: usize = 0x2EE; // bool
    pub const m_vecTexGenInstructions: usize = 0x2F0; // CUtlVector<CompMatPropertyMutator_t>
    pub const m_vecConditionalMutators: usize = 0x308; // CUtlVector<CompMatPropertyMutator_t>
    pub const m_strPopInputQueue_Container: usize = 0x320; // CUtlString
    pub const m_strDrawText_InputContainerSrc: usize = 0x328; // CUtlString
    pub const m_strDrawText_InputContainerProperty: usize = 0x330; // CUtlString
    pub const m_vecDrawText_Position: usize = 0x338; // Vector2D
    pub const m_colDrawText_Color: usize = 0x340; // Color
    pub const m_strDrawText_Font: usize = 0x348; // CUtlString
    pub const m_vecConditions: usize = 0x350; // CUtlVector<CompMatMutatorCondition_t>
}

pub mod CompositeMaterialAssemblyProcedure_t {
    pub const m_vecCompMatIncludes: usize = 0x0; // CUtlVector<CResourceName>
    pub const m_vecMatchFilters: usize = 0x18; // CUtlVector<CompositeMaterialMatchFilter_t>
    pub const m_vecCompositeInputContainers: usize = 0x30; // CUtlVector<CompositeMaterialInputContainer_t>
    pub const m_vecPropertyMutators: usize = 0x48; // CUtlVector<CompMatPropertyMutator_t>
}

pub mod CompositeMaterialEditorPoint_t {
    pub const m_ModelName: usize = 0x0; // CResourceName
    pub const m_nSequenceIndex: usize = 0xE0; // int32_t
    pub const m_flCycle: usize = 0xE4; // float
    pub const m_KVModelStateChoices: usize = 0xE8; // KeyValues3
    pub const m_bEnableChildModel: usize = 0xF8; // bool
    pub const m_ChildModelName: usize = 0x100; // CResourceName
    pub const m_vecCompositeMaterialAssemblyProcedures: usize = 0x1E0; // CUtlVector<CompositeMaterialAssemblyProcedure_t>
    pub const m_vecCompositeMaterials: usize = 0x1F8; // CUtlVector<CompositeMaterial_t>
}

pub mod CompositeMaterialInputContainer_t {
    pub const m_bEnabled: usize = 0x0; // bool
    pub const m_nCompositeMaterialInputContainerSourceType: usize = 0x4; // CompositeMaterialInputContainerSourceType_t
    pub const m_strSpecificContainerMaterial: usize = 0x8; // CResourceName
    pub const m_strAttrName: usize = 0xE8; // CUtlString
    pub const m_strAlias: usize = 0xF0; // CUtlString
    pub const m_vecLooseVariables: usize = 0xF8; // CUtlVector<CompositeMaterialInputLooseVariable_t>
    pub const m_strAttrNameForVar: usize = 0x110; // CUtlString
    pub const m_bExposeExternally: usize = 0x118; // bool
}

pub mod CompositeMaterialInputLooseVariable_t {
    pub const m_strName: usize = 0x0; // CUtlString
    pub const m_bExposeExternally: usize = 0x8; // bool
    pub const m_strExposedFriendlyName: usize = 0x10; // CUtlString
    pub const m_strExposedFriendlyGroupName: usize = 0x18; // CUtlString
    pub const m_bExposedVariableIsFixedRange: usize = 0x20; // bool
    pub const m_strExposedVisibleWhenTrue: usize = 0x28; // CUtlString
    pub const m_strExposedHiddenWhenTrue: usize = 0x30; // CUtlString
    pub const m_nVariableType: usize = 0x38; // CompositeMaterialInputLooseVariableType_t
    pub const m_bValueBoolean: usize = 0x3C; // bool
    pub const m_nValueIntX: usize = 0x40; // int32_t
    pub const m_nValueIntY: usize = 0x44; // int32_t
    pub const m_nValueIntZ: usize = 0x48; // int32_t
    pub const m_nValueIntW: usize = 0x4C; // int32_t
    pub const m_bHasFloatBounds: usize = 0x50; // bool
    pub const m_flValueFloatX: usize = 0x54; // float
    pub const m_flValueFloatX_Min: usize = 0x58; // float
    pub const m_flValueFloatX_Max: usize = 0x5C; // float
    pub const m_flValueFloatY: usize = 0x60; // float
    pub const m_flValueFloatY_Min: usize = 0x64; // float
    pub const m_flValueFloatY_Max: usize = 0x68; // float
    pub const m_flValueFloatZ: usize = 0x6C; // float
    pub const m_flValueFloatZ_Min: usize = 0x70; // float
    pub const m_flValueFloatZ_Max: usize = 0x74; // float
    pub const m_flValueFloatW: usize = 0x78; // float
    pub const m_flValueFloatW_Min: usize = 0x7C; // float
    pub const m_flValueFloatW_Max: usize = 0x80; // float
    pub const m_cValueColor4: usize = 0x84; // Color
    pub const m_nValueSystemVar: usize = 0x88; // CompositeMaterialVarSystemVar_t
    pub const m_strResourceMaterial: usize = 0x90; // CResourceName
    pub const m_strTextureContentAssetPath: usize = 0x170; // CUtlString
    pub const m_strTextureRuntimeResourcePath: usize = 0x178; // CResourceName
    pub const m_strTextureCompilationVtexTemplate: usize = 0x258; // CUtlString
    pub const m_nTextureType: usize = 0x260; // CompositeMaterialInputTextureType_t
    pub const m_strString: usize = 0x268; // CUtlString
}

pub mod CompositeMaterialMatchFilter_t {
    pub const m_nCompositeMaterialMatchFilterType: usize = 0x0; // CompositeMaterialMatchFilterType_t
    pub const m_strMatchFilter: usize = 0x8; // CUtlString
    pub const m_strMatchValue: usize = 0x10; // CUtlString
    pub const m_bPassWhenTrue: usize = 0x18; // bool
}

pub mod CompositeMaterial_t {
    pub const m_TargetKVs: usize = 0x8; // KeyValues3
    pub const m_PreGenerationKVs: usize = 0x18; // KeyValues3
    pub const m_FinalKVs: usize = 0x28; // KeyValues3
    pub const m_vecGeneratedTextures: usize = 0x40; // CUtlVector<GeneratedTextureHandle_t>
}

pub mod CountdownTimer {
    pub const m_duration: usize = 0x8; // float
    pub const m_timestamp: usize = 0xC; // GameTime_t
    pub const m_timescale: usize = 0x10; // float
    pub const m_nWorldGroupId: usize = 0x14; // WorldGroupId_t
}

pub mod EngineCountdownTimer {
    pub const m_duration: usize = 0x8; // float
    pub const m_timestamp: usize = 0xC; // float
    pub const m_timescale: usize = 0x10; // float
}

pub mod EntityRenderAttribute_t {
    pub const m_ID: usize = 0x30; // CUtlStringToken
    pub const m_Values: usize = 0x34; // Vector4D
}

pub mod EntitySpottedState_t {
    pub const m_bSpotted: usize = 0x8; // bool
    pub const m_bSpottedByMask: usize = 0xC; // uint32_t[2]
}

pub mod GeneratedTextureHandle_t {
    pub const m_strBitmapName: usize = 0x0; // CUtlString
}

pub mod IClientAlphaProperty {
}

pub mod IntervalTimer {
    pub const m_timestamp: usize = 0x8; // GameTime_t
    pub const m_nWorldGroupId: usize = 0xC; // WorldGroupId_t
}

pub mod PhysicsRagdollPose_t {
    pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
    pub const m_Transforms: usize = 0x30; // C_NetworkUtlVectorBase<CTransform>
    pub const m_hOwner: usize = 0x48; // CHandle<C_BaseEntity>
    pub const m_bDirty: usize = 0x68; // bool
}

pub mod SellbackPurchaseEntry_t {
    pub const m_unDefIdx: usize = 0x30; // uint16_t
    pub const m_nCost: usize = 0x34; // int32_t
    pub const m_nPrevArmor: usize = 0x38; // int32_t
    pub const m_bPrevHelmet: usize = 0x3C; // bool
    pub const m_hItem: usize = 0x40; // CEntityHandle
}

pub mod SequenceHistory_t {
    pub const m_hSequence: usize = 0x0; // HSequence
    pub const m_flSeqStartTime: usize = 0x4; // GameTime_t
    pub const m_flSeqFixedCycle: usize = 0x8; // float
    pub const m_nSeqLoopMode: usize = 0xC; // AnimLoopMode_t
    pub const m_flPlaybackRate: usize = 0x10; // float
    pub const m_flCyclesPerSecond: usize = 0x14; // float
}

pub mod ServerAuthoritativeWeaponSlot_t {
    pub const unClass: usize = 0x28; // uint16_t
    pub const unSlot: usize = 0x2A; // uint16_t
    pub const unItemDefIdx: usize = 0x2C; // uint16_t
}

pub mod TimedEvent {
    pub const m_TimeBetweenEvents: usize = 0x0; // float
    pub const m_fNextEvent: usize = 0x4; // float
}

pub mod VPhysicsCollisionAttribute_t {
    pub const m_nInteractsAs: usize = 0x8; // uint64_t
    pub const m_nInteractsWith: usize = 0x10; // uint64_t
    pub const m_nInteractsExclude: usize = 0x18; // uint64_t
    pub const m_nEntityId: usize = 0x20; // uint32_t
    pub const m_nOwnerId: usize = 0x24; // uint32_t
    pub const m_nHierarchyId: usize = 0x28; // uint16_t
    pub const m_nCollisionGroup: usize = 0x2A; // uint8_t
    pub const m_nCollisionFunctionMask: usize = 0x2B; // uint8_t
}

pub mod ViewAngleServerChange_t {
    pub const nType: usize = 0x30; // FixAngleSet_t
    pub const qAngle: usize = 0x34; // QAngle
    pub const nIndex: usize = 0x40; // uint32_t
}

pub mod WeaponPurchaseCount_t {
    pub const m_nItemDefIndex: usize = 0x30; // uint16_t
    pub const m_nCount: usize = 0x32; // uint16_t
}

pub mod WeaponPurchaseTracker_t {
    pub const m_weaponPurchases: usize = 0x8; // C_UtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
}

pub mod audioparams_t {
    pub const localSound: usize = 0x8; // Vector[8]
    pub const soundscapeIndex: usize = 0x68; // int32_t
    pub const localBits: usize = 0x6C; // uint8_t
    pub const soundscapeEntityListIndex: usize = 0x70; // int32_t
    pub const soundEventHash: usize = 0x74; // uint32_t
}

pub mod fogparams_t {
    pub const dirPrimary: usize = 0x8; // Vector
    pub const colorPrimary: usize = 0x14; // Color
    pub const colorSecondary: usize = 0x18; // Color
    pub const colorPrimaryLerpTo: usize = 0x1C; // Color
    pub const colorSecondaryLerpTo: usize = 0x20; // Color
    pub const start: usize = 0x24; // float
    pub const end: usize = 0x28; // float
    pub const farz: usize = 0x2C; // float
    pub const maxdensity: usize = 0x30; // float
    pub const exponent: usize = 0x34; // float
    pub const HDRColorScale: usize = 0x38; // float
    pub const skyboxFogFactor: usize = 0x3C; // float
    pub const skyboxFogFactorLerpTo: usize = 0x40; // float
    pub const startLerpTo: usize = 0x44; // float
    pub const endLerpTo: usize = 0x48; // float
    pub const maxdensityLerpTo: usize = 0x4C; // float
    pub const lerptime: usize = 0x50; // GameTime_t
    pub const duration: usize = 0x54; // float
    pub const blendtobackground: usize = 0x58; // float
    pub const scattering: usize = 0x5C; // float
    pub const locallightscale: usize = 0x60; // float
    pub const enable: usize = 0x64; // bool
    pub const blend: usize = 0x65; // bool
    pub const m_bNoReflectionFog: usize = 0x66; // bool
    pub const m_bPadding: usize = 0x67; // bool
}

pub mod shard_model_desc_t {
    pub const m_nModelID: usize = 0x8; // int32_t
    pub const m_hMaterial: usize = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_solid: usize = 0x18; // ShardSolid_t
    pub const m_ShatterPanelMode: usize = 0x19; // ShatterPanelMode
    pub const m_vecPanelSize: usize = 0x1C; // Vector2D
    pub const m_vecStressPositionA: usize = 0x24; // Vector2D
    pub const m_vecStressPositionB: usize = 0x2C; // Vector2D
    pub const m_vecPanelVertices: usize = 0x38; // C_NetworkUtlVectorBase<Vector2D>
    pub const m_flGlassHalfThickness: usize = 0x50; // float
    pub const m_bHasParent: usize = 0x54; // bool
    pub const m_bParentFrozen: usize = 0x55; // bool
    pub const m_SurfacePropStringToken: usize = 0x58; // CUtlStringToken
}

pub mod sky3dparams_t {
    pub const scale: usize = 0x8; // int16_t
    pub const origin: usize = 0xC; // Vector
    pub const bClip3DSkyBoxNearToWorldFar: usize = 0x18; // bool
    pub const flClip3DSkyBoxNearToWorldFarOffset: usize = 0x1C; // float
    pub const fog: usize = 0x20; // fogparams_t
    pub const m_nWorldGroupID: usize = 0x88; // WorldGroupId_t
}