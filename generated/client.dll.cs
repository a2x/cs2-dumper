public static class ActiveModelConfig_t {
    public const nint m_Handle = 0x28;
    public const nint m_Name = 0x30;
    public const nint m_AssociatedEntities = 0x38;
    public const nint m_AssociatedEntityNames = 0x50;
}

public static class CAnimGraphNetworkedVariables {
    public const nint m_PredNetBoolVariables = 0x8;
    public const nint m_PredNetByteVariables = 0x20;
    public const nint m_PredNetUInt16Variables = 0x38;
    public const nint m_PredNetIntVariables = 0x50;
    public const nint m_PredNetUInt32Variables = 0x68;
    public const nint m_PredNetUInt64Variables = 0x80;
    public const nint m_PredNetFloatVariables = 0x98;
    public const nint m_PredNetVectorVariables = 0xB0;
    public const nint m_PredNetQuaternionVariables = 0xC8;
    public const nint m_OwnerOnlyPredNetBoolVariables = 0xE0;
    public const nint m_OwnerOnlyPredNetByteVariables = 0xF8;
    public const nint m_OwnerOnlyPredNetUInt16Variables = 0x110;
    public const nint m_OwnerOnlyPredNetIntVariables = 0x128;
    public const nint m_OwnerOnlyPredNetUInt32Variables = 0x140;
    public const nint m_OwnerOnlyPredNetUInt64Variables = 0x158;
    public const nint m_OwnerOnlyPredNetFloatVariables = 0x170;
    public const nint m_OwnerOnlyPredNetVectorVariables = 0x188;
    public const nint m_OwnerOnlyPredNetQuaternionVariables = 0x1A0;
    public const nint m_nBoolVariablesCount = 0x1B8;
    public const nint m_nOwnerOnlyBoolVariablesCount = 0x1BC;
    public const nint m_nRandomSeedOffset = 0x1C0;
    public const nint m_flLastTeleportTime = 0x1C4;
}

public static class CAttributeList {
    public const nint m_Attributes = 0x8;
    public const nint m_pManager = 0x58;
}

public static class CAttributeManager {
    public const nint m_Providers = 0x8;
    public const nint m_iReapplyProvisionParity = 0x20;
    public const nint m_hOuter = 0x24;
    public const nint m_bPreventLoopback = 0x28;
    public const nint m_ProviderType = 0x2C;
    public const nint m_CachedResults = 0x30;
}

public static class CAttributeManager_cached_attribute_float_t {
    public const nint flIn = 0x0;
    public const nint iAttribHook = 0x8;
    public const nint flOut = 0x10;
}

public static class CBaseAnimGraph {
    public const nint m_bInitiallyPopulateInterpHistory = 0xCC0;
    public const nint m_bShouldAnimateDuringGameplayPause = 0xCC1;
    public const nint m_bSuppressAnimEventSounds = 0xCC3;
    public const nint m_bAnimGraphUpdateEnabled = 0xCD0;
    public const nint m_flMaxSlopeDistance = 0xCD4;
    public const nint m_vLastSlopeCheckPos = 0xCD8;
    public const nint m_vecForce = 0xCE8;
    public const nint m_nForceBone = 0xCF4;
    public const nint m_pClientsideRagdoll = 0xCF8;
    public const nint m_bBuiltRagdoll = 0xD00;
    public const nint m_pRagdollPose = 0xD18;
    public const nint m_bClientRagdoll = 0xD20;
    public const nint m_bHasAnimatedMaterialAttributes = 0xD21;
}

public static class CBaseAnimGraphController {
    public const nint m_baseLayer = 0x18;
    public const nint m_animGraphNetworkedVars = 0x40;
    public const nint m_bSequenceFinished = 0x1320;
    public const nint m_flLastEventCycle = 0x1324;
    public const nint m_flLastEventAnimTime = 0x1328;
    public const nint m_flPlaybackRate = 0x132C;
    public const nint m_flPrevAnimTime = 0x1334;
    public const nint m_bClientSideAnimation = 0x1338;
    public const nint m_bNetworkedAnimationInputsChanged = 0x1339;
    public const nint m_nPrevNewSequenceParity = 0x133A;
    public const nint m_nPrevResetEventsParity = 0x133B;
    public const nint m_nNewSequenceParity = 0x133C;
    public const nint m_nResetEventsParity = 0x1340;
    public const nint m_nAnimLoopMode = 0x1344;
    public const nint m_hAnimationUpdate = 0x13E4;
    public const nint m_hLastAnimEventSequence = 0x13E8;
}

public static class CBasePlayerController {
    public const nint m_nFinalPredictedTick = 0x548;
    public const nint m_CommandContext = 0x550;
    public const nint m_nInButtonsWhichAreToggles = 0x5D0;
    public const nint m_nTickBase = 0x5D8;
    public const nint m_hPawn = 0x5DC;
    public const nint m_hPredictedPawn = 0x5E0;
    public const nint m_nSplitScreenSlot = 0x5E4;
    public const nint m_hSplitOwner = 0x5E8;
    public const nint m_hSplitScreenPlayers = 0x5F0;
    public const nint m_bIsHLTV = 0x608;
    public const nint m_iConnected = 0x60C;
    public const nint m_iszPlayerName = 0x610;
    public const nint m_steamID = 0x698;
    public const nint m_bIsLocalPlayerController = 0x6A0;
    public const nint m_iDesiredFOV = 0x6A4;
}

public static class CBasePlayerVData {
    public const nint m_sModelName = 0x28;
    public const nint m_flHeadDamageMultiplier = 0x108;
    public const nint m_flChestDamageMultiplier = 0x118;
    public const nint m_flStomachDamageMultiplier = 0x128;
    public const nint m_flArmDamageMultiplier = 0x138;
    public const nint m_flLegDamageMultiplier = 0x148;
    public const nint m_flHoldBreathTime = 0x158;
    public const nint m_flDrowningDamageInterval = 0x15C;
    public const nint m_nDrowningDamageInitial = 0x160;
    public const nint m_nDrowningDamageMax = 0x164;
    public const nint m_nWaterSpeed = 0x168;
    public const nint m_flUseRange = 0x16C;
    public const nint m_flUseAngleTolerance = 0x170;
    public const nint m_flCrouchTime = 0x174;
}

public static class CBasePlayerWeaponVData {
    public const nint m_szWorldModel = 0x28;
    public const nint m_bBuiltRightHanded = 0x108;
    public const nint m_bAllowFlipping = 0x109;
    public const nint m_bIsFullAuto = 0x10A;
    public const nint m_nNumBullets = 0x10C;
    public const nint m_sMuzzleAttachment = 0x110;
    public const nint m_szMuzzleFlashParticle = 0x118;
    public const nint m_iFlags = 0x1F8;
    public const nint m_nPrimaryAmmoType = 0x1F9;
    public const nint m_nSecondaryAmmoType = 0x1FA;
    public const nint m_iMaxClip1 = 0x1FC;
    public const nint m_iMaxClip2 = 0x200;
    public const nint m_iDefaultClip1 = 0x204;
    public const nint m_iDefaultClip2 = 0x208;
    public const nint m_iWeight = 0x20C;
    public const nint m_bAutoSwitchTo = 0x210;
    public const nint m_bAutoSwitchFrom = 0x211;
    public const nint m_iRumbleEffect = 0x214;
    public const nint m_aShootSounds = 0x218;
    public const nint m_iSlot = 0x238;
    public const nint m_iPosition = 0x23C;
}

public static class CBaseProp {
    public const nint m_bModelOverrodeBlockLOS = 0xE70;
    public const nint m_iShapeType = 0xE74;
    public const nint m_bConformToCollisionBounds = 0xE78;
    public const nint m_mPreferredCatchTransform = 0xE7C;
}

public static class CBodyComponent {
    public const nint m_pSceneNode = 0x8;
    public const nint __m_pChainEntity = 0x20;
}

public static class CBodyComponentBaseAnimGraph {
    public const nint m_animationController = 0x470;
    public const nint __m_pChainEntity = 0x18B0;
}

public static class CBodyComponentBaseModelEntity {
    public const nint __m_pChainEntity = 0x470;
}

public static class CBodyComponentPoint {
    public const nint m_sceneNode = 0x50;
    public const nint __m_pChainEntity = 0x1A0;
}

public static class CBodyComponentSkeletonInstance {
    public const nint m_skeletonInstance = 0x50;
    public const nint __m_pChainEntity = 0x440;
}

public static class CBombTarget {
    public const nint m_bBombPlantedHere = 0xCC8;
}

public static class CBuoyancyHelper {
    public const nint m_flFluidDensity = 0x18;
}

public static class CCSGameModeRules {
    public const nint __m_pChainEntity = 0x8;
}

public static class CCSGameModeRules_Deathmatch {
    public const nint m_bFirstThink = 0x30;
    public const nint m_bFirstThinkAfterConnected = 0x31;
    public const nint m_flDMBonusStartTime = 0x34;
    public const nint m_flDMBonusTimeLength = 0x38;
    public const nint m_nDMBonusWeaponLoadoutSlot = 0x3C;
}

public static class CCSPlayerController {
    public const nint m_pInGameMoneyServices = 0x6D0;
    public const nint m_pInventoryServices = 0x6D8;
    public const nint m_pActionTrackingServices = 0x6E0;
    public const nint m_pDamageServices = 0x6E8;
    public const nint m_iPing = 0x6F0;
    public const nint m_bHasCommunicationAbuseMute = 0x6F4;
    public const nint m_szCrosshairCodes = 0x6F8;
    public const nint m_iPendingTeamNum = 0x700;
    public const nint m_flForceTeamTime = 0x704;
    public const nint m_iCompTeammateColor = 0x708;
    public const nint m_bEverPlayedOnTeam = 0x70C;
    public const nint m_flPreviousForceJoinTeamTime = 0x710;
    public const nint m_szClan = 0x718;
    public const nint m_sSanitizedPlayerName = 0x720;
    public const nint m_iCoachingTeam = 0x728;
    public const nint m_nPlayerDominated = 0x730;
    public const nint m_nPlayerDominatingMe = 0x738;
    public const nint m_iCompetitiveRanking = 0x740;
    public const nint m_iCompetitiveWins = 0x744;
    public const nint m_iCompetitiveRankType = 0x748;
    public const nint m_iCompetitiveRankingPredicted_Win = 0x74C;
    public const nint m_iCompetitiveRankingPredicted_Loss = 0x750;
    public const nint m_iCompetitiveRankingPredicted_Tie = 0x754;
    public const nint m_nEndMatchNextMapVote = 0x758;
    public const nint m_unActiveQuestId = 0x75C;
    public const nint m_nQuestProgressReason = 0x760;
    public const nint m_unPlayerTvControlFlags = 0x764;
    public const nint m_iDraftIndex = 0x7D0;
    public const nint m_msQueuedModeDisconnectionTimestamp = 0x7D4;
    public const nint m_uiAbandonRecordedReason = 0x7D8;
    public const nint m_bEverFullyConnected = 0x7DC;
    public const nint m_bAbandonAllowsSurrender = 0x7DD;
    public const nint m_bAbandonOffersInstantSurrender = 0x7DE;
    public const nint m_bDisconnection1MinWarningPrinted = 0x7DF;
    public const nint m_bScoreReported = 0x7E0;
    public const nint m_nDisconnectionTick = 0x7E4;
    public const nint m_bControllingBot = 0x7F0;
    public const nint m_bHasControlledBotThisRound = 0x7F1;
    public const nint m_bHasBeenControlledByPlayerThisRound = 0x7F2;
    public const nint m_nBotsControlledThisRound = 0x7F4;
    public const nint m_bCanControlObservedBot = 0x7F8;
    public const nint m_hPlayerPawn = 0x7FC;
    public const nint m_hObserverPawn = 0x800;
    public const nint m_bPawnIsAlive = 0x804;
    public const nint m_iPawnHealth = 0x808;
    public const nint m_iPawnArmor = 0x80C;
    public const nint m_bPawnHasDefuser = 0x810;
    public const nint m_bPawnHasHelmet = 0x811;
    public const nint m_nPawnCharacterDefIndex = 0x812;
    public const nint m_iPawnLifetimeStart = 0x814;
    public const nint m_iPawnLifetimeEnd = 0x818;
    public const nint m_iPawnGunGameLevel = 0x81C;
    public const nint m_iPawnBotDifficulty = 0x820;
    public const nint m_hOriginalControllerOfCurrentPawn = 0x824;
    public const nint m_iScore = 0x828;
    public const nint m_vecKills = 0x830;
    public const nint m_iMVPs = 0x848;
    public const nint m_bIsPlayerNameDirty = 0x84C;
}

public static class CCSPlayerController_ActionTrackingServices {
    public const nint m_perRoundStats = 0x40;
    public const nint m_matchStats = 0x90;
    public const nint m_iNumRoundKills = 0x108;
    public const nint m_iNumRoundKillsHeadshots = 0x10C;
}

public static class CCSPlayerController_DamageServices {
    public const nint m_nSendUpdate = 0x40;
    public const nint m_DamageList = 0x48;
}

public static class CCSPlayerController_InGameMoneyServices {
    public const nint m_iAccount = 0x40;
    public const nint m_iStartAccount = 0x44;
    public const nint m_iTotalCashSpent = 0x48;
    public const nint m_iCashSpentThisRound = 0x4C;
    public const nint m_nPreviousAccount = 0x50;
}

public static class CCSPlayerController_InventoryServices {
    public const nint m_unMusicID = 0x40;
    public const nint m_rank = 0x44;
    public const nint m_nPersonaDataPublicLevel = 0x5C;
    public const nint m_nPersonaDataPublicCommendsLeader = 0x60;
    public const nint m_nPersonaDataPublicCommendsTeacher = 0x64;
    public const nint m_nPersonaDataPublicCommendsFriendly = 0x68;
    public const nint m_vecTerroristLoadoutCache = 0x70;
    public const nint m_vecCounterTerroristLoadoutCache = 0xC0;
}

public static class CCSPlayer_ActionTrackingServices {
    public const nint m_hLastWeaponBeforeC4AutoSwitch = 0x40;
    public const nint m_bIsRescuing = 0x44;
    public const nint m_weaponPurchasesThisMatch = 0x48;
    public const nint m_weaponPurchasesThisRound = 0xA0;
}

public static class CCSPlayer_BulletServices {
    public const nint m_totalHitsOnServer = 0x40;
}

public static class CCSPlayer_BuyServices {
    public const nint m_vecSellbackPurchaseEntries = 0x40;
}

public static class CCSPlayer_CameraServices {
    public const nint m_iFOV = 0x210;
    public const nint m_iFOVStart = 0x214;
    public const nint m_flFOVTime = 0x218;
    public const nint m_flFOVRate = 0x21C;
    public const nint m_hZoomOwner = 0x220;
    public const nint m_flLastShotFOV = 0x224;
    public const nint m_flDeathCamTilt = 0x228;
}

public static class CCSPlayer_HostageServices {
    public const nint m_hCarriedHostage = 0x40;
    public const nint m_hCarriedHostageProp = 0x44;
}

public static class CCSPlayer_ItemServices {
    public const nint m_bHasDefuser = 0x40;
    public const nint m_bHasHelmet = 0x41;
    public const nint m_bHasHeavyArmor = 0x42;
}

public static class CCSPlayer_MovementServices {
    public const nint m_flMaxFallVelocity = 0x210;
    public const nint m_vecLadderNormal = 0x214;
    public const nint m_nLadderSurfacePropIndex = 0x220;
    public const nint m_flDuckAmount = 0x224;
    public const nint m_flDuckSpeed = 0x228;
    public const nint m_bDuckOverride = 0x22C;
    public const nint m_bDesiresDuck = 0x22D;
    public const nint m_flDuckOffset = 0x230;
    public const nint m_nDuckTimeMsecs = 0x234;
    public const nint m_nDuckJumpTimeMsecs = 0x238;
    public const nint m_nJumpTimeMsecs = 0x23C;
    public const nint m_flLastDuckTime = 0x240;
    public const nint m_vecLastPositionAtFullCrouchSpeed = 0x250;
    public const nint m_duckUntilOnGround = 0x258;
    public const nint m_bHasWalkMovedSinceLastJump = 0x259;
    public const nint m_bInStuckTest = 0x25A;
    public const nint m_flStuckCheckTime = 0x268;
    public const nint m_nTraceCount = 0x468;
    public const nint m_StuckLast = 0x46C;
    public const nint m_bSpeedCropped = 0x470;
    public const nint m_nOldWaterLevel = 0x474;
    public const nint m_flWaterEntryTime = 0x478;
    public const nint m_vecForward = 0x47C;
    public const nint m_vecLeft = 0x488;
    public const nint m_vecUp = 0x494;
    public const nint m_vecPreviouslyPredictedOrigin = 0x4A0;
    public const nint m_bOldJumpPressed = 0x4AC;
    public const nint m_flJumpPressedTime = 0x4B0;
    public const nint m_flJumpUntil = 0x4B4;
    public const nint m_flJumpVel = 0x4B8;
    public const nint m_fStashGrenadeParameterWhen = 0x4BC;
    public const nint m_nButtonDownMaskPrev = 0x4C0;
    public const nint m_flOffsetTickCompleteTime = 0x4C8;
    public const nint m_flOffsetTickStashedSpeed = 0x4CC;
    public const nint m_bUpdatePredictedOriginAfterDataUpdate = 0x4D0;
}

public static class CCSPlayer_ObserverServices {
    public const nint m_hLastObserverTarget = 0x58;
    public const nint m_vecObserverInterpolateOffset = 0x5C;
    public const nint m_vecObserverInterpStartPos = 0x68;
    public const nint m_flObsInterp_PathLength = 0x74;
    public const nint m_qObsInterp_OrientationStart = 0x80;
    public const nint m_qObsInterp_OrientationTravelDir = 0x90;
    public const nint m_obsInterpState = 0xA0;
    public const nint m_bObserverInterpolationNeedsDeferredSetup = 0xA4;
}

public static class CCSPlayer_PingServices {
    public const nint m_hPlayerPing = 0x40;
}

public static class CCSPlayer_ViewModelServices {
    public const nint m_hViewModel = 0x40;
}

public static class CCSPlayer_WaterServices {
    public const nint m_flWaterJumpTime = 0x40;
    public const nint m_vecWaterJumpVel = 0x44;
    public const nint m_flSwimSoundTime = 0x50;
}

public static class CCSPlayer_WeaponServices {
    public const nint m_flNextAttack = 0xA8;
    public const nint m_bIsLookingAtWeapon = 0xAC;
    public const nint m_bIsHoldingLookAtWeapon = 0xAD;
}

public static class CClientAlphaProperty {
    public const nint m_nRenderFX = 0x10;
    public const nint m_nRenderMode = 0x11;
    public const nint m_bAlphaOverride = 0x0;
    public const nint m_bShadowAlphaOverride = 0x0;
    public const nint m_nReserved = 0x0;
    public const nint m_nAlpha = 0x13;
    public const nint m_nDesyncOffset = 0x14;
    public const nint m_nReserved2 = 0x16;
    public const nint m_nDistFadeStart = 0x18;
    public const nint m_nDistFadeEnd = 0x1A;
    public const nint m_flFadeScale = 0x1C;
    public const nint m_flRenderFxStartTime = 0x20;
    public const nint m_flRenderFxDuration = 0x24;
}

public static class CCollisionProperty {
    public const nint m_collisionAttribute = 0x10;
    public const nint m_vecMins = 0x40;
    public const nint m_vecMaxs = 0x4C;
    public const nint m_usSolidFlags = 0x5A;
    public const nint m_nSolidType = 0x5B;
    public const nint m_triggerBloat = 0x5C;
    public const nint m_nSurroundType = 0x5D;
    public const nint m_CollisionGroup = 0x5E;
    public const nint m_nEnablePhysics = 0x5F;
    public const nint m_flBoundingRadius = 0x60;
    public const nint m_vecSpecifiedSurroundingMins = 0x64;
    public const nint m_vecSpecifiedSurroundingMaxs = 0x70;
    public const nint m_vecSurroundingMaxs = 0x7C;
    public const nint m_vecSurroundingMins = 0x88;
    public const nint m_vCapsuleCenter1 = 0x94;
    public const nint m_vCapsuleCenter2 = 0xA0;
    public const nint m_flCapsuleRadius = 0xAC;
}

public static class CComicBook {
    public const nint m_CoverImage = 0x8;
    public const nint m_XmlFile = 0x18;
}

public static class CCompositeMaterialEditorDoc {
    public const nint m_nVersion = 0x8;
    public const nint m_Points = 0x10;
    public const nint m_KVthumbnail = 0x28;
}

public static class CDamageRecord {
    public const nint m_PlayerDamager = 0x28;
    public const nint m_PlayerRecipient = 0x2C;
    public const nint m_hPlayerControllerDamager = 0x30;
    public const nint m_hPlayerControllerRecipient = 0x34;
    public const nint m_szPlayerDamagerName = 0x38;
    public const nint m_szPlayerRecipientName = 0x40;
    public const nint m_DamagerXuid = 0x48;
    public const nint m_RecipientXuid = 0x50;
    public const nint m_iDamage = 0x58;
    public const nint m_iActualHealthRemoved = 0x5C;
    public const nint m_iNumHits = 0x60;
    public const nint m_iLastBulletUpdate = 0x64;
    public const nint m_bIsOtherEnemy = 0x68;
    public const nint m_killType = 0x69;
}

public static class CDecalInfo {
    public const nint m_flAnimationScale = 0x0;
    public const nint m_flAnimationLifeSpan = 0x4;
    public const nint m_flPlaceTime = 0x8;
    public const nint m_flFadeStartTime = 0xC;
    public const nint m_flFadeDuration = 0x10;
    public const nint m_nVBSlot = 0x14;
    public const nint m_nBoneIndex = 0x18;
    public const nint m_pNext = 0x28;
    public const nint m_pPrev = 0x30;
    public const nint m_nDecalMaterialIndex = 0x90;
}

public static class CEconItemAttribute {
    public const nint m_iAttributeDefinitionIndex = 0x30;
    public const nint m_flValue = 0x34;
    public const nint m_flInitialValue = 0x38;
    public const nint m_nRefundableCurrency = 0x3C;
    public const nint m_bSetBonus = 0x40;
}

public static class CEffectData {
    public const nint m_vOrigin = 0x8;
    public const nint m_vStart = 0x14;
    public const nint m_vNormal = 0x20;
    public const nint m_vAngles = 0x2C;
    public const nint m_hEntity = 0x38;
    public const nint m_hOtherEntity = 0x3C;
    public const nint m_flScale = 0x40;
    public const nint m_flMagnitude = 0x44;
    public const nint m_flRadius = 0x48;
    public const nint m_nSurfaceProp = 0x4C;
    public const nint m_nEffectIndex = 0x50;
    public const nint m_nDamageType = 0x58;
    public const nint m_nPenetrate = 0x5C;
    public const nint m_nMaterial = 0x5E;
    public const nint m_nHitBox = 0x60;
    public const nint m_nColor = 0x62;
    public const nint m_fFlags = 0x63;
    public const nint m_nAttachmentIndex = 0x64;
    public const nint m_nAttachmentName = 0x68;
    public const nint m_iEffectName = 0x6C;
    public const nint m_nExplosionType = 0x6E;
}

public static class CEntityIdentity {
    public const nint m_nameStringableIndex = 0x14;
    public const nint m_name = 0x18;
    public const nint m_designerName = 0x20;
    public const nint m_flags = 0x30;
    public const nint m_worldGroupId = 0x38;
    public const nint m_fDataObjectTypes = 0x3C;
    public const nint m_PathIndex = 0x40;
    public const nint m_pPrev = 0x58;
    public const nint m_pNext = 0x60;
    public const nint m_pPrevByClass = 0x68;
    public const nint m_pNextByClass = 0x70;
}

public static class CEntityInstance {
    public const nint m_iszPrivateVScripts = 0x8;
    public const nint m_pEntity = 0x10;
    public const nint m_CScriptComponent = 0x28;
}

public static class CFireOverlay {
    public const nint m_pOwner = 0xD0;
    public const nint m_vBaseColors = 0xD8;
    public const nint m_flScale = 0x108;
    public const nint m_nGUID = 0x10C;
}

public static class CFlashlightEffect {
    public const nint m_bIsOn = 0x10;
    public const nint m_bMuzzleFlashEnabled = 0x20;
    public const nint m_flMuzzleFlashBrightness = 0x24;
    public const nint m_quatMuzzleFlashOrientation = 0x30;
    public const nint m_vecMuzzleFlashOrigin = 0x40;
    public const nint m_flFov = 0x4C;
    public const nint m_flFarZ = 0x50;
    public const nint m_flLinearAtten = 0x54;
    public const nint m_bCastsShadows = 0x58;
    public const nint m_flCurrentPullBackDist = 0x5C;
    public const nint m_FlashlightTexture = 0x60;
    public const nint m_MuzzleFlashTexture = 0x68;
    public const nint m_textureName = 0x70;
}

public static class CFuncWater {
    public const nint m_BuoyancyHelper = 0xCC0;
}

public static class CGameSceneNode {
    public const nint m_nodeToWorld = 0x10;
    public const nint m_pOwner = 0x30;
    public const nint m_pParent = 0x38;
    public const nint m_pChild = 0x40;
    public const nint m_pNextSibling = 0x48;
    public const nint m_hParent = 0x70;
    public const nint m_vecOrigin = 0x80;
    public const nint m_angRotation = 0xB8;
    public const nint m_flScale = 0xC4;
    public const nint m_vecAbsOrigin = 0xC8;
    public const nint m_angAbsRotation = 0xD4;
    public const nint m_flAbsScale = 0xE0;
    public const nint m_nParentAttachmentOrBone = 0xE4;
    public const nint m_bDebugAbsOriginChanges = 0xE6;
    public const nint m_bDormant = 0xE7;
    public const nint m_bForceParentToBeNetworked = 0xE8;
    public const nint m_bDirtyHierarchy = 0x0;
    public const nint m_bDirtyBoneMergeInfo = 0x0;
    public const nint m_bNetworkedPositionChanged = 0x0;
    public const nint m_bNetworkedAnglesChanged = 0x0;
    public const nint m_bNetworkedScaleChanged = 0x0;
    public const nint m_bWillBeCallingPostDataUpdate = 0x0;
    public const nint m_bNotifyBoneTransformsChanged = 0x0;
    public const nint m_bBoneMergeFlex = 0x0;
    public const nint m_nLatchAbsOrigin = 0x0;
    public const nint m_bDirtyBoneMergeBoneToRoot = 0x0;
    public const nint m_nHierarchicalDepth = 0xEB;
    public const nint m_nHierarchyType = 0xEC;
    public const nint m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xED;
    public const nint m_name = 0xF0;
    public const nint m_hierarchyAttachName = 0x130;
    public const nint m_flZOffset = 0x134;
    public const nint m_vRenderOrigin = 0x138;
}

public static class CGameSceneNodeHandle {
    public const nint m_hOwner = 0x8;
    public const nint m_name = 0xC;
}

public static class CGlobalLightBase {
    public const nint m_bSpotLight = 0x10;
    public const nint m_SpotLightOrigin = 0x14;
    public const nint m_SpotLightAngles = 0x20;
    public const nint m_ShadowDirection = 0x2C;
    public const nint m_AmbientDirection = 0x38;
    public const nint m_SpecularDirection = 0x44;
    public const nint m_InspectorSpecularDirection = 0x50;
    public const nint m_flSpecularPower = 0x5C;
    public const nint m_flSpecularIndependence = 0x60;
    public const nint m_SpecularColor = 0x64;
    public const nint m_bStartDisabled = 0x68;
    public const nint m_bEnabled = 0x69;
    public const nint m_LightColor = 0x6A;
    public const nint m_AmbientColor1 = 0x6E;
    public const nint m_AmbientColor2 = 0x72;
    public const nint m_AmbientColor3 = 0x76;
    public const nint m_flSunDistance = 0x7C;
    public const nint m_flFOV = 0x80;
    public const nint m_flNearZ = 0x84;
    public const nint m_flFarZ = 0x88;
    public const nint m_bEnableShadows = 0x8C;
    public const nint m_bOldEnableShadows = 0x8D;
    public const nint m_bBackgroundClearNotRequired = 0x8E;
    public const nint m_flCloudScale = 0x90;
    public const nint m_flCloud1Speed = 0x94;
    public const nint m_flCloud1Direction = 0x98;
    public const nint m_flCloud2Speed = 0x9C;
    public const nint m_flCloud2Direction = 0xA0;
    public const nint m_flAmbientScale1 = 0xB0;
    public const nint m_flAmbientScale2 = 0xB4;
    public const nint m_flGroundScale = 0xB8;
    public const nint m_flLightScale = 0xBC;
    public const nint m_flFoWDarkness = 0xC0;
    public const nint m_bEnableSeparateSkyboxFog = 0xC4;
    public const nint m_vFowColor = 0xC8;
    public const nint m_ViewOrigin = 0xD4;
    public const nint m_ViewAngles = 0xE0;
    public const nint m_flViewFoV = 0xEC;
    public const nint m_WorldPoints = 0xF0;
    public const nint m_vFogOffsetLayer0 = 0x4A8;
    public const nint m_vFogOffsetLayer1 = 0x4B0;
    public const nint m_hEnvWind = 0x4B8;
    public const nint m_hEnvSky = 0x4BC;
}

public static class CGlowOverlay {
    public const nint m_vPos = 0x8;
    public const nint m_bDirectional = 0x14;
    public const nint m_vDirection = 0x18;
    public const nint m_bInSky = 0x24;
    public const nint m_skyObstructionScale = 0x28;
    public const nint m_Sprites = 0x30;
    public const nint m_nSprites = 0xB0;
    public const nint m_flProxyRadius = 0xB4;
    public const nint m_flHDRColorScale = 0xB8;
    public const nint m_flGlowObstructionScale = 0xBC;
    public const nint m_bCacheGlowObstruction = 0xC0;
    public const nint m_bCacheSkyObstruction = 0xC1;
    public const nint m_bActivated = 0xC2;
    public const nint m_ListIndex = 0xC4;
    public const nint m_queryHandle = 0xC8;
}

public static class CGlowProperty {
    public const nint m_fGlowColor = 0x8;
    public const nint m_iGlowType = 0x30;
    public const nint m_iGlowTeam = 0x34;
    public const nint m_nGlowRange = 0x38;
    public const nint m_nGlowRangeMin = 0x3C;
    public const nint m_glowColorOverride = 0x40;
    public const nint m_bFlashing = 0x44;
    public const nint m_flGlowTime = 0x48;
    public const nint m_flGlowStartTime = 0x4C;
    public const nint m_bEligibleForScreenHighlight = 0x50;
    public const nint m_bGlowing = 0x51;
}

public static class CGlowSprite {
    public const nint m_vColor = 0x0;
    public const nint m_flHorzSize = 0xC;
    public const nint m_flVertSize = 0x10;
    public const nint m_hMaterial = 0x18;
}

public static class CGrenadeTracer {
    public const nint m_flTracerDuration = 0xCE0;
    public const nint m_nType = 0xCE4;
}

public static class CHitboxComponent {
    public const nint m_bvDisabledHitGroups = 0x24;
}

public static class CInfoDynamicShadowHint {
    public const nint m_bDisabled = 0x540;
    public const nint m_flRange = 0x544;
    public const nint m_nImportance = 0x548;
    public const nint m_nLightChoice = 0x54C;
    public const nint m_hLight = 0x550;
}

public static class CInfoDynamicShadowHintBox {
    public const nint m_vBoxMins = 0x558;
    public const nint m_vBoxMaxs = 0x564;
}

public static class CInfoOffscreenPanoramaTexture {
    public const nint m_bDisabled = 0x540;
    public const nint m_nResolutionX = 0x544;
    public const nint m_nResolutionY = 0x548;
    public const nint m_szLayoutFileName = 0x550;
    public const nint m_RenderAttrName = 0x558;
    public const nint m_TargetEntities = 0x560;
    public const nint m_nTargetChangeCount = 0x578;
    public const nint m_vecCSSClasses = 0x580;
    public const nint m_bCheckCSSClasses = 0x6F8;
}

public static class CInfoWorldLayer {
    public const nint m_pOutputOnEntitiesSpawned = 0x540;
    public const nint m_worldName = 0x568;
    public const nint m_layerName = 0x570;
    public const nint m_bWorldLayerVisible = 0x578;
    public const nint m_bEntitiesSpawned = 0x579;
    public const nint m_bCreateAsChildSpawnGroup = 0x57A;
    public const nint m_hLayerSpawnGroup = 0x57C;
    public const nint m_bWorldLayerActuallyVisible = 0x580;
}

public static class CInterpolatedValue {
    public const nint m_flStartTime = 0x0;
    public const nint m_flEndTime = 0x4;
    public const nint m_flStartValue = 0x8;
    public const nint m_flEndValue = 0xC;
    public const nint m_nInterpType = 0x10;
}

public static class CLightComponent {
    public const nint __m_pChainEntity = 0x48;
    public const nint m_Color = 0x85;
    public const nint m_SecondaryColor = 0x89;
    public const nint m_flBrightness = 0x90;
    public const nint m_flBrightnessScale = 0x94;
    public const nint m_flBrightnessMult = 0x98;
    public const nint m_flRange = 0x9C;
    public const nint m_flFalloff = 0xA0;
    public const nint m_flAttenuation0 = 0xA4;
    public const nint m_flAttenuation1 = 0xA8;
    public const nint m_flAttenuation2 = 0xAC;
    public const nint m_flTheta = 0xB0;
    public const nint m_flPhi = 0xB4;
    public const nint m_hLightCookie = 0xB8;
    public const nint m_nCascades = 0xC0;
    public const nint m_nCastShadows = 0xC4;
    public const nint m_nShadowWidth = 0xC8;
    public const nint m_nShadowHeight = 0xCC;
    public const nint m_bRenderDiffuse = 0xD0;
    public const nint m_nRenderSpecular = 0xD4;
    public const nint m_bRenderTransmissive = 0xD8;
    public const nint m_flOrthoLightWidth = 0xDC;
    public const nint m_flOrthoLightHeight = 0xE0;
    public const nint m_nStyle = 0xE4;
    public const nint m_Pattern = 0xE8;
    public const nint m_nCascadeRenderStaticObjects = 0xF0;
    public const nint m_flShadowCascadeCrossFade = 0xF4;
    public const nint m_flShadowCascadeDistanceFade = 0xF8;
    public const nint m_flShadowCascadeDistance0 = 0xFC;
    public const nint m_flShadowCascadeDistance1 = 0x100;
    public const nint m_flShadowCascadeDistance2 = 0x104;
    public const nint m_flShadowCascadeDistance3 = 0x108;
    public const nint m_nShadowCascadeResolution0 = 0x10C;
    public const nint m_nShadowCascadeResolution1 = 0x110;
    public const nint m_nShadowCascadeResolution2 = 0x114;
    public const nint m_nShadowCascadeResolution3 = 0x118;
    public const nint m_bUsesBakedShadowing = 0x11C;
    public const nint m_nShadowPriority = 0x120;
    public const nint m_nBakedShadowIndex = 0x124;
    public const nint m_bRenderToCubemaps = 0x128;
    public const nint m_LightGroups = 0x130;
    public const nint m_nDirectLight = 0x138;
    public const nint m_nIndirectLight = 0x13C;
    public const nint m_flFadeMinDist = 0x140;
    public const nint m_flFadeMaxDist = 0x144;
    public const nint m_flShadowFadeMinDist = 0x148;
    public const nint m_flShadowFadeMaxDist = 0x14C;
    public const nint m_bEnabled = 0x150;
    public const nint m_bFlicker = 0x151;
    public const nint m_bPrecomputedFieldsValid = 0x152;
    public const nint m_vPrecomputedBoundsMins = 0x154;
    public const nint m_vPrecomputedBoundsMaxs = 0x160;
    public const nint m_vPrecomputedOBBOrigin = 0x16C;
    public const nint m_vPrecomputedOBBAngles = 0x178;
    public const nint m_vPrecomputedOBBExtent = 0x184;
    public const nint m_flPrecomputedMaxRange = 0x190;
    public const nint m_nFogLightingMode = 0x194;
    public const nint m_flFogContributionStength = 0x198;
    public const nint m_flNearClipPlane = 0x19C;
    public const nint m_SkyColor = 0x1A0;
    public const nint m_flSkyIntensity = 0x1A4;
    public const nint m_SkyAmbientBounce = 0x1A8;
    public const nint m_bUseSecondaryColor = 0x1AC;
    public const nint m_bMixedShadows = 0x1AD;
    public const nint m_flLightStyleStartTime = 0x1B0;
    public const nint m_flCapsuleLength = 0x1B4;
    public const nint m_flMinRoughness = 0x1B8;
}

public static class CLogicRelay {
    public const nint m_OnTrigger = 0x540;
    public const nint m_OnSpawn = 0x568;
    public const nint m_bDisabled = 0x590;
    public const nint m_bWaitForRefire = 0x591;
    public const nint m_bTriggerOnce = 0x592;
    public const nint m_bFastRetrigger = 0x593;
    public const nint m_bPassthoughCaller = 0x594;
}

public static class CModelState {
    public const nint m_hModel = 0xA0;
    public const nint m_ModelName = 0xA8;
    public const nint m_bClientClothCreationSuppressed = 0xE8;
    public const nint m_MeshGroupMask = 0x180;
    public const nint m_nIdealMotionType = 0x222;
    public const nint m_nForceLOD = 0x223;
    public const nint m_nClothUpdateFlags = 0x224;
}

public static class CNetworkedSequenceOperation {
    public const nint m_hSequence = 0x8;
    public const nint m_flPrevCycle = 0xC;
    public const nint m_flCycle = 0x10;
    public const nint m_flWeight = 0x14;
    public const nint m_bSequenceChangeNetworked = 0x1C;
    public const nint m_bDiscontinuity = 0x1D;
    public const nint m_flPrevCycleFromDiscontinuity = 0x20;
    public const nint m_flPrevCycleForAnimEventDetection = 0x24;
}

public static class CPlayer_CameraServices {
    public const nint m_vecCsViewPunchAngle = 0x40;
    public const nint m_nCsViewPunchAngleTick = 0x4C;
    public const nint m_flCsViewPunchAngleTickRatio = 0x50;
    public const nint m_PlayerFog = 0x58;
    public const nint m_hColorCorrectionCtrl = 0x98;
    public const nint m_hViewEntity = 0x9C;
    public const nint m_hTonemapController = 0xA0;
    public const nint m_audio = 0xA8;
    public const nint m_PostProcessingVolumes = 0x120;
    public const nint m_flOldPlayerZ = 0x138;
    public const nint m_flOldPlayerViewOffsetZ = 0x13C;
    public const nint m_CurrentFog = 0x140;
    public const nint m_hOldFogController = 0x1A8;
    public const nint m_bOverrideFogColor = 0x1AC;
    public const nint m_OverrideFogColor = 0x1B1;
    public const nint m_bOverrideFogStartEnd = 0x1C5;
    public const nint m_fOverrideFogStart = 0x1CC;
    public const nint m_fOverrideFogEnd = 0x1E0;
    public const nint m_hActivePostProcessingVolume = 0x1F4;
    public const nint m_angDemoViewAngles = 0x1F8;
}

public static class CPlayer_MovementServices {
    public const nint m_nImpulse = 0x40;
    public const nint m_nButtons = 0x48;
    public const nint m_nQueuedButtonDownMask = 0x68;
    public const nint m_nQueuedButtonChangeMask = 0x70;
    public const nint m_nButtonDoublePressed = 0x78;
    public const nint m_pButtonPressedCmdNumber = 0x80;
    public const nint m_nLastCommandNumberProcessed = 0x180;
    public const nint m_nToggleButtonDownMask = 0x188;
    public const nint m_flMaxspeed = 0x190;
    public const nint m_arrForceSubtickMoveWhen = 0x194;
    public const nint m_flForwardMove = 0x1A4;
    public const nint m_flLeftMove = 0x1A8;
    public const nint m_flUpMove = 0x1AC;
    public const nint m_vecLastMovementImpulses = 0x1B0;
    public const nint m_vecOldViewAngles = 0x1BC;
}

public static class CPlayer_MovementServices_Humanoid {
    public const nint m_flStepSoundTime = 0x1D0;
    public const nint m_flFallVelocity = 0x1D4;
    public const nint m_bInCrouch = 0x1D8;
    public const nint m_nCrouchState = 0x1DC;
    public const nint m_flCrouchTransitionStartTime = 0x1E0;
    public const nint m_bDucked = 0x1E4;
    public const nint m_bDucking = 0x1E5;
    public const nint m_bInDuckJump = 0x1E6;
    public const nint m_groundNormal = 0x1E8;
    public const nint m_flSurfaceFriction = 0x1F4;
    public const nint m_surfaceProps = 0x1F8;
    public const nint m_nStepside = 0x208;
}

public static class CPlayer_ObserverServices {
    public const nint m_iObserverMode = 0x40;
    public const nint m_hObserverTarget = 0x44;
    public const nint m_iObserverLastMode = 0x48;
    public const nint m_bForcedObserverMode = 0x4C;
    public const nint m_flObserverChaseDistance = 0x50;
    public const nint m_flObserverChaseDistanceCalcTime = 0x54;
}

public static class CPlayer_WeaponServices {
    public const nint m_bAllowSwitchToNoWeapon = 0x40;
    public const nint m_hMyWeapons = 0x48;
    public const nint m_hActiveWeapon = 0x60;
    public const nint m_hLastWeapon = 0x64;
    public const nint m_iAmmo = 0x68;
}

public static class CPointOffScreenIndicatorUi {
    public const nint m_bBeenEnabled = 0xF20;
    public const nint m_bHide = 0xF21;
    public const nint m_flSeenTargetTime = 0xF24;
    public const nint m_pTargetPanel = 0xF28;
}

public static class CPointTemplate {
    public const nint m_iszWorldName = 0x540;
    public const nint m_iszSource2EntityLumpName = 0x548;
    public const nint m_iszEntityFilterName = 0x550;
    public const nint m_flTimeoutInterval = 0x558;
    public const nint m_bAsynchronouslySpawnEntities = 0x55C;
    public const nint m_pOutputOnSpawned = 0x560;
    public const nint m_clientOnlyEntityBehavior = 0x588;
    public const nint m_ownerSpawnGroupType = 0x58C;
    public const nint m_createdSpawnGroupHandles = 0x590;
    public const nint m_SpawnedEntityHandles = 0x5A8;
    public const nint m_ScriptSpawnCallback = 0x5C0;
    public const nint m_ScriptCallbackScope = 0x5C8;
}

public static class CPrecipitationVData {
    public const nint m_szParticlePrecipitationEffect = 0x28;
    public const nint m_flInnerDistance = 0x108;
    public const nint m_nAttachType = 0x10C;
    public const nint m_bBatchSameVolumeType = 0x110;
    public const nint m_nRTEnvCP = 0x114;
    public const nint m_nRTEnvCPComponent = 0x118;
    public const nint m_szModifier = 0x120;
}

public static class CProjectedTextureBase {
    public const nint m_hTargetEntity = 0xC;
    public const nint m_bState = 0x10;
    public const nint m_bAlwaysUpdate = 0x11;
    public const nint m_flLightFOV = 0x14;
    public const nint m_bEnableShadows = 0x18;
    public const nint m_bSimpleProjection = 0x19;
    public const nint m_bLightOnlyTarget = 0x1A;
    public const nint m_bLightWorld = 0x1B;
    public const nint m_bCameraSpace = 0x1C;
    public const nint m_flBrightnessScale = 0x20;
    public const nint m_LightColor = 0x24;
    public const nint m_flIntensity = 0x28;
    public const nint m_flLinearAttenuation = 0x2C;
    public const nint m_flQuadraticAttenuation = 0x30;
    public const nint m_bVolumetric = 0x34;
    public const nint m_flVolumetricIntensity = 0x38;
    public const nint m_flNoiseStrength = 0x3C;
    public const nint m_flFlashlightTime = 0x40;
    public const nint m_nNumPlanes = 0x44;
    public const nint m_flPlaneOffset = 0x48;
    public const nint m_flColorTransitionTime = 0x4C;
    public const nint m_flAmbient = 0x50;
    public const nint m_SpotlightTextureName = 0x54;
    public const nint m_nSpotlightTextureFrame = 0x254;
    public const nint m_nShadowQuality = 0x258;
    public const nint m_flNearZ = 0x25C;
    public const nint m_flFarZ = 0x260;
    public const nint m_flProjectionSize = 0x264;
    public const nint m_flRotation = 0x268;
    public const nint m_bFlipHorizontal = 0x26C;
}

public static class CRenderComponent {
    public const nint __m_pChainEntity = 0x10;
    public const nint m_bIsRenderingWithViewModels = 0x50;
    public const nint m_nSplitscreenFlags = 0x54;
    public const nint m_bEnableRendering = 0x60;
    public const nint m_bInterpolationReadyToDraw = 0xB0;
}

public static class CSMatchStats_t {
    public const nint m_iEnemy5Ks = 0x68;
    public const nint m_iEnemy4Ks = 0x6C;
    public const nint m_iEnemy3Ks = 0x70;
}

public static class CSPerRoundStats_t {
    public const nint m_iKills = 0x30;
    public const nint m_iDeaths = 0x34;
    public const nint m_iAssists = 0x38;
    public const nint m_iDamage = 0x3C;
    public const nint m_iEquipmentValue = 0x40;
    public const nint m_iMoneySaved = 0x44;
    public const nint m_iKillReward = 0x48;
    public const nint m_iLiveTime = 0x4C;
    public const nint m_iHeadShotKills = 0x50;
    public const nint m_iObjective = 0x54;
    public const nint m_iCashEarned = 0x58;
    public const nint m_iUtilityDamage = 0x5C;
    public const nint m_iEnemiesFlashed = 0x60;
}

public static class CScriptComponent {
    public const nint m_scriptClassName = 0x30;
}

public static class CSkeletonInstance {
    public const nint m_modelState = 0x160;
    public const nint m_bIsAnimationEnabled = 0x390;
    public const nint m_bUseParentRenderBounds = 0x391;
    public const nint m_bDisableSolidCollisionsForHierarchy = 0x392;
    public const nint m_bDirtyMotionType = 0x0;
    public const nint m_bIsGeneratingLatchedParentSpaceState = 0x0;
    public const nint m_materialGroup = 0x394;
    public const nint m_nHitboxSet = 0x398;
}

public static class CSkyboxReference {
    public const nint m_worldGroupId = 0x540;
    public const nint m_hSkyCamera = 0x544;
}

public static class CTimeline {
    public const nint m_flValues = 0x10;
    public const nint m_nValueCounts = 0x110;
    public const nint m_nBucketCount = 0x210;
    public const nint m_flInterval = 0x214;
    public const nint m_flFinalValue = 0x218;
    public const nint m_nCompressionType = 0x21C;
    public const nint m_bStopped = 0x220;
}

public static class CWeaponCSBaseVData {
    public const nint m_WeaponType = 0x240;
    public const nint m_WeaponCategory = 0x244;
    public const nint m_szViewModel = 0x248;
    public const nint m_szPlayerModel = 0x328;
    public const nint m_szWorldDroppedModel = 0x408;
    public const nint m_szAimsightLensMaskModel = 0x4E8;
    public const nint m_szMagazineModel = 0x5C8;
    public const nint m_szHeatEffect = 0x6A8;
    public const nint m_szEjectBrassEffect = 0x788;
    public const nint m_szMuzzleFlashParticleAlt = 0x868;
    public const nint m_szMuzzleFlashThirdPersonParticle = 0x948;
    public const nint m_szMuzzleFlashThirdPersonParticleAlt = 0xA28;
    public const nint m_szTracerParticle = 0xB08;
    public const nint m_GearSlot = 0xBE8;
    public const nint m_GearSlotPosition = 0xBEC;
    public const nint m_DefaultLoadoutSlot = 0xBF0;
    public const nint m_sWrongTeamMsg = 0xBF8;
    public const nint m_nPrice = 0xC00;
    public const nint m_nKillAward = 0xC04;
    public const nint m_nPrimaryReserveAmmoMax = 0xC08;
    public const nint m_nSecondaryReserveAmmoMax = 0xC0C;
    public const nint m_bMeleeWeapon = 0xC10;
    public const nint m_bHasBurstMode = 0xC11;
    public const nint m_bIsRevolver = 0xC12;
    public const nint m_bCannotShootUnderwater = 0xC13;
    public const nint m_szName = 0xC18;
    public const nint m_szAnimExtension = 0xC20;
    public const nint m_eSilencerType = 0xC28;
    public const nint m_nCrosshairMinDistance = 0xC2C;
    public const nint m_nCrosshairDeltaDistance = 0xC30;
    public const nint m_flCycleTime = 0xC34;
    public const nint m_flMaxSpeed = 0xC3C;
    public const nint m_flSpread = 0xC44;
    public const nint m_flInaccuracyCrouch = 0xC4C;
    public const nint m_flInaccuracyStand = 0xC54;
    public const nint m_flInaccuracyJump = 0xC5C;
    public const nint m_flInaccuracyLand = 0xC64;
    public const nint m_flInaccuracyLadder = 0xC6C;
    public const nint m_flInaccuracyFire = 0xC74;
    public const nint m_flInaccuracyMove = 0xC7C;
    public const nint m_flRecoilAngle = 0xC84;
    public const nint m_flRecoilAngleVariance = 0xC8C;
    public const nint m_flRecoilMagnitude = 0xC94;
    public const nint m_flRecoilMagnitudeVariance = 0xC9C;
    public const nint m_nTracerFrequency = 0xCA4;
    public const nint m_flInaccuracyJumpInitial = 0xCAC;
    public const nint m_flInaccuracyJumpApex = 0xCB0;
    public const nint m_flInaccuracyReload = 0xCB4;
    public const nint m_nRecoilSeed = 0xCB8;
    public const nint m_nSpreadSeed = 0xCBC;
    public const nint m_flTimeToIdleAfterFire = 0xCC0;
    public const nint m_flIdleInterval = 0xCC4;
    public const nint m_flAttackMovespeedFactor = 0xCC8;
    public const nint m_flHeatPerShot = 0xCCC;
    public const nint m_flInaccuracyPitchShift = 0xCD0;
    public const nint m_flInaccuracyAltSoundThreshold = 0xCD4;
    public const nint m_flBotAudibleRange = 0xCD8;
    public const nint m_szUseRadioSubtitle = 0xCE0;
    public const nint m_bUnzoomsAfterShot = 0xCE8;
    public const nint m_bHideViewModelWhenZoomed = 0xCE9;
    public const nint m_nZoomLevels = 0xCEC;
    public const nint m_nZoomFOV1 = 0xCF0;
    public const nint m_nZoomFOV2 = 0xCF4;
    public const nint m_flZoomTime0 = 0xCF8;
    public const nint m_flZoomTime1 = 0xCFC;
    public const nint m_flZoomTime2 = 0xD00;
    public const nint m_flIronSightPullUpSpeed = 0xD04;
    public const nint m_flIronSightPutDownSpeed = 0xD08;
    public const nint m_flIronSightFOV = 0xD0C;
    public const nint m_flIronSightPivotForward = 0xD10;
    public const nint m_flIronSightLooseness = 0xD14;
    public const nint m_angPivotAngle = 0xD18;
    public const nint m_vecIronSightEyePos = 0xD24;
    public const nint m_nDamage = 0xD30;
    public const nint m_flHeadshotMultiplier = 0xD34;
    public const nint m_flArmorRatio = 0xD38;
    public const nint m_flPenetration = 0xD3C;
    public const nint m_flRange = 0xD40;
    public const nint m_flRangeModifier = 0xD44;
    public const nint m_flFlinchVelocityModifierLarge = 0xD48;
    public const nint m_flFlinchVelocityModifierSmall = 0xD4C;
    public const nint m_flRecoveryTimeCrouch = 0xD50;
    public const nint m_flRecoveryTimeStand = 0xD54;
    public const nint m_flRecoveryTimeCrouchFinal = 0xD58;
    public const nint m_flRecoveryTimeStandFinal = 0xD5C;
    public const nint m_nRecoveryTransitionStartBullet = 0xD60;
    public const nint m_nRecoveryTransitionEndBullet = 0xD64;
    public const nint m_flThrowVelocity = 0xD68;
    public const nint m_vSmokeColor = 0xD6C;
    public const nint m_szAnimClass = 0xD78;
}

public static class C_AttributeContainer {
    public const nint m_Item = 0x50;
    public const nint m_iExternalItemProviderRegisteredToken = 0x498;
    public const nint m_ullRegisteredAsItemID = 0x4A0;
}

public static class C_BRC4Target {
    public const nint m_bBrokenOpen = 0xE78;
    public const nint m_flRadius = 0xE7C;
}

public static class C_BarnLight {
    public const nint m_bEnabled = 0xCC0;
    public const nint m_nColorMode = 0xCC4;
    public const nint m_Color = 0xCC8;
    public const nint m_flColorTemperature = 0xCCC;
    public const nint m_flBrightness = 0xCD0;
    public const nint m_flBrightnessScale = 0xCD4;
    public const nint m_nDirectLight = 0xCD8;
    public const nint m_nBakedShadowIndex = 0xCDC;
    public const nint m_nLuminaireShape = 0xCE0;
    public const nint m_flLuminaireSize = 0xCE4;
    public const nint m_flLuminaireAnisotropy = 0xCE8;
    public const nint m_LightStyleString = 0xCF0;
    public const nint m_flLightStyleStartTime = 0xCF8;
    public const nint m_QueuedLightStyleStrings = 0xD00;
    public const nint m_LightStyleEvents = 0xD18;
    public const nint m_LightStyleTargets = 0xD30;
    public const nint m_StyleEvent = 0xD48;
    public const nint m_hLightCookie = 0xDE8;
    public const nint m_flShape = 0xDF0;
    public const nint m_flSoftX = 0xDF4;
    public const nint m_flSoftY = 0xDF8;
    public const nint m_flSkirt = 0xDFC;
    public const nint m_flSkirtNear = 0xE00;
    public const nint m_vSizeParams = 0xE04;
    public const nint m_flRange = 0xE10;
    public const nint m_vShear = 0xE14;
    public const nint m_nBakeSpecularToCubemaps = 0xE20;
    public const nint m_vBakeSpecularToCubemapsSize = 0xE24;
    public const nint m_nCastShadows = 0xE30;
    public const nint m_nShadowMapSize = 0xE34;
    public const nint m_nShadowPriority = 0xE38;
    public const nint m_bContactShadow = 0xE3C;
    public const nint m_nBounceLight = 0xE40;
    public const nint m_flBounceScale = 0xE44;
    public const nint m_flMinRoughness = 0xE48;
    public const nint m_vAlternateColor = 0xE4C;
    public const nint m_fAlternateColorBrightness = 0xE58;
    public const nint m_nFog = 0xE5C;
    public const nint m_flFogStrength = 0xE60;
    public const nint m_nFogShadows = 0xE64;
    public const nint m_flFogScale = 0xE68;
    public const nint m_flFadeSizeStart = 0xE6C;
    public const nint m_flFadeSizeEnd = 0xE70;
    public const nint m_flShadowFadeSizeStart = 0xE74;
    public const nint m_flShadowFadeSizeEnd = 0xE78;
    public const nint m_bPrecomputedFieldsValid = 0xE7C;
    public const nint m_vPrecomputedBoundsMins = 0xE80;
    public const nint m_vPrecomputedBoundsMaxs = 0xE8C;
    public const nint m_vPrecomputedOBBOrigin = 0xE98;
    public const nint m_vPrecomputedOBBAngles = 0xEA4;
    public const nint m_vPrecomputedOBBExtent = 0xEB0;
}

public static class C_BaseButton {
    public const nint m_glowEntity = 0xCC0;
    public const nint m_usable = 0xCC4;
    public const nint m_szDisplayText = 0xCC8;
}

public static class C_BaseCSGrenade {
    public const nint m_bClientPredictDelete = 0x18D0;
    public const nint m_bRedraw = 0x18F8;
    public const nint m_bIsHeldByPlayer = 0x18F9;
    public const nint m_bPinPulled = 0x18FA;
    public const nint m_bJumpThrow = 0x18FB;
    public const nint m_eThrowStatus = 0x18FC;
    public const nint m_fThrowTime = 0x1900;
    public const nint m_flThrowStrength = 0x1904;
    public const nint m_flThrowStrengthApproach = 0x1908;
    public const nint m_fDropTime = 0x190C;
}

public static class C_BaseCSGrenadeProjectile {
    public const nint m_vInitialVelocity = 0x1058;
    public const nint m_nBounces = 0x1064;
    public const nint m_nExplodeEffectIndex = 0x1068;
    public const nint m_nExplodeEffectTickBegin = 0x1070;
    public const nint m_vecExplodeEffectOrigin = 0x1074;
    public const nint m_flSpawnTime = 0x1080;
    public const nint vecLastTrailLinePos = 0x1084;
    public const nint flNextTrailLineTime = 0x1090;
    public const nint m_bExplodeEffectBegan = 0x1094;
    public const nint m_bCanCreateGrenadeTrail = 0x1095;
    public const nint m_nSnapshotTrajectoryEffectIndex = 0x1098;
    public const nint m_hSnapshotTrajectoryParticleSnapshot = 0x10A0;
    public const nint m_arrTrajectoryTrailPoints = 0x10A8;
    public const nint m_arrTrajectoryTrailPointCreationTimes = 0x10C0;
    public const nint m_flTrajectoryTrailEffectCreationTime = 0x10D8;
}

public static class C_BaseClientUIEntity {
    public const nint m_bEnabled = 0xCC8;
    public const nint m_DialogXMLName = 0xCD0;
    public const nint m_PanelClassName = 0xCD8;
    public const nint m_PanelID = 0xCE0;
}

public static class C_BaseCombatCharacter {
    public const nint m_hMyWearables = 0x1008;
    public const nint m_bloodColor = 0x1020;
    public const nint m_leftFootAttachment = 0x1024;
    public const nint m_rightFootAttachment = 0x1025;
    public const nint m_nWaterWakeMode = 0x1028;
    public const nint m_flWaterWorldZ = 0x102C;
    public const nint m_flWaterNextTraceTime = 0x1030;
    public const nint m_flFieldOfView = 0x1034;
}

public static class C_BaseDoor {
    public const nint m_bIsUsable = 0xCC0;
}

public static class C_BaseEntity {
    public const nint m_CBodyComponent = 0x30;
    public const nint m_NetworkTransmitComponent = 0x38;
    public const nint m_nLastThinkTick = 0x308;
    public const nint m_pGameSceneNode = 0x310;
    public const nint m_pRenderComponent = 0x318;
    public const nint m_pCollision = 0x320;
    public const nint m_iMaxHealth = 0x328;
    public const nint m_iHealth = 0x32C;
    public const nint m_lifeState = 0x330;
    public const nint m_bTakesDamage = 0x331;
    public const nint m_nTakeDamageFlags = 0x334;
    public const nint m_ubInterpolationFrame = 0x338;
    public const nint m_hSceneObjectController = 0x33C;
    public const nint m_nNoInterpolationTick = 0x340;
    public const nint m_nVisibilityNoInterpolationTick = 0x344;
    public const nint m_flProxyRandomValue = 0x348;
    public const nint m_iEFlags = 0x34C;
    public const nint m_nWaterType = 0x350;
    public const nint m_bInterpolateEvenWithNoModel = 0x351;
    public const nint m_bPredictionEligible = 0x352;
    public const nint m_bApplyLayerMatchIDToModel = 0x353;
    public const nint m_tokLayerMatchID = 0x354;
    public const nint m_nSubclassID = 0x358;
    public const nint m_nSimulationTick = 0x368;
    public const nint m_iCurrentThinkContext = 0x36C;
    public const nint m_aThinkFunctions = 0x370;
    public const nint m_flAnimTime = 0x388;
    public const nint m_flSimulationTime = 0x38C;
    public const nint m_nSceneObjectOverrideFlags = 0x390;
    public const nint m_bHasSuccessfullyInterpolated = 0x391;
    public const nint m_bHasAddedVarsToInterpolation = 0x392;
    public const nint m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x393;
    public const nint m_nInterpolationLatchDirtyFlags = 0x394;
    public const nint m_ListEntry = 0x39C;
    public const nint m_flCreateTime = 0x3B4;
    public const nint m_flSpeed = 0x3B8;
    public const nint m_EntClientFlags = 0x3BC;
    public const nint m_bClientSideRagdoll = 0x3BE;
    public const nint m_iTeamNum = 0x3BF;
    public const nint m_spawnflags = 0x3C0;
    public const nint m_nNextThinkTick = 0x3C4;
    public const nint m_fFlags = 0x3C8;
    public const nint m_vecAbsVelocity = 0x3CC;
    public const nint m_vecVelocity = 0x3D8;
    public const nint m_vecBaseVelocity = 0x408;
    public const nint m_hEffectEntity = 0x414;
    public const nint m_hOwnerEntity = 0x418;
    public const nint m_MoveCollide = 0x41C;
    public const nint m_MoveType = 0x41D;
    public const nint m_flWaterLevel = 0x420;
    public const nint m_fEffects = 0x424;
    public const nint m_hGroundEntity = 0x428;
    public const nint m_flFriction = 0x42C;
    public const nint m_flElasticity = 0x430;
    public const nint m_flGravityScale = 0x434;
    public const nint m_flTimeScale = 0x438;
    public const nint m_bSimulatedEveryTick = 0x43C;
    public const nint m_bAnimatedEveryTick = 0x43D;
    public const nint m_flNavIgnoreUntilTime = 0x440;
    public const nint m_hThink = 0x444;
    public const nint m_fBBoxVisFlags = 0x450;
    public const nint m_bPredictable = 0x451;
    public const nint m_bRenderWithViewModels = 0x452;
    public const nint m_nSplitUserPlayerPredictionSlot = 0x454;
    public const nint m_nFirstPredictableCommand = 0x458;
    public const nint m_nLastPredictableCommand = 0x45C;
    public const nint m_hOldMoveParent = 0x460;
    public const nint m_Particles = 0x468;
    public const nint m_vecPredictedScriptFloats = 0x490;
    public const nint m_vecPredictedScriptFloatIDs = 0x4A8;
    public const nint m_nNextScriptVarRecordID = 0x4D8;
    public const nint m_vecAngVelocity = 0x4E8;
    public const nint m_DataChangeEventRef = 0x4F4;
    public const nint m_dependencies = 0x4F8;
    public const nint m_nCreationTick = 0x510;
    public const nint m_bAnimTimeChanged = 0x529;
    public const nint m_bSimulationTimeChanged = 0x52A;
    public const nint m_sUniqueHammerID = 0x538;
}

public static class C_BaseFire {
    public const nint m_flScale = 0x540;
    public const nint m_flStartScale = 0x544;
    public const nint m_flScaleTime = 0x548;
    public const nint m_nFlags = 0x54C;
}

public static class C_BaseFlex {
    public const nint m_flexWeight = 0xE80;
    public const nint m_vLookTargetPosition = 0xE98;
    public const nint m_blinktoggle = 0xEB0;
    public const nint m_nLastFlexUpdateFrameCount = 0xF10;
    public const nint m_CachedViewTarget = 0xF14;
    public const nint m_nNextSceneEventId = 0xF20;
    public const nint m_iBlink = 0xF24;
    public const nint m_blinktime = 0xF28;
    public const nint m_prevblinktoggle = 0xF2C;
    public const nint m_iJawOpen = 0xF30;
    public const nint m_flJawOpenAmount = 0xF34;
    public const nint m_flBlinkAmount = 0xF38;
    public const nint m_iMouthAttachment = 0xF3C;
    public const nint m_iEyeAttachment = 0xF3D;
    public const nint m_bResetFlexWeightsOnModelChange = 0xF3E;
    public const nint m_nEyeOcclusionRendererBone = 0xF58;
    public const nint m_mEyeOcclusionRendererCameraToBoneTransform = 0xF5C;
    public const nint m_vEyeOcclusionRendererHalfExtent = 0xF8C;
    public const nint m_PhonemeClasses = 0xFA8;
}

public static class C_BaseFlex_Emphasized_Phoneme {
    public const nint m_sClassName = 0x0;
    public const nint m_flAmount = 0x18;
    public const nint m_bRequired = 0x1C;
    public const nint m_bBasechecked = 0x1D;
    public const nint m_bValid = 0x1E;
}

public static class C_BaseGrenade {
    public const nint m_bHasWarnedAI = 0x1008;
    public const nint m_bIsSmokeGrenade = 0x1009;
    public const nint m_bIsLive = 0x100A;
    public const nint m_DmgRadius = 0x100C;
    public const nint m_flDetonateTime = 0x1010;
    public const nint m_flWarnAITime = 0x1014;
    public const nint m_flDamage = 0x1018;
    public const nint m_iszBounceSound = 0x1020;
    public const nint m_ExplosionSound = 0x1028;
    public const nint m_hThrower = 0x1034;
    public const nint m_flNextAttack = 0x1050;
    public const nint m_hOriginalThrower = 0x1054;
}

public static class C_BaseModelEntity {
    public const nint m_CRenderComponent = 0xA10;
    public const nint m_CHitboxComponent = 0xA18;
    public const nint m_bInitModelEffects = 0xA60;
    public const nint m_bIsStaticProp = 0xA61;
    public const nint m_nLastAddDecal = 0xA64;
    public const nint m_nDecalsAdded = 0xA68;
    public const nint m_iOldHealth = 0xA6C;
    public const nint m_nRenderMode = 0xA70;
    public const nint m_nRenderFX = 0xA71;
    public const nint m_bAllowFadeInView = 0xA72;
    public const nint m_clrRender = 0xA73;
    public const nint m_vecRenderAttributes = 0xA78;
    public const nint m_LightGroup = 0xAE0;
    public const nint m_bRenderToCubemaps = 0xAE4;
    public const nint m_Collision = 0xAE8;
    public const nint m_Glow = 0xB98;
    public const nint m_flGlowBackfaceMult = 0xBF0;
    public const nint m_fadeMinDist = 0xBF4;
    public const nint m_fadeMaxDist = 0xBF8;
    public const nint m_flFadeScale = 0xBFC;
    public const nint m_flShadowStrength = 0xC00;
    public const nint m_nObjectCulling = 0xC04;
    public const nint m_nAddDecal = 0xC08;
    public const nint m_vDecalPosition = 0xC0C;
    public const nint m_vDecalForwardAxis = 0xC18;
    public const nint m_flDecalHealBloodRate = 0xC24;
    public const nint m_flDecalHealHeightRate = 0xC28;
    public const nint m_ConfigEntitiesToPropagateMaterialDecalsTo = 0xC30;
    public const nint m_vecViewOffset = 0xC48;
    public const nint m_pClientAlphaProperty = 0xC78;
    public const nint m_ClientOverrideTint = 0xC80;
    public const nint m_bUseClientOverrideTint = 0xC84;
}

public static class C_BasePlayerPawn {
    public const nint m_pWeaponServices = 0x1098;
    public const nint m_pItemServices = 0x10A0;
    public const nint m_pAutoaimServices = 0x10A8;
    public const nint m_pObserverServices = 0x10B0;
    public const nint m_pWaterServices = 0x10B8;
    public const nint m_pUseServices = 0x10C0;
    public const nint m_pFlashlightServices = 0x10C8;
    public const nint m_pCameraServices = 0x10D0;
    public const nint m_pMovementServices = 0x10D8;
    public const nint m_ServerViewAngleChanges = 0x10E8;
    public const nint m_nHighestConsumedServerViewAngleChangeIndex = 0x1138;
    public const nint v_angle = 0x113C;
    public const nint v_anglePrevious = 0x1148;
    public const nint m_iHideHUD = 0x1154;
    public const nint m_skybox3d = 0x1158;
    public const nint m_flDeathTime = 0x11E8;
    public const nint m_vecPredictionError = 0x11EC;
    public const nint m_flPredictionErrorTime = 0x11F8;
    public const nint m_flFOVSensitivityAdjust = 0x11FC;
    public const nint m_flMouseSensitivity = 0x1200;
    public const nint m_vOldOrigin = 0x1204;
    public const nint m_flOldSimulationTime = 0x1210;
    public const nint m_nLastExecutedCommandNumber = 0x1214;
    public const nint m_nLastExecutedCommandTick = 0x1218;
    public const nint m_hController = 0x121C;
    public const nint m_bIsSwappingToPredictableController = 0x1220;
}

public static class C_BasePlayerWeapon {
    public const nint m_nNextPrimaryAttackTick = 0x1550;
    public const nint m_flNextPrimaryAttackTickRatio = 0x1554;
    public const nint m_nNextSecondaryAttackTick = 0x1558;
    public const nint m_flNextSecondaryAttackTickRatio = 0x155C;
    public const nint m_iClip1 = 0x1560;
    public const nint m_iClip2 = 0x1564;
    public const nint m_pReserveAmmo = 0x1568;
}

public static class C_BasePropDoor {
    public const nint m_eDoorState = 0x10E8;
    public const nint m_modelChanged = 0x10EC;
    public const nint m_bLocked = 0x10ED;
    public const nint m_closedPosition = 0x10F0;
    public const nint m_closedAngles = 0x10FC;
    public const nint m_hMaster = 0x1108;
    public const nint m_vWhereToSetLightingOrigin = 0x110C;
}

public static class C_BaseTrigger {
    public const nint m_bDisabled = 0xCC0;
    public const nint m_bClientSidePredicted = 0xCC1;
}

public static class C_BaseViewModel {
    public const nint m_vecLastFacing = 0xE78;
    public const nint m_nViewModelIndex = 0xE84;
    public const nint m_nAnimationParity = 0xE88;
    public const nint m_flAnimationStartTime = 0xE8C;
    public const nint m_hWeapon = 0xE90;
    public const nint m_sVMName = 0xE98;
    public const nint m_sAnimationPrefix = 0xEA0;
    public const nint m_hWeaponModel = 0xEA8;
    public const nint m_iCameraAttachment = 0xEAC;
    public const nint m_vecLastCameraAngles = 0xEB0;
    public const nint m_previousElapsedDuration = 0xEBC;
    public const nint m_previousCycle = 0xEC0;
    public const nint m_nOldAnimationParity = 0xEC4;
    public const nint m_hOldLayerSequence = 0xEC8;
    public const nint m_oldLayer = 0xECC;
    public const nint m_oldLayerStartTime = 0xED0;
    public const nint m_hControlPanel = 0xED4;
}

public static class C_Beam {
    public const nint m_flFrameRate = 0xCC0;
    public const nint m_flHDRColorScale = 0xCC4;
    public const nint m_flFireTime = 0xCC8;
    public const nint m_flDamage = 0xCCC;
    public const nint m_nNumBeamEnts = 0xCD0;
    public const nint m_queryHandleHalo = 0xCD4;
    public const nint m_hBaseMaterial = 0xCF8;
    public const nint m_nHaloIndex = 0xD00;
    public const nint m_nBeamType = 0xD08;
    public const nint m_nBeamFlags = 0xD0C;
    public const nint m_hAttachEntity = 0xD10;
    public const nint m_nAttachIndex = 0xD38;
    public const nint m_fWidth = 0xD44;
    public const nint m_fEndWidth = 0xD48;
    public const nint m_fFadeLength = 0xD4C;
    public const nint m_fHaloScale = 0xD50;
    public const nint m_fAmplitude = 0xD54;
    public const nint m_fStartFrame = 0xD58;
    public const nint m_fSpeed = 0xD5C;
    public const nint m_flFrame = 0xD60;
    public const nint m_nClipStyle = 0xD64;
    public const nint m_bTurnedOff = 0xD68;
    public const nint m_vecEndPos = 0xD6C;
    public const nint m_hEndEntity = 0xD78;
}

public static class C_BreachChargeProjectile {
    public const nint m_bShouldExplode = 0x1058;
    public const nint m_weaponThatThrewMe = 0x105C;
    public const nint m_nParentBoneIndex = 0x1060;
    public const nint m_vecParentBonePos = 0x1064;
}

public static class C_BreakableProp {
    public const nint m_OnBreak = 0xEB8;
    public const nint m_OnHealthChanged = 0xEE0;
    public const nint m_OnTakeDamage = 0xF08;
    public const nint m_impactEnergyScale = 0xF30;
    public const nint m_iMinHealthDmg = 0xF34;
    public const nint m_flPressureDelay = 0xF38;
    public const nint m_hBreaker = 0xF3C;
    public const nint m_PerformanceMode = 0xF40;
    public const nint m_flDmgModBullet = 0xF44;
    public const nint m_flDmgModClub = 0xF48;
    public const nint m_flDmgModExplosive = 0xF4C;
    public const nint m_flDmgModFire = 0xF50;
    public const nint m_iszPhysicsDamageTableName = 0xF58;
    public const nint m_iszBasePropData = 0xF60;
    public const nint m_iInteractions = 0xF68;
    public const nint m_flPreventDamageBeforeTime = 0xF6C;
    public const nint m_bHasBreakPiecesOrCommands = 0xF70;
    public const nint m_explodeDamage = 0xF74;
    public const nint m_explodeRadius = 0xF78;
    public const nint m_explosionDelay = 0xF80;
    public const nint m_explosionBuildupSound = 0xF88;
    public const nint m_explosionCustomEffect = 0xF90;
    public const nint m_explosionCustomSound = 0xF98;
    public const nint m_explosionModifier = 0xFA0;
    public const nint m_hPhysicsAttacker = 0xFA8;
    public const nint m_flLastPhysicsInfluenceTime = 0xFAC;
    public const nint m_flDefaultFadeScale = 0xFB0;
    public const nint m_hLastAttacker = 0xFB4;
    public const nint m_hFlareEnt = 0xFB8;
    public const nint m_noGhostCollision = 0xFBC;
}

public static class C_BulletHitModel {
    public const nint m_matLocal = 0xE70;
    public const nint m_iBoneIndex = 0xEA0;
    public const nint m_hPlayerParent = 0xEA4;
    public const nint m_bIsHit = 0xEA8;
    public const nint m_flTimeCreated = 0xEAC;
    public const nint m_vecStartPos = 0xEB0;
}

public static class C_BumpMineProjectile {
    public const nint m_bShouldExplode = 0x1058;
    public const nint m_nParentBoneIndex = 0x105C;
    public const nint m_vecParentBonePos = 0x1060;
    public const nint m_bArmed = 0x106C;
}

public static class C_C4 {
    public const nint m_szScreenText = 0x18D0;
    public const nint m_bombdroppedlightParticleIndex = 0x18F0;
    public const nint m_bStartedArming = 0x18F4;
    public const nint m_fArmedTime = 0x18F8;
    public const nint m_bBombPlacedAnimation = 0x18FC;
    public const nint m_bIsPlantingViaUse = 0x18FD;
    public const nint m_entitySpottedState = 0x1900;
    public const nint m_nSpotRules = 0x1918;
    public const nint m_bPlayedArmingBeeps = 0x191C;
    public const nint m_bBombPlanted = 0x1923;
    public const nint m_bDroppedFromDeath = 0x1924;
}

public static class C_CSGOViewModel {
    public const nint m_bShouldIgnoreOffsetAndAccuracy = 0xF00;
    public const nint m_nWeaponParity = 0xF04;
    public const nint m_nOldWeaponParity = 0xF08;
    public const nint m_nLastKnownAssociatedWeaponEntIndex = 0xF0C;
    public const nint m_bNeedToQueueHighResComposite = 0xF10;
    public const nint m_vLoweredWeaponOffset = 0xF54;
}

public static class C_CSGO_MapPreviewCameraPath {
    public const nint m_flZFar = 0x540;
    public const nint m_flZNear = 0x544;
    public const nint m_bLoop = 0x548;
    public const nint m_bVerticalFOV = 0x549;
    public const nint m_bConstantSpeed = 0x54A;
    public const nint m_flDuration = 0x54C;
    public const nint m_flPathLength = 0x590;
    public const nint m_flPathDuration = 0x594;
}

public static class C_CSGO_MapPreviewCameraPathNode {
    public const nint m_szParentPathUniqueID = 0x540;
    public const nint m_nPathIndex = 0x548;
    public const nint m_vInTangentLocal = 0x54C;
    public const nint m_vOutTangentLocal = 0x558;
    public const nint m_flFOV = 0x564;
    public const nint m_flSpeed = 0x568;
    public const nint m_flEaseIn = 0x56C;
    public const nint m_flEaseOut = 0x570;
    public const nint m_vInTangentWorld = 0x574;
    public const nint m_vOutTangentWorld = 0x580;
}

public static class C_CSGO_PreviewModel {
    public const nint m_animgraph = 0x1008;
    public const nint m_animgraphCharacterModeString = 0x1010;
    public const nint m_defaultAnim = 0x1018;
    public const nint m_nDefaultAnimLoopMode = 0x1020;
    public const nint m_flInitialModelScale = 0x1024;
}

public static class C_CSGO_PreviewPlayer {
    public const nint m_animgraph = 0x2300;
    public const nint m_animgraphCharacterModeString = 0x2308;
    public const nint m_flInitialModelScale = 0x2310;
}

public static class C_CSGO_TeamPreviewCamera {
    public const nint m_nVariant = 0x5A0;
    public const nint m_bDofEnabled = 0x5A4;
    public const nint m_flDofNearBlurry = 0x5A8;
    public const nint m_flDofNearCrisp = 0x5AC;
    public const nint m_flDofFarCrisp = 0x5B0;
    public const nint m_flDofFarBlurry = 0x5B4;
    public const nint m_flDofTiltToGround = 0x5B8;
}

public static class C_CSGO_TeamPreviewCharacterPosition {
    public const nint m_nVariant = 0x540;
    public const nint m_nRandom = 0x544;
    public const nint m_nOrdinal = 0x548;
    public const nint m_sWeaponName = 0x550;
    public const nint m_xuid = 0x558;
    public const nint m_weaponItem = 0x560;
}

public static class C_CSGameRules {
    public const nint __m_pChainEntity = 0x8;
    public const nint m_bFreezePeriod = 0x30;
    public const nint m_bWarmupPeriod = 0x31;
    public const nint m_fWarmupPeriodEnd = 0x34;
    public const nint m_fWarmupPeriodStart = 0x38;
    public const nint m_nTotalPausedTicks = 0x3C;
    public const nint m_nPauseStartTick = 0x40;
    public const nint m_bServerPaused = 0x44;
    public const nint m_bGamePaused = 0x45;
    public const nint m_bTerroristTimeOutActive = 0x46;
    public const nint m_bCTTimeOutActive = 0x47;
    public const nint m_flTerroristTimeOutRemaining = 0x48;
    public const nint m_flCTTimeOutRemaining = 0x4C;
    public const nint m_nTerroristTimeOuts = 0x50;
    public const nint m_nCTTimeOuts = 0x54;
    public const nint m_bTechnicalTimeOut = 0x58;
    public const nint m_bMatchWaitingForResume = 0x59;
    public const nint m_iRoundTime = 0x5C;
    public const nint m_fMatchStartTime = 0x60;
    public const nint m_fRoundStartTime = 0x64;
    public const nint m_flRestartRoundTime = 0x68;
    public const nint m_bGameRestart = 0x6C;
    public const nint m_flGameStartTime = 0x70;
    public const nint m_timeUntilNextPhaseStarts = 0x74;
    public const nint m_gamePhase = 0x78;
    public const nint m_totalRoundsPlayed = 0x7C;
    public const nint m_nRoundsPlayedThisPhase = 0x80;
    public const nint m_nOvertimePlaying = 0x84;
    public const nint m_iHostagesRemaining = 0x88;
    public const nint m_bAnyHostageReached = 0x8C;
    public const nint m_bMapHasBombTarget = 0x8D;
    public const nint m_bMapHasRescueZone = 0x8E;
    public const nint m_bMapHasBuyZone = 0x8F;
    public const nint m_bIsQueuedMatchmaking = 0x90;
    public const nint m_nQueuedMatchmakingMode = 0x94;
    public const nint m_bIsValveDS = 0x98;
    public const nint m_bLogoMap = 0x99;
    public const nint m_bPlayAllStepSoundsOnServer = 0x9A;
    public const nint m_iNumGunGameProgressiveWeaponsCT = 0x9C;
    public const nint m_iNumGunGameProgressiveWeaponsT = 0xA0;
    public const nint m_iSpectatorSlotCount = 0xA4;
    public const nint m_GGProgressiveWeaponOrderCT = 0xA8;
    public const nint m_GGProgressiveWeaponOrderT = 0x198;
    public const nint m_GGProgressiveWeaponKillUpgradeOrderCT = 0x288;
    public const nint m_GGProgressiveWeaponKillUpgradeOrderT = 0x378;
    public const nint m_MatchDevice = 0x468;
    public const nint m_bHasMatchStarted = 0x46C;
    public const nint m_nNextMapInMapgroup = 0x470;
    public const nint m_szTournamentEventName = 0x474;
    public const nint m_szTournamentEventStage = 0x674;
    public const nint m_szMatchStatTxt = 0x874;
    public const nint m_szTournamentPredictionsTxt = 0xA74;
    public const nint m_nTournamentPredictionsPct = 0xC74;
    public const nint m_flCMMItemDropRevealStartTime = 0xC78;
    public const nint m_flCMMItemDropRevealEndTime = 0xC7C;
    public const nint m_bIsDroppingItems = 0xC80;
    public const nint m_bIsQuestEligible = 0xC81;
    public const nint m_nGuardianModeWaveNumber = 0xC84;
    public const nint m_nGuardianModeSpecialKillsRemaining = 0xC88;
    public const nint m_nGuardianModeSpecialWeaponNeeded = 0xC8C;
    public const nint m_nGuardianGrenadesToGiveBots = 0xC90;
    public const nint m_nNumHeaviesToSpawn = 0xC94;
    public const nint m_numGlobalGiftsGiven = 0xC98;
    public const nint m_numGlobalGifters = 0xC9C;
    public const nint m_numGlobalGiftsPeriodSeconds = 0xCA0;
    public const nint m_arrFeaturedGiftersAccounts = 0xCA4;
    public const nint m_arrFeaturedGiftersGifts = 0xCB4;
    public const nint m_arrProhibitedItemIndices = 0xCC4;
    public const nint m_arrTournamentActiveCasterAccounts = 0xD8C;
    public const nint m_numBestOfMaps = 0xD9C;
    public const nint m_nHalloweenMaskListSeed = 0xDA0;
    public const nint m_bBombDropped = 0xDA4;
    public const nint m_bBombPlanted = 0xDA5;
    public const nint m_iRoundWinStatus = 0xDA8;
    public const nint m_eRoundWinReason = 0xDAC;
    public const nint m_bTCantBuy = 0xDB0;
    public const nint m_bCTCantBuy = 0xDB1;
    public const nint m_flGuardianBuyUntilTime = 0xDB4;
    public const nint m_iMatchStats_RoundResults = 0xDB8;
    public const nint m_iMatchStats_PlayersAlive_CT = 0xE30;
    public const nint m_iMatchStats_PlayersAlive_T = 0xEA8;
    public const nint m_TeamRespawnWaveTimes = 0xF20;
    public const nint m_flNextRespawnWave = 0xFA0;
    public const nint m_nServerQuestID = 0x1020;
    public const nint m_vMinimapMins = 0x1024;
    public const nint m_vMinimapMaxs = 0x1030;
    public const nint m_MinimapVerticalSectionHeights = 0x103C;
    public const nint m_bDontIncrementCoopWave = 0x105C;
    public const nint m_bSpawnedTerrorHuntHeavy = 0x105D;
    public const nint m_nEndMatchMapGroupVoteTypes = 0x1060;
    public const nint m_nEndMatchMapGroupVoteOptions = 0x1088;
    public const nint m_nEndMatchMapVoteWinner = 0x10B0;
    public const nint m_iNumConsecutiveCTLoses = 0x10B4;
    public const nint m_iNumConsecutiveTerroristLoses = 0x10B8;
    public const nint m_bMarkClientStopRecordAtRoundEnd = 0x10D8;
    public const nint m_bMatchAbortedDueToPlayerBan = 0x1130;
    public const nint m_bHasTriggeredRoundStartMusic = 0x1131;
    public const nint m_bHasTriggeredCoopSpawnReset = 0x1132;
    public const nint m_bSwitchingTeamsAtRoundReset = 0x1133;
    public const nint m_iMaxGunGameProgressiveWeaponIndex = 0x1134;
    public const nint m_pGameModeRules = 0x1150;
    public const nint m_SurvivalRules = 0x1158;
    public const nint m_RetakeRules = 0x1818;
    public const nint m_nMatchEndCount = 0x1930;
    public const nint m_nTTeamIntroVariant = 0x1934;
    public const nint m_nCTTeamIntroVariant = 0x1938;
    public const nint m_bTeamIntroPeriod = 0x193C;
    public const nint m_flLastPerfSampleTime = 0x28F8;
}

public static class C_CSGameRulesProxy {
    public const nint m_pGameRules = 0x540;
}

public static class C_CSObserverPawn {
    public const nint m_hDetectParentChange = 0x17C8;
}

public static class C_CSPlayerPawn {
    public const nint m_pBulletServices = 0x17C8;
    public const nint m_pHostageServices = 0x17D0;
    public const nint m_pBuyServices = 0x17D8;
    public const nint m_pGlowServices = 0x17E0;
    public const nint m_bIsBuyMenuOpen = 0x17E8;
    public const nint m_iRetakesOffering = 0x18D0;
    public const nint m_iRetakesOfferingCard = 0x18D4;
    public const nint m_bRetakesHasDefuseKit = 0x18D8;
    public const nint m_bRetakesMVPLastRound = 0x18D9;
    public const nint m_iRetakesMVPBoostItem = 0x18DC;
    public const nint m_RetakesMVPBoostExtraUtility = 0x18E0;
    public const nint m_bNeedToReApplyGloves = 0x1900;
    public const nint m_EconGloves = 0x1908;
    public const nint m_bMustSyncRagdollState = 0x1D50;
    public const nint m_nRagdollDamageBone = 0x1D54;
    public const nint m_vRagdollDamageForce = 0x1D58;
    public const nint m_vRagdollDamagePosition = 0x1D64;
    public const nint m_szRagdollDamageWeaponName = 0x1D70;
    public const nint m_bRagdollDamageHeadshot = 0x1DB0;
    public const nint m_bLastHeadBoneTransformIsValid = 0x22D0;
    public const nint m_qDeathEyeAngles = 0x22EC;
    public const nint m_bSkipOneHeadConstraintUpdate = 0x22F8;
}

public static class C_CSPlayerPawnBase {
    public const nint m_pActionTrackingServices = 0x1240;
    public const nint m_pPingServices = 0x1248;
    public const nint m_pViewModelServices = 0x1250;
    public const nint m_fRenderingClipPlane = 0x1258;
    public const nint m_nLastClipPlaneSetupFrame = 0x1268;
    public const nint m_vecLastClipCameraPos = 0x126C;
    public const nint m_vecLastClipCameraForward = 0x1278;
    public const nint m_bClipHitStaticWorld = 0x1284;
    public const nint m_bCachedPlaneIsValid = 0x1285;
    public const nint m_pClippingWeapon = 0x1288;
    public const nint m_bHasFemaleVoice = 0x1290;
    public const nint m_previousPlayerState = 0x1294;
    public const nint m_flLastCollisionCeiling = 0x1298;
    public const nint m_flLastCollisionCeilingChangeTime = 0x129C;
    public const nint m_bInLanding = 0x12B8;
    public const nint m_flLandingTime = 0x12BC;
    public const nint m_grenadeParameterStashTime = 0x12C0;
    public const nint m_bGrenadeParametersStashed = 0x12C4;
    public const nint m_angStashedShootAngles = 0x12C8;
    public const nint m_vecStashedGrenadeThrowPosition = 0x12D4;
    public const nint m_vecStashedVelocity = 0x12E0;
    public const nint m_angShootAngleHistory = 0x12EC;
    public const nint m_vecThrowPositionHistory = 0x1304;
    public const nint m_vecVelocityHistory = 0x131C;
    public const nint m_thirdPersonHeading = 0x1338;
    public const nint m_flSlopeDropOffset = 0x1350;
    public const nint m_flSlopeDropHeight = 0x1360;
    public const nint m_vHeadConstraintOffset = 0x1370;
    public const nint m_bIsScoped = 0x1388;
    public const nint m_bIsWalking = 0x1389;
    public const nint m_bResumeZoom = 0x138A;
    public const nint m_iPlayerState = 0x138C;
    public const nint m_bIsDefusing = 0x1390;
    public const nint m_bIsGrabbingHostage = 0x1391;
    public const nint m_iBlockingUseActionInProgress = 0x1394;
    public const nint m_bIsRescuing = 0x1398;
    public const nint m_fImmuneToGunGameDamageTime = 0x139C;
    public const nint m_fImmuneToGunGameDamageTimeLast = 0x13A0;
    public const nint m_bGunGameImmunity = 0x13A4;
    public const nint m_bHasMovedSinceSpawn = 0x13A5;
    public const nint m_bMadeFinalGunGameProgressiveKill = 0x13A6;
    public const nint m_iGunGameProgressiveWeaponIndex = 0x13A8;
    public const nint m_iNumGunGameTRKillPoints = 0x13AC;
    public const nint m_iNumGunGameKillsWithCurrentWeapon = 0x13B0;
    public const nint m_unTotalRoundDamageDealt = 0x13B4;
    public const nint m_fMolotovUseTime = 0x13B8;
    public const nint m_fMolotovDamageTime = 0x13BC;
    public const nint m_bInBombZone = 0x13C0;
    public const nint m_nWhichBombZone = 0x13C4;
    public const nint m_bInBuyZone = 0x13C8;
    public const nint m_bInNoDefuseArea = 0x13C9;
    public const nint m_iThrowGrenadeCounter = 0x13CC;
    public const nint m_bWaitForNoAttack = 0x13D0;
    public const nint m_flGuardianTooFarDistFrac = 0x13D4;
    public const nint m_flDetectedByEnemySensorTime = 0x13D8;
    public const nint m_flNextGuardianTooFarWarning = 0x13DC;
    public const nint m_bSuppressGuardianTooFarWarningAudio = 0x13E0;
    public const nint m_bKilledByTaser = 0x13E1;
    public const nint m_iMoveState = 0x13E4;
    public const nint m_bCanMoveDuringFreezePeriod = 0x13E8;
    public const nint m_isCurrentGunGameLeader = 0x13E9;
    public const nint m_isCurrentGunGameTeamLeader = 0x13EA;
    public const nint m_flLowerBodyYawTarget = 0x13EC;
    public const nint m_bStrafing = 0x13F0;
    public const nint m_szLastPlaceName = 0x13F1;
    public const nint m_flLastSpawnTimeIndex = 0x1404;
    public const nint m_flEmitSoundTime = 0x1408;
    public const nint m_iAddonBits = 0x140C;
    public const nint m_iPrimaryAddon = 0x1410;
    public const nint m_iSecondaryAddon = 0x1414;
    public const nint m_iProgressBarDuration = 0x1418;
    public const nint m_flProgressBarStartTime = 0x141C;
    public const nint m_flStamina = 0x1420;
    public const nint m_iDirection = 0x1424;
    public const nint m_iShotsFired = 0x1428;
    public const nint m_bNightVisionOn = 0x142C;
    public const nint m_bHasNightVision = 0x142D;
    public const nint m_flVelocityModifier = 0x1430;
    public const nint m_flHitHeading = 0x1434;
    public const nint m_nHitBodyPart = 0x1438;
    public const nint m_iStartAccount = 0x143C;
    public const nint m_bIsSpawnRappelling = 0x1440;
    public const nint m_vecSpawnRappellingRopeOrigin = 0x1444;
    public const nint m_flSpawnRappellingFadeOutForClientViewOffset = 0x1450;
    public const nint m_nSurvivalTeam = 0x1454;
    public const nint m_hSurvivalAssassinationTarget = 0x1458;
    public const nint m_flHealthShotBoostExpirationTime = 0x145C;
    public const nint m_flLastKnownParachuteScreenEffectAmount = 0x1460;
    public const nint m_vecIntroStartEyePosition = 0x1464;
    public const nint m_vecIntroStartPlayerForward = 0x1470;
    public const nint m_flClientDeathTime = 0x147C;
    public const nint m_flNightVisionAlpha = 0x1488;
    public const nint m_bScreenTearFrameCaptured = 0x148C;
    public const nint m_flFlashBangTime = 0x1490;
    public const nint m_flFlashScreenshotAlpha = 0x1494;
    public const nint m_flFlashOverlayAlpha = 0x1498;
    public const nint m_bFlashBuildUp = 0x149C;
    public const nint m_bFlashDspHasBeenCleared = 0x149D;
    public const nint m_bFlashScreenshotHasBeenGrabbed = 0x149E;
    public const nint m_flFlashMaxAlpha = 0x14A0;
    public const nint m_flFlashDuration = 0x14A4;
    public const nint m_flLastFiredWeaponTime = 0x14A8;
    public const nint m_lastStandingPos = 0x14AC;
    public const nint m_vecLastMuzzleFlashPos = 0x14B8;
    public const nint m_angLastMuzzleFlashAngle = 0x14C4;
    public const nint m_hMuzzleFlashShape = 0x14D0;
    public const nint m_iHealthBarRenderMaskIndex = 0x14D4;
    public const nint m_flHealthFadeValue = 0x14D8;
    public const nint m_flHealthFadeAlpha = 0x14DC;
    public const nint m_nMyCollisionGroup = 0x14E0;
    public const nint m_ignoreLadderJumpTime = 0x14E4;
    public const nint m_ladderSurpressionTimer = 0x14E8;
    public const nint m_lastLadderNormal = 0x1500;
    public const nint m_lastLadderPos = 0x150C;
    public const nint m_flDeathCCWeight = 0x1520;
    public const nint m_bOldIsScoped = 0x1524;
    public const nint m_flPrevRoundEndTime = 0x1528;
    public const nint m_flPrevMatchEndTime = 0x152C;
    public const nint m_unCurrentEquipmentValue = 0x1530;
    public const nint m_unRoundStartEquipmentValue = 0x1532;
    public const nint m_unFreezetimeEndEquipmentValue = 0x1534;
    public const nint m_passiveItems = 0x1536;
    public const nint m_vecThirdPersonViewPositionOverride = 0x153C;
    public const nint m_nHeavyAssaultSuitCooldownRemaining = 0x1548;
    public const nint m_ArmorValue = 0x154C;
    public const nint m_angEyeAngles = 0x1550;
    public const nint m_bInHostageRescueZone = 0x1568;
    public const nint m_fNextThinkPushAway = 0x156C;
    public const nint m_bShouldAutobuyDMWeapons = 0x1570;
    public const nint m_bShouldAutobuyNow = 0x1571;
    public const nint m_bHud_MiniScoreHidden = 0x1572;
    public const nint m_bHud_RadarHidden = 0x1573;
    public const nint m_nLastKillerIndex = 0x1574;
    public const nint m_nLastConcurrentKilled = 0x1578;
    public const nint m_nDeathCamMusic = 0x157C;
    public const nint m_iIDEntIndex = 0x1580;
    public const nint m_delayTargetIDTimer = 0x1588;
    public const nint m_iTargetedWeaponEntIndex = 0x15A0;
    public const nint m_iOldIDEntIndex = 0x15A4;
    public const nint m_holdTargetIDTimer = 0x15A8;
    public const nint m_flCurrentMusicStartTime = 0x160C;
    public const nint m_flMusicRoundStartTime = 0x1610;
    public const nint m_bDeferStartMusicOnWarmup = 0x1614;
    public const nint m_cycleLatch = 0x1618;
    public const nint m_serverIntendedCycle = 0x161C;
    public const nint m_vecPlayerPatchEconIndices = 0x1620;
    public const nint m_bHideTargetID = 0x163C;
    public const nint m_nextTaserShakeTime = 0x1640;
    public const nint m_firstTaserShakeTime = 0x1644;
    public const nint m_flLastSmokeOverlayAlpha = 0x1648;
    public const nint m_vLastSmokeOverlayColor = 0x164C;
    public const nint m_nPlayerSmokedFx = 0x1658;
    public const nint m_flNextMagDropTime = 0x165C;
    public const nint m_nLastMagDropAttachmentIndex = 0x1660;
    public const nint m_vecBulletHitModels = 0x1668;
    public const nint m_vecPickupModelSlerpers = 0x1680;
    public const nint m_vecLastAliveLocalVelocity = 0x1698;
    public const nint m_flLastNearbyItemHighlightCheck = 0x16A4;
    public const nint m_bInSurvivalDangerZone = 0x16A8;
    public const nint m_bNearDangerZone = 0x16A9;
    public const nint m_entitySpottedState = 0x16E0;
    public const nint m_flTimeOfLastInjury = 0x16F8;
    public const nint m_nRelativeDirectionOfLastInjury = 0x16FC;
    public const nint m_nSurvivalTeamNumber = 0x1700;
    public const nint m_flNextSprayDecalTime = 0x1704;
    public const nint m_bPreviouslyInBuyZone = 0x1708;
    public const nint m_unPreviousWeaponHash = 0x170C;
    public const nint m_unWeaponHash = 0x1710;
    public const nint m_bPrevDefuser = 0x1714;
    public const nint m_bPrevHelmet = 0x1715;
    public const nint m_nPrevArmorVal = 0x1718;
    public const nint m_nPrevGrenadeAmmoCount = 0x171C;
    public const nint m_bGuardianShouldSprayCustomXMark = 0x1720;
    public const nint m_aimPunchAngle = 0x1724;
    public const nint m_aimPunchAngleVel = 0x1730;
    public const nint m_aimPunchTickBase = 0x173C;
    public const nint m_aimPunchTickFraction = 0x1740;
    public const nint m_aimPunchCache = 0x1748;
    public const nint m_flOldFallVelocity = 0x1768;
    public const nint m_bHasDeathInfo = 0x176C;
    public const nint m_flDeathInfoTime = 0x1770;
    public const nint m_vecDeathInfoOrigin = 0x1774;
    public const nint m_bKilledByHeadshot = 0x1780;
    public const nint m_hOriginalController = 0x1784;
    public const nint m_flLandseconds = 0x1798;
}

public static class C_CSPlayerResource {
    public const nint m_bHostageAlive = 0x540;
    public const nint m_isHostageFollowingSomeone = 0x54C;
    public const nint m_iHostageEntityIDs = 0x558;
    public const nint m_bombsiteCenterA = 0x588;
    public const nint m_bombsiteCenterB = 0x594;
    public const nint m_hostageRescueX = 0x5A0;
    public const nint m_hostageRescueY = 0x5B0;
    public const nint m_hostageRescueZ = 0x5C0;
    public const nint m_bEndMatchNextMapAllVoted = 0x5D0;
    public const nint m_foundGoalPositions = 0x5D1;
}

public static class C_CSPropExplodingBarrelTop {
    public const nint m_flOverrideAlpha = 0xFC8;
}

public static class C_CSTeam {
    public const nint m_szTeamMatchStat = 0x5F8;
    public const nint m_numMapVictories = 0x7F8;
    public const nint m_bSurrendered = 0x7FC;
    public const nint m_scoreFirstHalf = 0x800;
    public const nint m_scoreSecondHalf = 0x804;
    public const nint m_scoreOvertime = 0x808;
    public const nint m_szClanTeamname = 0x80C;
    public const nint m_iClanID = 0x890;
    public const nint m_nGGLeaderSlot_CT = 0x894;
    public const nint m_nGGLeaderSlot_T = 0x898;
    public const nint m_szTeamFlagImage = 0x89C;
    public const nint m_szTeamLogoImage = 0x8A4;
}

public static class C_Chicken {
    public const nint m_hHolidayHatAddon = 0x10E0;
    public const nint m_jumpedThisFrame = 0x10E4;
    public const nint m_leader = 0x10E8;
    public const nint m_AttributeManager = 0x10F0;
    public const nint m_OriginalOwnerXuidLow = 0x1598;
    public const nint m_OriginalOwnerXuidHigh = 0x159C;
    public const nint m_bAttributesInitialized = 0x15A0;
    public const nint m_hWaterWakeParticles = 0x15A4;
}

public static class C_ClientRagdoll {
    public const nint m_bFadeOut = 0xE70;
    public const nint m_bImportant = 0xE71;
    public const nint m_flEffectTime = 0xE74;
    public const nint m_gibDespawnTime = 0xE78;
    public const nint m_iCurrentFriction = 0xE7C;
    public const nint m_iMinFriction = 0xE80;
    public const nint m_iMaxFriction = 0xE84;
    public const nint m_iFrictionAnimState = 0xE88;
    public const nint m_bReleaseRagdoll = 0xE8C;
    public const nint m_iEyeAttachment = 0xE8D;
    public const nint m_bFadingOut = 0xE8E;
    public const nint m_flScaleEnd = 0xE90;
    public const nint m_flScaleTimeStart = 0xEB8;
    public const nint m_flScaleTimeEnd = 0xEE0;
}

public static class C_ColorCorrection {
    public const nint m_vecOrigin = 0x540;
    public const nint m_MinFalloff = 0x54C;
    public const nint m_MaxFalloff = 0x550;
    public const nint m_flFadeInDuration = 0x554;
    public const nint m_flFadeOutDuration = 0x558;
    public const nint m_flMaxWeight = 0x55C;
    public const nint m_flCurWeight = 0x560;
    public const nint m_netlookupFilename = 0x564;
    public const nint m_bEnabled = 0x764;
    public const nint m_bMaster = 0x765;
    public const nint m_bClientSide = 0x766;
    public const nint m_bExclusive = 0x767;
    public const nint m_bEnabledOnClient = 0x768;
    public const nint m_flCurWeightOnClient = 0x76C;
    public const nint m_bFadingIn = 0x770;
    public const nint m_flFadeStartWeight = 0x774;
    public const nint m_flFadeStartTime = 0x778;
    public const nint m_flFadeDuration = 0x77C;
}

public static class C_ColorCorrectionVolume {
    public const nint m_LastEnterWeight = 0xCC8;
    public const nint m_LastEnterTime = 0xCCC;
    public const nint m_LastExitWeight = 0xCD0;
    public const nint m_LastExitTime = 0xCD4;
    public const nint m_bEnabled = 0xCD8;
    public const nint m_MaxWeight = 0xCDC;
    public const nint m_FadeDuration = 0xCE0;
    public const nint m_Weight = 0xCE4;
    public const nint m_lookupFilename = 0xCE8;
}

public static class C_CommandContext {
    public const nint needsprocessing = 0x0;
    public const nint command_number = 0x78;
}

public static class C_CsmFovOverride {
    public const nint m_cameraName = 0x540;
    public const nint m_flCsmFovOverrideValue = 0x548;
}

public static class C_DangerZone {
    public const nint m_vecDangerZoneOriginStartedAt = 0x540;
    public const nint m_flBombLaunchTime = 0x54C;
    public const nint m_flExtraRadius = 0x550;
    public const nint m_flExtraRadiusStartTime = 0x554;
    public const nint m_flExtraRadiusTotalLerpTime = 0x558;
    public const nint m_nDropOrder = 0x55C;
    public const nint m_iWave = 0x560;
}

public static class C_DangerZoneController {
    public const nint m_bDangerZoneControllerEnabled = 0x540;
    public const nint m_bMissionControlledExplosions = 0x541;
    public const nint m_vecEndGameCircleStart = 0x544;
    public const nint m_vecEndGameCircleEnd = 0x550;
    public const nint m_flStartTime = 0x55C;
    public const nint m_flFinalExpansionTime = 0x560;
    public const nint m_DangerZones = 0x564;
    public const nint m_flWaveEndTimes = 0x60C;
    public const nint m_hTheFinalZone = 0x620;
}

public static class C_DecoyProjectile {
    public const nint m_flTimeParticleEffectSpawn = 0x1100;
}

public static class C_Drone {
    public const nint m_vecClientSideTrailPositions = 0xFD8;
    public const nint m_hMoveToThisEntity = 0xFF0;
    public const nint m_hDeliveryCargo = 0xFF4;
    public const nint m_hRecentCargo = 0xFF8;
    public const nint m_bPilotTakeoverAllowed = 0xFFC;
    public const nint m_hPotentialCargo = 0x1000;
    public const nint m_hCurrentPilot = 0x1004;
    public const nint m_vecTagPositions = 0x1008;
    public const nint m_vecTagIncrements = 0x1128;
    public const nint m_flLastTimeCargoWasAttached = 0x1188;
    public const nint m_vecLastKnownCargoAttachPositions = 0x118C;
    public const nint m_vecThrusterLastPos = 0x11BC;
    public const nint m_vecThrusterSmoothVel = 0x11C8;
    public const nint m_vecThrusterSmoothAccel = 0x11D4;
    public const nint m_flJammedEffectAmount = 0x11E0;
}

public static class C_Dronegun {
    public const nint m_vecAttentionTarget = 0xE78;
    public const nint m_vecTargetOffset = 0xE84;
    public const nint m_bHasTarget = 0xE90;
    public const nint m_vecAttentionCurrent = 0xE94;
    public const nint m_nPoseParamPitch = 0xEA0;
    public const nint m_nPoseParamYaw = 0xEA4;
    public const nint m_bVarInit = 0xEA8;
    public const nint m_nAttachMuzzle = 0xEA9;
    public const nint m_flLastClientThinkTime = 0xEAC;
    public const nint m_flNextSpark = 0xEB0;
    public const nint m_nBoneOverrideIndex = 0xEB4;
    public const nint m_vecLaserTracePos = 0xEB8;
}

public static class C_DynamicLight {
    public const nint m_Flags = 0xCC0;
    public const nint m_LightStyle = 0xCC1;
    public const nint m_Radius = 0xCC4;
    public const nint m_Exponent = 0xCC8;
    public const nint m_InnerAngle = 0xCCC;
    public const nint m_OuterAngle = 0xCD0;
    public const nint m_SpotRadius = 0xCD4;
}

public static class C_DynamicProp {
    public const nint m_bUseHitboxesForRenderBox = 0xFC0;
    public const nint m_bUseAnimGraph = 0xFC1;
    public const nint m_pOutputAnimBegun = 0xFC8;
    public const nint m_pOutputAnimOver = 0xFF0;
    public const nint m_pOutputAnimLoopCycleOver = 0x1018;
    public const nint m_OnAnimReachedStart = 0x1040;
    public const nint m_OnAnimReachedEnd = 0x1068;
    public const nint m_iszDefaultAnim = 0x1090;
    public const nint m_nDefaultAnimLoopMode = 0x1098;
    public const nint m_bAnimateOnServer = 0x109C;
    public const nint m_bRandomizeCycle = 0x109D;
    public const nint m_bStartDisabled = 0x109E;
    public const nint m_bScriptedMovement = 0x109F;
    public const nint m_bFiredStartEndOutput = 0x10A0;
    public const nint m_bForceNpcExclude = 0x10A1;
    public const nint m_bCreateNonSolid = 0x10A2;
    public const nint m_bIsOverrideProp = 0x10A3;
    public const nint m_iInitialGlowState = 0x10A4;
    public const nint m_nGlowRange = 0x10A8;
    public const nint m_nGlowRangeMin = 0x10AC;
    public const nint m_glowColor = 0x10B0;
    public const nint m_nGlowTeam = 0x10B4;
    public const nint m_iCachedFrameCount = 0x10B8;
    public const nint m_vecCachedRenderMins = 0x10BC;
    public const nint m_vecCachedRenderMaxs = 0x10C8;
}

public static class C_EconEntity {
    public const nint m_flFlexDelayTime = 0x1018;
    public const nint m_flFlexDelayedWeight = 0x1020;
    public const nint m_bAttributesInitialized = 0x1028;
    public const nint m_AttributeManager = 0x1030;
    public const nint m_OriginalOwnerXuidLow = 0x14D8;
    public const nint m_OriginalOwnerXuidHigh = 0x14DC;
    public const nint m_nFallbackPaintKit = 0x14E0;
    public const nint m_nFallbackSeed = 0x14E4;
    public const nint m_flFallbackWear = 0x14E8;
    public const nint m_nFallbackStatTrak = 0x14EC;
    public const nint m_bClientside = 0x14F0;
    public const nint m_bParticleSystemsCreated = 0x14F1;
    public const nint m_vecAttachedParticles = 0x14F8;
    public const nint m_hViewmodelAttachment = 0x1510;
    public const nint m_iOldTeam = 0x1514;
    public const nint m_bAttachmentDirty = 0x1518;
    public const nint m_nUnloadedModelIndex = 0x151C;
    public const nint m_iNumOwnerValidationRetries = 0x1520;
    public const nint m_hOldProvidee = 0x1530;
    public const nint m_vecAttachedModels = 0x1538;
}

public static class C_EconEntity_AttachedModelData_t {
    public const nint m_iModelDisplayFlags = 0x0;
}

public static class C_EconItemView {
    public const nint m_bInventoryImageRgbaRequested = 0x60;
    public const nint m_bInventoryImageTriedCache = 0x61;
    public const nint m_nInventoryImageRgbaWidth = 0x80;
    public const nint m_nInventoryImageRgbaHeight = 0x84;
    public const nint m_szCurrentLoadCachedFileName = 0x88;
    public const nint m_bRestoreCustomMaterialAfterPrecache = 0x1B8;
    public const nint m_iItemDefinitionIndex = 0x1BA;
    public const nint m_iEntityQuality = 0x1BC;
    public const nint m_iEntityLevel = 0x1C0;
    public const nint m_iItemID = 0x1C8;
    public const nint m_iItemIDHigh = 0x1D0;
    public const nint m_iItemIDLow = 0x1D4;
    public const nint m_iAccountID = 0x1D8;
    public const nint m_iInventoryPosition = 0x1DC;
    public const nint m_bInitialized = 0x1E8;
    public const nint m_bIsStoreItem = 0x1E9;
    public const nint m_bIsTradeItem = 0x1EA;
    public const nint m_iEntityQuantity = 0x1EC;
    public const nint m_iRarityOverride = 0x1F0;
    public const nint m_iQualityOverride = 0x1F4;
    public const nint m_unClientFlags = 0x1F8;
    public const nint m_unOverrideStyle = 0x1F9;
    public const nint m_AttributeList = 0x210;
    public const nint m_NetworkedDynamicAttributes = 0x270;
    public const nint m_szCustomName = 0x2D0;
    public const nint m_szCustomNameOverride = 0x371;
    public const nint m_bInitializedTags = 0x440;
}

public static class C_EconWearable {
    public const nint m_nForceSkin = 0x1550;
    public const nint m_bAlwaysAllow = 0x1554;
}

public static class C_EntityDissolve {
    public const nint m_flStartTime = 0xCC8;
    public const nint m_flFadeInStart = 0xCCC;
    public const nint m_flFadeInLength = 0xCD0;
    public const nint m_flFadeOutModelStart = 0xCD4;
    public const nint m_flFadeOutModelLength = 0xCD8;
    public const nint m_flFadeOutStart = 0xCDC;
    public const nint m_flFadeOutLength = 0xCE0;
    public const nint m_flNextSparkTime = 0xCE4;
    public const nint m_nDissolveType = 0xCE8;
    public const nint m_vDissolverOrigin = 0xCEC;
    public const nint m_nMagnitude = 0xCF8;
    public const nint m_bCoreExplode = 0xCFC;
    public const nint m_bLinkedToServerEnt = 0xCFD;
}

public static class C_EntityFlame {
    public const nint m_hEntAttached = 0x540;
    public const nint m_hOldAttached = 0x568;
    public const nint m_bCheapEffect = 0x56C;
}

public static class C_EnvCombinedLightProbeVolume {
    public const nint m_Color = 0x1610;
    public const nint m_flBrightness = 0x1614;
    public const nint m_hCubemapTexture = 0x1618;
    public const nint m_bCustomCubemapTexture = 0x1620;
    public const nint m_hLightProbeTexture = 0x1628;
    public const nint m_hLightProbeDirectLightIndicesTexture = 0x1630;
    public const nint m_hLightProbeDirectLightScalarsTexture = 0x1638;
    public const nint m_hLightProbeDirectLightShadowsTexture = 0x1640;
    public const nint m_vBoxMins = 0x1648;
    public const nint m_vBoxMaxs = 0x1654;
    public const nint m_LightGroups = 0x1660;
    public const nint m_bMoveable = 0x1668;
    public const nint m_nHandshake = 0x166C;
    public const nint m_nEnvCubeMapArrayIndex = 0x1670;
    public const nint m_nPriority = 0x1674;
    public const nint m_bStartDisabled = 0x1678;
    public const nint m_flEdgeFadeDist = 0x167C;
    public const nint m_vEdgeFadeDists = 0x1680;
    public const nint m_nLightProbeSizeX = 0x168C;
    public const nint m_nLightProbeSizeY = 0x1690;
    public const nint m_nLightProbeSizeZ = 0x1694;
    public const nint m_nLightProbeAtlasX = 0x1698;
    public const nint m_nLightProbeAtlasY = 0x169C;
    public const nint m_nLightProbeAtlasZ = 0x16A0;
    public const nint m_bEnabled = 0x16B9;
}

public static class C_EnvCubemap {
    public const nint m_hCubemapTexture = 0x630;
    public const nint m_bCustomCubemapTexture = 0x638;
    public const nint m_flInfluenceRadius = 0x63C;
    public const nint m_vBoxProjectMins = 0x640;
    public const nint m_vBoxProjectMaxs = 0x64C;
    public const nint m_LightGroups = 0x658;
    public const nint m_bMoveable = 0x660;
    public const nint m_nHandshake = 0x664;
    public const nint m_nEnvCubeMapArrayIndex = 0x668;
    public const nint m_nPriority = 0x66C;
    public const nint m_flEdgeFadeDist = 0x670;
    public const nint m_vEdgeFadeDists = 0x674;
    public const nint m_flDiffuseScale = 0x680;
    public const nint m_bStartDisabled = 0x684;
    public const nint m_bDefaultEnvMap = 0x685;
    public const nint m_bDefaultSpecEnvMap = 0x686;
    public const nint m_bIndoorCubeMap = 0x687;
    public const nint m_bCopyDiffuseFromDefaultCubemap = 0x688;
    public const nint m_bEnabled = 0x698;
}

public static class C_EnvCubemapFog {
    public const nint m_flEndDistance = 0x540;
    public const nint m_flStartDistance = 0x544;
    public const nint m_flFogFalloffExponent = 0x548;
    public const nint m_bHeightFogEnabled = 0x54C;
    public const nint m_flFogHeightWidth = 0x550;
    public const nint m_flFogHeightEnd = 0x554;
    public const nint m_flFogHeightStart = 0x558;
    public const nint m_flFogHeightExponent = 0x55C;
    public const nint m_flLODBias = 0x560;
    public const nint m_bActive = 0x564;
    public const nint m_bStartDisabled = 0x565;
    public const nint m_flFogMaxOpacity = 0x568;
    public const nint m_nCubemapSourceType = 0x56C;
    public const nint m_hSkyMaterial = 0x570;
    public const nint m_iszSkyEntity = 0x578;
    public const nint m_hFogCubemapTexture = 0x580;
    public const nint m_bHasHeightFogEnd = 0x588;
    public const nint m_bFirstTime = 0x589;
}

public static class C_EnvDecal {
    public const nint m_hDecalMaterial = 0xCC0;
    public const nint m_flWidth = 0xCC8;
    public const nint m_flHeight = 0xCCC;
    public const nint m_flDepth = 0xCD0;
    public const nint m_nRenderOrder = 0xCD4;
    public const nint m_bProjectOnWorld = 0xCD8;
    public const nint m_bProjectOnCharacters = 0xCD9;
    public const nint m_bProjectOnWater = 0xCDA;
    public const nint m_flDepthSortBias = 0xCDC;
}

public static class C_EnvDetailController {
    public const nint m_flFadeStartDist = 0x540;
    public const nint m_flFadeEndDist = 0x544;
}

public static class C_EnvGasCanister {
    public const nint m_bLanded = 0xE70;
    public const nint m_bSpawnedSkyboxParticles = 0xED8;
    public const nint m_flKillImpactParticlesTime = 0xEDC;
    public const nint m_vecImpactPosition = 0xEE0;
    public const nint m_vecStartPosition = 0xEEC;
    public const nint m_vecEnterWorldPosition = 0xEF8;
    public const nint m_vecDirection = 0xF04;
    public const nint m_vecStartAngles = 0xF10;
    public const nint m_flFlightTime = 0xF1C;
    public const nint m_flFlightSpeed = 0xF20;
    public const nint m_flLaunchTime = 0xF24;
    public const nint m_flInitialZSpeed = 0xF28;
    public const nint m_flZAcceleration = 0xF2C;
    public const nint m_flHorizSpeed = 0xF30;
    public const nint m_bLaunchedFromWithinWorld = 0xF34;
    public const nint m_vecParabolaDirection = 0xF38;
    public const nint m_flWorldEnterTime = 0xF44;
    public const nint m_vecSkyboxOrigin = 0xF48;
    public const nint m_flSkyboxScale = 0xF54;
    public const nint m_bInSkybox = 0xF58;
    public const nint m_bDoImpactEffects = 0xF59;
    public const nint m_nMyZoneIndex = 0xF5C;
    public const nint m_hSkyboxCopy = 0xF60;
    public const nint m_flLaunchHeight = 0xF64;
}

public static class C_EnvLightProbeVolume {
    public const nint m_hLightProbeTexture = 0x1520;
    public const nint m_hLightProbeDirectLightIndicesTexture = 0x1528;
    public const nint m_hLightProbeDirectLightScalarsTexture = 0x1530;
    public const nint m_hLightProbeDirectLightShadowsTexture = 0x1538;
    public const nint m_vBoxMins = 0x1540;
    public const nint m_vBoxMaxs = 0x154C;
    public const nint m_LightGroups = 0x1558;
    public const nint m_bMoveable = 0x1560;
    public const nint m_nHandshake = 0x1564;
    public const nint m_nPriority = 0x1568;
    public const nint m_bStartDisabled = 0x156C;
    public const nint m_nLightProbeSizeX = 0x1570;
    public const nint m_nLightProbeSizeY = 0x1574;
    public const nint m_nLightProbeSizeZ = 0x1578;
    public const nint m_nLightProbeAtlasX = 0x157C;
    public const nint m_nLightProbeAtlasY = 0x1580;
    public const nint m_nLightProbeAtlasZ = 0x1584;
    public const nint m_bEnabled = 0x1591;
}

public static class C_EnvParticleGlow {
    public const nint m_flAlphaScale = 0x1270;
    public const nint m_flRadiusScale = 0x1274;
    public const nint m_flSelfIllumScale = 0x1278;
    public const nint m_ColorTint = 0x127C;
    public const nint m_hTextureOverride = 0x1280;
}

public static class C_EnvScreenOverlay {
    public const nint m_iszOverlayNames = 0x540;
    public const nint m_flOverlayTimes = 0x590;
    public const nint m_flStartTime = 0x5B8;
    public const nint m_iDesiredOverlay = 0x5BC;
    public const nint m_bIsActive = 0x5C0;
    public const nint m_bWasActive = 0x5C1;
    public const nint m_iCachedDesiredOverlay = 0x5C4;
    public const nint m_iCurrentOverlay = 0x5C8;
    public const nint m_flCurrentOverlayTime = 0x5CC;
}

public static class C_EnvSky {
    public const nint m_hSkyMaterial = 0xCC0;
    public const nint m_hSkyMaterialLightingOnly = 0xCC8;
    public const nint m_bStartDisabled = 0xCD0;
    public const nint m_vTintColor = 0xCD1;
    public const nint m_vTintColorLightingOnly = 0xCD5;
    public const nint m_flBrightnessScale = 0xCDC;
    public const nint m_nFogType = 0xCE0;
    public const nint m_flFogMinStart = 0xCE4;
    public const nint m_flFogMinEnd = 0xCE8;
    public const nint m_flFogMaxStart = 0xCEC;
    public const nint m_flFogMaxEnd = 0xCF0;
    public const nint m_bEnabled = 0xCF4;
}

public static class C_EnvVolumetricFogController {
    public const nint m_flScattering = 0x540;
    public const nint m_flAnisotropy = 0x544;
    public const nint m_flFadeSpeed = 0x548;
    public const nint m_flDrawDistance = 0x54C;
    public const nint m_flFadeInStart = 0x550;
    public const nint m_flFadeInEnd = 0x554;
    public const nint m_flIndirectStrength = 0x558;
    public const nint m_nIndirectTextureDimX = 0x55C;
    public const nint m_nIndirectTextureDimY = 0x560;
    public const nint m_nIndirectTextureDimZ = 0x564;
    public const nint m_vBoxMins = 0x568;
    public const nint m_vBoxMaxs = 0x574;
    public const nint m_bActive = 0x580;
    public const nint m_flStartAnisoTime = 0x584;
    public const nint m_flStartScatterTime = 0x588;
    public const nint m_flStartDrawDistanceTime = 0x58C;
    public const nint m_flStartAnisotropy = 0x590;
    public const nint m_flStartScattering = 0x594;
    public const nint m_flStartDrawDistance = 0x598;
    public const nint m_flDefaultAnisotropy = 0x59C;
    public const nint m_flDefaultScattering = 0x5A0;
    public const nint m_flDefaultDrawDistance = 0x5A4;
    public const nint m_bStartDisabled = 0x5A8;
    public const nint m_bEnableIndirect = 0x5A9;
    public const nint m_bIsMaster = 0x5AA;
    public const nint m_hFogIndirectTexture = 0x5B0;
    public const nint m_nForceRefreshCount = 0x5B8;
    public const nint m_bFirstTime = 0x5BC;
}

public static class C_EnvVolumetricFogVolume {
    public const nint m_bActive = 0x540;
    public const nint m_vBoxMins = 0x544;
    public const nint m_vBoxMaxs = 0x550;
    public const nint m_bStartDisabled = 0x55C;
    public const nint m_flStrength = 0x560;
    public const nint m_nFalloffShape = 0x564;
    public const nint m_flFalloffExponent = 0x568;
}

public static class C_EnvWind {
    public const nint m_EnvWindShared = 0x540;
}

public static class C_EnvWindClientside {
    public const nint m_EnvWindShared = 0x540;
}

public static class C_EnvWindShared {
    public const nint m_flStartTime = 0x8;
    public const nint m_iWindSeed = 0xC;
    public const nint m_iMinWind = 0x10;
    public const nint m_iMaxWind = 0x12;
    public const nint m_windRadius = 0x14;
    public const nint m_iMinGust = 0x18;
    public const nint m_iMaxGust = 0x1A;
    public const nint m_flMinGustDelay = 0x1C;
    public const nint m_flMaxGustDelay = 0x20;
    public const nint m_flGustDuration = 0x24;
    public const nint m_iGustDirChange = 0x28;
    public const nint m_location = 0x2C;
    public const nint m_iszGustSound = 0x38;
    public const nint m_iWindDir = 0x3C;
    public const nint m_flWindSpeed = 0x40;
    public const nint m_currentWindVector = 0x44;
    public const nint m_CurrentSwayVector = 0x50;
    public const nint m_PrevSwayVector = 0x5C;
    public const nint m_iInitialWindDir = 0x68;
    public const nint m_flInitialWindSpeed = 0x6C;
    public const nint m_flVariationTime = 0x70;
    public const nint m_flSwayTime = 0x74;
    public const nint m_flSimTime = 0x78;
    public const nint m_flSwitchTime = 0x7C;
    public const nint m_flAveWindSpeed = 0x80;
    public const nint m_bGusting = 0x84;
    public const nint m_flWindAngleVariation = 0x88;
    public const nint m_flWindSpeedVariation = 0x8C;
    public const nint m_iEntIndex = 0x90;
}

public static class C_EnvWindShared_WindAveEvent_t {
    public const nint m_flStartWindSpeed = 0x0;
    public const nint m_flAveWindSpeed = 0x4;
}

public static class C_EnvWindShared_WindVariationEvent_t {
    public const nint m_flWindAngleVariation = 0x0;
    public const nint m_flWindSpeedVariation = 0x4;
}

public static class C_FireSmoke {
    public const nint m_nFlameModelIndex = 0x550;
    public const nint m_nFlameFromAboveModelIndex = 0x554;
    public const nint m_flScaleRegister = 0x558;
    public const nint m_flScaleStart = 0x55C;
    public const nint m_flScaleEnd = 0x560;
    public const nint m_flScaleTimeStart = 0x564;
    public const nint m_flScaleTimeEnd = 0x568;
    public const nint m_flChildFlameSpread = 0x56C;
    public const nint m_flClipPerc = 0x580;
    public const nint m_bClipTested = 0x584;
    public const nint m_bFadingOut = 0x585;
    public const nint m_tParticleSpawn = 0x588;
    public const nint m_pFireOverlay = 0x590;
}

public static class C_FireSprite {
    public const nint m_vecMoveDir = 0xDF0;
    public const nint m_bFadeFromAbove = 0xDFC;
}

public static class C_Fish {
    public const nint m_pos = 0xE70;
    public const nint m_vel = 0xE7C;
    public const nint m_angles = 0xE88;
    public const nint m_localLifeState = 0xE94;
    public const nint m_deathDepth = 0xE98;
    public const nint m_deathAngle = 0xE9C;
    public const nint m_buoyancy = 0xEA0;
    public const nint m_wiggleTimer = 0xEA8;
    public const nint m_wigglePhase = 0xEC0;
    public const nint m_wiggleRate = 0xEC4;
    public const nint m_actualPos = 0xEC8;
    public const nint m_actualAngles = 0xED4;
    public const nint m_poolOrigin = 0xEE0;
    public const nint m_waterLevel = 0xEEC;
    public const nint m_gotUpdate = 0xEF0;
    public const nint m_x = 0xEF4;
    public const nint m_y = 0xEF8;
    public const nint m_z = 0xEFC;
    public const nint m_angle = 0xF00;
    public const nint m_errorHistory = 0xF04;
    public const nint m_errorHistoryIndex = 0xF54;
    public const nint m_errorHistoryCount = 0xF58;
    public const nint m_averageError = 0xF5C;
}

public static class C_Fists {
    public const nint m_bPlayingUninterruptableAct = 0x18D0;
    public const nint m_nUninterruptableActivity = 0x18D4;
}

public static class C_FogController {
    public const nint m_fog = 0x540;
    public const nint m_bUseAngles = 0x5A8;
    public const nint m_iChangedVariables = 0x5AC;
}

public static class C_FootstepControl {
    public const nint m_source = 0xCC8;
    public const nint m_destination = 0xCD0;
}

public static class C_FuncConveyor {
    public const nint m_vecMoveDirEntitySpace = 0xCC8;
    public const nint m_flTargetSpeed = 0xCD4;
    public const nint m_nTransitionStartTick = 0xCD8;
    public const nint m_nTransitionDurationTicks = 0xCDC;
    public const nint m_flTransitionStartSpeed = 0xCE0;
    public const nint m_hConveyorModels = 0xCE8;
    public const nint m_flCurrentConveyorOffset = 0xD00;
    public const nint m_flCurrentConveyorSpeed = 0xD04;
}

public static class C_FuncElectrifiedVolume {
    public const nint m_nAmbientEffect = 0xCC0;
    public const nint m_EffectName = 0xCC8;
    public const nint m_bState = 0xCD0;
}

public static class C_FuncLadder {
    public const nint m_vecLadderDir = 0xCC0;
    public const nint m_Dismounts = 0xCD0;
    public const nint m_vecLocalTop = 0xCE8;
    public const nint m_vecPlayerMountPositionTop = 0xCF4;
    public const nint m_vecPlayerMountPositionBottom = 0xD00;
    public const nint m_flAutoRideSpeed = 0xD0C;
    public const nint m_bDisabled = 0xD10;
    public const nint m_bFakeLadder = 0xD11;
    public const nint m_bHasSlack = 0xD12;
}

public static class C_FuncMonitor {
    public const nint m_targetCamera = 0xCC0;
    public const nint m_nResolutionEnum = 0xCC8;
    public const nint m_bRenderShadows = 0xCCC;
    public const nint m_bUseUniqueColorTarget = 0xCCD;
    public const nint m_brushModelName = 0xCD0;
    public const nint m_hTargetCamera = 0xCD8;
    public const nint m_bEnabled = 0xCDC;
    public const nint m_bDraw3DSkybox = 0xCDD;
}

public static class C_FuncTrackTrain {
    public const nint m_nLongAxis = 0xCC0;
    public const nint m_flRadius = 0xCC4;
    public const nint m_flLineLength = 0xCC8;
}

public static class C_GlobalLight {
    public const nint m_WindClothForceHandle = 0xA00;
}

public static class C_GradientFog {
    public const nint m_hGradientFogTexture = 0x540;
    public const nint m_flFogStartDistance = 0x548;
    public const nint m_flFogEndDistance = 0x54C;
    public const nint m_bHeightFogEnabled = 0x550;
    public const nint m_flFogStartHeight = 0x554;
    public const nint m_flFogEndHeight = 0x558;
    public const nint m_flFarZ = 0x55C;
    public const nint m_flFogMaxOpacity = 0x560;
    public const nint m_flFogFalloffExponent = 0x564;
    public const nint m_flFogVerticalExponent = 0x568;
    public const nint m_fogColor = 0x56C;
    public const nint m_flFogStrength = 0x570;
    public const nint m_flFadeTime = 0x574;
    public const nint m_bStartDisabled = 0x578;
    public const nint m_bIsEnabled = 0x579;
    public const nint m_bGradientFogNeedsTextures = 0x57A;
}

public static class C_GrassBurn {
    public const nint m_flGrassBurnClearTime = 0x540;
    public const nint m_bClientPendingClear = 0x544;
    public const nint m_flGrassBurnClearTimeLocal = 0x548;
    public const nint m_vecGrassBurnPositions = 0x550;
}

public static class C_HandleTest {
    public const nint m_Handle = 0x540;
    public const nint m_bSendHandle = 0x544;
}

public static class C_Hostage {
    public const nint m_entitySpottedState = 0x1098;
    public const nint m_leader = 0x10B0;
    public const nint m_reuseTimer = 0x10B8;
    public const nint m_vel = 0x10D0;
    public const nint m_isRescued = 0x10DC;
    public const nint m_jumpedThisFrame = 0x10DD;
    public const nint m_nHostageState = 0x10E0;
    public const nint m_bHandsHaveBeenCut = 0x10E4;
    public const nint m_hHostageGrabber = 0x10E8;
    public const nint m_fLastGrabTime = 0x10EC;
    public const nint m_vecGrabbedPos = 0x10F0;
    public const nint m_flRescueStartTime = 0x10FC;
    public const nint m_flGrabSuccessTime = 0x1100;
    public const nint m_flDropStartTime = 0x1104;
    public const nint m_flDeadOrRescuedTime = 0x1108;
    public const nint m_blinkTimer = 0x1110;
    public const nint m_lookAt = 0x1128;
    public const nint m_lookAroundTimer = 0x1138;
    public const nint m_isInit = 0x1150;
    public const nint m_eyeAttachment = 0x1151;
    public const nint m_chestAttachment = 0x1152;
    public const nint m_pPredictionOwner = 0x1158;
    public const nint m_fNewestAlphaThinkTime = 0x1160;
}

public static class C_Inferno {
    public const nint m_nfxFireDamageEffect = 0xD00;
    public const nint m_fireXDelta = 0xD04;
    public const nint m_fireYDelta = 0xE04;
    public const nint m_fireZDelta = 0xF04;
    public const nint m_fireParentXDelta = 0x1004;
    public const nint m_fireParentYDelta = 0x1104;
    public const nint m_fireParentZDelta = 0x1204;
    public const nint m_bFireIsBurning = 0x1304;
    public const nint m_BurnNormal = 0x1344;
    public const nint m_fireCount = 0x1644;
    public const nint m_nInfernoType = 0x1648;
    public const nint m_nFireLifetime = 0x164C;
    public const nint m_bInPostEffectTime = 0x1650;
    public const nint m_lastFireCount = 0x1654;
    public const nint m_nFireEffectTickBegin = 0x1658;
    public const nint m_drawableCount = 0x8260;
    public const nint m_blosCheck = 0x8264;
    public const nint m_nlosperiod = 0x8268;
    public const nint m_maxFireHalfWidth = 0x826C;
    public const nint m_maxFireHeight = 0x8270;
    public const nint m_minBounds = 0x8274;
    public const nint m_maxBounds = 0x8280;
    public const nint m_flLastGrassBurnThink = 0x828C;
}

public static class C_InfoMapRegion {
    public const nint m_flRadius = 0x540;
    public const nint m_szLocToken = 0x544;
    public const nint m_pNext = 0x5C8;
}

public static class C_InfoVisibilityBox {
    public const nint m_nMode = 0x544;
    public const nint m_vBoxSize = 0x548;
    public const nint m_bEnabled = 0x554;
}

public static class C_IronSightController {
    public const nint m_bIronSightAvailable = 0x10;
    public const nint m_flIronSightAmount = 0x14;
    public const nint m_flIronSightAmountGained = 0x18;
    public const nint m_flIronSightAmountBiased = 0x1C;
    public const nint m_flIronSightAmount_Interpolated = 0x20;
    public const nint m_flIronSightAmountGained_Interpolated = 0x24;
    public const nint m_flIronSightAmountBiased_Interpolated = 0x28;
    public const nint m_flInterpolationLastUpdated = 0x2C;
    public const nint m_angDeltaAverage = 0x30;
    public const nint m_angViewLast = 0x90;
    public const nint m_vecDotCoords = 0x9C;
    public const nint m_flDotBlur = 0xA4;
    public const nint m_flSpeedRatio = 0xA8;
}

public static class C_Item {
    public const nint m_bShouldGlow = 0x1550;
    public const nint m_pReticleHintTextName = 0x1551;
}

public static class C_ItemDogtags {
    public const nint m_OwningPlayer = 0x1658;
    public const nint m_KillingPlayer = 0x165C;
}

public static class C_LightEntity {
    public const nint m_CLightComponent = 0xCC0;
}

public static class C_LightGlow {
    public const nint m_nHorizontalSize = 0xCC0;
    public const nint m_nVerticalSize = 0xCC4;
    public const nint m_nMinDist = 0xCC8;
    public const nint m_nMaxDist = 0xCCC;
    public const nint m_nOuterMaxDist = 0xCD0;
    public const nint m_flGlowProxySize = 0xCD4;
    public const nint m_flHDRColorScale = 0xCD8;
    public const nint m_Glow = 0xCE0;
}

public static class C_LightGlowOverlay {
    public const nint m_vecOrigin = 0xD0;
    public const nint m_vecDirection = 0xDC;
    public const nint m_nMinDist = 0xE8;
    public const nint m_nMaxDist = 0xEC;
    public const nint m_nOuterMaxDist = 0xF0;
    public const nint m_bOneSided = 0xF4;
    public const nint m_bModulateByDot = 0xF5;
}

public static class C_LocalTempEntity {
    public const nint flags = 0xE88;
    public const nint die = 0xE8C;
    public const nint m_flFrameMax = 0xE90;
    public const nint x = 0xE94;
    public const nint y = 0xE98;
    public const nint fadeSpeed = 0xE9C;
    public const nint bounceFactor = 0xEA0;
    public const nint hitSound = 0xEA4;
    public const nint priority = 0xEA8;
    public const nint tentOffset = 0xEAC;
    public const nint m_vecTempEntAngVelocity = 0xEB8;
    public const nint tempent_renderamt = 0xEC4;
    public const nint m_vecNormal = 0xEC8;
    public const nint m_flSpriteScale = 0xED4;
    public const nint m_nFlickerFrame = 0xED8;
    public const nint m_flFrameRate = 0xEDC;
    public const nint m_flFrame = 0xEE0;
    public const nint m_pszImpactEffect = 0xEE8;
    public const nint m_pszParticleEffect = 0xEF0;
    public const nint m_bParticleCollision = 0xEF8;
    public const nint m_iLastCollisionFrame = 0xEFC;
    public const nint m_vLastCollisionOrigin = 0xF00;
    public const nint m_vecTempEntVelocity = 0xF0C;
    public const nint m_vecPrevAbsOrigin = 0xF18;
    public const nint m_vecTempEntAcceleration = 0xF24;
}

public static class C_MapVetoPickController {
    public const nint m_nDraftType = 0x550;
    public const nint m_nTeamWinningCoinToss = 0x554;
    public const nint m_nTeamWithFirstChoice = 0x558;
    public const nint m_nVoteMapIdsList = 0x658;
    public const nint m_nAccountIDs = 0x674;
    public const nint m_nMapId0 = 0x774;
    public const nint m_nMapId1 = 0x874;
    public const nint m_nMapId2 = 0x974;
    public const nint m_nMapId3 = 0xA74;
    public const nint m_nMapId4 = 0xB74;
    public const nint m_nMapId5 = 0xC74;
    public const nint m_nStartingSide0 = 0xD74;
    public const nint m_nCurrentPhase = 0xE74;
    public const nint m_nPhaseStartTick = 0xE78;
    public const nint m_nPhaseDurationTicks = 0xE7C;
    public const nint m_nPostDataUpdateTick = 0xE80;
    public const nint m_bDisabledHud = 0xE84;
}

public static class C_Melee {
    public const nint m_flThrowAt = 0x18D0;
}

public static class C_MolotovProjectile {
    public const nint m_bIsIncGrenade = 0x10E0;
}

public static class C_Multimeter {
    public const nint m_hTargetC4 = 0xE78;
}

public static class C_OmniLight {
    public const nint m_flInnerAngle = 0xF08;
    public const nint m_flOuterAngle = 0xF0C;
    public const nint m_bShowLight = 0xF10;
}

public static class C_ParadropChopper {
    public const nint m_vecLastRopeTargetPos = 0xE78;
    public const nint m_flLastRopeTime = 0xE84;
    public const nint m_nRappelABone = 0xE88;
    public const nint m_nRappelBBone = 0xE8C;
    public const nint m_hCallingPlayer = 0xE90;
    public const nint m_bCalledByPlayer = 0xE94;
}

public static class C_ParticleSystem {
    public const nint m_szSnapshotFileName = 0xCC0;
    public const nint m_bActive = 0xEC0;
    public const nint m_bFrozen = 0xEC1;
    public const nint m_flFreezeTransitionDuration = 0xEC4;
    public const nint m_nStopType = 0xEC8;
    public const nint m_bAnimateDuringGameplayPause = 0xECC;
    public const nint m_iEffectIndex = 0xED0;
    public const nint m_flStartTime = 0xED8;
    public const nint m_flPreSimTime = 0xEDC;
    public const nint m_vServerControlPoints = 0xEE0;
    public const nint m_iServerControlPointAssignments = 0xF10;
    public const nint m_hControlPointEnts = 0xF14;
    public const nint m_bNoSave = 0x1014;
    public const nint m_bNoFreeze = 0x1015;
    public const nint m_bNoRamp = 0x1016;
    public const nint m_bStartActive = 0x1017;
    public const nint m_iszEffectName = 0x1018;
    public const nint m_iszControlPointNames = 0x1020;
    public const nint m_nDataCP = 0x1220;
    public const nint m_vecDataCPValue = 0x1224;
    public const nint m_nTintCP = 0x1230;
    public const nint m_clrTint = 0x1234;
    public const nint m_bOldActive = 0x1258;
    public const nint m_bOldFrozen = 0x1259;
}

public static class C_PathParticleRope {
    public const nint m_bStartActive = 0x540;
    public const nint m_flMaxSimulationTime = 0x544;
    public const nint m_iszEffectName = 0x548;
    public const nint m_PathNodes_Name = 0x550;
    public const nint m_flParticleSpacing = 0x568;
    public const nint m_flSlack = 0x56C;
    public const nint m_flRadius = 0x570;
    public const nint m_ColorTint = 0x574;
    public const nint m_nEffectState = 0x578;
    public const nint m_iEffectIndex = 0x580;
    public const nint m_PathNodes_Position = 0x588;
    public const nint m_PathNodes_TangentIn = 0x5A0;
    public const nint m_PathNodes_TangentOut = 0x5B8;
    public const nint m_PathNodes_Color = 0x5D0;
    public const nint m_PathNodes_PinEnabled = 0x5E8;
    public const nint m_PathNodes_RadiusScale = 0x600;
}

public static class C_PhysMagnet {
    public const nint m_aAttachedObjectsFromServer = 0xE70;
    public const nint m_aAttachedObjects = 0xE88;
}

public static class C_PhysPropClientside {
    public const nint m_flTouchDelta = 0xFC0;
    public const nint m_fDeathTime = 0xFC4;
    public const nint m_impactEnergyScale = 0xFC8;
    public const nint m_inertiaScale = 0xFCC;
    public const nint m_flDmgModBullet = 0xFD0;
    public const nint m_flDmgModClub = 0xFD4;
    public const nint m_flDmgModExplosive = 0xFD8;
    public const nint m_flDmgModFire = 0xFDC;
    public const nint m_iszPhysicsDamageTableName = 0xFE0;
    public const nint m_iszBasePropData = 0xFE8;
    public const nint m_iInteractions = 0xFF0;
    public const nint m_bHasBreakPiecesOrCommands = 0xFF4;
    public const nint m_vecDamagePosition = 0xFF8;
    public const nint m_vecDamageDirection = 0x1004;
    public const nint m_nDamageType = 0x1010;
}

public static class C_PhysPropLootCrate {
    public const nint m_bRenderInPSPM = 0xFD0;
    public const nint m_bRenderInTablet = 0xFD1;
    public const nint m_iMaxHealth = 0xFD4;
    public const nint m_iHealth = 0xFD8;
}

public static class C_PhysicsProp {
    public const nint m_bAwake = 0xFC0;
}

public static class C_PickUpModelSlerper {
    public const nint m_hPlayerParent = 0xE70;
    public const nint m_hItem = 0xE74;
    public const nint m_flTimePickedUp = 0xE78;
    public const nint m_angOriginal = 0xE7C;
    public const nint m_vecPosOriginal = 0xE88;
    public const nint m_angRandom = 0xE98;
}

public static class C_PlantedC4 {
    public const nint m_bBombTicking = 0xE70;
    public const nint m_nBombSite = 0xE74;
    public const nint m_nSourceSoundscapeHash = 0xE78;
    public const nint m_entitySpottedState = 0xE80;
    public const nint m_flNextGlow = 0xE98;
    public const nint m_flNextBeep = 0xE9C;
    public const nint m_flC4Blow = 0xEA0;
    public const nint m_bCannotBeDefused = 0xEA4;
    public const nint m_bHasExploded = 0xEA5;
    public const nint m_flTimerLength = 0xEA8;
    public const nint m_bBeingDefused = 0xEAC;
    public const nint m_bTenSecWarning = 0xEB0;
    public const nint m_bTriggerWarning = 0xEB4;
    public const nint m_bExplodeWarning = 0xEB8;
    public const nint m_bC4Activated = 0xEBC;
    public const nint m_bLocalBRMusicPlayed = 0xEBD;
    public const nint m_flDefuseLength = 0xEC0;
    public const nint m_flDefuseCountDown = 0xEC4;
    public const nint m_bBombDefused = 0xEC8;
    public const nint m_hBombDefuser = 0xECC;
    public const nint m_hControlPanel = 0xED0;
    public const nint m_hDefuserMultimeter = 0xED4;
    public const nint m_flNextRadarFlashTime = 0xED8;
    public const nint m_bRadarFlash = 0xEDC;
    public const nint m_pBombDefuser = 0xEE0;
    public const nint m_fLastDefuseTime = 0xEE4;
    public const nint m_pPredictionOwner = 0xEE8;
}

public static class C_PlayerPing {
    public const nint m_hPlayer = 0x570;
    public const nint m_hPingedEntity = 0x574;
    public const nint m_iType = 0x578;
    public const nint m_bUrgent = 0x57C;
    public const nint m_szPlaceName = 0x57D;
}

public static class C_PlayerSprayDecal {
    public const nint m_nUniqueID = 0xCC0;
    public const nint m_unAccountID = 0xCC4;
    public const nint m_unTraceID = 0xCC8;
    public const nint m_rtGcTime = 0xCCC;
    public const nint m_vecEndPos = 0xCD0;
    public const nint m_vecStart = 0xCDC;
    public const nint m_vecLeft = 0xCE8;
    public const nint m_vecNormal = 0xCF4;
    public const nint m_nPlayer = 0xD00;
    public const nint m_nEntity = 0xD04;
    public const nint m_nHitbox = 0xD08;
    public const nint m_flCreationTime = 0xD0C;
    public const nint m_nTintID = 0xD10;
    public const nint m_nVersion = 0xD14;
    public const nint m_ubSignature = 0xD15;
    public const nint m_SprayRenderHelper = 0xDA0;
}

public static class C_PlayerVisibility {
    public const nint m_flVisibilityStrength = 0x540;
    public const nint m_flFogDistanceMultiplier = 0x544;
    public const nint m_flFogMaxDensityMultiplier = 0x548;
    public const nint m_flFadeTime = 0x54C;
    public const nint m_bStartDisabled = 0x550;
    public const nint m_bIsEnabled = 0x551;
}

public static class C_PointCamera {
    public const nint m_FOV = 0x540;
    public const nint m_Resolution = 0x544;
    public const nint m_bFogEnable = 0x548;
    public const nint m_FogColor = 0x549;
    public const nint m_flFogStart = 0x550;
    public const nint m_flFogEnd = 0x554;
    public const nint m_flFogMaxDensity = 0x558;
    public const nint m_bActive = 0x55C;
    public const nint m_bUseScreenAspectRatio = 0x55D;
    public const nint m_flAspectRatio = 0x560;
    public const nint m_bNoSky = 0x564;
    public const nint m_fBrightness = 0x568;
    public const nint m_flZFar = 0x56C;
    public const nint m_flZNear = 0x570;
    public const nint m_bCanHLTVUse = 0x574;
    public const nint m_bDofEnabled = 0x575;
    public const nint m_flDofNearBlurry = 0x578;
    public const nint m_flDofNearCrisp = 0x57C;
    public const nint m_flDofFarCrisp = 0x580;
    public const nint m_flDofFarBlurry = 0x584;
    public const nint m_flDofTiltToGround = 0x588;
    public const nint m_TargetFOV = 0x58C;
    public const nint m_DegreesPerSecond = 0x590;
    public const nint m_bIsOn = 0x594;
    public const nint m_pNext = 0x598;
}

public static class C_PointCameraVFOV {
    public const nint m_flVerticalFOV = 0x5A0;
}

public static class C_PointClientUIDialog {
    public const nint m_hActivator = 0xCF0;
    public const nint m_bStartEnabled = 0xCF4;
}

public static class C_PointClientUIHUD {
    public const nint m_bCheckCSSClasses = 0xCF8;
    public const nint m_bIgnoreInput = 0xE80;
    public const nint m_flWidth = 0xE84;
    public const nint m_flHeight = 0xE88;
    public const nint m_flDPI = 0xE8C;
    public const nint m_flInteractDistance = 0xE90;
    public const nint m_flDepthOffset = 0xE94;
    public const nint m_unOwnerContext = 0xE98;
    public const nint m_unHorizontalAlign = 0xE9C;
    public const nint m_unVerticalAlign = 0xEA0;
    public const nint m_unOrientation = 0xEA4;
    public const nint m_bAllowInteractionFromAllSceneWorlds = 0xEA8;
    public const nint m_vecCSSClasses = 0xEB0;
}

public static class C_PointClientUIWorldPanel {
    public const nint m_bForceRecreateNextUpdate = 0xCF8;
    public const nint m_bMoveViewToPlayerNextThink = 0xCF9;
    public const nint m_bCheckCSSClasses = 0xCFA;
    public const nint m_anchorDeltaTransform = 0xD00;
    public const nint m_pOffScreenIndicator = 0xEA0;
    public const nint m_bIgnoreInput = 0xEC8;
    public const nint m_bLit = 0xEC9;
    public const nint m_bFollowPlayerAcrossTeleport = 0xECA;
    public const nint m_flWidth = 0xECC;
    public const nint m_flHeight = 0xED0;
    public const nint m_flDPI = 0xED4;
    public const nint m_flInteractDistance = 0xED8;
    public const nint m_flDepthOffset = 0xEDC;
    public const nint m_unOwnerContext = 0xEE0;
    public const nint m_unHorizontalAlign = 0xEE4;
    public const nint m_unVerticalAlign = 0xEE8;
    public const nint m_unOrientation = 0xEEC;
    public const nint m_bAllowInteractionFromAllSceneWorlds = 0xEF0;
    public const nint m_vecCSSClasses = 0xEF8;
    public const nint m_bOpaque = 0xF10;
    public const nint m_bNoDepth = 0xF11;
    public const nint m_bRenderBackface = 0xF12;
    public const nint m_bUseOffScreenIndicator = 0xF13;
    public const nint m_bExcludeFromSaveGames = 0xF14;
    public const nint m_bGrabbable = 0xF15;
    public const nint m_bOnlyRenderToTexture = 0xF16;
    public const nint m_bDisableMipGen = 0xF17;
    public const nint m_nExplicitImageLayout = 0xF18;
}

public static class C_PointClientUIWorldTextPanel {
    public const nint m_messageText = 0xF20;
}

public static class C_PointCommentaryNode {
    public const nint m_bActive = 0xE78;
    public const nint m_bWasActive = 0xE79;
    public const nint m_flEndTime = 0xE7C;
    public const nint m_flStartTime = 0xE80;
    public const nint m_flStartTimeInCommentary = 0xE84;
    public const nint m_iszCommentaryFile = 0xE88;
    public const nint m_iszTitle = 0xE90;
    public const nint m_iszSpeakers = 0xE98;
    public const nint m_iNodeNumber = 0xEA0;
    public const nint m_iNodeNumberMax = 0xEA4;
    public const nint m_bListenedTo = 0xEA8;
    public const nint m_hViewPosition = 0xEB8;
    public const nint m_bRestartAfterRestore = 0xEBC;
}

public static class C_PointValueRemapper {
    public const nint m_bDisabled = 0x540;
    public const nint m_bDisabledOld = 0x541;
    public const nint m_bUpdateOnClient = 0x542;
    public const nint m_nInputType = 0x544;
    public const nint m_hRemapLineStart = 0x548;
    public const nint m_hRemapLineEnd = 0x54C;
    public const nint m_flMaximumChangePerSecond = 0x550;
    public const nint m_flDisengageDistance = 0x554;
    public const nint m_flEngageDistance = 0x558;
    public const nint m_bRequiresUseKey = 0x55C;
    public const nint m_nOutputType = 0x560;
    public const nint m_hOutputEntities = 0x568;
    public const nint m_nHapticsType = 0x580;
    public const nint m_nMomentumType = 0x584;
    public const nint m_flMomentumModifier = 0x588;
    public const nint m_flSnapValue = 0x58C;
    public const nint m_flCurrentMomentum = 0x590;
    public const nint m_nRatchetType = 0x594;
    public const nint m_flRatchetOffset = 0x598;
    public const nint m_flInputOffset = 0x59C;
    public const nint m_bEngaged = 0x5A0;
    public const nint m_bFirstUpdate = 0x5A1;
    public const nint m_flPreviousValue = 0x5A4;
    public const nint m_flPreviousUpdateTickTime = 0x5A8;
    public const nint m_vecPreviousTestPoint = 0x5AC;
}

public static class C_PointWorldText {
    public const nint m_bForceRecreateNextUpdate = 0xCC8;
    public const nint m_messageText = 0xCD8;
    public const nint m_FontName = 0xED8;
    public const nint m_bEnabled = 0xF18;
    public const nint m_bFullbright = 0xF19;
    public const nint m_flWorldUnitsPerPx = 0xF1C;
    public const nint m_flFontSize = 0xF20;
    public const nint m_flDepthOffset = 0xF24;
    public const nint m_Color = 0xF28;
    public const nint m_nJustifyHorizontal = 0xF2C;
    public const nint m_nJustifyVertical = 0xF30;
    public const nint m_nReorientMode = 0xF34;
}

public static class C_PostProcessingVolume {
    public const nint m_hPostSettings = 0xCD8;
    public const nint m_flFadeDuration = 0xCE0;
    public const nint m_flMinLogExposure = 0xCE4;
    public const nint m_flMaxLogExposure = 0xCE8;
    public const nint m_flMinExposure = 0xCEC;
    public const nint m_flMaxExposure = 0xCF0;
    public const nint m_flExposureCompensation = 0xCF4;
    public const nint m_flExposureFadeSpeedUp = 0xCF8;
    public const nint m_flExposureFadeSpeedDown = 0xCFC;
    public const nint m_flTonemapEVSmoothingRange = 0xD00;
    public const nint m_bMaster = 0xD04;
    public const nint m_bExposureControl = 0xD05;
    public const nint m_flRate = 0xD08;
    public const nint m_flTonemapPercentTarget = 0xD0C;
    public const nint m_flTonemapPercentBrightPixels = 0xD10;
    public const nint m_flTonemapMinAvgLum = 0xD14;
}

public static class C_Precipitation {
    public const nint m_flDensity = 0xCC8;
    public const nint m_flParticleInnerDist = 0xCD8;
    public const nint m_pParticleDef = 0xCE0;
    public const nint m_tParticlePrecipTraceTimer = 0xD08;
    public const nint m_bActiveParticlePrecipEmitter = 0xD10;
    public const nint m_bParticlePrecipInitialized = 0xD11;
    public const nint m_bHasSimulatedSinceLastSceneObjectUpdate = 0xD12;
    public const nint m_nAvailableSheetSequencesMaxIndex = 0xD14;
}

public static class C_PredictedViewModel {
    public const nint m_LagAnglesHistory = 0xED8;
    public const nint m_vPredictedOffset = 0xEF0;
}

public static class C_PropCounter {
    public const nint m_flDisplayValue = 0xE70;
    public const nint m_flDisplayValueLocal = 0xE74;
    public const nint m_flTimeOfLastValueChange = 0xE78;
    public const nint m_flPreviousValue = 0xE7C;
}

public static class C_RagdollManager {
    public const nint m_iCurrentMaxRagdollCount = 0x540;
}

public static class C_RagdollProp {
    public const nint m_ragPos = 0xE78;
    public const nint m_ragAngles = 0xE90;
    public const nint m_flBlendWeight = 0xEA8;
    public const nint m_hRagdollSource = 0xEAC;
    public const nint m_iEyeAttachment = 0xEB0;
    public const nint m_flBlendWeightCurrent = 0xEB4;
    public const nint m_parentPhysicsBoneIndices = 0xEB8;
    public const nint m_worldSpaceBoneComputationOrder = 0xED0;
}

public static class C_RagdollPropAttached {
    public const nint m_boneIndexAttached = 0xEE8;
    public const nint m_ragdollAttachedObjectIndex = 0xEEC;
    public const nint m_attachmentPointBoneSpace = 0xEF0;
    public const nint m_attachmentPointRagdollSpace = 0xEFC;
    public const nint m_vecOffset = 0xF08;
    public const nint m_parentTime = 0xF14;
    public const nint m_bHasParent = 0xF18;
}

public static class C_RectLight {
    public const nint m_bShowLight = 0xF08;
}

public static class C_RetakeGameRules {
    public const nint m_nMatchSeed = 0xF8;
    public const nint m_bBlockersPresent = 0xFC;
    public const nint m_bRoundInProgress = 0xFD;
    public const nint m_iFirstSecondHalfRound = 0x100;
    public const nint m_iBombSite = 0x104;
}

public static class C_RopeKeyframe {
    public const nint m_LinksTouchingSomething = 0xCC8;
    public const nint m_nLinksTouchingSomething = 0xCCC;
    public const nint m_bApplyWind = 0xCD0;
    public const nint m_fPrevLockedPoints = 0xCD4;
    public const nint m_iForcePointMoveCounter = 0xCD8;
    public const nint m_bPrevEndPointPos = 0xCDC;
    public const nint m_vPrevEndPointPos = 0xCE0;
    public const nint m_flCurScroll = 0xCF8;
    public const nint m_flScrollSpeed = 0xCFC;
    public const nint m_RopeFlags = 0xD00;
    public const nint m_iRopeMaterialModelIndex = 0xD08;
    public const nint m_LightValues = 0xF80;
    public const nint m_nSegments = 0xFF8;
    public const nint m_hStartPoint = 0xFFC;
    public const nint m_hEndPoint = 0x1000;
    public const nint m_iStartAttachment = 0x1004;
    public const nint m_iEndAttachment = 0x1005;
    public const nint m_Subdiv = 0x1006;
    public const nint m_RopeLength = 0x1008;
    public const nint m_Slack = 0x100A;
    public const nint m_TextureScale = 0x100C;
    public const nint m_fLockedPoints = 0x1010;
    public const nint m_nChangeCount = 0x1011;
    public const nint m_Width = 0x1014;
    public const nint m_PhysicsDelegate = 0x1018;
    public const nint m_hMaterial = 0x1028;
    public const nint m_TextureHeight = 0x1030;
    public const nint m_vecImpulse = 0x1034;
    public const nint m_vecPreviousImpulse = 0x1040;
    public const nint m_flCurrentGustTimer = 0x104C;
    public const nint m_flCurrentGustLifetime = 0x1050;
    public const nint m_flTimeToNextGust = 0x1054;
    public const nint m_vWindDir = 0x1058;
    public const nint m_vColorMod = 0x1064;
    public const nint m_vCachedEndPointAttachmentPos = 0x1070;
    public const nint m_vCachedEndPointAttachmentAngle = 0x1088;
    public const nint m_bConstrainBetweenEndpoints = 0x10A0;
    public const nint m_bEndPointAttachmentPositionsDirty = 0x0;
    public const nint m_bEndPointAttachmentAnglesDirty = 0x0;
    public const nint m_bNewDataThisFrame = 0x0;
    public const nint m_bPhysicsInitted = 0x0;
}

public static class C_RopeKeyframe_CPhysicsDelegate {
    public const nint m_pKeyframe = 0x8;
}

public static class C_SceneEntity {
    public const nint m_bIsPlayingBack = 0x548;
    public const nint m_bPaused = 0x549;
    public const nint m_bMultiplayer = 0x54A;
    public const nint m_bAutogenerated = 0x54B;
    public const nint m_flForceClientTime = 0x54C;
    public const nint m_nSceneStringIndex = 0x550;
    public const nint m_bClientOnly = 0x552;
    public const nint m_hOwner = 0x554;
    public const nint m_hActorList = 0x558;
    public const nint m_bWasPlaying = 0x570;
    public const nint m_QueuedEvents = 0x580;
    public const nint m_flCurrentTime = 0x598;
}

public static class C_SceneEntity_QueuedEvents_t {
    public const nint starttime = 0x0;
}

public static class C_ShatterGlassShardPhysics {
    public const nint m_ShardDesc = 0xFD0;
}

public static class C_SkyCamera {
    public const nint m_skyboxData = 0x540;
    public const nint m_skyboxSlotToken = 0x5D0;
    public const nint m_bUseAngles = 0x5D4;
    public const nint m_pNext = 0x5D8;
}

public static class C_SmokeGrenadeProjectile {
    public const nint m_nSmokeEffectTickBegin = 0x10E8;
    public const nint m_bDidSmokeEffect = 0x10EC;
    public const nint m_nRandomSeed = 0x10F0;
    public const nint m_vSmokeColor = 0x10F4;
    public const nint m_vSmokeDetonationPos = 0x1100;
    public const nint m_VoxelFrameData = 0x1110;
    public const nint m_bSmokeVolumeDataReceived = 0x1128;
    public const nint m_bSmokeEffectSpawned = 0x1129;
}

public static class C_SoundAreaEntityBase {
    public const nint m_bDisabled = 0x540;
    public const nint m_bWasEnabled = 0x548;
    public const nint m_iszSoundAreaType = 0x550;
    public const nint m_vPos = 0x558;
}

public static class C_SoundAreaEntityOrientedBox {
    public const nint m_vMin = 0x568;
    public const nint m_vMax = 0x574;
}

public static class C_SoundAreaEntitySphere {
    public const nint m_flRadius = 0x568;
}

public static class C_SoundOpvarSetPointBase {
    public const nint m_iszStackName = 0x540;
    public const nint m_iszOperatorName = 0x548;
    public const nint m_iszOpvarName = 0x550;
    public const nint m_iOpvarIndex = 0x558;
    public const nint m_bUseAutoCompare = 0x55C;
}

public static class C_SpotlightEnd {
    public const nint m_flLightScale = 0xCC0;
    public const nint m_Radius = 0xCC4;
}

public static class C_Sprite {
    public const nint m_hSpriteMaterial = 0xCD8;
    public const nint m_hAttachedToEntity = 0xCE0;
    public const nint m_nAttachment = 0xCE4;
    public const nint m_flSpriteFramerate = 0xCE8;
    public const nint m_flFrame = 0xCEC;
    public const nint m_flDieTime = 0xCF0;
    public const nint m_nBrightness = 0xD00;
    public const nint m_flBrightnessDuration = 0xD04;
    public const nint m_flSpriteScale = 0xD08;
    public const nint m_flScaleDuration = 0xD0C;
    public const nint m_bWorldSpaceScale = 0xD10;
    public const nint m_flGlowProxySize = 0xD14;
    public const nint m_flHDRColorScale = 0xD18;
    public const nint m_flLastTime = 0xD1C;
    public const nint m_flMaxFrame = 0xD20;
    public const nint m_flStartScale = 0xD24;
    public const nint m_flDestScale = 0xD28;
    public const nint m_flScaleTimeStart = 0xD2C;
    public const nint m_nStartBrightness = 0xD30;
    public const nint m_nDestBrightness = 0xD34;
    public const nint m_flBrightnessTimeStart = 0xD38;
    public const nint m_hOldSpriteMaterial = 0xD40;
    public const nint m_nSpriteWidth = 0xDE8;
    public const nint m_nSpriteHeight = 0xDEC;
}

public static class C_Sun {
    public const nint m_fxSSSunFlareEffectIndex = 0xCC0;
    public const nint m_fxSunFlareEffectIndex = 0xCC4;
    public const nint m_fdistNormalize = 0xCC8;
    public const nint m_vSunPos = 0xCCC;
    public const nint m_vDirection = 0xCD8;
    public const nint m_iszEffectName = 0xCE8;
    public const nint m_iszSSEffectName = 0xCF0;
    public const nint m_clrOverlay = 0xCF8;
    public const nint m_bOn = 0xCFC;
    public const nint m_bmaxColor = 0xCFD;
    public const nint m_flSize = 0xD00;
    public const nint m_flHazeScale = 0xD04;
    public const nint m_flRotation = 0xD08;
    public const nint m_flHDRColorScale = 0xD0C;
    public const nint m_flAlphaHaze = 0xD10;
    public const nint m_flAlphaScale = 0xD14;
    public const nint m_flAlphaHdr = 0xD18;
    public const nint m_flFarZScale = 0xD1C;
}

public static class C_SunGlowOverlay {
    public const nint m_bModulateByDot = 0xD0;
}

public static class C_SurvivalGameRules {
    public const nint m_vecPlayAreaMins = 0x8;
    public const nint m_vecPlayAreaMaxs = 0x14;
    public const nint m_iPlayerSpawnHexIndices = 0x20;
    public const nint m_SpawnTileState = 0x120;
    public const nint m_flSpawnSelectionTimeStartCurrentStage = 0x200;
    public const nint m_flSpawnSelectionTimeEndCurrentStage = 0x204;
    public const nint m_flSpawnSelectionTimeEndLastStage = 0x208;
    public const nint m_spawnStage = 0x20C;
    public const nint m_flTabletHexOriginX = 0x210;
    public const nint m_flTabletHexOriginY = 0x214;
    public const nint m_flTabletHexSize = 0x218;
    public const nint m_roundData_playerXuids = 0x220;
    public const nint m_roundData_playerPositions = 0x420;
    public const nint m_roundData_playerTeams = 0x520;
    public const nint m_SurvivalGameRuleDecisionTypes = 0x620;
    public const nint m_SurvivalGameRuleDecisionValues = 0x660;
    public const nint m_flSurvivalStartTime = 0x6A0;
    public const nint m_flLastThinkTime = 0x6A4;
}

public static class C_Tablet {
    public const nint m_flUpgradeExpirationTime = 0x18D8;
    public const nint m_vecLocalHexFlags = 0x18E8;
    public const nint m_nContractKillGridIndex = 0x1990;
    public const nint m_nContractKillGridHighResIndex = 0x1994;
    public const nint m_bTabletReceptionIsBlocked = 0x1998;
    public const nint m_flScanProgress = 0x199C;
    public const nint m_flBootTime = 0x19A0;
    public const nint m_flShowMapTime = 0x19A4;
    public const nint m_vecNearestMetalCratePos = 0x19A8;
    public const nint m_skinState = 0x19B4;
    public const nint m_vecNotificationIds = 0x19B8;
    public const nint m_vecNotificationTimestamps = 0x19D8;
    public const nint m_nLastPurchaseIndex = 0x19F8;
    public const nint m_vecPlayerPositionHistory = 0x19FC;
    public const nint m_vecLocalHexFlagsClientCopy = 0x1B1C;
    public const nint m_vecLastHexPlayerOccupancyChange = 0x1BC4;
    public const nint m_radarMaterial = 0x1FE8;
    public const nint m_buildingMaterial = 0x1FF0;
    public const nint m_hZoneOverlayMaterial = 0x1FF8;
    public const nint m_flNoiseFadeAlpha = 0x2000;
    public const nint m_WorkingColor = 0x2004;
    public const nint m_vecLastCameraPos = 0x2008;
    public const nint m_angLastCameraAng = 0x2014;
    public const nint m_nDrawElementCount = 0x2020;
    public const nint m_flPrevScanProgress = 0x2024;
    public const nint m_nRenderTargetRes = 0x2028;
    public const nint m_flLastClosePoseParamVal = 0x202C;
}

public static class C_Team {
    public const nint m_aPlayerControllers = 0x540;
    public const nint m_aPlayers = 0x558;
    public const nint m_iScore = 0x570;
    public const nint m_szTeamname = 0x574;
}

public static class C_TeamRoundTimer {
    public const nint m_bTimerPaused = 0x540;
    public const nint m_flTimeRemaining = 0x544;
    public const nint m_flTimerEndTime = 0x548;
    public const nint m_bIsDisabled = 0x54C;
    public const nint m_bShowInHUD = 0x54D;
    public const nint m_nTimerLength = 0x550;
    public const nint m_nTimerInitialLength = 0x554;
    public const nint m_nTimerMaxLength = 0x558;
    public const nint m_bAutoCountdown = 0x55C;
    public const nint m_nSetupTimeLength = 0x560;
    public const nint m_nState = 0x564;
    public const nint m_bStartPaused = 0x568;
    public const nint m_bInCaptureWatchState = 0x569;
    public const nint m_flTotalTime = 0x56C;
    public const nint m_bStopWatchTimer = 0x570;
    public const nint m_bFireFinished = 0x571;
    public const nint m_bFire5MinRemain = 0x572;
    public const nint m_bFire4MinRemain = 0x573;
    public const nint m_bFire3MinRemain = 0x574;
    public const nint m_bFire2MinRemain = 0x575;
    public const nint m_bFire1MinRemain = 0x576;
    public const nint m_bFire30SecRemain = 0x577;
    public const nint m_bFire10SecRemain = 0x578;
    public const nint m_bFire5SecRemain = 0x579;
    public const nint m_bFire4SecRemain = 0x57A;
    public const nint m_bFire3SecRemain = 0x57B;
    public const nint m_bFire2SecRemain = 0x57C;
    public const nint m_bFire1SecRemain = 0x57D;
    public const nint m_nOldTimerLength = 0x580;
    public const nint m_nOldTimerState = 0x584;
}

public static class C_TextureBasedAnimatable {
    public const nint m_bLoop = 0xCC0;
    public const nint m_flFPS = 0xCC4;
    public const nint m_hPositionKeys = 0xCC8;
    public const nint m_hRotationKeys = 0xCD0;
    public const nint m_vAnimationBoundsMin = 0xCD8;
    public const nint m_vAnimationBoundsMax = 0xCE4;
    public const nint m_flStartTime = 0xCF0;
    public const nint m_flStartFrame = 0xCF4;
}

public static class C_TonemapController2 {
    public const nint m_flAutoExposureMin = 0x540;
    public const nint m_flAutoExposureMax = 0x544;
    public const nint m_flTonemapPercentTarget = 0x548;
    public const nint m_flTonemapPercentBrightPixels = 0x54C;
    public const nint m_flTonemapMinAvgLum = 0x550;
    public const nint m_flExposureAdaptationSpeedUp = 0x554;
    public const nint m_flExposureAdaptationSpeedDown = 0x558;
    public const nint m_flTonemapEVSmoothingRange = 0x55C;
}

public static class C_TriggerBuoyancy {
    public const nint m_BuoyancyHelper = 0xCC8;
    public const nint m_flFluidDensity = 0xCE8;
}

public static class C_TripWireFireProjectile {
    public const nint m_flAttachTime = 0x1058;
    public const nint m_vecTripWireEndPositions = 0x105C;
    public const nint m_bTripWireEndPositionsUsed = 0x10D4;
    public const nint m_nTripWireStartIndex0 = 0x10E0;
    public const nint m_nTripWireEndIndex0 = 0x10E4;
    public const nint m_nTripWireCenterIndex0 = 0x10E8;
}

public static class C_ViewmodelWeapon {
    public const nint m_worldModel = 0xE70;
}

public static class C_VoteController {
    public const nint m_iActiveIssueIndex = 0x550;
    public const nint m_iOnlyTeamToVote = 0x554;
    public const nint m_nVoteOptionCount = 0x558;
    public const nint m_nPotentialVotes = 0x56C;
    public const nint m_bVotesDirty = 0x570;
    public const nint m_bTypeDirty = 0x571;
    public const nint m_bIsYesNoVote = 0x572;
}

public static class C_WeaponBaseItem {
    public const nint m_SequenceCompleteTimer = 0x18D0;
    public const nint m_bRedraw = 0x18E8;
}

public static class C_WeaponCSBase {
    public const nint m_flFireSequenceStartTime = 0x15C0;
    public const nint m_nFireSequenceStartTimeChange = 0x15C4;
    public const nint m_nFireSequenceStartTimeAck = 0x15C8;
    public const nint m_bPlayerFireEventIsPrimary = 0x15CC;
    public const nint m_seqIdle = 0x15D0;
    public const nint m_seqFirePrimary = 0x15D4;
    public const nint m_seqFireSecondary = 0x15D8;
    public const nint m_iState = 0x15F0;
    public const nint m_flCrosshairDistance = 0x15F4;
    public const nint m_iAmmoLastCheck = 0x15F8;
    public const nint m_iAlpha = 0x15FC;
    public const nint m_iScopeTextureID = 0x1600;
    public const nint m_iCrosshairTextureID = 0x1604;
    public const nint m_flGunAccuracyPosition = 0x1608;
    public const nint m_nViewModelIndex = 0x160C;
    public const nint m_bReloadsWithClips = 0x1610;
    public const nint m_flTimeWeaponIdle = 0x1614;
    public const nint m_bFireOnEmpty = 0x1618;
    public const nint m_OnPlayerPickup = 0x1620;
    public const nint m_weaponMode = 0x1648;
    public const nint m_flTurningInaccuracyDelta = 0x164C;
    public const nint m_vecTurningInaccuracyEyeDirLast = 0x1650;
    public const nint m_flTurningInaccuracy = 0x165C;
    public const nint m_fAccuracyPenalty = 0x1660;
    public const nint m_flLastAccuracyUpdateTime = 0x1664;
    public const nint m_fAccuracySmoothedForZoom = 0x1668;
    public const nint m_fScopeZoomEndTime = 0x166C;
    public const nint m_iRecoilIndex = 0x1670;
    public const nint m_flRecoilIndex = 0x1674;
    public const nint m_bBurstMode = 0x1678;
    public const nint m_flPostponeFireReadyTime = 0x167C;
    public const nint m_bInReload = 0x1680;
    public const nint m_bReloadVisuallyComplete = 0x1681;
    public const nint m_flDroppedAtTime = 0x1684;
    public const nint m_bIsHauledBack = 0x1688;
    public const nint m_bSilencerOn = 0x1689;
    public const nint m_flTimeSilencerSwitchComplete = 0x168C;
    public const nint m_iOriginalTeamNumber = 0x1690;
    public const nint m_flNextAttackRenderTimeOffset = 0x1694;
    public const nint m_bVisualsDataSet = 0x1710;
    public const nint m_bOldFirstPersonSpectatedState = 0x1711;
    public const nint m_hOurPing = 0x1714;
    public const nint m_nOurPingIndex = 0x1718;
    public const nint m_vecOurPingPos = 0x171C;
    public const nint m_bGlowForPing = 0x1728;
    public const nint m_bUIWeapon = 0x1729;
    public const nint m_hPrevOwner = 0x1738;
    public const nint m_nDropTick = 0x173C;
    public const nint m_donated = 0x175C;
    public const nint m_fLastShotTime = 0x1760;
    public const nint m_bWasOwnedByCT = 0x1764;
    public const nint m_bWasOwnedByTerrorist = 0x1765;
    public const nint m_gunHeat = 0x1768;
    public const nint m_smokeAttachments = 0x176C;
    public const nint m_lastSmokeTime = 0x1770;
    public const nint m_flLastClientFireBulletTime = 0x1774;
    public const nint m_IronSightController = 0x17D0;
    public const nint m_iIronSightMode = 0x1880;
    public const nint m_flLastLOSTraceFailureTime = 0x1890;
    public const nint m_iNumEmptyAttacks = 0x1894;
}

public static class C_WeaponCSBaseGun {
    public const nint m_zoomLevel = 0x18D0;
    public const nint m_iBurstShotsRemaining = 0x18D4;
    public const nint m_iSilencerBodygroup = 0x18D8;
    public const nint m_silencedModelIndex = 0x18E8;
    public const nint m_inPrecache = 0x18EC;
    public const nint m_bNeedsBoltAction = 0x18ED;
}

public static class C_WeaponShield {
    public const nint m_flDisplayHealth = 0x18F0;
}

public static class C_WeaponTaser {
    public const nint m_fFireTime = 0x18F0;
}

public static class C_WeaponZoneRepulsor {
    public const nint m_flPitchLocal = 0x18F0;
    public const nint m_flLastTimeNotIdle = 0x18F4;
}

public static class C_fogplayerparams_t {
    public const nint m_hCtrl = 0x8;
    public const nint m_flTransitionTime = 0xC;
    public const nint m_OldColor = 0x10;
    public const nint m_flOldStart = 0x14;
    public const nint m_flOldEnd = 0x18;
    public const nint m_flOldMaxDensity = 0x1C;
    public const nint m_flOldHDRColorScale = 0x20;
    public const nint m_flOldFarZ = 0x24;
    public const nint m_NewColor = 0x28;
    public const nint m_flNewStart = 0x2C;
    public const nint m_flNewEnd = 0x30;
    public const nint m_flNewMaxDensity = 0x34;
    public const nint m_flNewHDRColorScale = 0x38;
    public const nint m_flNewFarZ = 0x3C;
}

public static class CompMatMutatorCondition_t {
    public const nint m_nMutatorCondition = 0x0;
    public const nint m_strMutatorConditionContainerName = 0x8;
    public const nint m_strMutatorConditionContainerVarName = 0x10;
    public const nint m_strMutatorConditionContainerVarValue = 0x18;
    public const nint m_bPassWhenTrue = 0x20;
}

public static class CompMatPropertyMutator_t {
    public const nint m_bEnabled = 0x0;
    public const nint m_nMutatorCommandType = 0x4;
    public const nint m_strInitWith_Container = 0x8;
    public const nint m_strCopyProperty_InputContainerSrc = 0x10;
    public const nint m_strCopyProperty_InputContainerProperty = 0x18;
    public const nint m_strCopyProperty_TargetProperty = 0x20;
    public const nint m_strRandomRollInputVars_SeedInputVar = 0x28;
    public const nint m_vecRandomRollInputVars_InputVarsToRoll = 0x30;
    public const nint m_strCopyMatchingKeys_InputContainerSrc = 0x48;
    public const nint m_strCopyKeysWithSuffix_InputContainerSrc = 0x50;
    public const nint m_strCopyKeysWithSuffix_FindSuffix = 0x58;
    public const nint m_strCopyKeysWithSuffix_ReplaceSuffix = 0x60;
    public const nint m_nSetValue_Value = 0x68;
    public const nint m_strGenerateTexture_TargetParam = 0x2D8;
    public const nint m_strGenerateTexture_InitialContainer = 0x2E0;
    public const nint m_nResolution = 0x2E8;
    public const nint m_bIsScratchTarget = 0x2EC;
    public const nint m_bSplatDebugInfo = 0x2ED;
    public const nint m_bCaptureInRenderDoc = 0x2EE;
    public const nint m_vecTexGenInstructions = 0x2F0;
    public const nint m_vecConditionalMutators = 0x308;
    public const nint m_strPopInputQueue_Container = 0x320;
    public const nint m_strDrawText_InputContainerSrc = 0x328;
    public const nint m_strDrawText_InputContainerProperty = 0x330;
    public const nint m_vecDrawText_Position = 0x338;
    public const nint m_colDrawText_Color = 0x340;
    public const nint m_strDrawText_Font = 0x348;
    public const nint m_vecConditions = 0x350;
}

public static class CompositeMaterialAssemblyProcedure_t {
    public const nint m_vecCompMatIncludes = 0x0;
    public const nint m_vecMatchFilters = 0x18;
    public const nint m_vecCompositeInputContainers = 0x30;
    public const nint m_vecPropertyMutators = 0x48;
}

public static class CompositeMaterialEditorPoint_t {
    public const nint m_ModelName = 0x0;
    public const nint m_nSequenceIndex = 0xE0;
    public const nint m_flCycle = 0xE4;
    public const nint m_KVModelStateChoices = 0xE8;
    public const nint m_bEnableChildModel = 0xF8;
    public const nint m_ChildModelName = 0x100;
    public const nint m_vecCompositeMaterialAssemblyProcedures = 0x1E0;
    public const nint m_vecCompositeMaterials = 0x1F8;
}

public static class CompositeMaterialInputContainer_t {
    public const nint m_bEnabled = 0x0;
    public const nint m_nCompositeMaterialInputContainerSourceType = 0x4;
    public const nint m_strSpecificContainerMaterial = 0x8;
    public const nint m_strAttrName = 0xE8;
    public const nint m_strAlias = 0xF0;
    public const nint m_vecLooseVariables = 0xF8;
    public const nint m_strAttrNameForVar = 0x110;
    public const nint m_bExposeExternally = 0x118;
}

public static class CompositeMaterialInputLooseVariable_t {
    public const nint m_strName = 0x0;
    public const nint m_bExposeExternally = 0x8;
    public const nint m_strExposedFriendlyName = 0x10;
    public const nint m_strExposedFriendlyGroupName = 0x18;
    public const nint m_bExposedVariableIsFixedRange = 0x20;
    public const nint m_strExposedVisibleWhenTrue = 0x28;
    public const nint m_strExposedHiddenWhenTrue = 0x30;
    public const nint m_nVariableType = 0x38;
    public const nint m_bValueBoolean = 0x3C;
    public const nint m_nValueIntX = 0x40;
    public const nint m_nValueIntY = 0x44;
    public const nint m_nValueIntZ = 0x48;
    public const nint m_nValueIntW = 0x4C;
    public const nint m_bHasFloatBounds = 0x50;
    public const nint m_flValueFloatX = 0x54;
    public const nint m_flValueFloatX_Min = 0x58;
    public const nint m_flValueFloatX_Max = 0x5C;
    public const nint m_flValueFloatY = 0x60;
    public const nint m_flValueFloatY_Min = 0x64;
    public const nint m_flValueFloatY_Max = 0x68;
    public const nint m_flValueFloatZ = 0x6C;
    public const nint m_flValueFloatZ_Min = 0x70;
    public const nint m_flValueFloatZ_Max = 0x74;
    public const nint m_flValueFloatW = 0x78;
    public const nint m_flValueFloatW_Min = 0x7C;
    public const nint m_flValueFloatW_Max = 0x80;
    public const nint m_cValueColor4 = 0x84;
    public const nint m_nValueSystemVar = 0x88;
    public const nint m_strResourceMaterial = 0x90;
    public const nint m_strTextureContentAssetPath = 0x170;
    public const nint m_strTextureRuntimeResourcePath = 0x178;
    public const nint m_strTextureCompilationVtexTemplate = 0x258;
    public const nint m_nTextureType = 0x260;
    public const nint m_strString = 0x268;
}

public static class CompositeMaterialMatchFilter_t {
    public const nint m_nCompositeMaterialMatchFilterType = 0x0;
    public const nint m_strMatchFilter = 0x8;
    public const nint m_strMatchValue = 0x10;
    public const nint m_bPassWhenTrue = 0x18;
}

public static class CompositeMaterial_t {
    public const nint m_TargetKVs = 0x8;
    public const nint m_PreGenerationKVs = 0x18;
    public const nint m_FinalKVs = 0x28;
    public const nint m_vecGeneratedTextures = 0x40;
}

public static class CountdownTimer {
    public const nint m_duration = 0x8;
    public const nint m_timestamp = 0xC;
    public const nint m_timescale = 0x10;
    public const nint m_nWorldGroupId = 0x14;
}

public static class EngineCountdownTimer {
    public const nint m_duration = 0x8;
    public const nint m_timestamp = 0xC;
    public const nint m_timescale = 0x10;
}

public static class EntityRenderAttribute_t {
    public const nint m_ID = 0x30;
    public const nint m_Values = 0x34;
}

public static class EntitySpottedState_t {
    public const nint m_bSpotted = 0x8;
    public const nint m_bSpottedByMask = 0xC;
}

public static class GeneratedTextureHandle_t {
    public const nint m_strBitmapName = 0x0;
}

public static class IntervalTimer {
    public const nint m_timestamp = 0x8;
    public const nint m_nWorldGroupId = 0xC;
}

public static class PhysicsRagdollPose_t {
    public const nint __m_pChainEntity = 0x8;
    public const nint m_Transforms = 0x30;
    public const nint m_hOwner = 0x48;
    public const nint m_bDirty = 0x68;
}

public static class SellbackPurchaseEntry_t {
    public const nint m_unDefIdx = 0x30;
    public const nint m_nCost = 0x34;
    public const nint m_nPrevArmor = 0x38;
    public const nint m_bPrevHelmet = 0x3C;
    public const nint m_hItem = 0x40;
}

public static class TimedEvent {
    public const nint m_TimeBetweenEvents = 0x0;
    public const nint m_fNextEvent = 0x4;
}

public static class VPhysicsCollisionAttribute_t {
    public const nint m_nInteractsAs = 0x8;
    public const nint m_nInteractsWith = 0x10;
    public const nint m_nInteractsExclude = 0x18;
    public const nint m_nEntityId = 0x20;
    public const nint m_nOwnerId = 0x24;
    public const nint m_nHierarchyId = 0x28;
    public const nint m_nCollisionGroup = 0x2A;
    public const nint m_nCollisionFunctionMask = 0x2B;
}

public static class ViewAngleServerChange_t {
    public const nint nType = 0x30;
    public const nint qAngle = 0x34;
    public const nint nIndex = 0x40;
}

public static class WeaponPurchaseCount_t {
    public const nint m_nItemDefIndex = 0x30;
    public const nint m_nCount = 0x32;
}

public static class WeaponPurchaseTracker_t {
    public const nint m_weaponPurchases = 0x8;
}

public static class audioparams_t {
    public const nint localSound = 0x8;
    public const nint soundscapeIndex = 0x68;
    public const nint localBits = 0x6C;
    public const nint soundscapeEntityListIndex = 0x70;
    public const nint soundEventHash = 0x74;
}

public static class fogparams_t {
    public const nint dirPrimary = 0x8;
    public const nint colorPrimary = 0x14;
    public const nint colorSecondary = 0x18;
    public const nint colorPrimaryLerpTo = 0x1C;
    public const nint colorSecondaryLerpTo = 0x20;
    public const nint start = 0x24;
    public const nint end = 0x28;
    public const nint farz = 0x2C;
    public const nint maxdensity = 0x30;
    public const nint exponent = 0x34;
    public const nint HDRColorScale = 0x38;
    public const nint skyboxFogFactor = 0x3C;
    public const nint skyboxFogFactorLerpTo = 0x40;
    public const nint startLerpTo = 0x44;
    public const nint endLerpTo = 0x48;
    public const nint maxdensityLerpTo = 0x4C;
    public const nint lerptime = 0x50;
    public const nint duration = 0x54;
    public const nint blendtobackground = 0x58;
    public const nint scattering = 0x5C;
    public const nint locallightscale = 0x60;
    public const nint enable = 0x64;
    public const nint blend = 0x65;
    public const nint m_bNoReflectionFog = 0x66;
    public const nint m_bPadding = 0x67;
}

public static class shard_model_desc_t {
    public const nint m_nModelID = 0x8;
    public const nint m_hMaterial = 0x10;
    public const nint m_solid = 0x18;
    public const nint m_ShatterPanelMode = 0x19;
    public const nint m_vecPanelSize = 0x1C;
    public const nint m_vecStressPositionA = 0x24;
    public const nint m_vecStressPositionB = 0x2C;
    public const nint m_vecPanelVertices = 0x38;
    public const nint m_flGlassHalfThickness = 0x50;
    public const nint m_bHasParent = 0x54;
    public const nint m_bParentFrozen = 0x55;
    public const nint m_SurfacePropStringToken = 0x58;
    public const nint m_LightGroup = 0x5C;
}

public static class sky3dparams_t {
    public const nint scale = 0x8;
    public const nint origin = 0xC;
    public const nint bClip3DSkyBoxNearToWorldFar = 0x18;
    public const nint flClip3DSkyBoxNearToWorldFarOffset = 0x1C;
    public const nint fog = 0x20;
    public const nint m_nWorldGroupID = 0x88;
}