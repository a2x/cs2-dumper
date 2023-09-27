#pragma once

#include <cstddef>

namespace ActiveModelConfig_t {
    constexpr std::ptrdiff_t m_Handle = 0x28;
    constexpr std::ptrdiff_t m_Name = 0x30;
    constexpr std::ptrdiff_t m_AssociatedEntities = 0x38;
    constexpr std::ptrdiff_t m_AssociatedEntityNames = 0x50;
}

namespace CAnimGraphNetworkedVariables {
    constexpr std::ptrdiff_t m_PredNetBoolVariables = 0x8;
    constexpr std::ptrdiff_t m_PredNetByteVariables = 0x20;
    constexpr std::ptrdiff_t m_PredNetUInt16Variables = 0x38;
    constexpr std::ptrdiff_t m_PredNetIntVariables = 0x50;
    constexpr std::ptrdiff_t m_PredNetUInt32Variables = 0x68;
    constexpr std::ptrdiff_t m_PredNetUInt64Variables = 0x80;
    constexpr std::ptrdiff_t m_PredNetFloatVariables = 0x98;
    constexpr std::ptrdiff_t m_PredNetVectorVariables = 0xB0;
    constexpr std::ptrdiff_t m_PredNetQuaternionVariables = 0xC8;
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetBoolVariables = 0xE0;
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetByteVariables = 0xF8;
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt16Variables = 0x110;
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetIntVariables = 0x128;
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt32Variables = 0x140;
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt64Variables = 0x158;
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetFloatVariables = 0x170;
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetVectorVariables = 0x188;
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetQuaternionVariables = 0x1A0;
    constexpr std::ptrdiff_t m_nBoolVariablesCount = 0x1B8;
    constexpr std::ptrdiff_t m_nOwnerOnlyBoolVariablesCount = 0x1BC;
    constexpr std::ptrdiff_t m_nRandomSeedOffset = 0x1C0;
    constexpr std::ptrdiff_t m_flLastTeleportTime = 0x1C4;
}

namespace CAttributeList {
    constexpr std::ptrdiff_t m_Attributes = 0x8;
    constexpr std::ptrdiff_t m_pManager = 0x58;
}

namespace CAttributeManager {
    constexpr std::ptrdiff_t m_Providers = 0x8;
    constexpr std::ptrdiff_t m_iReapplyProvisionParity = 0x20;
    constexpr std::ptrdiff_t m_hOuter = 0x24;
    constexpr std::ptrdiff_t m_bPreventLoopback = 0x28;
    constexpr std::ptrdiff_t m_ProviderType = 0x2C;
    constexpr std::ptrdiff_t m_CachedResults = 0x30;
}

namespace CAttributeManager_cached_attribute_float_t {
    constexpr std::ptrdiff_t flIn = 0x0;
    constexpr std::ptrdiff_t iAttribHook = 0x8;
    constexpr std::ptrdiff_t flOut = 0x10;
}

namespace CBaseAnimGraph {
    constexpr std::ptrdiff_t m_bInitiallyPopulateInterpHistory = 0xCC0;
    constexpr std::ptrdiff_t m_bShouldAnimateDuringGameplayPause = 0xCC1;
    constexpr std::ptrdiff_t m_bSuppressAnimEventSounds = 0xCC3;
    constexpr std::ptrdiff_t m_bAnimGraphUpdateEnabled = 0xCD0;
    constexpr std::ptrdiff_t m_flMaxSlopeDistance = 0xCD4;
    constexpr std::ptrdiff_t m_vLastSlopeCheckPos = 0xCD8;
    constexpr std::ptrdiff_t m_vecForce = 0xCE8;
    constexpr std::ptrdiff_t m_nForceBone = 0xCF4;
    constexpr std::ptrdiff_t m_pClientsideRagdoll = 0xCF8;
    constexpr std::ptrdiff_t m_bBuiltRagdoll = 0xD00;
    constexpr std::ptrdiff_t m_pRagdollPose = 0xD18;
    constexpr std::ptrdiff_t m_bClientRagdoll = 0xD20;
    constexpr std::ptrdiff_t m_bHasAnimatedMaterialAttributes = 0xD30;
}

namespace CBaseAnimGraphController {
    constexpr std::ptrdiff_t m_baseLayer = 0x18;
    constexpr std::ptrdiff_t m_animGraphNetworkedVars = 0x40;
    constexpr std::ptrdiff_t m_bSequenceFinished = 0x1320;
    constexpr std::ptrdiff_t m_flLastEventCycle = 0x1324;
    constexpr std::ptrdiff_t m_flLastEventAnimTime = 0x1328;
    constexpr std::ptrdiff_t m_flPlaybackRate = 0x132C;
    constexpr std::ptrdiff_t m_flPrevAnimTime = 0x1334;
    constexpr std::ptrdiff_t m_bClientSideAnimation = 0x1338;
    constexpr std::ptrdiff_t m_bNetworkedAnimationInputsChanged = 0x1339;
    constexpr std::ptrdiff_t m_nPrevNewSequenceParity = 0x133A;
    constexpr std::ptrdiff_t m_nPrevResetEventsParity = 0x133B;
    constexpr std::ptrdiff_t m_nNewSequenceParity = 0x133C;
    constexpr std::ptrdiff_t m_nResetEventsParity = 0x1340;
    constexpr std::ptrdiff_t m_nAnimLoopMode = 0x1344;
    constexpr std::ptrdiff_t m_hAnimationUpdate = 0x13E4;
    constexpr std::ptrdiff_t m_hLastAnimEventSequence = 0x13E8;
}

namespace CBasePlayerController {
    constexpr std::ptrdiff_t m_nFinalPredictedTick = 0x548;
    constexpr std::ptrdiff_t m_CommandContext = 0x550;
    constexpr std::ptrdiff_t m_nInButtonsWhichAreToggles = 0x5D0;
    constexpr std::ptrdiff_t m_nTickBase = 0x5D8;
    constexpr std::ptrdiff_t m_hPawn = 0x5DC;
    constexpr std::ptrdiff_t m_hPredictedPawn = 0x5E0;
    constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x5E4;
    constexpr std::ptrdiff_t m_hSplitOwner = 0x5E8;
    constexpr std::ptrdiff_t m_hSplitScreenPlayers = 0x5F0;
    constexpr std::ptrdiff_t m_bIsHLTV = 0x608;
    constexpr std::ptrdiff_t m_iConnected = 0x60C;
    constexpr std::ptrdiff_t m_iszPlayerName = 0x610;
    constexpr std::ptrdiff_t m_steamID = 0x698;
    constexpr std::ptrdiff_t m_bIsLocalPlayerController = 0x6A0;
    constexpr std::ptrdiff_t m_iDesiredFOV = 0x6A4;
}

namespace CBasePlayerVData {
    constexpr std::ptrdiff_t m_sModelName = 0x28;
    constexpr std::ptrdiff_t m_flHeadDamageMultiplier = 0x108;
    constexpr std::ptrdiff_t m_flChestDamageMultiplier = 0x118;
    constexpr std::ptrdiff_t m_flStomachDamageMultiplier = 0x128;
    constexpr std::ptrdiff_t m_flArmDamageMultiplier = 0x138;
    constexpr std::ptrdiff_t m_flLegDamageMultiplier = 0x148;
    constexpr std::ptrdiff_t m_flHoldBreathTime = 0x158;
    constexpr std::ptrdiff_t m_flDrowningDamageInterval = 0x15C;
    constexpr std::ptrdiff_t m_nDrowningDamageInitial = 0x160;
    constexpr std::ptrdiff_t m_nDrowningDamageMax = 0x164;
    constexpr std::ptrdiff_t m_nWaterSpeed = 0x168;
    constexpr std::ptrdiff_t m_flUseRange = 0x16C;
    constexpr std::ptrdiff_t m_flUseAngleTolerance = 0x170;
    constexpr std::ptrdiff_t m_flCrouchTime = 0x174;
}

namespace CBasePlayerWeaponVData {
    constexpr std::ptrdiff_t m_szWorldModel = 0x28;
    constexpr std::ptrdiff_t m_bBuiltRightHanded = 0x108;
    constexpr std::ptrdiff_t m_bAllowFlipping = 0x109;
    constexpr std::ptrdiff_t m_bIsFullAuto = 0x10A;
    constexpr std::ptrdiff_t m_nNumBullets = 0x10C;
    constexpr std::ptrdiff_t m_sMuzzleAttachment = 0x110;
    constexpr std::ptrdiff_t m_szMuzzleFlashParticle = 0x118;
    constexpr std::ptrdiff_t m_iFlags = 0x1F8;
    constexpr std::ptrdiff_t m_nPrimaryAmmoType = 0x1F9;
    constexpr std::ptrdiff_t m_nSecondaryAmmoType = 0x1FA;
    constexpr std::ptrdiff_t m_iMaxClip1 = 0x1FC;
    constexpr std::ptrdiff_t m_iMaxClip2 = 0x200;
    constexpr std::ptrdiff_t m_iDefaultClip1 = 0x204;
    constexpr std::ptrdiff_t m_iDefaultClip2 = 0x208;
    constexpr std::ptrdiff_t m_iWeight = 0x20C;
    constexpr std::ptrdiff_t m_bAutoSwitchTo = 0x210;
    constexpr std::ptrdiff_t m_bAutoSwitchFrom = 0x211;
    constexpr std::ptrdiff_t m_iRumbleEffect = 0x214;
    constexpr std::ptrdiff_t m_aShootSounds = 0x218;
    constexpr std::ptrdiff_t m_iSlot = 0x238;
    constexpr std::ptrdiff_t m_iPosition = 0x23C;
}

namespace CBaseProp {
    constexpr std::ptrdiff_t m_bModelOverrodeBlockLOS = 0xE80;
    constexpr std::ptrdiff_t m_iShapeType = 0xE84;
    constexpr std::ptrdiff_t m_bConformToCollisionBounds = 0xE88;
    constexpr std::ptrdiff_t m_mPreferredCatchTransform = 0xE8C;
}

namespace CBodyComponent {
    constexpr std::ptrdiff_t m_pSceneNode = 0x8;
    constexpr std::ptrdiff_t __m_pChainEntity = 0x20;
}

namespace CBodyComponentBaseAnimGraph {
    constexpr std::ptrdiff_t m_animationController = 0x470;
    constexpr std::ptrdiff_t __m_pChainEntity = 0x18B0;
}

namespace CBodyComponentBaseModelEntity {
    constexpr std::ptrdiff_t __m_pChainEntity = 0x470;
}

namespace CBodyComponentPoint {
    constexpr std::ptrdiff_t m_sceneNode = 0x50;
    constexpr std::ptrdiff_t __m_pChainEntity = 0x1A0;
}

namespace CBodyComponentSkeletonInstance {
    constexpr std::ptrdiff_t m_skeletonInstance = 0x50;
    constexpr std::ptrdiff_t __m_pChainEntity = 0x440;
}

namespace CBombTarget {
    constexpr std::ptrdiff_t m_bBombPlantedHere = 0xCC8;
}

namespace CBuoyancyHelper {
    constexpr std::ptrdiff_t m_flFluidDensity = 0x18;
}

namespace CCSGameModeRules {
    constexpr std::ptrdiff_t __m_pChainEntity = 0x8;
}

namespace CCSGameModeRules_Deathmatch {
    constexpr std::ptrdiff_t m_bFirstThink = 0x30;
    constexpr std::ptrdiff_t m_bFirstThinkAfterConnected = 0x31;
    constexpr std::ptrdiff_t m_flDMBonusStartTime = 0x34;
    constexpr std::ptrdiff_t m_flDMBonusTimeLength = 0x38;
    constexpr std::ptrdiff_t m_nDMBonusWeaponLoadoutSlot = 0x3C;
}

namespace CCSObserver_ObserverServices {
    constexpr std::ptrdiff_t m_hLastObserverTarget = 0x58;
    constexpr std::ptrdiff_t m_vecObserverInterpolateOffset = 0x5C;
    constexpr std::ptrdiff_t m_vecObserverInterpStartPos = 0x68;
    constexpr std::ptrdiff_t m_flObsInterp_PathLength = 0x74;
    constexpr std::ptrdiff_t m_qObsInterp_OrientationStart = 0x80;
    constexpr std::ptrdiff_t m_qObsInterp_OrientationTravelDir = 0x90;
    constexpr std::ptrdiff_t m_obsInterpState = 0xA0;
    constexpr std::ptrdiff_t m_bObserverInterpolationNeedsDeferredSetup = 0xA4;
}

namespace CCSPlayerBase_CameraServices {
    constexpr std::ptrdiff_t m_iFOV = 0x210;
    constexpr std::ptrdiff_t m_iFOVStart = 0x214;
    constexpr std::ptrdiff_t m_flFOVTime = 0x218;
    constexpr std::ptrdiff_t m_flFOVRate = 0x21C;
    constexpr std::ptrdiff_t m_hZoomOwner = 0x220;
    constexpr std::ptrdiff_t m_flLastShotFOV = 0x224;
}

namespace CCSPlayerController {
    constexpr std::ptrdiff_t m_pInGameMoneyServices = 0x6D0;
    constexpr std::ptrdiff_t m_pInventoryServices = 0x6D8;
    constexpr std::ptrdiff_t m_pActionTrackingServices = 0x6E0;
    constexpr std::ptrdiff_t m_pDamageServices = 0x6E8;
    constexpr std::ptrdiff_t m_iPing = 0x6F0;
    constexpr std::ptrdiff_t m_bHasCommunicationAbuseMute = 0x6F4;
    constexpr std::ptrdiff_t m_szCrosshairCodes = 0x6F8;
    constexpr std::ptrdiff_t m_iPendingTeamNum = 0x700;
    constexpr std::ptrdiff_t m_flForceTeamTime = 0x704;
    constexpr std::ptrdiff_t m_iCompTeammateColor = 0x708;
    constexpr std::ptrdiff_t m_bEverPlayedOnTeam = 0x70C;
    constexpr std::ptrdiff_t m_flPreviousForceJoinTeamTime = 0x710;
    constexpr std::ptrdiff_t m_szClan = 0x718;
    constexpr std::ptrdiff_t m_sSanitizedPlayerName = 0x720;
    constexpr std::ptrdiff_t m_iCoachingTeam = 0x728;
    constexpr std::ptrdiff_t m_nPlayerDominated = 0x730;
    constexpr std::ptrdiff_t m_nPlayerDominatingMe = 0x738;
    constexpr std::ptrdiff_t m_iCompetitiveRanking = 0x740;
    constexpr std::ptrdiff_t m_iCompetitiveWins = 0x744;
    constexpr std::ptrdiff_t m_iCompetitiveRankType = 0x748;
    constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Win = 0x74C;
    constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Loss = 0x750;
    constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Tie = 0x754;
    constexpr std::ptrdiff_t m_nEndMatchNextMapVote = 0x758;
    constexpr std::ptrdiff_t m_unActiveQuestId = 0x75C;
    constexpr std::ptrdiff_t m_nQuestProgressReason = 0x760;
    constexpr std::ptrdiff_t m_unPlayerTvControlFlags = 0x764;
    constexpr std::ptrdiff_t m_iDraftIndex = 0x7D0;
    constexpr std::ptrdiff_t m_msQueuedModeDisconnectionTimestamp = 0x7D4;
    constexpr std::ptrdiff_t m_uiAbandonRecordedReason = 0x7D8;
    constexpr std::ptrdiff_t m_bEverFullyConnected = 0x7DC;
    constexpr std::ptrdiff_t m_bAbandonAllowsSurrender = 0x7DD;
    constexpr std::ptrdiff_t m_bAbandonOffersInstantSurrender = 0x7DE;
    constexpr std::ptrdiff_t m_bDisconnection1MinWarningPrinted = 0x7DF;
    constexpr std::ptrdiff_t m_bScoreReported = 0x7E0;
    constexpr std::ptrdiff_t m_nDisconnectionTick = 0x7E4;
    constexpr std::ptrdiff_t m_bControllingBot = 0x7F0;
    constexpr std::ptrdiff_t m_bHasControlledBotThisRound = 0x7F1;
    constexpr std::ptrdiff_t m_bHasBeenControlledByPlayerThisRound = 0x7F2;
    constexpr std::ptrdiff_t m_nBotsControlledThisRound = 0x7F4;
    constexpr std::ptrdiff_t m_bCanControlObservedBot = 0x7F8;
    constexpr std::ptrdiff_t m_hPlayerPawn = 0x7FC;
    constexpr std::ptrdiff_t m_hObserverPawn = 0x800;
    constexpr std::ptrdiff_t m_bPawnIsAlive = 0x804;
    constexpr std::ptrdiff_t m_iPawnHealth = 0x808;
    constexpr std::ptrdiff_t m_iPawnArmor = 0x80C;
    constexpr std::ptrdiff_t m_bPawnHasDefuser = 0x810;
    constexpr std::ptrdiff_t m_bPawnHasHelmet = 0x811;
    constexpr std::ptrdiff_t m_nPawnCharacterDefIndex = 0x812;
    constexpr std::ptrdiff_t m_iPawnLifetimeStart = 0x814;
    constexpr std::ptrdiff_t m_iPawnLifetimeEnd = 0x818;
    constexpr std::ptrdiff_t m_iPawnBotDifficulty = 0x81C;
    constexpr std::ptrdiff_t m_hOriginalControllerOfCurrentPawn = 0x820;
    constexpr std::ptrdiff_t m_iScore = 0x824;
    constexpr std::ptrdiff_t m_vecKills = 0x828;
    constexpr std::ptrdiff_t m_iMVPs = 0x840;
    constexpr std::ptrdiff_t m_bIsPlayerNameDirty = 0x844;
}

namespace CCSPlayerController_ActionTrackingServices {
    constexpr std::ptrdiff_t m_perRoundStats = 0x40;
    constexpr std::ptrdiff_t m_matchStats = 0x90;
    constexpr std::ptrdiff_t m_iNumRoundKills = 0x108;
    constexpr std::ptrdiff_t m_iNumRoundKillsHeadshots = 0x10C;
}

namespace CCSPlayerController_DamageServices {
    constexpr std::ptrdiff_t m_nSendUpdate = 0x40;
    constexpr std::ptrdiff_t m_DamageList = 0x48;
}

namespace CCSPlayerController_InGameMoneyServices {
    constexpr std::ptrdiff_t m_iAccount = 0x40;
    constexpr std::ptrdiff_t m_iStartAccount = 0x44;
    constexpr std::ptrdiff_t m_iTotalCashSpent = 0x48;
    constexpr std::ptrdiff_t m_iCashSpentThisRound = 0x4C;
    constexpr std::ptrdiff_t m_nPreviousAccount = 0x50;
}

namespace CCSPlayerController_InventoryServices {
    constexpr std::ptrdiff_t m_unMusicID = 0x40;
    constexpr std::ptrdiff_t m_rank = 0x44;
    constexpr std::ptrdiff_t m_nPersonaDataPublicLevel = 0x5C;
    constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsLeader = 0x60;
    constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsTeacher = 0x64;
    constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsFriendly = 0x68;
    constexpr std::ptrdiff_t m_vecTerroristLoadoutCache = 0x70;
    constexpr std::ptrdiff_t m_vecCounterTerroristLoadoutCache = 0xC0;
}

namespace CCSPlayer_ActionTrackingServices {
    constexpr std::ptrdiff_t m_hLastWeaponBeforeC4AutoSwitch = 0x40;
    constexpr std::ptrdiff_t m_bIsRescuing = 0x44;
    constexpr std::ptrdiff_t m_weaponPurchasesThisMatch = 0x48;
    constexpr std::ptrdiff_t m_weaponPurchasesThisRound = 0xA0;
}

namespace CCSPlayer_BulletServices {
    constexpr std::ptrdiff_t m_totalHitsOnServer = 0x40;
}

namespace CCSPlayer_BuyServices {
    constexpr std::ptrdiff_t m_vecSellbackPurchaseEntries = 0x40;
}

namespace CCSPlayer_CameraServices {
    constexpr std::ptrdiff_t m_flDeathCamTilt = 0x228;
}

namespace CCSPlayer_HostageServices {
    constexpr std::ptrdiff_t m_hCarriedHostage = 0x40;
    constexpr std::ptrdiff_t m_hCarriedHostageProp = 0x44;
}

namespace CCSPlayer_ItemServices {
    constexpr std::ptrdiff_t m_bHasDefuser = 0x40;
    constexpr std::ptrdiff_t m_bHasHelmet = 0x41;
    constexpr std::ptrdiff_t m_bHasHeavyArmor = 0x42;
}

namespace CCSPlayer_MovementServices {
    constexpr std::ptrdiff_t m_flMaxFallVelocity = 0x210;
    constexpr std::ptrdiff_t m_vecLadderNormal = 0x214;
    constexpr std::ptrdiff_t m_nLadderSurfacePropIndex = 0x220;
    constexpr std::ptrdiff_t m_flDuckAmount = 0x224;
    constexpr std::ptrdiff_t m_flDuckSpeed = 0x228;
    constexpr std::ptrdiff_t m_bDuckOverride = 0x22C;
    constexpr std::ptrdiff_t m_bDesiresDuck = 0x22D;
    constexpr std::ptrdiff_t m_flDuckOffset = 0x230;
    constexpr std::ptrdiff_t m_nDuckTimeMsecs = 0x234;
    constexpr std::ptrdiff_t m_nDuckJumpTimeMsecs = 0x238;
    constexpr std::ptrdiff_t m_nJumpTimeMsecs = 0x23C;
    constexpr std::ptrdiff_t m_flLastDuckTime = 0x240;
    constexpr std::ptrdiff_t m_vecLastPositionAtFullCrouchSpeed = 0x250;
    constexpr std::ptrdiff_t m_duckUntilOnGround = 0x258;
    constexpr std::ptrdiff_t m_bHasWalkMovedSinceLastJump = 0x259;
    constexpr std::ptrdiff_t m_bInStuckTest = 0x25A;
    constexpr std::ptrdiff_t m_flStuckCheckTime = 0x268;
    constexpr std::ptrdiff_t m_nTraceCount = 0x468;
    constexpr std::ptrdiff_t m_StuckLast = 0x46C;
    constexpr std::ptrdiff_t m_bSpeedCropped = 0x470;
    constexpr std::ptrdiff_t m_nOldWaterLevel = 0x474;
    constexpr std::ptrdiff_t m_flWaterEntryTime = 0x478;
    constexpr std::ptrdiff_t m_vecForward = 0x47C;
    constexpr std::ptrdiff_t m_vecLeft = 0x488;
    constexpr std::ptrdiff_t m_vecUp = 0x494;
    constexpr std::ptrdiff_t m_vecPreviouslyPredictedOrigin = 0x4A0;
    constexpr std::ptrdiff_t m_bOldJumpPressed = 0x4AC;
    constexpr std::ptrdiff_t m_flJumpPressedTime = 0x4B0;
    constexpr std::ptrdiff_t m_flJumpUntil = 0x4B4;
    constexpr std::ptrdiff_t m_flJumpVel = 0x4B8;
    constexpr std::ptrdiff_t m_fStashGrenadeParameterWhen = 0x4BC;
    constexpr std::ptrdiff_t m_nButtonDownMaskPrev = 0x4C0;
    constexpr std::ptrdiff_t m_flOffsetTickCompleteTime = 0x4C8;
    constexpr std::ptrdiff_t m_flOffsetTickStashedSpeed = 0x4CC;
    constexpr std::ptrdiff_t m_flStamina = 0x4D0;
    constexpr std::ptrdiff_t m_bUpdatePredictedOriginAfterDataUpdate = 0x4D4;
}

namespace CCSPlayer_PingServices {
    constexpr std::ptrdiff_t m_hPlayerPing = 0x40;
}

namespace CCSPlayer_ViewModelServices {
    constexpr std::ptrdiff_t m_hViewModel = 0x40;
}

namespace CCSPlayer_WaterServices {
    constexpr std::ptrdiff_t m_flWaterJumpTime = 0x40;
    constexpr std::ptrdiff_t m_vecWaterJumpVel = 0x44;
    constexpr std::ptrdiff_t m_flSwimSoundTime = 0x50;
}

namespace CCSPlayer_WeaponServices {
    constexpr std::ptrdiff_t m_flNextAttack = 0xA8;
    constexpr std::ptrdiff_t m_bIsLookingAtWeapon = 0xAC;
    constexpr std::ptrdiff_t m_bIsHoldingLookAtWeapon = 0xAD;
}

namespace CCSWeaponBaseVData {
    constexpr std::ptrdiff_t m_WeaponType = 0x240;
    constexpr std::ptrdiff_t m_WeaponCategory = 0x244;
    constexpr std::ptrdiff_t m_szViewModel = 0x248;
    constexpr std::ptrdiff_t m_szPlayerModel = 0x328;
    constexpr std::ptrdiff_t m_szWorldDroppedModel = 0x408;
    constexpr std::ptrdiff_t m_szAimsightLensMaskModel = 0x4E8;
    constexpr std::ptrdiff_t m_szMagazineModel = 0x5C8;
    constexpr std::ptrdiff_t m_szHeatEffect = 0x6A8;
    constexpr std::ptrdiff_t m_szEjectBrassEffect = 0x788;
    constexpr std::ptrdiff_t m_szMuzzleFlashParticleAlt = 0x868;
    constexpr std::ptrdiff_t m_szMuzzleFlashThirdPersonParticle = 0x948;
    constexpr std::ptrdiff_t m_szMuzzleFlashThirdPersonParticleAlt = 0xA28;
    constexpr std::ptrdiff_t m_szTracerParticle = 0xB08;
    constexpr std::ptrdiff_t m_GearSlot = 0xBE8;
    constexpr std::ptrdiff_t m_GearSlotPosition = 0xBEC;
    constexpr std::ptrdiff_t m_DefaultLoadoutSlot = 0xBF0;
    constexpr std::ptrdiff_t m_sWrongTeamMsg = 0xBF8;
    constexpr std::ptrdiff_t m_nPrice = 0xC00;
    constexpr std::ptrdiff_t m_nKillAward = 0xC04;
    constexpr std::ptrdiff_t m_nPrimaryReserveAmmoMax = 0xC08;
    constexpr std::ptrdiff_t m_nSecondaryReserveAmmoMax = 0xC0C;
    constexpr std::ptrdiff_t m_bMeleeWeapon = 0xC10;
    constexpr std::ptrdiff_t m_bHasBurstMode = 0xC11;
    constexpr std::ptrdiff_t m_bIsRevolver = 0xC12;
    constexpr std::ptrdiff_t m_bCannotShootUnderwater = 0xC13;
    constexpr std::ptrdiff_t m_szName = 0xC18;
    constexpr std::ptrdiff_t m_szAnimExtension = 0xC20;
    constexpr std::ptrdiff_t m_eSilencerType = 0xC28;
    constexpr std::ptrdiff_t m_nCrosshairMinDistance = 0xC2C;
    constexpr std::ptrdiff_t m_nCrosshairDeltaDistance = 0xC30;
    constexpr std::ptrdiff_t m_flCycleTime = 0xC34;
    constexpr std::ptrdiff_t m_flMaxSpeed = 0xC3C;
    constexpr std::ptrdiff_t m_flSpread = 0xC44;
    constexpr std::ptrdiff_t m_flInaccuracyCrouch = 0xC4C;
    constexpr std::ptrdiff_t m_flInaccuracyStand = 0xC54;
    constexpr std::ptrdiff_t m_flInaccuracyJump = 0xC5C;
    constexpr std::ptrdiff_t m_flInaccuracyLand = 0xC64;
    constexpr std::ptrdiff_t m_flInaccuracyLadder = 0xC6C;
    constexpr std::ptrdiff_t m_flInaccuracyFire = 0xC74;
    constexpr std::ptrdiff_t m_flInaccuracyMove = 0xC7C;
    constexpr std::ptrdiff_t m_flRecoilAngle = 0xC84;
    constexpr std::ptrdiff_t m_flRecoilAngleVariance = 0xC8C;
    constexpr std::ptrdiff_t m_flRecoilMagnitude = 0xC94;
    constexpr std::ptrdiff_t m_flRecoilMagnitudeVariance = 0xC9C;
    constexpr std::ptrdiff_t m_nTracerFrequency = 0xCA4;
    constexpr std::ptrdiff_t m_flInaccuracyJumpInitial = 0xCAC;
    constexpr std::ptrdiff_t m_flInaccuracyJumpApex = 0xCB0;
    constexpr std::ptrdiff_t m_flInaccuracyReload = 0xCB4;
    constexpr std::ptrdiff_t m_nRecoilSeed = 0xCB8;
    constexpr std::ptrdiff_t m_nSpreadSeed = 0xCBC;
    constexpr std::ptrdiff_t m_flTimeToIdleAfterFire = 0xCC0;
    constexpr std::ptrdiff_t m_flIdleInterval = 0xCC4;
    constexpr std::ptrdiff_t m_flAttackMovespeedFactor = 0xCC8;
    constexpr std::ptrdiff_t m_flHeatPerShot = 0xCCC;
    constexpr std::ptrdiff_t m_flInaccuracyPitchShift = 0xCD0;
    constexpr std::ptrdiff_t m_flInaccuracyAltSoundThreshold = 0xCD4;
    constexpr std::ptrdiff_t m_flBotAudibleRange = 0xCD8;
    constexpr std::ptrdiff_t m_szUseRadioSubtitle = 0xCE0;
    constexpr std::ptrdiff_t m_bUnzoomsAfterShot = 0xCE8;
    constexpr std::ptrdiff_t m_bHideViewModelWhenZoomed = 0xCE9;
    constexpr std::ptrdiff_t m_nZoomLevels = 0xCEC;
    constexpr std::ptrdiff_t m_nZoomFOV1 = 0xCF0;
    constexpr std::ptrdiff_t m_nZoomFOV2 = 0xCF4;
    constexpr std::ptrdiff_t m_flZoomTime0 = 0xCF8;
    constexpr std::ptrdiff_t m_flZoomTime1 = 0xCFC;
    constexpr std::ptrdiff_t m_flZoomTime2 = 0xD00;
    constexpr std::ptrdiff_t m_flIronSightPullUpSpeed = 0xD04;
    constexpr std::ptrdiff_t m_flIronSightPutDownSpeed = 0xD08;
    constexpr std::ptrdiff_t m_flIronSightFOV = 0xD0C;
    constexpr std::ptrdiff_t m_flIronSightPivotForward = 0xD10;
    constexpr std::ptrdiff_t m_flIronSightLooseness = 0xD14;
    constexpr std::ptrdiff_t m_angPivotAngle = 0xD18;
    constexpr std::ptrdiff_t m_vecIronSightEyePos = 0xD24;
    constexpr std::ptrdiff_t m_nDamage = 0xD30;
    constexpr std::ptrdiff_t m_flHeadshotMultiplier = 0xD34;
    constexpr std::ptrdiff_t m_flArmorRatio = 0xD38;
    constexpr std::ptrdiff_t m_flPenetration = 0xD3C;
    constexpr std::ptrdiff_t m_flRange = 0xD40;
    constexpr std::ptrdiff_t m_flRangeModifier = 0xD44;
    constexpr std::ptrdiff_t m_flFlinchVelocityModifierLarge = 0xD48;
    constexpr std::ptrdiff_t m_flFlinchVelocityModifierSmall = 0xD4C;
    constexpr std::ptrdiff_t m_flRecoveryTimeCrouch = 0xD50;
    constexpr std::ptrdiff_t m_flRecoveryTimeStand = 0xD54;
    constexpr std::ptrdiff_t m_flRecoveryTimeCrouchFinal = 0xD58;
    constexpr std::ptrdiff_t m_flRecoveryTimeStandFinal = 0xD5C;
    constexpr std::ptrdiff_t m_nRecoveryTransitionStartBullet = 0xD60;
    constexpr std::ptrdiff_t m_nRecoveryTransitionEndBullet = 0xD64;
    constexpr std::ptrdiff_t m_flThrowVelocity = 0xD68;
    constexpr std::ptrdiff_t m_vSmokeColor = 0xD6C;
    constexpr std::ptrdiff_t m_szAnimClass = 0xD78;
}

namespace CClientAlphaProperty {
    constexpr std::ptrdiff_t m_nRenderFX = 0x10;
    constexpr std::ptrdiff_t m_nRenderMode = 0x11;
    constexpr std::ptrdiff_t m_bAlphaOverride = 0x0;
    constexpr std::ptrdiff_t m_bShadowAlphaOverride = 0x0;
    constexpr std::ptrdiff_t m_nReserved = 0x0;
    constexpr std::ptrdiff_t m_nAlpha = 0x13;
    constexpr std::ptrdiff_t m_nDesyncOffset = 0x14;
    constexpr std::ptrdiff_t m_nReserved2 = 0x16;
    constexpr std::ptrdiff_t m_nDistFadeStart = 0x18;
    constexpr std::ptrdiff_t m_nDistFadeEnd = 0x1A;
    constexpr std::ptrdiff_t m_flFadeScale = 0x1C;
    constexpr std::ptrdiff_t m_flRenderFxStartTime = 0x20;
    constexpr std::ptrdiff_t m_flRenderFxDuration = 0x24;
}

namespace CCollisionProperty {
    constexpr std::ptrdiff_t m_collisionAttribute = 0x10;
    constexpr std::ptrdiff_t m_vecMins = 0x40;
    constexpr std::ptrdiff_t m_vecMaxs = 0x4C;
    constexpr std::ptrdiff_t m_usSolidFlags = 0x5A;
    constexpr std::ptrdiff_t m_nSolidType = 0x5B;
    constexpr std::ptrdiff_t m_triggerBloat = 0x5C;
    constexpr std::ptrdiff_t m_nSurroundType = 0x5D;
    constexpr std::ptrdiff_t m_CollisionGroup = 0x5E;
    constexpr std::ptrdiff_t m_nEnablePhysics = 0x5F;
    constexpr std::ptrdiff_t m_flBoundingRadius = 0x60;
    constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMins = 0x64;
    constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMaxs = 0x70;
    constexpr std::ptrdiff_t m_vecSurroundingMaxs = 0x7C;
    constexpr std::ptrdiff_t m_vecSurroundingMins = 0x88;
    constexpr std::ptrdiff_t m_vCapsuleCenter1 = 0x94;
    constexpr std::ptrdiff_t m_vCapsuleCenter2 = 0xA0;
    constexpr std::ptrdiff_t m_flCapsuleRadius = 0xAC;
}

namespace CComicBook {
    constexpr std::ptrdiff_t m_CoverImage = 0x8;
    constexpr std::ptrdiff_t m_XmlFile = 0x18;
}

namespace CCompositeMaterialEditorDoc {
    constexpr std::ptrdiff_t m_nVersion = 0x8;
    constexpr std::ptrdiff_t m_Points = 0x10;
    constexpr std::ptrdiff_t m_KVthumbnail = 0x28;
}

namespace CDamageRecord {
    constexpr std::ptrdiff_t m_PlayerDamager = 0x28;
    constexpr std::ptrdiff_t m_PlayerRecipient = 0x2C;
    constexpr std::ptrdiff_t m_hPlayerControllerDamager = 0x30;
    constexpr std::ptrdiff_t m_hPlayerControllerRecipient = 0x34;
    constexpr std::ptrdiff_t m_szPlayerDamagerName = 0x38;
    constexpr std::ptrdiff_t m_szPlayerRecipientName = 0x40;
    constexpr std::ptrdiff_t m_DamagerXuid = 0x48;
    constexpr std::ptrdiff_t m_RecipientXuid = 0x50;
    constexpr std::ptrdiff_t m_iDamage = 0x58;
    constexpr std::ptrdiff_t m_iActualHealthRemoved = 0x5C;
    constexpr std::ptrdiff_t m_iNumHits = 0x60;
    constexpr std::ptrdiff_t m_iLastBulletUpdate = 0x64;
    constexpr std::ptrdiff_t m_bIsOtherEnemy = 0x68;
    constexpr std::ptrdiff_t m_killType = 0x69;
}

namespace CDecalInfo {
    constexpr std::ptrdiff_t m_flAnimationScale = 0x0;
    constexpr std::ptrdiff_t m_flAnimationLifeSpan = 0x4;
    constexpr std::ptrdiff_t m_flPlaceTime = 0x8;
    constexpr std::ptrdiff_t m_flFadeStartTime = 0xC;
    constexpr std::ptrdiff_t m_flFadeDuration = 0x10;
    constexpr std::ptrdiff_t m_nVBSlot = 0x14;
    constexpr std::ptrdiff_t m_nBoneIndex = 0x18;
    constexpr std::ptrdiff_t m_pNext = 0x28;
    constexpr std::ptrdiff_t m_pPrev = 0x30;
    constexpr std::ptrdiff_t m_nDecalMaterialIndex = 0x90;
}

namespace CEconItemAttribute {
    constexpr std::ptrdiff_t m_iAttributeDefinitionIndex = 0x30;
    constexpr std::ptrdiff_t m_flValue = 0x34;
    constexpr std::ptrdiff_t m_flInitialValue = 0x38;
    constexpr std::ptrdiff_t m_nRefundableCurrency = 0x3C;
    constexpr std::ptrdiff_t m_bSetBonus = 0x40;
}

namespace CEffectData {
    constexpr std::ptrdiff_t m_vOrigin = 0x8;
    constexpr std::ptrdiff_t m_vStart = 0x14;
    constexpr std::ptrdiff_t m_vNormal = 0x20;
    constexpr std::ptrdiff_t m_vAngles = 0x2C;
    constexpr std::ptrdiff_t m_hEntity = 0x38;
    constexpr std::ptrdiff_t m_hOtherEntity = 0x3C;
    constexpr std::ptrdiff_t m_flScale = 0x40;
    constexpr std::ptrdiff_t m_flMagnitude = 0x44;
    constexpr std::ptrdiff_t m_flRadius = 0x48;
    constexpr std::ptrdiff_t m_nSurfaceProp = 0x4C;
    constexpr std::ptrdiff_t m_nEffectIndex = 0x50;
    constexpr std::ptrdiff_t m_nDamageType = 0x58;
    constexpr std::ptrdiff_t m_nPenetrate = 0x5C;
    constexpr std::ptrdiff_t m_nMaterial = 0x5E;
    constexpr std::ptrdiff_t m_nHitBox = 0x60;
    constexpr std::ptrdiff_t m_nColor = 0x62;
    constexpr std::ptrdiff_t m_fFlags = 0x63;
    constexpr std::ptrdiff_t m_nAttachmentIndex = 0x64;
    constexpr std::ptrdiff_t m_nAttachmentName = 0x68;
    constexpr std::ptrdiff_t m_iEffectName = 0x6C;
    constexpr std::ptrdiff_t m_nExplosionType = 0x6E;
}

namespace CEntityIdentity {
    constexpr std::ptrdiff_t m_nameStringableIndex = 0x14;
    constexpr std::ptrdiff_t m_name = 0x18;
    constexpr std::ptrdiff_t m_designerName = 0x20;
    constexpr std::ptrdiff_t m_flags = 0x30;
    constexpr std::ptrdiff_t m_worldGroupId = 0x38;
    constexpr std::ptrdiff_t m_fDataObjectTypes = 0x3C;
    constexpr std::ptrdiff_t m_PathIndex = 0x40;
    constexpr std::ptrdiff_t m_pPrev = 0x58;
    constexpr std::ptrdiff_t m_pNext = 0x60;
    constexpr std::ptrdiff_t m_pPrevByClass = 0x68;
    constexpr std::ptrdiff_t m_pNextByClass = 0x70;
}

namespace CEntityInstance {
    constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8;
    constexpr std::ptrdiff_t m_pEntity = 0x10;
    constexpr std::ptrdiff_t m_CScriptComponent = 0x28;
}

namespace CFireOverlay {
    constexpr std::ptrdiff_t m_pOwner = 0xD0;
    constexpr std::ptrdiff_t m_vBaseColors = 0xD8;
    constexpr std::ptrdiff_t m_flScale = 0x108;
    constexpr std::ptrdiff_t m_nGUID = 0x10C;
}

namespace CFlashlightEffect {
    constexpr std::ptrdiff_t m_bIsOn = 0x10;
    constexpr std::ptrdiff_t m_bMuzzleFlashEnabled = 0x20;
    constexpr std::ptrdiff_t m_flMuzzleFlashBrightness = 0x24;
    constexpr std::ptrdiff_t m_quatMuzzleFlashOrientation = 0x30;
    constexpr std::ptrdiff_t m_vecMuzzleFlashOrigin = 0x40;
    constexpr std::ptrdiff_t m_flFov = 0x4C;
    constexpr std::ptrdiff_t m_flFarZ = 0x50;
    constexpr std::ptrdiff_t m_flLinearAtten = 0x54;
    constexpr std::ptrdiff_t m_bCastsShadows = 0x58;
    constexpr std::ptrdiff_t m_flCurrentPullBackDist = 0x5C;
    constexpr std::ptrdiff_t m_FlashlightTexture = 0x60;
    constexpr std::ptrdiff_t m_MuzzleFlashTexture = 0x68;
    constexpr std::ptrdiff_t m_textureName = 0x70;
}

namespace CFuncWater {
    constexpr std::ptrdiff_t m_BuoyancyHelper = 0xCC0;
}

namespace CGameSceneNode {
    constexpr std::ptrdiff_t m_nodeToWorld = 0x10;
    constexpr std::ptrdiff_t m_pOwner = 0x30;
    constexpr std::ptrdiff_t m_pParent = 0x38;
    constexpr std::ptrdiff_t m_pChild = 0x40;
    constexpr std::ptrdiff_t m_pNextSibling = 0x48;
    constexpr std::ptrdiff_t m_hParent = 0x70;
    constexpr std::ptrdiff_t m_vecOrigin = 0x80;
    constexpr std::ptrdiff_t m_angRotation = 0xB8;
    constexpr std::ptrdiff_t m_flScale = 0xC4;
    constexpr std::ptrdiff_t m_vecAbsOrigin = 0xC8;
    constexpr std::ptrdiff_t m_angAbsRotation = 0xD4;
    constexpr std::ptrdiff_t m_flAbsScale = 0xE0;
    constexpr std::ptrdiff_t m_nParentAttachmentOrBone = 0xE4;
    constexpr std::ptrdiff_t m_bDebugAbsOriginChanges = 0xE6;
    constexpr std::ptrdiff_t m_bDormant = 0xE7;
    constexpr std::ptrdiff_t m_bForceParentToBeNetworked = 0xE8;
    constexpr std::ptrdiff_t m_bDirtyHierarchy = 0x0;
    constexpr std::ptrdiff_t m_bDirtyBoneMergeInfo = 0x0;
    constexpr std::ptrdiff_t m_bNetworkedPositionChanged = 0x0;
    constexpr std::ptrdiff_t m_bNetworkedAnglesChanged = 0x0;
    constexpr std::ptrdiff_t m_bNetworkedScaleChanged = 0x0;
    constexpr std::ptrdiff_t m_bWillBeCallingPostDataUpdate = 0x0;
    constexpr std::ptrdiff_t m_bNotifyBoneTransformsChanged = 0x0;
    constexpr std::ptrdiff_t m_bBoneMergeFlex = 0x0;
    constexpr std::ptrdiff_t m_nLatchAbsOrigin = 0x0;
    constexpr std::ptrdiff_t m_bDirtyBoneMergeBoneToRoot = 0x0;
    constexpr std::ptrdiff_t m_nHierarchicalDepth = 0xEB;
    constexpr std::ptrdiff_t m_nHierarchyType = 0xEC;
    constexpr std::ptrdiff_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xED;
    constexpr std::ptrdiff_t m_name = 0xF0;
    constexpr std::ptrdiff_t m_hierarchyAttachName = 0x130;
    constexpr std::ptrdiff_t m_flZOffset = 0x134;
    constexpr std::ptrdiff_t m_vRenderOrigin = 0x138;
}

namespace CGameSceneNodeHandle {
    constexpr std::ptrdiff_t m_hOwner = 0x8;
    constexpr std::ptrdiff_t m_name = 0xC;
}

namespace CGlobalLightBase {
    constexpr std::ptrdiff_t m_bSpotLight = 0x10;
    constexpr std::ptrdiff_t m_SpotLightOrigin = 0x14;
    constexpr std::ptrdiff_t m_SpotLightAngles = 0x20;
    constexpr std::ptrdiff_t m_ShadowDirection = 0x2C;
    constexpr std::ptrdiff_t m_AmbientDirection = 0x38;
    constexpr std::ptrdiff_t m_SpecularDirection = 0x44;
    constexpr std::ptrdiff_t m_InspectorSpecularDirection = 0x50;
    constexpr std::ptrdiff_t m_flSpecularPower = 0x5C;
    constexpr std::ptrdiff_t m_flSpecularIndependence = 0x60;
    constexpr std::ptrdiff_t m_SpecularColor = 0x64;
    constexpr std::ptrdiff_t m_bStartDisabled = 0x68;
    constexpr std::ptrdiff_t m_bEnabled = 0x69;
    constexpr std::ptrdiff_t m_LightColor = 0x6A;
    constexpr std::ptrdiff_t m_AmbientColor1 = 0x6E;
    constexpr std::ptrdiff_t m_AmbientColor2 = 0x72;
    constexpr std::ptrdiff_t m_AmbientColor3 = 0x76;
    constexpr std::ptrdiff_t m_flSunDistance = 0x7C;
    constexpr std::ptrdiff_t m_flFOV = 0x80;
    constexpr std::ptrdiff_t m_flNearZ = 0x84;
    constexpr std::ptrdiff_t m_flFarZ = 0x88;
    constexpr std::ptrdiff_t m_bEnableShadows = 0x8C;
    constexpr std::ptrdiff_t m_bOldEnableShadows = 0x8D;
    constexpr std::ptrdiff_t m_bBackgroundClearNotRequired = 0x8E;
    constexpr std::ptrdiff_t m_flCloudScale = 0x90;
    constexpr std::ptrdiff_t m_flCloud1Speed = 0x94;
    constexpr std::ptrdiff_t m_flCloud1Direction = 0x98;
    constexpr std::ptrdiff_t m_flCloud2Speed = 0x9C;
    constexpr std::ptrdiff_t m_flCloud2Direction = 0xA0;
    constexpr std::ptrdiff_t m_flAmbientScale1 = 0xB0;
    constexpr std::ptrdiff_t m_flAmbientScale2 = 0xB4;
    constexpr std::ptrdiff_t m_flGroundScale = 0xB8;
    constexpr std::ptrdiff_t m_flLightScale = 0xBC;
    constexpr std::ptrdiff_t m_flFoWDarkness = 0xC0;
    constexpr std::ptrdiff_t m_bEnableSeparateSkyboxFog = 0xC4;
    constexpr std::ptrdiff_t m_vFowColor = 0xC8;
    constexpr std::ptrdiff_t m_ViewOrigin = 0xD4;
    constexpr std::ptrdiff_t m_ViewAngles = 0xE0;
    constexpr std::ptrdiff_t m_flViewFoV = 0xEC;
    constexpr std::ptrdiff_t m_WorldPoints = 0xF0;
    constexpr std::ptrdiff_t m_vFogOffsetLayer0 = 0x4A8;
    constexpr std::ptrdiff_t m_vFogOffsetLayer1 = 0x4B0;
    constexpr std::ptrdiff_t m_hEnvWind = 0x4B8;
    constexpr std::ptrdiff_t m_hEnvSky = 0x4BC;
}

namespace CGlowOverlay {
    constexpr std::ptrdiff_t m_vPos = 0x8;
    constexpr std::ptrdiff_t m_bDirectional = 0x14;
    constexpr std::ptrdiff_t m_vDirection = 0x18;
    constexpr std::ptrdiff_t m_bInSky = 0x24;
    constexpr std::ptrdiff_t m_skyObstructionScale = 0x28;
    constexpr std::ptrdiff_t m_Sprites = 0x30;
    constexpr std::ptrdiff_t m_nSprites = 0xB0;
    constexpr std::ptrdiff_t m_flProxyRadius = 0xB4;
    constexpr std::ptrdiff_t m_flHDRColorScale = 0xB8;
    constexpr std::ptrdiff_t m_flGlowObstructionScale = 0xBC;
    constexpr std::ptrdiff_t m_bCacheGlowObstruction = 0xC0;
    constexpr std::ptrdiff_t m_bCacheSkyObstruction = 0xC1;
    constexpr std::ptrdiff_t m_bActivated = 0xC2;
    constexpr std::ptrdiff_t m_ListIndex = 0xC4;
    constexpr std::ptrdiff_t m_queryHandle = 0xC8;
}

namespace CGlowProperty {
    constexpr std::ptrdiff_t m_fGlowColor = 0x8;
    constexpr std::ptrdiff_t m_iGlowType = 0x30;
    constexpr std::ptrdiff_t m_iGlowTeam = 0x34;
    constexpr std::ptrdiff_t m_nGlowRange = 0x38;
    constexpr std::ptrdiff_t m_nGlowRangeMin = 0x3C;
    constexpr std::ptrdiff_t m_glowColorOverride = 0x40;
    constexpr std::ptrdiff_t m_bFlashing = 0x44;
    constexpr std::ptrdiff_t m_flGlowTime = 0x48;
    constexpr std::ptrdiff_t m_flGlowStartTime = 0x4C;
    constexpr std::ptrdiff_t m_bEligibleForScreenHighlight = 0x50;
    constexpr std::ptrdiff_t m_bGlowing = 0x51;
}

namespace CGlowSprite {
    constexpr std::ptrdiff_t m_vColor = 0x0;
    constexpr std::ptrdiff_t m_flHorzSize = 0xC;
    constexpr std::ptrdiff_t m_flVertSize = 0x10;
    constexpr std::ptrdiff_t m_hMaterial = 0x18;
}

namespace CGrenadeTracer {
    constexpr std::ptrdiff_t m_flTracerDuration = 0xCE0;
    constexpr std::ptrdiff_t m_nType = 0xCE4;
}

namespace CHitboxComponent {
    constexpr std::ptrdiff_t m_bvDisabledHitGroups = 0x24;
}

namespace CInfoDynamicShadowHint {
    constexpr std::ptrdiff_t m_bDisabled = 0x540;
    constexpr std::ptrdiff_t m_flRange = 0x544;
    constexpr std::ptrdiff_t m_nImportance = 0x548;
    constexpr std::ptrdiff_t m_nLightChoice = 0x54C;
    constexpr std::ptrdiff_t m_hLight = 0x550;
}

namespace CInfoDynamicShadowHintBox {
    constexpr std::ptrdiff_t m_vBoxMins = 0x558;
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x564;
}

namespace CInfoOffscreenPanoramaTexture {
    constexpr std::ptrdiff_t m_bDisabled = 0x540;
    constexpr std::ptrdiff_t m_nResolutionX = 0x544;
    constexpr std::ptrdiff_t m_nResolutionY = 0x548;
    constexpr std::ptrdiff_t m_szLayoutFileName = 0x550;
    constexpr std::ptrdiff_t m_RenderAttrName = 0x558;
    constexpr std::ptrdiff_t m_TargetEntities = 0x560;
    constexpr std::ptrdiff_t m_nTargetChangeCount = 0x578;
    constexpr std::ptrdiff_t m_vecCSSClasses = 0x580;
    constexpr std::ptrdiff_t m_bCheckCSSClasses = 0x6F8;
}

namespace CInfoWorldLayer {
    constexpr std::ptrdiff_t m_pOutputOnEntitiesSpawned = 0x540;
    constexpr std::ptrdiff_t m_worldName = 0x568;
    constexpr std::ptrdiff_t m_layerName = 0x570;
    constexpr std::ptrdiff_t m_bWorldLayerVisible = 0x578;
    constexpr std::ptrdiff_t m_bEntitiesSpawned = 0x579;
    constexpr std::ptrdiff_t m_bCreateAsChildSpawnGroup = 0x57A;
    constexpr std::ptrdiff_t m_hLayerSpawnGroup = 0x57C;
    constexpr std::ptrdiff_t m_bWorldLayerActuallyVisible = 0x580;
}

namespace CInterpolatedValue {
    constexpr std::ptrdiff_t m_flStartTime = 0x0;
    constexpr std::ptrdiff_t m_flEndTime = 0x4;
    constexpr std::ptrdiff_t m_flStartValue = 0x8;
    constexpr std::ptrdiff_t m_flEndValue = 0xC;
    constexpr std::ptrdiff_t m_nInterpType = 0x10;
}

namespace CLightComponent {
    constexpr std::ptrdiff_t __m_pChainEntity = 0x48;
    constexpr std::ptrdiff_t m_Color = 0x85;
    constexpr std::ptrdiff_t m_SecondaryColor = 0x89;
    constexpr std::ptrdiff_t m_flBrightness = 0x90;
    constexpr std::ptrdiff_t m_flBrightnessScale = 0x94;
    constexpr std::ptrdiff_t m_flBrightnessMult = 0x98;
    constexpr std::ptrdiff_t m_flRange = 0x9C;
    constexpr std::ptrdiff_t m_flFalloff = 0xA0;
    constexpr std::ptrdiff_t m_flAttenuation0 = 0xA4;
    constexpr std::ptrdiff_t m_flAttenuation1 = 0xA8;
    constexpr std::ptrdiff_t m_flAttenuation2 = 0xAC;
    constexpr std::ptrdiff_t m_flTheta = 0xB0;
    constexpr std::ptrdiff_t m_flPhi = 0xB4;
    constexpr std::ptrdiff_t m_hLightCookie = 0xB8;
    constexpr std::ptrdiff_t m_nCascades = 0xC0;
    constexpr std::ptrdiff_t m_nCastShadows = 0xC4;
    constexpr std::ptrdiff_t m_nShadowWidth = 0xC8;
    constexpr std::ptrdiff_t m_nShadowHeight = 0xCC;
    constexpr std::ptrdiff_t m_bRenderDiffuse = 0xD0;
    constexpr std::ptrdiff_t m_nRenderSpecular = 0xD4;
    constexpr std::ptrdiff_t m_bRenderTransmissive = 0xD8;
    constexpr std::ptrdiff_t m_flOrthoLightWidth = 0xDC;
    constexpr std::ptrdiff_t m_flOrthoLightHeight = 0xE0;
    constexpr std::ptrdiff_t m_nStyle = 0xE4;
    constexpr std::ptrdiff_t m_Pattern = 0xE8;
    constexpr std::ptrdiff_t m_nCascadeRenderStaticObjects = 0xF0;
    constexpr std::ptrdiff_t m_flShadowCascadeCrossFade = 0xF4;
    constexpr std::ptrdiff_t m_flShadowCascadeDistanceFade = 0xF8;
    constexpr std::ptrdiff_t m_flShadowCascadeDistance0 = 0xFC;
    constexpr std::ptrdiff_t m_flShadowCascadeDistance1 = 0x100;
    constexpr std::ptrdiff_t m_flShadowCascadeDistance2 = 0x104;
    constexpr std::ptrdiff_t m_flShadowCascadeDistance3 = 0x108;
    constexpr std::ptrdiff_t m_nShadowCascadeResolution0 = 0x10C;
    constexpr std::ptrdiff_t m_nShadowCascadeResolution1 = 0x110;
    constexpr std::ptrdiff_t m_nShadowCascadeResolution2 = 0x114;
    constexpr std::ptrdiff_t m_nShadowCascadeResolution3 = 0x118;
    constexpr std::ptrdiff_t m_bUsesBakedShadowing = 0x11C;
    constexpr std::ptrdiff_t m_nShadowPriority = 0x120;
    constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x124;
    constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x128;
    constexpr std::ptrdiff_t m_LightGroups = 0x130;
    constexpr std::ptrdiff_t m_nDirectLight = 0x138;
    constexpr std::ptrdiff_t m_nIndirectLight = 0x13C;
    constexpr std::ptrdiff_t m_flFadeMinDist = 0x140;
    constexpr std::ptrdiff_t m_flFadeMaxDist = 0x144;
    constexpr std::ptrdiff_t m_flShadowFadeMinDist = 0x148;
    constexpr std::ptrdiff_t m_flShadowFadeMaxDist = 0x14C;
    constexpr std::ptrdiff_t m_bEnabled = 0x150;
    constexpr std::ptrdiff_t m_bFlicker = 0x151;
    constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x152;
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x154;
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x160;
    constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x16C;
    constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x178;
    constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x184;
    constexpr std::ptrdiff_t m_flPrecomputedMaxRange = 0x190;
    constexpr std::ptrdiff_t m_nFogLightingMode = 0x194;
    constexpr std::ptrdiff_t m_flFogContributionStength = 0x198;
    constexpr std::ptrdiff_t m_flNearClipPlane = 0x19C;
    constexpr std::ptrdiff_t m_SkyColor = 0x1A0;
    constexpr std::ptrdiff_t m_flSkyIntensity = 0x1A4;
    constexpr std::ptrdiff_t m_SkyAmbientBounce = 0x1A8;
    constexpr std::ptrdiff_t m_bUseSecondaryColor = 0x1AC;
    constexpr std::ptrdiff_t m_bMixedShadows = 0x1AD;
    constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x1B0;
    constexpr std::ptrdiff_t m_flCapsuleLength = 0x1B4;
    constexpr std::ptrdiff_t m_flMinRoughness = 0x1B8;
}

namespace CLogicRelay {
    constexpr std::ptrdiff_t m_OnTrigger = 0x540;
    constexpr std::ptrdiff_t m_OnSpawn = 0x568;
    constexpr std::ptrdiff_t m_bDisabled = 0x590;
    constexpr std::ptrdiff_t m_bWaitForRefire = 0x591;
    constexpr std::ptrdiff_t m_bTriggerOnce = 0x592;
    constexpr std::ptrdiff_t m_bFastRetrigger = 0x593;
    constexpr std::ptrdiff_t m_bPassthoughCaller = 0x594;
}

namespace CModelState {
    constexpr std::ptrdiff_t m_hModel = 0xA0;
    constexpr std::ptrdiff_t m_ModelName = 0xA8;
    constexpr std::ptrdiff_t m_bClientClothCreationSuppressed = 0xE8;
    constexpr std::ptrdiff_t m_MeshGroupMask = 0x180;
    constexpr std::ptrdiff_t m_nIdealMotionType = 0x222;
    constexpr std::ptrdiff_t m_nForceLOD = 0x223;
    constexpr std::ptrdiff_t m_nClothUpdateFlags = 0x224;
}

namespace CNetworkedSequenceOperation {
    constexpr std::ptrdiff_t m_hSequence = 0x8;
    constexpr std::ptrdiff_t m_flPrevCycle = 0xC;
    constexpr std::ptrdiff_t m_flCycle = 0x10;
    constexpr std::ptrdiff_t m_flWeight = 0x14;
    constexpr std::ptrdiff_t m_bSequenceChangeNetworked = 0x1C;
    constexpr std::ptrdiff_t m_bDiscontinuity = 0x1D;
    constexpr std::ptrdiff_t m_flPrevCycleFromDiscontinuity = 0x20;
    constexpr std::ptrdiff_t m_flPrevCycleForAnimEventDetection = 0x24;
}

namespace CPlayer_CameraServices {
    constexpr std::ptrdiff_t m_vecCsViewPunchAngle = 0x40;
    constexpr std::ptrdiff_t m_nCsViewPunchAngleTick = 0x4C;
    constexpr std::ptrdiff_t m_flCsViewPunchAngleTickRatio = 0x50;
    constexpr std::ptrdiff_t m_PlayerFog = 0x58;
    constexpr std::ptrdiff_t m_hColorCorrectionCtrl = 0x98;
    constexpr std::ptrdiff_t m_hViewEntity = 0x9C;
    constexpr std::ptrdiff_t m_hTonemapController = 0xA0;
    constexpr std::ptrdiff_t m_audio = 0xA8;
    constexpr std::ptrdiff_t m_PostProcessingVolumes = 0x120;
    constexpr std::ptrdiff_t m_flOldPlayerZ = 0x138;
    constexpr std::ptrdiff_t m_flOldPlayerViewOffsetZ = 0x13C;
    constexpr std::ptrdiff_t m_CurrentFog = 0x140;
    constexpr std::ptrdiff_t m_hOldFogController = 0x1A8;
    constexpr std::ptrdiff_t m_bOverrideFogColor = 0x1AC;
    constexpr std::ptrdiff_t m_OverrideFogColor = 0x1B1;
    constexpr std::ptrdiff_t m_bOverrideFogStartEnd = 0x1C5;
    constexpr std::ptrdiff_t m_fOverrideFogStart = 0x1CC;
    constexpr std::ptrdiff_t m_fOverrideFogEnd = 0x1E0;
    constexpr std::ptrdiff_t m_hActivePostProcessingVolume = 0x1F4;
    constexpr std::ptrdiff_t m_angDemoViewAngles = 0x1F8;
}

namespace CPlayer_MovementServices {
    constexpr std::ptrdiff_t m_nImpulse = 0x40;
    constexpr std::ptrdiff_t m_nButtons = 0x48;
    constexpr std::ptrdiff_t m_nQueuedButtonDownMask = 0x68;
    constexpr std::ptrdiff_t m_nQueuedButtonChangeMask = 0x70;
    constexpr std::ptrdiff_t m_nButtonDoublePressed = 0x78;
    constexpr std::ptrdiff_t m_pButtonPressedCmdNumber = 0x80;
    constexpr std::ptrdiff_t m_nLastCommandNumberProcessed = 0x180;
    constexpr std::ptrdiff_t m_nToggleButtonDownMask = 0x188;
    constexpr std::ptrdiff_t m_flMaxspeed = 0x190;
    constexpr std::ptrdiff_t m_arrForceSubtickMoveWhen = 0x194;
    constexpr std::ptrdiff_t m_flForwardMove = 0x1A4;
    constexpr std::ptrdiff_t m_flLeftMove = 0x1A8;
    constexpr std::ptrdiff_t m_flUpMove = 0x1AC;
    constexpr std::ptrdiff_t m_vecLastMovementImpulses = 0x1B0;
    constexpr std::ptrdiff_t m_vecOldViewAngles = 0x1BC;
}

namespace CPlayer_MovementServices_Humanoid {
    constexpr std::ptrdiff_t m_flStepSoundTime = 0x1D0;
    constexpr std::ptrdiff_t m_flFallVelocity = 0x1D4;
    constexpr std::ptrdiff_t m_bInCrouch = 0x1D8;
    constexpr std::ptrdiff_t m_nCrouchState = 0x1DC;
    constexpr std::ptrdiff_t m_flCrouchTransitionStartTime = 0x1E0;
    constexpr std::ptrdiff_t m_bDucked = 0x1E4;
    constexpr std::ptrdiff_t m_bDucking = 0x1E5;
    constexpr std::ptrdiff_t m_bInDuckJump = 0x1E6;
    constexpr std::ptrdiff_t m_groundNormal = 0x1E8;
    constexpr std::ptrdiff_t m_flSurfaceFriction = 0x1F4;
    constexpr std::ptrdiff_t m_surfaceProps = 0x1F8;
    constexpr std::ptrdiff_t m_nStepside = 0x208;
}

namespace CPlayer_ObserverServices {
    constexpr std::ptrdiff_t m_iObserverMode = 0x40;
    constexpr std::ptrdiff_t m_hObserverTarget = 0x44;
    constexpr std::ptrdiff_t m_iObserverLastMode = 0x48;
    constexpr std::ptrdiff_t m_bForcedObserverMode = 0x4C;
    constexpr std::ptrdiff_t m_flObserverChaseDistance = 0x50;
    constexpr std::ptrdiff_t m_flObserverChaseDistanceCalcTime = 0x54;
}

namespace CPlayer_WeaponServices {
    constexpr std::ptrdiff_t m_bAllowSwitchToNoWeapon = 0x40;
    constexpr std::ptrdiff_t m_hMyWeapons = 0x48;
    constexpr std::ptrdiff_t m_hActiveWeapon = 0x60;
    constexpr std::ptrdiff_t m_hLastWeapon = 0x64;
    constexpr std::ptrdiff_t m_iAmmo = 0x68;
}

namespace CPointOffScreenIndicatorUi {
    constexpr std::ptrdiff_t m_bBeenEnabled = 0xF20;
    constexpr std::ptrdiff_t m_bHide = 0xF21;
    constexpr std::ptrdiff_t m_flSeenTargetTime = 0xF24;
    constexpr std::ptrdiff_t m_pTargetPanel = 0xF28;
}

namespace CPointTemplate {
    constexpr std::ptrdiff_t m_iszWorldName = 0x540;
    constexpr std::ptrdiff_t m_iszSource2EntityLumpName = 0x548;
    constexpr std::ptrdiff_t m_iszEntityFilterName = 0x550;
    constexpr std::ptrdiff_t m_flTimeoutInterval = 0x558;
    constexpr std::ptrdiff_t m_bAsynchronouslySpawnEntities = 0x55C;
    constexpr std::ptrdiff_t m_pOutputOnSpawned = 0x560;
    constexpr std::ptrdiff_t m_clientOnlyEntityBehavior = 0x588;
    constexpr std::ptrdiff_t m_ownerSpawnGroupType = 0x58C;
    constexpr std::ptrdiff_t m_createdSpawnGroupHandles = 0x590;
    constexpr std::ptrdiff_t m_SpawnedEntityHandles = 0x5A8;
    constexpr std::ptrdiff_t m_ScriptSpawnCallback = 0x5C0;
    constexpr std::ptrdiff_t m_ScriptCallbackScope = 0x5C8;
}

namespace CPrecipitationVData {
    constexpr std::ptrdiff_t m_szParticlePrecipitationEffect = 0x28;
    constexpr std::ptrdiff_t m_flInnerDistance = 0x108;
    constexpr std::ptrdiff_t m_nAttachType = 0x10C;
    constexpr std::ptrdiff_t m_bBatchSameVolumeType = 0x110;
    constexpr std::ptrdiff_t m_nRTEnvCP = 0x114;
    constexpr std::ptrdiff_t m_nRTEnvCPComponent = 0x118;
    constexpr std::ptrdiff_t m_szModifier = 0x120;
}

namespace CProjectedTextureBase {
    constexpr std::ptrdiff_t m_hTargetEntity = 0xC;
    constexpr std::ptrdiff_t m_bState = 0x10;
    constexpr std::ptrdiff_t m_bAlwaysUpdate = 0x11;
    constexpr std::ptrdiff_t m_flLightFOV = 0x14;
    constexpr std::ptrdiff_t m_bEnableShadows = 0x18;
    constexpr std::ptrdiff_t m_bSimpleProjection = 0x19;
    constexpr std::ptrdiff_t m_bLightOnlyTarget = 0x1A;
    constexpr std::ptrdiff_t m_bLightWorld = 0x1B;
    constexpr std::ptrdiff_t m_bCameraSpace = 0x1C;
    constexpr std::ptrdiff_t m_flBrightnessScale = 0x20;
    constexpr std::ptrdiff_t m_LightColor = 0x24;
    constexpr std::ptrdiff_t m_flIntensity = 0x28;
    constexpr std::ptrdiff_t m_flLinearAttenuation = 0x2C;
    constexpr std::ptrdiff_t m_flQuadraticAttenuation = 0x30;
    constexpr std::ptrdiff_t m_bVolumetric = 0x34;
    constexpr std::ptrdiff_t m_flVolumetricIntensity = 0x38;
    constexpr std::ptrdiff_t m_flNoiseStrength = 0x3C;
    constexpr std::ptrdiff_t m_flFlashlightTime = 0x40;
    constexpr std::ptrdiff_t m_nNumPlanes = 0x44;
    constexpr std::ptrdiff_t m_flPlaneOffset = 0x48;
    constexpr std::ptrdiff_t m_flColorTransitionTime = 0x4C;
    constexpr std::ptrdiff_t m_flAmbient = 0x50;
    constexpr std::ptrdiff_t m_SpotlightTextureName = 0x54;
    constexpr std::ptrdiff_t m_nSpotlightTextureFrame = 0x254;
    constexpr std::ptrdiff_t m_nShadowQuality = 0x258;
    constexpr std::ptrdiff_t m_flNearZ = 0x25C;
    constexpr std::ptrdiff_t m_flFarZ = 0x260;
    constexpr std::ptrdiff_t m_flProjectionSize = 0x264;
    constexpr std::ptrdiff_t m_flRotation = 0x268;
    constexpr std::ptrdiff_t m_bFlipHorizontal = 0x26C;
}

namespace CRenderComponent {
    constexpr std::ptrdiff_t __m_pChainEntity = 0x10;
    constexpr std::ptrdiff_t m_bIsRenderingWithViewModels = 0x50;
    constexpr std::ptrdiff_t m_nSplitscreenFlags = 0x54;
    constexpr std::ptrdiff_t m_bEnableRendering = 0x60;
    constexpr std::ptrdiff_t m_bInterpolationReadyToDraw = 0xB0;
}

namespace CSMatchStats_t {
    constexpr std::ptrdiff_t m_iEnemy5Ks = 0x68;
    constexpr std::ptrdiff_t m_iEnemy4Ks = 0x6C;
    constexpr std::ptrdiff_t m_iEnemy3Ks = 0x70;
}

namespace CSPerRoundStats_t {
    constexpr std::ptrdiff_t m_iKills = 0x30;
    constexpr std::ptrdiff_t m_iDeaths = 0x34;
    constexpr std::ptrdiff_t m_iAssists = 0x38;
    constexpr std::ptrdiff_t m_iDamage = 0x3C;
    constexpr std::ptrdiff_t m_iEquipmentValue = 0x40;
    constexpr std::ptrdiff_t m_iMoneySaved = 0x44;
    constexpr std::ptrdiff_t m_iKillReward = 0x48;
    constexpr std::ptrdiff_t m_iLiveTime = 0x4C;
    constexpr std::ptrdiff_t m_iHeadShotKills = 0x50;
    constexpr std::ptrdiff_t m_iObjective = 0x54;
    constexpr std::ptrdiff_t m_iCashEarned = 0x58;
    constexpr std::ptrdiff_t m_iUtilityDamage = 0x5C;
    constexpr std::ptrdiff_t m_iEnemiesFlashed = 0x60;
}

namespace CScriptComponent {
    constexpr std::ptrdiff_t m_scriptClassName = 0x30;
}

namespace CSkeletonInstance {
    constexpr std::ptrdiff_t m_modelState = 0x160;
    constexpr std::ptrdiff_t m_bIsAnimationEnabled = 0x390;
    constexpr std::ptrdiff_t m_bUseParentRenderBounds = 0x391;
    constexpr std::ptrdiff_t m_bDisableSolidCollisionsForHierarchy = 0x392;
    constexpr std::ptrdiff_t m_bDirtyMotionType = 0x0;
    constexpr std::ptrdiff_t m_bIsGeneratingLatchedParentSpaceState = 0x0;
    constexpr std::ptrdiff_t m_materialGroup = 0x394;
    constexpr std::ptrdiff_t m_nHitboxSet = 0x398;
}

namespace CSkyboxReference {
    constexpr std::ptrdiff_t m_worldGroupId = 0x540;
    constexpr std::ptrdiff_t m_hSkyCamera = 0x544;
}

namespace CTimeline {
    constexpr std::ptrdiff_t m_flValues = 0x10;
    constexpr std::ptrdiff_t m_nValueCounts = 0x110;
    constexpr std::ptrdiff_t m_nBucketCount = 0x210;
    constexpr std::ptrdiff_t m_flInterval = 0x214;
    constexpr std::ptrdiff_t m_flFinalValue = 0x218;
    constexpr std::ptrdiff_t m_nCompressionType = 0x21C;
    constexpr std::ptrdiff_t m_bStopped = 0x220;
}

namespace C_AttributeContainer {
    constexpr std::ptrdiff_t m_Item = 0x50;
    constexpr std::ptrdiff_t m_iExternalItemProviderRegisteredToken = 0x498;
    constexpr std::ptrdiff_t m_ullRegisteredAsItemID = 0x4A0;
}

namespace C_BarnLight {
    constexpr std::ptrdiff_t m_bEnabled = 0xCC0;
    constexpr std::ptrdiff_t m_nColorMode = 0xCC4;
    constexpr std::ptrdiff_t m_Color = 0xCC8;
    constexpr std::ptrdiff_t m_flColorTemperature = 0xCCC;
    constexpr std::ptrdiff_t m_flBrightness = 0xCD0;
    constexpr std::ptrdiff_t m_flBrightnessScale = 0xCD4;
    constexpr std::ptrdiff_t m_nDirectLight = 0xCD8;
    constexpr std::ptrdiff_t m_nBakedShadowIndex = 0xCDC;
    constexpr std::ptrdiff_t m_nLuminaireShape = 0xCE0;
    constexpr std::ptrdiff_t m_flLuminaireSize = 0xCE4;
    constexpr std::ptrdiff_t m_flLuminaireAnisotropy = 0xCE8;
    constexpr std::ptrdiff_t m_LightStyleString = 0xCF0;
    constexpr std::ptrdiff_t m_flLightStyleStartTime = 0xCF8;
    constexpr std::ptrdiff_t m_QueuedLightStyleStrings = 0xD00;
    constexpr std::ptrdiff_t m_LightStyleEvents = 0xD18;
    constexpr std::ptrdiff_t m_LightStyleTargets = 0xD30;
    constexpr std::ptrdiff_t m_StyleEvent = 0xD48;
    constexpr std::ptrdiff_t m_hLightCookie = 0xDE8;
    constexpr std::ptrdiff_t m_flShape = 0xDF0;
    constexpr std::ptrdiff_t m_flSoftX = 0xDF4;
    constexpr std::ptrdiff_t m_flSoftY = 0xDF8;
    constexpr std::ptrdiff_t m_flSkirt = 0xDFC;
    constexpr std::ptrdiff_t m_flSkirtNear = 0xE00;
    constexpr std::ptrdiff_t m_vSizeParams = 0xE04;
    constexpr std::ptrdiff_t m_flRange = 0xE10;
    constexpr std::ptrdiff_t m_vShear = 0xE14;
    constexpr std::ptrdiff_t m_nBakeSpecularToCubemaps = 0xE20;
    constexpr std::ptrdiff_t m_vBakeSpecularToCubemapsSize = 0xE24;
    constexpr std::ptrdiff_t m_nCastShadows = 0xE30;
    constexpr std::ptrdiff_t m_nShadowMapSize = 0xE34;
    constexpr std::ptrdiff_t m_nShadowPriority = 0xE38;
    constexpr std::ptrdiff_t m_bContactShadow = 0xE3C;
    constexpr std::ptrdiff_t m_nBounceLight = 0xE40;
    constexpr std::ptrdiff_t m_flBounceScale = 0xE44;
    constexpr std::ptrdiff_t m_flMinRoughness = 0xE48;
    constexpr std::ptrdiff_t m_vAlternateColor = 0xE4C;
    constexpr std::ptrdiff_t m_fAlternateColorBrightness = 0xE58;
    constexpr std::ptrdiff_t m_nFog = 0xE5C;
    constexpr std::ptrdiff_t m_flFogStrength = 0xE60;
    constexpr std::ptrdiff_t m_nFogShadows = 0xE64;
    constexpr std::ptrdiff_t m_flFogScale = 0xE68;
    constexpr std::ptrdiff_t m_flFadeSizeStart = 0xE6C;
    constexpr std::ptrdiff_t m_flFadeSizeEnd = 0xE70;
    constexpr std::ptrdiff_t m_flShadowFadeSizeStart = 0xE74;
    constexpr std::ptrdiff_t m_flShadowFadeSizeEnd = 0xE78;
    constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0xE7C;
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0xE80;
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0xE8C;
    constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0xE98;
    constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0xEA4;
    constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0xEB0;
}

namespace C_BaseButton {
    constexpr std::ptrdiff_t m_glowEntity = 0xCC0;
    constexpr std::ptrdiff_t m_usable = 0xCC4;
    constexpr std::ptrdiff_t m_szDisplayText = 0xCC8;
}

namespace C_BaseCSGrenade {
    constexpr std::ptrdiff_t m_bClientPredictDelete = 0x18E0;
    constexpr std::ptrdiff_t m_bRedraw = 0x1908;
    constexpr std::ptrdiff_t m_bIsHeldByPlayer = 0x1909;
    constexpr std::ptrdiff_t m_bPinPulled = 0x190A;
    constexpr std::ptrdiff_t m_bJumpThrow = 0x190B;
    constexpr std::ptrdiff_t m_eThrowStatus = 0x190C;
    constexpr std::ptrdiff_t m_fThrowTime = 0x1910;
    constexpr std::ptrdiff_t m_flThrowStrength = 0x1914;
    constexpr std::ptrdiff_t m_flThrowStrengthApproach = 0x1918;
    constexpr std::ptrdiff_t m_fDropTime = 0x191C;
}

namespace C_BaseCSGrenadeProjectile {
    constexpr std::ptrdiff_t m_vInitialVelocity = 0x1068;
    constexpr std::ptrdiff_t m_nBounces = 0x1074;
    constexpr std::ptrdiff_t m_nExplodeEffectIndex = 0x1078;
    constexpr std::ptrdiff_t m_nExplodeEffectTickBegin = 0x1080;
    constexpr std::ptrdiff_t m_vecExplodeEffectOrigin = 0x1084;
    constexpr std::ptrdiff_t m_flSpawnTime = 0x1090;
    constexpr std::ptrdiff_t vecLastTrailLinePos = 0x1094;
    constexpr std::ptrdiff_t flNextTrailLineTime = 0x10A0;
    constexpr std::ptrdiff_t m_bExplodeEffectBegan = 0x10A4;
    constexpr std::ptrdiff_t m_bCanCreateGrenadeTrail = 0x10A5;
    constexpr std::ptrdiff_t m_nSnapshotTrajectoryEffectIndex = 0x10A8;
    constexpr std::ptrdiff_t m_hSnapshotTrajectoryParticleSnapshot = 0x10B0;
    constexpr std::ptrdiff_t m_arrTrajectoryTrailPoints = 0x10B8;
    constexpr std::ptrdiff_t m_arrTrajectoryTrailPointCreationTimes = 0x10D0;
    constexpr std::ptrdiff_t m_flTrajectoryTrailEffectCreationTime = 0x10E8;
}

namespace C_BaseClientUIEntity {
    constexpr std::ptrdiff_t m_bEnabled = 0xCC8;
    constexpr std::ptrdiff_t m_DialogXMLName = 0xCD0;
    constexpr std::ptrdiff_t m_PanelClassName = 0xCD8;
    constexpr std::ptrdiff_t m_PanelID = 0xCE0;
}

namespace C_BaseCombatCharacter {
    constexpr std::ptrdiff_t m_hMyWearables = 0x1018;
    constexpr std::ptrdiff_t m_bloodColor = 0x1030;
    constexpr std::ptrdiff_t m_leftFootAttachment = 0x1034;
    constexpr std::ptrdiff_t m_rightFootAttachment = 0x1035;
    constexpr std::ptrdiff_t m_nWaterWakeMode = 0x1038;
    constexpr std::ptrdiff_t m_flWaterWorldZ = 0x103C;
    constexpr std::ptrdiff_t m_flWaterNextTraceTime = 0x1040;
    constexpr std::ptrdiff_t m_flFieldOfView = 0x1044;
}

namespace C_BaseDoor {
    constexpr std::ptrdiff_t m_bIsUsable = 0xCC0;
}

namespace C_BaseEntity {
    constexpr std::ptrdiff_t m_CBodyComponent = 0x30;
    constexpr std::ptrdiff_t m_NetworkTransmitComponent = 0x38;
    constexpr std::ptrdiff_t m_nLastThinkTick = 0x308;
    constexpr std::ptrdiff_t m_pGameSceneNode = 0x310;
    constexpr std::ptrdiff_t m_pRenderComponent = 0x318;
    constexpr std::ptrdiff_t m_pCollision = 0x320;
    constexpr std::ptrdiff_t m_iMaxHealth = 0x328;
    constexpr std::ptrdiff_t m_iHealth = 0x32C;
    constexpr std::ptrdiff_t m_lifeState = 0x330;
    constexpr std::ptrdiff_t m_bTakesDamage = 0x331;
    constexpr std::ptrdiff_t m_nTakeDamageFlags = 0x334;
    constexpr std::ptrdiff_t m_ubInterpolationFrame = 0x338;
    constexpr std::ptrdiff_t m_hSceneObjectController = 0x33C;
    constexpr std::ptrdiff_t m_nNoInterpolationTick = 0x340;
    constexpr std::ptrdiff_t m_nVisibilityNoInterpolationTick = 0x344;
    constexpr std::ptrdiff_t m_flProxyRandomValue = 0x348;
    constexpr std::ptrdiff_t m_iEFlags = 0x34C;
    constexpr std::ptrdiff_t m_nWaterType = 0x350;
    constexpr std::ptrdiff_t m_bInterpolateEvenWithNoModel = 0x351;
    constexpr std::ptrdiff_t m_bPredictionEligible = 0x352;
    constexpr std::ptrdiff_t m_bApplyLayerMatchIDToModel = 0x353;
    constexpr std::ptrdiff_t m_tokLayerMatchID = 0x354;
    constexpr std::ptrdiff_t m_nSubclassID = 0x358;
    constexpr std::ptrdiff_t m_nSimulationTick = 0x368;
    constexpr std::ptrdiff_t m_iCurrentThinkContext = 0x36C;
    constexpr std::ptrdiff_t m_aThinkFunctions = 0x370;
    constexpr std::ptrdiff_t m_flAnimTime = 0x388;
    constexpr std::ptrdiff_t m_flSimulationTime = 0x38C;
    constexpr std::ptrdiff_t m_nSceneObjectOverrideFlags = 0x390;
    constexpr std::ptrdiff_t m_bHasSuccessfullyInterpolated = 0x391;
    constexpr std::ptrdiff_t m_bHasAddedVarsToInterpolation = 0x392;
    constexpr std::ptrdiff_t m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x393;
    constexpr std::ptrdiff_t m_nInterpolationLatchDirtyFlags = 0x394;
    constexpr std::ptrdiff_t m_ListEntry = 0x39C;
    constexpr std::ptrdiff_t m_flCreateTime = 0x3B4;
    constexpr std::ptrdiff_t m_flSpeed = 0x3B8;
    constexpr std::ptrdiff_t m_EntClientFlags = 0x3BC;
    constexpr std::ptrdiff_t m_bClientSideRagdoll = 0x3BE;
    constexpr std::ptrdiff_t m_iTeamNum = 0x3BF;
    constexpr std::ptrdiff_t m_spawnflags = 0x3C0;
    constexpr std::ptrdiff_t m_nNextThinkTick = 0x3C4;
    constexpr std::ptrdiff_t m_fFlags = 0x3C8;
    constexpr std::ptrdiff_t m_vecAbsVelocity = 0x3CC;
    constexpr std::ptrdiff_t m_vecVelocity = 0x3D8;
    constexpr std::ptrdiff_t m_vecBaseVelocity = 0x408;
    constexpr std::ptrdiff_t m_hEffectEntity = 0x414;
    constexpr std::ptrdiff_t m_hOwnerEntity = 0x418;
    constexpr std::ptrdiff_t m_MoveCollide = 0x41C;
    constexpr std::ptrdiff_t m_MoveType = 0x41D;
    constexpr std::ptrdiff_t m_flWaterLevel = 0x420;
    constexpr std::ptrdiff_t m_fEffects = 0x424;
    constexpr std::ptrdiff_t m_hGroundEntity = 0x428;
    constexpr std::ptrdiff_t m_flFriction = 0x42C;
    constexpr std::ptrdiff_t m_flElasticity = 0x430;
    constexpr std::ptrdiff_t m_flGravityScale = 0x434;
    constexpr std::ptrdiff_t m_flTimeScale = 0x438;
    constexpr std::ptrdiff_t m_bSimulatedEveryTick = 0x43C;
    constexpr std::ptrdiff_t m_bAnimatedEveryTick = 0x43D;
    constexpr std::ptrdiff_t m_flNavIgnoreUntilTime = 0x440;
    constexpr std::ptrdiff_t m_hThink = 0x444;
    constexpr std::ptrdiff_t m_fBBoxVisFlags = 0x450;
    constexpr std::ptrdiff_t m_bPredictable = 0x451;
    constexpr std::ptrdiff_t m_bRenderWithViewModels = 0x452;
    constexpr std::ptrdiff_t m_nSplitUserPlayerPredictionSlot = 0x454;
    constexpr std::ptrdiff_t m_nFirstPredictableCommand = 0x458;
    constexpr std::ptrdiff_t m_nLastPredictableCommand = 0x45C;
    constexpr std::ptrdiff_t m_hOldMoveParent = 0x460;
    constexpr std::ptrdiff_t m_Particles = 0x468;
    constexpr std::ptrdiff_t m_vecPredictedScriptFloats = 0x490;
    constexpr std::ptrdiff_t m_vecPredictedScriptFloatIDs = 0x4A8;
    constexpr std::ptrdiff_t m_nNextScriptVarRecordID = 0x4D8;
    constexpr std::ptrdiff_t m_vecAngVelocity = 0x4E8;
    constexpr std::ptrdiff_t m_DataChangeEventRef = 0x4F4;
    constexpr std::ptrdiff_t m_dependencies = 0x4F8;
    constexpr std::ptrdiff_t m_nCreationTick = 0x510;
    constexpr std::ptrdiff_t m_bAnimTimeChanged = 0x529;
    constexpr std::ptrdiff_t m_bSimulationTimeChanged = 0x52A;
    constexpr std::ptrdiff_t m_sUniqueHammerID = 0x538;
}

namespace C_BaseFire {
    constexpr std::ptrdiff_t m_flScale = 0x540;
    constexpr std::ptrdiff_t m_flStartScale = 0x544;
    constexpr std::ptrdiff_t m_flScaleTime = 0x548;
    constexpr std::ptrdiff_t m_nFlags = 0x54C;
}

namespace C_BaseFlex {
    constexpr std::ptrdiff_t m_flexWeight = 0xE90;
    constexpr std::ptrdiff_t m_vLookTargetPosition = 0xEA8;
    constexpr std::ptrdiff_t m_blinktoggle = 0xEC0;
    constexpr std::ptrdiff_t m_nLastFlexUpdateFrameCount = 0xF20;
    constexpr std::ptrdiff_t m_CachedViewTarget = 0xF24;
    constexpr std::ptrdiff_t m_nNextSceneEventId = 0xF30;
    constexpr std::ptrdiff_t m_iBlink = 0xF34;
    constexpr std::ptrdiff_t m_blinktime = 0xF38;
    constexpr std::ptrdiff_t m_prevblinktoggle = 0xF3C;
    constexpr std::ptrdiff_t m_iJawOpen = 0xF40;
    constexpr std::ptrdiff_t m_flJawOpenAmount = 0xF44;
    constexpr std::ptrdiff_t m_flBlinkAmount = 0xF48;
    constexpr std::ptrdiff_t m_iMouthAttachment = 0xF4C;
    constexpr std::ptrdiff_t m_iEyeAttachment = 0xF4D;
    constexpr std::ptrdiff_t m_bResetFlexWeightsOnModelChange = 0xF4E;
    constexpr std::ptrdiff_t m_nEyeOcclusionRendererBone = 0xF68;
    constexpr std::ptrdiff_t m_mEyeOcclusionRendererCameraToBoneTransform = 0xF6C;
    constexpr std::ptrdiff_t m_vEyeOcclusionRendererHalfExtent = 0xF9C;
    constexpr std::ptrdiff_t m_PhonemeClasses = 0xFB8;
}

namespace C_BaseFlex_Emphasized_Phoneme {
    constexpr std::ptrdiff_t m_sClassName = 0x0;
    constexpr std::ptrdiff_t m_flAmount = 0x18;
    constexpr std::ptrdiff_t m_bRequired = 0x1C;
    constexpr std::ptrdiff_t m_bBasechecked = 0x1D;
    constexpr std::ptrdiff_t m_bValid = 0x1E;
}

namespace C_BaseGrenade {
    constexpr std::ptrdiff_t m_bHasWarnedAI = 0x1018;
    constexpr std::ptrdiff_t m_bIsSmokeGrenade = 0x1019;
    constexpr std::ptrdiff_t m_bIsLive = 0x101A;
    constexpr std::ptrdiff_t m_DmgRadius = 0x101C;
    constexpr std::ptrdiff_t m_flDetonateTime = 0x1020;
    constexpr std::ptrdiff_t m_flWarnAITime = 0x1024;
    constexpr std::ptrdiff_t m_flDamage = 0x1028;
    constexpr std::ptrdiff_t m_iszBounceSound = 0x1030;
    constexpr std::ptrdiff_t m_ExplosionSound = 0x1038;
    constexpr std::ptrdiff_t m_hThrower = 0x1044;
    constexpr std::ptrdiff_t m_flNextAttack = 0x105C;
    constexpr std::ptrdiff_t m_hOriginalThrower = 0x1060;
}

namespace C_BaseModelEntity {
    constexpr std::ptrdiff_t m_CRenderComponent = 0xA10;
    constexpr std::ptrdiff_t m_CHitboxComponent = 0xA18;
    constexpr std::ptrdiff_t m_bInitModelEffects = 0xA60;
    constexpr std::ptrdiff_t m_bIsStaticProp = 0xA61;
    constexpr std::ptrdiff_t m_nLastAddDecal = 0xA64;
    constexpr std::ptrdiff_t m_nDecalsAdded = 0xA68;
    constexpr std::ptrdiff_t m_iOldHealth = 0xA6C;
    constexpr std::ptrdiff_t m_nRenderMode = 0xA70;
    constexpr std::ptrdiff_t m_nRenderFX = 0xA71;
    constexpr std::ptrdiff_t m_bAllowFadeInView = 0xA72;
    constexpr std::ptrdiff_t m_clrRender = 0xA73;
    constexpr std::ptrdiff_t m_vecRenderAttributes = 0xA78;
    constexpr std::ptrdiff_t m_LightGroup = 0xAE0;
    constexpr std::ptrdiff_t m_bRenderToCubemaps = 0xAE4;
    constexpr std::ptrdiff_t m_Collision = 0xAE8;
    constexpr std::ptrdiff_t m_Glow = 0xB98;
    constexpr std::ptrdiff_t m_flGlowBackfaceMult = 0xBF0;
    constexpr std::ptrdiff_t m_fadeMinDist = 0xBF4;
    constexpr std::ptrdiff_t m_fadeMaxDist = 0xBF8;
    constexpr std::ptrdiff_t m_flFadeScale = 0xBFC;
    constexpr std::ptrdiff_t m_flShadowStrength = 0xC00;
    constexpr std::ptrdiff_t m_nObjectCulling = 0xC04;
    constexpr std::ptrdiff_t m_nAddDecal = 0xC08;
    constexpr std::ptrdiff_t m_vDecalPosition = 0xC0C;
    constexpr std::ptrdiff_t m_vDecalForwardAxis = 0xC18;
    constexpr std::ptrdiff_t m_flDecalHealBloodRate = 0xC24;
    constexpr std::ptrdiff_t m_flDecalHealHeightRate = 0xC28;
    constexpr std::ptrdiff_t m_ConfigEntitiesToPropagateMaterialDecalsTo = 0xC30;
    constexpr std::ptrdiff_t m_vecViewOffset = 0xC48;
    constexpr std::ptrdiff_t m_pClientAlphaProperty = 0xC78;
    constexpr std::ptrdiff_t m_ClientOverrideTint = 0xC80;
    constexpr std::ptrdiff_t m_bUseClientOverrideTint = 0xC84;
}

namespace C_BasePlayerPawn {
    constexpr std::ptrdiff_t m_pWeaponServices = 0x10A8;
    constexpr std::ptrdiff_t m_pItemServices = 0x10B0;
    constexpr std::ptrdiff_t m_pAutoaimServices = 0x10B8;
    constexpr std::ptrdiff_t m_pObserverServices = 0x10C0;
    constexpr std::ptrdiff_t m_pWaterServices = 0x10C8;
    constexpr std::ptrdiff_t m_pUseServices = 0x10D0;
    constexpr std::ptrdiff_t m_pFlashlightServices = 0x10D8;
    constexpr std::ptrdiff_t m_pCameraServices = 0x10E0;
    constexpr std::ptrdiff_t m_pMovementServices = 0x10E8;
    constexpr std::ptrdiff_t m_ServerViewAngleChanges = 0x10F8;
    constexpr std::ptrdiff_t m_nHighestConsumedServerViewAngleChangeIndex = 0x1148;
    constexpr std::ptrdiff_t v_angle = 0x114C;
    constexpr std::ptrdiff_t v_anglePrevious = 0x1158;
    constexpr std::ptrdiff_t m_iHideHUD = 0x1164;
    constexpr std::ptrdiff_t m_skybox3d = 0x1168;
    constexpr std::ptrdiff_t m_flDeathTime = 0x11F8;
    constexpr std::ptrdiff_t m_vecPredictionError = 0x11FC;
    constexpr std::ptrdiff_t m_flPredictionErrorTime = 0x1208;
    constexpr std::ptrdiff_t m_flFOVSensitivityAdjust = 0x120C;
    constexpr std::ptrdiff_t m_flMouseSensitivity = 0x1210;
    constexpr std::ptrdiff_t m_vOldOrigin = 0x1214;
    constexpr std::ptrdiff_t m_flOldSimulationTime = 0x1220;
    constexpr std::ptrdiff_t m_nLastExecutedCommandNumber = 0x1224;
    constexpr std::ptrdiff_t m_nLastExecutedCommandTick = 0x1228;
    constexpr std::ptrdiff_t m_hController = 0x122C;
    constexpr std::ptrdiff_t m_bIsSwappingToPredictableController = 0x1230;
}

namespace C_BasePlayerWeapon {
    constexpr std::ptrdiff_t m_nNextPrimaryAttackTick = 0x1560;
    constexpr std::ptrdiff_t m_flNextPrimaryAttackTickRatio = 0x1564;
    constexpr std::ptrdiff_t m_nNextSecondaryAttackTick = 0x1568;
    constexpr std::ptrdiff_t m_flNextSecondaryAttackTickRatio = 0x156C;
    constexpr std::ptrdiff_t m_iClip1 = 0x1570;
    constexpr std::ptrdiff_t m_iClip2 = 0x1574;
    constexpr std::ptrdiff_t m_pReserveAmmo = 0x1578;
}

namespace C_BasePropDoor {
    constexpr std::ptrdiff_t m_eDoorState = 0x10F8;
    constexpr std::ptrdiff_t m_modelChanged = 0x10FC;
    constexpr std::ptrdiff_t m_bLocked = 0x10FD;
    constexpr std::ptrdiff_t m_closedPosition = 0x1100;
    constexpr std::ptrdiff_t m_closedAngles = 0x110C;
    constexpr std::ptrdiff_t m_hMaster = 0x1118;
    constexpr std::ptrdiff_t m_vWhereToSetLightingOrigin = 0x111C;
}

namespace C_BaseTrigger {
    constexpr std::ptrdiff_t m_bDisabled = 0xCC0;
    constexpr std::ptrdiff_t m_bClientSidePredicted = 0xCC1;
}

namespace C_BaseViewModel {
    constexpr std::ptrdiff_t m_vecLastFacing = 0xE88;
    constexpr std::ptrdiff_t m_nViewModelIndex = 0xE94;
    constexpr std::ptrdiff_t m_nAnimationParity = 0xE98;
    constexpr std::ptrdiff_t m_flAnimationStartTime = 0xE9C;
    constexpr std::ptrdiff_t m_hWeapon = 0xEA0;
    constexpr std::ptrdiff_t m_sVMName = 0xEA8;
    constexpr std::ptrdiff_t m_sAnimationPrefix = 0xEB0;
    constexpr std::ptrdiff_t m_hWeaponModel = 0xEB8;
    constexpr std::ptrdiff_t m_iCameraAttachment = 0xEBC;
    constexpr std::ptrdiff_t m_vecLastCameraAngles = 0xEC0;
    constexpr std::ptrdiff_t m_previousElapsedDuration = 0xECC;
    constexpr std::ptrdiff_t m_previousCycle = 0xED0;
    constexpr std::ptrdiff_t m_nOldAnimationParity = 0xED4;
    constexpr std::ptrdiff_t m_hOldLayerSequence = 0xED8;
    constexpr std::ptrdiff_t m_oldLayer = 0xEDC;
    constexpr std::ptrdiff_t m_oldLayerStartTime = 0xEE0;
    constexpr std::ptrdiff_t m_hControlPanel = 0xEE4;
}

namespace C_Beam {
    constexpr std::ptrdiff_t m_flFrameRate = 0xCC0;
    constexpr std::ptrdiff_t m_flHDRColorScale = 0xCC4;
    constexpr std::ptrdiff_t m_flFireTime = 0xCC8;
    constexpr std::ptrdiff_t m_flDamage = 0xCCC;
    constexpr std::ptrdiff_t m_nNumBeamEnts = 0xCD0;
    constexpr std::ptrdiff_t m_queryHandleHalo = 0xCD4;
    constexpr std::ptrdiff_t m_hBaseMaterial = 0xCF8;
    constexpr std::ptrdiff_t m_nHaloIndex = 0xD00;
    constexpr std::ptrdiff_t m_nBeamType = 0xD08;
    constexpr std::ptrdiff_t m_nBeamFlags = 0xD0C;
    constexpr std::ptrdiff_t m_hAttachEntity = 0xD10;
    constexpr std::ptrdiff_t m_nAttachIndex = 0xD38;
    constexpr std::ptrdiff_t m_fWidth = 0xD44;
    constexpr std::ptrdiff_t m_fEndWidth = 0xD48;
    constexpr std::ptrdiff_t m_fFadeLength = 0xD4C;
    constexpr std::ptrdiff_t m_fHaloScale = 0xD50;
    constexpr std::ptrdiff_t m_fAmplitude = 0xD54;
    constexpr std::ptrdiff_t m_fStartFrame = 0xD58;
    constexpr std::ptrdiff_t m_fSpeed = 0xD5C;
    constexpr std::ptrdiff_t m_flFrame = 0xD60;
    constexpr std::ptrdiff_t m_nClipStyle = 0xD64;
    constexpr std::ptrdiff_t m_bTurnedOff = 0xD68;
    constexpr std::ptrdiff_t m_vecEndPos = 0xD6C;
    constexpr std::ptrdiff_t m_hEndEntity = 0xD78;
}

namespace C_BreakableProp {
    constexpr std::ptrdiff_t m_OnBreak = 0xEC8;
    constexpr std::ptrdiff_t m_OnHealthChanged = 0xEF0;
    constexpr std::ptrdiff_t m_OnTakeDamage = 0xF18;
    constexpr std::ptrdiff_t m_impactEnergyScale = 0xF40;
    constexpr std::ptrdiff_t m_iMinHealthDmg = 0xF44;
    constexpr std::ptrdiff_t m_flPressureDelay = 0xF48;
    constexpr std::ptrdiff_t m_hBreaker = 0xF4C;
    constexpr std::ptrdiff_t m_PerformanceMode = 0xF50;
    constexpr std::ptrdiff_t m_flDmgModBullet = 0xF54;
    constexpr std::ptrdiff_t m_flDmgModClub = 0xF58;
    constexpr std::ptrdiff_t m_flDmgModExplosive = 0xF5C;
    constexpr std::ptrdiff_t m_flDmgModFire = 0xF60;
    constexpr std::ptrdiff_t m_iszPhysicsDamageTableName = 0xF68;
    constexpr std::ptrdiff_t m_iszBasePropData = 0xF70;
    constexpr std::ptrdiff_t m_iInteractions = 0xF78;
    constexpr std::ptrdiff_t m_flPreventDamageBeforeTime = 0xF7C;
    constexpr std::ptrdiff_t m_bHasBreakPiecesOrCommands = 0xF80;
    constexpr std::ptrdiff_t m_explodeDamage = 0xF84;
    constexpr std::ptrdiff_t m_explodeRadius = 0xF88;
    constexpr std::ptrdiff_t m_explosionDelay = 0xF90;
    constexpr std::ptrdiff_t m_explosionBuildupSound = 0xF98;
    constexpr std::ptrdiff_t m_explosionCustomEffect = 0xFA0;
    constexpr std::ptrdiff_t m_explosionCustomSound = 0xFA8;
    constexpr std::ptrdiff_t m_explosionModifier = 0xFB0;
    constexpr std::ptrdiff_t m_hPhysicsAttacker = 0xFB8;
    constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0xFBC;
    constexpr std::ptrdiff_t m_flDefaultFadeScale = 0xFC0;
    constexpr std::ptrdiff_t m_hLastAttacker = 0xFC4;
    constexpr std::ptrdiff_t m_hFlareEnt = 0xFC8;
    constexpr std::ptrdiff_t m_noGhostCollision = 0xFCC;
}

namespace C_BulletHitModel {
    constexpr std::ptrdiff_t m_matLocal = 0xE80;
    constexpr std::ptrdiff_t m_iBoneIndex = 0xEB0;
    constexpr std::ptrdiff_t m_hPlayerParent = 0xEB4;
    constexpr std::ptrdiff_t m_bIsHit = 0xEB8;
    constexpr std::ptrdiff_t m_flTimeCreated = 0xEBC;
    constexpr std::ptrdiff_t m_vecStartPos = 0xEC0;
}

namespace C_C4 {
    constexpr std::ptrdiff_t m_szScreenText = 0x18E0;
    constexpr std::ptrdiff_t m_bombdroppedlightParticleIndex = 0x1900;
    constexpr std::ptrdiff_t m_bStartedArming = 0x1904;
    constexpr std::ptrdiff_t m_fArmedTime = 0x1908;
    constexpr std::ptrdiff_t m_bBombPlacedAnimation = 0x190C;
    constexpr std::ptrdiff_t m_bIsPlantingViaUse = 0x190D;
    constexpr std::ptrdiff_t m_entitySpottedState = 0x1910;
    constexpr std::ptrdiff_t m_nSpotRules = 0x1928;
    constexpr std::ptrdiff_t m_bPlayedArmingBeeps = 0x192C;
    constexpr std::ptrdiff_t m_bBombPlanted = 0x1933;
    constexpr std::ptrdiff_t m_bDroppedFromDeath = 0x1934;
}

namespace C_CSGOViewModel {
    constexpr std::ptrdiff_t m_bShouldIgnoreOffsetAndAccuracy = 0xF10;
    constexpr std::ptrdiff_t m_nWeaponParity = 0xF14;
    constexpr std::ptrdiff_t m_nOldWeaponParity = 0xF18;
    constexpr std::ptrdiff_t m_nLastKnownAssociatedWeaponEntIndex = 0xF1C;
    constexpr std::ptrdiff_t m_bNeedToQueueHighResComposite = 0xF20;
    constexpr std::ptrdiff_t m_vLoweredWeaponOffset = 0xF64;
}

namespace C_CSGO_MapPreviewCameraPath {
    constexpr std::ptrdiff_t m_flZFar = 0x540;
    constexpr std::ptrdiff_t m_flZNear = 0x544;
    constexpr std::ptrdiff_t m_bLoop = 0x548;
    constexpr std::ptrdiff_t m_bVerticalFOV = 0x549;
    constexpr std::ptrdiff_t m_bConstantSpeed = 0x54A;
    constexpr std::ptrdiff_t m_flDuration = 0x54C;
    constexpr std::ptrdiff_t m_flPathLength = 0x590;
    constexpr std::ptrdiff_t m_flPathDuration = 0x594;
}

namespace C_CSGO_MapPreviewCameraPathNode {
    constexpr std::ptrdiff_t m_szParentPathUniqueID = 0x540;
    constexpr std::ptrdiff_t m_nPathIndex = 0x548;
    constexpr std::ptrdiff_t m_vInTangentLocal = 0x54C;
    constexpr std::ptrdiff_t m_vOutTangentLocal = 0x558;
    constexpr std::ptrdiff_t m_flFOV = 0x564;
    constexpr std::ptrdiff_t m_flSpeed = 0x568;
    constexpr std::ptrdiff_t m_flEaseIn = 0x56C;
    constexpr std::ptrdiff_t m_flEaseOut = 0x570;
    constexpr std::ptrdiff_t m_vInTangentWorld = 0x574;
    constexpr std::ptrdiff_t m_vOutTangentWorld = 0x580;
}

namespace C_CSGO_PreviewModel {
    constexpr std::ptrdiff_t m_animgraph = 0x1018;
    constexpr std::ptrdiff_t m_animgraphCharacterModeString = 0x1020;
    constexpr std::ptrdiff_t m_defaultAnim = 0x1028;
    constexpr std::ptrdiff_t m_nDefaultAnimLoopMode = 0x1030;
    constexpr std::ptrdiff_t m_flInitialModelScale = 0x1034;
}

namespace C_CSGO_PreviewPlayer {
    constexpr std::ptrdiff_t m_animgraph = 0x22A0;
    constexpr std::ptrdiff_t m_animgraphCharacterModeString = 0x22A8;
    constexpr std::ptrdiff_t m_flInitialModelScale = 0x22B0;
}

namespace C_CSGO_TeamPreviewCamera {
    constexpr std::ptrdiff_t m_nVariant = 0x5A0;
    constexpr std::ptrdiff_t m_bDofEnabled = 0x5A4;
    constexpr std::ptrdiff_t m_flDofNearBlurry = 0x5A8;
    constexpr std::ptrdiff_t m_flDofNearCrisp = 0x5AC;
    constexpr std::ptrdiff_t m_flDofFarCrisp = 0x5B0;
    constexpr std::ptrdiff_t m_flDofFarBlurry = 0x5B4;
    constexpr std::ptrdiff_t m_flDofTiltToGround = 0x5B8;
}

namespace C_CSGO_TeamPreviewCharacterPosition {
    constexpr std::ptrdiff_t m_nVariant = 0x540;
    constexpr std::ptrdiff_t m_nRandom = 0x544;
    constexpr std::ptrdiff_t m_nOrdinal = 0x548;
    constexpr std::ptrdiff_t m_sWeaponName = 0x550;
    constexpr std::ptrdiff_t m_xuid = 0x558;
    constexpr std::ptrdiff_t m_weaponItem = 0x560;
}

namespace C_CSGameRules {
    constexpr std::ptrdiff_t __m_pChainEntity = 0x8;
    constexpr std::ptrdiff_t m_bFreezePeriod = 0x30;
    constexpr std::ptrdiff_t m_bWarmupPeriod = 0x31;
    constexpr std::ptrdiff_t m_fWarmupPeriodEnd = 0x34;
    constexpr std::ptrdiff_t m_fWarmupPeriodStart = 0x38;
    constexpr std::ptrdiff_t m_nTotalPausedTicks = 0x3C;
    constexpr std::ptrdiff_t m_nPauseStartTick = 0x40;
    constexpr std::ptrdiff_t m_bServerPaused = 0x44;
    constexpr std::ptrdiff_t m_bGamePaused = 0x45;
    constexpr std::ptrdiff_t m_bTerroristTimeOutActive = 0x46;
    constexpr std::ptrdiff_t m_bCTTimeOutActive = 0x47;
    constexpr std::ptrdiff_t m_flTerroristTimeOutRemaining = 0x48;
    constexpr std::ptrdiff_t m_flCTTimeOutRemaining = 0x4C;
    constexpr std::ptrdiff_t m_nTerroristTimeOuts = 0x50;
    constexpr std::ptrdiff_t m_nCTTimeOuts = 0x54;
    constexpr std::ptrdiff_t m_bTechnicalTimeOut = 0x58;
    constexpr std::ptrdiff_t m_bMatchWaitingForResume = 0x59;
    constexpr std::ptrdiff_t m_iRoundTime = 0x5C;
    constexpr std::ptrdiff_t m_fMatchStartTime = 0x60;
    constexpr std::ptrdiff_t m_fRoundStartTime = 0x64;
    constexpr std::ptrdiff_t m_flRestartRoundTime = 0x68;
    constexpr std::ptrdiff_t m_bGameRestart = 0x6C;
    constexpr std::ptrdiff_t m_flGameStartTime = 0x70;
    constexpr std::ptrdiff_t m_timeUntilNextPhaseStarts = 0x74;
    constexpr std::ptrdiff_t m_gamePhase = 0x78;
    constexpr std::ptrdiff_t m_totalRoundsPlayed = 0x7C;
    constexpr std::ptrdiff_t m_nRoundsPlayedThisPhase = 0x80;
    constexpr std::ptrdiff_t m_nOvertimePlaying = 0x84;
    constexpr std::ptrdiff_t m_iHostagesRemaining = 0x88;
    constexpr std::ptrdiff_t m_bAnyHostageReached = 0x8C;
    constexpr std::ptrdiff_t m_bMapHasBombTarget = 0x8D;
    constexpr std::ptrdiff_t m_bMapHasRescueZone = 0x8E;
    constexpr std::ptrdiff_t m_bMapHasBuyZone = 0x8F;
    constexpr std::ptrdiff_t m_bIsQueuedMatchmaking = 0x90;
    constexpr std::ptrdiff_t m_nQueuedMatchmakingMode = 0x94;
    constexpr std::ptrdiff_t m_bIsValveDS = 0x98;
    constexpr std::ptrdiff_t m_bLogoMap = 0x99;
    constexpr std::ptrdiff_t m_bPlayAllStepSoundsOnServer = 0x9A;
    constexpr std::ptrdiff_t m_iSpectatorSlotCount = 0x9C;
    constexpr std::ptrdiff_t m_MatchDevice = 0xA0;
    constexpr std::ptrdiff_t m_bHasMatchStarted = 0xA4;
    constexpr std::ptrdiff_t m_nNextMapInMapgroup = 0xA8;
    constexpr std::ptrdiff_t m_szTournamentEventName = 0xAC;
    constexpr std::ptrdiff_t m_szTournamentEventStage = 0x2AC;
    constexpr std::ptrdiff_t m_szMatchStatTxt = 0x4AC;
    constexpr std::ptrdiff_t m_szTournamentPredictionsTxt = 0x6AC;
    constexpr std::ptrdiff_t m_nTournamentPredictionsPct = 0x8AC;
    constexpr std::ptrdiff_t m_flCMMItemDropRevealStartTime = 0x8B0;
    constexpr std::ptrdiff_t m_flCMMItemDropRevealEndTime = 0x8B4;
    constexpr std::ptrdiff_t m_bIsDroppingItems = 0x8B8;
    constexpr std::ptrdiff_t m_bIsQuestEligible = 0x8B9;
    constexpr std::ptrdiff_t m_nGuardianModeWaveNumber = 0x8BC;
    constexpr std::ptrdiff_t m_nGuardianModeSpecialKillsRemaining = 0x8C0;
    constexpr std::ptrdiff_t m_nGuardianModeSpecialWeaponNeeded = 0x8C4;
    constexpr std::ptrdiff_t m_nGuardianGrenadesToGiveBots = 0x8C8;
    constexpr std::ptrdiff_t m_nNumHeaviesToSpawn = 0x8CC;
    constexpr std::ptrdiff_t m_numGlobalGiftsGiven = 0x8D0;
    constexpr std::ptrdiff_t m_numGlobalGifters = 0x8D4;
    constexpr std::ptrdiff_t m_numGlobalGiftsPeriodSeconds = 0x8D8;
    constexpr std::ptrdiff_t m_arrFeaturedGiftersAccounts = 0x8DC;
    constexpr std::ptrdiff_t m_arrFeaturedGiftersGifts = 0x8EC;
    constexpr std::ptrdiff_t m_arrProhibitedItemIndices = 0x8FC;
    constexpr std::ptrdiff_t m_arrTournamentActiveCasterAccounts = 0x9C4;
    constexpr std::ptrdiff_t m_numBestOfMaps = 0x9D4;
    constexpr std::ptrdiff_t m_nHalloweenMaskListSeed = 0x9D8;
    constexpr std::ptrdiff_t m_bBombDropped = 0x9DC;
    constexpr std::ptrdiff_t m_bBombPlanted = 0x9DD;
    constexpr std::ptrdiff_t m_iRoundWinStatus = 0x9E0;
    constexpr std::ptrdiff_t m_eRoundWinReason = 0x9E4;
    constexpr std::ptrdiff_t m_bTCantBuy = 0x9E8;
    constexpr std::ptrdiff_t m_bCTCantBuy = 0x9E9;
    constexpr std::ptrdiff_t m_flGuardianBuyUntilTime = 0x9EC;
    constexpr std::ptrdiff_t m_iMatchStats_RoundResults = 0x9F0;
    constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_CT = 0xA68;
    constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_T = 0xAE0;
    constexpr std::ptrdiff_t m_TeamRespawnWaveTimes = 0xB58;
    constexpr std::ptrdiff_t m_flNextRespawnWave = 0xBD8;
    constexpr std::ptrdiff_t m_nServerQuestID = 0xC58;
    constexpr std::ptrdiff_t m_vMinimapMins = 0xC5C;
    constexpr std::ptrdiff_t m_vMinimapMaxs = 0xC68;
    constexpr std::ptrdiff_t m_MinimapVerticalSectionHeights = 0xC74;
    constexpr std::ptrdiff_t m_bDontIncrementCoopWave = 0xC94;
    constexpr std::ptrdiff_t m_bSpawnedTerrorHuntHeavy = 0xC95;
    constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteTypes = 0xC98;
    constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteOptions = 0xCC0;
    constexpr std::ptrdiff_t m_nEndMatchMapVoteWinner = 0xCE8;
    constexpr std::ptrdiff_t m_iNumConsecutiveCTLoses = 0xCEC;
    constexpr std::ptrdiff_t m_iNumConsecutiveTerroristLoses = 0xCF0;
    constexpr std::ptrdiff_t m_bMarkClientStopRecordAtRoundEnd = 0xD10;
    constexpr std::ptrdiff_t m_bMatchAbortedDueToPlayerBan = 0xD68;
    constexpr std::ptrdiff_t m_bHasTriggeredRoundStartMusic = 0xD69;
    constexpr std::ptrdiff_t m_bHasTriggeredCoopSpawnReset = 0xD6A;
    constexpr std::ptrdiff_t m_bSwitchingTeamsAtRoundReset = 0xD6B;
    constexpr std::ptrdiff_t m_pGameModeRules = 0xD88;
    constexpr std::ptrdiff_t m_RetakeRules = 0xD90;
    constexpr std::ptrdiff_t m_nMatchEndCount = 0xEA8;
    constexpr std::ptrdiff_t m_nTTeamIntroVariant = 0xEAC;
    constexpr std::ptrdiff_t m_nCTTeamIntroVariant = 0xEB0;
    constexpr std::ptrdiff_t m_bTeamIntroPeriod = 0xEB4;
    constexpr std::ptrdiff_t m_flLastPerfSampleTime = 0x1E70;
}

namespace C_CSGameRulesProxy {
    constexpr std::ptrdiff_t m_pGameRules = 0x540;
}

namespace C_CSObserverPawn {
    constexpr std::ptrdiff_t m_hDetectParentChange = 0x16A0;
}

namespace C_CSPlayerPawn {
    constexpr std::ptrdiff_t m_pBulletServices = 0x16A0;
    constexpr std::ptrdiff_t m_pHostageServices = 0x16A8;
    constexpr std::ptrdiff_t m_pBuyServices = 0x16B0;
    constexpr std::ptrdiff_t m_pGlowServices = 0x16B8;
    constexpr std::ptrdiff_t m_pActionTrackingServices = 0x16C0;
    constexpr std::ptrdiff_t m_flHealthShotBoostExpirationTime = 0x16C8;
    constexpr std::ptrdiff_t m_flLastFiredWeaponTime = 0x16CC;
    constexpr std::ptrdiff_t m_bHasFemaleVoice = 0x16D0;
    constexpr std::ptrdiff_t m_flLandseconds = 0x16D4;
    constexpr std::ptrdiff_t m_flOldFallVelocity = 0x16D8;
    constexpr std::ptrdiff_t m_szLastPlaceName = 0x16DC;
    constexpr std::ptrdiff_t m_bPrevDefuser = 0x16EE;
    constexpr std::ptrdiff_t m_bPrevHelmet = 0x16EF;
    constexpr std::ptrdiff_t m_nPrevArmorVal = 0x16F0;
    constexpr std::ptrdiff_t m_nPrevGrenadeAmmoCount = 0x16F4;
    constexpr std::ptrdiff_t m_unPreviousWeaponHash = 0x16F8;
    constexpr std::ptrdiff_t m_unWeaponHash = 0x16FC;
    constexpr std::ptrdiff_t m_bInBuyZone = 0x1700;
    constexpr std::ptrdiff_t m_bPreviouslyInBuyZone = 0x1701;
    constexpr std::ptrdiff_t m_aimPunchAngle = 0x1704;
    constexpr std::ptrdiff_t m_aimPunchAngleVel = 0x1710;
    constexpr std::ptrdiff_t m_aimPunchTickBase = 0x171C;
    constexpr std::ptrdiff_t m_aimPunchTickFraction = 0x1720;
    constexpr std::ptrdiff_t m_aimPunchCache = 0x1728;
    constexpr std::ptrdiff_t m_bInLanding = 0x1748;
    constexpr std::ptrdiff_t m_flLandingTime = 0x174C;
    constexpr std::ptrdiff_t m_bInHostageRescueZone = 0x1750;
    constexpr std::ptrdiff_t m_bInBombZone = 0x1751;
    constexpr std::ptrdiff_t m_bIsBuyMenuOpen = 0x1752;
    constexpr std::ptrdiff_t m_flTimeOfLastInjury = 0x1754;
    constexpr std::ptrdiff_t m_flNextSprayDecalTime = 0x1758;
    constexpr std::ptrdiff_t m_iRetakesOffering = 0x1870;
    constexpr std::ptrdiff_t m_iRetakesOfferingCard = 0x1874;
    constexpr std::ptrdiff_t m_bRetakesHasDefuseKit = 0x1878;
    constexpr std::ptrdiff_t m_bRetakesMVPLastRound = 0x1879;
    constexpr std::ptrdiff_t m_iRetakesMVPBoostItem = 0x187C;
    constexpr std::ptrdiff_t m_RetakesMVPBoostExtraUtility = 0x1880;
    constexpr std::ptrdiff_t m_bNeedToReApplyGloves = 0x18A0;
    constexpr std::ptrdiff_t m_EconGloves = 0x18A8;
    constexpr std::ptrdiff_t m_bMustSyncRagdollState = 0x1CF0;
    constexpr std::ptrdiff_t m_nRagdollDamageBone = 0x1CF4;
    constexpr std::ptrdiff_t m_vRagdollDamageForce = 0x1CF8;
    constexpr std::ptrdiff_t m_vRagdollDamagePosition = 0x1D04;
    constexpr std::ptrdiff_t m_szRagdollDamageWeaponName = 0x1D10;
    constexpr std::ptrdiff_t m_bRagdollDamageHeadshot = 0x1D50;
    constexpr std::ptrdiff_t m_bLastHeadBoneTransformIsValid = 0x2270;
    constexpr std::ptrdiff_t m_lastLandTime = 0x2274;
    constexpr std::ptrdiff_t m_qDeathEyeAngles = 0x2290;
    constexpr std::ptrdiff_t m_bSkipOneHeadConstraintUpdate = 0x229C;
}

namespace C_CSPlayerPawnBase {
    constexpr std::ptrdiff_t m_pPingServices = 0x1250;
    constexpr std::ptrdiff_t m_pViewModelServices = 0x1258;
    constexpr std::ptrdiff_t m_fRenderingClipPlane = 0x1260;
    constexpr std::ptrdiff_t m_nLastClipPlaneSetupFrame = 0x1270;
    constexpr std::ptrdiff_t m_vecLastClipCameraPos = 0x1274;
    constexpr std::ptrdiff_t m_vecLastClipCameraForward = 0x1280;
    constexpr std::ptrdiff_t m_bClipHitStaticWorld = 0x128C;
    constexpr std::ptrdiff_t m_bCachedPlaneIsValid = 0x128D;
    constexpr std::ptrdiff_t m_pClippingWeapon = 0x1290;
    constexpr std::ptrdiff_t m_previousPlayerState = 0x1298;
    constexpr std::ptrdiff_t m_flLastCollisionCeiling = 0x129C;
    constexpr std::ptrdiff_t m_flLastCollisionCeilingChangeTime = 0x12A0;
    constexpr std::ptrdiff_t m_grenadeParameterStashTime = 0x12C0;
    constexpr std::ptrdiff_t m_bGrenadeParametersStashed = 0x12C4;
    constexpr std::ptrdiff_t m_angStashedShootAngles = 0x12C8;
    constexpr std::ptrdiff_t m_vecStashedGrenadeThrowPosition = 0x12D4;
    constexpr std::ptrdiff_t m_vecStashedVelocity = 0x12E0;
    constexpr std::ptrdiff_t m_angShootAngleHistory = 0x12EC;
    constexpr std::ptrdiff_t m_vecThrowPositionHistory = 0x1304;
    constexpr std::ptrdiff_t m_vecVelocityHistory = 0x131C;
    constexpr std::ptrdiff_t m_thirdPersonHeading = 0x1338;
    constexpr std::ptrdiff_t m_flSlopeDropOffset = 0x1350;
    constexpr std::ptrdiff_t m_flSlopeDropHeight = 0x1360;
    constexpr std::ptrdiff_t m_vHeadConstraintOffset = 0x1370;
    constexpr std::ptrdiff_t m_bIsScoped = 0x1388;
    constexpr std::ptrdiff_t m_bIsWalking = 0x1389;
    constexpr std::ptrdiff_t m_bResumeZoom = 0x138A;
    constexpr std::ptrdiff_t m_iPlayerState = 0x138C;
    constexpr std::ptrdiff_t m_bIsDefusing = 0x1390;
    constexpr std::ptrdiff_t m_bIsGrabbingHostage = 0x1391;
    constexpr std::ptrdiff_t m_iBlockingUseActionInProgress = 0x1394;
    constexpr std::ptrdiff_t m_bIsRescuing = 0x1398;
    constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTime = 0x139C;
    constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTimeLast = 0x13A0;
    constexpr std::ptrdiff_t m_bGunGameImmunity = 0x13A4;
    constexpr std::ptrdiff_t m_bHasMovedSinceSpawn = 0x13A5;
    constexpr std::ptrdiff_t m_unTotalRoundDamageDealt = 0x13A8;
    constexpr std::ptrdiff_t m_fMolotovUseTime = 0x13AC;
    constexpr std::ptrdiff_t m_fMolotovDamageTime = 0x13B0;
    constexpr std::ptrdiff_t m_nWhichBombZone = 0x13B4;
    constexpr std::ptrdiff_t m_bInNoDefuseArea = 0x13B8;
    constexpr std::ptrdiff_t m_iThrowGrenadeCounter = 0x13BC;
    constexpr std::ptrdiff_t m_bWaitForNoAttack = 0x13C0;
    constexpr std::ptrdiff_t m_flGuardianTooFarDistFrac = 0x13C4;
    constexpr std::ptrdiff_t m_flDetectedByEnemySensorTime = 0x13C8;
    constexpr std::ptrdiff_t m_flNextGuardianTooFarWarning = 0x13CC;
    constexpr std::ptrdiff_t m_bSuppressGuardianTooFarWarningAudio = 0x13D0;
    constexpr std::ptrdiff_t m_bKilledByTaser = 0x13D1;
    constexpr std::ptrdiff_t m_iMoveState = 0x13D4;
    constexpr std::ptrdiff_t m_bCanMoveDuringFreezePeriod = 0x13D8;
    constexpr std::ptrdiff_t m_flLowerBodyYawTarget = 0x13DC;
    constexpr std::ptrdiff_t m_bStrafing = 0x13E0;
    constexpr std::ptrdiff_t m_flLastSpawnTimeIndex = 0x13E4;
    constexpr std::ptrdiff_t m_flEmitSoundTime = 0x13E8;
    constexpr std::ptrdiff_t m_iAddonBits = 0x13EC;
    constexpr std::ptrdiff_t m_iPrimaryAddon = 0x13F0;
    constexpr std::ptrdiff_t m_iSecondaryAddon = 0x13F4;
    constexpr std::ptrdiff_t m_iProgressBarDuration = 0x13F8;
    constexpr std::ptrdiff_t m_flProgressBarStartTime = 0x13FC;
    constexpr std::ptrdiff_t m_iDirection = 0x1400;
    constexpr std::ptrdiff_t m_iShotsFired = 0x1404;
    constexpr std::ptrdiff_t m_bNightVisionOn = 0x1408;
    constexpr std::ptrdiff_t m_bHasNightVision = 0x1409;
    constexpr std::ptrdiff_t m_flVelocityModifier = 0x140C;
    constexpr std::ptrdiff_t m_flHitHeading = 0x1410;
    constexpr std::ptrdiff_t m_nHitBodyPart = 0x1414;
    constexpr std::ptrdiff_t m_iStartAccount = 0x1418;
    constexpr std::ptrdiff_t m_vecIntroStartEyePosition = 0x141C;
    constexpr std::ptrdiff_t m_vecIntroStartPlayerForward = 0x1428;
    constexpr std::ptrdiff_t m_flClientDeathTime = 0x1434;
    constexpr std::ptrdiff_t m_flNightVisionAlpha = 0x1438;
    constexpr std::ptrdiff_t m_bScreenTearFrameCaptured = 0x143C;
    constexpr std::ptrdiff_t m_flFlashBangTime = 0x1440;
    constexpr std::ptrdiff_t m_flFlashScreenshotAlpha = 0x1444;
    constexpr std::ptrdiff_t m_flFlashOverlayAlpha = 0x1448;
    constexpr std::ptrdiff_t m_bFlashBuildUp = 0x144C;
    constexpr std::ptrdiff_t m_bFlashDspHasBeenCleared = 0x144D;
    constexpr std::ptrdiff_t m_bFlashScreenshotHasBeenGrabbed = 0x144E;
    constexpr std::ptrdiff_t m_flFlashMaxAlpha = 0x1450;
    constexpr std::ptrdiff_t m_flFlashDuration = 0x1454;
    constexpr std::ptrdiff_t m_lastStandingPos = 0x1458;
    constexpr std::ptrdiff_t m_vecLastMuzzleFlashPos = 0x1464;
    constexpr std::ptrdiff_t m_angLastMuzzleFlashAngle = 0x1470;
    constexpr std::ptrdiff_t m_hMuzzleFlashShape = 0x147C;
    constexpr std::ptrdiff_t m_iHealthBarRenderMaskIndex = 0x1480;
    constexpr std::ptrdiff_t m_flHealthFadeValue = 0x1484;
    constexpr std::ptrdiff_t m_flHealthFadeAlpha = 0x1488;
    constexpr std::ptrdiff_t m_nMyCollisionGroup = 0x148C;
    constexpr std::ptrdiff_t m_ignoreLadderJumpTime = 0x1490;
    constexpr std::ptrdiff_t m_ladderSurpressionTimer = 0x1498;
    constexpr std::ptrdiff_t m_lastLadderNormal = 0x14B0;
    constexpr std::ptrdiff_t m_lastLadderPos = 0x14BC;
    constexpr std::ptrdiff_t m_flDeathCCWeight = 0x14D0;
    constexpr std::ptrdiff_t m_bOldIsScoped = 0x14D4;
    constexpr std::ptrdiff_t m_flPrevRoundEndTime = 0x14D8;
    constexpr std::ptrdiff_t m_flPrevMatchEndTime = 0x14DC;
    constexpr std::ptrdiff_t m_unCurrentEquipmentValue = 0x14E0;
    constexpr std::ptrdiff_t m_unRoundStartEquipmentValue = 0x14E2;
    constexpr std::ptrdiff_t m_unFreezetimeEndEquipmentValue = 0x14E4;
    constexpr std::ptrdiff_t m_vecThirdPersonViewPositionOverride = 0x14E8;
    constexpr std::ptrdiff_t m_nHeavyAssaultSuitCooldownRemaining = 0x14F4;
    constexpr std::ptrdiff_t m_ArmorValue = 0x14F8;
    constexpr std::ptrdiff_t m_angEyeAngles = 0x1500;
    constexpr std::ptrdiff_t m_fNextThinkPushAway = 0x1518;
    constexpr std::ptrdiff_t m_bShouldAutobuyDMWeapons = 0x151C;
    constexpr std::ptrdiff_t m_bShouldAutobuyNow = 0x151D;
    constexpr std::ptrdiff_t m_bHud_MiniScoreHidden = 0x151E;
    constexpr std::ptrdiff_t m_bHud_RadarHidden = 0x151F;
    constexpr std::ptrdiff_t m_nLastKillerIndex = 0x1520;
    constexpr std::ptrdiff_t m_nLastConcurrentKilled = 0x1524;
    constexpr std::ptrdiff_t m_nDeathCamMusic = 0x1528;
    constexpr std::ptrdiff_t m_iIDEntIndex = 0x152C;
    constexpr std::ptrdiff_t m_delayTargetIDTimer = 0x1530;
    constexpr std::ptrdiff_t m_iTargetedWeaponEntIndex = 0x1548;
    constexpr std::ptrdiff_t m_iOldIDEntIndex = 0x154C;
    constexpr std::ptrdiff_t m_holdTargetIDTimer = 0x1550;
    constexpr std::ptrdiff_t m_flCurrentMusicStartTime = 0x156C;
    constexpr std::ptrdiff_t m_flMusicRoundStartTime = 0x1570;
    constexpr std::ptrdiff_t m_bDeferStartMusicOnWarmup = 0x1574;
    constexpr std::ptrdiff_t m_cycleLatch = 0x1578;
    constexpr std::ptrdiff_t m_serverIntendedCycle = 0x157C;
    constexpr std::ptrdiff_t m_vecPlayerPatchEconIndices = 0x1580;
    constexpr std::ptrdiff_t m_bHideTargetID = 0x159C;
    constexpr std::ptrdiff_t m_nextTaserShakeTime = 0x15A0;
    constexpr std::ptrdiff_t m_firstTaserShakeTime = 0x15A4;
    constexpr std::ptrdiff_t m_flLastSmokeOverlayAlpha = 0x15A8;
    constexpr std::ptrdiff_t m_vLastSmokeOverlayColor = 0x15AC;
    constexpr std::ptrdiff_t m_nPlayerSmokedFx = 0x15B8;
    constexpr std::ptrdiff_t m_flNextMagDropTime = 0x15BC;
    constexpr std::ptrdiff_t m_nLastMagDropAttachmentIndex = 0x15C0;
    constexpr std::ptrdiff_t m_vecBulletHitModels = 0x15C8;
    constexpr std::ptrdiff_t m_vecPickupModelSlerpers = 0x15E0;
    constexpr std::ptrdiff_t m_vecLastAliveLocalVelocity = 0x15F8;
    constexpr std::ptrdiff_t m_entitySpottedState = 0x1620;
    constexpr std::ptrdiff_t m_nSurvivalTeamNumber = 0x1638;
    constexpr std::ptrdiff_t m_bGuardianShouldSprayCustomXMark = 0x163C;
    constexpr std::ptrdiff_t m_bHasDeathInfo = 0x163D;
    constexpr std::ptrdiff_t m_flDeathInfoTime = 0x1640;
    constexpr std::ptrdiff_t m_vecDeathInfoOrigin = 0x1644;
    constexpr std::ptrdiff_t m_bKilledByHeadshot = 0x1650;
    constexpr std::ptrdiff_t m_hOriginalController = 0x1654;
}

namespace C_CSPlayerResource {
    constexpr std::ptrdiff_t m_bHostageAlive = 0x540;
    constexpr std::ptrdiff_t m_isHostageFollowingSomeone = 0x54C;
    constexpr std::ptrdiff_t m_iHostageEntityIDs = 0x558;
    constexpr std::ptrdiff_t m_bombsiteCenterA = 0x588;
    constexpr std::ptrdiff_t m_bombsiteCenterB = 0x594;
    constexpr std::ptrdiff_t m_hostageRescueX = 0x5A0;
    constexpr std::ptrdiff_t m_hostageRescueY = 0x5B0;
    constexpr std::ptrdiff_t m_hostageRescueZ = 0x5C0;
    constexpr std::ptrdiff_t m_bEndMatchNextMapAllVoted = 0x5D0;
    constexpr std::ptrdiff_t m_foundGoalPositions = 0x5D1;
}

namespace C_CSTeam {
    constexpr std::ptrdiff_t m_szTeamMatchStat = 0x5F8;
    constexpr std::ptrdiff_t m_numMapVictories = 0x7F8;
    constexpr std::ptrdiff_t m_bSurrendered = 0x7FC;
    constexpr std::ptrdiff_t m_scoreFirstHalf = 0x800;
    constexpr std::ptrdiff_t m_scoreSecondHalf = 0x804;
    constexpr std::ptrdiff_t m_scoreOvertime = 0x808;
    constexpr std::ptrdiff_t m_szClanTeamname = 0x80C;
    constexpr std::ptrdiff_t m_iClanID = 0x890;
    constexpr std::ptrdiff_t m_szTeamFlagImage = 0x894;
    constexpr std::ptrdiff_t m_szTeamLogoImage = 0x89C;
}

namespace C_CSWeaponBase {
    constexpr std::ptrdiff_t m_flFireSequenceStartTime = 0x15D0;
    constexpr std::ptrdiff_t m_nFireSequenceStartTimeChange = 0x15D4;
    constexpr std::ptrdiff_t m_nFireSequenceStartTimeAck = 0x15D8;
    constexpr std::ptrdiff_t m_bPlayerFireEventIsPrimary = 0x15DC;
    constexpr std::ptrdiff_t m_seqIdle = 0x15E0;
    constexpr std::ptrdiff_t m_seqFirePrimary = 0x15E4;
    constexpr std::ptrdiff_t m_seqFireSecondary = 0x15E8;
    constexpr std::ptrdiff_t m_iState = 0x1600;
    constexpr std::ptrdiff_t m_flCrosshairDistance = 0x1604;
    constexpr std::ptrdiff_t m_iAmmoLastCheck = 0x1608;
    constexpr std::ptrdiff_t m_iAlpha = 0x160C;
    constexpr std::ptrdiff_t m_iScopeTextureID = 0x1610;
    constexpr std::ptrdiff_t m_iCrosshairTextureID = 0x1614;
    constexpr std::ptrdiff_t m_flGunAccuracyPosition = 0x1618;
    constexpr std::ptrdiff_t m_nViewModelIndex = 0x161C;
    constexpr std::ptrdiff_t m_bReloadsWithClips = 0x1620;
    constexpr std::ptrdiff_t m_flTimeWeaponIdle = 0x1624;
    constexpr std::ptrdiff_t m_bFireOnEmpty = 0x1628;
    constexpr std::ptrdiff_t m_OnPlayerPickup = 0x1630;
    constexpr std::ptrdiff_t m_weaponMode = 0x1658;
    constexpr std::ptrdiff_t m_flTurningInaccuracyDelta = 0x165C;
    constexpr std::ptrdiff_t m_vecTurningInaccuracyEyeDirLast = 0x1660;
    constexpr std::ptrdiff_t m_flTurningInaccuracy = 0x166C;
    constexpr std::ptrdiff_t m_fAccuracyPenalty = 0x1670;
    constexpr std::ptrdiff_t m_flLastAccuracyUpdateTime = 0x1674;
    constexpr std::ptrdiff_t m_fAccuracySmoothedForZoom = 0x1678;
    constexpr std::ptrdiff_t m_fScopeZoomEndTime = 0x167C;
    constexpr std::ptrdiff_t m_iRecoilIndex = 0x1680;
    constexpr std::ptrdiff_t m_flRecoilIndex = 0x1684;
    constexpr std::ptrdiff_t m_bBurstMode = 0x1688;
    constexpr std::ptrdiff_t m_flPostponeFireReadyTime = 0x168C;
    constexpr std::ptrdiff_t m_bInReload = 0x1690;
    constexpr std::ptrdiff_t m_bReloadVisuallyComplete = 0x1691;
    constexpr std::ptrdiff_t m_flDroppedAtTime = 0x1694;
    constexpr std::ptrdiff_t m_bIsHauledBack = 0x1698;
    constexpr std::ptrdiff_t m_bSilencerOn = 0x1699;
    constexpr std::ptrdiff_t m_flTimeSilencerSwitchComplete = 0x169C;
    constexpr std::ptrdiff_t m_iOriginalTeamNumber = 0x16A0;
    constexpr std::ptrdiff_t m_flNextAttackRenderTimeOffset = 0x16A4;
    constexpr std::ptrdiff_t m_bVisualsDataSet = 0x1720;
    constexpr std::ptrdiff_t m_bOldFirstPersonSpectatedState = 0x1721;
    constexpr std::ptrdiff_t m_hOurPing = 0x1724;
    constexpr std::ptrdiff_t m_nOurPingIndex = 0x1728;
    constexpr std::ptrdiff_t m_vecOurPingPos = 0x172C;
    constexpr std::ptrdiff_t m_bGlowForPing = 0x1738;
    constexpr std::ptrdiff_t m_bUIWeapon = 0x1739;
    constexpr std::ptrdiff_t m_hPrevOwner = 0x1748;
    constexpr std::ptrdiff_t m_nDropTick = 0x174C;
    constexpr std::ptrdiff_t m_donated = 0x176C;
    constexpr std::ptrdiff_t m_fLastShotTime = 0x1770;
    constexpr std::ptrdiff_t m_bWasOwnedByCT = 0x1774;
    constexpr std::ptrdiff_t m_bWasOwnedByTerrorist = 0x1775;
    constexpr std::ptrdiff_t m_gunHeat = 0x1778;
    constexpr std::ptrdiff_t m_smokeAttachments = 0x177C;
    constexpr std::ptrdiff_t m_lastSmokeTime = 0x1780;
    constexpr std::ptrdiff_t m_flLastClientFireBulletTime = 0x1784;
    constexpr std::ptrdiff_t m_IronSightController = 0x17E0;
    constexpr std::ptrdiff_t m_iIronSightMode = 0x1890;
    constexpr std::ptrdiff_t m_flLastLOSTraceFailureTime = 0x18A0;
    constexpr std::ptrdiff_t m_iNumEmptyAttacks = 0x18A4;
}

namespace C_CSWeaponBaseGun {
    constexpr std::ptrdiff_t m_zoomLevel = 0x18E0;
    constexpr std::ptrdiff_t m_iBurstShotsRemaining = 0x18E4;
    constexpr std::ptrdiff_t m_iSilencerBodygroup = 0x18E8;
    constexpr std::ptrdiff_t m_silencedModelIndex = 0x18F8;
    constexpr std::ptrdiff_t m_inPrecache = 0x18FC;
    constexpr std::ptrdiff_t m_bNeedsBoltAction = 0x18FD;
}

namespace C_Chicken {
    constexpr std::ptrdiff_t m_hHolidayHatAddon = 0x10F0;
    constexpr std::ptrdiff_t m_jumpedThisFrame = 0x10F4;
    constexpr std::ptrdiff_t m_leader = 0x10F8;
    constexpr std::ptrdiff_t m_AttributeManager = 0x1100;
    constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0x15A8;
    constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x15AC;
    constexpr std::ptrdiff_t m_bAttributesInitialized = 0x15B0;
    constexpr std::ptrdiff_t m_hWaterWakeParticles = 0x15B4;
}

namespace C_ClientRagdoll {
    constexpr std::ptrdiff_t m_bFadeOut = 0xE80;
    constexpr std::ptrdiff_t m_bImportant = 0xE81;
    constexpr std::ptrdiff_t m_flEffectTime = 0xE84;
    constexpr std::ptrdiff_t m_gibDespawnTime = 0xE88;
    constexpr std::ptrdiff_t m_iCurrentFriction = 0xE8C;
    constexpr std::ptrdiff_t m_iMinFriction = 0xE90;
    constexpr std::ptrdiff_t m_iMaxFriction = 0xE94;
    constexpr std::ptrdiff_t m_iFrictionAnimState = 0xE98;
    constexpr std::ptrdiff_t m_bReleaseRagdoll = 0xE9C;
    constexpr std::ptrdiff_t m_iEyeAttachment = 0xE9D;
    constexpr std::ptrdiff_t m_bFadingOut = 0xE9E;
    constexpr std::ptrdiff_t m_flScaleEnd = 0xEA0;
    constexpr std::ptrdiff_t m_flScaleTimeStart = 0xEC8;
    constexpr std::ptrdiff_t m_flScaleTimeEnd = 0xEF0;
}

namespace C_ColorCorrection {
    constexpr std::ptrdiff_t m_vecOrigin = 0x540;
    constexpr std::ptrdiff_t m_MinFalloff = 0x54C;
    constexpr std::ptrdiff_t m_MaxFalloff = 0x550;
    constexpr std::ptrdiff_t m_flFadeInDuration = 0x554;
    constexpr std::ptrdiff_t m_flFadeOutDuration = 0x558;
    constexpr std::ptrdiff_t m_flMaxWeight = 0x55C;
    constexpr std::ptrdiff_t m_flCurWeight = 0x560;
    constexpr std::ptrdiff_t m_netlookupFilename = 0x564;
    constexpr std::ptrdiff_t m_bEnabled = 0x764;
    constexpr std::ptrdiff_t m_bMaster = 0x765;
    constexpr std::ptrdiff_t m_bClientSide = 0x766;
    constexpr std::ptrdiff_t m_bExclusive = 0x767;
    constexpr std::ptrdiff_t m_bEnabledOnClient = 0x768;
    constexpr std::ptrdiff_t m_flCurWeightOnClient = 0x76C;
    constexpr std::ptrdiff_t m_bFadingIn = 0x770;
    constexpr std::ptrdiff_t m_flFadeStartWeight = 0x774;
    constexpr std::ptrdiff_t m_flFadeStartTime = 0x778;
    constexpr std::ptrdiff_t m_flFadeDuration = 0x77C;
}

namespace C_ColorCorrectionVolume {
    constexpr std::ptrdiff_t m_LastEnterWeight = 0xCC8;
    constexpr std::ptrdiff_t m_LastEnterTime = 0xCCC;
    constexpr std::ptrdiff_t m_LastExitWeight = 0xCD0;
    constexpr std::ptrdiff_t m_LastExitTime = 0xCD4;
    constexpr std::ptrdiff_t m_bEnabled = 0xCD8;
    constexpr std::ptrdiff_t m_MaxWeight = 0xCDC;
    constexpr std::ptrdiff_t m_FadeDuration = 0xCE0;
    constexpr std::ptrdiff_t m_Weight = 0xCE4;
    constexpr std::ptrdiff_t m_lookupFilename = 0xCE8;
}

namespace C_CommandContext {
    constexpr std::ptrdiff_t needsprocessing = 0x0;
    constexpr std::ptrdiff_t command_number = 0x78;
}

namespace C_CsmFovOverride {
    constexpr std::ptrdiff_t m_cameraName = 0x540;
    constexpr std::ptrdiff_t m_flCsmFovOverrideValue = 0x548;
}

namespace C_DecoyProjectile {
    constexpr std::ptrdiff_t m_flTimeParticleEffectSpawn = 0x1110;
}

namespace C_DynamicLight {
    constexpr std::ptrdiff_t m_Flags = 0xCC0;
    constexpr std::ptrdiff_t m_LightStyle = 0xCC1;
    constexpr std::ptrdiff_t m_Radius = 0xCC4;
    constexpr std::ptrdiff_t m_Exponent = 0xCC8;
    constexpr std::ptrdiff_t m_InnerAngle = 0xCCC;
    constexpr std::ptrdiff_t m_OuterAngle = 0xCD0;
    constexpr std::ptrdiff_t m_SpotRadius = 0xCD4;
}

namespace C_DynamicProp {
    constexpr std::ptrdiff_t m_bUseHitboxesForRenderBox = 0xFD0;
    constexpr std::ptrdiff_t m_bUseAnimGraph = 0xFD1;
    constexpr std::ptrdiff_t m_pOutputAnimBegun = 0xFD8;
    constexpr std::ptrdiff_t m_pOutputAnimOver = 0x1000;
    constexpr std::ptrdiff_t m_pOutputAnimLoopCycleOver = 0x1028;
    constexpr std::ptrdiff_t m_OnAnimReachedStart = 0x1050;
    constexpr std::ptrdiff_t m_OnAnimReachedEnd = 0x1078;
    constexpr std::ptrdiff_t m_iszDefaultAnim = 0x10A0;
    constexpr std::ptrdiff_t m_nDefaultAnimLoopMode = 0x10A8;
    constexpr std::ptrdiff_t m_bAnimateOnServer = 0x10AC;
    constexpr std::ptrdiff_t m_bRandomizeCycle = 0x10AD;
    constexpr std::ptrdiff_t m_bStartDisabled = 0x10AE;
    constexpr std::ptrdiff_t m_bScriptedMovement = 0x10AF;
    constexpr std::ptrdiff_t m_bFiredStartEndOutput = 0x10B0;
    constexpr std::ptrdiff_t m_bForceNpcExclude = 0x10B1;
    constexpr std::ptrdiff_t m_bCreateNonSolid = 0x10B2;
    constexpr std::ptrdiff_t m_bIsOverrideProp = 0x10B3;
    constexpr std::ptrdiff_t m_iInitialGlowState = 0x10B4;
    constexpr std::ptrdiff_t m_nGlowRange = 0x10B8;
    constexpr std::ptrdiff_t m_nGlowRangeMin = 0x10BC;
    constexpr std::ptrdiff_t m_glowColor = 0x10C0;
    constexpr std::ptrdiff_t m_nGlowTeam = 0x10C4;
    constexpr std::ptrdiff_t m_iCachedFrameCount = 0x10C8;
    constexpr std::ptrdiff_t m_vecCachedRenderMins = 0x10CC;
    constexpr std::ptrdiff_t m_vecCachedRenderMaxs = 0x10D8;
}

namespace C_EconEntity {
    constexpr std::ptrdiff_t m_flFlexDelayTime = 0x1028;
    constexpr std::ptrdiff_t m_flFlexDelayedWeight = 0x1030;
    constexpr std::ptrdiff_t m_bAttributesInitialized = 0x1038;
    constexpr std::ptrdiff_t m_AttributeManager = 0x1040;
    constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0x14E8;
    constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x14EC;
    constexpr std::ptrdiff_t m_nFallbackPaintKit = 0x14F0;
    constexpr std::ptrdiff_t m_nFallbackSeed = 0x14F4;
    constexpr std::ptrdiff_t m_flFallbackWear = 0x14F8;
    constexpr std::ptrdiff_t m_nFallbackStatTrak = 0x14FC;
    constexpr std::ptrdiff_t m_bClientside = 0x1500;
    constexpr std::ptrdiff_t m_bParticleSystemsCreated = 0x1501;
    constexpr std::ptrdiff_t m_vecAttachedParticles = 0x1508;
    constexpr std::ptrdiff_t m_hViewmodelAttachment = 0x1520;
    constexpr std::ptrdiff_t m_iOldTeam = 0x1524;
    constexpr std::ptrdiff_t m_bAttachmentDirty = 0x1528;
    constexpr std::ptrdiff_t m_nUnloadedModelIndex = 0x152C;
    constexpr std::ptrdiff_t m_iNumOwnerValidationRetries = 0x1530;
    constexpr std::ptrdiff_t m_hOldProvidee = 0x1540;
    constexpr std::ptrdiff_t m_vecAttachedModels = 0x1548;
}

namespace C_EconEntity_AttachedModelData_t {
    constexpr std::ptrdiff_t m_iModelDisplayFlags = 0x0;
}

namespace C_EconItemView {
    constexpr std::ptrdiff_t m_bInventoryImageRgbaRequested = 0x60;
    constexpr std::ptrdiff_t m_bInventoryImageTriedCache = 0x61;
    constexpr std::ptrdiff_t m_nInventoryImageRgbaWidth = 0x80;
    constexpr std::ptrdiff_t m_nInventoryImageRgbaHeight = 0x84;
    constexpr std::ptrdiff_t m_szCurrentLoadCachedFileName = 0x88;
    constexpr std::ptrdiff_t m_bRestoreCustomMaterialAfterPrecache = 0x1B8;
    constexpr std::ptrdiff_t m_iItemDefinitionIndex = 0x1BA;
    constexpr std::ptrdiff_t m_iEntityQuality = 0x1BC;
    constexpr std::ptrdiff_t m_iEntityLevel = 0x1C0;
    constexpr std::ptrdiff_t m_iItemID = 0x1C8;
    constexpr std::ptrdiff_t m_iItemIDHigh = 0x1D0;
    constexpr std::ptrdiff_t m_iItemIDLow = 0x1D4;
    constexpr std::ptrdiff_t m_iAccountID = 0x1D8;
    constexpr std::ptrdiff_t m_iInventoryPosition = 0x1DC;
    constexpr std::ptrdiff_t m_bInitialized = 0x1E8;
    constexpr std::ptrdiff_t m_bIsStoreItem = 0x1E9;
    constexpr std::ptrdiff_t m_bIsTradeItem = 0x1EA;
    constexpr std::ptrdiff_t m_iEntityQuantity = 0x1EC;
    constexpr std::ptrdiff_t m_iRarityOverride = 0x1F0;
    constexpr std::ptrdiff_t m_iQualityOverride = 0x1F4;
    constexpr std::ptrdiff_t m_unClientFlags = 0x1F8;
    constexpr std::ptrdiff_t m_unOverrideStyle = 0x1F9;
    constexpr std::ptrdiff_t m_AttributeList = 0x210;
    constexpr std::ptrdiff_t m_NetworkedDynamicAttributes = 0x270;
    constexpr std::ptrdiff_t m_szCustomName = 0x2D0;
    constexpr std::ptrdiff_t m_szCustomNameOverride = 0x371;
    constexpr std::ptrdiff_t m_bInitializedTags = 0x440;
}

namespace C_EconWearable {
    constexpr std::ptrdiff_t m_nForceSkin = 0x1560;
    constexpr std::ptrdiff_t m_bAlwaysAllow = 0x1564;
}

namespace C_EntityDissolve {
    constexpr std::ptrdiff_t m_flStartTime = 0xCC8;
    constexpr std::ptrdiff_t m_flFadeInStart = 0xCCC;
    constexpr std::ptrdiff_t m_flFadeInLength = 0xCD0;
    constexpr std::ptrdiff_t m_flFadeOutModelStart = 0xCD4;
    constexpr std::ptrdiff_t m_flFadeOutModelLength = 0xCD8;
    constexpr std::ptrdiff_t m_flFadeOutStart = 0xCDC;
    constexpr std::ptrdiff_t m_flFadeOutLength = 0xCE0;
    constexpr std::ptrdiff_t m_flNextSparkTime = 0xCE4;
    constexpr std::ptrdiff_t m_nDissolveType = 0xCE8;
    constexpr std::ptrdiff_t m_vDissolverOrigin = 0xCEC;
    constexpr std::ptrdiff_t m_nMagnitude = 0xCF8;
    constexpr std::ptrdiff_t m_bCoreExplode = 0xCFC;
    constexpr std::ptrdiff_t m_bLinkedToServerEnt = 0xCFD;
}

namespace C_EntityFlame {
    constexpr std::ptrdiff_t m_hEntAttached = 0x540;
    constexpr std::ptrdiff_t m_hOldAttached = 0x568;
    constexpr std::ptrdiff_t m_bCheapEffect = 0x56C;
}

namespace C_EnvCombinedLightProbeVolume {
    constexpr std::ptrdiff_t m_Color = 0x15A8;
    constexpr std::ptrdiff_t m_flBrightness = 0x15AC;
    constexpr std::ptrdiff_t m_hCubemapTexture = 0x15B0;
    constexpr std::ptrdiff_t m_bCustomCubemapTexture = 0x15B8;
    constexpr std::ptrdiff_t m_hLightProbeTexture = 0x15C0;
    constexpr std::ptrdiff_t m_hLightProbeDirectLightIndicesTexture = 0x15C8;
    constexpr std::ptrdiff_t m_hLightProbeDirectLightScalarsTexture = 0x15D0;
    constexpr std::ptrdiff_t m_hLightProbeDirectLightShadowsTexture = 0x15D8;
    constexpr std::ptrdiff_t m_vBoxMins = 0x15E0;
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x15EC;
    constexpr std::ptrdiff_t m_LightGroups = 0x15F8;
    constexpr std::ptrdiff_t m_bMoveable = 0x1600;
    constexpr std::ptrdiff_t m_nHandshake = 0x1604;
    constexpr std::ptrdiff_t m_nEnvCubeMapArrayIndex = 0x1608;
    constexpr std::ptrdiff_t m_nPriority = 0x160C;
    constexpr std::ptrdiff_t m_bStartDisabled = 0x1610;
    constexpr std::ptrdiff_t m_flEdgeFadeDist = 0x1614;
    constexpr std::ptrdiff_t m_vEdgeFadeDists = 0x1618;
    constexpr std::ptrdiff_t m_nLightProbeSizeX = 0x1624;
    constexpr std::ptrdiff_t m_nLightProbeSizeY = 0x1628;
    constexpr std::ptrdiff_t m_nLightProbeSizeZ = 0x162C;
    constexpr std::ptrdiff_t m_nLightProbeAtlasX = 0x1630;
    constexpr std::ptrdiff_t m_nLightProbeAtlasY = 0x1634;
    constexpr std::ptrdiff_t m_nLightProbeAtlasZ = 0x1638;
    constexpr std::ptrdiff_t m_bEnabled = 0x1651;
}

namespace C_EnvCubemap {
    constexpr std::ptrdiff_t m_hCubemapTexture = 0x5C8;
    constexpr std::ptrdiff_t m_bCustomCubemapTexture = 0x5D0;
    constexpr std::ptrdiff_t m_flInfluenceRadius = 0x5D4;
    constexpr std::ptrdiff_t m_vBoxProjectMins = 0x5D8;
    constexpr std::ptrdiff_t m_vBoxProjectMaxs = 0x5E4;
    constexpr std::ptrdiff_t m_LightGroups = 0x5F0;
    constexpr std::ptrdiff_t m_bMoveable = 0x5F8;
    constexpr std::ptrdiff_t m_nHandshake = 0x5FC;
    constexpr std::ptrdiff_t m_nEnvCubeMapArrayIndex = 0x600;
    constexpr std::ptrdiff_t m_nPriority = 0x604;
    constexpr std::ptrdiff_t m_flEdgeFadeDist = 0x608;
    constexpr std::ptrdiff_t m_vEdgeFadeDists = 0x60C;
    constexpr std::ptrdiff_t m_flDiffuseScale = 0x618;
    constexpr std::ptrdiff_t m_bStartDisabled = 0x61C;
    constexpr std::ptrdiff_t m_bDefaultEnvMap = 0x61D;
    constexpr std::ptrdiff_t m_bDefaultSpecEnvMap = 0x61E;
    constexpr std::ptrdiff_t m_bIndoorCubeMap = 0x61F;
    constexpr std::ptrdiff_t m_bCopyDiffuseFromDefaultCubemap = 0x620;
    constexpr std::ptrdiff_t m_bEnabled = 0x630;
}

namespace C_EnvCubemapFog {
    constexpr std::ptrdiff_t m_flEndDistance = 0x540;
    constexpr std::ptrdiff_t m_flStartDistance = 0x544;
    constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x548;
    constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x54C;
    constexpr std::ptrdiff_t m_flFogHeightWidth = 0x550;
    constexpr std::ptrdiff_t m_flFogHeightEnd = 0x554;
    constexpr std::ptrdiff_t m_flFogHeightStart = 0x558;
    constexpr std::ptrdiff_t m_flFogHeightExponent = 0x55C;
    constexpr std::ptrdiff_t m_flLODBias = 0x560;
    constexpr std::ptrdiff_t m_bActive = 0x564;
    constexpr std::ptrdiff_t m_bStartDisabled = 0x565;
    constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x568;
    constexpr std::ptrdiff_t m_nCubemapSourceType = 0x56C;
    constexpr std::ptrdiff_t m_hSkyMaterial = 0x570;
    constexpr std::ptrdiff_t m_iszSkyEntity = 0x578;
    constexpr std::ptrdiff_t m_hFogCubemapTexture = 0x580;
    constexpr std::ptrdiff_t m_bHasHeightFogEnd = 0x588;
    constexpr std::ptrdiff_t m_bFirstTime = 0x589;
}

namespace C_EnvDecal {
    constexpr std::ptrdiff_t m_hDecalMaterial = 0xCC0;
    constexpr std::ptrdiff_t m_flWidth = 0xCC8;
    constexpr std::ptrdiff_t m_flHeight = 0xCCC;
    constexpr std::ptrdiff_t m_flDepth = 0xCD0;
    constexpr std::ptrdiff_t m_nRenderOrder = 0xCD4;
    constexpr std::ptrdiff_t m_bProjectOnWorld = 0xCD8;
    constexpr std::ptrdiff_t m_bProjectOnCharacters = 0xCD9;
    constexpr std::ptrdiff_t m_bProjectOnWater = 0xCDA;
    constexpr std::ptrdiff_t m_flDepthSortBias = 0xCDC;
}

namespace C_EnvDetailController {
    constexpr std::ptrdiff_t m_flFadeStartDist = 0x540;
    constexpr std::ptrdiff_t m_flFadeEndDist = 0x544;
}

namespace C_EnvLightProbeVolume {
    constexpr std::ptrdiff_t m_hLightProbeTexture = 0x1520;
    constexpr std::ptrdiff_t m_hLightProbeDirectLightIndicesTexture = 0x1528;
    constexpr std::ptrdiff_t m_hLightProbeDirectLightScalarsTexture = 0x1530;
    constexpr std::ptrdiff_t m_hLightProbeDirectLightShadowsTexture = 0x1538;
    constexpr std::ptrdiff_t m_vBoxMins = 0x1540;
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x154C;
    constexpr std::ptrdiff_t m_LightGroups = 0x1558;
    constexpr std::ptrdiff_t m_bMoveable = 0x1560;
    constexpr std::ptrdiff_t m_nHandshake = 0x1564;
    constexpr std::ptrdiff_t m_nPriority = 0x1568;
    constexpr std::ptrdiff_t m_bStartDisabled = 0x156C;
    constexpr std::ptrdiff_t m_nLightProbeSizeX = 0x1570;
    constexpr std::ptrdiff_t m_nLightProbeSizeY = 0x1574;
    constexpr std::ptrdiff_t m_nLightProbeSizeZ = 0x1578;
    constexpr std::ptrdiff_t m_nLightProbeAtlasX = 0x157C;
    constexpr std::ptrdiff_t m_nLightProbeAtlasY = 0x1580;
    constexpr std::ptrdiff_t m_nLightProbeAtlasZ = 0x1584;
    constexpr std::ptrdiff_t m_bEnabled = 0x1591;
}

namespace C_EnvParticleGlow {
    constexpr std::ptrdiff_t m_flAlphaScale = 0x1270;
    constexpr std::ptrdiff_t m_flRadiusScale = 0x1274;
    constexpr std::ptrdiff_t m_flSelfIllumScale = 0x1278;
    constexpr std::ptrdiff_t m_ColorTint = 0x127C;
    constexpr std::ptrdiff_t m_hTextureOverride = 0x1280;
}

namespace C_EnvScreenOverlay {
    constexpr std::ptrdiff_t m_iszOverlayNames = 0x540;
    constexpr std::ptrdiff_t m_flOverlayTimes = 0x590;
    constexpr std::ptrdiff_t m_flStartTime = 0x5B8;
    constexpr std::ptrdiff_t m_iDesiredOverlay = 0x5BC;
    constexpr std::ptrdiff_t m_bIsActive = 0x5C0;
    constexpr std::ptrdiff_t m_bWasActive = 0x5C1;
    constexpr std::ptrdiff_t m_iCachedDesiredOverlay = 0x5C4;
    constexpr std::ptrdiff_t m_iCurrentOverlay = 0x5C8;
    constexpr std::ptrdiff_t m_flCurrentOverlayTime = 0x5CC;
}

namespace C_EnvSky {
    constexpr std::ptrdiff_t m_hSkyMaterial = 0xCC0;
    constexpr std::ptrdiff_t m_hSkyMaterialLightingOnly = 0xCC8;
    constexpr std::ptrdiff_t m_bStartDisabled = 0xCD0;
    constexpr std::ptrdiff_t m_vTintColor = 0xCD1;
    constexpr std::ptrdiff_t m_vTintColorLightingOnly = 0xCD5;
    constexpr std::ptrdiff_t m_flBrightnessScale = 0xCDC;
    constexpr std::ptrdiff_t m_nFogType = 0xCE0;
    constexpr std::ptrdiff_t m_flFogMinStart = 0xCE4;
    constexpr std::ptrdiff_t m_flFogMinEnd = 0xCE8;
    constexpr std::ptrdiff_t m_flFogMaxStart = 0xCEC;
    constexpr std::ptrdiff_t m_flFogMaxEnd = 0xCF0;
    constexpr std::ptrdiff_t m_bEnabled = 0xCF4;
}

namespace C_EnvVolumetricFogController {
    constexpr std::ptrdiff_t m_flScattering = 0x540;
    constexpr std::ptrdiff_t m_flAnisotropy = 0x544;
    constexpr std::ptrdiff_t m_flFadeSpeed = 0x548;
    constexpr std::ptrdiff_t m_flDrawDistance = 0x54C;
    constexpr std::ptrdiff_t m_flFadeInStart = 0x550;
    constexpr std::ptrdiff_t m_flFadeInEnd = 0x554;
    constexpr std::ptrdiff_t m_flIndirectStrength = 0x558;
    constexpr std::ptrdiff_t m_nIndirectTextureDimX = 0x55C;
    constexpr std::ptrdiff_t m_nIndirectTextureDimY = 0x560;
    constexpr std::ptrdiff_t m_nIndirectTextureDimZ = 0x564;
    constexpr std::ptrdiff_t m_vBoxMins = 0x568;
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x574;
    constexpr std::ptrdiff_t m_bActive = 0x580;
    constexpr std::ptrdiff_t m_flStartAnisoTime = 0x584;
    constexpr std::ptrdiff_t m_flStartScatterTime = 0x588;
    constexpr std::ptrdiff_t m_flStartDrawDistanceTime = 0x58C;
    constexpr std::ptrdiff_t m_flStartAnisotropy = 0x590;
    constexpr std::ptrdiff_t m_flStartScattering = 0x594;
    constexpr std::ptrdiff_t m_flStartDrawDistance = 0x598;
    constexpr std::ptrdiff_t m_flDefaultAnisotropy = 0x59C;
    constexpr std::ptrdiff_t m_flDefaultScattering = 0x5A0;
    constexpr std::ptrdiff_t m_flDefaultDrawDistance = 0x5A4;
    constexpr std::ptrdiff_t m_bStartDisabled = 0x5A8;
    constexpr std::ptrdiff_t m_bEnableIndirect = 0x5A9;
    constexpr std::ptrdiff_t m_bIsMaster = 0x5AA;
    constexpr std::ptrdiff_t m_hFogIndirectTexture = 0x5B0;
    constexpr std::ptrdiff_t m_nForceRefreshCount = 0x5B8;
    constexpr std::ptrdiff_t m_bFirstTime = 0x5BC;
}

namespace C_EnvVolumetricFogVolume {
    constexpr std::ptrdiff_t m_bActive = 0x540;
    constexpr std::ptrdiff_t m_vBoxMins = 0x544;
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x550;
    constexpr std::ptrdiff_t m_bStartDisabled = 0x55C;
    constexpr std::ptrdiff_t m_flStrength = 0x560;
    constexpr std::ptrdiff_t m_nFalloffShape = 0x564;
    constexpr std::ptrdiff_t m_flFalloffExponent = 0x568;
}

namespace C_EnvWind {
    constexpr std::ptrdiff_t m_EnvWindShared = 0x540;
}

namespace C_EnvWindClientside {
    constexpr std::ptrdiff_t m_EnvWindShared = 0x540;
}

namespace C_EnvWindShared {
    constexpr std::ptrdiff_t m_flStartTime = 0x8;
    constexpr std::ptrdiff_t m_iWindSeed = 0xC;
    constexpr std::ptrdiff_t m_iMinWind = 0x10;
    constexpr std::ptrdiff_t m_iMaxWind = 0x12;
    constexpr std::ptrdiff_t m_windRadius = 0x14;
    constexpr std::ptrdiff_t m_iMinGust = 0x18;
    constexpr std::ptrdiff_t m_iMaxGust = 0x1A;
    constexpr std::ptrdiff_t m_flMinGustDelay = 0x1C;
    constexpr std::ptrdiff_t m_flMaxGustDelay = 0x20;
    constexpr std::ptrdiff_t m_flGustDuration = 0x24;
    constexpr std::ptrdiff_t m_iGustDirChange = 0x28;
    constexpr std::ptrdiff_t m_location = 0x2C;
    constexpr std::ptrdiff_t m_iszGustSound = 0x38;
    constexpr std::ptrdiff_t m_iWindDir = 0x3C;
    constexpr std::ptrdiff_t m_flWindSpeed = 0x40;
    constexpr std::ptrdiff_t m_currentWindVector = 0x44;
    constexpr std::ptrdiff_t m_CurrentSwayVector = 0x50;
    constexpr std::ptrdiff_t m_PrevSwayVector = 0x5C;
    constexpr std::ptrdiff_t m_iInitialWindDir = 0x68;
    constexpr std::ptrdiff_t m_flInitialWindSpeed = 0x6C;
    constexpr std::ptrdiff_t m_flVariationTime = 0x70;
    constexpr std::ptrdiff_t m_flSwayTime = 0x74;
    constexpr std::ptrdiff_t m_flSimTime = 0x78;
    constexpr std::ptrdiff_t m_flSwitchTime = 0x7C;
    constexpr std::ptrdiff_t m_flAveWindSpeed = 0x80;
    constexpr std::ptrdiff_t m_bGusting = 0x84;
    constexpr std::ptrdiff_t m_flWindAngleVariation = 0x88;
    constexpr std::ptrdiff_t m_flWindSpeedVariation = 0x8C;
    constexpr std::ptrdiff_t m_iEntIndex = 0x90;
}

namespace C_EnvWindShared_WindAveEvent_t {
    constexpr std::ptrdiff_t m_flStartWindSpeed = 0x0;
    constexpr std::ptrdiff_t m_flAveWindSpeed = 0x4;
}

namespace C_EnvWindShared_WindVariationEvent_t {
    constexpr std::ptrdiff_t m_flWindAngleVariation = 0x0;
    constexpr std::ptrdiff_t m_flWindSpeedVariation = 0x4;
}

namespace C_FireSmoke {
    constexpr std::ptrdiff_t m_nFlameModelIndex = 0x550;
    constexpr std::ptrdiff_t m_nFlameFromAboveModelIndex = 0x554;
    constexpr std::ptrdiff_t m_flScaleRegister = 0x558;
    constexpr std::ptrdiff_t m_flScaleStart = 0x55C;
    constexpr std::ptrdiff_t m_flScaleEnd = 0x560;
    constexpr std::ptrdiff_t m_flScaleTimeStart = 0x564;
    constexpr std::ptrdiff_t m_flScaleTimeEnd = 0x568;
    constexpr std::ptrdiff_t m_flChildFlameSpread = 0x56C;
    constexpr std::ptrdiff_t m_flClipPerc = 0x580;
    constexpr std::ptrdiff_t m_bClipTested = 0x584;
    constexpr std::ptrdiff_t m_bFadingOut = 0x585;
    constexpr std::ptrdiff_t m_tParticleSpawn = 0x588;
    constexpr std::ptrdiff_t m_pFireOverlay = 0x590;
}

namespace C_FireSprite {
    constexpr std::ptrdiff_t m_vecMoveDir = 0xDF0;
    constexpr std::ptrdiff_t m_bFadeFromAbove = 0xDFC;
}

namespace C_Fish {
    constexpr std::ptrdiff_t m_pos = 0xE80;
    constexpr std::ptrdiff_t m_vel = 0xE8C;
    constexpr std::ptrdiff_t m_angles = 0xE98;
    constexpr std::ptrdiff_t m_localLifeState = 0xEA4;
    constexpr std::ptrdiff_t m_deathDepth = 0xEA8;
    constexpr std::ptrdiff_t m_deathAngle = 0xEAC;
    constexpr std::ptrdiff_t m_buoyancy = 0xEB0;
    constexpr std::ptrdiff_t m_wiggleTimer = 0xEB8;
    constexpr std::ptrdiff_t m_wigglePhase = 0xED0;
    constexpr std::ptrdiff_t m_wiggleRate = 0xED4;
    constexpr std::ptrdiff_t m_actualPos = 0xED8;
    constexpr std::ptrdiff_t m_actualAngles = 0xEE4;
    constexpr std::ptrdiff_t m_poolOrigin = 0xEF0;
    constexpr std::ptrdiff_t m_waterLevel = 0xEFC;
    constexpr std::ptrdiff_t m_gotUpdate = 0xF00;
    constexpr std::ptrdiff_t m_x = 0xF04;
    constexpr std::ptrdiff_t m_y = 0xF08;
    constexpr std::ptrdiff_t m_z = 0xF0C;
    constexpr std::ptrdiff_t m_angle = 0xF10;
    constexpr std::ptrdiff_t m_errorHistory = 0xF14;
    constexpr std::ptrdiff_t m_errorHistoryIndex = 0xF64;
    constexpr std::ptrdiff_t m_errorHistoryCount = 0xF68;
    constexpr std::ptrdiff_t m_averageError = 0xF6C;
}

namespace C_Fists {
    constexpr std::ptrdiff_t m_bPlayingUninterruptableAct = 0x18E0;
    constexpr std::ptrdiff_t m_nUninterruptableActivity = 0x18E4;
}

namespace C_FogController {
    constexpr std::ptrdiff_t m_fog = 0x540;
    constexpr std::ptrdiff_t m_bUseAngles = 0x5A8;
    constexpr std::ptrdiff_t m_iChangedVariables = 0x5AC;
}

namespace C_FootstepControl {
    constexpr std::ptrdiff_t m_source = 0xCC8;
    constexpr std::ptrdiff_t m_destination = 0xCD0;
}

namespace C_FuncConveyor {
    constexpr std::ptrdiff_t m_vecMoveDirEntitySpace = 0xCC8;
    constexpr std::ptrdiff_t m_flTargetSpeed = 0xCD4;
    constexpr std::ptrdiff_t m_nTransitionStartTick = 0xCD8;
    constexpr std::ptrdiff_t m_nTransitionDurationTicks = 0xCDC;
    constexpr std::ptrdiff_t m_flTransitionStartSpeed = 0xCE0;
    constexpr std::ptrdiff_t m_hConveyorModels = 0xCE8;
    constexpr std::ptrdiff_t m_flCurrentConveyorOffset = 0xD00;
    constexpr std::ptrdiff_t m_flCurrentConveyorSpeed = 0xD04;
}

namespace C_FuncElectrifiedVolume {
    constexpr std::ptrdiff_t m_nAmbientEffect = 0xCC0;
    constexpr std::ptrdiff_t m_EffectName = 0xCC8;
    constexpr std::ptrdiff_t m_bState = 0xCD0;
}

namespace C_FuncLadder {
    constexpr std::ptrdiff_t m_vecLadderDir = 0xCC0;
    constexpr std::ptrdiff_t m_Dismounts = 0xCD0;
    constexpr std::ptrdiff_t m_vecLocalTop = 0xCE8;
    constexpr std::ptrdiff_t m_vecPlayerMountPositionTop = 0xCF4;
    constexpr std::ptrdiff_t m_vecPlayerMountPositionBottom = 0xD00;
    constexpr std::ptrdiff_t m_flAutoRideSpeed = 0xD0C;
    constexpr std::ptrdiff_t m_bDisabled = 0xD10;
    constexpr std::ptrdiff_t m_bFakeLadder = 0xD11;
    constexpr std::ptrdiff_t m_bHasSlack = 0xD12;
}

namespace C_FuncMonitor {
    constexpr std::ptrdiff_t m_targetCamera = 0xCC0;
    constexpr std::ptrdiff_t m_nResolutionEnum = 0xCC8;
    constexpr std::ptrdiff_t m_bRenderShadows = 0xCCC;
    constexpr std::ptrdiff_t m_bUseUniqueColorTarget = 0xCCD;
    constexpr std::ptrdiff_t m_brushModelName = 0xCD0;
    constexpr std::ptrdiff_t m_hTargetCamera = 0xCD8;
    constexpr std::ptrdiff_t m_bEnabled = 0xCDC;
    constexpr std::ptrdiff_t m_bDraw3DSkybox = 0xCDD;
}

namespace C_FuncTrackTrain {
    constexpr std::ptrdiff_t m_nLongAxis = 0xCC0;
    constexpr std::ptrdiff_t m_flRadius = 0xCC4;
    constexpr std::ptrdiff_t m_flLineLength = 0xCC8;
}

namespace C_GlobalLight {
    constexpr std::ptrdiff_t m_WindClothForceHandle = 0xA00;
}

namespace C_GradientFog {
    constexpr std::ptrdiff_t m_hGradientFogTexture = 0x540;
    constexpr std::ptrdiff_t m_flFogStartDistance = 0x548;
    constexpr std::ptrdiff_t m_flFogEndDistance = 0x54C;
    constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x550;
    constexpr std::ptrdiff_t m_flFogStartHeight = 0x554;
    constexpr std::ptrdiff_t m_flFogEndHeight = 0x558;
    constexpr std::ptrdiff_t m_flFarZ = 0x55C;
    constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x560;
    constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x564;
    constexpr std::ptrdiff_t m_flFogVerticalExponent = 0x568;
    constexpr std::ptrdiff_t m_fogColor = 0x56C;
    constexpr std::ptrdiff_t m_flFogStrength = 0x570;
    constexpr std::ptrdiff_t m_flFadeTime = 0x574;
    constexpr std::ptrdiff_t m_bStartDisabled = 0x578;
    constexpr std::ptrdiff_t m_bIsEnabled = 0x579;
    constexpr std::ptrdiff_t m_bGradientFogNeedsTextures = 0x57A;
}

namespace C_HandleTest {
    constexpr std::ptrdiff_t m_Handle = 0x540;
    constexpr std::ptrdiff_t m_bSendHandle = 0x544;
}

namespace C_Hostage {
    constexpr std::ptrdiff_t m_entitySpottedState = 0x10A8;
    constexpr std::ptrdiff_t m_leader = 0x10C0;
    constexpr std::ptrdiff_t m_reuseTimer = 0x10C8;
    constexpr std::ptrdiff_t m_vel = 0x10E0;
    constexpr std::ptrdiff_t m_isRescued = 0x10EC;
    constexpr std::ptrdiff_t m_jumpedThisFrame = 0x10ED;
    constexpr std::ptrdiff_t m_nHostageState = 0x10F0;
    constexpr std::ptrdiff_t m_bHandsHaveBeenCut = 0x10F4;
    constexpr std::ptrdiff_t m_hHostageGrabber = 0x10F8;
    constexpr std::ptrdiff_t m_fLastGrabTime = 0x10FC;
    constexpr std::ptrdiff_t m_vecGrabbedPos = 0x1100;
    constexpr std::ptrdiff_t m_flRescueStartTime = 0x110C;
    constexpr std::ptrdiff_t m_flGrabSuccessTime = 0x1110;
    constexpr std::ptrdiff_t m_flDropStartTime = 0x1114;
    constexpr std::ptrdiff_t m_flDeadOrRescuedTime = 0x1118;
    constexpr std::ptrdiff_t m_blinkTimer = 0x1120;
    constexpr std::ptrdiff_t m_lookAt = 0x1138;
    constexpr std::ptrdiff_t m_lookAroundTimer = 0x1148;
    constexpr std::ptrdiff_t m_isInit = 0x1160;
    constexpr std::ptrdiff_t m_eyeAttachment = 0x1161;
    constexpr std::ptrdiff_t m_chestAttachment = 0x1162;
    constexpr std::ptrdiff_t m_pPredictionOwner = 0x1168;
    constexpr std::ptrdiff_t m_fNewestAlphaThinkTime = 0x1170;
}

namespace C_Inferno {
    constexpr std::ptrdiff_t m_nfxFireDamageEffect = 0xD00;
    constexpr std::ptrdiff_t m_fireXDelta = 0xD04;
    constexpr std::ptrdiff_t m_fireYDelta = 0xE04;
    constexpr std::ptrdiff_t m_fireZDelta = 0xF04;
    constexpr std::ptrdiff_t m_fireParentXDelta = 0x1004;
    constexpr std::ptrdiff_t m_fireParentYDelta = 0x1104;
    constexpr std::ptrdiff_t m_fireParentZDelta = 0x1204;
    constexpr std::ptrdiff_t m_bFireIsBurning = 0x1304;
    constexpr std::ptrdiff_t m_BurnNormal = 0x1344;
    constexpr std::ptrdiff_t m_fireCount = 0x1644;
    constexpr std::ptrdiff_t m_nInfernoType = 0x1648;
    constexpr std::ptrdiff_t m_nFireLifetime = 0x164C;
    constexpr std::ptrdiff_t m_bInPostEffectTime = 0x1650;
    constexpr std::ptrdiff_t m_lastFireCount = 0x1654;
    constexpr std::ptrdiff_t m_nFireEffectTickBegin = 0x1658;
    constexpr std::ptrdiff_t m_drawableCount = 0x8260;
    constexpr std::ptrdiff_t m_blosCheck = 0x8264;
    constexpr std::ptrdiff_t m_nlosperiod = 0x8268;
    constexpr std::ptrdiff_t m_maxFireHalfWidth = 0x826C;
    constexpr std::ptrdiff_t m_maxFireHeight = 0x8270;
    constexpr std::ptrdiff_t m_minBounds = 0x8274;
    constexpr std::ptrdiff_t m_maxBounds = 0x8280;
    constexpr std::ptrdiff_t m_flLastGrassBurnThink = 0x828C;
}

namespace C_InfoVisibilityBox {
    constexpr std::ptrdiff_t m_nMode = 0x544;
    constexpr std::ptrdiff_t m_vBoxSize = 0x548;
    constexpr std::ptrdiff_t m_bEnabled = 0x554;
}

namespace C_IronSightController {
    constexpr std::ptrdiff_t m_bIronSightAvailable = 0x10;
    constexpr std::ptrdiff_t m_flIronSightAmount = 0x14;
    constexpr std::ptrdiff_t m_flIronSightAmountGained = 0x18;
    constexpr std::ptrdiff_t m_flIronSightAmountBiased = 0x1C;
    constexpr std::ptrdiff_t m_flIronSightAmount_Interpolated = 0x20;
    constexpr std::ptrdiff_t m_flIronSightAmountGained_Interpolated = 0x24;
    constexpr std::ptrdiff_t m_flIronSightAmountBiased_Interpolated = 0x28;
    constexpr std::ptrdiff_t m_flInterpolationLastUpdated = 0x2C;
    constexpr std::ptrdiff_t m_angDeltaAverage = 0x30;
    constexpr std::ptrdiff_t m_angViewLast = 0x90;
    constexpr std::ptrdiff_t m_vecDotCoords = 0x9C;
    constexpr std::ptrdiff_t m_flDotBlur = 0xA4;
    constexpr std::ptrdiff_t m_flSpeedRatio = 0xA8;
}

namespace C_Item {
    constexpr std::ptrdiff_t m_bShouldGlow = 0x1560;
    constexpr std::ptrdiff_t m_pReticleHintTextName = 0x1561;
}

namespace C_ItemDogtags {
    constexpr std::ptrdiff_t m_OwningPlayer = 0x1668;
    constexpr std::ptrdiff_t m_KillingPlayer = 0x166C;
}

namespace C_LightEntity {
    constexpr std::ptrdiff_t m_CLightComponent = 0xCC0;
}

namespace C_LightGlow {
    constexpr std::ptrdiff_t m_nHorizontalSize = 0xCC0;
    constexpr std::ptrdiff_t m_nVerticalSize = 0xCC4;
    constexpr std::ptrdiff_t m_nMinDist = 0xCC8;
    constexpr std::ptrdiff_t m_nMaxDist = 0xCCC;
    constexpr std::ptrdiff_t m_nOuterMaxDist = 0xCD0;
    constexpr std::ptrdiff_t m_flGlowProxySize = 0xCD4;
    constexpr std::ptrdiff_t m_flHDRColorScale = 0xCD8;
    constexpr std::ptrdiff_t m_Glow = 0xCE0;
}

namespace C_LightGlowOverlay {
    constexpr std::ptrdiff_t m_vecOrigin = 0xD0;
    constexpr std::ptrdiff_t m_vecDirection = 0xDC;
    constexpr std::ptrdiff_t m_nMinDist = 0xE8;
    constexpr std::ptrdiff_t m_nMaxDist = 0xEC;
    constexpr std::ptrdiff_t m_nOuterMaxDist = 0xF0;
    constexpr std::ptrdiff_t m_bOneSided = 0xF4;
    constexpr std::ptrdiff_t m_bModulateByDot = 0xF5;
}

namespace C_LocalTempEntity {
    constexpr std::ptrdiff_t flags = 0xE98;
    constexpr std::ptrdiff_t die = 0xE9C;
    constexpr std::ptrdiff_t m_flFrameMax = 0xEA0;
    constexpr std::ptrdiff_t x = 0xEA4;
    constexpr std::ptrdiff_t y = 0xEA8;
    constexpr std::ptrdiff_t fadeSpeed = 0xEAC;
    constexpr std::ptrdiff_t bounceFactor = 0xEB0;
    constexpr std::ptrdiff_t hitSound = 0xEB4;
    constexpr std::ptrdiff_t priority = 0xEB8;
    constexpr std::ptrdiff_t tentOffset = 0xEBC;
    constexpr std::ptrdiff_t m_vecTempEntAngVelocity = 0xEC8;
    constexpr std::ptrdiff_t tempent_renderamt = 0xED4;
    constexpr std::ptrdiff_t m_vecNormal = 0xED8;
    constexpr std::ptrdiff_t m_flSpriteScale = 0xEE4;
    constexpr std::ptrdiff_t m_nFlickerFrame = 0xEE8;
    constexpr std::ptrdiff_t m_flFrameRate = 0xEEC;
    constexpr std::ptrdiff_t m_flFrame = 0xEF0;
    constexpr std::ptrdiff_t m_pszImpactEffect = 0xEF8;
    constexpr std::ptrdiff_t m_pszParticleEffect = 0xF00;
    constexpr std::ptrdiff_t m_bParticleCollision = 0xF08;
    constexpr std::ptrdiff_t m_iLastCollisionFrame = 0xF0C;
    constexpr std::ptrdiff_t m_vLastCollisionOrigin = 0xF10;
    constexpr std::ptrdiff_t m_vecTempEntVelocity = 0xF1C;
    constexpr std::ptrdiff_t m_vecPrevAbsOrigin = 0xF28;
    constexpr std::ptrdiff_t m_vecTempEntAcceleration = 0xF34;
}

namespace C_MapVetoPickController {
    constexpr std::ptrdiff_t m_nDraftType = 0x550;
    constexpr std::ptrdiff_t m_nTeamWinningCoinToss = 0x554;
    constexpr std::ptrdiff_t m_nTeamWithFirstChoice = 0x558;
    constexpr std::ptrdiff_t m_nVoteMapIdsList = 0x658;
    constexpr std::ptrdiff_t m_nAccountIDs = 0x674;
    constexpr std::ptrdiff_t m_nMapId0 = 0x774;
    constexpr std::ptrdiff_t m_nMapId1 = 0x874;
    constexpr std::ptrdiff_t m_nMapId2 = 0x974;
    constexpr std::ptrdiff_t m_nMapId3 = 0xA74;
    constexpr std::ptrdiff_t m_nMapId4 = 0xB74;
    constexpr std::ptrdiff_t m_nMapId5 = 0xC74;
    constexpr std::ptrdiff_t m_nStartingSide0 = 0xD74;
    constexpr std::ptrdiff_t m_nCurrentPhase = 0xE74;
    constexpr std::ptrdiff_t m_nPhaseStartTick = 0xE78;
    constexpr std::ptrdiff_t m_nPhaseDurationTicks = 0xE7C;
    constexpr std::ptrdiff_t m_nPostDataUpdateTick = 0xE80;
    constexpr std::ptrdiff_t m_bDisabledHud = 0xE84;
}

namespace C_Melee {
    constexpr std::ptrdiff_t m_flThrowAt = 0x18E0;
}

namespace C_MolotovProjectile {
    constexpr std::ptrdiff_t m_bIsIncGrenade = 0x10F0;
}

namespace C_Multimeter {
    constexpr std::ptrdiff_t m_hTargetC4 = 0xE88;
}

namespace C_OmniLight {
    constexpr std::ptrdiff_t m_flInnerAngle = 0xF08;
    constexpr std::ptrdiff_t m_flOuterAngle = 0xF0C;
    constexpr std::ptrdiff_t m_bShowLight = 0xF10;
}

namespace C_ParticleSystem {
    constexpr std::ptrdiff_t m_szSnapshotFileName = 0xCC0;
    constexpr std::ptrdiff_t m_bActive = 0xEC0;
    constexpr std::ptrdiff_t m_bFrozen = 0xEC1;
    constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0xEC4;
    constexpr std::ptrdiff_t m_nStopType = 0xEC8;
    constexpr std::ptrdiff_t m_bAnimateDuringGameplayPause = 0xECC;
    constexpr std::ptrdiff_t m_iEffectIndex = 0xED0;
    constexpr std::ptrdiff_t m_flStartTime = 0xED8;
    constexpr std::ptrdiff_t m_flPreSimTime = 0xEDC;
    constexpr std::ptrdiff_t m_vServerControlPoints = 0xEE0;
    constexpr std::ptrdiff_t m_iServerControlPointAssignments = 0xF10;
    constexpr std::ptrdiff_t m_hControlPointEnts = 0xF14;
    constexpr std::ptrdiff_t m_bNoSave = 0x1014;
    constexpr std::ptrdiff_t m_bNoFreeze = 0x1015;
    constexpr std::ptrdiff_t m_bNoRamp = 0x1016;
    constexpr std::ptrdiff_t m_bStartActive = 0x1017;
    constexpr std::ptrdiff_t m_iszEffectName = 0x1018;
    constexpr std::ptrdiff_t m_iszControlPointNames = 0x1020;
    constexpr std::ptrdiff_t m_nDataCP = 0x1220;
    constexpr std::ptrdiff_t m_vecDataCPValue = 0x1224;
    constexpr std::ptrdiff_t m_nTintCP = 0x1230;
    constexpr std::ptrdiff_t m_clrTint = 0x1234;
    constexpr std::ptrdiff_t m_bOldActive = 0x1258;
    constexpr std::ptrdiff_t m_bOldFrozen = 0x1259;
}

namespace C_PathParticleRope {
    constexpr std::ptrdiff_t m_bStartActive = 0x540;
    constexpr std::ptrdiff_t m_flMaxSimulationTime = 0x544;
    constexpr std::ptrdiff_t m_iszEffectName = 0x548;
    constexpr std::ptrdiff_t m_PathNodes_Name = 0x550;
    constexpr std::ptrdiff_t m_flParticleSpacing = 0x568;
    constexpr std::ptrdiff_t m_flSlack = 0x56C;
    constexpr std::ptrdiff_t m_flRadius = 0x570;
    constexpr std::ptrdiff_t m_ColorTint = 0x574;
    constexpr std::ptrdiff_t m_nEffectState = 0x578;
    constexpr std::ptrdiff_t m_iEffectIndex = 0x580;
    constexpr std::ptrdiff_t m_PathNodes_Position = 0x588;
    constexpr std::ptrdiff_t m_PathNodes_TangentIn = 0x5A0;
    constexpr std::ptrdiff_t m_PathNodes_TangentOut = 0x5B8;
    constexpr std::ptrdiff_t m_PathNodes_Color = 0x5D0;
    constexpr std::ptrdiff_t m_PathNodes_PinEnabled = 0x5E8;
    constexpr std::ptrdiff_t m_PathNodes_RadiusScale = 0x600;
}

namespace C_PhysMagnet {
    constexpr std::ptrdiff_t m_aAttachedObjectsFromServer = 0xE80;
    constexpr std::ptrdiff_t m_aAttachedObjects = 0xE98;
}

namespace C_PhysPropClientside {
    constexpr std::ptrdiff_t m_flTouchDelta = 0xFD0;
    constexpr std::ptrdiff_t m_fDeathTime = 0xFD4;
    constexpr std::ptrdiff_t m_impactEnergyScale = 0xFD8;
    constexpr std::ptrdiff_t m_inertiaScale = 0xFDC;
    constexpr std::ptrdiff_t m_flDmgModBullet = 0xFE0;
    constexpr std::ptrdiff_t m_flDmgModClub = 0xFE4;
    constexpr std::ptrdiff_t m_flDmgModExplosive = 0xFE8;
    constexpr std::ptrdiff_t m_flDmgModFire = 0xFEC;
    constexpr std::ptrdiff_t m_iszPhysicsDamageTableName = 0xFF0;
    constexpr std::ptrdiff_t m_iszBasePropData = 0xFF8;
    constexpr std::ptrdiff_t m_iInteractions = 0x1000;
    constexpr std::ptrdiff_t m_bHasBreakPiecesOrCommands = 0x1004;
    constexpr std::ptrdiff_t m_vecDamagePosition = 0x1008;
    constexpr std::ptrdiff_t m_vecDamageDirection = 0x1014;
    constexpr std::ptrdiff_t m_nDamageType = 0x1020;
}

namespace C_PhysicsProp {
    constexpr std::ptrdiff_t m_bAwake = 0xFD0;
}

namespace C_PickUpModelSlerper {
    constexpr std::ptrdiff_t m_hPlayerParent = 0xE80;
    constexpr std::ptrdiff_t m_hItem = 0xE84;
    constexpr std::ptrdiff_t m_flTimePickedUp = 0xE88;
    constexpr std::ptrdiff_t m_angOriginal = 0xE8C;
    constexpr std::ptrdiff_t m_vecPosOriginal = 0xE98;
    constexpr std::ptrdiff_t m_angRandom = 0xEA8;
}

namespace C_PlantedC4 {
    constexpr std::ptrdiff_t m_bBombTicking = 0xE80;
    constexpr std::ptrdiff_t m_nBombSite = 0xE84;
    constexpr std::ptrdiff_t m_nSourceSoundscapeHash = 0xE88;
    constexpr std::ptrdiff_t m_entitySpottedState = 0xE90;
    constexpr std::ptrdiff_t m_flNextGlow = 0xEA8;
    constexpr std::ptrdiff_t m_flNextBeep = 0xEAC;
    constexpr std::ptrdiff_t m_flC4Blow = 0xEB0;
    constexpr std::ptrdiff_t m_bCannotBeDefused = 0xEB4;
    constexpr std::ptrdiff_t m_bHasExploded = 0xEB5;
    constexpr std::ptrdiff_t m_flTimerLength = 0xEB8;
    constexpr std::ptrdiff_t m_bBeingDefused = 0xEBC;
    constexpr std::ptrdiff_t m_bTenSecWarning = 0xEC0;
    constexpr std::ptrdiff_t m_bTriggerWarning = 0xEC4;
    constexpr std::ptrdiff_t m_bExplodeWarning = 0xEC8;
    constexpr std::ptrdiff_t m_bC4Activated = 0xECC;
    constexpr std::ptrdiff_t m_flDefuseLength = 0xED0;
    constexpr std::ptrdiff_t m_flDefuseCountDown = 0xED4;
    constexpr std::ptrdiff_t m_bBombDefused = 0xED8;
    constexpr std::ptrdiff_t m_hBombDefuser = 0xEDC;
    constexpr std::ptrdiff_t m_hControlPanel = 0xEE0;
    constexpr std::ptrdiff_t m_hDefuserMultimeter = 0xEE4;
    constexpr std::ptrdiff_t m_flNextRadarFlashTime = 0xEE8;
    constexpr std::ptrdiff_t m_bRadarFlash = 0xEEC;
    constexpr std::ptrdiff_t m_pBombDefuser = 0xEF0;
    constexpr std::ptrdiff_t m_fLastDefuseTime = 0xEF4;
    constexpr std::ptrdiff_t m_pPredictionOwner = 0xEF8;
}

namespace C_PlayerPing {
    constexpr std::ptrdiff_t m_hPlayer = 0x570;
    constexpr std::ptrdiff_t m_hPingedEntity = 0x574;
    constexpr std::ptrdiff_t m_iType = 0x578;
    constexpr std::ptrdiff_t m_bUrgent = 0x57C;
    constexpr std::ptrdiff_t m_szPlaceName = 0x57D;
}

namespace C_PlayerSprayDecal {
    constexpr std::ptrdiff_t m_nUniqueID = 0xCC0;
    constexpr std::ptrdiff_t m_unAccountID = 0xCC4;
    constexpr std::ptrdiff_t m_unTraceID = 0xCC8;
    constexpr std::ptrdiff_t m_rtGcTime = 0xCCC;
    constexpr std::ptrdiff_t m_vecEndPos = 0xCD0;
    constexpr std::ptrdiff_t m_vecStart = 0xCDC;
    constexpr std::ptrdiff_t m_vecLeft = 0xCE8;
    constexpr std::ptrdiff_t m_vecNormal = 0xCF4;
    constexpr std::ptrdiff_t m_nPlayer = 0xD00;
    constexpr std::ptrdiff_t m_nEntity = 0xD04;
    constexpr std::ptrdiff_t m_nHitbox = 0xD08;
    constexpr std::ptrdiff_t m_flCreationTime = 0xD0C;
    constexpr std::ptrdiff_t m_nTintID = 0xD10;
    constexpr std::ptrdiff_t m_nVersion = 0xD14;
    constexpr std::ptrdiff_t m_ubSignature = 0xD15;
    constexpr std::ptrdiff_t m_SprayRenderHelper = 0xDA0;
}

namespace C_PlayerVisibility {
    constexpr std::ptrdiff_t m_flVisibilityStrength = 0x540;
    constexpr std::ptrdiff_t m_flFogDistanceMultiplier = 0x544;
    constexpr std::ptrdiff_t m_flFogMaxDensityMultiplier = 0x548;
    constexpr std::ptrdiff_t m_flFadeTime = 0x54C;
    constexpr std::ptrdiff_t m_bStartDisabled = 0x550;
    constexpr std::ptrdiff_t m_bIsEnabled = 0x551;
}

namespace C_PointCamera {
    constexpr std::ptrdiff_t m_FOV = 0x540;
    constexpr std::ptrdiff_t m_Resolution = 0x544;
    constexpr std::ptrdiff_t m_bFogEnable = 0x548;
    constexpr std::ptrdiff_t m_FogColor = 0x549;
    constexpr std::ptrdiff_t m_flFogStart = 0x550;
    constexpr std::ptrdiff_t m_flFogEnd = 0x554;
    constexpr std::ptrdiff_t m_flFogMaxDensity = 0x558;
    constexpr std::ptrdiff_t m_bActive = 0x55C;
    constexpr std::ptrdiff_t m_bUseScreenAspectRatio = 0x55D;
    constexpr std::ptrdiff_t m_flAspectRatio = 0x560;
    constexpr std::ptrdiff_t m_bNoSky = 0x564;
    constexpr std::ptrdiff_t m_fBrightness = 0x568;
    constexpr std::ptrdiff_t m_flZFar = 0x56C;
    constexpr std::ptrdiff_t m_flZNear = 0x570;
    constexpr std::ptrdiff_t m_bCanHLTVUse = 0x574;
    constexpr std::ptrdiff_t m_bDofEnabled = 0x575;
    constexpr std::ptrdiff_t m_flDofNearBlurry = 0x578;
    constexpr std::ptrdiff_t m_flDofNearCrisp = 0x57C;
    constexpr std::ptrdiff_t m_flDofFarCrisp = 0x580;
    constexpr std::ptrdiff_t m_flDofFarBlurry = 0x584;
    constexpr std::ptrdiff_t m_flDofTiltToGround = 0x588;
    constexpr std::ptrdiff_t m_TargetFOV = 0x58C;
    constexpr std::ptrdiff_t m_DegreesPerSecond = 0x590;
    constexpr std::ptrdiff_t m_bIsOn = 0x594;
    constexpr std::ptrdiff_t m_pNext = 0x598;
}

namespace C_PointCameraVFOV {
    constexpr std::ptrdiff_t m_flVerticalFOV = 0x5A0;
}

namespace C_PointClientUIDialog {
    constexpr std::ptrdiff_t m_hActivator = 0xCF0;
    constexpr std::ptrdiff_t m_bStartEnabled = 0xCF4;
}

namespace C_PointClientUIHUD {
    constexpr std::ptrdiff_t m_bCheckCSSClasses = 0xCF8;
    constexpr std::ptrdiff_t m_bIgnoreInput = 0xE80;
    constexpr std::ptrdiff_t m_flWidth = 0xE84;
    constexpr std::ptrdiff_t m_flHeight = 0xE88;
    constexpr std::ptrdiff_t m_flDPI = 0xE8C;
    constexpr std::ptrdiff_t m_flInteractDistance = 0xE90;
    constexpr std::ptrdiff_t m_flDepthOffset = 0xE94;
    constexpr std::ptrdiff_t m_unOwnerContext = 0xE98;
    constexpr std::ptrdiff_t m_unHorizontalAlign = 0xE9C;
    constexpr std::ptrdiff_t m_unVerticalAlign = 0xEA0;
    constexpr std::ptrdiff_t m_unOrientation = 0xEA4;
    constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0xEA8;
    constexpr std::ptrdiff_t m_vecCSSClasses = 0xEB0;
}

namespace C_PointClientUIWorldPanel {
    constexpr std::ptrdiff_t m_bForceRecreateNextUpdate = 0xCF8;
    constexpr std::ptrdiff_t m_bMoveViewToPlayerNextThink = 0xCF9;
    constexpr std::ptrdiff_t m_bCheckCSSClasses = 0xCFA;
    constexpr std::ptrdiff_t m_anchorDeltaTransform = 0xD00;
    constexpr std::ptrdiff_t m_pOffScreenIndicator = 0xEA0;
    constexpr std::ptrdiff_t m_bIgnoreInput = 0xEC8;
    constexpr std::ptrdiff_t m_bLit = 0xEC9;
    constexpr std::ptrdiff_t m_bFollowPlayerAcrossTeleport = 0xECA;
    constexpr std::ptrdiff_t m_flWidth = 0xECC;
    constexpr std::ptrdiff_t m_flHeight = 0xED0;
    constexpr std::ptrdiff_t m_flDPI = 0xED4;
    constexpr std::ptrdiff_t m_flInteractDistance = 0xED8;
    constexpr std::ptrdiff_t m_flDepthOffset = 0xEDC;
    constexpr std::ptrdiff_t m_unOwnerContext = 0xEE0;
    constexpr std::ptrdiff_t m_unHorizontalAlign = 0xEE4;
    constexpr std::ptrdiff_t m_unVerticalAlign = 0xEE8;
    constexpr std::ptrdiff_t m_unOrientation = 0xEEC;
    constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0xEF0;
    constexpr std::ptrdiff_t m_vecCSSClasses = 0xEF8;
    constexpr std::ptrdiff_t m_bOpaque = 0xF10;
    constexpr std::ptrdiff_t m_bNoDepth = 0xF11;
    constexpr std::ptrdiff_t m_bRenderBackface = 0xF12;
    constexpr std::ptrdiff_t m_bUseOffScreenIndicator = 0xF13;
    constexpr std::ptrdiff_t m_bExcludeFromSaveGames = 0xF14;
    constexpr std::ptrdiff_t m_bGrabbable = 0xF15;
    constexpr std::ptrdiff_t m_bOnlyRenderToTexture = 0xF16;
    constexpr std::ptrdiff_t m_bDisableMipGen = 0xF17;
    constexpr std::ptrdiff_t m_nExplicitImageLayout = 0xF18;
}

namespace C_PointClientUIWorldTextPanel {
    constexpr std::ptrdiff_t m_messageText = 0xF20;
}

namespace C_PointCommentaryNode {
    constexpr std::ptrdiff_t m_bActive = 0xE88;
    constexpr std::ptrdiff_t m_bWasActive = 0xE89;
    constexpr std::ptrdiff_t m_flEndTime = 0xE8C;
    constexpr std::ptrdiff_t m_flStartTime = 0xE90;
    constexpr std::ptrdiff_t m_flStartTimeInCommentary = 0xE94;
    constexpr std::ptrdiff_t m_iszCommentaryFile = 0xE98;
    constexpr std::ptrdiff_t m_iszTitle = 0xEA0;
    constexpr std::ptrdiff_t m_iszSpeakers = 0xEA8;
    constexpr std::ptrdiff_t m_iNodeNumber = 0xEB0;
    constexpr std::ptrdiff_t m_iNodeNumberMax = 0xEB4;
    constexpr std::ptrdiff_t m_bListenedTo = 0xEB8;
    constexpr std::ptrdiff_t m_hViewPosition = 0xEC8;
    constexpr std::ptrdiff_t m_bRestartAfterRestore = 0xECC;
}

namespace C_PointValueRemapper {
    constexpr std::ptrdiff_t m_bDisabled = 0x540;
    constexpr std::ptrdiff_t m_bDisabledOld = 0x541;
    constexpr std::ptrdiff_t m_bUpdateOnClient = 0x542;
    constexpr std::ptrdiff_t m_nInputType = 0x544;
    constexpr std::ptrdiff_t m_hRemapLineStart = 0x548;
    constexpr std::ptrdiff_t m_hRemapLineEnd = 0x54C;
    constexpr std::ptrdiff_t m_flMaximumChangePerSecond = 0x550;
    constexpr std::ptrdiff_t m_flDisengageDistance = 0x554;
    constexpr std::ptrdiff_t m_flEngageDistance = 0x558;
    constexpr std::ptrdiff_t m_bRequiresUseKey = 0x55C;
    constexpr std::ptrdiff_t m_nOutputType = 0x560;
    constexpr std::ptrdiff_t m_hOutputEntities = 0x568;
    constexpr std::ptrdiff_t m_nHapticsType = 0x580;
    constexpr std::ptrdiff_t m_nMomentumType = 0x584;
    constexpr std::ptrdiff_t m_flMomentumModifier = 0x588;
    constexpr std::ptrdiff_t m_flSnapValue = 0x58C;
    constexpr std::ptrdiff_t m_flCurrentMomentum = 0x590;
    constexpr std::ptrdiff_t m_nRatchetType = 0x594;
    constexpr std::ptrdiff_t m_flRatchetOffset = 0x598;
    constexpr std::ptrdiff_t m_flInputOffset = 0x59C;
    constexpr std::ptrdiff_t m_bEngaged = 0x5A0;
    constexpr std::ptrdiff_t m_bFirstUpdate = 0x5A1;
    constexpr std::ptrdiff_t m_flPreviousValue = 0x5A4;
    constexpr std::ptrdiff_t m_flPreviousUpdateTickTime = 0x5A8;
    constexpr std::ptrdiff_t m_vecPreviousTestPoint = 0x5AC;
}

namespace C_PointWorldText {
    constexpr std::ptrdiff_t m_bForceRecreateNextUpdate = 0xCC8;
    constexpr std::ptrdiff_t m_messageText = 0xCD8;
    constexpr std::ptrdiff_t m_FontName = 0xED8;
    constexpr std::ptrdiff_t m_bEnabled = 0xF18;
    constexpr std::ptrdiff_t m_bFullbright = 0xF19;
    constexpr std::ptrdiff_t m_flWorldUnitsPerPx = 0xF1C;
    constexpr std::ptrdiff_t m_flFontSize = 0xF20;
    constexpr std::ptrdiff_t m_flDepthOffset = 0xF24;
    constexpr std::ptrdiff_t m_Color = 0xF28;
    constexpr std::ptrdiff_t m_nJustifyHorizontal = 0xF2C;
    constexpr std::ptrdiff_t m_nJustifyVertical = 0xF30;
    constexpr std::ptrdiff_t m_nReorientMode = 0xF34;
}

namespace C_PostProcessingVolume {
    constexpr std::ptrdiff_t m_hPostSettings = 0xCD8;
    constexpr std::ptrdiff_t m_flFadeDuration = 0xCE0;
    constexpr std::ptrdiff_t m_flMinLogExposure = 0xCE4;
    constexpr std::ptrdiff_t m_flMaxLogExposure = 0xCE8;
    constexpr std::ptrdiff_t m_flMinExposure = 0xCEC;
    constexpr std::ptrdiff_t m_flMaxExposure = 0xCF0;
    constexpr std::ptrdiff_t m_flExposureCompensation = 0xCF4;
    constexpr std::ptrdiff_t m_flExposureFadeSpeedUp = 0xCF8;
    constexpr std::ptrdiff_t m_flExposureFadeSpeedDown = 0xCFC;
    constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0xD00;
    constexpr std::ptrdiff_t m_bMaster = 0xD04;
    constexpr std::ptrdiff_t m_bExposureControl = 0xD05;
    constexpr std::ptrdiff_t m_flRate = 0xD08;
    constexpr std::ptrdiff_t m_flTonemapPercentTarget = 0xD0C;
    constexpr std::ptrdiff_t m_flTonemapPercentBrightPixels = 0xD10;
    constexpr std::ptrdiff_t m_flTonemapMinAvgLum = 0xD14;
}

namespace C_Precipitation {
    constexpr std::ptrdiff_t m_flDensity = 0xCC8;
    constexpr std::ptrdiff_t m_flParticleInnerDist = 0xCD8;
    constexpr std::ptrdiff_t m_pParticleDef = 0xCE0;
    constexpr std::ptrdiff_t m_tParticlePrecipTraceTimer = 0xD08;
    constexpr std::ptrdiff_t m_bActiveParticlePrecipEmitter = 0xD10;
    constexpr std::ptrdiff_t m_bParticlePrecipInitialized = 0xD11;
    constexpr std::ptrdiff_t m_bHasSimulatedSinceLastSceneObjectUpdate = 0xD12;
    constexpr std::ptrdiff_t m_nAvailableSheetSequencesMaxIndex = 0xD14;
}

namespace C_PredictedViewModel {
    constexpr std::ptrdiff_t m_LagAnglesHistory = 0xEE8;
    constexpr std::ptrdiff_t m_vPredictedOffset = 0xF00;
}

namespace C_RagdollManager {
    constexpr std::ptrdiff_t m_iCurrentMaxRagdollCount = 0x540;
}

namespace C_RagdollProp {
    constexpr std::ptrdiff_t m_ragPos = 0xE88;
    constexpr std::ptrdiff_t m_ragAngles = 0xEA0;
    constexpr std::ptrdiff_t m_flBlendWeight = 0xEB8;
    constexpr std::ptrdiff_t m_hRagdollSource = 0xEBC;
    constexpr std::ptrdiff_t m_iEyeAttachment = 0xEC0;
    constexpr std::ptrdiff_t m_flBlendWeightCurrent = 0xEC4;
    constexpr std::ptrdiff_t m_parentPhysicsBoneIndices = 0xEC8;
    constexpr std::ptrdiff_t m_worldSpaceBoneComputationOrder = 0xEE0;
}

namespace C_RagdollPropAttached {
    constexpr std::ptrdiff_t m_boneIndexAttached = 0xEF8;
    constexpr std::ptrdiff_t m_ragdollAttachedObjectIndex = 0xEFC;
    constexpr std::ptrdiff_t m_attachmentPointBoneSpace = 0xF00;
    constexpr std::ptrdiff_t m_attachmentPointRagdollSpace = 0xF0C;
    constexpr std::ptrdiff_t m_vecOffset = 0xF18;
    constexpr std::ptrdiff_t m_parentTime = 0xF24;
    constexpr std::ptrdiff_t m_bHasParent = 0xF28;
}

namespace C_RectLight {
    constexpr std::ptrdiff_t m_bShowLight = 0xF08;
}

namespace C_RetakeGameRules {
    constexpr std::ptrdiff_t m_nMatchSeed = 0xF8;
    constexpr std::ptrdiff_t m_bBlockersPresent = 0xFC;
    constexpr std::ptrdiff_t m_bRoundInProgress = 0xFD;
    constexpr std::ptrdiff_t m_iFirstSecondHalfRound = 0x100;
    constexpr std::ptrdiff_t m_iBombSite = 0x104;
}

namespace C_RopeKeyframe {
    constexpr std::ptrdiff_t m_LinksTouchingSomething = 0xCC8;
    constexpr std::ptrdiff_t m_nLinksTouchingSomething = 0xCCC;
    constexpr std::ptrdiff_t m_bApplyWind = 0xCD0;
    constexpr std::ptrdiff_t m_fPrevLockedPoints = 0xCD4;
    constexpr std::ptrdiff_t m_iForcePointMoveCounter = 0xCD8;
    constexpr std::ptrdiff_t m_bPrevEndPointPos = 0xCDC;
    constexpr std::ptrdiff_t m_vPrevEndPointPos = 0xCE0;
    constexpr std::ptrdiff_t m_flCurScroll = 0xCF8;
    constexpr std::ptrdiff_t m_flScrollSpeed = 0xCFC;
    constexpr std::ptrdiff_t m_RopeFlags = 0xD00;
    constexpr std::ptrdiff_t m_iRopeMaterialModelIndex = 0xD08;
    constexpr std::ptrdiff_t m_LightValues = 0xF80;
    constexpr std::ptrdiff_t m_nSegments = 0xFF8;
    constexpr std::ptrdiff_t m_hStartPoint = 0xFFC;
    constexpr std::ptrdiff_t m_hEndPoint = 0x1000;
    constexpr std::ptrdiff_t m_iStartAttachment = 0x1004;
    constexpr std::ptrdiff_t m_iEndAttachment = 0x1005;
    constexpr std::ptrdiff_t m_Subdiv = 0x1006;
    constexpr std::ptrdiff_t m_RopeLength = 0x1008;
    constexpr std::ptrdiff_t m_Slack = 0x100A;
    constexpr std::ptrdiff_t m_TextureScale = 0x100C;
    constexpr std::ptrdiff_t m_fLockedPoints = 0x1010;
    constexpr std::ptrdiff_t m_nChangeCount = 0x1011;
    constexpr std::ptrdiff_t m_Width = 0x1014;
    constexpr std::ptrdiff_t m_PhysicsDelegate = 0x1018;
    constexpr std::ptrdiff_t m_hMaterial = 0x1028;
    constexpr std::ptrdiff_t m_TextureHeight = 0x1030;
    constexpr std::ptrdiff_t m_vecImpulse = 0x1034;
    constexpr std::ptrdiff_t m_vecPreviousImpulse = 0x1040;
    constexpr std::ptrdiff_t m_flCurrentGustTimer = 0x104C;
    constexpr std::ptrdiff_t m_flCurrentGustLifetime = 0x1050;
    constexpr std::ptrdiff_t m_flTimeToNextGust = 0x1054;
    constexpr std::ptrdiff_t m_vWindDir = 0x1058;
    constexpr std::ptrdiff_t m_vColorMod = 0x1064;
    constexpr std::ptrdiff_t m_vCachedEndPointAttachmentPos = 0x1070;
    constexpr std::ptrdiff_t m_vCachedEndPointAttachmentAngle = 0x1088;
    constexpr std::ptrdiff_t m_bConstrainBetweenEndpoints = 0x10A0;
    constexpr std::ptrdiff_t m_bEndPointAttachmentPositionsDirty = 0x0;
    constexpr std::ptrdiff_t m_bEndPointAttachmentAnglesDirty = 0x0;
    constexpr std::ptrdiff_t m_bNewDataThisFrame = 0x0;
    constexpr std::ptrdiff_t m_bPhysicsInitted = 0x0;
}

namespace C_RopeKeyframe_CPhysicsDelegate {
    constexpr std::ptrdiff_t m_pKeyframe = 0x8;
}

namespace C_SceneEntity {
    constexpr std::ptrdiff_t m_bIsPlayingBack = 0x548;
    constexpr std::ptrdiff_t m_bPaused = 0x549;
    constexpr std::ptrdiff_t m_bMultiplayer = 0x54A;
    constexpr std::ptrdiff_t m_bAutogenerated = 0x54B;
    constexpr std::ptrdiff_t m_flForceClientTime = 0x54C;
    constexpr std::ptrdiff_t m_nSceneStringIndex = 0x550;
    constexpr std::ptrdiff_t m_bClientOnly = 0x552;
    constexpr std::ptrdiff_t m_hOwner = 0x554;
    constexpr std::ptrdiff_t m_hActorList = 0x558;
    constexpr std::ptrdiff_t m_bWasPlaying = 0x570;
    constexpr std::ptrdiff_t m_QueuedEvents = 0x580;
    constexpr std::ptrdiff_t m_flCurrentTime = 0x598;
}

namespace C_SceneEntity_QueuedEvents_t {
    constexpr std::ptrdiff_t starttime = 0x0;
}

namespace C_ShatterGlassShardPhysics {
    constexpr std::ptrdiff_t m_ShardDesc = 0xFE0;
}

namespace C_SkyCamera {
    constexpr std::ptrdiff_t m_skyboxData = 0x540;
    constexpr std::ptrdiff_t m_skyboxSlotToken = 0x5D0;
    constexpr std::ptrdiff_t m_bUseAngles = 0x5D4;
    constexpr std::ptrdiff_t m_pNext = 0x5D8;
}

namespace C_SmokeGrenadeProjectile {
    constexpr std::ptrdiff_t m_nSmokeEffectTickBegin = 0x10F8;
    constexpr std::ptrdiff_t m_bDidSmokeEffect = 0x10FC;
    constexpr std::ptrdiff_t m_nRandomSeed = 0x1100;
    constexpr std::ptrdiff_t m_vSmokeColor = 0x1104;
    constexpr std::ptrdiff_t m_vSmokeDetonationPos = 0x1110;
    constexpr std::ptrdiff_t m_VoxelFrameData = 0x1120;
    constexpr std::ptrdiff_t m_bSmokeVolumeDataReceived = 0x1138;
    constexpr std::ptrdiff_t m_bSmokeEffectSpawned = 0x1139;
}

namespace C_SoundAreaEntityBase {
    constexpr std::ptrdiff_t m_bDisabled = 0x540;
    constexpr std::ptrdiff_t m_bWasEnabled = 0x548;
    constexpr std::ptrdiff_t m_iszSoundAreaType = 0x550;
    constexpr std::ptrdiff_t m_vPos = 0x558;
}

namespace C_SoundAreaEntityOrientedBox {
    constexpr std::ptrdiff_t m_vMin = 0x568;
    constexpr std::ptrdiff_t m_vMax = 0x574;
}

namespace C_SoundAreaEntitySphere {
    constexpr std::ptrdiff_t m_flRadius = 0x568;
}

namespace C_SoundOpvarSetPointBase {
    constexpr std::ptrdiff_t m_iszStackName = 0x540;
    constexpr std::ptrdiff_t m_iszOperatorName = 0x548;
    constexpr std::ptrdiff_t m_iszOpvarName = 0x550;
    constexpr std::ptrdiff_t m_iOpvarIndex = 0x558;
    constexpr std::ptrdiff_t m_bUseAutoCompare = 0x55C;
}

namespace C_SpotlightEnd {
    constexpr std::ptrdiff_t m_flLightScale = 0xCC0;
    constexpr std::ptrdiff_t m_Radius = 0xCC4;
}

namespace C_Sprite {
    constexpr std::ptrdiff_t m_hSpriteMaterial = 0xCD8;
    constexpr std::ptrdiff_t m_hAttachedToEntity = 0xCE0;
    constexpr std::ptrdiff_t m_nAttachment = 0xCE4;
    constexpr std::ptrdiff_t m_flSpriteFramerate = 0xCE8;
    constexpr std::ptrdiff_t m_flFrame = 0xCEC;
    constexpr std::ptrdiff_t m_flDieTime = 0xCF0;
    constexpr std::ptrdiff_t m_nBrightness = 0xD00;
    constexpr std::ptrdiff_t m_flBrightnessDuration = 0xD04;
    constexpr std::ptrdiff_t m_flSpriteScale = 0xD08;
    constexpr std::ptrdiff_t m_flScaleDuration = 0xD0C;
    constexpr std::ptrdiff_t m_bWorldSpaceScale = 0xD10;
    constexpr std::ptrdiff_t m_flGlowProxySize = 0xD14;
    constexpr std::ptrdiff_t m_flHDRColorScale = 0xD18;
    constexpr std::ptrdiff_t m_flLastTime = 0xD1C;
    constexpr std::ptrdiff_t m_flMaxFrame = 0xD20;
    constexpr std::ptrdiff_t m_flStartScale = 0xD24;
    constexpr std::ptrdiff_t m_flDestScale = 0xD28;
    constexpr std::ptrdiff_t m_flScaleTimeStart = 0xD2C;
    constexpr std::ptrdiff_t m_nStartBrightness = 0xD30;
    constexpr std::ptrdiff_t m_nDestBrightness = 0xD34;
    constexpr std::ptrdiff_t m_flBrightnessTimeStart = 0xD38;
    constexpr std::ptrdiff_t m_hOldSpriteMaterial = 0xD40;
    constexpr std::ptrdiff_t m_nSpriteWidth = 0xDE8;
    constexpr std::ptrdiff_t m_nSpriteHeight = 0xDEC;
}

namespace C_Sun {
    constexpr std::ptrdiff_t m_fxSSSunFlareEffectIndex = 0xCC0;
    constexpr std::ptrdiff_t m_fxSunFlareEffectIndex = 0xCC4;
    constexpr std::ptrdiff_t m_fdistNormalize = 0xCC8;
    constexpr std::ptrdiff_t m_vSunPos = 0xCCC;
    constexpr std::ptrdiff_t m_vDirection = 0xCD8;
    constexpr std::ptrdiff_t m_iszEffectName = 0xCE8;
    constexpr std::ptrdiff_t m_iszSSEffectName = 0xCF0;
    constexpr std::ptrdiff_t m_clrOverlay = 0xCF8;
    constexpr std::ptrdiff_t m_bOn = 0xCFC;
    constexpr std::ptrdiff_t m_bmaxColor = 0xCFD;
    constexpr std::ptrdiff_t m_flSize = 0xD00;
    constexpr std::ptrdiff_t m_flHazeScale = 0xD04;
    constexpr std::ptrdiff_t m_flRotation = 0xD08;
    constexpr std::ptrdiff_t m_flHDRColorScale = 0xD0C;
    constexpr std::ptrdiff_t m_flAlphaHaze = 0xD10;
    constexpr std::ptrdiff_t m_flAlphaScale = 0xD14;
    constexpr std::ptrdiff_t m_flAlphaHdr = 0xD18;
    constexpr std::ptrdiff_t m_flFarZScale = 0xD1C;
}

namespace C_SunGlowOverlay {
    constexpr std::ptrdiff_t m_bModulateByDot = 0xD0;
}

namespace C_Team {
    constexpr std::ptrdiff_t m_aPlayerControllers = 0x540;
    constexpr std::ptrdiff_t m_aPlayers = 0x558;
    constexpr std::ptrdiff_t m_iScore = 0x570;
    constexpr std::ptrdiff_t m_szTeamname = 0x574;
}

namespace C_TeamRoundTimer {
    constexpr std::ptrdiff_t m_bTimerPaused = 0x540;
    constexpr std::ptrdiff_t m_flTimeRemaining = 0x544;
    constexpr std::ptrdiff_t m_flTimerEndTime = 0x548;
    constexpr std::ptrdiff_t m_bIsDisabled = 0x54C;
    constexpr std::ptrdiff_t m_bShowInHUD = 0x54D;
    constexpr std::ptrdiff_t m_nTimerLength = 0x550;
    constexpr std::ptrdiff_t m_nTimerInitialLength = 0x554;
    constexpr std::ptrdiff_t m_nTimerMaxLength = 0x558;
    constexpr std::ptrdiff_t m_bAutoCountdown = 0x55C;
    constexpr std::ptrdiff_t m_nSetupTimeLength = 0x560;
    constexpr std::ptrdiff_t m_nState = 0x564;
    constexpr std::ptrdiff_t m_bStartPaused = 0x568;
    constexpr std::ptrdiff_t m_bInCaptureWatchState = 0x569;
    constexpr std::ptrdiff_t m_flTotalTime = 0x56C;
    constexpr std::ptrdiff_t m_bStopWatchTimer = 0x570;
    constexpr std::ptrdiff_t m_bFireFinished = 0x571;
    constexpr std::ptrdiff_t m_bFire5MinRemain = 0x572;
    constexpr std::ptrdiff_t m_bFire4MinRemain = 0x573;
    constexpr std::ptrdiff_t m_bFire3MinRemain = 0x574;
    constexpr std::ptrdiff_t m_bFire2MinRemain = 0x575;
    constexpr std::ptrdiff_t m_bFire1MinRemain = 0x576;
    constexpr std::ptrdiff_t m_bFire30SecRemain = 0x577;
    constexpr std::ptrdiff_t m_bFire10SecRemain = 0x578;
    constexpr std::ptrdiff_t m_bFire5SecRemain = 0x579;
    constexpr std::ptrdiff_t m_bFire4SecRemain = 0x57A;
    constexpr std::ptrdiff_t m_bFire3SecRemain = 0x57B;
    constexpr std::ptrdiff_t m_bFire2SecRemain = 0x57C;
    constexpr std::ptrdiff_t m_bFire1SecRemain = 0x57D;
    constexpr std::ptrdiff_t m_nOldTimerLength = 0x580;
    constexpr std::ptrdiff_t m_nOldTimerState = 0x584;
}

namespace C_TextureBasedAnimatable {
    constexpr std::ptrdiff_t m_bLoop = 0xCC0;
    constexpr std::ptrdiff_t m_flFPS = 0xCC4;
    constexpr std::ptrdiff_t m_hPositionKeys = 0xCC8;
    constexpr std::ptrdiff_t m_hRotationKeys = 0xCD0;
    constexpr std::ptrdiff_t m_vAnimationBoundsMin = 0xCD8;
    constexpr std::ptrdiff_t m_vAnimationBoundsMax = 0xCE4;
    constexpr std::ptrdiff_t m_flStartTime = 0xCF0;
    constexpr std::ptrdiff_t m_flStartFrame = 0xCF4;
}

namespace C_TonemapController2 {
    constexpr std::ptrdiff_t m_flAutoExposureMin = 0x540;
    constexpr std::ptrdiff_t m_flAutoExposureMax = 0x544;
    constexpr std::ptrdiff_t m_flTonemapPercentTarget = 0x548;
    constexpr std::ptrdiff_t m_flTonemapPercentBrightPixels = 0x54C;
    constexpr std::ptrdiff_t m_flTonemapMinAvgLum = 0x550;
    constexpr std::ptrdiff_t m_flExposureAdaptationSpeedUp = 0x554;
    constexpr std::ptrdiff_t m_flExposureAdaptationSpeedDown = 0x558;
    constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x55C;
}

namespace C_TriggerBuoyancy {
    constexpr std::ptrdiff_t m_BuoyancyHelper = 0xCC8;
    constexpr std::ptrdiff_t m_flFluidDensity = 0xCE8;
}

namespace C_ViewmodelWeapon {
    constexpr std::ptrdiff_t m_worldModel = 0xE80;
}

namespace C_VoteController {
    constexpr std::ptrdiff_t m_iActiveIssueIndex = 0x550;
    constexpr std::ptrdiff_t m_iOnlyTeamToVote = 0x554;
    constexpr std::ptrdiff_t m_nVoteOptionCount = 0x558;
    constexpr std::ptrdiff_t m_nPotentialVotes = 0x56C;
    constexpr std::ptrdiff_t m_bVotesDirty = 0x570;
    constexpr std::ptrdiff_t m_bTypeDirty = 0x571;
    constexpr std::ptrdiff_t m_bIsYesNoVote = 0x572;
}

namespace C_WeaponBaseItem {
    constexpr std::ptrdiff_t m_SequenceCompleteTimer = 0x18E0;
    constexpr std::ptrdiff_t m_bRedraw = 0x18F8;
}

namespace C_WeaponShield {
    constexpr std::ptrdiff_t m_flDisplayHealth = 0x1900;
}

namespace C_WeaponTaser {
    constexpr std::ptrdiff_t m_fFireTime = 0x1900;
}

namespace C_fogplayerparams_t {
    constexpr std::ptrdiff_t m_hCtrl = 0x8;
    constexpr std::ptrdiff_t m_flTransitionTime = 0xC;
    constexpr std::ptrdiff_t m_OldColor = 0x10;
    constexpr std::ptrdiff_t m_flOldStart = 0x14;
    constexpr std::ptrdiff_t m_flOldEnd = 0x18;
    constexpr std::ptrdiff_t m_flOldMaxDensity = 0x1C;
    constexpr std::ptrdiff_t m_flOldHDRColorScale = 0x20;
    constexpr std::ptrdiff_t m_flOldFarZ = 0x24;
    constexpr std::ptrdiff_t m_NewColor = 0x28;
    constexpr std::ptrdiff_t m_flNewStart = 0x2C;
    constexpr std::ptrdiff_t m_flNewEnd = 0x30;
    constexpr std::ptrdiff_t m_flNewMaxDensity = 0x34;
    constexpr std::ptrdiff_t m_flNewHDRColorScale = 0x38;
    constexpr std::ptrdiff_t m_flNewFarZ = 0x3C;
}

namespace CompMatMutatorCondition_t {
    constexpr std::ptrdiff_t m_nMutatorCondition = 0x0;
    constexpr std::ptrdiff_t m_strMutatorConditionContainerName = 0x8;
    constexpr std::ptrdiff_t m_strMutatorConditionContainerVarName = 0x10;
    constexpr std::ptrdiff_t m_strMutatorConditionContainerVarValue = 0x18;
    constexpr std::ptrdiff_t m_bPassWhenTrue = 0x20;
}

namespace CompMatPropertyMutator_t {
    constexpr std::ptrdiff_t m_bEnabled = 0x0;
    constexpr std::ptrdiff_t m_nMutatorCommandType = 0x4;
    constexpr std::ptrdiff_t m_strInitWith_Container = 0x8;
    constexpr std::ptrdiff_t m_strCopyProperty_InputContainerSrc = 0x10;
    constexpr std::ptrdiff_t m_strCopyProperty_InputContainerProperty = 0x18;
    constexpr std::ptrdiff_t m_strCopyProperty_TargetProperty = 0x20;
    constexpr std::ptrdiff_t m_strRandomRollInputVars_SeedInputVar = 0x28;
    constexpr std::ptrdiff_t m_vecRandomRollInputVars_InputVarsToRoll = 0x30;
    constexpr std::ptrdiff_t m_strCopyMatchingKeys_InputContainerSrc = 0x48;
    constexpr std::ptrdiff_t m_strCopyKeysWithSuffix_InputContainerSrc = 0x50;
    constexpr std::ptrdiff_t m_strCopyKeysWithSuffix_FindSuffix = 0x58;
    constexpr std::ptrdiff_t m_strCopyKeysWithSuffix_ReplaceSuffix = 0x60;
    constexpr std::ptrdiff_t m_nSetValue_Value = 0x68;
    constexpr std::ptrdiff_t m_strGenerateTexture_TargetParam = 0x2D8;
    constexpr std::ptrdiff_t m_strGenerateTexture_InitialContainer = 0x2E0;
    constexpr std::ptrdiff_t m_nResolution = 0x2E8;
    constexpr std::ptrdiff_t m_bIsScratchTarget = 0x2EC;
    constexpr std::ptrdiff_t m_bSplatDebugInfo = 0x2ED;
    constexpr std::ptrdiff_t m_bCaptureInRenderDoc = 0x2EE;
    constexpr std::ptrdiff_t m_vecTexGenInstructions = 0x2F0;
    constexpr std::ptrdiff_t m_vecConditionalMutators = 0x308;
    constexpr std::ptrdiff_t m_strPopInputQueue_Container = 0x320;
    constexpr std::ptrdiff_t m_strDrawText_InputContainerSrc = 0x328;
    constexpr std::ptrdiff_t m_strDrawText_InputContainerProperty = 0x330;
    constexpr std::ptrdiff_t m_vecDrawText_Position = 0x338;
    constexpr std::ptrdiff_t m_colDrawText_Color = 0x340;
    constexpr std::ptrdiff_t m_strDrawText_Font = 0x348;
    constexpr std::ptrdiff_t m_vecConditions = 0x350;
}

namespace CompositeMaterialAssemblyProcedure_t {
    constexpr std::ptrdiff_t m_vecCompMatIncludes = 0x0;
    constexpr std::ptrdiff_t m_vecMatchFilters = 0x18;
    constexpr std::ptrdiff_t m_vecCompositeInputContainers = 0x30;
    constexpr std::ptrdiff_t m_vecPropertyMutators = 0x48;
}

namespace CompositeMaterialEditorPoint_t {
    constexpr std::ptrdiff_t m_ModelName = 0x0;
    constexpr std::ptrdiff_t m_nSequenceIndex = 0xE0;
    constexpr std::ptrdiff_t m_flCycle = 0xE4;
    constexpr std::ptrdiff_t m_KVModelStateChoices = 0xE8;
    constexpr std::ptrdiff_t m_bEnableChildModel = 0xF8;
    constexpr std::ptrdiff_t m_ChildModelName = 0x100;
    constexpr std::ptrdiff_t m_vecCompositeMaterialAssemblyProcedures = 0x1E0;
    constexpr std::ptrdiff_t m_vecCompositeMaterials = 0x1F8;
}

namespace CompositeMaterialInputContainer_t {
    constexpr std::ptrdiff_t m_bEnabled = 0x0;
    constexpr std::ptrdiff_t m_nCompositeMaterialInputContainerSourceType = 0x4;
    constexpr std::ptrdiff_t m_strSpecificContainerMaterial = 0x8;
    constexpr std::ptrdiff_t m_strAttrName = 0xE8;
    constexpr std::ptrdiff_t m_strAlias = 0xF0;
    constexpr std::ptrdiff_t m_vecLooseVariables = 0xF8;
    constexpr std::ptrdiff_t m_strAttrNameForVar = 0x110;
    constexpr std::ptrdiff_t m_bExposeExternally = 0x118;
}

namespace CompositeMaterialInputLooseVariable_t {
    constexpr std::ptrdiff_t m_strName = 0x0;
    constexpr std::ptrdiff_t m_bExposeExternally = 0x8;
    constexpr std::ptrdiff_t m_strExposedFriendlyName = 0x10;
    constexpr std::ptrdiff_t m_strExposedFriendlyGroupName = 0x18;
    constexpr std::ptrdiff_t m_bExposedVariableIsFixedRange = 0x20;
    constexpr std::ptrdiff_t m_strExposedVisibleWhenTrue = 0x28;
    constexpr std::ptrdiff_t m_strExposedHiddenWhenTrue = 0x30;
    constexpr std::ptrdiff_t m_nVariableType = 0x38;
    constexpr std::ptrdiff_t m_bValueBoolean = 0x3C;
    constexpr std::ptrdiff_t m_nValueIntX = 0x40;
    constexpr std::ptrdiff_t m_nValueIntY = 0x44;
    constexpr std::ptrdiff_t m_nValueIntZ = 0x48;
    constexpr std::ptrdiff_t m_nValueIntW = 0x4C;
    constexpr std::ptrdiff_t m_bHasFloatBounds = 0x50;
    constexpr std::ptrdiff_t m_flValueFloatX = 0x54;
    constexpr std::ptrdiff_t m_flValueFloatX_Min = 0x58;
    constexpr std::ptrdiff_t m_flValueFloatX_Max = 0x5C;
    constexpr std::ptrdiff_t m_flValueFloatY = 0x60;
    constexpr std::ptrdiff_t m_flValueFloatY_Min = 0x64;
    constexpr std::ptrdiff_t m_flValueFloatY_Max = 0x68;
    constexpr std::ptrdiff_t m_flValueFloatZ = 0x6C;
    constexpr std::ptrdiff_t m_flValueFloatZ_Min = 0x70;
    constexpr std::ptrdiff_t m_flValueFloatZ_Max = 0x74;
    constexpr std::ptrdiff_t m_flValueFloatW = 0x78;
    constexpr std::ptrdiff_t m_flValueFloatW_Min = 0x7C;
    constexpr std::ptrdiff_t m_flValueFloatW_Max = 0x80;
    constexpr std::ptrdiff_t m_cValueColor4 = 0x84;
    constexpr std::ptrdiff_t m_nValueSystemVar = 0x88;
    constexpr std::ptrdiff_t m_strResourceMaterial = 0x90;
    constexpr std::ptrdiff_t m_strTextureContentAssetPath = 0x170;
    constexpr std::ptrdiff_t m_strTextureRuntimeResourcePath = 0x178;
    constexpr std::ptrdiff_t m_strTextureCompilationVtexTemplate = 0x258;
    constexpr std::ptrdiff_t m_nTextureType = 0x260;
    constexpr std::ptrdiff_t m_strString = 0x268;
}

namespace CompositeMaterialMatchFilter_t {
    constexpr std::ptrdiff_t m_nCompositeMaterialMatchFilterType = 0x0;
    constexpr std::ptrdiff_t m_strMatchFilter = 0x8;
    constexpr std::ptrdiff_t m_strMatchValue = 0x10;
    constexpr std::ptrdiff_t m_bPassWhenTrue = 0x18;
}

namespace CompositeMaterial_t {
    constexpr std::ptrdiff_t m_TargetKVs = 0x8;
    constexpr std::ptrdiff_t m_PreGenerationKVs = 0x18;
    constexpr std::ptrdiff_t m_FinalKVs = 0x28;
    constexpr std::ptrdiff_t m_vecGeneratedTextures = 0x40;
}

namespace CountdownTimer {
    constexpr std::ptrdiff_t m_duration = 0x8;
    constexpr std::ptrdiff_t m_timestamp = 0xC;
    constexpr std::ptrdiff_t m_timescale = 0x10;
    constexpr std::ptrdiff_t m_nWorldGroupId = 0x14;
}

namespace EngineCountdownTimer {
    constexpr std::ptrdiff_t m_duration = 0x8;
    constexpr std::ptrdiff_t m_timestamp = 0xC;
    constexpr std::ptrdiff_t m_timescale = 0x10;
}

namespace EntityRenderAttribute_t {
    constexpr std::ptrdiff_t m_ID = 0x30;
    constexpr std::ptrdiff_t m_Values = 0x34;
}

namespace EntitySpottedState_t {
    constexpr std::ptrdiff_t m_bSpotted = 0x8;
    constexpr std::ptrdiff_t m_bSpottedByMask = 0xC;
}

namespace GeneratedTextureHandle_t {
    constexpr std::ptrdiff_t m_strBitmapName = 0x0;
}

namespace IntervalTimer {
    constexpr std::ptrdiff_t m_timestamp = 0x8;
    constexpr std::ptrdiff_t m_nWorldGroupId = 0xC;
}

namespace PhysicsRagdollPose_t {
    constexpr std::ptrdiff_t __m_pChainEntity = 0x8;
    constexpr std::ptrdiff_t m_Transforms = 0x30;
    constexpr std::ptrdiff_t m_hOwner = 0x48;
    constexpr std::ptrdiff_t m_bDirty = 0x68;
}

namespace SellbackPurchaseEntry_t {
    constexpr std::ptrdiff_t m_unDefIdx = 0x30;
    constexpr std::ptrdiff_t m_nCost = 0x34;
    constexpr std::ptrdiff_t m_nPrevArmor = 0x38;
    constexpr std::ptrdiff_t m_bPrevHelmet = 0x3C;
    constexpr std::ptrdiff_t m_hItem = 0x40;
}

namespace TimedEvent {
    constexpr std::ptrdiff_t m_TimeBetweenEvents = 0x0;
    constexpr std::ptrdiff_t m_fNextEvent = 0x4;
}

namespace VPhysicsCollisionAttribute_t {
    constexpr std::ptrdiff_t m_nInteractsAs = 0x8;
    constexpr std::ptrdiff_t m_nInteractsWith = 0x10;
    constexpr std::ptrdiff_t m_nInteractsExclude = 0x18;
    constexpr std::ptrdiff_t m_nEntityId = 0x20;
    constexpr std::ptrdiff_t m_nOwnerId = 0x24;
    constexpr std::ptrdiff_t m_nHierarchyId = 0x28;
    constexpr std::ptrdiff_t m_nCollisionGroup = 0x2A;
    constexpr std::ptrdiff_t m_nCollisionFunctionMask = 0x2B;
}

namespace ViewAngleServerChange_t {
    constexpr std::ptrdiff_t nType = 0x30;
    constexpr std::ptrdiff_t qAngle = 0x34;
    constexpr std::ptrdiff_t nIndex = 0x40;
}

namespace WeaponPurchaseCount_t {
    constexpr std::ptrdiff_t m_nItemDefIndex = 0x30;
    constexpr std::ptrdiff_t m_nCount = 0x32;
}

namespace WeaponPurchaseTracker_t {
    constexpr std::ptrdiff_t m_weaponPurchases = 0x8;
}

namespace audioparams_t {
    constexpr std::ptrdiff_t localSound = 0x8;
    constexpr std::ptrdiff_t soundscapeIndex = 0x68;
    constexpr std::ptrdiff_t localBits = 0x6C;
    constexpr std::ptrdiff_t soundscapeEntityListIndex = 0x70;
    constexpr std::ptrdiff_t soundEventHash = 0x74;
}

namespace fogparams_t {
    constexpr std::ptrdiff_t dirPrimary = 0x8;
    constexpr std::ptrdiff_t colorPrimary = 0x14;
    constexpr std::ptrdiff_t colorSecondary = 0x18;
    constexpr std::ptrdiff_t colorPrimaryLerpTo = 0x1C;
    constexpr std::ptrdiff_t colorSecondaryLerpTo = 0x20;
    constexpr std::ptrdiff_t start = 0x24;
    constexpr std::ptrdiff_t end = 0x28;
    constexpr std::ptrdiff_t farz = 0x2C;
    constexpr std::ptrdiff_t maxdensity = 0x30;
    constexpr std::ptrdiff_t exponent = 0x34;
    constexpr std::ptrdiff_t HDRColorScale = 0x38;
    constexpr std::ptrdiff_t skyboxFogFactor = 0x3C;
    constexpr std::ptrdiff_t skyboxFogFactorLerpTo = 0x40;
    constexpr std::ptrdiff_t startLerpTo = 0x44;
    constexpr std::ptrdiff_t endLerpTo = 0x48;
    constexpr std::ptrdiff_t maxdensityLerpTo = 0x4C;
    constexpr std::ptrdiff_t lerptime = 0x50;
    constexpr std::ptrdiff_t duration = 0x54;
    constexpr std::ptrdiff_t blendtobackground = 0x58;
    constexpr std::ptrdiff_t scattering = 0x5C;
    constexpr std::ptrdiff_t locallightscale = 0x60;
    constexpr std::ptrdiff_t enable = 0x64;
    constexpr std::ptrdiff_t blend = 0x65;
    constexpr std::ptrdiff_t m_bNoReflectionFog = 0x66;
    constexpr std::ptrdiff_t m_bPadding = 0x67;
}

namespace shard_model_desc_t {
    constexpr std::ptrdiff_t m_nModelID = 0x8;
    constexpr std::ptrdiff_t m_hMaterial = 0x10;
    constexpr std::ptrdiff_t m_solid = 0x18;
    constexpr std::ptrdiff_t m_ShatterPanelMode = 0x19;
    constexpr std::ptrdiff_t m_vecPanelSize = 0x1C;
    constexpr std::ptrdiff_t m_vecStressPositionA = 0x24;
    constexpr std::ptrdiff_t m_vecStressPositionB = 0x2C;
    constexpr std::ptrdiff_t m_vecPanelVertices = 0x38;
    constexpr std::ptrdiff_t m_flGlassHalfThickness = 0x50;
    constexpr std::ptrdiff_t m_bHasParent = 0x54;
    constexpr std::ptrdiff_t m_bParentFrozen = 0x55;
    constexpr std::ptrdiff_t m_SurfacePropStringToken = 0x58;
    constexpr std::ptrdiff_t m_LightGroup = 0x5C;
}

namespace sky3dparams_t {
    constexpr std::ptrdiff_t scale = 0x8;
    constexpr std::ptrdiff_t origin = 0xC;
    constexpr std::ptrdiff_t bClip3DSkyBoxNearToWorldFar = 0x18;
    constexpr std::ptrdiff_t flClip3DSkyBoxNearToWorldFarOffset = 0x1C;
    constexpr std::ptrdiff_t fog = 0x20;
    constexpr std::ptrdiff_t m_nWorldGroupID = 0x88;
}