'''
Created using https://github.com/a2x/cs2-dumper
Thu, 14 Dec 2023 11:58:27 +0000
'''

class ActiveModelConfig_t:
    m_Handle = 0x28 # ModelConfigHandle_t
    m_Name = 0x30 # CUtlSymbolLarge
    m_AssociatedEntities = 0x38 # CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    m_AssociatedEntityNames = 0x50 # CNetworkUtlVectorBase<CUtlSymbolLarge>

class AmmoIndex_t:
    m_Value = 0x0 # int8_t

class AmmoTypeInfo_t:
    m_nMaxCarry = 0x10 # int32_t
    m_nSplashSize = 0x1C # CRangeInt
    m_nFlags = 0x24 # AmmoFlags_t
    m_flMass = 0x28 # float
    m_flSpeed = 0x2C # CRangeFloat

class AnimationUpdateListHandle_t:
    m_Value = 0x0 # uint32_t

class CAISound: # CPointEntity
    m_iSoundType = 0x4B0 # int32_t
    m_iSoundContext = 0x4B4 # int32_t
    m_iVolume = 0x4B8 # int32_t
    m_iSoundIndex = 0x4BC # int32_t
    m_flDuration = 0x4C0 # float
    m_iszProxyEntityName = 0x4C8 # CUtlSymbolLarge

class CAI_ChangeHintGroup: # CBaseEntity
    m_iSearchType = 0x4B0 # int32_t
    m_strSearchName = 0x4B8 # CUtlSymbolLarge
    m_strNewHintGroup = 0x4C0 # CUtlSymbolLarge
    m_flRadius = 0x4C8 # float

class CAI_ChangeTarget: # CBaseEntity
    m_iszNewTarget = 0x4B0 # CUtlSymbolLarge

class CAI_Expresser:
    m_flStopTalkTime = 0x38 # GameTime_t
    m_flStopTalkTimeWithoutDelay = 0x3C # GameTime_t
    m_flBlockedTalkTime = 0x40 # GameTime_t
    m_voicePitch = 0x44 # int32_t
    m_flLastTimeAcceptedSpeak = 0x48 # GameTime_t
    m_bAllowSpeakingInterrupts = 0x4C # bool
    m_bConsiderSceneInvolvementAsSpeech = 0x4D # bool
    m_nLastSpokenPriority = 0x50 # int32_t
    m_pOuter = 0x58 # CBaseFlex*

class CAI_ExpresserWithFollowup: # CAI_Expresser
    m_pPostponedFollowup = 0x60 # ResponseFollowup*

class CAK47: # CCSWeaponBaseGun

class CAmbientGeneric: # CPointEntity
    m_radius = 0x4B0 # float
    m_flMaxRadius = 0x4B4 # float
    m_iSoundLevel = 0x4B8 # soundlevel_t
    m_dpv = 0x4BC # dynpitchvol_t
    m_fActive = 0x520 # bool
    m_fLooping = 0x521 # bool
    m_iszSound = 0x528 # CUtlSymbolLarge
    m_sSourceEntName = 0x530 # CUtlSymbolLarge
    m_hSoundSource = 0x538 # CHandle<CBaseEntity>
    m_nSoundSourceEntIndex = 0x53C # CEntityIndex

class CAnimEventListener: # CAnimEventListenerBase

class CAnimEventListenerBase:

class CAnimEventQueueListener: # CAnimEventListenerBase

class CAnimGraphControllerBase:

class CAnimGraphNetworkedVariables:
    m_PredNetBoolVariables = 0x8 # CNetworkUtlVectorBase<uint32_t>
    m_PredNetByteVariables = 0x20 # CNetworkUtlVectorBase<uint8_t>
    m_PredNetUInt16Variables = 0x38 # CNetworkUtlVectorBase<uint16_t>
    m_PredNetIntVariables = 0x50 # CNetworkUtlVectorBase<int32_t>
    m_PredNetUInt32Variables = 0x68 # CNetworkUtlVectorBase<uint32_t>
    m_PredNetUInt64Variables = 0x80 # CNetworkUtlVectorBase<uint64_t>
    m_PredNetFloatVariables = 0x98 # CNetworkUtlVectorBase<float>
    m_PredNetVectorVariables = 0xB0 # CNetworkUtlVectorBase<Vector>
    m_PredNetQuaternionVariables = 0xC8 # CNetworkUtlVectorBase<Quaternion>
    m_OwnerOnlyPredNetBoolVariables = 0xE0 # CNetworkUtlVectorBase<uint32_t>
    m_OwnerOnlyPredNetByteVariables = 0xF8 # CNetworkUtlVectorBase<uint8_t>
    m_OwnerOnlyPredNetUInt16Variables = 0x110 # CNetworkUtlVectorBase<uint16_t>
    m_OwnerOnlyPredNetIntVariables = 0x128 # CNetworkUtlVectorBase<int32_t>
    m_OwnerOnlyPredNetUInt32Variables = 0x140 # CNetworkUtlVectorBase<uint32_t>
    m_OwnerOnlyPredNetUInt64Variables = 0x158 # CNetworkUtlVectorBase<uint64_t>
    m_OwnerOnlyPredNetFloatVariables = 0x170 # CNetworkUtlVectorBase<float>
    m_OwnerOnlyPredNetVectorVariables = 0x188 # CNetworkUtlVectorBase<Vector>
    m_OwnerOnlyPredNetQuaternionVariables = 0x1A0 # CNetworkUtlVectorBase<Quaternion>
    m_nBoolVariablesCount = 0x1B8 # int32_t
    m_nOwnerOnlyBoolVariablesCount = 0x1BC # int32_t
    m_nRandomSeedOffset = 0x1C0 # int32_t
    m_flLastTeleportTime = 0x1C4 # float

class CAnimGraphTagRef:
    m_nTagIndex = 0x0 # int32_t
    m_tagName = 0x10 # CGlobalSymbol

class CAttributeContainer: # CAttributeManager
    m_Item = 0x50 # CEconItemView

class CAttributeList:
    m_Attributes = 0x8 # CUtlVectorEmbeddedNetworkVar<CEconItemAttribute>
    m_pManager = 0x58 # CAttributeManager*

class CAttributeManager:
    m_Providers = 0x8 # CUtlVector<CHandle<CBaseEntity>>
    m_iReapplyProvisionParity = 0x20 # int32_t
    m_hOuter = 0x24 # CHandle<CBaseEntity>
    m_bPreventLoopback = 0x28 # bool
    m_ProviderType = 0x2C # attributeprovidertypes_t
    m_CachedResults = 0x30 # CUtlVector<CAttributeManager::cached_attribute_float_t>

class CAttributeManager_cached_attribute_float_t:
    flIn = 0x0 # float
    iAttribHook = 0x8 # CUtlSymbolLarge
    flOut = 0x10 # float

class CBarnLight: # CBaseModelEntity
    m_bEnabled = 0x700 # bool
    m_nColorMode = 0x704 # int32_t
    m_Color = 0x708 # Color
    m_flColorTemperature = 0x70C # float
    m_flBrightness = 0x710 # float
    m_flBrightnessScale = 0x714 # float
    m_nDirectLight = 0x718 # int32_t
    m_nBakedShadowIndex = 0x71C # int32_t
    m_nLuminaireShape = 0x720 # int32_t
    m_flLuminaireSize = 0x724 # float
    m_flLuminaireAnisotropy = 0x728 # float
    m_LightStyleString = 0x730 # CUtlString
    m_flLightStyleStartTime = 0x738 # GameTime_t
    m_QueuedLightStyleStrings = 0x740 # CNetworkUtlVectorBase<CUtlString>
    m_LightStyleEvents = 0x758 # CNetworkUtlVectorBase<CUtlString>
    m_LightStyleTargets = 0x770 # CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    m_StyleEvent = 0x788 # CEntityIOOutput[4]
    m_hLightCookie = 0x848 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_flShape = 0x850 # float
    m_flSoftX = 0x854 # float
    m_flSoftY = 0x858 # float
    m_flSkirt = 0x85C # float
    m_flSkirtNear = 0x860 # float
    m_vSizeParams = 0x864 # Vector
    m_flRange = 0x870 # float
    m_vShear = 0x874 # Vector
    m_nBakeSpecularToCubemaps = 0x880 # int32_t
    m_vBakeSpecularToCubemapsSize = 0x884 # Vector
    m_nCastShadows = 0x890 # int32_t
    m_nShadowMapSize = 0x894 # int32_t
    m_nShadowPriority = 0x898 # int32_t
    m_bContactShadow = 0x89C # bool
    m_nBounceLight = 0x8A0 # int32_t
    m_flBounceScale = 0x8A4 # float
    m_flMinRoughness = 0x8A8 # float
    m_vAlternateColor = 0x8AC # Vector
    m_fAlternateColorBrightness = 0x8B8 # float
    m_nFog = 0x8BC # int32_t
    m_flFogStrength = 0x8C0 # float
    m_nFogShadows = 0x8C4 # int32_t
    m_flFogScale = 0x8C8 # float
    m_flFadeSizeStart = 0x8CC # float
    m_flFadeSizeEnd = 0x8D0 # float
    m_flShadowFadeSizeStart = 0x8D4 # float
    m_flShadowFadeSizeEnd = 0x8D8 # float
    m_bPrecomputedFieldsValid = 0x8DC # bool
    m_vPrecomputedBoundsMins = 0x8E0 # Vector
    m_vPrecomputedBoundsMaxs = 0x8EC # Vector
    m_vPrecomputedOBBOrigin = 0x8F8 # Vector
    m_vPrecomputedOBBAngles = 0x904 # QAngle
    m_vPrecomputedOBBExtent = 0x910 # Vector
    m_bPvsModifyEntity = 0x91C # bool

class CBaseAnimGraph: # CBaseModelEntity
    m_bInitiallyPopulateInterpHistory = 0x700 # bool
    m_bShouldAnimateDuringGameplayPause = 0x701 # bool
    m_pChoreoServices = 0x708 # IChoreoServices*
    m_bAnimGraphUpdateEnabled = 0x710 # bool
    m_flMaxSlopeDistance = 0x714 # float
    m_vLastSlopeCheckPos = 0x718 # Vector
    m_bAnimGraphDirty = 0x724 # bool
    m_vecForce = 0x728 # Vector
    m_nForceBone = 0x734 # int32_t
    m_pRagdollPose = 0x748 # PhysicsRagdollPose_t*
    m_bClientRagdoll = 0x750 # bool

class CBaseAnimGraphController: # CSkeletonAnimationController
    m_baseLayer = 0x18 # CNetworkedSequenceOperation
    m_animGraphNetworkedVars = 0x40 # CAnimGraphNetworkedVariables
    m_bSequenceFinished = 0x218 # bool
    m_flLastEventCycle = 0x21C # float
    m_flLastEventAnimTime = 0x220 # float
    m_flPlaybackRate = 0x224 # CNetworkedQuantizedFloat
    m_flPrevAnimTime = 0x22C # float
    m_bClientSideAnimation = 0x230 # bool
    m_bNetworkedAnimationInputsChanged = 0x231 # bool
    m_nNewSequenceParity = 0x234 # int32_t
    m_nResetEventsParity = 0x238 # int32_t
    m_nAnimLoopMode = 0x23C # AnimLoopMode_t
    m_hAnimationUpdate = 0x2DC # AnimationUpdateListHandle_t

class CBaseButton: # CBaseToggle
    m_angMoveEntitySpace = 0x780 # QAngle
    m_fStayPushed = 0x78C # bool
    m_fRotating = 0x78D # bool
    m_ls = 0x790 # locksound_t
    m_sUseSound = 0x7B0 # CUtlSymbolLarge
    m_sLockedSound = 0x7B8 # CUtlSymbolLarge
    m_sUnlockedSound = 0x7C0 # CUtlSymbolLarge
    m_bLocked = 0x7C8 # bool
    m_bDisabled = 0x7C9 # bool
    m_flUseLockedTime = 0x7CC # GameTime_t
    m_bSolidBsp = 0x7D0 # bool
    m_OnDamaged = 0x7D8 # CEntityIOOutput
    m_OnPressed = 0x800 # CEntityIOOutput
    m_OnUseLocked = 0x828 # CEntityIOOutput
    m_OnIn = 0x850 # CEntityIOOutput
    m_OnOut = 0x878 # CEntityIOOutput
    m_nState = 0x8A0 # int32_t
    m_hConstraint = 0x8A4 # CEntityHandle
    m_hConstraintParent = 0x8A8 # CEntityHandle
    m_bForceNpcExclude = 0x8AC # bool
    m_sGlowEntity = 0x8B0 # CUtlSymbolLarge
    m_glowEntity = 0x8B8 # CHandle<CBaseModelEntity>
    m_usable = 0x8BC # bool
    m_szDisplayText = 0x8C0 # CUtlSymbolLarge

class CBaseCSGrenade: # CCSWeaponBase
    m_bRedraw = 0xE30 # bool
    m_bIsHeldByPlayer = 0xE31 # bool
    m_bPinPulled = 0xE32 # bool
    m_bJumpThrow = 0xE33 # bool
    m_bThrowAnimating = 0xE34 # bool
    m_fThrowTime = 0xE38 # GameTime_t
    m_flThrowStrength = 0xE3C # float
    m_flThrowStrengthApproach = 0xE40 # float
    m_fDropTime = 0xE44 # GameTime_t
    m_bJustPulledPin = 0xE48 # bool
    m_nNextHoldTick = 0xE4C # GameTick_t
    m_flNextHoldFrac = 0xE50 # float
    m_hSwitchToWeaponAfterThrow = 0xE54 # CHandle<CCSWeaponBase>

class CBaseCSGrenadeProjectile: # CBaseGrenade
    m_vInitialPosition = 0x9C8 # Vector
    m_vInitialVelocity = 0x9D4 # Vector
    m_nBounces = 0x9E0 # int32_t
    m_nExplodeEffectIndex = 0x9E8 # CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_nExplodeEffectTickBegin = 0x9F0 # int32_t
    m_vecExplodeEffectOrigin = 0x9F4 # Vector
    m_flSpawnTime = 0xA00 # GameTime_t
    m_unOGSExtraFlags = 0xA04 # uint8_t
    m_bDetonationRecorded = 0xA05 # bool
    m_flDetonateTime = 0xA08 # GameTime_t
    m_nItemIndex = 0xA0C # uint16_t
    m_vecOriginalSpawnLocation = 0xA10 # Vector
    m_flLastBounceSoundTime = 0xA1C # GameTime_t
    m_vecGrenadeSpin = 0xA20 # RotationVector
    m_vecLastHitSurfaceNormal = 0xA2C # Vector
    m_nTicksAtZeroVelocity = 0xA38 # int32_t
    m_bHasEverHitPlayer = 0xA3C # bool
    m_bClearFromPlayers = 0xA3D # bool

class CBaseClientUIEntity: # CBaseModelEntity
    m_bEnabled = 0x700 # bool
    m_DialogXMLName = 0x708 # CUtlSymbolLarge
    m_PanelClassName = 0x710 # CUtlSymbolLarge
    m_PanelID = 0x718 # CUtlSymbolLarge
    m_CustomOutput0 = 0x720 # CEntityIOOutput
    m_CustomOutput1 = 0x748 # CEntityIOOutput
    m_CustomOutput2 = 0x770 # CEntityIOOutput
    m_CustomOutput3 = 0x798 # CEntityIOOutput
    m_CustomOutput4 = 0x7C0 # CEntityIOOutput
    m_CustomOutput5 = 0x7E8 # CEntityIOOutput
    m_CustomOutput6 = 0x810 # CEntityIOOutput
    m_CustomOutput7 = 0x838 # CEntityIOOutput
    m_CustomOutput8 = 0x860 # CEntityIOOutput
    m_CustomOutput9 = 0x888 # CEntityIOOutput

class CBaseCombatCharacter: # CBaseFlex
    m_bForceServerRagdoll = 0x920 # bool
    m_hMyWearables = 0x928 # CNetworkUtlVectorBase<CHandle<CEconWearable>>
    m_flFieldOfView = 0x940 # float
    m_impactEnergyScale = 0x944 # float
    m_LastHitGroup = 0x948 # HitGroup_t
    m_bApplyStressDamage = 0x94C # bool
    m_bloodColor = 0x950 # int32_t
    m_navMeshID = 0x9B0 # int32_t
    m_iDamageCount = 0x9B4 # int32_t
    m_pVecRelationships = 0x9B8 # CUtlVector<RelationshipOverride_t>*
    m_strRelationships = 0x9C0 # CUtlSymbolLarge
    m_eHull = 0x9C8 # Hull_t
    m_nNavHullIdx = 0x9CC # uint32_t

class CBaseDMStart: # CPointEntity
    m_Master = 0x4B0 # CUtlSymbolLarge

class CBaseDoor: # CBaseToggle
    m_angMoveEntitySpace = 0x790 # QAngle
    m_vecMoveDirParentSpace = 0x79C # Vector
    m_ls = 0x7A8 # locksound_t
    m_bForceClosed = 0x7C8 # bool
    m_bDoorGroup = 0x7C9 # bool
    m_bLocked = 0x7CA # bool
    m_bIgnoreDebris = 0x7CB # bool
    m_eSpawnPosition = 0x7CC # FuncDoorSpawnPos_t
    m_flBlockDamage = 0x7D0 # float
    m_NoiseMoving = 0x7D8 # CUtlSymbolLarge
    m_NoiseArrived = 0x7E0 # CUtlSymbolLarge
    m_NoiseMovingClosed = 0x7E8 # CUtlSymbolLarge
    m_NoiseArrivedClosed = 0x7F0 # CUtlSymbolLarge
    m_ChainTarget = 0x7F8 # CUtlSymbolLarge
    m_OnBlockedClosing = 0x800 # CEntityIOOutput
    m_OnBlockedOpening = 0x828 # CEntityIOOutput
    m_OnUnblockedClosing = 0x850 # CEntityIOOutput
    m_OnUnblockedOpening = 0x878 # CEntityIOOutput
    m_OnFullyClosed = 0x8A0 # CEntityIOOutput
    m_OnFullyOpen = 0x8C8 # CEntityIOOutput
    m_OnClose = 0x8F0 # CEntityIOOutput
    m_OnOpen = 0x918 # CEntityIOOutput
    m_OnLockedUse = 0x940 # CEntityIOOutput
    m_bLoopMoveSound = 0x968 # bool
    m_bCreateNavObstacle = 0x980 # bool
    m_isChaining = 0x981 # bool
    m_bIsUsable = 0x982 # bool

class CBaseEntity: # CEntityInstance
    m_CBodyComponent = 0x30 # CBodyComponent*
    m_NetworkTransmitComponent = 0x38 # CNetworkTransmitComponent
    m_aThinkFunctions = 0x228 # CUtlVector<thinkfunc_t>
    m_iCurrentThinkContext = 0x240 # int32_t
    m_nLastThinkTick = 0x244 # GameTick_t
    m_isSteadyState = 0x250 # CBitVec<64>
    m_lastNetworkChange = 0x258 # float
    m_ResponseContexts = 0x268 # CUtlVector<ResponseContext_t>
    m_iszResponseContext = 0x280 # CUtlSymbolLarge
    m_iHealth = 0x2A8 # int32_t
    m_iMaxHealth = 0x2AC # int32_t
    m_lifeState = 0x2B0 # uint8_t
    m_flDamageAccumulator = 0x2B4 # float
    m_bTakesDamage = 0x2B8 # bool
    m_nTakeDamageFlags = 0x2BC # TakeDamageFlags_t
    m_MoveCollide = 0x2C1 # MoveCollide_t
    m_MoveType = 0x2C2 # MoveType_t
    m_nWaterTouch = 0x2C3 # uint8_t
    m_nSlimeTouch = 0x2C4 # uint8_t
    m_bRestoreInHierarchy = 0x2C5 # bool
    m_target = 0x2C8 # CUtlSymbolLarge
    m_flMoveDoneTime = 0x2D0 # float
    m_hDamageFilter = 0x2D4 # CHandle<CBaseFilter>
    m_iszDamageFilterName = 0x2D8 # CUtlSymbolLarge
    m_nSubclassID = 0x2E0 # CUtlStringToken
    m_flAnimTime = 0x2F0 # float
    m_flSimulationTime = 0x2F4 # float
    m_flCreateTime = 0x2F8 # GameTime_t
    m_bClientSideRagdoll = 0x2FC # bool
    m_ubInterpolationFrame = 0x2FD # uint8_t
    m_vPrevVPhysicsUpdatePos = 0x300 # Vector
    m_iTeamNum = 0x30C # uint8_t
    m_iGlobalname = 0x310 # CUtlSymbolLarge
    m_iSentToClients = 0x318 # int32_t
    m_flSpeed = 0x31C # float
    m_sUniqueHammerID = 0x320 # CUtlString
    m_spawnflags = 0x328 # uint32_t
    m_nNextThinkTick = 0x32C # GameTick_t
    m_nSimulationTick = 0x330 # int32_t
    m_OnKilled = 0x338 # CEntityIOOutput
    m_fFlags = 0x360 # uint32_t
    m_vecAbsVelocity = 0x364 # Vector
    m_vecVelocity = 0x370 # CNetworkVelocityVector
    m_vecBaseVelocity = 0x3A0 # Vector
    m_nPushEnumCount = 0x3AC # int32_t
    m_pCollision = 0x3B0 # CCollisionProperty*
    m_hEffectEntity = 0x3B8 # CHandle<CBaseEntity>
    m_hOwnerEntity = 0x3BC # CHandle<CBaseEntity>
    m_fEffects = 0x3C0 # uint32_t
    m_hGroundEntity = 0x3C4 # CHandle<CBaseEntity>
    m_flFriction = 0x3C8 # float
    m_flElasticity = 0x3CC # float
    m_flGravityScale = 0x3D0 # float
    m_flTimeScale = 0x3D4 # float
    m_flWaterLevel = 0x3D8 # float
    m_bSimulatedEveryTick = 0x3DC # bool
    m_bAnimatedEveryTick = 0x3DD # bool
    m_bDisableLowViolence = 0x3DE # bool
    m_nWaterType = 0x3DF # uint8_t
    m_iEFlags = 0x3E0 # int32_t
    m_OnUser1 = 0x3E8 # CEntityIOOutput
    m_OnUser2 = 0x410 # CEntityIOOutput
    m_OnUser3 = 0x438 # CEntityIOOutput
    m_OnUser4 = 0x460 # CEntityIOOutput
    m_iInitialTeamNum = 0x488 # int32_t
    m_flNavIgnoreUntilTime = 0x48C # GameTime_t
    m_vecAngVelocity = 0x490 # QAngle
    m_bNetworkQuantizeOriginAndAngles = 0x49C # bool
    m_bLagCompensate = 0x49D # bool
    m_flOverriddenFriction = 0x4A0 # float
    m_pBlocker = 0x4A4 # CHandle<CBaseEntity>
    m_flLocalTime = 0x4A8 # float
    m_flVPhysicsUpdateLocalTime = 0x4AC # float

class CBaseFilter: # CLogicalEntity
    m_bNegated = 0x4B0 # bool
    m_OnPass = 0x4B8 # CEntityIOOutput
    m_OnFail = 0x4E0 # CEntityIOOutput

class CBaseFire: # CBaseEntity
    m_flScale = 0x4B0 # float
    m_flStartScale = 0x4B4 # float
    m_flScaleTime = 0x4B8 # float
    m_nFlags = 0x4BC # uint32_t

class CBaseFlex: # CBaseAnimGraph
    m_flexWeight = 0x890 # CNetworkUtlVectorBase<float>
    m_vLookTargetPosition = 0x8A8 # Vector
    m_blinktoggle = 0x8B4 # bool
    m_flAllowResponsesEndTime = 0x908 # GameTime_t
    m_flLastFlexAnimationTime = 0x90C # GameTime_t
    m_nNextSceneEventId = 0x910 # uint32_t
    m_bUpdateLayerPriorities = 0x914 # bool

class CBaseFlexAlias_funCBaseFlex: # CBaseFlex

class CBaseGrenade: # CBaseFlex
    m_OnPlayerPickup = 0x928 # CEntityIOOutput
    m_OnExplode = 0x950 # CEntityIOOutput
    m_bHasWarnedAI = 0x978 # bool
    m_bIsSmokeGrenade = 0x979 # bool
    m_bIsLive = 0x97A # bool
    m_DmgRadius = 0x97C # float
    m_flDetonateTime = 0x980 # GameTime_t
    m_flWarnAITime = 0x984 # float
    m_flDamage = 0x988 # float
    m_iszBounceSound = 0x990 # CUtlSymbolLarge
    m_ExplosionSound = 0x998 # CUtlString
    m_hThrower = 0x9A4 # CHandle<CCSPlayerPawn>
    m_flNextAttack = 0x9BC # GameTime_t
    m_hOriginalThrower = 0x9C0 # CHandle<CCSPlayerPawn>

class CBaseIssue:
    m_szTypeString = 0x20 # char[64]
    m_szDetailsString = 0x60 # char[260]
    m_iNumYesVotes = 0x164 # int32_t
    m_iNumNoVotes = 0x168 # int32_t
    m_iNumPotentialVotes = 0x16C # int32_t
    m_pVoteController = 0x170 # CVoteController*

class CBaseModelEntity: # CBaseEntity
    m_CRenderComponent = 0x4B0 # CRenderComponent*
    m_CHitboxComponent = 0x4B8 # CHitboxComponent
    m_flDissolveStartTime = 0x4E0 # GameTime_t
    m_OnIgnite = 0x4E8 # CEntityIOOutput
    m_nRenderMode = 0x510 # RenderMode_t
    m_nRenderFX = 0x511 # RenderFx_t
    m_bAllowFadeInView = 0x512 # bool
    m_clrRender = 0x513 # Color
    m_vecRenderAttributes = 0x518 # CUtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
    m_bRenderToCubemaps = 0x568 # bool
    m_Collision = 0x570 # CCollisionProperty
    m_Glow = 0x620 # CGlowProperty
    m_flGlowBackfaceMult = 0x678 # float
    m_fadeMinDist = 0x67C # float
    m_fadeMaxDist = 0x680 # float
    m_flFadeScale = 0x684 # float
    m_flShadowStrength = 0x688 # float
    m_nObjectCulling = 0x68C # uint8_t
    m_nAddDecal = 0x690 # int32_t
    m_vDecalPosition = 0x694 # Vector
    m_vDecalForwardAxis = 0x6A0 # Vector
    m_flDecalHealBloodRate = 0x6AC # float
    m_flDecalHealHeightRate = 0x6B0 # float
    m_ConfigEntitiesToPropagateMaterialDecalsTo = 0x6B8 # CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    m_vecViewOffset = 0x6D0 # CNetworkViewOffsetVector

class CBaseMoveBehavior: # CPathKeyFrame
    m_iPositionInterpolator = 0x510 # int32_t
    m_iRotationInterpolator = 0x514 # int32_t
    m_flAnimStartTime = 0x518 # float
    m_flAnimEndTime = 0x51C # float
    m_flAverageSpeedAcrossFrame = 0x520 # float
    m_pCurrentKeyFrame = 0x528 # CPathKeyFrame*
    m_pTargetKeyFrame = 0x530 # CPathKeyFrame*
    m_pPreKeyFrame = 0x538 # CPathKeyFrame*
    m_pPostKeyFrame = 0x540 # CPathKeyFrame*
    m_flTimeIntoFrame = 0x548 # float
    m_iDirection = 0x54C # int32_t

class CBasePlatTrain: # CBaseToggle
    m_NoiseMoving = 0x780 # CUtlSymbolLarge
    m_NoiseArrived = 0x788 # CUtlSymbolLarge
    m_volume = 0x798 # float
    m_flTWidth = 0x79C # float
    m_flTLength = 0x7A0 # float

class CBasePlayerController: # CBaseEntity
    m_nInButtonsWhichAreToggles = 0x4B8 # uint64_t
    m_nTickBase = 0x4C0 # uint32_t
    m_hPawn = 0x4F0 # CHandle<CBasePlayerPawn>
    m_nSplitScreenSlot = 0x4F4 # CSplitScreenSlot
    m_hSplitOwner = 0x4F8 # CHandle<CBasePlayerController>
    m_hSplitScreenPlayers = 0x500 # CUtlVector<CHandle<CBasePlayerController>>
    m_bIsHLTV = 0x518 # bool
    m_iConnected = 0x51C # PlayerConnectedState
    m_iszPlayerName = 0x520 # char[128]
    m_szNetworkIDString = 0x5A0 # CUtlString
    m_fLerpTime = 0x5A8 # float
    m_bLagCompensation = 0x5AC # bool
    m_bPredict = 0x5AD # bool
    m_bAutoKickDisabled = 0x5AE # bool
    m_bIsLowViolence = 0x5AF # bool
    m_bGamePaused = 0x5B0 # bool
    m_nUsecTimestampLastUserCmdReceived = 0x648 # int64_t
    m_nLastRealCommandNumberExecuted = 0x654 # int32_t
    m_iIgnoreGlobalChat = 0x668 # ChatIgnoreType_t
    m_flLastPlayerTalkTime = 0x66C # float
    m_flLastEntitySteadyState = 0x670 # float
    m_nAvailableEntitySteadyState = 0x674 # int32_t
    m_bHasAnySteadyStateEnts = 0x678 # bool
    m_steamID = 0x688 # uint64_t
    m_iDesiredFOV = 0x690 # uint32_t

class CBasePlayerPawn: # CBaseCombatCharacter
    m_pWeaponServices = 0x9D0 # CPlayer_WeaponServices*
    m_pItemServices = 0x9D8 # CPlayer_ItemServices*
    m_pAutoaimServices = 0x9E0 # CPlayer_AutoaimServices*
    m_pObserverServices = 0x9E8 # CPlayer_ObserverServices*
    m_pWaterServices = 0x9F0 # CPlayer_WaterServices*
    m_pUseServices = 0x9F8 # CPlayer_UseServices*
    m_pFlashlightServices = 0xA00 # CPlayer_FlashlightServices*
    m_pCameraServices = 0xA08 # CPlayer_CameraServices*
    m_pMovementServices = 0xA10 # CPlayer_MovementServices*
    m_ServerViewAngleChanges = 0xA20 # CUtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
    m_nHighestGeneratedServerViewAngleChangeIndex = 0xA70 # uint32_t
    v_angle = 0xA74 # QAngle
    v_anglePrevious = 0xA80 # QAngle
    m_iHideHUD = 0xA8C # uint32_t
    m_skybox3d = 0xA90 # sky3dparams_t
    m_fTimeLastHurt = 0xB20 # GameTime_t
    m_flDeathTime = 0xB24 # GameTime_t
    m_fNextSuicideTime = 0xB28 # GameTime_t
    m_fInitHUD = 0xB2C # bool
    m_pExpresser = 0xB30 # CAI_Expresser*
    m_hController = 0xB38 # CHandle<CBasePlayerController>
    m_fHltvReplayDelay = 0xB40 # float
    m_fHltvReplayEnd = 0xB44 # float
    m_iHltvReplayEntity = 0xB48 # CEntityIndex

class CBasePlayerVData: # CEntitySubclassVDataBase
    m_sModelName = 0x28 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    m_flHeadDamageMultiplier = 0x108 # CSkillFloat
    m_flChestDamageMultiplier = 0x118 # CSkillFloat
    m_flStomachDamageMultiplier = 0x128 # CSkillFloat
    m_flArmDamageMultiplier = 0x138 # CSkillFloat
    m_flLegDamageMultiplier = 0x148 # CSkillFloat
    m_flHoldBreathTime = 0x158 # float
    m_flDrowningDamageInterval = 0x15C # float
    m_nDrowningDamageInitial = 0x160 # int32_t
    m_nDrowningDamageMax = 0x164 # int32_t
    m_nWaterSpeed = 0x168 # int32_t
    m_flUseRange = 0x16C # float
    m_flUseAngleTolerance = 0x170 # float
    m_flCrouchTime = 0x174 # float

class CBasePlayerWeapon: # CEconEntity
    m_nNextPrimaryAttackTick = 0xC18 # GameTick_t
    m_flNextPrimaryAttackTickRatio = 0xC1C # float
    m_nNextSecondaryAttackTick = 0xC20 # GameTick_t
    m_flNextSecondaryAttackTickRatio = 0xC24 # float
    m_iClip1 = 0xC28 # int32_t
    m_iClip2 = 0xC2C # int32_t
    m_pReserveAmmo = 0xC30 # int32_t[2]
    m_OnPlayerUse = 0xC38 # CEntityIOOutput

class CBasePlayerWeaponVData: # CEntitySubclassVDataBase
    m_szWorldModel = 0x28 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    m_bBuiltRightHanded = 0x108 # bool
    m_bAllowFlipping = 0x109 # bool
    m_bIsFullAuto = 0x10A # bool
    m_nNumBullets = 0x10C # int32_t
    m_sMuzzleAttachment = 0x110 # CUtlString
    m_szMuzzleFlashParticle = 0x118 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    m_iFlags = 0x1F8 # ItemFlagTypes_t
    m_nPrimaryAmmoType = 0x1F9 # AmmoIndex_t
    m_nSecondaryAmmoType = 0x1FA # AmmoIndex_t
    m_iMaxClip1 = 0x1FC # int32_t
    m_iMaxClip2 = 0x200 # int32_t
    m_iDefaultClip1 = 0x204 # int32_t
    m_iDefaultClip2 = 0x208 # int32_t
    m_iWeight = 0x20C # int32_t
    m_bAutoSwitchTo = 0x210 # bool
    m_bAutoSwitchFrom = 0x211 # bool
    m_iRumbleEffect = 0x214 # RumbleEffect_t
    m_aShootSounds = 0x218 # CUtlMap<WeaponSound_t,CSoundEventName>
    m_iSlot = 0x238 # int32_t
    m_iPosition = 0x23C # int32_t

class CBaseProp: # CBaseAnimGraph
    m_bModelOverrodeBlockLOS = 0x890 # bool
    m_iShapeType = 0x894 # int32_t
    m_bConformToCollisionBounds = 0x898 # bool
    m_mPreferredCatchTransform = 0x89C # matrix3x4_t

class CBasePropDoor: # CDynamicProp
    m_flAutoReturnDelay = 0xB18 # float
    m_hDoorList = 0xB20 # CUtlVector<CHandle<CBasePropDoor>>
    m_nHardwareType = 0xB38 # int32_t
    m_bNeedsHardware = 0xB3C # bool
    m_eDoorState = 0xB40 # DoorState_t
    m_bLocked = 0xB44 # bool
    m_closedPosition = 0xB48 # Vector
    m_closedAngles = 0xB54 # QAngle
    m_hBlocker = 0xB60 # CHandle<CBaseEntity>
    m_bFirstBlocked = 0xB64 # bool
    m_ls = 0xB68 # locksound_t
    m_bForceClosed = 0xB88 # bool
    m_vecLatchWorldPosition = 0xB8C # Vector
    m_hActivator = 0xB98 # CHandle<CBaseEntity>
    m_SoundMoving = 0xBA8 # CUtlSymbolLarge
    m_SoundOpen = 0xBB0 # CUtlSymbolLarge
    m_SoundClose = 0xBB8 # CUtlSymbolLarge
    m_SoundLock = 0xBC0 # CUtlSymbolLarge
    m_SoundUnlock = 0xBC8 # CUtlSymbolLarge
    m_SoundLatch = 0xBD0 # CUtlSymbolLarge
    m_SoundPound = 0xBD8 # CUtlSymbolLarge
    m_SoundJiggle = 0xBE0 # CUtlSymbolLarge
    m_SoundLockedAnim = 0xBE8 # CUtlSymbolLarge
    m_numCloseAttempts = 0xBF0 # int32_t
    m_nPhysicsMaterial = 0xBF4 # CUtlStringToken
    m_SlaveName = 0xBF8 # CUtlSymbolLarge
    m_hMaster = 0xC00 # CHandle<CBasePropDoor>
    m_OnBlockedClosing = 0xC08 # CEntityIOOutput
    m_OnBlockedOpening = 0xC30 # CEntityIOOutput
    m_OnUnblockedClosing = 0xC58 # CEntityIOOutput
    m_OnUnblockedOpening = 0xC80 # CEntityIOOutput
    m_OnFullyClosed = 0xCA8 # CEntityIOOutput
    m_OnFullyOpen = 0xCD0 # CEntityIOOutput
    m_OnClose = 0xCF8 # CEntityIOOutput
    m_OnOpen = 0xD20 # CEntityIOOutput
    m_OnLockedUse = 0xD48 # CEntityIOOutput
    m_OnAjarOpen = 0xD70 # CEntityIOOutput

class CBaseToggle: # CBaseModelEntity
    m_toggle_state = 0x700 # TOGGLE_STATE
    m_flMoveDistance = 0x704 # float
    m_flWait = 0x708 # float
    m_flLip = 0x70C # float
    m_bAlwaysFireBlockedOutputs = 0x710 # bool
    m_vecPosition1 = 0x714 # Vector
    m_vecPosition2 = 0x720 # Vector
    m_vecMoveAng = 0x72C # QAngle
    m_vecAngle1 = 0x738 # QAngle
    m_vecAngle2 = 0x744 # QAngle
    m_flHeight = 0x750 # float
    m_hActivator = 0x754 # CHandle<CBaseEntity>
    m_vecFinalDest = 0x758 # Vector
    m_vecFinalAngle = 0x764 # QAngle
    m_movementType = 0x770 # int32_t
    m_sMaster = 0x778 # CUtlSymbolLarge

class CBaseTrigger: # CBaseToggle
    m_bDisabled = 0x780 # bool
    m_iFilterName = 0x788 # CUtlSymbolLarge
    m_hFilter = 0x790 # CHandle<CBaseFilter>
    m_OnStartTouch = 0x798 # CEntityIOOutput
    m_OnStartTouchAll = 0x7C0 # CEntityIOOutput
    m_OnEndTouch = 0x7E8 # CEntityIOOutput
    m_OnEndTouchAll = 0x810 # CEntityIOOutput
    m_OnTouching = 0x838 # CEntityIOOutput
    m_OnNotTouching = 0x860 # CEntityIOOutput
    m_hTouchingEntities = 0x888 # CUtlVector<CHandle<CBaseEntity>>
    m_bClientSidePredicted = 0x8A0 # bool

class CBaseViewModel: # CBaseAnimGraph
    m_vecLastFacing = 0x898 # Vector
    m_nViewModelIndex = 0x8A4 # uint32_t
    m_nAnimationParity = 0x8A8 # uint32_t
    m_flAnimationStartTime = 0x8AC # float
    m_hWeapon = 0x8B0 # CHandle<CBasePlayerWeapon>
    m_sVMName = 0x8B8 # CUtlSymbolLarge
    m_sAnimationPrefix = 0x8C0 # CUtlSymbolLarge
    m_hOldLayerSequence = 0x8C8 # HSequence
    m_oldLayer = 0x8CC # int32_t
    m_oldLayerStartTime = 0x8D0 # float
    m_hControlPanel = 0x8D4 # CHandle<CBaseEntity>

class CBeam: # CBaseModelEntity
    m_flFrameRate = 0x700 # float
    m_flHDRColorScale = 0x704 # float
    m_flFireTime = 0x708 # GameTime_t
    m_flDamage = 0x70C # float
    m_nNumBeamEnts = 0x710 # uint8_t
    m_hBaseMaterial = 0x718 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_nHaloIndex = 0x720 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_nBeamType = 0x728 # BeamType_t
    m_nBeamFlags = 0x72C # uint32_t
    m_hAttachEntity = 0x730 # CHandle<CBaseEntity>[10]
    m_nAttachIndex = 0x758 # AttachmentHandle_t[10]
    m_fWidth = 0x764 # float
    m_fEndWidth = 0x768 # float
    m_fFadeLength = 0x76C # float
    m_fHaloScale = 0x770 # float
    m_fAmplitude = 0x774 # float
    m_fStartFrame = 0x778 # float
    m_fSpeed = 0x77C # float
    m_flFrame = 0x780 # float
    m_nClipStyle = 0x784 # BeamClipStyle_t
    m_bTurnedOff = 0x788 # bool
    m_vecEndPos = 0x78C # Vector
    m_hEndEntity = 0x798 # CHandle<CBaseEntity>
    m_nDissolveType = 0x79C # int32_t

class CBlood: # CPointEntity
    m_vecSprayAngles = 0x4B0 # QAngle
    m_vecSprayDir = 0x4BC # Vector
    m_flAmount = 0x4C8 # float
    m_Color = 0x4CC # int32_t

class CBodyComponent: # CEntityComponent
    m_pSceneNode = 0x8 # CGameSceneNode*
    __m_pChainEntity = 0x20 # CNetworkVarChainer

class CBodyComponentBaseAnimGraph: # CBodyComponentSkeletonInstance
    m_animationController = 0x480 # CBaseAnimGraphController
    __m_pChainEntity = 0x760 # CNetworkVarChainer

class CBodyComponentBaseModelEntity: # CBodyComponentSkeletonInstance
    __m_pChainEntity = 0x480 # CNetworkVarChainer

class CBodyComponentPoint: # CBodyComponent
    m_sceneNode = 0x50 # CGameSceneNode
    __m_pChainEntity = 0x1A0 # CNetworkVarChainer

class CBodyComponentSkeletonInstance: # CBodyComponent
    m_skeletonInstance = 0x50 # CSkeletonInstance
    __m_pChainEntity = 0x450 # CNetworkVarChainer

class CBombTarget: # CBaseTrigger
    m_OnBombExplode = 0x8A8 # CEntityIOOutput
    m_OnBombPlanted = 0x8D0 # CEntityIOOutput
    m_OnBombDefused = 0x8F8 # CEntityIOOutput
    m_bIsBombSiteB = 0x920 # bool
    m_bIsHeistBombTarget = 0x921 # bool
    m_bBombPlantedHere = 0x922 # bool
    m_szMountTarget = 0x928 # CUtlSymbolLarge
    m_hInstructorHint = 0x930 # CHandle<CBaseEntity>
    m_nBombSiteDesignation = 0x934 # int32_t

class CBot:
    m_pController = 0x10 # CCSPlayerController*
    m_pPlayer = 0x18 # CCSPlayerPawn*
    m_bHasSpawned = 0x20 # bool
    m_id = 0x24 # uint32_t
    m_isRunning = 0xB8 # bool
    m_isCrouching = 0xB9 # bool
    m_forwardSpeed = 0xBC # float
    m_leftSpeed = 0xC0 # float
    m_verticalSpeed = 0xC4 # float
    m_buttonFlags = 0xC8 # uint64_t
    m_jumpTimestamp = 0xD0 # float
    m_viewForward = 0xD4 # Vector
    m_postureStackIndex = 0xF0 # int32_t

class CBreachCharge: # CCSWeaponBase

class CBreachChargeProjectile: # CBaseGrenade

class CBreakable: # CBaseModelEntity
    m_Material = 0x710 # Materials
    m_hBreaker = 0x714 # CHandle<CBaseEntity>
    m_Explosion = 0x718 # Explosions
    m_iszSpawnObject = 0x720 # CUtlSymbolLarge
    m_flPressureDelay = 0x728 # float
    m_iMinHealthDmg = 0x72C # int32_t
    m_iszPropData = 0x730 # CUtlSymbolLarge
    m_impactEnergyScale = 0x738 # float
    m_nOverrideBlockLOS = 0x73C # EOverrideBlockLOS_t
    m_OnBreak = 0x740 # CEntityIOOutput
    m_OnHealthChanged = 0x768 # CEntityOutputTemplate<float>
    m_flDmgModBullet = 0x790 # float
    m_flDmgModClub = 0x794 # float
    m_flDmgModExplosive = 0x798 # float
    m_flDmgModFire = 0x79C # float
    m_iszPhysicsDamageTableName = 0x7A0 # CUtlSymbolLarge
    m_iszBasePropData = 0x7A8 # CUtlSymbolLarge
    m_iInteractions = 0x7B0 # int32_t
    m_PerformanceMode = 0x7B4 # PerformanceMode_t
    m_hPhysicsAttacker = 0x7B8 # CHandle<CBasePlayerPawn>
    m_flLastPhysicsInfluenceTime = 0x7BC # GameTime_t

class CBreakableProp: # CBaseProp
    m_OnBreak = 0x8E0 # CEntityIOOutput
    m_OnHealthChanged = 0x908 # CEntityOutputTemplate<float>
    m_OnTakeDamage = 0x930 # CEntityIOOutput
    m_impactEnergyScale = 0x958 # float
    m_iMinHealthDmg = 0x95C # int32_t
    m_preferredCarryAngles = 0x960 # QAngle
    m_flPressureDelay = 0x96C # float
    m_hBreaker = 0x970 # CHandle<CBaseEntity>
    m_PerformanceMode = 0x974 # PerformanceMode_t
    m_flDmgModBullet = 0x978 # float
    m_flDmgModClub = 0x97C # float
    m_flDmgModExplosive = 0x980 # float
    m_flDmgModFire = 0x984 # float
    m_iszPhysicsDamageTableName = 0x988 # CUtlSymbolLarge
    m_iszBasePropData = 0x990 # CUtlSymbolLarge
    m_iInteractions = 0x998 # int32_t
    m_flPreventDamageBeforeTime = 0x99C # GameTime_t
    m_bHasBreakPiecesOrCommands = 0x9A0 # bool
    m_explodeDamage = 0x9A4 # float
    m_explodeRadius = 0x9A8 # float
    m_explosionDelay = 0x9B0 # float
    m_explosionBuildupSound = 0x9B8 # CUtlSymbolLarge
    m_explosionCustomEffect = 0x9C0 # CUtlSymbolLarge
    m_explosionCustomSound = 0x9C8 # CUtlSymbolLarge
    m_explosionModifier = 0x9D0 # CUtlSymbolLarge
    m_hPhysicsAttacker = 0x9D8 # CHandle<CBasePlayerPawn>
    m_flLastPhysicsInfluenceTime = 0x9DC # GameTime_t
    m_bOriginalBlockLOS = 0x9E0 # bool
    m_flDefaultFadeScale = 0x9E4 # float
    m_hLastAttacker = 0x9E8 # CHandle<CBaseEntity>
    m_hFlareEnt = 0x9EC # CHandle<CBaseEntity>
    m_bUsePuntSound = 0x9F0 # bool
    m_iszPuntSound = 0x9F8 # CUtlSymbolLarge
    m_noGhostCollision = 0xA00 # bool

class CBreakableStageHelper:
    m_nCurrentStage = 0x8 # int32_t
    m_nStageCount = 0xC # int32_t

class CBtActionAim: # CBtNode
    m_szSensorInputKey = 0x68 # CUtlString
    m_szAimReadyKey = 0x80 # CUtlString
    m_flZoomCooldownTimestamp = 0x88 # float
    m_bDoneAiming = 0x8C # bool
    m_flLerpStartTime = 0x90 # float
    m_flNextLookTargetLerpTime = 0x94 # float
    m_flPenaltyReductionRatio = 0x98 # float
    m_NextLookTarget = 0x9C # QAngle
    m_AimTimer = 0xA8 # CountdownTimer
    m_SniperHoldTimer = 0xC0 # CountdownTimer
    m_FocusIntervalTimer = 0xD8 # CountdownTimer
    m_bAcquired = 0xF0 # bool

class CBtActionCombatPositioning: # CBtNode
    m_szSensorInputKey = 0x68 # CUtlString
    m_szIsAttackingKey = 0x80 # CUtlString
    m_ActionTimer = 0x88 # CountdownTimer
    m_bCrouching = 0xA0 # bool

class CBtActionMoveTo: # CBtNode
    m_szDestinationInputKey = 0x60 # CUtlString
    m_szHidingSpotInputKey = 0x68 # CUtlString
    m_szThreatInputKey = 0x70 # CUtlString
    m_vecDestination = 0x78 # Vector
    m_bAutoLookAdjust = 0x84 # bool
    m_bComputePath = 0x85 # bool
    m_flDamagingAreasPenaltyCost = 0x88 # float
    m_CheckApproximateCornersTimer = 0x90 # CountdownTimer
    m_CheckHighPriorityItem = 0xA8 # CountdownTimer
    m_RepathTimer = 0xC0 # CountdownTimer
    m_flArrivalEpsilon = 0xD8 # float
    m_flAdditionalArrivalEpsilon2D = 0xDC # float
    m_flHidingSpotCheckDistanceThreshold = 0xE0 # float
    m_flNearestAreaDistanceThreshold = 0xE4 # float

class CBtActionParachutePositioning: # CBtNode
    m_ActionTimer = 0x58 # CountdownTimer

class CBtNode:

class CBtNodeComposite: # CBtNode

class CBtNodeCondition: # CBtNodeDecorator
    m_bNegated = 0x58 # bool

class CBtNodeConditionInactive: # CBtNodeCondition
    m_flRoundStartThresholdSeconds = 0x78 # float
    m_flSensorInactivityThresholdSeconds = 0x7C # float
    m_SensorInactivityTimer = 0x80 # CountdownTimer

class CBtNodeDecorator: # CBtNode

class CBubbling: # CBaseModelEntity
    m_density = 0x700 # int32_t
    m_frequency = 0x704 # int32_t
    m_state = 0x708 # int32_t

class CBumpMine: # CCSWeaponBase

class CBumpMineProjectile: # CBaseGrenade

class CBuoyancyHelper:
    m_flFluidDensity = 0x18 # float

class CBuyZone: # CBaseTrigger
    m_LegacyTeamNum = 0x8A8 # int32_t

class CC4: # CCSWeaponBase
    m_vecLastValidPlayerHeldPosition = 0xE30 # Vector
    m_vecLastValidDroppedPosition = 0xE3C # Vector
    m_bDoValidDroppedPositionCheck = 0xE48 # bool
    m_bStartedArming = 0xE49 # bool
    m_fArmedTime = 0xE4C # GameTime_t
    m_bBombPlacedAnimation = 0xE50 # bool
    m_bIsPlantingViaUse = 0xE51 # bool
    m_entitySpottedState = 0xE58 # EntitySpottedState_t
    m_nSpotRules = 0xE70 # int32_t
    m_bPlayedArmingBeeps = 0xE74 # bool[7]
    m_bBombPlanted = 0xE7B # bool
    m_bDroppedFromDeath = 0xE7C # bool

class CCSBot: # CBot
    m_lastCoopSpawnPoint = 0xF8 # CHandle<SpawnPointCoopEnemy>
    m_eyePosition = 0x108 # Vector
    m_name = 0x114 # char[64]
    m_combatRange = 0x154 # float
    m_isRogue = 0x158 # bool
    m_rogueTimer = 0x160 # CountdownTimer
    m_diedLastRound = 0x17C # bool
    m_safeTime = 0x180 # float
    m_wasSafe = 0x184 # bool
    m_blindFire = 0x18C # bool
    m_surpriseTimer = 0x190 # CountdownTimer
    m_bAllowActive = 0x1A8 # bool
    m_isFollowing = 0x1A9 # bool
    m_leader = 0x1AC # CHandle<CCSPlayerPawn>
    m_followTimestamp = 0x1B0 # float
    m_allowAutoFollowTime = 0x1B4 # float
    m_hurryTimer = 0x1B8 # CountdownTimer
    m_alertTimer = 0x1D0 # CountdownTimer
    m_sneakTimer = 0x1E8 # CountdownTimer
    m_panicTimer = 0x200 # CountdownTimer
    m_stateTimestamp = 0x4D0 # float
    m_isAttacking = 0x4D4 # bool
    m_isOpeningDoor = 0x4D5 # bool
    m_taskEntity = 0x4DC # CHandle<CBaseEntity>
    m_goalPosition = 0x4EC # Vector
    m_goalEntity = 0x4F8 # CHandle<CBaseEntity>
    m_avoid = 0x4FC # CHandle<CBaseEntity>
    m_avoidTimestamp = 0x500 # float
    m_isStopping = 0x504 # bool
    m_hasVisitedEnemySpawn = 0x505 # bool
    m_stillTimer = 0x508 # IntervalTimer
    m_bEyeAnglesUnderPathFinderControl = 0x518 # bool
    m_pathIndex = 0x6610 # int32_t
    m_areaEnteredTimestamp = 0x6614 # GameTime_t
    m_repathTimer = 0x6618 # CountdownTimer
    m_avoidFriendTimer = 0x6630 # CountdownTimer
    m_isFriendInTheWay = 0x6648 # bool
    m_politeTimer = 0x6650 # CountdownTimer
    m_isWaitingBehindFriend = 0x6668 # bool
    m_pathLadderEnd = 0x6694 # float
    m_mustRunTimer = 0x66E0 # CountdownTimer
    m_waitTimer = 0x66F8 # CountdownTimer
    m_updateTravelDistanceTimer = 0x6710 # CountdownTimer
    m_playerTravelDistance = 0x6728 # float[64]
    m_travelDistancePhase = 0x6828 # uint8_t
    m_hostageEscortCount = 0x69C0 # uint8_t
    m_hostageEscortCountTimestamp = 0x69C4 # float
    m_desiredTeam = 0x69C8 # int32_t
    m_hasJoined = 0x69CC # bool
    m_isWaitingForHostage = 0x69CD # bool
    m_inhibitWaitingForHostageTimer = 0x69D0 # CountdownTimer
    m_waitForHostageTimer = 0x69E8 # CountdownTimer
    m_noisePosition = 0x6A00 # Vector
    m_noiseTravelDistance = 0x6A0C # float
    m_noiseTimestamp = 0x6A10 # float
    m_noiseSource = 0x6A18 # CCSPlayerPawn*
    m_noiseBendTimer = 0x6A30 # CountdownTimer
    m_bentNoisePosition = 0x6A48 # Vector
    m_bendNoisePositionValid = 0x6A54 # bool
    m_lookAroundStateTimestamp = 0x6A58 # float
    m_lookAheadAngle = 0x6A5C # float
    m_forwardAngle = 0x6A60 # float
    m_inhibitLookAroundTimestamp = 0x6A64 # float
    m_lookAtSpot = 0x6A6C # Vector
    m_lookAtSpotDuration = 0x6A7C # float
    m_lookAtSpotTimestamp = 0x6A80 # float
    m_lookAtSpotAngleTolerance = 0x6A84 # float
    m_lookAtSpotClearIfClose = 0x6A88 # bool
    m_lookAtSpotAttack = 0x6A89 # bool
    m_lookAtDesc = 0x6A90 # char*
    m_peripheralTimestamp = 0x6A98 # float
    m_approachPointCount = 0x6C20 # uint8_t
    m_approachPointViewPosition = 0x6C24 # Vector
    m_viewSteadyTimer = 0x6C30 # IntervalTimer
    m_tossGrenadeTimer = 0x6C48 # CountdownTimer
    m_isAvoidingGrenade = 0x6C68 # CountdownTimer
    m_spotCheckTimestamp = 0x6C88 # float
    m_checkedHidingSpotCount = 0x7090 # int32_t
    m_lookPitch = 0x7094 # float
    m_lookPitchVel = 0x7098 # float
    m_lookYaw = 0x709C # float
    m_lookYawVel = 0x70A0 # float
    m_targetSpot = 0x70A4 # Vector
    m_targetSpotVelocity = 0x70B0 # Vector
    m_targetSpotPredicted = 0x70BC # Vector
    m_aimError = 0x70C8 # QAngle
    m_aimGoal = 0x70D4 # QAngle
    m_targetSpotTime = 0x70E0 # GameTime_t
    m_aimFocus = 0x70E4 # float
    m_aimFocusInterval = 0x70E8 # float
    m_aimFocusNextUpdate = 0x70EC # GameTime_t
    m_ignoreEnemiesTimer = 0x70F8 # CountdownTimer
    m_enemy = 0x7110 # CHandle<CCSPlayerPawn>
    m_isEnemyVisible = 0x7114 # bool
    m_visibleEnemyParts = 0x7115 # uint8_t
    m_lastEnemyPosition = 0x7118 # Vector
    m_lastSawEnemyTimestamp = 0x7124 # float
    m_firstSawEnemyTimestamp = 0x7128 # float
    m_currentEnemyAcquireTimestamp = 0x712C # float
    m_enemyDeathTimestamp = 0x7130 # float
    m_friendDeathTimestamp = 0x7134 # float
    m_isLastEnemyDead = 0x7138 # bool
    m_nearbyEnemyCount = 0x713C # int32_t
    m_bomber = 0x7348 # CHandle<CCSPlayerPawn>
    m_nearbyFriendCount = 0x734C # int32_t
    m_closestVisibleFriend = 0x7350 # CHandle<CCSPlayerPawn>
    m_closestVisibleHumanFriend = 0x7354 # CHandle<CCSPlayerPawn>
    m_attentionInterval = 0x7358 # IntervalTimer
    m_attacker = 0x7368 # CHandle<CCSPlayerPawn>
    m_attackedTimestamp = 0x736C # float
    m_burnedByFlamesTimer = 0x7370 # IntervalTimer
    m_lastVictimID = 0x7380 # int32_t
    m_isAimingAtEnemy = 0x7384 # bool
    m_isRapidFiring = 0x7385 # bool
    m_equipTimer = 0x7388 # IntervalTimer
    m_zoomTimer = 0x7398 # CountdownTimer
    m_fireWeaponTimestamp = 0x73B0 # GameTime_t
    m_lookForWeaponsOnGroundTimer = 0x73B8 # CountdownTimer
    m_bIsSleeping = 0x73D0 # bool
    m_isEnemySniperVisible = 0x73D1 # bool
    m_sawEnemySniperTimer = 0x73D8 # CountdownTimer
    m_enemyQueueIndex = 0x7490 # uint8_t
    m_enemyQueueCount = 0x7491 # uint8_t
    m_enemyQueueAttendIndex = 0x7492 # uint8_t
    m_isStuck = 0x7493 # bool
    m_stuckTimestamp = 0x7494 # GameTime_t
    m_stuckSpot = 0x7498 # Vector
    m_wiggleTimer = 0x74A8 # CountdownTimer
    m_stuckJumpTimer = 0x74C0 # CountdownTimer
    m_nextCleanupCheckTimestamp = 0x74D8 # GameTime_t
    m_avgVel = 0x74DC # float[10]
    m_avgVelIndex = 0x7504 # int32_t
    m_avgVelCount = 0x7508 # int32_t
    m_lastOrigin = 0x750C # Vector
    m_lastRadioRecievedTimestamp = 0x751C # float
    m_lastRadioSentTimestamp = 0x7520 # float
    m_radioSubject = 0x7524 # CHandle<CCSPlayerPawn>
    m_radioPosition = 0x7528 # Vector
    m_voiceEndTimestamp = 0x7534 # float
    m_lastValidReactionQueueFrame = 0x7540 # int32_t

class CCSGOPlayerAnimGraphState:

class CCSGOViewModel: # CPredictedViewModel
    m_bShouldIgnoreOffsetAndAccuracy = 0x8D8 # bool
    m_nWeaponParity = 0x8DC # uint32_t
    m_nOldWeaponParity = 0x8E0 # uint32_t

class CCSGO_TeamIntroCharacterPosition: # CCSGO_TeamPreviewCharacterPosition

class CCSGO_TeamIntroCounterTerroristPosition: # CCSGO_TeamIntroCharacterPosition

class CCSGO_TeamIntroTerroristPosition: # CCSGO_TeamIntroCharacterPosition

class CCSGO_TeamPreviewCharacterPosition: # CBaseEntity
    m_nVariant = 0x4B0 # int32_t
    m_nRandom = 0x4B4 # int32_t
    m_nOrdinal = 0x4B8 # int32_t
    m_sWeaponName = 0x4C0 # CUtlString
    m_xuid = 0x4C8 # uint64_t
    m_agentItem = 0x4D0 # CEconItemView
    m_glovesItem = 0x748 # CEconItemView
    m_weaponItem = 0x9C0 # CEconItemView

class CCSGO_TeamSelectCharacterPosition: # CCSGO_TeamPreviewCharacterPosition

class CCSGO_TeamSelectCounterTerroristPosition: # CCSGO_TeamSelectCharacterPosition

class CCSGO_TeamSelectTerroristPosition: # CCSGO_TeamSelectCharacterPosition

class CCSGO_WingmanIntroCharacterPosition: # CCSGO_TeamIntroCharacterPosition

class CCSGO_WingmanIntroCounterTerroristPosition: # CCSGO_WingmanIntroCharacterPosition

class CCSGO_WingmanIntroTerroristPosition: # CCSGO_WingmanIntroCharacterPosition

class CCSGameModeRules:
    __m_pChainEntity = 0x8 # CNetworkVarChainer

class CCSGameModeRules_Deathmatch: # CCSGameModeRules
    m_bFirstThink = 0x30 # bool
    m_bFirstThinkAfterConnected = 0x31 # bool
    m_flDMBonusStartTime = 0x34 # GameTime_t
    m_flDMBonusTimeLength = 0x38 # float
    m_nDMBonusWeaponLoadoutSlot = 0x3C # int16_t

class CCSGameModeRules_Noop: # CCSGameModeRules

class CCSGameModeRules_Scripted: # CCSGameModeRules

class CCSGameModeScript: # CBasePulseGraphInstance

class CCSGameRules: # CTeamplayRules
    __m_pChainEntity = 0x98 # CNetworkVarChainer
    m_coopMissionManager = 0xC0 # CHandle<CBaseEntity>
    m_bFreezePeriod = 0xC4 # bool
    m_bWarmupPeriod = 0xC5 # bool
    m_fWarmupPeriodEnd = 0xC8 # GameTime_t
    m_fWarmupPeriodStart = 0xCC # GameTime_t
    m_nTotalPausedTicks = 0xD0 # int32_t
    m_nPauseStartTick = 0xD4 # int32_t
    m_bServerPaused = 0xD8 # bool
    m_bGamePaused = 0xD9 # bool
    m_bTerroristTimeOutActive = 0xDA # bool
    m_bCTTimeOutActive = 0xDB # bool
    m_flTerroristTimeOutRemaining = 0xDC # float
    m_flCTTimeOutRemaining = 0xE0 # float
    m_nTerroristTimeOuts = 0xE4 # int32_t
    m_nCTTimeOuts = 0xE8 # int32_t
    m_bTechnicalTimeOut = 0xEC # bool
    m_bMatchWaitingForResume = 0xED # bool
    m_iRoundTime = 0xF0 # int32_t
    m_fMatchStartTime = 0xF4 # float
    m_fRoundStartTime = 0xF8 # GameTime_t
    m_flRestartRoundTime = 0xFC # GameTime_t
    m_bGameRestart = 0x100 # bool
    m_flGameStartTime = 0x104 # float
    m_timeUntilNextPhaseStarts = 0x108 # float
    m_gamePhase = 0x10C # int32_t
    m_totalRoundsPlayed = 0x110 # int32_t
    m_nRoundsPlayedThisPhase = 0x114 # int32_t
    m_nOvertimePlaying = 0x118 # int32_t
    m_iHostagesRemaining = 0x11C # int32_t
    m_bAnyHostageReached = 0x120 # bool
    m_bMapHasBombTarget = 0x121 # bool
    m_bMapHasRescueZone = 0x122 # bool
    m_bMapHasBuyZone = 0x123 # bool
    m_bIsQueuedMatchmaking = 0x124 # bool
    m_nQueuedMatchmakingMode = 0x128 # int32_t
    m_bIsValveDS = 0x12C # bool
    m_bLogoMap = 0x12D # bool
    m_bPlayAllStepSoundsOnServer = 0x12E # bool
    m_iSpectatorSlotCount = 0x130 # int32_t
    m_MatchDevice = 0x134 # int32_t
    m_bHasMatchStarted = 0x138 # bool
    m_nNextMapInMapgroup = 0x13C # int32_t
    m_szTournamentEventName = 0x140 # char[512]
    m_szTournamentEventStage = 0x340 # char[512]
    m_szMatchStatTxt = 0x540 # char[512]
    m_szTournamentPredictionsTxt = 0x740 # char[512]
    m_nTournamentPredictionsPct = 0x940 # int32_t
    m_flCMMItemDropRevealStartTime = 0x944 # GameTime_t
    m_flCMMItemDropRevealEndTime = 0x948 # GameTime_t
    m_bIsDroppingItems = 0x94C # bool
    m_bIsQuestEligible = 0x94D # bool
    m_bIsHltvActive = 0x94E # bool
    m_nGuardianModeWaveNumber = 0x950 # int32_t
    m_nGuardianModeSpecialKillsRemaining = 0x954 # int32_t
    m_nGuardianModeSpecialWeaponNeeded = 0x958 # int32_t
    m_nGuardianGrenadesToGiveBots = 0x95C # int32_t
    m_nNumHeaviesToSpawn = 0x960 # int32_t
    m_numGlobalGiftsGiven = 0x964 # uint32_t
    m_numGlobalGifters = 0x968 # uint32_t
    m_numGlobalGiftsPeriodSeconds = 0x96C # uint32_t
    m_arrFeaturedGiftersAccounts = 0x970 # uint32_t[4]
    m_arrFeaturedGiftersGifts = 0x980 # uint32_t[4]
    m_arrProhibitedItemIndices = 0x990 # uint16_t[100]
    m_arrTournamentActiveCasterAccounts = 0xA58 # uint32_t[4]
    m_numBestOfMaps = 0xA68 # int32_t
    m_nHalloweenMaskListSeed = 0xA6C # int32_t
    m_bBombDropped = 0xA70 # bool
    m_bBombPlanted = 0xA71 # bool
    m_iRoundWinStatus = 0xA74 # int32_t
    m_eRoundWinReason = 0xA78 # int32_t
    m_bTCantBuy = 0xA7C # bool
    m_bCTCantBuy = 0xA7D # bool
    m_flGuardianBuyUntilTime = 0xA80 # GameTime_t
    m_iMatchStats_RoundResults = 0xA84 # int32_t[30]
    m_iMatchStats_PlayersAlive_CT = 0xAFC # int32_t[30]
    m_iMatchStats_PlayersAlive_T = 0xB74 # int32_t[30]
    m_TeamRespawnWaveTimes = 0xBEC # float[32]
    m_flNextRespawnWave = 0xC6C # GameTime_t[32]
    m_nServerQuestID = 0xCEC # int32_t
    m_vMinimapMins = 0xCF0 # Vector
    m_vMinimapMaxs = 0xCFC # Vector
    m_MinimapVerticalSectionHeights = 0xD08 # float[8]
    m_bDontIncrementCoopWave = 0xD28 # bool
    m_bSpawnedTerrorHuntHeavy = 0xD29 # bool
    m_nEndMatchMapGroupVoteTypes = 0xD2C # int32_t[10]
    m_nEndMatchMapGroupVoteOptions = 0xD54 # int32_t[10]
    m_nEndMatchMapVoteWinner = 0xD7C # int32_t
    m_iNumConsecutiveCTLoses = 0xD80 # int32_t
    m_iNumConsecutiveTerroristLoses = 0xD84 # int32_t
    m_bHasHostageBeenTouched = 0xDA0 # bool
    m_flIntermissionStartTime = 0xDA4 # GameTime_t
    m_flIntermissionEndTime = 0xDA8 # GameTime_t
    m_bLevelInitialized = 0xDAC # bool
    m_iTotalRoundsPlayed = 0xDB0 # int32_t
    m_iUnBalancedRounds = 0xDB4 # int32_t
    m_endMatchOnRoundReset = 0xDB8 # bool
    m_endMatchOnThink = 0xDB9 # bool
    m_iFreezeTime = 0xDBC # int32_t
    m_iNumTerrorist = 0xDC0 # int32_t
    m_iNumCT = 0xDC4 # int32_t
    m_iNumSpawnableTerrorist = 0xDC8 # int32_t
    m_iNumSpawnableCT = 0xDCC # int32_t
    m_arrSelectedHostageSpawnIndices = 0xDD0 # CUtlVector<int32_t>
    m_bFirstConnected = 0xDE8 # bool
    m_bCompleteReset = 0xDE9 # bool
    m_bPickNewTeamsOnReset = 0xDEA # bool
    m_bScrambleTeamsOnRestart = 0xDEB # bool
    m_bSwapTeamsOnRestart = 0xDEC # bool
    m_nEndMatchTiedVotes = 0xDF8 # CUtlVector<int32_t>
    m_bNeedToAskPlayersForContinueVote = 0xE14 # bool
    m_numQueuedMatchmakingAccounts = 0xE18 # uint32_t
    m_pQueuedMatchmakingReservationString = 0xE20 # char*
    m_numTotalTournamentDrops = 0xE28 # uint32_t
    m_numSpectatorsCountMax = 0xE2C # uint32_t
    m_numSpectatorsCountMaxTV = 0xE30 # uint32_t
    m_numSpectatorsCountMaxLnk = 0xE34 # uint32_t
    m_bForceTeamChangeSilent = 0xE40 # bool
    m_bLoadingRoundBackupData = 0xE41 # bool
    m_nMatchInfoShowType = 0xE78 # int32_t
    m_flMatchInfoDecidedTime = 0xE7C # float
    m_flCoopRespawnAndHealTime = 0xE98 # float
    m_coopBonusCoinsFound = 0xE9C # int32_t
    m_coopBonusPistolsOnly = 0xEA0 # bool
    m_coopPlayersInDeploymentZone = 0xEA1 # bool
    m_coopMissionDeadPlayerRespawnEnabled = 0xEA2 # bool
    mTeamDMLastWinningTeamNumber = 0xEA4 # int32_t
    mTeamDMLastThinkTime = 0xEA8 # float
    m_flTeamDMLastAnnouncementTime = 0xEAC # float
    m_iAccountTerrorist = 0xEB0 # int32_t
    m_iAccountCT = 0xEB4 # int32_t
    m_iSpawnPointCount_Terrorist = 0xEB8 # int32_t
    m_iSpawnPointCount_CT = 0xEBC # int32_t
    m_iMaxNumTerrorists = 0xEC0 # int32_t
    m_iMaxNumCTs = 0xEC4 # int32_t
    m_iLoserBonus = 0xEC8 # int32_t
    m_iLoserBonusMostRecentTeam = 0xECC # int32_t
    m_tmNextPeriodicThink = 0xED0 # float
    m_bVoiceWonMatchBragFired = 0xED4 # bool
    m_fWarmupNextChatNoticeTime = 0xED8 # float
    m_iHostagesRescued = 0xEE0 # int32_t
    m_iHostagesTouched = 0xEE4 # int32_t
    m_flNextHostageAnnouncement = 0xEE8 # float
    m_bNoTerroristsKilled = 0xEEC # bool
    m_bNoCTsKilled = 0xEED # bool
    m_bNoEnemiesKilled = 0xEEE # bool
    m_bCanDonateWeapons = 0xEEF # bool
    m_firstKillTime = 0xEF4 # float
    m_firstBloodTime = 0xEFC # float
    m_hostageWasInjured = 0xF18 # bool
    m_hostageWasKilled = 0xF19 # bool
    m_bVoteCalled = 0xF28 # bool
    m_bServerVoteOnReset = 0xF29 # bool
    m_flVoteCheckThrottle = 0xF2C # float
    m_bBuyTimeEnded = 0xF30 # bool
    m_nLastFreezeEndBeep = 0xF34 # int32_t
    m_bTargetBombed = 0xF38 # bool
    m_bBombDefused = 0xF39 # bool
    m_bMapHasBombZone = 0xF3A # bool
    m_vecMainCTSpawnPos = 0xF58 # Vector
    m_CTSpawnPointsMasterList = 0xF68 # CUtlVector<SpawnPoint*>
    m_TerroristSpawnPointsMasterList = 0xF80 # CUtlVector<SpawnPoint*>
    m_iNextCTSpawnPoint = 0xF98 # int32_t
    m_iNextTerroristSpawnPoint = 0xF9C # int32_t
    m_CTSpawnPoints = 0xFA0 # CUtlVector<SpawnPoint*>
    m_TerroristSpawnPoints = 0xFB8 # CUtlVector<SpawnPoint*>
    m_bIsUnreservedGameServer = 0xFD0 # bool
    m_fAutobalanceDisplayTime = 0xFD4 # float
    m_bAllowWeaponSwitch = 0x1240 # bool
    m_bRoundTimeWarningTriggered = 0x1241 # bool
    m_phaseChangeAnnouncementTime = 0x1244 # GameTime_t
    m_fNextUpdateTeamClanNamesTime = 0x1248 # float
    m_flLastThinkTime = 0x124C # GameTime_t
    m_fAccumulatedRoundOffDamage = 0x1250 # float
    m_nShorthandedBonusLastEvalRound = 0x1254 # int32_t
    m_nMatchAbortedEarlyReason = 0x14D0 # int32_t
    m_bHasTriggeredRoundStartMusic = 0x14D4 # bool
    m_bHasTriggeredCoopSpawnReset = 0x14D5 # bool
    m_bSwitchingTeamsAtRoundReset = 0x14D6 # bool
    m_pGameModeRules = 0x14F0 # CCSGameModeRules*
    m_BtGlobalBlackboard = 0x14F8 # KeyValues3
    m_hPlayerResource = 0x1560 # CHandle<CBaseEntity>
    m_RetakeRules = 0x1568 # CRetakeGameRules
    m_GuardianBotSkillLevelMax = 0x174C # int32_t
    m_GuardianBotSkillLevelMin = 0x1750 # int32_t
    m_arrTeamUniqueKillWeaponsMatch = 0x1758 # CUtlVector<int32_t>[4]
    m_bTeamLastKillUsedUniqueWeaponMatch = 0x17B8 # bool[4]
    m_nMatchEndCount = 0x17E0 # uint8_t
    m_nTTeamIntroVariant = 0x17E4 # int32_t
    m_nCTTeamIntroVariant = 0x17E8 # int32_t
    m_bTeamIntroPeriod = 0x17EC # bool
    m_fTeamIntroPeriodEnd = 0x17F0 # GameTime_t
    m_bPlayedTeamIntroVO = 0x17F4 # bool
    m_flLastPerfSampleTime = 0x5800 # double
    m_bSkipNextServerPerfSample = 0x5808 # bool

class CCSGameRulesProxy: # CGameRulesProxy
    m_pGameRules = 0x4B0 # CCSGameRules*

class CCSMinimapBoundary: # CBaseEntity

class CCSObserverPawn: # CCSPlayerPawnBase

class CCSObserver_CameraServices: # CCSPlayerBase_CameraServices

class CCSObserver_MovementServices: # CPlayer_MovementServices

class CCSObserver_ObserverServices: # CPlayer_ObserverServices

class CCSObserver_UseServices: # CPlayer_UseServices

class CCSObserver_ViewModelServices: # CPlayer_ViewModelServices

class CCSPlace: # CServerOnlyModelEntity
    m_name = 0x708 # CUtlSymbolLarge

class CCSPlayerBase_CameraServices: # CPlayer_CameraServices
    m_iFOV = 0x170 # uint32_t
    m_iFOVStart = 0x174 # uint32_t
    m_flFOVTime = 0x178 # GameTime_t
    m_flFOVRate = 0x17C # float
    m_hZoomOwner = 0x180 # CHandle<CBaseEntity>
    m_hTriggerFogList = 0x188 # CUtlVector<CHandle<CBaseEntity>>
    m_hLastFogTrigger = 0x1A0 # CHandle<CBaseEntity>

class CCSPlayerController: # CBasePlayerController
    m_pInGameMoneyServices = 0x6C0 # CCSPlayerController_InGameMoneyServices*
    m_pInventoryServices = 0x6C8 # CCSPlayerController_InventoryServices*
    m_pActionTrackingServices = 0x6D0 # CCSPlayerController_ActionTrackingServices*
    m_pDamageServices = 0x6D8 # CCSPlayerController_DamageServices*
    m_iPing = 0x6E0 # uint32_t
    m_bHasCommunicationAbuseMute = 0x6E4 # bool
    m_szCrosshairCodes = 0x6E8 # CUtlSymbolLarge
    m_iPendingTeamNum = 0x6F0 # uint8_t
    m_flForceTeamTime = 0x6F4 # GameTime_t
    m_iCompTeammateColor = 0x6F8 # int32_t
    m_bEverPlayedOnTeam = 0x6FC # bool
    m_bAttemptedToGetColor = 0x6FD # bool
    m_iTeammatePreferredColor = 0x700 # int32_t
    m_bTeamChanged = 0x704 # bool
    m_bInSwitchTeam = 0x705 # bool
    m_bHasSeenJoinGame = 0x706 # bool
    m_bJustBecameSpectator = 0x707 # bool
    m_bSwitchTeamsOnNextRoundReset = 0x708 # bool
    m_bRemoveAllItemsOnNextRoundReset = 0x709 # bool
    m_szClan = 0x710 # CUtlSymbolLarge
    m_szClanName = 0x718 # char[32]
    m_iCoachingTeam = 0x738 # int32_t
    m_nPlayerDominated = 0x740 # uint64_t
    m_nPlayerDominatingMe = 0x748 # uint64_t
    m_iCompetitiveRanking = 0x750 # int32_t
    m_iCompetitiveWins = 0x754 # int32_t
    m_iCompetitiveRankType = 0x758 # int8_t
    m_iCompetitiveRankingPredicted_Win = 0x75C # int32_t
    m_iCompetitiveRankingPredicted_Loss = 0x760 # int32_t
    m_iCompetitiveRankingPredicted_Tie = 0x764 # int32_t
    m_nEndMatchNextMapVote = 0x768 # int32_t
    m_unActiveQuestId = 0x76C # uint16_t
    m_nQuestProgressReason = 0x770 # QuestProgress::Reason
    m_unPlayerTvControlFlags = 0x774 # uint32_t
    m_iDraftIndex = 0x7A0 # int32_t
    m_msQueuedModeDisconnectionTimestamp = 0x7A4 # uint32_t
    m_uiAbandonRecordedReason = 0x7A8 # uint32_t
    m_bCannotBeKicked = 0x7AC # bool
    m_bEverFullyConnected = 0x7AD # bool
    m_bAbandonAllowsSurrender = 0x7AE # bool
    m_bAbandonOffersInstantSurrender = 0x7AF # bool
    m_bDisconnection1MinWarningPrinted = 0x7B0 # bool
    m_bScoreReported = 0x7B1 # bool
    m_nDisconnectionTick = 0x7B4 # int32_t
    m_bControllingBot = 0x7C0 # bool
    m_bHasControlledBotThisRound = 0x7C1 # bool
    m_bHasBeenControlledByPlayerThisRound = 0x7C2 # bool
    m_nBotsControlledThisRound = 0x7C4 # int32_t
    m_bCanControlObservedBot = 0x7C8 # bool
    m_hPlayerPawn = 0x7CC # CHandle<CCSPlayerPawn>
    m_hObserverPawn = 0x7D0 # CHandle<CCSObserverPawn>
    m_DesiredObserverMode = 0x7D4 # int32_t
    m_hDesiredObserverTarget = 0x7D8 # CEntityHandle
    m_bPawnIsAlive = 0x7DC # bool
    m_iPawnHealth = 0x7E0 # uint32_t
    m_iPawnArmor = 0x7E4 # int32_t
    m_bPawnHasDefuser = 0x7E8 # bool
    m_bPawnHasHelmet = 0x7E9 # bool
    m_nPawnCharacterDefIndex = 0x7EA # uint16_t
    m_iPawnLifetimeStart = 0x7EC # int32_t
    m_iPawnLifetimeEnd = 0x7F0 # int32_t
    m_iPawnBotDifficulty = 0x7F4 # int32_t
    m_hOriginalControllerOfCurrentPawn = 0x7F8 # CHandle<CCSPlayerController>
    m_iScore = 0x7FC # int32_t
    m_iRoundScore = 0x800 # int32_t
    m_iRoundsWon = 0x804 # int32_t
    m_vecKills = 0x808 # CNetworkUtlVectorBase<EKillTypes_t>
    m_iMVPs = 0x820 # int32_t
    m_nUpdateCounter = 0x824 # int32_t
    m_flSmoothedPing = 0x828 # float
    m_lastHeldVoteTimer = 0xF8D0 # IntervalTimer
    m_bShowHints = 0xF8E8 # bool
    m_iNextTimeCheck = 0xF8EC # int32_t
    m_bJustDidTeamKill = 0xF8F0 # bool
    m_bPunishForTeamKill = 0xF8F1 # bool
    m_bGaveTeamDamageWarning = 0xF8F2 # bool
    m_bGaveTeamDamageWarningThisRound = 0xF8F3 # bool
    m_dblLastReceivedPacketPlatFloatTime = 0xF8F8 # double
    m_LastTeamDamageWarningTime = 0xF900 # GameTime_t
    m_LastTimePlayerWasDisconnectedForPawnsRemove = 0xF904 # GameTime_t

class CCSPlayerController_ActionTrackingServices: # CPlayerControllerComponent
    m_perRoundStats = 0x40 # CUtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
    m_matchStats = 0x90 # CSMatchStats_t
    m_iNumRoundKills = 0x148 # int32_t
    m_iNumRoundKillsHeadshots = 0x14C # int32_t
    m_unTotalRoundDamageDealt = 0x150 # uint32_t

class CCSPlayerController_DamageServices: # CPlayerControllerComponent
    m_nSendUpdate = 0x40 # int32_t
    m_DamageList = 0x48 # CUtlVectorEmbeddedNetworkVar<CDamageRecord>

class CCSPlayerController_InGameMoneyServices: # CPlayerControllerComponent
    m_bReceivesMoneyNextRound = 0x40 # bool
    m_iAccountMoneyEarnedForNextRound = 0x44 # int32_t
    m_iAccount = 0x48 # int32_t
    m_iStartAccount = 0x4C # int32_t
    m_iTotalCashSpent = 0x50 # int32_t
    m_iCashSpentThisRound = 0x54 # int32_t

class CCSPlayerController_InventoryServices: # CPlayerControllerComponent
    m_unMusicID = 0x40 # uint16_t
    m_rank = 0x44 # MedalRank_t[6]
    m_nPersonaDataPublicLevel = 0x5C # int32_t
    m_nPersonaDataPublicCommendsLeader = 0x60 # int32_t
    m_nPersonaDataPublicCommendsTeacher = 0x64 # int32_t
    m_nPersonaDataPublicCommendsFriendly = 0x68 # int32_t
    m_unEquippedPlayerSprayIDs = 0xF48 # uint32_t[1]
    m_vecServerAuthoritativeWeaponSlots = 0xF50 # CUtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>

class CCSPlayerPawn: # CCSPlayerPawnBase
    m_pBulletServices = 0x1550 # CCSPlayer_BulletServices*
    m_pHostageServices = 0x1558 # CCSPlayer_HostageServices*
    m_pBuyServices = 0x1560 # CCSPlayer_BuyServices*
    m_pActionTrackingServices = 0x1568 # CCSPlayer_ActionTrackingServices*
    m_pRadioServices = 0x1570 # CCSPlayer_RadioServices*
    m_pDamageReactServices = 0x1578 # CCSPlayer_DamageReactServices*
    m_nCharacterDefIndex = 0x1580 # uint16_t
    m_hPreviousModel = 0x1588 # CStrongHandle<InfoForResourceTypeCModel>
    m_bHasFemaleVoice = 0x1590 # bool
    m_strVOPrefix = 0x1598 # CUtlString
    m_szLastPlaceName = 0x15A0 # char[18]
    m_bInHostageResetZone = 0x1660 # bool
    m_bInBuyZone = 0x1661 # bool
    m_bWasInBuyZone = 0x1662 # bool
    m_bInHostageRescueZone = 0x1663 # bool
    m_bInBombZone = 0x1664 # bool
    m_bWasInHostageRescueZone = 0x1665 # bool
    m_iRetakesOffering = 0x1668 # int32_t
    m_iRetakesOfferingCard = 0x166C # int32_t
    m_bRetakesHasDefuseKit = 0x1670 # bool
    m_bRetakesMVPLastRound = 0x1671 # bool
    m_iRetakesMVPBoostItem = 0x1674 # int32_t
    m_RetakesMVPBoostExtraUtility = 0x1678 # loadout_slot_t
    m_flHealthShotBoostExpirationTime = 0x167C # GameTime_t
    m_flLandseconds = 0x1680 # float
    m_aimPunchAngle = 0x1684 # QAngle
    m_aimPunchAngleVel = 0x1690 # QAngle
    m_aimPunchTickBase = 0x169C # int32_t
    m_aimPunchTickFraction = 0x16A0 # float
    m_aimPunchCache = 0x16A8 # CUtlVector<QAngle>
    m_bIsBuyMenuOpen = 0x16C0 # bool
    m_xLastHeadBoneTransform = 0x1D00 # CTransform
    m_bLastHeadBoneTransformIsValid = 0x1D20 # bool
    m_lastLandTime = 0x1D24 # GameTime_t
    m_bOnGroundLastTick = 0x1D28 # bool
    m_iPlayerLocked = 0x1D2C # int32_t
    m_flTimeOfLastInjury = 0x1D34 # GameTime_t
    m_flNextSprayDecalTime = 0x1D38 # GameTime_t
    m_bNextSprayDecalTimeExpedited = 0x1D3C # bool
    m_nRagdollDamageBone = 0x1D40 # int32_t
    m_vRagdollDamageForce = 0x1D44 # Vector
    m_vRagdollDamagePosition = 0x1D50 # Vector
    m_szRagdollDamageWeaponName = 0x1D5C # char[64]
    m_bRagdollDamageHeadshot = 0x1D9C # bool
    m_vRagdollServerOrigin = 0x1DA0 # Vector
    m_EconGloves = 0x1DB0 # CEconItemView
    m_qDeathEyeAngles = 0x2028 # QAngle
    m_bSkipOneHeadConstraintUpdate = 0x2034 # bool

class CCSPlayerPawnBase: # CBasePlayerPawn
    m_CTouchExpansionComponent = 0xB68 # CTouchExpansionComponent
    m_pPingServices = 0xBB8 # CCSPlayer_PingServices*
    m_pViewModelServices = 0xBC0 # CPlayer_ViewModelServices*
    m_iDisplayHistoryBits = 0xBC8 # uint32_t
    m_flLastAttackedTeammate = 0xBCC # float
    m_hOriginalController = 0xBD0 # CHandle<CCSPlayerController>
    m_blindUntilTime = 0xBD4 # GameTime_t
    m_blindStartTime = 0xBD8 # GameTime_t
    m_allowAutoFollowTime = 0xBDC # GameTime_t
    m_entitySpottedState = 0xBE0 # EntitySpottedState_t
    m_nSpotRules = 0xBF8 # int32_t
    m_iPlayerState = 0xBFC # CSPlayerState
    m_chickenIdleSoundTimer = 0xC08 # CountdownTimer
    m_chickenJumpSoundTimer = 0xC20 # CountdownTimer
    m_vecLastBookmarkedPosition = 0xCD8 # Vector
    m_flLastDistanceTraveledNotice = 0xCE4 # float
    m_flAccumulatedDistanceTraveled = 0xCE8 # float
    m_flLastFriendlyFireDamageReductionRatio = 0xCEC # float
    m_bRespawning = 0xCF0 # bool
    m_nLastPickupPriority = 0xCF4 # int32_t
    m_flLastPickupPriorityTime = 0xCF8 # float
    m_bIsScoped = 0xCFC # bool
    m_bIsWalking = 0xCFD # bool
    m_bResumeZoom = 0xCFE # bool
    m_bIsDefusing = 0xCFF # bool
    m_bIsGrabbingHostage = 0xD00 # bool
    m_iBlockingUseActionInProgress = 0xD04 # CSPlayerBlockingUseAction_t
    m_fImmuneToGunGameDamageTime = 0xD08 # GameTime_t
    m_bGunGameImmunity = 0xD0C # bool
    m_fMolotovDamageTime = 0xD10 # float
    m_bHasMovedSinceSpawn = 0xD14 # bool
    m_bCanMoveDuringFreezePeriod = 0xD15 # bool
    m_flGuardianTooFarDistFrac = 0xD18 # float
    m_flNextGuardianTooFarHurtTime = 0xD1C # float
    m_flDetectedByEnemySensorTime = 0xD20 # GameTime_t
    m_flDealtDamageToEnemyMostRecentTimestamp = 0xD24 # float
    m_flLastEquippedHelmetTime = 0xD28 # GameTime_t
    m_flLastEquippedArmorTime = 0xD2C # GameTime_t
    m_nHeavyAssaultSuitCooldownRemaining = 0xD30 # int32_t
    m_bResetArmorNextSpawn = 0xD34 # bool
    m_flLastBumpMineBumpTime = 0xD38 # GameTime_t
    m_flEmitSoundTime = 0xD3C # GameTime_t
    m_iNumSpawns = 0xD40 # int32_t
    m_iShouldHaveCash = 0xD44 # int32_t
    m_bInvalidSteamLogonDelayed = 0xD48 # bool
    m_flLastAction = 0xD4C # GameTime_t
    m_flNameChangeHistory = 0xD50 # float[5]
    m_fLastGivenDefuserTime = 0xD64 # float
    m_fLastGivenBombTime = 0xD68 # float
    m_bHasNightVision = 0xD6C # bool
    m_bNightVisionOn = 0xD6D # bool
    m_fNextRadarUpdateTime = 0xD70 # float
    m_flLastMoneyUpdateTime = 0xD74 # float
    m_MenuStringBuffer = 0xD78 # char[1024]
    m_fIntroCamTime = 0x1178 # float
    m_nMyCollisionGroup = 0x117C # int32_t
    m_bInNoDefuseArea = 0x1180 # bool
    m_bKilledByTaser = 0x1181 # bool
    m_iMoveState = 0x1184 # int32_t
    m_grenadeParameterStashTime = 0x1188 # GameTime_t
    m_bGrenadeParametersStashed = 0x118C # bool
    m_angStashedShootAngles = 0x1190 # QAngle
    m_vecStashedGrenadeThrowPosition = 0x119C # Vector
    m_vecStashedVelocity = 0x11A8 # Vector
    m_angShootAngleHistory = 0x11B4 # QAngle[2]
    m_vecThrowPositionHistory = 0x11CC # Vector[2]
    m_vecVelocityHistory = 0x11E4 # Vector[2]
    m_bDiedAirborne = 0x11FC # bool
    m_iBombSiteIndex = 0x1200 # CEntityIndex
    m_nWhichBombZone = 0x1204 # int32_t
    m_bInBombZoneTrigger = 0x1208 # bool
    m_bWasInBombZoneTrigger = 0x1209 # bool
    m_iDirection = 0x120C # int32_t
    m_iShotsFired = 0x1210 # int32_t
    m_ArmorValue = 0x1214 # int32_t
    m_flFlinchStack = 0x1218 # float
    m_flVelocityModifier = 0x121C # float
    m_flHitHeading = 0x1220 # float
    m_nHitBodyPart = 0x1224 # int32_t
    m_iHostagesKilled = 0x1228 # int32_t
    m_vecTotalBulletForce = 0x122C # Vector
    m_flFlashDuration = 0x1238 # float
    m_flFlashMaxAlpha = 0x123C # float
    m_flProgressBarStartTime = 0x1240 # float
    m_iProgressBarDuration = 0x1244 # int32_t
    m_bWaitForNoAttack = 0x1248 # bool
    m_flLowerBodyYawTarget = 0x124C # float
    m_bStrafing = 0x1250 # bool
    m_lastStandingPos = 0x1254 # Vector
    m_ignoreLadderJumpTime = 0x1260 # float
    m_ladderSurpressionTimer = 0x1268 # CountdownTimer
    m_lastLadderNormal = 0x1280 # Vector
    m_lastLadderPos = 0x128C # Vector
    m_thirdPersonHeading = 0x1298 # QAngle
    m_flSlopeDropOffset = 0x12A4 # float
    m_flSlopeDropHeight = 0x12A8 # float
    m_vHeadConstraintOffset = 0x12AC # Vector
    m_iLastWeaponFireUsercmd = 0x12C0 # int32_t
    m_angEyeAngles = 0x12C4 # QAngle
    m_bVCollisionInitted = 0x12D0 # bool
    m_storedSpawnPosition = 0x12D4 # Vector
    m_storedSpawnAngle = 0x12E0 # QAngle
    m_bIsSpawning = 0x12EC # bool
    m_bHideTargetID = 0x12ED # bool
    m_nNumDangerZoneDamageHits = 0x12F0 # int32_t
    m_bHud_MiniScoreHidden = 0x12F4 # bool
    m_bHud_RadarHidden = 0x12F5 # bool
    m_nLastKillerIndex = 0x12F8 # CEntityIndex
    m_nLastConcurrentKilled = 0x12FC # int32_t
    m_nDeathCamMusic = 0x1300 # int32_t
    m_iAddonBits = 0x1304 # int32_t
    m_iPrimaryAddon = 0x1308 # int32_t
    m_iSecondaryAddon = 0x130C # int32_t
    m_currentDeafnessFilter = 0x1310 # CUtlStringToken
    m_NumEnemiesKilledThisSpawn = 0x1314 # int32_t
    m_NumEnemiesKilledThisRound = 0x1318 # int32_t
    m_NumEnemiesAtRoundStart = 0x131C # int32_t
    m_wasNotKilledNaturally = 0x1320 # bool
    m_vecPlayerPatchEconIndices = 0x1324 # uint32_t[5]
    m_iDeathFlags = 0x1338 # int32_t
    m_hPet = 0x133C # CHandle<CChicken>
    m_unCurrentEquipmentValue = 0x1508 # uint16_t
    m_unRoundStartEquipmentValue = 0x150A # uint16_t
    m_unFreezetimeEndEquipmentValue = 0x150C # uint16_t
    m_nSurvivalTeamNumber = 0x1510 # int32_t
    m_bHasDeathInfo = 0x1514 # bool
    m_flDeathInfoTime = 0x1518 # float
    m_vecDeathInfoOrigin = 0x151C # Vector
    m_bKilledByHeadshot = 0x1528 # bool
    m_LastHitBox = 0x152C # int32_t
    m_LastHealth = 0x1530 # int32_t
    m_flLastCollisionCeiling = 0x1534 # float
    m_flLastCollisionCeilingChangeTime = 0x1538 # float
    m_pBot = 0x1540 # CCSBot*
    m_bBotAllowActive = 0x1548 # bool
    m_bCommittingSuicideOnTeamChange = 0x1549 # bool

class CCSPlayerResource: # CBaseEntity
    m_bHostageAlive = 0x4B0 # bool[12]
    m_isHostageFollowingSomeone = 0x4BC # bool[12]
    m_iHostageEntityIDs = 0x4C8 # CEntityIndex[12]
    m_bombsiteCenterA = 0x4F8 # Vector
    m_bombsiteCenterB = 0x504 # Vector
    m_hostageRescueX = 0x510 # int32_t[4]
    m_hostageRescueY = 0x520 # int32_t[4]
    m_hostageRescueZ = 0x530 # int32_t[4]
    m_bEndMatchNextMapAllVoted = 0x540 # bool
    m_foundGoalPositions = 0x541 # bool

class CCSPlayer_ActionTrackingServices: # CPlayerPawnComponent
    m_hLastWeaponBeforeC4AutoSwitch = 0x208 # CHandle<CBasePlayerWeapon>
    m_bIsRescuing = 0x23C # bool
    m_weaponPurchasesThisMatch = 0x240 # WeaponPurchaseTracker_t
    m_weaponPurchasesThisRound = 0x298 # WeaponPurchaseTracker_t

class CCSPlayer_BulletServices: # CPlayerPawnComponent
    m_totalHitsOnServer = 0x40 # int32_t

class CCSPlayer_BuyServices: # CPlayerPawnComponent
    m_vecSellbackPurchaseEntries = 0xC8 # CUtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>

class CCSPlayer_CameraServices: # CCSPlayerBase_CameraServices

class CCSPlayer_DamageReactServices: # CPlayerPawnComponent

class CCSPlayer_HostageServices: # CPlayerPawnComponent
    m_hCarriedHostage = 0x40 # CHandle<CBaseEntity>
    m_hCarriedHostageProp = 0x44 # CHandle<CBaseEntity>

class CCSPlayer_ItemServices: # CPlayer_ItemServices
    m_bHasDefuser = 0x40 # bool
    m_bHasHelmet = 0x41 # bool
    m_bHasHeavyArmor = 0x42 # bool

class CCSPlayer_MovementServices: # CPlayer_MovementServices_Humanoid
    m_flMaxFallVelocity = 0x220 # float
    m_vecLadderNormal = 0x224 # Vector
    m_nLadderSurfacePropIndex = 0x230 # int32_t
    m_flDuckAmount = 0x234 # float
    m_flDuckSpeed = 0x238 # float
    m_bDuckOverride = 0x23C # bool
    m_bDesiresDuck = 0x23D # bool
    m_flDuckOffset = 0x240 # float
    m_nDuckTimeMsecs = 0x244 # uint32_t
    m_nDuckJumpTimeMsecs = 0x248 # uint32_t
    m_nJumpTimeMsecs = 0x24C # uint32_t
    m_flLastDuckTime = 0x250 # float
    m_vecLastPositionAtFullCrouchSpeed = 0x260 # Vector2D
    m_duckUntilOnGround = 0x268 # bool
    m_bHasWalkMovedSinceLastJump = 0x269 # bool
    m_bInStuckTest = 0x26A # bool
    m_flStuckCheckTime = 0x278 # float[64][2]
    m_nTraceCount = 0x478 # int32_t
    m_StuckLast = 0x47C # int32_t
    m_bSpeedCropped = 0x480 # bool
    m_nOldWaterLevel = 0x484 # int32_t
    m_flWaterEntryTime = 0x488 # float
    m_vecForward = 0x48C # Vector
    m_vecLeft = 0x498 # Vector
    m_vecUp = 0x4A4 # Vector
    m_vecPreviouslyPredictedOrigin = 0x4B0 # Vector
    m_bMadeFootstepNoise = 0x4BC # bool
    m_iFootsteps = 0x4C0 # int32_t
    m_bOldJumpPressed = 0x4C4 # bool
    m_flJumpPressedTime = 0x4C8 # float
    m_flJumpUntil = 0x4CC # float
    m_flJumpVel = 0x4D0 # float
    m_fStashGrenadeParameterWhen = 0x4D4 # GameTime_t
    m_nButtonDownMaskPrev = 0x4D8 # uint64_t
    m_flOffsetTickCompleteTime = 0x4E0 # float
    m_flOffsetTickStashedSpeed = 0x4E4 # float
    m_flStamina = 0x4E8 # float
    m_flHeightAtJumpStart = 0x4EC # float
    m_flMaxJumpHeightThisJump = 0x4F0 # float

class CCSPlayer_PingServices: # CPlayerPawnComponent
    m_flPlayerPingTokens = 0x40 # GameTime_t[5]
    m_hPlayerPing = 0x54 # CHandle<CBaseEntity>

class CCSPlayer_RadioServices: # CPlayerPawnComponent
    m_flGotHostageTalkTimer = 0x40 # GameTime_t
    m_flDefusingTalkTimer = 0x44 # GameTime_t
    m_flC4PlantTalkTimer = 0x48 # GameTime_t
    m_flRadioTokenSlots = 0x4C # GameTime_t[3]
    m_bIgnoreRadio = 0x58 # bool

class CCSPlayer_UseServices: # CPlayer_UseServices
    m_hLastKnownUseEntity = 0x40 # CHandle<CBaseEntity>
    m_flLastUseTimeStamp = 0x44 # GameTime_t
    m_flTimeStartedHoldingUse = 0x48 # GameTime_t
    m_flTimeLastUsedWindow = 0x4C # GameTime_t

class CCSPlayer_ViewModelServices: # CPlayer_ViewModelServices
    m_hViewModel = 0x40 # CHandle<CBaseViewModel>[3]

class CCSPlayer_WaterServices: # CPlayer_WaterServices
    m_NextDrownDamageTime = 0x40 # float
    m_nDrownDmgRate = 0x44 # int32_t
    m_AirFinishedTime = 0x48 # GameTime_t
    m_flWaterJumpTime = 0x4C # float
    m_vecWaterJumpVel = 0x50 # Vector
    m_flSwimSoundTime = 0x5C # float

class CCSPlayer_WeaponServices: # CPlayer_WeaponServices
    m_flNextAttack = 0xB0 # GameTime_t
    m_bIsLookingAtWeapon = 0xB4 # bool
    m_bIsHoldingLookAtWeapon = 0xB5 # bool
    m_hSavedWeapon = 0xB8 # CHandle<CBasePlayerWeapon>
    m_nTimeToMelee = 0xBC # int32_t
    m_nTimeToSecondary = 0xC0 # int32_t
    m_nTimeToPrimary = 0xC4 # int32_t
    m_nTimeToSniperRifle = 0xC8 # int32_t
    m_bIsBeingGivenItem = 0xCC # bool
    m_bIsPickingUpItemWithUse = 0xCD # bool
    m_bPickedUpWeapon = 0xCE # bool

class CCSPulseServerFuncs_Globals:

class CCSSprite: # CSprite

class CCSTeam: # CTeam
    m_nLastRecievedShorthandedRoundBonus = 0x568 # int32_t
    m_nShorthandedRoundBonusStartRound = 0x56C # int32_t
    m_bSurrendered = 0x570 # bool
    m_szTeamMatchStat = 0x571 # char[512]
    m_numMapVictories = 0x774 # int32_t
    m_scoreFirstHalf = 0x778 # int32_t
    m_scoreSecondHalf = 0x77C # int32_t
    m_scoreOvertime = 0x780 # int32_t
    m_szClanTeamname = 0x784 # char[129]
    m_iClanID = 0x808 # uint32_t
    m_szTeamFlagImage = 0x80C # char[8]
    m_szTeamLogoImage = 0x814 # char[8]
    m_flNextResourceTime = 0x81C # float
    m_iLastUpdateSentAt = 0x820 # int32_t

class CCSWeaponBase: # CBasePlayerWeapon
    m_bRemoveable = 0xC88 # bool
    m_flFireSequenceStartTime = 0xC90 # float
    m_nFireSequenceStartTimeChange = 0xC94 # int32_t
    m_nFireSequenceStartTimeAck = 0xC98 # int32_t
    m_ePlayerFireEvent = 0xC9C # PlayerAnimEvent_t
    m_ePlayerFireEventAttackType = 0xCA0 # WeaponAttackType_t
    m_seqIdle = 0xCA4 # HSequence
    m_seqFirePrimary = 0xCA8 # HSequence
    m_seqFireSecondary = 0xCAC # HSequence
    m_thirdPersonFireSequences = 0xCB0 # CUtlVector<HSequence>
    m_hCurrentThirdPersonSequence = 0xCC8 # HSequence
    m_nSilencerBoneIndex = 0xCCC # int32_t
    m_thirdPersonSequences = 0xCD0 # HSequence[7]
    m_bPlayerAmmoStockOnPickup = 0xCF8 # bool
    m_bRequireUseToTouch = 0xCF9 # bool
    m_iState = 0xCFC # CSWeaponState_t
    m_flLastTimeInAir = 0xD00 # GameTime_t
    m_flLastDeployTime = 0xD04 # GameTime_t
    m_nViewModelIndex = 0xD08 # uint32_t
    m_bReloadsWithClips = 0xD0C # bool
    m_flTimeWeaponIdle = 0xD28 # GameTime_t
    m_bFireOnEmpty = 0xD2C # bool
    m_OnPlayerPickup = 0xD30 # CEntityIOOutput
    m_weaponMode = 0xD58 # CSWeaponMode
    m_flTurningInaccuracyDelta = 0xD5C # float
    m_vecTurningInaccuracyEyeDirLast = 0xD60 # Vector
    m_flTurningInaccuracy = 0xD6C # float
    m_fAccuracyPenalty = 0xD70 # float
    m_flLastAccuracyUpdateTime = 0xD74 # GameTime_t
    m_fAccuracySmoothedForZoom = 0xD78 # float
    m_fScopeZoomEndTime = 0xD7C # GameTime_t
    m_iRecoilIndex = 0xD80 # int32_t
    m_flRecoilIndex = 0xD84 # float
    m_bBurstMode = 0xD88 # bool
    m_nPostponeFireReadyTicks = 0xD8C # GameTick_t
    m_flPostponeFireReadyFrac = 0xD90 # float
    m_bInReload = 0xD94 # bool
    m_bReloadVisuallyComplete = 0xD95 # bool
    m_flDroppedAtTime = 0xD98 # GameTime_t
    m_bIsHauledBack = 0xD9C # bool
    m_bSilencerOn = 0xD9D # bool
    m_flTimeSilencerSwitchComplete = 0xDA0 # GameTime_t
    m_iOriginalTeamNumber = 0xDA4 # int32_t
    m_flNextAttackRenderTimeOffset = 0xDA8 # float
    m_bCanBePickedUp = 0xDC0 # bool
    m_bUseCanOverrideNextOwnerTouchTime = 0xDC1 # bool
    m_nextOwnerTouchTime = 0xDC4 # GameTime_t
    m_nextPrevOwnerTouchTime = 0xDC8 # GameTime_t
    m_hPrevOwner = 0xDCC # CHandle<CCSPlayerPawn>
    m_nDropTick = 0xDD0 # GameTick_t
    m_donated = 0xDF4 # bool
    m_fLastShotTime = 0xDF8 # GameTime_t
    m_bWasOwnedByCT = 0xDFC # bool
    m_bWasOwnedByTerrorist = 0xDFD # bool
    m_bFiredOutOfAmmoEvent = 0xDFE # bool
    m_numRemoveUnownedWeaponThink = 0xE00 # int32_t
    m_IronSightController = 0xE08 # CIronSightController
    m_iIronSightMode = 0xE20 # int32_t
    m_flLastLOSTraceFailureTime = 0xE24 # GameTime_t
    m_iNumEmptyAttacks = 0xE28 # int32_t

class CCSWeaponBaseGun: # CCSWeaponBase
    m_zoomLevel = 0xE30 # int32_t
    m_iBurstShotsRemaining = 0xE34 # int32_t
    m_silencedModelIndex = 0xE40 # int32_t
    m_inPrecache = 0xE44 # bool
    m_bNeedsBoltAction = 0xE45 # bool
    m_bSkillReloadAvailable = 0xE46 # bool
    m_bSkillReloadLiftedReloadKey = 0xE47 # bool
    m_bSkillBoltInterruptAvailable = 0xE48 # bool
    m_bSkillBoltLiftedFireKey = 0xE49 # bool

class CCSWeaponBaseVData: # CBasePlayerWeaponVData
    m_WeaponType = 0x240 # CSWeaponType
    m_WeaponCategory = 0x244 # CSWeaponCategory
    m_szViewModel = 0x248 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    m_szPlayerModel = 0x328 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    m_szWorldDroppedModel = 0x408 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    m_szAimsightLensMaskModel = 0x4E8 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    m_szMagazineModel = 0x5C8 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    m_szHeatEffect = 0x6A8 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    m_szEjectBrassEffect = 0x788 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    m_szMuzzleFlashParticleAlt = 0x868 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    m_szMuzzleFlashThirdPersonParticle = 0x948 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    m_szMuzzleFlashThirdPersonParticleAlt = 0xA28 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    m_szTracerParticle = 0xB08 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    m_GearSlot = 0xBE8 # gear_slot_t
    m_GearSlotPosition = 0xBEC # int32_t
    m_DefaultLoadoutSlot = 0xBF0 # loadout_slot_t
    m_sWrongTeamMsg = 0xBF8 # CUtlString
    m_nPrice = 0xC00 # int32_t
    m_nKillAward = 0xC04 # int32_t
    m_nPrimaryReserveAmmoMax = 0xC08 # int32_t
    m_nSecondaryReserveAmmoMax = 0xC0C # int32_t
    m_bMeleeWeapon = 0xC10 # bool
    m_bHasBurstMode = 0xC11 # bool
    m_bIsRevolver = 0xC12 # bool
    m_bCannotShootUnderwater = 0xC13 # bool
    m_szName = 0xC18 # CUtlString
    m_szAnimExtension = 0xC20 # CUtlString
    m_eSilencerType = 0xC28 # CSWeaponSilencerType
    m_nCrosshairMinDistance = 0xC2C # int32_t
    m_nCrosshairDeltaDistance = 0xC30 # int32_t
    m_flCycleTime = 0xC34 # CFiringModeFloat
    m_flMaxSpeed = 0xC3C # CFiringModeFloat
    m_flSpread = 0xC44 # CFiringModeFloat
    m_flInaccuracyCrouch = 0xC4C # CFiringModeFloat
    m_flInaccuracyStand = 0xC54 # CFiringModeFloat
    m_flInaccuracyJump = 0xC5C # CFiringModeFloat
    m_flInaccuracyLand = 0xC64 # CFiringModeFloat
    m_flInaccuracyLadder = 0xC6C # CFiringModeFloat
    m_flInaccuracyFire = 0xC74 # CFiringModeFloat
    m_flInaccuracyMove = 0xC7C # CFiringModeFloat
    m_flRecoilAngle = 0xC84 # CFiringModeFloat
    m_flRecoilAngleVariance = 0xC8C # CFiringModeFloat
    m_flRecoilMagnitude = 0xC94 # CFiringModeFloat
    m_flRecoilMagnitudeVariance = 0xC9C # CFiringModeFloat
    m_nTracerFrequency = 0xCA4 # CFiringModeInt
    m_flInaccuracyJumpInitial = 0xCAC # float
    m_flInaccuracyJumpApex = 0xCB0 # float
    m_flInaccuracyReload = 0xCB4 # float
    m_nRecoilSeed = 0xCB8 # int32_t
    m_nSpreadSeed = 0xCBC # int32_t
    m_flTimeToIdleAfterFire = 0xCC0 # float
    m_flIdleInterval = 0xCC4 # float
    m_flAttackMovespeedFactor = 0xCC8 # float
    m_flHeatPerShot = 0xCCC # float
    m_flInaccuracyPitchShift = 0xCD0 # float
    m_flInaccuracyAltSoundThreshold = 0xCD4 # float
    m_flBotAudibleRange = 0xCD8 # float
    m_szUseRadioSubtitle = 0xCE0 # CUtlString
    m_bUnzoomsAfterShot = 0xCE8 # bool
    m_bHideViewModelWhenZoomed = 0xCE9 # bool
    m_nZoomLevels = 0xCEC # int32_t
    m_nZoomFOV1 = 0xCF0 # int32_t
    m_nZoomFOV2 = 0xCF4 # int32_t
    m_flZoomTime0 = 0xCF8 # float
    m_flZoomTime1 = 0xCFC # float
    m_flZoomTime2 = 0xD00 # float
    m_flIronSightPullUpSpeed = 0xD04 # float
    m_flIronSightPutDownSpeed = 0xD08 # float
    m_flIronSightFOV = 0xD0C # float
    m_flIronSightPivotForward = 0xD10 # float
    m_flIronSightLooseness = 0xD14 # float
    m_angPivotAngle = 0xD18 # QAngle
    m_vecIronSightEyePos = 0xD24 # Vector
    m_nDamage = 0xD30 # int32_t
    m_flHeadshotMultiplier = 0xD34 # float
    m_flArmorRatio = 0xD38 # float
    m_flPenetration = 0xD3C # float
    m_flRange = 0xD40 # float
    m_flRangeModifier = 0xD44 # float
    m_flFlinchVelocityModifierLarge = 0xD48 # float
    m_flFlinchVelocityModifierSmall = 0xD4C # float
    m_flRecoveryTimeCrouch = 0xD50 # float
    m_flRecoveryTimeStand = 0xD54 # float
    m_flRecoveryTimeCrouchFinal = 0xD58 # float
    m_flRecoveryTimeStandFinal = 0xD5C # float
    m_nRecoveryTransitionStartBullet = 0xD60 # int32_t
    m_nRecoveryTransitionEndBullet = 0xD64 # int32_t
    m_flThrowVelocity = 0xD68 # float
    m_vSmokeColor = 0xD6C # Vector
    m_szAnimClass = 0xD78 # CUtlString

class CChangeLevel: # CBaseTrigger
    m_sMapName = 0x8A8 # CUtlString
    m_sLandmarkName = 0x8B0 # CUtlString
    m_OnChangeLevel = 0x8B8 # CEntityIOOutput
    m_bTouched = 0x8E0 # bool
    m_bNoTouch = 0x8E1 # bool
    m_bNewChapter = 0x8E2 # bool
    m_bOnChangeLevelFired = 0x8E3 # bool

class CChicken: # CDynamicProp
    m_AttributeManager = 0xB28 # CAttributeContainer
    m_OriginalOwnerXuidLow = 0xDF0 # uint32_t
    m_OriginalOwnerXuidHigh = 0xDF4 # uint32_t
    m_updateTimer = 0xDF8 # CountdownTimer
    m_stuckAnchor = 0xE10 # Vector
    m_stuckTimer = 0xE20 # CountdownTimer
    m_collisionStuckTimer = 0xE38 # CountdownTimer
    m_isOnGround = 0xE50 # bool
    m_vFallVelocity = 0xE54 # Vector
    m_activity = 0xE60 # ChickenActivity
    m_activityTimer = 0xE68 # CountdownTimer
    m_turnRate = 0xE80 # float
    m_fleeFrom = 0xE84 # CHandle<CBaseEntity>
    m_moveRateThrottleTimer = 0xE88 # CountdownTimer
    m_startleTimer = 0xEA0 # CountdownTimer
    m_vocalizeTimer = 0xEB8 # CountdownTimer
    m_flWhenZombified = 0xED0 # GameTime_t
    m_jumpedThisFrame = 0xED4 # bool
    m_leader = 0xED8 # CHandle<CCSPlayerPawn>
    m_reuseTimer = 0xEE0 # CountdownTimer
    m_hasBeenUsed = 0xEF8 # bool
    m_jumpTimer = 0xF00 # CountdownTimer
    m_flLastJumpTime = 0xF18 # float
    m_bInJump = 0xF1C # bool
    m_isWaitingForLeader = 0xF1D # bool
    m_repathTimer = 0x2F28 # CountdownTimer
    m_inhibitDoorTimer = 0x2F40 # CountdownTimer
    m_inhibitObstacleAvoidanceTimer = 0x2FD0 # CountdownTimer
    m_vecPathGoal = 0x2FF0 # Vector
    m_flActiveFollowStartTime = 0x2FFC # GameTime_t
    m_followMinuteTimer = 0x3000 # CountdownTimer
    m_vecLastEggPoopPosition = 0x3018 # Vector
    m_vecEggsPooped = 0x3028 # CUtlVector<CHandle<CBaseEntity>>
    m_BlockDirectionTimer = 0x3048 # CountdownTimer

class CCollisionProperty:
    m_collisionAttribute = 0x10 # VPhysicsCollisionAttribute_t
    m_vecMins = 0x40 # Vector
    m_vecMaxs = 0x4C # Vector
    m_usSolidFlags = 0x5A # uint8_t
    m_nSolidType = 0x5B # SolidType_t
    m_triggerBloat = 0x5C # uint8_t
    m_nSurroundType = 0x5D # SurroundingBoundsType_t
    m_CollisionGroup = 0x5E # uint8_t
    m_nEnablePhysics = 0x5F # uint8_t
    m_flBoundingRadius = 0x60 # float
    m_vecSpecifiedSurroundingMins = 0x64 # Vector
    m_vecSpecifiedSurroundingMaxs = 0x70 # Vector
    m_vecSurroundingMaxs = 0x7C # Vector
    m_vecSurroundingMins = 0x88 # Vector
    m_vCapsuleCenter1 = 0x94 # Vector
    m_vCapsuleCenter2 = 0xA0 # Vector
    m_flCapsuleRadius = 0xAC # float

class CColorCorrection: # CBaseEntity
    m_flFadeInDuration = 0x4B0 # float
    m_flFadeOutDuration = 0x4B4 # float
    m_flStartFadeInWeight = 0x4B8 # float
    m_flStartFadeOutWeight = 0x4BC # float
    m_flTimeStartFadeIn = 0x4C0 # GameTime_t
    m_flTimeStartFadeOut = 0x4C4 # GameTime_t
    m_flMaxWeight = 0x4C8 # float
    m_bStartDisabled = 0x4CC # bool
    m_bEnabled = 0x4CD # bool
    m_bMaster = 0x4CE # bool
    m_bClientSide = 0x4CF # bool
    m_bExclusive = 0x4D0 # bool
    m_MinFalloff = 0x4D4 # float
    m_MaxFalloff = 0x4D8 # float
    m_flCurWeight = 0x4DC # float
    m_netlookupFilename = 0x4E0 # char[512]
    m_lookupFilename = 0x6E0 # CUtlSymbolLarge

class CColorCorrectionVolume: # CBaseTrigger
    m_bEnabled = 0x8A8 # bool
    m_MaxWeight = 0x8AC # float
    m_FadeDuration = 0x8B0 # float
    m_bStartDisabled = 0x8B4 # bool
    m_Weight = 0x8B8 # float
    m_lookupFilename = 0x8BC # char[512]
    m_LastEnterWeight = 0xABC # float
    m_LastEnterTime = 0xAC0 # GameTime_t
    m_LastExitWeight = 0xAC4 # float
    m_LastExitTime = 0xAC8 # GameTime_t

class CCommentaryAuto: # CBaseEntity
    m_OnCommentaryNewGame = 0x4B0 # CEntityIOOutput
    m_OnCommentaryMidGame = 0x4D8 # CEntityIOOutput
    m_OnCommentaryMultiplayerSpawn = 0x500 # CEntityIOOutput

class CCommentarySystem:
    m_bCommentaryConvarsChanging = 0x11 # bool
    m_bCommentaryEnabledMidGame = 0x12 # bool
    m_flNextTeleportTime = 0x14 # GameTime_t
    m_iTeleportStage = 0x18 # int32_t
    m_bCheatState = 0x1C # bool
    m_bIsFirstSpawnGroupToLoad = 0x1D # bool
    m_hCurrentNode = 0x38 # CHandle<CPointCommentaryNode>
    m_hActiveCommentaryNode = 0x3C # CHandle<CPointCommentaryNode>
    m_hLastCommentaryNode = 0x40 # CHandle<CPointCommentaryNode>
    m_vecNodes = 0x48 # CUtlVector<CHandle<CPointCommentaryNode>>

class CCommentaryViewPosition: # CSprite

class CConstantForceController:
    m_linear = 0xC # Vector
    m_angular = 0x18 # RotationVector
    m_linearSave = 0x24 # Vector
    m_angularSave = 0x30 # RotationVector

class CConstraintAnchor: # CBaseAnimGraph
    m_massScale = 0x890 # float

class CCoopBonusCoin: # CDynamicProp

class CCopyRecipientFilter:
    m_Flags = 0x8 # int32_t
    m_Recipients = 0x10 # CUtlVector<CPlayerSlot>

class CCredits: # CPointEntity
    m_OnCreditsDone = 0x4B0 # CEntityIOOutput
    m_bRolledOutroCredits = 0x4D8 # bool
    m_flLogoLength = 0x4DC # float

class CDEagle: # CCSWeaponBaseGun

class CDamageRecord:
    m_PlayerDamager = 0x28 # CHandle<CCSPlayerPawnBase>
    m_PlayerRecipient = 0x2C # CHandle<CCSPlayerPawnBase>
    m_hPlayerControllerDamager = 0x30 # CHandle<CCSPlayerController>
    m_hPlayerControllerRecipient = 0x34 # CHandle<CCSPlayerController>
    m_szPlayerDamagerName = 0x38 # CUtlString
    m_szPlayerRecipientName = 0x40 # CUtlString
    m_DamagerXuid = 0x48 # uint64_t
    m_RecipientXuid = 0x50 # uint64_t
    m_iDamage = 0x58 # int32_t
    m_iActualHealthRemoved = 0x5C # int32_t
    m_iNumHits = 0x60 # int32_t
    m_iLastBulletUpdate = 0x64 # int32_t
    m_bIsOtherEnemy = 0x68 # bool
    m_killType = 0x69 # EKillTypes_t

class CDebugHistory: # CBaseEntity
    m_nNpcEvents = 0x44F0 # int32_t

class CDecoyGrenade: # CBaseCSGrenade

class CDecoyProjectile: # CBaseCSGrenadeProjectile
    m_nDecoyShotTick = 0xA48 # int32_t
    m_shotsRemaining = 0xA4C # int32_t
    m_fExpireTime = 0xA50 # GameTime_t
    m_decoyWeaponDefIndex = 0xA60 # uint16_t

class CDynamicLight: # CBaseModelEntity
    m_ActualFlags = 0x700 # uint8_t
    m_Flags = 0x701 # uint8_t
    m_LightStyle = 0x702 # uint8_t
    m_On = 0x703 # bool
    m_Radius = 0x704 # float
    m_Exponent = 0x708 # int32_t
    m_InnerAngle = 0x70C # float
    m_OuterAngle = 0x710 # float
    m_SpotRadius = 0x714 # float

class CDynamicProp: # CBreakableProp
    m_bCreateNavObstacle = 0xA10 # bool
    m_bUseHitboxesForRenderBox = 0xA11 # bool
    m_bUseAnimGraph = 0xA12 # bool
    m_pOutputAnimBegun = 0xA18 # CEntityIOOutput
    m_pOutputAnimOver = 0xA40 # CEntityIOOutput
    m_pOutputAnimLoopCycleOver = 0xA68 # CEntityIOOutput
    m_OnAnimReachedStart = 0xA90 # CEntityIOOutput
    m_OnAnimReachedEnd = 0xAB8 # CEntityIOOutput
    m_iszDefaultAnim = 0xAE0 # CUtlSymbolLarge
    m_nDefaultAnimLoopMode = 0xAE8 # AnimLoopMode_t
    m_bAnimateOnServer = 0xAEC # bool
    m_bRandomizeCycle = 0xAED # bool
    m_bStartDisabled = 0xAEE # bool
    m_bScriptedMovement = 0xAEF # bool
    m_bFiredStartEndOutput = 0xAF0 # bool
    m_bForceNpcExclude = 0xAF1 # bool
    m_bCreateNonSolid = 0xAF2 # bool
    m_bIsOverrideProp = 0xAF3 # bool
    m_iInitialGlowState = 0xAF4 # int32_t
    m_nGlowRange = 0xAF8 # int32_t
    m_nGlowRangeMin = 0xAFC # int32_t
    m_glowColor = 0xB00 # Color
    m_nGlowTeam = 0xB04 # int32_t

class CDynamicPropAlias_cable_dynamic: # CDynamicProp

class CDynamicPropAlias_dynamic_prop: # CDynamicProp

class CDynamicPropAlias_prop_dynamic_override: # CDynamicProp

class CEconEntity: # CBaseFlex
    m_AttributeManager = 0x930 # CAttributeContainer
    m_OriginalOwnerXuidLow = 0xBF8 # uint32_t
    m_OriginalOwnerXuidHigh = 0xBFC # uint32_t
    m_nFallbackPaintKit = 0xC00 # int32_t
    m_nFallbackSeed = 0xC04 # int32_t
    m_flFallbackWear = 0xC08 # float
    m_nFallbackStatTrak = 0xC0C # int32_t
    m_hOldProvidee = 0xC10 # CHandle<CBaseEntity>
    m_iOldOwnerClass = 0xC14 # int32_t

class CEconItemAttribute:
    m_iAttributeDefinitionIndex = 0x30 # uint16_t
    m_flValue = 0x34 # float
    m_flInitialValue = 0x38 # float
    m_nRefundableCurrency = 0x3C # int32_t
    m_bSetBonus = 0x40 # bool

class CEconItemView: # IEconItemInterface
    m_iItemDefinitionIndex = 0x38 # uint16_t
    m_iEntityQuality = 0x3C # int32_t
    m_iEntityLevel = 0x40 # uint32_t
    m_iItemID = 0x48 # uint64_t
    m_iItemIDHigh = 0x50 # uint32_t
    m_iItemIDLow = 0x54 # uint32_t
    m_iAccountID = 0x58 # uint32_t
    m_iInventoryPosition = 0x5C # uint32_t
    m_bInitialized = 0x68 # bool
    m_AttributeList = 0x70 # CAttributeList
    m_NetworkedDynamicAttributes = 0xD0 # CAttributeList
    m_szCustomName = 0x130 # char[161]
    m_szCustomNameOverride = 0x1D1 # char[161]

class CEconWearable: # CEconEntity
    m_nForceSkin = 0xC18 # int32_t
    m_bAlwaysAllow = 0xC1C # bool

class CEffectData:
    m_vOrigin = 0x8 # Vector
    m_vStart = 0x14 # Vector
    m_vNormal = 0x20 # Vector
    m_vAngles = 0x2C # QAngle
    m_hEntity = 0x38 # CEntityHandle
    m_hOtherEntity = 0x3C # CEntityHandle
    m_flScale = 0x40 # float
    m_flMagnitude = 0x44 # float
    m_flRadius = 0x48 # float
    m_nSurfaceProp = 0x4C # CUtlStringToken
    m_nEffectIndex = 0x50 # CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_nDamageType = 0x58 # uint32_t
    m_nPenetrate = 0x5C # uint8_t
    m_nMaterial = 0x5E # uint16_t
    m_nHitBox = 0x60 # uint16_t
    m_nColor = 0x62 # uint8_t
    m_fFlags = 0x63 # uint8_t
    m_nAttachmentIndex = 0x64 # AttachmentHandle_t
    m_nAttachmentName = 0x68 # CUtlStringToken
    m_iEffectName = 0x6C # uint16_t
    m_nExplosionType = 0x6E # uint8_t

class CEnableMotionFixup: # CBaseEntity

class CEntityBlocker: # CBaseModelEntity

class CEntityComponent:

class CEntityDissolve: # CBaseModelEntity
    m_flFadeInStart = 0x700 # float
    m_flFadeInLength = 0x704 # float
    m_flFadeOutModelStart = 0x708 # float
    m_flFadeOutModelLength = 0x70C # float
    m_flFadeOutStart = 0x710 # float
    m_flFadeOutLength = 0x714 # float
    m_flStartTime = 0x718 # GameTime_t
    m_nDissolveType = 0x71C # EntityDisolveType_t
    m_vDissolverOrigin = 0x720 # Vector
    m_nMagnitude = 0x72C # uint32_t

class CEntityFlame: # CBaseEntity
    m_hEntAttached = 0x4B0 # CHandle<CBaseEntity>
    m_bCheapEffect = 0x4B4 # bool
    m_flSize = 0x4B8 # float
    m_bUseHitboxes = 0x4BC # bool
    m_iNumHitboxFires = 0x4C0 # int32_t
    m_flHitboxFireScale = 0x4C4 # float
    m_flLifetime = 0x4C8 # GameTime_t
    m_hAttacker = 0x4CC # CHandle<CBaseEntity>
    m_iDangerSound = 0x4D0 # int32_t
    m_flDirectDamagePerSecond = 0x4D4 # float
    m_iCustomDamageType = 0x4D8 # int32_t

class CEntityIdentity:
    m_nameStringableIndex = 0x14 # int32_t
    m_name = 0x18 # CUtlSymbolLarge
    m_designerName = 0x20 # CUtlSymbolLarge
    m_flags = 0x30 # uint32_t
    m_worldGroupId = 0x38 # WorldGroupId_t
    m_fDataObjectTypes = 0x3C # uint32_t
    m_PathIndex = 0x40 # ChangeAccessorFieldPathIndex_t
    m_pPrev = 0x58 # CEntityIdentity*
    m_pNext = 0x60 # CEntityIdentity*
    m_pPrevByClass = 0x68 # CEntityIdentity*
    m_pNextByClass = 0x70 # CEntityIdentity*

class CEntityInstance:
    m_iszPrivateVScripts = 0x8 # CUtlSymbolLarge
    m_pEntity = 0x10 # CEntityIdentity*
    m_CScriptComponent = 0x28 # CScriptComponent*

class CEntitySubclassVDataBase:

class CEnvBeam: # CBeam
    m_active = 0x7A0 # int32_t
    m_spriteTexture = 0x7A8 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_iszStartEntity = 0x7B0 # CUtlSymbolLarge
    m_iszEndEntity = 0x7B8 # CUtlSymbolLarge
    m_life = 0x7C0 # float
    m_boltWidth = 0x7C4 # float
    m_noiseAmplitude = 0x7C8 # float
    m_speed = 0x7CC # int32_t
    m_restrike = 0x7D0 # float
    m_iszSpriteName = 0x7D8 # CUtlSymbolLarge
    m_frameStart = 0x7E0 # int32_t
    m_vEndPointWorld = 0x7E4 # Vector
    m_vEndPointRelative = 0x7F0 # Vector
    m_radius = 0x7FC # float
    m_TouchType = 0x800 # Touch_t
    m_iFilterName = 0x808 # CUtlSymbolLarge
    m_hFilter = 0x810 # CHandle<CBaseEntity>
    m_iszDecal = 0x818 # CUtlSymbolLarge
    m_OnTouchedByEntity = 0x820 # CEntityIOOutput

class CEnvBeverage: # CBaseEntity
    m_CanInDispenser = 0x4B0 # bool
    m_nBeverageType = 0x4B4 # int32_t

class CEnvCombinedLightProbeVolume: # CBaseEntity
    m_Color = 0x1508 # Color
    m_flBrightness = 0x150C # float
    m_hCubemapTexture = 0x1510 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_bCustomCubemapTexture = 0x1518 # bool
    m_hLightProbeTexture = 0x1520 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hLightProbeDirectLightIndicesTexture = 0x1528 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hLightProbeDirectLightScalarsTexture = 0x1530 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hLightProbeDirectLightShadowsTexture = 0x1538 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_vBoxMins = 0x1540 # Vector
    m_vBoxMaxs = 0x154C # Vector
    m_bMoveable = 0x1558 # bool
    m_nHandshake = 0x155C # int32_t
    m_nEnvCubeMapArrayIndex = 0x1560 # int32_t
    m_nPriority = 0x1564 # int32_t
    m_bStartDisabled = 0x1568 # bool
    m_flEdgeFadeDist = 0x156C # float
    m_vEdgeFadeDists = 0x1570 # Vector
    m_nLightProbeSizeX = 0x157C # int32_t
    m_nLightProbeSizeY = 0x1580 # int32_t
    m_nLightProbeSizeZ = 0x1584 # int32_t
    m_nLightProbeAtlasX = 0x1588 # int32_t
    m_nLightProbeAtlasY = 0x158C # int32_t
    m_nLightProbeAtlasZ = 0x1590 # int32_t
    m_bEnabled = 0x15A9 # bool

class CEnvCubemap: # CBaseEntity
    m_hCubemapTexture = 0x530 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_bCustomCubemapTexture = 0x538 # bool
    m_flInfluenceRadius = 0x53C # float
    m_vBoxProjectMins = 0x540 # Vector
    m_vBoxProjectMaxs = 0x54C # Vector
    m_bMoveable = 0x558 # bool
    m_nHandshake = 0x55C # int32_t
    m_nEnvCubeMapArrayIndex = 0x560 # int32_t
    m_nPriority = 0x564 # int32_t
    m_flEdgeFadeDist = 0x568 # float
    m_vEdgeFadeDists = 0x56C # Vector
    m_flDiffuseScale = 0x578 # float
    m_bStartDisabled = 0x57C # bool
    m_bDefaultEnvMap = 0x57D # bool
    m_bDefaultSpecEnvMap = 0x57E # bool
    m_bIndoorCubeMap = 0x57F # bool
    m_bCopyDiffuseFromDefaultCubemap = 0x580 # bool
    m_bEnabled = 0x590 # bool

class CEnvCubemapBox: # CEnvCubemap

class CEnvCubemapFog: # CBaseEntity
    m_flEndDistance = 0x4B0 # float
    m_flStartDistance = 0x4B4 # float
    m_flFogFalloffExponent = 0x4B8 # float
    m_bHeightFogEnabled = 0x4BC # bool
    m_flFogHeightWidth = 0x4C0 # float
    m_flFogHeightEnd = 0x4C4 # float
    m_flFogHeightStart = 0x4C8 # float
    m_flFogHeightExponent = 0x4CC # float
    m_flLODBias = 0x4D0 # float
    m_bActive = 0x4D4 # bool
    m_bStartDisabled = 0x4D5 # bool
    m_flFogMaxOpacity = 0x4D8 # float
    m_nCubemapSourceType = 0x4DC # int32_t
    m_hSkyMaterial = 0x4E0 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_iszSkyEntity = 0x4E8 # CUtlSymbolLarge
    m_hFogCubemapTexture = 0x4F0 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_bHasHeightFogEnd = 0x4F8 # bool
    m_bFirstTime = 0x4F9 # bool

class CEnvDecal: # CBaseModelEntity
    m_hDecalMaterial = 0x700 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_flWidth = 0x708 # float
    m_flHeight = 0x70C # float
    m_flDepth = 0x710 # float
    m_nRenderOrder = 0x714 # uint32_t
    m_bProjectOnWorld = 0x718 # bool
    m_bProjectOnCharacters = 0x719 # bool
    m_bProjectOnWater = 0x71A # bool
    m_flDepthSortBias = 0x71C # float

class CEnvDetailController: # CBaseEntity
    m_flFadeStartDist = 0x4B0 # float
    m_flFadeEndDist = 0x4B4 # float

class CEnvEntityIgniter: # CBaseEntity
    m_flLifetime = 0x4B0 # float

class CEnvEntityMaker: # CPointEntity
    m_vecEntityMins = 0x4B0 # Vector
    m_vecEntityMaxs = 0x4BC # Vector
    m_hCurrentInstance = 0x4C8 # CHandle<CBaseEntity>
    m_hCurrentBlocker = 0x4CC # CHandle<CBaseEntity>
    m_vecBlockerOrigin = 0x4D0 # Vector
    m_angPostSpawnDirection = 0x4DC # QAngle
    m_flPostSpawnDirectionVariance = 0x4E8 # float
    m_flPostSpawnSpeed = 0x4EC # float
    m_bPostSpawnUseAngles = 0x4F0 # bool
    m_iszTemplate = 0x4F8 # CUtlSymbolLarge
    m_pOutputOnSpawned = 0x500 # CEntityIOOutput
    m_pOutputOnFailedSpawn = 0x528 # CEntityIOOutput

class CEnvExplosion: # CModelPointEntity
    m_iMagnitude = 0x700 # int32_t
    m_flPlayerDamage = 0x704 # float
    m_iRadiusOverride = 0x708 # int32_t
    m_flInnerRadius = 0x70C # float
    m_spriteScale = 0x710 # int32_t
    m_flDamageForce = 0x714 # float
    m_hInflictor = 0x718 # CHandle<CBaseEntity>
    m_iCustomDamageType = 0x71C # int32_t
    m_iszExplosionType = 0x728 # CUtlSymbolLarge
    m_iszCustomEffectName = 0x730 # CUtlSymbolLarge
    m_iszCustomSoundName = 0x738 # CUtlSymbolLarge
    m_iClassIgnore = 0x740 # Class_T
    m_iClassIgnore2 = 0x744 # Class_T
    m_iszEntityIgnoreName = 0x748 # CUtlSymbolLarge
    m_hEntityIgnore = 0x750 # CHandle<CBaseEntity>

class CEnvFade: # CLogicalEntity
    m_fadeColor = 0x4B0 # Color
    m_Duration = 0x4B4 # float
    m_HoldDuration = 0x4B8 # float
    m_OnBeginFade = 0x4C0 # CEntityIOOutput

class CEnvFireSensor: # CBaseEntity
    m_bEnabled = 0x4B0 # bool
    m_bHeatAtLevel = 0x4B1 # bool
    m_radius = 0x4B4 # float
    m_targetLevel = 0x4B8 # float
    m_targetTime = 0x4BC # float
    m_levelTime = 0x4C0 # float
    m_OnHeatLevelStart = 0x4C8 # CEntityIOOutput
    m_OnHeatLevelEnd = 0x4F0 # CEntityIOOutput

class CEnvFireSource: # CBaseEntity
    m_bEnabled = 0x4B0 # bool
    m_radius = 0x4B4 # float
    m_damage = 0x4B8 # float

class CEnvFunnel: # CBaseEntity

class CEnvGlobal: # CLogicalEntity
    m_outCounter = 0x4B0 # CEntityOutputTemplate<int32_t>
    m_globalstate = 0x4D8 # CUtlSymbolLarge
    m_triggermode = 0x4E0 # int32_t
    m_initialstate = 0x4E4 # int32_t
    m_counter = 0x4E8 # int32_t

class CEnvHudHint: # CPointEntity
    m_iszMessage = 0x4B0 # CUtlSymbolLarge

class CEnvInstructorHint: # CPointEntity
    m_iszName = 0x4B0 # CUtlSymbolLarge
    m_iszReplace_Key = 0x4B8 # CUtlSymbolLarge
    m_iszHintTargetEntity = 0x4C0 # CUtlSymbolLarge
    m_iTimeout = 0x4C8 # int32_t
    m_iDisplayLimit = 0x4CC # int32_t
    m_iszIcon_Onscreen = 0x4D0 # CUtlSymbolLarge
    m_iszIcon_Offscreen = 0x4D8 # CUtlSymbolLarge
    m_iszCaption = 0x4E0 # CUtlSymbolLarge
    m_iszActivatorCaption = 0x4E8 # CUtlSymbolLarge
    m_Color = 0x4F0 # Color
    m_fIconOffset = 0x4F4 # float
    m_fRange = 0x4F8 # float
    m_iPulseOption = 0x4FC # uint8_t
    m_iAlphaOption = 0x4FD # uint8_t
    m_iShakeOption = 0x4FE # uint8_t
    m_bStatic = 0x4FF # bool
    m_bNoOffscreen = 0x500 # bool
    m_bForceCaption = 0x501 # bool
    m_iInstanceType = 0x504 # int32_t
    m_bSuppressRest = 0x508 # bool
    m_iszBinding = 0x510 # CUtlSymbolLarge
    m_bAllowNoDrawTarget = 0x518 # bool
    m_bAutoStart = 0x519 # bool
    m_bLocalPlayerOnly = 0x51A # bool

class CEnvInstructorVRHint: # CPointEntity
    m_iszName = 0x4B0 # CUtlSymbolLarge
    m_iszHintTargetEntity = 0x4B8 # CUtlSymbolLarge
    m_iTimeout = 0x4C0 # int32_t
    m_iszCaption = 0x4C8 # CUtlSymbolLarge
    m_iszStartSound = 0x4D0 # CUtlSymbolLarge
    m_iLayoutFileType = 0x4D8 # int32_t
    m_iszCustomLayoutFile = 0x4E0 # CUtlSymbolLarge
    m_iAttachType = 0x4E8 # int32_t
    m_flHeightOffset = 0x4EC # float

class CEnvLaser: # CBeam
    m_iszLaserTarget = 0x7A0 # CUtlSymbolLarge
    m_pSprite = 0x7A8 # CSprite*
    m_iszSpriteName = 0x7B0 # CUtlSymbolLarge
    m_firePosition = 0x7B8 # Vector
    m_flStartFrame = 0x7C4 # float

class CEnvLightProbeVolume: # CBaseEntity
    m_hLightProbeTexture = 0x1488 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hLightProbeDirectLightIndicesTexture = 0x1490 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hLightProbeDirectLightScalarsTexture = 0x1498 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hLightProbeDirectLightShadowsTexture = 0x14A0 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_vBoxMins = 0x14A8 # Vector
    m_vBoxMaxs = 0x14B4 # Vector
    m_bMoveable = 0x14C0 # bool
    m_nHandshake = 0x14C4 # int32_t
    m_nPriority = 0x14C8 # int32_t
    m_bStartDisabled = 0x14CC # bool
    m_nLightProbeSizeX = 0x14D0 # int32_t
    m_nLightProbeSizeY = 0x14D4 # int32_t
    m_nLightProbeSizeZ = 0x14D8 # int32_t
    m_nLightProbeAtlasX = 0x14DC # int32_t
    m_nLightProbeAtlasY = 0x14E0 # int32_t
    m_nLightProbeAtlasZ = 0x14E4 # int32_t
    m_bEnabled = 0x14F1 # bool

class CEnvMicrophone: # CPointEntity
    m_bDisabled = 0x4B0 # bool
    m_hMeasureTarget = 0x4B4 # CHandle<CBaseEntity>
    m_nSoundMask = 0x4B8 # int32_t
    m_flSensitivity = 0x4BC # float
    m_flSmoothFactor = 0x4C0 # float
    m_flMaxRange = 0x4C4 # float
    m_iszSpeakerName = 0x4C8 # CUtlSymbolLarge
    m_hSpeaker = 0x4D0 # CHandle<CBaseEntity>
    m_bAvoidFeedback = 0x4D4 # bool
    m_iSpeakerDSPPreset = 0x4D8 # int32_t
    m_iszListenFilter = 0x4E0 # CUtlSymbolLarge
    m_hListenFilter = 0x4E8 # CHandle<CBaseFilter>
    m_SoundLevel = 0x4F0 # CEntityOutputTemplate<float>
    m_OnRoutedSound = 0x518 # CEntityIOOutput
    m_OnHeardSound = 0x540 # CEntityIOOutput
    m_szLastSound = 0x568 # char[256]
    m_iLastRoutedFrame = 0x668 # int32_t

class CEnvMuzzleFlash: # CPointEntity
    m_flScale = 0x4B0 # float
    m_iszParentAttachment = 0x4B8 # CUtlSymbolLarge

class CEnvParticleGlow: # CParticleSystem
    m_flAlphaScale = 0xC78 # float
    m_flRadiusScale = 0xC7C # float
    m_flSelfIllumScale = 0xC80 # float
    m_ColorTint = 0xC84 # Color
    m_hTextureOverride = 0xC88 # CStrongHandle<InfoForResourceTypeCTextureBase>

class CEnvProjectedTexture: # CModelPointEntity
    m_hTargetEntity = 0x700 # CHandle<CBaseEntity>
    m_bState = 0x704 # bool
    m_bAlwaysUpdate = 0x705 # bool
    m_flLightFOV = 0x708 # float
    m_bEnableShadows = 0x70C # bool
    m_bSimpleProjection = 0x70D # bool
    m_bLightOnlyTarget = 0x70E # bool
    m_bLightWorld = 0x70F # bool
    m_bCameraSpace = 0x710 # bool
    m_flBrightnessScale = 0x714 # float
    m_LightColor = 0x718 # Color
    m_flIntensity = 0x71C # float
    m_flLinearAttenuation = 0x720 # float
    m_flQuadraticAttenuation = 0x724 # float
    m_bVolumetric = 0x728 # bool
    m_flNoiseStrength = 0x72C # float
    m_flFlashlightTime = 0x730 # float
    m_nNumPlanes = 0x734 # uint32_t
    m_flPlaneOffset = 0x738 # float
    m_flVolumetricIntensity = 0x73C # float
    m_flColorTransitionTime = 0x740 # float
    m_flAmbient = 0x744 # float
    m_SpotlightTextureName = 0x748 # char[512]
    m_nSpotlightTextureFrame = 0x948 # int32_t
    m_nShadowQuality = 0x94C # uint32_t
    m_flNearZ = 0x950 # float
    m_flFarZ = 0x954 # float
    m_flProjectionSize = 0x958 # float
    m_flRotation = 0x95C # float
    m_bFlipHorizontal = 0x960 # bool

class CEnvScreenOverlay: # CPointEntity
    m_iszOverlayNames = 0x4B0 # CUtlSymbolLarge[10]
    m_flOverlayTimes = 0x500 # float[10]
    m_flStartTime = 0x528 # GameTime_t
    m_iDesiredOverlay = 0x52C # int32_t
    m_bIsActive = 0x530 # bool

class CEnvShake: # CPointEntity
    m_limitToEntity = 0x4B0 # CUtlSymbolLarge
    m_Amplitude = 0x4B8 # float
    m_Frequency = 0x4BC # float
    m_Duration = 0x4C0 # float
    m_Radius = 0x4C4 # float
    m_stopTime = 0x4C8 # GameTime_t
    m_nextShake = 0x4CC # GameTime_t
    m_currentAmp = 0x4D0 # float
    m_maxForce = 0x4D4 # Vector
    m_shakeCallback = 0x4E8 # CPhysicsShake

class CEnvSky: # CBaseModelEntity
    m_hSkyMaterial = 0x700 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_hSkyMaterialLightingOnly = 0x708 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_bStartDisabled = 0x710 # bool
    m_vTintColor = 0x711 # Color
    m_vTintColorLightingOnly = 0x715 # Color
    m_flBrightnessScale = 0x71C # float
    m_nFogType = 0x720 # int32_t
    m_flFogMinStart = 0x724 # float
    m_flFogMinEnd = 0x728 # float
    m_flFogMaxStart = 0x72C # float
    m_flFogMaxEnd = 0x730 # float
    m_bEnabled = 0x734 # bool

class CEnvSoundscape: # CServerOnlyEntity
    m_OnPlay = 0x4B0 # CEntityIOOutput
    m_flRadius = 0x4D8 # float
    m_soundscapeName = 0x4E0 # CUtlSymbolLarge
    m_soundEventName = 0x4E8 # CUtlSymbolLarge
    m_bOverrideWithEvent = 0x4F0 # bool
    m_soundscapeIndex = 0x4F4 # int32_t
    m_soundscapeEntityListId = 0x4F8 # int32_t
    m_soundEventHash = 0x4FC # uint32_t
    m_positionNames = 0x500 # CUtlSymbolLarge[8]
    m_hProxySoundscape = 0x540 # CHandle<CEnvSoundscape>
    m_bDisabled = 0x544 # bool

class CEnvSoundscapeAlias_snd_soundscape: # CEnvSoundscape

class CEnvSoundscapeProxy: # CEnvSoundscape
    m_MainSoundscapeName = 0x548 # CUtlSymbolLarge

class CEnvSoundscapeProxyAlias_snd_soundscape_proxy: # CEnvSoundscapeProxy

class CEnvSoundscapeTriggerable: # CEnvSoundscape

class CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable: # CEnvSoundscapeTriggerable

class CEnvSpark: # CPointEntity
    m_flDelay = 0x4B0 # float
    m_nMagnitude = 0x4B4 # int32_t
    m_nTrailLength = 0x4B8 # int32_t
    m_nType = 0x4BC # int32_t
    m_OnSpark = 0x4C0 # CEntityIOOutput

class CEnvSplash: # CPointEntity
    m_flScale = 0x4B0 # float

class CEnvTilt: # CPointEntity
    m_Duration = 0x4B0 # float
    m_Radius = 0x4B4 # float
    m_TiltTime = 0x4B8 # float
    m_stopTime = 0x4BC # GameTime_t

class CEnvTracer: # CPointEntity
    m_vecEnd = 0x4B0 # Vector
    m_flDelay = 0x4BC # float

class CEnvViewPunch: # CPointEntity
    m_flRadius = 0x4B0 # float
    m_angViewPunch = 0x4B4 # QAngle

class CEnvVolumetricFogController: # CBaseEntity
    m_flScattering = 0x4B0 # float
    m_flAnisotropy = 0x4B4 # float
    m_flFadeSpeed = 0x4B8 # float
    m_flDrawDistance = 0x4BC # float
    m_flFadeInStart = 0x4C0 # float
    m_flFadeInEnd = 0x4C4 # float
    m_flIndirectStrength = 0x4C8 # float
    m_nIndirectTextureDimX = 0x4CC # int32_t
    m_nIndirectTextureDimY = 0x4D0 # int32_t
    m_nIndirectTextureDimZ = 0x4D4 # int32_t
    m_vBoxMins = 0x4D8 # Vector
    m_vBoxMaxs = 0x4E4 # Vector
    m_bActive = 0x4F0 # bool
    m_flStartAnisoTime = 0x4F4 # GameTime_t
    m_flStartScatterTime = 0x4F8 # GameTime_t
    m_flStartDrawDistanceTime = 0x4FC # GameTime_t
    m_flStartAnisotropy = 0x500 # float
    m_flStartScattering = 0x504 # float
    m_flStartDrawDistance = 0x508 # float
    m_flDefaultAnisotropy = 0x50C # float
    m_flDefaultScattering = 0x510 # float
    m_flDefaultDrawDistance = 0x514 # float
    m_bStartDisabled = 0x518 # bool
    m_bEnableIndirect = 0x519 # bool
    m_bIsMaster = 0x51A # bool
    m_hFogIndirectTexture = 0x520 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_nForceRefreshCount = 0x528 # int32_t
    m_bFirstTime = 0x52C # bool

class CEnvVolumetricFogVolume: # CBaseEntity
    m_bActive = 0x4B0 # bool
    m_vBoxMins = 0x4B4 # Vector
    m_vBoxMaxs = 0x4C0 # Vector
    m_bStartDisabled = 0x4CC # bool
    m_flStrength = 0x4D0 # float
    m_nFalloffShape = 0x4D4 # int32_t
    m_flFalloffExponent = 0x4D8 # float

class CEnvWind: # CBaseEntity
    m_EnvWindShared = 0x4B0 # CEnvWindShared

class CEnvWindShared:
    m_flStartTime = 0x8 # GameTime_t
    m_iWindSeed = 0xC # uint32_t
    m_iMinWind = 0x10 # uint16_t
    m_iMaxWind = 0x12 # uint16_t
    m_windRadius = 0x14 # int32_t
    m_iMinGust = 0x18 # uint16_t
    m_iMaxGust = 0x1A # uint16_t
    m_flMinGustDelay = 0x1C # float
    m_flMaxGustDelay = 0x20 # float
    m_flGustDuration = 0x24 # float
    m_iGustDirChange = 0x28 # uint16_t
    m_location = 0x2C # Vector
    m_iszGustSound = 0x38 # int32_t
    m_iWindDir = 0x3C # int32_t
    m_flWindSpeed = 0x40 # float
    m_currentWindVector = 0x44 # Vector
    m_CurrentSwayVector = 0x50 # Vector
    m_PrevSwayVector = 0x5C # Vector
    m_iInitialWindDir = 0x68 # uint16_t
    m_flInitialWindSpeed = 0x6C # float
    m_OnGustStart = 0x70 # CEntityIOOutput
    m_OnGustEnd = 0x98 # CEntityIOOutput
    m_flVariationTime = 0xC0 # GameTime_t
    m_flSwayTime = 0xC4 # GameTime_t
    m_flSimTime = 0xC8 # GameTime_t
    m_flSwitchTime = 0xCC # GameTime_t
    m_flAveWindSpeed = 0xD0 # float
    m_bGusting = 0xD4 # bool
    m_flWindAngleVariation = 0xD8 # float
    m_flWindSpeedVariation = 0xDC # float
    m_iEntIndex = 0xE0 # CEntityIndex

class CEnvWindShared_WindAveEvent_t:
    m_flStartWindSpeed = 0x0 # float
    m_flAveWindSpeed = 0x4 # float

class CEnvWindShared_WindVariationEvent_t:
    m_flWindAngleVariation = 0x0 # float
    m_flWindSpeedVariation = 0x4 # float

class CFilterAttributeInt: # CBaseFilter
    m_sAttributeName = 0x508 # CUtlStringToken

class CFilterClass: # CBaseFilter
    m_iFilterClass = 0x508 # CUtlSymbolLarge

class CFilterContext: # CBaseFilter
    m_iFilterContext = 0x508 # CUtlSymbolLarge

class CFilterEnemy: # CBaseFilter
    m_iszEnemyName = 0x508 # CUtlSymbolLarge
    m_flRadius = 0x510 # float
    m_flOuterRadius = 0x514 # float
    m_nMaxSquadmatesPerEnemy = 0x518 # int32_t
    m_iszPlayerName = 0x520 # CUtlSymbolLarge

class CFilterLOS: # CBaseFilter

class CFilterMassGreater: # CBaseFilter
    m_fFilterMass = 0x508 # float

class CFilterModel: # CBaseFilter
    m_iFilterModel = 0x508 # CUtlSymbolLarge

class CFilterMultiple: # CBaseFilter
    m_nFilterType = 0x508 # filter_t
    m_iFilterName = 0x510 # CUtlSymbolLarge[10]
    m_hFilter = 0x560 # CHandle<CBaseEntity>[10]
    m_nFilterCount = 0x588 # int32_t

class CFilterName: # CBaseFilter
    m_iFilterName = 0x508 # CUtlSymbolLarge

class CFilterProximity: # CBaseFilter
    m_flRadius = 0x508 # float

class CFire: # CBaseModelEntity
    m_hEffect = 0x700 # CHandle<CBaseFire>
    m_hOwner = 0x704 # CHandle<CBaseEntity>
    m_nFireType = 0x708 # int32_t
    m_flFuel = 0x70C # float
    m_flDamageTime = 0x710 # GameTime_t
    m_lastDamage = 0x714 # GameTime_t
    m_flFireSize = 0x718 # float
    m_flLastNavUpdateTime = 0x71C # GameTime_t
    m_flHeatLevel = 0x720 # float
    m_flHeatAbsorb = 0x724 # float
    m_flDamageScale = 0x728 # float
    m_flMaxHeat = 0x72C # float
    m_flLastHeatLevel = 0x730 # float
    m_flAttackTime = 0x734 # float
    m_bEnabled = 0x738 # bool
    m_bStartDisabled = 0x739 # bool
    m_bDidActivate = 0x73A # bool
    m_OnIgnited = 0x740 # CEntityIOOutput
    m_OnExtinguished = 0x768 # CEntityIOOutput

class CFireCrackerBlast: # CInferno

class CFireSmoke: # CBaseFire
    m_nFlameModelIndex = 0x4C0 # int32_t
    m_nFlameFromAboveModelIndex = 0x4C4 # int32_t

class CFiringModeFloat:
    m_flValues = 0x0 # float[2]

class CFiringModeInt:
    m_nValues = 0x0 # int32_t[2]

class CFish: # CBaseAnimGraph
    m_pool = 0x890 # CHandle<CFishPool>
    m_id = 0x894 # uint32_t
    m_x = 0x898 # float
    m_y = 0x89C # float
    m_z = 0x8A0 # float
    m_angle = 0x8A4 # float
    m_angleChange = 0x8A8 # float
    m_forward = 0x8AC # Vector
    m_perp = 0x8B8 # Vector
    m_poolOrigin = 0x8C4 # Vector
    m_waterLevel = 0x8D0 # float
    m_speed = 0x8D4 # float
    m_desiredSpeed = 0x8D8 # float
    m_calmSpeed = 0x8DC # float
    m_panicSpeed = 0x8E0 # float
    m_avoidRange = 0x8E4 # float
    m_turnTimer = 0x8E8 # CountdownTimer
    m_turnClockwise = 0x900 # bool
    m_goTimer = 0x908 # CountdownTimer
    m_moveTimer = 0x920 # CountdownTimer
    m_panicTimer = 0x938 # CountdownTimer
    m_disperseTimer = 0x950 # CountdownTimer
    m_proximityTimer = 0x968 # CountdownTimer
    m_visible = 0x980 # CUtlVector<CFish*>

class CFishPool: # CBaseEntity
    m_fishCount = 0x4C0 # int32_t
    m_maxRange = 0x4C4 # float
    m_swimDepth = 0x4C8 # float
    m_waterLevel = 0x4CC # float
    m_isDormant = 0x4D0 # bool
    m_fishes = 0x4D8 # CUtlVector<CHandle<CFish>>
    m_visTimer = 0x4F0 # CountdownTimer

class CFists: # CCSWeaponBase
    m_bPlayingUninterruptableAct = 0xE30 # bool
    m_nUninterruptableActivity = 0xE34 # PlayerAnimEvent_t
    m_bRestorePrevWep = 0xE38 # bool
    m_hWeaponBeforePrevious = 0xE3C # CHandle<CBasePlayerWeapon>
    m_hWeaponPrevious = 0xE40 # CHandle<CBasePlayerWeapon>
    m_bDelayedHardPunchIncoming = 0xE44 # bool
    m_bDestroyAfterTaunt = 0xE45 # bool

class CFlashbang: # CBaseCSGrenade

class CFlashbangProjectile: # CBaseCSGrenadeProjectile
    m_flTimeToDetonate = 0xA40 # float
    m_numOpponentsHit = 0xA44 # uint8_t
    m_numTeammatesHit = 0xA45 # uint8_t

class CFogController: # CBaseEntity
    m_fog = 0x4B0 # fogparams_t
    m_bUseAngles = 0x518 # bool
    m_iChangedVariables = 0x51C # int32_t

class CFogTrigger: # CBaseTrigger
    m_fog = 0x8A8 # fogparams_t

class CFogVolume: # CServerOnlyModelEntity
    m_fogName = 0x700 # CUtlSymbolLarge
    m_postProcessName = 0x708 # CUtlSymbolLarge
    m_colorCorrectionName = 0x710 # CUtlSymbolLarge
    m_bDisabled = 0x720 # bool
    m_bInFogVolumesList = 0x721 # bool

class CFootstepControl: # CBaseTrigger
    m_source = 0x8A8 # CUtlSymbolLarge
    m_destination = 0x8B0 # CUtlSymbolLarge

class CFootstepTableHandle:

class CFuncBrush: # CBaseModelEntity
    m_iSolidity = 0x700 # BrushSolidities_e
    m_iDisabled = 0x704 # int32_t
    m_bSolidBsp = 0x708 # bool
    m_iszExcludedClass = 0x710 # CUtlSymbolLarge
    m_bInvertExclusion = 0x718 # bool
    m_bScriptedMovement = 0x719 # bool

class CFuncConveyor: # CBaseModelEntity
    m_szConveyorModels = 0x700 # CUtlSymbolLarge
    m_flTransitionDurationSeconds = 0x708 # float
    m_angMoveEntitySpace = 0x70C # QAngle
    m_vecMoveDirEntitySpace = 0x718 # Vector
    m_flTargetSpeed = 0x724 # float
    m_nTransitionStartTick = 0x728 # GameTick_t
    m_nTransitionDurationTicks = 0x72C # int32_t
    m_flTransitionStartSpeed = 0x730 # float
    m_hConveyorModels = 0x738 # CNetworkUtlVectorBase<CHandle<CBaseEntity>>

class CFuncElectrifiedVolume: # CFuncBrush
    m_EffectName = 0x720 # CUtlSymbolLarge
    m_EffectInterpenetrateName = 0x728 # CUtlSymbolLarge
    m_EffectZapName = 0x730 # CUtlSymbolLarge
    m_iszEffectSource = 0x738 # CUtlSymbolLarge

class CFuncIllusionary: # CBaseModelEntity

class CFuncInteractionLayerClip: # CBaseModelEntity
    m_bDisabled = 0x700 # bool
    m_iszInteractsAs = 0x708 # CUtlSymbolLarge
    m_iszInteractsWith = 0x710 # CUtlSymbolLarge

class CFuncLadder: # CBaseModelEntity
    m_vecLadderDir = 0x700 # Vector
    m_Dismounts = 0x710 # CUtlVector<CHandle<CInfoLadderDismount>>
    m_vecLocalTop = 0x728 # Vector
    m_vecPlayerMountPositionTop = 0x734 # Vector
    m_vecPlayerMountPositionBottom = 0x740 # Vector
    m_flAutoRideSpeed = 0x74C # float
    m_bDisabled = 0x750 # bool
    m_bFakeLadder = 0x751 # bool
    m_bHasSlack = 0x752 # bool
    m_surfacePropName = 0x758 # CUtlSymbolLarge
    m_OnPlayerGotOnLadder = 0x760 # CEntityIOOutput
    m_OnPlayerGotOffLadder = 0x788 # CEntityIOOutput

class CFuncLadderAlias_func_useableladder: # CFuncLadder

class CFuncMonitor: # CFuncBrush
    m_targetCamera = 0x720 # CUtlString
    m_nResolutionEnum = 0x728 # int32_t
    m_bRenderShadows = 0x72C # bool
    m_bUseUniqueColorTarget = 0x72D # bool
    m_brushModelName = 0x730 # CUtlString
    m_hTargetCamera = 0x738 # CHandle<CBaseEntity>
    m_bEnabled = 0x73C # bool
    m_bDraw3DSkybox = 0x73D # bool
    m_bStartEnabled = 0x73E # bool

class CFuncMoveLinear: # CBaseToggle
    m_authoredPosition = 0x780 # MoveLinearAuthoredPos_t
    m_angMoveEntitySpace = 0x784 # QAngle
    m_vecMoveDirParentSpace = 0x790 # Vector
    m_soundStart = 0x7A0 # CUtlSymbolLarge
    m_soundStop = 0x7A8 # CUtlSymbolLarge
    m_currentSound = 0x7B0 # CUtlSymbolLarge
    m_flBlockDamage = 0x7B8 # float
    m_flStartPosition = 0x7BC # float
    m_flMoveDistance = 0x7C0 # float
    m_OnFullyOpen = 0x7D0 # CEntityIOOutput
    m_OnFullyClosed = 0x7F8 # CEntityIOOutput
    m_bCreateMovableNavMesh = 0x820 # bool
    m_bCreateNavObstacle = 0x821 # bool

class CFuncMoveLinearAlias_momentary_door: # CFuncMoveLinear

class CFuncNavBlocker: # CBaseModelEntity
    m_bDisabled = 0x700 # bool
    m_nBlockedTeamNumber = 0x704 # int32_t

class CFuncNavObstruction: # CBaseModelEntity
    m_bDisabled = 0x708 # bool

class CFuncPlat: # CBasePlatTrain
    m_sNoise = 0x7A8 # CUtlSymbolLarge

class CFuncPlatRot: # CFuncPlat
    m_end = 0x7B0 # QAngle
    m_start = 0x7BC # QAngle

class CFuncPropRespawnZone: # CBaseEntity

class CFuncRotating: # CBaseModelEntity
    m_vecMoveAng = 0x700 # QAngle
    m_flFanFriction = 0x70C # float
    m_flAttenuation = 0x710 # float
    m_flVolume = 0x714 # float
    m_flTargetSpeed = 0x718 # float
    m_flMaxSpeed = 0x71C # float
    m_flBlockDamage = 0x720 # float
    m_flTimeScale = 0x724 # float
    m_NoiseRunning = 0x728 # CUtlSymbolLarge
    m_bReversed = 0x730 # bool
    m_angStart = 0x73C # QAngle
    m_bStopAtStartPos = 0x748 # bool
    m_vecClientOrigin = 0x74C # Vector
    m_vecClientAngles = 0x758 # QAngle

class CFuncShatterglass: # CBaseModelEntity
    m_hGlassMaterialDamaged = 0x700 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_hGlassMaterialUndamaged = 0x708 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_hConcreteMaterialEdgeFace = 0x710 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_hConcreteMaterialEdgeCaps = 0x718 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_hConcreteMaterialEdgeFins = 0x720 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_matPanelTransform = 0x728 # matrix3x4_t
    m_matPanelTransformWsTemp = 0x758 # matrix3x4_t
    m_vecShatterGlassShards = 0x788 # CUtlVector<uint32_t>
    m_PanelSize = 0x7A0 # Vector2D
    m_vecPanelNormalWs = 0x7A8 # Vector
    m_nNumShardsEverCreated = 0x7B4 # int32_t
    m_flLastShatterSoundEmitTime = 0x7B8 # GameTime_t
    m_flLastCleanupTime = 0x7BC # GameTime_t
    m_flInitAtTime = 0x7C0 # GameTime_t
    m_flGlassThickness = 0x7C4 # float
    m_flSpawnInvulnerability = 0x7C8 # float
    m_bBreakSilent = 0x7CC # bool
    m_bBreakShardless = 0x7CD # bool
    m_bBroken = 0x7CE # bool
    m_bHasRateLimitedShards = 0x7CF # bool
    m_bGlassNavIgnore = 0x7D0 # bool
    m_bGlassInFrame = 0x7D1 # bool
    m_bStartBroken = 0x7D2 # bool
    m_iInitialDamageType = 0x7D3 # uint8_t
    m_szDamagePositioningEntityName01 = 0x7D8 # CUtlSymbolLarge
    m_szDamagePositioningEntityName02 = 0x7E0 # CUtlSymbolLarge
    m_szDamagePositioningEntityName03 = 0x7E8 # CUtlSymbolLarge
    m_szDamagePositioningEntityName04 = 0x7F0 # CUtlSymbolLarge
    m_vInitialDamagePositions = 0x7F8 # CUtlVector<Vector>
    m_vExtraDamagePositions = 0x810 # CUtlVector<Vector>
    m_OnBroken = 0x828 # CEntityIOOutput
    m_iSurfaceType = 0x851 # uint8_t

class CFuncTankTrain: # CFuncTrackTrain
    m_OnDeath = 0x850 # CEntityIOOutput

class CFuncTimescale: # CBaseEntity
    m_flDesiredTimescale = 0x4B0 # float
    m_flAcceleration = 0x4B4 # float
    m_flMinBlendRate = 0x4B8 # float
    m_flBlendDeltaMultiplier = 0x4BC # float
    m_isStarted = 0x4C0 # bool

class CFuncTrackAuto: # CFuncTrackChange

class CFuncTrackChange: # CFuncPlatRot
    m_trackTop = 0x7C8 # CPathTrack*
    m_trackBottom = 0x7D0 # CPathTrack*
    m_train = 0x7D8 # CFuncTrackTrain*
    m_trackTopName = 0x7E0 # CUtlSymbolLarge
    m_trackBottomName = 0x7E8 # CUtlSymbolLarge
    m_trainName = 0x7F0 # CUtlSymbolLarge
    m_code = 0x7F8 # TRAIN_CODE
    m_targetState = 0x7FC # int32_t
    m_use = 0x800 # int32_t

class CFuncTrackTrain: # CBaseModelEntity
    m_ppath = 0x700 # CHandle<CPathTrack>
    m_length = 0x704 # float
    m_vPosPrev = 0x708 # Vector
    m_angPrev = 0x714 # QAngle
    m_controlMins = 0x720 # Vector
    m_controlMaxs = 0x72C # Vector
    m_lastBlockPos = 0x738 # Vector
    m_lastBlockTick = 0x744 # int32_t
    m_flVolume = 0x748 # float
    m_flBank = 0x74C # float
    m_oldSpeed = 0x750 # float
    m_flBlockDamage = 0x754 # float
    m_height = 0x758 # float
    m_maxSpeed = 0x75C # float
    m_dir = 0x760 # float
    m_iszSoundMove = 0x768 # CUtlSymbolLarge
    m_iszSoundMovePing = 0x770 # CUtlSymbolLarge
    m_iszSoundStart = 0x778 # CUtlSymbolLarge
    m_iszSoundStop = 0x780 # CUtlSymbolLarge
    m_strPathTarget = 0x788 # CUtlSymbolLarge
    m_flMoveSoundMinDuration = 0x790 # float
    m_flMoveSoundMaxDuration = 0x794 # float
    m_flNextMoveSoundTime = 0x798 # GameTime_t
    m_flMoveSoundMinPitch = 0x79C # float
    m_flMoveSoundMaxPitch = 0x7A0 # float
    m_eOrientationType = 0x7A4 # TrainOrientationType_t
    m_eVelocityType = 0x7A8 # TrainVelocityType_t
    m_OnStart = 0x7B8 # CEntityIOOutput
    m_OnNext = 0x7E0 # CEntityIOOutput
    m_OnArrivedAtDestinationNode = 0x808 # CEntityIOOutput
    m_bManualSpeedChanges = 0x830 # bool
    m_flDesiredSpeed = 0x834 # float
    m_flSpeedChangeTime = 0x838 # GameTime_t
    m_flAccelSpeed = 0x83C # float
    m_flDecelSpeed = 0x840 # float
    m_bAccelToSpeed = 0x844 # bool
    m_flTimeScale = 0x848 # float
    m_flNextMPSoundTime = 0x84C # GameTime_t

class CFuncTrain: # CBasePlatTrain
    m_hCurrentTarget = 0x7A8 # CHandle<CBaseEntity>
    m_activated = 0x7AC # bool
    m_hEnemy = 0x7B0 # CHandle<CBaseEntity>
    m_flBlockDamage = 0x7B4 # float
    m_flNextBlockTime = 0x7B8 # GameTime_t
    m_iszLastTarget = 0x7C0 # CUtlSymbolLarge

class CFuncTrainControls: # CBaseModelEntity

class CFuncVPhysicsClip: # CBaseModelEntity
    m_bDisabled = 0x700 # bool

class CFuncVehicleClip: # CBaseModelEntity

class CFuncWall: # CBaseModelEntity
    m_nState = 0x700 # int32_t

class CFuncWallToggle: # CFuncWall

class CFuncWater: # CBaseModelEntity
    m_BuoyancyHelper = 0x700 # CBuoyancyHelper

class CGameChoreoServices: # IChoreoServices
    m_hOwner = 0x8 # CHandle<CBaseAnimGraph>
    m_hScriptedSequence = 0xC # CHandle<CScriptedSequence>
    m_scriptState = 0x10 # IChoreoServices::ScriptState_t
    m_choreoState = 0x14 # IChoreoServices::ChoreoState_t
    m_flTimeStartedState = 0x18 # GameTime_t

class CGameEnd: # CRulePointEntity

class CGameGibManager: # CBaseEntity
    m_bAllowNewGibs = 0x4D0 # bool
    m_iCurrentMaxPieces = 0x4D4 # int32_t
    m_iMaxPieces = 0x4D8 # int32_t
    m_iLastFrame = 0x4DC # int32_t

class CGameMoney: # CRulePointEntity
    m_OnMoneySpent = 0x710 # CEntityIOOutput
    m_OnMoneySpentFail = 0x738 # CEntityIOOutput
    m_nMoney = 0x760 # int32_t
    m_strAwardText = 0x768 # CUtlString

class CGamePlayerEquip: # CRulePointEntity

class CGamePlayerZone: # CRuleBrushEntity
    m_OnPlayerInZone = 0x708 # CEntityIOOutput
    m_OnPlayerOutZone = 0x730 # CEntityIOOutput
    m_PlayersInCount = 0x758 # CEntityOutputTemplate<int32_t>
    m_PlayersOutCount = 0x780 # CEntityOutputTemplate<int32_t>

class CGameRules:
    m_szQuestName = 0x8 # char[128]
    m_nQuestPhase = 0x88 # int32_t

class CGameRulesProxy: # CBaseEntity

class CGameSceneNode:
    m_nodeToWorld = 0x10 # CTransform
    m_pOwner = 0x30 # CEntityInstance*
    m_pParent = 0x38 # CGameSceneNode*
    m_pChild = 0x40 # CGameSceneNode*
    m_pNextSibling = 0x48 # CGameSceneNode*
    m_hParent = 0x70 # CGameSceneNodeHandle
    m_vecOrigin = 0x80 # CNetworkOriginCellCoordQuantizedVector
    m_angRotation = 0xB8 # QAngle
    m_flScale = 0xC4 # float
    m_vecAbsOrigin = 0xC8 # Vector
    m_angAbsRotation = 0xD4 # QAngle
    m_flAbsScale = 0xE0 # float
    m_nParentAttachmentOrBone = 0xE4 # int16_t
    m_bDebugAbsOriginChanges = 0xE6 # bool
    m_bDormant = 0xE7 # bool
    m_bForceParentToBeNetworked = 0xE8 # bool
    m_bDirtyHierarchy = 0x0 # bitfield:1
    m_bDirtyBoneMergeInfo = 0x0 # bitfield:1
    m_bNetworkedPositionChanged = 0x0 # bitfield:1
    m_bNetworkedAnglesChanged = 0x0 # bitfield:1
    m_bNetworkedScaleChanged = 0x0 # bitfield:1
    m_bWillBeCallingPostDataUpdate = 0x0 # bitfield:1
    m_bNotifyBoneTransformsChanged = 0x0 # bitfield:1
    m_bBoneMergeFlex = 0x0 # bitfield:1
    m_nLatchAbsOrigin = 0x0 # bitfield:2
    m_bDirtyBoneMergeBoneToRoot = 0x0 # bitfield:1
    m_nHierarchicalDepth = 0xEB # uint8_t
    m_nHierarchyType = 0xEC # uint8_t
    m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xED # uint8_t
    m_name = 0xF0 # CUtlStringToken
    m_hierarchyAttachName = 0x130 # CUtlStringToken
    m_flZOffset = 0x134 # float
    m_vRenderOrigin = 0x138 # Vector

class CGameSceneNodeHandle:
    m_hOwner = 0x8 # CEntityHandle
    m_name = 0xC # CUtlStringToken

class CGameScriptedMoveData:
    m_vDest = 0x0 # Vector
    m_vSrc = 0xC # Vector
    m_angSrc = 0x18 # QAngle
    m_angDst = 0x24 # QAngle
    m_angCurrent = 0x30 # QAngle
    m_flAngRate = 0x3C # float
    m_flDuration = 0x40 # float
    m_flStartTime = 0x44 # GameTime_t
    m_nPrevMoveType = 0x48 # MoveType_t
    m_bActive = 0x49 # bool
    m_bTeleportOnEnd = 0x4A # bool
    m_bEndOnDestinationReached = 0x4B # bool
    m_bIgnoreRotation = 0x4C # bool
    m_nType = 0x50 # ScriptedMoveType_t
    m_bSuccess = 0x54 # bool
    m_nForcedCrouchState = 0x58 # ForcedCrouchState_t
    m_bIgnoreCollisions = 0x5C # bool

class CGameText: # CRulePointEntity
    m_iszMessage = 0x710 # CUtlSymbolLarge
    m_textParms = 0x718 # hudtextparms_t

class CGenericConstraint: # CPhysConstraint
    m_nLinearMotionX = 0x510 # JointMotion_t
    m_nLinearMotionY = 0x514 # JointMotion_t
    m_nLinearMotionZ = 0x518 # JointMotion_t
    m_flLinearFrequencyX = 0x51C # float
    m_flLinearFrequencyY = 0x520 # float
    m_flLinearFrequencyZ = 0x524 # float
    m_flLinearDampingRatioX = 0x528 # float
    m_flLinearDampingRatioY = 0x52C # float
    m_flLinearDampingRatioZ = 0x530 # float
    m_flMaxLinearImpulseX = 0x534 # float
    m_flMaxLinearImpulseY = 0x538 # float
    m_flMaxLinearImpulseZ = 0x53C # float
    m_flBreakAfterTimeX = 0x540 # float
    m_flBreakAfterTimeY = 0x544 # float
    m_flBreakAfterTimeZ = 0x548 # float
    m_flBreakAfterTimeStartTimeX = 0x54C # GameTime_t
    m_flBreakAfterTimeStartTimeY = 0x550 # GameTime_t
    m_flBreakAfterTimeStartTimeZ = 0x554 # GameTime_t
    m_flBreakAfterTimeThresholdX = 0x558 # float
    m_flBreakAfterTimeThresholdY = 0x55C # float
    m_flBreakAfterTimeThresholdZ = 0x560 # float
    m_flNotifyForceX = 0x564 # float
    m_flNotifyForceY = 0x568 # float
    m_flNotifyForceZ = 0x56C # float
    m_flNotifyForceMinTimeX = 0x570 # float
    m_flNotifyForceMinTimeY = 0x574 # float
    m_flNotifyForceMinTimeZ = 0x578 # float
    m_flNotifyForceLastTimeX = 0x57C # GameTime_t
    m_flNotifyForceLastTimeY = 0x580 # GameTime_t
    m_flNotifyForceLastTimeZ = 0x584 # GameTime_t
    m_bAxisNotifiedX = 0x588 # bool
    m_bAxisNotifiedY = 0x589 # bool
    m_bAxisNotifiedZ = 0x58A # bool
    m_nAngularMotionX = 0x58C # JointMotion_t
    m_nAngularMotionY = 0x590 # JointMotion_t
    m_nAngularMotionZ = 0x594 # JointMotion_t
    m_flAngularFrequencyX = 0x598 # float
    m_flAngularFrequencyY = 0x59C # float
    m_flAngularFrequencyZ = 0x5A0 # float
    m_flAngularDampingRatioX = 0x5A4 # float
    m_flAngularDampingRatioY = 0x5A8 # float
    m_flAngularDampingRatioZ = 0x5AC # float
    m_flMaxAngularImpulseX = 0x5B0 # float
    m_flMaxAngularImpulseY = 0x5B4 # float
    m_flMaxAngularImpulseZ = 0x5B8 # float
    m_NotifyForceReachedX = 0x5C0 # CEntityIOOutput
    m_NotifyForceReachedY = 0x5E8 # CEntityIOOutput
    m_NotifyForceReachedZ = 0x610 # CEntityIOOutput

class CGlowProperty:
    m_fGlowColor = 0x8 # Vector
    m_iGlowType = 0x30 # int32_t
    m_iGlowTeam = 0x34 # int32_t
    m_nGlowRange = 0x38 # int32_t
    m_nGlowRangeMin = 0x3C # int32_t
    m_glowColorOverride = 0x40 # Color
    m_bFlashing = 0x44 # bool
    m_flGlowTime = 0x48 # float
    m_flGlowStartTime = 0x4C # float
    m_bEligibleForScreenHighlight = 0x50 # bool
    m_bGlowing = 0x51 # bool

class CGradientFog: # CBaseEntity
    m_hGradientFogTexture = 0x4B0 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_flFogStartDistance = 0x4B8 # float
    m_flFogEndDistance = 0x4BC # float
    m_bHeightFogEnabled = 0x4C0 # bool
    m_flFogStartHeight = 0x4C4 # float
    m_flFogEndHeight = 0x4C8 # float
    m_flFarZ = 0x4CC # float
    m_flFogMaxOpacity = 0x4D0 # float
    m_flFogFalloffExponent = 0x4D4 # float
    m_flFogVerticalExponent = 0x4D8 # float
    m_fogColor = 0x4DC # Color
    m_flFogStrength = 0x4E0 # float
    m_flFadeTime = 0x4E4 # float
    m_bStartDisabled = 0x4E8 # bool
    m_bIsEnabled = 0x4E9 # bool
    m_bGradientFogNeedsTextures = 0x4EA # bool

class CGunTarget: # CBaseToggle
    m_on = 0x780 # bool
    m_hTargetEnt = 0x784 # CHandle<CBaseEntity>
    m_OnDeath = 0x788 # CEntityIOOutput

class CHEGrenade: # CBaseCSGrenade

class CHEGrenadeProjectile: # CBaseCSGrenadeProjectile

class CHandleDummy: # CBaseEntity

class CHandleTest: # CBaseEntity
    m_Handle = 0x4B0 # CHandle<CBaseEntity>
    m_bSendHandle = 0x4B4 # bool

class CHintMessage:
    m_hintString = 0x8 # char*
    m_args = 0x10 # CUtlVector<char*>
    m_duration = 0x28 # float

class CHintMessageQueue:
    m_tmMessageEnd = 0x8 # float
    m_messages = 0x10 # CUtlVector<CHintMessage*>
    m_pPlayerController = 0x28 # CBasePlayerController*

class CHitboxComponent: # CEntityComponent
    m_bvDisabledHitGroups = 0x24 # uint32_t[1]

class CHostage: # CHostageExpresserShim
    m_OnHostageBeginGrab = 0x9E8 # CEntityIOOutput
    m_OnFirstPickedUp = 0xA10 # CEntityIOOutput
    m_OnDroppedNotRescued = 0xA38 # CEntityIOOutput
    m_OnRescued = 0xA60 # CEntityIOOutput
    m_entitySpottedState = 0xA88 # EntitySpottedState_t
    m_nSpotRules = 0xAA0 # int32_t
    m_uiHostageSpawnExclusionGroupMask = 0xAA4 # uint32_t
    m_nHostageSpawnRandomFactor = 0xAA8 # uint32_t
    m_bRemove = 0xAAC # bool
    m_vel = 0xAB0 # Vector
    m_isRescued = 0xABC # bool
    m_jumpedThisFrame = 0xABD # bool
    m_nHostageState = 0xAC0 # int32_t
    m_leader = 0xAC4 # CHandle<CBaseEntity>
    m_lastLeader = 0xAC8 # CHandle<CCSPlayerPawnBase>
    m_reuseTimer = 0xAD0 # CountdownTimer
    m_hasBeenUsed = 0xAE8 # bool
    m_accel = 0xAEC # Vector
    m_isRunning = 0xAF8 # bool
    m_isCrouching = 0xAF9 # bool
    m_jumpTimer = 0xB00 # CountdownTimer
    m_isWaitingForLeader = 0xB18 # bool
    m_repathTimer = 0x2B28 # CountdownTimer
    m_inhibitDoorTimer = 0x2B40 # CountdownTimer
    m_inhibitObstacleAvoidanceTimer = 0x2BD0 # CountdownTimer
    m_wiggleTimer = 0x2BF0 # CountdownTimer
    m_isAdjusted = 0x2C0C # bool
    m_bHandsHaveBeenCut = 0x2C0D # bool
    m_hHostageGrabber = 0x2C10 # CHandle<CCSPlayerPawn>
    m_fLastGrabTime = 0x2C14 # GameTime_t
    m_vecPositionWhenStartedDroppingToGround = 0x2C18 # Vector
    m_vecGrabbedPos = 0x2C24 # Vector
    m_flRescueStartTime = 0x2C30 # GameTime_t
    m_flGrabSuccessTime = 0x2C34 # GameTime_t
    m_flDropStartTime = 0x2C38 # GameTime_t
    m_nApproachRewardPayouts = 0x2C3C # int32_t
    m_nPickupEventCount = 0x2C40 # int32_t
    m_vecSpawnGroundPos = 0x2C44 # Vector
    m_vecHostageResetPosition = 0x2C64 # Vector

class CHostageAlias_info_hostage_spawn: # CHostage

class CHostageCarriableProp: # CBaseAnimGraph

class CHostageExpresserShim: # CBaseCombatCharacter
    m_pExpresser = 0x9D0 # CAI_Expresser*

class CHostageRescueZone: # CHostageRescueZoneShim

class CHostageRescueZoneShim: # CBaseTrigger

class CInButtonState:
    m_pButtonStates = 0x8 # uint64_t[3]

class CIncendiaryGrenade: # CMolotovGrenade

class CInferno: # CBaseModelEntity
    m_firePositions = 0x710 # Vector[64]
    m_fireParentPositions = 0xA10 # Vector[64]
    m_bFireIsBurning = 0xD10 # bool[64]
    m_BurnNormal = 0xD50 # Vector[64]
    m_fireCount = 0x1050 # int32_t
    m_nInfernoType = 0x1054 # int32_t
    m_nFireEffectTickBegin = 0x1058 # int32_t
    m_nFireLifetime = 0x105C # float
    m_bInPostEffectTime = 0x1060 # bool
    m_nFiresExtinguishCount = 0x1064 # int32_t
    m_bWasCreatedInSmoke = 0x1068 # bool
    m_extent = 0x1270 # Extent
    m_damageTimer = 0x1288 # CountdownTimer
    m_damageRampTimer = 0x12A0 # CountdownTimer
    m_splashVelocity = 0x12B8 # Vector
    m_InitialSplashVelocity = 0x12C4 # Vector
    m_startPos = 0x12D0 # Vector
    m_vecOriginalSpawnLocation = 0x12DC # Vector
    m_activeTimer = 0x12E8 # IntervalTimer
    m_fireSpawnOffset = 0x12F8 # int32_t
    m_nMaxFlames = 0x12FC # int32_t
    m_BookkeepingTimer = 0x1300 # CountdownTimer
    m_NextSpreadTimer = 0x1318 # CountdownTimer
    m_nSourceItemDefIndex = 0x1330 # uint16_t

class CInfoData: # CServerOnlyEntity

class CInfoDeathmatchSpawn: # SpawnPoint

class CInfoDynamicShadowHint: # CPointEntity
    m_bDisabled = 0x4B0 # bool
    m_flRange = 0x4B4 # float
    m_nImportance = 0x4B8 # int32_t
    m_nLightChoice = 0x4BC # int32_t
    m_hLight = 0x4C0 # CHandle<CBaseEntity>

class CInfoDynamicShadowHintBox: # CInfoDynamicShadowHint
    m_vBoxMins = 0x4C8 # Vector
    m_vBoxMaxs = 0x4D4 # Vector

class CInfoEnemyTerroristSpawn: # SpawnPointCoopEnemy

class CInfoGameEventProxy: # CPointEntity
    m_iszEventName = 0x4B0 # CUtlSymbolLarge
    m_flRange = 0x4B8 # float

class CInfoInstructorHintBombTargetA: # CPointEntity

class CInfoInstructorHintBombTargetB: # CPointEntity

class CInfoInstructorHintHostageRescueZone: # CPointEntity

class CInfoInstructorHintTarget: # CPointEntity

class CInfoLadderDismount: # CBaseEntity

class CInfoLandmark: # CPointEntity

class CInfoOffscreenPanoramaTexture: # CPointEntity
    m_bDisabled = 0x4B0 # bool
    m_nResolutionX = 0x4B4 # int32_t
    m_nResolutionY = 0x4B8 # int32_t
    m_szLayoutFileName = 0x4C0 # CUtlSymbolLarge
    m_RenderAttrName = 0x4C8 # CUtlSymbolLarge
    m_TargetEntities = 0x4D0 # CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    m_nTargetChangeCount = 0x4E8 # int32_t
    m_vecCSSClasses = 0x4F0 # CNetworkUtlVectorBase<CUtlSymbolLarge>
    m_szTargetsName = 0x508 # CUtlSymbolLarge
    m_AdditionalTargetEntities = 0x510 # CUtlVector<CHandle<CBaseModelEntity>>

class CInfoParticleTarget: # CPointEntity

class CInfoPlayerCounterterrorist: # SpawnPoint

class CInfoPlayerStart: # CPointEntity
    m_bDisabled = 0x4B0 # bool

class CInfoPlayerTerrorist: # SpawnPoint

class CInfoSpawnGroupLandmark: # CPointEntity

class CInfoSpawnGroupLoadUnload: # CLogicalEntity
    m_OnSpawnGroupLoadStarted = 0x4B0 # CEntityIOOutput
    m_OnSpawnGroupLoadFinished = 0x4D8 # CEntityIOOutput
    m_OnSpawnGroupUnloadStarted = 0x500 # CEntityIOOutput
    m_OnSpawnGroupUnloadFinished = 0x528 # CEntityIOOutput
    m_iszSpawnGroupName = 0x550 # CUtlSymbolLarge
    m_iszSpawnGroupFilterName = 0x558 # CUtlSymbolLarge
    m_iszLandmarkName = 0x560 # CUtlSymbolLarge
    m_sFixedSpawnGroupName = 0x568 # CUtlString
    m_flTimeoutInterval = 0x570 # float
    m_bStreamingStarted = 0x574 # bool
    m_bUnloadingStarted = 0x575 # bool

class CInfoTarget: # CPointEntity

class CInfoTargetServerOnly: # CServerOnlyPointEntity

class CInfoTeleportDestination: # CPointEntity

class CInfoVisibilityBox: # CBaseEntity
    m_nMode = 0x4B4 # int32_t
    m_vBoxSize = 0x4B8 # Vector
    m_bEnabled = 0x4C4 # bool

class CInfoWorldLayer: # CBaseEntity
    m_pOutputOnEntitiesSpawned = 0x4B0 # CEntityIOOutput
    m_worldName = 0x4D8 # CUtlSymbolLarge
    m_layerName = 0x4E0 # CUtlSymbolLarge
    m_bWorldLayerVisible = 0x4E8 # bool
    m_bEntitiesSpawned = 0x4E9 # bool
    m_bCreateAsChildSpawnGroup = 0x4EA # bool
    m_hLayerSpawnGroup = 0x4EC # uint32_t

class CInstancedSceneEntity: # CSceneEntity
    m_hOwner = 0xA08 # CHandle<CBaseEntity>
    m_bHadOwner = 0xA0C # bool
    m_flPostSpeakDelay = 0xA10 # float
    m_flPreDelay = 0xA14 # float
    m_bIsBackground = 0xA18 # bool

class CInstructorEventEntity: # CPointEntity
    m_iszName = 0x4B0 # CUtlSymbolLarge
    m_iszHintTargetEntity = 0x4B8 # CUtlSymbolLarge
    m_hTargetPlayer = 0x4C0 # CHandle<CBasePlayerPawn>

class CIronSightController:
    m_bIronSightAvailable = 0x8 # bool
    m_flIronSightAmount = 0xC # float
    m_flIronSightAmountGained = 0x10 # float
    m_flIronSightAmountBiased = 0x14 # float

class CItem: # CBaseAnimGraph
    m_OnPlayerTouch = 0x898 # CEntityIOOutput
    m_bActivateWhenAtRest = 0x8C0 # bool
    m_OnCacheInteraction = 0x8C8 # CEntityIOOutput
    m_OnPlayerPickup = 0x8F0 # CEntityIOOutput
    m_OnGlovePulled = 0x918 # CEntityIOOutput
    m_vOriginalSpawnOrigin = 0x940 # Vector
    m_vOriginalSpawnAngles = 0x94C # QAngle
    m_bPhysStartAsleep = 0x958 # bool

class CItemAssaultSuit: # CItem

class CItemDefuser: # CItem
    m_entitySpottedState = 0x968 # EntitySpottedState_t
    m_nSpotRules = 0x980 # int32_t

class CItemDefuserAlias_item_defuser: # CItemDefuser

class CItemDogtags: # CItem
    m_OwningPlayer = 0x968 # CHandle<CCSPlayerPawn>
    m_KillingPlayer = 0x96C # CHandle<CCSPlayerPawn>

class CItemGeneric: # CItem
    m_bHasTriggerRadius = 0x970 # bool
    m_bHasPickupRadius = 0x971 # bool
    m_flPickupRadiusSqr = 0x974 # float
    m_flTriggerRadiusSqr = 0x978 # float
    m_flLastPickupCheck = 0x97C # GameTime_t
    m_bPlayerCounterListenerAdded = 0x980 # bool
    m_bPlayerInTriggerRadius = 0x981 # bool
    m_hSpawnParticleEffect = 0x988 # CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_pAmbientSoundEffect = 0x990 # CUtlSymbolLarge
    m_bAutoStartAmbientSound = 0x998 # bool
    m_pSpawnScriptFunction = 0x9A0 # CUtlSymbolLarge
    m_hPickupParticleEffect = 0x9A8 # CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_pPickupSoundEffect = 0x9B0 # CUtlSymbolLarge
    m_pPickupScriptFunction = 0x9B8 # CUtlSymbolLarge
    m_hTimeoutParticleEffect = 0x9C0 # CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_pTimeoutSoundEffect = 0x9C8 # CUtlSymbolLarge
    m_pTimeoutScriptFunction = 0x9D0 # CUtlSymbolLarge
    m_pPickupFilterName = 0x9D8 # CUtlSymbolLarge
    m_hPickupFilter = 0x9E0 # CHandle<CBaseFilter>
    m_OnPickup = 0x9E8 # CEntityIOOutput
    m_OnTimeout = 0xA10 # CEntityIOOutput
    m_OnTriggerStartTouch = 0xA38 # CEntityIOOutput
    m_OnTriggerTouch = 0xA60 # CEntityIOOutput
    m_OnTriggerEndTouch = 0xA88 # CEntityIOOutput
    m_pAllowPickupScriptFunction = 0xAB0 # CUtlSymbolLarge
    m_flPickupRadius = 0xAB8 # float
    m_flTriggerRadius = 0xABC # float
    m_pTriggerSoundEffect = 0xAC0 # CUtlSymbolLarge
    m_bGlowWhenInTrigger = 0xAC8 # bool
    m_glowColor = 0xAC9 # Color
    m_bUseable = 0xACD # bool
    m_hTriggerHelper = 0xAD0 # CHandle<CItemGenericTriggerHelper>

class CItemGenericTriggerHelper: # CBaseModelEntity
    m_hParentItem = 0x700 # CHandle<CItemGeneric>

class CItemHeavyAssaultSuit: # CItemAssaultSuit

class CItemKevlar: # CItem

class CItemSoda: # CBaseAnimGraph

class CItem_Healthshot: # CWeaponBaseItem

class CKeepUpright: # CPointEntity
    m_worldGoalAxis = 0x4B8 # Vector
    m_localTestAxis = 0x4C4 # Vector
    m_nameAttach = 0x4D8 # CUtlSymbolLarge
    m_attachedObject = 0x4E0 # CHandle<CBaseEntity>
    m_angularLimit = 0x4E4 # float
    m_bActive = 0x4E8 # bool
    m_bDampAllRotation = 0x4E9 # bool

class CKnife: # CCSWeaponBase
    m_bFirstAttack = 0xE30 # bool

class CLightComponent: # CEntityComponent
    __m_pChainEntity = 0x48 # CNetworkVarChainer
    m_Color = 0x85 # Color
    m_SecondaryColor = 0x89 # Color
    m_flBrightness = 0x90 # float
    m_flBrightnessScale = 0x94 # float
    m_flBrightnessMult = 0x98 # float
    m_flRange = 0x9C # float
    m_flFalloff = 0xA0 # float
    m_flAttenuation0 = 0xA4 # float
    m_flAttenuation1 = 0xA8 # float
    m_flAttenuation2 = 0xAC # float
    m_flTheta = 0xB0 # float
    m_flPhi = 0xB4 # float
    m_hLightCookie = 0xB8 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_nCascades = 0xC0 # int32_t
    m_nCastShadows = 0xC4 # int32_t
    m_nShadowWidth = 0xC8 # int32_t
    m_nShadowHeight = 0xCC # int32_t
    m_bRenderDiffuse = 0xD0 # bool
    m_nRenderSpecular = 0xD4 # int32_t
    m_bRenderTransmissive = 0xD8 # bool
    m_flOrthoLightWidth = 0xDC # float
    m_flOrthoLightHeight = 0xE0 # float
    m_nStyle = 0xE4 # int32_t
    m_Pattern = 0xE8 # CUtlString
    m_nCascadeRenderStaticObjects = 0xF0 # int32_t
    m_flShadowCascadeCrossFade = 0xF4 # float
    m_flShadowCascadeDistanceFade = 0xF8 # float
    m_flShadowCascadeDistance0 = 0xFC # float
    m_flShadowCascadeDistance1 = 0x100 # float
    m_flShadowCascadeDistance2 = 0x104 # float
    m_flShadowCascadeDistance3 = 0x108 # float
    m_nShadowCascadeResolution0 = 0x10C # int32_t
    m_nShadowCascadeResolution1 = 0x110 # int32_t
    m_nShadowCascadeResolution2 = 0x114 # int32_t
    m_nShadowCascadeResolution3 = 0x118 # int32_t
    m_bUsesBakedShadowing = 0x11C # bool
    m_nShadowPriority = 0x120 # int32_t
    m_nBakedShadowIndex = 0x124 # int32_t
    m_bRenderToCubemaps = 0x128 # bool
    m_nDirectLight = 0x12C # int32_t
    m_nIndirectLight = 0x130 # int32_t
    m_flFadeMinDist = 0x134 # float
    m_flFadeMaxDist = 0x138 # float
    m_flShadowFadeMinDist = 0x13C # float
    m_flShadowFadeMaxDist = 0x140 # float
    m_bEnabled = 0x144 # bool
    m_bFlicker = 0x145 # bool
    m_bPrecomputedFieldsValid = 0x146 # bool
    m_vPrecomputedBoundsMins = 0x148 # Vector
    m_vPrecomputedBoundsMaxs = 0x154 # Vector
    m_vPrecomputedOBBOrigin = 0x160 # Vector
    m_vPrecomputedOBBAngles = 0x16C # QAngle
    m_vPrecomputedOBBExtent = 0x178 # Vector
    m_flPrecomputedMaxRange = 0x184 # float
    m_nFogLightingMode = 0x188 # int32_t
    m_flFogContributionStength = 0x18C # float
    m_flNearClipPlane = 0x190 # float
    m_SkyColor = 0x194 # Color
    m_flSkyIntensity = 0x198 # float
    m_SkyAmbientBounce = 0x19C # Color
    m_bUseSecondaryColor = 0x1A0 # bool
    m_bMixedShadows = 0x1A1 # bool
    m_flLightStyleStartTime = 0x1A4 # GameTime_t
    m_flCapsuleLength = 0x1A8 # float
    m_flMinRoughness = 0x1AC # float
    m_bPvsModifyEntity = 0x1C0 # bool

class CLightDirectionalEntity: # CLightEntity

class CLightEntity: # CBaseModelEntity
    m_CLightComponent = 0x700 # CLightComponent*

class CLightEnvironmentEntity: # CLightDirectionalEntity

class CLightGlow: # CBaseModelEntity
    m_nHorizontalSize = 0x700 # uint32_t
    m_nVerticalSize = 0x704 # uint32_t
    m_nMinDist = 0x708 # uint32_t
    m_nMaxDist = 0x70C # uint32_t
    m_nOuterMaxDist = 0x710 # uint32_t
    m_flGlowProxySize = 0x714 # float
    m_flHDRColorScale = 0x718 # float

class CLightOrthoEntity: # CLightEntity

class CLightSpotEntity: # CLightEntity

class CLogicAchievement: # CLogicalEntity
    m_bDisabled = 0x4B0 # bool
    m_iszAchievementEventID = 0x4B8 # CUtlSymbolLarge
    m_OnFired = 0x4C0 # CEntityIOOutput

class CLogicActiveAutosave: # CLogicAutosave
    m_TriggerHitPoints = 0x4C0 # int32_t
    m_flTimeToTrigger = 0x4C4 # float
    m_flStartTime = 0x4C8 # GameTime_t
    m_flDangerousTime = 0x4CC # float

class CLogicAuto: # CBaseEntity
    m_OnMapSpawn = 0x4B0 # CEntityIOOutput
    m_OnDemoMapSpawn = 0x4D8 # CEntityIOOutput
    m_OnNewGame = 0x500 # CEntityIOOutput
    m_OnLoadGame = 0x528 # CEntityIOOutput
    m_OnMapTransition = 0x550 # CEntityIOOutput
    m_OnBackgroundMap = 0x578 # CEntityIOOutput
    m_OnMultiNewMap = 0x5A0 # CEntityIOOutput
    m_OnMultiNewRound = 0x5C8 # CEntityIOOutput
    m_OnVREnabled = 0x5F0 # CEntityIOOutput
    m_OnVRNotEnabled = 0x618 # CEntityIOOutput
    m_globalstate = 0x640 # CUtlSymbolLarge

class CLogicAutosave: # CLogicalEntity
    m_bForceNewLevelUnit = 0x4B0 # bool
    m_minHitPoints = 0x4B4 # int32_t
    m_minHitPointsToCommit = 0x4B8 # int32_t

class CLogicBranch: # CLogicalEntity
    m_bInValue = 0x4B0 # bool
    m_Listeners = 0x4B8 # CUtlVector<CHandle<CBaseEntity>>
    m_OnTrue = 0x4D0 # CEntityIOOutput
    m_OnFalse = 0x4F8 # CEntityIOOutput

class CLogicBranchList: # CLogicalEntity
    m_nLogicBranchNames = 0x4B0 # CUtlSymbolLarge[16]
    m_LogicBranchList = 0x530 # CUtlVector<CHandle<CBaseEntity>>
    m_eLastState = 0x548 # CLogicBranchList::LogicBranchListenerLastState_t
    m_OnAllTrue = 0x550 # CEntityIOOutput
    m_OnAllFalse = 0x578 # CEntityIOOutput
    m_OnMixed = 0x5A0 # CEntityIOOutput

class CLogicCase: # CLogicalEntity
    m_nCase = 0x4B0 # CUtlSymbolLarge[32]
    m_nShuffleCases = 0x5B0 # int32_t
    m_nLastShuffleCase = 0x5B4 # int32_t
    m_uchShuffleCaseMap = 0x5B8 # uint8_t[32]
    m_OnCase = 0x5D8 # CEntityIOOutput[32]
    m_OnDefault = 0xAD8 # CEntityOutputTemplate<CVariantBase<CVariantDefaultAllocator>>

class CLogicCollisionPair: # CLogicalEntity
    m_nameAttach1 = 0x4B0 # CUtlSymbolLarge
    m_nameAttach2 = 0x4B8 # CUtlSymbolLarge
    m_disabled = 0x4C0 # bool
    m_succeeded = 0x4C1 # bool

class CLogicCompare: # CLogicalEntity
    m_flInValue = 0x4B0 # float
    m_flCompareValue = 0x4B4 # float
    m_OnLessThan = 0x4B8 # CEntityOutputTemplate<float>
    m_OnEqualTo = 0x4E0 # CEntityOutputTemplate<float>
    m_OnNotEqualTo = 0x508 # CEntityOutputTemplate<float>
    m_OnGreaterThan = 0x530 # CEntityOutputTemplate<float>

class CLogicDistanceAutosave: # CLogicalEntity
    m_iszTargetEntity = 0x4B0 # CUtlSymbolLarge
    m_flDistanceToPlayer = 0x4B8 # float
    m_bForceNewLevelUnit = 0x4BC # bool
    m_bCheckCough = 0x4BD # bool
    m_bThinkDangerous = 0x4BE # bool
    m_flDangerousTime = 0x4C0 # float

class CLogicDistanceCheck: # CLogicalEntity
    m_iszEntityA = 0x4B0 # CUtlSymbolLarge
    m_iszEntityB = 0x4B8 # CUtlSymbolLarge
    m_flZone1Distance = 0x4C0 # float
    m_flZone2Distance = 0x4C4 # float
    m_InZone1 = 0x4C8 # CEntityIOOutput
    m_InZone2 = 0x4F0 # CEntityIOOutput
    m_InZone3 = 0x518 # CEntityIOOutput

class CLogicEventListener: # CLogicalEntity
    m_strEventName = 0x4C0 # CUtlString
    m_bIsEnabled = 0x4C8 # bool
    m_nTeam = 0x4CC # int32_t
    m_OnEventFired = 0x4D0 # CEntityIOOutput

class CLogicGameEvent: # CLogicalEntity
    m_iszEventName = 0x4B0 # CUtlSymbolLarge

class CLogicGameEventListener: # CLogicalEntity
    m_OnEventFired = 0x4C0 # CEntityIOOutput
    m_iszGameEventName = 0x4E8 # CUtlSymbolLarge
    m_iszGameEventItem = 0x4F0 # CUtlSymbolLarge
    m_bEnabled = 0x4F8 # bool
    m_bStartDisabled = 0x4F9 # bool

class CLogicLineToEntity: # CLogicalEntity
    m_Line = 0x4B0 # CEntityOutputTemplate<Vector>
    m_SourceName = 0x4D8 # CUtlSymbolLarge
    m_StartEntity = 0x4E0 # CHandle<CBaseEntity>
    m_EndEntity = 0x4E4 # CHandle<CBaseEntity>

class CLogicMeasureMovement: # CLogicalEntity
    m_strMeasureTarget = 0x4B0 # CUtlSymbolLarge
    m_strMeasureReference = 0x4B8 # CUtlSymbolLarge
    m_strTargetReference = 0x4C0 # CUtlSymbolLarge
    m_hMeasureTarget = 0x4C8 # CHandle<CBaseEntity>
    m_hMeasureReference = 0x4CC # CHandle<CBaseEntity>
    m_hTarget = 0x4D0 # CHandle<CBaseEntity>
    m_hTargetReference = 0x4D4 # CHandle<CBaseEntity>
    m_flScale = 0x4D8 # float
    m_nMeasureType = 0x4DC # int32_t

class CLogicNPCCounter: # CBaseEntity
    m_OnMinCountAll = 0x4B0 # CEntityIOOutput
    m_OnMaxCountAll = 0x4D8 # CEntityIOOutput
    m_OnFactorAll = 0x500 # CEntityOutputTemplate<float>
    m_OnMinPlayerDistAll = 0x528 # CEntityOutputTemplate<float>
    m_OnMinCount_1 = 0x550 # CEntityIOOutput
    m_OnMaxCount_1 = 0x578 # CEntityIOOutput
    m_OnFactor_1 = 0x5A0 # CEntityOutputTemplate<float>
    m_OnMinPlayerDist_1 = 0x5C8 # CEntityOutputTemplate<float>
    m_OnMinCount_2 = 0x5F0 # CEntityIOOutput
    m_OnMaxCount_2 = 0x618 # CEntityIOOutput
    m_OnFactor_2 = 0x640 # CEntityOutputTemplate<float>
    m_OnMinPlayerDist_2 = 0x668 # CEntityOutputTemplate<float>
    m_OnMinCount_3 = 0x690 # CEntityIOOutput
    m_OnMaxCount_3 = 0x6B8 # CEntityIOOutput
    m_OnFactor_3 = 0x6E0 # CEntityOutputTemplate<float>
    m_OnMinPlayerDist_3 = 0x708 # CEntityOutputTemplate<float>
    m_hSource = 0x730 # CEntityHandle
    m_iszSourceEntityName = 0x738 # CUtlSymbolLarge
    m_flDistanceMax = 0x740 # float
    m_bDisabled = 0x744 # bool
    m_nMinCountAll = 0x748 # int32_t
    m_nMaxCountAll = 0x74C # int32_t
    m_nMinFactorAll = 0x750 # int32_t
    m_nMaxFactorAll = 0x754 # int32_t
    m_iszNPCClassname_1 = 0x760 # CUtlSymbolLarge
    m_nNPCState_1 = 0x768 # int32_t
    m_bInvertState_1 = 0x76C # bool
    m_nMinCount_1 = 0x770 # int32_t
    m_nMaxCount_1 = 0x774 # int32_t
    m_nMinFactor_1 = 0x778 # int32_t
    m_nMaxFactor_1 = 0x77C # int32_t
    m_flDefaultDist_1 = 0x784 # float
    m_iszNPCClassname_2 = 0x788 # CUtlSymbolLarge
    m_nNPCState_2 = 0x790 # int32_t
    m_bInvertState_2 = 0x794 # bool
    m_nMinCount_2 = 0x798 # int32_t
    m_nMaxCount_2 = 0x79C # int32_t
    m_nMinFactor_2 = 0x7A0 # int32_t
    m_nMaxFactor_2 = 0x7A4 # int32_t
    m_flDefaultDist_2 = 0x7AC # float
    m_iszNPCClassname_3 = 0x7B0 # CUtlSymbolLarge
    m_nNPCState_3 = 0x7B8 # int32_t
    m_bInvertState_3 = 0x7BC # bool
    m_nMinCount_3 = 0x7C0 # int32_t
    m_nMaxCount_3 = 0x7C4 # int32_t
    m_nMinFactor_3 = 0x7C8 # int32_t
    m_nMaxFactor_3 = 0x7CC # int32_t
    m_flDefaultDist_3 = 0x7D4 # float

class CLogicNPCCounterAABB: # CLogicNPCCounter
    m_vDistanceOuterMins = 0x7F0 # Vector
    m_vDistanceOuterMaxs = 0x7FC # Vector
    m_vOuterMins = 0x808 # Vector
    m_vOuterMaxs = 0x814 # Vector

class CLogicNPCCounterOBB: # CLogicNPCCounterAABB

class CLogicNavigation: # CLogicalEntity
    m_isOn = 0x4B8 # bool
    m_navProperty = 0x4BC # navproperties_t

class CLogicPlayerProxy: # CLogicalEntity
    m_hPlayer = 0x4B0 # CHandle<CBaseEntity>
    m_PlayerHasAmmo = 0x4B8 # CEntityIOOutput
    m_PlayerHasNoAmmo = 0x4E0 # CEntityIOOutput
    m_PlayerDied = 0x508 # CEntityIOOutput
    m_RequestedPlayerHealth = 0x530 # CEntityOutputTemplate<int32_t>

class CLogicProximity: # CPointEntity

class CLogicRelay: # CLogicalEntity
    m_OnTrigger = 0x4B0 # CEntityIOOutput
    m_OnSpawn = 0x4D8 # CEntityIOOutput
    m_bDisabled = 0x500 # bool
    m_bWaitForRefire = 0x501 # bool
    m_bTriggerOnce = 0x502 # bool
    m_bFastRetrigger = 0x503 # bool
    m_bPassthoughCaller = 0x504 # bool

class CLogicScript: # CPointEntity

class CLogicalEntity: # CServerOnlyEntity

class CMapInfo: # CPointEntity
    m_iBuyingStatus = 0x4B0 # int32_t
    m_flBombRadius = 0x4B4 # float
    m_iPetPopulation = 0x4B8 # int32_t
    m_bUseNormalSpawnsForDM = 0x4BC # bool
    m_bDisableAutoGeneratedDMSpawns = 0x4BD # bool
    m_flBotMaxVisionDistance = 0x4C0 # float
    m_iHostageCount = 0x4C4 # int32_t
    m_bFadePlayerVisibilityFarZ = 0x4C8 # bool

class CMapVetoPickController: # CBaseEntity
    m_bPlayedIntroVcd = 0x4B0 # bool
    m_bNeedToPlayFiveSecondsRemaining = 0x4B1 # bool
    m_dblPreMatchDraftSequenceTime = 0x4D0 # double
    m_bPreMatchDraftStateChanged = 0x4D8 # bool
    m_nDraftType = 0x4DC # int32_t
    m_nTeamWinningCoinToss = 0x4E0 # int32_t
    m_nTeamWithFirstChoice = 0x4E4 # int32_t[64]
    m_nVoteMapIdsList = 0x5E4 # int32_t[7]
    m_nAccountIDs = 0x600 # int32_t[64]
    m_nMapId0 = 0x700 # int32_t[64]
    m_nMapId1 = 0x800 # int32_t[64]
    m_nMapId2 = 0x900 # int32_t[64]
    m_nMapId3 = 0xA00 # int32_t[64]
    m_nMapId4 = 0xB00 # int32_t[64]
    m_nMapId5 = 0xC00 # int32_t[64]
    m_nStartingSide0 = 0xD00 # int32_t[64]
    m_nCurrentPhase = 0xE00 # int32_t
    m_nPhaseStartTick = 0xE04 # int32_t
    m_nPhaseDurationTicks = 0xE08 # int32_t
    m_OnMapVetoed = 0xE10 # CEntityOutputTemplate<CUtlSymbolLarge>
    m_OnMapPicked = 0xE38 # CEntityOutputTemplate<CUtlSymbolLarge>
    m_OnSidesPicked = 0xE60 # CEntityOutputTemplate<int32_t>
    m_OnNewPhaseStarted = 0xE88 # CEntityOutputTemplate<int32_t>
    m_OnLevelTransition = 0xEB0 # CEntityOutputTemplate<int32_t>

class CMarkupVolume: # CBaseModelEntity
    m_bEnabled = 0x700 # bool

class CMarkupVolumeTagged: # CMarkupVolume
    m_bIsGroup = 0x738 # bool
    m_bGroupByPrefab = 0x739 # bool
    m_bGroupByVolume = 0x73A # bool
    m_bGroupOtherGroups = 0x73B # bool
    m_bIsInGroup = 0x73C # bool

class CMarkupVolumeTagged_Nav: # CMarkupVolumeTagged

class CMarkupVolumeTagged_NavGame: # CMarkupVolumeWithRef
    m_bFloodFillAttribute = 0x758 # bool

class CMarkupVolumeWithRef: # CMarkupVolumeTagged
    m_bUseRef = 0x740 # bool
    m_vRefPos = 0x744 # Vector
    m_flRefDot = 0x750 # float

class CMathColorBlend: # CLogicalEntity
    m_flInMin = 0x4B0 # float
    m_flInMax = 0x4B4 # float
    m_OutColor1 = 0x4B8 # Color
    m_OutColor2 = 0x4BC # Color
    m_OutValue = 0x4C0 # CEntityOutputTemplate<Color>

class CMathCounter: # CLogicalEntity
    m_flMin = 0x4B0 # float
    m_flMax = 0x4B4 # float
    m_bHitMin = 0x4B8 # bool
    m_bHitMax = 0x4B9 # bool
    m_bDisabled = 0x4BA # bool
    m_OutValue = 0x4C0 # CEntityOutputTemplate<float>
    m_OnGetValue = 0x4E8 # CEntityOutputTemplate<float>
    m_OnHitMin = 0x510 # CEntityIOOutput
    m_OnHitMax = 0x538 # CEntityIOOutput
    m_OnChangedFromMin = 0x560 # CEntityIOOutput
    m_OnChangedFromMax = 0x588 # CEntityIOOutput

class CMathRemap: # CLogicalEntity
    m_flInMin = 0x4B0 # float
    m_flInMax = 0x4B4 # float
    m_flOut1 = 0x4B8 # float
    m_flOut2 = 0x4BC # float
    m_flOldInValue = 0x4C0 # float
    m_bEnabled = 0x4C4 # bool
    m_OutValue = 0x4C8 # CEntityOutputTemplate<float>
    m_OnRoseAboveMin = 0x4F0 # CEntityIOOutput
    m_OnRoseAboveMax = 0x518 # CEntityIOOutput
    m_OnFellBelowMin = 0x540 # CEntityIOOutput
    m_OnFellBelowMax = 0x568 # CEntityIOOutput

class CMelee: # CCSWeaponBase

class CMessage: # CPointEntity
    m_iszMessage = 0x4B0 # CUtlSymbolLarge
    m_MessageVolume = 0x4B8 # float
    m_MessageAttenuation = 0x4BC # int32_t
    m_Radius = 0x4C0 # float
    m_sNoise = 0x4C8 # CUtlSymbolLarge
    m_OnShowMessage = 0x4D0 # CEntityIOOutput

class CMessageEntity: # CPointEntity
    m_radius = 0x4B0 # int32_t
    m_messageText = 0x4B8 # CUtlSymbolLarge
    m_drawText = 0x4C0 # bool
    m_bDeveloperOnly = 0x4C1 # bool
    m_bEnabled = 0x4C2 # bool

class CModelPointEntity: # CBaseModelEntity

class CModelState:
    m_hModel = 0xA0 # CStrongHandle<InfoForResourceTypeCModel>
    m_ModelName = 0xA8 # CUtlSymbolLarge
    m_bClientClothCreationSuppressed = 0xE8 # bool
    m_MeshGroupMask = 0x180 # uint64_t
    m_nIdealMotionType = 0x222 # int8_t
    m_nForceLOD = 0x223 # int8_t
    m_nClothUpdateFlags = 0x224 # int8_t

class CMolotovGrenade: # CBaseCSGrenade

class CMolotovProjectile: # CBaseCSGrenadeProjectile
    m_bIsIncGrenade = 0xA40 # bool
    m_bDetonated = 0xA4C # bool
    m_stillTimer = 0xA50 # IntervalTimer
    m_bHasBouncedOffPlayer = 0xB30 # bool

class CMomentaryRotButton: # CRotButton
    m_Position = 0x8C8 # CEntityOutputTemplate<float>
    m_OnUnpressed = 0x8F0 # CEntityIOOutput
    m_OnFullyOpen = 0x918 # CEntityIOOutput
    m_OnFullyClosed = 0x940 # CEntityIOOutput
    m_OnReachedPosition = 0x968 # CEntityIOOutput
    m_lastUsed = 0x990 # int32_t
    m_start = 0x994 # QAngle
    m_end = 0x9A0 # QAngle
    m_IdealYaw = 0x9AC # float
    m_sNoise = 0x9B0 # CUtlSymbolLarge
    m_bUpdateTarget = 0x9B8 # bool
    m_direction = 0x9BC # int32_t
    m_returnSpeed = 0x9C0 # float
    m_flStartPosition = 0x9C4 # float

class CMotorController:
    m_speed = 0x8 # float
    m_maxTorque = 0xC # float
    m_axis = 0x10 # Vector
    m_inertiaFactor = 0x1C # float

class CMultiLightProxy: # CLogicalEntity
    m_iszLightNameFilter = 0x4B0 # CUtlSymbolLarge
    m_iszLightClassFilter = 0x4B8 # CUtlSymbolLarge
    m_flLightRadiusFilter = 0x4C0 # float
    m_flBrightnessDelta = 0x4C4 # float
    m_bPerformScreenFade = 0x4C8 # bool
    m_flTargetBrightnessMultiplier = 0x4CC # float
    m_flCurrentBrightnessMultiplier = 0x4D0 # float
    m_vecLights = 0x4D8 # CUtlVector<CHandle<CLightEntity>>

class CMultiSource: # CLogicalEntity
    m_rgEntities = 0x4B0 # CHandle<CBaseEntity>[32]
    m_rgTriggered = 0x530 # int32_t[32]
    m_OnTrigger = 0x5B0 # CEntityIOOutput
    m_iTotal = 0x5D8 # int32_t
    m_globalstate = 0x5E0 # CUtlSymbolLarge

class CMultiplayRules: # CGameRules

class CMultiplayer_Expresser: # CAI_ExpresserWithFollowup
    m_bAllowMultipleScenes = 0x70 # bool

class CNavHullPresetVData:
    m_vecNavHulls = 0x0 # CUtlVector<CUtlString>

class CNavHullVData:
    m_bAgentEnabled = 0x0 # bool
    m_agentRadius = 0x4 # float
    m_agentHeight = 0x8 # float
    m_agentShortHeightEnabled = 0xC # bool
    m_agentShortHeight = 0x10 # float
    m_agentMaxClimb = 0x14 # float
    m_agentMaxSlope = 0x18 # int32_t
    m_agentMaxJumpDownDist = 0x1C # float
    m_agentMaxJumpHorizDistBase = 0x20 # float
    m_agentMaxJumpUpDist = 0x24 # float
    m_agentBorderErosion = 0x28 # int32_t

class CNavLinkAnimgraphVar:
    m_strAnimgraphVar = 0x0 # CUtlString
    m_unAlignmentDegrees = 0x8 # uint32_t

class CNavLinkAreaEntity: # CPointEntity
    m_flWidth = 0x4B0 # float
    m_vLocatorOffset = 0x4B4 # Vector
    m_qLocatorAnglesOffset = 0x4C0 # QAngle
    m_strMovementForward = 0x4D0 # CUtlSymbolLarge
    m_strMovementReverse = 0x4D8 # CUtlSymbolLarge
    m_nNavLinkIdForward = 0x4E0 # int32_t
    m_nNavLinkIdReverse = 0x4E4 # int32_t
    m_bEnabled = 0x4E8 # bool
    m_strFilterName = 0x4F0 # CUtlSymbolLarge
    m_hFilter = 0x4F8 # CHandle<CBaseFilter>
    m_OnNavLinkStart = 0x500 # CEntityIOOutput
    m_OnNavLinkFinish = 0x528 # CEntityIOOutput
    m_bIsTerminus = 0x550 # bool

class CNavLinkMovementVData:
    m_bIsInterpolated = 0x0 # bool
    m_unRecommendedDistance = 0x4 # uint32_t
    m_vecAnimgraphVars = 0x8 # CUtlVector<CNavLinkAnimgraphVar>

class CNavSpaceInfo: # CPointEntity
    m_bCreateFlightSpace = 0x4B0 # bool

class CNavVolume:

class CNavVolumeAll: # CNavVolumeVector

class CNavVolumeBreadthFirstSearch: # CNavVolumeCalculatedVector
    m_vStartPos = 0xA0 # Vector
    m_flSearchDist = 0xAC # float

class CNavVolumeCalculatedVector: # CNavVolume

class CNavVolumeMarkupVolume: # CNavVolume

class CNavVolumeSphere: # CNavVolume
    m_vCenter = 0x70 # Vector
    m_flRadius = 0x7C # float

class CNavVolumeSphericalShell: # CNavVolumeSphere
    m_flRadiusInner = 0x80 # float

class CNavVolumeVector: # CNavVolume
    m_bHasBeenPreFiltered = 0x78 # bool

class CNavWalkable: # CPointEntity

class CNetworkOriginCellCoordQuantizedVector:
    m_cellX = 0x10 # uint16_t
    m_cellY = 0x12 # uint16_t
    m_cellZ = 0x14 # uint16_t
    m_nOutsideWorld = 0x16 # uint16_t
    m_vecX = 0x18 # CNetworkedQuantizedFloat
    m_vecY = 0x20 # CNetworkedQuantizedFloat
    m_vecZ = 0x28 # CNetworkedQuantizedFloat

class CNetworkOriginQuantizedVector:
    m_vecX = 0x10 # CNetworkedQuantizedFloat
    m_vecY = 0x18 # CNetworkedQuantizedFloat
    m_vecZ = 0x20 # CNetworkedQuantizedFloat

class CNetworkTransmitComponent:
    m_nTransmitStateOwnedCounter = 0x16C # uint8_t

class CNetworkVelocityVector:
    m_vecX = 0x10 # CNetworkedQuantizedFloat
    m_vecY = 0x18 # CNetworkedQuantizedFloat
    m_vecZ = 0x20 # CNetworkedQuantizedFloat

class CNetworkViewOffsetVector:
    m_vecX = 0x10 # CNetworkedQuantizedFloat
    m_vecY = 0x18 # CNetworkedQuantizedFloat
    m_vecZ = 0x20 # CNetworkedQuantizedFloat

class CNetworkedSequenceOperation:
    m_hSequence = 0x8 # HSequence
    m_flPrevCycle = 0xC # float
    m_flCycle = 0x10 # float
    m_flWeight = 0x14 # CNetworkedQuantizedFloat
    m_bSequenceChangeNetworked = 0x1C # bool
    m_bDiscontinuity = 0x1D # bool
    m_flPrevCycleFromDiscontinuity = 0x20 # float
    m_flPrevCycleForAnimEventDetection = 0x24 # float

class CNullEntity: # CBaseEntity

class COmniLight: # CBarnLight
    m_flInnerAngle = 0x928 # float
    m_flOuterAngle = 0x92C # float
    m_bShowLight = 0x930 # bool

class COrnamentProp: # CDynamicProp
    m_initialOwner = 0xB08 # CUtlSymbolLarge

class CParticleSystem: # CBaseModelEntity
    m_szSnapshotFileName = 0x700 # char[512]
    m_bActive = 0x900 # bool
    m_bFrozen = 0x901 # bool
    m_flFreezeTransitionDuration = 0x904 # float
    m_nStopType = 0x908 # int32_t
    m_bAnimateDuringGameplayPause = 0x90C # bool
    m_iEffectIndex = 0x910 # CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_flStartTime = 0x918 # GameTime_t
    m_flPreSimTime = 0x91C # float
    m_vServerControlPoints = 0x920 # Vector[4]
    m_iServerControlPointAssignments = 0x950 # uint8_t[4]
    m_hControlPointEnts = 0x954 # CHandle<CBaseEntity>[64]
    m_bNoSave = 0xA54 # bool
    m_bNoFreeze = 0xA55 # bool
    m_bNoRamp = 0xA56 # bool
    m_bStartActive = 0xA57 # bool
    m_iszEffectName = 0xA58 # CUtlSymbolLarge
    m_iszControlPointNames = 0xA60 # CUtlSymbolLarge[64]
    m_nDataCP = 0xC60 # int32_t
    m_vecDataCPValue = 0xC64 # Vector
    m_nTintCP = 0xC70 # int32_t
    m_clrTint = 0xC74 # Color

class CPathCorner: # CPointEntity
    m_flWait = 0x4B0 # float
    m_flRadius = 0x4B4 # float
    m_OnPass = 0x4B8 # CEntityIOOutput

class CPathCornerCrash: # CPathCorner

class CPathKeyFrame: # CLogicalEntity
    m_Origin = 0x4B0 # Vector
    m_Angles = 0x4BC # QAngle
    m_qAngle = 0x4D0 # Quaternion
    m_iNextKey = 0x4E0 # CUtlSymbolLarge
    m_flNextTime = 0x4E8 # float
    m_pNextKey = 0x4F0 # CPathKeyFrame*
    m_pPrevKey = 0x4F8 # CPathKeyFrame*
    m_flSpeed = 0x500 # float

class CPathParticleRope: # CBaseEntity
    m_bStartActive = 0x4B0 # bool
    m_flMaxSimulationTime = 0x4B4 # float
    m_iszEffectName = 0x4B8 # CUtlSymbolLarge
    m_PathNodes_Name = 0x4C0 # CUtlVector<CUtlSymbolLarge>
    m_flParticleSpacing = 0x4D8 # float
    m_flSlack = 0x4DC # float
    m_flRadius = 0x4E0 # float
    m_ColorTint = 0x4E4 # Color
    m_nEffectState = 0x4E8 # int32_t
    m_iEffectIndex = 0x4F0 # CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_PathNodes_Position = 0x4F8 # CNetworkUtlVectorBase<Vector>
    m_PathNodes_TangentIn = 0x510 # CNetworkUtlVectorBase<Vector>
    m_PathNodes_TangentOut = 0x528 # CNetworkUtlVectorBase<Vector>
    m_PathNodes_Color = 0x540 # CNetworkUtlVectorBase<Vector>
    m_PathNodes_PinEnabled = 0x558 # CNetworkUtlVectorBase<bool>
    m_PathNodes_RadiusScale = 0x570 # CNetworkUtlVectorBase<float>

class CPathParticleRopeAlias_path_particle_rope_clientside: # CPathParticleRope

class CPathTrack: # CPointEntity
    m_pnext = 0x4B0 # CPathTrack*
    m_pprevious = 0x4B8 # CPathTrack*
    m_paltpath = 0x4C0 # CPathTrack*
    m_flRadius = 0x4C8 # float
    m_length = 0x4CC # float
    m_altName = 0x4D0 # CUtlSymbolLarge
    m_nIterVal = 0x4D8 # int32_t
    m_eOrientationType = 0x4DC # TrackOrientationType_t
    m_OnPass = 0x4E0 # CEntityIOOutput

class CPhysBallSocket: # CPhysConstraint
    m_flFriction = 0x508 # float
    m_bEnableSwingLimit = 0x50C # bool
    m_flSwingLimit = 0x510 # float
    m_bEnableTwistLimit = 0x514 # bool
    m_flMinTwistAngle = 0x518 # float
    m_flMaxTwistAngle = 0x51C # float

class CPhysBox: # CBreakable
    m_damageType = 0x7C0 # int32_t
    m_massScale = 0x7C4 # float
    m_damageToEnableMotion = 0x7C8 # int32_t
    m_flForceToEnableMotion = 0x7CC # float
    m_angPreferredCarryAngles = 0x7D0 # QAngle
    m_bNotSolidToWorld = 0x7DC # bool
    m_bEnableUseOutput = 0x7DD # bool
    m_iExploitableByPlayer = 0x7E0 # int32_t
    m_flTouchOutputPerEntityDelay = 0x7E4 # float
    m_OnDamaged = 0x7E8 # CEntityIOOutput
    m_OnAwakened = 0x810 # CEntityIOOutput
    m_OnMotionEnabled = 0x838 # CEntityIOOutput
    m_OnPlayerUse = 0x860 # CEntityIOOutput
    m_OnStartTouch = 0x888 # CEntityIOOutput
    m_hCarryingPlayer = 0x8B0 # CHandle<CBasePlayerPawn>

class CPhysConstraint: # CLogicalEntity
    m_nameAttach1 = 0x4B8 # CUtlSymbolLarge
    m_nameAttach2 = 0x4C0 # CUtlSymbolLarge
    m_breakSound = 0x4C8 # CUtlSymbolLarge
    m_forceLimit = 0x4D0 # float
    m_torqueLimit = 0x4D4 # float
    m_teleportTick = 0x4D8 # uint32_t
    m_minTeleportDistance = 0x4DC # float
    m_OnBreak = 0x4E0 # CEntityIOOutput

class CPhysExplosion: # CPointEntity
    m_bExplodeOnSpawn = 0x4B0 # bool
    m_flMagnitude = 0x4B4 # float
    m_flDamage = 0x4B8 # float
    m_radius = 0x4BC # float
    m_targetEntityName = 0x4C0 # CUtlSymbolLarge
    m_flInnerRadius = 0x4C8 # float
    m_flPushScale = 0x4CC # float
    m_bConvertToDebrisWhenPossible = 0x4D0 # bool
    m_OnPushedPlayer = 0x4D8 # CEntityIOOutput

class CPhysFixed: # CPhysConstraint
    m_flLinearFrequency = 0x508 # float
    m_flLinearDampingRatio = 0x50C # float
    m_flAngularFrequency = 0x510 # float
    m_flAngularDampingRatio = 0x514 # float
    m_bEnableLinearConstraint = 0x518 # bool
    m_bEnableAngularConstraint = 0x519 # bool

class CPhysForce: # CPointEntity
    m_nameAttach = 0x4B8 # CUtlSymbolLarge
    m_force = 0x4C0 # float
    m_forceTime = 0x4C4 # float
    m_attachedObject = 0x4C8 # CHandle<CBaseEntity>
    m_wasRestored = 0x4CC # bool
    m_integrator = 0x4D0 # CConstantForceController

class CPhysHinge: # CPhysConstraint
    m_soundInfo = 0x510 # ConstraintSoundInfo
    m_NotifyMinLimitReached = 0x598 # CEntityIOOutput
    m_NotifyMaxLimitReached = 0x5C0 # CEntityIOOutput
    m_bAtMinLimit = 0x5E8 # bool
    m_bAtMaxLimit = 0x5E9 # bool
    m_hinge = 0x5EC # constraint_hingeparams_t
    m_hingeFriction = 0x62C # float
    m_systemLoadScale = 0x630 # float
    m_bIsAxisLocal = 0x634 # bool
    m_flMinRotation = 0x638 # float
    m_flMaxRotation = 0x63C # float
    m_flInitialRotation = 0x640 # float
    m_flMotorFrequency = 0x644 # float
    m_flMotorDampingRatio = 0x648 # float
    m_flAngleSpeed = 0x64C # float
    m_flAngleSpeedThreshold = 0x650 # float
    m_OnStartMoving = 0x658 # CEntityIOOutput
    m_OnStopMoving = 0x680 # CEntityIOOutput

class CPhysHingeAlias_phys_hinge_local: # CPhysHinge

class CPhysImpact: # CPointEntity
    m_damage = 0x4B0 # float
    m_distance = 0x4B4 # float
    m_directionEntityName = 0x4B8 # CUtlSymbolLarge

class CPhysLength: # CPhysConstraint
    m_offset = 0x508 # Vector[2]
    m_vecAttach = 0x520 # Vector
    m_addLength = 0x52C # float
    m_minLength = 0x530 # float
    m_totalLength = 0x534 # float
    m_bEnableCollision = 0x538 # bool

class CPhysMagnet: # CBaseAnimGraph
    m_OnMagnetAttach = 0x890 # CEntityIOOutput
    m_OnMagnetDetach = 0x8B8 # CEntityIOOutput
    m_massScale = 0x8E0 # float
    m_forceLimit = 0x8E4 # float
    m_torqueLimit = 0x8E8 # float
    m_MagnettedEntities = 0x8F0 # CUtlVector<magnetted_objects_t>
    m_bActive = 0x908 # bool
    m_bHasHitSomething = 0x909 # bool
    m_flTotalMass = 0x90C # float
    m_flRadius = 0x910 # float
    m_flNextSuckTime = 0x914 # GameTime_t
    m_iMaxObjectsAttached = 0x918 # int32_t

class CPhysMotor: # CLogicalEntity
    m_nameAttach = 0x4B0 # CUtlSymbolLarge
    m_hAttachedObject = 0x4B8 # CHandle<CBaseEntity>
    m_spinUp = 0x4BC # float
    m_additionalAcceleration = 0x4C0 # float
    m_angularAcceleration = 0x4C4 # float
    m_lastTime = 0x4C8 # GameTime_t
    m_motor = 0x4E0 # CMotorController

class CPhysPulley: # CPhysConstraint
    m_position2 = 0x508 # Vector
    m_offset = 0x514 # Vector[2]
    m_addLength = 0x52C # float
    m_gearRatio = 0x530 # float

class CPhysSlideConstraint: # CPhysConstraint
    m_axisEnd = 0x510 # Vector
    m_slideFriction = 0x51C # float
    m_systemLoadScale = 0x520 # float
    m_initialOffset = 0x524 # float
    m_bEnableLinearConstraint = 0x528 # bool
    m_bEnableAngularConstraint = 0x529 # bool
    m_flMotorFrequency = 0x52C # float
    m_flMotorDampingRatio = 0x530 # float
    m_bUseEntityPivot = 0x534 # bool
    m_soundInfo = 0x538 # ConstraintSoundInfo

class CPhysThruster: # CPhysForce
    m_localOrigin = 0x510 # Vector

class CPhysTorque: # CPhysForce
    m_axis = 0x510 # Vector

class CPhysWheelConstraint: # CPhysConstraint
    m_flSuspensionFrequency = 0x508 # float
    m_flSuspensionDampingRatio = 0x50C # float
    m_flSuspensionHeightOffset = 0x510 # float
    m_bEnableSuspensionLimit = 0x514 # bool
    m_flMinSuspensionOffset = 0x518 # float
    m_flMaxSuspensionOffset = 0x51C # float
    m_bEnableSteeringLimit = 0x520 # bool
    m_flMinSteeringAngle = 0x524 # float
    m_flMaxSteeringAngle = 0x528 # float
    m_flSteeringAxisFriction = 0x52C # float
    m_flSpinAxisFriction = 0x530 # float

class CPhysicalButton: # CBaseButton

class CPhysicsEntitySolver: # CLogicalEntity
    m_hMovingEntity = 0x4B8 # CHandle<CBaseEntity>
    m_hPhysicsBlocker = 0x4BC # CHandle<CBaseEntity>
    m_separationDuration = 0x4C0 # float
    m_cancelTime = 0x4C4 # GameTime_t

class CPhysicsProp: # CBreakableProp
    m_MotionEnabled = 0xA10 # CEntityIOOutput
    m_OnAwakened = 0xA38 # CEntityIOOutput
    m_OnAwake = 0xA60 # CEntityIOOutput
    m_OnAsleep = 0xA88 # CEntityIOOutput
    m_OnPlayerUse = 0xAB0 # CEntityIOOutput
    m_OnPlayerPickup = 0xAD8 # CEntityIOOutput
    m_OnOutOfWorld = 0xB00 # CEntityIOOutput
    m_massScale = 0xB28 # float
    m_inertiaScale = 0xB2C # float
    m_buoyancyScale = 0xB30 # float
    m_damageType = 0xB34 # int32_t
    m_damageToEnableMotion = 0xB38 # int32_t
    m_flForceToEnableMotion = 0xB3C # float
    m_bThrownByPlayer = 0xB40 # bool
    m_bDroppedByPlayer = 0xB41 # bool
    m_bTouchedByPlayer = 0xB42 # bool
    m_bFirstCollisionAfterLaunch = 0xB43 # bool
    m_iExploitableByPlayer = 0xB44 # int32_t
    m_bHasBeenAwakened = 0xB48 # bool
    m_bIsOverrideProp = 0xB49 # bool
    m_fNextCheckDisableMotionContactsTime = 0xB4C # GameTime_t
    m_iInitialGlowState = 0xB50 # int32_t
    m_nGlowRange = 0xB54 # int32_t
    m_nGlowRangeMin = 0xB58 # int32_t
    m_glowColor = 0xB5C # Color
    m_bForceNavIgnore = 0xB60 # bool
    m_bNoNavmeshBlocker = 0xB61 # bool
    m_bForceNpcExclude = 0xB62 # bool
    m_bShouldAutoConvertBackFromDebris = 0xB63 # bool
    m_bMuteImpactEffects = 0xB64 # bool
    m_bAcceptDamageFromHeldObjects = 0xB6C # bool
    m_bEnableUseOutput = 0xB6D # bool
    m_bAwake = 0xB6E # bool
    m_nCollisionGroupOverride = 0xB70 # int32_t

class CPhysicsPropMultiplayer: # CPhysicsProp

class CPhysicsPropOverride: # CPhysicsProp

class CPhysicsPropRespawnable: # CPhysicsProp
    m_vOriginalSpawnOrigin = 0xB78 # Vector
    m_vOriginalSpawnAngles = 0xB84 # QAngle
    m_vOriginalMins = 0xB90 # Vector
    m_vOriginalMaxs = 0xB9C # Vector
    m_flRespawnDuration = 0xBA8 # float

class CPhysicsShake:
    m_force = 0x8 # Vector

class CPhysicsSpring: # CBaseEntity
    m_flFrequency = 0x4B8 # float
    m_flDampingRatio = 0x4BC # float
    m_flRestLength = 0x4C0 # float
    m_nameAttachStart = 0x4C8 # CUtlSymbolLarge
    m_nameAttachEnd = 0x4D0 # CUtlSymbolLarge
    m_start = 0x4D8 # Vector
    m_end = 0x4E4 # Vector
    m_teleportTick = 0x4F0 # uint32_t

class CPhysicsWire: # CBaseEntity
    m_nDensity = 0x4B0 # int32_t

class CPlantedC4: # CBaseAnimGraph
    m_bBombTicking = 0x890 # bool
    m_flC4Blow = 0x894 # GameTime_t
    m_nBombSite = 0x898 # int32_t
    m_nSourceSoundscapeHash = 0x89C # int32_t
    m_OnBombDefused = 0x8A0 # CEntityIOOutput
    m_OnBombBeginDefuse = 0x8C8 # CEntityIOOutput
    m_OnBombDefuseAborted = 0x8F0 # CEntityIOOutput
    m_bCannotBeDefused = 0x918 # bool
    m_entitySpottedState = 0x920 # EntitySpottedState_t
    m_nSpotRules = 0x938 # int32_t
    m_bTrainingPlacedByPlayer = 0x93C # bool
    m_bHasExploded = 0x93D # bool
    m_flTimerLength = 0x940 # float
    m_bBeingDefused = 0x944 # bool
    m_fLastDefuseTime = 0x94C # GameTime_t
    m_flDefuseLength = 0x954 # float
    m_flDefuseCountDown = 0x958 # GameTime_t
    m_bBombDefused = 0x95C # bool
    m_hBombDefuser = 0x960 # CHandle<CCSPlayerPawn>
    m_hControlPanel = 0x964 # CHandle<CBaseEntity>
    m_iProgressBarTime = 0x968 # int32_t
    m_bVoiceAlertFired = 0x96C # bool
    m_bVoiceAlertPlayed = 0x96D # bool[4]
    m_flNextBotBeepTime = 0x974 # GameTime_t
    m_bPlantedAfterPickup = 0x97C # bool
    m_angCatchUpToPlayerEye = 0x980 # QAngle
    m_flLastSpinDetectionTime = 0x98C # GameTime_t

class CPlatTrigger: # CBaseModelEntity
    m_pPlatform = 0x700 # CHandle<CFuncPlat>

class CPlayerControllerComponent:
    __m_pChainEntity = 0x8 # CNetworkVarChainer

class CPlayerPawnComponent:
    __m_pChainEntity = 0x8 # CNetworkVarChainer

class CPlayerPing: # CBaseEntity
    m_hPlayer = 0x4B8 # CHandle<CCSPlayerPawn>
    m_hPingedEntity = 0x4BC # CHandle<CBaseEntity>
    m_iType = 0x4C0 # int32_t
    m_bUrgent = 0x4C4 # bool
    m_szPlaceName = 0x4C5 # char[18]

class CPlayerSprayDecal: # CModelPointEntity
    m_nUniqueID = 0x700 # int32_t
    m_unAccountID = 0x704 # uint32_t
    m_unTraceID = 0x708 # uint32_t
    m_rtGcTime = 0x70C # uint32_t
    m_vecEndPos = 0x710 # Vector
    m_vecStart = 0x71C # Vector
    m_vecLeft = 0x728 # Vector
    m_vecNormal = 0x734 # Vector
    m_nPlayer = 0x740 # int32_t
    m_nEntity = 0x744 # int32_t
    m_nHitbox = 0x748 # int32_t
    m_flCreationTime = 0x74C # float
    m_nTintID = 0x750 # int32_t
    m_nVersion = 0x754 # uint8_t
    m_ubSignature = 0x755 # uint8_t[128]

class CPlayerVisibility: # CBaseEntity
    m_flVisibilityStrength = 0x4B0 # float
    m_flFogDistanceMultiplier = 0x4B4 # float
    m_flFogMaxDensityMultiplier = 0x4B8 # float
    m_flFadeTime = 0x4BC # float
    m_bStartDisabled = 0x4C0 # bool
    m_bIsEnabled = 0x4C1 # bool

class CPlayer_AutoaimServices: # CPlayerPawnComponent

class CPlayer_CameraServices: # CPlayerPawnComponent
    m_vecCsViewPunchAngle = 0x40 # QAngle
    m_nCsViewPunchAngleTick = 0x4C # GameTick_t
    m_flCsViewPunchAngleTickRatio = 0x50 # float
    m_PlayerFog = 0x58 # fogplayerparams_t
    m_hColorCorrectionCtrl = 0x98 # CHandle<CColorCorrection>
    m_hViewEntity = 0x9C # CHandle<CBaseEntity>
    m_hTonemapController = 0xA0 # CHandle<CTonemapController2>
    m_audio = 0xA8 # audioparams_t
    m_PostProcessingVolumes = 0x120 # CNetworkUtlVectorBase<CHandle<CPostProcessingVolume>>
    m_flOldPlayerZ = 0x138 # float
    m_flOldPlayerViewOffsetZ = 0x13C # float
    m_hTriggerSoundscapeList = 0x158 # CUtlVector<CHandle<CEnvSoundscapeTriggerable>>

class CPlayer_FlashlightServices: # CPlayerPawnComponent

class CPlayer_ItemServices: # CPlayerPawnComponent

class CPlayer_MovementServices: # CPlayerPawnComponent
    m_nImpulse = 0x40 # int32_t
    m_nButtons = 0x48 # CInButtonState
    m_nQueuedButtonDownMask = 0x68 # uint64_t
    m_nQueuedButtonChangeMask = 0x70 # uint64_t
    m_nButtonDoublePressed = 0x78 # uint64_t
    m_pButtonPressedCmdNumber = 0x80 # uint32_t[64]
    m_nLastCommandNumberProcessed = 0x180 # uint32_t
    m_nToggleButtonDownMask = 0x188 # uint64_t
    m_flMaxspeed = 0x190 # float
    m_arrForceSubtickMoveWhen = 0x194 # float[4]
    m_flForwardMove = 0x1A4 # float
    m_flLeftMove = 0x1A8 # float
    m_flUpMove = 0x1AC # float
    m_vecLastMovementImpulses = 0x1B0 # Vector
    m_vecOldViewAngles = 0x1BC # QAngle

class CPlayer_MovementServices_Humanoid: # CPlayer_MovementServices
    m_flStepSoundTime = 0x1D0 # float
    m_flFallVelocity = 0x1D4 # float
    m_bInCrouch = 0x1D8 # bool
    m_nCrouchState = 0x1DC # uint32_t
    m_flCrouchTransitionStartTime = 0x1E0 # GameTime_t
    m_bDucked = 0x1E4 # bool
    m_bDucking = 0x1E5 # bool
    m_bInDuckJump = 0x1E6 # bool
    m_groundNormal = 0x1E8 # Vector
    m_flSurfaceFriction = 0x1F4 # float
    m_surfaceProps = 0x1F8 # CUtlStringToken
    m_nStepside = 0x208 # int32_t
    m_iTargetVolume = 0x20C # int32_t
    m_vecSmoothedVelocity = 0x210 # Vector

class CPlayer_ObserverServices: # CPlayerPawnComponent
    m_iObserverMode = 0x40 # uint8_t
    m_hObserverTarget = 0x44 # CHandle<CBaseEntity>
    m_iObserverLastMode = 0x48 # ObserverMode_t
    m_bForcedObserverMode = 0x4C # bool

class CPlayer_UseServices: # CPlayerPawnComponent

class CPlayer_ViewModelServices: # CPlayerPawnComponent

class CPlayer_WaterServices: # CPlayerPawnComponent

class CPlayer_WeaponServices: # CPlayerPawnComponent
    m_bAllowSwitchToNoWeapon = 0x40 # bool
    m_hMyWeapons = 0x48 # CNetworkUtlVectorBase<CHandle<CBasePlayerWeapon>>
    m_hActiveWeapon = 0x60 # CHandle<CBasePlayerWeapon>
    m_hLastWeapon = 0x64 # CHandle<CBasePlayerWeapon>
    m_iAmmo = 0x68 # uint16_t[32]
    m_bPreventWeaponPickup = 0xA8 # bool

class CPointAngleSensor: # CPointEntity
    m_bDisabled = 0x4B0 # bool
    m_nLookAtName = 0x4B8 # CUtlSymbolLarge
    m_hTargetEntity = 0x4C0 # CHandle<CBaseEntity>
    m_hLookAtEntity = 0x4C4 # CHandle<CBaseEntity>
    m_flDuration = 0x4C8 # float
    m_flDotTolerance = 0x4CC # float
    m_flFacingTime = 0x4D0 # GameTime_t
    m_bFired = 0x4D4 # bool
    m_OnFacingLookat = 0x4D8 # CEntityIOOutput
    m_OnNotFacingLookat = 0x500 # CEntityIOOutput
    m_TargetDir = 0x528 # CEntityOutputTemplate<Vector>
    m_FacingPercentage = 0x550 # CEntityOutputTemplate<float>

class CPointAngularVelocitySensor: # CPointEntity
    m_hTargetEntity = 0x4B0 # CHandle<CBaseEntity>
    m_flThreshold = 0x4B4 # float
    m_nLastCompareResult = 0x4B8 # int32_t
    m_nLastFireResult = 0x4BC # int32_t
    m_flFireTime = 0x4C0 # GameTime_t
    m_flFireInterval = 0x4C4 # float
    m_flLastAngVelocity = 0x4C8 # float
    m_lastOrientation = 0x4CC # QAngle
    m_vecAxis = 0x4D8 # Vector
    m_bUseHelper = 0x4E4 # bool
    m_AngularVelocity = 0x4E8 # CEntityOutputTemplate<float>
    m_OnLessThan = 0x510 # CEntityIOOutput
    m_OnLessThanOrEqualTo = 0x538 # CEntityIOOutput
    m_OnGreaterThan = 0x560 # CEntityIOOutput
    m_OnGreaterThanOrEqualTo = 0x588 # CEntityIOOutput
    m_OnEqualTo = 0x5B0 # CEntityIOOutput

class CPointBroadcastClientCommand: # CPointEntity

class CPointCamera: # CBaseEntity
    m_FOV = 0x4B0 # float
    m_Resolution = 0x4B4 # float
    m_bFogEnable = 0x4B8 # bool
    m_FogColor = 0x4B9 # Color
    m_flFogStart = 0x4C0 # float
    m_flFogEnd = 0x4C4 # float
    m_flFogMaxDensity = 0x4C8 # float
    m_bActive = 0x4CC # bool
    m_bUseScreenAspectRatio = 0x4CD # bool
    m_flAspectRatio = 0x4D0 # float
    m_bNoSky = 0x4D4 # bool
    m_fBrightness = 0x4D8 # float
    m_flZFar = 0x4DC # float
    m_flZNear = 0x4E0 # float
    m_bCanHLTVUse = 0x4E4 # bool
    m_bDofEnabled = 0x4E5 # bool
    m_flDofNearBlurry = 0x4E8 # float
    m_flDofNearCrisp = 0x4EC # float
    m_flDofFarCrisp = 0x4F0 # float
    m_flDofFarBlurry = 0x4F4 # float
    m_flDofTiltToGround = 0x4F8 # float
    m_TargetFOV = 0x4FC # float
    m_DegreesPerSecond = 0x500 # float
    m_bIsOn = 0x504 # bool
    m_pNext = 0x508 # CPointCamera*

class CPointCameraVFOV: # CPointCamera
    m_flVerticalFOV = 0x510 # float

class CPointClientCommand: # CPointEntity

class CPointClientUIDialog: # CBaseClientUIEntity
    m_hActivator = 0x8B0 # CHandle<CBaseEntity>
    m_bStartEnabled = 0x8B4 # bool

class CPointClientUIWorldPanel: # CBaseClientUIEntity
    m_bIgnoreInput = 0x8B0 # bool
    m_bLit = 0x8B1 # bool
    m_bFollowPlayerAcrossTeleport = 0x8B2 # bool
    m_flWidth = 0x8B4 # float
    m_flHeight = 0x8B8 # float
    m_flDPI = 0x8BC # float
    m_flInteractDistance = 0x8C0 # float
    m_flDepthOffset = 0x8C4 # float
    m_unOwnerContext = 0x8C8 # uint32_t
    m_unHorizontalAlign = 0x8CC # uint32_t
    m_unVerticalAlign = 0x8D0 # uint32_t
    m_unOrientation = 0x8D4 # uint32_t
    m_bAllowInteractionFromAllSceneWorlds = 0x8D8 # bool
    m_vecCSSClasses = 0x8E0 # CNetworkUtlVectorBase<CUtlSymbolLarge>
    m_bOpaque = 0x8F8 # bool
    m_bNoDepth = 0x8F9 # bool
    m_bRenderBackface = 0x8FA # bool
    m_bUseOffScreenIndicator = 0x8FB # bool
    m_bExcludeFromSaveGames = 0x8FC # bool
    m_bGrabbable = 0x8FD # bool
    m_bOnlyRenderToTexture = 0x8FE # bool
    m_bDisableMipGen = 0x8FF # bool
    m_nExplicitImageLayout = 0x900 # int32_t

class CPointClientUIWorldTextPanel: # CPointClientUIWorldPanel
    m_messageText = 0x908 # char[512]

class CPointCommentaryNode: # CBaseAnimGraph
    m_iszPreCommands = 0x890 # CUtlSymbolLarge
    m_iszPostCommands = 0x898 # CUtlSymbolLarge
    m_iszCommentaryFile = 0x8A0 # CUtlSymbolLarge
    m_iszViewTarget = 0x8A8 # CUtlSymbolLarge
    m_hViewTarget = 0x8B0 # CHandle<CBaseEntity>
    m_hViewTargetAngles = 0x8B4 # CHandle<CBaseEntity>
    m_iszViewPosition = 0x8B8 # CUtlSymbolLarge
    m_hViewPosition = 0x8C0 # CHandle<CBaseEntity>
    m_hViewPositionMover = 0x8C4 # CHandle<CBaseEntity>
    m_bPreventMovement = 0x8C8 # bool
    m_bUnderCrosshair = 0x8C9 # bool
    m_bUnstoppable = 0x8CA # bool
    m_flFinishedTime = 0x8CC # GameTime_t
    m_vecFinishOrigin = 0x8D0 # Vector
    m_vecOriginalAngles = 0x8DC # QAngle
    m_vecFinishAngles = 0x8E8 # QAngle
    m_bPreventChangesWhileMoving = 0x8F4 # bool
    m_bDisabled = 0x8F5 # bool
    m_vecTeleportOrigin = 0x8F8 # Vector
    m_flAbortedPlaybackAt = 0x904 # GameTime_t
    m_pOnCommentaryStarted = 0x908 # CEntityIOOutput
    m_pOnCommentaryStopped = 0x930 # CEntityIOOutput
    m_bActive = 0x958 # bool
    m_flStartTime = 0x95C # GameTime_t
    m_flStartTimeInCommentary = 0x960 # float
    m_iszTitle = 0x968 # CUtlSymbolLarge
    m_iszSpeakers = 0x970 # CUtlSymbolLarge
    m_iNodeNumber = 0x978 # int32_t
    m_iNodeNumberMax = 0x97C # int32_t
    m_bListenedTo = 0x980 # bool

class CPointEntity: # CBaseEntity

class CPointEntityFinder: # CBaseEntity
    m_hEntity = 0x4B0 # CHandle<CBaseEntity>
    m_iFilterName = 0x4B8 # CUtlSymbolLarge
    m_hFilter = 0x4C0 # CHandle<CBaseFilter>
    m_iRefName = 0x4C8 # CUtlSymbolLarge
    m_hReference = 0x4D0 # CHandle<CBaseEntity>
    m_FindMethod = 0x4D4 # EntFinderMethod_t
    m_OnFoundEntity = 0x4D8 # CEntityIOOutput

class CPointGamestatsCounter: # CPointEntity
    m_strStatisticName = 0x4B0 # CUtlSymbolLarge
    m_bDisabled = 0x4B8 # bool

class CPointGiveAmmo: # CPointEntity
    m_pActivator = 0x4B0 # CHandle<CBaseEntity>

class CPointHurt: # CPointEntity
    m_nDamage = 0x4B0 # int32_t
    m_bitsDamageType = 0x4B4 # int32_t
    m_flRadius = 0x4B8 # float
    m_flDelay = 0x4BC # float
    m_strTarget = 0x4C0 # CUtlSymbolLarge
    m_pActivator = 0x4C8 # CHandle<CBaseEntity>

class CPointPrefab: # CServerOnlyPointEntity
    m_targetMapName = 0x4B0 # CUtlSymbolLarge
    m_forceWorldGroupID = 0x4B8 # CUtlSymbolLarge
    m_associatedRelayTargetName = 0x4C0 # CUtlSymbolLarge
    m_fixupNames = 0x4C8 # bool
    m_bLoadDynamic = 0x4C9 # bool
    m_associatedRelayEntity = 0x4CC # CHandle<CPointPrefab>

class CPointProximitySensor: # CPointEntity
    m_bDisabled = 0x4B0 # bool
    m_hTargetEntity = 0x4B4 # CHandle<CBaseEntity>
    m_Distance = 0x4B8 # CEntityOutputTemplate<float>

class CPointPulse: # CBaseEntity
    m_sNameFixupStaticPrefix = 0x5C8 # CUtlSymbolLarge
    m_sNameFixupParent = 0x5D0 # CUtlSymbolLarge
    m_sNameFixupLocal = 0x5D8 # CUtlSymbolLarge

class CPointPush: # CPointEntity
    m_bEnabled = 0x4B0 # bool
    m_flMagnitude = 0x4B4 # float
    m_flRadius = 0x4B8 # float
    m_flInnerRadius = 0x4BC # float
    m_flConeOfInfluence = 0x4C0 # float
    m_iszFilterName = 0x4C8 # CUtlSymbolLarge
    m_hFilter = 0x4D0 # CHandle<CBaseFilter>

class CPointScript: # CBaseEntity

class CPointServerCommand: # CPointEntity

class CPointTeleport: # CServerOnlyPointEntity
    m_vSaveOrigin = 0x4B0 # Vector
    m_vSaveAngles = 0x4BC # QAngle
    m_bTeleportParentedEntities = 0x4C8 # bool
    m_bTeleportUseCurrentAngle = 0x4C9 # bool

class CPointTemplate: # CLogicalEntity
    m_iszWorldName = 0x4B0 # CUtlSymbolLarge
    m_iszSource2EntityLumpName = 0x4B8 # CUtlSymbolLarge
    m_iszEntityFilterName = 0x4C0 # CUtlSymbolLarge
    m_flTimeoutInterval = 0x4C8 # float
    m_bAsynchronouslySpawnEntities = 0x4CC # bool
    m_pOutputOnSpawned = 0x4D0 # CEntityIOOutput
    m_clientOnlyEntityBehavior = 0x4F8 # PointTemplateClientOnlyEntityBehavior_t
    m_ownerSpawnGroupType = 0x4FC # PointTemplateOwnerSpawnGroupType_t
    m_createdSpawnGroupHandles = 0x500 # CUtlVector<uint32_t>
    m_SpawnedEntityHandles = 0x518 # CUtlVector<CEntityHandle>
    m_ScriptSpawnCallback = 0x530 # HSCRIPT
    m_ScriptCallbackScope = 0x538 # HSCRIPT

class CPointValueRemapper: # CBaseEntity
    m_bDisabled = 0x4B0 # bool
    m_bUpdateOnClient = 0x4B1 # bool
    m_nInputType = 0x4B4 # ValueRemapperInputType_t
    m_iszRemapLineStartName = 0x4B8 # CUtlSymbolLarge
    m_iszRemapLineEndName = 0x4C0 # CUtlSymbolLarge
    m_hRemapLineStart = 0x4C8 # CHandle<CBaseEntity>
    m_hRemapLineEnd = 0x4CC # CHandle<CBaseEntity>
    m_flMaximumChangePerSecond = 0x4D0 # float
    m_flDisengageDistance = 0x4D4 # float
    m_flEngageDistance = 0x4D8 # float
    m_bRequiresUseKey = 0x4DC # bool
    m_nOutputType = 0x4E0 # ValueRemapperOutputType_t
    m_iszOutputEntityName = 0x4E8 # CUtlSymbolLarge
    m_iszOutputEntity2Name = 0x4F0 # CUtlSymbolLarge
    m_iszOutputEntity3Name = 0x4F8 # CUtlSymbolLarge
    m_iszOutputEntity4Name = 0x500 # CUtlSymbolLarge
    m_hOutputEntities = 0x508 # CNetworkUtlVectorBase<CHandle<CBaseEntity>>
    m_nHapticsType = 0x520 # ValueRemapperHapticsType_t
    m_nMomentumType = 0x524 # ValueRemapperMomentumType_t
    m_flMomentumModifier = 0x528 # float
    m_flSnapValue = 0x52C # float
    m_flCurrentMomentum = 0x530 # float
    m_nRatchetType = 0x534 # ValueRemapperRatchetType_t
    m_flRatchetOffset = 0x538 # float
    m_flInputOffset = 0x53C # float
    m_bEngaged = 0x540 # bool
    m_bFirstUpdate = 0x541 # bool
    m_flPreviousValue = 0x544 # float
    m_flPreviousUpdateTickTime = 0x548 # GameTime_t
    m_vecPreviousTestPoint = 0x54C # Vector
    m_hUsingPlayer = 0x558 # CHandle<CBasePlayerPawn>
    m_flCustomOutputValue = 0x55C # float
    m_iszSoundEngage = 0x560 # CUtlSymbolLarge
    m_iszSoundDisengage = 0x568 # CUtlSymbolLarge
    m_iszSoundReachedValueZero = 0x570 # CUtlSymbolLarge
    m_iszSoundReachedValueOne = 0x578 # CUtlSymbolLarge
    m_iszSoundMovingLoop = 0x580 # CUtlSymbolLarge
    m_Position = 0x590 # CEntityOutputTemplate<float>
    m_PositionDelta = 0x5B8 # CEntityOutputTemplate<float>
    m_OnReachedValueZero = 0x5E0 # CEntityIOOutput
    m_OnReachedValueOne = 0x608 # CEntityIOOutput
    m_OnReachedValueCustom = 0x630 # CEntityIOOutput
    m_OnEngage = 0x658 # CEntityIOOutput
    m_OnDisengage = 0x680 # CEntityIOOutput

class CPointVelocitySensor: # CPointEntity
    m_hTargetEntity = 0x4B0 # CHandle<CBaseEntity>
    m_vecAxis = 0x4B4 # Vector
    m_bEnabled = 0x4C0 # bool
    m_fPrevVelocity = 0x4C4 # float
    m_flAvgInterval = 0x4C8 # float
    m_Velocity = 0x4D0 # CEntityOutputTemplate<float>

class CPointWorldText: # CModelPointEntity
    m_messageText = 0x700 # char[512]
    m_FontName = 0x900 # char[64]
    m_bEnabled = 0x940 # bool
    m_bFullbright = 0x941 # bool
    m_flWorldUnitsPerPx = 0x944 # float
    m_flFontSize = 0x948 # float
    m_flDepthOffset = 0x94C # float
    m_Color = 0x950 # Color
    m_nJustifyHorizontal = 0x954 # PointWorldTextJustifyHorizontal_t
    m_nJustifyVertical = 0x958 # PointWorldTextJustifyVertical_t
    m_nReorientMode = 0x95C # PointWorldTextReorientMode_t

class CPostProcessingVolume: # CBaseTrigger
    m_hPostSettings = 0x8B8 # CStrongHandle<InfoForResourceTypeCPostProcessingResource>
    m_flFadeDuration = 0x8C0 # float
    m_flMinLogExposure = 0x8C4 # float
    m_flMaxLogExposure = 0x8C8 # float
    m_flMinExposure = 0x8CC # float
    m_flMaxExposure = 0x8D0 # float
    m_flExposureCompensation = 0x8D4 # float
    m_flExposureFadeSpeedUp = 0x8D8 # float
    m_flExposureFadeSpeedDown = 0x8DC # float
    m_flTonemapEVSmoothingRange = 0x8E0 # float
    m_bMaster = 0x8E4 # bool
    m_bExposureControl = 0x8E5 # bool
    m_flRate = 0x8E8 # float
    m_flTonemapPercentTarget = 0x8EC # float
    m_flTonemapPercentBrightPixels = 0x8F0 # float
    m_flTonemapMinAvgLum = 0x8F4 # float

class CPrecipitation: # CBaseTrigger

class CPrecipitationBlocker: # CBaseModelEntity

class CPrecipitationVData: # CEntitySubclassVDataBase
    m_szParticlePrecipitationEffect = 0x28 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    m_flInnerDistance = 0x108 # float
    m_nAttachType = 0x10C # ParticleAttachment_t
    m_bBatchSameVolumeType = 0x110 # bool
    m_nRTEnvCP = 0x114 # int32_t
    m_nRTEnvCPComponent = 0x118 # int32_t
    m_szModifier = 0x120 # CUtlString

class CPredictedViewModel: # CBaseViewModel

class CProjectedDecal: # CPointEntity
    m_nTexture = 0x4B0 # int32_t
    m_flDistance = 0x4B4 # float

class CPropDoorRotating: # CBasePropDoor
    m_vecAxis = 0xD98 # Vector
    m_flDistance = 0xDA4 # float
    m_eSpawnPosition = 0xDA8 # PropDoorRotatingSpawnPos_t
    m_eOpenDirection = 0xDAC # PropDoorRotatingOpenDirection_e
    m_eCurrentOpenDirection = 0xDB0 # PropDoorRotatingOpenDirection_e
    m_flAjarAngle = 0xDB4 # float
    m_angRotationAjarDeprecated = 0xDB8 # QAngle
    m_angRotationClosed = 0xDC4 # QAngle
    m_angRotationOpenForward = 0xDD0 # QAngle
    m_angRotationOpenBack = 0xDDC # QAngle
    m_angGoal = 0xDE8 # QAngle
    m_vecForwardBoundsMin = 0xDF4 # Vector
    m_vecForwardBoundsMax = 0xE00 # Vector
    m_vecBackBoundsMin = 0xE0C # Vector
    m_vecBackBoundsMax = 0xE18 # Vector
    m_bAjarDoorShouldntAlwaysOpen = 0xE24 # bool
    m_hEntityBlocker = 0xE28 # CHandle<CEntityBlocker>

class CPropDoorRotatingBreakable: # CPropDoorRotating
    m_bBreakable = 0xE30 # bool
    m_isAbleToCloseAreaPortals = 0xE31 # bool
    m_currentDamageState = 0xE34 # int32_t
    m_damageStates = 0xE38 # CUtlVector<CUtlSymbolLarge>

class CPulseCell_Inflow_GameEvent: # CPulseCell_Inflow_BaseEntrypoint
    m_EventName = 0x70 # CBufferString

class CPulseCell_Outflow_PlayVCD: # CPulseCell_BaseFlow
    m_vcdFilename = 0x48 # CUtlString
    m_OnFinished = 0x50 # CPulse_OutflowConnection
    m_Triggers = 0x60 # CUtlVector<CPulse_OutflowConnection>

class CPulseCell_SoundEventStart: # CPulseCell_BaseFlow
    m_Type = 0x48 # SoundEventStartType_t

class CPulseCell_Step_EntFire: # CPulseCell_BaseFlow
    m_Input = 0x48 # CUtlString

class CPulseCell_Step_SetAnimGraphParam: # CPulseCell_BaseFlow
    m_ParamName = 0x48 # CUtlString

class CPulseCell_Value_FindEntByName: # CPulseCell_BaseValue
    m_EntityType = 0x48 # CUtlString

class CPulseGraphInstance_ServerPointEntity: # CBasePulseGraphInstance

class CPulseServerFuncs:

class CPulseServerFuncs_Sounds:

class CPushable: # CBreakable

class CRR_Response:
    m_Type = 0x0 # uint8_t
    m_szResponseName = 0x1 # char[192]
    m_szMatchingRule = 0xC1 # char[128]
    m_Params = 0x148 # ResponseParams
    m_fMatchScore = 0x168 # float
    m_szSpeakerContext = 0x170 # char*
    m_szWorldContext = 0x178 # char*
    m_Followup = 0x180 # ResponseFollowup
    m_pchCriteriaNames = 0x1B8 # CUtlVector<CUtlSymbol>
    m_pchCriteriaValues = 0x1D0 # CUtlVector<char*>

class CRagdollConstraint: # CPhysConstraint
    m_xmin = 0x508 # float
    m_xmax = 0x50C # float
    m_ymin = 0x510 # float
    m_ymax = 0x514 # float
    m_zmin = 0x518 # float
    m_zmax = 0x51C # float
    m_xfriction = 0x520 # float
    m_yfriction = 0x524 # float
    m_zfriction = 0x528 # float

class CRagdollMagnet: # CPointEntity
    m_bDisabled = 0x4B0 # bool
    m_radius = 0x4B4 # float
    m_force = 0x4B8 # float
    m_axis = 0x4BC # Vector

class CRagdollManager: # CBaseEntity
    m_iCurrentMaxRagdollCount = 0x4B0 # int8_t
    m_iMaxRagdollCount = 0x4B4 # int32_t
    m_bSaveImportant = 0x4B8 # bool

class CRagdollProp: # CBaseAnimGraph
    m_ragdoll = 0x898 # ragdoll_t
    m_bStartDisabled = 0x8D0 # bool
    m_ragPos = 0x8D8 # CNetworkUtlVectorBase<Vector>
    m_ragAngles = 0x8F0 # CNetworkUtlVectorBase<QAngle>
    m_hRagdollSource = 0x908 # CHandle<CBaseEntity>
    m_lastUpdateTickCount = 0x90C # uint32_t
    m_allAsleep = 0x910 # bool
    m_bFirstCollisionAfterLaunch = 0x911 # bool
    m_hDamageEntity = 0x914 # CHandle<CBaseEntity>
    m_hKiller = 0x918 # CHandle<CBaseEntity>
    m_hPhysicsAttacker = 0x91C # CHandle<CBasePlayerPawn>
    m_flLastPhysicsInfluenceTime = 0x920 # GameTime_t
    m_flFadeOutStartTime = 0x924 # GameTime_t
    m_flFadeTime = 0x928 # float
    m_vecLastOrigin = 0x92C # Vector
    m_flAwakeTime = 0x938 # GameTime_t
    m_flLastOriginChangeTime = 0x93C # GameTime_t
    m_nBloodColor = 0x940 # int32_t
    m_strOriginClassName = 0x948 # CUtlSymbolLarge
    m_strSourceClassName = 0x950 # CUtlSymbolLarge
    m_bHasBeenPhysgunned = 0x958 # bool
    m_bShouldTeleportPhysics = 0x959 # bool
    m_flBlendWeight = 0x95C # float
    m_flDefaultFadeScale = 0x960 # float
    m_ragdollMins = 0x968 # CUtlVector<Vector>
    m_ragdollMaxs = 0x980 # CUtlVector<Vector>
    m_bShouldDeleteActivationRecord = 0x998 # bool
    m_bValidatePoweredRagdollPose = 0x9F8 # bool

class CRagdollPropAlias_physics_prop_ragdoll: # CRagdollProp

class CRagdollPropAttached: # CRagdollProp
    m_boneIndexAttached = 0xA38 # uint32_t
    m_ragdollAttachedObjectIndex = 0xA3C # uint32_t
    m_attachmentPointBoneSpace = 0xA40 # Vector
    m_attachmentPointRagdollSpace = 0xA4C # Vector
    m_bShouldDetach = 0xA58 # bool
    m_bShouldDeleteAttachedActivationRecord = 0xA68 # bool

class CRandSimTimer: # CSimpleSimTimer
    m_minInterval = 0x8 # float
    m_maxInterval = 0xC # float

class CRandStopwatch: # CStopwatchBase
    m_minInterval = 0xC # float
    m_maxInterval = 0x10 # float

class CRangeFloat:
    m_pValue = 0x0 # float[2]

class CRangeInt:
    m_pValue = 0x0 # int32_t[2]

class CRectLight: # CBarnLight
    m_bShowLight = 0x928 # bool

class CRemapFloat:
    m_pValue = 0x0 # float[4]

class CRenderComponent: # CEntityComponent
    __m_pChainEntity = 0x10 # CNetworkVarChainer
    m_bIsRenderingWithViewModels = 0x50 # bool
    m_nSplitscreenFlags = 0x54 # uint32_t
    m_bEnableRendering = 0x60 # bool
    m_bInterpolationReadyToDraw = 0xB0 # bool

class CResponseCriteriaSet:
    m_nNumPrefixedContexts = 0x28 # int32_t
    m_bOverrideOnAppend = 0x2C # bool

class CResponseQueue:
    m_ExpresserTargets = 0x50 # CUtlVector<CAI_Expresser*>

class CResponseQueue_CDeferredResponse:
    m_contexts = 0x10 # CResponseCriteriaSet
    m_fDispatchTime = 0x40 # float
    m_hIssuer = 0x44 # CHandle<CBaseEntity>
    m_response = 0x50 # CRR_Response
    m_bResponseValid = 0x238 # bool

class CRetakeGameRules:
    m_nMatchSeed = 0xF8 # int32_t
    m_bBlockersPresent = 0xFC # bool
    m_bRoundInProgress = 0xFD # bool
    m_iFirstSecondHalfRound = 0x100 # int32_t
    m_iBombSite = 0x104 # int32_t

class CRevertSaved: # CModelPointEntity
    m_loadTime = 0x700 # float
    m_Duration = 0x704 # float
    m_HoldTime = 0x708 # float

class CRopeKeyframe: # CBaseModelEntity
    m_RopeFlags = 0x708 # uint16_t
    m_iNextLinkName = 0x710 # CUtlSymbolLarge
    m_Slack = 0x718 # int16_t
    m_Width = 0x71C # float
    m_TextureScale = 0x720 # float
    m_nSegments = 0x724 # uint8_t
    m_bConstrainBetweenEndpoints = 0x725 # bool
    m_strRopeMaterialModel = 0x728 # CUtlSymbolLarge
    m_iRopeMaterialModelIndex = 0x730 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_Subdiv = 0x738 # uint8_t
    m_nChangeCount = 0x739 # uint8_t
    m_RopeLength = 0x73A # int16_t
    m_fLockedPoints = 0x73C # uint8_t
    m_bCreatedFromMapFile = 0x73D # bool
    m_flScrollSpeed = 0x740 # float
    m_bStartPointValid = 0x744 # bool
    m_bEndPointValid = 0x745 # bool
    m_hStartPoint = 0x748 # CHandle<CBaseEntity>
    m_hEndPoint = 0x74C # CHandle<CBaseEntity>
    m_iStartAttachment = 0x750 # AttachmentHandle_t
    m_iEndAttachment = 0x751 # AttachmentHandle_t

class CRopeKeyframeAlias_move_rope: # CRopeKeyframe

class CRotButton: # CBaseButton

class CRotDoor: # CBaseDoor
    m_bSolidBsp = 0x988 # bool

class CRuleBrushEntity: # CRuleEntity

class CRuleEntity: # CBaseModelEntity
    m_iszMaster = 0x700 # CUtlSymbolLarge

class CRulePointEntity: # CRuleEntity
    m_Score = 0x708 # int32_t

class CSAdditionalMatchStats_t: # CSAdditionalPerRoundStats_t
    m_numRoundsSurvived = 0x14 # int32_t
    m_maxNumRoundsSurvived = 0x18 # int32_t
    m_numRoundsSurvivedTotal = 0x1C # int32_t
    m_iRoundsWonWithoutPurchase = 0x20 # int32_t
    m_iRoundsWonWithoutPurchaseTotal = 0x24 # int32_t
    m_numFirstKills = 0x28 # int32_t
    m_numClutchKills = 0x2C # int32_t
    m_numPistolKills = 0x30 # int32_t
    m_numSniperKills = 0x34 # int32_t
    m_iNumSuicides = 0x38 # int32_t
    m_iNumTeamKills = 0x3C # int32_t
    m_iTeamDamage = 0x40 # int32_t

class CSAdditionalPerRoundStats_t:
    m_numChickensKilled = 0x0 # int32_t
    m_killsWhileBlind = 0x4 # int32_t
    m_bombCarrierkills = 0x8 # int32_t
    m_iBurnDamageInflicted = 0xC # int32_t
    m_iDinks = 0x10 # int32_t

class CSMatchStats_t: # CSPerRoundStats_t
    m_iEnemy5Ks = 0x68 # int32_t
    m_iEnemy4Ks = 0x6C # int32_t
    m_iEnemy3Ks = 0x70 # int32_t
    m_iEnemy2Ks = 0x74 # int32_t
    m_iUtility_Count = 0x78 # int32_t
    m_iUtility_Successes = 0x7C # int32_t
    m_iUtility_Enemies = 0x80 # int32_t
    m_iFlash_Count = 0x84 # int32_t
    m_iFlash_Successes = 0x88 # int32_t
    m_nHealthPointsRemovedTotal = 0x8C # int32_t
    m_nHealthPointsDealtTotal = 0x90 # int32_t
    m_nShotsFiredTotal = 0x94 # int32_t
    m_nShotsOnTargetTotal = 0x98 # int32_t
    m_i1v1Count = 0x9C # int32_t
    m_i1v1Wins = 0xA0 # int32_t
    m_i1v2Count = 0xA4 # int32_t
    m_i1v2Wins = 0xA8 # int32_t
    m_iEntryCount = 0xAC # int32_t
    m_iEntryWins = 0xB0 # int32_t

class CSPerRoundStats_t:
    m_iKills = 0x30 # int32_t
    m_iDeaths = 0x34 # int32_t
    m_iAssists = 0x38 # int32_t
    m_iDamage = 0x3C # int32_t
    m_iEquipmentValue = 0x40 # int32_t
    m_iMoneySaved = 0x44 # int32_t
    m_iKillReward = 0x48 # int32_t
    m_iLiveTime = 0x4C # int32_t
    m_iHeadShotKills = 0x50 # int32_t
    m_iObjective = 0x54 # int32_t
    m_iCashEarned = 0x58 # int32_t
    m_iUtilityDamage = 0x5C # int32_t
    m_iEnemiesFlashed = 0x60 # int32_t

class CSceneEntity: # CPointEntity
    m_iszSceneFile = 0x4B8 # CUtlSymbolLarge
    m_iszResumeSceneFile = 0x4C0 # CUtlSymbolLarge
    m_iszTarget1 = 0x4C8 # CUtlSymbolLarge
    m_iszTarget2 = 0x4D0 # CUtlSymbolLarge
    m_iszTarget3 = 0x4D8 # CUtlSymbolLarge
    m_iszTarget4 = 0x4E0 # CUtlSymbolLarge
    m_iszTarget5 = 0x4E8 # CUtlSymbolLarge
    m_iszTarget6 = 0x4F0 # CUtlSymbolLarge
    m_iszTarget7 = 0x4F8 # CUtlSymbolLarge
    m_iszTarget8 = 0x500 # CUtlSymbolLarge
    m_hTarget1 = 0x508 # CHandle<CBaseEntity>
    m_hTarget2 = 0x50C # CHandle<CBaseEntity>
    m_hTarget3 = 0x510 # CHandle<CBaseEntity>
    m_hTarget4 = 0x514 # CHandle<CBaseEntity>
    m_hTarget5 = 0x518 # CHandle<CBaseEntity>
    m_hTarget6 = 0x51C # CHandle<CBaseEntity>
    m_hTarget7 = 0x520 # CHandle<CBaseEntity>
    m_hTarget8 = 0x524 # CHandle<CBaseEntity>
    m_bIsPlayingBack = 0x528 # bool
    m_bPaused = 0x529 # bool
    m_bMultiplayer = 0x52A # bool
    m_bAutogenerated = 0x52B # bool
    m_flForceClientTime = 0x52C # float
    m_flCurrentTime = 0x530 # float
    m_flFrameTime = 0x534 # float
    m_bCancelAtNextInterrupt = 0x538 # bool
    m_fPitch = 0x53C # float
    m_bAutomated = 0x540 # bool
    m_nAutomatedAction = 0x544 # int32_t
    m_flAutomationDelay = 0x548 # float
    m_flAutomationTime = 0x54C # float
    m_hWaitingForThisResumeScene = 0x550 # CHandle<CBaseEntity>
    m_bWaitingForResumeScene = 0x554 # bool
    m_bPausedViaInput = 0x555 # bool
    m_bPauseAtNextInterrupt = 0x556 # bool
    m_bWaitingForActor = 0x557 # bool
    m_bWaitingForInterrupt = 0x558 # bool
    m_bInterruptedActorsScenes = 0x559 # bool
    m_bBreakOnNonIdle = 0x55A # bool
    m_hActorList = 0x560 # CNetworkUtlVectorBase<CHandle<CBaseFlex>>
    m_hRemoveActorList = 0x578 # CUtlVector<CHandle<CBaseEntity>>
    m_nSceneFlushCounter = 0x5A0 # int32_t
    m_nSceneStringIndex = 0x5A4 # uint16_t
    m_OnStart = 0x5A8 # CEntityIOOutput
    m_OnCompletion = 0x5D0 # CEntityIOOutput
    m_OnCanceled = 0x5F8 # CEntityIOOutput
    m_OnPaused = 0x620 # CEntityIOOutput
    m_OnResumed = 0x648 # CEntityIOOutput
    m_OnTrigger = 0x670 # CEntityIOOutput[16]
    m_hInterruptScene = 0x980 # CHandle<CSceneEntity>
    m_nInterruptCount = 0x984 # int32_t
    m_bSceneMissing = 0x988 # bool
    m_bInterrupted = 0x989 # bool
    m_bCompletedEarly = 0x98A # bool
    m_bInterruptSceneFinished = 0x98B # bool
    m_bRestoring = 0x98C # bool
    m_hNotifySceneCompletion = 0x990 # CUtlVector<CHandle<CSceneEntity>>
    m_hListManagers = 0x9A8 # CUtlVector<CHandle<CSceneListManager>>
    m_iszSoundName = 0x9E8 # CUtlSymbolLarge
    m_hActor = 0x9F0 # CHandle<CBaseFlex>
    m_hActivator = 0x9F4 # CHandle<CBaseEntity>
    m_BusyActor = 0x9F8 # int32_t
    m_iPlayerDeathBehavior = 0x9FC # SceneOnPlayerDeath_t

class CSceneEntityAlias_logic_choreographed_scene: # CSceneEntity

class CSceneEventInfo:
    m_iLayer = 0x0 # int32_t
    m_iPriority = 0x4 # int32_t
    m_hSequence = 0x8 # HSequence
    m_flWeight = 0xC # float
    m_bIsMoving = 0x10 # bool
    m_bHasArrived = 0x11 # bool
    m_flInitialYaw = 0x14 # float
    m_flTargetYaw = 0x18 # float
    m_flFacingYaw = 0x1C # float
    m_nType = 0x20 # int32_t
    m_flNext = 0x24 # GameTime_t
    m_bIsGesture = 0x28 # bool
    m_bShouldRemove = 0x29 # bool
    m_hTarget = 0x54 # CHandle<CBaseEntity>
    m_nSceneEventId = 0x58 # uint32_t
    m_bClientSide = 0x5C # bool
    m_bStarted = 0x5D # bool

class CSceneListManager: # CLogicalEntity
    m_hListManagers = 0x4B0 # CUtlVector<CHandle<CSceneListManager>>
    m_iszScenes = 0x4C8 # CUtlSymbolLarge[16]
    m_hScenes = 0x548 # CHandle<CBaseEntity>[16]

class CScriptComponent: # CEntityComponent
    m_scriptClassName = 0x30 # CUtlSymbolLarge

class CScriptItem: # CItem
    m_OnPlayerPickup = 0x968 # CEntityIOOutput
    m_MoveTypeOverride = 0x990 # MoveType_t

class CScriptNavBlocker: # CFuncNavBlocker
    m_vExtent = 0x710 # Vector

class CScriptTriggerHurt: # CTriggerHurt
    m_vExtent = 0x948 # Vector

class CScriptTriggerMultiple: # CTriggerMultiple
    m_vExtent = 0x8D0 # Vector

class CScriptTriggerOnce: # CTriggerOnce
    m_vExtent = 0x8D0 # Vector

class CScriptTriggerPush: # CTriggerPush
    m_vExtent = 0x8D0 # Vector

class CScriptUniformRandomStream:
    m_hScriptScope = 0x8 # HSCRIPT
    m_nInitialSeed = 0x9C # int32_t

class CScriptedSequence: # CBaseEntity
    m_iszEntry = 0x4B0 # CUtlSymbolLarge
    m_iszPreIdle = 0x4B8 # CUtlSymbolLarge
    m_iszPlay = 0x4C0 # CUtlSymbolLarge
    m_iszPostIdle = 0x4C8 # CUtlSymbolLarge
    m_iszModifierToAddOnPlay = 0x4D0 # CUtlSymbolLarge
    m_iszNextScript = 0x4D8 # CUtlSymbolLarge
    m_iszEntity = 0x4E0 # CUtlSymbolLarge
    m_iszSyncGroup = 0x4E8 # CUtlSymbolLarge
    m_nMoveTo = 0x4F0 # ScriptedMoveTo_t
    m_bIsPlayingPreIdle = 0x4F4 # bool
    m_bIsPlayingEntry = 0x4F5 # bool
    m_bIsPlayingAction = 0x4F6 # bool
    m_bIsPlayingPostIdle = 0x4F7 # bool
    m_bLoopPreIdleSequence = 0x4F8 # bool
    m_bLoopActionSequence = 0x4F9 # bool
    m_bLoopPostIdleSequence = 0x4FA # bool
    m_bSynchPostIdles = 0x4FB # bool
    m_bIgnoreGravity = 0x4FC # bool
    m_bDisableNPCCollisions = 0x4FD # bool
    m_bKeepAnimgraphLockedPost = 0x4FE # bool
    m_bDontAddModifiers = 0x4FF # bool
    m_flRadius = 0x500 # float
    m_flRepeat = 0x504 # float
    m_flPlayAnimFadeInTime = 0x508 # float
    m_flMoveInterpTime = 0x50C # float
    m_flAngRate = 0x510 # float
    m_iDelay = 0x514 # int32_t
    m_startTime = 0x518 # GameTime_t
    m_bWaitForBeginSequence = 0x51C # bool
    m_saved_effects = 0x520 # int32_t
    m_savedFlags = 0x524 # int32_t
    m_savedCollisionGroup = 0x528 # int32_t
    m_interruptable = 0x52C # bool
    m_sequenceStarted = 0x52D # bool
    m_bPrevAnimatedEveryTick = 0x52E # bool
    m_bForcedAnimatedEveryTick = 0x52F # bool
    m_bPositionRelativeToOtherEntity = 0x530 # bool
    m_hTargetEnt = 0x534 # CHandle<CBaseEntity>
    m_hNextCine = 0x538 # CHandle<CScriptedSequence>
    m_bThinking = 0x53C # bool
    m_bInitiatedSelfDelete = 0x53D # bool
    m_bIsTeleportingDueToMoveTo = 0x53E # bool
    m_bAllowCustomInterruptConditions = 0x53F # bool
    m_hLastFoundEntity = 0x540 # CHandle<CBaseEntity>
    m_hForcedTarget = 0x544 # CHandle<CBaseAnimGraph>
    m_bDontCancelOtherSequences = 0x548 # bool
    m_bForceSynch = 0x549 # bool
    m_bTargetWasAsleep = 0x54A # bool
    m_bPreventUpdateYawOnFinish = 0x54B # bool
    m_bEnsureOnNavmeshOnFinish = 0x54C # bool
    m_onDeathBehavior = 0x550 # ScriptedOnDeath_t
    m_ConflictResponse = 0x554 # ScriptedConflictResponse_t
    m_OnBeginSequence = 0x558 # CEntityIOOutput
    m_OnActionStartOrLoop = 0x580 # CEntityIOOutput
    m_OnEndSequence = 0x5A8 # CEntityIOOutput
    m_OnPostIdleEndSequence = 0x5D0 # CEntityIOOutput
    m_OnCancelSequence = 0x5F8 # CEntityIOOutput
    m_OnCancelFailedSequence = 0x620 # CEntityIOOutput
    m_OnScriptEvent = 0x648 # CEntityIOOutput[8]
    m_matOtherToMain = 0x790 # CTransform
    m_hInteractionMainEntity = 0x7B0 # CHandle<CBaseEntity>
    m_iPlayerDeathBehavior = 0x7B4 # int32_t

class CSensorGrenade: # CBaseCSGrenade

class CSensorGrenadeProjectile: # CBaseCSGrenadeProjectile
    m_fExpireTime = 0xA40 # GameTime_t
    m_fNextDetectPlayerSound = 0xA44 # GameTime_t
    m_hDisplayGrenade = 0xA48 # CHandle<CBaseEntity>

class CServerOnlyEntity: # CBaseEntity

class CServerOnlyModelEntity: # CBaseModelEntity

class CServerOnlyPointEntity: # CServerOnlyEntity

class CServerRagdollTrigger: # CBaseTrigger

class CShatterGlassShard:
    m_hShardHandle = 0x8 # uint32_t
    m_vecPanelVertices = 0x10 # CUtlVector<Vector2D>
    m_vLocalPanelSpaceOrigin = 0x28 # Vector2D
    m_hModel = 0x30 # CStrongHandle<InfoForResourceTypeCModel>
    m_hPhysicsEntity = 0x38 # CHandle<CShatterGlassShardPhysics>
    m_hParentPanel = 0x3C # CHandle<CFuncShatterglass>
    m_hParentShard = 0x40 # uint32_t
    m_ShatterStressType = 0x44 # ShatterGlassStressType
    m_vecStressVelocity = 0x48 # Vector
    m_bCreatedModel = 0x54 # bool
    m_flLongestEdge = 0x58 # float
    m_flShortestEdge = 0x5C # float
    m_flLongestAcross = 0x60 # float
    m_flShortestAcross = 0x64 # float
    m_flSumOfAllEdges = 0x68 # float
    m_flArea = 0x6C # float
    m_nOnFrameEdge = 0x70 # OnFrame
    m_nParentPanelsNthShard = 0x74 # int32_t
    m_nSubShardGeneration = 0x78 # int32_t
    m_vecAverageVertPosition = 0x7C # Vector2D
    m_bAverageVertPositionIsValid = 0x84 # bool
    m_vecPanelSpaceStressPositionA = 0x88 # Vector2D
    m_vecPanelSpaceStressPositionB = 0x90 # Vector2D
    m_bStressPositionAIsValid = 0x98 # bool
    m_bStressPositionBIsValid = 0x99 # bool
    m_bFlaggedForRemoval = 0x9A # bool
    m_flPhysicsEntitySpawnedAtTime = 0x9C # GameTime_t
    m_bShatterRateLimited = 0xA0 # bool
    m_hEntityHittingMe = 0xA4 # CHandle<CBaseEntity>
    m_vecNeighbors = 0xA8 # CUtlVector<uint32_t>

class CShatterGlassShardPhysics: # CPhysicsProp
    m_bDebris = 0xB78 # bool
    m_hParentShard = 0xB7C # uint32_t
    m_ShardDesc = 0xB80 # shard_model_desc_t

class CShower: # CModelPointEntity

class CSimTimer: # CSimpleSimTimer
    m_interval = 0x8 # float

class CSimpleMarkupVolumeTagged: # CMarkupVolumeTagged

class CSimpleSimTimer:
    m_next = 0x0 # GameTime_t
    m_nWorldGroupId = 0x4 # WorldGroupId_t

class CSimpleStopwatch: # CStopwatchBase

class CSingleplayRules: # CGameRules
    m_bSinglePlayerGameEnding = 0x90 # bool

class CSkeletonAnimationController: # ISkeletonAnimationController
    m_pSkeletonInstance = 0x8 # CSkeletonInstance*

class CSkeletonInstance: # CGameSceneNode
    m_modelState = 0x160 # CModelState
    m_bIsAnimationEnabled = 0x390 # bool
    m_bUseParentRenderBounds = 0x391 # bool
    m_bDisableSolidCollisionsForHierarchy = 0x392 # bool
    m_bDirtyMotionType = 0x0 # bitfield:1
    m_bIsGeneratingLatchedParentSpaceState = 0x0 # bitfield:1
    m_materialGroup = 0x394 # CUtlStringToken
    m_nHitboxSet = 0x398 # uint8_t

class CSkillDamage:
    m_flDamage = 0x0 # CSkillFloat
    m_flPhysicsForceDamage = 0x10 # float

class CSkillFloat:
    m_pValue = 0x0 # float[4]

class CSkillInt:
    m_pValue = 0x0 # int32_t[4]

class CSkyCamera: # CBaseEntity
    m_skyboxData = 0x4B0 # sky3dparams_t
    m_skyboxSlotToken = 0x540 # CUtlStringToken
    m_bUseAngles = 0x544 # bool
    m_pNext = 0x548 # CSkyCamera*

class CSkyboxReference: # CBaseEntity
    m_worldGroupId = 0x4B0 # WorldGroupId_t
    m_hSkyCamera = 0x4B4 # CHandle<CSkyCamera>

class CSmokeGrenade: # CBaseCSGrenade

class CSmokeGrenadeProjectile: # CBaseCSGrenadeProjectile
    m_nSmokeEffectTickBegin = 0xA58 # int32_t
    m_bDidSmokeEffect = 0xA5C # bool
    m_nRandomSeed = 0xA60 # int32_t
    m_vSmokeColor = 0xA64 # Vector
    m_vSmokeDetonationPos = 0xA70 # Vector
    m_VoxelFrameData = 0xA80 # CUtlVector<uint8_t>
    m_flLastBounce = 0xA98 # GameTime_t
    m_fllastSimulationTime = 0xA9C # GameTime_t

class CSmoothFunc:
    m_flSmoothAmplitude = 0x8 # float
    m_flSmoothBias = 0xC # float
    m_flSmoothDuration = 0x10 # float
    m_flSmoothRemainingTime = 0x14 # float
    m_nSmoothDir = 0x18 # int32_t

class CSound:
    m_hOwner = 0x0 # CHandle<CBaseEntity>
    m_hTarget = 0x4 # CHandle<CBaseEntity>
    m_iVolume = 0x8 # int32_t
    m_flOcclusionScale = 0xC # float
    m_iType = 0x10 # int32_t
    m_iNextAudible = 0x14 # int32_t
    m_flExpireTime = 0x18 # GameTime_t
    m_iNext = 0x1C # int16_t
    m_bNoExpirationTime = 0x1E # bool
    m_ownerChannelIndex = 0x20 # int32_t
    m_vecOrigin = 0x24 # Vector
    m_bHasOwner = 0x30 # bool

class CSoundAreaEntityBase: # CBaseEntity
    m_bDisabled = 0x4B0 # bool
    m_iszSoundAreaType = 0x4B8 # CUtlSymbolLarge
    m_vPos = 0x4C0 # Vector

class CSoundAreaEntityOrientedBox: # CSoundAreaEntityBase
    m_vMin = 0x4D0 # Vector
    m_vMax = 0x4DC # Vector

class CSoundAreaEntitySphere: # CSoundAreaEntityBase
    m_flRadius = 0x4D0 # float

class CSoundEnt: # CPointEntity
    m_iFreeSound = 0x4B0 # int32_t
    m_iActiveSound = 0x4B4 # int32_t
    m_cLastActiveSounds = 0x4B8 # int32_t
    m_SoundPool = 0x4BC # CSound[128]

class CSoundEnvelope:
    m_current = 0x0 # float
    m_target = 0x4 # float
    m_rate = 0x8 # float
    m_forceupdate = 0xC # bool

class CSoundEventAABBEntity: # CSoundEventEntity
    m_vMins = 0x558 # Vector
    m_vMaxs = 0x564 # Vector

class CSoundEventEntity: # CBaseEntity
    m_bStartOnSpawn = 0x4B0 # bool
    m_bToLocalPlayer = 0x4B1 # bool
    m_bStopOnNew = 0x4B2 # bool
    m_bSaveRestore = 0x4B3 # bool
    m_bSavedIsPlaying = 0x4B4 # bool
    m_flSavedElapsedTime = 0x4B8 # float
    m_iszSourceEntityName = 0x4C0 # CUtlSymbolLarge
    m_iszAttachmentName = 0x4C8 # CUtlSymbolLarge
    m_onGUIDChanged = 0x4D0 # CEntityOutputTemplate<uint64_t>
    m_onSoundFinished = 0x4F8 # CEntityIOOutput
    m_iszSoundName = 0x540 # CUtlSymbolLarge
    m_hSource = 0x550 # CEntityHandle

class CSoundEventEntityAlias_snd_event_point: # CSoundEventEntity

class CSoundEventOBBEntity: # CSoundEventEntity
    m_vMins = 0x558 # Vector
    m_vMaxs = 0x564 # Vector

class CSoundEventParameter: # CBaseEntity
    m_iszParamName = 0x4B8 # CUtlSymbolLarge
    m_flFloatValue = 0x4C0 # float

class CSoundEventPathCornerEntity: # CSoundEventEntity
    m_iszPathCorner = 0x558 # CUtlSymbolLarge
    m_iCountMax = 0x560 # int32_t
    m_flDistanceMax = 0x564 # float
    m_flDistMaxSqr = 0x568 # float
    m_flDotProductMax = 0x56C # float
    bPlaying = 0x570 # bool

class CSoundOpvarSetAABBEntity: # CSoundOpvarSetPointEntity
    m_vDistanceInnerMins = 0x648 # Vector
    m_vDistanceInnerMaxs = 0x654 # Vector
    m_vDistanceOuterMins = 0x660 # Vector
    m_vDistanceOuterMaxs = 0x66C # Vector
    m_nAABBDirection = 0x678 # int32_t
    m_vInnerMins = 0x67C # Vector
    m_vInnerMaxs = 0x688 # Vector
    m_vOuterMins = 0x694 # Vector
    m_vOuterMaxs = 0x6A0 # Vector

class CSoundOpvarSetEntity: # CBaseEntity
    m_iszStackName = 0x4B8 # CUtlSymbolLarge
    m_iszOperatorName = 0x4C0 # CUtlSymbolLarge
    m_iszOpvarName = 0x4C8 # CUtlSymbolLarge
    m_nOpvarType = 0x4D0 # int32_t
    m_nOpvarIndex = 0x4D4 # int32_t
    m_flOpvarValue = 0x4D8 # float
    m_OpvarValueString = 0x4E0 # CUtlSymbolLarge
    m_bSetOnSpawn = 0x4E8 # bool

class CSoundOpvarSetOBBEntity: # CSoundOpvarSetAABBEntity

class CSoundOpvarSetOBBWindEntity: # CSoundOpvarSetPointBase
    m_vMins = 0x548 # Vector
    m_vMaxs = 0x554 # Vector
    m_vDistanceMins = 0x560 # Vector
    m_vDistanceMaxs = 0x56C # Vector
    m_flWindMin = 0x578 # float
    m_flWindMax = 0x57C # float
    m_flWindMapMin = 0x580 # float
    m_flWindMapMax = 0x584 # float

class CSoundOpvarSetPathCornerEntity: # CSoundOpvarSetPointEntity
    m_flDistMinSqr = 0x660 # float
    m_flDistMaxSqr = 0x664 # float
    m_iszPathCornerEntityName = 0x668 # CUtlSymbolLarge

class CSoundOpvarSetPointBase: # CBaseEntity
    m_bDisabled = 0x4B0 # bool
    m_hSource = 0x4B4 # CEntityHandle
    m_iszSourceEntityName = 0x4C0 # CUtlSymbolLarge
    m_vLastPosition = 0x518 # Vector
    m_iszStackName = 0x528 # CUtlSymbolLarge
    m_iszOperatorName = 0x530 # CUtlSymbolLarge
    m_iszOpvarName = 0x538 # CUtlSymbolLarge
    m_iOpvarIndex = 0x540 # int32_t
    m_bUseAutoCompare = 0x544 # bool

class CSoundOpvarSetPointEntity: # CSoundOpvarSetPointBase
    m_OnEnter = 0x548 # CEntityIOOutput
    m_OnExit = 0x570 # CEntityIOOutput
    m_bAutoDisable = 0x598 # bool
    m_flDistanceMin = 0x5DC # float
    m_flDistanceMax = 0x5E0 # float
    m_flDistanceMapMin = 0x5E4 # float
    m_flDistanceMapMax = 0x5E8 # float
    m_flOcclusionRadius = 0x5EC # float
    m_flOcclusionMin = 0x5F0 # float
    m_flOcclusionMax = 0x5F4 # float
    m_flValSetOnDisable = 0x5F8 # float
    m_bSetValueOnDisable = 0x5FC # bool
    m_nSimulationMode = 0x600 # int32_t
    m_nVisibilitySamples = 0x604 # int32_t
    m_vDynamicProxyPoint = 0x608 # Vector
    m_flDynamicMaximumOcclusion = 0x614 # float
    m_hDynamicEntity = 0x618 # CEntityHandle
    m_iszDynamicEntityName = 0x620 # CUtlSymbolLarge
    m_flPathingDistanceNormFactor = 0x628 # float
    m_vPathingSourcePos = 0x62C # Vector
    m_vPathingListenerPos = 0x638 # Vector
    m_nPathingSourceIndex = 0x644 # int32_t

class CSoundPatch:
    m_pitch = 0x8 # CSoundEnvelope
    m_volume = 0x18 # CSoundEnvelope
    m_shutdownTime = 0x30 # float
    m_flLastTime = 0x34 # float
    m_iszSoundScriptName = 0x38 # CUtlSymbolLarge
    m_hEnt = 0x40 # CHandle<CBaseEntity>
    m_soundEntityIndex = 0x44 # CEntityIndex
    m_soundOrigin = 0x48 # Vector
    m_isPlaying = 0x54 # int32_t
    m_Filter = 0x58 # CCopyRecipientFilter
    m_flCloseCaptionDuration = 0x80 # float
    m_bUpdatedSoundOrigin = 0x84 # bool
    m_iszClassName = 0x88 # CUtlSymbolLarge

class CSoundStackSave: # CLogicalEntity
    m_iszStackName = 0x4B0 # CUtlSymbolLarge

class CSplineConstraint: # CPhysConstraint

class CSpotlightEnd: # CBaseModelEntity
    m_flLightScale = 0x700 # float
    m_Radius = 0x704 # float
    m_vSpotlightDir = 0x708 # Vector
    m_vSpotlightOrg = 0x714 # Vector

class CSprite: # CBaseModelEntity
    m_hSpriteMaterial = 0x700 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_hAttachedToEntity = 0x708 # CHandle<CBaseEntity>
    m_nAttachment = 0x70C # AttachmentHandle_t
    m_flSpriteFramerate = 0x710 # float
    m_flFrame = 0x714 # float
    m_flDieTime = 0x718 # GameTime_t
    m_nBrightness = 0x728 # uint32_t
    m_flBrightnessDuration = 0x72C # float
    m_flSpriteScale = 0x730 # float
    m_flScaleDuration = 0x734 # float
    m_bWorldSpaceScale = 0x738 # bool
    m_flGlowProxySize = 0x73C # float
    m_flHDRColorScale = 0x740 # float
    m_flLastTime = 0x744 # GameTime_t
    m_flMaxFrame = 0x748 # float
    m_flStartScale = 0x74C # float
    m_flDestScale = 0x750 # float
    m_flScaleTimeStart = 0x754 # GameTime_t
    m_nStartBrightness = 0x758 # int32_t
    m_nDestBrightness = 0x75C # int32_t
    m_flBrightnessTimeStart = 0x760 # GameTime_t
    m_nSpriteWidth = 0x764 # int32_t
    m_nSpriteHeight = 0x768 # int32_t

class CSpriteAlias_env_glow: # CSprite

class CSpriteOriented: # CSprite

class CStopwatch: # CStopwatchBase
    m_interval = 0xC # float

class CStopwatchBase: # CSimpleSimTimer
    m_fIsRunning = 0x8 # bool

class CSun: # CBaseModelEntity
    m_vDirection = 0x700 # Vector
    m_clrOverlay = 0x70C # Color
    m_iszEffectName = 0x710 # CUtlSymbolLarge
    m_iszSSEffectName = 0x718 # CUtlSymbolLarge
    m_bOn = 0x720 # bool
    m_bmaxColor = 0x721 # bool
    m_flSize = 0x724 # float
    m_flRotation = 0x728 # float
    m_flHazeScale = 0x72C # float
    m_flAlphaHaze = 0x730 # float
    m_flAlphaHdr = 0x734 # float
    m_flAlphaScale = 0x738 # float
    m_flHDRColorScale = 0x73C # float
    m_flFarZScale = 0x740 # float

class CTablet: # CCSWeaponBase

class CTakeDamageInfo:
    m_vecDamageForce = 0x8 # Vector
    m_vecDamagePosition = 0x14 # Vector
    m_vecReportedPosition = 0x20 # Vector
    m_vecDamageDirection = 0x2C # Vector
    m_hInflictor = 0x38 # CHandle<CBaseEntity>
    m_hAttacker = 0x3C # CHandle<CBaseEntity>
    m_hAbility = 0x40 # CHandle<CBaseEntity>
    m_flDamage = 0x44 # float
    m_bitsDamageType = 0x48 # int32_t
    m_iDamageCustom = 0x4C # int32_t
    m_iAmmoType = 0x50 # AmmoIndex_t
    m_flOriginalDamage = 0x60 # float
    m_bShouldBleed = 0x64 # bool
    m_bShouldSpark = 0x65 # bool
    m_nDamageFlags = 0x70 # TakeDamageFlags_t
    m_nNumObjectsPenetrated = 0x74 # int32_t
    m_hScriptInstance = 0x78 # HSCRIPT
    m_bInTakeDamageFlow = 0x94 # bool

class CTakeDamageResult:
    m_nHealthLost = 0x0 # int32_t
    m_nDamageTaken = 0x4 # int32_t

class CTakeDamageSummaryScopeGuard:
    m_vecSummaries = 0x8 # CUtlVector<SummaryTakeDamageInfo_t*>

class CTankTargetChange: # CPointEntity
    m_newTarget = 0x4B0 # CVariantBase<CVariantDefaultAllocator>
    m_newTargetName = 0x4C0 # CUtlSymbolLarge

class CTankTrainAI: # CPointEntity
    m_hTrain = 0x4B0 # CHandle<CFuncTrackTrain>
    m_hTargetEntity = 0x4B4 # CHandle<CBaseEntity>
    m_soundPlaying = 0x4B8 # int32_t
    m_startSoundName = 0x4D0 # CUtlSymbolLarge
    m_engineSoundName = 0x4D8 # CUtlSymbolLarge
    m_movementSoundName = 0x4E0 # CUtlSymbolLarge
    m_targetEntityName = 0x4E8 # CUtlSymbolLarge

class CTeam: # CBaseEntity
    m_aPlayerControllers = 0x4B0 # CNetworkUtlVectorBase<CHandle<CBasePlayerController>>
    m_aPlayers = 0x4C8 # CNetworkUtlVectorBase<CHandle<CBasePlayerPawn>>
    m_iScore = 0x4E0 # int32_t
    m_szTeamname = 0x4E4 # char[129]

class CTeamplayRules: # CMultiplayRules

class CTestEffect: # CBaseEntity
    m_iLoop = 0x4B0 # int32_t
    m_iBeam = 0x4B4 # int32_t
    m_pBeam = 0x4B8 # CBeam*[24]
    m_flBeamTime = 0x578 # GameTime_t[24]
    m_flStartTime = 0x5D8 # GameTime_t

class CTextureBasedAnimatable: # CBaseModelEntity
    m_bLoop = 0x700 # bool
    m_flFPS = 0x704 # float
    m_hPositionKeys = 0x708 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hRotationKeys = 0x710 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_vAnimationBoundsMin = 0x718 # Vector
    m_vAnimationBoundsMax = 0x724 # Vector
    m_flStartTime = 0x730 # float
    m_flStartFrame = 0x734 # float

class CTimeline: # IntervalTimer
    m_flValues = 0x10 # float[64]
    m_nValueCounts = 0x110 # int32_t[64]
    m_nBucketCount = 0x210 # int32_t
    m_flInterval = 0x214 # float
    m_flFinalValue = 0x218 # float
    m_nCompressionType = 0x21C # TimelineCompression_t
    m_bStopped = 0x220 # bool

class CTimerEntity: # CLogicalEntity
    m_OnTimer = 0x4B0 # CEntityIOOutput
    m_OnTimerHigh = 0x4D8 # CEntityIOOutput
    m_OnTimerLow = 0x500 # CEntityIOOutput
    m_iDisabled = 0x528 # int32_t
    m_flInitialDelay = 0x52C # float
    m_flRefireTime = 0x530 # float
    m_bUpDownState = 0x534 # bool
    m_iUseRandomTime = 0x538 # int32_t
    m_bPauseAfterFiring = 0x53C # bool
    m_flLowerRandomBound = 0x540 # float
    m_flUpperRandomBound = 0x544 # float
    m_flRemainingTime = 0x548 # float
    m_bPaused = 0x54C # bool

class CTonemapController2: # CBaseEntity
    m_flAutoExposureMin = 0x4B0 # float
    m_flAutoExposureMax = 0x4B4 # float
    m_flTonemapPercentTarget = 0x4B8 # float
    m_flTonemapPercentBrightPixels = 0x4BC # float
    m_flTonemapMinAvgLum = 0x4C0 # float
    m_flExposureAdaptationSpeedUp = 0x4C4 # float
    m_flExposureAdaptationSpeedDown = 0x4C8 # float
    m_flTonemapEVSmoothingRange = 0x4CC # float

class CTonemapController2Alias_env_tonemap_controller2: # CTonemapController2

class CTonemapTrigger: # CBaseTrigger
    m_tonemapControllerName = 0x8A8 # CUtlSymbolLarge
    m_hTonemapController = 0x8B0 # CEntityHandle

class CTouchExpansionComponent: # CEntityComponent

class CTriggerActiveWeaponDetect: # CBaseTrigger
    m_OnTouchedActiveWeapon = 0x8A8 # CEntityIOOutput
    m_iszWeaponClassName = 0x8D0 # CUtlSymbolLarge

class CTriggerBombReset: # CBaseTrigger

class CTriggerBrush: # CBaseModelEntity
    m_OnStartTouch = 0x700 # CEntityIOOutput
    m_OnEndTouch = 0x728 # CEntityIOOutput
    m_OnUse = 0x750 # CEntityIOOutput
    m_iInputFilter = 0x778 # int32_t
    m_iDontMessageParent = 0x77C # int32_t

class CTriggerBuoyancy: # CBaseTrigger
    m_BuoyancyHelper = 0x8A8 # CBuoyancyHelper
    m_flFluidDensity = 0x8C8 # float

class CTriggerCallback: # CBaseTrigger

class CTriggerDetectBulletFire: # CBaseTrigger
    m_bPlayerFireOnly = 0x8A8 # bool
    m_OnDetectedBulletFire = 0x8B0 # CEntityIOOutput

class CTriggerDetectExplosion: # CBaseTrigger
    m_OnDetectedExplosion = 0x8E0 # CEntityIOOutput

class CTriggerFan: # CBaseTrigger
    m_vFanOrigin = 0x8A8 # Vector
    m_vFanEnd = 0x8B4 # Vector
    m_vNoise = 0x8C0 # Vector
    m_flForce = 0x8CC # float
    m_flPlayerForce = 0x8D0 # float
    m_flRampTime = 0x8D4 # float
    m_bFalloff = 0x8D8 # bool
    m_bPushPlayer = 0x8D9 # bool
    m_bRampDown = 0x8DA # bool
    m_bAddNoise = 0x8DB # bool
    m_RampTimer = 0x8E0 # CountdownTimer

class CTriggerGameEvent: # CBaseTrigger
    m_strStartTouchEventName = 0x8A8 # CUtlString
    m_strEndTouchEventName = 0x8B0 # CUtlString
    m_strTriggerID = 0x8B8 # CUtlString

class CTriggerGravity: # CBaseTrigger

class CTriggerHostageReset: # CBaseTrigger

class CTriggerHurt: # CBaseTrigger
    m_flOriginalDamage = 0x8A8 # float
    m_flDamage = 0x8AC # float
    m_flDamageCap = 0x8B0 # float
    m_flLastDmgTime = 0x8B4 # GameTime_t
    m_flForgivenessDelay = 0x8B8 # float
    m_bitsDamageInflict = 0x8BC # int32_t
    m_damageModel = 0x8C0 # int32_t
    m_bNoDmgForce = 0x8C4 # bool
    m_vDamageForce = 0x8C8 # Vector
    m_thinkAlways = 0x8D4 # bool
    m_hurtThinkPeriod = 0x8D8 # float
    m_OnHurt = 0x8E0 # CEntityIOOutput
    m_OnHurtPlayer = 0x908 # CEntityIOOutput
    m_hurtEntities = 0x930 # CUtlVector<CHandle<CBaseEntity>>

class CTriggerHurtGhost: # CTriggerHurt

class CTriggerImpact: # CTriggerMultiple
    m_flMagnitude = 0x8D0 # float
    m_flNoise = 0x8D4 # float
    m_flViewkick = 0x8D8 # float
    m_pOutputForce = 0x8E0 # CEntityOutputTemplate<Vector>

class CTriggerLerpObject: # CBaseTrigger
    m_iszLerpTarget = 0x8A8 # CUtlSymbolLarge
    m_hLerpTarget = 0x8B0 # CHandle<CBaseEntity>
    m_iszLerpTargetAttachment = 0x8B8 # CUtlSymbolLarge
    m_hLerpTargetAttachment = 0x8C0 # AttachmentHandle_t
    m_flLerpDuration = 0x8C4 # float
    m_bLerpRestoreMoveType = 0x8C8 # bool
    m_bSingleLerpObject = 0x8C9 # bool
    m_vecLerpingObjects = 0x8D0 # CUtlVector<lerpdata_t>
    m_iszLerpEffect = 0x8E8 # CUtlSymbolLarge
    m_iszLerpSound = 0x8F0 # CUtlSymbolLarge
    m_OnLerpStarted = 0x8F8 # CEntityIOOutput
    m_OnLerpFinished = 0x920 # CEntityIOOutput

class CTriggerLook: # CTriggerOnce
    m_hLookTarget = 0x8D0 # CHandle<CBaseEntity>
    m_flFieldOfView = 0x8D4 # float
    m_flLookTime = 0x8D8 # float
    m_flLookTimeTotal = 0x8DC # float
    m_flLookTimeLast = 0x8E0 # GameTime_t
    m_flTimeoutDuration = 0x8E4 # float
    m_bTimeoutFired = 0x8E8 # bool
    m_bIsLooking = 0x8E9 # bool
    m_b2DFOV = 0x8EA # bool
    m_bUseVelocity = 0x8EB # bool
    m_hActivator = 0x8EC # CHandle<CBaseEntity>
    m_bTestOcclusion = 0x8F0 # bool
    m_OnTimeout = 0x8F8 # CEntityIOOutput
    m_OnStartLook = 0x920 # CEntityIOOutput
    m_OnEndLook = 0x948 # CEntityIOOutput

class CTriggerMultiple: # CBaseTrigger
    m_OnTrigger = 0x8A8 # CEntityIOOutput

class CTriggerOnce: # CTriggerMultiple

class CTriggerPhysics: # CBaseTrigger
    m_gravityScale = 0x8B8 # float
    m_linearLimit = 0x8BC # float
    m_linearDamping = 0x8C0 # float
    m_angularLimit = 0x8C4 # float
    m_angularDamping = 0x8C8 # float
    m_linearForce = 0x8CC # float
    m_flFrequency = 0x8D0 # float
    m_flDampingRatio = 0x8D4 # float
    m_vecLinearForcePointAt = 0x8D8 # Vector
    m_bCollapseToForcePoint = 0x8E4 # bool
    m_vecLinearForcePointAtWorld = 0x8E8 # Vector
    m_vecLinearForceDirection = 0x8F4 # Vector
    m_bConvertToDebrisWhenPossible = 0x900 # bool

class CTriggerProximity: # CBaseTrigger
    m_hMeasureTarget = 0x8A8 # CHandle<CBaseEntity>
    m_iszMeasureTarget = 0x8B0 # CUtlSymbolLarge
    m_fRadius = 0x8B8 # float
    m_nTouchers = 0x8BC # int32_t
    m_NearestEntityDistance = 0x8C0 # CEntityOutputTemplate<float>

class CTriggerPush: # CBaseTrigger
    m_angPushEntitySpace = 0x8A8 # QAngle
    m_vecPushDirEntitySpace = 0x8B4 # Vector
    m_bTriggerOnStartTouch = 0x8C0 # bool
    m_flAlternateTicksFix = 0x8C4 # float
    m_flPushSpeed = 0x8C8 # float

class CTriggerRemove: # CBaseTrigger
    m_OnRemove = 0x8A8 # CEntityIOOutput

class CTriggerSave: # CBaseTrigger
    m_bForceNewLevelUnit = 0x8A8 # bool
    m_fDangerousTimer = 0x8AC # float
    m_minHitPoints = 0x8B0 # int32_t

class CTriggerSndSosOpvar: # CBaseTrigger
    m_hTouchingPlayers = 0x8A8 # CUtlVector<CHandle<CBaseEntity>>
    m_flPosition = 0x8C0 # Vector
    m_flCenterSize = 0x8CC # float
    m_flMinVal = 0x8D0 # float
    m_flMaxVal = 0x8D4 # float
    m_flWait = 0x8D8 # float
    m_opvarName = 0x8E0 # CUtlSymbolLarge
    m_stackName = 0x8E8 # CUtlSymbolLarge
    m_operatorName = 0x8F0 # CUtlSymbolLarge
    m_bVolIs2D = 0x8F8 # bool
    m_opvarNameChar = 0x8F9 # char[256]
    m_stackNameChar = 0x9F9 # char[256]
    m_operatorNameChar = 0xAF9 # char[256]
    m_VecNormPos = 0xBFC # Vector
    m_flNormCenterSize = 0xC08 # float

class CTriggerSoundscape: # CBaseTrigger
    m_hSoundscape = 0x8A8 # CHandle<CEnvSoundscapeTriggerable>
    m_SoundscapeName = 0x8B0 # CUtlSymbolLarge
    m_spectators = 0x8B8 # CUtlVector<CHandle<CBasePlayerPawn>>

class CTriggerTeleport: # CBaseTrigger
    m_iLandmark = 0x8A8 # CUtlSymbolLarge
    m_bUseLandmarkAngles = 0x8B0 # bool
    m_bMirrorPlayer = 0x8B1 # bool

class CTriggerToggleSave: # CBaseTrigger
    m_bDisabled = 0x8A8 # bool

class CTriggerTripWire: # CBaseTrigger

class CTriggerVolume: # CBaseModelEntity
    m_iFilterName = 0x700 # CUtlSymbolLarge
    m_hFilter = 0x708 # CHandle<CBaseFilter>

class CTripWireFire: # CBaseCSGrenade

class CTripWireFireProjectile: # CBaseGrenade

class CVoteController: # CBaseEntity
    m_iActiveIssueIndex = 0x4B0 # int32_t
    m_iOnlyTeamToVote = 0x4B4 # int32_t
    m_nVoteOptionCount = 0x4B8 # int32_t[5]
    m_nPotentialVotes = 0x4CC # int32_t
    m_bIsYesNoVote = 0x4D0 # bool
    m_acceptingVotesTimer = 0x4D8 # CountdownTimer
    m_executeCommandTimer = 0x4F0 # CountdownTimer
    m_resetVoteTimer = 0x508 # CountdownTimer
    m_nVotesCast = 0x520 # int32_t[64]
    m_playerHoldingVote = 0x620 # CPlayerSlot
    m_playerOverrideForVote = 0x624 # CPlayerSlot
    m_nHighestCountIndex = 0x628 # int32_t
    m_potentialIssues = 0x630 # CUtlVector<CBaseIssue*>
    m_VoteOptions = 0x648 # CUtlVector<char*>

class CWaterBullet: # CBaseAnimGraph

class CWeaponAWP: # CCSWeaponBaseGun

class CWeaponAug: # CCSWeaponBaseGun

class CWeaponBaseItem: # CCSWeaponBase
    m_SequenceCompleteTimer = 0xE30 # CountdownTimer
    m_bRedraw = 0xE48 # bool

class CWeaponBizon: # CCSWeaponBaseGun

class CWeaponCZ75a: # CCSWeaponBaseGun

class CWeaponElite: # CCSWeaponBaseGun

class CWeaponFamas: # CCSWeaponBaseGun

class CWeaponFiveSeven: # CCSWeaponBaseGun

class CWeaponG3SG1: # CCSWeaponBaseGun

class CWeaponGalilAR: # CCSWeaponBaseGun

class CWeaponGlock: # CCSWeaponBaseGun

class CWeaponHKP2000: # CCSWeaponBaseGun

class CWeaponM249: # CCSWeaponBaseGun

class CWeaponM4A1: # CCSWeaponBaseGun

class CWeaponM4A1Silencer: # CCSWeaponBaseGun

class CWeaponMAC10: # CCSWeaponBaseGun

class CWeaponMP5SD: # CCSWeaponBaseGun

class CWeaponMP7: # CCSWeaponBaseGun

class CWeaponMP9: # CCSWeaponBaseGun

class CWeaponMag7: # CCSWeaponBaseGun

class CWeaponNOVA: # CCSWeaponBase

class CWeaponNegev: # CCSWeaponBaseGun

class CWeaponP250: # CCSWeaponBaseGun

class CWeaponP90: # CCSWeaponBaseGun

class CWeaponRevolver: # CCSWeaponBaseGun

class CWeaponSCAR20: # CCSWeaponBaseGun

class CWeaponSG556: # CCSWeaponBaseGun

class CWeaponSSG08: # CCSWeaponBaseGun

class CWeaponSawedoff: # CCSWeaponBase

class CWeaponShield: # CCSWeaponBaseGun
    m_flBulletDamageAbsorbed = 0xE50 # float
    m_flLastBulletHitSoundTime = 0xE54 # GameTime_t
    m_flDisplayHealth = 0xE58 # float

class CWeaponTaser: # CCSWeaponBaseGun
    m_fFireTime = 0xE50 # GameTime_t

class CWeaponTec9: # CCSWeaponBaseGun

class CWeaponUMP45: # CCSWeaponBaseGun

class CWeaponUSPSilencer: # CCSWeaponBaseGun

class CWeaponXM1014: # CCSWeaponBase

class CWeaponZoneRepulsor: # CCSWeaponBaseGun

class CWorld: # CBaseModelEntity

class CommandToolCommand_t:
    m_bEnabled = 0x0 # bool
    m_bOpened = 0x1 # bool
    m_InternalId = 0x4 # uint32_t
    m_ShortName = 0x8 # CUtlString
    m_ExecMode = 0x10 # CommandExecMode_t
    m_SpawnGroup = 0x18 # CUtlString
    m_PeriodicExecDelay = 0x20 # float
    m_SpecType = 0x24 # CommandEntitySpecType_t
    m_EntitySpec = 0x28 # CUtlString
    m_Commands = 0x30 # CUtlString
    m_SetDebugBits = 0x38 # DebugOverlayBits_t
    m_ClearDebugBits = 0x40 # DebugOverlayBits_t

class ConceptHistory_t:
    timeSpoken = 0x0 # float
    m_response = 0x8 # CRR_Response

class ConstraintSoundInfo:
    m_vSampler = 0x8 # VelocitySampler
    m_soundProfile = 0x20 # SimpleConstraintSoundProfile
    m_forwardAxis = 0x40 # Vector
    m_iszTravelSoundFwd = 0x50 # CUtlSymbolLarge
    m_iszTravelSoundBack = 0x58 # CUtlSymbolLarge
    m_iszReversalSounds = 0x68 # CUtlSymbolLarge[3]
    m_bPlayTravelSound = 0x80 # bool
    m_bPlayReversalSound = 0x81 # bool

class CountdownTimer:
    m_duration = 0x8 # float
    m_timestamp = 0xC # GameTime_t
    m_timescale = 0x10 # float
    m_nWorldGroupId = 0x14 # WorldGroupId_t

class EngineCountdownTimer:
    m_duration = 0x8 # float
    m_timestamp = 0xC # float
    m_timescale = 0x10 # float

class EntityRenderAttribute_t:
    m_ID = 0x30 # CUtlStringToken
    m_Values = 0x34 # Vector4D

class EntitySpottedState_t:
    m_bSpotted = 0x8 # bool
    m_bSpottedByMask = 0xC # uint32_t[2]

class Extent:
    lo = 0x0 # Vector
    hi = 0xC # Vector

class FilterDamageType: # CBaseFilter
    m_iDamageType = 0x508 # int32_t

class FilterHealth: # CBaseFilter
    m_bAdrenalineActive = 0x508 # bool
    m_iHealthMin = 0x50C # int32_t
    m_iHealthMax = 0x510 # int32_t

class FilterTeam: # CBaseFilter
    m_iFilterTeam = 0x508 # int32_t

class GameAmmoTypeInfo_t: # AmmoTypeInfo_t
    m_nBuySize = 0x38 # int32_t
    m_nCost = 0x3C # int32_t

class GameTick_t:
    m_Value = 0x0 # int32_t

class GameTime_t:
    m_Value = 0x0 # float

class HullFlags_t:
    m_bHull_Human = 0x0 # bool
    m_bHull_SmallCentered = 0x1 # bool
    m_bHull_WideHuman = 0x2 # bool
    m_bHull_Tiny = 0x3 # bool
    m_bHull_Medium = 0x4 # bool
    m_bHull_TinyCentered = 0x5 # bool
    m_bHull_Large = 0x6 # bool
    m_bHull_LargeCentered = 0x7 # bool
    m_bHull_MediumTall = 0x8 # bool
    m_bHull_Small = 0x9 # bool

class IChoreoServices:

class IEconItemInterface:

class IHasAttributes:

class IRagdoll:

class ISkeletonAnimationController:

class IVehicle:

class IntervalTimer:
    m_timestamp = 0x8 # GameTime_t
    m_nWorldGroupId = 0xC # WorldGroupId_t

class ModelConfigHandle_t:
    m_Value = 0x0 # uint32_t

class ParticleIndex_t:
    m_Value = 0x0 # int32_t

class PhysicsRagdollPose_t:
    __m_pChainEntity = 0x8 # CNetworkVarChainer
    m_Transforms = 0x30 # CNetworkUtlVectorBase<CTransform>
    m_hOwner = 0x48 # CHandle<CBaseEntity>

class QuestProgress:

class RagdollCreationParams_t:
    m_vForce = 0x0 # Vector
    m_nForceBone = 0xC # int32_t

class RelationshipOverride_t: # Relationship_t
    entity = 0x8 # CHandle<CBaseEntity>
    classType = 0xC # Class_T

class Relationship_t:
    disposition = 0x0 # Disposition_t
    priority = 0x4 # int32_t

class ResponseContext_t:
    m_iszName = 0x0 # CUtlSymbolLarge
    m_iszValue = 0x8 # CUtlSymbolLarge
    m_fExpirationTime = 0x10 # GameTime_t

class ResponseFollowup:
    followup_concept = 0x0 # char*
    followup_contexts = 0x8 # char*
    followup_delay = 0x10 # float
    followup_target = 0x14 # char*
    followup_entityiotarget = 0x1C # char*
    followup_entityioinput = 0x24 # char*
    followup_entityiodelay = 0x2C # float
    bFired = 0x30 # bool

class ResponseParams:
    odds = 0x10 # int16_t
    flags = 0x12 # int16_t
    m_pFollowup = 0x18 # ResponseFollowup*

class SellbackPurchaseEntry_t:
    m_unDefIdx = 0x30 # uint16_t
    m_nCost = 0x34 # int32_t
    m_nPrevArmor = 0x38 # int32_t
    m_bPrevHelmet = 0x3C # bool
    m_hItem = 0x40 # CEntityHandle

class ServerAuthoritativeWeaponSlot_t:
    unClass = 0x28 # uint16_t
    unSlot = 0x2A # uint16_t
    unItemDefIdx = 0x2C # uint16_t

class SimpleConstraintSoundProfile:
    eKeypoints = 0x8 # SimpleConstraintSoundProfile::SimpleConstraintsSoundProfileKeypoints_t
    m_keyPoints = 0xC # float[2]
    m_reversalSoundThresholds = 0x14 # float[3]

class SpawnPoint: # CServerOnlyPointEntity
    m_iPriority = 0x4B0 # int32_t
    m_bEnabled = 0x4B4 # bool
    m_nType = 0x4B8 # int32_t

class SpawnPointCoopEnemy: # SpawnPoint
    m_szWeaponsToGive = 0x4C0 # CUtlSymbolLarge
    m_szPlayerModelToUse = 0x4C8 # CUtlSymbolLarge
    m_nArmorToSpawnWith = 0x4D0 # int32_t
    m_nDefaultBehavior = 0x4D4 # SpawnPointCoopEnemy::BotDefaultBehavior_t
    m_nBotDifficulty = 0x4D8 # int32_t
    m_bIsAgressive = 0x4DC # bool
    m_bStartAsleep = 0x4DD # bool
    m_flHideRadius = 0x4E0 # float
    m_szBehaviorTreeFile = 0x4F0 # CUtlSymbolLarge

class SummaryTakeDamageInfo_t:
    nSummarisedCount = 0x0 # int32_t
    info = 0x8 # CTakeDamageInfo
    result = 0xA0 # CTakeDamageResult
    hTarget = 0xA8 # CHandle<CBaseEntity>

class VPhysicsCollisionAttribute_t:
    m_nInteractsAs = 0x8 # uint64_t
    m_nInteractsWith = 0x10 # uint64_t
    m_nInteractsExclude = 0x18 # uint64_t
    m_nEntityId = 0x20 # uint32_t
    m_nOwnerId = 0x24 # uint32_t
    m_nHierarchyId = 0x28 # uint16_t
    m_nCollisionGroup = 0x2A # uint8_t
    m_nCollisionFunctionMask = 0x2B # uint8_t

class VelocitySampler:
    m_prevSample = 0x0 # Vector
    m_fPrevSampleTime = 0xC # GameTime_t
    m_fIdealSampleRate = 0x10 # float

class ViewAngleServerChange_t:
    nType = 0x30 # FixAngleSet_t
    qAngle = 0x34 # QAngle
    nIndex = 0x40 # uint32_t

class WeaponPurchaseCount_t:
    m_nItemDefIndex = 0x30 # uint16_t
    m_nCount = 0x32 # uint16_t

class WeaponPurchaseTracker_t:
    m_weaponPurchases = 0x8 # CUtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>

class audioparams_t:
    localSound = 0x8 # Vector[8]
    soundscapeIndex = 0x68 # int32_t
    localBits = 0x6C # uint8_t
    soundscapeEntityListIndex = 0x70 # int32_t
    soundEventHash = 0x74 # uint32_t

class dynpitchvol_base_t:
    preset = 0x0 # int32_t
    pitchrun = 0x4 # int32_t
    pitchstart = 0x8 # int32_t
    spinup = 0xC # int32_t
    spindown = 0x10 # int32_t
    volrun = 0x14 # int32_t
    volstart = 0x18 # int32_t
    fadein = 0x1C # int32_t
    fadeout = 0x20 # int32_t
    lfotype = 0x24 # int32_t
    lforate = 0x28 # int32_t
    lfomodpitch = 0x2C # int32_t
    lfomodvol = 0x30 # int32_t
    cspinup = 0x34 # int32_t
    cspincount = 0x38 # int32_t
    pitch = 0x3C # int32_t
    spinupsav = 0x40 # int32_t
    spindownsav = 0x44 # int32_t
    pitchfrac = 0x48 # int32_t
    vol = 0x4C # int32_t
    fadeinsav = 0x50 # int32_t
    fadeoutsav = 0x54 # int32_t
    volfrac = 0x58 # int32_t
    lfofrac = 0x5C # int32_t
    lfomult = 0x60 # int32_t

class dynpitchvol_t: # dynpitchvol_base_t

class fogparams_t:
    dirPrimary = 0x8 # Vector
    colorPrimary = 0x14 # Color
    colorSecondary = 0x18 # Color
    colorPrimaryLerpTo = 0x1C # Color
    colorSecondaryLerpTo = 0x20 # Color
    start = 0x24 # float
    end = 0x28 # float
    farz = 0x2C # float
    maxdensity = 0x30 # float
    exponent = 0x34 # float
    HDRColorScale = 0x38 # float
    skyboxFogFactor = 0x3C # float
    skyboxFogFactorLerpTo = 0x40 # float
    startLerpTo = 0x44 # float
    endLerpTo = 0x48 # float
    maxdensityLerpTo = 0x4C # float
    lerptime = 0x50 # GameTime_t
    duration = 0x54 # float
    blendtobackground = 0x58 # float
    scattering = 0x5C # float
    locallightscale = 0x60 # float
    enable = 0x64 # bool
    blend = 0x65 # bool
    m_bNoReflectionFog = 0x66 # bool
    m_bPadding = 0x67 # bool

class fogplayerparams_t:
    m_hCtrl = 0x8 # CHandle<CFogController>
    m_flTransitionTime = 0xC # float
    m_OldColor = 0x10 # Color
    m_flOldStart = 0x14 # float
    m_flOldEnd = 0x18 # float
    m_flOldMaxDensity = 0x1C # float
    m_flOldHDRColorScale = 0x20 # float
    m_flOldFarZ = 0x24 # float
    m_NewColor = 0x28 # Color
    m_flNewStart = 0x2C # float
    m_flNewEnd = 0x30 # float
    m_flNewMaxDensity = 0x34 # float
    m_flNewHDRColorScale = 0x38 # float
    m_flNewFarZ = 0x3C # float

class hudtextparms_t:
    color1 = 0x0 # Color
    color2 = 0x4 # Color
    effect = 0x8 # uint8_t
    channel = 0x9 # uint8_t
    x = 0xC # float
    y = 0x10 # float

class lerpdata_t:
    m_hEnt = 0x0 # CHandle<CBaseEntity>
    m_MoveType = 0x4 # MoveType_t
    m_flStartTime = 0x8 # GameTime_t
    m_vecStartOrigin = 0xC # Vector
    m_qStartRot = 0x20 # Quaternion
    m_nFXIndex = 0x30 # ParticleIndex_t

class locksound_t:
    sLockedSound = 0x8 # CUtlSymbolLarge
    sUnlockedSound = 0x10 # CUtlSymbolLarge
    flwaitSound = 0x18 # GameTime_t

class magnetted_objects_t:
    hEntity = 0x8 # CHandle<CBaseEntity>

class ragdoll_t:
    list = 0x0 # CUtlVector<ragdollelement_t>
    boneIndex = 0x18 # CUtlVector<int32_t>
    allowStretch = 0x30 # bool
    unused = 0x31 # bool

class ragdollelement_t:
    originParentSpace = 0x0 # Vector
    parentIndex = 0x20 # int32_t
    m_flRadius = 0x24 # float

class shard_model_desc_t:
    m_nModelID = 0x8 # int32_t
    m_hMaterial = 0x10 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_solid = 0x18 # ShardSolid_t
    m_ShatterPanelMode = 0x19 # ShatterPanelMode
    m_vecPanelSize = 0x1C # Vector2D
    m_vecStressPositionA = 0x24 # Vector2D
    m_vecStressPositionB = 0x2C # Vector2D
    m_vecPanelVertices = 0x38 # CNetworkUtlVectorBase<Vector2D>
    m_flGlassHalfThickness = 0x50 # float
    m_bHasParent = 0x54 # bool
    m_bParentFrozen = 0x55 # bool
    m_SurfacePropStringToken = 0x58 # CUtlStringToken

class sky3dparams_t:
    scale = 0x8 # int16_t
    origin = 0xC # Vector
    bClip3DSkyBoxNearToWorldFar = 0x18 # bool
    flClip3DSkyBoxNearToWorldFarOffset = 0x1C # float
    fog = 0x20 # fogparams_t
    m_nWorldGroupID = 0x88 # WorldGroupId_t

class thinkfunc_t:
    m_hFn = 0x8 # HSCRIPT
    m_nContext = 0x10 # CUtlStringToken
    m_nNextThinkTick = 0x14 # GameTick_t
    m_nLastThinkTick = 0x18 # GameTick_t
