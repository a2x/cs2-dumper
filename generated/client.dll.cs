public static class ActiveModelConfig_t {
    public const ulong m_Handle = 0x28;
    public const ulong m_Name = 0x30;
    public const ulong m_AssociatedEntities = 0x38;
    public const ulong m_AssociatedEntityNames = 0x50;
}

public static class CAnimGraphNetworkedVariables {
    public const ulong m_PredNetBoolVariables = 0x8;
    public const ulong m_PredNetByteVariables = 0x20;
    public const ulong m_PredNetUInt16Variables = 0x38;
    public const ulong m_PredNetIntVariables = 0x50;
    public const ulong m_PredNetUInt32Variables = 0x68;
    public const ulong m_PredNetUInt64Variables = 0x80;
    public const ulong m_PredNetFloatVariables = 0x98;
    public const ulong m_PredNetVectorVariables = 0xb0;
    public const ulong m_PredNetQuaternionVariables = 0xc8;
    public const ulong m_OwnerOnlyPredNetBoolVariables = 0xe0;
    public const ulong m_OwnerOnlyPredNetByteVariables = 0xf8;
    public const ulong m_OwnerOnlyPredNetUInt16Variables = 0x110;
    public const ulong m_OwnerOnlyPredNetIntVariables = 0x128;
    public const ulong m_OwnerOnlyPredNetUInt32Variables = 0x140;
    public const ulong m_OwnerOnlyPredNetUInt64Variables = 0x158;
    public const ulong m_OwnerOnlyPredNetFloatVariables = 0x170;
    public const ulong m_OwnerOnlyPredNetVectorVariables = 0x188;
    public const ulong m_OwnerOnlyPredNetQuaternionVariables = 0x1a0;
    public const ulong m_nBoolVariablesCount = 0x1b8;
    public const ulong m_nOwnerOnlyBoolVariablesCount = 0x1bc;
    public const ulong m_nRandomSeedOffset = 0x1c0;
    public const ulong m_flLastTeleportTime = 0x1c4;
}

public static class CAttributeList {
    public const ulong m_Attributes = 0x8;
    public const ulong m_pManager = 0x58;
}

public static class CAttributeManager {
    public const ulong m_Providers = 0x8;
    public const ulong m_iReapplyProvisionParity = 0x20;
    public const ulong m_hOuter = 0x24;
    public const ulong m_bPreventLoopback = 0x28;
    public const ulong m_ProviderType = 0x2c;
    public const ulong m_CachedResults = 0x30;
}

public static class CAttributeManager_cached_attribute_float_t {
    public const ulong flIn = 0x0;
    public const ulong iAttribHook = 0x8;
    public const ulong flOut = 0x10;
}

public static class CBaseAnimGraph {
    public const ulong m_bInitiallyPopulateInterpHistory = 0xcc0;
    public const ulong m_bShouldAnimateDuringGameplayPause = 0xcc1;
    public const ulong m_bSuppressAnimEventSounds = 0xcc3;
    public const ulong m_bAnimGraphUpdateEnabled = 0xcd0;
    public const ulong m_flMaxSlopeDistance = 0xcd4;
    public const ulong m_vLastSlopeCheckPos = 0xcd8;
    public const ulong m_vecForce = 0xce8;
    public const ulong m_nForceBone = 0xcf4;
    public const ulong m_pClientsideRagdoll = 0xcf8;
    public const ulong m_bBuiltRagdoll = 0xd00;
    public const ulong m_pRagdollPose = 0xd18;
    public const ulong m_bClientRagdoll = 0xd20;
    public const ulong m_bHasAnimatedMaterialAttributes = 0xd21;
}

public static class CBaseAnimGraphController {
    public const ulong m_baseLayer = 0x18;
    public const ulong m_animGraphNetworkedVars = 0x40;
    public const ulong m_bSequenceFinished = 0x1320;
    public const ulong m_flLastEventCycle = 0x1324;
    public const ulong m_flLastEventAnimTime = 0x1328;
    public const ulong m_flPlaybackRate = 0x132c;
    public const ulong m_flPrevAnimTime = 0x1334;
    public const ulong m_bClientSideAnimation = 0x1338;
    public const ulong m_bNetworkedAnimationInputsChanged = 0x1339;
    public const ulong m_nPrevNewSequenceParity = 0x133a;
    public const ulong m_nPrevResetEventsParity = 0x133b;
    public const ulong m_nNewSequenceParity = 0x133c;
    public const ulong m_nResetEventsParity = 0x1340;
    public const ulong m_nAnimLoopMode = 0x1344;
    public const ulong m_hAnimationUpdate = 0x13e4;
    public const ulong m_hLastAnimEventSequence = 0x13e8;
}

public static class CBasePlayerController {
    public const ulong m_nFinalPredictedTick = 0x548;
    public const ulong m_CommandContext = 0x550;
    public const ulong m_nInButtonsWhichAreToggles = 0x5d0;
    public const ulong m_nTickBase = 0x5d8;
    public const ulong m_hPawn = 0x5dc;
    public const ulong m_hPredictedPawn = 0x5e0;
    public const ulong m_nSplitScreenSlot = 0x5e4;
    public const ulong m_hSplitOwner = 0x5e8;
    public const ulong m_hSplitScreenPlayers = 0x5f0;
    public const ulong m_bIsHLTV = 0x608;
    public const ulong m_iConnected = 0x60c;
    public const ulong m_iszPlayerName = 0x610;
    public const ulong m_steamID = 0x698;
    public const ulong m_bIsLocalPlayerController = 0x6a0;
    public const ulong m_iDesiredFOV = 0x6a4;
}

public static class CBasePlayerVData {
    public const ulong m_sModelName = 0x28;
    public const ulong m_flHeadDamageMultiplier = 0x108;
    public const ulong m_flChestDamageMultiplier = 0x118;
    public const ulong m_flStomachDamageMultiplier = 0x128;
    public const ulong m_flArmDamageMultiplier = 0x138;
    public const ulong m_flLegDamageMultiplier = 0x148;
    public const ulong m_flHoldBreathTime = 0x158;
    public const ulong m_flDrowningDamageInterval = 0x15c;
    public const ulong m_nDrowningDamageInitial = 0x160;
    public const ulong m_nDrowningDamageMax = 0x164;
    public const ulong m_nWaterSpeed = 0x168;
    public const ulong m_flUseRange = 0x16c;
    public const ulong m_flUseAngleTolerance = 0x170;
    public const ulong m_flCrouchTime = 0x174;
}

public static class CBasePlayerWeaponVData {
    public const ulong m_szWorldModel = 0x28;
    public const ulong m_bBuiltRightHanded = 0x108;
    public const ulong m_bAllowFlipping = 0x109;
    public const ulong m_bIsFullAuto = 0x10a;
    public const ulong m_nNumBullets = 0x10c;
    public const ulong m_sMuzzleAttachment = 0x110;
    public const ulong m_szMuzzleFlashParticle = 0x118;
    public const ulong m_iFlags = 0x1f8;
    public const ulong m_nPrimaryAmmoType = 0x1f9;
    public const ulong m_nSecondaryAmmoType = 0x1fa;
    public const ulong m_iMaxClip1 = 0x1fc;
    public const ulong m_iMaxClip2 = 0x200;
    public const ulong m_iDefaultClip1 = 0x204;
    public const ulong m_iDefaultClip2 = 0x208;
    public const ulong m_iWeight = 0x20c;
    public const ulong m_bAutoSwitchTo = 0x210;
    public const ulong m_bAutoSwitchFrom = 0x211;
    public const ulong m_iRumbleEffect = 0x214;
    public const ulong m_aShootSounds = 0x218;
    public const ulong m_iSlot = 0x238;
    public const ulong m_iPosition = 0x23c;
}

public static class CBaseProp {
    public const ulong m_bModelOverrodeBlockLOS = 0xe70;
    public const ulong m_iShapeType = 0xe74;
    public const ulong m_bConformToCollisionBounds = 0xe78;
    public const ulong m_mPreferredCatchTransform = 0xe7c;
}

public static class CBodyComponent {
    public const ulong m_pSceneNode = 0x8;
    public const ulong __m_pChainEntity = 0x20;
}

public static class CBodyComponentBaseAnimGraph {
    public const ulong m_animationController = 0x470;
    public const ulong __m_pChainEntity = 0x18b0;
}

public static class CBodyComponentBaseModelEntity {
    public const ulong __m_pChainEntity = 0x470;
}

public static class CBodyComponentPoint {
    public const ulong m_sceneNode = 0x50;
    public const ulong __m_pChainEntity = 0x1a0;
}

public static class CBodyComponentSkeletonInstance {
    public const ulong m_skeletonInstance = 0x50;
    public const ulong __m_pChainEntity = 0x440;
}

public static class CBombTarget {
    public const ulong m_bBombPlantedHere = 0xcc8;
}

public static class CBuoyancyHelper {
    public const ulong m_flFluidDensity = 0x18;
}

public static class CCSGameModeRules {
    public const ulong __m_pChainEntity = 0x8;
}

public static class CCSGameModeRules_Deathmatch {
    public const ulong m_bFirstThink = 0x30;
    public const ulong m_bFirstThinkAfterConnected = 0x31;
    public const ulong m_flDMBonusStartTime = 0x34;
    public const ulong m_flDMBonusTimeLength = 0x38;
    public const ulong m_nDMBonusWeaponLoadoutSlot = 0x3c;
}

public static class CCSPlayerController {
    public const ulong m_pInGameMoneyServices = 0x6d0;
    public const ulong m_pInventoryServices = 0x6d8;
    public const ulong m_pActionTrackingServices = 0x6e0;
    public const ulong m_pDamageServices = 0x6e8;
    public const ulong m_iPing = 0x6f0;
    public const ulong m_bHasCommunicationAbuseMute = 0x6f4;
    public const ulong m_szCrosshairCodes = 0x6f8;
    public const ulong m_iPendingTeamNum = 0x700;
    public const ulong m_flForceTeamTime = 0x704;
    public const ulong m_iCompTeammateColor = 0x708;
    public const ulong m_bEverPlayedOnTeam = 0x70c;
    public const ulong m_flPreviousForceJoinTeamTime = 0x710;
    public const ulong m_szClan = 0x718;
    public const ulong m_sSanitizedPlayerName = 0x720;
    public const ulong m_iCoachingTeam = 0x728;
    public const ulong m_nPlayerDominated = 0x730;
    public const ulong m_nPlayerDominatingMe = 0x738;
    public const ulong m_iCompetitiveRanking = 0x740;
    public const ulong m_iCompetitiveWins = 0x744;
    public const ulong m_iCompetitiveRankType = 0x748;
    public const ulong m_iCompetitiveRankingPredicted_Win = 0x74c;
    public const ulong m_iCompetitiveRankingPredicted_Loss = 0x750;
    public const ulong m_iCompetitiveRankingPredicted_Tie = 0x754;
    public const ulong m_nEndMatchNextMapVote = 0x758;
    public const ulong m_unActiveQuestId = 0x75c;
    public const ulong m_nQuestProgressReason = 0x760;
    public const ulong m_unPlayerTvControlFlags = 0x764;
    public const ulong m_iDraftIndex = 0x7d0;
    public const ulong m_msQueuedModeDisconnectionTimestamp = 0x7d4;
    public const ulong m_uiAbandonRecordedReason = 0x7d8;
    public const ulong m_bEverFullyConnected = 0x7dc;
    public const ulong m_bAbandonAllowsSurrender = 0x7dd;
    public const ulong m_bAbandonOffersInstantSurrender = 0x7de;
    public const ulong m_bDisconnection1MinWarningPrinted = 0x7df;
    public const ulong m_bScoreReported = 0x7e0;
    public const ulong m_nDisconnectionTick = 0x7e4;
    public const ulong m_bControllingBot = 0x7f0;
    public const ulong m_bHasControlledBotThisRound = 0x7f1;
    public const ulong m_bHasBeenControlledByPlayerThisRound = 0x7f2;
    public const ulong m_nBotsControlledThisRound = 0x7f4;
    public const ulong m_bCanControlObservedBot = 0x7f8;
    public const ulong m_hPlayerPawn = 0x7fc;
    public const ulong m_hObserverPawn = 0x800;
    public const ulong m_bPawnIsAlive = 0x804;
    public const ulong m_iPawnHealth = 0x808;
    public const ulong m_iPawnArmor = 0x80c;
    public const ulong m_bPawnHasDefuser = 0x810;
    public const ulong m_bPawnHasHelmet = 0x811;
    public const ulong m_nPawnCharacterDefIndex = 0x812;
    public const ulong m_iPawnLifetimeStart = 0x814;
    public const ulong m_iPawnLifetimeEnd = 0x818;
    public const ulong m_iPawnGunGameLevel = 0x81c;
    public const ulong m_iPawnBotDifficulty = 0x820;
    public const ulong m_hOriginalControllerOfCurrentPawn = 0x824;
    public const ulong m_iScore = 0x828;
    public const ulong m_vecKills = 0x830;
    public const ulong m_iMVPs = 0x848;
    public const ulong m_bIsPlayerNameDirty = 0x84c;
}

public static class CCSPlayerController_ActionTrackingServices {
    public const ulong m_perRoundStats = 0x40;
    public const ulong m_matchStats = 0x90;
    public const ulong m_iNumRoundKills = 0x108;
    public const ulong m_iNumRoundKillsHeadshots = 0x10c;
}

public static class CCSPlayerController_DamageServices {
    public const ulong m_nSendUpdate = 0x40;
    public const ulong m_DamageList = 0x48;
}

public static class CCSPlayerController_InGameMoneyServices {
    public const ulong m_iAccount = 0x40;
    public const ulong m_iStartAccount = 0x44;
    public const ulong m_iTotalCashSpent = 0x48;
    public const ulong m_iCashSpentThisRound = 0x4c;
    public const ulong m_nPreviousAccount = 0x50;
}

public static class CCSPlayerController_InventoryServices {
    public const ulong m_unMusicID = 0x40;
    public const ulong m_rank = 0x44;
    public const ulong m_nPersonaDataPublicLevel = 0x5c;
    public const ulong m_nPersonaDataPublicCommendsLeader = 0x60;
    public const ulong m_nPersonaDataPublicCommendsTeacher = 0x64;
    public const ulong m_nPersonaDataPublicCommendsFriendly = 0x68;
    public const ulong m_vecTerroristLoadoutCache = 0x70;
    public const ulong m_vecCounterTerroristLoadoutCache = 0xc0;
}

public static class CCSPlayer_ActionTrackingServices {
    public const ulong m_hLastWeaponBeforeC4AutoSwitch = 0x40;
    public const ulong m_bIsRescuing = 0x44;
    public const ulong m_weaponPurchasesThisMatch = 0x48;
    public const ulong m_weaponPurchasesThisRound = 0xa0;
}

public static class CCSPlayer_BulletServices {
    public const ulong m_totalHitsOnServer = 0x40;
}

public static class CCSPlayer_BuyServices {
    public const ulong m_vecSellbackPurchaseEntries = 0x40;
}

public static class CCSPlayer_CameraServices {
    public const ulong m_iFOV = 0x210;
    public const ulong m_iFOVStart = 0x214;
    public const ulong m_flFOVTime = 0x218;
    public const ulong m_flFOVRate = 0x21c;
    public const ulong m_hZoomOwner = 0x220;
    public const ulong m_flLastShotFOV = 0x224;
    public const ulong m_flDeathCamTilt = 0x228;
}

public static class CCSPlayer_HostageServices {
    public const ulong m_hCarriedHostage = 0x40;
    public const ulong m_hCarriedHostageProp = 0x44;
}

public static class CCSPlayer_ItemServices {
    public const ulong m_bHasDefuser = 0x40;
    public const ulong m_bHasHelmet = 0x41;
    public const ulong m_bHasHeavyArmor = 0x42;
}

public static class CCSPlayer_MovementServices {
    public const ulong m_flMaxFallVelocity = 0x210;
    public const ulong m_vecLadderNormal = 0x214;
    public const ulong m_nLadderSurfacePropIndex = 0x220;
    public const ulong m_flDuckAmount = 0x224;
    public const ulong m_flDuckSpeed = 0x228;
    public const ulong m_bDuckOverride = 0x22c;
    public const ulong m_bDesiresDuck = 0x22d;
    public const ulong m_flDuckOffset = 0x230;
    public const ulong m_nDuckTimeMsecs = 0x234;
    public const ulong m_nDuckJumpTimeMsecs = 0x238;
    public const ulong m_nJumpTimeMsecs = 0x23c;
    public const ulong m_flLastDuckTime = 0x240;
    public const ulong m_vecLastPositionAtFullCrouchSpeed = 0x250;
    public const ulong m_duckUntilOnGround = 0x258;
    public const ulong m_bHasWalkMovedSinceLastJump = 0x259;
    public const ulong m_bInStuckTest = 0x25a;
    public const ulong m_flStuckCheckTime = 0x268;
    public const ulong m_nTraceCount = 0x468;
    public const ulong m_StuckLast = 0x46c;
    public const ulong m_bSpeedCropped = 0x470;
    public const ulong m_nOldWaterLevel = 0x474;
    public const ulong m_flWaterEntryTime = 0x478;
    public const ulong m_vecForward = 0x47c;
    public const ulong m_vecLeft = 0x488;
    public const ulong m_vecUp = 0x494;
    public const ulong m_vecPreviouslyPredictedOrigin = 0x4a0;
    public const ulong m_bOldJumpPressed = 0x4ac;
    public const ulong m_flJumpPressedTime = 0x4b0;
    public const ulong m_flJumpUntil = 0x4b4;
    public const ulong m_flJumpVel = 0x4b8;
    public const ulong m_fStashGrenadeParameterWhen = 0x4bc;
    public const ulong m_nButtonDownMaskPrev = 0x4c0;
    public const ulong m_flOffsetTickCompleteTime = 0x4c8;
    public const ulong m_flOffsetTickStashedSpeed = 0x4cc;
    public const ulong m_bUpdatePredictedOriginAfterDataUpdate = 0x4d0;
}

public static class CCSPlayer_ObserverServices {
    public const ulong m_hLastObserverTarget = 0x58;
    public const ulong m_vecObserverInterpolateOffset = 0x5c;
    public const ulong m_vecObserverInterpStartPos = 0x68;
    public const ulong m_flObsInterp_PathLength = 0x74;
    public const ulong m_qObsInterp_OrientationStart = 0x80;
    public const ulong m_qObsInterp_OrientationTravelDir = 0x90;
    public const ulong m_obsInterpState = 0xa0;
    public const ulong m_bObserverInterpolationNeedsDeferredSetup = 0xa4;
}

public static class CCSPlayer_PingServices {
    public const ulong m_hPlayerPing = 0x40;
}

public static class CCSPlayer_ViewModelServices {
    public const ulong m_hViewModel = 0x40;
}

public static class CCSPlayer_WaterServices {
    public const ulong m_flWaterJumpTime = 0x40;
    public const ulong m_vecWaterJumpVel = 0x44;
    public const ulong m_flSwimSoundTime = 0x50;
}

public static class CCSPlayer_WeaponServices {
    public const ulong m_flNextAttack = 0xa8;
    public const ulong m_bIsLookingAtWeapon = 0xac;
    public const ulong m_bIsHoldingLookAtWeapon = 0xad;
}

public static class CClientAlphaProperty {
    public const ulong m_nRenderFX = 0x10;
    public const ulong m_nRenderMode = 0x11;
    public const ulong m_bAlphaOverride = 0x0;
    public const ulong m_bShadowAlphaOverride = 0x0;
    public const ulong m_nReserved = 0x0;
    public const ulong m_nAlpha = 0x13;
    public const ulong m_nDesyncOffset = 0x14;
    public const ulong m_nReserved2 = 0x16;
    public const ulong m_nDistFadeStart = 0x18;
    public const ulong m_nDistFadeEnd = 0x1a;
    public const ulong m_flFadeScale = 0x1c;
    public const ulong m_flRenderFxStartTime = 0x20;
    public const ulong m_flRenderFxDuration = 0x24;
}

public static class CCollisionProperty {
    public const ulong m_collisionAttribute = 0x10;
    public const ulong m_vecMins = 0x40;
    public const ulong m_vecMaxs = 0x4c;
    public const ulong m_usSolidFlags = 0x5a;
    public const ulong m_nSolidType = 0x5b;
    public const ulong m_triggerBloat = 0x5c;
    public const ulong m_nSurroundType = 0x5d;
    public const ulong m_CollisionGroup = 0x5e;
    public const ulong m_nEnablePhysics = 0x5f;
    public const ulong m_flBoundingRadius = 0x60;
    public const ulong m_vecSpecifiedSurroundingMins = 0x64;
    public const ulong m_vecSpecifiedSurroundingMaxs = 0x70;
    public const ulong m_vecSurroundingMaxs = 0x7c;
    public const ulong m_vecSurroundingMins = 0x88;
    public const ulong m_vCapsuleCenter1 = 0x94;
    public const ulong m_vCapsuleCenter2 = 0xa0;
    public const ulong m_flCapsuleRadius = 0xac;
}

public static class CComicBook {
    public const ulong m_CoverImage = 0x8;
    public const ulong m_XmlFile = 0x18;
}

public static class CCompositeMaterialEditorDoc {
    public const ulong m_nVersion = 0x8;
    public const ulong m_Points = 0x10;
    public const ulong m_KVthumbnail = 0x28;
}

public static class CDamageRecord {
    public const ulong m_PlayerDamager = 0x28;
    public const ulong m_PlayerRecipient = 0x2c;
    public const ulong m_hPlayerControllerDamager = 0x30;
    public const ulong m_hPlayerControllerRecipient = 0x34;
    public const ulong m_szPlayerDamagerName = 0x38;
    public const ulong m_szPlayerRecipientName = 0x40;
    public const ulong m_DamagerXuid = 0x48;
    public const ulong m_RecipientXuid = 0x50;
    public const ulong m_iDamage = 0x58;
    public const ulong m_iActualHealthRemoved = 0x5c;
    public const ulong m_iNumHits = 0x60;
    public const ulong m_iLastBulletUpdate = 0x64;
    public const ulong m_bIsOtherEnemy = 0x68;
    public const ulong m_killType = 0x69;
}

public static class CDecalInfo {
    public const ulong m_flAnimationScale = 0x0;
    public const ulong m_flAnimationLifeSpan = 0x4;
    public const ulong m_flPlaceTime = 0x8;
    public const ulong m_flFadeStartTime = 0xc;
    public const ulong m_flFadeDuration = 0x10;
    public const ulong m_nVBSlot = 0x14;
    public const ulong m_nBoneIndex = 0x18;
    public const ulong m_pNext = 0x28;
    public const ulong m_pPrev = 0x30;
    public const ulong m_nDecalMaterialIndex = 0x90;
}

public static class CEconItemAttribute {
    public const ulong m_iAttributeDefinitionIndex = 0x30;
    public const ulong m_flValue = 0x34;
    public const ulong m_flInitialValue = 0x38;
    public const ulong m_nRefundableCurrency = 0x3c;
    public const ulong m_bSetBonus = 0x40;
}

public static class CEffectData {
    public const ulong m_vOrigin = 0x8;
    public const ulong m_vStart = 0x14;
    public const ulong m_vNormal = 0x20;
    public const ulong m_vAngles = 0x2c;
    public const ulong m_hEntity = 0x38;
    public const ulong m_hOtherEntity = 0x3c;
    public const ulong m_flScale = 0x40;
    public const ulong m_flMagnitude = 0x44;
    public const ulong m_flRadius = 0x48;
    public const ulong m_nSurfaceProp = 0x4c;
    public const ulong m_nEffectIndex = 0x50;
    public const ulong m_nDamageType = 0x58;
    public const ulong m_nPenetrate = 0x5c;
    public const ulong m_nMaterial = 0x5e;
    public const ulong m_nHitBox = 0x60;
    public const ulong m_nColor = 0x62;
    public const ulong m_fFlags = 0x63;
    public const ulong m_nAttachmentIndex = 0x64;
    public const ulong m_nAttachmentName = 0x68;
    public const ulong m_iEffectName = 0x6c;
    public const ulong m_nExplosionType = 0x6e;
}

public static class CEntityIdentity {
    public const ulong m_nameStringableIndex = 0x14;
    public const ulong m_name = 0x18;
    public const ulong m_designerName = 0x20;
    public const ulong m_flags = 0x30;
    public const ulong m_worldGroupId = 0x38;
    public const ulong m_fDataObjectTypes = 0x3c;
    public const ulong m_PathIndex = 0x40;
    public const ulong m_pPrev = 0x58;
    public const ulong m_pNext = 0x60;
    public const ulong m_pPrevByClass = 0x68;
    public const ulong m_pNextByClass = 0x70;
}

public static class CEntityInstance {
    public const ulong m_iszPrivateVScripts = 0x8;
    public const ulong m_pEntity = 0x10;
    public const ulong m_CScriptComponent = 0x28;
}

public static class CFireOverlay {
    public const ulong m_pOwner = 0xd0;
    public const ulong m_vBaseColors = 0xd8;
    public const ulong m_flScale = 0x108;
    public const ulong m_nGUID = 0x10c;
}

public static class CFlashlightEffect {
    public const ulong m_bIsOn = 0x10;
    public const ulong m_bMuzzleFlashEnabled = 0x20;
    public const ulong m_flMuzzleFlashBrightness = 0x24;
    public const ulong m_quatMuzzleFlashOrientation = 0x30;
    public const ulong m_vecMuzzleFlashOrigin = 0x40;
    public const ulong m_flFov = 0x4c;
    public const ulong m_flFarZ = 0x50;
    public const ulong m_flLinearAtten = 0x54;
    public const ulong m_bCastsShadows = 0x58;
    public const ulong m_flCurrentPullBackDist = 0x5c;
    public const ulong m_FlashlightTexture = 0x60;
    public const ulong m_MuzzleFlashTexture = 0x68;
    public const ulong m_textureName = 0x70;
}

public static class CFuncWater {
    public const ulong m_BuoyancyHelper = 0xcc0;
}

public static class CGameSceneNode {
    public const ulong m_nodeToWorld = 0x10;
    public const ulong m_pOwner = 0x30;
    public const ulong m_pParent = 0x38;
    public const ulong m_pChild = 0x40;
    public const ulong m_pNextSibling = 0x48;
    public const ulong m_hParent = 0x70;
    public const ulong m_vecOrigin = 0x80;
    public const ulong m_angRotation = 0xb8;
    public const ulong m_flScale = 0xc4;
    public const ulong m_vecAbsOrigin = 0xc8;
    public const ulong m_angAbsRotation = 0xd4;
    public const ulong m_flAbsScale = 0xe0;
    public const ulong m_nParentAttachmentOrBone = 0xe4;
    public const ulong m_bDebugAbsOriginChanges = 0xe6;
    public const ulong m_bDormant = 0xe7;
    public const ulong m_bForceParentToBeNetworked = 0xe8;
    public const ulong m_bDirtyHierarchy = 0x0;
    public const ulong m_bDirtyBoneMergeInfo = 0x0;
    public const ulong m_bNetworkedPositionChanged = 0x0;
    public const ulong m_bNetworkedAnglesChanged = 0x0;
    public const ulong m_bNetworkedScaleChanged = 0x0;
    public const ulong m_bWillBeCallingPostDataUpdate = 0x0;
    public const ulong m_bNotifyBoneTransformsChanged = 0x0;
    public const ulong m_bBoneMergeFlex = 0x0;
    public const ulong m_nLatchAbsOrigin = 0x0;
    public const ulong m_bDirtyBoneMergeBoneToRoot = 0x0;
    public const ulong m_nHierarchicalDepth = 0xeb;
    public const ulong m_nHierarchyType = 0xec;
    public const ulong m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xed;
    public const ulong m_name = 0xf0;
    public const ulong m_hierarchyAttachName = 0x130;
    public const ulong m_flZOffset = 0x134;
    public const ulong m_vRenderOrigin = 0x138;
}

public static class CGameSceneNodeHandle {
    public const ulong m_hOwner = 0x8;
    public const ulong m_name = 0xc;
}

public static class CGlobalLightBase {
    public const ulong m_bSpotLight = 0x10;
    public const ulong m_SpotLightOrigin = 0x14;
    public const ulong m_SpotLightAngles = 0x20;
    public const ulong m_ShadowDirection = 0x2c;
    public const ulong m_AmbientDirection = 0x38;
    public const ulong m_SpecularDirection = 0x44;
    public const ulong m_InspectorSpecularDirection = 0x50;
    public const ulong m_flSpecularPower = 0x5c;
    public const ulong m_flSpecularIndependence = 0x60;
    public const ulong m_SpecularColor = 0x64;
    public const ulong m_bStartDisabled = 0x68;
    public const ulong m_bEnabled = 0x69;
    public const ulong m_LightColor = 0x6a;
    public const ulong m_AmbientColor1 = 0x6e;
    public const ulong m_AmbientColor2 = 0x72;
    public const ulong m_AmbientColor3 = 0x76;
    public const ulong m_flSunDistance = 0x7c;
    public const ulong m_flFOV = 0x80;
    public const ulong m_flNearZ = 0x84;
    public const ulong m_flFarZ = 0x88;
    public const ulong m_bEnableShadows = 0x8c;
    public const ulong m_bOldEnableShadows = 0x8d;
    public const ulong m_bBackgroundClearNotRequired = 0x8e;
    public const ulong m_flCloudScale = 0x90;
    public const ulong m_flCloud1Speed = 0x94;
    public const ulong m_flCloud1Direction = 0x98;
    public const ulong m_flCloud2Speed = 0x9c;
    public const ulong m_flCloud2Direction = 0xa0;
    public const ulong m_flAmbientScale1 = 0xb0;
    public const ulong m_flAmbientScale2 = 0xb4;
    public const ulong m_flGroundScale = 0xb8;
    public const ulong m_flLightScale = 0xbc;
    public const ulong m_flFoWDarkness = 0xc0;
    public const ulong m_bEnableSeparateSkyboxFog = 0xc4;
    public const ulong m_vFowColor = 0xc8;
    public const ulong m_ViewOrigin = 0xd4;
    public const ulong m_ViewAngles = 0xe0;
    public const ulong m_flViewFoV = 0xec;
    public const ulong m_WorldPoints = 0xf0;
    public const ulong m_vFogOffsetLayer0 = 0x4a8;
    public const ulong m_vFogOffsetLayer1 = 0x4b0;
    public const ulong m_hEnvWind = 0x4b8;
    public const ulong m_hEnvSky = 0x4bc;
}

public static class CGlowOverlay {
    public const ulong m_vPos = 0x8;
    public const ulong m_bDirectional = 0x14;
    public const ulong m_vDirection = 0x18;
    public const ulong m_bInSky = 0x24;
    public const ulong m_skyObstructionScale = 0x28;
    public const ulong m_Sprites = 0x30;
    public const ulong m_nSprites = 0xb0;
    public const ulong m_flProxyRadius = 0xb4;
    public const ulong m_flHDRColorScale = 0xb8;
    public const ulong m_flGlowObstructionScale = 0xbc;
    public const ulong m_bCacheGlowObstruction = 0xc0;
    public const ulong m_bCacheSkyObstruction = 0xc1;
    public const ulong m_bActivated = 0xc2;
    public const ulong m_ListIndex = 0xc4;
    public const ulong m_queryHandle = 0xc8;
}

public static class CGlowProperty {
    public const ulong m_fGlowColor = 0x8;
    public const ulong m_iGlowType = 0x30;
    public const ulong m_iGlowTeam = 0x34;
    public const ulong m_nGlowRange = 0x38;
    public const ulong m_nGlowRangeMin = 0x3c;
    public const ulong m_glowColorOverride = 0x40;
    public const ulong m_bFlashing = 0x44;
    public const ulong m_flGlowTime = 0x48;
    public const ulong m_flGlowStartTime = 0x4c;
    public const ulong m_bEligibleForScreenHighlight = 0x50;
    public const ulong m_bGlowing = 0x51;
}

public static class CGlowSprite {
    public const ulong m_vColor = 0x0;
    public const ulong m_flHorzSize = 0xc;
    public const ulong m_flVertSize = 0x10;
    public const ulong m_hMaterial = 0x18;
}

public static class CGrenadeTracer {
    public const ulong m_flTracerDuration = 0xce0;
    public const ulong m_nType = 0xce4;
}

public static class CHitboxComponent {
    public const ulong m_bvDisabledHitGroups = 0x24;
}

public static class CInfoDynamicShadowHint {
    public const ulong m_bDisabled = 0x540;
    public const ulong m_flRange = 0x544;
    public const ulong m_nImportance = 0x548;
    public const ulong m_nLightChoice = 0x54c;
    public const ulong m_hLight = 0x550;
}

public static class CInfoDynamicShadowHintBox {
    public const ulong m_vBoxMins = 0x558;
    public const ulong m_vBoxMaxs = 0x564;
}

public static class CInfoOffscreenPanoramaTexture {
    public const ulong m_bDisabled = 0x540;
    public const ulong m_nResolutionX = 0x544;
    public const ulong m_nResolutionY = 0x548;
    public const ulong m_szLayoutFileName = 0x550;
    public const ulong m_RenderAttrName = 0x558;
    public const ulong m_TargetEntities = 0x560;
    public const ulong m_nTargetChangeCount = 0x578;
    public const ulong m_vecCSSClasses = 0x580;
    public const ulong m_bCheckCSSClasses = 0x6f8;
}

public static class CInfoWorldLayer {
    public const ulong m_pOutputOnEntitiesSpawned = 0x540;
    public const ulong m_worldName = 0x568;
    public const ulong m_layerName = 0x570;
    public const ulong m_bWorldLayerVisible = 0x578;
    public const ulong m_bEntitiesSpawned = 0x579;
    public const ulong m_bCreateAsChildSpawnGroup = 0x57a;
    public const ulong m_hLayerSpawnGroup = 0x57c;
    public const ulong m_bWorldLayerActuallyVisible = 0x580;
}

public static class CInterpolatedValue {
    public const ulong m_flStartTime = 0x0;
    public const ulong m_flEndTime = 0x4;
    public const ulong m_flStartValue = 0x8;
    public const ulong m_flEndValue = 0xc;
    public const ulong m_nInterpType = 0x10;
}

public static class CLightComponent {
    public const ulong __m_pChainEntity = 0x48;
    public const ulong m_Color = 0x85;
    public const ulong m_SecondaryColor = 0x89;
    public const ulong m_flBrightness = 0x90;
    public const ulong m_flBrightnessScale = 0x94;
    public const ulong m_flBrightnessMult = 0x98;
    public const ulong m_flRange = 0x9c;
    public const ulong m_flFalloff = 0xa0;
    public const ulong m_flAttenuation0 = 0xa4;
    public const ulong m_flAttenuation1 = 0xa8;
    public const ulong m_flAttenuation2 = 0xac;
    public const ulong m_flTheta = 0xb0;
    public const ulong m_flPhi = 0xb4;
    public const ulong m_hLightCookie = 0xb8;
    public const ulong m_nCascades = 0xc0;
    public const ulong m_nCastShadows = 0xc4;
    public const ulong m_nShadowWidth = 0xc8;
    public const ulong m_nShadowHeight = 0xcc;
    public const ulong m_bRenderDiffuse = 0xd0;
    public const ulong m_nRenderSpecular = 0xd4;
    public const ulong m_bRenderTransmissive = 0xd8;
    public const ulong m_flOrthoLightWidth = 0xdc;
    public const ulong m_flOrthoLightHeight = 0xe0;
    public const ulong m_nStyle = 0xe4;
    public const ulong m_Pattern = 0xe8;
    public const ulong m_nCascadeRenderStaticObjects = 0xf0;
    public const ulong m_flShadowCascadeCrossFade = 0xf4;
    public const ulong m_flShadowCascadeDistanceFade = 0xf8;
    public const ulong m_flShadowCascadeDistance0 = 0xfc;
    public const ulong m_flShadowCascadeDistance1 = 0x100;
    public const ulong m_flShadowCascadeDistance2 = 0x104;
    public const ulong m_flShadowCascadeDistance3 = 0x108;
    public const ulong m_nShadowCascadeResolution0 = 0x10c;
    public const ulong m_nShadowCascadeResolution1 = 0x110;
    public const ulong m_nShadowCascadeResolution2 = 0x114;
    public const ulong m_nShadowCascadeResolution3 = 0x118;
    public const ulong m_bUsesBakedShadowing = 0x11c;
    public const ulong m_nShadowPriority = 0x120;
    public const ulong m_nBakedShadowIndex = 0x124;
    public const ulong m_bRenderToCubemaps = 0x128;
    public const ulong m_LightGroups = 0x130;
    public const ulong m_nDirectLight = 0x138;
    public const ulong m_nIndirectLight = 0x13c;
    public const ulong m_flFadeMinDist = 0x140;
    public const ulong m_flFadeMaxDist = 0x144;
    public const ulong m_flShadowFadeMinDist = 0x148;
    public const ulong m_flShadowFadeMaxDist = 0x14c;
    public const ulong m_bEnabled = 0x150;
    public const ulong m_bFlicker = 0x151;
    public const ulong m_bPrecomputedFieldsValid = 0x152;
    public const ulong m_vPrecomputedBoundsMins = 0x154;
    public const ulong m_vPrecomputedBoundsMaxs = 0x160;
    public const ulong m_vPrecomputedOBBOrigin = 0x16c;
    public const ulong m_vPrecomputedOBBAngles = 0x178;
    public const ulong m_vPrecomputedOBBExtent = 0x184;
    public const ulong m_flPrecomputedMaxRange = 0x190;
    public const ulong m_nFogLightingMode = 0x194;
    public const ulong m_flFogContributionStength = 0x198;
    public const ulong m_flNearClipPlane = 0x19c;
    public const ulong m_SkyColor = 0x1a0;
    public const ulong m_flSkyIntensity = 0x1a4;
    public const ulong m_SkyAmbientBounce = 0x1a8;
    public const ulong m_bUseSecondaryColor = 0x1ac;
    public const ulong m_bMixedShadows = 0x1ad;
    public const ulong m_flLightStyleStartTime = 0x1b0;
    public const ulong m_flCapsuleLength = 0x1b4;
    public const ulong m_flMinRoughness = 0x1b8;
}

public static class CLogicRelay {
    public const ulong m_OnTrigger = 0x540;
    public const ulong m_OnSpawn = 0x568;
    public const ulong m_bDisabled = 0x590;
    public const ulong m_bWaitForRefire = 0x591;
    public const ulong m_bTriggerOnce = 0x592;
    public const ulong m_bFastRetrigger = 0x593;
    public const ulong m_bPassthoughCaller = 0x594;
}

public static class CModelState {
    public const ulong m_hModel = 0xa0;
    public const ulong m_ModelName = 0xa8;
    public const ulong m_bClientClothCreationSuppressed = 0xe8;
    public const ulong m_MeshGroupMask = 0x180;
    public const ulong m_nIdealMotionType = 0x222;
    public const ulong m_nForceLOD = 0x223;
    public const ulong m_nClothUpdateFlags = 0x224;
}

public static class CNetworkedSequenceOperation {
    public const ulong m_hSequence = 0x8;
    public const ulong m_flPrevCycle = 0xc;
    public const ulong m_flCycle = 0x10;
    public const ulong m_flWeight = 0x14;
    public const ulong m_bSequenceChangeNetworked = 0x1c;
    public const ulong m_bDiscontinuity = 0x1d;
    public const ulong m_flPrevCycleFromDiscontinuity = 0x20;
    public const ulong m_flPrevCycleForAnimEventDetection = 0x24;
}

public static class CPlayer_CameraServices {
    public const ulong m_vecCsViewPunchAngle = 0x40;
    public const ulong m_nCsViewPunchAngleTick = 0x4c;
    public const ulong m_flCsViewPunchAngleTickRatio = 0x50;
    public const ulong m_PlayerFog = 0x58;
    public const ulong m_hColorCorrectionCtrl = 0x98;
    public const ulong m_hViewEntity = 0x9c;
    public const ulong m_hTonemapController = 0xa0;
    public const ulong m_audio = 0xa8;
    public const ulong m_PostProcessingVolumes = 0x120;
    public const ulong m_flOldPlayerZ = 0x138;
    public const ulong m_flOldPlayerViewOffsetZ = 0x13c;
    public const ulong m_CurrentFog = 0x140;
    public const ulong m_hOldFogController = 0x1a8;
    public const ulong m_bOverrideFogColor = 0x1ac;
    public const ulong m_OverrideFogColor = 0x1b1;
    public const ulong m_bOverrideFogStartEnd = 0x1c5;
    public const ulong m_fOverrideFogStart = 0x1cc;
    public const ulong m_fOverrideFogEnd = 0x1e0;
    public const ulong m_hActivePostProcessingVolume = 0x1f4;
    public const ulong m_angDemoViewAngles = 0x1f8;
}

public static class CPlayer_MovementServices {
    public const ulong m_nImpulse = 0x40;
    public const ulong m_nButtons = 0x48;
    public const ulong m_nQueuedButtonDownMask = 0x68;
    public const ulong m_nQueuedButtonChangeMask = 0x70;
    public const ulong m_nButtonDoublePressed = 0x78;
    public const ulong m_pButtonPressedCmdNumber = 0x80;
    public const ulong m_nLastCommandNumberProcessed = 0x180;
    public const ulong m_nToggleButtonDownMask = 0x188;
    public const ulong m_flMaxspeed = 0x190;
    public const ulong m_arrForceSubtickMoveWhen = 0x194;
    public const ulong m_flForwardMove = 0x1a4;
    public const ulong m_flLeftMove = 0x1a8;
    public const ulong m_flUpMove = 0x1ac;
    public const ulong m_vecLastMovementImpulses = 0x1b0;
    public const ulong m_vecOldViewAngles = 0x1bc;
}

public static class CPlayer_MovementServices_Humanoid {
    public const ulong m_flStepSoundTime = 0x1d0;
    public const ulong m_flFallVelocity = 0x1d4;
    public const ulong m_bInCrouch = 0x1d8;
    public const ulong m_nCrouchState = 0x1dc;
    public const ulong m_flCrouchTransitionStartTime = 0x1e0;
    public const ulong m_bDucked = 0x1e4;
    public const ulong m_bDucking = 0x1e5;
    public const ulong m_bInDuckJump = 0x1e6;
    public const ulong m_groundNormal = 0x1e8;
    public const ulong m_flSurfaceFriction = 0x1f4;
    public const ulong m_surfaceProps = 0x1f8;
    public const ulong m_nStepside = 0x208;
}

public static class CPlayer_ObserverServices {
    public const ulong m_iObserverMode = 0x40;
    public const ulong m_hObserverTarget = 0x44;
    public const ulong m_iObserverLastMode = 0x48;
    public const ulong m_bForcedObserverMode = 0x4c;
    public const ulong m_flObserverChaseDistance = 0x50;
    public const ulong m_flObserverChaseDistanceCalcTime = 0x54;
}

public static class CPlayer_WeaponServices {
    public const ulong m_bAllowSwitchToNoWeapon = 0x40;
    public const ulong m_hMyWeapons = 0x48;
    public const ulong m_hActiveWeapon = 0x60;
    public const ulong m_hLastWeapon = 0x64;
    public const ulong m_iAmmo = 0x68;
}

public static class CPointOffScreenIndicatorUi {
    public const ulong m_bBeenEnabled = 0xf20;
    public const ulong m_bHide = 0xf21;
    public const ulong m_flSeenTargetTime = 0xf24;
    public const ulong m_pTargetPanel = 0xf28;
}

public static class CPointTemplate {
    public const ulong m_iszWorldName = 0x540;
    public const ulong m_iszSource2EntityLumpName = 0x548;
    public const ulong m_iszEntityFilterName = 0x550;
    public const ulong m_flTimeoutInterval = 0x558;
    public const ulong m_bAsynchronouslySpawnEntities = 0x55c;
    public const ulong m_pOutputOnSpawned = 0x560;
    public const ulong m_clientOnlyEntityBehavior = 0x588;
    public const ulong m_ownerSpawnGroupType = 0x58c;
    public const ulong m_createdSpawnGroupHandles = 0x590;
    public const ulong m_SpawnedEntityHandles = 0x5a8;
    public const ulong m_ScriptSpawnCallback = 0x5c0;
    public const ulong m_ScriptCallbackScope = 0x5c8;
}

public static class CPrecipitationVData {
    public const ulong m_szParticlePrecipitationEffect = 0x28;
    public const ulong m_flInnerDistance = 0x108;
    public const ulong m_nAttachType = 0x10c;
    public const ulong m_bBatchSameVolumeType = 0x110;
    public const ulong m_nRTEnvCP = 0x114;
    public const ulong m_nRTEnvCPComponent = 0x118;
    public const ulong m_szModifier = 0x120;
}

public static class CProjectedTextureBase {
    public const ulong m_hTargetEntity = 0xc;
    public const ulong m_bState = 0x10;
    public const ulong m_bAlwaysUpdate = 0x11;
    public const ulong m_flLightFOV = 0x14;
    public const ulong m_bEnableShadows = 0x18;
    public const ulong m_bSimpleProjection = 0x19;
    public const ulong m_bLightOnlyTarget = 0x1a;
    public const ulong m_bLightWorld = 0x1b;
    public const ulong m_bCameraSpace = 0x1c;
    public const ulong m_flBrightnessScale = 0x20;
    public const ulong m_LightColor = 0x24;
    public const ulong m_flIntensity = 0x28;
    public const ulong m_flLinearAttenuation = 0x2c;
    public const ulong m_flQuadraticAttenuation = 0x30;
    public const ulong m_bVolumetric = 0x34;
    public const ulong m_flVolumetricIntensity = 0x38;
    public const ulong m_flNoiseStrength = 0x3c;
    public const ulong m_flFlashlightTime = 0x40;
    public const ulong m_nNumPlanes = 0x44;
    public const ulong m_flPlaneOffset = 0x48;
    public const ulong m_flColorTransitionTime = 0x4c;
    public const ulong m_flAmbient = 0x50;
    public const ulong m_SpotlightTextureName = 0x54;
    public const ulong m_nSpotlightTextureFrame = 0x254;
    public const ulong m_nShadowQuality = 0x258;
    public const ulong m_flNearZ = 0x25c;
    public const ulong m_flFarZ = 0x260;
    public const ulong m_flProjectionSize = 0x264;
    public const ulong m_flRotation = 0x268;
    public const ulong m_bFlipHorizontal = 0x26c;
}

public static class CRenderComponent {
    public const ulong __m_pChainEntity = 0x10;
    public const ulong m_bIsRenderingWithViewModels = 0x50;
    public const ulong m_nSplitscreenFlags = 0x54;
    public const ulong m_bEnableRendering = 0x60;
    public const ulong m_bInterpolationReadyToDraw = 0xb0;
}

public static class CSMatchStats_t {
    public const ulong m_iEnemy5Ks = 0x68;
    public const ulong m_iEnemy4Ks = 0x6c;
    public const ulong m_iEnemy3Ks = 0x70;
}

public static class CSPerRoundStats_t {
    public const ulong m_iKills = 0x30;
    public const ulong m_iDeaths = 0x34;
    public const ulong m_iAssists = 0x38;
    public const ulong m_iDamage = 0x3c;
    public const ulong m_iEquipmentValue = 0x40;
    public const ulong m_iMoneySaved = 0x44;
    public const ulong m_iKillReward = 0x48;
    public const ulong m_iLiveTime = 0x4c;
    public const ulong m_iHeadShotKills = 0x50;
    public const ulong m_iObjective = 0x54;
    public const ulong m_iCashEarned = 0x58;
    public const ulong m_iUtilityDamage = 0x5c;
    public const ulong m_iEnemiesFlashed = 0x60;
}

public static class CScriptComponent {
    public const ulong m_scriptClassName = 0x30;
}

public static class CSkeletonInstance {
    public const ulong m_modelState = 0x160;
    public const ulong m_bIsAnimationEnabled = 0x390;
    public const ulong m_bUseParentRenderBounds = 0x391;
    public const ulong m_bDisableSolidCollisionsForHierarchy = 0x392;
    public const ulong m_bDirtyMotionType = 0x0;
    public const ulong m_bIsGeneratingLatchedParentSpaceState = 0x0;
    public const ulong m_materialGroup = 0x394;
    public const ulong m_nHitboxSet = 0x398;
}

public static class CSkyboxReference {
    public const ulong m_worldGroupId = 0x540;
    public const ulong m_hSkyCamera = 0x544;
}

public static class CTimeline {
    public const ulong m_flValues = 0x10;
    public const ulong m_nValueCounts = 0x110;
    public const ulong m_nBucketCount = 0x210;
    public const ulong m_flInterval = 0x214;
    public const ulong m_flFinalValue = 0x218;
    public const ulong m_nCompressionType = 0x21c;
    public const ulong m_bStopped = 0x220;
}

public static class CWeaponCSBaseVData {
    public const ulong m_WeaponType = 0x240;
    public const ulong m_WeaponCategory = 0x244;
    public const ulong m_szViewModel = 0x248;
    public const ulong m_szPlayerModel = 0x328;
    public const ulong m_szWorldDroppedModel = 0x408;
    public const ulong m_szAimsightLensMaskModel = 0x4e8;
    public const ulong m_szMagazineModel = 0x5c8;
    public const ulong m_szHeatEffect = 0x6a8;
    public const ulong m_szEjectBrassEffect = 0x788;
    public const ulong m_szMuzzleFlashParticleAlt = 0x868;
    public const ulong m_szMuzzleFlashThirdPersonParticle = 0x948;
    public const ulong m_szMuzzleFlashThirdPersonParticleAlt = 0xa28;
    public const ulong m_szTracerParticle = 0xb08;
    public const ulong m_GearSlot = 0xbe8;
    public const ulong m_GearSlotPosition = 0xbec;
    public const ulong m_DefaultLoadoutSlot = 0xbf0;
    public const ulong m_sWrongTeamMsg = 0xbf8;
    public const ulong m_nPrice = 0xc00;
    public const ulong m_nKillAward = 0xc04;
    public const ulong m_nPrimaryReserveAmmoMax = 0xc08;
    public const ulong m_nSecondaryReserveAmmoMax = 0xc0c;
    public const ulong m_bMeleeWeapon = 0xc10;
    public const ulong m_bHasBurstMode = 0xc11;
    public const ulong m_bIsRevolver = 0xc12;
    public const ulong m_bCannotShootUnderwater = 0xc13;
    public const ulong m_szName = 0xc18;
    public const ulong m_szAnimExtension = 0xc20;
    public const ulong m_eSilencerType = 0xc28;
    public const ulong m_nCrosshairMinDistance = 0xc2c;
    public const ulong m_nCrosshairDeltaDistance = 0xc30;
    public const ulong m_flCycleTime = 0xc34;
    public const ulong m_flMaxSpeed = 0xc3c;
    public const ulong m_flSpread = 0xc44;
    public const ulong m_flInaccuracyCrouch = 0xc4c;
    public const ulong m_flInaccuracyStand = 0xc54;
    public const ulong m_flInaccuracyJump = 0xc5c;
    public const ulong m_flInaccuracyLand = 0xc64;
    public const ulong m_flInaccuracyLadder = 0xc6c;
    public const ulong m_flInaccuracyFire = 0xc74;
    public const ulong m_flInaccuracyMove = 0xc7c;
    public const ulong m_flRecoilAngle = 0xc84;
    public const ulong m_flRecoilAngleVariance = 0xc8c;
    public const ulong m_flRecoilMagnitude = 0xc94;
    public const ulong m_flRecoilMagnitudeVariance = 0xc9c;
    public const ulong m_nTracerFrequency = 0xca4;
    public const ulong m_flInaccuracyJumpInitial = 0xcac;
    public const ulong m_flInaccuracyJumpApex = 0xcb0;
    public const ulong m_flInaccuracyReload = 0xcb4;
    public const ulong m_nRecoilSeed = 0xcb8;
    public const ulong m_nSpreadSeed = 0xcbc;
    public const ulong m_flTimeToIdleAfterFire = 0xcc0;
    public const ulong m_flIdleInterval = 0xcc4;
    public const ulong m_flAttackMovespeedFactor = 0xcc8;
    public const ulong m_flHeatPerShot = 0xccc;
    public const ulong m_flInaccuracyPitchShift = 0xcd0;
    public const ulong m_flInaccuracyAltSoundThreshold = 0xcd4;
    public const ulong m_flBotAudibleRange = 0xcd8;
    public const ulong m_szUseRadioSubtitle = 0xce0;
    public const ulong m_bUnzoomsAfterShot = 0xce8;
    public const ulong m_bHideViewModelWhenZoomed = 0xce9;
    public const ulong m_nZoomLevels = 0xcec;
    public const ulong m_nZoomFOV1 = 0xcf0;
    public const ulong m_nZoomFOV2 = 0xcf4;
    public const ulong m_flZoomTime0 = 0xcf8;
    public const ulong m_flZoomTime1 = 0xcfc;
    public const ulong m_flZoomTime2 = 0xd00;
    public const ulong m_flIronSightPullUpSpeed = 0xd04;
    public const ulong m_flIronSightPutDownSpeed = 0xd08;
    public const ulong m_flIronSightFOV = 0xd0c;
    public const ulong m_flIronSightPivotForward = 0xd10;
    public const ulong m_flIronSightLooseness = 0xd14;
    public const ulong m_angPivotAngle = 0xd18;
    public const ulong m_vecIronSightEyePos = 0xd24;
    public const ulong m_nDamage = 0xd30;
    public const ulong m_flHeadshotMultiplier = 0xd34;
    public const ulong m_flArmorRatio = 0xd38;
    public const ulong m_flPenetration = 0xd3c;
    public const ulong m_flRange = 0xd40;
    public const ulong m_flRangeModifier = 0xd44;
    public const ulong m_flFlinchVelocityModifierLarge = 0xd48;
    public const ulong m_flFlinchVelocityModifierSmall = 0xd4c;
    public const ulong m_flRecoveryTimeCrouch = 0xd50;
    public const ulong m_flRecoveryTimeStand = 0xd54;
    public const ulong m_flRecoveryTimeCrouchFinal = 0xd58;
    public const ulong m_flRecoveryTimeStandFinal = 0xd5c;
    public const ulong m_nRecoveryTransitionStartBullet = 0xd60;
    public const ulong m_nRecoveryTransitionEndBullet = 0xd64;
    public const ulong m_flThrowVelocity = 0xd68;
    public const ulong m_vSmokeColor = 0xd6c;
    public const ulong m_szAnimClass = 0xd78;
}

public static class C_AttributeContainer {
    public const ulong m_Item = 0x50;
    public const ulong m_iExternalItemProviderRegisteredToken = 0x498;
    public const ulong m_ullRegisteredAsItemID = 0x4a0;
}

public static class C_BRC4Target {
    public const ulong m_bBrokenOpen = 0xe78;
    public const ulong m_flRadius = 0xe7c;
}

public static class C_BarnLight {
    public const ulong m_bEnabled = 0xcc0;
    public const ulong m_nColorMode = 0xcc4;
    public const ulong m_Color = 0xcc8;
    public const ulong m_flColorTemperature = 0xccc;
    public const ulong m_flBrightness = 0xcd0;
    public const ulong m_flBrightnessScale = 0xcd4;
    public const ulong m_nDirectLight = 0xcd8;
    public const ulong m_nBakedShadowIndex = 0xcdc;
    public const ulong m_nLuminaireShape = 0xce0;
    public const ulong m_flLuminaireSize = 0xce4;
    public const ulong m_flLuminaireAnisotropy = 0xce8;
    public const ulong m_LightStyleString = 0xcf0;
    public const ulong m_flLightStyleStartTime = 0xcf8;
    public const ulong m_QueuedLightStyleStrings = 0xd00;
    public const ulong m_LightStyleEvents = 0xd18;
    public const ulong m_LightStyleTargets = 0xd30;
    public const ulong m_StyleEvent = 0xd48;
    public const ulong m_hLightCookie = 0xde8;
    public const ulong m_flShape = 0xdf0;
    public const ulong m_flSoftX = 0xdf4;
    public const ulong m_flSoftY = 0xdf8;
    public const ulong m_flSkirt = 0xdfc;
    public const ulong m_flSkirtNear = 0xe00;
    public const ulong m_vSizeParams = 0xe04;
    public const ulong m_flRange = 0xe10;
    public const ulong m_vShear = 0xe14;
    public const ulong m_nBakeSpecularToCubemaps = 0xe20;
    public const ulong m_vBakeSpecularToCubemapsSize = 0xe24;
    public const ulong m_nCastShadows = 0xe30;
    public const ulong m_nShadowMapSize = 0xe34;
    public const ulong m_nShadowPriority = 0xe38;
    public const ulong m_bContactShadow = 0xe3c;
    public const ulong m_nBounceLight = 0xe40;
    public const ulong m_flBounceScale = 0xe44;
    public const ulong m_flMinRoughness = 0xe48;
    public const ulong m_vAlternateColor = 0xe4c;
    public const ulong m_fAlternateColorBrightness = 0xe58;
    public const ulong m_nFog = 0xe5c;
    public const ulong m_flFogStrength = 0xe60;
    public const ulong m_nFogShadows = 0xe64;
    public const ulong m_flFogScale = 0xe68;
    public const ulong m_flFadeSizeStart = 0xe6c;
    public const ulong m_flFadeSizeEnd = 0xe70;
    public const ulong m_flShadowFadeSizeStart = 0xe74;
    public const ulong m_flShadowFadeSizeEnd = 0xe78;
    public const ulong m_bPrecomputedFieldsValid = 0xe7c;
    public const ulong m_vPrecomputedBoundsMins = 0xe80;
    public const ulong m_vPrecomputedBoundsMaxs = 0xe8c;
    public const ulong m_vPrecomputedOBBOrigin = 0xe98;
    public const ulong m_vPrecomputedOBBAngles = 0xea4;
    public const ulong m_vPrecomputedOBBExtent = 0xeb0;
}

public static class C_BaseButton {
    public const ulong m_glowEntity = 0xcc0;
    public const ulong m_usable = 0xcc4;
    public const ulong m_szDisplayText = 0xcc8;
}

public static class C_BaseCSGrenade {
    public const ulong m_bClientPredictDelete = 0x18d0;
    public const ulong m_bRedraw = 0x18f8;
    public const ulong m_bIsHeldByPlayer = 0x18f9;
    public const ulong m_bPinPulled = 0x18fa;
    public const ulong m_bJumpThrow = 0x18fb;
    public const ulong m_eThrowStatus = 0x18fc;
    public const ulong m_fThrowTime = 0x1900;
    public const ulong m_flThrowStrength = 0x1904;
    public const ulong m_flThrowStrengthApproach = 0x1908;
    public const ulong m_fDropTime = 0x190c;
}

public static class C_BaseCSGrenadeProjectile {
    public const ulong m_vInitialVelocity = 0x1058;
    public const ulong m_nBounces = 0x1064;
    public const ulong m_nExplodeEffectIndex = 0x1068;
    public const ulong m_nExplodeEffectTickBegin = 0x1070;
    public const ulong m_vecExplodeEffectOrigin = 0x1074;
    public const ulong m_flSpawnTime = 0x1080;
    public const ulong vecLastTrailLinePos = 0x1084;
    public const ulong flNextTrailLineTime = 0x1090;
    public const ulong m_bExplodeEffectBegan = 0x1094;
    public const ulong m_bCanCreateGrenadeTrail = 0x1095;
    public const ulong m_nSnapshotTrajectoryEffectIndex = 0x1098;
    public const ulong m_hSnapshotTrajectoryParticleSnapshot = 0x10a0;
    public const ulong m_arrTrajectoryTrailPoints = 0x10a8;
    public const ulong m_arrTrajectoryTrailPointCreationTimes = 0x10c0;
    public const ulong m_flTrajectoryTrailEffectCreationTime = 0x10d8;
}

public static class C_BaseClientUIEntity {
    public const ulong m_bEnabled = 0xcc8;
    public const ulong m_DialogXMLName = 0xcd0;
    public const ulong m_PanelClassName = 0xcd8;
    public const ulong m_PanelID = 0xce0;
}

public static class C_BaseCombatCharacter {
    public const ulong m_hMyWearables = 0x1008;
    public const ulong m_bloodColor = 0x1020;
    public const ulong m_leftFootAttachment = 0x1024;
    public const ulong m_rightFootAttachment = 0x1025;
    public const ulong m_nWaterWakeMode = 0x1028;
    public const ulong m_flWaterWorldZ = 0x102c;
    public const ulong m_flWaterNextTraceTime = 0x1030;
    public const ulong m_flFieldOfView = 0x1034;
}

public static class C_BaseDoor {
    public const ulong m_bIsUsable = 0xcc0;
}

public static class C_BaseEntity {
    public const ulong m_CBodyComponent = 0x30;
    public const ulong m_NetworkTransmitComponent = 0x38;
    public const ulong m_nLastThinkTick = 0x308;
    public const ulong m_pGameSceneNode = 0x310;
    public const ulong m_pRenderComponent = 0x318;
    public const ulong m_pCollision = 0x320;
    public const ulong m_iMaxHealth = 0x328;
    public const ulong m_iHealth = 0x32c;
    public const ulong m_lifeState = 0x330;
    public const ulong m_bTakesDamage = 0x331;
    public const ulong m_nTakeDamageFlags = 0x334;
    public const ulong m_ubInterpolationFrame = 0x338;
    public const ulong m_hSceneObjectController = 0x33c;
    public const ulong m_nNoInterpolationTick = 0x340;
    public const ulong m_nVisibilityNoInterpolationTick = 0x344;
    public const ulong m_flProxyRandomValue = 0x348;
    public const ulong m_iEFlags = 0x34c;
    public const ulong m_nWaterType = 0x350;
    public const ulong m_bInterpolateEvenWithNoModel = 0x351;
    public const ulong m_bPredictionEligible = 0x352;
    public const ulong m_bApplyLayerMatchIDToModel = 0x353;
    public const ulong m_tokLayerMatchID = 0x354;
    public const ulong m_nSubclassID = 0x358;
    public const ulong m_nSimulationTick = 0x368;
    public const ulong m_iCurrentThinkContext = 0x36c;
    public const ulong m_aThinkFunctions = 0x370;
    public const ulong m_flAnimTime = 0x388;
    public const ulong m_flSimulationTime = 0x38c;
    public const ulong m_nSceneObjectOverrideFlags = 0x390;
    public const ulong m_bHasSuccessfullyInterpolated = 0x391;
    public const ulong m_bHasAddedVarsToInterpolation = 0x392;
    public const ulong m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x393;
    public const ulong m_nInterpolationLatchDirtyFlags = 0x394;
    public const ulong m_ListEntry = 0x39c;
    public const ulong m_flCreateTime = 0x3b4;
    public const ulong m_flSpeed = 0x3b8;
    public const ulong m_EntClientFlags = 0x3bc;
    public const ulong m_bClientSideRagdoll = 0x3be;
    public const ulong m_iTeamNum = 0x3bf;
    public const ulong m_spawnflags = 0x3c0;
    public const ulong m_nNextThinkTick = 0x3c4;
    public const ulong m_fFlags = 0x3c8;
    public const ulong m_vecAbsVelocity = 0x3cc;
    public const ulong m_vecVelocity = 0x3d8;
    public const ulong m_vecBaseVelocity = 0x408;
    public const ulong m_hEffectEntity = 0x414;
    public const ulong m_hOwnerEntity = 0x418;
    public const ulong m_MoveCollide = 0x41c;
    public const ulong m_MoveType = 0x41d;
    public const ulong m_flWaterLevel = 0x420;
    public const ulong m_fEffects = 0x424;
    public const ulong m_hGroundEntity = 0x428;
    public const ulong m_flFriction = 0x42c;
    public const ulong m_flElasticity = 0x430;
    public const ulong m_flGravityScale = 0x434;
    public const ulong m_flTimeScale = 0x438;
    public const ulong m_bSimulatedEveryTick = 0x43c;
    public const ulong m_bAnimatedEveryTick = 0x43d;
    public const ulong m_flNavIgnoreUntilTime = 0x440;
    public const ulong m_hThink = 0x444;
    public const ulong m_fBBoxVisFlags = 0x450;
    public const ulong m_bPredictable = 0x451;
    public const ulong m_bRenderWithViewModels = 0x452;
    public const ulong m_nSplitUserPlayerPredictionSlot = 0x454;
    public const ulong m_nFirstPredictableCommand = 0x458;
    public const ulong m_nLastPredictableCommand = 0x45c;
    public const ulong m_hOldMoveParent = 0x460;
    public const ulong m_Particles = 0x468;
    public const ulong m_vecPredictedScriptFloats = 0x490;
    public const ulong m_vecPredictedScriptFloatIDs = 0x4a8;
    public const ulong m_nNextScriptVarRecordID = 0x4d8;
    public const ulong m_vecAngVelocity = 0x4e8;
    public const ulong m_DataChangeEventRef = 0x4f4;
    public const ulong m_dependencies = 0x4f8;
    public const ulong m_nCreationTick = 0x510;
    public const ulong m_bAnimTimeChanged = 0x529;
    public const ulong m_bSimulationTimeChanged = 0x52a;
    public const ulong m_sUniqueHammerID = 0x538;
}

public static class C_BaseFire {
    public const ulong m_flScale = 0x540;
    public const ulong m_flStartScale = 0x544;
    public const ulong m_flScaleTime = 0x548;
    public const ulong m_nFlags = 0x54c;
}

public static class C_BaseFlex {
    public const ulong m_flexWeight = 0xe80;
    public const ulong m_vLookTargetPosition = 0xe98;
    public const ulong m_blinktoggle = 0xeb0;
    public const ulong m_nLastFlexUpdateFrameCount = 0xf10;
    public const ulong m_CachedViewTarget = 0xf14;
    public const ulong m_nNextSceneEventId = 0xf20;
    public const ulong m_iBlink = 0xf24;
    public const ulong m_blinktime = 0xf28;
    public const ulong m_prevblinktoggle = 0xf2c;
    public const ulong m_iJawOpen = 0xf30;
    public const ulong m_flJawOpenAmount = 0xf34;
    public const ulong m_flBlinkAmount = 0xf38;
    public const ulong m_iMouthAttachment = 0xf3c;
    public const ulong m_iEyeAttachment = 0xf3d;
    public const ulong m_bResetFlexWeightsOnModelChange = 0xf3e;
    public const ulong m_nEyeOcclusionRendererBone = 0xf58;
    public const ulong m_mEyeOcclusionRendererCameraToBoneTransform = 0xf5c;
    public const ulong m_vEyeOcclusionRendererHalfExtent = 0xf8c;
    public const ulong m_PhonemeClasses = 0xfa8;
}

public static class C_BaseFlex_Emphasized_Phoneme {
    public const ulong m_sClassName = 0x0;
    public const ulong m_flAmount = 0x18;
    public const ulong m_bRequired = 0x1c;
    public const ulong m_bBasechecked = 0x1d;
    public const ulong m_bValid = 0x1e;
}

public static class C_BaseGrenade {
    public const ulong m_bHasWarnedAI = 0x1008;
    public const ulong m_bIsSmokeGrenade = 0x1009;
    public const ulong m_bIsLive = 0x100a;
    public const ulong m_DmgRadius = 0x100c;
    public const ulong m_flDetonateTime = 0x1010;
    public const ulong m_flWarnAITime = 0x1014;
    public const ulong m_flDamage = 0x1018;
    public const ulong m_iszBounceSound = 0x1020;
    public const ulong m_ExplosionSound = 0x1028;
    public const ulong m_hThrower = 0x1034;
    public const ulong m_flNextAttack = 0x1050;
    public const ulong m_hOriginalThrower = 0x1054;
}

public static class C_BaseModelEntity {
    public const ulong m_CRenderComponent = 0xa10;
    public const ulong m_CHitboxComponent = 0xa18;
    public const ulong m_bInitModelEffects = 0xa60;
    public const ulong m_bIsStaticProp = 0xa61;
    public const ulong m_nLastAddDecal = 0xa64;
    public const ulong m_nDecalsAdded = 0xa68;
    public const ulong m_iOldHealth = 0xa6c;
    public const ulong m_nRenderMode = 0xa70;
    public const ulong m_nRenderFX = 0xa71;
    public const ulong m_bAllowFadeInView = 0xa72;
    public const ulong m_clrRender = 0xa73;
    public const ulong m_vecRenderAttributes = 0xa78;
    public const ulong m_LightGroup = 0xae0;
    public const ulong m_bRenderToCubemaps = 0xae4;
    public const ulong m_Collision = 0xae8;
    public const ulong m_Glow = 0xb98;
    public const ulong m_flGlowBackfaceMult = 0xbf0;
    public const ulong m_fadeMinDist = 0xbf4;
    public const ulong m_fadeMaxDist = 0xbf8;
    public const ulong m_flFadeScale = 0xbfc;
    public const ulong m_flShadowStrength = 0xc00;
    public const ulong m_nObjectCulling = 0xc04;
    public const ulong m_nAddDecal = 0xc08;
    public const ulong m_vDecalPosition = 0xc0c;
    public const ulong m_vDecalForwardAxis = 0xc18;
    public const ulong m_flDecalHealBloodRate = 0xc24;
    public const ulong m_flDecalHealHeightRate = 0xc28;
    public const ulong m_ConfigEntitiesToPropagateMaterialDecalsTo = 0xc30;
    public const ulong m_vecViewOffset = 0xc48;
    public const ulong m_pClientAlphaProperty = 0xc78;
    public const ulong m_ClientOverrideTint = 0xc80;
    public const ulong m_bUseClientOverrideTint = 0xc84;
}

public static class C_BasePlayerPawn {
    public const ulong m_pWeaponServices = 0x1098;
    public const ulong m_pItemServices = 0x10a0;
    public const ulong m_pAutoaimServices = 0x10a8;
    public const ulong m_pObserverServices = 0x10b0;
    public const ulong m_pWaterServices = 0x10b8;
    public const ulong m_pUseServices = 0x10c0;
    public const ulong m_pFlashlightServices = 0x10c8;
    public const ulong m_pCameraServices = 0x10d0;
    public const ulong m_pMovementServices = 0x10d8;
    public const ulong m_ServerViewAngleChanges = 0x10e8;
    public const ulong m_nHighestConsumedServerViewAngleChangeIndex = 0x1138;
    public const ulong v_angle = 0x113c;
    public const ulong v_anglePrevious = 0x1148;
    public const ulong m_iHideHUD = 0x1154;
    public const ulong m_skybox3d = 0x1158;
    public const ulong m_flDeathTime = 0x11e8;
    public const ulong m_vecPredictionError = 0x11ec;
    public const ulong m_flPredictionErrorTime = 0x11f8;
    public const ulong m_flFOVSensitivityAdjust = 0x11fc;
    public const ulong m_flMouseSensitivity = 0x1200;
    public const ulong m_vOldOrigin = 0x1204;
    public const ulong m_flOldSimulationTime = 0x1210;
    public const ulong m_nLastExecutedCommandNumber = 0x1214;
    public const ulong m_nLastExecutedCommandTick = 0x1218;
    public const ulong m_hController = 0x121c;
    public const ulong m_bIsSwappingToPredictableController = 0x1220;
}

public static class C_BasePlayerWeapon {
    public const ulong m_nNextPrimaryAttackTick = 0x1550;
    public const ulong m_flNextPrimaryAttackTickRatio = 0x1554;
    public const ulong m_nNextSecondaryAttackTick = 0x1558;
    public const ulong m_flNextSecondaryAttackTickRatio = 0x155c;
    public const ulong m_iClip1 = 0x1560;
    public const ulong m_iClip2 = 0x1564;
    public const ulong m_pReserveAmmo = 0x1568;
}

public static class C_BasePropDoor {
    public const ulong m_eDoorState = 0x10e8;
    public const ulong m_modelChanged = 0x10ec;
    public const ulong m_bLocked = 0x10ed;
    public const ulong m_closedPosition = 0x10f0;
    public const ulong m_closedAngles = 0x10fc;
    public const ulong m_hMaster = 0x1108;
    public const ulong m_vWhereToSetLightingOrigin = 0x110c;
}

public static class C_BaseTrigger {
    public const ulong m_bDisabled = 0xcc0;
    public const ulong m_bClientSidePredicted = 0xcc1;
}

public static class C_BaseViewModel {
    public const ulong m_vecLastFacing = 0xe78;
    public const ulong m_nViewModelIndex = 0xe84;
    public const ulong m_nAnimationParity = 0xe88;
    public const ulong m_flAnimationStartTime = 0xe8c;
    public const ulong m_hWeapon = 0xe90;
    public const ulong m_sVMName = 0xe98;
    public const ulong m_sAnimationPrefix = 0xea0;
    public const ulong m_hWeaponModel = 0xea8;
    public const ulong m_iCameraAttachment = 0xeac;
    public const ulong m_vecLastCameraAngles = 0xeb0;
    public const ulong m_previousElapsedDuration = 0xebc;
    public const ulong m_previousCycle = 0xec0;
    public const ulong m_nOldAnimationParity = 0xec4;
    public const ulong m_hOldLayerSequence = 0xec8;
    public const ulong m_oldLayer = 0xecc;
    public const ulong m_oldLayerStartTime = 0xed0;
    public const ulong m_hControlPanel = 0xed4;
}

public static class C_Beam {
    public const ulong m_flFrameRate = 0xcc0;
    public const ulong m_flHDRColorScale = 0xcc4;
    public const ulong m_flFireTime = 0xcc8;
    public const ulong m_flDamage = 0xccc;
    public const ulong m_nNumBeamEnts = 0xcd0;
    public const ulong m_queryHandleHalo = 0xcd4;
    public const ulong m_hBaseMaterial = 0xcf8;
    public const ulong m_nHaloIndex = 0xd00;
    public const ulong m_nBeamType = 0xd08;
    public const ulong m_nBeamFlags = 0xd0c;
    public const ulong m_hAttachEntity = 0xd10;
    public const ulong m_nAttachIndex = 0xd38;
    public const ulong m_fWidth = 0xd44;
    public const ulong m_fEndWidth = 0xd48;
    public const ulong m_fFadeLength = 0xd4c;
    public const ulong m_fHaloScale = 0xd50;
    public const ulong m_fAmplitude = 0xd54;
    public const ulong m_fStartFrame = 0xd58;
    public const ulong m_fSpeed = 0xd5c;
    public const ulong m_flFrame = 0xd60;
    public const ulong m_nClipStyle = 0xd64;
    public const ulong m_bTurnedOff = 0xd68;
    public const ulong m_vecEndPos = 0xd6c;
    public const ulong m_hEndEntity = 0xd78;
}

public static class C_BreachChargeProjectile {
    public const ulong m_bShouldExplode = 0x1058;
    public const ulong m_weaponThatThrewMe = 0x105c;
    public const ulong m_nParentBoneIndex = 0x1060;
    public const ulong m_vecParentBonePos = 0x1064;
}

public static class C_BreakableProp {
    public const ulong m_OnBreak = 0xeb8;
    public const ulong m_OnHealthChanged = 0xee0;
    public const ulong m_OnTakeDamage = 0xf08;
    public const ulong m_impactEnergyScale = 0xf30;
    public const ulong m_iMinHealthDmg = 0xf34;
    public const ulong m_flPressureDelay = 0xf38;
    public const ulong m_hBreaker = 0xf3c;
    public const ulong m_PerformanceMode = 0xf40;
    public const ulong m_flDmgModBullet = 0xf44;
    public const ulong m_flDmgModClub = 0xf48;
    public const ulong m_flDmgModExplosive = 0xf4c;
    public const ulong m_flDmgModFire = 0xf50;
    public const ulong m_iszPhysicsDamageTableName = 0xf58;
    public const ulong m_iszBasePropData = 0xf60;
    public const ulong m_iInteractions = 0xf68;
    public const ulong m_flPreventDamageBeforeTime = 0xf6c;
    public const ulong m_bHasBreakPiecesOrCommands = 0xf70;
    public const ulong m_explodeDamage = 0xf74;
    public const ulong m_explodeRadius = 0xf78;
    public const ulong m_explosionDelay = 0xf80;
    public const ulong m_explosionBuildupSound = 0xf88;
    public const ulong m_explosionCustomEffect = 0xf90;
    public const ulong m_explosionCustomSound = 0xf98;
    public const ulong m_explosionModifier = 0xfa0;
    public const ulong m_hPhysicsAttacker = 0xfa8;
    public const ulong m_flLastPhysicsInfluenceTime = 0xfac;
    public const ulong m_flDefaultFadeScale = 0xfb0;
    public const ulong m_hLastAttacker = 0xfb4;
    public const ulong m_hFlareEnt = 0xfb8;
    public const ulong m_noGhostCollision = 0xfbc;
}

public static class C_BulletHitModel {
    public const ulong m_matLocal = 0xe70;
    public const ulong m_iBoneIndex = 0xea0;
    public const ulong m_hPlayerParent = 0xea4;
    public const ulong m_bIsHit = 0xea8;
    public const ulong m_flTimeCreated = 0xeac;
    public const ulong m_vecStartPos = 0xeb0;
}

public static class C_BumpMineProjectile {
    public const ulong m_bShouldExplode = 0x1058;
    public const ulong m_nParentBoneIndex = 0x105c;
    public const ulong m_vecParentBonePos = 0x1060;
    public const ulong m_bArmed = 0x106c;
}

public static class C_C4 {
    public const ulong m_szScreenText = 0x18d0;
    public const ulong m_bombdroppedlightParticleIndex = 0x18f0;
    public const ulong m_bStartedArming = 0x18f4;
    public const ulong m_fArmedTime = 0x18f8;
    public const ulong m_bBombPlacedAnimation = 0x18fc;
    public const ulong m_bIsPlantingViaUse = 0x18fd;
    public const ulong m_entitySpottedState = 0x1900;
    public const ulong m_nSpotRules = 0x1918;
    public const ulong m_bPlayedArmingBeeps = 0x191c;
    public const ulong m_bBombPlanted = 0x1923;
    public const ulong m_bDroppedFromDeath = 0x1924;
}

public static class C_CSGOViewModel {
    public const ulong m_bShouldIgnoreOffsetAndAccuracy = 0xf00;
    public const ulong m_nWeaponParity = 0xf04;
    public const ulong m_nOldWeaponParity = 0xf08;
    public const ulong m_nLastKnownAssociatedWeaponEntIndex = 0xf0c;
    public const ulong m_bNeedToQueueHighResComposite = 0xf10;
    public const ulong m_vLoweredWeaponOffset = 0xf54;
}

public static class C_CSGO_MapPreviewCameraPath {
    public const ulong m_flZFar = 0x540;
    public const ulong m_flZNear = 0x544;
    public const ulong m_bLoop = 0x548;
    public const ulong m_bVerticalFOV = 0x549;
    public const ulong m_bConstantSpeed = 0x54a;
    public const ulong m_flDuration = 0x54c;
    public const ulong m_flPathLength = 0x590;
    public const ulong m_flPathDuration = 0x594;
}

public static class C_CSGO_MapPreviewCameraPathNode {
    public const ulong m_szParentPathUniqueID = 0x540;
    public const ulong m_nPathIndex = 0x548;
    public const ulong m_vInTangentLocal = 0x54c;
    public const ulong m_vOutTangentLocal = 0x558;
    public const ulong m_flFOV = 0x564;
    public const ulong m_flSpeed = 0x568;
    public const ulong m_flEaseIn = 0x56c;
    public const ulong m_flEaseOut = 0x570;
    public const ulong m_vInTangentWorld = 0x574;
    public const ulong m_vOutTangentWorld = 0x580;
}

public static class C_CSGO_PreviewModel {
    public const ulong m_animgraph = 0x1008;
    public const ulong m_animgraphCharacterModeString = 0x1010;
    public const ulong m_defaultAnim = 0x1018;
    public const ulong m_nDefaultAnimLoopMode = 0x1020;
    public const ulong m_flInitialModelScale = 0x1024;
}

public static class C_CSGO_PreviewPlayer {
    public const ulong m_animgraph = 0x2300;
    public const ulong m_animgraphCharacterModeString = 0x2308;
    public const ulong m_flInitialModelScale = 0x2310;
}

public static class C_CSGO_TeamPreviewCamera {
    public const ulong m_nVariant = 0x5a0;
    public const ulong m_bDofEnabled = 0x5a4;
    public const ulong m_flDofNearBlurry = 0x5a8;
    public const ulong m_flDofNearCrisp = 0x5ac;
    public const ulong m_flDofFarCrisp = 0x5b0;
    public const ulong m_flDofFarBlurry = 0x5b4;
    public const ulong m_flDofTiltToGround = 0x5b8;
}

public static class C_CSGO_TeamPreviewCharacterPosition {
    public const ulong m_nVariant = 0x540;
    public const ulong m_nRandom = 0x544;
    public const ulong m_nOrdinal = 0x548;
    public const ulong m_sWeaponName = 0x550;
    public const ulong m_xuid = 0x558;
    public const ulong m_weaponItem = 0x560;
}

public static class C_CSGameRules {
    public const ulong __m_pChainEntity = 0x8;
    public const ulong m_bFreezePeriod = 0x30;
    public const ulong m_bWarmupPeriod = 0x31;
    public const ulong m_fWarmupPeriodEnd = 0x34;
    public const ulong m_fWarmupPeriodStart = 0x38;
    public const ulong m_nTotalPausedTicks = 0x3c;
    public const ulong m_nPauseStartTick = 0x40;
    public const ulong m_bServerPaused = 0x44;
    public const ulong m_bGamePaused = 0x45;
    public const ulong m_bTerroristTimeOutActive = 0x46;
    public const ulong m_bCTTimeOutActive = 0x47;
    public const ulong m_flTerroristTimeOutRemaining = 0x48;
    public const ulong m_flCTTimeOutRemaining = 0x4c;
    public const ulong m_nTerroristTimeOuts = 0x50;
    public const ulong m_nCTTimeOuts = 0x54;
    public const ulong m_bTechnicalTimeOut = 0x58;
    public const ulong m_bMatchWaitingForResume = 0x59;
    public const ulong m_iRoundTime = 0x5c;
    public const ulong m_fMatchStartTime = 0x60;
    public const ulong m_fRoundStartTime = 0x64;
    public const ulong m_flRestartRoundTime = 0x68;
    public const ulong m_bGameRestart = 0x6c;
    public const ulong m_flGameStartTime = 0x70;
    public const ulong m_timeUntilNextPhaseStarts = 0x74;
    public const ulong m_gamePhase = 0x78;
    public const ulong m_totalRoundsPlayed = 0x7c;
    public const ulong m_nRoundsPlayedThisPhase = 0x80;
    public const ulong m_nOvertimePlaying = 0x84;
    public const ulong m_iHostagesRemaining = 0x88;
    public const ulong m_bAnyHostageReached = 0x8c;
    public const ulong m_bMapHasBombTarget = 0x8d;
    public const ulong m_bMapHasRescueZone = 0x8e;
    public const ulong m_bMapHasBuyZone = 0x8f;
    public const ulong m_bIsQueuedMatchmaking = 0x90;
    public const ulong m_nQueuedMatchmakingMode = 0x94;
    public const ulong m_bIsValveDS = 0x98;
    public const ulong m_bLogoMap = 0x99;
    public const ulong m_bPlayAllStepSoundsOnServer = 0x9a;
    public const ulong m_iNumGunGameProgressiveWeaponsCT = 0x9c;
    public const ulong m_iNumGunGameProgressiveWeaponsT = 0xa0;
    public const ulong m_iSpectatorSlotCount = 0xa4;
    public const ulong m_GGProgressiveWeaponOrderCT = 0xa8;
    public const ulong m_GGProgressiveWeaponOrderT = 0x198;
    public const ulong m_GGProgressiveWeaponKillUpgradeOrderCT = 0x288;
    public const ulong m_GGProgressiveWeaponKillUpgradeOrderT = 0x378;
    public const ulong m_MatchDevice = 0x468;
    public const ulong m_bHasMatchStarted = 0x46c;
    public const ulong m_nNextMapInMapgroup = 0x470;
    public const ulong m_szTournamentEventName = 0x474;
    public const ulong m_szTournamentEventStage = 0x674;
    public const ulong m_szMatchStatTxt = 0x874;
    public const ulong m_szTournamentPredictionsTxt = 0xa74;
    public const ulong m_nTournamentPredictionsPct = 0xc74;
    public const ulong m_flCMMItemDropRevealStartTime = 0xc78;
    public const ulong m_flCMMItemDropRevealEndTime = 0xc7c;
    public const ulong m_bIsDroppingItems = 0xc80;
    public const ulong m_bIsQuestEligible = 0xc81;
    public const ulong m_nGuardianModeWaveNumber = 0xc84;
    public const ulong m_nGuardianModeSpecialKillsRemaining = 0xc88;
    public const ulong m_nGuardianModeSpecialWeaponNeeded = 0xc8c;
    public const ulong m_nGuardianGrenadesToGiveBots = 0xc90;
    public const ulong m_nNumHeaviesToSpawn = 0xc94;
    public const ulong m_numGlobalGiftsGiven = 0xc98;
    public const ulong m_numGlobalGifters = 0xc9c;
    public const ulong m_numGlobalGiftsPeriodSeconds = 0xca0;
    public const ulong m_arrFeaturedGiftersAccounts = 0xca4;
    public const ulong m_arrFeaturedGiftersGifts = 0xcb4;
    public const ulong m_arrProhibitedItemIndices = 0xcc4;
    public const ulong m_arrTournamentActiveCasterAccounts = 0xd8c;
    public const ulong m_numBestOfMaps = 0xd9c;
    public const ulong m_nHalloweenMaskListSeed = 0xda0;
    public const ulong m_bBombDropped = 0xda4;
    public const ulong m_bBombPlanted = 0xda5;
    public const ulong m_iRoundWinStatus = 0xda8;
    public const ulong m_eRoundWinReason = 0xdac;
    public const ulong m_bTCantBuy = 0xdb0;
    public const ulong m_bCTCantBuy = 0xdb1;
    public const ulong m_flGuardianBuyUntilTime = 0xdb4;
    public const ulong m_iMatchStats_RoundResults = 0xdb8;
    public const ulong m_iMatchStats_PlayersAlive_CT = 0xe30;
    public const ulong m_iMatchStats_PlayersAlive_T = 0xea8;
    public const ulong m_TeamRespawnWaveTimes = 0xf20;
    public const ulong m_flNextRespawnWave = 0xfa0;
    public const ulong m_nServerQuestID = 0x1020;
    public const ulong m_vMinimapMins = 0x1024;
    public const ulong m_vMinimapMaxs = 0x1030;
    public const ulong m_MinimapVerticalSectionHeights = 0x103c;
    public const ulong m_bDontIncrementCoopWave = 0x105c;
    public const ulong m_bSpawnedTerrorHuntHeavy = 0x105d;
    public const ulong m_nEndMatchMapGroupVoteTypes = 0x1060;
    public const ulong m_nEndMatchMapGroupVoteOptions = 0x1088;
    public const ulong m_nEndMatchMapVoteWinner = 0x10b0;
    public const ulong m_iNumConsecutiveCTLoses = 0x10b4;
    public const ulong m_iNumConsecutiveTerroristLoses = 0x10b8;
    public const ulong m_bMarkClientStopRecordAtRoundEnd = 0x10d8;
    public const ulong m_bMatchAbortedDueToPlayerBan = 0x1130;
    public const ulong m_bHasTriggeredRoundStartMusic = 0x1131;
    public const ulong m_bHasTriggeredCoopSpawnReset = 0x1132;
    public const ulong m_bSwitchingTeamsAtRoundReset = 0x1133;
    public const ulong m_iMaxGunGameProgressiveWeaponIndex = 0x1134;
    public const ulong m_pGameModeRules = 0x1150;
    public const ulong m_SurvivalRules = 0x1158;
    public const ulong m_RetakeRules = 0x1818;
    public const ulong m_nMatchEndCount = 0x1930;
    public const ulong m_nTTeamIntroVariant = 0x1934;
    public const ulong m_nCTTeamIntroVariant = 0x1938;
    public const ulong m_bTeamIntroPeriod = 0x193c;
    public const ulong m_flLastPerfSampleTime = 0x28f8;
}

public static class C_CSGameRulesProxy {
    public const ulong m_pGameRules = 0x540;
}

public static class C_CSObserverPawn {
    public const ulong m_hDetectParentChange = 0x17c8;
}

public static class C_CSPlayerPawn {
    public const ulong m_pBulletServices = 0x17c8;
    public const ulong m_pHostageServices = 0x17d0;
    public const ulong m_pBuyServices = 0x17d8;
    public const ulong m_pGlowServices = 0x17e0;
    public const ulong m_bIsBuyMenuOpen = 0x17e8;
    public const ulong m_iRetakesOffering = 0x18d0;
    public const ulong m_iRetakesOfferingCard = 0x18d4;
    public const ulong m_bRetakesHasDefuseKit = 0x18d8;
    public const ulong m_bRetakesMVPLastRound = 0x18d9;
    public const ulong m_iRetakesMVPBoostItem = 0x18dc;
    public const ulong m_RetakesMVPBoostExtraUtility = 0x18e0;
    public const ulong m_bNeedToReApplyGloves = 0x1900;
    public const ulong m_EconGloves = 0x1908;
    public const ulong m_bMustSyncRagdollState = 0x1d50;
    public const ulong m_nRagdollDamageBone = 0x1d54;
    public const ulong m_vRagdollDamageForce = 0x1d58;
    public const ulong m_vRagdollDamagePosition = 0x1d64;
    public const ulong m_szRagdollDamageWeaponName = 0x1d70;
    public const ulong m_bRagdollDamageHeadshot = 0x1db0;
    public const ulong m_bLastHeadBoneTransformIsValid = 0x22d0;
    public const ulong m_qDeathEyeAngles = 0x22ec;
    public const ulong m_bSkipOneHeadConstraintUpdate = 0x22f8;
}

public static class C_CSPlayerPawnBase {
    public const ulong m_pActionTrackingServices = 0x1240;
    public const ulong m_pPingServices = 0x1248;
    public const ulong m_pViewModelServices = 0x1250;
    public const ulong m_fRenderingClipPlane = 0x1258;
    public const ulong m_nLastClipPlaneSetupFrame = 0x1268;
    public const ulong m_vecLastClipCameraPos = 0x126c;
    public const ulong m_vecLastClipCameraForward = 0x1278;
    public const ulong m_bClipHitStaticWorld = 0x1284;
    public const ulong m_bCachedPlaneIsValid = 0x1285;
    public const ulong m_pClippingWeapon = 0x1288;
    public const ulong m_bHasFemaleVoice = 0x1290;
    public const ulong m_previousPlayerState = 0x1294;
    public const ulong m_flLastCollisionCeiling = 0x1298;
    public const ulong m_flLastCollisionCeilingChangeTime = 0x129c;
    public const ulong m_bInLanding = 0x12b8;
    public const ulong m_flLandingTime = 0x12bc;
    public const ulong m_grenadeParameterStashTime = 0x12c0;
    public const ulong m_bGrenadeParametersStashed = 0x12c4;
    public const ulong m_angStashedShootAngles = 0x12c8;
    public const ulong m_vecStashedGrenadeThrowPosition = 0x12d4;
    public const ulong m_vecStashedVelocity = 0x12e0;
    public const ulong m_angShootAngleHistory = 0x12ec;
    public const ulong m_vecThrowPositionHistory = 0x1304;
    public const ulong m_vecVelocityHistory = 0x131c;
    public const ulong m_thirdPersonHeading = 0x1338;
    public const ulong m_flSlopeDropOffset = 0x1350;
    public const ulong m_flSlopeDropHeight = 0x1360;
    public const ulong m_vHeadConstraintOffset = 0x1370;
    public const ulong m_bIsScoped = 0x1388;
    public const ulong m_bIsWalking = 0x1389;
    public const ulong m_bResumeZoom = 0x138a;
    public const ulong m_iPlayerState = 0x138c;
    public const ulong m_bIsDefusing = 0x1390;
    public const ulong m_bIsGrabbingHostage = 0x1391;
    public const ulong m_iBlockingUseActionInProgress = 0x1394;
    public const ulong m_bIsRescuing = 0x1398;
    public const ulong m_fImmuneToGunGameDamageTime = 0x139c;
    public const ulong m_fImmuneToGunGameDamageTimeLast = 0x13a0;
    public const ulong m_bGunGameImmunity = 0x13a4;
    public const ulong m_bHasMovedSinceSpawn = 0x13a5;
    public const ulong m_bMadeFinalGunGameProgressiveKill = 0x13a6;
    public const ulong m_iGunGameProgressiveWeaponIndex = 0x13a8;
    public const ulong m_iNumGunGameTRKillPoints = 0x13ac;
    public const ulong m_iNumGunGameKillsWithCurrentWeapon = 0x13b0;
    public const ulong m_unTotalRoundDamageDealt = 0x13b4;
    public const ulong m_fMolotovUseTime = 0x13b8;
    public const ulong m_fMolotovDamageTime = 0x13bc;
    public const ulong m_bInBombZone = 0x13c0;
    public const ulong m_nWhichBombZone = 0x13c4;
    public const ulong m_bInBuyZone = 0x13c8;
    public const ulong m_bInNoDefuseArea = 0x13c9;
    public const ulong m_iThrowGrenadeCounter = 0x13cc;
    public const ulong m_bWaitForNoAttack = 0x13d0;
    public const ulong m_flGuardianTooFarDistFrac = 0x13d4;
    public const ulong m_flDetectedByEnemySensorTime = 0x13d8;
    public const ulong m_flNextGuardianTooFarWarning = 0x13dc;
    public const ulong m_bSuppressGuardianTooFarWarningAudio = 0x13e0;
    public const ulong m_bKilledByTaser = 0x13e1;
    public const ulong m_iMoveState = 0x13e4;
    public const ulong m_bCanMoveDuringFreezePeriod = 0x13e8;
    public const ulong m_isCurrentGunGameLeader = 0x13e9;
    public const ulong m_isCurrentGunGameTeamLeader = 0x13ea;
    public const ulong m_flLowerBodyYawTarget = 0x13ec;
    public const ulong m_bStrafing = 0x13f0;
    public const ulong m_szLastPlaceName = 0x13f1;
    public const ulong m_flLastSpawnTimeIndex = 0x1404;
    public const ulong m_flEmitSoundTime = 0x1408;
    public const ulong m_iAddonBits = 0x140c;
    public const ulong m_iPrimaryAddon = 0x1410;
    public const ulong m_iSecondaryAddon = 0x1414;
    public const ulong m_iProgressBarDuration = 0x1418;
    public const ulong m_flProgressBarStartTime = 0x141c;
    public const ulong m_flStamina = 0x1420;
    public const ulong m_iDirection = 0x1424;
    public const ulong m_iShotsFired = 0x1428;
    public const ulong m_bNightVisionOn = 0x142c;
    public const ulong m_bHasNightVision = 0x142d;
    public const ulong m_flVelocityModifier = 0x1430;
    public const ulong m_flHitHeading = 0x1434;
    public const ulong m_nHitBodyPart = 0x1438;
    public const ulong m_iStartAccount = 0x143c;
    public const ulong m_bIsSpawnRappelling = 0x1440;
    public const ulong m_vecSpawnRappellingRopeOrigin = 0x1444;
    public const ulong m_flSpawnRappellingFadeOutForClientViewOffset = 0x1450;
    public const ulong m_nSurvivalTeam = 0x1454;
    public const ulong m_hSurvivalAssassinationTarget = 0x1458;
    public const ulong m_flHealthShotBoostExpirationTime = 0x145c;
    public const ulong m_flLastKnownParachuteScreenEffectAmount = 0x1460;
    public const ulong m_vecIntroStartEyePosition = 0x1464;
    public const ulong m_vecIntroStartPlayerForward = 0x1470;
    public const ulong m_flClientDeathTime = 0x147c;
    public const ulong m_flNightVisionAlpha = 0x1488;
    public const ulong m_bScreenTearFrameCaptured = 0x148c;
    public const ulong m_flFlashBangTime = 0x1490;
    public const ulong m_flFlashScreenshotAlpha = 0x1494;
    public const ulong m_flFlashOverlayAlpha = 0x1498;
    public const ulong m_bFlashBuildUp = 0x149c;
    public const ulong m_bFlashDspHasBeenCleared = 0x149d;
    public const ulong m_bFlashScreenshotHasBeenGrabbed = 0x149e;
    public const ulong m_flFlashMaxAlpha = 0x14a0;
    public const ulong m_flFlashDuration = 0x14a4;
    public const ulong m_flLastFiredWeaponTime = 0x14a8;
    public const ulong m_lastStandingPos = 0x14ac;
    public const ulong m_vecLastMuzzleFlashPos = 0x14b8;
    public const ulong m_angLastMuzzleFlashAngle = 0x14c4;
    public const ulong m_hMuzzleFlashShape = 0x14d0;
    public const ulong m_iHealthBarRenderMaskIndex = 0x14d4;
    public const ulong m_flHealthFadeValue = 0x14d8;
    public const ulong m_flHealthFadeAlpha = 0x14dc;
    public const ulong m_nMyCollisionGroup = 0x14e0;
    public const ulong m_ignoreLadderJumpTime = 0x14e4;
    public const ulong m_ladderSurpressionTimer = 0x14e8;
    public const ulong m_lastLadderNormal = 0x1500;
    public const ulong m_lastLadderPos = 0x150c;
    public const ulong m_flDeathCCWeight = 0x1520;
    public const ulong m_bOldIsScoped = 0x1524;
    public const ulong m_flPrevRoundEndTime = 0x1528;
    public const ulong m_flPrevMatchEndTime = 0x152c;
    public const ulong m_unCurrentEquipmentValue = 0x1530;
    public const ulong m_unRoundStartEquipmentValue = 0x1532;
    public const ulong m_unFreezetimeEndEquipmentValue = 0x1534;
    public const ulong m_passiveItems = 0x1536;
    public const ulong m_vecThirdPersonViewPositionOverride = 0x153c;
    public const ulong m_nHeavyAssaultSuitCooldownRemaining = 0x1548;
    public const ulong m_ArmorValue = 0x154c;
    public const ulong m_angEyeAngles = 0x1550;
    public const ulong m_bInHostageRescueZone = 0x1568;
    public const ulong m_fNextThinkPushAway = 0x156c;
    public const ulong m_bShouldAutobuyDMWeapons = 0x1570;
    public const ulong m_bShouldAutobuyNow = 0x1571;
    public const ulong m_bHud_MiniScoreHidden = 0x1572;
    public const ulong m_bHud_RadarHidden = 0x1573;
    public const ulong m_nLastKillerIndex = 0x1574;
    public const ulong m_nLastConcurrentKilled = 0x1578;
    public const ulong m_nDeathCamMusic = 0x157c;
    public const ulong m_iIDEntIndex = 0x1580;
    public const ulong m_delayTargetIDTimer = 0x1588;
    public const ulong m_iTargetedWeaponEntIndex = 0x15a0;
    public const ulong m_iOldIDEntIndex = 0x15a4;
    public const ulong m_holdTargetIDTimer = 0x15a8;
    public const ulong m_flCurrentMusicStartTime = 0x160c;
    public const ulong m_flMusicRoundStartTime = 0x1610;
    public const ulong m_bDeferStartMusicOnWarmup = 0x1614;
    public const ulong m_cycleLatch = 0x1618;
    public const ulong m_serverIntendedCycle = 0x161c;
    public const ulong m_vecPlayerPatchEconIndices = 0x1620;
    public const ulong m_bHideTargetID = 0x163c;
    public const ulong m_nextTaserShakeTime = 0x1640;
    public const ulong m_firstTaserShakeTime = 0x1644;
    public const ulong m_flLastSmokeOverlayAlpha = 0x1648;
    public const ulong m_vLastSmokeOverlayColor = 0x164c;
    public const ulong m_nPlayerSmokedFx = 0x1658;
    public const ulong m_flNextMagDropTime = 0x165c;
    public const ulong m_nLastMagDropAttachmentIndex = 0x1660;
    public const ulong m_vecBulletHitModels = 0x1668;
    public const ulong m_vecPickupModelSlerpers = 0x1680;
    public const ulong m_vecLastAliveLocalVelocity = 0x1698;
    public const ulong m_flLastNearbyItemHighlightCheck = 0x16a4;
    public const ulong m_bInSurvivalDangerZone = 0x16a8;
    public const ulong m_bNearDangerZone = 0x16a9;
    public const ulong m_entitySpottedState = 0x16e0;
    public const ulong m_flTimeOfLastInjury = 0x16f8;
    public const ulong m_nRelativeDirectionOfLastInjury = 0x16fc;
    public const ulong m_nSurvivalTeamNumber = 0x1700;
    public const ulong m_flNextSprayDecalTime = 0x1704;
    public const ulong m_bPreviouslyInBuyZone = 0x1708;
    public const ulong m_unPreviousWeaponHash = 0x170c;
    public const ulong m_unWeaponHash = 0x1710;
    public const ulong m_bPrevDefuser = 0x1714;
    public const ulong m_bPrevHelmet = 0x1715;
    public const ulong m_nPrevArmorVal = 0x1718;
    public const ulong m_nPrevGrenadeAmmoCount = 0x171c;
    public const ulong m_bGuardianShouldSprayCustomXMark = 0x1720;
    public const ulong m_aimPunchAngle = 0x1724;
    public const ulong m_aimPunchAngleVel = 0x1730;
    public const ulong m_aimPunchTickBase = 0x173c;
    public const ulong m_aimPunchTickFraction = 0x1740;
    public const ulong m_aimPunchCache = 0x1748;
    public const ulong m_flOldFallVelocity = 0x1768;
    public const ulong m_bHasDeathInfo = 0x176c;
    public const ulong m_flDeathInfoTime = 0x1770;
    public const ulong m_vecDeathInfoOrigin = 0x1774;
    public const ulong m_bKilledByHeadshot = 0x1780;
    public const ulong m_hOriginalController = 0x1784;
    public const ulong m_flLandseconds = 0x1798;
}

public static class C_CSPlayerResource {
    public const ulong m_bHostageAlive = 0x540;
    public const ulong m_isHostageFollowingSomeone = 0x54c;
    public const ulong m_iHostageEntityIDs = 0x558;
    public const ulong m_bombsiteCenterA = 0x588;
    public const ulong m_bombsiteCenterB = 0x594;
    public const ulong m_hostageRescueX = 0x5a0;
    public const ulong m_hostageRescueY = 0x5b0;
    public const ulong m_hostageRescueZ = 0x5c0;
    public const ulong m_bEndMatchNextMapAllVoted = 0x5d0;
    public const ulong m_foundGoalPositions = 0x5d1;
}

public static class C_CSPropExplodingBarrelTop {
    public const ulong m_flOverrideAlpha = 0xfc8;
}

public static class C_CSTeam {
    public const ulong m_szTeamMatchStat = 0x5f8;
    public const ulong m_numMapVictories = 0x7f8;
    public const ulong m_bSurrendered = 0x7fc;
    public const ulong m_scoreFirstHalf = 0x800;
    public const ulong m_scoreSecondHalf = 0x804;
    public const ulong m_scoreOvertime = 0x808;
    public const ulong m_szClanTeamname = 0x80c;
    public const ulong m_iClanID = 0x890;
    public const ulong m_nGGLeaderSlot_CT = 0x894;
    public const ulong m_nGGLeaderSlot_T = 0x898;
    public const ulong m_szTeamFlagImage = 0x89c;
    public const ulong m_szTeamLogoImage = 0x8a4;
}

public static class C_Chicken {
    public const ulong m_hHolidayHatAddon = 0x10e0;
    public const ulong m_jumpedThisFrame = 0x10e4;
    public const ulong m_leader = 0x10e8;
    public const ulong m_AttributeManager = 0x10f0;
    public const ulong m_OriginalOwnerXuidLow = 0x1598;
    public const ulong m_OriginalOwnerXuidHigh = 0x159c;
    public const ulong m_bAttributesInitialized = 0x15a0;
    public const ulong m_hWaterWakeParticles = 0x15a4;
}

public static class C_ClientRagdoll {
    public const ulong m_bFadeOut = 0xe70;
    public const ulong m_bImportant = 0xe71;
    public const ulong m_flEffectTime = 0xe74;
    public const ulong m_gibDespawnTime = 0xe78;
    public const ulong m_iCurrentFriction = 0xe7c;
    public const ulong m_iMinFriction = 0xe80;
    public const ulong m_iMaxFriction = 0xe84;
    public const ulong m_iFrictionAnimState = 0xe88;
    public const ulong m_bReleaseRagdoll = 0xe8c;
    public const ulong m_iEyeAttachment = 0xe8d;
    public const ulong m_bFadingOut = 0xe8e;
    public const ulong m_flScaleEnd = 0xe90;
    public const ulong m_flScaleTimeStart = 0xeb8;
    public const ulong m_flScaleTimeEnd = 0xee0;
}

public static class C_ColorCorrection {
    public const ulong m_vecOrigin = 0x540;
    public const ulong m_MinFalloff = 0x54c;
    public const ulong m_MaxFalloff = 0x550;
    public const ulong m_flFadeInDuration = 0x554;
    public const ulong m_flFadeOutDuration = 0x558;
    public const ulong m_flMaxWeight = 0x55c;
    public const ulong m_flCurWeight = 0x560;
    public const ulong m_netlookupFilename = 0x564;
    public const ulong m_bEnabled = 0x764;
    public const ulong m_bMaster = 0x765;
    public const ulong m_bClientSide = 0x766;
    public const ulong m_bExclusive = 0x767;
    public const ulong m_bEnabledOnClient = 0x768;
    public const ulong m_flCurWeightOnClient = 0x76c;
    public const ulong m_bFadingIn = 0x770;
    public const ulong m_flFadeStartWeight = 0x774;
    public const ulong m_flFadeStartTime = 0x778;
    public const ulong m_flFadeDuration = 0x77c;
}

public static class C_ColorCorrectionVolume {
    public const ulong m_LastEnterWeight = 0xcc8;
    public const ulong m_LastEnterTime = 0xccc;
    public const ulong m_LastExitWeight = 0xcd0;
    public const ulong m_LastExitTime = 0xcd4;
    public const ulong m_bEnabled = 0xcd8;
    public const ulong m_MaxWeight = 0xcdc;
    public const ulong m_FadeDuration = 0xce0;
    public const ulong m_Weight = 0xce4;
    public const ulong m_lookupFilename = 0xce8;
}

public static class C_CommandContext {
    public const ulong needsprocessing = 0x0;
    public const ulong command_number = 0x78;
}

public static class C_CsmFovOverride {
    public const ulong m_cameraName = 0x540;
    public const ulong m_flCsmFovOverrideValue = 0x548;
}

public static class C_DangerZone {
    public const ulong m_vecDangerZoneOriginStartedAt = 0x540;
    public const ulong m_flBombLaunchTime = 0x54c;
    public const ulong m_flExtraRadius = 0x550;
    public const ulong m_flExtraRadiusStartTime = 0x554;
    public const ulong m_flExtraRadiusTotalLerpTime = 0x558;
    public const ulong m_nDropOrder = 0x55c;
    public const ulong m_iWave = 0x560;
}

public static class C_DangerZoneController {
    public const ulong m_bDangerZoneControllerEnabled = 0x540;
    public const ulong m_bMissionControlledExplosions = 0x541;
    public const ulong m_vecEndGameCircleStart = 0x544;
    public const ulong m_vecEndGameCircleEnd = 0x550;
    public const ulong m_flStartTime = 0x55c;
    public const ulong m_flFinalExpansionTime = 0x560;
    public const ulong m_DangerZones = 0x564;
    public const ulong m_flWaveEndTimes = 0x60c;
    public const ulong m_hTheFinalZone = 0x620;
}

public static class C_DecoyProjectile {
    public const ulong m_flTimeParticleEffectSpawn = 0x1100;
}

public static class C_Drone {
    public const ulong m_vecClientSideTrailPositions = 0xfd8;
    public const ulong m_hMoveToThisEntity = 0xff0;
    public const ulong m_hDeliveryCargo = 0xff4;
    public const ulong m_hRecentCargo = 0xff8;
    public const ulong m_bPilotTakeoverAllowed = 0xffc;
    public const ulong m_hPotentialCargo = 0x1000;
    public const ulong m_hCurrentPilot = 0x1004;
    public const ulong m_vecTagPositions = 0x1008;
    public const ulong m_vecTagIncrements = 0x1128;
    public const ulong m_flLastTimeCargoWasAttached = 0x1188;
    public const ulong m_vecLastKnownCargoAttachPositions = 0x118c;
    public const ulong m_vecThrusterLastPos = 0x11bc;
    public const ulong m_vecThrusterSmoothVel = 0x11c8;
    public const ulong m_vecThrusterSmoothAccel = 0x11d4;
    public const ulong m_flJammedEffectAmount = 0x11e0;
}

public static class C_Dronegun {
    public const ulong m_vecAttentionTarget = 0xe78;
    public const ulong m_vecTargetOffset = 0xe84;
    public const ulong m_bHasTarget = 0xe90;
    public const ulong m_vecAttentionCurrent = 0xe94;
    public const ulong m_nPoseParamPitch = 0xea0;
    public const ulong m_nPoseParamYaw = 0xea4;
    public const ulong m_bVarInit = 0xea8;
    public const ulong m_nAttachMuzzle = 0xea9;
    public const ulong m_flLastClientThinkTime = 0xeac;
    public const ulong m_flNextSpark = 0xeb0;
    public const ulong m_nBoneOverrideIndex = 0xeb4;
    public const ulong m_vecLaserTracePos = 0xeb8;
}

public static class C_DynamicLight {
    public const ulong m_Flags = 0xcc0;
    public const ulong m_LightStyle = 0xcc1;
    public const ulong m_Radius = 0xcc4;
    public const ulong m_Exponent = 0xcc8;
    public const ulong m_InnerAngle = 0xccc;
    public const ulong m_OuterAngle = 0xcd0;
    public const ulong m_SpotRadius = 0xcd4;
}

public static class C_DynamicProp {
    public const ulong m_bUseHitboxesForRenderBox = 0xfc0;
    public const ulong m_bUseAnimGraph = 0xfc1;
    public const ulong m_pOutputAnimBegun = 0xfc8;
    public const ulong m_pOutputAnimOver = 0xff0;
    public const ulong m_pOutputAnimLoopCycleOver = 0x1018;
    public const ulong m_OnAnimReachedStart = 0x1040;
    public const ulong m_OnAnimReachedEnd = 0x1068;
    public const ulong m_iszDefaultAnim = 0x1090;
    public const ulong m_nDefaultAnimLoopMode = 0x1098;
    public const ulong m_bAnimateOnServer = 0x109c;
    public const ulong m_bRandomizeCycle = 0x109d;
    public const ulong m_bStartDisabled = 0x109e;
    public const ulong m_bScriptedMovement = 0x109f;
    public const ulong m_bFiredStartEndOutput = 0x10a0;
    public const ulong m_bForceNpcExclude = 0x10a1;
    public const ulong m_bCreateNonSolid = 0x10a2;
    public const ulong m_bIsOverrideProp = 0x10a3;
    public const ulong m_iInitialGlowState = 0x10a4;
    public const ulong m_nGlowRange = 0x10a8;
    public const ulong m_nGlowRangeMin = 0x10ac;
    public const ulong m_glowColor = 0x10b0;
    public const ulong m_nGlowTeam = 0x10b4;
    public const ulong m_iCachedFrameCount = 0x10b8;
    public const ulong m_vecCachedRenderMins = 0x10bc;
    public const ulong m_vecCachedRenderMaxs = 0x10c8;
}

public static class C_EconEntity {
    public const ulong m_flFlexDelayTime = 0x1018;
    public const ulong m_flFlexDelayedWeight = 0x1020;
    public const ulong m_bAttributesInitialized = 0x1028;
    public const ulong m_AttributeManager = 0x1030;
    public const ulong m_OriginalOwnerXuidLow = 0x14d8;
    public const ulong m_OriginalOwnerXuidHigh = 0x14dc;
    public const ulong m_nFallbackPaintKit = 0x14e0;
    public const ulong m_nFallbackSeed = 0x14e4;
    public const ulong m_flFallbackWear = 0x14e8;
    public const ulong m_nFallbackStatTrak = 0x14ec;
    public const ulong m_bClientside = 0x14f0;
    public const ulong m_bParticleSystemsCreated = 0x14f1;
    public const ulong m_vecAttachedParticles = 0x14f8;
    public const ulong m_hViewmodelAttachment = 0x1510;
    public const ulong m_iOldTeam = 0x1514;
    public const ulong m_bAttachmentDirty = 0x1518;
    public const ulong m_nUnloadedModelIndex = 0x151c;
    public const ulong m_iNumOwnerValidationRetries = 0x1520;
    public const ulong m_hOldProvidee = 0x1530;
    public const ulong m_vecAttachedModels = 0x1538;
}

public static class C_EconEntity_AttachedModelData_t {
    public const ulong m_iModelDisplayFlags = 0x0;
}

public static class C_EconItemView {
    public const ulong m_bInventoryImageRgbaRequested = 0x60;
    public const ulong m_bInventoryImageTriedCache = 0x61;
    public const ulong m_nInventoryImageRgbaWidth = 0x80;
    public const ulong m_nInventoryImageRgbaHeight = 0x84;
    public const ulong m_szCurrentLoadCachedFileName = 0x88;
    public const ulong m_bRestoreCustomMaterialAfterPrecache = 0x1b8;
    public const ulong m_iItemDefinitionIndex = 0x1ba;
    public const ulong m_iEntityQuality = 0x1bc;
    public const ulong m_iEntityLevel = 0x1c0;
    public const ulong m_iItemID = 0x1c8;
    public const ulong m_iItemIDHigh = 0x1d0;
    public const ulong m_iItemIDLow = 0x1d4;
    public const ulong m_iAccountID = 0x1d8;
    public const ulong m_iInventoryPosition = 0x1dc;
    public const ulong m_bInitialized = 0x1e8;
    public const ulong m_bIsStoreItem = 0x1e9;
    public const ulong m_bIsTradeItem = 0x1ea;
    public const ulong m_iEntityQuantity = 0x1ec;
    public const ulong m_iRarityOverride = 0x1f0;
    public const ulong m_iQualityOverride = 0x1f4;
    public const ulong m_unClientFlags = 0x1f8;
    public const ulong m_unOverrideStyle = 0x1f9;
    public const ulong m_AttributeList = 0x210;
    public const ulong m_NetworkedDynamicAttributes = 0x270;
    public const ulong m_szCustomName = 0x2d0;
    public const ulong m_szCustomNameOverride = 0x371;
    public const ulong m_bInitializedTags = 0x440;
}

public static class C_EconWearable {
    public const ulong m_nForceSkin = 0x1550;
    public const ulong m_bAlwaysAllow = 0x1554;
}

public static class C_EntityDissolve {
    public const ulong m_flStartTime = 0xcc8;
    public const ulong m_flFadeInStart = 0xccc;
    public const ulong m_flFadeInLength = 0xcd0;
    public const ulong m_flFadeOutModelStart = 0xcd4;
    public const ulong m_flFadeOutModelLength = 0xcd8;
    public const ulong m_flFadeOutStart = 0xcdc;
    public const ulong m_flFadeOutLength = 0xce0;
    public const ulong m_flNextSparkTime = 0xce4;
    public const ulong m_nDissolveType = 0xce8;
    public const ulong m_vDissolverOrigin = 0xcec;
    public const ulong m_nMagnitude = 0xcf8;
    public const ulong m_bCoreExplode = 0xcfc;
    public const ulong m_bLinkedToServerEnt = 0xcfd;
}

public static class C_EntityFlame {
    public const ulong m_hEntAttached = 0x540;
    public const ulong m_hOldAttached = 0x568;
    public const ulong m_bCheapEffect = 0x56c;
}

public static class C_EnvCombinedLightProbeVolume {
    public const ulong m_Color = 0x1610;
    public const ulong m_flBrightness = 0x1614;
    public const ulong m_hCubemapTexture = 0x1618;
    public const ulong m_bCustomCubemapTexture = 0x1620;
    public const ulong m_hLightProbeTexture = 0x1628;
    public const ulong m_hLightProbeDirectLightIndicesTexture = 0x1630;
    public const ulong m_hLightProbeDirectLightScalarsTexture = 0x1638;
    public const ulong m_hLightProbeDirectLightShadowsTexture = 0x1640;
    public const ulong m_vBoxMins = 0x1648;
    public const ulong m_vBoxMaxs = 0x1654;
    public const ulong m_LightGroups = 0x1660;
    public const ulong m_bMoveable = 0x1668;
    public const ulong m_nHandshake = 0x166c;
    public const ulong m_nEnvCubeMapArrayIndex = 0x1670;
    public const ulong m_nPriority = 0x1674;
    public const ulong m_bStartDisabled = 0x1678;
    public const ulong m_flEdgeFadeDist = 0x167c;
    public const ulong m_vEdgeFadeDists = 0x1680;
    public const ulong m_nLightProbeSizeX = 0x168c;
    public const ulong m_nLightProbeSizeY = 0x1690;
    public const ulong m_nLightProbeSizeZ = 0x1694;
    public const ulong m_nLightProbeAtlasX = 0x1698;
    public const ulong m_nLightProbeAtlasY = 0x169c;
    public const ulong m_nLightProbeAtlasZ = 0x16a0;
    public const ulong m_bEnabled = 0x16b9;
}

public static class C_EnvCubemap {
    public const ulong m_hCubemapTexture = 0x630;
    public const ulong m_bCustomCubemapTexture = 0x638;
    public const ulong m_flInfluenceRadius = 0x63c;
    public const ulong m_vBoxProjectMins = 0x640;
    public const ulong m_vBoxProjectMaxs = 0x64c;
    public const ulong m_LightGroups = 0x658;
    public const ulong m_bMoveable = 0x660;
    public const ulong m_nHandshake = 0x664;
    public const ulong m_nEnvCubeMapArrayIndex = 0x668;
    public const ulong m_nPriority = 0x66c;
    public const ulong m_flEdgeFadeDist = 0x670;
    public const ulong m_vEdgeFadeDists = 0x674;
    public const ulong m_flDiffuseScale = 0x680;
    public const ulong m_bStartDisabled = 0x684;
    public const ulong m_bDefaultEnvMap = 0x685;
    public const ulong m_bDefaultSpecEnvMap = 0x686;
    public const ulong m_bIndoorCubeMap = 0x687;
    public const ulong m_bCopyDiffuseFromDefaultCubemap = 0x688;
    public const ulong m_bEnabled = 0x698;
}

public static class C_EnvCubemapFog {
    public const ulong m_flEndDistance = 0x540;
    public const ulong m_flStartDistance = 0x544;
    public const ulong m_flFogFalloffExponent = 0x548;
    public const ulong m_bHeightFogEnabled = 0x54c;
    public const ulong m_flFogHeightWidth = 0x550;
    public const ulong m_flFogHeightEnd = 0x554;
    public const ulong m_flFogHeightStart = 0x558;
    public const ulong m_flFogHeightExponent = 0x55c;
    public const ulong m_flLODBias = 0x560;
    public const ulong m_bActive = 0x564;
    public const ulong m_bStartDisabled = 0x565;
    public const ulong m_flFogMaxOpacity = 0x568;
    public const ulong m_nCubemapSourceType = 0x56c;
    public const ulong m_hSkyMaterial = 0x570;
    public const ulong m_iszSkyEntity = 0x578;
    public const ulong m_hFogCubemapTexture = 0x580;
    public const ulong m_bHasHeightFogEnd = 0x588;
    public const ulong m_bFirstTime = 0x589;
}

public static class C_EnvDecal {
    public const ulong m_hDecalMaterial = 0xcc0;
    public const ulong m_flWidth = 0xcc8;
    public const ulong m_flHeight = 0xccc;
    public const ulong m_flDepth = 0xcd0;
    public const ulong m_nRenderOrder = 0xcd4;
    public const ulong m_bProjectOnWorld = 0xcd8;
    public const ulong m_bProjectOnCharacters = 0xcd9;
    public const ulong m_bProjectOnWater = 0xcda;
    public const ulong m_flDepthSortBias = 0xcdc;
}

public static class C_EnvDetailController {
    public const ulong m_flFadeStartDist = 0x540;
    public const ulong m_flFadeEndDist = 0x544;
}

public static class C_EnvGasCanister {
    public const ulong m_bLanded = 0xe70;
    public const ulong m_bSpawnedSkyboxParticles = 0xed8;
    public const ulong m_flKillImpactParticlesTime = 0xedc;
    public const ulong m_vecImpactPosition = 0xee0;
    public const ulong m_vecStartPosition = 0xeec;
    public const ulong m_vecEnterWorldPosition = 0xef8;
    public const ulong m_vecDirection = 0xf04;
    public const ulong m_vecStartAngles = 0xf10;
    public const ulong m_flFlightTime = 0xf1c;
    public const ulong m_flFlightSpeed = 0xf20;
    public const ulong m_flLaunchTime = 0xf24;
    public const ulong m_flInitialZSpeed = 0xf28;
    public const ulong m_flZAcceleration = 0xf2c;
    public const ulong m_flHorizSpeed = 0xf30;
    public const ulong m_bLaunchedFromWithinWorld = 0xf34;
    public const ulong m_vecParabolaDirection = 0xf38;
    public const ulong m_flWorldEnterTime = 0xf44;
    public const ulong m_vecSkyboxOrigin = 0xf48;
    public const ulong m_flSkyboxScale = 0xf54;
    public const ulong m_bInSkybox = 0xf58;
    public const ulong m_bDoImpactEffects = 0xf59;
    public const ulong m_nMyZoneIndex = 0xf5c;
    public const ulong m_hSkyboxCopy = 0xf60;
    public const ulong m_flLaunchHeight = 0xf64;
}

public static class C_EnvLightProbeVolume {
    public const ulong m_hLightProbeTexture = 0x1520;
    public const ulong m_hLightProbeDirectLightIndicesTexture = 0x1528;
    public const ulong m_hLightProbeDirectLightScalarsTexture = 0x1530;
    public const ulong m_hLightProbeDirectLightShadowsTexture = 0x1538;
    public const ulong m_vBoxMins = 0x1540;
    public const ulong m_vBoxMaxs = 0x154c;
    public const ulong m_LightGroups = 0x1558;
    public const ulong m_bMoveable = 0x1560;
    public const ulong m_nHandshake = 0x1564;
    public const ulong m_nPriority = 0x1568;
    public const ulong m_bStartDisabled = 0x156c;
    public const ulong m_nLightProbeSizeX = 0x1570;
    public const ulong m_nLightProbeSizeY = 0x1574;
    public const ulong m_nLightProbeSizeZ = 0x1578;
    public const ulong m_nLightProbeAtlasX = 0x157c;
    public const ulong m_nLightProbeAtlasY = 0x1580;
    public const ulong m_nLightProbeAtlasZ = 0x1584;
    public const ulong m_bEnabled = 0x1591;
}

public static class C_EnvParticleGlow {
    public const ulong m_flAlphaScale = 0x1270;
    public const ulong m_flRadiusScale = 0x1274;
    public const ulong m_flSelfIllumScale = 0x1278;
    public const ulong m_ColorTint = 0x127c;
    public const ulong m_hTextureOverride = 0x1280;
}

public static class C_EnvScreenOverlay {
    public const ulong m_iszOverlayNames = 0x540;
    public const ulong m_flOverlayTimes = 0x590;
    public const ulong m_flStartTime = 0x5b8;
    public const ulong m_iDesiredOverlay = 0x5bc;
    public const ulong m_bIsActive = 0x5c0;
    public const ulong m_bWasActive = 0x5c1;
    public const ulong m_iCachedDesiredOverlay = 0x5c4;
    public const ulong m_iCurrentOverlay = 0x5c8;
    public const ulong m_flCurrentOverlayTime = 0x5cc;
}

public static class C_EnvSky {
    public const ulong m_hSkyMaterial = 0xcc0;
    public const ulong m_hSkyMaterialLightingOnly = 0xcc8;
    public const ulong m_bStartDisabled = 0xcd0;
    public const ulong m_vTintColor = 0xcd1;
    public const ulong m_vTintColorLightingOnly = 0xcd5;
    public const ulong m_flBrightnessScale = 0xcdc;
    public const ulong m_nFogType = 0xce0;
    public const ulong m_flFogMinStart = 0xce4;
    public const ulong m_flFogMinEnd = 0xce8;
    public const ulong m_flFogMaxStart = 0xcec;
    public const ulong m_flFogMaxEnd = 0xcf0;
    public const ulong m_bEnabled = 0xcf4;
}

public static class C_EnvVolumetricFogController {
    public const ulong m_flScattering = 0x540;
    public const ulong m_flAnisotropy = 0x544;
    public const ulong m_flFadeSpeed = 0x548;
    public const ulong m_flDrawDistance = 0x54c;
    public const ulong m_flFadeInStart = 0x550;
    public const ulong m_flFadeInEnd = 0x554;
    public const ulong m_flIndirectStrength = 0x558;
    public const ulong m_nIndirectTextureDimX = 0x55c;
    public const ulong m_nIndirectTextureDimY = 0x560;
    public const ulong m_nIndirectTextureDimZ = 0x564;
    public const ulong m_vBoxMins = 0x568;
    public const ulong m_vBoxMaxs = 0x574;
    public const ulong m_bActive = 0x580;
    public const ulong m_flStartAnisoTime = 0x584;
    public const ulong m_flStartScatterTime = 0x588;
    public const ulong m_flStartDrawDistanceTime = 0x58c;
    public const ulong m_flStartAnisotropy = 0x590;
    public const ulong m_flStartScattering = 0x594;
    public const ulong m_flStartDrawDistance = 0x598;
    public const ulong m_flDefaultAnisotropy = 0x59c;
    public const ulong m_flDefaultScattering = 0x5a0;
    public const ulong m_flDefaultDrawDistance = 0x5a4;
    public const ulong m_bStartDisabled = 0x5a8;
    public const ulong m_bEnableIndirect = 0x5a9;
    public const ulong m_bIsMaster = 0x5aa;
    public const ulong m_hFogIndirectTexture = 0x5b0;
    public const ulong m_nForceRefreshCount = 0x5b8;
    public const ulong m_bFirstTime = 0x5bc;
}

public static class C_EnvVolumetricFogVolume {
    public const ulong m_bActive = 0x540;
    public const ulong m_vBoxMins = 0x544;
    public const ulong m_vBoxMaxs = 0x550;
    public const ulong m_bStartDisabled = 0x55c;
    public const ulong m_flStrength = 0x560;
    public const ulong m_nFalloffShape = 0x564;
    public const ulong m_flFalloffExponent = 0x568;
}

public static class C_EnvWind {
    public const ulong m_EnvWindShared = 0x540;
}

public static class C_EnvWindClientside {
    public const ulong m_EnvWindShared = 0x540;
}

public static class C_EnvWindShared {
    public const ulong m_flStartTime = 0x8;
    public const ulong m_iWindSeed = 0xc;
    public const ulong m_iMinWind = 0x10;
    public const ulong m_iMaxWind = 0x12;
    public const ulong m_windRadius = 0x14;
    public const ulong m_iMinGust = 0x18;
    public const ulong m_iMaxGust = 0x1a;
    public const ulong m_flMinGustDelay = 0x1c;
    public const ulong m_flMaxGustDelay = 0x20;
    public const ulong m_flGustDuration = 0x24;
    public const ulong m_iGustDirChange = 0x28;
    public const ulong m_location = 0x2c;
    public const ulong m_iszGustSound = 0x38;
    public const ulong m_iWindDir = 0x3c;
    public const ulong m_flWindSpeed = 0x40;
    public const ulong m_currentWindVector = 0x44;
    public const ulong m_CurrentSwayVector = 0x50;
    public const ulong m_PrevSwayVector = 0x5c;
    public const ulong m_iInitialWindDir = 0x68;
    public const ulong m_flInitialWindSpeed = 0x6c;
    public const ulong m_flVariationTime = 0x70;
    public const ulong m_flSwayTime = 0x74;
    public const ulong m_flSimTime = 0x78;
    public const ulong m_flSwitchTime = 0x7c;
    public const ulong m_flAveWindSpeed = 0x80;
    public const ulong m_bGusting = 0x84;
    public const ulong m_flWindAngleVariation = 0x88;
    public const ulong m_flWindSpeedVariation = 0x8c;
    public const ulong m_iEntIndex = 0x90;
}

public static class C_EnvWindShared_WindAveEvent_t {
    public const ulong m_flStartWindSpeed = 0x0;
    public const ulong m_flAveWindSpeed = 0x4;
}

public static class C_EnvWindShared_WindVariationEvent_t {
    public const ulong m_flWindAngleVariation = 0x0;
    public const ulong m_flWindSpeedVariation = 0x4;
}

public static class C_FireSmoke {
    public const ulong m_nFlameModelIndex = 0x550;
    public const ulong m_nFlameFromAboveModelIndex = 0x554;
    public const ulong m_flScaleRegister = 0x558;
    public const ulong m_flScaleStart = 0x55c;
    public const ulong m_flScaleEnd = 0x560;
    public const ulong m_flScaleTimeStart = 0x564;
    public const ulong m_flScaleTimeEnd = 0x568;
    public const ulong m_flChildFlameSpread = 0x56c;
    public const ulong m_flClipPerc = 0x580;
    public const ulong m_bClipTested = 0x584;
    public const ulong m_bFadingOut = 0x585;
    public const ulong m_tParticleSpawn = 0x588;
    public const ulong m_pFireOverlay = 0x590;
}

public static class C_FireSprite {
    public const ulong m_vecMoveDir = 0xdf0;
    public const ulong m_bFadeFromAbove = 0xdfc;
}

public static class C_Fish {
    public const ulong m_pos = 0xe70;
    public const ulong m_vel = 0xe7c;
    public const ulong m_angles = 0xe88;
    public const ulong m_localLifeState = 0xe94;
    public const ulong m_deathDepth = 0xe98;
    public const ulong m_deathAngle = 0xe9c;
    public const ulong m_buoyancy = 0xea0;
    public const ulong m_wiggleTimer = 0xea8;
    public const ulong m_wigglePhase = 0xec0;
    public const ulong m_wiggleRate = 0xec4;
    public const ulong m_actualPos = 0xec8;
    public const ulong m_actualAngles = 0xed4;
    public const ulong m_poolOrigin = 0xee0;
    public const ulong m_waterLevel = 0xeec;
    public const ulong m_gotUpdate = 0xef0;
    public const ulong m_x = 0xef4;
    public const ulong m_y = 0xef8;
    public const ulong m_z = 0xefc;
    public const ulong m_angle = 0xf00;
    public const ulong m_errorHistory = 0xf04;
    public const ulong m_errorHistoryIndex = 0xf54;
    public const ulong m_errorHistoryCount = 0xf58;
    public const ulong m_averageError = 0xf5c;
}

public static class C_Fists {
    public const ulong m_bPlayingUninterruptableAct = 0x18d0;
    public const ulong m_nUninterruptableActivity = 0x18d4;
}

public static class C_FogController {
    public const ulong m_fog = 0x540;
    public const ulong m_bUseAngles = 0x5a8;
    public const ulong m_iChangedVariables = 0x5ac;
}

public static class C_FootstepControl {
    public const ulong m_source = 0xcc8;
    public const ulong m_destination = 0xcd0;
}

public static class C_FuncConveyor {
    public const ulong m_vecMoveDirEntitySpace = 0xcc8;
    public const ulong m_flTargetSpeed = 0xcd4;
    public const ulong m_nTransitionStartTick = 0xcd8;
    public const ulong m_nTransitionDurationTicks = 0xcdc;
    public const ulong m_flTransitionStartSpeed = 0xce0;
    public const ulong m_hConveyorModels = 0xce8;
    public const ulong m_flCurrentConveyorOffset = 0xd00;
    public const ulong m_flCurrentConveyorSpeed = 0xd04;
}

public static class C_FuncElectrifiedVolume {
    public const ulong m_nAmbientEffect = 0xcc0;
    public const ulong m_EffectName = 0xcc8;
    public const ulong m_bState = 0xcd0;
}

public static class C_FuncLadder {
    public const ulong m_vecLadderDir = 0xcc0;
    public const ulong m_Dismounts = 0xcd0;
    public const ulong m_vecLocalTop = 0xce8;
    public const ulong m_vecPlayerMountPositionTop = 0xcf4;
    public const ulong m_vecPlayerMountPositionBottom = 0xd00;
    public const ulong m_flAutoRideSpeed = 0xd0c;
    public const ulong m_bDisabled = 0xd10;
    public const ulong m_bFakeLadder = 0xd11;
    public const ulong m_bHasSlack = 0xd12;
}

public static class C_FuncMonitor {
    public const ulong m_targetCamera = 0xcc0;
    public const ulong m_nResolutionEnum = 0xcc8;
    public const ulong m_bRenderShadows = 0xccc;
    public const ulong m_bUseUniqueColorTarget = 0xccd;
    public const ulong m_brushModelName = 0xcd0;
    public const ulong m_hTargetCamera = 0xcd8;
    public const ulong m_bEnabled = 0xcdc;
    public const ulong m_bDraw3DSkybox = 0xcdd;
}

public static class C_FuncTrackTrain {
    public const ulong m_nLongAxis = 0xcc0;
    public const ulong m_flRadius = 0xcc4;
    public const ulong m_flLineLength = 0xcc8;
}

public static class C_GlobalLight {
    public const ulong m_WindClothForceHandle = 0xa00;
}

public static class C_GradientFog {
    public const ulong m_hGradientFogTexture = 0x540;
    public const ulong m_flFogStartDistance = 0x548;
    public const ulong m_flFogEndDistance = 0x54c;
    public const ulong m_bHeightFogEnabled = 0x550;
    public const ulong m_flFogStartHeight = 0x554;
    public const ulong m_flFogEndHeight = 0x558;
    public const ulong m_flFarZ = 0x55c;
    public const ulong m_flFogMaxOpacity = 0x560;
    public const ulong m_flFogFalloffExponent = 0x564;
    public const ulong m_flFogVerticalExponent = 0x568;
    public const ulong m_fogColor = 0x56c;
    public const ulong m_flFogStrength = 0x570;
    public const ulong m_flFadeTime = 0x574;
    public const ulong m_bStartDisabled = 0x578;
    public const ulong m_bIsEnabled = 0x579;
    public const ulong m_bGradientFogNeedsTextures = 0x57a;
}

public static class C_GrassBurn {
    public const ulong m_flGrassBurnClearTime = 0x540;
    public const ulong m_bClientPendingClear = 0x544;
    public const ulong m_flGrassBurnClearTimeLocal = 0x548;
    public const ulong m_vecGrassBurnPositions = 0x550;
}

public static class C_HandleTest {
    public const ulong m_Handle = 0x540;
    public const ulong m_bSendHandle = 0x544;
}

public static class C_Hostage {
    public const ulong m_entitySpottedState = 0x1098;
    public const ulong m_leader = 0x10b0;
    public const ulong m_reuseTimer = 0x10b8;
    public const ulong m_vel = 0x10d0;
    public const ulong m_isRescued = 0x10dc;
    public const ulong m_jumpedThisFrame = 0x10dd;
    public const ulong m_nHostageState = 0x10e0;
    public const ulong m_bHandsHaveBeenCut = 0x10e4;
    public const ulong m_hHostageGrabber = 0x10e8;
    public const ulong m_fLastGrabTime = 0x10ec;
    public const ulong m_vecGrabbedPos = 0x10f0;
    public const ulong m_flRescueStartTime = 0x10fc;
    public const ulong m_flGrabSuccessTime = 0x1100;
    public const ulong m_flDropStartTime = 0x1104;
    public const ulong m_flDeadOrRescuedTime = 0x1108;
    public const ulong m_blinkTimer = 0x1110;
    public const ulong m_lookAt = 0x1128;
    public const ulong m_lookAroundTimer = 0x1138;
    public const ulong m_isInit = 0x1150;
    public const ulong m_eyeAttachment = 0x1151;
    public const ulong m_chestAttachment = 0x1152;
    public const ulong m_pPredictionOwner = 0x1158;
    public const ulong m_fNewestAlphaThinkTime = 0x1160;
}

public static class C_Inferno {
    public const ulong m_nfxFireDamageEffect = 0xd00;
    public const ulong m_fireXDelta = 0xd04;
    public const ulong m_fireYDelta = 0xe04;
    public const ulong m_fireZDelta = 0xf04;
    public const ulong m_fireParentXDelta = 0x1004;
    public const ulong m_fireParentYDelta = 0x1104;
    public const ulong m_fireParentZDelta = 0x1204;
    public const ulong m_bFireIsBurning = 0x1304;
    public const ulong m_BurnNormal = 0x1344;
    public const ulong m_fireCount = 0x1644;
    public const ulong m_nInfernoType = 0x1648;
    public const ulong m_nFireLifetime = 0x164c;
    public const ulong m_bInPostEffectTime = 0x1650;
    public const ulong m_lastFireCount = 0x1654;
    public const ulong m_nFireEffectTickBegin = 0x1658;
    public const ulong m_drawableCount = 0x8260;
    public const ulong m_blosCheck = 0x8264;
    public const ulong m_nlosperiod = 0x8268;
    public const ulong m_maxFireHalfWidth = 0x826c;
    public const ulong m_maxFireHeight = 0x8270;
    public const ulong m_minBounds = 0x8274;
    public const ulong m_maxBounds = 0x8280;
    public const ulong m_flLastGrassBurnThink = 0x828c;
}

public static class C_InfoMapRegion {
    public const ulong m_flRadius = 0x540;
    public const ulong m_szLocToken = 0x544;
    public const ulong m_pNext = 0x5c8;
}

public static class C_InfoVisibilityBox {
    public const ulong m_nMode = 0x544;
    public const ulong m_vBoxSize = 0x548;
    public const ulong m_bEnabled = 0x554;
}

public static class C_IronSightController {
    public const ulong m_bIronSightAvailable = 0x10;
    public const ulong m_flIronSightAmount = 0x14;
    public const ulong m_flIronSightAmountGained = 0x18;
    public const ulong m_flIronSightAmountBiased = 0x1c;
    public const ulong m_flIronSightAmount_Interpolated = 0x20;
    public const ulong m_flIronSightAmountGained_Interpolated = 0x24;
    public const ulong m_flIronSightAmountBiased_Interpolated = 0x28;
    public const ulong m_flInterpolationLastUpdated = 0x2c;
    public const ulong m_angDeltaAverage = 0x30;
    public const ulong m_angViewLast = 0x90;
    public const ulong m_vecDotCoords = 0x9c;
    public const ulong m_flDotBlur = 0xa4;
    public const ulong m_flSpeedRatio = 0xa8;
}

public static class C_Item {
    public const ulong m_bShouldGlow = 0x1550;
    public const ulong m_pReticleHintTextName = 0x1551;
}

public static class C_ItemDogtags {
    public const ulong m_OwningPlayer = 0x1658;
    public const ulong m_KillingPlayer = 0x165c;
}

public static class C_LightEntity {
    public const ulong m_CLightComponent = 0xcc0;
}

public static class C_LightGlow {
    public const ulong m_nHorizontalSize = 0xcc0;
    public const ulong m_nVerticalSize = 0xcc4;
    public const ulong m_nMinDist = 0xcc8;
    public const ulong m_nMaxDist = 0xccc;
    public const ulong m_nOuterMaxDist = 0xcd0;
    public const ulong m_flGlowProxySize = 0xcd4;
    public const ulong m_flHDRColorScale = 0xcd8;
    public const ulong m_Glow = 0xce0;
}

public static class C_LightGlowOverlay {
    public const ulong m_vecOrigin = 0xd0;
    public const ulong m_vecDirection = 0xdc;
    public const ulong m_nMinDist = 0xe8;
    public const ulong m_nMaxDist = 0xec;
    public const ulong m_nOuterMaxDist = 0xf0;
    public const ulong m_bOneSided = 0xf4;
    public const ulong m_bModulateByDot = 0xf5;
}

public static class C_LocalTempEntity {
    public const ulong flags = 0xe88;
    public const ulong die = 0xe8c;
    public const ulong m_flFrameMax = 0xe90;
    public const ulong x = 0xe94;
    public const ulong y = 0xe98;
    public const ulong fadeSpeed = 0xe9c;
    public const ulong bounceFactor = 0xea0;
    public const ulong hitSound = 0xea4;
    public const ulong priority = 0xea8;
    public const ulong tentOffset = 0xeac;
    public const ulong m_vecTempEntAngVelocity = 0xeb8;
    public const ulong tempent_renderamt = 0xec4;
    public const ulong m_vecNormal = 0xec8;
    public const ulong m_flSpriteScale = 0xed4;
    public const ulong m_nFlickerFrame = 0xed8;
    public const ulong m_flFrameRate = 0xedc;
    public const ulong m_flFrame = 0xee0;
    public const ulong m_pszImpactEffect = 0xee8;
    public const ulong m_pszParticleEffect = 0xef0;
    public const ulong m_bParticleCollision = 0xef8;
    public const ulong m_iLastCollisionFrame = 0xefc;
    public const ulong m_vLastCollisionOrigin = 0xf00;
    public const ulong m_vecTempEntVelocity = 0xf0c;
    public const ulong m_vecPrevAbsOrigin = 0xf18;
    public const ulong m_vecTempEntAcceleration = 0xf24;
}

public static class C_MapVetoPickController {
    public const ulong m_nDraftType = 0x550;
    public const ulong m_nTeamWinningCoinToss = 0x554;
    public const ulong m_nTeamWithFirstChoice = 0x558;
    public const ulong m_nVoteMapIdsList = 0x658;
    public const ulong m_nAccountIDs = 0x674;
    public const ulong m_nMapId0 = 0x774;
    public const ulong m_nMapId1 = 0x874;
    public const ulong m_nMapId2 = 0x974;
    public const ulong m_nMapId3 = 0xa74;
    public const ulong m_nMapId4 = 0xb74;
    public const ulong m_nMapId5 = 0xc74;
    public const ulong m_nStartingSide0 = 0xd74;
    public const ulong m_nCurrentPhase = 0xe74;
    public const ulong m_nPhaseStartTick = 0xe78;
    public const ulong m_nPhaseDurationTicks = 0xe7c;
    public const ulong m_nPostDataUpdateTick = 0xe80;
    public const ulong m_bDisabledHud = 0xe84;
}

public static class C_Melee {
    public const ulong m_flThrowAt = 0x18d0;
}

public static class C_MolotovProjectile {
    public const ulong m_bIsIncGrenade = 0x10e0;
}

public static class C_Multimeter {
    public const ulong m_hTargetC4 = 0xe78;
}

public static class C_OmniLight {
    public const ulong m_flInnerAngle = 0xf08;
    public const ulong m_flOuterAngle = 0xf0c;
    public const ulong m_bShowLight = 0xf10;
}

public static class C_ParadropChopper {
    public const ulong m_vecLastRopeTargetPos = 0xe78;
    public const ulong m_flLastRopeTime = 0xe84;
    public const ulong m_nRappelABone = 0xe88;
    public const ulong m_nRappelBBone = 0xe8c;
    public const ulong m_hCallingPlayer = 0xe90;
    public const ulong m_bCalledByPlayer = 0xe94;
}

public static class C_ParticleSystem {
    public const ulong m_szSnapshotFileName = 0xcc0;
    public const ulong m_bActive = 0xec0;
    public const ulong m_bFrozen = 0xec1;
    public const ulong m_flFreezeTransitionDuration = 0xec4;
    public const ulong m_nStopType = 0xec8;
    public const ulong m_bAnimateDuringGameplayPause = 0xecc;
    public const ulong m_iEffectIndex = 0xed0;
    public const ulong m_flStartTime = 0xed8;
    public const ulong m_flPreSimTime = 0xedc;
    public const ulong m_vServerControlPoints = 0xee0;
    public const ulong m_iServerControlPointAssignments = 0xf10;
    public const ulong m_hControlPointEnts = 0xf14;
    public const ulong m_bNoSave = 0x1014;
    public const ulong m_bNoFreeze = 0x1015;
    public const ulong m_bNoRamp = 0x1016;
    public const ulong m_bStartActive = 0x1017;
    public const ulong m_iszEffectName = 0x1018;
    public const ulong m_iszControlPointNames = 0x1020;
    public const ulong m_nDataCP = 0x1220;
    public const ulong m_vecDataCPValue = 0x1224;
    public const ulong m_nTintCP = 0x1230;
    public const ulong m_clrTint = 0x1234;
    public const ulong m_bOldActive = 0x1258;
    public const ulong m_bOldFrozen = 0x1259;
}

public static class C_PathParticleRope {
    public const ulong m_bStartActive = 0x540;
    public const ulong m_flMaxSimulationTime = 0x544;
    public const ulong m_iszEffectName = 0x548;
    public const ulong m_PathNodes_Name = 0x550;
    public const ulong m_flParticleSpacing = 0x568;
    public const ulong m_flSlack = 0x56c;
    public const ulong m_flRadius = 0x570;
    public const ulong m_ColorTint = 0x574;
    public const ulong m_nEffectState = 0x578;
    public const ulong m_iEffectIndex = 0x580;
    public const ulong m_PathNodes_Position = 0x588;
    public const ulong m_PathNodes_TangentIn = 0x5a0;
    public const ulong m_PathNodes_TangentOut = 0x5b8;
    public const ulong m_PathNodes_Color = 0x5d0;
    public const ulong m_PathNodes_PinEnabled = 0x5e8;
    public const ulong m_PathNodes_RadiusScale = 0x600;
}

public static class C_PhysMagnet {
    public const ulong m_aAttachedObjectsFromServer = 0xe70;
    public const ulong m_aAttachedObjects = 0xe88;
}

public static class C_PhysPropClientside {
    public const ulong m_flTouchDelta = 0xfc0;
    public const ulong m_fDeathTime = 0xfc4;
    public const ulong m_impactEnergyScale = 0xfc8;
    public const ulong m_inertiaScale = 0xfcc;
    public const ulong m_flDmgModBullet = 0xfd0;
    public const ulong m_flDmgModClub = 0xfd4;
    public const ulong m_flDmgModExplosive = 0xfd8;
    public const ulong m_flDmgModFire = 0xfdc;
    public const ulong m_iszPhysicsDamageTableName = 0xfe0;
    public const ulong m_iszBasePropData = 0xfe8;
    public const ulong m_iInteractions = 0xff0;
    public const ulong m_bHasBreakPiecesOrCommands = 0xff4;
    public const ulong m_vecDamagePosition = 0xff8;
    public const ulong m_vecDamageDirection = 0x1004;
    public const ulong m_nDamageType = 0x1010;
}

public static class C_PhysPropLootCrate {
    public const ulong m_bRenderInPSPM = 0xfd0;
    public const ulong m_bRenderInTablet = 0xfd1;
    public const ulong m_iMaxHealth = 0xfd4;
    public const ulong m_iHealth = 0xfd8;
}

public static class C_PhysicsProp {
    public const ulong m_bAwake = 0xfc0;
}

public static class C_PickUpModelSlerper {
    public const ulong m_hPlayerParent = 0xe70;
    public const ulong m_hItem = 0xe74;
    public const ulong m_flTimePickedUp = 0xe78;
    public const ulong m_angOriginal = 0xe7c;
    public const ulong m_vecPosOriginal = 0xe88;
    public const ulong m_angRandom = 0xe98;
}

public static class C_PlantedC4 {
    public const ulong m_bBombTicking = 0xe70;
    public const ulong m_nBombSite = 0xe74;
    public const ulong m_nSourceSoundscapeHash = 0xe78;
    public const ulong m_entitySpottedState = 0xe80;
    public const ulong m_flNextGlow = 0xe98;
    public const ulong m_flNextBeep = 0xe9c;
    public const ulong m_flC4Blow = 0xea0;
    public const ulong m_bCannotBeDefused = 0xea4;
    public const ulong m_bHasExploded = 0xea5;
    public const ulong m_flTimerLength = 0xea8;
    public const ulong m_bBeingDefused = 0xeac;
    public const ulong m_bTenSecWarning = 0xeb0;
    public const ulong m_bTriggerWarning = 0xeb4;
    public const ulong m_bExplodeWarning = 0xeb8;
    public const ulong m_bC4Activated = 0xebc;
    public const ulong m_bLocalBRMusicPlayed = 0xebd;
    public const ulong m_flDefuseLength = 0xec0;
    public const ulong m_flDefuseCountDown = 0xec4;
    public const ulong m_bBombDefused = 0xec8;
    public const ulong m_hBombDefuser = 0xecc;
    public const ulong m_hControlPanel = 0xed0;
    public const ulong m_hDefuserMultimeter = 0xed4;
    public const ulong m_flNextRadarFlashTime = 0xed8;
    public const ulong m_bRadarFlash = 0xedc;
    public const ulong m_pBombDefuser = 0xee0;
    public const ulong m_fLastDefuseTime = 0xee4;
    public const ulong m_pPredictionOwner = 0xee8;
}

public static class C_PlayerPing {
    public const ulong m_hPlayer = 0x570;
    public const ulong m_hPingedEntity = 0x574;
    public const ulong m_iType = 0x578;
    public const ulong m_bUrgent = 0x57c;
    public const ulong m_szPlaceName = 0x57d;
}

public static class C_PlayerSprayDecal {
    public const ulong m_nUniqueID = 0xcc0;
    public const ulong m_unAccountID = 0xcc4;
    public const ulong m_unTraceID = 0xcc8;
    public const ulong m_rtGcTime = 0xccc;
    public const ulong m_vecEndPos = 0xcd0;
    public const ulong m_vecStart = 0xcdc;
    public const ulong m_vecLeft = 0xce8;
    public const ulong m_vecNormal = 0xcf4;
    public const ulong m_nPlayer = 0xd00;
    public const ulong m_nEntity = 0xd04;
    public const ulong m_nHitbox = 0xd08;
    public const ulong m_flCreationTime = 0xd0c;
    public const ulong m_nTintID = 0xd10;
    public const ulong m_nVersion = 0xd14;
    public const ulong m_ubSignature = 0xd15;
    public const ulong m_SprayRenderHelper = 0xda0;
}

public static class C_PlayerVisibility {
    public const ulong m_flVisibilityStrength = 0x540;
    public const ulong m_flFogDistanceMultiplier = 0x544;
    public const ulong m_flFogMaxDensityMultiplier = 0x548;
    public const ulong m_flFadeTime = 0x54c;
    public const ulong m_bStartDisabled = 0x550;
    public const ulong m_bIsEnabled = 0x551;
}

public static class C_PointCamera {
    public const ulong m_FOV = 0x540;
    public const ulong m_Resolution = 0x544;
    public const ulong m_bFogEnable = 0x548;
    public const ulong m_FogColor = 0x549;
    public const ulong m_flFogStart = 0x550;
    public const ulong m_flFogEnd = 0x554;
    public const ulong m_flFogMaxDensity = 0x558;
    public const ulong m_bActive = 0x55c;
    public const ulong m_bUseScreenAspectRatio = 0x55d;
    public const ulong m_flAspectRatio = 0x560;
    public const ulong m_bNoSky = 0x564;
    public const ulong m_fBrightness = 0x568;
    public const ulong m_flZFar = 0x56c;
    public const ulong m_flZNear = 0x570;
    public const ulong m_bCanHLTVUse = 0x574;
    public const ulong m_bDofEnabled = 0x575;
    public const ulong m_flDofNearBlurry = 0x578;
    public const ulong m_flDofNearCrisp = 0x57c;
    public const ulong m_flDofFarCrisp = 0x580;
    public const ulong m_flDofFarBlurry = 0x584;
    public const ulong m_flDofTiltToGround = 0x588;
    public const ulong m_TargetFOV = 0x58c;
    public const ulong m_DegreesPerSecond = 0x590;
    public const ulong m_bIsOn = 0x594;
    public const ulong m_pNext = 0x598;
}

public static class C_PointCameraVFOV {
    public const ulong m_flVerticalFOV = 0x5a0;
}

public static class C_PointClientUIDialog {
    public const ulong m_hActivator = 0xcf0;
    public const ulong m_bStartEnabled = 0xcf4;
}

public static class C_PointClientUIHUD {
    public const ulong m_bCheckCSSClasses = 0xcf8;
    public const ulong m_bIgnoreInput = 0xe80;
    public const ulong m_flWidth = 0xe84;
    public const ulong m_flHeight = 0xe88;
    public const ulong m_flDPI = 0xe8c;
    public const ulong m_flInteractDistance = 0xe90;
    public const ulong m_flDepthOffset = 0xe94;
    public const ulong m_unOwnerContext = 0xe98;
    public const ulong m_unHorizontalAlign = 0xe9c;
    public const ulong m_unVerticalAlign = 0xea0;
    public const ulong m_unOrientation = 0xea4;
    public const ulong m_bAllowInteractionFromAllSceneWorlds = 0xea8;
    public const ulong m_vecCSSClasses = 0xeb0;
}

public static class C_PointClientUIWorldPanel {
    public const ulong m_bForceRecreateNextUpdate = 0xcf8;
    public const ulong m_bMoveViewToPlayerNextThink = 0xcf9;
    public const ulong m_bCheckCSSClasses = 0xcfa;
    public const ulong m_anchorDeltaTransform = 0xd00;
    public const ulong m_pOffScreenIndicator = 0xea0;
    public const ulong m_bIgnoreInput = 0xec8;
    public const ulong m_bLit = 0xec9;
    public const ulong m_bFollowPlayerAcrossTeleport = 0xeca;
    public const ulong m_flWidth = 0xecc;
    public const ulong m_flHeight = 0xed0;
    public const ulong m_flDPI = 0xed4;
    public const ulong m_flInteractDistance = 0xed8;
    public const ulong m_flDepthOffset = 0xedc;
    public const ulong m_unOwnerContext = 0xee0;
    public const ulong m_unHorizontalAlign = 0xee4;
    public const ulong m_unVerticalAlign = 0xee8;
    public const ulong m_unOrientation = 0xeec;
    public const ulong m_bAllowInteractionFromAllSceneWorlds = 0xef0;
    public const ulong m_vecCSSClasses = 0xef8;
    public const ulong m_bOpaque = 0xf10;
    public const ulong m_bNoDepth = 0xf11;
    public const ulong m_bRenderBackface = 0xf12;
    public const ulong m_bUseOffScreenIndicator = 0xf13;
    public const ulong m_bExcludeFromSaveGames = 0xf14;
    public const ulong m_bGrabbable = 0xf15;
    public const ulong m_bOnlyRenderToTexture = 0xf16;
    public const ulong m_bDisableMipGen = 0xf17;
    public const ulong m_nExplicitImageLayout = 0xf18;
}

public static class C_PointClientUIWorldTextPanel {
    public const ulong m_messageText = 0xf20;
}

public static class C_PointCommentaryNode {
    public const ulong m_bActive = 0xe78;
    public const ulong m_bWasActive = 0xe79;
    public const ulong m_flEndTime = 0xe7c;
    public const ulong m_flStartTime = 0xe80;
    public const ulong m_flStartTimeInCommentary = 0xe84;
    public const ulong m_iszCommentaryFile = 0xe88;
    public const ulong m_iszTitle = 0xe90;
    public const ulong m_iszSpeakers = 0xe98;
    public const ulong m_iNodeNumber = 0xea0;
    public const ulong m_iNodeNumberMax = 0xea4;
    public const ulong m_bListenedTo = 0xea8;
    public const ulong m_hViewPosition = 0xeb8;
    public const ulong m_bRestartAfterRestore = 0xebc;
}

public static class C_PointValueRemapper {
    public const ulong m_bDisabled = 0x540;
    public const ulong m_bDisabledOld = 0x541;
    public const ulong m_bUpdateOnClient = 0x542;
    public const ulong m_nInputType = 0x544;
    public const ulong m_hRemapLineStart = 0x548;
    public const ulong m_hRemapLineEnd = 0x54c;
    public const ulong m_flMaximumChangePerSecond = 0x550;
    public const ulong m_flDisengageDistance = 0x554;
    public const ulong m_flEngageDistance = 0x558;
    public const ulong m_bRequiresUseKey = 0x55c;
    public const ulong m_nOutputType = 0x560;
    public const ulong m_hOutputEntities = 0x568;
    public const ulong m_nHapticsType = 0x580;
    public const ulong m_nMomentumType = 0x584;
    public const ulong m_flMomentumModifier = 0x588;
    public const ulong m_flSnapValue = 0x58c;
    public const ulong m_flCurrentMomentum = 0x590;
    public const ulong m_nRatchetType = 0x594;
    public const ulong m_flRatchetOffset = 0x598;
    public const ulong m_flInputOffset = 0x59c;
    public const ulong m_bEngaged = 0x5a0;
    public const ulong m_bFirstUpdate = 0x5a1;
    public const ulong m_flPreviousValue = 0x5a4;
    public const ulong m_flPreviousUpdateTickTime = 0x5a8;
    public const ulong m_vecPreviousTestPoint = 0x5ac;
}

public static class C_PointWorldText {
    public const ulong m_bForceRecreateNextUpdate = 0xcc8;
    public const ulong m_messageText = 0xcd8;
    public const ulong m_FontName = 0xed8;
    public const ulong m_bEnabled = 0xf18;
    public const ulong m_bFullbright = 0xf19;
    public const ulong m_flWorldUnitsPerPx = 0xf1c;
    public const ulong m_flFontSize = 0xf20;
    public const ulong m_flDepthOffset = 0xf24;
    public const ulong m_Color = 0xf28;
    public const ulong m_nJustifyHorizontal = 0xf2c;
    public const ulong m_nJustifyVertical = 0xf30;
    public const ulong m_nReorientMode = 0xf34;
}

public static class C_PostProcessingVolume {
    public const ulong m_hPostSettings = 0xcd8;
    public const ulong m_flFadeDuration = 0xce0;
    public const ulong m_flMinLogExposure = 0xce4;
    public const ulong m_flMaxLogExposure = 0xce8;
    public const ulong m_flMinExposure = 0xcec;
    public const ulong m_flMaxExposure = 0xcf0;
    public const ulong m_flExposureCompensation = 0xcf4;
    public const ulong m_flExposureFadeSpeedUp = 0xcf8;
    public const ulong m_flExposureFadeSpeedDown = 0xcfc;
    public const ulong m_flTonemapEVSmoothingRange = 0xd00;
    public const ulong m_bMaster = 0xd04;
    public const ulong m_bExposureControl = 0xd05;
    public const ulong m_flRate = 0xd08;
    public const ulong m_flTonemapPercentTarget = 0xd0c;
    public const ulong m_flTonemapPercentBrightPixels = 0xd10;
    public const ulong m_flTonemapMinAvgLum = 0xd14;
}

public static class C_Precipitation {
    public const ulong m_flDensity = 0xcc8;
    public const ulong m_flParticleInnerDist = 0xcd8;
    public const ulong m_pParticleDef = 0xce0;
    public const ulong m_tParticlePrecipTraceTimer = 0xd08;
    public const ulong m_bActiveParticlePrecipEmitter = 0xd10;
    public const ulong m_bParticlePrecipInitialized = 0xd11;
    public const ulong m_bHasSimulatedSinceLastSceneObjectUpdate = 0xd12;
    public const ulong m_nAvailableSheetSequencesMaxIndex = 0xd14;
}

public static class C_PredictedViewModel {
    public const ulong m_LagAnglesHistory = 0xed8;
    public const ulong m_vPredictedOffset = 0xef0;
}

public static class C_PropCounter {
    public const ulong m_flDisplayValue = 0xe70;
    public const ulong m_flDisplayValueLocal = 0xe74;
    public const ulong m_flTimeOfLastValueChange = 0xe78;
    public const ulong m_flPreviousValue = 0xe7c;
}

public static class C_RagdollManager {
    public const ulong m_iCurrentMaxRagdollCount = 0x540;
}

public static class C_RagdollProp {
    public const ulong m_ragPos = 0xe78;
    public const ulong m_ragAngles = 0xe90;
    public const ulong m_flBlendWeight = 0xea8;
    public const ulong m_hRagdollSource = 0xeac;
    public const ulong m_iEyeAttachment = 0xeb0;
    public const ulong m_flBlendWeightCurrent = 0xeb4;
    public const ulong m_parentPhysicsBoneIndices = 0xeb8;
    public const ulong m_worldSpaceBoneComputationOrder = 0xed0;
}

public static class C_RagdollPropAttached {
    public const ulong m_boneIndexAttached = 0xee8;
    public const ulong m_ragdollAttachedObjectIndex = 0xeec;
    public const ulong m_attachmentPointBoneSpace = 0xef0;
    public const ulong m_attachmentPointRagdollSpace = 0xefc;
    public const ulong m_vecOffset = 0xf08;
    public const ulong m_parentTime = 0xf14;
    public const ulong m_bHasParent = 0xf18;
}

public static class C_RectLight {
    public const ulong m_bShowLight = 0xf08;
}

public static class C_RetakeGameRules {
    public const ulong m_nMatchSeed = 0xf8;
    public const ulong m_bBlockersPresent = 0xfc;
    public const ulong m_bRoundInProgress = 0xfd;
    public const ulong m_iFirstSecondHalfRound = 0x100;
    public const ulong m_iBombSite = 0x104;
}

public static class C_RopeKeyframe {
    public const ulong m_LinksTouchingSomething = 0xcc8;
    public const ulong m_nLinksTouchingSomething = 0xccc;
    public const ulong m_bApplyWind = 0xcd0;
    public const ulong m_fPrevLockedPoints = 0xcd4;
    public const ulong m_iForcePointMoveCounter = 0xcd8;
    public const ulong m_bPrevEndPointPos = 0xcdc;
    public const ulong m_vPrevEndPointPos = 0xce0;
    public const ulong m_flCurScroll = 0xcf8;
    public const ulong m_flScrollSpeed = 0xcfc;
    public const ulong m_RopeFlags = 0xd00;
    public const ulong m_iRopeMaterialModelIndex = 0xd08;
    public const ulong m_LightValues = 0xf80;
    public const ulong m_nSegments = 0xff8;
    public const ulong m_hStartPoint = 0xffc;
    public const ulong m_hEndPoint = 0x1000;
    public const ulong m_iStartAttachment = 0x1004;
    public const ulong m_iEndAttachment = 0x1005;
    public const ulong m_Subdiv = 0x1006;
    public const ulong m_RopeLength = 0x1008;
    public const ulong m_Slack = 0x100a;
    public const ulong m_TextureScale = 0x100c;
    public const ulong m_fLockedPoints = 0x1010;
    public const ulong m_nChangeCount = 0x1011;
    public const ulong m_Width = 0x1014;
    public const ulong m_PhysicsDelegate = 0x1018;
    public const ulong m_hMaterial = 0x1028;
    public const ulong m_TextureHeight = 0x1030;
    public const ulong m_vecImpulse = 0x1034;
    public const ulong m_vecPreviousImpulse = 0x1040;
    public const ulong m_flCurrentGustTimer = 0x104c;
    public const ulong m_flCurrentGustLifetime = 0x1050;
    public const ulong m_flTimeToNextGust = 0x1054;
    public const ulong m_vWindDir = 0x1058;
    public const ulong m_vColorMod = 0x1064;
    public const ulong m_vCachedEndPointAttachmentPos = 0x1070;
    public const ulong m_vCachedEndPointAttachmentAngle = 0x1088;
    public const ulong m_bConstrainBetweenEndpoints = 0x10a0;
    public const ulong m_bEndPointAttachmentPositionsDirty = 0x0;
    public const ulong m_bEndPointAttachmentAnglesDirty = 0x0;
    public const ulong m_bNewDataThisFrame = 0x0;
    public const ulong m_bPhysicsInitted = 0x0;
}

public static class C_RopeKeyframe_CPhysicsDelegate {
    public const ulong m_pKeyframe = 0x8;
}

public static class C_SceneEntity {
    public const ulong m_bIsPlayingBack = 0x548;
    public const ulong m_bPaused = 0x549;
    public const ulong m_bMultiplayer = 0x54a;
    public const ulong m_bAutogenerated = 0x54b;
    public const ulong m_flForceClientTime = 0x54c;
    public const ulong m_nSceneStringIndex = 0x550;
    public const ulong m_bClientOnly = 0x552;
    public const ulong m_hOwner = 0x554;
    public const ulong m_hActorList = 0x558;
    public const ulong m_bWasPlaying = 0x570;
    public const ulong m_QueuedEvents = 0x580;
    public const ulong m_flCurrentTime = 0x598;
}

public static class C_SceneEntity_QueuedEvents_t {
    public const ulong starttime = 0x0;
}

public static class C_ShatterGlassShardPhysics {
    public const ulong m_ShardDesc = 0xfd0;
}

public static class C_SkyCamera {
    public const ulong m_skyboxData = 0x540;
    public const ulong m_skyboxSlotToken = 0x5d0;
    public const ulong m_bUseAngles = 0x5d4;
    public const ulong m_pNext = 0x5d8;
}

public static class C_SmokeGrenadeProjectile {
    public const ulong m_nSmokeEffectTickBegin = 0x10e8;
    public const ulong m_bDidSmokeEffect = 0x10ec;
    public const ulong m_nRandomSeed = 0x10f0;
    public const ulong m_vSmokeColor = 0x10f4;
    public const ulong m_vSmokeDetonationPos = 0x1100;
    public const ulong m_VoxelFrameData = 0x1110;
    public const ulong m_bSmokeVolumeDataReceived = 0x1128;
    public const ulong m_bSmokeEffectSpawned = 0x1129;
}

public static class C_SoundAreaEntityBase {
    public const ulong m_bDisabled = 0x540;
    public const ulong m_bWasEnabled = 0x548;
    public const ulong m_iszSoundAreaType = 0x550;
    public const ulong m_vPos = 0x558;
}

public static class C_SoundAreaEntityOrientedBox {
    public const ulong m_vMin = 0x568;
    public const ulong m_vMax = 0x574;
}

public static class C_SoundAreaEntitySphere {
    public const ulong m_flRadius = 0x568;
}

public static class C_SoundOpvarSetPointBase {
    public const ulong m_iszStackName = 0x540;
    public const ulong m_iszOperatorName = 0x548;
    public const ulong m_iszOpvarName = 0x550;
    public const ulong m_iOpvarIndex = 0x558;
    public const ulong m_bUseAutoCompare = 0x55c;
}

public static class C_SpotlightEnd {
    public const ulong m_flLightScale = 0xcc0;
    public const ulong m_Radius = 0xcc4;
}

public static class C_Sprite {
    public const ulong m_hSpriteMaterial = 0xcd8;
    public const ulong m_hAttachedToEntity = 0xce0;
    public const ulong m_nAttachment = 0xce4;
    public const ulong m_flSpriteFramerate = 0xce8;
    public const ulong m_flFrame = 0xcec;
    public const ulong m_flDieTime = 0xcf0;
    public const ulong m_nBrightness = 0xd00;
    public const ulong m_flBrightnessDuration = 0xd04;
    public const ulong m_flSpriteScale = 0xd08;
    public const ulong m_flScaleDuration = 0xd0c;
    public const ulong m_bWorldSpaceScale = 0xd10;
    public const ulong m_flGlowProxySize = 0xd14;
    public const ulong m_flHDRColorScale = 0xd18;
    public const ulong m_flLastTime = 0xd1c;
    public const ulong m_flMaxFrame = 0xd20;
    public const ulong m_flStartScale = 0xd24;
    public const ulong m_flDestScale = 0xd28;
    public const ulong m_flScaleTimeStart = 0xd2c;
    public const ulong m_nStartBrightness = 0xd30;
    public const ulong m_nDestBrightness = 0xd34;
    public const ulong m_flBrightnessTimeStart = 0xd38;
    public const ulong m_hOldSpriteMaterial = 0xd40;
    public const ulong m_nSpriteWidth = 0xde8;
    public const ulong m_nSpriteHeight = 0xdec;
}

public static class C_Sun {
    public const ulong m_fxSSSunFlareEffectIndex = 0xcc0;
    public const ulong m_fxSunFlareEffectIndex = 0xcc4;
    public const ulong m_fdistNormalize = 0xcc8;
    public const ulong m_vSunPos = 0xccc;
    public const ulong m_vDirection = 0xcd8;
    public const ulong m_iszEffectName = 0xce8;
    public const ulong m_iszSSEffectName = 0xcf0;
    public const ulong m_clrOverlay = 0xcf8;
    public const ulong m_bOn = 0xcfc;
    public const ulong m_bmaxColor = 0xcfd;
    public const ulong m_flSize = 0xd00;
    public const ulong m_flHazeScale = 0xd04;
    public const ulong m_flRotation = 0xd08;
    public const ulong m_flHDRColorScale = 0xd0c;
    public const ulong m_flAlphaHaze = 0xd10;
    public const ulong m_flAlphaScale = 0xd14;
    public const ulong m_flAlphaHdr = 0xd18;
    public const ulong m_flFarZScale = 0xd1c;
}

public static class C_SunGlowOverlay {
    public const ulong m_bModulateByDot = 0xd0;
}

public static class C_SurvivalGameRules {
    public const ulong m_vecPlayAreaMins = 0x8;
    public const ulong m_vecPlayAreaMaxs = 0x14;
    public const ulong m_iPlayerSpawnHexIndices = 0x20;
    public const ulong m_SpawnTileState = 0x120;
    public const ulong m_flSpawnSelectionTimeStartCurrentStage = 0x200;
    public const ulong m_flSpawnSelectionTimeEndCurrentStage = 0x204;
    public const ulong m_flSpawnSelectionTimeEndLastStage = 0x208;
    public const ulong m_spawnStage = 0x20c;
    public const ulong m_flTabletHexOriginX = 0x210;
    public const ulong m_flTabletHexOriginY = 0x214;
    public const ulong m_flTabletHexSize = 0x218;
    public const ulong m_roundData_playerXuids = 0x220;
    public const ulong m_roundData_playerPositions = 0x420;
    public const ulong m_roundData_playerTeams = 0x520;
    public const ulong m_SurvivalGameRuleDecisionTypes = 0x620;
    public const ulong m_SurvivalGameRuleDecisionValues = 0x660;
    public const ulong m_flSurvivalStartTime = 0x6a0;
    public const ulong m_flLastThinkTime = 0x6a4;
}

public static class C_Tablet {
    public const ulong m_flUpgradeExpirationTime = 0x18d8;
    public const ulong m_vecLocalHexFlags = 0x18e8;
    public const ulong m_nContractKillGridIndex = 0x1990;
    public const ulong m_nContractKillGridHighResIndex = 0x1994;
    public const ulong m_bTabletReceptionIsBlocked = 0x1998;
    public const ulong m_flScanProgress = 0x199c;
    public const ulong m_flBootTime = 0x19a0;
    public const ulong m_flShowMapTime = 0x19a4;
    public const ulong m_vecNearestMetalCratePos = 0x19a8;
    public const ulong m_skinState = 0x19b4;
    public const ulong m_vecNotificationIds = 0x19b8;
    public const ulong m_vecNotificationTimestamps = 0x19d8;
    public const ulong m_nLastPurchaseIndex = 0x19f8;
    public const ulong m_vecPlayerPositionHistory = 0x19fc;
    public const ulong m_vecLocalHexFlagsClientCopy = 0x1b1c;
    public const ulong m_vecLastHexPlayerOccupancyChange = 0x1bc4;
    public const ulong m_radarMaterial = 0x1fe8;
    public const ulong m_buildingMaterial = 0x1ff0;
    public const ulong m_hZoneOverlayMaterial = 0x1ff8;
    public const ulong m_flNoiseFadeAlpha = 0x2000;
    public const ulong m_WorkingColor = 0x2004;
    public const ulong m_vecLastCameraPos = 0x2008;
    public const ulong m_angLastCameraAng = 0x2014;
    public const ulong m_nDrawElementCount = 0x2020;
    public const ulong m_flPrevScanProgress = 0x2024;
    public const ulong m_nRenderTargetRes = 0x2028;
    public const ulong m_flLastClosePoseParamVal = 0x202c;
}

public static class C_Team {
    public const ulong m_aPlayerControllers = 0x540;
    public const ulong m_aPlayers = 0x558;
    public const ulong m_iScore = 0x570;
    public const ulong m_szTeamname = 0x574;
}

public static class C_TeamRoundTimer {
    public const ulong m_bTimerPaused = 0x540;
    public const ulong m_flTimeRemaining = 0x544;
    public const ulong m_flTimerEndTime = 0x548;
    public const ulong m_bIsDisabled = 0x54c;
    public const ulong m_bShowInHUD = 0x54d;
    public const ulong m_nTimerLength = 0x550;
    public const ulong m_nTimerInitialLength = 0x554;
    public const ulong m_nTimerMaxLength = 0x558;
    public const ulong m_bAutoCountdown = 0x55c;
    public const ulong m_nSetupTimeLength = 0x560;
    public const ulong m_nState = 0x564;
    public const ulong m_bStartPaused = 0x568;
    public const ulong m_bInCaptureWatchState = 0x569;
    public const ulong m_flTotalTime = 0x56c;
    public const ulong m_bStopWatchTimer = 0x570;
    public const ulong m_bFireFinished = 0x571;
    public const ulong m_bFire5MinRemain = 0x572;
    public const ulong m_bFire4MinRemain = 0x573;
    public const ulong m_bFire3MinRemain = 0x574;
    public const ulong m_bFire2MinRemain = 0x575;
    public const ulong m_bFire1MinRemain = 0x576;
    public const ulong m_bFire30SecRemain = 0x577;
    public const ulong m_bFire10SecRemain = 0x578;
    public const ulong m_bFire5SecRemain = 0x579;
    public const ulong m_bFire4SecRemain = 0x57a;
    public const ulong m_bFire3SecRemain = 0x57b;
    public const ulong m_bFire2SecRemain = 0x57c;
    public const ulong m_bFire1SecRemain = 0x57d;
    public const ulong m_nOldTimerLength = 0x580;
    public const ulong m_nOldTimerState = 0x584;
}

public static class C_TextureBasedAnimatable {
    public const ulong m_bLoop = 0xcc0;
    public const ulong m_flFPS = 0xcc4;
    public const ulong m_hPositionKeys = 0xcc8;
    public const ulong m_hRotationKeys = 0xcd0;
    public const ulong m_vAnimationBoundsMin = 0xcd8;
    public const ulong m_vAnimationBoundsMax = 0xce4;
    public const ulong m_flStartTime = 0xcf0;
    public const ulong m_flStartFrame = 0xcf4;
}

public static class C_TonemapController2 {
    public const ulong m_flAutoExposureMin = 0x540;
    public const ulong m_flAutoExposureMax = 0x544;
    public const ulong m_flTonemapPercentTarget = 0x548;
    public const ulong m_flTonemapPercentBrightPixels = 0x54c;
    public const ulong m_flTonemapMinAvgLum = 0x550;
    public const ulong m_flExposureAdaptationSpeedUp = 0x554;
    public const ulong m_flExposureAdaptationSpeedDown = 0x558;
    public const ulong m_flTonemapEVSmoothingRange = 0x55c;
}

public static class C_TriggerBuoyancy {
    public const ulong m_BuoyancyHelper = 0xcc8;
    public const ulong m_flFluidDensity = 0xce8;
}

public static class C_TripWireFireProjectile {
    public const ulong m_flAttachTime = 0x1058;
    public const ulong m_vecTripWireEndPositions = 0x105c;
    public const ulong m_bTripWireEndPositionsUsed = 0x10d4;
    public const ulong m_nTripWireStartIndex0 = 0x10e0;
    public const ulong m_nTripWireEndIndex0 = 0x10e4;
    public const ulong m_nTripWireCenterIndex0 = 0x10e8;
}

public static class C_ViewmodelWeapon {
    public const ulong m_worldModel = 0xe70;
}

public static class C_VoteController {
    public const ulong m_iActiveIssueIndex = 0x550;
    public const ulong m_iOnlyTeamToVote = 0x554;
    public const ulong m_nVoteOptionCount = 0x558;
    public const ulong m_nPotentialVotes = 0x56c;
    public const ulong m_bVotesDirty = 0x570;
    public const ulong m_bTypeDirty = 0x571;
    public const ulong m_bIsYesNoVote = 0x572;
}

public static class C_WeaponBaseItem {
    public const ulong m_SequenceCompleteTimer = 0x18d0;
    public const ulong m_bRedraw = 0x18e8;
}

public static class C_WeaponCSBase {
    public const ulong m_flFireSequenceStartTime = 0x15c0;
    public const ulong m_nFireSequenceStartTimeChange = 0x15c4;
    public const ulong m_nFireSequenceStartTimeAck = 0x15c8;
    public const ulong m_bPlayerFireEventIsPrimary = 0x15cc;
    public const ulong m_seqIdle = 0x15d0;
    public const ulong m_seqFirePrimary = 0x15d4;
    public const ulong m_seqFireSecondary = 0x15d8;
    public const ulong m_iState = 0x15f0;
    public const ulong m_flCrosshairDistance = 0x15f4;
    public const ulong m_iAmmoLastCheck = 0x15f8;
    public const ulong m_iAlpha = 0x15fc;
    public const ulong m_iScopeTextureID = 0x1600;
    public const ulong m_iCrosshairTextureID = 0x1604;
    public const ulong m_flGunAccuracyPosition = 0x1608;
    public const ulong m_nViewModelIndex = 0x160c;
    public const ulong m_bReloadsWithClips = 0x1610;
    public const ulong m_flTimeWeaponIdle = 0x1614;
    public const ulong m_bFireOnEmpty = 0x1618;
    public const ulong m_OnPlayerPickup = 0x1620;
    public const ulong m_weaponMode = 0x1648;
    public const ulong m_flTurningInaccuracyDelta = 0x164c;
    public const ulong m_vecTurningInaccuracyEyeDirLast = 0x1650;
    public const ulong m_flTurningInaccuracy = 0x165c;
    public const ulong m_fAccuracyPenalty = 0x1660;
    public const ulong m_flLastAccuracyUpdateTime = 0x1664;
    public const ulong m_fAccuracySmoothedForZoom = 0x1668;
    public const ulong m_fScopeZoomEndTime = 0x166c;
    public const ulong m_iRecoilIndex = 0x1670;
    public const ulong m_flRecoilIndex = 0x1674;
    public const ulong m_bBurstMode = 0x1678;
    public const ulong m_flPostponeFireReadyTime = 0x167c;
    public const ulong m_bInReload = 0x1680;
    public const ulong m_bReloadVisuallyComplete = 0x1681;
    public const ulong m_flDroppedAtTime = 0x1684;
    public const ulong m_bIsHauledBack = 0x1688;
    public const ulong m_bSilencerOn = 0x1689;
    public const ulong m_flTimeSilencerSwitchComplete = 0x168c;
    public const ulong m_iOriginalTeamNumber = 0x1690;
    public const ulong m_flNextAttackRenderTimeOffset = 0x1694;
    public const ulong m_bVisualsDataSet = 0x1710;
    public const ulong m_bOldFirstPersonSpectatedState = 0x1711;
    public const ulong m_hOurPing = 0x1714;
    public const ulong m_nOurPingIndex = 0x1718;
    public const ulong m_vecOurPingPos = 0x171c;
    public const ulong m_bGlowForPing = 0x1728;
    public const ulong m_bUIWeapon = 0x1729;
    public const ulong m_hPrevOwner = 0x1738;
    public const ulong m_nDropTick = 0x173c;
    public const ulong m_donated = 0x175c;
    public const ulong m_fLastShotTime = 0x1760;
    public const ulong m_bWasOwnedByCT = 0x1764;
    public const ulong m_bWasOwnedByTerrorist = 0x1765;
    public const ulong m_gunHeat = 0x1768;
    public const ulong m_smokeAttachments = 0x176c;
    public const ulong m_lastSmokeTime = 0x1770;
    public const ulong m_flLastClientFireBulletTime = 0x1774;
    public const ulong m_IronSightController = 0x17d0;
    public const ulong m_iIronSightMode = 0x1880;
    public const ulong m_flLastLOSTraceFailureTime = 0x1890;
    public const ulong m_iNumEmptyAttacks = 0x1894;
}

public static class C_WeaponCSBaseGun {
    public const ulong m_zoomLevel = 0x18d0;
    public const ulong m_iBurstShotsRemaining = 0x18d4;
    public const ulong m_iSilencerBodygroup = 0x18d8;
    public const ulong m_silencedModelIndex = 0x18e8;
    public const ulong m_inPrecache = 0x18ec;
    public const ulong m_bNeedsBoltAction = 0x18ed;
}

public static class C_WeaponShield {
    public const ulong m_flDisplayHealth = 0x18f0;
}

public static class C_WeaponTaser {
    public const ulong m_fFireTime = 0x18f0;
}

public static class C_WeaponZoneRepulsor {
    public const ulong m_flPitchLocal = 0x18f0;
    public const ulong m_flLastTimeNotIdle = 0x18f4;
}

public static class C_fogplayerparams_t {
    public const ulong m_hCtrl = 0x8;
    public const ulong m_flTransitionTime = 0xc;
    public const ulong m_OldColor = 0x10;
    public const ulong m_flOldStart = 0x14;
    public const ulong m_flOldEnd = 0x18;
    public const ulong m_flOldMaxDensity = 0x1c;
    public const ulong m_flOldHDRColorScale = 0x20;
    public const ulong m_flOldFarZ = 0x24;
    public const ulong m_NewColor = 0x28;
    public const ulong m_flNewStart = 0x2c;
    public const ulong m_flNewEnd = 0x30;
    public const ulong m_flNewMaxDensity = 0x34;
    public const ulong m_flNewHDRColorScale = 0x38;
    public const ulong m_flNewFarZ = 0x3c;
}

public static class CompMatMutatorCondition_t {
    public const ulong m_nMutatorCondition = 0x0;
    public const ulong m_strMutatorConditionContainerName = 0x8;
    public const ulong m_strMutatorConditionContainerVarName = 0x10;
    public const ulong m_strMutatorConditionContainerVarValue = 0x18;
    public const ulong m_bPassWhenTrue = 0x20;
}

public static class CompMatPropertyMutator_t {
    public const ulong m_bEnabled = 0x0;
    public const ulong m_nMutatorCommandType = 0x4;
    public const ulong m_strInitWith_Container = 0x8;
    public const ulong m_strCopyProperty_InputContainerSrc = 0x10;
    public const ulong m_strCopyProperty_InputContainerProperty = 0x18;
    public const ulong m_strCopyProperty_TargetProperty = 0x20;
    public const ulong m_strRandomRollInputVars_SeedInputVar = 0x28;
    public const ulong m_vecRandomRollInputVars_InputVarsToRoll = 0x30;
    public const ulong m_strCopyMatchingKeys_InputContainerSrc = 0x48;
    public const ulong m_strCopyKeysWithSuffix_InputContainerSrc = 0x50;
    public const ulong m_strCopyKeysWithSuffix_FindSuffix = 0x58;
    public const ulong m_strCopyKeysWithSuffix_ReplaceSuffix = 0x60;
    public const ulong m_nSetValue_Value = 0x68;
    public const ulong m_strGenerateTexture_TargetParam = 0x2d8;
    public const ulong m_strGenerateTexture_InitialContainer = 0x2e0;
    public const ulong m_nResolution = 0x2e8;
    public const ulong m_bIsScratchTarget = 0x2ec;
    public const ulong m_bSplatDebugInfo = 0x2ed;
    public const ulong m_bCaptureInRenderDoc = 0x2ee;
    public const ulong m_vecTexGenInstructions = 0x2f0;
    public const ulong m_vecConditionalMutators = 0x308;
    public const ulong m_strPopInputQueue_Container = 0x320;
    public const ulong m_strDrawText_InputContainerSrc = 0x328;
    public const ulong m_strDrawText_InputContainerProperty = 0x330;
    public const ulong m_vecDrawText_Position = 0x338;
    public const ulong m_colDrawText_Color = 0x340;
    public const ulong m_strDrawText_Font = 0x348;
    public const ulong m_vecConditions = 0x350;
}

public static class CompositeMaterialAssemblyProcedure_t {
    public const ulong m_vecCompMatIncludes = 0x0;
    public const ulong m_vecMatchFilters = 0x18;
    public const ulong m_vecCompositeInputContainers = 0x30;
    public const ulong m_vecPropertyMutators = 0x48;
}

public static class CompositeMaterialEditorPoint_t {
    public const ulong m_ModelName = 0x0;
    public const ulong m_nSequenceIndex = 0xe0;
    public const ulong m_flCycle = 0xe4;
    public const ulong m_KVModelStateChoices = 0xe8;
    public const ulong m_bEnableChildModel = 0xf8;
    public const ulong m_ChildModelName = 0x100;
    public const ulong m_vecCompositeMaterialAssemblyProcedures = 0x1e0;
    public const ulong m_vecCompositeMaterials = 0x1f8;
}

public static class CompositeMaterialInputContainer_t {
    public const ulong m_bEnabled = 0x0;
    public const ulong m_nCompositeMaterialInputContainerSourceType = 0x4;
    public const ulong m_strSpecificContainerMaterial = 0x8;
    public const ulong m_strAttrName = 0xe8;
    public const ulong m_strAlias = 0xf0;
    public const ulong m_vecLooseVariables = 0xf8;
    public const ulong m_strAttrNameForVar = 0x110;
    public const ulong m_bExposeExternally = 0x118;
}

public static class CompositeMaterialInputLooseVariable_t {
    public const ulong m_strName = 0x0;
    public const ulong m_bExposeExternally = 0x8;
    public const ulong m_strExposedFriendlyName = 0x10;
    public const ulong m_strExposedFriendlyGroupName = 0x18;
    public const ulong m_bExposedVariableIsFixedRange = 0x20;
    public const ulong m_strExposedVisibleWhenTrue = 0x28;
    public const ulong m_strExposedHiddenWhenTrue = 0x30;
    public const ulong m_nVariableType = 0x38;
    public const ulong m_bValueBoolean = 0x3c;
    public const ulong m_nValueIntX = 0x40;
    public const ulong m_nValueIntY = 0x44;
    public const ulong m_nValueIntZ = 0x48;
    public const ulong m_nValueIntW = 0x4c;
    public const ulong m_bHasFloatBounds = 0x50;
    public const ulong m_flValueFloatX = 0x54;
    public const ulong m_flValueFloatX_Min = 0x58;
    public const ulong m_flValueFloatX_Max = 0x5c;
    public const ulong m_flValueFloatY = 0x60;
    public const ulong m_flValueFloatY_Min = 0x64;
    public const ulong m_flValueFloatY_Max = 0x68;
    public const ulong m_flValueFloatZ = 0x6c;
    public const ulong m_flValueFloatZ_Min = 0x70;
    public const ulong m_flValueFloatZ_Max = 0x74;
    public const ulong m_flValueFloatW = 0x78;
    public const ulong m_flValueFloatW_Min = 0x7c;
    public const ulong m_flValueFloatW_Max = 0x80;
    public const ulong m_cValueColor4 = 0x84;
    public const ulong m_nValueSystemVar = 0x88;
    public const ulong m_strResourceMaterial = 0x90;
    public const ulong m_strTextureContentAssetPath = 0x170;
    public const ulong m_strTextureRuntimeResourcePath = 0x178;
    public const ulong m_strTextureCompilationVtexTemplate = 0x258;
    public const ulong m_nTextureType = 0x260;
    public const ulong m_strString = 0x268;
}

public static class CompositeMaterialMatchFilter_t {
    public const ulong m_nCompositeMaterialMatchFilterType = 0x0;
    public const ulong m_strMatchFilter = 0x8;
    public const ulong m_strMatchValue = 0x10;
    public const ulong m_bPassWhenTrue = 0x18;
}

public static class CompositeMaterial_t {
    public const ulong m_TargetKVs = 0x8;
    public const ulong m_PreGenerationKVs = 0x18;
    public const ulong m_FinalKVs = 0x28;
    public const ulong m_vecGeneratedTextures = 0x40;
}

public static class CountdownTimer {
    public const ulong m_duration = 0x8;
    public const ulong m_timestamp = 0xc;
    public const ulong m_timescale = 0x10;
    public const ulong m_nWorldGroupId = 0x14;
}

public static class EngineCountdownTimer {
    public const ulong m_duration = 0x8;
    public const ulong m_timestamp = 0xc;
    public const ulong m_timescale = 0x10;
}

public static class EntityRenderAttribute_t {
    public const ulong m_ID = 0x30;
    public const ulong m_Values = 0x34;
}

public static class EntitySpottedState_t {
    public const ulong m_bSpotted = 0x8;
    public const ulong m_bSpottedByMask = 0xc;
}

public static class GeneratedTextureHandle_t {
    public const ulong m_strBitmapName = 0x0;
}

public static class IntervalTimer {
    public const ulong m_timestamp = 0x8;
    public const ulong m_nWorldGroupId = 0xc;
}

public static class PhysicsRagdollPose_t {
    public const ulong __m_pChainEntity = 0x8;
    public const ulong m_Transforms = 0x30;
    public const ulong m_hOwner = 0x48;
    public const ulong m_bDirty = 0x68;
}

public static class SellbackPurchaseEntry_t {
    public const ulong m_unDefIdx = 0x30;
    public const ulong m_nCost = 0x34;
    public const ulong m_nPrevArmor = 0x38;
    public const ulong m_bPrevHelmet = 0x3c;
    public const ulong m_hItem = 0x40;
}

public static class TimedEvent {
    public const ulong m_TimeBetweenEvents = 0x0;
    public const ulong m_fNextEvent = 0x4;
}

public static class VPhysicsCollisionAttribute_t {
    public const ulong m_nInteractsAs = 0x8;
    public const ulong m_nInteractsWith = 0x10;
    public const ulong m_nInteractsExclude = 0x18;
    public const ulong m_nEntityId = 0x20;
    public const ulong m_nOwnerId = 0x24;
    public const ulong m_nHierarchyId = 0x28;
    public const ulong m_nCollisionGroup = 0x2a;
    public const ulong m_nCollisionFunctionMask = 0x2b;
}

public static class ViewAngleServerChange_t {
    public const ulong nType = 0x30;
    public const ulong qAngle = 0x34;
    public const ulong nIndex = 0x40;
}

public static class WeaponPurchaseCount_t {
    public const ulong m_nItemDefIndex = 0x30;
    public const ulong m_nCount = 0x32;
}

public static class WeaponPurchaseTracker_t {
    public const ulong m_weaponPurchases = 0x8;
}

public static class audioparams_t {
    public const ulong localSound = 0x8;
    public const ulong soundscapeIndex = 0x68;
    public const ulong localBits = 0x6c;
    public const ulong soundscapeEntityListIndex = 0x70;
    public const ulong soundEventHash = 0x74;
}

public static class fogparams_t {
    public const ulong dirPrimary = 0x8;
    public const ulong colorPrimary = 0x14;
    public const ulong colorSecondary = 0x18;
    public const ulong colorPrimaryLerpTo = 0x1c;
    public const ulong colorSecondaryLerpTo = 0x20;
    public const ulong start = 0x24;
    public const ulong end = 0x28;
    public const ulong farz = 0x2c;
    public const ulong maxdensity = 0x30;
    public const ulong exponent = 0x34;
    public const ulong HDRColorScale = 0x38;
    public const ulong skyboxFogFactor = 0x3c;
    public const ulong skyboxFogFactorLerpTo = 0x40;
    public const ulong startLerpTo = 0x44;
    public const ulong endLerpTo = 0x48;
    public const ulong maxdensityLerpTo = 0x4c;
    public const ulong lerptime = 0x50;
    public const ulong duration = 0x54;
    public const ulong blendtobackground = 0x58;
    public const ulong scattering = 0x5c;
    public const ulong locallightscale = 0x60;
    public const ulong enable = 0x64;
    public const ulong blend = 0x65;
    public const ulong m_bNoReflectionFog = 0x66;
    public const ulong m_bPadding = 0x67;
}

public static class shard_model_desc_t {
    public const ulong m_nModelID = 0x8;
    public const ulong m_hMaterial = 0x10;
    public const ulong m_solid = 0x18;
    public const ulong m_ShatterPanelMode = 0x19;
    public const ulong m_vecPanelSize = 0x1c;
    public const ulong m_vecStressPositionA = 0x24;
    public const ulong m_vecStressPositionB = 0x2c;
    public const ulong m_vecPanelVertices = 0x38;
    public const ulong m_flGlassHalfThickness = 0x50;
    public const ulong m_bHasParent = 0x54;
    public const ulong m_bParentFrozen = 0x55;
    public const ulong m_SurfacePropStringToken = 0x58;
    public const ulong m_LightGroup = 0x5c;
}

public static class sky3dparams_t {
    public const ulong scale = 0x8;
    public const ulong origin = 0xc;
    public const ulong bClip3DSkyBoxNearToWorldFar = 0x18;
    public const ulong flClip3DSkyBoxNearToWorldFarOffset = 0x1c;
    public const ulong fog = 0x20;
    public const ulong m_nWorldGroupID = 0x88;
}