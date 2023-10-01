#![allow(non_snake_case, non_upper_case_globals)]

pub mod ActiveModelConfig_t {
    pub const m_Handle: usize = 0x28; // ModelConfigHandle_t
    pub const m_Name: usize = 0x30; // CUtlSymbolLarge
    pub const m_AssociatedEntities: usize = 0x38; // C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > >
    pub const m_AssociatedEntityNames: usize = 0x50; // C_NetworkUtlVectorBase< CUtlSymbolLarge >
}

pub mod CAnimGraphNetworkedVariables {
    pub const m_PredNetBoolVariables: usize = 0x8; // C_NetworkUtlVectorBase< uint32 >
    pub const m_PredNetByteVariables: usize = 0x20; // C_NetworkUtlVectorBase< uint8 >
    pub const m_PredNetUInt16Variables: usize = 0x38; // C_NetworkUtlVectorBase< uint16 >
    pub const m_PredNetIntVariables: usize = 0x50; // C_NetworkUtlVectorBase< int32 >
    pub const m_PredNetUInt32Variables: usize = 0x68; // C_NetworkUtlVectorBase< uint32 >
    pub const m_PredNetUInt64Variables: usize = 0x80; // C_NetworkUtlVectorBase< uint64 >
    pub const m_PredNetFloatVariables: usize = 0x98; // C_NetworkUtlVectorBase< float32 >
    pub const m_PredNetVectorVariables: usize = 0xB0; // C_NetworkUtlVectorBase< Vector >
    pub const m_PredNetQuaternionVariables: usize = 0xC8; // C_NetworkUtlVectorBase< Quaternion >
    pub const m_OwnerOnlyPredNetBoolVariables: usize = 0xE0; // C_NetworkUtlVectorBase< uint32 >
    pub const m_OwnerOnlyPredNetByteVariables: usize = 0xF8; // C_NetworkUtlVectorBase< uint8 >
    pub const m_OwnerOnlyPredNetUInt16Variables: usize = 0x110; // C_NetworkUtlVectorBase< uint16 >
    pub const m_OwnerOnlyPredNetIntVariables: usize = 0x128; // C_NetworkUtlVectorBase< int32 >
    pub const m_OwnerOnlyPredNetUInt32Variables: usize = 0x140; // C_NetworkUtlVectorBase< uint32 >
    pub const m_OwnerOnlyPredNetUInt64Variables: usize = 0x158; // C_NetworkUtlVectorBase< uint64 >
    pub const m_OwnerOnlyPredNetFloatVariables: usize = 0x170; // C_NetworkUtlVectorBase< float32 >
    pub const m_OwnerOnlyPredNetVectorVariables: usize = 0x188; // C_NetworkUtlVectorBase< Vector >
    pub const m_OwnerOnlyPredNetQuaternionVariables: usize = 0x1A0; // C_NetworkUtlVectorBase< Quaternion >
    pub const m_nBoolVariablesCount: usize = 0x1B8; // int32
    pub const m_nOwnerOnlyBoolVariablesCount: usize = 0x1BC; // int32
    pub const m_nRandomSeedOffset: usize = 0x1C0; // int32
    pub const m_flLastTeleportTime: usize = 0x1C4; // float32
}

pub mod CAttributeList {
    pub const m_Attributes: usize = 0x8; // C_UtlVectorEmbeddedNetworkVar< CEconItemAttribute >
    pub const m_pManager: usize = 0x58; // CAttributeManager*
}

pub mod CAttributeManager {
    pub const m_Providers: usize = 0x8; // CUtlVector< CHandle< C_BaseEntity > >
    pub const m_iReapplyProvisionParity: usize = 0x20; // int32
    pub const m_hOuter: usize = 0x24; // CHandle< C_BaseEntity >
    pub const m_bPreventLoopback: usize = 0x28; // bool
    pub const m_ProviderType: usize = 0x2C; // attributeprovidertypes_t
    pub const m_CachedResults: usize = 0x30; // CUtlVector< CAttributeManager::cached_attribute_float_t >
}

pub mod CAttributeManager_cached_attribute_float_t {
    pub const flIn: usize = 0x0; // float32
    pub const iAttribHook: usize = 0x8; // CUtlSymbolLarge
    pub const flOut: usize = 0x10; // float32
}

pub mod CBaseAnimGraph {
    pub const m_bInitiallyPopulateInterpHistory: usize = 0xCC0; // bool
    pub const m_bShouldAnimateDuringGameplayPause: usize = 0xCC1; // bool
    pub const m_bSuppressAnimEventSounds: usize = 0xCC3; // bool
    pub const m_bAnimGraphUpdateEnabled: usize = 0xCD0; // bool
    pub const m_flMaxSlopeDistance: usize = 0xCD4; // float32
    pub const m_vLastSlopeCheckPos: usize = 0xCD8; // Vector
    pub const m_vecForce: usize = 0xCE8; // Vector
    pub const m_nForceBone: usize = 0xCF4; // int32
    pub const m_pClientsideRagdoll: usize = 0xCF8; // CBaseAnimGraph*
    pub const m_bBuiltRagdoll: usize = 0xD00; // bool
    pub const m_pRagdollPose: usize = 0xD18; // PhysicsRagdollPose_t*
    pub const m_bClientRagdoll: usize = 0xD20; // bool
    pub const m_bHasAnimatedMaterialAttributes: usize = 0xD30; // bool
}

pub mod CBaseAnimGraphController {
    pub const m_baseLayer: usize = 0x18; // CNetworkedSequenceOperation
    pub const m_animGraphNetworkedVars: usize = 0x40; // CAnimGraphNetworkedVariables
    pub const m_bSequenceFinished: usize = 0x1320; // bool
    pub const m_flLastEventCycle: usize = 0x1324; // float32
    pub const m_flLastEventAnimTime: usize = 0x1328; // float32
    pub const m_flPlaybackRate: usize = 0x132C; // CNetworkedQuantizedFloat
    pub const m_flPrevAnimTime: usize = 0x1334; // float32
    pub const m_bClientSideAnimation: usize = 0x1338; // bool
    pub const m_bNetworkedAnimationInputsChanged: usize = 0x1339; // bool
    pub const m_nPrevNewSequenceParity: usize = 0x133A; // uint8
    pub const m_nPrevResetEventsParity: usize = 0x133B; // uint8
    pub const m_nNewSequenceParity: usize = 0x133C; // int32
    pub const m_nResetEventsParity: usize = 0x1340; // int32
    pub const m_nAnimLoopMode: usize = 0x1344; // AnimLoopMode_t
    pub const m_hAnimationUpdate: usize = 0x13E4; // AnimationUpdateListHandle_t
    pub const m_hLastAnimEventSequence: usize = 0x13E8; // HSequence
}

pub mod CBasePlayerController {
    pub const m_nFinalPredictedTick: usize = 0x548; // int32
    pub const m_CommandContext: usize = 0x550; // C_CommandContext
    pub const m_nInButtonsWhichAreToggles: usize = 0x5D0; // uint64
    pub const m_nTickBase: usize = 0x5D8; // uint32
    pub const m_hPawn: usize = 0x5DC; // CHandle< C_BasePlayerPawn >
    pub const m_hPredictedPawn: usize = 0x5E0; // CHandle< C_BasePlayerPawn >
    pub const m_nSplitScreenSlot: usize = 0x5E4; // CSplitScreenSlot
    pub const m_hSplitOwner: usize = 0x5E8; // CHandle< CBasePlayerController >
    pub const m_hSplitScreenPlayers: usize = 0x5F0; // CUtlVector< CHandle< CBasePlayerController > >
    pub const m_bIsHLTV: usize = 0x608; // bool
    pub const m_iConnected: usize = 0x60C; // PlayerConnectedState
    pub const m_iszPlayerName: usize = 0x610; // char[128]
    pub const m_steamID: usize = 0x698; // uint64
    pub const m_bIsLocalPlayerController: usize = 0x6A0; // bool
    pub const m_iDesiredFOV: usize = 0x6A4; // uint32
}

pub mod CBasePlayerVData {
    pub const m_sModelName: usize = 0x28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    pub const m_flHeadDamageMultiplier: usize = 0x108; // CSkillFloat
    pub const m_flChestDamageMultiplier: usize = 0x118; // CSkillFloat
    pub const m_flStomachDamageMultiplier: usize = 0x128; // CSkillFloat
    pub const m_flArmDamageMultiplier: usize = 0x138; // CSkillFloat
    pub const m_flLegDamageMultiplier: usize = 0x148; // CSkillFloat
    pub const m_flHoldBreathTime: usize = 0x158; // float32
    pub const m_flDrowningDamageInterval: usize = 0x15C; // float32
    pub const m_nDrowningDamageInitial: usize = 0x160; // int32
    pub const m_nDrowningDamageMax: usize = 0x164; // int32
    pub const m_nWaterSpeed: usize = 0x168; // int32
    pub const m_flUseRange: usize = 0x16C; // float32
    pub const m_flUseAngleTolerance: usize = 0x170; // float32
    pub const m_flCrouchTime: usize = 0x174; // float32
}

pub mod CBasePlayerWeaponVData {
    pub const m_szWorldModel: usize = 0x28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    pub const m_bBuiltRightHanded: usize = 0x108; // bool
    pub const m_bAllowFlipping: usize = 0x109; // bool
    pub const m_bIsFullAuto: usize = 0x10A; // bool
    pub const m_nNumBullets: usize = 0x10C; // int32
    pub const m_sMuzzleAttachment: usize = 0x110; // CUtlString
    pub const m_szMuzzleFlashParticle: usize = 0x118; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    pub const m_iFlags: usize = 0x1F8; // ItemFlagTypes_t
    pub const m_nPrimaryAmmoType: usize = 0x1F9; // AmmoIndex_t
    pub const m_nSecondaryAmmoType: usize = 0x1FA; // AmmoIndex_t
    pub const m_iMaxClip1: usize = 0x1FC; // int32
    pub const m_iMaxClip2: usize = 0x200; // int32
    pub const m_iDefaultClip1: usize = 0x204; // int32
    pub const m_iDefaultClip2: usize = 0x208; // int32
    pub const m_iWeight: usize = 0x20C; // int32
    pub const m_bAutoSwitchTo: usize = 0x210; // bool
    pub const m_bAutoSwitchFrom: usize = 0x211; // bool
    pub const m_iRumbleEffect: usize = 0x214; // RumbleEffect_t
    pub const m_aShootSounds: usize = 0x218; // CUtlMap< WeaponSound_t, CSoundEventName >
    pub const m_iSlot: usize = 0x238; // int32
    pub const m_iPosition: usize = 0x23C; // int32
}

pub mod CBaseProp {
    pub const m_bModelOverrodeBlockLOS: usize = 0xE80; // bool
    pub const m_iShapeType: usize = 0xE84; // int32
    pub const m_bConformToCollisionBounds: usize = 0xE88; // bool
    pub const m_mPreferredCatchTransform: usize = 0xE8C; // matrix3x4_t
}

pub mod CBodyComponent {
    pub const m_pSceneNode: usize = 0x8; // CGameSceneNode*
    pub const __m_pChainEntity: usize = 0x20; // CNetworkVarChainer
}

pub mod CBodyComponentBaseAnimGraph {
    pub const m_animationController: usize = 0x470; // CBaseAnimGraphController
    pub const __m_pChainEntity: usize = 0x18B0; // CNetworkVarChainer
}

pub mod CBodyComponentBaseModelEntity {
    pub const __m_pChainEntity: usize = 0x470; // CNetworkVarChainer
}

pub mod CBodyComponentPoint {
    pub const m_sceneNode: usize = 0x50; // CGameSceneNode
    pub const __m_pChainEntity: usize = 0x1A0; // CNetworkVarChainer
}

pub mod CBodyComponentSkeletonInstance {
    pub const m_skeletonInstance: usize = 0x50; // CSkeletonInstance
    pub const __m_pChainEntity: usize = 0x440; // CNetworkVarChainer
}

pub mod CBombTarget {
    pub const m_bBombPlantedHere: usize = 0xCC8; // bool
}

pub mod CBuoyancyHelper {
    pub const m_flFluidDensity: usize = 0x18; // float32
}

pub mod CCSGameModeRules {
    pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
}

pub mod CCSGameModeRules_Deathmatch {
    pub const m_bFirstThink: usize = 0x30; // bool
    pub const m_bFirstThinkAfterConnected: usize = 0x31; // bool
    pub const m_flDMBonusStartTime: usize = 0x34; // GameTime_t
    pub const m_flDMBonusTimeLength: usize = 0x38; // float32
    pub const m_nDMBonusWeaponLoadoutSlot: usize = 0x3C; // int16
}

pub mod CCSObserver_ObserverServices {
    pub const m_hLastObserverTarget: usize = 0x58; // CEntityHandle
    pub const m_vecObserverInterpolateOffset: usize = 0x5C; // Vector
    pub const m_vecObserverInterpStartPos: usize = 0x68; // Vector
    pub const m_flObsInterp_PathLength: usize = 0x74; // float32
    pub const m_qObsInterp_OrientationStart: usize = 0x80; // Quaternion
    pub const m_qObsInterp_OrientationTravelDir: usize = 0x90; // Quaternion
    pub const m_obsInterpState: usize = 0xA0; // ObserverInterpState_t
    pub const m_bObserverInterpolationNeedsDeferredSetup: usize = 0xA4; // bool
}

pub mod CCSPlayerBase_CameraServices {
    pub const m_iFOV: usize = 0x210; // uint32
    pub const m_iFOVStart: usize = 0x214; // uint32
    pub const m_flFOVTime: usize = 0x218; // GameTime_t
    pub const m_flFOVRate: usize = 0x21C; // float32
    pub const m_hZoomOwner: usize = 0x220; // CHandle< C_BaseEntity >
    pub const m_flLastShotFOV: usize = 0x224; // float32
}

pub mod CCSPlayerController {
    pub const m_pInGameMoneyServices: usize = 0x6D0; // CCSPlayerController_InGameMoneyServices*
    pub const m_pInventoryServices: usize = 0x6D8; // CCSPlayerController_InventoryServices*
    pub const m_pActionTrackingServices: usize = 0x6E0; // CCSPlayerController_ActionTrackingServices*
    pub const m_pDamageServices: usize = 0x6E8; // CCSPlayerController_DamageServices*
    pub const m_iPing: usize = 0x6F0; // uint32
    pub const m_bHasCommunicationAbuseMute: usize = 0x6F4; // bool
    pub const m_szCrosshairCodes: usize = 0x6F8; // CUtlSymbolLarge
    pub const m_iPendingTeamNum: usize = 0x700; // uint8
    pub const m_flForceTeamTime: usize = 0x704; // GameTime_t
    pub const m_iCompTeammateColor: usize = 0x708; // int32
    pub const m_bEverPlayedOnTeam: usize = 0x70C; // bool
    pub const m_flPreviousForceJoinTeamTime: usize = 0x710; // GameTime_t
    pub const m_szClan: usize = 0x718; // CUtlSymbolLarge
    pub const m_sSanitizedPlayerName: usize = 0x720; // CUtlString
    pub const m_iCoachingTeam: usize = 0x728; // int32
    pub const m_nPlayerDominated: usize = 0x730; // uint64
    pub const m_nPlayerDominatingMe: usize = 0x738; // uint64
    pub const m_iCompetitiveRanking: usize = 0x740; // int32
    pub const m_iCompetitiveWins: usize = 0x744; // int32
    pub const m_iCompetitiveRankType: usize = 0x748; // int8
    pub const m_iCompetitiveRankingPredicted_Win: usize = 0x74C; // int32
    pub const m_iCompetitiveRankingPredicted_Loss: usize = 0x750; // int32
    pub const m_iCompetitiveRankingPredicted_Tie: usize = 0x754; // int32
    pub const m_nEndMatchNextMapVote: usize = 0x758; // int32
    pub const m_unActiveQuestId: usize = 0x75C; // uint16
    pub const m_nQuestProgressReason: usize = 0x760; // QuestProgress::Reason
    pub const m_unPlayerTvControlFlags: usize = 0x764; // uint32
    pub const m_iDraftIndex: usize = 0x7D0; // int32
    pub const m_msQueuedModeDisconnectionTimestamp: usize = 0x7D4; // uint32
    pub const m_uiAbandonRecordedReason: usize = 0x7D8; // uint32
    pub const m_bEverFullyConnected: usize = 0x7DC; // bool
    pub const m_bAbandonAllowsSurrender: usize = 0x7DD; // bool
    pub const m_bAbandonOffersInstantSurrender: usize = 0x7DE; // bool
    pub const m_bDisconnection1MinWarningPrinted: usize = 0x7DF; // bool
    pub const m_bScoreReported: usize = 0x7E0; // bool
    pub const m_nDisconnectionTick: usize = 0x7E4; // int32
    pub const m_bControllingBot: usize = 0x7F0; // bool
    pub const m_bHasControlledBotThisRound: usize = 0x7F1; // bool
    pub const m_bHasBeenControlledByPlayerThisRound: usize = 0x7F2; // bool
    pub const m_nBotsControlledThisRound: usize = 0x7F4; // int32
    pub const m_bCanControlObservedBot: usize = 0x7F8; // bool
    pub const m_hPlayerPawn: usize = 0x7FC; // CHandle< C_CSPlayerPawn >
    pub const m_hObserverPawn: usize = 0x800; // CHandle< C_CSObserverPawn >
    pub const m_bPawnIsAlive: usize = 0x804; // bool
    pub const m_iPawnHealth: usize = 0x808; // uint32
    pub const m_iPawnArmor: usize = 0x80C; // int32
    pub const m_bPawnHasDefuser: usize = 0x810; // bool
    pub const m_bPawnHasHelmet: usize = 0x811; // bool
    pub const m_nPawnCharacterDefIndex: usize = 0x812; // uint16
    pub const m_iPawnLifetimeStart: usize = 0x814; // int32
    pub const m_iPawnLifetimeEnd: usize = 0x818; // int32
    pub const m_iPawnBotDifficulty: usize = 0x81C; // int32
    pub const m_hOriginalControllerOfCurrentPawn: usize = 0x820; // CHandle< CCSPlayerController >
    pub const m_iScore: usize = 0x824; // int32
    pub const m_vecKills: usize = 0x828; // C_NetworkUtlVectorBase< EKillTypes_t >
    pub const m_iMVPs: usize = 0x840; // int32
    pub const m_bIsPlayerNameDirty: usize = 0x844; // bool
}

pub mod CCSPlayerController_ActionTrackingServices {
    pub const m_perRoundStats: usize = 0x40; // C_UtlVectorEmbeddedNetworkVar< CSPerRoundStats_t >
    pub const m_matchStats: usize = 0x90; // CSMatchStats_t
    pub const m_iNumRoundKills: usize = 0x108; // int32
    pub const m_iNumRoundKillsHeadshots: usize = 0x10C; // int32
}

pub mod CCSPlayerController_DamageServices {
    pub const m_nSendUpdate: usize = 0x40; // int32
    pub const m_DamageList: usize = 0x48; // C_UtlVectorEmbeddedNetworkVar< CDamageRecord >
}

pub mod CCSPlayerController_InGameMoneyServices {
    pub const m_iAccount: usize = 0x40; // int32
    pub const m_iStartAccount: usize = 0x44; // int32
    pub const m_iTotalCashSpent: usize = 0x48; // int32
    pub const m_iCashSpentThisRound: usize = 0x4C; // int32
    pub const m_nPreviousAccount: usize = 0x50; // int32
}

pub mod CCSPlayerController_InventoryServices {
    pub const m_unMusicID: usize = 0x40; // uint16
    pub const m_rank: usize = 0x44; // MedalRank_t[6]
    pub const m_nPersonaDataPublicLevel: usize = 0x5C; // int32
    pub const m_nPersonaDataPublicCommendsLeader: usize = 0x60; // int32
    pub const m_nPersonaDataPublicCommendsTeacher: usize = 0x64; // int32
    pub const m_nPersonaDataPublicCommendsFriendly: usize = 0x68; // int32
    pub const m_vecTerroristLoadoutCache: usize = 0x70; // C_UtlVectorEmbeddedNetworkVar< C_EconItemView >
    pub const m_vecCounterTerroristLoadoutCache: usize = 0xC0; // C_UtlVectorEmbeddedNetworkVar< C_EconItemView >
}

pub mod CCSPlayer_ActionTrackingServices {
    pub const m_hLastWeaponBeforeC4AutoSwitch: usize = 0x40; // CHandle< C_BasePlayerWeapon >
    pub const m_bIsRescuing: usize = 0x44; // bool
    pub const m_weaponPurchasesThisMatch: usize = 0x48; // WeaponPurchaseTracker_t
    pub const m_weaponPurchasesThisRound: usize = 0xA0; // WeaponPurchaseTracker_t
}

pub mod CCSPlayer_BulletServices {
    pub const m_totalHitsOnServer: usize = 0x40; // int32
}

pub mod CCSPlayer_BuyServices {
    pub const m_vecSellbackPurchaseEntries: usize = 0x40; // C_UtlVectorEmbeddedNetworkVar< SellbackPurchaseEntry_t >
}

pub mod CCSPlayer_CameraServices {
    pub const m_flDeathCamTilt: usize = 0x228; // float32
}

pub mod CCSPlayer_HostageServices {
    pub const m_hCarriedHostage: usize = 0x40; // CHandle< C_BaseEntity >
    pub const m_hCarriedHostageProp: usize = 0x44; // CHandle< C_BaseEntity >
}

pub mod CCSPlayer_ItemServices {
    pub const m_bHasDefuser: usize = 0x40; // bool
    pub const m_bHasHelmet: usize = 0x41; // bool
    pub const m_bHasHeavyArmor: usize = 0x42; // bool
}

pub mod CCSPlayer_MovementServices {
    pub const m_flMaxFallVelocity: usize = 0x210; // float32
    pub const m_vecLadderNormal: usize = 0x214; // Vector
    pub const m_nLadderSurfacePropIndex: usize = 0x220; // int32
    pub const m_flDuckAmount: usize = 0x224; // float32
    pub const m_flDuckSpeed: usize = 0x228; // float32
    pub const m_bDuckOverride: usize = 0x22C; // bool
    pub const m_bDesiresDuck: usize = 0x22D; // bool
    pub const m_flDuckOffset: usize = 0x230; // float32
    pub const m_nDuckTimeMsecs: usize = 0x234; // uint32
    pub const m_nDuckJumpTimeMsecs: usize = 0x238; // uint32
    pub const m_nJumpTimeMsecs: usize = 0x23C; // uint32
    pub const m_flLastDuckTime: usize = 0x240; // float32
    pub const m_vecLastPositionAtFullCrouchSpeed: usize = 0x250; // Vector2D
    pub const m_duckUntilOnGround: usize = 0x258; // bool
    pub const m_bHasWalkMovedSinceLastJump: usize = 0x259; // bool
    pub const m_bInStuckTest: usize = 0x25A; // bool
    pub const m_flStuckCheckTime: usize = 0x268; // float32[64][2]
    pub const m_nTraceCount: usize = 0x468; // int32
    pub const m_StuckLast: usize = 0x46C; // int32
    pub const m_bSpeedCropped: usize = 0x470; // bool
    pub const m_nOldWaterLevel: usize = 0x474; // int32
    pub const m_flWaterEntryTime: usize = 0x478; // float32
    pub const m_vecForward: usize = 0x47C; // Vector
    pub const m_vecLeft: usize = 0x488; // Vector
    pub const m_vecUp: usize = 0x494; // Vector
    pub const m_vecPreviouslyPredictedOrigin: usize = 0x4A0; // Vector
    pub const m_bOldJumpPressed: usize = 0x4AC; // bool
    pub const m_flJumpPressedTime: usize = 0x4B0; // float32
    pub const m_flJumpUntil: usize = 0x4B4; // float32
    pub const m_flJumpVel: usize = 0x4B8; // float32
    pub const m_fStashGrenadeParameterWhen: usize = 0x4BC; // GameTime_t
    pub const m_nButtonDownMaskPrev: usize = 0x4C0; // uint64
    pub const m_flOffsetTickCompleteTime: usize = 0x4C8; // float32
    pub const m_flOffsetTickStashedSpeed: usize = 0x4CC; // float32
    pub const m_flStamina: usize = 0x4D0; // float32
    pub const m_bUpdatePredictedOriginAfterDataUpdate: usize = 0x4D4; // bool
}

pub mod CCSPlayer_PingServices {
    pub const m_hPlayerPing: usize = 0x40; // CHandle< C_BaseEntity >
}

pub mod CCSPlayer_ViewModelServices {
    pub const m_hViewModel: usize = 0x40; // CHandle< C_BaseViewModel >[3]
}

pub mod CCSPlayer_WaterServices {
    pub const m_flWaterJumpTime: usize = 0x40; // float32
    pub const m_vecWaterJumpVel: usize = 0x44; // Vector
    pub const m_flSwimSoundTime: usize = 0x50; // float32
}

pub mod CCSPlayer_WeaponServices {
    pub const m_flNextAttack: usize = 0xA8; // GameTime_t
    pub const m_bIsLookingAtWeapon: usize = 0xAC; // bool
    pub const m_bIsHoldingLookAtWeapon: usize = 0xAD; // bool
}

pub mod CCSWeaponBaseVData {
    pub const m_WeaponType: usize = 0x240; // CSWeaponType
    pub const m_WeaponCategory: usize = 0x244; // CSWeaponCategory
    pub const m_szViewModel: usize = 0x248; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    pub const m_szPlayerModel: usize = 0x328; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    pub const m_szWorldDroppedModel: usize = 0x408; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    pub const m_szAimsightLensMaskModel: usize = 0x4E8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    pub const m_szMagazineModel: usize = 0x5C8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    pub const m_szHeatEffect: usize = 0x6A8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    pub const m_szEjectBrassEffect: usize = 0x788; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    pub const m_szMuzzleFlashParticleAlt: usize = 0x868; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    pub const m_szMuzzleFlashThirdPersonParticle: usize = 0x948; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    pub const m_szMuzzleFlashThirdPersonParticleAlt: usize = 0xA28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    pub const m_szTracerParticle: usize = 0xB08; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    pub const m_GearSlot: usize = 0xBE8; // gear_slot_t
    pub const m_GearSlotPosition: usize = 0xBEC; // int32
    pub const m_DefaultLoadoutSlot: usize = 0xBF0; // loadout_slot_t
    pub const m_sWrongTeamMsg: usize = 0xBF8; // CUtlString
    pub const m_nPrice: usize = 0xC00; // int32
    pub const m_nKillAward: usize = 0xC04; // int32
    pub const m_nPrimaryReserveAmmoMax: usize = 0xC08; // int32
    pub const m_nSecondaryReserveAmmoMax: usize = 0xC0C; // int32
    pub const m_bMeleeWeapon: usize = 0xC10; // bool
    pub const m_bHasBurstMode: usize = 0xC11; // bool
    pub const m_bIsRevolver: usize = 0xC12; // bool
    pub const m_bCannotShootUnderwater: usize = 0xC13; // bool
    pub const m_szName: usize = 0xC18; // CUtlString
    pub const m_szAnimExtension: usize = 0xC20; // CUtlString
    pub const m_eSilencerType: usize = 0xC28; // CSWeaponSilencerType
    pub const m_nCrosshairMinDistance: usize = 0xC2C; // int32
    pub const m_nCrosshairDeltaDistance: usize = 0xC30; // int32
    pub const m_flCycleTime: usize = 0xC34; // CFiringModeFloat
    pub const m_flMaxSpeed: usize = 0xC3C; // CFiringModeFloat
    pub const m_flSpread: usize = 0xC44; // CFiringModeFloat
    pub const m_flInaccuracyCrouch: usize = 0xC4C; // CFiringModeFloat
    pub const m_flInaccuracyStand: usize = 0xC54; // CFiringModeFloat
    pub const m_flInaccuracyJump: usize = 0xC5C; // CFiringModeFloat
    pub const m_flInaccuracyLand: usize = 0xC64; // CFiringModeFloat
    pub const m_flInaccuracyLadder: usize = 0xC6C; // CFiringModeFloat
    pub const m_flInaccuracyFire: usize = 0xC74; // CFiringModeFloat
    pub const m_flInaccuracyMove: usize = 0xC7C; // CFiringModeFloat
    pub const m_flRecoilAngle: usize = 0xC84; // CFiringModeFloat
    pub const m_flRecoilAngleVariance: usize = 0xC8C; // CFiringModeFloat
    pub const m_flRecoilMagnitude: usize = 0xC94; // CFiringModeFloat
    pub const m_flRecoilMagnitudeVariance: usize = 0xC9C; // CFiringModeFloat
    pub const m_nTracerFrequency: usize = 0xCA4; // CFiringModeInt
    pub const m_flInaccuracyJumpInitial: usize = 0xCAC; // float32
    pub const m_flInaccuracyJumpApex: usize = 0xCB0; // float32
    pub const m_flInaccuracyReload: usize = 0xCB4; // float32
    pub const m_nRecoilSeed: usize = 0xCB8; // int32
    pub const m_nSpreadSeed: usize = 0xCBC; // int32
    pub const m_flTimeToIdleAfterFire: usize = 0xCC0; // float32
    pub const m_flIdleInterval: usize = 0xCC4; // float32
    pub const m_flAttackMovespeedFactor: usize = 0xCC8; // float32
    pub const m_flHeatPerShot: usize = 0xCCC; // float32
    pub const m_flInaccuracyPitchShift: usize = 0xCD0; // float32
    pub const m_flInaccuracyAltSoundThreshold: usize = 0xCD4; // float32
    pub const m_flBotAudibleRange: usize = 0xCD8; // float32
    pub const m_szUseRadioSubtitle: usize = 0xCE0; // CUtlString
    pub const m_bUnzoomsAfterShot: usize = 0xCE8; // bool
    pub const m_bHideViewModelWhenZoomed: usize = 0xCE9; // bool
    pub const m_nZoomLevels: usize = 0xCEC; // int32
    pub const m_nZoomFOV1: usize = 0xCF0; // int32
    pub const m_nZoomFOV2: usize = 0xCF4; // int32
    pub const m_flZoomTime0: usize = 0xCF8; // float32
    pub const m_flZoomTime1: usize = 0xCFC; // float32
    pub const m_flZoomTime2: usize = 0xD00; // float32
    pub const m_flIronSightPullUpSpeed: usize = 0xD04; // float32
    pub const m_flIronSightPutDownSpeed: usize = 0xD08; // float32
    pub const m_flIronSightFOV: usize = 0xD0C; // float32
    pub const m_flIronSightPivotForward: usize = 0xD10; // float32
    pub const m_flIronSightLooseness: usize = 0xD14; // float32
    pub const m_angPivotAngle: usize = 0xD18; // QAngle
    pub const m_vecIronSightEyePos: usize = 0xD24; // Vector
    pub const m_nDamage: usize = 0xD30; // int32
    pub const m_flHeadshotMultiplier: usize = 0xD34; // float32
    pub const m_flArmorRatio: usize = 0xD38; // float32
    pub const m_flPenetration: usize = 0xD3C; // float32
    pub const m_flRange: usize = 0xD40; // float32
    pub const m_flRangeModifier: usize = 0xD44; // float32
    pub const m_flFlinchVelocityModifierLarge: usize = 0xD48; // float32
    pub const m_flFlinchVelocityModifierSmall: usize = 0xD4C; // float32
    pub const m_flRecoveryTimeCrouch: usize = 0xD50; // float32
    pub const m_flRecoveryTimeStand: usize = 0xD54; // float32
    pub const m_flRecoveryTimeCrouchFinal: usize = 0xD58; // float32
    pub const m_flRecoveryTimeStandFinal: usize = 0xD5C; // float32
    pub const m_nRecoveryTransitionStartBullet: usize = 0xD60; // int32
    pub const m_nRecoveryTransitionEndBullet: usize = 0xD64; // int32
    pub const m_flThrowVelocity: usize = 0xD68; // float32
    pub const m_vSmokeColor: usize = 0xD6C; // Vector
    pub const m_szAnimClass: usize = 0xD78; // CUtlString
}

pub mod CClientAlphaProperty {
    pub const m_nRenderFX: usize = 0x10; // uint8
    pub const m_nRenderMode: usize = 0x11; // uint8
    pub const m_bAlphaOverride: usize = 0x0; // bitfield:1
    pub const m_bShadowAlphaOverride: usize = 0x0; // bitfield:1
    pub const m_nReserved: usize = 0x0; // bitfield:6
    pub const m_nAlpha: usize = 0x13; // uint8
    pub const m_nDesyncOffset: usize = 0x14; // uint16
    pub const m_nReserved2: usize = 0x16; // uint16
    pub const m_nDistFadeStart: usize = 0x18; // uint16
    pub const m_nDistFadeEnd: usize = 0x1A; // uint16
    pub const m_flFadeScale: usize = 0x1C; // float32
    pub const m_flRenderFxStartTime: usize = 0x20; // GameTime_t
    pub const m_flRenderFxDuration: usize = 0x24; // float32
}

pub mod CCollisionProperty {
    pub const m_collisionAttribute: usize = 0x10; // VPhysicsCollisionAttribute_t
    pub const m_vecMins: usize = 0x40; // Vector
    pub const m_vecMaxs: usize = 0x4C; // Vector
    pub const m_usSolidFlags: usize = 0x5A; // uint8
    pub const m_nSolidType: usize = 0x5B; // SolidType_t
    pub const m_triggerBloat: usize = 0x5C; // uint8
    pub const m_nSurroundType: usize = 0x5D; // SurroundingBoundsType_t
    pub const m_CollisionGroup: usize = 0x5E; // uint8
    pub const m_nEnablePhysics: usize = 0x5F; // uint8
    pub const m_flBoundingRadius: usize = 0x60; // float32
    pub const m_vecSpecifiedSurroundingMins: usize = 0x64; // Vector
    pub const m_vecSpecifiedSurroundingMaxs: usize = 0x70; // Vector
    pub const m_vecSurroundingMaxs: usize = 0x7C; // Vector
    pub const m_vecSurroundingMins: usize = 0x88; // Vector
    pub const m_vCapsuleCenter1: usize = 0x94; // Vector
    pub const m_vCapsuleCenter2: usize = 0xA0; // Vector
    pub const m_flCapsuleRadius: usize = 0xAC; // float32
}

pub mod CComicBook {
    pub const m_CoverImage: usize = 0x8; // CPanoramaImageName
    pub const m_XmlFile: usize = 0x18; // CUtlString
}

pub mod CCompositeMaterialEditorDoc {
    pub const m_nVersion: usize = 0x8; // int32
    pub const m_Points: usize = 0x10; // CUtlVector< CompositeMaterialEditorPoint_t >
    pub const m_KVthumbnail: usize = 0x28; // KeyValues3
}

pub mod CDamageRecord {
    pub const m_PlayerDamager: usize = 0x28; // CHandle< C_CSPlayerPawnBase >
    pub const m_PlayerRecipient: usize = 0x2C; // CHandle< C_CSPlayerPawnBase >
    pub const m_hPlayerControllerDamager: usize = 0x30; // CHandle< CCSPlayerController >
    pub const m_hPlayerControllerRecipient: usize = 0x34; // CHandle< CCSPlayerController >
    pub const m_szPlayerDamagerName: usize = 0x38; // CUtlString
    pub const m_szPlayerRecipientName: usize = 0x40; // CUtlString
    pub const m_DamagerXuid: usize = 0x48; // uint64
    pub const m_RecipientXuid: usize = 0x50; // uint64
    pub const m_iDamage: usize = 0x58; // int32
    pub const m_iActualHealthRemoved: usize = 0x5C; // int32
    pub const m_iNumHits: usize = 0x60; // int32
    pub const m_iLastBulletUpdate: usize = 0x64; // int32
    pub const m_bIsOtherEnemy: usize = 0x68; // bool
    pub const m_killType: usize = 0x69; // EKillTypes_t
}

pub mod CDecalInfo {
    pub const m_flAnimationScale: usize = 0x0; // float32
    pub const m_flAnimationLifeSpan: usize = 0x4; // float32
    pub const m_flPlaceTime: usize = 0x8; // float32
    pub const m_flFadeStartTime: usize = 0xC; // float32
    pub const m_flFadeDuration: usize = 0x10; // float32
    pub const m_nVBSlot: usize = 0x14; // int32
    pub const m_nBoneIndex: usize = 0x18; // int32
    pub const m_pNext: usize = 0x28; // CDecalInfo*
    pub const m_pPrev: usize = 0x30; // CDecalInfo*
    pub const m_nDecalMaterialIndex: usize = 0x90; // int32
}

pub mod CEconItemAttribute {
    pub const m_iAttributeDefinitionIndex: usize = 0x30; // uint16
    pub const m_flValue: usize = 0x34; // float32
    pub const m_flInitialValue: usize = 0x38; // float32
    pub const m_nRefundableCurrency: usize = 0x3C; // int32
    pub const m_bSetBonus: usize = 0x40; // bool
}

pub mod CEffectData {
    pub const m_vOrigin: usize = 0x8; // Vector
    pub const m_vStart: usize = 0x14; // Vector
    pub const m_vNormal: usize = 0x20; // Vector
    pub const m_vAngles: usize = 0x2C; // QAngle
    pub const m_hEntity: usize = 0x38; // CEntityHandle
    pub const m_hOtherEntity: usize = 0x3C; // CEntityHandle
    pub const m_flScale: usize = 0x40; // float32
    pub const m_flMagnitude: usize = 0x44; // float32
    pub const m_flRadius: usize = 0x48; // float32
    pub const m_nSurfaceProp: usize = 0x4C; // CUtlStringToken
    pub const m_nEffectIndex: usize = 0x50; // CWeakHandle< InfoForResourceTypeIParticleSystemDefinition >
    pub const m_nDamageType: usize = 0x58; // uint32
    pub const m_nPenetrate: usize = 0x5C; // uint8
    pub const m_nMaterial: usize = 0x5E; // uint16
    pub const m_nHitBox: usize = 0x60; // uint16
    pub const m_nColor: usize = 0x62; // uint8
    pub const m_fFlags: usize = 0x63; // uint8
    pub const m_nAttachmentIndex: usize = 0x64; // AttachmentHandle_t
    pub const m_nAttachmentName: usize = 0x68; // CUtlStringToken
    pub const m_iEffectName: usize = 0x6C; // uint16
    pub const m_nExplosionType: usize = 0x6E; // uint8
}

pub mod CEntityIdentity {
    pub const m_nameStringableIndex: usize = 0x14; // int32
    pub const m_name: usize = 0x18; // CUtlSymbolLarge
    pub const m_designerName: usize = 0x20; // CUtlSymbolLarge
    pub const m_flags: usize = 0x30; // uint32
    pub const m_worldGroupId: usize = 0x38; // WorldGroupId_t
    pub const m_fDataObjectTypes: usize = 0x3C; // uint32
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
}

pub mod CFireOverlay {
    pub const m_pOwner: usize = 0xD0; // C_FireSmoke*
    pub const m_vBaseColors: usize = 0xD8; // Vector[4]
    pub const m_flScale: usize = 0x108; // float32
    pub const m_nGUID: usize = 0x10C; // int32
}

pub mod CFlashlightEffect {
    pub const m_bIsOn: usize = 0x10; // bool
    pub const m_bMuzzleFlashEnabled: usize = 0x20; // bool
    pub const m_flMuzzleFlashBrightness: usize = 0x24; // float32
    pub const m_quatMuzzleFlashOrientation: usize = 0x30; // Quaternion
    pub const m_vecMuzzleFlashOrigin: usize = 0x40; // Vector
    pub const m_flFov: usize = 0x4C; // float32
    pub const m_flFarZ: usize = 0x50; // float32
    pub const m_flLinearAtten: usize = 0x54; // float32
    pub const m_bCastsShadows: usize = 0x58; // bool
    pub const m_flCurrentPullBackDist: usize = 0x5C; // float32
    pub const m_FlashlightTexture: usize = 0x60; // CStrongHandle< InfoForResourceTypeCTextureBase >
    pub const m_MuzzleFlashTexture: usize = 0x68; // CStrongHandle< InfoForResourceTypeCTextureBase >
    pub const m_textureName: usize = 0x70; // char[64]
}

pub mod CFuncWater {
    pub const m_BuoyancyHelper: usize = 0xCC0; // CBuoyancyHelper
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
    pub const m_flScale: usize = 0xC4; // float32
    pub const m_vecAbsOrigin: usize = 0xC8; // Vector
    pub const m_angAbsRotation: usize = 0xD4; // QAngle
    pub const m_flAbsScale: usize = 0xE0; // float32
    pub const m_nParentAttachmentOrBone: usize = 0xE4; // int16
    pub const m_bDebugAbsOriginChanges: usize = 0xE6; // bool
    pub const m_bDormant: usize = 0xE7; // bool
    pub const m_bForceParentToBeNetworked: usize = 0xE8; // bool
    pub const m_bDirtyHierarchy: usize = 0x0; // bitfield:1
    pub const m_bDirtyBoneMergeInfo: usize = 0x0; // bitfield:1
    pub const m_bNetworkedPositionChanged: usize = 0x0; // bitfield:1
    pub const m_bNetworkedAnglesChanged: usize = 0x0; // bitfield:1
    pub const m_bNetworkedScaleChanged: usize = 0x0; // bitfield:1
    pub const m_bWillBeCallingPostDataUpdate: usize = 0x0; // bitfield:1
    pub const m_bNotifyBoneTransformsChanged: usize = 0x0; // bitfield:1
    pub const m_bBoneMergeFlex: usize = 0x0; // bitfield:1
    pub const m_nLatchAbsOrigin: usize = 0x0; // bitfield:2
    pub const m_bDirtyBoneMergeBoneToRoot: usize = 0x0; // bitfield:1
    pub const m_nHierarchicalDepth: usize = 0xEB; // uint8
    pub const m_nHierarchyType: usize = 0xEC; // uint8
    pub const m_nDoNotSetAnimTimeInInvalidatePhysicsCount: usize = 0xED; // uint8
    pub const m_name: usize = 0xF0; // CUtlStringToken
    pub const m_hierarchyAttachName: usize = 0x130; // CUtlStringToken
    pub const m_flZOffset: usize = 0x134; // float32
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
    pub const m_flSpecularPower: usize = 0x5C; // float32
    pub const m_flSpecularIndependence: usize = 0x60; // float32
    pub const m_SpecularColor: usize = 0x64; // Color
    pub const m_bStartDisabled: usize = 0x68; // bool
    pub const m_bEnabled: usize = 0x69; // bool
    pub const m_LightColor: usize = 0x6A; // Color
    pub const m_AmbientColor1: usize = 0x6E; // Color
    pub const m_AmbientColor2: usize = 0x72; // Color
    pub const m_AmbientColor3: usize = 0x76; // Color
    pub const m_flSunDistance: usize = 0x7C; // float32
    pub const m_flFOV: usize = 0x80; // float32
    pub const m_flNearZ: usize = 0x84; // float32
    pub const m_flFarZ: usize = 0x88; // float32
    pub const m_bEnableShadows: usize = 0x8C; // bool
    pub const m_bOldEnableShadows: usize = 0x8D; // bool
    pub const m_bBackgroundClearNotRequired: usize = 0x8E; // bool
    pub const m_flCloudScale: usize = 0x90; // float32
    pub const m_flCloud1Speed: usize = 0x94; // float32
    pub const m_flCloud1Direction: usize = 0x98; // float32
    pub const m_flCloud2Speed: usize = 0x9C; // float32
    pub const m_flCloud2Direction: usize = 0xA0; // float32
    pub const m_flAmbientScale1: usize = 0xB0; // float32
    pub const m_flAmbientScale2: usize = 0xB4; // float32
    pub const m_flGroundScale: usize = 0xB8; // float32
    pub const m_flLightScale: usize = 0xBC; // float32
    pub const m_flFoWDarkness: usize = 0xC0; // float32
    pub const m_bEnableSeparateSkyboxFog: usize = 0xC4; // bool
    pub const m_vFowColor: usize = 0xC8; // Vector
    pub const m_ViewOrigin: usize = 0xD4; // Vector
    pub const m_ViewAngles: usize = 0xE0; // QAngle
    pub const m_flViewFoV: usize = 0xEC; // float32
    pub const m_WorldPoints: usize = 0xF0; // Vector[8]
    pub const m_vFogOffsetLayer0: usize = 0x4A8; // Vector2D
    pub const m_vFogOffsetLayer1: usize = 0x4B0; // Vector2D
    pub const m_hEnvWind: usize = 0x4B8; // CHandle< C_BaseEntity >
    pub const m_hEnvSky: usize = 0x4BC; // CHandle< C_BaseEntity >
}

pub mod CGlowOverlay {
    pub const m_vPos: usize = 0x8; // Vector
    pub const m_bDirectional: usize = 0x14; // bool
    pub const m_vDirection: usize = 0x18; // Vector
    pub const m_bInSky: usize = 0x24; // bool
    pub const m_skyObstructionScale: usize = 0x28; // float32
    pub const m_Sprites: usize = 0x30; // CGlowSprite[4]
    pub const m_nSprites: usize = 0xB0; // int32
    pub const m_flProxyRadius: usize = 0xB4; // float32
    pub const m_flHDRColorScale: usize = 0xB8; // float32
    pub const m_flGlowObstructionScale: usize = 0xBC; // float32
    pub const m_bCacheGlowObstruction: usize = 0xC0; // bool
    pub const m_bCacheSkyObstruction: usize = 0xC1; // bool
    pub const m_bActivated: usize = 0xC2; // int16
    pub const m_ListIndex: usize = 0xC4; // uint16
    pub const m_queryHandle: usize = 0xC8; // int32
}

pub mod CGlowProperty {
    pub const m_fGlowColor: usize = 0x8; // Vector
    pub const m_iGlowType: usize = 0x30; // int32
    pub const m_iGlowTeam: usize = 0x34; // int32
    pub const m_nGlowRange: usize = 0x38; // int32
    pub const m_nGlowRangeMin: usize = 0x3C; // int32
    pub const m_glowColorOverride: usize = 0x40; // Color
    pub const m_bFlashing: usize = 0x44; // bool
    pub const m_flGlowTime: usize = 0x48; // float32
    pub const m_flGlowStartTime: usize = 0x4C; // float32
    pub const m_bEligibleForScreenHighlight: usize = 0x50; // bool
    pub const m_bGlowing: usize = 0x51; // bool
}

pub mod CGlowSprite {
    pub const m_vColor: usize = 0x0; // Vector
    pub const m_flHorzSize: usize = 0xC; // float32
    pub const m_flVertSize: usize = 0x10; // float32
    pub const m_hMaterial: usize = 0x18; // CStrongHandle< InfoForResourceTypeIMaterial2 >
}

pub mod CGrenadeTracer {
    pub const m_flTracerDuration: usize = 0xCE0; // float32
    pub const m_nType: usize = 0xCE4; // GrenadeType_t
}

pub mod CHitboxComponent {
    pub const m_bvDisabledHitGroups: usize = 0x24; // uint32[1]
}

pub mod CInfoDynamicShadowHint {
    pub const m_bDisabled: usize = 0x540; // bool
    pub const m_flRange: usize = 0x544; // float32
    pub const m_nImportance: usize = 0x548; // int32
    pub const m_nLightChoice: usize = 0x54C; // int32
    pub const m_hLight: usize = 0x550; // CHandle< C_BaseEntity >
}

pub mod CInfoDynamicShadowHintBox {
    pub const m_vBoxMins: usize = 0x558; // Vector
    pub const m_vBoxMaxs: usize = 0x564; // Vector
}

pub mod CInfoOffscreenPanoramaTexture {
    pub const m_bDisabled: usize = 0x540; // bool
    pub const m_nResolutionX: usize = 0x544; // int32
    pub const m_nResolutionY: usize = 0x548; // int32
    pub const m_szLayoutFileName: usize = 0x550; // CUtlSymbolLarge
    pub const m_RenderAttrName: usize = 0x558; // CUtlSymbolLarge
    pub const m_TargetEntities: usize = 0x560; // C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > >
    pub const m_nTargetChangeCount: usize = 0x578; // int32
    pub const m_vecCSSClasses: usize = 0x580; // C_NetworkUtlVectorBase< CUtlSymbolLarge >
    pub const m_bCheckCSSClasses: usize = 0x6F8; // bool
}

pub mod CInfoWorldLayer {
    pub const m_pOutputOnEntitiesSpawned: usize = 0x540; // CEntityIOOutput
    pub const m_worldName: usize = 0x568; // CUtlSymbolLarge
    pub const m_layerName: usize = 0x570; // CUtlSymbolLarge
    pub const m_bWorldLayerVisible: usize = 0x578; // bool
    pub const m_bEntitiesSpawned: usize = 0x579; // bool
    pub const m_bCreateAsChildSpawnGroup: usize = 0x57A; // bool
    pub const m_hLayerSpawnGroup: usize = 0x57C; // uint32
    pub const m_bWorldLayerActuallyVisible: usize = 0x580; // bool
}

pub mod CInterpolatedValue {
    pub const m_flStartTime: usize = 0x0; // float32
    pub const m_flEndTime: usize = 0x4; // float32
    pub const m_flStartValue: usize = 0x8; // float32
    pub const m_flEndValue: usize = 0xC; // float32
    pub const m_nInterpType: usize = 0x10; // int32
}

pub mod CLightComponent {
    pub const __m_pChainEntity: usize = 0x48; // CNetworkVarChainer
    pub const m_Color: usize = 0x85; // Color
    pub const m_SecondaryColor: usize = 0x89; // Color
    pub const m_flBrightness: usize = 0x90; // float32
    pub const m_flBrightnessScale: usize = 0x94; // float32
    pub const m_flBrightnessMult: usize = 0x98; // float32
    pub const m_flRange: usize = 0x9C; // float32
    pub const m_flFalloff: usize = 0xA0; // float32
    pub const m_flAttenuation0: usize = 0xA4; // float32
    pub const m_flAttenuation1: usize = 0xA8; // float32
    pub const m_flAttenuation2: usize = 0xAC; // float32
    pub const m_flTheta: usize = 0xB0; // float32
    pub const m_flPhi: usize = 0xB4; // float32
    pub const m_hLightCookie: usize = 0xB8; // CStrongHandle< InfoForResourceTypeCTextureBase >
    pub const m_nCascades: usize = 0xC0; // int32
    pub const m_nCastShadows: usize = 0xC4; // int32
    pub const m_nShadowWidth: usize = 0xC8; // int32
    pub const m_nShadowHeight: usize = 0xCC; // int32
    pub const m_bRenderDiffuse: usize = 0xD0; // bool
    pub const m_nRenderSpecular: usize = 0xD4; // int32
    pub const m_bRenderTransmissive: usize = 0xD8; // bool
    pub const m_flOrthoLightWidth: usize = 0xDC; // float32
    pub const m_flOrthoLightHeight: usize = 0xE0; // float32
    pub const m_nStyle: usize = 0xE4; // int32
    pub const m_Pattern: usize = 0xE8; // CUtlString
    pub const m_nCascadeRenderStaticObjects: usize = 0xF0; // int32
    pub const m_flShadowCascadeCrossFade: usize = 0xF4; // float32
    pub const m_flShadowCascadeDistanceFade: usize = 0xF8; // float32
    pub const m_flShadowCascadeDistance0: usize = 0xFC; // float32
    pub const m_flShadowCascadeDistance1: usize = 0x100; // float32
    pub const m_flShadowCascadeDistance2: usize = 0x104; // float32
    pub const m_flShadowCascadeDistance3: usize = 0x108; // float32
    pub const m_nShadowCascadeResolution0: usize = 0x10C; // int32
    pub const m_nShadowCascadeResolution1: usize = 0x110; // int32
    pub const m_nShadowCascadeResolution2: usize = 0x114; // int32
    pub const m_nShadowCascadeResolution3: usize = 0x118; // int32
    pub const m_bUsesBakedShadowing: usize = 0x11C; // bool
    pub const m_nShadowPriority: usize = 0x120; // int32
    pub const m_nBakedShadowIndex: usize = 0x124; // int32
    pub const m_bRenderToCubemaps: usize = 0x128; // bool
    pub const m_LightGroups: usize = 0x130; // CUtlSymbolLarge
    pub const m_nDirectLight: usize = 0x138; // int32
    pub const m_nIndirectLight: usize = 0x13C; // int32
    pub const m_flFadeMinDist: usize = 0x140; // float32
    pub const m_flFadeMaxDist: usize = 0x144; // float32
    pub const m_flShadowFadeMinDist: usize = 0x148; // float32
    pub const m_flShadowFadeMaxDist: usize = 0x14C; // float32
    pub const m_bEnabled: usize = 0x150; // bool
    pub const m_bFlicker: usize = 0x151; // bool
    pub const m_bPrecomputedFieldsValid: usize = 0x152; // bool
    pub const m_vPrecomputedBoundsMins: usize = 0x154; // Vector
    pub const m_vPrecomputedBoundsMaxs: usize = 0x160; // Vector
    pub const m_vPrecomputedOBBOrigin: usize = 0x16C; // Vector
    pub const m_vPrecomputedOBBAngles: usize = 0x178; // QAngle
    pub const m_vPrecomputedOBBExtent: usize = 0x184; // Vector
    pub const m_flPrecomputedMaxRange: usize = 0x190; // float32
    pub const m_nFogLightingMode: usize = 0x194; // int32
    pub const m_flFogContributionStength: usize = 0x198; // float32
    pub const m_flNearClipPlane: usize = 0x19C; // float32
    pub const m_SkyColor: usize = 0x1A0; // Color
    pub const m_flSkyIntensity: usize = 0x1A4; // float32
    pub const m_SkyAmbientBounce: usize = 0x1A8; // Color
    pub const m_bUseSecondaryColor: usize = 0x1AC; // bool
    pub const m_bMixedShadows: usize = 0x1AD; // bool
    pub const m_flLightStyleStartTime: usize = 0x1B0; // GameTime_t
    pub const m_flCapsuleLength: usize = 0x1B4; // float32
    pub const m_flMinRoughness: usize = 0x1B8; // float32
}

pub mod CLogicRelay {
    pub const m_OnTrigger: usize = 0x540; // CEntityIOOutput
    pub const m_OnSpawn: usize = 0x568; // CEntityIOOutput
    pub const m_bDisabled: usize = 0x590; // bool
    pub const m_bWaitForRefire: usize = 0x591; // bool
    pub const m_bTriggerOnce: usize = 0x592; // bool
    pub const m_bFastRetrigger: usize = 0x593; // bool
    pub const m_bPassthoughCaller: usize = 0x594; // bool
}

pub mod CModelState {
    pub const m_hModel: usize = 0xA0; // CStrongHandle< InfoForResourceTypeCModel >
    pub const m_ModelName: usize = 0xA8; // CUtlSymbolLarge
    pub const m_bClientClothCreationSuppressed: usize = 0xE8; // bool
    pub const m_MeshGroupMask: usize = 0x180; // uint64
    pub const m_nIdealMotionType: usize = 0x222; // int8
    pub const m_nForceLOD: usize = 0x223; // int8
    pub const m_nClothUpdateFlags: usize = 0x224; // int8
}

pub mod CNetworkedSequenceOperation {
    pub const m_hSequence: usize = 0x8; // HSequence
    pub const m_flPrevCycle: usize = 0xC; // float32
    pub const m_flCycle: usize = 0x10; // float32
    pub const m_flWeight: usize = 0x14; // CNetworkedQuantizedFloat
    pub const m_bSequenceChangeNetworked: usize = 0x1C; // bool
    pub const m_bDiscontinuity: usize = 0x1D; // bool
    pub const m_flPrevCycleFromDiscontinuity: usize = 0x20; // float32
    pub const m_flPrevCycleForAnimEventDetection: usize = 0x24; // float32
}

pub mod CPlayer_CameraServices {
    pub const m_vecCsViewPunchAngle: usize = 0x40; // QAngle
    pub const m_nCsViewPunchAngleTick: usize = 0x4C; // GameTick_t
    pub const m_flCsViewPunchAngleTickRatio: usize = 0x50; // float32
    pub const m_PlayerFog: usize = 0x58; // C_fogplayerparams_t
    pub const m_hColorCorrectionCtrl: usize = 0x98; // CHandle< C_ColorCorrection >
    pub const m_hViewEntity: usize = 0x9C; // CHandle< C_BaseEntity >
    pub const m_hTonemapController: usize = 0xA0; // CHandle< C_TonemapController2 >
    pub const m_audio: usize = 0xA8; // audioparams_t
    pub const m_PostProcessingVolumes: usize = 0x120; // C_NetworkUtlVectorBase< CHandle< C_PostProcessingVolume > >
    pub const m_flOldPlayerZ: usize = 0x138; // float32
    pub const m_flOldPlayerViewOffsetZ: usize = 0x13C; // float32
    pub const m_CurrentFog: usize = 0x140; // fogparams_t
    pub const m_hOldFogController: usize = 0x1A8; // CHandle< C_FogController >
    pub const m_bOverrideFogColor: usize = 0x1AC; // bool[5]
    pub const m_OverrideFogColor: usize = 0x1B1; // Color[5]
    pub const m_bOverrideFogStartEnd: usize = 0x1C5; // bool[5]
    pub const m_fOverrideFogStart: usize = 0x1CC; // float32[5]
    pub const m_fOverrideFogEnd: usize = 0x1E0; // float32[5]
    pub const m_hActivePostProcessingVolume: usize = 0x1F4; // CHandle< C_PostProcessingVolume >
    pub const m_angDemoViewAngles: usize = 0x1F8; // QAngle
}

pub mod CPlayer_MovementServices {
    pub const m_nImpulse: usize = 0x40; // int32
    pub const m_nButtons: usize = 0x48; // CInButtonState
    pub const m_nQueuedButtonDownMask: usize = 0x68; // uint64
    pub const m_nQueuedButtonChangeMask: usize = 0x70; // uint64
    pub const m_nButtonDoublePressed: usize = 0x78; // uint64
    pub const m_pButtonPressedCmdNumber: usize = 0x80; // uint32[64]
    pub const m_nLastCommandNumberProcessed: usize = 0x180; // uint32
    pub const m_nToggleButtonDownMask: usize = 0x188; // uint64
    pub const m_flMaxspeed: usize = 0x190; // float32
    pub const m_arrForceSubtickMoveWhen: usize = 0x194; // float32[4]
    pub const m_flForwardMove: usize = 0x1A4; // float32
    pub const m_flLeftMove: usize = 0x1A8; // float32
    pub const m_flUpMove: usize = 0x1AC; // float32
    pub const m_vecLastMovementImpulses: usize = 0x1B0; // Vector
    pub const m_vecOldViewAngles: usize = 0x1BC; // QAngle
}

pub mod CPlayer_MovementServices_Humanoid {
    pub const m_flStepSoundTime: usize = 0x1D0; // float32
    pub const m_flFallVelocity: usize = 0x1D4; // float32
    pub const m_bInCrouch: usize = 0x1D8; // bool
    pub const m_nCrouchState: usize = 0x1DC; // uint32
    pub const m_flCrouchTransitionStartTime: usize = 0x1E0; // GameTime_t
    pub const m_bDucked: usize = 0x1E4; // bool
    pub const m_bDucking: usize = 0x1E5; // bool
    pub const m_bInDuckJump: usize = 0x1E6; // bool
    pub const m_groundNormal: usize = 0x1E8; // Vector
    pub const m_flSurfaceFriction: usize = 0x1F4; // float32
    pub const m_surfaceProps: usize = 0x1F8; // CUtlStringToken
    pub const m_nStepside: usize = 0x208; // int32
}

pub mod CPlayer_ObserverServices {
    pub const m_iObserverMode: usize = 0x40; // uint8
    pub const m_hObserverTarget: usize = 0x44; // CHandle< C_BaseEntity >
    pub const m_iObserverLastMode: usize = 0x48; // ObserverMode_t
    pub const m_bForcedObserverMode: usize = 0x4C; // bool
    pub const m_flObserverChaseDistance: usize = 0x50; // float32
    pub const m_flObserverChaseDistanceCalcTime: usize = 0x54; // GameTime_t
}

pub mod CPlayer_WeaponServices {
    pub const m_bAllowSwitchToNoWeapon: usize = 0x40; // bool
    pub const m_hMyWeapons: usize = 0x48; // C_NetworkUtlVectorBase< CHandle< C_BasePlayerWeapon > >
    pub const m_hActiveWeapon: usize = 0x60; // CHandle< C_BasePlayerWeapon >
    pub const m_hLastWeapon: usize = 0x64; // CHandle< C_BasePlayerWeapon >
    pub const m_iAmmo: usize = 0x68; // uint16[32]
}

pub mod CPointOffScreenIndicatorUi {
    pub const m_bBeenEnabled: usize = 0xF20; // bool
    pub const m_bHide: usize = 0xF21; // bool
    pub const m_flSeenTargetTime: usize = 0xF24; // float32
    pub const m_pTargetPanel: usize = 0xF28; // C_PointClientUIWorldPanel*
}

pub mod CPointTemplate {
    pub const m_iszWorldName: usize = 0x540; // CUtlSymbolLarge
    pub const m_iszSource2EntityLumpName: usize = 0x548; // CUtlSymbolLarge
    pub const m_iszEntityFilterName: usize = 0x550; // CUtlSymbolLarge
    pub const m_flTimeoutInterval: usize = 0x558; // float32
    pub const m_bAsynchronouslySpawnEntities: usize = 0x55C; // bool
    pub const m_pOutputOnSpawned: usize = 0x560; // CEntityIOOutput
    pub const m_clientOnlyEntityBehavior: usize = 0x588; // PointTemplateClientOnlyEntityBehavior_t
    pub const m_ownerSpawnGroupType: usize = 0x58C; // PointTemplateOwnerSpawnGroupType_t
    pub const m_createdSpawnGroupHandles: usize = 0x590; // CUtlVector< uint32 >
    pub const m_SpawnedEntityHandles: usize = 0x5A8; // CUtlVector< CEntityHandle >
    pub const m_ScriptSpawnCallback: usize = 0x5C0; // HSCRIPT
    pub const m_ScriptCallbackScope: usize = 0x5C8; // HSCRIPT
}

pub mod CPrecipitationVData {
    pub const m_szParticlePrecipitationEffect: usize = 0x28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    pub const m_flInnerDistance: usize = 0x108; // float32
    pub const m_nAttachType: usize = 0x10C; // ParticleAttachment_t
    pub const m_bBatchSameVolumeType: usize = 0x110; // bool
    pub const m_nRTEnvCP: usize = 0x114; // int32
    pub const m_nRTEnvCPComponent: usize = 0x118; // int32
    pub const m_szModifier: usize = 0x120; // CUtlString
}

pub mod CProjectedTextureBase {
    pub const m_hTargetEntity: usize = 0xC; // CHandle< C_BaseEntity >
    pub const m_bState: usize = 0x10; // bool
    pub const m_bAlwaysUpdate: usize = 0x11; // bool
    pub const m_flLightFOV: usize = 0x14; // float32
    pub const m_bEnableShadows: usize = 0x18; // bool
    pub const m_bSimpleProjection: usize = 0x19; // bool
    pub const m_bLightOnlyTarget: usize = 0x1A; // bool
    pub const m_bLightWorld: usize = 0x1B; // bool
    pub const m_bCameraSpace: usize = 0x1C; // bool
    pub const m_flBrightnessScale: usize = 0x20; // float32
    pub const m_LightColor: usize = 0x24; // Color
    pub const m_flIntensity: usize = 0x28; // float32
    pub const m_flLinearAttenuation: usize = 0x2C; // float32
    pub const m_flQuadraticAttenuation: usize = 0x30; // float32
    pub const m_bVolumetric: usize = 0x34; // bool
    pub const m_flVolumetricIntensity: usize = 0x38; // float32
    pub const m_flNoiseStrength: usize = 0x3C; // float32
    pub const m_flFlashlightTime: usize = 0x40; // float32
    pub const m_nNumPlanes: usize = 0x44; // uint32
    pub const m_flPlaneOffset: usize = 0x48; // float32
    pub const m_flColorTransitionTime: usize = 0x4C; // float32
    pub const m_flAmbient: usize = 0x50; // float32
    pub const m_SpotlightTextureName: usize = 0x54; // char[512]
    pub const m_nSpotlightTextureFrame: usize = 0x254; // int32
    pub const m_nShadowQuality: usize = 0x258; // uint32
    pub const m_flNearZ: usize = 0x25C; // float32
    pub const m_flFarZ: usize = 0x260; // float32
    pub const m_flProjectionSize: usize = 0x264; // float32
    pub const m_flRotation: usize = 0x268; // float32
    pub const m_bFlipHorizontal: usize = 0x26C; // bool
}

pub mod CRenderComponent {
    pub const __m_pChainEntity: usize = 0x10; // CNetworkVarChainer
    pub const m_bIsRenderingWithViewModels: usize = 0x50; // bool
    pub const m_nSplitscreenFlags: usize = 0x54; // uint32
    pub const m_bEnableRendering: usize = 0x60; // bool
    pub const m_bInterpolationReadyToDraw: usize = 0xB0; // bool
}

pub mod CSMatchStats_t {
    pub const m_iEnemy5Ks: usize = 0x68; // int32
    pub const m_iEnemy4Ks: usize = 0x6C; // int32
    pub const m_iEnemy3Ks: usize = 0x70; // int32
}

pub mod CSPerRoundStats_t {
    pub const m_iKills: usize = 0x30; // int32
    pub const m_iDeaths: usize = 0x34; // int32
    pub const m_iAssists: usize = 0x38; // int32
    pub const m_iDamage: usize = 0x3C; // int32
    pub const m_iEquipmentValue: usize = 0x40; // int32
    pub const m_iMoneySaved: usize = 0x44; // int32
    pub const m_iKillReward: usize = 0x48; // int32
    pub const m_iLiveTime: usize = 0x4C; // int32
    pub const m_iHeadShotKills: usize = 0x50; // int32
    pub const m_iObjective: usize = 0x54; // int32
    pub const m_iCashEarned: usize = 0x58; // int32
    pub const m_iUtilityDamage: usize = 0x5C; // int32
    pub const m_iEnemiesFlashed: usize = 0x60; // int32
}

pub mod CScriptComponent {
    pub const m_scriptClassName: usize = 0x30; // CUtlSymbolLarge
}

pub mod CSkeletonInstance {
    pub const m_modelState: usize = 0x160; // CModelState
    pub const m_bIsAnimationEnabled: usize = 0x390; // bool
    pub const m_bUseParentRenderBounds: usize = 0x391; // bool
    pub const m_bDisableSolidCollisionsForHierarchy: usize = 0x392; // bool
    pub const m_bDirtyMotionType: usize = 0x0; // bitfield:1
    pub const m_bIsGeneratingLatchedParentSpaceState: usize = 0x0; // bitfield:1
    pub const m_materialGroup: usize = 0x394; // CUtlStringToken
    pub const m_nHitboxSet: usize = 0x398; // uint8
}

pub mod CSkyboxReference {
    pub const m_worldGroupId: usize = 0x540; // WorldGroupId_t
    pub const m_hSkyCamera: usize = 0x544; // CHandle< C_SkyCamera >
}

pub mod CTimeline {
    pub const m_flValues: usize = 0x10; // float32[64]
    pub const m_nValueCounts: usize = 0x110; // int32[64]
    pub const m_nBucketCount: usize = 0x210; // int32
    pub const m_flInterval: usize = 0x214; // float32
    pub const m_flFinalValue: usize = 0x218; // float32
    pub const m_nCompressionType: usize = 0x21C; // TimelineCompression_t
    pub const m_bStopped: usize = 0x220; // bool
}

pub mod C_AttributeContainer {
    pub const m_Item: usize = 0x50; // C_EconItemView
    pub const m_iExternalItemProviderRegisteredToken: usize = 0x498; // int32
    pub const m_ullRegisteredAsItemID: usize = 0x4A0; // uint64
}

pub mod C_BarnLight {
    pub const m_bEnabled: usize = 0xCC0; // bool
    pub const m_nColorMode: usize = 0xCC4; // int32
    pub const m_Color: usize = 0xCC8; // Color
    pub const m_flColorTemperature: usize = 0xCCC; // float32
    pub const m_flBrightness: usize = 0xCD0; // float32
    pub const m_flBrightnessScale: usize = 0xCD4; // float32
    pub const m_nDirectLight: usize = 0xCD8; // int32
    pub const m_nBakedShadowIndex: usize = 0xCDC; // int32
    pub const m_nLuminaireShape: usize = 0xCE0; // int32
    pub const m_flLuminaireSize: usize = 0xCE4; // float32
    pub const m_flLuminaireAnisotropy: usize = 0xCE8; // float32
    pub const m_LightStyleString: usize = 0xCF0; // CUtlString
    pub const m_flLightStyleStartTime: usize = 0xCF8; // GameTime_t
    pub const m_QueuedLightStyleStrings: usize = 0xD00; // C_NetworkUtlVectorBase< CUtlString >
    pub const m_LightStyleEvents: usize = 0xD18; // C_NetworkUtlVectorBase< CUtlString >
    pub const m_LightStyleTargets: usize = 0xD30; // C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > >
    pub const m_StyleEvent: usize = 0xD48; // CEntityIOOutput[4]
    pub const m_hLightCookie: usize = 0xDE8; // CStrongHandle< InfoForResourceTypeCTextureBase >
    pub const m_flShape: usize = 0xDF0; // float32
    pub const m_flSoftX: usize = 0xDF4; // float32
    pub const m_flSoftY: usize = 0xDF8; // float32
    pub const m_flSkirt: usize = 0xDFC; // float32
    pub const m_flSkirtNear: usize = 0xE00; // float32
    pub const m_vSizeParams: usize = 0xE04; // Vector
    pub const m_flRange: usize = 0xE10; // float32
    pub const m_vShear: usize = 0xE14; // Vector
    pub const m_nBakeSpecularToCubemaps: usize = 0xE20; // int32
    pub const m_vBakeSpecularToCubemapsSize: usize = 0xE24; // Vector
    pub const m_nCastShadows: usize = 0xE30; // int32
    pub const m_nShadowMapSize: usize = 0xE34; // int32
    pub const m_nShadowPriority: usize = 0xE38; // int32
    pub const m_bContactShadow: usize = 0xE3C; // bool
    pub const m_nBounceLight: usize = 0xE40; // int32
    pub const m_flBounceScale: usize = 0xE44; // float32
    pub const m_flMinRoughness: usize = 0xE48; // float32
    pub const m_vAlternateColor: usize = 0xE4C; // Vector
    pub const m_fAlternateColorBrightness: usize = 0xE58; // float32
    pub const m_nFog: usize = 0xE5C; // int32
    pub const m_flFogStrength: usize = 0xE60; // float32
    pub const m_nFogShadows: usize = 0xE64; // int32
    pub const m_flFogScale: usize = 0xE68; // float32
    pub const m_flFadeSizeStart: usize = 0xE6C; // float32
    pub const m_flFadeSizeEnd: usize = 0xE70; // float32
    pub const m_flShadowFadeSizeStart: usize = 0xE74; // float32
    pub const m_flShadowFadeSizeEnd: usize = 0xE78; // float32
    pub const m_bPrecomputedFieldsValid: usize = 0xE7C; // bool
    pub const m_vPrecomputedBoundsMins: usize = 0xE80; // Vector
    pub const m_vPrecomputedBoundsMaxs: usize = 0xE8C; // Vector
    pub const m_vPrecomputedOBBOrigin: usize = 0xE98; // Vector
    pub const m_vPrecomputedOBBAngles: usize = 0xEA4; // QAngle
    pub const m_vPrecomputedOBBExtent: usize = 0xEB0; // Vector
}

pub mod C_BaseButton {
    pub const m_glowEntity: usize = 0xCC0; // CHandle< C_BaseModelEntity >
    pub const m_usable: usize = 0xCC4; // bool
    pub const m_szDisplayText: usize = 0xCC8; // CUtlSymbolLarge
}

pub mod C_BaseCSGrenade {
    pub const m_bClientPredictDelete: usize = 0x18E0; // bool
    pub const m_bRedraw: usize = 0x1908; // bool
    pub const m_bIsHeldByPlayer: usize = 0x1909; // bool
    pub const m_bPinPulled: usize = 0x190A; // bool
    pub const m_bJumpThrow: usize = 0x190B; // bool
    pub const m_eThrowStatus: usize = 0x190C; // EGrenadeThrowState
    pub const m_fThrowTime: usize = 0x1910; // GameTime_t
    pub const m_flThrowStrength: usize = 0x1914; // float32
    pub const m_flThrowStrengthApproach: usize = 0x1918; // float32
    pub const m_fDropTime: usize = 0x191C; // GameTime_t
}

pub mod C_BaseCSGrenadeProjectile {
    pub const m_vInitialVelocity: usize = 0x1068; // Vector
    pub const m_nBounces: usize = 0x1074; // int32
    pub const m_nExplodeEffectIndex: usize = 0x1078; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
    pub const m_nExplodeEffectTickBegin: usize = 0x1080; // int32
    pub const m_vecExplodeEffectOrigin: usize = 0x1084; // Vector
    pub const m_flSpawnTime: usize = 0x1090; // GameTime_t
    pub const vecLastTrailLinePos: usize = 0x1094; // Vector
    pub const flNextTrailLineTime: usize = 0x10A0; // GameTime_t
    pub const m_bExplodeEffectBegan: usize = 0x10A4; // bool
    pub const m_bCanCreateGrenadeTrail: usize = 0x10A5; // bool
    pub const m_nSnapshotTrajectoryEffectIndex: usize = 0x10A8; // ParticleIndex_t
    pub const m_hSnapshotTrajectoryParticleSnapshot: usize = 0x10B0; // CStrongHandle< InfoForResourceTypeIParticleSnapshot >
    pub const m_arrTrajectoryTrailPoints: usize = 0x10B8; // CUtlVector< Vector >
    pub const m_arrTrajectoryTrailPointCreationTimes: usize = 0x10D0; // CUtlVector< float32 >
    pub const m_flTrajectoryTrailEffectCreationTime: usize = 0x10E8; // float32
}

pub mod C_BaseClientUIEntity {
    pub const m_bEnabled: usize = 0xCC8; // bool
    pub const m_DialogXMLName: usize = 0xCD0; // CUtlSymbolLarge
    pub const m_PanelClassName: usize = 0xCD8; // CUtlSymbolLarge
    pub const m_PanelID: usize = 0xCE0; // CUtlSymbolLarge
}

pub mod C_BaseCombatCharacter {
    pub const m_hMyWearables: usize = 0x1018; // C_NetworkUtlVectorBase< CHandle< C_EconWearable > >
    pub const m_bloodColor: usize = 0x1030; // int32
    pub const m_leftFootAttachment: usize = 0x1034; // AttachmentHandle_t
    pub const m_rightFootAttachment: usize = 0x1035; // AttachmentHandle_t
    pub const m_nWaterWakeMode: usize = 0x1038; // C_BaseCombatCharacter::WaterWakeMode_t
    pub const m_flWaterWorldZ: usize = 0x103C; // float32
    pub const m_flWaterNextTraceTime: usize = 0x1040; // float32
    pub const m_flFieldOfView: usize = 0x1044; // float32
}

pub mod C_BaseDoor {
    pub const m_bIsUsable: usize = 0xCC0; // bool
}

pub mod C_BaseEntity {
    pub const m_CBodyComponent: usize = 0x30; // CBodyComponent*
    pub const m_NetworkTransmitComponent: usize = 0x38; // CNetworkTransmitComponent
    pub const m_nLastThinkTick: usize = 0x308; // GameTick_t
    pub const m_pGameSceneNode: usize = 0x310; // CGameSceneNode*
    pub const m_pRenderComponent: usize = 0x318; // CRenderComponent*
    pub const m_pCollision: usize = 0x320; // CCollisionProperty*
    pub const m_iMaxHealth: usize = 0x328; // int32
    pub const m_iHealth: usize = 0x32C; // int32
    pub const m_lifeState: usize = 0x330; // uint8
    pub const m_bTakesDamage: usize = 0x331; // bool
    pub const m_nTakeDamageFlags: usize = 0x334; // TakeDamageFlags_t
    pub const m_ubInterpolationFrame: usize = 0x338; // uint8
    pub const m_hSceneObjectController: usize = 0x33C; // CHandle< C_BaseEntity >
    pub const m_nNoInterpolationTick: usize = 0x340; // int32
    pub const m_nVisibilityNoInterpolationTick: usize = 0x344; // int32
    pub const m_flProxyRandomValue: usize = 0x348; // float32
    pub const m_iEFlags: usize = 0x34C; // int32
    pub const m_nWaterType: usize = 0x350; // uint8
    pub const m_bInterpolateEvenWithNoModel: usize = 0x351; // bool
    pub const m_bPredictionEligible: usize = 0x352; // bool
    pub const m_bApplyLayerMatchIDToModel: usize = 0x353; // bool
    pub const m_tokLayerMatchID: usize = 0x354; // CUtlStringToken
    pub const m_nSubclassID: usize = 0x358; // CUtlStringToken
    pub const m_nSimulationTick: usize = 0x368; // int32
    pub const m_iCurrentThinkContext: usize = 0x36C; // int32
    pub const m_aThinkFunctions: usize = 0x370; // CUtlVector< thinkfunc_t >
    pub const m_flAnimTime: usize = 0x388; // float32
    pub const m_flSimulationTime: usize = 0x38C; // float32
    pub const m_nSceneObjectOverrideFlags: usize = 0x390; // uint8
    pub const m_bHasSuccessfullyInterpolated: usize = 0x391; // bool
    pub const m_bHasAddedVarsToInterpolation: usize = 0x392; // bool
    pub const m_bRenderEvenWhenNotSuccessfullyInterpolated: usize = 0x393; // bool
    pub const m_nInterpolationLatchDirtyFlags: usize = 0x394; // int32[2]
    pub const m_ListEntry: usize = 0x39C; // uint16[11]
    pub const m_flCreateTime: usize = 0x3B4; // GameTime_t
    pub const m_flSpeed: usize = 0x3B8; // float32
    pub const m_EntClientFlags: usize = 0x3BC; // uint16
    pub const m_bClientSideRagdoll: usize = 0x3BE; // bool
    pub const m_iTeamNum: usize = 0x3BF; // uint8
    pub const m_spawnflags: usize = 0x3C0; // uint32
    pub const m_nNextThinkTick: usize = 0x3C4; // GameTick_t
    pub const m_fFlags: usize = 0x3C8; // uint32
    pub const m_vecAbsVelocity: usize = 0x3CC; // Vector
    pub const m_vecVelocity: usize = 0x3D8; // CNetworkVelocityVector
    pub const m_vecBaseVelocity: usize = 0x408; // Vector
    pub const m_hEffectEntity: usize = 0x414; // CHandle< C_BaseEntity >
    pub const m_hOwnerEntity: usize = 0x418; // CHandle< C_BaseEntity >
    pub const m_MoveCollide: usize = 0x41C; // MoveCollide_t
    pub const m_MoveType: usize = 0x41D; // MoveType_t
    pub const m_flWaterLevel: usize = 0x420; // float32
    pub const m_fEffects: usize = 0x424; // uint32
    pub const m_hGroundEntity: usize = 0x428; // CHandle< C_BaseEntity >
    pub const m_flFriction: usize = 0x42C; // float32
    pub const m_flElasticity: usize = 0x430; // float32
    pub const m_flGravityScale: usize = 0x434; // float32
    pub const m_flTimeScale: usize = 0x438; // float32
    pub const m_bSimulatedEveryTick: usize = 0x43C; // bool
    pub const m_bAnimatedEveryTick: usize = 0x43D; // bool
    pub const m_flNavIgnoreUntilTime: usize = 0x440; // GameTime_t
    pub const m_hThink: usize = 0x444; // uint16
    pub const m_fBBoxVisFlags: usize = 0x450; // uint8
    pub const m_bPredictable: usize = 0x451; // bool
    pub const m_bRenderWithViewModels: usize = 0x452; // bool
    pub const m_nSplitUserPlayerPredictionSlot: usize = 0x454; // CSplitScreenSlot
    pub const m_nFirstPredictableCommand: usize = 0x458; // int32
    pub const m_nLastPredictableCommand: usize = 0x45C; // int32
    pub const m_hOldMoveParent: usize = 0x460; // CHandle< C_BaseEntity >
    pub const m_Particles: usize = 0x468; // CParticleProperty
    pub const m_vecPredictedScriptFloats: usize = 0x490; // CUtlVector< float32 >
    pub const m_vecPredictedScriptFloatIDs: usize = 0x4A8; // CUtlVector< int32 >
    pub const m_nNextScriptVarRecordID: usize = 0x4D8; // int32
    pub const m_vecAngVelocity: usize = 0x4E8; // QAngle
    pub const m_DataChangeEventRef: usize = 0x4F4; // int32
    pub const m_dependencies: usize = 0x4F8; // CUtlVector< CEntityHandle >
    pub const m_nCreationTick: usize = 0x510; // int32
    pub const m_bAnimTimeChanged: usize = 0x529; // bool
    pub const m_bSimulationTimeChanged: usize = 0x52A; // bool
    pub const m_sUniqueHammerID: usize = 0x538; // CUtlString
}

pub mod C_BaseFire {
    pub const m_flScale: usize = 0x540; // float32
    pub const m_flStartScale: usize = 0x544; // float32
    pub const m_flScaleTime: usize = 0x548; // float32
    pub const m_nFlags: usize = 0x54C; // uint32
}

pub mod C_BaseFlex {
    pub const m_flexWeight: usize = 0xE90; // C_NetworkUtlVectorBase< float32 >
    pub const m_vLookTargetPosition: usize = 0xEA8; // Vector
    pub const m_blinktoggle: usize = 0xEC0; // bool
    pub const m_nLastFlexUpdateFrameCount: usize = 0xF20; // int32
    pub const m_CachedViewTarget: usize = 0xF24; // Vector
    pub const m_nNextSceneEventId: usize = 0xF30; // uint32
    pub const m_iBlink: usize = 0xF34; // int32
    pub const m_blinktime: usize = 0xF38; // float32
    pub const m_prevblinktoggle: usize = 0xF3C; // bool
    pub const m_iJawOpen: usize = 0xF40; // int32
    pub const m_flJawOpenAmount: usize = 0xF44; // float32
    pub const m_flBlinkAmount: usize = 0xF48; // float32
    pub const m_iMouthAttachment: usize = 0xF4C; // AttachmentHandle_t
    pub const m_iEyeAttachment: usize = 0xF4D; // AttachmentHandle_t
    pub const m_bResetFlexWeightsOnModelChange: usize = 0xF4E; // bool
    pub const m_nEyeOcclusionRendererBone: usize = 0xF68; // int32
    pub const m_mEyeOcclusionRendererCameraToBoneTransform: usize = 0xF6C; // matrix3x4_t
    pub const m_vEyeOcclusionRendererHalfExtent: usize = 0xF9C; // Vector
    pub const m_PhonemeClasses: usize = 0xFB8; // C_BaseFlex::Emphasized_Phoneme[3]
}

pub mod C_BaseFlex_Emphasized_Phoneme {
    pub const m_sClassName: usize = 0x0; // CUtlString
    pub const m_flAmount: usize = 0x18; // float32
    pub const m_bRequired: usize = 0x1C; // bool
    pub const m_bBasechecked: usize = 0x1D; // bool
    pub const m_bValid: usize = 0x1E; // bool
}

pub mod C_BaseGrenade {
    pub const m_bHasWarnedAI: usize = 0x1018; // bool
    pub const m_bIsSmokeGrenade: usize = 0x1019; // bool
    pub const m_bIsLive: usize = 0x101A; // bool
    pub const m_DmgRadius: usize = 0x101C; // float32
    pub const m_flDetonateTime: usize = 0x1020; // GameTime_t
    pub const m_flWarnAITime: usize = 0x1024; // float32
    pub const m_flDamage: usize = 0x1028; // float32
    pub const m_iszBounceSound: usize = 0x1030; // CUtlSymbolLarge
    pub const m_ExplosionSound: usize = 0x1038; // CUtlString
    pub const m_hThrower: usize = 0x1044; // CHandle< C_CSPlayerPawn >
    pub const m_flNextAttack: usize = 0x105C; // GameTime_t
    pub const m_hOriginalThrower: usize = 0x1060; // CHandle< C_CSPlayerPawn >
}

pub mod C_BaseModelEntity {
    pub const m_CRenderComponent: usize = 0xA10; // CRenderComponent*
    pub const m_CHitboxComponent: usize = 0xA18; // CHitboxComponent
    pub const m_bInitModelEffects: usize = 0xA60; // bool
    pub const m_bIsStaticProp: usize = 0xA61; // bool
    pub const m_nLastAddDecal: usize = 0xA64; // int32
    pub const m_nDecalsAdded: usize = 0xA68; // int32
    pub const m_iOldHealth: usize = 0xA6C; // int32
    pub const m_nRenderMode: usize = 0xA70; // RenderMode_t
    pub const m_nRenderFX: usize = 0xA71; // RenderFx_t
    pub const m_bAllowFadeInView: usize = 0xA72; // bool
    pub const m_clrRender: usize = 0xA73; // Color
    pub const m_vecRenderAttributes: usize = 0xA78; // C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t >
    pub const m_LightGroup: usize = 0xAE0; // CUtlStringToken
    pub const m_bRenderToCubemaps: usize = 0xAE4; // bool
    pub const m_Collision: usize = 0xAE8; // CCollisionProperty
    pub const m_Glow: usize = 0xB98; // CGlowProperty
    pub const m_flGlowBackfaceMult: usize = 0xBF0; // float32
    pub const m_fadeMinDist: usize = 0xBF4; // float32
    pub const m_fadeMaxDist: usize = 0xBF8; // float32
    pub const m_flFadeScale: usize = 0xBFC; // float32
    pub const m_flShadowStrength: usize = 0xC00; // float32
    pub const m_nObjectCulling: usize = 0xC04; // uint8
    pub const m_nAddDecal: usize = 0xC08; // int32
    pub const m_vDecalPosition: usize = 0xC0C; // Vector
    pub const m_vDecalForwardAxis: usize = 0xC18; // Vector
    pub const m_flDecalHealBloodRate: usize = 0xC24; // float32
    pub const m_flDecalHealHeightRate: usize = 0xC28; // float32
    pub const m_ConfigEntitiesToPropagateMaterialDecalsTo: usize = 0xC30; // C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > >
    pub const m_vecViewOffset: usize = 0xC48; // CNetworkViewOffsetVector
    pub const m_pClientAlphaProperty: usize = 0xC78; // CClientAlphaProperty*
    pub const m_ClientOverrideTint: usize = 0xC80; // Color
    pub const m_bUseClientOverrideTint: usize = 0xC84; // bool
}

pub mod C_BasePlayerPawn {
    pub const m_pWeaponServices: usize = 0x10A8; // CPlayer_WeaponServices*
    pub const m_pItemServices: usize = 0x10B0; // CPlayer_ItemServices*
    pub const m_pAutoaimServices: usize = 0x10B8; // CPlayer_AutoaimServices*
    pub const m_pObserverServices: usize = 0x10C0; // CPlayer_ObserverServices*
    pub const m_pWaterServices: usize = 0x10C8; // CPlayer_WaterServices*
    pub const m_pUseServices: usize = 0x10D0; // CPlayer_UseServices*
    pub const m_pFlashlightServices: usize = 0x10D8; // CPlayer_FlashlightServices*
    pub const m_pCameraServices: usize = 0x10E0; // CPlayer_CameraServices*
    pub const m_pMovementServices: usize = 0x10E8; // CPlayer_MovementServices*
    pub const m_ServerViewAngleChanges: usize = 0x10F8; // C_UtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t >
    pub const m_nHighestConsumedServerViewAngleChangeIndex: usize = 0x1148; // uint32
    pub const v_angle: usize = 0x114C; // QAngle
    pub const v_anglePrevious: usize = 0x1158; // QAngle
    pub const m_iHideHUD: usize = 0x1164; // uint32
    pub const m_skybox3d: usize = 0x1168; // sky3dparams_t
    pub const m_flDeathTime: usize = 0x11F8; // GameTime_t
    pub const m_vecPredictionError: usize = 0x11FC; // Vector
    pub const m_flPredictionErrorTime: usize = 0x1208; // GameTime_t
    pub const m_flFOVSensitivityAdjust: usize = 0x120C; // float32
    pub const m_flMouseSensitivity: usize = 0x1210; // float32
    pub const m_vOldOrigin: usize = 0x1214; // Vector
    pub const m_flOldSimulationTime: usize = 0x1220; // float32
    pub const m_nLastExecutedCommandNumber: usize = 0x1224; // int32
    pub const m_nLastExecutedCommandTick: usize = 0x1228; // int32
    pub const m_hController: usize = 0x122C; // CHandle< CBasePlayerController >
    pub const m_bIsSwappingToPredictableController: usize = 0x1230; // bool
}

pub mod C_BasePlayerWeapon {
    pub const m_nNextPrimaryAttackTick: usize = 0x1560; // GameTick_t
    pub const m_flNextPrimaryAttackTickRatio: usize = 0x1564; // float32
    pub const m_nNextSecondaryAttackTick: usize = 0x1568; // GameTick_t
    pub const m_flNextSecondaryAttackTickRatio: usize = 0x156C; // float32
    pub const m_iClip1: usize = 0x1570; // int32
    pub const m_iClip2: usize = 0x1574; // int32
    pub const m_pReserveAmmo: usize = 0x1578; // int32[2]
}

pub mod C_BasePropDoor {
    pub const m_eDoorState: usize = 0x10F8; // DoorState_t
    pub const m_modelChanged: usize = 0x10FC; // bool
    pub const m_bLocked: usize = 0x10FD; // bool
    pub const m_closedPosition: usize = 0x1100; // Vector
    pub const m_closedAngles: usize = 0x110C; // QAngle
    pub const m_hMaster: usize = 0x1118; // CHandle< C_BasePropDoor >
    pub const m_vWhereToSetLightingOrigin: usize = 0x111C; // Vector
}

pub mod C_BaseTrigger {
    pub const m_bDisabled: usize = 0xCC0; // bool
    pub const m_bClientSidePredicted: usize = 0xCC1; // bool
}

pub mod C_BaseViewModel {
    pub const m_vecLastFacing: usize = 0xE88; // Vector
    pub const m_nViewModelIndex: usize = 0xE94; // uint32
    pub const m_nAnimationParity: usize = 0xE98; // uint32
    pub const m_flAnimationStartTime: usize = 0xE9C; // float32
    pub const m_hWeapon: usize = 0xEA0; // CHandle< C_BasePlayerWeapon >
    pub const m_sVMName: usize = 0xEA8; // CUtlSymbolLarge
    pub const m_sAnimationPrefix: usize = 0xEB0; // CUtlSymbolLarge
    pub const m_hWeaponModel: usize = 0xEB8; // CHandle< C_ViewmodelWeapon >
    pub const m_iCameraAttachment: usize = 0xEBC; // AttachmentHandle_t
    pub const m_vecLastCameraAngles: usize = 0xEC0; // QAngle
    pub const m_previousElapsedDuration: usize = 0xECC; // float32
    pub const m_previousCycle: usize = 0xED0; // float32
    pub const m_nOldAnimationParity: usize = 0xED4; // int32
    pub const m_hOldLayerSequence: usize = 0xED8; // HSequence
    pub const m_oldLayer: usize = 0xEDC; // int32
    pub const m_oldLayerStartTime: usize = 0xEE0; // float32
    pub const m_hControlPanel: usize = 0xEE4; // CHandle< C_BaseEntity >
}

pub mod C_Beam {
    pub const m_flFrameRate: usize = 0xCC0; // float32
    pub const m_flHDRColorScale: usize = 0xCC4; // float32
    pub const m_flFireTime: usize = 0xCC8; // GameTime_t
    pub const m_flDamage: usize = 0xCCC; // float32
    pub const m_nNumBeamEnts: usize = 0xCD0; // uint8
    pub const m_queryHandleHalo: usize = 0xCD4; // int32
    pub const m_hBaseMaterial: usize = 0xCF8; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    pub const m_nHaloIndex: usize = 0xD00; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    pub const m_nBeamType: usize = 0xD08; // BeamType_t
    pub const m_nBeamFlags: usize = 0xD0C; // uint32
    pub const m_hAttachEntity: usize = 0xD10; // CHandle< C_BaseEntity >[10]
    pub const m_nAttachIndex: usize = 0xD38; // AttachmentHandle_t[10]
    pub const m_fWidth: usize = 0xD44; // float32
    pub const m_fEndWidth: usize = 0xD48; // float32
    pub const m_fFadeLength: usize = 0xD4C; // float32
    pub const m_fHaloScale: usize = 0xD50; // float32
    pub const m_fAmplitude: usize = 0xD54; // float32
    pub const m_fStartFrame: usize = 0xD58; // float32
    pub const m_fSpeed: usize = 0xD5C; // float32
    pub const m_flFrame: usize = 0xD60; // float32
    pub const m_nClipStyle: usize = 0xD64; // BeamClipStyle_t
    pub const m_bTurnedOff: usize = 0xD68; // bool
    pub const m_vecEndPos: usize = 0xD6C; // Vector
    pub const m_hEndEntity: usize = 0xD78; // CHandle< C_BaseEntity >
}

pub mod C_BreakableProp {
    pub const m_OnBreak: usize = 0xEC8; // CEntityIOOutput
    pub const m_OnHealthChanged: usize = 0xEF0; // CEntityOutputTemplate< float32 >
    pub const m_OnTakeDamage: usize = 0xF18; // CEntityIOOutput
    pub const m_impactEnergyScale: usize = 0xF40; // float32
    pub const m_iMinHealthDmg: usize = 0xF44; // int32
    pub const m_flPressureDelay: usize = 0xF48; // float32
    pub const m_hBreaker: usize = 0xF4C; // CHandle< C_BaseEntity >
    pub const m_PerformanceMode: usize = 0xF50; // PerformanceMode_t
    pub const m_flDmgModBullet: usize = 0xF54; // float32
    pub const m_flDmgModClub: usize = 0xF58; // float32
    pub const m_flDmgModExplosive: usize = 0xF5C; // float32
    pub const m_flDmgModFire: usize = 0xF60; // float32
    pub const m_iszPhysicsDamageTableName: usize = 0xF68; // CUtlSymbolLarge
    pub const m_iszBasePropData: usize = 0xF70; // CUtlSymbolLarge
    pub const m_iInteractions: usize = 0xF78; // int32
    pub const m_flPreventDamageBeforeTime: usize = 0xF7C; // GameTime_t
    pub const m_bHasBreakPiecesOrCommands: usize = 0xF80; // bool
    pub const m_explodeDamage: usize = 0xF84; // float32
    pub const m_explodeRadius: usize = 0xF88; // float32
    pub const m_explosionDelay: usize = 0xF90; // float32
    pub const m_explosionBuildupSound: usize = 0xF98; // CUtlSymbolLarge
    pub const m_explosionCustomEffect: usize = 0xFA0; // CUtlSymbolLarge
    pub const m_explosionCustomSound: usize = 0xFA8; // CUtlSymbolLarge
    pub const m_explosionModifier: usize = 0xFB0; // CUtlSymbolLarge
    pub const m_hPhysicsAttacker: usize = 0xFB8; // CHandle< C_BasePlayerPawn >
    pub const m_flLastPhysicsInfluenceTime: usize = 0xFBC; // GameTime_t
    pub const m_flDefaultFadeScale: usize = 0xFC0; // float32
    pub const m_hLastAttacker: usize = 0xFC4; // CHandle< C_BaseEntity >
    pub const m_hFlareEnt: usize = 0xFC8; // CHandle< C_BaseEntity >
    pub const m_noGhostCollision: usize = 0xFCC; // bool
}

pub mod C_BulletHitModel {
    pub const m_matLocal: usize = 0xE80; // matrix3x4_t
    pub const m_iBoneIndex: usize = 0xEB0; // int32
    pub const m_hPlayerParent: usize = 0xEB4; // CHandle< C_BaseEntity >
    pub const m_bIsHit: usize = 0xEB8; // bool
    pub const m_flTimeCreated: usize = 0xEBC; // float32
    pub const m_vecStartPos: usize = 0xEC0; // Vector
}

pub mod C_C4 {
    pub const m_szScreenText: usize = 0x18E0; // char[32]
    pub const m_bombdroppedlightParticleIndex: usize = 0x1900; // ParticleIndex_t
    pub const m_bStartedArming: usize = 0x1904; // bool
    pub const m_fArmedTime: usize = 0x1908; // GameTime_t
    pub const m_bBombPlacedAnimation: usize = 0x190C; // bool
    pub const m_bIsPlantingViaUse: usize = 0x190D; // bool
    pub const m_entitySpottedState: usize = 0x1910; // EntitySpottedState_t
    pub const m_nSpotRules: usize = 0x1928; // int32
    pub const m_bPlayedArmingBeeps: usize = 0x192C; // bool[7]
    pub const m_bBombPlanted: usize = 0x1933; // bool
    pub const m_bDroppedFromDeath: usize = 0x1934; // bool
}

pub mod C_CSGOViewModel {
    pub const m_bShouldIgnoreOffsetAndAccuracy: usize = 0xF10; // bool
    pub const m_nWeaponParity: usize = 0xF14; // uint32
    pub const m_nOldWeaponParity: usize = 0xF18; // uint32
    pub const m_nLastKnownAssociatedWeaponEntIndex: usize = 0xF1C; // CEntityIndex
    pub const m_bNeedToQueueHighResComposite: usize = 0xF20; // bool
    pub const m_vLoweredWeaponOffset: usize = 0xF64; // QAngle
}

pub mod C_CSGO_MapPreviewCameraPath {
    pub const m_flZFar: usize = 0x540; // float32
    pub const m_flZNear: usize = 0x544; // float32
    pub const m_bLoop: usize = 0x548; // bool
    pub const m_bVerticalFOV: usize = 0x549; // bool
    pub const m_bConstantSpeed: usize = 0x54A; // bool
    pub const m_flDuration: usize = 0x54C; // float32
    pub const m_flPathLength: usize = 0x590; // float32
    pub const m_flPathDuration: usize = 0x594; // float32
}

pub mod C_CSGO_MapPreviewCameraPathNode {
    pub const m_szParentPathUniqueID: usize = 0x540; // CUtlSymbolLarge
    pub const m_nPathIndex: usize = 0x548; // int32
    pub const m_vInTangentLocal: usize = 0x54C; // Vector
    pub const m_vOutTangentLocal: usize = 0x558; // Vector
    pub const m_flFOV: usize = 0x564; // float32
    pub const m_flSpeed: usize = 0x568; // float32
    pub const m_flEaseIn: usize = 0x56C; // float32
    pub const m_flEaseOut: usize = 0x570; // float32
    pub const m_vInTangentWorld: usize = 0x574; // Vector
    pub const m_vOutTangentWorld: usize = 0x580; // Vector
}

pub mod C_CSGO_PreviewModel {
    pub const m_animgraph: usize = 0x1018; // CUtlString
    pub const m_animgraphCharacterModeString: usize = 0x1020; // CUtlString
    pub const m_defaultAnim: usize = 0x1028; // CUtlString
    pub const m_nDefaultAnimLoopMode: usize = 0x1030; // AnimLoopMode_t
    pub const m_flInitialModelScale: usize = 0x1034; // float32
}

pub mod C_CSGO_PreviewPlayer {
    pub const m_animgraph: usize = 0x22A0; // CUtlString
    pub const m_animgraphCharacterModeString: usize = 0x22A8; // CUtlString
    pub const m_flInitialModelScale: usize = 0x22B0; // float32
}

pub mod C_CSGO_TeamPreviewCamera {
    pub const m_nVariant: usize = 0x5A0; // int32
    pub const m_bDofEnabled: usize = 0x5A4; // bool
    pub const m_flDofNearBlurry: usize = 0x5A8; // float32
    pub const m_flDofNearCrisp: usize = 0x5AC; // float32
    pub const m_flDofFarCrisp: usize = 0x5B0; // float32
    pub const m_flDofFarBlurry: usize = 0x5B4; // float32
    pub const m_flDofTiltToGround: usize = 0x5B8; // float32
}

pub mod C_CSGO_TeamPreviewCharacterPosition {
    pub const m_nVariant: usize = 0x540; // int32
    pub const m_nRandom: usize = 0x544; // int32
    pub const m_nOrdinal: usize = 0x548; // int32
    pub const m_sWeaponName: usize = 0x550; // CUtlString
    pub const m_xuid: usize = 0x558; // uint64
    pub const m_weaponItem: usize = 0x560; // C_EconItemView
}

pub mod C_CSGameRules {
    pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
    pub const m_bFreezePeriod: usize = 0x30; // bool
    pub const m_bWarmupPeriod: usize = 0x31; // bool
    pub const m_fWarmupPeriodEnd: usize = 0x34; // GameTime_t
    pub const m_fWarmupPeriodStart: usize = 0x38; // GameTime_t
    pub const m_nTotalPausedTicks: usize = 0x3C; // int32
    pub const m_nPauseStartTick: usize = 0x40; // int32
    pub const m_bServerPaused: usize = 0x44; // bool
    pub const m_bGamePaused: usize = 0x45; // bool
    pub const m_bTerroristTimeOutActive: usize = 0x46; // bool
    pub const m_bCTTimeOutActive: usize = 0x47; // bool
    pub const m_flTerroristTimeOutRemaining: usize = 0x48; // float32
    pub const m_flCTTimeOutRemaining: usize = 0x4C; // float32
    pub const m_nTerroristTimeOuts: usize = 0x50; // int32
    pub const m_nCTTimeOuts: usize = 0x54; // int32
    pub const m_bTechnicalTimeOut: usize = 0x58; // bool
    pub const m_bMatchWaitingForResume: usize = 0x59; // bool
    pub const m_iRoundTime: usize = 0x5C; // int32
    pub const m_fMatchStartTime: usize = 0x60; // float32
    pub const m_fRoundStartTime: usize = 0x64; // GameTime_t
    pub const m_flRestartRoundTime: usize = 0x68; // GameTime_t
    pub const m_bGameRestart: usize = 0x6C; // bool
    pub const m_flGameStartTime: usize = 0x70; // float32
    pub const m_timeUntilNextPhaseStarts: usize = 0x74; // float32
    pub const m_gamePhase: usize = 0x78; // int32
    pub const m_totalRoundsPlayed: usize = 0x7C; // int32
    pub const m_nRoundsPlayedThisPhase: usize = 0x80; // int32
    pub const m_nOvertimePlaying: usize = 0x84; // int32
    pub const m_iHostagesRemaining: usize = 0x88; // int32
    pub const m_bAnyHostageReached: usize = 0x8C; // bool
    pub const m_bMapHasBombTarget: usize = 0x8D; // bool
    pub const m_bMapHasRescueZone: usize = 0x8E; // bool
    pub const m_bMapHasBuyZone: usize = 0x8F; // bool
    pub const m_bIsQueuedMatchmaking: usize = 0x90; // bool
    pub const m_nQueuedMatchmakingMode: usize = 0x94; // int32
    pub const m_bIsValveDS: usize = 0x98; // bool
    pub const m_bLogoMap: usize = 0x99; // bool
    pub const m_bPlayAllStepSoundsOnServer: usize = 0x9A; // bool
    pub const m_iSpectatorSlotCount: usize = 0x9C; // int32
    pub const m_MatchDevice: usize = 0xA0; // int32
    pub const m_bHasMatchStarted: usize = 0xA4; // bool
    pub const m_nNextMapInMapgroup: usize = 0xA8; // int32
    pub const m_szTournamentEventName: usize = 0xAC; // char[512]
    pub const m_szTournamentEventStage: usize = 0x2AC; // char[512]
    pub const m_szMatchStatTxt: usize = 0x4AC; // char[512]
    pub const m_szTournamentPredictionsTxt: usize = 0x6AC; // char[512]
    pub const m_nTournamentPredictionsPct: usize = 0x8AC; // int32
    pub const m_flCMMItemDropRevealStartTime: usize = 0x8B0; // GameTime_t
    pub const m_flCMMItemDropRevealEndTime: usize = 0x8B4; // GameTime_t
    pub const m_bIsDroppingItems: usize = 0x8B8; // bool
    pub const m_bIsQuestEligible: usize = 0x8B9; // bool
    pub const m_nGuardianModeWaveNumber: usize = 0x8BC; // int32
    pub const m_nGuardianModeSpecialKillsRemaining: usize = 0x8C0; // int32
    pub const m_nGuardianModeSpecialWeaponNeeded: usize = 0x8C4; // int32
    pub const m_nGuardianGrenadesToGiveBots: usize = 0x8C8; // int32
    pub const m_nNumHeaviesToSpawn: usize = 0x8CC; // int32
    pub const m_numGlobalGiftsGiven: usize = 0x8D0; // uint32
    pub const m_numGlobalGifters: usize = 0x8D4; // uint32
    pub const m_numGlobalGiftsPeriodSeconds: usize = 0x8D8; // uint32
    pub const m_arrFeaturedGiftersAccounts: usize = 0x8DC; // uint32[4]
    pub const m_arrFeaturedGiftersGifts: usize = 0x8EC; // uint32[4]
    pub const m_arrProhibitedItemIndices: usize = 0x8FC; // uint16[100]
    pub const m_arrTournamentActiveCasterAccounts: usize = 0x9C4; // uint32[4]
    pub const m_numBestOfMaps: usize = 0x9D4; // int32
    pub const m_nHalloweenMaskListSeed: usize = 0x9D8; // int32
    pub const m_bBombDropped: usize = 0x9DC; // bool
    pub const m_bBombPlanted: usize = 0x9DD; // bool
    pub const m_iRoundWinStatus: usize = 0x9E0; // int32
    pub const m_eRoundWinReason: usize = 0x9E4; // int32
    pub const m_bTCantBuy: usize = 0x9E8; // bool
    pub const m_bCTCantBuy: usize = 0x9E9; // bool
    pub const m_flGuardianBuyUntilTime: usize = 0x9EC; // GameTime_t
    pub const m_iMatchStats_RoundResults: usize = 0x9F0; // int32[30]
    pub const m_iMatchStats_PlayersAlive_CT: usize = 0xA68; // int32[30]
    pub const m_iMatchStats_PlayersAlive_T: usize = 0xAE0; // int32[30]
    pub const m_TeamRespawnWaveTimes: usize = 0xB58; // float32[32]
    pub const m_flNextRespawnWave: usize = 0xBD8; // GameTime_t[32]
    pub const m_nServerQuestID: usize = 0xC58; // int32
    pub const m_vMinimapMins: usize = 0xC5C; // Vector
    pub const m_vMinimapMaxs: usize = 0xC68; // Vector
    pub const m_MinimapVerticalSectionHeights: usize = 0xC74; // float32[8]
    pub const m_bDontIncrementCoopWave: usize = 0xC94; // bool
    pub const m_bSpawnedTerrorHuntHeavy: usize = 0xC95; // bool
    pub const m_nEndMatchMapGroupVoteTypes: usize = 0xC98; // int32[10]
    pub const m_nEndMatchMapGroupVoteOptions: usize = 0xCC0; // int32[10]
    pub const m_nEndMatchMapVoteWinner: usize = 0xCE8; // int32
    pub const m_iNumConsecutiveCTLoses: usize = 0xCEC; // int32
    pub const m_iNumConsecutiveTerroristLoses: usize = 0xCF0; // int32
    pub const m_bMarkClientStopRecordAtRoundEnd: usize = 0xD10; // bool
    pub const m_bMatchAbortedDueToPlayerBan: usize = 0xD68; // bool
    pub const m_bHasTriggeredRoundStartMusic: usize = 0xD69; // bool
    pub const m_bHasTriggeredCoopSpawnReset: usize = 0xD6A; // bool
    pub const m_bSwitchingTeamsAtRoundReset: usize = 0xD6B; // bool
    pub const m_pGameModeRules: usize = 0xD88; // CCSGameModeRules*
    pub const m_RetakeRules: usize = 0xD90; // C_RetakeGameRules
    pub const m_nMatchEndCount: usize = 0xEA8; // uint8
    pub const m_nTTeamIntroVariant: usize = 0xEAC; // int32
    pub const m_nCTTeamIntroVariant: usize = 0xEB0; // int32
    pub const m_bTeamIntroPeriod: usize = 0xEB4; // bool
    pub const m_flLastPerfSampleTime: usize = 0x1E70; // float64
    pub const m_bSkipNextPerfSample: usize = 0x1E78; // bool
}

pub mod C_CSGameRulesProxy {
    pub const m_pGameRules: usize = 0x540; // C_CSGameRules*
}

pub mod C_CSObserverPawn {
    pub const m_hDetectParentChange: usize = 0x16A0; // CEntityHandle
}

pub mod C_CSPlayerPawn {
    pub const m_pBulletServices: usize = 0x16A0; // CCSPlayer_BulletServices*
    pub const m_pHostageServices: usize = 0x16A8; // CCSPlayer_HostageServices*
    pub const m_pBuyServices: usize = 0x16B0; // CCSPlayer_BuyServices*
    pub const m_pGlowServices: usize = 0x16B8; // CCSPlayer_GlowServices*
    pub const m_pActionTrackingServices: usize = 0x16C0; // CCSPlayer_ActionTrackingServices*
    pub const m_flHealthShotBoostExpirationTime: usize = 0x16C8; // GameTime_t
    pub const m_flLastFiredWeaponTime: usize = 0x16CC; // GameTime_t
    pub const m_bHasFemaleVoice: usize = 0x16D0; // bool
    pub const m_flLandseconds: usize = 0x16D4; // float32
    pub const m_flOldFallVelocity: usize = 0x16D8; // float32
    pub const m_szLastPlaceName: usize = 0x16DC; // char[18]
    pub const m_bPrevDefuser: usize = 0x16EE; // bool
    pub const m_bPrevHelmet: usize = 0x16EF; // bool
    pub const m_nPrevArmorVal: usize = 0x16F0; // int32
    pub const m_nPrevGrenadeAmmoCount: usize = 0x16F4; // int32
    pub const m_unPreviousWeaponHash: usize = 0x16F8; // uint32
    pub const m_unWeaponHash: usize = 0x16FC; // uint32
    pub const m_bInBuyZone: usize = 0x1700; // bool
    pub const m_bPreviouslyInBuyZone: usize = 0x1701; // bool
    pub const m_aimPunchAngle: usize = 0x1704; // QAngle
    pub const m_aimPunchAngleVel: usize = 0x1710; // QAngle
    pub const m_aimPunchTickBase: usize = 0x171C; // int32
    pub const m_aimPunchTickFraction: usize = 0x1720; // float32
    pub const m_aimPunchCache: usize = 0x1728; // CUtlVector< QAngle >
    pub const m_bInLanding: usize = 0x1748; // bool
    pub const m_flLandingTime: usize = 0x174C; // float32
    pub const m_bInHostageRescueZone: usize = 0x1750; // bool
    pub const m_bInBombZone: usize = 0x1751; // bool
    pub const m_bIsBuyMenuOpen: usize = 0x1752; // bool
    pub const m_flTimeOfLastInjury: usize = 0x1754; // GameTime_t
    pub const m_flNextSprayDecalTime: usize = 0x1758; // GameTime_t
    pub const m_iRetakesOffering: usize = 0x1870; // int32
    pub const m_iRetakesOfferingCard: usize = 0x1874; // int32
    pub const m_bRetakesHasDefuseKit: usize = 0x1878; // bool
    pub const m_bRetakesMVPLastRound: usize = 0x1879; // bool
    pub const m_iRetakesMVPBoostItem: usize = 0x187C; // int32
    pub const m_RetakesMVPBoostExtraUtility: usize = 0x1880; // loadout_slot_t
    pub const m_bNeedToReApplyGloves: usize = 0x18A0; // bool
    pub const m_EconGloves: usize = 0x18A8; // C_EconItemView
    pub const m_bMustSyncRagdollState: usize = 0x1CF0; // bool
    pub const m_nRagdollDamageBone: usize = 0x1CF4; // int32
    pub const m_vRagdollDamageForce: usize = 0x1CF8; // Vector
    pub const m_vRagdollDamagePosition: usize = 0x1D04; // Vector
    pub const m_szRagdollDamageWeaponName: usize = 0x1D10; // char[64]
    pub const m_bRagdollDamageHeadshot: usize = 0x1D50; // bool
    pub const m_bLastHeadBoneTransformIsValid: usize = 0x2270; // bool
    pub const m_lastLandTime: usize = 0x2274; // GameTime_t
    pub const m_qDeathEyeAngles: usize = 0x2290; // QAngle
    pub const m_bSkipOneHeadConstraintUpdate: usize = 0x229C; // bool
}

pub mod C_CSPlayerPawnBase {
    pub const m_pPingServices: usize = 0x1250; // CCSPlayer_PingServices*
    pub const m_pViewModelServices: usize = 0x1258; // CPlayer_ViewModelServices*
    pub const m_fRenderingClipPlane: usize = 0x1260; // float32[4]
    pub const m_nLastClipPlaneSetupFrame: usize = 0x1270; // int32
    pub const m_vecLastClipCameraPos: usize = 0x1274; // Vector
    pub const m_vecLastClipCameraForward: usize = 0x1280; // Vector
    pub const m_bClipHitStaticWorld: usize = 0x128C; // bool
    pub const m_bCachedPlaneIsValid: usize = 0x128D; // bool
    pub const m_pClippingWeapon: usize = 0x1290; // C_CSWeaponBase*
    pub const m_previousPlayerState: usize = 0x1298; // CSPlayerState
    pub const m_flLastCollisionCeiling: usize = 0x129C; // float32
    pub const m_flLastCollisionCeilingChangeTime: usize = 0x12A0; // float32
    pub const m_grenadeParameterStashTime: usize = 0x12C0; // GameTime_t
    pub const m_bGrenadeParametersStashed: usize = 0x12C4; // bool
    pub const m_angStashedShootAngles: usize = 0x12C8; // QAngle
    pub const m_vecStashedGrenadeThrowPosition: usize = 0x12D4; // Vector
    pub const m_vecStashedVelocity: usize = 0x12E0; // Vector
    pub const m_angShootAngleHistory: usize = 0x12EC; // QAngle[2]
    pub const m_vecThrowPositionHistory: usize = 0x1304; // Vector[2]
    pub const m_vecVelocityHistory: usize = 0x131C; // Vector[2]
    pub const m_thirdPersonHeading: usize = 0x1338; // QAngle
    pub const m_flSlopeDropOffset: usize = 0x1350; // float32
    pub const m_flSlopeDropHeight: usize = 0x1360; // float32
    pub const m_vHeadConstraintOffset: usize = 0x1370; // Vector
    pub const m_bIsScoped: usize = 0x1388; // bool
    pub const m_bIsWalking: usize = 0x1389; // bool
    pub const m_bResumeZoom: usize = 0x138A; // bool
    pub const m_iPlayerState: usize = 0x138C; // CSPlayerState
    pub const m_bIsDefusing: usize = 0x1390; // bool
    pub const m_bIsGrabbingHostage: usize = 0x1391; // bool
    pub const m_iBlockingUseActionInProgress: usize = 0x1394; // CSPlayerBlockingUseAction_t
    pub const m_bIsRescuing: usize = 0x1398; // bool
    pub const m_fImmuneToGunGameDamageTime: usize = 0x139C; // GameTime_t
    pub const m_fImmuneToGunGameDamageTimeLast: usize = 0x13A0; // GameTime_t
    pub const m_bGunGameImmunity: usize = 0x13A4; // bool
    pub const m_bHasMovedSinceSpawn: usize = 0x13A5; // bool
    pub const m_unTotalRoundDamageDealt: usize = 0x13A8; // uint32
    pub const m_fMolotovUseTime: usize = 0x13AC; // float32
    pub const m_fMolotovDamageTime: usize = 0x13B0; // float32
    pub const m_nWhichBombZone: usize = 0x13B4; // int32
    pub const m_bInNoDefuseArea: usize = 0x13B8; // bool
    pub const m_iThrowGrenadeCounter: usize = 0x13BC; // int32
    pub const m_bWaitForNoAttack: usize = 0x13C0; // bool
    pub const m_flGuardianTooFarDistFrac: usize = 0x13C4; // float32
    pub const m_flDetectedByEnemySensorTime: usize = 0x13C8; // GameTime_t
    pub const m_flNextGuardianTooFarWarning: usize = 0x13CC; // float32
    pub const m_bSuppressGuardianTooFarWarningAudio: usize = 0x13D0; // bool
    pub const m_bKilledByTaser: usize = 0x13D1; // bool
    pub const m_iMoveState: usize = 0x13D4; // int32
    pub const m_bCanMoveDuringFreezePeriod: usize = 0x13D8; // bool
    pub const m_flLowerBodyYawTarget: usize = 0x13DC; // float32
    pub const m_bStrafing: usize = 0x13E0; // bool
    pub const m_flLastSpawnTimeIndex: usize = 0x13E4; // GameTime_t
    pub const m_flEmitSoundTime: usize = 0x13E8; // GameTime_t
    pub const m_iAddonBits: usize = 0x13EC; // int32
    pub const m_iPrimaryAddon: usize = 0x13F0; // int32
    pub const m_iSecondaryAddon: usize = 0x13F4; // int32
    pub const m_iProgressBarDuration: usize = 0x13F8; // int32
    pub const m_flProgressBarStartTime: usize = 0x13FC; // float32
    pub const m_iDirection: usize = 0x1400; // int32
    pub const m_iShotsFired: usize = 0x1404; // int32
    pub const m_bNightVisionOn: usize = 0x1408; // bool
    pub const m_bHasNightVision: usize = 0x1409; // bool
    pub const m_flVelocityModifier: usize = 0x140C; // float32
    pub const m_flHitHeading: usize = 0x1410; // float32
    pub const m_nHitBodyPart: usize = 0x1414; // int32
    pub const m_iStartAccount: usize = 0x1418; // int32
    pub const m_vecIntroStartEyePosition: usize = 0x141C; // Vector
    pub const m_vecIntroStartPlayerForward: usize = 0x1428; // Vector
    pub const m_flClientDeathTime: usize = 0x1434; // GameTime_t
    pub const m_flNightVisionAlpha: usize = 0x1438; // float32
    pub const m_bScreenTearFrameCaptured: usize = 0x143C; // bool
    pub const m_flFlashBangTime: usize = 0x1440; // float32
    pub const m_flFlashScreenshotAlpha: usize = 0x1444; // float32
    pub const m_flFlashOverlayAlpha: usize = 0x1448; // float32
    pub const m_bFlashBuildUp: usize = 0x144C; // bool
    pub const m_bFlashDspHasBeenCleared: usize = 0x144D; // bool
    pub const m_bFlashScreenshotHasBeenGrabbed: usize = 0x144E; // bool
    pub const m_flFlashMaxAlpha: usize = 0x1450; // float32
    pub const m_flFlashDuration: usize = 0x1454; // float32
    pub const m_lastStandingPos: usize = 0x1458; // Vector
    pub const m_vecLastMuzzleFlashPos: usize = 0x1464; // Vector
    pub const m_angLastMuzzleFlashAngle: usize = 0x1470; // QAngle
    pub const m_hMuzzleFlashShape: usize = 0x147C; // CHandle< C_BaseEntity >
    pub const m_iHealthBarRenderMaskIndex: usize = 0x1480; // int32
    pub const m_flHealthFadeValue: usize = 0x1484; // float32
    pub const m_flHealthFadeAlpha: usize = 0x1488; // float32
    pub const m_nMyCollisionGroup: usize = 0x148C; // int32
    pub const m_ignoreLadderJumpTime: usize = 0x1490; // float32
    pub const m_ladderSurpressionTimer: usize = 0x1498; // CountdownTimer
    pub const m_lastLadderNormal: usize = 0x14B0; // Vector
    pub const m_lastLadderPos: usize = 0x14BC; // Vector
    pub const m_flDeathCCWeight: usize = 0x14D0; // float32
    pub const m_bOldIsScoped: usize = 0x14D4; // bool
    pub const m_flPrevRoundEndTime: usize = 0x14D8; // float32
    pub const m_flPrevMatchEndTime: usize = 0x14DC; // float32
    pub const m_unCurrentEquipmentValue: usize = 0x14E0; // uint16
    pub const m_unRoundStartEquipmentValue: usize = 0x14E2; // uint16
    pub const m_unFreezetimeEndEquipmentValue: usize = 0x14E4; // uint16
    pub const m_vecThirdPersonViewPositionOverride: usize = 0x14E8; // Vector
    pub const m_nHeavyAssaultSuitCooldownRemaining: usize = 0x14F4; // int32
    pub const m_ArmorValue: usize = 0x14F8; // int32
    pub const m_angEyeAngles: usize = 0x1500; // QAngle
    pub const m_fNextThinkPushAway: usize = 0x1518; // float32
    pub const m_bShouldAutobuyDMWeapons: usize = 0x151C; // bool
    pub const m_bShouldAutobuyNow: usize = 0x151D; // bool
    pub const m_bHud_MiniScoreHidden: usize = 0x151E; // bool
    pub const m_bHud_RadarHidden: usize = 0x151F; // bool
    pub const m_nLastKillerIndex: usize = 0x1520; // CEntityIndex
    pub const m_nLastConcurrentKilled: usize = 0x1524; // int32
    pub const m_nDeathCamMusic: usize = 0x1528; // int32
    pub const m_iIDEntIndex: usize = 0x152C; // CEntityIndex
    pub const m_delayTargetIDTimer: usize = 0x1530; // CountdownTimer
    pub const m_iTargetedWeaponEntIndex: usize = 0x1548; // CEntityIndex
    pub const m_iOldIDEntIndex: usize = 0x154C; // CEntityIndex
    pub const m_holdTargetIDTimer: usize = 0x1550; // CountdownTimer
    pub const m_flCurrentMusicStartTime: usize = 0x156C; // float32
    pub const m_flMusicRoundStartTime: usize = 0x1570; // float32
    pub const m_bDeferStartMusicOnWarmup: usize = 0x1574; // bool
    pub const m_cycleLatch: usize = 0x1578; // int32
    pub const m_serverIntendedCycle: usize = 0x157C; // float32
    pub const m_vecPlayerPatchEconIndices: usize = 0x1580; // uint32[5]
    pub const m_bHideTargetID: usize = 0x159C; // bool
    pub const m_nextTaserShakeTime: usize = 0x15A0; // float32
    pub const m_firstTaserShakeTime: usize = 0x15A4; // float32
    pub const m_flLastSmokeOverlayAlpha: usize = 0x15A8; // float32
    pub const m_vLastSmokeOverlayColor: usize = 0x15AC; // Vector
    pub const m_nPlayerSmokedFx: usize = 0x15B8; // ParticleIndex_t
    pub const m_flNextMagDropTime: usize = 0x15BC; // float32
    pub const m_nLastMagDropAttachmentIndex: usize = 0x15C0; // int32
    pub const m_vecBulletHitModels: usize = 0x15C8; // CUtlVector< C_BulletHitModel* >
    pub const m_vecPickupModelSlerpers: usize = 0x15E0; // CUtlVector< C_PickUpModelSlerper* >
    pub const m_vecLastAliveLocalVelocity: usize = 0x15F8; // Vector
    pub const m_entitySpottedState: usize = 0x1620; // EntitySpottedState_t
    pub const m_nSurvivalTeamNumber: usize = 0x1638; // int32
    pub const m_bGuardianShouldSprayCustomXMark: usize = 0x163C; // bool
    pub const m_bHasDeathInfo: usize = 0x163D; // bool
    pub const m_flDeathInfoTime: usize = 0x1640; // float32
    pub const m_vecDeathInfoOrigin: usize = 0x1644; // Vector
    pub const m_bKilledByHeadshot: usize = 0x1650; // bool
    pub const m_hOriginalController: usize = 0x1654; // CHandle< CCSPlayerController >
}

pub mod C_CSPlayerResource {
    pub const m_bHostageAlive: usize = 0x540; // bool[12]
    pub const m_isHostageFollowingSomeone: usize = 0x54C; // bool[12]
    pub const m_iHostageEntityIDs: usize = 0x558; // CEntityIndex[12]
    pub const m_bombsiteCenterA: usize = 0x588; // Vector
    pub const m_bombsiteCenterB: usize = 0x594; // Vector
    pub const m_hostageRescueX: usize = 0x5A0; // int32[4]
    pub const m_hostageRescueY: usize = 0x5B0; // int32[4]
    pub const m_hostageRescueZ: usize = 0x5C0; // int32[4]
    pub const m_bEndMatchNextMapAllVoted: usize = 0x5D0; // bool
    pub const m_foundGoalPositions: usize = 0x5D1; // bool
}

pub mod C_CSTeam {
    pub const m_szTeamMatchStat: usize = 0x5F8; // char[512]
    pub const m_numMapVictories: usize = 0x7F8; // int32
    pub const m_bSurrendered: usize = 0x7FC; // bool
    pub const m_scoreFirstHalf: usize = 0x800; // int32
    pub const m_scoreSecondHalf: usize = 0x804; // int32
    pub const m_scoreOvertime: usize = 0x808; // int32
    pub const m_szClanTeamname: usize = 0x80C; // char[129]
    pub const m_iClanID: usize = 0x890; // uint32
    pub const m_szTeamFlagImage: usize = 0x894; // char[8]
    pub const m_szTeamLogoImage: usize = 0x89C; // char[8]
}

pub mod C_CSWeaponBase {
    pub const m_flFireSequenceStartTime: usize = 0x15D0; // float32
    pub const m_nFireSequenceStartTimeChange: usize = 0x15D4; // int32
    pub const m_nFireSequenceStartTimeAck: usize = 0x15D8; // int32
    pub const m_bPlayerFireEventIsPrimary: usize = 0x15DC; // bool
    pub const m_seqIdle: usize = 0x15E0; // HSequence
    pub const m_seqFirePrimary: usize = 0x15E4; // HSequence
    pub const m_seqFireSecondary: usize = 0x15E8; // HSequence
    pub const m_iState: usize = 0x1600; // CSWeaponState_t
    pub const m_flCrosshairDistance: usize = 0x1604; // float32
    pub const m_iAmmoLastCheck: usize = 0x1608; // int32
    pub const m_iAlpha: usize = 0x160C; // int32
    pub const m_iScopeTextureID: usize = 0x1610; // int32
    pub const m_iCrosshairTextureID: usize = 0x1614; // int32
    pub const m_flGunAccuracyPosition: usize = 0x1618; // float32
    pub const m_nViewModelIndex: usize = 0x161C; // uint32
    pub const m_bReloadsWithClips: usize = 0x1620; // bool
    pub const m_flTimeWeaponIdle: usize = 0x1624; // GameTime_t
    pub const m_bFireOnEmpty: usize = 0x1628; // bool
    pub const m_OnPlayerPickup: usize = 0x1630; // CEntityIOOutput
    pub const m_weaponMode: usize = 0x1658; // CSWeaponMode
    pub const m_flTurningInaccuracyDelta: usize = 0x165C; // float32
    pub const m_vecTurningInaccuracyEyeDirLast: usize = 0x1660; // Vector
    pub const m_flTurningInaccuracy: usize = 0x166C; // float32
    pub const m_fAccuracyPenalty: usize = 0x1670; // float32
    pub const m_flLastAccuracyUpdateTime: usize = 0x1674; // GameTime_t
    pub const m_fAccuracySmoothedForZoom: usize = 0x1678; // float32
    pub const m_fScopeZoomEndTime: usize = 0x167C; // GameTime_t
    pub const m_iRecoilIndex: usize = 0x1680; // int32
    pub const m_flRecoilIndex: usize = 0x1684; // float32
    pub const m_bBurstMode: usize = 0x1688; // bool
    pub const m_flPostponeFireReadyTime: usize = 0x168C; // GameTime_t
    pub const m_bInReload: usize = 0x1690; // bool
    pub const m_bReloadVisuallyComplete: usize = 0x1691; // bool
    pub const m_flDroppedAtTime: usize = 0x1694; // GameTime_t
    pub const m_bIsHauledBack: usize = 0x1698; // bool
    pub const m_bSilencerOn: usize = 0x1699; // bool
    pub const m_flTimeSilencerSwitchComplete: usize = 0x169C; // GameTime_t
    pub const m_iOriginalTeamNumber: usize = 0x16A0; // int32
    pub const m_flNextAttackRenderTimeOffset: usize = 0x16A4; // float32
    pub const m_bVisualsDataSet: usize = 0x1720; // bool
    pub const m_bOldFirstPersonSpectatedState: usize = 0x1721; // bool
    pub const m_hOurPing: usize = 0x1724; // CHandle< C_BaseEntity >
    pub const m_nOurPingIndex: usize = 0x1728; // CEntityIndex
    pub const m_vecOurPingPos: usize = 0x172C; // Vector
    pub const m_bGlowForPing: usize = 0x1738; // bool
    pub const m_bUIWeapon: usize = 0x1739; // bool
    pub const m_hPrevOwner: usize = 0x1748; // CHandle< C_CSPlayerPawn >
    pub const m_nDropTick: usize = 0x174C; // GameTick_t
    pub const m_donated: usize = 0x176C; // bool
    pub const m_fLastShotTime: usize = 0x1770; // GameTime_t
    pub const m_bWasOwnedByCT: usize = 0x1774; // bool
    pub const m_bWasOwnedByTerrorist: usize = 0x1775; // bool
    pub const m_gunHeat: usize = 0x1778; // float32
    pub const m_smokeAttachments: usize = 0x177C; // uint32
    pub const m_lastSmokeTime: usize = 0x1780; // GameTime_t
    pub const m_flLastClientFireBulletTime: usize = 0x1784; // float32
    pub const m_IronSightController: usize = 0x17E0; // C_IronSightController
    pub const m_iIronSightMode: usize = 0x1890; // int32
    pub const m_flLastLOSTraceFailureTime: usize = 0x18A0; // GameTime_t
    pub const m_iNumEmptyAttacks: usize = 0x18A4; // int32
}

pub mod C_CSWeaponBaseGun {
    pub const m_zoomLevel: usize = 0x18E0; // int32
    pub const m_iBurstShotsRemaining: usize = 0x18E4; // int32
    pub const m_iSilencerBodygroup: usize = 0x18E8; // int32
    pub const m_silencedModelIndex: usize = 0x18F8; // int32
    pub const m_inPrecache: usize = 0x18FC; // bool
    pub const m_bNeedsBoltAction: usize = 0x18FD; // bool
}

pub mod C_Chicken {
    pub const m_hHolidayHatAddon: usize = 0x10F0; // CHandle< CBaseAnimGraph >
    pub const m_jumpedThisFrame: usize = 0x10F4; // bool
    pub const m_leader: usize = 0x10F8; // CHandle< C_CSPlayerPawnBase >
    pub const m_AttributeManager: usize = 0x1100; // C_AttributeContainer
    pub const m_OriginalOwnerXuidLow: usize = 0x15A8; // uint32
    pub const m_OriginalOwnerXuidHigh: usize = 0x15AC; // uint32
    pub const m_bAttributesInitialized: usize = 0x15B0; // bool
    pub const m_hWaterWakeParticles: usize = 0x15B4; // ParticleIndex_t
}

pub mod C_ClientRagdoll {
    pub const m_bFadeOut: usize = 0xE80; // bool
    pub const m_bImportant: usize = 0xE81; // bool
    pub const m_flEffectTime: usize = 0xE84; // GameTime_t
    pub const m_gibDespawnTime: usize = 0xE88; // GameTime_t
    pub const m_iCurrentFriction: usize = 0xE8C; // int32
    pub const m_iMinFriction: usize = 0xE90; // int32
    pub const m_iMaxFriction: usize = 0xE94; // int32
    pub const m_iFrictionAnimState: usize = 0xE98; // int32
    pub const m_bReleaseRagdoll: usize = 0xE9C; // bool
    pub const m_iEyeAttachment: usize = 0xE9D; // AttachmentHandle_t
    pub const m_bFadingOut: usize = 0xE9E; // bool
    pub const m_flScaleEnd: usize = 0xEA0; // float32[10]
    pub const m_flScaleTimeStart: usize = 0xEC8; // GameTime_t[10]
    pub const m_flScaleTimeEnd: usize = 0xEF0; // GameTime_t[10]
}

pub mod C_ColorCorrection {
    pub const m_vecOrigin: usize = 0x540; // Vector
    pub const m_MinFalloff: usize = 0x54C; // float32
    pub const m_MaxFalloff: usize = 0x550; // float32
    pub const m_flFadeInDuration: usize = 0x554; // float32
    pub const m_flFadeOutDuration: usize = 0x558; // float32
    pub const m_flMaxWeight: usize = 0x55C; // float32
    pub const m_flCurWeight: usize = 0x560; // float32
    pub const m_netlookupFilename: usize = 0x564; // char[512]
    pub const m_bEnabled: usize = 0x764; // bool
    pub const m_bMaster: usize = 0x765; // bool
    pub const m_bClientSide: usize = 0x766; // bool
    pub const m_bExclusive: usize = 0x767; // bool
    pub const m_bEnabledOnClient: usize = 0x768; // bool[1]
    pub const m_flCurWeightOnClient: usize = 0x76C; // float32[1]
    pub const m_bFadingIn: usize = 0x770; // bool[1]
    pub const m_flFadeStartWeight: usize = 0x774; // float32[1]
    pub const m_flFadeStartTime: usize = 0x778; // float32[1]
    pub const m_flFadeDuration: usize = 0x77C; // float32[1]
}

pub mod C_ColorCorrectionVolume {
    pub const m_LastEnterWeight: usize = 0xCC8; // float32
    pub const m_LastEnterTime: usize = 0xCCC; // float32
    pub const m_LastExitWeight: usize = 0xCD0; // float32
    pub const m_LastExitTime: usize = 0xCD4; // float32
    pub const m_bEnabled: usize = 0xCD8; // bool
    pub const m_MaxWeight: usize = 0xCDC; // float32
    pub const m_FadeDuration: usize = 0xCE0; // float32
    pub const m_Weight: usize = 0xCE4; // float32
    pub const m_lookupFilename: usize = 0xCE8; // char[512]
}

pub mod C_CommandContext {
    pub const needsprocessing: usize = 0x0; // bool
    pub const command_number: usize = 0x78; // int32
}

pub mod C_CsmFovOverride {
    pub const m_cameraName: usize = 0x540; // CUtlString
    pub const m_flCsmFovOverrideValue: usize = 0x548; // float32
}

pub mod C_DecoyProjectile {
    pub const m_flTimeParticleEffectSpawn: usize = 0x1110; // GameTime_t
}

pub mod C_DynamicLight {
    pub const m_Flags: usize = 0xCC0; // uint8
    pub const m_LightStyle: usize = 0xCC1; // uint8
    pub const m_Radius: usize = 0xCC4; // float32
    pub const m_Exponent: usize = 0xCC8; // int32
    pub const m_InnerAngle: usize = 0xCCC; // float32
    pub const m_OuterAngle: usize = 0xCD0; // float32
    pub const m_SpotRadius: usize = 0xCD4; // float32
}

pub mod C_DynamicProp {
    pub const m_bUseHitboxesForRenderBox: usize = 0xFD0; // bool
    pub const m_bUseAnimGraph: usize = 0xFD1; // bool
    pub const m_pOutputAnimBegun: usize = 0xFD8; // CEntityIOOutput
    pub const m_pOutputAnimOver: usize = 0x1000; // CEntityIOOutput
    pub const m_pOutputAnimLoopCycleOver: usize = 0x1028; // CEntityIOOutput
    pub const m_OnAnimReachedStart: usize = 0x1050; // CEntityIOOutput
    pub const m_OnAnimReachedEnd: usize = 0x1078; // CEntityIOOutput
    pub const m_iszDefaultAnim: usize = 0x10A0; // CUtlSymbolLarge
    pub const m_nDefaultAnimLoopMode: usize = 0x10A8; // AnimLoopMode_t
    pub const m_bAnimateOnServer: usize = 0x10AC; // bool
    pub const m_bRandomizeCycle: usize = 0x10AD; // bool
    pub const m_bStartDisabled: usize = 0x10AE; // bool
    pub const m_bScriptedMovement: usize = 0x10AF; // bool
    pub const m_bFiredStartEndOutput: usize = 0x10B0; // bool
    pub const m_bForceNpcExclude: usize = 0x10B1; // bool
    pub const m_bCreateNonSolid: usize = 0x10B2; // bool
    pub const m_bIsOverrideProp: usize = 0x10B3; // bool
    pub const m_iInitialGlowState: usize = 0x10B4; // int32
    pub const m_nGlowRange: usize = 0x10B8; // int32
    pub const m_nGlowRangeMin: usize = 0x10BC; // int32
    pub const m_glowColor: usize = 0x10C0; // Color
    pub const m_nGlowTeam: usize = 0x10C4; // int32
    pub const m_iCachedFrameCount: usize = 0x10C8; // int32
    pub const m_vecCachedRenderMins: usize = 0x10CC; // Vector
    pub const m_vecCachedRenderMaxs: usize = 0x10D8; // Vector
}

pub mod C_EconEntity {
    pub const m_flFlexDelayTime: usize = 0x1028; // float32
    pub const m_flFlexDelayedWeight: usize = 0x1030; // float32*
    pub const m_bAttributesInitialized: usize = 0x1038; // bool
    pub const m_AttributeManager: usize = 0x1040; // C_AttributeContainer
    pub const m_OriginalOwnerXuidLow: usize = 0x14E8; // uint32
    pub const m_OriginalOwnerXuidHigh: usize = 0x14EC; // uint32
    pub const m_nFallbackPaintKit: usize = 0x14F0; // int32
    pub const m_nFallbackSeed: usize = 0x14F4; // int32
    pub const m_flFallbackWear: usize = 0x14F8; // float32
    pub const m_nFallbackStatTrak: usize = 0x14FC; // int32
    pub const m_bClientside: usize = 0x1500; // bool
    pub const m_bParticleSystemsCreated: usize = 0x1501; // bool
    pub const m_vecAttachedParticles: usize = 0x1508; // CUtlVector< int32 >
    pub const m_hViewmodelAttachment: usize = 0x1520; // CHandle< CBaseAnimGraph >
    pub const m_iOldTeam: usize = 0x1524; // int32
    pub const m_bAttachmentDirty: usize = 0x1528; // bool
    pub const m_nUnloadedModelIndex: usize = 0x152C; // int32
    pub const m_iNumOwnerValidationRetries: usize = 0x1530; // int32
    pub const m_hOldProvidee: usize = 0x1540; // CHandle< C_BaseEntity >
    pub const m_vecAttachedModels: usize = 0x1548; // CUtlVector< C_EconEntity::AttachedModelData_t >
}

pub mod C_EconEntity_AttachedModelData_t {
    pub const m_iModelDisplayFlags: usize = 0x0; // int32
}

pub mod C_EconItemView {
    pub const m_bInventoryImageRgbaRequested: usize = 0x60; // bool
    pub const m_bInventoryImageTriedCache: usize = 0x61; // bool
    pub const m_nInventoryImageRgbaWidth: usize = 0x80; // int32
    pub const m_nInventoryImageRgbaHeight: usize = 0x84; // int32
    pub const m_szCurrentLoadCachedFileName: usize = 0x88; // char[260]
    pub const m_bRestoreCustomMaterialAfterPrecache: usize = 0x1B8; // bool
    pub const m_iItemDefinitionIndex: usize = 0x1BA; // uint16
    pub const m_iEntityQuality: usize = 0x1BC; // int32
    pub const m_iEntityLevel: usize = 0x1C0; // uint32
    pub const m_iItemID: usize = 0x1C8; // uint64
    pub const m_iItemIDHigh: usize = 0x1D0; // uint32
    pub const m_iItemIDLow: usize = 0x1D4; // uint32
    pub const m_iAccountID: usize = 0x1D8; // uint32
    pub const m_iInventoryPosition: usize = 0x1DC; // uint32
    pub const m_bInitialized: usize = 0x1E8; // bool
    pub const m_bIsStoreItem: usize = 0x1E9; // bool
    pub const m_bIsTradeItem: usize = 0x1EA; // bool
    pub const m_iEntityQuantity: usize = 0x1EC; // int32
    pub const m_iRarityOverride: usize = 0x1F0; // int32
    pub const m_iQualityOverride: usize = 0x1F4; // int32
    pub const m_unClientFlags: usize = 0x1F8; // uint8
    pub const m_unOverrideStyle: usize = 0x1F9; // uint8
    pub const m_AttributeList: usize = 0x210; // CAttributeList
    pub const m_NetworkedDynamicAttributes: usize = 0x270; // CAttributeList
    pub const m_szCustomName: usize = 0x2D0; // char[161]
    pub const m_szCustomNameOverride: usize = 0x371; // char[161]
    pub const m_bInitializedTags: usize = 0x440; // bool
}

pub mod C_EconWearable {
    pub const m_nForceSkin: usize = 0x1560; // int32
    pub const m_bAlwaysAllow: usize = 0x1564; // bool
}

pub mod C_EntityDissolve {
    pub const m_flStartTime: usize = 0xCC8; // GameTime_t
    pub const m_flFadeInStart: usize = 0xCCC; // float32
    pub const m_flFadeInLength: usize = 0xCD0; // float32
    pub const m_flFadeOutModelStart: usize = 0xCD4; // float32
    pub const m_flFadeOutModelLength: usize = 0xCD8; // float32
    pub const m_flFadeOutStart: usize = 0xCDC; // float32
    pub const m_flFadeOutLength: usize = 0xCE0; // float32
    pub const m_flNextSparkTime: usize = 0xCE4; // GameTime_t
    pub const m_nDissolveType: usize = 0xCE8; // EntityDisolveType_t
    pub const m_vDissolverOrigin: usize = 0xCEC; // Vector
    pub const m_nMagnitude: usize = 0xCF8; // uint32
    pub const m_bCoreExplode: usize = 0xCFC; // bool
    pub const m_bLinkedToServerEnt: usize = 0xCFD; // bool
}

pub mod C_EntityFlame {
    pub const m_hEntAttached: usize = 0x540; // CHandle< C_BaseEntity >
    pub const m_hOldAttached: usize = 0x568; // CHandle< C_BaseEntity >
    pub const m_bCheapEffect: usize = 0x56C; // bool
}

pub mod C_EnvCombinedLightProbeVolume {
    pub const m_Color: usize = 0x15A8; // Color
    pub const m_flBrightness: usize = 0x15AC; // float32
    pub const m_hCubemapTexture: usize = 0x15B0; // CStrongHandle< InfoForResourceTypeCTextureBase >
    pub const m_bCustomCubemapTexture: usize = 0x15B8; // bool
    pub const m_hLightProbeTexture: usize = 0x15C0; // CStrongHandle< InfoForResourceTypeCTextureBase >
    pub const m_hLightProbeDirectLightIndicesTexture: usize = 0x15C8; // CStrongHandle< InfoForResourceTypeCTextureBase >
    pub const m_hLightProbeDirectLightScalarsTexture: usize = 0x15D0; // CStrongHandle< InfoForResourceTypeCTextureBase >
    pub const m_hLightProbeDirectLightShadowsTexture: usize = 0x15D8; // CStrongHandle< InfoForResourceTypeCTextureBase >
    pub const m_vBoxMins: usize = 0x15E0; // Vector
    pub const m_vBoxMaxs: usize = 0x15EC; // Vector
    pub const m_LightGroups: usize = 0x15F8; // CUtlSymbolLarge
    pub const m_bMoveable: usize = 0x1600; // bool
    pub const m_nHandshake: usize = 0x1604; // int32
    pub const m_nEnvCubeMapArrayIndex: usize = 0x1608; // int32
    pub const m_nPriority: usize = 0x160C; // int32
    pub const m_bStartDisabled: usize = 0x1610; // bool
    pub const m_flEdgeFadeDist: usize = 0x1614; // float32
    pub const m_vEdgeFadeDists: usize = 0x1618; // Vector
    pub const m_nLightProbeSizeX: usize = 0x1624; // int32
    pub const m_nLightProbeSizeY: usize = 0x1628; // int32
    pub const m_nLightProbeSizeZ: usize = 0x162C; // int32
    pub const m_nLightProbeAtlasX: usize = 0x1630; // int32
    pub const m_nLightProbeAtlasY: usize = 0x1634; // int32
    pub const m_nLightProbeAtlasZ: usize = 0x1638; // int32
    pub const m_bEnabled: usize = 0x1651; // bool
}

pub mod C_EnvCubemap {
    pub const m_hCubemapTexture: usize = 0x5C8; // CStrongHandle< InfoForResourceTypeCTextureBase >
    pub const m_bCustomCubemapTexture: usize = 0x5D0; // bool
    pub const m_flInfluenceRadius: usize = 0x5D4; // float32
    pub const m_vBoxProjectMins: usize = 0x5D8; // Vector
    pub const m_vBoxProjectMaxs: usize = 0x5E4; // Vector
    pub const m_LightGroups: usize = 0x5F0; // CUtlSymbolLarge
    pub const m_bMoveable: usize = 0x5F8; // bool
    pub const m_nHandshake: usize = 0x5FC; // int32
    pub const m_nEnvCubeMapArrayIndex: usize = 0x600; // int32
    pub const m_nPriority: usize = 0x604; // int32
    pub const m_flEdgeFadeDist: usize = 0x608; // float32
    pub const m_vEdgeFadeDists: usize = 0x60C; // Vector
    pub const m_flDiffuseScale: usize = 0x618; // float32
    pub const m_bStartDisabled: usize = 0x61C; // bool
    pub const m_bDefaultEnvMap: usize = 0x61D; // bool
    pub const m_bDefaultSpecEnvMap: usize = 0x61E; // bool
    pub const m_bIndoorCubeMap: usize = 0x61F; // bool
    pub const m_bCopyDiffuseFromDefaultCubemap: usize = 0x620; // bool
    pub const m_bEnabled: usize = 0x630; // bool
}

pub mod C_EnvCubemapFog {
    pub const m_flEndDistance: usize = 0x540; // float32
    pub const m_flStartDistance: usize = 0x544; // float32
    pub const m_flFogFalloffExponent: usize = 0x548; // float32
    pub const m_bHeightFogEnabled: usize = 0x54C; // bool
    pub const m_flFogHeightWidth: usize = 0x550; // float32
    pub const m_flFogHeightEnd: usize = 0x554; // float32
    pub const m_flFogHeightStart: usize = 0x558; // float32
    pub const m_flFogHeightExponent: usize = 0x55C; // float32
    pub const m_flLODBias: usize = 0x560; // float32
    pub const m_bActive: usize = 0x564; // bool
    pub const m_bStartDisabled: usize = 0x565; // bool
    pub const m_flFogMaxOpacity: usize = 0x568; // float32
    pub const m_nCubemapSourceType: usize = 0x56C; // int32
    pub const m_hSkyMaterial: usize = 0x570; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    pub const m_iszSkyEntity: usize = 0x578; // CUtlSymbolLarge
    pub const m_hFogCubemapTexture: usize = 0x580; // CStrongHandle< InfoForResourceTypeCTextureBase >
    pub const m_bHasHeightFogEnd: usize = 0x588; // bool
    pub const m_bFirstTime: usize = 0x589; // bool
}

pub mod C_EnvDecal {
    pub const m_hDecalMaterial: usize = 0xCC0; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    pub const m_flWidth: usize = 0xCC8; // float32
    pub const m_flHeight: usize = 0xCCC; // float32
    pub const m_flDepth: usize = 0xCD0; // float32
    pub const m_nRenderOrder: usize = 0xCD4; // uint32
    pub const m_bProjectOnWorld: usize = 0xCD8; // bool
    pub const m_bProjectOnCharacters: usize = 0xCD9; // bool
    pub const m_bProjectOnWater: usize = 0xCDA; // bool
    pub const m_flDepthSortBias: usize = 0xCDC; // float32
}

pub mod C_EnvDetailController {
    pub const m_flFadeStartDist: usize = 0x540; // float32
    pub const m_flFadeEndDist: usize = 0x544; // float32
}

pub mod C_EnvLightProbeVolume {
    pub const m_hLightProbeTexture: usize = 0x1520; // CStrongHandle< InfoForResourceTypeCTextureBase >
    pub const m_hLightProbeDirectLightIndicesTexture: usize = 0x1528; // CStrongHandle< InfoForResourceTypeCTextureBase >
    pub const m_hLightProbeDirectLightScalarsTexture: usize = 0x1530; // CStrongHandle< InfoForResourceTypeCTextureBase >
    pub const m_hLightProbeDirectLightShadowsTexture: usize = 0x1538; // CStrongHandle< InfoForResourceTypeCTextureBase >
    pub const m_vBoxMins: usize = 0x1540; // Vector
    pub const m_vBoxMaxs: usize = 0x154C; // Vector
    pub const m_LightGroups: usize = 0x1558; // CUtlSymbolLarge
    pub const m_bMoveable: usize = 0x1560; // bool
    pub const m_nHandshake: usize = 0x1564; // int32
    pub const m_nPriority: usize = 0x1568; // int32
    pub const m_bStartDisabled: usize = 0x156C; // bool
    pub const m_nLightProbeSizeX: usize = 0x1570; // int32
    pub const m_nLightProbeSizeY: usize = 0x1574; // int32
    pub const m_nLightProbeSizeZ: usize = 0x1578; // int32
    pub const m_nLightProbeAtlasX: usize = 0x157C; // int32
    pub const m_nLightProbeAtlasY: usize = 0x1580; // int32
    pub const m_nLightProbeAtlasZ: usize = 0x1584; // int32
    pub const m_bEnabled: usize = 0x1591; // bool
}

pub mod C_EnvParticleGlow {
    pub const m_flAlphaScale: usize = 0x1270; // float32
    pub const m_flRadiusScale: usize = 0x1274; // float32
    pub const m_flSelfIllumScale: usize = 0x1278; // float32
    pub const m_ColorTint: usize = 0x127C; // Color
    pub const m_hTextureOverride: usize = 0x1280; // CStrongHandle< InfoForResourceTypeCTextureBase >
}

pub mod C_EnvScreenOverlay {
    pub const m_iszOverlayNames: usize = 0x540; // CUtlSymbolLarge[10]
    pub const m_flOverlayTimes: usize = 0x590; // float32[10]
    pub const m_flStartTime: usize = 0x5B8; // GameTime_t
    pub const m_iDesiredOverlay: usize = 0x5BC; // int32
    pub const m_bIsActive: usize = 0x5C0; // bool
    pub const m_bWasActive: usize = 0x5C1; // bool
    pub const m_iCachedDesiredOverlay: usize = 0x5C4; // int32
    pub const m_iCurrentOverlay: usize = 0x5C8; // int32
    pub const m_flCurrentOverlayTime: usize = 0x5CC; // GameTime_t
}

pub mod C_EnvSky {
    pub const m_hSkyMaterial: usize = 0xCC0; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    pub const m_hSkyMaterialLightingOnly: usize = 0xCC8; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    pub const m_bStartDisabled: usize = 0xCD0; // bool
    pub const m_vTintColor: usize = 0xCD1; // Color
    pub const m_vTintColorLightingOnly: usize = 0xCD5; // Color
    pub const m_flBrightnessScale: usize = 0xCDC; // float32
    pub const m_nFogType: usize = 0xCE0; // int32
    pub const m_flFogMinStart: usize = 0xCE4; // float32
    pub const m_flFogMinEnd: usize = 0xCE8; // float32
    pub const m_flFogMaxStart: usize = 0xCEC; // float32
    pub const m_flFogMaxEnd: usize = 0xCF0; // float32
    pub const m_bEnabled: usize = 0xCF4; // bool
}

pub mod C_EnvVolumetricFogController {
    pub const m_flScattering: usize = 0x540; // float32
    pub const m_flAnisotropy: usize = 0x544; // float32
    pub const m_flFadeSpeed: usize = 0x548; // float32
    pub const m_flDrawDistance: usize = 0x54C; // float32
    pub const m_flFadeInStart: usize = 0x550; // float32
    pub const m_flFadeInEnd: usize = 0x554; // float32
    pub const m_flIndirectStrength: usize = 0x558; // float32
    pub const m_nIndirectTextureDimX: usize = 0x55C; // int32
    pub const m_nIndirectTextureDimY: usize = 0x560; // int32
    pub const m_nIndirectTextureDimZ: usize = 0x564; // int32
    pub const m_vBoxMins: usize = 0x568; // Vector
    pub const m_vBoxMaxs: usize = 0x574; // Vector
    pub const m_bActive: usize = 0x580; // bool
    pub const m_flStartAnisoTime: usize = 0x584; // GameTime_t
    pub const m_flStartScatterTime: usize = 0x588; // GameTime_t
    pub const m_flStartDrawDistanceTime: usize = 0x58C; // GameTime_t
    pub const m_flStartAnisotropy: usize = 0x590; // float32
    pub const m_flStartScattering: usize = 0x594; // float32
    pub const m_flStartDrawDistance: usize = 0x598; // float32
    pub const m_flDefaultAnisotropy: usize = 0x59C; // float32
    pub const m_flDefaultScattering: usize = 0x5A0; // float32
    pub const m_flDefaultDrawDistance: usize = 0x5A4; // float32
    pub const m_bStartDisabled: usize = 0x5A8; // bool
    pub const m_bEnableIndirect: usize = 0x5A9; // bool
    pub const m_bIsMaster: usize = 0x5AA; // bool
    pub const m_hFogIndirectTexture: usize = 0x5B0; // CStrongHandle< InfoForResourceTypeCTextureBase >
    pub const m_nForceRefreshCount: usize = 0x5B8; // int32
    pub const m_bFirstTime: usize = 0x5BC; // bool
}

pub mod C_EnvVolumetricFogVolume {
    pub const m_bActive: usize = 0x540; // bool
    pub const m_vBoxMins: usize = 0x544; // Vector
    pub const m_vBoxMaxs: usize = 0x550; // Vector
    pub const m_bStartDisabled: usize = 0x55C; // bool
    pub const m_flStrength: usize = 0x560; // float32
    pub const m_nFalloffShape: usize = 0x564; // int32
    pub const m_flFalloffExponent: usize = 0x568; // float32
}

pub mod C_EnvWind {
    pub const m_EnvWindShared: usize = 0x540; // C_EnvWindShared
}

pub mod C_EnvWindClientside {
    pub const m_EnvWindShared: usize = 0x540; // C_EnvWindShared
}

pub mod C_EnvWindShared {
    pub const m_flStartTime: usize = 0x8; // GameTime_t
    pub const m_iWindSeed: usize = 0xC; // uint32
    pub const m_iMinWind: usize = 0x10; // uint16
    pub const m_iMaxWind: usize = 0x12; // uint16
    pub const m_windRadius: usize = 0x14; // int32
    pub const m_iMinGust: usize = 0x18; // uint16
    pub const m_iMaxGust: usize = 0x1A; // uint16
    pub const m_flMinGustDelay: usize = 0x1C; // float32
    pub const m_flMaxGustDelay: usize = 0x20; // float32
    pub const m_flGustDuration: usize = 0x24; // float32
    pub const m_iGustDirChange: usize = 0x28; // uint16
    pub const m_location: usize = 0x2C; // Vector
    pub const m_iszGustSound: usize = 0x38; // int32
    pub const m_iWindDir: usize = 0x3C; // int32
    pub const m_flWindSpeed: usize = 0x40; // float32
    pub const m_currentWindVector: usize = 0x44; // Vector
    pub const m_CurrentSwayVector: usize = 0x50; // Vector
    pub const m_PrevSwayVector: usize = 0x5C; // Vector
    pub const m_iInitialWindDir: usize = 0x68; // uint16
    pub const m_flInitialWindSpeed: usize = 0x6C; // float32
    pub const m_flVariationTime: usize = 0x70; // GameTime_t
    pub const m_flSwayTime: usize = 0x74; // GameTime_t
    pub const m_flSimTime: usize = 0x78; // GameTime_t
    pub const m_flSwitchTime: usize = 0x7C; // GameTime_t
    pub const m_flAveWindSpeed: usize = 0x80; // float32
    pub const m_bGusting: usize = 0x84; // bool
    pub const m_flWindAngleVariation: usize = 0x88; // float32
    pub const m_flWindSpeedVariation: usize = 0x8C; // float32
    pub const m_iEntIndex: usize = 0x90; // CEntityIndex
}

pub mod C_EnvWindShared_WindAveEvent_t {
    pub const m_flStartWindSpeed: usize = 0x0; // float32
    pub const m_flAveWindSpeed: usize = 0x4; // float32
}

pub mod C_EnvWindShared_WindVariationEvent_t {
    pub const m_flWindAngleVariation: usize = 0x0; // float32
    pub const m_flWindSpeedVariation: usize = 0x4; // float32
}

pub mod C_FireSmoke {
    pub const m_nFlameModelIndex: usize = 0x550; // int32
    pub const m_nFlameFromAboveModelIndex: usize = 0x554; // int32
    pub const m_flScaleRegister: usize = 0x558; // float32
    pub const m_flScaleStart: usize = 0x55C; // float32
    pub const m_flScaleEnd: usize = 0x560; // float32
    pub const m_flScaleTimeStart: usize = 0x564; // GameTime_t
    pub const m_flScaleTimeEnd: usize = 0x568; // GameTime_t
    pub const m_flChildFlameSpread: usize = 0x56C; // float32
    pub const m_flClipPerc: usize = 0x580; // float32
    pub const m_bClipTested: usize = 0x584; // bool
    pub const m_bFadingOut: usize = 0x585; // bool
    pub const m_tParticleSpawn: usize = 0x588; // TimedEvent
    pub const m_pFireOverlay: usize = 0x590; // CFireOverlay*
}

pub mod C_FireSprite {
    pub const m_vecMoveDir: usize = 0xDF0; // Vector
    pub const m_bFadeFromAbove: usize = 0xDFC; // bool
}

pub mod C_Fish {
    pub const m_pos: usize = 0xE80; // Vector
    pub const m_vel: usize = 0xE8C; // Vector
    pub const m_angles: usize = 0xE98; // QAngle
    pub const m_localLifeState: usize = 0xEA4; // int32
    pub const m_deathDepth: usize = 0xEA8; // float32
    pub const m_deathAngle: usize = 0xEAC; // float32
    pub const m_buoyancy: usize = 0xEB0; // float32
    pub const m_wiggleTimer: usize = 0xEB8; // CountdownTimer
    pub const m_wigglePhase: usize = 0xED0; // float32
    pub const m_wiggleRate: usize = 0xED4; // float32
    pub const m_actualPos: usize = 0xED8; // Vector
    pub const m_actualAngles: usize = 0xEE4; // QAngle
    pub const m_poolOrigin: usize = 0xEF0; // Vector
    pub const m_waterLevel: usize = 0xEFC; // float32
    pub const m_gotUpdate: usize = 0xF00; // bool
    pub const m_x: usize = 0xF04; // float32
    pub const m_y: usize = 0xF08; // float32
    pub const m_z: usize = 0xF0C; // float32
    pub const m_angle: usize = 0xF10; // float32
    pub const m_errorHistory: usize = 0xF14; // float32[20]
    pub const m_errorHistoryIndex: usize = 0xF64; // int32
    pub const m_errorHistoryCount: usize = 0xF68; // int32
    pub const m_averageError: usize = 0xF6C; // float32
}

pub mod C_Fists {
    pub const m_bPlayingUninterruptableAct: usize = 0x18E0; // bool
    pub const m_nUninterruptableActivity: usize = 0x18E4; // PlayerAnimEvent_t
}

pub mod C_FogController {
    pub const m_fog: usize = 0x540; // fogparams_t
    pub const m_bUseAngles: usize = 0x5A8; // bool
    pub const m_iChangedVariables: usize = 0x5AC; // int32
}

pub mod C_FootstepControl {
    pub const m_source: usize = 0xCC8; // CUtlSymbolLarge
    pub const m_destination: usize = 0xCD0; // CUtlSymbolLarge
}

pub mod C_FuncConveyor {
    pub const m_vecMoveDirEntitySpace: usize = 0xCC8; // Vector
    pub const m_flTargetSpeed: usize = 0xCD4; // float32
    pub const m_nTransitionStartTick: usize = 0xCD8; // GameTick_t
    pub const m_nTransitionDurationTicks: usize = 0xCDC; // int32
    pub const m_flTransitionStartSpeed: usize = 0xCE0; // float32
    pub const m_hConveyorModels: usize = 0xCE8; // C_NetworkUtlVectorBase< CHandle< C_BaseEntity > >
    pub const m_flCurrentConveyorOffset: usize = 0xD00; // float32
    pub const m_flCurrentConveyorSpeed: usize = 0xD04; // float32
}

pub mod C_FuncElectrifiedVolume {
    pub const m_nAmbientEffect: usize = 0xCC0; // ParticleIndex_t
    pub const m_EffectName: usize = 0xCC8; // CUtlSymbolLarge
    pub const m_bState: usize = 0xCD0; // bool
}

pub mod C_FuncLadder {
    pub const m_vecLadderDir: usize = 0xCC0; // Vector
    pub const m_Dismounts: usize = 0xCD0; // CUtlVector< CHandle< C_InfoLadderDismount > >
    pub const m_vecLocalTop: usize = 0xCE8; // Vector
    pub const m_vecPlayerMountPositionTop: usize = 0xCF4; // Vector
    pub const m_vecPlayerMountPositionBottom: usize = 0xD00; // Vector
    pub const m_flAutoRideSpeed: usize = 0xD0C; // float32
    pub const m_bDisabled: usize = 0xD10; // bool
    pub const m_bFakeLadder: usize = 0xD11; // bool
    pub const m_bHasSlack: usize = 0xD12; // bool
}

pub mod C_FuncMonitor {
    pub const m_targetCamera: usize = 0xCC0; // CUtlString
    pub const m_nResolutionEnum: usize = 0xCC8; // int32
    pub const m_bRenderShadows: usize = 0xCCC; // bool
    pub const m_bUseUniqueColorTarget: usize = 0xCCD; // bool
    pub const m_brushModelName: usize = 0xCD0; // CUtlString
    pub const m_hTargetCamera: usize = 0xCD8; // CHandle< C_BaseEntity >
    pub const m_bEnabled: usize = 0xCDC; // bool
    pub const m_bDraw3DSkybox: usize = 0xCDD; // bool
}

pub mod C_FuncTrackTrain {
    pub const m_nLongAxis: usize = 0xCC0; // int32
    pub const m_flRadius: usize = 0xCC4; // float32
    pub const m_flLineLength: usize = 0xCC8; // float32
}

pub mod C_GlobalLight {
    pub const m_WindClothForceHandle: usize = 0xA00; // uint16
}

pub mod C_GradientFog {
    pub const m_hGradientFogTexture: usize = 0x540; // CStrongHandle< InfoForResourceTypeCTextureBase >
    pub const m_flFogStartDistance: usize = 0x548; // float32
    pub const m_flFogEndDistance: usize = 0x54C; // float32
    pub const m_bHeightFogEnabled: usize = 0x550; // bool
    pub const m_flFogStartHeight: usize = 0x554; // float32
    pub const m_flFogEndHeight: usize = 0x558; // float32
    pub const m_flFarZ: usize = 0x55C; // float32
    pub const m_flFogMaxOpacity: usize = 0x560; // float32
    pub const m_flFogFalloffExponent: usize = 0x564; // float32
    pub const m_flFogVerticalExponent: usize = 0x568; // float32
    pub const m_fogColor: usize = 0x56C; // Color
    pub const m_flFogStrength: usize = 0x570; // float32
    pub const m_flFadeTime: usize = 0x574; // float32
    pub const m_bStartDisabled: usize = 0x578; // bool
    pub const m_bIsEnabled: usize = 0x579; // bool
    pub const m_bGradientFogNeedsTextures: usize = 0x57A; // bool
}

pub mod C_HandleTest {
    pub const m_Handle: usize = 0x540; // CHandle< C_BaseEntity >
    pub const m_bSendHandle: usize = 0x544; // bool
}

pub mod C_Hostage {
    pub const m_entitySpottedState: usize = 0x10A8; // EntitySpottedState_t
    pub const m_leader: usize = 0x10C0; // CHandle< C_BaseEntity >
    pub const m_reuseTimer: usize = 0x10C8; // CountdownTimer
    pub const m_vel: usize = 0x10E0; // Vector
    pub const m_isRescued: usize = 0x10EC; // bool
    pub const m_jumpedThisFrame: usize = 0x10ED; // bool
    pub const m_nHostageState: usize = 0x10F0; // int32
    pub const m_bHandsHaveBeenCut: usize = 0x10F4; // bool
    pub const m_hHostageGrabber: usize = 0x10F8; // CHandle< C_CSPlayerPawn >
    pub const m_fLastGrabTime: usize = 0x10FC; // GameTime_t
    pub const m_vecGrabbedPos: usize = 0x1100; // Vector
    pub const m_flRescueStartTime: usize = 0x110C; // GameTime_t
    pub const m_flGrabSuccessTime: usize = 0x1110; // GameTime_t
    pub const m_flDropStartTime: usize = 0x1114; // GameTime_t
    pub const m_flDeadOrRescuedTime: usize = 0x1118; // GameTime_t
    pub const m_blinkTimer: usize = 0x1120; // CountdownTimer
    pub const m_lookAt: usize = 0x1138; // Vector
    pub const m_lookAroundTimer: usize = 0x1148; // CountdownTimer
    pub const m_isInit: usize = 0x1160; // bool
    pub const m_eyeAttachment: usize = 0x1161; // AttachmentHandle_t
    pub const m_chestAttachment: usize = 0x1162; // AttachmentHandle_t
    pub const m_pPredictionOwner: usize = 0x1168; // CBasePlayerController*
    pub const m_fNewestAlphaThinkTime: usize = 0x1170; // GameTime_t
}

pub mod C_Inferno {
    pub const m_nfxFireDamageEffect: usize = 0xD00; // ParticleIndex_t
    pub const m_fireXDelta: usize = 0xD04; // int32[64]
    pub const m_fireYDelta: usize = 0xE04; // int32[64]
    pub const m_fireZDelta: usize = 0xF04; // int32[64]
    pub const m_fireParentXDelta: usize = 0x1004; // int32[64]
    pub const m_fireParentYDelta: usize = 0x1104; // int32[64]
    pub const m_fireParentZDelta: usize = 0x1204; // int32[64]
    pub const m_bFireIsBurning: usize = 0x1304; // bool[64]
    pub const m_BurnNormal: usize = 0x1344; // Vector[64]
    pub const m_fireCount: usize = 0x1644; // int32
    pub const m_nInfernoType: usize = 0x1648; // int32
    pub const m_nFireLifetime: usize = 0x164C; // float32
    pub const m_bInPostEffectTime: usize = 0x1650; // bool
    pub const m_lastFireCount: usize = 0x1654; // int32
    pub const m_nFireEffectTickBegin: usize = 0x1658; // int32
    pub const m_drawableCount: usize = 0x8260; // int32
    pub const m_blosCheck: usize = 0x8264; // bool
    pub const m_nlosperiod: usize = 0x8268; // int32
    pub const m_maxFireHalfWidth: usize = 0x826C; // float32
    pub const m_maxFireHeight: usize = 0x8270; // float32
    pub const m_minBounds: usize = 0x8274; // Vector
    pub const m_maxBounds: usize = 0x8280; // Vector
    pub const m_flLastGrassBurnThink: usize = 0x828C; // float32
}

pub mod C_InfoVisibilityBox {
    pub const m_nMode: usize = 0x544; // int32
    pub const m_vBoxSize: usize = 0x548; // Vector
    pub const m_bEnabled: usize = 0x554; // bool
}

pub mod C_IronSightController {
    pub const m_bIronSightAvailable: usize = 0x10; // bool
    pub const m_flIronSightAmount: usize = 0x14; // float32
    pub const m_flIronSightAmountGained: usize = 0x18; // float32
    pub const m_flIronSightAmountBiased: usize = 0x1C; // float32
    pub const m_flIronSightAmount_Interpolated: usize = 0x20; // float32
    pub const m_flIronSightAmountGained_Interpolated: usize = 0x24; // float32
    pub const m_flIronSightAmountBiased_Interpolated: usize = 0x28; // float32
    pub const m_flInterpolationLastUpdated: usize = 0x2C; // float32
    pub const m_angDeltaAverage: usize = 0x30; // QAngle[8]
    pub const m_angViewLast: usize = 0x90; // QAngle
    pub const m_vecDotCoords: usize = 0x9C; // Vector2D
    pub const m_flDotBlur: usize = 0xA4; // float32
    pub const m_flSpeedRatio: usize = 0xA8; // float32
}

pub mod C_Item {
    pub const m_bShouldGlow: usize = 0x1560; // bool
    pub const m_pReticleHintTextName: usize = 0x1561; // char[256]
}

pub mod C_ItemDogtags {
    pub const m_OwningPlayer: usize = 0x1668; // CHandle< C_CSPlayerPawn >
    pub const m_KillingPlayer: usize = 0x166C; // CHandle< C_CSPlayerPawn >
}

pub mod C_LightEntity {
    pub const m_CLightComponent: usize = 0xCC0; // CLightComponent*
}

pub mod C_LightGlow {
    pub const m_nHorizontalSize: usize = 0xCC0; // uint32
    pub const m_nVerticalSize: usize = 0xCC4; // uint32
    pub const m_nMinDist: usize = 0xCC8; // uint32
    pub const m_nMaxDist: usize = 0xCCC; // uint32
    pub const m_nOuterMaxDist: usize = 0xCD0; // uint32
    pub const m_flGlowProxySize: usize = 0xCD4; // float32
    pub const m_flHDRColorScale: usize = 0xCD8; // float32
    pub const m_Glow: usize = 0xCE0; // C_LightGlowOverlay
}

pub mod C_LightGlowOverlay {
    pub const m_vecOrigin: usize = 0xD0; // Vector
    pub const m_vecDirection: usize = 0xDC; // Vector
    pub const m_nMinDist: usize = 0xE8; // int32
    pub const m_nMaxDist: usize = 0xEC; // int32
    pub const m_nOuterMaxDist: usize = 0xF0; // int32
    pub const m_bOneSided: usize = 0xF4; // bool
    pub const m_bModulateByDot: usize = 0xF5; // bool
}

pub mod C_LocalTempEntity {
    pub const flags: usize = 0xE98; // int32
    pub const die: usize = 0xE9C; // GameTime_t
    pub const m_flFrameMax: usize = 0xEA0; // float32
    pub const x: usize = 0xEA4; // float32
    pub const y: usize = 0xEA8; // float32
    pub const fadeSpeed: usize = 0xEAC; // float32
    pub const bounceFactor: usize = 0xEB0; // float32
    pub const hitSound: usize = 0xEB4; // int32
    pub const priority: usize = 0xEB8; // int32
    pub const tentOffset: usize = 0xEBC; // Vector
    pub const m_vecTempEntAngVelocity: usize = 0xEC8; // QAngle
    pub const tempent_renderamt: usize = 0xED4; // int32
    pub const m_vecNormal: usize = 0xED8; // Vector
    pub const m_flSpriteScale: usize = 0xEE4; // float32
    pub const m_nFlickerFrame: usize = 0xEE8; // int32
    pub const m_flFrameRate: usize = 0xEEC; // float32
    pub const m_flFrame: usize = 0xEF0; // float32
    pub const m_pszImpactEffect: usize = 0xEF8; // char*
    pub const m_pszParticleEffect: usize = 0xF00; // char*
    pub const m_bParticleCollision: usize = 0xF08; // bool
    pub const m_iLastCollisionFrame: usize = 0xF0C; // int32
    pub const m_vLastCollisionOrigin: usize = 0xF10; // Vector
    pub const m_vecTempEntVelocity: usize = 0xF1C; // Vector
    pub const m_vecPrevAbsOrigin: usize = 0xF28; // Vector
    pub const m_vecTempEntAcceleration: usize = 0xF34; // Vector
}

pub mod C_MapVetoPickController {
    pub const m_nDraftType: usize = 0x550; // int32
    pub const m_nTeamWinningCoinToss: usize = 0x554; // int32
    pub const m_nTeamWithFirstChoice: usize = 0x558; // int32[64]
    pub const m_nVoteMapIdsList: usize = 0x658; // int32[7]
    pub const m_nAccountIDs: usize = 0x674; // int32[64]
    pub const m_nMapId0: usize = 0x774; // int32[64]
    pub const m_nMapId1: usize = 0x874; // int32[64]
    pub const m_nMapId2: usize = 0x974; // int32[64]
    pub const m_nMapId3: usize = 0xA74; // int32[64]
    pub const m_nMapId4: usize = 0xB74; // int32[64]
    pub const m_nMapId5: usize = 0xC74; // int32[64]
    pub const m_nStartingSide0: usize = 0xD74; // int32[64]
    pub const m_nCurrentPhase: usize = 0xE74; // int32
    pub const m_nPhaseStartTick: usize = 0xE78; // int32
    pub const m_nPhaseDurationTicks: usize = 0xE7C; // int32
    pub const m_nPostDataUpdateTick: usize = 0xE80; // int32
    pub const m_bDisabledHud: usize = 0xE84; // bool
}

pub mod C_Melee {
    pub const m_flThrowAt: usize = 0x18E0; // GameTime_t
}

pub mod C_MolotovProjectile {
    pub const m_bIsIncGrenade: usize = 0x10F0; // bool
}

pub mod C_Multimeter {
    pub const m_hTargetC4: usize = 0xE88; // CHandle< C_PlantedC4 >
}

pub mod C_OmniLight {
    pub const m_flInnerAngle: usize = 0xF08; // float32
    pub const m_flOuterAngle: usize = 0xF0C; // float32
    pub const m_bShowLight: usize = 0xF10; // bool
}

pub mod C_ParticleSystem {
    pub const m_szSnapshotFileName: usize = 0xCC0; // char[512]
    pub const m_bActive: usize = 0xEC0; // bool
    pub const m_bFrozen: usize = 0xEC1; // bool
    pub const m_flFreezeTransitionDuration: usize = 0xEC4; // float32
    pub const m_nStopType: usize = 0xEC8; // int32
    pub const m_bAnimateDuringGameplayPause: usize = 0xECC; // bool
    pub const m_iEffectIndex: usize = 0xED0; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
    pub const m_flStartTime: usize = 0xED8; // GameTime_t
    pub const m_flPreSimTime: usize = 0xEDC; // float32
    pub const m_vServerControlPoints: usize = 0xEE0; // Vector[4]
    pub const m_iServerControlPointAssignments: usize = 0xF10; // uint8[4]
    pub const m_hControlPointEnts: usize = 0xF14; // CHandle< C_BaseEntity >[64]
    pub const m_bNoSave: usize = 0x1014; // bool
    pub const m_bNoFreeze: usize = 0x1015; // bool
    pub const m_bNoRamp: usize = 0x1016; // bool
    pub const m_bStartActive: usize = 0x1017; // bool
    pub const m_iszEffectName: usize = 0x1018; // CUtlSymbolLarge
    pub const m_iszControlPointNames: usize = 0x1020; // CUtlSymbolLarge[64]
    pub const m_nDataCP: usize = 0x1220; // int32
    pub const m_vecDataCPValue: usize = 0x1224; // Vector
    pub const m_nTintCP: usize = 0x1230; // int32
    pub const m_clrTint: usize = 0x1234; // Color
    pub const m_bOldActive: usize = 0x1258; // bool
    pub const m_bOldFrozen: usize = 0x1259; // bool
}

pub mod C_PathParticleRope {
    pub const m_bStartActive: usize = 0x540; // bool
    pub const m_flMaxSimulationTime: usize = 0x544; // float32
    pub const m_iszEffectName: usize = 0x548; // CUtlSymbolLarge
    pub const m_PathNodes_Name: usize = 0x550; // CUtlVector< CUtlSymbolLarge >
    pub const m_flParticleSpacing: usize = 0x568; // float32
    pub const m_flSlack: usize = 0x56C; // float32
    pub const m_flRadius: usize = 0x570; // float32
    pub const m_ColorTint: usize = 0x574; // Color
    pub const m_nEffectState: usize = 0x578; // int32
    pub const m_iEffectIndex: usize = 0x580; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
    pub const m_PathNodes_Position: usize = 0x588; // C_NetworkUtlVectorBase< Vector >
    pub const m_PathNodes_TangentIn: usize = 0x5A0; // C_NetworkUtlVectorBase< Vector >
    pub const m_PathNodes_TangentOut: usize = 0x5B8; // C_NetworkUtlVectorBase< Vector >
    pub const m_PathNodes_Color: usize = 0x5D0; // C_NetworkUtlVectorBase< Vector >
    pub const m_PathNodes_PinEnabled: usize = 0x5E8; // C_NetworkUtlVectorBase< bool >
    pub const m_PathNodes_RadiusScale: usize = 0x600; // C_NetworkUtlVectorBase< float32 >
}

pub mod C_PhysMagnet {
    pub const m_aAttachedObjectsFromServer: usize = 0xE80; // CUtlVector< int32 >
    pub const m_aAttachedObjects: usize = 0xE98; // CUtlVector< CHandle< C_BaseEntity > >
}

pub mod C_PhysPropClientside {
    pub const m_flTouchDelta: usize = 0xFD0; // GameTime_t
    pub const m_fDeathTime: usize = 0xFD4; // GameTime_t
    pub const m_impactEnergyScale: usize = 0xFD8; // float32
    pub const m_inertiaScale: usize = 0xFDC; // float32
    pub const m_flDmgModBullet: usize = 0xFE0; // float32
    pub const m_flDmgModClub: usize = 0xFE4; // float32
    pub const m_flDmgModExplosive: usize = 0xFE8; // float32
    pub const m_flDmgModFire: usize = 0xFEC; // float32
    pub const m_iszPhysicsDamageTableName: usize = 0xFF0; // CUtlSymbolLarge
    pub const m_iszBasePropData: usize = 0xFF8; // CUtlSymbolLarge
    pub const m_iInteractions: usize = 0x1000; // int32
    pub const m_bHasBreakPiecesOrCommands: usize = 0x1004; // bool
    pub const m_vecDamagePosition: usize = 0x1008; // Vector
    pub const m_vecDamageDirection: usize = 0x1014; // Vector
    pub const m_nDamageType: usize = 0x1020; // int32
}

pub mod C_PhysicsProp {
    pub const m_bAwake: usize = 0xFD0; // bool
}

pub mod C_PickUpModelSlerper {
    pub const m_hPlayerParent: usize = 0xE80; // CHandle< C_BaseEntity >
    pub const m_hItem: usize = 0xE84; // CHandle< C_BaseEntity >
    pub const m_flTimePickedUp: usize = 0xE88; // float32
    pub const m_angOriginal: usize = 0xE8C; // QAngle
    pub const m_vecPosOriginal: usize = 0xE98; // Vector
    pub const m_angRandom: usize = 0xEA8; // QAngle
}

pub mod C_PlantedC4 {
    pub const m_bBombTicking: usize = 0xE80; // bool
    pub const m_nBombSite: usize = 0xE84; // int32
    pub const m_nSourceSoundscapeHash: usize = 0xE88; // int32
    pub const m_entitySpottedState: usize = 0xE90; // EntitySpottedState_t
    pub const m_flNextGlow: usize = 0xEA8; // GameTime_t
    pub const m_flNextBeep: usize = 0xEAC; // GameTime_t
    pub const m_flC4Blow: usize = 0xEB0; // GameTime_t
    pub const m_bCannotBeDefused: usize = 0xEB4; // bool
    pub const m_bHasExploded: usize = 0xEB5; // bool
    pub const m_flTimerLength: usize = 0xEB8; // float32
    pub const m_bBeingDefused: usize = 0xEBC; // bool
    pub const m_bTenSecWarning: usize = 0xEC0; // float32
    pub const m_bTriggerWarning: usize = 0xEC4; // float32
    pub const m_bExplodeWarning: usize = 0xEC8; // float32
    pub const m_bC4Activated: usize = 0xECC; // bool
    pub const m_flDefuseLength: usize = 0xED0; // float32
    pub const m_flDefuseCountDown: usize = 0xED4; // GameTime_t
    pub const m_bBombDefused: usize = 0xED8; // bool
    pub const m_hBombDefuser: usize = 0xEDC; // CHandle< C_CSPlayerPawn >
    pub const m_hControlPanel: usize = 0xEE0; // CHandle< C_BaseEntity >
    pub const m_hDefuserMultimeter: usize = 0xEE4; // CHandle< C_Multimeter >
    pub const m_flNextRadarFlashTime: usize = 0xEE8; // GameTime_t
    pub const m_bRadarFlash: usize = 0xEEC; // bool
    pub const m_pBombDefuser: usize = 0xEF0; // CHandle< C_CSPlayerPawn >
    pub const m_fLastDefuseTime: usize = 0xEF4; // GameTime_t
    pub const m_pPredictionOwner: usize = 0xEF8; // CBasePlayerController*
}

pub mod C_PlayerPing {
    pub const m_hPlayer: usize = 0x570; // CHandle< C_CSPlayerPawn >
    pub const m_hPingedEntity: usize = 0x574; // CHandle< C_BaseEntity >
    pub const m_iType: usize = 0x578; // int32
    pub const m_bUrgent: usize = 0x57C; // bool
    pub const m_szPlaceName: usize = 0x57D; // char[18]
}

pub mod C_PlayerSprayDecal {
    pub const m_nUniqueID: usize = 0xCC0; // int32
    pub const m_unAccountID: usize = 0xCC4; // uint32
    pub const m_unTraceID: usize = 0xCC8; // uint32
    pub const m_rtGcTime: usize = 0xCCC; // uint32
    pub const m_vecEndPos: usize = 0xCD0; // Vector
    pub const m_vecStart: usize = 0xCDC; // Vector
    pub const m_vecLeft: usize = 0xCE8; // Vector
    pub const m_vecNormal: usize = 0xCF4; // Vector
    pub const m_nPlayer: usize = 0xD00; // int32
    pub const m_nEntity: usize = 0xD04; // int32
    pub const m_nHitbox: usize = 0xD08; // int32
    pub const m_flCreationTime: usize = 0xD0C; // float32
    pub const m_nTintID: usize = 0xD10; // int32
    pub const m_nVersion: usize = 0xD14; // uint8
    pub const m_ubSignature: usize = 0xD15; // uint8[128]
    pub const m_SprayRenderHelper: usize = 0xDA0; // CPlayerSprayDecalRenderHelper
}

pub mod C_PlayerVisibility {
    pub const m_flVisibilityStrength: usize = 0x540; // float32
    pub const m_flFogDistanceMultiplier: usize = 0x544; // float32
    pub const m_flFogMaxDensityMultiplier: usize = 0x548; // float32
    pub const m_flFadeTime: usize = 0x54C; // float32
    pub const m_bStartDisabled: usize = 0x550; // bool
    pub const m_bIsEnabled: usize = 0x551; // bool
}

pub mod C_PointCamera {
    pub const m_FOV: usize = 0x540; // float32
    pub const m_Resolution: usize = 0x544; // float32
    pub const m_bFogEnable: usize = 0x548; // bool
    pub const m_FogColor: usize = 0x549; // Color
    pub const m_flFogStart: usize = 0x550; // float32
    pub const m_flFogEnd: usize = 0x554; // float32
    pub const m_flFogMaxDensity: usize = 0x558; // float32
    pub const m_bActive: usize = 0x55C; // bool
    pub const m_bUseScreenAspectRatio: usize = 0x55D; // bool
    pub const m_flAspectRatio: usize = 0x560; // float32
    pub const m_bNoSky: usize = 0x564; // bool
    pub const m_fBrightness: usize = 0x568; // float32
    pub const m_flZFar: usize = 0x56C; // float32
    pub const m_flZNear: usize = 0x570; // float32
    pub const m_bCanHLTVUse: usize = 0x574; // bool
    pub const m_bDofEnabled: usize = 0x575; // bool
    pub const m_flDofNearBlurry: usize = 0x578; // float32
    pub const m_flDofNearCrisp: usize = 0x57C; // float32
    pub const m_flDofFarCrisp: usize = 0x580; // float32
    pub const m_flDofFarBlurry: usize = 0x584; // float32
    pub const m_flDofTiltToGround: usize = 0x588; // float32
    pub const m_TargetFOV: usize = 0x58C; // float32
    pub const m_DegreesPerSecond: usize = 0x590; // float32
    pub const m_bIsOn: usize = 0x594; // bool
    pub const m_pNext: usize = 0x598; // C_PointCamera*
}

pub mod C_PointCameraVFOV {
    pub const m_flVerticalFOV: usize = 0x5A0; // float32
}

pub mod C_PointClientUIDialog {
    pub const m_hActivator: usize = 0xCF0; // CHandle< C_BaseEntity >
    pub const m_bStartEnabled: usize = 0xCF4; // bool
}

pub mod C_PointClientUIHUD {
    pub const m_bCheckCSSClasses: usize = 0xCF8; // bool
    pub const m_bIgnoreInput: usize = 0xE80; // bool
    pub const m_flWidth: usize = 0xE84; // float32
    pub const m_flHeight: usize = 0xE88; // float32
    pub const m_flDPI: usize = 0xE8C; // float32
    pub const m_flInteractDistance: usize = 0xE90; // float32
    pub const m_flDepthOffset: usize = 0xE94; // float32
    pub const m_unOwnerContext: usize = 0xE98; // uint32
    pub const m_unHorizontalAlign: usize = 0xE9C; // uint32
    pub const m_unVerticalAlign: usize = 0xEA0; // uint32
    pub const m_unOrientation: usize = 0xEA4; // uint32
    pub const m_bAllowInteractionFromAllSceneWorlds: usize = 0xEA8; // bool
    pub const m_vecCSSClasses: usize = 0xEB0; // C_NetworkUtlVectorBase< CUtlSymbolLarge >
}

pub mod C_PointClientUIWorldPanel {
    pub const m_bForceRecreateNextUpdate: usize = 0xCF8; // bool
    pub const m_bMoveViewToPlayerNextThink: usize = 0xCF9; // bool
    pub const m_bCheckCSSClasses: usize = 0xCFA; // bool
    pub const m_anchorDeltaTransform: usize = 0xD00; // CTransform
    pub const m_pOffScreenIndicator: usize = 0xEA0; // CPointOffScreenIndicatorUi*
    pub const m_bIgnoreInput: usize = 0xEC8; // bool
    pub const m_bLit: usize = 0xEC9; // bool
    pub const m_bFollowPlayerAcrossTeleport: usize = 0xECA; // bool
    pub const m_flWidth: usize = 0xECC; // float32
    pub const m_flHeight: usize = 0xED0; // float32
    pub const m_flDPI: usize = 0xED4; // float32
    pub const m_flInteractDistance: usize = 0xED8; // float32
    pub const m_flDepthOffset: usize = 0xEDC; // float32
    pub const m_unOwnerContext: usize = 0xEE0; // uint32
    pub const m_unHorizontalAlign: usize = 0xEE4; // uint32
    pub const m_unVerticalAlign: usize = 0xEE8; // uint32
    pub const m_unOrientation: usize = 0xEEC; // uint32
    pub const m_bAllowInteractionFromAllSceneWorlds: usize = 0xEF0; // bool
    pub const m_vecCSSClasses: usize = 0xEF8; // C_NetworkUtlVectorBase< CUtlSymbolLarge >
    pub const m_bOpaque: usize = 0xF10; // bool
    pub const m_bNoDepth: usize = 0xF11; // bool
    pub const m_bRenderBackface: usize = 0xF12; // bool
    pub const m_bUseOffScreenIndicator: usize = 0xF13; // bool
    pub const m_bExcludeFromSaveGames: usize = 0xF14; // bool
    pub const m_bGrabbable: usize = 0xF15; // bool
    pub const m_bOnlyRenderToTexture: usize = 0xF16; // bool
    pub const m_bDisableMipGen: usize = 0xF17; // bool
    pub const m_nExplicitImageLayout: usize = 0xF18; // int32
}

pub mod C_PointClientUIWorldTextPanel {
    pub const m_messageText: usize = 0xF20; // char[512]
}

pub mod C_PointCommentaryNode {
    pub const m_bActive: usize = 0xE88; // bool
    pub const m_bWasActive: usize = 0xE89; // bool
    pub const m_flEndTime: usize = 0xE8C; // GameTime_t
    pub const m_flStartTime: usize = 0xE90; // GameTime_t
    pub const m_flStartTimeInCommentary: usize = 0xE94; // float32
    pub const m_iszCommentaryFile: usize = 0xE98; // CUtlSymbolLarge
    pub const m_iszTitle: usize = 0xEA0; // CUtlSymbolLarge
    pub const m_iszSpeakers: usize = 0xEA8; // CUtlSymbolLarge
    pub const m_iNodeNumber: usize = 0xEB0; // int32
    pub const m_iNodeNumberMax: usize = 0xEB4; // int32
    pub const m_bListenedTo: usize = 0xEB8; // bool
    pub const m_hViewPosition: usize = 0xEC8; // CHandle< C_BaseEntity >
    pub const m_bRestartAfterRestore: usize = 0xECC; // bool
}

pub mod C_PointValueRemapper {
    pub const m_bDisabled: usize = 0x540; // bool
    pub const m_bDisabledOld: usize = 0x541; // bool
    pub const m_bUpdateOnClient: usize = 0x542; // bool
    pub const m_nInputType: usize = 0x544; // ValueRemapperInputType_t
    pub const m_hRemapLineStart: usize = 0x548; // CHandle< C_BaseEntity >
    pub const m_hRemapLineEnd: usize = 0x54C; // CHandle< C_BaseEntity >
    pub const m_flMaximumChangePerSecond: usize = 0x550; // float32
    pub const m_flDisengageDistance: usize = 0x554; // float32
    pub const m_flEngageDistance: usize = 0x558; // float32
    pub const m_bRequiresUseKey: usize = 0x55C; // bool
    pub const m_nOutputType: usize = 0x560; // ValueRemapperOutputType_t
    pub const m_hOutputEntities: usize = 0x568; // C_NetworkUtlVectorBase< CHandle< C_BaseEntity > >
    pub const m_nHapticsType: usize = 0x580; // ValueRemapperHapticsType_t
    pub const m_nMomentumType: usize = 0x584; // ValueRemapperMomentumType_t
    pub const m_flMomentumModifier: usize = 0x588; // float32
    pub const m_flSnapValue: usize = 0x58C; // float32
    pub const m_flCurrentMomentum: usize = 0x590; // float32
    pub const m_nRatchetType: usize = 0x594; // ValueRemapperRatchetType_t
    pub const m_flRatchetOffset: usize = 0x598; // float32
    pub const m_flInputOffset: usize = 0x59C; // float32
    pub const m_bEngaged: usize = 0x5A0; // bool
    pub const m_bFirstUpdate: usize = 0x5A1; // bool
    pub const m_flPreviousValue: usize = 0x5A4; // float32
    pub const m_flPreviousUpdateTickTime: usize = 0x5A8; // GameTime_t
    pub const m_vecPreviousTestPoint: usize = 0x5AC; // Vector
}

pub mod C_PointWorldText {
    pub const m_bForceRecreateNextUpdate: usize = 0xCC8; // bool
    pub const m_messageText: usize = 0xCD8; // char[512]
    pub const m_FontName: usize = 0xED8; // char[64]
    pub const m_bEnabled: usize = 0xF18; // bool
    pub const m_bFullbright: usize = 0xF19; // bool
    pub const m_flWorldUnitsPerPx: usize = 0xF1C; // float32
    pub const m_flFontSize: usize = 0xF20; // float32
    pub const m_flDepthOffset: usize = 0xF24; // float32
    pub const m_Color: usize = 0xF28; // Color
    pub const m_nJustifyHorizontal: usize = 0xF2C; // PointWorldTextJustifyHorizontal_t
    pub const m_nJustifyVertical: usize = 0xF30; // PointWorldTextJustifyVertical_t
    pub const m_nReorientMode: usize = 0xF34; // PointWorldTextReorientMode_t
}

pub mod C_PostProcessingVolume {
    pub const m_hPostSettings: usize = 0xCD8; // CStrongHandle< InfoForResourceTypeCPostProcessingResource >
    pub const m_flFadeDuration: usize = 0xCE0; // float32
    pub const m_flMinLogExposure: usize = 0xCE4; // float32
    pub const m_flMaxLogExposure: usize = 0xCE8; // float32
    pub const m_flMinExposure: usize = 0xCEC; // float32
    pub const m_flMaxExposure: usize = 0xCF0; // float32
    pub const m_flExposureCompensation: usize = 0xCF4; // float32
    pub const m_flExposureFadeSpeedUp: usize = 0xCF8; // float32
    pub const m_flExposureFadeSpeedDown: usize = 0xCFC; // float32
    pub const m_flTonemapEVSmoothingRange: usize = 0xD00; // float32
    pub const m_bMaster: usize = 0xD04; // bool
    pub const m_bExposureControl: usize = 0xD05; // bool
    pub const m_flRate: usize = 0xD08; // float32
    pub const m_flTonemapPercentTarget: usize = 0xD0C; // float32
    pub const m_flTonemapPercentBrightPixels: usize = 0xD10; // float32
    pub const m_flTonemapMinAvgLum: usize = 0xD14; // float32
}

pub mod C_Precipitation {
    pub const m_flDensity: usize = 0xCC8; // float32
    pub const m_flParticleInnerDist: usize = 0xCD8; // float32
    pub const m_pParticleDef: usize = 0xCE0; // char*
    pub const m_tParticlePrecipTraceTimer: usize = 0xD08; // TimedEvent[1]
    pub const m_bActiveParticlePrecipEmitter: usize = 0xD10; // bool[1]
    pub const m_bParticlePrecipInitialized: usize = 0xD11; // bool
    pub const m_bHasSimulatedSinceLastSceneObjectUpdate: usize = 0xD12; // bool
    pub const m_nAvailableSheetSequencesMaxIndex: usize = 0xD14; // int32
}

pub mod C_PredictedViewModel {
    pub const m_LagAnglesHistory: usize = 0xEE8; // QAngle
    pub const m_vPredictedOffset: usize = 0xF00; // Vector
}

pub mod C_RagdollManager {
    pub const m_iCurrentMaxRagdollCount: usize = 0x540; // int8
}

pub mod C_RagdollProp {
    pub const m_ragPos: usize = 0xE88; // C_NetworkUtlVectorBase< Vector >
    pub const m_ragAngles: usize = 0xEA0; // C_NetworkUtlVectorBase< QAngle >
    pub const m_flBlendWeight: usize = 0xEB8; // float32
    pub const m_hRagdollSource: usize = 0xEBC; // CHandle< C_BaseEntity >
    pub const m_iEyeAttachment: usize = 0xEC0; // AttachmentHandle_t
    pub const m_flBlendWeightCurrent: usize = 0xEC4; // float32
    pub const m_parentPhysicsBoneIndices: usize = 0xEC8; // CUtlVector< int32 >
    pub const m_worldSpaceBoneComputationOrder: usize = 0xEE0; // CUtlVector< int32 >
}

pub mod C_RagdollPropAttached {
    pub const m_boneIndexAttached: usize = 0xEF8; // uint32
    pub const m_ragdollAttachedObjectIndex: usize = 0xEFC; // uint32
    pub const m_attachmentPointBoneSpace: usize = 0xF00; // Vector
    pub const m_attachmentPointRagdollSpace: usize = 0xF0C; // Vector
    pub const m_vecOffset: usize = 0xF18; // Vector
    pub const m_parentTime: usize = 0xF24; // float32
    pub const m_bHasParent: usize = 0xF28; // bool
}

pub mod C_RectLight {
    pub const m_bShowLight: usize = 0xF08; // bool
}

pub mod C_RetakeGameRules {
    pub const m_nMatchSeed: usize = 0xF8; // int32
    pub const m_bBlockersPresent: usize = 0xFC; // bool
    pub const m_bRoundInProgress: usize = 0xFD; // bool
    pub const m_iFirstSecondHalfRound: usize = 0x100; // int32
    pub const m_iBombSite: usize = 0x104; // int32
}

pub mod C_RopeKeyframe {
    pub const m_LinksTouchingSomething: usize = 0xCC8; // CBitVec< 10 >
    pub const m_nLinksTouchingSomething: usize = 0xCCC; // int32
    pub const m_bApplyWind: usize = 0xCD0; // bool
    pub const m_fPrevLockedPoints: usize = 0xCD4; // int32
    pub const m_iForcePointMoveCounter: usize = 0xCD8; // int32
    pub const m_bPrevEndPointPos: usize = 0xCDC; // bool[2]
    pub const m_vPrevEndPointPos: usize = 0xCE0; // Vector[2]
    pub const m_flCurScroll: usize = 0xCF8; // float32
    pub const m_flScrollSpeed: usize = 0xCFC; // float32
    pub const m_RopeFlags: usize = 0xD00; // uint16
    pub const m_iRopeMaterialModelIndex: usize = 0xD08; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    pub const m_LightValues: usize = 0xF80; // Vector[10]
    pub const m_nSegments: usize = 0xFF8; // uint8
    pub const m_hStartPoint: usize = 0xFFC; // CHandle< C_BaseEntity >
    pub const m_hEndPoint: usize = 0x1000; // CHandle< C_BaseEntity >
    pub const m_iStartAttachment: usize = 0x1004; // AttachmentHandle_t
    pub const m_iEndAttachment: usize = 0x1005; // AttachmentHandle_t
    pub const m_Subdiv: usize = 0x1006; // uint8
    pub const m_RopeLength: usize = 0x1008; // int16
    pub const m_Slack: usize = 0x100A; // int16
    pub const m_TextureScale: usize = 0x100C; // float32
    pub const m_fLockedPoints: usize = 0x1010; // uint8
    pub const m_nChangeCount: usize = 0x1011; // uint8
    pub const m_Width: usize = 0x1014; // float32
    pub const m_PhysicsDelegate: usize = 0x1018; // C_RopeKeyframe::CPhysicsDelegate
    pub const m_hMaterial: usize = 0x1028; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    pub const m_TextureHeight: usize = 0x1030; // int32
    pub const m_vecImpulse: usize = 0x1034; // Vector
    pub const m_vecPreviousImpulse: usize = 0x1040; // Vector
    pub const m_flCurrentGustTimer: usize = 0x104C; // float32
    pub const m_flCurrentGustLifetime: usize = 0x1050; // float32
    pub const m_flTimeToNextGust: usize = 0x1054; // float32
    pub const m_vWindDir: usize = 0x1058; // Vector
    pub const m_vColorMod: usize = 0x1064; // Vector
    pub const m_vCachedEndPointAttachmentPos: usize = 0x1070; // Vector[2]
    pub const m_vCachedEndPointAttachmentAngle: usize = 0x1088; // QAngle[2]
    pub const m_bConstrainBetweenEndpoints: usize = 0x10A0; // bool
    pub const m_bEndPointAttachmentPositionsDirty: usize = 0x0; // bitfield:1
    pub const m_bEndPointAttachmentAnglesDirty: usize = 0x0; // bitfield:1
    pub const m_bNewDataThisFrame: usize = 0x0; // bitfield:1
    pub const m_bPhysicsInitted: usize = 0x0; // bitfield:1
}

pub mod C_RopeKeyframe_CPhysicsDelegate {
    pub const m_pKeyframe: usize = 0x8; // C_RopeKeyframe*
}

pub mod C_SceneEntity {
    pub const m_bIsPlayingBack: usize = 0x548; // bool
    pub const m_bPaused: usize = 0x549; // bool
    pub const m_bMultiplayer: usize = 0x54A; // bool
    pub const m_bAutogenerated: usize = 0x54B; // bool
    pub const m_flForceClientTime: usize = 0x54C; // float32
    pub const m_nSceneStringIndex: usize = 0x550; // uint16
    pub const m_bClientOnly: usize = 0x552; // bool
    pub const m_hOwner: usize = 0x554; // CHandle< C_BaseFlex >
    pub const m_hActorList: usize = 0x558; // C_NetworkUtlVectorBase< CHandle< C_BaseFlex > >
    pub const m_bWasPlaying: usize = 0x570; // bool
    pub const m_QueuedEvents: usize = 0x580; // CUtlVector< C_SceneEntity::QueuedEvents_t >
    pub const m_flCurrentTime: usize = 0x598; // float32
}

pub mod C_SceneEntity_QueuedEvents_t {
    pub const starttime: usize = 0x0; // float32
}

pub mod C_ShatterGlassShardPhysics {
    pub const m_ShardDesc: usize = 0xFE0; // shard_model_desc_t
}

pub mod C_SkyCamera {
    pub const m_skyboxData: usize = 0x540; // sky3dparams_t
    pub const m_skyboxSlotToken: usize = 0x5D0; // CUtlStringToken
    pub const m_bUseAngles: usize = 0x5D4; // bool
    pub const m_pNext: usize = 0x5D8; // C_SkyCamera*
}

pub mod C_SmokeGrenadeProjectile {
    pub const m_nSmokeEffectTickBegin: usize = 0x10F8; // int32
    pub const m_bDidSmokeEffect: usize = 0x10FC; // bool
    pub const m_nRandomSeed: usize = 0x1100; // int32
    pub const m_vSmokeColor: usize = 0x1104; // Vector
    pub const m_vSmokeDetonationPos: usize = 0x1110; // Vector
    pub const m_VoxelFrameData: usize = 0x1120; // CUtlVector< uint8 >
    pub const m_bSmokeVolumeDataReceived: usize = 0x1138; // bool
    pub const m_bSmokeEffectSpawned: usize = 0x1139; // bool
}

pub mod C_SoundAreaEntityBase {
    pub const m_bDisabled: usize = 0x540; // bool
    pub const m_bWasEnabled: usize = 0x548; // bool
    pub const m_iszSoundAreaType: usize = 0x550; // CUtlSymbolLarge
    pub const m_vPos: usize = 0x558; // Vector
}

pub mod C_SoundAreaEntityOrientedBox {
    pub const m_vMin: usize = 0x568; // Vector
    pub const m_vMax: usize = 0x574; // Vector
}

pub mod C_SoundAreaEntitySphere {
    pub const m_flRadius: usize = 0x568; // float32
}

pub mod C_SoundOpvarSetPointBase {
    pub const m_iszStackName: usize = 0x540; // CUtlSymbolLarge
    pub const m_iszOperatorName: usize = 0x548; // CUtlSymbolLarge
    pub const m_iszOpvarName: usize = 0x550; // CUtlSymbolLarge
    pub const m_iOpvarIndex: usize = 0x558; // int32
    pub const m_bUseAutoCompare: usize = 0x55C; // bool
}

pub mod C_SpotlightEnd {
    pub const m_flLightScale: usize = 0xCC0; // float32
    pub const m_Radius: usize = 0xCC4; // float32
}

pub mod C_Sprite {
    pub const m_hSpriteMaterial: usize = 0xCD8; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    pub const m_hAttachedToEntity: usize = 0xCE0; // CHandle< C_BaseEntity >
    pub const m_nAttachment: usize = 0xCE4; // AttachmentHandle_t
    pub const m_flSpriteFramerate: usize = 0xCE8; // float32
    pub const m_flFrame: usize = 0xCEC; // float32
    pub const m_flDieTime: usize = 0xCF0; // GameTime_t
    pub const m_nBrightness: usize = 0xD00; // uint32
    pub const m_flBrightnessDuration: usize = 0xD04; // float32
    pub const m_flSpriteScale: usize = 0xD08; // float32
    pub const m_flScaleDuration: usize = 0xD0C; // float32
    pub const m_bWorldSpaceScale: usize = 0xD10; // bool
    pub const m_flGlowProxySize: usize = 0xD14; // float32
    pub const m_flHDRColorScale: usize = 0xD18; // float32
    pub const m_flLastTime: usize = 0xD1C; // GameTime_t
    pub const m_flMaxFrame: usize = 0xD20; // float32
    pub const m_flStartScale: usize = 0xD24; // float32
    pub const m_flDestScale: usize = 0xD28; // float32
    pub const m_flScaleTimeStart: usize = 0xD2C; // GameTime_t
    pub const m_nStartBrightness: usize = 0xD30; // int32
    pub const m_nDestBrightness: usize = 0xD34; // int32
    pub const m_flBrightnessTimeStart: usize = 0xD38; // GameTime_t
    pub const m_hOldSpriteMaterial: usize = 0xD40; // CWeakHandle< InfoForResourceTypeIMaterial2 >
    pub const m_nSpriteWidth: usize = 0xDE8; // int32
    pub const m_nSpriteHeight: usize = 0xDEC; // int32
}

pub mod C_Sun {
    pub const m_fxSSSunFlareEffectIndex: usize = 0xCC0; // ParticleIndex_t
    pub const m_fxSunFlareEffectIndex: usize = 0xCC4; // ParticleIndex_t
    pub const m_fdistNormalize: usize = 0xCC8; // float32
    pub const m_vSunPos: usize = 0xCCC; // Vector
    pub const m_vDirection: usize = 0xCD8; // Vector
    pub const m_iszEffectName: usize = 0xCE8; // CUtlSymbolLarge
    pub const m_iszSSEffectName: usize = 0xCF0; // CUtlSymbolLarge
    pub const m_clrOverlay: usize = 0xCF8; // Color
    pub const m_bOn: usize = 0xCFC; // bool
    pub const m_bmaxColor: usize = 0xCFD; // bool
    pub const m_flSize: usize = 0xD00; // float32
    pub const m_flHazeScale: usize = 0xD04; // float32
    pub const m_flRotation: usize = 0xD08; // float32
    pub const m_flHDRColorScale: usize = 0xD0C; // float32
    pub const m_flAlphaHaze: usize = 0xD10; // float32
    pub const m_flAlphaScale: usize = 0xD14; // float32
    pub const m_flAlphaHdr: usize = 0xD18; // float32
    pub const m_flFarZScale: usize = 0xD1C; // float32
}

pub mod C_SunGlowOverlay {
    pub const m_bModulateByDot: usize = 0xD0; // bool
}

pub mod C_Team {
    pub const m_aPlayerControllers: usize = 0x540; // C_NetworkUtlVectorBase< CHandle< CBasePlayerController > >
    pub const m_aPlayers: usize = 0x558; // C_NetworkUtlVectorBase< CHandle< C_BasePlayerPawn > >
    pub const m_iScore: usize = 0x570; // int32
    pub const m_szTeamname: usize = 0x574; // char[129]
}

pub mod C_TeamRoundTimer {
    pub const m_bTimerPaused: usize = 0x540; // bool
    pub const m_flTimeRemaining: usize = 0x544; // float32
    pub const m_flTimerEndTime: usize = 0x548; // GameTime_t
    pub const m_bIsDisabled: usize = 0x54C; // bool
    pub const m_bShowInHUD: usize = 0x54D; // bool
    pub const m_nTimerLength: usize = 0x550; // int32
    pub const m_nTimerInitialLength: usize = 0x554; // int32
    pub const m_nTimerMaxLength: usize = 0x558; // int32
    pub const m_bAutoCountdown: usize = 0x55C; // bool
    pub const m_nSetupTimeLength: usize = 0x560; // int32
    pub const m_nState: usize = 0x564; // int32
    pub const m_bStartPaused: usize = 0x568; // bool
    pub const m_bInCaptureWatchState: usize = 0x569; // bool
    pub const m_flTotalTime: usize = 0x56C; // float32
    pub const m_bStopWatchTimer: usize = 0x570; // bool
    pub const m_bFireFinished: usize = 0x571; // bool
    pub const m_bFire5MinRemain: usize = 0x572; // bool
    pub const m_bFire4MinRemain: usize = 0x573; // bool
    pub const m_bFire3MinRemain: usize = 0x574; // bool
    pub const m_bFire2MinRemain: usize = 0x575; // bool
    pub const m_bFire1MinRemain: usize = 0x576; // bool
    pub const m_bFire30SecRemain: usize = 0x577; // bool
    pub const m_bFire10SecRemain: usize = 0x578; // bool
    pub const m_bFire5SecRemain: usize = 0x579; // bool
    pub const m_bFire4SecRemain: usize = 0x57A; // bool
    pub const m_bFire3SecRemain: usize = 0x57B; // bool
    pub const m_bFire2SecRemain: usize = 0x57C; // bool
    pub const m_bFire1SecRemain: usize = 0x57D; // bool
    pub const m_nOldTimerLength: usize = 0x580; // int32
    pub const m_nOldTimerState: usize = 0x584; // int32
}

pub mod C_TextureBasedAnimatable {
    pub const m_bLoop: usize = 0xCC0; // bool
    pub const m_flFPS: usize = 0xCC4; // float32
    pub const m_hPositionKeys: usize = 0xCC8; // CStrongHandle< InfoForResourceTypeCTextureBase >
    pub const m_hRotationKeys: usize = 0xCD0; // CStrongHandle< InfoForResourceTypeCTextureBase >
    pub const m_vAnimationBoundsMin: usize = 0xCD8; // Vector
    pub const m_vAnimationBoundsMax: usize = 0xCE4; // Vector
    pub const m_flStartTime: usize = 0xCF0; // float32
    pub const m_flStartFrame: usize = 0xCF4; // float32
}

pub mod C_TonemapController2 {
    pub const m_flAutoExposureMin: usize = 0x540; // float32
    pub const m_flAutoExposureMax: usize = 0x544; // float32
    pub const m_flTonemapPercentTarget: usize = 0x548; // float32
    pub const m_flTonemapPercentBrightPixels: usize = 0x54C; // float32
    pub const m_flTonemapMinAvgLum: usize = 0x550; // float32
    pub const m_flExposureAdaptationSpeedUp: usize = 0x554; // float32
    pub const m_flExposureAdaptationSpeedDown: usize = 0x558; // float32
    pub const m_flTonemapEVSmoothingRange: usize = 0x55C; // float32
}

pub mod C_TriggerBuoyancy {
    pub const m_BuoyancyHelper: usize = 0xCC8; // CBuoyancyHelper
    pub const m_flFluidDensity: usize = 0xCE8; // float32
}

pub mod C_ViewmodelWeapon {
    pub const m_worldModel: usize = 0xE80; // char*
}

pub mod C_VoteController {
    pub const m_iActiveIssueIndex: usize = 0x550; // int32
    pub const m_iOnlyTeamToVote: usize = 0x554; // int32
    pub const m_nVoteOptionCount: usize = 0x558; // int32[5]
    pub const m_nPotentialVotes: usize = 0x56C; // int32
    pub const m_bVotesDirty: usize = 0x570; // bool
    pub const m_bTypeDirty: usize = 0x571; // bool
    pub const m_bIsYesNoVote: usize = 0x572; // bool
}

pub mod C_WeaponBaseItem {
    pub const m_SequenceCompleteTimer: usize = 0x18E0; // CountdownTimer
    pub const m_bRedraw: usize = 0x18F8; // bool
}

pub mod C_WeaponShield {
    pub const m_flDisplayHealth: usize = 0x1900; // float32
}

pub mod C_WeaponTaser {
    pub const m_fFireTime: usize = 0x1900; // GameTime_t
}

pub mod C_fogplayerparams_t {
    pub const m_hCtrl: usize = 0x8; // CHandle< C_FogController >
    pub const m_flTransitionTime: usize = 0xC; // float32
    pub const m_OldColor: usize = 0x10; // Color
    pub const m_flOldStart: usize = 0x14; // float32
    pub const m_flOldEnd: usize = 0x18; // float32
    pub const m_flOldMaxDensity: usize = 0x1C; // float32
    pub const m_flOldHDRColorScale: usize = 0x20; // float32
    pub const m_flOldFarZ: usize = 0x24; // float32
    pub const m_NewColor: usize = 0x28; // Color
    pub const m_flNewStart: usize = 0x2C; // float32
    pub const m_flNewEnd: usize = 0x30; // float32
    pub const m_flNewMaxDensity: usize = 0x34; // float32
    pub const m_flNewHDRColorScale: usize = 0x38; // float32
    pub const m_flNewFarZ: usize = 0x3C; // float32
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
    pub const m_vecRandomRollInputVars_InputVarsToRoll: usize = 0x30; // CUtlVector< CUtlString >
    pub const m_strCopyMatchingKeys_InputContainerSrc: usize = 0x48; // CUtlString
    pub const m_strCopyKeysWithSuffix_InputContainerSrc: usize = 0x50; // CUtlString
    pub const m_strCopyKeysWithSuffix_FindSuffix: usize = 0x58; // CUtlString
    pub const m_strCopyKeysWithSuffix_ReplaceSuffix: usize = 0x60; // CUtlString
    pub const m_nSetValue_Value: usize = 0x68; // CompositeMaterialInputLooseVariable_t
    pub const m_strGenerateTexture_TargetParam: usize = 0x2D8; // CUtlString
    pub const m_strGenerateTexture_InitialContainer: usize = 0x2E0; // CUtlString
    pub const m_nResolution: usize = 0x2E8; // int32
    pub const m_bIsScratchTarget: usize = 0x2EC; // bool
    pub const m_bSplatDebugInfo: usize = 0x2ED; // bool
    pub const m_bCaptureInRenderDoc: usize = 0x2EE; // bool
    pub const m_vecTexGenInstructions: usize = 0x2F0; // CUtlVector< CompMatPropertyMutator_t >
    pub const m_vecConditionalMutators: usize = 0x308; // CUtlVector< CompMatPropertyMutator_t >
    pub const m_strPopInputQueue_Container: usize = 0x320; // CUtlString
    pub const m_strDrawText_InputContainerSrc: usize = 0x328; // CUtlString
    pub const m_strDrawText_InputContainerProperty: usize = 0x330; // CUtlString
    pub const m_vecDrawText_Position: usize = 0x338; // Vector2D
    pub const m_colDrawText_Color: usize = 0x340; // Color
    pub const m_strDrawText_Font: usize = 0x348; // CUtlString
    pub const m_vecConditions: usize = 0x350; // CUtlVector< CompMatMutatorCondition_t >
}

pub mod CompositeMaterialAssemblyProcedure_t {
    pub const m_vecCompMatIncludes: usize = 0x0; // CUtlVector< CResourceName >
    pub const m_vecMatchFilters: usize = 0x18; // CUtlVector< CompositeMaterialMatchFilter_t >
    pub const m_vecCompositeInputContainers: usize = 0x30; // CUtlVector< CompositeMaterialInputContainer_t >
    pub const m_vecPropertyMutators: usize = 0x48; // CUtlVector< CompMatPropertyMutator_t >
}

pub mod CompositeMaterialEditorPoint_t {
    pub const m_ModelName: usize = 0x0; // CResourceName
    pub const m_nSequenceIndex: usize = 0xE0; // int32
    pub const m_flCycle: usize = 0xE4; // float32
    pub const m_KVModelStateChoices: usize = 0xE8; // KeyValues3
    pub const m_bEnableChildModel: usize = 0xF8; // bool
    pub const m_ChildModelName: usize = 0x100; // CResourceName
    pub const m_vecCompositeMaterialAssemblyProcedures: usize = 0x1E0; // CUtlVector< CompositeMaterialAssemblyProcedure_t >
    pub const m_vecCompositeMaterials: usize = 0x1F8; // CUtlVector< CompositeMaterial_t >
}

pub mod CompositeMaterialInputContainer_t {
    pub const m_bEnabled: usize = 0x0; // bool
    pub const m_nCompositeMaterialInputContainerSourceType: usize = 0x4; // CompositeMaterialInputContainerSourceType_t
    pub const m_strSpecificContainerMaterial: usize = 0x8; // CResourceName
    pub const m_strAttrName: usize = 0xE8; // CUtlString
    pub const m_strAlias: usize = 0xF0; // CUtlString
    pub const m_vecLooseVariables: usize = 0xF8; // CUtlVector< CompositeMaterialInputLooseVariable_t >
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
    pub const m_nValueIntX: usize = 0x40; // int32
    pub const m_nValueIntY: usize = 0x44; // int32
    pub const m_nValueIntZ: usize = 0x48; // int32
    pub const m_nValueIntW: usize = 0x4C; // int32
    pub const m_bHasFloatBounds: usize = 0x50; // bool
    pub const m_flValueFloatX: usize = 0x54; // float32
    pub const m_flValueFloatX_Min: usize = 0x58; // float32
    pub const m_flValueFloatX_Max: usize = 0x5C; // float32
    pub const m_flValueFloatY: usize = 0x60; // float32
    pub const m_flValueFloatY_Min: usize = 0x64; // float32
    pub const m_flValueFloatY_Max: usize = 0x68; // float32
    pub const m_flValueFloatZ: usize = 0x6C; // float32
    pub const m_flValueFloatZ_Min: usize = 0x70; // float32
    pub const m_flValueFloatZ_Max: usize = 0x74; // float32
    pub const m_flValueFloatW: usize = 0x78; // float32
    pub const m_flValueFloatW_Min: usize = 0x7C; // float32
    pub const m_flValueFloatW_Max: usize = 0x80; // float32
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
    pub const m_vecGeneratedTextures: usize = 0x40; // CUtlVector< GeneratedTextureHandle_t >
}

pub mod CountdownTimer {
    pub const m_duration: usize = 0x8; // float32
    pub const m_timestamp: usize = 0xC; // GameTime_t
    pub const m_timescale: usize = 0x10; // float32
    pub const m_nWorldGroupId: usize = 0x14; // WorldGroupId_t
}

pub mod EngineCountdownTimer {
    pub const m_duration: usize = 0x8; // float32
    pub const m_timestamp: usize = 0xC; // float32
    pub const m_timescale: usize = 0x10; // float32
}

pub mod EntityRenderAttribute_t {
    pub const m_ID: usize = 0x30; // CUtlStringToken
    pub const m_Values: usize = 0x34; // Vector4D
}

pub mod EntitySpottedState_t {
    pub const m_bSpotted: usize = 0x8; // bool
    pub const m_bSpottedByMask: usize = 0xC; // uint32[2]
}

pub mod GeneratedTextureHandle_t {
    pub const m_strBitmapName: usize = 0x0; // CUtlString
}

pub mod IntervalTimer {
    pub const m_timestamp: usize = 0x8; // GameTime_t
    pub const m_nWorldGroupId: usize = 0xC; // WorldGroupId_t
}

pub mod PhysicsRagdollPose_t {
    pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
    pub const m_Transforms: usize = 0x30; // C_NetworkUtlVectorBase< CTransform >
    pub const m_hOwner: usize = 0x48; // CHandle< C_BaseEntity >
    pub const m_bDirty: usize = 0x68; // bool
}

pub mod SellbackPurchaseEntry_t {
    pub const m_unDefIdx: usize = 0x30; // uint16
    pub const m_nCost: usize = 0x34; // int32
    pub const m_nPrevArmor: usize = 0x38; // int32
    pub const m_bPrevHelmet: usize = 0x3C; // bool
    pub const m_hItem: usize = 0x40; // CEntityHandle
}

pub mod TimedEvent {
    pub const m_TimeBetweenEvents: usize = 0x0; // float32
    pub const m_fNextEvent: usize = 0x4; // float32
}

pub mod VPhysicsCollisionAttribute_t {
    pub const m_nInteractsAs: usize = 0x8; // uint64
    pub const m_nInteractsWith: usize = 0x10; // uint64
    pub const m_nInteractsExclude: usize = 0x18; // uint64
    pub const m_nEntityId: usize = 0x20; // uint32
    pub const m_nOwnerId: usize = 0x24; // uint32
    pub const m_nHierarchyId: usize = 0x28; // uint16
    pub const m_nCollisionGroup: usize = 0x2A; // uint8
    pub const m_nCollisionFunctionMask: usize = 0x2B; // uint8
}

pub mod ViewAngleServerChange_t {
    pub const nType: usize = 0x30; // FixAngleSet_t
    pub const qAngle: usize = 0x34; // QAngle
    pub const nIndex: usize = 0x40; // uint32
}

pub mod WeaponPurchaseCount_t {
    pub const m_nItemDefIndex: usize = 0x30; // uint16
    pub const m_nCount: usize = 0x32; // uint16
}

pub mod WeaponPurchaseTracker_t {
    pub const m_weaponPurchases: usize = 0x8; // C_UtlVectorEmbeddedNetworkVar< WeaponPurchaseCount_t >
}

pub mod audioparams_t {
    pub const localSound: usize = 0x8; // Vector[8]
    pub const soundscapeIndex: usize = 0x68; // int32
    pub const localBits: usize = 0x6C; // uint8
    pub const soundscapeEntityListIndex: usize = 0x70; // int32
    pub const soundEventHash: usize = 0x74; // uint32
}

pub mod fogparams_t {
    pub const dirPrimary: usize = 0x8; // Vector
    pub const colorPrimary: usize = 0x14; // Color
    pub const colorSecondary: usize = 0x18; // Color
    pub const colorPrimaryLerpTo: usize = 0x1C; // Color
    pub const colorSecondaryLerpTo: usize = 0x20; // Color
    pub const start: usize = 0x24; // float32
    pub const end: usize = 0x28; // float32
    pub const farz: usize = 0x2C; // float32
    pub const maxdensity: usize = 0x30; // float32
    pub const exponent: usize = 0x34; // float32
    pub const HDRColorScale: usize = 0x38; // float32
    pub const skyboxFogFactor: usize = 0x3C; // float32
    pub const skyboxFogFactorLerpTo: usize = 0x40; // float32
    pub const startLerpTo: usize = 0x44; // float32
    pub const endLerpTo: usize = 0x48; // float32
    pub const maxdensityLerpTo: usize = 0x4C; // float32
    pub const lerptime: usize = 0x50; // GameTime_t
    pub const duration: usize = 0x54; // float32
    pub const blendtobackground: usize = 0x58; // float32
    pub const scattering: usize = 0x5C; // float32
    pub const locallightscale: usize = 0x60; // float32
    pub const enable: usize = 0x64; // bool
    pub const blend: usize = 0x65; // bool
    pub const m_bNoReflectionFog: usize = 0x66; // bool
    pub const m_bPadding: usize = 0x67; // bool
}

pub mod shard_model_desc_t {
    pub const m_nModelID: usize = 0x8; // int32
    pub const m_hMaterial: usize = 0x10; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    pub const m_solid: usize = 0x18; // ShardSolid_t
    pub const m_ShatterPanelMode: usize = 0x19; // ShatterPanelMode
    pub const m_vecPanelSize: usize = 0x1C; // Vector2D
    pub const m_vecStressPositionA: usize = 0x24; // Vector2D
    pub const m_vecStressPositionB: usize = 0x2C; // Vector2D
    pub const m_vecPanelVertices: usize = 0x38; // C_NetworkUtlVectorBase< Vector2D >
    pub const m_flGlassHalfThickness: usize = 0x50; // float32
    pub const m_bHasParent: usize = 0x54; // bool
    pub const m_bParentFrozen: usize = 0x55; // bool
    pub const m_SurfacePropStringToken: usize = 0x58; // CUtlStringToken
    pub const m_LightGroup: usize = 0x5C; // CUtlStringToken
}

pub mod sky3dparams_t {
    pub const scale: usize = 0x8; // int16
    pub const origin: usize = 0xC; // Vector
    pub const bClip3DSkyBoxNearToWorldFar: usize = 0x18; // bool
    pub const flClip3DSkyBoxNearToWorldFarOffset: usize = 0x1C; // float32
    pub const fog: usize = 0x20; // fogparams_t
    pub const m_nWorldGroupID: usize = 0x88; // WorldGroupId_t
}