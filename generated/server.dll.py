'''
Generated using https://github.com/a2x/cs2-dumper
Sat, 23 Mar 2024 05:02:04 +0000
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

class CAISound: # CPointEntity
    m_iSoundType = 0x4C0 # int32_t
    m_iSoundContext = 0x4C4 # int32_t
    m_iVolume = 0x4C8 # int32_t
    m_iSoundIndex = 0x4CC # int32_t
    m_flDuration = 0x4D0 # float
    m_iszProxyEntityName = 0x4D8 # CUtlSymbolLarge

class CAI_ChangeHintGroup: # CBaseEntity
    m_iSearchType = 0x4C0 # int32_t
    m_strSearchName = 0x4C8 # CUtlSymbolLarge
    m_strNewHintGroup = 0x4D0 # CUtlSymbolLarge
    m_flRadius = 0x4D8 # float

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
    m_radius = 0x4C0 # float
    m_flMaxRadius = 0x4C4 # float
    m_iSoundLevel = 0x4C8 # soundlevel_t
    m_dpv = 0x4CC # dynpitchvol_t
    m_fActive = 0x530 # bool
    m_fLooping = 0x531 # bool
    m_iszSound = 0x538 # CUtlSymbolLarge
    m_sSourceEntName = 0x540 # CUtlSymbolLarge
    m_hSoundSource = 0x548 # CHandle<CBaseEntity>
    m_nSoundSourceEntIndex = 0x54C # CEntityIndex

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
    m_PredNetGlobalSymbolVariables = 0xE0 # CNetworkUtlVectorBase<CGlobalSymbol>
    m_OwnerOnlyPredNetBoolVariables = 0xF8 # CNetworkUtlVectorBase<uint32_t>
    m_OwnerOnlyPredNetByteVariables = 0x110 # CNetworkUtlVectorBase<uint8_t>
    m_OwnerOnlyPredNetUInt16Variables = 0x128 # CNetworkUtlVectorBase<uint16_t>
    m_OwnerOnlyPredNetIntVariables = 0x140 # CNetworkUtlVectorBase<int32_t>
    m_OwnerOnlyPredNetUInt32Variables = 0x158 # CNetworkUtlVectorBase<uint32_t>
    m_OwnerOnlyPredNetUInt64Variables = 0x170 # CNetworkUtlVectorBase<uint64_t>
    m_OwnerOnlyPredNetFloatVariables = 0x188 # CNetworkUtlVectorBase<float>
    m_OwnerOnlyPredNetVectorVariables = 0x1A0 # CNetworkUtlVectorBase<Vector>
    m_OwnerOnlyPredNetQuaternionVariables = 0x1B8 # CNetworkUtlVectorBase<Quaternion>
    m_OwnerOnlyPredNetGlobalSymbolVariables = 0x1D0 # CNetworkUtlVectorBase<CGlobalSymbol>
    m_nBoolVariablesCount = 0x1E8 # int32_t
    m_nOwnerOnlyBoolVariablesCount = 0x1EC # int32_t
    m_nRandomSeedOffset = 0x1F0 # int32_t
    m_flLastTeleportTime = 0x1F4 # float

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
    m_bEnabled = 0x710 # bool
    m_nColorMode = 0x714 # int32_t
    m_Color = 0x718 # Color
    m_flColorTemperature = 0x71C # float
    m_flBrightness = 0x720 # float
    m_flBrightnessScale = 0x724 # float
    m_nDirectLight = 0x728 # int32_t
    m_nBakedShadowIndex = 0x72C # int32_t
    m_nLuminaireShape = 0x730 # int32_t
    m_flLuminaireSize = 0x734 # float
    m_flLuminaireAnisotropy = 0x738 # float
    m_LightStyleString = 0x740 # CUtlString
    m_flLightStyleStartTime = 0x748 # GameTime_t
    m_QueuedLightStyleStrings = 0x750 # CNetworkUtlVectorBase<CUtlString>
    m_LightStyleEvents = 0x768 # CNetworkUtlVectorBase<CUtlString>
    m_LightStyleTargets = 0x780 # CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    m_StyleEvent = 0x798 # CEntityIOOutput[4]
    m_hLightCookie = 0x858 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_flShape = 0x860 # float
    m_flSoftX = 0x864 # float
    m_flSoftY = 0x868 # float
    m_flSkirt = 0x86C # float
    m_flSkirtNear = 0x870 # float
    m_vSizeParams = 0x874 # Vector
    m_flRange = 0x880 # float
    m_vShear = 0x884 # Vector
    m_nBakeSpecularToCubemaps = 0x890 # int32_t
    m_vBakeSpecularToCubemapsSize = 0x894 # Vector
    m_nCastShadows = 0x8A0 # int32_t
    m_nShadowMapSize = 0x8A4 # int32_t
    m_nShadowPriority = 0x8A8 # int32_t
    m_bContactShadow = 0x8AC # bool
    m_nBounceLight = 0x8B0 # int32_t
    m_flBounceScale = 0x8B4 # float
    m_flMinRoughness = 0x8B8 # float
    m_vAlternateColor = 0x8BC # Vector
    m_fAlternateColorBrightness = 0x8C8 # float
    m_nFog = 0x8CC # int32_t
    m_flFogStrength = 0x8D0 # float
    m_nFogShadows = 0x8D4 # int32_t
    m_flFogScale = 0x8D8 # float
    m_flFadeSizeStart = 0x8DC # float
    m_flFadeSizeEnd = 0x8E0 # float
    m_flShadowFadeSizeStart = 0x8E4 # float
    m_flShadowFadeSizeEnd = 0x8E8 # float
    m_bPrecomputedFieldsValid = 0x8EC # bool
    m_vPrecomputedBoundsMins = 0x8F0 # Vector
    m_vPrecomputedBoundsMaxs = 0x8FC # Vector
    m_vPrecomputedOBBOrigin = 0x908 # Vector
    m_vPrecomputedOBBAngles = 0x914 # QAngle
    m_vPrecomputedOBBExtent = 0x920 # Vector
    m_bPvsModifyEntity = 0x92C # bool

class CBaseAnimGraph: # CBaseModelEntity
    m_bInitiallyPopulateInterpHistory = 0x788 # bool
    m_pChoreoServices = 0x790 # IChoreoServices*
    m_bAnimGraphUpdateEnabled = 0x798 # bool
    m_flMaxSlopeDistance = 0x79C # float
    m_vLastSlopeCheckPos = 0x7A0 # Vector
    m_bAnimationUpdateScheduled = 0x7AC # bool
    m_vecForce = 0x7B0 # Vector
    m_nForceBone = 0x7BC # int32_t
    m_pRagdollPose = 0x7D0 # PhysicsRagdollPose_t*
    m_bClientRagdoll = 0x7D8 # bool

class CBaseAnimGraphController: # CSkeletonAnimationController
    m_animGraphNetworkedVars = 0x18 # CAnimGraphNetworkedVariables
    m_bSequenceFinished = 0x220 # bool
    m_flSoundSyncTime = 0x224 # float
    m_hSequence = 0x228 # HSequence
    m_flSeqStartTime = 0x22C # GameTime_t
    m_flSeqFixedCycle = 0x230 # float
    m_nAnimLoopMode = 0x234 # AnimLoopMode_t
    m_flPlaybackRate = 0x238 # CNetworkedQuantizedFloat
    m_nNotifyState = 0x244 # SequenceFinishNotifyState_t
    m_bNetworkedAnimationInputsChanged = 0x246 # bool
    m_bNetworkedSequenceChanged = 0x247 # bool
    m_bLastUpdateSkipped = 0x248 # bool
    m_flPrevAnimUpdateTime = 0x24C # GameTime_t

class CBaseButton: # CBaseToggle
    m_angMoveEntitySpace = 0x790 # QAngle
    m_fStayPushed = 0x79C # bool
    m_fRotating = 0x79D # bool
    m_ls = 0x7A0 # locksound_t
    m_sUseSound = 0x7C0 # CUtlSymbolLarge
    m_sLockedSound = 0x7C8 # CUtlSymbolLarge
    m_sUnlockedSound = 0x7D0 # CUtlSymbolLarge
    m_bLocked = 0x7D8 # bool
    m_bDisabled = 0x7D9 # bool
    m_flUseLockedTime = 0x7DC # GameTime_t
    m_bSolidBsp = 0x7E0 # bool
    m_OnDamaged = 0x7E8 # CEntityIOOutput
    m_OnPressed = 0x810 # CEntityIOOutput
    m_OnUseLocked = 0x838 # CEntityIOOutput
    m_OnIn = 0x860 # CEntityIOOutput
    m_OnOut = 0x888 # CEntityIOOutput
    m_nState = 0x8B0 # int32_t
    m_hConstraint = 0x8B4 # CEntityHandle
    m_hConstraintParent = 0x8B8 # CEntityHandle
    m_bForceNpcExclude = 0x8BC # bool
    m_sGlowEntity = 0x8C0 # CUtlSymbolLarge
    m_glowEntity = 0x8C8 # CHandle<CBaseModelEntity>
    m_usable = 0x8CC # bool
    m_szDisplayText = 0x8D0 # CUtlSymbolLarge

class CBaseCSGrenade: # CCSWeaponBase
    m_bRedraw = 0xE90 # bool
    m_bIsHeldByPlayer = 0xE91 # bool
    m_bPinPulled = 0xE92 # bool
    m_bJumpThrow = 0xE93 # bool
    m_bThrowAnimating = 0xE94 # bool
    m_fThrowTime = 0xE98 # GameTime_t
    m_flThrowStrength = 0xE9C # float
    m_flThrowStrengthApproach = 0xEA0 # float
    m_fDropTime = 0xEA4 # GameTime_t
    m_bJustPulledPin = 0xEA8 # bool
    m_nNextHoldTick = 0xEAC # GameTick_t
    m_flNextHoldFrac = 0xEB0 # float
    m_hSwitchToWeaponAfterThrow = 0xEB4 # CHandle<CCSWeaponBase>

class CBaseCSGrenadeProjectile: # CBaseGrenade
    m_vInitialPosition = 0xA20 # Vector
    m_vInitialVelocity = 0xA2C # Vector
    m_nBounces = 0xA38 # int32_t
    m_nExplodeEffectIndex = 0xA40 # CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_nExplodeEffectTickBegin = 0xA48 # int32_t
    m_vecExplodeEffectOrigin = 0xA4C # Vector
    m_flSpawnTime = 0xA58 # GameTime_t
    m_unOGSExtraFlags = 0xA5C # uint8_t
    m_bDetonationRecorded = 0xA5D # bool
    m_flDetonateTime = 0xA60 # GameTime_t
    m_nItemIndex = 0xA64 # uint16_t
    m_vecOriginalSpawnLocation = 0xA68 # Vector
    m_flLastBounceSoundTime = 0xA74 # GameTime_t
    m_vecGrenadeSpin = 0xA78 # RotationVector
    m_vecLastHitSurfaceNormal = 0xA84 # Vector
    m_nTicksAtZeroVelocity = 0xA90 # int32_t
    m_bHasEverHitPlayer = 0xA94 # bool
    m_bClearFromPlayers = 0xA95 # bool

class CBaseClientUIEntity: # CBaseModelEntity
    m_bEnabled = 0x710 # bool
    m_DialogXMLName = 0x718 # CUtlSymbolLarge
    m_PanelClassName = 0x720 # CUtlSymbolLarge
    m_PanelID = 0x728 # CUtlSymbolLarge
    m_CustomOutput0 = 0x730 # CEntityIOOutput
    m_CustomOutput1 = 0x758 # CEntityIOOutput
    m_CustomOutput2 = 0x780 # CEntityIOOutput
    m_CustomOutput3 = 0x7A8 # CEntityIOOutput
    m_CustomOutput4 = 0x7D0 # CEntityIOOutput
    m_CustomOutput5 = 0x7F8 # CEntityIOOutput
    m_CustomOutput6 = 0x820 # CEntityIOOutput
    m_CustomOutput7 = 0x848 # CEntityIOOutput
    m_CustomOutput8 = 0x870 # CEntityIOOutput
    m_CustomOutput9 = 0x898 # CEntityIOOutput

class CBaseCombatCharacter: # CBaseFlex
    m_bForceServerRagdoll = 0x978 # bool
    m_hMyWearables = 0x980 # CNetworkUtlVectorBase<CHandle<CEconWearable>>
    m_flFieldOfView = 0x998 # float
    m_impactEnergyScale = 0x99C # float
    m_LastHitGroup = 0x9A0 # HitGroup_t
    m_bApplyStressDamage = 0x9A4 # bool
    m_bloodColor = 0x9A8 # int32_t
    m_iDamageCount = 0x9F0 # int32_t
    m_pVecRelationships = 0x9F8 # CUtlVector<RelationshipOverride_t>*
    m_strRelationships = 0xA00 # CUtlSymbolLarge
    m_eHull = 0xA08 # Hull_t
    m_nNavHullIdx = 0xA0C # uint32_t

class CBaseDMStart: # CPointEntity
    m_Master = 0x4C0 # CUtlSymbolLarge

class CBaseDoor: # CBaseToggle
    m_angMoveEntitySpace = 0x7A0 # QAngle
    m_vecMoveDirParentSpace = 0x7AC # Vector
    m_ls = 0x7B8 # locksound_t
    m_bForceClosed = 0x7D8 # bool
    m_bDoorGroup = 0x7D9 # bool
    m_bLocked = 0x7DA # bool
    m_bIgnoreDebris = 0x7DB # bool
    m_eSpawnPosition = 0x7DC # FuncDoorSpawnPos_t
    m_flBlockDamage = 0x7E0 # float
    m_NoiseMoving = 0x7E8 # CUtlSymbolLarge
    m_NoiseArrived = 0x7F0 # CUtlSymbolLarge
    m_NoiseMovingClosed = 0x7F8 # CUtlSymbolLarge
    m_NoiseArrivedClosed = 0x800 # CUtlSymbolLarge
    m_ChainTarget = 0x808 # CUtlSymbolLarge
    m_OnBlockedClosing = 0x810 # CEntityIOOutput
    m_OnBlockedOpening = 0x838 # CEntityIOOutput
    m_OnUnblockedClosing = 0x860 # CEntityIOOutput
    m_OnUnblockedOpening = 0x888 # CEntityIOOutput
    m_OnFullyClosed = 0x8B0 # CEntityIOOutput
    m_OnFullyOpen = 0x8D8 # CEntityIOOutput
    m_OnClose = 0x900 # CEntityIOOutput
    m_OnOpen = 0x928 # CEntityIOOutput
    m_OnLockedUse = 0x950 # CEntityIOOutput
    m_bLoopMoveSound = 0x978 # bool
    m_bCreateNavObstacle = 0x990 # bool
    m_isChaining = 0x991 # bool
    m_bIsUsable = 0x992 # bool

class CBaseEntity: # CEntityInstance
    m_CBodyComponent = 0x38 # CBodyComponent*
    m_NetworkTransmitComponent = 0x40 # CNetworkTransmitComponent
    m_aThinkFunctions = 0x230 # CUtlVector<thinkfunc_t>
    m_iCurrentThinkContext = 0x248 # int32_t
    m_nLastThinkTick = 0x24C # GameTick_t
    m_nDisableContextThinkStartTick = 0x250 # GameTick_t
    m_isSteadyState = 0x260 # CBitVec<64>
    m_lastNetworkChange = 0x268 # float
    m_ResponseContexts = 0x278 # CUtlVector<ResponseContext_t>
    m_iszResponseContext = 0x290 # CUtlSymbolLarge
    m_iHealth = 0x2B8 # int32_t
    m_iMaxHealth = 0x2BC # int32_t
    m_lifeState = 0x2C0 # uint8_t
    m_flDamageAccumulator = 0x2C4 # float
    m_bTakesDamage = 0x2C8 # bool
    m_nTakeDamageFlags = 0x2CC # TakeDamageFlags_t
    m_bIsPlatform = 0x2D0 # bool
    m_MoveCollide = 0x2D2 # MoveCollide_t
    m_MoveType = 0x2D3 # MoveType_t
    m_nActualMoveType = 0x2D4 # MoveType_t
    m_nWaterTouch = 0x2D5 # uint8_t
    m_nSlimeTouch = 0x2D6 # uint8_t
    m_bRestoreInHierarchy = 0x2D7 # bool
    m_target = 0x2D8 # CUtlSymbolLarge
    m_hDamageFilter = 0x2E0 # CHandle<CBaseFilter>
    m_iszDamageFilterName = 0x2E8 # CUtlSymbolLarge
    m_flMoveDoneTime = 0x2F0 # float
    m_nSubclassID = 0x2F4 # CUtlStringToken
    m_flAnimTime = 0x300 # float
    m_flSimulationTime = 0x304 # float
    m_flCreateTime = 0x308 # GameTime_t
    m_bClientSideRagdoll = 0x30C # bool
    m_ubInterpolationFrame = 0x30D # uint8_t
    m_vPrevVPhysicsUpdatePos = 0x310 # Vector
    m_iTeamNum = 0x31C # uint8_t
    m_iGlobalname = 0x320 # CUtlSymbolLarge
    m_iSentToClients = 0x328 # int32_t
    m_flSpeed = 0x32C # float
    m_sUniqueHammerID = 0x330 # CUtlString
    m_spawnflags = 0x338 # uint32_t
    m_nNextThinkTick = 0x33C # GameTick_t
    m_nSimulationTick = 0x340 # int32_t
    m_OnKilled = 0x348 # CEntityIOOutput
    m_fFlags = 0x370 # uint32_t
    m_vecAbsVelocity = 0x374 # Vector
    m_vecVelocity = 0x380 # CNetworkVelocityVector
    m_vecBaseVelocity = 0x3B0 # Vector
    m_nPushEnumCount = 0x3BC # int32_t
    m_pCollision = 0x3C0 # CCollisionProperty*
    m_hEffectEntity = 0x3C8 # CHandle<CBaseEntity>
    m_hOwnerEntity = 0x3CC # CHandle<CBaseEntity>
    m_fEffects = 0x3D0 # uint32_t
    m_hGroundEntity = 0x3D4 # CHandle<CBaseEntity>
    m_flFriction = 0x3D8 # float
    m_flElasticity = 0x3DC # float
    m_flGravityScale = 0x3E0 # float
    m_flTimeScale = 0x3E4 # float
    m_flWaterLevel = 0x3E8 # float
    m_bAnimatedEveryTick = 0x3EC # bool
    m_bDisableLowViolence = 0x3ED # bool
    m_nWaterType = 0x3EE # uint8_t
    m_iEFlags = 0x3F0 # int32_t
    m_OnUser1 = 0x3F8 # CEntityIOOutput
    m_OnUser2 = 0x420 # CEntityIOOutput
    m_OnUser3 = 0x448 # CEntityIOOutput
    m_OnUser4 = 0x470 # CEntityIOOutput
    m_iInitialTeamNum = 0x498 # int32_t
    m_flNavIgnoreUntilTime = 0x49C # GameTime_t
    m_vecAngVelocity = 0x4A0 # QAngle
    m_bNetworkQuantizeOriginAndAngles = 0x4AC # bool
    m_bLagCompensate = 0x4AD # bool
    m_flOverriddenFriction = 0x4B0 # float
    m_pBlocker = 0x4B4 # CHandle<CBaseEntity>
    m_flLocalTime = 0x4B8 # float
    m_flVPhysicsUpdateLocalTime = 0x4BC # float

class CBaseEntityAPI:

class CBaseFilter: # CLogicalEntity
    m_bNegated = 0x4C0 # bool
    m_OnPass = 0x4C8 # CEntityIOOutput
    m_OnFail = 0x4F0 # CEntityIOOutput

class CBaseFire: # CBaseEntity
    m_flScale = 0x4C0 # float
    m_flStartScale = 0x4C4 # float
    m_flScaleTime = 0x4C8 # float
    m_nFlags = 0x4CC # uint32_t

class CBaseFlex: # CBaseAnimGraph
    m_flexWeight = 0x8E8 # CNetworkUtlVectorBase<float>
    m_vLookTargetPosition = 0x900 # Vector
    m_blinktoggle = 0x90C # bool
    m_flAllowResponsesEndTime = 0x960 # GameTime_t
    m_flLastFlexAnimationTime = 0x964 # GameTime_t
    m_nNextSceneEventId = 0x968 # uint32_t
    m_bUpdateLayerPriorities = 0x96C # bool

class CBaseFlexAlias_funCBaseFlex: # CBaseFlex

class CBaseGrenade: # CBaseFlex
    m_OnPlayerPickup = 0x980 # CEntityIOOutput
    m_OnExplode = 0x9A8 # CEntityIOOutput
    m_bHasWarnedAI = 0x9D0 # bool
    m_bIsSmokeGrenade = 0x9D1 # bool
    m_bIsLive = 0x9D2 # bool
    m_DmgRadius = 0x9D4 # float
    m_flDetonateTime = 0x9D8 # GameTime_t
    m_flWarnAITime = 0x9DC # float
    m_flDamage = 0x9E0 # float
    m_iszBounceSound = 0x9E8 # CUtlSymbolLarge
    m_ExplosionSound = 0x9F0 # CUtlString
    m_hThrower = 0x9FC # CHandle<CCSPlayerPawn>
    m_flNextAttack = 0xA14 # GameTime_t
    m_hOriginalThrower = 0xA18 # CHandle<CCSPlayerPawn>

class CBaseIssue:
    m_szTypeString = 0x20 # char[64]
    m_szDetailsString = 0x60 # char[260]
    m_iNumYesVotes = 0x164 # int32_t
    m_iNumNoVotes = 0x168 # int32_t
    m_iNumPotentialVotes = 0x16C # int32_t
    m_pVoteController = 0x170 # CVoteController*

class CBaseModelEntity: # CBaseEntity
    m_CRenderComponent = 0x4C0 # CRenderComponent*
    m_CHitboxComponent = 0x4C8 # CHitboxComponent
    m_flDissolveStartTime = 0x4F0 # GameTime_t
    m_OnIgnite = 0x4F8 # CEntityIOOutput
    m_nRenderMode = 0x520 # RenderMode_t
    m_nRenderFX = 0x521 # RenderFx_t
    m_bAllowFadeInView = 0x522 # bool
    m_clrRender = 0x523 # Color
    m_vecRenderAttributes = 0x528 # CUtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
    m_bRenderToCubemaps = 0x578 # bool
    m_Collision = 0x580 # CCollisionProperty
    m_Glow = 0x630 # CGlowProperty
    m_flGlowBackfaceMult = 0x688 # float
    m_fadeMinDist = 0x68C # float
    m_fadeMaxDist = 0x690 # float
    m_flFadeScale = 0x694 # float
    m_flShadowStrength = 0x698 # float
    m_nObjectCulling = 0x69C # uint8_t
    m_nAddDecal = 0x6A0 # int32_t
    m_vDecalPosition = 0x6A4 # Vector
    m_vDecalForwardAxis = 0x6B0 # Vector
    m_flDecalHealBloodRate = 0x6BC # float
    m_flDecalHealHeightRate = 0x6C0 # float
    m_ConfigEntitiesToPropagateMaterialDecalsTo = 0x6C8 # CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    m_vecViewOffset = 0x6E0 # CNetworkViewOffsetVector

class CBaseMoveBehavior: # CPathKeyFrame
    m_iPositionInterpolator = 0x520 # int32_t
    m_iRotationInterpolator = 0x524 # int32_t
    m_flAnimStartTime = 0x528 # float
    m_flAnimEndTime = 0x52C # float
    m_flAverageSpeedAcrossFrame = 0x530 # float
    m_pCurrentKeyFrame = 0x538 # CPathKeyFrame*
    m_pTargetKeyFrame = 0x540 # CPathKeyFrame*
    m_pPreKeyFrame = 0x548 # CPathKeyFrame*
    m_pPostKeyFrame = 0x550 # CPathKeyFrame*
    m_flTimeIntoFrame = 0x558 # float
    m_iDirection = 0x55C # int32_t

class CBasePlatTrain: # CBaseToggle
    m_NoiseMoving = 0x790 # CUtlSymbolLarge
    m_NoiseArrived = 0x798 # CUtlSymbolLarge
    m_volume = 0x7A8 # float
    m_flTWidth = 0x7AC # float
    m_flTLength = 0x7B0 # float

class CBasePlayerController: # CBaseEntity
    m_nInButtonsWhichAreToggles = 0x4C8 # uint64_t
    m_nTickBase = 0x4D0 # uint32_t
    m_hPawn = 0x500 # CHandle<CBasePlayerPawn>
    m_nSplitScreenSlot = 0x504 # CSplitScreenSlot
    m_hSplitOwner = 0x508 # CHandle<CBasePlayerController>
    m_hSplitScreenPlayers = 0x510 # CUtlVector<CHandle<CBasePlayerController>>
    m_bIsHLTV = 0x528 # bool
    m_iConnected = 0x52C # PlayerConnectedState
    m_iszPlayerName = 0x530 # char[128]
    m_szNetworkIDString = 0x5B0 # CUtlString
    m_fLerpTime = 0x5B8 # float
    m_bLagCompensation = 0x5BC # bool
    m_bPredict = 0x5BD # bool
    m_bAutoKickDisabled = 0x5BE # bool
    m_bIsLowViolence = 0x5BF # bool
    m_bGamePaused = 0x5C0 # bool
    m_nLastRealCommandNumberExecuted = 0x654 # int32_t
    m_nLastLateCommandExecuted = 0x658 # int32_t
    m_iIgnoreGlobalChat = 0x670 # ChatIgnoreType_t
    m_flLastPlayerTalkTime = 0x674 # float
    m_flLastEntitySteadyState = 0x678 # float
    m_nAvailableEntitySteadyState = 0x67C # int32_t
    m_bHasAnySteadyStateEnts = 0x680 # bool
    m_steamID = 0x690 # uint64_t
    m_iDesiredFOV = 0x698 # uint32_t

class CBasePlayerControllerAPI:

class CBasePlayerPawn: # CBaseCombatCharacter
    m_pWeaponServices = 0xA10 # CPlayer_WeaponServices*
    m_pItemServices = 0xA18 # CPlayer_ItemServices*
    m_pAutoaimServices = 0xA20 # CPlayer_AutoaimServices*
    m_pObserverServices = 0xA28 # CPlayer_ObserverServices*
    m_pWaterServices = 0xA30 # CPlayer_WaterServices*
    m_pUseServices = 0xA38 # CPlayer_UseServices*
    m_pFlashlightServices = 0xA40 # CPlayer_FlashlightServices*
    m_pCameraServices = 0xA48 # CPlayer_CameraServices*
    m_pMovementServices = 0xA50 # CPlayer_MovementServices*
    m_ServerViewAngleChanges = 0xA60 # CUtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
    m_nHighestGeneratedServerViewAngleChangeIndex = 0xAB0 # uint32_t
    v_angle = 0xAB4 # QAngle
    v_anglePrevious = 0xAC0 # QAngle
    m_iHideHUD = 0xACC # uint32_t
    m_skybox3d = 0xAD0 # sky3dparams_t
    m_fTimeLastHurt = 0xB60 # GameTime_t
    m_flDeathTime = 0xB64 # GameTime_t
    m_fNextSuicideTime = 0xB68 # GameTime_t
    m_fInitHUD = 0xB6C # bool
    m_pExpresser = 0xB70 # CAI_Expresser*
    m_hController = 0xB78 # CHandle<CBasePlayerController>
    m_fHltvReplayDelay = 0xB80 # float
    m_fHltvReplayEnd = 0xB84 # float
    m_iHltvReplayEntity = 0xB88 # CEntityIndex
    m_sndOpvarLatchData = 0xB90 # CUtlVector<sndopvarlatchdata_t>

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
    m_nNextPrimaryAttackTick = 0xC70 # GameTick_t
    m_flNextPrimaryAttackTickRatio = 0xC74 # float
    m_nNextSecondaryAttackTick = 0xC78 # GameTick_t
    m_flNextSecondaryAttackTickRatio = 0xC7C # float
    m_iClip1 = 0xC80 # int32_t
    m_iClip2 = 0xC84 # int32_t
    m_pReserveAmmo = 0xC88 # int32_t[2]
    m_OnPlayerUse = 0xC90 # CEntityIOOutput

class CBasePlayerWeaponVData: # CEntitySubclassVDataBase
    m_szWorldModel = 0x28 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    m_bBuiltRightHanded = 0x108 # bool
    m_bAllowFlipping = 0x109 # bool
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
    m_bLinkedCooldowns = 0x218 # bool
    m_aShootSounds = 0x220 # CUtlMap<WeaponSound_t,CSoundEventName>
    m_iSlot = 0x240 # int32_t
    m_iPosition = 0x244 # int32_t

class CBaseProp: # CBaseAnimGraph
    m_bModelOverrodeBlockLOS = 0x8E8 # bool
    m_iShapeType = 0x8EC # int32_t
    m_bConformToCollisionBounds = 0x8F0 # bool
    m_mPreferredCatchTransform = 0x8F4 # matrix3x4_t

class CBasePropDoor: # CDynamicProp
    m_flAutoReturnDelay = 0xB70 # float
    m_hDoorList = 0xB78 # CUtlVector<CHandle<CBasePropDoor>>
    m_nHardwareType = 0xB90 # int32_t
    m_bNeedsHardware = 0xB94 # bool
    m_eDoorState = 0xB98 # DoorState_t
    m_bLocked = 0xB9C # bool
    m_closedPosition = 0xBA0 # Vector
    m_closedAngles = 0xBAC # QAngle
    m_hBlocker = 0xBB8 # CHandle<CBaseEntity>
    m_bFirstBlocked = 0xBBC # bool
    m_ls = 0xBC0 # locksound_t
    m_bForceClosed = 0xBE0 # bool
    m_vecLatchWorldPosition = 0xBE4 # Vector
    m_hActivator = 0xBF0 # CHandle<CBaseEntity>
    m_SoundMoving = 0xC00 # CUtlSymbolLarge
    m_SoundOpen = 0xC08 # CUtlSymbolLarge
    m_SoundClose = 0xC10 # CUtlSymbolLarge
    m_SoundLock = 0xC18 # CUtlSymbolLarge
    m_SoundUnlock = 0xC20 # CUtlSymbolLarge
    m_SoundLatch = 0xC28 # CUtlSymbolLarge
    m_SoundPound = 0xC30 # CUtlSymbolLarge
    m_SoundJiggle = 0xC38 # CUtlSymbolLarge
    m_SoundLockedAnim = 0xC40 # CUtlSymbolLarge
    m_numCloseAttempts = 0xC48 # int32_t
    m_nPhysicsMaterial = 0xC4C # CUtlStringToken
    m_SlaveName = 0xC50 # CUtlSymbolLarge
    m_hMaster = 0xC58 # CHandle<CBasePropDoor>
    m_OnBlockedClosing = 0xC60 # CEntityIOOutput
    m_OnBlockedOpening = 0xC88 # CEntityIOOutput
    m_OnUnblockedClosing = 0xCB0 # CEntityIOOutput
    m_OnUnblockedOpening = 0xCD8 # CEntityIOOutput
    m_OnFullyClosed = 0xD00 # CEntityIOOutput
    m_OnFullyOpen = 0xD28 # CEntityIOOutput
    m_OnClose = 0xD50 # CEntityIOOutput
    m_OnOpen = 0xD78 # CEntityIOOutput
    m_OnLockedUse = 0xDA0 # CEntityIOOutput
    m_OnAjarOpen = 0xDC8 # CEntityIOOutput

class CBaseToggle: # CBaseModelEntity
    m_toggle_state = 0x710 # TOGGLE_STATE
    m_flMoveDistance = 0x714 # float
    m_flWait = 0x718 # float
    m_flLip = 0x71C # float
    m_bAlwaysFireBlockedOutputs = 0x720 # bool
    m_vecPosition1 = 0x724 # Vector
    m_vecPosition2 = 0x730 # Vector
    m_vecMoveAng = 0x73C # QAngle
    m_vecAngle1 = 0x748 # QAngle
    m_vecAngle2 = 0x754 # QAngle
    m_flHeight = 0x760 # float
    m_hActivator = 0x764 # CHandle<CBaseEntity>
    m_vecFinalDest = 0x768 # Vector
    m_vecFinalAngle = 0x774 # QAngle
    m_movementType = 0x780 # int32_t
    m_sMaster = 0x788 # CUtlSymbolLarge

class CBaseTrigger: # CBaseToggle
    m_bDisabled = 0x790 # bool
    m_iFilterName = 0x798 # CUtlSymbolLarge
    m_hFilter = 0x7A0 # CHandle<CBaseFilter>
    m_OnStartTouch = 0x7A8 # CEntityIOOutput
    m_OnStartTouchAll = 0x7D0 # CEntityIOOutput
    m_OnEndTouch = 0x7F8 # CEntityIOOutput
    m_OnEndTouchAll = 0x820 # CEntityIOOutput
    m_OnTouching = 0x848 # CEntityIOOutput
    m_OnNotTouching = 0x870 # CEntityIOOutput
    m_hTouchingEntities = 0x898 # CUtlVector<CHandle<CBaseEntity>>
    m_bClientSidePredicted = 0x8B0 # bool

class CBaseViewModel: # CBaseAnimGraph
    m_vecLastFacing = 0x8F0 # Vector
    m_nViewModelIndex = 0x8FC # uint32_t
    m_nAnimationParity = 0x900 # uint32_t
    m_flAnimationStartTime = 0x904 # float
    m_hWeapon = 0x908 # CHandle<CBasePlayerWeapon>
    m_sVMName = 0x910 # CUtlSymbolLarge
    m_sAnimationPrefix = 0x918 # CUtlSymbolLarge
    m_hOldLayerSequence = 0x920 # HSequence
    m_oldLayer = 0x924 # int32_t
    m_oldLayerStartTime = 0x928 # float
    m_hControlPanel = 0x92C # CHandle<CBaseEntity>

class CBeam: # CBaseModelEntity
    m_flFrameRate = 0x710 # float
    m_flHDRColorScale = 0x714 # float
    m_flFireTime = 0x718 # GameTime_t
    m_flDamage = 0x71C # float
    m_nNumBeamEnts = 0x720 # uint8_t
    m_hBaseMaterial = 0x728 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_nHaloIndex = 0x730 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_nBeamType = 0x738 # BeamType_t
    m_nBeamFlags = 0x73C # uint32_t
    m_hAttachEntity = 0x740 # CHandle<CBaseEntity>[10]
    m_nAttachIndex = 0x768 # AttachmentHandle_t[10]
    m_fWidth = 0x774 # float
    m_fEndWidth = 0x778 # float
    m_fFadeLength = 0x77C # float
    m_fHaloScale = 0x780 # float
    m_fAmplitude = 0x784 # float
    m_fStartFrame = 0x788 # float
    m_fSpeed = 0x78C # float
    m_flFrame = 0x790 # float
    m_nClipStyle = 0x794 # BeamClipStyle_t
    m_bTurnedOff = 0x798 # bool
    m_vecEndPos = 0x79C # Vector
    m_hEndEntity = 0x7A8 # CHandle<CBaseEntity>
    m_nDissolveType = 0x7AC # int32_t

class CBlood: # CPointEntity
    m_vecSprayAngles = 0x4C0 # QAngle
    m_vecSprayDir = 0x4CC # Vector
    m_flAmount = 0x4D8 # float
    m_Color = 0x4DC # int32_t

class CBodyComponent: # CEntityComponent
    m_pSceneNode = 0x8 # CGameSceneNode*
    __m_pChainEntity = 0x20 # CNetworkVarChainer

class CBodyComponentBaseAnimGraph: # CBodyComponentSkeletonInstance
    m_animationController = 0x460 # CBaseAnimGraphController
    __m_pChainEntity = 0x950 # CNetworkVarChainer

class CBodyComponentBaseModelEntity: # CBodyComponentSkeletonInstance
    __m_pChainEntity = 0x460 # CNetworkVarChainer

class CBodyComponentPoint: # CBodyComponent
    m_sceneNode = 0x50 # CGameSceneNode
    __m_pChainEntity = 0x1A0 # CNetworkVarChainer

class CBodyComponentSkeletonInstance: # CBodyComponent
    m_skeletonInstance = 0x50 # CSkeletonInstance
    __m_pChainEntity = 0x430 # CNetworkVarChainer

class CBombTarget: # CBaseTrigger
    m_OnBombExplode = 0x8B8 # CEntityIOOutput
    m_OnBombPlanted = 0x8E0 # CEntityIOOutput
    m_OnBombDefused = 0x908 # CEntityIOOutput
    m_bIsBombSiteB = 0x930 # bool
    m_bIsHeistBombTarget = 0x931 # bool
    m_bBombPlantedHere = 0x932 # bool
    m_szMountTarget = 0x938 # CUtlSymbolLarge
    m_hInstructorHint = 0x940 # CHandle<CBaseEntity>
    m_nBombSiteDesignation = 0x944 # int32_t

class CBot:
    m_pController = 0x10 # CCSPlayerController*
    m_pPlayer = 0x18 # CCSPlayerPawn*
    m_bHasSpawned = 0x20 # bool
    m_id = 0x24 # uint32_t
    m_isRunning = 0xB0 # bool
    m_isCrouching = 0xB1 # bool
    m_forwardSpeed = 0xB4 # float
    m_leftSpeed = 0xB8 # float
    m_verticalSpeed = 0xBC # float
    m_buttonFlags = 0xC0 # uint64_t
    m_jumpTimestamp = 0xC8 # float
    m_viewForward = 0xCC # Vector
    m_postureStackIndex = 0xE8 # int32_t

class CBreachCharge: # CCSWeaponBase

class CBreachChargeProjectile: # CBaseGrenade

class CBreakable: # CBaseModelEntity
    m_Material = 0x720 # Materials
    m_hBreaker = 0x724 # CHandle<CBaseEntity>
    m_Explosion = 0x728 # Explosions
    m_iszSpawnObject = 0x730 # CUtlSymbolLarge
    m_flPressureDelay = 0x738 # float
    m_iMinHealthDmg = 0x73C # int32_t
    m_iszPropData = 0x740 # CUtlSymbolLarge
    m_impactEnergyScale = 0x748 # float
    m_nOverrideBlockLOS = 0x74C # EOverrideBlockLOS_t
    m_OnBreak = 0x750 # CEntityIOOutput
    m_OnHealthChanged = 0x778 # CEntityOutputTemplate<float>
    m_flDmgModBullet = 0x7A0 # float
    m_flDmgModClub = 0x7A4 # float
    m_flDmgModExplosive = 0x7A8 # float
    m_flDmgModFire = 0x7AC # float
    m_iszPhysicsDamageTableName = 0x7B0 # CUtlSymbolLarge
    m_iszBasePropData = 0x7B8 # CUtlSymbolLarge
    m_iInteractions = 0x7C0 # int32_t
    m_PerformanceMode = 0x7C4 # PerformanceMode_t
    m_hPhysicsAttacker = 0x7C8 # CHandle<CBasePlayerPawn>
    m_flLastPhysicsInfluenceTime = 0x7CC # GameTime_t

class CBreakableProp: # CBaseProp
    m_OnBreak = 0x938 # CEntityIOOutput
    m_OnHealthChanged = 0x960 # CEntityOutputTemplate<float>
    m_OnTakeDamage = 0x988 # CEntityIOOutput
    m_impactEnergyScale = 0x9B0 # float
    m_iMinHealthDmg = 0x9B4 # int32_t
    m_preferredCarryAngles = 0x9B8 # QAngle
    m_flPressureDelay = 0x9C4 # float
    m_hBreaker = 0x9C8 # CHandle<CBaseEntity>
    m_PerformanceMode = 0x9CC # PerformanceMode_t
    m_flDmgModBullet = 0x9D0 # float
    m_flDmgModClub = 0x9D4 # float
    m_flDmgModExplosive = 0x9D8 # float
    m_flDmgModFire = 0x9DC # float
    m_iszPhysicsDamageTableName = 0x9E0 # CUtlSymbolLarge
    m_iszBasePropData = 0x9E8 # CUtlSymbolLarge
    m_iInteractions = 0x9F0 # int32_t
    m_flPreventDamageBeforeTime = 0x9F4 # GameTime_t
    m_bHasBreakPiecesOrCommands = 0x9F8 # bool
    m_explodeDamage = 0x9FC # float
    m_explodeRadius = 0xA00 # float
    m_explosionDelay = 0xA08 # float
    m_explosionBuildupSound = 0xA10 # CUtlSymbolLarge
    m_explosionCustomEffect = 0xA18 # CUtlSymbolLarge
    m_explosionCustomSound = 0xA20 # CUtlSymbolLarge
    m_explosionModifier = 0xA28 # CUtlSymbolLarge
    m_hPhysicsAttacker = 0xA30 # CHandle<CBasePlayerPawn>
    m_flLastPhysicsInfluenceTime = 0xA34 # GameTime_t
    m_bOriginalBlockLOS = 0xA38 # bool
    m_flDefaultFadeScale = 0xA3C # float
    m_hLastAttacker = 0xA40 # CHandle<CBaseEntity>
    m_hFlareEnt = 0xA44 # CHandle<CBaseEntity>
    m_bUsePuntSound = 0xA48 # bool
    m_iszPuntSound = 0xA50 # CUtlSymbolLarge
    m_noGhostCollision = 0xA58 # bool

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
    m_density = 0x710 # int32_t
    m_frequency = 0x714 # int32_t
    m_state = 0x718 # int32_t

class CBumpMine: # CCSWeaponBase

class CBumpMineProjectile: # CBaseGrenade

class CBuoyancyHelper:
    m_flFluidDensity = 0x18 # float

class CBuyZone: # CBaseTrigger
    m_LegacyTeamNum = 0x8B8 # int32_t

class CC4: # CCSWeaponBase
    m_vecLastValidPlayerHeldPosition = 0xE90 # Vector
    m_vecLastValidDroppedPosition = 0xE9C # Vector
    m_bDoValidDroppedPositionCheck = 0xEA8 # bool
    m_bStartedArming = 0xEA9 # bool
    m_fArmedTime = 0xEAC # GameTime_t
    m_bBombPlacedAnimation = 0xEB0 # bool
    m_bIsPlantingViaUse = 0xEB1 # bool
    m_entitySpottedState = 0xEB8 # EntitySpottedState_t
    m_nSpotRules = 0xED0 # int32_t
    m_bPlayedArmingBeeps = 0xED4 # bool[7]
    m_bBombPlanted = 0xEDB # bool

class CCSArmsRaceScript: # CCSGameModeScript
    m_pOuter = 0xD8 # CCSGameModeRules_ArmsRace*

class CCSBot: # CBot
    m_lastCoopSpawnPoint = 0xF0 # CHandle<SpawnPointCoopEnemy>
    m_eyePosition = 0x100 # Vector
    m_name = 0x10C # char[64]
    m_combatRange = 0x14C # float
    m_isRogue = 0x150 # bool
    m_rogueTimer = 0x158 # CountdownTimer
    m_diedLastRound = 0x174 # bool
    m_safeTime = 0x178 # float
    m_wasSafe = 0x17C # bool
    m_blindFire = 0x184 # bool
    m_surpriseTimer = 0x188 # CountdownTimer
    m_bAllowActive = 0x1A0 # bool
    m_isFollowing = 0x1A1 # bool
    m_leader = 0x1A4 # CHandle<CCSPlayerPawn>
    m_followTimestamp = 0x1A8 # float
    m_allowAutoFollowTime = 0x1AC # float
    m_hurryTimer = 0x1B0 # CountdownTimer
    m_alertTimer = 0x1C8 # CountdownTimer
    m_sneakTimer = 0x1E0 # CountdownTimer
    m_panicTimer = 0x1F8 # CountdownTimer
    m_stateTimestamp = 0x4C8 # float
    m_isAttacking = 0x4CC # bool
    m_isOpeningDoor = 0x4CD # bool
    m_taskEntity = 0x4D4 # CHandle<CBaseEntity>
    m_goalPosition = 0x4E4 # Vector
    m_goalEntity = 0x4F0 # CHandle<CBaseEntity>
    m_avoid = 0x4F4 # CHandle<CBaseEntity>
    m_avoidTimestamp = 0x4F8 # float
    m_isStopping = 0x4FC # bool
    m_hasVisitedEnemySpawn = 0x4FD # bool
    m_stillTimer = 0x500 # IntervalTimer
    m_bEyeAnglesUnderPathFinderControl = 0x510 # bool
    m_pathIndex = 0x6608 # int32_t
    m_areaEnteredTimestamp = 0x660C # GameTime_t
    m_repathTimer = 0x6610 # CountdownTimer
    m_avoidFriendTimer = 0x6628 # CountdownTimer
    m_isFriendInTheWay = 0x6640 # bool
    m_politeTimer = 0x6648 # CountdownTimer
    m_isWaitingBehindFriend = 0x6660 # bool
    m_pathLadderEnd = 0x668C # float
    m_mustRunTimer = 0x66D8 # CountdownTimer
    m_waitTimer = 0x66F0 # CountdownTimer
    m_updateTravelDistanceTimer = 0x6708 # CountdownTimer
    m_playerTravelDistance = 0x6720 # float[64]
    m_travelDistancePhase = 0x6820 # uint8_t
    m_hostageEscortCount = 0x69B8 # uint8_t
    m_hostageEscortCountTimestamp = 0x69BC # float
    m_desiredTeam = 0x69C0 # int32_t
    m_hasJoined = 0x69C4 # bool
    m_isWaitingForHostage = 0x69C5 # bool
    m_inhibitWaitingForHostageTimer = 0x69C8 # CountdownTimer
    m_waitForHostageTimer = 0x69E0 # CountdownTimer
    m_noisePosition = 0x69F8 # Vector
    m_noiseTravelDistance = 0x6A04 # float
    m_noiseTimestamp = 0x6A08 # float
    m_noiseSource = 0x6A10 # CCSPlayerPawn*
    m_noiseBendTimer = 0x6A28 # CountdownTimer
    m_bentNoisePosition = 0x6A40 # Vector
    m_bendNoisePositionValid = 0x6A4C # bool
    m_lookAroundStateTimestamp = 0x6A50 # float
    m_lookAheadAngle = 0x6A54 # float
    m_forwardAngle = 0x6A58 # float
    m_inhibitLookAroundTimestamp = 0x6A5C # float
    m_lookAtSpot = 0x6A64 # Vector
    m_lookAtSpotDuration = 0x6A74 # float
    m_lookAtSpotTimestamp = 0x6A78 # float
    m_lookAtSpotAngleTolerance = 0x6A7C # float
    m_lookAtSpotClearIfClose = 0x6A80 # bool
    m_lookAtSpotAttack = 0x6A81 # bool
    m_lookAtDesc = 0x6A88 # char*
    m_peripheralTimestamp = 0x6A90 # float
    m_approachPointCount = 0x6C18 # uint8_t
    m_approachPointViewPosition = 0x6C1C # Vector
    m_viewSteadyTimer = 0x6C28 # IntervalTimer
    m_tossGrenadeTimer = 0x6C40 # CountdownTimer
    m_isAvoidingGrenade = 0x6C60 # CountdownTimer
    m_spotCheckTimestamp = 0x6C80 # float
    m_checkedHidingSpotCount = 0x7088 # int32_t
    m_lookPitch = 0x708C # float
    m_lookPitchVel = 0x7090 # float
    m_lookYaw = 0x7094 # float
    m_lookYawVel = 0x7098 # float
    m_targetSpot = 0x709C # Vector
    m_targetSpotVelocity = 0x70A8 # Vector
    m_targetSpotPredicted = 0x70B4 # Vector
    m_aimError = 0x70C0 # QAngle
    m_aimGoal = 0x70CC # QAngle
    m_targetSpotTime = 0x70D8 # GameTime_t
    m_aimFocus = 0x70DC # float
    m_aimFocusInterval = 0x70E0 # float
    m_aimFocusNextUpdate = 0x70E4 # GameTime_t
    m_ignoreEnemiesTimer = 0x70F0 # CountdownTimer
    m_enemy = 0x7108 # CHandle<CCSPlayerPawn>
    m_isEnemyVisible = 0x710C # bool
    m_visibleEnemyParts = 0x710D # uint8_t
    m_lastEnemyPosition = 0x7110 # Vector
    m_lastSawEnemyTimestamp = 0x711C # float
    m_firstSawEnemyTimestamp = 0x7120 # float
    m_currentEnemyAcquireTimestamp = 0x7124 # float
    m_enemyDeathTimestamp = 0x7128 # float
    m_friendDeathTimestamp = 0x712C # float
    m_isLastEnemyDead = 0x7130 # bool
    m_nearbyEnemyCount = 0x7134 # int32_t
    m_bomber = 0x7340 # CHandle<CCSPlayerPawn>
    m_nearbyFriendCount = 0x7344 # int32_t
    m_closestVisibleFriend = 0x7348 # CHandle<CCSPlayerPawn>
    m_closestVisibleHumanFriend = 0x734C # CHandle<CCSPlayerPawn>
    m_attentionInterval = 0x7350 # IntervalTimer
    m_attacker = 0x7360 # CHandle<CCSPlayerPawn>
    m_attackedTimestamp = 0x7364 # float
    m_burnedByFlamesTimer = 0x7368 # IntervalTimer
    m_lastVictimID = 0x7378 # int32_t
    m_isAimingAtEnemy = 0x737C # bool
    m_isRapidFiring = 0x737D # bool
    m_equipTimer = 0x7380 # IntervalTimer
    m_zoomTimer = 0x7390 # CountdownTimer
    m_fireWeaponTimestamp = 0x73A8 # GameTime_t
    m_lookForWeaponsOnGroundTimer = 0x73B0 # CountdownTimer
    m_bIsSleeping = 0x73C8 # bool
    m_isEnemySniperVisible = 0x73C9 # bool
    m_sawEnemySniperTimer = 0x73D0 # CountdownTimer
    m_enemyQueueIndex = 0x7488 # uint8_t
    m_enemyQueueCount = 0x7489 # uint8_t
    m_enemyQueueAttendIndex = 0x748A # uint8_t
    m_isStuck = 0x748B # bool
    m_stuckTimestamp = 0x748C # GameTime_t
    m_stuckSpot = 0x7490 # Vector
    m_wiggleTimer = 0x74A0 # CountdownTimer
    m_stuckJumpTimer = 0x74B8 # CountdownTimer
    m_nextCleanupCheckTimestamp = 0x74D0 # GameTime_t
    m_avgVel = 0x74D4 # float[10]
    m_avgVelIndex = 0x74FC # int32_t
    m_avgVelCount = 0x7500 # int32_t
    m_lastOrigin = 0x7504 # Vector
    m_lastRadioRecievedTimestamp = 0x7514 # float
    m_lastRadioSentTimestamp = 0x7518 # float
    m_radioSubject = 0x751C # CHandle<CCSPlayerPawn>
    m_radioPosition = 0x7520 # Vector
    m_voiceEndTimestamp = 0x752C # float
    m_lastValidReactionQueueFrame = 0x7538 # int32_t

class CCSDeathmatchScript: # CCSGameModeScript
    m_pOuter = 0xD8 # CCSGameModeRules_Deathmatch*

class CCSDeathmatchScript_ConVars:

class CCSGOPlayerAnimGraphState:

class CCSGOViewModel: # CPredictedViewModel
    m_bShouldIgnoreOffsetAndAccuracy = 0x930 # bool
    m_nWeaponParity = 0x934 # uint32_t
    m_nOldWeaponParity = 0x938 # uint32_t

class CCSGO_TeamIntroCharacterPosition: # CCSGO_TeamPreviewCharacterPosition

class CCSGO_TeamIntroCounterTerroristPosition: # CCSGO_TeamIntroCharacterPosition

class CCSGO_TeamIntroTerroristPosition: # CCSGO_TeamIntroCharacterPosition

class CCSGO_TeamPreviewCharacterPosition: # CBaseEntity
    m_nVariant = 0x4C0 # int32_t
    m_nRandom = 0x4C4 # int32_t
    m_nOrdinal = 0x4C8 # int32_t
    m_sWeaponName = 0x4D0 # CUtlString
    m_xuid = 0x4D8 # uint64_t
    m_agentItem = 0x4E0 # CEconItemView
    m_glovesItem = 0x758 # CEconItemView
    m_weaponItem = 0x9D0 # CEconItemView

class CCSGO_TeamSelectCharacterPosition: # CCSGO_TeamPreviewCharacterPosition

class CCSGO_TeamSelectCounterTerroristPosition: # CCSGO_TeamSelectCharacterPosition

class CCSGO_TeamSelectTerroristPosition: # CCSGO_TeamSelectCharacterPosition

class CCSGO_WingmanIntroCharacterPosition: # CCSGO_TeamIntroCharacterPosition

class CCSGO_WingmanIntroCounterTerroristPosition: # CCSGO_WingmanIntroCharacterPosition

class CCSGO_WingmanIntroTerroristPosition: # CCSGO_WingmanIntroCharacterPosition

class CCSGameModeRules:
    __m_pChainEntity = 0x8 # CNetworkVarChainer

class CCSGameModeRules_ArmsRace: # CCSGameModeRules
    m_WeaponSequence = 0x38 # CNetworkUtlVectorBase<CUtlString>

class CCSGameModeRules_Deathmatch: # CCSGameModeRules
    m_flDMBonusStartTime = 0x38 # GameTime_t
    m_flDMBonusTimeLength = 0x3C # float
    m_nDMBonusWeaponLoadoutSlot = 0x40 # int16_t

class CCSGameModeRules_Noop: # CCSGameModeRules

class CCSGameModeScript: # CBasePulseGraphInstance

class CCSGameModeScript_ConVars:

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
    m_nSpawnPointsRandomSeed = 0xDE8 # int32_t
    m_bFirstConnected = 0xDEC # bool
    m_bCompleteReset = 0xDED # bool
    m_bPickNewTeamsOnReset = 0xDEE # bool
    m_bScrambleTeamsOnRestart = 0xDEF # bool
    m_bSwapTeamsOnRestart = 0xDF0 # bool
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
    m_bRespawningAllRespawnablePlayers = 0xF98 # bool
    m_iNextCTSpawnPoint = 0xF9C # int32_t
    m_flCTSpawnPointUsedTime = 0xFA0 # float
    m_iNextTerroristSpawnPoint = 0xFA4 # int32_t
    m_flTerroristSpawnPointUsedTime = 0xFA8 # float
    m_CTSpawnPoints = 0xFB0 # CUtlVector<SpawnPoint*>
    m_TerroristSpawnPoints = 0xFC8 # CUtlVector<SpawnPoint*>
    m_bIsUnreservedGameServer = 0xFE0 # bool
    m_fAutobalanceDisplayTime = 0xFE4 # float
    m_bAllowWeaponSwitch = 0x1250 # bool
    m_bRoundTimeWarningTriggered = 0x1251 # bool
    m_phaseChangeAnnouncementTime = 0x1254 # GameTime_t
    m_fNextUpdateTeamClanNamesTime = 0x1258 # float
    m_flLastThinkTime = 0x125C # GameTime_t
    m_fAccumulatedRoundOffDamage = 0x1260 # float
    m_nShorthandedBonusLastEvalRound = 0x1264 # int32_t
    m_nMatchAbortedEarlyReason = 0x14E0 # int32_t
    m_bHasTriggeredRoundStartMusic = 0x14E4 # bool
    m_bHasTriggeredCoopSpawnReset = 0x14E5 # bool
    m_bSwitchingTeamsAtRoundReset = 0x14E6 # bool
    m_pGameModeRules = 0x1500 # CCSGameModeRules*
    m_BtGlobalBlackboard = 0x1508 # KeyValues3
    m_hPlayerResource = 0x1570 # CHandle<CBaseEntity>
    m_RetakeRules = 0x1578 # CRetakeGameRules
    m_GuardianBotSkillLevelMax = 0x175C # int32_t
    m_GuardianBotSkillLevelMin = 0x1760 # int32_t
    m_arrTeamUniqueKillWeaponsMatch = 0x1768 # CUtlVector<int32_t>[4]
    m_bTeamLastKillUsedUniqueWeaponMatch = 0x17C8 # bool[4]
    m_nMatchEndCount = 0x17F0 # uint8_t
    m_nTTeamIntroVariant = 0x17F4 # int32_t
    m_nCTTeamIntroVariant = 0x17F8 # int32_t
    m_bTeamIntroPeriod = 0x17FC # bool
    m_fTeamIntroPeriodEnd = 0x1800 # GameTime_t
    m_bPlayedTeamIntroVO = 0x1804 # bool
    m_iRoundEndWinnerTeam = 0x1808 # int32_t
    m_eRoundEndReason = 0x180C # int32_t
    m_bRoundEndShowTimerDefend = 0x1810 # bool
    m_iRoundEndTimerTime = 0x1814 # int32_t
    m_sRoundEndFunFactToken = 0x1818 # CUtlString
    m_iRoundEndFunFactPlayerSlot = 0x1820 # CPlayerSlot
    m_iRoundEndFunFactData1 = 0x1824 # int32_t
    m_iRoundEndFunFactData2 = 0x1828 # int32_t
    m_iRoundEndFunFactData3 = 0x182C # int32_t
    m_sRoundEndMessage = 0x1830 # CUtlString
    m_iRoundEndPlayerCount = 0x1838 # int32_t
    m_bRoundEndNoMusic = 0x183C # bool
    m_iRoundEndLegacy = 0x1840 # int32_t
    m_nRoundEndCount = 0x1844 # uint8_t
    m_iRoundStartRoundNumber = 0x1848 # int32_t
    m_nRoundStartCount = 0x184C # uint8_t
    m_flLastPerfSampleTime = 0x5858 # double
    m_bSkipNextServerPerfSample = 0x5860 # bool

class CCSGameRulesProxy: # CGameRulesProxy
    m_pGameRules = 0x4C0 # CCSGameRules*

class CCSMinimapBoundary: # CBaseEntity

class CCSObserverPawn: # CCSPlayerPawnBase

class CCSObserverPawnAPI:

class CCSObserver_CameraServices: # CCSPlayerBase_CameraServices

class CCSObserver_MovementServices: # CPlayer_MovementServices

class CCSObserver_ObserverServices: # CPlayer_ObserverServices

class CCSObserver_UseServices: # CPlayer_UseServices

class CCSObserver_ViewModelServices: # CPlayer_ViewModelServices

class CCSPlace: # CServerOnlyModelEntity
    m_name = 0x718 # CUtlSymbolLarge

class CCSPlayerBase_CameraServices: # CPlayer_CameraServices
    m_iFOV = 0x170 # uint32_t
    m_iFOVStart = 0x174 # uint32_t
    m_flFOVTime = 0x178 # GameTime_t
    m_flFOVRate = 0x17C # float
    m_hZoomOwner = 0x180 # CHandle<CBaseEntity>
    m_hTriggerFogList = 0x188 # CUtlVector<CHandle<CBaseEntity>>
    m_hLastFogTrigger = 0x1A0 # CHandle<CBaseEntity>

class CCSPlayerController: # CBasePlayerController
    m_pInGameMoneyServices = 0x6C8 # CCSPlayerController_InGameMoneyServices*
    m_pInventoryServices = 0x6D0 # CCSPlayerController_InventoryServices*
    m_pActionTrackingServices = 0x6D8 # CCSPlayerController_ActionTrackingServices*
    m_pDamageServices = 0x6E0 # CCSPlayerController_DamageServices*
    m_iPing = 0x6E8 # uint32_t
    m_bHasCommunicationAbuseMute = 0x6EC # bool
    m_szCrosshairCodes = 0x6F0 # CUtlSymbolLarge
    m_iPendingTeamNum = 0x6F8 # uint8_t
    m_flForceTeamTime = 0x6FC # GameTime_t
    m_iCompTeammateColor = 0x700 # int32_t
    m_bEverPlayedOnTeam = 0x704 # bool
    m_bAttemptedToGetColor = 0x705 # bool
    m_iTeammatePreferredColor = 0x708 # int32_t
    m_bTeamChanged = 0x70C # bool
    m_bInSwitchTeam = 0x70D # bool
    m_bHasSeenJoinGame = 0x70E # bool
    m_bJustBecameSpectator = 0x70F # bool
    m_bSwitchTeamsOnNextRoundReset = 0x710 # bool
    m_bRemoveAllItemsOnNextRoundReset = 0x711 # bool
    m_szClan = 0x718 # CUtlSymbolLarge
    m_szClanName = 0x720 # char[32]
    m_iCoachingTeam = 0x740 # int32_t
    m_nPlayerDominated = 0x748 # uint64_t
    m_nPlayerDominatingMe = 0x750 # uint64_t
    m_iCompetitiveRanking = 0x758 # int32_t
    m_iCompetitiveWins = 0x75C # int32_t
    m_iCompetitiveRankType = 0x760 # int8_t
    m_iCompetitiveRankingPredicted_Win = 0x764 # int32_t
    m_iCompetitiveRankingPredicted_Loss = 0x768 # int32_t
    m_iCompetitiveRankingPredicted_Tie = 0x76C # int32_t
    m_nEndMatchNextMapVote = 0x770 # int32_t
    m_unActiveQuestId = 0x774 # uint16_t
    m_nQuestProgressReason = 0x778 # QuestProgress::Reason
    m_unPlayerTvControlFlags = 0x77C # uint32_t
    m_iDraftIndex = 0x7A8 # int32_t
    m_msQueuedModeDisconnectionTimestamp = 0x7AC # uint32_t
    m_uiAbandonRecordedReason = 0x7B0 # uint32_t
    m_bCannotBeKicked = 0x7B4 # bool
    m_bEverFullyConnected = 0x7B5 # bool
    m_bAbandonAllowsSurrender = 0x7B6 # bool
    m_bAbandonOffersInstantSurrender = 0x7B7 # bool
    m_bDisconnection1MinWarningPrinted = 0x7B8 # bool
    m_bScoreReported = 0x7B9 # bool
    m_nDisconnectionTick = 0x7BC # int32_t
    m_bControllingBot = 0x7C8 # bool
    m_bHasControlledBotThisRound = 0x7C9 # bool
    m_bHasBeenControlledByPlayerThisRound = 0x7CA # bool
    m_nBotsControlledThisRound = 0x7CC # int32_t
    m_bCanControlObservedBot = 0x7D0 # bool
    m_hPlayerPawn = 0x7D4 # CHandle<CCSPlayerPawn>
    m_hObserverPawn = 0x7D8 # CHandle<CCSObserverPawn>
    m_DesiredObserverMode = 0x7DC # int32_t
    m_hDesiredObserverTarget = 0x7E0 # CEntityHandle
    m_bPawnIsAlive = 0x7E4 # bool
    m_iPawnHealth = 0x7E8 # uint32_t
    m_iPawnArmor = 0x7EC # int32_t
    m_bPawnHasDefuser = 0x7F0 # bool
    m_bPawnHasHelmet = 0x7F1 # bool
    m_nPawnCharacterDefIndex = 0x7F2 # uint16_t
    m_iPawnLifetimeStart = 0x7F4 # int32_t
    m_iPawnLifetimeEnd = 0x7F8 # int32_t
    m_iPawnBotDifficulty = 0x7FC # int32_t
    m_hOriginalControllerOfCurrentPawn = 0x800 # CHandle<CCSPlayerController>
    m_iScore = 0x804 # int32_t
    m_iRoundScore = 0x808 # int32_t
    m_iRoundsWon = 0x80C # int32_t
    m_vecKills = 0x810 # CNetworkUtlVectorBase<EKillTypes_t>
    m_bMvpNoMusic = 0x828 # bool
    m_eMvpReason = 0x82C # int32_t
    m_iMusicKitID = 0x830 # int32_t
    m_iMusicKitMVPs = 0x834 # int32_t
    m_iMVPs = 0x838 # int32_t
    m_nUpdateCounter = 0x83C # int32_t
    m_flSmoothedPing = 0x840 # float
    m_lastHeldVoteTimer = 0xF8E8 # IntervalTimer
    m_bShowHints = 0xF900 # bool
    m_iNextTimeCheck = 0xF904 # int32_t
    m_bJustDidTeamKill = 0xF908 # bool
    m_bPunishForTeamKill = 0xF909 # bool
    m_bGaveTeamDamageWarning = 0xF90A # bool
    m_bGaveTeamDamageWarningThisRound = 0xF90B # bool
    m_dblLastReceivedPacketPlatFloatTime = 0xF910 # double
    m_LastTeamDamageWarningTime = 0xF918 # GameTime_t
    m_LastTimePlayerWasDisconnectedForPawnsRemove = 0xF91C # GameTime_t
    m_nSuspiciousHitCount = 0xF920 # uint32_t
    m_nNonSuspiciousHitStreak = 0xF924 # uint32_t

class CCSPlayerControllerAPI:

class CCSPlayerController_ActionTrackingServices: # CPlayerControllerComponent
    m_perRoundStats = 0x40 # CUtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
    m_matchStats = 0x90 # CSMatchStats_t
    m_iNumRoundKills = 0x150 # int32_t
    m_iNumRoundKillsHeadshots = 0x154 # int32_t
    m_unTotalRoundDamageDealt = 0x158 # uint32_t

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
    m_nPersonaDataXpTrailLevel = 0x6C # int32_t
    m_unEquippedPlayerSprayIDs = 0xF48 # uint32_t[1]
    m_vecServerAuthoritativeWeaponSlots = 0xF50 # CUtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>

class CCSPlayerPawn: # CCSPlayerPawnBase
    m_pBulletServices = 0x15A8 # CCSPlayer_BulletServices*
    m_pHostageServices = 0x15B0 # CCSPlayer_HostageServices*
    m_pBuyServices = 0x15B8 # CCSPlayer_BuyServices*
    m_pActionTrackingServices = 0x15C0 # CCSPlayer_ActionTrackingServices*
    m_pRadioServices = 0x15C8 # CCSPlayer_RadioServices*
    m_pDamageReactServices = 0x15D0 # CCSPlayer_DamageReactServices*
    m_nCharacterDefIndex = 0x15D8 # uint16_t
    m_hPreviousModel = 0x15E0 # CStrongHandle<InfoForResourceTypeCModel>
    m_bHasFemaleVoice = 0x15E8 # bool
    m_strVOPrefix = 0x15F0 # CUtlString
    m_szLastPlaceName = 0x15F8 # char[18]
    m_bInHostageResetZone = 0x16B8 # bool
    m_bInBuyZone = 0x16B9 # bool
    m_bWasInBuyZone = 0x16BA # bool
    m_bInHostageRescueZone = 0x16BB # bool
    m_bInBombZone = 0x16BC # bool
    m_bWasInHostageRescueZone = 0x16BD # bool
    m_iRetakesOffering = 0x16C0 # int32_t
    m_iRetakesOfferingCard = 0x16C4 # int32_t
    m_bRetakesHasDefuseKit = 0x16C8 # bool
    m_bRetakesMVPLastRound = 0x16C9 # bool
    m_iRetakesMVPBoostItem = 0x16CC # int32_t
    m_RetakesMVPBoostExtraUtility = 0x16D0 # loadout_slot_t
    m_flHealthShotBoostExpirationTime = 0x16D4 # GameTime_t
    m_flLandseconds = 0x16D8 # float
    m_aimPunchAngle = 0x16DC # QAngle
    m_aimPunchAngleVel = 0x16E8 # QAngle
    m_aimPunchTickBase = 0x16F4 # int32_t
    m_aimPunchTickFraction = 0x16F8 # float
    m_aimPunchCache = 0x1700 # CUtlVector<QAngle>
    m_bIsBuyMenuOpen = 0x1718 # bool
    m_xLastHeadBoneTransform = 0x1D60 # CTransform
    m_bLastHeadBoneTransformIsValid = 0x1D80 # bool
    m_lastLandTime = 0x1D84 # GameTime_t
    m_bOnGroundLastTick = 0x1D88 # bool
    m_iPlayerLocked = 0x1D8C # int32_t
    m_flTimeOfLastInjury = 0x1D94 # GameTime_t
    m_flNextSprayDecalTime = 0x1D98 # GameTime_t
    m_bNextSprayDecalTimeExpedited = 0x1D9C # bool
    m_nRagdollDamageBone = 0x1DA0 # int32_t
    m_vRagdollDamageForce = 0x1DA4 # Vector
    m_vRagdollDamagePosition = 0x1DB0 # Vector
    m_szRagdollDamageWeaponName = 0x1DBC # char[64]
    m_bRagdollDamageHeadshot = 0x1DFC # bool
    m_vRagdollServerOrigin = 0x1E00 # Vector
    m_EconGloves = 0x1E10 # CEconItemView
    m_nEconGlovesChanged = 0x2088 # uint8_t
    m_qDeathEyeAngles = 0x208C # QAngle
    m_bSkipOneHeadConstraintUpdate = 0x2098 # bool

class CCSPlayerPawnAPI:

class CCSPlayerPawnBase: # CBasePlayerPawn
    m_CTouchExpansionComponent = 0xBC0 # CTouchExpansionComponent
    m_pPingServices = 0xC10 # CCSPlayer_PingServices*
    m_pViewModelServices = 0xC18 # CPlayer_ViewModelServices*
    m_iDisplayHistoryBits = 0xC20 # uint32_t
    m_flLastAttackedTeammate = 0xC24 # float
    m_hOriginalController = 0xC28 # CHandle<CCSPlayerController>
    m_blindUntilTime = 0xC2C # GameTime_t
    m_blindStartTime = 0xC30 # GameTime_t
    m_allowAutoFollowTime = 0xC34 # GameTime_t
    m_entitySpottedState = 0xC38 # EntitySpottedState_t
    m_nSpotRules = 0xC50 # int32_t
    m_iPlayerState = 0xC54 # CSPlayerState
    m_chickenIdleSoundTimer = 0xC60 # CountdownTimer
    m_chickenJumpSoundTimer = 0xC78 # CountdownTimer
    m_vecLastBookmarkedPosition = 0xD30 # Vector
    m_flLastDistanceTraveledNotice = 0xD3C # float
    m_flAccumulatedDistanceTraveled = 0xD40 # float
    m_flLastFriendlyFireDamageReductionRatio = 0xD44 # float
    m_bRespawning = 0xD48 # bool
    m_nLastPickupPriority = 0xD4C # int32_t
    m_flLastPickupPriorityTime = 0xD50 # float
    m_bIsScoped = 0xD54 # bool
    m_bIsWalking = 0xD55 # bool
    m_bResumeZoom = 0xD56 # bool
    m_bIsDefusing = 0xD57 # bool
    m_bIsGrabbingHostage = 0xD58 # bool
    m_iBlockingUseActionInProgress = 0xD5C # CSPlayerBlockingUseAction_t
    m_fImmuneToGunGameDamageTime = 0xD60 # GameTime_t
    m_bGunGameImmunity = 0xD64 # bool
    m_GunGameImmunityColor = 0xD65 # Color
    m_fMolotovDamageTime = 0xD6C # float
    m_bHasMovedSinceSpawn = 0xD70 # bool
    m_bCanMoveDuringFreezePeriod = 0xD71 # bool
    m_flGuardianTooFarDistFrac = 0xD74 # float
    m_flNextGuardianTooFarHurtTime = 0xD78 # float
    m_flDetectedByEnemySensorTime = 0xD7C # GameTime_t
    m_flDealtDamageToEnemyMostRecentTimestamp = 0xD80 # float
    m_flLastEquippedHelmetTime = 0xD84 # GameTime_t
    m_flLastEquippedArmorTime = 0xD88 # GameTime_t
    m_nHeavyAssaultSuitCooldownRemaining = 0xD8C # int32_t
    m_bResetArmorNextSpawn = 0xD90 # bool
    m_flLastBumpMineBumpTime = 0xD94 # GameTime_t
    m_flEmitSoundTime = 0xD98 # GameTime_t
    m_iNumSpawns = 0xD9C # int32_t
    m_iShouldHaveCash = 0xDA0 # int32_t
    m_flIdleTimeSinceLastAction = 0xDA8 # float
    m_flNameChangeHistory = 0xDAC # float[5]
    m_fLastGivenDefuserTime = 0xDC0 # float
    m_fLastGivenBombTime = 0xDC4 # float
    m_bHasNightVision = 0xDC8 # bool
    m_bNightVisionOn = 0xDC9 # bool
    m_fNextRadarUpdateTime = 0xDCC # float
    m_flLastMoneyUpdateTime = 0xDD0 # float
    m_MenuStringBuffer = 0xDD4 # char[1024]
    m_fIntroCamTime = 0x11D4 # float
    m_nMyCollisionGroup = 0x11D8 # int32_t
    m_bInNoDefuseArea = 0x11DC # bool
    m_bKilledByTaser = 0x11DD # bool
    m_iMoveState = 0x11E0 # int32_t
    m_grenadeParameterStashTime = 0x11E4 # GameTime_t
    m_bGrenadeParametersStashed = 0x11E8 # bool
    m_angStashedShootAngles = 0x11EC # QAngle
    m_vecStashedGrenadeThrowPosition = 0x11F8 # Vector
    m_vecStashedVelocity = 0x1204 # Vector
    m_angShootAngleHistory = 0x1210 # QAngle[2]
    m_vecThrowPositionHistory = 0x1228 # Vector[2]
    m_vecVelocityHistory = 0x1240 # Vector[2]
    m_bDiedAirborne = 0x1258 # bool
    m_iBombSiteIndex = 0x125C # CEntityIndex
    m_nWhichBombZone = 0x1260 # int32_t
    m_bInBombZoneTrigger = 0x1264 # bool
    m_bWasInBombZoneTrigger = 0x1265 # bool
    m_iDirection = 0x1268 # int32_t
    m_iShotsFired = 0x126C # int32_t
    m_ArmorValue = 0x1270 # int32_t
    m_flFlinchStack = 0x1274 # float
    m_flVelocityModifier = 0x1278 # float
    m_flHitHeading = 0x127C # float
    m_nHitBodyPart = 0x1280 # int32_t
    m_iHostagesKilled = 0x1284 # int32_t
    m_vecTotalBulletForce = 0x1288 # Vector
    m_flFlashDuration = 0x1294 # float
    m_flFlashMaxAlpha = 0x1298 # float
    m_flProgressBarStartTime = 0x129C # float
    m_iProgressBarDuration = 0x12A0 # int32_t
    m_bWaitForNoAttack = 0x12A4 # bool
    m_flLowerBodyYawTarget = 0x12A8 # float
    m_bStrafing = 0x12AC # bool
    m_lastStandingPos = 0x12B0 # Vector
    m_ignoreLadderJumpTime = 0x12BC # float
    m_ladderSurpressionTimer = 0x12C0 # CountdownTimer
    m_lastLadderNormal = 0x12D8 # Vector
    m_lastLadderPos = 0x12E4 # Vector
    m_thirdPersonHeading = 0x12F0 # QAngle
    m_flSlopeDropOffset = 0x12FC # float
    m_flSlopeDropHeight = 0x1300 # float
    m_vHeadConstraintOffset = 0x1304 # Vector
    m_iLastWeaponFireUsercmd = 0x1318 # int32_t
    m_angEyeAngles = 0x131C # QAngle
    m_bVCollisionInitted = 0x1328 # bool
    m_storedSpawnPosition = 0x132C # Vector
    m_storedSpawnAngle = 0x1338 # QAngle
    m_bIsSpawning = 0x1344 # bool
    m_bHideTargetID = 0x1345 # bool
    m_nNumDangerZoneDamageHits = 0x1348 # int32_t
    m_bHud_MiniScoreHidden = 0x134C # bool
    m_bHud_RadarHidden = 0x134D # bool
    m_nLastKillerIndex = 0x1350 # CEntityIndex
    m_nLastConcurrentKilled = 0x1354 # int32_t
    m_nDeathCamMusic = 0x1358 # int32_t
    m_iAddonBits = 0x135C # int32_t
    m_iPrimaryAddon = 0x1360 # int32_t
    m_iSecondaryAddon = 0x1364 # int32_t
    m_currentDeafnessFilter = 0x1368 # CUtlStringToken
    m_NumEnemiesKilledThisSpawn = 0x136C # int32_t
    m_NumEnemiesKilledThisRound = 0x1370 # int32_t
    m_NumEnemiesAtRoundStart = 0x1374 # int32_t
    m_wasNotKilledNaturally = 0x1378 # bool
    m_vecPlayerPatchEconIndices = 0x137C # uint32_t[5]
    m_iDeathFlags = 0x1390 # int32_t
    m_hPet = 0x1394 # CHandle<CChicken>
    m_unCurrentEquipmentValue = 0x1560 # uint16_t
    m_unRoundStartEquipmentValue = 0x1562 # uint16_t
    m_unFreezetimeEndEquipmentValue = 0x1564 # uint16_t
    m_nSurvivalTeamNumber = 0x1568 # int32_t
    m_bHasDeathInfo = 0x156C # bool
    m_flDeathInfoTime = 0x1570 # float
    m_vecDeathInfoOrigin = 0x1574 # Vector
    m_bKilledByHeadshot = 0x1580 # bool
    m_LastHitBox = 0x1584 # int32_t
    m_LastHealth = 0x1588 # int32_t
    m_flLastCollisionCeiling = 0x158C # float
    m_flLastCollisionCeilingChangeTime = 0x1590 # float
    m_pBot = 0x1598 # CCSBot*
    m_bBotAllowActive = 0x15A0 # bool
    m_bCommittingSuicideOnTeamChange = 0x15A1 # bool

class CCSPlayerResource: # CBaseEntity
    m_bHostageAlive = 0x4C0 # bool[12]
    m_isHostageFollowingSomeone = 0x4CC # bool[12]
    m_iHostageEntityIDs = 0x4D8 # CEntityIndex[12]
    m_bombsiteCenterA = 0x508 # Vector
    m_bombsiteCenterB = 0x514 # Vector
    m_hostageRescueX = 0x520 # int32_t[4]
    m_hostageRescueY = 0x530 # int32_t[4]
    m_hostageRescueZ = 0x540 # int32_t[4]
    m_bEndMatchNextMapAllVoted = 0x550 # bool
    m_foundGoalPositions = 0x551 # bool

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
    m_flMaxFallVelocity = 0x228 # float
    m_vecLadderNormal = 0x22C # Vector
    m_nLadderSurfacePropIndex = 0x238 # int32_t
    m_flDuckAmount = 0x23C # float
    m_flDuckSpeed = 0x240 # float
    m_bDuckOverride = 0x244 # bool
    m_bDesiresDuck = 0x245 # bool
    m_flDuckOffset = 0x248 # float
    m_nDuckTimeMsecs = 0x24C # uint32_t
    m_nDuckJumpTimeMsecs = 0x250 # uint32_t
    m_nJumpTimeMsecs = 0x254 # uint32_t
    m_flLastDuckTime = 0x258 # float
    m_vecLastPositionAtFullCrouchSpeed = 0x268 # Vector2D
    m_duckUntilOnGround = 0x270 # bool
    m_bHasWalkMovedSinceLastJump = 0x271 # bool
    m_bInStuckTest = 0x272 # bool
    m_flStuckCheckTime = 0x280 # float[64][2]
    m_nTraceCount = 0x480 # int32_t
    m_StuckLast = 0x484 # int32_t
    m_bSpeedCropped = 0x488 # bool
    m_nOldWaterLevel = 0x48C # int32_t
    m_flWaterEntryTime = 0x490 # float
    m_vecForward = 0x494 # Vector
    m_vecLeft = 0x4A0 # Vector
    m_vecUp = 0x4AC # Vector
    m_nGameCodeHasMovedPlayerAfterCommand = 0x4B8 # int32_t
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
    m_flNextAttack = 0xA8 # GameTime_t
    m_bIsLookingAtWeapon = 0xAC # bool
    m_bIsHoldingLookAtWeapon = 0xAD # bool
    m_hSavedWeapon = 0xB0 # CHandle<CBasePlayerWeapon>
    m_nTimeToMelee = 0xB4 # int32_t
    m_nTimeToSecondary = 0xB8 # int32_t
    m_nTimeToPrimary = 0xBC # int32_t
    m_nTimeToSniperRifle = 0xC0 # int32_t
    m_bIsBeingGivenItem = 0xC4 # bool
    m_bIsPickingUpItemWithUse = 0xC5 # bool
    m_bPickedUpWeapon = 0xC6 # bool
    m_bDisableAutoDeploy = 0xC7 # bool
    m_nOldShootPositionHistoryCount = 0xC8 # uint32_t
    m_nOldInputHistoryCount = 0x460 # uint32_t

class CCSPulseServerFuncs_Globals:

class CCSSprite: # CSprite

class CCSTakeDamageInfoAPI:

class CCSTeam: # CTeam
    m_nLastRecievedShorthandedRoundBonus = 0x578 # int32_t
    m_nShorthandedRoundBonusStartRound = 0x57C # int32_t
    m_bSurrendered = 0x580 # bool
    m_szTeamMatchStat = 0x581 # char[512]
    m_numMapVictories = 0x784 # int32_t
    m_scoreFirstHalf = 0x788 # int32_t
    m_scoreSecondHalf = 0x78C # int32_t
    m_scoreOvertime = 0x790 # int32_t
    m_szClanTeamname = 0x794 # char[129]
    m_iClanID = 0x818 # uint32_t
    m_szTeamFlagImage = 0x81C # char[8]
    m_szTeamLogoImage = 0x824 # char[8]
    m_flNextResourceTime = 0x82C # float
    m_iLastUpdateSentAt = 0x830 # int32_t

class CCSWeaponBase: # CBasePlayerWeapon
    m_bRemoveable = 0xCE0 # bool
    m_flFireSequenceStartTime = 0xCE8 # float
    m_nFireSequenceStartTimeChange = 0xCEC # int32_t
    m_nFireSequenceStartTimeAck = 0xCF0 # int32_t
    m_ePlayerFireEvent = 0xCF4 # PlayerAnimEvent_t
    m_ePlayerFireEventAttackType = 0xCF8 # WeaponAttackType_t
    m_seqIdle = 0xCFC # HSequence
    m_seqFirePrimary = 0xD00 # HSequence
    m_seqFireSecondary = 0xD04 # HSequence
    m_thirdPersonFireSequences = 0xD08 # CUtlVector<HSequence>
    m_hCurrentThirdPersonSequence = 0xD20 # HSequence
    m_nSilencerBoneIndex = 0xD24 # int32_t
    m_thirdPersonSequences = 0xD28 # HSequence[7]
    m_bPlayerAmmoStockOnPickup = 0xD50 # bool
    m_bRequireUseToTouch = 0xD51 # bool
    m_iState = 0xD54 # CSWeaponState_t
    m_flLastTimeInAir = 0xD58 # GameTime_t
    m_flLastDeployTime = 0xD5C # GameTime_t
    m_nLastEmptySoundCmdNum = 0xD60 # int32_t
    m_nViewModelIndex = 0xD64 # uint32_t
    m_bReloadsWithClips = 0xD68 # bool
    m_flTimeWeaponIdle = 0xD88 # GameTime_t
    m_bFireOnEmpty = 0xD8C # bool
    m_OnPlayerPickup = 0xD90 # CEntityIOOutput
    m_weaponMode = 0xDB8 # CSWeaponMode
    m_flTurningInaccuracyDelta = 0xDBC # float
    m_vecTurningInaccuracyEyeDirLast = 0xDC0 # Vector
    m_flTurningInaccuracy = 0xDCC # float
    m_fAccuracyPenalty = 0xDD0 # float
    m_flLastAccuracyUpdateTime = 0xDD4 # GameTime_t
    m_fAccuracySmoothedForZoom = 0xDD8 # float
    m_fScopeZoomEndTime = 0xDDC # GameTime_t
    m_iRecoilIndex = 0xDE0 # int32_t
    m_flRecoilIndex = 0xDE4 # float
    m_bBurstMode = 0xDE8 # bool
    m_nPostponeFireReadyTicks = 0xDEC # GameTick_t
    m_flPostponeFireReadyFrac = 0xDF0 # float
    m_bInReload = 0xDF4 # bool
    m_bReloadVisuallyComplete = 0xDF5 # bool
    m_flDroppedAtTime = 0xDF8 # GameTime_t
    m_bIsHauledBack = 0xDFC # bool
    m_bSilencerOn = 0xDFD # bool
    m_flTimeSilencerSwitchComplete = 0xE00 # GameTime_t
    m_iOriginalTeamNumber = 0xE04 # int32_t
    m_flNextAttackRenderTimeOffset = 0xE08 # float
    m_bCanBePickedUp = 0xE20 # bool
    m_bUseCanOverrideNextOwnerTouchTime = 0xE21 # bool
    m_nextOwnerTouchTime = 0xE24 # GameTime_t
    m_nextPrevOwnerTouchTime = 0xE28 # GameTime_t
    m_hPrevOwner = 0xE2C # CHandle<CCSPlayerPawn>
    m_nDropTick = 0xE30 # GameTick_t
    m_donated = 0xE54 # bool
    m_fLastShotTime = 0xE58 # GameTime_t
    m_bWasOwnedByCT = 0xE5C # bool
    m_bWasOwnedByTerrorist = 0xE5D # bool
    m_bFiredOutOfAmmoEvent = 0xE5E # bool
    m_numRemoveUnownedWeaponThink = 0xE60 # int32_t
    m_IronSightController = 0xE68 # CIronSightController
    m_iIronSightMode = 0xE80 # int32_t
    m_flLastLOSTraceFailureTime = 0xE84 # GameTime_t
    m_iNumEmptyAttacks = 0xE88 # int32_t
    m_flWatTickOffset = 0xE8C # float

class CCSWeaponBaseAPI:

class CCSWeaponBaseGun: # CCSWeaponBase
    m_zoomLevel = 0xE90 # int32_t
    m_iBurstShotsRemaining = 0xE94 # int32_t
    m_silencedModelIndex = 0xEA0 # int32_t
    m_inPrecache = 0xEA4 # bool
    m_bNeedsBoltAction = 0xEA5 # bool
    m_bSkillReloadAvailable = 0xEA6 # bool
    m_bSkillReloadLiftedReloadKey = 0xEA7 # bool
    m_bSkillBoltInterruptAvailable = 0xEA8 # bool
    m_bSkillBoltLiftedFireKey = 0xEA9 # bool

class CCSWeaponBaseVData: # CBasePlayerWeaponVData
    m_WeaponType = 0x248 # CSWeaponType
    m_WeaponCategory = 0x24C # CSWeaponCategory
    m_szViewModel = 0x250 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    m_szPlayerModel = 0x330 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    m_szWorldDroppedModel = 0x410 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    m_szAimsightLensMaskModel = 0x4F0 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    m_szMagazineModel = 0x5D0 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    m_szHeatEffect = 0x6B0 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    m_szEjectBrassEffect = 0x790 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    m_szMuzzleFlashParticleAlt = 0x870 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    m_szMuzzleFlashThirdPersonParticle = 0x950 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    m_szMuzzleFlashThirdPersonParticleAlt = 0xA30 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    m_szTracerParticle = 0xB10 # CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    m_GearSlot = 0xBF0 # gear_slot_t
    m_GearSlotPosition = 0xBF4 # int32_t
    m_DefaultLoadoutSlot = 0xBF8 # loadout_slot_t
    m_sWrongTeamMsg = 0xC00 # CUtlString
    m_nPrice = 0xC08 # int32_t
    m_nKillAward = 0xC0C # int32_t
    m_nPrimaryReserveAmmoMax = 0xC10 # int32_t
    m_nSecondaryReserveAmmoMax = 0xC14 # int32_t
    m_bMeleeWeapon = 0xC18 # bool
    m_bHasBurstMode = 0xC19 # bool
    m_bIsRevolver = 0xC1A # bool
    m_bCannotShootUnderwater = 0xC1B # bool
    m_szName = 0xC20 # CGlobalSymbol
    m_szAnimExtension = 0xC28 # CUtlString
    m_eSilencerType = 0xC30 # CSWeaponSilencerType
    m_nCrosshairMinDistance = 0xC34 # int32_t
    m_nCrosshairDeltaDistance = 0xC38 # int32_t
    m_bIsFullAuto = 0xC3C # bool
    m_nNumBullets = 0xC40 # int32_t
    m_flCycleTime = 0xC44 # CFiringModeFloat
    m_flMaxSpeed = 0xC4C # CFiringModeFloat
    m_flSpread = 0xC54 # CFiringModeFloat
    m_flInaccuracyCrouch = 0xC5C # CFiringModeFloat
    m_flInaccuracyStand = 0xC64 # CFiringModeFloat
    m_flInaccuracyJump = 0xC6C # CFiringModeFloat
    m_flInaccuracyLand = 0xC74 # CFiringModeFloat
    m_flInaccuracyLadder = 0xC7C # CFiringModeFloat
    m_flInaccuracyFire = 0xC84 # CFiringModeFloat
    m_flInaccuracyMove = 0xC8C # CFiringModeFloat
    m_flRecoilAngle = 0xC94 # CFiringModeFloat
    m_flRecoilAngleVariance = 0xC9C # CFiringModeFloat
    m_flRecoilMagnitude = 0xCA4 # CFiringModeFloat
    m_flRecoilMagnitudeVariance = 0xCAC # CFiringModeFloat
    m_nTracerFrequency = 0xCB4 # CFiringModeInt
    m_flInaccuracyJumpInitial = 0xCBC # float
    m_flInaccuracyJumpApex = 0xCC0 # float
    m_flInaccuracyReload = 0xCC4 # float
    m_nRecoilSeed = 0xCC8 # int32_t
    m_nSpreadSeed = 0xCCC # int32_t
    m_flTimeToIdleAfterFire = 0xCD0 # float
    m_flIdleInterval = 0xCD4 # float
    m_flAttackMovespeedFactor = 0xCD8 # float
    m_flHeatPerShot = 0xCDC # float
    m_flInaccuracyPitchShift = 0xCE0 # float
    m_flInaccuracyAltSoundThreshold = 0xCE4 # float
    m_flBotAudibleRange = 0xCE8 # float
    m_szUseRadioSubtitle = 0xCF0 # CUtlString
    m_bUnzoomsAfterShot = 0xCF8 # bool
    m_bHideViewModelWhenZoomed = 0xCF9 # bool
    m_nZoomLevels = 0xCFC # int32_t
    m_nZoomFOV1 = 0xD00 # int32_t
    m_nZoomFOV2 = 0xD04 # int32_t
    m_flZoomTime0 = 0xD08 # float
    m_flZoomTime1 = 0xD0C # float
    m_flZoomTime2 = 0xD10 # float
    m_flIronSightPullUpSpeed = 0xD14 # float
    m_flIronSightPutDownSpeed = 0xD18 # float
    m_flIronSightFOV = 0xD1C # float
    m_flIronSightPivotForward = 0xD20 # float
    m_flIronSightLooseness = 0xD24 # float
    m_angPivotAngle = 0xD28 # QAngle
    m_vecIronSightEyePos = 0xD34 # Vector
    m_nDamage = 0xD40 # int32_t
    m_flHeadshotMultiplier = 0xD44 # float
    m_flArmorRatio = 0xD48 # float
    m_flPenetration = 0xD4C # float
    m_flRange = 0xD50 # float
    m_flRangeModifier = 0xD54 # float
    m_flFlinchVelocityModifierLarge = 0xD58 # float
    m_flFlinchVelocityModifierSmall = 0xD5C # float
    m_flRecoveryTimeCrouch = 0xD60 # float
    m_flRecoveryTimeStand = 0xD64 # float
    m_flRecoveryTimeCrouchFinal = 0xD68 # float
    m_flRecoveryTimeStandFinal = 0xD6C # float
    m_nRecoveryTransitionStartBullet = 0xD70 # int32_t
    m_nRecoveryTransitionEndBullet = 0xD74 # int32_t
    m_flThrowVelocity = 0xD78 # float
    m_vSmokeColor = 0xD7C # Vector
    m_szAnimClass = 0xD88 # CGlobalSymbol

class CCSWeaponBaseVDataAPI:

class CChangeLevel: # CBaseTrigger
    m_sMapName = 0x8B8 # CUtlString
    m_sLandmarkName = 0x8C0 # CUtlString
    m_OnChangeLevel = 0x8C8 # CEntityIOOutput
    m_bTouched = 0x8F0 # bool
    m_bNoTouch = 0x8F1 # bool
    m_bNewChapter = 0x8F2 # bool
    m_bOnChangeLevelFired = 0x8F3 # bool

class CChicken: # CDynamicProp
    m_AttributeManager = 0xB80 # CAttributeContainer
    m_OriginalOwnerXuidLow = 0xE48 # uint32_t
    m_OriginalOwnerXuidHigh = 0xE4C # uint32_t
    m_updateTimer = 0xE50 # CountdownTimer
    m_stuckAnchor = 0xE68 # Vector
    m_stuckTimer = 0xE78 # CountdownTimer
    m_collisionStuckTimer = 0xE90 # CountdownTimer
    m_isOnGround = 0xEA8 # bool
    m_vFallVelocity = 0xEAC # Vector
    m_activity = 0xEB8 # ChickenActivity
    m_activityTimer = 0xEC0 # CountdownTimer
    m_turnRate = 0xED8 # float
    m_fleeFrom = 0xEDC # CHandle<CBaseEntity>
    m_moveRateThrottleTimer = 0xEE0 # CountdownTimer
    m_startleTimer = 0xEF8 # CountdownTimer
    m_vocalizeTimer = 0xF10 # CountdownTimer
    m_flWhenZombified = 0xF28 # GameTime_t
    m_jumpedThisFrame = 0xF2C # bool
    m_leader = 0xF30 # CHandle<CCSPlayerPawn>
    m_reuseTimer = 0xF38 # CountdownTimer
    m_hasBeenUsed = 0xF50 # bool
    m_jumpTimer = 0xF58 # CountdownTimer
    m_flLastJumpTime = 0xF70 # float
    m_bInJump = 0xF74 # bool
    m_isWaitingForLeader = 0xF75 # bool
    m_repathTimer = 0x2F80 # CountdownTimer
    m_inhibitDoorTimer = 0x2F98 # CountdownTimer
    m_inhibitObstacleAvoidanceTimer = 0x3028 # CountdownTimer
    m_vecPathGoal = 0x3048 # Vector
    m_flActiveFollowStartTime = 0x3054 # GameTime_t
    m_followMinuteTimer = 0x3058 # CountdownTimer
    m_vecLastEggPoopPosition = 0x3070 # Vector
    m_vecEggsPooped = 0x3080 # CUtlVector<CHandle<CBaseEntity>>
    m_BlockDirectionTimer = 0x30A0 # CountdownTimer

class CChicken_GraphController: # CAnimGraphControllerBase
    m_pszActivity = 0x18 # CAnimGraphParamRef<char*>

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
    m_flFadeInDuration = 0x4C0 # float
    m_flFadeOutDuration = 0x4C4 # float
    m_flStartFadeInWeight = 0x4C8 # float
    m_flStartFadeOutWeight = 0x4CC # float
    m_flTimeStartFadeIn = 0x4D0 # GameTime_t
    m_flTimeStartFadeOut = 0x4D4 # GameTime_t
    m_flMaxWeight = 0x4D8 # float
    m_bStartDisabled = 0x4DC # bool
    m_bEnabled = 0x4DD # bool
    m_bMaster = 0x4DE # bool
    m_bClientSide = 0x4DF # bool
    m_bExclusive = 0x4E0 # bool
    m_MinFalloff = 0x4E4 # float
    m_MaxFalloff = 0x4E8 # float
    m_flCurWeight = 0x4EC # float
    m_netlookupFilename = 0x4F0 # char[512]
    m_lookupFilename = 0x6F0 # CUtlSymbolLarge

class CColorCorrectionVolume: # CBaseTrigger
    m_bEnabled = 0x8B8 # bool
    m_MaxWeight = 0x8BC # float
    m_FadeDuration = 0x8C0 # float
    m_bStartDisabled = 0x8C4 # bool
    m_Weight = 0x8C8 # float
    m_lookupFilename = 0x8CC # char[512]
    m_LastEnterWeight = 0xACC # float
    m_LastEnterTime = 0xAD0 # GameTime_t
    m_LastExitWeight = 0xAD4 # float
    m_LastExitTime = 0xAD8 # GameTime_t

class CCommentaryAuto: # CBaseEntity
    m_OnCommentaryNewGame = 0x4C0 # CEntityIOOutput
    m_OnCommentaryMidGame = 0x4E8 # CEntityIOOutput
    m_OnCommentaryMultiplayerSpawn = 0x510 # CEntityIOOutput

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
    m_massScale = 0x8E8 # float

class CCoopBonusCoin: # CDynamicProp

class CCopyRecipientFilter:
    m_Flags = 0x8 # int32_t
    m_Recipients = 0x10 # CUtlVector<CPlayerSlot>

class CCredits: # CPointEntity
    m_OnCreditsDone = 0x4C0 # CEntityIOOutput
    m_bRolledOutroCredits = 0x4E8 # bool
    m_flLogoLength = 0x4EC # float

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
    m_nNpcEvents = 0x4500 # int32_t

class CDecoyGrenade: # CBaseCSGrenade

class CDecoyProjectile: # CBaseCSGrenadeProjectile
    m_nDecoyShotTick = 0xAA0 # int32_t
    m_shotsRemaining = 0xAA4 # int32_t
    m_fExpireTime = 0xAA8 # GameTime_t
    m_decoyWeaponDefIndex = 0xAB8 # uint16_t

class CDynamicLight: # CBaseModelEntity
    m_ActualFlags = 0x710 # uint8_t
    m_Flags = 0x711 # uint8_t
    m_LightStyle = 0x712 # uint8_t
    m_On = 0x713 # bool
    m_Radius = 0x714 # float
    m_Exponent = 0x718 # int32_t
    m_InnerAngle = 0x71C # float
    m_OuterAngle = 0x720 # float
    m_SpotRadius = 0x724 # float

class CDynamicProp: # CBreakableProp
    m_bCreateNavObstacle = 0xA68 # bool
    m_bUseHitboxesForRenderBox = 0xA69 # bool
    m_bUseAnimGraph = 0xA6A # bool
    m_pOutputAnimBegun = 0xA70 # CEntityIOOutput
    m_pOutputAnimOver = 0xA98 # CEntityIOOutput
    m_pOutputAnimLoopCycleOver = 0xAC0 # CEntityIOOutput
    m_OnAnimReachedStart = 0xAE8 # CEntityIOOutput
    m_OnAnimReachedEnd = 0xB10 # CEntityIOOutput
    m_iszIdleAnim = 0xB38 # CUtlSymbolLarge
    m_nIdleAnimLoopMode = 0xB40 # AnimLoopMode_t
    m_bRandomizeCycle = 0xB44 # bool
    m_bStartDisabled = 0xB45 # bool
    m_bFiredStartEndOutput = 0xB46 # bool
    m_bForceNpcExclude = 0xB47 # bool
    m_bCreateNonSolid = 0xB48 # bool
    m_bIsOverrideProp = 0xB49 # bool
    m_iInitialGlowState = 0xB4C # int32_t
    m_nGlowRange = 0xB50 # int32_t
    m_nGlowRangeMin = 0xB54 # int32_t
    m_glowColor = 0xB58 # Color
    m_nGlowTeam = 0xB5C # int32_t

class CDynamicPropAPI:

class CDynamicPropAlias_cable_dynamic: # CDynamicProp

class CDynamicPropAlias_dynamic_prop: # CDynamicProp

class CDynamicPropAlias_prop_dynamic_override: # CDynamicProp

class CEconEntity: # CBaseFlex
    m_AttributeManager = 0x988 # CAttributeContainer
    m_OriginalOwnerXuidLow = 0xC50 # uint32_t
    m_OriginalOwnerXuidHigh = 0xC54 # uint32_t
    m_nFallbackPaintKit = 0xC58 # int32_t
    m_nFallbackSeed = 0xC5C # int32_t
    m_flFallbackWear = 0xC60 # float
    m_nFallbackStatTrak = 0xC64 # int32_t
    m_hOldProvidee = 0xC68 # CHandle<CBaseEntity>
    m_iOldOwnerClass = 0xC6C # int32_t

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
    m_nForceSkin = 0xC70 # int32_t
    m_bAlwaysAllow = 0xC74 # bool

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
    m_flFadeInStart = 0x710 # float
    m_flFadeInLength = 0x714 # float
    m_flFadeOutModelStart = 0x718 # float
    m_flFadeOutModelLength = 0x71C # float
    m_flFadeOutStart = 0x720 # float
    m_flFadeOutLength = 0x724 # float
    m_flStartTime = 0x728 # GameTime_t
    m_nDissolveType = 0x72C # EntityDisolveType_t
    m_vDissolverOrigin = 0x730 # Vector
    m_nMagnitude = 0x73C # uint32_t

class CEntityFlame: # CBaseEntity
    m_hEntAttached = 0x4C0 # CHandle<CBaseEntity>
    m_bCheapEffect = 0x4C4 # bool
    m_flSize = 0x4C8 # float
    m_bUseHitboxes = 0x4CC # bool
    m_iNumHitboxFires = 0x4D0 # int32_t
    m_flHitboxFireScale = 0x4D4 # float
    m_flLifetime = 0x4D8 # GameTime_t
    m_hAttacker = 0x4DC # CHandle<CBaseEntity>
    m_iDangerSound = 0x4E0 # int32_t
    m_flDirectDamagePerSecond = 0x4E4 # float
    m_iCustomDamageType = 0x4E8 # int32_t

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
    m_bVisibleinPVS = 0x30 # bool

class CEntitySubclassVDataBase:

class CEnvBeam: # CBeam
    m_active = 0x7B0 # int32_t
    m_spriteTexture = 0x7B8 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_iszStartEntity = 0x7C0 # CUtlSymbolLarge
    m_iszEndEntity = 0x7C8 # CUtlSymbolLarge
    m_life = 0x7D0 # float
    m_boltWidth = 0x7D4 # float
    m_noiseAmplitude = 0x7D8 # float
    m_speed = 0x7DC # int32_t
    m_restrike = 0x7E0 # float
    m_iszSpriteName = 0x7E8 # CUtlSymbolLarge
    m_frameStart = 0x7F0 # int32_t
    m_vEndPointWorld = 0x7F4 # Vector
    m_vEndPointRelative = 0x800 # Vector
    m_radius = 0x80C # float
    m_TouchType = 0x810 # Touch_t
    m_iFilterName = 0x818 # CUtlSymbolLarge
    m_hFilter = 0x820 # CHandle<CBaseEntity>
    m_iszDecal = 0x828 # CUtlSymbolLarge
    m_OnTouchedByEntity = 0x830 # CEntityIOOutput

class CEnvBeverage: # CBaseEntity
    m_CanInDispenser = 0x4C0 # bool
    m_nBeverageType = 0x4C4 # int32_t

class CEnvCombinedLightProbeVolume: # CBaseEntity
    m_Color = 0x1518 # Color
    m_flBrightness = 0x151C # float
    m_hCubemapTexture = 0x1520 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_bCustomCubemapTexture = 0x1528 # bool
    m_hLightProbeTexture = 0x1530 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hLightProbeDirectLightIndicesTexture = 0x1538 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hLightProbeDirectLightScalarsTexture = 0x1540 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hLightProbeDirectLightShadowsTexture = 0x1548 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_vBoxMins = 0x1550 # Vector
    m_vBoxMaxs = 0x155C # Vector
    m_bMoveable = 0x1568 # bool
    m_nHandshake = 0x156C # int32_t
    m_nEnvCubeMapArrayIndex = 0x1570 # int32_t
    m_nPriority = 0x1574 # int32_t
    m_bStartDisabled = 0x1578 # bool
    m_flEdgeFadeDist = 0x157C # float
    m_vEdgeFadeDists = 0x1580 # Vector
    m_nLightProbeSizeX = 0x158C # int32_t
    m_nLightProbeSizeY = 0x1590 # int32_t
    m_nLightProbeSizeZ = 0x1594 # int32_t
    m_nLightProbeAtlasX = 0x1598 # int32_t
    m_nLightProbeAtlasY = 0x159C # int32_t
    m_nLightProbeAtlasZ = 0x15A0 # int32_t
    m_bEnabled = 0x15B9 # bool

class CEnvCubemap: # CBaseEntity
    m_hCubemapTexture = 0x540 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_bCustomCubemapTexture = 0x548 # bool
    m_flInfluenceRadius = 0x54C # float
    m_vBoxProjectMins = 0x550 # Vector
    m_vBoxProjectMaxs = 0x55C # Vector
    m_bMoveable = 0x568 # bool
    m_nHandshake = 0x56C # int32_t
    m_nEnvCubeMapArrayIndex = 0x570 # int32_t
    m_nPriority = 0x574 # int32_t
    m_flEdgeFadeDist = 0x578 # float
    m_vEdgeFadeDists = 0x57C # Vector
    m_flDiffuseScale = 0x588 # float
    m_bStartDisabled = 0x58C # bool
    m_bDefaultEnvMap = 0x58D # bool
    m_bDefaultSpecEnvMap = 0x58E # bool
    m_bIndoorCubeMap = 0x58F # bool
    m_bCopyDiffuseFromDefaultCubemap = 0x590 # bool
    m_bEnabled = 0x5A0 # bool

class CEnvCubemapBox: # CEnvCubemap

class CEnvCubemapFog: # CBaseEntity
    m_flEndDistance = 0x4C0 # float
    m_flStartDistance = 0x4C4 # float
    m_flFogFalloffExponent = 0x4C8 # float
    m_bHeightFogEnabled = 0x4CC # bool
    m_flFogHeightWidth = 0x4D0 # float
    m_flFogHeightEnd = 0x4D4 # float
    m_flFogHeightStart = 0x4D8 # float
    m_flFogHeightExponent = 0x4DC # float
    m_flLODBias = 0x4E0 # float
    m_bActive = 0x4E4 # bool
    m_bStartDisabled = 0x4E5 # bool
    m_flFogMaxOpacity = 0x4E8 # float
    m_nCubemapSourceType = 0x4EC # int32_t
    m_hSkyMaterial = 0x4F0 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_iszSkyEntity = 0x4F8 # CUtlSymbolLarge
    m_hFogCubemapTexture = 0x500 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_bHasHeightFogEnd = 0x508 # bool
    m_bFirstTime = 0x509 # bool

class CEnvDecal: # CBaseModelEntity
    m_hDecalMaterial = 0x710 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_flWidth = 0x718 # float
    m_flHeight = 0x71C # float
    m_flDepth = 0x720 # float
    m_nRenderOrder = 0x724 # uint32_t
    m_bProjectOnWorld = 0x728 # bool
    m_bProjectOnCharacters = 0x729 # bool
    m_bProjectOnWater = 0x72A # bool
    m_flDepthSortBias = 0x72C # float

class CEnvDetailController: # CBaseEntity
    m_flFadeStartDist = 0x4C0 # float
    m_flFadeEndDist = 0x4C4 # float

class CEnvEntityIgniter: # CBaseEntity
    m_flLifetime = 0x4C0 # float

class CEnvEntityMaker: # CPointEntity
    m_vecEntityMins = 0x4C0 # Vector
    m_vecEntityMaxs = 0x4CC # Vector
    m_hCurrentInstance = 0x4D8 # CHandle<CBaseEntity>
    m_hCurrentBlocker = 0x4DC # CHandle<CBaseEntity>
    m_vecBlockerOrigin = 0x4E0 # Vector
    m_angPostSpawnDirection = 0x4EC # QAngle
    m_flPostSpawnDirectionVariance = 0x4F8 # float
    m_flPostSpawnSpeed = 0x4FC # float
    m_bPostSpawnUseAngles = 0x500 # bool
    m_iszTemplate = 0x508 # CUtlSymbolLarge
    m_pOutputOnSpawned = 0x510 # CEntityIOOutput
    m_pOutputOnFailedSpawn = 0x538 # CEntityIOOutput

class CEnvExplosion: # CModelPointEntity
    m_iMagnitude = 0x710 # int32_t
    m_flPlayerDamage = 0x714 # float
    m_iRadiusOverride = 0x718 # int32_t
    m_flInnerRadius = 0x71C # float
    m_spriteScale = 0x720 # int32_t
    m_flDamageForce = 0x724 # float
    m_hInflictor = 0x728 # CHandle<CBaseEntity>
    m_iCustomDamageType = 0x72C # int32_t
    m_iszExplosionType = 0x738 # CUtlSymbolLarge
    m_iszCustomEffectName = 0x740 # CUtlSymbolLarge
    m_iszCustomSoundName = 0x748 # CUtlSymbolLarge
    m_iClassIgnore = 0x750 # Class_T
    m_iClassIgnore2 = 0x754 # Class_T
    m_iszEntityIgnoreName = 0x758 # CUtlSymbolLarge
    m_hEntityIgnore = 0x760 # CHandle<CBaseEntity>

class CEnvFade: # CLogicalEntity
    m_fadeColor = 0x4C0 # Color
    m_Duration = 0x4C4 # float
    m_HoldDuration = 0x4C8 # float
    m_OnBeginFade = 0x4D0 # CEntityIOOutput

class CEnvFireSensor: # CBaseEntity
    m_bEnabled = 0x4C0 # bool
    m_bHeatAtLevel = 0x4C1 # bool
    m_radius = 0x4C4 # float
    m_targetLevel = 0x4C8 # float
    m_targetTime = 0x4CC # float
    m_levelTime = 0x4D0 # float
    m_OnHeatLevelStart = 0x4D8 # CEntityIOOutput
    m_OnHeatLevelEnd = 0x500 # CEntityIOOutput

class CEnvFireSource: # CBaseEntity
    m_bEnabled = 0x4C0 # bool
    m_radius = 0x4C4 # float
    m_damage = 0x4C8 # float

class CEnvFunnel: # CBaseEntity

class CEnvGlobal: # CLogicalEntity
    m_outCounter = 0x4C0 # CEntityOutputTemplate<int32_t>
    m_globalstate = 0x4E8 # CUtlSymbolLarge
    m_triggermode = 0x4F0 # int32_t
    m_initialstate = 0x4F4 # int32_t
    m_counter = 0x4F8 # int32_t

class CEnvHudHint: # CPointEntity
    m_iszMessage = 0x4C0 # CUtlSymbolLarge

class CEnvInstructorHint: # CPointEntity
    m_iszName = 0x4C0 # CUtlSymbolLarge
    m_iszReplace_Key = 0x4C8 # CUtlSymbolLarge
    m_iszHintTargetEntity = 0x4D0 # CUtlSymbolLarge
    m_iTimeout = 0x4D8 # int32_t
    m_iDisplayLimit = 0x4DC # int32_t
    m_iszIcon_Onscreen = 0x4E0 # CUtlSymbolLarge
    m_iszIcon_Offscreen = 0x4E8 # CUtlSymbolLarge
    m_iszCaption = 0x4F0 # CUtlSymbolLarge
    m_iszActivatorCaption = 0x4F8 # CUtlSymbolLarge
    m_Color = 0x500 # Color
    m_fIconOffset = 0x504 # float
    m_fRange = 0x508 # float
    m_iPulseOption = 0x50C # uint8_t
    m_iAlphaOption = 0x50D # uint8_t
    m_iShakeOption = 0x50E # uint8_t
    m_bStatic = 0x50F # bool
    m_bNoOffscreen = 0x510 # bool
    m_bForceCaption = 0x511 # bool
    m_iInstanceType = 0x514 # int32_t
    m_bSuppressRest = 0x518 # bool
    m_iszBinding = 0x520 # CUtlSymbolLarge
    m_bAllowNoDrawTarget = 0x528 # bool
    m_bAutoStart = 0x529 # bool
    m_bLocalPlayerOnly = 0x52A # bool

class CEnvInstructorVRHint: # CPointEntity
    m_iszName = 0x4C0 # CUtlSymbolLarge
    m_iszHintTargetEntity = 0x4C8 # CUtlSymbolLarge
    m_iTimeout = 0x4D0 # int32_t
    m_iszCaption = 0x4D8 # CUtlSymbolLarge
    m_iszStartSound = 0x4E0 # CUtlSymbolLarge
    m_iLayoutFileType = 0x4E8 # int32_t
    m_iszCustomLayoutFile = 0x4F0 # CUtlSymbolLarge
    m_iAttachType = 0x4F8 # int32_t
    m_flHeightOffset = 0x4FC # float

class CEnvLaser: # CBeam
    m_iszLaserTarget = 0x7B0 # CUtlSymbolLarge
    m_pSprite = 0x7B8 # CSprite*
    m_iszSpriteName = 0x7C0 # CUtlSymbolLarge
    m_firePosition = 0x7C8 # Vector
    m_flStartFrame = 0x7D4 # float

class CEnvLightProbeVolume: # CBaseEntity
    m_hLightProbeTexture = 0x1498 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hLightProbeDirectLightIndicesTexture = 0x14A0 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hLightProbeDirectLightScalarsTexture = 0x14A8 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hLightProbeDirectLightShadowsTexture = 0x14B0 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_vBoxMins = 0x14B8 # Vector
    m_vBoxMaxs = 0x14C4 # Vector
    m_bMoveable = 0x14D0 # bool
    m_nHandshake = 0x14D4 # int32_t
    m_nPriority = 0x14D8 # int32_t
    m_bStartDisabled = 0x14DC # bool
    m_nLightProbeSizeX = 0x14E0 # int32_t
    m_nLightProbeSizeY = 0x14E4 # int32_t
    m_nLightProbeSizeZ = 0x14E8 # int32_t
    m_nLightProbeAtlasX = 0x14EC # int32_t
    m_nLightProbeAtlasY = 0x14F0 # int32_t
    m_nLightProbeAtlasZ = 0x14F4 # int32_t
    m_bEnabled = 0x1501 # bool

class CEnvMicrophone: # CPointEntity
    m_bDisabled = 0x4C0 # bool
    m_hMeasureTarget = 0x4C4 # CHandle<CBaseEntity>
    m_nSoundMask = 0x4C8 # int32_t
    m_flSensitivity = 0x4CC # float
    m_flSmoothFactor = 0x4D0 # float
    m_flMaxRange = 0x4D4 # float
    m_iszSpeakerName = 0x4D8 # CUtlSymbolLarge
    m_hSpeaker = 0x4E0 # CHandle<CBaseEntity>
    m_bAvoidFeedback = 0x4E4 # bool
    m_iSpeakerDSPPreset = 0x4E8 # int32_t
    m_iszListenFilter = 0x4F0 # CUtlSymbolLarge
    m_hListenFilter = 0x4F8 # CHandle<CBaseFilter>
    m_SoundLevel = 0x500 # CEntityOutputTemplate<float>
    m_OnRoutedSound = 0x528 # CEntityIOOutput
    m_OnHeardSound = 0x550 # CEntityIOOutput
    m_szLastSound = 0x578 # char[256]
    m_iLastRoutedFrame = 0x678 # int32_t

class CEnvMuzzleFlash: # CPointEntity
    m_flScale = 0x4C0 # float
    m_iszParentAttachment = 0x4C8 # CUtlSymbolLarge

class CEnvParticleGlow: # CParticleSystem
    m_flAlphaScale = 0xC88 # float
    m_flRadiusScale = 0xC8C # float
    m_flSelfIllumScale = 0xC90 # float
    m_ColorTint = 0xC94 # Color
    m_hTextureOverride = 0xC98 # CStrongHandle<InfoForResourceTypeCTextureBase>

class CEnvProjectedTexture: # CModelPointEntity
    m_hTargetEntity = 0x710 # CHandle<CBaseEntity>
    m_bState = 0x714 # bool
    m_bAlwaysUpdate = 0x715 # bool
    m_flLightFOV = 0x718 # float
    m_bEnableShadows = 0x71C # bool
    m_bSimpleProjection = 0x71D # bool
    m_bLightOnlyTarget = 0x71E # bool
    m_bLightWorld = 0x71F # bool
    m_bCameraSpace = 0x720 # bool
    m_flBrightnessScale = 0x724 # float
    m_LightColor = 0x728 # Color
    m_flIntensity = 0x72C # float
    m_flLinearAttenuation = 0x730 # float
    m_flQuadraticAttenuation = 0x734 # float
    m_bVolumetric = 0x738 # bool
    m_flNoiseStrength = 0x73C # float
    m_flFlashlightTime = 0x740 # float
    m_nNumPlanes = 0x744 # uint32_t
    m_flPlaneOffset = 0x748 # float
    m_flVolumetricIntensity = 0x74C # float
    m_flColorTransitionTime = 0x750 # float
    m_flAmbient = 0x754 # float
    m_SpotlightTextureName = 0x758 # char[512]
    m_nSpotlightTextureFrame = 0x958 # int32_t
    m_nShadowQuality = 0x95C # uint32_t
    m_flNearZ = 0x960 # float
    m_flFarZ = 0x964 # float
    m_flProjectionSize = 0x968 # float
    m_flRotation = 0x96C # float
    m_bFlipHorizontal = 0x970 # bool

class CEnvScreenOverlay: # CPointEntity
    m_iszOverlayNames = 0x4C0 # CUtlSymbolLarge[10]
    m_flOverlayTimes = 0x510 # float[10]
    m_flStartTime = 0x538 # GameTime_t
    m_iDesiredOverlay = 0x53C # int32_t
    m_bIsActive = 0x540 # bool

class CEnvShake: # CPointEntity
    m_limitToEntity = 0x4C0 # CUtlSymbolLarge
    m_Amplitude = 0x4C8 # float
    m_Frequency = 0x4CC # float
    m_Duration = 0x4D0 # float
    m_Radius = 0x4D4 # float
    m_stopTime = 0x4D8 # GameTime_t
    m_nextShake = 0x4DC # GameTime_t
    m_currentAmp = 0x4E0 # float
    m_maxForce = 0x4E4 # Vector
    m_shakeCallback = 0x4F8 # CPhysicsShake

class CEnvSky: # CBaseModelEntity
    m_hSkyMaterial = 0x710 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_hSkyMaterialLightingOnly = 0x718 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_bStartDisabled = 0x720 # bool
    m_vTintColor = 0x721 # Color
    m_vTintColorLightingOnly = 0x725 # Color
    m_flBrightnessScale = 0x72C # float
    m_nFogType = 0x730 # int32_t
    m_flFogMinStart = 0x734 # float
    m_flFogMinEnd = 0x738 # float
    m_flFogMaxStart = 0x73C # float
    m_flFogMaxEnd = 0x740 # float
    m_bEnabled = 0x744 # bool

class CEnvSoundscape: # CServerOnlyEntity
    m_OnPlay = 0x4C0 # CEntityIOOutput
    m_flRadius = 0x4E8 # float
    m_soundscapeName = 0x4F0 # CUtlSymbolLarge
    m_soundEventName = 0x4F8 # CUtlSymbolLarge
    m_bOverrideWithEvent = 0x500 # bool
    m_soundscapeIndex = 0x504 # int32_t
    m_soundscapeEntityListId = 0x508 # int32_t
    m_soundEventHash = 0x50C # uint32_t
    m_positionNames = 0x510 # CUtlSymbolLarge[8]
    m_hProxySoundscape = 0x550 # CHandle<CEnvSoundscape>
    m_bDisabled = 0x554 # bool

class CEnvSoundscapeAlias_snd_soundscape: # CEnvSoundscape

class CEnvSoundscapeProxy: # CEnvSoundscape
    m_MainSoundscapeName = 0x558 # CUtlSymbolLarge

class CEnvSoundscapeProxyAlias_snd_soundscape_proxy: # CEnvSoundscapeProxy

class CEnvSoundscapeTriggerable: # CEnvSoundscape

class CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable: # CEnvSoundscapeTriggerable

class CEnvSpark: # CPointEntity
    m_flDelay = 0x4C0 # float
    m_nMagnitude = 0x4C4 # int32_t
    m_nTrailLength = 0x4C8 # int32_t
    m_nType = 0x4CC # int32_t
    m_OnSpark = 0x4D0 # CEntityIOOutput

class CEnvSplash: # CPointEntity
    m_flScale = 0x4C0 # float

class CEnvTilt: # CPointEntity
    m_Duration = 0x4C0 # float
    m_Radius = 0x4C4 # float
    m_TiltTime = 0x4C8 # float
    m_stopTime = 0x4CC # GameTime_t

class CEnvTracer: # CPointEntity
    m_vecEnd = 0x4C0 # Vector
    m_flDelay = 0x4CC # float

class CEnvViewPunch: # CPointEntity
    m_flRadius = 0x4C0 # float
    m_angViewPunch = 0x4C4 # QAngle

class CEnvVolumetricFogController: # CBaseEntity
    m_flScattering = 0x4C0 # float
    m_flAnisotropy = 0x4C4 # float
    m_flFadeSpeed = 0x4C8 # float
    m_flDrawDistance = 0x4CC # float
    m_flFadeInStart = 0x4D0 # float
    m_flFadeInEnd = 0x4D4 # float
    m_flIndirectStrength = 0x4D8 # float
    m_nIndirectTextureDimX = 0x4DC # int32_t
    m_nIndirectTextureDimY = 0x4E0 # int32_t
    m_nIndirectTextureDimZ = 0x4E4 # int32_t
    m_vBoxMins = 0x4E8 # Vector
    m_vBoxMaxs = 0x4F4 # Vector
    m_bActive = 0x500 # bool
    m_flStartAnisoTime = 0x504 # GameTime_t
    m_flStartScatterTime = 0x508 # GameTime_t
    m_flStartDrawDistanceTime = 0x50C # GameTime_t
    m_flStartAnisotropy = 0x510 # float
    m_flStartScattering = 0x514 # float
    m_flStartDrawDistance = 0x518 # float
    m_flDefaultAnisotropy = 0x51C # float
    m_flDefaultScattering = 0x520 # float
    m_flDefaultDrawDistance = 0x524 # float
    m_bStartDisabled = 0x528 # bool
    m_bEnableIndirect = 0x529 # bool
    m_bIsMaster = 0x52A # bool
    m_hFogIndirectTexture = 0x530 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_nForceRefreshCount = 0x538 # int32_t
    m_bFirstTime = 0x53C # bool

class CEnvVolumetricFogVolume: # CBaseEntity
    m_bActive = 0x4C0 # bool
    m_vBoxMins = 0x4C4 # Vector
    m_vBoxMaxs = 0x4D0 # Vector
    m_bStartDisabled = 0x4DC # bool
    m_flStrength = 0x4E0 # float
    m_nFalloffShape = 0x4E4 # int32_t
    m_flFalloffExponent = 0x4E8 # float

class CEnvWind: # CBaseEntity
    m_EnvWindShared = 0x4C0 # CEnvWindShared

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
    m_sAttributeName = 0x518 # CUtlStringToken

class CFilterClass: # CBaseFilter
    m_iFilterClass = 0x518 # CUtlSymbolLarge

class CFilterContext: # CBaseFilter
    m_iFilterContext = 0x518 # CUtlSymbolLarge

class CFilterEnemy: # CBaseFilter
    m_iszEnemyName = 0x518 # CUtlSymbolLarge
    m_flRadius = 0x520 # float
    m_flOuterRadius = 0x524 # float
    m_nMaxSquadmatesPerEnemy = 0x528 # int32_t
    m_iszPlayerName = 0x530 # CUtlSymbolLarge

class CFilterLOS: # CBaseFilter

class CFilterMassGreater: # CBaseFilter
    m_fFilterMass = 0x518 # float

class CFilterModel: # CBaseFilter
    m_iFilterModel = 0x518 # CUtlSymbolLarge

class CFilterMultiple: # CBaseFilter
    m_nFilterType = 0x518 # filter_t
    m_iFilterName = 0x520 # CUtlSymbolLarge[10]
    m_hFilter = 0x570 # CHandle<CBaseEntity>[10]
    m_nFilterCount = 0x598 # int32_t

class CFilterName: # CBaseFilter
    m_iFilterName = 0x518 # CUtlSymbolLarge

class CFilterProximity: # CBaseFilter
    m_flRadius = 0x518 # float

class CFire: # CBaseModelEntity
    m_hEffect = 0x710 # CHandle<CBaseFire>
    m_hOwner = 0x714 # CHandle<CBaseEntity>
    m_nFireType = 0x718 # int32_t
    m_flFuel = 0x71C # float
    m_flDamageTime = 0x720 # GameTime_t
    m_lastDamage = 0x724 # GameTime_t
    m_flFireSize = 0x728 # float
    m_flLastNavUpdateTime = 0x72C # GameTime_t
    m_flHeatLevel = 0x730 # float
    m_flHeatAbsorb = 0x734 # float
    m_flDamageScale = 0x738 # float
    m_flMaxHeat = 0x73C # float
    m_flLastHeatLevel = 0x740 # float
    m_flAttackTime = 0x744 # float
    m_bEnabled = 0x748 # bool
    m_bStartDisabled = 0x749 # bool
    m_bDidActivate = 0x74A # bool
    m_OnIgnited = 0x750 # CEntityIOOutput
    m_OnExtinguished = 0x778 # CEntityIOOutput

class CFireCrackerBlast: # CInferno

class CFireSmoke: # CBaseFire
    m_nFlameModelIndex = 0x4D0 # int32_t
    m_nFlameFromAboveModelIndex = 0x4D4 # int32_t

class CFiringModeFloat:
    m_flValues = 0x0 # float[2]

class CFiringModeInt:
    m_nValues = 0x0 # int32_t[2]

class CFish: # CBaseAnimGraph
    m_pool = 0x8E8 # CHandle<CFishPool>
    m_id = 0x8EC # uint32_t
    m_x = 0x8F0 # float
    m_y = 0x8F4 # float
    m_z = 0x8F8 # float
    m_angle = 0x8FC # float
    m_angleChange = 0x900 # float
    m_forward = 0x904 # Vector
    m_perp = 0x910 # Vector
    m_poolOrigin = 0x91C # Vector
    m_waterLevel = 0x928 # float
    m_speed = 0x92C # float
    m_desiredSpeed = 0x930 # float
    m_calmSpeed = 0x934 # float
    m_panicSpeed = 0x938 # float
    m_avoidRange = 0x93C # float
    m_turnTimer = 0x940 # CountdownTimer
    m_turnClockwise = 0x958 # bool
    m_goTimer = 0x960 # CountdownTimer
    m_moveTimer = 0x978 # CountdownTimer
    m_panicTimer = 0x990 # CountdownTimer
    m_disperseTimer = 0x9A8 # CountdownTimer
    m_proximityTimer = 0x9C0 # CountdownTimer
    m_visible = 0x9D8 # CUtlVector<CFish*>

class CFishPool: # CBaseEntity
    m_fishCount = 0x4D0 # int32_t
    m_maxRange = 0x4D4 # float
    m_swimDepth = 0x4D8 # float
    m_waterLevel = 0x4DC # float
    m_isDormant = 0x4E0 # bool
    m_fishes = 0x4E8 # CUtlVector<CHandle<CFish>>
    m_visTimer = 0x500 # CountdownTimer

class CFists: # CCSWeaponBase
    m_bPlayingUninterruptableAct = 0xE90 # bool
    m_nUninterruptableActivity = 0xE94 # PlayerAnimEvent_t
    m_bRestorePrevWep = 0xE98 # bool
    m_hWeaponBeforePrevious = 0xE9C # CHandle<CBasePlayerWeapon>
    m_hWeaponPrevious = 0xEA0 # CHandle<CBasePlayerWeapon>
    m_bDelayedHardPunchIncoming = 0xEA4 # bool
    m_bDestroyAfterTaunt = 0xEA5 # bool

class CFlashbang: # CBaseCSGrenade

class CFlashbangProjectile: # CBaseCSGrenadeProjectile
    m_flTimeToDetonate = 0xA98 # float
    m_numOpponentsHit = 0xA9C # uint8_t
    m_numTeammatesHit = 0xA9D # uint8_t

class CFogController: # CBaseEntity
    m_fog = 0x4C0 # fogparams_t
    m_bUseAngles = 0x528 # bool
    m_iChangedVariables = 0x52C # int32_t

class CFogTrigger: # CBaseTrigger
    m_fog = 0x8B8 # fogparams_t

class CFogVolume: # CServerOnlyModelEntity
    m_fogName = 0x710 # CUtlSymbolLarge
    m_postProcessName = 0x718 # CUtlSymbolLarge
    m_colorCorrectionName = 0x720 # CUtlSymbolLarge
    m_bDisabled = 0x730 # bool
    m_bInFogVolumesList = 0x731 # bool

class CFootstepControl: # CBaseTrigger
    m_source = 0x8B8 # CUtlSymbolLarge
    m_destination = 0x8C0 # CUtlSymbolLarge

class CFootstepTableHandle:

class CFuncBrush: # CBaseModelEntity
    m_iSolidity = 0x710 # BrushSolidities_e
    m_iDisabled = 0x714 # int32_t
    m_bSolidBsp = 0x718 # bool
    m_iszExcludedClass = 0x720 # CUtlSymbolLarge
    m_bInvertExclusion = 0x728 # bool
    m_bScriptedMovement = 0x729 # bool

class CFuncConveyor: # CBaseModelEntity
    m_szConveyorModels = 0x710 # CUtlSymbolLarge
    m_flTransitionDurationSeconds = 0x718 # float
    m_angMoveEntitySpace = 0x71C # QAngle
    m_vecMoveDirEntitySpace = 0x728 # Vector
    m_flTargetSpeed = 0x734 # float
    m_nTransitionStartTick = 0x738 # GameTick_t
    m_nTransitionDurationTicks = 0x73C # int32_t
    m_flTransitionStartSpeed = 0x740 # float
    m_hConveyorModels = 0x748 # CNetworkUtlVectorBase<CHandle<CBaseEntity>>

class CFuncElectrifiedVolume: # CFuncBrush
    m_EffectName = 0x730 # CUtlSymbolLarge
    m_EffectInterpenetrateName = 0x738 # CUtlSymbolLarge
    m_EffectZapName = 0x740 # CUtlSymbolLarge
    m_iszEffectSource = 0x748 # CUtlSymbolLarge

class CFuncIllusionary: # CBaseModelEntity

class CFuncInteractionLayerClip: # CBaseModelEntity
    m_bDisabled = 0x710 # bool
    m_iszInteractsAs = 0x718 # CUtlSymbolLarge
    m_iszInteractsWith = 0x720 # CUtlSymbolLarge

class CFuncLadder: # CBaseModelEntity
    m_vecLadderDir = 0x710 # Vector
    m_Dismounts = 0x720 # CUtlVector<CHandle<CInfoLadderDismount>>
    m_vecLocalTop = 0x738 # Vector
    m_vecPlayerMountPositionTop = 0x744 # Vector
    m_vecPlayerMountPositionBottom = 0x750 # Vector
    m_flAutoRideSpeed = 0x75C # float
    m_bDisabled = 0x760 # bool
    m_bFakeLadder = 0x761 # bool
    m_bHasSlack = 0x762 # bool
    m_surfacePropName = 0x768 # CUtlSymbolLarge
    m_OnPlayerGotOnLadder = 0x770 # CEntityIOOutput
    m_OnPlayerGotOffLadder = 0x798 # CEntityIOOutput

class CFuncLadderAlias_func_useableladder: # CFuncLadder

class CFuncMonitor: # CFuncBrush
    m_targetCamera = 0x730 # CUtlString
    m_nResolutionEnum = 0x738 # int32_t
    m_bRenderShadows = 0x73C # bool
    m_bUseUniqueColorTarget = 0x73D # bool
    m_brushModelName = 0x740 # CUtlString
    m_hTargetCamera = 0x748 # CHandle<CBaseEntity>
    m_bEnabled = 0x74C # bool
    m_bDraw3DSkybox = 0x74D # bool
    m_bStartEnabled = 0x74E # bool

class CFuncMoveLinear: # CBaseToggle
    m_authoredPosition = 0x790 # MoveLinearAuthoredPos_t
    m_angMoveEntitySpace = 0x794 # QAngle
    m_vecMoveDirParentSpace = 0x7A0 # Vector
    m_soundStart = 0x7B0 # CUtlSymbolLarge
    m_soundStop = 0x7B8 # CUtlSymbolLarge
    m_currentSound = 0x7C0 # CUtlSymbolLarge
    m_flBlockDamage = 0x7C8 # float
    m_flStartPosition = 0x7CC # float
    m_flMoveDistance = 0x7D0 # float
    m_OnFullyOpen = 0x7E0 # CEntityIOOutput
    m_OnFullyClosed = 0x808 # CEntityIOOutput
    m_bCreateMovableNavMesh = 0x830 # bool
    m_bCreateNavObstacle = 0x831 # bool

class CFuncMoveLinearAlias_momentary_door: # CFuncMoveLinear

class CFuncNavBlocker: # CBaseModelEntity
    m_bDisabled = 0x710 # bool
    m_nBlockedTeamNumber = 0x714 # int32_t

class CFuncNavObstruction: # CBaseModelEntity
    m_bDisabled = 0x718 # bool

class CFuncPlat: # CBasePlatTrain
    m_sNoise = 0x7B8 # CUtlSymbolLarge

class CFuncPlatRot: # CFuncPlat
    m_end = 0x7C0 # QAngle
    m_start = 0x7CC # QAngle

class CFuncPropRespawnZone: # CBaseEntity

class CFuncRotating: # CBaseModelEntity
    m_OnStopped = 0x710 # CEntityIOOutput
    m_OnStarted = 0x738 # CEntityIOOutput
    m_OnReachedStart = 0x760 # CEntityIOOutput
    m_localRotationVector = 0x788 # RotationVector
    m_flFanFriction = 0x794 # float
    m_flAttenuation = 0x798 # float
    m_flVolume = 0x79C # float
    m_flTargetSpeed = 0x7A0 # float
    m_flMaxSpeed = 0x7A4 # float
    m_flBlockDamage = 0x7A8 # float
    m_flTimeScale = 0x7AC # float
    m_NoiseRunning = 0x7B0 # CUtlSymbolLarge
    m_bReversed = 0x7B8 # bool
    m_bAccelDecel = 0x7B9 # bool
    m_prevLocalAngles = 0x7C4 # QAngle
    m_angStart = 0x7D0 # QAngle
    m_bStopAtStartPos = 0x7DC # bool
    m_vecClientOrigin = 0x7E0 # Vector
    m_vecClientAngles = 0x7EC # QAngle

class CFuncShatterglass: # CBaseModelEntity
    m_hGlassMaterialDamaged = 0x710 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_hGlassMaterialUndamaged = 0x718 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_hConcreteMaterialEdgeFace = 0x720 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_hConcreteMaterialEdgeCaps = 0x728 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_hConcreteMaterialEdgeFins = 0x730 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_matPanelTransform = 0x738 # matrix3x4_t
    m_matPanelTransformWsTemp = 0x768 # matrix3x4_t
    m_vecShatterGlassShards = 0x798 # CUtlVector<uint32_t>
    m_PanelSize = 0x7B0 # Vector2D
    m_vecPanelNormalWs = 0x7B8 # Vector
    m_nNumShardsEverCreated = 0x7C4 # int32_t
    m_flLastShatterSoundEmitTime = 0x7C8 # GameTime_t
    m_flLastCleanupTime = 0x7CC # GameTime_t
    m_flInitAtTime = 0x7D0 # GameTime_t
    m_flGlassThickness = 0x7D4 # float
    m_flSpawnInvulnerability = 0x7D8 # float
    m_bBreakSilent = 0x7DC # bool
    m_bBreakShardless = 0x7DD # bool
    m_bBroken = 0x7DE # bool
    m_bHasRateLimitedShards = 0x7DF # bool
    m_bGlassNavIgnore = 0x7E0 # bool
    m_bGlassInFrame = 0x7E1 # bool
    m_bStartBroken = 0x7E2 # bool
    m_iInitialDamageType = 0x7E3 # uint8_t
    m_szDamagePositioningEntityName01 = 0x7E8 # CUtlSymbolLarge
    m_szDamagePositioningEntityName02 = 0x7F0 # CUtlSymbolLarge
    m_szDamagePositioningEntityName03 = 0x7F8 # CUtlSymbolLarge
    m_szDamagePositioningEntityName04 = 0x800 # CUtlSymbolLarge
    m_vInitialDamagePositions = 0x808 # CUtlVector<Vector>
    m_vExtraDamagePositions = 0x820 # CUtlVector<Vector>
    m_OnBroken = 0x838 # CEntityIOOutput
    m_iSurfaceType = 0x861 # uint8_t

class CFuncTankTrain: # CFuncTrackTrain
    m_OnDeath = 0x860 # CEntityIOOutput

class CFuncTimescale: # CBaseEntity
    m_flDesiredTimescale = 0x4C0 # float
    m_flAcceleration = 0x4C4 # float
    m_flMinBlendRate = 0x4C8 # float
    m_flBlendDeltaMultiplier = 0x4CC # float
    m_isStarted = 0x4D0 # bool

class CFuncTrackAuto: # CFuncTrackChange

class CFuncTrackChange: # CFuncPlatRot
    m_trackTop = 0x7D8 # CPathTrack*
    m_trackBottom = 0x7E0 # CPathTrack*
    m_train = 0x7E8 # CFuncTrackTrain*
    m_trackTopName = 0x7F0 # CUtlSymbolLarge
    m_trackBottomName = 0x7F8 # CUtlSymbolLarge
    m_trainName = 0x800 # CUtlSymbolLarge
    m_code = 0x808 # TRAIN_CODE
    m_targetState = 0x80C # int32_t
    m_use = 0x810 # int32_t

class CFuncTrackTrain: # CBaseModelEntity
    m_ppath = 0x710 # CHandle<CPathTrack>
    m_length = 0x714 # float
    m_vPosPrev = 0x718 # Vector
    m_angPrev = 0x724 # QAngle
    m_controlMins = 0x730 # Vector
    m_controlMaxs = 0x73C # Vector
    m_lastBlockPos = 0x748 # Vector
    m_lastBlockTick = 0x754 # int32_t
    m_flVolume = 0x758 # float
    m_flBank = 0x75C # float
    m_oldSpeed = 0x760 # float
    m_flBlockDamage = 0x764 # float
    m_height = 0x768 # float
    m_maxSpeed = 0x76C # float
    m_dir = 0x770 # float
    m_iszSoundMove = 0x778 # CUtlSymbolLarge
    m_iszSoundMovePing = 0x780 # CUtlSymbolLarge
    m_iszSoundStart = 0x788 # CUtlSymbolLarge
    m_iszSoundStop = 0x790 # CUtlSymbolLarge
    m_strPathTarget = 0x798 # CUtlSymbolLarge
    m_flMoveSoundMinDuration = 0x7A0 # float
    m_flMoveSoundMaxDuration = 0x7A4 # float
    m_flNextMoveSoundTime = 0x7A8 # GameTime_t
    m_flMoveSoundMinPitch = 0x7AC # float
    m_flMoveSoundMaxPitch = 0x7B0 # float
    m_eOrientationType = 0x7B4 # TrainOrientationType_t
    m_eVelocityType = 0x7B8 # TrainVelocityType_t
    m_OnStart = 0x7C8 # CEntityIOOutput
    m_OnNext = 0x7F0 # CEntityIOOutput
    m_OnArrivedAtDestinationNode = 0x818 # CEntityIOOutput
    m_bManualSpeedChanges = 0x840 # bool
    m_flDesiredSpeed = 0x844 # float
    m_flSpeedChangeTime = 0x848 # GameTime_t
    m_flAccelSpeed = 0x84C # float
    m_flDecelSpeed = 0x850 # float
    m_bAccelToSpeed = 0x854 # bool
    m_flTimeScale = 0x858 # float
    m_flNextMPSoundTime = 0x85C # GameTime_t

class CFuncTrain: # CBasePlatTrain
    m_hCurrentTarget = 0x7B8 # CHandle<CBaseEntity>
    m_activated = 0x7BC # bool
    m_hEnemy = 0x7C0 # CHandle<CBaseEntity>
    m_flBlockDamage = 0x7C4 # float
    m_flNextBlockTime = 0x7C8 # GameTime_t
    m_iszLastTarget = 0x7D0 # CUtlSymbolLarge

class CFuncTrainControls: # CBaseModelEntity

class CFuncVPhysicsClip: # CBaseModelEntity
    m_bDisabled = 0x710 # bool

class CFuncVehicleClip: # CBaseModelEntity

class CFuncWall: # CBaseModelEntity
    m_nState = 0x710 # int32_t

class CFuncWallToggle: # CFuncWall

class CFuncWater: # CBaseModelEntity
    m_BuoyancyHelper = 0x710 # CBuoyancyHelper

class CGameChoreoServices: # IChoreoServices
    m_hOwner = 0x8 # CHandle<CBaseAnimGraph>
    m_hScriptedSequence = 0xC # CHandle<CScriptedSequence>
    m_scriptState = 0x10 # IChoreoServices::ScriptState_t
    m_choreoState = 0x14 # IChoreoServices::ChoreoState_t
    m_flTimeStartedState = 0x18 # GameTime_t

class CGameEnd: # CRulePointEntity

class CGameGibManager: # CBaseEntity
    m_bAllowNewGibs = 0x4E0 # bool
    m_iCurrentMaxPieces = 0x4E4 # int32_t
    m_iMaxPieces = 0x4E8 # int32_t
    m_iLastFrame = 0x4EC # int32_t

class CGameMoney: # CRulePointEntity
    m_OnMoneySpent = 0x720 # CEntityIOOutput
    m_OnMoneySpentFail = 0x748 # CEntityIOOutput
    m_nMoney = 0x770 # int32_t
    m_strAwardText = 0x778 # CUtlString

class CGamePlayerEquip: # CRulePointEntity

class CGamePlayerZone: # CRuleBrushEntity
    m_OnPlayerInZone = 0x718 # CEntityIOOutput
    m_OnPlayerOutZone = 0x740 # CEntityIOOutput
    m_PlayersInCount = 0x768 # CEntityOutputTemplate<int32_t>
    m_PlayersOutCount = 0x790 # CEntityOutputTemplate<int32_t>

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
    m_vAccumulatedRootMotion = 0x0 # Vector
    m_vDest = 0xC # Vector
    m_vSrc = 0x18 # Vector
    m_angSrc = 0x24 # QAngle
    m_angDst = 0x30 # QAngle
    m_angCurrent = 0x3C # QAngle
    m_flAngRate = 0x48 # float
    m_flDuration = 0x4C # float
    m_flStartTime = 0x50 # GameTime_t
    m_bActive = 0x54 # bool
    m_bTeleportOnEnd = 0x55 # bool
    m_bIgnoreRotation = 0x56 # bool
    m_nType = 0x58 # ScriptedMoveType_t
    m_bSuccess = 0x5C # bool
    m_nForcedCrouchState = 0x60 # ForcedCrouchState_t
    m_bIgnoreCollisions = 0x64 # bool

class CGameText: # CRulePointEntity
    m_iszMessage = 0x720 # CUtlSymbolLarge
    m_textParms = 0x728 # hudtextparms_t

class CGenericConstraint: # CPhysConstraint
    m_nLinearMotionX = 0x520 # JointMotion_t
    m_nLinearMotionY = 0x524 # JointMotion_t
    m_nLinearMotionZ = 0x528 # JointMotion_t
    m_flLinearFrequencyX = 0x52C # float
    m_flLinearFrequencyY = 0x530 # float
    m_flLinearFrequencyZ = 0x534 # float
    m_flLinearDampingRatioX = 0x538 # float
    m_flLinearDampingRatioY = 0x53C # float
    m_flLinearDampingRatioZ = 0x540 # float
    m_flMaxLinearImpulseX = 0x544 # float
    m_flMaxLinearImpulseY = 0x548 # float
    m_flMaxLinearImpulseZ = 0x54C # float
    m_flBreakAfterTimeX = 0x550 # float
    m_flBreakAfterTimeY = 0x554 # float
    m_flBreakAfterTimeZ = 0x558 # float
    m_flBreakAfterTimeStartTimeX = 0x55C # GameTime_t
    m_flBreakAfterTimeStartTimeY = 0x560 # GameTime_t
    m_flBreakAfterTimeStartTimeZ = 0x564 # GameTime_t
    m_flBreakAfterTimeThresholdX = 0x568 # float
    m_flBreakAfterTimeThresholdY = 0x56C # float
    m_flBreakAfterTimeThresholdZ = 0x570 # float
    m_flNotifyForceX = 0x574 # float
    m_flNotifyForceY = 0x578 # float
    m_flNotifyForceZ = 0x57C # float
    m_flNotifyForceMinTimeX = 0x580 # float
    m_flNotifyForceMinTimeY = 0x584 # float
    m_flNotifyForceMinTimeZ = 0x588 # float
    m_flNotifyForceLastTimeX = 0x58C # GameTime_t
    m_flNotifyForceLastTimeY = 0x590 # GameTime_t
    m_flNotifyForceLastTimeZ = 0x594 # GameTime_t
    m_bAxisNotifiedX = 0x598 # bool
    m_bAxisNotifiedY = 0x599 # bool
    m_bAxisNotifiedZ = 0x59A # bool
    m_nAngularMotionX = 0x59C # JointMotion_t
    m_nAngularMotionY = 0x5A0 # JointMotion_t
    m_nAngularMotionZ = 0x5A4 # JointMotion_t
    m_flAngularFrequencyX = 0x5A8 # float
    m_flAngularFrequencyY = 0x5AC # float
    m_flAngularFrequencyZ = 0x5B0 # float
    m_flAngularDampingRatioX = 0x5B4 # float
    m_flAngularDampingRatioY = 0x5B8 # float
    m_flAngularDampingRatioZ = 0x5BC # float
    m_flMaxAngularImpulseX = 0x5C0 # float
    m_flMaxAngularImpulseY = 0x5C4 # float
    m_flMaxAngularImpulseZ = 0x5C8 # float
    m_NotifyForceReachedX = 0x5D0 # CEntityIOOutput
    m_NotifyForceReachedY = 0x5F8 # CEntityIOOutput
    m_NotifyForceReachedZ = 0x620 # CEntityIOOutput

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
    m_hGradientFogTexture = 0x4C0 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_flFogStartDistance = 0x4C8 # float
    m_flFogEndDistance = 0x4CC # float
    m_bHeightFogEnabled = 0x4D0 # bool
    m_flFogStartHeight = 0x4D4 # float
    m_flFogEndHeight = 0x4D8 # float
    m_flFarZ = 0x4DC # float
    m_flFogMaxOpacity = 0x4E0 # float
    m_flFogFalloffExponent = 0x4E4 # float
    m_flFogVerticalExponent = 0x4E8 # float
    m_fogColor = 0x4EC # Color
    m_flFogStrength = 0x4F0 # float
    m_flFadeTime = 0x4F4 # float
    m_bStartDisabled = 0x4F8 # bool
    m_bIsEnabled = 0x4F9 # bool
    m_bGradientFogNeedsTextures = 0x4FA # bool

class CGunTarget: # CBaseToggle
    m_on = 0x790 # bool
    m_hTargetEnt = 0x794 # CHandle<CBaseEntity>
    m_OnDeath = 0x798 # CEntityIOOutput

class CHEGrenade: # CBaseCSGrenade

class CHEGrenadeProjectile: # CBaseCSGrenadeProjectile

class CHandleDummy: # CBaseEntity

class CHandleTest: # CBaseEntity
    m_Handle = 0x4C0 # CHandle<CBaseEntity>
    m_bSendHandle = 0x4C4 # bool

class CHintMessage:
    m_hintString = 0x0 # char*
    m_args = 0x8 # CUtlVector<char*>
    m_duration = 0x20 # float

class CHintMessageQueue:
    m_tmMessageEnd = 0x0 # float
    m_messages = 0x8 # CUtlVector<CHintMessage*>
    m_pPlayerController = 0x20 # CBasePlayerController*

class CHitboxComponent: # CEntityComponent
    m_bvDisabledHitGroups = 0x24 # uint32_t[1]

class CHostage: # CHostageExpresserShim
    m_OnHostageBeginGrab = 0xA28 # CEntityIOOutput
    m_OnFirstPickedUp = 0xA50 # CEntityIOOutput
    m_OnDroppedNotRescued = 0xA78 # CEntityIOOutput
    m_OnRescued = 0xAA0 # CEntityIOOutput
    m_entitySpottedState = 0xAC8 # EntitySpottedState_t
    m_nSpotRules = 0xAE0 # int32_t
    m_uiHostageSpawnExclusionGroupMask = 0xAE4 # uint32_t
    m_nHostageSpawnRandomFactor = 0xAE8 # uint32_t
    m_bRemove = 0xAEC # bool
    m_vel = 0xAF0 # Vector
    m_isRescued = 0xAFC # bool
    m_jumpedThisFrame = 0xAFD # bool
    m_nHostageState = 0xB00 # int32_t
    m_leader = 0xB04 # CHandle<CBaseEntity>
    m_lastLeader = 0xB08 # CHandle<CCSPlayerPawnBase>
    m_reuseTimer = 0xB10 # CountdownTimer
    m_hasBeenUsed = 0xB28 # bool
    m_accel = 0xB2C # Vector
    m_isRunning = 0xB38 # bool
    m_isCrouching = 0xB39 # bool
    m_jumpTimer = 0xB40 # CountdownTimer
    m_isWaitingForLeader = 0xB58 # bool
    m_repathTimer = 0x2B68 # CountdownTimer
    m_inhibitDoorTimer = 0x2B80 # CountdownTimer
    m_inhibitObstacleAvoidanceTimer = 0x2C10 # CountdownTimer
    m_wiggleTimer = 0x2C30 # CountdownTimer
    m_isAdjusted = 0x2C4C # bool
    m_bHandsHaveBeenCut = 0x2C4D # bool
    m_hHostageGrabber = 0x2C50 # CHandle<CCSPlayerPawn>
    m_fLastGrabTime = 0x2C54 # GameTime_t
    m_vecPositionWhenStartedDroppingToGround = 0x2C58 # Vector
    m_vecGrabbedPos = 0x2C64 # Vector
    m_flRescueStartTime = 0x2C70 # GameTime_t
    m_flGrabSuccessTime = 0x2C74 # GameTime_t
    m_flDropStartTime = 0x2C78 # GameTime_t
    m_nApproachRewardPayouts = 0x2C7C # int32_t
    m_nPickupEventCount = 0x2C80 # int32_t
    m_vecSpawnGroundPos = 0x2C84 # Vector
    m_vecHostageResetPosition = 0x2CA4 # Vector

class CHostageAlias_info_hostage_spawn: # CHostage

class CHostageCarriableProp: # CBaseAnimGraph

class CHostageExpresserShim: # CBaseCombatCharacter
    m_pExpresser = 0xA10 # CAI_Expresser*

class CHostageRescueZone: # CHostageRescueZoneShim

class CHostageRescueZoneShim: # CBaseTrigger

class CInButtonState:
    m_pButtonStates = 0x8 # uint64_t[3]

class CIncendiaryGrenade: # CMolotovGrenade

class CInferno: # CBaseModelEntity
    m_firePositions = 0x720 # Vector[64]
    m_fireParentPositions = 0xA20 # Vector[64]
    m_bFireIsBurning = 0xD20 # bool[64]
    m_BurnNormal = 0xD60 # Vector[64]
    m_fireCount = 0x1060 # int32_t
    m_nInfernoType = 0x1064 # int32_t
    m_nFireEffectTickBegin = 0x1068 # int32_t
    m_nFireLifetime = 0x106C # float
    m_bInPostEffectTime = 0x1070 # bool
    m_nFiresExtinguishCount = 0x1074 # int32_t
    m_bWasCreatedInSmoke = 0x1078 # bool
    m_extent = 0x1280 # Extent
    m_damageTimer = 0x1298 # CountdownTimer
    m_damageRampTimer = 0x12B0 # CountdownTimer
    m_splashVelocity = 0x12C8 # Vector
    m_InitialSplashVelocity = 0x12D4 # Vector
    m_startPos = 0x12E0 # Vector
    m_vecOriginalSpawnLocation = 0x12EC # Vector
    m_activeTimer = 0x12F8 # IntervalTimer
    m_fireSpawnOffset = 0x1308 # int32_t
    m_nMaxFlames = 0x130C # int32_t
    m_nSpreadCount = 0x1310 # int32_t
    m_BookkeepingTimer = 0x1318 # CountdownTimer
    m_NextSpreadTimer = 0x1330 # CountdownTimer
    m_nSourceItemDefIndex = 0x1348 # uint16_t

class CInfoData: # CServerOnlyEntity

class CInfoDeathmatchSpawn: # SpawnPoint

class CInfoDynamicShadowHint: # CPointEntity
    m_bDisabled = 0x4C0 # bool
    m_flRange = 0x4C4 # float
    m_nImportance = 0x4C8 # int32_t
    m_nLightChoice = 0x4CC # int32_t
    m_hLight = 0x4D0 # CHandle<CBaseEntity>

class CInfoDynamicShadowHintBox: # CInfoDynamicShadowHint
    m_vBoxMins = 0x4D8 # Vector
    m_vBoxMaxs = 0x4E4 # Vector

class CInfoEnemyTerroristSpawn: # SpawnPointCoopEnemy

class CInfoGameEventProxy: # CPointEntity
    m_iszEventName = 0x4C0 # CUtlSymbolLarge
    m_flRange = 0x4C8 # float

class CInfoInstructorHintBombTargetA: # CPointEntity

class CInfoInstructorHintBombTargetB: # CPointEntity

class CInfoInstructorHintHostageRescueZone: # CPointEntity

class CInfoInstructorHintTarget: # CPointEntity

class CInfoLadderDismount: # CBaseEntity

class CInfoLandmark: # CPointEntity

class CInfoOffscreenPanoramaTexture: # CPointEntity
    m_bDisabled = 0x4C0 # bool
    m_nResolutionX = 0x4C4 # int32_t
    m_nResolutionY = 0x4C8 # int32_t
    m_szLayoutFileName = 0x4D0 # CUtlSymbolLarge
    m_RenderAttrName = 0x4D8 # CUtlSymbolLarge
    m_TargetEntities = 0x4E0 # CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    m_nTargetChangeCount = 0x4F8 # int32_t
    m_vecCSSClasses = 0x500 # CNetworkUtlVectorBase<CUtlSymbolLarge>
    m_szTargetsName = 0x518 # CUtlSymbolLarge
    m_AdditionalTargetEntities = 0x520 # CUtlVector<CHandle<CBaseModelEntity>>

class CInfoParticleTarget: # CPointEntity

class CInfoPlayerCounterterrorist: # SpawnPoint

class CInfoPlayerStart: # CPointEntity
    m_bDisabled = 0x4C0 # bool

class CInfoPlayerTerrorist: # SpawnPoint

class CInfoSpawnGroupLandmark: # CPointEntity

class CInfoSpawnGroupLoadUnload: # CLogicalEntity
    m_OnSpawnGroupLoadStarted = 0x4C0 # CEntityIOOutput
    m_OnSpawnGroupLoadFinished = 0x4E8 # CEntityIOOutput
    m_OnSpawnGroupUnloadStarted = 0x510 # CEntityIOOutput
    m_OnSpawnGroupUnloadFinished = 0x538 # CEntityIOOutput
    m_iszSpawnGroupName = 0x560 # CUtlSymbolLarge
    m_iszSpawnGroupFilterName = 0x568 # CUtlSymbolLarge
    m_iszLandmarkName = 0x570 # CUtlSymbolLarge
    m_sFixedSpawnGroupName = 0x578 # CUtlString
    m_flTimeoutInterval = 0x580 # float
    m_bStreamingStarted = 0x584 # bool
    m_bUnloadingStarted = 0x585 # bool

class CInfoTarget: # CPointEntity

class CInfoTargetServerOnly: # CServerOnlyPointEntity

class CInfoTeleportDestination: # CPointEntity

class CInfoVisibilityBox: # CBaseEntity
    m_nMode = 0x4C4 # int32_t
    m_vBoxSize = 0x4C8 # Vector
    m_bEnabled = 0x4D4 # bool

class CInfoWorldLayer: # CBaseEntity
    m_pOutputOnEntitiesSpawned = 0x4C0 # CEntityIOOutput
    m_worldName = 0x4E8 # CUtlSymbolLarge
    m_layerName = 0x4F0 # CUtlSymbolLarge
    m_bWorldLayerVisible = 0x4F8 # bool
    m_bEntitiesSpawned = 0x4F9 # bool
    m_bCreateAsChildSpawnGroup = 0x4FA # bool
    m_hLayerSpawnGroup = 0x4FC # uint32_t

class CInstancedSceneEntity: # CSceneEntity
    m_hOwner = 0xA18 # CHandle<CBaseEntity>
    m_bHadOwner = 0xA1C # bool
    m_flPostSpeakDelay = 0xA20 # float
    m_flPreDelay = 0xA24 # float
    m_bIsBackground = 0xA28 # bool
    m_bRemoveOnCompletion = 0xA29 # bool
    m_hTarget = 0xA2C # CHandle<CBaseEntity>

class CInstructorEventEntity: # CPointEntity
    m_iszName = 0x4C0 # CUtlSymbolLarge
    m_iszHintTargetEntity = 0x4C8 # CUtlSymbolLarge
    m_hTargetPlayer = 0x4D0 # CHandle<CBasePlayerPawn>

class CIronSightController:
    m_bIronSightAvailable = 0x8 # bool
    m_flIronSightAmount = 0xC # float
    m_flIronSightAmountGained = 0x10 # float
    m_flIronSightAmountBiased = 0x14 # float

class CItem: # CBaseAnimGraph
    m_OnPlayerTouch = 0x8F0 # CEntityIOOutput
    m_bActivateWhenAtRest = 0x918 # bool
    m_OnCacheInteraction = 0x920 # CEntityIOOutput
    m_OnPlayerPickup = 0x948 # CEntityIOOutput
    m_OnGlovePulled = 0x970 # CEntityIOOutput
    m_vOriginalSpawnOrigin = 0x998 # Vector
    m_vOriginalSpawnAngles = 0x9A4 # QAngle
    m_bPhysStartAsleep = 0x9B0 # bool

class CItemAssaultSuit: # CItem

class CItemDefuser: # CItem
    m_entitySpottedState = 0x9C0 # EntitySpottedState_t
    m_nSpotRules = 0x9D8 # int32_t

class CItemDefuserAlias_item_defuser: # CItemDefuser

class CItemDogtags: # CItem
    m_OwningPlayer = 0x9C0 # CHandle<CCSPlayerPawn>
    m_KillingPlayer = 0x9C4 # CHandle<CCSPlayerPawn>

class CItemGeneric: # CItem
    m_bHasTriggerRadius = 0x9C8 # bool
    m_bHasPickupRadius = 0x9C9 # bool
    m_flPickupRadiusSqr = 0x9CC # float
    m_flTriggerRadiusSqr = 0x9D0 # float
    m_flLastPickupCheck = 0x9D4 # GameTime_t
    m_bPlayerCounterListenerAdded = 0x9D8 # bool
    m_bPlayerInTriggerRadius = 0x9D9 # bool
    m_hSpawnParticleEffect = 0x9E0 # CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_pAmbientSoundEffect = 0x9E8 # CUtlSymbolLarge
    m_bAutoStartAmbientSound = 0x9F0 # bool
    m_pSpawnScriptFunction = 0x9F8 # CUtlSymbolLarge
    m_hPickupParticleEffect = 0xA00 # CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_pPickupSoundEffect = 0xA08 # CUtlSymbolLarge
    m_pPickupScriptFunction = 0xA10 # CUtlSymbolLarge
    m_hTimeoutParticleEffect = 0xA18 # CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_pTimeoutSoundEffect = 0xA20 # CUtlSymbolLarge
    m_pTimeoutScriptFunction = 0xA28 # CUtlSymbolLarge
    m_pPickupFilterName = 0xA30 # CUtlSymbolLarge
    m_hPickupFilter = 0xA38 # CHandle<CBaseFilter>
    m_OnPickup = 0xA40 # CEntityIOOutput
    m_OnTimeout = 0xA68 # CEntityIOOutput
    m_OnTriggerStartTouch = 0xA90 # CEntityIOOutput
    m_OnTriggerTouch = 0xAB8 # CEntityIOOutput
    m_OnTriggerEndTouch = 0xAE0 # CEntityIOOutput
    m_pAllowPickupScriptFunction = 0xB08 # CUtlSymbolLarge
    m_flPickupRadius = 0xB10 # float
    m_flTriggerRadius = 0xB14 # float
    m_pTriggerSoundEffect = 0xB18 # CUtlSymbolLarge
    m_bGlowWhenInTrigger = 0xB20 # bool
    m_glowColor = 0xB21 # Color
    m_bUseable = 0xB25 # bool
    m_hTriggerHelper = 0xB28 # CHandle<CItemGenericTriggerHelper>

class CItemGenericTriggerHelper: # CBaseModelEntity
    m_hParentItem = 0x710 # CHandle<CItemGeneric>

class CItemHeavyAssaultSuit: # CItemAssaultSuit

class CItemKevlar: # CItem

class CItemSoda: # CBaseAnimGraph

class CItem_Healthshot: # CWeaponBaseItem

class CKeepUpright: # CPointEntity
    m_worldGoalAxis = 0x4C8 # Vector
    m_localTestAxis = 0x4D4 # Vector
    m_nameAttach = 0x4E8 # CUtlSymbolLarge
    m_attachedObject = 0x4F0 # CHandle<CBaseEntity>
    m_angularLimit = 0x4F4 # float
    m_bActive = 0x4F8 # bool
    m_bDampAllRotation = 0x4F9 # bool

class CKnife: # CCSWeaponBase
    m_bFirstAttack = 0xE90 # bool

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
    m_CLightComponent = 0x710 # CLightComponent*

class CLightEnvironmentEntity: # CLightDirectionalEntity

class CLightGlow: # CBaseModelEntity
    m_nHorizontalSize = 0x710 # uint32_t
    m_nVerticalSize = 0x714 # uint32_t
    m_nMinDist = 0x718 # uint32_t
    m_nMaxDist = 0x71C # uint32_t
    m_nOuterMaxDist = 0x720 # uint32_t
    m_flGlowProxySize = 0x724 # float
    m_flHDRColorScale = 0x728 # float

class CLightOrthoEntity: # CLightEntity

class CLightSpotEntity: # CLightEntity

class CLogicAchievement: # CLogicalEntity
    m_bDisabled = 0x4C0 # bool
    m_iszAchievementEventID = 0x4C8 # CUtlSymbolLarge
    m_OnFired = 0x4D0 # CEntityIOOutput

class CLogicActiveAutosave: # CLogicAutosave
    m_TriggerHitPoints = 0x4D0 # int32_t
    m_flTimeToTrigger = 0x4D4 # float
    m_flStartTime = 0x4D8 # GameTime_t
    m_flDangerousTime = 0x4DC # float

class CLogicAuto: # CBaseEntity
    m_OnMapSpawn = 0x4C0 # CEntityIOOutput
    m_OnDemoMapSpawn = 0x4E8 # CEntityIOOutput
    m_OnNewGame = 0x510 # CEntityIOOutput
    m_OnLoadGame = 0x538 # CEntityIOOutput
    m_OnMapTransition = 0x560 # CEntityIOOutput
    m_OnBackgroundMap = 0x588 # CEntityIOOutput
    m_OnMultiNewMap = 0x5B0 # CEntityIOOutput
    m_OnMultiNewRound = 0x5D8 # CEntityIOOutput
    m_OnVREnabled = 0x600 # CEntityIOOutput
    m_OnVRNotEnabled = 0x628 # CEntityIOOutput
    m_globalstate = 0x650 # CUtlSymbolLarge

class CLogicAutosave: # CLogicalEntity
    m_bForceNewLevelUnit = 0x4C0 # bool
    m_minHitPoints = 0x4C4 # int32_t
    m_minHitPointsToCommit = 0x4C8 # int32_t

class CLogicBranch: # CLogicalEntity
    m_bInValue = 0x4C0 # bool
    m_Listeners = 0x4C8 # CUtlVector<CHandle<CBaseEntity>>
    m_OnTrue = 0x4E0 # CEntityIOOutput
    m_OnFalse = 0x508 # CEntityIOOutput

class CLogicBranchList: # CLogicalEntity
    m_nLogicBranchNames = 0x4C0 # CUtlSymbolLarge[16]
    m_LogicBranchList = 0x540 # CUtlVector<CHandle<CBaseEntity>>
    m_eLastState = 0x558 # CLogicBranchList::LogicBranchListenerLastState_t
    m_OnAllTrue = 0x560 # CEntityIOOutput
    m_OnAllFalse = 0x588 # CEntityIOOutput
    m_OnMixed = 0x5B0 # CEntityIOOutput

class CLogicCase: # CLogicalEntity
    m_nCase = 0x4C0 # CUtlSymbolLarge[32]
    m_nShuffleCases = 0x5C0 # int32_t
    m_nLastShuffleCase = 0x5C4 # int32_t
    m_uchShuffleCaseMap = 0x5C8 # uint8_t[32]
    m_OnCase = 0x5E8 # CEntityIOOutput[32]
    m_OnDefault = 0xAE8 # CEntityOutputTemplate<CVariantBase<CVariantDefaultAllocator>>

class CLogicCollisionPair: # CLogicalEntity
    m_nameAttach1 = 0x4C0 # CUtlSymbolLarge
    m_nameAttach2 = 0x4C8 # CUtlSymbolLarge
    m_disabled = 0x4D0 # bool
    m_succeeded = 0x4D1 # bool

class CLogicCompare: # CLogicalEntity
    m_flInValue = 0x4C0 # float
    m_flCompareValue = 0x4C4 # float
    m_OnLessThan = 0x4C8 # CEntityOutputTemplate<float>
    m_OnEqualTo = 0x4F0 # CEntityOutputTemplate<float>
    m_OnNotEqualTo = 0x518 # CEntityOutputTemplate<float>
    m_OnGreaterThan = 0x540 # CEntityOutputTemplate<float>

class CLogicDistanceAutosave: # CLogicalEntity
    m_iszTargetEntity = 0x4C0 # CUtlSymbolLarge
    m_flDistanceToPlayer = 0x4C8 # float
    m_bForceNewLevelUnit = 0x4CC # bool
    m_bCheckCough = 0x4CD # bool
    m_bThinkDangerous = 0x4CE # bool
    m_flDangerousTime = 0x4D0 # float

class CLogicDistanceCheck: # CLogicalEntity
    m_iszEntityA = 0x4C0 # CUtlSymbolLarge
    m_iszEntityB = 0x4C8 # CUtlSymbolLarge
    m_flZone1Distance = 0x4D0 # float
    m_flZone2Distance = 0x4D4 # float
    m_InZone1 = 0x4D8 # CEntityIOOutput
    m_InZone2 = 0x500 # CEntityIOOutput
    m_InZone3 = 0x528 # CEntityIOOutput

class CLogicEventListener: # CLogicalEntity
    m_strEventName = 0x4D0 # CUtlString
    m_bIsEnabled = 0x4D8 # bool
    m_nTeam = 0x4DC # int32_t
    m_OnEventFired = 0x4E0 # CEntityIOOutput

class CLogicGameEvent: # CLogicalEntity
    m_iszEventName = 0x4C0 # CUtlSymbolLarge

class CLogicGameEventListener: # CLogicalEntity
    m_OnEventFired = 0x4D0 # CEntityIOOutput
    m_iszGameEventName = 0x4F8 # CUtlSymbolLarge
    m_iszGameEventItem = 0x500 # CUtlSymbolLarge
    m_bEnabled = 0x508 # bool
    m_bStartDisabled = 0x509 # bool

class CLogicLineToEntity: # CLogicalEntity
    m_Line = 0x4C0 # CEntityOutputTemplate<Vector>
    m_SourceName = 0x4E8 # CUtlSymbolLarge
    m_StartEntity = 0x4F0 # CHandle<CBaseEntity>
    m_EndEntity = 0x4F4 # CHandle<CBaseEntity>

class CLogicMeasureMovement: # CLogicalEntity
    m_strMeasureTarget = 0x4C0 # CUtlSymbolLarge
    m_strMeasureReference = 0x4C8 # CUtlSymbolLarge
    m_strTargetReference = 0x4D0 # CUtlSymbolLarge
    m_hMeasureTarget = 0x4D8 # CHandle<CBaseEntity>
    m_hMeasureReference = 0x4DC # CHandle<CBaseEntity>
    m_hTarget = 0x4E0 # CHandle<CBaseEntity>
    m_hTargetReference = 0x4E4 # CHandle<CBaseEntity>
    m_flScale = 0x4E8 # float
    m_nMeasureType = 0x4EC # int32_t

class CLogicNPCCounter: # CBaseEntity
    m_OnMinCountAll = 0x4C0 # CEntityIOOutput
    m_OnMaxCountAll = 0x4E8 # CEntityIOOutput
    m_OnFactorAll = 0x510 # CEntityOutputTemplate<float>
    m_OnMinPlayerDistAll = 0x538 # CEntityOutputTemplate<float>
    m_OnMinCount_1 = 0x560 # CEntityIOOutput
    m_OnMaxCount_1 = 0x588 # CEntityIOOutput
    m_OnFactor_1 = 0x5B0 # CEntityOutputTemplate<float>
    m_OnMinPlayerDist_1 = 0x5D8 # CEntityOutputTemplate<float>
    m_OnMinCount_2 = 0x600 # CEntityIOOutput
    m_OnMaxCount_2 = 0x628 # CEntityIOOutput
    m_OnFactor_2 = 0x650 # CEntityOutputTemplate<float>
    m_OnMinPlayerDist_2 = 0x678 # CEntityOutputTemplate<float>
    m_OnMinCount_3 = 0x6A0 # CEntityIOOutput
    m_OnMaxCount_3 = 0x6C8 # CEntityIOOutput
    m_OnFactor_3 = 0x6F0 # CEntityOutputTemplate<float>
    m_OnMinPlayerDist_3 = 0x718 # CEntityOutputTemplate<float>
    m_hSource = 0x740 # CEntityHandle
    m_iszSourceEntityName = 0x748 # CUtlSymbolLarge
    m_flDistanceMax = 0x750 # float
    m_bDisabled = 0x754 # bool
    m_nMinCountAll = 0x758 # int32_t
    m_nMaxCountAll = 0x75C # int32_t
    m_nMinFactorAll = 0x760 # int32_t
    m_nMaxFactorAll = 0x764 # int32_t
    m_iszNPCClassname_1 = 0x770 # CUtlSymbolLarge
    m_nNPCState_1 = 0x778 # int32_t
    m_bInvertState_1 = 0x77C # bool
    m_nMinCount_1 = 0x780 # int32_t
    m_nMaxCount_1 = 0x784 # int32_t
    m_nMinFactor_1 = 0x788 # int32_t
    m_nMaxFactor_1 = 0x78C # int32_t
    m_flDefaultDist_1 = 0x794 # float
    m_iszNPCClassname_2 = 0x798 # CUtlSymbolLarge
    m_nNPCState_2 = 0x7A0 # int32_t
    m_bInvertState_2 = 0x7A4 # bool
    m_nMinCount_2 = 0x7A8 # int32_t
    m_nMaxCount_2 = 0x7AC # int32_t
    m_nMinFactor_2 = 0x7B0 # int32_t
    m_nMaxFactor_2 = 0x7B4 # int32_t
    m_flDefaultDist_2 = 0x7BC # float
    m_iszNPCClassname_3 = 0x7C0 # CUtlSymbolLarge
    m_nNPCState_3 = 0x7C8 # int32_t
    m_bInvertState_3 = 0x7CC # bool
    m_nMinCount_3 = 0x7D0 # int32_t
    m_nMaxCount_3 = 0x7D4 # int32_t
    m_nMinFactor_3 = 0x7D8 # int32_t
    m_nMaxFactor_3 = 0x7DC # int32_t
    m_flDefaultDist_3 = 0x7E4 # float

class CLogicNPCCounterAABB: # CLogicNPCCounter
    m_vDistanceOuterMins = 0x800 # Vector
    m_vDistanceOuterMaxs = 0x80C # Vector
    m_vOuterMins = 0x818 # Vector
    m_vOuterMaxs = 0x824 # Vector

class CLogicNPCCounterOBB: # CLogicNPCCounterAABB

class CLogicNavigation: # CLogicalEntity
    m_isOn = 0x4C8 # bool
    m_navProperty = 0x4CC # navproperties_t

class CLogicPlayerProxy: # CLogicalEntity
    m_hPlayer = 0x4C0 # CHandle<CBaseEntity>
    m_PlayerHasAmmo = 0x4C8 # CEntityIOOutput
    m_PlayerHasNoAmmo = 0x4F0 # CEntityIOOutput
    m_PlayerDied = 0x518 # CEntityIOOutput
    m_RequestedPlayerHealth = 0x540 # CEntityOutputTemplate<int32_t>

class CLogicProximity: # CPointEntity

class CLogicRelay: # CLogicalEntity
    m_OnTrigger = 0x4C0 # CEntityIOOutput
    m_OnSpawn = 0x4E8 # CEntityIOOutput
    m_bDisabled = 0x510 # bool
    m_bWaitForRefire = 0x511 # bool
    m_bTriggerOnce = 0x512 # bool
    m_bFastRetrigger = 0x513 # bool
    m_bPassthoughCaller = 0x514 # bool

class CLogicScript: # CPointEntity

class CLogicalEntity: # CServerOnlyEntity

class CMapInfo: # CPointEntity
    m_iBuyingStatus = 0x4C0 # int32_t
    m_flBombRadius = 0x4C4 # float
    m_iPetPopulation = 0x4C8 # int32_t
    m_bUseNormalSpawnsForDM = 0x4CC # bool
    m_bDisableAutoGeneratedDMSpawns = 0x4CD # bool
    m_flBotMaxVisionDistance = 0x4D0 # float
    m_iHostageCount = 0x4D4 # int32_t
    m_bFadePlayerVisibilityFarZ = 0x4D8 # bool

class CMapVetoPickController: # CBaseEntity
    m_bPlayedIntroVcd = 0x4C0 # bool
    m_bNeedToPlayFiveSecondsRemaining = 0x4C1 # bool
    m_dblPreMatchDraftSequenceTime = 0x4E0 # double
    m_bPreMatchDraftStateChanged = 0x4E8 # bool
    m_nDraftType = 0x4EC # int32_t
    m_nTeamWinningCoinToss = 0x4F0 # int32_t
    m_nTeamWithFirstChoice = 0x4F4 # int32_t[64]
    m_nVoteMapIdsList = 0x5F4 # int32_t[7]
    m_nAccountIDs = 0x610 # int32_t[64]
    m_nMapId0 = 0x710 # int32_t[64]
    m_nMapId1 = 0x810 # int32_t[64]
    m_nMapId2 = 0x910 # int32_t[64]
    m_nMapId3 = 0xA10 # int32_t[64]
    m_nMapId4 = 0xB10 # int32_t[64]
    m_nMapId5 = 0xC10 # int32_t[64]
    m_nStartingSide0 = 0xD10 # int32_t[64]
    m_nCurrentPhase = 0xE10 # int32_t
    m_nPhaseStartTick = 0xE14 # int32_t
    m_nPhaseDurationTicks = 0xE18 # int32_t
    m_OnMapVetoed = 0xE20 # CEntityOutputTemplate<CUtlSymbolLarge>
    m_OnMapPicked = 0xE48 # CEntityOutputTemplate<CUtlSymbolLarge>
    m_OnSidesPicked = 0xE70 # CEntityOutputTemplate<int32_t>
    m_OnNewPhaseStarted = 0xE98 # CEntityOutputTemplate<int32_t>
    m_OnLevelTransition = 0xEC0 # CEntityOutputTemplate<int32_t>

class CMarkupVolume: # CBaseModelEntity
    m_bEnabled = 0x710 # bool

class CMarkupVolumeTagged: # CMarkupVolume
    m_bIsGroup = 0x748 # bool
    m_bGroupByPrefab = 0x749 # bool
    m_bGroupByVolume = 0x74A # bool
    m_bGroupOtherGroups = 0x74B # bool
    m_bIsInGroup = 0x74C # bool

class CMarkupVolumeTagged_Nav: # CMarkupVolumeTagged

class CMarkupVolumeTagged_NavGame: # CMarkupVolumeWithRef
    m_bFloodFillAttribute = 0x768 # bool

class CMarkupVolumeWithRef: # CMarkupVolumeTagged
    m_bUseRef = 0x750 # bool
    m_vRefPos = 0x754 # Vector
    m_flRefDot = 0x760 # float

class CMathColorBlend: # CLogicalEntity
    m_flInMin = 0x4C0 # float
    m_flInMax = 0x4C4 # float
    m_OutColor1 = 0x4C8 # Color
    m_OutColor2 = 0x4CC # Color
    m_OutValue = 0x4D0 # CEntityOutputTemplate<Color>

class CMathCounter: # CLogicalEntity
    m_flMin = 0x4C0 # float
    m_flMax = 0x4C4 # float
    m_bHitMin = 0x4C8 # bool
    m_bHitMax = 0x4C9 # bool
    m_bDisabled = 0x4CA # bool
    m_OutValue = 0x4D0 # CEntityOutputTemplate<float>
    m_OnGetValue = 0x4F8 # CEntityOutputTemplate<float>
    m_OnHitMin = 0x520 # CEntityIOOutput
    m_OnHitMax = 0x548 # CEntityIOOutput
    m_OnChangedFromMin = 0x570 # CEntityIOOutput
    m_OnChangedFromMax = 0x598 # CEntityIOOutput

class CMathRemap: # CLogicalEntity
    m_flInMin = 0x4C0 # float
    m_flInMax = 0x4C4 # float
    m_flOut1 = 0x4C8 # float
    m_flOut2 = 0x4CC # float
    m_flOldInValue = 0x4D0 # float
    m_bEnabled = 0x4D4 # bool
    m_OutValue = 0x4D8 # CEntityOutputTemplate<float>
    m_OnRoseAboveMin = 0x500 # CEntityIOOutput
    m_OnRoseAboveMax = 0x528 # CEntityIOOutput
    m_OnFellBelowMin = 0x550 # CEntityIOOutput
    m_OnFellBelowMax = 0x578 # CEntityIOOutput

class CMelee: # CCSWeaponBase

class CMessage: # CPointEntity
    m_iszMessage = 0x4C0 # CUtlSymbolLarge
    m_MessageVolume = 0x4C8 # float
    m_MessageAttenuation = 0x4CC # int32_t
    m_Radius = 0x4D0 # float
    m_sNoise = 0x4D8 # CUtlSymbolLarge
    m_OnShowMessage = 0x4E0 # CEntityIOOutput

class CMessageEntity: # CPointEntity
    m_radius = 0x4C0 # int32_t
    m_messageText = 0x4C8 # CUtlSymbolLarge
    m_drawText = 0x4D0 # bool
    m_bDeveloperOnly = 0x4D1 # bool
    m_bEnabled = 0x4D2 # bool

class CModelPointEntity: # CBaseModelEntity

class CModelState:
    m_hModel = 0xA0 # CStrongHandle<InfoForResourceTypeCModel>
    m_ModelName = 0xA8 # CUtlSymbolLarge
    m_bClientClothCreationSuppressed = 0xE8 # bool
    m_MeshGroupMask = 0x180 # uint64_t
    m_nIdealMotionType = 0x202 # int8_t
    m_nForceLOD = 0x203 # int8_t
    m_nClothUpdateFlags = 0x204 # int8_t

class CMolotovGrenade: # CBaseCSGrenade

class CMolotovProjectile: # CBaseCSGrenadeProjectile
    m_bIsIncGrenade = 0xA98 # bool
    m_bDetonated = 0xAA4 # bool
    m_stillTimer = 0xAA8 # IntervalTimer
    m_bHasBouncedOffPlayer = 0xB88 # bool

class CMomentaryRotButton: # CRotButton
    m_Position = 0x8D8 # CEntityOutputTemplate<float>
    m_OnUnpressed = 0x900 # CEntityIOOutput
    m_OnFullyOpen = 0x928 # CEntityIOOutput
    m_OnFullyClosed = 0x950 # CEntityIOOutput
    m_OnReachedPosition = 0x978 # CEntityIOOutput
    m_lastUsed = 0x9A0 # int32_t
    m_start = 0x9A4 # QAngle
    m_end = 0x9B0 # QAngle
    m_IdealYaw = 0x9BC # float
    m_sNoise = 0x9C0 # CUtlSymbolLarge
    m_bUpdateTarget = 0x9C8 # bool
    m_direction = 0x9CC # int32_t
    m_returnSpeed = 0x9D0 # float
    m_flStartPosition = 0x9D4 # float

class CMotorController:
    m_speed = 0x8 # float
    m_maxTorque = 0xC # float
    m_axis = 0x10 # Vector
    m_inertiaFactor = 0x1C # float

class CMultiLightProxy: # CLogicalEntity
    m_iszLightNameFilter = 0x4C0 # CUtlSymbolLarge
    m_iszLightClassFilter = 0x4C8 # CUtlSymbolLarge
    m_flLightRadiusFilter = 0x4D0 # float
    m_flBrightnessDelta = 0x4D4 # float
    m_bPerformScreenFade = 0x4D8 # bool
    m_flTargetBrightnessMultiplier = 0x4DC # float
    m_flCurrentBrightnessMultiplier = 0x4E0 # float
    m_vecLights = 0x4E8 # CUtlVector<CHandle<CLightEntity>>

class CMultiSource: # CLogicalEntity
    m_rgEntities = 0x4C0 # CHandle<CBaseEntity>[32]
    m_rgTriggered = 0x540 # int32_t[32]
    m_OnTrigger = 0x5C0 # CEntityIOOutput
    m_iTotal = 0x5E8 # int32_t
    m_globalstate = 0x5F0 # CUtlSymbolLarge

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
    m_flWidth = 0x4C0 # float
    m_vLocatorOffset = 0x4C4 # Vector
    m_qLocatorAnglesOffset = 0x4D0 # QAngle
    m_strMovementForward = 0x4E0 # CUtlSymbolLarge
    m_strMovementReverse = 0x4E8 # CUtlSymbolLarge
    m_nNavLinkIdForward = 0x4F0 # int32_t
    m_nNavLinkIdReverse = 0x4F4 # int32_t
    m_bEnabled = 0x4F8 # bool
    m_strFilterName = 0x500 # CUtlSymbolLarge
    m_hFilter = 0x508 # CHandle<CBaseFilter>
    m_OnNavLinkStart = 0x510 # CEntityIOOutput
    m_OnNavLinkFinish = 0x538 # CEntityIOOutput
    m_bIsTerminus = 0x560 # bool

class CNavLinkMovementVData:
    m_bIsInterpolated = 0x0 # bool
    m_unRecommendedDistance = 0x4 # uint32_t
    m_vecAnimgraphVars = 0x8 # CUtlVector<CNavLinkAnimgraphVar>

class CNavSpaceInfo: # CPointEntity
    m_bCreateFlightSpace = 0x4C0 # bool

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
    m_flInnerAngle = 0x938 # float
    m_flOuterAngle = 0x93C # float
    m_bShowLight = 0x940 # bool

class COrnamentProp: # CDynamicProp
    m_initialOwner = 0xB60 # CUtlSymbolLarge

class CParticleSystem: # CBaseModelEntity
    m_szSnapshotFileName = 0x710 # char[512]
    m_bActive = 0x910 # bool
    m_bFrozen = 0x911 # bool
    m_flFreezeTransitionDuration = 0x914 # float
    m_nStopType = 0x918 # int32_t
    m_bAnimateDuringGameplayPause = 0x91C # bool
    m_iEffectIndex = 0x920 # CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_flStartTime = 0x928 # GameTime_t
    m_flPreSimTime = 0x92C # float
    m_vServerControlPoints = 0x930 # Vector[4]
    m_iServerControlPointAssignments = 0x960 # uint8_t[4]
    m_hControlPointEnts = 0x964 # CHandle<CBaseEntity>[64]
    m_bNoSave = 0xA64 # bool
    m_bNoFreeze = 0xA65 # bool
    m_bNoRamp = 0xA66 # bool
    m_bStartActive = 0xA67 # bool
    m_iszEffectName = 0xA68 # CUtlSymbolLarge
    m_iszControlPointNames = 0xA70 # CUtlSymbolLarge[64]
    m_nDataCP = 0xC70 # int32_t
    m_vecDataCPValue = 0xC74 # Vector
    m_nTintCP = 0xC80 # int32_t
    m_clrTint = 0xC84 # Color

class CPathCorner: # CPointEntity
    m_flWait = 0x4C0 # float
    m_flRadius = 0x4C4 # float
    m_OnPass = 0x4C8 # CEntityIOOutput

class CPathCornerCrash: # CPathCorner

class CPathKeyFrame: # CLogicalEntity
    m_Origin = 0x4C0 # Vector
    m_Angles = 0x4CC # QAngle
    m_qAngle = 0x4E0 # Quaternion
    m_iNextKey = 0x4F0 # CUtlSymbolLarge
    m_flNextTime = 0x4F8 # float
    m_pNextKey = 0x500 # CPathKeyFrame*
    m_pPrevKey = 0x508 # CPathKeyFrame*
    m_flSpeed = 0x510 # float

class CPathParticleRope: # CBaseEntity
    m_bStartActive = 0x4C0 # bool
    m_flMaxSimulationTime = 0x4C4 # float
    m_iszEffectName = 0x4C8 # CUtlSymbolLarge
    m_PathNodes_Name = 0x4D0 # CUtlVector<CUtlSymbolLarge>
    m_flParticleSpacing = 0x4E8 # float
    m_flSlack = 0x4EC # float
    m_flRadius = 0x4F0 # float
    m_ColorTint = 0x4F4 # Color
    m_nEffectState = 0x4F8 # int32_t
    m_iEffectIndex = 0x500 # CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_PathNodes_Position = 0x508 # CNetworkUtlVectorBase<Vector>
    m_PathNodes_TangentIn = 0x520 # CNetworkUtlVectorBase<Vector>
    m_PathNodes_TangentOut = 0x538 # CNetworkUtlVectorBase<Vector>
    m_PathNodes_Color = 0x550 # CNetworkUtlVectorBase<Vector>
    m_PathNodes_PinEnabled = 0x568 # CNetworkUtlVectorBase<bool>
    m_PathNodes_RadiusScale = 0x580 # CNetworkUtlVectorBase<float>

class CPathParticleRopeAlias_path_particle_rope_clientside: # CPathParticleRope

class CPathTrack: # CPointEntity
    m_pnext = 0x4C0 # CPathTrack*
    m_pprevious = 0x4C8 # CPathTrack*
    m_paltpath = 0x4D0 # CPathTrack*
    m_flRadius = 0x4D8 # float
    m_length = 0x4DC # float
    m_altName = 0x4E0 # CUtlSymbolLarge
    m_nIterVal = 0x4E8 # int32_t
    m_eOrientationType = 0x4EC # TrackOrientationType_t
    m_OnPass = 0x4F0 # CEntityIOOutput

class CPhysBallSocket: # CPhysConstraint
    m_flFriction = 0x518 # float
    m_bEnableSwingLimit = 0x51C # bool
    m_flSwingLimit = 0x520 # float
    m_bEnableTwistLimit = 0x524 # bool
    m_flMinTwistAngle = 0x528 # float
    m_flMaxTwistAngle = 0x52C # float

class CPhysBox: # CBreakable
    m_damageType = 0x7D0 # int32_t
    m_massScale = 0x7D4 # float
    m_damageToEnableMotion = 0x7D8 # int32_t
    m_flForceToEnableMotion = 0x7DC # float
    m_angPreferredCarryAngles = 0x7E0 # QAngle
    m_bNotSolidToWorld = 0x7EC # bool
    m_bEnableUseOutput = 0x7ED # bool
    m_iExploitableByPlayer = 0x7F0 # int32_t
    m_flTouchOutputPerEntityDelay = 0x7F4 # float
    m_OnDamaged = 0x7F8 # CEntityIOOutput
    m_OnAwakened = 0x820 # CEntityIOOutput
    m_OnMotionEnabled = 0x848 # CEntityIOOutput
    m_OnPlayerUse = 0x870 # CEntityIOOutput
    m_OnStartTouch = 0x898 # CEntityIOOutput
    m_hCarryingPlayer = 0x8C0 # CHandle<CBasePlayerPawn>

class CPhysConstraint: # CLogicalEntity
    m_nameAttach1 = 0x4C8 # CUtlSymbolLarge
    m_nameAttach2 = 0x4D0 # CUtlSymbolLarge
    m_breakSound = 0x4D8 # CUtlSymbolLarge
    m_forceLimit = 0x4E0 # float
    m_torqueLimit = 0x4E4 # float
    m_teleportTick = 0x4E8 # uint32_t
    m_minTeleportDistance = 0x4EC # float
    m_OnBreak = 0x4F0 # CEntityIOOutput

class CPhysExplosion: # CPointEntity
    m_bExplodeOnSpawn = 0x4C0 # bool
    m_flMagnitude = 0x4C4 # float
    m_flDamage = 0x4C8 # float
    m_radius = 0x4CC # float
    m_targetEntityName = 0x4D0 # CUtlSymbolLarge
    m_flInnerRadius = 0x4D8 # float
    m_flPushScale = 0x4DC # float
    m_bConvertToDebrisWhenPossible = 0x4E0 # bool
    m_OnPushedPlayer = 0x4E8 # CEntityIOOutput

class CPhysFixed: # CPhysConstraint
    m_flLinearFrequency = 0x518 # float
    m_flLinearDampingRatio = 0x51C # float
    m_flAngularFrequency = 0x520 # float
    m_flAngularDampingRatio = 0x524 # float
    m_bEnableLinearConstraint = 0x528 # bool
    m_bEnableAngularConstraint = 0x529 # bool

class CPhysForce: # CPointEntity
    m_nameAttach = 0x4C8 # CUtlSymbolLarge
    m_force = 0x4D0 # float
    m_forceTime = 0x4D4 # float
    m_attachedObject = 0x4D8 # CHandle<CBaseEntity>
    m_wasRestored = 0x4DC # bool
    m_integrator = 0x4E0 # CConstantForceController

class CPhysHinge: # CPhysConstraint
    m_soundInfo = 0x520 # ConstraintSoundInfo
    m_NotifyMinLimitReached = 0x5A8 # CEntityIOOutput
    m_NotifyMaxLimitReached = 0x5D0 # CEntityIOOutput
    m_bAtMinLimit = 0x5F8 # bool
    m_bAtMaxLimit = 0x5F9 # bool
    m_hinge = 0x5FC # constraint_hingeparams_t
    m_hingeFriction = 0x63C # float
    m_systemLoadScale = 0x640 # float
    m_bIsAxisLocal = 0x644 # bool
    m_flMinRotation = 0x648 # float
    m_flMaxRotation = 0x64C # float
    m_flInitialRotation = 0x650 # float
    m_flMotorFrequency = 0x654 # float
    m_flMotorDampingRatio = 0x658 # float
    m_flAngleSpeed = 0x65C # float
    m_flAngleSpeedThreshold = 0x660 # float
    m_OnStartMoving = 0x668 # CEntityIOOutput
    m_OnStopMoving = 0x690 # CEntityIOOutput

class CPhysHingeAlias_phys_hinge_local: # CPhysHinge

class CPhysImpact: # CPointEntity
    m_damage = 0x4C0 # float
    m_distance = 0x4C4 # float
    m_directionEntityName = 0x4C8 # CUtlSymbolLarge

class CPhysLength: # CPhysConstraint
    m_offset = 0x518 # Vector[2]
    m_vecAttach = 0x530 # Vector
    m_addLength = 0x53C # float
    m_minLength = 0x540 # float
    m_totalLength = 0x544 # float
    m_bEnableCollision = 0x548 # bool

class CPhysMagnet: # CBaseAnimGraph
    m_OnMagnetAttach = 0x8E8 # CEntityIOOutput
    m_OnMagnetDetach = 0x910 # CEntityIOOutput
    m_massScale = 0x938 # float
    m_forceLimit = 0x93C # float
    m_torqueLimit = 0x940 # float
    m_MagnettedEntities = 0x948 # CUtlVector<magnetted_objects_t>
    m_bActive = 0x960 # bool
    m_bHasHitSomething = 0x961 # bool
    m_flTotalMass = 0x964 # float
    m_flRadius = 0x968 # float
    m_flNextSuckTime = 0x96C # GameTime_t
    m_iMaxObjectsAttached = 0x970 # int32_t

class CPhysMotor: # CLogicalEntity
    m_nameAttach = 0x4C0 # CUtlSymbolLarge
    m_hAttachedObject = 0x4C8 # CHandle<CBaseEntity>
    m_spinUp = 0x4CC # float
    m_additionalAcceleration = 0x4D0 # float
    m_angularAcceleration = 0x4D4 # float
    m_lastTime = 0x4D8 # GameTime_t
    m_motor = 0x4F0 # CMotorController

class CPhysPulley: # CPhysConstraint
    m_position2 = 0x518 # Vector
    m_offset = 0x524 # Vector[2]
    m_addLength = 0x53C # float
    m_gearRatio = 0x540 # float

class CPhysSlideConstraint: # CPhysConstraint
    m_axisEnd = 0x520 # Vector
    m_slideFriction = 0x52C # float
    m_systemLoadScale = 0x530 # float
    m_initialOffset = 0x534 # float
    m_bEnableLinearConstraint = 0x538 # bool
    m_bEnableAngularConstraint = 0x539 # bool
    m_flMotorFrequency = 0x53C # float
    m_flMotorDampingRatio = 0x540 # float
    m_bUseEntityPivot = 0x544 # bool
    m_soundInfo = 0x548 # ConstraintSoundInfo

class CPhysThruster: # CPhysForce
    m_localOrigin = 0x520 # Vector

class CPhysTorque: # CPhysForce
    m_axis = 0x520 # Vector

class CPhysWheelConstraint: # CPhysConstraint
    m_flSuspensionFrequency = 0x518 # float
    m_flSuspensionDampingRatio = 0x51C # float
    m_flSuspensionHeightOffset = 0x520 # float
    m_bEnableSuspensionLimit = 0x524 # bool
    m_flMinSuspensionOffset = 0x528 # float
    m_flMaxSuspensionOffset = 0x52C # float
    m_bEnableSteeringLimit = 0x530 # bool
    m_flMinSteeringAngle = 0x534 # float
    m_flMaxSteeringAngle = 0x538 # float
    m_flSteeringAxisFriction = 0x53C # float
    m_flSpinAxisFriction = 0x540 # float

class CPhysicalButton: # CBaseButton

class CPhysicsEntitySolver: # CLogicalEntity
    m_hMovingEntity = 0x4C8 # CHandle<CBaseEntity>
    m_hPhysicsBlocker = 0x4CC # CHandle<CBaseEntity>
    m_separationDuration = 0x4D0 # float
    m_cancelTime = 0x4D4 # GameTime_t

class CPhysicsProp: # CBreakableProp
    m_MotionEnabled = 0xA68 # CEntityIOOutput
    m_OnAwakened = 0xA90 # CEntityIOOutput
    m_OnAwake = 0xAB8 # CEntityIOOutput
    m_OnAsleep = 0xAE0 # CEntityIOOutput
    m_OnPlayerUse = 0xB08 # CEntityIOOutput
    m_OnPlayerPickup = 0xB30 # CEntityIOOutput
    m_OnOutOfWorld = 0xB58 # CEntityIOOutput
    m_massScale = 0xB80 # float
    m_inertiaScale = 0xB84 # float
    m_buoyancyScale = 0xB88 # float
    m_damageType = 0xB8C # int32_t
    m_damageToEnableMotion = 0xB90 # int32_t
    m_flForceToEnableMotion = 0xB94 # float
    m_bThrownByPlayer = 0xB98 # bool
    m_bDroppedByPlayer = 0xB99 # bool
    m_bTouchedByPlayer = 0xB9A # bool
    m_bFirstCollisionAfterLaunch = 0xB9B # bool
    m_iExploitableByPlayer = 0xB9C # int32_t
    m_bHasBeenAwakened = 0xBA0 # bool
    m_bIsOverrideProp = 0xBA1 # bool
    m_fNextCheckDisableMotionContactsTime = 0xBA4 # GameTime_t
    m_iInitialGlowState = 0xBA8 # int32_t
    m_nGlowRange = 0xBAC # int32_t
    m_nGlowRangeMin = 0xBB0 # int32_t
    m_glowColor = 0xBB4 # Color
    m_bForceNavIgnore = 0xBB8 # bool
    m_bNoNavmeshBlocker = 0xBB9 # bool
    m_bForceNpcExclude = 0xBBA # bool
    m_bShouldAutoConvertBackFromDebris = 0xBBB # bool
    m_bMuteImpactEffects = 0xBBC # bool
    m_bAcceptDamageFromHeldObjects = 0xBC4 # bool
    m_bEnableUseOutput = 0xBC5 # bool
    m_bAwake = 0xBC6 # bool
    m_nCollisionGroupOverride = 0xBC8 # int32_t

class CPhysicsPropMultiplayer: # CPhysicsProp

class CPhysicsPropOverride: # CPhysicsProp

class CPhysicsPropRespawnable: # CPhysicsProp
    m_vOriginalSpawnOrigin = 0xBD0 # Vector
    m_vOriginalSpawnAngles = 0xBDC # QAngle
    m_vOriginalMins = 0xBE8 # Vector
    m_vOriginalMaxs = 0xBF4 # Vector
    m_flRespawnDuration = 0xC00 # float

class CPhysicsShake:
    m_force = 0x8 # Vector

class CPhysicsSpring: # CBaseEntity
    m_flFrequency = 0x4C8 # float
    m_flDampingRatio = 0x4CC # float
    m_flRestLength = 0x4D0 # float
    m_nameAttachStart = 0x4D8 # CUtlSymbolLarge
    m_nameAttachEnd = 0x4E0 # CUtlSymbolLarge
    m_start = 0x4E8 # Vector
    m_end = 0x4F4 # Vector
    m_teleportTick = 0x500 # uint32_t

class CPhysicsWire: # CBaseEntity
    m_nDensity = 0x4C0 # int32_t

class CPlantedC4: # CBaseAnimGraph
    m_bBombTicking = 0x8E8 # bool
    m_flC4Blow = 0x8EC # GameTime_t
    m_nBombSite = 0x8F0 # int32_t
    m_nSourceSoundscapeHash = 0x8F4 # int32_t
    m_OnBombDefused = 0x8F8 # CEntityIOOutput
    m_OnBombBeginDefuse = 0x920 # CEntityIOOutput
    m_OnBombDefuseAborted = 0x948 # CEntityIOOutput
    m_bCannotBeDefused = 0x970 # bool
    m_entitySpottedState = 0x978 # EntitySpottedState_t
    m_nSpotRules = 0x990 # int32_t
    m_bTrainingPlacedByPlayer = 0x994 # bool
    m_bHasExploded = 0x995 # bool
    m_flTimerLength = 0x998 # float
    m_bBeingDefused = 0x99C # bool
    m_fLastDefuseTime = 0x9A4 # GameTime_t
    m_flDefuseLength = 0x9AC # float
    m_flDefuseCountDown = 0x9B0 # GameTime_t
    m_bBombDefused = 0x9B4 # bool
    m_hBombDefuser = 0x9B8 # CHandle<CCSPlayerPawn>
    m_hControlPanel = 0x9BC # CHandle<CBaseEntity>
    m_iProgressBarTime = 0x9C0 # int32_t
    m_bVoiceAlertFired = 0x9C4 # bool
    m_bVoiceAlertPlayed = 0x9C5 # bool[4]
    m_flNextBotBeepTime = 0x9CC # GameTime_t
    m_angCatchUpToPlayerEye = 0x9D4 # QAngle
    m_flLastSpinDetectionTime = 0x9E0 # GameTime_t

class CPlatTrigger: # CBaseModelEntity
    m_pPlatform = 0x710 # CHandle<CFuncPlat>

class CPlayerControllerComponent:
    __m_pChainEntity = 0x8 # CNetworkVarChainer

class CPlayerPawnComponent:
    __m_pChainEntity = 0x8 # CNetworkVarChainer

class CPlayerPing: # CBaseEntity
    m_hPlayer = 0x4C8 # CHandle<CCSPlayerPawn>
    m_hPingedEntity = 0x4CC # CHandle<CBaseEntity>
    m_iType = 0x4D0 # int32_t
    m_bUrgent = 0x4D4 # bool
    m_szPlaceName = 0x4D5 # char[18]

class CPlayerSprayDecal: # CModelPointEntity
    m_nUniqueID = 0x710 # int32_t
    m_unAccountID = 0x714 # uint32_t
    m_unTraceID = 0x718 # uint32_t
    m_rtGcTime = 0x71C # uint32_t
    m_vecEndPos = 0x720 # Vector
    m_vecStart = 0x72C # Vector
    m_vecLeft = 0x738 # Vector
    m_vecNormal = 0x744 # Vector
    m_nPlayer = 0x750 # int32_t
    m_nEntity = 0x754 # int32_t
    m_nHitbox = 0x758 # int32_t
    m_flCreationTime = 0x75C # float
    m_nTintID = 0x760 # int32_t
    m_nVersion = 0x764 # uint8_t
    m_ubSignature = 0x765 # uint8_t[128]

class CPlayerVisibility: # CBaseEntity
    m_flVisibilityStrength = 0x4C0 # float
    m_flFogDistanceMultiplier = 0x4C4 # float
    m_flFogMaxDensityMultiplier = 0x4C8 # float
    m_flFadeTime = 0x4CC # float
    m_bStartDisabled = 0x4D0 # bool
    m_bIsEnabled = 0x4D1 # bool

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
    m_flMaxspeed = 0x198 # float
    m_arrForceSubtickMoveWhen = 0x19C # float[4]
    m_flForwardMove = 0x1AC # float
    m_flLeftMove = 0x1B0 # float
    m_flUpMove = 0x1B4 # float
    m_vecLastMovementImpulses = 0x1B8 # Vector
    m_vecOldViewAngles = 0x1C4 # QAngle

class CPlayer_MovementServices_Humanoid: # CPlayer_MovementServices
    m_flStepSoundTime = 0x1D8 # float
    m_flFallVelocity = 0x1DC # float
    m_bInCrouch = 0x1E0 # bool
    m_nCrouchState = 0x1E4 # uint32_t
    m_flCrouchTransitionStartTime = 0x1E8 # GameTime_t
    m_bDucked = 0x1EC # bool
    m_bDucking = 0x1ED # bool
    m_bInDuckJump = 0x1EE # bool
    m_groundNormal = 0x1F0 # Vector
    m_flSurfaceFriction = 0x1FC # float
    m_surfaceProps = 0x200 # CUtlStringToken
    m_nStepside = 0x210 # int32_t
    m_iTargetVolume = 0x214 # int32_t
    m_vecSmoothedVelocity = 0x218 # Vector

class CPlayer_ObserverServices: # CPlayerPawnComponent
    m_iObserverMode = 0x40 # uint8_t
    m_hObserverTarget = 0x44 # CHandle<CBaseEntity>
    m_iObserverLastMode = 0x48 # ObserverMode_t
    m_bForcedObserverMode = 0x4C # bool

class CPlayer_UseServices: # CPlayerPawnComponent

class CPlayer_ViewModelServices: # CPlayerPawnComponent

class CPlayer_WaterServices: # CPlayerPawnComponent

class CPlayer_WeaponServices: # CPlayerPawnComponent
    m_hMyWeapons = 0x40 # CNetworkUtlVectorBase<CHandle<CBasePlayerWeapon>>
    m_hActiveWeapon = 0x58 # CHandle<CBasePlayerWeapon>
    m_hLastWeapon = 0x5C # CHandle<CBasePlayerWeapon>
    m_iAmmo = 0x60 # uint16_t[32]
    m_bPreventWeaponPickup = 0xA0 # bool

class CPointAngleSensor: # CPointEntity
    m_bDisabled = 0x4C0 # bool
    m_nLookAtName = 0x4C8 # CUtlSymbolLarge
    m_hTargetEntity = 0x4D0 # CHandle<CBaseEntity>
    m_hLookAtEntity = 0x4D4 # CHandle<CBaseEntity>
    m_flDuration = 0x4D8 # float
    m_flDotTolerance = 0x4DC # float
    m_flFacingTime = 0x4E0 # GameTime_t
    m_bFired = 0x4E4 # bool
    m_OnFacingLookat = 0x4E8 # CEntityIOOutput
    m_OnNotFacingLookat = 0x510 # CEntityIOOutput
    m_TargetDir = 0x538 # CEntityOutputTemplate<Vector>
    m_FacingPercentage = 0x560 # CEntityOutputTemplate<float>

class CPointAngularVelocitySensor: # CPointEntity
    m_hTargetEntity = 0x4C0 # CHandle<CBaseEntity>
    m_flThreshold = 0x4C4 # float
    m_nLastCompareResult = 0x4C8 # int32_t
    m_nLastFireResult = 0x4CC # int32_t
    m_flFireTime = 0x4D0 # GameTime_t
    m_flFireInterval = 0x4D4 # float
    m_flLastAngVelocity = 0x4D8 # float
    m_lastOrientation = 0x4DC # QAngle
    m_vecAxis = 0x4E8 # Vector
    m_bUseHelper = 0x4F4 # bool
    m_AngularVelocity = 0x4F8 # CEntityOutputTemplate<float>
    m_OnLessThan = 0x520 # CEntityIOOutput
    m_OnLessThanOrEqualTo = 0x548 # CEntityIOOutput
    m_OnGreaterThan = 0x570 # CEntityIOOutput
    m_OnGreaterThanOrEqualTo = 0x598 # CEntityIOOutput
    m_OnEqualTo = 0x5C0 # CEntityIOOutput

class CPointBroadcastClientCommand: # CPointEntity

class CPointCamera: # CBaseEntity
    m_FOV = 0x4C0 # float
    m_Resolution = 0x4C4 # float
    m_bFogEnable = 0x4C8 # bool
    m_FogColor = 0x4C9 # Color
    m_flFogStart = 0x4D0 # float
    m_flFogEnd = 0x4D4 # float
    m_flFogMaxDensity = 0x4D8 # float
    m_bActive = 0x4DC # bool
    m_bUseScreenAspectRatio = 0x4DD # bool
    m_flAspectRatio = 0x4E0 # float
    m_bNoSky = 0x4E4 # bool
    m_fBrightness = 0x4E8 # float
    m_flZFar = 0x4EC # float
    m_flZNear = 0x4F0 # float
    m_bCanHLTVUse = 0x4F4 # bool
    m_bDofEnabled = 0x4F5 # bool
    m_flDofNearBlurry = 0x4F8 # float
    m_flDofNearCrisp = 0x4FC # float
    m_flDofFarCrisp = 0x500 # float
    m_flDofFarBlurry = 0x504 # float
    m_flDofTiltToGround = 0x508 # float
    m_TargetFOV = 0x50C # float
    m_DegreesPerSecond = 0x510 # float
    m_bIsOn = 0x514 # bool
    m_pNext = 0x518 # CPointCamera*

class CPointCameraVFOV: # CPointCamera
    m_flVerticalFOV = 0x520 # float

class CPointClientCommand: # CPointEntity

class CPointClientUIDialog: # CBaseClientUIEntity
    m_hActivator = 0x8C0 # CHandle<CBaseEntity>
    m_bStartEnabled = 0x8C4 # bool

class CPointClientUIWorldPanel: # CBaseClientUIEntity
    m_bIgnoreInput = 0x8C0 # bool
    m_bLit = 0x8C1 # bool
    m_bFollowPlayerAcrossTeleport = 0x8C2 # bool
    m_flWidth = 0x8C4 # float
    m_flHeight = 0x8C8 # float
    m_flDPI = 0x8CC # float
    m_flInteractDistance = 0x8D0 # float
    m_flDepthOffset = 0x8D4 # float
    m_unOwnerContext = 0x8D8 # uint32_t
    m_unHorizontalAlign = 0x8DC # uint32_t
    m_unVerticalAlign = 0x8E0 # uint32_t
    m_unOrientation = 0x8E4 # uint32_t
    m_bAllowInteractionFromAllSceneWorlds = 0x8E8 # bool
    m_vecCSSClasses = 0x8F0 # CNetworkUtlVectorBase<CUtlSymbolLarge>
    m_bOpaque = 0x908 # bool
    m_bNoDepth = 0x909 # bool
    m_bRenderBackface = 0x90A # bool
    m_bUseOffScreenIndicator = 0x90B # bool
    m_bExcludeFromSaveGames = 0x90C # bool
    m_bGrabbable = 0x90D # bool
    m_bOnlyRenderToTexture = 0x90E # bool
    m_bDisableMipGen = 0x90F # bool
    m_nExplicitImageLayout = 0x910 # int32_t

class CPointClientUIWorldTextPanel: # CPointClientUIWorldPanel
    m_messageText = 0x918 # char[512]

class CPointCommentaryNode: # CBaseAnimGraph
    m_iszPreCommands = 0x8E8 # CUtlSymbolLarge
    m_iszPostCommands = 0x8F0 # CUtlSymbolLarge
    m_iszCommentaryFile = 0x8F8 # CUtlSymbolLarge
    m_iszViewTarget = 0x900 # CUtlSymbolLarge
    m_hViewTarget = 0x908 # CHandle<CBaseEntity>
    m_hViewTargetAngles = 0x90C # CHandle<CBaseEntity>
    m_iszViewPosition = 0x910 # CUtlSymbolLarge
    m_hViewPosition = 0x918 # CHandle<CBaseEntity>
    m_hViewPositionMover = 0x91C # CHandle<CBaseEntity>
    m_bPreventMovement = 0x920 # bool
    m_bUnderCrosshair = 0x921 # bool
    m_bUnstoppable = 0x922 # bool
    m_flFinishedTime = 0x924 # GameTime_t
    m_vecFinishOrigin = 0x928 # Vector
    m_vecOriginalAngles = 0x934 # QAngle
    m_vecFinishAngles = 0x940 # QAngle
    m_bPreventChangesWhileMoving = 0x94C # bool
    m_bDisabled = 0x94D # bool
    m_vecTeleportOrigin = 0x950 # Vector
    m_flAbortedPlaybackAt = 0x95C # GameTime_t
    m_pOnCommentaryStarted = 0x960 # CEntityIOOutput
    m_pOnCommentaryStopped = 0x988 # CEntityIOOutput
    m_bActive = 0x9B0 # bool
    m_flStartTime = 0x9B4 # GameTime_t
    m_flStartTimeInCommentary = 0x9B8 # float
    m_iszTitle = 0x9C0 # CUtlSymbolLarge
    m_iszSpeakers = 0x9C8 # CUtlSymbolLarge
    m_iNodeNumber = 0x9D0 # int32_t
    m_iNodeNumberMax = 0x9D4 # int32_t
    m_bListenedTo = 0x9D8 # bool

class CPointEntity: # CBaseEntity

class CPointEntityFinder: # CBaseEntity
    m_hEntity = 0x4C0 # CHandle<CBaseEntity>
    m_iFilterName = 0x4C8 # CUtlSymbolLarge
    m_hFilter = 0x4D0 # CHandle<CBaseFilter>
    m_iRefName = 0x4D8 # CUtlSymbolLarge
    m_hReference = 0x4E0 # CHandle<CBaseEntity>
    m_FindMethod = 0x4E4 # EntFinderMethod_t
    m_OnFoundEntity = 0x4E8 # CEntityIOOutput

class CPointGamestatsCounter: # CPointEntity
    m_strStatisticName = 0x4C0 # CUtlSymbolLarge
    m_bDisabled = 0x4C8 # bool

class CPointGiveAmmo: # CPointEntity
    m_pActivator = 0x4C0 # CHandle<CBaseEntity>

class CPointHurt: # CPointEntity
    m_nDamage = 0x4C0 # int32_t
    m_bitsDamageType = 0x4C4 # int32_t
    m_flRadius = 0x4C8 # float
    m_flDelay = 0x4CC # float
    m_strTarget = 0x4D0 # CUtlSymbolLarge
    m_pActivator = 0x4D8 # CHandle<CBaseEntity>

class CPointPrefab: # CServerOnlyPointEntity
    m_targetMapName = 0x4C0 # CUtlSymbolLarge
    m_forceWorldGroupID = 0x4C8 # CUtlSymbolLarge
    m_associatedRelayTargetName = 0x4D0 # CUtlSymbolLarge
    m_fixupNames = 0x4D8 # bool
    m_bLoadDynamic = 0x4D9 # bool
    m_associatedRelayEntity = 0x4DC # CHandle<CPointPrefab>

class CPointProximitySensor: # CPointEntity
    m_bDisabled = 0x4C0 # bool
    m_hTargetEntity = 0x4C4 # CHandle<CBaseEntity>
    m_Distance = 0x4C8 # CEntityOutputTemplate<float>

class CPointPulse: # CBaseEntity

class CPointPush: # CPointEntity
    m_bEnabled = 0x4C0 # bool
    m_flMagnitude = 0x4C4 # float
    m_flRadius = 0x4C8 # float
    m_flInnerRadius = 0x4CC # float
    m_flConeOfInfluence = 0x4D0 # float
    m_iszFilterName = 0x4D8 # CUtlSymbolLarge
    m_hFilter = 0x4E0 # CHandle<CBaseFilter>

class CPointScriptEntity: # CBaseEntity

class CPointServerCommand: # CPointEntity

class CPointTeleport: # CServerOnlyPointEntity
    m_vSaveOrigin = 0x4C0 # Vector
    m_vSaveAngles = 0x4CC # QAngle
    m_bTeleportParentedEntities = 0x4D8 # bool
    m_bTeleportUseCurrentAngle = 0x4D9 # bool

class CPointTemplate: # CLogicalEntity
    m_iszWorldName = 0x4C0 # CUtlSymbolLarge
    m_iszSource2EntityLumpName = 0x4C8 # CUtlSymbolLarge
    m_iszEntityFilterName = 0x4D0 # CUtlSymbolLarge
    m_flTimeoutInterval = 0x4D8 # float
    m_bAsynchronouslySpawnEntities = 0x4DC # bool
    m_pOutputOnSpawned = 0x4E0 # CEntityIOOutput
    m_clientOnlyEntityBehavior = 0x508 # PointTemplateClientOnlyEntityBehavior_t
    m_ownerSpawnGroupType = 0x50C # PointTemplateOwnerSpawnGroupType_t
    m_createdSpawnGroupHandles = 0x510 # CUtlVector<uint32_t>
    m_SpawnedEntityHandles = 0x528 # CUtlVector<CEntityHandle>
    m_ScriptSpawnCallback = 0x540 # HSCRIPT
    m_ScriptCallbackScope = 0x548 # HSCRIPT

class CPointValueRemapper: # CBaseEntity
    m_bDisabled = 0x4C0 # bool
    m_bUpdateOnClient = 0x4C1 # bool
    m_nInputType = 0x4C4 # ValueRemapperInputType_t
    m_iszRemapLineStartName = 0x4C8 # CUtlSymbolLarge
    m_iszRemapLineEndName = 0x4D0 # CUtlSymbolLarge
    m_hRemapLineStart = 0x4D8 # CHandle<CBaseEntity>
    m_hRemapLineEnd = 0x4DC # CHandle<CBaseEntity>
    m_flMaximumChangePerSecond = 0x4E0 # float
    m_flDisengageDistance = 0x4E4 # float
    m_flEngageDistance = 0x4E8 # float
    m_bRequiresUseKey = 0x4EC # bool
    m_nOutputType = 0x4F0 # ValueRemapperOutputType_t
    m_iszOutputEntityName = 0x4F8 # CUtlSymbolLarge
    m_iszOutputEntity2Name = 0x500 # CUtlSymbolLarge
    m_iszOutputEntity3Name = 0x508 # CUtlSymbolLarge
    m_iszOutputEntity4Name = 0x510 # CUtlSymbolLarge
    m_hOutputEntities = 0x518 # CNetworkUtlVectorBase<CHandle<CBaseEntity>>
    m_nHapticsType = 0x530 # ValueRemapperHapticsType_t
    m_nMomentumType = 0x534 # ValueRemapperMomentumType_t
    m_flMomentumModifier = 0x538 # float
    m_flSnapValue = 0x53C # float
    m_flCurrentMomentum = 0x540 # float
    m_nRatchetType = 0x544 # ValueRemapperRatchetType_t
    m_flRatchetOffset = 0x548 # float
    m_flInputOffset = 0x54C # float
    m_bEngaged = 0x550 # bool
    m_bFirstUpdate = 0x551 # bool
    m_flPreviousValue = 0x554 # float
    m_flPreviousUpdateTickTime = 0x558 # GameTime_t
    m_vecPreviousTestPoint = 0x55C # Vector
    m_hUsingPlayer = 0x568 # CHandle<CBasePlayerPawn>
    m_flCustomOutputValue = 0x56C # float
    m_iszSoundEngage = 0x570 # CUtlSymbolLarge
    m_iszSoundDisengage = 0x578 # CUtlSymbolLarge
    m_iszSoundReachedValueZero = 0x580 # CUtlSymbolLarge
    m_iszSoundReachedValueOne = 0x588 # CUtlSymbolLarge
    m_iszSoundMovingLoop = 0x590 # CUtlSymbolLarge
    m_Position = 0x5A0 # CEntityOutputTemplate<float>
    m_PositionDelta = 0x5C8 # CEntityOutputTemplate<float>
    m_OnReachedValueZero = 0x5F0 # CEntityIOOutput
    m_OnReachedValueOne = 0x618 # CEntityIOOutput
    m_OnReachedValueCustom = 0x640 # CEntityIOOutput
    m_OnEngage = 0x668 # CEntityIOOutput
    m_OnDisengage = 0x690 # CEntityIOOutput

class CPointVelocitySensor: # CPointEntity
    m_hTargetEntity = 0x4C0 # CHandle<CBaseEntity>
    m_vecAxis = 0x4C4 # Vector
    m_bEnabled = 0x4D0 # bool
    m_fPrevVelocity = 0x4D4 # float
    m_flAvgInterval = 0x4D8 # float
    m_Velocity = 0x4E0 # CEntityOutputTemplate<float>

class CPointWorldText: # CModelPointEntity
    m_messageText = 0x710 # char[512]
    m_FontName = 0x910 # char[64]
    m_bEnabled = 0x950 # bool
    m_bFullbright = 0x951 # bool
    m_flWorldUnitsPerPx = 0x954 # float
    m_flFontSize = 0x958 # float
    m_flDepthOffset = 0x95C # float
    m_Color = 0x960 # Color
    m_nJustifyHorizontal = 0x964 # PointWorldTextJustifyHorizontal_t
    m_nJustifyVertical = 0x968 # PointWorldTextJustifyVertical_t
    m_nReorientMode = 0x96C # PointWorldTextReorientMode_t

class CPostProcessingVolume: # CBaseTrigger
    m_hPostSettings = 0x8C8 # CStrongHandle<InfoForResourceTypeCPostProcessingResource>
    m_flFadeDuration = 0x8D0 # float
    m_flMinLogExposure = 0x8D4 # float
    m_flMaxLogExposure = 0x8D8 # float
    m_flMinExposure = 0x8DC # float
    m_flMaxExposure = 0x8E0 # float
    m_flExposureCompensation = 0x8E4 # float
    m_flExposureFadeSpeedUp = 0x8E8 # float
    m_flExposureFadeSpeedDown = 0x8EC # float
    m_flTonemapEVSmoothingRange = 0x8F0 # float
    m_bMaster = 0x8F4 # bool
    m_bExposureControl = 0x8F5 # bool
    m_flRate = 0x8F8 # float
    m_flTonemapPercentTarget = 0x8FC # float
    m_flTonemapPercentBrightPixels = 0x900 # float
    m_flTonemapMinAvgLum = 0x904 # float

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
    m_nTexture = 0x4C0 # int32_t
    m_flDistance = 0x4C4 # float

class CPropDoorRotating: # CBasePropDoor
    m_vecAxis = 0xDF0 # Vector
    m_flDistance = 0xDFC # float
    m_eSpawnPosition = 0xE00 # PropDoorRotatingSpawnPos_t
    m_eOpenDirection = 0xE04 # PropDoorRotatingOpenDirection_e
    m_eCurrentOpenDirection = 0xE08 # PropDoorRotatingOpenDirection_e
    m_flAjarAngle = 0xE0C # float
    m_angRotationAjarDeprecated = 0xE10 # QAngle
    m_angRotationClosed = 0xE1C # QAngle
    m_angRotationOpenForward = 0xE28 # QAngle
    m_angRotationOpenBack = 0xE34 # QAngle
    m_angGoal = 0xE40 # QAngle
    m_vecForwardBoundsMin = 0xE4C # Vector
    m_vecForwardBoundsMax = 0xE58 # Vector
    m_vecBackBoundsMin = 0xE64 # Vector
    m_vecBackBoundsMax = 0xE70 # Vector
    m_bAjarDoorShouldntAlwaysOpen = 0xE7C # bool
    m_hEntityBlocker = 0xE80 # CHandle<CEntityBlocker>

class CPropDoorRotatingBreakable: # CPropDoorRotating
    m_bBreakable = 0xE88 # bool
    m_isAbleToCloseAreaPortals = 0xE89 # bool
    m_currentDamageState = 0xE8C # int32_t
    m_damageStates = 0xE90 # CUtlVector<CUtlSymbolLarge>

class CPulseCell_Inflow_GameEvent: # CPulseCell_Inflow_BaseEntrypoint
    m_EventName = 0x70 # CBufferString

class CPulseCell_Outflow_PlaySceneBase: # CPulseCell_BaseYieldingInflow
    m_OnFinished = 0x48 # CPulse_ResumePoint
    m_OnCanceled = 0x58 # CPulse_ResumePoint
    m_Triggers = 0x68 # CUtlVector<CPulse_OutflowConnection>

class CPulseCell_Outflow_PlaySceneBase_CursorState_t:
    m_sceneInstance = 0x0 # CHandle<CBaseEntity>

class CPulseCell_Outflow_PlaySequence: # CPulseCell_Outflow_PlaySceneBase
    m_ParamSequenceName = 0x80 # CUtlString

class CPulseCell_Outflow_PlayVCD: # CPulseCell_Outflow_PlaySceneBase
    m_vcdFilename = 0x80 # CUtlString

class CPulseCell_Outflow_ScriptedSequence: # CPulseCell_BaseYieldingInflow
    m_scriptedSequenceDataMain = 0x48 # PulseScriptedSequenceData_t
    m_vecAdditionalActors = 0x78 # CUtlVector<PulseScriptedSequenceData_t>
    m_OnFinished = 0x90 # CPulse_ResumePoint
    m_OnCanceled = 0xA0 # CPulse_ResumePoint
    m_Triggers = 0xB0 # CUtlVector<CPulse_OutflowConnection>

class CPulseCell_Outflow_ScriptedSequence_CursorState_t:
    m_scriptedSequence = 0x0 # CHandle<CBaseEntity>

class CPulseCell_SoundEventStart: # CPulseCell_BaseFlow
    m_Type = 0x48 # SoundEventStartType_t

class CPulseCell_Step_EntFire: # CPulseCell_BaseFlow
    m_Input = 0x48 # CUtlString

class CPulseCell_Step_FollowEntity: # CPulseCell_BaseFlow
    m_ParamBoneOrAttachName = 0x48 # CUtlString
    m_ParamBoneOrAttachNameChild = 0x50 # CUtlString

class CPulseCell_Value_FindEntByClassNameWithin: # CPulseCell_BaseValue
    m_EntityType = 0x48 # CUtlString

class CPulseCell_Value_FindEntByName: # CPulseCell_BaseValue
    m_EntityType = 0x48 # CUtlString

class CPulseGraphComponentBase:
    m_hOwner = 0x8 # CHandle<CBaseEntity>
    m_sNameFixupStaticPrefix = 0x10 # CUtlSymbolLarge
    m_sNameFixupParent = 0x18 # CUtlSymbolLarge
    m_sNameFixupLocal = 0x20 # CUtlSymbolLarge

class CPulseGraphComponentPointServer: # CPulseGraphComponentBase

class CPulseGraphInstance_ServerEntity: # CBasePulseGraphInstance
    m_pComponent = 0xD8 # CPulseGraphComponentBase*

class CPulseGraphInstance_ServerPointEntity: # CPulseGraphInstance_ServerEntity

class CPulseServerCursor: # CPulseExecCursor

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
    m_xmin = 0x518 # float
    m_xmax = 0x51C # float
    m_ymin = 0x520 # float
    m_ymax = 0x524 # float
    m_zmin = 0x528 # float
    m_zmax = 0x52C # float
    m_xfriction = 0x530 # float
    m_yfriction = 0x534 # float
    m_zfriction = 0x538 # float

class CRagdollMagnet: # CPointEntity
    m_bDisabled = 0x4C0 # bool
    m_radius = 0x4C4 # float
    m_force = 0x4C8 # float
    m_axis = 0x4CC # Vector

class CRagdollManager: # CBaseEntity
    m_iCurrentMaxRagdollCount = 0x4C0 # int8_t
    m_iMaxRagdollCount = 0x4C4 # int32_t
    m_bSaveImportant = 0x4C8 # bool

class CRagdollProp: # CBaseAnimGraph
    m_ragdoll = 0x8F0 # ragdoll_t
    m_bStartDisabled = 0x928 # bool
    m_ragPos = 0x930 # CNetworkUtlVectorBase<Vector>
    m_ragAngles = 0x948 # CNetworkUtlVectorBase<QAngle>
    m_hRagdollSource = 0x960 # CHandle<CBaseEntity>
    m_lastUpdateTickCount = 0x964 # uint32_t
    m_allAsleep = 0x968 # bool
    m_bFirstCollisionAfterLaunch = 0x969 # bool
    m_hDamageEntity = 0x96C # CHandle<CBaseEntity>
    m_hKiller = 0x970 # CHandle<CBaseEntity>
    m_hPhysicsAttacker = 0x974 # CHandle<CBasePlayerPawn>
    m_flLastPhysicsInfluenceTime = 0x978 # GameTime_t
    m_flFadeOutStartTime = 0x97C # GameTime_t
    m_flFadeTime = 0x980 # float
    m_vecLastOrigin = 0x984 # Vector
    m_flAwakeTime = 0x990 # GameTime_t
    m_flLastOriginChangeTime = 0x994 # GameTime_t
    m_nBloodColor = 0x998 # int32_t
    m_strOriginClassName = 0x9A0 # CUtlSymbolLarge
    m_strSourceClassName = 0x9A8 # CUtlSymbolLarge
    m_bHasBeenPhysgunned = 0x9B0 # bool
    m_bShouldTeleportPhysics = 0x9B1 # bool
    m_flBlendWeight = 0x9B4 # float
    m_flDefaultFadeScale = 0x9B8 # float
    m_ragdollMins = 0x9C0 # CUtlVector<Vector>
    m_ragdollMaxs = 0x9D8 # CUtlVector<Vector>
    m_bShouldDeleteActivationRecord = 0x9F0 # bool
    m_bValidatePoweredRagdollPose = 0xA50 # bool

class CRagdollPropAlias_physics_prop_ragdoll: # CRagdollProp

class CRagdollPropAttached: # CRagdollProp
    m_boneIndexAttached = 0xA90 # uint32_t
    m_ragdollAttachedObjectIndex = 0xA94 # uint32_t
    m_attachmentPointBoneSpace = 0xA98 # Vector
    m_attachmentPointRagdollSpace = 0xAA4 # Vector
    m_bShouldDetach = 0xAB0 # bool
    m_bShouldDeleteAttachedActivationRecord = 0xAC0 # bool

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
    m_bShowLight = 0x938 # bool

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
    m_ExpresserTargets = 0x48 # CUtlVector<CAI_Expresser*>

class CResponseQueue_CDeferredResponse:
    m_contexts = 0x8 # CResponseCriteriaSet
    m_fDispatchTime = 0x38 # float
    m_hIssuer = 0x3C # CHandle<CBaseEntity>
    m_response = 0x48 # CRR_Response
    m_bResponseValid = 0x230 # bool

class CRetakeGameRules:
    m_nMatchSeed = 0xF8 # int32_t
    m_bBlockersPresent = 0xFC # bool
    m_bRoundInProgress = 0xFD # bool
    m_iFirstSecondHalfRound = 0x100 # int32_t
    m_iBombSite = 0x104 # int32_t

class CRevertSaved: # CModelPointEntity
    m_loadTime = 0x710 # float
    m_Duration = 0x714 # float
    m_HoldTime = 0x718 # float

class CRopeKeyframe: # CBaseModelEntity
    m_RopeFlags = 0x718 # uint16_t
    m_iNextLinkName = 0x720 # CUtlSymbolLarge
    m_Slack = 0x728 # int16_t
    m_Width = 0x72C # float
    m_TextureScale = 0x730 # float
    m_nSegments = 0x734 # uint8_t
    m_bConstrainBetweenEndpoints = 0x735 # bool
    m_strRopeMaterialModel = 0x738 # CUtlSymbolLarge
    m_iRopeMaterialModelIndex = 0x740 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_Subdiv = 0x748 # uint8_t
    m_nChangeCount = 0x749 # uint8_t
    m_RopeLength = 0x74A # int16_t
    m_fLockedPoints = 0x74C # uint8_t
    m_bCreatedFromMapFile = 0x74D # bool
    m_flScrollSpeed = 0x750 # float
    m_bStartPointValid = 0x754 # bool
    m_bEndPointValid = 0x755 # bool
    m_hStartPoint = 0x758 # CHandle<CBaseEntity>
    m_hEndPoint = 0x75C # CHandle<CBaseEntity>
    m_iStartAttachment = 0x760 # AttachmentHandle_t
    m_iEndAttachment = 0x761 # AttachmentHandle_t

class CRopeKeyframeAlias_move_rope: # CRopeKeyframe

class CRopeOverlapHit:
    m_hEntity = 0x0 # CHandle<CBaseEntity>
    m_vecOverlappingLinks = 0x8 # CUtlVector<int32_t>

class CRotButton: # CBaseButton

class CRotDoor: # CBaseDoor
    m_bSolidBsp = 0x998 # bool

class CRuleBrushEntity: # CRuleEntity

class CRuleEntity: # CBaseModelEntity
    m_iszMaster = 0x710 # CUtlSymbolLarge

class CRulePointEntity: # CRuleEntity
    m_Score = 0x718 # int32_t

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
    m_iEnemyKnifeKills = 0x74 # int32_t
    m_iEnemyTaserKills = 0x78 # int32_t
    m_iEnemy2Ks = 0x7C # int32_t
    m_iUtility_Count = 0x80 # int32_t
    m_iUtility_Successes = 0x84 # int32_t
    m_iUtility_Enemies = 0x88 # int32_t
    m_iFlash_Count = 0x8C # int32_t
    m_iFlash_Successes = 0x90 # int32_t
    m_nHealthPointsRemovedTotal = 0x94 # int32_t
    m_nHealthPointsDealtTotal = 0x98 # int32_t
    m_nShotsFiredTotal = 0x9C # int32_t
    m_nShotsOnTargetTotal = 0xA0 # int32_t
    m_i1v1Count = 0xA4 # int32_t
    m_i1v1Wins = 0xA8 # int32_t
    m_i1v2Count = 0xAC # int32_t
    m_i1v2Wins = 0xB0 # int32_t
    m_iEntryCount = 0xB4 # int32_t
    m_iEntryWins = 0xB8 # int32_t

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
    m_iszSceneFile = 0x4C8 # CUtlSymbolLarge
    m_iszResumeSceneFile = 0x4D0 # CUtlSymbolLarge
    m_iszTarget1 = 0x4D8 # CUtlSymbolLarge
    m_iszTarget2 = 0x4E0 # CUtlSymbolLarge
    m_iszTarget3 = 0x4E8 # CUtlSymbolLarge
    m_iszTarget4 = 0x4F0 # CUtlSymbolLarge
    m_iszTarget5 = 0x4F8 # CUtlSymbolLarge
    m_iszTarget6 = 0x500 # CUtlSymbolLarge
    m_iszTarget7 = 0x508 # CUtlSymbolLarge
    m_iszTarget8 = 0x510 # CUtlSymbolLarge
    m_hTarget1 = 0x518 # CHandle<CBaseEntity>
    m_hTarget2 = 0x51C # CHandle<CBaseEntity>
    m_hTarget3 = 0x520 # CHandle<CBaseEntity>
    m_hTarget4 = 0x524 # CHandle<CBaseEntity>
    m_hTarget5 = 0x528 # CHandle<CBaseEntity>
    m_hTarget6 = 0x52C # CHandle<CBaseEntity>
    m_hTarget7 = 0x530 # CHandle<CBaseEntity>
    m_hTarget8 = 0x534 # CHandle<CBaseEntity>
    m_bIsPlayingBack = 0x538 # bool
    m_bPaused = 0x539 # bool
    m_bMultiplayer = 0x53A # bool
    m_bAutogenerated = 0x53B # bool
    m_flForceClientTime = 0x53C # float
    m_flCurrentTime = 0x540 # float
    m_flFrameTime = 0x544 # float
    m_bCancelAtNextInterrupt = 0x548 # bool
    m_fPitch = 0x54C # float
    m_bAutomated = 0x550 # bool
    m_nAutomatedAction = 0x554 # int32_t
    m_flAutomationDelay = 0x558 # float
    m_flAutomationTime = 0x55C # float
    m_hWaitingForThisResumeScene = 0x560 # CHandle<CBaseEntity>
    m_bWaitingForResumeScene = 0x564 # bool
    m_bPausedViaInput = 0x565 # bool
    m_bPauseAtNextInterrupt = 0x566 # bool
    m_bWaitingForActor = 0x567 # bool
    m_bWaitingForInterrupt = 0x568 # bool
    m_bInterruptedActorsScenes = 0x569 # bool
    m_bBreakOnNonIdle = 0x56A # bool
    m_hActorList = 0x570 # CNetworkUtlVectorBase<CHandle<CBaseFlex>>
    m_hRemoveActorList = 0x588 # CUtlVector<CHandle<CBaseEntity>>
    m_nSceneFlushCounter = 0x5D0 # int32_t
    m_nSceneStringIndex = 0x5D4 # uint16_t
    m_OnStart = 0x5D8 # CEntityIOOutput
    m_OnCompletion = 0x600 # CEntityIOOutput
    m_OnCanceled = 0x628 # CEntityIOOutput
    m_OnPaused = 0x650 # CEntityIOOutput
    m_OnResumed = 0x678 # CEntityIOOutput
    m_OnTrigger = 0x6A0 # CEntityIOOutput[16]
    m_hInterruptScene = 0x9B0 # CHandle<CSceneEntity>
    m_nInterruptCount = 0x9B4 # int32_t
    m_bSceneMissing = 0x9B8 # bool
    m_bInterrupted = 0x9B9 # bool
    m_bCompletedEarly = 0x9BA # bool
    m_bInterruptSceneFinished = 0x9BB # bool
    m_bRestoring = 0x9BC # bool
    m_hNotifySceneCompletion = 0x9C0 # CUtlVector<CHandle<CSceneEntity>>
    m_hListManagers = 0x9D8 # CUtlVector<CHandle<CSceneListManager>>
    m_iszSoundName = 0x9F0 # CUtlSymbolLarge
    m_iszSequenceName = 0x9F8 # CUtlSymbolLarge
    m_hActor = 0xA00 # CHandle<CBaseFlex>
    m_hActivator = 0xA04 # CHandle<CBaseEntity>
    m_BusyActor = 0xA08 # int32_t
    m_iPlayerDeathBehavior = 0xA0C # SceneOnPlayerDeath_t

class CSceneEntityAlias_logic_choreographed_scene: # CSceneEntity

class CSceneEventInfo:
    m_iLayer = 0x0 # int32_t
    m_iPriority = 0x4 # int32_t
    m_hSequence = 0x8 # HSequence
    m_flWeight = 0xC # float
    m_bHasArrived = 0x10 # bool
    m_nType = 0x14 # int32_t
    m_flNext = 0x18 # GameTime_t
    m_bIsGesture = 0x1C # bool
    m_bShouldRemove = 0x1D # bool
    m_hTarget = 0x44 # CHandle<CBaseEntity>
    m_nSceneEventId = 0x48 # uint32_t
    m_bClientSide = 0x4C # bool
    m_bStarted = 0x4D # bool

class CSceneListManager: # CLogicalEntity
    m_hListManagers = 0x4C0 # CUtlVector<CHandle<CSceneListManager>>
    m_iszScenes = 0x4D8 # CUtlSymbolLarge[16]
    m_hScenes = 0x558 # CHandle<CBaseEntity>[16]

class CScriptComponent: # CEntityComponent
    m_scriptClassName = 0x30 # CUtlSymbolLarge

class CScriptItem: # CItem
    m_OnPlayerPickup = 0x9C0 # CEntityIOOutput
    m_MoveTypeOverride = 0x9E8 # MoveType_t

class CScriptNavBlocker: # CFuncNavBlocker
    m_vExtent = 0x720 # Vector

class CScriptTriggerHurt: # CTriggerHurt
    m_vExtent = 0x958 # Vector

class CScriptTriggerMultiple: # CTriggerMultiple
    m_vExtent = 0x8E0 # Vector

class CScriptTriggerOnce: # CTriggerOnce
    m_vExtent = 0x8E0 # Vector

class CScriptTriggerPush: # CTriggerPush
    m_vExtent = 0x8D8 # Vector

class CScriptUniformRandomStream:
    m_hScriptScope = 0x8 # HSCRIPT
    m_nInitialSeed = 0x9C # int32_t

class CScriptedSequence: # CBaseEntity
    m_iszEntry = 0x4C0 # CUtlSymbolLarge
    m_iszPreIdle = 0x4C8 # CUtlSymbolLarge
    m_iszPlay = 0x4D0 # CUtlSymbolLarge
    m_iszPostIdle = 0x4D8 # CUtlSymbolLarge
    m_iszModifierToAddOnPlay = 0x4E0 # CUtlSymbolLarge
    m_iszNextScript = 0x4E8 # CUtlSymbolLarge
    m_iszEntity = 0x4F0 # CUtlSymbolLarge
    m_iszSyncGroup = 0x4F8 # CUtlSymbolLarge
    m_nMoveTo = 0x500 # ScriptedMoveTo_t
    m_bIsPlayingPreIdle = 0x504 # bool
    m_bIsPlayingEntry = 0x505 # bool
    m_bIsPlayingAction = 0x506 # bool
    m_bIsPlayingPostIdle = 0x507 # bool
    m_bLoopPreIdleSequence = 0x508 # bool
    m_bLoopActionSequence = 0x509 # bool
    m_bLoopPostIdleSequence = 0x50A # bool
    m_bSynchPostIdles = 0x50B # bool
    m_bIgnoreLookAt = 0x50C # bool
    m_bIgnoreGravity = 0x50D # bool
    m_bDisableNPCCollisions = 0x50E # bool
    m_bKeepAnimgraphLockedPost = 0x50F # bool
    m_bDontAddModifiers = 0x510 # bool
    m_flRadius = 0x514 # float
    m_flRepeat = 0x518 # float
    m_flPlayAnimFadeInTime = 0x51C # float
    m_flMoveInterpTime = 0x520 # float
    m_flAngRate = 0x524 # float
    m_nNotReadySequenceCount = 0x528 # int32_t
    m_startTime = 0x52C # GameTime_t
    m_bWaitForBeginSequence = 0x530 # bool
    m_saved_effects = 0x534 # int32_t
    m_savedFlags = 0x538 # int32_t
    m_savedCollisionGroup = 0x53C # int32_t
    m_interruptable = 0x540 # bool
    m_sequenceStarted = 0x541 # bool
    m_bPositionRelativeToOtherEntity = 0x542 # bool
    m_hTargetEnt = 0x544 # CHandle<CBaseEntity>
    m_hNextCine = 0x548 # CHandle<CScriptedSequence>
    m_bThinking = 0x54C # bool
    m_bInitiatedSelfDelete = 0x54D # bool
    m_bIsTeleportingDueToMoveTo = 0x54E # bool
    m_bAllowCustomInterruptConditions = 0x54F # bool
    m_hLastFoundEntity = 0x550 # CHandle<CBaseEntity>
    m_hForcedTarget = 0x554 # CHandle<CBaseAnimGraph>
    m_bDontCancelOtherSequences = 0x558 # bool
    m_bForceSynch = 0x559 # bool
    m_bPreventUpdateYawOnFinish = 0x55A # bool
    m_bEnsureOnNavmeshOnFinish = 0x55B # bool
    m_onDeathBehavior = 0x55C # ScriptedOnDeath_t
    m_ConflictResponse = 0x560 # ScriptedConflictResponse_t
    m_OnBeginSequence = 0x568 # CEntityIOOutput
    m_OnActionStartOrLoop = 0x590 # CEntityIOOutput
    m_OnEndSequence = 0x5B8 # CEntityIOOutput
    m_OnPostIdleEndSequence = 0x5E0 # CEntityIOOutput
    m_OnCancelSequence = 0x608 # CEntityIOOutput
    m_OnCancelFailedSequence = 0x630 # CEntityIOOutput
    m_OnScriptEvent = 0x658 # CEntityIOOutput[8]
    m_matOtherToMain = 0x7A0 # CTransform
    m_hInteractionMainEntity = 0x7C0 # CHandle<CBaseEntity>
    m_iPlayerDeathBehavior = 0x7C4 # int32_t

class CSensorGrenade: # CBaseCSGrenade

class CSensorGrenadeProjectile: # CBaseCSGrenadeProjectile
    m_fExpireTime = 0xA98 # GameTime_t
    m_fNextDetectPlayerSound = 0xA9C # GameTime_t
    m_hDisplayGrenade = 0xAA0 # CHandle<CBaseEntity>

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
    m_bDebris = 0xBD0 # bool
    m_hParentShard = 0xBD4 # uint32_t
    m_ShardDesc = 0xBD8 # shard_model_desc_t

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
    m_bIsAnimationEnabled = 0x370 # bool
    m_bUseParentRenderBounds = 0x371 # bool
    m_bDisableSolidCollisionsForHierarchy = 0x372 # bool
    m_bDirtyMotionType = 0x0 # bitfield:1
    m_bIsGeneratingLatchedParentSpaceState = 0x0 # bitfield:1
    m_materialGroup = 0x374 # CUtlStringToken
    m_nHitboxSet = 0x378 # uint8_t

class CSkillDamage:
    m_flDamage = 0x0 # CSkillFloat
    m_flPhysicsForceDamage = 0x10 # float

class CSkillFloat:
    m_pValue = 0x0 # float[4]

class CSkillInt:
    m_pValue = 0x0 # int32_t[4]

class CSkyCamera: # CBaseEntity
    m_skyboxData = 0x4C0 # sky3dparams_t
    m_skyboxSlotToken = 0x550 # CUtlStringToken
    m_bUseAngles = 0x554 # bool
    m_pNext = 0x558 # CSkyCamera*

class CSkyboxReference: # CBaseEntity
    m_worldGroupId = 0x4C0 # WorldGroupId_t
    m_hSkyCamera = 0x4C4 # CHandle<CSkyCamera>

class CSmokeGrenade: # CBaseCSGrenade

class CSmokeGrenadeProjectile: # CBaseCSGrenadeProjectile
    m_nSmokeEffectTickBegin = 0xAB0 # int32_t
    m_bDidSmokeEffect = 0xAB4 # bool
    m_nRandomSeed = 0xAB8 # int32_t
    m_vSmokeColor = 0xABC # Vector
    m_vSmokeDetonationPos = 0xAC8 # Vector
    m_VoxelFrameData = 0xAD8 # CUtlVector<uint8_t>
    m_flLastBounce = 0xAF0 # GameTime_t
    m_fllastSimulationTime = 0xAF4 # GameTime_t

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
    m_bDisabled = 0x4C0 # bool
    m_iszSoundAreaType = 0x4C8 # CUtlSymbolLarge
    m_vPos = 0x4D0 # Vector

class CSoundAreaEntityOrientedBox: # CSoundAreaEntityBase
    m_vMin = 0x4E0 # Vector
    m_vMax = 0x4EC # Vector

class CSoundAreaEntitySphere: # CSoundAreaEntityBase
    m_flRadius = 0x4E0 # float

class CSoundEnt: # CPointEntity
    m_iFreeSound = 0x4C0 # int32_t
    m_iActiveSound = 0x4C4 # int32_t
    m_cLastActiveSounds = 0x4C8 # int32_t
    m_SoundPool = 0x4CC # CSound[128]

class CSoundEnvelope:
    m_current = 0x0 # float
    m_target = 0x4 # float
    m_rate = 0x8 # float
    m_forceupdate = 0xC # bool

class CSoundEventAABBEntity: # CSoundEventEntity
    m_vMins = 0x568 # Vector
    m_vMaxs = 0x574 # Vector

class CSoundEventEntity: # CBaseEntity
    m_bStartOnSpawn = 0x4C0 # bool
    m_bToLocalPlayer = 0x4C1 # bool
    m_bStopOnNew = 0x4C2 # bool
    m_bSaveRestore = 0x4C3 # bool
    m_bSavedIsPlaying = 0x4C4 # bool
    m_flSavedElapsedTime = 0x4C8 # float
    m_iszSourceEntityName = 0x4D0 # CUtlSymbolLarge
    m_iszAttachmentName = 0x4D8 # CUtlSymbolLarge
    m_onGUIDChanged = 0x4E0 # CEntityOutputTemplate<uint64_t>
    m_onSoundFinished = 0x508 # CEntityIOOutput
    m_iszSoundName = 0x550 # CUtlSymbolLarge
    m_hSource = 0x560 # CEntityHandle

class CSoundEventEntityAlias_snd_event_point: # CSoundEventEntity

class CSoundEventOBBEntity: # CSoundEventEntity
    m_vMins = 0x568 # Vector
    m_vMaxs = 0x574 # Vector

class CSoundEventParameter: # CBaseEntity
    m_iszParamName = 0x4C8 # CUtlSymbolLarge
    m_flFloatValue = 0x4D0 # float

class CSoundEventPathCornerEntity: # CSoundEventEntity
    m_iszPathCorner = 0x568 # CUtlSymbolLarge
    m_iCountMax = 0x570 # int32_t
    m_flDistanceMax = 0x574 # float
    m_flDistMaxSqr = 0x578 # float
    m_flDotProductMax = 0x57C # float
    bPlaying = 0x580 # bool

class CSoundOpvarSetAABBEntity: # CSoundOpvarSetPointEntity
    m_vDistanceInnerMins = 0x668 # Vector
    m_vDistanceInnerMaxs = 0x674 # Vector
    m_vDistanceOuterMins = 0x680 # Vector
    m_vDistanceOuterMaxs = 0x68C # Vector
    m_nAABBDirection = 0x698 # int32_t
    m_vInnerMins = 0x69C # Vector
    m_vInnerMaxs = 0x6A8 # Vector
    m_vOuterMins = 0x6B4 # Vector
    m_vOuterMaxs = 0x6C0 # Vector

class CSoundOpvarSetAutoRoomEntity: # CSoundOpvarSetPointEntity
    m_traceResults = 0x668 # CUtlVector<SoundOpvarTraceResult_t>
    m_flSize = 0x698 # float
    m_flHeightTolerance = 0x69C # float
    m_flSizeSqr = 0x6A0 # float

class CSoundOpvarSetEntity: # CBaseEntity
    m_iszStackName = 0x4C8 # CUtlSymbolLarge
    m_iszOperatorName = 0x4D0 # CUtlSymbolLarge
    m_iszOpvarName = 0x4D8 # CUtlSymbolLarge
    m_nOpvarType = 0x4E0 # int32_t
    m_nOpvarIndex = 0x4E4 # int32_t
    m_flOpvarValue = 0x4E8 # float
    m_OpvarValueString = 0x4F0 # CUtlSymbolLarge
    m_bSetOnSpawn = 0x4F8 # bool

class CSoundOpvarSetOBBEntity: # CSoundOpvarSetAABBEntity

class CSoundOpvarSetOBBWindEntity: # CSoundOpvarSetPointBase
    m_vMins = 0x558 # Vector
    m_vMaxs = 0x564 # Vector
    m_vDistanceMins = 0x570 # Vector
    m_vDistanceMaxs = 0x57C # Vector
    m_flWindMin = 0x588 # float
    m_flWindMax = 0x58C # float
    m_flWindMapMin = 0x590 # float
    m_flWindMapMax = 0x594 # float

class CSoundOpvarSetPathCornerEntity: # CSoundOpvarSetPointEntity
    m_flDistMinSqr = 0x680 # float
    m_flDistMaxSqr = 0x684 # float
    m_iszPathCornerEntityName = 0x688 # CUtlSymbolLarge

class CSoundOpvarSetPointBase: # CBaseEntity
    m_bDisabled = 0x4C0 # bool
    m_hSource = 0x4C4 # CEntityHandle
    m_iszSourceEntityName = 0x4D0 # CUtlSymbolLarge
    m_vLastPosition = 0x528 # Vector
    m_iszStackName = 0x538 # CUtlSymbolLarge
    m_iszOperatorName = 0x540 # CUtlSymbolLarge
    m_iszOpvarName = 0x548 # CUtlSymbolLarge
    m_iOpvarIndex = 0x550 # int32_t
    m_bUseAutoCompare = 0x554 # bool

class CSoundOpvarSetPointEntity: # CSoundOpvarSetPointBase
    m_OnEnter = 0x558 # CEntityIOOutput
    m_OnExit = 0x580 # CEntityIOOutput
    m_bAutoDisable = 0x5A8 # bool
    m_flDistanceMin = 0x5EC # float
    m_flDistanceMax = 0x5F0 # float
    m_flDistanceMapMin = 0x5F4 # float
    m_flDistanceMapMax = 0x5F8 # float
    m_flOcclusionRadius = 0x5FC # float
    m_flOcclusionMin = 0x600 # float
    m_flOcclusionMax = 0x604 # float
    m_flValSetOnDisable = 0x608 # float
    m_bSetValueOnDisable = 0x60C # bool
    m_nSimulationMode = 0x610 # int32_t
    m_nVisibilitySamples = 0x614 # int32_t
    m_vDynamicProxyPoint = 0x618 # Vector
    m_flDynamicMaximumOcclusion = 0x624 # float
    m_hDynamicEntity = 0x628 # CEntityHandle
    m_iszDynamicEntityName = 0x630 # CUtlSymbolLarge
    m_flPathingDistanceNormFactor = 0x638 # float
    m_vPathingSourcePos = 0x63C # Vector
    m_vPathingListenerPos = 0x648 # Vector
    m_vPathingDirection = 0x654 # Vector
    m_nPathingSourceIndex = 0x660 # int32_t

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
    m_iszStackName = 0x4C0 # CUtlSymbolLarge

class CSplineConstraint: # CPhysConstraint

class CSpotlightEnd: # CBaseModelEntity
    m_flLightScale = 0x710 # float
    m_Radius = 0x714 # float
    m_vSpotlightDir = 0x718 # Vector
    m_vSpotlightOrg = 0x724 # Vector

class CSprite: # CBaseModelEntity
    m_hSpriteMaterial = 0x710 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_hAttachedToEntity = 0x718 # CHandle<CBaseEntity>
    m_nAttachment = 0x71C # AttachmentHandle_t
    m_flSpriteFramerate = 0x720 # float
    m_flFrame = 0x724 # float
    m_flDieTime = 0x728 # GameTime_t
    m_nBrightness = 0x738 # uint32_t
    m_flBrightnessDuration = 0x73C # float
    m_flSpriteScale = 0x740 # float
    m_flScaleDuration = 0x744 # float
    m_bWorldSpaceScale = 0x748 # bool
    m_flGlowProxySize = 0x74C # float
    m_flHDRColorScale = 0x750 # float
    m_flLastTime = 0x754 # GameTime_t
    m_flMaxFrame = 0x758 # float
    m_flStartScale = 0x75C # float
    m_flDestScale = 0x760 # float
    m_flScaleTimeStart = 0x764 # GameTime_t
    m_nStartBrightness = 0x768 # int32_t
    m_nDestBrightness = 0x76C # int32_t
    m_flBrightnessTimeStart = 0x770 # GameTime_t
    m_nSpriteWidth = 0x774 # int32_t
    m_nSpriteHeight = 0x778 # int32_t

class CSpriteAlias_env_glow: # CSprite

class CSpriteOriented: # CSprite

class CStopwatch: # CStopwatchBase
    m_interval = 0xC # float

class CStopwatchBase: # CSimpleSimTimer
    m_fIsRunning = 0x8 # bool

class CSun: # CBaseModelEntity
    m_vDirection = 0x710 # Vector
    m_clrOverlay = 0x71C # Color
    m_iszEffectName = 0x720 # CUtlSymbolLarge
    m_iszSSEffectName = 0x728 # CUtlSymbolLarge
    m_bOn = 0x730 # bool
    m_bmaxColor = 0x731 # bool
    m_flSize = 0x734 # float
    m_flRotation = 0x738 # float
    m_flHazeScale = 0x73C # float
    m_flAlphaHaze = 0x740 # float
    m_flAlphaHdr = 0x744 # float
    m_flAlphaScale = 0x748 # float
    m_flHDRColorScale = 0x74C # float
    m_flFarZScale = 0x750 # float

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

class CTakeDamageInfoAPI:

class CTakeDamageResult:
    m_nHealthLost = 0x0 # int32_t
    m_nDamageTaken = 0x4 # int32_t

class CTakeDamageSummaryScopeGuard:
    m_vecSummaries = 0x8 # CUtlVector<SummaryTakeDamageInfo_t*>

class CTankTargetChange: # CPointEntity
    m_newTarget = 0x4C0 # CVariantBase<CVariantDefaultAllocator>
    m_newTargetName = 0x4D0 # CUtlSymbolLarge

class CTankTrainAI: # CPointEntity
    m_hTrain = 0x4C0 # CHandle<CFuncTrackTrain>
    m_hTargetEntity = 0x4C4 # CHandle<CBaseEntity>
    m_soundPlaying = 0x4C8 # int32_t
    m_startSoundName = 0x4E0 # CUtlSymbolLarge
    m_engineSoundName = 0x4E8 # CUtlSymbolLarge
    m_movementSoundName = 0x4F0 # CUtlSymbolLarge
    m_targetEntityName = 0x4F8 # CUtlSymbolLarge

class CTeam: # CBaseEntity
    m_aPlayerControllers = 0x4C0 # CNetworkUtlVectorBase<CHandle<CBasePlayerController>>
    m_aPlayers = 0x4D8 # CNetworkUtlVectorBase<CHandle<CBasePlayerPawn>>
    m_iScore = 0x4F0 # int32_t
    m_szTeamname = 0x4F4 # char[129]

class CTeamplayRules: # CMultiplayRules

class CTestEffect: # CBaseEntity
    m_iLoop = 0x4C0 # int32_t
    m_iBeam = 0x4C4 # int32_t
    m_pBeam = 0x4C8 # CBeam*[24]
    m_flBeamTime = 0x588 # GameTime_t[24]
    m_flStartTime = 0x5E8 # GameTime_t

class CTextureBasedAnimatable: # CBaseModelEntity
    m_bLoop = 0x710 # bool
    m_flFPS = 0x714 # float
    m_hPositionKeys = 0x718 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hRotationKeys = 0x720 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_vAnimationBoundsMin = 0x728 # Vector
    m_vAnimationBoundsMax = 0x734 # Vector
    m_flStartTime = 0x740 # float
    m_flStartFrame = 0x744 # float

class CTimeline: # IntervalTimer
    m_flValues = 0x10 # float[64]
    m_nValueCounts = 0x110 # int32_t[64]
    m_nBucketCount = 0x210 # int32_t
    m_flInterval = 0x214 # float
    m_flFinalValue = 0x218 # float
    m_nCompressionType = 0x21C # TimelineCompression_t
    m_bStopped = 0x220 # bool

class CTimerEntity: # CLogicalEntity
    m_OnTimer = 0x4C0 # CEntityIOOutput
    m_OnTimerHigh = 0x4E8 # CEntityIOOutput
    m_OnTimerLow = 0x510 # CEntityIOOutput
    m_iDisabled = 0x538 # int32_t
    m_flInitialDelay = 0x53C # float
    m_flRefireTime = 0x540 # float
    m_bUpDownState = 0x544 # bool
    m_iUseRandomTime = 0x548 # int32_t
    m_bPauseAfterFiring = 0x54C # bool
    m_flLowerRandomBound = 0x550 # float
    m_flUpperRandomBound = 0x554 # float
    m_flRemainingTime = 0x558 # float
    m_bPaused = 0x55C # bool

class CTonemapController2: # CBaseEntity
    m_flAutoExposureMin = 0x4C0 # float
    m_flAutoExposureMax = 0x4C4 # float
    m_flTonemapPercentTarget = 0x4C8 # float
    m_flTonemapPercentBrightPixels = 0x4CC # float
    m_flTonemapMinAvgLum = 0x4D0 # float
    m_flExposureAdaptationSpeedUp = 0x4D4 # float
    m_flExposureAdaptationSpeedDown = 0x4D8 # float
    m_flTonemapEVSmoothingRange = 0x4DC # float

class CTonemapController2Alias_env_tonemap_controller2: # CTonemapController2

class CTonemapTrigger: # CBaseTrigger
    m_tonemapControllerName = 0x8B8 # CUtlSymbolLarge
    m_hTonemapController = 0x8C0 # CEntityHandle

class CTouchExpansionComponent: # CEntityComponent

class CTriggerActiveWeaponDetect: # CBaseTrigger
    m_OnTouchedActiveWeapon = 0x8B8 # CEntityIOOutput
    m_iszWeaponClassName = 0x8E0 # CUtlSymbolLarge

class CTriggerBombReset: # CBaseTrigger

class CTriggerBrush: # CBaseModelEntity
    m_OnStartTouch = 0x710 # CEntityIOOutput
    m_OnEndTouch = 0x738 # CEntityIOOutput
    m_OnUse = 0x760 # CEntityIOOutput
    m_iInputFilter = 0x788 # int32_t
    m_iDontMessageParent = 0x78C # int32_t

class CTriggerBuoyancy: # CBaseTrigger
    m_BuoyancyHelper = 0x8B8 # CBuoyancyHelper
    m_flFluidDensity = 0x8D8 # float

class CTriggerCallback: # CBaseTrigger

class CTriggerDetectBulletFire: # CBaseTrigger
    m_bPlayerFireOnly = 0x8B8 # bool
    m_OnDetectedBulletFire = 0x8C0 # CEntityIOOutput

class CTriggerDetectExplosion: # CBaseTrigger
    m_OnDetectedExplosion = 0x8F0 # CEntityIOOutput

class CTriggerFan: # CBaseTrigger
    m_vFanOrigin = 0x8B8 # Vector
    m_vFanEnd = 0x8C4 # Vector
    m_vNoise = 0x8D0 # Vector
    m_flForce = 0x8DC # float
    m_flRopeForceScale = 0x8E0 # float
    m_flPlayerForce = 0x8E4 # float
    m_flRampTime = 0x8E8 # float
    m_bFalloff = 0x8EC # bool
    m_bPushPlayer = 0x8ED # bool
    m_bRampDown = 0x8EE # bool
    m_bAddNoise = 0x8EF # bool
    m_RampTimer = 0x8F0 # CountdownTimer

class CTriggerGameEvent: # CBaseTrigger
    m_strStartTouchEventName = 0x8B8 # CUtlString
    m_strEndTouchEventName = 0x8C0 # CUtlString
    m_strTriggerID = 0x8C8 # CUtlString

class CTriggerGravity: # CBaseTrigger

class CTriggerHostageReset: # CBaseTrigger

class CTriggerHurt: # CBaseTrigger
    m_flOriginalDamage = 0x8B8 # float
    m_flDamage = 0x8BC # float
    m_flDamageCap = 0x8C0 # float
    m_flLastDmgTime = 0x8C4 # GameTime_t
    m_flForgivenessDelay = 0x8C8 # float
    m_bitsDamageInflict = 0x8CC # int32_t
    m_damageModel = 0x8D0 # int32_t
    m_bNoDmgForce = 0x8D4 # bool
    m_vDamageForce = 0x8D8 # Vector
    m_thinkAlways = 0x8E4 # bool
    m_hurtThinkPeriod = 0x8E8 # float
    m_OnHurt = 0x8F0 # CEntityIOOutput
    m_OnHurtPlayer = 0x918 # CEntityIOOutput
    m_hurtEntities = 0x940 # CUtlVector<CHandle<CBaseEntity>>

class CTriggerHurtGhost: # CTriggerHurt

class CTriggerImpact: # CTriggerMultiple
    m_flMagnitude = 0x8E0 # float
    m_flNoise = 0x8E4 # float
    m_flViewkick = 0x8E8 # float
    m_pOutputForce = 0x8F0 # CEntityOutputTemplate<Vector>

class CTriggerLerpObject: # CBaseTrigger
    m_iszLerpTarget = 0x8B8 # CUtlSymbolLarge
    m_hLerpTarget = 0x8C0 # CHandle<CBaseEntity>
    m_iszLerpTargetAttachment = 0x8C8 # CUtlSymbolLarge
    m_hLerpTargetAttachment = 0x8D0 # AttachmentHandle_t
    m_flLerpDuration = 0x8D4 # float
    m_bLerpRestoreMoveType = 0x8D8 # bool
    m_bSingleLerpObject = 0x8D9 # bool
    m_vecLerpingObjects = 0x8E0 # CUtlVector<lerpdata_t>
    m_iszLerpEffect = 0x8F8 # CUtlSymbolLarge
    m_iszLerpSound = 0x900 # CUtlSymbolLarge
    m_bAttachTouchingObject = 0x908 # bool
    m_hEntityToWaitForDisconnect = 0x90C # CHandle<CBaseEntity>
    m_OnLerpStarted = 0x910 # CEntityIOOutput
    m_OnLerpFinished = 0x938 # CEntityIOOutput

class CTriggerLook: # CTriggerOnce
    m_hLookTarget = 0x8E0 # CHandle<CBaseEntity>
    m_flFieldOfView = 0x8E4 # float
    m_flLookTime = 0x8E8 # float
    m_flLookTimeTotal = 0x8EC # float
    m_flLookTimeLast = 0x8F0 # GameTime_t
    m_flTimeoutDuration = 0x8F4 # float
    m_bTimeoutFired = 0x8F8 # bool
    m_bIsLooking = 0x8F9 # bool
    m_b2DFOV = 0x8FA # bool
    m_bUseVelocity = 0x8FB # bool
    m_hActivator = 0x8FC # CHandle<CBaseEntity>
    m_bTestOcclusion = 0x900 # bool
    m_OnTimeout = 0x908 # CEntityIOOutput
    m_OnStartLook = 0x930 # CEntityIOOutput
    m_OnEndLook = 0x958 # CEntityIOOutput

class CTriggerMultiple: # CBaseTrigger
    m_OnTrigger = 0x8B8 # CEntityIOOutput

class CTriggerOnce: # CTriggerMultiple

class CTriggerPhysics: # CBaseTrigger
    m_gravityScale = 0x8C8 # float
    m_linearLimit = 0x8CC # float
    m_linearDamping = 0x8D0 # float
    m_angularLimit = 0x8D4 # float
    m_angularDamping = 0x8D8 # float
    m_linearForce = 0x8DC # float
    m_flFrequency = 0x8E0 # float
    m_flDampingRatio = 0x8E4 # float
    m_vecLinearForcePointAt = 0x8E8 # Vector
    m_bCollapseToForcePoint = 0x8F4 # bool
    m_vecLinearForcePointAtWorld = 0x8F8 # Vector
    m_vecLinearForceDirection = 0x904 # Vector
    m_bConvertToDebrisWhenPossible = 0x910 # bool

class CTriggerProximity: # CBaseTrigger
    m_hMeasureTarget = 0x8B8 # CHandle<CBaseEntity>
    m_iszMeasureTarget = 0x8C0 # CUtlSymbolLarge
    m_fRadius = 0x8C8 # float
    m_nTouchers = 0x8CC # int32_t
    m_NearestEntityDistance = 0x8D0 # CEntityOutputTemplate<float>

class CTriggerPush: # CBaseTrigger
    m_angPushEntitySpace = 0x8B8 # QAngle
    m_vecPushDirEntitySpace = 0x8C4 # Vector
    m_bTriggerOnStartTouch = 0x8D0 # bool

class CTriggerRemove: # CBaseTrigger
    m_OnRemove = 0x8B8 # CEntityIOOutput

class CTriggerSave: # CBaseTrigger
    m_bForceNewLevelUnit = 0x8B8 # bool
    m_fDangerousTimer = 0x8BC # float
    m_minHitPoints = 0x8C0 # int32_t

class CTriggerSndSosOpvar: # CBaseTrigger
    m_hTouchingPlayers = 0x8B8 # CUtlVector<CHandle<CBaseEntity>>
    m_flPosition = 0x8D0 # Vector
    m_flCenterSize = 0x8DC # float
    m_flMinVal = 0x8E0 # float
    m_flMaxVal = 0x8E4 # float
    m_flWait = 0x8E8 # float
    m_opvarName = 0x8F0 # CUtlSymbolLarge
    m_stackName = 0x8F8 # CUtlSymbolLarge
    m_operatorName = 0x900 # CUtlSymbolLarge
    m_bVolIs2D = 0x908 # bool
    m_opvarNameChar = 0x909 # char[256]
    m_stackNameChar = 0xA09 # char[256]
    m_operatorNameChar = 0xB09 # char[256]
    m_VecNormPos = 0xC0C # Vector
    m_flNormCenterSize = 0xC18 # float

class CTriggerSoundscape: # CBaseTrigger
    m_hSoundscape = 0x8B8 # CHandle<CEnvSoundscapeTriggerable>
    m_SoundscapeName = 0x8C0 # CUtlSymbolLarge
    m_spectators = 0x8C8 # CUtlVector<CHandle<CBasePlayerPawn>>

class CTriggerTeleport: # CBaseTrigger
    m_iLandmark = 0x8B8 # CUtlSymbolLarge
    m_bUseLandmarkAngles = 0x8C0 # bool
    m_bMirrorPlayer = 0x8C1 # bool

class CTriggerToggleSave: # CBaseTrigger
    m_bDisabled = 0x8B8 # bool

class CTriggerTripWire: # CBaseTrigger

class CTriggerVolume: # CBaseModelEntity
    m_iFilterName = 0x710 # CUtlSymbolLarge
    m_hFilter = 0x718 # CHandle<CBaseFilter>

class CTripWireFire: # CBaseCSGrenade

class CTripWireFireProjectile: # CBaseGrenade

class CVoteController: # CBaseEntity
    m_iActiveIssueIndex = 0x4C0 # int32_t
    m_iOnlyTeamToVote = 0x4C4 # int32_t
    m_nVoteOptionCount = 0x4C8 # int32_t[5]
    m_nPotentialVotes = 0x4DC # int32_t
    m_bIsYesNoVote = 0x4E0 # bool
    m_acceptingVotesTimer = 0x4E8 # CountdownTimer
    m_executeCommandTimer = 0x500 # CountdownTimer
    m_resetVoteTimer = 0x518 # CountdownTimer
    m_nVotesCast = 0x530 # int32_t[64]
    m_playerHoldingVote = 0x630 # CPlayerSlot
    m_playerOverrideForVote = 0x634 # CPlayerSlot
    m_nHighestCountIndex = 0x638 # int32_t
    m_potentialIssues = 0x640 # CUtlVector<CBaseIssue*>
    m_VoteOptions = 0x658 # CUtlVector<char*>

class CWaterBullet: # CBaseAnimGraph

class CWeaponAWP: # CCSWeaponBaseGun

class CWeaponAug: # CCSWeaponBaseGun

class CWeaponBaseItem: # CCSWeaponBase
    m_SequenceCompleteTimer = 0xE90 # CountdownTimer
    m_bRedraw = 0xEA8 # bool

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
    m_flBulletDamageAbsorbed = 0xEB0 # float
    m_flLastBulletHitSoundTime = 0xEB4 # GameTime_t
    m_flDisplayHealth = 0xEB8 # float

class CWeaponTaser: # CCSWeaponBaseGun
    m_fFireTime = 0xEB0 # GameTime_t

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
    m_iDamageType = 0x518 # int32_t

class FilterHealth: # CBaseFilter
    m_bAdrenalineActive = 0x518 # bool
    m_iHealthMin = 0x51C # int32_t
    m_iHealthMax = 0x520 # int32_t

class FilterTeam: # CBaseFilter
    m_iFilterTeam = 0x518 # int32_t

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

class IntervalTimer:
    m_timestamp = 0x8 # GameTime_t
    m_nWorldGroupId = 0xC # WorldGroupId_t

class ModelConfigHandle_t:
    m_Value = 0x0 # uint32_t

class NavGravity_t:
    m_vGravity = 0x0 # Vector
    m_bDefault = 0xC # bool

class ParticleIndex_t:
    m_Value = 0x0 # int32_t

class PhysicsRagdollPose_t:
    __m_pChainEntity = 0x8 # CNetworkVarChainer
    m_Transforms = 0x30 # CNetworkUtlVectorBase<CTransform>
    m_hOwner = 0x48 # CHandle<CBaseEntity>

class PulseScriptedSequenceData_t:
    m_nActorID = 0x0 # int32_t
    m_szPreIdleSequence = 0x8 # CUtlString
    m_szEntrySequence = 0x10 # CUtlString
    m_szSequence = 0x18 # CUtlString
    m_szExitSequence = 0x20 # CUtlString
    m_bLoopPreIdleSequence = 0x28 # bool
    m_bLoopActionSequence = 0x29 # bool
    m_bLoopPostIdleSequence = 0x2A # bool
    m_bIgnoreLookAt = 0x2B # bool

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

class SequenceHistory_t:
    m_hSequence = 0x0 # HSequence
    m_flSeqStartTime = 0x4 # GameTime_t
    m_flSeqFixedCycle = 0x8 # float
    m_nSeqLoopMode = 0xC # AnimLoopMode_t
    m_flPlaybackRate = 0x10 # float
    m_flCyclesPerSecond = 0x14 # float

class ServerAuthoritativeWeaponSlot_t:
    unClass = 0x28 # uint16_t
    unSlot = 0x2A # uint16_t
    unItemDefIdx = 0x2C # uint16_t

class SimpleConstraintSoundProfile:
    eKeypoints = 0x8 # SimpleConstraintSoundProfile::SimpleConstraintsSoundProfileKeypoints_t
    m_keyPoints = 0xC # float[2]
    m_reversalSoundThresholds = 0x14 # float[3]

class SoundOpvarTraceResult_t:
    vPos = 0x0 # Vector
    bDidHit = 0xC # bool
    flDistSqrToCenter = 0x10 # float

class SpawnPoint: # CServerOnlyPointEntity
    m_iPriority = 0x4C0 # int32_t
    m_bEnabled = 0x4C4 # bool
    m_nType = 0x4C8 # int32_t

class SpawnPointCoopEnemy: # SpawnPoint
    m_szWeaponsToGive = 0x4D0 # CUtlSymbolLarge
    m_szPlayerModelToUse = 0x4D8 # CUtlSymbolLarge
    m_nArmorToSpawnWith = 0x4E0 # int32_t
    m_nDefaultBehavior = 0x4E4 # SpawnPointCoopEnemy::BotDefaultBehavior_t
    m_nBotDifficulty = 0x4E8 # int32_t
    m_bIsAgressive = 0x4EC # bool
    m_bStartAsleep = 0x4ED # bool
    m_flHideRadius = 0x4F0 # float
    m_szBehaviorTreeFile = 0x500 # CUtlSymbolLarge

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

class sndopvarlatchdata_t:
    m_iszStack = 0x8 # CUtlSymbolLarge
    m_iszOperator = 0x10 # CUtlSymbolLarge
    m_iszOpvar = 0x18 # CUtlSymbolLarge
    m_flVal = 0x20 # float
    m_vPos = 0x24 # Vector

class thinkfunc_t:
    m_hFn = 0x8 # HSCRIPT
    m_nContext = 0x10 # CUtlStringToken
    m_nNextThinkTick = 0x14 # GameTick_t
    m_nLastThinkTick = 0x18 # GameTick_t
