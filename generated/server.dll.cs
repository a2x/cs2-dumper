public static class ActiveModelConfig_t {
    public const nint m_Handle = 0x28;
    public const nint m_Name = 0x30;
    public const nint m_AssociatedEntities = 0x38;
    public const nint m_AssociatedEntityNames = 0x50;
}

public static class AmmoIndex_t {
    public const nint m_Value = 0x0;
}

public static class AmmoTypeInfo_t {
    public const nint m_nMaxCarry = 0x10;
    public const nint m_nSplashSize = 0x1C;
    public const nint m_nFlags = 0x24;
    public const nint m_flMass = 0x28;
    public const nint m_flSpeed = 0x2C;
}

public static class AnimationUpdateListHandle_t {
    public const nint m_Value = 0x0;
}

public static class CAISound {
    public const nint m_iSoundType = 0x4B0;
    public const nint m_iSoundContext = 0x4B4;
    public const nint m_iVolume = 0x4B8;
    public const nint m_iSoundIndex = 0x4BC;
    public const nint m_flDuration = 0x4C0;
    public const nint m_iszProxyEntityName = 0x4C8;
}

public static class CAI_ChangeHintGroup {
    public const nint m_iSearchType = 0x4B0;
    public const nint m_strSearchName = 0x4B8;
    public const nint m_strNewHintGroup = 0x4C0;
    public const nint m_flRadius = 0x4C8;
}

public static class CAI_ChangeTarget {
    public const nint m_iszNewTarget = 0x4B0;
}

public static class CAI_Expresser {
    public const nint m_flStopTalkTime = 0x38;
    public const nint m_flStopTalkTimeWithoutDelay = 0x3C;
    public const nint m_flBlockedTalkTime = 0x40;
    public const nint m_voicePitch = 0x44;
    public const nint m_flLastTimeAcceptedSpeak = 0x48;
    public const nint m_bAllowSpeakingInterrupts = 0x4C;
    public const nint m_bConsiderSceneInvolvementAsSpeech = 0x4D;
    public const nint m_nLastSpokenPriority = 0x50;
    public const nint m_pOuter = 0x58;
}

public static class CAI_ExpresserWithFollowup {
    public const nint m_pPostponedFollowup = 0x60;
}

public static class CAmbientGeneric {
    public const nint m_radius = 0x4B0;
    public const nint m_flMaxRadius = 0x4B4;
    public const nint m_iSoundLevel = 0x4B8;
    public const nint m_dpv = 0x4BC;
    public const nint m_fActive = 0x520;
    public const nint m_fLooping = 0x521;
    public const nint m_iszSound = 0x528;
    public const nint m_sSourceEntName = 0x530;
    public const nint m_hSoundSource = 0x538;
    public const nint m_nSoundSourceEntIndex = 0x53C;
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

public static class CAnimGraphTagRef {
    public const nint m_nTagIndex = 0x0;
    public const nint m_tagName = 0x10;
}

public static class CAttributeContainer {
    public const nint m_Item = 0x50;
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

public static class CBRC4Target {
    public const nint m_hPlayerThatActivatedMe = 0x8B0;
    public const nint m_bBrokenOpen = 0x8B4;
    public const nint m_flRadius = 0x8B8;
}

public static class CBarnLight {
    public const nint m_bEnabled = 0x700;
    public const nint m_nColorMode = 0x704;
    public const nint m_Color = 0x708;
    public const nint m_flColorTemperature = 0x70C;
    public const nint m_flBrightness = 0x710;
    public const nint m_flBrightnessScale = 0x714;
    public const nint m_nDirectLight = 0x718;
    public const nint m_nBakedShadowIndex = 0x71C;
    public const nint m_nLuminaireShape = 0x720;
    public const nint m_flLuminaireSize = 0x724;
    public const nint m_flLuminaireAnisotropy = 0x728;
    public const nint m_LightStyleString = 0x730;
    public const nint m_flLightStyleStartTime = 0x738;
    public const nint m_QueuedLightStyleStrings = 0x740;
    public const nint m_LightStyleEvents = 0x758;
    public const nint m_LightStyleTargets = 0x770;
    public const nint m_StyleEvent = 0x788;
    public const nint m_StyleRadianceVar = 0x828;
    public const nint m_StyleVar = 0x830;
    public const nint m_hLightCookie = 0x858;
    public const nint m_flShape = 0x860;
    public const nint m_flSoftX = 0x864;
    public const nint m_flSoftY = 0x868;
    public const nint m_flSkirt = 0x86C;
    public const nint m_flSkirtNear = 0x870;
    public const nint m_vSizeParams = 0x874;
    public const nint m_flRange = 0x880;
    public const nint m_vShear = 0x884;
    public const nint m_nBakeSpecularToCubemaps = 0x890;
    public const nint m_vBakeSpecularToCubemapsSize = 0x894;
    public const nint m_nCastShadows = 0x8A0;
    public const nint m_nShadowMapSize = 0x8A4;
    public const nint m_nShadowPriority = 0x8A8;
    public const nint m_bContactShadow = 0x8AC;
    public const nint m_nBounceLight = 0x8B0;
    public const nint m_flBounceScale = 0x8B4;
    public const nint m_flMinRoughness = 0x8B8;
    public const nint m_vAlternateColor = 0x8BC;
    public const nint m_fAlternateColorBrightness = 0x8C8;
    public const nint m_nFog = 0x8CC;
    public const nint m_flFogStrength = 0x8D0;
    public const nint m_nFogShadows = 0x8D4;
    public const nint m_flFogScale = 0x8D8;
    public const nint m_flFadeSizeStart = 0x8DC;
    public const nint m_flFadeSizeEnd = 0x8E0;
    public const nint m_flShadowFadeSizeStart = 0x8E4;
    public const nint m_flShadowFadeSizeEnd = 0x8E8;
    public const nint m_bPrecomputedFieldsValid = 0x8EC;
    public const nint m_vPrecomputedBoundsMins = 0x8F0;
    public const nint m_vPrecomputedBoundsMaxs = 0x8FC;
    public const nint m_vPrecomputedOBBOrigin = 0x908;
    public const nint m_vPrecomputedOBBAngles = 0x914;
    public const nint m_vPrecomputedOBBExtent = 0x920;
    public const nint m_bPvsModifyEntity = 0x92C;
}

public static class CBaseAnimGraph {
    public const nint m_bInitiallyPopulateInterpHistory = 0x700;
    public const nint m_bShouldAnimateDuringGameplayPause = 0x701;
    public const nint m_pChoreoServices = 0x708;
    public const nint m_bAnimGraphUpdateEnabled = 0x710;
    public const nint m_flMaxSlopeDistance = 0x714;
    public const nint m_vLastSlopeCheckPos = 0x718;
    public const nint m_bAnimGraphDirty = 0x724;
    public const nint m_vecForce = 0x728;
    public const nint m_nForceBone = 0x734;
    public const nint m_pRagdollPose = 0x748;
    public const nint m_bClientRagdoll = 0x750;
}

public static class CBaseAnimGraphController {
    public const nint m_baseLayer = 0x18;
    public const nint m_animGraphNetworkedVars = 0x40;
    public const nint m_bSequenceFinished = 0x218;
    public const nint m_flLastEventCycle = 0x21C;
    public const nint m_flLastEventAnimTime = 0x220;
    public const nint m_flPlaybackRate = 0x224;
    public const nint m_flPrevAnimTime = 0x22C;
    public const nint m_bClientSideAnimation = 0x230;
    public const nint m_bNetworkedAnimationInputsChanged = 0x231;
    public const nint m_nNewSequenceParity = 0x234;
    public const nint m_nResetEventsParity = 0x238;
    public const nint m_nAnimLoopMode = 0x23C;
    public const nint m_hAnimationUpdate = 0x2DC;
}

public static class CBaseButton {
    public const nint m_angMoveEntitySpace = 0x780;
    public const nint m_fStayPushed = 0x78C;
    public const nint m_fRotating = 0x78D;
    public const nint m_ls = 0x790;
    public const nint m_sUseSound = 0x7B0;
    public const nint m_sLockedSound = 0x7B8;
    public const nint m_sUnlockedSound = 0x7C0;
    public const nint m_bLocked = 0x7C8;
    public const nint m_bDisabled = 0x7C9;
    public const nint m_flUseLockedTime = 0x7CC;
    public const nint m_bSolidBsp = 0x7D0;
    public const nint m_OnDamaged = 0x7D8;
    public const nint m_OnPressed = 0x800;
    public const nint m_OnUseLocked = 0x828;
    public const nint m_OnIn = 0x850;
    public const nint m_OnOut = 0x878;
    public const nint m_nState = 0x8A0;
    public const nint m_hConstraint = 0x8A4;
    public const nint m_hConstraintParent = 0x8A8;
    public const nint m_bForceNpcExclude = 0x8AC;
    public const nint m_sGlowEntity = 0x8B0;
    public const nint m_glowEntity = 0x8B8;
    public const nint m_usable = 0x8BC;
    public const nint m_szDisplayText = 0x8C0;
}

public static class CBaseCSGrenade {
    public const nint m_bRedraw = 0xDF0;
    public const nint m_bIsHeldByPlayer = 0xDF1;
    public const nint m_bPinPulled = 0xDF2;
    public const nint m_bJumpThrow = 0xDF3;
    public const nint m_eThrowStatus = 0xDF4;
    public const nint m_fThrowTime = 0xDF8;
    public const nint m_flThrowStrength = 0xDFC;
    public const nint m_flThrowStrengthApproach = 0xE00;
    public const nint m_fDropTime = 0xE04;
}

public static class CBaseCSGrenadeProjectile {
    public const nint m_vInitialVelocity = 0x9C0;
    public const nint m_nBounces = 0x9CC;
    public const nint m_nExplodeEffectIndex = 0x9D0;
    public const nint m_nExplodeEffectTickBegin = 0x9D8;
    public const nint m_vecExplodeEffectOrigin = 0x9DC;
    public const nint m_unOGSExtraFlags = 0x9E8;
    public const nint m_bDetonationRecorded = 0x9E9;
    public const nint m_flDetonateTime = 0x9EC;
    public const nint m_nItemIndex = 0x9F0;
    public const nint m_vecOriginalSpawnLocation = 0x9F4;
    public const nint m_flLastBounceSoundTime = 0xA00;
    public const nint m_vecGrenadeSpin = 0xA04;
    public const nint m_vecLastHitSurfaceNormal = 0xA10;
    public const nint m_nTicksAtZeroVelocity = 0xA1C;
}

public static class CBaseClientUIEntity {
    public const nint m_bEnabled = 0x700;
    public const nint m_DialogXMLName = 0x708;
    public const nint m_PanelClassName = 0x710;
    public const nint m_PanelID = 0x718;
    public const nint m_CustomOutput0 = 0x720;
    public const nint m_CustomOutput1 = 0x748;
    public const nint m_CustomOutput2 = 0x770;
    public const nint m_CustomOutput3 = 0x798;
    public const nint m_CustomOutput4 = 0x7C0;
    public const nint m_CustomOutput5 = 0x7E8;
    public const nint m_CustomOutput6 = 0x810;
    public const nint m_CustomOutput7 = 0x838;
    public const nint m_CustomOutput8 = 0x860;
    public const nint m_CustomOutput9 = 0x888;
}

public static class CBaseCombatCharacter {
    public const nint m_bForceServerRagdoll = 0x918;
    public const nint m_hMyWearables = 0x920;
    public const nint m_flFieldOfView = 0x938;
    public const nint m_impactEnergyScale = 0x93C;
    public const nint m_LastHitGroup = 0x940;
    public const nint m_bApplyStressDamage = 0x944;
    public const nint m_bloodColor = 0x948;
    public const nint m_navMeshID = 0x9A8;
    public const nint m_iDamageCount = 0x9AC;
    public const nint m_pVecRelationships = 0x9B0;
    public const nint m_strRelationships = 0x9B8;
    public const nint m_eHull = 0x9C0;
    public const nint m_nNavHullIdx = 0x9C4;
}

public static class CBaseDMStart {
    public const nint m_Master = 0x4B0;
}

public static class CBaseDoor {
    public const nint m_angMoveEntitySpace = 0x790;
    public const nint m_vecMoveDirParentSpace = 0x79C;
    public const nint m_ls = 0x7A8;
    public const nint m_bForceClosed = 0x7C8;
    public const nint m_bDoorGroup = 0x7C9;
    public const nint m_bLocked = 0x7CA;
    public const nint m_bIgnoreDebris = 0x7CB;
    public const nint m_eSpawnPosition = 0x7CC;
    public const nint m_flBlockDamage = 0x7D0;
    public const nint m_NoiseMoving = 0x7D8;
    public const nint m_NoiseArrived = 0x7E0;
    public const nint m_NoiseMovingClosed = 0x7E8;
    public const nint m_NoiseArrivedClosed = 0x7F0;
    public const nint m_ChainTarget = 0x7F8;
    public const nint m_OnBlockedClosing = 0x800;
    public const nint m_OnBlockedOpening = 0x828;
    public const nint m_OnUnblockedClosing = 0x850;
    public const nint m_OnUnblockedOpening = 0x878;
    public const nint m_OnFullyClosed = 0x8A0;
    public const nint m_OnFullyOpen = 0x8C8;
    public const nint m_OnClose = 0x8F0;
    public const nint m_OnOpen = 0x918;
    public const nint m_OnLockedUse = 0x940;
    public const nint m_bLoopMoveSound = 0x968;
    public const nint m_bCreateNavObstacle = 0x980;
    public const nint m_isChaining = 0x981;
    public const nint m_bIsUsable = 0x982;
}

public static class CBaseEntity {
    public const nint m_CBodyComponent = 0x30;
    public const nint m_NetworkTransmitComponent = 0x38;
    public const nint m_aThinkFunctions = 0x228;
    public const nint m_iCurrentThinkContext = 0x240;
    public const nint m_nLastThinkTick = 0x244;
    public const nint m_isSteadyState = 0x250;
    public const nint m_lastNetworkChange = 0x258;
    public const nint m_ResponseContexts = 0x268;
    public const nint m_iszResponseContext = 0x280;
    public const nint m_iHealth = 0x2A8;
    public const nint m_iMaxHealth = 0x2AC;
    public const nint m_lifeState = 0x2B0;
    public const nint m_flDamageAccumulator = 0x2B4;
    public const nint m_bTakesDamage = 0x2B8;
    public const nint m_nTakeDamageFlags = 0x2BC;
    public const nint m_MoveCollide = 0x2C1;
    public const nint m_MoveType = 0x2C2;
    public const nint m_nWaterTouch = 0x2C3;
    public const nint m_nSlimeTouch = 0x2C4;
    public const nint m_bRestoreInHierarchy = 0x2C5;
    public const nint m_target = 0x2C8;
    public const nint m_flMoveDoneTime = 0x2D0;
    public const nint m_hDamageFilter = 0x2D4;
    public const nint m_iszDamageFilterName = 0x2D8;
    public const nint m_nSubclassID = 0x2E0;
    public const nint m_flAnimTime = 0x2F0;
    public const nint m_flSimulationTime = 0x2F4;
    public const nint m_flCreateTime = 0x2F8;
    public const nint m_bClientSideRagdoll = 0x2FC;
    public const nint m_ubInterpolationFrame = 0x2FD;
    public const nint m_vPrevVPhysicsUpdatePos = 0x300;
    public const nint m_iTeamNum = 0x30C;
    public const nint m_iGlobalname = 0x310;
    public const nint m_iSentToClients = 0x318;
    public const nint m_flSpeed = 0x31C;
    public const nint m_sUniqueHammerID = 0x320;
    public const nint m_spawnflags = 0x328;
    public const nint m_nNextThinkTick = 0x32C;
    public const nint m_nSimulationTick = 0x330;
    public const nint m_OnKilled = 0x338;
    public const nint m_fFlags = 0x360;
    public const nint m_vecAbsVelocity = 0x364;
    public const nint m_vecVelocity = 0x370;
    public const nint m_vecBaseVelocity = 0x3A0;
    public const nint m_nPushEnumCount = 0x3AC;
    public const nint m_pCollision = 0x3B0;
    public const nint m_hEffectEntity = 0x3B8;
    public const nint m_hOwnerEntity = 0x3BC;
    public const nint m_fEffects = 0x3C0;
    public const nint m_hGroundEntity = 0x3C4;
    public const nint m_flFriction = 0x3C8;
    public const nint m_flElasticity = 0x3CC;
    public const nint m_flGravityScale = 0x3D0;
    public const nint m_flTimeScale = 0x3D4;
    public const nint m_flWaterLevel = 0x3D8;
    public const nint m_bSimulatedEveryTick = 0x3DC;
    public const nint m_bAnimatedEveryTick = 0x3DD;
    public const nint m_bDisableLowViolence = 0x3DE;
    public const nint m_nWaterType = 0x3DF;
    public const nint m_iEFlags = 0x3E0;
    public const nint m_OnUser1 = 0x3E8;
    public const nint m_OnUser2 = 0x410;
    public const nint m_OnUser3 = 0x438;
    public const nint m_OnUser4 = 0x460;
    public const nint m_iInitialTeamNum = 0x488;
    public const nint m_flNavIgnoreUntilTime = 0x48C;
    public const nint m_vecAngVelocity = 0x490;
    public const nint m_bNetworkQuantizeOriginAndAngles = 0x49C;
    public const nint m_bLagCompensate = 0x49D;
    public const nint m_flOverriddenFriction = 0x4A0;
    public const nint m_pBlocker = 0x4A4;
    public const nint m_flLocalTime = 0x4A8;
    public const nint m_flVPhysicsUpdateLocalTime = 0x4AC;
}

public static class CBaseFilter {
    public const nint m_bNegated = 0x4B0;
    public const nint m_OnPass = 0x4B8;
    public const nint m_OnFail = 0x4E0;
}

public static class CBaseFire {
    public const nint m_flScale = 0x4B0;
    public const nint m_flStartScale = 0x4B4;
    public const nint m_flScaleTime = 0x4B8;
    public const nint m_nFlags = 0x4BC;
}

public static class CBaseFlex {
    public const nint m_flexWeight = 0x888;
    public const nint m_vLookTargetPosition = 0x8A0;
    public const nint m_blinktoggle = 0x8AC;
    public const nint m_flAllowResponsesEndTime = 0x900;
    public const nint m_flLastFlexAnimationTime = 0x904;
    public const nint m_nNextSceneEventId = 0x908;
    public const nint m_bUpdateLayerPriorities = 0x90C;
}

public static class CBaseGrenade {
    public const nint m_OnPlayerPickup = 0x920;
    public const nint m_OnExplode = 0x948;
    public const nint m_bHasWarnedAI = 0x970;
    public const nint m_bIsSmokeGrenade = 0x971;
    public const nint m_bIsLive = 0x972;
    public const nint m_DmgRadius = 0x974;
    public const nint m_flDetonateTime = 0x978;
    public const nint m_flWarnAITime = 0x97C;
    public const nint m_flDamage = 0x980;
    public const nint m_iszBounceSound = 0x988;
    public const nint m_ExplosionSound = 0x990;
    public const nint m_hThrower = 0x99C;
    public const nint m_flNextAttack = 0x9B8;
    public const nint m_hOriginalThrower = 0x9BC;
}

public static class CBaseIssue {
    public const nint m_szTypeString = 0x20;
    public const nint m_szDetailsString = 0x60;
    public const nint m_iNumYesVotes = 0x164;
    public const nint m_iNumNoVotes = 0x168;
    public const nint m_iNumPotentialVotes = 0x16C;
    public const nint m_pVoteController = 0x170;
}

public static class CBaseModelEntity {
    public const nint m_CRenderComponent = 0x4B0;
    public const nint m_CHitboxComponent = 0x4B8;
    public const nint m_flDissolveStartTime = 0x4E0;
    public const nint m_OnIgnite = 0x4E8;
    public const nint m_nRenderMode = 0x510;
    public const nint m_nRenderFX = 0x511;
    public const nint m_bAllowFadeInView = 0x512;
    public const nint m_clrRender = 0x513;
    public const nint m_vecRenderAttributes = 0x518;
    public const nint m_LightGroup = 0x568;
    public const nint m_bRenderToCubemaps = 0x56C;
    public const nint m_Collision = 0x570;
    public const nint m_Glow = 0x620;
    public const nint m_flGlowBackfaceMult = 0x678;
    public const nint m_fadeMinDist = 0x67C;
    public const nint m_fadeMaxDist = 0x680;
    public const nint m_flFadeScale = 0x684;
    public const nint m_flShadowStrength = 0x688;
    public const nint m_nObjectCulling = 0x68C;
    public const nint m_nAddDecal = 0x690;
    public const nint m_vDecalPosition = 0x694;
    public const nint m_vDecalForwardAxis = 0x6A0;
    public const nint m_flDecalHealBloodRate = 0x6AC;
    public const nint m_flDecalHealHeightRate = 0x6B0;
    public const nint m_ConfigEntitiesToPropagateMaterialDecalsTo = 0x6B8;
    public const nint m_vecViewOffset = 0x6D0;
}

public static class CBaseMoveBehavior {
    public const nint m_iPositionInterpolator = 0x510;
    public const nint m_iRotationInterpolator = 0x514;
    public const nint m_flAnimStartTime = 0x518;
    public const nint m_flAnimEndTime = 0x51C;
    public const nint m_flAverageSpeedAcrossFrame = 0x520;
    public const nint m_pCurrentKeyFrame = 0x528;
    public const nint m_pTargetKeyFrame = 0x530;
    public const nint m_pPreKeyFrame = 0x538;
    public const nint m_pPostKeyFrame = 0x540;
    public const nint m_flTimeIntoFrame = 0x548;
    public const nint m_iDirection = 0x54C;
}

public static class CBasePlatTrain {
    public const nint m_NoiseMoving = 0x780;
    public const nint m_NoiseArrived = 0x788;
    public const nint m_volume = 0x798;
    public const nint m_flTWidth = 0x79C;
    public const nint m_flTLength = 0x7A0;
}

public static class CBasePlayerController {
    public const nint m_nInButtonsWhichAreToggles = 0x4B8;
    public const nint m_nTickBase = 0x4C0;
    public const nint m_hPawn = 0x4F0;
    public const nint m_nSplitScreenSlot = 0x4F4;
    public const nint m_hSplitOwner = 0x4F8;
    public const nint m_hSplitScreenPlayers = 0x500;
    public const nint m_bIsHLTV = 0x518;
    public const nint m_iConnected = 0x51C;
    public const nint m_iszPlayerName = 0x520;
    public const nint m_szNetworkIDString = 0x5A0;
    public const nint m_fLerpTime = 0x5A8;
    public const nint m_bLagCompensation = 0x5AC;
    public const nint m_bPredict = 0x5AD;
    public const nint m_bAutoKickDisabled = 0x5AE;
    public const nint m_bIsLowViolence = 0x5AF;
    public const nint m_bGamePaused = 0x5B0;
    public const nint m_nHighestCommandNumberReceived = 0x628;
    public const nint m_nUsecTimestampLastUserCmdReceived = 0x630;
    public const nint m_iIgnoreGlobalChat = 0x648;
    public const nint m_flLastPlayerTalkTime = 0x64C;
    public const nint m_flLastEntitySteadyState = 0x650;
    public const nint m_nAvailableEntitySteadyState = 0x654;
    public const nint m_bHasAnySteadyStateEnts = 0x658;
    public const nint m_steamID = 0x668;
    public const nint m_iDesiredFOV = 0x670;
}

public static class CBasePlayerPawn {
    public const nint m_pWeaponServices = 0x9C8;
    public const nint m_pItemServices = 0x9D0;
    public const nint m_pAutoaimServices = 0x9D8;
    public const nint m_pObserverServices = 0x9E0;
    public const nint m_pWaterServices = 0x9E8;
    public const nint m_pUseServices = 0x9F0;
    public const nint m_pFlashlightServices = 0x9F8;
    public const nint m_pCameraServices = 0xA00;
    public const nint m_pMovementServices = 0xA08;
    public const nint m_ServerViewAngleChanges = 0xA18;
    public const nint m_nHighestGeneratedServerViewAngleChangeIndex = 0xA68;
    public const nint v_angle = 0xA6C;
    public const nint v_anglePrevious = 0xA78;
    public const nint m_iHideHUD = 0xA84;
    public const nint m_skybox3d = 0xA88;
    public const nint m_fTimeLastHurt = 0xB18;
    public const nint m_flDeathTime = 0xB1C;
    public const nint m_fNextSuicideTime = 0xB20;
    public const nint m_fInitHUD = 0xB24;
    public const nint m_pExpresser = 0xB28;
    public const nint m_hController = 0xB30;
    public const nint m_fHltvReplayDelay = 0xB38;
    public const nint m_fHltvReplayEnd = 0xB3C;
    public const nint m_iHltvReplayEntity = 0xB40;
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

public static class CBasePlayerWeapon {
    public const nint m_nNextPrimaryAttackTick = 0xC10;
    public const nint m_flNextPrimaryAttackTickRatio = 0xC14;
    public const nint m_nNextSecondaryAttackTick = 0xC18;
    public const nint m_flNextSecondaryAttackTickRatio = 0xC1C;
    public const nint m_iClip1 = 0xC20;
    public const nint m_iClip2 = 0xC24;
    public const nint m_pReserveAmmo = 0xC28;
    public const nint m_OnPlayerUse = 0xC30;
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
    public const nint m_bModelOverrodeBlockLOS = 0x888;
    public const nint m_iShapeType = 0x88C;
    public const nint m_bConformToCollisionBounds = 0x890;
    public const nint m_mPreferredCatchTransform = 0x894;
}

public static class CBasePropDoor {
    public const nint m_flAutoReturnDelay = 0xB10;
    public const nint m_hDoorList = 0xB18;
    public const nint m_nHardwareType = 0xB30;
    public const nint m_bNeedsHardware = 0xB34;
    public const nint m_eDoorState = 0xB38;
    public const nint m_bLocked = 0xB3C;
    public const nint m_closedPosition = 0xB40;
    public const nint m_closedAngles = 0xB4C;
    public const nint m_hBlocker = 0xB58;
    public const nint m_bFirstBlocked = 0xB5C;
    public const nint m_ls = 0xB60;
    public const nint m_bForceClosed = 0xB80;
    public const nint m_vecLatchWorldPosition = 0xB84;
    public const nint m_hActivator = 0xB90;
    public const nint m_SoundMoving = 0xBA0;
    public const nint m_SoundOpen = 0xBA8;
    public const nint m_SoundClose = 0xBB0;
    public const nint m_SoundLock = 0xBB8;
    public const nint m_SoundUnlock = 0xBC0;
    public const nint m_SoundLatch = 0xBC8;
    public const nint m_SoundPound = 0xBD0;
    public const nint m_SoundJiggle = 0xBD8;
    public const nint m_SoundLockedAnim = 0xBE0;
    public const nint m_numCloseAttempts = 0xBE8;
    public const nint m_nPhysicsMaterial = 0xBEC;
    public const nint m_SlaveName = 0xBF0;
    public const nint m_hMaster = 0xBF8;
    public const nint m_OnBlockedClosing = 0xC00;
    public const nint m_OnBlockedOpening = 0xC28;
    public const nint m_OnUnblockedClosing = 0xC50;
    public const nint m_OnUnblockedOpening = 0xC78;
    public const nint m_OnFullyClosed = 0xCA0;
    public const nint m_OnFullyOpen = 0xCC8;
    public const nint m_OnClose = 0xCF0;
    public const nint m_OnOpen = 0xD18;
    public const nint m_OnLockedUse = 0xD40;
    public const nint m_OnAjarOpen = 0xD68;
}

public static class CBaseToggle {
    public const nint m_toggle_state = 0x700;
    public const nint m_flMoveDistance = 0x704;
    public const nint m_flWait = 0x708;
    public const nint m_flLip = 0x70C;
    public const nint m_bAlwaysFireBlockedOutputs = 0x710;
    public const nint m_vecPosition1 = 0x714;
    public const nint m_vecPosition2 = 0x720;
    public const nint m_vecMoveAng = 0x72C;
    public const nint m_vecAngle1 = 0x738;
    public const nint m_vecAngle2 = 0x744;
    public const nint m_flHeight = 0x750;
    public const nint m_hActivator = 0x754;
    public const nint m_vecFinalDest = 0x758;
    public const nint m_vecFinalAngle = 0x764;
    public const nint m_movementType = 0x770;
    public const nint m_sMaster = 0x778;
}

public static class CBaseTrigger {
    public const nint m_bDisabled = 0x780;
    public const nint m_iFilterName = 0x788;
    public const nint m_hFilter = 0x790;
    public const nint m_OnStartTouch = 0x798;
    public const nint m_OnStartTouchAll = 0x7C0;
    public const nint m_OnEndTouch = 0x7E8;
    public const nint m_OnEndTouchAll = 0x810;
    public const nint m_OnTouching = 0x838;
    public const nint m_OnNotTouching = 0x860;
    public const nint m_hTouchingEntities = 0x888;
    public const nint m_bClientSidePredicted = 0x8A0;
}

public static class CBaseViewModel {
    public const nint m_vecLastFacing = 0x890;
    public const nint m_nViewModelIndex = 0x89C;
    public const nint m_nAnimationParity = 0x8A0;
    public const nint m_flAnimationStartTime = 0x8A4;
    public const nint m_hWeapon = 0x8A8;
    public const nint m_sVMName = 0x8B0;
    public const nint m_sAnimationPrefix = 0x8B8;
    public const nint m_hOldLayerSequence = 0x8C0;
    public const nint m_oldLayer = 0x8C4;
    public const nint m_oldLayerStartTime = 0x8C8;
    public const nint m_hControlPanel = 0x8CC;
}

public static class CBeam {
    public const nint m_flFrameRate = 0x700;
    public const nint m_flHDRColorScale = 0x704;
    public const nint m_flFireTime = 0x708;
    public const nint m_flDamage = 0x70C;
    public const nint m_nNumBeamEnts = 0x710;
    public const nint m_hBaseMaterial = 0x718;
    public const nint m_nHaloIndex = 0x720;
    public const nint m_nBeamType = 0x728;
    public const nint m_nBeamFlags = 0x72C;
    public const nint m_hAttachEntity = 0x730;
    public const nint m_nAttachIndex = 0x758;
    public const nint m_fWidth = 0x764;
    public const nint m_fEndWidth = 0x768;
    public const nint m_fFadeLength = 0x76C;
    public const nint m_fHaloScale = 0x770;
    public const nint m_fAmplitude = 0x774;
    public const nint m_fStartFrame = 0x778;
    public const nint m_fSpeed = 0x77C;
    public const nint m_flFrame = 0x780;
    public const nint m_nClipStyle = 0x784;
    public const nint m_bTurnedOff = 0x788;
    public const nint m_vecEndPos = 0x78C;
    public const nint m_hEndEntity = 0x798;
    public const nint m_nDissolveType = 0x79C;
}

public static class CBlood {
    public const nint m_vecSprayAngles = 0x4B0;
    public const nint m_vecSprayDir = 0x4BC;
    public const nint m_flAmount = 0x4C8;
    public const nint m_Color = 0x4CC;
}

public static class CBodyComponent {
    public const nint m_pSceneNode = 0x8;
    public const nint __m_pChainEntity = 0x20;
}

public static class CBodyComponentBaseAnimGraph {
    public const nint m_animationController = 0x470;
    public const nint __m_pChainEntity = 0x750;
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
    public const nint m_OnBombExplode = 0x8A8;
    public const nint m_OnBombPlanted = 0x8D0;
    public const nint m_OnBombDefused = 0x8F8;
    public const nint m_bIsBombSiteB = 0x920;
    public const nint m_bIsHeistBombTarget = 0x921;
    public const nint m_bBombPlantedHere = 0x922;
    public const nint m_szMountTarget = 0x928;
    public const nint m_hInstructorHint = 0x930;
    public const nint m_nBombSiteDesignation = 0x934;
}

public static class CBot {
    public const nint m_pPlayer = 0x10;
    public const nint m_bHasSpawned = 0x18;
    public const nint m_id = 0x1C;
    public const nint m_isRunning = 0x90;
    public const nint m_isCrouching = 0x91;
    public const nint m_forwardSpeed = 0x94;
    public const nint m_leftSpeed = 0x98;
    public const nint m_verticalSpeed = 0x9C;
    public const nint m_buttonFlags = 0xA0;
    public const nint m_jumpTimestamp = 0xA8;
    public const nint m_viewForward = 0xAC;
    public const nint m_postureStackIndex = 0xC8;
}

public static class CBreachChargeProjectile {
    public const nint m_bShouldExplode = 0x9C0;
    public const nint m_weaponThatThrewMe = 0x9C4;
    public const nint m_nParentBoneIndex = 0x9C8;
    public const nint m_vecParentBonePos = 0x9CC;
    public const nint m_bDefused = 0x9D8;
    public const nint m_bUnstuckFromPlayer = 0x9D9;
    public const nint m_bResolvedParent = 0x9DA;
    public const nint m_vecLastKnownValidPos = 0x9DC;
    public const nint m_hDesiredParent = 0x9E8;
}

public static class CBreakable {
    public const nint m_Material = 0x710;
    public const nint m_hBreaker = 0x714;
    public const nint m_Explosion = 0x718;
    public const nint m_iszSpawnObject = 0x720;
    public const nint m_flPressureDelay = 0x728;
    public const nint m_iMinHealthDmg = 0x72C;
    public const nint m_iszPropData = 0x730;
    public const nint m_impactEnergyScale = 0x738;
    public const nint m_nOverrideBlockLOS = 0x73C;
    public const nint m_OnBreak = 0x740;
    public const nint m_OnHealthChanged = 0x768;
    public const nint m_flDmgModBullet = 0x790;
    public const nint m_flDmgModClub = 0x794;
    public const nint m_flDmgModExplosive = 0x798;
    public const nint m_flDmgModFire = 0x79C;
    public const nint m_iszPhysicsDamageTableName = 0x7A0;
    public const nint m_iszBasePropData = 0x7A8;
    public const nint m_iInteractions = 0x7B0;
    public const nint m_PerformanceMode = 0x7B4;
    public const nint m_hPhysicsAttacker = 0x7B8;
    public const nint m_flLastPhysicsInfluenceTime = 0x7BC;
}

public static class CBreakableProp {
    public const nint m_OnBreak = 0x8D8;
    public const nint m_OnHealthChanged = 0x900;
    public const nint m_OnTakeDamage = 0x928;
    public const nint m_impactEnergyScale = 0x950;
    public const nint m_iMinHealthDmg = 0x954;
    public const nint m_preferredCarryAngles = 0x958;
    public const nint m_flPressureDelay = 0x964;
    public const nint m_hBreaker = 0x968;
    public const nint m_PerformanceMode = 0x96C;
    public const nint m_flDmgModBullet = 0x970;
    public const nint m_flDmgModClub = 0x974;
    public const nint m_flDmgModExplosive = 0x978;
    public const nint m_flDmgModFire = 0x97C;
    public const nint m_iszPhysicsDamageTableName = 0x980;
    public const nint m_iszBasePropData = 0x988;
    public const nint m_iInteractions = 0x990;
    public const nint m_flPreventDamageBeforeTime = 0x994;
    public const nint m_bHasBreakPiecesOrCommands = 0x998;
    public const nint m_explodeDamage = 0x99C;
    public const nint m_explodeRadius = 0x9A0;
    public const nint m_explosionDelay = 0x9A8;
    public const nint m_explosionBuildupSound = 0x9B0;
    public const nint m_explosionCustomEffect = 0x9B8;
    public const nint m_explosionCustomSound = 0x9C0;
    public const nint m_explosionModifier = 0x9C8;
    public const nint m_hPhysicsAttacker = 0x9D0;
    public const nint m_flLastPhysicsInfluenceTime = 0x9D4;
    public const nint m_bOriginalBlockLOS = 0x9D8;
    public const nint m_flDefaultFadeScale = 0x9DC;
    public const nint m_hLastAttacker = 0x9E0;
    public const nint m_hFlareEnt = 0x9E4;
    public const nint m_bUsePuntSound = 0x9E8;
    public const nint m_iszPuntSound = 0x9F0;
    public const nint m_noGhostCollision = 0x9F8;
}

public static class CBreakableStageHelper {
    public const nint m_nCurrentStage = 0x8;
    public const nint m_nStageCount = 0xC;
}

public static class CBtActionAim {
    public const nint m_szSensorInputKey = 0x68;
    public const nint m_szAimReadyKey = 0x80;
    public const nint m_flZoomCooldownTimestamp = 0x88;
    public const nint m_bDoneAiming = 0x8C;
    public const nint m_flLerpStartTime = 0x90;
    public const nint m_flNextLookTargetLerpTime = 0x94;
    public const nint m_flPenaltyReductionRatio = 0x98;
    public const nint m_NextLookTarget = 0x9C;
    public const nint m_AimTimer = 0xA8;
    public const nint m_SniperHoldTimer = 0xC0;
    public const nint m_FocusIntervalTimer = 0xD8;
    public const nint m_bAcquired = 0xF0;
}

public static class CBtActionCombatPositioning {
    public const nint m_szSensorInputKey = 0x68;
    public const nint m_szIsAttackingKey = 0x80;
    public const nint m_ActionTimer = 0x88;
    public const nint m_bCrouching = 0xA0;
}

public static class CBtActionMoveTo {
    public const nint m_szDestinationInputKey = 0x60;
    public const nint m_szHidingSpotInputKey = 0x68;
    public const nint m_szThreatInputKey = 0x70;
    public const nint m_vecDestination = 0x78;
    public const nint m_bAutoLookAdjust = 0x84;
    public const nint m_bComputePath = 0x85;
    public const nint m_flDamagingAreasPenaltyCost = 0x88;
    public const nint m_CheckApproximateCornersTimer = 0x90;
    public const nint m_CheckHighPriorityItem = 0xA8;
    public const nint m_RepathTimer = 0xC0;
    public const nint m_flArrivalEpsilon = 0xD8;
    public const nint m_flAdditionalArrivalEpsilon2D = 0xDC;
    public const nint m_flHidingSpotCheckDistanceThreshold = 0xE0;
    public const nint m_flNearestAreaDistanceThreshold = 0xE4;
}

public static class CBtActionParachutePositioning {
    public const nint m_ActionTimer = 0x58;
}

public static class CBtNodeCondition {
    public const nint m_bNegated = 0x58;
}

public static class CBtNodeConditionInactive {
    public const nint m_flRoundStartThresholdSeconds = 0x78;
    public const nint m_flSensorInactivityThresholdSeconds = 0x7C;
    public const nint m_SensorInactivityTimer = 0x80;
}

public static class CBubbling {
    public const nint m_density = 0x700;
    public const nint m_frequency = 0x704;
    public const nint m_state = 0x708;
}

public static class CBumpMineProjectile {
    public const nint m_bShouldExplode = 0x9C0;
    public const nint m_nParentBoneIndex = 0x9C4;
    public const nint m_vecParentBonePos = 0x9C8;
    public const nint m_bArmed = 0x9D4;
    public const nint m_bDefused = 0x9D5;
    public const nint m_bUnstuckFromPlayer = 0x9D6;
    public const nint m_vecTargetedObjects = 0x9D8;
    public const nint m_bResolvedParent = 0xA18;
    public const nint m_vecLastKnownValidPos = 0xA1C;
    public const nint m_hDesiredParent = 0xA28;
    public const nint m_bBeingUsed = 0xA2C;
}

public static class CBuoyancyHelper {
    public const nint m_flFluidDensity = 0x18;
}

public static class CBuyZone {
    public const nint m_LegacyTeamNum = 0x8A8;
}

public static class CC4 {
    public const nint m_vecLastValidPlayerHeldPosition = 0xDD0;
    public const nint m_vecLastValidDroppedPosition = 0xDDC;
    public const nint m_bDoValidDroppedPositionCheck = 0xDE8;
    public const nint m_bStartedArming = 0xDE9;
    public const nint m_fArmedTime = 0xDEC;
    public const nint m_bBombPlacedAnimation = 0xDF0;
    public const nint m_bIsPlantingViaUse = 0xDF1;
    public const nint m_entitySpottedState = 0xDF8;
    public const nint m_nSpotRules = 0xE10;
    public const nint m_bPlayedArmingBeeps = 0xE14;
    public const nint m_bBombPlanted = 0xE1B;
    public const nint m_bDroppedFromDeath = 0xE1C;
}

public static class CCSBot {
    public const nint m_lastCoopSpawnPoint = 0xD0;
    public const nint m_eyePosition = 0xE0;
    public const nint m_name = 0xEC;
    public const nint m_combatRange = 0x12C;
    public const nint m_isRogue = 0x130;
    public const nint m_rogueTimer = 0x138;
    public const nint m_diedLastRound = 0x154;
    public const nint m_safeTime = 0x158;
    public const nint m_wasSafe = 0x15C;
    public const nint m_blindFire = 0x164;
    public const nint m_surpriseTimer = 0x168;
    public const nint m_bAllowActive = 0x180;
    public const nint m_isFollowing = 0x181;
    public const nint m_leader = 0x184;
    public const nint m_followTimestamp = 0x188;
    public const nint m_allowAutoFollowTime = 0x18C;
    public const nint m_hurryTimer = 0x190;
    public const nint m_alertTimer = 0x1A8;
    public const nint m_sneakTimer = 0x1C0;
    public const nint m_panicTimer = 0x1D8;
    public const nint m_stateTimestamp = 0x4D8;
    public const nint m_isAttacking = 0x4DC;
    public const nint m_isOpeningDoor = 0x4DD;
    public const nint m_taskEntity = 0x4E4;
    public const nint m_goalPosition = 0x4F4;
    public const nint m_goalEntity = 0x500;
    public const nint m_avoid = 0x504;
    public const nint m_avoidTimestamp = 0x508;
    public const nint m_isStopping = 0x50C;
    public const nint m_hasVisitedEnemySpawn = 0x50D;
    public const nint m_stillTimer = 0x510;
    public const nint m_bEyeAnglesUnderPathFinderControl = 0x520;
    public const nint m_pathIndex = 0x6618;
    public const nint m_areaEnteredTimestamp = 0x661C;
    public const nint m_repathTimer = 0x6620;
    public const nint m_avoidFriendTimer = 0x6638;
    public const nint m_isFriendInTheWay = 0x6650;
    public const nint m_politeTimer = 0x6658;
    public const nint m_isWaitingBehindFriend = 0x6670;
    public const nint m_pathLadderEnd = 0x669C;
    public const nint m_mustRunTimer = 0x66E8;
    public const nint m_waitTimer = 0x6700;
    public const nint m_updateTravelDistanceTimer = 0x6718;
    public const nint m_playerTravelDistance = 0x6730;
    public const nint m_travelDistancePhase = 0x6830;
    public const nint m_hostageEscortCount = 0x69C8;
    public const nint m_hostageEscortCountTimestamp = 0x69CC;
    public const nint m_desiredTeam = 0x69D0;
    public const nint m_hasJoined = 0x69D4;
    public const nint m_isWaitingForHostage = 0x69D5;
    public const nint m_inhibitWaitingForHostageTimer = 0x69D8;
    public const nint m_waitForHostageTimer = 0x69F0;
    public const nint m_noisePosition = 0x6A08;
    public const nint m_noiseTravelDistance = 0x6A14;
    public const nint m_noiseTimestamp = 0x6A18;
    public const nint m_noiseSource = 0x6A20;
    public const nint m_noiseBendTimer = 0x6A38;
    public const nint m_bentNoisePosition = 0x6A50;
    public const nint m_bendNoisePositionValid = 0x6A5C;
    public const nint m_lookAroundStateTimestamp = 0x6A60;
    public const nint m_lookAheadAngle = 0x6A64;
    public const nint m_forwardAngle = 0x6A68;
    public const nint m_inhibitLookAroundTimestamp = 0x6A6C;
    public const nint m_lookAtSpot = 0x6A74;
    public const nint m_lookAtSpotDuration = 0x6A84;
    public const nint m_lookAtSpotTimestamp = 0x6A88;
    public const nint m_lookAtSpotAngleTolerance = 0x6A8C;
    public const nint m_lookAtSpotClearIfClose = 0x6A90;
    public const nint m_lookAtSpotAttack = 0x6A91;
    public const nint m_lookAtDesc = 0x6A98;
    public const nint m_peripheralTimestamp = 0x6AA0;
    public const nint m_approachPointCount = 0x6C28;
    public const nint m_approachPointViewPosition = 0x6C2C;
    public const nint m_viewSteadyTimer = 0x6C38;
    public const nint m_tossGrenadeTimer = 0x6C50;
    public const nint m_isAvoidingGrenade = 0x6C70;
    public const nint m_spotCheckTimestamp = 0x6C90;
    public const nint m_checkedHidingSpotCount = 0x7098;
    public const nint m_lookPitch = 0x709C;
    public const nint m_lookPitchVel = 0x70A0;
    public const nint m_lookYaw = 0x70A4;
    public const nint m_lookYawVel = 0x70A8;
    public const nint m_targetSpot = 0x70AC;
    public const nint m_targetSpotVelocity = 0x70B8;
    public const nint m_targetSpotPredicted = 0x70C4;
    public const nint m_aimError = 0x70D0;
    public const nint m_aimGoal = 0x70DC;
    public const nint m_targetSpotTime = 0x70E8;
    public const nint m_aimFocus = 0x70EC;
    public const nint m_aimFocusInterval = 0x70F0;
    public const nint m_aimFocusNextUpdate = 0x70F4;
    public const nint m_ignoreEnemiesTimer = 0x7100;
    public const nint m_enemy = 0x7118;
    public const nint m_isEnemyVisible = 0x711C;
    public const nint m_visibleEnemyParts = 0x711D;
    public const nint m_lastEnemyPosition = 0x7120;
    public const nint m_lastSawEnemyTimestamp = 0x712C;
    public const nint m_firstSawEnemyTimestamp = 0x7130;
    public const nint m_currentEnemyAcquireTimestamp = 0x7134;
    public const nint m_enemyDeathTimestamp = 0x7138;
    public const nint m_friendDeathTimestamp = 0x713C;
    public const nint m_isLastEnemyDead = 0x7140;
    public const nint m_nearbyEnemyCount = 0x7144;
    public const nint m_bomber = 0x7350;
    public const nint m_nearbyFriendCount = 0x7354;
    public const nint m_closestVisibleFriend = 0x7358;
    public const nint m_closestVisibleHumanFriend = 0x735C;
    public const nint m_attentionInterval = 0x7360;
    public const nint m_attacker = 0x7370;
    public const nint m_attackedTimestamp = 0x7374;
    public const nint m_burnedByFlamesTimer = 0x7378;
    public const nint m_lastVictimID = 0x7388;
    public const nint m_isAimingAtEnemy = 0x738C;
    public const nint m_isRapidFiring = 0x738D;
    public const nint m_equipTimer = 0x7390;
    public const nint m_zoomTimer = 0x73A0;
    public const nint m_fireWeaponTimestamp = 0x73B8;
    public const nint m_lookForWeaponsOnGroundTimer = 0x73C0;
    public const nint m_bIsSleeping = 0x73D8;
    public const nint m_isEnemySniperVisible = 0x73D9;
    public const nint m_sawEnemySniperTimer = 0x73E0;
    public const nint m_enemyQueueIndex = 0x7498;
    public const nint m_enemyQueueCount = 0x7499;
    public const nint m_enemyQueueAttendIndex = 0x749A;
    public const nint m_isStuck = 0x749B;
    public const nint m_stuckTimestamp = 0x749C;
    public const nint m_stuckSpot = 0x74A0;
    public const nint m_wiggleTimer = 0x74B0;
    public const nint m_stuckJumpTimer = 0x74C8;
    public const nint m_nextCleanupCheckTimestamp = 0x74E0;
    public const nint m_avgVel = 0x74E4;
    public const nint m_avgVelIndex = 0x750C;
    public const nint m_avgVelCount = 0x7510;
    public const nint m_lastOrigin = 0x7514;
    public const nint m_lastRadioRecievedTimestamp = 0x7524;
    public const nint m_lastRadioSentTimestamp = 0x7528;
    public const nint m_radioSubject = 0x752C;
    public const nint m_radioPosition = 0x7530;
    public const nint m_voiceEndTimestamp = 0x753C;
    public const nint m_lastValidReactionQueueFrame = 0x7548;
}

public static class CCSEnvGunfire {
    public const nint m_iMinBurstSize = 0x4B0;
    public const nint m_iMaxBurstSize = 0x4B4;
    public const nint m_flMinBurstDelay = 0x4B8;
    public const nint m_flMaxBurstDelay = 0x4BC;
    public const nint m_flRateOfFire = 0x4C0;
    public const nint m_iszShootSound = 0x4C8;
    public const nint m_iszTracerType = 0x4D0;
    public const nint m_iszWeaponName = 0x4D8;
    public const nint m_bDisabled = 0x4E0;
    public const nint m_iShotsRemaining = 0x4E4;
    public const nint m_iSpread = 0x4E8;
    public const nint m_vecSpread = 0x4EC;
    public const nint m_vecTargetPosition = 0x4F4;
    public const nint m_flTargetDist = 0x500;
    public const nint m_flBias = 0x504;
    public const nint m_bCollide = 0x508;
    public const nint m_hTarget = 0x50C;
    public const nint m_bAllowNullTarget = 0x510;
    public const nint m_bAlwaysWallbangTracer = 0x511;
    public const nint m_flDamageScaleValue = 0x514;
    public const nint m_flAdditionalSpread = 0x518;
}

public static class CCSGOViewModel {
    public const nint m_bShouldIgnoreOffsetAndAccuracy = 0x8D0;
    public const nint m_nWeaponParity = 0x8D4;
    public const nint m_nOldWeaponParity = 0x8D8;
}

public static class CCSGO_TeamPreviewCharacterPosition {
    public const nint m_nVariant = 0x4B0;
    public const nint m_nRandom = 0x4B4;
    public const nint m_nOrdinal = 0x4B8;
    public const nint m_sWeaponName = 0x4C0;
    public const nint m_xuid = 0x4C8;
    public const nint m_weaponItem = 0x4D0;
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

public static class CCSGameRules {
    public const nint __m_pChainEntity = 0x98;
    public const nint m_coopMissionManager = 0xC0;
    public const nint m_bFreezePeriod = 0xC4;
    public const nint m_bWarmupPeriod = 0xC5;
    public const nint m_fWarmupPeriodEnd = 0xC8;
    public const nint m_fWarmupPeriodStart = 0xCC;
    public const nint m_nTotalPausedTicks = 0xD0;
    public const nint m_nPauseStartTick = 0xD4;
    public const nint m_bServerPaused = 0xD8;
    public const nint m_bGamePaused = 0xD9;
    public const nint m_bTerroristTimeOutActive = 0xDA;
    public const nint m_bCTTimeOutActive = 0xDB;
    public const nint m_flTerroristTimeOutRemaining = 0xDC;
    public const nint m_flCTTimeOutRemaining = 0xE0;
    public const nint m_nTerroristTimeOuts = 0xE4;
    public const nint m_nCTTimeOuts = 0xE8;
    public const nint m_bTechnicalTimeOut = 0xEC;
    public const nint m_bMatchWaitingForResume = 0xED;
    public const nint m_iRoundTime = 0xF0;
    public const nint m_fMatchStartTime = 0xF4;
    public const nint m_fRoundStartTime = 0xF8;
    public const nint m_flRestartRoundTime = 0xFC;
    public const nint m_bGameRestart = 0x100;
    public const nint m_flGameStartTime = 0x104;
    public const nint m_timeUntilNextPhaseStarts = 0x108;
    public const nint m_gamePhase = 0x10C;
    public const nint m_totalRoundsPlayed = 0x110;
    public const nint m_nRoundsPlayedThisPhase = 0x114;
    public const nint m_nOvertimePlaying = 0x118;
    public const nint m_iHostagesRemaining = 0x11C;
    public const nint m_bAnyHostageReached = 0x120;
    public const nint m_bMapHasBombTarget = 0x121;
    public const nint m_bMapHasRescueZone = 0x122;
    public const nint m_bMapHasBuyZone = 0x123;
    public const nint m_bIsQueuedMatchmaking = 0x124;
    public const nint m_nQueuedMatchmakingMode = 0x128;
    public const nint m_bIsValveDS = 0x12C;
    public const nint m_bLogoMap = 0x12D;
    public const nint m_bPlayAllStepSoundsOnServer = 0x12E;
    public const nint m_iNumGunGameProgressiveWeaponsCT = 0x130;
    public const nint m_iNumGunGameProgressiveWeaponsT = 0x134;
    public const nint m_iSpectatorSlotCount = 0x138;
    public const nint m_GGProgressiveWeaponOrderCT = 0x13C;
    public const nint m_GGProgressiveWeaponOrderT = 0x22C;
    public const nint m_GGProgressiveWeaponKillUpgradeOrderCT = 0x31C;
    public const nint m_GGProgressiveWeaponKillUpgradeOrderT = 0x40C;
    public const nint m_MatchDevice = 0x4FC;
    public const nint m_bHasMatchStarted = 0x500;
    public const nint m_nNextMapInMapgroup = 0x504;
    public const nint m_szTournamentEventName = 0x508;
    public const nint m_szTournamentEventStage = 0x708;
    public const nint m_szMatchStatTxt = 0x908;
    public const nint m_szTournamentPredictionsTxt = 0xB08;
    public const nint m_nTournamentPredictionsPct = 0xD08;
    public const nint m_flCMMItemDropRevealStartTime = 0xD0C;
    public const nint m_flCMMItemDropRevealEndTime = 0xD10;
    public const nint m_bIsDroppingItems = 0xD14;
    public const nint m_bIsQuestEligible = 0xD15;
    public const nint m_nGuardianModeWaveNumber = 0xD18;
    public const nint m_nGuardianModeSpecialKillsRemaining = 0xD1C;
    public const nint m_nGuardianModeSpecialWeaponNeeded = 0xD20;
    public const nint m_nGuardianGrenadesToGiveBots = 0xD24;
    public const nint m_nNumHeaviesToSpawn = 0xD28;
    public const nint m_numGlobalGiftsGiven = 0xD2C;
    public const nint m_numGlobalGifters = 0xD30;
    public const nint m_numGlobalGiftsPeriodSeconds = 0xD34;
    public const nint m_arrFeaturedGiftersAccounts = 0xD38;
    public const nint m_arrFeaturedGiftersGifts = 0xD48;
    public const nint m_arrProhibitedItemIndices = 0xD58;
    public const nint m_arrTournamentActiveCasterAccounts = 0xE20;
    public const nint m_numBestOfMaps = 0xE30;
    public const nint m_nHalloweenMaskListSeed = 0xE34;
    public const nint m_bBombDropped = 0xE38;
    public const nint m_bBombPlanted = 0xE39;
    public const nint m_iRoundWinStatus = 0xE3C;
    public const nint m_eRoundWinReason = 0xE40;
    public const nint m_bTCantBuy = 0xE44;
    public const nint m_bCTCantBuy = 0xE45;
    public const nint m_flGuardianBuyUntilTime = 0xE48;
    public const nint m_iMatchStats_RoundResults = 0xE4C;
    public const nint m_iMatchStats_PlayersAlive_CT = 0xEC4;
    public const nint m_iMatchStats_PlayersAlive_T = 0xF3C;
    public const nint m_TeamRespawnWaveTimes = 0xFB4;
    public const nint m_flNextRespawnWave = 0x1034;
    public const nint m_nServerQuestID = 0x10B4;
    public const nint m_vMinimapMins = 0x10B8;
    public const nint m_vMinimapMaxs = 0x10C4;
    public const nint m_MinimapVerticalSectionHeights = 0x10D0;
    public const nint m_bDontIncrementCoopWave = 0x10F0;
    public const nint m_bSpawnedTerrorHuntHeavy = 0x10F1;
    public const nint m_nEndMatchMapGroupVoteTypes = 0x10F4;
    public const nint m_nEndMatchMapGroupVoteOptions = 0x111C;
    public const nint m_nEndMatchMapVoteWinner = 0x1144;
    public const nint m_iNumConsecutiveCTLoses = 0x1148;
    public const nint m_iNumConsecutiveTerroristLoses = 0x114C;
    public const nint m_bHasHostageBeenTouched = 0x1168;
    public const nint m_flIntermissionStartTime = 0x116C;
    public const nint m_flIntermissionEndTime = 0x1170;
    public const nint m_bLevelInitialized = 0x1174;
    public const nint m_iTotalRoundsPlayed = 0x1178;
    public const nint m_iUnBalancedRounds = 0x117C;
    public const nint m_endMatchOnRoundReset = 0x1180;
    public const nint m_endMatchOnThink = 0x1181;
    public const nint m_iFreezeTime = 0x1184;
    public const nint m_iNumTerrorist = 0x1188;
    public const nint m_iNumCT = 0x118C;
    public const nint m_iNumSpawnableTerrorist = 0x1190;
    public const nint m_iNumSpawnableCT = 0x1194;
    public const nint m_arrSelectedHostageSpawnIndices = 0x1198;
    public const nint m_bFirstConnected = 0x11B0;
    public const nint m_bCompleteReset = 0x11B1;
    public const nint m_bPickNewTeamsOnReset = 0x11B2;
    public const nint m_bScrambleTeamsOnRestart = 0x11B3;
    public const nint m_bSwapTeamsOnRestart = 0x11B4;
    public const nint m_nEndMatchTiedVotes = 0x11C0;
    public const nint m_bNeedToAskPlayersForContinueVote = 0x11DC;
    public const nint m_numQueuedMatchmakingAccounts = 0x11E0;
    public const nint m_pQueuedMatchmakingReservationString = 0x11E8;
    public const nint m_numTotalTournamentDrops = 0x11F0;
    public const nint m_numSpectatorsCountMax = 0x11F4;
    public const nint m_numSpectatorsCountMaxTV = 0x11F8;
    public const nint m_numSpectatorsCountMaxLnk = 0x11FC;
    public const nint m_bForceTeamChangeSilent = 0x1208;
    public const nint m_bLoadingRoundBackupData = 0x1209;
    public const nint m_nMatchInfoShowType = 0x1240;
    public const nint m_flMatchInfoDecidedTime = 0x1244;
    public const nint m_flCoopRespawnAndHealTime = 0x1260;
    public const nint m_coopBonusCoinsFound = 0x1264;
    public const nint m_coopBonusPistolsOnly = 0x1268;
    public const nint m_coopPlayersInDeploymentZone = 0x1269;
    public const nint m_coopMissionDeadPlayerRespawnEnabled = 0x126A;
    public const nint mTeamDMLastWinningTeamNumber = 0x126C;
    public const nint mTeamDMLastThinkTime = 0x1270;
    public const nint m_flTeamDMLastAnnouncementTime = 0x1274;
    public const nint m_iAccountTerrorist = 0x1278;
    public const nint m_iAccountCT = 0x127C;
    public const nint m_iSpawnPointCount_Terrorist = 0x1280;
    public const nint m_iSpawnPointCount_CT = 0x1284;
    public const nint m_iMaxNumTerrorists = 0x1288;
    public const nint m_iMaxNumCTs = 0x128C;
    public const nint m_iLoserBonus = 0x1290;
    public const nint m_iLoserBonusMostRecentTeam = 0x1294;
    public const nint m_tmNextPeriodicThink = 0x1298;
    public const nint m_bVoiceWonMatchBragFired = 0x129C;
    public const nint m_fWarmupNextChatNoticeTime = 0x12A0;
    public const nint m_iHostagesRescued = 0x12A8;
    public const nint m_iHostagesTouched = 0x12AC;
    public const nint m_flNextHostageAnnouncement = 0x12B0;
    public const nint m_bNoTerroristsKilled = 0x12B4;
    public const nint m_bNoCTsKilled = 0x12B5;
    public const nint m_bNoEnemiesKilled = 0x12B6;
    public const nint m_bCanDonateWeapons = 0x12B7;
    public const nint m_firstKillTime = 0x12BC;
    public const nint m_firstBloodTime = 0x12C4;
    public const nint m_hostageWasInjured = 0x12E0;
    public const nint m_hostageWasKilled = 0x12E1;
    public const nint m_bVoteCalled = 0x12F0;
    public const nint m_bServerVoteOnReset = 0x12F1;
    public const nint m_flVoteCheckThrottle = 0x12F4;
    public const nint m_bBuyTimeEnded = 0x12F8;
    public const nint m_nLastFreezeEndBeep = 0x12FC;
    public const nint m_bTargetBombed = 0x1300;
    public const nint m_bBombDefused = 0x1301;
    public const nint m_bMapHasBombZone = 0x1302;
    public const nint m_bGunGameRespawnWithBomb = 0x1303;
    public const nint m_fGunGameBombRespawnTimer = 0x1304;
    public const nint m_vecMainCTSpawnPos = 0x1324;
    public const nint m_CTSpawnPointsMasterList = 0x1330;
    public const nint m_TerroristSpawnPointsMasterList = 0x1348;
    public const nint m_iNextCTSpawnPoint = 0x1360;
    public const nint m_iNextTerroristSpawnPoint = 0x1364;
    public const nint m_CTSpawnPoints = 0x1368;
    public const nint m_TerroristSpawnPoints = 0x1380;
    public const nint m_bIsUnreservedGameServer = 0x1398;
    public const nint m_fAutobalanceDisplayTime = 0x139C;
    public const nint m_bAllowWeaponSwitch = 0x1608;
    public const nint m_bRoundTimeWarningTriggered = 0x1609;
    public const nint m_phaseChangeAnnouncementTime = 0x160C;
    public const nint m_fNextUpdateTeamClanNamesTime = 0x1610;
    public const nint m_flLastThinkTime = 0x1614;
    public const nint m_fAccumulatedRoundOffDamage = 0x1618;
    public const nint m_nShorthandedBonusLastEvalRound = 0x161C;
    public const nint m_bMatchAbortedDueToPlayerBan = 0x1898;
    public const nint m_bHasTriggeredRoundStartMusic = 0x1899;
    public const nint m_bHasTriggeredCoopSpawnReset = 0x189A;
    public const nint m_bSwitchingTeamsAtRoundReset = 0x189B;
    public const nint m_iMaxGunGameProgressiveWeaponIndex = 0x189C;
    public const nint m_pGameModeRules = 0x18B8;
    public const nint m_SurvivalRules = 0x18C0;
    public const nint m_BtGlobalBlackboard = 0x3558;
    public const nint m_hPlayerResource = 0x35C0;
    public const nint m_RetakeRules = 0x35C8;
    public const nint m_GuardianBotSkillLevelMax = 0x37AC;
    public const nint m_GuardianBotSkillLevelMin = 0x37B0;
    public const nint m_arrTeamUniqueKillWeaponsMatch = 0x37B8;
    public const nint m_bTeamLastKillUsedUniqueWeaponMatch = 0x3818;
    public const nint m_nMatchEndCount = 0x3840;
    public const nint m_nTTeamIntroVariant = 0x3844;
    public const nint m_nCTTeamIntroVariant = 0x3848;
    public const nint m_bTeamIntroPeriod = 0x384C;
    public const nint m_fTeamIntroPeriodEnd = 0x3850;
    public const nint m_bPlayedTeamIntroVO = 0x3854;
    public const nint m_flLastPerfSampleTime = 0x4810;
}

public static class CCSGameRulesProxy {
    public const nint m_pGameRules = 0x4B0;
}

public static class CCSPlace {
    public const nint m_name = 0x708;
}

public static class CCSPlayerController {
    public const nint m_pInGameMoneyServices = 0x6A0;
    public const nint m_pInventoryServices = 0x6A8;
    public const nint m_pActionTrackingServices = 0x6B0;
    public const nint m_pDamageServices = 0x6B8;
    public const nint m_iPing = 0x6C0;
    public const nint m_bHasCommunicationAbuseMute = 0x6C4;
    public const nint m_szCrosshairCodes = 0x6C8;
    public const nint m_iPendingTeamNum = 0x6D0;
    public const nint m_flForceTeamTime = 0x6D4;
    public const nint m_iCompTeammateColor = 0x6D8;
    public const nint m_bEverPlayedOnTeam = 0x6DC;
    public const nint m_bAttemptedToGetColor = 0x6DD;
    public const nint m_iTeammatePreferredColor = 0x6E0;
    public const nint m_bTeamChanged = 0x6E4;
    public const nint m_bInSwitchTeam = 0x6E5;
    public const nint m_bHasSeenJoinGame = 0x6E6;
    public const nint m_bJustBecameSpectator = 0x6E7;
    public const nint m_bSwitchTeamsOnNextRoundReset = 0x6E8;
    public const nint m_bRemoveAllItemsOnNextRoundReset = 0x6E9;
    public const nint m_szClan = 0x6F0;
    public const nint m_szClanName = 0x6F8;
    public const nint m_iCoachingTeam = 0x718;
    public const nint m_nPlayerDominated = 0x720;
    public const nint m_nPlayerDominatingMe = 0x728;
    public const nint m_iCompetitiveRanking = 0x730;
    public const nint m_iCompetitiveWins = 0x734;
    public const nint m_iCompetitiveRankType = 0x738;
    public const nint m_iCompetitiveRankingPredicted_Win = 0x73C;
    public const nint m_iCompetitiveRankingPredicted_Loss = 0x740;
    public const nint m_iCompetitiveRankingPredicted_Tie = 0x744;
    public const nint m_nEndMatchNextMapVote = 0x748;
    public const nint m_unActiveQuestId = 0x74C;
    public const nint m_nQuestProgressReason = 0x750;
    public const nint m_unPlayerTvControlFlags = 0x754;
    public const nint m_iDraftIndex = 0x7C0;
    public const nint m_msQueuedModeDisconnectionTimestamp = 0x7C4;
    public const nint m_uiAbandonRecordedReason = 0x7C8;
    public const nint m_bEverFullyConnected = 0x7CC;
    public const nint m_bAbandonAllowsSurrender = 0x7CD;
    public const nint m_bAbandonOffersInstantSurrender = 0x7CE;
    public const nint m_bDisconnection1MinWarningPrinted = 0x7CF;
    public const nint m_bScoreReported = 0x7D0;
    public const nint m_nDisconnectionTick = 0x7D4;
    public const nint m_bControllingBot = 0x7E0;
    public const nint m_bHasControlledBotThisRound = 0x7E1;
    public const nint m_bHasBeenControlledByPlayerThisRound = 0x7E2;
    public const nint m_nBotsControlledThisRound = 0x7E4;
    public const nint m_bCanControlObservedBot = 0x7E8;
    public const nint m_hPlayerPawn = 0x7EC;
    public const nint m_hObserverPawn = 0x7F0;
    public const nint m_DesiredObserverMode = 0x7F4;
    public const nint m_hDesiredObserverTarget = 0x7F8;
    public const nint m_bPawnIsAlive = 0x7FC;
    public const nint m_iPawnHealth = 0x800;
    public const nint m_iPawnArmor = 0x804;
    public const nint m_bPawnHasDefuser = 0x808;
    public const nint m_bPawnHasHelmet = 0x809;
    public const nint m_nPawnCharacterDefIndex = 0x80A;
    public const nint m_iPawnLifetimeStart = 0x80C;
    public const nint m_iPawnLifetimeEnd = 0x810;
    public const nint m_iPawnGunGameLevel = 0x814;
    public const nint m_iPawnBotDifficulty = 0x818;
    public const nint m_hOriginalControllerOfCurrentPawn = 0x81C;
    public const nint m_iScore = 0x820;
    public const nint m_iRoundScore = 0x824;
    public const nint m_vecKills = 0x828;
    public const nint m_iMVPs = 0x840;
    public const nint m_nUpdateCounter = 0x844;
    public const nint m_lastHeldVoteTimer = 0xF8E8;
    public const nint m_bShowHints = 0xF900;
    public const nint m_iNextTimeCheck = 0xF904;
}

public static class CCSPlayerController_ActionTrackingServices {
    public const nint m_perRoundStats = 0x40;
    public const nint m_matchStats = 0x90;
    public const nint m_iNumRoundKills = 0x148;
    public const nint m_iNumRoundKillsHeadshots = 0x14C;
}

public static class CCSPlayerController_DamageServices {
    public const nint m_nSendUpdate = 0x40;
    public const nint m_DamageList = 0x48;
}

public static class CCSPlayerController_InGameMoneyServices {
    public const nint m_bReceivesMoneyNextRound = 0x40;
    public const nint m_iAccountMoneyEarnedForNextRound = 0x44;
    public const nint m_iAccount = 0x48;
    public const nint m_iStartAccount = 0x4C;
    public const nint m_iTotalCashSpent = 0x50;
    public const nint m_iCashSpentThisRound = 0x54;
}

public static class CCSPlayerController_InventoryServices {
    public const nint m_unMusicID = 0x40;
    public const nint m_rank = 0x44;
    public const nint m_nPersonaDataPublicLevel = 0x5C;
    public const nint m_nPersonaDataPublicCommendsLeader = 0x60;
    public const nint m_nPersonaDataPublicCommendsTeacher = 0x64;
    public const nint m_nPersonaDataPublicCommendsFriendly = 0x68;
    public const nint m_unEquippedPlayerSprayIDs = 0xF48;
    public const nint m_vecTerroristLoadoutCache = 0xF50;
    public const nint m_vecCounterTerroristLoadoutCache = 0xFA0;
}

public static class CCSPlayerPawn {
    public const nint m_pParachuteServices = 0x1628;
    public const nint m_pBulletServices = 0x1630;
    public const nint m_pHostageServices = 0x1638;
    public const nint m_pBuyServices = 0x1640;
    public const nint m_pPingServices = 0x1648;
    public const nint m_pRadioServices = 0x1650;
    public const nint m_pDamageReactServices = 0x1658;
    public const nint m_iRetakesOffering = 0x1728;
    public const nint m_iRetakesOfferingCard = 0x172C;
    public const nint m_bRetakesHasDefuseKit = 0x1730;
    public const nint m_bRetakesMVPLastRound = 0x1731;
    public const nint m_iRetakesMVPBoostItem = 0x1734;
    public const nint m_RetakesMVPBoostExtraUtility = 0x1738;
    public const nint m_bIsBuyMenuOpen = 0x173C;
    public const nint m_xLastHeadBoneTransform = 0x1C90;
    public const nint m_bLastHeadBoneTransformIsValid = 0x1CB0;
    public const nint m_iPlayerLocked = 0x1CB4;
    public const nint m_flNextSprayDecalTime = 0x1CBC;
    public const nint m_nRagdollDamageBone = 0x1CC4;
    public const nint m_vRagdollDamageForce = 0x1CC8;
    public const nint m_vRagdollDamagePosition = 0x1CD4;
    public const nint m_szRagdollDamageWeaponName = 0x1CE0;
    public const nint m_bRagdollDamageHeadshot = 0x1D20;
    public const nint m_EconGloves = 0x1D28;
    public const nint m_qDeathEyeAngles = 0x1FA0;
    public const nint m_bSkipOneHeadConstraintUpdate = 0x1FAC;
}

public static class CCSPlayerPawnBase {
    public const nint m_CTouchExpansionComponent = 0xB58;
    public const nint m_pActionTrackingServices = 0xBA8;
    public const nint m_pViewModelServices = 0xBB0;
    public const nint m_iDisplayHistoryBits = 0xBB8;
    public const nint m_flLastAttackedTeammate = 0xBBC;
    public const nint m_hOriginalController = 0xBC0;
    public const nint m_blindUntilTime = 0xBC4;
    public const nint m_blindStartTime = 0xBC8;
    public const nint m_allowAutoFollowTime = 0xBCC;
    public const nint m_bHasFemaleVoice = 0xBD0;
    public const nint m_entitySpottedState = 0xBD8;
    public const nint m_nSpotRules = 0xBF0;
    public const nint m_flTimeOfLastInjury = 0xBF4;
    public const nint m_nRelativeDirectionOfLastInjury = 0xBF8;
    public const nint m_iPlayerState = 0xBFC;
    public const nint m_chickenIdleSoundTimer = 0xC08;
    public const nint m_chickenJumpSoundTimer = 0xC20;
    public const nint m_vecLastBookmarkedPosition = 0xCD8;
    public const nint m_flLastDistanceTraveledNotice = 0xCE4;
    public const nint m_flAccumulatedDistanceTraveled = 0xCE8;
    public const nint m_flLastFriendlyFireDamageReductionRatio = 0xCEC;
    public const nint m_bRespawning = 0xCF0;
    public const nint m_iNumGunGameTRBombTotalPoints = 0xCF4;
    public const nint m_bShouldProgressGunGameTRBombModeWeapon = 0xCF8;
    public const nint m_nLastPickupPriority = 0xCFC;
    public const nint m_flLastPickupPriorityTime = 0xD00;
    public const nint m_passiveItems = 0xD04;
    public const nint m_bIsScoped = 0xD08;
    public const nint m_bIsWalking = 0xD09;
    public const nint m_bResumeZoom = 0xD0A;
    public const nint m_bIsDefusing = 0xD0B;
    public const nint m_bIsGrabbingHostage = 0xD0C;
    public const nint m_iBlockingUseActionInProgress = 0xD10;
    public const nint m_fImmuneToGunGameDamageTime = 0xD14;
    public const nint m_bGunGameImmunity = 0xD18;
    public const nint m_bMadeFinalGunGameProgressiveKill = 0xD19;
    public const nint m_iGunGameProgressiveWeaponIndex = 0xD1C;
    public const nint m_iNumGunGameTRKillPoints = 0xD20;
    public const nint m_iNumGunGameKillsWithCurrentWeapon = 0xD24;
    public const nint m_unTotalRoundDamageDealt = 0xD28;
    public const nint m_fMolotovDamageTime = 0xD2C;
    public const nint m_bHasMovedSinceSpawn = 0xD30;
    public const nint m_bCanMoveDuringFreezePeriod = 0xD31;
    public const nint m_isCurrentGunGameLeader = 0xD32;
    public const nint m_isCurrentGunGameTeamLeader = 0xD33;
    public const nint m_flGuardianTooFarDistFrac = 0xD34;
    public const nint m_flNextGuardianTooFarHurtTime = 0xD38;
    public const nint m_flDetectedByEnemySensorTime = 0xD3C;
    public const nint m_bIsSpawnRappelling = 0xD40;
    public const nint m_vecSpawnRappellingRopeOrigin = 0xD44;
    public const nint m_nSurvivalTeam = 0xD50;
    public const nint m_hSurvivalAssassinationTarget = 0xD54;
    public const nint m_nCompletedSurvivalAssassinations = 0xD58;
    public const nint m_flDealtDamageToEnemyMostRecentTimestamp = 0xD5C;
    public const nint m_flHealthShotBoostExpirationTime = 0xD60;
    public const nint m_flLastEquippedHelmetTime = 0xD64;
    public const nint m_flLastEquippedArmorTime = 0xD68;
    public const nint m_nHeavyAssaultSuitCooldownRemaining = 0xD6C;
    public const nint m_bResetArmorNextSpawn = 0xD70;
    public const nint m_flLastBumpMineBumpTime = 0xD74;
    public const nint m_flEmitSoundTime = 0xD78;
    public const nint m_iNumSpawns = 0xD7C;
    public const nint m_iShouldHaveCash = 0xD80;
    public const nint m_bJustKilledTeammate = 0xD84;
    public const nint m_bPunishedForTK = 0xD85;
    public const nint m_bInvalidSteamLogonDelayed = 0xD86;
    public const nint m_iTeamKills = 0xD88;
    public const nint m_flLastAction = 0xD8C;
    public const nint m_flNameChangeHistory = 0xD90;
    public const nint m_fLastGivenDefuserTime = 0xDA4;
    public const nint m_fLastGivenBombTime = 0xDA8;
    public const nint m_bHasNightVision = 0xDAC;
    public const nint m_bNightVisionOn = 0xDAD;
    public const nint m_fNextRadarUpdateTime = 0xDB0;
    public const nint m_flLastMoneyUpdateTime = 0xDB4;
    public const nint m_MenuStringBuffer = 0xDB8;
    public const nint m_fIntroCamTime = 0x11B8;
    public const nint m_nMyCollisionGroup = 0x11BC;
    public const nint m_bInBombZone = 0x11C0;
    public const nint m_bInBuyZone = 0x11C1;
    public const nint m_bInNoDefuseArea = 0x11C2;
    public const nint m_bKilledByTaser = 0x11C3;
    public const nint m_iMoveState = 0x11C4;
    public const nint m_nPreviousModelIndex = 0x11C8;
    public const nint m_grenadeParameterStashTime = 0x11D0;
    public const nint m_bGrenadeParametersStashed = 0x11D4;
    public const nint m_angStashedShootAngles = 0x11D8;
    public const nint m_vecStashedGrenadeThrowPosition = 0x11E4;
    public const nint m_vecStashedVelocity = 0x11F0;
    public const nint m_angShootAngleHistory = 0x11FC;
    public const nint m_vecThrowPositionHistory = 0x1214;
    public const nint m_vecVelocityHistory = 0x122C;
    public const nint m_nCharacterDefIndex = 0x1244;
    public const nint m_bDiedAirborne = 0x1246;
    public const nint m_iBombSiteIndex = 0x1248;
    public const nint m_nWhichBombZone = 0x124C;
    public const nint m_bInBombZoneTrigger = 0x1250;
    public const nint m_bWasInBombZoneTrigger = 0x1251;
    public const nint m_bWasInHostageRescueZone = 0x1252;
    public const nint m_bWasInBuyZone = 0x1253;
    public const nint m_bInHostageRescueZone = 0x1254;
    public const nint m_flStamina = 0x1258;
    public const nint m_iDirection = 0x125C;
    public const nint m_iShotsFired = 0x1260;
    public const nint m_ArmorValue = 0x1264;
    public const nint m_flFlinchStack = 0x1268;
    public const nint m_flVelocityModifier = 0x126C;
    public const nint m_flHitHeading = 0x1270;
    public const nint m_nHitBodyPart = 0x1274;
    public const nint m_iHostagesKilled = 0x1278;
    public const nint m_vecTotalBulletForce = 0x127C;
    public const nint m_flFlashDuration = 0x1288;
    public const nint m_flFlashMaxAlpha = 0x128C;
    public const nint m_flProgressBarStartTime = 0x1290;
    public const nint m_iProgressBarDuration = 0x1294;
    public const nint m_bWaitForNoAttack = 0x1298;
    public const nint m_flLowerBodyYawTarget = 0x129C;
    public const nint m_bStrafing = 0x12A0;
    public const nint m_lastStandingPos = 0x12A4;
    public const nint m_ignoreLadderJumpTime = 0x12B0;
    public const nint m_ladderSurpressionTimer = 0x12B8;
    public const nint m_lastLadderNormal = 0x12D0;
    public const nint m_lastLadderPos = 0x12DC;
    public const nint m_thirdPersonHeading = 0x12E8;
    public const nint m_flSlopeDropOffset = 0x12F4;
    public const nint m_flSlopeDropHeight = 0x12F8;
    public const nint m_vHeadConstraintOffset = 0x12FC;
    public const nint m_iLastWeaponFireUsercmd = 0x1310;
    public const nint m_angEyeAngles = 0x1314;
    public const nint m_bVCollisionInitted = 0x1320;
    public const nint m_storedSpawnPosition = 0x1324;
    public const nint m_storedSpawnAngle = 0x1330;
    public const nint m_bIsSpawning = 0x133C;
    public const nint m_bHideTargetID = 0x133D;
    public const nint m_nNumDangerZoneDamageHits = 0x1340;
    public const nint m_bHud_MiniScoreHidden = 0x1344;
    public const nint m_bHud_RadarHidden = 0x1345;
    public const nint m_nLastKillerIndex = 0x1348;
    public const nint m_nLastConcurrentKilled = 0x134C;
    public const nint m_nDeathCamMusic = 0x1350;
    public const nint m_iAddonBits = 0x1354;
    public const nint m_iPrimaryAddon = 0x1358;
    public const nint m_iSecondaryAddon = 0x135C;
    public const nint m_nTeamDamageGivenForMatch = 0x1360;
    public const nint m_bTDGaveProtectionWarning = 0x1364;
    public const nint m_bTDGaveProtectionWarningThisRound = 0x1365;
    public const nint m_flLastTHWarningTime = 0x1368;
    public const nint m_currentDeafnessFilter = 0x136C;
    public const nint m_enemyPlayersKilledThisRound = 0x1370;
    public const nint m_NumEnemiesKilledThisSpawn = 0x1388;
    public const nint m_maxNumEnemiesKillStreak = 0x138C;
    public const nint m_NumEnemiesKilledThisRound = 0x1390;
    public const nint m_NumEnemiesAtRoundStart = 0x1394;
    public const nint m_iRoundsWon = 0x1398;
    public const nint m_lastRoundResult = 0x139C;
    public const nint m_wasNotKilledNaturally = 0x13A0;
    public const nint m_vecPlayerPatchEconIndices = 0x13A4;
    public const nint m_iDeathFlags = 0x13B8;
    public const nint m_hPet = 0x13BC;
    public const nint m_unCurrentEquipmentValue = 0x1588;
    public const nint m_unRoundStartEquipmentValue = 0x158A;
    public const nint m_unFreezetimeEndEquipmentValue = 0x158C;
    public const nint m_szLastPlaceName = 0x158E;
    public const nint m_nSuicides = 0x15A0;
    public const nint m_nSurvivalTeamNumber = 0x15A4;
    public const nint m_aimPunchAngle = 0x15A8;
    public const nint m_aimPunchAngleVel = 0x15B4;
    public const nint m_aimPunchTickBase = 0x15C0;
    public const nint m_aimPunchTickFraction = 0x15C4;
    public const nint m_aimPunchCache = 0x15C8;
    public const nint m_bHasDeathInfo = 0x15E0;
    public const nint m_flDeathInfoTime = 0x15E4;
    public const nint m_vecDeathInfoOrigin = 0x15E8;
    public const nint m_bKilledByHeadshot = 0x15F4;
    public const nint m_LastHitBox = 0x15F8;
    public const nint m_LastHealth = 0x15FC;
    public const nint m_flLastCollisionCeiling = 0x1600;
    public const nint m_flLastCollisionCeilingChangeTime = 0x1604;
    public const nint m_strVOPrefix = 0x1608;
    public const nint m_flLandseconds = 0x1610;
    public const nint m_pBot = 0x1618;
    public const nint m_bBotAllowActive = 0x1620;
    public const nint m_bCommittingSuicideOnTeamChange = 0x1621;
}

public static class CCSPlayerResource {
    public const nint m_bHostageAlive = 0x4B0;
    public const nint m_isHostageFollowingSomeone = 0x4BC;
    public const nint m_iHostageEntityIDs = 0x4C8;
    public const nint m_bombsiteCenterA = 0x4F8;
    public const nint m_bombsiteCenterB = 0x504;
    public const nint m_hostageRescueX = 0x510;
    public const nint m_hostageRescueY = 0x520;
    public const nint m_hostageRescueZ = 0x530;
    public const nint m_bEndMatchNextMapAllVoted = 0x540;
    public const nint m_foundGoalPositions = 0x541;
}

public static class CCSPlayer_ActionTrackingServices {
    public const nint m_hLastWeaponBeforeC4AutoSwitch = 0x230;
    public const nint m_bIsRescuing = 0x264;
    public const nint m_weaponPurchasesThisMatch = 0x268;
    public const nint m_weaponPurchasesThisRound = 0x2C0;
}

public static class CCSPlayer_BulletServices {
    public const nint m_totalHitsOnServer = 0x40;
}

public static class CCSPlayer_BuyServices {
    public const nint m_vecSellbackPurchaseEntries = 0xC8;
}

public static class CCSPlayer_CameraServices {
    public const nint m_iFOV = 0x170;
    public const nint m_iFOVStart = 0x174;
    public const nint m_flFOVTime = 0x178;
    public const nint m_flFOVRate = 0x17C;
    public const nint m_hZoomOwner = 0x180;
    public const nint m_hTriggerFogList = 0x188;
    public const nint m_hLastFogTrigger = 0x1A0;
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
    public const nint m_flMaxFallVelocity = 0x220;
    public const nint m_vecLadderNormal = 0x224;
    public const nint m_nLadderSurfacePropIndex = 0x230;
    public const nint m_flDuckAmount = 0x234;
    public const nint m_flDuckSpeed = 0x238;
    public const nint m_bDuckOverride = 0x23C;
    public const nint m_bDesiresDuck = 0x23D;
    public const nint m_flDuckOffset = 0x240;
    public const nint m_nDuckTimeMsecs = 0x244;
    public const nint m_nDuckJumpTimeMsecs = 0x248;
    public const nint m_nJumpTimeMsecs = 0x24C;
    public const nint m_flLastDuckTime = 0x250;
    public const nint m_vecLastPositionAtFullCrouchSpeed = 0x260;
    public const nint m_duckUntilOnGround = 0x268;
    public const nint m_bHasWalkMovedSinceLastJump = 0x269;
    public const nint m_bInStuckTest = 0x26A;
    public const nint m_flStuckCheckTime = 0x278;
    public const nint m_nTraceCount = 0x478;
    public const nint m_StuckLast = 0x47C;
    public const nint m_bSpeedCropped = 0x480;
    public const nint m_nOldWaterLevel = 0x484;
    public const nint m_flWaterEntryTime = 0x488;
    public const nint m_vecForward = 0x48C;
    public const nint m_vecLeft = 0x498;
    public const nint m_vecUp = 0x4A4;
    public const nint m_vecPreviouslyPredictedOrigin = 0x4B0;
    public const nint m_bMadeFootstepNoise = 0x4BC;
    public const nint m_iFootsteps = 0x4C0;
    public const nint m_nRoundFootstepsMade = 0x4C4;
    public const nint m_bOldJumpPressed = 0x4C8;
    public const nint m_flJumpPressedTime = 0x4CC;
    public const nint m_flJumpUntil = 0x4D0;
    public const nint m_flJumpVel = 0x4D4;
    public const nint m_fStashGrenadeParameterWhen = 0x4D8;
    public const nint m_nButtonDownMaskPrev = 0x4E0;
    public const nint m_flOffsetTickCompleteTime = 0x4E8;
    public const nint m_flOffsetTickStashedSpeed = 0x4EC;
}

public static class CCSPlayer_PingServices {
    public const nint m_flPlayerPingTokens = 0x40;
    public const nint m_hPlayerPing = 0x54;
}

public static class CCSPlayer_RadioServices {
    public const nint m_flGotHostageTalkTimer = 0x40;
    public const nint m_flDefusingTalkTimer = 0x44;
    public const nint m_flC4PlantTalkTimer = 0x48;
    public const nint m_flRadioTokenSlots = 0x4C;
    public const nint m_bIgnoreRadio = 0x58;
}

public static class CCSPlayer_UseServices {
    public const nint m_hLastKnownUseEntity = 0x40;
    public const nint m_flLastUseTimeStamp = 0x44;
    public const nint m_flTimeStartedHoldingUse = 0x48;
    public const nint m_flTimeLastUsedWindow = 0x4C;
}

public static class CCSPlayer_ViewModelServices {
    public const nint m_hViewModel = 0x40;
}

public static class CCSPlayer_WaterServices {
    public const nint m_NextDrownDamageTime = 0x40;
    public const nint m_nDrownDmgRate = 0x44;
    public const nint m_AirFinishedTime = 0x48;
    public const nint m_flWaterJumpTime = 0x4C;
    public const nint m_vecWaterJumpVel = 0x50;
    public const nint m_flSwimSoundTime = 0x5C;
}

public static class CCSPlayer_WeaponServices {
    public const nint m_flNextAttack = 0xB0;
    public const nint m_bIsLookingAtWeapon = 0xB4;
    public const nint m_bIsHoldingLookAtWeapon = 0xB5;
    public const nint m_hSavedWeapon = 0xB8;
    public const nint m_nTimeToMelee = 0xBC;
    public const nint m_nTimeToSecondary = 0xC0;
    public const nint m_nTimeToPrimary = 0xC4;
    public const nint m_nTimeToSniperRifle = 0xC8;
    public const nint m_bIsBeingGivenItem = 0xCC;
    public const nint m_bIsPickingUpItemWithUse = 0xCD;
    public const nint m_bPickedUpWeapon = 0xCE;
}

public static class CCSPropExplodingBarrel {
    public const nint m_hBarrelTop = 0xB78;
    public const nint m_bExploded = 0xB7C;
    public const nint m_nAccumulatedDamage = 0xB80;
}

public static class CCSPropExplodingBarrelTop {
    public const nint m_flOverrideAlpha = 0xB70;
}

public static class CCSTeam {
    public const nint m_nLastRecievedShorthandedRoundBonus = 0x568;
    public const nint m_nShorthandedRoundBonusStartRound = 0x56C;
    public const nint m_bSurrendered = 0x570;
    public const nint m_szTeamMatchStat = 0x571;
    public const nint m_numMapVictories = 0x774;
    public const nint m_scoreFirstHalf = 0x778;
    public const nint m_scoreSecondHalf = 0x77C;
    public const nint m_scoreOvertime = 0x780;
    public const nint m_szClanTeamname = 0x784;
    public const nint m_iClanID = 0x808;
    public const nint m_szTeamFlagImage = 0x80C;
    public const nint m_szTeamLogoImage = 0x814;
    public const nint m_flNextResourceTime = 0x81C;
    public const nint m_iLastUpdateSentAt = 0x820;
    public const nint m_flLastPlayerSortTime = 0x824;
    public const nint m_nLastGGLeader_CT = 0x828;
    public const nint m_nLastGGLeader_T = 0x82C;
    public const nint m_nGGLeaderSlot_CT = 0x830;
    public const nint m_nGGLeaderSlot_T = 0x834;
    public const nint m_bGGHasLeader_CT = 0x838;
    public const nint m_bGGHasLeader_T = 0x839;
}

public static class CChangeLevel {
    public const nint m_sMapName = 0x8A8;
    public const nint m_sLandmarkName = 0x8B0;
    public const nint m_OnChangeLevel = 0x8B8;
    public const nint m_bTouched = 0x8E0;
    public const nint m_bNoTouch = 0x8E1;
    public const nint m_bNewChapter = 0x8E2;
    public const nint m_bOnChangeLevelFired = 0x8E3;
}

public static class CChicken {
    public const nint m_AttributeManager = 0xB20;
    public const nint m_OriginalOwnerXuidLow = 0xDE8;
    public const nint m_OriginalOwnerXuidHigh = 0xDEC;
    public const nint m_updateTimer = 0xDF0;
    public const nint m_stuckAnchor = 0xE08;
    public const nint m_stuckTimer = 0xE18;
    public const nint m_collisionStuckTimer = 0xE30;
    public const nint m_isOnGround = 0xE48;
    public const nint m_activity = 0xE4C;
    public const nint m_activityTimer = 0xE50;
    public const nint m_turnRate = 0xE68;
    public const nint m_fleeFrom = 0xE6C;
    public const nint m_moveRateThrottleTimer = 0xE70;
    public const nint m_startleTimer = 0xE88;
    public const nint m_vocalizeTimer = 0xEA0;
    public const nint m_flWhenZombified = 0xEB8;
    public const nint m_jumpedThisFrame = 0xEBC;
    public const nint m_leader = 0xEC0;
    public const nint m_reuseTimer = 0xEC8;
    public const nint m_hasBeenUsed = 0xEE0;
    public const nint m_jumpTimer = 0xEE8;
    public const nint m_flLastJumpTime = 0xF00;
    public const nint m_bInJump = 0xF04;
    public const nint m_isWaitingForLeader = 0xF05;
    public const nint m_repathTimer = 0x2F10;
    public const nint m_inhibitDoorTimer = 0x2F28;
    public const nint m_inhibitObstacleAvoidanceTimer = 0x2FB8;
    public const nint m_vecPathGoal = 0x2FD8;
    public const nint m_flActiveFollowStartTime = 0x2FE4;
    public const nint m_followMinuteTimer = 0x2FE8;
    public const nint m_vecLastEggPoopPosition = 0x3000;
    public const nint m_vecEggsPooped = 0x3010;
    public const nint m_BlockDirectionTimer = 0x3030;
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

public static class CColorCorrection {
    public const nint m_flFadeInDuration = 0x4B0;
    public const nint m_flFadeOutDuration = 0x4B4;
    public const nint m_flStartFadeInWeight = 0x4B8;
    public const nint m_flStartFadeOutWeight = 0x4BC;
    public const nint m_flTimeStartFadeIn = 0x4C0;
    public const nint m_flTimeStartFadeOut = 0x4C4;
    public const nint m_flMaxWeight = 0x4C8;
    public const nint m_bStartDisabled = 0x4CC;
    public const nint m_bEnabled = 0x4CD;
    public const nint m_bMaster = 0x4CE;
    public const nint m_bClientSide = 0x4CF;
    public const nint m_bExclusive = 0x4D0;
    public const nint m_MinFalloff = 0x4D4;
    public const nint m_MaxFalloff = 0x4D8;
    public const nint m_flCurWeight = 0x4DC;
    public const nint m_netlookupFilename = 0x4E0;
    public const nint m_lookupFilename = 0x6E0;
}

public static class CColorCorrectionVolume {
    public const nint m_bEnabled = 0x8A8;
    public const nint m_MaxWeight = 0x8AC;
    public const nint m_FadeDuration = 0x8B0;
    public const nint m_bStartDisabled = 0x8B4;
    public const nint m_Weight = 0x8B8;
    public const nint m_lookupFilename = 0x8BC;
    public const nint m_LastEnterWeight = 0xABC;
    public const nint m_LastEnterTime = 0xAC0;
    public const nint m_LastExitWeight = 0xAC4;
    public const nint m_LastExitTime = 0xAC8;
}

public static class CCommentaryAuto {
    public const nint m_OnCommentaryNewGame = 0x4B0;
    public const nint m_OnCommentaryMidGame = 0x4D8;
    public const nint m_OnCommentaryMultiplayerSpawn = 0x500;
}

public static class CCommentarySystem {
    public const nint m_bCommentaryConvarsChanging = 0x11;
    public const nint m_bCommentaryEnabledMidGame = 0x12;
    public const nint m_flNextTeleportTime = 0x14;
    public const nint m_iTeleportStage = 0x18;
    public const nint m_bCheatState = 0x1C;
    public const nint m_bIsFirstSpawnGroupToLoad = 0x1D;
    public const nint m_hCurrentNode = 0x38;
    public const nint m_hActiveCommentaryNode = 0x3C;
    public const nint m_hLastCommentaryNode = 0x40;
    public const nint m_vecNodes = 0x48;
}

public static class CConstantForceController {
    public const nint m_linear = 0xC;
    public const nint m_angular = 0x18;
    public const nint m_linearSave = 0x24;
    public const nint m_angularSave = 0x30;
}

public static class CConstraintAnchor {
    public const nint m_massScale = 0x888;
}

public static class CCopyRecipientFilter {
    public const nint m_Flags = 0x8;
    public const nint m_Recipients = 0x10;
}

public static class CCredits {
    public const nint m_OnCreditsDone = 0x4B0;
    public const nint m_bRolledOutroCredits = 0x4D8;
    public const nint m_flLogoLength = 0x4DC;
}

public static class CDZDoor {
    public const nint m_bIsSecurityDoor = 0xE50;
    public const nint m_hSpawnPoint = 0xE54;
    public const nint m_bPaidToUnlock = 0xE58;
    public const nint m_nPlayDoorOpenSound = 0xE5C;
    public const nint m_nAttachmentIndex1 = 0xE90;
    public const nint m_nAttachmentIndex2 = 0xE91;
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

public static class CDangerZone {
    public const nint m_vecDangerZoneOriginStartedAt = 0x4B0;
    public const nint m_flBombLaunchTime = 0x4BC;
    public const nint m_flExtraRadius = 0x4C0;
    public const nint m_flExtraRadiusStartTime = 0x4C4;
    public const nint m_flExtraRadiusTotalLerpTime = 0x4C8;
    public const nint m_nDropOrder = 0x4CC;
    public const nint m_iWave = 0x4D0;
    public const nint m_nMyZoneIndex = 0x4D4;
    public const nint m_nZoneNeighbors = 0x4D8;
}

public static class CDangerZoneController {
    public const nint m_bDangerZoneControllerEnabled = 0x4B0;
    public const nint m_bMissionControlledExplosions = 0x4B1;
    public const nint m_vecEndGameCircleStart = 0x4B4;
    public const nint m_vecEndGameCircleEnd = 0x4C0;
    public const nint m_flStartTime = 0x4CC;
    public const nint m_flFinalExpansionTime = 0x4D0;
    public const nint m_DangerZones = 0x4D4;
    public const nint m_flWaveEndTimes = 0x57C;
    public const nint m_hTheFinalZone = 0x590;
    public const nint m_flLastDangerZoneStatusLogged = 0x594;
    public const nint m_flLastDangerZoneDamageTime = 0x598;
    public const nint m_bFirstBombWarning = 0x59C;
    public const nint m_numWaveRewardsGranted = 0x5A0;
    public const nint m_pGasCanLaunchers = 0x5A8;
}

public static class CDebugHistory {
    public const nint m_nNpcEvents = 0x44F0;
}

public static class CDecoyProjectile {
    public const nint m_shotsRemaining = 0xA28;
    public const nint m_fExpireTime = 0xA2C;
    public const nint m_decoyWeaponDefIndex = 0xA38;
}

public static class CDrone {
    public const nint m_hMoveToThisEntity = 0xB88;
    public const nint m_hDeliveryCargo = 0xB8C;
    public const nint m_hRecentCargo = 0xB90;
    public const nint m_bPilotTakeoverAllowed = 0xB94;
    public const nint m_hPotentialCargo = 0xB98;
    public const nint m_hCurrentPilot = 0xB9C;
    public const nint m_vecTagPositions = 0xBA0;
    public const nint m_vecTagIncrements = 0xCC0;
    public const nint m_flLastUpdateTargetScanTime = 0xD20;
    public const nint m_bWasControlledByPlayer = 0xD24;
    public const nint m_bHovering = 0xD25;
    public const nint m_pStateSound = 0xD28;
    public const nint m_vecGroundOffset = 0xD30;
    public const nint m_bQueuingOrders = 0xD58;
    public const nint m_flLastOrdersChangeTimestamp = 0xD5C;
    public const nint m_vecLastKnownAcceleration = 0xD60;
    public const nint m_vecLastKnownVelocity = 0xD6C;
    public const nint m_vecLastKnownAngImpulse = 0xD78;
    public const nint m_flLastKnownSpeed = 0xD84;
    public const nint m_flMaxSpeed = 0xD88;
    public const nint m_vecCurrentDestination = 0xD8C;
    public const nint m_flLastKnownDistanceToDestination = 0xD98;
    public const nint m_flLastKnownWaypointAccuracy = 0xD9C;
    public const nint m_vecWaypointQueue = 0xDA0;
    public const nint m_vecSparsePositionHistory = 0xDB8;
    public const nint m_vecPositionHistory = 0xDD0;
    public const nint m_vecUnstuckQueue = 0xDE8;
    public const nint m_flLastKnownGroundHeight = 0xE00;
    public const nint m_GroundCheckTimer = 0xE08;
    public const nint m_ActInjuredTimer = 0xE20;
    public const nint m_flPowerCutUntil = 0xE38;
    public const nint m_WanderTimer = 0xE40;
    public const nint m_flLastTimeSawAttackTarget = 0xE58;
    public const nint m_vecLastKnownAttackTargetPosition = 0xE5C;
    public const nint m_hAttackTarget = 0xE68;
    public const nint m_IntervalThinkTimer = 0xE70;
    public const nint m_bDoIntervalThink = 0xE88;
    public const nint m_flLastDroppedGrenadeAt = 0xE8C;
    public const nint m_flSpawnTimeStamp = 0xE90;
    public const nint m_bInPlayArea = 0xE94;
    public const nint m_vecSpawnPosition = 0xE98;
    public const nint m_vecLastKnownMoveToEntityPosition = 0xEA4;
    public const nint m_tCargoCollisionGroup = 0xEB0;
    public const nint m_flTimeArrivedAtMoveToEntity = 0xEB4;
    public const nint m_vecAvoidanceDir = 0xEB8;
    public const nint m_flAvoidanceTime = 0xEC4;
    public const nint m_bUpgraded = 0xEC8;
    public const nint m_hCargoOwner = 0xECC;
    public const nint m_vecPlayerControlThrust = 0xED8;
    public const nint m_flRopeLength = 0xEE4;
    public const nint m_bDidDropOnRoofWarning = 0xEE8;
    public const nint m_flSelfDestructTime = 0xEEC;
    public const nint m_bSelfDestructFire = 0xEF0;
    public const nint m_bSelfDestructSpark = 0xEF1;
    public const nint m_hLastKnownPilot = 0xEF4;
    public const nint m_bHasAlwaysBeenInZone = 0xEF8;
    public const nint m_nJammedAmount = 0xEFC;
    public const nint m_hPlayerThatOrderedMe = 0xF00;
}

public static class CDronegun {
    public const nint m_vecAttentionTarget = 0x898;
    public const nint m_vecTargetOffset = 0x8A4;
    public const nint m_bHasTarget = 0x8B0;
    public const nint m_vecAttentionCurrent = 0x8B4;
    public const nint m_nPoseParamPitch = 0x8C0;
    public const nint m_nPoseParamYaw = 0x8C4;
    public const nint m_bVarInit = 0x8C8;
    public const nint m_flDisorientEndTime = 0x8CC;
    public const nint m_hEnvGunfire = 0x8E8;
    public const nint m_flLastShootTime = 0x8EC;
    public const nint m_flLastSound1 = 0x8F0;
    public const nint m_flLastSound2 = 0x8F4;
    public const nint m_flLastSound3 = 0x8F8;
    public const nint m_nAttachMuzzle = 0x8FC;
}

public static class CDynamicLight {
    public const nint m_ActualFlags = 0x700;
    public const nint m_Flags = 0x701;
    public const nint m_LightStyle = 0x702;
    public const nint m_On = 0x703;
    public const nint m_Radius = 0x704;
    public const nint m_Exponent = 0x708;
    public const nint m_InnerAngle = 0x70C;
    public const nint m_OuterAngle = 0x710;
    public const nint m_SpotRadius = 0x714;
}

public static class CDynamicProp {
    public const nint m_bCreateNavObstacle = 0xA08;
    public const nint m_bUseHitboxesForRenderBox = 0xA09;
    public const nint m_bUseAnimGraph = 0xA0A;
    public const nint m_pOutputAnimBegun = 0xA10;
    public const nint m_pOutputAnimOver = 0xA38;
    public const nint m_pOutputAnimLoopCycleOver = 0xA60;
    public const nint m_OnAnimReachedStart = 0xA88;
    public const nint m_OnAnimReachedEnd = 0xAB0;
    public const nint m_iszDefaultAnim = 0xAD8;
    public const nint m_nDefaultAnimLoopMode = 0xAE0;
    public const nint m_bAnimateOnServer = 0xAE4;
    public const nint m_bRandomizeCycle = 0xAE5;
    public const nint m_bStartDisabled = 0xAE6;
    public const nint m_bScriptedMovement = 0xAE7;
    public const nint m_bFiredStartEndOutput = 0xAE8;
    public const nint m_bForceNpcExclude = 0xAE9;
    public const nint m_bCreateNonSolid = 0xAEA;
    public const nint m_bIsOverrideProp = 0xAEB;
    public const nint m_iInitialGlowState = 0xAEC;
    public const nint m_nGlowRange = 0xAF0;
    public const nint m_nGlowRangeMin = 0xAF4;
    public const nint m_glowColor = 0xAF8;
    public const nint m_nGlowTeam = 0xAFC;
}

public static class CEconEntity {
    public const nint m_AttributeManager = 0x928;
    public const nint m_OriginalOwnerXuidLow = 0xBF0;
    public const nint m_OriginalOwnerXuidHigh = 0xBF4;
    public const nint m_nFallbackPaintKit = 0xBF8;
    public const nint m_nFallbackSeed = 0xBFC;
    public const nint m_flFallbackWear = 0xC00;
    public const nint m_nFallbackStatTrak = 0xC04;
    public const nint m_hOldProvidee = 0xC08;
    public const nint m_iOldOwnerClass = 0xC0C;
}

public static class CEconItemAttribute {
    public const nint m_iAttributeDefinitionIndex = 0x30;
    public const nint m_flValue = 0x34;
    public const nint m_flInitialValue = 0x38;
    public const nint m_nRefundableCurrency = 0x3C;
    public const nint m_bSetBonus = 0x40;
}

public static class CEconItemView {
    public const nint m_iItemDefinitionIndex = 0x38;
    public const nint m_iEntityQuality = 0x3C;
    public const nint m_iEntityLevel = 0x40;
    public const nint m_iItemID = 0x48;
    public const nint m_iItemIDHigh = 0x50;
    public const nint m_iItemIDLow = 0x54;
    public const nint m_iAccountID = 0x58;
    public const nint m_iInventoryPosition = 0x5C;
    public const nint m_bInitialized = 0x68;
    public const nint m_AttributeList = 0x70;
    public const nint m_NetworkedDynamicAttributes = 0xD0;
    public const nint m_szCustomName = 0x130;
    public const nint m_szCustomNameOverride = 0x1D1;
}

public static class CEconWearable {
    public const nint m_nForceSkin = 0xC10;
    public const nint m_bAlwaysAllow = 0xC14;
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

public static class CEntityDissolve {
    public const nint m_flFadeInStart = 0x700;
    public const nint m_flFadeInLength = 0x704;
    public const nint m_flFadeOutModelStart = 0x708;
    public const nint m_flFadeOutModelLength = 0x70C;
    public const nint m_flFadeOutStart = 0x710;
    public const nint m_flFadeOutLength = 0x714;
    public const nint m_flStartTime = 0x718;
    public const nint m_nDissolveType = 0x71C;
    public const nint m_vDissolverOrigin = 0x720;
    public const nint m_nMagnitude = 0x72C;
}

public static class CEntityFlame {
    public const nint m_hEntAttached = 0x4B0;
    public const nint m_bCheapEffect = 0x4B4;
    public const nint m_flSize = 0x4B8;
    public const nint m_bUseHitboxes = 0x4BC;
    public const nint m_iNumHitboxFires = 0x4C0;
    public const nint m_flHitboxFireScale = 0x4C4;
    public const nint m_flLifetime = 0x4C8;
    public const nint m_hAttacker = 0x4CC;
    public const nint m_iDangerSound = 0x4D0;
    public const nint m_flDirectDamagePerSecond = 0x4D4;
    public const nint m_iCustomDamageType = 0x4D8;
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

public static class CEnvBeam {
    public const nint m_active = 0x7A0;
    public const nint m_spriteTexture = 0x7A8;
    public const nint m_iszStartEntity = 0x7B0;
    public const nint m_iszEndEntity = 0x7B8;
    public const nint m_life = 0x7C0;
    public const nint m_boltWidth = 0x7C4;
    public const nint m_noiseAmplitude = 0x7C8;
    public const nint m_speed = 0x7CC;
    public const nint m_restrike = 0x7D0;
    public const nint m_iszSpriteName = 0x7D8;
    public const nint m_frameStart = 0x7E0;
    public const nint m_vEndPointWorld = 0x7E4;
    public const nint m_vEndPointRelative = 0x7F0;
    public const nint m_radius = 0x7FC;
    public const nint m_TouchType = 0x800;
    public const nint m_iFilterName = 0x808;
    public const nint m_hFilter = 0x810;
    public const nint m_iszDecal = 0x818;
    public const nint m_OnTouchedByEntity = 0x820;
}

public static class CEnvBeverage {
    public const nint m_CanInDispenser = 0x4B0;
    public const nint m_nBeverageType = 0x4B4;
}

public static class CEnvCombinedLightProbeVolume {
    public const nint m_Color = 0x1580;
    public const nint m_flBrightness = 0x1584;
    public const nint m_hCubemapTexture = 0x1588;
    public const nint m_bCustomCubemapTexture = 0x1590;
    public const nint m_hLightProbeTexture = 0x1598;
    public const nint m_hLightProbeDirectLightIndicesTexture = 0x15A0;
    public const nint m_hLightProbeDirectLightScalarsTexture = 0x15A8;
    public const nint m_hLightProbeDirectLightShadowsTexture = 0x15B0;
    public const nint m_vBoxMins = 0x15B8;
    public const nint m_vBoxMaxs = 0x15C4;
    public const nint m_LightGroups = 0x15D0;
    public const nint m_bMoveable = 0x15D8;
    public const nint m_nHandshake = 0x15DC;
    public const nint m_nEnvCubeMapArrayIndex = 0x15E0;
    public const nint m_nPriority = 0x15E4;
    public const nint m_bStartDisabled = 0x15E8;
    public const nint m_flEdgeFadeDist = 0x15EC;
    public const nint m_vEdgeFadeDists = 0x15F0;
    public const nint m_nLightProbeSizeX = 0x15FC;
    public const nint m_nLightProbeSizeY = 0x1600;
    public const nint m_nLightProbeSizeZ = 0x1604;
    public const nint m_nLightProbeAtlasX = 0x1608;
    public const nint m_nLightProbeAtlasY = 0x160C;
    public const nint m_nLightProbeAtlasZ = 0x1610;
    public const nint m_bEnabled = 0x1629;
}

public static class CEnvCubemap {
    public const nint m_hCubemapTexture = 0x5A0;
    public const nint m_bCustomCubemapTexture = 0x5A8;
    public const nint m_flInfluenceRadius = 0x5AC;
    public const nint m_vBoxProjectMins = 0x5B0;
    public const nint m_vBoxProjectMaxs = 0x5BC;
    public const nint m_LightGroups = 0x5C8;
    public const nint m_bMoveable = 0x5D0;
    public const nint m_nHandshake = 0x5D4;
    public const nint m_nEnvCubeMapArrayIndex = 0x5D8;
    public const nint m_nPriority = 0x5DC;
    public const nint m_flEdgeFadeDist = 0x5E0;
    public const nint m_vEdgeFadeDists = 0x5E4;
    public const nint m_flDiffuseScale = 0x5F0;
    public const nint m_bStartDisabled = 0x5F4;
    public const nint m_bDefaultEnvMap = 0x5F5;
    public const nint m_bDefaultSpecEnvMap = 0x5F6;
    public const nint m_bIndoorCubeMap = 0x5F7;
    public const nint m_bCopyDiffuseFromDefaultCubemap = 0x5F8;
    public const nint m_bEnabled = 0x608;
}

public static class CEnvCubemapFog {
    public const nint m_flEndDistance = 0x4B0;
    public const nint m_flStartDistance = 0x4B4;
    public const nint m_flFogFalloffExponent = 0x4B8;
    public const nint m_bHeightFogEnabled = 0x4BC;
    public const nint m_flFogHeightWidth = 0x4C0;
    public const nint m_flFogHeightEnd = 0x4C4;
    public const nint m_flFogHeightStart = 0x4C8;
    public const nint m_flFogHeightExponent = 0x4CC;
    public const nint m_flLODBias = 0x4D0;
    public const nint m_bActive = 0x4D4;
    public const nint m_bStartDisabled = 0x4D5;
    public const nint m_flFogMaxOpacity = 0x4D8;
    public const nint m_nCubemapSourceType = 0x4DC;
    public const nint m_hSkyMaterial = 0x4E0;
    public const nint m_iszSkyEntity = 0x4E8;
    public const nint m_hFogCubemapTexture = 0x4F0;
    public const nint m_bHasHeightFogEnd = 0x4F8;
    public const nint m_bFirstTime = 0x4F9;
}

public static class CEnvDecal {
    public const nint m_hDecalMaterial = 0x700;
    public const nint m_flWidth = 0x708;
    public const nint m_flHeight = 0x70C;
    public const nint m_flDepth = 0x710;
    public const nint m_nRenderOrder = 0x714;
    public const nint m_bProjectOnWorld = 0x718;
    public const nint m_bProjectOnCharacters = 0x719;
    public const nint m_bProjectOnWater = 0x71A;
    public const nint m_flDepthSortBias = 0x71C;
}

public static class CEnvDetailController {
    public const nint m_flFadeStartDist = 0x4B0;
    public const nint m_flFadeEndDist = 0x4B4;
}

public static class CEnvEntityIgniter {
    public const nint m_flLifetime = 0x4B0;
}

public static class CEnvEntityMaker {
    public const nint m_vecEntityMins = 0x4B0;
    public const nint m_vecEntityMaxs = 0x4BC;
    public const nint m_hCurrentInstance = 0x4C8;
    public const nint m_hCurrentBlocker = 0x4CC;
    public const nint m_vecBlockerOrigin = 0x4D0;
    public const nint m_angPostSpawnDirection = 0x4DC;
    public const nint m_flPostSpawnDirectionVariance = 0x4E8;
    public const nint m_flPostSpawnSpeed = 0x4EC;
    public const nint m_bPostSpawnUseAngles = 0x4F0;
    public const nint m_iszTemplate = 0x4F8;
    public const nint m_pOutputOnSpawned = 0x500;
    public const nint m_pOutputOnFailedSpawn = 0x528;
}

public static class CEnvExplosion {
    public const nint m_iMagnitude = 0x700;
    public const nint m_flPlayerDamage = 0x704;
    public const nint m_iRadiusOverride = 0x708;
    public const nint m_flInnerRadius = 0x70C;
    public const nint m_spriteScale = 0x710;
    public const nint m_flDamageForce = 0x714;
    public const nint m_hInflictor = 0x718;
    public const nint m_iCustomDamageType = 0x71C;
    public const nint m_iszExplosionType = 0x728;
    public const nint m_iszCustomEffectName = 0x730;
    public const nint m_iszCustomSoundName = 0x738;
    public const nint m_iClassIgnore = 0x740;
    public const nint m_iClassIgnore2 = 0x744;
    public const nint m_iszEntityIgnoreName = 0x748;
    public const nint m_hEntityIgnore = 0x750;
}

public static class CEnvFade {
    public const nint m_fadeColor = 0x4B0;
    public const nint m_Duration = 0x4B4;
    public const nint m_HoldDuration = 0x4B8;
    public const nint m_OnBeginFade = 0x4C0;
}

public static class CEnvFireSensor {
    public const nint m_bEnabled = 0x4B0;
    public const nint m_bHeatAtLevel = 0x4B1;
    public const nint m_radius = 0x4B4;
    public const nint m_targetLevel = 0x4B8;
    public const nint m_targetTime = 0x4BC;
    public const nint m_levelTime = 0x4C0;
    public const nint m_OnHeatLevelStart = 0x4C8;
    public const nint m_OnHeatLevelEnd = 0x4F0;
}

public static class CEnvFireSource {
    public const nint m_bEnabled = 0x4B0;
    public const nint m_radius = 0x4B4;
    public const nint m_damage = 0x4B8;
}

public static class CEnvGasCanister {
    public const nint m_bLanded = 0x888;
    public const nint m_flDamageRadius = 0x88C;
    public const nint m_flDamage = 0x890;
    public const nint m_bIncomingSoundStarted = 0x894;
    public const nint m_bHasDetonated = 0x895;
    public const nint m_bLaunched = 0x896;
    public const nint m_OnLaunched = 0x898;
    public const nint m_OnImpacted = 0x8C0;
    public const nint m_OnOpened = 0x8E8;
    public const nint m_vecImpactPosition = 0x910;
    public const nint m_vecStartPosition = 0x91C;
    public const nint m_vecEnterWorldPosition = 0x928;
    public const nint m_vecDirection = 0x934;
    public const nint m_vecStartAngles = 0x940;
    public const nint m_flFlightTime = 0x94C;
    public const nint m_flFlightSpeed = 0x950;
    public const nint m_flLaunchTime = 0x954;
    public const nint m_flInitialZSpeed = 0x958;
    public const nint m_flZAcceleration = 0x95C;
    public const nint m_flHorizSpeed = 0x960;
    public const nint m_bLaunchedFromWithinWorld = 0x964;
    public const nint m_vecParabolaDirection = 0x968;
    public const nint m_flWorldEnterTime = 0x974;
    public const nint m_vecSkyboxOrigin = 0x978;
    public const nint m_flSkyboxScale = 0x984;
    public const nint m_bInSkybox = 0x988;
    public const nint m_bDoImpactEffects = 0x989;
    public const nint m_nMyZoneIndex = 0x98C;
    public const nint m_hSkyboxCopy = 0x990;
    public const nint m_flLaunchHeight = 0x994;
}

public static class CEnvGlobal {
    public const nint m_outCounter = 0x4B0;
    public const nint m_globalstate = 0x4D8;
    public const nint m_triggermode = 0x4E0;
    public const nint m_initialstate = 0x4E4;
    public const nint m_counter = 0x4E8;
}

public static class CEnvHudHint {
    public const nint m_iszMessage = 0x4B0;
}

public static class CEnvInstructorHint {
    public const nint m_iszName = 0x4B0;
    public const nint m_iszReplace_Key = 0x4B8;
    public const nint m_iszHintTargetEntity = 0x4C0;
    public const nint m_iTimeout = 0x4C8;
    public const nint m_iDisplayLimit = 0x4CC;
    public const nint m_iszIcon_Onscreen = 0x4D0;
    public const nint m_iszIcon_Offscreen = 0x4D8;
    public const nint m_iszCaption = 0x4E0;
    public const nint m_iszActivatorCaption = 0x4E8;
    public const nint m_Color = 0x4F0;
    public const nint m_fIconOffset = 0x4F4;
    public const nint m_fRange = 0x4F8;
    public const nint m_iPulseOption = 0x4FC;
    public const nint m_iAlphaOption = 0x4FD;
    public const nint m_iShakeOption = 0x4FE;
    public const nint m_bStatic = 0x4FF;
    public const nint m_bNoOffscreen = 0x500;
    public const nint m_bForceCaption = 0x501;
    public const nint m_iInstanceType = 0x504;
    public const nint m_bSuppressRest = 0x508;
    public const nint m_iszBinding = 0x510;
    public const nint m_bAllowNoDrawTarget = 0x518;
    public const nint m_bAutoStart = 0x519;
    public const nint m_bLocalPlayerOnly = 0x51A;
}

public static class CEnvInstructorVRHint {
    public const nint m_iszName = 0x4B0;
    public const nint m_iszHintTargetEntity = 0x4B8;
    public const nint m_iTimeout = 0x4C0;
    public const nint m_iszCaption = 0x4C8;
    public const nint m_iszStartSound = 0x4D0;
    public const nint m_iLayoutFileType = 0x4D8;
    public const nint m_iszCustomLayoutFile = 0x4E0;
    public const nint m_iAttachType = 0x4E8;
    public const nint m_flHeightOffset = 0x4EC;
}

public static class CEnvLaser {
    public const nint m_iszLaserTarget = 0x7A0;
    public const nint m_pSprite = 0x7A8;
    public const nint m_iszSpriteName = 0x7B0;
    public const nint m_firePosition = 0x7B8;
    public const nint m_flStartFrame = 0x7C4;
}

public static class CEnvLightProbeVolume {
    public const nint m_hLightProbeTexture = 0x1490;
    public const nint m_hLightProbeDirectLightIndicesTexture = 0x1498;
    public const nint m_hLightProbeDirectLightScalarsTexture = 0x14A0;
    public const nint m_hLightProbeDirectLightShadowsTexture = 0x14A8;
    public const nint m_vBoxMins = 0x14B0;
    public const nint m_vBoxMaxs = 0x14BC;
    public const nint m_LightGroups = 0x14C8;
    public const nint m_bMoveable = 0x14D0;
    public const nint m_nHandshake = 0x14D4;
    public const nint m_nPriority = 0x14D8;
    public const nint m_bStartDisabled = 0x14DC;
    public const nint m_nLightProbeSizeX = 0x14E0;
    public const nint m_nLightProbeSizeY = 0x14E4;
    public const nint m_nLightProbeSizeZ = 0x14E8;
    public const nint m_nLightProbeAtlasX = 0x14EC;
    public const nint m_nLightProbeAtlasY = 0x14F0;
    public const nint m_nLightProbeAtlasZ = 0x14F4;
    public const nint m_bEnabled = 0x1501;
}

public static class CEnvMicrophone {
    public const nint m_bDisabled = 0x4B0;
    public const nint m_hMeasureTarget = 0x4B4;
    public const nint m_nSoundMask = 0x4B8;
    public const nint m_flSensitivity = 0x4BC;
    public const nint m_flSmoothFactor = 0x4C0;
    public const nint m_flMaxRange = 0x4C4;
    public const nint m_iszSpeakerName = 0x4C8;
    public const nint m_hSpeaker = 0x4D0;
    public const nint m_bAvoidFeedback = 0x4D4;
    public const nint m_iSpeakerDSPPreset = 0x4D8;
    public const nint m_iszListenFilter = 0x4E0;
    public const nint m_hListenFilter = 0x4E8;
    public const nint m_SoundLevel = 0x4F0;
    public const nint m_OnRoutedSound = 0x518;
    public const nint m_OnHeardSound = 0x540;
    public const nint m_szLastSound = 0x568;
    public const nint m_iLastRoutedFrame = 0x668;
}

public static class CEnvMuzzleFlash {
    public const nint m_flScale = 0x4B0;
    public const nint m_iszParentAttachment = 0x4B8;
}

public static class CEnvParticleGlow {
    public const nint m_flAlphaScale = 0xC78;
    public const nint m_flRadiusScale = 0xC7C;
    public const nint m_flSelfIllumScale = 0xC80;
    public const nint m_ColorTint = 0xC84;
    public const nint m_hTextureOverride = 0xC88;
}

public static class CEnvProjectedTexture {
    public const nint m_hTargetEntity = 0x700;
    public const nint m_bState = 0x704;
    public const nint m_bAlwaysUpdate = 0x705;
    public const nint m_flLightFOV = 0x708;
    public const nint m_bEnableShadows = 0x70C;
    public const nint m_bSimpleProjection = 0x70D;
    public const nint m_bLightOnlyTarget = 0x70E;
    public const nint m_bLightWorld = 0x70F;
    public const nint m_bCameraSpace = 0x710;
    public const nint m_flBrightnessScale = 0x714;
    public const nint m_LightColor = 0x718;
    public const nint m_flIntensity = 0x71C;
    public const nint m_flLinearAttenuation = 0x720;
    public const nint m_flQuadraticAttenuation = 0x724;
    public const nint m_bVolumetric = 0x728;
    public const nint m_flNoiseStrength = 0x72C;
    public const nint m_flFlashlightTime = 0x730;
    public const nint m_nNumPlanes = 0x734;
    public const nint m_flPlaneOffset = 0x738;
    public const nint m_flVolumetricIntensity = 0x73C;
    public const nint m_flColorTransitionTime = 0x740;
    public const nint m_flAmbient = 0x744;
    public const nint m_SpotlightTextureName = 0x748;
    public const nint m_nSpotlightTextureFrame = 0x948;
    public const nint m_nShadowQuality = 0x94C;
    public const nint m_flNearZ = 0x950;
    public const nint m_flFarZ = 0x954;
    public const nint m_flProjectionSize = 0x958;
    public const nint m_flRotation = 0x95C;
    public const nint m_bFlipHorizontal = 0x960;
}

public static class CEnvScreenOverlay {
    public const nint m_iszOverlayNames = 0x4B0;
    public const nint m_flOverlayTimes = 0x500;
    public const nint m_flStartTime = 0x528;
    public const nint m_iDesiredOverlay = 0x52C;
    public const nint m_bIsActive = 0x530;
}

public static class CEnvShake {
    public const nint m_limitToEntity = 0x4B0;
    public const nint m_Amplitude = 0x4B8;
    public const nint m_Frequency = 0x4BC;
    public const nint m_Duration = 0x4C0;
    public const nint m_Radius = 0x4C4;
    public const nint m_stopTime = 0x4C8;
    public const nint m_nextShake = 0x4CC;
    public const nint m_currentAmp = 0x4D0;
    public const nint m_maxForce = 0x4D4;
    public const nint m_shakeCallback = 0x4E8;
}

public static class CEnvSky {
    public const nint m_hSkyMaterial = 0x700;
    public const nint m_hSkyMaterialLightingOnly = 0x708;
    public const nint m_bStartDisabled = 0x710;
    public const nint m_vTintColor = 0x711;
    public const nint m_vTintColorLightingOnly = 0x715;
    public const nint m_flBrightnessScale = 0x71C;
    public const nint m_nFogType = 0x720;
    public const nint m_flFogMinStart = 0x724;
    public const nint m_flFogMinEnd = 0x728;
    public const nint m_flFogMaxStart = 0x72C;
    public const nint m_flFogMaxEnd = 0x730;
    public const nint m_bEnabled = 0x734;
}

public static class CEnvSoundscape {
    public const nint m_OnPlay = 0x4B0;
    public const nint m_flRadius = 0x4D8;
    public const nint m_soundscapeName = 0x4E0;
    public const nint m_soundEventName = 0x4E8;
    public const nint m_bOverrideWithEvent = 0x4F0;
    public const nint m_soundscapeIndex = 0x4F4;
    public const nint m_soundscapeEntityListId = 0x4F8;
    public const nint m_soundEventHash = 0x4FC;
    public const nint m_positionNames = 0x500;
    public const nint m_hProxySoundscape = 0x540;
    public const nint m_bDisabled = 0x544;
}

public static class CEnvSoundscapeProxy {
    public const nint m_MainSoundscapeName = 0x548;
}

public static class CEnvSpark {
    public const nint m_flDelay = 0x4B0;
    public const nint m_nMagnitude = 0x4B4;
    public const nint m_nTrailLength = 0x4B8;
    public const nint m_nType = 0x4BC;
    public const nint m_OnSpark = 0x4C0;
}

public static class CEnvSplash {
    public const nint m_flScale = 0x4B0;
}

public static class CEnvTilt {
    public const nint m_Duration = 0x4B0;
    public const nint m_Radius = 0x4B4;
    public const nint m_TiltTime = 0x4B8;
    public const nint m_stopTime = 0x4BC;
}

public static class CEnvTracer {
    public const nint m_vecEnd = 0x4B0;
    public const nint m_flDelay = 0x4BC;
}

public static class CEnvViewPunch {
    public const nint m_flRadius = 0x4B0;
    public const nint m_angViewPunch = 0x4B4;
}

public static class CEnvVolumetricFogController {
    public const nint m_flScattering = 0x4B0;
    public const nint m_flAnisotropy = 0x4B4;
    public const nint m_flFadeSpeed = 0x4B8;
    public const nint m_flDrawDistance = 0x4BC;
    public const nint m_flFadeInStart = 0x4C0;
    public const nint m_flFadeInEnd = 0x4C4;
    public const nint m_flIndirectStrength = 0x4C8;
    public const nint m_nIndirectTextureDimX = 0x4CC;
    public const nint m_nIndirectTextureDimY = 0x4D0;
    public const nint m_nIndirectTextureDimZ = 0x4D4;
    public const nint m_vBoxMins = 0x4D8;
    public const nint m_vBoxMaxs = 0x4E4;
    public const nint m_bActive = 0x4F0;
    public const nint m_flStartAnisoTime = 0x4F4;
    public const nint m_flStartScatterTime = 0x4F8;
    public const nint m_flStartDrawDistanceTime = 0x4FC;
    public const nint m_flStartAnisotropy = 0x500;
    public const nint m_flStartScattering = 0x504;
    public const nint m_flStartDrawDistance = 0x508;
    public const nint m_flDefaultAnisotropy = 0x50C;
    public const nint m_flDefaultScattering = 0x510;
    public const nint m_flDefaultDrawDistance = 0x514;
    public const nint m_bStartDisabled = 0x518;
    public const nint m_bEnableIndirect = 0x519;
    public const nint m_bIsMaster = 0x51A;
    public const nint m_hFogIndirectTexture = 0x520;
    public const nint m_nForceRefreshCount = 0x528;
    public const nint m_bFirstTime = 0x52C;
}

public static class CEnvVolumetricFogVolume {
    public const nint m_bActive = 0x4B0;
    public const nint m_vBoxMins = 0x4B4;
    public const nint m_vBoxMaxs = 0x4C0;
    public const nint m_bStartDisabled = 0x4CC;
    public const nint m_flStrength = 0x4D0;
    public const nint m_nFalloffShape = 0x4D4;
    public const nint m_flFalloffExponent = 0x4D8;
}

public static class CEnvWind {
    public const nint m_EnvWindShared = 0x4B0;
}

public static class CEnvWindShared {
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
    public const nint m_OnGustStart = 0x70;
    public const nint m_OnGustEnd = 0x98;
    public const nint m_flVariationTime = 0xC0;
    public const nint m_flSwayTime = 0xC4;
    public const nint m_flSimTime = 0xC8;
    public const nint m_flSwitchTime = 0xCC;
    public const nint m_flAveWindSpeed = 0xD0;
    public const nint m_bGusting = 0xD4;
    public const nint m_flWindAngleVariation = 0xD8;
    public const nint m_flWindSpeedVariation = 0xDC;
    public const nint m_iEntIndex = 0xE0;
}

public static class CEnvWindShared_WindAveEvent_t {
    public const nint m_flStartWindSpeed = 0x0;
    public const nint m_flAveWindSpeed = 0x4;
}

public static class CEnvWindShared_WindVariationEvent_t {
    public const nint m_flWindAngleVariation = 0x0;
    public const nint m_flWindSpeedVariation = 0x4;
}

public static class CFilterAttributeInt {
    public const nint m_sAttributeName = 0x508;
}

public static class CFilterClass {
    public const nint m_iFilterClass = 0x508;
}

public static class CFilterContext {
    public const nint m_iFilterContext = 0x508;
}

public static class CFilterEnemy {
    public const nint m_iszEnemyName = 0x508;
    public const nint m_flRadius = 0x510;
    public const nint m_flOuterRadius = 0x514;
    public const nint m_nMaxSquadmatesPerEnemy = 0x518;
    public const nint m_iszPlayerName = 0x520;
}

public static class CFilterMassGreater {
    public const nint m_fFilterMass = 0x508;
}

public static class CFilterModel {
    public const nint m_iFilterModel = 0x508;
}

public static class CFilterMultiple {
    public const nint m_nFilterType = 0x508;
    public const nint m_iFilterName = 0x510;
    public const nint m_hFilter = 0x560;
    public const nint m_nFilterCount = 0x588;
}

public static class CFilterName {
    public const nint m_iFilterName = 0x508;
}

public static class CFilterProximity {
    public const nint m_flRadius = 0x508;
}

public static class CFire {
    public const nint m_hEffect = 0x700;
    public const nint m_hOwner = 0x704;
    public const nint m_nFireType = 0x708;
    public const nint m_flFuel = 0x70C;
    public const nint m_flDamageTime = 0x710;
    public const nint m_lastDamage = 0x714;
    public const nint m_flFireSize = 0x718;
    public const nint m_flLastNavUpdateTime = 0x71C;
    public const nint m_flHeatLevel = 0x720;
    public const nint m_flHeatAbsorb = 0x724;
    public const nint m_flDamageScale = 0x728;
    public const nint m_flMaxHeat = 0x72C;
    public const nint m_flLastHeatLevel = 0x730;
    public const nint m_flAttackTime = 0x734;
    public const nint m_bEnabled = 0x738;
    public const nint m_bStartDisabled = 0x739;
    public const nint m_bDidActivate = 0x73A;
    public const nint m_OnIgnited = 0x740;
    public const nint m_OnExtinguished = 0x768;
}

public static class CFireSmoke {
    public const nint m_nFlameModelIndex = 0x4C0;
    public const nint m_nFlameFromAboveModelIndex = 0x4C4;
}

public static class CFiringModeFloat {
    public const nint m_flValues = 0x0;
}

public static class CFiringModeInt {
    public const nint m_nValues = 0x0;
}

public static class CFish {
    public const nint m_pool = 0x888;
    public const nint m_id = 0x88C;
    public const nint m_x = 0x890;
    public const nint m_y = 0x894;
    public const nint m_z = 0x898;
    public const nint m_angle = 0x89C;
    public const nint m_angleChange = 0x8A0;
    public const nint m_forward = 0x8A4;
    public const nint m_perp = 0x8B0;
    public const nint m_poolOrigin = 0x8BC;
    public const nint m_waterLevel = 0x8C8;
    public const nint m_speed = 0x8CC;
    public const nint m_desiredSpeed = 0x8D0;
    public const nint m_calmSpeed = 0x8D4;
    public const nint m_panicSpeed = 0x8D8;
    public const nint m_avoidRange = 0x8DC;
    public const nint m_turnTimer = 0x8E0;
    public const nint m_turnClockwise = 0x8F8;
    public const nint m_goTimer = 0x900;
    public const nint m_moveTimer = 0x918;
    public const nint m_panicTimer = 0x930;
    public const nint m_disperseTimer = 0x948;
    public const nint m_proximityTimer = 0x960;
    public const nint m_visible = 0x978;
}

public static class CFishPool {
    public const nint m_fishCount = 0x4C0;
    public const nint m_maxRange = 0x4C4;
    public const nint m_swimDepth = 0x4C8;
    public const nint m_waterLevel = 0x4CC;
    public const nint m_isDormant = 0x4D0;
    public const nint m_fishes = 0x4D8;
    public const nint m_visTimer = 0x4F0;
}

public static class CFists {
    public const nint m_bPlayingUninterruptableAct = 0xDD0;
    public const nint m_nUninterruptableActivity = 0xDD4;
    public const nint m_bRestorePrevWep = 0xDD8;
    public const nint m_hWeaponBeforePrevious = 0xDDC;
    public const nint m_hWeaponPrevious = 0xDE0;
    public const nint m_bDelayedHardPunchIncoming = 0xDE4;
    public const nint m_bDestroyAfterTaunt = 0xDE5;
}

public static class CFlashbangProjectile {
    public const nint m_flTimeToDetonate = 0xA20;
    public const nint m_numOpponentsHit = 0xA24;
    public const nint m_numTeammatesHit = 0xA25;
}

public static class CFogController {
    public const nint m_fog = 0x4B0;
    public const nint m_bUseAngles = 0x518;
    public const nint m_iChangedVariables = 0x51C;
}

public static class CFogTrigger {
    public const nint m_fog = 0x8A8;
}

public static class CFogVolume {
    public const nint m_fogName = 0x700;
    public const nint m_postProcessName = 0x708;
    public const nint m_colorCorrectionName = 0x710;
    public const nint m_bDisabled = 0x720;
    public const nint m_bInFogVolumesList = 0x721;
}

public static class CFootstepControl {
    public const nint m_source = 0x8A8;
    public const nint m_destination = 0x8B0;
}

public static class CFuncBrush {
    public const nint m_iSolidity = 0x700;
    public const nint m_iDisabled = 0x704;
    public const nint m_bSolidBsp = 0x708;
    public const nint m_iszExcludedClass = 0x710;
    public const nint m_bInvertExclusion = 0x718;
    public const nint m_bScriptedMovement = 0x719;
}

public static class CFuncConveyor {
    public const nint m_szConveyorModels = 0x700;
    public const nint m_flTransitionDurationSeconds = 0x708;
    public const nint m_angMoveEntitySpace = 0x70C;
    public const nint m_vecMoveDirEntitySpace = 0x718;
    public const nint m_flTargetSpeed = 0x724;
    public const nint m_nTransitionStartTick = 0x728;
    public const nint m_nTransitionDurationTicks = 0x72C;
    public const nint m_flTransitionStartSpeed = 0x730;
    public const nint m_hConveyorModels = 0x738;
}

public static class CFuncElectrifiedVolume {
    public const nint m_EffectName = 0x720;
    public const nint m_EffectInterpenetrateName = 0x728;
    public const nint m_EffectZapName = 0x730;
    public const nint m_iszEffectSource = 0x738;
}

public static class CFuncInteractionLayerClip {
    public const nint m_bDisabled = 0x700;
    public const nint m_iszInteractsAs = 0x708;
    public const nint m_iszInteractsWith = 0x710;
}

public static class CFuncLadder {
    public const nint m_vecLadderDir = 0x700;
    public const nint m_Dismounts = 0x710;
    public const nint m_vecLocalTop = 0x728;
    public const nint m_vecPlayerMountPositionTop = 0x734;
    public const nint m_vecPlayerMountPositionBottom = 0x740;
    public const nint m_flAutoRideSpeed = 0x74C;
    public const nint m_bDisabled = 0x750;
    public const nint m_bFakeLadder = 0x751;
    public const nint m_bHasSlack = 0x752;
    public const nint m_surfacePropName = 0x758;
    public const nint m_OnPlayerGotOnLadder = 0x760;
    public const nint m_OnPlayerGotOffLadder = 0x788;
}

public static class CFuncMonitor {
    public const nint m_targetCamera = 0x720;
    public const nint m_nResolutionEnum = 0x728;
    public const nint m_bRenderShadows = 0x72C;
    public const nint m_bUseUniqueColorTarget = 0x72D;
    public const nint m_brushModelName = 0x730;
    public const nint m_hTargetCamera = 0x738;
    public const nint m_bEnabled = 0x73C;
    public const nint m_bDraw3DSkybox = 0x73D;
    public const nint m_bStartEnabled = 0x73E;
}

public static class CFuncMoveLinear {
    public const nint m_authoredPosition = 0x780;
    public const nint m_angMoveEntitySpace = 0x784;
    public const nint m_vecMoveDirParentSpace = 0x790;
    public const nint m_soundStart = 0x7A0;
    public const nint m_soundStop = 0x7A8;
    public const nint m_currentSound = 0x7B0;
    public const nint m_flBlockDamage = 0x7B8;
    public const nint m_flStartPosition = 0x7BC;
    public const nint m_flMoveDistance = 0x7C0;
    public const nint m_OnFullyOpen = 0x7D0;
    public const nint m_OnFullyClosed = 0x7F8;
    public const nint m_bCreateMovableNavMesh = 0x820;
    public const nint m_bCreateNavObstacle = 0x821;
}

public static class CFuncNavBlocker {
    public const nint m_bDisabled = 0x700;
    public const nint m_nBlockedTeamNumber = 0x704;
}

public static class CFuncNavObstruction {
    public const nint m_bDisabled = 0x708;
}

public static class CFuncPlat {
    public const nint m_sNoise = 0x7A8;
}

public static class CFuncPlatRot {
    public const nint m_end = 0x7B0;
    public const nint m_start = 0x7BC;
}

public static class CFuncRotating {
    public const nint m_vecMoveAng = 0x700;
    public const nint m_flFanFriction = 0x70C;
    public const nint m_flAttenuation = 0x710;
    public const nint m_flVolume = 0x714;
    public const nint m_flTargetSpeed = 0x718;
    public const nint m_flMaxSpeed = 0x71C;
    public const nint m_flBlockDamage = 0x720;
    public const nint m_flTimeScale = 0x724;
    public const nint m_NoiseRunning = 0x728;
    public const nint m_bReversed = 0x730;
    public const nint m_angStart = 0x73C;
    public const nint m_bStopAtStartPos = 0x748;
    public const nint m_vecClientOrigin = 0x74C;
    public const nint m_vecClientAngles = 0x758;
}

public static class CFuncShatterglass {
    public const nint m_hGlassMaterialDamaged = 0x700;
    public const nint m_hGlassMaterialUndamaged = 0x708;
    public const nint m_hConcreteMaterialEdgeFace = 0x710;
    public const nint m_hConcreteMaterialEdgeCaps = 0x718;
    public const nint m_hConcreteMaterialEdgeFins = 0x720;
    public const nint m_matPanelTransform = 0x728;
    public const nint m_matPanelTransformWsTemp = 0x758;
    public const nint m_vecShatterGlassShards = 0x788;
    public const nint m_PanelSize = 0x7A0;
    public const nint m_vecPanelNormalWs = 0x7A8;
    public const nint m_nNumShardsEverCreated = 0x7B4;
    public const nint m_flLastShatterSoundEmitTime = 0x7B8;
    public const nint m_flLastCleanupTime = 0x7BC;
    public const nint m_flInitAtTime = 0x7C0;
    public const nint m_flGlassThickness = 0x7C4;
    public const nint m_flSpawnInvulnerability = 0x7C8;
    public const nint m_bBreakSilent = 0x7CC;
    public const nint m_bBreakShardless = 0x7CD;
    public const nint m_bBroken = 0x7CE;
    public const nint m_bHasRateLimitedShards = 0x7CF;
    public const nint m_bGlassNavIgnore = 0x7D0;
    public const nint m_bGlassInFrame = 0x7D1;
    public const nint m_bStartBroken = 0x7D2;
    public const nint m_iInitialDamageType = 0x7D3;
    public const nint m_szDamagePositioningEntityName01 = 0x7D8;
    public const nint m_szDamagePositioningEntityName02 = 0x7E0;
    public const nint m_szDamagePositioningEntityName03 = 0x7E8;
    public const nint m_szDamagePositioningEntityName04 = 0x7F0;
    public const nint m_vInitialDamagePositions = 0x7F8;
    public const nint m_vExtraDamagePositions = 0x810;
    public const nint m_OnBroken = 0x828;
    public const nint m_iSurfaceType = 0x851;
}

public static class CFuncTankTrain {
    public const nint m_OnDeath = 0x850;
}

public static class CFuncTimescale {
    public const nint m_flDesiredTimescale = 0x4B0;
    public const nint m_flAcceleration = 0x4B4;
    public const nint m_flMinBlendRate = 0x4B8;
    public const nint m_flBlendDeltaMultiplier = 0x4BC;
    public const nint m_isStarted = 0x4C0;
}

public static class CFuncTrackChange {
    public const nint m_trackTop = 0x7C8;
    public const nint m_trackBottom = 0x7D0;
    public const nint m_train = 0x7D8;
    public const nint m_trackTopName = 0x7E0;
    public const nint m_trackBottomName = 0x7E8;
    public const nint m_trainName = 0x7F0;
    public const nint m_code = 0x7F8;
    public const nint m_targetState = 0x7FC;
    public const nint m_use = 0x800;
}

public static class CFuncTrackTrain {
    public const nint m_ppath = 0x700;
    public const nint m_length = 0x704;
    public const nint m_vPosPrev = 0x708;
    public const nint m_angPrev = 0x714;
    public const nint m_controlMins = 0x720;
    public const nint m_controlMaxs = 0x72C;
    public const nint m_lastBlockPos = 0x738;
    public const nint m_lastBlockTick = 0x744;
    public const nint m_flVolume = 0x748;
    public const nint m_flBank = 0x74C;
    public const nint m_oldSpeed = 0x750;
    public const nint m_flBlockDamage = 0x754;
    public const nint m_height = 0x758;
    public const nint m_maxSpeed = 0x75C;
    public const nint m_dir = 0x760;
    public const nint m_iszSoundMove = 0x768;
    public const nint m_iszSoundMovePing = 0x770;
    public const nint m_iszSoundStart = 0x778;
    public const nint m_iszSoundStop = 0x780;
    public const nint m_strPathTarget = 0x788;
    public const nint m_flMoveSoundMinDuration = 0x790;
    public const nint m_flMoveSoundMaxDuration = 0x794;
    public const nint m_flNextMoveSoundTime = 0x798;
    public const nint m_flMoveSoundMinPitch = 0x79C;
    public const nint m_flMoveSoundMaxPitch = 0x7A0;
    public const nint m_eOrientationType = 0x7A4;
    public const nint m_eVelocityType = 0x7A8;
    public const nint m_OnStart = 0x7B8;
    public const nint m_OnNext = 0x7E0;
    public const nint m_OnArrivedAtDestinationNode = 0x808;
    public const nint m_bManualSpeedChanges = 0x830;
    public const nint m_flDesiredSpeed = 0x834;
    public const nint m_flSpeedChangeTime = 0x838;
    public const nint m_flAccelSpeed = 0x83C;
    public const nint m_flDecelSpeed = 0x840;
    public const nint m_bAccelToSpeed = 0x844;
    public const nint m_flTimeScale = 0x848;
    public const nint m_flNextMPSoundTime = 0x84C;
}

public static class CFuncTrain {
    public const nint m_hCurrentTarget = 0x7A8;
    public const nint m_activated = 0x7AC;
    public const nint m_hEnemy = 0x7B0;
    public const nint m_flBlockDamage = 0x7B4;
    public const nint m_flNextBlockTime = 0x7B8;
    public const nint m_iszLastTarget = 0x7C0;
}

public static class CFuncVPhysicsClip {
    public const nint m_bDisabled = 0x700;
}

public static class CFuncWall {
    public const nint m_nState = 0x700;
}

public static class CFuncWater {
    public const nint m_BuoyancyHelper = 0x700;
}

public static class CGameChoreoServices {
    public const nint m_hOwner = 0x8;
    public const nint m_hScriptedSequence = 0xC;
    public const nint m_scriptState = 0x10;
    public const nint m_choreoState = 0x14;
    public const nint m_flTimeStartedState = 0x18;
}

public static class CGameGibManager {
    public const nint m_bAllowNewGibs = 0x4D0;
    public const nint m_iCurrentMaxPieces = 0x4D4;
    public const nint m_iMaxPieces = 0x4D8;
    public const nint m_iLastFrame = 0x4DC;
}

public static class CGamePlayerEquip {
    public const nint m_weaponNames = 0x710;
    public const nint m_weaponCount = 0x810;
}

public static class CGamePlayerZone {
    public const nint m_OnPlayerInZone = 0x708;
    public const nint m_OnPlayerOutZone = 0x730;
    public const nint m_PlayersInCount = 0x758;
    public const nint m_PlayersOutCount = 0x780;
}

public static class CGameRules {
    public const nint m_szQuestName = 0x8;
    public const nint m_nQuestPhase = 0x88;
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

public static class CGameScriptedMoveData {
    public const nint m_vDest = 0x0;
    public const nint m_vSrc = 0xC;
    public const nint m_angSrc = 0x18;
    public const nint m_angDst = 0x24;
    public const nint m_angCurrent = 0x30;
    public const nint m_flAngRate = 0x3C;
    public const nint m_flDuration = 0x40;
    public const nint m_flStartTime = 0x44;
    public const nint m_nPrevMoveType = 0x48;
    public const nint m_bActive = 0x49;
    public const nint m_bTeleportOnEnd = 0x4A;
    public const nint m_bEndOnDestinationReached = 0x4B;
    public const nint m_bIgnoreRotation = 0x4C;
    public const nint m_nType = 0x50;
    public const nint m_bSuccess = 0x54;
    public const nint m_nForcedCrouchState = 0x58;
    public const nint m_bIgnoreCollisions = 0x5C;
}

public static class CGameText {
    public const nint m_iszMessage = 0x710;
    public const nint m_textParms = 0x718;
}

public static class CGenericConstraint {
    public const nint m_nLinearMotionX = 0x510;
    public const nint m_nLinearMotionY = 0x514;
    public const nint m_nLinearMotionZ = 0x518;
    public const nint m_flLinearFrequencyX = 0x51C;
    public const nint m_flLinearFrequencyY = 0x520;
    public const nint m_flLinearFrequencyZ = 0x524;
    public const nint m_flLinearDampingRatioX = 0x528;
    public const nint m_flLinearDampingRatioY = 0x52C;
    public const nint m_flLinearDampingRatioZ = 0x530;
    public const nint m_flMaxLinearImpulseX = 0x534;
    public const nint m_flMaxLinearImpulseY = 0x538;
    public const nint m_flMaxLinearImpulseZ = 0x53C;
    public const nint m_flBreakAfterTimeX = 0x540;
    public const nint m_flBreakAfterTimeY = 0x544;
    public const nint m_flBreakAfterTimeZ = 0x548;
    public const nint m_flBreakAfterTimeStartTimeX = 0x54C;
    public const nint m_flBreakAfterTimeStartTimeY = 0x550;
    public const nint m_flBreakAfterTimeStartTimeZ = 0x554;
    public const nint m_flBreakAfterTimeThresholdX = 0x558;
    public const nint m_flBreakAfterTimeThresholdY = 0x55C;
    public const nint m_flBreakAfterTimeThresholdZ = 0x560;
    public const nint m_flNotifyForceX = 0x564;
    public const nint m_flNotifyForceY = 0x568;
    public const nint m_flNotifyForceZ = 0x56C;
    public const nint m_flNotifyForceMinTimeX = 0x570;
    public const nint m_flNotifyForceMinTimeY = 0x574;
    public const nint m_flNotifyForceMinTimeZ = 0x578;
    public const nint m_flNotifyForceLastTimeX = 0x57C;
    public const nint m_flNotifyForceLastTimeY = 0x580;
    public const nint m_flNotifyForceLastTimeZ = 0x584;
    public const nint m_bAxisNotifiedX = 0x588;
    public const nint m_bAxisNotifiedY = 0x589;
    public const nint m_bAxisNotifiedZ = 0x58A;
    public const nint m_nAngularMotionX = 0x58C;
    public const nint m_nAngularMotionY = 0x590;
    public const nint m_nAngularMotionZ = 0x594;
    public const nint m_flAngularFrequencyX = 0x598;
    public const nint m_flAngularFrequencyY = 0x59C;
    public const nint m_flAngularFrequencyZ = 0x5A0;
    public const nint m_flAngularDampingRatioX = 0x5A4;
    public const nint m_flAngularDampingRatioY = 0x5A8;
    public const nint m_flAngularDampingRatioZ = 0x5AC;
    public const nint m_flMaxAngularImpulseX = 0x5B0;
    public const nint m_flMaxAngularImpulseY = 0x5B4;
    public const nint m_flMaxAngularImpulseZ = 0x5B8;
    public const nint m_NotifyForceReachedX = 0x5C0;
    public const nint m_NotifyForceReachedY = 0x5E8;
    public const nint m_NotifyForceReachedZ = 0x610;
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

public static class CGradientFog {
    public const nint m_hGradientFogTexture = 0x4B0;
    public const nint m_flFogStartDistance = 0x4B8;
    public const nint m_flFogEndDistance = 0x4BC;
    public const nint m_bHeightFogEnabled = 0x4C0;
    public const nint m_flFogStartHeight = 0x4C4;
    public const nint m_flFogEndHeight = 0x4C8;
    public const nint m_flFarZ = 0x4CC;
    public const nint m_flFogMaxOpacity = 0x4D0;
    public const nint m_flFogFalloffExponent = 0x4D4;
    public const nint m_flFogVerticalExponent = 0x4D8;
    public const nint m_fogColor = 0x4DC;
    public const nint m_flFogStrength = 0x4E0;
    public const nint m_flFadeTime = 0x4E4;
    public const nint m_bStartDisabled = 0x4E8;
    public const nint m_bIsEnabled = 0x4E9;
    public const nint m_bGradientFogNeedsTextures = 0x4EA;
}

public static class CGrassBurn {
    public const nint m_flGrassBurnClearTime = 0x4B0;
}

public static class CGunTarget {
    public const nint m_on = 0x780;
    public const nint m_hTargetEnt = 0x784;
    public const nint m_OnDeath = 0x788;
}

public static class CHandleTest {
    public const nint m_Handle = 0x4B0;
    public const nint m_bSendHandle = 0x4B4;
}

public static class CHintMessage {
    public const nint m_hintString = 0x8;
    public const nint m_args = 0x10;
    public const nint m_duration = 0x28;
}

public static class CHintMessageQueue {
    public const nint m_tmMessageEnd = 0x8;
    public const nint m_messages = 0x10;
    public const nint m_pPlayerController = 0x28;
}

public static class CHitboxComponent {
    public const nint m_bvDisabledHitGroups = 0x24;
}

public static class CHostage {
    public const nint m_OnHostageBeginGrab = 0x9E0;
    public const nint m_OnFirstPickedUp = 0xA08;
    public const nint m_OnDroppedNotRescued = 0xA30;
    public const nint m_OnRescued = 0xA58;
    public const nint m_entitySpottedState = 0xA80;
    public const nint m_nSpotRules = 0xA98;
    public const nint m_uiHostageSpawnExclusionGroupMask = 0xA9C;
    public const nint m_nHostageSpawnRandomFactor = 0xAA0;
    public const nint m_bRemove = 0xAA4;
    public const nint m_vel = 0xAA8;
    public const nint m_isRescued = 0xAB4;
    public const nint m_jumpedThisFrame = 0xAB5;
    public const nint m_nHostageState = 0xAB8;
    public const nint m_leader = 0xABC;
    public const nint m_lastLeader = 0xAC0;
    public const nint m_reuseTimer = 0xAC8;
    public const nint m_hasBeenUsed = 0xAE0;
    public const nint m_accel = 0xAE4;
    public const nint m_isRunning = 0xAF0;
    public const nint m_isCrouching = 0xAF1;
    public const nint m_jumpTimer = 0xAF8;
    public const nint m_isWaitingForLeader = 0xB10;
    public const nint m_repathTimer = 0x2B20;
    public const nint m_inhibitDoorTimer = 0x2B38;
    public const nint m_inhibitObstacleAvoidanceTimer = 0x2BC8;
    public const nint m_wiggleTimer = 0x2BE8;
    public const nint m_isAdjusted = 0x2C04;
    public const nint m_bHandsHaveBeenCut = 0x2C05;
    public const nint m_hHostageGrabber = 0x2C08;
    public const nint m_fLastGrabTime = 0x2C0C;
    public const nint m_vecPositionWhenStartedDroppingToGround = 0x2C10;
    public const nint m_vecGrabbedPos = 0x2C1C;
    public const nint m_flRescueStartTime = 0x2C28;
    public const nint m_flGrabSuccessTime = 0x2C2C;
    public const nint m_flDropStartTime = 0x2C30;
    public const nint m_nApproachRewardPayouts = 0x2C34;
    public const nint m_nPickupEventCount = 0x2C38;
    public const nint m_vecSpawnGroundPos = 0x2C3C;
}

public static class CHostageExpresserShim {
    public const nint m_pExpresser = 0x9C8;
}

public static class CInButtonState {
    public const nint m_pButtonStates = 0x8;
}

public static class CInferno {
    public const nint m_fireXDelta = 0x710;
    public const nint m_fireYDelta = 0x810;
    public const nint m_fireZDelta = 0x910;
    public const nint m_fireParentXDelta = 0xA10;
    public const nint m_fireParentYDelta = 0xB10;
    public const nint m_fireParentZDelta = 0xC10;
    public const nint m_bFireIsBurning = 0xD10;
    public const nint m_BurnNormal = 0xD50;
    public const nint m_fireCount = 0x1050;
    public const nint m_nInfernoType = 0x1054;
    public const nint m_nFireEffectTickBegin = 0x1058;
    public const nint m_nFireLifetime = 0x105C;
    public const nint m_bInPostEffectTime = 0x1060;
    public const nint m_nFiresExtinguishCount = 0x1064;
    public const nint m_bWasCreatedInSmoke = 0x1068;
    public const nint m_extent = 0x1270;
    public const nint m_damageTimer = 0x1288;
    public const nint m_damageRampTimer = 0x12A0;
    public const nint m_splashVelocity = 0x12B8;
    public const nint m_InitialSplashVelocity = 0x12C4;
    public const nint m_startPos = 0x12D0;
    public const nint m_vecOriginalSpawnLocation = 0x12DC;
    public const nint m_activeTimer = 0x12E8;
    public const nint m_fireSpawnOffset = 0x12F8;
    public const nint m_nMaxFlames = 0x12FC;
    public const nint m_BookkeepingTimer = 0x1300;
    public const nint m_NextSpreadTimer = 0x1318;
    public const nint m_nSourceItemDefIndex = 0x1330;
}

public static class CInfoDynamicShadowHint {
    public const nint m_bDisabled = 0x4B0;
    public const nint m_flRange = 0x4B4;
    public const nint m_nImportance = 0x4B8;
    public const nint m_nLightChoice = 0x4BC;
    public const nint m_hLight = 0x4C0;
}

public static class CInfoDynamicShadowHintBox {
    public const nint m_vBoxMins = 0x4C8;
    public const nint m_vBoxMaxs = 0x4D4;
}

public static class CInfoGameEventProxy {
    public const nint m_iszEventName = 0x4B0;
    public const nint m_flRange = 0x4B8;
}

public static class CInfoMapRegion {
    public const nint m_flRadius = 0x4B0;
    public const nint m_strLocToken = 0x4B8;
    public const nint m_szLocToken = 0x4C0;
}

public static class CInfoOffscreenPanoramaTexture {
    public const nint m_bDisabled = 0x4B0;
    public const nint m_nResolutionX = 0x4B4;
    public const nint m_nResolutionY = 0x4B8;
    public const nint m_szLayoutFileName = 0x4C0;
    public const nint m_RenderAttrName = 0x4C8;
    public const nint m_TargetEntities = 0x4D0;
    public const nint m_nTargetChangeCount = 0x4E8;
    public const nint m_vecCSSClasses = 0x4F0;
    public const nint m_szTargetsName = 0x508;
    public const nint m_AdditionalTargetEntities = 0x510;
}

public static class CInfoPlayerStart {
    public const nint m_bDisabled = 0x4B0;
}

public static class CInfoSpawnGroupLoadUnload {
    public const nint m_OnSpawnGroupLoadStarted = 0x4B0;
    public const nint m_OnSpawnGroupLoadFinished = 0x4D8;
    public const nint m_OnSpawnGroupUnloadStarted = 0x500;
    public const nint m_OnSpawnGroupUnloadFinished = 0x528;
    public const nint m_iszSpawnGroupName = 0x550;
    public const nint m_iszSpawnGroupFilterName = 0x558;
    public const nint m_iszLandmarkName = 0x560;
    public const nint m_sFixedSpawnGroupName = 0x568;
    public const nint m_flTimeoutInterval = 0x570;
    public const nint m_bStreamingStarted = 0x574;
    public const nint m_bUnloadingStarted = 0x575;
}

public static class CInfoVisibilityBox {
    public const nint m_nMode = 0x4B4;
    public const nint m_vBoxSize = 0x4B8;
    public const nint m_bEnabled = 0x4C4;
}

public static class CInfoWorldLayer {
    public const nint m_pOutputOnEntitiesSpawned = 0x4B0;
    public const nint m_worldName = 0x4D8;
    public const nint m_layerName = 0x4E0;
    public const nint m_bWorldLayerVisible = 0x4E8;
    public const nint m_bEntitiesSpawned = 0x4E9;
    public const nint m_bCreateAsChildSpawnGroup = 0x4EA;
    public const nint m_hLayerSpawnGroup = 0x4EC;
}

public static class CInstancedSceneEntity {
    public const nint m_hOwner = 0xA08;
    public const nint m_bHadOwner = 0xA0C;
    public const nint m_flPostSpeakDelay = 0xA10;
    public const nint m_flPreDelay = 0xA14;
    public const nint m_bIsBackground = 0xA18;
}

public static class CInstructorEventEntity {
    public const nint m_iszName = 0x4B0;
    public const nint m_iszHintTargetEntity = 0x4B8;
    public const nint m_hTargetPlayer = 0x4C0;
}

public static class CIronSightController {
    public const nint m_bIronSightAvailable = 0x8;
    public const nint m_flIronSightAmount = 0xC;
    public const nint m_flIronSightAmountGained = 0x10;
    public const nint m_flIronSightAmountBiased = 0x14;
}

public static class CItem {
    public const nint m_OnPlayerTouch = 0x890;
    public const nint m_bActivateWhenAtRest = 0x8B8;
    public const nint m_OnCacheInteraction = 0x8C0;
    public const nint m_OnPlayerPickup = 0x8E8;
    public const nint m_OnGlovePulled = 0x910;
    public const nint m_vOriginalSpawnOrigin = 0x938;
    public const nint m_vOriginalSpawnAngles = 0x944;
    public const nint m_bPhysStartAsleep = 0x950;
}

public static class CItemCash {
    public const nint m_bufCashOriginalSource = 0x960;
    public const nint m_nBundleSize = 0x9A0;
    public const nint m_flAllowPickupTime = 0x9A8;
}

public static class CItemDefuser {
    public const nint m_entitySpottedState = 0x960;
    public const nint m_nSpotRules = 0x978;
}

public static class CItemDogtags {
    public const nint m_OwningPlayer = 0x960;
    public const nint m_KillingPlayer = 0x964;
}

public static class CItemGeneric {
    public const nint m_bHasTriggerRadius = 0x968;
    public const nint m_bHasPickupRadius = 0x969;
    public const nint m_flPickupRadiusSqr = 0x96C;
    public const nint m_flTriggerRadiusSqr = 0x970;
    public const nint m_flLastPickupCheck = 0x974;
    public const nint m_bPlayerCounterListenerAdded = 0x978;
    public const nint m_bPlayerInTriggerRadius = 0x979;
    public const nint m_hSpawnParticleEffect = 0x980;
    public const nint m_pAmbientSoundEffect = 0x988;
    public const nint m_bAutoStartAmbientSound = 0x990;
    public const nint m_pSpawnScriptFunction = 0x998;
    public const nint m_hPickupParticleEffect = 0x9A0;
    public const nint m_pPickupSoundEffect = 0x9A8;
    public const nint m_pPickupScriptFunction = 0x9B0;
    public const nint m_hTimeoutParticleEffect = 0x9B8;
    public const nint m_pTimeoutSoundEffect = 0x9C0;
    public const nint m_pTimeoutScriptFunction = 0x9C8;
    public const nint m_pPickupFilterName = 0x9D0;
    public const nint m_hPickupFilter = 0x9D8;
    public const nint m_OnPickup = 0x9E0;
    public const nint m_OnTimeout = 0xA08;
    public const nint m_OnTriggerStartTouch = 0xA30;
    public const nint m_OnTriggerTouch = 0xA58;
    public const nint m_OnTriggerEndTouch = 0xA80;
    public const nint m_pAllowPickupScriptFunction = 0xAA8;
    public const nint m_flPickupRadius = 0xAB0;
    public const nint m_flTriggerRadius = 0xAB4;
    public const nint m_pTriggerSoundEffect = 0xAB8;
    public const nint m_bGlowWhenInTrigger = 0xAC0;
    public const nint m_glowColor = 0xAC1;
    public const nint m_bUseable = 0xAC5;
    public const nint m_hTriggerHelper = 0xAC8;
}

public static class CItemGenericTriggerHelper {
    public const nint m_hParentItem = 0x700;
}

public static class CKeepUpright {
    public const nint m_worldGoalAxis = 0x4B8;
    public const nint m_localTestAxis = 0x4C4;
    public const nint m_nameAttach = 0x4D8;
    public const nint m_attachedObject = 0x4E0;
    public const nint m_angularLimit = 0x4E4;
    public const nint m_bActive = 0x4E8;
    public const nint m_bDampAllRotation = 0x4E9;
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
    public const nint m_bPvsModifyEntity = 0x1C8;
}

public static class CLightEntity {
    public const nint m_CLightComponent = 0x700;
}

public static class CLightGlow {
    public const nint m_nHorizontalSize = 0x700;
    public const nint m_nVerticalSize = 0x704;
    public const nint m_nMinDist = 0x708;
    public const nint m_nMaxDist = 0x70C;
    public const nint m_nOuterMaxDist = 0x710;
    public const nint m_flGlowProxySize = 0x714;
    public const nint m_flHDRColorScale = 0x718;
}

public static class CLogicAchievement {
    public const nint m_bDisabled = 0x4B0;
    public const nint m_iszAchievementEventID = 0x4B8;
    public const nint m_OnFired = 0x4C0;
}

public static class CLogicActiveAutosave {
    public const nint m_TriggerHitPoints = 0x4C0;
    public const nint m_flTimeToTrigger = 0x4C4;
    public const nint m_flStartTime = 0x4C8;
    public const nint m_flDangerousTime = 0x4CC;
}

public static class CLogicAuto {
    public const nint m_OnMapSpawn = 0x4B0;
    public const nint m_OnDemoMapSpawn = 0x4D8;
    public const nint m_OnNewGame = 0x500;
    public const nint m_OnLoadGame = 0x528;
    public const nint m_OnMapTransition = 0x550;
    public const nint m_OnBackgroundMap = 0x578;
    public const nint m_OnMultiNewMap = 0x5A0;
    public const nint m_OnMultiNewRound = 0x5C8;
    public const nint m_OnVREnabled = 0x5F0;
    public const nint m_OnVRNotEnabled = 0x618;
    public const nint m_globalstate = 0x640;
}

public static class CLogicAutosave {
    public const nint m_bForceNewLevelUnit = 0x4B0;
    public const nint m_minHitPoints = 0x4B4;
    public const nint m_minHitPointsToCommit = 0x4B8;
}

public static class CLogicBranch {
    public const nint m_bInValue = 0x4B0;
    public const nint m_Listeners = 0x4B8;
    public const nint m_OnTrue = 0x4D0;
    public const nint m_OnFalse = 0x4F8;
}

public static class CLogicBranchList {
    public const nint m_nLogicBranchNames = 0x4B0;
    public const nint m_LogicBranchList = 0x530;
    public const nint m_eLastState = 0x548;
    public const nint m_OnAllTrue = 0x550;
    public const nint m_OnAllFalse = 0x578;
    public const nint m_OnMixed = 0x5A0;
}

public static class CLogicCase {
    public const nint m_nCase = 0x4B0;
    public const nint m_nShuffleCases = 0x5B0;
    public const nint m_nLastShuffleCase = 0x5B4;
    public const nint m_uchShuffleCaseMap = 0x5B8;
    public const nint m_OnCase = 0x5D8;
    public const nint m_OnDefault = 0xAD8;
}

public static class CLogicCollisionPair {
    public const nint m_nameAttach1 = 0x4B0;
    public const nint m_nameAttach2 = 0x4B8;
    public const nint m_disabled = 0x4C0;
    public const nint m_succeeded = 0x4C1;
}

public static class CLogicCompare {
    public const nint m_flInValue = 0x4B0;
    public const nint m_flCompareValue = 0x4B4;
    public const nint m_OnLessThan = 0x4B8;
    public const nint m_OnEqualTo = 0x4E0;
    public const nint m_OnNotEqualTo = 0x508;
    public const nint m_OnGreaterThan = 0x530;
}

public static class CLogicDistanceAutosave {
    public const nint m_iszTargetEntity = 0x4B0;
    public const nint m_flDistanceToPlayer = 0x4B8;
    public const nint m_bForceNewLevelUnit = 0x4BC;
    public const nint m_bCheckCough = 0x4BD;
    public const nint m_bThinkDangerous = 0x4BE;
    public const nint m_flDangerousTime = 0x4C0;
}

public static class CLogicDistanceCheck {
    public const nint m_iszEntityA = 0x4B0;
    public const nint m_iszEntityB = 0x4B8;
    public const nint m_flZone1Distance = 0x4C0;
    public const nint m_flZone2Distance = 0x4C4;
    public const nint m_InZone1 = 0x4C8;
    public const nint m_InZone2 = 0x4F0;
    public const nint m_InZone3 = 0x518;
}

public static class CLogicEventListener {
    public const nint m_iszEventName = 0x4C0;
    public const nint m_bIsEnabled = 0x4C8;
    public const nint m_nTeam = 0x4CC;
    public const nint m_bFetchEventData = 0x4D0;
    public const nint m_OnEventFired = 0x4D8;
}

public static class CLogicGameEvent {
    public const nint m_iszEventName = 0x4B0;
}

public static class CLogicGameEventListener {
    public const nint m_OnEventFired = 0x4C0;
    public const nint m_iszGameEventName = 0x4E8;
    public const nint m_iszGameEventItem = 0x4F0;
    public const nint m_bEnabled = 0x4F8;
    public const nint m_bStartDisabled = 0x4F9;
}

public static class CLogicLineToEntity {
    public const nint m_Line = 0x4B0;
    public const nint m_SourceName = 0x4D8;
    public const nint m_StartEntity = 0x4E0;
    public const nint m_EndEntity = 0x4E4;
}

public static class CLogicMeasureMovement {
    public const nint m_strMeasureTarget = 0x4B0;
    public const nint m_strMeasureReference = 0x4B8;
    public const nint m_strTargetReference = 0x4C0;
    public const nint m_hMeasureTarget = 0x4C8;
    public const nint m_hMeasureReference = 0x4CC;
    public const nint m_hTarget = 0x4D0;
    public const nint m_hTargetReference = 0x4D4;
    public const nint m_flScale = 0x4D8;
    public const nint m_nMeasureType = 0x4DC;
}

public static class CLogicNPCCounter {
    public const nint m_OnMinCountAll = 0x4B0;
    public const nint m_OnMaxCountAll = 0x4D8;
    public const nint m_OnFactorAll = 0x500;
    public const nint m_OnMinPlayerDistAll = 0x528;
    public const nint m_OnMinCount_1 = 0x550;
    public const nint m_OnMaxCount_1 = 0x578;
    public const nint m_OnFactor_1 = 0x5A0;
    public const nint m_OnMinPlayerDist_1 = 0x5C8;
    public const nint m_OnMinCount_2 = 0x5F0;
    public const nint m_OnMaxCount_2 = 0x618;
    public const nint m_OnFactor_2 = 0x640;
    public const nint m_OnMinPlayerDist_2 = 0x668;
    public const nint m_OnMinCount_3 = 0x690;
    public const nint m_OnMaxCount_3 = 0x6B8;
    public const nint m_OnFactor_3 = 0x6E0;
    public const nint m_OnMinPlayerDist_3 = 0x708;
    public const nint m_hSource = 0x730;
    public const nint m_iszSourceEntityName = 0x738;
    public const nint m_flDistanceMax = 0x740;
    public const nint m_bDisabled = 0x744;
    public const nint m_nMinCountAll = 0x748;
    public const nint m_nMaxCountAll = 0x74C;
    public const nint m_nMinFactorAll = 0x750;
    public const nint m_nMaxFactorAll = 0x754;
    public const nint m_iszNPCClassname_1 = 0x760;
    public const nint m_nNPCState_1 = 0x768;
    public const nint m_bInvertState_1 = 0x76C;
    public const nint m_nMinCount_1 = 0x770;
    public const nint m_nMaxCount_1 = 0x774;
    public const nint m_nMinFactor_1 = 0x778;
    public const nint m_nMaxFactor_1 = 0x77C;
    public const nint m_flDefaultDist_1 = 0x784;
    public const nint m_iszNPCClassname_2 = 0x788;
    public const nint m_nNPCState_2 = 0x790;
    public const nint m_bInvertState_2 = 0x794;
    public const nint m_nMinCount_2 = 0x798;
    public const nint m_nMaxCount_2 = 0x79C;
    public const nint m_nMinFactor_2 = 0x7A0;
    public const nint m_nMaxFactor_2 = 0x7A4;
    public const nint m_flDefaultDist_2 = 0x7AC;
    public const nint m_iszNPCClassname_3 = 0x7B0;
    public const nint m_nNPCState_3 = 0x7B8;
    public const nint m_bInvertState_3 = 0x7BC;
    public const nint m_nMinCount_3 = 0x7C0;
    public const nint m_nMaxCount_3 = 0x7C4;
    public const nint m_nMinFactor_3 = 0x7C8;
    public const nint m_nMaxFactor_3 = 0x7CC;
    public const nint m_flDefaultDist_3 = 0x7D4;
}

public static class CLogicNPCCounterAABB {
    public const nint m_vDistanceOuterMins = 0x7F0;
    public const nint m_vDistanceOuterMaxs = 0x7FC;
    public const nint m_vOuterMins = 0x808;
    public const nint m_vOuterMaxs = 0x814;
}

public static class CLogicNavigation {
    public const nint m_isOn = 0x4B8;
    public const nint m_navProperty = 0x4BC;
}

public static class CLogicPlayerProxy {
    public const nint m_hPlayer = 0x4B0;
    public const nint m_PlayerHasAmmo = 0x4B8;
    public const nint m_PlayerHasNoAmmo = 0x4E0;
    public const nint m_PlayerDied = 0x508;
    public const nint m_RequestedPlayerHealth = 0x530;
}

public static class CLogicRelay {
    public const nint m_OnTrigger = 0x4B0;
    public const nint m_OnSpawn = 0x4D8;
    public const nint m_bDisabled = 0x500;
    public const nint m_bWaitForRefire = 0x501;
    public const nint m_bTriggerOnce = 0x502;
    public const nint m_bFastRetrigger = 0x503;
    public const nint m_bPassthoughCaller = 0x504;
}

public static class CMapInfo {
    public const nint m_iBuyingStatus = 0x4B0;
    public const nint m_flBombRadius = 0x4B4;
    public const nint m_iPetPopulation = 0x4B8;
    public const nint m_bUseNormalSpawnsForDM = 0x4BC;
    public const nint m_bDisableAutoGeneratedDMSpawns = 0x4BD;
    public const nint m_flBotMaxVisionDistance = 0x4C0;
    public const nint m_iHostageCount = 0x4C4;
    public const nint m_bFadePlayerVisibilityFarZ = 0x4C8;
}

public static class CMapVetoPickController {
    public const nint m_bPlayedIntroVcd = 0x4B0;
    public const nint m_bNeedToPlayFiveSecondsRemaining = 0x4B1;
    public const nint m_dblPreMatchDraftSequenceTime = 0x4D0;
    public const nint m_bPreMatchDraftStateChanged = 0x4D8;
    public const nint m_nDraftType = 0x4DC;
    public const nint m_nTeamWinningCoinToss = 0x4E0;
    public const nint m_nTeamWithFirstChoice = 0x4E4;
    public const nint m_nVoteMapIdsList = 0x5E4;
    public const nint m_nAccountIDs = 0x600;
    public const nint m_nMapId0 = 0x700;
    public const nint m_nMapId1 = 0x800;
    public const nint m_nMapId2 = 0x900;
    public const nint m_nMapId3 = 0xA00;
    public const nint m_nMapId4 = 0xB00;
    public const nint m_nMapId5 = 0xC00;
    public const nint m_nStartingSide0 = 0xD00;
    public const nint m_nCurrentPhase = 0xE00;
    public const nint m_nPhaseStartTick = 0xE04;
    public const nint m_nPhaseDurationTicks = 0xE08;
    public const nint m_OnMapVetoed = 0xE10;
    public const nint m_OnMapPicked = 0xE38;
    public const nint m_OnSidesPicked = 0xE60;
    public const nint m_OnNewPhaseStarted = 0xE88;
    public const nint m_OnLevelTransition = 0xEB0;
}

public static class CMarkupVolume {
    public const nint m_bEnabled = 0x700;
}

public static class CMarkupVolumeTagged {
    public const nint m_bIsGroup = 0x738;
    public const nint m_bGroupByPrefab = 0x739;
    public const nint m_bGroupByVolume = 0x73A;
    public const nint m_bGroupOtherGroups = 0x73B;
    public const nint m_bIsInGroup = 0x73C;
}

public static class CMarkupVolumeTagged_NavGame {
    public const nint m_bFloodFillAttribute = 0x758;
}

public static class CMarkupVolumeWithRef {
    public const nint m_bUseRef = 0x740;
    public const nint m_vRefPos = 0x744;
    public const nint m_flRefDot = 0x750;
}

public static class CMathColorBlend {
    public const nint m_flInMin = 0x4B0;
    public const nint m_flInMax = 0x4B4;
    public const nint m_OutColor1 = 0x4B8;
    public const nint m_OutColor2 = 0x4BC;
    public const nint m_OutValue = 0x4C0;
}

public static class CMathCounter {
    public const nint m_flMin = 0x4B0;
    public const nint m_flMax = 0x4B4;
    public const nint m_bHitMin = 0x4B8;
    public const nint m_bHitMax = 0x4B9;
    public const nint m_bDisabled = 0x4BA;
    public const nint m_OutValue = 0x4C0;
    public const nint m_OnGetValue = 0x4E8;
    public const nint m_OnHitMin = 0x510;
    public const nint m_OnHitMax = 0x538;
    public const nint m_OnChangedFromMin = 0x560;
    public const nint m_OnChangedFromMax = 0x588;
}

public static class CMathRemap {
    public const nint m_flInMin = 0x4B0;
    public const nint m_flInMax = 0x4B4;
    public const nint m_flOut1 = 0x4B8;
    public const nint m_flOut2 = 0x4BC;
    public const nint m_flOldInValue = 0x4C0;
    public const nint m_bEnabled = 0x4C4;
    public const nint m_OutValue = 0x4C8;
    public const nint m_OnRoseAboveMin = 0x4F0;
    public const nint m_OnRoseAboveMax = 0x518;
    public const nint m_OnFellBelowMin = 0x540;
    public const nint m_OnFellBelowMax = 0x568;
}

public static class CMelee {
    public const nint m_flThrowAt = 0xDD0;
    public const nint m_hThrower = 0xDD4;
    public const nint m_bDidThrowDamage = 0xDD8;
}

public static class CMessage {
    public const nint m_iszMessage = 0x4B0;
    public const nint m_MessageVolume = 0x4B8;
    public const nint m_MessageAttenuation = 0x4BC;
    public const nint m_Radius = 0x4C0;
    public const nint m_sNoise = 0x4C8;
    public const nint m_OnShowMessage = 0x4D0;
}

public static class CMessageEntity {
    public const nint m_radius = 0x4B0;
    public const nint m_messageText = 0x4B8;
    public const nint m_drawText = 0x4C0;
    public const nint m_bDeveloperOnly = 0x4C1;
    public const nint m_bEnabled = 0x4C2;
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

public static class CMolotovProjectile {
    public const nint m_bIsIncGrenade = 0xA20;
    public const nint m_bDetonated = 0xA2C;
    public const nint m_stillTimer = 0xA30;
    public const nint m_bHasBouncedOffPlayer = 0xB10;
}

public static class CMomentaryRotButton {
    public const nint m_Position = 0x8C8;
    public const nint m_OnUnpressed = 0x8F0;
    public const nint m_OnFullyOpen = 0x918;
    public const nint m_OnFullyClosed = 0x940;
    public const nint m_OnReachedPosition = 0x968;
    public const nint m_lastUsed = 0x990;
    public const nint m_start = 0x994;
    public const nint m_end = 0x9A0;
    public const nint m_IdealYaw = 0x9AC;
    public const nint m_sNoise = 0x9B0;
    public const nint m_bUpdateTarget = 0x9B8;
    public const nint m_direction = 0x9BC;
    public const nint m_returnSpeed = 0x9C0;
    public const nint m_flStartPosition = 0x9C4;
}

public static class CMotorController {
    public const nint m_speed = 0x8;
    public const nint m_maxTorque = 0xC;
    public const nint m_axis = 0x10;
    public const nint m_inertiaFactor = 0x1C;
}

public static class CMultiLightProxy {
    public const nint m_iszLightNameFilter = 0x4B0;
    public const nint m_iszLightClassFilter = 0x4B8;
    public const nint m_flLightRadiusFilter = 0x4C0;
    public const nint m_flBrightnessDelta = 0x4C4;
    public const nint m_bPerformScreenFade = 0x4C8;
    public const nint m_flTargetBrightnessMultiplier = 0x4CC;
    public const nint m_flCurrentBrightnessMultiplier = 0x4D0;
    public const nint m_vecLights = 0x4D8;
}

public static class CMultiSource {
    public const nint m_rgEntities = 0x4B0;
    public const nint m_rgTriggered = 0x530;
    public const nint m_OnTrigger = 0x5B0;
    public const nint m_iTotal = 0x5D8;
    public const nint m_globalstate = 0x5E0;
}

public static class CMultiplayer_Expresser {
    public const nint m_bAllowMultipleScenes = 0x70;
}

public static class CNavHullPresetVData {
    public const nint m_vecNavHulls = 0x0;
}

public static class CNavHullVData {
    public const nint m_bAgentEnabled = 0x0;
    public const nint m_agentRadius = 0x4;
    public const nint m_agentHeight = 0x8;
    public const nint m_agentShortHeightEnabled = 0xC;
    public const nint m_agentShortHeight = 0x10;
    public const nint m_agentMaxClimb = 0x14;
    public const nint m_agentMaxSlope = 0x18;
    public const nint m_agentMaxJumpDownDist = 0x1C;
    public const nint m_agentMaxJumpHorizDistBase = 0x20;
    public const nint m_agentMaxJumpUpDist = 0x24;
    public const nint m_agentBorderErosion = 0x28;
}

public static class CNavLinkAnimgraphVar {
    public const nint m_strAnimgraphVar = 0x0;
    public const nint m_unAlignmentDegrees = 0x8;
}

public static class CNavLinkAreaEntity {
    public const nint m_flWidth = 0x4B0;
    public const nint m_vLocatorOffset = 0x4B4;
    public const nint m_qLocatorAnglesOffset = 0x4C0;
    public const nint m_strMovementForward = 0x4D0;
    public const nint m_strMovementReverse = 0x4D8;
    public const nint m_nNavLinkIdForward = 0x4E0;
    public const nint m_nNavLinkIdReverse = 0x4E4;
    public const nint m_bEnabled = 0x4E8;
    public const nint m_strFilterName = 0x4F0;
    public const nint m_hFilter = 0x4F8;
    public const nint m_OnNavLinkStart = 0x500;
    public const nint m_OnNavLinkFinish = 0x528;
    public const nint m_bIsTerminus = 0x550;
}

public static class CNavLinkMovementVData {
    public const nint m_bIsInterpolated = 0x0;
    public const nint m_unRecommendedDistance = 0x4;
    public const nint m_vecAnimgraphVars = 0x8;
}

public static class CNavSpaceInfo {
    public const nint m_bCreateFlightSpace = 0x4B0;
}

public static class CNavVolumeBreadthFirstSearch {
    public const nint m_vStartPos = 0xA0;
    public const nint m_flSearchDist = 0xAC;
}

public static class CNavVolumeSphere {
    public const nint m_vCenter = 0x70;
    public const nint m_flRadius = 0x7C;
}

public static class CNavVolumeSphericalShell {
    public const nint m_flRadiusInner = 0x80;
}

public static class CNavVolumeVector {
    public const nint m_bHasBeenPreFiltered = 0x78;
}

public static class CNetworkOriginCellCoordQuantizedVector {
    public const nint m_cellX = 0x10;
    public const nint m_cellY = 0x12;
    public const nint m_cellZ = 0x14;
    public const nint m_nOutsideWorld = 0x16;
    public const nint m_vecX = 0x18;
    public const nint m_vecY = 0x20;
    public const nint m_vecZ = 0x28;
}

public static class CNetworkOriginQuantizedVector {
    public const nint m_vecX = 0x10;
    public const nint m_vecY = 0x18;
    public const nint m_vecZ = 0x20;
}

public static class CNetworkTransmitComponent {
    public const nint m_nTransmitStateOwnedCounter = 0x16C;
}

public static class CNetworkVelocityVector {
    public const nint m_vecX = 0x10;
    public const nint m_vecY = 0x18;
    public const nint m_vecZ = 0x20;
}

public static class CNetworkViewOffsetVector {
    public const nint m_vecX = 0x10;
    public const nint m_vecY = 0x18;
    public const nint m_vecZ = 0x20;
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

public static class COmniLight {
    public const nint m_flInnerAngle = 0x938;
    public const nint m_flOuterAngle = 0x93C;
    public const nint m_bShowLight = 0x940;
}

public static class COrnamentProp {
    public const nint m_initialOwner = 0xB00;
}

public static class CParadropChopper {
    public const nint m_vecDropPos = 0x88C;
    public const nint m_flLastDistFromDrop = 0x898;
    public const nint m_bDroppedParadrop = 0x89C;
    public const nint m_pSoundLoop = 0x8A0;
    public const nint m_flSpawnTime = 0x8A8;
    public const nint m_flFlightTime = 0x8AC;
    public const nint m_bPlayerIsFinishedRappelling = 0x8B0;
    public const nint m_flPlayerFinishedRappellingTime = 0x8B4;
    public const nint m_strFlyoverDropEvent = 0x8B8;
    public const nint m_hCallingPlayer = 0x8C0;
    public const nint m_bCalledByPlayer = 0x8C4;
}

public static class CParticleSystem {
    public const nint m_szSnapshotFileName = 0x700;
    public const nint m_bActive = 0x900;
    public const nint m_bFrozen = 0x901;
    public const nint m_flFreezeTransitionDuration = 0x904;
    public const nint m_nStopType = 0x908;
    public const nint m_bAnimateDuringGameplayPause = 0x90C;
    public const nint m_iEffectIndex = 0x910;
    public const nint m_flStartTime = 0x918;
    public const nint m_flPreSimTime = 0x91C;
    public const nint m_vServerControlPoints = 0x920;
    public const nint m_iServerControlPointAssignments = 0x950;
    public const nint m_hControlPointEnts = 0x954;
    public const nint m_bNoSave = 0xA54;
    public const nint m_bNoFreeze = 0xA55;
    public const nint m_bNoRamp = 0xA56;
    public const nint m_bStartActive = 0xA57;
    public const nint m_iszEffectName = 0xA58;
    public const nint m_iszControlPointNames = 0xA60;
    public const nint m_nDataCP = 0xC60;
    public const nint m_vecDataCPValue = 0xC64;
    public const nint m_nTintCP = 0xC70;
    public const nint m_clrTint = 0xC74;
}

public static class CPathCorner {
    public const nint m_flWait = 0x4B0;
    public const nint m_flRadius = 0x4B4;
    public const nint m_OnPass = 0x4B8;
}

public static class CPathKeyFrame {
    public const nint m_Origin = 0x4B0;
    public const nint m_Angles = 0x4BC;
    public const nint m_qAngle = 0x4D0;
    public const nint m_iNextKey = 0x4E0;
    public const nint m_flNextTime = 0x4E8;
    public const nint m_pNextKey = 0x4F0;
    public const nint m_pPrevKey = 0x4F8;
    public const nint m_flSpeed = 0x500;
}

public static class CPathParticleRope {
    public const nint m_bStartActive = 0x4B0;
    public const nint m_flMaxSimulationTime = 0x4B4;
    public const nint m_iszEffectName = 0x4B8;
    public const nint m_PathNodes_Name = 0x4C0;
    public const nint m_flParticleSpacing = 0x4D8;
    public const nint m_flSlack = 0x4DC;
    public const nint m_flRadius = 0x4E0;
    public const nint m_ColorTint = 0x4E4;
    public const nint m_nEffectState = 0x4E8;
    public const nint m_iEffectIndex = 0x4F0;
    public const nint m_PathNodes_Position = 0x4F8;
    public const nint m_PathNodes_TangentIn = 0x510;
    public const nint m_PathNodes_TangentOut = 0x528;
    public const nint m_PathNodes_Color = 0x540;
    public const nint m_PathNodes_PinEnabled = 0x558;
    public const nint m_PathNodes_RadiusScale = 0x570;
}

public static class CPathTrack {
    public const nint m_pnext = 0x4B0;
    public const nint m_pprevious = 0x4B8;
    public const nint m_paltpath = 0x4C0;
    public const nint m_flRadius = 0x4C8;
    public const nint m_length = 0x4CC;
    public const nint m_altName = 0x4D0;
    public const nint m_nIterVal = 0x4D8;
    public const nint m_eOrientationType = 0x4DC;
    public const nint m_OnPass = 0x4E0;
}

public static class CPhysBallSocket {
    public const nint m_flFriction = 0x508;
    public const nint m_bEnableSwingLimit = 0x50C;
    public const nint m_flSwingLimit = 0x510;
    public const nint m_bEnableTwistLimit = 0x514;
    public const nint m_flMinTwistAngle = 0x518;
    public const nint m_flMaxTwistAngle = 0x51C;
}

public static class CPhysBox {
    public const nint m_damageType = 0x7C0;
    public const nint m_massScale = 0x7C4;
    public const nint m_damageToEnableMotion = 0x7C8;
    public const nint m_flForceToEnableMotion = 0x7CC;
    public const nint m_angPreferredCarryAngles = 0x7D0;
    public const nint m_bNotSolidToWorld = 0x7DC;
    public const nint m_bEnableUseOutput = 0x7DD;
    public const nint m_iExploitableByPlayer = 0x7E0;
    public const nint m_flTouchOutputPerEntityDelay = 0x7E4;
    public const nint m_OnDamaged = 0x7E8;
    public const nint m_OnAwakened = 0x810;
    public const nint m_OnMotionEnabled = 0x838;
    public const nint m_OnPlayerUse = 0x860;
    public const nint m_OnStartTouch = 0x888;
    public const nint m_hCarryingPlayer = 0x8B0;
}

public static class CPhysConstraint {
    public const nint m_nameAttach1 = 0x4B8;
    public const nint m_nameAttach2 = 0x4C0;
    public const nint m_breakSound = 0x4C8;
    public const nint m_forceLimit = 0x4D0;
    public const nint m_torqueLimit = 0x4D4;
    public const nint m_teleportTick = 0x4D8;
    public const nint m_minTeleportDistance = 0x4DC;
    public const nint m_OnBreak = 0x4E0;
}

public static class CPhysExplosion {
    public const nint m_bExplodeOnSpawn = 0x4B0;
    public const nint m_flMagnitude = 0x4B4;
    public const nint m_flDamage = 0x4B8;
    public const nint m_radius = 0x4BC;
    public const nint m_targetEntityName = 0x4C0;
    public const nint m_flInnerRadius = 0x4C8;
    public const nint m_flPushScale = 0x4CC;
    public const nint m_bConvertToDebrisWhenPossible = 0x4D0;
    public const nint m_OnPushedPlayer = 0x4D8;
}

public static class CPhysFixed {
    public const nint m_flLinearFrequency = 0x508;
    public const nint m_flLinearDampingRatio = 0x50C;
    public const nint m_flAngularFrequency = 0x510;
    public const nint m_flAngularDampingRatio = 0x514;
    public const nint m_bEnableLinearConstraint = 0x518;
    public const nint m_bEnableAngularConstraint = 0x519;
}

public static class CPhysForce {
    public const nint m_nameAttach = 0x4B8;
    public const nint m_force = 0x4C0;
    public const nint m_forceTime = 0x4C4;
    public const nint m_attachedObject = 0x4C8;
    public const nint m_wasRestored = 0x4CC;
    public const nint m_integrator = 0x4D0;
}

public static class CPhysHinge {
    public const nint m_soundInfo = 0x510;
    public const nint m_NotifyMinLimitReached = 0x598;
    public const nint m_NotifyMaxLimitReached = 0x5C0;
    public const nint m_bAtMinLimit = 0x5E8;
    public const nint m_bAtMaxLimit = 0x5E9;
    public const nint m_hinge = 0x5EC;
    public const nint m_hingeFriction = 0x62C;
    public const nint m_systemLoadScale = 0x630;
    public const nint m_bIsAxisLocal = 0x634;
    public const nint m_flMinRotation = 0x638;
    public const nint m_flMaxRotation = 0x63C;
    public const nint m_flInitialRotation = 0x640;
    public const nint m_flMotorFrequency = 0x644;
    public const nint m_flMotorDampingRatio = 0x648;
    public const nint m_flAngleSpeed = 0x64C;
    public const nint m_flAngleSpeedThreshold = 0x650;
    public const nint m_OnStartMoving = 0x658;
    public const nint m_OnStopMoving = 0x680;
}

public static class CPhysImpact {
    public const nint m_damage = 0x4B0;
    public const nint m_distance = 0x4B4;
    public const nint m_directionEntityName = 0x4B8;
}

public static class CPhysLength {
    public const nint m_offset = 0x508;
    public const nint m_vecAttach = 0x520;
    public const nint m_addLength = 0x52C;
    public const nint m_minLength = 0x530;
    public const nint m_totalLength = 0x534;
    public const nint m_bEnableCollision = 0x538;
}

public static class CPhysMagnet {
    public const nint m_OnMagnetAttach = 0x888;
    public const nint m_OnMagnetDetach = 0x8B0;
    public const nint m_massScale = 0x8D8;
    public const nint m_forceLimit = 0x8DC;
    public const nint m_torqueLimit = 0x8E0;
    public const nint m_MagnettedEntities = 0x8E8;
    public const nint m_bActive = 0x900;
    public const nint m_bHasHitSomething = 0x901;
    public const nint m_flTotalMass = 0x904;
    public const nint m_flRadius = 0x908;
    public const nint m_flNextSuckTime = 0x90C;
    public const nint m_iMaxObjectsAttached = 0x910;
}

public static class CPhysMotor {
    public const nint m_nameAttach = 0x4B0;
    public const nint m_hAttachedObject = 0x4B8;
    public const nint m_spinUp = 0x4BC;
    public const nint m_additionalAcceleration = 0x4C0;
    public const nint m_angularAcceleration = 0x4C4;
    public const nint m_lastTime = 0x4C8;
    public const nint m_motor = 0x4E0;
}

public static class CPhysPropAmmoBox {
    public const nint m_nUsesRemaining = 0xB98;
    public const nint m_flTimeLastUsed = 0xB9C;
}

public static class CPhysPropLootCrate {
    public const nint m_bRenderInPSPM = 0xB98;
    public const nint m_bRenderInTablet = 0xB99;
    public const nint m_flSpawnTime = 0xB9C;
    public const nint m_bTakeDamageFromDangerZone = 0xBA0;
    public const nint m_pszCrateName = 0xBA8;
    public const nint m_hCrateOwner = 0xBB0;
    public const nint m_bOwnedByPlayer = 0xBB4;
    public const nint m_flDampingOriginalSpeed = 0xBB8;
    public const nint m_flDampingOriginalRot = 0xBBC;
}

public static class CPhysPropMapPlacedLongUseEntity {
    public const nint m_iszStartUseSound = 0xBA0;
    public const nint m_nPingType = 0xBA8;
    public const nint m_nLongUseActionType = 0xBAC;
    public const nint m_flLongUseDuration = 0xBB0;
    public const nint m_OnUseCompleted = 0xBB8;
}

public static class CPhysPropMoneyCrate {
    public const nint m_nCurrentCashCount = 0xBC0;
    public const nint m_nCashCount = 0xBC4;
    public const nint m_flTimeLastUsed = 0xBC8;
}

public static class CPhysPropParadropCrate {
    public const nint m_bFalling = 0xBC0;
    public const nint m_nNumThinksAtZeroVerticalVelocity = 0xBC4;
}

public static class CPhysPropRadarJammer {
    public const nint m_flSpawnTime = 0xBA0;
    public const nint m_flLastSoundTime = 0xBA4;
    public const nint m_vecJammedHexCenters = 0xBA8;
    public const nint m_vecLastJammedOrigin = 0xBC0;
}

public static class CPhysPropWeaponUpgrade {
    public const nint m_nEventPriority = 0xB98;
    public const nint m_flTimeLastUsed = 0xB9C;
}

public static class CPhysPulley {
    public const nint m_position2 = 0x508;
    public const nint m_offset = 0x514;
    public const nint m_addLength = 0x52C;
    public const nint m_gearRatio = 0x530;
}

public static class CPhysSlideConstraint {
    public const nint m_axisEnd = 0x510;
    public const nint m_slideFriction = 0x51C;
    public const nint m_systemLoadScale = 0x520;
    public const nint m_initialOffset = 0x524;
    public const nint m_bEnableLinearConstraint = 0x528;
    public const nint m_bEnableAngularConstraint = 0x529;
    public const nint m_flMotorFrequency = 0x52C;
    public const nint m_flMotorDampingRatio = 0x530;
    public const nint m_bUseEntityPivot = 0x534;
    public const nint m_soundInfo = 0x538;
}

public static class CPhysThruster {
    public const nint m_localOrigin = 0x510;
}

public static class CPhysTorque {
    public const nint m_axis = 0x510;
}

public static class CPhysWheelConstraint {
    public const nint m_flSuspensionFrequency = 0x508;
    public const nint m_flSuspensionDampingRatio = 0x50C;
    public const nint m_flSuspensionHeightOffset = 0x510;
    public const nint m_bEnableSuspensionLimit = 0x514;
    public const nint m_flMinSuspensionOffset = 0x518;
    public const nint m_flMaxSuspensionOffset = 0x51C;
    public const nint m_bEnableSteeringLimit = 0x520;
    public const nint m_flMinSteeringAngle = 0x524;
    public const nint m_flMaxSteeringAngle = 0x528;
    public const nint m_flSteeringAxisFriction = 0x52C;
    public const nint m_flSpinAxisFriction = 0x530;
}

public static class CPhysicsEntitySolver {
    public const nint m_hMovingEntity = 0x4B8;
    public const nint m_hPhysicsBlocker = 0x4BC;
    public const nint m_separationDuration = 0x4C0;
    public const nint m_cancelTime = 0x4C4;
}

public static class CPhysicsProp {
    public const nint m_MotionEnabled = 0xA08;
    public const nint m_OnAwakened = 0xA30;
    public const nint m_OnAwake = 0xA58;
    public const nint m_OnAsleep = 0xA80;
    public const nint m_OnPlayerUse = 0xAA8;
    public const nint m_OnPlayerPickup = 0xAD0;
    public const nint m_OnOutOfWorld = 0xAF8;
    public const nint m_massScale = 0xB20;
    public const nint m_inertiaScale = 0xB24;
    public const nint m_buoyancyScale = 0xB28;
    public const nint m_damageType = 0xB2C;
    public const nint m_damageToEnableMotion = 0xB30;
    public const nint m_flForceToEnableMotion = 0xB34;
    public const nint m_bThrownByPlayer = 0xB38;
    public const nint m_bDroppedByPlayer = 0xB39;
    public const nint m_bTouchedByPlayer = 0xB3A;
    public const nint m_bFirstCollisionAfterLaunch = 0xB3B;
    public const nint m_iExploitableByPlayer = 0xB3C;
    public const nint m_bHasBeenAwakened = 0xB40;
    public const nint m_bIsOverrideProp = 0xB41;
    public const nint m_fNextCheckDisableMotionContactsTime = 0xB44;
    public const nint m_iInitialGlowState = 0xB48;
    public const nint m_nGlowRange = 0xB4C;
    public const nint m_nGlowRangeMin = 0xB50;
    public const nint m_glowColor = 0xB54;
    public const nint m_bForceNavIgnore = 0xB58;
    public const nint m_bNoNavmeshBlocker = 0xB59;
    public const nint m_bForceNpcExclude = 0xB5A;
    public const nint m_bShouldAutoConvertBackFromDebris = 0xB5B;
    public const nint m_bMuteImpactEffects = 0xB5C;
    public const nint m_bAcceptDamageFromHeldObjects = 0xB64;
    public const nint m_bEnableUseOutput = 0xB65;
    public const nint m_bAwake = 0xB66;
    public const nint m_nCollisionGroupOverride = 0xB68;
}

public static class CPhysicsPropRespawnable {
    public const nint m_vOriginalSpawnOrigin = 0xB70;
    public const nint m_vOriginalSpawnAngles = 0xB7C;
    public const nint m_vOriginalMins = 0xB88;
    public const nint m_vOriginalMaxs = 0xB94;
    public const nint m_flRespawnDuration = 0xBA0;
}

public static class CPhysicsShake {
    public const nint m_force = 0x8;
}

public static class CPhysicsSpring {
    public const nint m_flFrequency = 0x4B8;
    public const nint m_flDampingRatio = 0x4BC;
    public const nint m_flRestLength = 0x4C0;
    public const nint m_nameAttachStart = 0x4C8;
    public const nint m_nameAttachEnd = 0x4D0;
    public const nint m_start = 0x4D8;
    public const nint m_end = 0x4E4;
    public const nint m_teleportTick = 0x4F0;
}

public static class CPhysicsWire {
    public const nint m_nDensity = 0x4B0;
}

public static class CPlantedC4 {
    public const nint m_bPlantedAtQuestTarget = 0x888;
    public const nint m_bBombTicking = 0x889;
    public const nint m_flC4Blow = 0x88C;
    public const nint m_nBombSite = 0x890;
    public const nint m_nSourceSoundscapeHash = 0x894;
    public const nint m_OnBombDefused = 0x898;
    public const nint m_OnBombBeginDefuse = 0x8C0;
    public const nint m_OnBombDefuseAborted = 0x8E8;
    public const nint m_bCannotBeDefused = 0x910;
    public const nint m_entitySpottedState = 0x918;
    public const nint m_nSpotRules = 0x930;
    public const nint m_bTrainingPlacedByPlayer = 0x934;
    public const nint m_bHasExploded = 0x935;
    public const nint m_flTimerLength = 0x938;
    public const nint m_bBeingDefused = 0x93C;
    public const nint m_fLastDefuseTime = 0x944;
    public const nint m_flDefuseLength = 0x94C;
    public const nint m_flDefuseCountDown = 0x950;
    public const nint m_bBombDefused = 0x954;
    public const nint m_hBombDefuser = 0x958;
    public const nint m_hControlPanel = 0x95C;
    public const nint m_iProgressBarTime = 0x960;
    public const nint m_bVoiceAlertFired = 0x964;
    public const nint m_bVoiceAlertPlayed = 0x965;
    public const nint m_flNextBotBeepTime = 0x96C;
    public const nint m_bPlantedAfterPickup = 0x974;
    public const nint m_angCatchUpToPlayerEye = 0x978;
    public const nint m_flLastSpinDetectionTime = 0x984;
}

public static class CPlatTrigger {
    public const nint m_pPlatform = 0x700;
}

public static class CPlayerControllerComponent {
    public const nint __m_pChainEntity = 0x8;
}

public static class CPlayerPawnComponent {
    public const nint __m_pChainEntity = 0x8;
}

public static class CPlayerPing {
    public const nint m_hPlayer = 0x4B8;
    public const nint m_hPingedEntity = 0x4BC;
    public const nint m_iType = 0x4C0;
    public const nint m_bUrgent = 0x4C4;
    public const nint m_szPlaceName = 0x4C5;
}

public static class CPlayerSprayDecal {
    public const nint m_nUniqueID = 0x700;
    public const nint m_unAccountID = 0x704;
    public const nint m_unTraceID = 0x708;
    public const nint m_rtGcTime = 0x70C;
    public const nint m_vecEndPos = 0x710;
    public const nint m_vecStart = 0x71C;
    public const nint m_vecLeft = 0x728;
    public const nint m_vecNormal = 0x734;
    public const nint m_nPlayer = 0x740;
    public const nint m_nEntity = 0x744;
    public const nint m_nHitbox = 0x748;
    public const nint m_flCreationTime = 0x74C;
    public const nint m_nTintID = 0x750;
    public const nint m_nVersion = 0x754;
    public const nint m_ubSignature = 0x755;
}

public static class CPlayerVisibility {
    public const nint m_flVisibilityStrength = 0x4B0;
    public const nint m_flFogDistanceMultiplier = 0x4B4;
    public const nint m_flFogMaxDensityMultiplier = 0x4B8;
    public const nint m_flFadeTime = 0x4BC;
    public const nint m_bStartDisabled = 0x4C0;
    public const nint m_bIsEnabled = 0x4C1;
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
    public const nint m_hTriggerSoundscapeList = 0x158;
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
    public const nint m_iTargetVolume = 0x20C;
    public const nint m_vecSmoothedVelocity = 0x210;
}

public static class CPlayer_ObserverServices {
    public const nint m_iObserverMode = 0x40;
    public const nint m_hObserverTarget = 0x44;
    public const nint m_iObserverLastMode = 0x48;
    public const nint m_bForcedObserverMode = 0x4C;
}

public static class CPlayer_WeaponServices {
    public const nint m_bAllowSwitchToNoWeapon = 0x40;
    public const nint m_hMyWeapons = 0x48;
    public const nint m_hActiveWeapon = 0x60;
    public const nint m_hLastWeapon = 0x64;
    public const nint m_iAmmo = 0x68;
    public const nint m_bPreventWeaponPickup = 0xA8;
}

public static class CPointAngleSensor {
    public const nint m_bDisabled = 0x4B0;
    public const nint m_nLookAtName = 0x4B8;
    public const nint m_hTargetEntity = 0x4C0;
    public const nint m_hLookAtEntity = 0x4C4;
    public const nint m_flDuration = 0x4C8;
    public const nint m_flDotTolerance = 0x4CC;
    public const nint m_flFacingTime = 0x4D0;
    public const nint m_bFired = 0x4D4;
    public const nint m_OnFacingLookat = 0x4D8;
    public const nint m_OnNotFacingLookat = 0x500;
    public const nint m_TargetDir = 0x528;
    public const nint m_FacingPercentage = 0x550;
}

public static class CPointAngularVelocitySensor {
    public const nint m_hTargetEntity = 0x4B0;
    public const nint m_flThreshold = 0x4B4;
    public const nint m_nLastCompareResult = 0x4B8;
    public const nint m_nLastFireResult = 0x4BC;
    public const nint m_flFireTime = 0x4C0;
    public const nint m_flFireInterval = 0x4C4;
    public const nint m_flLastAngVelocity = 0x4C8;
    public const nint m_lastOrientation = 0x4CC;
    public const nint m_vecAxis = 0x4D8;
    public const nint m_bUseHelper = 0x4E4;
    public const nint m_AngularVelocity = 0x4E8;
    public const nint m_OnLessThan = 0x510;
    public const nint m_OnLessThanOrEqualTo = 0x538;
    public const nint m_OnGreaterThan = 0x560;
    public const nint m_OnGreaterThanOrEqualTo = 0x588;
    public const nint m_OnEqualTo = 0x5B0;
}

public static class CPointCamera {
    public const nint m_FOV = 0x4B0;
    public const nint m_Resolution = 0x4B4;
    public const nint m_bFogEnable = 0x4B8;
    public const nint m_FogColor = 0x4B9;
    public const nint m_flFogStart = 0x4C0;
    public const nint m_flFogEnd = 0x4C4;
    public const nint m_flFogMaxDensity = 0x4C8;
    public const nint m_bActive = 0x4CC;
    public const nint m_bUseScreenAspectRatio = 0x4CD;
    public const nint m_flAspectRatio = 0x4D0;
    public const nint m_bNoSky = 0x4D4;
    public const nint m_fBrightness = 0x4D8;
    public const nint m_flZFar = 0x4DC;
    public const nint m_flZNear = 0x4E0;
    public const nint m_bCanHLTVUse = 0x4E4;
    public const nint m_bDofEnabled = 0x4E5;
    public const nint m_flDofNearBlurry = 0x4E8;
    public const nint m_flDofNearCrisp = 0x4EC;
    public const nint m_flDofFarCrisp = 0x4F0;
    public const nint m_flDofFarBlurry = 0x4F4;
    public const nint m_flDofTiltToGround = 0x4F8;
    public const nint m_TargetFOV = 0x4FC;
    public const nint m_DegreesPerSecond = 0x500;
    public const nint m_bIsOn = 0x504;
    public const nint m_pNext = 0x508;
}

public static class CPointCameraVFOV {
    public const nint m_flVerticalFOV = 0x510;
}

public static class CPointClientUIDialog {
    public const nint m_hActivator = 0x8B0;
    public const nint m_bStartEnabled = 0x8B4;
}

public static class CPointClientUIWorldPanel {
    public const nint m_bIgnoreInput = 0x8B0;
    public const nint m_bLit = 0x8B1;
    public const nint m_bFollowPlayerAcrossTeleport = 0x8B2;
    public const nint m_flWidth = 0x8B4;
    public const nint m_flHeight = 0x8B8;
    public const nint m_flDPI = 0x8BC;
    public const nint m_flInteractDistance = 0x8C0;
    public const nint m_flDepthOffset = 0x8C4;
    public const nint m_unOwnerContext = 0x8C8;
    public const nint m_unHorizontalAlign = 0x8CC;
    public const nint m_unVerticalAlign = 0x8D0;
    public const nint m_unOrientation = 0x8D4;
    public const nint m_bAllowInteractionFromAllSceneWorlds = 0x8D8;
    public const nint m_vecCSSClasses = 0x8E0;
    public const nint m_bOpaque = 0x8F8;
    public const nint m_bNoDepth = 0x8F9;
    public const nint m_bRenderBackface = 0x8FA;
    public const nint m_bUseOffScreenIndicator = 0x8FB;
    public const nint m_bExcludeFromSaveGames = 0x8FC;
    public const nint m_bGrabbable = 0x8FD;
    public const nint m_bOnlyRenderToTexture = 0x8FE;
    public const nint m_bDisableMipGen = 0x8FF;
    public const nint m_nExplicitImageLayout = 0x900;
}

public static class CPointClientUIWorldTextPanel {
    public const nint m_messageText = 0x908;
}

public static class CPointCommentaryNode {
    public const nint m_iszPreCommands = 0x888;
    public const nint m_iszPostCommands = 0x890;
    public const nint m_iszCommentaryFile = 0x898;
    public const nint m_iszViewTarget = 0x8A0;
    public const nint m_hViewTarget = 0x8A8;
    public const nint m_hViewTargetAngles = 0x8AC;
    public const nint m_iszViewPosition = 0x8B0;
    public const nint m_hViewPosition = 0x8B8;
    public const nint m_hViewPositionMover = 0x8BC;
    public const nint m_bPreventMovement = 0x8C0;
    public const nint m_bUnderCrosshair = 0x8C1;
    public const nint m_bUnstoppable = 0x8C2;
    public const nint m_flFinishedTime = 0x8C4;
    public const nint m_vecFinishOrigin = 0x8C8;
    public const nint m_vecOriginalAngles = 0x8D4;
    public const nint m_vecFinishAngles = 0x8E0;
    public const nint m_bPreventChangesWhileMoving = 0x8EC;
    public const nint m_bDisabled = 0x8ED;
    public const nint m_vecTeleportOrigin = 0x8F0;
    public const nint m_flAbortedPlaybackAt = 0x8FC;
    public const nint m_pOnCommentaryStarted = 0x900;
    public const nint m_pOnCommentaryStopped = 0x928;
    public const nint m_bActive = 0x950;
    public const nint m_flStartTime = 0x954;
    public const nint m_flStartTimeInCommentary = 0x958;
    public const nint m_iszTitle = 0x960;
    public const nint m_iszSpeakers = 0x968;
    public const nint m_iNodeNumber = 0x970;
    public const nint m_iNodeNumberMax = 0x974;
    public const nint m_bListenedTo = 0x978;
}

public static class CPointDZDroneGunSpawn {
    public const nint m_bSpawnAutomatically = 0x4B8;
}

public static class CPointDZItemSpawnGroup {
    public const nint m_flRadius = 0x4B0;
}

public static class CPointDZParadropDenialRegion {
    public const nint m_flRadius = 0x4B8;
}

public static class CPointDZWeaponSpawn {
    public const nint m_nGroupID = 0x4C0;
    public const nint m_flDefaultWeight = 0x4C4;
    public const nint m_flCurrentWeight = 0x4C8;
    public const nint m_hItem = 0x4CC;
    public const nint m_iszDoorName = 0x4D0;
    public const nint m_hDoor = 0x4D8;
    public const nint m_nPrice = 0x4DC;
}

public static class CPointEntityFinder {
    public const nint m_hEntity = 0x4B0;
    public const nint m_iFilterName = 0x4B8;
    public const nint m_hFilter = 0x4C0;
    public const nint m_iRefName = 0x4C8;
    public const nint m_hReference = 0x4D0;
    public const nint m_FindMethod = 0x4D4;
    public const nint m_OnFoundEntity = 0x4D8;
}

public static class CPointGamestatsCounter {
    public const nint m_strStatisticName = 0x4B0;
    public const nint m_bDisabled = 0x4B8;
}

public static class CPointGiveAmmo {
    public const nint m_pActivator = 0x4B0;
}

public static class CPointHurt {
    public const nint m_nDamage = 0x4B0;
    public const nint m_bitsDamageType = 0x4B4;
    public const nint m_flRadius = 0x4B8;
    public const nint m_flDelay = 0x4BC;
    public const nint m_strTarget = 0x4C0;
    public const nint m_pActivator = 0x4C8;
}

public static class CPointPrefab {
    public const nint m_targetMapName = 0x4B0;
    public const nint m_forceWorldGroupID = 0x4B8;
    public const nint m_fixupNames = 0x4C0;
    public const nint m_bLoadDynamic = 0x4C1;
}

public static class CPointProximitySensor {
    public const nint m_bDisabled = 0x4B0;
    public const nint m_hTargetEntity = 0x4B4;
    public const nint m_Distance = 0x4B8;
}

public static class CPointPulse {
    public const nint m_sNameFixupStaticPrefix = 0x5C8;
    public const nint m_sNameFixupParent = 0x5D0;
    public const nint m_sNameFixupLocal = 0x5D8;
}

public static class CPointPush {
    public const nint m_bEnabled = 0x4B0;
    public const nint m_flMagnitude = 0x4B4;
    public const nint m_flRadius = 0x4B8;
    public const nint m_flInnerRadius = 0x4BC;
    public const nint m_flConeOfInfluence = 0x4C0;
    public const nint m_iszFilterName = 0x4C8;
    public const nint m_hFilter = 0x4D0;
}

public static class CPointTeleport {
    public const nint m_vSaveOrigin = 0x4B0;
    public const nint m_vSaveAngles = 0x4BC;
    public const nint m_bTeleportParentedEntities = 0x4C8;
    public const nint m_bTeleportUseCurrentAngle = 0x4C9;
}

public static class CPointTemplate {
    public const nint m_iszWorldName = 0x4B0;
    public const nint m_iszSource2EntityLumpName = 0x4B8;
    public const nint m_iszEntityFilterName = 0x4C0;
    public const nint m_flTimeoutInterval = 0x4C8;
    public const nint m_bAsynchronouslySpawnEntities = 0x4CC;
    public const nint m_pOutputOnSpawned = 0x4D0;
    public const nint m_clientOnlyEntityBehavior = 0x4F8;
    public const nint m_ownerSpawnGroupType = 0x4FC;
    public const nint m_createdSpawnGroupHandles = 0x500;
    public const nint m_SpawnedEntityHandles = 0x518;
    public const nint m_ScriptSpawnCallback = 0x530;
    public const nint m_ScriptCallbackScope = 0x538;
}

public static class CPointValueRemapper {
    public const nint m_bDisabled = 0x4B0;
    public const nint m_bUpdateOnClient = 0x4B1;
    public const nint m_nInputType = 0x4B4;
    public const nint m_iszRemapLineStartName = 0x4B8;
    public const nint m_iszRemapLineEndName = 0x4C0;
    public const nint m_hRemapLineStart = 0x4C8;
    public const nint m_hRemapLineEnd = 0x4CC;
    public const nint m_flMaximumChangePerSecond = 0x4D0;
    public const nint m_flDisengageDistance = 0x4D4;
    public const nint m_flEngageDistance = 0x4D8;
    public const nint m_bRequiresUseKey = 0x4DC;
    public const nint m_nOutputType = 0x4E0;
    public const nint m_iszOutputEntityName = 0x4E8;
    public const nint m_iszOutputEntity2Name = 0x4F0;
    public const nint m_iszOutputEntity3Name = 0x4F8;
    public const nint m_iszOutputEntity4Name = 0x500;
    public const nint m_hOutputEntities = 0x508;
    public const nint m_nHapticsType = 0x520;
    public const nint m_nMomentumType = 0x524;
    public const nint m_flMomentumModifier = 0x528;
    public const nint m_flSnapValue = 0x52C;
    public const nint m_flCurrentMomentum = 0x530;
    public const nint m_nRatchetType = 0x534;
    public const nint m_flRatchetOffset = 0x538;
    public const nint m_flInputOffset = 0x53C;
    public const nint m_bEngaged = 0x540;
    public const nint m_bFirstUpdate = 0x541;
    public const nint m_flPreviousValue = 0x544;
    public const nint m_flPreviousUpdateTickTime = 0x548;
    public const nint m_vecPreviousTestPoint = 0x54C;
    public const nint m_hUsingPlayer = 0x558;
    public const nint m_flCustomOutputValue = 0x55C;
    public const nint m_iszSoundEngage = 0x560;
    public const nint m_iszSoundDisengage = 0x568;
    public const nint m_iszSoundReachedValueZero = 0x570;
    public const nint m_iszSoundReachedValueOne = 0x578;
    public const nint m_iszSoundMovingLoop = 0x580;
    public const nint m_Position = 0x590;
    public const nint m_PositionDelta = 0x5B8;
    public const nint m_OnReachedValueZero = 0x5E0;
    public const nint m_OnReachedValueOne = 0x608;
    public const nint m_OnReachedValueCustom = 0x630;
    public const nint m_OnEngage = 0x658;
    public const nint m_OnDisengage = 0x680;
}

public static class CPointVelocitySensor {
    public const nint m_hTargetEntity = 0x4B0;
    public const nint m_vecAxis = 0x4B4;
    public const nint m_bEnabled = 0x4C0;
    public const nint m_fPrevVelocity = 0x4C4;
    public const nint m_flAvgInterval = 0x4C8;
    public const nint m_Velocity = 0x4D0;
}

public static class CPointWorldText {
    public const nint m_messageText = 0x700;
    public const nint m_FontName = 0x900;
    public const nint m_bEnabled = 0x940;
    public const nint m_bFullbright = 0x941;
    public const nint m_flWorldUnitsPerPx = 0x944;
    public const nint m_flFontSize = 0x948;
    public const nint m_flDepthOffset = 0x94C;
    public const nint m_Color = 0x950;
    public const nint m_nJustifyHorizontal = 0x954;
    public const nint m_nJustifyVertical = 0x958;
    public const nint m_nReorientMode = 0x95C;
}

public static class CPostProcessingVolume {
    public const nint m_hPostSettings = 0x8B8;
    public const nint m_flFadeDuration = 0x8C0;
    public const nint m_flMinLogExposure = 0x8C4;
    public const nint m_flMaxLogExposure = 0x8C8;
    public const nint m_flMinExposure = 0x8CC;
    public const nint m_flMaxExposure = 0x8D0;
    public const nint m_flExposureCompensation = 0x8D4;
    public const nint m_flExposureFadeSpeedUp = 0x8D8;
    public const nint m_flExposureFadeSpeedDown = 0x8DC;
    public const nint m_flTonemapEVSmoothingRange = 0x8E0;
    public const nint m_bMaster = 0x8E4;
    public const nint m_bExposureControl = 0x8E5;
    public const nint m_flRate = 0x8E8;
    public const nint m_flTonemapPercentTarget = 0x8EC;
    public const nint m_flTonemapPercentBrightPixels = 0x8F0;
    public const nint m_flTonemapMinAvgLum = 0x8F4;
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

public static class CProjectedDecal {
    public const nint m_nTexture = 0x4B0;
    public const nint m_flDistance = 0x4B4;
}

public static class CPropCounter {
    public const nint m_flDisplayValue = 0x888;
    public const nint m_nInitialValue = 0x88C;
}

public static class CPropDoorRotating {
    public const nint m_vecAxis = 0xD90;
    public const nint m_flDistance = 0xD9C;
    public const nint m_eSpawnPosition = 0xDA0;
    public const nint m_eOpenDirection = 0xDA4;
    public const nint m_eCurrentOpenDirection = 0xDA8;
    public const nint m_flAjarAngle = 0xDAC;
    public const nint m_angRotationAjarDeprecated = 0xDB0;
    public const nint m_angRotationClosed = 0xDBC;
    public const nint m_angRotationOpenForward = 0xDC8;
    public const nint m_angRotationOpenBack = 0xDD4;
    public const nint m_angGoal = 0xDE0;
    public const nint m_vecForwardBoundsMin = 0xDEC;
    public const nint m_vecForwardBoundsMax = 0xDF8;
    public const nint m_vecBackBoundsMin = 0xE04;
    public const nint m_vecBackBoundsMax = 0xE10;
    public const nint m_bAjarDoorShouldntAlwaysOpen = 0xE1C;
    public const nint m_hEntityBlocker = 0xE20;
}

public static class CPropDoorRotatingBreakable {
    public const nint m_bBreakable = 0xE28;
    public const nint m_isAbleToCloseAreaPortals = 0xE29;
    public const nint m_currentDamageState = 0xE2C;
    public const nint m_damageStates = 0xE30;
}

public static class CPulseCell_Inflow_GameEvent {
    public const nint m_EventName = 0x70;
}

public static class CPulseCell_Outflow_PlayVCD {
    public const nint m_vcdFilename = 0x48;
    public const nint m_OnFinished = 0x50;
    public const nint m_Triggers = 0x60;
}

public static class CPulseCell_SoundEventStart {
    public const nint m_Type = 0x48;
}

public static class CPulseCell_Step_EntFire {
    public const nint m_Input = 0x48;
}

public static class CPulseCell_Step_SetAnimGraphParam {
    public const nint m_ParamName = 0x48;
}

public static class CPulseCell_Value_FindEntByName {
    public const nint m_EntityType = 0x48;
}

public static class CRR_Response {
    public const nint m_Type = 0x0;
    public const nint m_szResponseName = 0x1;
    public const nint m_szMatchingRule = 0xC1;
    public const nint m_Params = 0x148;
    public const nint m_fMatchScore = 0x168;
    public const nint m_szSpeakerContext = 0x170;
    public const nint m_szWorldContext = 0x178;
    public const nint m_Followup = 0x180;
    public const nint m_pchCriteriaNames = 0x1B8;
    public const nint m_pchCriteriaValues = 0x1D0;
}

public static class CRagdollConstraint {
    public const nint m_xmin = 0x508;
    public const nint m_xmax = 0x50C;
    public const nint m_ymin = 0x510;
    public const nint m_ymax = 0x514;
    public const nint m_zmin = 0x518;
    public const nint m_zmax = 0x51C;
    public const nint m_xfriction = 0x520;
    public const nint m_yfriction = 0x524;
    public const nint m_zfriction = 0x528;
}

public static class CRagdollMagnet {
    public const nint m_bDisabled = 0x4B0;
    public const nint m_radius = 0x4B4;
    public const nint m_force = 0x4B8;
    public const nint m_axis = 0x4BC;
}

public static class CRagdollManager {
    public const nint m_iCurrentMaxRagdollCount = 0x4B0;
    public const nint m_iMaxRagdollCount = 0x4B4;
    public const nint m_bSaveImportant = 0x4B8;
}

public static class CRagdollProp {
    public const nint m_ragdoll = 0x890;
    public const nint m_bStartDisabled = 0x8C8;
    public const nint m_ragPos = 0x8D0;
    public const nint m_ragAngles = 0x8E8;
    public const nint m_hRagdollSource = 0x900;
    public const nint m_lastUpdateTickCount = 0x904;
    public const nint m_allAsleep = 0x908;
    public const nint m_bFirstCollisionAfterLaunch = 0x909;
    public const nint m_hDamageEntity = 0x90C;
    public const nint m_hKiller = 0x910;
    public const nint m_hPhysicsAttacker = 0x914;
    public const nint m_flLastPhysicsInfluenceTime = 0x918;
    public const nint m_flFadeOutStartTime = 0x91C;
    public const nint m_flFadeTime = 0x920;
    public const nint m_vecLastOrigin = 0x924;
    public const nint m_flAwakeTime = 0x930;
    public const nint m_flLastOriginChangeTime = 0x934;
    public const nint m_nBloodColor = 0x938;
    public const nint m_strOriginClassName = 0x940;
    public const nint m_strSourceClassName = 0x948;
    public const nint m_bHasBeenPhysgunned = 0x950;
    public const nint m_bShouldTeleportPhysics = 0x951;
    public const nint m_flBlendWeight = 0x954;
    public const nint m_flDefaultFadeScale = 0x958;
    public const nint m_ragdollMins = 0x960;
    public const nint m_ragdollMaxs = 0x978;
    public const nint m_bShouldDeleteActivationRecord = 0x990;
    public const nint m_bValidatePoweredRagdollPose = 0x9F0;
}

public static class CRagdollPropAttached {
    public const nint m_boneIndexAttached = 0xA30;
    public const nint m_ragdollAttachedObjectIndex = 0xA34;
    public const nint m_attachmentPointBoneSpace = 0xA38;
    public const nint m_attachmentPointRagdollSpace = 0xA44;
    public const nint m_bShouldDetach = 0xA50;
    public const nint m_bShouldDeleteAttachedActivationRecord = 0xA60;
}

public static class CRandSimTimer {
    public const nint m_minInterval = 0x8;
    public const nint m_maxInterval = 0xC;
}

public static class CRandStopwatch {
    public const nint m_minInterval = 0xC;
    public const nint m_maxInterval = 0x10;
}

public static class CRangeFloat {
    public const nint m_pValue = 0x0;
}

public static class CRangeInt {
    public const nint m_pValue = 0x0;
}

public static class CRectLight {
    public const nint m_bShowLight = 0x938;
}

public static class CRemapFloat {
    public const nint m_pValue = 0x0;
}

public static class CRenderComponent {
    public const nint __m_pChainEntity = 0x10;
    public const nint m_bIsRenderingWithViewModels = 0x50;
    public const nint m_nSplitscreenFlags = 0x54;
    public const nint m_bEnableRendering = 0x60;
    public const nint m_bInterpolationReadyToDraw = 0xB0;
}

public static class CResponseCriteriaSet {
    public const nint m_nNumPrefixedContexts = 0x28;
    public const nint m_bOverrideOnAppend = 0x2C;
}

public static class CResponseQueue {
    public const nint m_ExpresserTargets = 0x50;
}

public static class CResponseQueue_CDeferredResponse {
    public const nint m_contexts = 0x10;
    public const nint m_fDispatchTime = 0x40;
    public const nint m_hIssuer = 0x44;
    public const nint m_response = 0x50;
    public const nint m_bResponseValid = 0x238;
}

public static class CRetakeGameRules {
    public const nint m_nMatchSeed = 0xF8;
    public const nint m_bBlockersPresent = 0xFC;
    public const nint m_bRoundInProgress = 0xFD;
    public const nint m_iFirstSecondHalfRound = 0x100;
    public const nint m_iBombSite = 0x104;
}

public static class CRevertSaved {
    public const nint m_loadTime = 0x700;
    public const nint m_Duration = 0x704;
    public const nint m_HoldTime = 0x708;
}

public static class CRopeKeyframe {
    public const nint m_RopeFlags = 0x708;
    public const nint m_iNextLinkName = 0x710;
    public const nint m_Slack = 0x718;
    public const nint m_Width = 0x71C;
    public const nint m_TextureScale = 0x720;
    public const nint m_nSegments = 0x724;
    public const nint m_bConstrainBetweenEndpoints = 0x725;
    public const nint m_strRopeMaterialModel = 0x728;
    public const nint m_iRopeMaterialModelIndex = 0x730;
    public const nint m_Subdiv = 0x738;
    public const nint m_nChangeCount = 0x739;
    public const nint m_RopeLength = 0x73A;
    public const nint m_fLockedPoints = 0x73C;
    public const nint m_bCreatedFromMapFile = 0x73D;
    public const nint m_flScrollSpeed = 0x740;
    public const nint m_bStartPointValid = 0x744;
    public const nint m_bEndPointValid = 0x745;
    public const nint m_hStartPoint = 0x748;
    public const nint m_hEndPoint = 0x74C;
    public const nint m_iStartAttachment = 0x750;
    public const nint m_iEndAttachment = 0x751;
}

public static class CRotDoor {
    public const nint m_bSolidBsp = 0x988;
}

public static class CRuleEntity {
    public const nint m_iszMaster = 0x700;
}

public static class CRulePointEntity {
    public const nint m_Score = 0x708;
}

public static class CSAdditionalMatchStats_t {
    public const nint m_numRoundsSurvived = 0x14;
    public const nint m_maxNumRoundsSurvived = 0x18;
    public const nint m_numRoundsSurvivedTotal = 0x1C;
    public const nint m_iRoundsWonWithoutPurchase = 0x20;
    public const nint m_iRoundsWonWithoutPurchaseTotal = 0x24;
    public const nint m_numFirstKills = 0x28;
    public const nint m_numClutchKills = 0x2C;
    public const nint m_numPistolKills = 0x30;
    public const nint m_numSniperKills = 0x34;
}

public static class CSAdditionalPerRoundStats_t {
    public const nint m_numChickensKilled = 0x0;
    public const nint m_killsWhileBlind = 0x4;
    public const nint m_bombCarrierkills = 0x8;
    public const nint m_iBurnDamageInflicted = 0xC;
    public const nint m_iDinks = 0x10;
}

public static class CSMatchStats_t {
    public const nint m_iEnemy5Ks = 0x68;
    public const nint m_iEnemy4Ks = 0x6C;
    public const nint m_iEnemy3Ks = 0x70;
    public const nint m_iEnemy2Ks = 0x74;
    public const nint m_iUtility_Count = 0x78;
    public const nint m_iUtility_Successes = 0x7C;
    public const nint m_iUtility_Enemies = 0x80;
    public const nint m_iFlash_Count = 0x84;
    public const nint m_iFlash_Successes = 0x88;
    public const nint m_nHealthPointsRemovedTotal = 0x8C;
    public const nint m_nHealthPointsDealtTotal = 0x90;
    public const nint m_nShotsFiredTotal = 0x94;
    public const nint m_nShotsOnTargetTotal = 0x98;
    public const nint m_i1v1Count = 0x9C;
    public const nint m_i1v1Wins = 0xA0;
    public const nint m_i1v2Count = 0xA4;
    public const nint m_i1v2Wins = 0xA8;
    public const nint m_iEntryCount = 0xAC;
    public const nint m_iEntryWins = 0xB0;
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

public static class CSceneEntity {
    public const nint m_iszSceneFile = 0x4B8;
    public const nint m_iszResumeSceneFile = 0x4C0;
    public const nint m_iszTarget1 = 0x4C8;
    public const nint m_iszTarget2 = 0x4D0;
    public const nint m_iszTarget3 = 0x4D8;
    public const nint m_iszTarget4 = 0x4E0;
    public const nint m_iszTarget5 = 0x4E8;
    public const nint m_iszTarget6 = 0x4F0;
    public const nint m_iszTarget7 = 0x4F8;
    public const nint m_iszTarget8 = 0x500;
    public const nint m_hTarget1 = 0x508;
    public const nint m_hTarget2 = 0x50C;
    public const nint m_hTarget3 = 0x510;
    public const nint m_hTarget4 = 0x514;
    public const nint m_hTarget5 = 0x518;
    public const nint m_hTarget6 = 0x51C;
    public const nint m_hTarget7 = 0x520;
    public const nint m_hTarget8 = 0x524;
    public const nint m_bIsPlayingBack = 0x528;
    public const nint m_bPaused = 0x529;
    public const nint m_bMultiplayer = 0x52A;
    public const nint m_bAutogenerated = 0x52B;
    public const nint m_flForceClientTime = 0x52C;
    public const nint m_flCurrentTime = 0x530;
    public const nint m_flFrameTime = 0x534;
    public const nint m_bCancelAtNextInterrupt = 0x538;
    public const nint m_fPitch = 0x53C;
    public const nint m_bAutomated = 0x540;
    public const nint m_nAutomatedAction = 0x544;
    public const nint m_flAutomationDelay = 0x548;
    public const nint m_flAutomationTime = 0x54C;
    public const nint m_hWaitingForThisResumeScene = 0x550;
    public const nint m_bWaitingForResumeScene = 0x554;
    public const nint m_bPausedViaInput = 0x555;
    public const nint m_bPauseAtNextInterrupt = 0x556;
    public const nint m_bWaitingForActor = 0x557;
    public const nint m_bWaitingForInterrupt = 0x558;
    public const nint m_bInterruptedActorsScenes = 0x559;
    public const nint m_bBreakOnNonIdle = 0x55A;
    public const nint m_hActorList = 0x560;
    public const nint m_hRemoveActorList = 0x578;
    public const nint m_nSceneFlushCounter = 0x5A0;
    public const nint m_nSceneStringIndex = 0x5A4;
    public const nint m_OnStart = 0x5A8;
    public const nint m_OnCompletion = 0x5D0;
    public const nint m_OnCanceled = 0x5F8;
    public const nint m_OnPaused = 0x620;
    public const nint m_OnResumed = 0x648;
    public const nint m_OnTrigger = 0x670;
    public const nint m_hInterruptScene = 0x980;
    public const nint m_nInterruptCount = 0x984;
    public const nint m_bSceneMissing = 0x988;
    public const nint m_bInterrupted = 0x989;
    public const nint m_bCompletedEarly = 0x98A;
    public const nint m_bInterruptSceneFinished = 0x98B;
    public const nint m_bRestoring = 0x98C;
    public const nint m_hNotifySceneCompletion = 0x990;
    public const nint m_hListManagers = 0x9A8;
    public const nint m_iszSoundName = 0x9E8;
    public const nint m_hActor = 0x9F0;
    public const nint m_hActivator = 0x9F4;
    public const nint m_BusyActor = 0x9F8;
    public const nint m_iPlayerDeathBehavior = 0x9FC;
}

public static class CSceneEventInfo {
    public const nint m_iLayer = 0x0;
    public const nint m_iPriority = 0x4;
    public const nint m_hSequence = 0x8;
    public const nint m_flWeight = 0xC;
    public const nint m_bIsMoving = 0x10;
    public const nint m_bHasArrived = 0x11;
    public const nint m_flInitialYaw = 0x14;
    public const nint m_flTargetYaw = 0x18;
    public const nint m_flFacingYaw = 0x1C;
    public const nint m_nType = 0x20;
    public const nint m_flNext = 0x24;
    public const nint m_bIsGesture = 0x28;
    public const nint m_bShouldRemove = 0x29;
    public const nint m_hTarget = 0x54;
    public const nint m_nSceneEventId = 0x58;
    public const nint m_bClientSide = 0x5C;
    public const nint m_bStarted = 0x5D;
}

public static class CSceneListManager {
    public const nint m_hListManagers = 0x4B0;
    public const nint m_iszScenes = 0x4C8;
    public const nint m_hScenes = 0x548;
}

public static class CScriptComponent {
    public const nint m_scriptClassName = 0x30;
}

public static class CScriptItem {
    public const nint m_OnPlayerPickup = 0x960;
    public const nint m_MoveTypeOverride = 0x988;
}

public static class CScriptNavBlocker {
    public const nint m_vExtent = 0x710;
}

public static class CScriptTriggerHurt {
    public const nint m_vExtent = 0x948;
}

public static class CScriptTriggerMultiple {
    public const nint m_vExtent = 0x8D0;
}

public static class CScriptTriggerOnce {
    public const nint m_vExtent = 0x8D0;
}

public static class CScriptTriggerPush {
    public const nint m_vExtent = 0x8D0;
}

public static class CScriptUniformRandomStream {
    public const nint m_hScriptScope = 0x8;
    public const nint m_nInitialSeed = 0x9C;
}

public static class CScriptedSequence {
    public const nint m_iszEntry = 0x4B0;
    public const nint m_iszPreIdle = 0x4B8;
    public const nint m_iszPlay = 0x4C0;
    public const nint m_iszPostIdle = 0x4C8;
    public const nint m_iszModifierToAddOnPlay = 0x4D0;
    public const nint m_iszNextScript = 0x4D8;
    public const nint m_iszEntity = 0x4E0;
    public const nint m_iszSyncGroup = 0x4E8;
    public const nint m_nMoveTo = 0x4F0;
    public const nint m_bIsPlayingPreIdle = 0x4F4;
    public const nint m_bIsPlayingEntry = 0x4F5;
    public const nint m_bIsPlayingAction = 0x4F6;
    public const nint m_bIsPlayingPostIdle = 0x4F7;
    public const nint m_bLoopPreIdleSequence = 0x4F8;
    public const nint m_bLoopActionSequence = 0x4F9;
    public const nint m_bLoopPostIdleSequence = 0x4FA;
    public const nint m_bSynchPostIdles = 0x4FB;
    public const nint m_bIgnoreGravity = 0x4FC;
    public const nint m_bDisableNPCCollisions = 0x4FD;
    public const nint m_bKeepAnimgraphLockedPost = 0x4FE;
    public const nint m_bDontAddModifiers = 0x4FF;
    public const nint m_flRadius = 0x500;
    public const nint m_flRepeat = 0x504;
    public const nint m_flPlayAnimFadeInTime = 0x508;
    public const nint m_flMoveInterpTime = 0x50C;
    public const nint m_flAngRate = 0x510;
    public const nint m_iDelay = 0x514;
    public const nint m_startTime = 0x518;
    public const nint m_bWaitForBeginSequence = 0x51C;
    public const nint m_saved_effects = 0x520;
    public const nint m_savedFlags = 0x524;
    public const nint m_savedCollisionGroup = 0x528;
    public const nint m_interruptable = 0x52C;
    public const nint m_sequenceStarted = 0x52D;
    public const nint m_bPrevAnimatedEveryTick = 0x52E;
    public const nint m_bForcedAnimatedEveryTick = 0x52F;
    public const nint m_bPositionRelativeToOtherEntity = 0x530;
    public const nint m_hTargetEnt = 0x534;
    public const nint m_hNextCine = 0x538;
    public const nint m_bThinking = 0x53C;
    public const nint m_bInitiatedSelfDelete = 0x53D;
    public const nint m_bIsTeleportingDueToMoveTo = 0x53E;
    public const nint m_bAllowCustomInterruptConditions = 0x53F;
    public const nint m_hLastFoundEntity = 0x540;
    public const nint m_hForcedTarget = 0x544;
    public const nint m_bDontCancelOtherSequences = 0x548;
    public const nint m_bForceSynch = 0x549;
    public const nint m_bTargetWasAsleep = 0x54A;
    public const nint m_bPreventUpdateYawOnFinish = 0x54B;
    public const nint m_bEnsureOnNavmeshOnFinish = 0x54C;
    public const nint m_onDeathBehavior = 0x550;
    public const nint m_ConflictResponse = 0x554;
    public const nint m_OnBeginSequence = 0x558;
    public const nint m_OnActionStartOrLoop = 0x580;
    public const nint m_OnEndSequence = 0x5A8;
    public const nint m_OnPostIdleEndSequence = 0x5D0;
    public const nint m_OnCancelSequence = 0x5F8;
    public const nint m_OnCancelFailedSequence = 0x620;
    public const nint m_OnScriptEvent = 0x648;
    public const nint m_matOtherToMain = 0x790;
    public const nint m_hInteractionMainEntity = 0x7B0;
    public const nint m_iPlayerDeathBehavior = 0x7B4;
}

public static class CSensorGrenadeProjectile {
    public const nint m_fExpireTime = 0xA20;
    public const nint m_fNextDetectPlayerSound = 0xA24;
    public const nint m_hDisplayGrenade = 0xA28;
}

public static class CShatterGlassShard {
    public const nint m_hShardHandle = 0x8;
    public const nint m_vecPanelVertices = 0x10;
    public const nint m_vLocalPanelSpaceOrigin = 0x28;
    public const nint m_hModel = 0x30;
    public const nint m_hPhysicsEntity = 0x38;
    public const nint m_hParentPanel = 0x3C;
    public const nint m_hParentShard = 0x40;
    public const nint m_ShatterStressType = 0x44;
    public const nint m_vecStressVelocity = 0x48;
    public const nint m_bCreatedModel = 0x54;
    public const nint m_flLongestEdge = 0x58;
    public const nint m_flShortestEdge = 0x5C;
    public const nint m_flLongestAcross = 0x60;
    public const nint m_flShortestAcross = 0x64;
    public const nint m_flSumOfAllEdges = 0x68;
    public const nint m_flArea = 0x6C;
    public const nint m_nOnFrameEdge = 0x70;
    public const nint m_nParentPanelsNthShard = 0x74;
    public const nint m_nSubShardGeneration = 0x78;
    public const nint m_vecAverageVertPosition = 0x7C;
    public const nint m_bAverageVertPositionIsValid = 0x84;
    public const nint m_vecPanelSpaceStressPositionA = 0x88;
    public const nint m_vecPanelSpaceStressPositionB = 0x90;
    public const nint m_bStressPositionAIsValid = 0x98;
    public const nint m_bStressPositionBIsValid = 0x99;
    public const nint m_bFlaggedForRemoval = 0x9A;
    public const nint m_flPhysicsEntitySpawnedAtTime = 0x9C;
    public const nint m_bShatterRateLimited = 0xA0;
    public const nint m_hEntityHittingMe = 0xA4;
    public const nint m_vecNeighbors = 0xA8;
}

public static class CShatterGlassShardPhysics {
    public const nint m_bDebris = 0xB70;
    public const nint m_hParentShard = 0xB74;
    public const nint m_ShardDesc = 0xB78;
}

public static class CSimTimer {
    public const nint m_interval = 0x8;
}

public static class CSimpleSimTimer {
    public const nint m_next = 0x0;
    public const nint m_nWorldGroupId = 0x4;
}

public static class CSingleplayRules {
    public const nint m_bSinglePlayerGameEnding = 0x90;
}

public static class CSkeletonAnimationController {
    public const nint m_pSkeletonInstance = 0x8;
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

public static class CSkillDamage {
    public const nint m_flDamage = 0x0;
    public const nint m_flPhysicsForceDamage = 0x10;
}

public static class CSkillFloat {
    public const nint m_pValue = 0x0;
}

public static class CSkillInt {
    public const nint m_pValue = 0x0;
}

public static class CSkyCamera {
    public const nint m_skyboxData = 0x4B0;
    public const nint m_skyboxSlotToken = 0x540;
    public const nint m_bUseAngles = 0x544;
    public const nint m_pNext = 0x548;
}

public static class CSkyboxReference {
    public const nint m_worldGroupId = 0x4B0;
    public const nint m_hSkyCamera = 0x4B4;
}

public static class CSmokeGrenadeProjectile {
    public const nint m_nSmokeEffectTickBegin = 0xA38;
    public const nint m_bDidSmokeEffect = 0xA3C;
    public const nint m_nRandomSeed = 0xA40;
    public const nint m_vSmokeColor = 0xA44;
    public const nint m_vSmokeDetonationPos = 0xA50;
    public const nint m_VoxelFrameData = 0xA60;
    public const nint m_flLastBounce = 0xA78;
    public const nint m_fllastSimulationTime = 0xA7C;
}

public static class CSmoothFunc {
    public const nint m_flSmoothAmplitude = 0x8;
    public const nint m_flSmoothBias = 0xC;
    public const nint m_flSmoothDuration = 0x10;
    public const nint m_flSmoothRemainingTime = 0x14;
    public const nint m_nSmoothDir = 0x18;
}

public static class CSound {
    public const nint m_hOwner = 0x0;
    public const nint m_hTarget = 0x4;
    public const nint m_iVolume = 0x8;
    public const nint m_flOcclusionScale = 0xC;
    public const nint m_iType = 0x10;
    public const nint m_iNextAudible = 0x14;
    public const nint m_flExpireTime = 0x18;
    public const nint m_iNext = 0x1C;
    public const nint m_bNoExpirationTime = 0x1E;
    public const nint m_ownerChannelIndex = 0x20;
    public const nint m_vecOrigin = 0x24;
    public const nint m_bHasOwner = 0x30;
}

public static class CSoundAreaEntityBase {
    public const nint m_bDisabled = 0x4B0;
    public const nint m_iszSoundAreaType = 0x4B8;
    public const nint m_vPos = 0x4C0;
}

public static class CSoundAreaEntityOrientedBox {
    public const nint m_vMin = 0x4D0;
    public const nint m_vMax = 0x4DC;
}

public static class CSoundAreaEntitySphere {
    public const nint m_flRadius = 0x4D0;
}

public static class CSoundEnt {
    public const nint m_iFreeSound = 0x4B0;
    public const nint m_iActiveSound = 0x4B4;
    public const nint m_cLastActiveSounds = 0x4B8;
    public const nint m_SoundPool = 0x4BC;
}

public static class CSoundEnvelope {
    public const nint m_current = 0x0;
    public const nint m_target = 0x4;
    public const nint m_rate = 0x8;
    public const nint m_forceupdate = 0xC;
}

public static class CSoundEventAABBEntity {
    public const nint m_vMins = 0x558;
    public const nint m_vMaxs = 0x564;
}

public static class CSoundEventEntity {
    public const nint m_bStartOnSpawn = 0x4B0;
    public const nint m_bToLocalPlayer = 0x4B1;
    public const nint m_bStopOnNew = 0x4B2;
    public const nint m_bSaveRestore = 0x4B3;
    public const nint m_bSavedIsPlaying = 0x4B4;
    public const nint m_flSavedElapsedTime = 0x4B8;
    public const nint m_iszSourceEntityName = 0x4C0;
    public const nint m_iszAttachmentName = 0x4C8;
    public const nint m_onGUIDChanged = 0x4D0;
    public const nint m_onSoundFinished = 0x4F8;
    public const nint m_iszSoundName = 0x540;
    public const nint m_hSource = 0x550;
}

public static class CSoundEventOBBEntity {
    public const nint m_vMins = 0x558;
    public const nint m_vMaxs = 0x564;
}

public static class CSoundEventParameter {
    public const nint m_iszParamName = 0x4B8;
    public const nint m_flFloatValue = 0x4C0;
}

public static class CSoundEventPathCornerEntity {
    public const nint m_iszPathCorner = 0x558;
    public const nint m_iCountMax = 0x560;
    public const nint m_flDistanceMax = 0x564;
    public const nint m_flDistMaxSqr = 0x568;
    public const nint m_flDotProductMax = 0x56C;
    public const nint bPlaying = 0x570;
}

public static class CSoundOpvarSetAABBEntity {
    public const nint m_vDistanceInnerMins = 0x648;
    public const nint m_vDistanceInnerMaxs = 0x654;
    public const nint m_vDistanceOuterMins = 0x660;
    public const nint m_vDistanceOuterMaxs = 0x66C;
    public const nint m_nAABBDirection = 0x678;
    public const nint m_vInnerMins = 0x67C;
    public const nint m_vInnerMaxs = 0x688;
    public const nint m_vOuterMins = 0x694;
    public const nint m_vOuterMaxs = 0x6A0;
}

public static class CSoundOpvarSetEntity {
    public const nint m_iszStackName = 0x4B8;
    public const nint m_iszOperatorName = 0x4C0;
    public const nint m_iszOpvarName = 0x4C8;
    public const nint m_nOpvarType = 0x4D0;
    public const nint m_nOpvarIndex = 0x4D4;
    public const nint m_flOpvarValue = 0x4D8;
    public const nint m_OpvarValueString = 0x4E0;
    public const nint m_bSetOnSpawn = 0x4E8;
}

public static class CSoundOpvarSetOBBWindEntity {
    public const nint m_vMins = 0x548;
    public const nint m_vMaxs = 0x554;
    public const nint m_vDistanceMins = 0x560;
    public const nint m_vDistanceMaxs = 0x56C;
    public const nint m_flWindMin = 0x578;
    public const nint m_flWindMax = 0x57C;
    public const nint m_flWindMapMin = 0x580;
    public const nint m_flWindMapMax = 0x584;
}

public static class CSoundOpvarSetPathCornerEntity {
    public const nint m_flDistMinSqr = 0x660;
    public const nint m_flDistMaxSqr = 0x664;
    public const nint m_iszPathCornerEntityName = 0x668;
}

public static class CSoundOpvarSetPointBase {
    public const nint m_bDisabled = 0x4B0;
    public const nint m_hSource = 0x4B4;
    public const nint m_iszSourceEntityName = 0x4C0;
    public const nint m_vLastPosition = 0x518;
    public const nint m_iszStackName = 0x528;
    public const nint m_iszOperatorName = 0x530;
    public const nint m_iszOpvarName = 0x538;
    public const nint m_iOpvarIndex = 0x540;
    public const nint m_bUseAutoCompare = 0x544;
}

public static class CSoundOpvarSetPointEntity {
    public const nint m_OnEnter = 0x548;
    public const nint m_OnExit = 0x570;
    public const nint m_bAutoDisable = 0x598;
    public const nint m_flDistanceMin = 0x5DC;
    public const nint m_flDistanceMax = 0x5E0;
    public const nint m_flDistanceMapMin = 0x5E4;
    public const nint m_flDistanceMapMax = 0x5E8;
    public const nint m_flOcclusionRadius = 0x5EC;
    public const nint m_flOcclusionMin = 0x5F0;
    public const nint m_flOcclusionMax = 0x5F4;
    public const nint m_flValSetOnDisable = 0x5F8;
    public const nint m_bSetValueOnDisable = 0x5FC;
    public const nint m_nSimulationMode = 0x600;
    public const nint m_nVisibilitySamples = 0x604;
    public const nint m_vDynamicProxyPoint = 0x608;
    public const nint m_flDynamicMaximumOcclusion = 0x614;
    public const nint m_hDynamicEntity = 0x618;
    public const nint m_iszDynamicEntityName = 0x620;
    public const nint m_flPathingDistanceNormFactor = 0x628;
    public const nint m_vPathingSourcePos = 0x62C;
    public const nint m_vPathingListenerPos = 0x638;
    public const nint m_nPathingSourceIndex = 0x644;
}

public static class CSoundPatch {
    public const nint m_pitch = 0x8;
    public const nint m_volume = 0x18;
    public const nint m_shutdownTime = 0x30;
    public const nint m_flLastTime = 0x34;
    public const nint m_iszSoundScriptName = 0x38;
    public const nint m_hEnt = 0x40;
    public const nint m_soundEntityIndex = 0x44;
    public const nint m_soundOrigin = 0x48;
    public const nint m_isPlaying = 0x54;
    public const nint m_Filter = 0x58;
    public const nint m_flCloseCaptionDuration = 0x80;
    public const nint m_bUpdatedSoundOrigin = 0x84;
    public const nint m_iszClassName = 0x88;
}

public static class CSoundStackSave {
    public const nint m_iszStackName = 0x4B0;
}

public static class CSpotlightEnd {
    public const nint m_flLightScale = 0x700;
    public const nint m_Radius = 0x704;
    public const nint m_vSpotlightDir = 0x708;
    public const nint m_vSpotlightOrg = 0x714;
}

public static class CSprite {
    public const nint m_hSpriteMaterial = 0x700;
    public const nint m_hAttachedToEntity = 0x708;
    public const nint m_nAttachment = 0x70C;
    public const nint m_flSpriteFramerate = 0x710;
    public const nint m_flFrame = 0x714;
    public const nint m_flDieTime = 0x718;
    public const nint m_nBrightness = 0x728;
    public const nint m_flBrightnessDuration = 0x72C;
    public const nint m_flSpriteScale = 0x730;
    public const nint m_flScaleDuration = 0x734;
    public const nint m_bWorldSpaceScale = 0x738;
    public const nint m_flGlowProxySize = 0x73C;
    public const nint m_flHDRColorScale = 0x740;
    public const nint m_flLastTime = 0x744;
    public const nint m_flMaxFrame = 0x748;
    public const nint m_flStartScale = 0x74C;
    public const nint m_flDestScale = 0x750;
    public const nint m_flScaleTimeStart = 0x754;
    public const nint m_nStartBrightness = 0x758;
    public const nint m_nDestBrightness = 0x75C;
    public const nint m_flBrightnessTimeStart = 0x760;
    public const nint m_nSpriteWidth = 0x764;
    public const nint m_nSpriteHeight = 0x768;
}

public static class CStopwatch {
    public const nint m_interval = 0xC;
}

public static class CStopwatchBase {
    public const nint m_fIsRunning = 0x8;
}

public static class CSun {
    public const nint m_vDirection = 0x700;
    public const nint m_clrOverlay = 0x70C;
    public const nint m_iszEffectName = 0x710;
    public const nint m_iszSSEffectName = 0x718;
    public const nint m_bOn = 0x720;
    public const nint m_bmaxColor = 0x721;
    public const nint m_flSize = 0x724;
    public const nint m_flRotation = 0x728;
    public const nint m_flHazeScale = 0x72C;
    public const nint m_flAlphaHaze = 0x730;
    public const nint m_flAlphaHdr = 0x734;
    public const nint m_flAlphaScale = 0x738;
    public const nint m_flHDRColorScale = 0x73C;
    public const nint m_flFarZScale = 0x740;
}

public static class CSurvivalGameRules {
    public const nint m_bBoundsInitialized = 0x8;
    public const nint m_vecPlayAreaMins = 0xC;
    public const nint m_vecPlayAreaMaxs = 0x18;
    public const nint m_iPlayerSpawnHexIndices = 0x24;
    public const nint m_SpawnTileState = 0x124;
    public const nint m_flSpawnSelectionTimeStartCurrentStage = 0x204;
    public const nint m_flSpawnSelectionTimeEndCurrentStage = 0x208;
    public const nint m_flSpawnSelectionTimeEndLastStage = 0x20C;
    public const nint m_spawnStage = 0x210;
    public const nint m_flTabletHexOriginX = 0x214;
    public const nint m_flTabletHexOriginY = 0x218;
    public const nint m_flTabletHexSize = 0x21C;
    public const nint m_roundData_playerXuids = 0x220;
    public const nint m_roundData_playerPositions = 0x420;
    public const nint m_roundData_playerTeams = 0x520;
    public const nint m_SurvivalGameRuleDecisionTypes = 0x620;
    public const nint m_SurvivalGameRuleDecisionValues = 0x660;
    public const nint m_flSurvivalStartTime = 0x6A0;
    public const nint m_flLastThinkTime = 0x6A4;
    public const nint m_nBlockedTileIndices = 0x6A8;
    public const nint m_vecPlayerSpawnLocations = 0x790;
    public const nint m_bWaitingForMoreThanOnePlayer = 0x7A8;
    public const nint m_bSurvivalEventFired_FadeEveryoneOutFromMapSelection = 0x7A9;
    public const nint m_bSurvivalEventFired_TimeForSmokeBeacons = 0x7AA;
    public const nint m_bSurvivalEventFired_FirstParadropIncoming = 0x7AB;
    public const nint m_bSurvivalEventFired_WarnedEveryoneAboutRespawnEnding = 0x7AC;
    public const nint m_flLastWinConditionDetectedTime = 0x7B0;
    public const nint m_nWinConditionStageProgress = 0x7B4;
    public const nint m_nEntIndexOfRunnerUpPlayer = 0x7B8;
    public const nint m_nEntIndexOfKilledPlayerCheckingWinConditions = 0x7BC;
    public const nint m_flTimeOfLastParadrop = 0x7C0;
    public const nint m_bSurvivalEventFired_PlayedWinnerSurrenderAnim = 0x7F8;
    public const nint m_hWinnerPlayer = 0x7FC;
    public const nint m_vecLoadedOutPlayers = 0x800;
    public const nint m_vecRespawnedPlayers = 0x818;
    public const nint m_vecMetalCrates = 0x830;
    public const nint m_flLastDroneSpawnTime = 0x848;
    public const nint m_hSpawnChopper = 0x868;
}

public static class CSurvivalSpawnChopper {
    public const nint m_pSoundLoop = 0x888;
    public const nint m_flSpawnTimeStamp = 0x890;
    public const nint m_flFlightPathRotationOffset = 0x894;
    public const nint m_bFlipX = 0x898;
    public const nint m_bFlipY = 0x899;
    public const nint m_bCircling = 0x89A;
    public const nint m_flLastPassengerCheckTime = 0x89C;
}

public static class CTablet {
    public const nint m_bPendingBuyMenu = 0xDD8;
    public const nint m_flUpgradeExpirationTime = 0xDDC;
    public const nint m_vecLocalHexFlags = 0xDEC;
    public const nint m_nContractKillGridIndex = 0xE94;
    public const nint m_nContractKillGridHighResIndex = 0xE98;
    public const nint m_bTabletReceptionIsBlocked = 0xE9C;
    public const nint m_flScanProgress = 0xEA0;
    public const nint m_flBootTime = 0xEA4;
    public const nint m_flShowMapTime = 0xEA8;
    public const nint m_vecNearestMetalCratePos = 0xEAC;
    public const nint m_skinState = 0xEB8;
    public const nint m_vecNotificationIds = 0xEBC;
    public const nint m_vecNotificationTimestamps = 0xEDC;
    public const nint m_nLastPurchaseIndex = 0xEFC;
    public const nint m_vecPlayerPositionHistory = 0xF00;
    public const nint m_vecLastPlayerPosition = 0x1020;
    public const nint m_flNextCheckForIncomingDronesTime = 0x1028;
    public const nint m_flLastPlayerOccupiedGridUpdate = 0x102C;
    public const nint m_flLastTabletBlockedTime = 0x1030;
    public const nint m_flLastClosePoseParamVal = 0x10E0;
}

public static class CTakeDamageInfo {
    public const nint m_vecDamageForce = 0x8;
    public const nint m_vecDamagePosition = 0x14;
    public const nint m_vecReportedPosition = 0x20;
    public const nint m_vecDamageDirection = 0x2C;
    public const nint m_hInflictor = 0x38;
    public const nint m_hAttacker = 0x3C;
    public const nint m_hAbility = 0x40;
    public const nint m_flDamage = 0x44;
    public const nint m_bitsDamageType = 0x48;
    public const nint m_iDamageCustom = 0x4C;
    public const nint m_iAmmoType = 0x50;
    public const nint m_flOriginalDamage = 0x60;
    public const nint m_bShouldBleed = 0x64;
    public const nint m_bShouldSpark = 0x65;
    public const nint m_nDamageFlags = 0x70;
    public const nint m_nNumObjectsPenetrated = 0x74;
    public const nint m_hScriptInstance = 0x78;
    public const nint m_bInTakeDamageFlow = 0x98;
}

public static class CTakeDamageResult {
    public const nint m_nHealthLost = 0x0;
    public const nint m_nDamageTaken = 0x4;
}

public static class CTakeDamageSummaryScopeGuard {
    public const nint m_vecSummaries = 0x8;
}

public static class CTankTargetChange {
    public const nint m_newTarget = 0x4B0;
    public const nint m_newTargetName = 0x4C0;
}

public static class CTankTrainAI {
    public const nint m_hTrain = 0x4B0;
    public const nint m_hTargetEntity = 0x4B4;
    public const nint m_soundPlaying = 0x4B8;
    public const nint m_startSoundName = 0x4D0;
    public const nint m_engineSoundName = 0x4D8;
    public const nint m_movementSoundName = 0x4E0;
    public const nint m_targetEntityName = 0x4E8;
}

public static class CTeam {
    public const nint m_aPlayerControllers = 0x4B0;
    public const nint m_aPlayers = 0x4C8;
    public const nint m_iScore = 0x4E0;
    public const nint m_szTeamname = 0x4E4;
}

public static class CTestEffect {
    public const nint m_iLoop = 0x4B0;
    public const nint m_iBeam = 0x4B4;
    public const nint m_pBeam = 0x4B8;
    public const nint m_flBeamTime = 0x578;
    public const nint m_flStartTime = 0x5D8;
}

public static class CTextureBasedAnimatable {
    public const nint m_bLoop = 0x700;
    public const nint m_flFPS = 0x704;
    public const nint m_hPositionKeys = 0x708;
    public const nint m_hRotationKeys = 0x710;
    public const nint m_vAnimationBoundsMin = 0x718;
    public const nint m_vAnimationBoundsMax = 0x724;
    public const nint m_flStartTime = 0x730;
    public const nint m_flStartFrame = 0x734;
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

public static class CTimerEntity {
    public const nint m_OnTimer = 0x4B0;
    public const nint m_OnTimerHigh = 0x4D8;
    public const nint m_OnTimerLow = 0x500;
    public const nint m_iDisabled = 0x528;
    public const nint m_flInitialDelay = 0x52C;
    public const nint m_flRefireTime = 0x530;
    public const nint m_bUpDownState = 0x534;
    public const nint m_iUseRandomTime = 0x538;
    public const nint m_bPauseAfterFiring = 0x53C;
    public const nint m_flLowerRandomBound = 0x540;
    public const nint m_flUpperRandomBound = 0x544;
    public const nint m_flRemainingTime = 0x548;
    public const nint m_bPaused = 0x54C;
}

public static class CTonemapController2 {
    public const nint m_flAutoExposureMin = 0x4B0;
    public const nint m_flAutoExposureMax = 0x4B4;
    public const nint m_flTonemapPercentTarget = 0x4B8;
    public const nint m_flTonemapPercentBrightPixels = 0x4BC;
    public const nint m_flTonemapMinAvgLum = 0x4C0;
    public const nint m_flExposureAdaptationSpeedUp = 0x4C4;
    public const nint m_flExposureAdaptationSpeedDown = 0x4C8;
    public const nint m_flTonemapEVSmoothingRange = 0x4CC;
}

public static class CTonemapTrigger {
    public const nint m_tonemapControllerName = 0x8A8;
    public const nint m_hTonemapController = 0x8B0;
}

public static class CTriggerActiveWeaponDetect {
    public const nint m_OnTouchedActiveWeapon = 0x8A8;
    public const nint m_iszWeaponClassName = 0x8D0;
}

public static class CTriggerBrush {
    public const nint m_OnStartTouch = 0x700;
    public const nint m_OnEndTouch = 0x728;
    public const nint m_OnUse = 0x750;
    public const nint m_iInputFilter = 0x778;
    public const nint m_iDontMessageParent = 0x77C;
}

public static class CTriggerBuoyancy {
    public const nint m_BuoyancyHelper = 0x8A8;
    public const nint m_flFluidDensity = 0x8C8;
}

public static class CTriggerDetectBulletFire {
    public const nint m_bPlayerFireOnly = 0x8A8;
    public const nint m_OnDetectedBulletFire = 0x8B0;
}

public static class CTriggerDetectExplosion {
    public const nint m_OnDetectedExplosion = 0x8E0;
}

public static class CTriggerFan {
    public const nint m_vFanOrigin = 0x8A8;
    public const nint m_vFanEnd = 0x8B4;
    public const nint m_vNoise = 0x8C0;
    public const nint m_flForce = 0x8CC;
    public const nint m_flPlayerForce = 0x8D0;
    public const nint m_flRampTime = 0x8D4;
    public const nint m_bFalloff = 0x8D8;
    public const nint m_bPushPlayer = 0x8D9;
    public const nint m_bRampDown = 0x8DA;
    public const nint m_bAddNoise = 0x8DB;
    public const nint m_RampTimer = 0x8E0;
}

public static class CTriggerGameEvent {
    public const nint m_strStartTouchEventName = 0x8A8;
    public const nint m_strEndTouchEventName = 0x8B0;
    public const nint m_strTriggerID = 0x8B8;
}

public static class CTriggerHurt {
    public const nint m_flOriginalDamage = 0x8A8;
    public const nint m_flDamage = 0x8AC;
    public const nint m_flDamageCap = 0x8B0;
    public const nint m_flLastDmgTime = 0x8B4;
    public const nint m_flForgivenessDelay = 0x8B8;
    public const nint m_bitsDamageInflict = 0x8BC;
    public const nint m_damageModel = 0x8C0;
    public const nint m_bNoDmgForce = 0x8C4;
    public const nint m_vDamageForce = 0x8C8;
    public const nint m_thinkAlways = 0x8D4;
    public const nint m_hurtThinkPeriod = 0x8D8;
    public const nint m_OnHurt = 0x8E0;
    public const nint m_OnHurtPlayer = 0x908;
    public const nint m_hurtEntities = 0x930;
}

public static class CTriggerImpact {
    public const nint m_flMagnitude = 0x8D0;
    public const nint m_flNoise = 0x8D4;
    public const nint m_flViewkick = 0x8D8;
    public const nint m_pOutputForce = 0x8E0;
}

public static class CTriggerLerpObject {
    public const nint m_iszLerpTarget = 0x8A8;
    public const nint m_hLerpTarget = 0x8B0;
    public const nint m_iszLerpTargetAttachment = 0x8B8;
    public const nint m_hLerpTargetAttachment = 0x8C0;
    public const nint m_flLerpDuration = 0x8C4;
    public const nint m_bLerpRestoreMoveType = 0x8C8;
    public const nint m_bSingleLerpObject = 0x8C9;
    public const nint m_vecLerpingObjects = 0x8D0;
    public const nint m_iszLerpEffect = 0x8E8;
    public const nint m_iszLerpSound = 0x8F0;
    public const nint m_OnLerpStarted = 0x8F8;
    public const nint m_OnLerpFinished = 0x920;
}

public static class CTriggerLook {
    public const nint m_hLookTarget = 0x8D0;
    public const nint m_flFieldOfView = 0x8D4;
    public const nint m_flLookTime = 0x8D8;
    public const nint m_flLookTimeTotal = 0x8DC;
    public const nint m_flLookTimeLast = 0x8E0;
    public const nint m_flTimeoutDuration = 0x8E4;
    public const nint m_bTimeoutFired = 0x8E8;
    public const nint m_bIsLooking = 0x8E9;
    public const nint m_b2DFOV = 0x8EA;
    public const nint m_bUseVelocity = 0x8EB;
    public const nint m_hActivator = 0x8EC;
    public const nint m_bTestOcclusion = 0x8F0;
    public const nint m_OnTimeout = 0x8F8;
    public const nint m_OnStartLook = 0x920;
    public const nint m_OnEndLook = 0x948;
}

public static class CTriggerMultiple {
    public const nint m_OnTrigger = 0x8A8;
}

public static class CTriggerPhysics {
    public const nint m_gravityScale = 0x8B8;
    public const nint m_linearLimit = 0x8BC;
    public const nint m_linearDamping = 0x8C0;
    public const nint m_angularLimit = 0x8C4;
    public const nint m_angularDamping = 0x8C8;
    public const nint m_linearForce = 0x8CC;
    public const nint m_flFrequency = 0x8D0;
    public const nint m_flDampingRatio = 0x8D4;
    public const nint m_vecLinearForcePointAt = 0x8D8;
    public const nint m_bCollapseToForcePoint = 0x8E4;
    public const nint m_vecLinearForcePointAtWorld = 0x8E8;
    public const nint m_vecLinearForceDirection = 0x8F4;
    public const nint m_bConvertToDebrisWhenPossible = 0x900;
}

public static class CTriggerProximity {
    public const nint m_hMeasureTarget = 0x8A8;
    public const nint m_iszMeasureTarget = 0x8B0;
    public const nint m_fRadius = 0x8B8;
    public const nint m_nTouchers = 0x8BC;
    public const nint m_NearestEntityDistance = 0x8C0;
}

public static class CTriggerPush {
    public const nint m_angPushEntitySpace = 0x8A8;
    public const nint m_vecPushDirEntitySpace = 0x8B4;
    public const nint m_bTriggerOnStartTouch = 0x8C0;
    public const nint m_flAlternateTicksFix = 0x8C4;
    public const nint m_flPushSpeed = 0x8C8;
}

public static class CTriggerRemove {
    public const nint m_OnRemove = 0x8A8;
}

public static class CTriggerSafeMoneyGather {
    public const nint m_vecCashBundles = 0x8A8;
}

public static class CTriggerSave {
    public const nint m_bForceNewLevelUnit = 0x8A8;
    public const nint m_fDangerousTimer = 0x8AC;
    public const nint m_minHitPoints = 0x8B0;
}

public static class CTriggerSndSosOpvar {
    public const nint m_hTouchingPlayers = 0x8A8;
    public const nint m_flPosition = 0x8C0;
    public const nint m_flCenterSize = 0x8CC;
    public const nint m_flMinVal = 0x8D0;
    public const nint m_flMaxVal = 0x8D4;
    public const nint m_flWait = 0x8D8;
    public const nint m_opvarName = 0x8E0;
    public const nint m_stackName = 0x8E8;
    public const nint m_operatorName = 0x8F0;
    public const nint m_bVolIs2D = 0x8F8;
    public const nint m_opvarNameChar = 0x8F9;
    public const nint m_stackNameChar = 0x9F9;
    public const nint m_operatorNameChar = 0xAF9;
    public const nint m_VecNormPos = 0xBFC;
    public const nint m_flNormCenterSize = 0xC08;
}

public static class CTriggerSoundscape {
    public const nint m_hSoundscape = 0x8A8;
    public const nint m_SoundscapeName = 0x8B0;
    public const nint m_spectators = 0x8B8;
}

public static class CTriggerTeleport {
    public const nint m_iLandmark = 0x8A8;
    public const nint m_bUseLandmarkAngles = 0x8B0;
    public const nint m_bMirrorPlayer = 0x8B1;
}

public static class CTriggerToggleSave {
    public const nint m_bDisabled = 0x8A8;
}

public static class CTriggerVolume {
    public const nint m_iFilterName = 0x700;
    public const nint m_hFilter = 0x708;
}

public static class CTripWireFireProjectile {
    public const nint m_flAttachTime = 0x9C0;
    public const nint m_vecTripWireEndPositions = 0x9C4;
    public const nint m_bTripWireEndPositionsUsed = 0xA3C;
    public const nint m_hStuckToEnt = 0xA48;
    public const nint m_nLastStuckToEntModelIndex = 0xA4C;
    public const nint m_xformStuckToEnt = 0xA50;
    public const nint m_vecTrapSetPosition = 0xA70;
    public const nint m_nWireSoundsPlayed = 0xA7C;
}

public static class CVoteController {
    public const nint m_iActiveIssueIndex = 0x4B0;
    public const nint m_iOnlyTeamToVote = 0x4B4;
    public const nint m_nVoteOptionCount = 0x4B8;
    public const nint m_nPotentialVotes = 0x4CC;
    public const nint m_bIsYesNoVote = 0x4D0;
    public const nint m_acceptingVotesTimer = 0x4D8;
    public const nint m_executeCommandTimer = 0x4F0;
    public const nint m_resetVoteTimer = 0x508;
    public const nint m_arrVotedUsers = 0x520;
    public const nint m_nVotesCast = 0x538;
    public const nint m_playerHoldingVote = 0x638;
    public const nint m_playerOverrideForVote = 0x63C;
    public const nint m_nHighestCountIndex = 0x640;
    public const nint m_potentialIssues = 0x648;
    public const nint m_VoteOptions = 0x660;
}

public static class CWeaponBaseItem {
    public const nint m_SequenceCompleteTimer = 0xDD0;
    public const nint m_bRedraw = 0xDE8;
}

public static class CWeaponCSBase {
    public const nint m_bRemoveable = 0xC80;
    public const nint m_flFireSequenceStartTime = 0xC84;
    public const nint m_nFireSequenceStartTimeChange = 0xC88;
    public const nint m_nFireSequenceStartTimeAck = 0xC8C;
    public const nint m_bPlayerFireEventIsPrimary = 0xC90;
    public const nint m_seqIdle = 0xC94;
    public const nint m_seqFirePrimary = 0xC98;
    public const nint m_seqFireSecondary = 0xC9C;
    public const nint m_bPlayerAmmoStockOnPickup = 0xCA8;
    public const nint m_bRequireUseToTouch = 0xCA9;
    public const nint m_iState = 0xCAC;
    public const nint m_flLastTimeInAir = 0xCB0;
    public const nint m_flLastDeployTime = 0xCB4;
    public const nint m_nViewModelIndex = 0xCB8;
    public const nint m_bReloadsWithClips = 0xCBC;
    public const nint m_flTimeWeaponIdle = 0xCD8;
    public const nint m_bFireOnEmpty = 0xCDC;
    public const nint m_OnPlayerPickup = 0xCE0;
    public const nint m_weaponMode = 0xD08;
    public const nint m_flTurningInaccuracyDelta = 0xD0C;
    public const nint m_vecTurningInaccuracyEyeDirLast = 0xD10;
    public const nint m_flTurningInaccuracy = 0xD1C;
    public const nint m_fAccuracyPenalty = 0xD20;
    public const nint m_flLastAccuracyUpdateTime = 0xD24;
    public const nint m_fAccuracySmoothedForZoom = 0xD28;
    public const nint m_fScopeZoomEndTime = 0xD2C;
    public const nint m_iRecoilIndex = 0xD30;
    public const nint m_flRecoilIndex = 0xD34;
    public const nint m_bBurstMode = 0xD38;
    public const nint m_flPostponeFireReadyTime = 0xD3C;
    public const nint m_bInReload = 0xD40;
    public const nint m_bReloadVisuallyComplete = 0xD41;
    public const nint m_flDroppedAtTime = 0xD44;
    public const nint m_bIsHauledBack = 0xD48;
    public const nint m_bSilencerOn = 0xD49;
    public const nint m_flTimeSilencerSwitchComplete = 0xD4C;
    public const nint m_iOriginalTeamNumber = 0xD50;
    public const nint m_flNextAttackRenderTimeOffset = 0xD54;
    public const nint m_bCanBePickedUp = 0xD60;
    public const nint m_bUseCanOverrideNextOwnerTouchTime = 0xD61;
    public const nint m_nextOwnerTouchTime = 0xD64;
    public const nint m_nextPrevOwnerTouchTime = 0xD68;
    public const nint m_hPrevOwner = 0xD6C;
    public const nint m_nDropTick = 0xD70;
    public const nint m_donated = 0xD94;
    public const nint m_fLastShotTime = 0xD98;
    public const nint m_bWasOwnedByCT = 0xD9C;
    public const nint m_bWasOwnedByTerrorist = 0xD9D;
    public const nint m_bFiredOutOfAmmoEvent = 0xD9E;
    public const nint m_numRemoveUnownedWeaponThink = 0xDA0;
    public const nint m_IronSightController = 0xDA8;
    public const nint m_iIronSightMode = 0xDC0;
    public const nint m_flLastLOSTraceFailureTime = 0xDC4;
    public const nint m_iNumEmptyAttacks = 0xDC8;
}

public static class CWeaponCSBaseGun {
    public const nint m_zoomLevel = 0xDD0;
    public const nint m_iBurstShotsRemaining = 0xDD4;
    public const nint m_silencedModelIndex = 0xDE0;
    public const nint m_inPrecache = 0xDE4;
    public const nint m_bNeedsBoltAction = 0xDE5;
    public const nint m_bSkillReloadAvailable = 0xDE6;
    public const nint m_bSkillReloadLiftedReloadKey = 0xDE7;
    public const nint m_bSkillBoltInterruptAvailable = 0xDE8;
    public const nint m_bSkillBoltLiftedFireKey = 0xDE9;
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

public static class CWeaponShield {
    public const nint m_flBulletDamageAbsorbed = 0xDF0;
    public const nint m_flLastBulletHitSoundTime = 0xDF4;
    public const nint m_flDisplayHealth = 0xDF8;
}

public static class CWeaponTaser {
    public const nint m_fFireTime = 0xDF0;
}

public static class CommandToolCommand_t {
    public const nint m_bEnabled = 0x0;
    public const nint m_bOpened = 0x1;
    public const nint m_InternalId = 0x4;
    public const nint m_ShortName = 0x8;
    public const nint m_ExecMode = 0x10;
    public const nint m_SpawnGroup = 0x18;
    public const nint m_PeriodicExecDelay = 0x20;
    public const nint m_SpecType = 0x24;
    public const nint m_EntitySpec = 0x28;
    public const nint m_Commands = 0x30;
    public const nint m_SetDebugBits = 0x38;
    public const nint m_ClearDebugBits = 0x40;
}

public static class ConceptHistory_t {
    public const nint timeSpoken = 0x0;
    public const nint m_response = 0x8;
}

public static class ConstraintSoundInfo {
    public const nint m_vSampler = 0x8;
    public const nint m_soundProfile = 0x20;
    public const nint m_forwardAxis = 0x40;
    public const nint m_iszTravelSoundFwd = 0x50;
    public const nint m_iszTravelSoundBack = 0x58;
    public const nint m_iszReversalSounds = 0x68;
    public const nint m_bPlayTravelSound = 0x80;
    public const nint m_bPlayReversalSound = 0x81;
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

public static class Extent {
    public const nint lo = 0x0;
    public const nint hi = 0xC;
}

public static class FilterDamageType {
    public const nint m_iDamageType = 0x508;
}

public static class FilterHealth {
    public const nint m_bAdrenalineActive = 0x508;
    public const nint m_iHealthMin = 0x50C;
    public const nint m_iHealthMax = 0x510;
}

public static class FilterTeam {
    public const nint m_iFilterTeam = 0x508;
}

public static class GameAmmoTypeInfo_t {
    public const nint m_nBuySize = 0x38;
    public const nint m_nCost = 0x3C;
}

public static class GameTick_t {
    public const nint m_Value = 0x0;
}

public static class GameTime_t {
    public const nint m_Value = 0x0;
}

public static class HullFlags_t {
    public const nint m_bHull_Human = 0x0;
    public const nint m_bHull_SmallCentered = 0x1;
    public const nint m_bHull_WideHuman = 0x2;
    public const nint m_bHull_Tiny = 0x3;
    public const nint m_bHull_Medium = 0x4;
    public const nint m_bHull_TinyCentered = 0x5;
    public const nint m_bHull_Large = 0x6;
    public const nint m_bHull_LargeCentered = 0x7;
    public const nint m_bHull_MediumTall = 0x8;
    public const nint m_bHull_Small = 0x9;
}

public static class IntervalTimer {
    public const nint m_timestamp = 0x8;
    public const nint m_nWorldGroupId = 0xC;
}

public static class ModelConfigHandle_t {
    public const nint m_Value = 0x0;
}

public static class ParticleIndex_t {
    public const nint m_Value = 0x0;
}

public static class PhysicsRagdollPose_t {
    public const nint __m_pChainEntity = 0x8;
    public const nint m_Transforms = 0x30;
    public const nint m_hOwner = 0x48;
}

public static class RagdollCreationParams_t {
    public const nint m_vForce = 0x0;
    public const nint m_nForceBone = 0xC;
}

public static class RelationshipOverride_t {
    public const nint entity = 0x8;
    public const nint classType = 0xC;
}

public static class Relationship_t {
    public const nint disposition = 0x0;
    public const nint priority = 0x4;
}

public static class ResponseContext_t {
    public const nint m_iszName = 0x0;
    public const nint m_iszValue = 0x8;
    public const nint m_fExpirationTime = 0x10;
}

public static class ResponseFollowup {
    public const nint followup_concept = 0x0;
    public const nint followup_contexts = 0x8;
    public const nint followup_delay = 0x10;
    public const nint followup_target = 0x14;
    public const nint followup_entityiotarget = 0x1C;
    public const nint followup_entityioinput = 0x24;
    public const nint followup_entityiodelay = 0x2C;
    public const nint bFired = 0x30;
}

public static class ResponseParams {
    public const nint odds = 0x10;
    public const nint flags = 0x12;
    public const nint m_pFollowup = 0x18;
}

public static class SellbackPurchaseEntry_t {
    public const nint m_unDefIdx = 0x30;
    public const nint m_nCost = 0x34;
    public const nint m_nPrevArmor = 0x38;
    public const nint m_bPrevHelmet = 0x3C;
    public const nint m_hItem = 0x40;
}

public static class SimpleConstraintSoundProfile {
    public const nint eKeypoints = 0x8;
    public const nint m_keyPoints = 0xC;
    public const nint m_reversalSoundThresholds = 0x14;
}

public static class SpawnPoint {
    public const nint m_iPriority = 0x4B0;
    public const nint m_bEnabled = 0x4B4;
    public const nint m_nType = 0x4B8;
}

public static class SpawnPointCoopEnemy {
    public const nint m_szWeaponsToGive = 0x4C0;
    public const nint m_szPlayerModelToUse = 0x4C8;
    public const nint m_nArmorToSpawnWith = 0x4D0;
    public const nint m_nDefaultBehavior = 0x4D4;
    public const nint m_nBotDifficulty = 0x4D8;
    public const nint m_bIsAgressive = 0x4DC;
    public const nint m_bStartAsleep = 0x4DD;
    public const nint m_flHideRadius = 0x4E0;
    public const nint m_szBehaviorTreeFile = 0x4F0;
}

public static class SummaryTakeDamageInfo_t {
    public const nint nSummarisedCount = 0x0;
    public const nint info = 0x8;
    public const nint result = 0xA8;
    public const nint hTarget = 0xB0;
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

public static class VelocitySampler {
    public const nint m_prevSample = 0x0;
    public const nint m_fPrevSampleTime = 0xC;
    public const nint m_fIdealSampleRate = 0x10;
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

public static class dynpitchvol_base_t {
    public const nint preset = 0x0;
    public const nint pitchrun = 0x4;
    public const nint pitchstart = 0x8;
    public const nint spinup = 0xC;
    public const nint spindown = 0x10;
    public const nint volrun = 0x14;
    public const nint volstart = 0x18;
    public const nint fadein = 0x1C;
    public const nint fadeout = 0x20;
    public const nint lfotype = 0x24;
    public const nint lforate = 0x28;
    public const nint lfomodpitch = 0x2C;
    public const nint lfomodvol = 0x30;
    public const nint cspinup = 0x34;
    public const nint cspincount = 0x38;
    public const nint pitch = 0x3C;
    public const nint spinupsav = 0x40;
    public const nint spindownsav = 0x44;
    public const nint pitchfrac = 0x48;
    public const nint vol = 0x4C;
    public const nint fadeinsav = 0x50;
    public const nint fadeoutsav = 0x54;
    public const nint volfrac = 0x58;
    public const nint lfofrac = 0x5C;
    public const nint lfomult = 0x60;
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

public static class fogplayerparams_t {
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

public static class hudtextparms_t {
    public const nint color1 = 0x0;
    public const nint color2 = 0x4;
    public const nint effect = 0x8;
    public const nint channel = 0x9;
    public const nint x = 0xC;
    public const nint y = 0x10;
}

public static class lerpdata_t {
    public const nint m_hEnt = 0x0;
    public const nint m_MoveType = 0x4;
    public const nint m_flStartTime = 0x8;
    public const nint m_vecStartOrigin = 0xC;
    public const nint m_qStartRot = 0x20;
    public const nint m_nFXIndex = 0x30;
}

public static class locksound_t {
    public const nint sLockedSound = 0x8;
    public const nint sUnlockedSound = 0x10;
    public const nint flwaitSound = 0x18;
}

public static class magnetted_objects_t {
    public const nint hEntity = 0x8;
}

public static class ragdoll_t {
    public const nint list = 0x0;
    public const nint boneIndex = 0x18;
    public const nint allowStretch = 0x30;
    public const nint unused = 0x31;
}

public static class ragdollelement_t {
    public const nint originParentSpace = 0x0;
    public const nint parentIndex = 0x20;
    public const nint m_flRadius = 0x24;
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

public static class thinkfunc_t {
    public const nint m_hFn = 0x8;
    public const nint m_nContext = 0x10;
    public const nint m_nNextThinkTick = 0x14;
    public const nint m_nLastThinkTick = 0x18;
}