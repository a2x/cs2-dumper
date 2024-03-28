'''
Generated using https://github.com/a2x/cs2-dumper
Sat, 16 Mar 2024 22:03:49 +0000
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
    m_iSoundType = 0x7A8 # int32_t
    m_iSoundContext = 0x7AC # int32_t
    m_iVolume = 0x7B0 # int32_t
    m_iSoundIndex = 0x7B4 # int32_t
    m_flDuration = 0x7B8 # float
    m_iszProxyEntityName = 0x7C0 # CUtlSymbolLarge

class CAI_ChangeHintGroup: # CBaseEntity
    m_iSearchType = 0x7A8 # int32_t
    m_strSearchName = 0x7B0 # CUtlSymbolLarge
    m_strNewHintGroup = 0x7B8 # CUtlSymbolLarge
    m_flRadius = 0x7C0 # float

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
    m_radius = 0x7A8 # float
    m_flMaxRadius = 0x7AC # float
    m_iSoundLevel = 0x7B0 # soundlevel_t
    m_dpv = 0x7B4 # dynpitchvol_t
    m_fActive = 0x818 # bool
    m_fLooping = 0x819 # bool
    m_iszSound = 0x820 # CUtlSymbolLarge
    m_sSourceEntName = 0x828 # CUtlSymbolLarge
    m_hSoundSource = 0x830 # CHandle<CBaseEntity>
    m_nSoundSourceEntIndex = 0x834 # CEntityIndex

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
    m_bEnabled = 0x9F8 # bool
    m_nColorMode = 0x9FC # int32_t
    m_Color = 0xA00 # Color
    m_flColorTemperature = 0xA04 # float
    m_flBrightness = 0xA08 # float
    m_flBrightnessScale = 0xA0C # float
    m_nDirectLight = 0xA10 # int32_t
    m_nBakedShadowIndex = 0xA14 # int32_t
    m_nLuminaireShape = 0xA18 # int32_t
    m_flLuminaireSize = 0xA1C # float
    m_flLuminaireAnisotropy = 0xA20 # float
    m_LightStyleString = 0xA28 # CUtlString
    m_flLightStyleStartTime = 0xA30 # GameTime_t
    m_QueuedLightStyleStrings = 0xA38 # CNetworkUtlVectorBase<CUtlString>
    m_LightStyleEvents = 0xA50 # CNetworkUtlVectorBase<CUtlString>
    m_LightStyleTargets = 0xA68 # CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    m_StyleEvent = 0xA80 # CEntityIOOutput[4]
    m_hLightCookie = 0xB40 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_flShape = 0xB48 # float
    m_flSoftX = 0xB4C # float
    m_flSoftY = 0xB50 # float
    m_flSkirt = 0xB54 # float
    m_flSkirtNear = 0xB58 # float
    m_vSizeParams = 0xB5C # Vector
    m_flRange = 0xB68 # float
    m_vShear = 0xB6C # Vector
    m_nBakeSpecularToCubemaps = 0xB78 # int32_t
    m_vBakeSpecularToCubemapsSize = 0xB7C # Vector
    m_nCastShadows = 0xB88 # int32_t
    m_nShadowMapSize = 0xB8C # int32_t
    m_nShadowPriority = 0xB90 # int32_t
    m_bContactShadow = 0xB94 # bool
    m_nBounceLight = 0xB98 # int32_t
    m_flBounceScale = 0xB9C # float
    m_flMinRoughness = 0xBA0 # float
    m_vAlternateColor = 0xBA4 # Vector
    m_fAlternateColorBrightness = 0xBB0 # float
    m_nFog = 0xBB4 # int32_t
    m_flFogStrength = 0xBB8 # float
    m_nFogShadows = 0xBBC # int32_t
    m_flFogScale = 0xBC0 # float
    m_flFadeSizeStart = 0xBC4 # float
    m_flFadeSizeEnd = 0xBC8 # float
    m_flShadowFadeSizeStart = 0xBCC # float
    m_flShadowFadeSizeEnd = 0xBD0 # float
    m_bPrecomputedFieldsValid = 0xBD4 # bool
    m_vPrecomputedBoundsMins = 0xBD8 # Vector
    m_vPrecomputedBoundsMaxs = 0xBE4 # Vector
    m_vPrecomputedOBBOrigin = 0xBF0 # Vector
    m_vPrecomputedOBBAngles = 0xBFC # QAngle
    m_vPrecomputedOBBExtent = 0xC08 # Vector
    m_bPvsModifyEntity = 0xC14 # bool

class CBaseAnimGraph: # CBaseModelEntity
    m_bInitiallyPopulateInterpHistory = 0xA70 # bool
    m_pChoreoServices = 0xA78 # IChoreoServices*
    m_bAnimGraphUpdateEnabled = 0xA80 # bool
    m_flMaxSlopeDistance = 0xA84 # float
    m_vLastSlopeCheckPos = 0xA88 # Vector
    m_bAnimationUpdateScheduled = 0xA94 # bool
    m_vecForce = 0xA98 # Vector
    m_nForceBone = 0xAA4 # int32_t
    m_pRagdollPose = 0xAB8 # PhysicsRagdollPose_t*
    m_bClientRagdoll = 0xAC0 # bool

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
    m_angMoveEntitySpace = 0xA78 # QAngle
    m_fStayPushed = 0xA84 # bool
    m_fRotating = 0xA85 # bool
    m_ls = 0xA88 # locksound_t
    m_sUseSound = 0xAA8 # CUtlSymbolLarge
    m_sLockedSound = 0xAB0 # CUtlSymbolLarge
    m_sUnlockedSound = 0xAB8 # CUtlSymbolLarge
    m_bLocked = 0xAC0 # bool
    m_bDisabled = 0xAC1 # bool
    m_flUseLockedTime = 0xAC4 # GameTime_t
    m_bSolidBsp = 0xAC8 # bool
    m_OnDamaged = 0xAD0 # CEntityIOOutput
    m_OnPressed = 0xAF8 # CEntityIOOutput
    m_OnUseLocked = 0xB20 # CEntityIOOutput
    m_OnIn = 0xB48 # CEntityIOOutput
    m_OnOut = 0xB70 # CEntityIOOutput
    m_nState = 0xB98 # int32_t
    m_hConstraint = 0xB9C # CEntityHandle
    m_hConstraintParent = 0xBA0 # CEntityHandle
    m_bForceNpcExclude = 0xBA4 # bool
    m_sGlowEntity = 0xBA8 # CUtlSymbolLarge
    m_glowEntity = 0xBB0 # CHandle<CBaseModelEntity>
    m_usable = 0xBB4 # bool
    m_szDisplayText = 0xBB8 # CUtlSymbolLarge

class CBaseCSGrenade: # CCSWeaponBase
    m_bRedraw = 0x1198 # bool
    m_bIsHeldByPlayer = 0x1199 # bool
    m_bPinPulled = 0x119A # bool
    m_bJumpThrow = 0x119B # bool
    m_bThrowAnimating = 0x119C # bool
    m_fThrowTime = 0x11A0 # GameTime_t
    m_flThrowStrength = 0x11A4 # float
    m_flThrowStrengthApproach = 0x11A8 # float
    m_fDropTime = 0x11AC # GameTime_t
    m_bJustPulledPin = 0x11B0 # bool
    m_nNextHoldTick = 0x11B4 # GameTick_t
    m_flNextHoldFrac = 0x11B8 # float
    m_hSwitchToWeaponAfterThrow = 0x11BC # CHandle<CCSWeaponBase>

class CBaseCSGrenadeProjectile: # CBaseGrenade
    m_vInitialPosition = 0xD24 # Vector
    m_vInitialVelocity = 0xD30 # Vector
    m_nBounces = 0xD3C # int32_t
    m_nExplodeEffectIndex = 0xD40 # CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_nExplodeEffectTickBegin = 0xD48 # int32_t
    m_vecExplodeEffectOrigin = 0xD4C # Vector
    m_flSpawnTime = 0xD58 # GameTime_t
    m_unOGSExtraFlags = 0xD5C # uint8_t
    m_bDetonationRecorded = 0xD5D # bool
    m_flDetonateTime = 0xD60 # GameTime_t
    m_nItemIndex = 0xD64 # uint16_t
    m_vecOriginalSpawnLocation = 0xD68 # Vector
    m_flLastBounceSoundTime = 0xD74 # GameTime_t
    m_vecGrenadeSpin = 0xD78 # RotationVector
    m_vecLastHitSurfaceNormal = 0xD84 # Vector
    m_nTicksAtZeroVelocity = 0xD90 # int32_t
    m_bHasEverHitPlayer = 0xD94 # bool
    m_bClearFromPlayers = 0xD95 # bool

class CBaseClientUIEntity: # CBaseModelEntity
    m_bEnabled = 0x9F8 # bool
    m_DialogXMLName = 0xA00 # CUtlSymbolLarge
    m_PanelClassName = 0xA08 # CUtlSymbolLarge
    m_PanelID = 0xA10 # CUtlSymbolLarge
    m_CustomOutput0 = 0xA18 # CEntityIOOutput
    m_CustomOutput1 = 0xA40 # CEntityIOOutput
    m_CustomOutput2 = 0xA68 # CEntityIOOutput
    m_CustomOutput3 = 0xA90 # CEntityIOOutput
    m_CustomOutput4 = 0xAB8 # CEntityIOOutput
    m_CustomOutput5 = 0xAE0 # CEntityIOOutput
    m_CustomOutput6 = 0xB08 # CEntityIOOutput
    m_CustomOutput7 = 0xB30 # CEntityIOOutput
    m_CustomOutput8 = 0xB58 # CEntityIOOutput
    m_CustomOutput9 = 0xB80 # CEntityIOOutput

class CBaseCombatCharacter: # CBaseFlex
    m_bForceServerRagdoll = 0xC80 # bool
    m_hMyWearables = 0xC88 # CNetworkUtlVectorBase<CHandle<CEconWearable>>
    m_flFieldOfView = 0xCA0 # float
    m_impactEnergyScale = 0xCA4 # float
    m_LastHitGroup = 0xCA8 # HitGroup_t
    m_bApplyStressDamage = 0xCAC # bool
    m_bloodColor = 0xCB0 # int32_t
    m_iDamageCount = 0xCF8 # int32_t
    m_pVecRelationships = 0xD00 # CUtlVector<RelationshipOverride_t>*
    m_strRelationships = 0xD08 # CUtlSymbolLarge
    m_eHull = 0xD10 # Hull_t
    m_nNavHullIdx = 0xD14 # uint32_t

class CBaseDMStart: # CPointEntity
    m_Master = 0x7A8 # CUtlSymbolLarge

class CBaseDoor: # CBaseToggle
    m_angMoveEntitySpace = 0xA84 # QAngle
    m_vecMoveDirParentSpace = 0xA90 # Vector
    m_ls = 0xAA0 # locksound_t
    m_bForceClosed = 0xAC0 # bool
    m_bDoorGroup = 0xAC1 # bool
    m_bLocked = 0xAC2 # bool
    m_bIgnoreDebris = 0xAC3 # bool
    m_eSpawnPosition = 0xAC4 # FuncDoorSpawnPos_t
    m_flBlockDamage = 0xAC8 # float
    m_NoiseMoving = 0xAD0 # CUtlSymbolLarge
    m_NoiseArrived = 0xAD8 # CUtlSymbolLarge
    m_NoiseMovingClosed = 0xAE0 # CUtlSymbolLarge
    m_NoiseArrivedClosed = 0xAE8 # CUtlSymbolLarge
    m_ChainTarget = 0xAF0 # CUtlSymbolLarge
    m_OnBlockedClosing = 0xAF8 # CEntityIOOutput
    m_OnBlockedOpening = 0xB20 # CEntityIOOutput
    m_OnUnblockedClosing = 0xB48 # CEntityIOOutput
    m_OnUnblockedOpening = 0xB70 # CEntityIOOutput
    m_OnFullyClosed = 0xB98 # CEntityIOOutput
    m_OnFullyOpen = 0xBC0 # CEntityIOOutput
    m_OnClose = 0xBE8 # CEntityIOOutput
    m_OnOpen = 0xC10 # CEntityIOOutput
    m_OnLockedUse = 0xC38 # CEntityIOOutput
    m_bLoopMoveSound = 0xC60 # bool
    m_bCreateNavObstacle = 0xC78 # bool
    m_isChaining = 0xC79 # bool
    m_bIsUsable = 0xC7A # bool

class CBaseEntity: # CEntityInstance
    m_CBodyComponent = 0x38 # CBodyComponent*
    m_NetworkTransmitComponent = 0x40 # CNetworkTransmitComponent
    m_aThinkFunctions = 0x4F0 # CUtlVector<thinkfunc_t>
    m_iCurrentThinkContext = 0x508 # int32_t
    m_nLastThinkTick = 0x50C # GameTick_t
    m_nDisableContextThinkStartTick = 0x510 # GameTick_t
    m_isSteadyState = 0x520 # CBitVec<64>
    m_lastNetworkChange = 0x528 # float
    m_ResponseContexts = 0x540 # CUtlVector<ResponseContext_t>
    m_iszResponseContext = 0x558 # CUtlSymbolLarge
    m_iHealth = 0x5A0 # int32_t
    m_iMaxHealth = 0x5A4 # int32_t
    m_lifeState = 0x5A8 # uint8_t
    m_flDamageAccumulator = 0x5AC # float
    m_bTakesDamage = 0x5B0 # bool
    m_nTakeDamageFlags = 0x5B4 # TakeDamageFlags_t
    m_bIsPlatform = 0x5B8 # bool
    m_MoveCollide = 0x5BA # MoveCollide_t
    m_MoveType = 0x5BB # MoveType_t
    m_nActualMoveType = 0x5BC # MoveType_t
    m_nWaterTouch = 0x5BD # uint8_t
    m_nSlimeTouch = 0x5BE # uint8_t
    m_bRestoreInHierarchy = 0x5BF # bool
    m_target = 0x5C0 # CUtlSymbolLarge
    m_hDamageFilter = 0x5C8 # CHandle<CBaseFilter>
    m_iszDamageFilterName = 0x5D0 # CUtlSymbolLarge
    m_flMoveDoneTime = 0x5D8 # float
    m_nSubclassID = 0x5DC # CUtlStringToken
    m_flAnimTime = 0x5E8 # float
    m_flSimulationTime = 0x5EC # float
    m_flCreateTime = 0x5F0 # GameTime_t
    m_bClientSideRagdoll = 0x5F4 # bool
    m_ubInterpolationFrame = 0x5F5 # uint8_t
    m_vPrevVPhysicsUpdatePos = 0x5F8 # Vector
    m_iTeamNum = 0x604 # uint8_t
    m_iGlobalname = 0x608 # CUtlSymbolLarge
    m_iSentToClients = 0x610 # int32_t
    m_flSpeed = 0x614 # float
    m_sUniqueHammerID = 0x618 # CUtlString
    m_spawnflags = 0x620 # uint32_t
    m_nNextThinkTick = 0x624 # GameTick_t
    m_nSimulationTick = 0x628 # int32_t
    m_OnKilled = 0x630 # CEntityIOOutput
    m_fFlags = 0x658 # uint32_t
    m_vecAbsVelocity = 0x65C # Vector
    m_vecVelocity = 0x668 # CNetworkVelocityVector
    m_vecBaseVelocity = 0x698 # Vector
    m_nPushEnumCount = 0x6A4 # int32_t
    m_pCollision = 0x6A8 # CCollisionProperty*
    m_hEffectEntity = 0x6B0 # CHandle<CBaseEntity>
    m_hOwnerEntity = 0x6B4 # CHandle<CBaseEntity>
    m_fEffects = 0x6B8 # uint32_t
    m_hGroundEntity = 0x6BC # CHandle<CBaseEntity>
    m_flFriction = 0x6C0 # float
    m_flElasticity = 0x6C4 # float
    m_flGravityScale = 0x6C8 # float
    m_flTimeScale = 0x6CC # float
    m_flWaterLevel = 0x6D0 # float
    m_bAnimatedEveryTick = 0x6D4 # bool
    m_bDisableLowViolence = 0x6D5 # bool
    m_nWaterType = 0x6D6 # uint8_t
    m_iEFlags = 0x6D8 # int32_t
    m_OnUser1 = 0x6E0 # CEntityIOOutput
    m_OnUser2 = 0x708 # CEntityIOOutput
    m_OnUser3 = 0x730 # CEntityIOOutput
    m_OnUser4 = 0x758 # CEntityIOOutput
    m_iInitialTeamNum = 0x780 # int32_t
    m_flNavIgnoreUntilTime = 0x784 # GameTime_t
    m_vecAngVelocity = 0x788 # QAngle
    m_bNetworkQuantizeOriginAndAngles = 0x794 # bool
    m_bLagCompensate = 0x795 # bool
    m_flOverriddenFriction = 0x798 # float
    m_pBlocker = 0x79C # CHandle<CBaseEntity>
    m_flLocalTime = 0x7A0 # float
    m_flVPhysicsUpdateLocalTime = 0x7A4 # float

class CBaseEntityAPI:

class CBaseFilter: # CLogicalEntity
    m_bNegated = 0x7A8 # bool
    m_OnPass = 0x7B0 # CEntityIOOutput
    m_OnFail = 0x7D8 # CEntityIOOutput

class CBaseFire: # CBaseEntity
    m_flScale = 0x7A8 # float
    m_flStartScale = 0x7AC # float
    m_flScaleTime = 0x7B0 # float
    m_nFlags = 0x7B4 # uint32_t

class CBaseFlex: # CBaseAnimGraph
    m_flexWeight = 0xBF0 # CNetworkUtlVectorBase<float>
    m_vLookTargetPosition = 0xC08 # Vector
    m_blinktoggle = 0xC14 # bool
    m_flAllowResponsesEndTime = 0xC68 # GameTime_t
    m_flLastFlexAnimationTime = 0xC6C # GameTime_t
    m_nNextSceneEventId = 0xC70 # uint32_t
    m_bUpdateLayerPriorities = 0xC74 # bool

class CBaseFlexAlias_funCBaseFlex: # CBaseFlex

class CBaseGrenade: # CBaseFlex
    m_OnPlayerPickup = 0xC88 # CEntityIOOutput
    m_OnExplode = 0xCB0 # CEntityIOOutput
    m_bHasWarnedAI = 0xCD8 # bool
    m_bIsSmokeGrenade = 0xCD9 # bool
    m_bIsLive = 0xCDA # bool
    m_DmgRadius = 0xCDC # float
    m_flDetonateTime = 0xCE0 # GameTime_t
    m_flWarnAITime = 0xCE4 # float
    m_flDamage = 0xCE8 # float
    m_iszBounceSound = 0xCF0 # CUtlSymbolLarge
    m_ExplosionSound = 0xCF8 # CUtlString
    m_hThrower = 0xD04 # CHandle<CCSPlayerPawn>
    m_flNextAttack = 0xD1C # GameTime_t
    m_hOriginalThrower = 0xD20 # CHandle<CCSPlayerPawn>

class CBaseIssue:
    m_szTypeString = 0x20 # char[64]
    m_szDetailsString = 0x60 # char[4096]
    m_iNumYesVotes = 0x1060 # int32_t
    m_iNumNoVotes = 0x1064 # int32_t
    m_iNumPotentialVotes = 0x1068 # int32_t
    m_pVoteController = 0x1070 # CVoteController*

class CBaseModelEntity: # CBaseEntity
    m_CRenderComponent = 0x7A8 # CRenderComponent*
    m_CHitboxComponent = 0x7B0 # CHitboxComponent
    m_flDissolveStartTime = 0x7D8 # GameTime_t
    m_OnIgnite = 0x7E0 # CEntityIOOutput
    m_nRenderMode = 0x808 # RenderMode_t
    m_nRenderFX = 0x809 # RenderFx_t
    m_bAllowFadeInView = 0x80A # bool
    m_clrRender = 0x80B # Color
    m_vecRenderAttributes = 0x810 # CUtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
    m_bRenderToCubemaps = 0x860 # bool
    m_Collision = 0x868 # CCollisionProperty
    m_Glow = 0x918 # CGlowProperty
    m_flGlowBackfaceMult = 0x970 # float
    m_fadeMinDist = 0x974 # float
    m_fadeMaxDist = 0x978 # float
    m_flFadeScale = 0x97C # float
    m_flShadowStrength = 0x980 # float
    m_nObjectCulling = 0x984 # uint8_t
    m_nAddDecal = 0x988 # int32_t
    m_vDecalPosition = 0x98C # Vector
    m_vDecalForwardAxis = 0x998 # Vector
    m_flDecalHealBloodRate = 0x9A4 # float
    m_flDecalHealHeightRate = 0x9A8 # float
    m_ConfigEntitiesToPropagateMaterialDecalsTo = 0x9B0 # CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    m_vecViewOffset = 0x9C8 # CNetworkViewOffsetVector

class CBaseMoveBehavior: # CPathKeyFrame
    m_iPositionInterpolator = 0x7F4 # int32_t
    m_iRotationInterpolator = 0x7F8 # int32_t
    m_flAnimStartTime = 0x7FC # float
    m_flAnimEndTime = 0x800 # float
    m_flAverageSpeedAcrossFrame = 0x804 # float
    m_pCurrentKeyFrame = 0x808 # CPathKeyFrame*
    m_pTargetKeyFrame = 0x810 # CPathKeyFrame*
    m_pPreKeyFrame = 0x818 # CPathKeyFrame*
    m_pPostKeyFrame = 0x820 # CPathKeyFrame*
    m_flTimeIntoFrame = 0x828 # float
    m_iDirection = 0x82C # int32_t

class CBasePlatTrain: # CBaseToggle
    m_NoiseMoving = 0xA78 # CUtlSymbolLarge
    m_NoiseArrived = 0xA80 # CUtlSymbolLarge
    m_volume = 0xA90 # float
    m_flTWidth = 0xA94 # float
    m_flTLength = 0xA98 # float

class CBasePlayerController: # CBaseEntity
    m_nInButtonsWhichAreToggles = 0x7B0 # uint64_t
    m_nTickBase = 0x7B8 # uint32_t
    m_hPawn = 0x7E8 # CHandle<CBasePlayerPawn>
    m_nSplitScreenSlot = 0x7EC # CSplitScreenSlot
    m_hSplitOwner = 0x7F0 # CHandle<CBasePlayerController>
    m_hSplitScreenPlayers = 0x7F8 # CUtlVector<CHandle<CBasePlayerController>>
    m_bIsHLTV = 0x810 # bool
    m_iConnected = 0x814 # PlayerConnectedState
    m_iszPlayerName = 0x818 # char[128]
    m_szNetworkIDString = 0x898 # CUtlString
    m_fLerpTime = 0x8A0 # float
    m_bLagCompensation = 0x8A4 # bool
    m_bPredict = 0x8A5 # bool
    m_bAutoKickDisabled = 0x8A6 # bool
    m_bIsLowViolence = 0x8A7 # bool
    m_bGamePaused = 0x8A8 # bool
    m_nLastRealCommandNumberExecuted = 0x934 # int32_t
    m_nLastLateCommandExecuted = 0x938 # int32_t
    m_iIgnoreGlobalChat = 0x950 # ChatIgnoreType_t
    m_flLastPlayerTalkTime = 0x954 # float
    m_flLastEntitySteadyState = 0x958 # float
    m_nAvailableEntitySteadyState = 0x95C # int32_t
    m_bHasAnySteadyStateEnts = 0x960 # bool
    m_steamID = 0x970 # uint64_t
    m_iDesiredFOV = 0x978 # uint32_t

class CBasePlayerControllerAPI:

class CBasePlayerPawn: # CBaseCombatCharacter
    m_pWeaponServices = 0xD18 # CPlayer_WeaponServices*
    m_pItemServices = 0xD20 # CPlayer_ItemServices*
    m_pAutoaimServices = 0xD28 # CPlayer_AutoaimServices*
    m_pObserverServices = 0xD30 # CPlayer_ObserverServices*
    m_pWaterServices = 0xD38 # CPlayer_WaterServices*
    m_pUseServices = 0xD40 # CPlayer_UseServices*
    m_pFlashlightServices = 0xD48 # CPlayer_FlashlightServices*
    m_pCameraServices = 0xD50 # CPlayer_CameraServices*
    m_pMovementServices = 0xD58 # CPlayer_MovementServices*
    m_ServerViewAngleChanges = 0xD68 # CUtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
    m_nHighestGeneratedServerViewAngleChangeIndex = 0xDB8 # uint32_t
    v_angle = 0xDBC # QAngle
    v_anglePrevious = 0xDC8 # QAngle
    m_iHideHUD = 0xDD4 # uint32_t
    m_skybox3d = 0xDD8 # sky3dparams_t
    m_fTimeLastHurt = 0xE68 # GameTime_t
    m_flDeathTime = 0xE6C # GameTime_t
    m_fNextSuicideTime = 0xE70 # GameTime_t
    m_fInitHUD = 0xE74 # bool
    m_pExpresser = 0xE78 # CAI_Expresser*
    m_hController = 0xE80 # CHandle<CBasePlayerController>
    m_fHltvReplayDelay = 0xE88 # float
    m_fHltvReplayEnd = 0xE8C # float
    m_iHltvReplayEntity = 0xE90 # CEntityIndex
    m_sndOpvarLatchData = 0xE98 # CUtlVector<sndopvarlatchdata_t>

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
    m_nNextPrimaryAttackTick = 0xF78 # GameTick_t
    m_flNextPrimaryAttackTickRatio = 0xF7C # float
    m_nNextSecondaryAttackTick = 0xF80 # GameTick_t
    m_flNextSecondaryAttackTickRatio = 0xF84 # float
    m_iClip1 = 0xF88 # int32_t
    m_iClip2 = 0xF8C # int32_t
    m_pReserveAmmo = 0xF90 # int32_t[2]
    m_OnPlayerUse = 0xF98 # CEntityIOOutput

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
    m_bModelOverrodeBlockLOS = 0xBF0 # bool
    m_iShapeType = 0xBF4 # int32_t
    m_bConformToCollisionBounds = 0xBF8 # bool
    m_mPreferredCatchTransform = 0xBFC # matrix3x4_t

class CBasePropDoor: # CDynamicProp
    m_flAutoReturnDelay = 0xE74 # float
    m_hDoorList = 0xE78 # CUtlVector<CHandle<CBasePropDoor>>
    m_nHardwareType = 0xE90 # int32_t
    m_bNeedsHardware = 0xE94 # bool
    m_eDoorState = 0xE98 # DoorState_t
    m_bLocked = 0xE9C # bool
    m_closedPosition = 0xEA0 # Vector
    m_closedAngles = 0xEAC # QAngle
    m_hBlocker = 0xEB8 # CHandle<CBaseEntity>
    m_bFirstBlocked = 0xEBC # bool
    m_ls = 0xEC0 # locksound_t
    m_bForceClosed = 0xEE0 # bool
    m_vecLatchWorldPosition = 0xEE4 # Vector
    m_hActivator = 0xEF0 # CHandle<CBaseEntity>
    m_SoundMoving = 0xF00 # CUtlSymbolLarge
    m_SoundOpen = 0xF08 # CUtlSymbolLarge
    m_SoundClose = 0xF10 # CUtlSymbolLarge
    m_SoundLock = 0xF18 # CUtlSymbolLarge
    m_SoundUnlock = 0xF20 # CUtlSymbolLarge
    m_SoundLatch = 0xF28 # CUtlSymbolLarge
    m_SoundPound = 0xF30 # CUtlSymbolLarge
    m_SoundJiggle = 0xF38 # CUtlSymbolLarge
    m_SoundLockedAnim = 0xF40 # CUtlSymbolLarge
    m_numCloseAttempts = 0xF48 # int32_t
    m_nPhysicsMaterial = 0xF4C # CUtlStringToken
    m_SlaveName = 0xF50 # CUtlSymbolLarge
    m_hMaster = 0xF58 # CHandle<CBasePropDoor>
    m_OnBlockedClosing = 0xF60 # CEntityIOOutput
    m_OnBlockedOpening = 0xF88 # CEntityIOOutput
    m_OnUnblockedClosing = 0xFB0 # CEntityIOOutput
    m_OnUnblockedOpening = 0xFD8 # CEntityIOOutput
    m_OnFullyClosed = 0x1000 # CEntityIOOutput
    m_OnFullyOpen = 0x1028 # CEntityIOOutput
    m_OnClose = 0x1050 # CEntityIOOutput
    m_OnOpen = 0x1078 # CEntityIOOutput
    m_OnLockedUse = 0x10A0 # CEntityIOOutput
    m_OnAjarOpen = 0x10C8 # CEntityIOOutput

class CBaseToggle: # CBaseModelEntity
    m_toggle_state = 0x9F8 # TOGGLE_STATE
    m_flMoveDistance = 0x9FC # float
    m_flWait = 0xA00 # float
    m_flLip = 0xA04 # float
    m_bAlwaysFireBlockedOutputs = 0xA08 # bool
    m_vecPosition1 = 0xA0C # Vector
    m_vecPosition2 = 0xA18 # Vector
    m_vecMoveAng = 0xA24 # QAngle
    m_vecAngle1 = 0xA30 # QAngle
    m_vecAngle2 = 0xA3C # QAngle
    m_flHeight = 0xA48 # float
    m_hActivator = 0xA4C # CHandle<CBaseEntity>
    m_vecFinalDest = 0xA50 # Vector
    m_vecFinalAngle = 0xA5C # QAngle
    m_movementType = 0xA68 # int32_t
    m_sMaster = 0xA70 # CUtlSymbolLarge

class CBaseTrigger: # CBaseToggle
    m_bDisabled = 0xA78 # bool
    m_iFilterName = 0xA80 # CUtlSymbolLarge
    m_hFilter = 0xA88 # CHandle<CBaseFilter>
    m_OnStartTouch = 0xA90 # CEntityIOOutput
    m_OnStartTouchAll = 0xAB8 # CEntityIOOutput
    m_OnEndTouch = 0xAE0 # CEntityIOOutput
    m_OnEndTouchAll = 0xB08 # CEntityIOOutput
    m_OnTouching = 0xB30 # CEntityIOOutput
    m_OnNotTouching = 0xB58 # CEntityIOOutput
    m_hTouchingEntities = 0xB80 # CUtlVector<CHandle<CBaseEntity>>
    m_bClientSidePredicted = 0xB98 # bool

class CBaseViewModel: # CBaseAnimGraph
    m_vecLastFacing = 0xBF8 # Vector
    m_nViewModelIndex = 0xC04 # uint32_t
    m_nAnimationParity = 0xC08 # uint32_t
    m_flAnimationStartTime = 0xC0C # float
    m_hWeapon = 0xC10 # CHandle<CBasePlayerWeapon>
    m_sVMName = 0xC18 # CUtlSymbolLarge
    m_sAnimationPrefix = 0xC20 # CUtlSymbolLarge
    m_hOldLayerSequence = 0xC28 # HSequence
    m_oldLayer = 0xC2C # int32_t
    m_oldLayerStartTime = 0xC30 # float
    m_hControlPanel = 0xC34 # CHandle<CBaseEntity>

class CBeam: # CBaseModelEntity
    m_flFrameRate = 0x9F8 # float
    m_flHDRColorScale = 0x9FC # float
    m_flFireTime = 0xA00 # GameTime_t
    m_flDamage = 0xA04 # float
    m_nNumBeamEnts = 0xA08 # uint8_t
    m_hBaseMaterial = 0xA10 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_nHaloIndex = 0xA18 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_nBeamType = 0xA20 # BeamType_t
    m_nBeamFlags = 0xA24 # uint32_t
    m_hAttachEntity = 0xA28 # CHandle<CBaseEntity>[10]
    m_nAttachIndex = 0xA50 # AttachmentHandle_t[10]
    m_fWidth = 0xA5C # float
    m_fEndWidth = 0xA60 # float
    m_fFadeLength = 0xA64 # float
    m_fHaloScale = 0xA68 # float
    m_fAmplitude = 0xA6C # float
    m_fStartFrame = 0xA70 # float
    m_fSpeed = 0xA74 # float
    m_flFrame = 0xA78 # float
    m_nClipStyle = 0xA7C # BeamClipStyle_t
    m_bTurnedOff = 0xA80 # bool
    m_vecEndPos = 0xA84 # Vector
    m_hEndEntity = 0xA90 # CHandle<CBaseEntity>
    m_nDissolveType = 0xA94 # int32_t

class CBlood: # CPointEntity
    m_vecSprayAngles = 0x7A8 # QAngle
    m_vecSprayDir = 0x7B4 # Vector
    m_flAmount = 0x7C0 # float
    m_Color = 0x7C4 # int32_t

class CBodyComponent: # CEntityComponent
    m_pSceneNode = 0x8 # CGameSceneNode*
    __m_pChainEntity = 0x28 # CNetworkVarChainer

class CBodyComponentBaseAnimGraph: # CBodyComponentSkeletonInstance
    m_animationController = 0x478 # CBaseAnimGraphController
    __m_pChainEntity = 0x980 # CNetworkVarChainer

class CBodyComponentBaseModelEntity: # CBodyComponentSkeletonInstance
    __m_pChainEntity = 0x478 # CNetworkVarChainer

class CBodyComponentPoint: # CBodyComponent
    m_sceneNode = 0x60 # CGameSceneNode
    __m_pChainEntity = 0x1C0 # CNetworkVarChainer

class CBodyComponentSkeletonInstance: # CBodyComponent
    m_skeletonInstance = 0x60 # CSkeletonInstance
    __m_pChainEntity = 0x450 # CNetworkVarChainer

class CBombTarget: # CBaseTrigger
    m_OnBombExplode = 0xBA0 # CEntityIOOutput
    m_OnBombPlanted = 0xBC8 # CEntityIOOutput
    m_OnBombDefused = 0xBF0 # CEntityIOOutput
    m_bIsBombSiteB = 0xC18 # bool
    m_bIsHeistBombTarget = 0xC19 # bool
    m_bBombPlantedHere = 0xC1A # bool
    m_szMountTarget = 0xC20 # CUtlSymbolLarge
    m_hInstructorHint = 0xC28 # CHandle<CBaseEntity>
    m_nBombSiteDesignation = 0xC2C # int32_t

class CBot:
    m_pController = 0x10 # CCSPlayerController*
    m_pPlayer = 0x18 # CCSPlayerPawn*
    m_bHasSpawned = 0x20 # bool
    m_id = 0x24 # uint32_t
    m_isRunning = 0xA8 # bool
    m_isCrouching = 0xA9 # bool
    m_forwardSpeed = 0xAC # float
    m_leftSpeed = 0xB0 # float
    m_verticalSpeed = 0xB4 # float
    m_buttonFlags = 0xB8 # uint64_t
    m_jumpTimestamp = 0xC0 # float
    m_viewForward = 0xC4 # Vector
    m_postureStackIndex = 0xE0 # int32_t

class CBreachCharge: # CCSWeaponBase

class CBreachChargeProjectile: # CBaseGrenade

class CBreakable: # CBaseModelEntity
    m_Material = 0xA08 # Materials
    m_hBreaker = 0xA0C # CHandle<CBaseEntity>
    m_Explosion = 0xA10 # Explosions
    m_iszSpawnObject = 0xA18 # CUtlSymbolLarge
    m_flPressureDelay = 0xA20 # float
    m_iMinHealthDmg = 0xA24 # int32_t
    m_iszPropData = 0xA28 # CUtlSymbolLarge
    m_impactEnergyScale = 0xA30 # float
    m_nOverrideBlockLOS = 0xA34 # EOverrideBlockLOS_t
    m_OnBreak = 0xA38 # CEntityIOOutput
    m_OnHealthChanged = 0xA60 # CEntityOutputTemplate<float>
    m_flDmgModBullet = 0xA88 # float
    m_flDmgModClub = 0xA8C # float
    m_flDmgModExplosive = 0xA90 # float
    m_flDmgModFire = 0xA94 # float
    m_iszPhysicsDamageTableName = 0xA98 # CUtlSymbolLarge
    m_iszBasePropData = 0xAA0 # CUtlSymbolLarge
    m_iInteractions = 0xAA8 # int32_t
    m_PerformanceMode = 0xAAC # PerformanceMode_t
    m_hPhysicsAttacker = 0xAB0 # CHandle<CBasePlayerPawn>
    m_flLastPhysicsInfluenceTime = 0xAB4 # GameTime_t

class CBreakableProp: # CBaseProp
    m_OnBreak = 0xC40 # CEntityIOOutput
    m_OnHealthChanged = 0xC68 # CEntityOutputTemplate<float>
    m_OnTakeDamage = 0xC90 # CEntityIOOutput
    m_impactEnergyScale = 0xCB8 # float
    m_iMinHealthDmg = 0xCBC # int32_t
    m_preferredCarryAngles = 0xCC0 # QAngle
    m_flPressureDelay = 0xCCC # float
    m_hBreaker = 0xCD0 # CHandle<CBaseEntity>
    m_PerformanceMode = 0xCD4 # PerformanceMode_t
    m_flDmgModBullet = 0xCD8 # float
    m_flDmgModClub = 0xCDC # float
    m_flDmgModExplosive = 0xCE0 # float
    m_flDmgModFire = 0xCE4 # float
    m_iszPhysicsDamageTableName = 0xCE8 # CUtlSymbolLarge
    m_iszBasePropData = 0xCF0 # CUtlSymbolLarge
    m_iInteractions = 0xCF8 # int32_t
    m_flPreventDamageBeforeTime = 0xCFC # GameTime_t
    m_bHasBreakPiecesOrCommands = 0xD00 # bool
    m_explodeDamage = 0xD04 # float
    m_explodeRadius = 0xD08 # float
    m_explosionDelay = 0xD10 # float
    m_explosionBuildupSound = 0xD18 # CUtlSymbolLarge
    m_explosionCustomEffect = 0xD20 # CUtlSymbolLarge
    m_explosionCustomSound = 0xD28 # CUtlSymbolLarge
    m_explosionModifier = 0xD30 # CUtlSymbolLarge
    m_hPhysicsAttacker = 0xD38 # CHandle<CBasePlayerPawn>
    m_flLastPhysicsInfluenceTime = 0xD3C # GameTime_t
    m_bOriginalBlockLOS = 0xD40 # bool
    m_flDefaultFadeScale = 0xD44 # float
    m_hLastAttacker = 0xD48 # CHandle<CBaseEntity>
    m_hFlareEnt = 0xD4C # CHandle<CBaseEntity>
    m_bUsePuntSound = 0xD50 # bool
    m_iszPuntSound = 0xD58 # CUtlSymbolLarge
    m_noGhostCollision = 0xD60 # bool

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
    m_density = 0x9F8 # int32_t
    m_frequency = 0x9FC # int32_t
    m_state = 0xA00 # int32_t

class CBumpMine: # CCSWeaponBase

class CBumpMineProjectile: # CBaseGrenade

class CBuoyancyHelper:
    m_flFluidDensity = 0x18 # float

class CBuyZone: # CBaseTrigger
    m_LegacyTeamNum = 0xB9C # int32_t

class CC4: # CCSWeaponBase
    m_vecLastValidPlayerHeldPosition = 0x1198 # Vector
    m_vecLastValidDroppedPosition = 0x11A4 # Vector
    m_bDoValidDroppedPositionCheck = 0x11B0 # bool
    m_bStartedArming = 0x11B1 # bool
    m_fArmedTime = 0x11B4 # GameTime_t
    m_bBombPlacedAnimation = 0x11B8 # bool
    m_bIsPlantingViaUse = 0x11B9 # bool
    m_entitySpottedState = 0x11C0 # EntitySpottedState_t
    m_nSpotRules = 0x11D8 # int32_t
    m_bPlayedArmingBeeps = 0x11DC # bool[7]
    m_bBombPlanted = 0x11E3 # bool

class CCSArmsRaceScript: # CCSGameModeScript
    m_pOuter = 0xD8 # CCSGameModeRules_ArmsRace*

class CCSBot: # CBot
    m_lastCoopSpawnPoint = 0xE4 # CHandle<SpawnPointCoopEnemy>
    m_eyePosition = 0xF0 # Vector
    m_name = 0xFC # char[64]
    m_combatRange = 0x13C # float
    m_isRogue = 0x140 # bool
    m_rogueTimer = 0x148 # CountdownTimer
    m_diedLastRound = 0x164 # bool
    m_safeTime = 0x168 # float
    m_wasSafe = 0x16C # bool
    m_blindFire = 0x174 # bool
    m_surpriseTimer = 0x178 # CountdownTimer
    m_bAllowActive = 0x190 # bool
    m_isFollowing = 0x191 # bool
    m_leader = 0x194 # CHandle<CCSPlayerPawn>
    m_followTimestamp = 0x198 # float
    m_allowAutoFollowTime = 0x19C # float
    m_hurryTimer = 0x1A0 # CountdownTimer
    m_alertTimer = 0x1B8 # CountdownTimer
    m_sneakTimer = 0x1D0 # CountdownTimer
    m_panicTimer = 0x1E8 # CountdownTimer
    m_stateTimestamp = 0x4B8 # float
    m_isAttacking = 0x4BC # bool
    m_isOpeningDoor = 0x4BD # bool
    m_taskEntity = 0x4C4 # CHandle<CBaseEntity>
    m_goalPosition = 0x4D4 # Vector
    m_goalEntity = 0x4E0 # CHandle<CBaseEntity>
    m_avoid = 0x4E4 # CHandle<CBaseEntity>
    m_avoidTimestamp = 0x4E8 # float
    m_isStopping = 0x4EC # bool
    m_hasVisitedEnemySpawn = 0x4ED # bool
    m_stillTimer = 0x4F0 # IntervalTimer
    m_bEyeAnglesUnderPathFinderControl = 0x500 # bool
    m_pathIndex = 0x65D8 # int32_t
    m_areaEnteredTimestamp = 0x65DC # GameTime_t
    m_repathTimer = 0x65E0 # CountdownTimer
    m_avoidFriendTimer = 0x65F8 # CountdownTimer
    m_isFriendInTheWay = 0x6610 # bool
    m_politeTimer = 0x6618 # CountdownTimer
    m_isWaitingBehindFriend = 0x6630 # bool
    m_pathLadderEnd = 0x665C # float
    m_mustRunTimer = 0x66A8 # CountdownTimer
    m_waitTimer = 0x66C0 # CountdownTimer
    m_updateTravelDistanceTimer = 0x66D8 # CountdownTimer
    m_playerTravelDistance = 0x66F0 # float[64]
    m_travelDistancePhase = 0x67F0 # uint8_t
    m_hostageEscortCount = 0x6988 # uint8_t
    m_hostageEscortCountTimestamp = 0x698C # float
    m_desiredTeam = 0x6990 # int32_t
    m_hasJoined = 0x6994 # bool
    m_isWaitingForHostage = 0x6995 # bool
    m_inhibitWaitingForHostageTimer = 0x6998 # CountdownTimer
    m_waitForHostageTimer = 0x69B0 # CountdownTimer
    m_noisePosition = 0x69C8 # Vector
    m_noiseTravelDistance = 0x69D4 # float
    m_noiseTimestamp = 0x69D8 # float
    m_noiseSource = 0x69E0 # CCSPlayerPawn*
    m_noiseBendTimer = 0x69F8 # CountdownTimer
    m_bentNoisePosition = 0x6A10 # Vector
    m_bendNoisePositionValid = 0x6A1C # bool
    m_lookAroundStateTimestamp = 0x6A20 # float
    m_lookAheadAngle = 0x6A24 # float
    m_forwardAngle = 0x6A28 # float
    m_inhibitLookAroundTimestamp = 0x6A2C # float
    m_lookAtSpot = 0x6A34 # Vector
    m_lookAtSpotDuration = 0x6A44 # float
    m_lookAtSpotTimestamp = 0x6A48 # float
    m_lookAtSpotAngleTolerance = 0x6A4C # float
    m_lookAtSpotClearIfClose = 0x6A50 # bool
    m_lookAtSpotAttack = 0x6A51 # bool
    m_lookAtDesc = 0x6A58 # char*
    m_peripheralTimestamp = 0x6A60 # float
    m_approachPointCount = 0x6BE8 # uint8_t
    m_approachPointViewPosition = 0x6BEC # Vector
    m_viewSteadyTimer = 0x6BF8 # IntervalTimer
    m_tossGrenadeTimer = 0x6C10 # CountdownTimer
    m_isAvoidingGrenade = 0x6C30 # CountdownTimer
    m_spotCheckTimestamp = 0x6C50 # float
    m_checkedHidingSpotCount = 0x7058 # int32_t
    m_lookPitch = 0x705C # float
    m_lookPitchVel = 0x7060 # float
    m_lookYaw = 0x7064 # float
    m_lookYawVel = 0x7068 # float
    m_targetSpot = 0x706C # Vector
    m_targetSpotVelocity = 0x7078 # Vector
    m_targetSpotPredicted = 0x7084 # Vector
    m_aimError = 0x7090 # QAngle
    m_aimGoal = 0x709C # QAngle
    m_targetSpotTime = 0x70A8 # GameTime_t
    m_aimFocus = 0x70AC # float
    m_aimFocusInterval = 0x70B0 # float
    m_aimFocusNextUpdate = 0x70B4 # GameTime_t
    m_ignoreEnemiesTimer = 0x70C0 # CountdownTimer
    m_enemy = 0x70D8 # CHandle<CCSPlayerPawn>
    m_isEnemyVisible = 0x70DC # bool
    m_visibleEnemyParts = 0x70DD # uint8_t
    m_lastEnemyPosition = 0x70E0 # Vector
    m_lastSawEnemyTimestamp = 0x70EC # float
    m_firstSawEnemyTimestamp = 0x70F0 # float
    m_currentEnemyAcquireTimestamp = 0x70F4 # float
    m_enemyDeathTimestamp = 0x70F8 # float
    m_friendDeathTimestamp = 0x70FC # float
    m_isLastEnemyDead = 0x7100 # bool
    m_nearbyEnemyCount = 0x7104 # int32_t
    m_bomber = 0x7310 # CHandle<CCSPlayerPawn>
    m_nearbyFriendCount = 0x7314 # int32_t
    m_closestVisibleFriend = 0x7318 # CHandle<CCSPlayerPawn>
    m_closestVisibleHumanFriend = 0x731C # CHandle<CCSPlayerPawn>
    m_attentionInterval = 0x7320 # IntervalTimer
    m_attacker = 0x7330 # CHandle<CCSPlayerPawn>
    m_attackedTimestamp = 0x7334 # float
    m_burnedByFlamesTimer = 0x7338 # IntervalTimer
    m_lastVictimID = 0x7348 # int32_t
    m_isAimingAtEnemy = 0x734C # bool
    m_isRapidFiring = 0x734D # bool
    m_equipTimer = 0x7350 # IntervalTimer
    m_zoomTimer = 0x7360 # CountdownTimer
    m_fireWeaponTimestamp = 0x7378 # GameTime_t
    m_lookForWeaponsOnGroundTimer = 0x7380 # CountdownTimer
    m_bIsSleeping = 0x7398 # bool
    m_isEnemySniperVisible = 0x7399 # bool
    m_sawEnemySniperTimer = 0x73A0 # CountdownTimer
    m_enemyQueueIndex = 0x7458 # uint8_t
    m_enemyQueueCount = 0x7459 # uint8_t
    m_enemyQueueAttendIndex = 0x745A # uint8_t
    m_isStuck = 0x745B # bool
    m_stuckTimestamp = 0x745C # GameTime_t
    m_stuckSpot = 0x7460 # Vector
    m_wiggleTimer = 0x7470 # CountdownTimer
    m_stuckJumpTimer = 0x7488 # CountdownTimer
    m_nextCleanupCheckTimestamp = 0x74A0 # GameTime_t
    m_avgVel = 0x74A4 # float[10]
    m_avgVelIndex = 0x74CC # int32_t
    m_avgVelCount = 0x74D0 # int32_t
    m_lastOrigin = 0x74D4 # Vector
    m_lastRadioRecievedTimestamp = 0x74E4 # float
    m_lastRadioSentTimestamp = 0x74E8 # float
    m_radioSubject = 0x74EC # CHandle<CCSPlayerPawn>
    m_radioPosition = 0x74F0 # Vector
    m_voiceEndTimestamp = 0x74FC # float
    m_lastValidReactionQueueFrame = 0x7508 # int32_t

class CCSDeathmatchScript: # CCSGameModeScript
    m_pOuter = 0xD8 # CCSGameModeRules_Deathmatch*

class CCSDeathmatchScript_ConVars:

class CCSGOPlayerAnimGraphState:

class CCSGOViewModel: # CPredictedViewModel
    m_bShouldIgnoreOffsetAndAccuracy = 0xC38 # bool
    m_nWeaponParity = 0xC3C # uint32_t
    m_nOldWeaponParity = 0xC40 # uint32_t

class CCSGO_TeamIntroCharacterPosition: # CCSGO_TeamPreviewCharacterPosition

class CCSGO_TeamIntroCounterTerroristPosition: # CCSGO_TeamIntroCharacterPosition

class CCSGO_TeamIntroTerroristPosition: # CCSGO_TeamIntroCharacterPosition

class CCSGO_TeamPreviewCharacterPosition: # CBaseEntity
    m_nVariant = 0x7A8 # int32_t
    m_nRandom = 0x7AC # int32_t
    m_nOrdinal = 0x7B0 # int32_t
    m_sWeaponName = 0x7B8 # CUtlString
    m_xuid = 0x7C0 # uint64_t
    m_agentItem = 0x7C8 # CEconItemView
    m_glovesItem = 0xA40 # CEconItemView
    m_weaponItem = 0xCB8 # CEconItemView

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
    m_hPlayerResource = 0x1568 # CHandle<CBaseEntity>
    m_RetakeRules = 0x1570 # CRetakeGameRules
    m_GuardianBotSkillLevelMax = 0x1754 # int32_t
    m_GuardianBotSkillLevelMin = 0x1758 # int32_t
    m_arrTeamUniqueKillWeaponsMatch = 0x1760 # CUtlVector<int32_t>[4]
    m_bTeamLastKillUsedUniqueWeaponMatch = 0x17C0 # bool[4]
    m_nMatchEndCount = 0x17E8 # uint8_t
    m_nTTeamIntroVariant = 0x17EC # int32_t
    m_nCTTeamIntroVariant = 0x17F0 # int32_t
    m_bTeamIntroPeriod = 0x17F4 # bool
    m_fTeamIntroPeriodEnd = 0x17F8 # GameTime_t
    m_bPlayedTeamIntroVO = 0x17FC # bool
    m_iRoundEndWinnerTeam = 0x1800 # int32_t
    m_eRoundEndReason = 0x1804 # int32_t
    m_bRoundEndShowTimerDefend = 0x1808 # bool
    m_iRoundEndTimerTime = 0x180C # int32_t
    m_sRoundEndFunFactToken = 0x1810 # CUtlString
    m_iRoundEndFunFactPlayerSlot = 0x1818 # CPlayerSlot
    m_iRoundEndFunFactData1 = 0x181C # int32_t
    m_iRoundEndFunFactData2 = 0x1820 # int32_t
    m_iRoundEndFunFactData3 = 0x1824 # int32_t
    m_sRoundEndMessage = 0x1828 # CUtlString
    m_iRoundEndPlayerCount = 0x1830 # int32_t
    m_bRoundEndNoMusic = 0x1834 # bool
    m_iRoundEndLegacy = 0x1838 # int32_t
    m_nRoundEndCount = 0x183C # uint8_t
    m_iRoundStartRoundNumber = 0x1840 # int32_t
    m_nRoundStartCount = 0x1844 # uint8_t
    m_flLastPerfSampleTime = 0x5850 # double
    m_bSkipNextServerPerfSample = 0x5858 # bool

class CCSGameRulesProxy: # CGameRulesProxy
    m_pGameRules = 0x7A8 # CCSGameRules*

class CCSMinimapBoundary: # CBaseEntity

class CCSObserverPawn: # CCSPlayerPawnBase

class CCSObserverPawnAPI:

class CCSObserver_CameraServices: # CCSPlayerBase_CameraServices

class CCSObserver_MovementServices: # CPlayer_MovementServices

class CCSObserver_ObserverServices: # CPlayer_ObserverServices

class CCSObserver_UseServices: # CPlayer_UseServices

class CCSObserver_ViewModelServices: # CPlayer_ViewModelServices

class CCSPlace: # CServerOnlyModelEntity
    m_name = 0xA00 # CUtlSymbolLarge

class CCSPlayerBase_CameraServices: # CPlayer_CameraServices
    m_iFOV = 0x170 # uint32_t
    m_iFOVStart = 0x174 # uint32_t
    m_flFOVTime = 0x178 # GameTime_t
    m_flFOVRate = 0x17C # float
    m_hZoomOwner = 0x180 # CHandle<CBaseEntity>
    m_hTriggerFogList = 0x188 # CUtlVector<CHandle<CBaseEntity>>
    m_hLastFogTrigger = 0x1A0 # CHandle<CBaseEntity>

class CCSPlayerController: # CBasePlayerController
    m_pInGameMoneyServices = 0x9A8 # CCSPlayerController_InGameMoneyServices*
    m_pInventoryServices = 0x9B0 # CCSPlayerController_InventoryServices*
    m_pActionTrackingServices = 0x9B8 # CCSPlayerController_ActionTrackingServices*
    m_pDamageServices = 0x9C0 # CCSPlayerController_DamageServices*
    m_iPing = 0x9C8 # uint32_t
    m_bHasCommunicationAbuseMute = 0x9CC # bool
    m_szCrosshairCodes = 0x9D0 # CUtlSymbolLarge
    m_iPendingTeamNum = 0x9D8 # uint8_t
    m_flForceTeamTime = 0x9DC # GameTime_t
    m_iCompTeammateColor = 0x9E0 # int32_t
    m_bEverPlayedOnTeam = 0x9E4 # bool
    m_bAttemptedToGetColor = 0x9E5 # bool
    m_iTeammatePreferredColor = 0x9E8 # int32_t
    m_bTeamChanged = 0x9EC # bool
    m_bInSwitchTeam = 0x9ED # bool
    m_bHasSeenJoinGame = 0x9EE # bool
    m_bJustBecameSpectator = 0x9EF # bool
    m_bSwitchTeamsOnNextRoundReset = 0x9F0 # bool
    m_bRemoveAllItemsOnNextRoundReset = 0x9F1 # bool
    m_szClan = 0x9F8 # CUtlSymbolLarge
    m_szClanName = 0xA00 # char[32]
    m_iCoachingTeam = 0xA20 # int32_t
    m_nPlayerDominated = 0xA28 # uint64_t
    m_nPlayerDominatingMe = 0xA30 # uint64_t
    m_iCompetitiveRanking = 0xA38 # int32_t
    m_iCompetitiveWins = 0xA3C # int32_t
    m_iCompetitiveRankType = 0xA40 # int8_t
    m_iCompetitiveRankingPredicted_Win = 0xA44 # int32_t
    m_iCompetitiveRankingPredicted_Loss = 0xA48 # int32_t
    m_iCompetitiveRankingPredicted_Tie = 0xA4C # int32_t
    m_nEndMatchNextMapVote = 0xA50 # int32_t
    m_unActiveQuestId = 0xA54 # uint16_t
    m_nQuestProgressReason = 0xA58 # QuestProgress::Reason
    m_unPlayerTvControlFlags = 0xA5C # uint32_t
    m_iDraftIndex = 0xA88 # int32_t
    m_msQueuedModeDisconnectionTimestamp = 0xA8C # uint32_t
    m_uiAbandonRecordedReason = 0xA90 # uint32_t
    m_bCannotBeKicked = 0xA94 # bool
    m_bEverFullyConnected = 0xA95 # bool
    m_bAbandonAllowsSurrender = 0xA96 # bool
    m_bAbandonOffersInstantSurrender = 0xA97 # bool
    m_bDisconnection1MinWarningPrinted = 0xA98 # bool
    m_bScoreReported = 0xA99 # bool
    m_nDisconnectionTick = 0xA9C # int32_t
    m_bControllingBot = 0xAA8 # bool
    m_bHasControlledBotThisRound = 0xAA9 # bool
    m_bHasBeenControlledByPlayerThisRound = 0xAAA # bool
    m_nBotsControlledThisRound = 0xAAC # int32_t
    m_bCanControlObservedBot = 0xAB0 # bool
    m_hPlayerPawn = 0xAB4 # CHandle<CCSPlayerPawn>
    m_hObserverPawn = 0xAB8 # CHandle<CCSObserverPawn>
    m_DesiredObserverMode = 0xABC # int32_t
    m_hDesiredObserverTarget = 0xAC0 # CEntityHandle
    m_bPawnIsAlive = 0xAC4 # bool
    m_iPawnHealth = 0xAC8 # uint32_t
    m_iPawnArmor = 0xACC # int32_t
    m_bPawnHasDefuser = 0xAD0 # bool
    m_bPawnHasHelmet = 0xAD1 # bool
    m_nPawnCharacterDefIndex = 0xAD2 # uint16_t
    m_iPawnLifetimeStart = 0xAD4 # int32_t
    m_iPawnLifetimeEnd = 0xAD8 # int32_t
    m_iPawnBotDifficulty = 0xADC # int32_t
    m_hOriginalControllerOfCurrentPawn = 0xAE0 # CHandle<CCSPlayerController>
    m_iScore = 0xAE4 # int32_t
    m_iRoundScore = 0xAE8 # int32_t
    m_iRoundsWon = 0xAEC # int32_t
    m_vecKills = 0xAF0 # CNetworkUtlVectorBase<EKillTypes_t>
    m_bMvpNoMusic = 0xB08 # bool
    m_eMvpReason = 0xB0C # int32_t
    m_iMusicKitID = 0xB10 # int32_t
    m_iMusicKitMVPs = 0xB14 # int32_t
    m_iMVPs = 0xB18 # int32_t
    m_nUpdateCounter = 0xB1C # int32_t
    m_flSmoothedPing = 0xB20 # float
    m_lastHeldVoteTimer = 0xFBC8 # IntervalTimer
    m_bShowHints = 0xFBE0 # bool
    m_iNextTimeCheck = 0xFBE4 # int32_t
    m_bJustDidTeamKill = 0xFBE8 # bool
    m_bPunishForTeamKill = 0xFBE9 # bool
    m_bGaveTeamDamageWarning = 0xFBEA # bool
    m_bGaveTeamDamageWarningThisRound = 0xFBEB # bool
    m_dblLastReceivedPacketPlatFloatTime = 0xFBF0 # double
    m_LastTeamDamageWarningTime = 0xFBF8 # GameTime_t
    m_LastTimePlayerWasDisconnectedForPawnsRemove = 0xFBFC # GameTime_t
    m_nSuspiciousHitCount = 0xFC00 # uint32_t
    m_nNonSuspiciousHitStreak = 0xFC04 # uint32_t

class CCSPlayerControllerAPI:

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
    m_nPersonaDataXpTrailLevel = 0x6C # int32_t
    m_unEquippedPlayerSprayIDs = 0xF48 # uint32_t[1]
    m_vecServerAuthoritativeWeaponSlots = 0xF50 # CUtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>

class CCSPlayerPawn: # CCSPlayerPawnBase
    m_pBulletServices = 0x18B0 # CCSPlayer_BulletServices*
    m_pHostageServices = 0x18B8 # CCSPlayer_HostageServices*
    m_pBuyServices = 0x18C0 # CCSPlayer_BuyServices*
    m_pActionTrackingServices = 0x18C8 # CCSPlayer_ActionTrackingServices*
    m_pRadioServices = 0x18D0 # CCSPlayer_RadioServices*
    m_pDamageReactServices = 0x18D8 # CCSPlayer_DamageReactServices*
    m_nCharacterDefIndex = 0x18E0 # uint16_t
    m_hPreviousModel = 0x18E8 # CStrongHandle<InfoForResourceTypeCModel>
    m_bHasFemaleVoice = 0x18F0 # bool
    m_strVOPrefix = 0x18F8 # CUtlString
    m_szLastPlaceName = 0x1900 # char[18]
    m_bInHostageResetZone = 0x19C0 # bool
    m_bInBuyZone = 0x19C1 # bool
    m_bWasInBuyZone = 0x19C2 # bool
    m_bInHostageRescueZone = 0x19C3 # bool
    m_bInBombZone = 0x19C4 # bool
    m_bWasInHostageRescueZone = 0x19C5 # bool
    m_iRetakesOffering = 0x19C8 # int32_t
    m_iRetakesOfferingCard = 0x19CC # int32_t
    m_bRetakesHasDefuseKit = 0x19D0 # bool
    m_bRetakesMVPLastRound = 0x19D1 # bool
    m_iRetakesMVPBoostItem = 0x19D4 # int32_t
    m_RetakesMVPBoostExtraUtility = 0x19D8 # loadout_slot_t
    m_flHealthShotBoostExpirationTime = 0x19DC # GameTime_t
    m_flLandseconds = 0x19E0 # float
    m_aimPunchAngle = 0x19E4 # QAngle
    m_aimPunchAngleVel = 0x19F0 # QAngle
    m_aimPunchTickBase = 0x19FC # int32_t
    m_aimPunchTickFraction = 0x1A00 # float
    m_aimPunchCache = 0x1A08 # CUtlVector<QAngle>
    m_bIsBuyMenuOpen = 0x1A20 # bool
    m_xLastHeadBoneTransform = 0x2060 # CTransform
    m_bLastHeadBoneTransformIsValid = 0x2080 # bool
    m_lastLandTime = 0x2084 # GameTime_t
    m_bOnGroundLastTick = 0x2088 # bool
    m_iPlayerLocked = 0x208C # int32_t
    m_flTimeOfLastInjury = 0x2094 # GameTime_t
    m_flNextSprayDecalTime = 0x2098 # GameTime_t
    m_bNextSprayDecalTimeExpedited = 0x209C # bool
    m_nRagdollDamageBone = 0x20A0 # int32_t
    m_vRagdollDamageForce = 0x20A4 # Vector
    m_vRagdollDamagePosition = 0x20B0 # Vector
    m_szRagdollDamageWeaponName = 0x20BC # char[64]
    m_bRagdollDamageHeadshot = 0x20FC # bool
    m_vRagdollServerOrigin = 0x2100 # Vector
    m_EconGloves = 0x2110 # CEconItemView
    m_nEconGlovesChanged = 0x2388 # uint8_t
    m_qDeathEyeAngles = 0x238C # QAngle
    m_bSkipOneHeadConstraintUpdate = 0x2398 # bool

class CCSPlayerPawnAPI:

class CCSPlayerPawnBase: # CBasePlayerPawn
    m_CTouchExpansionComponent = 0xEC8 # CTouchExpansionComponent
    m_pPingServices = 0xF18 # CCSPlayer_PingServices*
    m_pViewModelServices = 0xF20 # CPlayer_ViewModelServices*
    m_iDisplayHistoryBits = 0xF28 # uint32_t
    m_flLastAttackedTeammate = 0xF2C # float
    m_hOriginalController = 0xF30 # CHandle<CCSPlayerController>
    m_blindUntilTime = 0xF34 # GameTime_t
    m_blindStartTime = 0xF38 # GameTime_t
    m_allowAutoFollowTime = 0xF3C # GameTime_t
    m_entitySpottedState = 0xF40 # EntitySpottedState_t
    m_nSpotRules = 0xF58 # int32_t
    m_iPlayerState = 0xF5C # CSPlayerState
    m_chickenIdleSoundTimer = 0xF68 # CountdownTimer
    m_chickenJumpSoundTimer = 0xF80 # CountdownTimer
    m_vecLastBookmarkedPosition = 0x1038 # Vector
    m_flLastDistanceTraveledNotice = 0x1044 # float
    m_flAccumulatedDistanceTraveled = 0x1048 # float
    m_flLastFriendlyFireDamageReductionRatio = 0x104C # float
    m_bRespawning = 0x1050 # bool
    m_nLastPickupPriority = 0x1054 # int32_t
    m_flLastPickupPriorityTime = 0x1058 # float
    m_bIsScoped = 0x105C # bool
    m_bIsWalking = 0x105D # bool
    m_bResumeZoom = 0x105E # bool
    m_bIsDefusing = 0x105F # bool
    m_bIsGrabbingHostage = 0x1060 # bool
    m_iBlockingUseActionInProgress = 0x1064 # CSPlayerBlockingUseAction_t
    m_fImmuneToGunGameDamageTime = 0x1068 # GameTime_t
    m_bGunGameImmunity = 0x106C # bool
    m_GunGameImmunityColor = 0x106D # Color
    m_fMolotovDamageTime = 0x1074 # float
    m_bHasMovedSinceSpawn = 0x1078 # bool
    m_bCanMoveDuringFreezePeriod = 0x1079 # bool
    m_flGuardianTooFarDistFrac = 0x107C # float
    m_flNextGuardianTooFarHurtTime = 0x1080 # float
    m_flDetectedByEnemySensorTime = 0x1084 # GameTime_t
    m_flDealtDamageToEnemyMostRecentTimestamp = 0x1088 # float
    m_flLastEquippedHelmetTime = 0x108C # GameTime_t
    m_flLastEquippedArmorTime = 0x1090 # GameTime_t
    m_nHeavyAssaultSuitCooldownRemaining = 0x1094 # int32_t
    m_bResetArmorNextSpawn = 0x1098 # bool
    m_flLastBumpMineBumpTime = 0x109C # GameTime_t
    m_flEmitSoundTime = 0x10A0 # GameTime_t
    m_iNumSpawns = 0x10A4 # int32_t
    m_iShouldHaveCash = 0x10A8 # int32_t
    m_bInvalidSteamLogonDelayed = 0x10AC # bool
    m_flIdleTimeSinceLastAction = 0x10B0 # float
    m_flNameChangeHistory = 0x10B4 # float[5]
    m_fLastGivenDefuserTime = 0x10C8 # float
    m_fLastGivenBombTime = 0x10CC # float
    m_bHasNightVision = 0x10D0 # bool
    m_bNightVisionOn = 0x10D1 # bool
    m_fNextRadarUpdateTime = 0x10D4 # float
    m_flLastMoneyUpdateTime = 0x10D8 # float
    m_MenuStringBuffer = 0x10DC # char[1024]
    m_fIntroCamTime = 0x14DC # float
    m_nMyCollisionGroup = 0x14E0 # int32_t
    m_bInNoDefuseArea = 0x14E4 # bool
    m_bKilledByTaser = 0x14E5 # bool
    m_iMoveState = 0x14E8 # int32_t
    m_grenadeParameterStashTime = 0x14EC # GameTime_t
    m_bGrenadeParametersStashed = 0x14F0 # bool
    m_angStashedShootAngles = 0x14F4 # QAngle
    m_vecStashedGrenadeThrowPosition = 0x1500 # Vector
    m_vecStashedVelocity = 0x150C # Vector
    m_angShootAngleHistory = 0x1518 # QAngle[2]
    m_vecThrowPositionHistory = 0x1530 # Vector[2]
    m_vecVelocityHistory = 0x1548 # Vector[2]
    m_bDiedAirborne = 0x1560 # bool
    m_iBombSiteIndex = 0x1564 # CEntityIndex
    m_nWhichBombZone = 0x1568 # int32_t
    m_bInBombZoneTrigger = 0x156C # bool
    m_bWasInBombZoneTrigger = 0x156D # bool
    m_iDirection = 0x1570 # int32_t
    m_iShotsFired = 0x1574 # int32_t
    m_ArmorValue = 0x1578 # int32_t
    m_flFlinchStack = 0x157C # float
    m_flVelocityModifier = 0x1580 # float
    m_flHitHeading = 0x1584 # float
    m_nHitBodyPart = 0x1588 # int32_t
    m_iHostagesKilled = 0x158C # int32_t
    m_vecTotalBulletForce = 0x1590 # Vector
    m_flFlashDuration = 0x159C # float
    m_flFlashMaxAlpha = 0x15A0 # float
    m_flProgressBarStartTime = 0x15A4 # float
    m_iProgressBarDuration = 0x15A8 # int32_t
    m_bWaitForNoAttack = 0x15AC # bool
    m_flLowerBodyYawTarget = 0x15B0 # float
    m_bStrafing = 0x15B4 # bool
    m_lastStandingPos = 0x15B8 # Vector
    m_ignoreLadderJumpTime = 0x15C4 # float
    m_ladderSurpressionTimer = 0x15C8 # CountdownTimer
    m_lastLadderNormal = 0x15E0 # Vector
    m_lastLadderPos = 0x15EC # Vector
    m_thirdPersonHeading = 0x15F8 # QAngle
    m_flSlopeDropOffset = 0x1604 # float
    m_flSlopeDropHeight = 0x1608 # float
    m_vHeadConstraintOffset = 0x160C # Vector
    m_iLastWeaponFireUsercmd = 0x1620 # int32_t
    m_angEyeAngles = 0x1624 # QAngle
    m_bVCollisionInitted = 0x1630 # bool
    m_storedSpawnPosition = 0x1634 # Vector
    m_storedSpawnAngle = 0x1640 # QAngle
    m_bIsSpawning = 0x164C # bool
    m_bHideTargetID = 0x164D # bool
    m_nNumDangerZoneDamageHits = 0x1650 # int32_t
    m_bHud_MiniScoreHidden = 0x1654 # bool
    m_bHud_RadarHidden = 0x1655 # bool
    m_nLastKillerIndex = 0x1658 # CEntityIndex
    m_nLastConcurrentKilled = 0x165C # int32_t
    m_nDeathCamMusic = 0x1660 # int32_t
    m_iAddonBits = 0x1664 # int32_t
    m_iPrimaryAddon = 0x1668 # int32_t
    m_iSecondaryAddon = 0x166C # int32_t
    m_currentDeafnessFilter = 0x1670 # CUtlStringToken
    m_NumEnemiesKilledThisSpawn = 0x1674 # int32_t
    m_NumEnemiesKilledThisRound = 0x1678 # int32_t
    m_NumEnemiesAtRoundStart = 0x167C # int32_t
    m_wasNotKilledNaturally = 0x1680 # bool
    m_vecPlayerPatchEconIndices = 0x1684 # uint32_t[5]
    m_iDeathFlags = 0x1698 # int32_t
    m_hPet = 0x169C # CHandle<CChicken>
    m_unCurrentEquipmentValue = 0x1868 # uint16_t
    m_unRoundStartEquipmentValue = 0x186A # uint16_t
    m_unFreezetimeEndEquipmentValue = 0x186C # uint16_t
    m_nSurvivalTeamNumber = 0x1870 # int32_t
    m_bHasDeathInfo = 0x1874 # bool
    m_flDeathInfoTime = 0x1878 # float
    m_vecDeathInfoOrigin = 0x187C # Vector
    m_bKilledByHeadshot = 0x1888 # bool
    m_LastHitBox = 0x188C # int32_t
    m_LastHealth = 0x1890 # int32_t
    m_flLastCollisionCeiling = 0x1894 # float
    m_flLastCollisionCeilingChangeTime = 0x1898 # float
    m_pBot = 0x18A0 # CCSBot*
    m_bBotAllowActive = 0x18A8 # bool
    m_bCommittingSuicideOnTeamChange = 0x18A9 # bool

class CCSPlayerResource: # CBaseEntity
    m_bHostageAlive = 0x7A8 # bool[12]
    m_isHostageFollowingSomeone = 0x7B4 # bool[12]
    m_iHostageEntityIDs = 0x7C0 # CEntityIndex[12]
    m_bombsiteCenterA = 0x7F0 # Vector
    m_bombsiteCenterB = 0x7FC # Vector
    m_hostageRescueX = 0x808 # int32_t[4]
    m_hostageRescueY = 0x818 # int32_t[4]
    m_hostageRescueZ = 0x828 # int32_t[4]
    m_bEndMatchNextMapAllVoted = 0x838 # bool
    m_foundGoalPositions = 0x839 # bool

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
    m_flMaxFallVelocity = 0x224 # float
    m_vecLadderNormal = 0x228 # Vector
    m_nLadderSurfacePropIndex = 0x234 # int32_t
    m_flDuckAmount = 0x238 # float
    m_flDuckSpeed = 0x23C # float
    m_bDuckOverride = 0x240 # bool
    m_bDesiresDuck = 0x241 # bool
    m_flDuckOffset = 0x244 # float
    m_nDuckTimeMsecs = 0x248 # uint32_t
    m_nDuckJumpTimeMsecs = 0x24C # uint32_t
    m_nJumpTimeMsecs = 0x250 # uint32_t
    m_flLastDuckTime = 0x254 # float
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
    m_nGameCodeHasMovedPlayerAfterCommand = 0x4B0 # int32_t
    m_bMadeFootstepNoise = 0x4B4 # bool
    m_iFootsteps = 0x4B8 # int32_t
    m_bOldJumpPressed = 0x4BC # bool
    m_flJumpPressedTime = 0x4C0 # float
    m_flJumpUntil = 0x4C4 # float
    m_flJumpVel = 0x4C8 # float
    m_fStashGrenadeParameterWhen = 0x4CC # GameTime_t
    m_nButtonDownMaskPrev = 0x4D0 # uint64_t
    m_flOffsetTickCompleteTime = 0x4D8 # float
    m_flOffsetTickStashedSpeed = 0x4DC # float
    m_flStamina = 0x4E0 # float
    m_flHeightAtJumpStart = 0x4E4 # float
    m_flMaxJumpHeightThisJump = 0x4E8 # float

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
    m_flNextAttack = 0xA4 # GameTime_t
    m_bIsLookingAtWeapon = 0xA8 # bool
    m_bIsHoldingLookAtWeapon = 0xA9 # bool
    m_hSavedWeapon = 0xAC # CHandle<CBasePlayerWeapon>
    m_nTimeToMelee = 0xB0 # int32_t
    m_nTimeToSecondary = 0xB4 # int32_t
    m_nTimeToPrimary = 0xB8 # int32_t
    m_nTimeToSniperRifle = 0xBC # int32_t
    m_bIsBeingGivenItem = 0xC0 # bool
    m_bIsPickingUpItemWithUse = 0xC1 # bool
    m_bPickedUpWeapon = 0xC2 # bool
    m_bDisableAutoDeploy = 0xC3 # bool
    m_nOldShootPositionHistoryCount = 0xC4 # uint32_t
    m_nOldInputHistoryCount = 0x460 # uint32_t

class CCSPulseServerFuncs_Globals:

class CCSSprite: # CSprite

class CCSTakeDamageInfoAPI:

class CCSTeam: # CTeam
    m_nLastRecievedShorthandedRoundBonus = 0x860 # int32_t
    m_nShorthandedRoundBonusStartRound = 0x864 # int32_t
    m_bSurrendered = 0x868 # bool
    m_szTeamMatchStat = 0x869 # char[512]
    m_numMapVictories = 0xA6C # int32_t
    m_scoreFirstHalf = 0xA70 # int32_t
    m_scoreSecondHalf = 0xA74 # int32_t
    m_scoreOvertime = 0xA78 # int32_t
    m_szClanTeamname = 0xA7C # char[129]
    m_iClanID = 0xB00 # uint32_t
    m_szTeamFlagImage = 0xB04 # char[8]
    m_szTeamLogoImage = 0xB0C # char[8]
    m_flNextResourceTime = 0xB14 # float
    m_iLastUpdateSentAt = 0xB18 # int32_t

class CCSWeaponBase: # CBasePlayerWeapon
    m_bRemoveable = 0xFE8 # bool
    m_flFireSequenceStartTime = 0xFF0 # float
    m_nFireSequenceStartTimeChange = 0xFF4 # int32_t
    m_nFireSequenceStartTimeAck = 0xFF8 # int32_t
    m_ePlayerFireEvent = 0xFFC # PlayerAnimEvent_t
    m_ePlayerFireEventAttackType = 0x1000 # WeaponAttackType_t
    m_seqIdle = 0x1004 # HSequence
    m_seqFirePrimary = 0x1008 # HSequence
    m_seqFireSecondary = 0x100C # HSequence
    m_thirdPersonFireSequences = 0x1010 # CUtlVector<HSequence>
    m_hCurrentThirdPersonSequence = 0x1028 # HSequence
    m_nSilencerBoneIndex = 0x102C # int32_t
    m_thirdPersonSequences = 0x1030 # HSequence[7]
    m_bPlayerAmmoStockOnPickup = 0x1058 # bool
    m_bRequireUseToTouch = 0x1059 # bool
    m_iState = 0x105C # CSWeaponState_t
    m_flLastTimeInAir = 0x1060 # GameTime_t
    m_flLastDeployTime = 0x1064 # GameTime_t
    m_nLastEmptySoundCmdNum = 0x1068 # int32_t
    m_nViewModelIndex = 0x106C # uint32_t
    m_bReloadsWithClips = 0x1070 # bool
    m_flTimeWeaponIdle = 0x1090 # GameTime_t
    m_bFireOnEmpty = 0x1094 # bool
    m_OnPlayerPickup = 0x1098 # CEntityIOOutput
    m_weaponMode = 0x10C0 # CSWeaponMode
    m_flTurningInaccuracyDelta = 0x10C4 # float
    m_vecTurningInaccuracyEyeDirLast = 0x10C8 # Vector
    m_flTurningInaccuracy = 0x10D4 # float
    m_fAccuracyPenalty = 0x10D8 # float
    m_flLastAccuracyUpdateTime = 0x10DC # GameTime_t
    m_fAccuracySmoothedForZoom = 0x10E0 # float
    m_fScopeZoomEndTime = 0x10E4 # GameTime_t
    m_iRecoilIndex = 0x10E8 # int32_t
    m_flRecoilIndex = 0x10EC # float
    m_bBurstMode = 0x10F0 # bool
    m_nPostponeFireReadyTicks = 0x10F4 # GameTick_t
    m_flPostponeFireReadyFrac = 0x10F8 # float
    m_bInReload = 0x10FC # bool
    m_bReloadVisuallyComplete = 0x10FD # bool
    m_flDroppedAtTime = 0x1100 # GameTime_t
    m_bIsHauledBack = 0x1104 # bool
    m_bSilencerOn = 0x1105 # bool
    m_flTimeSilencerSwitchComplete = 0x1108 # GameTime_t
    m_iOriginalTeamNumber = 0x110C # int32_t
    m_flNextAttackRenderTimeOffset = 0x1110 # float
    m_bCanBePickedUp = 0x1128 # bool
    m_bUseCanOverrideNextOwnerTouchTime = 0x1129 # bool
    m_nextOwnerTouchTime = 0x112C # GameTime_t
    m_nextPrevOwnerTouchTime = 0x1130 # GameTime_t
    m_hPrevOwner = 0x1134 # CHandle<CCSPlayerPawn>
    m_nDropTick = 0x1138 # GameTick_t
    m_donated = 0x115C # bool
    m_fLastShotTime = 0x1160 # GameTime_t
    m_bWasOwnedByCT = 0x1164 # bool
    m_bWasOwnedByTerrorist = 0x1165 # bool
    m_bFiredOutOfAmmoEvent = 0x1166 # bool
    m_numRemoveUnownedWeaponThink = 0x1168 # int32_t
    m_IronSightController = 0x1170 # CIronSightController
    m_iIronSightMode = 0x1188 # int32_t
    m_flLastLOSTraceFailureTime = 0x118C # GameTime_t
    m_iNumEmptyAttacks = 0x1190 # int32_t
    m_flWatTickOffset = 0x1194 # float

class CCSWeaponBaseAPI:

class CCSWeaponBaseGun: # CCSWeaponBase
    m_zoomLevel = 0x1198 # int32_t
    m_iBurstShotsRemaining = 0x119C # int32_t
    m_silencedModelIndex = 0x11A8 # int32_t
    m_inPrecache = 0x11AC # bool
    m_bNeedsBoltAction = 0x11AD # bool
    m_bSkillReloadAvailable = 0x11AE # bool
    m_bSkillReloadLiftedReloadKey = 0x11AF # bool
    m_bSkillBoltInterruptAvailable = 0x11B0 # bool
    m_bSkillBoltLiftedFireKey = 0x11B1 # bool

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
    m_sMapName = 0xBA0 # CUtlString
    m_sLandmarkName = 0xBA8 # CUtlString
    m_OnChangeLevel = 0xBB0 # CEntityIOOutput
    m_bTouched = 0xBD8 # bool
    m_bNoTouch = 0xBD9 # bool
    m_bNewChapter = 0xBDA # bool
    m_bOnChangeLevelFired = 0xBDB # bool

class CChicken: # CDynamicProp
    m_AttributeManager = 0xE88 # CAttributeContainer
    m_OriginalOwnerXuidLow = 0x1150 # uint32_t
    m_OriginalOwnerXuidHigh = 0x1154 # uint32_t
    m_updateTimer = 0x1158 # CountdownTimer
    m_stuckAnchor = 0x1170 # Vector
    m_stuckTimer = 0x1180 # CountdownTimer
    m_collisionStuckTimer = 0x1198 # CountdownTimer
    m_isOnGround = 0x11B0 # bool
    m_vFallVelocity = 0x11B4 # Vector
    m_activity = 0x11C0 # ChickenActivity
    m_activityTimer = 0x11C8 # CountdownTimer
    m_turnRate = 0x11E0 # float
    m_fleeFrom = 0x11E4 # CHandle<CBaseEntity>
    m_moveRateThrottleTimer = 0x11E8 # CountdownTimer
    m_startleTimer = 0x1200 # CountdownTimer
    m_vocalizeTimer = 0x1218 # CountdownTimer
    m_flWhenZombified = 0x1230 # GameTime_t
    m_jumpedThisFrame = 0x1234 # bool
    m_leader = 0x1238 # CHandle<CCSPlayerPawn>
    m_reuseTimer = 0x1240 # CountdownTimer
    m_hasBeenUsed = 0x1258 # bool
    m_jumpTimer = 0x1260 # CountdownTimer
    m_flLastJumpTime = 0x1278 # float
    m_bInJump = 0x127C # bool
    m_isWaitingForLeader = 0x127D # bool
    m_repathTimer = 0x3288 # CountdownTimer
    m_inhibitDoorTimer = 0x32A0 # CountdownTimer
    m_inhibitObstacleAvoidanceTimer = 0x3330 # CountdownTimer
    m_vecPathGoal = 0x3350 # Vector
    m_flActiveFollowStartTime = 0x335C # GameTime_t
    m_followMinuteTimer = 0x3360 # CountdownTimer
    m_vecLastEggPoopPosition = 0x3378 # Vector
    m_vecEggsPooped = 0x3388 # CUtlVector<CHandle<CBaseEntity>>
    m_BlockDirectionTimer = 0x33A8 # CountdownTimer

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
    m_flFadeInDuration = 0x7A8 # float
    m_flFadeOutDuration = 0x7AC # float
    m_flStartFadeInWeight = 0x7B0 # float
    m_flStartFadeOutWeight = 0x7B4 # float
    m_flTimeStartFadeIn = 0x7B8 # GameTime_t
    m_flTimeStartFadeOut = 0x7BC # GameTime_t
    m_flMaxWeight = 0x7C0 # float
    m_bStartDisabled = 0x7C4 # bool
    m_bEnabled = 0x7C5 # bool
    m_bMaster = 0x7C6 # bool
    m_bClientSide = 0x7C7 # bool
    m_bExclusive = 0x7C8 # bool
    m_MinFalloff = 0x7CC # float
    m_MaxFalloff = 0x7D0 # float
    m_flCurWeight = 0x7D4 # float
    m_netlookupFilename = 0x7D8 # char[512]
    m_lookupFilename = 0x9D8 # CUtlSymbolLarge

class CColorCorrectionVolume: # CBaseTrigger
    m_bEnabled = 0xB99 # bool
    m_MaxWeight = 0xB9C # float
    m_FadeDuration = 0xBA0 # float
    m_bStartDisabled = 0xBA4 # bool
    m_Weight = 0xBA8 # float
    m_lookupFilename = 0xBAC # char[512]
    m_LastEnterWeight = 0xDAC # float
    m_LastEnterTime = 0xDB0 # GameTime_t
    m_LastExitWeight = 0xDB4 # float
    m_LastExitTime = 0xDB8 # GameTime_t

class CCommentaryAuto: # CBaseEntity
    m_OnCommentaryNewGame = 0x7A8 # CEntityIOOutput
    m_OnCommentaryMidGame = 0x7D0 # CEntityIOOutput
    m_OnCommentaryMultiplayerSpawn = 0x7F8 # CEntityIOOutput

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
    m_massScale = 0xBF0 # float

class CCoopBonusCoin: # CDynamicProp

class CCopyRecipientFilter:
    m_Flags = 0x8 # int32_t
    m_Recipients = 0x10 # CUtlVector<CPlayerSlot>

class CCredits: # CPointEntity
    m_OnCreditsDone = 0x7A8 # CEntityIOOutput
    m_bRolledOutroCredits = 0x7D0 # bool
    m_flLogoLength = 0x7D4 # float

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
    m_nNpcEvents = 0x47E8 # int32_t

class CDecoyGrenade: # CBaseCSGrenade

class CDecoyProjectile: # CBaseCSGrenadeProjectile
    m_nDecoyShotTick = 0xDA0 # int32_t
    m_shotsRemaining = 0xDA4 # int32_t
    m_fExpireTime = 0xDA8 # GameTime_t
    m_decoyWeaponDefIndex = 0xDB8 # uint16_t

class CDynamicLight: # CBaseModelEntity
    m_ActualFlags = 0x9F8 # uint8_t
    m_Flags = 0x9F9 # uint8_t
    m_LightStyle = 0x9FA # uint8_t
    m_On = 0x9FB # bool
    m_Radius = 0x9FC # float
    m_Exponent = 0xA00 # int32_t
    m_InnerAngle = 0xA04 # float
    m_OuterAngle = 0xA08 # float
    m_SpotRadius = 0xA0C # float

class CDynamicProp: # CBreakableProp
    m_bCreateNavObstacle = 0xD70 # bool
    m_bUseHitboxesForRenderBox = 0xD71 # bool
    m_bUseAnimGraph = 0xD72 # bool
    m_pOutputAnimBegun = 0xD78 # CEntityIOOutput
    m_pOutputAnimOver = 0xDA0 # CEntityIOOutput
    m_pOutputAnimLoopCycleOver = 0xDC8 # CEntityIOOutput
    m_OnAnimReachedStart = 0xDF0 # CEntityIOOutput
    m_OnAnimReachedEnd = 0xE18 # CEntityIOOutput
    m_iszIdleAnim = 0xE40 # CUtlSymbolLarge
    m_nIdleAnimLoopMode = 0xE48 # AnimLoopMode_t
    m_bRandomizeCycle = 0xE4C # bool
    m_bStartDisabled = 0xE4D # bool
    m_bFiredStartEndOutput = 0xE4E # bool
    m_bForceNpcExclude = 0xE4F # bool
    m_bCreateNonSolid = 0xE50 # bool
    m_bIsOverrideProp = 0xE51 # bool
    m_iInitialGlowState = 0xE54 # int32_t
    m_nGlowRange = 0xE58 # int32_t
    m_nGlowRangeMin = 0xE5C # int32_t
    m_glowColor = 0xE60 # Color
    m_nGlowTeam = 0xE64 # int32_t

class CDynamicPropAPI:

class CDynamicPropAlias_cable_dynamic: # CDynamicProp

class CDynamicPropAlias_dynamic_prop: # CDynamicProp

class CDynamicPropAlias_prop_dynamic_override: # CDynamicProp

class CEconEntity: # CBaseFlex
    m_AttributeManager = 0xC90 # CAttributeContainer
    m_OriginalOwnerXuidLow = 0xF58 # uint32_t
    m_OriginalOwnerXuidHigh = 0xF5C # uint32_t
    m_nFallbackPaintKit = 0xF60 # int32_t
    m_nFallbackSeed = 0xF64 # int32_t
    m_flFallbackWear = 0xF68 # float
    m_nFallbackStatTrak = 0xF6C # int32_t
    m_hOldProvidee = 0xF70 # CHandle<CBaseEntity>
    m_iOldOwnerClass = 0xF74 # int32_t

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
    m_nForceSkin = 0xF78 # int32_t
    m_bAlwaysAllow = 0xF7C # bool

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
    m_flFadeInStart = 0x9F8 # float
    m_flFadeInLength = 0x9FC # float
    m_flFadeOutModelStart = 0xA00 # float
    m_flFadeOutModelLength = 0xA04 # float
    m_flFadeOutStart = 0xA08 # float
    m_flFadeOutLength = 0xA0C # float
    m_flStartTime = 0xA10 # GameTime_t
    m_nDissolveType = 0xA14 # EntityDisolveType_t
    m_vDissolverOrigin = 0xA18 # Vector
    m_nMagnitude = 0xA24 # uint32_t

class CEntityFlame: # CBaseEntity
    m_hEntAttached = 0x7A8 # CHandle<CBaseEntity>
    m_bCheapEffect = 0x7AC # bool
    m_flSize = 0x7B0 # float
    m_bUseHitboxes = 0x7B4 # bool
    m_iNumHitboxFires = 0x7B8 # int32_t
    m_flHitboxFireScale = 0x7BC # float
    m_flLifetime = 0x7C0 # GameTime_t
    m_hAttacker = 0x7C4 # CHandle<CBaseEntity>
    m_iDangerSound = 0x7C8 # int32_t
    m_flDirectDamagePerSecond = 0x7CC # float
    m_iCustomDamageType = 0x7D0 # int32_t

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
    m_active = 0xA98 # int32_t
    m_spriteTexture = 0xAA0 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_iszStartEntity = 0xAA8 # CUtlSymbolLarge
    m_iszEndEntity = 0xAB0 # CUtlSymbolLarge
    m_life = 0xAB8 # float
    m_boltWidth = 0xABC # float
    m_noiseAmplitude = 0xAC0 # float
    m_speed = 0xAC4 # int32_t
    m_restrike = 0xAC8 # float
    m_iszSpriteName = 0xAD0 # CUtlSymbolLarge
    m_frameStart = 0xAD8 # int32_t
    m_vEndPointWorld = 0xADC # Vector
    m_vEndPointRelative = 0xAE8 # Vector
    m_radius = 0xAF4 # float
    m_TouchType = 0xAF8 # Touch_t
    m_iFilterName = 0xB00 # CUtlSymbolLarge
    m_hFilter = 0xB08 # CHandle<CBaseEntity>
    m_iszDecal = 0xB10 # CUtlSymbolLarge
    m_OnTouchedByEntity = 0xB18 # CEntityIOOutput

class CEnvBeverage: # CBaseEntity
    m_CanInDispenser = 0x7A8 # bool
    m_nBeverageType = 0x7AC # int32_t

class CEnvCombinedLightProbeVolume: # CBaseEntity
    m_Color = 0x1800 # Color
    m_flBrightness = 0x1804 # float
    m_hCubemapTexture = 0x1808 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_bCustomCubemapTexture = 0x1810 # bool
    m_hLightProbeTexture = 0x1818 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hLightProbeDirectLightIndicesTexture = 0x1820 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hLightProbeDirectLightScalarsTexture = 0x1828 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hLightProbeDirectLightShadowsTexture = 0x1830 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_vBoxMins = 0x1838 # Vector
    m_vBoxMaxs = 0x1844 # Vector
    m_bMoveable = 0x1850 # bool
    m_nHandshake = 0x1854 # int32_t
    m_nEnvCubeMapArrayIndex = 0x1858 # int32_t
    m_nPriority = 0x185C # int32_t
    m_bStartDisabled = 0x1860 # bool
    m_flEdgeFadeDist = 0x1864 # float
    m_vEdgeFadeDists = 0x1868 # Vector
    m_nLightProbeSizeX = 0x1874 # int32_t
    m_nLightProbeSizeY = 0x1878 # int32_t
    m_nLightProbeSizeZ = 0x187C # int32_t
    m_nLightProbeAtlasX = 0x1880 # int32_t
    m_nLightProbeAtlasY = 0x1884 # int32_t
    m_nLightProbeAtlasZ = 0x1888 # int32_t
    m_bEnabled = 0x18A1 # bool

class CEnvCubemap: # CBaseEntity
    m_hCubemapTexture = 0x828 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_bCustomCubemapTexture = 0x830 # bool
    m_flInfluenceRadius = 0x834 # float
    m_vBoxProjectMins = 0x838 # Vector
    m_vBoxProjectMaxs = 0x844 # Vector
    m_bMoveable = 0x850 # bool
    m_nHandshake = 0x854 # int32_t
    m_nEnvCubeMapArrayIndex = 0x858 # int32_t
    m_nPriority = 0x85C # int32_t
    m_flEdgeFadeDist = 0x860 # float
    m_vEdgeFadeDists = 0x864 # Vector
    m_flDiffuseScale = 0x870 # float
    m_bStartDisabled = 0x874 # bool
    m_bDefaultEnvMap = 0x875 # bool
    m_bDefaultSpecEnvMap = 0x876 # bool
    m_bIndoorCubeMap = 0x877 # bool
    m_bCopyDiffuseFromDefaultCubemap = 0x878 # bool
    m_bEnabled = 0x888 # bool

class CEnvCubemapBox: # CEnvCubemap

class CEnvCubemapFog: # CBaseEntity
    m_flEndDistance = 0x7A8 # float
    m_flStartDistance = 0x7AC # float
    m_flFogFalloffExponent = 0x7B0 # float
    m_bHeightFogEnabled = 0x7B4 # bool
    m_flFogHeightWidth = 0x7B8 # float
    m_flFogHeightEnd = 0x7BC # float
    m_flFogHeightStart = 0x7C0 # float
    m_flFogHeightExponent = 0x7C4 # float
    m_flLODBias = 0x7C8 # float
    m_bActive = 0x7CC # bool
    m_bStartDisabled = 0x7CD # bool
    m_flFogMaxOpacity = 0x7D0 # float
    m_nCubemapSourceType = 0x7D4 # int32_t
    m_hSkyMaterial = 0x7D8 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_iszSkyEntity = 0x7E0 # CUtlSymbolLarge
    m_hFogCubemapTexture = 0x7E8 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_bHasHeightFogEnd = 0x7F0 # bool
    m_bFirstTime = 0x7F1 # bool

class CEnvDecal: # CBaseModelEntity
    m_hDecalMaterial = 0x9F8 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_flWidth = 0xA00 # float
    m_flHeight = 0xA04 # float
    m_flDepth = 0xA08 # float
    m_nRenderOrder = 0xA0C # uint32_t
    m_bProjectOnWorld = 0xA10 # bool
    m_bProjectOnCharacters = 0xA11 # bool
    m_bProjectOnWater = 0xA12 # bool
    m_flDepthSortBias = 0xA14 # float

class CEnvDetailController: # CBaseEntity
    m_flFadeStartDist = 0x7A8 # float
    m_flFadeEndDist = 0x7AC # float

class CEnvEntityIgniter: # CBaseEntity
    m_flLifetime = 0x7A8 # float

class CEnvEntityMaker: # CPointEntity
    m_vecEntityMins = 0x7A8 # Vector
    m_vecEntityMaxs = 0x7B4 # Vector
    m_hCurrentInstance = 0x7C0 # CHandle<CBaseEntity>
    m_hCurrentBlocker = 0x7C4 # CHandle<CBaseEntity>
    m_vecBlockerOrigin = 0x7C8 # Vector
    m_angPostSpawnDirection = 0x7D4 # QAngle
    m_flPostSpawnDirectionVariance = 0x7E0 # float
    m_flPostSpawnSpeed = 0x7E4 # float
    m_bPostSpawnUseAngles = 0x7E8 # bool
    m_iszTemplate = 0x7F0 # CUtlSymbolLarge
    m_pOutputOnSpawned = 0x7F8 # CEntityIOOutput
    m_pOutputOnFailedSpawn = 0x820 # CEntityIOOutput

class CEnvExplosion: # CModelPointEntity
    m_iMagnitude = 0x9F8 # int32_t
    m_flPlayerDamage = 0x9FC # float
    m_iRadiusOverride = 0xA00 # int32_t
    m_flInnerRadius = 0xA04 # float
    m_spriteScale = 0xA08 # int32_t
    m_flDamageForce = 0xA0C # float
    m_hInflictor = 0xA10 # CHandle<CBaseEntity>
    m_iCustomDamageType = 0xA14 # int32_t
    m_iszExplosionType = 0xA20 # CUtlSymbolLarge
    m_iszCustomEffectName = 0xA28 # CUtlSymbolLarge
    m_iszCustomSoundName = 0xA30 # CUtlSymbolLarge
    m_iClassIgnore = 0xA38 # Class_T
    m_iClassIgnore2 = 0xA3C # Class_T
    m_iszEntityIgnoreName = 0xA40 # CUtlSymbolLarge
    m_hEntityIgnore = 0xA48 # CHandle<CBaseEntity>

class CEnvFade: # CLogicalEntity
    m_fadeColor = 0x7A8 # Color
    m_Duration = 0x7AC # float
    m_HoldDuration = 0x7B0 # float
    m_OnBeginFade = 0x7B8 # CEntityIOOutput

class CEnvFireSensor: # CBaseEntity
    m_bEnabled = 0x7A8 # bool
    m_bHeatAtLevel = 0x7A9 # bool
    m_radius = 0x7AC # float
    m_targetLevel = 0x7B0 # float
    m_targetTime = 0x7B4 # float
    m_levelTime = 0x7B8 # float
    m_OnHeatLevelStart = 0x7C0 # CEntityIOOutput
    m_OnHeatLevelEnd = 0x7E8 # CEntityIOOutput

class CEnvFireSource: # CBaseEntity
    m_bEnabled = 0x7A8 # bool
    m_radius = 0x7AC # float
    m_damage = 0x7B0 # float

class CEnvFunnel: # CBaseEntity

class CEnvGlobal: # CLogicalEntity
    m_outCounter = 0x7A8 # CEntityOutputTemplate<int32_t>
    m_globalstate = 0x7D0 # CUtlSymbolLarge
    m_triggermode = 0x7D8 # int32_t
    m_initialstate = 0x7DC # int32_t
    m_counter = 0x7E0 # int32_t

class CEnvHudHint: # CPointEntity
    m_iszMessage = 0x7A8 # CUtlSymbolLarge

class CEnvInstructorHint: # CPointEntity
    m_iszName = 0x7A8 # CUtlSymbolLarge
    m_iszReplace_Key = 0x7B0 # CUtlSymbolLarge
    m_iszHintTargetEntity = 0x7B8 # CUtlSymbolLarge
    m_iTimeout = 0x7C0 # int32_t
    m_iDisplayLimit = 0x7C4 # int32_t
    m_iszIcon_Onscreen = 0x7C8 # CUtlSymbolLarge
    m_iszIcon_Offscreen = 0x7D0 # CUtlSymbolLarge
    m_iszCaption = 0x7D8 # CUtlSymbolLarge
    m_iszActivatorCaption = 0x7E0 # CUtlSymbolLarge
    m_Color = 0x7E8 # Color
    m_fIconOffset = 0x7EC # float
    m_fRange = 0x7F0 # float
    m_iPulseOption = 0x7F4 # uint8_t
    m_iAlphaOption = 0x7F5 # uint8_t
    m_iShakeOption = 0x7F6 # uint8_t
    m_bStatic = 0x7F7 # bool
    m_bNoOffscreen = 0x7F8 # bool
    m_bForceCaption = 0x7F9 # bool
    m_iInstanceType = 0x7FC # int32_t
    m_bSuppressRest = 0x800 # bool
    m_iszBinding = 0x808 # CUtlSymbolLarge
    m_bAllowNoDrawTarget = 0x810 # bool
    m_bAutoStart = 0x811 # bool
    m_bLocalPlayerOnly = 0x812 # bool

class CEnvInstructorVRHint: # CPointEntity
    m_iszName = 0x7A8 # CUtlSymbolLarge
    m_iszHintTargetEntity = 0x7B0 # CUtlSymbolLarge
    m_iTimeout = 0x7B8 # int32_t
    m_iszCaption = 0x7C0 # CUtlSymbolLarge
    m_iszStartSound = 0x7C8 # CUtlSymbolLarge
    m_iLayoutFileType = 0x7D0 # int32_t
    m_iszCustomLayoutFile = 0x7D8 # CUtlSymbolLarge
    m_iAttachType = 0x7E0 # int32_t
    m_flHeightOffset = 0x7E4 # float

class CEnvLaser: # CBeam
    m_iszLaserTarget = 0xA98 # CUtlSymbolLarge
    m_pSprite = 0xAA0 # CSprite*
    m_iszSpriteName = 0xAA8 # CUtlSymbolLarge
    m_firePosition = 0xAB0 # Vector
    m_flStartFrame = 0xABC # float

class CEnvLightProbeVolume: # CBaseEntity
    m_hLightProbeTexture = 0x1780 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hLightProbeDirectLightIndicesTexture = 0x1788 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hLightProbeDirectLightScalarsTexture = 0x1790 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hLightProbeDirectLightShadowsTexture = 0x1798 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_vBoxMins = 0x17A0 # Vector
    m_vBoxMaxs = 0x17AC # Vector
    m_bMoveable = 0x17B8 # bool
    m_nHandshake = 0x17BC # int32_t
    m_nPriority = 0x17C0 # int32_t
    m_bStartDisabled = 0x17C4 # bool
    m_nLightProbeSizeX = 0x17C8 # int32_t
    m_nLightProbeSizeY = 0x17CC # int32_t
    m_nLightProbeSizeZ = 0x17D0 # int32_t
    m_nLightProbeAtlasX = 0x17D4 # int32_t
    m_nLightProbeAtlasY = 0x17D8 # int32_t
    m_nLightProbeAtlasZ = 0x17DC # int32_t
    m_bEnabled = 0x17E9 # bool

class CEnvMicrophone: # CPointEntity
    m_bDisabled = 0x7A8 # bool
    m_hMeasureTarget = 0x7AC # CHandle<CBaseEntity>
    m_nSoundMask = 0x7B0 # int32_t
    m_flSensitivity = 0x7B4 # float
    m_flSmoothFactor = 0x7B8 # float
    m_flMaxRange = 0x7BC # float
    m_iszSpeakerName = 0x7C0 # CUtlSymbolLarge
    m_hSpeaker = 0x7C8 # CHandle<CBaseEntity>
    m_bAvoidFeedback = 0x7CC # bool
    m_iSpeakerDSPPreset = 0x7D0 # int32_t
    m_iszListenFilter = 0x7D8 # CUtlSymbolLarge
    m_hListenFilter = 0x7E0 # CHandle<CBaseFilter>
    m_SoundLevel = 0x7E8 # CEntityOutputTemplate<float>
    m_OnRoutedSound = 0x810 # CEntityIOOutput
    m_OnHeardSound = 0x838 # CEntityIOOutput
    m_szLastSound = 0x860 # char[256]
    m_iLastRoutedFrame = 0x960 # int32_t

class CEnvMuzzleFlash: # CPointEntity
    m_flScale = 0x7A8 # float
    m_iszParentAttachment = 0x7B0 # CUtlSymbolLarge

class CEnvParticleGlow: # CParticleSystem
    m_flAlphaScale = 0xF70 # float
    m_flRadiusScale = 0xF74 # float
    m_flSelfIllumScale = 0xF78 # float
    m_ColorTint = 0xF7C # Color
    m_hTextureOverride = 0xF80 # CStrongHandle<InfoForResourceTypeCTextureBase>

class CEnvProjectedTexture: # CModelPointEntity
    m_hTargetEntity = 0x9F8 # CHandle<CBaseEntity>
    m_bState = 0x9FC # bool
    m_bAlwaysUpdate = 0x9FD # bool
    m_flLightFOV = 0xA00 # float
    m_bEnableShadows = 0xA04 # bool
    m_bSimpleProjection = 0xA05 # bool
    m_bLightOnlyTarget = 0xA06 # bool
    m_bLightWorld = 0xA07 # bool
    m_bCameraSpace = 0xA08 # bool
    m_flBrightnessScale = 0xA0C # float
    m_LightColor = 0xA10 # Color
    m_flIntensity = 0xA14 # float
    m_flLinearAttenuation = 0xA18 # float
    m_flQuadraticAttenuation = 0xA1C # float
    m_bVolumetric = 0xA20 # bool
    m_flNoiseStrength = 0xA24 # float
    m_flFlashlightTime = 0xA28 # float
    m_nNumPlanes = 0xA2C # uint32_t
    m_flPlaneOffset = 0xA30 # float
    m_flVolumetricIntensity = 0xA34 # float
    m_flColorTransitionTime = 0xA38 # float
    m_flAmbient = 0xA3C # float
    m_SpotlightTextureName = 0xA40 # char[512]
    m_nSpotlightTextureFrame = 0xC40 # int32_t
    m_nShadowQuality = 0xC44 # uint32_t
    m_flNearZ = 0xC48 # float
    m_flFarZ = 0xC4C # float
    m_flProjectionSize = 0xC50 # float
    m_flRotation = 0xC54 # float
    m_bFlipHorizontal = 0xC58 # bool

class CEnvScreenOverlay: # CPointEntity
    m_iszOverlayNames = 0x7A8 # CUtlSymbolLarge[10]
    m_flOverlayTimes = 0x7F8 # float[10]
    m_flStartTime = 0x820 # GameTime_t
    m_iDesiredOverlay = 0x824 # int32_t
    m_bIsActive = 0x828 # bool

class CEnvShake: # CPointEntity
    m_limitToEntity = 0x7A8 # CUtlSymbolLarge
    m_Amplitude = 0x7B0 # float
    m_Frequency = 0x7B4 # float
    m_Duration = 0x7B8 # float
    m_Radius = 0x7BC # float
    m_stopTime = 0x7C0 # GameTime_t
    m_nextShake = 0x7C4 # GameTime_t
    m_currentAmp = 0x7C8 # float
    m_maxForce = 0x7CC # Vector
    m_shakeCallback = 0x7E0 # CPhysicsShake

class CEnvSky: # CBaseModelEntity
    m_hSkyMaterial = 0x9F8 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_hSkyMaterialLightingOnly = 0xA00 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_bStartDisabled = 0xA08 # bool
    m_vTintColor = 0xA09 # Color
    m_vTintColorLightingOnly = 0xA0D # Color
    m_flBrightnessScale = 0xA14 # float
    m_nFogType = 0xA18 # int32_t
    m_flFogMinStart = 0xA1C # float
    m_flFogMinEnd = 0xA20 # float
    m_flFogMaxStart = 0xA24 # float
    m_flFogMaxEnd = 0xA28 # float
    m_bEnabled = 0xA2C # bool

class CEnvSoundscape: # CServerOnlyEntity
    m_OnPlay = 0x7A8 # CEntityIOOutput
    m_flRadius = 0x7D0 # float
    m_soundscapeName = 0x7D8 # CUtlSymbolLarge
    m_soundEventName = 0x7E0 # CUtlSymbolLarge
    m_bOverrideWithEvent = 0x7E8 # bool
    m_soundscapeIndex = 0x7EC # int32_t
    m_soundscapeEntityListId = 0x7F0 # int32_t
    m_soundEventHash = 0x7F4 # uint32_t
    m_positionNames = 0x7F8 # CUtlSymbolLarge[8]
    m_hProxySoundscape = 0x838 # CHandle<CEnvSoundscape>
    m_bDisabled = 0x83C # bool

class CEnvSoundscapeAlias_snd_soundscape: # CEnvSoundscape

class CEnvSoundscapeProxy: # CEnvSoundscape
    m_MainSoundscapeName = 0x840 # CUtlSymbolLarge

class CEnvSoundscapeProxyAlias_snd_soundscape_proxy: # CEnvSoundscapeProxy

class CEnvSoundscapeTriggerable: # CEnvSoundscape

class CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable: # CEnvSoundscapeTriggerable

class CEnvSpark: # CPointEntity
    m_flDelay = 0x7A8 # float
    m_nMagnitude = 0x7AC # int32_t
    m_nTrailLength = 0x7B0 # int32_t
    m_nType = 0x7B4 # int32_t
    m_OnSpark = 0x7B8 # CEntityIOOutput

class CEnvSplash: # CPointEntity
    m_flScale = 0x7A8 # float

class CEnvTilt: # CPointEntity
    m_Duration = 0x7A8 # float
    m_Radius = 0x7AC # float
    m_TiltTime = 0x7B0 # float
    m_stopTime = 0x7B4 # GameTime_t

class CEnvTracer: # CPointEntity
    m_vecEnd = 0x7A8 # Vector
    m_flDelay = 0x7B4 # float

class CEnvViewPunch: # CPointEntity
    m_flRadius = 0x7A8 # float
    m_angViewPunch = 0x7AC # QAngle

class CEnvVolumetricFogController: # CBaseEntity
    m_flScattering = 0x7A8 # float
    m_flAnisotropy = 0x7AC # float
    m_flFadeSpeed = 0x7B0 # float
    m_flDrawDistance = 0x7B4 # float
    m_flFadeInStart = 0x7B8 # float
    m_flFadeInEnd = 0x7BC # float
    m_flIndirectStrength = 0x7C0 # float
    m_nIndirectTextureDimX = 0x7C4 # int32_t
    m_nIndirectTextureDimY = 0x7C8 # int32_t
    m_nIndirectTextureDimZ = 0x7CC # int32_t
    m_vBoxMins = 0x7D0 # Vector
    m_vBoxMaxs = 0x7DC # Vector
    m_bActive = 0x7E8 # bool
    m_flStartAnisoTime = 0x7EC # GameTime_t
    m_flStartScatterTime = 0x7F0 # GameTime_t
    m_flStartDrawDistanceTime = 0x7F4 # GameTime_t
    m_flStartAnisotropy = 0x7F8 # float
    m_flStartScattering = 0x7FC # float
    m_flStartDrawDistance = 0x800 # float
    m_flDefaultAnisotropy = 0x804 # float
    m_flDefaultScattering = 0x808 # float
    m_flDefaultDrawDistance = 0x80C # float
    m_bStartDisabled = 0x810 # bool
    m_bEnableIndirect = 0x811 # bool
    m_bIsMaster = 0x812 # bool
    m_hFogIndirectTexture = 0x818 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_nForceRefreshCount = 0x820 # int32_t
    m_bFirstTime = 0x824 # bool

class CEnvVolumetricFogVolume: # CBaseEntity
    m_bActive = 0x7A8 # bool
    m_vBoxMins = 0x7AC # Vector
    m_vBoxMaxs = 0x7B8 # Vector
    m_bStartDisabled = 0x7C4 # bool
    m_flStrength = 0x7C8 # float
    m_nFalloffShape = 0x7CC # int32_t
    m_flFalloffExponent = 0x7D0 # float

class CEnvWind: # CBaseEntity
    m_EnvWindShared = 0x7A8 # CEnvWindShared

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
    m_sAttributeName = 0x800 # CUtlStringToken

class CFilterClass: # CBaseFilter
    m_iFilterClass = 0x800 # CUtlSymbolLarge

class CFilterContext: # CBaseFilter
    m_iFilterContext = 0x800 # CUtlSymbolLarge

class CFilterEnemy: # CBaseFilter
    m_iszEnemyName = 0x800 # CUtlSymbolLarge
    m_flRadius = 0x808 # float
    m_flOuterRadius = 0x80C # float
    m_nMaxSquadmatesPerEnemy = 0x810 # int32_t
    m_iszPlayerName = 0x818 # CUtlSymbolLarge

class CFilterLOS: # CBaseFilter

class CFilterMassGreater: # CBaseFilter
    m_fFilterMass = 0x800 # float

class CFilterModel: # CBaseFilter
    m_iFilterModel = 0x800 # CUtlSymbolLarge

class CFilterMultiple: # CBaseFilter
    m_nFilterType = 0x800 # filter_t
    m_iFilterName = 0x808 # CUtlSymbolLarge[10]
    m_hFilter = 0x858 # CHandle<CBaseEntity>[10]
    m_nFilterCount = 0x880 # int32_t

class CFilterName: # CBaseFilter
    m_iFilterName = 0x800 # CUtlSymbolLarge

class CFilterProximity: # CBaseFilter
    m_flRadius = 0x800 # float

class CFire: # CBaseModelEntity
    m_hEffect = 0x9F8 # CHandle<CBaseFire>
    m_hOwner = 0x9FC # CHandle<CBaseEntity>
    m_nFireType = 0xA00 # int32_t
    m_flFuel = 0xA04 # float
    m_flDamageTime = 0xA08 # GameTime_t
    m_lastDamage = 0xA0C # GameTime_t
    m_flFireSize = 0xA10 # float
    m_flLastNavUpdateTime = 0xA14 # GameTime_t
    m_flHeatLevel = 0xA18 # float
    m_flHeatAbsorb = 0xA1C # float
    m_flDamageScale = 0xA20 # float
    m_flMaxHeat = 0xA24 # float
    m_flLastHeatLevel = 0xA28 # float
    m_flAttackTime = 0xA2C # float
    m_bEnabled = 0xA30 # bool
    m_bStartDisabled = 0xA31 # bool
    m_bDidActivate = 0xA32 # bool
    m_OnIgnited = 0xA38 # CEntityIOOutput
    m_OnExtinguished = 0xA60 # CEntityIOOutput

class CFireCrackerBlast: # CInferno

class CFireSmoke: # CBaseFire
    m_nFlameModelIndex = 0x7B8 # int32_t
    m_nFlameFromAboveModelIndex = 0x7BC # int32_t

class CFiringModeFloat:
    m_flValues = 0x0 # float[2]

class CFiringModeInt:
    m_nValues = 0x0 # int32_t[2]

class CFish: # CBaseAnimGraph
    m_pool = 0xBF0 # CHandle<CFishPool>
    m_id = 0xBF4 # uint32_t
    m_x = 0xBF8 # float
    m_y = 0xBFC # float
    m_z = 0xC00 # float
    m_angle = 0xC04 # float
    m_angleChange = 0xC08 # float
    m_forward = 0xC0C # Vector
    m_perp = 0xC18 # Vector
    m_poolOrigin = 0xC24 # Vector
    m_waterLevel = 0xC30 # float
    m_speed = 0xC34 # float
    m_desiredSpeed = 0xC38 # float
    m_calmSpeed = 0xC3C # float
    m_panicSpeed = 0xC40 # float
    m_avoidRange = 0xC44 # float
    m_turnTimer = 0xC48 # CountdownTimer
    m_turnClockwise = 0xC60 # bool
    m_goTimer = 0xC68 # CountdownTimer
    m_moveTimer = 0xC80 # CountdownTimer
    m_panicTimer = 0xC98 # CountdownTimer
    m_disperseTimer = 0xCB0 # CountdownTimer
    m_proximityTimer = 0xCC8 # CountdownTimer
    m_visible = 0xCE0 # CUtlVector<CFish*>

class CFishPool: # CBaseEntity
    m_fishCount = 0x7B4 # int32_t
    m_maxRange = 0x7B8 # float
    m_swimDepth = 0x7BC # float
    m_waterLevel = 0x7C0 # float
    m_isDormant = 0x7C4 # bool
    m_fishes = 0x7C8 # CUtlVector<CHandle<CFish>>
    m_visTimer = 0x7E0 # CountdownTimer

class CFists: # CCSWeaponBase
    m_bPlayingUninterruptableAct = 0x1198 # bool
    m_nUninterruptableActivity = 0x119C # PlayerAnimEvent_t
    m_bRestorePrevWep = 0x11A0 # bool
    m_hWeaponBeforePrevious = 0x11A4 # CHandle<CBasePlayerWeapon>
    m_hWeaponPrevious = 0x11A8 # CHandle<CBasePlayerWeapon>
    m_bDelayedHardPunchIncoming = 0x11AC # bool
    m_bDestroyAfterTaunt = 0x11AD # bool

class CFlashbang: # CBaseCSGrenade

class CFlashbangProjectile: # CBaseCSGrenadeProjectile
    m_flTimeToDetonate = 0xD98 # float
    m_numOpponentsHit = 0xD9C # uint8_t
    m_numTeammatesHit = 0xD9D # uint8_t

class CFogController: # CBaseEntity
    m_fog = 0x7A8 # fogparams_t
    m_bUseAngles = 0x810 # bool
    m_iChangedVariables = 0x814 # int32_t

class CFogTrigger: # CBaseTrigger
    m_fog = 0xBA0 # fogparams_t

class CFogVolume: # CServerOnlyModelEntity
    m_fogName = 0x9F8 # CUtlSymbolLarge
    m_postProcessName = 0xA00 # CUtlSymbolLarge
    m_colorCorrectionName = 0xA08 # CUtlSymbolLarge
    m_bDisabled = 0xA18 # bool
    m_bInFogVolumesList = 0xA19 # bool

class CFootstepControl: # CBaseTrigger
    m_source = 0xBA0 # CUtlSymbolLarge
    m_destination = 0xBA8 # CUtlSymbolLarge

class CFootstepTableHandle:

class CFuncBrush: # CBaseModelEntity
    m_iSolidity = 0x9F8 # BrushSolidities_e
    m_iDisabled = 0x9FC # int32_t
    m_bSolidBsp = 0xA00 # bool
    m_iszExcludedClass = 0xA08 # CUtlSymbolLarge
    m_bInvertExclusion = 0xA10 # bool
    m_bScriptedMovement = 0xA11 # bool

class CFuncConveyor: # CBaseModelEntity
    m_szConveyorModels = 0x9F8 # CUtlSymbolLarge
    m_flTransitionDurationSeconds = 0xA00 # float
    m_angMoveEntitySpace = 0xA04 # QAngle
    m_vecMoveDirEntitySpace = 0xA10 # Vector
    m_flTargetSpeed = 0xA1C # float
    m_nTransitionStartTick = 0xA20 # GameTick_t
    m_nTransitionDurationTicks = 0xA24 # int32_t
    m_flTransitionStartSpeed = 0xA28 # float
    m_hConveyorModels = 0xA30 # CNetworkUtlVectorBase<CHandle<CBaseEntity>>

class CFuncElectrifiedVolume: # CFuncBrush
    m_EffectName = 0xA18 # CUtlSymbolLarge
    m_EffectInterpenetrateName = 0xA20 # CUtlSymbolLarge
    m_EffectZapName = 0xA28 # CUtlSymbolLarge
    m_iszEffectSource = 0xA30 # CUtlSymbolLarge

class CFuncIllusionary: # CBaseModelEntity

class CFuncInteractionLayerClip: # CBaseModelEntity
    m_bDisabled = 0x9F8 # bool
    m_iszInteractsAs = 0xA00 # CUtlSymbolLarge
    m_iszInteractsWith = 0xA08 # CUtlSymbolLarge

class CFuncLadder: # CBaseModelEntity
    m_vecLadderDir = 0x9F8 # Vector
    m_Dismounts = 0xA08 # CUtlVector<CHandle<CInfoLadderDismount>>
    m_vecLocalTop = 0xA20 # Vector
    m_vecPlayerMountPositionTop = 0xA2C # Vector
    m_vecPlayerMountPositionBottom = 0xA38 # Vector
    m_flAutoRideSpeed = 0xA44 # float
    m_bDisabled = 0xA48 # bool
    m_bFakeLadder = 0xA49 # bool
    m_bHasSlack = 0xA4A # bool
    m_surfacePropName = 0xA50 # CUtlSymbolLarge
    m_OnPlayerGotOnLadder = 0xA58 # CEntityIOOutput
    m_OnPlayerGotOffLadder = 0xA80 # CEntityIOOutput

class CFuncLadderAlias_func_useableladder: # CFuncLadder

class CFuncMonitor: # CFuncBrush
    m_targetCamera = 0xA18 # CUtlString
    m_nResolutionEnum = 0xA20 # int32_t
    m_bRenderShadows = 0xA24 # bool
    m_bUseUniqueColorTarget = 0xA25 # bool
    m_brushModelName = 0xA28 # CUtlString
    m_hTargetCamera = 0xA30 # CHandle<CBaseEntity>
    m_bEnabled = 0xA34 # bool
    m_bDraw3DSkybox = 0xA35 # bool
    m_bStartEnabled = 0xA36 # bool

class CFuncMoveLinear: # CBaseToggle
    m_authoredPosition = 0xA78 # MoveLinearAuthoredPos_t
    m_angMoveEntitySpace = 0xA7C # QAngle
    m_vecMoveDirParentSpace = 0xA88 # Vector
    m_soundStart = 0xA98 # CUtlSymbolLarge
    m_soundStop = 0xAA0 # CUtlSymbolLarge
    m_currentSound = 0xAA8 # CUtlSymbolLarge
    m_flBlockDamage = 0xAB0 # float
    m_flStartPosition = 0xAB4 # float
    m_flMoveDistance = 0xAB8 # float
    m_OnFullyOpen = 0xAC8 # CEntityIOOutput
    m_OnFullyClosed = 0xAF0 # CEntityIOOutput
    m_bCreateMovableNavMesh = 0xB18 # bool
    m_bCreateNavObstacle = 0xB19 # bool

class CFuncMoveLinearAlias_momentary_door: # CFuncMoveLinear

class CFuncNavBlocker: # CBaseModelEntity
    m_bDisabled = 0x9F8 # bool
    m_nBlockedTeamNumber = 0x9FC # int32_t

class CFuncNavObstruction: # CBaseModelEntity
    m_bDisabled = 0xA00 # bool

class CFuncPlat: # CBasePlatTrain
    m_sNoise = 0xAA0 # CUtlSymbolLarge

class CFuncPlatRot: # CFuncPlat
    m_end = 0xAA8 # QAngle
    m_start = 0xAB4 # QAngle

class CFuncPropRespawnZone: # CBaseEntity

class CFuncRotating: # CBaseModelEntity
    m_OnStopped = 0x9F8 # CEntityIOOutput
    m_OnStarted = 0xA20 # CEntityIOOutput
    m_OnReachedStart = 0xA48 # CEntityIOOutput
    m_localRotationVector = 0xA70 # RotationVector
    m_flFanFriction = 0xA7C # float
    m_flAttenuation = 0xA80 # float
    m_flVolume = 0xA84 # float
    m_flTargetSpeed = 0xA88 # float
    m_flMaxSpeed = 0xA8C # float
    m_flBlockDamage = 0xA90 # float
    m_flTimeScale = 0xA94 # float
    m_NoiseRunning = 0xA98 # CUtlSymbolLarge
    m_bReversed = 0xAA0 # bool
    m_bAccelDecel = 0xAA1 # bool
    m_prevLocalAngles = 0xAAC # QAngle
    m_angStart = 0xAB8 # QAngle
    m_bStopAtStartPos = 0xAC4 # bool
    m_vecClientOrigin = 0xAC8 # Vector
    m_vecClientAngles = 0xAD4 # QAngle

class CFuncShatterglass: # CBaseModelEntity
    m_hGlassMaterialDamaged = 0x9F8 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_hGlassMaterialUndamaged = 0xA00 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_hConcreteMaterialEdgeFace = 0xA08 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_hConcreteMaterialEdgeCaps = 0xA10 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_hConcreteMaterialEdgeFins = 0xA18 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_matPanelTransform = 0xA20 # matrix3x4_t
    m_matPanelTransformWsTemp = 0xA50 # matrix3x4_t
    m_vecShatterGlassShards = 0xA80 # CUtlVector<uint32_t>
    m_PanelSize = 0xA98 # Vector2D
    m_vecPanelNormalWs = 0xAA0 # Vector
    m_nNumShardsEverCreated = 0xAAC # int32_t
    m_flLastShatterSoundEmitTime = 0xAB0 # GameTime_t
    m_flLastCleanupTime = 0xAB4 # GameTime_t
    m_flInitAtTime = 0xAB8 # GameTime_t
    m_flGlassThickness = 0xABC # float
    m_flSpawnInvulnerability = 0xAC0 # float
    m_bBreakSilent = 0xAC4 # bool
    m_bBreakShardless = 0xAC5 # bool
    m_bBroken = 0xAC6 # bool
    m_bHasRateLimitedShards = 0xAC7 # bool
    m_bGlassNavIgnore = 0xAC8 # bool
    m_bGlassInFrame = 0xAC9 # bool
    m_bStartBroken = 0xACA # bool
    m_iInitialDamageType = 0xACB # uint8_t
    m_szDamagePositioningEntityName01 = 0xAD0 # CUtlSymbolLarge
    m_szDamagePositioningEntityName02 = 0xAD8 # CUtlSymbolLarge
    m_szDamagePositioningEntityName03 = 0xAE0 # CUtlSymbolLarge
    m_szDamagePositioningEntityName04 = 0xAE8 # CUtlSymbolLarge
    m_vInitialDamagePositions = 0xAF0 # CUtlVector<Vector>
    m_vExtraDamagePositions = 0xB08 # CUtlVector<Vector>
    m_OnBroken = 0xB20 # CEntityIOOutput
    m_iSurfaceType = 0xB49 # uint8_t

class CFuncTankTrain: # CFuncTrackTrain
    m_OnDeath = 0xB48 # CEntityIOOutput

class CFuncTimescale: # CBaseEntity
    m_flDesiredTimescale = 0x7A8 # float
    m_flAcceleration = 0x7AC # float
    m_flMinBlendRate = 0x7B0 # float
    m_flBlendDeltaMultiplier = 0x7B4 # float
    m_isStarted = 0x7B8 # bool

class CFuncTrackAuto: # CFuncTrackChange

class CFuncTrackChange: # CFuncPlatRot
    m_trackTop = 0xAC0 # CPathTrack*
    m_trackBottom = 0xAC8 # CPathTrack*
    m_train = 0xAD0 # CFuncTrackTrain*
    m_trackTopName = 0xAD8 # CUtlSymbolLarge
    m_trackBottomName = 0xAE0 # CUtlSymbolLarge
    m_trainName = 0xAE8 # CUtlSymbolLarge
    m_code = 0xAF0 # TRAIN_CODE
    m_targetState = 0xAF4 # int32_t
    m_use = 0xAF8 # int32_t

class CFuncTrackTrain: # CBaseModelEntity
    m_ppath = 0x9F8 # CHandle<CPathTrack>
    m_length = 0x9FC # float
    m_vPosPrev = 0xA00 # Vector
    m_angPrev = 0xA0C # QAngle
    m_controlMins = 0xA18 # Vector
    m_controlMaxs = 0xA24 # Vector
    m_lastBlockPos = 0xA30 # Vector
    m_lastBlockTick = 0xA3C # int32_t
    m_flVolume = 0xA40 # float
    m_flBank = 0xA44 # float
    m_oldSpeed = 0xA48 # float
    m_flBlockDamage = 0xA4C # float
    m_height = 0xA50 # float
    m_maxSpeed = 0xA54 # float
    m_dir = 0xA58 # float
    m_iszSoundMove = 0xA60 # CUtlSymbolLarge
    m_iszSoundMovePing = 0xA68 # CUtlSymbolLarge
    m_iszSoundStart = 0xA70 # CUtlSymbolLarge
    m_iszSoundStop = 0xA78 # CUtlSymbolLarge
    m_strPathTarget = 0xA80 # CUtlSymbolLarge
    m_flMoveSoundMinDuration = 0xA88 # float
    m_flMoveSoundMaxDuration = 0xA8C # float
    m_flNextMoveSoundTime = 0xA90 # GameTime_t
    m_flMoveSoundMinPitch = 0xA94 # float
    m_flMoveSoundMaxPitch = 0xA98 # float
    m_eOrientationType = 0xA9C # TrainOrientationType_t
    m_eVelocityType = 0xAA0 # TrainVelocityType_t
    m_OnStart = 0xAB0 # CEntityIOOutput
    m_OnNext = 0xAD8 # CEntityIOOutput
    m_OnArrivedAtDestinationNode = 0xB00 # CEntityIOOutput
    m_bManualSpeedChanges = 0xB28 # bool
    m_flDesiredSpeed = 0xB2C # float
    m_flSpeedChangeTime = 0xB30 # GameTime_t
    m_flAccelSpeed = 0xB34 # float
    m_flDecelSpeed = 0xB38 # float
    m_bAccelToSpeed = 0xB3C # bool
    m_flTimeScale = 0xB40 # float
    m_flNextMPSoundTime = 0xB44 # GameTime_t

class CFuncTrain: # CBasePlatTrain
    m_hCurrentTarget = 0xA9C # CHandle<CBaseEntity>
    m_activated = 0xAA0 # bool
    m_hEnemy = 0xAA4 # CHandle<CBaseEntity>
    m_flBlockDamage = 0xAA8 # float
    m_flNextBlockTime = 0xAAC # GameTime_t
    m_iszLastTarget = 0xAB0 # CUtlSymbolLarge

class CFuncTrainControls: # CBaseModelEntity

class CFuncVPhysicsClip: # CBaseModelEntity
    m_bDisabled = 0x9F8 # bool

class CFuncVehicleClip: # CBaseModelEntity

class CFuncWall: # CBaseModelEntity
    m_nState = 0x9F8 # int32_t

class CFuncWallToggle: # CFuncWall

class CFuncWater: # CBaseModelEntity
    m_BuoyancyHelper = 0x9F8 # CBuoyancyHelper

class CGameChoreoServices: # IChoreoServices
    m_hOwner = 0x8 # CHandle<CBaseAnimGraph>
    m_hScriptedSequence = 0xC # CHandle<CScriptedSequence>
    m_scriptState = 0x10 # IChoreoServices::ScriptState_t
    m_choreoState = 0x14 # IChoreoServices::ChoreoState_t
    m_flTimeStartedState = 0x18 # GameTime_t

class CGameEnd: # CRulePointEntity

class CGameGibManager: # CBaseEntity
    m_bAllowNewGibs = 0x7C8 # bool
    m_iCurrentMaxPieces = 0x7CC # int32_t
    m_iMaxPieces = 0x7D0 # int32_t
    m_iLastFrame = 0x7D4 # int32_t

class CGameMoney: # CRulePointEntity
    m_OnMoneySpent = 0xA08 # CEntityIOOutput
    m_OnMoneySpentFail = 0xA30 # CEntityIOOutput
    m_nMoney = 0xA58 # int32_t
    m_strAwardText = 0xA60 # CUtlString

class CGamePlayerEquip: # CRulePointEntity

class CGamePlayerZone: # CRuleBrushEntity
    m_OnPlayerInZone = 0xA00 # CEntityIOOutput
    m_OnPlayerOutZone = 0xA28 # CEntityIOOutput
    m_PlayersInCount = 0xA50 # CEntityOutputTemplate<int32_t>
    m_PlayersOutCount = 0xA78 # CEntityOutputTemplate<int32_t>

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
    m_hierarchyAttachName = 0x140 # CUtlStringToken
    m_flZOffset = 0x144 # float
    m_vRenderOrigin = 0x148 # Vector

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
    m_iszMessage = 0xA08 # CUtlSymbolLarge
    m_textParms = 0xA10 # hudtextparms_t

class CGenericConstraint: # CPhysConstraint
    m_nLinearMotionX = 0x808 # JointMotion_t
    m_nLinearMotionY = 0x80C # JointMotion_t
    m_nLinearMotionZ = 0x810 # JointMotion_t
    m_flLinearFrequencyX = 0x814 # float
    m_flLinearFrequencyY = 0x818 # float
    m_flLinearFrequencyZ = 0x81C # float
    m_flLinearDampingRatioX = 0x820 # float
    m_flLinearDampingRatioY = 0x824 # float
    m_flLinearDampingRatioZ = 0x828 # float
    m_flMaxLinearImpulseX = 0x82C # float
    m_flMaxLinearImpulseY = 0x830 # float
    m_flMaxLinearImpulseZ = 0x834 # float
    m_flBreakAfterTimeX = 0x838 # float
    m_flBreakAfterTimeY = 0x83C # float
    m_flBreakAfterTimeZ = 0x840 # float
    m_flBreakAfterTimeStartTimeX = 0x844 # GameTime_t
    m_flBreakAfterTimeStartTimeY = 0x848 # GameTime_t
    m_flBreakAfterTimeStartTimeZ = 0x84C # GameTime_t
    m_flBreakAfterTimeThresholdX = 0x850 # float
    m_flBreakAfterTimeThresholdY = 0x854 # float
    m_flBreakAfterTimeThresholdZ = 0x858 # float
    m_flNotifyForceX = 0x85C # float
    m_flNotifyForceY = 0x860 # float
    m_flNotifyForceZ = 0x864 # float
    m_flNotifyForceMinTimeX = 0x868 # float
    m_flNotifyForceMinTimeY = 0x86C # float
    m_flNotifyForceMinTimeZ = 0x870 # float
    m_flNotifyForceLastTimeX = 0x874 # GameTime_t
    m_flNotifyForceLastTimeY = 0x878 # GameTime_t
    m_flNotifyForceLastTimeZ = 0x87C # GameTime_t
    m_bAxisNotifiedX = 0x880 # bool
    m_bAxisNotifiedY = 0x881 # bool
    m_bAxisNotifiedZ = 0x882 # bool
    m_nAngularMotionX = 0x884 # JointMotion_t
    m_nAngularMotionY = 0x888 # JointMotion_t
    m_nAngularMotionZ = 0x88C # JointMotion_t
    m_flAngularFrequencyX = 0x890 # float
    m_flAngularFrequencyY = 0x894 # float
    m_flAngularFrequencyZ = 0x898 # float
    m_flAngularDampingRatioX = 0x89C # float
    m_flAngularDampingRatioY = 0x8A0 # float
    m_flAngularDampingRatioZ = 0x8A4 # float
    m_flMaxAngularImpulseX = 0x8A8 # float
    m_flMaxAngularImpulseY = 0x8AC # float
    m_flMaxAngularImpulseZ = 0x8B0 # float
    m_NotifyForceReachedX = 0x8B8 # CEntityIOOutput
    m_NotifyForceReachedY = 0x8E0 # CEntityIOOutput
    m_NotifyForceReachedZ = 0x908 # CEntityIOOutput

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
    m_hGradientFogTexture = 0x7A8 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_flFogStartDistance = 0x7B0 # float
    m_flFogEndDistance = 0x7B4 # float
    m_bHeightFogEnabled = 0x7B8 # bool
    m_flFogStartHeight = 0x7BC # float
    m_flFogEndHeight = 0x7C0 # float
    m_flFarZ = 0x7C4 # float
    m_flFogMaxOpacity = 0x7C8 # float
    m_flFogFalloffExponent = 0x7CC # float
    m_flFogVerticalExponent = 0x7D0 # float
    m_fogColor = 0x7D4 # Color
    m_flFogStrength = 0x7D8 # float
    m_flFadeTime = 0x7DC # float
    m_bStartDisabled = 0x7E0 # bool
    m_bIsEnabled = 0x7E1 # bool
    m_bGradientFogNeedsTextures = 0x7E2 # bool

class CGunTarget: # CBaseToggle
    m_on = 0xA78 # bool
    m_hTargetEnt = 0xA7C # CHandle<CBaseEntity>
    m_OnDeath = 0xA80 # CEntityIOOutput

class CHEGrenade: # CBaseCSGrenade

class CHEGrenadeProjectile: # CBaseCSGrenadeProjectile

class CHandleDummy: # CBaseEntity

class CHandleTest: # CBaseEntity
    m_Handle = 0x7A8 # CHandle<CBaseEntity>
    m_bSendHandle = 0x7AC # bool

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
    m_OnHostageBeginGrab = 0xD30 # CEntityIOOutput
    m_OnFirstPickedUp = 0xD58 # CEntityIOOutput
    m_OnDroppedNotRescued = 0xD80 # CEntityIOOutput
    m_OnRescued = 0xDA8 # CEntityIOOutput
    m_entitySpottedState = 0xDD0 # EntitySpottedState_t
    m_nSpotRules = 0xDE8 # int32_t
    m_uiHostageSpawnExclusionGroupMask = 0xDEC # uint32_t
    m_nHostageSpawnRandomFactor = 0xDF0 # uint32_t
    m_bRemove = 0xDF4 # bool
    m_vel = 0xDF8 # Vector
    m_isRescued = 0xE04 # bool
    m_jumpedThisFrame = 0xE05 # bool
    m_nHostageState = 0xE08 # int32_t
    m_leader = 0xE0C # CHandle<CBaseEntity>
    m_lastLeader = 0xE10 # CHandle<CCSPlayerPawnBase>
    m_reuseTimer = 0xE18 # CountdownTimer
    m_hasBeenUsed = 0xE30 # bool
    m_accel = 0xE34 # Vector
    m_isRunning = 0xE40 # bool
    m_isCrouching = 0xE41 # bool
    m_jumpTimer = 0xE48 # CountdownTimer
    m_isWaitingForLeader = 0xE60 # bool
    m_repathTimer = 0x2E70 # CountdownTimer
    m_inhibitDoorTimer = 0x2E88 # CountdownTimer
    m_inhibitObstacleAvoidanceTimer = 0x2F18 # CountdownTimer
    m_wiggleTimer = 0x2F38 # CountdownTimer
    m_isAdjusted = 0x2F54 # bool
    m_bHandsHaveBeenCut = 0x2F55 # bool
    m_hHostageGrabber = 0x2F58 # CHandle<CCSPlayerPawn>
    m_fLastGrabTime = 0x2F5C # GameTime_t
    m_vecPositionWhenStartedDroppingToGround = 0x2F60 # Vector
    m_vecGrabbedPos = 0x2F6C # Vector
    m_flRescueStartTime = 0x2F78 # GameTime_t
    m_flGrabSuccessTime = 0x2F7C # GameTime_t
    m_flDropStartTime = 0x2F80 # GameTime_t
    m_nApproachRewardPayouts = 0x2F84 # int32_t
    m_nPickupEventCount = 0x2F88 # int32_t
    m_vecSpawnGroundPos = 0x2F8C # Vector
    m_vecHostageResetPosition = 0x2FAC # Vector

class CHostageAlias_info_hostage_spawn: # CHostage

class CHostageCarriableProp: # CBaseAnimGraph

class CHostageExpresserShim: # CBaseCombatCharacter
    m_pExpresser = 0xD18 # CAI_Expresser*

class CHostageRescueZone: # CHostageRescueZoneShim

class CHostageRescueZoneShim: # CBaseTrigger

class CInButtonState:
    m_pButtonStates = 0x8 # uint64_t[3]

class CIncendiaryGrenade: # CMolotovGrenade

class CInferno: # CBaseModelEntity
    m_firePositions = 0xA04 # Vector[64]
    m_fireParentPositions = 0xD04 # Vector[64]
    m_bFireIsBurning = 0x1004 # bool[64]
    m_BurnNormal = 0x1044 # Vector[64]
    m_fireCount = 0x1344 # int32_t
    m_nInfernoType = 0x1348 # int32_t
    m_nFireEffectTickBegin = 0x134C # int32_t
    m_nFireLifetime = 0x1350 # float
    m_bInPostEffectTime = 0x1354 # bool
    m_nFiresExtinguishCount = 0x1358 # int32_t
    m_bWasCreatedInSmoke = 0x135C # bool
    m_extent = 0x1560 # Extent
    m_damageTimer = 0x1578 # CountdownTimer
    m_damageRampTimer = 0x1590 # CountdownTimer
    m_splashVelocity = 0x15A8 # Vector
    m_InitialSplashVelocity = 0x15B4 # Vector
    m_startPos = 0x15C0 # Vector
    m_vecOriginalSpawnLocation = 0x15CC # Vector
    m_activeTimer = 0x15D8 # IntervalTimer
    m_fireSpawnOffset = 0x15E8 # int32_t
    m_nMaxFlames = 0x15EC # int32_t
    m_nSpreadCount = 0x15F0 # int32_t
    m_BookkeepingTimer = 0x15F8 # CountdownTimer
    m_NextSpreadTimer = 0x1610 # CountdownTimer
    m_nSourceItemDefIndex = 0x1628 # uint16_t

class CInfoData: # CServerOnlyEntity

class CInfoDeathmatchSpawn: # SpawnPoint

class CInfoDynamicShadowHint: # CPointEntity
    m_bDisabled = 0x7A8 # bool
    m_flRange = 0x7AC # float
    m_nImportance = 0x7B0 # int32_t
    m_nLightChoice = 0x7B4 # int32_t
    m_hLight = 0x7B8 # CHandle<CBaseEntity>

class CInfoDynamicShadowHintBox: # CInfoDynamicShadowHint
    m_vBoxMins = 0x7BC # Vector
    m_vBoxMaxs = 0x7C8 # Vector

class CInfoEnemyTerroristSpawn: # SpawnPointCoopEnemy

class CInfoGameEventProxy: # CPointEntity
    m_iszEventName = 0x7A8 # CUtlSymbolLarge
    m_flRange = 0x7B0 # float

class CInfoInstructorHintBombTargetA: # CPointEntity

class CInfoInstructorHintBombTargetB: # CPointEntity

class CInfoInstructorHintHostageRescueZone: # CPointEntity

class CInfoInstructorHintTarget: # CPointEntity

class CInfoLadderDismount: # CBaseEntity

class CInfoLandmark: # CPointEntity

class CInfoOffscreenPanoramaTexture: # CPointEntity
    m_bDisabled = 0x7A8 # bool
    m_nResolutionX = 0x7AC # int32_t
    m_nResolutionY = 0x7B0 # int32_t
    m_szLayoutFileName = 0x7B8 # CUtlSymbolLarge
    m_RenderAttrName = 0x7C0 # CUtlSymbolLarge
    m_TargetEntities = 0x7C8 # CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    m_nTargetChangeCount = 0x7E0 # int32_t
    m_vecCSSClasses = 0x7E8 # CNetworkUtlVectorBase<CUtlSymbolLarge>
    m_szTargetsName = 0x800 # CUtlSymbolLarge
    m_AdditionalTargetEntities = 0x808 # CUtlVector<CHandle<CBaseModelEntity>>

class CInfoParticleTarget: # CPointEntity

class CInfoPlayerCounterterrorist: # SpawnPoint

class CInfoPlayerStart: # CPointEntity
    m_bDisabled = 0x7A8 # bool

class CInfoPlayerTerrorist: # SpawnPoint

class CInfoSpawnGroupLandmark: # CPointEntity

class CInfoSpawnGroupLoadUnload: # CLogicalEntity
    m_OnSpawnGroupLoadStarted = 0x7A8 # CEntityIOOutput
    m_OnSpawnGroupLoadFinished = 0x7D0 # CEntityIOOutput
    m_OnSpawnGroupUnloadStarted = 0x7F8 # CEntityIOOutput
    m_OnSpawnGroupUnloadFinished = 0x820 # CEntityIOOutput
    m_iszSpawnGroupName = 0x848 # CUtlSymbolLarge
    m_iszSpawnGroupFilterName = 0x850 # CUtlSymbolLarge
    m_iszLandmarkName = 0x858 # CUtlSymbolLarge
    m_sFixedSpawnGroupName = 0x860 # CUtlString
    m_flTimeoutInterval = 0x868 # float
    m_bStreamingStarted = 0x86C # bool
    m_bUnloadingStarted = 0x86D # bool

class CInfoTarget: # CPointEntity

class CInfoTargetServerOnly: # CServerOnlyPointEntity

class CInfoTeleportDestination: # CPointEntity

class CInfoVisibilityBox: # CBaseEntity
    m_nMode = 0x7AC # int32_t
    m_vBoxSize = 0x7B0 # Vector
    m_bEnabled = 0x7BC # bool

class CInfoWorldLayer: # CBaseEntity
    m_pOutputOnEntitiesSpawned = 0x7A8 # CEntityIOOutput
    m_worldName = 0x7D0 # CUtlSymbolLarge
    m_layerName = 0x7D8 # CUtlSymbolLarge
    m_bWorldLayerVisible = 0x7E0 # bool
    m_bEntitiesSpawned = 0x7E1 # bool
    m_bCreateAsChildSpawnGroup = 0x7E2 # bool
    m_hLayerSpawnGroup = 0x7E4 # uint32_t

class CInstancedSceneEntity: # CSceneEntity
    m_hOwner = 0xD00 # CHandle<CBaseEntity>
    m_bHadOwner = 0xD04 # bool
    m_flPostSpeakDelay = 0xD08 # float
    m_flPreDelay = 0xD0C # float
    m_bIsBackground = 0xD10 # bool
    m_bRemoveOnCompletion = 0xD11 # bool
    m_hTarget = 0xD14 # CHandle<CBaseEntity>

class CInstructorEventEntity: # CPointEntity
    m_iszName = 0x7A8 # CUtlSymbolLarge
    m_iszHintTargetEntity = 0x7B0 # CUtlSymbolLarge
    m_hTargetPlayer = 0x7B8 # CHandle<CBasePlayerPawn>

class CIronSightController:
    m_bIronSightAvailable = 0x8 # bool
    m_flIronSightAmount = 0xC # float
    m_flIronSightAmountGained = 0x10 # float
    m_flIronSightAmountBiased = 0x14 # float

class CItem: # CBaseAnimGraph
    m_OnPlayerTouch = 0xBF8 # CEntityIOOutput
    m_bActivateWhenAtRest = 0xC20 # bool
    m_OnCacheInteraction = 0xC28 # CEntityIOOutput
    m_OnPlayerPickup = 0xC50 # CEntityIOOutput
    m_OnGlovePulled = 0xC78 # CEntityIOOutput
    m_vOriginalSpawnOrigin = 0xCA0 # Vector
    m_vOriginalSpawnAngles = 0xCAC # QAngle
    m_bPhysStartAsleep = 0xCB8 # bool

class CItemAssaultSuit: # CItem

class CItemDefuser: # CItem
    m_entitySpottedState = 0xCC8 # EntitySpottedState_t
    m_nSpotRules = 0xCE0 # int32_t

class CItemDefuserAlias_item_defuser: # CItemDefuser

class CItemDogtags: # CItem
    m_OwningPlayer = 0xCC8 # CHandle<CCSPlayerPawn>
    m_KillingPlayer = 0xCCC # CHandle<CCSPlayerPawn>

class CItemGeneric: # CItem
    m_bHasTriggerRadius = 0xCD0 # bool
    m_bHasPickupRadius = 0xCD1 # bool
    m_flPickupRadiusSqr = 0xCD4 # float
    m_flTriggerRadiusSqr = 0xCD8 # float
    m_flLastPickupCheck = 0xCDC # GameTime_t
    m_bPlayerCounterListenerAdded = 0xCE0 # bool
    m_bPlayerInTriggerRadius = 0xCE1 # bool
    m_hSpawnParticleEffect = 0xCE8 # CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_pAmbientSoundEffect = 0xCF0 # CUtlSymbolLarge
    m_bAutoStartAmbientSound = 0xCF8 # bool
    m_pSpawnScriptFunction = 0xD00 # CUtlSymbolLarge
    m_hPickupParticleEffect = 0xD08 # CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_pPickupSoundEffect = 0xD10 # CUtlSymbolLarge
    m_pPickupScriptFunction = 0xD18 # CUtlSymbolLarge
    m_hTimeoutParticleEffect = 0xD20 # CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_pTimeoutSoundEffect = 0xD28 # CUtlSymbolLarge
    m_pTimeoutScriptFunction = 0xD30 # CUtlSymbolLarge
    m_pPickupFilterName = 0xD38 # CUtlSymbolLarge
    m_hPickupFilter = 0xD40 # CHandle<CBaseFilter>
    m_OnPickup = 0xD48 # CEntityIOOutput
    m_OnTimeout = 0xD70 # CEntityIOOutput
    m_OnTriggerStartTouch = 0xD98 # CEntityIOOutput
    m_OnTriggerTouch = 0xDC0 # CEntityIOOutput
    m_OnTriggerEndTouch = 0xDE8 # CEntityIOOutput
    m_pAllowPickupScriptFunction = 0xE10 # CUtlSymbolLarge
    m_flPickupRadius = 0xE18 # float
    m_flTriggerRadius = 0xE1C # float
    m_pTriggerSoundEffect = 0xE20 # CUtlSymbolLarge
    m_bGlowWhenInTrigger = 0xE28 # bool
    m_glowColor = 0xE29 # Color
    m_bUseable = 0xE2D # bool
    m_hTriggerHelper = 0xE30 # CHandle<CItemGenericTriggerHelper>

class CItemGenericTriggerHelper: # CBaseModelEntity
    m_hParentItem = 0x9F8 # CHandle<CItemGeneric>

class CItemHeavyAssaultSuit: # CItemAssaultSuit

class CItemKevlar: # CItem

class CItemSoda: # CBaseAnimGraph

class CItem_Healthshot: # CWeaponBaseItem

class CKeepUpright: # CPointEntity
    m_worldGoalAxis = 0x7B0 # Vector
    m_localTestAxis = 0x7BC # Vector
    m_nameAttach = 0x7D0 # CUtlSymbolLarge
    m_attachedObject = 0x7D8 # CHandle<CBaseEntity>
    m_angularLimit = 0x7DC # float
    m_bActive = 0x7E0 # bool
    m_bDampAllRotation = 0x7E1 # bool

class CKnife: # CCSWeaponBase
    m_bFirstAttack = 0x1198 # bool

class CLightComponent: # CEntityComponent
    __m_pChainEntity = 0x58 # CNetworkVarChainer
    m_Color = 0x95 # Color
    m_SecondaryColor = 0x99 # Color
    m_flBrightness = 0xA0 # float
    m_flBrightnessScale = 0xA4 # float
    m_flBrightnessMult = 0xA8 # float
    m_flRange = 0xAC # float
    m_flFalloff = 0xB0 # float
    m_flAttenuation0 = 0xB4 # float
    m_flAttenuation1 = 0xB8 # float
    m_flAttenuation2 = 0xBC # float
    m_flTheta = 0xC0 # float
    m_flPhi = 0xC4 # float
    m_hLightCookie = 0xC8 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_nCascades = 0xD0 # int32_t
    m_nCastShadows = 0xD4 # int32_t
    m_nShadowWidth = 0xD8 # int32_t
    m_nShadowHeight = 0xDC # int32_t
    m_bRenderDiffuse = 0xE0 # bool
    m_nRenderSpecular = 0xE4 # int32_t
    m_bRenderTransmissive = 0xE8 # bool
    m_flOrthoLightWidth = 0xEC # float
    m_flOrthoLightHeight = 0xF0 # float
    m_nStyle = 0xF4 # int32_t
    m_Pattern = 0xF8 # CUtlString
    m_nCascadeRenderStaticObjects = 0x100 # int32_t
    m_flShadowCascadeCrossFade = 0x104 # float
    m_flShadowCascadeDistanceFade = 0x108 # float
    m_flShadowCascadeDistance0 = 0x10C # float
    m_flShadowCascadeDistance1 = 0x110 # float
    m_flShadowCascadeDistance2 = 0x114 # float
    m_flShadowCascadeDistance3 = 0x118 # float
    m_nShadowCascadeResolution0 = 0x11C # int32_t
    m_nShadowCascadeResolution1 = 0x120 # int32_t
    m_nShadowCascadeResolution2 = 0x124 # int32_t
    m_nShadowCascadeResolution3 = 0x128 # int32_t
    m_bUsesBakedShadowing = 0x12C # bool
    m_nShadowPriority = 0x130 # int32_t
    m_nBakedShadowIndex = 0x134 # int32_t
    m_bRenderToCubemaps = 0x138 # bool
    m_nDirectLight = 0x13C # int32_t
    m_nIndirectLight = 0x140 # int32_t
    m_flFadeMinDist = 0x144 # float
    m_flFadeMaxDist = 0x148 # float
    m_flShadowFadeMinDist = 0x14C # float
    m_flShadowFadeMaxDist = 0x150 # float
    m_bEnabled = 0x154 # bool
    m_bFlicker = 0x155 # bool
    m_bPrecomputedFieldsValid = 0x156 # bool
    m_vPrecomputedBoundsMins = 0x158 # Vector
    m_vPrecomputedBoundsMaxs = 0x164 # Vector
    m_vPrecomputedOBBOrigin = 0x170 # Vector
    m_vPrecomputedOBBAngles = 0x17C # QAngle
    m_vPrecomputedOBBExtent = 0x188 # Vector
    m_flPrecomputedMaxRange = 0x194 # float
    m_nFogLightingMode = 0x198 # int32_t
    m_flFogContributionStength = 0x19C # float
    m_flNearClipPlane = 0x1A0 # float
    m_SkyColor = 0x1A4 # Color
    m_flSkyIntensity = 0x1A8 # float
    m_SkyAmbientBounce = 0x1AC # Color
    m_bUseSecondaryColor = 0x1B0 # bool
    m_bMixedShadows = 0x1B1 # bool
    m_flLightStyleStartTime = 0x1B4 # GameTime_t
    m_flCapsuleLength = 0x1B8 # float
    m_flMinRoughness = 0x1BC # float
    m_bPvsModifyEntity = 0x1D0 # bool

class CLightDirectionalEntity: # CLightEntity

class CLightEntity: # CBaseModelEntity
    m_CLightComponent = 0x9F8 # CLightComponent*

class CLightEnvironmentEntity: # CLightDirectionalEntity

class CLightGlow: # CBaseModelEntity
    m_nHorizontalSize = 0x9F8 # uint32_t
    m_nVerticalSize = 0x9FC # uint32_t
    m_nMinDist = 0xA00 # uint32_t
    m_nMaxDist = 0xA04 # uint32_t
    m_nOuterMaxDist = 0xA08 # uint32_t
    m_flGlowProxySize = 0xA0C # float
    m_flHDRColorScale = 0xA10 # float

class CLightOrthoEntity: # CLightEntity

class CLightSpotEntity: # CLightEntity

class CLogicAchievement: # CLogicalEntity
    m_bDisabled = 0x7A8 # bool
    m_iszAchievementEventID = 0x7B0 # CUtlSymbolLarge
    m_OnFired = 0x7B8 # CEntityIOOutput

class CLogicActiveAutosave: # CLogicAutosave
    m_TriggerHitPoints = 0x7B4 # int32_t
    m_flTimeToTrigger = 0x7B8 # float
    m_flStartTime = 0x7BC # GameTime_t
    m_flDangerousTime = 0x7C0 # float

class CLogicAuto: # CBaseEntity
    m_OnMapSpawn = 0x7A8 # CEntityIOOutput
    m_OnDemoMapSpawn = 0x7D0 # CEntityIOOutput
    m_OnNewGame = 0x7F8 # CEntityIOOutput
    m_OnLoadGame = 0x820 # CEntityIOOutput
    m_OnMapTransition = 0x848 # CEntityIOOutput
    m_OnBackgroundMap = 0x870 # CEntityIOOutput
    m_OnMultiNewMap = 0x898 # CEntityIOOutput
    m_OnMultiNewRound = 0x8C0 # CEntityIOOutput
    m_OnVREnabled = 0x8E8 # CEntityIOOutput
    m_OnVRNotEnabled = 0x910 # CEntityIOOutput
    m_globalstate = 0x938 # CUtlSymbolLarge

class CLogicAutosave: # CLogicalEntity
    m_bForceNewLevelUnit = 0x7A8 # bool
    m_minHitPoints = 0x7AC # int32_t
    m_minHitPointsToCommit = 0x7B0 # int32_t

class CLogicBranch: # CLogicalEntity
    m_bInValue = 0x7A8 # bool
    m_Listeners = 0x7B0 # CUtlVector<CHandle<CBaseEntity>>
    m_OnTrue = 0x7C8 # CEntityIOOutput
    m_OnFalse = 0x7F0 # CEntityIOOutput

class CLogicBranchList: # CLogicalEntity
    m_nLogicBranchNames = 0x7A8 # CUtlSymbolLarge[16]
    m_LogicBranchList = 0x828 # CUtlVector<CHandle<CBaseEntity>>
    m_eLastState = 0x840 # CLogicBranchList::LogicBranchListenerLastState_t
    m_OnAllTrue = 0x848 # CEntityIOOutput
    m_OnAllFalse = 0x870 # CEntityIOOutput
    m_OnMixed = 0x898 # CEntityIOOutput

class CLogicCase: # CLogicalEntity
    m_nCase = 0x7A8 # CUtlSymbolLarge[32]
    m_nShuffleCases = 0x8A8 # int32_t
    m_nLastShuffleCase = 0x8AC # int32_t
    m_uchShuffleCaseMap = 0x8B0 # uint8_t[32]
    m_OnCase = 0x8D0 # CEntityIOOutput[32]
    m_OnDefault = 0xDD0 # CEntityOutputTemplate<CVariantBase<CVariantDefaultAllocator>>

class CLogicCollisionPair: # CLogicalEntity
    m_nameAttach1 = 0x7A8 # CUtlSymbolLarge
    m_nameAttach2 = 0x7B0 # CUtlSymbolLarge
    m_disabled = 0x7B8 # bool
    m_succeeded = 0x7B9 # bool

class CLogicCompare: # CLogicalEntity
    m_flInValue = 0x7A8 # float
    m_flCompareValue = 0x7AC # float
    m_OnLessThan = 0x7B0 # CEntityOutputTemplate<float>
    m_OnEqualTo = 0x7D8 # CEntityOutputTemplate<float>
    m_OnNotEqualTo = 0x800 # CEntityOutputTemplate<float>
    m_OnGreaterThan = 0x828 # CEntityOutputTemplate<float>

class CLogicDistanceAutosave: # CLogicalEntity
    m_iszTargetEntity = 0x7A8 # CUtlSymbolLarge
    m_flDistanceToPlayer = 0x7B0 # float
    m_bForceNewLevelUnit = 0x7B4 # bool
    m_bCheckCough = 0x7B5 # bool
    m_bThinkDangerous = 0x7B6 # bool
    m_flDangerousTime = 0x7B8 # float

class CLogicDistanceCheck: # CLogicalEntity
    m_iszEntityA = 0x7A8 # CUtlSymbolLarge
    m_iszEntityB = 0x7B0 # CUtlSymbolLarge
    m_flZone1Distance = 0x7B8 # float
    m_flZone2Distance = 0x7BC # float
    m_InZone1 = 0x7C0 # CEntityIOOutput
    m_InZone2 = 0x7E8 # CEntityIOOutput
    m_InZone3 = 0x810 # CEntityIOOutput

class CLogicEventListener: # CLogicalEntity
    m_strEventName = 0x7B8 # CUtlString
    m_bIsEnabled = 0x7C0 # bool
    m_nTeam = 0x7C4 # int32_t
    m_OnEventFired = 0x7C8 # CEntityIOOutput

class CLogicGameEvent: # CLogicalEntity
    m_iszEventName = 0x7A8 # CUtlSymbolLarge

class CLogicGameEventListener: # CLogicalEntity
    m_OnEventFired = 0x7B8 # CEntityIOOutput
    m_iszGameEventName = 0x7E0 # CUtlSymbolLarge
    m_iszGameEventItem = 0x7E8 # CUtlSymbolLarge
    m_bEnabled = 0x7F0 # bool
    m_bStartDisabled = 0x7F1 # bool

class CLogicLineToEntity: # CLogicalEntity
    m_Line = 0x7A8 # CEntityOutputTemplate<Vector>
    m_SourceName = 0x7D0 # CUtlSymbolLarge
    m_StartEntity = 0x7D8 # CHandle<CBaseEntity>
    m_EndEntity = 0x7DC # CHandle<CBaseEntity>

class CLogicMeasureMovement: # CLogicalEntity
    m_strMeasureTarget = 0x7A8 # CUtlSymbolLarge
    m_strMeasureReference = 0x7B0 # CUtlSymbolLarge
    m_strTargetReference = 0x7B8 # CUtlSymbolLarge
    m_hMeasureTarget = 0x7C0 # CHandle<CBaseEntity>
    m_hMeasureReference = 0x7C4 # CHandle<CBaseEntity>
    m_hTarget = 0x7C8 # CHandle<CBaseEntity>
    m_hTargetReference = 0x7CC # CHandle<CBaseEntity>
    m_flScale = 0x7D0 # float
    m_nMeasureType = 0x7D4 # int32_t

class CLogicNPCCounter: # CBaseEntity
    m_OnMinCountAll = 0x7A8 # CEntityIOOutput
    m_OnMaxCountAll = 0x7D0 # CEntityIOOutput
    m_OnFactorAll = 0x7F8 # CEntityOutputTemplate<float>
    m_OnMinPlayerDistAll = 0x820 # CEntityOutputTemplate<float>
    m_OnMinCount_1 = 0x848 # CEntityIOOutput
    m_OnMaxCount_1 = 0x870 # CEntityIOOutput
    m_OnFactor_1 = 0x898 # CEntityOutputTemplate<float>
    m_OnMinPlayerDist_1 = 0x8C0 # CEntityOutputTemplate<float>
    m_OnMinCount_2 = 0x8E8 # CEntityIOOutput
    m_OnMaxCount_2 = 0x910 # CEntityIOOutput
    m_OnFactor_2 = 0x938 # CEntityOutputTemplate<float>
    m_OnMinPlayerDist_2 = 0x960 # CEntityOutputTemplate<float>
    m_OnMinCount_3 = 0x988 # CEntityIOOutput
    m_OnMaxCount_3 = 0x9B0 # CEntityIOOutput
    m_OnFactor_3 = 0x9D8 # CEntityOutputTemplate<float>
    m_OnMinPlayerDist_3 = 0xA00 # CEntityOutputTemplate<float>
    m_hSource = 0xA28 # CEntityHandle
    m_iszSourceEntityName = 0xA30 # CUtlSymbolLarge
    m_flDistanceMax = 0xA38 # float
    m_bDisabled = 0xA3C # bool
    m_nMinCountAll = 0xA40 # int32_t
    m_nMaxCountAll = 0xA44 # int32_t
    m_nMinFactorAll = 0xA48 # int32_t
    m_nMaxFactorAll = 0xA4C # int32_t
    m_iszNPCClassname_1 = 0xA58 # CUtlSymbolLarge
    m_nNPCState_1 = 0xA60 # int32_t
    m_bInvertState_1 = 0xA64 # bool
    m_nMinCount_1 = 0xA68 # int32_t
    m_nMaxCount_1 = 0xA6C # int32_t
    m_nMinFactor_1 = 0xA70 # int32_t
    m_nMaxFactor_1 = 0xA74 # int32_t
    m_flDefaultDist_1 = 0xA7C # float
    m_iszNPCClassname_2 = 0xA80 # CUtlSymbolLarge
    m_nNPCState_2 = 0xA88 # int32_t
    m_bInvertState_2 = 0xA8C # bool
    m_nMinCount_2 = 0xA90 # int32_t
    m_nMaxCount_2 = 0xA94 # int32_t
    m_nMinFactor_2 = 0xA98 # int32_t
    m_nMaxFactor_2 = 0xA9C # int32_t
    m_flDefaultDist_2 = 0xAA4 # float
    m_iszNPCClassname_3 = 0xAA8 # CUtlSymbolLarge
    m_nNPCState_3 = 0xAB0 # int32_t
    m_bInvertState_3 = 0xAB4 # bool
    m_nMinCount_3 = 0xAB8 # int32_t
    m_nMaxCount_3 = 0xABC # int32_t
    m_nMinFactor_3 = 0xAC0 # int32_t
    m_nMaxFactor_3 = 0xAC4 # int32_t
    m_flDefaultDist_3 = 0xACC # float

class CLogicNPCCounterAABB: # CLogicNPCCounter
    m_vDistanceOuterMins = 0xAE8 # Vector
    m_vDistanceOuterMaxs = 0xAF4 # Vector
    m_vOuterMins = 0xB00 # Vector
    m_vOuterMaxs = 0xB0C # Vector

class CLogicNPCCounterOBB: # CLogicNPCCounterAABB

class CLogicNavigation: # CLogicalEntity
    m_isOn = 0x7B0 # bool
    m_navProperty = 0x7B4 # navproperties_t

class CLogicPlayerProxy: # CLogicalEntity
    m_hPlayer = 0x7A8 # CHandle<CBaseEntity>
    m_PlayerHasAmmo = 0x7B0 # CEntityIOOutput
    m_PlayerHasNoAmmo = 0x7D8 # CEntityIOOutput
    m_PlayerDied = 0x800 # CEntityIOOutput
    m_RequestedPlayerHealth = 0x828 # CEntityOutputTemplate<int32_t>

class CLogicProximity: # CPointEntity

class CLogicRelay: # CLogicalEntity
    m_OnTrigger = 0x7A8 # CEntityIOOutput
    m_OnSpawn = 0x7D0 # CEntityIOOutput
    m_bDisabled = 0x7F8 # bool
    m_bWaitForRefire = 0x7F9 # bool
    m_bTriggerOnce = 0x7FA # bool
    m_bFastRetrigger = 0x7FB # bool
    m_bPassthoughCaller = 0x7FC # bool

class CLogicScript: # CPointEntity

class CLogicalEntity: # CServerOnlyEntity

class CMapInfo: # CPointEntity
    m_iBuyingStatus = 0x7A8 # int32_t
    m_flBombRadius = 0x7AC # float
    m_iPetPopulation = 0x7B0 # int32_t
    m_bUseNormalSpawnsForDM = 0x7B4 # bool
    m_bDisableAutoGeneratedDMSpawns = 0x7B5 # bool
    m_flBotMaxVisionDistance = 0x7B8 # float
    m_iHostageCount = 0x7BC # int32_t
    m_bFadePlayerVisibilityFarZ = 0x7C0 # bool

class CMapVetoPickController: # CBaseEntity
    m_bPlayedIntroVcd = 0x7A8 # bool
    m_bNeedToPlayFiveSecondsRemaining = 0x7A9 # bool
    m_dblPreMatchDraftSequenceTime = 0x7C8 # double
    m_bPreMatchDraftStateChanged = 0x7D0 # bool
    m_nDraftType = 0x7D4 # int32_t
    m_nTeamWinningCoinToss = 0x7D8 # int32_t
    m_nTeamWithFirstChoice = 0x7DC # int32_t[64]
    m_nVoteMapIdsList = 0x8DC # int32_t[7]
    m_nAccountIDs = 0x8F8 # int32_t[64]
    m_nMapId0 = 0x9F8 # int32_t[64]
    m_nMapId1 = 0xAF8 # int32_t[64]
    m_nMapId2 = 0xBF8 # int32_t[64]
    m_nMapId3 = 0xCF8 # int32_t[64]
    m_nMapId4 = 0xDF8 # int32_t[64]
    m_nMapId5 = 0xEF8 # int32_t[64]
    m_nStartingSide0 = 0xFF8 # int32_t[64]
    m_nCurrentPhase = 0x10F8 # int32_t
    m_nPhaseStartTick = 0x10FC # int32_t
    m_nPhaseDurationTicks = 0x1100 # int32_t
    m_OnMapVetoed = 0x1108 # CEntityOutputTemplate<CUtlSymbolLarge>
    m_OnMapPicked = 0x1130 # CEntityOutputTemplate<CUtlSymbolLarge>
    m_OnSidesPicked = 0x1158 # CEntityOutputTemplate<int32_t>
    m_OnNewPhaseStarted = 0x1180 # CEntityOutputTemplate<int32_t>
    m_OnLevelTransition = 0x11A8 # CEntityOutputTemplate<int32_t>

class CMarkupVolume: # CBaseModelEntity
    m_bEnabled = 0x9F8 # bool

class CMarkupVolumeTagged: # CMarkupVolume
    m_bIsGroup = 0xA30 # bool
    m_bGroupByPrefab = 0xA31 # bool
    m_bGroupByVolume = 0xA32 # bool
    m_bGroupOtherGroups = 0xA33 # bool
    m_bIsInGroup = 0xA34 # bool

class CMarkupVolumeTagged_Nav: # CMarkupVolumeTagged

class CMarkupVolumeTagged_NavGame: # CMarkupVolumeWithRef
    m_bFloodFillAttribute = 0xA48 # bool

class CMarkupVolumeWithRef: # CMarkupVolumeTagged
    m_bUseRef = 0xA35 # bool
    m_vRefPos = 0xA38 # Vector
    m_flRefDot = 0xA44 # float

class CMathColorBlend: # CLogicalEntity
    m_flInMin = 0x7A8 # float
    m_flInMax = 0x7AC # float
    m_OutColor1 = 0x7B0 # Color
    m_OutColor2 = 0x7B4 # Color
    m_OutValue = 0x7B8 # CEntityOutputTemplate<Color>

class CMathCounter: # CLogicalEntity
    m_flMin = 0x7A8 # float
    m_flMax = 0x7AC # float
    m_bHitMin = 0x7B0 # bool
    m_bHitMax = 0x7B1 # bool
    m_bDisabled = 0x7B2 # bool
    m_OutValue = 0x7B8 # CEntityOutputTemplate<float>
    m_OnGetValue = 0x7E0 # CEntityOutputTemplate<float>
    m_OnHitMin = 0x808 # CEntityIOOutput
    m_OnHitMax = 0x830 # CEntityIOOutput
    m_OnChangedFromMin = 0x858 # CEntityIOOutput
    m_OnChangedFromMax = 0x880 # CEntityIOOutput

class CMathRemap: # CLogicalEntity
    m_flInMin = 0x7A8 # float
    m_flInMax = 0x7AC # float
    m_flOut1 = 0x7B0 # float
    m_flOut2 = 0x7B4 # float
    m_flOldInValue = 0x7B8 # float
    m_bEnabled = 0x7BC # bool
    m_OutValue = 0x7C0 # CEntityOutputTemplate<float>
    m_OnRoseAboveMin = 0x7E8 # CEntityIOOutput
    m_OnRoseAboveMax = 0x810 # CEntityIOOutput
    m_OnFellBelowMin = 0x838 # CEntityIOOutput
    m_OnFellBelowMax = 0x860 # CEntityIOOutput

class CMelee: # CCSWeaponBase

class CMessage: # CPointEntity
    m_iszMessage = 0x7A8 # CUtlSymbolLarge
    m_MessageVolume = 0x7B0 # float
    m_MessageAttenuation = 0x7B4 # int32_t
    m_Radius = 0x7B8 # float
    m_sNoise = 0x7C0 # CUtlSymbolLarge
    m_OnShowMessage = 0x7C8 # CEntityIOOutput

class CMessageEntity: # CPointEntity
    m_radius = 0x7A8 # int32_t
    m_messageText = 0x7B0 # CUtlSymbolLarge
    m_drawText = 0x7B8 # bool
    m_bDeveloperOnly = 0x7B9 # bool
    m_bEnabled = 0x7BA # bool

class CModelPointEntity: # CBaseModelEntity

class CModelState:
    m_hModel = 0xA0 # CStrongHandle<InfoForResourceTypeCModel>
    m_ModelName = 0xA8 # CUtlSymbolLarge
    m_bClientClothCreationSuppressed = 0xE8 # bool
    m_MeshGroupMask = 0x180 # uint64_t
    m_nIdealMotionType = 0x212 # int8_t
    m_nForceLOD = 0x213 # int8_t
    m_nClothUpdateFlags = 0x214 # int8_t

class CMolotovGrenade: # CBaseCSGrenade

class CMolotovProjectile: # CBaseCSGrenadeProjectile
    m_bIsIncGrenade = 0xD96 # bool
    m_bDetonated = 0xDA0 # bool
    m_stillTimer = 0xDA8 # IntervalTimer
    m_bHasBouncedOffPlayer = 0xE88 # bool

class CMomentaryRotButton: # CRotButton
    m_Position = 0xBC0 # CEntityOutputTemplate<float>
    m_OnUnpressed = 0xBE8 # CEntityIOOutput
    m_OnFullyOpen = 0xC10 # CEntityIOOutput
    m_OnFullyClosed = 0xC38 # CEntityIOOutput
    m_OnReachedPosition = 0xC60 # CEntityIOOutput
    m_lastUsed = 0xC88 # int32_t
    m_start = 0xC8C # QAngle
    m_end = 0xC98 # QAngle
    m_IdealYaw = 0xCA4 # float
    m_sNoise = 0xCA8 # CUtlSymbolLarge
    m_bUpdateTarget = 0xCB0 # bool
    m_direction = 0xCB4 # int32_t
    m_returnSpeed = 0xCB8 # float
    m_flStartPosition = 0xCBC # float

class CMotorController:
    m_speed = 0x8 # float
    m_maxTorque = 0xC # float
    m_axis = 0x10 # Vector
    m_inertiaFactor = 0x1C # float

class CMultiLightProxy: # CLogicalEntity
    m_iszLightNameFilter = 0x7A8 # CUtlSymbolLarge
    m_iszLightClassFilter = 0x7B0 # CUtlSymbolLarge
    m_flLightRadiusFilter = 0x7B8 # float
    m_flBrightnessDelta = 0x7BC # float
    m_bPerformScreenFade = 0x7C0 # bool
    m_flTargetBrightnessMultiplier = 0x7C4 # float
    m_flCurrentBrightnessMultiplier = 0x7C8 # float
    m_vecLights = 0x7D0 # CUtlVector<CHandle<CLightEntity>>

class CMultiSource: # CLogicalEntity
    m_rgEntities = 0x7A8 # CHandle<CBaseEntity>[32]
    m_rgTriggered = 0x828 # int32_t[32]
    m_OnTrigger = 0x8A8 # CEntityIOOutput
    m_iTotal = 0x8D0 # int32_t
    m_globalstate = 0x8D8 # CUtlSymbolLarge

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
    m_flWidth = 0x7A8 # float
    m_vLocatorOffset = 0x7AC # Vector
    m_qLocatorAnglesOffset = 0x7B8 # QAngle
    m_strMovementForward = 0x7C8 # CUtlSymbolLarge
    m_strMovementReverse = 0x7D0 # CUtlSymbolLarge
    m_nNavLinkIdForward = 0x7D8 # int32_t
    m_nNavLinkIdReverse = 0x7DC # int32_t
    m_bEnabled = 0x7E0 # bool
    m_strFilterName = 0x7E8 # CUtlSymbolLarge
    m_hFilter = 0x7F0 # CHandle<CBaseFilter>
    m_OnNavLinkStart = 0x7F8 # CEntityIOOutput
    m_OnNavLinkFinish = 0x820 # CEntityIOOutput
    m_bIsTerminus = 0x848 # bool

class CNavLinkMovementVData:
    m_bIsInterpolated = 0x0 # bool
    m_unRecommendedDistance = 0x4 # uint32_t
    m_vecAnimgraphVars = 0x8 # CUtlVector<CNavLinkAnimgraphVar>

class CNavSpaceInfo: # CPointEntity
    m_bCreateFlightSpace = 0x7A8 # bool

class CNavVolume:

class CNavVolumeAll: # CNavVolumeVector

class CNavVolumeBreadthFirstSearch: # CNavVolumeCalculatedVector
    m_vStartPos = 0x80 # Vector
    m_flSearchDist = 0x8C # float

class CNavVolumeCalculatedVector: # CNavVolume

class CNavVolumeMarkupVolume: # CNavVolume

class CNavVolumeSphere: # CNavVolume
    m_vCenter = 0x50 # Vector
    m_flRadius = 0x5C # float

class CNavVolumeSphericalShell: # CNavVolumeSphere
    m_flRadiusInner = 0x60 # float

class CNavVolumeVector: # CNavVolume
    m_bHasBeenPreFiltered = 0x58 # bool

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
    m_nTransmitStateOwnedCounter = 0x2C4 # uint8_t

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
    m_flInnerAngle = 0xC20 # float
    m_flOuterAngle = 0xC24 # float
    m_bShowLight = 0xC28 # bool

class COrnamentProp: # CDynamicProp
    m_initialOwner = 0xE68 # CUtlSymbolLarge

class CParticleSystem: # CBaseModelEntity
    m_szSnapshotFileName = 0x9F8 # char[512]
    m_bActive = 0xBF8 # bool
    m_bFrozen = 0xBF9 # bool
    m_flFreezeTransitionDuration = 0xBFC # float
    m_nStopType = 0xC00 # int32_t
    m_bAnimateDuringGameplayPause = 0xC04 # bool
    m_iEffectIndex = 0xC08 # CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_flStartTime = 0xC10 # GameTime_t
    m_flPreSimTime = 0xC14 # float
    m_vServerControlPoints = 0xC18 # Vector[4]
    m_iServerControlPointAssignments = 0xC48 # uint8_t[4]
    m_hControlPointEnts = 0xC4C # CHandle<CBaseEntity>[64]
    m_bNoSave = 0xD4C # bool
    m_bNoFreeze = 0xD4D # bool
    m_bNoRamp = 0xD4E # bool
    m_bStartActive = 0xD4F # bool
    m_iszEffectName = 0xD50 # CUtlSymbolLarge
    m_iszControlPointNames = 0xD58 # CUtlSymbolLarge[64]
    m_nDataCP = 0xF58 # int32_t
    m_vecDataCPValue = 0xF5C # Vector
    m_nTintCP = 0xF68 # int32_t
    m_clrTint = 0xF6C # Color

class CPathCorner: # CPointEntity
    m_flWait = 0x7A8 # float
    m_flRadius = 0x7AC # float
    m_OnPass = 0x7B0 # CEntityIOOutput

class CPathCornerCrash: # CPathCorner

class CPathKeyFrame: # CLogicalEntity
    m_Origin = 0x7A8 # Vector
    m_Angles = 0x7B4 # QAngle
    m_qAngle = 0x7C0 # Quaternion
    m_iNextKey = 0x7D0 # CUtlSymbolLarge
    m_flNextTime = 0x7D8 # float
    m_pNextKey = 0x7E0 # CPathKeyFrame*
    m_pPrevKey = 0x7E8 # CPathKeyFrame*
    m_flSpeed = 0x7F0 # float

class CPathParticleRope: # CBaseEntity
    m_bStartActive = 0x7A8 # bool
    m_flMaxSimulationTime = 0x7AC # float
    m_iszEffectName = 0x7B0 # CUtlSymbolLarge
    m_PathNodes_Name = 0x7B8 # CUtlVector<CUtlSymbolLarge>
    m_flParticleSpacing = 0x7D0 # float
    m_flSlack = 0x7D4 # float
    m_flRadius = 0x7D8 # float
    m_ColorTint = 0x7DC # Color
    m_nEffectState = 0x7E0 # int32_t
    m_iEffectIndex = 0x7E8 # CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    m_PathNodes_Position = 0x7F0 # CNetworkUtlVectorBase<Vector>
    m_PathNodes_TangentIn = 0x808 # CNetworkUtlVectorBase<Vector>
    m_PathNodes_TangentOut = 0x820 # CNetworkUtlVectorBase<Vector>
    m_PathNodes_Color = 0x838 # CNetworkUtlVectorBase<Vector>
    m_PathNodes_PinEnabled = 0x850 # CNetworkUtlVectorBase<bool>
    m_PathNodes_RadiusScale = 0x868 # CNetworkUtlVectorBase<float>

class CPathParticleRopeAlias_path_particle_rope_clientside: # CPathParticleRope

class CPathTrack: # CPointEntity
    m_pnext = 0x7A8 # CPathTrack*
    m_pprevious = 0x7B0 # CPathTrack*
    m_paltpath = 0x7B8 # CPathTrack*
    m_flRadius = 0x7C0 # float
    m_length = 0x7C4 # float
    m_altName = 0x7C8 # CUtlSymbolLarge
    m_nIterVal = 0x7D0 # int32_t
    m_eOrientationType = 0x7D4 # TrackOrientationType_t
    m_OnPass = 0x7D8 # CEntityIOOutput

class CPhysBallSocket: # CPhysConstraint
    m_flFriction = 0x800 # float
    m_bEnableSwingLimit = 0x804 # bool
    m_flSwingLimit = 0x808 # float
    m_bEnableTwistLimit = 0x80C # bool
    m_flMinTwistAngle = 0x810 # float
    m_flMaxTwistAngle = 0x814 # float

class CPhysBox: # CBreakable
    m_damageType = 0xAB8 # int32_t
    m_massScale = 0xABC # float
    m_damageToEnableMotion = 0xAC0 # int32_t
    m_flForceToEnableMotion = 0xAC4 # float
    m_angPreferredCarryAngles = 0xAC8 # QAngle
    m_bNotSolidToWorld = 0xAD4 # bool
    m_bEnableUseOutput = 0xAD5 # bool
    m_iExploitableByPlayer = 0xAD8 # int32_t
    m_flTouchOutputPerEntityDelay = 0xADC # float
    m_OnDamaged = 0xAE0 # CEntityIOOutput
    m_OnAwakened = 0xB08 # CEntityIOOutput
    m_OnMotionEnabled = 0xB30 # CEntityIOOutput
    m_OnPlayerUse = 0xB58 # CEntityIOOutput
    m_OnStartTouch = 0xB80 # CEntityIOOutput
    m_hCarryingPlayer = 0xBA8 # CHandle<CBasePlayerPawn>

class CPhysConstraint: # CLogicalEntity
    m_nameAttach1 = 0x7B0 # CUtlSymbolLarge
    m_nameAttach2 = 0x7B8 # CUtlSymbolLarge
    m_breakSound = 0x7C0 # CUtlSymbolLarge
    m_forceLimit = 0x7C8 # float
    m_torqueLimit = 0x7CC # float
    m_teleportTick = 0x7D0 # uint32_t
    m_minTeleportDistance = 0x7D4 # float
    m_OnBreak = 0x7D8 # CEntityIOOutput

class CPhysExplosion: # CPointEntity
    m_bExplodeOnSpawn = 0x7A8 # bool
    m_flMagnitude = 0x7AC # float
    m_flDamage = 0x7B0 # float
    m_radius = 0x7B4 # float
    m_targetEntityName = 0x7B8 # CUtlSymbolLarge
    m_flInnerRadius = 0x7C0 # float
    m_flPushScale = 0x7C4 # float
    m_bConvertToDebrisWhenPossible = 0x7C8 # bool
    m_OnPushedPlayer = 0x7D0 # CEntityIOOutput

class CPhysFixed: # CPhysConstraint
    m_flLinearFrequency = 0x800 # float
    m_flLinearDampingRatio = 0x804 # float
    m_flAngularFrequency = 0x808 # float
    m_flAngularDampingRatio = 0x80C # float
    m_bEnableLinearConstraint = 0x810 # bool
    m_bEnableAngularConstraint = 0x811 # bool

class CPhysForce: # CPointEntity
    m_nameAttach = 0x7B0 # CUtlSymbolLarge
    m_force = 0x7B8 # float
    m_forceTime = 0x7BC # float
    m_attachedObject = 0x7C0 # CHandle<CBaseEntity>
    m_wasRestored = 0x7C4 # bool
    m_integrator = 0x7C8 # CConstantForceController

class CPhysHinge: # CPhysConstraint
    m_soundInfo = 0x808 # ConstraintSoundInfo
    m_NotifyMinLimitReached = 0x890 # CEntityIOOutput
    m_NotifyMaxLimitReached = 0x8B8 # CEntityIOOutput
    m_bAtMinLimit = 0x8E0 # bool
    m_bAtMaxLimit = 0x8E1 # bool
    m_hinge = 0x8E4 # constraint_hingeparams_t
    m_hingeFriction = 0x924 # float
    m_systemLoadScale = 0x928 # float
    m_bIsAxisLocal = 0x92C # bool
    m_flMinRotation = 0x930 # float
    m_flMaxRotation = 0x934 # float
    m_flInitialRotation = 0x938 # float
    m_flMotorFrequency = 0x93C # float
    m_flMotorDampingRatio = 0x940 # float
    m_flAngleSpeed = 0x944 # float
    m_flAngleSpeedThreshold = 0x948 # float
    m_OnStartMoving = 0x950 # CEntityIOOutput
    m_OnStopMoving = 0x978 # CEntityIOOutput

class CPhysHingeAlias_phys_hinge_local: # CPhysHinge

class CPhysImpact: # CPointEntity
    m_damage = 0x7A8 # float
    m_distance = 0x7AC # float
    m_directionEntityName = 0x7B0 # CUtlSymbolLarge

class CPhysLength: # CPhysConstraint
    m_offset = 0x800 # Vector[2]
    m_vecAttach = 0x818 # Vector
    m_addLength = 0x824 # float
    m_minLength = 0x828 # float
    m_totalLength = 0x82C # float
    m_bEnableCollision = 0x830 # bool

class CPhysMagnet: # CBaseAnimGraph
    m_OnMagnetAttach = 0xBF0 # CEntityIOOutput
    m_OnMagnetDetach = 0xC18 # CEntityIOOutput
    m_massScale = 0xC40 # float
    m_forceLimit = 0xC44 # float
    m_torqueLimit = 0xC48 # float
    m_MagnettedEntities = 0xC50 # CUtlVector<magnetted_objects_t>
    m_bActive = 0xC68 # bool
    m_bHasHitSomething = 0xC69 # bool
    m_flTotalMass = 0xC6C # float
    m_flRadius = 0xC70 # float
    m_flNextSuckTime = 0xC74 # GameTime_t
    m_iMaxObjectsAttached = 0xC78 # int32_t

class CPhysMotor: # CLogicalEntity
    m_nameAttach = 0x7A8 # CUtlSymbolLarge
    m_hAttachedObject = 0x7B0 # CHandle<CBaseEntity>
    m_spinUp = 0x7B4 # float
    m_additionalAcceleration = 0x7B8 # float
    m_angularAcceleration = 0x7BC # float
    m_lastTime = 0x7C0 # GameTime_t
    m_motor = 0x7D8 # CMotorController

class CPhysPulley: # CPhysConstraint
    m_position2 = 0x800 # Vector
    m_offset = 0x80C # Vector[2]
    m_addLength = 0x824 # float
    m_gearRatio = 0x828 # float

class CPhysSlideConstraint: # CPhysConstraint
    m_axisEnd = 0x808 # Vector
    m_slideFriction = 0x814 # float
    m_systemLoadScale = 0x818 # float
    m_initialOffset = 0x81C # float
    m_bEnableLinearConstraint = 0x820 # bool
    m_bEnableAngularConstraint = 0x821 # bool
    m_flMotorFrequency = 0x824 # float
    m_flMotorDampingRatio = 0x828 # float
    m_bUseEntityPivot = 0x82C # bool
    m_soundInfo = 0x830 # ConstraintSoundInfo

class CPhysThruster: # CPhysForce
    m_localOrigin = 0x808 # Vector

class CPhysTorque: # CPhysForce
    m_axis = 0x808 # Vector

class CPhysWheelConstraint: # CPhysConstraint
    m_flSuspensionFrequency = 0x800 # float
    m_flSuspensionDampingRatio = 0x804 # float
    m_flSuspensionHeightOffset = 0x808 # float
    m_bEnableSuspensionLimit = 0x80C # bool
    m_flMinSuspensionOffset = 0x810 # float
    m_flMaxSuspensionOffset = 0x814 # float
    m_bEnableSteeringLimit = 0x818 # bool
    m_flMinSteeringAngle = 0x81C # float
    m_flMaxSteeringAngle = 0x820 # float
    m_flSteeringAxisFriction = 0x824 # float
    m_flSpinAxisFriction = 0x828 # float

class CPhysicalButton: # CBaseButton

class CPhysicsEntitySolver: # CLogicalEntity
    m_hMovingEntity = 0x7B0 # CHandle<CBaseEntity>
    m_hPhysicsBlocker = 0x7B4 # CHandle<CBaseEntity>
    m_separationDuration = 0x7B8 # float
    m_cancelTime = 0x7BC # GameTime_t

class CPhysicsProp: # CBreakableProp
    m_MotionEnabled = 0xD70 # CEntityIOOutput
    m_OnAwakened = 0xD98 # CEntityIOOutput
    m_OnAwake = 0xDC0 # CEntityIOOutput
    m_OnAsleep = 0xDE8 # CEntityIOOutput
    m_OnPlayerUse = 0xE10 # CEntityIOOutput
    m_OnPlayerPickup = 0xE38 # CEntityIOOutput
    m_OnOutOfWorld = 0xE60 # CEntityIOOutput
    m_massScale = 0xE88 # float
    m_inertiaScale = 0xE8C # float
    m_buoyancyScale = 0xE90 # float
    m_damageType = 0xE94 # int32_t
    m_damageToEnableMotion = 0xE98 # int32_t
    m_flForceToEnableMotion = 0xE9C # float
    m_bThrownByPlayer = 0xEA0 # bool
    m_bDroppedByPlayer = 0xEA1 # bool
    m_bTouchedByPlayer = 0xEA2 # bool
    m_bFirstCollisionAfterLaunch = 0xEA3 # bool
    m_iExploitableByPlayer = 0xEA4 # int32_t
    m_bHasBeenAwakened = 0xEA8 # bool
    m_bIsOverrideProp = 0xEA9 # bool
    m_fNextCheckDisableMotionContactsTime = 0xEAC # GameTime_t
    m_iInitialGlowState = 0xEB0 # int32_t
    m_nGlowRange = 0xEB4 # int32_t
    m_nGlowRangeMin = 0xEB8 # int32_t
    m_glowColor = 0xEBC # Color
    m_bForceNavIgnore = 0xEC0 # bool
    m_bNoNavmeshBlocker = 0xEC1 # bool
    m_bForceNpcExclude = 0xEC2 # bool
    m_bShouldAutoConvertBackFromDebris = 0xEC3 # bool
    m_bMuteImpactEffects = 0xEC4 # bool
    m_bAcceptDamageFromHeldObjects = 0xECC # bool
    m_bEnableUseOutput = 0xECD # bool
    m_bAwake = 0xECE # bool
    m_nCollisionGroupOverride = 0xED0 # int32_t

class CPhysicsPropMultiplayer: # CPhysicsProp

class CPhysicsPropOverride: # CPhysicsProp

class CPhysicsPropRespawnable: # CPhysicsProp
    m_vOriginalSpawnOrigin = 0xED4 # Vector
    m_vOriginalSpawnAngles = 0xEE0 # QAngle
    m_vOriginalMins = 0xEEC # Vector
    m_vOriginalMaxs = 0xEF8 # Vector
    m_flRespawnDuration = 0xF04 # float

class CPhysicsShake:
    m_force = 0x8 # Vector

class CPhysicsSpring: # CBaseEntity
    m_flFrequency = 0x7B0 # float
    m_flDampingRatio = 0x7B4 # float
    m_flRestLength = 0x7B8 # float
    m_nameAttachStart = 0x7C0 # CUtlSymbolLarge
    m_nameAttachEnd = 0x7C8 # CUtlSymbolLarge
    m_start = 0x7D0 # Vector
    m_end = 0x7DC # Vector
    m_teleportTick = 0x7E8 # uint32_t

class CPhysicsWire: # CBaseEntity
    m_nDensity = 0x7A8 # int32_t

class CPlantedC4: # CBaseAnimGraph
    m_bBombTicking = 0xBF0 # bool
    m_flC4Blow = 0xBF4 # GameTime_t
    m_nBombSite = 0xBF8 # int32_t
    m_nSourceSoundscapeHash = 0xBFC # int32_t
    m_OnBombDefused = 0xC00 # CEntityIOOutput
    m_OnBombBeginDefuse = 0xC28 # CEntityIOOutput
    m_OnBombDefuseAborted = 0xC50 # CEntityIOOutput
    m_bCannotBeDefused = 0xC78 # bool
    m_entitySpottedState = 0xC80 # EntitySpottedState_t
    m_nSpotRules = 0xC98 # int32_t
    m_bTrainingPlacedByPlayer = 0xC9C # bool
    m_bHasExploded = 0xC9D # bool
    m_flTimerLength = 0xCA0 # float
    m_bBeingDefused = 0xCA4 # bool
    m_fLastDefuseTime = 0xCAC # GameTime_t
    m_flDefuseLength = 0xCB4 # float
    m_flDefuseCountDown = 0xCB8 # GameTime_t
    m_bBombDefused = 0xCBC # bool
    m_hBombDefuser = 0xCC0 # CHandle<CCSPlayerPawn>
    m_hControlPanel = 0xCC4 # CHandle<CBaseEntity>
    m_iProgressBarTime = 0xCC8 # int32_t
    m_bVoiceAlertFired = 0xCCC # bool
    m_bVoiceAlertPlayed = 0xCCD # bool[4]
    m_flNextBotBeepTime = 0xCD4 # GameTime_t
    m_angCatchUpToPlayerEye = 0xCDC # QAngle
    m_flLastSpinDetectionTime = 0xCE8 # GameTime_t

class CPlatTrigger: # CBaseModelEntity
    m_pPlatform = 0x9F8 # CHandle<CFuncPlat>

class CPlayerControllerComponent:
    __m_pChainEntity = 0x8 # CNetworkVarChainer

class CPlayerPawnComponent:
    __m_pChainEntity = 0x8 # CNetworkVarChainer

class CPlayerPing: # CBaseEntity
    m_hPlayer = 0x7B0 # CHandle<CCSPlayerPawn>
    m_hPingedEntity = 0x7B4 # CHandle<CBaseEntity>
    m_iType = 0x7B8 # int32_t
    m_bUrgent = 0x7BC # bool
    m_szPlaceName = 0x7BD # char[18]

class CPlayerSprayDecal: # CModelPointEntity
    m_nUniqueID = 0x9F8 # int32_t
    m_unAccountID = 0x9FC # uint32_t
    m_unTraceID = 0xA00 # uint32_t
    m_rtGcTime = 0xA04 # uint32_t
    m_vecEndPos = 0xA08 # Vector
    m_vecStart = 0xA14 # Vector
    m_vecLeft = 0xA20 # Vector
    m_vecNormal = 0xA2C # Vector
    m_nPlayer = 0xA38 # int32_t
    m_nEntity = 0xA3C # int32_t
    m_nHitbox = 0xA40 # int32_t
    m_flCreationTime = 0xA44 # float
    m_nTintID = 0xA48 # int32_t
    m_nVersion = 0xA4C # uint8_t
    m_ubSignature = 0xA4D # uint8_t[128]

class CPlayerVisibility: # CBaseEntity
    m_flVisibilityStrength = 0x7A8 # float
    m_flFogDistanceMultiplier = 0x7AC # float
    m_flFogMaxDensityMultiplier = 0x7B0 # float
    m_flFadeTime = 0x7B4 # float
    m_bStartDisabled = 0x7B8 # bool
    m_bIsEnabled = 0x7B9 # bool

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
    m_bDisabled = 0x7A8 # bool
    m_nLookAtName = 0x7B0 # CUtlSymbolLarge
    m_hTargetEntity = 0x7B8 # CHandle<CBaseEntity>
    m_hLookAtEntity = 0x7BC # CHandle<CBaseEntity>
    m_flDuration = 0x7C0 # float
    m_flDotTolerance = 0x7C4 # float
    m_flFacingTime = 0x7C8 # GameTime_t
    m_bFired = 0x7CC # bool
    m_OnFacingLookat = 0x7D0 # CEntityIOOutput
    m_OnNotFacingLookat = 0x7F8 # CEntityIOOutput
    m_TargetDir = 0x820 # CEntityOutputTemplate<Vector>
    m_FacingPercentage = 0x848 # CEntityOutputTemplate<float>

class CPointAngularVelocitySensor: # CPointEntity
    m_hTargetEntity = 0x7A8 # CHandle<CBaseEntity>
    m_flThreshold = 0x7AC # float
    m_nLastCompareResult = 0x7B0 # int32_t
    m_nLastFireResult = 0x7B4 # int32_t
    m_flFireTime = 0x7B8 # GameTime_t
    m_flFireInterval = 0x7BC # float
    m_flLastAngVelocity = 0x7C0 # float
    m_lastOrientation = 0x7C4 # QAngle
    m_vecAxis = 0x7D0 # Vector
    m_bUseHelper = 0x7DC # bool
    m_AngularVelocity = 0x7E0 # CEntityOutputTemplate<float>
    m_OnLessThan = 0x808 # CEntityIOOutput
    m_OnLessThanOrEqualTo = 0x830 # CEntityIOOutput
    m_OnGreaterThan = 0x858 # CEntityIOOutput
    m_OnGreaterThanOrEqualTo = 0x880 # CEntityIOOutput
    m_OnEqualTo = 0x8A8 # CEntityIOOutput

class CPointBroadcastClientCommand: # CPointEntity

class CPointCamera: # CBaseEntity
    m_FOV = 0x7A8 # float
    m_Resolution = 0x7AC # float
    m_bFogEnable = 0x7B0 # bool
    m_FogColor = 0x7B1 # Color
    m_flFogStart = 0x7B8 # float
    m_flFogEnd = 0x7BC # float
    m_flFogMaxDensity = 0x7C0 # float
    m_bActive = 0x7C4 # bool
    m_bUseScreenAspectRatio = 0x7C5 # bool
    m_flAspectRatio = 0x7C8 # float
    m_bNoSky = 0x7CC # bool
    m_fBrightness = 0x7D0 # float
    m_flZFar = 0x7D4 # float
    m_flZNear = 0x7D8 # float
    m_bCanHLTVUse = 0x7DC # bool
    m_bDofEnabled = 0x7DD # bool
    m_flDofNearBlurry = 0x7E0 # float
    m_flDofNearCrisp = 0x7E4 # float
    m_flDofFarCrisp = 0x7E8 # float
    m_flDofFarBlurry = 0x7EC # float
    m_flDofTiltToGround = 0x7F0 # float
    m_TargetFOV = 0x7F4 # float
    m_DegreesPerSecond = 0x7F8 # float
    m_bIsOn = 0x7FC # bool
    m_pNext = 0x800 # CPointCamera*

class CPointCameraVFOV: # CPointCamera
    m_flVerticalFOV = 0x808 # float

class CPointClientCommand: # CPointEntity

class CPointClientUIDialog: # CBaseClientUIEntity
    m_hActivator = 0xBA8 # CHandle<CBaseEntity>
    m_bStartEnabled = 0xBAC # bool

class CPointClientUIWorldPanel: # CBaseClientUIEntity
    m_bIgnoreInput = 0xBA8 # bool
    m_bLit = 0xBA9 # bool
    m_bFollowPlayerAcrossTeleport = 0xBAA # bool
    m_flWidth = 0xBAC # float
    m_flHeight = 0xBB0 # float
    m_flDPI = 0xBB4 # float
    m_flInteractDistance = 0xBB8 # float
    m_flDepthOffset = 0xBBC # float
    m_unOwnerContext = 0xBC0 # uint32_t
    m_unHorizontalAlign = 0xBC4 # uint32_t
    m_unVerticalAlign = 0xBC8 # uint32_t
    m_unOrientation = 0xBCC # uint32_t
    m_bAllowInteractionFromAllSceneWorlds = 0xBD0 # bool
    m_vecCSSClasses = 0xBD8 # CNetworkUtlVectorBase<CUtlSymbolLarge>
    m_bOpaque = 0xBF0 # bool
    m_bNoDepth = 0xBF1 # bool
    m_bRenderBackface = 0xBF2 # bool
    m_bUseOffScreenIndicator = 0xBF3 # bool
    m_bExcludeFromSaveGames = 0xBF4 # bool
    m_bGrabbable = 0xBF5 # bool
    m_bOnlyRenderToTexture = 0xBF6 # bool
    m_bDisableMipGen = 0xBF7 # bool
    m_nExplicitImageLayout = 0xBF8 # int32_t

class CPointClientUIWorldTextPanel: # CPointClientUIWorldPanel
    m_messageText = 0xBFC # char[512]

class CPointCommentaryNode: # CBaseAnimGraph
    m_iszPreCommands = 0xBF0 # CUtlSymbolLarge
    m_iszPostCommands = 0xBF8 # CUtlSymbolLarge
    m_iszCommentaryFile = 0xC00 # CUtlSymbolLarge
    m_iszViewTarget = 0xC08 # CUtlSymbolLarge
    m_hViewTarget = 0xC10 # CHandle<CBaseEntity>
    m_hViewTargetAngles = 0xC14 # CHandle<CBaseEntity>
    m_iszViewPosition = 0xC18 # CUtlSymbolLarge
    m_hViewPosition = 0xC20 # CHandle<CBaseEntity>
    m_hViewPositionMover = 0xC24 # CHandle<CBaseEntity>
    m_bPreventMovement = 0xC28 # bool
    m_bUnderCrosshair = 0xC29 # bool
    m_bUnstoppable = 0xC2A # bool
    m_flFinishedTime = 0xC2C # GameTime_t
    m_vecFinishOrigin = 0xC30 # Vector
    m_vecOriginalAngles = 0xC3C # QAngle
    m_vecFinishAngles = 0xC48 # QAngle
    m_bPreventChangesWhileMoving = 0xC54 # bool
    m_bDisabled = 0xC55 # bool
    m_vecTeleportOrigin = 0xC58 # Vector
    m_flAbortedPlaybackAt = 0xC64 # GameTime_t
    m_pOnCommentaryStarted = 0xC68 # CEntityIOOutput
    m_pOnCommentaryStopped = 0xC90 # CEntityIOOutput
    m_bActive = 0xCB8 # bool
    m_flStartTime = 0xCBC # GameTime_t
    m_flStartTimeInCommentary = 0xCC0 # float
    m_iszTitle = 0xCC8 # CUtlSymbolLarge
    m_iszSpeakers = 0xCD0 # CUtlSymbolLarge
    m_iNodeNumber = 0xCD8 # int32_t
    m_iNodeNumberMax = 0xCDC # int32_t
    m_bListenedTo = 0xCE0 # bool

class CPointEntity: # CBaseEntity

class CPointEntityFinder: # CBaseEntity
    m_hEntity = 0x7A8 # CHandle<CBaseEntity>
    m_iFilterName = 0x7B0 # CUtlSymbolLarge
    m_hFilter = 0x7B8 # CHandle<CBaseFilter>
    m_iRefName = 0x7C0 # CUtlSymbolLarge
    m_hReference = 0x7C8 # CHandle<CBaseEntity>
    m_FindMethod = 0x7CC # EntFinderMethod_t
    m_OnFoundEntity = 0x7D0 # CEntityIOOutput

class CPointGamestatsCounter: # CPointEntity
    m_strStatisticName = 0x7A8 # CUtlSymbolLarge
    m_bDisabled = 0x7B0 # bool

class CPointGiveAmmo: # CPointEntity
    m_pActivator = 0x7A8 # CHandle<CBaseEntity>

class CPointHurt: # CPointEntity
    m_nDamage = 0x7A8 # int32_t
    m_bitsDamageType = 0x7AC # int32_t
    m_flRadius = 0x7B0 # float
    m_flDelay = 0x7B4 # float
    m_strTarget = 0x7B8 # CUtlSymbolLarge
    m_pActivator = 0x7C0 # CHandle<CBaseEntity>

class CPointPrefab: # CServerOnlyPointEntity
    m_targetMapName = 0x7A8 # CUtlSymbolLarge
    m_forceWorldGroupID = 0x7B0 # CUtlSymbolLarge
    m_associatedRelayTargetName = 0x7B8 # CUtlSymbolLarge
    m_fixupNames = 0x7C0 # bool
    m_bLoadDynamic = 0x7C1 # bool
    m_associatedRelayEntity = 0x7C4 # CHandle<CPointPrefab>

class CPointProximitySensor: # CPointEntity
    m_bDisabled = 0x7A8 # bool
    m_hTargetEntity = 0x7AC # CHandle<CBaseEntity>
    m_Distance = 0x7B0 # CEntityOutputTemplate<float>

class CPointPulse: # CBaseEntity

class CPointPush: # CPointEntity
    m_bEnabled = 0x7A8 # bool
    m_flMagnitude = 0x7AC # float
    m_flRadius = 0x7B0 # float
    m_flInnerRadius = 0x7B4 # float
    m_flConeOfInfluence = 0x7B8 # float
    m_iszFilterName = 0x7C0 # CUtlSymbolLarge
    m_hFilter = 0x7C8 # CHandle<CBaseFilter>

class CPointScriptEntity: # CBaseEntity

class CPointServerCommand: # CPointEntity

class CPointTeleport: # CServerOnlyPointEntity
    m_vSaveOrigin = 0x7A8 # Vector
    m_vSaveAngles = 0x7B4 # QAngle
    m_bTeleportParentedEntities = 0x7C0 # bool
    m_bTeleportUseCurrentAngle = 0x7C1 # bool

class CPointTemplate: # CLogicalEntity
    m_iszWorldName = 0x7A8 # CUtlSymbolLarge
    m_iszSource2EntityLumpName = 0x7B0 # CUtlSymbolLarge
    m_iszEntityFilterName = 0x7B8 # CUtlSymbolLarge
    m_flTimeoutInterval = 0x7C0 # float
    m_bAsynchronouslySpawnEntities = 0x7C4 # bool
    m_pOutputOnSpawned = 0x7C8 # CEntityIOOutput
    m_clientOnlyEntityBehavior = 0x7F0 # PointTemplateClientOnlyEntityBehavior_t
    m_ownerSpawnGroupType = 0x7F4 # PointTemplateOwnerSpawnGroupType_t
    m_createdSpawnGroupHandles = 0x7F8 # CUtlVector<uint32_t>
    m_SpawnedEntityHandles = 0x810 # CUtlVector<CEntityHandle>
    m_ScriptSpawnCallback = 0x828 # HSCRIPT
    m_ScriptCallbackScope = 0x830 # HSCRIPT

class CPointValueRemapper: # CBaseEntity
    m_bDisabled = 0x7A8 # bool
    m_bUpdateOnClient = 0x7A9 # bool
    m_nInputType = 0x7AC # ValueRemapperInputType_t
    m_iszRemapLineStartName = 0x7B0 # CUtlSymbolLarge
    m_iszRemapLineEndName = 0x7B8 # CUtlSymbolLarge
    m_hRemapLineStart = 0x7C0 # CHandle<CBaseEntity>
    m_hRemapLineEnd = 0x7C4 # CHandle<CBaseEntity>
    m_flMaximumChangePerSecond = 0x7C8 # float
    m_flDisengageDistance = 0x7CC # float
    m_flEngageDistance = 0x7D0 # float
    m_bRequiresUseKey = 0x7D4 # bool
    m_nOutputType = 0x7D8 # ValueRemapperOutputType_t
    m_iszOutputEntityName = 0x7E0 # CUtlSymbolLarge
    m_iszOutputEntity2Name = 0x7E8 # CUtlSymbolLarge
    m_iszOutputEntity3Name = 0x7F0 # CUtlSymbolLarge
    m_iszOutputEntity4Name = 0x7F8 # CUtlSymbolLarge
    m_hOutputEntities = 0x800 # CNetworkUtlVectorBase<CHandle<CBaseEntity>>
    m_nHapticsType = 0x818 # ValueRemapperHapticsType_t
    m_nMomentumType = 0x81C # ValueRemapperMomentumType_t
    m_flMomentumModifier = 0x820 # float
    m_flSnapValue = 0x824 # float
    m_flCurrentMomentum = 0x828 # float
    m_nRatchetType = 0x82C # ValueRemapperRatchetType_t
    m_flRatchetOffset = 0x830 # float
    m_flInputOffset = 0x834 # float
    m_bEngaged = 0x838 # bool
    m_bFirstUpdate = 0x839 # bool
    m_flPreviousValue = 0x83C # float
    m_flPreviousUpdateTickTime = 0x840 # GameTime_t
    m_vecPreviousTestPoint = 0x844 # Vector
    m_hUsingPlayer = 0x850 # CHandle<CBasePlayerPawn>
    m_flCustomOutputValue = 0x854 # float
    m_iszSoundEngage = 0x858 # CUtlSymbolLarge
    m_iszSoundDisengage = 0x860 # CUtlSymbolLarge
    m_iszSoundReachedValueZero = 0x868 # CUtlSymbolLarge
    m_iszSoundReachedValueOne = 0x870 # CUtlSymbolLarge
    m_iszSoundMovingLoop = 0x878 # CUtlSymbolLarge
    m_Position = 0x888 # CEntityOutputTemplate<float>
    m_PositionDelta = 0x8B0 # CEntityOutputTemplate<float>
    m_OnReachedValueZero = 0x8D8 # CEntityIOOutput
    m_OnReachedValueOne = 0x900 # CEntityIOOutput
    m_OnReachedValueCustom = 0x928 # CEntityIOOutput
    m_OnEngage = 0x950 # CEntityIOOutput
    m_OnDisengage = 0x978 # CEntityIOOutput

class CPointVelocitySensor: # CPointEntity
    m_hTargetEntity = 0x7A8 # CHandle<CBaseEntity>
    m_vecAxis = 0x7AC # Vector
    m_bEnabled = 0x7B8 # bool
    m_fPrevVelocity = 0x7BC # float
    m_flAvgInterval = 0x7C0 # float
    m_Velocity = 0x7C8 # CEntityOutputTemplate<float>

class CPointWorldText: # CModelPointEntity
    m_messageText = 0x9F8 # char[512]
    m_FontName = 0xBF8 # char[64]
    m_bEnabled = 0xC38 # bool
    m_bFullbright = 0xC39 # bool
    m_flWorldUnitsPerPx = 0xC3C # float
    m_flFontSize = 0xC40 # float
    m_flDepthOffset = 0xC44 # float
    m_Color = 0xC48 # Color
    m_nJustifyHorizontal = 0xC4C # PointWorldTextJustifyHorizontal_t
    m_nJustifyVertical = 0xC50 # PointWorldTextJustifyVertical_t
    m_nReorientMode = 0xC54 # PointWorldTextReorientMode_t

class CPostProcessingVolume: # CBaseTrigger
    m_hPostSettings = 0xBB0 # CStrongHandle<InfoForResourceTypeCPostProcessingResource>
    m_flFadeDuration = 0xBB8 # float
    m_flMinLogExposure = 0xBBC # float
    m_flMaxLogExposure = 0xBC0 # float
    m_flMinExposure = 0xBC4 # float
    m_flMaxExposure = 0xBC8 # float
    m_flExposureCompensation = 0xBCC # float
    m_flExposureFadeSpeedUp = 0xBD0 # float
    m_flExposureFadeSpeedDown = 0xBD4 # float
    m_flTonemapEVSmoothingRange = 0xBD8 # float
    m_bMaster = 0xBDC # bool
    m_bExposureControl = 0xBDD # bool
    m_flRate = 0xBE0 # float
    m_flTonemapPercentTarget = 0xBE4 # float
    m_flTonemapPercentBrightPixels = 0xBE8 # float
    m_flTonemapMinAvgLum = 0xBEC # float

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
    m_nTexture = 0x7A8 # int32_t
    m_flDistance = 0x7AC # float

class CPropDoorRotating: # CBasePropDoor
    m_vecAxis = 0x10F0 # Vector
    m_flDistance = 0x10FC # float
    m_eSpawnPosition = 0x1100 # PropDoorRotatingSpawnPos_t
    m_eOpenDirection = 0x1104 # PropDoorRotatingOpenDirection_e
    m_eCurrentOpenDirection = 0x1108 # PropDoorRotatingOpenDirection_e
    m_flAjarAngle = 0x110C # float
    m_angRotationAjarDeprecated = 0x1110 # QAngle
    m_angRotationClosed = 0x111C # QAngle
    m_angRotationOpenForward = 0x1128 # QAngle
    m_angRotationOpenBack = 0x1134 # QAngle
    m_angGoal = 0x1140 # QAngle
    m_vecForwardBoundsMin = 0x114C # Vector
    m_vecForwardBoundsMax = 0x1158 # Vector
    m_vecBackBoundsMin = 0x1164 # Vector
    m_vecBackBoundsMax = 0x1170 # Vector
    m_bAjarDoorShouldntAlwaysOpen = 0x117C # bool
    m_hEntityBlocker = 0x1180 # CHandle<CEntityBlocker>

class CPropDoorRotatingBreakable: # CPropDoorRotating
    m_bBreakable = 0x1184 # bool
    m_isAbleToCloseAreaPortals = 0x1185 # bool
    m_currentDamageState = 0x1188 # int32_t
    m_damageStates = 0x1190 # CUtlVector<CUtlSymbolLarge>

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
    m_Params = 0x141 # ResponseParams
    m_fMatchScore = 0x160 # float
    m_szSpeakerContext = 0x168 # char*
    m_szWorldContext = 0x170 # char*
    m_Followup = 0x178 # ResponseFollowup
    m_pchCriteriaNames = 0x1B0 # CUtlVector<CUtlSymbol>
    m_pchCriteriaValues = 0x1C8 # CUtlVector<char*>

class CRagdollConstraint: # CPhysConstraint
    m_xmin = 0x800 # float
    m_xmax = 0x804 # float
    m_ymin = 0x808 # float
    m_ymax = 0x80C # float
    m_zmin = 0x810 # float
    m_zmax = 0x814 # float
    m_xfriction = 0x818 # float
    m_yfriction = 0x81C # float
    m_zfriction = 0x820 # float

class CRagdollMagnet: # CPointEntity
    m_bDisabled = 0x7A8 # bool
    m_radius = 0x7AC # float
    m_force = 0x7B0 # float
    m_axis = 0x7B4 # Vector

class CRagdollManager: # CBaseEntity
    m_iCurrentMaxRagdollCount = 0x7A8 # int8_t
    m_iMaxRagdollCount = 0x7AC # int32_t
    m_bSaveImportant = 0x7B0 # bool

class CRagdollProp: # CBaseAnimGraph
    m_ragdoll = 0xBF8 # ragdoll_t
    m_bStartDisabled = 0xC30 # bool
    m_ragPos = 0xC38 # CNetworkUtlVectorBase<Vector>
    m_ragAngles = 0xC50 # CNetworkUtlVectorBase<QAngle>
    m_hRagdollSource = 0xC68 # CHandle<CBaseEntity>
    m_lastUpdateTickCount = 0xC6C # uint32_t
    m_allAsleep = 0xC70 # bool
    m_bFirstCollisionAfterLaunch = 0xC71 # bool
    m_hDamageEntity = 0xC74 # CHandle<CBaseEntity>
    m_hKiller = 0xC78 # CHandle<CBaseEntity>
    m_hPhysicsAttacker = 0xC7C # CHandle<CBasePlayerPawn>
    m_flLastPhysicsInfluenceTime = 0xC80 # GameTime_t
    m_flFadeOutStartTime = 0xC84 # GameTime_t
    m_flFadeTime = 0xC88 # float
    m_vecLastOrigin = 0xC8C # Vector
    m_flAwakeTime = 0xC98 # GameTime_t
    m_flLastOriginChangeTime = 0xC9C # GameTime_t
    m_nBloodColor = 0xCA0 # int32_t
    m_strOriginClassName = 0xCA8 # CUtlSymbolLarge
    m_strSourceClassName = 0xCB0 # CUtlSymbolLarge
    m_bHasBeenPhysgunned = 0xCB8 # bool
    m_bShouldTeleportPhysics = 0xCB9 # bool
    m_flBlendWeight = 0xCBC # float
    m_flDefaultFadeScale = 0xCC0 # float
    m_ragdollMins = 0xCC8 # CUtlVector<Vector>
    m_ragdollMaxs = 0xCE0 # CUtlVector<Vector>
    m_bShouldDeleteActivationRecord = 0xCF8 # bool
    m_bValidatePoweredRagdollPose = 0xD58 # bool

class CRagdollPropAlias_physics_prop_ragdoll: # CRagdollProp

class CRagdollPropAttached: # CRagdollProp
    m_boneIndexAttached = 0xD98 # uint32_t
    m_ragdollAttachedObjectIndex = 0xD9C # uint32_t
    m_attachmentPointBoneSpace = 0xDA0 # Vector
    m_attachmentPointRagdollSpace = 0xDAC # Vector
    m_bShouldDetach = 0xDB8 # bool
    m_bShouldDeleteAttachedActivationRecord = 0xDC8 # bool

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
    m_bShowLight = 0xC20 # bool

class CRemapFloat:
    m_pValue = 0x0 # float[4]

class CRenderComponent: # CEntityComponent
    __m_pChainEntity = 0x10 # CNetworkVarChainer
    m_bIsRenderingWithViewModels = 0x50 # bool
    m_nSplitscreenFlags = 0x54 # uint32_t
    m_bEnableRendering = 0x60 # bool
    m_bInterpolationReadyToDraw = 0xC0 # bool

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
    m_bResponseValid = 0x228 # bool

class CRetakeGameRules:
    m_nMatchSeed = 0xF8 # int32_t
    m_bBlockersPresent = 0xFC # bool
    m_bRoundInProgress = 0xFD # bool
    m_iFirstSecondHalfRound = 0x100 # int32_t
    m_iBombSite = 0x104 # int32_t

class CRevertSaved: # CModelPointEntity
    m_loadTime = 0x9F8 # float
    m_Duration = 0x9FC # float
    m_HoldTime = 0xA00 # float

class CRopeKeyframe: # CBaseModelEntity
    m_RopeFlags = 0xA00 # uint16_t
    m_iNextLinkName = 0xA08 # CUtlSymbolLarge
    m_Slack = 0xA10 # int16_t
    m_Width = 0xA14 # float
    m_TextureScale = 0xA18 # float
    m_nSegments = 0xA1C # uint8_t
    m_bConstrainBetweenEndpoints = 0xA1D # bool
    m_strRopeMaterialModel = 0xA20 # CUtlSymbolLarge
    m_iRopeMaterialModelIndex = 0xA28 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_Subdiv = 0xA30 # uint8_t
    m_nChangeCount = 0xA31 # uint8_t
    m_RopeLength = 0xA32 # int16_t
    m_fLockedPoints = 0xA34 # uint8_t
    m_bCreatedFromMapFile = 0xA35 # bool
    m_flScrollSpeed = 0xA38 # float
    m_bStartPointValid = 0xA3C # bool
    m_bEndPointValid = 0xA3D # bool
    m_hStartPoint = 0xA40 # CHandle<CBaseEntity>
    m_hEndPoint = 0xA44 # CHandle<CBaseEntity>
    m_iStartAttachment = 0xA48 # AttachmentHandle_t
    m_iEndAttachment = 0xA49 # AttachmentHandle_t

class CRopeKeyframeAlias_move_rope: # CRopeKeyframe

class CRopeOverlapHit:
    m_hEntity = 0x0 # CHandle<CBaseEntity>
    m_vecOverlappingLinks = 0x8 # CUtlVector<int32_t>

class CRotButton: # CBaseButton

class CRotDoor: # CBaseDoor
    m_bSolidBsp = 0xC7B # bool

class CRuleBrushEntity: # CRuleEntity

class CRuleEntity: # CBaseModelEntity
    m_iszMaster = 0x9F8 # CUtlSymbolLarge

class CRulePointEntity: # CRuleEntity
    m_Score = 0xA00 # int32_t

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
    m_iEnemy5Ks = 0x64 # int32_t
    m_iEnemy4Ks = 0x68 # int32_t
    m_iEnemy3Ks = 0x6C # int32_t
    m_iEnemyKnifeKills = 0x70 # int32_t
    m_iEnemyTaserKills = 0x74 # int32_t
    m_iEnemy2Ks = 0x78 # int32_t
    m_iUtility_Count = 0x7C # int32_t
    m_iUtility_Successes = 0x80 # int32_t
    m_iUtility_Enemies = 0x84 # int32_t
    m_iFlash_Count = 0x88 # int32_t
    m_iFlash_Successes = 0x8C # int32_t
    m_nHealthPointsRemovedTotal = 0x90 # int32_t
    m_nHealthPointsDealtTotal = 0x94 # int32_t
    m_nShotsFiredTotal = 0x98 # int32_t
    m_nShotsOnTargetTotal = 0x9C # int32_t
    m_i1v1Count = 0xA0 # int32_t
    m_i1v1Wins = 0xA4 # int32_t
    m_i1v2Count = 0xA8 # int32_t
    m_i1v2Wins = 0xAC # int32_t
    m_iEntryCount = 0xB0 # int32_t
    m_iEntryWins = 0xB4 # int32_t

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
    m_iszSceneFile = 0x7B0 # CUtlSymbolLarge
    m_iszResumeSceneFile = 0x7B8 # CUtlSymbolLarge
    m_iszTarget1 = 0x7C0 # CUtlSymbolLarge
    m_iszTarget2 = 0x7C8 # CUtlSymbolLarge
    m_iszTarget3 = 0x7D0 # CUtlSymbolLarge
    m_iszTarget4 = 0x7D8 # CUtlSymbolLarge
    m_iszTarget5 = 0x7E0 # CUtlSymbolLarge
    m_iszTarget6 = 0x7E8 # CUtlSymbolLarge
    m_iszTarget7 = 0x7F0 # CUtlSymbolLarge
    m_iszTarget8 = 0x7F8 # CUtlSymbolLarge
    m_hTarget1 = 0x800 # CHandle<CBaseEntity>
    m_hTarget2 = 0x804 # CHandle<CBaseEntity>
    m_hTarget3 = 0x808 # CHandle<CBaseEntity>
    m_hTarget4 = 0x80C # CHandle<CBaseEntity>
    m_hTarget5 = 0x810 # CHandle<CBaseEntity>
    m_hTarget6 = 0x814 # CHandle<CBaseEntity>
    m_hTarget7 = 0x818 # CHandle<CBaseEntity>
    m_hTarget8 = 0x81C # CHandle<CBaseEntity>
    m_bIsPlayingBack = 0x820 # bool
    m_bPaused = 0x821 # bool
    m_bMultiplayer = 0x822 # bool
    m_bAutogenerated = 0x823 # bool
    m_flForceClientTime = 0x824 # float
    m_flCurrentTime = 0x828 # float
    m_flFrameTime = 0x82C # float
    m_bCancelAtNextInterrupt = 0x830 # bool
    m_fPitch = 0x834 # float
    m_bAutomated = 0x838 # bool
    m_nAutomatedAction = 0x83C # int32_t
    m_flAutomationDelay = 0x840 # float
    m_flAutomationTime = 0x844 # float
    m_hWaitingForThisResumeScene = 0x848 # CHandle<CBaseEntity>
    m_bWaitingForResumeScene = 0x84C # bool
    m_bPausedViaInput = 0x84D # bool
    m_bPauseAtNextInterrupt = 0x84E # bool
    m_bWaitingForActor = 0x84F # bool
    m_bWaitingForInterrupt = 0x850 # bool
    m_bInterruptedActorsScenes = 0x851 # bool
    m_bBreakOnNonIdle = 0x852 # bool
    m_hActorList = 0x858 # CNetworkUtlVectorBase<CHandle<CBaseFlex>>
    m_hRemoveActorList = 0x870 # CUtlVector<CHandle<CBaseEntity>>
    m_nSceneFlushCounter = 0x8B8 # int32_t
    m_nSceneStringIndex = 0x8BC # uint16_t
    m_OnStart = 0x8C0 # CEntityIOOutput
    m_OnCompletion = 0x8E8 # CEntityIOOutput
    m_OnCanceled = 0x910 # CEntityIOOutput
    m_OnPaused = 0x938 # CEntityIOOutput
    m_OnResumed = 0x960 # CEntityIOOutput
    m_OnTrigger = 0x988 # CEntityIOOutput[16]
    m_hInterruptScene = 0xC98 # CHandle<CSceneEntity>
    m_nInterruptCount = 0xC9C # int32_t
    m_bSceneMissing = 0xCA0 # bool
    m_bInterrupted = 0xCA1 # bool
    m_bCompletedEarly = 0xCA2 # bool
    m_bInterruptSceneFinished = 0xCA3 # bool
    m_bRestoring = 0xCA4 # bool
    m_hNotifySceneCompletion = 0xCA8 # CUtlVector<CHandle<CSceneEntity>>
    m_hListManagers = 0xCC0 # CUtlVector<CHandle<CSceneListManager>>
    m_iszSoundName = 0xCD8 # CUtlSymbolLarge
    m_iszSequenceName = 0xCE0 # CUtlSymbolLarge
    m_hActor = 0xCE8 # CHandle<CBaseFlex>
    m_hActivator = 0xCEC # CHandle<CBaseEntity>
    m_BusyActor = 0xCF0 # int32_t
    m_iPlayerDeathBehavior = 0xCF4 # SceneOnPlayerDeath_t

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
    m_hListManagers = 0x7A8 # CUtlVector<CHandle<CSceneListManager>>
    m_iszScenes = 0x7C0 # CUtlSymbolLarge[16]
    m_hScenes = 0x840 # CHandle<CBaseEntity>[16]

class CScriptComponent: # CEntityComponent
    m_scriptClassName = 0x30 # CUtlSymbolLarge

class CScriptItem: # CItem
    m_OnPlayerPickup = 0xCC8 # CEntityIOOutput
    m_MoveTypeOverride = 0xCF0 # MoveType_t

class CScriptNavBlocker: # CFuncNavBlocker
    m_vExtent = 0xA08 # Vector

class CScriptTriggerHurt: # CTriggerHurt
    m_vExtent = 0xC38 # Vector

class CScriptTriggerMultiple: # CTriggerMultiple
    m_vExtent = 0xBC8 # Vector

class CScriptTriggerOnce: # CTriggerOnce
    m_vExtent = 0xBC8 # Vector

class CScriptTriggerPush: # CTriggerPush
    m_vExtent = 0xBB8 # Vector

class CScriptUniformRandomStream:
    m_hScriptScope = 0x8 # HSCRIPT
    m_nInitialSeed = 0x9C # int32_t

class CScriptedSequence: # CBaseEntity
    m_iszEntry = 0x7A8 # CUtlSymbolLarge
    m_iszPreIdle = 0x7B0 # CUtlSymbolLarge
    m_iszPlay = 0x7B8 # CUtlSymbolLarge
    m_iszPostIdle = 0x7C0 # CUtlSymbolLarge
    m_iszModifierToAddOnPlay = 0x7C8 # CUtlSymbolLarge
    m_iszNextScript = 0x7D0 # CUtlSymbolLarge
    m_iszEntity = 0x7D8 # CUtlSymbolLarge
    m_iszSyncGroup = 0x7E0 # CUtlSymbolLarge
    m_nMoveTo = 0x7E8 # ScriptedMoveTo_t
    m_bIsPlayingPreIdle = 0x7EC # bool
    m_bIsPlayingEntry = 0x7ED # bool
    m_bIsPlayingAction = 0x7EE # bool
    m_bIsPlayingPostIdle = 0x7EF # bool
    m_bLoopPreIdleSequence = 0x7F0 # bool
    m_bLoopActionSequence = 0x7F1 # bool
    m_bLoopPostIdleSequence = 0x7F2 # bool
    m_bSynchPostIdles = 0x7F3 # bool
    m_bIgnoreLookAt = 0x7F4 # bool
    m_bIgnoreGravity = 0x7F5 # bool
    m_bDisableNPCCollisions = 0x7F6 # bool
    m_bKeepAnimgraphLockedPost = 0x7F7 # bool
    m_bDontAddModifiers = 0x7F8 # bool
    m_flRadius = 0x7FC # float
    m_flRepeat = 0x800 # float
    m_flPlayAnimFadeInTime = 0x804 # float
    m_flMoveInterpTime = 0x808 # float
    m_flAngRate = 0x80C # float
    m_nNotReadySequenceCount = 0x810 # int32_t
    m_startTime = 0x814 # GameTime_t
    m_bWaitForBeginSequence = 0x818 # bool
    m_saved_effects = 0x81C # int32_t
    m_savedFlags = 0x820 # int32_t
    m_savedCollisionGroup = 0x824 # int32_t
    m_interruptable = 0x828 # bool
    m_sequenceStarted = 0x829 # bool
    m_bPositionRelativeToOtherEntity = 0x82A # bool
    m_hTargetEnt = 0x82C # CHandle<CBaseEntity>
    m_hNextCine = 0x830 # CHandle<CScriptedSequence>
    m_bThinking = 0x834 # bool
    m_bInitiatedSelfDelete = 0x835 # bool
    m_bIsTeleportingDueToMoveTo = 0x836 # bool
    m_bAllowCustomInterruptConditions = 0x837 # bool
    m_hLastFoundEntity = 0x838 # CHandle<CBaseEntity>
    m_hForcedTarget = 0x83C # CHandle<CBaseAnimGraph>
    m_bDontCancelOtherSequences = 0x840 # bool
    m_bForceSynch = 0x841 # bool
    m_bPreventUpdateYawOnFinish = 0x842 # bool
    m_bEnsureOnNavmeshOnFinish = 0x843 # bool
    m_onDeathBehavior = 0x844 # ScriptedOnDeath_t
    m_ConflictResponse = 0x848 # ScriptedConflictResponse_t
    m_OnBeginSequence = 0x850 # CEntityIOOutput
    m_OnActionStartOrLoop = 0x878 # CEntityIOOutput
    m_OnEndSequence = 0x8A0 # CEntityIOOutput
    m_OnPostIdleEndSequence = 0x8C8 # CEntityIOOutput
    m_OnCancelSequence = 0x8F0 # CEntityIOOutput
    m_OnCancelFailedSequence = 0x918 # CEntityIOOutput
    m_OnScriptEvent = 0x940 # CEntityIOOutput[8]
    m_matOtherToMain = 0xA80 # CTransform
    m_hInteractionMainEntity = 0xAA0 # CHandle<CBaseEntity>
    m_iPlayerDeathBehavior = 0xAA4 # int32_t

class CSensorGrenade: # CBaseCSGrenade

class CSensorGrenadeProjectile: # CBaseCSGrenadeProjectile
    m_fExpireTime = 0xD98 # GameTime_t
    m_fNextDetectPlayerSound = 0xD9C # GameTime_t
    m_hDisplayGrenade = 0xDA0 # CHandle<CBaseEntity>

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
    m_bDebris = 0xED4 # bool
    m_hParentShard = 0xED8 # uint32_t
    m_ShardDesc = 0xEE0 # shard_model_desc_t

class CShower: # CModelPointEntity

class CSimTimer: # CSimpleSimTimer
    m_interval = 0x8 # float

class CSimpleMarkupVolumeTagged: # CMarkupVolumeTagged

class CSimpleSimTimer:
    m_next = 0x0 # GameTime_t
    m_nWorldGroupId = 0x4 # WorldGroupId_t

class CSimpleStopwatch: # CStopwatchBase

class CSingleplayRules: # CGameRules
    m_bSinglePlayerGameEnding = 0x8C # bool

class CSkeletonAnimationController: # ISkeletonAnimationController
    m_pSkeletonInstance = 0x8 # CSkeletonInstance*

class CSkeletonInstance: # CGameSceneNode
    m_modelState = 0x160 # CModelState
    m_bIsAnimationEnabled = 0x380 # bool
    m_bUseParentRenderBounds = 0x381 # bool
    m_bDisableSolidCollisionsForHierarchy = 0x382 # bool
    m_bDirtyMotionType = 0x0 # bitfield:1
    m_bIsGeneratingLatchedParentSpaceState = 0x0 # bitfield:1
    m_materialGroup = 0x384 # CUtlStringToken
    m_nHitboxSet = 0x388 # uint8_t

class CSkillDamage:
    m_flDamage = 0x0 # CSkillFloat
    m_flPhysicsForceDamage = 0x10 # float

class CSkillFloat:
    m_pValue = 0x0 # float[4]

class CSkillInt:
    m_pValue = 0x0 # int32_t[4]

class CSkyCamera: # CBaseEntity
    m_skyboxData = 0x7A8 # sky3dparams_t
    m_skyboxSlotToken = 0x838 # CUtlStringToken
    m_bUseAngles = 0x83C # bool
    m_pNext = 0x840 # CSkyCamera*

class CSkyboxReference: # CBaseEntity
    m_worldGroupId = 0x7A8 # WorldGroupId_t
    m_hSkyCamera = 0x7AC # CHandle<CSkyCamera>

class CSmokeGrenade: # CBaseCSGrenade

class CSmokeGrenadeProjectile: # CBaseCSGrenadeProjectile
    m_nSmokeEffectTickBegin = 0xDB0 # int32_t
    m_bDidSmokeEffect = 0xDB4 # bool
    m_nRandomSeed = 0xDB8 # int32_t
    m_vSmokeColor = 0xDBC # Vector
    m_vSmokeDetonationPos = 0xDC8 # Vector
    m_VoxelFrameData = 0xDD8 # CUtlVector<uint8_t>
    m_flLastBounce = 0xDF0 # GameTime_t
    m_fllastSimulationTime = 0xDF4 # GameTime_t

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
    m_bDisabled = 0x7A8 # bool
    m_iszSoundAreaType = 0x7B0 # CUtlSymbolLarge
    m_vPos = 0x7B8 # Vector

class CSoundAreaEntityOrientedBox: # CSoundAreaEntityBase
    m_vMin = 0x7C4 # Vector
    m_vMax = 0x7D0 # Vector

class CSoundAreaEntitySphere: # CSoundAreaEntityBase
    m_flRadius = 0x7C4 # float

class CSoundEnt: # CPointEntity
    m_iFreeSound = 0x7A8 # int32_t
    m_iActiveSound = 0x7AC # int32_t
    m_cLastActiveSounds = 0x7B0 # int32_t
    m_SoundPool = 0x7B4 # CSound[128]

class CSoundEnvelope:
    m_current = 0x0 # float
    m_target = 0x4 # float
    m_rate = 0x8 # float
    m_forceupdate = 0xC # bool

class CSoundEventAABBEntity: # CSoundEventEntity
    m_vMins = 0x84C # Vector
    m_vMaxs = 0x858 # Vector

class CSoundEventEntity: # CBaseEntity
    m_bStartOnSpawn = 0x7A8 # bool
    m_bToLocalPlayer = 0x7A9 # bool
    m_bStopOnNew = 0x7AA # bool
    m_bSaveRestore = 0x7AB # bool
    m_bSavedIsPlaying = 0x7AC # bool
    m_flSavedElapsedTime = 0x7B0 # float
    m_iszSourceEntityName = 0x7B8 # CUtlSymbolLarge
    m_iszAttachmentName = 0x7C0 # CUtlSymbolLarge
    m_onGUIDChanged = 0x7C8 # CEntityOutputTemplate<uint64_t>
    m_onSoundFinished = 0x7F0 # CEntityIOOutput
    m_iszSoundName = 0x838 # CUtlSymbolLarge
    m_hSource = 0x848 # CEntityHandle

class CSoundEventEntityAlias_snd_event_point: # CSoundEventEntity

class CSoundEventOBBEntity: # CSoundEventEntity
    m_vMins = 0x84C # Vector
    m_vMaxs = 0x858 # Vector

class CSoundEventParameter: # CBaseEntity
    m_iszParamName = 0x7B0 # CUtlSymbolLarge
    m_flFloatValue = 0x7B8 # float

class CSoundEventPathCornerEntity: # CSoundEventEntity
    m_iszPathCorner = 0x850 # CUtlSymbolLarge
    m_iCountMax = 0x858 # int32_t
    m_flDistanceMax = 0x85C # float
    m_flDistMaxSqr = 0x860 # float
    m_flDotProductMax = 0x864 # float
    bPlaying = 0x868 # bool

class CSoundOpvarSetAABBEntity: # CSoundOpvarSetPointEntity
    m_vDistanceInnerMins = 0x94C # Vector
    m_vDistanceInnerMaxs = 0x958 # Vector
    m_vDistanceOuterMins = 0x964 # Vector
    m_vDistanceOuterMaxs = 0x970 # Vector
    m_nAABBDirection = 0x97C # int32_t
    m_vInnerMins = 0x980 # Vector
    m_vInnerMaxs = 0x98C # Vector
    m_vOuterMins = 0x998 # Vector
    m_vOuterMaxs = 0x9A4 # Vector

class CSoundOpvarSetAutoRoomEntity: # CSoundOpvarSetPointEntity
    m_traceResults = 0x950 # CUtlVector<SoundOpvarTraceResult_t>
    m_flSize = 0x980 # float
    m_flHeightTolerance = 0x984 # float
    m_flSizeSqr = 0x988 # float

class CSoundOpvarSetEntity: # CBaseEntity
    m_iszStackName = 0x7B0 # CUtlSymbolLarge
    m_iszOperatorName = 0x7B8 # CUtlSymbolLarge
    m_iszOpvarName = 0x7C0 # CUtlSymbolLarge
    m_nOpvarType = 0x7C8 # int32_t
    m_nOpvarIndex = 0x7CC # int32_t
    m_flOpvarValue = 0x7D0 # float
    m_OpvarValueString = 0x7D8 # CUtlSymbolLarge
    m_bSetOnSpawn = 0x7E0 # bool

class CSoundOpvarSetOBBEntity: # CSoundOpvarSetAABBEntity

class CSoundOpvarSetOBBWindEntity: # CSoundOpvarSetPointBase
    m_vMins = 0x840 # Vector
    m_vMaxs = 0x84C # Vector
    m_vDistanceMins = 0x858 # Vector
    m_vDistanceMaxs = 0x864 # Vector
    m_flWindMin = 0x870 # float
    m_flWindMax = 0x874 # float
    m_flWindMapMin = 0x878 # float
    m_flWindMapMax = 0x87C # float

class CSoundOpvarSetPathCornerEntity: # CSoundOpvarSetPointEntity
    m_flDistMinSqr = 0x968 # float
    m_flDistMaxSqr = 0x96C # float
    m_iszPathCornerEntityName = 0x970 # CUtlSymbolLarge

class CSoundOpvarSetPointBase: # CBaseEntity
    m_bDisabled = 0x7A8 # bool
    m_hSource = 0x7AC # CEntityHandle
    m_iszSourceEntityName = 0x7B8 # CUtlSymbolLarge
    m_vLastPosition = 0x810 # Vector
    m_iszStackName = 0x820 # CUtlSymbolLarge
    m_iszOperatorName = 0x828 # CUtlSymbolLarge
    m_iszOpvarName = 0x830 # CUtlSymbolLarge
    m_iOpvarIndex = 0x838 # int32_t
    m_bUseAutoCompare = 0x83C # bool

class CSoundOpvarSetPointEntity: # CSoundOpvarSetPointBase
    m_OnEnter = 0x840 # CEntityIOOutput
    m_OnExit = 0x868 # CEntityIOOutput
    m_bAutoDisable = 0x890 # bool
    m_flDistanceMin = 0x8D4 # float
    m_flDistanceMax = 0x8D8 # float
    m_flDistanceMapMin = 0x8DC # float
    m_flDistanceMapMax = 0x8E0 # float
    m_flOcclusionRadius = 0x8E4 # float
    m_flOcclusionMin = 0x8E8 # float
    m_flOcclusionMax = 0x8EC # float
    m_flValSetOnDisable = 0x8F0 # float
    m_bSetValueOnDisable = 0x8F4 # bool
    m_nSimulationMode = 0x8F8 # int32_t
    m_nVisibilitySamples = 0x8FC # int32_t
    m_vDynamicProxyPoint = 0x900 # Vector
    m_flDynamicMaximumOcclusion = 0x90C # float
    m_hDynamicEntity = 0x910 # CEntityHandle
    m_iszDynamicEntityName = 0x918 # CUtlSymbolLarge
    m_flPathingDistanceNormFactor = 0x920 # float
    m_vPathingSourcePos = 0x924 # Vector
    m_vPathingListenerPos = 0x930 # Vector
    m_vPathingDirection = 0x93C # Vector
    m_nPathingSourceIndex = 0x948 # int32_t

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
    m_iszStackName = 0x7A8 # CUtlSymbolLarge

class CSplineConstraint: # CPhysConstraint

class CSpotlightEnd: # CBaseModelEntity
    m_flLightScale = 0x9F8 # float
    m_Radius = 0x9FC # float
    m_vSpotlightDir = 0xA00 # Vector
    m_vSpotlightOrg = 0xA0C # Vector

class CSprite: # CBaseModelEntity
    m_hSpriteMaterial = 0x9F8 # CStrongHandle<InfoForResourceTypeIMaterial2>
    m_hAttachedToEntity = 0xA00 # CHandle<CBaseEntity>
    m_nAttachment = 0xA04 # AttachmentHandle_t
    m_flSpriteFramerate = 0xA08 # float
    m_flFrame = 0xA0C # float
    m_flDieTime = 0xA10 # GameTime_t
    m_nBrightness = 0xA20 # uint32_t
    m_flBrightnessDuration = 0xA24 # float
    m_flSpriteScale = 0xA28 # float
    m_flScaleDuration = 0xA2C # float
    m_bWorldSpaceScale = 0xA30 # bool
    m_flGlowProxySize = 0xA34 # float
    m_flHDRColorScale = 0xA38 # float
    m_flLastTime = 0xA3C # GameTime_t
    m_flMaxFrame = 0xA40 # float
    m_flStartScale = 0xA44 # float
    m_flDestScale = 0xA48 # float
    m_flScaleTimeStart = 0xA4C # GameTime_t
    m_nStartBrightness = 0xA50 # int32_t
    m_nDestBrightness = 0xA54 # int32_t
    m_flBrightnessTimeStart = 0xA58 # GameTime_t
    m_nSpriteWidth = 0xA5C # int32_t
    m_nSpriteHeight = 0xA60 # int32_t

class CSpriteAlias_env_glow: # CSprite

class CSpriteOriented: # CSprite

class CStopwatch: # CStopwatchBase
    m_interval = 0xC # float

class CStopwatchBase: # CSimpleSimTimer
    m_fIsRunning = 0x8 # bool

class CSun: # CBaseModelEntity
    m_vDirection = 0x9F8 # Vector
    m_clrOverlay = 0xA04 # Color
    m_iszEffectName = 0xA08 # CUtlSymbolLarge
    m_iszSSEffectName = 0xA10 # CUtlSymbolLarge
    m_bOn = 0xA18 # bool
    m_bmaxColor = 0xA19 # bool
    m_flSize = 0xA1C # float
    m_flRotation = 0xA20 # float
    m_flHazeScale = 0xA24 # float
    m_flAlphaHaze = 0xA28 # float
    m_flAlphaHdr = 0xA2C # float
    m_flAlphaScale = 0xA30 # float
    m_flHDRColorScale = 0xA34 # float
    m_flFarZScale = 0xA38 # float

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
    m_newTarget = 0x7A8 # CVariantBase<CVariantDefaultAllocator>
    m_newTargetName = 0x7B8 # CUtlSymbolLarge

class CTankTrainAI: # CPointEntity
    m_hTrain = 0x7A8 # CHandle<CFuncTrackTrain>
    m_hTargetEntity = 0x7AC # CHandle<CBaseEntity>
    m_soundPlaying = 0x7B0 # int32_t
    m_startSoundName = 0x7C8 # CUtlSymbolLarge
    m_engineSoundName = 0x7D0 # CUtlSymbolLarge
    m_movementSoundName = 0x7D8 # CUtlSymbolLarge
    m_targetEntityName = 0x7E0 # CUtlSymbolLarge

class CTeam: # CBaseEntity
    m_aPlayerControllers = 0x7A8 # CNetworkUtlVectorBase<CHandle<CBasePlayerController>>
    m_aPlayers = 0x7C0 # CNetworkUtlVectorBase<CHandle<CBasePlayerPawn>>
    m_iScore = 0x7D8 # int32_t
    m_szTeamname = 0x7DC # char[129]

class CTeamplayRules: # CMultiplayRules

class CTestEffect: # CBaseEntity
    m_iLoop = 0x7A8 # int32_t
    m_iBeam = 0x7AC # int32_t
    m_pBeam = 0x7B0 # CBeam*[24]
    m_flBeamTime = 0x870 # GameTime_t[24]
    m_flStartTime = 0x8D0 # GameTime_t

class CTextureBasedAnimatable: # CBaseModelEntity
    m_bLoop = 0x9F8 # bool
    m_flFPS = 0x9FC # float
    m_hPositionKeys = 0xA00 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_hRotationKeys = 0xA08 # CStrongHandle<InfoForResourceTypeCTextureBase>
    m_vAnimationBoundsMin = 0xA10 # Vector
    m_vAnimationBoundsMax = 0xA1C # Vector
    m_flStartTime = 0xA28 # float
    m_flStartFrame = 0xA2C # float

class CTimeline: # IntervalTimer
    m_flValues = 0x10 # float[64]
    m_nValueCounts = 0x110 # int32_t[64]
    m_nBucketCount = 0x210 # int32_t
    m_flInterval = 0x214 # float
    m_flFinalValue = 0x218 # float
    m_nCompressionType = 0x21C # TimelineCompression_t
    m_bStopped = 0x220 # bool

class CTimerEntity: # CLogicalEntity
    m_OnTimer = 0x7A8 # CEntityIOOutput
    m_OnTimerHigh = 0x7D0 # CEntityIOOutput
    m_OnTimerLow = 0x7F8 # CEntityIOOutput
    m_iDisabled = 0x820 # int32_t
    m_flInitialDelay = 0x824 # float
    m_flRefireTime = 0x828 # float
    m_bUpDownState = 0x82C # bool
    m_iUseRandomTime = 0x830 # int32_t
    m_bPauseAfterFiring = 0x834 # bool
    m_flLowerRandomBound = 0x838 # float
    m_flUpperRandomBound = 0x83C # float
    m_flRemainingTime = 0x840 # float
    m_bPaused = 0x844 # bool

class CTonemapController2: # CBaseEntity
    m_flAutoExposureMin = 0x7A8 # float
    m_flAutoExposureMax = 0x7AC # float
    m_flTonemapPercentTarget = 0x7B0 # float
    m_flTonemapPercentBrightPixels = 0x7B4 # float
    m_flTonemapMinAvgLum = 0x7B8 # float
    m_flExposureAdaptationSpeedUp = 0x7BC # float
    m_flExposureAdaptationSpeedDown = 0x7C0 # float
    m_flTonemapEVSmoothingRange = 0x7C4 # float

class CTonemapController2Alias_env_tonemap_controller2: # CTonemapController2

class CTonemapTrigger: # CBaseTrigger
    m_tonemapControllerName = 0xBA0 # CUtlSymbolLarge
    m_hTonemapController = 0xBA8 # CEntityHandle

class CTouchExpansionComponent: # CEntityComponent

class CTriggerActiveWeaponDetect: # CBaseTrigger
    m_OnTouchedActiveWeapon = 0xBA0 # CEntityIOOutput
    m_iszWeaponClassName = 0xBC8 # CUtlSymbolLarge

class CTriggerBombReset: # CBaseTrigger

class CTriggerBrush: # CBaseModelEntity
    m_OnStartTouch = 0x9F8 # CEntityIOOutput
    m_OnEndTouch = 0xA20 # CEntityIOOutput
    m_OnUse = 0xA48 # CEntityIOOutput
    m_iInputFilter = 0xA70 # int32_t
    m_iDontMessageParent = 0xA74 # int32_t

class CTriggerBuoyancy: # CBaseTrigger
    m_BuoyancyHelper = 0xBA0 # CBuoyancyHelper
    m_flFluidDensity = 0xBC0 # float

class CTriggerCallback: # CBaseTrigger

class CTriggerDetectBulletFire: # CBaseTrigger
    m_bPlayerFireOnly = 0xB99 # bool
    m_OnDetectedBulletFire = 0xBA0 # CEntityIOOutput

class CTriggerDetectExplosion: # CBaseTrigger
    m_OnDetectedExplosion = 0xBE8 # CEntityIOOutput

class CTriggerFan: # CBaseTrigger
    m_vFanOrigin = 0xB9C # Vector
    m_vFanEnd = 0xBA8 # Vector
    m_vNoise = 0xBB4 # Vector
    m_flForce = 0xBC0 # float
    m_flRopeForceScale = 0xBC4 # float
    m_flPlayerForce = 0xBC8 # float
    m_flRampTime = 0xBCC # float
    m_bFalloff = 0xBD0 # bool
    m_bPushPlayer = 0xBD1 # bool
    m_bRampDown = 0xBD2 # bool
    m_bAddNoise = 0xBD3 # bool
    m_RampTimer = 0xBD8 # CountdownTimer

class CTriggerGameEvent: # CBaseTrigger
    m_strStartTouchEventName = 0xBA0 # CUtlString
    m_strEndTouchEventName = 0xBA8 # CUtlString
    m_strTriggerID = 0xBB0 # CUtlString

class CTriggerGravity: # CBaseTrigger

class CTriggerHostageReset: # CBaseTrigger

class CTriggerHurt: # CBaseTrigger
    m_flOriginalDamage = 0xB9C # float
    m_flDamage = 0xBA0 # float
    m_flDamageCap = 0xBA4 # float
    m_flLastDmgTime = 0xBA8 # GameTime_t
    m_flForgivenessDelay = 0xBAC # float
    m_bitsDamageInflict = 0xBB0 # int32_t
    m_damageModel = 0xBB4 # int32_t
    m_bNoDmgForce = 0xBB8 # bool
    m_vDamageForce = 0xBBC # Vector
    m_thinkAlways = 0xBC8 # bool
    m_hurtThinkPeriod = 0xBCC # float
    m_OnHurt = 0xBD0 # CEntityIOOutput
    m_OnHurtPlayer = 0xBF8 # CEntityIOOutput
    m_hurtEntities = 0xC20 # CUtlVector<CHandle<CBaseEntity>>

class CTriggerHurtGhost: # CTriggerHurt

class CTriggerImpact: # CTriggerMultiple
    m_flMagnitude = 0xBC8 # float
    m_flNoise = 0xBCC # float
    m_flViewkick = 0xBD0 # float
    m_pOutputForce = 0xBD8 # CEntityOutputTemplate<Vector>

class CTriggerLerpObject: # CBaseTrigger
    m_iszLerpTarget = 0xBA0 # CUtlSymbolLarge
    m_hLerpTarget = 0xBA8 # CHandle<CBaseEntity>
    m_iszLerpTargetAttachment = 0xBB0 # CUtlSymbolLarge
    m_hLerpTargetAttachment = 0xBB8 # AttachmentHandle_t
    m_flLerpDuration = 0xBBC # float
    m_bLerpRestoreMoveType = 0xBC0 # bool
    m_bSingleLerpObject = 0xBC1 # bool
    m_vecLerpingObjects = 0xBC8 # CUtlVector<lerpdata_t>
    m_iszLerpEffect = 0xBE0 # CUtlSymbolLarge
    m_iszLerpSound = 0xBE8 # CUtlSymbolLarge
    m_bAttachTouchingObject = 0xBF0 # bool
    m_hEntityToWaitForDisconnect = 0xBF4 # CHandle<CBaseEntity>
    m_OnLerpStarted = 0xBF8 # CEntityIOOutput
    m_OnLerpFinished = 0xC20 # CEntityIOOutput

class CTriggerLook: # CTriggerOnce
    m_hLookTarget = 0xBC8 # CHandle<CBaseEntity>
    m_flFieldOfView = 0xBCC # float
    m_flLookTime = 0xBD0 # float
    m_flLookTimeTotal = 0xBD4 # float
    m_flLookTimeLast = 0xBD8 # GameTime_t
    m_flTimeoutDuration = 0xBDC # float
    m_bTimeoutFired = 0xBE0 # bool
    m_bIsLooking = 0xBE1 # bool
    m_b2DFOV = 0xBE2 # bool
    m_bUseVelocity = 0xBE3 # bool
    m_hActivator = 0xBE4 # CHandle<CBaseEntity>
    m_bTestOcclusion = 0xBE8 # bool
    m_OnTimeout = 0xBF0 # CEntityIOOutput
    m_OnStartLook = 0xC18 # CEntityIOOutput
    m_OnEndLook = 0xC40 # CEntityIOOutput

class CTriggerMultiple: # CBaseTrigger
    m_OnTrigger = 0xBA0 # CEntityIOOutput

class CTriggerOnce: # CTriggerMultiple

class CTriggerPhysics: # CBaseTrigger
    m_gravityScale = 0xBB0 # float
    m_linearLimit = 0xBB4 # float
    m_linearDamping = 0xBB8 # float
    m_angularLimit = 0xBBC # float
    m_angularDamping = 0xBC0 # float
    m_linearForce = 0xBC4 # float
    m_flFrequency = 0xBC8 # float
    m_flDampingRatio = 0xBCC # float
    m_vecLinearForcePointAt = 0xBD0 # Vector
    m_bCollapseToForcePoint = 0xBDC # bool
    m_vecLinearForcePointAtWorld = 0xBE0 # Vector
    m_vecLinearForceDirection = 0xBEC # Vector
    m_bConvertToDebrisWhenPossible = 0xBF8 # bool

class CTriggerProximity: # CBaseTrigger
    m_hMeasureTarget = 0xB9C # CHandle<CBaseEntity>
    m_iszMeasureTarget = 0xBA0 # CUtlSymbolLarge
    m_fRadius = 0xBA8 # float
    m_nTouchers = 0xBAC # int32_t
    m_NearestEntityDistance = 0xBB0 # CEntityOutputTemplate<float>

class CTriggerPush: # CBaseTrigger
    m_angPushEntitySpace = 0xB9C # QAngle
    m_vecPushDirEntitySpace = 0xBA8 # Vector
    m_bTriggerOnStartTouch = 0xBB4 # bool

class CTriggerRemove: # CBaseTrigger
    m_OnRemove = 0xBA0 # CEntityIOOutput

class CTriggerSave: # CBaseTrigger
    m_bForceNewLevelUnit = 0xB99 # bool
    m_fDangerousTimer = 0xB9C # float
    m_minHitPoints = 0xBA0 # int32_t

class CTriggerSndSosOpvar: # CBaseTrigger
    m_hTouchingPlayers = 0xBA0 # CUtlVector<CHandle<CBaseEntity>>
    m_flPosition = 0xBB8 # Vector
    m_flCenterSize = 0xBC4 # float
    m_flMinVal = 0xBC8 # float
    m_flMaxVal = 0xBCC # float
    m_flWait = 0xBD0 # float
    m_opvarName = 0xBD8 # CUtlSymbolLarge
    m_stackName = 0xBE0 # CUtlSymbolLarge
    m_operatorName = 0xBE8 # CUtlSymbolLarge
    m_bVolIs2D = 0xBF0 # bool
    m_opvarNameChar = 0xBF1 # char[256]
    m_stackNameChar = 0xCF1 # char[256]
    m_operatorNameChar = 0xDF1 # char[256]
    m_VecNormPos = 0xEF4 # Vector
    m_flNormCenterSize = 0xF00 # float

class CTriggerSoundscape: # CBaseTrigger
    m_hSoundscape = 0xB9C # CHandle<CEnvSoundscapeTriggerable>
    m_SoundscapeName = 0xBA0 # CUtlSymbolLarge
    m_spectators = 0xBA8 # CUtlVector<CHandle<CBasePlayerPawn>>

class CTriggerTeleport: # CBaseTrigger
    m_iLandmark = 0xBA0 # CUtlSymbolLarge
    m_bUseLandmarkAngles = 0xBA8 # bool
    m_bMirrorPlayer = 0xBA9 # bool

class CTriggerToggleSave: # CBaseTrigger
    m_bDisabled = 0xB99 # bool

class CTriggerTripWire: # CBaseTrigger

class CTriggerVolume: # CBaseModelEntity
    m_iFilterName = 0x9F8 # CUtlSymbolLarge
    m_hFilter = 0xA00 # CHandle<CBaseFilter>

class CTripWireFire: # CBaseCSGrenade

class CTripWireFireProjectile: # CBaseGrenade

class CVoteController: # CBaseEntity
    m_iActiveIssueIndex = 0x7A8 # int32_t
    m_iOnlyTeamToVote = 0x7AC # int32_t
    m_nVoteOptionCount = 0x7B0 # int32_t[5]
    m_nPotentialVotes = 0x7C4 # int32_t
    m_bIsYesNoVote = 0x7C8 # bool
    m_acceptingVotesTimer = 0x7D0 # CountdownTimer
    m_executeCommandTimer = 0x7E8 # CountdownTimer
    m_resetVoteTimer = 0x800 # CountdownTimer
    m_nVotesCast = 0x818 # int32_t[64]
    m_playerHoldingVote = 0x918 # CPlayerSlot
    m_playerOverrideForVote = 0x91C # CPlayerSlot
    m_nHighestCountIndex = 0x920 # int32_t
    m_potentialIssues = 0x928 # CUtlVector<CBaseIssue*>
    m_VoteOptions = 0x940 # CUtlVector<char*>

class CWaterBullet: # CBaseAnimGraph

class CWeaponAWP: # CCSWeaponBaseGun

class CWeaponAug: # CCSWeaponBaseGun

class CWeaponBaseItem: # CCSWeaponBase
    m_SequenceCompleteTimer = 0x1198 # CountdownTimer
    m_bRedraw = 0x11B0 # bool

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
    m_flBulletDamageAbsorbed = 0x11B4 # float
    m_flLastBulletHitSoundTime = 0x11B8 # GameTime_t
    m_flDisplayHealth = 0x11BC # float

class CWeaponTaser: # CCSWeaponBaseGun
    m_fFireTime = 0x11B4 # GameTime_t

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
    m_iDamageType = 0x800 # int32_t

class FilterHealth: # CBaseFilter
    m_bAdrenalineActive = 0x800 # bool
    m_iHealthMin = 0x804 # int32_t
    m_iHealthMax = 0x808 # int32_t

class FilterTeam: # CBaseFilter
    m_iFilterTeam = 0x800 # int32_t

class GameAmmoTypeInfo_t: # AmmoTypeInfo_t
    m_nBuySize = 0x34 # int32_t
    m_nCost = 0x38 # int32_t

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
    m_pFollowup = 0x14 # ResponseFollowup*

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
    m_iPriority = 0x7A8 # int32_t
    m_bEnabled = 0x7AC # bool
    m_nType = 0x7B0 # int32_t

class SpawnPointCoopEnemy: # SpawnPoint
    m_szWeaponsToGive = 0x7B8 # CUtlSymbolLarge
    m_szPlayerModelToUse = 0x7C0 # CUtlSymbolLarge
    m_nArmorToSpawnWith = 0x7C8 # int32_t
    m_nDefaultBehavior = 0x7CC # SpawnPointCoopEnemy::BotDefaultBehavior_t
    m_nBotDifficulty = 0x7D0 # int32_t
    m_bIsAgressive = 0x7D4 # bool
    m_bStartAsleep = 0x7D5 # bool
    m_flHideRadius = 0x7D8 # float
    m_szBehaviorTreeFile = 0x7E8 # CUtlSymbolLarge

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
    m_hFn = 0x10 # HSCRIPT
    m_nContext = 0x18 # CUtlStringToken
    m_nNextThinkTick = 0x1C # GameTick_t
    m_nLastThinkTick = 0x20 # GameTick_t
