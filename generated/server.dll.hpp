#pragma once

#include <cstddef>

namespace ActiveModelConfig_t {
    constexpr std::ptrdiff_t m_Handle = 0x28;
    constexpr std::ptrdiff_t m_Name = 0x30;
    constexpr std::ptrdiff_t m_AssociatedEntities = 0x38;
    constexpr std::ptrdiff_t m_AssociatedEntityNames = 0x50;
}

namespace AmmoIndex_t {
    constexpr std::ptrdiff_t m_Value = 0x0;
}

namespace AmmoTypeInfo_t {
    constexpr std::ptrdiff_t m_nMaxCarry = 0x10;
    constexpr std::ptrdiff_t m_nSplashSize = 0x1c;
    constexpr std::ptrdiff_t m_nFlags = 0x24;
    constexpr std::ptrdiff_t m_flMass = 0x28;
    constexpr std::ptrdiff_t m_flSpeed = 0x2c;
}

namespace AnimationUpdateListHandle_t {
    constexpr std::ptrdiff_t m_Value = 0x0;
}

namespace CAISound {
    constexpr std::ptrdiff_t m_iSoundType = 0x4b0;
    constexpr std::ptrdiff_t m_iSoundContext = 0x4b4;
    constexpr std::ptrdiff_t m_iVolume = 0x4b8;
    constexpr std::ptrdiff_t m_iSoundIndex = 0x4bc;
    constexpr std::ptrdiff_t m_flDuration = 0x4c0;
    constexpr std::ptrdiff_t m_iszProxyEntityName = 0x4c8;
}

namespace CAI_ChangeHintGroup {
    constexpr std::ptrdiff_t m_iSearchType = 0x4b0;
    constexpr std::ptrdiff_t m_strSearchName = 0x4b8;
    constexpr std::ptrdiff_t m_strNewHintGroup = 0x4c0;
    constexpr std::ptrdiff_t m_flRadius = 0x4c8;
}

namespace CAI_ChangeTarget {
    constexpr std::ptrdiff_t m_iszNewTarget = 0x4b0;
}

namespace CAI_Expresser {
    constexpr std::ptrdiff_t m_flStopTalkTime = 0x38;
    constexpr std::ptrdiff_t m_flStopTalkTimeWithoutDelay = 0x3c;
    constexpr std::ptrdiff_t m_flBlockedTalkTime = 0x40;
    constexpr std::ptrdiff_t m_voicePitch = 0x44;
    constexpr std::ptrdiff_t m_flLastTimeAcceptedSpeak = 0x48;
    constexpr std::ptrdiff_t m_bAllowSpeakingInterrupts = 0x4c;
    constexpr std::ptrdiff_t m_bConsiderSceneInvolvementAsSpeech = 0x4d;
    constexpr std::ptrdiff_t m_nLastSpokenPriority = 0x50;
    constexpr std::ptrdiff_t m_pOuter = 0x58;
}

namespace CAI_ExpresserWithFollowup {
    constexpr std::ptrdiff_t m_pPostponedFollowup = 0x60;
}

namespace CAmbientGeneric {
    constexpr std::ptrdiff_t m_radius = 0x4b0;
    constexpr std::ptrdiff_t m_flMaxRadius = 0x4b4;
    constexpr std::ptrdiff_t m_iSoundLevel = 0x4b8;
    constexpr std::ptrdiff_t m_dpv = 0x4bc;
    constexpr std::ptrdiff_t m_fActive = 0x520;
    constexpr std::ptrdiff_t m_fLooping = 0x521;
    constexpr std::ptrdiff_t m_iszSound = 0x528;
    constexpr std::ptrdiff_t m_sSourceEntName = 0x530;
    constexpr std::ptrdiff_t m_hSoundSource = 0x538;
    constexpr std::ptrdiff_t m_nSoundSourceEntIndex = 0x53c;
}

namespace CAnimGraphNetworkedVariables {
    constexpr std::ptrdiff_t m_PredNetBoolVariables = 0x8;
    constexpr std::ptrdiff_t m_PredNetByteVariables = 0x20;
    constexpr std::ptrdiff_t m_PredNetUInt16Variables = 0x38;
    constexpr std::ptrdiff_t m_PredNetIntVariables = 0x50;
    constexpr std::ptrdiff_t m_PredNetUInt32Variables = 0x68;
    constexpr std::ptrdiff_t m_PredNetUInt64Variables = 0x80;
    constexpr std::ptrdiff_t m_PredNetFloatVariables = 0x98;
    constexpr std::ptrdiff_t m_PredNetVectorVariables = 0xb0;
    constexpr std::ptrdiff_t m_PredNetQuaternionVariables = 0xc8;
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetBoolVariables = 0xe0;
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetByteVariables = 0xf8;
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt16Variables = 0x110;
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetIntVariables = 0x128;
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt32Variables = 0x140;
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt64Variables = 0x158;
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetFloatVariables = 0x170;
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetVectorVariables = 0x188;
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetQuaternionVariables = 0x1a0;
    constexpr std::ptrdiff_t m_nBoolVariablesCount = 0x1b8;
    constexpr std::ptrdiff_t m_nOwnerOnlyBoolVariablesCount = 0x1bc;
    constexpr std::ptrdiff_t m_nRandomSeedOffset = 0x1c0;
    constexpr std::ptrdiff_t m_flLastTeleportTime = 0x1c4;
}

namespace CAnimGraphTagRef {
    constexpr std::ptrdiff_t m_nTagIndex = 0x0;
    constexpr std::ptrdiff_t m_tagName = 0x10;
}

namespace CAttributeContainer {
    constexpr std::ptrdiff_t m_Item = 0x50;
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
    constexpr std::ptrdiff_t m_ProviderType = 0x2c;
    constexpr std::ptrdiff_t m_CachedResults = 0x30;
}

namespace CAttributeManager_cached_attribute_float_t {
    constexpr std::ptrdiff_t flIn = 0x0;
    constexpr std::ptrdiff_t iAttribHook = 0x8;
    constexpr std::ptrdiff_t flOut = 0x10;
}

namespace CBRC4Target {
    constexpr std::ptrdiff_t m_hPlayerThatActivatedMe = 0x958;
    constexpr std::ptrdiff_t m_bBrokenOpen = 0x95c;
    constexpr std::ptrdiff_t m_flRadius = 0x960;
}

namespace CBarnLight {
    constexpr std::ptrdiff_t m_bEnabled = 0x700;
    constexpr std::ptrdiff_t m_nColorMode = 0x704;
    constexpr std::ptrdiff_t m_Color = 0x708;
    constexpr std::ptrdiff_t m_flColorTemperature = 0x70c;
    constexpr std::ptrdiff_t m_flBrightness = 0x710;
    constexpr std::ptrdiff_t m_flBrightnessScale = 0x714;
    constexpr std::ptrdiff_t m_nDirectLight = 0x718;
    constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x71c;
    constexpr std::ptrdiff_t m_nLuminaireShape = 0x720;
    constexpr std::ptrdiff_t m_flLuminaireSize = 0x724;
    constexpr std::ptrdiff_t m_flLuminaireAnisotropy = 0x728;
    constexpr std::ptrdiff_t m_LightStyleString = 0x730;
    constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x738;
    constexpr std::ptrdiff_t m_QueuedLightStyleStrings = 0x740;
    constexpr std::ptrdiff_t m_LightStyleEvents = 0x758;
    constexpr std::ptrdiff_t m_LightStyleTargets = 0x770;
    constexpr std::ptrdiff_t m_StyleEvent = 0x788;
    constexpr std::ptrdiff_t m_StyleRadianceVar = 0x828;
    constexpr std::ptrdiff_t m_StyleVar = 0x830;
    constexpr std::ptrdiff_t m_hLightCookie = 0x858;
    constexpr std::ptrdiff_t m_flShape = 0x860;
    constexpr std::ptrdiff_t m_flSoftX = 0x864;
    constexpr std::ptrdiff_t m_flSoftY = 0x868;
    constexpr std::ptrdiff_t m_flSkirt = 0x86c;
    constexpr std::ptrdiff_t m_flSkirtNear = 0x870;
    constexpr std::ptrdiff_t m_vSizeParams = 0x874;
    constexpr std::ptrdiff_t m_flRange = 0x880;
    constexpr std::ptrdiff_t m_vShear = 0x884;
    constexpr std::ptrdiff_t m_nBakeSpecularToCubemaps = 0x890;
    constexpr std::ptrdiff_t m_vBakeSpecularToCubemapsSize = 0x894;
    constexpr std::ptrdiff_t m_nCastShadows = 0x8a0;
    constexpr std::ptrdiff_t m_nShadowMapSize = 0x8a4;
    constexpr std::ptrdiff_t m_nShadowPriority = 0x8a8;
    constexpr std::ptrdiff_t m_bContactShadow = 0x8ac;
    constexpr std::ptrdiff_t m_nBounceLight = 0x8b0;
    constexpr std::ptrdiff_t m_flBounceScale = 0x8b4;
    constexpr std::ptrdiff_t m_flMinRoughness = 0x8b8;
    constexpr std::ptrdiff_t m_vAlternateColor = 0x8bc;
    constexpr std::ptrdiff_t m_fAlternateColorBrightness = 0x8c8;
    constexpr std::ptrdiff_t m_nFog = 0x8cc;
    constexpr std::ptrdiff_t m_flFogStrength = 0x8d0;
    constexpr std::ptrdiff_t m_nFogShadows = 0x8d4;
    constexpr std::ptrdiff_t m_flFogScale = 0x8d8;
    constexpr std::ptrdiff_t m_flFadeSizeStart = 0x8dc;
    constexpr std::ptrdiff_t m_flFadeSizeEnd = 0x8e0;
    constexpr std::ptrdiff_t m_flShadowFadeSizeStart = 0x8e4;
    constexpr std::ptrdiff_t m_flShadowFadeSizeEnd = 0x8e8;
    constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x8ec;
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x8f0;
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x8fc;
    constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x908;
    constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x914;
    constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x920;
    constexpr std::ptrdiff_t m_bPvsModifyEntity = 0x92c;
}

namespace CBaseAnimGraph {
    constexpr std::ptrdiff_t m_bInitiallyPopulateInterpHistory = 0x708;
    constexpr std::ptrdiff_t m_bShouldAnimateDuringGameplayPause = 0x709;
    constexpr std::ptrdiff_t m_pChoreoServices = 0x710;
    constexpr std::ptrdiff_t m_bAnimGraphUpdateEnabled = 0x718;
    constexpr std::ptrdiff_t m_flLastEventAnimTime = 0x7ac;
    constexpr std::ptrdiff_t m_hAnimationUpdate = 0x7b4;
    constexpr std::ptrdiff_t m_flMaxSlopeDistance = 0x7b8;
    constexpr std::ptrdiff_t m_vLastSlopeCheckPos = 0x7bc;
    constexpr std::ptrdiff_t m_bAnimGraphDirty = 0x7c8;
    constexpr std::ptrdiff_t m_vecForce = 0x7cc;
    constexpr std::ptrdiff_t m_nForceBone = 0x7d8;
    constexpr std::ptrdiff_t m_pRagdollPose = 0x7f0;
    constexpr std::ptrdiff_t m_bClientRagdoll = 0x7f8;
}

namespace CBaseAnimGraphController {
    constexpr std::ptrdiff_t m_baseLayer = 0x10;
    constexpr std::ptrdiff_t m_animGraphNetworkedVars = 0x38;
    constexpr std::ptrdiff_t m_bSequenceFinished = 0x210;
    constexpr std::ptrdiff_t m_flLastEventCycle = 0x214;
    constexpr std::ptrdiff_t m_flPlaybackRate = 0x218;
    constexpr std::ptrdiff_t m_flPrevAnimTime = 0x220;
    constexpr std::ptrdiff_t m_bClientSideAnimation = 0x224;
    constexpr std::ptrdiff_t m_bNetworkedAnimationInputsChanged = 0x225;
    constexpr std::ptrdiff_t m_nNewSequenceParity = 0x228;
    constexpr std::ptrdiff_t m_nResetEventsParity = 0x22c;
    constexpr std::ptrdiff_t m_nAnimLoopMode = 0x230;
}

namespace CBaseButton {
    constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x780;
    constexpr std::ptrdiff_t m_fStayPushed = 0x78c;
    constexpr std::ptrdiff_t m_fRotating = 0x78d;
    constexpr std::ptrdiff_t m_ls = 0x790;
    constexpr std::ptrdiff_t m_sUseSound = 0x7b0;
    constexpr std::ptrdiff_t m_sLockedSound = 0x7b8;
    constexpr std::ptrdiff_t m_sUnlockedSound = 0x7c0;
    constexpr std::ptrdiff_t m_bLocked = 0x7c8;
    constexpr std::ptrdiff_t m_bDisabled = 0x7c9;
    constexpr std::ptrdiff_t m_flUseLockedTime = 0x7cc;
    constexpr std::ptrdiff_t m_bSolidBsp = 0x7d0;
    constexpr std::ptrdiff_t m_OnDamaged = 0x7d8;
    constexpr std::ptrdiff_t m_OnPressed = 0x800;
    constexpr std::ptrdiff_t m_OnUseLocked = 0x828;
    constexpr std::ptrdiff_t m_OnIn = 0x850;
    constexpr std::ptrdiff_t m_OnOut = 0x878;
    constexpr std::ptrdiff_t m_nState = 0x8a0;
    constexpr std::ptrdiff_t m_hConstraint = 0x8a4;
    constexpr std::ptrdiff_t m_hConstraintParent = 0x8a8;
    constexpr std::ptrdiff_t m_bForceNpcExclude = 0x8ac;
    constexpr std::ptrdiff_t m_sGlowEntity = 0x8b0;
    constexpr std::ptrdiff_t m_glowEntity = 0x8b8;
    constexpr std::ptrdiff_t m_usable = 0x8bc;
    constexpr std::ptrdiff_t m_szDisplayText = 0x8c0;
}

namespace CBaseCSGrenade {
    constexpr std::ptrdiff_t m_bRedraw = 0xea0;
    constexpr std::ptrdiff_t m_bIsHeldByPlayer = 0xea1;
    constexpr std::ptrdiff_t m_bPinPulled = 0xea2;
    constexpr std::ptrdiff_t m_bJumpThrow = 0xea3;
    constexpr std::ptrdiff_t m_eThrowStatus = 0xea4;
    constexpr std::ptrdiff_t m_fThrowTime = 0xea8;
    constexpr std::ptrdiff_t m_flThrowStrength = 0xeac;
    constexpr std::ptrdiff_t m_flThrowStrengthApproach = 0xeb0;
    constexpr std::ptrdiff_t m_fDropTime = 0xeb4;
}

namespace CBaseCSGrenadeProjectile {
    constexpr std::ptrdiff_t m_vInitialVelocity = 0xa68;
    constexpr std::ptrdiff_t m_nBounces = 0xa74;
    constexpr std::ptrdiff_t m_nExplodeEffectIndex = 0xa78;
    constexpr std::ptrdiff_t m_nExplodeEffectTickBegin = 0xa80;
    constexpr std::ptrdiff_t m_vecExplodeEffectOrigin = 0xa84;
    constexpr std::ptrdiff_t m_unOGSExtraFlags = 0xa90;
    constexpr std::ptrdiff_t m_bDetonationRecorded = 0xa91;
    constexpr std::ptrdiff_t m_flDetonateTime = 0xa94;
    constexpr std::ptrdiff_t m_nItemIndex = 0xa98;
    constexpr std::ptrdiff_t m_vecOriginalSpawnLocation = 0xa9c;
    constexpr std::ptrdiff_t m_flLastBounceSoundTime = 0xaa8;
    constexpr std::ptrdiff_t m_vecGrenadeSpin = 0xaac;
    constexpr std::ptrdiff_t m_vecLastHitSurfaceNormal = 0xab8;
    constexpr std::ptrdiff_t m_nTicksAtZeroVelocity = 0xac4;
}

namespace CBaseClientUIEntity {
    constexpr std::ptrdiff_t m_bEnabled = 0x700;
    constexpr std::ptrdiff_t m_DialogXMLName = 0x708;
    constexpr std::ptrdiff_t m_PanelClassName = 0x710;
    constexpr std::ptrdiff_t m_PanelID = 0x718;
    constexpr std::ptrdiff_t m_CustomOutput0 = 0x720;
    constexpr std::ptrdiff_t m_CustomOutput1 = 0x748;
    constexpr std::ptrdiff_t m_CustomOutput2 = 0x770;
    constexpr std::ptrdiff_t m_CustomOutput3 = 0x798;
    constexpr std::ptrdiff_t m_CustomOutput4 = 0x7c0;
    constexpr std::ptrdiff_t m_CustomOutput5 = 0x7e8;
    constexpr std::ptrdiff_t m_CustomOutput6 = 0x810;
    constexpr std::ptrdiff_t m_CustomOutput7 = 0x838;
    constexpr std::ptrdiff_t m_CustomOutput8 = 0x860;
    constexpr std::ptrdiff_t m_CustomOutput9 = 0x888;
}

namespace CBaseCombatCharacter {
    constexpr std::ptrdiff_t m_bForceServerRagdoll = 0x9c0;
    constexpr std::ptrdiff_t m_hMyWearables = 0x9c8;
    constexpr std::ptrdiff_t m_flFieldOfView = 0x9e0;
    constexpr std::ptrdiff_t m_impactEnergyScale = 0x9e4;
    constexpr std::ptrdiff_t m_LastHitGroup = 0x9e8;
    constexpr std::ptrdiff_t m_bApplyStressDamage = 0x9ec;
    constexpr std::ptrdiff_t m_bloodColor = 0x9f0;
    constexpr std::ptrdiff_t m_navMeshID = 0xa50;
    constexpr std::ptrdiff_t m_iDamageCount = 0xa54;
    constexpr std::ptrdiff_t m_pVecRelationships = 0xa58;
    constexpr std::ptrdiff_t m_strRelationships = 0xa60;
    constexpr std::ptrdiff_t m_eHull = 0xa68;
    constexpr std::ptrdiff_t m_nNavHullIdx = 0xa6c;
}

namespace CBaseDMStart {
    constexpr std::ptrdiff_t m_Master = 0x4b0;
}

namespace CBaseDoor {
    constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x790;
    constexpr std::ptrdiff_t m_vecMoveDirParentSpace = 0x79c;
    constexpr std::ptrdiff_t m_ls = 0x7a8;
    constexpr std::ptrdiff_t m_bForceClosed = 0x7c8;
    constexpr std::ptrdiff_t m_bDoorGroup = 0x7c9;
    constexpr std::ptrdiff_t m_bLocked = 0x7ca;
    constexpr std::ptrdiff_t m_bIgnoreDebris = 0x7cb;
    constexpr std::ptrdiff_t m_eSpawnPosition = 0x7cc;
    constexpr std::ptrdiff_t m_flBlockDamage = 0x7d0;
    constexpr std::ptrdiff_t m_NoiseMoving = 0x7d8;
    constexpr std::ptrdiff_t m_NoiseArrived = 0x7e0;
    constexpr std::ptrdiff_t m_NoiseMovingClosed = 0x7e8;
    constexpr std::ptrdiff_t m_NoiseArrivedClosed = 0x7f0;
    constexpr std::ptrdiff_t m_ChainTarget = 0x7f8;
    constexpr std::ptrdiff_t m_OnBlockedClosing = 0x800;
    constexpr std::ptrdiff_t m_OnBlockedOpening = 0x828;
    constexpr std::ptrdiff_t m_OnUnblockedClosing = 0x850;
    constexpr std::ptrdiff_t m_OnUnblockedOpening = 0x878;
    constexpr std::ptrdiff_t m_OnFullyClosed = 0x8a0;
    constexpr std::ptrdiff_t m_OnFullyOpen = 0x8c8;
    constexpr std::ptrdiff_t m_OnClose = 0x8f0;
    constexpr std::ptrdiff_t m_OnOpen = 0x918;
    constexpr std::ptrdiff_t m_OnLockedUse = 0x940;
    constexpr std::ptrdiff_t m_bLoopMoveSound = 0x968;
    constexpr std::ptrdiff_t m_bCreateNavObstacle = 0x980;
    constexpr std::ptrdiff_t m_isChaining = 0x981;
    constexpr std::ptrdiff_t m_bIsUsable = 0x982;
}

namespace CBaseEntity {
    constexpr std::ptrdiff_t m_CBodyComponent = 0x30;
    constexpr std::ptrdiff_t m_NetworkTransmitComponent = 0x38;
    constexpr std::ptrdiff_t m_aThinkFunctions = 0x228;
    constexpr std::ptrdiff_t m_iCurrentThinkContext = 0x240;
    constexpr std::ptrdiff_t m_nLastThinkTick = 0x244;
    constexpr std::ptrdiff_t m_isSteadyState = 0x250;
    constexpr std::ptrdiff_t m_lastNetworkChange = 0x258;
    constexpr std::ptrdiff_t m_ResponseContexts = 0x268;
    constexpr std::ptrdiff_t m_iszResponseContext = 0x280;
    constexpr std::ptrdiff_t m_iHealth = 0x2a8;
    constexpr std::ptrdiff_t m_iMaxHealth = 0x2ac;
    constexpr std::ptrdiff_t m_lifeState = 0x2b0;
    constexpr std::ptrdiff_t m_flDamageAccumulator = 0x2b4;
    constexpr std::ptrdiff_t m_bTakesDamage = 0x2b8;
    constexpr std::ptrdiff_t m_nTakeDamageFlags = 0x2bc;
    constexpr std::ptrdiff_t m_MoveCollide = 0x2c1;
    constexpr std::ptrdiff_t m_MoveType = 0x2c2;
    constexpr std::ptrdiff_t m_nWaterTouch = 0x2c3;
    constexpr std::ptrdiff_t m_nSlimeTouch = 0x2c4;
    constexpr std::ptrdiff_t m_bRestoreInHierarchy = 0x2c5;
    constexpr std::ptrdiff_t m_target = 0x2c8;
    constexpr std::ptrdiff_t m_flMoveDoneTime = 0x2d0;
    constexpr std::ptrdiff_t m_hDamageFilter = 0x2d4;
    constexpr std::ptrdiff_t m_iszDamageFilterName = 0x2d8;
    constexpr std::ptrdiff_t m_nSubclassID = 0x2e0;
    constexpr std::ptrdiff_t m_flAnimTime = 0x2f0;
    constexpr std::ptrdiff_t m_flSimulationTime = 0x2f4;
    constexpr std::ptrdiff_t m_flCreateTime = 0x2f8;
    constexpr std::ptrdiff_t m_bClientSideRagdoll = 0x2fc;
    constexpr std::ptrdiff_t m_ubInterpolationFrame = 0x2fd;
    constexpr std::ptrdiff_t m_vPrevVPhysicsUpdatePos = 0x300;
    constexpr std::ptrdiff_t m_iTeamNum = 0x30c;
    constexpr std::ptrdiff_t m_iGlobalname = 0x310;
    constexpr std::ptrdiff_t m_iSentToClients = 0x318;
    constexpr std::ptrdiff_t m_flSpeed = 0x31c;
    constexpr std::ptrdiff_t m_sUniqueHammerID = 0x320;
    constexpr std::ptrdiff_t m_spawnflags = 0x328;
    constexpr std::ptrdiff_t m_nNextThinkTick = 0x32c;
    constexpr std::ptrdiff_t m_nSimulationTick = 0x330;
    constexpr std::ptrdiff_t m_OnKilled = 0x338;
    constexpr std::ptrdiff_t m_fFlags = 0x360;
    constexpr std::ptrdiff_t m_vecAbsVelocity = 0x364;
    constexpr std::ptrdiff_t m_vecVelocity = 0x370;
    constexpr std::ptrdiff_t m_vecBaseVelocity = 0x3a0;
    constexpr std::ptrdiff_t m_nPushEnumCount = 0x3ac;
    constexpr std::ptrdiff_t m_pCollision = 0x3b0;
    constexpr std::ptrdiff_t m_hEffectEntity = 0x3b8;
    constexpr std::ptrdiff_t m_hOwnerEntity = 0x3bc;
    constexpr std::ptrdiff_t m_fEffects = 0x3c0;
    constexpr std::ptrdiff_t m_hGroundEntity = 0x3c4;
    constexpr std::ptrdiff_t m_flFriction = 0x3c8;
    constexpr std::ptrdiff_t m_flElasticity = 0x3cc;
    constexpr std::ptrdiff_t m_flGravityScale = 0x3d0;
    constexpr std::ptrdiff_t m_flTimeScale = 0x3d4;
    constexpr std::ptrdiff_t m_flWaterLevel = 0x3d8;
    constexpr std::ptrdiff_t m_bSimulatedEveryTick = 0x3dc;
    constexpr std::ptrdiff_t m_bAnimatedEveryTick = 0x3dd;
    constexpr std::ptrdiff_t m_bDisableLowViolence = 0x3de;
    constexpr std::ptrdiff_t m_nWaterType = 0x3df;
    constexpr std::ptrdiff_t m_iEFlags = 0x3e0;
    constexpr std::ptrdiff_t m_OnUser1 = 0x3e8;
    constexpr std::ptrdiff_t m_OnUser2 = 0x410;
    constexpr std::ptrdiff_t m_OnUser3 = 0x438;
    constexpr std::ptrdiff_t m_OnUser4 = 0x460;
    constexpr std::ptrdiff_t m_iInitialTeamNum = 0x488;
    constexpr std::ptrdiff_t m_flNavIgnoreUntilTime = 0x48c;
    constexpr std::ptrdiff_t m_vecAngVelocity = 0x490;
    constexpr std::ptrdiff_t m_bNetworkQuantizeOriginAndAngles = 0x49c;
    constexpr std::ptrdiff_t m_bLagCompensate = 0x49d;
    constexpr std::ptrdiff_t m_flOverriddenFriction = 0x4a0;
    constexpr std::ptrdiff_t m_pBlocker = 0x4a4;
    constexpr std::ptrdiff_t m_flLocalTime = 0x4a8;
    constexpr std::ptrdiff_t m_flVPhysicsUpdateLocalTime = 0x4ac;
}

namespace CBaseFilter {
    constexpr std::ptrdiff_t m_bNegated = 0x4b0;
    constexpr std::ptrdiff_t m_OnPass = 0x4b8;
    constexpr std::ptrdiff_t m_OnFail = 0x4e0;
}

namespace CBaseFire {
    constexpr std::ptrdiff_t m_flScale = 0x4b0;
    constexpr std::ptrdiff_t m_flStartScale = 0x4b4;
    constexpr std::ptrdiff_t m_flScaleTime = 0x4b8;
    constexpr std::ptrdiff_t m_nFlags = 0x4bc;
}

namespace CBaseFlex {
    constexpr std::ptrdiff_t m_flexWeight = 0x930;
    constexpr std::ptrdiff_t m_vLookTargetPosition = 0x948;
    constexpr std::ptrdiff_t m_blinktoggle = 0x954;
    constexpr std::ptrdiff_t m_flAllowResponsesEndTime = 0x9a8;
    constexpr std::ptrdiff_t m_flLastFlexAnimationTime = 0x9ac;
    constexpr std::ptrdiff_t m_nNextSceneEventId = 0x9b0;
    constexpr std::ptrdiff_t m_bUpdateLayerPriorities = 0x9b4;
}

namespace CBaseGrenade {
    constexpr std::ptrdiff_t m_OnPlayerPickup = 0x9c8;
    constexpr std::ptrdiff_t m_OnExplode = 0x9f0;
    constexpr std::ptrdiff_t m_bHasWarnedAI = 0xa18;
    constexpr std::ptrdiff_t m_bIsSmokeGrenade = 0xa19;
    constexpr std::ptrdiff_t m_bIsLive = 0xa1a;
    constexpr std::ptrdiff_t m_DmgRadius = 0xa1c;
    constexpr std::ptrdiff_t m_flDetonateTime = 0xa20;
    constexpr std::ptrdiff_t m_flWarnAITime = 0xa24;
    constexpr std::ptrdiff_t m_flDamage = 0xa28;
    constexpr std::ptrdiff_t m_iszBounceSound = 0xa30;
    constexpr std::ptrdiff_t m_ExplosionSound = 0xa38;
    constexpr std::ptrdiff_t m_hThrower = 0xa44;
    constexpr std::ptrdiff_t m_flNextAttack = 0xa60;
    constexpr std::ptrdiff_t m_hOriginalThrower = 0xa64;
}

namespace CBaseIssue {
    constexpr std::ptrdiff_t m_szTypeString = 0x20;
    constexpr std::ptrdiff_t m_szDetailsString = 0x60;
    constexpr std::ptrdiff_t m_iNumYesVotes = 0x164;
    constexpr std::ptrdiff_t m_iNumNoVotes = 0x168;
    constexpr std::ptrdiff_t m_iNumPotentialVotes = 0x16c;
    constexpr std::ptrdiff_t m_pVoteController = 0x170;
}

namespace CBaseModelEntity {
    constexpr std::ptrdiff_t m_CRenderComponent = 0x4b0;
    constexpr std::ptrdiff_t m_CHitboxComponent = 0x4b8;
    constexpr std::ptrdiff_t m_flDissolveStartTime = 0x4e0;
    constexpr std::ptrdiff_t m_OnIgnite = 0x4e8;
    constexpr std::ptrdiff_t m_nRenderMode = 0x510;
    constexpr std::ptrdiff_t m_nRenderFX = 0x511;
    constexpr std::ptrdiff_t m_bAllowFadeInView = 0x512;
    constexpr std::ptrdiff_t m_clrRender = 0x513;
    constexpr std::ptrdiff_t m_vecRenderAttributes = 0x518;
    constexpr std::ptrdiff_t m_LightGroup = 0x568;
    constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x56c;
    constexpr std::ptrdiff_t m_Collision = 0x570;
    constexpr std::ptrdiff_t m_Glow = 0x620;
    constexpr std::ptrdiff_t m_flGlowBackfaceMult = 0x678;
    constexpr std::ptrdiff_t m_fadeMinDist = 0x67c;
    constexpr std::ptrdiff_t m_fadeMaxDist = 0x680;
    constexpr std::ptrdiff_t m_flFadeScale = 0x684;
    constexpr std::ptrdiff_t m_flShadowStrength = 0x688;
    constexpr std::ptrdiff_t m_nObjectCulling = 0x68c;
    constexpr std::ptrdiff_t m_nAddDecal = 0x690;
    constexpr std::ptrdiff_t m_vDecalPosition = 0x694;
    constexpr std::ptrdiff_t m_vDecalForwardAxis = 0x6a0;
    constexpr std::ptrdiff_t m_flDecalHealBloodRate = 0x6ac;
    constexpr std::ptrdiff_t m_flDecalHealHeightRate = 0x6b0;
    constexpr std::ptrdiff_t m_ConfigEntitiesToPropagateMaterialDecalsTo = 0x6b8;
    constexpr std::ptrdiff_t m_vecViewOffset = 0x6d0;
}

namespace CBaseMoveBehavior {
    constexpr std::ptrdiff_t m_iPositionInterpolator = 0x510;
    constexpr std::ptrdiff_t m_iRotationInterpolator = 0x514;
    constexpr std::ptrdiff_t m_flAnimStartTime = 0x518;
    constexpr std::ptrdiff_t m_flAnimEndTime = 0x51c;
    constexpr std::ptrdiff_t m_flAverageSpeedAcrossFrame = 0x520;
    constexpr std::ptrdiff_t m_pCurrentKeyFrame = 0x528;
    constexpr std::ptrdiff_t m_pTargetKeyFrame = 0x530;
    constexpr std::ptrdiff_t m_pPreKeyFrame = 0x538;
    constexpr std::ptrdiff_t m_pPostKeyFrame = 0x540;
    constexpr std::ptrdiff_t m_flTimeIntoFrame = 0x548;
    constexpr std::ptrdiff_t m_iDirection = 0x54c;
}

namespace CBasePlatTrain {
    constexpr std::ptrdiff_t m_NoiseMoving = 0x780;
    constexpr std::ptrdiff_t m_NoiseArrived = 0x788;
    constexpr std::ptrdiff_t m_volume = 0x798;
    constexpr std::ptrdiff_t m_flTWidth = 0x79c;
    constexpr std::ptrdiff_t m_flTLength = 0x7a0;
}

namespace CBasePlayerController {
    constexpr std::ptrdiff_t m_nInButtonsWhichAreToggles = 0x4b8;
    constexpr std::ptrdiff_t m_nTickBase = 0x4c0;
    constexpr std::ptrdiff_t m_hPawn = 0x4f0;
    constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x4f4;
    constexpr std::ptrdiff_t m_hSplitOwner = 0x4f8;
    constexpr std::ptrdiff_t m_hSplitScreenPlayers = 0x500;
    constexpr std::ptrdiff_t m_bIsHLTV = 0x518;
    constexpr std::ptrdiff_t m_iConnected = 0x51c;
    constexpr std::ptrdiff_t m_iszPlayerName = 0x520;
    constexpr std::ptrdiff_t m_szNetworkIDString = 0x5a0;
    constexpr std::ptrdiff_t m_fLerpTime = 0x5a8;
    constexpr std::ptrdiff_t m_bLagCompensation = 0x5ac;
    constexpr std::ptrdiff_t m_bPredict = 0x5ad;
    constexpr std::ptrdiff_t m_bAutoKickDisabled = 0x5ae;
    constexpr std::ptrdiff_t m_bIsLowViolence = 0x5af;
    constexpr std::ptrdiff_t m_bGamePaused = 0x5b0;
    constexpr std::ptrdiff_t m_nHighestCommandNumberReceived = 0x628;
    constexpr std::ptrdiff_t m_nUsecTimestampLastUserCmdReceived = 0x630;
    constexpr std::ptrdiff_t m_iIgnoreGlobalChat = 0x648;
    constexpr std::ptrdiff_t m_flLastPlayerTalkTime = 0x64c;
    constexpr std::ptrdiff_t m_flLastEntitySteadyState = 0x650;
    constexpr std::ptrdiff_t m_nAvailableEntitySteadyState = 0x654;
    constexpr std::ptrdiff_t m_bHasAnySteadyStateEnts = 0x658;
    constexpr std::ptrdiff_t m_steamID = 0x668;
    constexpr std::ptrdiff_t m_iDesiredFOV = 0x670;
}

namespace CBasePlayerPawn {
    constexpr std::ptrdiff_t m_pWeaponServices = 0xa70;
    constexpr std::ptrdiff_t m_pItemServices = 0xa78;
    constexpr std::ptrdiff_t m_pAutoaimServices = 0xa80;
    constexpr std::ptrdiff_t m_pObserverServices = 0xa88;
    constexpr std::ptrdiff_t m_pWaterServices = 0xa90;
    constexpr std::ptrdiff_t m_pUseServices = 0xa98;
    constexpr std::ptrdiff_t m_pFlashlightServices = 0xaa0;
    constexpr std::ptrdiff_t m_pCameraServices = 0xaa8;
    constexpr std::ptrdiff_t m_pMovementServices = 0xab0;
    constexpr std::ptrdiff_t m_ServerViewAngleChanges = 0xac0;
    constexpr std::ptrdiff_t m_nHighestGeneratedServerViewAngleChangeIndex = 0xb10;
    constexpr std::ptrdiff_t v_angle = 0xb14;
    constexpr std::ptrdiff_t v_anglePrevious = 0xb20;
    constexpr std::ptrdiff_t m_iHideHUD = 0xb2c;
    constexpr std::ptrdiff_t m_skybox3d = 0xb30;
    constexpr std::ptrdiff_t m_fTimeLastHurt = 0xbc0;
    constexpr std::ptrdiff_t m_flDeathTime = 0xbc4;
    constexpr std::ptrdiff_t m_fNextSuicideTime = 0xbc8;
    constexpr std::ptrdiff_t m_fInitHUD = 0xbcc;
    constexpr std::ptrdiff_t m_pExpresser = 0xbd0;
    constexpr std::ptrdiff_t m_hController = 0xbd8;
    constexpr std::ptrdiff_t m_fHltvReplayDelay = 0xbe0;
    constexpr std::ptrdiff_t m_fHltvReplayEnd = 0xbe4;
    constexpr std::ptrdiff_t m_iHltvReplayEntity = 0xbe8;
}

namespace CBasePlayerVData {
    constexpr std::ptrdiff_t m_sModelName = 0x28;
    constexpr std::ptrdiff_t m_flHeadDamageMultiplier = 0x108;
    constexpr std::ptrdiff_t m_flChestDamageMultiplier = 0x118;
    constexpr std::ptrdiff_t m_flStomachDamageMultiplier = 0x128;
    constexpr std::ptrdiff_t m_flArmDamageMultiplier = 0x138;
    constexpr std::ptrdiff_t m_flLegDamageMultiplier = 0x148;
    constexpr std::ptrdiff_t m_flHoldBreathTime = 0x158;
    constexpr std::ptrdiff_t m_flDrowningDamageInterval = 0x15c;
    constexpr std::ptrdiff_t m_nDrowningDamageInitial = 0x160;
    constexpr std::ptrdiff_t m_nDrowningDamageMax = 0x164;
    constexpr std::ptrdiff_t m_nWaterSpeed = 0x168;
    constexpr std::ptrdiff_t m_flUseRange = 0x16c;
    constexpr std::ptrdiff_t m_flUseAngleTolerance = 0x170;
    constexpr std::ptrdiff_t m_flCrouchTime = 0x174;
}

namespace CBasePlayerWeapon {
    constexpr std::ptrdiff_t m_iState = 0xcb8;
    constexpr std::ptrdiff_t m_bRemoveable = 0xcbc;
    constexpr std::ptrdiff_t m_nNextPrimaryAttackTick = 0xcc0;
    constexpr std::ptrdiff_t m_flNextPrimaryAttackTickRatio = 0xcc4;
    constexpr std::ptrdiff_t m_nNextSecondaryAttackTick = 0xcc8;
    constexpr std::ptrdiff_t m_flNextSecondaryAttackTickRatio = 0xccc;
    constexpr std::ptrdiff_t m_iClip1 = 0xcd0;
    constexpr std::ptrdiff_t m_iClip2 = 0xcd4;
    constexpr std::ptrdiff_t m_pReserveAmmo = 0xcd8;
    constexpr std::ptrdiff_t m_OnPlayerUse = 0xce0;
}

namespace CBasePlayerWeaponVData {
    constexpr std::ptrdiff_t m_szWorldModel = 0x28;
    constexpr std::ptrdiff_t m_bBuiltRightHanded = 0x108;
    constexpr std::ptrdiff_t m_bAllowFlipping = 0x109;
    constexpr std::ptrdiff_t m_bIsFullAuto = 0x10a;
    constexpr std::ptrdiff_t m_nNumBullets = 0x10c;
    constexpr std::ptrdiff_t m_sMuzzleAttachment = 0x110;
    constexpr std::ptrdiff_t m_szMuzzleFlashParticle = 0x118;
    constexpr std::ptrdiff_t m_iFlags = 0x1f8;
    constexpr std::ptrdiff_t m_nPrimaryAmmoType = 0x1f9;
    constexpr std::ptrdiff_t m_nSecondaryAmmoType = 0x1fa;
    constexpr std::ptrdiff_t m_iMaxClip1 = 0x1fc;
    constexpr std::ptrdiff_t m_iMaxClip2 = 0x200;
    constexpr std::ptrdiff_t m_iDefaultClip1 = 0x204;
    constexpr std::ptrdiff_t m_iDefaultClip2 = 0x208;
    constexpr std::ptrdiff_t m_iWeight = 0x20c;
    constexpr std::ptrdiff_t m_bAutoSwitchTo = 0x210;
    constexpr std::ptrdiff_t m_bAutoSwitchFrom = 0x211;
    constexpr std::ptrdiff_t m_iRumbleEffect = 0x214;
    constexpr std::ptrdiff_t m_aShootSounds = 0x218;
    constexpr std::ptrdiff_t m_iSlot = 0x238;
    constexpr std::ptrdiff_t m_iPosition = 0x23c;
}

namespace CBaseProp {
    constexpr std::ptrdiff_t m_bModelOverrodeBlockLOS = 0x930;
    constexpr std::ptrdiff_t m_iShapeType = 0x934;
    constexpr std::ptrdiff_t m_bConformToCollisionBounds = 0x938;
    constexpr std::ptrdiff_t m_mPreferredCatchTransform = 0x93c;
}

namespace CBasePropDoor {
    constexpr std::ptrdiff_t m_flAutoReturnDelay = 0xbb8;
    constexpr std::ptrdiff_t m_hDoorList = 0xbc0;
    constexpr std::ptrdiff_t m_nHardwareType = 0xbd8;
    constexpr std::ptrdiff_t m_bNeedsHardware = 0xbdc;
    constexpr std::ptrdiff_t m_eDoorState = 0xbe0;
    constexpr std::ptrdiff_t m_bLocked = 0xbe4;
    constexpr std::ptrdiff_t m_closedPosition = 0xbe8;
    constexpr std::ptrdiff_t m_closedAngles = 0xbf4;
    constexpr std::ptrdiff_t m_hBlocker = 0xc00;
    constexpr std::ptrdiff_t m_bFirstBlocked = 0xc04;
    constexpr std::ptrdiff_t m_ls = 0xc08;
    constexpr std::ptrdiff_t m_bForceClosed = 0xc28;
    constexpr std::ptrdiff_t m_vecLatchWorldPosition = 0xc2c;
    constexpr std::ptrdiff_t m_hActivator = 0xc38;
    constexpr std::ptrdiff_t m_sndParamAngularSpeed = 0xc44;
    constexpr std::ptrdiff_t m_SoundMoving = 0xc48;
    constexpr std::ptrdiff_t m_SoundOpen = 0xc50;
    constexpr std::ptrdiff_t m_SoundClose = 0xc58;
    constexpr std::ptrdiff_t m_SoundLock = 0xc60;
    constexpr std::ptrdiff_t m_SoundUnlock = 0xc68;
    constexpr std::ptrdiff_t m_SoundLatch = 0xc70;
    constexpr std::ptrdiff_t m_SoundPound = 0xc78;
    constexpr std::ptrdiff_t m_SoundJiggle = 0xc80;
    constexpr std::ptrdiff_t m_SoundLockedAnim = 0xc88;
    constexpr std::ptrdiff_t m_numCloseAttempts = 0xc90;
    constexpr std::ptrdiff_t m_nPhysicsMaterial = 0xc94;
    constexpr std::ptrdiff_t m_SlaveName = 0xc98;
    constexpr std::ptrdiff_t m_hMaster = 0xca0;
    constexpr std::ptrdiff_t m_OnBlockedClosing = 0xca8;
    constexpr std::ptrdiff_t m_OnBlockedOpening = 0xcd0;
    constexpr std::ptrdiff_t m_OnUnblockedClosing = 0xcf8;
    constexpr std::ptrdiff_t m_OnUnblockedOpening = 0xd20;
    constexpr std::ptrdiff_t m_OnFullyClosed = 0xd48;
    constexpr std::ptrdiff_t m_OnFullyOpen = 0xd70;
    constexpr std::ptrdiff_t m_OnClose = 0xd98;
    constexpr std::ptrdiff_t m_OnOpen = 0xdc0;
    constexpr std::ptrdiff_t m_OnLockedUse = 0xde8;
    constexpr std::ptrdiff_t m_OnAjarOpen = 0xe10;
}

namespace CBaseToggle {
    constexpr std::ptrdiff_t m_toggle_state = 0x700;
    constexpr std::ptrdiff_t m_flMoveDistance = 0x704;
    constexpr std::ptrdiff_t m_flWait = 0x708;
    constexpr std::ptrdiff_t m_flLip = 0x70c;
    constexpr std::ptrdiff_t m_bAlwaysFireBlockedOutputs = 0x710;
    constexpr std::ptrdiff_t m_vecPosition1 = 0x714;
    constexpr std::ptrdiff_t m_vecPosition2 = 0x720;
    constexpr std::ptrdiff_t m_vecMoveAng = 0x72c;
    constexpr std::ptrdiff_t m_vecAngle1 = 0x738;
    constexpr std::ptrdiff_t m_vecAngle2 = 0x744;
    constexpr std::ptrdiff_t m_flHeight = 0x750;
    constexpr std::ptrdiff_t m_hActivator = 0x754;
    constexpr std::ptrdiff_t m_vecFinalDest = 0x758;
    constexpr std::ptrdiff_t m_vecFinalAngle = 0x764;
    constexpr std::ptrdiff_t m_movementType = 0x770;
    constexpr std::ptrdiff_t m_sMaster = 0x778;
}

namespace CBaseTrigger {
    constexpr std::ptrdiff_t m_bDisabled = 0x780;
    constexpr std::ptrdiff_t m_iFilterName = 0x788;
    constexpr std::ptrdiff_t m_hFilter = 0x790;
    constexpr std::ptrdiff_t m_OnStartTouch = 0x798;
    constexpr std::ptrdiff_t m_OnStartTouchAll = 0x7c0;
    constexpr std::ptrdiff_t m_OnEndTouch = 0x7e8;
    constexpr std::ptrdiff_t m_OnEndTouchAll = 0x810;
    constexpr std::ptrdiff_t m_OnTouching = 0x838;
    constexpr std::ptrdiff_t m_OnNotTouching = 0x860;
    constexpr std::ptrdiff_t m_hTouchingEntities = 0x888;
    constexpr std::ptrdiff_t m_bClientSidePredicted = 0x8a0;
}

namespace CBaseViewModel {
    constexpr std::ptrdiff_t m_vecLastFacing = 0x938;
    constexpr std::ptrdiff_t m_nViewModelIndex = 0x944;
    constexpr std::ptrdiff_t m_nAnimationParity = 0x948;
    constexpr std::ptrdiff_t m_flAnimationStartTime = 0x94c;
    constexpr std::ptrdiff_t m_hWeapon = 0x950;
    constexpr std::ptrdiff_t m_sVMName = 0x958;
    constexpr std::ptrdiff_t m_sAnimationPrefix = 0x960;
    constexpr std::ptrdiff_t m_hOldLayerSequence = 0x968;
    constexpr std::ptrdiff_t m_oldLayer = 0x96c;
    constexpr std::ptrdiff_t m_oldLayerStartTime = 0x970;
    constexpr std::ptrdiff_t m_hControlPanel = 0x974;
}

namespace CBeam {
    constexpr std::ptrdiff_t m_flFrameRate = 0x700;
    constexpr std::ptrdiff_t m_flHDRColorScale = 0x704;
    constexpr std::ptrdiff_t m_flFireTime = 0x708;
    constexpr std::ptrdiff_t m_flDamage = 0x70c;
    constexpr std::ptrdiff_t m_nNumBeamEnts = 0x710;
    constexpr std::ptrdiff_t m_hBaseMaterial = 0x718;
    constexpr std::ptrdiff_t m_nHaloIndex = 0x720;
    constexpr std::ptrdiff_t m_nBeamType = 0x728;
    constexpr std::ptrdiff_t m_nBeamFlags = 0x72c;
    constexpr std::ptrdiff_t m_hAttachEntity = 0x730;
    constexpr std::ptrdiff_t m_nAttachIndex = 0x758;
    constexpr std::ptrdiff_t m_fWidth = 0x764;
    constexpr std::ptrdiff_t m_fEndWidth = 0x768;
    constexpr std::ptrdiff_t m_fFadeLength = 0x76c;
    constexpr std::ptrdiff_t m_fHaloScale = 0x770;
    constexpr std::ptrdiff_t m_fAmplitude = 0x774;
    constexpr std::ptrdiff_t m_fStartFrame = 0x778;
    constexpr std::ptrdiff_t m_fSpeed = 0x77c;
    constexpr std::ptrdiff_t m_flFrame = 0x780;
    constexpr std::ptrdiff_t m_nClipStyle = 0x784;
    constexpr std::ptrdiff_t m_bTurnedOff = 0x788;
    constexpr std::ptrdiff_t m_vecEndPos = 0x78c;
    constexpr std::ptrdiff_t m_hEndEntity = 0x798;
    constexpr std::ptrdiff_t m_nDissolveType = 0x79c;
}

namespace CBlood {
    constexpr std::ptrdiff_t m_vecSprayAngles = 0x4b0;
    constexpr std::ptrdiff_t m_vecSprayDir = 0x4bc;
    constexpr std::ptrdiff_t m_flAmount = 0x4c8;
    constexpr std::ptrdiff_t m_Color = 0x4cc;
}

namespace CBodyComponent {
    constexpr std::ptrdiff_t m_pSceneNode = 0x8;
    constexpr std::ptrdiff_t __m_pChainEntity = 0x20;
}

namespace CBodyComponentBaseAnimGraph {
    constexpr std::ptrdiff_t m_animationController = 0x470;
    constexpr std::ptrdiff_t __m_pChainEntity = 0x6b0;
}

namespace CBodyComponentBaseModelEntity {
    constexpr std::ptrdiff_t __m_pChainEntity = 0x470;
}

namespace CBodyComponentPoint {
    constexpr std::ptrdiff_t m_sceneNode = 0x50;
    constexpr std::ptrdiff_t __m_pChainEntity = 0x1a0;
}

namespace CBodyComponentSkeletonInstance {
    constexpr std::ptrdiff_t m_skeletonInstance = 0x50;
    constexpr std::ptrdiff_t __m_pChainEntity = 0x440;
}

namespace CBombTarget {
    constexpr std::ptrdiff_t m_OnBombExplode = 0x8a8;
    constexpr std::ptrdiff_t m_OnBombPlanted = 0x8d0;
    constexpr std::ptrdiff_t m_OnBombDefused = 0x8f8;
    constexpr std::ptrdiff_t m_bIsBombSiteB = 0x920;
    constexpr std::ptrdiff_t m_bIsHeistBombTarget = 0x921;
    constexpr std::ptrdiff_t m_bBombPlantedHere = 0x922;
    constexpr std::ptrdiff_t m_szMountTarget = 0x928;
    constexpr std::ptrdiff_t m_hInstructorHint = 0x930;
    constexpr std::ptrdiff_t m_nBombSiteDesignation = 0x934;
}

namespace CBot {
    constexpr std::ptrdiff_t m_pPlayer = 0x10;
    constexpr std::ptrdiff_t m_bHasSpawned = 0x18;
    constexpr std::ptrdiff_t m_id = 0x1c;
    constexpr std::ptrdiff_t m_isRunning = 0x90;
    constexpr std::ptrdiff_t m_isCrouching = 0x91;
    constexpr std::ptrdiff_t m_forwardSpeed = 0x94;
    constexpr std::ptrdiff_t m_leftSpeed = 0x98;
    constexpr std::ptrdiff_t m_verticalSpeed = 0x9c;
    constexpr std::ptrdiff_t m_buttonFlags = 0xa0;
    constexpr std::ptrdiff_t m_jumpTimestamp = 0xa8;
    constexpr std::ptrdiff_t m_viewForward = 0xac;
    constexpr std::ptrdiff_t m_postureStackIndex = 0xc8;
}

namespace CBreachChargeProjectile {
    constexpr std::ptrdiff_t m_bShouldExplode = 0xa68;
    constexpr std::ptrdiff_t m_weaponThatThrewMe = 0xa6c;
    constexpr std::ptrdiff_t m_nParentBoneIndex = 0xa70;
    constexpr std::ptrdiff_t m_vecParentBonePos = 0xa74;
    constexpr std::ptrdiff_t m_bDefused = 0xa80;
    constexpr std::ptrdiff_t m_bUnstuckFromPlayer = 0xa81;
    constexpr std::ptrdiff_t m_bResolvedParent = 0xa82;
    constexpr std::ptrdiff_t m_vecLastKnownValidPos = 0xa84;
    constexpr std::ptrdiff_t m_hDesiredParent = 0xa90;
}

namespace CBreakable {
    constexpr std::ptrdiff_t m_Material = 0x710;
    constexpr std::ptrdiff_t m_hBreaker = 0x714;
    constexpr std::ptrdiff_t m_Explosion = 0x718;
    constexpr std::ptrdiff_t m_iszSpawnObject = 0x720;
    constexpr std::ptrdiff_t m_flPressureDelay = 0x728;
    constexpr std::ptrdiff_t m_iMinHealthDmg = 0x72c;
    constexpr std::ptrdiff_t m_iszPropData = 0x730;
    constexpr std::ptrdiff_t m_impactEnergyScale = 0x738;
    constexpr std::ptrdiff_t m_nOverrideBlockLOS = 0x73c;
    constexpr std::ptrdiff_t m_OnBreak = 0x740;
    constexpr std::ptrdiff_t m_OnHealthChanged = 0x768;
    constexpr std::ptrdiff_t m_flDmgModBullet = 0x790;
    constexpr std::ptrdiff_t m_flDmgModClub = 0x794;
    constexpr std::ptrdiff_t m_flDmgModExplosive = 0x798;
    constexpr std::ptrdiff_t m_flDmgModFire = 0x79c;
    constexpr std::ptrdiff_t m_iszPhysicsDamageTableName = 0x7a0;
    constexpr std::ptrdiff_t m_iszBasePropData = 0x7a8;
    constexpr std::ptrdiff_t m_iInteractions = 0x7b0;
    constexpr std::ptrdiff_t m_PerformanceMode = 0x7b4;
    constexpr std::ptrdiff_t m_hPhysicsAttacker = 0x7b8;
    constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0x7bc;
}

namespace CBreakableProp {
    constexpr std::ptrdiff_t m_OnBreak = 0x980;
    constexpr std::ptrdiff_t m_OnHealthChanged = 0x9a8;
    constexpr std::ptrdiff_t m_OnTakeDamage = 0x9d0;
    constexpr std::ptrdiff_t m_impactEnergyScale = 0x9f8;
    constexpr std::ptrdiff_t m_iMinHealthDmg = 0x9fc;
    constexpr std::ptrdiff_t m_preferredCarryAngles = 0xa00;
    constexpr std::ptrdiff_t m_flPressureDelay = 0xa0c;
    constexpr std::ptrdiff_t m_hBreaker = 0xa10;
    constexpr std::ptrdiff_t m_PerformanceMode = 0xa14;
    constexpr std::ptrdiff_t m_flDmgModBullet = 0xa18;
    constexpr std::ptrdiff_t m_flDmgModClub = 0xa1c;
    constexpr std::ptrdiff_t m_flDmgModExplosive = 0xa20;
    constexpr std::ptrdiff_t m_flDmgModFire = 0xa24;
    constexpr std::ptrdiff_t m_iszPhysicsDamageTableName = 0xa28;
    constexpr std::ptrdiff_t m_iszBasePropData = 0xa30;
    constexpr std::ptrdiff_t m_iInteractions = 0xa38;
    constexpr std::ptrdiff_t m_flPreventDamageBeforeTime = 0xa3c;
    constexpr std::ptrdiff_t m_bHasBreakPiecesOrCommands = 0xa40;
    constexpr std::ptrdiff_t m_explodeDamage = 0xa44;
    constexpr std::ptrdiff_t m_explodeRadius = 0xa48;
    constexpr std::ptrdiff_t m_explosionDelay = 0xa50;
    constexpr std::ptrdiff_t m_explosionBuildupSound = 0xa58;
    constexpr std::ptrdiff_t m_explosionCustomEffect = 0xa60;
    constexpr std::ptrdiff_t m_explosionCustomSound = 0xa68;
    constexpr std::ptrdiff_t m_explosionModifier = 0xa70;
    constexpr std::ptrdiff_t m_hPhysicsAttacker = 0xa78;
    constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0xa7c;
    constexpr std::ptrdiff_t m_bOriginalBlockLOS = 0xa80;
    constexpr std::ptrdiff_t m_flDefaultFadeScale = 0xa84;
    constexpr std::ptrdiff_t m_hLastAttacker = 0xa88;
    constexpr std::ptrdiff_t m_hFlareEnt = 0xa8c;
    constexpr std::ptrdiff_t m_bUsePuntSound = 0xa90;
    constexpr std::ptrdiff_t m_iszPuntSound = 0xa98;
    constexpr std::ptrdiff_t m_noGhostCollision = 0xaa0;
}

namespace CBreakableStageHelper {
    constexpr std::ptrdiff_t m_nCurrentStage = 0x8;
    constexpr std::ptrdiff_t m_nStageCount = 0xc;
}

namespace CBtActionAim {
    constexpr std::ptrdiff_t m_szSensorInputKey = 0x68;
    constexpr std::ptrdiff_t m_szAimReadyKey = 0x80;
    constexpr std::ptrdiff_t m_flZoomCooldownTimestamp = 0x88;
    constexpr std::ptrdiff_t m_bDoneAiming = 0x8c;
    constexpr std::ptrdiff_t m_flLerpStartTime = 0x90;
    constexpr std::ptrdiff_t m_flNextLookTargetLerpTime = 0x94;
    constexpr std::ptrdiff_t m_flPenaltyReductionRatio = 0x98;
    constexpr std::ptrdiff_t m_NextLookTarget = 0x9c;
    constexpr std::ptrdiff_t m_AimTimer = 0xa8;
    constexpr std::ptrdiff_t m_SniperHoldTimer = 0xc0;
    constexpr std::ptrdiff_t m_FocusIntervalTimer = 0xd8;
    constexpr std::ptrdiff_t m_bAcquired = 0xf0;
}

namespace CBtActionCombatPositioning {
    constexpr std::ptrdiff_t m_szSensorInputKey = 0x68;
    constexpr std::ptrdiff_t m_szIsAttackingKey = 0x80;
    constexpr std::ptrdiff_t m_ActionTimer = 0x88;
    constexpr std::ptrdiff_t m_bCrouching = 0xa0;
}

namespace CBtActionMoveTo {
    constexpr std::ptrdiff_t m_szDestinationInputKey = 0x60;
    constexpr std::ptrdiff_t m_szHidingSpotInputKey = 0x68;
    constexpr std::ptrdiff_t m_szThreatInputKey = 0x70;
    constexpr std::ptrdiff_t m_vecDestination = 0x78;
    constexpr std::ptrdiff_t m_bAutoLookAdjust = 0x84;
    constexpr std::ptrdiff_t m_bComputePath = 0x85;
    constexpr std::ptrdiff_t m_flDamagingAreasPenaltyCost = 0x88;
    constexpr std::ptrdiff_t m_CheckApproximateCornersTimer = 0x90;
    constexpr std::ptrdiff_t m_CheckHighPriorityItem = 0xa8;
    constexpr std::ptrdiff_t m_RepathTimer = 0xc0;
    constexpr std::ptrdiff_t m_flArrivalEpsilon = 0xd8;
    constexpr std::ptrdiff_t m_flAdditionalArrivalEpsilon2D = 0xdc;
    constexpr std::ptrdiff_t m_flHidingSpotCheckDistanceThreshold = 0xe0;
    constexpr std::ptrdiff_t m_flNearestAreaDistanceThreshold = 0xe4;
}

namespace CBtActionParachutePositioning {
    constexpr std::ptrdiff_t m_ActionTimer = 0x58;
}

namespace CBtNodeCondition {
    constexpr std::ptrdiff_t m_bNegated = 0x58;
}

namespace CBtNodeConditionInactive {
    constexpr std::ptrdiff_t m_flRoundStartThresholdSeconds = 0x78;
    constexpr std::ptrdiff_t m_flSensorInactivityThresholdSeconds = 0x7c;
    constexpr std::ptrdiff_t m_SensorInactivityTimer = 0x80;
}

namespace CBubbling {
    constexpr std::ptrdiff_t m_density = 0x700;
    constexpr std::ptrdiff_t m_frequency = 0x704;
    constexpr std::ptrdiff_t m_state = 0x708;
}

namespace CBumpMineProjectile {
    constexpr std::ptrdiff_t m_bShouldExplode = 0xa68;
    constexpr std::ptrdiff_t m_nParentBoneIndex = 0xa6c;
    constexpr std::ptrdiff_t m_vecParentBonePos = 0xa70;
    constexpr std::ptrdiff_t m_bArmed = 0xa7c;
    constexpr std::ptrdiff_t m_bDefused = 0xa7d;
    constexpr std::ptrdiff_t m_bUnstuckFromPlayer = 0xa7e;
    constexpr std::ptrdiff_t m_vecTargetedObjects = 0xa80;
    constexpr std::ptrdiff_t m_bResolvedParent = 0xac0;
    constexpr std::ptrdiff_t m_vecLastKnownValidPos = 0xac4;
    constexpr std::ptrdiff_t m_hDesiredParent = 0xad0;
    constexpr std::ptrdiff_t m_bBeingUsed = 0xad4;
}

namespace CBuoyancyHelper {
    constexpr std::ptrdiff_t m_flFluidDensity = 0x18;
    constexpr std::ptrdiff_t m_flDisplacementFromObjects = 0x1c;
}

namespace CBuyZone {
    constexpr std::ptrdiff_t m_LegacyTeamNum = 0x8a8;
}

namespace CC4 {
    constexpr std::ptrdiff_t m_vecLastValidPlayerHeldPosition = 0xe80;
    constexpr std::ptrdiff_t m_vecLastValidDroppedPosition = 0xe8c;
    constexpr std::ptrdiff_t m_bDoValidDroppedPositionCheck = 0xe98;
    constexpr std::ptrdiff_t m_bStartedArming = 0xe99;
    constexpr std::ptrdiff_t m_fArmedTime = 0xe9c;
    constexpr std::ptrdiff_t m_bBombPlacedAnimation = 0xea0;
    constexpr std::ptrdiff_t m_bShowC4LED = 0xea1;
    constexpr std::ptrdiff_t m_bIsPlantingViaUse = 0xea2;
    constexpr std::ptrdiff_t m_entitySpottedState = 0xea8;
    constexpr std::ptrdiff_t m_nSpotRules = 0xec0;
    constexpr std::ptrdiff_t m_bPlayedArmingBeeps = 0xec4;
    constexpr std::ptrdiff_t m_bBombPlanted = 0xecb;
    constexpr std::ptrdiff_t m_bDroppedFromDeath = 0xecc;
}

namespace CCSBot {
    constexpr std::ptrdiff_t m_lastCoopSpawnPoint = 0xd0;
    constexpr std::ptrdiff_t m_eyePosition = 0xe0;
    constexpr std::ptrdiff_t m_name = 0xec;
    constexpr std::ptrdiff_t m_combatRange = 0x12c;
    constexpr std::ptrdiff_t m_isRogue = 0x130;
    constexpr std::ptrdiff_t m_rogueTimer = 0x138;
    constexpr std::ptrdiff_t m_diedLastRound = 0x154;
    constexpr std::ptrdiff_t m_safeTime = 0x158;
    constexpr std::ptrdiff_t m_wasSafe = 0x15c;
    constexpr std::ptrdiff_t m_blindFire = 0x164;
    constexpr std::ptrdiff_t m_surpriseTimer = 0x168;
    constexpr std::ptrdiff_t m_bAllowActive = 0x180;
    constexpr std::ptrdiff_t m_isFollowing = 0x181;
    constexpr std::ptrdiff_t m_leader = 0x184;
    constexpr std::ptrdiff_t m_followTimestamp = 0x188;
    constexpr std::ptrdiff_t m_allowAutoFollowTime = 0x18c;
    constexpr std::ptrdiff_t m_hurryTimer = 0x190;
    constexpr std::ptrdiff_t m_alertTimer = 0x1a8;
    constexpr std::ptrdiff_t m_sneakTimer = 0x1c0;
    constexpr std::ptrdiff_t m_panicTimer = 0x1d8;
    constexpr std::ptrdiff_t m_stateTimestamp = 0x4d8;
    constexpr std::ptrdiff_t m_isAttacking = 0x4dc;
    constexpr std::ptrdiff_t m_isOpeningDoor = 0x4dd;
    constexpr std::ptrdiff_t m_taskEntity = 0x4e4;
    constexpr std::ptrdiff_t m_goalPosition = 0x4f4;
    constexpr std::ptrdiff_t m_goalEntity = 0x500;
    constexpr std::ptrdiff_t m_avoid = 0x504;
    constexpr std::ptrdiff_t m_avoidTimestamp = 0x508;
    constexpr std::ptrdiff_t m_isStopping = 0x50c;
    constexpr std::ptrdiff_t m_hasVisitedEnemySpawn = 0x50d;
    constexpr std::ptrdiff_t m_stillTimer = 0x510;
    constexpr std::ptrdiff_t m_bEyeAnglesUnderPathFinderControl = 0x520;
    constexpr std::ptrdiff_t m_pathIndex = 0x6618;
    constexpr std::ptrdiff_t m_areaEnteredTimestamp = 0x661c;
    constexpr std::ptrdiff_t m_repathTimer = 0x6620;
    constexpr std::ptrdiff_t m_avoidFriendTimer = 0x6638;
    constexpr std::ptrdiff_t m_isFriendInTheWay = 0x6650;
    constexpr std::ptrdiff_t m_politeTimer = 0x6658;
    constexpr std::ptrdiff_t m_isWaitingBehindFriend = 0x6670;
    constexpr std::ptrdiff_t m_pathLadderEnd = 0x669c;
    constexpr std::ptrdiff_t m_mustRunTimer = 0x66e8;
    constexpr std::ptrdiff_t m_waitTimer = 0x6700;
    constexpr std::ptrdiff_t m_updateTravelDistanceTimer = 0x6718;
    constexpr std::ptrdiff_t m_playerTravelDistance = 0x6730;
    constexpr std::ptrdiff_t m_travelDistancePhase = 0x6830;
    constexpr std::ptrdiff_t m_hostageEscortCount = 0x69c8;
    constexpr std::ptrdiff_t m_hostageEscortCountTimestamp = 0x69cc;
    constexpr std::ptrdiff_t m_desiredTeam = 0x69d0;
    constexpr std::ptrdiff_t m_hasJoined = 0x69d4;
    constexpr std::ptrdiff_t m_isWaitingForHostage = 0x69d5;
    constexpr std::ptrdiff_t m_inhibitWaitingForHostageTimer = 0x69d8;
    constexpr std::ptrdiff_t m_waitForHostageTimer = 0x69f0;
    constexpr std::ptrdiff_t m_noisePosition = 0x6a08;
    constexpr std::ptrdiff_t m_noiseTravelDistance = 0x6a14;
    constexpr std::ptrdiff_t m_noiseTimestamp = 0x6a18;
    constexpr std::ptrdiff_t m_noiseSource = 0x6a20;
    constexpr std::ptrdiff_t m_noiseBendTimer = 0x6a38;
    constexpr std::ptrdiff_t m_bentNoisePosition = 0x6a50;
    constexpr std::ptrdiff_t m_bendNoisePositionValid = 0x6a5c;
    constexpr std::ptrdiff_t m_lookAroundStateTimestamp = 0x6a60;
    constexpr std::ptrdiff_t m_lookAheadAngle = 0x6a64;
    constexpr std::ptrdiff_t m_forwardAngle = 0x6a68;
    constexpr std::ptrdiff_t m_inhibitLookAroundTimestamp = 0x6a6c;
    constexpr std::ptrdiff_t m_lookAtSpot = 0x6a74;
    constexpr std::ptrdiff_t m_lookAtSpotDuration = 0x6a84;
    constexpr std::ptrdiff_t m_lookAtSpotTimestamp = 0x6a88;
    constexpr std::ptrdiff_t m_lookAtSpotAngleTolerance = 0x6a8c;
    constexpr std::ptrdiff_t m_lookAtSpotClearIfClose = 0x6a90;
    constexpr std::ptrdiff_t m_lookAtSpotAttack = 0x6a91;
    constexpr std::ptrdiff_t m_lookAtDesc = 0x6a98;
    constexpr std::ptrdiff_t m_peripheralTimestamp = 0x6aa0;
    constexpr std::ptrdiff_t m_approachPointCount = 0x6c28;
    constexpr std::ptrdiff_t m_approachPointViewPosition = 0x6c2c;
    constexpr std::ptrdiff_t m_viewSteadyTimer = 0x6c38;
    constexpr std::ptrdiff_t m_tossGrenadeTimer = 0x6c50;
    constexpr std::ptrdiff_t m_isAvoidingGrenade = 0x6c70;
    constexpr std::ptrdiff_t m_spotCheckTimestamp = 0x6c90;
    constexpr std::ptrdiff_t m_checkedHidingSpotCount = 0x7098;
    constexpr std::ptrdiff_t m_lookPitch = 0x709c;
    constexpr std::ptrdiff_t m_lookPitchVel = 0x70a0;
    constexpr std::ptrdiff_t m_lookYaw = 0x70a4;
    constexpr std::ptrdiff_t m_lookYawVel = 0x70a8;
    constexpr std::ptrdiff_t m_targetSpot = 0x70ac;
    constexpr std::ptrdiff_t m_targetSpotVelocity = 0x70b8;
    constexpr std::ptrdiff_t m_targetSpotPredicted = 0x70c4;
    constexpr std::ptrdiff_t m_aimError = 0x70d0;
    constexpr std::ptrdiff_t m_aimGoal = 0x70dc;
    constexpr std::ptrdiff_t m_targetSpotTime = 0x70e8;
    constexpr std::ptrdiff_t m_aimFocus = 0x70ec;
    constexpr std::ptrdiff_t m_aimFocusInterval = 0x70f0;
    constexpr std::ptrdiff_t m_aimFocusNextUpdate = 0x70f4;
    constexpr std::ptrdiff_t m_ignoreEnemiesTimer = 0x7100;
    constexpr std::ptrdiff_t m_enemy = 0x7118;
    constexpr std::ptrdiff_t m_isEnemyVisible = 0x711c;
    constexpr std::ptrdiff_t m_visibleEnemyParts = 0x711d;
    constexpr std::ptrdiff_t m_lastEnemyPosition = 0x7120;
    constexpr std::ptrdiff_t m_lastSawEnemyTimestamp = 0x712c;
    constexpr std::ptrdiff_t m_firstSawEnemyTimestamp = 0x7130;
    constexpr std::ptrdiff_t m_currentEnemyAcquireTimestamp = 0x7134;
    constexpr std::ptrdiff_t m_enemyDeathTimestamp = 0x7138;
    constexpr std::ptrdiff_t m_friendDeathTimestamp = 0x713c;
    constexpr std::ptrdiff_t m_isLastEnemyDead = 0x7140;
    constexpr std::ptrdiff_t m_nearbyEnemyCount = 0x7144;
    constexpr std::ptrdiff_t m_bomber = 0x7350;
    constexpr std::ptrdiff_t m_nearbyFriendCount = 0x7354;
    constexpr std::ptrdiff_t m_closestVisibleFriend = 0x7358;
    constexpr std::ptrdiff_t m_closestVisibleHumanFriend = 0x735c;
    constexpr std::ptrdiff_t m_attentionInterval = 0x7360;
    constexpr std::ptrdiff_t m_attacker = 0x7370;
    constexpr std::ptrdiff_t m_attackedTimestamp = 0x7374;
    constexpr std::ptrdiff_t m_burnedByFlamesTimer = 0x7378;
    constexpr std::ptrdiff_t m_lastVictimID = 0x7388;
    constexpr std::ptrdiff_t m_isAimingAtEnemy = 0x738c;
    constexpr std::ptrdiff_t m_isRapidFiring = 0x738d;
    constexpr std::ptrdiff_t m_equipTimer = 0x7390;
    constexpr std::ptrdiff_t m_zoomTimer = 0x73a0;
    constexpr std::ptrdiff_t m_fireWeaponTimestamp = 0x73b8;
    constexpr std::ptrdiff_t m_lookForWeaponsOnGroundTimer = 0x73c0;
    constexpr std::ptrdiff_t m_bIsSleeping = 0x73d8;
    constexpr std::ptrdiff_t m_isEnemySniperVisible = 0x73d9;
    constexpr std::ptrdiff_t m_sawEnemySniperTimer = 0x73e0;
    constexpr std::ptrdiff_t m_enemyQueueIndex = 0x7498;
    constexpr std::ptrdiff_t m_enemyQueueCount = 0x7499;
    constexpr std::ptrdiff_t m_enemyQueueAttendIndex = 0x749a;
    constexpr std::ptrdiff_t m_isStuck = 0x749b;
    constexpr std::ptrdiff_t m_stuckTimestamp = 0x749c;
    constexpr std::ptrdiff_t m_stuckSpot = 0x74a0;
    constexpr std::ptrdiff_t m_wiggleTimer = 0x74b0;
    constexpr std::ptrdiff_t m_stuckJumpTimer = 0x74c8;
    constexpr std::ptrdiff_t m_nextCleanupCheckTimestamp = 0x74e0;
    constexpr std::ptrdiff_t m_avgVel = 0x74e4;
    constexpr std::ptrdiff_t m_avgVelIndex = 0x750c;
    constexpr std::ptrdiff_t m_avgVelCount = 0x7510;
    constexpr std::ptrdiff_t m_lastOrigin = 0x7514;
    constexpr std::ptrdiff_t m_lastRadioRecievedTimestamp = 0x7524;
    constexpr std::ptrdiff_t m_lastRadioSentTimestamp = 0x7528;
    constexpr std::ptrdiff_t m_radioSubject = 0x752c;
    constexpr std::ptrdiff_t m_radioPosition = 0x7530;
    constexpr std::ptrdiff_t m_voiceEndTimestamp = 0x753c;
    constexpr std::ptrdiff_t m_lastValidReactionQueueFrame = 0x7548;
}

namespace CCSEnvGunfire {
    constexpr std::ptrdiff_t m_iMinBurstSize = 0x4b0;
    constexpr std::ptrdiff_t m_iMaxBurstSize = 0x4b4;
    constexpr std::ptrdiff_t m_flMinBurstDelay = 0x4b8;
    constexpr std::ptrdiff_t m_flMaxBurstDelay = 0x4bc;
    constexpr std::ptrdiff_t m_flRateOfFire = 0x4c0;
    constexpr std::ptrdiff_t m_iszShootSound = 0x4c8;
    constexpr std::ptrdiff_t m_iszTracerType = 0x4d0;
    constexpr std::ptrdiff_t m_iszWeaponName = 0x4d8;
    constexpr std::ptrdiff_t m_bDisabled = 0x4e0;
    constexpr std::ptrdiff_t m_iShotsRemaining = 0x4e4;
    constexpr std::ptrdiff_t m_iSpread = 0x4e8;
    constexpr std::ptrdiff_t m_vecSpread = 0x4ec;
    constexpr std::ptrdiff_t m_vecTargetPosition = 0x4f4;
    constexpr std::ptrdiff_t m_flTargetDist = 0x500;
    constexpr std::ptrdiff_t m_flBias = 0x504;
    constexpr std::ptrdiff_t m_bCollide = 0x508;
    constexpr std::ptrdiff_t m_hTarget = 0x50c;
    constexpr std::ptrdiff_t m_bAllowNullTarget = 0x510;
    constexpr std::ptrdiff_t m_bAlwaysWallbangTracer = 0x511;
    constexpr std::ptrdiff_t m_flDamageScaleValue = 0x514;
    constexpr std::ptrdiff_t m_flAdditionalSpread = 0x518;
}

namespace CCSGOViewModel {
    constexpr std::ptrdiff_t m_bShouldIgnoreOffsetAndAccuracy = 0x978;
    constexpr std::ptrdiff_t m_nWeaponParity = 0x97c;
    constexpr std::ptrdiff_t m_nOldWeaponParity = 0x980;
}

namespace CCSGO_TeamPreviewCharacterPosition {
    constexpr std::ptrdiff_t m_nVariant = 0x4b0;
    constexpr std::ptrdiff_t m_nRandom = 0x4b4;
    constexpr std::ptrdiff_t m_nOrdinal = 0x4b8;
    constexpr std::ptrdiff_t m_sWeaponName = 0x4c0;
    constexpr std::ptrdiff_t m_xuid = 0x4c8;
    constexpr std::ptrdiff_t m_weaponItem = 0x4d0;
}

namespace CCSGameModeRules {
    constexpr std::ptrdiff_t __m_pChainEntity = 0x8;
}

namespace CCSGameModeRules_Deathmatch {
    constexpr std::ptrdiff_t m_bFirstThink = 0x30;
    constexpr std::ptrdiff_t m_bFirstThinkAfterConnected = 0x31;
    constexpr std::ptrdiff_t m_flDMBonusStartTime = 0x34;
    constexpr std::ptrdiff_t m_flDMBonusTimeLength = 0x38;
    constexpr std::ptrdiff_t m_nDMBonusWeaponLoadoutSlot = 0x3c;
}

namespace CCSGameRules {
    constexpr std::ptrdiff_t __m_pChainEntity = 0x98;
    constexpr std::ptrdiff_t m_coopMissionManager = 0xc0;
    constexpr std::ptrdiff_t m_bFreezePeriod = 0xc4;
    constexpr std::ptrdiff_t m_bWarmupPeriod = 0xc5;
    constexpr std::ptrdiff_t m_fWarmupPeriodEnd = 0xc8;
    constexpr std::ptrdiff_t m_fWarmupPeriodStart = 0xcc;
    constexpr std::ptrdiff_t m_nTotalPausedTicks = 0xd0;
    constexpr std::ptrdiff_t m_nPauseStartTick = 0xd4;
    constexpr std::ptrdiff_t m_bServerPaused = 0xd8;
    constexpr std::ptrdiff_t m_bGamePaused = 0xd9;
    constexpr std::ptrdiff_t m_bTerroristTimeOutActive = 0xda;
    constexpr std::ptrdiff_t m_bCTTimeOutActive = 0xdb;
    constexpr std::ptrdiff_t m_flTerroristTimeOutRemaining = 0xdc;
    constexpr std::ptrdiff_t m_flCTTimeOutRemaining = 0xe0;
    constexpr std::ptrdiff_t m_nTerroristTimeOuts = 0xe4;
    constexpr std::ptrdiff_t m_nCTTimeOuts = 0xe8;
    constexpr std::ptrdiff_t m_bTechnicalTimeOut = 0xec;
    constexpr std::ptrdiff_t m_bMatchWaitingForResume = 0xed;
    constexpr std::ptrdiff_t m_iRoundTime = 0xf0;
    constexpr std::ptrdiff_t m_fMatchStartTime = 0xf4;
    constexpr std::ptrdiff_t m_fRoundStartTime = 0xf8;
    constexpr std::ptrdiff_t m_flRestartRoundTime = 0xfc;
    constexpr std::ptrdiff_t m_bGameRestart = 0x100;
    constexpr std::ptrdiff_t m_flGameStartTime = 0x104;
    constexpr std::ptrdiff_t m_timeUntilNextPhaseStarts = 0x108;
    constexpr std::ptrdiff_t m_gamePhase = 0x10c;
    constexpr std::ptrdiff_t m_totalRoundsPlayed = 0x110;
    constexpr std::ptrdiff_t m_nRoundsPlayedThisPhase = 0x114;
    constexpr std::ptrdiff_t m_nOvertimePlaying = 0x118;
    constexpr std::ptrdiff_t m_iHostagesRemaining = 0x11c;
    constexpr std::ptrdiff_t m_bAnyHostageReached = 0x120;
    constexpr std::ptrdiff_t m_bMapHasBombTarget = 0x121;
    constexpr std::ptrdiff_t m_bMapHasRescueZone = 0x122;
    constexpr std::ptrdiff_t m_bMapHasBuyZone = 0x123;
    constexpr std::ptrdiff_t m_bIsQueuedMatchmaking = 0x124;
    constexpr std::ptrdiff_t m_nQueuedMatchmakingMode = 0x128;
    constexpr std::ptrdiff_t m_bIsValveDS = 0x12c;
    constexpr std::ptrdiff_t m_bLogoMap = 0x12d;
    constexpr std::ptrdiff_t m_bPlayAllStepSoundsOnServer = 0x12e;
    constexpr std::ptrdiff_t m_iNumGunGameProgressiveWeaponsCT = 0x130;
    constexpr std::ptrdiff_t m_iNumGunGameProgressiveWeaponsT = 0x134;
    constexpr std::ptrdiff_t m_iSpectatorSlotCount = 0x138;
    constexpr std::ptrdiff_t m_GGProgressiveWeaponOrderCT = 0x13c;
    constexpr std::ptrdiff_t m_GGProgressiveWeaponOrderT = 0x22c;
    constexpr std::ptrdiff_t m_GGProgressiveWeaponKillUpgradeOrderCT = 0x31c;
    constexpr std::ptrdiff_t m_GGProgressiveWeaponKillUpgradeOrderT = 0x40c;
    constexpr std::ptrdiff_t m_MatchDevice = 0x4fc;
    constexpr std::ptrdiff_t m_bHasMatchStarted = 0x500;
    constexpr std::ptrdiff_t m_nNextMapInMapgroup = 0x504;
    constexpr std::ptrdiff_t m_szTournamentEventName = 0x508;
    constexpr std::ptrdiff_t m_szTournamentEventStage = 0x708;
    constexpr std::ptrdiff_t m_szMatchStatTxt = 0x908;
    constexpr std::ptrdiff_t m_szTournamentPredictionsTxt = 0xb08;
    constexpr std::ptrdiff_t m_nTournamentPredictionsPct = 0xd08;
    constexpr std::ptrdiff_t m_flCMMItemDropRevealStartTime = 0xd0c;
    constexpr std::ptrdiff_t m_flCMMItemDropRevealEndTime = 0xd10;
    constexpr std::ptrdiff_t m_bIsDroppingItems = 0xd14;
    constexpr std::ptrdiff_t m_bIsQuestEligible = 0xd15;
    constexpr std::ptrdiff_t m_nGuardianModeWaveNumber = 0xd18;
    constexpr std::ptrdiff_t m_nGuardianModeSpecialKillsRemaining = 0xd1c;
    constexpr std::ptrdiff_t m_nGuardianModeSpecialWeaponNeeded = 0xd20;
    constexpr std::ptrdiff_t m_nGuardianGrenadesToGiveBots = 0xd24;
    constexpr std::ptrdiff_t m_nNumHeaviesToSpawn = 0xd28;
    constexpr std::ptrdiff_t m_numGlobalGiftsGiven = 0xd2c;
    constexpr std::ptrdiff_t m_numGlobalGifters = 0xd30;
    constexpr std::ptrdiff_t m_numGlobalGiftsPeriodSeconds = 0xd34;
    constexpr std::ptrdiff_t m_arrFeaturedGiftersAccounts = 0xd38;
    constexpr std::ptrdiff_t m_arrFeaturedGiftersGifts = 0xd48;
    constexpr std::ptrdiff_t m_arrProhibitedItemIndices = 0xd58;
    constexpr std::ptrdiff_t m_arrTournamentActiveCasterAccounts = 0xe20;
    constexpr std::ptrdiff_t m_numBestOfMaps = 0xe30;
    constexpr std::ptrdiff_t m_nHalloweenMaskListSeed = 0xe34;
    constexpr std::ptrdiff_t m_bBombDropped = 0xe38;
    constexpr std::ptrdiff_t m_bBombPlanted = 0xe39;
    constexpr std::ptrdiff_t m_iRoundWinStatus = 0xe3c;
    constexpr std::ptrdiff_t m_eRoundWinReason = 0xe40;
    constexpr std::ptrdiff_t m_bTCantBuy = 0xe44;
    constexpr std::ptrdiff_t m_bCTCantBuy = 0xe45;
    constexpr std::ptrdiff_t m_flGuardianBuyUntilTime = 0xe48;
    constexpr std::ptrdiff_t m_iMatchStats_RoundResults = 0xe4c;
    constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_CT = 0xec4;
    constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_T = 0xf3c;
    constexpr std::ptrdiff_t m_TeamRespawnWaveTimes = 0xfb4;
    constexpr std::ptrdiff_t m_flNextRespawnWave = 0x1034;
    constexpr std::ptrdiff_t m_nServerQuestID = 0x10b4;
    constexpr std::ptrdiff_t m_vMinimapMins = 0x10b8;
    constexpr std::ptrdiff_t m_vMinimapMaxs = 0x10c4;
    constexpr std::ptrdiff_t m_MinimapVerticalSectionHeights = 0x10d0;
    constexpr std::ptrdiff_t m_bDontIncrementCoopWave = 0x10f0;
    constexpr std::ptrdiff_t m_bSpawnedTerrorHuntHeavy = 0x10f1;
    constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteTypes = 0x10f4;
    constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteOptions = 0x111c;
    constexpr std::ptrdiff_t m_nEndMatchMapVoteWinner = 0x1144;
    constexpr std::ptrdiff_t m_iNumConsecutiveCTLoses = 0x1148;
    constexpr std::ptrdiff_t m_iNumConsecutiveTerroristLoses = 0x114c;
    constexpr std::ptrdiff_t m_bHasHostageBeenTouched = 0x1168;
    constexpr std::ptrdiff_t m_flIntermissionStartTime = 0x116c;
    constexpr std::ptrdiff_t m_flIntermissionEndTime = 0x1170;
    constexpr std::ptrdiff_t m_bLevelInitialized = 0x1174;
    constexpr std::ptrdiff_t m_iTotalRoundsPlayed = 0x1178;
    constexpr std::ptrdiff_t m_iUnBalancedRounds = 0x117c;
    constexpr std::ptrdiff_t m_endMatchOnRoundReset = 0x1180;
    constexpr std::ptrdiff_t m_endMatchOnThink = 0x1181;
    constexpr std::ptrdiff_t m_iFreezeTime = 0x1184;
    constexpr std::ptrdiff_t m_iNumTerrorist = 0x1188;
    constexpr std::ptrdiff_t m_iNumCT = 0x118c;
    constexpr std::ptrdiff_t m_iNumSpawnableTerrorist = 0x1190;
    constexpr std::ptrdiff_t m_iNumSpawnableCT = 0x1194;
    constexpr std::ptrdiff_t m_arrSelectedHostageSpawnIndices = 0x1198;
    constexpr std::ptrdiff_t m_bFirstConnected = 0x11b0;
    constexpr std::ptrdiff_t m_bCompleteReset = 0x11b1;
    constexpr std::ptrdiff_t m_bPickNewTeamsOnReset = 0x11b2;
    constexpr std::ptrdiff_t m_bScrambleTeamsOnRestart = 0x11b3;
    constexpr std::ptrdiff_t m_bSwapTeamsOnRestart = 0x11b4;
    constexpr std::ptrdiff_t m_nEndMatchTiedVotes = 0x11c0;
    constexpr std::ptrdiff_t m_bNeedToAskPlayersForContinueVote = 0x11dc;
    constexpr std::ptrdiff_t m_numQueuedMatchmakingAccounts = 0x11e0;
    constexpr std::ptrdiff_t m_pQueuedMatchmakingReservationString = 0x11e8;
    constexpr std::ptrdiff_t m_numTotalTournamentDrops = 0x11f0;
    constexpr std::ptrdiff_t m_numSpectatorsCountMax = 0x11f4;
    constexpr std::ptrdiff_t m_numSpectatorsCountMaxTV = 0x11f8;
    constexpr std::ptrdiff_t m_numSpectatorsCountMaxLnk = 0x11fc;
    constexpr std::ptrdiff_t m_bForceTeamChangeSilent = 0x1208;
    constexpr std::ptrdiff_t m_bLoadingRoundBackupData = 0x1209;
    constexpr std::ptrdiff_t m_nMatchInfoShowType = 0x1240;
    constexpr std::ptrdiff_t m_flMatchInfoDecidedTime = 0x1244;
    constexpr std::ptrdiff_t m_flCoopRespawnAndHealTime = 0x1260;
    constexpr std::ptrdiff_t m_coopBonusCoinsFound = 0x1264;
    constexpr std::ptrdiff_t m_coopBonusPistolsOnly = 0x1268;
    constexpr std::ptrdiff_t m_coopPlayersInDeploymentZone = 0x1269;
    constexpr std::ptrdiff_t m_coopMissionDeadPlayerRespawnEnabled = 0x126a;
    constexpr std::ptrdiff_t mTeamDMLastWinningTeamNumber = 0x126c;
    constexpr std::ptrdiff_t mTeamDMLastThinkTime = 0x1270;
    constexpr std::ptrdiff_t m_flTeamDMLastAnnouncementTime = 0x1274;
    constexpr std::ptrdiff_t m_iAccountTerrorist = 0x1278;
    constexpr std::ptrdiff_t m_iAccountCT = 0x127c;
    constexpr std::ptrdiff_t m_iSpawnPointCount_Terrorist = 0x1280;
    constexpr std::ptrdiff_t m_iSpawnPointCount_CT = 0x1284;
    constexpr std::ptrdiff_t m_iMaxNumTerrorists = 0x1288;
    constexpr std::ptrdiff_t m_iMaxNumCTs = 0x128c;
    constexpr std::ptrdiff_t m_iLoserBonus = 0x1290;
    constexpr std::ptrdiff_t m_iLoserBonusMostRecentTeam = 0x1294;
    constexpr std::ptrdiff_t m_tmNextPeriodicThink = 0x1298;
    constexpr std::ptrdiff_t m_bVoiceWonMatchBragFired = 0x129c;
    constexpr std::ptrdiff_t m_fWarmupNextChatNoticeTime = 0x12a0;
    constexpr std::ptrdiff_t m_iHostagesRescued = 0x12a8;
    constexpr std::ptrdiff_t m_iHostagesTouched = 0x12ac;
    constexpr std::ptrdiff_t m_flNextHostageAnnouncement = 0x12b0;
    constexpr std::ptrdiff_t m_bNoTerroristsKilled = 0x12b4;
    constexpr std::ptrdiff_t m_bNoCTsKilled = 0x12b5;
    constexpr std::ptrdiff_t m_bNoEnemiesKilled = 0x12b6;
    constexpr std::ptrdiff_t m_bCanDonateWeapons = 0x12b7;
    constexpr std::ptrdiff_t m_firstKillTime = 0x12bc;
    constexpr std::ptrdiff_t m_firstBloodTime = 0x12c4;
    constexpr std::ptrdiff_t m_hostageWasInjured = 0x12e0;
    constexpr std::ptrdiff_t m_hostageWasKilled = 0x12e1;
    constexpr std::ptrdiff_t m_bVoteCalled = 0x12f0;
    constexpr std::ptrdiff_t m_bServerVoteOnReset = 0x12f1;
    constexpr std::ptrdiff_t m_flVoteCheckThrottle = 0x12f4;
    constexpr std::ptrdiff_t m_bBuyTimeEnded = 0x12f8;
    constexpr std::ptrdiff_t m_nLastFreezeEndBeep = 0x12fc;
    constexpr std::ptrdiff_t m_bTargetBombed = 0x1300;
    constexpr std::ptrdiff_t m_bBombDefused = 0x1301;
    constexpr std::ptrdiff_t m_bMapHasBombZone = 0x1302;
    constexpr std::ptrdiff_t m_bGunGameRespawnWithBomb = 0x1303;
    constexpr std::ptrdiff_t m_fGunGameBombRespawnTimer = 0x1304;
    constexpr std::ptrdiff_t m_vecMainCTSpawnPos = 0x1324;
    constexpr std::ptrdiff_t m_CTSpawnPointsMasterList = 0x1330;
    constexpr std::ptrdiff_t m_TerroristSpawnPointsMasterList = 0x1348;
    constexpr std::ptrdiff_t m_iNextCTSpawnPoint = 0x1360;
    constexpr std::ptrdiff_t m_iNextTerroristSpawnPoint = 0x1364;
    constexpr std::ptrdiff_t m_CTSpawnPoints = 0x1368;
    constexpr std::ptrdiff_t m_TerroristSpawnPoints = 0x1380;
    constexpr std::ptrdiff_t m_bIsUnreservedGameServer = 0x1398;
    constexpr std::ptrdiff_t m_fAutobalanceDisplayTime = 0x139c;
    constexpr std::ptrdiff_t m_bAllowWeaponSwitch = 0x1608;
    constexpr std::ptrdiff_t m_bRoundTimeWarningTriggered = 0x1609;
    constexpr std::ptrdiff_t m_phaseChangeAnnouncementTime = 0x160c;
    constexpr std::ptrdiff_t m_fNextUpdateTeamClanNamesTime = 0x1610;
    constexpr std::ptrdiff_t m_flLastThinkTime = 0x1614;
    constexpr std::ptrdiff_t m_fAccumulatedRoundOffDamage = 0x1618;
    constexpr std::ptrdiff_t m_nShorthandedBonusLastEvalRound = 0x161c;
    constexpr std::ptrdiff_t m_bMatchAbortedDueToPlayerBan = 0x1898;
    constexpr std::ptrdiff_t m_bHasTriggeredRoundStartMusic = 0x1899;
    constexpr std::ptrdiff_t m_bHasTriggeredCoopSpawnReset = 0x189a;
    constexpr std::ptrdiff_t m_bSwitchingTeamsAtRoundReset = 0x189b;
    constexpr std::ptrdiff_t m_iMaxGunGameProgressiveWeaponIndex = 0x189c;
    constexpr std::ptrdiff_t m_pGameModeRules = 0x18b8;
    constexpr std::ptrdiff_t m_SurvivalRules = 0x18c0;
    constexpr std::ptrdiff_t m_BtGlobalBlackboard = 0x3558;
    constexpr std::ptrdiff_t m_hPlayerResource = 0x35c0;
    constexpr std::ptrdiff_t m_RetakeRules = 0x35c8;
    constexpr std::ptrdiff_t m_GuardianBotSkillLevelMax = 0x37ac;
    constexpr std::ptrdiff_t m_GuardianBotSkillLevelMin = 0x37b0;
    constexpr std::ptrdiff_t m_arrTeamUniqueKillWeaponsMatch = 0x37b8;
    constexpr std::ptrdiff_t m_bTeamLastKillUsedUniqueWeaponMatch = 0x3818;
    constexpr std::ptrdiff_t m_nMatchEndCount = 0x3840;
    constexpr std::ptrdiff_t m_nTTeamIntroVariant = 0x3844;
    constexpr std::ptrdiff_t m_nCTTeamIntroVariant = 0x3848;
    constexpr std::ptrdiff_t m_bTeamIntroPeriod = 0x384c;
    constexpr std::ptrdiff_t m_fTeamIntroPeriodEnd = 0x3850;
    constexpr std::ptrdiff_t m_bPlayedTeamIntroVO = 0x3854;
}

namespace CCSGameRulesProxy {
    constexpr std::ptrdiff_t m_pGameRules = 0x4b0;
}

namespace CCSPlace {
    constexpr std::ptrdiff_t m_name = 0x708;
}

namespace CCSPlayerController {
    constexpr std::ptrdiff_t m_pInGameMoneyServices = 0x6a0;
    constexpr std::ptrdiff_t m_pInventoryServices = 0x6a8;
    constexpr std::ptrdiff_t m_pActionTrackingServices = 0x6b0;
    constexpr std::ptrdiff_t m_pDamageServices = 0x6b8;
    constexpr std::ptrdiff_t m_iPing = 0x6c0;
    constexpr std::ptrdiff_t m_bHasCommunicationAbuseMute = 0x6c4;
    constexpr std::ptrdiff_t m_szCrosshairCodes = 0x6c8;
    constexpr std::ptrdiff_t m_iPendingTeamNum = 0x6d0;
    constexpr std::ptrdiff_t m_flForceTeamTime = 0x6d4;
    constexpr std::ptrdiff_t m_iCompTeammateColor = 0x6d8;
    constexpr std::ptrdiff_t m_bEverPlayedOnTeam = 0x6dc;
    constexpr std::ptrdiff_t m_bAttemptedToGetColor = 0x6dd;
    constexpr std::ptrdiff_t m_iTeammatePreferredColor = 0x6e0;
    constexpr std::ptrdiff_t m_bTeamChanged = 0x6e4;
    constexpr std::ptrdiff_t m_bInSwitchTeam = 0x6e5;
    constexpr std::ptrdiff_t m_bHasSeenJoinGame = 0x6e6;
    constexpr std::ptrdiff_t m_bJustBecameSpectator = 0x6e7;
    constexpr std::ptrdiff_t m_bSwitchTeamsOnNextRoundReset = 0x6e8;
    constexpr std::ptrdiff_t m_bRemoveAllItemsOnNextRoundReset = 0x6e9;
    constexpr std::ptrdiff_t m_szClan = 0x6f0;
    constexpr std::ptrdiff_t m_szClanName = 0x6f8;
    constexpr std::ptrdiff_t m_iCoachingTeam = 0x718;
    constexpr std::ptrdiff_t m_nPlayerDominated = 0x720;
    constexpr std::ptrdiff_t m_nPlayerDominatingMe = 0x728;
    constexpr std::ptrdiff_t m_iCompetitiveRanking = 0x730;
    constexpr std::ptrdiff_t m_iCompetitiveWins = 0x734;
    constexpr std::ptrdiff_t m_iCompetitiveRankType = 0x738;
    constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Win = 0x73c;
    constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Loss = 0x740;
    constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Tie = 0x744;
    constexpr std::ptrdiff_t m_nEndMatchNextMapVote = 0x748;
    constexpr std::ptrdiff_t m_unActiveQuestId = 0x74c;
    constexpr std::ptrdiff_t m_nQuestProgressReason = 0x750;
    constexpr std::ptrdiff_t m_unPlayerTvControlFlags = 0x754;
    constexpr std::ptrdiff_t m_iDraftIndex = 0x7c0;
    constexpr std::ptrdiff_t m_msQueuedModeDisconnectionTimestamp = 0x7c4;
    constexpr std::ptrdiff_t m_uiAbandonRecordedReason = 0x7c8;
    constexpr std::ptrdiff_t m_bEverFullyConnected = 0x7cc;
    constexpr std::ptrdiff_t m_bAbandonAllowsSurrender = 0x7cd;
    constexpr std::ptrdiff_t m_bAbandonOffersInstantSurrender = 0x7ce;
    constexpr std::ptrdiff_t m_bDisconnection1MinWarningPrinted = 0x7cf;
    constexpr std::ptrdiff_t m_bScoreReported = 0x7d0;
    constexpr std::ptrdiff_t m_nDisconnectionTick = 0x7d4;
    constexpr std::ptrdiff_t m_bControllingBot = 0x7e0;
    constexpr std::ptrdiff_t m_bHasControlledBotThisRound = 0x7e1;
    constexpr std::ptrdiff_t m_bHasBeenControlledByPlayerThisRound = 0x7e2;
    constexpr std::ptrdiff_t m_nBotsControlledThisRound = 0x7e4;
    constexpr std::ptrdiff_t m_bCanControlObservedBot = 0x7e8;
    constexpr std::ptrdiff_t m_hPlayerPawn = 0x7ec;
    constexpr std::ptrdiff_t m_hObserverPawn = 0x7f0;
    constexpr std::ptrdiff_t m_DesiredObserverMode = 0x7f4;
    constexpr std::ptrdiff_t m_hDesiredObserverTarget = 0x7f8;
    constexpr std::ptrdiff_t m_bPawnIsAlive = 0x7fc;
    constexpr std::ptrdiff_t m_iPawnHealth = 0x800;
    constexpr std::ptrdiff_t m_iPawnArmor = 0x804;
    constexpr std::ptrdiff_t m_bPawnHasDefuser = 0x808;
    constexpr std::ptrdiff_t m_bPawnHasHelmet = 0x809;
    constexpr std::ptrdiff_t m_nPawnCharacterDefIndex = 0x80a;
    constexpr std::ptrdiff_t m_iPawnLifetimeStart = 0x80c;
    constexpr std::ptrdiff_t m_iPawnLifetimeEnd = 0x810;
    constexpr std::ptrdiff_t m_iPawnGunGameLevel = 0x814;
    constexpr std::ptrdiff_t m_iPawnBotDifficulty = 0x818;
    constexpr std::ptrdiff_t m_hOriginalControllerOfCurrentPawn = 0x81c;
    constexpr std::ptrdiff_t m_iScore = 0x820;
    constexpr std::ptrdiff_t m_iRoundScore = 0x824;
    constexpr std::ptrdiff_t m_vecKills = 0x828;
    constexpr std::ptrdiff_t m_iMVPs = 0x840;
    constexpr std::ptrdiff_t m_nUpdateCounter = 0x844;
    constexpr std::ptrdiff_t m_lastHeldVoteTimer = 0xf8e8;
    constexpr std::ptrdiff_t m_bShowHints = 0xf900;
    constexpr std::ptrdiff_t m_iNextTimeCheck = 0xf904;
}

namespace CCSPlayerController_ActionTrackingServices {
    constexpr std::ptrdiff_t m_perRoundStats = 0x40;
    constexpr std::ptrdiff_t m_matchStats = 0x90;
    constexpr std::ptrdiff_t m_iNumRoundKills = 0x148;
    constexpr std::ptrdiff_t m_iNumRoundKillsHeadshots = 0x14c;
}

namespace CCSPlayerController_DamageServices {
    constexpr std::ptrdiff_t m_nSendUpdate = 0x40;
    constexpr std::ptrdiff_t m_DamageList = 0x48;
}

namespace CCSPlayerController_InGameMoneyServices {
    constexpr std::ptrdiff_t m_bReceivesMoneyNextRound = 0x40;
    constexpr std::ptrdiff_t m_iAccountMoneyEarnedForNextRound = 0x44;
    constexpr std::ptrdiff_t m_iAccount = 0x48;
    constexpr std::ptrdiff_t m_iStartAccount = 0x4c;
    constexpr std::ptrdiff_t m_iTotalCashSpent = 0x50;
    constexpr std::ptrdiff_t m_iCashSpentThisRound = 0x54;
}

namespace CCSPlayerController_InventoryServices {
    constexpr std::ptrdiff_t m_unMusicID = 0x40;
    constexpr std::ptrdiff_t m_rank = 0x44;
    constexpr std::ptrdiff_t m_nPersonaDataPublicLevel = 0x5c;
    constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsLeader = 0x60;
    constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsTeacher = 0x64;
    constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsFriendly = 0x68;
    constexpr std::ptrdiff_t m_unEquippedPlayerSprayIDs = 0xf48;
    constexpr std::ptrdiff_t m_vecTerroristLoadoutCache = 0xf50;
    constexpr std::ptrdiff_t m_vecCounterTerroristLoadoutCache = 0xfa0;
}

namespace CCSPlayerPawn {
    constexpr std::ptrdiff_t m_pParachuteServices = 0x16d0;
    constexpr std::ptrdiff_t m_pBulletServices = 0x16d8;
    constexpr std::ptrdiff_t m_pHostageServices = 0x16e0;
    constexpr std::ptrdiff_t m_pBuyServices = 0x16e8;
    constexpr std::ptrdiff_t m_pPingServices = 0x16f0;
    constexpr std::ptrdiff_t m_pRadioServices = 0x16f8;
    constexpr std::ptrdiff_t m_pDamageReactServices = 0x1700;
    constexpr std::ptrdiff_t m_iRetakesOffering = 0x17d0;
    constexpr std::ptrdiff_t m_iRetakesOfferingCard = 0x17d4;
    constexpr std::ptrdiff_t m_bRetakesHasDefuseKit = 0x17d8;
    constexpr std::ptrdiff_t m_bRetakesMVPLastRound = 0x17d9;
    constexpr std::ptrdiff_t m_iRetakesMVPBoostItem = 0x17dc;
    constexpr std::ptrdiff_t m_RetakesMVPBoostExtraUtility = 0x17e0;
    constexpr std::ptrdiff_t m_bIsBuyMenuOpen = 0x17e4;
    constexpr std::ptrdiff_t m_xLastHeadBoneTransform = 0x1d30;
    constexpr std::ptrdiff_t m_bLastHeadBoneTransformIsValid = 0x1d50;
    constexpr std::ptrdiff_t m_iPlayerLocked = 0x1d54;
    constexpr std::ptrdiff_t m_flNextSprayDecalTime = 0x1d5c;
    constexpr std::ptrdiff_t m_nRagdollDamageBone = 0x1d64;
    constexpr std::ptrdiff_t m_vRagdollDamageForce = 0x1d68;
    constexpr std::ptrdiff_t m_vRagdollDamagePosition = 0x1d74;
    constexpr std::ptrdiff_t m_szRagdollDamageWeaponName = 0x1d80;
    constexpr std::ptrdiff_t m_bRagdollDamageHeadshot = 0x1dc0;
    constexpr std::ptrdiff_t m_EconGloves = 0x1dc8;
    constexpr std::ptrdiff_t m_qDeathEyeAngles = 0x2040;
    constexpr std::ptrdiff_t m_bSkipOneHeadConstraintUpdate = 0x204c;
}

namespace CCSPlayerPawnBase {
    constexpr std::ptrdiff_t m_CTouchExpansionComponent = 0xc00;
    constexpr std::ptrdiff_t m_pActionTrackingServices = 0xc50;
    constexpr std::ptrdiff_t m_pViewModelServices = 0xc58;
    constexpr std::ptrdiff_t m_iDisplayHistoryBits = 0xc60;
    constexpr std::ptrdiff_t m_flLastAttackedTeammate = 0xc64;
    constexpr std::ptrdiff_t m_hOriginalController = 0xc68;
    constexpr std::ptrdiff_t m_blindUntilTime = 0xc6c;
    constexpr std::ptrdiff_t m_blindStartTime = 0xc70;
    constexpr std::ptrdiff_t m_allowAutoFollowTime = 0xc74;
    constexpr std::ptrdiff_t m_bHasFemaleVoice = 0xc78;
    constexpr std::ptrdiff_t m_entitySpottedState = 0xc80;
    constexpr std::ptrdiff_t m_nSpotRules = 0xc98;
    constexpr std::ptrdiff_t m_flTimeOfLastInjury = 0xc9c;
    constexpr std::ptrdiff_t m_nRelativeDirectionOfLastInjury = 0xca0;
    constexpr std::ptrdiff_t m_iPlayerState = 0xca4;
    constexpr std::ptrdiff_t m_chickenIdleSoundTimer = 0xcb0;
    constexpr std::ptrdiff_t m_chickenJumpSoundTimer = 0xcc8;
    constexpr std::ptrdiff_t m_vecLastBookmarkedPosition = 0xd80;
    constexpr std::ptrdiff_t m_flLastDistanceTraveledNotice = 0xd8c;
    constexpr std::ptrdiff_t m_flAccumulatedDistanceTraveled = 0xd90;
    constexpr std::ptrdiff_t m_flLastFriendlyFireDamageReductionRatio = 0xd94;
    constexpr std::ptrdiff_t m_bRespawning = 0xd98;
    constexpr std::ptrdiff_t m_iNumGunGameTRBombTotalPoints = 0xd9c;
    constexpr std::ptrdiff_t m_bShouldProgressGunGameTRBombModeWeapon = 0xda0;
    constexpr std::ptrdiff_t m_nLastPickupPriority = 0xda4;
    constexpr std::ptrdiff_t m_flLastPickupPriorityTime = 0xda8;
    constexpr std::ptrdiff_t m_passiveItems = 0xdac;
    constexpr std::ptrdiff_t m_bIsScoped = 0xdb0;
    constexpr std::ptrdiff_t m_bIsWalking = 0xdb1;
    constexpr std::ptrdiff_t m_bResumeZoom = 0xdb2;
    constexpr std::ptrdiff_t m_bIsDefusing = 0xdb3;
    constexpr std::ptrdiff_t m_bIsGrabbingHostage = 0xdb4;
    constexpr std::ptrdiff_t m_iBlockingUseActionInProgress = 0xdb8;
    constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTime = 0xdbc;
    constexpr std::ptrdiff_t m_bGunGameImmunity = 0xdc0;
    constexpr std::ptrdiff_t m_bMadeFinalGunGameProgressiveKill = 0xdc1;
    constexpr std::ptrdiff_t m_iGunGameProgressiveWeaponIndex = 0xdc4;
    constexpr std::ptrdiff_t m_iNumGunGameTRKillPoints = 0xdc8;
    constexpr std::ptrdiff_t m_iNumGunGameKillsWithCurrentWeapon = 0xdcc;
    constexpr std::ptrdiff_t m_unTotalRoundDamageDealt = 0xdd0;
    constexpr std::ptrdiff_t m_fMolotovDamageTime = 0xdd4;
    constexpr std::ptrdiff_t m_bHasMovedSinceSpawn = 0xdd8;
    constexpr std::ptrdiff_t m_bCanMoveDuringFreezePeriod = 0xdd9;
    constexpr std::ptrdiff_t m_isCurrentGunGameLeader = 0xdda;
    constexpr std::ptrdiff_t m_isCurrentGunGameTeamLeader = 0xddb;
    constexpr std::ptrdiff_t m_flGuardianTooFarDistFrac = 0xddc;
    constexpr std::ptrdiff_t m_flNextGuardianTooFarHurtTime = 0xde0;
    constexpr std::ptrdiff_t m_flDetectedByEnemySensorTime = 0xde4;
    constexpr std::ptrdiff_t m_bIsSpawnRappelling = 0xde8;
    constexpr std::ptrdiff_t m_vecSpawnRappellingRopeOrigin = 0xdec;
    constexpr std::ptrdiff_t m_nSurvivalTeam = 0xdf8;
    constexpr std::ptrdiff_t m_hSurvivalAssassinationTarget = 0xdfc;
    constexpr std::ptrdiff_t m_nCompletedSurvivalAssassinations = 0xe00;
    constexpr std::ptrdiff_t m_flDealtDamageToEnemyMostRecentTimestamp = 0xe04;
    constexpr std::ptrdiff_t m_flHealthShotBoostExpirationTime = 0xe08;
    constexpr std::ptrdiff_t m_flLastEquippedHelmetTime = 0xe0c;
    constexpr std::ptrdiff_t m_flLastEquippedArmorTime = 0xe10;
    constexpr std::ptrdiff_t m_nHeavyAssaultSuitCooldownRemaining = 0xe14;
    constexpr std::ptrdiff_t m_bResetArmorNextSpawn = 0xe18;
    constexpr std::ptrdiff_t m_flLastBumpMineBumpTime = 0xe1c;
    constexpr std::ptrdiff_t m_flEmitSoundTime = 0xe20;
    constexpr std::ptrdiff_t m_iNumSpawns = 0xe24;
    constexpr std::ptrdiff_t m_iShouldHaveCash = 0xe28;
    constexpr std::ptrdiff_t m_bJustKilledTeammate = 0xe2c;
    constexpr std::ptrdiff_t m_bPunishedForTK = 0xe2d;
    constexpr std::ptrdiff_t m_bInvalidSteamLogonDelayed = 0xe2e;
    constexpr std::ptrdiff_t m_iTeamKills = 0xe30;
    constexpr std::ptrdiff_t m_flLastAction = 0xe34;
    constexpr std::ptrdiff_t m_flNameChangeHistory = 0xe38;
    constexpr std::ptrdiff_t m_fLastGivenDefuserTime = 0xe4c;
    constexpr std::ptrdiff_t m_fLastGivenBombTime = 0xe50;
    constexpr std::ptrdiff_t m_bHasNightVision = 0xe54;
    constexpr std::ptrdiff_t m_bNightVisionOn = 0xe55;
    constexpr std::ptrdiff_t m_fNextRadarUpdateTime = 0xe58;
    constexpr std::ptrdiff_t m_flLastMoneyUpdateTime = 0xe5c;
    constexpr std::ptrdiff_t m_MenuStringBuffer = 0xe60;
    constexpr std::ptrdiff_t m_fIntroCamTime = 0x1260;
    constexpr std::ptrdiff_t m_nMyCollisionGroup = 0x1264;
    constexpr std::ptrdiff_t m_bInBombZone = 0x1268;
    constexpr std::ptrdiff_t m_bInBuyZone = 0x1269;
    constexpr std::ptrdiff_t m_bInNoDefuseArea = 0x126a;
    constexpr std::ptrdiff_t m_bKilledByTaser = 0x126b;
    constexpr std::ptrdiff_t m_iMoveState = 0x126c;
    constexpr std::ptrdiff_t m_nPreviousModelIndex = 0x1270;
    constexpr std::ptrdiff_t m_grenadeParameterStashTime = 0x1278;
    constexpr std::ptrdiff_t m_bGrenadeParametersStashed = 0x127c;
    constexpr std::ptrdiff_t m_angStashedShootAngles = 0x1280;
    constexpr std::ptrdiff_t m_vecStashedGrenadeThrowPosition = 0x128c;
    constexpr std::ptrdiff_t m_vecStashedVelocity = 0x1298;
    constexpr std::ptrdiff_t m_angShootAngleHistory = 0x12a4;
    constexpr std::ptrdiff_t m_vecThrowPositionHistory = 0x12bc;
    constexpr std::ptrdiff_t m_vecVelocityHistory = 0x12d4;
    constexpr std::ptrdiff_t m_nCharacterDefIndex = 0x12ec;
    constexpr std::ptrdiff_t m_bDiedAirborne = 0x12ee;
    constexpr std::ptrdiff_t m_iBombSiteIndex = 0x12f0;
    constexpr std::ptrdiff_t m_nWhichBombZone = 0x12f4;
    constexpr std::ptrdiff_t m_bInBombZoneTrigger = 0x12f8;
    constexpr std::ptrdiff_t m_bWasInBombZoneTrigger = 0x12f9;
    constexpr std::ptrdiff_t m_bWasInHostageRescueZone = 0x12fa;
    constexpr std::ptrdiff_t m_bWasInBuyZone = 0x12fb;
    constexpr std::ptrdiff_t m_bInHostageRescueZone = 0x12fc;
    constexpr std::ptrdiff_t m_flStamina = 0x1300;
    constexpr std::ptrdiff_t m_iDirection = 0x1304;
    constexpr std::ptrdiff_t m_iShotsFired = 0x1308;
    constexpr std::ptrdiff_t m_ArmorValue = 0x130c;
    constexpr std::ptrdiff_t m_flFlinchStack = 0x1310;
    constexpr std::ptrdiff_t m_flVelocityModifier = 0x1314;
    constexpr std::ptrdiff_t m_flHitHeading = 0x1318;
    constexpr std::ptrdiff_t m_nHitBodyPart = 0x131c;
    constexpr std::ptrdiff_t m_iHostagesKilled = 0x1320;
    constexpr std::ptrdiff_t m_vecTotalBulletForce = 0x1324;
    constexpr std::ptrdiff_t m_flFlashDuration = 0x1330;
    constexpr std::ptrdiff_t m_flFlashMaxAlpha = 0x1334;
    constexpr std::ptrdiff_t m_flProgressBarStartTime = 0x1338;
    constexpr std::ptrdiff_t m_iProgressBarDuration = 0x133c;
    constexpr std::ptrdiff_t m_bWaitForNoAttack = 0x1340;
    constexpr std::ptrdiff_t m_flLowerBodyYawTarget = 0x1344;
    constexpr std::ptrdiff_t m_bStrafing = 0x1348;
    constexpr std::ptrdiff_t m_lastStandingPos = 0x134c;
    constexpr std::ptrdiff_t m_ignoreLadderJumpTime = 0x1358;
    constexpr std::ptrdiff_t m_ladderSurpressionTimer = 0x1360;
    constexpr std::ptrdiff_t m_lastLadderNormal = 0x1378;
    constexpr std::ptrdiff_t m_lastLadderPos = 0x1384;
    constexpr std::ptrdiff_t m_thirdPersonHeading = 0x1390;
    constexpr std::ptrdiff_t m_flSlopeDropOffset = 0x139c;
    constexpr std::ptrdiff_t m_flSlopeDropHeight = 0x13a0;
    constexpr std::ptrdiff_t m_vHeadConstraintOffset = 0x13a4;
    constexpr std::ptrdiff_t m_iLastWeaponFireUsercmd = 0x13b8;
    constexpr std::ptrdiff_t m_angEyeAngles = 0x13bc;
    constexpr std::ptrdiff_t m_bVCollisionInitted = 0x13c8;
    constexpr std::ptrdiff_t m_storedSpawnPosition = 0x13cc;
    constexpr std::ptrdiff_t m_storedSpawnAngle = 0x13d8;
    constexpr std::ptrdiff_t m_bIsSpawning = 0x13e4;
    constexpr std::ptrdiff_t m_bHideTargetID = 0x13e5;
    constexpr std::ptrdiff_t m_nNumDangerZoneDamageHits = 0x13e8;
    constexpr std::ptrdiff_t m_bHud_MiniScoreHidden = 0x13ec;
    constexpr std::ptrdiff_t m_bHud_RadarHidden = 0x13ed;
    constexpr std::ptrdiff_t m_nLastKillerIndex = 0x13f0;
    constexpr std::ptrdiff_t m_nLastConcurrentKilled = 0x13f4;
    constexpr std::ptrdiff_t m_nDeathCamMusic = 0x13f8;
    constexpr std::ptrdiff_t m_iAddonBits = 0x13fc;
    constexpr std::ptrdiff_t m_iPrimaryAddon = 0x1400;
    constexpr std::ptrdiff_t m_iSecondaryAddon = 0x1404;
    constexpr std::ptrdiff_t m_nTeamDamageGivenForMatch = 0x1408;
    constexpr std::ptrdiff_t m_bTDGaveProtectionWarning = 0x140c;
    constexpr std::ptrdiff_t m_bTDGaveProtectionWarningThisRound = 0x140d;
    constexpr std::ptrdiff_t m_flLastTHWarningTime = 0x1410;
    constexpr std::ptrdiff_t m_currentDeafnessFilter = 0x1414;
    constexpr std::ptrdiff_t m_enemyPlayersKilledThisRound = 0x1418;
    constexpr std::ptrdiff_t m_NumEnemiesKilledThisSpawn = 0x1430;
    constexpr std::ptrdiff_t m_maxNumEnemiesKillStreak = 0x1434;
    constexpr std::ptrdiff_t m_NumEnemiesKilledThisRound = 0x1438;
    constexpr std::ptrdiff_t m_NumEnemiesAtRoundStart = 0x143c;
    constexpr std::ptrdiff_t m_iRoundsWon = 0x1440;
    constexpr std::ptrdiff_t m_lastRoundResult = 0x1444;
    constexpr std::ptrdiff_t m_wasNotKilledNaturally = 0x1448;
    constexpr std::ptrdiff_t m_vecPlayerPatchEconIndices = 0x144c;
    constexpr std::ptrdiff_t m_iDeathFlags = 0x1460;
    constexpr std::ptrdiff_t m_hPet = 0x1464;
    constexpr std::ptrdiff_t m_unCurrentEquipmentValue = 0x1630;
    constexpr std::ptrdiff_t m_unRoundStartEquipmentValue = 0x1632;
    constexpr std::ptrdiff_t m_unFreezetimeEndEquipmentValue = 0x1634;
    constexpr std::ptrdiff_t m_szLastPlaceName = 0x1636;
    constexpr std::ptrdiff_t m_nSuicides = 0x1648;
    constexpr std::ptrdiff_t m_nSurvivalTeamNumber = 0x164c;
    constexpr std::ptrdiff_t m_aimPunchAngle = 0x1650;
    constexpr std::ptrdiff_t m_aimPunchAngleVel = 0x165c;
    constexpr std::ptrdiff_t m_aimPunchTickBase = 0x1668;
    constexpr std::ptrdiff_t m_aimPunchTickFraction = 0x166c;
    constexpr std::ptrdiff_t m_aimPunchCache = 0x1670;
    constexpr std::ptrdiff_t m_bHasDeathInfo = 0x1688;
    constexpr std::ptrdiff_t m_flDeathInfoTime = 0x168c;
    constexpr std::ptrdiff_t m_vecDeathInfoOrigin = 0x1690;
    constexpr std::ptrdiff_t m_bKilledByHeadshot = 0x169c;
    constexpr std::ptrdiff_t m_LastHitBox = 0x16a0;
    constexpr std::ptrdiff_t m_LastHealth = 0x16a4;
    constexpr std::ptrdiff_t m_flLastCollisionCeiling = 0x16a8;
    constexpr std::ptrdiff_t m_flLastCollisionCeilingChangeTime = 0x16ac;
    constexpr std::ptrdiff_t m_strVOPrefix = 0x16b0;
    constexpr std::ptrdiff_t m_flLandseconds = 0x16b8;
    constexpr std::ptrdiff_t m_pBot = 0x16c0;
    constexpr std::ptrdiff_t m_bBotAllowActive = 0x16c8;
    constexpr std::ptrdiff_t m_bCommittingSuicideOnTeamChange = 0x16c9;
}

namespace CCSPlayerResource {
    constexpr std::ptrdiff_t m_bHostageAlive = 0x4b0;
    constexpr std::ptrdiff_t m_isHostageFollowingSomeone = 0x4bc;
    constexpr std::ptrdiff_t m_iHostageEntityIDs = 0x4c8;
    constexpr std::ptrdiff_t m_bombsiteCenterA = 0x4f8;
    constexpr std::ptrdiff_t m_bombsiteCenterB = 0x504;
    constexpr std::ptrdiff_t m_hostageRescueX = 0x510;
    constexpr std::ptrdiff_t m_hostageRescueY = 0x520;
    constexpr std::ptrdiff_t m_hostageRescueZ = 0x530;
    constexpr std::ptrdiff_t m_bEndMatchNextMapAllVoted = 0x540;
    constexpr std::ptrdiff_t m_foundGoalPositions = 0x541;
}

namespace CCSPlayer_ActionTrackingServices {
    constexpr std::ptrdiff_t m_hLastWeaponBeforeC4AutoSwitch = 0x230;
    constexpr std::ptrdiff_t m_bIsRescuing = 0x264;
    constexpr std::ptrdiff_t m_weaponPurchasesThisMatch = 0x268;
    constexpr std::ptrdiff_t m_weaponPurchasesThisRound = 0x2c0;
}

namespace CCSPlayer_BulletServices {
    constexpr std::ptrdiff_t m_totalHitsOnServer = 0x40;
}

namespace CCSPlayer_BuyServices {
    constexpr std::ptrdiff_t m_vecSellbackPurchaseEntries = 0xc8;
}

namespace CCSPlayer_CameraServices {
    constexpr std::ptrdiff_t m_iFOV = 0x170;
    constexpr std::ptrdiff_t m_iFOVStart = 0x174;
    constexpr std::ptrdiff_t m_flFOVTime = 0x178;
    constexpr std::ptrdiff_t m_flFOVRate = 0x17c;
    constexpr std::ptrdiff_t m_hZoomOwner = 0x180;
    constexpr std::ptrdiff_t m_hTriggerFogList = 0x188;
    constexpr std::ptrdiff_t m_hLastFogTrigger = 0x1a0;
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
    constexpr std::ptrdiff_t m_flMaxFallVelocity = 0x220;
    constexpr std::ptrdiff_t m_vecLadderNormal = 0x224;
    constexpr std::ptrdiff_t m_nLadderSurfacePropIndex = 0x230;
    constexpr std::ptrdiff_t m_flDuckAmount = 0x234;
    constexpr std::ptrdiff_t m_flDuckSpeed = 0x238;
    constexpr std::ptrdiff_t m_bDuckOverride = 0x23c;
    constexpr std::ptrdiff_t m_bDesiresDuck = 0x23d;
    constexpr std::ptrdiff_t m_flDuckOffset = 0x240;
    constexpr std::ptrdiff_t m_nDuckTimeMsecs = 0x244;
    constexpr std::ptrdiff_t m_nDuckJumpTimeMsecs = 0x248;
    constexpr std::ptrdiff_t m_nJumpTimeMsecs = 0x24c;
    constexpr std::ptrdiff_t m_flLastDuckTime = 0x250;
    constexpr std::ptrdiff_t m_vecLastPositionAtFullCrouchSpeed = 0x260;
    constexpr std::ptrdiff_t m_duckUntilOnGround = 0x268;
    constexpr std::ptrdiff_t m_bHasWalkMovedSinceLastJump = 0x269;
    constexpr std::ptrdiff_t m_bInStuckTest = 0x26a;
    constexpr std::ptrdiff_t m_flStuckCheckTime = 0x278;
    constexpr std::ptrdiff_t m_nTraceCount = 0x478;
    constexpr std::ptrdiff_t m_StuckLast = 0x47c;
    constexpr std::ptrdiff_t m_bSpeedCropped = 0x480;
    constexpr std::ptrdiff_t m_nOldWaterLevel = 0x484;
    constexpr std::ptrdiff_t m_flWaterEntryTime = 0x488;
    constexpr std::ptrdiff_t m_vecForward = 0x48c;
    constexpr std::ptrdiff_t m_vecLeft = 0x498;
    constexpr std::ptrdiff_t m_vecUp = 0x4a4;
    constexpr std::ptrdiff_t m_vecPreviouslyPredictedOrigin = 0x4b0;
    constexpr std::ptrdiff_t m_bMadeFootstepNoise = 0x4bc;
    constexpr std::ptrdiff_t m_iFootsteps = 0x4c0;
    constexpr std::ptrdiff_t m_nRoundFootstepsMade = 0x4c4;
    constexpr std::ptrdiff_t m_bOldJumpPressed = 0x4c8;
    constexpr std::ptrdiff_t m_flJumpPressedTime = 0x4cc;
    constexpr std::ptrdiff_t m_flJumpUntil = 0x4d0;
    constexpr std::ptrdiff_t m_flJumpVel = 0x4d4;
    constexpr std::ptrdiff_t m_fStashGrenadeParameterWhen = 0x4d8;
    constexpr std::ptrdiff_t m_nButtonDownMaskPrev = 0x4e0;
    constexpr std::ptrdiff_t m_flOffsetTickCompleteTime = 0x4e8;
    constexpr std::ptrdiff_t m_flOffsetTickStashedSpeed = 0x4ec;
}

namespace CCSPlayer_PingServices {
    constexpr std::ptrdiff_t m_flPlayerPingTokens = 0x40;
    constexpr std::ptrdiff_t m_hPlayerPing = 0x54;
}

namespace CCSPlayer_RadioServices {
    constexpr std::ptrdiff_t m_flGotHostageTalkTimer = 0x40;
    constexpr std::ptrdiff_t m_flDefusingTalkTimer = 0x44;
    constexpr std::ptrdiff_t m_flC4PlantTalkTimer = 0x48;
    constexpr std::ptrdiff_t m_flRadioTokenSlots = 0x4c;
    constexpr std::ptrdiff_t m_bIgnoreRadio = 0x58;
}

namespace CCSPlayer_UseServices {
    constexpr std::ptrdiff_t m_hLastKnownUseEntity = 0x40;
    constexpr std::ptrdiff_t m_flLastUseTimeStamp = 0x44;
    constexpr std::ptrdiff_t m_flTimeStartedHoldingUse = 0x48;
    constexpr std::ptrdiff_t m_flTimeLastUsedWindow = 0x4c;
}

namespace CCSPlayer_ViewModelServices {
    constexpr std::ptrdiff_t m_hViewModel = 0x40;
}

namespace CCSPlayer_WaterServices {
    constexpr std::ptrdiff_t m_NextDrownDamageTime = 0x40;
    constexpr std::ptrdiff_t m_nDrownDmgRate = 0x44;
    constexpr std::ptrdiff_t m_AirFinishedTime = 0x48;
    constexpr std::ptrdiff_t m_flWaterJumpTime = 0x4c;
    constexpr std::ptrdiff_t m_vecWaterJumpVel = 0x50;
    constexpr std::ptrdiff_t m_flSwimSoundTime = 0x5c;
}

namespace CCSPlayer_WeaponServices {
    constexpr std::ptrdiff_t m_flNextAttack = 0xb0;
    constexpr std::ptrdiff_t m_bIsLookingAtWeapon = 0xb4;
    constexpr std::ptrdiff_t m_bIsHoldingLookAtWeapon = 0xb5;
    constexpr std::ptrdiff_t m_hSavedWeapon = 0xb8;
    constexpr std::ptrdiff_t m_nTimeToMelee = 0xbc;
    constexpr std::ptrdiff_t m_nTimeToSecondary = 0xc0;
    constexpr std::ptrdiff_t m_nTimeToPrimary = 0xc4;
    constexpr std::ptrdiff_t m_nTimeToSniperRifle = 0xc8;
    constexpr std::ptrdiff_t m_bIsBeingGivenItem = 0xcc;
    constexpr std::ptrdiff_t m_bIsPickingUpItemWithUse = 0xcd;
    constexpr std::ptrdiff_t m_bPickedUpWeapon = 0xce;
}

namespace CCSPropExplodingBarrel {
    constexpr std::ptrdiff_t m_hBarrelTop = 0xc20;
    constexpr std::ptrdiff_t m_bExploded = 0xc24;
    constexpr std::ptrdiff_t m_nAccumulatedDamage = 0xc28;
}

namespace CCSPropExplodingBarrelTop {
    constexpr std::ptrdiff_t m_flOverrideAlpha = 0xc18;
}

namespace CCSTeam {
    constexpr std::ptrdiff_t m_nLastRecievedShorthandedRoundBonus = 0x568;
    constexpr std::ptrdiff_t m_nShorthandedRoundBonusStartRound = 0x56c;
    constexpr std::ptrdiff_t m_bSurrendered = 0x570;
    constexpr std::ptrdiff_t m_szTeamMatchStat = 0x571;
    constexpr std::ptrdiff_t m_numMapVictories = 0x774;
    constexpr std::ptrdiff_t m_scoreFirstHalf = 0x778;
    constexpr std::ptrdiff_t m_scoreSecondHalf = 0x77c;
    constexpr std::ptrdiff_t m_scoreOvertime = 0x780;
    constexpr std::ptrdiff_t m_szClanTeamname = 0x784;
    constexpr std::ptrdiff_t m_iClanID = 0x808;
    constexpr std::ptrdiff_t m_szTeamFlagImage = 0x80c;
    constexpr std::ptrdiff_t m_szTeamLogoImage = 0x814;
    constexpr std::ptrdiff_t m_flNextResourceTime = 0x81c;
    constexpr std::ptrdiff_t m_iLastUpdateSentAt = 0x820;
    constexpr std::ptrdiff_t m_flLastPlayerSortTime = 0x824;
    constexpr std::ptrdiff_t m_nLastGGLeader_CT = 0x828;
    constexpr std::ptrdiff_t m_nLastGGLeader_T = 0x82c;
    constexpr std::ptrdiff_t m_nGGLeaderSlot_CT = 0x830;
    constexpr std::ptrdiff_t m_nGGLeaderSlot_T = 0x834;
    constexpr std::ptrdiff_t m_bGGHasLeader_CT = 0x838;
    constexpr std::ptrdiff_t m_bGGHasLeader_T = 0x839;
}

namespace CChangeLevel {
    constexpr std::ptrdiff_t m_sMapName = 0x8a8;
    constexpr std::ptrdiff_t m_sLandmarkName = 0x8b0;
    constexpr std::ptrdiff_t m_OnChangeLevel = 0x8b8;
    constexpr std::ptrdiff_t m_bTouched = 0x8e0;
    constexpr std::ptrdiff_t m_bNoTouch = 0x8e1;
    constexpr std::ptrdiff_t m_bNewChapter = 0x8e2;
    constexpr std::ptrdiff_t m_bOnChangeLevelFired = 0x8e3;
}

namespace CChicken {
    constexpr std::ptrdiff_t m_AttributeManager = 0xbc8;
    constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0xe90;
    constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0xe94;
    constexpr std::ptrdiff_t m_updateTimer = 0xe98;
    constexpr std::ptrdiff_t m_stuckAnchor = 0xeb0;
    constexpr std::ptrdiff_t m_stuckTimer = 0xec0;
    constexpr std::ptrdiff_t m_collisionStuckTimer = 0xed8;
    constexpr std::ptrdiff_t m_isOnGround = 0xef0;
    constexpr std::ptrdiff_t m_activity = 0xef4;
    constexpr std::ptrdiff_t m_activityTimer = 0xef8;
    constexpr std::ptrdiff_t m_turnRate = 0xf10;
    constexpr std::ptrdiff_t m_fleeFrom = 0xf14;
    constexpr std::ptrdiff_t m_moveRateThrottleTimer = 0xf18;
    constexpr std::ptrdiff_t m_startleTimer = 0xf30;
    constexpr std::ptrdiff_t m_vocalizeTimer = 0xf48;
    constexpr std::ptrdiff_t m_flWhenZombified = 0xf60;
    constexpr std::ptrdiff_t m_jumpedThisFrame = 0xf64;
    constexpr std::ptrdiff_t m_leader = 0xf68;
    constexpr std::ptrdiff_t m_reuseTimer = 0xf70;
    constexpr std::ptrdiff_t m_hasBeenUsed = 0xf88;
    constexpr std::ptrdiff_t m_jumpTimer = 0xf90;
    constexpr std::ptrdiff_t m_flLastJumpTime = 0xfa8;
    constexpr std::ptrdiff_t m_bInJump = 0xfac;
    constexpr std::ptrdiff_t m_isWaitingForLeader = 0xfad;
    constexpr std::ptrdiff_t m_repathTimer = 0x2fb8;
    constexpr std::ptrdiff_t m_inhibitDoorTimer = 0x2fd0;
    constexpr std::ptrdiff_t m_inhibitObstacleAvoidanceTimer = 0x3060;
    constexpr std::ptrdiff_t m_vecPathGoal = 0x3080;
    constexpr std::ptrdiff_t m_flActiveFollowStartTime = 0x308c;
    constexpr std::ptrdiff_t m_followMinuteTimer = 0x3090;
    constexpr std::ptrdiff_t m_vecLastEggPoopPosition = 0x30a8;
    constexpr std::ptrdiff_t m_vecEggsPooped = 0x30b8;
    constexpr std::ptrdiff_t m_BlockDirectionTimer = 0x30d8;
}

namespace CCollisionProperty {
    constexpr std::ptrdiff_t m_collisionAttribute = 0x10;
    constexpr std::ptrdiff_t m_vecMins = 0x40;
    constexpr std::ptrdiff_t m_vecMaxs = 0x4c;
    constexpr std::ptrdiff_t m_usSolidFlags = 0x5a;
    constexpr std::ptrdiff_t m_nSolidType = 0x5b;
    constexpr std::ptrdiff_t m_triggerBloat = 0x5c;
    constexpr std::ptrdiff_t m_nSurroundType = 0x5d;
    constexpr std::ptrdiff_t m_CollisionGroup = 0x5e;
    constexpr std::ptrdiff_t m_nEnablePhysics = 0x5f;
    constexpr std::ptrdiff_t m_flBoundingRadius = 0x60;
    constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMins = 0x64;
    constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMaxs = 0x70;
    constexpr std::ptrdiff_t m_vecSurroundingMaxs = 0x7c;
    constexpr std::ptrdiff_t m_vecSurroundingMins = 0x88;
    constexpr std::ptrdiff_t m_vCapsuleCenter1 = 0x94;
    constexpr std::ptrdiff_t m_vCapsuleCenter2 = 0xa0;
    constexpr std::ptrdiff_t m_flCapsuleRadius = 0xac;
}

namespace CColorCorrection {
    constexpr std::ptrdiff_t m_flFadeInDuration = 0x4b0;
    constexpr std::ptrdiff_t m_flFadeOutDuration = 0x4b4;
    constexpr std::ptrdiff_t m_flStartFadeInWeight = 0x4b8;
    constexpr std::ptrdiff_t m_flStartFadeOutWeight = 0x4bc;
    constexpr std::ptrdiff_t m_flTimeStartFadeIn = 0x4c0;
    constexpr std::ptrdiff_t m_flTimeStartFadeOut = 0x4c4;
    constexpr std::ptrdiff_t m_flMaxWeight = 0x4c8;
    constexpr std::ptrdiff_t m_bStartDisabled = 0x4cc;
    constexpr std::ptrdiff_t m_bEnabled = 0x4cd;
    constexpr std::ptrdiff_t m_bMaster = 0x4ce;
    constexpr std::ptrdiff_t m_bClientSide = 0x4cf;
    constexpr std::ptrdiff_t m_bExclusive = 0x4d0;
    constexpr std::ptrdiff_t m_MinFalloff = 0x4d4;
    constexpr std::ptrdiff_t m_MaxFalloff = 0x4d8;
    constexpr std::ptrdiff_t m_flCurWeight = 0x4dc;
    constexpr std::ptrdiff_t m_netlookupFilename = 0x4e0;
    constexpr std::ptrdiff_t m_lookupFilename = 0x6e0;
}

namespace CColorCorrectionVolume {
    constexpr std::ptrdiff_t m_bEnabled = 0x8a8;
    constexpr std::ptrdiff_t m_MaxWeight = 0x8ac;
    constexpr std::ptrdiff_t m_FadeDuration = 0x8b0;
    constexpr std::ptrdiff_t m_bStartDisabled = 0x8b4;
    constexpr std::ptrdiff_t m_Weight = 0x8b8;
    constexpr std::ptrdiff_t m_lookupFilename = 0x8bc;
    constexpr std::ptrdiff_t m_LastEnterWeight = 0xabc;
    constexpr std::ptrdiff_t m_LastEnterTime = 0xac0;
    constexpr std::ptrdiff_t m_LastExitWeight = 0xac4;
    constexpr std::ptrdiff_t m_LastExitTime = 0xac8;
}

namespace CCommentaryAuto {
    constexpr std::ptrdiff_t m_OnCommentaryNewGame = 0x4b0;
    constexpr std::ptrdiff_t m_OnCommentaryMidGame = 0x4d8;
    constexpr std::ptrdiff_t m_OnCommentaryMultiplayerSpawn = 0x500;
}

namespace CCommentarySystem {
    constexpr std::ptrdiff_t m_bCommentaryConvarsChanging = 0x11;
    constexpr std::ptrdiff_t m_bCommentaryEnabledMidGame = 0x12;
    constexpr std::ptrdiff_t m_flNextTeleportTime = 0x14;
    constexpr std::ptrdiff_t m_iTeleportStage = 0x18;
    constexpr std::ptrdiff_t m_bCheatState = 0x1c;
    constexpr std::ptrdiff_t m_bIsFirstSpawnGroupToLoad = 0x1d;
    constexpr std::ptrdiff_t m_hCurrentNode = 0x38;
    constexpr std::ptrdiff_t m_hActiveCommentaryNode = 0x3c;
    constexpr std::ptrdiff_t m_hLastCommentaryNode = 0x40;
    constexpr std::ptrdiff_t m_vecNodes = 0x48;
}

namespace CConstantForceController {
    constexpr std::ptrdiff_t m_linear = 0xc;
    constexpr std::ptrdiff_t m_angular = 0x18;
    constexpr std::ptrdiff_t m_linearSave = 0x24;
    constexpr std::ptrdiff_t m_angularSave = 0x30;
}

namespace CConstraintAnchor {
    constexpr std::ptrdiff_t m_massScale = 0x930;
}

namespace CCopyRecipientFilter {
    constexpr std::ptrdiff_t m_Flags = 0x8;
    constexpr std::ptrdiff_t m_Recipients = 0x10;
}

namespace CCredits {
    constexpr std::ptrdiff_t m_OnCreditsDone = 0x4b0;
    constexpr std::ptrdiff_t m_bRolledOutroCredits = 0x4d8;
    constexpr std::ptrdiff_t m_flLogoLength = 0x4dc;
}

namespace CDZDoor {
    constexpr std::ptrdiff_t m_bIsSecurityDoor = 0xef8;
    constexpr std::ptrdiff_t m_hSpawnPoint = 0xefc;
    constexpr std::ptrdiff_t m_bPaidToUnlock = 0xf00;
    constexpr std::ptrdiff_t m_nPlayDoorOpenSound = 0xf04;
    constexpr std::ptrdiff_t m_nAttachmentIndex1 = 0xf38;
    constexpr std::ptrdiff_t m_nAttachmentIndex2 = 0xf39;
}

namespace CDamageRecord {
    constexpr std::ptrdiff_t m_PlayerDamager = 0x28;
    constexpr std::ptrdiff_t m_PlayerRecipient = 0x2c;
    constexpr std::ptrdiff_t m_hPlayerControllerDamager = 0x30;
    constexpr std::ptrdiff_t m_hPlayerControllerRecipient = 0x34;
    constexpr std::ptrdiff_t m_szPlayerDamagerName = 0x38;
    constexpr std::ptrdiff_t m_szPlayerRecipientName = 0x40;
    constexpr std::ptrdiff_t m_DamagerXuid = 0x48;
    constexpr std::ptrdiff_t m_RecipientXuid = 0x50;
    constexpr std::ptrdiff_t m_iDamage = 0x58;
    constexpr std::ptrdiff_t m_iActualHealthRemoved = 0x5c;
    constexpr std::ptrdiff_t m_iNumHits = 0x60;
    constexpr std::ptrdiff_t m_iLastBulletUpdate = 0x64;
    constexpr std::ptrdiff_t m_bIsOtherEnemy = 0x68;
    constexpr std::ptrdiff_t m_killType = 0x69;
}

namespace CDangerZone {
    constexpr std::ptrdiff_t m_vecDangerZoneOriginStartedAt = 0x4b0;
    constexpr std::ptrdiff_t m_flBombLaunchTime = 0x4bc;
    constexpr std::ptrdiff_t m_flExtraRadius = 0x4c0;
    constexpr std::ptrdiff_t m_flExtraRadiusStartTime = 0x4c4;
    constexpr std::ptrdiff_t m_flExtraRadiusTotalLerpTime = 0x4c8;
    constexpr std::ptrdiff_t m_nDropOrder = 0x4cc;
    constexpr std::ptrdiff_t m_iWave = 0x4d0;
    constexpr std::ptrdiff_t m_nMyZoneIndex = 0x4d4;
    constexpr std::ptrdiff_t m_nZoneNeighbors = 0x4d8;
}

namespace CDangerZoneController {
    constexpr std::ptrdiff_t m_bDangerZoneControllerEnabled = 0x4b0;
    constexpr std::ptrdiff_t m_bMissionControlledExplosions = 0x4b1;
    constexpr std::ptrdiff_t m_vecEndGameCircleStart = 0x4b4;
    constexpr std::ptrdiff_t m_vecEndGameCircleEnd = 0x4c0;
    constexpr std::ptrdiff_t m_flStartTime = 0x4cc;
    constexpr std::ptrdiff_t m_flFinalExpansionTime = 0x4d0;
    constexpr std::ptrdiff_t m_DangerZones = 0x4d4;
    constexpr std::ptrdiff_t m_flWaveEndTimes = 0x57c;
    constexpr std::ptrdiff_t m_hTheFinalZone = 0x590;
    constexpr std::ptrdiff_t m_flLastDangerZoneStatusLogged = 0x594;
    constexpr std::ptrdiff_t m_flLastDangerZoneDamageTime = 0x598;
    constexpr std::ptrdiff_t m_bFirstBombWarning = 0x59c;
    constexpr std::ptrdiff_t m_numWaveRewardsGranted = 0x5a0;
    constexpr std::ptrdiff_t m_pGasCanLaunchers = 0x5a8;
}

namespace CDebugHistory {
    constexpr std::ptrdiff_t m_nNpcEvents = 0x44f0;
}

namespace CDecoyProjectile {
    constexpr std::ptrdiff_t m_shotsRemaining = 0xad0;
    constexpr std::ptrdiff_t m_fExpireTime = 0xad4;
    constexpr std::ptrdiff_t m_decoyWeaponDefIndex = 0xae0;
}

namespace CDrone {
    constexpr std::ptrdiff_t m_hMoveToThisEntity = 0xc30;
    constexpr std::ptrdiff_t m_hDeliveryCargo = 0xc34;
    constexpr std::ptrdiff_t m_hRecentCargo = 0xc38;
    constexpr std::ptrdiff_t m_bPilotTakeoverAllowed = 0xc3c;
    constexpr std::ptrdiff_t m_hPotentialCargo = 0xc40;
    constexpr std::ptrdiff_t m_hCurrentPilot = 0xc44;
    constexpr std::ptrdiff_t m_vecTagPositions = 0xc48;
    constexpr std::ptrdiff_t m_vecTagIncrements = 0xd68;
    constexpr std::ptrdiff_t m_flLastUpdateTargetScanTime = 0xdc8;
    constexpr std::ptrdiff_t m_bWasControlledByPlayer = 0xdcc;
    constexpr std::ptrdiff_t m_bHovering = 0xdcd;
    constexpr std::ptrdiff_t m_pStateSound = 0xdd0;
    constexpr std::ptrdiff_t m_vecGroundOffset = 0xdd8;
    constexpr std::ptrdiff_t m_bQueuingOrders = 0xe00;
    constexpr std::ptrdiff_t m_flLastOrdersChangeTimestamp = 0xe04;
    constexpr std::ptrdiff_t m_vecLastKnownAcceleration = 0xe08;
    constexpr std::ptrdiff_t m_vecLastKnownVelocity = 0xe14;
    constexpr std::ptrdiff_t m_vecLastKnownAngImpulse = 0xe20;
    constexpr std::ptrdiff_t m_flLastKnownSpeed = 0xe2c;
    constexpr std::ptrdiff_t m_flMaxSpeed = 0xe30;
    constexpr std::ptrdiff_t m_vecCurrentDestination = 0xe34;
    constexpr std::ptrdiff_t m_flLastKnownDistanceToDestination = 0xe40;
    constexpr std::ptrdiff_t m_flLastKnownWaypointAccuracy = 0xe44;
    constexpr std::ptrdiff_t m_vecWaypointQueue = 0xe48;
    constexpr std::ptrdiff_t m_vecSparsePositionHistory = 0xe60;
    constexpr std::ptrdiff_t m_vecPositionHistory = 0xe78;
    constexpr std::ptrdiff_t m_vecUnstuckQueue = 0xe90;
    constexpr std::ptrdiff_t m_flLastKnownGroundHeight = 0xea8;
    constexpr std::ptrdiff_t m_GroundCheckTimer = 0xeb0;
    constexpr std::ptrdiff_t m_ActInjuredTimer = 0xec8;
    constexpr std::ptrdiff_t m_flPowerCutUntil = 0xee0;
    constexpr std::ptrdiff_t m_WanderTimer = 0xee8;
    constexpr std::ptrdiff_t m_flLastTimeSawAttackTarget = 0xf00;
    constexpr std::ptrdiff_t m_vecLastKnownAttackTargetPosition = 0xf04;
    constexpr std::ptrdiff_t m_hAttackTarget = 0xf10;
    constexpr std::ptrdiff_t m_IntervalThinkTimer = 0xf18;
    constexpr std::ptrdiff_t m_bDoIntervalThink = 0xf30;
    constexpr std::ptrdiff_t m_flLastDroppedGrenadeAt = 0xf34;
    constexpr std::ptrdiff_t m_flSpawnTimeStamp = 0xf38;
    constexpr std::ptrdiff_t m_bInPlayArea = 0xf3c;
    constexpr std::ptrdiff_t m_vecSpawnPosition = 0xf40;
    constexpr std::ptrdiff_t m_vecLastKnownMoveToEntityPosition = 0xf4c;
    constexpr std::ptrdiff_t m_tCargoCollisionGroup = 0xf58;
    constexpr std::ptrdiff_t m_flTimeArrivedAtMoveToEntity = 0xf5c;
    constexpr std::ptrdiff_t m_vecAvoidanceDir = 0xf60;
    constexpr std::ptrdiff_t m_flAvoidanceTime = 0xf6c;
    constexpr std::ptrdiff_t m_bUpgraded = 0xf70;
    constexpr std::ptrdiff_t m_hCargoOwner = 0xf74;
    constexpr std::ptrdiff_t m_vecPlayerControlThrust = 0xf80;
    constexpr std::ptrdiff_t m_flRopeLength = 0xf8c;
    constexpr std::ptrdiff_t m_bDidDropOnRoofWarning = 0xf90;
    constexpr std::ptrdiff_t m_flSelfDestructTime = 0xf94;
    constexpr std::ptrdiff_t m_bSelfDestructFire = 0xf98;
    constexpr std::ptrdiff_t m_bSelfDestructSpark = 0xf99;
    constexpr std::ptrdiff_t m_hLastKnownPilot = 0xf9c;
    constexpr std::ptrdiff_t m_bHasAlwaysBeenInZone = 0xfa0;
    constexpr std::ptrdiff_t m_nJammedAmount = 0xfa4;
    constexpr std::ptrdiff_t m_hPlayerThatOrderedMe = 0xfa8;
}

namespace CDronegun {
    constexpr std::ptrdiff_t m_vecAttentionTarget = 0x940;
    constexpr std::ptrdiff_t m_vecTargetOffset = 0x94c;
    constexpr std::ptrdiff_t m_bHasTarget = 0x958;
    constexpr std::ptrdiff_t m_vecAttentionCurrent = 0x95c;
    constexpr std::ptrdiff_t m_nPoseParamPitch = 0x968;
    constexpr std::ptrdiff_t m_nPoseParamYaw = 0x96c;
    constexpr std::ptrdiff_t m_bVarInit = 0x970;
    constexpr std::ptrdiff_t m_flDisorientEndTime = 0x974;
    constexpr std::ptrdiff_t m_hEnvGunfire = 0x990;
    constexpr std::ptrdiff_t m_flLastShootTime = 0x994;
    constexpr std::ptrdiff_t m_flLastSound1 = 0x998;
    constexpr std::ptrdiff_t m_flLastSound2 = 0x99c;
    constexpr std::ptrdiff_t m_flLastSound3 = 0x9a0;
    constexpr std::ptrdiff_t m_nAttachMuzzle = 0x9a4;
}

namespace CDynamicLight {
    constexpr std::ptrdiff_t m_ActualFlags = 0x700;
    constexpr std::ptrdiff_t m_Flags = 0x701;
    constexpr std::ptrdiff_t m_LightStyle = 0x702;
    constexpr std::ptrdiff_t m_On = 0x703;
    constexpr std::ptrdiff_t m_Radius = 0x704;
    constexpr std::ptrdiff_t m_Exponent = 0x708;
    constexpr std::ptrdiff_t m_InnerAngle = 0x70c;
    constexpr std::ptrdiff_t m_OuterAngle = 0x710;
    constexpr std::ptrdiff_t m_SpotRadius = 0x714;
}

namespace CDynamicProp {
    constexpr std::ptrdiff_t m_bCreateNavObstacle = 0xab0;
    constexpr std::ptrdiff_t m_bUseHitboxesForRenderBox = 0xab1;
    constexpr std::ptrdiff_t m_bUseAnimGraph = 0xab2;
    constexpr std::ptrdiff_t m_pOutputAnimBegun = 0xab8;
    constexpr std::ptrdiff_t m_pOutputAnimOver = 0xae0;
    constexpr std::ptrdiff_t m_pOutputAnimLoopCycleOver = 0xb08;
    constexpr std::ptrdiff_t m_OnAnimReachedStart = 0xb30;
    constexpr std::ptrdiff_t m_OnAnimReachedEnd = 0xb58;
    constexpr std::ptrdiff_t m_iszDefaultAnim = 0xb80;
    constexpr std::ptrdiff_t m_nDefaultAnimLoopMode = 0xb88;
    constexpr std::ptrdiff_t m_bAnimateOnServer = 0xb8c;
    constexpr std::ptrdiff_t m_bRandomizeCycle = 0xb8d;
    constexpr std::ptrdiff_t m_bStartDisabled = 0xb8e;
    constexpr std::ptrdiff_t m_bScriptedMovement = 0xb8f;
    constexpr std::ptrdiff_t m_bFiredStartEndOutput = 0xb90;
    constexpr std::ptrdiff_t m_bForceNpcExclude = 0xb91;
    constexpr std::ptrdiff_t m_bCreateNonSolid = 0xb92;
    constexpr std::ptrdiff_t m_bIsOverrideProp = 0xb93;
    constexpr std::ptrdiff_t m_iInitialGlowState = 0xb94;
    constexpr std::ptrdiff_t m_nGlowRange = 0xb98;
    constexpr std::ptrdiff_t m_nGlowRangeMin = 0xb9c;
    constexpr std::ptrdiff_t m_glowColor = 0xba0;
    constexpr std::ptrdiff_t m_nGlowTeam = 0xba4;
}

namespace CEconEntity {
    constexpr std::ptrdiff_t m_AttributeManager = 0x9d0;
    constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0xc98;
    constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0xc9c;
    constexpr std::ptrdiff_t m_nFallbackPaintKit = 0xca0;
    constexpr std::ptrdiff_t m_nFallbackSeed = 0xca4;
    constexpr std::ptrdiff_t m_flFallbackWear = 0xca8;
    constexpr std::ptrdiff_t m_nFallbackStatTrak = 0xcac;
    constexpr std::ptrdiff_t m_hOldProvidee = 0xcb0;
    constexpr std::ptrdiff_t m_iOldOwnerClass = 0xcb4;
}

namespace CEconItemAttribute {
    constexpr std::ptrdiff_t m_iAttributeDefinitionIndex = 0x30;
    constexpr std::ptrdiff_t m_flValue = 0x34;
    constexpr std::ptrdiff_t m_flInitialValue = 0x38;
    constexpr std::ptrdiff_t m_nRefundableCurrency = 0x3c;
    constexpr std::ptrdiff_t m_bSetBonus = 0x40;
}

namespace CEconItemView {
    constexpr std::ptrdiff_t m_iItemDefinitionIndex = 0x38;
    constexpr std::ptrdiff_t m_iEntityQuality = 0x3c;
    constexpr std::ptrdiff_t m_iEntityLevel = 0x40;
    constexpr std::ptrdiff_t m_iItemID = 0x48;
    constexpr std::ptrdiff_t m_iItemIDHigh = 0x50;
    constexpr std::ptrdiff_t m_iItemIDLow = 0x54;
    constexpr std::ptrdiff_t m_iAccountID = 0x58;
    constexpr std::ptrdiff_t m_iInventoryPosition = 0x5c;
    constexpr std::ptrdiff_t m_bInitialized = 0x68;
    constexpr std::ptrdiff_t m_AttributeList = 0x70;
    constexpr std::ptrdiff_t m_NetworkedDynamicAttributes = 0xd0;
    constexpr std::ptrdiff_t m_szCustomName = 0x130;
    constexpr std::ptrdiff_t m_szCustomNameOverride = 0x1d1;
}

namespace CEconWearable {
    constexpr std::ptrdiff_t m_nForceSkin = 0xcb8;
    constexpr std::ptrdiff_t m_bAlwaysAllow = 0xcbc;
}

namespace CEffectData {
    constexpr std::ptrdiff_t m_vOrigin = 0x8;
    constexpr std::ptrdiff_t m_vStart = 0x14;
    constexpr std::ptrdiff_t m_vNormal = 0x20;
    constexpr std::ptrdiff_t m_vAngles = 0x2c;
    constexpr std::ptrdiff_t m_hEntity = 0x38;
    constexpr std::ptrdiff_t m_hOtherEntity = 0x3c;
    constexpr std::ptrdiff_t m_flScale = 0x40;
    constexpr std::ptrdiff_t m_flMagnitude = 0x44;
    constexpr std::ptrdiff_t m_flRadius = 0x48;
    constexpr std::ptrdiff_t m_nSurfaceProp = 0x4c;
    constexpr std::ptrdiff_t m_nEffectIndex = 0x50;
    constexpr std::ptrdiff_t m_nDamageType = 0x58;
    constexpr std::ptrdiff_t m_nPenetrate = 0x5c;
    constexpr std::ptrdiff_t m_nMaterial = 0x5e;
    constexpr std::ptrdiff_t m_nHitBox = 0x60;
    constexpr std::ptrdiff_t m_nColor = 0x62;
    constexpr std::ptrdiff_t m_fFlags = 0x63;
    constexpr std::ptrdiff_t m_nAttachmentIndex = 0x64;
    constexpr std::ptrdiff_t m_nAttachmentName = 0x68;
    constexpr std::ptrdiff_t m_iEffectName = 0x6c;
    constexpr std::ptrdiff_t m_nExplosionType = 0x6e;
}

namespace CEntityDissolve {
    constexpr std::ptrdiff_t m_flFadeInStart = 0x700;
    constexpr std::ptrdiff_t m_flFadeInLength = 0x704;
    constexpr std::ptrdiff_t m_flFadeOutModelStart = 0x708;
    constexpr std::ptrdiff_t m_flFadeOutModelLength = 0x70c;
    constexpr std::ptrdiff_t m_flFadeOutStart = 0x710;
    constexpr std::ptrdiff_t m_flFadeOutLength = 0x714;
    constexpr std::ptrdiff_t m_flStartTime = 0x718;
    constexpr std::ptrdiff_t m_nDissolveType = 0x71c;
    constexpr std::ptrdiff_t m_vDissolverOrigin = 0x720;
    constexpr std::ptrdiff_t m_nMagnitude = 0x72c;
}

namespace CEntityFlame {
    constexpr std::ptrdiff_t m_hEntAttached = 0x4b0;
    constexpr std::ptrdiff_t m_bCheapEffect = 0x4b4;
    constexpr std::ptrdiff_t m_flSize = 0x4b8;
    constexpr std::ptrdiff_t m_bUseHitboxes = 0x4bc;
    constexpr std::ptrdiff_t m_iNumHitboxFires = 0x4c0;
    constexpr std::ptrdiff_t m_flHitboxFireScale = 0x4c4;
    constexpr std::ptrdiff_t m_flLifetime = 0x4c8;
    constexpr std::ptrdiff_t m_hAttacker = 0x4cc;
    constexpr std::ptrdiff_t m_iDangerSound = 0x4d0;
    constexpr std::ptrdiff_t m_flDirectDamagePerSecond = 0x4d4;
    constexpr std::ptrdiff_t m_iCustomDamageType = 0x4d8;
}

namespace CEntityIdentity {
    constexpr std::ptrdiff_t m_nameStringableIndex = 0x14;
    constexpr std::ptrdiff_t m_name = 0x18;
    constexpr std::ptrdiff_t m_designerName = 0x20;
    constexpr std::ptrdiff_t m_flags = 0x30;
    constexpr std::ptrdiff_t m_worldGroupId = 0x38;
    constexpr std::ptrdiff_t m_fDataObjectTypes = 0x3c;
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

namespace CEnvBeam {
    constexpr std::ptrdiff_t m_active = 0x7a0;
    constexpr std::ptrdiff_t m_spriteTexture = 0x7a8;
    constexpr std::ptrdiff_t m_iszStartEntity = 0x7b0;
    constexpr std::ptrdiff_t m_iszEndEntity = 0x7b8;
    constexpr std::ptrdiff_t m_life = 0x7c0;
    constexpr std::ptrdiff_t m_boltWidth = 0x7c4;
    constexpr std::ptrdiff_t m_noiseAmplitude = 0x7c8;
    constexpr std::ptrdiff_t m_speed = 0x7cc;
    constexpr std::ptrdiff_t m_restrike = 0x7d0;
    constexpr std::ptrdiff_t m_iszSpriteName = 0x7d8;
    constexpr std::ptrdiff_t m_frameStart = 0x7e0;
    constexpr std::ptrdiff_t m_vEndPointWorld = 0x7e4;
    constexpr std::ptrdiff_t m_vEndPointRelative = 0x7f0;
    constexpr std::ptrdiff_t m_radius = 0x7fc;
    constexpr std::ptrdiff_t m_TouchType = 0x800;
    constexpr std::ptrdiff_t m_iFilterName = 0x808;
    constexpr std::ptrdiff_t m_hFilter = 0x810;
    constexpr std::ptrdiff_t m_iszDecal = 0x818;
    constexpr std::ptrdiff_t m_OnTouchedByEntity = 0x820;
}

namespace CEnvBeverage {
    constexpr std::ptrdiff_t m_CanInDispenser = 0x4b0;
    constexpr std::ptrdiff_t m_nBeverageType = 0x4b4;
}

namespace CEnvCombinedLightProbeVolume {
    constexpr std::ptrdiff_t m_Color = 0x1580;
    constexpr std::ptrdiff_t m_flBrightness = 0x1584;
    constexpr std::ptrdiff_t m_hCubemapTexture = 0x1588;
    constexpr std::ptrdiff_t m_bCustomCubemapTexture = 0x1590;
    constexpr std::ptrdiff_t m_hLightProbeTexture = 0x1598;
    constexpr std::ptrdiff_t m_hLightProbeDirectLightIndicesTexture = 0x15a0;
    constexpr std::ptrdiff_t m_hLightProbeDirectLightScalarsTexture = 0x15a8;
    constexpr std::ptrdiff_t m_hLightProbeDirectLightShadowsTexture = 0x15b0;
    constexpr std::ptrdiff_t m_vBoxMins = 0x15b8;
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x15c4;
    constexpr std::ptrdiff_t m_LightGroups = 0x15d0;
    constexpr std::ptrdiff_t m_bMoveable = 0x15d8;
    constexpr std::ptrdiff_t m_nHandshake = 0x15dc;
    constexpr std::ptrdiff_t m_nEnvCubeMapArrayIndex = 0x15e0;
    constexpr std::ptrdiff_t m_nPriority = 0x15e4;
    constexpr std::ptrdiff_t m_bStartDisabled = 0x15e8;
    constexpr std::ptrdiff_t m_flEdgeFadeDist = 0x15ec;
    constexpr std::ptrdiff_t m_vEdgeFadeDists = 0x15f0;
    constexpr std::ptrdiff_t m_nLightProbeSizeX = 0x15fc;
    constexpr std::ptrdiff_t m_nLightProbeSizeY = 0x1600;
    constexpr std::ptrdiff_t m_nLightProbeSizeZ = 0x1604;
    constexpr std::ptrdiff_t m_nLightProbeAtlasX = 0x1608;
    constexpr std::ptrdiff_t m_nLightProbeAtlasY = 0x160c;
    constexpr std::ptrdiff_t m_nLightProbeAtlasZ = 0x1610;
    constexpr std::ptrdiff_t m_bEnabled = 0x1629;
}

namespace CEnvCubemap {
    constexpr std::ptrdiff_t m_hCubemapTexture = 0x5a0;
    constexpr std::ptrdiff_t m_bCustomCubemapTexture = 0x5a8;
    constexpr std::ptrdiff_t m_flInfluenceRadius = 0x5ac;
    constexpr std::ptrdiff_t m_vBoxProjectMins = 0x5b0;
    constexpr std::ptrdiff_t m_vBoxProjectMaxs = 0x5bc;
    constexpr std::ptrdiff_t m_LightGroups = 0x5c8;
    constexpr std::ptrdiff_t m_bMoveable = 0x5d0;
    constexpr std::ptrdiff_t m_nHandshake = 0x5d4;
    constexpr std::ptrdiff_t m_nEnvCubeMapArrayIndex = 0x5d8;
    constexpr std::ptrdiff_t m_nPriority = 0x5dc;
    constexpr std::ptrdiff_t m_flEdgeFadeDist = 0x5e0;
    constexpr std::ptrdiff_t m_vEdgeFadeDists = 0x5e4;
    constexpr std::ptrdiff_t m_flDiffuseScale = 0x5f0;
    constexpr std::ptrdiff_t m_bStartDisabled = 0x5f4;
    constexpr std::ptrdiff_t m_bDefaultEnvMap = 0x5f5;
    constexpr std::ptrdiff_t m_bDefaultSpecEnvMap = 0x5f6;
    constexpr std::ptrdiff_t m_bIndoorCubeMap = 0x5f7;
    constexpr std::ptrdiff_t m_bCopyDiffuseFromDefaultCubemap = 0x5f8;
    constexpr std::ptrdiff_t m_bEnabled = 0x608;
}

namespace CEnvCubemapFog {
    constexpr std::ptrdiff_t m_flEndDistance = 0x4b0;
    constexpr std::ptrdiff_t m_flStartDistance = 0x4b4;
    constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x4b8;
    constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x4bc;
    constexpr std::ptrdiff_t m_flFogHeightWidth = 0x4c0;
    constexpr std::ptrdiff_t m_flFogHeightEnd = 0x4c4;
    constexpr std::ptrdiff_t m_flFogHeightStart = 0x4c8;
    constexpr std::ptrdiff_t m_flFogHeightExponent = 0x4cc;
    constexpr std::ptrdiff_t m_flLODBias = 0x4d0;
    constexpr std::ptrdiff_t m_bActive = 0x4d4;
    constexpr std::ptrdiff_t m_bStartDisabled = 0x4d5;
    constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x4d8;
    constexpr std::ptrdiff_t m_nCubemapSourceType = 0x4dc;
    constexpr std::ptrdiff_t m_hSkyMaterial = 0x4e0;
    constexpr std::ptrdiff_t m_iszSkyEntity = 0x4e8;
    constexpr std::ptrdiff_t m_hFogCubemapTexture = 0x4f0;
    constexpr std::ptrdiff_t m_bHasHeightFogEnd = 0x4f8;
    constexpr std::ptrdiff_t m_bFirstTime = 0x4f9;
}

namespace CEnvDecal {
    constexpr std::ptrdiff_t m_hDecalMaterial = 0x700;
    constexpr std::ptrdiff_t m_flWidth = 0x708;
    constexpr std::ptrdiff_t m_flHeight = 0x70c;
    constexpr std::ptrdiff_t m_flDepth = 0x710;
    constexpr std::ptrdiff_t m_nRenderOrder = 0x714;
    constexpr std::ptrdiff_t m_bProjectOnWorld = 0x718;
    constexpr std::ptrdiff_t m_bProjectOnCharacters = 0x719;
    constexpr std::ptrdiff_t m_bProjectOnWater = 0x71a;
    constexpr std::ptrdiff_t m_flDepthSortBias = 0x71c;
}

namespace CEnvDetailController {
    constexpr std::ptrdiff_t m_flFadeStartDist = 0x4b0;
    constexpr std::ptrdiff_t m_flFadeEndDist = 0x4b4;
}

namespace CEnvEntityIgniter {
    constexpr std::ptrdiff_t m_flLifetime = 0x4b0;
}

namespace CEnvEntityMaker {
    constexpr std::ptrdiff_t m_vecEntityMins = 0x4b0;
    constexpr std::ptrdiff_t m_vecEntityMaxs = 0x4bc;
    constexpr std::ptrdiff_t m_hCurrentInstance = 0x4c8;
    constexpr std::ptrdiff_t m_hCurrentBlocker = 0x4cc;
    constexpr std::ptrdiff_t m_vecBlockerOrigin = 0x4d0;
    constexpr std::ptrdiff_t m_angPostSpawnDirection = 0x4dc;
    constexpr std::ptrdiff_t m_flPostSpawnDirectionVariance = 0x4e8;
    constexpr std::ptrdiff_t m_flPostSpawnSpeed = 0x4ec;
    constexpr std::ptrdiff_t m_bPostSpawnUseAngles = 0x4f0;
    constexpr std::ptrdiff_t m_iszTemplate = 0x4f8;
    constexpr std::ptrdiff_t m_pOutputOnSpawned = 0x500;
    constexpr std::ptrdiff_t m_pOutputOnFailedSpawn = 0x528;
}

namespace CEnvExplosion {
    constexpr std::ptrdiff_t m_iMagnitude = 0x700;
    constexpr std::ptrdiff_t m_flPlayerDamage = 0x704;
    constexpr std::ptrdiff_t m_iRadiusOverride = 0x708;
    constexpr std::ptrdiff_t m_flInnerRadius = 0x70c;
    constexpr std::ptrdiff_t m_spriteScale = 0x710;
    constexpr std::ptrdiff_t m_flDamageForce = 0x714;
    constexpr std::ptrdiff_t m_hInflictor = 0x718;
    constexpr std::ptrdiff_t m_iCustomDamageType = 0x71c;
    constexpr std::ptrdiff_t m_iszExplosionType = 0x728;
    constexpr std::ptrdiff_t m_iszCustomEffectName = 0x730;
    constexpr std::ptrdiff_t m_iszCustomSoundName = 0x738;
    constexpr std::ptrdiff_t m_iClassIgnore = 0x740;
    constexpr std::ptrdiff_t m_iClassIgnore2 = 0x744;
    constexpr std::ptrdiff_t m_iszEntityIgnoreName = 0x748;
    constexpr std::ptrdiff_t m_hEntityIgnore = 0x750;
}

namespace CEnvFade {
    constexpr std::ptrdiff_t m_fadeColor = 0x4b0;
    constexpr std::ptrdiff_t m_Duration = 0x4b4;
    constexpr std::ptrdiff_t m_HoldDuration = 0x4b8;
    constexpr std::ptrdiff_t m_OnBeginFade = 0x4c0;
}

namespace CEnvFireSensor {
    constexpr std::ptrdiff_t m_bEnabled = 0x4b0;
    constexpr std::ptrdiff_t m_bHeatAtLevel = 0x4b1;
    constexpr std::ptrdiff_t m_radius = 0x4b4;
    constexpr std::ptrdiff_t m_targetLevel = 0x4b8;
    constexpr std::ptrdiff_t m_targetTime = 0x4bc;
    constexpr std::ptrdiff_t m_levelTime = 0x4c0;
    constexpr std::ptrdiff_t m_OnHeatLevelStart = 0x4c8;
    constexpr std::ptrdiff_t m_OnHeatLevelEnd = 0x4f0;
}

namespace CEnvFireSource {
    constexpr std::ptrdiff_t m_bEnabled = 0x4b0;
    constexpr std::ptrdiff_t m_radius = 0x4b4;
    constexpr std::ptrdiff_t m_damage = 0x4b8;
}

namespace CEnvGasCanister {
    constexpr std::ptrdiff_t m_bLanded = 0x930;
    constexpr std::ptrdiff_t m_flDamageRadius = 0x934;
    constexpr std::ptrdiff_t m_flDamage = 0x938;
    constexpr std::ptrdiff_t m_bIncomingSoundStarted = 0x93c;
    constexpr std::ptrdiff_t m_bHasDetonated = 0x93d;
    constexpr std::ptrdiff_t m_bLaunched = 0x93e;
    constexpr std::ptrdiff_t m_OnLaunched = 0x940;
    constexpr std::ptrdiff_t m_OnImpacted = 0x968;
    constexpr std::ptrdiff_t m_OnOpened = 0x990;
    constexpr std::ptrdiff_t m_vecImpactPosition = 0x9b8;
    constexpr std::ptrdiff_t m_vecStartPosition = 0x9c4;
    constexpr std::ptrdiff_t m_vecEnterWorldPosition = 0x9d0;
    constexpr std::ptrdiff_t m_vecDirection = 0x9dc;
    constexpr std::ptrdiff_t m_vecStartAngles = 0x9e8;
    constexpr std::ptrdiff_t m_flFlightTime = 0x9f4;
    constexpr std::ptrdiff_t m_flFlightSpeed = 0x9f8;
    constexpr std::ptrdiff_t m_flLaunchTime = 0x9fc;
    constexpr std::ptrdiff_t m_flInitialZSpeed = 0xa00;
    constexpr std::ptrdiff_t m_flZAcceleration = 0xa04;
    constexpr std::ptrdiff_t m_flHorizSpeed = 0xa08;
    constexpr std::ptrdiff_t m_bLaunchedFromWithinWorld = 0xa0c;
    constexpr std::ptrdiff_t m_vecParabolaDirection = 0xa10;
    constexpr std::ptrdiff_t m_flWorldEnterTime = 0xa1c;
    constexpr std::ptrdiff_t m_vecSkyboxOrigin = 0xa20;
    constexpr std::ptrdiff_t m_flSkyboxScale = 0xa2c;
    constexpr std::ptrdiff_t m_bInSkybox = 0xa30;
    constexpr std::ptrdiff_t m_bDoImpactEffects = 0xa31;
    constexpr std::ptrdiff_t m_nMyZoneIndex = 0xa34;
    constexpr std::ptrdiff_t m_hSkyboxCopy = 0xa38;
    constexpr std::ptrdiff_t m_flLaunchHeight = 0xa3c;
}

namespace CEnvGlobal {
    constexpr std::ptrdiff_t m_outCounter = 0x4b0;
    constexpr std::ptrdiff_t m_globalstate = 0x4d8;
    constexpr std::ptrdiff_t m_triggermode = 0x4e0;
    constexpr std::ptrdiff_t m_initialstate = 0x4e4;
    constexpr std::ptrdiff_t m_counter = 0x4e8;
}

namespace CEnvHudHint {
    constexpr std::ptrdiff_t m_iszMessage = 0x4b0;
}

namespace CEnvInstructorHint {
    constexpr std::ptrdiff_t m_iszName = 0x4b0;
    constexpr std::ptrdiff_t m_iszReplace_Key = 0x4b8;
    constexpr std::ptrdiff_t m_iszHintTargetEntity = 0x4c0;
    constexpr std::ptrdiff_t m_iTimeout = 0x4c8;
    constexpr std::ptrdiff_t m_iDisplayLimit = 0x4cc;
    constexpr std::ptrdiff_t m_iszIcon_Onscreen = 0x4d0;
    constexpr std::ptrdiff_t m_iszIcon_Offscreen = 0x4d8;
    constexpr std::ptrdiff_t m_iszCaption = 0x4e0;
    constexpr std::ptrdiff_t m_iszActivatorCaption = 0x4e8;
    constexpr std::ptrdiff_t m_Color = 0x4f0;
    constexpr std::ptrdiff_t m_fIconOffset = 0x4f4;
    constexpr std::ptrdiff_t m_fRange = 0x4f8;
    constexpr std::ptrdiff_t m_iPulseOption = 0x4fc;
    constexpr std::ptrdiff_t m_iAlphaOption = 0x4fd;
    constexpr std::ptrdiff_t m_iShakeOption = 0x4fe;
    constexpr std::ptrdiff_t m_bStatic = 0x4ff;
    constexpr std::ptrdiff_t m_bNoOffscreen = 0x500;
    constexpr std::ptrdiff_t m_bForceCaption = 0x501;
    constexpr std::ptrdiff_t m_iInstanceType = 0x504;
    constexpr std::ptrdiff_t m_bSuppressRest = 0x508;
    constexpr std::ptrdiff_t m_iszBinding = 0x510;
    constexpr std::ptrdiff_t m_bAllowNoDrawTarget = 0x518;
    constexpr std::ptrdiff_t m_bAutoStart = 0x519;
    constexpr std::ptrdiff_t m_bLocalPlayerOnly = 0x51a;
}

namespace CEnvInstructorVRHint {
    constexpr std::ptrdiff_t m_iszName = 0x4b0;
    constexpr std::ptrdiff_t m_iszHintTargetEntity = 0x4b8;
    constexpr std::ptrdiff_t m_iTimeout = 0x4c0;
    constexpr std::ptrdiff_t m_iszCaption = 0x4c8;
    constexpr std::ptrdiff_t m_iszStartSound = 0x4d0;
    constexpr std::ptrdiff_t m_iLayoutFileType = 0x4d8;
    constexpr std::ptrdiff_t m_iszCustomLayoutFile = 0x4e0;
    constexpr std::ptrdiff_t m_iAttachType = 0x4e8;
    constexpr std::ptrdiff_t m_flHeightOffset = 0x4ec;
}

namespace CEnvLaser {
    constexpr std::ptrdiff_t m_iszLaserTarget = 0x7a0;
    constexpr std::ptrdiff_t m_pSprite = 0x7a8;
    constexpr std::ptrdiff_t m_iszSpriteName = 0x7b0;
    constexpr std::ptrdiff_t m_firePosition = 0x7b8;
    constexpr std::ptrdiff_t m_flStartFrame = 0x7c4;
}

namespace CEnvLightProbeVolume {
    constexpr std::ptrdiff_t m_hLightProbeTexture = 0x1490;
    constexpr std::ptrdiff_t m_hLightProbeDirectLightIndicesTexture = 0x1498;
    constexpr std::ptrdiff_t m_hLightProbeDirectLightScalarsTexture = 0x14a0;
    constexpr std::ptrdiff_t m_hLightProbeDirectLightShadowsTexture = 0x14a8;
    constexpr std::ptrdiff_t m_vBoxMins = 0x14b0;
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x14bc;
    constexpr std::ptrdiff_t m_LightGroups = 0x14c8;
    constexpr std::ptrdiff_t m_bMoveable = 0x14d0;
    constexpr std::ptrdiff_t m_nHandshake = 0x14d4;
    constexpr std::ptrdiff_t m_nPriority = 0x14d8;
    constexpr std::ptrdiff_t m_bStartDisabled = 0x14dc;
    constexpr std::ptrdiff_t m_nLightProbeSizeX = 0x14e0;
    constexpr std::ptrdiff_t m_nLightProbeSizeY = 0x14e4;
    constexpr std::ptrdiff_t m_nLightProbeSizeZ = 0x14e8;
    constexpr std::ptrdiff_t m_nLightProbeAtlasX = 0x14ec;
    constexpr std::ptrdiff_t m_nLightProbeAtlasY = 0x14f0;
    constexpr std::ptrdiff_t m_nLightProbeAtlasZ = 0x14f4;
    constexpr std::ptrdiff_t m_bEnabled = 0x1501;
}

namespace CEnvMicrophone {
    constexpr std::ptrdiff_t m_bDisabled = 0x4b0;
    constexpr std::ptrdiff_t m_hMeasureTarget = 0x4b4;
    constexpr std::ptrdiff_t m_nSoundMask = 0x4b8;
    constexpr std::ptrdiff_t m_flSensitivity = 0x4bc;
    constexpr std::ptrdiff_t m_flSmoothFactor = 0x4c0;
    constexpr std::ptrdiff_t m_flMaxRange = 0x4c4;
    constexpr std::ptrdiff_t m_iszSpeakerName = 0x4c8;
    constexpr std::ptrdiff_t m_hSpeaker = 0x4d0;
    constexpr std::ptrdiff_t m_bAvoidFeedback = 0x4d4;
    constexpr std::ptrdiff_t m_iSpeakerDSPPreset = 0x4d8;
    constexpr std::ptrdiff_t m_iszListenFilter = 0x4e0;
    constexpr std::ptrdiff_t m_hListenFilter = 0x4e8;
    constexpr std::ptrdiff_t m_SoundLevel = 0x4f0;
    constexpr std::ptrdiff_t m_OnRoutedSound = 0x518;
    constexpr std::ptrdiff_t m_OnHeardSound = 0x540;
    constexpr std::ptrdiff_t m_szLastSound = 0x568;
    constexpr std::ptrdiff_t m_iLastRoutedFrame = 0x668;
}

namespace CEnvMuzzleFlash {
    constexpr std::ptrdiff_t m_flScale = 0x4b0;
    constexpr std::ptrdiff_t m_iszParentAttachment = 0x4b8;
}

namespace CEnvParticleGlow {
    constexpr std::ptrdiff_t m_flAlphaScale = 0xc78;
    constexpr std::ptrdiff_t m_flRadiusScale = 0xc7c;
    constexpr std::ptrdiff_t m_flSelfIllumScale = 0xc80;
    constexpr std::ptrdiff_t m_ColorTint = 0xc84;
    constexpr std::ptrdiff_t m_hTextureOverride = 0xc88;
}

namespace CEnvProjectedTexture {
    constexpr std::ptrdiff_t m_hTargetEntity = 0x700;
    constexpr std::ptrdiff_t m_bState = 0x704;
    constexpr std::ptrdiff_t m_bAlwaysUpdate = 0x705;
    constexpr std::ptrdiff_t m_flLightFOV = 0x708;
    constexpr std::ptrdiff_t m_bEnableShadows = 0x70c;
    constexpr std::ptrdiff_t m_bSimpleProjection = 0x70d;
    constexpr std::ptrdiff_t m_bLightOnlyTarget = 0x70e;
    constexpr std::ptrdiff_t m_bLightWorld = 0x70f;
    constexpr std::ptrdiff_t m_bCameraSpace = 0x710;
    constexpr std::ptrdiff_t m_flBrightnessScale = 0x714;
    constexpr std::ptrdiff_t m_LightColor = 0x718;
    constexpr std::ptrdiff_t m_flIntensity = 0x71c;
    constexpr std::ptrdiff_t m_flLinearAttenuation = 0x720;
    constexpr std::ptrdiff_t m_flQuadraticAttenuation = 0x724;
    constexpr std::ptrdiff_t m_bVolumetric = 0x728;
    constexpr std::ptrdiff_t m_flNoiseStrength = 0x72c;
    constexpr std::ptrdiff_t m_flFlashlightTime = 0x730;
    constexpr std::ptrdiff_t m_nNumPlanes = 0x734;
    constexpr std::ptrdiff_t m_flPlaneOffset = 0x738;
    constexpr std::ptrdiff_t m_flVolumetricIntensity = 0x73c;
    constexpr std::ptrdiff_t m_flColorTransitionTime = 0x740;
    constexpr std::ptrdiff_t m_flAmbient = 0x744;
    constexpr std::ptrdiff_t m_SpotlightTextureName = 0x748;
    constexpr std::ptrdiff_t m_nSpotlightTextureFrame = 0x948;
    constexpr std::ptrdiff_t m_nShadowQuality = 0x94c;
    constexpr std::ptrdiff_t m_flNearZ = 0x950;
    constexpr std::ptrdiff_t m_flFarZ = 0x954;
    constexpr std::ptrdiff_t m_flProjectionSize = 0x958;
    constexpr std::ptrdiff_t m_flRotation = 0x95c;
    constexpr std::ptrdiff_t m_bFlipHorizontal = 0x960;
}

namespace CEnvScreenOverlay {
    constexpr std::ptrdiff_t m_iszOverlayNames = 0x4b0;
    constexpr std::ptrdiff_t m_flOverlayTimes = 0x500;
    constexpr std::ptrdiff_t m_flStartTime = 0x528;
    constexpr std::ptrdiff_t m_iDesiredOverlay = 0x52c;
    constexpr std::ptrdiff_t m_bIsActive = 0x530;
}

namespace CEnvShake {
    constexpr std::ptrdiff_t m_limitToEntity = 0x4b0;
    constexpr std::ptrdiff_t m_Amplitude = 0x4b8;
    constexpr std::ptrdiff_t m_Frequency = 0x4bc;
    constexpr std::ptrdiff_t m_Duration = 0x4c0;
    constexpr std::ptrdiff_t m_Radius = 0x4c4;
    constexpr std::ptrdiff_t m_stopTime = 0x4c8;
    constexpr std::ptrdiff_t m_nextShake = 0x4cc;
    constexpr std::ptrdiff_t m_currentAmp = 0x4d0;
    constexpr std::ptrdiff_t m_maxForce = 0x4d4;
    constexpr std::ptrdiff_t m_shakeCallback = 0x4e8;
}

namespace CEnvSky {
    constexpr std::ptrdiff_t m_hSkyMaterial = 0x700;
    constexpr std::ptrdiff_t m_hSkyMaterialLightingOnly = 0x708;
    constexpr std::ptrdiff_t m_bStartDisabled = 0x710;
    constexpr std::ptrdiff_t m_vTintColor = 0x711;
    constexpr std::ptrdiff_t m_vTintColorLightingOnly = 0x715;
    constexpr std::ptrdiff_t m_flBrightnessScale = 0x71c;
    constexpr std::ptrdiff_t m_nFogType = 0x720;
    constexpr std::ptrdiff_t m_flFogMinStart = 0x724;
    constexpr std::ptrdiff_t m_flFogMinEnd = 0x728;
    constexpr std::ptrdiff_t m_flFogMaxStart = 0x72c;
    constexpr std::ptrdiff_t m_flFogMaxEnd = 0x730;
    constexpr std::ptrdiff_t m_bEnabled = 0x734;
}

namespace CEnvSoundscape {
    constexpr std::ptrdiff_t m_OnPlay = 0x4b0;
    constexpr std::ptrdiff_t m_flRadius = 0x4d8;
    constexpr std::ptrdiff_t m_soundscapeName = 0x4e0;
    constexpr std::ptrdiff_t m_soundEventName = 0x4e8;
    constexpr std::ptrdiff_t m_bOverrideWithEvent = 0x4f0;
    constexpr std::ptrdiff_t m_soundscapeIndex = 0x4f4;
    constexpr std::ptrdiff_t m_soundscapeEntityListId = 0x4f8;
    constexpr std::ptrdiff_t m_soundEventHash = 0x4fc;
    constexpr std::ptrdiff_t m_positionNames = 0x500;
    constexpr std::ptrdiff_t m_hProxySoundscape = 0x540;
    constexpr std::ptrdiff_t m_bDisabled = 0x544;
}

namespace CEnvSoundscapeProxy {
    constexpr std::ptrdiff_t m_MainSoundscapeName = 0x548;
}

namespace CEnvSpark {
    constexpr std::ptrdiff_t m_flDelay = 0x4b0;
    constexpr std::ptrdiff_t m_nMagnitude = 0x4b4;
    constexpr std::ptrdiff_t m_nTrailLength = 0x4b8;
    constexpr std::ptrdiff_t m_nType = 0x4bc;
    constexpr std::ptrdiff_t m_OnSpark = 0x4c0;
}

namespace CEnvSplash {
    constexpr std::ptrdiff_t m_flScale = 0x4b0;
}

namespace CEnvTilt {
    constexpr std::ptrdiff_t m_Duration = 0x4b0;
    constexpr std::ptrdiff_t m_Radius = 0x4b4;
    constexpr std::ptrdiff_t m_TiltTime = 0x4b8;
    constexpr std::ptrdiff_t m_stopTime = 0x4bc;
}

namespace CEnvTracer {
    constexpr std::ptrdiff_t m_vecEnd = 0x4b0;
    constexpr std::ptrdiff_t m_flDelay = 0x4bc;
}

namespace CEnvViewPunch {
    constexpr std::ptrdiff_t m_flRadius = 0x4b0;
    constexpr std::ptrdiff_t m_angViewPunch = 0x4b4;
}

namespace CEnvVolumetricFogController {
    constexpr std::ptrdiff_t m_flScattering = 0x4b0;
    constexpr std::ptrdiff_t m_flAnisotropy = 0x4b4;
    constexpr std::ptrdiff_t m_flFadeSpeed = 0x4b8;
    constexpr std::ptrdiff_t m_flDrawDistance = 0x4bc;
    constexpr std::ptrdiff_t m_flFadeInStart = 0x4c0;
    constexpr std::ptrdiff_t m_flFadeInEnd = 0x4c4;
    constexpr std::ptrdiff_t m_flIndirectStrength = 0x4c8;
    constexpr std::ptrdiff_t m_nIndirectTextureDimX = 0x4cc;
    constexpr std::ptrdiff_t m_nIndirectTextureDimY = 0x4d0;
    constexpr std::ptrdiff_t m_nIndirectTextureDimZ = 0x4d4;
    constexpr std::ptrdiff_t m_vBoxMins = 0x4d8;
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x4e4;
    constexpr std::ptrdiff_t m_bActive = 0x4f0;
    constexpr std::ptrdiff_t m_flStartAnisoTime = 0x4f4;
    constexpr std::ptrdiff_t m_flStartScatterTime = 0x4f8;
    constexpr std::ptrdiff_t m_flStartDrawDistanceTime = 0x4fc;
    constexpr std::ptrdiff_t m_flStartAnisotropy = 0x500;
    constexpr std::ptrdiff_t m_flStartScattering = 0x504;
    constexpr std::ptrdiff_t m_flStartDrawDistance = 0x508;
    constexpr std::ptrdiff_t m_flDefaultAnisotropy = 0x50c;
    constexpr std::ptrdiff_t m_flDefaultScattering = 0x510;
    constexpr std::ptrdiff_t m_flDefaultDrawDistance = 0x514;
    constexpr std::ptrdiff_t m_bStartDisabled = 0x518;
    constexpr std::ptrdiff_t m_bEnableIndirect = 0x519;
    constexpr std::ptrdiff_t m_bIsMaster = 0x51a;
    constexpr std::ptrdiff_t m_hFogIndirectTexture = 0x520;
    constexpr std::ptrdiff_t m_nForceRefreshCount = 0x528;
    constexpr std::ptrdiff_t m_bFirstTime = 0x52c;
}

namespace CEnvVolumetricFogVolume {
    constexpr std::ptrdiff_t m_bActive = 0x4b0;
    constexpr std::ptrdiff_t m_vBoxMins = 0x4b4;
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x4c0;
    constexpr std::ptrdiff_t m_bStartDisabled = 0x4cc;
    constexpr std::ptrdiff_t m_flStrength = 0x4d0;
    constexpr std::ptrdiff_t m_nFalloffShape = 0x4d4;
    constexpr std::ptrdiff_t m_flFalloffExponent = 0x4d8;
}

namespace CEnvWind {
    constexpr std::ptrdiff_t m_EnvWindShared = 0x4b0;
}

namespace CEnvWindShared {
    constexpr std::ptrdiff_t m_flStartTime = 0x8;
    constexpr std::ptrdiff_t m_iWindSeed = 0xc;
    constexpr std::ptrdiff_t m_iMinWind = 0x10;
    constexpr std::ptrdiff_t m_iMaxWind = 0x12;
    constexpr std::ptrdiff_t m_windRadius = 0x14;
    constexpr std::ptrdiff_t m_iMinGust = 0x18;
    constexpr std::ptrdiff_t m_iMaxGust = 0x1a;
    constexpr std::ptrdiff_t m_flMinGustDelay = 0x1c;
    constexpr std::ptrdiff_t m_flMaxGustDelay = 0x20;
    constexpr std::ptrdiff_t m_flGustDuration = 0x24;
    constexpr std::ptrdiff_t m_iGustDirChange = 0x28;
    constexpr std::ptrdiff_t m_location = 0x2c;
    constexpr std::ptrdiff_t m_iszGustSound = 0x38;
    constexpr std::ptrdiff_t m_iWindDir = 0x3c;
    constexpr std::ptrdiff_t m_flWindSpeed = 0x40;
    constexpr std::ptrdiff_t m_currentWindVector = 0x44;
    constexpr std::ptrdiff_t m_CurrentSwayVector = 0x50;
    constexpr std::ptrdiff_t m_PrevSwayVector = 0x5c;
    constexpr std::ptrdiff_t m_iInitialWindDir = 0x68;
    constexpr std::ptrdiff_t m_flInitialWindSpeed = 0x6c;
    constexpr std::ptrdiff_t m_OnGustStart = 0x70;
    constexpr std::ptrdiff_t m_OnGustEnd = 0x98;
    constexpr std::ptrdiff_t m_flVariationTime = 0xc0;
    constexpr std::ptrdiff_t m_flSwayTime = 0xc4;
    constexpr std::ptrdiff_t m_flSimTime = 0xc8;
    constexpr std::ptrdiff_t m_flSwitchTime = 0xcc;
    constexpr std::ptrdiff_t m_flAveWindSpeed = 0xd0;
    constexpr std::ptrdiff_t m_bGusting = 0xd4;
    constexpr std::ptrdiff_t m_flWindAngleVariation = 0xd8;
    constexpr std::ptrdiff_t m_flWindSpeedVariation = 0xdc;
    constexpr std::ptrdiff_t m_iEntIndex = 0xe0;
}

namespace CEnvWindShared_WindAveEvent_t {
    constexpr std::ptrdiff_t m_flStartWindSpeed = 0x0;
    constexpr std::ptrdiff_t m_flAveWindSpeed = 0x4;
}

namespace CEnvWindShared_WindVariationEvent_t {
    constexpr std::ptrdiff_t m_flWindAngleVariation = 0x0;
    constexpr std::ptrdiff_t m_flWindSpeedVariation = 0x4;
}

namespace CFilterAttributeInt {
    constexpr std::ptrdiff_t m_sAttributeName = 0x508;
}

namespace CFilterClass {
    constexpr std::ptrdiff_t m_iFilterClass = 0x508;
}

namespace CFilterContext {
    constexpr std::ptrdiff_t m_iFilterContext = 0x508;
}

namespace CFilterEnemy {
    constexpr std::ptrdiff_t m_iszEnemyName = 0x508;
    constexpr std::ptrdiff_t m_flRadius = 0x510;
    constexpr std::ptrdiff_t m_flOuterRadius = 0x514;
    constexpr std::ptrdiff_t m_nMaxSquadmatesPerEnemy = 0x518;
    constexpr std::ptrdiff_t m_iszPlayerName = 0x520;
}

namespace CFilterMassGreater {
    constexpr std::ptrdiff_t m_fFilterMass = 0x508;
}

namespace CFilterModel {
    constexpr std::ptrdiff_t m_iFilterModel = 0x508;
}

namespace CFilterMultiple {
    constexpr std::ptrdiff_t m_nFilterType = 0x508;
    constexpr std::ptrdiff_t m_iFilterName = 0x510;
    constexpr std::ptrdiff_t m_hFilter = 0x560;
    constexpr std::ptrdiff_t m_nFilterCount = 0x588;
}

namespace CFilterName {
    constexpr std::ptrdiff_t m_iFilterName = 0x508;
}

namespace CFilterProximity {
    constexpr std::ptrdiff_t m_flRadius = 0x508;
}

namespace CFire {
    constexpr std::ptrdiff_t m_hEffect = 0x700;
    constexpr std::ptrdiff_t m_hOwner = 0x704;
    constexpr std::ptrdiff_t m_nFireType = 0x708;
    constexpr std::ptrdiff_t m_flFuel = 0x70c;
    constexpr std::ptrdiff_t m_flDamageTime = 0x710;
    constexpr std::ptrdiff_t m_lastDamage = 0x714;
    constexpr std::ptrdiff_t m_flFireSize = 0x718;
    constexpr std::ptrdiff_t m_flLastNavUpdateTime = 0x71c;
    constexpr std::ptrdiff_t m_flHeatLevel = 0x720;
    constexpr std::ptrdiff_t m_flHeatAbsorb = 0x724;
    constexpr std::ptrdiff_t m_flDamageScale = 0x728;
    constexpr std::ptrdiff_t m_flMaxHeat = 0x72c;
    constexpr std::ptrdiff_t m_flLastHeatLevel = 0x730;
    constexpr std::ptrdiff_t m_flAttackTime = 0x734;
    constexpr std::ptrdiff_t m_bEnabled = 0x738;
    constexpr std::ptrdiff_t m_bStartDisabled = 0x739;
    constexpr std::ptrdiff_t m_bDidActivate = 0x73a;
    constexpr std::ptrdiff_t m_OnIgnited = 0x740;
    constexpr std::ptrdiff_t m_OnExtinguished = 0x768;
}

namespace CFireSmoke {
    constexpr std::ptrdiff_t m_nFlameModelIndex = 0x4c0;
    constexpr std::ptrdiff_t m_nFlameFromAboveModelIndex = 0x4c4;
}

namespace CFiringModeFloat {
    constexpr std::ptrdiff_t m_flValues = 0x0;
}

namespace CFiringModeInt {
    constexpr std::ptrdiff_t m_nValues = 0x0;
}

namespace CFish {
    constexpr std::ptrdiff_t m_pool = 0x930;
    constexpr std::ptrdiff_t m_id = 0x934;
    constexpr std::ptrdiff_t m_x = 0x938;
    constexpr std::ptrdiff_t m_y = 0x93c;
    constexpr std::ptrdiff_t m_z = 0x940;
    constexpr std::ptrdiff_t m_angle = 0x944;
    constexpr std::ptrdiff_t m_angleChange = 0x948;
    constexpr std::ptrdiff_t m_forward = 0x94c;
    constexpr std::ptrdiff_t m_perp = 0x958;
    constexpr std::ptrdiff_t m_poolOrigin = 0x964;
    constexpr std::ptrdiff_t m_waterLevel = 0x970;
    constexpr std::ptrdiff_t m_speed = 0x974;
    constexpr std::ptrdiff_t m_desiredSpeed = 0x978;
    constexpr std::ptrdiff_t m_calmSpeed = 0x97c;
    constexpr std::ptrdiff_t m_panicSpeed = 0x980;
    constexpr std::ptrdiff_t m_avoidRange = 0x984;
    constexpr std::ptrdiff_t m_turnTimer = 0x988;
    constexpr std::ptrdiff_t m_turnClockwise = 0x9a0;
    constexpr std::ptrdiff_t m_goTimer = 0x9a8;
    constexpr std::ptrdiff_t m_moveTimer = 0x9c0;
    constexpr std::ptrdiff_t m_panicTimer = 0x9d8;
    constexpr std::ptrdiff_t m_disperseTimer = 0x9f0;
    constexpr std::ptrdiff_t m_proximityTimer = 0xa08;
    constexpr std::ptrdiff_t m_visible = 0xa20;
}

namespace CFishPool {
    constexpr std::ptrdiff_t m_fishCount = 0x4c0;
    constexpr std::ptrdiff_t m_maxRange = 0x4c4;
    constexpr std::ptrdiff_t m_swimDepth = 0x4c8;
    constexpr std::ptrdiff_t m_waterLevel = 0x4cc;
    constexpr std::ptrdiff_t m_isDormant = 0x4d0;
    constexpr std::ptrdiff_t m_fishes = 0x4d8;
    constexpr std::ptrdiff_t m_visTimer = 0x4f0;
}

namespace CFists {
    constexpr std::ptrdiff_t m_bPlayingUninterruptableAct = 0xe80;
    constexpr std::ptrdiff_t m_nUninterruptableActivity = 0xe84;
    constexpr std::ptrdiff_t m_bRestorePrevWep = 0xe88;
    constexpr std::ptrdiff_t m_hWeaponBeforePrevious = 0xe8c;
    constexpr std::ptrdiff_t m_hWeaponPrevious = 0xe90;
    constexpr std::ptrdiff_t m_bDelayedHardPunchIncoming = 0xe94;
    constexpr std::ptrdiff_t m_bDestroyAfterTaunt = 0xe95;
}

namespace CFlashbangProjectile {
    constexpr std::ptrdiff_t m_flTimeToDetonate = 0xac8;
    constexpr std::ptrdiff_t m_numOpponentsHit = 0xacc;
    constexpr std::ptrdiff_t m_numTeammatesHit = 0xacd;
}

namespace CFogController {
    constexpr std::ptrdiff_t m_fog = 0x4b0;
    constexpr std::ptrdiff_t m_bUseAngles = 0x518;
    constexpr std::ptrdiff_t m_iChangedVariables = 0x51c;
}

namespace CFogTrigger {
    constexpr std::ptrdiff_t m_fog = 0x8a8;
}

namespace CFogVolume {
    constexpr std::ptrdiff_t m_fogName = 0x700;
    constexpr std::ptrdiff_t m_postProcessName = 0x708;
    constexpr std::ptrdiff_t m_colorCorrectionName = 0x710;
    constexpr std::ptrdiff_t m_bDisabled = 0x720;
    constexpr std::ptrdiff_t m_bInFogVolumesList = 0x721;
}

namespace CFootstepControl {
    constexpr std::ptrdiff_t m_source = 0x8a8;
    constexpr std::ptrdiff_t m_destination = 0x8b0;
}

namespace CFuncBrush {
    constexpr std::ptrdiff_t m_iSolidity = 0x700;
    constexpr std::ptrdiff_t m_iDisabled = 0x704;
    constexpr std::ptrdiff_t m_bSolidBsp = 0x708;
    constexpr std::ptrdiff_t m_iszExcludedClass = 0x710;
    constexpr std::ptrdiff_t m_bInvertExclusion = 0x718;
    constexpr std::ptrdiff_t m_bScriptedMovement = 0x719;
}

namespace CFuncConveyor {
    constexpr std::ptrdiff_t m_szConveyorModels = 0x700;
    constexpr std::ptrdiff_t m_flTransitionDurationSeconds = 0x708;
    constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x70c;
    constexpr std::ptrdiff_t m_vecMoveDirEntitySpace = 0x718;
    constexpr std::ptrdiff_t m_flTargetSpeed = 0x724;
    constexpr std::ptrdiff_t m_nTransitionStartTick = 0x728;
    constexpr std::ptrdiff_t m_nTransitionDurationTicks = 0x72c;
    constexpr std::ptrdiff_t m_flTransitionStartSpeed = 0x730;
    constexpr std::ptrdiff_t m_hConveyorModels = 0x738;
}

namespace CFuncElectrifiedVolume {
    constexpr std::ptrdiff_t m_EffectName = 0x720;
    constexpr std::ptrdiff_t m_EffectInterpenetrateName = 0x728;
    constexpr std::ptrdiff_t m_EffectZapName = 0x730;
    constexpr std::ptrdiff_t m_iszEffectSource = 0x738;
}

namespace CFuncInteractionLayerClip {
    constexpr std::ptrdiff_t m_bDisabled = 0x700;
    constexpr std::ptrdiff_t m_iszInteractsAs = 0x708;
    constexpr std::ptrdiff_t m_iszInteractsWith = 0x710;
}

namespace CFuncLadder {
    constexpr std::ptrdiff_t m_vecLadderDir = 0x700;
    constexpr std::ptrdiff_t m_Dismounts = 0x710;
    constexpr std::ptrdiff_t m_vecLocalTop = 0x728;
    constexpr std::ptrdiff_t m_vecPlayerMountPositionTop = 0x734;
    constexpr std::ptrdiff_t m_vecPlayerMountPositionBottom = 0x740;
    constexpr std::ptrdiff_t m_flAutoRideSpeed = 0x74c;
    constexpr std::ptrdiff_t m_bDisabled = 0x750;
    constexpr std::ptrdiff_t m_bFakeLadder = 0x751;
    constexpr std::ptrdiff_t m_bHasSlack = 0x752;
    constexpr std::ptrdiff_t m_surfacePropName = 0x758;
    constexpr std::ptrdiff_t m_OnPlayerGotOnLadder = 0x760;
    constexpr std::ptrdiff_t m_OnPlayerGotOffLadder = 0x788;
}

namespace CFuncMonitor {
    constexpr std::ptrdiff_t m_targetCamera = 0x720;
    constexpr std::ptrdiff_t m_nResolutionEnum = 0x728;
    constexpr std::ptrdiff_t m_bRenderShadows = 0x72c;
    constexpr std::ptrdiff_t m_bUseUniqueColorTarget = 0x72d;
    constexpr std::ptrdiff_t m_brushModelName = 0x730;
    constexpr std::ptrdiff_t m_hTargetCamera = 0x738;
    constexpr std::ptrdiff_t m_bEnabled = 0x73c;
    constexpr std::ptrdiff_t m_bDraw3DSkybox = 0x73d;
    constexpr std::ptrdiff_t m_bStartEnabled = 0x73e;
}

namespace CFuncMoveLinear {
    constexpr std::ptrdiff_t m_authoredPosition = 0x780;
    constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x784;
    constexpr std::ptrdiff_t m_vecMoveDirParentSpace = 0x790;
    constexpr std::ptrdiff_t m_soundStart = 0x7a0;
    constexpr std::ptrdiff_t m_soundStop = 0x7a8;
    constexpr std::ptrdiff_t m_currentSound = 0x7b0;
    constexpr std::ptrdiff_t m_flBlockDamage = 0x7b8;
    constexpr std::ptrdiff_t m_flStartPosition = 0x7bc;
    constexpr std::ptrdiff_t m_flMoveDistance = 0x7c0;
    constexpr std::ptrdiff_t m_OnFullyOpen = 0x7d0;
    constexpr std::ptrdiff_t m_OnFullyClosed = 0x7f8;
    constexpr std::ptrdiff_t m_bCreateMovableNavMesh = 0x820;
    constexpr std::ptrdiff_t m_bCreateNavObstacle = 0x821;
}

namespace CFuncNavBlocker {
    constexpr std::ptrdiff_t m_bDisabled = 0x700;
    constexpr std::ptrdiff_t m_nBlockedTeamNumber = 0x704;
}

namespace CFuncNavObstruction {
    constexpr std::ptrdiff_t m_bDisabled = 0x708;
}

namespace CFuncPlat {
    constexpr std::ptrdiff_t m_sNoise = 0x7a8;
}

namespace CFuncPlatRot {
    constexpr std::ptrdiff_t m_end = 0x7b0;
    constexpr std::ptrdiff_t m_start = 0x7bc;
}

namespace CFuncRotating {
    constexpr std::ptrdiff_t m_vecMoveAng = 0x700;
    constexpr std::ptrdiff_t m_flFanFriction = 0x70c;
    constexpr std::ptrdiff_t m_flAttenuation = 0x710;
    constexpr std::ptrdiff_t m_flVolume = 0x714;
    constexpr std::ptrdiff_t m_flTargetSpeed = 0x718;
    constexpr std::ptrdiff_t m_flMaxSpeed = 0x71c;
    constexpr std::ptrdiff_t m_flBlockDamage = 0x720;
    constexpr std::ptrdiff_t m_flTimeScale = 0x724;
    constexpr std::ptrdiff_t m_NoiseRunning = 0x728;
    constexpr std::ptrdiff_t m_bReversed = 0x730;
    constexpr std::ptrdiff_t m_angStart = 0x73c;
    constexpr std::ptrdiff_t m_bStopAtStartPos = 0x748;
    constexpr std::ptrdiff_t m_vecClientOrigin = 0x74c;
    constexpr std::ptrdiff_t m_vecClientAngles = 0x758;
}

namespace CFuncShatterglass {
    constexpr std::ptrdiff_t m_hGlassMaterialDamaged = 0x700;
    constexpr std::ptrdiff_t m_hGlassMaterialUndamaged = 0x708;
    constexpr std::ptrdiff_t m_hConcreteMaterialEdgeFace = 0x710;
    constexpr std::ptrdiff_t m_hConcreteMaterialEdgeCaps = 0x718;
    constexpr std::ptrdiff_t m_hConcreteMaterialEdgeFins = 0x720;
    constexpr std::ptrdiff_t m_matPanelTransform = 0x728;
    constexpr std::ptrdiff_t m_matPanelTransformWsTemp = 0x758;
    constexpr std::ptrdiff_t m_vecShatterGlassShards = 0x788;
    constexpr std::ptrdiff_t m_PanelSize = 0x7a0;
    constexpr std::ptrdiff_t m_vecPanelNormalWs = 0x7a8;
    constexpr std::ptrdiff_t m_nNumShardsEverCreated = 0x7b4;
    constexpr std::ptrdiff_t m_flLastShatterSoundEmitTime = 0x7b8;
    constexpr std::ptrdiff_t m_flLastCleanupTime = 0x7bc;
    constexpr std::ptrdiff_t m_flInitAtTime = 0x7c0;
    constexpr std::ptrdiff_t m_flGlassThickness = 0x7c4;
    constexpr std::ptrdiff_t m_flSpawnInvulnerability = 0x7c8;
    constexpr std::ptrdiff_t m_bBreakSilent = 0x7cc;
    constexpr std::ptrdiff_t m_bBreakShardless = 0x7cd;
    constexpr std::ptrdiff_t m_bBroken = 0x7ce;
    constexpr std::ptrdiff_t m_bHasRateLimitedShards = 0x7cf;
    constexpr std::ptrdiff_t m_bGlassNavIgnore = 0x7d0;
    constexpr std::ptrdiff_t m_bGlassInFrame = 0x7d1;
    constexpr std::ptrdiff_t m_bStartBroken = 0x7d2;
    constexpr std::ptrdiff_t m_iInitialDamageType = 0x7d3;
    constexpr std::ptrdiff_t m_szDamagePositioningEntityName01 = 0x7d8;
    constexpr std::ptrdiff_t m_szDamagePositioningEntityName02 = 0x7e0;
    constexpr std::ptrdiff_t m_szDamagePositioningEntityName03 = 0x7e8;
    constexpr std::ptrdiff_t m_szDamagePositioningEntityName04 = 0x7f0;
    constexpr std::ptrdiff_t m_vInitialDamagePositions = 0x7f8;
    constexpr std::ptrdiff_t m_vExtraDamagePositions = 0x810;
    constexpr std::ptrdiff_t m_OnBroken = 0x828;
    constexpr std::ptrdiff_t m_iSurfaceType = 0x851;
}

namespace CFuncTankTrain {
    constexpr std::ptrdiff_t m_OnDeath = 0x850;
}

namespace CFuncTimescale {
    constexpr std::ptrdiff_t m_flDesiredTimescale = 0x4b0;
    constexpr std::ptrdiff_t m_flAcceleration = 0x4b4;
    constexpr std::ptrdiff_t m_flMinBlendRate = 0x4b8;
    constexpr std::ptrdiff_t m_flBlendDeltaMultiplier = 0x4bc;
    constexpr std::ptrdiff_t m_isStarted = 0x4c0;
}

namespace CFuncTrackChange {
    constexpr std::ptrdiff_t m_trackTop = 0x7c8;
    constexpr std::ptrdiff_t m_trackBottom = 0x7d0;
    constexpr std::ptrdiff_t m_train = 0x7d8;
    constexpr std::ptrdiff_t m_trackTopName = 0x7e0;
    constexpr std::ptrdiff_t m_trackBottomName = 0x7e8;
    constexpr std::ptrdiff_t m_trainName = 0x7f0;
    constexpr std::ptrdiff_t m_code = 0x7f8;
    constexpr std::ptrdiff_t m_targetState = 0x7fc;
    constexpr std::ptrdiff_t m_use = 0x800;
}

namespace CFuncTrackTrain {
    constexpr std::ptrdiff_t m_ppath = 0x700;
    constexpr std::ptrdiff_t m_length = 0x704;
    constexpr std::ptrdiff_t m_vPosPrev = 0x708;
    constexpr std::ptrdiff_t m_angPrev = 0x714;
    constexpr std::ptrdiff_t m_controlMins = 0x720;
    constexpr std::ptrdiff_t m_controlMaxs = 0x72c;
    constexpr std::ptrdiff_t m_lastBlockPos = 0x738;
    constexpr std::ptrdiff_t m_lastBlockTick = 0x744;
    constexpr std::ptrdiff_t m_flVolume = 0x748;
    constexpr std::ptrdiff_t m_flBank = 0x74c;
    constexpr std::ptrdiff_t m_oldSpeed = 0x750;
    constexpr std::ptrdiff_t m_flBlockDamage = 0x754;
    constexpr std::ptrdiff_t m_height = 0x758;
    constexpr std::ptrdiff_t m_maxSpeed = 0x75c;
    constexpr std::ptrdiff_t m_dir = 0x760;
    constexpr std::ptrdiff_t m_iszSoundMove = 0x768;
    constexpr std::ptrdiff_t m_iszSoundMovePing = 0x770;
    constexpr std::ptrdiff_t m_iszSoundStart = 0x778;
    constexpr std::ptrdiff_t m_iszSoundStop = 0x780;
    constexpr std::ptrdiff_t m_strPathTarget = 0x788;
    constexpr std::ptrdiff_t m_flMoveSoundMinDuration = 0x790;
    constexpr std::ptrdiff_t m_flMoveSoundMaxDuration = 0x794;
    constexpr std::ptrdiff_t m_flNextMoveSoundTime = 0x798;
    constexpr std::ptrdiff_t m_flMoveSoundMinPitch = 0x79c;
    constexpr std::ptrdiff_t m_flMoveSoundMaxPitch = 0x7a0;
    constexpr std::ptrdiff_t m_eOrientationType = 0x7a4;
    constexpr std::ptrdiff_t m_eVelocityType = 0x7a8;
    constexpr std::ptrdiff_t m_OnStart = 0x7b8;
    constexpr std::ptrdiff_t m_OnNext = 0x7e0;
    constexpr std::ptrdiff_t m_OnArrivedAtDestinationNode = 0x808;
    constexpr std::ptrdiff_t m_bManualSpeedChanges = 0x830;
    constexpr std::ptrdiff_t m_flDesiredSpeed = 0x834;
    constexpr std::ptrdiff_t m_flSpeedChangeTime = 0x838;
    constexpr std::ptrdiff_t m_flAccelSpeed = 0x83c;
    constexpr std::ptrdiff_t m_flDecelSpeed = 0x840;
    constexpr std::ptrdiff_t m_bAccelToSpeed = 0x844;
    constexpr std::ptrdiff_t m_flTimeScale = 0x848;
    constexpr std::ptrdiff_t m_flNextMPSoundTime = 0x84c;
}

namespace CFuncTrain {
    constexpr std::ptrdiff_t m_hCurrentTarget = 0x7a8;
    constexpr std::ptrdiff_t m_activated = 0x7ac;
    constexpr std::ptrdiff_t m_hEnemy = 0x7b0;
    constexpr std::ptrdiff_t m_flBlockDamage = 0x7b4;
    constexpr std::ptrdiff_t m_flNextBlockTime = 0x7b8;
    constexpr std::ptrdiff_t m_iszLastTarget = 0x7c0;
}

namespace CFuncVPhysicsClip {
    constexpr std::ptrdiff_t m_bDisabled = 0x700;
}

namespace CFuncWall {
    constexpr std::ptrdiff_t m_nState = 0x700;
}

namespace CFuncWater {
    constexpr std::ptrdiff_t m_BuoyancyHelper = 0x700;
}

namespace CGameChoreoServices {
    constexpr std::ptrdiff_t m_hOwner = 0x8;
    constexpr std::ptrdiff_t m_hScriptedSequence = 0xc;
    constexpr std::ptrdiff_t m_scriptState = 0x10;
    constexpr std::ptrdiff_t m_choreoState = 0x14;
    constexpr std::ptrdiff_t m_flTimeStartedState = 0x18;
}

namespace CGameGibManager {
    constexpr std::ptrdiff_t m_bAllowNewGibs = 0x4d0;
    constexpr std::ptrdiff_t m_iCurrentMaxPieces = 0x4d4;
    constexpr std::ptrdiff_t m_iMaxPieces = 0x4d8;
    constexpr std::ptrdiff_t m_iLastFrame = 0x4dc;
}

namespace CGamePlayerEquip {
    constexpr std::ptrdiff_t m_weaponNames = 0x710;
    constexpr std::ptrdiff_t m_weaponCount = 0x810;
}

namespace CGamePlayerZone {
    constexpr std::ptrdiff_t m_OnPlayerInZone = 0x708;
    constexpr std::ptrdiff_t m_OnPlayerOutZone = 0x730;
    constexpr std::ptrdiff_t m_PlayersInCount = 0x758;
    constexpr std::ptrdiff_t m_PlayersOutCount = 0x780;
}

namespace CGameRules {
    constexpr std::ptrdiff_t m_szQuestName = 0x8;
    constexpr std::ptrdiff_t m_nQuestPhase = 0x88;
}

namespace CGameSceneNode {
    constexpr std::ptrdiff_t m_nodeToWorld = 0x10;
    constexpr std::ptrdiff_t m_pOwner = 0x30;
    constexpr std::ptrdiff_t m_pParent = 0x38;
    constexpr std::ptrdiff_t m_pChild = 0x40;
    constexpr std::ptrdiff_t m_pNextSibling = 0x48;
    constexpr std::ptrdiff_t m_hParent = 0x70;
    constexpr std::ptrdiff_t m_vecOrigin = 0x80;
    constexpr std::ptrdiff_t m_angRotation = 0xb8;
    constexpr std::ptrdiff_t m_flScale = 0xc4;
    constexpr std::ptrdiff_t m_vecAbsOrigin = 0xc8;
    constexpr std::ptrdiff_t m_angAbsRotation = 0xd4;
    constexpr std::ptrdiff_t m_flAbsScale = 0xe0;
    constexpr std::ptrdiff_t m_nParentAttachmentOrBone = 0xe4;
    constexpr std::ptrdiff_t m_bDebugAbsOriginChanges = 0xe6;
    constexpr std::ptrdiff_t m_bDormant = 0xe7;
    constexpr std::ptrdiff_t m_bForceParentToBeNetworked = 0xe8;
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
    constexpr std::ptrdiff_t m_nHierarchicalDepth = 0xeb;
    constexpr std::ptrdiff_t m_nHierarchyType = 0xec;
    constexpr std::ptrdiff_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xed;
    constexpr std::ptrdiff_t m_name = 0xf0;
    constexpr std::ptrdiff_t m_hierarchyAttachName = 0x130;
    constexpr std::ptrdiff_t m_flZOffset = 0x134;
    constexpr std::ptrdiff_t m_vRenderOrigin = 0x138;
}

namespace CGameSceneNodeHandle {
    constexpr std::ptrdiff_t m_hOwner = 0x8;
    constexpr std::ptrdiff_t m_name = 0xc;
}

namespace CGameScriptedMoveData {
    constexpr std::ptrdiff_t m_vDest = 0x0;
    constexpr std::ptrdiff_t m_vSrc = 0xc;
    constexpr std::ptrdiff_t m_angSrc = 0x18;
    constexpr std::ptrdiff_t m_angDst = 0x24;
    constexpr std::ptrdiff_t m_angCurrent = 0x30;
    constexpr std::ptrdiff_t m_flAngRate = 0x3c;
    constexpr std::ptrdiff_t m_flDuration = 0x40;
    constexpr std::ptrdiff_t m_flStartTime = 0x44;
    constexpr std::ptrdiff_t m_nPrevMoveType = 0x48;
    constexpr std::ptrdiff_t m_bActive = 0x49;
    constexpr std::ptrdiff_t m_bTeleportOnEnd = 0x4a;
    constexpr std::ptrdiff_t m_bIgnoreRotation = 0x4b;
    constexpr std::ptrdiff_t m_nType = 0x4c;
    constexpr std::ptrdiff_t m_bSuccess = 0x50;
    constexpr std::ptrdiff_t m_nForcedCrouchState = 0x54;
    constexpr std::ptrdiff_t m_bIgnoreCollisions = 0x58;
}

namespace CGameText {
    constexpr std::ptrdiff_t m_iszMessage = 0x710;
    constexpr std::ptrdiff_t m_textParms = 0x718;
}

namespace CGameWeaponManager {
    constexpr std::ptrdiff_t m_iszWeaponName = 0x4b0;
    constexpr std::ptrdiff_t m_iMaxPieces = 0x4c0;
    constexpr std::ptrdiff_t m_flAmmoMod = 0x4c4;
    constexpr std::ptrdiff_t m_bExpectingWeapon = 0x4c8;
    constexpr std::ptrdiff_t m_ManagedNonWeapons = 0x4d0;
}

namespace CGenericConstraint {
    constexpr std::ptrdiff_t m_nLinearMotionX = 0x510;
    constexpr std::ptrdiff_t m_nLinearMotionY = 0x514;
    constexpr std::ptrdiff_t m_nLinearMotionZ = 0x518;
    constexpr std::ptrdiff_t m_flLinearFrequencyX = 0x51c;
    constexpr std::ptrdiff_t m_flLinearFrequencyY = 0x520;
    constexpr std::ptrdiff_t m_flLinearFrequencyZ = 0x524;
    constexpr std::ptrdiff_t m_flLinearDampingRatioX = 0x528;
    constexpr std::ptrdiff_t m_flLinearDampingRatioY = 0x52c;
    constexpr std::ptrdiff_t m_flLinearDampingRatioZ = 0x530;
    constexpr std::ptrdiff_t m_flMaxLinearImpulseX = 0x534;
    constexpr std::ptrdiff_t m_flMaxLinearImpulseY = 0x538;
    constexpr std::ptrdiff_t m_flMaxLinearImpulseZ = 0x53c;
    constexpr std::ptrdiff_t m_flBreakAfterTimeX = 0x540;
    constexpr std::ptrdiff_t m_flBreakAfterTimeY = 0x544;
    constexpr std::ptrdiff_t m_flBreakAfterTimeZ = 0x548;
    constexpr std::ptrdiff_t m_flBreakAfterTimeStartTimeX = 0x54c;
    constexpr std::ptrdiff_t m_flBreakAfterTimeStartTimeY = 0x550;
    constexpr std::ptrdiff_t m_flBreakAfterTimeStartTimeZ = 0x554;
    constexpr std::ptrdiff_t m_flBreakAfterTimeThresholdX = 0x558;
    constexpr std::ptrdiff_t m_flBreakAfterTimeThresholdY = 0x55c;
    constexpr std::ptrdiff_t m_flBreakAfterTimeThresholdZ = 0x560;
    constexpr std::ptrdiff_t m_flNotifyForceX = 0x564;
    constexpr std::ptrdiff_t m_flNotifyForceY = 0x568;
    constexpr std::ptrdiff_t m_flNotifyForceZ = 0x56c;
    constexpr std::ptrdiff_t m_flNotifyForceMinTimeX = 0x570;
    constexpr std::ptrdiff_t m_flNotifyForceMinTimeY = 0x574;
    constexpr std::ptrdiff_t m_flNotifyForceMinTimeZ = 0x578;
    constexpr std::ptrdiff_t m_flNotifyForceLastTimeX = 0x57c;
    constexpr std::ptrdiff_t m_flNotifyForceLastTimeY = 0x580;
    constexpr std::ptrdiff_t m_flNotifyForceLastTimeZ = 0x584;
    constexpr std::ptrdiff_t m_bAxisNotifiedX = 0x588;
    constexpr std::ptrdiff_t m_bAxisNotifiedY = 0x589;
    constexpr std::ptrdiff_t m_bAxisNotifiedZ = 0x58a;
    constexpr std::ptrdiff_t m_nAngularMotionX = 0x58c;
    constexpr std::ptrdiff_t m_nAngularMotionY = 0x590;
    constexpr std::ptrdiff_t m_nAngularMotionZ = 0x594;
    constexpr std::ptrdiff_t m_flAngularFrequencyX = 0x598;
    constexpr std::ptrdiff_t m_flAngularFrequencyY = 0x59c;
    constexpr std::ptrdiff_t m_flAngularFrequencyZ = 0x5a0;
    constexpr std::ptrdiff_t m_flAngularDampingRatioX = 0x5a4;
    constexpr std::ptrdiff_t m_flAngularDampingRatioY = 0x5a8;
    constexpr std::ptrdiff_t m_flAngularDampingRatioZ = 0x5ac;
    constexpr std::ptrdiff_t m_flMaxAngularImpulseX = 0x5b0;
    constexpr std::ptrdiff_t m_flMaxAngularImpulseY = 0x5b4;
    constexpr std::ptrdiff_t m_flMaxAngularImpulseZ = 0x5b8;
    constexpr std::ptrdiff_t m_NotifyForceReachedX = 0x5c0;
    constexpr std::ptrdiff_t m_NotifyForceReachedY = 0x5e8;
    constexpr std::ptrdiff_t m_NotifyForceReachedZ = 0x610;
}

namespace CGlowProperty {
    constexpr std::ptrdiff_t m_fGlowColor = 0x8;
    constexpr std::ptrdiff_t m_iGlowType = 0x30;
    constexpr std::ptrdiff_t m_iGlowTeam = 0x34;
    constexpr std::ptrdiff_t m_nGlowRange = 0x38;
    constexpr std::ptrdiff_t m_nGlowRangeMin = 0x3c;
    constexpr std::ptrdiff_t m_glowColorOverride = 0x40;
    constexpr std::ptrdiff_t m_bFlashing = 0x44;
    constexpr std::ptrdiff_t m_flGlowTime = 0x48;
    constexpr std::ptrdiff_t m_flGlowStartTime = 0x4c;
    constexpr std::ptrdiff_t m_bEligibleForScreenHighlight = 0x50;
    constexpr std::ptrdiff_t m_bGlowing = 0x51;
}

namespace CGradientFog {
    constexpr std::ptrdiff_t m_hGradientFogTexture = 0x4b0;
    constexpr std::ptrdiff_t m_flFogStartDistance = 0x4b8;
    constexpr std::ptrdiff_t m_flFogEndDistance = 0x4bc;
    constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x4c0;
    constexpr std::ptrdiff_t m_flFogStartHeight = 0x4c4;
    constexpr std::ptrdiff_t m_flFogEndHeight = 0x4c8;
    constexpr std::ptrdiff_t m_flFarZ = 0x4cc;
    constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x4d0;
    constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x4d4;
    constexpr std::ptrdiff_t m_flFogVerticalExponent = 0x4d8;
    constexpr std::ptrdiff_t m_fogColor = 0x4dc;
    constexpr std::ptrdiff_t m_flFogStrength = 0x4e0;
    constexpr std::ptrdiff_t m_flFadeTime = 0x4e4;
    constexpr std::ptrdiff_t m_bStartDisabled = 0x4e8;
    constexpr std::ptrdiff_t m_bIsEnabled = 0x4e9;
    constexpr std::ptrdiff_t m_bGradientFogNeedsTextures = 0x4ea;
}

namespace CGrassBurn {
    constexpr std::ptrdiff_t m_flGrassBurnClearTime = 0x4b0;
}

namespace CGunTarget {
    constexpr std::ptrdiff_t m_on = 0x780;
    constexpr std::ptrdiff_t m_hTargetEnt = 0x784;
    constexpr std::ptrdiff_t m_OnDeath = 0x788;
}

namespace CHandleTest {
    constexpr std::ptrdiff_t m_Handle = 0x4b0;
    constexpr std::ptrdiff_t m_bSendHandle = 0x4b4;
}

namespace CHintMessage {
    constexpr std::ptrdiff_t m_hintString = 0x8;
    constexpr std::ptrdiff_t m_args = 0x10;
    constexpr std::ptrdiff_t m_duration = 0x28;
}

namespace CHintMessageQueue {
    constexpr std::ptrdiff_t m_tmMessageEnd = 0x8;
    constexpr std::ptrdiff_t m_messages = 0x10;
    constexpr std::ptrdiff_t m_pPlayerController = 0x28;
}

namespace CHitboxComponent {
    constexpr std::ptrdiff_t m_bvDisabledHitGroups = 0x24;
}

namespace CHostage {
    constexpr std::ptrdiff_t m_OnHostageBeginGrab = 0xa88;
    constexpr std::ptrdiff_t m_OnFirstPickedUp = 0xab0;
    constexpr std::ptrdiff_t m_OnDroppedNotRescued = 0xad8;
    constexpr std::ptrdiff_t m_OnRescued = 0xb00;
    constexpr std::ptrdiff_t m_entitySpottedState = 0xb28;
    constexpr std::ptrdiff_t m_nSpotRules = 0xb40;
    constexpr std::ptrdiff_t m_uiHostageSpawnExclusionGroupMask = 0xb44;
    constexpr std::ptrdiff_t m_nHostageSpawnRandomFactor = 0xb48;
    constexpr std::ptrdiff_t m_bRemove = 0xb4c;
    constexpr std::ptrdiff_t m_vel = 0xb50;
    constexpr std::ptrdiff_t m_isRescued = 0xb5c;
    constexpr std::ptrdiff_t m_jumpedThisFrame = 0xb5d;
    constexpr std::ptrdiff_t m_nHostageState = 0xb60;
    constexpr std::ptrdiff_t m_leader = 0xb64;
    constexpr std::ptrdiff_t m_lastLeader = 0xb68;
    constexpr std::ptrdiff_t m_reuseTimer = 0xb70;
    constexpr std::ptrdiff_t m_hasBeenUsed = 0xb88;
    constexpr std::ptrdiff_t m_accel = 0xb8c;
    constexpr std::ptrdiff_t m_isRunning = 0xb98;
    constexpr std::ptrdiff_t m_isCrouching = 0xb99;
    constexpr std::ptrdiff_t m_jumpTimer = 0xba0;
    constexpr std::ptrdiff_t m_isWaitingForLeader = 0xbb8;
    constexpr std::ptrdiff_t m_repathTimer = 0x2bc8;
    constexpr std::ptrdiff_t m_inhibitDoorTimer = 0x2be0;
    constexpr std::ptrdiff_t m_inhibitObstacleAvoidanceTimer = 0x2c70;
    constexpr std::ptrdiff_t m_wiggleTimer = 0x2c90;
    constexpr std::ptrdiff_t m_isAdjusted = 0x2cac;
    constexpr std::ptrdiff_t m_bHandsHaveBeenCut = 0x2cad;
    constexpr std::ptrdiff_t m_hHostageGrabber = 0x2cb0;
    constexpr std::ptrdiff_t m_fLastGrabTime = 0x2cb4;
    constexpr std::ptrdiff_t m_vecPositionWhenStartedDroppingToGround = 0x2cb8;
    constexpr std::ptrdiff_t m_vecGrabbedPos = 0x2cc4;
    constexpr std::ptrdiff_t m_flRescueStartTime = 0x2cd0;
    constexpr std::ptrdiff_t m_flGrabSuccessTime = 0x2cd4;
    constexpr std::ptrdiff_t m_flDropStartTime = 0x2cd8;
    constexpr std::ptrdiff_t m_nApproachRewardPayouts = 0x2cdc;
    constexpr std::ptrdiff_t m_nPickupEventCount = 0x2ce0;
    constexpr std::ptrdiff_t m_vecSpawnGroundPos = 0x2ce4;
}

namespace CHostageExpresserShim {
    constexpr std::ptrdiff_t m_pExpresser = 0xa70;
}

namespace CInButtonState {
    constexpr std::ptrdiff_t m_pButtonStates = 0x8;
}

namespace CInferno {
    constexpr std::ptrdiff_t m_fireXDelta = 0x710;
    constexpr std::ptrdiff_t m_fireYDelta = 0x810;
    constexpr std::ptrdiff_t m_fireZDelta = 0x910;
    constexpr std::ptrdiff_t m_fireParentXDelta = 0xa10;
    constexpr std::ptrdiff_t m_fireParentYDelta = 0xb10;
    constexpr std::ptrdiff_t m_fireParentZDelta = 0xc10;
    constexpr std::ptrdiff_t m_bFireIsBurning = 0xd10;
    constexpr std::ptrdiff_t m_BurnNormal = 0xd50;
    constexpr std::ptrdiff_t m_fireCount = 0x1050;
    constexpr std::ptrdiff_t m_nInfernoType = 0x1054;
    constexpr std::ptrdiff_t m_nFireEffectTickBegin = 0x1058;
    constexpr std::ptrdiff_t m_nFireLifetime = 0x105c;
    constexpr std::ptrdiff_t m_bInPostEffectTime = 0x1060;
    constexpr std::ptrdiff_t m_nFiresExtinguishCount = 0x1064;
    constexpr std::ptrdiff_t m_bWasCreatedInSmoke = 0x1068;
    constexpr std::ptrdiff_t m_extent = 0x1270;
    constexpr std::ptrdiff_t m_damageTimer = 0x1288;
    constexpr std::ptrdiff_t m_damageRampTimer = 0x12a0;
    constexpr std::ptrdiff_t m_splashVelocity = 0x12b8;
    constexpr std::ptrdiff_t m_InitialSplashVelocity = 0x12c4;
    constexpr std::ptrdiff_t m_startPos = 0x12d0;
    constexpr std::ptrdiff_t m_vecOriginalSpawnLocation = 0x12dc;
    constexpr std::ptrdiff_t m_activeTimer = 0x12e8;
    constexpr std::ptrdiff_t m_fireSpawnOffset = 0x12f8;
    constexpr std::ptrdiff_t m_nMaxFlames = 0x12fc;
    constexpr std::ptrdiff_t m_BookkeepingTimer = 0x1300;
    constexpr std::ptrdiff_t m_NextSpreadTimer = 0x1318;
    constexpr std::ptrdiff_t m_nSourceItemDefIndex = 0x1330;
}

namespace CInfoDynamicShadowHint {
    constexpr std::ptrdiff_t m_bDisabled = 0x4b0;
    constexpr std::ptrdiff_t m_flRange = 0x4b4;
    constexpr std::ptrdiff_t m_nImportance = 0x4b8;
    constexpr std::ptrdiff_t m_nLightChoice = 0x4bc;
    constexpr std::ptrdiff_t m_hLight = 0x4c0;
}

namespace CInfoDynamicShadowHintBox {
    constexpr std::ptrdiff_t m_vBoxMins = 0x4c8;
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x4d4;
}

namespace CInfoGameEventProxy {
    constexpr std::ptrdiff_t m_iszEventName = 0x4b0;
    constexpr std::ptrdiff_t m_flRange = 0x4b8;
}

namespace CInfoMapRegion {
    constexpr std::ptrdiff_t m_flRadius = 0x4b0;
    constexpr std::ptrdiff_t m_strLocToken = 0x4b8;
    constexpr std::ptrdiff_t m_szLocToken = 0x4c0;
}

namespace CInfoOffscreenPanoramaTexture {
    constexpr std::ptrdiff_t m_bDisabled = 0x4b0;
    constexpr std::ptrdiff_t m_nResolutionX = 0x4b4;
    constexpr std::ptrdiff_t m_nResolutionY = 0x4b8;
    constexpr std::ptrdiff_t m_szLayoutFileName = 0x4c0;
    constexpr std::ptrdiff_t m_RenderAttrName = 0x4c8;
    constexpr std::ptrdiff_t m_TargetEntities = 0x4d0;
    constexpr std::ptrdiff_t m_nTargetChangeCount = 0x4e8;
    constexpr std::ptrdiff_t m_vecCSSClasses = 0x4f0;
    constexpr std::ptrdiff_t m_szTargetsName = 0x508;
    constexpr std::ptrdiff_t m_AdditionalTargetEntities = 0x510;
}

namespace CInfoPlayerStart {
    constexpr std::ptrdiff_t m_bDisabled = 0x4b0;
}

namespace CInfoSpawnGroupLoadUnload {
    constexpr std::ptrdiff_t m_OnSpawnGroupLoadStarted = 0x4b0;
    constexpr std::ptrdiff_t m_OnSpawnGroupLoadFinished = 0x4d8;
    constexpr std::ptrdiff_t m_OnSpawnGroupUnloadStarted = 0x500;
    constexpr std::ptrdiff_t m_OnSpawnGroupUnloadFinished = 0x528;
    constexpr std::ptrdiff_t m_iszSpawnGroupName = 0x550;
    constexpr std::ptrdiff_t m_iszSpawnGroupFilterName = 0x558;
    constexpr std::ptrdiff_t m_iszLandmarkName = 0x560;
    constexpr std::ptrdiff_t m_sFixedSpawnGroupName = 0x568;
    constexpr std::ptrdiff_t m_flTimeoutInterval = 0x570;
    constexpr std::ptrdiff_t m_bStreamingStarted = 0x574;
    constexpr std::ptrdiff_t m_bUnloadingStarted = 0x575;
}

namespace CInfoVisibilityBox {
    constexpr std::ptrdiff_t m_nMode = 0x4b4;
    constexpr std::ptrdiff_t m_vBoxSize = 0x4b8;
    constexpr std::ptrdiff_t m_bEnabled = 0x4c4;
}

namespace CInfoWorldLayer {
    constexpr std::ptrdiff_t m_pOutputOnEntitiesSpawned = 0x4b0;
    constexpr std::ptrdiff_t m_worldName = 0x4d8;
    constexpr std::ptrdiff_t m_layerName = 0x4e0;
    constexpr std::ptrdiff_t m_bWorldLayerVisible = 0x4e8;
    constexpr std::ptrdiff_t m_bEntitiesSpawned = 0x4e9;
    constexpr std::ptrdiff_t m_bCreateAsChildSpawnGroup = 0x4ea;
    constexpr std::ptrdiff_t m_hLayerSpawnGroup = 0x4ec;
}

namespace CInstancedSceneEntity {
    constexpr std::ptrdiff_t m_hOwner = 0xa08;
    constexpr std::ptrdiff_t m_bHadOwner = 0xa0c;
    constexpr std::ptrdiff_t m_flPostSpeakDelay = 0xa10;
    constexpr std::ptrdiff_t m_flPreDelay = 0xa14;
    constexpr std::ptrdiff_t m_bIsBackground = 0xa18;
}

namespace CInstructorEventEntity {
    constexpr std::ptrdiff_t m_iszName = 0x4b0;
    constexpr std::ptrdiff_t m_iszHintTargetEntity = 0x4b8;
    constexpr std::ptrdiff_t m_hTargetPlayer = 0x4c0;
}

namespace CIronSightController {
    constexpr std::ptrdiff_t m_bIronSightAvailable = 0x8;
    constexpr std::ptrdiff_t m_flIronSightAmount = 0xc;
    constexpr std::ptrdiff_t m_flIronSightAmountGained = 0x10;
    constexpr std::ptrdiff_t m_flIronSightAmountBiased = 0x14;
}

namespace CItem {
    constexpr std::ptrdiff_t m_OnPlayerTouch = 0x938;
    constexpr std::ptrdiff_t m_bActivateWhenAtRest = 0x960;
    constexpr std::ptrdiff_t m_OnCacheInteraction = 0x968;
    constexpr std::ptrdiff_t m_OnPlayerPickup = 0x990;
    constexpr std::ptrdiff_t m_OnGlovePulled = 0x9b8;
    constexpr std::ptrdiff_t m_vOriginalSpawnOrigin = 0x9e0;
    constexpr std::ptrdiff_t m_vOriginalSpawnAngles = 0x9ec;
    constexpr std::ptrdiff_t m_bPhysStartAsleep = 0x9f8;
}

namespace CItemCash {
    constexpr std::ptrdiff_t m_bufCashOriginalSource = 0xa08;
    constexpr std::ptrdiff_t m_nBundleSize = 0xa48;
    constexpr std::ptrdiff_t m_flAllowPickupTime = 0xa50;
}

namespace CItemDefuser {
    constexpr std::ptrdiff_t m_entitySpottedState = 0xa08;
    constexpr std::ptrdiff_t m_nSpotRules = 0xa20;
}

namespace CItemDogtags {
    constexpr std::ptrdiff_t m_OwningPlayer = 0xa08;
    constexpr std::ptrdiff_t m_KillingPlayer = 0xa0c;
}

namespace CItemGeneric {
    constexpr std::ptrdiff_t m_bHasTriggerRadius = 0xa10;
    constexpr std::ptrdiff_t m_bHasPickupRadius = 0xa11;
    constexpr std::ptrdiff_t m_flPickupRadiusSqr = 0xa14;
    constexpr std::ptrdiff_t m_flTriggerRadiusSqr = 0xa18;
    constexpr std::ptrdiff_t m_flLastPickupCheck = 0xa1c;
    constexpr std::ptrdiff_t m_bPlayerCounterListenerAdded = 0xa20;
    constexpr std::ptrdiff_t m_bPlayerInTriggerRadius = 0xa21;
    constexpr std::ptrdiff_t m_hSpawnParticleEffect = 0xa28;
    constexpr std::ptrdiff_t m_pAmbientSoundEffect = 0xa30;
    constexpr std::ptrdiff_t m_bAutoStartAmbientSound = 0xa38;
    constexpr std::ptrdiff_t m_pSpawnScriptFunction = 0xa40;
    constexpr std::ptrdiff_t m_hPickupParticleEffect = 0xa48;
    constexpr std::ptrdiff_t m_pPickupSoundEffect = 0xa50;
    constexpr std::ptrdiff_t m_pPickupScriptFunction = 0xa58;
    constexpr std::ptrdiff_t m_hTimeoutParticleEffect = 0xa60;
    constexpr std::ptrdiff_t m_pTimeoutSoundEffect = 0xa68;
    constexpr std::ptrdiff_t m_pTimeoutScriptFunction = 0xa70;
    constexpr std::ptrdiff_t m_pPickupFilterName = 0xa78;
    constexpr std::ptrdiff_t m_hPickupFilter = 0xa80;
    constexpr std::ptrdiff_t m_OnPickup = 0xa88;
    constexpr std::ptrdiff_t m_OnTimeout = 0xab0;
    constexpr std::ptrdiff_t m_OnTriggerStartTouch = 0xad8;
    constexpr std::ptrdiff_t m_OnTriggerTouch = 0xb00;
    constexpr std::ptrdiff_t m_OnTriggerEndTouch = 0xb28;
    constexpr std::ptrdiff_t m_pAllowPickupScriptFunction = 0xb50;
    constexpr std::ptrdiff_t m_flPickupRadius = 0xb58;
    constexpr std::ptrdiff_t m_flTriggerRadius = 0xb5c;
    constexpr std::ptrdiff_t m_pTriggerSoundEffect = 0xb60;
    constexpr std::ptrdiff_t m_bGlowWhenInTrigger = 0xb68;
    constexpr std::ptrdiff_t m_glowColor = 0xb69;
    constexpr std::ptrdiff_t m_bUseable = 0xb6d;
    constexpr std::ptrdiff_t m_hTriggerHelper = 0xb70;
}

namespace CItemGenericTriggerHelper {
    constexpr std::ptrdiff_t m_hParentItem = 0x700;
}

namespace CKeepUpright {
    constexpr std::ptrdiff_t m_worldGoalAxis = 0x4b8;
    constexpr std::ptrdiff_t m_localTestAxis = 0x4c4;
    constexpr std::ptrdiff_t m_nameAttach = 0x4d8;
    constexpr std::ptrdiff_t m_attachedObject = 0x4e0;
    constexpr std::ptrdiff_t m_angularLimit = 0x4e4;
    constexpr std::ptrdiff_t m_bActive = 0x4e8;
    constexpr std::ptrdiff_t m_bDampAllRotation = 0x4e9;
}

namespace CLightComponent {
    constexpr std::ptrdiff_t __m_pChainEntity = 0x48;
    constexpr std::ptrdiff_t m_Color = 0x85;
    constexpr std::ptrdiff_t m_SecondaryColor = 0x89;
    constexpr std::ptrdiff_t m_flBrightness = 0x90;
    constexpr std::ptrdiff_t m_flBrightnessScale = 0x94;
    constexpr std::ptrdiff_t m_flBrightnessMult = 0x98;
    constexpr std::ptrdiff_t m_flRange = 0x9c;
    constexpr std::ptrdiff_t m_flFalloff = 0xa0;
    constexpr std::ptrdiff_t m_flAttenuation0 = 0xa4;
    constexpr std::ptrdiff_t m_flAttenuation1 = 0xa8;
    constexpr std::ptrdiff_t m_flAttenuation2 = 0xac;
    constexpr std::ptrdiff_t m_flTheta = 0xb0;
    constexpr std::ptrdiff_t m_flPhi = 0xb4;
    constexpr std::ptrdiff_t m_hLightCookie = 0xb8;
    constexpr std::ptrdiff_t m_nCascades = 0xc0;
    constexpr std::ptrdiff_t m_nCastShadows = 0xc4;
    constexpr std::ptrdiff_t m_nShadowWidth = 0xc8;
    constexpr std::ptrdiff_t m_nShadowHeight = 0xcc;
    constexpr std::ptrdiff_t m_bRenderDiffuse = 0xd0;
    constexpr std::ptrdiff_t m_nRenderSpecular = 0xd4;
    constexpr std::ptrdiff_t m_bRenderTransmissive = 0xd8;
    constexpr std::ptrdiff_t m_flOrthoLightWidth = 0xdc;
    constexpr std::ptrdiff_t m_flOrthoLightHeight = 0xe0;
    constexpr std::ptrdiff_t m_nStyle = 0xe4;
    constexpr std::ptrdiff_t m_Pattern = 0xe8;
    constexpr std::ptrdiff_t m_nCascadeRenderStaticObjects = 0xf0;
    constexpr std::ptrdiff_t m_flShadowCascadeCrossFade = 0xf4;
    constexpr std::ptrdiff_t m_flShadowCascadeDistanceFade = 0xf8;
    constexpr std::ptrdiff_t m_flShadowCascadeDistance0 = 0xfc;
    constexpr std::ptrdiff_t m_flShadowCascadeDistance1 = 0x100;
    constexpr std::ptrdiff_t m_flShadowCascadeDistance2 = 0x104;
    constexpr std::ptrdiff_t m_flShadowCascadeDistance3 = 0x108;
    constexpr std::ptrdiff_t m_nShadowCascadeResolution0 = 0x10c;
    constexpr std::ptrdiff_t m_nShadowCascadeResolution1 = 0x110;
    constexpr std::ptrdiff_t m_nShadowCascadeResolution2 = 0x114;
    constexpr std::ptrdiff_t m_nShadowCascadeResolution3 = 0x118;
    constexpr std::ptrdiff_t m_bUsesBakedShadowing = 0x11c;
    constexpr std::ptrdiff_t m_nShadowPriority = 0x120;
    constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x124;
    constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x128;
    constexpr std::ptrdiff_t m_LightGroups = 0x130;
    constexpr std::ptrdiff_t m_nDirectLight = 0x138;
    constexpr std::ptrdiff_t m_nIndirectLight = 0x13c;
    constexpr std::ptrdiff_t m_flFadeMinDist = 0x140;
    constexpr std::ptrdiff_t m_flFadeMaxDist = 0x144;
    constexpr std::ptrdiff_t m_flShadowFadeMinDist = 0x148;
    constexpr std::ptrdiff_t m_flShadowFadeMaxDist = 0x14c;
    constexpr std::ptrdiff_t m_bEnabled = 0x150;
    constexpr std::ptrdiff_t m_bFlicker = 0x151;
    constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x152;
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x154;
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x160;
    constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x16c;
    constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x178;
    constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x184;
    constexpr std::ptrdiff_t m_flPrecomputedMaxRange = 0x190;
    constexpr std::ptrdiff_t m_nFogLightingMode = 0x194;
    constexpr std::ptrdiff_t m_flFogContributionStength = 0x198;
    constexpr std::ptrdiff_t m_flNearClipPlane = 0x19c;
    constexpr std::ptrdiff_t m_SkyColor = 0x1a0;
    constexpr std::ptrdiff_t m_flSkyIntensity = 0x1a4;
    constexpr std::ptrdiff_t m_SkyAmbientBounce = 0x1a8;
    constexpr std::ptrdiff_t m_bUseSecondaryColor = 0x1ac;
    constexpr std::ptrdiff_t m_bMixedShadows = 0x1ad;
    constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x1b0;
    constexpr std::ptrdiff_t m_flCapsuleLength = 0x1b4;
    constexpr std::ptrdiff_t m_flMinRoughness = 0x1b8;
    constexpr std::ptrdiff_t m_bPvsModifyEntity = 0x1c8;
}

namespace CLightEntity {
    constexpr std::ptrdiff_t m_CLightComponent = 0x700;
}

namespace CLightGlow {
    constexpr std::ptrdiff_t m_nHorizontalSize = 0x700;
    constexpr std::ptrdiff_t m_nVerticalSize = 0x704;
    constexpr std::ptrdiff_t m_nMinDist = 0x708;
    constexpr std::ptrdiff_t m_nMaxDist = 0x70c;
    constexpr std::ptrdiff_t m_nOuterMaxDist = 0x710;
    constexpr std::ptrdiff_t m_flGlowProxySize = 0x714;
    constexpr std::ptrdiff_t m_flHDRColorScale = 0x718;
}

namespace CLogicAchievement {
    constexpr std::ptrdiff_t m_bDisabled = 0x4b0;
    constexpr std::ptrdiff_t m_iszAchievementEventID = 0x4b8;
    constexpr std::ptrdiff_t m_OnFired = 0x4c0;
}

namespace CLogicActiveAutosave {
    constexpr std::ptrdiff_t m_TriggerHitPoints = 0x4c0;
    constexpr std::ptrdiff_t m_flTimeToTrigger = 0x4c4;
    constexpr std::ptrdiff_t m_flStartTime = 0x4c8;
    constexpr std::ptrdiff_t m_flDangerousTime = 0x4cc;
}

namespace CLogicAuto {
    constexpr std::ptrdiff_t m_OnMapSpawn = 0x4b0;
    constexpr std::ptrdiff_t m_OnDemoMapSpawn = 0x4d8;
    constexpr std::ptrdiff_t m_OnNewGame = 0x500;
    constexpr std::ptrdiff_t m_OnLoadGame = 0x528;
    constexpr std::ptrdiff_t m_OnMapTransition = 0x550;
    constexpr std::ptrdiff_t m_OnBackgroundMap = 0x578;
    constexpr std::ptrdiff_t m_OnMultiNewMap = 0x5a0;
    constexpr std::ptrdiff_t m_OnMultiNewRound = 0x5c8;
    constexpr std::ptrdiff_t m_OnVREnabled = 0x5f0;
    constexpr std::ptrdiff_t m_OnVRNotEnabled = 0x618;
    constexpr std::ptrdiff_t m_globalstate = 0x640;
}

namespace CLogicAutosave {
    constexpr std::ptrdiff_t m_bForceNewLevelUnit = 0x4b0;
    constexpr std::ptrdiff_t m_minHitPoints = 0x4b4;
    constexpr std::ptrdiff_t m_minHitPointsToCommit = 0x4b8;
}

namespace CLogicBranch {
    constexpr std::ptrdiff_t m_bInValue = 0x4b0;
    constexpr std::ptrdiff_t m_Listeners = 0x4b8;
    constexpr std::ptrdiff_t m_OnTrue = 0x4d0;
    constexpr std::ptrdiff_t m_OnFalse = 0x4f8;
}

namespace CLogicBranchList {
    constexpr std::ptrdiff_t m_nLogicBranchNames = 0x4b0;
    constexpr std::ptrdiff_t m_LogicBranchList = 0x530;
    constexpr std::ptrdiff_t m_eLastState = 0x548;
    constexpr std::ptrdiff_t m_OnAllTrue = 0x550;
    constexpr std::ptrdiff_t m_OnAllFalse = 0x578;
    constexpr std::ptrdiff_t m_OnMixed = 0x5a0;
}

namespace CLogicCase {
    constexpr std::ptrdiff_t m_nCase = 0x4b0;
    constexpr std::ptrdiff_t m_nShuffleCases = 0x5b0;
    constexpr std::ptrdiff_t m_nLastShuffleCase = 0x5b4;
    constexpr std::ptrdiff_t m_uchShuffleCaseMap = 0x5b8;
    constexpr std::ptrdiff_t m_OnCase = 0x5d8;
    constexpr std::ptrdiff_t m_OnDefault = 0xad8;
}

namespace CLogicCollisionPair {
    constexpr std::ptrdiff_t m_nameAttach1 = 0x4b0;
    constexpr std::ptrdiff_t m_nameAttach2 = 0x4b8;
    constexpr std::ptrdiff_t m_disabled = 0x4c0;
    constexpr std::ptrdiff_t m_succeeded = 0x4c1;
}

namespace CLogicCompare {
    constexpr std::ptrdiff_t m_flInValue = 0x4b0;
    constexpr std::ptrdiff_t m_flCompareValue = 0x4b4;
    constexpr std::ptrdiff_t m_OnLessThan = 0x4b8;
    constexpr std::ptrdiff_t m_OnEqualTo = 0x4e0;
    constexpr std::ptrdiff_t m_OnNotEqualTo = 0x508;
    constexpr std::ptrdiff_t m_OnGreaterThan = 0x530;
}

namespace CLogicDistanceAutosave {
    constexpr std::ptrdiff_t m_iszTargetEntity = 0x4b0;
    constexpr std::ptrdiff_t m_flDistanceToPlayer = 0x4b8;
    constexpr std::ptrdiff_t m_bForceNewLevelUnit = 0x4bc;
    constexpr std::ptrdiff_t m_bCheckCough = 0x4bd;
    constexpr std::ptrdiff_t m_bThinkDangerous = 0x4be;
    constexpr std::ptrdiff_t m_flDangerousTime = 0x4c0;
}

namespace CLogicDistanceCheck {
    constexpr std::ptrdiff_t m_iszEntityA = 0x4b0;
    constexpr std::ptrdiff_t m_iszEntityB = 0x4b8;
    constexpr std::ptrdiff_t m_flZone1Distance = 0x4c0;
    constexpr std::ptrdiff_t m_flZone2Distance = 0x4c4;
    constexpr std::ptrdiff_t m_InZone1 = 0x4c8;
    constexpr std::ptrdiff_t m_InZone2 = 0x4f0;
    constexpr std::ptrdiff_t m_InZone3 = 0x518;
}

namespace CLogicEventListener {
    constexpr std::ptrdiff_t m_iszEventName = 0x4c0;
    constexpr std::ptrdiff_t m_bIsEnabled = 0x4c8;
    constexpr std::ptrdiff_t m_nTeam = 0x4cc;
    constexpr std::ptrdiff_t m_bFetchEventData = 0x4d0;
    constexpr std::ptrdiff_t m_OnEventFired = 0x4d8;
}

namespace CLogicGameEvent {
    constexpr std::ptrdiff_t m_iszEventName = 0x4b0;
}

namespace CLogicGameEventListener {
    constexpr std::ptrdiff_t m_OnEventFired = 0x4c0;
    constexpr std::ptrdiff_t m_iszGameEventName = 0x4e8;
    constexpr std::ptrdiff_t m_iszGameEventItem = 0x4f0;
    constexpr std::ptrdiff_t m_bEnabled = 0x4f8;
    constexpr std::ptrdiff_t m_bStartDisabled = 0x4f9;
}

namespace CLogicLineToEntity {
    constexpr std::ptrdiff_t m_Line = 0x4b0;
    constexpr std::ptrdiff_t m_SourceName = 0x4d8;
    constexpr std::ptrdiff_t m_StartEntity = 0x4e0;
    constexpr std::ptrdiff_t m_EndEntity = 0x4e4;
}

namespace CLogicMeasureMovement {
    constexpr std::ptrdiff_t m_strMeasureTarget = 0x4b0;
    constexpr std::ptrdiff_t m_strMeasureReference = 0x4b8;
    constexpr std::ptrdiff_t m_strTargetReference = 0x4c0;
    constexpr std::ptrdiff_t m_hMeasureTarget = 0x4c8;
    constexpr std::ptrdiff_t m_hMeasureReference = 0x4cc;
    constexpr std::ptrdiff_t m_hTarget = 0x4d0;
    constexpr std::ptrdiff_t m_hTargetReference = 0x4d4;
    constexpr std::ptrdiff_t m_flScale = 0x4d8;
    constexpr std::ptrdiff_t m_nMeasureType = 0x4dc;
}

namespace CLogicNPCCounter {
    constexpr std::ptrdiff_t m_OnMinCountAll = 0x4b0;
    constexpr std::ptrdiff_t m_OnMaxCountAll = 0x4d8;
    constexpr std::ptrdiff_t m_OnFactorAll = 0x500;
    constexpr std::ptrdiff_t m_OnMinPlayerDistAll = 0x528;
    constexpr std::ptrdiff_t m_OnMinCount_1 = 0x550;
    constexpr std::ptrdiff_t m_OnMaxCount_1 = 0x578;
    constexpr std::ptrdiff_t m_OnFactor_1 = 0x5a0;
    constexpr std::ptrdiff_t m_OnMinPlayerDist_1 = 0x5c8;
    constexpr std::ptrdiff_t m_OnMinCount_2 = 0x5f0;
    constexpr std::ptrdiff_t m_OnMaxCount_2 = 0x618;
    constexpr std::ptrdiff_t m_OnFactor_2 = 0x640;
    constexpr std::ptrdiff_t m_OnMinPlayerDist_2 = 0x668;
    constexpr std::ptrdiff_t m_OnMinCount_3 = 0x690;
    constexpr std::ptrdiff_t m_OnMaxCount_3 = 0x6b8;
    constexpr std::ptrdiff_t m_OnFactor_3 = 0x6e0;
    constexpr std::ptrdiff_t m_OnMinPlayerDist_3 = 0x708;
    constexpr std::ptrdiff_t m_hSource = 0x730;
    constexpr std::ptrdiff_t m_iszSourceEntityName = 0x738;
    constexpr std::ptrdiff_t m_flDistanceMax = 0x740;
    constexpr std::ptrdiff_t m_bDisabled = 0x744;
    constexpr std::ptrdiff_t m_nMinCountAll = 0x748;
    constexpr std::ptrdiff_t m_nMaxCountAll = 0x74c;
    constexpr std::ptrdiff_t m_nMinFactorAll = 0x750;
    constexpr std::ptrdiff_t m_nMaxFactorAll = 0x754;
    constexpr std::ptrdiff_t m_iszNPCClassname_1 = 0x760;
    constexpr std::ptrdiff_t m_nNPCState_1 = 0x768;
    constexpr std::ptrdiff_t m_bInvertState_1 = 0x76c;
    constexpr std::ptrdiff_t m_nMinCount_1 = 0x770;
    constexpr std::ptrdiff_t m_nMaxCount_1 = 0x774;
    constexpr std::ptrdiff_t m_nMinFactor_1 = 0x778;
    constexpr std::ptrdiff_t m_nMaxFactor_1 = 0x77c;
    constexpr std::ptrdiff_t m_flDefaultDist_1 = 0x784;
    constexpr std::ptrdiff_t m_iszNPCClassname_2 = 0x788;
    constexpr std::ptrdiff_t m_nNPCState_2 = 0x790;
    constexpr std::ptrdiff_t m_bInvertState_2 = 0x794;
    constexpr std::ptrdiff_t m_nMinCount_2 = 0x798;
    constexpr std::ptrdiff_t m_nMaxCount_2 = 0x79c;
    constexpr std::ptrdiff_t m_nMinFactor_2 = 0x7a0;
    constexpr std::ptrdiff_t m_nMaxFactor_2 = 0x7a4;
    constexpr std::ptrdiff_t m_flDefaultDist_2 = 0x7ac;
    constexpr std::ptrdiff_t m_iszNPCClassname_3 = 0x7b0;
    constexpr std::ptrdiff_t m_nNPCState_3 = 0x7b8;
    constexpr std::ptrdiff_t m_bInvertState_3 = 0x7bc;
    constexpr std::ptrdiff_t m_nMinCount_3 = 0x7c0;
    constexpr std::ptrdiff_t m_nMaxCount_3 = 0x7c4;
    constexpr std::ptrdiff_t m_nMinFactor_3 = 0x7c8;
    constexpr std::ptrdiff_t m_nMaxFactor_3 = 0x7cc;
    constexpr std::ptrdiff_t m_flDefaultDist_3 = 0x7d4;
}

namespace CLogicNPCCounterAABB {
    constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x7f0;
    constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x7fc;
    constexpr std::ptrdiff_t m_vOuterMins = 0x808;
    constexpr std::ptrdiff_t m_vOuterMaxs = 0x814;
}

namespace CLogicNavigation {
    constexpr std::ptrdiff_t m_isOn = 0x4b8;
    constexpr std::ptrdiff_t m_navProperty = 0x4bc;
}

namespace CLogicPlayerProxy {
    constexpr std::ptrdiff_t m_hPlayer = 0x4b0;
    constexpr std::ptrdiff_t m_PlayerHasAmmo = 0x4b8;
    constexpr std::ptrdiff_t m_PlayerHasNoAmmo = 0x4e0;
    constexpr std::ptrdiff_t m_PlayerDied = 0x508;
    constexpr std::ptrdiff_t m_RequestedPlayerHealth = 0x530;
}

namespace CLogicRelay {
    constexpr std::ptrdiff_t m_OnTrigger = 0x4b0;
    constexpr std::ptrdiff_t m_OnSpawn = 0x4d8;
    constexpr std::ptrdiff_t m_bDisabled = 0x500;
    constexpr std::ptrdiff_t m_bWaitForRefire = 0x501;
    constexpr std::ptrdiff_t m_bTriggerOnce = 0x502;
    constexpr std::ptrdiff_t m_bFastRetrigger = 0x503;
    constexpr std::ptrdiff_t m_bPassthoughCaller = 0x504;
}

namespace CMapInfo {
    constexpr std::ptrdiff_t m_iBuyingStatus = 0x4b0;
    constexpr std::ptrdiff_t m_flBombRadius = 0x4b4;
    constexpr std::ptrdiff_t m_iPetPopulation = 0x4b8;
    constexpr std::ptrdiff_t m_bUseNormalSpawnsForDM = 0x4bc;
    constexpr std::ptrdiff_t m_bDisableAutoGeneratedDMSpawns = 0x4bd;
    constexpr std::ptrdiff_t m_flBotMaxVisionDistance = 0x4c0;
    constexpr std::ptrdiff_t m_iHostageCount = 0x4c4;
    constexpr std::ptrdiff_t m_bFadePlayerVisibilityFarZ = 0x4c8;
}

namespace CMapVetoPickController {
    constexpr std::ptrdiff_t m_bPlayedIntroVcd = 0x4b0;
    constexpr std::ptrdiff_t m_bNeedToPlayFiveSecondsRemaining = 0x4b1;
    constexpr std::ptrdiff_t m_dblPreMatchDraftSequenceTime = 0x4d0;
    constexpr std::ptrdiff_t m_bPreMatchDraftStateChanged = 0x4d8;
    constexpr std::ptrdiff_t m_nDraftType = 0x4dc;
    constexpr std::ptrdiff_t m_nTeamWinningCoinToss = 0x4e0;
    constexpr std::ptrdiff_t m_nTeamWithFirstChoice = 0x4e4;
    constexpr std::ptrdiff_t m_nVoteMapIdsList = 0x5e4;
    constexpr std::ptrdiff_t m_nAccountIDs = 0x600;
    constexpr std::ptrdiff_t m_nMapId0 = 0x700;
    constexpr std::ptrdiff_t m_nMapId1 = 0x800;
    constexpr std::ptrdiff_t m_nMapId2 = 0x900;
    constexpr std::ptrdiff_t m_nMapId3 = 0xa00;
    constexpr std::ptrdiff_t m_nMapId4 = 0xb00;
    constexpr std::ptrdiff_t m_nMapId5 = 0xc00;
    constexpr std::ptrdiff_t m_nStartingSide0 = 0xd00;
    constexpr std::ptrdiff_t m_nCurrentPhase = 0xe00;
    constexpr std::ptrdiff_t m_nPhaseStartTick = 0xe04;
    constexpr std::ptrdiff_t m_nPhaseDurationTicks = 0xe08;
    constexpr std::ptrdiff_t m_OnMapVetoed = 0xe10;
    constexpr std::ptrdiff_t m_OnMapPicked = 0xe38;
    constexpr std::ptrdiff_t m_OnSidesPicked = 0xe60;
    constexpr std::ptrdiff_t m_OnNewPhaseStarted = 0xe88;
    constexpr std::ptrdiff_t m_OnLevelTransition = 0xeb0;
}

namespace CMarkupVolume {
    constexpr std::ptrdiff_t m_bEnabled = 0x700;
}

namespace CMarkupVolumeTagged {
    constexpr std::ptrdiff_t m_bIsGroup = 0x738;
    constexpr std::ptrdiff_t m_bGroupByPrefab = 0x739;
    constexpr std::ptrdiff_t m_bGroupByVolume = 0x73a;
    constexpr std::ptrdiff_t m_bGroupOtherGroups = 0x73b;
    constexpr std::ptrdiff_t m_bIsInGroup = 0x73c;
}

namespace CMarkupVolumeTagged_NavGame {
    constexpr std::ptrdiff_t m_bFloodFillAttribute = 0x758;
}

namespace CMarkupVolumeWithRef {
    constexpr std::ptrdiff_t m_bUseRef = 0x740;
    constexpr std::ptrdiff_t m_vRefPos = 0x744;
    constexpr std::ptrdiff_t m_flRefDot = 0x750;
}

namespace CMathColorBlend {
    constexpr std::ptrdiff_t m_flInMin = 0x4b0;
    constexpr std::ptrdiff_t m_flInMax = 0x4b4;
    constexpr std::ptrdiff_t m_OutColor1 = 0x4b8;
    constexpr std::ptrdiff_t m_OutColor2 = 0x4bc;
    constexpr std::ptrdiff_t m_OutValue = 0x4c0;
}

namespace CMathCounter {
    constexpr std::ptrdiff_t m_flMin = 0x4b0;
    constexpr std::ptrdiff_t m_flMax = 0x4b4;
    constexpr std::ptrdiff_t m_bHitMin = 0x4b8;
    constexpr std::ptrdiff_t m_bHitMax = 0x4b9;
    constexpr std::ptrdiff_t m_bDisabled = 0x4ba;
    constexpr std::ptrdiff_t m_OutValue = 0x4c0;
    constexpr std::ptrdiff_t m_OnGetValue = 0x4e8;
    constexpr std::ptrdiff_t m_OnHitMin = 0x510;
    constexpr std::ptrdiff_t m_OnHitMax = 0x538;
    constexpr std::ptrdiff_t m_OnChangedFromMin = 0x560;
    constexpr std::ptrdiff_t m_OnChangedFromMax = 0x588;
}

namespace CMathRemap {
    constexpr std::ptrdiff_t m_flInMin = 0x4b0;
    constexpr std::ptrdiff_t m_flInMax = 0x4b4;
    constexpr std::ptrdiff_t m_flOut1 = 0x4b8;
    constexpr std::ptrdiff_t m_flOut2 = 0x4bc;
    constexpr std::ptrdiff_t m_flOldInValue = 0x4c0;
    constexpr std::ptrdiff_t m_bEnabled = 0x4c4;
    constexpr std::ptrdiff_t m_OutValue = 0x4c8;
    constexpr std::ptrdiff_t m_OnRoseAboveMin = 0x4f0;
    constexpr std::ptrdiff_t m_OnRoseAboveMax = 0x518;
    constexpr std::ptrdiff_t m_OnFellBelowMin = 0x540;
    constexpr std::ptrdiff_t m_OnFellBelowMax = 0x568;
}

namespace CMelee {
    constexpr std::ptrdiff_t m_flThrowAt = 0xe80;
    constexpr std::ptrdiff_t m_hThrower = 0xe84;
    constexpr std::ptrdiff_t m_bDidThrowDamage = 0xe88;
}

namespace CMessage {
    constexpr std::ptrdiff_t m_iszMessage = 0x4b0;
    constexpr std::ptrdiff_t m_MessageVolume = 0x4b8;
    constexpr std::ptrdiff_t m_MessageAttenuation = 0x4bc;
    constexpr std::ptrdiff_t m_Radius = 0x4c0;
    constexpr std::ptrdiff_t m_sNoise = 0x4c8;
    constexpr std::ptrdiff_t m_OnShowMessage = 0x4d0;
}

namespace CMessageEntity {
    constexpr std::ptrdiff_t m_radius = 0x4b0;
    constexpr std::ptrdiff_t m_messageText = 0x4b8;
    constexpr std::ptrdiff_t m_drawText = 0x4c0;
    constexpr std::ptrdiff_t m_bDeveloperOnly = 0x4c1;
    constexpr std::ptrdiff_t m_bEnabled = 0x4c2;
}

namespace CModelState {
    constexpr std::ptrdiff_t m_hModel = 0xa0;
    constexpr std::ptrdiff_t m_ModelName = 0xa8;
    constexpr std::ptrdiff_t m_bClientClothCreationSuppressed = 0xe8;
    constexpr std::ptrdiff_t m_MeshGroupMask = 0x180;
    constexpr std::ptrdiff_t m_nIdealMotionType = 0x222;
    constexpr std::ptrdiff_t m_nForceLOD = 0x223;
    constexpr std::ptrdiff_t m_nClothUpdateFlags = 0x224;
}

namespace CMolotovProjectile {
    constexpr std::ptrdiff_t m_bIsIncGrenade = 0xac8;
    constexpr std::ptrdiff_t m_bDetonated = 0xad4;
    constexpr std::ptrdiff_t m_stillTimer = 0xad8;
    constexpr std::ptrdiff_t m_bHasBouncedOffPlayer = 0xbb8;
}

namespace CMomentaryRotButton {
    constexpr std::ptrdiff_t m_Position = 0x8c8;
    constexpr std::ptrdiff_t m_OnUnpressed = 0x8f0;
    constexpr std::ptrdiff_t m_OnFullyOpen = 0x918;
    constexpr std::ptrdiff_t m_OnFullyClosed = 0x940;
    constexpr std::ptrdiff_t m_OnReachedPosition = 0x968;
    constexpr std::ptrdiff_t m_lastUsed = 0x990;
    constexpr std::ptrdiff_t m_start = 0x994;
    constexpr std::ptrdiff_t m_end = 0x9a0;
    constexpr std::ptrdiff_t m_IdealYaw = 0x9ac;
    constexpr std::ptrdiff_t m_sNoise = 0x9b0;
    constexpr std::ptrdiff_t m_bUpdateTarget = 0x9b8;
    constexpr std::ptrdiff_t m_direction = 0x9bc;
    constexpr std::ptrdiff_t m_returnSpeed = 0x9c0;
    constexpr std::ptrdiff_t m_flStartPosition = 0x9c4;
}

namespace CMotorController {
    constexpr std::ptrdiff_t m_speed = 0x8;
    constexpr std::ptrdiff_t m_maxTorque = 0xc;
    constexpr std::ptrdiff_t m_axis = 0x10;
    constexpr std::ptrdiff_t m_inertiaFactor = 0x1c;
}

namespace CMultiLightProxy {
    constexpr std::ptrdiff_t m_iszLightNameFilter = 0x4b0;
    constexpr std::ptrdiff_t m_iszLightClassFilter = 0x4b8;
    constexpr std::ptrdiff_t m_flLightRadiusFilter = 0x4c0;
    constexpr std::ptrdiff_t m_flBrightnessDelta = 0x4c4;
    constexpr std::ptrdiff_t m_bPerformScreenFade = 0x4c8;
    constexpr std::ptrdiff_t m_flTargetBrightnessMultiplier = 0x4cc;
    constexpr std::ptrdiff_t m_flCurrentBrightnessMultiplier = 0x4d0;
    constexpr std::ptrdiff_t m_vecLights = 0x4d8;
}

namespace CMultiSource {
    constexpr std::ptrdiff_t m_rgEntities = 0x4b0;
    constexpr std::ptrdiff_t m_rgTriggered = 0x530;
    constexpr std::ptrdiff_t m_OnTrigger = 0x5b0;
    constexpr std::ptrdiff_t m_iTotal = 0x5d8;
    constexpr std::ptrdiff_t m_globalstate = 0x5e0;
}

namespace CMultiplayer_Expresser {
    constexpr std::ptrdiff_t m_bAllowMultipleScenes = 0x70;
}

namespace CNavHullPresetVData {
    constexpr std::ptrdiff_t m_vecNavHulls = 0x0;
}

namespace CNavHullVData {
    constexpr std::ptrdiff_t m_bAgentEnabled = 0x0;
    constexpr std::ptrdiff_t m_agentRadius = 0x4;
    constexpr std::ptrdiff_t m_agentHeight = 0x8;
    constexpr std::ptrdiff_t m_agentShortHeightEnabled = 0xc;
    constexpr std::ptrdiff_t m_agentShortHeight = 0x10;
    constexpr std::ptrdiff_t m_agentMaxClimb = 0x14;
    constexpr std::ptrdiff_t m_agentMaxSlope = 0x18;
    constexpr std::ptrdiff_t m_agentMaxJumpDownDist = 0x1c;
    constexpr std::ptrdiff_t m_agentMaxJumpHorizDistBase = 0x20;
    constexpr std::ptrdiff_t m_agentMaxJumpUpDist = 0x24;
    constexpr std::ptrdiff_t m_agentBorderErosion = 0x28;
}

namespace CNavLinkAnimgraphVar {
    constexpr std::ptrdiff_t m_strAnimgraphVar = 0x0;
    constexpr std::ptrdiff_t m_unAlignmentDegrees = 0x8;
}

namespace CNavLinkAreaEntity {
    constexpr std::ptrdiff_t m_flWidth = 0x4b0;
    constexpr std::ptrdiff_t m_vLocatorOffset = 0x4b4;
    constexpr std::ptrdiff_t m_qLocatorAnglesOffset = 0x4c0;
    constexpr std::ptrdiff_t m_strMovementForward = 0x4d0;
    constexpr std::ptrdiff_t m_strMovementReverse = 0x4d8;
    constexpr std::ptrdiff_t m_nNavLinkIdForward = 0x4e0;
    constexpr std::ptrdiff_t m_nNavLinkIdReverse = 0x4e4;
    constexpr std::ptrdiff_t m_bEnabled = 0x4e8;
    constexpr std::ptrdiff_t m_strFilterName = 0x4f0;
    constexpr std::ptrdiff_t m_hFilter = 0x4f8;
    constexpr std::ptrdiff_t m_OnNavLinkStart = 0x500;
    constexpr std::ptrdiff_t m_OnNavLinkFinish = 0x528;
    constexpr std::ptrdiff_t m_bIsTerminus = 0x550;
}

namespace CNavLinkMovementVData {
    constexpr std::ptrdiff_t m_bIsInterpolated = 0x0;
    constexpr std::ptrdiff_t m_unRecommendedDistance = 0x4;
    constexpr std::ptrdiff_t m_vecAnimgraphVars = 0x8;
}

namespace CNavSpaceInfo {
    constexpr std::ptrdiff_t m_bCreateFlightSpace = 0x4b0;
}

namespace CNavVolumeBreadthFirstSearch {
    constexpr std::ptrdiff_t m_vStartPos = 0xa0;
    constexpr std::ptrdiff_t m_flSearchDist = 0xac;
}

namespace CNavVolumeSphere {
    constexpr std::ptrdiff_t m_vCenter = 0x70;
    constexpr std::ptrdiff_t m_flRadius = 0x7c;
}

namespace CNavVolumeSphericalShell {
    constexpr std::ptrdiff_t m_flRadiusInner = 0x80;
}

namespace CNavVolumeVector {
    constexpr std::ptrdiff_t m_bHasBeenPreFiltered = 0x78;
}

namespace CNetworkOriginCellCoordQuantizedVector {
    constexpr std::ptrdiff_t m_cellX = 0x10;
    constexpr std::ptrdiff_t m_cellY = 0x12;
    constexpr std::ptrdiff_t m_cellZ = 0x14;
    constexpr std::ptrdiff_t m_nOutsideWorld = 0x16;
    constexpr std::ptrdiff_t m_vecX = 0x18;
    constexpr std::ptrdiff_t m_vecY = 0x20;
    constexpr std::ptrdiff_t m_vecZ = 0x28;
}

namespace CNetworkOriginQuantizedVector {
    constexpr std::ptrdiff_t m_vecX = 0x10;
    constexpr std::ptrdiff_t m_vecY = 0x18;
    constexpr std::ptrdiff_t m_vecZ = 0x20;
}

namespace CNetworkTransmitComponent {
    constexpr std::ptrdiff_t m_nTransmitStateOwnedCounter = 0x16c;
}

namespace CNetworkVelocityVector {
    constexpr std::ptrdiff_t m_vecX = 0x10;
    constexpr std::ptrdiff_t m_vecY = 0x18;
    constexpr std::ptrdiff_t m_vecZ = 0x20;
}

namespace CNetworkViewOffsetVector {
    constexpr std::ptrdiff_t m_vecX = 0x10;
    constexpr std::ptrdiff_t m_vecY = 0x18;
    constexpr std::ptrdiff_t m_vecZ = 0x20;
}

namespace CNetworkedSequenceOperation {
    constexpr std::ptrdiff_t m_hSequence = 0x8;
    constexpr std::ptrdiff_t m_flPrevCycle = 0xc;
    constexpr std::ptrdiff_t m_flCycle = 0x10;
    constexpr std::ptrdiff_t m_flWeight = 0x14;
    constexpr std::ptrdiff_t m_bSequenceChangeNetworked = 0x1c;
    constexpr std::ptrdiff_t m_bDiscontinuity = 0x1d;
    constexpr std::ptrdiff_t m_flPrevCycleFromDiscontinuity = 0x20;
    constexpr std::ptrdiff_t m_flPrevCycleForAnimEventDetection = 0x24;
}

namespace COmniLight {
    constexpr std::ptrdiff_t m_flInnerAngle = 0x938;
    constexpr std::ptrdiff_t m_flOuterAngle = 0x93c;
    constexpr std::ptrdiff_t m_bShowLight = 0x940;
}

namespace COrnamentProp {
    constexpr std::ptrdiff_t m_initialOwner = 0xba8;
}

namespace CParadropChopper {
    constexpr std::ptrdiff_t m_vecDropPos = 0x934;
    constexpr std::ptrdiff_t m_flLastDistFromDrop = 0x940;
    constexpr std::ptrdiff_t m_bDroppedParadrop = 0x944;
    constexpr std::ptrdiff_t m_pSoundLoop = 0x948;
    constexpr std::ptrdiff_t m_flSpawnTime = 0x950;
    constexpr std::ptrdiff_t m_flFlightTime = 0x954;
    constexpr std::ptrdiff_t m_bPlayerIsFinishedRappelling = 0x958;
    constexpr std::ptrdiff_t m_flPlayerFinishedRappellingTime = 0x95c;
    constexpr std::ptrdiff_t m_strFlyoverDropEvent = 0x960;
    constexpr std::ptrdiff_t m_hCallingPlayer = 0x968;
    constexpr std::ptrdiff_t m_bCalledByPlayer = 0x96c;
}

namespace CParticleSystem {
    constexpr std::ptrdiff_t m_szSnapshotFileName = 0x700;
    constexpr std::ptrdiff_t m_bActive = 0x900;
    constexpr std::ptrdiff_t m_bFrozen = 0x901;
    constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0x904;
    constexpr std::ptrdiff_t m_nStopType = 0x908;
    constexpr std::ptrdiff_t m_bAnimateDuringGameplayPause = 0x90c;
    constexpr std::ptrdiff_t m_iEffectIndex = 0x910;
    constexpr std::ptrdiff_t m_flStartTime = 0x918;
    constexpr std::ptrdiff_t m_flPreSimTime = 0x91c;
    constexpr std::ptrdiff_t m_vServerControlPoints = 0x920;
    constexpr std::ptrdiff_t m_iServerControlPointAssignments = 0x950;
    constexpr std::ptrdiff_t m_hControlPointEnts = 0x954;
    constexpr std::ptrdiff_t m_bNoSave = 0xa54;
    constexpr std::ptrdiff_t m_bNoFreeze = 0xa55;
    constexpr std::ptrdiff_t m_bNoRamp = 0xa56;
    constexpr std::ptrdiff_t m_bStartActive = 0xa57;
    constexpr std::ptrdiff_t m_iszEffectName = 0xa58;
    constexpr std::ptrdiff_t m_iszControlPointNames = 0xa60;
    constexpr std::ptrdiff_t m_nDataCP = 0xc60;
    constexpr std::ptrdiff_t m_vecDataCPValue = 0xc64;
    constexpr std::ptrdiff_t m_nTintCP = 0xc70;
    constexpr std::ptrdiff_t m_clrTint = 0xc74;
}

namespace CPathCorner {
    constexpr std::ptrdiff_t m_flWait = 0x4b0;
    constexpr std::ptrdiff_t m_flRadius = 0x4b4;
    constexpr std::ptrdiff_t m_OnPass = 0x4b8;
}

namespace CPathKeyFrame {
    constexpr std::ptrdiff_t m_Origin = 0x4b0;
    constexpr std::ptrdiff_t m_Angles = 0x4bc;
    constexpr std::ptrdiff_t m_qAngle = 0x4d0;
    constexpr std::ptrdiff_t m_iNextKey = 0x4e0;
    constexpr std::ptrdiff_t m_flNextTime = 0x4e8;
    constexpr std::ptrdiff_t m_pNextKey = 0x4f0;
    constexpr std::ptrdiff_t m_pPrevKey = 0x4f8;
    constexpr std::ptrdiff_t m_flSpeed = 0x500;
}

namespace CPathParticleRope {
    constexpr std::ptrdiff_t m_bStartActive = 0x4b0;
    constexpr std::ptrdiff_t m_flMaxSimulationTime = 0x4b4;
    constexpr std::ptrdiff_t m_iszEffectName = 0x4b8;
    constexpr std::ptrdiff_t m_PathNodes_Name = 0x4c0;
    constexpr std::ptrdiff_t m_flParticleSpacing = 0x4d8;
    constexpr std::ptrdiff_t m_flSlack = 0x4dc;
    constexpr std::ptrdiff_t m_flRadius = 0x4e0;
    constexpr std::ptrdiff_t m_ColorTint = 0x4e4;
    constexpr std::ptrdiff_t m_nEffectState = 0x4e8;
    constexpr std::ptrdiff_t m_iEffectIndex = 0x4f0;
    constexpr std::ptrdiff_t m_PathNodes_Position = 0x4f8;
    constexpr std::ptrdiff_t m_PathNodes_TangentIn = 0x510;
    constexpr std::ptrdiff_t m_PathNodes_TangentOut = 0x528;
    constexpr std::ptrdiff_t m_PathNodes_Color = 0x540;
    constexpr std::ptrdiff_t m_PathNodes_PinEnabled = 0x558;
    constexpr std::ptrdiff_t m_PathNodes_RadiusScale = 0x570;
}

namespace CPathTrack {
    constexpr std::ptrdiff_t m_pnext = 0x4b0;
    constexpr std::ptrdiff_t m_pprevious = 0x4b8;
    constexpr std::ptrdiff_t m_paltpath = 0x4c0;
    constexpr std::ptrdiff_t m_flRadius = 0x4c8;
    constexpr std::ptrdiff_t m_length = 0x4cc;
    constexpr std::ptrdiff_t m_altName = 0x4d0;
    constexpr std::ptrdiff_t m_nIterVal = 0x4d8;
    constexpr std::ptrdiff_t m_eOrientationType = 0x4dc;
    constexpr std::ptrdiff_t m_OnPass = 0x4e0;
}

namespace CPhysBallSocket {
    constexpr std::ptrdiff_t m_flFriction = 0x508;
    constexpr std::ptrdiff_t m_bEnableSwingLimit = 0x50c;
    constexpr std::ptrdiff_t m_flSwingLimit = 0x510;
    constexpr std::ptrdiff_t m_bEnableTwistLimit = 0x514;
    constexpr std::ptrdiff_t m_flMinTwistAngle = 0x518;
    constexpr std::ptrdiff_t m_flMaxTwistAngle = 0x51c;
}

namespace CPhysBox {
    constexpr std::ptrdiff_t m_damageType = 0x7c0;
    constexpr std::ptrdiff_t m_massScale = 0x7c4;
    constexpr std::ptrdiff_t m_damageToEnableMotion = 0x7c8;
    constexpr std::ptrdiff_t m_flForceToEnableMotion = 0x7cc;
    constexpr std::ptrdiff_t m_angPreferredCarryAngles = 0x7d0;
    constexpr std::ptrdiff_t m_bNotSolidToWorld = 0x7dc;
    constexpr std::ptrdiff_t m_bEnableUseOutput = 0x7dd;
    constexpr std::ptrdiff_t m_iExploitableByPlayer = 0x7e0;
    constexpr std::ptrdiff_t m_flTouchOutputPerEntityDelay = 0x7e4;
    constexpr std::ptrdiff_t m_OnDamaged = 0x7e8;
    constexpr std::ptrdiff_t m_OnAwakened = 0x810;
    constexpr std::ptrdiff_t m_OnMotionEnabled = 0x838;
    constexpr std::ptrdiff_t m_OnPlayerUse = 0x860;
    constexpr std::ptrdiff_t m_OnStartTouch = 0x888;
    constexpr std::ptrdiff_t m_hCarryingPlayer = 0x8b0;
}

namespace CPhysConstraint {
    constexpr std::ptrdiff_t m_nameAttach1 = 0x4b8;
    constexpr std::ptrdiff_t m_nameAttach2 = 0x4c0;
    constexpr std::ptrdiff_t m_breakSound = 0x4c8;
    constexpr std::ptrdiff_t m_forceLimit = 0x4d0;
    constexpr std::ptrdiff_t m_torqueLimit = 0x4d4;
    constexpr std::ptrdiff_t m_teleportTick = 0x4d8;
    constexpr std::ptrdiff_t m_minTeleportDistance = 0x4dc;
    constexpr std::ptrdiff_t m_OnBreak = 0x4e0;
}

namespace CPhysExplosion {
    constexpr std::ptrdiff_t m_bExplodeOnSpawn = 0x4b0;
    constexpr std::ptrdiff_t m_flMagnitude = 0x4b4;
    constexpr std::ptrdiff_t m_flDamage = 0x4b8;
    constexpr std::ptrdiff_t m_radius = 0x4bc;
    constexpr std::ptrdiff_t m_targetEntityName = 0x4c0;
    constexpr std::ptrdiff_t m_flInnerRadius = 0x4c8;
    constexpr std::ptrdiff_t m_flPushScale = 0x4cc;
    constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0x4d0;
    constexpr std::ptrdiff_t m_OnPushedPlayer = 0x4d8;
}

namespace CPhysFixed {
    constexpr std::ptrdiff_t m_flLinearFrequency = 0x508;
    constexpr std::ptrdiff_t m_flLinearDampingRatio = 0x50c;
    constexpr std::ptrdiff_t m_flAngularFrequency = 0x510;
    constexpr std::ptrdiff_t m_flAngularDampingRatio = 0x514;
    constexpr std::ptrdiff_t m_bEnableLinearConstraint = 0x518;
    constexpr std::ptrdiff_t m_bEnableAngularConstraint = 0x519;
}

namespace CPhysForce {
    constexpr std::ptrdiff_t m_nameAttach = 0x4b8;
    constexpr std::ptrdiff_t m_force = 0x4c0;
    constexpr std::ptrdiff_t m_forceTime = 0x4c4;
    constexpr std::ptrdiff_t m_attachedObject = 0x4c8;
    constexpr std::ptrdiff_t m_wasRestored = 0x4cc;
    constexpr std::ptrdiff_t m_integrator = 0x4d0;
}

namespace CPhysHinge {
    constexpr std::ptrdiff_t m_soundInfo = 0x510;
    constexpr std::ptrdiff_t m_NotifyMinLimitReached = 0x598;
    constexpr std::ptrdiff_t m_NotifyMaxLimitReached = 0x5c0;
    constexpr std::ptrdiff_t m_bAtMinLimit = 0x5e8;
    constexpr std::ptrdiff_t m_bAtMaxLimit = 0x5e9;
    constexpr std::ptrdiff_t m_hinge = 0x5ec;
    constexpr std::ptrdiff_t m_hingeFriction = 0x62c;
    constexpr std::ptrdiff_t m_systemLoadScale = 0x630;
    constexpr std::ptrdiff_t m_bIsAxisLocal = 0x634;
    constexpr std::ptrdiff_t m_flMinRotation = 0x638;
    constexpr std::ptrdiff_t m_flMaxRotation = 0x63c;
    constexpr std::ptrdiff_t m_flInitialRotation = 0x640;
    constexpr std::ptrdiff_t m_flMotorFrequency = 0x644;
    constexpr std::ptrdiff_t m_flMotorDampingRatio = 0x648;
    constexpr std::ptrdiff_t m_flAngleSpeed = 0x64c;
    constexpr std::ptrdiff_t m_flAngleSpeedThreshold = 0x650;
    constexpr std::ptrdiff_t m_OnStartMoving = 0x658;
    constexpr std::ptrdiff_t m_OnStopMoving = 0x680;
}

namespace CPhysImpact {
    constexpr std::ptrdiff_t m_damage = 0x4b0;
    constexpr std::ptrdiff_t m_distance = 0x4b4;
    constexpr std::ptrdiff_t m_directionEntityName = 0x4b8;
}

namespace CPhysLength {
    constexpr std::ptrdiff_t m_offset = 0x508;
    constexpr std::ptrdiff_t m_vecAttach = 0x520;
    constexpr std::ptrdiff_t m_addLength = 0x52c;
    constexpr std::ptrdiff_t m_minLength = 0x530;
    constexpr std::ptrdiff_t m_totalLength = 0x534;
    constexpr std::ptrdiff_t m_bEnableCollision = 0x538;
}

namespace CPhysMagnet {
    constexpr std::ptrdiff_t m_OnMagnetAttach = 0x930;
    constexpr std::ptrdiff_t m_OnMagnetDetach = 0x958;
    constexpr std::ptrdiff_t m_massScale = 0x980;
    constexpr std::ptrdiff_t m_forceLimit = 0x984;
    constexpr std::ptrdiff_t m_torqueLimit = 0x988;
    constexpr std::ptrdiff_t m_MagnettedEntities = 0x990;
    constexpr std::ptrdiff_t m_bActive = 0x9a8;
    constexpr std::ptrdiff_t m_bHasHitSomething = 0x9a9;
    constexpr std::ptrdiff_t m_flTotalMass = 0x9ac;
    constexpr std::ptrdiff_t m_flRadius = 0x9b0;
    constexpr std::ptrdiff_t m_flNextSuckTime = 0x9b4;
    constexpr std::ptrdiff_t m_iMaxObjectsAttached = 0x9b8;
}

namespace CPhysMotor {
    constexpr std::ptrdiff_t m_nameAttach = 0x4b0;
    constexpr std::ptrdiff_t m_hAttachedObject = 0x4b8;
    constexpr std::ptrdiff_t m_spinUp = 0x4bc;
    constexpr std::ptrdiff_t m_additionalAcceleration = 0x4c0;
    constexpr std::ptrdiff_t m_angularAcceleration = 0x4c4;
    constexpr std::ptrdiff_t m_lastTime = 0x4c8;
    constexpr std::ptrdiff_t m_motor = 0x4e0;
}

namespace CPhysPropAmmoBox {
    constexpr std::ptrdiff_t m_nUsesRemaining = 0xc40;
    constexpr std::ptrdiff_t m_flTimeLastUsed = 0xc44;
}

namespace CPhysPropLootCrate {
    constexpr std::ptrdiff_t m_bRenderInPSPM = 0xc40;
    constexpr std::ptrdiff_t m_bRenderInTablet = 0xc41;
    constexpr std::ptrdiff_t m_flSpawnTime = 0xc44;
    constexpr std::ptrdiff_t m_bTakeDamageFromDangerZone = 0xc48;
    constexpr std::ptrdiff_t m_pszCrateName = 0xc50;
    constexpr std::ptrdiff_t m_hCrateOwner = 0xc58;
    constexpr std::ptrdiff_t m_bOwnedByPlayer = 0xc5c;
    constexpr std::ptrdiff_t m_flDampingOriginalSpeed = 0xc60;
    constexpr std::ptrdiff_t m_flDampingOriginalRot = 0xc64;
}

namespace CPhysPropMapPlacedLongUseEntity {
    constexpr std::ptrdiff_t m_iszStartUseSound = 0xc48;
    constexpr std::ptrdiff_t m_nPingType = 0xc50;
    constexpr std::ptrdiff_t m_nLongUseActionType = 0xc54;
    constexpr std::ptrdiff_t m_flLongUseDuration = 0xc58;
    constexpr std::ptrdiff_t m_OnUseCompleted = 0xc60;
}

namespace CPhysPropMoneyCrate {
    constexpr std::ptrdiff_t m_nCurrentCashCount = 0xc68;
    constexpr std::ptrdiff_t m_nCashCount = 0xc6c;
    constexpr std::ptrdiff_t m_flTimeLastUsed = 0xc70;
}

namespace CPhysPropParadropCrate {
    constexpr std::ptrdiff_t m_bFalling = 0xc68;
    constexpr std::ptrdiff_t m_nNumThinksAtZeroVerticalVelocity = 0xc6c;
}

namespace CPhysPropRadarJammer {
    constexpr std::ptrdiff_t m_flSpawnTime = 0xc48;
    constexpr std::ptrdiff_t m_flLastSoundTime = 0xc4c;
    constexpr std::ptrdiff_t m_vecJammedHexCenters = 0xc50;
    constexpr std::ptrdiff_t m_vecLastJammedOrigin = 0xc68;
}

namespace CPhysPropWeaponUpgrade {
    constexpr std::ptrdiff_t m_nEventPriority = 0xc40;
    constexpr std::ptrdiff_t m_flTimeLastUsed = 0xc44;
}

namespace CPhysPulley {
    constexpr std::ptrdiff_t m_position2 = 0x508;
    constexpr std::ptrdiff_t m_offset = 0x514;
    constexpr std::ptrdiff_t m_addLength = 0x52c;
    constexpr std::ptrdiff_t m_gearRatio = 0x530;
}

namespace CPhysSlideConstraint {
    constexpr std::ptrdiff_t m_axisEnd = 0x510;
    constexpr std::ptrdiff_t m_slideFriction = 0x51c;
    constexpr std::ptrdiff_t m_systemLoadScale = 0x520;
    constexpr std::ptrdiff_t m_initialOffset = 0x524;
    constexpr std::ptrdiff_t m_bEnableLinearConstraint = 0x528;
    constexpr std::ptrdiff_t m_bEnableAngularConstraint = 0x529;
    constexpr std::ptrdiff_t m_flMotorFrequency = 0x52c;
    constexpr std::ptrdiff_t m_flMotorDampingRatio = 0x530;
    constexpr std::ptrdiff_t m_bUseEntityPivot = 0x534;
    constexpr std::ptrdiff_t m_soundInfo = 0x538;
}

namespace CPhysThruster {
    constexpr std::ptrdiff_t m_localOrigin = 0x510;
}

namespace CPhysTorque {
    constexpr std::ptrdiff_t m_axis = 0x510;
}

namespace CPhysWheelConstraint {
    constexpr std::ptrdiff_t m_flSuspensionFrequency = 0x508;
    constexpr std::ptrdiff_t m_flSuspensionDampingRatio = 0x50c;
    constexpr std::ptrdiff_t m_flSuspensionHeightOffset = 0x510;
    constexpr std::ptrdiff_t m_bEnableSuspensionLimit = 0x514;
    constexpr std::ptrdiff_t m_flMinSuspensionOffset = 0x518;
    constexpr std::ptrdiff_t m_flMaxSuspensionOffset = 0x51c;
    constexpr std::ptrdiff_t m_bEnableSteeringLimit = 0x520;
    constexpr std::ptrdiff_t m_flMinSteeringAngle = 0x524;
    constexpr std::ptrdiff_t m_flMaxSteeringAngle = 0x528;
    constexpr std::ptrdiff_t m_flSteeringAxisFriction = 0x52c;
    constexpr std::ptrdiff_t m_flSpinAxisFriction = 0x530;
}

namespace CPhysicsEntitySolver {
    constexpr std::ptrdiff_t m_hMovingEntity = 0x4b8;
    constexpr std::ptrdiff_t m_hPhysicsBlocker = 0x4bc;
    constexpr std::ptrdiff_t m_separationDuration = 0x4c0;
    constexpr std::ptrdiff_t m_cancelTime = 0x4c4;
}

namespace CPhysicsProp {
    constexpr std::ptrdiff_t m_MotionEnabled = 0xab0;
    constexpr std::ptrdiff_t m_OnAwakened = 0xad8;
    constexpr std::ptrdiff_t m_OnAwake = 0xb00;
    constexpr std::ptrdiff_t m_OnAsleep = 0xb28;
    constexpr std::ptrdiff_t m_OnPlayerUse = 0xb50;
    constexpr std::ptrdiff_t m_OnPlayerPickup = 0xb78;
    constexpr std::ptrdiff_t m_OnOutOfWorld = 0xba0;
    constexpr std::ptrdiff_t m_massScale = 0xbc8;
    constexpr std::ptrdiff_t m_inertiaScale = 0xbcc;
    constexpr std::ptrdiff_t m_buoyancyScale = 0xbd0;
    constexpr std::ptrdiff_t m_damageType = 0xbd4;
    constexpr std::ptrdiff_t m_damageToEnableMotion = 0xbd8;
    constexpr std::ptrdiff_t m_flForceToEnableMotion = 0xbdc;
    constexpr std::ptrdiff_t m_bThrownByPlayer = 0xbe0;
    constexpr std::ptrdiff_t m_bDroppedByPlayer = 0xbe1;
    constexpr std::ptrdiff_t m_bTouchedByPlayer = 0xbe2;
    constexpr std::ptrdiff_t m_bFirstCollisionAfterLaunch = 0xbe3;
    constexpr std::ptrdiff_t m_iExploitableByPlayer = 0xbe4;
    constexpr std::ptrdiff_t m_bHasBeenAwakened = 0xbe8;
    constexpr std::ptrdiff_t m_bIsOverrideProp = 0xbe9;
    constexpr std::ptrdiff_t m_fNextCheckDisableMotionContactsTime = 0xbec;
    constexpr std::ptrdiff_t m_iInitialGlowState = 0xbf0;
    constexpr std::ptrdiff_t m_nGlowRange = 0xbf4;
    constexpr std::ptrdiff_t m_nGlowRangeMin = 0xbf8;
    constexpr std::ptrdiff_t m_glowColor = 0xbfc;
    constexpr std::ptrdiff_t m_bForceNavIgnore = 0xc00;
    constexpr std::ptrdiff_t m_bNoNavmeshBlocker = 0xc01;
    constexpr std::ptrdiff_t m_bForceNpcExclude = 0xc02;
    constexpr std::ptrdiff_t m_bShouldAutoConvertBackFromDebris = 0xc03;
    constexpr std::ptrdiff_t m_bMuteImpactEffects = 0xc04;
    constexpr std::ptrdiff_t m_bAcceptDamageFromHeldObjects = 0xc0c;
    constexpr std::ptrdiff_t m_bEnableUseOutput = 0xc0d;
    constexpr std::ptrdiff_t m_bAwake = 0xc0e;
    constexpr std::ptrdiff_t m_nCollisionGroupOverride = 0xc10;
}

namespace CPhysicsPropRespawnable {
    constexpr std::ptrdiff_t m_vOriginalSpawnOrigin = 0xc18;
    constexpr std::ptrdiff_t m_vOriginalSpawnAngles = 0xc24;
    constexpr std::ptrdiff_t m_vOriginalMins = 0xc30;
    constexpr std::ptrdiff_t m_vOriginalMaxs = 0xc3c;
    constexpr std::ptrdiff_t m_flRespawnDuration = 0xc48;
}

namespace CPhysicsShake {
    constexpr std::ptrdiff_t m_force = 0x8;
}

namespace CPhysicsSpring {
    constexpr std::ptrdiff_t m_flFrequency = 0x4b8;
    constexpr std::ptrdiff_t m_flDampingRatio = 0x4bc;
    constexpr std::ptrdiff_t m_flRestLength = 0x4c0;
    constexpr std::ptrdiff_t m_nameAttachStart = 0x4c8;
    constexpr std::ptrdiff_t m_nameAttachEnd = 0x4d0;
    constexpr std::ptrdiff_t m_start = 0x4d8;
    constexpr std::ptrdiff_t m_end = 0x4e4;
    constexpr std::ptrdiff_t m_teleportTick = 0x4f0;
}

namespace CPhysicsWire {
    constexpr std::ptrdiff_t m_nDensity = 0x4b0;
}

namespace CPlantedC4 {
    constexpr std::ptrdiff_t m_bPlantedAtQuestTarget = 0x930;
    constexpr std::ptrdiff_t m_bBombTicking = 0x931;
    constexpr std::ptrdiff_t m_flC4Blow = 0x934;
    constexpr std::ptrdiff_t m_nBombSite = 0x938;
    constexpr std::ptrdiff_t m_nSourceSoundscapeHash = 0x93c;
    constexpr std::ptrdiff_t m_OnBombDefused = 0x940;
    constexpr std::ptrdiff_t m_OnBombBeginDefuse = 0x968;
    constexpr std::ptrdiff_t m_OnBombDefuseAborted = 0x990;
    constexpr std::ptrdiff_t m_bCannotBeDefused = 0x9b8;
    constexpr std::ptrdiff_t m_entitySpottedState = 0x9c0;
    constexpr std::ptrdiff_t m_nSpotRules = 0x9d8;
    constexpr std::ptrdiff_t m_bTrainingPlacedByPlayer = 0x9dc;
    constexpr std::ptrdiff_t m_bHasExploded = 0x9dd;
    constexpr std::ptrdiff_t m_flTimerLength = 0x9e0;
    constexpr std::ptrdiff_t m_bBeingDefused = 0x9e4;
    constexpr std::ptrdiff_t m_fLastDefuseTime = 0x9ec;
    constexpr std::ptrdiff_t m_flDefuseLength = 0x9f4;
    constexpr std::ptrdiff_t m_flDefuseCountDown = 0x9f8;
    constexpr std::ptrdiff_t m_bBombDefused = 0x9fc;
    constexpr std::ptrdiff_t m_hBombDefuser = 0xa00;
    constexpr std::ptrdiff_t m_hControlPanel = 0xa04;
    constexpr std::ptrdiff_t m_iProgressBarTime = 0xa08;
    constexpr std::ptrdiff_t m_bVoiceAlertFired = 0xa0c;
    constexpr std::ptrdiff_t m_bVoiceAlertPlayed = 0xa0d;
    constexpr std::ptrdiff_t m_flNextBotBeepTime = 0xa14;
    constexpr std::ptrdiff_t m_bPlantedAfterPickup = 0xa1c;
    constexpr std::ptrdiff_t m_angCatchUpToPlayerEye = 0xa20;
    constexpr std::ptrdiff_t m_flLastSpinDetectionTime = 0xa2c;
}

namespace CPlatTrigger {
    constexpr std::ptrdiff_t m_pPlatform = 0x700;
}

namespace CPlayerControllerComponent {
    constexpr std::ptrdiff_t __m_pChainEntity = 0x8;
}

namespace CPlayerPawnComponent {
    constexpr std::ptrdiff_t __m_pChainEntity = 0x8;
}

namespace CPlayerPing {
    constexpr std::ptrdiff_t m_hPlayer = 0x4b8;
    constexpr std::ptrdiff_t m_hPingedEntity = 0x4bc;
    constexpr std::ptrdiff_t m_iType = 0x4c0;
    constexpr std::ptrdiff_t m_bUrgent = 0x4c4;
    constexpr std::ptrdiff_t m_szPlaceName = 0x4c5;
}

namespace CPlayerSprayDecal {
    constexpr std::ptrdiff_t m_nUniqueID = 0x700;
    constexpr std::ptrdiff_t m_unAccountID = 0x704;
    constexpr std::ptrdiff_t m_unTraceID = 0x708;
    constexpr std::ptrdiff_t m_rtGcTime = 0x70c;
    constexpr std::ptrdiff_t m_vecEndPos = 0x710;
    constexpr std::ptrdiff_t m_vecStart = 0x71c;
    constexpr std::ptrdiff_t m_vecLeft = 0x728;
    constexpr std::ptrdiff_t m_vecNormal = 0x734;
    constexpr std::ptrdiff_t m_nPlayer = 0x740;
    constexpr std::ptrdiff_t m_nEntity = 0x744;
    constexpr std::ptrdiff_t m_nHitbox = 0x748;
    constexpr std::ptrdiff_t m_flCreationTime = 0x74c;
    constexpr std::ptrdiff_t m_nTintID = 0x750;
    constexpr std::ptrdiff_t m_nVersion = 0x754;
    constexpr std::ptrdiff_t m_ubSignature = 0x755;
}

namespace CPlayerVisibility {
    constexpr std::ptrdiff_t m_flVisibilityStrength = 0x4b0;
    constexpr std::ptrdiff_t m_flFogDistanceMultiplier = 0x4b4;
    constexpr std::ptrdiff_t m_flFogMaxDensityMultiplier = 0x4b8;
    constexpr std::ptrdiff_t m_flFadeTime = 0x4bc;
    constexpr std::ptrdiff_t m_bStartDisabled = 0x4c0;
    constexpr std::ptrdiff_t m_bIsEnabled = 0x4c1;
}

namespace CPlayer_CameraServices {
    constexpr std::ptrdiff_t m_vecCsViewPunchAngle = 0x40;
    constexpr std::ptrdiff_t m_nCsViewPunchAngleTick = 0x4c;
    constexpr std::ptrdiff_t m_flCsViewPunchAngleTickRatio = 0x50;
    constexpr std::ptrdiff_t m_PlayerFog = 0x58;
    constexpr std::ptrdiff_t m_hColorCorrectionCtrl = 0x98;
    constexpr std::ptrdiff_t m_hViewEntity = 0x9c;
    constexpr std::ptrdiff_t m_hTonemapController = 0xa0;
    constexpr std::ptrdiff_t m_audio = 0xa8;
    constexpr std::ptrdiff_t m_PostProcessingVolumes = 0x120;
    constexpr std::ptrdiff_t m_flOldPlayerZ = 0x138;
    constexpr std::ptrdiff_t m_flOldPlayerViewOffsetZ = 0x13c;
    constexpr std::ptrdiff_t m_hTriggerSoundscapeList = 0x158;
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
    constexpr std::ptrdiff_t m_flForwardMove = 0x1a4;
    constexpr std::ptrdiff_t m_flLeftMove = 0x1a8;
    constexpr std::ptrdiff_t m_flUpMove = 0x1ac;
    constexpr std::ptrdiff_t m_vecLastMovementImpulses = 0x1b0;
    constexpr std::ptrdiff_t m_vecOldViewAngles = 0x1bc;
}

namespace CPlayer_MovementServices_Humanoid {
    constexpr std::ptrdiff_t m_flStepSoundTime = 0x1d0;
    constexpr std::ptrdiff_t m_flFallVelocity = 0x1d4;
    constexpr std::ptrdiff_t m_bInCrouch = 0x1d8;
    constexpr std::ptrdiff_t m_nCrouchState = 0x1dc;
    constexpr std::ptrdiff_t m_flCrouchTransitionStartTime = 0x1e0;
    constexpr std::ptrdiff_t m_bDucked = 0x1e4;
    constexpr std::ptrdiff_t m_bDucking = 0x1e5;
    constexpr std::ptrdiff_t m_bInDuckJump = 0x1e6;
    constexpr std::ptrdiff_t m_groundNormal = 0x1e8;
    constexpr std::ptrdiff_t m_flSurfaceFriction = 0x1f4;
    constexpr std::ptrdiff_t m_surfaceProps = 0x1f8;
    constexpr std::ptrdiff_t m_nStepside = 0x208;
    constexpr std::ptrdiff_t m_iTargetVolume = 0x20c;
    constexpr std::ptrdiff_t m_vecSmoothedVelocity = 0x210;
}

namespace CPlayer_ObserverServices {
    constexpr std::ptrdiff_t m_iObserverMode = 0x40;
    constexpr std::ptrdiff_t m_hObserverTarget = 0x44;
    constexpr std::ptrdiff_t m_iObserverLastMode = 0x48;
    constexpr std::ptrdiff_t m_bForcedObserverMode = 0x4c;
}

namespace CPlayer_WeaponServices {
    constexpr std::ptrdiff_t m_bAllowSwitchToNoWeapon = 0x40;
    constexpr std::ptrdiff_t m_hMyWeapons = 0x48;
    constexpr std::ptrdiff_t m_hActiveWeapon = 0x60;
    constexpr std::ptrdiff_t m_hLastWeapon = 0x64;
    constexpr std::ptrdiff_t m_iAmmo = 0x68;
    constexpr std::ptrdiff_t m_bPreventWeaponPickup = 0xa8;
}

namespace CPointAngleSensor {
    constexpr std::ptrdiff_t m_bDisabled = 0x4b0;
    constexpr std::ptrdiff_t m_nLookAtName = 0x4b8;
    constexpr std::ptrdiff_t m_hTargetEntity = 0x4c0;
    constexpr std::ptrdiff_t m_hLookAtEntity = 0x4c4;
    constexpr std::ptrdiff_t m_flDuration = 0x4c8;
    constexpr std::ptrdiff_t m_flDotTolerance = 0x4cc;
    constexpr std::ptrdiff_t m_flFacingTime = 0x4d0;
    constexpr std::ptrdiff_t m_bFired = 0x4d4;
    constexpr std::ptrdiff_t m_OnFacingLookat = 0x4d8;
    constexpr std::ptrdiff_t m_OnNotFacingLookat = 0x500;
    constexpr std::ptrdiff_t m_TargetDir = 0x528;
    constexpr std::ptrdiff_t m_FacingPercentage = 0x550;
}

namespace CPointAngularVelocitySensor {
    constexpr std::ptrdiff_t m_hTargetEntity = 0x4b0;
    constexpr std::ptrdiff_t m_flThreshold = 0x4b4;
    constexpr std::ptrdiff_t m_nLastCompareResult = 0x4b8;
    constexpr std::ptrdiff_t m_nLastFireResult = 0x4bc;
    constexpr std::ptrdiff_t m_flFireTime = 0x4c0;
    constexpr std::ptrdiff_t m_flFireInterval = 0x4c4;
    constexpr std::ptrdiff_t m_flLastAngVelocity = 0x4c8;
    constexpr std::ptrdiff_t m_lastOrientation = 0x4cc;
    constexpr std::ptrdiff_t m_vecAxis = 0x4d8;
    constexpr std::ptrdiff_t m_bUseHelper = 0x4e4;
    constexpr std::ptrdiff_t m_AngularVelocity = 0x4e8;
    constexpr std::ptrdiff_t m_OnLessThan = 0x510;
    constexpr std::ptrdiff_t m_OnLessThanOrEqualTo = 0x538;
    constexpr std::ptrdiff_t m_OnGreaterThan = 0x560;
    constexpr std::ptrdiff_t m_OnGreaterThanOrEqualTo = 0x588;
    constexpr std::ptrdiff_t m_OnEqualTo = 0x5b0;
}

namespace CPointCamera {
    constexpr std::ptrdiff_t m_FOV = 0x4b0;
    constexpr std::ptrdiff_t m_Resolution = 0x4b4;
    constexpr std::ptrdiff_t m_bFogEnable = 0x4b8;
    constexpr std::ptrdiff_t m_FogColor = 0x4b9;
    constexpr std::ptrdiff_t m_flFogStart = 0x4c0;
    constexpr std::ptrdiff_t m_flFogEnd = 0x4c4;
    constexpr std::ptrdiff_t m_flFogMaxDensity = 0x4c8;
    constexpr std::ptrdiff_t m_bActive = 0x4cc;
    constexpr std::ptrdiff_t m_bUseScreenAspectRatio = 0x4cd;
    constexpr std::ptrdiff_t m_flAspectRatio = 0x4d0;
    constexpr std::ptrdiff_t m_bNoSky = 0x4d4;
    constexpr std::ptrdiff_t m_fBrightness = 0x4d8;
    constexpr std::ptrdiff_t m_flZFar = 0x4dc;
    constexpr std::ptrdiff_t m_flZNear = 0x4e0;
    constexpr std::ptrdiff_t m_bCanHLTVUse = 0x4e4;
    constexpr std::ptrdiff_t m_bDofEnabled = 0x4e5;
    constexpr std::ptrdiff_t m_flDofNearBlurry = 0x4e8;
    constexpr std::ptrdiff_t m_flDofNearCrisp = 0x4ec;
    constexpr std::ptrdiff_t m_flDofFarCrisp = 0x4f0;
    constexpr std::ptrdiff_t m_flDofFarBlurry = 0x4f4;
    constexpr std::ptrdiff_t m_flDofTiltToGround = 0x4f8;
    constexpr std::ptrdiff_t m_TargetFOV = 0x4fc;
    constexpr std::ptrdiff_t m_DegreesPerSecond = 0x500;
    constexpr std::ptrdiff_t m_bIsOn = 0x504;
    constexpr std::ptrdiff_t m_pNext = 0x508;
}

namespace CPointCameraVFOV {
    constexpr std::ptrdiff_t m_flVerticalFOV = 0x510;
}

namespace CPointClientUIDialog {
    constexpr std::ptrdiff_t m_hActivator = 0x8b0;
    constexpr std::ptrdiff_t m_bStartEnabled = 0x8b4;
}

namespace CPointClientUIWorldPanel {
    constexpr std::ptrdiff_t m_bIgnoreInput = 0x8b0;
    constexpr std::ptrdiff_t m_bLit = 0x8b1;
    constexpr std::ptrdiff_t m_bFollowPlayerAcrossTeleport = 0x8b2;
    constexpr std::ptrdiff_t m_flWidth = 0x8b4;
    constexpr std::ptrdiff_t m_flHeight = 0x8b8;
    constexpr std::ptrdiff_t m_flDPI = 0x8bc;
    constexpr std::ptrdiff_t m_flInteractDistance = 0x8c0;
    constexpr std::ptrdiff_t m_flDepthOffset = 0x8c4;
    constexpr std::ptrdiff_t m_unOwnerContext = 0x8c8;
    constexpr std::ptrdiff_t m_unHorizontalAlign = 0x8cc;
    constexpr std::ptrdiff_t m_unVerticalAlign = 0x8d0;
    constexpr std::ptrdiff_t m_unOrientation = 0x8d4;
    constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0x8d8;
    constexpr std::ptrdiff_t m_vecCSSClasses = 0x8e0;
    constexpr std::ptrdiff_t m_bOpaque = 0x8f8;
    constexpr std::ptrdiff_t m_bNoDepth = 0x8f9;
    constexpr std::ptrdiff_t m_bRenderBackface = 0x8fa;
    constexpr std::ptrdiff_t m_bUseOffScreenIndicator = 0x8fb;
    constexpr std::ptrdiff_t m_bExcludeFromSaveGames = 0x8fc;
    constexpr std::ptrdiff_t m_bGrabbable = 0x8fd;
    constexpr std::ptrdiff_t m_bOnlyRenderToTexture = 0x8fe;
    constexpr std::ptrdiff_t m_bDisableMipGen = 0x8ff;
    constexpr std::ptrdiff_t m_nExplicitImageLayout = 0x900;
}

namespace CPointClientUIWorldTextPanel {
    constexpr std::ptrdiff_t m_messageText = 0x908;
}

namespace CPointCommentaryNode {
    constexpr std::ptrdiff_t m_iszPreCommands = 0x930;
    constexpr std::ptrdiff_t m_iszPostCommands = 0x938;
    constexpr std::ptrdiff_t m_iszCommentaryFile = 0x940;
    constexpr std::ptrdiff_t m_iszViewTarget = 0x948;
    constexpr std::ptrdiff_t m_hViewTarget = 0x950;
    constexpr std::ptrdiff_t m_hViewTargetAngles = 0x954;
    constexpr std::ptrdiff_t m_iszViewPosition = 0x958;
    constexpr std::ptrdiff_t m_hViewPosition = 0x960;
    constexpr std::ptrdiff_t m_hViewPositionMover = 0x964;
    constexpr std::ptrdiff_t m_bPreventMovement = 0x968;
    constexpr std::ptrdiff_t m_bUnderCrosshair = 0x969;
    constexpr std::ptrdiff_t m_bUnstoppable = 0x96a;
    constexpr std::ptrdiff_t m_flFinishedTime = 0x96c;
    constexpr std::ptrdiff_t m_vecFinishOrigin = 0x970;
    constexpr std::ptrdiff_t m_vecOriginalAngles = 0x97c;
    constexpr std::ptrdiff_t m_vecFinishAngles = 0x988;
    constexpr std::ptrdiff_t m_bPreventChangesWhileMoving = 0x994;
    constexpr std::ptrdiff_t m_bDisabled = 0x995;
    constexpr std::ptrdiff_t m_vecTeleportOrigin = 0x998;
    constexpr std::ptrdiff_t m_flAbortedPlaybackAt = 0x9a4;
    constexpr std::ptrdiff_t m_pOnCommentaryStarted = 0x9a8;
    constexpr std::ptrdiff_t m_pOnCommentaryStopped = 0x9d0;
    constexpr std::ptrdiff_t m_bActive = 0x9f8;
    constexpr std::ptrdiff_t m_flStartTime = 0x9fc;
    constexpr std::ptrdiff_t m_flStartTimeInCommentary = 0xa00;
    constexpr std::ptrdiff_t m_iszTitle = 0xa08;
    constexpr std::ptrdiff_t m_iszSpeakers = 0xa10;
    constexpr std::ptrdiff_t m_iNodeNumber = 0xa18;
    constexpr std::ptrdiff_t m_iNodeNumberMax = 0xa1c;
    constexpr std::ptrdiff_t m_bListenedTo = 0xa20;
}

namespace CPointDZDroneGunSpawn {
    constexpr std::ptrdiff_t m_bSpawnAutomatically = 0x4b8;
}

namespace CPointDZItemSpawnGroup {
    constexpr std::ptrdiff_t m_flRadius = 0x4b0;
}

namespace CPointDZParadropDenialRegion {
    constexpr std::ptrdiff_t m_flRadius = 0x4b8;
}

namespace CPointDZWeaponSpawn {
    constexpr std::ptrdiff_t m_nGroupID = 0x4c0;
    constexpr std::ptrdiff_t m_flDefaultWeight = 0x4c4;
    constexpr std::ptrdiff_t m_flCurrentWeight = 0x4c8;
    constexpr std::ptrdiff_t m_hItem = 0x4cc;
    constexpr std::ptrdiff_t m_iszDoorName = 0x4d0;
    constexpr std::ptrdiff_t m_hDoor = 0x4d8;
    constexpr std::ptrdiff_t m_nPrice = 0x4dc;
}

namespace CPointEntityFinder {
    constexpr std::ptrdiff_t m_hEntity = 0x4b0;
    constexpr std::ptrdiff_t m_iFilterName = 0x4b8;
    constexpr std::ptrdiff_t m_hFilter = 0x4c0;
    constexpr std::ptrdiff_t m_iRefName = 0x4c8;
    constexpr std::ptrdiff_t m_hReference = 0x4d0;
    constexpr std::ptrdiff_t m_FindMethod = 0x4d4;
    constexpr std::ptrdiff_t m_OnFoundEntity = 0x4d8;
}

namespace CPointGamestatsCounter {
    constexpr std::ptrdiff_t m_strStatisticName = 0x4b0;
    constexpr std::ptrdiff_t m_bDisabled = 0x4b8;
}

namespace CPointGiveAmmo {
    constexpr std::ptrdiff_t m_pActivator = 0x4b0;
}

namespace CPointHurt {
    constexpr std::ptrdiff_t m_nDamage = 0x4b0;
    constexpr std::ptrdiff_t m_bitsDamageType = 0x4b4;
    constexpr std::ptrdiff_t m_flRadius = 0x4b8;
    constexpr std::ptrdiff_t m_flDelay = 0x4bc;
    constexpr std::ptrdiff_t m_strTarget = 0x4c0;
    constexpr std::ptrdiff_t m_pActivator = 0x4c8;
}

namespace CPointPrefab {
    constexpr std::ptrdiff_t m_targetMapName = 0x4b0;
    constexpr std::ptrdiff_t m_forceWorldGroupID = 0x4b8;
    constexpr std::ptrdiff_t m_fixupNames = 0x4c0;
}

namespace CPointProximitySensor {
    constexpr std::ptrdiff_t m_bDisabled = 0x4b0;
    constexpr std::ptrdiff_t m_hTargetEntity = 0x4b4;
    constexpr std::ptrdiff_t m_Distance = 0x4b8;
}

namespace CPointPush {
    constexpr std::ptrdiff_t m_bEnabled = 0x4b0;
    constexpr std::ptrdiff_t m_flMagnitude = 0x4b4;
    constexpr std::ptrdiff_t m_flRadius = 0x4b8;
    constexpr std::ptrdiff_t m_flInnerRadius = 0x4bc;
    constexpr std::ptrdiff_t m_flConeOfInfluence = 0x4c0;
    constexpr std::ptrdiff_t m_iszFilterName = 0x4c8;
    constexpr std::ptrdiff_t m_hFilter = 0x4d0;
}

namespace CPointTeleport {
    constexpr std::ptrdiff_t m_vSaveOrigin = 0x4b0;
    constexpr std::ptrdiff_t m_vSaveAngles = 0x4bc;
    constexpr std::ptrdiff_t m_bTeleportParentedEntities = 0x4c8;
    constexpr std::ptrdiff_t m_bTeleportUseCurrentAngle = 0x4c9;
}

namespace CPointTemplate {
    constexpr std::ptrdiff_t m_iszWorldName = 0x4b0;
    constexpr std::ptrdiff_t m_iszSource2EntityLumpName = 0x4b8;
    constexpr std::ptrdiff_t m_iszEntityFilterName = 0x4c0;
    constexpr std::ptrdiff_t m_flTimeoutInterval = 0x4c8;
    constexpr std::ptrdiff_t m_bAsynchronouslySpawnEntities = 0x4cc;
    constexpr std::ptrdiff_t m_pOutputOnSpawned = 0x4d0;
    constexpr std::ptrdiff_t m_clientOnlyEntityBehavior = 0x4f8;
    constexpr std::ptrdiff_t m_ownerSpawnGroupType = 0x4fc;
    constexpr std::ptrdiff_t m_createdSpawnGroupHandles = 0x500;
    constexpr std::ptrdiff_t m_SpawnedEntityHandles = 0x518;
    constexpr std::ptrdiff_t m_ScriptSpawnCallback = 0x530;
    constexpr std::ptrdiff_t m_ScriptCallbackScope = 0x538;
}

namespace CPointValueRemapper {
    constexpr std::ptrdiff_t m_bDisabled = 0x4b0;
    constexpr std::ptrdiff_t m_bUpdateOnClient = 0x4b1;
    constexpr std::ptrdiff_t m_nInputType = 0x4b4;
    constexpr std::ptrdiff_t m_iszRemapLineStartName = 0x4b8;
    constexpr std::ptrdiff_t m_iszRemapLineEndName = 0x4c0;
    constexpr std::ptrdiff_t m_hRemapLineStart = 0x4c8;
    constexpr std::ptrdiff_t m_hRemapLineEnd = 0x4cc;
    constexpr std::ptrdiff_t m_flMaximumChangePerSecond = 0x4d0;
    constexpr std::ptrdiff_t m_flDisengageDistance = 0x4d4;
    constexpr std::ptrdiff_t m_flEngageDistance = 0x4d8;
    constexpr std::ptrdiff_t m_bRequiresUseKey = 0x4dc;
    constexpr std::ptrdiff_t m_nOutputType = 0x4e0;
    constexpr std::ptrdiff_t m_iszOutputEntityName = 0x4e8;
    constexpr std::ptrdiff_t m_iszOutputEntity2Name = 0x4f0;
    constexpr std::ptrdiff_t m_iszOutputEntity3Name = 0x4f8;
    constexpr std::ptrdiff_t m_iszOutputEntity4Name = 0x500;
    constexpr std::ptrdiff_t m_hOutputEntities = 0x508;
    constexpr std::ptrdiff_t m_nHapticsType = 0x520;
    constexpr std::ptrdiff_t m_nMomentumType = 0x524;
    constexpr std::ptrdiff_t m_flMomentumModifier = 0x528;
    constexpr std::ptrdiff_t m_flSnapValue = 0x52c;
    constexpr std::ptrdiff_t m_flCurrentMomentum = 0x530;
    constexpr std::ptrdiff_t m_nRatchetType = 0x534;
    constexpr std::ptrdiff_t m_flRatchetOffset = 0x538;
    constexpr std::ptrdiff_t m_flInputOffset = 0x53c;
    constexpr std::ptrdiff_t m_bEngaged = 0x540;
    constexpr std::ptrdiff_t m_bFirstUpdate = 0x541;
    constexpr std::ptrdiff_t m_flPreviousValue = 0x544;
    constexpr std::ptrdiff_t m_flPreviousUpdateTickTime = 0x548;
    constexpr std::ptrdiff_t m_vecPreviousTestPoint = 0x54c;
    constexpr std::ptrdiff_t m_hUsingPlayer = 0x558;
    constexpr std::ptrdiff_t m_flCustomOutputValue = 0x55c;
    constexpr std::ptrdiff_t m_iszSoundEngage = 0x560;
    constexpr std::ptrdiff_t m_iszSoundDisengage = 0x568;
    constexpr std::ptrdiff_t m_iszSoundReachedValueZero = 0x570;
    constexpr std::ptrdiff_t m_iszSoundReachedValueOne = 0x578;
    constexpr std::ptrdiff_t m_iszSoundMovingLoop = 0x580;
    constexpr std::ptrdiff_t m_Position = 0x590;
    constexpr std::ptrdiff_t m_PositionDelta = 0x5b8;
    constexpr std::ptrdiff_t m_OnReachedValueZero = 0x5e0;
    constexpr std::ptrdiff_t m_OnReachedValueOne = 0x608;
    constexpr std::ptrdiff_t m_OnReachedValueCustom = 0x630;
    constexpr std::ptrdiff_t m_OnEngage = 0x658;
    constexpr std::ptrdiff_t m_OnDisengage = 0x680;
}

namespace CPointVelocitySensor {
    constexpr std::ptrdiff_t m_hTargetEntity = 0x4b0;
    constexpr std::ptrdiff_t m_vecAxis = 0x4b4;
    constexpr std::ptrdiff_t m_bEnabled = 0x4c0;
    constexpr std::ptrdiff_t m_fPrevVelocity = 0x4c4;
    constexpr std::ptrdiff_t m_flAvgInterval = 0x4c8;
    constexpr std::ptrdiff_t m_Velocity = 0x4d0;
}

namespace CPointWorldText {
    constexpr std::ptrdiff_t m_messageText = 0x700;
    constexpr std::ptrdiff_t m_FontName = 0x900;
    constexpr std::ptrdiff_t m_bEnabled = 0x940;
    constexpr std::ptrdiff_t m_bFullbright = 0x941;
    constexpr std::ptrdiff_t m_flWorldUnitsPerPx = 0x944;
    constexpr std::ptrdiff_t m_flFontSize = 0x948;
    constexpr std::ptrdiff_t m_flDepthOffset = 0x94c;
    constexpr std::ptrdiff_t m_Color = 0x950;
    constexpr std::ptrdiff_t m_nJustifyHorizontal = 0x954;
    constexpr std::ptrdiff_t m_nJustifyVertical = 0x958;
    constexpr std::ptrdiff_t m_nReorientMode = 0x95c;
}

namespace CPostProcessingVolume {
    constexpr std::ptrdiff_t m_hPostSettings = 0x8b8;
    constexpr std::ptrdiff_t m_flFadeDuration = 0x8c0;
    constexpr std::ptrdiff_t m_flMinLogExposure = 0x8c4;
    constexpr std::ptrdiff_t m_flMaxLogExposure = 0x8c8;
    constexpr std::ptrdiff_t m_flMinExposure = 0x8cc;
    constexpr std::ptrdiff_t m_flMaxExposure = 0x8d0;
    constexpr std::ptrdiff_t m_flExposureCompensation = 0x8d4;
    constexpr std::ptrdiff_t m_flExposureFadeSpeedUp = 0x8d8;
    constexpr std::ptrdiff_t m_flExposureFadeSpeedDown = 0x8dc;
    constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x8e0;
    constexpr std::ptrdiff_t m_bMaster = 0x8e4;
    constexpr std::ptrdiff_t m_bExposureControl = 0x8e5;
    constexpr std::ptrdiff_t m_flRate = 0x8e8;
    constexpr std::ptrdiff_t m_flTonemapPercentTarget = 0x8ec;
    constexpr std::ptrdiff_t m_flTonemapPercentBrightPixels = 0x8f0;
    constexpr std::ptrdiff_t m_flTonemapMinAvgLum = 0x8f4;
}

namespace CPrecipitationVData {
    constexpr std::ptrdiff_t m_szParticlePrecipitationEffect = 0x28;
    constexpr std::ptrdiff_t m_flInnerDistance = 0x108;
    constexpr std::ptrdiff_t m_nAttachType = 0x10c;
    constexpr std::ptrdiff_t m_bBatchSameVolumeType = 0x110;
    constexpr std::ptrdiff_t m_nRTEnvCP = 0x114;
    constexpr std::ptrdiff_t m_nRTEnvCPComponent = 0x118;
    constexpr std::ptrdiff_t m_szModifier = 0x120;
}

namespace CProjectedDecal {
    constexpr std::ptrdiff_t m_nTexture = 0x4b0;
    constexpr std::ptrdiff_t m_flDistance = 0x4b4;
}

namespace CPropCounter {
    constexpr std::ptrdiff_t m_flDisplayValue = 0x930;
    constexpr std::ptrdiff_t m_nInitialValue = 0x934;
}

namespace CPropDoorRotating {
    constexpr std::ptrdiff_t m_vecAxis = 0xe38;
    constexpr std::ptrdiff_t m_flDistance = 0xe44;
    constexpr std::ptrdiff_t m_eSpawnPosition = 0xe48;
    constexpr std::ptrdiff_t m_eOpenDirection = 0xe4c;
    constexpr std::ptrdiff_t m_eCurrentOpenDirection = 0xe50;
    constexpr std::ptrdiff_t m_flAjarAngle = 0xe54;
    constexpr std::ptrdiff_t m_angRotationAjarDeprecated = 0xe58;
    constexpr std::ptrdiff_t m_angRotationClosed = 0xe64;
    constexpr std::ptrdiff_t m_angRotationOpenForward = 0xe70;
    constexpr std::ptrdiff_t m_angRotationOpenBack = 0xe7c;
    constexpr std::ptrdiff_t m_angGoal = 0xe88;
    constexpr std::ptrdiff_t m_vecForwardBoundsMin = 0xe94;
    constexpr std::ptrdiff_t m_vecForwardBoundsMax = 0xea0;
    constexpr std::ptrdiff_t m_vecBackBoundsMin = 0xeac;
    constexpr std::ptrdiff_t m_vecBackBoundsMax = 0xeb8;
    constexpr std::ptrdiff_t m_bAjarDoorShouldntAlwaysOpen = 0xec4;
    constexpr std::ptrdiff_t m_hEntityBlocker = 0xec8;
}

namespace CPropDoorRotatingBreakable {
    constexpr std::ptrdiff_t m_bBreakable = 0xed0;
    constexpr std::ptrdiff_t m_isAbleToCloseAreaPortals = 0xed1;
    constexpr std::ptrdiff_t m_currentDamageState = 0xed4;
    constexpr std::ptrdiff_t m_damageStates = 0xed8;
}

namespace CPulseCell_Inflow_GameEvent {
    constexpr std::ptrdiff_t m_EventName = 0x70;
}

namespace CPulseCell_Outflow_PlayVCD {
    constexpr std::ptrdiff_t m_vcdFilename = 0x48;
    constexpr std::ptrdiff_t m_OnFinished = 0x50;
    constexpr std::ptrdiff_t m_Triggers = 0x60;
}

namespace CPulseCell_SoundEventStart {
    constexpr std::ptrdiff_t m_Type = 0x48;
}

namespace CPulseCell_Step_EntFire {
    constexpr std::ptrdiff_t m_Input = 0x48;
}

namespace CPulseCell_Step_SetAnimGraphParam {
    constexpr std::ptrdiff_t m_ParamName = 0x48;
}

namespace CPulseCell_Value_FindEntByName {
    constexpr std::ptrdiff_t m_EntityType = 0x48;
}

namespace CRR_Response {
    constexpr std::ptrdiff_t m_Type = 0x0;
    constexpr std::ptrdiff_t m_szResponseName = 0x1;
    constexpr std::ptrdiff_t m_szMatchingRule = 0xc1;
    constexpr std::ptrdiff_t m_Params = 0x148;
    constexpr std::ptrdiff_t m_fMatchScore = 0x168;
    constexpr std::ptrdiff_t m_szSpeakerContext = 0x170;
    constexpr std::ptrdiff_t m_szWorldContext = 0x178;
    constexpr std::ptrdiff_t m_Followup = 0x180;
    constexpr std::ptrdiff_t m_pchCriteriaNames = 0x1b8;
    constexpr std::ptrdiff_t m_pchCriteriaValues = 0x1d0;
}

namespace CRagdollConstraint {
    constexpr std::ptrdiff_t m_xmin = 0x508;
    constexpr std::ptrdiff_t m_xmax = 0x50c;
    constexpr std::ptrdiff_t m_ymin = 0x510;
    constexpr std::ptrdiff_t m_ymax = 0x514;
    constexpr std::ptrdiff_t m_zmin = 0x518;
    constexpr std::ptrdiff_t m_zmax = 0x51c;
    constexpr std::ptrdiff_t m_xfriction = 0x520;
    constexpr std::ptrdiff_t m_yfriction = 0x524;
    constexpr std::ptrdiff_t m_zfriction = 0x528;
}

namespace CRagdollMagnet {
    constexpr std::ptrdiff_t m_bDisabled = 0x4b0;
    constexpr std::ptrdiff_t m_radius = 0x4b4;
    constexpr std::ptrdiff_t m_force = 0x4b8;
    constexpr std::ptrdiff_t m_axis = 0x4bc;
}

namespace CRagdollManager {
    constexpr std::ptrdiff_t m_iCurrentMaxRagdollCount = 0x4b0;
    constexpr std::ptrdiff_t m_iMaxRagdollCount = 0x4b4;
    constexpr std::ptrdiff_t m_bSaveImportant = 0x4b8;
}

namespace CRagdollProp {
    constexpr std::ptrdiff_t m_ragdoll = 0x938;
    constexpr std::ptrdiff_t m_bStartDisabled = 0x970;
    constexpr std::ptrdiff_t m_ragPos = 0x978;
    constexpr std::ptrdiff_t m_ragAngles = 0x990;
    constexpr std::ptrdiff_t m_hRagdollSource = 0x9a8;
    constexpr std::ptrdiff_t m_lastUpdateTickCount = 0x9ac;
    constexpr std::ptrdiff_t m_allAsleep = 0x9b0;
    constexpr std::ptrdiff_t m_bFirstCollisionAfterLaunch = 0x9b1;
    constexpr std::ptrdiff_t m_hDamageEntity = 0x9b4;
    constexpr std::ptrdiff_t m_hKiller = 0x9b8;
    constexpr std::ptrdiff_t m_hPhysicsAttacker = 0x9bc;
    constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0x9c0;
    constexpr std::ptrdiff_t m_flFadeOutStartTime = 0x9c4;
    constexpr std::ptrdiff_t m_flFadeTime = 0x9c8;
    constexpr std::ptrdiff_t m_vecLastOrigin = 0x9cc;
    constexpr std::ptrdiff_t m_flAwakeTime = 0x9d8;
    constexpr std::ptrdiff_t m_flLastOriginChangeTime = 0x9dc;
    constexpr std::ptrdiff_t m_nBloodColor = 0x9e0;
    constexpr std::ptrdiff_t m_strOriginClassName = 0x9e8;
    constexpr std::ptrdiff_t m_strSourceClassName = 0x9f0;
    constexpr std::ptrdiff_t m_bHasBeenPhysgunned = 0x9f8;
    constexpr std::ptrdiff_t m_bShouldTeleportPhysics = 0x9f9;
    constexpr std::ptrdiff_t m_flBlendWeight = 0x9fc;
    constexpr std::ptrdiff_t m_flDefaultFadeScale = 0xa00;
    constexpr std::ptrdiff_t m_ragdollMins = 0xa08;
    constexpr std::ptrdiff_t m_ragdollMaxs = 0xa20;
    constexpr std::ptrdiff_t m_bShouldDeleteActivationRecord = 0xa38;
    constexpr std::ptrdiff_t m_bValidatePoweredRagdollPose = 0xa98;
}

namespace CRagdollPropAttached {
    constexpr std::ptrdiff_t m_boneIndexAttached = 0xad8;
    constexpr std::ptrdiff_t m_ragdollAttachedObjectIndex = 0xadc;
    constexpr std::ptrdiff_t m_attachmentPointBoneSpace = 0xae0;
    constexpr std::ptrdiff_t m_attachmentPointRagdollSpace = 0xaec;
    constexpr std::ptrdiff_t m_bShouldDetach = 0xaf8;
    constexpr std::ptrdiff_t m_bShouldDeleteAttachedActivationRecord = 0xb08;
}

namespace CRandSimTimer {
    constexpr std::ptrdiff_t m_minInterval = 0x8;
    constexpr std::ptrdiff_t m_maxInterval = 0xc;
}

namespace CRandStopwatch {
    constexpr std::ptrdiff_t m_minInterval = 0xc;
    constexpr std::ptrdiff_t m_maxInterval = 0x10;
}

namespace CRangeFloat {
    constexpr std::ptrdiff_t m_pValue = 0x0;
}

namespace CRangeInt {
    constexpr std::ptrdiff_t m_pValue = 0x0;
}

namespace CRectLight {
    constexpr std::ptrdiff_t m_bShowLight = 0x938;
}

namespace CRemapFloat {
    constexpr std::ptrdiff_t m_pValue = 0x0;
}

namespace CRenderComponent {
    constexpr std::ptrdiff_t __m_pChainEntity = 0x10;
    constexpr std::ptrdiff_t m_bIsRenderingWithViewModels = 0x50;
    constexpr std::ptrdiff_t m_nSplitscreenFlags = 0x54;
    constexpr std::ptrdiff_t m_bEnableRendering = 0x60;
    constexpr std::ptrdiff_t m_bInterpolationReadyToDraw = 0xb0;
}

namespace CResponseCriteriaSet {
    constexpr std::ptrdiff_t m_nNumPrefixedContexts = 0x28;
    constexpr std::ptrdiff_t m_bOverrideOnAppend = 0x2c;
}

namespace CResponseQueue {
    constexpr std::ptrdiff_t m_ExpresserTargets = 0x50;
}

namespace CResponseQueue_CDeferredResponse {
    constexpr std::ptrdiff_t m_contexts = 0x10;
    constexpr std::ptrdiff_t m_fDispatchTime = 0x40;
    constexpr std::ptrdiff_t m_hIssuer = 0x44;
    constexpr std::ptrdiff_t m_response = 0x50;
    constexpr std::ptrdiff_t m_bResponseValid = 0x238;
}

namespace CRetakeGameRules {
    constexpr std::ptrdiff_t m_nMatchSeed = 0xf8;
    constexpr std::ptrdiff_t m_bBlockersPresent = 0xfc;
    constexpr std::ptrdiff_t m_bRoundInProgress = 0xfd;
    constexpr std::ptrdiff_t m_iFirstSecondHalfRound = 0x100;
    constexpr std::ptrdiff_t m_iBombSite = 0x104;
}

namespace CRevertSaved {
    constexpr std::ptrdiff_t m_loadTime = 0x700;
    constexpr std::ptrdiff_t m_Duration = 0x704;
    constexpr std::ptrdiff_t m_HoldTime = 0x708;
}

namespace CRopeKeyframe {
    constexpr std::ptrdiff_t m_RopeFlags = 0x708;
    constexpr std::ptrdiff_t m_iNextLinkName = 0x710;
    constexpr std::ptrdiff_t m_Slack = 0x718;
    constexpr std::ptrdiff_t m_Width = 0x71c;
    constexpr std::ptrdiff_t m_TextureScale = 0x720;
    constexpr std::ptrdiff_t m_nSegments = 0x724;
    constexpr std::ptrdiff_t m_bConstrainBetweenEndpoints = 0x725;
    constexpr std::ptrdiff_t m_strRopeMaterialModel = 0x728;
    constexpr std::ptrdiff_t m_iRopeMaterialModelIndex = 0x730;
    constexpr std::ptrdiff_t m_Subdiv = 0x738;
    constexpr std::ptrdiff_t m_nChangeCount = 0x739;
    constexpr std::ptrdiff_t m_RopeLength = 0x73a;
    constexpr std::ptrdiff_t m_fLockedPoints = 0x73c;
    constexpr std::ptrdiff_t m_bCreatedFromMapFile = 0x73d;
    constexpr std::ptrdiff_t m_flScrollSpeed = 0x740;
    constexpr std::ptrdiff_t m_bStartPointValid = 0x744;
    constexpr std::ptrdiff_t m_bEndPointValid = 0x745;
    constexpr std::ptrdiff_t m_hStartPoint = 0x748;
    constexpr std::ptrdiff_t m_hEndPoint = 0x74c;
    constexpr std::ptrdiff_t m_iStartAttachment = 0x750;
    constexpr std::ptrdiff_t m_iEndAttachment = 0x751;
}

namespace CRotDoor {
    constexpr std::ptrdiff_t m_bSolidBsp = 0x988;
}

namespace CRuleEntity {
    constexpr std::ptrdiff_t m_iszMaster = 0x700;
}

namespace CRulePointEntity {
    constexpr std::ptrdiff_t m_Score = 0x708;
}

namespace CSAdditionalMatchStats_t {
    constexpr std::ptrdiff_t m_numRoundsSurvived = 0x14;
    constexpr std::ptrdiff_t m_maxNumRoundsSurvived = 0x18;
    constexpr std::ptrdiff_t m_numRoundsSurvivedTotal = 0x1c;
    constexpr std::ptrdiff_t m_iRoundsWonWithoutPurchase = 0x20;
    constexpr std::ptrdiff_t m_iRoundsWonWithoutPurchaseTotal = 0x24;
    constexpr std::ptrdiff_t m_numFirstKills = 0x28;
    constexpr std::ptrdiff_t m_numClutchKills = 0x2c;
    constexpr std::ptrdiff_t m_numPistolKills = 0x30;
    constexpr std::ptrdiff_t m_numSniperKills = 0x34;
}

namespace CSAdditionalPerRoundStats_t {
    constexpr std::ptrdiff_t m_numChickensKilled = 0x0;
    constexpr std::ptrdiff_t m_killsWhileBlind = 0x4;
    constexpr std::ptrdiff_t m_bombCarrierkills = 0x8;
    constexpr std::ptrdiff_t m_iBurnDamageInflicted = 0xc;
    constexpr std::ptrdiff_t m_iDinks = 0x10;
}

namespace CSMatchStats_t {
    constexpr std::ptrdiff_t m_iEnemy5Ks = 0x68;
    constexpr std::ptrdiff_t m_iEnemy4Ks = 0x6c;
    constexpr std::ptrdiff_t m_iEnemy3Ks = 0x70;
    constexpr std::ptrdiff_t m_iEnemy2Ks = 0x74;
    constexpr std::ptrdiff_t m_iUtility_Count = 0x78;
    constexpr std::ptrdiff_t m_iUtility_Successes = 0x7c;
    constexpr std::ptrdiff_t m_iUtility_Enemies = 0x80;
    constexpr std::ptrdiff_t m_iFlash_Count = 0x84;
    constexpr std::ptrdiff_t m_iFlash_Successes = 0x88;
    constexpr std::ptrdiff_t m_nHealthPointsRemovedTotal = 0x8c;
    constexpr std::ptrdiff_t m_nHealthPointsDealtTotal = 0x90;
    constexpr std::ptrdiff_t m_nShotsFiredTotal = 0x94;
    constexpr std::ptrdiff_t m_nShotsOnTargetTotal = 0x98;
    constexpr std::ptrdiff_t m_i1v1Count = 0x9c;
    constexpr std::ptrdiff_t m_i1v1Wins = 0xa0;
    constexpr std::ptrdiff_t m_i1v2Count = 0xa4;
    constexpr std::ptrdiff_t m_i1v2Wins = 0xa8;
    constexpr std::ptrdiff_t m_iEntryCount = 0xac;
    constexpr std::ptrdiff_t m_iEntryWins = 0xb0;
}

namespace CSPerRoundStats_t {
    constexpr std::ptrdiff_t m_iKills = 0x30;
    constexpr std::ptrdiff_t m_iDeaths = 0x34;
    constexpr std::ptrdiff_t m_iAssists = 0x38;
    constexpr std::ptrdiff_t m_iDamage = 0x3c;
    constexpr std::ptrdiff_t m_iEquipmentValue = 0x40;
    constexpr std::ptrdiff_t m_iMoneySaved = 0x44;
    constexpr std::ptrdiff_t m_iKillReward = 0x48;
    constexpr std::ptrdiff_t m_iLiveTime = 0x4c;
    constexpr std::ptrdiff_t m_iHeadShotKills = 0x50;
    constexpr std::ptrdiff_t m_iObjective = 0x54;
    constexpr std::ptrdiff_t m_iCashEarned = 0x58;
    constexpr std::ptrdiff_t m_iUtilityDamage = 0x5c;
    constexpr std::ptrdiff_t m_iEnemiesFlashed = 0x60;
}

namespace CSceneEntity {
    constexpr std::ptrdiff_t m_iszSceneFile = 0x4b8;
    constexpr std::ptrdiff_t m_iszResumeSceneFile = 0x4c0;
    constexpr std::ptrdiff_t m_iszTarget1 = 0x4c8;
    constexpr std::ptrdiff_t m_iszTarget2 = 0x4d0;
    constexpr std::ptrdiff_t m_iszTarget3 = 0x4d8;
    constexpr std::ptrdiff_t m_iszTarget4 = 0x4e0;
    constexpr std::ptrdiff_t m_iszTarget5 = 0x4e8;
    constexpr std::ptrdiff_t m_iszTarget6 = 0x4f0;
    constexpr std::ptrdiff_t m_iszTarget7 = 0x4f8;
    constexpr std::ptrdiff_t m_iszTarget8 = 0x500;
    constexpr std::ptrdiff_t m_hTarget1 = 0x508;
    constexpr std::ptrdiff_t m_hTarget2 = 0x50c;
    constexpr std::ptrdiff_t m_hTarget3 = 0x510;
    constexpr std::ptrdiff_t m_hTarget4 = 0x514;
    constexpr std::ptrdiff_t m_hTarget5 = 0x518;
    constexpr std::ptrdiff_t m_hTarget6 = 0x51c;
    constexpr std::ptrdiff_t m_hTarget7 = 0x520;
    constexpr std::ptrdiff_t m_hTarget8 = 0x524;
    constexpr std::ptrdiff_t m_bIsPlayingBack = 0x528;
    constexpr std::ptrdiff_t m_bPaused = 0x529;
    constexpr std::ptrdiff_t m_bMultiplayer = 0x52a;
    constexpr std::ptrdiff_t m_bAutogenerated = 0x52b;
    constexpr std::ptrdiff_t m_flForceClientTime = 0x52c;
    constexpr std::ptrdiff_t m_flCurrentTime = 0x530;
    constexpr std::ptrdiff_t m_flFrameTime = 0x534;
    constexpr std::ptrdiff_t m_bCancelAtNextInterrupt = 0x538;
    constexpr std::ptrdiff_t m_fPitch = 0x53c;
    constexpr std::ptrdiff_t m_bAutomated = 0x540;
    constexpr std::ptrdiff_t m_nAutomatedAction = 0x544;
    constexpr std::ptrdiff_t m_flAutomationDelay = 0x548;
    constexpr std::ptrdiff_t m_flAutomationTime = 0x54c;
    constexpr std::ptrdiff_t m_hWaitingForThisResumeScene = 0x550;
    constexpr std::ptrdiff_t m_bWaitingForResumeScene = 0x554;
    constexpr std::ptrdiff_t m_bPausedViaInput = 0x555;
    constexpr std::ptrdiff_t m_bPauseAtNextInterrupt = 0x556;
    constexpr std::ptrdiff_t m_bWaitingForActor = 0x557;
    constexpr std::ptrdiff_t m_bWaitingForInterrupt = 0x558;
    constexpr std::ptrdiff_t m_bInterruptedActorsScenes = 0x559;
    constexpr std::ptrdiff_t m_bBreakOnNonIdle = 0x55a;
    constexpr std::ptrdiff_t m_hActorList = 0x560;
    constexpr std::ptrdiff_t m_hRemoveActorList = 0x578;
    constexpr std::ptrdiff_t m_nSceneFlushCounter = 0x5a0;
    constexpr std::ptrdiff_t m_nSceneStringIndex = 0x5a4;
    constexpr std::ptrdiff_t m_OnStart = 0x5a8;
    constexpr std::ptrdiff_t m_OnCompletion = 0x5d0;
    constexpr std::ptrdiff_t m_OnCanceled = 0x5f8;
    constexpr std::ptrdiff_t m_OnPaused = 0x620;
    constexpr std::ptrdiff_t m_OnResumed = 0x648;
    constexpr std::ptrdiff_t m_OnTrigger = 0x670;
    constexpr std::ptrdiff_t m_hInterruptScene = 0x980;
    constexpr std::ptrdiff_t m_nInterruptCount = 0x984;
    constexpr std::ptrdiff_t m_bSceneMissing = 0x988;
    constexpr std::ptrdiff_t m_bInterrupted = 0x989;
    constexpr std::ptrdiff_t m_bCompletedEarly = 0x98a;
    constexpr std::ptrdiff_t m_bInterruptSceneFinished = 0x98b;
    constexpr std::ptrdiff_t m_bRestoring = 0x98c;
    constexpr std::ptrdiff_t m_hNotifySceneCompletion = 0x990;
    constexpr std::ptrdiff_t m_hListManagers = 0x9a8;
    constexpr std::ptrdiff_t m_iszSoundName = 0x9e8;
    constexpr std::ptrdiff_t m_hActor = 0x9f0;
    constexpr std::ptrdiff_t m_hActivator = 0x9f4;
    constexpr std::ptrdiff_t m_BusyActor = 0x9f8;
    constexpr std::ptrdiff_t m_iPlayerDeathBehavior = 0x9fc;
}

namespace CSceneEventInfo {
    constexpr std::ptrdiff_t m_iLayer = 0x0;
    constexpr std::ptrdiff_t m_iPriority = 0x4;
    constexpr std::ptrdiff_t m_hSequence = 0x8;
    constexpr std::ptrdiff_t m_flWeight = 0xc;
    constexpr std::ptrdiff_t m_bIsMoving = 0x10;
    constexpr std::ptrdiff_t m_bHasArrived = 0x11;
    constexpr std::ptrdiff_t m_flInitialYaw = 0x14;
    constexpr std::ptrdiff_t m_flTargetYaw = 0x18;
    constexpr std::ptrdiff_t m_flFacingYaw = 0x1c;
    constexpr std::ptrdiff_t m_nType = 0x20;
    constexpr std::ptrdiff_t m_flNext = 0x24;
    constexpr std::ptrdiff_t m_bIsGesture = 0x28;
    constexpr std::ptrdiff_t m_bShouldRemove = 0x29;
    constexpr std::ptrdiff_t m_hTarget = 0x54;
    constexpr std::ptrdiff_t m_nSceneEventId = 0x58;
    constexpr std::ptrdiff_t m_bClientSide = 0x5c;
    constexpr std::ptrdiff_t m_bStarted = 0x5d;
}

namespace CSceneListManager {
    constexpr std::ptrdiff_t m_hListManagers = 0x4b0;
    constexpr std::ptrdiff_t m_iszScenes = 0x4c8;
    constexpr std::ptrdiff_t m_hScenes = 0x548;
}

namespace CScriptComponent {
    constexpr std::ptrdiff_t m_scriptClassName = 0x30;
}

namespace CScriptItem {
    constexpr std::ptrdiff_t m_OnPlayerPickup = 0xa08;
    constexpr std::ptrdiff_t m_MoveTypeOverride = 0xa30;
}

namespace CScriptNavBlocker {
    constexpr std::ptrdiff_t m_vExtent = 0x710;
}

namespace CScriptTriggerHurt {
    constexpr std::ptrdiff_t m_vExtent = 0x948;
}

namespace CScriptTriggerMultiple {
    constexpr std::ptrdiff_t m_vExtent = 0x8d0;
}

namespace CScriptTriggerOnce {
    constexpr std::ptrdiff_t m_vExtent = 0x8d0;
}

namespace CScriptTriggerPush {
    constexpr std::ptrdiff_t m_vExtent = 0x8d0;
}

namespace CScriptUniformRandomStream {
    constexpr std::ptrdiff_t m_hScriptScope = 0x8;
    constexpr std::ptrdiff_t m_nInitialSeed = 0x9c;
}

namespace CScriptedSequence {
    constexpr std::ptrdiff_t m_iszEntry = 0x4b0;
    constexpr std::ptrdiff_t m_iszPreIdle = 0x4b8;
    constexpr std::ptrdiff_t m_iszPlay = 0x4c0;
    constexpr std::ptrdiff_t m_iszPostIdle = 0x4c8;
    constexpr std::ptrdiff_t m_iszModifierToAddOnPlay = 0x4d0;
    constexpr std::ptrdiff_t m_iszNextScript = 0x4d8;
    constexpr std::ptrdiff_t m_iszEntity = 0x4e0;
    constexpr std::ptrdiff_t m_iszSyncGroup = 0x4e8;
    constexpr std::ptrdiff_t m_nMoveTo = 0x4f0;
    constexpr std::ptrdiff_t m_bIsPlayingPreIdle = 0x4f4;
    constexpr std::ptrdiff_t m_bIsPlayingEntry = 0x4f5;
    constexpr std::ptrdiff_t m_bIsPlayingAction = 0x4f6;
    constexpr std::ptrdiff_t m_bIsPlayingPostIdle = 0x4f7;
    constexpr std::ptrdiff_t m_bLoopPreIdleSequence = 0x4f8;
    constexpr std::ptrdiff_t m_bLoopActionSequence = 0x4f9;
    constexpr std::ptrdiff_t m_bLoopPostIdleSequence = 0x4fa;
    constexpr std::ptrdiff_t m_bSynchPostIdles = 0x4fb;
    constexpr std::ptrdiff_t m_bIgnoreGravity = 0x4fc;
    constexpr std::ptrdiff_t m_bDisableNPCCollisions = 0x4fd;
    constexpr std::ptrdiff_t m_bKeepAnimgraphLockedPost = 0x4fe;
    constexpr std::ptrdiff_t m_bDontAddModifiers = 0x4ff;
    constexpr std::ptrdiff_t m_flRadius = 0x500;
    constexpr std::ptrdiff_t m_flRepeat = 0x504;
    constexpr std::ptrdiff_t m_flPlayAnimFadeInTime = 0x508;
    constexpr std::ptrdiff_t m_flMoveInterpTime = 0x50c;
    constexpr std::ptrdiff_t m_flAngRate = 0x510;
    constexpr std::ptrdiff_t m_iDelay = 0x514;
    constexpr std::ptrdiff_t m_startTime = 0x518;
    constexpr std::ptrdiff_t m_bWaitForBeginSequence = 0x51c;
    constexpr std::ptrdiff_t m_saved_effects = 0x520;
    constexpr std::ptrdiff_t m_savedFlags = 0x524;
    constexpr std::ptrdiff_t m_savedCollisionGroup = 0x528;
    constexpr std::ptrdiff_t m_interruptable = 0x52c;
    constexpr std::ptrdiff_t m_sequenceStarted = 0x52d;
    constexpr std::ptrdiff_t m_bPrevAnimatedEveryTick = 0x52e;
    constexpr std::ptrdiff_t m_bForcedAnimatedEveryTick = 0x52f;
    constexpr std::ptrdiff_t m_bPositionRelativeToOtherEntity = 0x530;
    constexpr std::ptrdiff_t m_hTargetEnt = 0x534;
    constexpr std::ptrdiff_t m_hNextCine = 0x538;
    constexpr std::ptrdiff_t m_bThinking = 0x53c;
    constexpr std::ptrdiff_t m_bInitiatedSelfDelete = 0x53d;
    constexpr std::ptrdiff_t m_bIsTeleportingDueToMoveTo = 0x53e;
    constexpr std::ptrdiff_t m_bAllowCustomInterruptConditions = 0x53f;
    constexpr std::ptrdiff_t m_hLastFoundEntity = 0x540;
    constexpr std::ptrdiff_t m_hForcedTarget = 0x544;
    constexpr std::ptrdiff_t m_bDontCancelOtherSequences = 0x548;
    constexpr std::ptrdiff_t m_bForceSynch = 0x549;
    constexpr std::ptrdiff_t m_bTargetWasAsleep = 0x54a;
    constexpr std::ptrdiff_t m_bPreventUpdateYawOnFinish = 0x54b;
    constexpr std::ptrdiff_t m_bEnsureOnNavmeshOnFinish = 0x54c;
    constexpr std::ptrdiff_t m_onDeathBehavior = 0x550;
    constexpr std::ptrdiff_t m_ConflictResponse = 0x554;
    constexpr std::ptrdiff_t m_OnBeginSequence = 0x558;
    constexpr std::ptrdiff_t m_OnActionStartOrLoop = 0x580;
    constexpr std::ptrdiff_t m_OnEndSequence = 0x5a8;
    constexpr std::ptrdiff_t m_OnPostIdleEndSequence = 0x5d0;
    constexpr std::ptrdiff_t m_OnCancelSequence = 0x5f8;
    constexpr std::ptrdiff_t m_OnCancelFailedSequence = 0x620;
    constexpr std::ptrdiff_t m_OnScriptEvent = 0x648;
    constexpr std::ptrdiff_t m_matOtherToMain = 0x790;
    constexpr std::ptrdiff_t m_hInteractionMainEntity = 0x7b0;
    constexpr std::ptrdiff_t m_iPlayerDeathBehavior = 0x7b4;
}

namespace CSensorGrenadeProjectile {
    constexpr std::ptrdiff_t m_fExpireTime = 0xac8;
    constexpr std::ptrdiff_t m_fNextDetectPlayerSound = 0xacc;
    constexpr std::ptrdiff_t m_hDisplayGrenade = 0xad0;
}

namespace CShatterGlassShard {
    constexpr std::ptrdiff_t m_hShardHandle = 0x8;
    constexpr std::ptrdiff_t m_vecPanelVertices = 0x10;
    constexpr std::ptrdiff_t m_vLocalPanelSpaceOrigin = 0x28;
    constexpr std::ptrdiff_t m_hModel = 0x30;
    constexpr std::ptrdiff_t m_hPhysicsEntity = 0x38;
    constexpr std::ptrdiff_t m_hParentPanel = 0x3c;
    constexpr std::ptrdiff_t m_hParentShard = 0x40;
    constexpr std::ptrdiff_t m_ShatterStressType = 0x44;
    constexpr std::ptrdiff_t m_vecStressVelocity = 0x48;
    constexpr std::ptrdiff_t m_bCreatedModel = 0x54;
    constexpr std::ptrdiff_t m_flLongestEdge = 0x58;
    constexpr std::ptrdiff_t m_flShortestEdge = 0x5c;
    constexpr std::ptrdiff_t m_flLongestAcross = 0x60;
    constexpr std::ptrdiff_t m_flShortestAcross = 0x64;
    constexpr std::ptrdiff_t m_flSumOfAllEdges = 0x68;
    constexpr std::ptrdiff_t m_flArea = 0x6c;
    constexpr std::ptrdiff_t m_nOnFrameEdge = 0x70;
    constexpr std::ptrdiff_t m_nParentPanelsNthShard = 0x74;
    constexpr std::ptrdiff_t m_nSubShardGeneration = 0x78;
    constexpr std::ptrdiff_t m_vecAverageVertPosition = 0x7c;
    constexpr std::ptrdiff_t m_bAverageVertPositionIsValid = 0x84;
    constexpr std::ptrdiff_t m_vecPanelSpaceStressPositionA = 0x88;
    constexpr std::ptrdiff_t m_vecPanelSpaceStressPositionB = 0x90;
    constexpr std::ptrdiff_t m_bStressPositionAIsValid = 0x98;
    constexpr std::ptrdiff_t m_bStressPositionBIsValid = 0x99;
    constexpr std::ptrdiff_t m_bFlaggedForRemoval = 0x9a;
    constexpr std::ptrdiff_t m_flPhysicsEntitySpawnedAtTime = 0x9c;
    constexpr std::ptrdiff_t m_bShatterRateLimited = 0xa0;
    constexpr std::ptrdiff_t m_hEntityHittingMe = 0xa4;
    constexpr std::ptrdiff_t m_vecNeighbors = 0xa8;
}

namespace CShatterGlassShardPhysics {
    constexpr std::ptrdiff_t m_bDebris = 0xc18;
    constexpr std::ptrdiff_t m_hParentShard = 0xc1c;
    constexpr std::ptrdiff_t m_ShardDesc = 0xc20;
}

namespace CSimTimer {
    constexpr std::ptrdiff_t m_interval = 0x8;
}

namespace CSimpleSimTimer {
    constexpr std::ptrdiff_t m_next = 0x0;
    constexpr std::ptrdiff_t m_nWorldGroupId = 0x4;
}

namespace CSingleplayRules {
    constexpr std::ptrdiff_t m_bSinglePlayerGameEnding = 0x90;
}

namespace CSkeletonAnimationController {
    constexpr std::ptrdiff_t m_pSkeletonInstance = 0x8;
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

namespace CSkillDamage {
    constexpr std::ptrdiff_t m_flDamage = 0x0;
    constexpr std::ptrdiff_t m_flPhysicsForceDamage = 0x10;
}

namespace CSkillFloat {
    constexpr std::ptrdiff_t m_pValue = 0x0;
}

namespace CSkillInt {
    constexpr std::ptrdiff_t m_pValue = 0x0;
}

namespace CSkyCamera {
    constexpr std::ptrdiff_t m_skyboxData = 0x4b0;
    constexpr std::ptrdiff_t m_skyboxSlotToken = 0x540;
    constexpr std::ptrdiff_t m_bUseAngles = 0x544;
    constexpr std::ptrdiff_t m_pNext = 0x548;
}

namespace CSkyboxReference {
    constexpr std::ptrdiff_t m_worldGroupId = 0x4b0;
    constexpr std::ptrdiff_t m_hSkyCamera = 0x4b4;
}

namespace CSmokeGrenadeProjectile {
    constexpr std::ptrdiff_t m_nSmokeEffectTickBegin = 0xae0;
    constexpr std::ptrdiff_t m_bDidSmokeEffect = 0xae4;
    constexpr std::ptrdiff_t m_nRandomSeed = 0xae8;
    constexpr std::ptrdiff_t m_vSmokeColor = 0xaec;
    constexpr std::ptrdiff_t m_vSmokeDetonationPos = 0xaf8;
    constexpr std::ptrdiff_t m_VoxelFrameData = 0xb08;
    constexpr std::ptrdiff_t m_flLastBounce = 0xb20;
    constexpr std::ptrdiff_t m_fllastSimulationTime = 0xb24;
}

namespace CSmoothFunc {
    constexpr std::ptrdiff_t m_flSmoothAmplitude = 0x8;
    constexpr std::ptrdiff_t m_flSmoothBias = 0xc;
    constexpr std::ptrdiff_t m_flSmoothDuration = 0x10;
    constexpr std::ptrdiff_t m_flSmoothRemainingTime = 0x14;
    constexpr std::ptrdiff_t m_nSmoothDir = 0x18;
}

namespace CSound {
    constexpr std::ptrdiff_t m_hOwner = 0x0;
    constexpr std::ptrdiff_t m_hTarget = 0x4;
    constexpr std::ptrdiff_t m_iVolume = 0x8;
    constexpr std::ptrdiff_t m_flOcclusionScale = 0xc;
    constexpr std::ptrdiff_t m_iType = 0x10;
    constexpr std::ptrdiff_t m_iNextAudible = 0x14;
    constexpr std::ptrdiff_t m_flExpireTime = 0x18;
    constexpr std::ptrdiff_t m_iNext = 0x1c;
    constexpr std::ptrdiff_t m_bNoExpirationTime = 0x1e;
    constexpr std::ptrdiff_t m_ownerChannelIndex = 0x20;
    constexpr std::ptrdiff_t m_vecOrigin = 0x24;
    constexpr std::ptrdiff_t m_bHasOwner = 0x30;
}

namespace CSoundAreaEntityBase {
    constexpr std::ptrdiff_t m_bDisabled = 0x4b0;
    constexpr std::ptrdiff_t m_iszSoundAreaType = 0x4b8;
    constexpr std::ptrdiff_t m_vPos = 0x4c0;
}

namespace CSoundAreaEntityOrientedBox {
    constexpr std::ptrdiff_t m_vMin = 0x4d0;
    constexpr std::ptrdiff_t m_vMax = 0x4dc;
}

namespace CSoundAreaEntitySphere {
    constexpr std::ptrdiff_t m_flRadius = 0x4d0;
}

namespace CSoundEnt {
    constexpr std::ptrdiff_t m_iFreeSound = 0x4b0;
    constexpr std::ptrdiff_t m_iActiveSound = 0x4b4;
    constexpr std::ptrdiff_t m_cLastActiveSounds = 0x4b8;
    constexpr std::ptrdiff_t m_SoundPool = 0x4bc;
}

namespace CSoundEnvelope {
    constexpr std::ptrdiff_t m_current = 0x0;
    constexpr std::ptrdiff_t m_target = 0x4;
    constexpr std::ptrdiff_t m_rate = 0x8;
    constexpr std::ptrdiff_t m_forceupdate = 0xc;
}

namespace CSoundEventAABBEntity {
    constexpr std::ptrdiff_t m_vMins = 0x558;
    constexpr std::ptrdiff_t m_vMaxs = 0x564;
}

namespace CSoundEventEntity {
    constexpr std::ptrdiff_t m_bStartOnSpawn = 0x4b0;
    constexpr std::ptrdiff_t m_bToLocalPlayer = 0x4b1;
    constexpr std::ptrdiff_t m_bStopOnNew = 0x4b2;
    constexpr std::ptrdiff_t m_bSaveRestore = 0x4b3;
    constexpr std::ptrdiff_t m_bSavedIsPlaying = 0x4b4;
    constexpr std::ptrdiff_t m_flSavedElapsedTime = 0x4b8;
    constexpr std::ptrdiff_t m_iszSourceEntityName = 0x4c0;
    constexpr std::ptrdiff_t m_iszAttachmentName = 0x4c8;
    constexpr std::ptrdiff_t m_onGUIDChanged = 0x4d0;
    constexpr std::ptrdiff_t m_onSoundFinished = 0x4f8;
    constexpr std::ptrdiff_t m_iszSoundName = 0x540;
    constexpr std::ptrdiff_t m_hSource = 0x550;
}

namespace CSoundEventOBBEntity {
    constexpr std::ptrdiff_t m_vMins = 0x558;
    constexpr std::ptrdiff_t m_vMaxs = 0x564;
}

namespace CSoundEventParameter {
    constexpr std::ptrdiff_t m_iszParamName = 0x4b8;
    constexpr std::ptrdiff_t m_flFloatValue = 0x4c0;
}

namespace CSoundEventPathCornerEntity {
    constexpr std::ptrdiff_t m_iszPathCorner = 0x558;
    constexpr std::ptrdiff_t m_iCountMax = 0x560;
    constexpr std::ptrdiff_t m_flDistanceMax = 0x564;
    constexpr std::ptrdiff_t m_flDistMaxSqr = 0x568;
    constexpr std::ptrdiff_t m_flDotProductMax = 0x56c;
    constexpr std::ptrdiff_t bPlaying = 0x570;
}

namespace CSoundOpvarSetAABBEntity {
    constexpr std::ptrdiff_t m_vDistanceInnerMins = 0x648;
    constexpr std::ptrdiff_t m_vDistanceInnerMaxs = 0x654;
    constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x660;
    constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x66c;
    constexpr std::ptrdiff_t m_nAABBDirection = 0x678;
    constexpr std::ptrdiff_t m_vInnerMins = 0x67c;
    constexpr std::ptrdiff_t m_vInnerMaxs = 0x688;
    constexpr std::ptrdiff_t m_vOuterMins = 0x694;
    constexpr std::ptrdiff_t m_vOuterMaxs = 0x6a0;
}

namespace CSoundOpvarSetEntity {
    constexpr std::ptrdiff_t m_iszStackName = 0x4b8;
    constexpr std::ptrdiff_t m_iszOperatorName = 0x4c0;
    constexpr std::ptrdiff_t m_iszOpvarName = 0x4c8;
    constexpr std::ptrdiff_t m_nOpvarType = 0x4d0;
    constexpr std::ptrdiff_t m_nOpvarIndex = 0x4d4;
    constexpr std::ptrdiff_t m_flOpvarValue = 0x4d8;
    constexpr std::ptrdiff_t m_OpvarValueString = 0x4e0;
    constexpr std::ptrdiff_t m_bSetOnSpawn = 0x4e8;
}

namespace CSoundOpvarSetOBBWindEntity {
    constexpr std::ptrdiff_t m_vMins = 0x548;
    constexpr std::ptrdiff_t m_vMaxs = 0x554;
    constexpr std::ptrdiff_t m_vDistanceMins = 0x560;
    constexpr std::ptrdiff_t m_vDistanceMaxs = 0x56c;
    constexpr std::ptrdiff_t m_flWindMin = 0x578;
    constexpr std::ptrdiff_t m_flWindMax = 0x57c;
    constexpr std::ptrdiff_t m_flWindMapMin = 0x580;
    constexpr std::ptrdiff_t m_flWindMapMax = 0x584;
}

namespace CSoundOpvarSetPathCornerEntity {
    constexpr std::ptrdiff_t m_flDistMinSqr = 0x660;
    constexpr std::ptrdiff_t m_flDistMaxSqr = 0x664;
    constexpr std::ptrdiff_t m_iszPathCornerEntityName = 0x668;
}

namespace CSoundOpvarSetPointBase {
    constexpr std::ptrdiff_t m_bDisabled = 0x4b0;
    constexpr std::ptrdiff_t m_hSource = 0x4b4;
    constexpr std::ptrdiff_t m_iszSourceEntityName = 0x4c0;
    constexpr std::ptrdiff_t m_vLastPosition = 0x518;
    constexpr std::ptrdiff_t m_iszStackName = 0x528;
    constexpr std::ptrdiff_t m_iszOperatorName = 0x530;
    constexpr std::ptrdiff_t m_iszOpvarName = 0x538;
    constexpr std::ptrdiff_t m_iOpvarIndex = 0x540;
    constexpr std::ptrdiff_t m_bUseAutoCompare = 0x544;
}

namespace CSoundOpvarSetPointEntity {
    constexpr std::ptrdiff_t m_OnEnter = 0x548;
    constexpr std::ptrdiff_t m_OnExit = 0x570;
    constexpr std::ptrdiff_t m_bAutoDisable = 0x598;
    constexpr std::ptrdiff_t m_flDistanceMin = 0x5dc;
    constexpr std::ptrdiff_t m_flDistanceMax = 0x5e0;
    constexpr std::ptrdiff_t m_flDistanceMapMin = 0x5e4;
    constexpr std::ptrdiff_t m_flDistanceMapMax = 0x5e8;
    constexpr std::ptrdiff_t m_flOcclusionRadius = 0x5ec;
    constexpr std::ptrdiff_t m_flOcclusionMin = 0x5f0;
    constexpr std::ptrdiff_t m_flOcclusionMax = 0x5f4;
    constexpr std::ptrdiff_t m_flValSetOnDisable = 0x5f8;
    constexpr std::ptrdiff_t m_bSetValueOnDisable = 0x5fc;
    constexpr std::ptrdiff_t m_nSimulationMode = 0x600;
    constexpr std::ptrdiff_t m_nVisibilitySamples = 0x604;
    constexpr std::ptrdiff_t m_vDynamicProxyPoint = 0x608;
    constexpr std::ptrdiff_t m_flDynamicMaximumOcclusion = 0x614;
    constexpr std::ptrdiff_t m_hDynamicEntity = 0x618;
    constexpr std::ptrdiff_t m_iszDynamicEntityName = 0x620;
    constexpr std::ptrdiff_t m_flPathingDistanceNormFactor = 0x628;
    constexpr std::ptrdiff_t m_vPathingSourcePos = 0x62c;
    constexpr std::ptrdiff_t m_vPathingListenerPos = 0x638;
    constexpr std::ptrdiff_t m_nPathingSourceIndex = 0x644;
}

namespace CSoundPatch {
    constexpr std::ptrdiff_t m_pitch = 0x8;
    constexpr std::ptrdiff_t m_volume = 0x18;
    constexpr std::ptrdiff_t m_shutdownTime = 0x30;
    constexpr std::ptrdiff_t m_flLastTime = 0x34;
    constexpr std::ptrdiff_t m_iszSoundScriptName = 0x38;
    constexpr std::ptrdiff_t m_hEnt = 0x40;
    constexpr std::ptrdiff_t m_soundEntityIndex = 0x44;
    constexpr std::ptrdiff_t m_soundOrigin = 0x48;
    constexpr std::ptrdiff_t m_isPlaying = 0x54;
    constexpr std::ptrdiff_t m_Filter = 0x58;
    constexpr std::ptrdiff_t m_flCloseCaptionDuration = 0x80;
    constexpr std::ptrdiff_t m_bUpdatedSoundOrigin = 0x84;
    constexpr std::ptrdiff_t m_iszClassName = 0x88;
}

namespace CSoundStackSave {
    constexpr std::ptrdiff_t m_iszStackName = 0x4b0;
}

namespace CSpotlightEnd {
    constexpr std::ptrdiff_t m_flLightScale = 0x700;
    constexpr std::ptrdiff_t m_Radius = 0x704;
    constexpr std::ptrdiff_t m_vSpotlightDir = 0x708;
    constexpr std::ptrdiff_t m_vSpotlightOrg = 0x714;
}

namespace CSprite {
    constexpr std::ptrdiff_t m_hSpriteMaterial = 0x700;
    constexpr std::ptrdiff_t m_hAttachedToEntity = 0x708;
    constexpr std::ptrdiff_t m_nAttachment = 0x70c;
    constexpr std::ptrdiff_t m_flSpriteFramerate = 0x710;
    constexpr std::ptrdiff_t m_flFrame = 0x714;
    constexpr std::ptrdiff_t m_flDieTime = 0x718;
    constexpr std::ptrdiff_t m_nBrightness = 0x728;
    constexpr std::ptrdiff_t m_flBrightnessDuration = 0x72c;
    constexpr std::ptrdiff_t m_flSpriteScale = 0x730;
    constexpr std::ptrdiff_t m_flScaleDuration = 0x734;
    constexpr std::ptrdiff_t m_bWorldSpaceScale = 0x738;
    constexpr std::ptrdiff_t m_flGlowProxySize = 0x73c;
    constexpr std::ptrdiff_t m_flHDRColorScale = 0x740;
    constexpr std::ptrdiff_t m_flLastTime = 0x744;
    constexpr std::ptrdiff_t m_flMaxFrame = 0x748;
    constexpr std::ptrdiff_t m_flStartScale = 0x74c;
    constexpr std::ptrdiff_t m_flDestScale = 0x750;
    constexpr std::ptrdiff_t m_flScaleTimeStart = 0x754;
    constexpr std::ptrdiff_t m_nStartBrightness = 0x758;
    constexpr std::ptrdiff_t m_nDestBrightness = 0x75c;
    constexpr std::ptrdiff_t m_flBrightnessTimeStart = 0x760;
    constexpr std::ptrdiff_t m_nSpriteWidth = 0x764;
    constexpr std::ptrdiff_t m_nSpriteHeight = 0x768;
}

namespace CStopwatch {
    constexpr std::ptrdiff_t m_interval = 0xc;
}

namespace CStopwatchBase {
    constexpr std::ptrdiff_t m_fIsRunning = 0x8;
}

namespace CSun {
    constexpr std::ptrdiff_t m_vDirection = 0x700;
    constexpr std::ptrdiff_t m_clrOverlay = 0x70c;
    constexpr std::ptrdiff_t m_iszEffectName = 0x710;
    constexpr std::ptrdiff_t m_iszSSEffectName = 0x718;
    constexpr std::ptrdiff_t m_bOn = 0x720;
    constexpr std::ptrdiff_t m_bmaxColor = 0x721;
    constexpr std::ptrdiff_t m_flSize = 0x724;
    constexpr std::ptrdiff_t m_flRotation = 0x728;
    constexpr std::ptrdiff_t m_flHazeScale = 0x72c;
    constexpr std::ptrdiff_t m_flAlphaHaze = 0x730;
    constexpr std::ptrdiff_t m_flAlphaHdr = 0x734;
    constexpr std::ptrdiff_t m_flAlphaScale = 0x738;
    constexpr std::ptrdiff_t m_flHDRColorScale = 0x73c;
    constexpr std::ptrdiff_t m_flFarZScale = 0x740;
}

namespace CSurvivalGameRules {
    constexpr std::ptrdiff_t m_bBoundsInitialized = 0x8;
    constexpr std::ptrdiff_t m_vecPlayAreaMins = 0xc;
    constexpr std::ptrdiff_t m_vecPlayAreaMaxs = 0x18;
    constexpr std::ptrdiff_t m_iPlayerSpawnHexIndices = 0x24;
    constexpr std::ptrdiff_t m_SpawnTileState = 0x124;
    constexpr std::ptrdiff_t m_flSpawnSelectionTimeStartCurrentStage = 0x204;
    constexpr std::ptrdiff_t m_flSpawnSelectionTimeEndCurrentStage = 0x208;
    constexpr std::ptrdiff_t m_flSpawnSelectionTimeEndLastStage = 0x20c;
    constexpr std::ptrdiff_t m_spawnStage = 0x210;
    constexpr std::ptrdiff_t m_flTabletHexOriginX = 0x214;
    constexpr std::ptrdiff_t m_flTabletHexOriginY = 0x218;
    constexpr std::ptrdiff_t m_flTabletHexSize = 0x21c;
    constexpr std::ptrdiff_t m_roundData_playerXuids = 0x220;
    constexpr std::ptrdiff_t m_roundData_playerPositions = 0x420;
    constexpr std::ptrdiff_t m_roundData_playerTeams = 0x520;
    constexpr std::ptrdiff_t m_SurvivalGameRuleDecisionTypes = 0x620;
    constexpr std::ptrdiff_t m_SurvivalGameRuleDecisionValues = 0x660;
    constexpr std::ptrdiff_t m_flSurvivalStartTime = 0x6a0;
    constexpr std::ptrdiff_t m_flLastThinkTime = 0x6a4;
    constexpr std::ptrdiff_t m_nBlockedTileIndices = 0x6a8;
    constexpr std::ptrdiff_t m_vecPlayerSpawnLocations = 0x790;
    constexpr std::ptrdiff_t m_bWaitingForMoreThanOnePlayer = 0x7a8;
    constexpr std::ptrdiff_t m_bSurvivalEventFired_FadeEveryoneOutFromMapSelection = 0x7a9;
    constexpr std::ptrdiff_t m_bSurvivalEventFired_TimeForSmokeBeacons = 0x7aa;
    constexpr std::ptrdiff_t m_bSurvivalEventFired_FirstParadropIncoming = 0x7ab;
    constexpr std::ptrdiff_t m_bSurvivalEventFired_WarnedEveryoneAboutRespawnEnding = 0x7ac;
    constexpr std::ptrdiff_t m_flLastWinConditionDetectedTime = 0x7b0;
    constexpr std::ptrdiff_t m_nWinConditionStageProgress = 0x7b4;
    constexpr std::ptrdiff_t m_nEntIndexOfRunnerUpPlayer = 0x7b8;
    constexpr std::ptrdiff_t m_nEntIndexOfKilledPlayerCheckingWinConditions = 0x7bc;
    constexpr std::ptrdiff_t m_flTimeOfLastParadrop = 0x7c0;
    constexpr std::ptrdiff_t m_bSurvivalEventFired_PlayedWinnerSurrenderAnim = 0x7f8;
    constexpr std::ptrdiff_t m_hWinnerPlayer = 0x7fc;
    constexpr std::ptrdiff_t m_vecLoadedOutPlayers = 0x800;
    constexpr std::ptrdiff_t m_vecRespawnedPlayers = 0x818;
    constexpr std::ptrdiff_t m_vecMetalCrates = 0x830;
    constexpr std::ptrdiff_t m_flLastDroneSpawnTime = 0x848;
    constexpr std::ptrdiff_t m_hSpawnChopper = 0x868;
}

namespace CSurvivalSpawnChopper {
    constexpr std::ptrdiff_t m_pSoundLoop = 0x930;
    constexpr std::ptrdiff_t m_flSpawnTimeStamp = 0x938;
    constexpr std::ptrdiff_t m_flFlightPathRotationOffset = 0x93c;
    constexpr std::ptrdiff_t m_bFlipX = 0x940;
    constexpr std::ptrdiff_t m_bFlipY = 0x941;
    constexpr std::ptrdiff_t m_bCircling = 0x942;
    constexpr std::ptrdiff_t m_flLastPassengerCheckTime = 0x944;
}

namespace CTablet {
    constexpr std::ptrdiff_t m_bPendingBuyMenu = 0xe88;
    constexpr std::ptrdiff_t m_flUpgradeExpirationTime = 0xe8c;
    constexpr std::ptrdiff_t m_vecLocalHexFlags = 0xe9c;
    constexpr std::ptrdiff_t m_nContractKillGridIndex = 0xf44;
    constexpr std::ptrdiff_t m_nContractKillGridHighResIndex = 0xf48;
    constexpr std::ptrdiff_t m_bTabletReceptionIsBlocked = 0xf4c;
    constexpr std::ptrdiff_t m_flScanProgress = 0xf50;
    constexpr std::ptrdiff_t m_flBootTime = 0xf54;
    constexpr std::ptrdiff_t m_flShowMapTime = 0xf58;
    constexpr std::ptrdiff_t m_vecNearestMetalCratePos = 0xf5c;
    constexpr std::ptrdiff_t m_skinState = 0xf68;
    constexpr std::ptrdiff_t m_vecNotificationIds = 0xf6c;
    constexpr std::ptrdiff_t m_vecNotificationTimestamps = 0xf8c;
    constexpr std::ptrdiff_t m_nLastPurchaseIndex = 0xfac;
    constexpr std::ptrdiff_t m_vecPlayerPositionHistory = 0xfb0;
    constexpr std::ptrdiff_t m_vecLastPlayerPosition = 0x10d0;
    constexpr std::ptrdiff_t m_flNextCheckForIncomingDronesTime = 0x10d8;
    constexpr std::ptrdiff_t m_flLastPlayerOccupiedGridUpdate = 0x10dc;
    constexpr std::ptrdiff_t m_flLastTabletBlockedTime = 0x10e0;
    constexpr std::ptrdiff_t m_flLastClosePoseParamVal = 0x1190;
}

namespace CTakeDamageInfo {
    constexpr std::ptrdiff_t m_vecDamageForce = 0x8;
    constexpr std::ptrdiff_t m_vecDamagePosition = 0x14;
    constexpr std::ptrdiff_t m_vecReportedPosition = 0x20;
    constexpr std::ptrdiff_t m_vecDamageDirection = 0x2c;
    constexpr std::ptrdiff_t m_hInflictor = 0x38;
    constexpr std::ptrdiff_t m_hAttacker = 0x3c;
    constexpr std::ptrdiff_t m_hAbility = 0x40;
    constexpr std::ptrdiff_t m_flDamage = 0x44;
    constexpr std::ptrdiff_t m_bitsDamageType = 0x48;
    constexpr std::ptrdiff_t m_iDamageCustom = 0x4c;
    constexpr std::ptrdiff_t m_iAmmoType = 0x50;
    constexpr std::ptrdiff_t m_flOriginalDamage = 0x60;
    constexpr std::ptrdiff_t m_bShouldBleed = 0x64;
    constexpr std::ptrdiff_t m_bShouldSpark = 0x65;
    constexpr std::ptrdiff_t m_nDamageFlags = 0x70;
    constexpr std::ptrdiff_t m_nNumObjectsPenetrated = 0x74;
    constexpr std::ptrdiff_t m_hScriptInstance = 0x78;
    constexpr std::ptrdiff_t m_bInTakeDamageFlow = 0x98;
}

namespace CTakeDamageResult {
    constexpr std::ptrdiff_t m_nHealthLost = 0x0;
    constexpr std::ptrdiff_t m_nDamageTaken = 0x4;
}

namespace CTakeDamageSummaryScopeGuard {
    constexpr std::ptrdiff_t m_vecSummaries = 0x8;
}

namespace CTankTargetChange {
    constexpr std::ptrdiff_t m_newTarget = 0x4b0;
    constexpr std::ptrdiff_t m_newTargetName = 0x4c0;
}

namespace CTankTrainAI {
    constexpr std::ptrdiff_t m_hTrain = 0x4b0;
    constexpr std::ptrdiff_t m_hTargetEntity = 0x4b4;
    constexpr std::ptrdiff_t m_soundPlaying = 0x4b8;
    constexpr std::ptrdiff_t m_startSoundName = 0x4d0;
    constexpr std::ptrdiff_t m_engineSoundName = 0x4d8;
    constexpr std::ptrdiff_t m_movementSoundName = 0x4e0;
    constexpr std::ptrdiff_t m_targetEntityName = 0x4e8;
}

namespace CTeam {
    constexpr std::ptrdiff_t m_aPlayerControllers = 0x4b0;
    constexpr std::ptrdiff_t m_aPlayers = 0x4c8;
    constexpr std::ptrdiff_t m_iScore = 0x4e0;
    constexpr std::ptrdiff_t m_szTeamname = 0x4e4;
}

namespace CTestEffect {
    constexpr std::ptrdiff_t m_iLoop = 0x4b0;
    constexpr std::ptrdiff_t m_iBeam = 0x4b4;
    constexpr std::ptrdiff_t m_pBeam = 0x4b8;
    constexpr std::ptrdiff_t m_flBeamTime = 0x578;
    constexpr std::ptrdiff_t m_flStartTime = 0x5d8;
}

namespace CTextureBasedAnimatable {
    constexpr std::ptrdiff_t m_bLoop = 0x700;
    constexpr std::ptrdiff_t m_flFPS = 0x704;
    constexpr std::ptrdiff_t m_hPositionKeys = 0x708;
    constexpr std::ptrdiff_t m_hRotationKeys = 0x710;
    constexpr std::ptrdiff_t m_vAnimationBoundsMin = 0x718;
    constexpr std::ptrdiff_t m_vAnimationBoundsMax = 0x724;
    constexpr std::ptrdiff_t m_flStartTime = 0x730;
    constexpr std::ptrdiff_t m_flStartFrame = 0x734;
}

namespace CTimeline {
    constexpr std::ptrdiff_t m_flValues = 0x10;
    constexpr std::ptrdiff_t m_nValueCounts = 0x110;
    constexpr std::ptrdiff_t m_nBucketCount = 0x210;
    constexpr std::ptrdiff_t m_flInterval = 0x214;
    constexpr std::ptrdiff_t m_flFinalValue = 0x218;
    constexpr std::ptrdiff_t m_nCompressionType = 0x21c;
    constexpr std::ptrdiff_t m_bStopped = 0x220;
}

namespace CTimerEntity {
    constexpr std::ptrdiff_t m_OnTimer = 0x4b0;
    constexpr std::ptrdiff_t m_OnTimerHigh = 0x4d8;
    constexpr std::ptrdiff_t m_OnTimerLow = 0x500;
    constexpr std::ptrdiff_t m_iDisabled = 0x528;
    constexpr std::ptrdiff_t m_flInitialDelay = 0x52c;
    constexpr std::ptrdiff_t m_flRefireTime = 0x530;
    constexpr std::ptrdiff_t m_bUpDownState = 0x534;
    constexpr std::ptrdiff_t m_iUseRandomTime = 0x538;
    constexpr std::ptrdiff_t m_bPauseAfterFiring = 0x53c;
    constexpr std::ptrdiff_t m_flLowerRandomBound = 0x540;
    constexpr std::ptrdiff_t m_flUpperRandomBound = 0x544;
    constexpr std::ptrdiff_t m_flRemainingTime = 0x548;
    constexpr std::ptrdiff_t m_bPaused = 0x54c;
}

namespace CTonemapController2 {
    constexpr std::ptrdiff_t m_flAutoExposureMin = 0x4b0;
    constexpr std::ptrdiff_t m_flAutoExposureMax = 0x4b4;
    constexpr std::ptrdiff_t m_flTonemapPercentTarget = 0x4b8;
    constexpr std::ptrdiff_t m_flTonemapPercentBrightPixels = 0x4bc;
    constexpr std::ptrdiff_t m_flTonemapMinAvgLum = 0x4c0;
    constexpr std::ptrdiff_t m_flExposureAdaptationSpeedUp = 0x4c4;
    constexpr std::ptrdiff_t m_flExposureAdaptationSpeedDown = 0x4c8;
    constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x4cc;
}

namespace CTonemapTrigger {
    constexpr std::ptrdiff_t m_tonemapControllerName = 0x8a8;
    constexpr std::ptrdiff_t m_hTonemapController = 0x8b0;
}

namespace CTriggerActiveWeaponDetect {
    constexpr std::ptrdiff_t m_OnTouchedActiveWeapon = 0x8a8;
    constexpr std::ptrdiff_t m_iszWeaponClassName = 0x8d0;
}

namespace CTriggerBrush {
    constexpr std::ptrdiff_t m_OnStartTouch = 0x700;
    constexpr std::ptrdiff_t m_OnEndTouch = 0x728;
    constexpr std::ptrdiff_t m_OnUse = 0x750;
    constexpr std::ptrdiff_t m_iInputFilter = 0x778;
    constexpr std::ptrdiff_t m_iDontMessageParent = 0x77c;
}

namespace CTriggerBuoyancy {
    constexpr std::ptrdiff_t m_BuoyancyHelper = 0x8a8;
    constexpr std::ptrdiff_t m_flFluidDensity = 0x8d0;
}

namespace CTriggerDetectBulletFire {
    constexpr std::ptrdiff_t m_bPlayerFireOnly = 0x8a8;
    constexpr std::ptrdiff_t m_OnDetectedBulletFire = 0x8b0;
}

namespace CTriggerDetectExplosion {
    constexpr std::ptrdiff_t m_OnDetectedExplosion = 0x8e0;
}

namespace CTriggerFan {
    constexpr std::ptrdiff_t m_vFanOrigin = 0x8a8;
    constexpr std::ptrdiff_t m_vFanEnd = 0x8b4;
    constexpr std::ptrdiff_t m_vNoise = 0x8c0;
    constexpr std::ptrdiff_t m_flForce = 0x8cc;
    constexpr std::ptrdiff_t m_flPlayerForce = 0x8d0;
    constexpr std::ptrdiff_t m_flRampTime = 0x8d4;
    constexpr std::ptrdiff_t m_bFalloff = 0x8d8;
    constexpr std::ptrdiff_t m_bPushPlayer = 0x8d9;
    constexpr std::ptrdiff_t m_bRampDown = 0x8da;
    constexpr std::ptrdiff_t m_bAddNoise = 0x8db;
    constexpr std::ptrdiff_t m_RampTimer = 0x8e0;
}

namespace CTriggerGameEvent {
    constexpr std::ptrdiff_t m_strStartTouchEventName = 0x8a8;
    constexpr std::ptrdiff_t m_strEndTouchEventName = 0x8b0;
    constexpr std::ptrdiff_t m_strTriggerID = 0x8b8;
}

namespace CTriggerHurt {
    constexpr std::ptrdiff_t m_flOriginalDamage = 0x8a8;
    constexpr std::ptrdiff_t m_flDamage = 0x8ac;
    constexpr std::ptrdiff_t m_flDamageCap = 0x8b0;
    constexpr std::ptrdiff_t m_flLastDmgTime = 0x8b4;
    constexpr std::ptrdiff_t m_flForgivenessDelay = 0x8b8;
    constexpr std::ptrdiff_t m_bitsDamageInflict = 0x8bc;
    constexpr std::ptrdiff_t m_damageModel = 0x8c0;
    constexpr std::ptrdiff_t m_bNoDmgForce = 0x8c4;
    constexpr std::ptrdiff_t m_vDamageForce = 0x8c8;
    constexpr std::ptrdiff_t m_thinkAlways = 0x8d4;
    constexpr std::ptrdiff_t m_hurtThinkPeriod = 0x8d8;
    constexpr std::ptrdiff_t m_OnHurt = 0x8e0;
    constexpr std::ptrdiff_t m_OnHurtPlayer = 0x908;
    constexpr std::ptrdiff_t m_hurtEntities = 0x930;
}

namespace CTriggerImpact {
    constexpr std::ptrdiff_t m_flMagnitude = 0x8d0;
    constexpr std::ptrdiff_t m_flNoise = 0x8d4;
    constexpr std::ptrdiff_t m_flViewkick = 0x8d8;
    constexpr std::ptrdiff_t m_pOutputForce = 0x8e0;
}

namespace CTriggerLerpObject {
    constexpr std::ptrdiff_t m_iszLerpTarget = 0x8a8;
    constexpr std::ptrdiff_t m_hLerpTarget = 0x8b0;
    constexpr std::ptrdiff_t m_iszLerpTargetAttachment = 0x8b8;
    constexpr std::ptrdiff_t m_hLerpTargetAttachment = 0x8c0;
    constexpr std::ptrdiff_t m_flLerpDuration = 0x8c4;
    constexpr std::ptrdiff_t m_bLerpRestoreMoveType = 0x8c8;
    constexpr std::ptrdiff_t m_bSingleLerpObject = 0x8c9;
    constexpr std::ptrdiff_t m_vecLerpingObjects = 0x8d0;
    constexpr std::ptrdiff_t m_iszLerpEffect = 0x8e8;
    constexpr std::ptrdiff_t m_iszLerpSound = 0x8f0;
    constexpr std::ptrdiff_t m_OnLerpStarted = 0x8f8;
    constexpr std::ptrdiff_t m_OnLerpFinished = 0x920;
}

namespace CTriggerLook {
    constexpr std::ptrdiff_t m_hLookTarget = 0x8d0;
    constexpr std::ptrdiff_t m_flFieldOfView = 0x8d4;
    constexpr std::ptrdiff_t m_flLookTime = 0x8d8;
    constexpr std::ptrdiff_t m_flLookTimeTotal = 0x8dc;
    constexpr std::ptrdiff_t m_flLookTimeLast = 0x8e0;
    constexpr std::ptrdiff_t m_flTimeoutDuration = 0x8e4;
    constexpr std::ptrdiff_t m_bTimeoutFired = 0x8e8;
    constexpr std::ptrdiff_t m_bIsLooking = 0x8e9;
    constexpr std::ptrdiff_t m_b2DFOV = 0x8ea;
    constexpr std::ptrdiff_t m_bUseVelocity = 0x8eb;
    constexpr std::ptrdiff_t m_hActivator = 0x8ec;
    constexpr std::ptrdiff_t m_bTestOcclusion = 0x8f0;
    constexpr std::ptrdiff_t m_OnTimeout = 0x8f8;
    constexpr std::ptrdiff_t m_OnStartLook = 0x920;
    constexpr std::ptrdiff_t m_OnEndLook = 0x948;
}

namespace CTriggerMultiple {
    constexpr std::ptrdiff_t m_OnTrigger = 0x8a8;
}

namespace CTriggerPhysics {
    constexpr std::ptrdiff_t m_gravityScale = 0x8b8;
    constexpr std::ptrdiff_t m_linearLimit = 0x8bc;
    constexpr std::ptrdiff_t m_linearDamping = 0x8c0;
    constexpr std::ptrdiff_t m_angularLimit = 0x8c4;
    constexpr std::ptrdiff_t m_angularDamping = 0x8c8;
    constexpr std::ptrdiff_t m_linearForce = 0x8cc;
    constexpr std::ptrdiff_t m_flFrequency = 0x8d0;
    constexpr std::ptrdiff_t m_flDampingRatio = 0x8d4;
    constexpr std::ptrdiff_t m_vecLinearForcePointAt = 0x8d8;
    constexpr std::ptrdiff_t m_bCollapseToForcePoint = 0x8e4;
    constexpr std::ptrdiff_t m_vecLinearForcePointAtWorld = 0x8e8;
    constexpr std::ptrdiff_t m_vecLinearForceDirection = 0x8f4;
    constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0x900;
}

namespace CTriggerProximity {
    constexpr std::ptrdiff_t m_hMeasureTarget = 0x8a8;
    constexpr std::ptrdiff_t m_iszMeasureTarget = 0x8b0;
    constexpr std::ptrdiff_t m_fRadius = 0x8b8;
    constexpr std::ptrdiff_t m_nTouchers = 0x8bc;
    constexpr std::ptrdiff_t m_NearestEntityDistance = 0x8c0;
}

namespace CTriggerPush {
    constexpr std::ptrdiff_t m_angPushEntitySpace = 0x8a8;
    constexpr std::ptrdiff_t m_vecPushDirEntitySpace = 0x8b4;
    constexpr std::ptrdiff_t m_bTriggerOnStartTouch = 0x8c0;
    constexpr std::ptrdiff_t m_flAlternateTicksFix = 0x8c4;
    constexpr std::ptrdiff_t m_flPushSpeed = 0x8c8;
}

namespace CTriggerRemove {
    constexpr std::ptrdiff_t m_OnRemove = 0x8a8;
}

namespace CTriggerSafeMoneyGather {
    constexpr std::ptrdiff_t m_vecCashBundles = 0x8a8;
}

namespace CTriggerSave {
    constexpr std::ptrdiff_t m_bForceNewLevelUnit = 0x8a8;
    constexpr std::ptrdiff_t m_fDangerousTimer = 0x8ac;
    constexpr std::ptrdiff_t m_minHitPoints = 0x8b0;
}

namespace CTriggerSndSosOpvar {
    constexpr std::ptrdiff_t m_hTouchingPlayers = 0x8a8;
    constexpr std::ptrdiff_t m_flPosition = 0x8c0;
    constexpr std::ptrdiff_t m_flCenterSize = 0x8cc;
    constexpr std::ptrdiff_t m_flMinVal = 0x8d0;
    constexpr std::ptrdiff_t m_flMaxVal = 0x8d4;
    constexpr std::ptrdiff_t m_flWait = 0x8d8;
    constexpr std::ptrdiff_t m_opvarName = 0x8e0;
    constexpr std::ptrdiff_t m_stackName = 0x8e8;
    constexpr std::ptrdiff_t m_operatorName = 0x8f0;
    constexpr std::ptrdiff_t m_bVolIs2D = 0x8f8;
    constexpr std::ptrdiff_t m_opvarNameChar = 0x8f9;
    constexpr std::ptrdiff_t m_stackNameChar = 0x9f9;
    constexpr std::ptrdiff_t m_operatorNameChar = 0xaf9;
    constexpr std::ptrdiff_t m_VecNormPos = 0xbfc;
    constexpr std::ptrdiff_t m_flNormCenterSize = 0xc08;
}

namespace CTriggerSoundscape {
    constexpr std::ptrdiff_t m_hSoundscape = 0x8a8;
    constexpr std::ptrdiff_t m_SoundscapeName = 0x8b0;
    constexpr std::ptrdiff_t m_spectators = 0x8b8;
}

namespace CTriggerTeleport {
    constexpr std::ptrdiff_t m_iLandmark = 0x8a8;
    constexpr std::ptrdiff_t m_bUseLandmarkAngles = 0x8b0;
    constexpr std::ptrdiff_t m_bMirrorPlayer = 0x8b1;
}

namespace CTriggerToggleSave {
    constexpr std::ptrdiff_t m_bDisabled = 0x8a8;
}

namespace CTriggerVolume {
    constexpr std::ptrdiff_t m_iFilterName = 0x700;
    constexpr std::ptrdiff_t m_hFilter = 0x708;
}

namespace CTripWireFireProjectile {
    constexpr std::ptrdiff_t m_flAttachTime = 0xa68;
    constexpr std::ptrdiff_t m_vecTripWireEndPositions = 0xa6c;
    constexpr std::ptrdiff_t m_bTripWireEndPositionsUsed = 0xae4;
    constexpr std::ptrdiff_t m_hStuckToEnt = 0xaf0;
    constexpr std::ptrdiff_t m_nLastStuckToEntModelIndex = 0xaf4;
    constexpr std::ptrdiff_t m_xformStuckToEnt = 0xb00;
    constexpr std::ptrdiff_t m_vecTrapSetPosition = 0xb20;
    constexpr std::ptrdiff_t m_nWireSoundsPlayed = 0xb2c;
}

namespace CVoteController {
    constexpr std::ptrdiff_t m_iActiveIssueIndex = 0x4b0;
    constexpr std::ptrdiff_t m_iOnlyTeamToVote = 0x4b4;
    constexpr std::ptrdiff_t m_nVoteOptionCount = 0x4b8;
    constexpr std::ptrdiff_t m_nPotentialVotes = 0x4cc;
    constexpr std::ptrdiff_t m_bIsYesNoVote = 0x4d0;
    constexpr std::ptrdiff_t m_acceptingVotesTimer = 0x4d8;
    constexpr std::ptrdiff_t m_executeCommandTimer = 0x4f0;
    constexpr std::ptrdiff_t m_resetVoteTimer = 0x508;
    constexpr std::ptrdiff_t m_arrVotedUsers = 0x520;
    constexpr std::ptrdiff_t m_nVotesCast = 0x538;
    constexpr std::ptrdiff_t m_playerHoldingVote = 0x638;
    constexpr std::ptrdiff_t m_playerOverrideForVote = 0x63c;
    constexpr std::ptrdiff_t m_nHighestCountIndex = 0x640;
    constexpr std::ptrdiff_t m_potentialIssues = 0x648;
    constexpr std::ptrdiff_t m_VoteOptions = 0x660;
}

namespace CWeaponBaseItem {
    constexpr std::ptrdiff_t m_SequenceCompleteTimer = 0xe80;
    constexpr std::ptrdiff_t m_bRedraw = 0xe98;
}

namespace CWeaponCSBase {
    constexpr std::ptrdiff_t m_flFireSequenceStartTime = 0xd30;
    constexpr std::ptrdiff_t m_nFireSequenceStartTimeChange = 0xd34;
    constexpr std::ptrdiff_t m_nFireSequenceStartTimeAck = 0xd38;
    constexpr std::ptrdiff_t m_bPlayerFireEventIsPrimary = 0xd3c;
    constexpr std::ptrdiff_t m_seqIdle = 0xd40;
    constexpr std::ptrdiff_t m_seqFirePrimary = 0xd44;
    constexpr std::ptrdiff_t m_seqFireSecondary = 0xd48;
    constexpr std::ptrdiff_t m_bPlayerAmmoStockOnPickup = 0xd58;
    constexpr std::ptrdiff_t m_bRequireUseToTouch = 0xd59;
    constexpr std::ptrdiff_t m_flLastTimeInAir = 0xd5c;
    constexpr std::ptrdiff_t m_flLastDeployTime = 0xd60;
    constexpr std::ptrdiff_t m_nViewModelIndex = 0xd64;
    constexpr std::ptrdiff_t m_bReloadsWithClips = 0xd68;
    constexpr std::ptrdiff_t m_flTimeWeaponIdle = 0xd88;
    constexpr std::ptrdiff_t m_bFireOnEmpty = 0xd8c;
    constexpr std::ptrdiff_t m_OnPlayerPickup = 0xd90;
    constexpr std::ptrdiff_t m_weaponMode = 0xdb8;
    constexpr std::ptrdiff_t m_flTurningInaccuracyDelta = 0xdbc;
    constexpr std::ptrdiff_t m_vecTurningInaccuracyEyeDirLast = 0xdc0;
    constexpr std::ptrdiff_t m_flTurningInaccuracy = 0xdcc;
    constexpr std::ptrdiff_t m_fAccuracyPenalty = 0xdd0;
    constexpr std::ptrdiff_t m_flLastAccuracyUpdateTime = 0xdd4;
    constexpr std::ptrdiff_t m_fAccuracySmoothedForZoom = 0xdd8;
    constexpr std::ptrdiff_t m_fScopeZoomEndTime = 0xddc;
    constexpr std::ptrdiff_t m_iRecoilIndex = 0xde0;
    constexpr std::ptrdiff_t m_flRecoilIndex = 0xde4;
    constexpr std::ptrdiff_t m_bBurstMode = 0xde8;
    constexpr std::ptrdiff_t m_flPostponeFireReadyTime = 0xdec;
    constexpr std::ptrdiff_t m_bInReload = 0xdf0;
    constexpr std::ptrdiff_t m_bReloadVisuallyComplete = 0xdf1;
    constexpr std::ptrdiff_t m_flDroppedAtTime = 0xdf4;
    constexpr std::ptrdiff_t m_bIsHauledBack = 0xdf8;
    constexpr std::ptrdiff_t m_bSilencerOn = 0xdf9;
    constexpr std::ptrdiff_t m_flTimeSilencerSwitchComplete = 0xdfc;
    constexpr std::ptrdiff_t m_iOriginalTeamNumber = 0xe00;
    constexpr std::ptrdiff_t m_flNextAttackRenderTimeOffset = 0xe04;
    constexpr std::ptrdiff_t m_bCanBePickedUp = 0xe10;
    constexpr std::ptrdiff_t m_bUseCanOverrideNextOwnerTouchTime = 0xe11;
    constexpr std::ptrdiff_t m_nextOwnerTouchTime = 0xe14;
    constexpr std::ptrdiff_t m_nextPrevOwnerTouchTime = 0xe18;
    constexpr std::ptrdiff_t m_hPrevOwner = 0xe1c;
    constexpr std::ptrdiff_t m_nDropTick = 0xe20;
    constexpr std::ptrdiff_t m_donated = 0xe44;
    constexpr std::ptrdiff_t m_fLastShotTime = 0xe48;
    constexpr std::ptrdiff_t m_bWasOwnedByCT = 0xe4c;
    constexpr std::ptrdiff_t m_bWasOwnedByTerrorist = 0xe4d;
    constexpr std::ptrdiff_t m_bFiredOutOfAmmoEvent = 0xe4e;
    constexpr std::ptrdiff_t m_numRemoveUnownedWeaponThink = 0xe50;
    constexpr std::ptrdiff_t m_IronSightController = 0xe58;
    constexpr std::ptrdiff_t m_iIronSightMode = 0xe70;
    constexpr std::ptrdiff_t m_flLastLOSTraceFailureTime = 0xe74;
    constexpr std::ptrdiff_t m_iNumEmptyAttacks = 0xe78;
}

namespace CWeaponCSBaseGun {
    constexpr std::ptrdiff_t m_zoomLevel = 0xe80;
    constexpr std::ptrdiff_t m_iBurstShotsRemaining = 0xe84;
    constexpr std::ptrdiff_t m_silencedModelIndex = 0xe90;
    constexpr std::ptrdiff_t m_inPrecache = 0xe94;
    constexpr std::ptrdiff_t m_bNeedsBoltAction = 0xe95;
    constexpr std::ptrdiff_t m_bSkillReloadAvailable = 0xe96;
    constexpr std::ptrdiff_t m_bSkillReloadLiftedReloadKey = 0xe97;
    constexpr std::ptrdiff_t m_bSkillBoltInterruptAvailable = 0xe98;
    constexpr std::ptrdiff_t m_bSkillBoltLiftedFireKey = 0xe99;
}

namespace CWeaponCSBaseVData {
    constexpr std::ptrdiff_t m_WeaponType = 0x240;
    constexpr std::ptrdiff_t m_WeaponCategory = 0x244;
    constexpr std::ptrdiff_t m_szViewModel = 0x248;
    constexpr std::ptrdiff_t m_szPlayerModel = 0x328;
    constexpr std::ptrdiff_t m_szWorldDroppedModel = 0x408;
    constexpr std::ptrdiff_t m_szAimsightLensMaskModel = 0x4e8;
    constexpr std::ptrdiff_t m_szMagazineModel = 0x5c8;
    constexpr std::ptrdiff_t m_szHeatEffect = 0x6a8;
    constexpr std::ptrdiff_t m_szEjectBrassEffect = 0x788;
    constexpr std::ptrdiff_t m_szMuzzleFlashParticleAlt = 0x868;
    constexpr std::ptrdiff_t m_szMuzzleFlashThirdPersonParticle = 0x948;
    constexpr std::ptrdiff_t m_szMuzzleFlashThirdPersonParticleAlt = 0xa28;
    constexpr std::ptrdiff_t m_szTracerParticle = 0xb08;
    constexpr std::ptrdiff_t m_GearSlot = 0xbe8;
    constexpr std::ptrdiff_t m_GearSlotPosition = 0xbec;
    constexpr std::ptrdiff_t m_DefaultLoadoutSlot = 0xbf0;
    constexpr std::ptrdiff_t m_sWrongTeamMsg = 0xbf8;
    constexpr std::ptrdiff_t m_nPrice = 0xc00;
    constexpr std::ptrdiff_t m_nKillAward = 0xc04;
    constexpr std::ptrdiff_t m_nPrimaryReserveAmmoMax = 0xc08;
    constexpr std::ptrdiff_t m_nSecondaryReserveAmmoMax = 0xc0c;
    constexpr std::ptrdiff_t m_bMeleeWeapon = 0xc10;
    constexpr std::ptrdiff_t m_bHasBurstMode = 0xc11;
    constexpr std::ptrdiff_t m_bIsRevolver = 0xc12;
    constexpr std::ptrdiff_t m_bCannotShootUnderwater = 0xc13;
    constexpr std::ptrdiff_t m_szName = 0xc18;
    constexpr std::ptrdiff_t m_szAnimExtension = 0xc20;
    constexpr std::ptrdiff_t m_eSilencerType = 0xc28;
    constexpr std::ptrdiff_t m_nCrosshairMinDistance = 0xc2c;
    constexpr std::ptrdiff_t m_nCrosshairDeltaDistance = 0xc30;
    constexpr std::ptrdiff_t m_flCycleTime = 0xc34;
    constexpr std::ptrdiff_t m_flMaxSpeed = 0xc3c;
    constexpr std::ptrdiff_t m_flSpread = 0xc44;
    constexpr std::ptrdiff_t m_flInaccuracyCrouch = 0xc4c;
    constexpr std::ptrdiff_t m_flInaccuracyStand = 0xc54;
    constexpr std::ptrdiff_t m_flInaccuracyJump = 0xc5c;
    constexpr std::ptrdiff_t m_flInaccuracyLand = 0xc64;
    constexpr std::ptrdiff_t m_flInaccuracyLadder = 0xc6c;
    constexpr std::ptrdiff_t m_flInaccuracyFire = 0xc74;
    constexpr std::ptrdiff_t m_flInaccuracyMove = 0xc7c;
    constexpr std::ptrdiff_t m_flRecoilAngle = 0xc84;
    constexpr std::ptrdiff_t m_flRecoilAngleVariance = 0xc8c;
    constexpr std::ptrdiff_t m_flRecoilMagnitude = 0xc94;
    constexpr std::ptrdiff_t m_flRecoilMagnitudeVariance = 0xc9c;
    constexpr std::ptrdiff_t m_nTracerFrequency = 0xca4;
    constexpr std::ptrdiff_t m_flInaccuracyJumpInitial = 0xcac;
    constexpr std::ptrdiff_t m_flInaccuracyJumpApex = 0xcb0;
    constexpr std::ptrdiff_t m_flInaccuracyReload = 0xcb4;
    constexpr std::ptrdiff_t m_nRecoilSeed = 0xcb8;
    constexpr std::ptrdiff_t m_nSpreadSeed = 0xcbc;
    constexpr std::ptrdiff_t m_flTimeToIdleAfterFire = 0xcc0;
    constexpr std::ptrdiff_t m_flIdleInterval = 0xcc4;
    constexpr std::ptrdiff_t m_flAttackMovespeedFactor = 0xcc8;
    constexpr std::ptrdiff_t m_flHeatPerShot = 0xccc;
    constexpr std::ptrdiff_t m_flInaccuracyPitchShift = 0xcd0;
    constexpr std::ptrdiff_t m_flInaccuracyAltSoundThreshold = 0xcd4;
    constexpr std::ptrdiff_t m_flBotAudibleRange = 0xcd8;
    constexpr std::ptrdiff_t m_szUseRadioSubtitle = 0xce0;
    constexpr std::ptrdiff_t m_bUnzoomsAfterShot = 0xce8;
    constexpr std::ptrdiff_t m_bHideViewModelWhenZoomed = 0xce9;
    constexpr std::ptrdiff_t m_nZoomLevels = 0xcec;
    constexpr std::ptrdiff_t m_nZoomFOV1 = 0xcf0;
    constexpr std::ptrdiff_t m_nZoomFOV2 = 0xcf4;
    constexpr std::ptrdiff_t m_flZoomTime0 = 0xcf8;
    constexpr std::ptrdiff_t m_flZoomTime1 = 0xcfc;
    constexpr std::ptrdiff_t m_flZoomTime2 = 0xd00;
    constexpr std::ptrdiff_t m_flIronSightPullUpSpeed = 0xd04;
    constexpr std::ptrdiff_t m_flIronSightPutDownSpeed = 0xd08;
    constexpr std::ptrdiff_t m_flIronSightFOV = 0xd0c;
    constexpr std::ptrdiff_t m_flIronSightPivotForward = 0xd10;
    constexpr std::ptrdiff_t m_flIronSightLooseness = 0xd14;
    constexpr std::ptrdiff_t m_angPivotAngle = 0xd18;
    constexpr std::ptrdiff_t m_vecIronSightEyePos = 0xd24;
    constexpr std::ptrdiff_t m_nDamage = 0xd30;
    constexpr std::ptrdiff_t m_flHeadshotMultiplier = 0xd34;
    constexpr std::ptrdiff_t m_flArmorRatio = 0xd38;
    constexpr std::ptrdiff_t m_flPenetration = 0xd3c;
    constexpr std::ptrdiff_t m_flRange = 0xd40;
    constexpr std::ptrdiff_t m_flRangeModifier = 0xd44;
    constexpr std::ptrdiff_t m_flFlinchVelocityModifierLarge = 0xd48;
    constexpr std::ptrdiff_t m_flFlinchVelocityModifierSmall = 0xd4c;
    constexpr std::ptrdiff_t m_flRecoveryTimeCrouch = 0xd50;
    constexpr std::ptrdiff_t m_flRecoveryTimeStand = 0xd54;
    constexpr std::ptrdiff_t m_flRecoveryTimeCrouchFinal = 0xd58;
    constexpr std::ptrdiff_t m_flRecoveryTimeStandFinal = 0xd5c;
    constexpr std::ptrdiff_t m_nRecoveryTransitionStartBullet = 0xd60;
    constexpr std::ptrdiff_t m_nRecoveryTransitionEndBullet = 0xd64;
    constexpr std::ptrdiff_t m_flThrowVelocity = 0xd68;
    constexpr std::ptrdiff_t m_vSmokeColor = 0xd6c;
    constexpr std::ptrdiff_t m_szAnimClass = 0xd78;
}

namespace CWeaponShield {
    constexpr std::ptrdiff_t m_flBulletDamageAbsorbed = 0xea0;
    constexpr std::ptrdiff_t m_flLastBulletHitSoundTime = 0xea4;
    constexpr std::ptrdiff_t m_flDisplayHealth = 0xea8;
}

namespace CWeaponTaser {
    constexpr std::ptrdiff_t m_fFireTime = 0xea0;
}

namespace CommandToolCommand_t {
    constexpr std::ptrdiff_t m_bEnabled = 0x0;
    constexpr std::ptrdiff_t m_bOpened = 0x1;
    constexpr std::ptrdiff_t m_InternalId = 0x4;
    constexpr std::ptrdiff_t m_ShortName = 0x8;
    constexpr std::ptrdiff_t m_ExecMode = 0x10;
    constexpr std::ptrdiff_t m_SpawnGroup = 0x18;
    constexpr std::ptrdiff_t m_PeriodicExecDelay = 0x20;
    constexpr std::ptrdiff_t m_SpecType = 0x24;
    constexpr std::ptrdiff_t m_EntitySpec = 0x28;
    constexpr std::ptrdiff_t m_Commands = 0x30;
    constexpr std::ptrdiff_t m_SetDebugBits = 0x38;
    constexpr std::ptrdiff_t m_ClearDebugBits = 0x40;
}

namespace ConceptHistory_t {
    constexpr std::ptrdiff_t timeSpoken = 0x0;
    constexpr std::ptrdiff_t m_response = 0x8;
}

namespace ConstraintSoundInfo {
    constexpr std::ptrdiff_t m_vSampler = 0x8;
    constexpr std::ptrdiff_t m_soundProfile = 0x20;
    constexpr std::ptrdiff_t m_forwardAxis = 0x40;
    constexpr std::ptrdiff_t m_iszTravelSoundFwd = 0x50;
    constexpr std::ptrdiff_t m_iszTravelSoundBack = 0x58;
    constexpr std::ptrdiff_t m_iszReversalSounds = 0x68;
    constexpr std::ptrdiff_t m_bPlayTravelSound = 0x80;
    constexpr std::ptrdiff_t m_bPlayReversalSound = 0x81;
}

namespace CountdownTimer {
    constexpr std::ptrdiff_t m_duration = 0x8;
    constexpr std::ptrdiff_t m_timestamp = 0xc;
    constexpr std::ptrdiff_t m_timescale = 0x10;
    constexpr std::ptrdiff_t m_nWorldGroupId = 0x14;
}

namespace EngineCountdownTimer {
    constexpr std::ptrdiff_t m_duration = 0x8;
    constexpr std::ptrdiff_t m_timestamp = 0xc;
    constexpr std::ptrdiff_t m_timescale = 0x10;
}

namespace EntityRenderAttribute_t {
    constexpr std::ptrdiff_t m_ID = 0x30;
    constexpr std::ptrdiff_t m_Values = 0x34;
}

namespace EntitySpottedState_t {
    constexpr std::ptrdiff_t m_bSpotted = 0x8;
    constexpr std::ptrdiff_t m_bSpottedByMask = 0xc;
}

namespace Extent {
    constexpr std::ptrdiff_t lo = 0x0;
    constexpr std::ptrdiff_t hi = 0xc;
}

namespace FilterDamageType {
    constexpr std::ptrdiff_t m_iDamageType = 0x508;
}

namespace FilterHealth {
    constexpr std::ptrdiff_t m_bAdrenalineActive = 0x508;
    constexpr std::ptrdiff_t m_iHealthMin = 0x50c;
    constexpr std::ptrdiff_t m_iHealthMax = 0x510;
}

namespace FilterTeam {
    constexpr std::ptrdiff_t m_iFilterTeam = 0x508;
}

namespace GameAmmoTypeInfo_t {
    constexpr std::ptrdiff_t m_nBuySize = 0x38;
    constexpr std::ptrdiff_t m_nCost = 0x3c;
}

namespace GameTick_t {
    constexpr std::ptrdiff_t m_Value = 0x0;
}

namespace GameTime_t {
    constexpr std::ptrdiff_t m_Value = 0x0;
}

namespace HullFlags_t {
    constexpr std::ptrdiff_t m_bHull_Human = 0x0;
    constexpr std::ptrdiff_t m_bHull_SmallCentered = 0x1;
    constexpr std::ptrdiff_t m_bHull_WideHuman = 0x2;
    constexpr std::ptrdiff_t m_bHull_Tiny = 0x3;
    constexpr std::ptrdiff_t m_bHull_Medium = 0x4;
    constexpr std::ptrdiff_t m_bHull_TinyCentered = 0x5;
    constexpr std::ptrdiff_t m_bHull_Large = 0x6;
    constexpr std::ptrdiff_t m_bHull_LargeCentered = 0x7;
    constexpr std::ptrdiff_t m_bHull_MediumTall = 0x8;
    constexpr std::ptrdiff_t m_bHull_Small = 0x9;
}

namespace IntervalTimer {
    constexpr std::ptrdiff_t m_timestamp = 0x8;
    constexpr std::ptrdiff_t m_nWorldGroupId = 0xc;
}

namespace ModelConfigHandle_t {
    constexpr std::ptrdiff_t m_Value = 0x0;
}

namespace ParticleIndex_t {
    constexpr std::ptrdiff_t m_Value = 0x0;
}

namespace PhysicsRagdollPose_t {
    constexpr std::ptrdiff_t __m_pChainEntity = 0x8;
    constexpr std::ptrdiff_t m_Transforms = 0x30;
    constexpr std::ptrdiff_t m_hOwner = 0x48;
}

namespace RagdollCreationParams_t {
    constexpr std::ptrdiff_t m_vForce = 0x0;
    constexpr std::ptrdiff_t m_nForceBone = 0xc;
}

namespace RelationshipOverride_t {
    constexpr std::ptrdiff_t entity = 0x8;
    constexpr std::ptrdiff_t classType = 0xc;
}

namespace Relationship_t {
    constexpr std::ptrdiff_t disposition = 0x0;
    constexpr std::ptrdiff_t priority = 0x4;
}

namespace ResponseContext_t {
    constexpr std::ptrdiff_t m_iszName = 0x0;
    constexpr std::ptrdiff_t m_iszValue = 0x8;
    constexpr std::ptrdiff_t m_fExpirationTime = 0x10;
}

namespace ResponseFollowup {
    constexpr std::ptrdiff_t followup_concept = 0x0;
    constexpr std::ptrdiff_t followup_contexts = 0x8;
    constexpr std::ptrdiff_t followup_delay = 0x10;
    constexpr std::ptrdiff_t followup_target = 0x14;
    constexpr std::ptrdiff_t followup_entityiotarget = 0x1c;
    constexpr std::ptrdiff_t followup_entityioinput = 0x24;
    constexpr std::ptrdiff_t followup_entityiodelay = 0x2c;
    constexpr std::ptrdiff_t bFired = 0x30;
}

namespace ResponseParams {
    constexpr std::ptrdiff_t odds = 0x10;
    constexpr std::ptrdiff_t flags = 0x12;
    constexpr std::ptrdiff_t m_pFollowup = 0x18;
}

namespace SellbackPurchaseEntry_t {
    constexpr std::ptrdiff_t m_unDefIdx = 0x30;
    constexpr std::ptrdiff_t m_nCost = 0x34;
    constexpr std::ptrdiff_t m_nPrevArmor = 0x38;
    constexpr std::ptrdiff_t m_bPrevHelmet = 0x3c;
    constexpr std::ptrdiff_t m_hItem = 0x40;
}

namespace SimpleConstraintSoundProfile {
    constexpr std::ptrdiff_t eKeypoints = 0x8;
    constexpr std::ptrdiff_t m_keyPoints = 0xc;
    constexpr std::ptrdiff_t m_reversalSoundThresholds = 0x14;
}

namespace SpawnPoint {
    constexpr std::ptrdiff_t m_iPriority = 0x4b0;
    constexpr std::ptrdiff_t m_bEnabled = 0x4b4;
    constexpr std::ptrdiff_t m_nType = 0x4b8;
}

namespace SpawnPointCoopEnemy {
    constexpr std::ptrdiff_t m_szWeaponsToGive = 0x4c0;
    constexpr std::ptrdiff_t m_szPlayerModelToUse = 0x4c8;
    constexpr std::ptrdiff_t m_nArmorToSpawnWith = 0x4d0;
    constexpr std::ptrdiff_t m_nDefaultBehavior = 0x4d4;
    constexpr std::ptrdiff_t m_nBotDifficulty = 0x4d8;
    constexpr std::ptrdiff_t m_bIsAgressive = 0x4dc;
    constexpr std::ptrdiff_t m_bStartAsleep = 0x4dd;
    constexpr std::ptrdiff_t m_flHideRadius = 0x4e0;
    constexpr std::ptrdiff_t m_szBehaviorTreeFile = 0x4f0;
}

namespace SummaryTakeDamageInfo_t {
    constexpr std::ptrdiff_t nSummarisedCount = 0x0;
    constexpr std::ptrdiff_t info = 0x8;
    constexpr std::ptrdiff_t result = 0xa8;
    constexpr std::ptrdiff_t hTarget = 0xb0;
}

namespace VPhysicsCollisionAttribute_t {
    constexpr std::ptrdiff_t m_nInteractsAs = 0x8;
    constexpr std::ptrdiff_t m_nInteractsWith = 0x10;
    constexpr std::ptrdiff_t m_nInteractsExclude = 0x18;
    constexpr std::ptrdiff_t m_nEntityId = 0x20;
    constexpr std::ptrdiff_t m_nOwnerId = 0x24;
    constexpr std::ptrdiff_t m_nHierarchyId = 0x28;
    constexpr std::ptrdiff_t m_nCollisionGroup = 0x2a;
    constexpr std::ptrdiff_t m_nCollisionFunctionMask = 0x2b;
}

namespace VelocitySampler {
    constexpr std::ptrdiff_t m_prevSample = 0x0;
    constexpr std::ptrdiff_t m_fPrevSampleTime = 0xc;
    constexpr std::ptrdiff_t m_fIdealSampleRate = 0x10;
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
    constexpr std::ptrdiff_t localBits = 0x6c;
    constexpr std::ptrdiff_t soundscapeEntityListIndex = 0x70;
    constexpr std::ptrdiff_t soundEventHash = 0x74;
}

namespace dynpitchvol_base_t {
    constexpr std::ptrdiff_t preset = 0x0;
    constexpr std::ptrdiff_t pitchrun = 0x4;
    constexpr std::ptrdiff_t pitchstart = 0x8;
    constexpr std::ptrdiff_t spinup = 0xc;
    constexpr std::ptrdiff_t spindown = 0x10;
    constexpr std::ptrdiff_t volrun = 0x14;
    constexpr std::ptrdiff_t volstart = 0x18;
    constexpr std::ptrdiff_t fadein = 0x1c;
    constexpr std::ptrdiff_t fadeout = 0x20;
    constexpr std::ptrdiff_t lfotype = 0x24;
    constexpr std::ptrdiff_t lforate = 0x28;
    constexpr std::ptrdiff_t lfomodpitch = 0x2c;
    constexpr std::ptrdiff_t lfomodvol = 0x30;
    constexpr std::ptrdiff_t cspinup = 0x34;
    constexpr std::ptrdiff_t cspincount = 0x38;
    constexpr std::ptrdiff_t pitch = 0x3c;
    constexpr std::ptrdiff_t spinupsav = 0x40;
    constexpr std::ptrdiff_t spindownsav = 0x44;
    constexpr std::ptrdiff_t pitchfrac = 0x48;
    constexpr std::ptrdiff_t vol = 0x4c;
    constexpr std::ptrdiff_t fadeinsav = 0x50;
    constexpr std::ptrdiff_t fadeoutsav = 0x54;
    constexpr std::ptrdiff_t volfrac = 0x58;
    constexpr std::ptrdiff_t lfofrac = 0x5c;
    constexpr std::ptrdiff_t lfomult = 0x60;
}

namespace fogparams_t {
    constexpr std::ptrdiff_t dirPrimary = 0x8;
    constexpr std::ptrdiff_t colorPrimary = 0x14;
    constexpr std::ptrdiff_t colorSecondary = 0x18;
    constexpr std::ptrdiff_t colorPrimaryLerpTo = 0x1c;
    constexpr std::ptrdiff_t colorSecondaryLerpTo = 0x20;
    constexpr std::ptrdiff_t start = 0x24;
    constexpr std::ptrdiff_t end = 0x28;
    constexpr std::ptrdiff_t farz = 0x2c;
    constexpr std::ptrdiff_t maxdensity = 0x30;
    constexpr std::ptrdiff_t exponent = 0x34;
    constexpr std::ptrdiff_t HDRColorScale = 0x38;
    constexpr std::ptrdiff_t skyboxFogFactor = 0x3c;
    constexpr std::ptrdiff_t skyboxFogFactorLerpTo = 0x40;
    constexpr std::ptrdiff_t startLerpTo = 0x44;
    constexpr std::ptrdiff_t endLerpTo = 0x48;
    constexpr std::ptrdiff_t maxdensityLerpTo = 0x4c;
    constexpr std::ptrdiff_t lerptime = 0x50;
    constexpr std::ptrdiff_t duration = 0x54;
    constexpr std::ptrdiff_t blendtobackground = 0x58;
    constexpr std::ptrdiff_t scattering = 0x5c;
    constexpr std::ptrdiff_t locallightscale = 0x60;
    constexpr std::ptrdiff_t enable = 0x64;
    constexpr std::ptrdiff_t blend = 0x65;
    constexpr std::ptrdiff_t m_bNoReflectionFog = 0x66;
    constexpr std::ptrdiff_t m_bPadding = 0x67;
}

namespace fogplayerparams_t {
    constexpr std::ptrdiff_t m_hCtrl = 0x8;
    constexpr std::ptrdiff_t m_flTransitionTime = 0xc;
    constexpr std::ptrdiff_t m_OldColor = 0x10;
    constexpr std::ptrdiff_t m_flOldStart = 0x14;
    constexpr std::ptrdiff_t m_flOldEnd = 0x18;
    constexpr std::ptrdiff_t m_flOldMaxDensity = 0x1c;
    constexpr std::ptrdiff_t m_flOldHDRColorScale = 0x20;
    constexpr std::ptrdiff_t m_flOldFarZ = 0x24;
    constexpr std::ptrdiff_t m_NewColor = 0x28;
    constexpr std::ptrdiff_t m_flNewStart = 0x2c;
    constexpr std::ptrdiff_t m_flNewEnd = 0x30;
    constexpr std::ptrdiff_t m_flNewMaxDensity = 0x34;
    constexpr std::ptrdiff_t m_flNewHDRColorScale = 0x38;
    constexpr std::ptrdiff_t m_flNewFarZ = 0x3c;
}

namespace hudtextparms_t {
    constexpr std::ptrdiff_t color1 = 0x0;
    constexpr std::ptrdiff_t color2 = 0x4;
    constexpr std::ptrdiff_t effect = 0x8;
    constexpr std::ptrdiff_t channel = 0x9;
    constexpr std::ptrdiff_t x = 0xc;
    constexpr std::ptrdiff_t y = 0x10;
}

namespace lerpdata_t {
    constexpr std::ptrdiff_t m_hEnt = 0x0;
    constexpr std::ptrdiff_t m_MoveType = 0x4;
    constexpr std::ptrdiff_t m_flStartTime = 0x8;
    constexpr std::ptrdiff_t m_vecStartOrigin = 0xc;
    constexpr std::ptrdiff_t m_qStartRot = 0x20;
    constexpr std::ptrdiff_t m_nFXIndex = 0x30;
}

namespace locksound_t {
    constexpr std::ptrdiff_t sLockedSound = 0x8;
    constexpr std::ptrdiff_t sUnlockedSound = 0x10;
    constexpr std::ptrdiff_t flwaitSound = 0x18;
}

namespace magnetted_objects_t {
    constexpr std::ptrdiff_t hEntity = 0x8;
}

namespace ragdoll_t {
    constexpr std::ptrdiff_t list = 0x0;
    constexpr std::ptrdiff_t boneIndex = 0x18;
    constexpr std::ptrdiff_t allowStretch = 0x30;
    constexpr std::ptrdiff_t unused = 0x31;
}

namespace ragdollelement_t {
    constexpr std::ptrdiff_t originParentSpace = 0x0;
    constexpr std::ptrdiff_t parentIndex = 0x20;
    constexpr std::ptrdiff_t m_flRadius = 0x24;
}

namespace shard_model_desc_t {
    constexpr std::ptrdiff_t m_nModelID = 0x8;
    constexpr std::ptrdiff_t m_hMaterial = 0x10;
    constexpr std::ptrdiff_t m_solid = 0x18;
    constexpr std::ptrdiff_t m_ShatterPanelMode = 0x19;
    constexpr std::ptrdiff_t m_vecPanelSize = 0x1c;
    constexpr std::ptrdiff_t m_vecStressPositionA = 0x24;
    constexpr std::ptrdiff_t m_vecStressPositionB = 0x2c;
    constexpr std::ptrdiff_t m_vecPanelVertices = 0x38;
    constexpr std::ptrdiff_t m_flGlassHalfThickness = 0x50;
    constexpr std::ptrdiff_t m_bHasParent = 0x54;
    constexpr std::ptrdiff_t m_bParentFrozen = 0x55;
    constexpr std::ptrdiff_t m_SurfacePropStringToken = 0x58;
    constexpr std::ptrdiff_t m_LightGroup = 0x5c;
}

namespace sky3dparams_t {
    constexpr std::ptrdiff_t scale = 0x8;
    constexpr std::ptrdiff_t origin = 0xc;
    constexpr std::ptrdiff_t bClip3DSkyBoxNearToWorldFar = 0x18;
    constexpr std::ptrdiff_t flClip3DSkyBoxNearToWorldFarOffset = 0x1c;
    constexpr std::ptrdiff_t fog = 0x20;
    constexpr std::ptrdiff_t m_nWorldGroupID = 0x88;
}

namespace thinkfunc_t {
    constexpr std::ptrdiff_t m_hFn = 0x8;
    constexpr std::ptrdiff_t m_nContext = 0x10;
    constexpr std::ptrdiff_t m_nNextThinkTick = 0x14;
    constexpr std::ptrdiff_t m_nLastThinkTick = 0x18;
}