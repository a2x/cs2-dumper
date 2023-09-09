public static class ActiveModelConfig_t {
    public const ulong m_Handle = 0x28;
    public const ulong m_Name = 0x30;
    public const ulong m_AssociatedEntities = 0x38;
    public const ulong m_AssociatedEntityNames = 0x50;
}

public static class AmmoIndex_t {
    public const ulong m_Value = 0x0;
}

public static class AmmoTypeInfo_t {
    public const ulong m_nMaxCarry = 0x10;
    public const ulong m_nSplashSize = 0x1c;
    public const ulong m_nFlags = 0x24;
    public const ulong m_flMass = 0x28;
    public const ulong m_flSpeed = 0x2c;
}

public static class AnimationUpdateListHandle_t {
    public const ulong m_Value = 0x0;
}

public static class CAISound {
    public const ulong m_iSoundType = 0x4b0;
    public const ulong m_iSoundContext = 0x4b4;
    public const ulong m_iVolume = 0x4b8;
    public const ulong m_iSoundIndex = 0x4bc;
    public const ulong m_flDuration = 0x4c0;
    public const ulong m_iszProxyEntityName = 0x4c8;
}

public static class CAI_ChangeHintGroup {
    public const ulong m_iSearchType = 0x4b0;
    public const ulong m_strSearchName = 0x4b8;
    public const ulong m_strNewHintGroup = 0x4c0;
    public const ulong m_flRadius = 0x4c8;
}

public static class CAI_ChangeTarget {
    public const ulong m_iszNewTarget = 0x4b0;
}

public static class CAI_Expresser {
    public const ulong m_flStopTalkTime = 0x38;
    public const ulong m_flStopTalkTimeWithoutDelay = 0x3c;
    public const ulong m_flBlockedTalkTime = 0x40;
    public const ulong m_voicePitch = 0x44;
    public const ulong m_flLastTimeAcceptedSpeak = 0x48;
    public const ulong m_bAllowSpeakingInterrupts = 0x4c;
    public const ulong m_bConsiderSceneInvolvementAsSpeech = 0x4d;
    public const ulong m_nLastSpokenPriority = 0x50;
    public const ulong m_pOuter = 0x58;
}

public static class CAI_ExpresserWithFollowup {
    public const ulong m_pPostponedFollowup = 0x60;
}

public static class CAmbientGeneric {
    public const ulong m_radius = 0x4b0;
    public const ulong m_flMaxRadius = 0x4b4;
    public const ulong m_iSoundLevel = 0x4b8;
    public const ulong m_dpv = 0x4bc;
    public const ulong m_fActive = 0x520;
    public const ulong m_fLooping = 0x521;
    public const ulong m_iszSound = 0x528;
    public const ulong m_sSourceEntName = 0x530;
    public const ulong m_hSoundSource = 0x538;
    public const ulong m_nSoundSourceEntIndex = 0x53c;
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

public static class CAnimGraphTagRef {
    public const ulong m_nTagIndex = 0x0;
    public const ulong m_tagName = 0x10;
}

public static class CAttributeContainer {
    public const ulong m_Item = 0x50;
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

public static class CBRC4Target {
    public const ulong m_hPlayerThatActivatedMe = 0x958;
    public const ulong m_bBrokenOpen = 0x95c;
    public const ulong m_flRadius = 0x960;
}

public static class CBarnLight {
    public const ulong m_bEnabled = 0x700;
    public const ulong m_nColorMode = 0x704;
    public const ulong m_Color = 0x708;
    public const ulong m_flColorTemperature = 0x70c;
    public const ulong m_flBrightness = 0x710;
    public const ulong m_flBrightnessScale = 0x714;
    public const ulong m_nDirectLight = 0x718;
    public const ulong m_nBakedShadowIndex = 0x71c;
    public const ulong m_nLuminaireShape = 0x720;
    public const ulong m_flLuminaireSize = 0x724;
    public const ulong m_flLuminaireAnisotropy = 0x728;
    public const ulong m_LightStyleString = 0x730;
    public const ulong m_flLightStyleStartTime = 0x738;
    public const ulong m_QueuedLightStyleStrings = 0x740;
    public const ulong m_LightStyleEvents = 0x758;
    public const ulong m_LightStyleTargets = 0x770;
    public const ulong m_StyleEvent = 0x788;
    public const ulong m_StyleRadianceVar = 0x828;
    public const ulong m_StyleVar = 0x830;
    public const ulong m_hLightCookie = 0x858;
    public const ulong m_flShape = 0x860;
    public const ulong m_flSoftX = 0x864;
    public const ulong m_flSoftY = 0x868;
    public const ulong m_flSkirt = 0x86c;
    public const ulong m_flSkirtNear = 0x870;
    public const ulong m_vSizeParams = 0x874;
    public const ulong m_flRange = 0x880;
    public const ulong m_vShear = 0x884;
    public const ulong m_nBakeSpecularToCubemaps = 0x890;
    public const ulong m_vBakeSpecularToCubemapsSize = 0x894;
    public const ulong m_nCastShadows = 0x8a0;
    public const ulong m_nShadowMapSize = 0x8a4;
    public const ulong m_nShadowPriority = 0x8a8;
    public const ulong m_bContactShadow = 0x8ac;
    public const ulong m_nBounceLight = 0x8b0;
    public const ulong m_flBounceScale = 0x8b4;
    public const ulong m_flMinRoughness = 0x8b8;
    public const ulong m_vAlternateColor = 0x8bc;
    public const ulong m_fAlternateColorBrightness = 0x8c8;
    public const ulong m_nFog = 0x8cc;
    public const ulong m_flFogStrength = 0x8d0;
    public const ulong m_nFogShadows = 0x8d4;
    public const ulong m_flFogScale = 0x8d8;
    public const ulong m_flFadeSizeStart = 0x8dc;
    public const ulong m_flFadeSizeEnd = 0x8e0;
    public const ulong m_flShadowFadeSizeStart = 0x8e4;
    public const ulong m_flShadowFadeSizeEnd = 0x8e8;
    public const ulong m_bPrecomputedFieldsValid = 0x8ec;
    public const ulong m_vPrecomputedBoundsMins = 0x8f0;
    public const ulong m_vPrecomputedBoundsMaxs = 0x8fc;
    public const ulong m_vPrecomputedOBBOrigin = 0x908;
    public const ulong m_vPrecomputedOBBAngles = 0x914;
    public const ulong m_vPrecomputedOBBExtent = 0x920;
    public const ulong m_bPvsModifyEntity = 0x92c;
}

public static class CBaseAnimGraph {
    public const ulong m_bInitiallyPopulateInterpHistory = 0x708;
    public const ulong m_bShouldAnimateDuringGameplayPause = 0x709;
    public const ulong m_pChoreoServices = 0x710;
    public const ulong m_bAnimGraphUpdateEnabled = 0x718;
    public const ulong m_flLastEventAnimTime = 0x7ac;
    public const ulong m_hAnimationUpdate = 0x7b4;
    public const ulong m_flMaxSlopeDistance = 0x7b8;
    public const ulong m_vLastSlopeCheckPos = 0x7bc;
    public const ulong m_bAnimGraphDirty = 0x7c8;
    public const ulong m_vecForce = 0x7cc;
    public const ulong m_nForceBone = 0x7d8;
    public const ulong m_pRagdollPose = 0x7f0;
    public const ulong m_bClientRagdoll = 0x7f8;
}

public static class CBaseAnimGraphController {
    public const ulong m_baseLayer = 0x10;
    public const ulong m_animGraphNetworkedVars = 0x38;
    public const ulong m_bSequenceFinished = 0x210;
    public const ulong m_flLastEventCycle = 0x214;
    public const ulong m_flPlaybackRate = 0x218;
    public const ulong m_flPrevAnimTime = 0x220;
    public const ulong m_bClientSideAnimation = 0x224;
    public const ulong m_bNetworkedAnimationInputsChanged = 0x225;
    public const ulong m_nNewSequenceParity = 0x228;
    public const ulong m_nResetEventsParity = 0x22c;
    public const ulong m_nAnimLoopMode = 0x230;
}

public static class CBaseButton {
    public const ulong m_angMoveEntitySpace = 0x780;
    public const ulong m_fStayPushed = 0x78c;
    public const ulong m_fRotating = 0x78d;
    public const ulong m_ls = 0x790;
    public const ulong m_sUseSound = 0x7b0;
    public const ulong m_sLockedSound = 0x7b8;
    public const ulong m_sUnlockedSound = 0x7c0;
    public const ulong m_bLocked = 0x7c8;
    public const ulong m_bDisabled = 0x7c9;
    public const ulong m_flUseLockedTime = 0x7cc;
    public const ulong m_bSolidBsp = 0x7d0;
    public const ulong m_OnDamaged = 0x7d8;
    public const ulong m_OnPressed = 0x800;
    public const ulong m_OnUseLocked = 0x828;
    public const ulong m_OnIn = 0x850;
    public const ulong m_OnOut = 0x878;
    public const ulong m_nState = 0x8a0;
    public const ulong m_hConstraint = 0x8a4;
    public const ulong m_hConstraintParent = 0x8a8;
    public const ulong m_bForceNpcExclude = 0x8ac;
    public const ulong m_sGlowEntity = 0x8b0;
    public const ulong m_glowEntity = 0x8b8;
    public const ulong m_usable = 0x8bc;
    public const ulong m_szDisplayText = 0x8c0;
}

public static class CBaseCSGrenade {
    public const ulong m_bRedraw = 0xea0;
    public const ulong m_bIsHeldByPlayer = 0xea1;
    public const ulong m_bPinPulled = 0xea2;
    public const ulong m_bJumpThrow = 0xea3;
    public const ulong m_eThrowStatus = 0xea4;
    public const ulong m_fThrowTime = 0xea8;
    public const ulong m_flThrowStrength = 0xeac;
    public const ulong m_flThrowStrengthApproach = 0xeb0;
    public const ulong m_fDropTime = 0xeb4;
}

public static class CBaseCSGrenadeProjectile {
    public const ulong m_vInitialVelocity = 0xa68;
    public const ulong m_nBounces = 0xa74;
    public const ulong m_nExplodeEffectIndex = 0xa78;
    public const ulong m_nExplodeEffectTickBegin = 0xa80;
    public const ulong m_vecExplodeEffectOrigin = 0xa84;
    public const ulong m_unOGSExtraFlags = 0xa90;
    public const ulong m_bDetonationRecorded = 0xa91;
    public const ulong m_flDetonateTime = 0xa94;
    public const ulong m_nItemIndex = 0xa98;
    public const ulong m_vecOriginalSpawnLocation = 0xa9c;
    public const ulong m_flLastBounceSoundTime = 0xaa8;
    public const ulong m_vecGrenadeSpin = 0xaac;
    public const ulong m_vecLastHitSurfaceNormal = 0xab8;
    public const ulong m_nTicksAtZeroVelocity = 0xac4;
}

public static class CBaseClientUIEntity {
    public const ulong m_bEnabled = 0x700;
    public const ulong m_DialogXMLName = 0x708;
    public const ulong m_PanelClassName = 0x710;
    public const ulong m_PanelID = 0x718;
    public const ulong m_CustomOutput0 = 0x720;
    public const ulong m_CustomOutput1 = 0x748;
    public const ulong m_CustomOutput2 = 0x770;
    public const ulong m_CustomOutput3 = 0x798;
    public const ulong m_CustomOutput4 = 0x7c0;
    public const ulong m_CustomOutput5 = 0x7e8;
    public const ulong m_CustomOutput6 = 0x810;
    public const ulong m_CustomOutput7 = 0x838;
    public const ulong m_CustomOutput8 = 0x860;
    public const ulong m_CustomOutput9 = 0x888;
}

public static class CBaseCombatCharacter {
    public const ulong m_bForceServerRagdoll = 0x9c0;
    public const ulong m_hMyWearables = 0x9c8;
    public const ulong m_flFieldOfView = 0x9e0;
    public const ulong m_impactEnergyScale = 0x9e4;
    public const ulong m_LastHitGroup = 0x9e8;
    public const ulong m_bApplyStressDamage = 0x9ec;
    public const ulong m_bloodColor = 0x9f0;
    public const ulong m_navMeshID = 0xa50;
    public const ulong m_iDamageCount = 0xa54;
    public const ulong m_pVecRelationships = 0xa58;
    public const ulong m_strRelationships = 0xa60;
    public const ulong m_eHull = 0xa68;
    public const ulong m_nNavHullIdx = 0xa6c;
}

public static class CBaseDMStart {
    public const ulong m_Master = 0x4b0;
}

public static class CBaseDoor {
    public const ulong m_angMoveEntitySpace = 0x790;
    public const ulong m_vecMoveDirParentSpace = 0x79c;
    public const ulong m_ls = 0x7a8;
    public const ulong m_bForceClosed = 0x7c8;
    public const ulong m_bDoorGroup = 0x7c9;
    public const ulong m_bLocked = 0x7ca;
    public const ulong m_bIgnoreDebris = 0x7cb;
    public const ulong m_eSpawnPosition = 0x7cc;
    public const ulong m_flBlockDamage = 0x7d0;
    public const ulong m_NoiseMoving = 0x7d8;
    public const ulong m_NoiseArrived = 0x7e0;
    public const ulong m_NoiseMovingClosed = 0x7e8;
    public const ulong m_NoiseArrivedClosed = 0x7f0;
    public const ulong m_ChainTarget = 0x7f8;
    public const ulong m_OnBlockedClosing = 0x800;
    public const ulong m_OnBlockedOpening = 0x828;
    public const ulong m_OnUnblockedClosing = 0x850;
    public const ulong m_OnUnblockedOpening = 0x878;
    public const ulong m_OnFullyClosed = 0x8a0;
    public const ulong m_OnFullyOpen = 0x8c8;
    public const ulong m_OnClose = 0x8f0;
    public const ulong m_OnOpen = 0x918;
    public const ulong m_OnLockedUse = 0x940;
    public const ulong m_bLoopMoveSound = 0x968;
    public const ulong m_bCreateNavObstacle = 0x980;
    public const ulong m_isChaining = 0x981;
    public const ulong m_bIsUsable = 0x982;
}

public static class CBaseEntity {
    public const ulong m_CBodyComponent = 0x30;
    public const ulong m_NetworkTransmitComponent = 0x38;
    public const ulong m_aThinkFunctions = 0x228;
    public const ulong m_iCurrentThinkContext = 0x240;
    public const ulong m_nLastThinkTick = 0x244;
    public const ulong m_isSteadyState = 0x250;
    public const ulong m_lastNetworkChange = 0x258;
    public const ulong m_ResponseContexts = 0x268;
    public const ulong m_iszResponseContext = 0x280;
    public const ulong m_iHealth = 0x2a8;
    public const ulong m_iMaxHealth = 0x2ac;
    public const ulong m_lifeState = 0x2b0;
    public const ulong m_flDamageAccumulator = 0x2b4;
    public const ulong m_bTakesDamage = 0x2b8;
    public const ulong m_nTakeDamageFlags = 0x2bc;
    public const ulong m_MoveCollide = 0x2c1;
    public const ulong m_MoveType = 0x2c2;
    public const ulong m_nWaterTouch = 0x2c3;
    public const ulong m_nSlimeTouch = 0x2c4;
    public const ulong m_bRestoreInHierarchy = 0x2c5;
    public const ulong m_target = 0x2c8;
    public const ulong m_flMoveDoneTime = 0x2d0;
    public const ulong m_hDamageFilter = 0x2d4;
    public const ulong m_iszDamageFilterName = 0x2d8;
    public const ulong m_nSubclassID = 0x2e0;
    public const ulong m_flAnimTime = 0x2f0;
    public const ulong m_flSimulationTime = 0x2f4;
    public const ulong m_flCreateTime = 0x2f8;
    public const ulong m_bClientSideRagdoll = 0x2fc;
    public const ulong m_ubInterpolationFrame = 0x2fd;
    public const ulong m_vPrevVPhysicsUpdatePos = 0x300;
    public const ulong m_iTeamNum = 0x30c;
    public const ulong m_iGlobalname = 0x310;
    public const ulong m_iSentToClients = 0x318;
    public const ulong m_flSpeed = 0x31c;
    public const ulong m_sUniqueHammerID = 0x320;
    public const ulong m_spawnflags = 0x328;
    public const ulong m_nNextThinkTick = 0x32c;
    public const ulong m_nSimulationTick = 0x330;
    public const ulong m_OnKilled = 0x338;
    public const ulong m_fFlags = 0x360;
    public const ulong m_vecAbsVelocity = 0x364;
    public const ulong m_vecVelocity = 0x370;
    public const ulong m_vecBaseVelocity = 0x3a0;
    public const ulong m_nPushEnumCount = 0x3ac;
    public const ulong m_pCollision = 0x3b0;
    public const ulong m_hEffectEntity = 0x3b8;
    public const ulong m_hOwnerEntity = 0x3bc;
    public const ulong m_fEffects = 0x3c0;
    public const ulong m_hGroundEntity = 0x3c4;
    public const ulong m_flFriction = 0x3c8;
    public const ulong m_flElasticity = 0x3cc;
    public const ulong m_flGravityScale = 0x3d0;
    public const ulong m_flTimeScale = 0x3d4;
    public const ulong m_flWaterLevel = 0x3d8;
    public const ulong m_bSimulatedEveryTick = 0x3dc;
    public const ulong m_bAnimatedEveryTick = 0x3dd;
    public const ulong m_bDisableLowViolence = 0x3de;
    public const ulong m_nWaterType = 0x3df;
    public const ulong m_iEFlags = 0x3e0;
    public const ulong m_OnUser1 = 0x3e8;
    public const ulong m_OnUser2 = 0x410;
    public const ulong m_OnUser3 = 0x438;
    public const ulong m_OnUser4 = 0x460;
    public const ulong m_iInitialTeamNum = 0x488;
    public const ulong m_flNavIgnoreUntilTime = 0x48c;
    public const ulong m_vecAngVelocity = 0x490;
    public const ulong m_bNetworkQuantizeOriginAndAngles = 0x49c;
    public const ulong m_bLagCompensate = 0x49d;
    public const ulong m_flOverriddenFriction = 0x4a0;
    public const ulong m_pBlocker = 0x4a4;
    public const ulong m_flLocalTime = 0x4a8;
    public const ulong m_flVPhysicsUpdateLocalTime = 0x4ac;
}

public static class CBaseFilter {
    public const ulong m_bNegated = 0x4b0;
    public const ulong m_OnPass = 0x4b8;
    public const ulong m_OnFail = 0x4e0;
}

public static class CBaseFire {
    public const ulong m_flScale = 0x4b0;
    public const ulong m_flStartScale = 0x4b4;
    public const ulong m_flScaleTime = 0x4b8;
    public const ulong m_nFlags = 0x4bc;
}

public static class CBaseFlex {
    public const ulong m_flexWeight = 0x930;
    public const ulong m_vLookTargetPosition = 0x948;
    public const ulong m_blinktoggle = 0x954;
    public const ulong m_flAllowResponsesEndTime = 0x9a8;
    public const ulong m_flLastFlexAnimationTime = 0x9ac;
    public const ulong m_nNextSceneEventId = 0x9b0;
    public const ulong m_bUpdateLayerPriorities = 0x9b4;
}

public static class CBaseGrenade {
    public const ulong m_OnPlayerPickup = 0x9c8;
    public const ulong m_OnExplode = 0x9f0;
    public const ulong m_bHasWarnedAI = 0xa18;
    public const ulong m_bIsSmokeGrenade = 0xa19;
    public const ulong m_bIsLive = 0xa1a;
    public const ulong m_DmgRadius = 0xa1c;
    public const ulong m_flDetonateTime = 0xa20;
    public const ulong m_flWarnAITime = 0xa24;
    public const ulong m_flDamage = 0xa28;
    public const ulong m_iszBounceSound = 0xa30;
    public const ulong m_ExplosionSound = 0xa38;
    public const ulong m_hThrower = 0xa44;
    public const ulong m_flNextAttack = 0xa60;
    public const ulong m_hOriginalThrower = 0xa64;
}

public static class CBaseIssue {
    public const ulong m_szTypeString = 0x20;
    public const ulong m_szDetailsString = 0x60;
    public const ulong m_iNumYesVotes = 0x164;
    public const ulong m_iNumNoVotes = 0x168;
    public const ulong m_iNumPotentialVotes = 0x16c;
    public const ulong m_pVoteController = 0x170;
}

public static class CBaseModelEntity {
    public const ulong m_CRenderComponent = 0x4b0;
    public const ulong m_CHitboxComponent = 0x4b8;
    public const ulong m_flDissolveStartTime = 0x4e0;
    public const ulong m_OnIgnite = 0x4e8;
    public const ulong m_nRenderMode = 0x510;
    public const ulong m_nRenderFX = 0x511;
    public const ulong m_bAllowFadeInView = 0x512;
    public const ulong m_clrRender = 0x513;
    public const ulong m_vecRenderAttributes = 0x518;
    public const ulong m_LightGroup = 0x568;
    public const ulong m_bRenderToCubemaps = 0x56c;
    public const ulong m_Collision = 0x570;
    public const ulong m_Glow = 0x620;
    public const ulong m_flGlowBackfaceMult = 0x678;
    public const ulong m_fadeMinDist = 0x67c;
    public const ulong m_fadeMaxDist = 0x680;
    public const ulong m_flFadeScale = 0x684;
    public const ulong m_flShadowStrength = 0x688;
    public const ulong m_nObjectCulling = 0x68c;
    public const ulong m_nAddDecal = 0x690;
    public const ulong m_vDecalPosition = 0x694;
    public const ulong m_vDecalForwardAxis = 0x6a0;
    public const ulong m_flDecalHealBloodRate = 0x6ac;
    public const ulong m_flDecalHealHeightRate = 0x6b0;
    public const ulong m_ConfigEntitiesToPropagateMaterialDecalsTo = 0x6b8;
    public const ulong m_vecViewOffset = 0x6d0;
}

public static class CBaseMoveBehavior {
    public const ulong m_iPositionInterpolator = 0x510;
    public const ulong m_iRotationInterpolator = 0x514;
    public const ulong m_flAnimStartTime = 0x518;
    public const ulong m_flAnimEndTime = 0x51c;
    public const ulong m_flAverageSpeedAcrossFrame = 0x520;
    public const ulong m_pCurrentKeyFrame = 0x528;
    public const ulong m_pTargetKeyFrame = 0x530;
    public const ulong m_pPreKeyFrame = 0x538;
    public const ulong m_pPostKeyFrame = 0x540;
    public const ulong m_flTimeIntoFrame = 0x548;
    public const ulong m_iDirection = 0x54c;
}

public static class CBasePlatTrain {
    public const ulong m_NoiseMoving = 0x780;
    public const ulong m_NoiseArrived = 0x788;
    public const ulong m_volume = 0x798;
    public const ulong m_flTWidth = 0x79c;
    public const ulong m_flTLength = 0x7a0;
}

public static class CBasePlayerController {
    public const ulong m_nInButtonsWhichAreToggles = 0x4b8;
    public const ulong m_nTickBase = 0x4c0;
    public const ulong m_hPawn = 0x4f0;
    public const ulong m_nSplitScreenSlot = 0x4f4;
    public const ulong m_hSplitOwner = 0x4f8;
    public const ulong m_hSplitScreenPlayers = 0x500;
    public const ulong m_bIsHLTV = 0x518;
    public const ulong m_iConnected = 0x51c;
    public const ulong m_iszPlayerName = 0x520;
    public const ulong m_szNetworkIDString = 0x5a0;
    public const ulong m_fLerpTime = 0x5a8;
    public const ulong m_bLagCompensation = 0x5ac;
    public const ulong m_bPredict = 0x5ad;
    public const ulong m_bAutoKickDisabled = 0x5ae;
    public const ulong m_bIsLowViolence = 0x5af;
    public const ulong m_bGamePaused = 0x5b0;
    public const ulong m_nHighestCommandNumberReceived = 0x628;
    public const ulong m_nUsecTimestampLastUserCmdReceived = 0x630;
    public const ulong m_iIgnoreGlobalChat = 0x648;
    public const ulong m_flLastPlayerTalkTime = 0x64c;
    public const ulong m_flLastEntitySteadyState = 0x650;
    public const ulong m_nAvailableEntitySteadyState = 0x654;
    public const ulong m_bHasAnySteadyStateEnts = 0x658;
    public const ulong m_steamID = 0x668;
    public const ulong m_iDesiredFOV = 0x670;
}

public static class CBasePlayerPawn {
    public const ulong m_pWeaponServices = 0xa70;
    public const ulong m_pItemServices = 0xa78;
    public const ulong m_pAutoaimServices = 0xa80;
    public const ulong m_pObserverServices = 0xa88;
    public const ulong m_pWaterServices = 0xa90;
    public const ulong m_pUseServices = 0xa98;
    public const ulong m_pFlashlightServices = 0xaa0;
    public const ulong m_pCameraServices = 0xaa8;
    public const ulong m_pMovementServices = 0xab0;
    public const ulong m_ServerViewAngleChanges = 0xac0;
    public const ulong m_nHighestGeneratedServerViewAngleChangeIndex = 0xb10;
    public const ulong v_angle = 0xb14;
    public const ulong v_anglePrevious = 0xb20;
    public const ulong m_iHideHUD = 0xb2c;
    public const ulong m_skybox3d = 0xb30;
    public const ulong m_fTimeLastHurt = 0xbc0;
    public const ulong m_flDeathTime = 0xbc4;
    public const ulong m_fNextSuicideTime = 0xbc8;
    public const ulong m_fInitHUD = 0xbcc;
    public const ulong m_pExpresser = 0xbd0;
    public const ulong m_hController = 0xbd8;
    public const ulong m_fHltvReplayDelay = 0xbe0;
    public const ulong m_fHltvReplayEnd = 0xbe4;
    public const ulong m_iHltvReplayEntity = 0xbe8;
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

public static class CBasePlayerWeapon {
    public const ulong m_iState = 0xcb8;
    public const ulong m_bRemoveable = 0xcbc;
    public const ulong m_nNextPrimaryAttackTick = 0xcc0;
    public const ulong m_flNextPrimaryAttackTickRatio = 0xcc4;
    public const ulong m_nNextSecondaryAttackTick = 0xcc8;
    public const ulong m_flNextSecondaryAttackTickRatio = 0xccc;
    public const ulong m_iClip1 = 0xcd0;
    public const ulong m_iClip2 = 0xcd4;
    public const ulong m_pReserveAmmo = 0xcd8;
    public const ulong m_OnPlayerUse = 0xce0;
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
    public const ulong m_bModelOverrodeBlockLOS = 0x930;
    public const ulong m_iShapeType = 0x934;
    public const ulong m_bConformToCollisionBounds = 0x938;
    public const ulong m_mPreferredCatchTransform = 0x93c;
}

public static class CBasePropDoor {
    public const ulong m_flAutoReturnDelay = 0xbb8;
    public const ulong m_hDoorList = 0xbc0;
    public const ulong m_nHardwareType = 0xbd8;
    public const ulong m_bNeedsHardware = 0xbdc;
    public const ulong m_eDoorState = 0xbe0;
    public const ulong m_bLocked = 0xbe4;
    public const ulong m_closedPosition = 0xbe8;
    public const ulong m_closedAngles = 0xbf4;
    public const ulong m_hBlocker = 0xc00;
    public const ulong m_bFirstBlocked = 0xc04;
    public const ulong m_ls = 0xc08;
    public const ulong m_bForceClosed = 0xc28;
    public const ulong m_vecLatchWorldPosition = 0xc2c;
    public const ulong m_hActivator = 0xc38;
    public const ulong m_sndParamAngularSpeed = 0xc44;
    public const ulong m_SoundMoving = 0xc48;
    public const ulong m_SoundOpen = 0xc50;
    public const ulong m_SoundClose = 0xc58;
    public const ulong m_SoundLock = 0xc60;
    public const ulong m_SoundUnlock = 0xc68;
    public const ulong m_SoundLatch = 0xc70;
    public const ulong m_SoundPound = 0xc78;
    public const ulong m_SoundJiggle = 0xc80;
    public const ulong m_SoundLockedAnim = 0xc88;
    public const ulong m_numCloseAttempts = 0xc90;
    public const ulong m_nPhysicsMaterial = 0xc94;
    public const ulong m_SlaveName = 0xc98;
    public const ulong m_hMaster = 0xca0;
    public const ulong m_OnBlockedClosing = 0xca8;
    public const ulong m_OnBlockedOpening = 0xcd0;
    public const ulong m_OnUnblockedClosing = 0xcf8;
    public const ulong m_OnUnblockedOpening = 0xd20;
    public const ulong m_OnFullyClosed = 0xd48;
    public const ulong m_OnFullyOpen = 0xd70;
    public const ulong m_OnClose = 0xd98;
    public const ulong m_OnOpen = 0xdc0;
    public const ulong m_OnLockedUse = 0xde8;
    public const ulong m_OnAjarOpen = 0xe10;
}

public static class CBaseToggle {
    public const ulong m_toggle_state = 0x700;
    public const ulong m_flMoveDistance = 0x704;
    public const ulong m_flWait = 0x708;
    public const ulong m_flLip = 0x70c;
    public const ulong m_bAlwaysFireBlockedOutputs = 0x710;
    public const ulong m_vecPosition1 = 0x714;
    public const ulong m_vecPosition2 = 0x720;
    public const ulong m_vecMoveAng = 0x72c;
    public const ulong m_vecAngle1 = 0x738;
    public const ulong m_vecAngle2 = 0x744;
    public const ulong m_flHeight = 0x750;
    public const ulong m_hActivator = 0x754;
    public const ulong m_vecFinalDest = 0x758;
    public const ulong m_vecFinalAngle = 0x764;
    public const ulong m_movementType = 0x770;
    public const ulong m_sMaster = 0x778;
}

public static class CBaseTrigger {
    public const ulong m_bDisabled = 0x780;
    public const ulong m_iFilterName = 0x788;
    public const ulong m_hFilter = 0x790;
    public const ulong m_OnStartTouch = 0x798;
    public const ulong m_OnStartTouchAll = 0x7c0;
    public const ulong m_OnEndTouch = 0x7e8;
    public const ulong m_OnEndTouchAll = 0x810;
    public const ulong m_OnTouching = 0x838;
    public const ulong m_OnNotTouching = 0x860;
    public const ulong m_hTouchingEntities = 0x888;
    public const ulong m_bClientSidePredicted = 0x8a0;
}

public static class CBaseViewModel {
    public const ulong m_vecLastFacing = 0x938;
    public const ulong m_nViewModelIndex = 0x944;
    public const ulong m_nAnimationParity = 0x948;
    public const ulong m_flAnimationStartTime = 0x94c;
    public const ulong m_hWeapon = 0x950;
    public const ulong m_sVMName = 0x958;
    public const ulong m_sAnimationPrefix = 0x960;
    public const ulong m_hOldLayerSequence = 0x968;
    public const ulong m_oldLayer = 0x96c;
    public const ulong m_oldLayerStartTime = 0x970;
    public const ulong m_hControlPanel = 0x974;
}

public static class CBeam {
    public const ulong m_flFrameRate = 0x700;
    public const ulong m_flHDRColorScale = 0x704;
    public const ulong m_flFireTime = 0x708;
    public const ulong m_flDamage = 0x70c;
    public const ulong m_nNumBeamEnts = 0x710;
    public const ulong m_hBaseMaterial = 0x718;
    public const ulong m_nHaloIndex = 0x720;
    public const ulong m_nBeamType = 0x728;
    public const ulong m_nBeamFlags = 0x72c;
    public const ulong m_hAttachEntity = 0x730;
    public const ulong m_nAttachIndex = 0x758;
    public const ulong m_fWidth = 0x764;
    public const ulong m_fEndWidth = 0x768;
    public const ulong m_fFadeLength = 0x76c;
    public const ulong m_fHaloScale = 0x770;
    public const ulong m_fAmplitude = 0x774;
    public const ulong m_fStartFrame = 0x778;
    public const ulong m_fSpeed = 0x77c;
    public const ulong m_flFrame = 0x780;
    public const ulong m_nClipStyle = 0x784;
    public const ulong m_bTurnedOff = 0x788;
    public const ulong m_vecEndPos = 0x78c;
    public const ulong m_hEndEntity = 0x798;
    public const ulong m_nDissolveType = 0x79c;
}

public static class CBlood {
    public const ulong m_vecSprayAngles = 0x4b0;
    public const ulong m_vecSprayDir = 0x4bc;
    public const ulong m_flAmount = 0x4c8;
    public const ulong m_Color = 0x4cc;
}

public static class CBodyComponent {
    public const ulong m_pSceneNode = 0x8;
    public const ulong __m_pChainEntity = 0x20;
}

public static class CBodyComponentBaseAnimGraph {
    public const ulong m_animationController = 0x470;
    public const ulong __m_pChainEntity = 0x6b0;
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
    public const ulong m_OnBombExplode = 0x8a8;
    public const ulong m_OnBombPlanted = 0x8d0;
    public const ulong m_OnBombDefused = 0x8f8;
    public const ulong m_bIsBombSiteB = 0x920;
    public const ulong m_bIsHeistBombTarget = 0x921;
    public const ulong m_bBombPlantedHere = 0x922;
    public const ulong m_szMountTarget = 0x928;
    public const ulong m_hInstructorHint = 0x930;
    public const ulong m_nBombSiteDesignation = 0x934;
}

public static class CBot {
    public const ulong m_pPlayer = 0x10;
    public const ulong m_bHasSpawned = 0x18;
    public const ulong m_id = 0x1c;
    public const ulong m_isRunning = 0x90;
    public const ulong m_isCrouching = 0x91;
    public const ulong m_forwardSpeed = 0x94;
    public const ulong m_leftSpeed = 0x98;
    public const ulong m_verticalSpeed = 0x9c;
    public const ulong m_buttonFlags = 0xa0;
    public const ulong m_jumpTimestamp = 0xa8;
    public const ulong m_viewForward = 0xac;
    public const ulong m_postureStackIndex = 0xc8;
}

public static class CBreachChargeProjectile {
    public const ulong m_bShouldExplode = 0xa68;
    public const ulong m_weaponThatThrewMe = 0xa6c;
    public const ulong m_nParentBoneIndex = 0xa70;
    public const ulong m_vecParentBonePos = 0xa74;
    public const ulong m_bDefused = 0xa80;
    public const ulong m_bUnstuckFromPlayer = 0xa81;
    public const ulong m_bResolvedParent = 0xa82;
    public const ulong m_vecLastKnownValidPos = 0xa84;
    public const ulong m_hDesiredParent = 0xa90;
}

public static class CBreakable {
    public const ulong m_Material = 0x710;
    public const ulong m_hBreaker = 0x714;
    public const ulong m_Explosion = 0x718;
    public const ulong m_iszSpawnObject = 0x720;
    public const ulong m_flPressureDelay = 0x728;
    public const ulong m_iMinHealthDmg = 0x72c;
    public const ulong m_iszPropData = 0x730;
    public const ulong m_impactEnergyScale = 0x738;
    public const ulong m_nOverrideBlockLOS = 0x73c;
    public const ulong m_OnBreak = 0x740;
    public const ulong m_OnHealthChanged = 0x768;
    public const ulong m_flDmgModBullet = 0x790;
    public const ulong m_flDmgModClub = 0x794;
    public const ulong m_flDmgModExplosive = 0x798;
    public const ulong m_flDmgModFire = 0x79c;
    public const ulong m_iszPhysicsDamageTableName = 0x7a0;
    public const ulong m_iszBasePropData = 0x7a8;
    public const ulong m_iInteractions = 0x7b0;
    public const ulong m_PerformanceMode = 0x7b4;
    public const ulong m_hPhysicsAttacker = 0x7b8;
    public const ulong m_flLastPhysicsInfluenceTime = 0x7bc;
}

public static class CBreakableProp {
    public const ulong m_OnBreak = 0x980;
    public const ulong m_OnHealthChanged = 0x9a8;
    public const ulong m_OnTakeDamage = 0x9d0;
    public const ulong m_impactEnergyScale = 0x9f8;
    public const ulong m_iMinHealthDmg = 0x9fc;
    public const ulong m_preferredCarryAngles = 0xa00;
    public const ulong m_flPressureDelay = 0xa0c;
    public const ulong m_hBreaker = 0xa10;
    public const ulong m_PerformanceMode = 0xa14;
    public const ulong m_flDmgModBullet = 0xa18;
    public const ulong m_flDmgModClub = 0xa1c;
    public const ulong m_flDmgModExplosive = 0xa20;
    public const ulong m_flDmgModFire = 0xa24;
    public const ulong m_iszPhysicsDamageTableName = 0xa28;
    public const ulong m_iszBasePropData = 0xa30;
    public const ulong m_iInteractions = 0xa38;
    public const ulong m_flPreventDamageBeforeTime = 0xa3c;
    public const ulong m_bHasBreakPiecesOrCommands = 0xa40;
    public const ulong m_explodeDamage = 0xa44;
    public const ulong m_explodeRadius = 0xa48;
    public const ulong m_explosionDelay = 0xa50;
    public const ulong m_explosionBuildupSound = 0xa58;
    public const ulong m_explosionCustomEffect = 0xa60;
    public const ulong m_explosionCustomSound = 0xa68;
    public const ulong m_explosionModifier = 0xa70;
    public const ulong m_hPhysicsAttacker = 0xa78;
    public const ulong m_flLastPhysicsInfluenceTime = 0xa7c;
    public const ulong m_bOriginalBlockLOS = 0xa80;
    public const ulong m_flDefaultFadeScale = 0xa84;
    public const ulong m_hLastAttacker = 0xa88;
    public const ulong m_hFlareEnt = 0xa8c;
    public const ulong m_bUsePuntSound = 0xa90;
    public const ulong m_iszPuntSound = 0xa98;
    public const ulong m_noGhostCollision = 0xaa0;
}

public static class CBreakableStageHelper {
    public const ulong m_nCurrentStage = 0x8;
    public const ulong m_nStageCount = 0xc;
}

public static class CBtActionAim {
    public const ulong m_szSensorInputKey = 0x68;
    public const ulong m_szAimReadyKey = 0x80;
    public const ulong m_flZoomCooldownTimestamp = 0x88;
    public const ulong m_bDoneAiming = 0x8c;
    public const ulong m_flLerpStartTime = 0x90;
    public const ulong m_flNextLookTargetLerpTime = 0x94;
    public const ulong m_flPenaltyReductionRatio = 0x98;
    public const ulong m_NextLookTarget = 0x9c;
    public const ulong m_AimTimer = 0xa8;
    public const ulong m_SniperHoldTimer = 0xc0;
    public const ulong m_FocusIntervalTimer = 0xd8;
    public const ulong m_bAcquired = 0xf0;
}

public static class CBtActionCombatPositioning {
    public const ulong m_szSensorInputKey = 0x68;
    public const ulong m_szIsAttackingKey = 0x80;
    public const ulong m_ActionTimer = 0x88;
    public const ulong m_bCrouching = 0xa0;
}

public static class CBtActionMoveTo {
    public const ulong m_szDestinationInputKey = 0x60;
    public const ulong m_szHidingSpotInputKey = 0x68;
    public const ulong m_szThreatInputKey = 0x70;
    public const ulong m_vecDestination = 0x78;
    public const ulong m_bAutoLookAdjust = 0x84;
    public const ulong m_bComputePath = 0x85;
    public const ulong m_flDamagingAreasPenaltyCost = 0x88;
    public const ulong m_CheckApproximateCornersTimer = 0x90;
    public const ulong m_CheckHighPriorityItem = 0xa8;
    public const ulong m_RepathTimer = 0xc0;
    public const ulong m_flArrivalEpsilon = 0xd8;
    public const ulong m_flAdditionalArrivalEpsilon2D = 0xdc;
    public const ulong m_flHidingSpotCheckDistanceThreshold = 0xe0;
    public const ulong m_flNearestAreaDistanceThreshold = 0xe4;
}

public static class CBtActionParachutePositioning {
    public const ulong m_ActionTimer = 0x58;
}

public static class CBtNodeCondition {
    public const ulong m_bNegated = 0x58;
}

public static class CBtNodeConditionInactive {
    public const ulong m_flRoundStartThresholdSeconds = 0x78;
    public const ulong m_flSensorInactivityThresholdSeconds = 0x7c;
    public const ulong m_SensorInactivityTimer = 0x80;
}

public static class CBubbling {
    public const ulong m_density = 0x700;
    public const ulong m_frequency = 0x704;
    public const ulong m_state = 0x708;
}

public static class CBumpMineProjectile {
    public const ulong m_bShouldExplode = 0xa68;
    public const ulong m_nParentBoneIndex = 0xa6c;
    public const ulong m_vecParentBonePos = 0xa70;
    public const ulong m_bArmed = 0xa7c;
    public const ulong m_bDefused = 0xa7d;
    public const ulong m_bUnstuckFromPlayer = 0xa7e;
    public const ulong m_vecTargetedObjects = 0xa80;
    public const ulong m_bResolvedParent = 0xac0;
    public const ulong m_vecLastKnownValidPos = 0xac4;
    public const ulong m_hDesiredParent = 0xad0;
    public const ulong m_bBeingUsed = 0xad4;
}

public static class CBuoyancyHelper {
    public const ulong m_flFluidDensity = 0x18;
    public const ulong m_flDisplacementFromObjects = 0x1c;
}

public static class CBuyZone {
    public const ulong m_LegacyTeamNum = 0x8a8;
}

public static class CC4 {
    public const ulong m_vecLastValidPlayerHeldPosition = 0xe80;
    public const ulong m_vecLastValidDroppedPosition = 0xe8c;
    public const ulong m_bDoValidDroppedPositionCheck = 0xe98;
    public const ulong m_bStartedArming = 0xe99;
    public const ulong m_fArmedTime = 0xe9c;
    public const ulong m_bBombPlacedAnimation = 0xea0;
    public const ulong m_bShowC4LED = 0xea1;
    public const ulong m_bIsPlantingViaUse = 0xea2;
    public const ulong m_entitySpottedState = 0xea8;
    public const ulong m_nSpotRules = 0xec0;
    public const ulong m_bPlayedArmingBeeps = 0xec4;
    public const ulong m_bBombPlanted = 0xecb;
    public const ulong m_bDroppedFromDeath = 0xecc;
}

public static class CCSBot {
    public const ulong m_lastCoopSpawnPoint = 0xd0;
    public const ulong m_eyePosition = 0xe0;
    public const ulong m_name = 0xec;
    public const ulong m_combatRange = 0x12c;
    public const ulong m_isRogue = 0x130;
    public const ulong m_rogueTimer = 0x138;
    public const ulong m_diedLastRound = 0x154;
    public const ulong m_safeTime = 0x158;
    public const ulong m_wasSafe = 0x15c;
    public const ulong m_blindFire = 0x164;
    public const ulong m_surpriseTimer = 0x168;
    public const ulong m_bAllowActive = 0x180;
    public const ulong m_isFollowing = 0x181;
    public const ulong m_leader = 0x184;
    public const ulong m_followTimestamp = 0x188;
    public const ulong m_allowAutoFollowTime = 0x18c;
    public const ulong m_hurryTimer = 0x190;
    public const ulong m_alertTimer = 0x1a8;
    public const ulong m_sneakTimer = 0x1c0;
    public const ulong m_panicTimer = 0x1d8;
    public const ulong m_stateTimestamp = 0x4d8;
    public const ulong m_isAttacking = 0x4dc;
    public const ulong m_isOpeningDoor = 0x4dd;
    public const ulong m_taskEntity = 0x4e4;
    public const ulong m_goalPosition = 0x4f4;
    public const ulong m_goalEntity = 0x500;
    public const ulong m_avoid = 0x504;
    public const ulong m_avoidTimestamp = 0x508;
    public const ulong m_isStopping = 0x50c;
    public const ulong m_hasVisitedEnemySpawn = 0x50d;
    public const ulong m_stillTimer = 0x510;
    public const ulong m_bEyeAnglesUnderPathFinderControl = 0x520;
    public const ulong m_pathIndex = 0x6618;
    public const ulong m_areaEnteredTimestamp = 0x661c;
    public const ulong m_repathTimer = 0x6620;
    public const ulong m_avoidFriendTimer = 0x6638;
    public const ulong m_isFriendInTheWay = 0x6650;
    public const ulong m_politeTimer = 0x6658;
    public const ulong m_isWaitingBehindFriend = 0x6670;
    public const ulong m_pathLadderEnd = 0x669c;
    public const ulong m_mustRunTimer = 0x66e8;
    public const ulong m_waitTimer = 0x6700;
    public const ulong m_updateTravelDistanceTimer = 0x6718;
    public const ulong m_playerTravelDistance = 0x6730;
    public const ulong m_travelDistancePhase = 0x6830;
    public const ulong m_hostageEscortCount = 0x69c8;
    public const ulong m_hostageEscortCountTimestamp = 0x69cc;
    public const ulong m_desiredTeam = 0x69d0;
    public const ulong m_hasJoined = 0x69d4;
    public const ulong m_isWaitingForHostage = 0x69d5;
    public const ulong m_inhibitWaitingForHostageTimer = 0x69d8;
    public const ulong m_waitForHostageTimer = 0x69f0;
    public const ulong m_noisePosition = 0x6a08;
    public const ulong m_noiseTravelDistance = 0x6a14;
    public const ulong m_noiseTimestamp = 0x6a18;
    public const ulong m_noiseSource = 0x6a20;
    public const ulong m_noiseBendTimer = 0x6a38;
    public const ulong m_bentNoisePosition = 0x6a50;
    public const ulong m_bendNoisePositionValid = 0x6a5c;
    public const ulong m_lookAroundStateTimestamp = 0x6a60;
    public const ulong m_lookAheadAngle = 0x6a64;
    public const ulong m_forwardAngle = 0x6a68;
    public const ulong m_inhibitLookAroundTimestamp = 0x6a6c;
    public const ulong m_lookAtSpot = 0x6a74;
    public const ulong m_lookAtSpotDuration = 0x6a84;
    public const ulong m_lookAtSpotTimestamp = 0x6a88;
    public const ulong m_lookAtSpotAngleTolerance = 0x6a8c;
    public const ulong m_lookAtSpotClearIfClose = 0x6a90;
    public const ulong m_lookAtSpotAttack = 0x6a91;
    public const ulong m_lookAtDesc = 0x6a98;
    public const ulong m_peripheralTimestamp = 0x6aa0;
    public const ulong m_approachPointCount = 0x6c28;
    public const ulong m_approachPointViewPosition = 0x6c2c;
    public const ulong m_viewSteadyTimer = 0x6c38;
    public const ulong m_tossGrenadeTimer = 0x6c50;
    public const ulong m_isAvoidingGrenade = 0x6c70;
    public const ulong m_spotCheckTimestamp = 0x6c90;
    public const ulong m_checkedHidingSpotCount = 0x7098;
    public const ulong m_lookPitch = 0x709c;
    public const ulong m_lookPitchVel = 0x70a0;
    public const ulong m_lookYaw = 0x70a4;
    public const ulong m_lookYawVel = 0x70a8;
    public const ulong m_targetSpot = 0x70ac;
    public const ulong m_targetSpotVelocity = 0x70b8;
    public const ulong m_targetSpotPredicted = 0x70c4;
    public const ulong m_aimError = 0x70d0;
    public const ulong m_aimGoal = 0x70dc;
    public const ulong m_targetSpotTime = 0x70e8;
    public const ulong m_aimFocus = 0x70ec;
    public const ulong m_aimFocusInterval = 0x70f0;
    public const ulong m_aimFocusNextUpdate = 0x70f4;
    public const ulong m_ignoreEnemiesTimer = 0x7100;
    public const ulong m_enemy = 0x7118;
    public const ulong m_isEnemyVisible = 0x711c;
    public const ulong m_visibleEnemyParts = 0x711d;
    public const ulong m_lastEnemyPosition = 0x7120;
    public const ulong m_lastSawEnemyTimestamp = 0x712c;
    public const ulong m_firstSawEnemyTimestamp = 0x7130;
    public const ulong m_currentEnemyAcquireTimestamp = 0x7134;
    public const ulong m_enemyDeathTimestamp = 0x7138;
    public const ulong m_friendDeathTimestamp = 0x713c;
    public const ulong m_isLastEnemyDead = 0x7140;
    public const ulong m_nearbyEnemyCount = 0x7144;
    public const ulong m_bomber = 0x7350;
    public const ulong m_nearbyFriendCount = 0x7354;
    public const ulong m_closestVisibleFriend = 0x7358;
    public const ulong m_closestVisibleHumanFriend = 0x735c;
    public const ulong m_attentionInterval = 0x7360;
    public const ulong m_attacker = 0x7370;
    public const ulong m_attackedTimestamp = 0x7374;
    public const ulong m_burnedByFlamesTimer = 0x7378;
    public const ulong m_lastVictimID = 0x7388;
    public const ulong m_isAimingAtEnemy = 0x738c;
    public const ulong m_isRapidFiring = 0x738d;
    public const ulong m_equipTimer = 0x7390;
    public const ulong m_zoomTimer = 0x73a0;
    public const ulong m_fireWeaponTimestamp = 0x73b8;
    public const ulong m_lookForWeaponsOnGroundTimer = 0x73c0;
    public const ulong m_bIsSleeping = 0x73d8;
    public const ulong m_isEnemySniperVisible = 0x73d9;
    public const ulong m_sawEnemySniperTimer = 0x73e0;
    public const ulong m_enemyQueueIndex = 0x7498;
    public const ulong m_enemyQueueCount = 0x7499;
    public const ulong m_enemyQueueAttendIndex = 0x749a;
    public const ulong m_isStuck = 0x749b;
    public const ulong m_stuckTimestamp = 0x749c;
    public const ulong m_stuckSpot = 0x74a0;
    public const ulong m_wiggleTimer = 0x74b0;
    public const ulong m_stuckJumpTimer = 0x74c8;
    public const ulong m_nextCleanupCheckTimestamp = 0x74e0;
    public const ulong m_avgVel = 0x74e4;
    public const ulong m_avgVelIndex = 0x750c;
    public const ulong m_avgVelCount = 0x7510;
    public const ulong m_lastOrigin = 0x7514;
    public const ulong m_lastRadioRecievedTimestamp = 0x7524;
    public const ulong m_lastRadioSentTimestamp = 0x7528;
    public const ulong m_radioSubject = 0x752c;
    public const ulong m_radioPosition = 0x7530;
    public const ulong m_voiceEndTimestamp = 0x753c;
    public const ulong m_lastValidReactionQueueFrame = 0x7548;
}

public static class CCSEnvGunfire {
    public const ulong m_iMinBurstSize = 0x4b0;
    public const ulong m_iMaxBurstSize = 0x4b4;
    public const ulong m_flMinBurstDelay = 0x4b8;
    public const ulong m_flMaxBurstDelay = 0x4bc;
    public const ulong m_flRateOfFire = 0x4c0;
    public const ulong m_iszShootSound = 0x4c8;
    public const ulong m_iszTracerType = 0x4d0;
    public const ulong m_iszWeaponName = 0x4d8;
    public const ulong m_bDisabled = 0x4e0;
    public const ulong m_iShotsRemaining = 0x4e4;
    public const ulong m_iSpread = 0x4e8;
    public const ulong m_vecSpread = 0x4ec;
    public const ulong m_vecTargetPosition = 0x4f4;
    public const ulong m_flTargetDist = 0x500;
    public const ulong m_flBias = 0x504;
    public const ulong m_bCollide = 0x508;
    public const ulong m_hTarget = 0x50c;
    public const ulong m_bAllowNullTarget = 0x510;
    public const ulong m_bAlwaysWallbangTracer = 0x511;
    public const ulong m_flDamageScaleValue = 0x514;
    public const ulong m_flAdditionalSpread = 0x518;
}

public static class CCSGOViewModel {
    public const ulong m_bShouldIgnoreOffsetAndAccuracy = 0x978;
    public const ulong m_nWeaponParity = 0x97c;
    public const ulong m_nOldWeaponParity = 0x980;
}

public static class CCSGO_TeamPreviewCharacterPosition {
    public const ulong m_nVariant = 0x4b0;
    public const ulong m_nRandom = 0x4b4;
    public const ulong m_nOrdinal = 0x4b8;
    public const ulong m_sWeaponName = 0x4c0;
    public const ulong m_xuid = 0x4c8;
    public const ulong m_weaponItem = 0x4d0;
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

public static class CCSGameRules {
    public const ulong __m_pChainEntity = 0x98;
    public const ulong m_coopMissionManager = 0xc0;
    public const ulong m_bFreezePeriod = 0xc4;
    public const ulong m_bWarmupPeriod = 0xc5;
    public const ulong m_fWarmupPeriodEnd = 0xc8;
    public const ulong m_fWarmupPeriodStart = 0xcc;
    public const ulong m_nTotalPausedTicks = 0xd0;
    public const ulong m_nPauseStartTick = 0xd4;
    public const ulong m_bServerPaused = 0xd8;
    public const ulong m_bGamePaused = 0xd9;
    public const ulong m_bTerroristTimeOutActive = 0xda;
    public const ulong m_bCTTimeOutActive = 0xdb;
    public const ulong m_flTerroristTimeOutRemaining = 0xdc;
    public const ulong m_flCTTimeOutRemaining = 0xe0;
    public const ulong m_nTerroristTimeOuts = 0xe4;
    public const ulong m_nCTTimeOuts = 0xe8;
    public const ulong m_bTechnicalTimeOut = 0xec;
    public const ulong m_bMatchWaitingForResume = 0xed;
    public const ulong m_iRoundTime = 0xf0;
    public const ulong m_fMatchStartTime = 0xf4;
    public const ulong m_fRoundStartTime = 0xf8;
    public const ulong m_flRestartRoundTime = 0xfc;
    public const ulong m_bGameRestart = 0x100;
    public const ulong m_flGameStartTime = 0x104;
    public const ulong m_timeUntilNextPhaseStarts = 0x108;
    public const ulong m_gamePhase = 0x10c;
    public const ulong m_totalRoundsPlayed = 0x110;
    public const ulong m_nRoundsPlayedThisPhase = 0x114;
    public const ulong m_nOvertimePlaying = 0x118;
    public const ulong m_iHostagesRemaining = 0x11c;
    public const ulong m_bAnyHostageReached = 0x120;
    public const ulong m_bMapHasBombTarget = 0x121;
    public const ulong m_bMapHasRescueZone = 0x122;
    public const ulong m_bMapHasBuyZone = 0x123;
    public const ulong m_bIsQueuedMatchmaking = 0x124;
    public const ulong m_nQueuedMatchmakingMode = 0x128;
    public const ulong m_bIsValveDS = 0x12c;
    public const ulong m_bLogoMap = 0x12d;
    public const ulong m_bPlayAllStepSoundsOnServer = 0x12e;
    public const ulong m_iNumGunGameProgressiveWeaponsCT = 0x130;
    public const ulong m_iNumGunGameProgressiveWeaponsT = 0x134;
    public const ulong m_iSpectatorSlotCount = 0x138;
    public const ulong m_GGProgressiveWeaponOrderCT = 0x13c;
    public const ulong m_GGProgressiveWeaponOrderT = 0x22c;
    public const ulong m_GGProgressiveWeaponKillUpgradeOrderCT = 0x31c;
    public const ulong m_GGProgressiveWeaponKillUpgradeOrderT = 0x40c;
    public const ulong m_MatchDevice = 0x4fc;
    public const ulong m_bHasMatchStarted = 0x500;
    public const ulong m_nNextMapInMapgroup = 0x504;
    public const ulong m_szTournamentEventName = 0x508;
    public const ulong m_szTournamentEventStage = 0x708;
    public const ulong m_szMatchStatTxt = 0x908;
    public const ulong m_szTournamentPredictionsTxt = 0xb08;
    public const ulong m_nTournamentPredictionsPct = 0xd08;
    public const ulong m_flCMMItemDropRevealStartTime = 0xd0c;
    public const ulong m_flCMMItemDropRevealEndTime = 0xd10;
    public const ulong m_bIsDroppingItems = 0xd14;
    public const ulong m_bIsQuestEligible = 0xd15;
    public const ulong m_nGuardianModeWaveNumber = 0xd18;
    public const ulong m_nGuardianModeSpecialKillsRemaining = 0xd1c;
    public const ulong m_nGuardianModeSpecialWeaponNeeded = 0xd20;
    public const ulong m_nGuardianGrenadesToGiveBots = 0xd24;
    public const ulong m_nNumHeaviesToSpawn = 0xd28;
    public const ulong m_numGlobalGiftsGiven = 0xd2c;
    public const ulong m_numGlobalGifters = 0xd30;
    public const ulong m_numGlobalGiftsPeriodSeconds = 0xd34;
    public const ulong m_arrFeaturedGiftersAccounts = 0xd38;
    public const ulong m_arrFeaturedGiftersGifts = 0xd48;
    public const ulong m_arrProhibitedItemIndices = 0xd58;
    public const ulong m_arrTournamentActiveCasterAccounts = 0xe20;
    public const ulong m_numBestOfMaps = 0xe30;
    public const ulong m_nHalloweenMaskListSeed = 0xe34;
    public const ulong m_bBombDropped = 0xe38;
    public const ulong m_bBombPlanted = 0xe39;
    public const ulong m_iRoundWinStatus = 0xe3c;
    public const ulong m_eRoundWinReason = 0xe40;
    public const ulong m_bTCantBuy = 0xe44;
    public const ulong m_bCTCantBuy = 0xe45;
    public const ulong m_flGuardianBuyUntilTime = 0xe48;
    public const ulong m_iMatchStats_RoundResults = 0xe4c;
    public const ulong m_iMatchStats_PlayersAlive_CT = 0xec4;
    public const ulong m_iMatchStats_PlayersAlive_T = 0xf3c;
    public const ulong m_TeamRespawnWaveTimes = 0xfb4;
    public const ulong m_flNextRespawnWave = 0x1034;
    public const ulong m_nServerQuestID = 0x10b4;
    public const ulong m_vMinimapMins = 0x10b8;
    public const ulong m_vMinimapMaxs = 0x10c4;
    public const ulong m_MinimapVerticalSectionHeights = 0x10d0;
    public const ulong m_bDontIncrementCoopWave = 0x10f0;
    public const ulong m_bSpawnedTerrorHuntHeavy = 0x10f1;
    public const ulong m_nEndMatchMapGroupVoteTypes = 0x10f4;
    public const ulong m_nEndMatchMapGroupVoteOptions = 0x111c;
    public const ulong m_nEndMatchMapVoteWinner = 0x1144;
    public const ulong m_iNumConsecutiveCTLoses = 0x1148;
    public const ulong m_iNumConsecutiveTerroristLoses = 0x114c;
    public const ulong m_bHasHostageBeenTouched = 0x1168;
    public const ulong m_flIntermissionStartTime = 0x116c;
    public const ulong m_flIntermissionEndTime = 0x1170;
    public const ulong m_bLevelInitialized = 0x1174;
    public const ulong m_iTotalRoundsPlayed = 0x1178;
    public const ulong m_iUnBalancedRounds = 0x117c;
    public const ulong m_endMatchOnRoundReset = 0x1180;
    public const ulong m_endMatchOnThink = 0x1181;
    public const ulong m_iFreezeTime = 0x1184;
    public const ulong m_iNumTerrorist = 0x1188;
    public const ulong m_iNumCT = 0x118c;
    public const ulong m_iNumSpawnableTerrorist = 0x1190;
    public const ulong m_iNumSpawnableCT = 0x1194;
    public const ulong m_arrSelectedHostageSpawnIndices = 0x1198;
    public const ulong m_bFirstConnected = 0x11b0;
    public const ulong m_bCompleteReset = 0x11b1;
    public const ulong m_bPickNewTeamsOnReset = 0x11b2;
    public const ulong m_bScrambleTeamsOnRestart = 0x11b3;
    public const ulong m_bSwapTeamsOnRestart = 0x11b4;
    public const ulong m_nEndMatchTiedVotes = 0x11c0;
    public const ulong m_bNeedToAskPlayersForContinueVote = 0x11dc;
    public const ulong m_numQueuedMatchmakingAccounts = 0x11e0;
    public const ulong m_pQueuedMatchmakingReservationString = 0x11e8;
    public const ulong m_numTotalTournamentDrops = 0x11f0;
    public const ulong m_numSpectatorsCountMax = 0x11f4;
    public const ulong m_numSpectatorsCountMaxTV = 0x11f8;
    public const ulong m_numSpectatorsCountMaxLnk = 0x11fc;
    public const ulong m_bForceTeamChangeSilent = 0x1208;
    public const ulong m_bLoadingRoundBackupData = 0x1209;
    public const ulong m_nMatchInfoShowType = 0x1240;
    public const ulong m_flMatchInfoDecidedTime = 0x1244;
    public const ulong m_flCoopRespawnAndHealTime = 0x1260;
    public const ulong m_coopBonusCoinsFound = 0x1264;
    public const ulong m_coopBonusPistolsOnly = 0x1268;
    public const ulong m_coopPlayersInDeploymentZone = 0x1269;
    public const ulong m_coopMissionDeadPlayerRespawnEnabled = 0x126a;
    public const ulong mTeamDMLastWinningTeamNumber = 0x126c;
    public const ulong mTeamDMLastThinkTime = 0x1270;
    public const ulong m_flTeamDMLastAnnouncementTime = 0x1274;
    public const ulong m_iAccountTerrorist = 0x1278;
    public const ulong m_iAccountCT = 0x127c;
    public const ulong m_iSpawnPointCount_Terrorist = 0x1280;
    public const ulong m_iSpawnPointCount_CT = 0x1284;
    public const ulong m_iMaxNumTerrorists = 0x1288;
    public const ulong m_iMaxNumCTs = 0x128c;
    public const ulong m_iLoserBonus = 0x1290;
    public const ulong m_iLoserBonusMostRecentTeam = 0x1294;
    public const ulong m_tmNextPeriodicThink = 0x1298;
    public const ulong m_bVoiceWonMatchBragFired = 0x129c;
    public const ulong m_fWarmupNextChatNoticeTime = 0x12a0;
    public const ulong m_iHostagesRescued = 0x12a8;
    public const ulong m_iHostagesTouched = 0x12ac;
    public const ulong m_flNextHostageAnnouncement = 0x12b0;
    public const ulong m_bNoTerroristsKilled = 0x12b4;
    public const ulong m_bNoCTsKilled = 0x12b5;
    public const ulong m_bNoEnemiesKilled = 0x12b6;
    public const ulong m_bCanDonateWeapons = 0x12b7;
    public const ulong m_firstKillTime = 0x12bc;
    public const ulong m_firstBloodTime = 0x12c4;
    public const ulong m_hostageWasInjured = 0x12e0;
    public const ulong m_hostageWasKilled = 0x12e1;
    public const ulong m_bVoteCalled = 0x12f0;
    public const ulong m_bServerVoteOnReset = 0x12f1;
    public const ulong m_flVoteCheckThrottle = 0x12f4;
    public const ulong m_bBuyTimeEnded = 0x12f8;
    public const ulong m_nLastFreezeEndBeep = 0x12fc;
    public const ulong m_bTargetBombed = 0x1300;
    public const ulong m_bBombDefused = 0x1301;
    public const ulong m_bMapHasBombZone = 0x1302;
    public const ulong m_bGunGameRespawnWithBomb = 0x1303;
    public const ulong m_fGunGameBombRespawnTimer = 0x1304;
    public const ulong m_vecMainCTSpawnPos = 0x1324;
    public const ulong m_CTSpawnPointsMasterList = 0x1330;
    public const ulong m_TerroristSpawnPointsMasterList = 0x1348;
    public const ulong m_iNextCTSpawnPoint = 0x1360;
    public const ulong m_iNextTerroristSpawnPoint = 0x1364;
    public const ulong m_CTSpawnPoints = 0x1368;
    public const ulong m_TerroristSpawnPoints = 0x1380;
    public const ulong m_bIsUnreservedGameServer = 0x1398;
    public const ulong m_fAutobalanceDisplayTime = 0x139c;
    public const ulong m_bAllowWeaponSwitch = 0x1608;
    public const ulong m_bRoundTimeWarningTriggered = 0x1609;
    public const ulong m_phaseChangeAnnouncementTime = 0x160c;
    public const ulong m_fNextUpdateTeamClanNamesTime = 0x1610;
    public const ulong m_flLastThinkTime = 0x1614;
    public const ulong m_fAccumulatedRoundOffDamage = 0x1618;
    public const ulong m_nShorthandedBonusLastEvalRound = 0x161c;
    public const ulong m_bMatchAbortedDueToPlayerBan = 0x1898;
    public const ulong m_bHasTriggeredRoundStartMusic = 0x1899;
    public const ulong m_bHasTriggeredCoopSpawnReset = 0x189a;
    public const ulong m_bSwitchingTeamsAtRoundReset = 0x189b;
    public const ulong m_iMaxGunGameProgressiveWeaponIndex = 0x189c;
    public const ulong m_pGameModeRules = 0x18b8;
    public const ulong m_SurvivalRules = 0x18c0;
    public const ulong m_BtGlobalBlackboard = 0x3558;
    public const ulong m_hPlayerResource = 0x35c0;
    public const ulong m_RetakeRules = 0x35c8;
    public const ulong m_GuardianBotSkillLevelMax = 0x37ac;
    public const ulong m_GuardianBotSkillLevelMin = 0x37b0;
    public const ulong m_arrTeamUniqueKillWeaponsMatch = 0x37b8;
    public const ulong m_bTeamLastKillUsedUniqueWeaponMatch = 0x3818;
    public const ulong m_nMatchEndCount = 0x3840;
    public const ulong m_nTTeamIntroVariant = 0x3844;
    public const ulong m_nCTTeamIntroVariant = 0x3848;
    public const ulong m_bTeamIntroPeriod = 0x384c;
    public const ulong m_fTeamIntroPeriodEnd = 0x3850;
    public const ulong m_bPlayedTeamIntroVO = 0x3854;
}

public static class CCSGameRulesProxy {
    public const ulong m_pGameRules = 0x4b0;
}

public static class CCSPlace {
    public const ulong m_name = 0x708;
}

public static class CCSPlayerController {
    public const ulong m_pInGameMoneyServices = 0x6a0;
    public const ulong m_pInventoryServices = 0x6a8;
    public const ulong m_pActionTrackingServices = 0x6b0;
    public const ulong m_pDamageServices = 0x6b8;
    public const ulong m_iPing = 0x6c0;
    public const ulong m_bHasCommunicationAbuseMute = 0x6c4;
    public const ulong m_szCrosshairCodes = 0x6c8;
    public const ulong m_iPendingTeamNum = 0x6d0;
    public const ulong m_flForceTeamTime = 0x6d4;
    public const ulong m_iCompTeammateColor = 0x6d8;
    public const ulong m_bEverPlayedOnTeam = 0x6dc;
    public const ulong m_bAttemptedToGetColor = 0x6dd;
    public const ulong m_iTeammatePreferredColor = 0x6e0;
    public const ulong m_bTeamChanged = 0x6e4;
    public const ulong m_bInSwitchTeam = 0x6e5;
    public const ulong m_bHasSeenJoinGame = 0x6e6;
    public const ulong m_bJustBecameSpectator = 0x6e7;
    public const ulong m_bSwitchTeamsOnNextRoundReset = 0x6e8;
    public const ulong m_bRemoveAllItemsOnNextRoundReset = 0x6e9;
    public const ulong m_szClan = 0x6f0;
    public const ulong m_szClanName = 0x6f8;
    public const ulong m_iCoachingTeam = 0x718;
    public const ulong m_nPlayerDominated = 0x720;
    public const ulong m_nPlayerDominatingMe = 0x728;
    public const ulong m_iCompetitiveRanking = 0x730;
    public const ulong m_iCompetitiveWins = 0x734;
    public const ulong m_iCompetitiveRankType = 0x738;
    public const ulong m_iCompetitiveRankingPredicted_Win = 0x73c;
    public const ulong m_iCompetitiveRankingPredicted_Loss = 0x740;
    public const ulong m_iCompetitiveRankingPredicted_Tie = 0x744;
    public const ulong m_nEndMatchNextMapVote = 0x748;
    public const ulong m_unActiveQuestId = 0x74c;
    public const ulong m_nQuestProgressReason = 0x750;
    public const ulong m_unPlayerTvControlFlags = 0x754;
    public const ulong m_iDraftIndex = 0x7c0;
    public const ulong m_msQueuedModeDisconnectionTimestamp = 0x7c4;
    public const ulong m_uiAbandonRecordedReason = 0x7c8;
    public const ulong m_bEverFullyConnected = 0x7cc;
    public const ulong m_bAbandonAllowsSurrender = 0x7cd;
    public const ulong m_bAbandonOffersInstantSurrender = 0x7ce;
    public const ulong m_bDisconnection1MinWarningPrinted = 0x7cf;
    public const ulong m_bScoreReported = 0x7d0;
    public const ulong m_nDisconnectionTick = 0x7d4;
    public const ulong m_bControllingBot = 0x7e0;
    public const ulong m_bHasControlledBotThisRound = 0x7e1;
    public const ulong m_bHasBeenControlledByPlayerThisRound = 0x7e2;
    public const ulong m_nBotsControlledThisRound = 0x7e4;
    public const ulong m_bCanControlObservedBot = 0x7e8;
    public const ulong m_hPlayerPawn = 0x7ec;
    public const ulong m_hObserverPawn = 0x7f0;
    public const ulong m_DesiredObserverMode = 0x7f4;
    public const ulong m_hDesiredObserverTarget = 0x7f8;
    public const ulong m_bPawnIsAlive = 0x7fc;
    public const ulong m_iPawnHealth = 0x800;
    public const ulong m_iPawnArmor = 0x804;
    public const ulong m_bPawnHasDefuser = 0x808;
    public const ulong m_bPawnHasHelmet = 0x809;
    public const ulong m_nPawnCharacterDefIndex = 0x80a;
    public const ulong m_iPawnLifetimeStart = 0x80c;
    public const ulong m_iPawnLifetimeEnd = 0x810;
    public const ulong m_iPawnGunGameLevel = 0x814;
    public const ulong m_iPawnBotDifficulty = 0x818;
    public const ulong m_hOriginalControllerOfCurrentPawn = 0x81c;
    public const ulong m_iScore = 0x820;
    public const ulong m_iRoundScore = 0x824;
    public const ulong m_vecKills = 0x828;
    public const ulong m_iMVPs = 0x840;
    public const ulong m_nUpdateCounter = 0x844;
    public const ulong m_lastHeldVoteTimer = 0xf8e8;
    public const ulong m_bShowHints = 0xf900;
    public const ulong m_iNextTimeCheck = 0xf904;
}

public static class CCSPlayerController_ActionTrackingServices {
    public const ulong m_perRoundStats = 0x40;
    public const ulong m_matchStats = 0x90;
    public const ulong m_iNumRoundKills = 0x148;
    public const ulong m_iNumRoundKillsHeadshots = 0x14c;
}

public static class CCSPlayerController_DamageServices {
    public const ulong m_nSendUpdate = 0x40;
    public const ulong m_DamageList = 0x48;
}

public static class CCSPlayerController_InGameMoneyServices {
    public const ulong m_bReceivesMoneyNextRound = 0x40;
    public const ulong m_iAccountMoneyEarnedForNextRound = 0x44;
    public const ulong m_iAccount = 0x48;
    public const ulong m_iStartAccount = 0x4c;
    public const ulong m_iTotalCashSpent = 0x50;
    public const ulong m_iCashSpentThisRound = 0x54;
}

public static class CCSPlayerController_InventoryServices {
    public const ulong m_unMusicID = 0x40;
    public const ulong m_rank = 0x44;
    public const ulong m_nPersonaDataPublicLevel = 0x5c;
    public const ulong m_nPersonaDataPublicCommendsLeader = 0x60;
    public const ulong m_nPersonaDataPublicCommendsTeacher = 0x64;
    public const ulong m_nPersonaDataPublicCommendsFriendly = 0x68;
    public const ulong m_unEquippedPlayerSprayIDs = 0xf48;
    public const ulong m_vecTerroristLoadoutCache = 0xf50;
    public const ulong m_vecCounterTerroristLoadoutCache = 0xfa0;
}

public static class CCSPlayerPawn {
    public const ulong m_pParachuteServices = 0x16d0;
    public const ulong m_pBulletServices = 0x16d8;
    public const ulong m_pHostageServices = 0x16e0;
    public const ulong m_pBuyServices = 0x16e8;
    public const ulong m_pPingServices = 0x16f0;
    public const ulong m_pRadioServices = 0x16f8;
    public const ulong m_pDamageReactServices = 0x1700;
    public const ulong m_iRetakesOffering = 0x17d0;
    public const ulong m_iRetakesOfferingCard = 0x17d4;
    public const ulong m_bRetakesHasDefuseKit = 0x17d8;
    public const ulong m_bRetakesMVPLastRound = 0x17d9;
    public const ulong m_iRetakesMVPBoostItem = 0x17dc;
    public const ulong m_RetakesMVPBoostExtraUtility = 0x17e0;
    public const ulong m_bIsBuyMenuOpen = 0x17e4;
    public const ulong m_xLastHeadBoneTransform = 0x1d30;
    public const ulong m_bLastHeadBoneTransformIsValid = 0x1d50;
    public const ulong m_iPlayerLocked = 0x1d54;
    public const ulong m_flNextSprayDecalTime = 0x1d5c;
    public const ulong m_nRagdollDamageBone = 0x1d64;
    public const ulong m_vRagdollDamageForce = 0x1d68;
    public const ulong m_vRagdollDamagePosition = 0x1d74;
    public const ulong m_szRagdollDamageWeaponName = 0x1d80;
    public const ulong m_bRagdollDamageHeadshot = 0x1dc0;
    public const ulong m_EconGloves = 0x1dc8;
    public const ulong m_qDeathEyeAngles = 0x2040;
    public const ulong m_bSkipOneHeadConstraintUpdate = 0x204c;
}

public static class CCSPlayerPawnBase {
    public const ulong m_CTouchExpansionComponent = 0xc00;
    public const ulong m_pActionTrackingServices = 0xc50;
    public const ulong m_pViewModelServices = 0xc58;
    public const ulong m_iDisplayHistoryBits = 0xc60;
    public const ulong m_flLastAttackedTeammate = 0xc64;
    public const ulong m_hOriginalController = 0xc68;
    public const ulong m_blindUntilTime = 0xc6c;
    public const ulong m_blindStartTime = 0xc70;
    public const ulong m_allowAutoFollowTime = 0xc74;
    public const ulong m_bHasFemaleVoice = 0xc78;
    public const ulong m_entitySpottedState = 0xc80;
    public const ulong m_nSpotRules = 0xc98;
    public const ulong m_flTimeOfLastInjury = 0xc9c;
    public const ulong m_nRelativeDirectionOfLastInjury = 0xca0;
    public const ulong m_iPlayerState = 0xca4;
    public const ulong m_chickenIdleSoundTimer = 0xcb0;
    public const ulong m_chickenJumpSoundTimer = 0xcc8;
    public const ulong m_vecLastBookmarkedPosition = 0xd80;
    public const ulong m_flLastDistanceTraveledNotice = 0xd8c;
    public const ulong m_flAccumulatedDistanceTraveled = 0xd90;
    public const ulong m_flLastFriendlyFireDamageReductionRatio = 0xd94;
    public const ulong m_bRespawning = 0xd98;
    public const ulong m_iNumGunGameTRBombTotalPoints = 0xd9c;
    public const ulong m_bShouldProgressGunGameTRBombModeWeapon = 0xda0;
    public const ulong m_nLastPickupPriority = 0xda4;
    public const ulong m_flLastPickupPriorityTime = 0xda8;
    public const ulong m_passiveItems = 0xdac;
    public const ulong m_bIsScoped = 0xdb0;
    public const ulong m_bIsWalking = 0xdb1;
    public const ulong m_bResumeZoom = 0xdb2;
    public const ulong m_bIsDefusing = 0xdb3;
    public const ulong m_bIsGrabbingHostage = 0xdb4;
    public const ulong m_iBlockingUseActionInProgress = 0xdb8;
    public const ulong m_fImmuneToGunGameDamageTime = 0xdbc;
    public const ulong m_bGunGameImmunity = 0xdc0;
    public const ulong m_bMadeFinalGunGameProgressiveKill = 0xdc1;
    public const ulong m_iGunGameProgressiveWeaponIndex = 0xdc4;
    public const ulong m_iNumGunGameTRKillPoints = 0xdc8;
    public const ulong m_iNumGunGameKillsWithCurrentWeapon = 0xdcc;
    public const ulong m_unTotalRoundDamageDealt = 0xdd0;
    public const ulong m_fMolotovDamageTime = 0xdd4;
    public const ulong m_bHasMovedSinceSpawn = 0xdd8;
    public const ulong m_bCanMoveDuringFreezePeriod = 0xdd9;
    public const ulong m_isCurrentGunGameLeader = 0xdda;
    public const ulong m_isCurrentGunGameTeamLeader = 0xddb;
    public const ulong m_flGuardianTooFarDistFrac = 0xddc;
    public const ulong m_flNextGuardianTooFarHurtTime = 0xde0;
    public const ulong m_flDetectedByEnemySensorTime = 0xde4;
    public const ulong m_bIsSpawnRappelling = 0xde8;
    public const ulong m_vecSpawnRappellingRopeOrigin = 0xdec;
    public const ulong m_nSurvivalTeam = 0xdf8;
    public const ulong m_hSurvivalAssassinationTarget = 0xdfc;
    public const ulong m_nCompletedSurvivalAssassinations = 0xe00;
    public const ulong m_flDealtDamageToEnemyMostRecentTimestamp = 0xe04;
    public const ulong m_flHealthShotBoostExpirationTime = 0xe08;
    public const ulong m_flLastEquippedHelmetTime = 0xe0c;
    public const ulong m_flLastEquippedArmorTime = 0xe10;
    public const ulong m_nHeavyAssaultSuitCooldownRemaining = 0xe14;
    public const ulong m_bResetArmorNextSpawn = 0xe18;
    public const ulong m_flLastBumpMineBumpTime = 0xe1c;
    public const ulong m_flEmitSoundTime = 0xe20;
    public const ulong m_iNumSpawns = 0xe24;
    public const ulong m_iShouldHaveCash = 0xe28;
    public const ulong m_bJustKilledTeammate = 0xe2c;
    public const ulong m_bPunishedForTK = 0xe2d;
    public const ulong m_bInvalidSteamLogonDelayed = 0xe2e;
    public const ulong m_iTeamKills = 0xe30;
    public const ulong m_flLastAction = 0xe34;
    public const ulong m_flNameChangeHistory = 0xe38;
    public const ulong m_fLastGivenDefuserTime = 0xe4c;
    public const ulong m_fLastGivenBombTime = 0xe50;
    public const ulong m_bHasNightVision = 0xe54;
    public const ulong m_bNightVisionOn = 0xe55;
    public const ulong m_fNextRadarUpdateTime = 0xe58;
    public const ulong m_flLastMoneyUpdateTime = 0xe5c;
    public const ulong m_MenuStringBuffer = 0xe60;
    public const ulong m_fIntroCamTime = 0x1260;
    public const ulong m_nMyCollisionGroup = 0x1264;
    public const ulong m_bInBombZone = 0x1268;
    public const ulong m_bInBuyZone = 0x1269;
    public const ulong m_bInNoDefuseArea = 0x126a;
    public const ulong m_bKilledByTaser = 0x126b;
    public const ulong m_iMoveState = 0x126c;
    public const ulong m_nPreviousModelIndex = 0x1270;
    public const ulong m_grenadeParameterStashTime = 0x1278;
    public const ulong m_bGrenadeParametersStashed = 0x127c;
    public const ulong m_angStashedShootAngles = 0x1280;
    public const ulong m_vecStashedGrenadeThrowPosition = 0x128c;
    public const ulong m_vecStashedVelocity = 0x1298;
    public const ulong m_angShootAngleHistory = 0x12a4;
    public const ulong m_vecThrowPositionHistory = 0x12bc;
    public const ulong m_vecVelocityHistory = 0x12d4;
    public const ulong m_nCharacterDefIndex = 0x12ec;
    public const ulong m_bDiedAirborne = 0x12ee;
    public const ulong m_iBombSiteIndex = 0x12f0;
    public const ulong m_nWhichBombZone = 0x12f4;
    public const ulong m_bInBombZoneTrigger = 0x12f8;
    public const ulong m_bWasInBombZoneTrigger = 0x12f9;
    public const ulong m_bWasInHostageRescueZone = 0x12fa;
    public const ulong m_bWasInBuyZone = 0x12fb;
    public const ulong m_bInHostageRescueZone = 0x12fc;
    public const ulong m_flStamina = 0x1300;
    public const ulong m_iDirection = 0x1304;
    public const ulong m_iShotsFired = 0x1308;
    public const ulong m_ArmorValue = 0x130c;
    public const ulong m_flFlinchStack = 0x1310;
    public const ulong m_flVelocityModifier = 0x1314;
    public const ulong m_flHitHeading = 0x1318;
    public const ulong m_nHitBodyPart = 0x131c;
    public const ulong m_iHostagesKilled = 0x1320;
    public const ulong m_vecTotalBulletForce = 0x1324;
    public const ulong m_flFlashDuration = 0x1330;
    public const ulong m_flFlashMaxAlpha = 0x1334;
    public const ulong m_flProgressBarStartTime = 0x1338;
    public const ulong m_iProgressBarDuration = 0x133c;
    public const ulong m_bWaitForNoAttack = 0x1340;
    public const ulong m_flLowerBodyYawTarget = 0x1344;
    public const ulong m_bStrafing = 0x1348;
    public const ulong m_lastStandingPos = 0x134c;
    public const ulong m_ignoreLadderJumpTime = 0x1358;
    public const ulong m_ladderSurpressionTimer = 0x1360;
    public const ulong m_lastLadderNormal = 0x1378;
    public const ulong m_lastLadderPos = 0x1384;
    public const ulong m_thirdPersonHeading = 0x1390;
    public const ulong m_flSlopeDropOffset = 0x139c;
    public const ulong m_flSlopeDropHeight = 0x13a0;
    public const ulong m_vHeadConstraintOffset = 0x13a4;
    public const ulong m_iLastWeaponFireUsercmd = 0x13b8;
    public const ulong m_angEyeAngles = 0x13bc;
    public const ulong m_bVCollisionInitted = 0x13c8;
    public const ulong m_storedSpawnPosition = 0x13cc;
    public const ulong m_storedSpawnAngle = 0x13d8;
    public const ulong m_bIsSpawning = 0x13e4;
    public const ulong m_bHideTargetID = 0x13e5;
    public const ulong m_nNumDangerZoneDamageHits = 0x13e8;
    public const ulong m_bHud_MiniScoreHidden = 0x13ec;
    public const ulong m_bHud_RadarHidden = 0x13ed;
    public const ulong m_nLastKillerIndex = 0x13f0;
    public const ulong m_nLastConcurrentKilled = 0x13f4;
    public const ulong m_nDeathCamMusic = 0x13f8;
    public const ulong m_iAddonBits = 0x13fc;
    public const ulong m_iPrimaryAddon = 0x1400;
    public const ulong m_iSecondaryAddon = 0x1404;
    public const ulong m_nTeamDamageGivenForMatch = 0x1408;
    public const ulong m_bTDGaveProtectionWarning = 0x140c;
    public const ulong m_bTDGaveProtectionWarningThisRound = 0x140d;
    public const ulong m_flLastTHWarningTime = 0x1410;
    public const ulong m_currentDeafnessFilter = 0x1414;
    public const ulong m_enemyPlayersKilledThisRound = 0x1418;
    public const ulong m_NumEnemiesKilledThisSpawn = 0x1430;
    public const ulong m_maxNumEnemiesKillStreak = 0x1434;
    public const ulong m_NumEnemiesKilledThisRound = 0x1438;
    public const ulong m_NumEnemiesAtRoundStart = 0x143c;
    public const ulong m_iRoundsWon = 0x1440;
    public const ulong m_lastRoundResult = 0x1444;
    public const ulong m_wasNotKilledNaturally = 0x1448;
    public const ulong m_vecPlayerPatchEconIndices = 0x144c;
    public const ulong m_iDeathFlags = 0x1460;
    public const ulong m_hPet = 0x1464;
    public const ulong m_unCurrentEquipmentValue = 0x1630;
    public const ulong m_unRoundStartEquipmentValue = 0x1632;
    public const ulong m_unFreezetimeEndEquipmentValue = 0x1634;
    public const ulong m_szLastPlaceName = 0x1636;
    public const ulong m_nSuicides = 0x1648;
    public const ulong m_nSurvivalTeamNumber = 0x164c;
    public const ulong m_aimPunchAngle = 0x1650;
    public const ulong m_aimPunchAngleVel = 0x165c;
    public const ulong m_aimPunchTickBase = 0x1668;
    public const ulong m_aimPunchTickFraction = 0x166c;
    public const ulong m_aimPunchCache = 0x1670;
    public const ulong m_bHasDeathInfo = 0x1688;
    public const ulong m_flDeathInfoTime = 0x168c;
    public const ulong m_vecDeathInfoOrigin = 0x1690;
    public const ulong m_bKilledByHeadshot = 0x169c;
    public const ulong m_LastHitBox = 0x16a0;
    public const ulong m_LastHealth = 0x16a4;
    public const ulong m_flLastCollisionCeiling = 0x16a8;
    public const ulong m_flLastCollisionCeilingChangeTime = 0x16ac;
    public const ulong m_strVOPrefix = 0x16b0;
    public const ulong m_flLandseconds = 0x16b8;
    public const ulong m_pBot = 0x16c0;
    public const ulong m_bBotAllowActive = 0x16c8;
    public const ulong m_bCommittingSuicideOnTeamChange = 0x16c9;
}

public static class CCSPlayerResource {
    public const ulong m_bHostageAlive = 0x4b0;
    public const ulong m_isHostageFollowingSomeone = 0x4bc;
    public const ulong m_iHostageEntityIDs = 0x4c8;
    public const ulong m_bombsiteCenterA = 0x4f8;
    public const ulong m_bombsiteCenterB = 0x504;
    public const ulong m_hostageRescueX = 0x510;
    public const ulong m_hostageRescueY = 0x520;
    public const ulong m_hostageRescueZ = 0x530;
    public const ulong m_bEndMatchNextMapAllVoted = 0x540;
    public const ulong m_foundGoalPositions = 0x541;
}

public static class CCSPlayer_ActionTrackingServices {
    public const ulong m_hLastWeaponBeforeC4AutoSwitch = 0x230;
    public const ulong m_bIsRescuing = 0x264;
    public const ulong m_weaponPurchasesThisMatch = 0x268;
    public const ulong m_weaponPurchasesThisRound = 0x2c0;
}

public static class CCSPlayer_BulletServices {
    public const ulong m_totalHitsOnServer = 0x40;
}

public static class CCSPlayer_BuyServices {
    public const ulong m_vecSellbackPurchaseEntries = 0xc8;
}

public static class CCSPlayer_CameraServices {
    public const ulong m_iFOV = 0x170;
    public const ulong m_iFOVStart = 0x174;
    public const ulong m_flFOVTime = 0x178;
    public const ulong m_flFOVRate = 0x17c;
    public const ulong m_hZoomOwner = 0x180;
    public const ulong m_hTriggerFogList = 0x188;
    public const ulong m_hLastFogTrigger = 0x1a0;
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
    public const ulong m_flMaxFallVelocity = 0x220;
    public const ulong m_vecLadderNormal = 0x224;
    public const ulong m_nLadderSurfacePropIndex = 0x230;
    public const ulong m_flDuckAmount = 0x234;
    public const ulong m_flDuckSpeed = 0x238;
    public const ulong m_bDuckOverride = 0x23c;
    public const ulong m_bDesiresDuck = 0x23d;
    public const ulong m_flDuckOffset = 0x240;
    public const ulong m_nDuckTimeMsecs = 0x244;
    public const ulong m_nDuckJumpTimeMsecs = 0x248;
    public const ulong m_nJumpTimeMsecs = 0x24c;
    public const ulong m_flLastDuckTime = 0x250;
    public const ulong m_vecLastPositionAtFullCrouchSpeed = 0x260;
    public const ulong m_duckUntilOnGround = 0x268;
    public const ulong m_bHasWalkMovedSinceLastJump = 0x269;
    public const ulong m_bInStuckTest = 0x26a;
    public const ulong m_flStuckCheckTime = 0x278;
    public const ulong m_nTraceCount = 0x478;
    public const ulong m_StuckLast = 0x47c;
    public const ulong m_bSpeedCropped = 0x480;
    public const ulong m_nOldWaterLevel = 0x484;
    public const ulong m_flWaterEntryTime = 0x488;
    public const ulong m_vecForward = 0x48c;
    public const ulong m_vecLeft = 0x498;
    public const ulong m_vecUp = 0x4a4;
    public const ulong m_vecPreviouslyPredictedOrigin = 0x4b0;
    public const ulong m_bMadeFootstepNoise = 0x4bc;
    public const ulong m_iFootsteps = 0x4c0;
    public const ulong m_nRoundFootstepsMade = 0x4c4;
    public const ulong m_bOldJumpPressed = 0x4c8;
    public const ulong m_flJumpPressedTime = 0x4cc;
    public const ulong m_flJumpUntil = 0x4d0;
    public const ulong m_flJumpVel = 0x4d4;
    public const ulong m_fStashGrenadeParameterWhen = 0x4d8;
    public const ulong m_nButtonDownMaskPrev = 0x4e0;
    public const ulong m_flOffsetTickCompleteTime = 0x4e8;
    public const ulong m_flOffsetTickStashedSpeed = 0x4ec;
}

public static class CCSPlayer_PingServices {
    public const ulong m_flPlayerPingTokens = 0x40;
    public const ulong m_hPlayerPing = 0x54;
}

public static class CCSPlayer_RadioServices {
    public const ulong m_flGotHostageTalkTimer = 0x40;
    public const ulong m_flDefusingTalkTimer = 0x44;
    public const ulong m_flC4PlantTalkTimer = 0x48;
    public const ulong m_flRadioTokenSlots = 0x4c;
    public const ulong m_bIgnoreRadio = 0x58;
}

public static class CCSPlayer_UseServices {
    public const ulong m_hLastKnownUseEntity = 0x40;
    public const ulong m_flLastUseTimeStamp = 0x44;
    public const ulong m_flTimeStartedHoldingUse = 0x48;
    public const ulong m_flTimeLastUsedWindow = 0x4c;
}

public static class CCSPlayer_ViewModelServices {
    public const ulong m_hViewModel = 0x40;
}

public static class CCSPlayer_WaterServices {
    public const ulong m_NextDrownDamageTime = 0x40;
    public const ulong m_nDrownDmgRate = 0x44;
    public const ulong m_AirFinishedTime = 0x48;
    public const ulong m_flWaterJumpTime = 0x4c;
    public const ulong m_vecWaterJumpVel = 0x50;
    public const ulong m_flSwimSoundTime = 0x5c;
}

public static class CCSPlayer_WeaponServices {
    public const ulong m_flNextAttack = 0xb0;
    public const ulong m_bIsLookingAtWeapon = 0xb4;
    public const ulong m_bIsHoldingLookAtWeapon = 0xb5;
    public const ulong m_hSavedWeapon = 0xb8;
    public const ulong m_nTimeToMelee = 0xbc;
    public const ulong m_nTimeToSecondary = 0xc0;
    public const ulong m_nTimeToPrimary = 0xc4;
    public const ulong m_nTimeToSniperRifle = 0xc8;
    public const ulong m_bIsBeingGivenItem = 0xcc;
    public const ulong m_bIsPickingUpItemWithUse = 0xcd;
    public const ulong m_bPickedUpWeapon = 0xce;
}

public static class CCSPropExplodingBarrel {
    public const ulong m_hBarrelTop = 0xc20;
    public const ulong m_bExploded = 0xc24;
    public const ulong m_nAccumulatedDamage = 0xc28;
}

public static class CCSPropExplodingBarrelTop {
    public const ulong m_flOverrideAlpha = 0xc18;
}

public static class CCSTeam {
    public const ulong m_nLastRecievedShorthandedRoundBonus = 0x568;
    public const ulong m_nShorthandedRoundBonusStartRound = 0x56c;
    public const ulong m_bSurrendered = 0x570;
    public const ulong m_szTeamMatchStat = 0x571;
    public const ulong m_numMapVictories = 0x774;
    public const ulong m_scoreFirstHalf = 0x778;
    public const ulong m_scoreSecondHalf = 0x77c;
    public const ulong m_scoreOvertime = 0x780;
    public const ulong m_szClanTeamname = 0x784;
    public const ulong m_iClanID = 0x808;
    public const ulong m_szTeamFlagImage = 0x80c;
    public const ulong m_szTeamLogoImage = 0x814;
    public const ulong m_flNextResourceTime = 0x81c;
    public const ulong m_iLastUpdateSentAt = 0x820;
    public const ulong m_flLastPlayerSortTime = 0x824;
    public const ulong m_nLastGGLeader_CT = 0x828;
    public const ulong m_nLastGGLeader_T = 0x82c;
    public const ulong m_nGGLeaderSlot_CT = 0x830;
    public const ulong m_nGGLeaderSlot_T = 0x834;
    public const ulong m_bGGHasLeader_CT = 0x838;
    public const ulong m_bGGHasLeader_T = 0x839;
}

public static class CChangeLevel {
    public const ulong m_sMapName = 0x8a8;
    public const ulong m_sLandmarkName = 0x8b0;
    public const ulong m_OnChangeLevel = 0x8b8;
    public const ulong m_bTouched = 0x8e0;
    public const ulong m_bNoTouch = 0x8e1;
    public const ulong m_bNewChapter = 0x8e2;
    public const ulong m_bOnChangeLevelFired = 0x8e3;
}

public static class CChicken {
    public const ulong m_AttributeManager = 0xbc8;
    public const ulong m_OriginalOwnerXuidLow = 0xe90;
    public const ulong m_OriginalOwnerXuidHigh = 0xe94;
    public const ulong m_updateTimer = 0xe98;
    public const ulong m_stuckAnchor = 0xeb0;
    public const ulong m_stuckTimer = 0xec0;
    public const ulong m_collisionStuckTimer = 0xed8;
    public const ulong m_isOnGround = 0xef0;
    public const ulong m_activity = 0xef4;
    public const ulong m_activityTimer = 0xef8;
    public const ulong m_turnRate = 0xf10;
    public const ulong m_fleeFrom = 0xf14;
    public const ulong m_moveRateThrottleTimer = 0xf18;
    public const ulong m_startleTimer = 0xf30;
    public const ulong m_vocalizeTimer = 0xf48;
    public const ulong m_flWhenZombified = 0xf60;
    public const ulong m_jumpedThisFrame = 0xf64;
    public const ulong m_leader = 0xf68;
    public const ulong m_reuseTimer = 0xf70;
    public const ulong m_hasBeenUsed = 0xf88;
    public const ulong m_jumpTimer = 0xf90;
    public const ulong m_flLastJumpTime = 0xfa8;
    public const ulong m_bInJump = 0xfac;
    public const ulong m_isWaitingForLeader = 0xfad;
    public const ulong m_repathTimer = 0x2fb8;
    public const ulong m_inhibitDoorTimer = 0x2fd0;
    public const ulong m_inhibitObstacleAvoidanceTimer = 0x3060;
    public const ulong m_vecPathGoal = 0x3080;
    public const ulong m_flActiveFollowStartTime = 0x308c;
    public const ulong m_followMinuteTimer = 0x3090;
    public const ulong m_vecLastEggPoopPosition = 0x30a8;
    public const ulong m_vecEggsPooped = 0x30b8;
    public const ulong m_BlockDirectionTimer = 0x30d8;
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

public static class CColorCorrection {
    public const ulong m_flFadeInDuration = 0x4b0;
    public const ulong m_flFadeOutDuration = 0x4b4;
    public const ulong m_flStartFadeInWeight = 0x4b8;
    public const ulong m_flStartFadeOutWeight = 0x4bc;
    public const ulong m_flTimeStartFadeIn = 0x4c0;
    public const ulong m_flTimeStartFadeOut = 0x4c4;
    public const ulong m_flMaxWeight = 0x4c8;
    public const ulong m_bStartDisabled = 0x4cc;
    public const ulong m_bEnabled = 0x4cd;
    public const ulong m_bMaster = 0x4ce;
    public const ulong m_bClientSide = 0x4cf;
    public const ulong m_bExclusive = 0x4d0;
    public const ulong m_MinFalloff = 0x4d4;
    public const ulong m_MaxFalloff = 0x4d8;
    public const ulong m_flCurWeight = 0x4dc;
    public const ulong m_netlookupFilename = 0x4e0;
    public const ulong m_lookupFilename = 0x6e0;
}

public static class CColorCorrectionVolume {
    public const ulong m_bEnabled = 0x8a8;
    public const ulong m_MaxWeight = 0x8ac;
    public const ulong m_FadeDuration = 0x8b0;
    public const ulong m_bStartDisabled = 0x8b4;
    public const ulong m_Weight = 0x8b8;
    public const ulong m_lookupFilename = 0x8bc;
    public const ulong m_LastEnterWeight = 0xabc;
    public const ulong m_LastEnterTime = 0xac0;
    public const ulong m_LastExitWeight = 0xac4;
    public const ulong m_LastExitTime = 0xac8;
}

public static class CCommentaryAuto {
    public const ulong m_OnCommentaryNewGame = 0x4b0;
    public const ulong m_OnCommentaryMidGame = 0x4d8;
    public const ulong m_OnCommentaryMultiplayerSpawn = 0x500;
}

public static class CCommentarySystem {
    public const ulong m_bCommentaryConvarsChanging = 0x11;
    public const ulong m_bCommentaryEnabledMidGame = 0x12;
    public const ulong m_flNextTeleportTime = 0x14;
    public const ulong m_iTeleportStage = 0x18;
    public const ulong m_bCheatState = 0x1c;
    public const ulong m_bIsFirstSpawnGroupToLoad = 0x1d;
    public const ulong m_hCurrentNode = 0x38;
    public const ulong m_hActiveCommentaryNode = 0x3c;
    public const ulong m_hLastCommentaryNode = 0x40;
    public const ulong m_vecNodes = 0x48;
}

public static class CConstantForceController {
    public const ulong m_linear = 0xc;
    public const ulong m_angular = 0x18;
    public const ulong m_linearSave = 0x24;
    public const ulong m_angularSave = 0x30;
}

public static class CConstraintAnchor {
    public const ulong m_massScale = 0x930;
}

public static class CCopyRecipientFilter {
    public const ulong m_Flags = 0x8;
    public const ulong m_Recipients = 0x10;
}

public static class CCredits {
    public const ulong m_OnCreditsDone = 0x4b0;
    public const ulong m_bRolledOutroCredits = 0x4d8;
    public const ulong m_flLogoLength = 0x4dc;
}

public static class CDZDoor {
    public const ulong m_bIsSecurityDoor = 0xef8;
    public const ulong m_hSpawnPoint = 0xefc;
    public const ulong m_bPaidToUnlock = 0xf00;
    public const ulong m_nPlayDoorOpenSound = 0xf04;
    public const ulong m_nAttachmentIndex1 = 0xf38;
    public const ulong m_nAttachmentIndex2 = 0xf39;
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

public static class CDangerZone {
    public const ulong m_vecDangerZoneOriginStartedAt = 0x4b0;
    public const ulong m_flBombLaunchTime = 0x4bc;
    public const ulong m_flExtraRadius = 0x4c0;
    public const ulong m_flExtraRadiusStartTime = 0x4c4;
    public const ulong m_flExtraRadiusTotalLerpTime = 0x4c8;
    public const ulong m_nDropOrder = 0x4cc;
    public const ulong m_iWave = 0x4d0;
    public const ulong m_nMyZoneIndex = 0x4d4;
    public const ulong m_nZoneNeighbors = 0x4d8;
}

public static class CDangerZoneController {
    public const ulong m_bDangerZoneControllerEnabled = 0x4b0;
    public const ulong m_bMissionControlledExplosions = 0x4b1;
    public const ulong m_vecEndGameCircleStart = 0x4b4;
    public const ulong m_vecEndGameCircleEnd = 0x4c0;
    public const ulong m_flStartTime = 0x4cc;
    public const ulong m_flFinalExpansionTime = 0x4d0;
    public const ulong m_DangerZones = 0x4d4;
    public const ulong m_flWaveEndTimes = 0x57c;
    public const ulong m_hTheFinalZone = 0x590;
    public const ulong m_flLastDangerZoneStatusLogged = 0x594;
    public const ulong m_flLastDangerZoneDamageTime = 0x598;
    public const ulong m_bFirstBombWarning = 0x59c;
    public const ulong m_numWaveRewardsGranted = 0x5a0;
    public const ulong m_pGasCanLaunchers = 0x5a8;
}

public static class CDebugHistory {
    public const ulong m_nNpcEvents = 0x44f0;
}

public static class CDecoyProjectile {
    public const ulong m_shotsRemaining = 0xad0;
    public const ulong m_fExpireTime = 0xad4;
    public const ulong m_decoyWeaponDefIndex = 0xae0;
}

public static class CDrone {
    public const ulong m_hMoveToThisEntity = 0xc30;
    public const ulong m_hDeliveryCargo = 0xc34;
    public const ulong m_hRecentCargo = 0xc38;
    public const ulong m_bPilotTakeoverAllowed = 0xc3c;
    public const ulong m_hPotentialCargo = 0xc40;
    public const ulong m_hCurrentPilot = 0xc44;
    public const ulong m_vecTagPositions = 0xc48;
    public const ulong m_vecTagIncrements = 0xd68;
    public const ulong m_flLastUpdateTargetScanTime = 0xdc8;
    public const ulong m_bWasControlledByPlayer = 0xdcc;
    public const ulong m_bHovering = 0xdcd;
    public const ulong m_pStateSound = 0xdd0;
    public const ulong m_vecGroundOffset = 0xdd8;
    public const ulong m_bQueuingOrders = 0xe00;
    public const ulong m_flLastOrdersChangeTimestamp = 0xe04;
    public const ulong m_vecLastKnownAcceleration = 0xe08;
    public const ulong m_vecLastKnownVelocity = 0xe14;
    public const ulong m_vecLastKnownAngImpulse = 0xe20;
    public const ulong m_flLastKnownSpeed = 0xe2c;
    public const ulong m_flMaxSpeed = 0xe30;
    public const ulong m_vecCurrentDestination = 0xe34;
    public const ulong m_flLastKnownDistanceToDestination = 0xe40;
    public const ulong m_flLastKnownWaypointAccuracy = 0xe44;
    public const ulong m_vecWaypointQueue = 0xe48;
    public const ulong m_vecSparsePositionHistory = 0xe60;
    public const ulong m_vecPositionHistory = 0xe78;
    public const ulong m_vecUnstuckQueue = 0xe90;
    public const ulong m_flLastKnownGroundHeight = 0xea8;
    public const ulong m_GroundCheckTimer = 0xeb0;
    public const ulong m_ActInjuredTimer = 0xec8;
    public const ulong m_flPowerCutUntil = 0xee0;
    public const ulong m_WanderTimer = 0xee8;
    public const ulong m_flLastTimeSawAttackTarget = 0xf00;
    public const ulong m_vecLastKnownAttackTargetPosition = 0xf04;
    public const ulong m_hAttackTarget = 0xf10;
    public const ulong m_IntervalThinkTimer = 0xf18;
    public const ulong m_bDoIntervalThink = 0xf30;
    public const ulong m_flLastDroppedGrenadeAt = 0xf34;
    public const ulong m_flSpawnTimeStamp = 0xf38;
    public const ulong m_bInPlayArea = 0xf3c;
    public const ulong m_vecSpawnPosition = 0xf40;
    public const ulong m_vecLastKnownMoveToEntityPosition = 0xf4c;
    public const ulong m_tCargoCollisionGroup = 0xf58;
    public const ulong m_flTimeArrivedAtMoveToEntity = 0xf5c;
    public const ulong m_vecAvoidanceDir = 0xf60;
    public const ulong m_flAvoidanceTime = 0xf6c;
    public const ulong m_bUpgraded = 0xf70;
    public const ulong m_hCargoOwner = 0xf74;
    public const ulong m_vecPlayerControlThrust = 0xf80;
    public const ulong m_flRopeLength = 0xf8c;
    public const ulong m_bDidDropOnRoofWarning = 0xf90;
    public const ulong m_flSelfDestructTime = 0xf94;
    public const ulong m_bSelfDestructFire = 0xf98;
    public const ulong m_bSelfDestructSpark = 0xf99;
    public const ulong m_hLastKnownPilot = 0xf9c;
    public const ulong m_bHasAlwaysBeenInZone = 0xfa0;
    public const ulong m_nJammedAmount = 0xfa4;
    public const ulong m_hPlayerThatOrderedMe = 0xfa8;
}

public static class CDronegun {
    public const ulong m_vecAttentionTarget = 0x940;
    public const ulong m_vecTargetOffset = 0x94c;
    public const ulong m_bHasTarget = 0x958;
    public const ulong m_vecAttentionCurrent = 0x95c;
    public const ulong m_nPoseParamPitch = 0x968;
    public const ulong m_nPoseParamYaw = 0x96c;
    public const ulong m_bVarInit = 0x970;
    public const ulong m_flDisorientEndTime = 0x974;
    public const ulong m_hEnvGunfire = 0x990;
    public const ulong m_flLastShootTime = 0x994;
    public const ulong m_flLastSound1 = 0x998;
    public const ulong m_flLastSound2 = 0x99c;
    public const ulong m_flLastSound3 = 0x9a0;
    public const ulong m_nAttachMuzzle = 0x9a4;
}

public static class CDynamicLight {
    public const ulong m_ActualFlags = 0x700;
    public const ulong m_Flags = 0x701;
    public const ulong m_LightStyle = 0x702;
    public const ulong m_On = 0x703;
    public const ulong m_Radius = 0x704;
    public const ulong m_Exponent = 0x708;
    public const ulong m_InnerAngle = 0x70c;
    public const ulong m_OuterAngle = 0x710;
    public const ulong m_SpotRadius = 0x714;
}

public static class CDynamicProp {
    public const ulong m_bCreateNavObstacle = 0xab0;
    public const ulong m_bUseHitboxesForRenderBox = 0xab1;
    public const ulong m_bUseAnimGraph = 0xab2;
    public const ulong m_pOutputAnimBegun = 0xab8;
    public const ulong m_pOutputAnimOver = 0xae0;
    public const ulong m_pOutputAnimLoopCycleOver = 0xb08;
    public const ulong m_OnAnimReachedStart = 0xb30;
    public const ulong m_OnAnimReachedEnd = 0xb58;
    public const ulong m_iszDefaultAnim = 0xb80;
    public const ulong m_nDefaultAnimLoopMode = 0xb88;
    public const ulong m_bAnimateOnServer = 0xb8c;
    public const ulong m_bRandomizeCycle = 0xb8d;
    public const ulong m_bStartDisabled = 0xb8e;
    public const ulong m_bScriptedMovement = 0xb8f;
    public const ulong m_bFiredStartEndOutput = 0xb90;
    public const ulong m_bForceNpcExclude = 0xb91;
    public const ulong m_bCreateNonSolid = 0xb92;
    public const ulong m_bIsOverrideProp = 0xb93;
    public const ulong m_iInitialGlowState = 0xb94;
    public const ulong m_nGlowRange = 0xb98;
    public const ulong m_nGlowRangeMin = 0xb9c;
    public const ulong m_glowColor = 0xba0;
    public const ulong m_nGlowTeam = 0xba4;
}

public static class CEconEntity {
    public const ulong m_AttributeManager = 0x9d0;
    public const ulong m_OriginalOwnerXuidLow = 0xc98;
    public const ulong m_OriginalOwnerXuidHigh = 0xc9c;
    public const ulong m_nFallbackPaintKit = 0xca0;
    public const ulong m_nFallbackSeed = 0xca4;
    public const ulong m_flFallbackWear = 0xca8;
    public const ulong m_nFallbackStatTrak = 0xcac;
    public const ulong m_hOldProvidee = 0xcb0;
    public const ulong m_iOldOwnerClass = 0xcb4;
}

public static class CEconItemAttribute {
    public const ulong m_iAttributeDefinitionIndex = 0x30;
    public const ulong m_flValue = 0x34;
    public const ulong m_flInitialValue = 0x38;
    public const ulong m_nRefundableCurrency = 0x3c;
    public const ulong m_bSetBonus = 0x40;
}

public static class CEconItemView {
    public const ulong m_iItemDefinitionIndex = 0x38;
    public const ulong m_iEntityQuality = 0x3c;
    public const ulong m_iEntityLevel = 0x40;
    public const ulong m_iItemID = 0x48;
    public const ulong m_iItemIDHigh = 0x50;
    public const ulong m_iItemIDLow = 0x54;
    public const ulong m_iAccountID = 0x58;
    public const ulong m_iInventoryPosition = 0x5c;
    public const ulong m_bInitialized = 0x68;
    public const ulong m_AttributeList = 0x70;
    public const ulong m_NetworkedDynamicAttributes = 0xd0;
    public const ulong m_szCustomName = 0x130;
    public const ulong m_szCustomNameOverride = 0x1d1;
}

public static class CEconWearable {
    public const ulong m_nForceSkin = 0xcb8;
    public const ulong m_bAlwaysAllow = 0xcbc;
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

public static class CEntityDissolve {
    public const ulong m_flFadeInStart = 0x700;
    public const ulong m_flFadeInLength = 0x704;
    public const ulong m_flFadeOutModelStart = 0x708;
    public const ulong m_flFadeOutModelLength = 0x70c;
    public const ulong m_flFadeOutStart = 0x710;
    public const ulong m_flFadeOutLength = 0x714;
    public const ulong m_flStartTime = 0x718;
    public const ulong m_nDissolveType = 0x71c;
    public const ulong m_vDissolverOrigin = 0x720;
    public const ulong m_nMagnitude = 0x72c;
}

public static class CEntityFlame {
    public const ulong m_hEntAttached = 0x4b0;
    public const ulong m_bCheapEffect = 0x4b4;
    public const ulong m_flSize = 0x4b8;
    public const ulong m_bUseHitboxes = 0x4bc;
    public const ulong m_iNumHitboxFires = 0x4c0;
    public const ulong m_flHitboxFireScale = 0x4c4;
    public const ulong m_flLifetime = 0x4c8;
    public const ulong m_hAttacker = 0x4cc;
    public const ulong m_iDangerSound = 0x4d0;
    public const ulong m_flDirectDamagePerSecond = 0x4d4;
    public const ulong m_iCustomDamageType = 0x4d8;
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

public static class CEnvBeam {
    public const ulong m_active = 0x7a0;
    public const ulong m_spriteTexture = 0x7a8;
    public const ulong m_iszStartEntity = 0x7b0;
    public const ulong m_iszEndEntity = 0x7b8;
    public const ulong m_life = 0x7c0;
    public const ulong m_boltWidth = 0x7c4;
    public const ulong m_noiseAmplitude = 0x7c8;
    public const ulong m_speed = 0x7cc;
    public const ulong m_restrike = 0x7d0;
    public const ulong m_iszSpriteName = 0x7d8;
    public const ulong m_frameStart = 0x7e0;
    public const ulong m_vEndPointWorld = 0x7e4;
    public const ulong m_vEndPointRelative = 0x7f0;
    public const ulong m_radius = 0x7fc;
    public const ulong m_TouchType = 0x800;
    public const ulong m_iFilterName = 0x808;
    public const ulong m_hFilter = 0x810;
    public const ulong m_iszDecal = 0x818;
    public const ulong m_OnTouchedByEntity = 0x820;
}

public static class CEnvBeverage {
    public const ulong m_CanInDispenser = 0x4b0;
    public const ulong m_nBeverageType = 0x4b4;
}

public static class CEnvCombinedLightProbeVolume {
    public const ulong m_Color = 0x1580;
    public const ulong m_flBrightness = 0x1584;
    public const ulong m_hCubemapTexture = 0x1588;
    public const ulong m_bCustomCubemapTexture = 0x1590;
    public const ulong m_hLightProbeTexture = 0x1598;
    public const ulong m_hLightProbeDirectLightIndicesTexture = 0x15a0;
    public const ulong m_hLightProbeDirectLightScalarsTexture = 0x15a8;
    public const ulong m_hLightProbeDirectLightShadowsTexture = 0x15b0;
    public const ulong m_vBoxMins = 0x15b8;
    public const ulong m_vBoxMaxs = 0x15c4;
    public const ulong m_LightGroups = 0x15d0;
    public const ulong m_bMoveable = 0x15d8;
    public const ulong m_nHandshake = 0x15dc;
    public const ulong m_nEnvCubeMapArrayIndex = 0x15e0;
    public const ulong m_nPriority = 0x15e4;
    public const ulong m_bStartDisabled = 0x15e8;
    public const ulong m_flEdgeFadeDist = 0x15ec;
    public const ulong m_vEdgeFadeDists = 0x15f0;
    public const ulong m_nLightProbeSizeX = 0x15fc;
    public const ulong m_nLightProbeSizeY = 0x1600;
    public const ulong m_nLightProbeSizeZ = 0x1604;
    public const ulong m_nLightProbeAtlasX = 0x1608;
    public const ulong m_nLightProbeAtlasY = 0x160c;
    public const ulong m_nLightProbeAtlasZ = 0x1610;
    public const ulong m_bEnabled = 0x1629;
}

public static class CEnvCubemap {
    public const ulong m_hCubemapTexture = 0x5a0;
    public const ulong m_bCustomCubemapTexture = 0x5a8;
    public const ulong m_flInfluenceRadius = 0x5ac;
    public const ulong m_vBoxProjectMins = 0x5b0;
    public const ulong m_vBoxProjectMaxs = 0x5bc;
    public const ulong m_LightGroups = 0x5c8;
    public const ulong m_bMoveable = 0x5d0;
    public const ulong m_nHandshake = 0x5d4;
    public const ulong m_nEnvCubeMapArrayIndex = 0x5d8;
    public const ulong m_nPriority = 0x5dc;
    public const ulong m_flEdgeFadeDist = 0x5e0;
    public const ulong m_vEdgeFadeDists = 0x5e4;
    public const ulong m_flDiffuseScale = 0x5f0;
    public const ulong m_bStartDisabled = 0x5f4;
    public const ulong m_bDefaultEnvMap = 0x5f5;
    public const ulong m_bDefaultSpecEnvMap = 0x5f6;
    public const ulong m_bIndoorCubeMap = 0x5f7;
    public const ulong m_bCopyDiffuseFromDefaultCubemap = 0x5f8;
    public const ulong m_bEnabled = 0x608;
}

public static class CEnvCubemapFog {
    public const ulong m_flEndDistance = 0x4b0;
    public const ulong m_flStartDistance = 0x4b4;
    public const ulong m_flFogFalloffExponent = 0x4b8;
    public const ulong m_bHeightFogEnabled = 0x4bc;
    public const ulong m_flFogHeightWidth = 0x4c0;
    public const ulong m_flFogHeightEnd = 0x4c4;
    public const ulong m_flFogHeightStart = 0x4c8;
    public const ulong m_flFogHeightExponent = 0x4cc;
    public const ulong m_flLODBias = 0x4d0;
    public const ulong m_bActive = 0x4d4;
    public const ulong m_bStartDisabled = 0x4d5;
    public const ulong m_flFogMaxOpacity = 0x4d8;
    public const ulong m_nCubemapSourceType = 0x4dc;
    public const ulong m_hSkyMaterial = 0x4e0;
    public const ulong m_iszSkyEntity = 0x4e8;
    public const ulong m_hFogCubemapTexture = 0x4f0;
    public const ulong m_bHasHeightFogEnd = 0x4f8;
    public const ulong m_bFirstTime = 0x4f9;
}

public static class CEnvDecal {
    public const ulong m_hDecalMaterial = 0x700;
    public const ulong m_flWidth = 0x708;
    public const ulong m_flHeight = 0x70c;
    public const ulong m_flDepth = 0x710;
    public const ulong m_nRenderOrder = 0x714;
    public const ulong m_bProjectOnWorld = 0x718;
    public const ulong m_bProjectOnCharacters = 0x719;
    public const ulong m_bProjectOnWater = 0x71a;
    public const ulong m_flDepthSortBias = 0x71c;
}

public static class CEnvDetailController {
    public const ulong m_flFadeStartDist = 0x4b0;
    public const ulong m_flFadeEndDist = 0x4b4;
}

public static class CEnvEntityIgniter {
    public const ulong m_flLifetime = 0x4b0;
}

public static class CEnvEntityMaker {
    public const ulong m_vecEntityMins = 0x4b0;
    public const ulong m_vecEntityMaxs = 0x4bc;
    public const ulong m_hCurrentInstance = 0x4c8;
    public const ulong m_hCurrentBlocker = 0x4cc;
    public const ulong m_vecBlockerOrigin = 0x4d0;
    public const ulong m_angPostSpawnDirection = 0x4dc;
    public const ulong m_flPostSpawnDirectionVariance = 0x4e8;
    public const ulong m_flPostSpawnSpeed = 0x4ec;
    public const ulong m_bPostSpawnUseAngles = 0x4f0;
    public const ulong m_iszTemplate = 0x4f8;
    public const ulong m_pOutputOnSpawned = 0x500;
    public const ulong m_pOutputOnFailedSpawn = 0x528;
}

public static class CEnvExplosion {
    public const ulong m_iMagnitude = 0x700;
    public const ulong m_flPlayerDamage = 0x704;
    public const ulong m_iRadiusOverride = 0x708;
    public const ulong m_flInnerRadius = 0x70c;
    public const ulong m_spriteScale = 0x710;
    public const ulong m_flDamageForce = 0x714;
    public const ulong m_hInflictor = 0x718;
    public const ulong m_iCustomDamageType = 0x71c;
    public const ulong m_iszExplosionType = 0x728;
    public const ulong m_iszCustomEffectName = 0x730;
    public const ulong m_iszCustomSoundName = 0x738;
    public const ulong m_iClassIgnore = 0x740;
    public const ulong m_iClassIgnore2 = 0x744;
    public const ulong m_iszEntityIgnoreName = 0x748;
    public const ulong m_hEntityIgnore = 0x750;
}

public static class CEnvFade {
    public const ulong m_fadeColor = 0x4b0;
    public const ulong m_Duration = 0x4b4;
    public const ulong m_HoldDuration = 0x4b8;
    public const ulong m_OnBeginFade = 0x4c0;
}

public static class CEnvFireSensor {
    public const ulong m_bEnabled = 0x4b0;
    public const ulong m_bHeatAtLevel = 0x4b1;
    public const ulong m_radius = 0x4b4;
    public const ulong m_targetLevel = 0x4b8;
    public const ulong m_targetTime = 0x4bc;
    public const ulong m_levelTime = 0x4c0;
    public const ulong m_OnHeatLevelStart = 0x4c8;
    public const ulong m_OnHeatLevelEnd = 0x4f0;
}

public static class CEnvFireSource {
    public const ulong m_bEnabled = 0x4b0;
    public const ulong m_radius = 0x4b4;
    public const ulong m_damage = 0x4b8;
}

public static class CEnvGasCanister {
    public const ulong m_bLanded = 0x930;
    public const ulong m_flDamageRadius = 0x934;
    public const ulong m_flDamage = 0x938;
    public const ulong m_bIncomingSoundStarted = 0x93c;
    public const ulong m_bHasDetonated = 0x93d;
    public const ulong m_bLaunched = 0x93e;
    public const ulong m_OnLaunched = 0x940;
    public const ulong m_OnImpacted = 0x968;
    public const ulong m_OnOpened = 0x990;
    public const ulong m_vecImpactPosition = 0x9b8;
    public const ulong m_vecStartPosition = 0x9c4;
    public const ulong m_vecEnterWorldPosition = 0x9d0;
    public const ulong m_vecDirection = 0x9dc;
    public const ulong m_vecStartAngles = 0x9e8;
    public const ulong m_flFlightTime = 0x9f4;
    public const ulong m_flFlightSpeed = 0x9f8;
    public const ulong m_flLaunchTime = 0x9fc;
    public const ulong m_flInitialZSpeed = 0xa00;
    public const ulong m_flZAcceleration = 0xa04;
    public const ulong m_flHorizSpeed = 0xa08;
    public const ulong m_bLaunchedFromWithinWorld = 0xa0c;
    public const ulong m_vecParabolaDirection = 0xa10;
    public const ulong m_flWorldEnterTime = 0xa1c;
    public const ulong m_vecSkyboxOrigin = 0xa20;
    public const ulong m_flSkyboxScale = 0xa2c;
    public const ulong m_bInSkybox = 0xa30;
    public const ulong m_bDoImpactEffects = 0xa31;
    public const ulong m_nMyZoneIndex = 0xa34;
    public const ulong m_hSkyboxCopy = 0xa38;
    public const ulong m_flLaunchHeight = 0xa3c;
}

public static class CEnvGlobal {
    public const ulong m_outCounter = 0x4b0;
    public const ulong m_globalstate = 0x4d8;
    public const ulong m_triggermode = 0x4e0;
    public const ulong m_initialstate = 0x4e4;
    public const ulong m_counter = 0x4e8;
}

public static class CEnvHudHint {
    public const ulong m_iszMessage = 0x4b0;
}

public static class CEnvInstructorHint {
    public const ulong m_iszName = 0x4b0;
    public const ulong m_iszReplace_Key = 0x4b8;
    public const ulong m_iszHintTargetEntity = 0x4c0;
    public const ulong m_iTimeout = 0x4c8;
    public const ulong m_iDisplayLimit = 0x4cc;
    public const ulong m_iszIcon_Onscreen = 0x4d0;
    public const ulong m_iszIcon_Offscreen = 0x4d8;
    public const ulong m_iszCaption = 0x4e0;
    public const ulong m_iszActivatorCaption = 0x4e8;
    public const ulong m_Color = 0x4f0;
    public const ulong m_fIconOffset = 0x4f4;
    public const ulong m_fRange = 0x4f8;
    public const ulong m_iPulseOption = 0x4fc;
    public const ulong m_iAlphaOption = 0x4fd;
    public const ulong m_iShakeOption = 0x4fe;
    public const ulong m_bStatic = 0x4ff;
    public const ulong m_bNoOffscreen = 0x500;
    public const ulong m_bForceCaption = 0x501;
    public const ulong m_iInstanceType = 0x504;
    public const ulong m_bSuppressRest = 0x508;
    public const ulong m_iszBinding = 0x510;
    public const ulong m_bAllowNoDrawTarget = 0x518;
    public const ulong m_bAutoStart = 0x519;
    public const ulong m_bLocalPlayerOnly = 0x51a;
}

public static class CEnvInstructorVRHint {
    public const ulong m_iszName = 0x4b0;
    public const ulong m_iszHintTargetEntity = 0x4b8;
    public const ulong m_iTimeout = 0x4c0;
    public const ulong m_iszCaption = 0x4c8;
    public const ulong m_iszStartSound = 0x4d0;
    public const ulong m_iLayoutFileType = 0x4d8;
    public const ulong m_iszCustomLayoutFile = 0x4e0;
    public const ulong m_iAttachType = 0x4e8;
    public const ulong m_flHeightOffset = 0x4ec;
}

public static class CEnvLaser {
    public const ulong m_iszLaserTarget = 0x7a0;
    public const ulong m_pSprite = 0x7a8;
    public const ulong m_iszSpriteName = 0x7b0;
    public const ulong m_firePosition = 0x7b8;
    public const ulong m_flStartFrame = 0x7c4;
}

public static class CEnvLightProbeVolume {
    public const ulong m_hLightProbeTexture = 0x1490;
    public const ulong m_hLightProbeDirectLightIndicesTexture = 0x1498;
    public const ulong m_hLightProbeDirectLightScalarsTexture = 0x14a0;
    public const ulong m_hLightProbeDirectLightShadowsTexture = 0x14a8;
    public const ulong m_vBoxMins = 0x14b0;
    public const ulong m_vBoxMaxs = 0x14bc;
    public const ulong m_LightGroups = 0x14c8;
    public const ulong m_bMoveable = 0x14d0;
    public const ulong m_nHandshake = 0x14d4;
    public const ulong m_nPriority = 0x14d8;
    public const ulong m_bStartDisabled = 0x14dc;
    public const ulong m_nLightProbeSizeX = 0x14e0;
    public const ulong m_nLightProbeSizeY = 0x14e4;
    public const ulong m_nLightProbeSizeZ = 0x14e8;
    public const ulong m_nLightProbeAtlasX = 0x14ec;
    public const ulong m_nLightProbeAtlasY = 0x14f0;
    public const ulong m_nLightProbeAtlasZ = 0x14f4;
    public const ulong m_bEnabled = 0x1501;
}

public static class CEnvMicrophone {
    public const ulong m_bDisabled = 0x4b0;
    public const ulong m_hMeasureTarget = 0x4b4;
    public const ulong m_nSoundMask = 0x4b8;
    public const ulong m_flSensitivity = 0x4bc;
    public const ulong m_flSmoothFactor = 0x4c0;
    public const ulong m_flMaxRange = 0x4c4;
    public const ulong m_iszSpeakerName = 0x4c8;
    public const ulong m_hSpeaker = 0x4d0;
    public const ulong m_bAvoidFeedback = 0x4d4;
    public const ulong m_iSpeakerDSPPreset = 0x4d8;
    public const ulong m_iszListenFilter = 0x4e0;
    public const ulong m_hListenFilter = 0x4e8;
    public const ulong m_SoundLevel = 0x4f0;
    public const ulong m_OnRoutedSound = 0x518;
    public const ulong m_OnHeardSound = 0x540;
    public const ulong m_szLastSound = 0x568;
    public const ulong m_iLastRoutedFrame = 0x668;
}

public static class CEnvMuzzleFlash {
    public const ulong m_flScale = 0x4b0;
    public const ulong m_iszParentAttachment = 0x4b8;
}

public static class CEnvParticleGlow {
    public const ulong m_flAlphaScale = 0xc78;
    public const ulong m_flRadiusScale = 0xc7c;
    public const ulong m_flSelfIllumScale = 0xc80;
    public const ulong m_ColorTint = 0xc84;
    public const ulong m_hTextureOverride = 0xc88;
}

public static class CEnvProjectedTexture {
    public const ulong m_hTargetEntity = 0x700;
    public const ulong m_bState = 0x704;
    public const ulong m_bAlwaysUpdate = 0x705;
    public const ulong m_flLightFOV = 0x708;
    public const ulong m_bEnableShadows = 0x70c;
    public const ulong m_bSimpleProjection = 0x70d;
    public const ulong m_bLightOnlyTarget = 0x70e;
    public const ulong m_bLightWorld = 0x70f;
    public const ulong m_bCameraSpace = 0x710;
    public const ulong m_flBrightnessScale = 0x714;
    public const ulong m_LightColor = 0x718;
    public const ulong m_flIntensity = 0x71c;
    public const ulong m_flLinearAttenuation = 0x720;
    public const ulong m_flQuadraticAttenuation = 0x724;
    public const ulong m_bVolumetric = 0x728;
    public const ulong m_flNoiseStrength = 0x72c;
    public const ulong m_flFlashlightTime = 0x730;
    public const ulong m_nNumPlanes = 0x734;
    public const ulong m_flPlaneOffset = 0x738;
    public const ulong m_flVolumetricIntensity = 0x73c;
    public const ulong m_flColorTransitionTime = 0x740;
    public const ulong m_flAmbient = 0x744;
    public const ulong m_SpotlightTextureName = 0x748;
    public const ulong m_nSpotlightTextureFrame = 0x948;
    public const ulong m_nShadowQuality = 0x94c;
    public const ulong m_flNearZ = 0x950;
    public const ulong m_flFarZ = 0x954;
    public const ulong m_flProjectionSize = 0x958;
    public const ulong m_flRotation = 0x95c;
    public const ulong m_bFlipHorizontal = 0x960;
}

public static class CEnvScreenOverlay {
    public const ulong m_iszOverlayNames = 0x4b0;
    public const ulong m_flOverlayTimes = 0x500;
    public const ulong m_flStartTime = 0x528;
    public const ulong m_iDesiredOverlay = 0x52c;
    public const ulong m_bIsActive = 0x530;
}

public static class CEnvShake {
    public const ulong m_limitToEntity = 0x4b0;
    public const ulong m_Amplitude = 0x4b8;
    public const ulong m_Frequency = 0x4bc;
    public const ulong m_Duration = 0x4c0;
    public const ulong m_Radius = 0x4c4;
    public const ulong m_stopTime = 0x4c8;
    public const ulong m_nextShake = 0x4cc;
    public const ulong m_currentAmp = 0x4d0;
    public const ulong m_maxForce = 0x4d4;
    public const ulong m_shakeCallback = 0x4e8;
}

public static class CEnvSky {
    public const ulong m_hSkyMaterial = 0x700;
    public const ulong m_hSkyMaterialLightingOnly = 0x708;
    public const ulong m_bStartDisabled = 0x710;
    public const ulong m_vTintColor = 0x711;
    public const ulong m_vTintColorLightingOnly = 0x715;
    public const ulong m_flBrightnessScale = 0x71c;
    public const ulong m_nFogType = 0x720;
    public const ulong m_flFogMinStart = 0x724;
    public const ulong m_flFogMinEnd = 0x728;
    public const ulong m_flFogMaxStart = 0x72c;
    public const ulong m_flFogMaxEnd = 0x730;
    public const ulong m_bEnabled = 0x734;
}

public static class CEnvSoundscape {
    public const ulong m_OnPlay = 0x4b0;
    public const ulong m_flRadius = 0x4d8;
    public const ulong m_soundscapeName = 0x4e0;
    public const ulong m_soundEventName = 0x4e8;
    public const ulong m_bOverrideWithEvent = 0x4f0;
    public const ulong m_soundscapeIndex = 0x4f4;
    public const ulong m_soundscapeEntityListId = 0x4f8;
    public const ulong m_soundEventHash = 0x4fc;
    public const ulong m_positionNames = 0x500;
    public const ulong m_hProxySoundscape = 0x540;
    public const ulong m_bDisabled = 0x544;
}

public static class CEnvSoundscapeProxy {
    public const ulong m_MainSoundscapeName = 0x548;
}

public static class CEnvSpark {
    public const ulong m_flDelay = 0x4b0;
    public const ulong m_nMagnitude = 0x4b4;
    public const ulong m_nTrailLength = 0x4b8;
    public const ulong m_nType = 0x4bc;
    public const ulong m_OnSpark = 0x4c0;
}

public static class CEnvSplash {
    public const ulong m_flScale = 0x4b0;
}

public static class CEnvTilt {
    public const ulong m_Duration = 0x4b0;
    public const ulong m_Radius = 0x4b4;
    public const ulong m_TiltTime = 0x4b8;
    public const ulong m_stopTime = 0x4bc;
}

public static class CEnvTracer {
    public const ulong m_vecEnd = 0x4b0;
    public const ulong m_flDelay = 0x4bc;
}

public static class CEnvViewPunch {
    public const ulong m_flRadius = 0x4b0;
    public const ulong m_angViewPunch = 0x4b4;
}

public static class CEnvVolumetricFogController {
    public const ulong m_flScattering = 0x4b0;
    public const ulong m_flAnisotropy = 0x4b4;
    public const ulong m_flFadeSpeed = 0x4b8;
    public const ulong m_flDrawDistance = 0x4bc;
    public const ulong m_flFadeInStart = 0x4c0;
    public const ulong m_flFadeInEnd = 0x4c4;
    public const ulong m_flIndirectStrength = 0x4c8;
    public const ulong m_nIndirectTextureDimX = 0x4cc;
    public const ulong m_nIndirectTextureDimY = 0x4d0;
    public const ulong m_nIndirectTextureDimZ = 0x4d4;
    public const ulong m_vBoxMins = 0x4d8;
    public const ulong m_vBoxMaxs = 0x4e4;
    public const ulong m_bActive = 0x4f0;
    public const ulong m_flStartAnisoTime = 0x4f4;
    public const ulong m_flStartScatterTime = 0x4f8;
    public const ulong m_flStartDrawDistanceTime = 0x4fc;
    public const ulong m_flStartAnisotropy = 0x500;
    public const ulong m_flStartScattering = 0x504;
    public const ulong m_flStartDrawDistance = 0x508;
    public const ulong m_flDefaultAnisotropy = 0x50c;
    public const ulong m_flDefaultScattering = 0x510;
    public const ulong m_flDefaultDrawDistance = 0x514;
    public const ulong m_bStartDisabled = 0x518;
    public const ulong m_bEnableIndirect = 0x519;
    public const ulong m_bIsMaster = 0x51a;
    public const ulong m_hFogIndirectTexture = 0x520;
    public const ulong m_nForceRefreshCount = 0x528;
    public const ulong m_bFirstTime = 0x52c;
}

public static class CEnvVolumetricFogVolume {
    public const ulong m_bActive = 0x4b0;
    public const ulong m_vBoxMins = 0x4b4;
    public const ulong m_vBoxMaxs = 0x4c0;
    public const ulong m_bStartDisabled = 0x4cc;
    public const ulong m_flStrength = 0x4d0;
    public const ulong m_nFalloffShape = 0x4d4;
    public const ulong m_flFalloffExponent = 0x4d8;
}

public static class CEnvWind {
    public const ulong m_EnvWindShared = 0x4b0;
}

public static class CEnvWindShared {
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
    public const ulong m_OnGustStart = 0x70;
    public const ulong m_OnGustEnd = 0x98;
    public const ulong m_flVariationTime = 0xc0;
    public const ulong m_flSwayTime = 0xc4;
    public const ulong m_flSimTime = 0xc8;
    public const ulong m_flSwitchTime = 0xcc;
    public const ulong m_flAveWindSpeed = 0xd0;
    public const ulong m_bGusting = 0xd4;
    public const ulong m_flWindAngleVariation = 0xd8;
    public const ulong m_flWindSpeedVariation = 0xdc;
    public const ulong m_iEntIndex = 0xe0;
}

public static class CEnvWindShared_WindAveEvent_t {
    public const ulong m_flStartWindSpeed = 0x0;
    public const ulong m_flAveWindSpeed = 0x4;
}

public static class CEnvWindShared_WindVariationEvent_t {
    public const ulong m_flWindAngleVariation = 0x0;
    public const ulong m_flWindSpeedVariation = 0x4;
}

public static class CFilterAttributeInt {
    public const ulong m_sAttributeName = 0x508;
}

public static class CFilterClass {
    public const ulong m_iFilterClass = 0x508;
}

public static class CFilterContext {
    public const ulong m_iFilterContext = 0x508;
}

public static class CFilterEnemy {
    public const ulong m_iszEnemyName = 0x508;
    public const ulong m_flRadius = 0x510;
    public const ulong m_flOuterRadius = 0x514;
    public const ulong m_nMaxSquadmatesPerEnemy = 0x518;
    public const ulong m_iszPlayerName = 0x520;
}

public static class CFilterMassGreater {
    public const ulong m_fFilterMass = 0x508;
}

public static class CFilterModel {
    public const ulong m_iFilterModel = 0x508;
}

public static class CFilterMultiple {
    public const ulong m_nFilterType = 0x508;
    public const ulong m_iFilterName = 0x510;
    public const ulong m_hFilter = 0x560;
    public const ulong m_nFilterCount = 0x588;
}

public static class CFilterName {
    public const ulong m_iFilterName = 0x508;
}

public static class CFilterProximity {
    public const ulong m_flRadius = 0x508;
}

public static class CFire {
    public const ulong m_hEffect = 0x700;
    public const ulong m_hOwner = 0x704;
    public const ulong m_nFireType = 0x708;
    public const ulong m_flFuel = 0x70c;
    public const ulong m_flDamageTime = 0x710;
    public const ulong m_lastDamage = 0x714;
    public const ulong m_flFireSize = 0x718;
    public const ulong m_flLastNavUpdateTime = 0x71c;
    public const ulong m_flHeatLevel = 0x720;
    public const ulong m_flHeatAbsorb = 0x724;
    public const ulong m_flDamageScale = 0x728;
    public const ulong m_flMaxHeat = 0x72c;
    public const ulong m_flLastHeatLevel = 0x730;
    public const ulong m_flAttackTime = 0x734;
    public const ulong m_bEnabled = 0x738;
    public const ulong m_bStartDisabled = 0x739;
    public const ulong m_bDidActivate = 0x73a;
    public const ulong m_OnIgnited = 0x740;
    public const ulong m_OnExtinguished = 0x768;
}

public static class CFireSmoke {
    public const ulong m_nFlameModelIndex = 0x4c0;
    public const ulong m_nFlameFromAboveModelIndex = 0x4c4;
}

public static class CFiringModeFloat {
    public const ulong m_flValues = 0x0;
}

public static class CFiringModeInt {
    public const ulong m_nValues = 0x0;
}

public static class CFish {
    public const ulong m_pool = 0x930;
    public const ulong m_id = 0x934;
    public const ulong m_x = 0x938;
    public const ulong m_y = 0x93c;
    public const ulong m_z = 0x940;
    public const ulong m_angle = 0x944;
    public const ulong m_angleChange = 0x948;
    public const ulong m_forward = 0x94c;
    public const ulong m_perp = 0x958;
    public const ulong m_poolOrigin = 0x964;
    public const ulong m_waterLevel = 0x970;
    public const ulong m_speed = 0x974;
    public const ulong m_desiredSpeed = 0x978;
    public const ulong m_calmSpeed = 0x97c;
    public const ulong m_panicSpeed = 0x980;
    public const ulong m_avoidRange = 0x984;
    public const ulong m_turnTimer = 0x988;
    public const ulong m_turnClockwise = 0x9a0;
    public const ulong m_goTimer = 0x9a8;
    public const ulong m_moveTimer = 0x9c0;
    public const ulong m_panicTimer = 0x9d8;
    public const ulong m_disperseTimer = 0x9f0;
    public const ulong m_proximityTimer = 0xa08;
    public const ulong m_visible = 0xa20;
}

public static class CFishPool {
    public const ulong m_fishCount = 0x4c0;
    public const ulong m_maxRange = 0x4c4;
    public const ulong m_swimDepth = 0x4c8;
    public const ulong m_waterLevel = 0x4cc;
    public const ulong m_isDormant = 0x4d0;
    public const ulong m_fishes = 0x4d8;
    public const ulong m_visTimer = 0x4f0;
}

public static class CFists {
    public const ulong m_bPlayingUninterruptableAct = 0xe80;
    public const ulong m_nUninterruptableActivity = 0xe84;
    public const ulong m_bRestorePrevWep = 0xe88;
    public const ulong m_hWeaponBeforePrevious = 0xe8c;
    public const ulong m_hWeaponPrevious = 0xe90;
    public const ulong m_bDelayedHardPunchIncoming = 0xe94;
    public const ulong m_bDestroyAfterTaunt = 0xe95;
}

public static class CFlashbangProjectile {
    public const ulong m_flTimeToDetonate = 0xac8;
    public const ulong m_numOpponentsHit = 0xacc;
    public const ulong m_numTeammatesHit = 0xacd;
}

public static class CFogController {
    public const ulong m_fog = 0x4b0;
    public const ulong m_bUseAngles = 0x518;
    public const ulong m_iChangedVariables = 0x51c;
}

public static class CFogTrigger {
    public const ulong m_fog = 0x8a8;
}

public static class CFogVolume {
    public const ulong m_fogName = 0x700;
    public const ulong m_postProcessName = 0x708;
    public const ulong m_colorCorrectionName = 0x710;
    public const ulong m_bDisabled = 0x720;
    public const ulong m_bInFogVolumesList = 0x721;
}

public static class CFootstepControl {
    public const ulong m_source = 0x8a8;
    public const ulong m_destination = 0x8b0;
}

public static class CFuncBrush {
    public const ulong m_iSolidity = 0x700;
    public const ulong m_iDisabled = 0x704;
    public const ulong m_bSolidBsp = 0x708;
    public const ulong m_iszExcludedClass = 0x710;
    public const ulong m_bInvertExclusion = 0x718;
    public const ulong m_bScriptedMovement = 0x719;
}

public static class CFuncConveyor {
    public const ulong m_szConveyorModels = 0x700;
    public const ulong m_flTransitionDurationSeconds = 0x708;
    public const ulong m_angMoveEntitySpace = 0x70c;
    public const ulong m_vecMoveDirEntitySpace = 0x718;
    public const ulong m_flTargetSpeed = 0x724;
    public const ulong m_nTransitionStartTick = 0x728;
    public const ulong m_nTransitionDurationTicks = 0x72c;
    public const ulong m_flTransitionStartSpeed = 0x730;
    public const ulong m_hConveyorModels = 0x738;
}

public static class CFuncElectrifiedVolume {
    public const ulong m_EffectName = 0x720;
    public const ulong m_EffectInterpenetrateName = 0x728;
    public const ulong m_EffectZapName = 0x730;
    public const ulong m_iszEffectSource = 0x738;
}

public static class CFuncInteractionLayerClip {
    public const ulong m_bDisabled = 0x700;
    public const ulong m_iszInteractsAs = 0x708;
    public const ulong m_iszInteractsWith = 0x710;
}

public static class CFuncLadder {
    public const ulong m_vecLadderDir = 0x700;
    public const ulong m_Dismounts = 0x710;
    public const ulong m_vecLocalTop = 0x728;
    public const ulong m_vecPlayerMountPositionTop = 0x734;
    public const ulong m_vecPlayerMountPositionBottom = 0x740;
    public const ulong m_flAutoRideSpeed = 0x74c;
    public const ulong m_bDisabled = 0x750;
    public const ulong m_bFakeLadder = 0x751;
    public const ulong m_bHasSlack = 0x752;
    public const ulong m_surfacePropName = 0x758;
    public const ulong m_OnPlayerGotOnLadder = 0x760;
    public const ulong m_OnPlayerGotOffLadder = 0x788;
}

public static class CFuncMonitor {
    public const ulong m_targetCamera = 0x720;
    public const ulong m_nResolutionEnum = 0x728;
    public const ulong m_bRenderShadows = 0x72c;
    public const ulong m_bUseUniqueColorTarget = 0x72d;
    public const ulong m_brushModelName = 0x730;
    public const ulong m_hTargetCamera = 0x738;
    public const ulong m_bEnabled = 0x73c;
    public const ulong m_bDraw3DSkybox = 0x73d;
    public const ulong m_bStartEnabled = 0x73e;
}

public static class CFuncMoveLinear {
    public const ulong m_authoredPosition = 0x780;
    public const ulong m_angMoveEntitySpace = 0x784;
    public const ulong m_vecMoveDirParentSpace = 0x790;
    public const ulong m_soundStart = 0x7a0;
    public const ulong m_soundStop = 0x7a8;
    public const ulong m_currentSound = 0x7b0;
    public const ulong m_flBlockDamage = 0x7b8;
    public const ulong m_flStartPosition = 0x7bc;
    public const ulong m_flMoveDistance = 0x7c0;
    public const ulong m_OnFullyOpen = 0x7d0;
    public const ulong m_OnFullyClosed = 0x7f8;
    public const ulong m_bCreateMovableNavMesh = 0x820;
    public const ulong m_bCreateNavObstacle = 0x821;
}

public static class CFuncNavBlocker {
    public const ulong m_bDisabled = 0x700;
    public const ulong m_nBlockedTeamNumber = 0x704;
}

public static class CFuncNavObstruction {
    public const ulong m_bDisabled = 0x708;
}

public static class CFuncPlat {
    public const ulong m_sNoise = 0x7a8;
}

public static class CFuncPlatRot {
    public const ulong m_end = 0x7b0;
    public const ulong m_start = 0x7bc;
}

public static class CFuncRotating {
    public const ulong m_vecMoveAng = 0x700;
    public const ulong m_flFanFriction = 0x70c;
    public const ulong m_flAttenuation = 0x710;
    public const ulong m_flVolume = 0x714;
    public const ulong m_flTargetSpeed = 0x718;
    public const ulong m_flMaxSpeed = 0x71c;
    public const ulong m_flBlockDamage = 0x720;
    public const ulong m_flTimeScale = 0x724;
    public const ulong m_NoiseRunning = 0x728;
    public const ulong m_bReversed = 0x730;
    public const ulong m_angStart = 0x73c;
    public const ulong m_bStopAtStartPos = 0x748;
    public const ulong m_vecClientOrigin = 0x74c;
    public const ulong m_vecClientAngles = 0x758;
}

public static class CFuncShatterglass {
    public const ulong m_hGlassMaterialDamaged = 0x700;
    public const ulong m_hGlassMaterialUndamaged = 0x708;
    public const ulong m_hConcreteMaterialEdgeFace = 0x710;
    public const ulong m_hConcreteMaterialEdgeCaps = 0x718;
    public const ulong m_hConcreteMaterialEdgeFins = 0x720;
    public const ulong m_matPanelTransform = 0x728;
    public const ulong m_matPanelTransformWsTemp = 0x758;
    public const ulong m_vecShatterGlassShards = 0x788;
    public const ulong m_PanelSize = 0x7a0;
    public const ulong m_vecPanelNormalWs = 0x7a8;
    public const ulong m_nNumShardsEverCreated = 0x7b4;
    public const ulong m_flLastShatterSoundEmitTime = 0x7b8;
    public const ulong m_flLastCleanupTime = 0x7bc;
    public const ulong m_flInitAtTime = 0x7c0;
    public const ulong m_flGlassThickness = 0x7c4;
    public const ulong m_flSpawnInvulnerability = 0x7c8;
    public const ulong m_bBreakSilent = 0x7cc;
    public const ulong m_bBreakShardless = 0x7cd;
    public const ulong m_bBroken = 0x7ce;
    public const ulong m_bHasRateLimitedShards = 0x7cf;
    public const ulong m_bGlassNavIgnore = 0x7d0;
    public const ulong m_bGlassInFrame = 0x7d1;
    public const ulong m_bStartBroken = 0x7d2;
    public const ulong m_iInitialDamageType = 0x7d3;
    public const ulong m_szDamagePositioningEntityName01 = 0x7d8;
    public const ulong m_szDamagePositioningEntityName02 = 0x7e0;
    public const ulong m_szDamagePositioningEntityName03 = 0x7e8;
    public const ulong m_szDamagePositioningEntityName04 = 0x7f0;
    public const ulong m_vInitialDamagePositions = 0x7f8;
    public const ulong m_vExtraDamagePositions = 0x810;
    public const ulong m_OnBroken = 0x828;
    public const ulong m_iSurfaceType = 0x851;
}

public static class CFuncTankTrain {
    public const ulong m_OnDeath = 0x850;
}

public static class CFuncTimescale {
    public const ulong m_flDesiredTimescale = 0x4b0;
    public const ulong m_flAcceleration = 0x4b4;
    public const ulong m_flMinBlendRate = 0x4b8;
    public const ulong m_flBlendDeltaMultiplier = 0x4bc;
    public const ulong m_isStarted = 0x4c0;
}

public static class CFuncTrackChange {
    public const ulong m_trackTop = 0x7c8;
    public const ulong m_trackBottom = 0x7d0;
    public const ulong m_train = 0x7d8;
    public const ulong m_trackTopName = 0x7e0;
    public const ulong m_trackBottomName = 0x7e8;
    public const ulong m_trainName = 0x7f0;
    public const ulong m_code = 0x7f8;
    public const ulong m_targetState = 0x7fc;
    public const ulong m_use = 0x800;
}

public static class CFuncTrackTrain {
    public const ulong m_ppath = 0x700;
    public const ulong m_length = 0x704;
    public const ulong m_vPosPrev = 0x708;
    public const ulong m_angPrev = 0x714;
    public const ulong m_controlMins = 0x720;
    public const ulong m_controlMaxs = 0x72c;
    public const ulong m_lastBlockPos = 0x738;
    public const ulong m_lastBlockTick = 0x744;
    public const ulong m_flVolume = 0x748;
    public const ulong m_flBank = 0x74c;
    public const ulong m_oldSpeed = 0x750;
    public const ulong m_flBlockDamage = 0x754;
    public const ulong m_height = 0x758;
    public const ulong m_maxSpeed = 0x75c;
    public const ulong m_dir = 0x760;
    public const ulong m_iszSoundMove = 0x768;
    public const ulong m_iszSoundMovePing = 0x770;
    public const ulong m_iszSoundStart = 0x778;
    public const ulong m_iszSoundStop = 0x780;
    public const ulong m_strPathTarget = 0x788;
    public const ulong m_flMoveSoundMinDuration = 0x790;
    public const ulong m_flMoveSoundMaxDuration = 0x794;
    public const ulong m_flNextMoveSoundTime = 0x798;
    public const ulong m_flMoveSoundMinPitch = 0x79c;
    public const ulong m_flMoveSoundMaxPitch = 0x7a0;
    public const ulong m_eOrientationType = 0x7a4;
    public const ulong m_eVelocityType = 0x7a8;
    public const ulong m_OnStart = 0x7b8;
    public const ulong m_OnNext = 0x7e0;
    public const ulong m_OnArrivedAtDestinationNode = 0x808;
    public const ulong m_bManualSpeedChanges = 0x830;
    public const ulong m_flDesiredSpeed = 0x834;
    public const ulong m_flSpeedChangeTime = 0x838;
    public const ulong m_flAccelSpeed = 0x83c;
    public const ulong m_flDecelSpeed = 0x840;
    public const ulong m_bAccelToSpeed = 0x844;
    public const ulong m_flTimeScale = 0x848;
    public const ulong m_flNextMPSoundTime = 0x84c;
}

public static class CFuncTrain {
    public const ulong m_hCurrentTarget = 0x7a8;
    public const ulong m_activated = 0x7ac;
    public const ulong m_hEnemy = 0x7b0;
    public const ulong m_flBlockDamage = 0x7b4;
    public const ulong m_flNextBlockTime = 0x7b8;
    public const ulong m_iszLastTarget = 0x7c0;
}

public static class CFuncVPhysicsClip {
    public const ulong m_bDisabled = 0x700;
}

public static class CFuncWall {
    public const ulong m_nState = 0x700;
}

public static class CFuncWater {
    public const ulong m_BuoyancyHelper = 0x700;
}

public static class CGameChoreoServices {
    public const ulong m_hOwner = 0x8;
    public const ulong m_hScriptedSequence = 0xc;
    public const ulong m_scriptState = 0x10;
    public const ulong m_choreoState = 0x14;
    public const ulong m_flTimeStartedState = 0x18;
}

public static class CGameGibManager {
    public const ulong m_bAllowNewGibs = 0x4d0;
    public const ulong m_iCurrentMaxPieces = 0x4d4;
    public const ulong m_iMaxPieces = 0x4d8;
    public const ulong m_iLastFrame = 0x4dc;
}

public static class CGamePlayerEquip {
    public const ulong m_weaponNames = 0x710;
    public const ulong m_weaponCount = 0x810;
}

public static class CGamePlayerZone {
    public const ulong m_OnPlayerInZone = 0x708;
    public const ulong m_OnPlayerOutZone = 0x730;
    public const ulong m_PlayersInCount = 0x758;
    public const ulong m_PlayersOutCount = 0x780;
}

public static class CGameRules {
    public const ulong m_szQuestName = 0x8;
    public const ulong m_nQuestPhase = 0x88;
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

public static class CGameScriptedMoveData {
    public const ulong m_vDest = 0x0;
    public const ulong m_vSrc = 0xc;
    public const ulong m_angSrc = 0x18;
    public const ulong m_angDst = 0x24;
    public const ulong m_angCurrent = 0x30;
    public const ulong m_flAngRate = 0x3c;
    public const ulong m_flDuration = 0x40;
    public const ulong m_flStartTime = 0x44;
    public const ulong m_nPrevMoveType = 0x48;
    public const ulong m_bActive = 0x49;
    public const ulong m_bTeleportOnEnd = 0x4a;
    public const ulong m_bIgnoreRotation = 0x4b;
    public const ulong m_nType = 0x4c;
    public const ulong m_bSuccess = 0x50;
    public const ulong m_nForcedCrouchState = 0x54;
    public const ulong m_bIgnoreCollisions = 0x58;
}

public static class CGameText {
    public const ulong m_iszMessage = 0x710;
    public const ulong m_textParms = 0x718;
}

public static class CGameWeaponManager {
    public const ulong m_iszWeaponName = 0x4b0;
    public const ulong m_iMaxPieces = 0x4c0;
    public const ulong m_flAmmoMod = 0x4c4;
    public const ulong m_bExpectingWeapon = 0x4c8;
    public const ulong m_ManagedNonWeapons = 0x4d0;
}

public static class CGenericConstraint {
    public const ulong m_nLinearMotionX = 0x510;
    public const ulong m_nLinearMotionY = 0x514;
    public const ulong m_nLinearMotionZ = 0x518;
    public const ulong m_flLinearFrequencyX = 0x51c;
    public const ulong m_flLinearFrequencyY = 0x520;
    public const ulong m_flLinearFrequencyZ = 0x524;
    public const ulong m_flLinearDampingRatioX = 0x528;
    public const ulong m_flLinearDampingRatioY = 0x52c;
    public const ulong m_flLinearDampingRatioZ = 0x530;
    public const ulong m_flMaxLinearImpulseX = 0x534;
    public const ulong m_flMaxLinearImpulseY = 0x538;
    public const ulong m_flMaxLinearImpulseZ = 0x53c;
    public const ulong m_flBreakAfterTimeX = 0x540;
    public const ulong m_flBreakAfterTimeY = 0x544;
    public const ulong m_flBreakAfterTimeZ = 0x548;
    public const ulong m_flBreakAfterTimeStartTimeX = 0x54c;
    public const ulong m_flBreakAfterTimeStartTimeY = 0x550;
    public const ulong m_flBreakAfterTimeStartTimeZ = 0x554;
    public const ulong m_flBreakAfterTimeThresholdX = 0x558;
    public const ulong m_flBreakAfterTimeThresholdY = 0x55c;
    public const ulong m_flBreakAfterTimeThresholdZ = 0x560;
    public const ulong m_flNotifyForceX = 0x564;
    public const ulong m_flNotifyForceY = 0x568;
    public const ulong m_flNotifyForceZ = 0x56c;
    public const ulong m_flNotifyForceMinTimeX = 0x570;
    public const ulong m_flNotifyForceMinTimeY = 0x574;
    public const ulong m_flNotifyForceMinTimeZ = 0x578;
    public const ulong m_flNotifyForceLastTimeX = 0x57c;
    public const ulong m_flNotifyForceLastTimeY = 0x580;
    public const ulong m_flNotifyForceLastTimeZ = 0x584;
    public const ulong m_bAxisNotifiedX = 0x588;
    public const ulong m_bAxisNotifiedY = 0x589;
    public const ulong m_bAxisNotifiedZ = 0x58a;
    public const ulong m_nAngularMotionX = 0x58c;
    public const ulong m_nAngularMotionY = 0x590;
    public const ulong m_nAngularMotionZ = 0x594;
    public const ulong m_flAngularFrequencyX = 0x598;
    public const ulong m_flAngularFrequencyY = 0x59c;
    public const ulong m_flAngularFrequencyZ = 0x5a0;
    public const ulong m_flAngularDampingRatioX = 0x5a4;
    public const ulong m_flAngularDampingRatioY = 0x5a8;
    public const ulong m_flAngularDampingRatioZ = 0x5ac;
    public const ulong m_flMaxAngularImpulseX = 0x5b0;
    public const ulong m_flMaxAngularImpulseY = 0x5b4;
    public const ulong m_flMaxAngularImpulseZ = 0x5b8;
    public const ulong m_NotifyForceReachedX = 0x5c0;
    public const ulong m_NotifyForceReachedY = 0x5e8;
    public const ulong m_NotifyForceReachedZ = 0x610;
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

public static class CGradientFog {
    public const ulong m_hGradientFogTexture = 0x4b0;
    public const ulong m_flFogStartDistance = 0x4b8;
    public const ulong m_flFogEndDistance = 0x4bc;
    public const ulong m_bHeightFogEnabled = 0x4c0;
    public const ulong m_flFogStartHeight = 0x4c4;
    public const ulong m_flFogEndHeight = 0x4c8;
    public const ulong m_flFarZ = 0x4cc;
    public const ulong m_flFogMaxOpacity = 0x4d0;
    public const ulong m_flFogFalloffExponent = 0x4d4;
    public const ulong m_flFogVerticalExponent = 0x4d8;
    public const ulong m_fogColor = 0x4dc;
    public const ulong m_flFogStrength = 0x4e0;
    public const ulong m_flFadeTime = 0x4e4;
    public const ulong m_bStartDisabled = 0x4e8;
    public const ulong m_bIsEnabled = 0x4e9;
    public const ulong m_bGradientFogNeedsTextures = 0x4ea;
}

public static class CGrassBurn {
    public const ulong m_flGrassBurnClearTime = 0x4b0;
}

public static class CGunTarget {
    public const ulong m_on = 0x780;
    public const ulong m_hTargetEnt = 0x784;
    public const ulong m_OnDeath = 0x788;
}

public static class CHandleTest {
    public const ulong m_Handle = 0x4b0;
    public const ulong m_bSendHandle = 0x4b4;
}

public static class CHintMessage {
    public const ulong m_hintString = 0x8;
    public const ulong m_args = 0x10;
    public const ulong m_duration = 0x28;
}

public static class CHintMessageQueue {
    public const ulong m_tmMessageEnd = 0x8;
    public const ulong m_messages = 0x10;
    public const ulong m_pPlayerController = 0x28;
}

public static class CHitboxComponent {
    public const ulong m_bvDisabledHitGroups = 0x24;
}

public static class CHostage {
    public const ulong m_OnHostageBeginGrab = 0xa88;
    public const ulong m_OnFirstPickedUp = 0xab0;
    public const ulong m_OnDroppedNotRescued = 0xad8;
    public const ulong m_OnRescued = 0xb00;
    public const ulong m_entitySpottedState = 0xb28;
    public const ulong m_nSpotRules = 0xb40;
    public const ulong m_uiHostageSpawnExclusionGroupMask = 0xb44;
    public const ulong m_nHostageSpawnRandomFactor = 0xb48;
    public const ulong m_bRemove = 0xb4c;
    public const ulong m_vel = 0xb50;
    public const ulong m_isRescued = 0xb5c;
    public const ulong m_jumpedThisFrame = 0xb5d;
    public const ulong m_nHostageState = 0xb60;
    public const ulong m_leader = 0xb64;
    public const ulong m_lastLeader = 0xb68;
    public const ulong m_reuseTimer = 0xb70;
    public const ulong m_hasBeenUsed = 0xb88;
    public const ulong m_accel = 0xb8c;
    public const ulong m_isRunning = 0xb98;
    public const ulong m_isCrouching = 0xb99;
    public const ulong m_jumpTimer = 0xba0;
    public const ulong m_isWaitingForLeader = 0xbb8;
    public const ulong m_repathTimer = 0x2bc8;
    public const ulong m_inhibitDoorTimer = 0x2be0;
    public const ulong m_inhibitObstacleAvoidanceTimer = 0x2c70;
    public const ulong m_wiggleTimer = 0x2c90;
    public const ulong m_isAdjusted = 0x2cac;
    public const ulong m_bHandsHaveBeenCut = 0x2cad;
    public const ulong m_hHostageGrabber = 0x2cb0;
    public const ulong m_fLastGrabTime = 0x2cb4;
    public const ulong m_vecPositionWhenStartedDroppingToGround = 0x2cb8;
    public const ulong m_vecGrabbedPos = 0x2cc4;
    public const ulong m_flRescueStartTime = 0x2cd0;
    public const ulong m_flGrabSuccessTime = 0x2cd4;
    public const ulong m_flDropStartTime = 0x2cd8;
    public const ulong m_nApproachRewardPayouts = 0x2cdc;
    public const ulong m_nPickupEventCount = 0x2ce0;
    public const ulong m_vecSpawnGroundPos = 0x2ce4;
}

public static class CHostageExpresserShim {
    public const ulong m_pExpresser = 0xa70;
}

public static class CInButtonState {
    public const ulong m_pButtonStates = 0x8;
}

public static class CInferno {
    public const ulong m_fireXDelta = 0x710;
    public const ulong m_fireYDelta = 0x810;
    public const ulong m_fireZDelta = 0x910;
    public const ulong m_fireParentXDelta = 0xa10;
    public const ulong m_fireParentYDelta = 0xb10;
    public const ulong m_fireParentZDelta = 0xc10;
    public const ulong m_bFireIsBurning = 0xd10;
    public const ulong m_BurnNormal = 0xd50;
    public const ulong m_fireCount = 0x1050;
    public const ulong m_nInfernoType = 0x1054;
    public const ulong m_nFireEffectTickBegin = 0x1058;
    public const ulong m_nFireLifetime = 0x105c;
    public const ulong m_bInPostEffectTime = 0x1060;
    public const ulong m_nFiresExtinguishCount = 0x1064;
    public const ulong m_bWasCreatedInSmoke = 0x1068;
    public const ulong m_extent = 0x1270;
    public const ulong m_damageTimer = 0x1288;
    public const ulong m_damageRampTimer = 0x12a0;
    public const ulong m_splashVelocity = 0x12b8;
    public const ulong m_InitialSplashVelocity = 0x12c4;
    public const ulong m_startPos = 0x12d0;
    public const ulong m_vecOriginalSpawnLocation = 0x12dc;
    public const ulong m_activeTimer = 0x12e8;
    public const ulong m_fireSpawnOffset = 0x12f8;
    public const ulong m_nMaxFlames = 0x12fc;
    public const ulong m_BookkeepingTimer = 0x1300;
    public const ulong m_NextSpreadTimer = 0x1318;
    public const ulong m_nSourceItemDefIndex = 0x1330;
}

public static class CInfoDynamicShadowHint {
    public const ulong m_bDisabled = 0x4b0;
    public const ulong m_flRange = 0x4b4;
    public const ulong m_nImportance = 0x4b8;
    public const ulong m_nLightChoice = 0x4bc;
    public const ulong m_hLight = 0x4c0;
}

public static class CInfoDynamicShadowHintBox {
    public const ulong m_vBoxMins = 0x4c8;
    public const ulong m_vBoxMaxs = 0x4d4;
}

public static class CInfoGameEventProxy {
    public const ulong m_iszEventName = 0x4b0;
    public const ulong m_flRange = 0x4b8;
}

public static class CInfoMapRegion {
    public const ulong m_flRadius = 0x4b0;
    public const ulong m_strLocToken = 0x4b8;
    public const ulong m_szLocToken = 0x4c0;
}

public static class CInfoOffscreenPanoramaTexture {
    public const ulong m_bDisabled = 0x4b0;
    public const ulong m_nResolutionX = 0x4b4;
    public const ulong m_nResolutionY = 0x4b8;
    public const ulong m_szLayoutFileName = 0x4c0;
    public const ulong m_RenderAttrName = 0x4c8;
    public const ulong m_TargetEntities = 0x4d0;
    public const ulong m_nTargetChangeCount = 0x4e8;
    public const ulong m_vecCSSClasses = 0x4f0;
    public const ulong m_szTargetsName = 0x508;
    public const ulong m_AdditionalTargetEntities = 0x510;
}

public static class CInfoPlayerStart {
    public const ulong m_bDisabled = 0x4b0;
}

public static class CInfoSpawnGroupLoadUnload {
    public const ulong m_OnSpawnGroupLoadStarted = 0x4b0;
    public const ulong m_OnSpawnGroupLoadFinished = 0x4d8;
    public const ulong m_OnSpawnGroupUnloadStarted = 0x500;
    public const ulong m_OnSpawnGroupUnloadFinished = 0x528;
    public const ulong m_iszSpawnGroupName = 0x550;
    public const ulong m_iszSpawnGroupFilterName = 0x558;
    public const ulong m_iszLandmarkName = 0x560;
    public const ulong m_sFixedSpawnGroupName = 0x568;
    public const ulong m_flTimeoutInterval = 0x570;
    public const ulong m_bStreamingStarted = 0x574;
    public const ulong m_bUnloadingStarted = 0x575;
}

public static class CInfoVisibilityBox {
    public const ulong m_nMode = 0x4b4;
    public const ulong m_vBoxSize = 0x4b8;
    public const ulong m_bEnabled = 0x4c4;
}

public static class CInfoWorldLayer {
    public const ulong m_pOutputOnEntitiesSpawned = 0x4b0;
    public const ulong m_worldName = 0x4d8;
    public const ulong m_layerName = 0x4e0;
    public const ulong m_bWorldLayerVisible = 0x4e8;
    public const ulong m_bEntitiesSpawned = 0x4e9;
    public const ulong m_bCreateAsChildSpawnGroup = 0x4ea;
    public const ulong m_hLayerSpawnGroup = 0x4ec;
}

public static class CInstancedSceneEntity {
    public const ulong m_hOwner = 0xa08;
    public const ulong m_bHadOwner = 0xa0c;
    public const ulong m_flPostSpeakDelay = 0xa10;
    public const ulong m_flPreDelay = 0xa14;
    public const ulong m_bIsBackground = 0xa18;
}

public static class CInstructorEventEntity {
    public const ulong m_iszName = 0x4b0;
    public const ulong m_iszHintTargetEntity = 0x4b8;
    public const ulong m_hTargetPlayer = 0x4c0;
}

public static class CIronSightController {
    public const ulong m_bIronSightAvailable = 0x8;
    public const ulong m_flIronSightAmount = 0xc;
    public const ulong m_flIronSightAmountGained = 0x10;
    public const ulong m_flIronSightAmountBiased = 0x14;
}

public static class CItem {
    public const ulong m_OnPlayerTouch = 0x938;
    public const ulong m_bActivateWhenAtRest = 0x960;
    public const ulong m_OnCacheInteraction = 0x968;
    public const ulong m_OnPlayerPickup = 0x990;
    public const ulong m_OnGlovePulled = 0x9b8;
    public const ulong m_vOriginalSpawnOrigin = 0x9e0;
    public const ulong m_vOriginalSpawnAngles = 0x9ec;
    public const ulong m_bPhysStartAsleep = 0x9f8;
}

public static class CItemCash {
    public const ulong m_bufCashOriginalSource = 0xa08;
    public const ulong m_nBundleSize = 0xa48;
    public const ulong m_flAllowPickupTime = 0xa50;
}

public static class CItemDefuser {
    public const ulong m_entitySpottedState = 0xa08;
    public const ulong m_nSpotRules = 0xa20;
}

public static class CItemDogtags {
    public const ulong m_OwningPlayer = 0xa08;
    public const ulong m_KillingPlayer = 0xa0c;
}

public static class CItemGeneric {
    public const ulong m_bHasTriggerRadius = 0xa10;
    public const ulong m_bHasPickupRadius = 0xa11;
    public const ulong m_flPickupRadiusSqr = 0xa14;
    public const ulong m_flTriggerRadiusSqr = 0xa18;
    public const ulong m_flLastPickupCheck = 0xa1c;
    public const ulong m_bPlayerCounterListenerAdded = 0xa20;
    public const ulong m_bPlayerInTriggerRadius = 0xa21;
    public const ulong m_hSpawnParticleEffect = 0xa28;
    public const ulong m_pAmbientSoundEffect = 0xa30;
    public const ulong m_bAutoStartAmbientSound = 0xa38;
    public const ulong m_pSpawnScriptFunction = 0xa40;
    public const ulong m_hPickupParticleEffect = 0xa48;
    public const ulong m_pPickupSoundEffect = 0xa50;
    public const ulong m_pPickupScriptFunction = 0xa58;
    public const ulong m_hTimeoutParticleEffect = 0xa60;
    public const ulong m_pTimeoutSoundEffect = 0xa68;
    public const ulong m_pTimeoutScriptFunction = 0xa70;
    public const ulong m_pPickupFilterName = 0xa78;
    public const ulong m_hPickupFilter = 0xa80;
    public const ulong m_OnPickup = 0xa88;
    public const ulong m_OnTimeout = 0xab0;
    public const ulong m_OnTriggerStartTouch = 0xad8;
    public const ulong m_OnTriggerTouch = 0xb00;
    public const ulong m_OnTriggerEndTouch = 0xb28;
    public const ulong m_pAllowPickupScriptFunction = 0xb50;
    public const ulong m_flPickupRadius = 0xb58;
    public const ulong m_flTriggerRadius = 0xb5c;
    public const ulong m_pTriggerSoundEffect = 0xb60;
    public const ulong m_bGlowWhenInTrigger = 0xb68;
    public const ulong m_glowColor = 0xb69;
    public const ulong m_bUseable = 0xb6d;
    public const ulong m_hTriggerHelper = 0xb70;
}

public static class CItemGenericTriggerHelper {
    public const ulong m_hParentItem = 0x700;
}

public static class CKeepUpright {
    public const ulong m_worldGoalAxis = 0x4b8;
    public const ulong m_localTestAxis = 0x4c4;
    public const ulong m_nameAttach = 0x4d8;
    public const ulong m_attachedObject = 0x4e0;
    public const ulong m_angularLimit = 0x4e4;
    public const ulong m_bActive = 0x4e8;
    public const ulong m_bDampAllRotation = 0x4e9;
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
    public const ulong m_bPvsModifyEntity = 0x1c8;
}

public static class CLightEntity {
    public const ulong m_CLightComponent = 0x700;
}

public static class CLightGlow {
    public const ulong m_nHorizontalSize = 0x700;
    public const ulong m_nVerticalSize = 0x704;
    public const ulong m_nMinDist = 0x708;
    public const ulong m_nMaxDist = 0x70c;
    public const ulong m_nOuterMaxDist = 0x710;
    public const ulong m_flGlowProxySize = 0x714;
    public const ulong m_flHDRColorScale = 0x718;
}

public static class CLogicAchievement {
    public const ulong m_bDisabled = 0x4b0;
    public const ulong m_iszAchievementEventID = 0x4b8;
    public const ulong m_OnFired = 0x4c0;
}

public static class CLogicActiveAutosave {
    public const ulong m_TriggerHitPoints = 0x4c0;
    public const ulong m_flTimeToTrigger = 0x4c4;
    public const ulong m_flStartTime = 0x4c8;
    public const ulong m_flDangerousTime = 0x4cc;
}

public static class CLogicAuto {
    public const ulong m_OnMapSpawn = 0x4b0;
    public const ulong m_OnDemoMapSpawn = 0x4d8;
    public const ulong m_OnNewGame = 0x500;
    public const ulong m_OnLoadGame = 0x528;
    public const ulong m_OnMapTransition = 0x550;
    public const ulong m_OnBackgroundMap = 0x578;
    public const ulong m_OnMultiNewMap = 0x5a0;
    public const ulong m_OnMultiNewRound = 0x5c8;
    public const ulong m_OnVREnabled = 0x5f0;
    public const ulong m_OnVRNotEnabled = 0x618;
    public const ulong m_globalstate = 0x640;
}

public static class CLogicAutosave {
    public const ulong m_bForceNewLevelUnit = 0x4b0;
    public const ulong m_minHitPoints = 0x4b4;
    public const ulong m_minHitPointsToCommit = 0x4b8;
}

public static class CLogicBranch {
    public const ulong m_bInValue = 0x4b0;
    public const ulong m_Listeners = 0x4b8;
    public const ulong m_OnTrue = 0x4d0;
    public const ulong m_OnFalse = 0x4f8;
}

public static class CLogicBranchList {
    public const ulong m_nLogicBranchNames = 0x4b0;
    public const ulong m_LogicBranchList = 0x530;
    public const ulong m_eLastState = 0x548;
    public const ulong m_OnAllTrue = 0x550;
    public const ulong m_OnAllFalse = 0x578;
    public const ulong m_OnMixed = 0x5a0;
}

public static class CLogicCase {
    public const ulong m_nCase = 0x4b0;
    public const ulong m_nShuffleCases = 0x5b0;
    public const ulong m_nLastShuffleCase = 0x5b4;
    public const ulong m_uchShuffleCaseMap = 0x5b8;
    public const ulong m_OnCase = 0x5d8;
    public const ulong m_OnDefault = 0xad8;
}

public static class CLogicCollisionPair {
    public const ulong m_nameAttach1 = 0x4b0;
    public const ulong m_nameAttach2 = 0x4b8;
    public const ulong m_disabled = 0x4c0;
    public const ulong m_succeeded = 0x4c1;
}

public static class CLogicCompare {
    public const ulong m_flInValue = 0x4b0;
    public const ulong m_flCompareValue = 0x4b4;
    public const ulong m_OnLessThan = 0x4b8;
    public const ulong m_OnEqualTo = 0x4e0;
    public const ulong m_OnNotEqualTo = 0x508;
    public const ulong m_OnGreaterThan = 0x530;
}

public static class CLogicDistanceAutosave {
    public const ulong m_iszTargetEntity = 0x4b0;
    public const ulong m_flDistanceToPlayer = 0x4b8;
    public const ulong m_bForceNewLevelUnit = 0x4bc;
    public const ulong m_bCheckCough = 0x4bd;
    public const ulong m_bThinkDangerous = 0x4be;
    public const ulong m_flDangerousTime = 0x4c0;
}

public static class CLogicDistanceCheck {
    public const ulong m_iszEntityA = 0x4b0;
    public const ulong m_iszEntityB = 0x4b8;
    public const ulong m_flZone1Distance = 0x4c0;
    public const ulong m_flZone2Distance = 0x4c4;
    public const ulong m_InZone1 = 0x4c8;
    public const ulong m_InZone2 = 0x4f0;
    public const ulong m_InZone3 = 0x518;
}

public static class CLogicEventListener {
    public const ulong m_iszEventName = 0x4c0;
    public const ulong m_bIsEnabled = 0x4c8;
    public const ulong m_nTeam = 0x4cc;
    public const ulong m_bFetchEventData = 0x4d0;
    public const ulong m_OnEventFired = 0x4d8;
}

public static class CLogicGameEvent {
    public const ulong m_iszEventName = 0x4b0;
}

public static class CLogicGameEventListener {
    public const ulong m_OnEventFired = 0x4c0;
    public const ulong m_iszGameEventName = 0x4e8;
    public const ulong m_iszGameEventItem = 0x4f0;
    public const ulong m_bEnabled = 0x4f8;
    public const ulong m_bStartDisabled = 0x4f9;
}

public static class CLogicLineToEntity {
    public const ulong m_Line = 0x4b0;
    public const ulong m_SourceName = 0x4d8;
    public const ulong m_StartEntity = 0x4e0;
    public const ulong m_EndEntity = 0x4e4;
}

public static class CLogicMeasureMovement {
    public const ulong m_strMeasureTarget = 0x4b0;
    public const ulong m_strMeasureReference = 0x4b8;
    public const ulong m_strTargetReference = 0x4c0;
    public const ulong m_hMeasureTarget = 0x4c8;
    public const ulong m_hMeasureReference = 0x4cc;
    public const ulong m_hTarget = 0x4d0;
    public const ulong m_hTargetReference = 0x4d4;
    public const ulong m_flScale = 0x4d8;
    public const ulong m_nMeasureType = 0x4dc;
}

public static class CLogicNPCCounter {
    public const ulong m_OnMinCountAll = 0x4b0;
    public const ulong m_OnMaxCountAll = 0x4d8;
    public const ulong m_OnFactorAll = 0x500;
    public const ulong m_OnMinPlayerDistAll = 0x528;
    public const ulong m_OnMinCount_1 = 0x550;
    public const ulong m_OnMaxCount_1 = 0x578;
    public const ulong m_OnFactor_1 = 0x5a0;
    public const ulong m_OnMinPlayerDist_1 = 0x5c8;
    public const ulong m_OnMinCount_2 = 0x5f0;
    public const ulong m_OnMaxCount_2 = 0x618;
    public const ulong m_OnFactor_2 = 0x640;
    public const ulong m_OnMinPlayerDist_2 = 0x668;
    public const ulong m_OnMinCount_3 = 0x690;
    public const ulong m_OnMaxCount_3 = 0x6b8;
    public const ulong m_OnFactor_3 = 0x6e0;
    public const ulong m_OnMinPlayerDist_3 = 0x708;
    public const ulong m_hSource = 0x730;
    public const ulong m_iszSourceEntityName = 0x738;
    public const ulong m_flDistanceMax = 0x740;
    public const ulong m_bDisabled = 0x744;
    public const ulong m_nMinCountAll = 0x748;
    public const ulong m_nMaxCountAll = 0x74c;
    public const ulong m_nMinFactorAll = 0x750;
    public const ulong m_nMaxFactorAll = 0x754;
    public const ulong m_iszNPCClassname_1 = 0x760;
    public const ulong m_nNPCState_1 = 0x768;
    public const ulong m_bInvertState_1 = 0x76c;
    public const ulong m_nMinCount_1 = 0x770;
    public const ulong m_nMaxCount_1 = 0x774;
    public const ulong m_nMinFactor_1 = 0x778;
    public const ulong m_nMaxFactor_1 = 0x77c;
    public const ulong m_flDefaultDist_1 = 0x784;
    public const ulong m_iszNPCClassname_2 = 0x788;
    public const ulong m_nNPCState_2 = 0x790;
    public const ulong m_bInvertState_2 = 0x794;
    public const ulong m_nMinCount_2 = 0x798;
    public const ulong m_nMaxCount_2 = 0x79c;
    public const ulong m_nMinFactor_2 = 0x7a0;
    public const ulong m_nMaxFactor_2 = 0x7a4;
    public const ulong m_flDefaultDist_2 = 0x7ac;
    public const ulong m_iszNPCClassname_3 = 0x7b0;
    public const ulong m_nNPCState_3 = 0x7b8;
    public const ulong m_bInvertState_3 = 0x7bc;
    public const ulong m_nMinCount_3 = 0x7c0;
    public const ulong m_nMaxCount_3 = 0x7c4;
    public const ulong m_nMinFactor_3 = 0x7c8;
    public const ulong m_nMaxFactor_3 = 0x7cc;
    public const ulong m_flDefaultDist_3 = 0x7d4;
}

public static class CLogicNPCCounterAABB {
    public const ulong m_vDistanceOuterMins = 0x7f0;
    public const ulong m_vDistanceOuterMaxs = 0x7fc;
    public const ulong m_vOuterMins = 0x808;
    public const ulong m_vOuterMaxs = 0x814;
}

public static class CLogicNavigation {
    public const ulong m_isOn = 0x4b8;
    public const ulong m_navProperty = 0x4bc;
}

public static class CLogicPlayerProxy {
    public const ulong m_hPlayer = 0x4b0;
    public const ulong m_PlayerHasAmmo = 0x4b8;
    public const ulong m_PlayerHasNoAmmo = 0x4e0;
    public const ulong m_PlayerDied = 0x508;
    public const ulong m_RequestedPlayerHealth = 0x530;
}

public static class CLogicRelay {
    public const ulong m_OnTrigger = 0x4b0;
    public const ulong m_OnSpawn = 0x4d8;
    public const ulong m_bDisabled = 0x500;
    public const ulong m_bWaitForRefire = 0x501;
    public const ulong m_bTriggerOnce = 0x502;
    public const ulong m_bFastRetrigger = 0x503;
    public const ulong m_bPassthoughCaller = 0x504;
}

public static class CMapInfo {
    public const ulong m_iBuyingStatus = 0x4b0;
    public const ulong m_flBombRadius = 0x4b4;
    public const ulong m_iPetPopulation = 0x4b8;
    public const ulong m_bUseNormalSpawnsForDM = 0x4bc;
    public const ulong m_bDisableAutoGeneratedDMSpawns = 0x4bd;
    public const ulong m_flBotMaxVisionDistance = 0x4c0;
    public const ulong m_iHostageCount = 0x4c4;
    public const ulong m_bFadePlayerVisibilityFarZ = 0x4c8;
}

public static class CMapVetoPickController {
    public const ulong m_bPlayedIntroVcd = 0x4b0;
    public const ulong m_bNeedToPlayFiveSecondsRemaining = 0x4b1;
    public const ulong m_dblPreMatchDraftSequenceTime = 0x4d0;
    public const ulong m_bPreMatchDraftStateChanged = 0x4d8;
    public const ulong m_nDraftType = 0x4dc;
    public const ulong m_nTeamWinningCoinToss = 0x4e0;
    public const ulong m_nTeamWithFirstChoice = 0x4e4;
    public const ulong m_nVoteMapIdsList = 0x5e4;
    public const ulong m_nAccountIDs = 0x600;
    public const ulong m_nMapId0 = 0x700;
    public const ulong m_nMapId1 = 0x800;
    public const ulong m_nMapId2 = 0x900;
    public const ulong m_nMapId3 = 0xa00;
    public const ulong m_nMapId4 = 0xb00;
    public const ulong m_nMapId5 = 0xc00;
    public const ulong m_nStartingSide0 = 0xd00;
    public const ulong m_nCurrentPhase = 0xe00;
    public const ulong m_nPhaseStartTick = 0xe04;
    public const ulong m_nPhaseDurationTicks = 0xe08;
    public const ulong m_OnMapVetoed = 0xe10;
    public const ulong m_OnMapPicked = 0xe38;
    public const ulong m_OnSidesPicked = 0xe60;
    public const ulong m_OnNewPhaseStarted = 0xe88;
    public const ulong m_OnLevelTransition = 0xeb0;
}

public static class CMarkupVolume {
    public const ulong m_bEnabled = 0x700;
}

public static class CMarkupVolumeTagged {
    public const ulong m_bIsGroup = 0x738;
    public const ulong m_bGroupByPrefab = 0x739;
    public const ulong m_bGroupByVolume = 0x73a;
    public const ulong m_bGroupOtherGroups = 0x73b;
    public const ulong m_bIsInGroup = 0x73c;
}

public static class CMarkupVolumeTagged_NavGame {
    public const ulong m_bFloodFillAttribute = 0x758;
}

public static class CMarkupVolumeWithRef {
    public const ulong m_bUseRef = 0x740;
    public const ulong m_vRefPos = 0x744;
    public const ulong m_flRefDot = 0x750;
}

public static class CMathColorBlend {
    public const ulong m_flInMin = 0x4b0;
    public const ulong m_flInMax = 0x4b4;
    public const ulong m_OutColor1 = 0x4b8;
    public const ulong m_OutColor2 = 0x4bc;
    public const ulong m_OutValue = 0x4c0;
}

public static class CMathCounter {
    public const ulong m_flMin = 0x4b0;
    public const ulong m_flMax = 0x4b4;
    public const ulong m_bHitMin = 0x4b8;
    public const ulong m_bHitMax = 0x4b9;
    public const ulong m_bDisabled = 0x4ba;
    public const ulong m_OutValue = 0x4c0;
    public const ulong m_OnGetValue = 0x4e8;
    public const ulong m_OnHitMin = 0x510;
    public const ulong m_OnHitMax = 0x538;
    public const ulong m_OnChangedFromMin = 0x560;
    public const ulong m_OnChangedFromMax = 0x588;
}

public static class CMathRemap {
    public const ulong m_flInMin = 0x4b0;
    public const ulong m_flInMax = 0x4b4;
    public const ulong m_flOut1 = 0x4b8;
    public const ulong m_flOut2 = 0x4bc;
    public const ulong m_flOldInValue = 0x4c0;
    public const ulong m_bEnabled = 0x4c4;
    public const ulong m_OutValue = 0x4c8;
    public const ulong m_OnRoseAboveMin = 0x4f0;
    public const ulong m_OnRoseAboveMax = 0x518;
    public const ulong m_OnFellBelowMin = 0x540;
    public const ulong m_OnFellBelowMax = 0x568;
}

public static class CMelee {
    public const ulong m_flThrowAt = 0xe80;
    public const ulong m_hThrower = 0xe84;
    public const ulong m_bDidThrowDamage = 0xe88;
}

public static class CMessage {
    public const ulong m_iszMessage = 0x4b0;
    public const ulong m_MessageVolume = 0x4b8;
    public const ulong m_MessageAttenuation = 0x4bc;
    public const ulong m_Radius = 0x4c0;
    public const ulong m_sNoise = 0x4c8;
    public const ulong m_OnShowMessage = 0x4d0;
}

public static class CMessageEntity {
    public const ulong m_radius = 0x4b0;
    public const ulong m_messageText = 0x4b8;
    public const ulong m_drawText = 0x4c0;
    public const ulong m_bDeveloperOnly = 0x4c1;
    public const ulong m_bEnabled = 0x4c2;
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

public static class CMolotovProjectile {
    public const ulong m_bIsIncGrenade = 0xac8;
    public const ulong m_bDetonated = 0xad4;
    public const ulong m_stillTimer = 0xad8;
    public const ulong m_bHasBouncedOffPlayer = 0xbb8;
}

public static class CMomentaryRotButton {
    public const ulong m_Position = 0x8c8;
    public const ulong m_OnUnpressed = 0x8f0;
    public const ulong m_OnFullyOpen = 0x918;
    public const ulong m_OnFullyClosed = 0x940;
    public const ulong m_OnReachedPosition = 0x968;
    public const ulong m_lastUsed = 0x990;
    public const ulong m_start = 0x994;
    public const ulong m_end = 0x9a0;
    public const ulong m_IdealYaw = 0x9ac;
    public const ulong m_sNoise = 0x9b0;
    public const ulong m_bUpdateTarget = 0x9b8;
    public const ulong m_direction = 0x9bc;
    public const ulong m_returnSpeed = 0x9c0;
    public const ulong m_flStartPosition = 0x9c4;
}

public static class CMotorController {
    public const ulong m_speed = 0x8;
    public const ulong m_maxTorque = 0xc;
    public const ulong m_axis = 0x10;
    public const ulong m_inertiaFactor = 0x1c;
}

public static class CMultiLightProxy {
    public const ulong m_iszLightNameFilter = 0x4b0;
    public const ulong m_iszLightClassFilter = 0x4b8;
    public const ulong m_flLightRadiusFilter = 0x4c0;
    public const ulong m_flBrightnessDelta = 0x4c4;
    public const ulong m_bPerformScreenFade = 0x4c8;
    public const ulong m_flTargetBrightnessMultiplier = 0x4cc;
    public const ulong m_flCurrentBrightnessMultiplier = 0x4d0;
    public const ulong m_vecLights = 0x4d8;
}

public static class CMultiSource {
    public const ulong m_rgEntities = 0x4b0;
    public const ulong m_rgTriggered = 0x530;
    public const ulong m_OnTrigger = 0x5b0;
    public const ulong m_iTotal = 0x5d8;
    public const ulong m_globalstate = 0x5e0;
}

public static class CMultiplayer_Expresser {
    public const ulong m_bAllowMultipleScenes = 0x70;
}

public static class CNavHullPresetVData {
    public const ulong m_vecNavHulls = 0x0;
}

public static class CNavHullVData {
    public const ulong m_bAgentEnabled = 0x0;
    public const ulong m_agentRadius = 0x4;
    public const ulong m_agentHeight = 0x8;
    public const ulong m_agentShortHeightEnabled = 0xc;
    public const ulong m_agentShortHeight = 0x10;
    public const ulong m_agentMaxClimb = 0x14;
    public const ulong m_agentMaxSlope = 0x18;
    public const ulong m_agentMaxJumpDownDist = 0x1c;
    public const ulong m_agentMaxJumpHorizDistBase = 0x20;
    public const ulong m_agentMaxJumpUpDist = 0x24;
    public const ulong m_agentBorderErosion = 0x28;
}

public static class CNavLinkAnimgraphVar {
    public const ulong m_strAnimgraphVar = 0x0;
    public const ulong m_unAlignmentDegrees = 0x8;
}

public static class CNavLinkAreaEntity {
    public const ulong m_flWidth = 0x4b0;
    public const ulong m_vLocatorOffset = 0x4b4;
    public const ulong m_qLocatorAnglesOffset = 0x4c0;
    public const ulong m_strMovementForward = 0x4d0;
    public const ulong m_strMovementReverse = 0x4d8;
    public const ulong m_nNavLinkIdForward = 0x4e0;
    public const ulong m_nNavLinkIdReverse = 0x4e4;
    public const ulong m_bEnabled = 0x4e8;
    public const ulong m_strFilterName = 0x4f0;
    public const ulong m_hFilter = 0x4f8;
    public const ulong m_OnNavLinkStart = 0x500;
    public const ulong m_OnNavLinkFinish = 0x528;
    public const ulong m_bIsTerminus = 0x550;
}

public static class CNavLinkMovementVData {
    public const ulong m_bIsInterpolated = 0x0;
    public const ulong m_unRecommendedDistance = 0x4;
    public const ulong m_vecAnimgraphVars = 0x8;
}

public static class CNavSpaceInfo {
    public const ulong m_bCreateFlightSpace = 0x4b0;
}

public static class CNavVolumeBreadthFirstSearch {
    public const ulong m_vStartPos = 0xa0;
    public const ulong m_flSearchDist = 0xac;
}

public static class CNavVolumeSphere {
    public const ulong m_vCenter = 0x70;
    public const ulong m_flRadius = 0x7c;
}

public static class CNavVolumeSphericalShell {
    public const ulong m_flRadiusInner = 0x80;
}

public static class CNavVolumeVector {
    public const ulong m_bHasBeenPreFiltered = 0x78;
}

public static class CNetworkOriginCellCoordQuantizedVector {
    public const ulong m_cellX = 0x10;
    public const ulong m_cellY = 0x12;
    public const ulong m_cellZ = 0x14;
    public const ulong m_nOutsideWorld = 0x16;
    public const ulong m_vecX = 0x18;
    public const ulong m_vecY = 0x20;
    public const ulong m_vecZ = 0x28;
}

public static class CNetworkOriginQuantizedVector {
    public const ulong m_vecX = 0x10;
    public const ulong m_vecY = 0x18;
    public const ulong m_vecZ = 0x20;
}

public static class CNetworkTransmitComponent {
    public const ulong m_nTransmitStateOwnedCounter = 0x16c;
}

public static class CNetworkVelocityVector {
    public const ulong m_vecX = 0x10;
    public const ulong m_vecY = 0x18;
    public const ulong m_vecZ = 0x20;
}

public static class CNetworkViewOffsetVector {
    public const ulong m_vecX = 0x10;
    public const ulong m_vecY = 0x18;
    public const ulong m_vecZ = 0x20;
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

public static class COmniLight {
    public const ulong m_flInnerAngle = 0x938;
    public const ulong m_flOuterAngle = 0x93c;
    public const ulong m_bShowLight = 0x940;
}

public static class COrnamentProp {
    public const ulong m_initialOwner = 0xba8;
}

public static class CParadropChopper {
    public const ulong m_vecDropPos = 0x934;
    public const ulong m_flLastDistFromDrop = 0x940;
    public const ulong m_bDroppedParadrop = 0x944;
    public const ulong m_pSoundLoop = 0x948;
    public const ulong m_flSpawnTime = 0x950;
    public const ulong m_flFlightTime = 0x954;
    public const ulong m_bPlayerIsFinishedRappelling = 0x958;
    public const ulong m_flPlayerFinishedRappellingTime = 0x95c;
    public const ulong m_strFlyoverDropEvent = 0x960;
    public const ulong m_hCallingPlayer = 0x968;
    public const ulong m_bCalledByPlayer = 0x96c;
}

public static class CParticleSystem {
    public const ulong m_szSnapshotFileName = 0x700;
    public const ulong m_bActive = 0x900;
    public const ulong m_bFrozen = 0x901;
    public const ulong m_flFreezeTransitionDuration = 0x904;
    public const ulong m_nStopType = 0x908;
    public const ulong m_bAnimateDuringGameplayPause = 0x90c;
    public const ulong m_iEffectIndex = 0x910;
    public const ulong m_flStartTime = 0x918;
    public const ulong m_flPreSimTime = 0x91c;
    public const ulong m_vServerControlPoints = 0x920;
    public const ulong m_iServerControlPointAssignments = 0x950;
    public const ulong m_hControlPointEnts = 0x954;
    public const ulong m_bNoSave = 0xa54;
    public const ulong m_bNoFreeze = 0xa55;
    public const ulong m_bNoRamp = 0xa56;
    public const ulong m_bStartActive = 0xa57;
    public const ulong m_iszEffectName = 0xa58;
    public const ulong m_iszControlPointNames = 0xa60;
    public const ulong m_nDataCP = 0xc60;
    public const ulong m_vecDataCPValue = 0xc64;
    public const ulong m_nTintCP = 0xc70;
    public const ulong m_clrTint = 0xc74;
}

public static class CPathCorner {
    public const ulong m_flWait = 0x4b0;
    public const ulong m_flRadius = 0x4b4;
    public const ulong m_OnPass = 0x4b8;
}

public static class CPathKeyFrame {
    public const ulong m_Origin = 0x4b0;
    public const ulong m_Angles = 0x4bc;
    public const ulong m_qAngle = 0x4d0;
    public const ulong m_iNextKey = 0x4e0;
    public const ulong m_flNextTime = 0x4e8;
    public const ulong m_pNextKey = 0x4f0;
    public const ulong m_pPrevKey = 0x4f8;
    public const ulong m_flSpeed = 0x500;
}

public static class CPathParticleRope {
    public const ulong m_bStartActive = 0x4b0;
    public const ulong m_flMaxSimulationTime = 0x4b4;
    public const ulong m_iszEffectName = 0x4b8;
    public const ulong m_PathNodes_Name = 0x4c0;
    public const ulong m_flParticleSpacing = 0x4d8;
    public const ulong m_flSlack = 0x4dc;
    public const ulong m_flRadius = 0x4e0;
    public const ulong m_ColorTint = 0x4e4;
    public const ulong m_nEffectState = 0x4e8;
    public const ulong m_iEffectIndex = 0x4f0;
    public const ulong m_PathNodes_Position = 0x4f8;
    public const ulong m_PathNodes_TangentIn = 0x510;
    public const ulong m_PathNodes_TangentOut = 0x528;
    public const ulong m_PathNodes_Color = 0x540;
    public const ulong m_PathNodes_PinEnabled = 0x558;
    public const ulong m_PathNodes_RadiusScale = 0x570;
}

public static class CPathTrack {
    public const ulong m_pnext = 0x4b0;
    public const ulong m_pprevious = 0x4b8;
    public const ulong m_paltpath = 0x4c0;
    public const ulong m_flRadius = 0x4c8;
    public const ulong m_length = 0x4cc;
    public const ulong m_altName = 0x4d0;
    public const ulong m_nIterVal = 0x4d8;
    public const ulong m_eOrientationType = 0x4dc;
    public const ulong m_OnPass = 0x4e0;
}

public static class CPhysBallSocket {
    public const ulong m_flFriction = 0x508;
    public const ulong m_bEnableSwingLimit = 0x50c;
    public const ulong m_flSwingLimit = 0x510;
    public const ulong m_bEnableTwistLimit = 0x514;
    public const ulong m_flMinTwistAngle = 0x518;
    public const ulong m_flMaxTwistAngle = 0x51c;
}

public static class CPhysBox {
    public const ulong m_damageType = 0x7c0;
    public const ulong m_massScale = 0x7c4;
    public const ulong m_damageToEnableMotion = 0x7c8;
    public const ulong m_flForceToEnableMotion = 0x7cc;
    public const ulong m_angPreferredCarryAngles = 0x7d0;
    public const ulong m_bNotSolidToWorld = 0x7dc;
    public const ulong m_bEnableUseOutput = 0x7dd;
    public const ulong m_iExploitableByPlayer = 0x7e0;
    public const ulong m_flTouchOutputPerEntityDelay = 0x7e4;
    public const ulong m_OnDamaged = 0x7e8;
    public const ulong m_OnAwakened = 0x810;
    public const ulong m_OnMotionEnabled = 0x838;
    public const ulong m_OnPlayerUse = 0x860;
    public const ulong m_OnStartTouch = 0x888;
    public const ulong m_hCarryingPlayer = 0x8b0;
}

public static class CPhysConstraint {
    public const ulong m_nameAttach1 = 0x4b8;
    public const ulong m_nameAttach2 = 0x4c0;
    public const ulong m_breakSound = 0x4c8;
    public const ulong m_forceLimit = 0x4d0;
    public const ulong m_torqueLimit = 0x4d4;
    public const ulong m_teleportTick = 0x4d8;
    public const ulong m_minTeleportDistance = 0x4dc;
    public const ulong m_OnBreak = 0x4e0;
}

public static class CPhysExplosion {
    public const ulong m_bExplodeOnSpawn = 0x4b0;
    public const ulong m_flMagnitude = 0x4b4;
    public const ulong m_flDamage = 0x4b8;
    public const ulong m_radius = 0x4bc;
    public const ulong m_targetEntityName = 0x4c0;
    public const ulong m_flInnerRadius = 0x4c8;
    public const ulong m_flPushScale = 0x4cc;
    public const ulong m_bConvertToDebrisWhenPossible = 0x4d0;
    public const ulong m_OnPushedPlayer = 0x4d8;
}

public static class CPhysFixed {
    public const ulong m_flLinearFrequency = 0x508;
    public const ulong m_flLinearDampingRatio = 0x50c;
    public const ulong m_flAngularFrequency = 0x510;
    public const ulong m_flAngularDampingRatio = 0x514;
    public const ulong m_bEnableLinearConstraint = 0x518;
    public const ulong m_bEnableAngularConstraint = 0x519;
}

public static class CPhysForce {
    public const ulong m_nameAttach = 0x4b8;
    public const ulong m_force = 0x4c0;
    public const ulong m_forceTime = 0x4c4;
    public const ulong m_attachedObject = 0x4c8;
    public const ulong m_wasRestored = 0x4cc;
    public const ulong m_integrator = 0x4d0;
}

public static class CPhysHinge {
    public const ulong m_soundInfo = 0x510;
    public const ulong m_NotifyMinLimitReached = 0x598;
    public const ulong m_NotifyMaxLimitReached = 0x5c0;
    public const ulong m_bAtMinLimit = 0x5e8;
    public const ulong m_bAtMaxLimit = 0x5e9;
    public const ulong m_hinge = 0x5ec;
    public const ulong m_hingeFriction = 0x62c;
    public const ulong m_systemLoadScale = 0x630;
    public const ulong m_bIsAxisLocal = 0x634;
    public const ulong m_flMinRotation = 0x638;
    public const ulong m_flMaxRotation = 0x63c;
    public const ulong m_flInitialRotation = 0x640;
    public const ulong m_flMotorFrequency = 0x644;
    public const ulong m_flMotorDampingRatio = 0x648;
    public const ulong m_flAngleSpeed = 0x64c;
    public const ulong m_flAngleSpeedThreshold = 0x650;
    public const ulong m_OnStartMoving = 0x658;
    public const ulong m_OnStopMoving = 0x680;
}

public static class CPhysImpact {
    public const ulong m_damage = 0x4b0;
    public const ulong m_distance = 0x4b4;
    public const ulong m_directionEntityName = 0x4b8;
}

public static class CPhysLength {
    public const ulong m_offset = 0x508;
    public const ulong m_vecAttach = 0x520;
    public const ulong m_addLength = 0x52c;
    public const ulong m_minLength = 0x530;
    public const ulong m_totalLength = 0x534;
    public const ulong m_bEnableCollision = 0x538;
}

public static class CPhysMagnet {
    public const ulong m_OnMagnetAttach = 0x930;
    public const ulong m_OnMagnetDetach = 0x958;
    public const ulong m_massScale = 0x980;
    public const ulong m_forceLimit = 0x984;
    public const ulong m_torqueLimit = 0x988;
    public const ulong m_MagnettedEntities = 0x990;
    public const ulong m_bActive = 0x9a8;
    public const ulong m_bHasHitSomething = 0x9a9;
    public const ulong m_flTotalMass = 0x9ac;
    public const ulong m_flRadius = 0x9b0;
    public const ulong m_flNextSuckTime = 0x9b4;
    public const ulong m_iMaxObjectsAttached = 0x9b8;
}

public static class CPhysMotor {
    public const ulong m_nameAttach = 0x4b0;
    public const ulong m_hAttachedObject = 0x4b8;
    public const ulong m_spinUp = 0x4bc;
    public const ulong m_additionalAcceleration = 0x4c0;
    public const ulong m_angularAcceleration = 0x4c4;
    public const ulong m_lastTime = 0x4c8;
    public const ulong m_motor = 0x4e0;
}

public static class CPhysPropAmmoBox {
    public const ulong m_nUsesRemaining = 0xc40;
    public const ulong m_flTimeLastUsed = 0xc44;
}

public static class CPhysPropLootCrate {
    public const ulong m_bRenderInPSPM = 0xc40;
    public const ulong m_bRenderInTablet = 0xc41;
    public const ulong m_flSpawnTime = 0xc44;
    public const ulong m_bTakeDamageFromDangerZone = 0xc48;
    public const ulong m_pszCrateName = 0xc50;
    public const ulong m_hCrateOwner = 0xc58;
    public const ulong m_bOwnedByPlayer = 0xc5c;
    public const ulong m_flDampingOriginalSpeed = 0xc60;
    public const ulong m_flDampingOriginalRot = 0xc64;
}

public static class CPhysPropMapPlacedLongUseEntity {
    public const ulong m_iszStartUseSound = 0xc48;
    public const ulong m_nPingType = 0xc50;
    public const ulong m_nLongUseActionType = 0xc54;
    public const ulong m_flLongUseDuration = 0xc58;
    public const ulong m_OnUseCompleted = 0xc60;
}

public static class CPhysPropMoneyCrate {
    public const ulong m_nCurrentCashCount = 0xc68;
    public const ulong m_nCashCount = 0xc6c;
    public const ulong m_flTimeLastUsed = 0xc70;
}

public static class CPhysPropParadropCrate {
    public const ulong m_bFalling = 0xc68;
    public const ulong m_nNumThinksAtZeroVerticalVelocity = 0xc6c;
}

public static class CPhysPropRadarJammer {
    public const ulong m_flSpawnTime = 0xc48;
    public const ulong m_flLastSoundTime = 0xc4c;
    public const ulong m_vecJammedHexCenters = 0xc50;
    public const ulong m_vecLastJammedOrigin = 0xc68;
}

public static class CPhysPropWeaponUpgrade {
    public const ulong m_nEventPriority = 0xc40;
    public const ulong m_flTimeLastUsed = 0xc44;
}

public static class CPhysPulley {
    public const ulong m_position2 = 0x508;
    public const ulong m_offset = 0x514;
    public const ulong m_addLength = 0x52c;
    public const ulong m_gearRatio = 0x530;
}

public static class CPhysSlideConstraint {
    public const ulong m_axisEnd = 0x510;
    public const ulong m_slideFriction = 0x51c;
    public const ulong m_systemLoadScale = 0x520;
    public const ulong m_initialOffset = 0x524;
    public const ulong m_bEnableLinearConstraint = 0x528;
    public const ulong m_bEnableAngularConstraint = 0x529;
    public const ulong m_flMotorFrequency = 0x52c;
    public const ulong m_flMotorDampingRatio = 0x530;
    public const ulong m_bUseEntityPivot = 0x534;
    public const ulong m_soundInfo = 0x538;
}

public static class CPhysThruster {
    public const ulong m_localOrigin = 0x510;
}

public static class CPhysTorque {
    public const ulong m_axis = 0x510;
}

public static class CPhysWheelConstraint {
    public const ulong m_flSuspensionFrequency = 0x508;
    public const ulong m_flSuspensionDampingRatio = 0x50c;
    public const ulong m_flSuspensionHeightOffset = 0x510;
    public const ulong m_bEnableSuspensionLimit = 0x514;
    public const ulong m_flMinSuspensionOffset = 0x518;
    public const ulong m_flMaxSuspensionOffset = 0x51c;
    public const ulong m_bEnableSteeringLimit = 0x520;
    public const ulong m_flMinSteeringAngle = 0x524;
    public const ulong m_flMaxSteeringAngle = 0x528;
    public const ulong m_flSteeringAxisFriction = 0x52c;
    public const ulong m_flSpinAxisFriction = 0x530;
}

public static class CPhysicsEntitySolver {
    public const ulong m_hMovingEntity = 0x4b8;
    public const ulong m_hPhysicsBlocker = 0x4bc;
    public const ulong m_separationDuration = 0x4c0;
    public const ulong m_cancelTime = 0x4c4;
}

public static class CPhysicsProp {
    public const ulong m_MotionEnabled = 0xab0;
    public const ulong m_OnAwakened = 0xad8;
    public const ulong m_OnAwake = 0xb00;
    public const ulong m_OnAsleep = 0xb28;
    public const ulong m_OnPlayerUse = 0xb50;
    public const ulong m_OnPlayerPickup = 0xb78;
    public const ulong m_OnOutOfWorld = 0xba0;
    public const ulong m_massScale = 0xbc8;
    public const ulong m_inertiaScale = 0xbcc;
    public const ulong m_buoyancyScale = 0xbd0;
    public const ulong m_damageType = 0xbd4;
    public const ulong m_damageToEnableMotion = 0xbd8;
    public const ulong m_flForceToEnableMotion = 0xbdc;
    public const ulong m_bThrownByPlayer = 0xbe0;
    public const ulong m_bDroppedByPlayer = 0xbe1;
    public const ulong m_bTouchedByPlayer = 0xbe2;
    public const ulong m_bFirstCollisionAfterLaunch = 0xbe3;
    public const ulong m_iExploitableByPlayer = 0xbe4;
    public const ulong m_bHasBeenAwakened = 0xbe8;
    public const ulong m_bIsOverrideProp = 0xbe9;
    public const ulong m_fNextCheckDisableMotionContactsTime = 0xbec;
    public const ulong m_iInitialGlowState = 0xbf0;
    public const ulong m_nGlowRange = 0xbf4;
    public const ulong m_nGlowRangeMin = 0xbf8;
    public const ulong m_glowColor = 0xbfc;
    public const ulong m_bForceNavIgnore = 0xc00;
    public const ulong m_bNoNavmeshBlocker = 0xc01;
    public const ulong m_bForceNpcExclude = 0xc02;
    public const ulong m_bShouldAutoConvertBackFromDebris = 0xc03;
    public const ulong m_bMuteImpactEffects = 0xc04;
    public const ulong m_bAcceptDamageFromHeldObjects = 0xc0c;
    public const ulong m_bEnableUseOutput = 0xc0d;
    public const ulong m_bAwake = 0xc0e;
    public const ulong m_nCollisionGroupOverride = 0xc10;
}

public static class CPhysicsPropRespawnable {
    public const ulong m_vOriginalSpawnOrigin = 0xc18;
    public const ulong m_vOriginalSpawnAngles = 0xc24;
    public const ulong m_vOriginalMins = 0xc30;
    public const ulong m_vOriginalMaxs = 0xc3c;
    public const ulong m_flRespawnDuration = 0xc48;
}

public static class CPhysicsShake {
    public const ulong m_force = 0x8;
}

public static class CPhysicsSpring {
    public const ulong m_flFrequency = 0x4b8;
    public const ulong m_flDampingRatio = 0x4bc;
    public const ulong m_flRestLength = 0x4c0;
    public const ulong m_nameAttachStart = 0x4c8;
    public const ulong m_nameAttachEnd = 0x4d0;
    public const ulong m_start = 0x4d8;
    public const ulong m_end = 0x4e4;
    public const ulong m_teleportTick = 0x4f0;
}

public static class CPhysicsWire {
    public const ulong m_nDensity = 0x4b0;
}

public static class CPlantedC4 {
    public const ulong m_bPlantedAtQuestTarget = 0x930;
    public const ulong m_bBombTicking = 0x931;
    public const ulong m_flC4Blow = 0x934;
    public const ulong m_nBombSite = 0x938;
    public const ulong m_nSourceSoundscapeHash = 0x93c;
    public const ulong m_OnBombDefused = 0x940;
    public const ulong m_OnBombBeginDefuse = 0x968;
    public const ulong m_OnBombDefuseAborted = 0x990;
    public const ulong m_bCannotBeDefused = 0x9b8;
    public const ulong m_entitySpottedState = 0x9c0;
    public const ulong m_nSpotRules = 0x9d8;
    public const ulong m_bTrainingPlacedByPlayer = 0x9dc;
    public const ulong m_bHasExploded = 0x9dd;
    public const ulong m_flTimerLength = 0x9e0;
    public const ulong m_bBeingDefused = 0x9e4;
    public const ulong m_fLastDefuseTime = 0x9ec;
    public const ulong m_flDefuseLength = 0x9f4;
    public const ulong m_flDefuseCountDown = 0x9f8;
    public const ulong m_bBombDefused = 0x9fc;
    public const ulong m_hBombDefuser = 0xa00;
    public const ulong m_hControlPanel = 0xa04;
    public const ulong m_iProgressBarTime = 0xa08;
    public const ulong m_bVoiceAlertFired = 0xa0c;
    public const ulong m_bVoiceAlertPlayed = 0xa0d;
    public const ulong m_flNextBotBeepTime = 0xa14;
    public const ulong m_bPlantedAfterPickup = 0xa1c;
    public const ulong m_angCatchUpToPlayerEye = 0xa20;
    public const ulong m_flLastSpinDetectionTime = 0xa2c;
}

public static class CPlatTrigger {
    public const ulong m_pPlatform = 0x700;
}

public static class CPlayerControllerComponent {
    public const ulong __m_pChainEntity = 0x8;
}

public static class CPlayerPawnComponent {
    public const ulong __m_pChainEntity = 0x8;
}

public static class CPlayerPing {
    public const ulong m_hPlayer = 0x4b8;
    public const ulong m_hPingedEntity = 0x4bc;
    public const ulong m_iType = 0x4c0;
    public const ulong m_bUrgent = 0x4c4;
    public const ulong m_szPlaceName = 0x4c5;
}

public static class CPlayerSprayDecal {
    public const ulong m_nUniqueID = 0x700;
    public const ulong m_unAccountID = 0x704;
    public const ulong m_unTraceID = 0x708;
    public const ulong m_rtGcTime = 0x70c;
    public const ulong m_vecEndPos = 0x710;
    public const ulong m_vecStart = 0x71c;
    public const ulong m_vecLeft = 0x728;
    public const ulong m_vecNormal = 0x734;
    public const ulong m_nPlayer = 0x740;
    public const ulong m_nEntity = 0x744;
    public const ulong m_nHitbox = 0x748;
    public const ulong m_flCreationTime = 0x74c;
    public const ulong m_nTintID = 0x750;
    public const ulong m_nVersion = 0x754;
    public const ulong m_ubSignature = 0x755;
}

public static class CPlayerVisibility {
    public const ulong m_flVisibilityStrength = 0x4b0;
    public const ulong m_flFogDistanceMultiplier = 0x4b4;
    public const ulong m_flFogMaxDensityMultiplier = 0x4b8;
    public const ulong m_flFadeTime = 0x4bc;
    public const ulong m_bStartDisabled = 0x4c0;
    public const ulong m_bIsEnabled = 0x4c1;
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
    public const ulong m_hTriggerSoundscapeList = 0x158;
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
    public const ulong m_iTargetVolume = 0x20c;
    public const ulong m_vecSmoothedVelocity = 0x210;
}

public static class CPlayer_ObserverServices {
    public const ulong m_iObserverMode = 0x40;
    public const ulong m_hObserverTarget = 0x44;
    public const ulong m_iObserverLastMode = 0x48;
    public const ulong m_bForcedObserverMode = 0x4c;
}

public static class CPlayer_WeaponServices {
    public const ulong m_bAllowSwitchToNoWeapon = 0x40;
    public const ulong m_hMyWeapons = 0x48;
    public const ulong m_hActiveWeapon = 0x60;
    public const ulong m_hLastWeapon = 0x64;
    public const ulong m_iAmmo = 0x68;
    public const ulong m_bPreventWeaponPickup = 0xa8;
}

public static class CPointAngleSensor {
    public const ulong m_bDisabled = 0x4b0;
    public const ulong m_nLookAtName = 0x4b8;
    public const ulong m_hTargetEntity = 0x4c0;
    public const ulong m_hLookAtEntity = 0x4c4;
    public const ulong m_flDuration = 0x4c8;
    public const ulong m_flDotTolerance = 0x4cc;
    public const ulong m_flFacingTime = 0x4d0;
    public const ulong m_bFired = 0x4d4;
    public const ulong m_OnFacingLookat = 0x4d8;
    public const ulong m_OnNotFacingLookat = 0x500;
    public const ulong m_TargetDir = 0x528;
    public const ulong m_FacingPercentage = 0x550;
}

public static class CPointAngularVelocitySensor {
    public const ulong m_hTargetEntity = 0x4b0;
    public const ulong m_flThreshold = 0x4b4;
    public const ulong m_nLastCompareResult = 0x4b8;
    public const ulong m_nLastFireResult = 0x4bc;
    public const ulong m_flFireTime = 0x4c0;
    public const ulong m_flFireInterval = 0x4c4;
    public const ulong m_flLastAngVelocity = 0x4c8;
    public const ulong m_lastOrientation = 0x4cc;
    public const ulong m_vecAxis = 0x4d8;
    public const ulong m_bUseHelper = 0x4e4;
    public const ulong m_AngularVelocity = 0x4e8;
    public const ulong m_OnLessThan = 0x510;
    public const ulong m_OnLessThanOrEqualTo = 0x538;
    public const ulong m_OnGreaterThan = 0x560;
    public const ulong m_OnGreaterThanOrEqualTo = 0x588;
    public const ulong m_OnEqualTo = 0x5b0;
}

public static class CPointCamera {
    public const ulong m_FOV = 0x4b0;
    public const ulong m_Resolution = 0x4b4;
    public const ulong m_bFogEnable = 0x4b8;
    public const ulong m_FogColor = 0x4b9;
    public const ulong m_flFogStart = 0x4c0;
    public const ulong m_flFogEnd = 0x4c4;
    public const ulong m_flFogMaxDensity = 0x4c8;
    public const ulong m_bActive = 0x4cc;
    public const ulong m_bUseScreenAspectRatio = 0x4cd;
    public const ulong m_flAspectRatio = 0x4d0;
    public const ulong m_bNoSky = 0x4d4;
    public const ulong m_fBrightness = 0x4d8;
    public const ulong m_flZFar = 0x4dc;
    public const ulong m_flZNear = 0x4e0;
    public const ulong m_bCanHLTVUse = 0x4e4;
    public const ulong m_bDofEnabled = 0x4e5;
    public const ulong m_flDofNearBlurry = 0x4e8;
    public const ulong m_flDofNearCrisp = 0x4ec;
    public const ulong m_flDofFarCrisp = 0x4f0;
    public const ulong m_flDofFarBlurry = 0x4f4;
    public const ulong m_flDofTiltToGround = 0x4f8;
    public const ulong m_TargetFOV = 0x4fc;
    public const ulong m_DegreesPerSecond = 0x500;
    public const ulong m_bIsOn = 0x504;
    public const ulong m_pNext = 0x508;
}

public static class CPointCameraVFOV {
    public const ulong m_flVerticalFOV = 0x510;
}

public static class CPointClientUIDialog {
    public const ulong m_hActivator = 0x8b0;
    public const ulong m_bStartEnabled = 0x8b4;
}

public static class CPointClientUIWorldPanel {
    public const ulong m_bIgnoreInput = 0x8b0;
    public const ulong m_bLit = 0x8b1;
    public const ulong m_bFollowPlayerAcrossTeleport = 0x8b2;
    public const ulong m_flWidth = 0x8b4;
    public const ulong m_flHeight = 0x8b8;
    public const ulong m_flDPI = 0x8bc;
    public const ulong m_flInteractDistance = 0x8c0;
    public const ulong m_flDepthOffset = 0x8c4;
    public const ulong m_unOwnerContext = 0x8c8;
    public const ulong m_unHorizontalAlign = 0x8cc;
    public const ulong m_unVerticalAlign = 0x8d0;
    public const ulong m_unOrientation = 0x8d4;
    public const ulong m_bAllowInteractionFromAllSceneWorlds = 0x8d8;
    public const ulong m_vecCSSClasses = 0x8e0;
    public const ulong m_bOpaque = 0x8f8;
    public const ulong m_bNoDepth = 0x8f9;
    public const ulong m_bRenderBackface = 0x8fa;
    public const ulong m_bUseOffScreenIndicator = 0x8fb;
    public const ulong m_bExcludeFromSaveGames = 0x8fc;
    public const ulong m_bGrabbable = 0x8fd;
    public const ulong m_bOnlyRenderToTexture = 0x8fe;
    public const ulong m_bDisableMipGen = 0x8ff;
    public const ulong m_nExplicitImageLayout = 0x900;
}

public static class CPointClientUIWorldTextPanel {
    public const ulong m_messageText = 0x908;
}

public static class CPointCommentaryNode {
    public const ulong m_iszPreCommands = 0x930;
    public const ulong m_iszPostCommands = 0x938;
    public const ulong m_iszCommentaryFile = 0x940;
    public const ulong m_iszViewTarget = 0x948;
    public const ulong m_hViewTarget = 0x950;
    public const ulong m_hViewTargetAngles = 0x954;
    public const ulong m_iszViewPosition = 0x958;
    public const ulong m_hViewPosition = 0x960;
    public const ulong m_hViewPositionMover = 0x964;
    public const ulong m_bPreventMovement = 0x968;
    public const ulong m_bUnderCrosshair = 0x969;
    public const ulong m_bUnstoppable = 0x96a;
    public const ulong m_flFinishedTime = 0x96c;
    public const ulong m_vecFinishOrigin = 0x970;
    public const ulong m_vecOriginalAngles = 0x97c;
    public const ulong m_vecFinishAngles = 0x988;
    public const ulong m_bPreventChangesWhileMoving = 0x994;
    public const ulong m_bDisabled = 0x995;
    public const ulong m_vecTeleportOrigin = 0x998;
    public const ulong m_flAbortedPlaybackAt = 0x9a4;
    public const ulong m_pOnCommentaryStarted = 0x9a8;
    public const ulong m_pOnCommentaryStopped = 0x9d0;
    public const ulong m_bActive = 0x9f8;
    public const ulong m_flStartTime = 0x9fc;
    public const ulong m_flStartTimeInCommentary = 0xa00;
    public const ulong m_iszTitle = 0xa08;
    public const ulong m_iszSpeakers = 0xa10;
    public const ulong m_iNodeNumber = 0xa18;
    public const ulong m_iNodeNumberMax = 0xa1c;
    public const ulong m_bListenedTo = 0xa20;
}

public static class CPointDZDroneGunSpawn {
    public const ulong m_bSpawnAutomatically = 0x4b8;
}

public static class CPointDZItemSpawnGroup {
    public const ulong m_flRadius = 0x4b0;
}

public static class CPointDZParadropDenialRegion {
    public const ulong m_flRadius = 0x4b8;
}

public static class CPointDZWeaponSpawn {
    public const ulong m_nGroupID = 0x4c0;
    public const ulong m_flDefaultWeight = 0x4c4;
    public const ulong m_flCurrentWeight = 0x4c8;
    public const ulong m_hItem = 0x4cc;
    public const ulong m_iszDoorName = 0x4d0;
    public const ulong m_hDoor = 0x4d8;
    public const ulong m_nPrice = 0x4dc;
}

public static class CPointEntityFinder {
    public const ulong m_hEntity = 0x4b0;
    public const ulong m_iFilterName = 0x4b8;
    public const ulong m_hFilter = 0x4c0;
    public const ulong m_iRefName = 0x4c8;
    public const ulong m_hReference = 0x4d0;
    public const ulong m_FindMethod = 0x4d4;
    public const ulong m_OnFoundEntity = 0x4d8;
}

public static class CPointGamestatsCounter {
    public const ulong m_strStatisticName = 0x4b0;
    public const ulong m_bDisabled = 0x4b8;
}

public static class CPointGiveAmmo {
    public const ulong m_pActivator = 0x4b0;
}

public static class CPointHurt {
    public const ulong m_nDamage = 0x4b0;
    public const ulong m_bitsDamageType = 0x4b4;
    public const ulong m_flRadius = 0x4b8;
    public const ulong m_flDelay = 0x4bc;
    public const ulong m_strTarget = 0x4c0;
    public const ulong m_pActivator = 0x4c8;
}

public static class CPointPrefab {
    public const ulong m_targetMapName = 0x4b0;
    public const ulong m_forceWorldGroupID = 0x4b8;
    public const ulong m_fixupNames = 0x4c0;
}

public static class CPointProximitySensor {
    public const ulong m_bDisabled = 0x4b0;
    public const ulong m_hTargetEntity = 0x4b4;
    public const ulong m_Distance = 0x4b8;
}

public static class CPointPush {
    public const ulong m_bEnabled = 0x4b0;
    public const ulong m_flMagnitude = 0x4b4;
    public const ulong m_flRadius = 0x4b8;
    public const ulong m_flInnerRadius = 0x4bc;
    public const ulong m_flConeOfInfluence = 0x4c0;
    public const ulong m_iszFilterName = 0x4c8;
    public const ulong m_hFilter = 0x4d0;
}

public static class CPointTeleport {
    public const ulong m_vSaveOrigin = 0x4b0;
    public const ulong m_vSaveAngles = 0x4bc;
    public const ulong m_bTeleportParentedEntities = 0x4c8;
    public const ulong m_bTeleportUseCurrentAngle = 0x4c9;
}

public static class CPointTemplate {
    public const ulong m_iszWorldName = 0x4b0;
    public const ulong m_iszSource2EntityLumpName = 0x4b8;
    public const ulong m_iszEntityFilterName = 0x4c0;
    public const ulong m_flTimeoutInterval = 0x4c8;
    public const ulong m_bAsynchronouslySpawnEntities = 0x4cc;
    public const ulong m_pOutputOnSpawned = 0x4d0;
    public const ulong m_clientOnlyEntityBehavior = 0x4f8;
    public const ulong m_ownerSpawnGroupType = 0x4fc;
    public const ulong m_createdSpawnGroupHandles = 0x500;
    public const ulong m_SpawnedEntityHandles = 0x518;
    public const ulong m_ScriptSpawnCallback = 0x530;
    public const ulong m_ScriptCallbackScope = 0x538;
}

public static class CPointValueRemapper {
    public const ulong m_bDisabled = 0x4b0;
    public const ulong m_bUpdateOnClient = 0x4b1;
    public const ulong m_nInputType = 0x4b4;
    public const ulong m_iszRemapLineStartName = 0x4b8;
    public const ulong m_iszRemapLineEndName = 0x4c0;
    public const ulong m_hRemapLineStart = 0x4c8;
    public const ulong m_hRemapLineEnd = 0x4cc;
    public const ulong m_flMaximumChangePerSecond = 0x4d0;
    public const ulong m_flDisengageDistance = 0x4d4;
    public const ulong m_flEngageDistance = 0x4d8;
    public const ulong m_bRequiresUseKey = 0x4dc;
    public const ulong m_nOutputType = 0x4e0;
    public const ulong m_iszOutputEntityName = 0x4e8;
    public const ulong m_iszOutputEntity2Name = 0x4f0;
    public const ulong m_iszOutputEntity3Name = 0x4f8;
    public const ulong m_iszOutputEntity4Name = 0x500;
    public const ulong m_hOutputEntities = 0x508;
    public const ulong m_nHapticsType = 0x520;
    public const ulong m_nMomentumType = 0x524;
    public const ulong m_flMomentumModifier = 0x528;
    public const ulong m_flSnapValue = 0x52c;
    public const ulong m_flCurrentMomentum = 0x530;
    public const ulong m_nRatchetType = 0x534;
    public const ulong m_flRatchetOffset = 0x538;
    public const ulong m_flInputOffset = 0x53c;
    public const ulong m_bEngaged = 0x540;
    public const ulong m_bFirstUpdate = 0x541;
    public const ulong m_flPreviousValue = 0x544;
    public const ulong m_flPreviousUpdateTickTime = 0x548;
    public const ulong m_vecPreviousTestPoint = 0x54c;
    public const ulong m_hUsingPlayer = 0x558;
    public const ulong m_flCustomOutputValue = 0x55c;
    public const ulong m_iszSoundEngage = 0x560;
    public const ulong m_iszSoundDisengage = 0x568;
    public const ulong m_iszSoundReachedValueZero = 0x570;
    public const ulong m_iszSoundReachedValueOne = 0x578;
    public const ulong m_iszSoundMovingLoop = 0x580;
    public const ulong m_Position = 0x590;
    public const ulong m_PositionDelta = 0x5b8;
    public const ulong m_OnReachedValueZero = 0x5e0;
    public const ulong m_OnReachedValueOne = 0x608;
    public const ulong m_OnReachedValueCustom = 0x630;
    public const ulong m_OnEngage = 0x658;
    public const ulong m_OnDisengage = 0x680;
}

public static class CPointVelocitySensor {
    public const ulong m_hTargetEntity = 0x4b0;
    public const ulong m_vecAxis = 0x4b4;
    public const ulong m_bEnabled = 0x4c0;
    public const ulong m_fPrevVelocity = 0x4c4;
    public const ulong m_flAvgInterval = 0x4c8;
    public const ulong m_Velocity = 0x4d0;
}

public static class CPointWorldText {
    public const ulong m_messageText = 0x700;
    public const ulong m_FontName = 0x900;
    public const ulong m_bEnabled = 0x940;
    public const ulong m_bFullbright = 0x941;
    public const ulong m_flWorldUnitsPerPx = 0x944;
    public const ulong m_flFontSize = 0x948;
    public const ulong m_flDepthOffset = 0x94c;
    public const ulong m_Color = 0x950;
    public const ulong m_nJustifyHorizontal = 0x954;
    public const ulong m_nJustifyVertical = 0x958;
    public const ulong m_nReorientMode = 0x95c;
}

public static class CPostProcessingVolume {
    public const ulong m_hPostSettings = 0x8b8;
    public const ulong m_flFadeDuration = 0x8c0;
    public const ulong m_flMinLogExposure = 0x8c4;
    public const ulong m_flMaxLogExposure = 0x8c8;
    public const ulong m_flMinExposure = 0x8cc;
    public const ulong m_flMaxExposure = 0x8d0;
    public const ulong m_flExposureCompensation = 0x8d4;
    public const ulong m_flExposureFadeSpeedUp = 0x8d8;
    public const ulong m_flExposureFadeSpeedDown = 0x8dc;
    public const ulong m_flTonemapEVSmoothingRange = 0x8e0;
    public const ulong m_bMaster = 0x8e4;
    public const ulong m_bExposureControl = 0x8e5;
    public const ulong m_flRate = 0x8e8;
    public const ulong m_flTonemapPercentTarget = 0x8ec;
    public const ulong m_flTonemapPercentBrightPixels = 0x8f0;
    public const ulong m_flTonemapMinAvgLum = 0x8f4;
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

public static class CProjectedDecal {
    public const ulong m_nTexture = 0x4b0;
    public const ulong m_flDistance = 0x4b4;
}

public static class CPropCounter {
    public const ulong m_flDisplayValue = 0x930;
    public const ulong m_nInitialValue = 0x934;
}

public static class CPropDoorRotating {
    public const ulong m_vecAxis = 0xe38;
    public const ulong m_flDistance = 0xe44;
    public const ulong m_eSpawnPosition = 0xe48;
    public const ulong m_eOpenDirection = 0xe4c;
    public const ulong m_eCurrentOpenDirection = 0xe50;
    public const ulong m_flAjarAngle = 0xe54;
    public const ulong m_angRotationAjarDeprecated = 0xe58;
    public const ulong m_angRotationClosed = 0xe64;
    public const ulong m_angRotationOpenForward = 0xe70;
    public const ulong m_angRotationOpenBack = 0xe7c;
    public const ulong m_angGoal = 0xe88;
    public const ulong m_vecForwardBoundsMin = 0xe94;
    public const ulong m_vecForwardBoundsMax = 0xea0;
    public const ulong m_vecBackBoundsMin = 0xeac;
    public const ulong m_vecBackBoundsMax = 0xeb8;
    public const ulong m_bAjarDoorShouldntAlwaysOpen = 0xec4;
    public const ulong m_hEntityBlocker = 0xec8;
}

public static class CPropDoorRotatingBreakable {
    public const ulong m_bBreakable = 0xed0;
    public const ulong m_isAbleToCloseAreaPortals = 0xed1;
    public const ulong m_currentDamageState = 0xed4;
    public const ulong m_damageStates = 0xed8;
}

public static class CPulseCell_Inflow_GameEvent {
    public const ulong m_EventName = 0x70;
}

public static class CPulseCell_Outflow_PlayVCD {
    public const ulong m_vcdFilename = 0x48;
    public const ulong m_OnFinished = 0x50;
    public const ulong m_Triggers = 0x60;
}

public static class CPulseCell_SoundEventStart {
    public const ulong m_Type = 0x48;
}

public static class CPulseCell_Step_EntFire {
    public const ulong m_Input = 0x48;
}

public static class CPulseCell_Step_SetAnimGraphParam {
    public const ulong m_ParamName = 0x48;
}

public static class CPulseCell_Value_FindEntByName {
    public const ulong m_EntityType = 0x48;
}

public static class CRR_Response {
    public const ulong m_Type = 0x0;
    public const ulong m_szResponseName = 0x1;
    public const ulong m_szMatchingRule = 0xc1;
    public const ulong m_Params = 0x148;
    public const ulong m_fMatchScore = 0x168;
    public const ulong m_szSpeakerContext = 0x170;
    public const ulong m_szWorldContext = 0x178;
    public const ulong m_Followup = 0x180;
    public const ulong m_pchCriteriaNames = 0x1b8;
    public const ulong m_pchCriteriaValues = 0x1d0;
}

public static class CRagdollConstraint {
    public const ulong m_xmin = 0x508;
    public const ulong m_xmax = 0x50c;
    public const ulong m_ymin = 0x510;
    public const ulong m_ymax = 0x514;
    public const ulong m_zmin = 0x518;
    public const ulong m_zmax = 0x51c;
    public const ulong m_xfriction = 0x520;
    public const ulong m_yfriction = 0x524;
    public const ulong m_zfriction = 0x528;
}

public static class CRagdollMagnet {
    public const ulong m_bDisabled = 0x4b0;
    public const ulong m_radius = 0x4b4;
    public const ulong m_force = 0x4b8;
    public const ulong m_axis = 0x4bc;
}

public static class CRagdollManager {
    public const ulong m_iCurrentMaxRagdollCount = 0x4b0;
    public const ulong m_iMaxRagdollCount = 0x4b4;
    public const ulong m_bSaveImportant = 0x4b8;
}

public static class CRagdollProp {
    public const ulong m_ragdoll = 0x938;
    public const ulong m_bStartDisabled = 0x970;
    public const ulong m_ragPos = 0x978;
    public const ulong m_ragAngles = 0x990;
    public const ulong m_hRagdollSource = 0x9a8;
    public const ulong m_lastUpdateTickCount = 0x9ac;
    public const ulong m_allAsleep = 0x9b0;
    public const ulong m_bFirstCollisionAfterLaunch = 0x9b1;
    public const ulong m_hDamageEntity = 0x9b4;
    public const ulong m_hKiller = 0x9b8;
    public const ulong m_hPhysicsAttacker = 0x9bc;
    public const ulong m_flLastPhysicsInfluenceTime = 0x9c0;
    public const ulong m_flFadeOutStartTime = 0x9c4;
    public const ulong m_flFadeTime = 0x9c8;
    public const ulong m_vecLastOrigin = 0x9cc;
    public const ulong m_flAwakeTime = 0x9d8;
    public const ulong m_flLastOriginChangeTime = 0x9dc;
    public const ulong m_nBloodColor = 0x9e0;
    public const ulong m_strOriginClassName = 0x9e8;
    public const ulong m_strSourceClassName = 0x9f0;
    public const ulong m_bHasBeenPhysgunned = 0x9f8;
    public const ulong m_bShouldTeleportPhysics = 0x9f9;
    public const ulong m_flBlendWeight = 0x9fc;
    public const ulong m_flDefaultFadeScale = 0xa00;
    public const ulong m_ragdollMins = 0xa08;
    public const ulong m_ragdollMaxs = 0xa20;
    public const ulong m_bShouldDeleteActivationRecord = 0xa38;
    public const ulong m_bValidatePoweredRagdollPose = 0xa98;
}

public static class CRagdollPropAttached {
    public const ulong m_boneIndexAttached = 0xad8;
    public const ulong m_ragdollAttachedObjectIndex = 0xadc;
    public const ulong m_attachmentPointBoneSpace = 0xae0;
    public const ulong m_attachmentPointRagdollSpace = 0xaec;
    public const ulong m_bShouldDetach = 0xaf8;
    public const ulong m_bShouldDeleteAttachedActivationRecord = 0xb08;
}

public static class CRandSimTimer {
    public const ulong m_minInterval = 0x8;
    public const ulong m_maxInterval = 0xc;
}

public static class CRandStopwatch {
    public const ulong m_minInterval = 0xc;
    public const ulong m_maxInterval = 0x10;
}

public static class CRangeFloat {
    public const ulong m_pValue = 0x0;
}

public static class CRangeInt {
    public const ulong m_pValue = 0x0;
}

public static class CRectLight {
    public const ulong m_bShowLight = 0x938;
}

public static class CRemapFloat {
    public const ulong m_pValue = 0x0;
}

public static class CRenderComponent {
    public const ulong __m_pChainEntity = 0x10;
    public const ulong m_bIsRenderingWithViewModels = 0x50;
    public const ulong m_nSplitscreenFlags = 0x54;
    public const ulong m_bEnableRendering = 0x60;
    public const ulong m_bInterpolationReadyToDraw = 0xb0;
}

public static class CResponseCriteriaSet {
    public const ulong m_nNumPrefixedContexts = 0x28;
    public const ulong m_bOverrideOnAppend = 0x2c;
}

public static class CResponseQueue {
    public const ulong m_ExpresserTargets = 0x50;
}

public static class CResponseQueue_CDeferredResponse {
    public const ulong m_contexts = 0x10;
    public const ulong m_fDispatchTime = 0x40;
    public const ulong m_hIssuer = 0x44;
    public const ulong m_response = 0x50;
    public const ulong m_bResponseValid = 0x238;
}

public static class CRetakeGameRules {
    public const ulong m_nMatchSeed = 0xf8;
    public const ulong m_bBlockersPresent = 0xfc;
    public const ulong m_bRoundInProgress = 0xfd;
    public const ulong m_iFirstSecondHalfRound = 0x100;
    public const ulong m_iBombSite = 0x104;
}

public static class CRevertSaved {
    public const ulong m_loadTime = 0x700;
    public const ulong m_Duration = 0x704;
    public const ulong m_HoldTime = 0x708;
}

public static class CRopeKeyframe {
    public const ulong m_RopeFlags = 0x708;
    public const ulong m_iNextLinkName = 0x710;
    public const ulong m_Slack = 0x718;
    public const ulong m_Width = 0x71c;
    public const ulong m_TextureScale = 0x720;
    public const ulong m_nSegments = 0x724;
    public const ulong m_bConstrainBetweenEndpoints = 0x725;
    public const ulong m_strRopeMaterialModel = 0x728;
    public const ulong m_iRopeMaterialModelIndex = 0x730;
    public const ulong m_Subdiv = 0x738;
    public const ulong m_nChangeCount = 0x739;
    public const ulong m_RopeLength = 0x73a;
    public const ulong m_fLockedPoints = 0x73c;
    public const ulong m_bCreatedFromMapFile = 0x73d;
    public const ulong m_flScrollSpeed = 0x740;
    public const ulong m_bStartPointValid = 0x744;
    public const ulong m_bEndPointValid = 0x745;
    public const ulong m_hStartPoint = 0x748;
    public const ulong m_hEndPoint = 0x74c;
    public const ulong m_iStartAttachment = 0x750;
    public const ulong m_iEndAttachment = 0x751;
}

public static class CRotDoor {
    public const ulong m_bSolidBsp = 0x988;
}

public static class CRuleEntity {
    public const ulong m_iszMaster = 0x700;
}

public static class CRulePointEntity {
    public const ulong m_Score = 0x708;
}

public static class CSAdditionalMatchStats_t {
    public const ulong m_numRoundsSurvived = 0x14;
    public const ulong m_maxNumRoundsSurvived = 0x18;
    public const ulong m_numRoundsSurvivedTotal = 0x1c;
    public const ulong m_iRoundsWonWithoutPurchase = 0x20;
    public const ulong m_iRoundsWonWithoutPurchaseTotal = 0x24;
    public const ulong m_numFirstKills = 0x28;
    public const ulong m_numClutchKills = 0x2c;
    public const ulong m_numPistolKills = 0x30;
    public const ulong m_numSniperKills = 0x34;
}

public static class CSAdditionalPerRoundStats_t {
    public const ulong m_numChickensKilled = 0x0;
    public const ulong m_killsWhileBlind = 0x4;
    public const ulong m_bombCarrierkills = 0x8;
    public const ulong m_iBurnDamageInflicted = 0xc;
    public const ulong m_iDinks = 0x10;
}

public static class CSMatchStats_t {
    public const ulong m_iEnemy5Ks = 0x68;
    public const ulong m_iEnemy4Ks = 0x6c;
    public const ulong m_iEnemy3Ks = 0x70;
    public const ulong m_iEnemy2Ks = 0x74;
    public const ulong m_iUtility_Count = 0x78;
    public const ulong m_iUtility_Successes = 0x7c;
    public const ulong m_iUtility_Enemies = 0x80;
    public const ulong m_iFlash_Count = 0x84;
    public const ulong m_iFlash_Successes = 0x88;
    public const ulong m_nHealthPointsRemovedTotal = 0x8c;
    public const ulong m_nHealthPointsDealtTotal = 0x90;
    public const ulong m_nShotsFiredTotal = 0x94;
    public const ulong m_nShotsOnTargetTotal = 0x98;
    public const ulong m_i1v1Count = 0x9c;
    public const ulong m_i1v1Wins = 0xa0;
    public const ulong m_i1v2Count = 0xa4;
    public const ulong m_i1v2Wins = 0xa8;
    public const ulong m_iEntryCount = 0xac;
    public const ulong m_iEntryWins = 0xb0;
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

public static class CSceneEntity {
    public const ulong m_iszSceneFile = 0x4b8;
    public const ulong m_iszResumeSceneFile = 0x4c0;
    public const ulong m_iszTarget1 = 0x4c8;
    public const ulong m_iszTarget2 = 0x4d0;
    public const ulong m_iszTarget3 = 0x4d8;
    public const ulong m_iszTarget4 = 0x4e0;
    public const ulong m_iszTarget5 = 0x4e8;
    public const ulong m_iszTarget6 = 0x4f0;
    public const ulong m_iszTarget7 = 0x4f8;
    public const ulong m_iszTarget8 = 0x500;
    public const ulong m_hTarget1 = 0x508;
    public const ulong m_hTarget2 = 0x50c;
    public const ulong m_hTarget3 = 0x510;
    public const ulong m_hTarget4 = 0x514;
    public const ulong m_hTarget5 = 0x518;
    public const ulong m_hTarget6 = 0x51c;
    public const ulong m_hTarget7 = 0x520;
    public const ulong m_hTarget8 = 0x524;
    public const ulong m_bIsPlayingBack = 0x528;
    public const ulong m_bPaused = 0x529;
    public const ulong m_bMultiplayer = 0x52a;
    public const ulong m_bAutogenerated = 0x52b;
    public const ulong m_flForceClientTime = 0x52c;
    public const ulong m_flCurrentTime = 0x530;
    public const ulong m_flFrameTime = 0x534;
    public const ulong m_bCancelAtNextInterrupt = 0x538;
    public const ulong m_fPitch = 0x53c;
    public const ulong m_bAutomated = 0x540;
    public const ulong m_nAutomatedAction = 0x544;
    public const ulong m_flAutomationDelay = 0x548;
    public const ulong m_flAutomationTime = 0x54c;
    public const ulong m_hWaitingForThisResumeScene = 0x550;
    public const ulong m_bWaitingForResumeScene = 0x554;
    public const ulong m_bPausedViaInput = 0x555;
    public const ulong m_bPauseAtNextInterrupt = 0x556;
    public const ulong m_bWaitingForActor = 0x557;
    public const ulong m_bWaitingForInterrupt = 0x558;
    public const ulong m_bInterruptedActorsScenes = 0x559;
    public const ulong m_bBreakOnNonIdle = 0x55a;
    public const ulong m_hActorList = 0x560;
    public const ulong m_hRemoveActorList = 0x578;
    public const ulong m_nSceneFlushCounter = 0x5a0;
    public const ulong m_nSceneStringIndex = 0x5a4;
    public const ulong m_OnStart = 0x5a8;
    public const ulong m_OnCompletion = 0x5d0;
    public const ulong m_OnCanceled = 0x5f8;
    public const ulong m_OnPaused = 0x620;
    public const ulong m_OnResumed = 0x648;
    public const ulong m_OnTrigger = 0x670;
    public const ulong m_hInterruptScene = 0x980;
    public const ulong m_nInterruptCount = 0x984;
    public const ulong m_bSceneMissing = 0x988;
    public const ulong m_bInterrupted = 0x989;
    public const ulong m_bCompletedEarly = 0x98a;
    public const ulong m_bInterruptSceneFinished = 0x98b;
    public const ulong m_bRestoring = 0x98c;
    public const ulong m_hNotifySceneCompletion = 0x990;
    public const ulong m_hListManagers = 0x9a8;
    public const ulong m_iszSoundName = 0x9e8;
    public const ulong m_hActor = 0x9f0;
    public const ulong m_hActivator = 0x9f4;
    public const ulong m_BusyActor = 0x9f8;
    public const ulong m_iPlayerDeathBehavior = 0x9fc;
}

public static class CSceneEventInfo {
    public const ulong m_iLayer = 0x0;
    public const ulong m_iPriority = 0x4;
    public const ulong m_hSequence = 0x8;
    public const ulong m_flWeight = 0xc;
    public const ulong m_bIsMoving = 0x10;
    public const ulong m_bHasArrived = 0x11;
    public const ulong m_flInitialYaw = 0x14;
    public const ulong m_flTargetYaw = 0x18;
    public const ulong m_flFacingYaw = 0x1c;
    public const ulong m_nType = 0x20;
    public const ulong m_flNext = 0x24;
    public const ulong m_bIsGesture = 0x28;
    public const ulong m_bShouldRemove = 0x29;
    public const ulong m_hTarget = 0x54;
    public const ulong m_nSceneEventId = 0x58;
    public const ulong m_bClientSide = 0x5c;
    public const ulong m_bStarted = 0x5d;
}

public static class CSceneListManager {
    public const ulong m_hListManagers = 0x4b0;
    public const ulong m_iszScenes = 0x4c8;
    public const ulong m_hScenes = 0x548;
}

public static class CScriptComponent {
    public const ulong m_scriptClassName = 0x30;
}

public static class CScriptItem {
    public const ulong m_OnPlayerPickup = 0xa08;
    public const ulong m_MoveTypeOverride = 0xa30;
}

public static class CScriptNavBlocker {
    public const ulong m_vExtent = 0x710;
}

public static class CScriptTriggerHurt {
    public const ulong m_vExtent = 0x948;
}

public static class CScriptTriggerMultiple {
    public const ulong m_vExtent = 0x8d0;
}

public static class CScriptTriggerOnce {
    public const ulong m_vExtent = 0x8d0;
}

public static class CScriptTriggerPush {
    public const ulong m_vExtent = 0x8d0;
}

public static class CScriptUniformRandomStream {
    public const ulong m_hScriptScope = 0x8;
    public const ulong m_nInitialSeed = 0x9c;
}

public static class CScriptedSequence {
    public const ulong m_iszEntry = 0x4b0;
    public const ulong m_iszPreIdle = 0x4b8;
    public const ulong m_iszPlay = 0x4c0;
    public const ulong m_iszPostIdle = 0x4c8;
    public const ulong m_iszModifierToAddOnPlay = 0x4d0;
    public const ulong m_iszNextScript = 0x4d8;
    public const ulong m_iszEntity = 0x4e0;
    public const ulong m_iszSyncGroup = 0x4e8;
    public const ulong m_nMoveTo = 0x4f0;
    public const ulong m_bIsPlayingPreIdle = 0x4f4;
    public const ulong m_bIsPlayingEntry = 0x4f5;
    public const ulong m_bIsPlayingAction = 0x4f6;
    public const ulong m_bIsPlayingPostIdle = 0x4f7;
    public const ulong m_bLoopPreIdleSequence = 0x4f8;
    public const ulong m_bLoopActionSequence = 0x4f9;
    public const ulong m_bLoopPostIdleSequence = 0x4fa;
    public const ulong m_bSynchPostIdles = 0x4fb;
    public const ulong m_bIgnoreGravity = 0x4fc;
    public const ulong m_bDisableNPCCollisions = 0x4fd;
    public const ulong m_bKeepAnimgraphLockedPost = 0x4fe;
    public const ulong m_bDontAddModifiers = 0x4ff;
    public const ulong m_flRadius = 0x500;
    public const ulong m_flRepeat = 0x504;
    public const ulong m_flPlayAnimFadeInTime = 0x508;
    public const ulong m_flMoveInterpTime = 0x50c;
    public const ulong m_flAngRate = 0x510;
    public const ulong m_iDelay = 0x514;
    public const ulong m_startTime = 0x518;
    public const ulong m_bWaitForBeginSequence = 0x51c;
    public const ulong m_saved_effects = 0x520;
    public const ulong m_savedFlags = 0x524;
    public const ulong m_savedCollisionGroup = 0x528;
    public const ulong m_interruptable = 0x52c;
    public const ulong m_sequenceStarted = 0x52d;
    public const ulong m_bPrevAnimatedEveryTick = 0x52e;
    public const ulong m_bForcedAnimatedEveryTick = 0x52f;
    public const ulong m_bPositionRelativeToOtherEntity = 0x530;
    public const ulong m_hTargetEnt = 0x534;
    public const ulong m_hNextCine = 0x538;
    public const ulong m_bThinking = 0x53c;
    public const ulong m_bInitiatedSelfDelete = 0x53d;
    public const ulong m_bIsTeleportingDueToMoveTo = 0x53e;
    public const ulong m_bAllowCustomInterruptConditions = 0x53f;
    public const ulong m_hLastFoundEntity = 0x540;
    public const ulong m_hForcedTarget = 0x544;
    public const ulong m_bDontCancelOtherSequences = 0x548;
    public const ulong m_bForceSynch = 0x549;
    public const ulong m_bTargetWasAsleep = 0x54a;
    public const ulong m_bPreventUpdateYawOnFinish = 0x54b;
    public const ulong m_bEnsureOnNavmeshOnFinish = 0x54c;
    public const ulong m_onDeathBehavior = 0x550;
    public const ulong m_ConflictResponse = 0x554;
    public const ulong m_OnBeginSequence = 0x558;
    public const ulong m_OnActionStartOrLoop = 0x580;
    public const ulong m_OnEndSequence = 0x5a8;
    public const ulong m_OnPostIdleEndSequence = 0x5d0;
    public const ulong m_OnCancelSequence = 0x5f8;
    public const ulong m_OnCancelFailedSequence = 0x620;
    public const ulong m_OnScriptEvent = 0x648;
    public const ulong m_matOtherToMain = 0x790;
    public const ulong m_hInteractionMainEntity = 0x7b0;
    public const ulong m_iPlayerDeathBehavior = 0x7b4;
}

public static class CSensorGrenadeProjectile {
    public const ulong m_fExpireTime = 0xac8;
    public const ulong m_fNextDetectPlayerSound = 0xacc;
    public const ulong m_hDisplayGrenade = 0xad0;
}

public static class CShatterGlassShard {
    public const ulong m_hShardHandle = 0x8;
    public const ulong m_vecPanelVertices = 0x10;
    public const ulong m_vLocalPanelSpaceOrigin = 0x28;
    public const ulong m_hModel = 0x30;
    public const ulong m_hPhysicsEntity = 0x38;
    public const ulong m_hParentPanel = 0x3c;
    public const ulong m_hParentShard = 0x40;
    public const ulong m_ShatterStressType = 0x44;
    public const ulong m_vecStressVelocity = 0x48;
    public const ulong m_bCreatedModel = 0x54;
    public const ulong m_flLongestEdge = 0x58;
    public const ulong m_flShortestEdge = 0x5c;
    public const ulong m_flLongestAcross = 0x60;
    public const ulong m_flShortestAcross = 0x64;
    public const ulong m_flSumOfAllEdges = 0x68;
    public const ulong m_flArea = 0x6c;
    public const ulong m_nOnFrameEdge = 0x70;
    public const ulong m_nParentPanelsNthShard = 0x74;
    public const ulong m_nSubShardGeneration = 0x78;
    public const ulong m_vecAverageVertPosition = 0x7c;
    public const ulong m_bAverageVertPositionIsValid = 0x84;
    public const ulong m_vecPanelSpaceStressPositionA = 0x88;
    public const ulong m_vecPanelSpaceStressPositionB = 0x90;
    public const ulong m_bStressPositionAIsValid = 0x98;
    public const ulong m_bStressPositionBIsValid = 0x99;
    public const ulong m_bFlaggedForRemoval = 0x9a;
    public const ulong m_flPhysicsEntitySpawnedAtTime = 0x9c;
    public const ulong m_bShatterRateLimited = 0xa0;
    public const ulong m_hEntityHittingMe = 0xa4;
    public const ulong m_vecNeighbors = 0xa8;
}

public static class CShatterGlassShardPhysics {
    public const ulong m_bDebris = 0xc18;
    public const ulong m_hParentShard = 0xc1c;
    public const ulong m_ShardDesc = 0xc20;
}

public static class CSimTimer {
    public const ulong m_interval = 0x8;
}

public static class CSimpleSimTimer {
    public const ulong m_next = 0x0;
    public const ulong m_nWorldGroupId = 0x4;
}

public static class CSingleplayRules {
    public const ulong m_bSinglePlayerGameEnding = 0x90;
}

public static class CSkeletonAnimationController {
    public const ulong m_pSkeletonInstance = 0x8;
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

public static class CSkillDamage {
    public const ulong m_flDamage = 0x0;
    public const ulong m_flPhysicsForceDamage = 0x10;
}

public static class CSkillFloat {
    public const ulong m_pValue = 0x0;
}

public static class CSkillInt {
    public const ulong m_pValue = 0x0;
}

public static class CSkyCamera {
    public const ulong m_skyboxData = 0x4b0;
    public const ulong m_skyboxSlotToken = 0x540;
    public const ulong m_bUseAngles = 0x544;
    public const ulong m_pNext = 0x548;
}

public static class CSkyboxReference {
    public const ulong m_worldGroupId = 0x4b0;
    public const ulong m_hSkyCamera = 0x4b4;
}

public static class CSmokeGrenadeProjectile {
    public const ulong m_nSmokeEffectTickBegin = 0xae0;
    public const ulong m_bDidSmokeEffect = 0xae4;
    public const ulong m_nRandomSeed = 0xae8;
    public const ulong m_vSmokeColor = 0xaec;
    public const ulong m_vSmokeDetonationPos = 0xaf8;
    public const ulong m_VoxelFrameData = 0xb08;
    public const ulong m_flLastBounce = 0xb20;
    public const ulong m_fllastSimulationTime = 0xb24;
}

public static class CSmoothFunc {
    public const ulong m_flSmoothAmplitude = 0x8;
    public const ulong m_flSmoothBias = 0xc;
    public const ulong m_flSmoothDuration = 0x10;
    public const ulong m_flSmoothRemainingTime = 0x14;
    public const ulong m_nSmoothDir = 0x18;
}

public static class CSound {
    public const ulong m_hOwner = 0x0;
    public const ulong m_hTarget = 0x4;
    public const ulong m_iVolume = 0x8;
    public const ulong m_flOcclusionScale = 0xc;
    public const ulong m_iType = 0x10;
    public const ulong m_iNextAudible = 0x14;
    public const ulong m_flExpireTime = 0x18;
    public const ulong m_iNext = 0x1c;
    public const ulong m_bNoExpirationTime = 0x1e;
    public const ulong m_ownerChannelIndex = 0x20;
    public const ulong m_vecOrigin = 0x24;
    public const ulong m_bHasOwner = 0x30;
}

public static class CSoundAreaEntityBase {
    public const ulong m_bDisabled = 0x4b0;
    public const ulong m_iszSoundAreaType = 0x4b8;
    public const ulong m_vPos = 0x4c0;
}

public static class CSoundAreaEntityOrientedBox {
    public const ulong m_vMin = 0x4d0;
    public const ulong m_vMax = 0x4dc;
}

public static class CSoundAreaEntitySphere {
    public const ulong m_flRadius = 0x4d0;
}

public static class CSoundEnt {
    public const ulong m_iFreeSound = 0x4b0;
    public const ulong m_iActiveSound = 0x4b4;
    public const ulong m_cLastActiveSounds = 0x4b8;
    public const ulong m_SoundPool = 0x4bc;
}

public static class CSoundEnvelope {
    public const ulong m_current = 0x0;
    public const ulong m_target = 0x4;
    public const ulong m_rate = 0x8;
    public const ulong m_forceupdate = 0xc;
}

public static class CSoundEventAABBEntity {
    public const ulong m_vMins = 0x558;
    public const ulong m_vMaxs = 0x564;
}

public static class CSoundEventEntity {
    public const ulong m_bStartOnSpawn = 0x4b0;
    public const ulong m_bToLocalPlayer = 0x4b1;
    public const ulong m_bStopOnNew = 0x4b2;
    public const ulong m_bSaveRestore = 0x4b3;
    public const ulong m_bSavedIsPlaying = 0x4b4;
    public const ulong m_flSavedElapsedTime = 0x4b8;
    public const ulong m_iszSourceEntityName = 0x4c0;
    public const ulong m_iszAttachmentName = 0x4c8;
    public const ulong m_onGUIDChanged = 0x4d0;
    public const ulong m_onSoundFinished = 0x4f8;
    public const ulong m_iszSoundName = 0x540;
    public const ulong m_hSource = 0x550;
}

public static class CSoundEventOBBEntity {
    public const ulong m_vMins = 0x558;
    public const ulong m_vMaxs = 0x564;
}

public static class CSoundEventParameter {
    public const ulong m_iszParamName = 0x4b8;
    public const ulong m_flFloatValue = 0x4c0;
}

public static class CSoundEventPathCornerEntity {
    public const ulong m_iszPathCorner = 0x558;
    public const ulong m_iCountMax = 0x560;
    public const ulong m_flDistanceMax = 0x564;
    public const ulong m_flDistMaxSqr = 0x568;
    public const ulong m_flDotProductMax = 0x56c;
    public const ulong bPlaying = 0x570;
}

public static class CSoundOpvarSetAABBEntity {
    public const ulong m_vDistanceInnerMins = 0x648;
    public const ulong m_vDistanceInnerMaxs = 0x654;
    public const ulong m_vDistanceOuterMins = 0x660;
    public const ulong m_vDistanceOuterMaxs = 0x66c;
    public const ulong m_nAABBDirection = 0x678;
    public const ulong m_vInnerMins = 0x67c;
    public const ulong m_vInnerMaxs = 0x688;
    public const ulong m_vOuterMins = 0x694;
    public const ulong m_vOuterMaxs = 0x6a0;
}

public static class CSoundOpvarSetEntity {
    public const ulong m_iszStackName = 0x4b8;
    public const ulong m_iszOperatorName = 0x4c0;
    public const ulong m_iszOpvarName = 0x4c8;
    public const ulong m_nOpvarType = 0x4d0;
    public const ulong m_nOpvarIndex = 0x4d4;
    public const ulong m_flOpvarValue = 0x4d8;
    public const ulong m_OpvarValueString = 0x4e0;
    public const ulong m_bSetOnSpawn = 0x4e8;
}

public static class CSoundOpvarSetOBBWindEntity {
    public const ulong m_vMins = 0x548;
    public const ulong m_vMaxs = 0x554;
    public const ulong m_vDistanceMins = 0x560;
    public const ulong m_vDistanceMaxs = 0x56c;
    public const ulong m_flWindMin = 0x578;
    public const ulong m_flWindMax = 0x57c;
    public const ulong m_flWindMapMin = 0x580;
    public const ulong m_flWindMapMax = 0x584;
}

public static class CSoundOpvarSetPathCornerEntity {
    public const ulong m_flDistMinSqr = 0x660;
    public const ulong m_flDistMaxSqr = 0x664;
    public const ulong m_iszPathCornerEntityName = 0x668;
}

public static class CSoundOpvarSetPointBase {
    public const ulong m_bDisabled = 0x4b0;
    public const ulong m_hSource = 0x4b4;
    public const ulong m_iszSourceEntityName = 0x4c0;
    public const ulong m_vLastPosition = 0x518;
    public const ulong m_iszStackName = 0x528;
    public const ulong m_iszOperatorName = 0x530;
    public const ulong m_iszOpvarName = 0x538;
    public const ulong m_iOpvarIndex = 0x540;
    public const ulong m_bUseAutoCompare = 0x544;
}

public static class CSoundOpvarSetPointEntity {
    public const ulong m_OnEnter = 0x548;
    public const ulong m_OnExit = 0x570;
    public const ulong m_bAutoDisable = 0x598;
    public const ulong m_flDistanceMin = 0x5dc;
    public const ulong m_flDistanceMax = 0x5e0;
    public const ulong m_flDistanceMapMin = 0x5e4;
    public const ulong m_flDistanceMapMax = 0x5e8;
    public const ulong m_flOcclusionRadius = 0x5ec;
    public const ulong m_flOcclusionMin = 0x5f0;
    public const ulong m_flOcclusionMax = 0x5f4;
    public const ulong m_flValSetOnDisable = 0x5f8;
    public const ulong m_bSetValueOnDisable = 0x5fc;
    public const ulong m_nSimulationMode = 0x600;
    public const ulong m_nVisibilitySamples = 0x604;
    public const ulong m_vDynamicProxyPoint = 0x608;
    public const ulong m_flDynamicMaximumOcclusion = 0x614;
    public const ulong m_hDynamicEntity = 0x618;
    public const ulong m_iszDynamicEntityName = 0x620;
    public const ulong m_flPathingDistanceNormFactor = 0x628;
    public const ulong m_vPathingSourcePos = 0x62c;
    public const ulong m_vPathingListenerPos = 0x638;
    public const ulong m_nPathingSourceIndex = 0x644;
}

public static class CSoundPatch {
    public const ulong m_pitch = 0x8;
    public const ulong m_volume = 0x18;
    public const ulong m_shutdownTime = 0x30;
    public const ulong m_flLastTime = 0x34;
    public const ulong m_iszSoundScriptName = 0x38;
    public const ulong m_hEnt = 0x40;
    public const ulong m_soundEntityIndex = 0x44;
    public const ulong m_soundOrigin = 0x48;
    public const ulong m_isPlaying = 0x54;
    public const ulong m_Filter = 0x58;
    public const ulong m_flCloseCaptionDuration = 0x80;
    public const ulong m_bUpdatedSoundOrigin = 0x84;
    public const ulong m_iszClassName = 0x88;
}

public static class CSoundStackSave {
    public const ulong m_iszStackName = 0x4b0;
}

public static class CSpotlightEnd {
    public const ulong m_flLightScale = 0x700;
    public const ulong m_Radius = 0x704;
    public const ulong m_vSpotlightDir = 0x708;
    public const ulong m_vSpotlightOrg = 0x714;
}

public static class CSprite {
    public const ulong m_hSpriteMaterial = 0x700;
    public const ulong m_hAttachedToEntity = 0x708;
    public const ulong m_nAttachment = 0x70c;
    public const ulong m_flSpriteFramerate = 0x710;
    public const ulong m_flFrame = 0x714;
    public const ulong m_flDieTime = 0x718;
    public const ulong m_nBrightness = 0x728;
    public const ulong m_flBrightnessDuration = 0x72c;
    public const ulong m_flSpriteScale = 0x730;
    public const ulong m_flScaleDuration = 0x734;
    public const ulong m_bWorldSpaceScale = 0x738;
    public const ulong m_flGlowProxySize = 0x73c;
    public const ulong m_flHDRColorScale = 0x740;
    public const ulong m_flLastTime = 0x744;
    public const ulong m_flMaxFrame = 0x748;
    public const ulong m_flStartScale = 0x74c;
    public const ulong m_flDestScale = 0x750;
    public const ulong m_flScaleTimeStart = 0x754;
    public const ulong m_nStartBrightness = 0x758;
    public const ulong m_nDestBrightness = 0x75c;
    public const ulong m_flBrightnessTimeStart = 0x760;
    public const ulong m_nSpriteWidth = 0x764;
    public const ulong m_nSpriteHeight = 0x768;
}

public static class CStopwatch {
    public const ulong m_interval = 0xc;
}

public static class CStopwatchBase {
    public const ulong m_fIsRunning = 0x8;
}

public static class CSun {
    public const ulong m_vDirection = 0x700;
    public const ulong m_clrOverlay = 0x70c;
    public const ulong m_iszEffectName = 0x710;
    public const ulong m_iszSSEffectName = 0x718;
    public const ulong m_bOn = 0x720;
    public const ulong m_bmaxColor = 0x721;
    public const ulong m_flSize = 0x724;
    public const ulong m_flRotation = 0x728;
    public const ulong m_flHazeScale = 0x72c;
    public const ulong m_flAlphaHaze = 0x730;
    public const ulong m_flAlphaHdr = 0x734;
    public const ulong m_flAlphaScale = 0x738;
    public const ulong m_flHDRColorScale = 0x73c;
    public const ulong m_flFarZScale = 0x740;
}

public static class CSurvivalGameRules {
    public const ulong m_bBoundsInitialized = 0x8;
    public const ulong m_vecPlayAreaMins = 0xc;
    public const ulong m_vecPlayAreaMaxs = 0x18;
    public const ulong m_iPlayerSpawnHexIndices = 0x24;
    public const ulong m_SpawnTileState = 0x124;
    public const ulong m_flSpawnSelectionTimeStartCurrentStage = 0x204;
    public const ulong m_flSpawnSelectionTimeEndCurrentStage = 0x208;
    public const ulong m_flSpawnSelectionTimeEndLastStage = 0x20c;
    public const ulong m_spawnStage = 0x210;
    public const ulong m_flTabletHexOriginX = 0x214;
    public const ulong m_flTabletHexOriginY = 0x218;
    public const ulong m_flTabletHexSize = 0x21c;
    public const ulong m_roundData_playerXuids = 0x220;
    public const ulong m_roundData_playerPositions = 0x420;
    public const ulong m_roundData_playerTeams = 0x520;
    public const ulong m_SurvivalGameRuleDecisionTypes = 0x620;
    public const ulong m_SurvivalGameRuleDecisionValues = 0x660;
    public const ulong m_flSurvivalStartTime = 0x6a0;
    public const ulong m_flLastThinkTime = 0x6a4;
    public const ulong m_nBlockedTileIndices = 0x6a8;
    public const ulong m_vecPlayerSpawnLocations = 0x790;
    public const ulong m_bWaitingForMoreThanOnePlayer = 0x7a8;
    public const ulong m_bSurvivalEventFired_FadeEveryoneOutFromMapSelection = 0x7a9;
    public const ulong m_bSurvivalEventFired_TimeForSmokeBeacons = 0x7aa;
    public const ulong m_bSurvivalEventFired_FirstParadropIncoming = 0x7ab;
    public const ulong m_bSurvivalEventFired_WarnedEveryoneAboutRespawnEnding = 0x7ac;
    public const ulong m_flLastWinConditionDetectedTime = 0x7b0;
    public const ulong m_nWinConditionStageProgress = 0x7b4;
    public const ulong m_nEntIndexOfRunnerUpPlayer = 0x7b8;
    public const ulong m_nEntIndexOfKilledPlayerCheckingWinConditions = 0x7bc;
    public const ulong m_flTimeOfLastParadrop = 0x7c0;
    public const ulong m_bSurvivalEventFired_PlayedWinnerSurrenderAnim = 0x7f8;
    public const ulong m_hWinnerPlayer = 0x7fc;
    public const ulong m_vecLoadedOutPlayers = 0x800;
    public const ulong m_vecRespawnedPlayers = 0x818;
    public const ulong m_vecMetalCrates = 0x830;
    public const ulong m_flLastDroneSpawnTime = 0x848;
    public const ulong m_hSpawnChopper = 0x868;
}

public static class CSurvivalSpawnChopper {
    public const ulong m_pSoundLoop = 0x930;
    public const ulong m_flSpawnTimeStamp = 0x938;
    public const ulong m_flFlightPathRotationOffset = 0x93c;
    public const ulong m_bFlipX = 0x940;
    public const ulong m_bFlipY = 0x941;
    public const ulong m_bCircling = 0x942;
    public const ulong m_flLastPassengerCheckTime = 0x944;
}

public static class CTablet {
    public const ulong m_bPendingBuyMenu = 0xe88;
    public const ulong m_flUpgradeExpirationTime = 0xe8c;
    public const ulong m_vecLocalHexFlags = 0xe9c;
    public const ulong m_nContractKillGridIndex = 0xf44;
    public const ulong m_nContractKillGridHighResIndex = 0xf48;
    public const ulong m_bTabletReceptionIsBlocked = 0xf4c;
    public const ulong m_flScanProgress = 0xf50;
    public const ulong m_flBootTime = 0xf54;
    public const ulong m_flShowMapTime = 0xf58;
    public const ulong m_vecNearestMetalCratePos = 0xf5c;
    public const ulong m_skinState = 0xf68;
    public const ulong m_vecNotificationIds = 0xf6c;
    public const ulong m_vecNotificationTimestamps = 0xf8c;
    public const ulong m_nLastPurchaseIndex = 0xfac;
    public const ulong m_vecPlayerPositionHistory = 0xfb0;
    public const ulong m_vecLastPlayerPosition = 0x10d0;
    public const ulong m_flNextCheckForIncomingDronesTime = 0x10d8;
    public const ulong m_flLastPlayerOccupiedGridUpdate = 0x10dc;
    public const ulong m_flLastTabletBlockedTime = 0x10e0;
    public const ulong m_flLastClosePoseParamVal = 0x1190;
}

public static class CTakeDamageInfo {
    public const ulong m_vecDamageForce = 0x8;
    public const ulong m_vecDamagePosition = 0x14;
    public const ulong m_vecReportedPosition = 0x20;
    public const ulong m_vecDamageDirection = 0x2c;
    public const ulong m_hInflictor = 0x38;
    public const ulong m_hAttacker = 0x3c;
    public const ulong m_hAbility = 0x40;
    public const ulong m_flDamage = 0x44;
    public const ulong m_bitsDamageType = 0x48;
    public const ulong m_iDamageCustom = 0x4c;
    public const ulong m_iAmmoType = 0x50;
    public const ulong m_flOriginalDamage = 0x60;
    public const ulong m_bShouldBleed = 0x64;
    public const ulong m_bShouldSpark = 0x65;
    public const ulong m_nDamageFlags = 0x70;
    public const ulong m_nNumObjectsPenetrated = 0x74;
    public const ulong m_hScriptInstance = 0x78;
    public const ulong m_bInTakeDamageFlow = 0x98;
}

public static class CTakeDamageResult {
    public const ulong m_nHealthLost = 0x0;
    public const ulong m_nDamageTaken = 0x4;
}

public static class CTakeDamageSummaryScopeGuard {
    public const ulong m_vecSummaries = 0x8;
}

public static class CTankTargetChange {
    public const ulong m_newTarget = 0x4b0;
    public const ulong m_newTargetName = 0x4c0;
}

public static class CTankTrainAI {
    public const ulong m_hTrain = 0x4b0;
    public const ulong m_hTargetEntity = 0x4b4;
    public const ulong m_soundPlaying = 0x4b8;
    public const ulong m_startSoundName = 0x4d0;
    public const ulong m_engineSoundName = 0x4d8;
    public const ulong m_movementSoundName = 0x4e0;
    public const ulong m_targetEntityName = 0x4e8;
}

public static class CTeam {
    public const ulong m_aPlayerControllers = 0x4b0;
    public const ulong m_aPlayers = 0x4c8;
    public const ulong m_iScore = 0x4e0;
    public const ulong m_szTeamname = 0x4e4;
}

public static class CTestEffect {
    public const ulong m_iLoop = 0x4b0;
    public const ulong m_iBeam = 0x4b4;
    public const ulong m_pBeam = 0x4b8;
    public const ulong m_flBeamTime = 0x578;
    public const ulong m_flStartTime = 0x5d8;
}

public static class CTextureBasedAnimatable {
    public const ulong m_bLoop = 0x700;
    public const ulong m_flFPS = 0x704;
    public const ulong m_hPositionKeys = 0x708;
    public const ulong m_hRotationKeys = 0x710;
    public const ulong m_vAnimationBoundsMin = 0x718;
    public const ulong m_vAnimationBoundsMax = 0x724;
    public const ulong m_flStartTime = 0x730;
    public const ulong m_flStartFrame = 0x734;
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

public static class CTimerEntity {
    public const ulong m_OnTimer = 0x4b0;
    public const ulong m_OnTimerHigh = 0x4d8;
    public const ulong m_OnTimerLow = 0x500;
    public const ulong m_iDisabled = 0x528;
    public const ulong m_flInitialDelay = 0x52c;
    public const ulong m_flRefireTime = 0x530;
    public const ulong m_bUpDownState = 0x534;
    public const ulong m_iUseRandomTime = 0x538;
    public const ulong m_bPauseAfterFiring = 0x53c;
    public const ulong m_flLowerRandomBound = 0x540;
    public const ulong m_flUpperRandomBound = 0x544;
    public const ulong m_flRemainingTime = 0x548;
    public const ulong m_bPaused = 0x54c;
}

public static class CTonemapController2 {
    public const ulong m_flAutoExposureMin = 0x4b0;
    public const ulong m_flAutoExposureMax = 0x4b4;
    public const ulong m_flTonemapPercentTarget = 0x4b8;
    public const ulong m_flTonemapPercentBrightPixels = 0x4bc;
    public const ulong m_flTonemapMinAvgLum = 0x4c0;
    public const ulong m_flExposureAdaptationSpeedUp = 0x4c4;
    public const ulong m_flExposureAdaptationSpeedDown = 0x4c8;
    public const ulong m_flTonemapEVSmoothingRange = 0x4cc;
}

public static class CTonemapTrigger {
    public const ulong m_tonemapControllerName = 0x8a8;
    public const ulong m_hTonemapController = 0x8b0;
}

public static class CTriggerActiveWeaponDetect {
    public const ulong m_OnTouchedActiveWeapon = 0x8a8;
    public const ulong m_iszWeaponClassName = 0x8d0;
}

public static class CTriggerBrush {
    public const ulong m_OnStartTouch = 0x700;
    public const ulong m_OnEndTouch = 0x728;
    public const ulong m_OnUse = 0x750;
    public const ulong m_iInputFilter = 0x778;
    public const ulong m_iDontMessageParent = 0x77c;
}

public static class CTriggerBuoyancy {
    public const ulong m_BuoyancyHelper = 0x8a8;
    public const ulong m_flFluidDensity = 0x8d0;
}

public static class CTriggerDetectBulletFire {
    public const ulong m_bPlayerFireOnly = 0x8a8;
    public const ulong m_OnDetectedBulletFire = 0x8b0;
}

public static class CTriggerDetectExplosion {
    public const ulong m_OnDetectedExplosion = 0x8e0;
}

public static class CTriggerFan {
    public const ulong m_vFanOrigin = 0x8a8;
    public const ulong m_vFanEnd = 0x8b4;
    public const ulong m_vNoise = 0x8c0;
    public const ulong m_flForce = 0x8cc;
    public const ulong m_flPlayerForce = 0x8d0;
    public const ulong m_flRampTime = 0x8d4;
    public const ulong m_bFalloff = 0x8d8;
    public const ulong m_bPushPlayer = 0x8d9;
    public const ulong m_bRampDown = 0x8da;
    public const ulong m_bAddNoise = 0x8db;
    public const ulong m_RampTimer = 0x8e0;
}

public static class CTriggerGameEvent {
    public const ulong m_strStartTouchEventName = 0x8a8;
    public const ulong m_strEndTouchEventName = 0x8b0;
    public const ulong m_strTriggerID = 0x8b8;
}

public static class CTriggerHurt {
    public const ulong m_flOriginalDamage = 0x8a8;
    public const ulong m_flDamage = 0x8ac;
    public const ulong m_flDamageCap = 0x8b0;
    public const ulong m_flLastDmgTime = 0x8b4;
    public const ulong m_flForgivenessDelay = 0x8b8;
    public const ulong m_bitsDamageInflict = 0x8bc;
    public const ulong m_damageModel = 0x8c0;
    public const ulong m_bNoDmgForce = 0x8c4;
    public const ulong m_vDamageForce = 0x8c8;
    public const ulong m_thinkAlways = 0x8d4;
    public const ulong m_hurtThinkPeriod = 0x8d8;
    public const ulong m_OnHurt = 0x8e0;
    public const ulong m_OnHurtPlayer = 0x908;
    public const ulong m_hurtEntities = 0x930;
}

public static class CTriggerImpact {
    public const ulong m_flMagnitude = 0x8d0;
    public const ulong m_flNoise = 0x8d4;
    public const ulong m_flViewkick = 0x8d8;
    public const ulong m_pOutputForce = 0x8e0;
}

public static class CTriggerLerpObject {
    public const ulong m_iszLerpTarget = 0x8a8;
    public const ulong m_hLerpTarget = 0x8b0;
    public const ulong m_iszLerpTargetAttachment = 0x8b8;
    public const ulong m_hLerpTargetAttachment = 0x8c0;
    public const ulong m_flLerpDuration = 0x8c4;
    public const ulong m_bLerpRestoreMoveType = 0x8c8;
    public const ulong m_bSingleLerpObject = 0x8c9;
    public const ulong m_vecLerpingObjects = 0x8d0;
    public const ulong m_iszLerpEffect = 0x8e8;
    public const ulong m_iszLerpSound = 0x8f0;
    public const ulong m_OnLerpStarted = 0x8f8;
    public const ulong m_OnLerpFinished = 0x920;
}

public static class CTriggerLook {
    public const ulong m_hLookTarget = 0x8d0;
    public const ulong m_flFieldOfView = 0x8d4;
    public const ulong m_flLookTime = 0x8d8;
    public const ulong m_flLookTimeTotal = 0x8dc;
    public const ulong m_flLookTimeLast = 0x8e0;
    public const ulong m_flTimeoutDuration = 0x8e4;
    public const ulong m_bTimeoutFired = 0x8e8;
    public const ulong m_bIsLooking = 0x8e9;
    public const ulong m_b2DFOV = 0x8ea;
    public const ulong m_bUseVelocity = 0x8eb;
    public const ulong m_hActivator = 0x8ec;
    public const ulong m_bTestOcclusion = 0x8f0;
    public const ulong m_OnTimeout = 0x8f8;
    public const ulong m_OnStartLook = 0x920;
    public const ulong m_OnEndLook = 0x948;
}

public static class CTriggerMultiple {
    public const ulong m_OnTrigger = 0x8a8;
}

public static class CTriggerPhysics {
    public const ulong m_gravityScale = 0x8b8;
    public const ulong m_linearLimit = 0x8bc;
    public const ulong m_linearDamping = 0x8c0;
    public const ulong m_angularLimit = 0x8c4;
    public const ulong m_angularDamping = 0x8c8;
    public const ulong m_linearForce = 0x8cc;
    public const ulong m_flFrequency = 0x8d0;
    public const ulong m_flDampingRatio = 0x8d4;
    public const ulong m_vecLinearForcePointAt = 0x8d8;
    public const ulong m_bCollapseToForcePoint = 0x8e4;
    public const ulong m_vecLinearForcePointAtWorld = 0x8e8;
    public const ulong m_vecLinearForceDirection = 0x8f4;
    public const ulong m_bConvertToDebrisWhenPossible = 0x900;
}

public static class CTriggerProximity {
    public const ulong m_hMeasureTarget = 0x8a8;
    public const ulong m_iszMeasureTarget = 0x8b0;
    public const ulong m_fRadius = 0x8b8;
    public const ulong m_nTouchers = 0x8bc;
    public const ulong m_NearestEntityDistance = 0x8c0;
}

public static class CTriggerPush {
    public const ulong m_angPushEntitySpace = 0x8a8;
    public const ulong m_vecPushDirEntitySpace = 0x8b4;
    public const ulong m_bTriggerOnStartTouch = 0x8c0;
    public const ulong m_flAlternateTicksFix = 0x8c4;
    public const ulong m_flPushSpeed = 0x8c8;
}

public static class CTriggerRemove {
    public const ulong m_OnRemove = 0x8a8;
}

public static class CTriggerSafeMoneyGather {
    public const ulong m_vecCashBundles = 0x8a8;
}

public static class CTriggerSave {
    public const ulong m_bForceNewLevelUnit = 0x8a8;
    public const ulong m_fDangerousTimer = 0x8ac;
    public const ulong m_minHitPoints = 0x8b0;
}

public static class CTriggerSndSosOpvar {
    public const ulong m_hTouchingPlayers = 0x8a8;
    public const ulong m_flPosition = 0x8c0;
    public const ulong m_flCenterSize = 0x8cc;
    public const ulong m_flMinVal = 0x8d0;
    public const ulong m_flMaxVal = 0x8d4;
    public const ulong m_flWait = 0x8d8;
    public const ulong m_opvarName = 0x8e0;
    public const ulong m_stackName = 0x8e8;
    public const ulong m_operatorName = 0x8f0;
    public const ulong m_bVolIs2D = 0x8f8;
    public const ulong m_opvarNameChar = 0x8f9;
    public const ulong m_stackNameChar = 0x9f9;
    public const ulong m_operatorNameChar = 0xaf9;
    public const ulong m_VecNormPos = 0xbfc;
    public const ulong m_flNormCenterSize = 0xc08;
}

public static class CTriggerSoundscape {
    public const ulong m_hSoundscape = 0x8a8;
    public const ulong m_SoundscapeName = 0x8b0;
    public const ulong m_spectators = 0x8b8;
}

public static class CTriggerTeleport {
    public const ulong m_iLandmark = 0x8a8;
    public const ulong m_bUseLandmarkAngles = 0x8b0;
    public const ulong m_bMirrorPlayer = 0x8b1;
}

public static class CTriggerToggleSave {
    public const ulong m_bDisabled = 0x8a8;
}

public static class CTriggerVolume {
    public const ulong m_iFilterName = 0x700;
    public const ulong m_hFilter = 0x708;
}

public static class CTripWireFireProjectile {
    public const ulong m_flAttachTime = 0xa68;
    public const ulong m_vecTripWireEndPositions = 0xa6c;
    public const ulong m_bTripWireEndPositionsUsed = 0xae4;
    public const ulong m_hStuckToEnt = 0xaf0;
    public const ulong m_nLastStuckToEntModelIndex = 0xaf4;
    public const ulong m_xformStuckToEnt = 0xb00;
    public const ulong m_vecTrapSetPosition = 0xb20;
    public const ulong m_nWireSoundsPlayed = 0xb2c;
}

public static class CVoteController {
    public const ulong m_iActiveIssueIndex = 0x4b0;
    public const ulong m_iOnlyTeamToVote = 0x4b4;
    public const ulong m_nVoteOptionCount = 0x4b8;
    public const ulong m_nPotentialVotes = 0x4cc;
    public const ulong m_bIsYesNoVote = 0x4d0;
    public const ulong m_acceptingVotesTimer = 0x4d8;
    public const ulong m_executeCommandTimer = 0x4f0;
    public const ulong m_resetVoteTimer = 0x508;
    public const ulong m_arrVotedUsers = 0x520;
    public const ulong m_nVotesCast = 0x538;
    public const ulong m_playerHoldingVote = 0x638;
    public const ulong m_playerOverrideForVote = 0x63c;
    public const ulong m_nHighestCountIndex = 0x640;
    public const ulong m_potentialIssues = 0x648;
    public const ulong m_VoteOptions = 0x660;
}

public static class CWeaponBaseItem {
    public const ulong m_SequenceCompleteTimer = 0xe80;
    public const ulong m_bRedraw = 0xe98;
}

public static class CWeaponCSBase {
    public const ulong m_flFireSequenceStartTime = 0xd30;
    public const ulong m_nFireSequenceStartTimeChange = 0xd34;
    public const ulong m_nFireSequenceStartTimeAck = 0xd38;
    public const ulong m_bPlayerFireEventIsPrimary = 0xd3c;
    public const ulong m_seqIdle = 0xd40;
    public const ulong m_seqFirePrimary = 0xd44;
    public const ulong m_seqFireSecondary = 0xd48;
    public const ulong m_bPlayerAmmoStockOnPickup = 0xd58;
    public const ulong m_bRequireUseToTouch = 0xd59;
    public const ulong m_flLastTimeInAir = 0xd5c;
    public const ulong m_flLastDeployTime = 0xd60;
    public const ulong m_nViewModelIndex = 0xd64;
    public const ulong m_bReloadsWithClips = 0xd68;
    public const ulong m_flTimeWeaponIdle = 0xd88;
    public const ulong m_bFireOnEmpty = 0xd8c;
    public const ulong m_OnPlayerPickup = 0xd90;
    public const ulong m_weaponMode = 0xdb8;
    public const ulong m_flTurningInaccuracyDelta = 0xdbc;
    public const ulong m_vecTurningInaccuracyEyeDirLast = 0xdc0;
    public const ulong m_flTurningInaccuracy = 0xdcc;
    public const ulong m_fAccuracyPenalty = 0xdd0;
    public const ulong m_flLastAccuracyUpdateTime = 0xdd4;
    public const ulong m_fAccuracySmoothedForZoom = 0xdd8;
    public const ulong m_fScopeZoomEndTime = 0xddc;
    public const ulong m_iRecoilIndex = 0xde0;
    public const ulong m_flRecoilIndex = 0xde4;
    public const ulong m_bBurstMode = 0xde8;
    public const ulong m_flPostponeFireReadyTime = 0xdec;
    public const ulong m_bInReload = 0xdf0;
    public const ulong m_bReloadVisuallyComplete = 0xdf1;
    public const ulong m_flDroppedAtTime = 0xdf4;
    public const ulong m_bIsHauledBack = 0xdf8;
    public const ulong m_bSilencerOn = 0xdf9;
    public const ulong m_flTimeSilencerSwitchComplete = 0xdfc;
    public const ulong m_iOriginalTeamNumber = 0xe00;
    public const ulong m_flNextAttackRenderTimeOffset = 0xe04;
    public const ulong m_bCanBePickedUp = 0xe10;
    public const ulong m_bUseCanOverrideNextOwnerTouchTime = 0xe11;
    public const ulong m_nextOwnerTouchTime = 0xe14;
    public const ulong m_nextPrevOwnerTouchTime = 0xe18;
    public const ulong m_hPrevOwner = 0xe1c;
    public const ulong m_nDropTick = 0xe20;
    public const ulong m_donated = 0xe44;
    public const ulong m_fLastShotTime = 0xe48;
    public const ulong m_bWasOwnedByCT = 0xe4c;
    public const ulong m_bWasOwnedByTerrorist = 0xe4d;
    public const ulong m_bFiredOutOfAmmoEvent = 0xe4e;
    public const ulong m_numRemoveUnownedWeaponThink = 0xe50;
    public const ulong m_IronSightController = 0xe58;
    public const ulong m_iIronSightMode = 0xe70;
    public const ulong m_flLastLOSTraceFailureTime = 0xe74;
    public const ulong m_iNumEmptyAttacks = 0xe78;
}

public static class CWeaponCSBaseGun {
    public const ulong m_zoomLevel = 0xe80;
    public const ulong m_iBurstShotsRemaining = 0xe84;
    public const ulong m_silencedModelIndex = 0xe90;
    public const ulong m_inPrecache = 0xe94;
    public const ulong m_bNeedsBoltAction = 0xe95;
    public const ulong m_bSkillReloadAvailable = 0xe96;
    public const ulong m_bSkillReloadLiftedReloadKey = 0xe97;
    public const ulong m_bSkillBoltInterruptAvailable = 0xe98;
    public const ulong m_bSkillBoltLiftedFireKey = 0xe99;
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

public static class CWeaponShield {
    public const ulong m_flBulletDamageAbsorbed = 0xea0;
    public const ulong m_flLastBulletHitSoundTime = 0xea4;
    public const ulong m_flDisplayHealth = 0xea8;
}

public static class CWeaponTaser {
    public const ulong m_fFireTime = 0xea0;
}

public static class CommandToolCommand_t {
    public const ulong m_bEnabled = 0x0;
    public const ulong m_bOpened = 0x1;
    public const ulong m_InternalId = 0x4;
    public const ulong m_ShortName = 0x8;
    public const ulong m_ExecMode = 0x10;
    public const ulong m_SpawnGroup = 0x18;
    public const ulong m_PeriodicExecDelay = 0x20;
    public const ulong m_SpecType = 0x24;
    public const ulong m_EntitySpec = 0x28;
    public const ulong m_Commands = 0x30;
    public const ulong m_SetDebugBits = 0x38;
    public const ulong m_ClearDebugBits = 0x40;
}

public static class ConceptHistory_t {
    public const ulong timeSpoken = 0x0;
    public const ulong m_response = 0x8;
}

public static class ConstraintSoundInfo {
    public const ulong m_vSampler = 0x8;
    public const ulong m_soundProfile = 0x20;
    public const ulong m_forwardAxis = 0x40;
    public const ulong m_iszTravelSoundFwd = 0x50;
    public const ulong m_iszTravelSoundBack = 0x58;
    public const ulong m_iszReversalSounds = 0x68;
    public const ulong m_bPlayTravelSound = 0x80;
    public const ulong m_bPlayReversalSound = 0x81;
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

public static class Extent {
    public const ulong lo = 0x0;
    public const ulong hi = 0xc;
}

public static class FilterDamageType {
    public const ulong m_iDamageType = 0x508;
}

public static class FilterHealth {
    public const ulong m_bAdrenalineActive = 0x508;
    public const ulong m_iHealthMin = 0x50c;
    public const ulong m_iHealthMax = 0x510;
}

public static class FilterTeam {
    public const ulong m_iFilterTeam = 0x508;
}

public static class GameAmmoTypeInfo_t {
    public const ulong m_nBuySize = 0x38;
    public const ulong m_nCost = 0x3c;
}

public static class GameTick_t {
    public const ulong m_Value = 0x0;
}

public static class GameTime_t {
    public const ulong m_Value = 0x0;
}

public static class HullFlags_t {
    public const ulong m_bHull_Human = 0x0;
    public const ulong m_bHull_SmallCentered = 0x1;
    public const ulong m_bHull_WideHuman = 0x2;
    public const ulong m_bHull_Tiny = 0x3;
    public const ulong m_bHull_Medium = 0x4;
    public const ulong m_bHull_TinyCentered = 0x5;
    public const ulong m_bHull_Large = 0x6;
    public const ulong m_bHull_LargeCentered = 0x7;
    public const ulong m_bHull_MediumTall = 0x8;
    public const ulong m_bHull_Small = 0x9;
}

public static class IntervalTimer {
    public const ulong m_timestamp = 0x8;
    public const ulong m_nWorldGroupId = 0xc;
}

public static class ModelConfigHandle_t {
    public const ulong m_Value = 0x0;
}

public static class ParticleIndex_t {
    public const ulong m_Value = 0x0;
}

public static class PhysicsRagdollPose_t {
    public const ulong __m_pChainEntity = 0x8;
    public const ulong m_Transforms = 0x30;
    public const ulong m_hOwner = 0x48;
}

public static class RagdollCreationParams_t {
    public const ulong m_vForce = 0x0;
    public const ulong m_nForceBone = 0xc;
}

public static class RelationshipOverride_t {
    public const ulong entity = 0x8;
    public const ulong classType = 0xc;
}

public static class Relationship_t {
    public const ulong disposition = 0x0;
    public const ulong priority = 0x4;
}

public static class ResponseContext_t {
    public const ulong m_iszName = 0x0;
    public const ulong m_iszValue = 0x8;
    public const ulong m_fExpirationTime = 0x10;
}

public static class ResponseFollowup {
    public const ulong followup_concept = 0x0;
    public const ulong followup_contexts = 0x8;
    public const ulong followup_delay = 0x10;
    public const ulong followup_target = 0x14;
    public const ulong followup_entityiotarget = 0x1c;
    public const ulong followup_entityioinput = 0x24;
    public const ulong followup_entityiodelay = 0x2c;
    public const ulong bFired = 0x30;
}

public static class ResponseParams {
    public const ulong odds = 0x10;
    public const ulong flags = 0x12;
    public const ulong m_pFollowup = 0x18;
}

public static class SellbackPurchaseEntry_t {
    public const ulong m_unDefIdx = 0x30;
    public const ulong m_nCost = 0x34;
    public const ulong m_nPrevArmor = 0x38;
    public const ulong m_bPrevHelmet = 0x3c;
    public const ulong m_hItem = 0x40;
}

public static class SimpleConstraintSoundProfile {
    public const ulong eKeypoints = 0x8;
    public const ulong m_keyPoints = 0xc;
    public const ulong m_reversalSoundThresholds = 0x14;
}

public static class SpawnPoint {
    public const ulong m_iPriority = 0x4b0;
    public const ulong m_bEnabled = 0x4b4;
    public const ulong m_nType = 0x4b8;
}

public static class SpawnPointCoopEnemy {
    public const ulong m_szWeaponsToGive = 0x4c0;
    public const ulong m_szPlayerModelToUse = 0x4c8;
    public const ulong m_nArmorToSpawnWith = 0x4d0;
    public const ulong m_nDefaultBehavior = 0x4d4;
    public const ulong m_nBotDifficulty = 0x4d8;
    public const ulong m_bIsAgressive = 0x4dc;
    public const ulong m_bStartAsleep = 0x4dd;
    public const ulong m_flHideRadius = 0x4e0;
    public const ulong m_szBehaviorTreeFile = 0x4f0;
}

public static class SummaryTakeDamageInfo_t {
    public const ulong nSummarisedCount = 0x0;
    public const ulong info = 0x8;
    public const ulong result = 0xa8;
    public const ulong hTarget = 0xb0;
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

public static class VelocitySampler {
    public const ulong m_prevSample = 0x0;
    public const ulong m_fPrevSampleTime = 0xc;
    public const ulong m_fIdealSampleRate = 0x10;
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

public static class dynpitchvol_base_t {
    public const ulong preset = 0x0;
    public const ulong pitchrun = 0x4;
    public const ulong pitchstart = 0x8;
    public const ulong spinup = 0xc;
    public const ulong spindown = 0x10;
    public const ulong volrun = 0x14;
    public const ulong volstart = 0x18;
    public const ulong fadein = 0x1c;
    public const ulong fadeout = 0x20;
    public const ulong lfotype = 0x24;
    public const ulong lforate = 0x28;
    public const ulong lfomodpitch = 0x2c;
    public const ulong lfomodvol = 0x30;
    public const ulong cspinup = 0x34;
    public const ulong cspincount = 0x38;
    public const ulong pitch = 0x3c;
    public const ulong spinupsav = 0x40;
    public const ulong spindownsav = 0x44;
    public const ulong pitchfrac = 0x48;
    public const ulong vol = 0x4c;
    public const ulong fadeinsav = 0x50;
    public const ulong fadeoutsav = 0x54;
    public const ulong volfrac = 0x58;
    public const ulong lfofrac = 0x5c;
    public const ulong lfomult = 0x60;
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

public static class fogplayerparams_t {
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

public static class hudtextparms_t {
    public const ulong color1 = 0x0;
    public const ulong color2 = 0x4;
    public const ulong effect = 0x8;
    public const ulong channel = 0x9;
    public const ulong x = 0xc;
    public const ulong y = 0x10;
}

public static class lerpdata_t {
    public const ulong m_hEnt = 0x0;
    public const ulong m_MoveType = 0x4;
    public const ulong m_flStartTime = 0x8;
    public const ulong m_vecStartOrigin = 0xc;
    public const ulong m_qStartRot = 0x20;
    public const ulong m_nFXIndex = 0x30;
}

public static class locksound_t {
    public const ulong sLockedSound = 0x8;
    public const ulong sUnlockedSound = 0x10;
    public const ulong flwaitSound = 0x18;
}

public static class magnetted_objects_t {
    public const ulong hEntity = 0x8;
}

public static class ragdoll_t {
    public const ulong list = 0x0;
    public const ulong boneIndex = 0x18;
    public const ulong allowStretch = 0x30;
    public const ulong unused = 0x31;
}

public static class ragdollelement_t {
    public const ulong originParentSpace = 0x0;
    public const ulong parentIndex = 0x20;
    public const ulong m_flRadius = 0x24;
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

public static class thinkfunc_t {
    public const ulong m_hFn = 0x8;
    public const ulong m_nContext = 0x10;
    public const ulong m_nNextThinkTick = 0x14;
    public const ulong m_nLastThinkTick = 0x18;
}