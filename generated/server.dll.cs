public static class ActiveModelConfig_t {
    public const nint m_Handle = 0x28; // ModelConfigHandle_t
    public const nint m_Name = 0x30; // CUtlSymbolLarge
    public const nint m_AssociatedEntities = 0x38; // CNetworkUtlVectorBase< CHandle< CBaseModelEntity > >
    public const nint m_AssociatedEntityNames = 0x50; // CNetworkUtlVectorBase< CUtlSymbolLarge >
}

public static class AmmoIndex_t {
    public const nint m_Value = 0x0; // int8
}

public static class AmmoTypeInfo_t {
    public const nint m_nMaxCarry = 0x10; // int32
    public const nint m_nSplashSize = 0x1C; // CRangeInt
    public const nint m_nFlags = 0x24; // AmmoFlags_t
    public const nint m_flMass = 0x28; // float32
    public const nint m_flSpeed = 0x2C; // CRangeFloat
}

public static class AnimationUpdateListHandle_t {
    public const nint m_Value = 0x0; // uint32
}

public static class CAISound {
    public const nint m_iSoundType = 0x4B0; // int32
    public const nint m_iSoundContext = 0x4B4; // int32
    public const nint m_iVolume = 0x4B8; // int32
    public const nint m_iSoundIndex = 0x4BC; // int32
    public const nint m_flDuration = 0x4C0; // float32
    public const nint m_iszProxyEntityName = 0x4C8; // CUtlSymbolLarge
}

public static class CAI_ChangeHintGroup {
    public const nint m_iSearchType = 0x4B0; // int32
    public const nint m_strSearchName = 0x4B8; // CUtlSymbolLarge
    public const nint m_strNewHintGroup = 0x4C0; // CUtlSymbolLarge
    public const nint m_flRadius = 0x4C8; // float32
}

public static class CAI_ChangeTarget {
    public const nint m_iszNewTarget = 0x4B0; // CUtlSymbolLarge
}

public static class CAI_Expresser {
    public const nint m_flStopTalkTime = 0x38; // GameTime_t
    public const nint m_flStopTalkTimeWithoutDelay = 0x3C; // GameTime_t
    public const nint m_flBlockedTalkTime = 0x40; // GameTime_t
    public const nint m_voicePitch = 0x44; // int32
    public const nint m_flLastTimeAcceptedSpeak = 0x48; // GameTime_t
    public const nint m_bAllowSpeakingInterrupts = 0x4C; // bool
    public const nint m_bConsiderSceneInvolvementAsSpeech = 0x4D; // bool
    public const nint m_nLastSpokenPriority = 0x50; // int32
    public const nint m_pOuter = 0x58; // CBaseFlex*
}

public static class CAI_ExpresserWithFollowup {
    public const nint m_pPostponedFollowup = 0x60; // ResponseFollowup*
}

public static class CAmbientGeneric {
    public const nint m_radius = 0x4B0; // float32
    public const nint m_flMaxRadius = 0x4B4; // float32
    public const nint m_iSoundLevel = 0x4B8; // soundlevel_t
    public const nint m_dpv = 0x4BC; // dynpitchvol_t
    public const nint m_fActive = 0x520; // bool
    public const nint m_fLooping = 0x521; // bool
    public const nint m_iszSound = 0x528; // CUtlSymbolLarge
    public const nint m_sSourceEntName = 0x530; // CUtlSymbolLarge
    public const nint m_hSoundSource = 0x538; // CHandle< CBaseEntity >
    public const nint m_nSoundSourceEntIndex = 0x53C; // CEntityIndex
}

public static class CAnimGraphNetworkedVariables {
    public const nint m_PredNetBoolVariables = 0x8; // CNetworkUtlVectorBase< uint32 >
    public const nint m_PredNetByteVariables = 0x20; // CNetworkUtlVectorBase< uint8 >
    public const nint m_PredNetUInt16Variables = 0x38; // CNetworkUtlVectorBase< uint16 >
    public const nint m_PredNetIntVariables = 0x50; // CNetworkUtlVectorBase< int32 >
    public const nint m_PredNetUInt32Variables = 0x68; // CNetworkUtlVectorBase< uint32 >
    public const nint m_PredNetUInt64Variables = 0x80; // CNetworkUtlVectorBase< uint64 >
    public const nint m_PredNetFloatVariables = 0x98; // CNetworkUtlVectorBase< float32 >
    public const nint m_PredNetVectorVariables = 0xB0; // CNetworkUtlVectorBase< Vector >
    public const nint m_PredNetQuaternionVariables = 0xC8; // CNetworkUtlVectorBase< Quaternion >
    public const nint m_OwnerOnlyPredNetBoolVariables = 0xE0; // CNetworkUtlVectorBase< uint32 >
    public const nint m_OwnerOnlyPredNetByteVariables = 0xF8; // CNetworkUtlVectorBase< uint8 >
    public const nint m_OwnerOnlyPredNetUInt16Variables = 0x110; // CNetworkUtlVectorBase< uint16 >
    public const nint m_OwnerOnlyPredNetIntVariables = 0x128; // CNetworkUtlVectorBase< int32 >
    public const nint m_OwnerOnlyPredNetUInt32Variables = 0x140; // CNetworkUtlVectorBase< uint32 >
    public const nint m_OwnerOnlyPredNetUInt64Variables = 0x158; // CNetworkUtlVectorBase< uint64 >
    public const nint m_OwnerOnlyPredNetFloatVariables = 0x170; // CNetworkUtlVectorBase< float32 >
    public const nint m_OwnerOnlyPredNetVectorVariables = 0x188; // CNetworkUtlVectorBase< Vector >
    public const nint m_OwnerOnlyPredNetQuaternionVariables = 0x1A0; // CNetworkUtlVectorBase< Quaternion >
    public const nint m_nBoolVariablesCount = 0x1B8; // int32
    public const nint m_nOwnerOnlyBoolVariablesCount = 0x1BC; // int32
    public const nint m_nRandomSeedOffset = 0x1C0; // int32
    public const nint m_flLastTeleportTime = 0x1C4; // float32
}

public static class CAnimGraphTagRef {
    public const nint m_nTagIndex = 0x0; // int32
    public const nint m_tagName = 0x10; // CGlobalSymbol
}

public static class CAttributeContainer {
    public const nint m_Item = 0x50; // CEconItemView
}

public static class CAttributeList {
    public const nint m_Attributes = 0x8; // CUtlVectorEmbeddedNetworkVar< CEconItemAttribute >
    public const nint m_pManager = 0x58; // CAttributeManager*
}

public static class CAttributeManager {
    public const nint m_Providers = 0x8; // CUtlVector< CHandle< CBaseEntity > >
    public const nint m_iReapplyProvisionParity = 0x20; // int32
    public const nint m_hOuter = 0x24; // CHandle< CBaseEntity >
    public const nint m_bPreventLoopback = 0x28; // bool
    public const nint m_ProviderType = 0x2C; // attributeprovidertypes_t
    public const nint m_CachedResults = 0x30; // CUtlVector< CAttributeManager::cached_attribute_float_t >
}

public static class CAttributeManager_cached_attribute_float_t {
    public const nint flIn = 0x0; // float32
    public const nint iAttribHook = 0x8; // CUtlSymbolLarge
    public const nint flOut = 0x10; // float32
}

public static class CBarnLight {
    public const nint m_bEnabled = 0x700; // bool
    public const nint m_nColorMode = 0x704; // int32
    public const nint m_Color = 0x708; // Color
    public const nint m_flColorTemperature = 0x70C; // float32
    public const nint m_flBrightness = 0x710; // float32
    public const nint m_flBrightnessScale = 0x714; // float32
    public const nint m_nDirectLight = 0x718; // int32
    public const nint m_nBakedShadowIndex = 0x71C; // int32
    public const nint m_nLuminaireShape = 0x720; // int32
    public const nint m_flLuminaireSize = 0x724; // float32
    public const nint m_flLuminaireAnisotropy = 0x728; // float32
    public const nint m_LightStyleString = 0x730; // CUtlString
    public const nint m_flLightStyleStartTime = 0x738; // GameTime_t
    public const nint m_QueuedLightStyleStrings = 0x740; // CNetworkUtlVectorBase< CUtlString >
    public const nint m_LightStyleEvents = 0x758; // CNetworkUtlVectorBase< CUtlString >
    public const nint m_LightStyleTargets = 0x770; // CNetworkUtlVectorBase< CHandle< CBaseModelEntity > >
    public const nint m_StyleEvent = 0x788; // CEntityIOOutput[4]
    public const nint m_StyleRadianceVar = 0x828; // CUtlString
    public const nint m_StyleVar = 0x830; // CUtlString
    public const nint m_hLightCookie = 0x858; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_flShape = 0x860; // float32
    public const nint m_flSoftX = 0x864; // float32
    public const nint m_flSoftY = 0x868; // float32
    public const nint m_flSkirt = 0x86C; // float32
    public const nint m_flSkirtNear = 0x870; // float32
    public const nint m_vSizeParams = 0x874; // Vector
    public const nint m_flRange = 0x880; // float32
    public const nint m_vShear = 0x884; // Vector
    public const nint m_nBakeSpecularToCubemaps = 0x890; // int32
    public const nint m_vBakeSpecularToCubemapsSize = 0x894; // Vector
    public const nint m_nCastShadows = 0x8A0; // int32
    public const nint m_nShadowMapSize = 0x8A4; // int32
    public const nint m_nShadowPriority = 0x8A8; // int32
    public const nint m_bContactShadow = 0x8AC; // bool
    public const nint m_nBounceLight = 0x8B0; // int32
    public const nint m_flBounceScale = 0x8B4; // float32
    public const nint m_flMinRoughness = 0x8B8; // float32
    public const nint m_vAlternateColor = 0x8BC; // Vector
    public const nint m_fAlternateColorBrightness = 0x8C8; // float32
    public const nint m_nFog = 0x8CC; // int32
    public const nint m_flFogStrength = 0x8D0; // float32
    public const nint m_nFogShadows = 0x8D4; // int32
    public const nint m_flFogScale = 0x8D8; // float32
    public const nint m_flFadeSizeStart = 0x8DC; // float32
    public const nint m_flFadeSizeEnd = 0x8E0; // float32
    public const nint m_flShadowFadeSizeStart = 0x8E4; // float32
    public const nint m_flShadowFadeSizeEnd = 0x8E8; // float32
    public const nint m_bPrecomputedFieldsValid = 0x8EC; // bool
    public const nint m_vPrecomputedBoundsMins = 0x8F0; // Vector
    public const nint m_vPrecomputedBoundsMaxs = 0x8FC; // Vector
    public const nint m_vPrecomputedOBBOrigin = 0x908; // Vector
    public const nint m_vPrecomputedOBBAngles = 0x914; // QAngle
    public const nint m_vPrecomputedOBBExtent = 0x920; // Vector
    public const nint m_bPvsModifyEntity = 0x92C; // bool
}

public static class CBaseAnimGraph {
    public const nint m_bInitiallyPopulateInterpHistory = 0x700; // bool
    public const nint m_bShouldAnimateDuringGameplayPause = 0x701; // bool
    public const nint m_pChoreoServices = 0x708; // IChoreoServices*
    public const nint m_bAnimGraphUpdateEnabled = 0x710; // bool
    public const nint m_flMaxSlopeDistance = 0x714; // float32
    public const nint m_vLastSlopeCheckPos = 0x718; // Vector
    public const nint m_bAnimGraphDirty = 0x724; // bool
    public const nint m_vecForce = 0x728; // Vector
    public const nint m_nForceBone = 0x734; // int32
    public const nint m_pRagdollPose = 0x748; // PhysicsRagdollPose_t*
    public const nint m_bClientRagdoll = 0x750; // bool
}

public static class CBaseAnimGraphController {
    public const nint m_baseLayer = 0x18; // CNetworkedSequenceOperation
    public const nint m_animGraphNetworkedVars = 0x40; // CAnimGraphNetworkedVariables
    public const nint m_bSequenceFinished = 0x218; // bool
    public const nint m_flLastEventCycle = 0x21C; // float32
    public const nint m_flLastEventAnimTime = 0x220; // float32
    public const nint m_flPlaybackRate = 0x224; // CNetworkedQuantizedFloat
    public const nint m_flPrevAnimTime = 0x22C; // float32
    public const nint m_bClientSideAnimation = 0x230; // bool
    public const nint m_bNetworkedAnimationInputsChanged = 0x231; // bool
    public const nint m_nNewSequenceParity = 0x234; // int32
    public const nint m_nResetEventsParity = 0x238; // int32
    public const nint m_nAnimLoopMode = 0x23C; // AnimLoopMode_t
    public const nint m_hAnimationUpdate = 0x2DC; // AnimationUpdateListHandle_t
}

public static class CBaseButton {
    public const nint m_angMoveEntitySpace = 0x780; // QAngle
    public const nint m_fStayPushed = 0x78C; // bool
    public const nint m_fRotating = 0x78D; // bool
    public const nint m_ls = 0x790; // locksound_t
    public const nint m_sUseSound = 0x7B0; // CUtlSymbolLarge
    public const nint m_sLockedSound = 0x7B8; // CUtlSymbolLarge
    public const nint m_sUnlockedSound = 0x7C0; // CUtlSymbolLarge
    public const nint m_bLocked = 0x7C8; // bool
    public const nint m_bDisabled = 0x7C9; // bool
    public const nint m_flUseLockedTime = 0x7CC; // GameTime_t
    public const nint m_bSolidBsp = 0x7D0; // bool
    public const nint m_OnDamaged = 0x7D8; // CEntityIOOutput
    public const nint m_OnPressed = 0x800; // CEntityIOOutput
    public const nint m_OnUseLocked = 0x828; // CEntityIOOutput
    public const nint m_OnIn = 0x850; // CEntityIOOutput
    public const nint m_OnOut = 0x878; // CEntityIOOutput
    public const nint m_nState = 0x8A0; // int32
    public const nint m_hConstraint = 0x8A4; // CEntityHandle
    public const nint m_hConstraintParent = 0x8A8; // CEntityHandle
    public const nint m_bForceNpcExclude = 0x8AC; // bool
    public const nint m_sGlowEntity = 0x8B0; // CUtlSymbolLarge
    public const nint m_glowEntity = 0x8B8; // CHandle< CBaseModelEntity >
    public const nint m_usable = 0x8BC; // bool
    public const nint m_szDisplayText = 0x8C0; // CUtlSymbolLarge
}

public static class CBaseCSGrenade {
    public const nint m_bRedraw = 0xDF8; // bool
    public const nint m_bIsHeldByPlayer = 0xDF9; // bool
    public const nint m_bPinPulled = 0xDFA; // bool
    public const nint m_bJumpThrow = 0xDFB; // bool
    public const nint m_eThrowStatus = 0xDFC; // EGrenadeThrowState
    public const nint m_fThrowTime = 0xE00; // GameTime_t
    public const nint m_flThrowStrength = 0xE04; // float32
    public const nint m_flThrowStrengthApproach = 0xE08; // float32
    public const nint m_fDropTime = 0xE0C; // GameTime_t
}

public static class CBaseCSGrenadeProjectile {
    public const nint m_vInitialVelocity = 0x9C8; // Vector
    public const nint m_nBounces = 0x9D4; // int32
    public const nint m_nExplodeEffectIndex = 0x9D8; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
    public const nint m_nExplodeEffectTickBegin = 0x9E0; // int32
    public const nint m_vecExplodeEffectOrigin = 0x9E4; // Vector
    public const nint m_unOGSExtraFlags = 0x9F0; // uint8
    public const nint m_bDetonationRecorded = 0x9F1; // bool
    public const nint m_flDetonateTime = 0x9F4; // GameTime_t
    public const nint m_nItemIndex = 0x9F8; // uint16
    public const nint m_vecOriginalSpawnLocation = 0x9FC; // Vector
    public const nint m_flLastBounceSoundTime = 0xA08; // GameTime_t
    public const nint m_vecGrenadeSpin = 0xA0C; // RotationVector
    public const nint m_vecLastHitSurfaceNormal = 0xA18; // Vector
    public const nint m_nTicksAtZeroVelocity = 0xA24; // int32
}

public static class CBaseClientUIEntity {
    public const nint m_bEnabled = 0x700; // bool
    public const nint m_DialogXMLName = 0x708; // CUtlSymbolLarge
    public const nint m_PanelClassName = 0x710; // CUtlSymbolLarge
    public const nint m_PanelID = 0x718; // CUtlSymbolLarge
    public const nint m_CustomOutput0 = 0x720; // CEntityIOOutput
    public const nint m_CustomOutput1 = 0x748; // CEntityIOOutput
    public const nint m_CustomOutput2 = 0x770; // CEntityIOOutput
    public const nint m_CustomOutput3 = 0x798; // CEntityIOOutput
    public const nint m_CustomOutput4 = 0x7C0; // CEntityIOOutput
    public const nint m_CustomOutput5 = 0x7E8; // CEntityIOOutput
    public const nint m_CustomOutput6 = 0x810; // CEntityIOOutput
    public const nint m_CustomOutput7 = 0x838; // CEntityIOOutput
    public const nint m_CustomOutput8 = 0x860; // CEntityIOOutput
    public const nint m_CustomOutput9 = 0x888; // CEntityIOOutput
}

public static class CBaseCombatCharacter {
    public const nint m_bForceServerRagdoll = 0x920; // bool
    public const nint m_hMyWearables = 0x928; // CNetworkUtlVectorBase< CHandle< CEconWearable > >
    public const nint m_flFieldOfView = 0x940; // float32
    public const nint m_impactEnergyScale = 0x944; // float32
    public const nint m_LastHitGroup = 0x948; // HitGroup_t
    public const nint m_bApplyStressDamage = 0x94C; // bool
    public const nint m_bloodColor = 0x950; // int32
    public const nint m_navMeshID = 0x9B0; // int32
    public const nint m_iDamageCount = 0x9B4; // int32
    public const nint m_pVecRelationships = 0x9B8; // CUtlVector< RelationshipOverride_t >*
    public const nint m_strRelationships = 0x9C0; // CUtlSymbolLarge
    public const nint m_eHull = 0x9C8; // Hull_t
    public const nint m_nNavHullIdx = 0x9CC; // uint32
}

public static class CBaseDMStart {
    public const nint m_Master = 0x4B0; // CUtlSymbolLarge
}

public static class CBaseDoor {
    public const nint m_angMoveEntitySpace = 0x790; // QAngle
    public const nint m_vecMoveDirParentSpace = 0x79C; // Vector
    public const nint m_ls = 0x7A8; // locksound_t
    public const nint m_bForceClosed = 0x7C8; // bool
    public const nint m_bDoorGroup = 0x7C9; // bool
    public const nint m_bLocked = 0x7CA; // bool
    public const nint m_bIgnoreDebris = 0x7CB; // bool
    public const nint m_eSpawnPosition = 0x7CC; // FuncDoorSpawnPos_t
    public const nint m_flBlockDamage = 0x7D0; // float32
    public const nint m_NoiseMoving = 0x7D8; // CUtlSymbolLarge
    public const nint m_NoiseArrived = 0x7E0; // CUtlSymbolLarge
    public const nint m_NoiseMovingClosed = 0x7E8; // CUtlSymbolLarge
    public const nint m_NoiseArrivedClosed = 0x7F0; // CUtlSymbolLarge
    public const nint m_ChainTarget = 0x7F8; // CUtlSymbolLarge
    public const nint m_OnBlockedClosing = 0x800; // CEntityIOOutput
    public const nint m_OnBlockedOpening = 0x828; // CEntityIOOutput
    public const nint m_OnUnblockedClosing = 0x850; // CEntityIOOutput
    public const nint m_OnUnblockedOpening = 0x878; // CEntityIOOutput
    public const nint m_OnFullyClosed = 0x8A0; // CEntityIOOutput
    public const nint m_OnFullyOpen = 0x8C8; // CEntityIOOutput
    public const nint m_OnClose = 0x8F0; // CEntityIOOutput
    public const nint m_OnOpen = 0x918; // CEntityIOOutput
    public const nint m_OnLockedUse = 0x940; // CEntityIOOutput
    public const nint m_bLoopMoveSound = 0x968; // bool
    public const nint m_bCreateNavObstacle = 0x980; // bool
    public const nint m_isChaining = 0x981; // bool
    public const nint m_bIsUsable = 0x982; // bool
}

public static class CBaseEntity {
    public const nint m_CBodyComponent = 0x30; // CBodyComponent*
    public const nint m_NetworkTransmitComponent = 0x38; // CNetworkTransmitComponent
    public const nint m_aThinkFunctions = 0x228; // CUtlVector< thinkfunc_t >
    public const nint m_iCurrentThinkContext = 0x240; // int32
    public const nint m_nLastThinkTick = 0x244; // GameTick_t
    public const nint m_isSteadyState = 0x250; // CBitVec< 64 >
    public const nint m_lastNetworkChange = 0x258; // float32
    public const nint m_ResponseContexts = 0x268; // CUtlVector< ResponseContext_t >
    public const nint m_iszResponseContext = 0x280; // CUtlSymbolLarge
    public const nint m_iHealth = 0x2A8; // int32
    public const nint m_iMaxHealth = 0x2AC; // int32
    public const nint m_lifeState = 0x2B0; // uint8
    public const nint m_flDamageAccumulator = 0x2B4; // float32
    public const nint m_bTakesDamage = 0x2B8; // bool
    public const nint m_nTakeDamageFlags = 0x2BC; // TakeDamageFlags_t
    public const nint m_MoveCollide = 0x2C1; // MoveCollide_t
    public const nint m_MoveType = 0x2C2; // MoveType_t
    public const nint m_nWaterTouch = 0x2C3; // uint8
    public const nint m_nSlimeTouch = 0x2C4; // uint8
    public const nint m_bRestoreInHierarchy = 0x2C5; // bool
    public const nint m_target = 0x2C8; // CUtlSymbolLarge
    public const nint m_flMoveDoneTime = 0x2D0; // float32
    public const nint m_hDamageFilter = 0x2D4; // CHandle< CBaseFilter >
    public const nint m_iszDamageFilterName = 0x2D8; // CUtlSymbolLarge
    public const nint m_nSubclassID = 0x2E0; // CUtlStringToken
    public const nint m_flAnimTime = 0x2F0; // float32
    public const nint m_flSimulationTime = 0x2F4; // float32
    public const nint m_flCreateTime = 0x2F8; // GameTime_t
    public const nint m_bClientSideRagdoll = 0x2FC; // bool
    public const nint m_ubInterpolationFrame = 0x2FD; // uint8
    public const nint m_vPrevVPhysicsUpdatePos = 0x300; // Vector
    public const nint m_iTeamNum = 0x30C; // uint8
    public const nint m_iGlobalname = 0x310; // CUtlSymbolLarge
    public const nint m_iSentToClients = 0x318; // int32
    public const nint m_flSpeed = 0x31C; // float32
    public const nint m_sUniqueHammerID = 0x320; // CUtlString
    public const nint m_spawnflags = 0x328; // uint32
    public const nint m_nNextThinkTick = 0x32C; // GameTick_t
    public const nint m_nSimulationTick = 0x330; // int32
    public const nint m_OnKilled = 0x338; // CEntityIOOutput
    public const nint m_fFlags = 0x360; // uint32
    public const nint m_vecAbsVelocity = 0x364; // Vector
    public const nint m_vecVelocity = 0x370; // CNetworkVelocityVector
    public const nint m_vecBaseVelocity = 0x3A0; // Vector
    public const nint m_nPushEnumCount = 0x3AC; // int32
    public const nint m_pCollision = 0x3B0; // CCollisionProperty*
    public const nint m_hEffectEntity = 0x3B8; // CHandle< CBaseEntity >
    public const nint m_hOwnerEntity = 0x3BC; // CHandle< CBaseEntity >
    public const nint m_fEffects = 0x3C0; // uint32
    public const nint m_hGroundEntity = 0x3C4; // CHandle< CBaseEntity >
    public const nint m_flFriction = 0x3C8; // float32
    public const nint m_flElasticity = 0x3CC; // float32
    public const nint m_flGravityScale = 0x3D0; // float32
    public const nint m_flTimeScale = 0x3D4; // float32
    public const nint m_flWaterLevel = 0x3D8; // float32
    public const nint m_bSimulatedEveryTick = 0x3DC; // bool
    public const nint m_bAnimatedEveryTick = 0x3DD; // bool
    public const nint m_bDisableLowViolence = 0x3DE; // bool
    public const nint m_nWaterType = 0x3DF; // uint8
    public const nint m_iEFlags = 0x3E0; // int32
    public const nint m_OnUser1 = 0x3E8; // CEntityIOOutput
    public const nint m_OnUser2 = 0x410; // CEntityIOOutput
    public const nint m_OnUser3 = 0x438; // CEntityIOOutput
    public const nint m_OnUser4 = 0x460; // CEntityIOOutput
    public const nint m_iInitialTeamNum = 0x488; // int32
    public const nint m_flNavIgnoreUntilTime = 0x48C; // GameTime_t
    public const nint m_vecAngVelocity = 0x490; // QAngle
    public const nint m_bNetworkQuantizeOriginAndAngles = 0x49C; // bool
    public const nint m_bLagCompensate = 0x49D; // bool
    public const nint m_flOverriddenFriction = 0x4A0; // float32
    public const nint m_pBlocker = 0x4A4; // CHandle< CBaseEntity >
    public const nint m_flLocalTime = 0x4A8; // float32
    public const nint m_flVPhysicsUpdateLocalTime = 0x4AC; // float32
}

public static class CBaseFilter {
    public const nint m_bNegated = 0x4B0; // bool
    public const nint m_OnPass = 0x4B8; // CEntityIOOutput
    public const nint m_OnFail = 0x4E0; // CEntityIOOutput
}

public static class CBaseFire {
    public const nint m_flScale = 0x4B0; // float32
    public const nint m_flStartScale = 0x4B4; // float32
    public const nint m_flScaleTime = 0x4B8; // float32
    public const nint m_nFlags = 0x4BC; // uint32
}

public static class CBaseFlex {
    public const nint m_flexWeight = 0x890; // CNetworkUtlVectorBase< float32 >
    public const nint m_vLookTargetPosition = 0x8A8; // Vector
    public const nint m_blinktoggle = 0x8B4; // bool
    public const nint m_flAllowResponsesEndTime = 0x908; // GameTime_t
    public const nint m_flLastFlexAnimationTime = 0x90C; // GameTime_t
    public const nint m_nNextSceneEventId = 0x910; // uint32
    public const nint m_bUpdateLayerPriorities = 0x914; // bool
}

public static class CBaseGrenade {
    public const nint m_OnPlayerPickup = 0x928; // CEntityIOOutput
    public const nint m_OnExplode = 0x950; // CEntityIOOutput
    public const nint m_bHasWarnedAI = 0x978; // bool
    public const nint m_bIsSmokeGrenade = 0x979; // bool
    public const nint m_bIsLive = 0x97A; // bool
    public const nint m_DmgRadius = 0x97C; // float32
    public const nint m_flDetonateTime = 0x980; // GameTime_t
    public const nint m_flWarnAITime = 0x984; // float32
    public const nint m_flDamage = 0x988; // float32
    public const nint m_iszBounceSound = 0x990; // CUtlSymbolLarge
    public const nint m_ExplosionSound = 0x998; // CUtlString
    public const nint m_hThrower = 0x9A4; // CHandle< CCSPlayerPawn >
    public const nint m_flNextAttack = 0x9BC; // GameTime_t
    public const nint m_hOriginalThrower = 0x9C0; // CHandle< CCSPlayerPawn >
}

public static class CBaseIssue {
    public const nint m_szTypeString = 0x20; // char[64]
    public const nint m_szDetailsString = 0x60; // char[260]
    public const nint m_iNumYesVotes = 0x164; // int32
    public const nint m_iNumNoVotes = 0x168; // int32
    public const nint m_iNumPotentialVotes = 0x16C; // int32
    public const nint m_pVoteController = 0x170; // CVoteController*
}

public static class CBaseModelEntity {
    public const nint m_CRenderComponent = 0x4B0; // CRenderComponent*
    public const nint m_CHitboxComponent = 0x4B8; // CHitboxComponent
    public const nint m_flDissolveStartTime = 0x4E0; // GameTime_t
    public const nint m_OnIgnite = 0x4E8; // CEntityIOOutput
    public const nint m_nRenderMode = 0x510; // RenderMode_t
    public const nint m_nRenderFX = 0x511; // RenderFx_t
    public const nint m_bAllowFadeInView = 0x512; // bool
    public const nint m_clrRender = 0x513; // Color
    public const nint m_vecRenderAttributes = 0x518; // CUtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t >
    public const nint m_LightGroup = 0x568; // CUtlStringToken
    public const nint m_bRenderToCubemaps = 0x56C; // bool
    public const nint m_Collision = 0x570; // CCollisionProperty
    public const nint m_Glow = 0x620; // CGlowProperty
    public const nint m_flGlowBackfaceMult = 0x678; // float32
    public const nint m_fadeMinDist = 0x67C; // float32
    public const nint m_fadeMaxDist = 0x680; // float32
    public const nint m_flFadeScale = 0x684; // float32
    public const nint m_flShadowStrength = 0x688; // float32
    public const nint m_nObjectCulling = 0x68C; // uint8
    public const nint m_nAddDecal = 0x690; // int32
    public const nint m_vDecalPosition = 0x694; // Vector
    public const nint m_vDecalForwardAxis = 0x6A0; // Vector
    public const nint m_flDecalHealBloodRate = 0x6AC; // float32
    public const nint m_flDecalHealHeightRate = 0x6B0; // float32
    public const nint m_ConfigEntitiesToPropagateMaterialDecalsTo = 0x6B8; // CNetworkUtlVectorBase< CHandle< CBaseModelEntity > >
    public const nint m_vecViewOffset = 0x6D0; // CNetworkViewOffsetVector
}

public static class CBaseMoveBehavior {
    public const nint m_iPositionInterpolator = 0x510; // int32
    public const nint m_iRotationInterpolator = 0x514; // int32
    public const nint m_flAnimStartTime = 0x518; // float32
    public const nint m_flAnimEndTime = 0x51C; // float32
    public const nint m_flAverageSpeedAcrossFrame = 0x520; // float32
    public const nint m_pCurrentKeyFrame = 0x528; // CPathKeyFrame*
    public const nint m_pTargetKeyFrame = 0x530; // CPathKeyFrame*
    public const nint m_pPreKeyFrame = 0x538; // CPathKeyFrame*
    public const nint m_pPostKeyFrame = 0x540; // CPathKeyFrame*
    public const nint m_flTimeIntoFrame = 0x548; // float32
    public const nint m_iDirection = 0x54C; // int32
}

public static class CBasePlatTrain {
    public const nint m_NoiseMoving = 0x780; // CUtlSymbolLarge
    public const nint m_NoiseArrived = 0x788; // CUtlSymbolLarge
    public const nint m_volume = 0x798; // float32
    public const nint m_flTWidth = 0x79C; // float32
    public const nint m_flTLength = 0x7A0; // float32
}

public static class CBasePlayerController {
    public const nint m_nInButtonsWhichAreToggles = 0x4B8; // uint64
    public const nint m_nTickBase = 0x4C0; // uint32
    public const nint m_hPawn = 0x4F0; // CHandle< CBasePlayerPawn >
    public const nint m_nSplitScreenSlot = 0x4F4; // CSplitScreenSlot
    public const nint m_hSplitOwner = 0x4F8; // CHandle< CBasePlayerController >
    public const nint m_hSplitScreenPlayers = 0x500; // CUtlVector< CHandle< CBasePlayerController > >
    public const nint m_bIsHLTV = 0x518; // bool
    public const nint m_iConnected = 0x51C; // PlayerConnectedState
    public const nint m_iszPlayerName = 0x520; // char[128]
    public const nint m_szNetworkIDString = 0x5A0; // CUtlString
    public const nint m_fLerpTime = 0x5A8; // float32
    public const nint m_bLagCompensation = 0x5AC; // bool
    public const nint m_bPredict = 0x5AD; // bool
    public const nint m_bAutoKickDisabled = 0x5AE; // bool
    public const nint m_bIsLowViolence = 0x5AF; // bool
    public const nint m_bGamePaused = 0x5B0; // bool
    public const nint m_nHighestCommandNumberReceived = 0x628; // int32
    public const nint m_nUsecTimestampLastUserCmdReceived = 0x630; // int64
    public const nint m_iIgnoreGlobalChat = 0x648; // ChatIgnoreType_t
    public const nint m_flLastPlayerTalkTime = 0x64C; // float32
    public const nint m_flLastEntitySteadyState = 0x650; // float32
    public const nint m_nAvailableEntitySteadyState = 0x654; // int32
    public const nint m_bHasAnySteadyStateEnts = 0x658; // bool
    public const nint m_steamID = 0x668; // uint64
    public const nint m_iDesiredFOV = 0x670; // uint32
}

public static class CBasePlayerPawn {
    public const nint m_pWeaponServices = 0x9D0; // CPlayer_WeaponServices*
    public const nint m_pItemServices = 0x9D8; // CPlayer_ItemServices*
    public const nint m_pAutoaimServices = 0x9E0; // CPlayer_AutoaimServices*
    public const nint m_pObserverServices = 0x9E8; // CPlayer_ObserverServices*
    public const nint m_pWaterServices = 0x9F0; // CPlayer_WaterServices*
    public const nint m_pUseServices = 0x9F8; // CPlayer_UseServices*
    public const nint m_pFlashlightServices = 0xA00; // CPlayer_FlashlightServices*
    public const nint m_pCameraServices = 0xA08; // CPlayer_CameraServices*
    public const nint m_pMovementServices = 0xA10; // CPlayer_MovementServices*
    public const nint m_ServerViewAngleChanges = 0xA20; // CUtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t >
    public const nint m_nHighestGeneratedServerViewAngleChangeIndex = 0xA70; // uint32
    public const nint v_angle = 0xA74; // QAngle
    public const nint v_anglePrevious = 0xA80; // QAngle
    public const nint m_iHideHUD = 0xA8C; // uint32
    public const nint m_skybox3d = 0xA90; // sky3dparams_t
    public const nint m_fTimeLastHurt = 0xB20; // GameTime_t
    public const nint m_flDeathTime = 0xB24; // GameTime_t
    public const nint m_fNextSuicideTime = 0xB28; // GameTime_t
    public const nint m_fInitHUD = 0xB2C; // bool
    public const nint m_pExpresser = 0xB30; // CAI_Expresser*
    public const nint m_hController = 0xB38; // CHandle< CBasePlayerController >
    public const nint m_fHltvReplayDelay = 0xB40; // float32
    public const nint m_fHltvReplayEnd = 0xB44; // float32
    public const nint m_iHltvReplayEntity = 0xB48; // CEntityIndex
}

public static class CBasePlayerVData {
    public const nint m_sModelName = 0x28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    public const nint m_flHeadDamageMultiplier = 0x108; // CSkillFloat
    public const nint m_flChestDamageMultiplier = 0x118; // CSkillFloat
    public const nint m_flStomachDamageMultiplier = 0x128; // CSkillFloat
    public const nint m_flArmDamageMultiplier = 0x138; // CSkillFloat
    public const nint m_flLegDamageMultiplier = 0x148; // CSkillFloat
    public const nint m_flHoldBreathTime = 0x158; // float32
    public const nint m_flDrowningDamageInterval = 0x15C; // float32
    public const nint m_nDrowningDamageInitial = 0x160; // int32
    public const nint m_nDrowningDamageMax = 0x164; // int32
    public const nint m_nWaterSpeed = 0x168; // int32
    public const nint m_flUseRange = 0x16C; // float32
    public const nint m_flUseAngleTolerance = 0x170; // float32
    public const nint m_flCrouchTime = 0x174; // float32
}

public static class CBasePlayerWeapon {
    public const nint m_nNextPrimaryAttackTick = 0xC18; // GameTick_t
    public const nint m_flNextPrimaryAttackTickRatio = 0xC1C; // float32
    public const nint m_nNextSecondaryAttackTick = 0xC20; // GameTick_t
    public const nint m_flNextSecondaryAttackTickRatio = 0xC24; // float32
    public const nint m_iClip1 = 0xC28; // int32
    public const nint m_iClip2 = 0xC2C; // int32
    public const nint m_pReserveAmmo = 0xC30; // int32[2]
    public const nint m_OnPlayerUse = 0xC38; // CEntityIOOutput
}

public static class CBasePlayerWeaponVData {
    public const nint m_szWorldModel = 0x28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    public const nint m_bBuiltRightHanded = 0x108; // bool
    public const nint m_bAllowFlipping = 0x109; // bool
    public const nint m_bIsFullAuto = 0x10A; // bool
    public const nint m_nNumBullets = 0x10C; // int32
    public const nint m_sMuzzleAttachment = 0x110; // CUtlString
    public const nint m_szMuzzleFlashParticle = 0x118; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    public const nint m_iFlags = 0x1F8; // ItemFlagTypes_t
    public const nint m_nPrimaryAmmoType = 0x1F9; // AmmoIndex_t
    public const nint m_nSecondaryAmmoType = 0x1FA; // AmmoIndex_t
    public const nint m_iMaxClip1 = 0x1FC; // int32
    public const nint m_iMaxClip2 = 0x200; // int32
    public const nint m_iDefaultClip1 = 0x204; // int32
    public const nint m_iDefaultClip2 = 0x208; // int32
    public const nint m_iWeight = 0x20C; // int32
    public const nint m_bAutoSwitchTo = 0x210; // bool
    public const nint m_bAutoSwitchFrom = 0x211; // bool
    public const nint m_iRumbleEffect = 0x214; // RumbleEffect_t
    public const nint m_aShootSounds = 0x218; // CUtlMap< WeaponSound_t, CSoundEventName >
    public const nint m_iSlot = 0x238; // int32
    public const nint m_iPosition = 0x23C; // int32
}

public static class CBaseProp {
    public const nint m_bModelOverrodeBlockLOS = 0x890; // bool
    public const nint m_iShapeType = 0x894; // int32
    public const nint m_bConformToCollisionBounds = 0x898; // bool
    public const nint m_mPreferredCatchTransform = 0x89C; // matrix3x4_t
}

public static class CBasePropDoor {
    public const nint m_flAutoReturnDelay = 0xB18; // float32
    public const nint m_hDoorList = 0xB20; // CUtlVector< CHandle< CBasePropDoor > >
    public const nint m_nHardwareType = 0xB38; // int32
    public const nint m_bNeedsHardware = 0xB3C; // bool
    public const nint m_eDoorState = 0xB40; // DoorState_t
    public const nint m_bLocked = 0xB44; // bool
    public const nint m_closedPosition = 0xB48; // Vector
    public const nint m_closedAngles = 0xB54; // QAngle
    public const nint m_hBlocker = 0xB60; // CHandle< CBaseEntity >
    public const nint m_bFirstBlocked = 0xB64; // bool
    public const nint m_ls = 0xB68; // locksound_t
    public const nint m_bForceClosed = 0xB88; // bool
    public const nint m_vecLatchWorldPosition = 0xB8C; // Vector
    public const nint m_hActivator = 0xB98; // CHandle< CBaseEntity >
    public const nint m_SoundMoving = 0xBA8; // CUtlSymbolLarge
    public const nint m_SoundOpen = 0xBB0; // CUtlSymbolLarge
    public const nint m_SoundClose = 0xBB8; // CUtlSymbolLarge
    public const nint m_SoundLock = 0xBC0; // CUtlSymbolLarge
    public const nint m_SoundUnlock = 0xBC8; // CUtlSymbolLarge
    public const nint m_SoundLatch = 0xBD0; // CUtlSymbolLarge
    public const nint m_SoundPound = 0xBD8; // CUtlSymbolLarge
    public const nint m_SoundJiggle = 0xBE0; // CUtlSymbolLarge
    public const nint m_SoundLockedAnim = 0xBE8; // CUtlSymbolLarge
    public const nint m_numCloseAttempts = 0xBF0; // int32
    public const nint m_nPhysicsMaterial = 0xBF4; // CUtlStringToken
    public const nint m_SlaveName = 0xBF8; // CUtlSymbolLarge
    public const nint m_hMaster = 0xC00; // CHandle< CBasePropDoor >
    public const nint m_OnBlockedClosing = 0xC08; // CEntityIOOutput
    public const nint m_OnBlockedOpening = 0xC30; // CEntityIOOutput
    public const nint m_OnUnblockedClosing = 0xC58; // CEntityIOOutput
    public const nint m_OnUnblockedOpening = 0xC80; // CEntityIOOutput
    public const nint m_OnFullyClosed = 0xCA8; // CEntityIOOutput
    public const nint m_OnFullyOpen = 0xCD0; // CEntityIOOutput
    public const nint m_OnClose = 0xCF8; // CEntityIOOutput
    public const nint m_OnOpen = 0xD20; // CEntityIOOutput
    public const nint m_OnLockedUse = 0xD48; // CEntityIOOutput
    public const nint m_OnAjarOpen = 0xD70; // CEntityIOOutput
}

public static class CBaseToggle {
    public const nint m_toggle_state = 0x700; // TOGGLE_STATE
    public const nint m_flMoveDistance = 0x704; // float32
    public const nint m_flWait = 0x708; // float32
    public const nint m_flLip = 0x70C; // float32
    public const nint m_bAlwaysFireBlockedOutputs = 0x710; // bool
    public const nint m_vecPosition1 = 0x714; // Vector
    public const nint m_vecPosition2 = 0x720; // Vector
    public const nint m_vecMoveAng = 0x72C; // QAngle
    public const nint m_vecAngle1 = 0x738; // QAngle
    public const nint m_vecAngle2 = 0x744; // QAngle
    public const nint m_flHeight = 0x750; // float32
    public const nint m_hActivator = 0x754; // CHandle< CBaseEntity >
    public const nint m_vecFinalDest = 0x758; // Vector
    public const nint m_vecFinalAngle = 0x764; // QAngle
    public const nint m_movementType = 0x770; // int32
    public const nint m_sMaster = 0x778; // CUtlSymbolLarge
}

public static class CBaseTrigger {
    public const nint m_bDisabled = 0x780; // bool
    public const nint m_iFilterName = 0x788; // CUtlSymbolLarge
    public const nint m_hFilter = 0x790; // CHandle< CBaseFilter >
    public const nint m_OnStartTouch = 0x798; // CEntityIOOutput
    public const nint m_OnStartTouchAll = 0x7C0; // CEntityIOOutput
    public const nint m_OnEndTouch = 0x7E8; // CEntityIOOutput
    public const nint m_OnEndTouchAll = 0x810; // CEntityIOOutput
    public const nint m_OnTouching = 0x838; // CEntityIOOutput
    public const nint m_OnNotTouching = 0x860; // CEntityIOOutput
    public const nint m_hTouchingEntities = 0x888; // CUtlVector< CHandle< CBaseEntity > >
    public const nint m_bClientSidePredicted = 0x8A0; // bool
}

public static class CBaseViewModel {
    public const nint m_vecLastFacing = 0x898; // Vector
    public const nint m_nViewModelIndex = 0x8A4; // uint32
    public const nint m_nAnimationParity = 0x8A8; // uint32
    public const nint m_flAnimationStartTime = 0x8AC; // float32
    public const nint m_hWeapon = 0x8B0; // CHandle< CBasePlayerWeapon >
    public const nint m_sVMName = 0x8B8; // CUtlSymbolLarge
    public const nint m_sAnimationPrefix = 0x8C0; // CUtlSymbolLarge
    public const nint m_hOldLayerSequence = 0x8C8; // HSequence
    public const nint m_oldLayer = 0x8CC; // int32
    public const nint m_oldLayerStartTime = 0x8D0; // float32
    public const nint m_hControlPanel = 0x8D4; // CHandle< CBaseEntity >
}

public static class CBeam {
    public const nint m_flFrameRate = 0x700; // float32
    public const nint m_flHDRColorScale = 0x704; // float32
    public const nint m_flFireTime = 0x708; // GameTime_t
    public const nint m_flDamage = 0x70C; // float32
    public const nint m_nNumBeamEnts = 0x710; // uint8
    public const nint m_hBaseMaterial = 0x718; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    public const nint m_nHaloIndex = 0x720; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    public const nint m_nBeamType = 0x728; // BeamType_t
    public const nint m_nBeamFlags = 0x72C; // uint32
    public const nint m_hAttachEntity = 0x730; // CHandle< CBaseEntity >[10]
    public const nint m_nAttachIndex = 0x758; // AttachmentHandle_t[10]
    public const nint m_fWidth = 0x764; // float32
    public const nint m_fEndWidth = 0x768; // float32
    public const nint m_fFadeLength = 0x76C; // float32
    public const nint m_fHaloScale = 0x770; // float32
    public const nint m_fAmplitude = 0x774; // float32
    public const nint m_fStartFrame = 0x778; // float32
    public const nint m_fSpeed = 0x77C; // float32
    public const nint m_flFrame = 0x780; // float32
    public const nint m_nClipStyle = 0x784; // BeamClipStyle_t
    public const nint m_bTurnedOff = 0x788; // bool
    public const nint m_vecEndPos = 0x78C; // Vector
    public const nint m_hEndEntity = 0x798; // CHandle< CBaseEntity >
    public const nint m_nDissolveType = 0x79C; // int32
}

public static class CBlood {
    public const nint m_vecSprayAngles = 0x4B0; // QAngle
    public const nint m_vecSprayDir = 0x4BC; // Vector
    public const nint m_flAmount = 0x4C8; // float32
    public const nint m_Color = 0x4CC; // int32
}

public static class CBodyComponent {
    public const nint m_pSceneNode = 0x8; // CGameSceneNode*
    public const nint __m_pChainEntity = 0x20; // CNetworkVarChainer
}

public static class CBodyComponentBaseAnimGraph {
    public const nint m_animationController = 0x470; // CBaseAnimGraphController
    public const nint __m_pChainEntity = 0x750; // CNetworkVarChainer
}

public static class CBodyComponentBaseModelEntity {
    public const nint __m_pChainEntity = 0x470; // CNetworkVarChainer
}

public static class CBodyComponentPoint {
    public const nint m_sceneNode = 0x50; // CGameSceneNode
    public const nint __m_pChainEntity = 0x1A0; // CNetworkVarChainer
}

public static class CBodyComponentSkeletonInstance {
    public const nint m_skeletonInstance = 0x50; // CSkeletonInstance
    public const nint __m_pChainEntity = 0x440; // CNetworkVarChainer
}

public static class CBombTarget {
    public const nint m_OnBombExplode = 0x8A8; // CEntityIOOutput
    public const nint m_OnBombPlanted = 0x8D0; // CEntityIOOutput
    public const nint m_OnBombDefused = 0x8F8; // CEntityIOOutput
    public const nint m_bIsBombSiteB = 0x920; // bool
    public const nint m_bIsHeistBombTarget = 0x921; // bool
    public const nint m_bBombPlantedHere = 0x922; // bool
    public const nint m_szMountTarget = 0x928; // CUtlSymbolLarge
    public const nint m_hInstructorHint = 0x930; // CHandle< CBaseEntity >
    public const nint m_nBombSiteDesignation = 0x934; // int32
}

public static class CBot {
    public const nint m_pController = 0x10; // CCSPlayerController*
    public const nint m_pPlayer = 0x18; // CCSPlayerPawn*
    public const nint m_bHasSpawned = 0x20; // bool
    public const nint m_id = 0x24; // uint32
    public const nint m_isRunning = 0x98; // bool
    public const nint m_isCrouching = 0x99; // bool
    public const nint m_forwardSpeed = 0x9C; // float32
    public const nint m_leftSpeed = 0xA0; // float32
    public const nint m_verticalSpeed = 0xA4; // float32
    public const nint m_buttonFlags = 0xA8; // uint64
    public const nint m_jumpTimestamp = 0xB0; // float32
    public const nint m_viewForward = 0xB4; // Vector
    public const nint m_postureStackIndex = 0xD0; // int32
}

public static class CBreakable {
    public const nint m_Material = 0x710; // Materials
    public const nint m_hBreaker = 0x714; // CHandle< CBaseEntity >
    public const nint m_Explosion = 0x718; // Explosions
    public const nint m_iszSpawnObject = 0x720; // CUtlSymbolLarge
    public const nint m_flPressureDelay = 0x728; // float32
    public const nint m_iMinHealthDmg = 0x72C; // int32
    public const nint m_iszPropData = 0x730; // CUtlSymbolLarge
    public const nint m_impactEnergyScale = 0x738; // float32
    public const nint m_nOverrideBlockLOS = 0x73C; // EOverrideBlockLOS_t
    public const nint m_OnBreak = 0x740; // CEntityIOOutput
    public const nint m_OnHealthChanged = 0x768; // CEntityOutputTemplate< float32 >
    public const nint m_flDmgModBullet = 0x790; // float32
    public const nint m_flDmgModClub = 0x794; // float32
    public const nint m_flDmgModExplosive = 0x798; // float32
    public const nint m_flDmgModFire = 0x79C; // float32
    public const nint m_iszPhysicsDamageTableName = 0x7A0; // CUtlSymbolLarge
    public const nint m_iszBasePropData = 0x7A8; // CUtlSymbolLarge
    public const nint m_iInteractions = 0x7B0; // int32
    public const nint m_PerformanceMode = 0x7B4; // PerformanceMode_t
    public const nint m_hPhysicsAttacker = 0x7B8; // CHandle< CBasePlayerPawn >
    public const nint m_flLastPhysicsInfluenceTime = 0x7BC; // GameTime_t
}

public static class CBreakableProp {
    public const nint m_OnBreak = 0x8E0; // CEntityIOOutput
    public const nint m_OnHealthChanged = 0x908; // CEntityOutputTemplate< float32 >
    public const nint m_OnTakeDamage = 0x930; // CEntityIOOutput
    public const nint m_impactEnergyScale = 0x958; // float32
    public const nint m_iMinHealthDmg = 0x95C; // int32
    public const nint m_preferredCarryAngles = 0x960; // QAngle
    public const nint m_flPressureDelay = 0x96C; // float32
    public const nint m_hBreaker = 0x970; // CHandle< CBaseEntity >
    public const nint m_PerformanceMode = 0x974; // PerformanceMode_t
    public const nint m_flDmgModBullet = 0x978; // float32
    public const nint m_flDmgModClub = 0x97C; // float32
    public const nint m_flDmgModExplosive = 0x980; // float32
    public const nint m_flDmgModFire = 0x984; // float32
    public const nint m_iszPhysicsDamageTableName = 0x988; // CUtlSymbolLarge
    public const nint m_iszBasePropData = 0x990; // CUtlSymbolLarge
    public const nint m_iInteractions = 0x998; // int32
    public const nint m_flPreventDamageBeforeTime = 0x99C; // GameTime_t
    public const nint m_bHasBreakPiecesOrCommands = 0x9A0; // bool
    public const nint m_explodeDamage = 0x9A4; // float32
    public const nint m_explodeRadius = 0x9A8; // float32
    public const nint m_explosionDelay = 0x9B0; // float32
    public const nint m_explosionBuildupSound = 0x9B8; // CUtlSymbolLarge
    public const nint m_explosionCustomEffect = 0x9C0; // CUtlSymbolLarge
    public const nint m_explosionCustomSound = 0x9C8; // CUtlSymbolLarge
    public const nint m_explosionModifier = 0x9D0; // CUtlSymbolLarge
    public const nint m_hPhysicsAttacker = 0x9D8; // CHandle< CBasePlayerPawn >
    public const nint m_flLastPhysicsInfluenceTime = 0x9DC; // GameTime_t
    public const nint m_bOriginalBlockLOS = 0x9E0; // bool
    public const nint m_flDefaultFadeScale = 0x9E4; // float32
    public const nint m_hLastAttacker = 0x9E8; // CHandle< CBaseEntity >
    public const nint m_hFlareEnt = 0x9EC; // CHandle< CBaseEntity >
    public const nint m_bUsePuntSound = 0x9F0; // bool
    public const nint m_iszPuntSound = 0x9F8; // CUtlSymbolLarge
    public const nint m_noGhostCollision = 0xA00; // bool
}

public static class CBreakableStageHelper {
    public const nint m_nCurrentStage = 0x8; // int32
    public const nint m_nStageCount = 0xC; // int32
}

public static class CBtActionAim {
    public const nint m_szSensorInputKey = 0x68; // CUtlString
    public const nint m_szAimReadyKey = 0x80; // CUtlString
    public const nint m_flZoomCooldownTimestamp = 0x88; // float32
    public const nint m_bDoneAiming = 0x8C; // bool
    public const nint m_flLerpStartTime = 0x90; // float32
    public const nint m_flNextLookTargetLerpTime = 0x94; // float32
    public const nint m_flPenaltyReductionRatio = 0x98; // float32
    public const nint m_NextLookTarget = 0x9C; // QAngle
    public const nint m_AimTimer = 0xA8; // CountdownTimer
    public const nint m_SniperHoldTimer = 0xC0; // CountdownTimer
    public const nint m_FocusIntervalTimer = 0xD8; // CountdownTimer
    public const nint m_bAcquired = 0xF0; // bool
}

public static class CBtActionCombatPositioning {
    public const nint m_szSensorInputKey = 0x68; // CUtlString
    public const nint m_szIsAttackingKey = 0x80; // CUtlString
    public const nint m_ActionTimer = 0x88; // CountdownTimer
    public const nint m_bCrouching = 0xA0; // bool
}

public static class CBtActionMoveTo {
    public const nint m_szDestinationInputKey = 0x60; // CUtlString
    public const nint m_szHidingSpotInputKey = 0x68; // CUtlString
    public const nint m_szThreatInputKey = 0x70; // CUtlString
    public const nint m_vecDestination = 0x78; // Vector
    public const nint m_bAutoLookAdjust = 0x84; // bool
    public const nint m_bComputePath = 0x85; // bool
    public const nint m_flDamagingAreasPenaltyCost = 0x88; // float32
    public const nint m_CheckApproximateCornersTimer = 0x90; // CountdownTimer
    public const nint m_CheckHighPriorityItem = 0xA8; // CountdownTimer
    public const nint m_RepathTimer = 0xC0; // CountdownTimer
    public const nint m_flArrivalEpsilon = 0xD8; // float32
    public const nint m_flAdditionalArrivalEpsilon2D = 0xDC; // float32
    public const nint m_flHidingSpotCheckDistanceThreshold = 0xE0; // float32
    public const nint m_flNearestAreaDistanceThreshold = 0xE4; // float32
}

public static class CBtActionParachutePositioning {
    public const nint m_ActionTimer = 0x58; // CountdownTimer
}

public static class CBtNodeCondition {
    public const nint m_bNegated = 0x58; // bool
}

public static class CBtNodeConditionInactive {
    public const nint m_flRoundStartThresholdSeconds = 0x78; // float32
    public const nint m_flSensorInactivityThresholdSeconds = 0x7C; // float32
    public const nint m_SensorInactivityTimer = 0x80; // CountdownTimer
}

public static class CBubbling {
    public const nint m_density = 0x700; // int32
    public const nint m_frequency = 0x704; // int32
    public const nint m_state = 0x708; // int32
}

public static class CBuoyancyHelper {
    public const nint m_flFluidDensity = 0x18; // float32
}

public static class CBuyZone {
    public const nint m_LegacyTeamNum = 0x8A8; // int32
}

public static class CC4 {
    public const nint m_vecLastValidPlayerHeldPosition = 0xDD8; // Vector
    public const nint m_vecLastValidDroppedPosition = 0xDE4; // Vector
    public const nint m_bDoValidDroppedPositionCheck = 0xDF0; // bool
    public const nint m_bStartedArming = 0xDF1; // bool
    public const nint m_fArmedTime = 0xDF4; // GameTime_t
    public const nint m_bBombPlacedAnimation = 0xDF8; // bool
    public const nint m_bIsPlantingViaUse = 0xDF9; // bool
    public const nint m_entitySpottedState = 0xE00; // EntitySpottedState_t
    public const nint m_nSpotRules = 0xE18; // int32
    public const nint m_bPlayedArmingBeeps = 0xE1C; // bool[7]
    public const nint m_bBombPlanted = 0xE23; // bool
    public const nint m_bDroppedFromDeath = 0xE24; // bool
}

public static class CCSBot {
    public const nint m_lastCoopSpawnPoint = 0xD8; // CHandle< SpawnPointCoopEnemy >
    public const nint m_eyePosition = 0xE8; // Vector
    public const nint m_name = 0xF4; // char[64]
    public const nint m_combatRange = 0x134; // float32
    public const nint m_isRogue = 0x138; // bool
    public const nint m_rogueTimer = 0x140; // CountdownTimer
    public const nint m_diedLastRound = 0x15C; // bool
    public const nint m_safeTime = 0x160; // float32
    public const nint m_wasSafe = 0x164; // bool
    public const nint m_blindFire = 0x16C; // bool
    public const nint m_surpriseTimer = 0x170; // CountdownTimer
    public const nint m_bAllowActive = 0x188; // bool
    public const nint m_isFollowing = 0x189; // bool
    public const nint m_leader = 0x18C; // CHandle< CCSPlayerPawn >
    public const nint m_followTimestamp = 0x190; // float32
    public const nint m_allowAutoFollowTime = 0x194; // float32
    public const nint m_hurryTimer = 0x198; // CountdownTimer
    public const nint m_alertTimer = 0x1B0; // CountdownTimer
    public const nint m_sneakTimer = 0x1C8; // CountdownTimer
    public const nint m_panicTimer = 0x1E0; // CountdownTimer
    public const nint m_stateTimestamp = 0x4B0; // float32
    public const nint m_isAttacking = 0x4B4; // bool
    public const nint m_isOpeningDoor = 0x4B5; // bool
    public const nint m_taskEntity = 0x4BC; // CHandle< CBaseEntity >
    public const nint m_goalPosition = 0x4CC; // Vector
    public const nint m_goalEntity = 0x4D8; // CHandle< CBaseEntity >
    public const nint m_avoid = 0x4DC; // CHandle< CBaseEntity >
    public const nint m_avoidTimestamp = 0x4E0; // float32
    public const nint m_isStopping = 0x4E4; // bool
    public const nint m_hasVisitedEnemySpawn = 0x4E5; // bool
    public const nint m_stillTimer = 0x4E8; // IntervalTimer
    public const nint m_bEyeAnglesUnderPathFinderControl = 0x4F8; // bool
    public const nint m_pathIndex = 0x65F0; // int32
    public const nint m_areaEnteredTimestamp = 0x65F4; // GameTime_t
    public const nint m_repathTimer = 0x65F8; // CountdownTimer
    public const nint m_avoidFriendTimer = 0x6610; // CountdownTimer
    public const nint m_isFriendInTheWay = 0x6628; // bool
    public const nint m_politeTimer = 0x6630; // CountdownTimer
    public const nint m_isWaitingBehindFriend = 0x6648; // bool
    public const nint m_pathLadderEnd = 0x6674; // float32
    public const nint m_mustRunTimer = 0x66C0; // CountdownTimer
    public const nint m_waitTimer = 0x66D8; // CountdownTimer
    public const nint m_updateTravelDistanceTimer = 0x66F0; // CountdownTimer
    public const nint m_playerTravelDistance = 0x6708; // float32[64]
    public const nint m_travelDistancePhase = 0x6808; // uint8
    public const nint m_hostageEscortCount = 0x69A0; // uint8
    public const nint m_hostageEscortCountTimestamp = 0x69A4; // float32
    public const nint m_desiredTeam = 0x69A8; // int32
    public const nint m_hasJoined = 0x69AC; // bool
    public const nint m_isWaitingForHostage = 0x69AD; // bool
    public const nint m_inhibitWaitingForHostageTimer = 0x69B0; // CountdownTimer
    public const nint m_waitForHostageTimer = 0x69C8; // CountdownTimer
    public const nint m_noisePosition = 0x69E0; // Vector
    public const nint m_noiseTravelDistance = 0x69EC; // float32
    public const nint m_noiseTimestamp = 0x69F0; // float32
    public const nint m_noiseSource = 0x69F8; // CCSPlayerPawn*
    public const nint m_noiseBendTimer = 0x6A10; // CountdownTimer
    public const nint m_bentNoisePosition = 0x6A28; // Vector
    public const nint m_bendNoisePositionValid = 0x6A34; // bool
    public const nint m_lookAroundStateTimestamp = 0x6A38; // float32
    public const nint m_lookAheadAngle = 0x6A3C; // float32
    public const nint m_forwardAngle = 0x6A40; // float32
    public const nint m_inhibitLookAroundTimestamp = 0x6A44; // float32
    public const nint m_lookAtSpot = 0x6A4C; // Vector
    public const nint m_lookAtSpotDuration = 0x6A5C; // float32
    public const nint m_lookAtSpotTimestamp = 0x6A60; // float32
    public const nint m_lookAtSpotAngleTolerance = 0x6A64; // float32
    public const nint m_lookAtSpotClearIfClose = 0x6A68; // bool
    public const nint m_lookAtSpotAttack = 0x6A69; // bool
    public const nint m_lookAtDesc = 0x6A70; // char*
    public const nint m_peripheralTimestamp = 0x6A78; // float32
    public const nint m_approachPointCount = 0x6C00; // uint8
    public const nint m_approachPointViewPosition = 0x6C04; // Vector
    public const nint m_viewSteadyTimer = 0x6C10; // IntervalTimer
    public const nint m_tossGrenadeTimer = 0x6C28; // CountdownTimer
    public const nint m_isAvoidingGrenade = 0x6C48; // CountdownTimer
    public const nint m_spotCheckTimestamp = 0x6C68; // float32
    public const nint m_checkedHidingSpotCount = 0x7070; // int32
    public const nint m_lookPitch = 0x7074; // float32
    public const nint m_lookPitchVel = 0x7078; // float32
    public const nint m_lookYaw = 0x707C; // float32
    public const nint m_lookYawVel = 0x7080; // float32
    public const nint m_targetSpot = 0x7084; // Vector
    public const nint m_targetSpotVelocity = 0x7090; // Vector
    public const nint m_targetSpotPredicted = 0x709C; // Vector
    public const nint m_aimError = 0x70A8; // QAngle
    public const nint m_aimGoal = 0x70B4; // QAngle
    public const nint m_targetSpotTime = 0x70C0; // GameTime_t
    public const nint m_aimFocus = 0x70C4; // float32
    public const nint m_aimFocusInterval = 0x70C8; // float32
    public const nint m_aimFocusNextUpdate = 0x70CC; // GameTime_t
    public const nint m_ignoreEnemiesTimer = 0x70D8; // CountdownTimer
    public const nint m_enemy = 0x70F0; // CHandle< CCSPlayerPawn >
    public const nint m_isEnemyVisible = 0x70F4; // bool
    public const nint m_visibleEnemyParts = 0x70F5; // uint8
    public const nint m_lastEnemyPosition = 0x70F8; // Vector
    public const nint m_lastSawEnemyTimestamp = 0x7104; // float32
    public const nint m_firstSawEnemyTimestamp = 0x7108; // float32
    public const nint m_currentEnemyAcquireTimestamp = 0x710C; // float32
    public const nint m_enemyDeathTimestamp = 0x7110; // float32
    public const nint m_friendDeathTimestamp = 0x7114; // float32
    public const nint m_isLastEnemyDead = 0x7118; // bool
    public const nint m_nearbyEnemyCount = 0x711C; // int32
    public const nint m_bomber = 0x7328; // CHandle< CCSPlayerPawn >
    public const nint m_nearbyFriendCount = 0x732C; // int32
    public const nint m_closestVisibleFriend = 0x7330; // CHandle< CCSPlayerPawn >
    public const nint m_closestVisibleHumanFriend = 0x7334; // CHandle< CCSPlayerPawn >
    public const nint m_attentionInterval = 0x7338; // IntervalTimer
    public const nint m_attacker = 0x7348; // CHandle< CCSPlayerPawn >
    public const nint m_attackedTimestamp = 0x734C; // float32
    public const nint m_burnedByFlamesTimer = 0x7350; // IntervalTimer
    public const nint m_lastVictimID = 0x7360; // int32
    public const nint m_isAimingAtEnemy = 0x7364; // bool
    public const nint m_isRapidFiring = 0x7365; // bool
    public const nint m_equipTimer = 0x7368; // IntervalTimer
    public const nint m_zoomTimer = 0x7378; // CountdownTimer
    public const nint m_fireWeaponTimestamp = 0x7390; // GameTime_t
    public const nint m_lookForWeaponsOnGroundTimer = 0x7398; // CountdownTimer
    public const nint m_bIsSleeping = 0x73B0; // bool
    public const nint m_isEnemySniperVisible = 0x73B1; // bool
    public const nint m_sawEnemySniperTimer = 0x73B8; // CountdownTimer
    public const nint m_enemyQueueIndex = 0x7470; // uint8
    public const nint m_enemyQueueCount = 0x7471; // uint8
    public const nint m_enemyQueueAttendIndex = 0x7472; // uint8
    public const nint m_isStuck = 0x7473; // bool
    public const nint m_stuckTimestamp = 0x7474; // GameTime_t
    public const nint m_stuckSpot = 0x7478; // Vector
    public const nint m_wiggleTimer = 0x7488; // CountdownTimer
    public const nint m_stuckJumpTimer = 0x74A0; // CountdownTimer
    public const nint m_nextCleanupCheckTimestamp = 0x74B8; // GameTime_t
    public const nint m_avgVel = 0x74BC; // float32[10]
    public const nint m_avgVelIndex = 0x74E4; // int32
    public const nint m_avgVelCount = 0x74E8; // int32
    public const nint m_lastOrigin = 0x74EC; // Vector
    public const nint m_lastRadioRecievedTimestamp = 0x74FC; // float32
    public const nint m_lastRadioSentTimestamp = 0x7500; // float32
    public const nint m_radioSubject = 0x7504; // CHandle< CCSPlayerPawn >
    public const nint m_radioPosition = 0x7508; // Vector
    public const nint m_voiceEndTimestamp = 0x7514; // float32
    public const nint m_lastValidReactionQueueFrame = 0x7520; // int32
}

public static class CCSGOViewModel {
    public const nint m_bShouldIgnoreOffsetAndAccuracy = 0x8D8; // bool
    public const nint m_nWeaponParity = 0x8DC; // uint32
    public const nint m_nOldWeaponParity = 0x8E0; // uint32
}

public static class CCSGO_TeamPreviewCharacterPosition {
    public const nint m_nVariant = 0x4B0; // int32
    public const nint m_nRandom = 0x4B4; // int32
    public const nint m_nOrdinal = 0x4B8; // int32
    public const nint m_sWeaponName = 0x4C0; // CUtlString
    public const nint m_xuid = 0x4C8; // uint64
    public const nint m_weaponItem = 0x4D0; // CEconItemView
}

public static class CCSGameModeRules {
    public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
}

public static class CCSGameModeRules_Deathmatch {
    public const nint m_bFirstThink = 0x30; // bool
    public const nint m_bFirstThinkAfterConnected = 0x31; // bool
    public const nint m_flDMBonusStartTime = 0x34; // GameTime_t
    public const nint m_flDMBonusTimeLength = 0x38; // float32
    public const nint m_nDMBonusWeaponLoadoutSlot = 0x3C; // int16
}

public static class CCSGameRules {
    public const nint __m_pChainEntity = 0x98; // CNetworkVarChainer
    public const nint m_coopMissionManager = 0xC0; // CHandle< CBaseEntity >
    public const nint m_bFreezePeriod = 0xC4; // bool
    public const nint m_bWarmupPeriod = 0xC5; // bool
    public const nint m_fWarmupPeriodEnd = 0xC8; // GameTime_t
    public const nint m_fWarmupPeriodStart = 0xCC; // GameTime_t
    public const nint m_nTotalPausedTicks = 0xD0; // int32
    public const nint m_nPauseStartTick = 0xD4; // int32
    public const nint m_bServerPaused = 0xD8; // bool
    public const nint m_bGamePaused = 0xD9; // bool
    public const nint m_bTerroristTimeOutActive = 0xDA; // bool
    public const nint m_bCTTimeOutActive = 0xDB; // bool
    public const nint m_flTerroristTimeOutRemaining = 0xDC; // float32
    public const nint m_flCTTimeOutRemaining = 0xE0; // float32
    public const nint m_nTerroristTimeOuts = 0xE4; // int32
    public const nint m_nCTTimeOuts = 0xE8; // int32
    public const nint m_bTechnicalTimeOut = 0xEC; // bool
    public const nint m_bMatchWaitingForResume = 0xED; // bool
    public const nint m_iRoundTime = 0xF0; // int32
    public const nint m_fMatchStartTime = 0xF4; // float32
    public const nint m_fRoundStartTime = 0xF8; // GameTime_t
    public const nint m_flRestartRoundTime = 0xFC; // GameTime_t
    public const nint m_bGameRestart = 0x100; // bool
    public const nint m_flGameStartTime = 0x104; // float32
    public const nint m_timeUntilNextPhaseStarts = 0x108; // float32
    public const nint m_gamePhase = 0x10C; // int32
    public const nint m_totalRoundsPlayed = 0x110; // int32
    public const nint m_nRoundsPlayedThisPhase = 0x114; // int32
    public const nint m_nOvertimePlaying = 0x118; // int32
    public const nint m_iHostagesRemaining = 0x11C; // int32
    public const nint m_bAnyHostageReached = 0x120; // bool
    public const nint m_bMapHasBombTarget = 0x121; // bool
    public const nint m_bMapHasRescueZone = 0x122; // bool
    public const nint m_bMapHasBuyZone = 0x123; // bool
    public const nint m_bIsQueuedMatchmaking = 0x124; // bool
    public const nint m_nQueuedMatchmakingMode = 0x128; // int32
    public const nint m_bIsValveDS = 0x12C; // bool
    public const nint m_bLogoMap = 0x12D; // bool
    public const nint m_bPlayAllStepSoundsOnServer = 0x12E; // bool
    public const nint m_iSpectatorSlotCount = 0x130; // int32
    public const nint m_MatchDevice = 0x134; // int32
    public const nint m_bHasMatchStarted = 0x138; // bool
    public const nint m_nNextMapInMapgroup = 0x13C; // int32
    public const nint m_szTournamentEventName = 0x140; // char[512]
    public const nint m_szTournamentEventStage = 0x340; // char[512]
    public const nint m_szMatchStatTxt = 0x540; // char[512]
    public const nint m_szTournamentPredictionsTxt = 0x740; // char[512]
    public const nint m_nTournamentPredictionsPct = 0x940; // int32
    public const nint m_flCMMItemDropRevealStartTime = 0x944; // GameTime_t
    public const nint m_flCMMItemDropRevealEndTime = 0x948; // GameTime_t
    public const nint m_bIsDroppingItems = 0x94C; // bool
    public const nint m_bIsQuestEligible = 0x94D; // bool
    public const nint m_nGuardianModeWaveNumber = 0x950; // int32
    public const nint m_nGuardianModeSpecialKillsRemaining = 0x954; // int32
    public const nint m_nGuardianModeSpecialWeaponNeeded = 0x958; // int32
    public const nint m_nGuardianGrenadesToGiveBots = 0x95C; // int32
    public const nint m_nNumHeaviesToSpawn = 0x960; // int32
    public const nint m_numGlobalGiftsGiven = 0x964; // uint32
    public const nint m_numGlobalGifters = 0x968; // uint32
    public const nint m_numGlobalGiftsPeriodSeconds = 0x96C; // uint32
    public const nint m_arrFeaturedGiftersAccounts = 0x970; // uint32[4]
    public const nint m_arrFeaturedGiftersGifts = 0x980; // uint32[4]
    public const nint m_arrProhibitedItemIndices = 0x990; // uint16[100]
    public const nint m_arrTournamentActiveCasterAccounts = 0xA58; // uint32[4]
    public const nint m_numBestOfMaps = 0xA68; // int32
    public const nint m_nHalloweenMaskListSeed = 0xA6C; // int32
    public const nint m_bBombDropped = 0xA70; // bool
    public const nint m_bBombPlanted = 0xA71; // bool
    public const nint m_iRoundWinStatus = 0xA74; // int32
    public const nint m_eRoundWinReason = 0xA78; // int32
    public const nint m_bTCantBuy = 0xA7C; // bool
    public const nint m_bCTCantBuy = 0xA7D; // bool
    public const nint m_flGuardianBuyUntilTime = 0xA80; // GameTime_t
    public const nint m_iMatchStats_RoundResults = 0xA84; // int32[30]
    public const nint m_iMatchStats_PlayersAlive_CT = 0xAFC; // int32[30]
    public const nint m_iMatchStats_PlayersAlive_T = 0xB74; // int32[30]
    public const nint m_TeamRespawnWaveTimes = 0xBEC; // float32[32]
    public const nint m_flNextRespawnWave = 0xC6C; // GameTime_t[32]
    public const nint m_nServerQuestID = 0xCEC; // int32
    public const nint m_vMinimapMins = 0xCF0; // Vector
    public const nint m_vMinimapMaxs = 0xCFC; // Vector
    public const nint m_MinimapVerticalSectionHeights = 0xD08; // float32[8]
    public const nint m_bDontIncrementCoopWave = 0xD28; // bool
    public const nint m_bSpawnedTerrorHuntHeavy = 0xD29; // bool
    public const nint m_nEndMatchMapGroupVoteTypes = 0xD2C; // int32[10]
    public const nint m_nEndMatchMapGroupVoteOptions = 0xD54; // int32[10]
    public const nint m_nEndMatchMapVoteWinner = 0xD7C; // int32
    public const nint m_iNumConsecutiveCTLoses = 0xD80; // int32
    public const nint m_iNumConsecutiveTerroristLoses = 0xD84; // int32
    public const nint m_bHasHostageBeenTouched = 0xDA0; // bool
    public const nint m_flIntermissionStartTime = 0xDA4; // GameTime_t
    public const nint m_flIntermissionEndTime = 0xDA8; // GameTime_t
    public const nint m_bLevelInitialized = 0xDAC; // bool
    public const nint m_iTotalRoundsPlayed = 0xDB0; // int32
    public const nint m_iUnBalancedRounds = 0xDB4; // int32
    public const nint m_endMatchOnRoundReset = 0xDB8; // bool
    public const nint m_endMatchOnThink = 0xDB9; // bool
    public const nint m_iFreezeTime = 0xDBC; // int32
    public const nint m_iNumTerrorist = 0xDC0; // int32
    public const nint m_iNumCT = 0xDC4; // int32
    public const nint m_iNumSpawnableTerrorist = 0xDC8; // int32
    public const nint m_iNumSpawnableCT = 0xDCC; // int32
    public const nint m_arrSelectedHostageSpawnIndices = 0xDD0; // CUtlVector< int32 >
    public const nint m_bFirstConnected = 0xDE8; // bool
    public const nint m_bCompleteReset = 0xDE9; // bool
    public const nint m_bPickNewTeamsOnReset = 0xDEA; // bool
    public const nint m_bScrambleTeamsOnRestart = 0xDEB; // bool
    public const nint m_bSwapTeamsOnRestart = 0xDEC; // bool
    public const nint m_nEndMatchTiedVotes = 0xDF8; // CUtlVector< int32 >
    public const nint m_bNeedToAskPlayersForContinueVote = 0xE14; // bool
    public const nint m_numQueuedMatchmakingAccounts = 0xE18; // uint32
    public const nint m_pQueuedMatchmakingReservationString = 0xE20; // char*
    public const nint m_numTotalTournamentDrops = 0xE28; // uint32
    public const nint m_numSpectatorsCountMax = 0xE2C; // uint32
    public const nint m_numSpectatorsCountMaxTV = 0xE30; // uint32
    public const nint m_numSpectatorsCountMaxLnk = 0xE34; // uint32
    public const nint m_bForceTeamChangeSilent = 0xE40; // bool
    public const nint m_bLoadingRoundBackupData = 0xE41; // bool
    public const nint m_nMatchInfoShowType = 0xE78; // int32
    public const nint m_flMatchInfoDecidedTime = 0xE7C; // float32
    public const nint m_flCoopRespawnAndHealTime = 0xE98; // float32
    public const nint m_coopBonusCoinsFound = 0xE9C; // int32
    public const nint m_coopBonusPistolsOnly = 0xEA0; // bool
    public const nint m_coopPlayersInDeploymentZone = 0xEA1; // bool
    public const nint m_coopMissionDeadPlayerRespawnEnabled = 0xEA2; // bool
    public const nint mTeamDMLastWinningTeamNumber = 0xEA4; // int32
    public const nint mTeamDMLastThinkTime = 0xEA8; // float32
    public const nint m_flTeamDMLastAnnouncementTime = 0xEAC; // float32
    public const nint m_iAccountTerrorist = 0xEB0; // int32
    public const nint m_iAccountCT = 0xEB4; // int32
    public const nint m_iSpawnPointCount_Terrorist = 0xEB8; // int32
    public const nint m_iSpawnPointCount_CT = 0xEBC; // int32
    public const nint m_iMaxNumTerrorists = 0xEC0; // int32
    public const nint m_iMaxNumCTs = 0xEC4; // int32
    public const nint m_iLoserBonus = 0xEC8; // int32
    public const nint m_iLoserBonusMostRecentTeam = 0xECC; // int32
    public const nint m_tmNextPeriodicThink = 0xED0; // float32
    public const nint m_bVoiceWonMatchBragFired = 0xED4; // bool
    public const nint m_fWarmupNextChatNoticeTime = 0xED8; // float32
    public const nint m_iHostagesRescued = 0xEE0; // int32
    public const nint m_iHostagesTouched = 0xEE4; // int32
    public const nint m_flNextHostageAnnouncement = 0xEE8; // float32
    public const nint m_bNoTerroristsKilled = 0xEEC; // bool
    public const nint m_bNoCTsKilled = 0xEED; // bool
    public const nint m_bNoEnemiesKilled = 0xEEE; // bool
    public const nint m_bCanDonateWeapons = 0xEEF; // bool
    public const nint m_firstKillTime = 0xEF4; // float32
    public const nint m_firstBloodTime = 0xEFC; // float32
    public const nint m_hostageWasInjured = 0xF18; // bool
    public const nint m_hostageWasKilled = 0xF19; // bool
    public const nint m_bVoteCalled = 0xF28; // bool
    public const nint m_bServerVoteOnReset = 0xF29; // bool
    public const nint m_flVoteCheckThrottle = 0xF2C; // float32
    public const nint m_bBuyTimeEnded = 0xF30; // bool
    public const nint m_nLastFreezeEndBeep = 0xF34; // int32
    public const nint m_bTargetBombed = 0xF38; // bool
    public const nint m_bBombDefused = 0xF39; // bool
    public const nint m_bMapHasBombZone = 0xF3A; // bool
    public const nint m_vecMainCTSpawnPos = 0xF58; // Vector
    public const nint m_CTSpawnPointsMasterList = 0xF68; // CUtlVector< SpawnPoint* >
    public const nint m_TerroristSpawnPointsMasterList = 0xF80; // CUtlVector< SpawnPoint* >
    public const nint m_iNextCTSpawnPoint = 0xF98; // int32
    public const nint m_iNextTerroristSpawnPoint = 0xF9C; // int32
    public const nint m_CTSpawnPoints = 0xFA0; // CUtlVector< SpawnPoint* >
    public const nint m_TerroristSpawnPoints = 0xFB8; // CUtlVector< SpawnPoint* >
    public const nint m_bIsUnreservedGameServer = 0xFD0; // bool
    public const nint m_fAutobalanceDisplayTime = 0xFD4; // float32
    public const nint m_bAllowWeaponSwitch = 0x1240; // bool
    public const nint m_bRoundTimeWarningTriggered = 0x1241; // bool
    public const nint m_phaseChangeAnnouncementTime = 0x1244; // GameTime_t
    public const nint m_fNextUpdateTeamClanNamesTime = 0x1248; // float32
    public const nint m_flLastThinkTime = 0x124C; // GameTime_t
    public const nint m_fAccumulatedRoundOffDamage = 0x1250; // float32
    public const nint m_nShorthandedBonusLastEvalRound = 0x1254; // int32
    public const nint m_bMatchAbortedDueToPlayerBan = 0x14D0; // bool
    public const nint m_bHasTriggeredRoundStartMusic = 0x14D1; // bool
    public const nint m_bHasTriggeredCoopSpawnReset = 0x14D2; // bool
    public const nint m_bSwitchingTeamsAtRoundReset = 0x14D3; // bool
    public const nint m_pGameModeRules = 0x14F0; // CCSGameModeRules*
    public const nint m_BtGlobalBlackboard = 0x14F8; // KeyValues3
    public const nint m_hPlayerResource = 0x1560; // CHandle< CBaseEntity >
    public const nint m_RetakeRules = 0x1568; // CRetakeGameRules
    public const nint m_GuardianBotSkillLevelMax = 0x174C; // int32
    public const nint m_GuardianBotSkillLevelMin = 0x1750; // int32
    public const nint m_arrTeamUniqueKillWeaponsMatch = 0x1758; // CUtlVector< int32 >[4]
    public const nint m_bTeamLastKillUsedUniqueWeaponMatch = 0x17B8; // bool[4]
    public const nint m_nMatchEndCount = 0x17E0; // uint8
    public const nint m_nTTeamIntroVariant = 0x17E4; // int32
    public const nint m_nCTTeamIntroVariant = 0x17E8; // int32
    public const nint m_bTeamIntroPeriod = 0x17EC; // bool
    public const nint m_fTeamIntroPeriodEnd = 0x17F0; // GameTime_t
    public const nint m_bPlayedTeamIntroVO = 0x17F4; // bool
    public const nint m_flLastPerfSampleTime = 0x27B0; // float64
    public const nint m_bSkipNextPerfSample = 0x27B8; // bool
}

public static class CCSGameRulesProxy {
    public const nint m_pGameRules = 0x4B0; // CCSGameRules*
}

public static class CCSPlace {
    public const nint m_name = 0x708; // CUtlSymbolLarge
}

public static class CCSPlayerBase_CameraServices {
    public const nint m_iFOV = 0x170; // uint32
    public const nint m_iFOVStart = 0x174; // uint32
    public const nint m_flFOVTime = 0x178; // GameTime_t
    public const nint m_flFOVRate = 0x17C; // float32
    public const nint m_hZoomOwner = 0x180; // CHandle< CBaseEntity >
    public const nint m_hTriggerFogList = 0x188; // CUtlVector< CHandle< CBaseEntity > >
    public const nint m_hLastFogTrigger = 0x1A0; // CHandle< CBaseEntity >
}

public static class CCSPlayerController {
    public const nint m_pInGameMoneyServices = 0x6A0; // CCSPlayerController_InGameMoneyServices*
    public const nint m_pInventoryServices = 0x6A8; // CCSPlayerController_InventoryServices*
    public const nint m_pActionTrackingServices = 0x6B0; // CCSPlayerController_ActionTrackingServices*
    public const nint m_pDamageServices = 0x6B8; // CCSPlayerController_DamageServices*
    public const nint m_iPing = 0x6C0; // uint32
    public const nint m_bHasCommunicationAbuseMute = 0x6C4; // bool
    public const nint m_szCrosshairCodes = 0x6C8; // CUtlSymbolLarge
    public const nint m_iPendingTeamNum = 0x6D0; // uint8
    public const nint m_flForceTeamTime = 0x6D4; // GameTime_t
    public const nint m_iCompTeammateColor = 0x6D8; // int32
    public const nint m_bEverPlayedOnTeam = 0x6DC; // bool
    public const nint m_bAttemptedToGetColor = 0x6DD; // bool
    public const nint m_iTeammatePreferredColor = 0x6E0; // int32
    public const nint m_bTeamChanged = 0x6E4; // bool
    public const nint m_bInSwitchTeam = 0x6E5; // bool
    public const nint m_bHasSeenJoinGame = 0x6E6; // bool
    public const nint m_bJustBecameSpectator = 0x6E7; // bool
    public const nint m_bSwitchTeamsOnNextRoundReset = 0x6E8; // bool
    public const nint m_bRemoveAllItemsOnNextRoundReset = 0x6E9; // bool
    public const nint m_szClan = 0x6F0; // CUtlSymbolLarge
    public const nint m_szClanName = 0x6F8; // char[32]
    public const nint m_iCoachingTeam = 0x718; // int32
    public const nint m_nPlayerDominated = 0x720; // uint64
    public const nint m_nPlayerDominatingMe = 0x728; // uint64
    public const nint m_iCompetitiveRanking = 0x730; // int32
    public const nint m_iCompetitiveWins = 0x734; // int32
    public const nint m_iCompetitiveRankType = 0x738; // int8
    public const nint m_iCompetitiveRankingPredicted_Win = 0x73C; // int32
    public const nint m_iCompetitiveRankingPredicted_Loss = 0x740; // int32
    public const nint m_iCompetitiveRankingPredicted_Tie = 0x744; // int32
    public const nint m_nEndMatchNextMapVote = 0x748; // int32
    public const nint m_unActiveQuestId = 0x74C; // uint16
    public const nint m_nQuestProgressReason = 0x750; // QuestProgress::Reason
    public const nint m_unPlayerTvControlFlags = 0x754; // uint32
    public const nint m_iDraftIndex = 0x7C0; // int32
    public const nint m_msQueuedModeDisconnectionTimestamp = 0x7C4; // uint32
    public const nint m_uiAbandonRecordedReason = 0x7C8; // uint32
    public const nint m_bEverFullyConnected = 0x7CC; // bool
    public const nint m_bAbandonAllowsSurrender = 0x7CD; // bool
    public const nint m_bAbandonOffersInstantSurrender = 0x7CE; // bool
    public const nint m_bDisconnection1MinWarningPrinted = 0x7CF; // bool
    public const nint m_bScoreReported = 0x7D0; // bool
    public const nint m_nDisconnectionTick = 0x7D4; // int32
    public const nint m_bControllingBot = 0x7E0; // bool
    public const nint m_bHasControlledBotThisRound = 0x7E1; // bool
    public const nint m_bHasBeenControlledByPlayerThisRound = 0x7E2; // bool
    public const nint m_nBotsControlledThisRound = 0x7E4; // int32
    public const nint m_bCanControlObservedBot = 0x7E8; // bool
    public const nint m_hPlayerPawn = 0x7EC; // CHandle< CCSPlayerPawn >
    public const nint m_hObserverPawn = 0x7F0; // CHandle< CCSObserverPawn >
    public const nint m_DesiredObserverMode = 0x7F4; // int32
    public const nint m_hDesiredObserverTarget = 0x7F8; // CEntityHandle
    public const nint m_bPawnIsAlive = 0x7FC; // bool
    public const nint m_iPawnHealth = 0x800; // uint32
    public const nint m_iPawnArmor = 0x804; // int32
    public const nint m_bPawnHasDefuser = 0x808; // bool
    public const nint m_bPawnHasHelmet = 0x809; // bool
    public const nint m_nPawnCharacterDefIndex = 0x80A; // uint16
    public const nint m_iPawnLifetimeStart = 0x80C; // int32
    public const nint m_iPawnLifetimeEnd = 0x810; // int32
    public const nint m_iPawnBotDifficulty = 0x814; // int32
    public const nint m_hOriginalControllerOfCurrentPawn = 0x818; // CHandle< CCSPlayerController >
    public const nint m_iScore = 0x81C; // int32
    public const nint m_iRoundScore = 0x820; // int32
    public const nint m_vecKills = 0x828; // CNetworkUtlVectorBase< EKillTypes_t >
    public const nint m_iMVPs = 0x840; // int32
    public const nint m_nUpdateCounter = 0x844; // int32
    public const nint m_lastHeldVoteTimer = 0xF8E8; // IntervalTimer
    public const nint m_bShowHints = 0xF900; // bool
    public const nint m_iNextTimeCheck = 0xF904; // int32
}

public static class CCSPlayerController_ActionTrackingServices {
    public const nint m_perRoundStats = 0x40; // CUtlVectorEmbeddedNetworkVar< CSPerRoundStats_t >
    public const nint m_matchStats = 0x90; // CSMatchStats_t
    public const nint m_iNumRoundKills = 0x148; // int32
    public const nint m_iNumRoundKillsHeadshots = 0x14C; // int32
}

public static class CCSPlayerController_DamageServices {
    public const nint m_nSendUpdate = 0x40; // int32
    public const nint m_DamageList = 0x48; // CUtlVectorEmbeddedNetworkVar< CDamageRecord >
}

public static class CCSPlayerController_InGameMoneyServices {
    public const nint m_bReceivesMoneyNextRound = 0x40; // bool
    public const nint m_iAccountMoneyEarnedForNextRound = 0x44; // int32
    public const nint m_iAccount = 0x48; // int32
    public const nint m_iStartAccount = 0x4C; // int32
    public const nint m_iTotalCashSpent = 0x50; // int32
    public const nint m_iCashSpentThisRound = 0x54; // int32
}

public static class CCSPlayerController_InventoryServices {
    public const nint m_unMusicID = 0x40; // uint16
    public const nint m_rank = 0x44; // MedalRank_t[6]
    public const nint m_nPersonaDataPublicLevel = 0x5C; // int32
    public const nint m_nPersonaDataPublicCommendsLeader = 0x60; // int32
    public const nint m_nPersonaDataPublicCommendsTeacher = 0x64; // int32
    public const nint m_nPersonaDataPublicCommendsFriendly = 0x68; // int32
    public const nint m_unEquippedPlayerSprayIDs = 0xF48; // uint32[1]
    public const nint m_vecTerroristLoadoutCache = 0xF50; // CUtlVectorEmbeddedNetworkVar< CEconItemView >
    public const nint m_vecCounterTerroristLoadoutCache = 0xFA0; // CUtlVectorEmbeddedNetworkVar< CEconItemView >
}

public static class CCSPlayerPawn {
    public const nint m_pBulletServices = 0x1568; // CCSPlayer_BulletServices*
    public const nint m_pHostageServices = 0x1570; // CCSPlayer_HostageServices*
    public const nint m_pBuyServices = 0x1578; // CCSPlayer_BuyServices*
    public const nint m_pActionTrackingServices = 0x1580; // CCSPlayer_ActionTrackingServices*
    public const nint m_pRadioServices = 0x1588; // CCSPlayer_RadioServices*
    public const nint m_pDamageReactServices = 0x1590; // CCSPlayer_DamageReactServices*
    public const nint m_nCharacterDefIndex = 0x1598; // uint16
    public const nint m_hPreviousModel = 0x15A0; // CStrongHandle< InfoForResourceTypeCModel >
    public const nint m_bHasFemaleVoice = 0x15A8; // bool
    public const nint m_strVOPrefix = 0x15B0; // CUtlString
    public const nint m_szLastPlaceName = 0x15B8; // char[18]
    public const nint m_bInBuyZone = 0x1678; // bool
    public const nint m_bWasInBuyZone = 0x1679; // bool
    public const nint m_bInHostageRescueZone = 0x167A; // bool
    public const nint m_bInBombZone = 0x167B; // bool
    public const nint m_bWasInHostageRescueZone = 0x167C; // bool
    public const nint m_iRetakesOffering = 0x1680; // int32
    public const nint m_iRetakesOfferingCard = 0x1684; // int32
    public const nint m_bRetakesHasDefuseKit = 0x1688; // bool
    public const nint m_bRetakesMVPLastRound = 0x1689; // bool
    public const nint m_iRetakesMVPBoostItem = 0x168C; // int32
    public const nint m_RetakesMVPBoostExtraUtility = 0x1690; // loadout_slot_t
    public const nint m_flHealthShotBoostExpirationTime = 0x1694; // GameTime_t
    public const nint m_flLandseconds = 0x1698; // float32
    public const nint m_aimPunchAngle = 0x169C; // QAngle
    public const nint m_aimPunchAngleVel = 0x16A8; // QAngle
    public const nint m_aimPunchTickBase = 0x16B4; // int32
    public const nint m_aimPunchTickFraction = 0x16B8; // float32
    public const nint m_aimPunchCache = 0x16C0; // CUtlVector< QAngle >
    public const nint m_bIsBuyMenuOpen = 0x16D8; // bool
    public const nint m_xLastHeadBoneTransform = 0x1C30; // CTransform
    public const nint m_bLastHeadBoneTransformIsValid = 0x1C50; // bool
    public const nint m_lastLandTime = 0x1C54; // GameTime_t
    public const nint m_iPlayerLocked = 0x1C58; // int32
    public const nint m_flTimeOfLastInjury = 0x1C60; // GameTime_t
    public const nint m_flNextSprayDecalTime = 0x1C64; // GameTime_t
    public const nint m_bNextSprayDecalTimeExpedited = 0x1C68; // bool
    public const nint m_nRagdollDamageBone = 0x1C6C; // int32
    public const nint m_vRagdollDamageForce = 0x1C70; // Vector
    public const nint m_vRagdollDamagePosition = 0x1C7C; // Vector
    public const nint m_szRagdollDamageWeaponName = 0x1C88; // char[64]
    public const nint m_bRagdollDamageHeadshot = 0x1CC8; // bool
    public const nint m_EconGloves = 0x1CD0; // CEconItemView
    public const nint m_qDeathEyeAngles = 0x1F48; // QAngle
    public const nint m_bSkipOneHeadConstraintUpdate = 0x1F54; // bool
}

public static class CCSPlayerPawnBase {
    public const nint m_CTouchExpansionComponent = 0xB60; // CTouchExpansionComponent
    public const nint m_pPingServices = 0xBB0; // CCSPlayer_PingServices*
    public const nint m_pViewModelServices = 0xBB8; // CPlayer_ViewModelServices*
    public const nint m_iDisplayHistoryBits = 0xBC0; // uint32
    public const nint m_flLastAttackedTeammate = 0xBC4; // float32
    public const nint m_hOriginalController = 0xBC8; // CHandle< CCSPlayerController >
    public const nint m_blindUntilTime = 0xBCC; // GameTime_t
    public const nint m_blindStartTime = 0xBD0; // GameTime_t
    public const nint m_allowAutoFollowTime = 0xBD4; // GameTime_t
    public const nint m_entitySpottedState = 0xBD8; // EntitySpottedState_t
    public const nint m_nSpotRules = 0xBF0; // int32
    public const nint m_iPlayerState = 0xBF4; // CSPlayerState
    public const nint m_chickenIdleSoundTimer = 0xC00; // CountdownTimer
    public const nint m_chickenJumpSoundTimer = 0xC18; // CountdownTimer
    public const nint m_vecLastBookmarkedPosition = 0xCD0; // Vector
    public const nint m_flLastDistanceTraveledNotice = 0xCDC; // float32
    public const nint m_flAccumulatedDistanceTraveled = 0xCE0; // float32
    public const nint m_flLastFriendlyFireDamageReductionRatio = 0xCE4; // float32
    public const nint m_bRespawning = 0xCE8; // bool
    public const nint m_nLastPickupPriority = 0xCEC; // int32
    public const nint m_flLastPickupPriorityTime = 0xCF0; // float32
    public const nint m_bIsScoped = 0xCF4; // bool
    public const nint m_bIsWalking = 0xCF5; // bool
    public const nint m_bResumeZoom = 0xCF6; // bool
    public const nint m_bIsDefusing = 0xCF7; // bool
    public const nint m_bIsGrabbingHostage = 0xCF8; // bool
    public const nint m_iBlockingUseActionInProgress = 0xCFC; // CSPlayerBlockingUseAction_t
    public const nint m_fImmuneToGunGameDamageTime = 0xD00; // GameTime_t
    public const nint m_bGunGameImmunity = 0xD04; // bool
    public const nint m_unTotalRoundDamageDealt = 0xD08; // uint32
    public const nint m_fMolotovDamageTime = 0xD0C; // float32
    public const nint m_bHasMovedSinceSpawn = 0xD10; // bool
    public const nint m_bCanMoveDuringFreezePeriod = 0xD11; // bool
    public const nint m_flGuardianTooFarDistFrac = 0xD14; // float32
    public const nint m_flNextGuardianTooFarHurtTime = 0xD18; // float32
    public const nint m_flDetectedByEnemySensorTime = 0xD1C; // GameTime_t
    public const nint m_flDealtDamageToEnemyMostRecentTimestamp = 0xD20; // float32
    public const nint m_flLastEquippedHelmetTime = 0xD24; // GameTime_t
    public const nint m_flLastEquippedArmorTime = 0xD28; // GameTime_t
    public const nint m_nHeavyAssaultSuitCooldownRemaining = 0xD2C; // int32
    public const nint m_bResetArmorNextSpawn = 0xD30; // bool
    public const nint m_flLastBumpMineBumpTime = 0xD34; // GameTime_t
    public const nint m_flEmitSoundTime = 0xD38; // GameTime_t
    public const nint m_iNumSpawns = 0xD3C; // int32
    public const nint m_iShouldHaveCash = 0xD40; // int32
    public const nint m_bJustKilledTeammate = 0xD44; // bool
    public const nint m_bPunishedForTK = 0xD45; // bool
    public const nint m_bInvalidSteamLogonDelayed = 0xD46; // bool
    public const nint m_iTeamKills = 0xD48; // int32
    public const nint m_flLastAction = 0xD4C; // GameTime_t
    public const nint m_flNameChangeHistory = 0xD50; // float32[5]
    public const nint m_fLastGivenDefuserTime = 0xD64; // float32
    public const nint m_fLastGivenBombTime = 0xD68; // float32
    public const nint m_bHasNightVision = 0xD6C; // bool
    public const nint m_bNightVisionOn = 0xD6D; // bool
    public const nint m_fNextRadarUpdateTime = 0xD70; // float32
    public const nint m_flLastMoneyUpdateTime = 0xD74; // float32
    public const nint m_MenuStringBuffer = 0xD78; // char[1024]
    public const nint m_fIntroCamTime = 0x1178; // float32
    public const nint m_nMyCollisionGroup = 0x117C; // int32
    public const nint m_bInNoDefuseArea = 0x1180; // bool
    public const nint m_bKilledByTaser = 0x1181; // bool
    public const nint m_iMoveState = 0x1184; // int32
    public const nint m_grenadeParameterStashTime = 0x1188; // GameTime_t
    public const nint m_bGrenadeParametersStashed = 0x118C; // bool
    public const nint m_angStashedShootAngles = 0x1190; // QAngle
    public const nint m_vecStashedGrenadeThrowPosition = 0x119C; // Vector
    public const nint m_vecStashedVelocity = 0x11A8; // Vector
    public const nint m_angShootAngleHistory = 0x11B4; // QAngle[2]
    public const nint m_vecThrowPositionHistory = 0x11CC; // Vector[2]
    public const nint m_vecVelocityHistory = 0x11E4; // Vector[2]
    public const nint m_bDiedAirborne = 0x11FC; // bool
    public const nint m_iBombSiteIndex = 0x1200; // CEntityIndex
    public const nint m_nWhichBombZone = 0x1204; // int32
    public const nint m_bInBombZoneTrigger = 0x1208; // bool
    public const nint m_bWasInBombZoneTrigger = 0x1209; // bool
    public const nint m_iDirection = 0x120C; // int32
    public const nint m_iShotsFired = 0x1210; // int32
    public const nint m_ArmorValue = 0x1214; // int32
    public const nint m_flFlinchStack = 0x1218; // float32
    public const nint m_flVelocityModifier = 0x121C; // float32
    public const nint m_flHitHeading = 0x1220; // float32
    public const nint m_nHitBodyPart = 0x1224; // int32
    public const nint m_iHostagesKilled = 0x1228; // int32
    public const nint m_vecTotalBulletForce = 0x122C; // Vector
    public const nint m_flFlashDuration = 0x1238; // float32
    public const nint m_flFlashMaxAlpha = 0x123C; // float32
    public const nint m_flProgressBarStartTime = 0x1240; // float32
    public const nint m_iProgressBarDuration = 0x1244; // int32
    public const nint m_bWaitForNoAttack = 0x1248; // bool
    public const nint m_flLowerBodyYawTarget = 0x124C; // float32
    public const nint m_bStrafing = 0x1250; // bool
    public const nint m_lastStandingPos = 0x1254; // Vector
    public const nint m_ignoreLadderJumpTime = 0x1260; // float32
    public const nint m_ladderSurpressionTimer = 0x1268; // CountdownTimer
    public const nint m_lastLadderNormal = 0x1280; // Vector
    public const nint m_lastLadderPos = 0x128C; // Vector
    public const nint m_thirdPersonHeading = 0x1298; // QAngle
    public const nint m_flSlopeDropOffset = 0x12A4; // float32
    public const nint m_flSlopeDropHeight = 0x12A8; // float32
    public const nint m_vHeadConstraintOffset = 0x12AC; // Vector
    public const nint m_iLastWeaponFireUsercmd = 0x12C0; // int32
    public const nint m_angEyeAngles = 0x12C4; // QAngle
    public const nint m_bVCollisionInitted = 0x12D0; // bool
    public const nint m_storedSpawnPosition = 0x12D4; // Vector
    public const nint m_storedSpawnAngle = 0x12E0; // QAngle
    public const nint m_bIsSpawning = 0x12EC; // bool
    public const nint m_bHideTargetID = 0x12ED; // bool
    public const nint m_nNumDangerZoneDamageHits = 0x12F0; // int32
    public const nint m_bHud_MiniScoreHidden = 0x12F4; // bool
    public const nint m_bHud_RadarHidden = 0x12F5; // bool
    public const nint m_nLastKillerIndex = 0x12F8; // CEntityIndex
    public const nint m_nLastConcurrentKilled = 0x12FC; // int32
    public const nint m_nDeathCamMusic = 0x1300; // int32
    public const nint m_iAddonBits = 0x1304; // int32
    public const nint m_iPrimaryAddon = 0x1308; // int32
    public const nint m_iSecondaryAddon = 0x130C; // int32
    public const nint m_nTeamDamageGivenForMatch = 0x1310; // int32
    public const nint m_bTDGaveProtectionWarning = 0x1314; // bool
    public const nint m_bTDGaveProtectionWarningThisRound = 0x1315; // bool
    public const nint m_flLastTHWarningTime = 0x1318; // float32
    public const nint m_currentDeafnessFilter = 0x131C; // CUtlStringToken
    public const nint m_NumEnemiesKilledThisSpawn = 0x1320; // int32
    public const nint m_NumEnemiesKilledThisRound = 0x1324; // int32
    public const nint m_NumEnemiesAtRoundStart = 0x1328; // int32
    public const nint m_iRoundsWon = 0x132C; // int32
    public const nint m_lastRoundResult = 0x1330; // int32
    public const nint m_wasNotKilledNaturally = 0x1334; // bool
    public const nint m_vecPlayerPatchEconIndices = 0x1338; // uint32[5]
    public const nint m_iDeathFlags = 0x134C; // int32
    public const nint m_hPet = 0x1350; // CHandle< CChicken >
    public const nint m_unCurrentEquipmentValue = 0x1520; // uint16
    public const nint m_unRoundStartEquipmentValue = 0x1522; // uint16
    public const nint m_unFreezetimeEndEquipmentValue = 0x1524; // uint16
    public const nint m_nSuicides = 0x1528; // int32
    public const nint m_nSurvivalTeamNumber = 0x152C; // int32
    public const nint m_bHasDeathInfo = 0x1530; // bool
    public const nint m_flDeathInfoTime = 0x1534; // float32
    public const nint m_vecDeathInfoOrigin = 0x1538; // Vector
    public const nint m_bKilledByHeadshot = 0x1544; // bool
    public const nint m_LastHitBox = 0x1548; // int32
    public const nint m_LastHealth = 0x154C; // int32
    public const nint m_flLastCollisionCeiling = 0x1550; // float32
    public const nint m_flLastCollisionCeilingChangeTime = 0x1554; // float32
    public const nint m_pBot = 0x1558; // CCSBot*
    public const nint m_bBotAllowActive = 0x1560; // bool
    public const nint m_bCommittingSuicideOnTeamChange = 0x1561; // bool
}

public static class CCSPlayerResource {
    public const nint m_bHostageAlive = 0x4B0; // bool[12]
    public const nint m_isHostageFollowingSomeone = 0x4BC; // bool[12]
    public const nint m_iHostageEntityIDs = 0x4C8; // CEntityIndex[12]
    public const nint m_bombsiteCenterA = 0x4F8; // Vector
    public const nint m_bombsiteCenterB = 0x504; // Vector
    public const nint m_hostageRescueX = 0x510; // int32[4]
    public const nint m_hostageRescueY = 0x520; // int32[4]
    public const nint m_hostageRescueZ = 0x530; // int32[4]
    public const nint m_bEndMatchNextMapAllVoted = 0x540; // bool
    public const nint m_foundGoalPositions = 0x541; // bool
}

public static class CCSPlayer_ActionTrackingServices {
    public const nint m_hLastWeaponBeforeC4AutoSwitch = 0x208; // CHandle< CBasePlayerWeapon >
    public const nint m_bIsRescuing = 0x23C; // bool
    public const nint m_weaponPurchasesThisMatch = 0x240; // WeaponPurchaseTracker_t
    public const nint m_weaponPurchasesThisRound = 0x298; // WeaponPurchaseTracker_t
}

public static class CCSPlayer_BulletServices {
    public const nint m_totalHitsOnServer = 0x40; // int32
}

public static class CCSPlayer_BuyServices {
    public const nint m_vecSellbackPurchaseEntries = 0xC8; // CUtlVectorEmbeddedNetworkVar< SellbackPurchaseEntry_t >
}

public static class CCSPlayer_HostageServices {
    public const nint m_hCarriedHostage = 0x40; // CHandle< CBaseEntity >
    public const nint m_hCarriedHostageProp = 0x44; // CHandle< CBaseEntity >
}

public static class CCSPlayer_ItemServices {
    public const nint m_bHasDefuser = 0x40; // bool
    public const nint m_bHasHelmet = 0x41; // bool
    public const nint m_bHasHeavyArmor = 0x42; // bool
}

public static class CCSPlayer_MovementServices {
    public const nint m_flMaxFallVelocity = 0x220; // float32
    public const nint m_vecLadderNormal = 0x224; // Vector
    public const nint m_nLadderSurfacePropIndex = 0x230; // int32
    public const nint m_flDuckAmount = 0x234; // float32
    public const nint m_flDuckSpeed = 0x238; // float32
    public const nint m_bDuckOverride = 0x23C; // bool
    public const nint m_bDesiresDuck = 0x23D; // bool
    public const nint m_flDuckOffset = 0x240; // float32
    public const nint m_nDuckTimeMsecs = 0x244; // uint32
    public const nint m_nDuckJumpTimeMsecs = 0x248; // uint32
    public const nint m_nJumpTimeMsecs = 0x24C; // uint32
    public const nint m_flLastDuckTime = 0x250; // float32
    public const nint m_vecLastPositionAtFullCrouchSpeed = 0x260; // Vector2D
    public const nint m_duckUntilOnGround = 0x268; // bool
    public const nint m_bHasWalkMovedSinceLastJump = 0x269; // bool
    public const nint m_bInStuckTest = 0x26A; // bool
    public const nint m_flStuckCheckTime = 0x278; // float32[64][2]
    public const nint m_nTraceCount = 0x478; // int32
    public const nint m_StuckLast = 0x47C; // int32
    public const nint m_bSpeedCropped = 0x480; // bool
    public const nint m_nOldWaterLevel = 0x484; // int32
    public const nint m_flWaterEntryTime = 0x488; // float32
    public const nint m_vecForward = 0x48C; // Vector
    public const nint m_vecLeft = 0x498; // Vector
    public const nint m_vecUp = 0x4A4; // Vector
    public const nint m_vecPreviouslyPredictedOrigin = 0x4B0; // Vector
    public const nint m_bMadeFootstepNoise = 0x4BC; // bool
    public const nint m_iFootsteps = 0x4C0; // int32
    public const nint m_bOldJumpPressed = 0x4C4; // bool
    public const nint m_flJumpPressedTime = 0x4C8; // float32
    public const nint m_flJumpUntil = 0x4CC; // float32
    public const nint m_flJumpVel = 0x4D0; // float32
    public const nint m_fStashGrenadeParameterWhen = 0x4D4; // GameTime_t
    public const nint m_nButtonDownMaskPrev = 0x4D8; // uint64
    public const nint m_flOffsetTickCompleteTime = 0x4E0; // float32
    public const nint m_flOffsetTickStashedSpeed = 0x4E4; // float32
    public const nint m_flStamina = 0x4E8; // float32
}

public static class CCSPlayer_PingServices {
    public const nint m_flPlayerPingTokens = 0x40; // GameTime_t[5]
    public const nint m_hPlayerPing = 0x54; // CHandle< CBaseEntity >
}

public static class CCSPlayer_RadioServices {
    public const nint m_flGotHostageTalkTimer = 0x40; // GameTime_t
    public const nint m_flDefusingTalkTimer = 0x44; // GameTime_t
    public const nint m_flC4PlantTalkTimer = 0x48; // GameTime_t
    public const nint m_flRadioTokenSlots = 0x4C; // GameTime_t[3]
    public const nint m_bIgnoreRadio = 0x58; // bool
}

public static class CCSPlayer_UseServices {
    public const nint m_hLastKnownUseEntity = 0x40; // CHandle< CBaseEntity >
    public const nint m_flLastUseTimeStamp = 0x44; // GameTime_t
    public const nint m_flTimeStartedHoldingUse = 0x48; // GameTime_t
    public const nint m_flTimeLastUsedWindow = 0x4C; // GameTime_t
}

public static class CCSPlayer_ViewModelServices {
    public const nint m_hViewModel = 0x40; // CHandle< CBaseViewModel >[3]
}

public static class CCSPlayer_WaterServices {
    public const nint m_NextDrownDamageTime = 0x40; // float32
    public const nint m_nDrownDmgRate = 0x44; // int32
    public const nint m_AirFinishedTime = 0x48; // GameTime_t
    public const nint m_flWaterJumpTime = 0x4C; // float32
    public const nint m_vecWaterJumpVel = 0x50; // Vector
    public const nint m_flSwimSoundTime = 0x5C; // float32
}

public static class CCSPlayer_WeaponServices {
    public const nint m_flNextAttack = 0xB0; // GameTime_t
    public const nint m_bIsLookingAtWeapon = 0xB4; // bool
    public const nint m_bIsHoldingLookAtWeapon = 0xB5; // bool
    public const nint m_hSavedWeapon = 0xB8; // CHandle< CBasePlayerWeapon >
    public const nint m_nTimeToMelee = 0xBC; // int32
    public const nint m_nTimeToSecondary = 0xC0; // int32
    public const nint m_nTimeToPrimary = 0xC4; // int32
    public const nint m_nTimeToSniperRifle = 0xC8; // int32
    public const nint m_bIsBeingGivenItem = 0xCC; // bool
    public const nint m_bIsPickingUpItemWithUse = 0xCD; // bool
    public const nint m_bPickedUpWeapon = 0xCE; // bool
}

public static class CCSTeam {
    public const nint m_nLastRecievedShorthandedRoundBonus = 0x568; // int32
    public const nint m_nShorthandedRoundBonusStartRound = 0x56C; // int32
    public const nint m_bSurrendered = 0x570; // bool
    public const nint m_szTeamMatchStat = 0x571; // char[512]
    public const nint m_numMapVictories = 0x774; // int32
    public const nint m_scoreFirstHalf = 0x778; // int32
    public const nint m_scoreSecondHalf = 0x77C; // int32
    public const nint m_scoreOvertime = 0x780; // int32
    public const nint m_szClanTeamname = 0x784; // char[129]
    public const nint m_iClanID = 0x808; // uint32
    public const nint m_szTeamFlagImage = 0x80C; // char[8]
    public const nint m_szTeamLogoImage = 0x814; // char[8]
    public const nint m_flNextResourceTime = 0x81C; // float32
    public const nint m_iLastUpdateSentAt = 0x820; // int32
}

public static class CCSWeaponBase {
    public const nint m_bRemoveable = 0xC88; // bool
    public const nint m_flFireSequenceStartTime = 0xC8C; // float32
    public const nint m_nFireSequenceStartTimeChange = 0xC90; // int32
    public const nint m_nFireSequenceStartTimeAck = 0xC94; // int32
    public const nint m_bPlayerFireEventIsPrimary = 0xC98; // bool
    public const nint m_seqIdle = 0xC9C; // HSequence
    public const nint m_seqFirePrimary = 0xCA0; // HSequence
    public const nint m_seqFireSecondary = 0xCA4; // HSequence
    public const nint m_bPlayerAmmoStockOnPickup = 0xCB0; // bool
    public const nint m_bRequireUseToTouch = 0xCB1; // bool
    public const nint m_iState = 0xCB4; // CSWeaponState_t
    public const nint m_flLastTimeInAir = 0xCB8; // GameTime_t
    public const nint m_flLastDeployTime = 0xCBC; // GameTime_t
    public const nint m_nViewModelIndex = 0xCC0; // uint32
    public const nint m_bReloadsWithClips = 0xCC4; // bool
    public const nint m_flTimeWeaponIdle = 0xCE0; // GameTime_t
    public const nint m_bFireOnEmpty = 0xCE4; // bool
    public const nint m_OnPlayerPickup = 0xCE8; // CEntityIOOutput
    public const nint m_weaponMode = 0xD10; // CSWeaponMode
    public const nint m_flTurningInaccuracyDelta = 0xD14; // float32
    public const nint m_vecTurningInaccuracyEyeDirLast = 0xD18; // Vector
    public const nint m_flTurningInaccuracy = 0xD24; // float32
    public const nint m_fAccuracyPenalty = 0xD28; // float32
    public const nint m_flLastAccuracyUpdateTime = 0xD2C; // GameTime_t
    public const nint m_fAccuracySmoothedForZoom = 0xD30; // float32
    public const nint m_fScopeZoomEndTime = 0xD34; // GameTime_t
    public const nint m_iRecoilIndex = 0xD38; // int32
    public const nint m_flRecoilIndex = 0xD3C; // float32
    public const nint m_bBurstMode = 0xD40; // bool
    public const nint m_flPostponeFireReadyTime = 0xD44; // GameTime_t
    public const nint m_bInReload = 0xD48; // bool
    public const nint m_bReloadVisuallyComplete = 0xD49; // bool
    public const nint m_flDroppedAtTime = 0xD4C; // GameTime_t
    public const nint m_bIsHauledBack = 0xD50; // bool
    public const nint m_bSilencerOn = 0xD51; // bool
    public const nint m_flTimeSilencerSwitchComplete = 0xD54; // GameTime_t
    public const nint m_iOriginalTeamNumber = 0xD58; // int32
    public const nint m_flNextAttackRenderTimeOffset = 0xD5C; // float32
    public const nint m_bCanBePickedUp = 0xD68; // bool
    public const nint m_bUseCanOverrideNextOwnerTouchTime = 0xD69; // bool
    public const nint m_nextOwnerTouchTime = 0xD6C; // GameTime_t
    public const nint m_nextPrevOwnerTouchTime = 0xD70; // GameTime_t
    public const nint m_hPrevOwner = 0xD74; // CHandle< CCSPlayerPawn >
    public const nint m_nDropTick = 0xD78; // GameTick_t
    public const nint m_donated = 0xD9C; // bool
    public const nint m_fLastShotTime = 0xDA0; // GameTime_t
    public const nint m_bWasOwnedByCT = 0xDA4; // bool
    public const nint m_bWasOwnedByTerrorist = 0xDA5; // bool
    public const nint m_bFiredOutOfAmmoEvent = 0xDA6; // bool
    public const nint m_numRemoveUnownedWeaponThink = 0xDA8; // int32
    public const nint m_IronSightController = 0xDB0; // CIronSightController
    public const nint m_iIronSightMode = 0xDC8; // int32
    public const nint m_flLastLOSTraceFailureTime = 0xDCC; // GameTime_t
    public const nint m_iNumEmptyAttacks = 0xDD0; // int32
}

public static class CCSWeaponBaseGun {
    public const nint m_zoomLevel = 0xDD8; // int32
    public const nint m_iBurstShotsRemaining = 0xDDC; // int32
    public const nint m_silencedModelIndex = 0xDE8; // int32
    public const nint m_inPrecache = 0xDEC; // bool
    public const nint m_bNeedsBoltAction = 0xDED; // bool
    public const nint m_bSkillReloadAvailable = 0xDEE; // bool
    public const nint m_bSkillReloadLiftedReloadKey = 0xDEF; // bool
    public const nint m_bSkillBoltInterruptAvailable = 0xDF0; // bool
    public const nint m_bSkillBoltLiftedFireKey = 0xDF1; // bool
}

public static class CCSWeaponBaseVData {
    public const nint m_WeaponType = 0x240; // CSWeaponType
    public const nint m_WeaponCategory = 0x244; // CSWeaponCategory
    public const nint m_szViewModel = 0x248; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    public const nint m_szPlayerModel = 0x328; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    public const nint m_szWorldDroppedModel = 0x408; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    public const nint m_szAimsightLensMaskModel = 0x4E8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    public const nint m_szMagazineModel = 0x5C8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    public const nint m_szHeatEffect = 0x6A8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    public const nint m_szEjectBrassEffect = 0x788; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    public const nint m_szMuzzleFlashParticleAlt = 0x868; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    public const nint m_szMuzzleFlashThirdPersonParticle = 0x948; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    public const nint m_szMuzzleFlashThirdPersonParticleAlt = 0xA28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    public const nint m_szTracerParticle = 0xB08; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    public const nint m_GearSlot = 0xBE8; // gear_slot_t
    public const nint m_GearSlotPosition = 0xBEC; // int32
    public const nint m_DefaultLoadoutSlot = 0xBF0; // loadout_slot_t
    public const nint m_sWrongTeamMsg = 0xBF8; // CUtlString
    public const nint m_nPrice = 0xC00; // int32
    public const nint m_nKillAward = 0xC04; // int32
    public const nint m_nPrimaryReserveAmmoMax = 0xC08; // int32
    public const nint m_nSecondaryReserveAmmoMax = 0xC0C; // int32
    public const nint m_bMeleeWeapon = 0xC10; // bool
    public const nint m_bHasBurstMode = 0xC11; // bool
    public const nint m_bIsRevolver = 0xC12; // bool
    public const nint m_bCannotShootUnderwater = 0xC13; // bool
    public const nint m_szName = 0xC18; // CUtlString
    public const nint m_szAnimExtension = 0xC20; // CUtlString
    public const nint m_eSilencerType = 0xC28; // CSWeaponSilencerType
    public const nint m_nCrosshairMinDistance = 0xC2C; // int32
    public const nint m_nCrosshairDeltaDistance = 0xC30; // int32
    public const nint m_flCycleTime = 0xC34; // CFiringModeFloat
    public const nint m_flMaxSpeed = 0xC3C; // CFiringModeFloat
    public const nint m_flSpread = 0xC44; // CFiringModeFloat
    public const nint m_flInaccuracyCrouch = 0xC4C; // CFiringModeFloat
    public const nint m_flInaccuracyStand = 0xC54; // CFiringModeFloat
    public const nint m_flInaccuracyJump = 0xC5C; // CFiringModeFloat
    public const nint m_flInaccuracyLand = 0xC64; // CFiringModeFloat
    public const nint m_flInaccuracyLadder = 0xC6C; // CFiringModeFloat
    public const nint m_flInaccuracyFire = 0xC74; // CFiringModeFloat
    public const nint m_flInaccuracyMove = 0xC7C; // CFiringModeFloat
    public const nint m_flRecoilAngle = 0xC84; // CFiringModeFloat
    public const nint m_flRecoilAngleVariance = 0xC8C; // CFiringModeFloat
    public const nint m_flRecoilMagnitude = 0xC94; // CFiringModeFloat
    public const nint m_flRecoilMagnitudeVariance = 0xC9C; // CFiringModeFloat
    public const nint m_nTracerFrequency = 0xCA4; // CFiringModeInt
    public const nint m_flInaccuracyJumpInitial = 0xCAC; // float32
    public const nint m_flInaccuracyJumpApex = 0xCB0; // float32
    public const nint m_flInaccuracyReload = 0xCB4; // float32
    public const nint m_nRecoilSeed = 0xCB8; // int32
    public const nint m_nSpreadSeed = 0xCBC; // int32
    public const nint m_flTimeToIdleAfterFire = 0xCC0; // float32
    public const nint m_flIdleInterval = 0xCC4; // float32
    public const nint m_flAttackMovespeedFactor = 0xCC8; // float32
    public const nint m_flHeatPerShot = 0xCCC; // float32
    public const nint m_flInaccuracyPitchShift = 0xCD0; // float32
    public const nint m_flInaccuracyAltSoundThreshold = 0xCD4; // float32
    public const nint m_flBotAudibleRange = 0xCD8; // float32
    public const nint m_szUseRadioSubtitle = 0xCE0; // CUtlString
    public const nint m_bUnzoomsAfterShot = 0xCE8; // bool
    public const nint m_bHideViewModelWhenZoomed = 0xCE9; // bool
    public const nint m_nZoomLevels = 0xCEC; // int32
    public const nint m_nZoomFOV1 = 0xCF0; // int32
    public const nint m_nZoomFOV2 = 0xCF4; // int32
    public const nint m_flZoomTime0 = 0xCF8; // float32
    public const nint m_flZoomTime1 = 0xCFC; // float32
    public const nint m_flZoomTime2 = 0xD00; // float32
    public const nint m_flIronSightPullUpSpeed = 0xD04; // float32
    public const nint m_flIronSightPutDownSpeed = 0xD08; // float32
    public const nint m_flIronSightFOV = 0xD0C; // float32
    public const nint m_flIronSightPivotForward = 0xD10; // float32
    public const nint m_flIronSightLooseness = 0xD14; // float32
    public const nint m_angPivotAngle = 0xD18; // QAngle
    public const nint m_vecIronSightEyePos = 0xD24; // Vector
    public const nint m_nDamage = 0xD30; // int32
    public const nint m_flHeadshotMultiplier = 0xD34; // float32
    public const nint m_flArmorRatio = 0xD38; // float32
    public const nint m_flPenetration = 0xD3C; // float32
    public const nint m_flRange = 0xD40; // float32
    public const nint m_flRangeModifier = 0xD44; // float32
    public const nint m_flFlinchVelocityModifierLarge = 0xD48; // float32
    public const nint m_flFlinchVelocityModifierSmall = 0xD4C; // float32
    public const nint m_flRecoveryTimeCrouch = 0xD50; // float32
    public const nint m_flRecoveryTimeStand = 0xD54; // float32
    public const nint m_flRecoveryTimeCrouchFinal = 0xD58; // float32
    public const nint m_flRecoveryTimeStandFinal = 0xD5C; // float32
    public const nint m_nRecoveryTransitionStartBullet = 0xD60; // int32
    public const nint m_nRecoveryTransitionEndBullet = 0xD64; // int32
    public const nint m_flThrowVelocity = 0xD68; // float32
    public const nint m_vSmokeColor = 0xD6C; // Vector
    public const nint m_szAnimClass = 0xD78; // CUtlString
}

public static class CChangeLevel {
    public const nint m_sMapName = 0x8A8; // CUtlString
    public const nint m_sLandmarkName = 0x8B0; // CUtlString
    public const nint m_OnChangeLevel = 0x8B8; // CEntityIOOutput
    public const nint m_bTouched = 0x8E0; // bool
    public const nint m_bNoTouch = 0x8E1; // bool
    public const nint m_bNewChapter = 0x8E2; // bool
    public const nint m_bOnChangeLevelFired = 0x8E3; // bool
}

public static class CChicken {
    public const nint m_AttributeManager = 0xB28; // CAttributeContainer
    public const nint m_OriginalOwnerXuidLow = 0xDF0; // uint32
    public const nint m_OriginalOwnerXuidHigh = 0xDF4; // uint32
    public const nint m_updateTimer = 0xDF8; // CountdownTimer
    public const nint m_stuckAnchor = 0xE10; // Vector
    public const nint m_stuckTimer = 0xE20; // CountdownTimer
    public const nint m_collisionStuckTimer = 0xE38; // CountdownTimer
    public const nint m_isOnGround = 0xE50; // bool
    public const nint m_vFallVelocity = 0xE54; // Vector
    public const nint m_activity = 0xE60; // ChickenActivity
    public const nint m_activityTimer = 0xE68; // CountdownTimer
    public const nint m_turnRate = 0xE80; // float32
    public const nint m_fleeFrom = 0xE84; // CHandle< CBaseEntity >
    public const nint m_moveRateThrottleTimer = 0xE88; // CountdownTimer
    public const nint m_startleTimer = 0xEA0; // CountdownTimer
    public const nint m_vocalizeTimer = 0xEB8; // CountdownTimer
    public const nint m_flWhenZombified = 0xED0; // GameTime_t
    public const nint m_jumpedThisFrame = 0xED4; // bool
    public const nint m_leader = 0xED8; // CHandle< CCSPlayerPawn >
    public const nint m_reuseTimer = 0xEE0; // CountdownTimer
    public const nint m_hasBeenUsed = 0xEF8; // bool
    public const nint m_jumpTimer = 0xF00; // CountdownTimer
    public const nint m_flLastJumpTime = 0xF18; // float32
    public const nint m_bInJump = 0xF1C; // bool
    public const nint m_isWaitingForLeader = 0xF1D; // bool
    public const nint m_repathTimer = 0x2F28; // CountdownTimer
    public const nint m_inhibitDoorTimer = 0x2F40; // CountdownTimer
    public const nint m_inhibitObstacleAvoidanceTimer = 0x2FD0; // CountdownTimer
    public const nint m_vecPathGoal = 0x2FF0; // Vector
    public const nint m_flActiveFollowStartTime = 0x2FFC; // GameTime_t
    public const nint m_followMinuteTimer = 0x3000; // CountdownTimer
    public const nint m_vecLastEggPoopPosition = 0x3018; // Vector
    public const nint m_vecEggsPooped = 0x3028; // CUtlVector< CHandle< CBaseEntity > >
    public const nint m_BlockDirectionTimer = 0x3048; // CountdownTimer
}

public static class CCollisionProperty {
    public const nint m_collisionAttribute = 0x10; // VPhysicsCollisionAttribute_t
    public const nint m_vecMins = 0x40; // Vector
    public const nint m_vecMaxs = 0x4C; // Vector
    public const nint m_usSolidFlags = 0x5A; // uint8
    public const nint m_nSolidType = 0x5B; // SolidType_t
    public const nint m_triggerBloat = 0x5C; // uint8
    public const nint m_nSurroundType = 0x5D; // SurroundingBoundsType_t
    public const nint m_CollisionGroup = 0x5E; // uint8
    public const nint m_nEnablePhysics = 0x5F; // uint8
    public const nint m_flBoundingRadius = 0x60; // float32
    public const nint m_vecSpecifiedSurroundingMins = 0x64; // Vector
    public const nint m_vecSpecifiedSurroundingMaxs = 0x70; // Vector
    public const nint m_vecSurroundingMaxs = 0x7C; // Vector
    public const nint m_vecSurroundingMins = 0x88; // Vector
    public const nint m_vCapsuleCenter1 = 0x94; // Vector
    public const nint m_vCapsuleCenter2 = 0xA0; // Vector
    public const nint m_flCapsuleRadius = 0xAC; // float32
}

public static class CColorCorrection {
    public const nint m_flFadeInDuration = 0x4B0; // float32
    public const nint m_flFadeOutDuration = 0x4B4; // float32
    public const nint m_flStartFadeInWeight = 0x4B8; // float32
    public const nint m_flStartFadeOutWeight = 0x4BC; // float32
    public const nint m_flTimeStartFadeIn = 0x4C0; // GameTime_t
    public const nint m_flTimeStartFadeOut = 0x4C4; // GameTime_t
    public const nint m_flMaxWeight = 0x4C8; // float32
    public const nint m_bStartDisabled = 0x4CC; // bool
    public const nint m_bEnabled = 0x4CD; // bool
    public const nint m_bMaster = 0x4CE; // bool
    public const nint m_bClientSide = 0x4CF; // bool
    public const nint m_bExclusive = 0x4D0; // bool
    public const nint m_MinFalloff = 0x4D4; // float32
    public const nint m_MaxFalloff = 0x4D8; // float32
    public const nint m_flCurWeight = 0x4DC; // float32
    public const nint m_netlookupFilename = 0x4E0; // char[512]
    public const nint m_lookupFilename = 0x6E0; // CUtlSymbolLarge
}

public static class CColorCorrectionVolume {
    public const nint m_bEnabled = 0x8A8; // bool
    public const nint m_MaxWeight = 0x8AC; // float32
    public const nint m_FadeDuration = 0x8B0; // float32
    public const nint m_bStartDisabled = 0x8B4; // bool
    public const nint m_Weight = 0x8B8; // float32
    public const nint m_lookupFilename = 0x8BC; // char[512]
    public const nint m_LastEnterWeight = 0xABC; // float32
    public const nint m_LastEnterTime = 0xAC0; // GameTime_t
    public const nint m_LastExitWeight = 0xAC4; // float32
    public const nint m_LastExitTime = 0xAC8; // GameTime_t
}

public static class CCommentaryAuto {
    public const nint m_OnCommentaryNewGame = 0x4B0; // CEntityIOOutput
    public const nint m_OnCommentaryMidGame = 0x4D8; // CEntityIOOutput
    public const nint m_OnCommentaryMultiplayerSpawn = 0x500; // CEntityIOOutput
}

public static class CCommentarySystem {
    public const nint m_bCommentaryConvarsChanging = 0x11; // bool
    public const nint m_bCommentaryEnabledMidGame = 0x12; // bool
    public const nint m_flNextTeleportTime = 0x14; // GameTime_t
    public const nint m_iTeleportStage = 0x18; // int32
    public const nint m_bCheatState = 0x1C; // bool
    public const nint m_bIsFirstSpawnGroupToLoad = 0x1D; // bool
    public const nint m_hCurrentNode = 0x38; // CHandle< CPointCommentaryNode >
    public const nint m_hActiveCommentaryNode = 0x3C; // CHandle< CPointCommentaryNode >
    public const nint m_hLastCommentaryNode = 0x40; // CHandle< CPointCommentaryNode >
    public const nint m_vecNodes = 0x48; // CUtlVector< CHandle< CPointCommentaryNode > >
}

public static class CConstantForceController {
    public const nint m_linear = 0xC; // Vector
    public const nint m_angular = 0x18; // RotationVector
    public const nint m_linearSave = 0x24; // Vector
    public const nint m_angularSave = 0x30; // RotationVector
}

public static class CConstraintAnchor {
    public const nint m_massScale = 0x890; // float32
}

public static class CCopyRecipientFilter {
    public const nint m_Flags = 0x8; // int32
    public const nint m_Recipients = 0x10; // CUtlVector< CPlayerSlot >
}

public static class CCredits {
    public const nint m_OnCreditsDone = 0x4B0; // CEntityIOOutput
    public const nint m_bRolledOutroCredits = 0x4D8; // bool
    public const nint m_flLogoLength = 0x4DC; // float32
}

public static class CDamageRecord {
    public const nint m_PlayerDamager = 0x28; // CHandle< CCSPlayerPawnBase >
    public const nint m_PlayerRecipient = 0x2C; // CHandle< CCSPlayerPawnBase >
    public const nint m_hPlayerControllerDamager = 0x30; // CHandle< CCSPlayerController >
    public const nint m_hPlayerControllerRecipient = 0x34; // CHandle< CCSPlayerController >
    public const nint m_szPlayerDamagerName = 0x38; // CUtlString
    public const nint m_szPlayerRecipientName = 0x40; // CUtlString
    public const nint m_DamagerXuid = 0x48; // uint64
    public const nint m_RecipientXuid = 0x50; // uint64
    public const nint m_iDamage = 0x58; // int32
    public const nint m_iActualHealthRemoved = 0x5C; // int32
    public const nint m_iNumHits = 0x60; // int32
    public const nint m_iLastBulletUpdate = 0x64; // int32
    public const nint m_bIsOtherEnemy = 0x68; // bool
    public const nint m_killType = 0x69; // EKillTypes_t
}

public static class CDebugHistory {
    public const nint m_nNpcEvents = 0x44F0; // int32
}

public static class CDecoyProjectile {
    public const nint m_shotsRemaining = 0xA30; // int32
    public const nint m_fExpireTime = 0xA34; // GameTime_t
    public const nint m_decoyWeaponDefIndex = 0xA40; // uint16
}

public static class CDynamicLight {
    public const nint m_ActualFlags = 0x700; // uint8
    public const nint m_Flags = 0x701; // uint8
    public const nint m_LightStyle = 0x702; // uint8
    public const nint m_On = 0x703; // bool
    public const nint m_Radius = 0x704; // float32
    public const nint m_Exponent = 0x708; // int32
    public const nint m_InnerAngle = 0x70C; // float32
    public const nint m_OuterAngle = 0x710; // float32
    public const nint m_SpotRadius = 0x714; // float32
}

public static class CDynamicProp {
    public const nint m_bCreateNavObstacle = 0xA10; // bool
    public const nint m_bUseHitboxesForRenderBox = 0xA11; // bool
    public const nint m_bUseAnimGraph = 0xA12; // bool
    public const nint m_pOutputAnimBegun = 0xA18; // CEntityIOOutput
    public const nint m_pOutputAnimOver = 0xA40; // CEntityIOOutput
    public const nint m_pOutputAnimLoopCycleOver = 0xA68; // CEntityIOOutput
    public const nint m_OnAnimReachedStart = 0xA90; // CEntityIOOutput
    public const nint m_OnAnimReachedEnd = 0xAB8; // CEntityIOOutput
    public const nint m_iszDefaultAnim = 0xAE0; // CUtlSymbolLarge
    public const nint m_nDefaultAnimLoopMode = 0xAE8; // AnimLoopMode_t
    public const nint m_bAnimateOnServer = 0xAEC; // bool
    public const nint m_bRandomizeCycle = 0xAED; // bool
    public const nint m_bStartDisabled = 0xAEE; // bool
    public const nint m_bScriptedMovement = 0xAEF; // bool
    public const nint m_bFiredStartEndOutput = 0xAF0; // bool
    public const nint m_bForceNpcExclude = 0xAF1; // bool
    public const nint m_bCreateNonSolid = 0xAF2; // bool
    public const nint m_bIsOverrideProp = 0xAF3; // bool
    public const nint m_iInitialGlowState = 0xAF4; // int32
    public const nint m_nGlowRange = 0xAF8; // int32
    public const nint m_nGlowRangeMin = 0xAFC; // int32
    public const nint m_glowColor = 0xB00; // Color
    public const nint m_nGlowTeam = 0xB04; // int32
}

public static class CEconEntity {
    public const nint m_AttributeManager = 0x930; // CAttributeContainer
    public const nint m_OriginalOwnerXuidLow = 0xBF8; // uint32
    public const nint m_OriginalOwnerXuidHigh = 0xBFC; // uint32
    public const nint m_nFallbackPaintKit = 0xC00; // int32
    public const nint m_nFallbackSeed = 0xC04; // int32
    public const nint m_flFallbackWear = 0xC08; // float32
    public const nint m_nFallbackStatTrak = 0xC0C; // int32
    public const nint m_hOldProvidee = 0xC10; // CHandle< CBaseEntity >
    public const nint m_iOldOwnerClass = 0xC14; // int32
}

public static class CEconItemAttribute {
    public const nint m_iAttributeDefinitionIndex = 0x30; // uint16
    public const nint m_flValue = 0x34; // float32
    public const nint m_flInitialValue = 0x38; // float32
    public const nint m_nRefundableCurrency = 0x3C; // int32
    public const nint m_bSetBonus = 0x40; // bool
}

public static class CEconItemView {
    public const nint m_iItemDefinitionIndex = 0x38; // uint16
    public const nint m_iEntityQuality = 0x3C; // int32
    public const nint m_iEntityLevel = 0x40; // uint32
    public const nint m_iItemID = 0x48; // uint64
    public const nint m_iItemIDHigh = 0x50; // uint32
    public const nint m_iItemIDLow = 0x54; // uint32
    public const nint m_iAccountID = 0x58; // uint32
    public const nint m_iInventoryPosition = 0x5C; // uint32
    public const nint m_bInitialized = 0x68; // bool
    public const nint m_AttributeList = 0x70; // CAttributeList
    public const nint m_NetworkedDynamicAttributes = 0xD0; // CAttributeList
    public const nint m_szCustomName = 0x130; // char[161]
    public const nint m_szCustomNameOverride = 0x1D1; // char[161]
}

public static class CEconWearable {
    public const nint m_nForceSkin = 0xC18; // int32
    public const nint m_bAlwaysAllow = 0xC1C; // bool
}

public static class CEffectData {
    public const nint m_vOrigin = 0x8; // Vector
    public const nint m_vStart = 0x14; // Vector
    public const nint m_vNormal = 0x20; // Vector
    public const nint m_vAngles = 0x2C; // QAngle
    public const nint m_hEntity = 0x38; // CEntityHandle
    public const nint m_hOtherEntity = 0x3C; // CEntityHandle
    public const nint m_flScale = 0x40; // float32
    public const nint m_flMagnitude = 0x44; // float32
    public const nint m_flRadius = 0x48; // float32
    public const nint m_nSurfaceProp = 0x4C; // CUtlStringToken
    public const nint m_nEffectIndex = 0x50; // CWeakHandle< InfoForResourceTypeIParticleSystemDefinition >
    public const nint m_nDamageType = 0x58; // uint32
    public const nint m_nPenetrate = 0x5C; // uint8
    public const nint m_nMaterial = 0x5E; // uint16
    public const nint m_nHitBox = 0x60; // uint16
    public const nint m_nColor = 0x62; // uint8
    public const nint m_fFlags = 0x63; // uint8
    public const nint m_nAttachmentIndex = 0x64; // AttachmentHandle_t
    public const nint m_nAttachmentName = 0x68; // CUtlStringToken
    public const nint m_iEffectName = 0x6C; // uint16
    public const nint m_nExplosionType = 0x6E; // uint8
}

public static class CEntityDissolve {
    public const nint m_flFadeInStart = 0x700; // float32
    public const nint m_flFadeInLength = 0x704; // float32
    public const nint m_flFadeOutModelStart = 0x708; // float32
    public const nint m_flFadeOutModelLength = 0x70C; // float32
    public const nint m_flFadeOutStart = 0x710; // float32
    public const nint m_flFadeOutLength = 0x714; // float32
    public const nint m_flStartTime = 0x718; // GameTime_t
    public const nint m_nDissolveType = 0x71C; // EntityDisolveType_t
    public const nint m_vDissolverOrigin = 0x720; // Vector
    public const nint m_nMagnitude = 0x72C; // uint32
}

public static class CEntityFlame {
    public const nint m_hEntAttached = 0x4B0; // CHandle< CBaseEntity >
    public const nint m_bCheapEffect = 0x4B4; // bool
    public const nint m_flSize = 0x4B8; // float32
    public const nint m_bUseHitboxes = 0x4BC; // bool
    public const nint m_iNumHitboxFires = 0x4C0; // int32
    public const nint m_flHitboxFireScale = 0x4C4; // float32
    public const nint m_flLifetime = 0x4C8; // GameTime_t
    public const nint m_hAttacker = 0x4CC; // CHandle< CBaseEntity >
    public const nint m_iDangerSound = 0x4D0; // int32
    public const nint m_flDirectDamagePerSecond = 0x4D4; // float32
    public const nint m_iCustomDamageType = 0x4D8; // int32
}

public static class CEntityIdentity {
    public const nint m_nameStringableIndex = 0x14; // int32
    public const nint m_name = 0x18; // CUtlSymbolLarge
    public const nint m_designerName = 0x20; // CUtlSymbolLarge
    public const nint m_flags = 0x30; // uint32
    public const nint m_worldGroupId = 0x38; // WorldGroupId_t
    public const nint m_fDataObjectTypes = 0x3C; // uint32
    public const nint m_PathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
    public const nint m_pPrev = 0x58; // CEntityIdentity*
    public const nint m_pNext = 0x60; // CEntityIdentity*
    public const nint m_pPrevByClass = 0x68; // CEntityIdentity*
    public const nint m_pNextByClass = 0x70; // CEntityIdentity*
}

public static class CEntityInstance {
    public const nint m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
    public const nint m_pEntity = 0x10; // CEntityIdentity*
    public const nint m_CScriptComponent = 0x28; // CScriptComponent*
}

public static class CEnvBeam {
    public const nint m_active = 0x7A0; // int32
    public const nint m_spriteTexture = 0x7A8; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    public const nint m_iszStartEntity = 0x7B0; // CUtlSymbolLarge
    public const nint m_iszEndEntity = 0x7B8; // CUtlSymbolLarge
    public const nint m_life = 0x7C0; // float32
    public const nint m_boltWidth = 0x7C4; // float32
    public const nint m_noiseAmplitude = 0x7C8; // float32
    public const nint m_speed = 0x7CC; // int32
    public const nint m_restrike = 0x7D0; // float32
    public const nint m_iszSpriteName = 0x7D8; // CUtlSymbolLarge
    public const nint m_frameStart = 0x7E0; // int32
    public const nint m_vEndPointWorld = 0x7E4; // Vector
    public const nint m_vEndPointRelative = 0x7F0; // Vector
    public const nint m_radius = 0x7FC; // float32
    public const nint m_TouchType = 0x800; // Touch_t
    public const nint m_iFilterName = 0x808; // CUtlSymbolLarge
    public const nint m_hFilter = 0x810; // CHandle< CBaseEntity >
    public const nint m_iszDecal = 0x818; // CUtlSymbolLarge
    public const nint m_OnTouchedByEntity = 0x820; // CEntityIOOutput
}

public static class CEnvBeverage {
    public const nint m_CanInDispenser = 0x4B0; // bool
    public const nint m_nBeverageType = 0x4B4; // int32
}

public static class CEnvCombinedLightProbeVolume {
    public const nint m_Color = 0x1518; // Color
    public const nint m_flBrightness = 0x151C; // float32
    public const nint m_hCubemapTexture = 0x1520; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_bCustomCubemapTexture = 0x1528; // bool
    public const nint m_hLightProbeTexture = 0x1530; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_hLightProbeDirectLightIndicesTexture = 0x1538; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_hLightProbeDirectLightScalarsTexture = 0x1540; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_hLightProbeDirectLightShadowsTexture = 0x1548; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_vBoxMins = 0x1550; // Vector
    public const nint m_vBoxMaxs = 0x155C; // Vector
    public const nint m_LightGroups = 0x1568; // CUtlSymbolLarge
    public const nint m_bMoveable = 0x1570; // bool
    public const nint m_nHandshake = 0x1574; // int32
    public const nint m_nEnvCubeMapArrayIndex = 0x1578; // int32
    public const nint m_nPriority = 0x157C; // int32
    public const nint m_bStartDisabled = 0x1580; // bool
    public const nint m_flEdgeFadeDist = 0x1584; // float32
    public const nint m_vEdgeFadeDists = 0x1588; // Vector
    public const nint m_nLightProbeSizeX = 0x1594; // int32
    public const nint m_nLightProbeSizeY = 0x1598; // int32
    public const nint m_nLightProbeSizeZ = 0x159C; // int32
    public const nint m_nLightProbeAtlasX = 0x15A0; // int32
    public const nint m_nLightProbeAtlasY = 0x15A4; // int32
    public const nint m_nLightProbeAtlasZ = 0x15A8; // int32
    public const nint m_bEnabled = 0x15C1; // bool
}

public static class CEnvCubemap {
    public const nint m_hCubemapTexture = 0x538; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_bCustomCubemapTexture = 0x540; // bool
    public const nint m_flInfluenceRadius = 0x544; // float32
    public const nint m_vBoxProjectMins = 0x548; // Vector
    public const nint m_vBoxProjectMaxs = 0x554; // Vector
    public const nint m_LightGroups = 0x560; // CUtlSymbolLarge
    public const nint m_bMoveable = 0x568; // bool
    public const nint m_nHandshake = 0x56C; // int32
    public const nint m_nEnvCubeMapArrayIndex = 0x570; // int32
    public const nint m_nPriority = 0x574; // int32
    public const nint m_flEdgeFadeDist = 0x578; // float32
    public const nint m_vEdgeFadeDists = 0x57C; // Vector
    public const nint m_flDiffuseScale = 0x588; // float32
    public const nint m_bStartDisabled = 0x58C; // bool
    public const nint m_bDefaultEnvMap = 0x58D; // bool
    public const nint m_bDefaultSpecEnvMap = 0x58E; // bool
    public const nint m_bIndoorCubeMap = 0x58F; // bool
    public const nint m_bCopyDiffuseFromDefaultCubemap = 0x590; // bool
    public const nint m_bEnabled = 0x5A0; // bool
}

public static class CEnvCubemapFog {
    public const nint m_flEndDistance = 0x4B0; // float32
    public const nint m_flStartDistance = 0x4B4; // float32
    public const nint m_flFogFalloffExponent = 0x4B8; // float32
    public const nint m_bHeightFogEnabled = 0x4BC; // bool
    public const nint m_flFogHeightWidth = 0x4C0; // float32
    public const nint m_flFogHeightEnd = 0x4C4; // float32
    public const nint m_flFogHeightStart = 0x4C8; // float32
    public const nint m_flFogHeightExponent = 0x4CC; // float32
    public const nint m_flLODBias = 0x4D0; // float32
    public const nint m_bActive = 0x4D4; // bool
    public const nint m_bStartDisabled = 0x4D5; // bool
    public const nint m_flFogMaxOpacity = 0x4D8; // float32
    public const nint m_nCubemapSourceType = 0x4DC; // int32
    public const nint m_hSkyMaterial = 0x4E0; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    public const nint m_iszSkyEntity = 0x4E8; // CUtlSymbolLarge
    public const nint m_hFogCubemapTexture = 0x4F0; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_bHasHeightFogEnd = 0x4F8; // bool
    public const nint m_bFirstTime = 0x4F9; // bool
}

public static class CEnvDecal {
    public const nint m_hDecalMaterial = 0x700; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    public const nint m_flWidth = 0x708; // float32
    public const nint m_flHeight = 0x70C; // float32
    public const nint m_flDepth = 0x710; // float32
    public const nint m_nRenderOrder = 0x714; // uint32
    public const nint m_bProjectOnWorld = 0x718; // bool
    public const nint m_bProjectOnCharacters = 0x719; // bool
    public const nint m_bProjectOnWater = 0x71A; // bool
    public const nint m_flDepthSortBias = 0x71C; // float32
}

public static class CEnvDetailController {
    public const nint m_flFadeStartDist = 0x4B0; // float32
    public const nint m_flFadeEndDist = 0x4B4; // float32
}

public static class CEnvEntityIgniter {
    public const nint m_flLifetime = 0x4B0; // float32
}

public static class CEnvEntityMaker {
    public const nint m_vecEntityMins = 0x4B0; // Vector
    public const nint m_vecEntityMaxs = 0x4BC; // Vector
    public const nint m_hCurrentInstance = 0x4C8; // CHandle< CBaseEntity >
    public const nint m_hCurrentBlocker = 0x4CC; // CHandle< CBaseEntity >
    public const nint m_vecBlockerOrigin = 0x4D0; // Vector
    public const nint m_angPostSpawnDirection = 0x4DC; // QAngle
    public const nint m_flPostSpawnDirectionVariance = 0x4E8; // float32
    public const nint m_flPostSpawnSpeed = 0x4EC; // float32
    public const nint m_bPostSpawnUseAngles = 0x4F0; // bool
    public const nint m_iszTemplate = 0x4F8; // CUtlSymbolLarge
    public const nint m_pOutputOnSpawned = 0x500; // CEntityIOOutput
    public const nint m_pOutputOnFailedSpawn = 0x528; // CEntityIOOutput
}

public static class CEnvExplosion {
    public const nint m_iMagnitude = 0x700; // int32
    public const nint m_flPlayerDamage = 0x704; // float32
    public const nint m_iRadiusOverride = 0x708; // int32
    public const nint m_flInnerRadius = 0x70C; // float32
    public const nint m_spriteScale = 0x710; // int32
    public const nint m_flDamageForce = 0x714; // float32
    public const nint m_hInflictor = 0x718; // CHandle< CBaseEntity >
    public const nint m_iCustomDamageType = 0x71C; // int32
    public const nint m_iszExplosionType = 0x728; // CUtlSymbolLarge
    public const nint m_iszCustomEffectName = 0x730; // CUtlSymbolLarge
    public const nint m_iszCustomSoundName = 0x738; // CUtlSymbolLarge
    public const nint m_iClassIgnore = 0x740; // Class_T
    public const nint m_iClassIgnore2 = 0x744; // Class_T
    public const nint m_iszEntityIgnoreName = 0x748; // CUtlSymbolLarge
    public const nint m_hEntityIgnore = 0x750; // CHandle< CBaseEntity >
}

public static class CEnvFade {
    public const nint m_fadeColor = 0x4B0; // Color
    public const nint m_Duration = 0x4B4; // float32
    public const nint m_HoldDuration = 0x4B8; // float32
    public const nint m_OnBeginFade = 0x4C0; // CEntityIOOutput
}

public static class CEnvFireSensor {
    public const nint m_bEnabled = 0x4B0; // bool
    public const nint m_bHeatAtLevel = 0x4B1; // bool
    public const nint m_radius = 0x4B4; // float32
    public const nint m_targetLevel = 0x4B8; // float32
    public const nint m_targetTime = 0x4BC; // float32
    public const nint m_levelTime = 0x4C0; // float32
    public const nint m_OnHeatLevelStart = 0x4C8; // CEntityIOOutput
    public const nint m_OnHeatLevelEnd = 0x4F0; // CEntityIOOutput
}

public static class CEnvFireSource {
    public const nint m_bEnabled = 0x4B0; // bool
    public const nint m_radius = 0x4B4; // float32
    public const nint m_damage = 0x4B8; // float32
}

public static class CEnvGlobal {
    public const nint m_outCounter = 0x4B0; // CEntityOutputTemplate< int32 >
    public const nint m_globalstate = 0x4D8; // CUtlSymbolLarge
    public const nint m_triggermode = 0x4E0; // int32
    public const nint m_initialstate = 0x4E4; // int32
    public const nint m_counter = 0x4E8; // int32
}

public static class CEnvHudHint {
    public const nint m_iszMessage = 0x4B0; // CUtlSymbolLarge
}

public static class CEnvInstructorHint {
    public const nint m_iszName = 0x4B0; // CUtlSymbolLarge
    public const nint m_iszReplace_Key = 0x4B8; // CUtlSymbolLarge
    public const nint m_iszHintTargetEntity = 0x4C0; // CUtlSymbolLarge
    public const nint m_iTimeout = 0x4C8; // int32
    public const nint m_iDisplayLimit = 0x4CC; // int32
    public const nint m_iszIcon_Onscreen = 0x4D0; // CUtlSymbolLarge
    public const nint m_iszIcon_Offscreen = 0x4D8; // CUtlSymbolLarge
    public const nint m_iszCaption = 0x4E0; // CUtlSymbolLarge
    public const nint m_iszActivatorCaption = 0x4E8; // CUtlSymbolLarge
    public const nint m_Color = 0x4F0; // Color
    public const nint m_fIconOffset = 0x4F4; // float32
    public const nint m_fRange = 0x4F8; // float32
    public const nint m_iPulseOption = 0x4FC; // uint8
    public const nint m_iAlphaOption = 0x4FD; // uint8
    public const nint m_iShakeOption = 0x4FE; // uint8
    public const nint m_bStatic = 0x4FF; // bool
    public const nint m_bNoOffscreen = 0x500; // bool
    public const nint m_bForceCaption = 0x501; // bool
    public const nint m_iInstanceType = 0x504; // int32
    public const nint m_bSuppressRest = 0x508; // bool
    public const nint m_iszBinding = 0x510; // CUtlSymbolLarge
    public const nint m_bAllowNoDrawTarget = 0x518; // bool
    public const nint m_bAutoStart = 0x519; // bool
    public const nint m_bLocalPlayerOnly = 0x51A; // bool
}

public static class CEnvInstructorVRHint {
    public const nint m_iszName = 0x4B0; // CUtlSymbolLarge
    public const nint m_iszHintTargetEntity = 0x4B8; // CUtlSymbolLarge
    public const nint m_iTimeout = 0x4C0; // int32
    public const nint m_iszCaption = 0x4C8; // CUtlSymbolLarge
    public const nint m_iszStartSound = 0x4D0; // CUtlSymbolLarge
    public const nint m_iLayoutFileType = 0x4D8; // int32
    public const nint m_iszCustomLayoutFile = 0x4E0; // CUtlSymbolLarge
    public const nint m_iAttachType = 0x4E8; // int32
    public const nint m_flHeightOffset = 0x4EC; // float32
}

public static class CEnvLaser {
    public const nint m_iszLaserTarget = 0x7A0; // CUtlSymbolLarge
    public const nint m_pSprite = 0x7A8; // CSprite*
    public const nint m_iszSpriteName = 0x7B0; // CUtlSymbolLarge
    public const nint m_firePosition = 0x7B8; // Vector
    public const nint m_flStartFrame = 0x7C4; // float32
}

public static class CEnvLightProbeVolume {
    public const nint m_hLightProbeTexture = 0x1490; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_hLightProbeDirectLightIndicesTexture = 0x1498; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_hLightProbeDirectLightScalarsTexture = 0x14A0; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_hLightProbeDirectLightShadowsTexture = 0x14A8; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_vBoxMins = 0x14B0; // Vector
    public const nint m_vBoxMaxs = 0x14BC; // Vector
    public const nint m_LightGroups = 0x14C8; // CUtlSymbolLarge
    public const nint m_bMoveable = 0x14D0; // bool
    public const nint m_nHandshake = 0x14D4; // int32
    public const nint m_nPriority = 0x14D8; // int32
    public const nint m_bStartDisabled = 0x14DC; // bool
    public const nint m_nLightProbeSizeX = 0x14E0; // int32
    public const nint m_nLightProbeSizeY = 0x14E4; // int32
    public const nint m_nLightProbeSizeZ = 0x14E8; // int32
    public const nint m_nLightProbeAtlasX = 0x14EC; // int32
    public const nint m_nLightProbeAtlasY = 0x14F0; // int32
    public const nint m_nLightProbeAtlasZ = 0x14F4; // int32
    public const nint m_bEnabled = 0x1501; // bool
}

public static class CEnvMicrophone {
    public const nint m_bDisabled = 0x4B0; // bool
    public const nint m_hMeasureTarget = 0x4B4; // CHandle< CBaseEntity >
    public const nint m_nSoundMask = 0x4B8; // int32
    public const nint m_flSensitivity = 0x4BC; // float32
    public const nint m_flSmoothFactor = 0x4C0; // float32
    public const nint m_flMaxRange = 0x4C4; // float32
    public const nint m_iszSpeakerName = 0x4C8; // CUtlSymbolLarge
    public const nint m_hSpeaker = 0x4D0; // CHandle< CBaseEntity >
    public const nint m_bAvoidFeedback = 0x4D4; // bool
    public const nint m_iSpeakerDSPPreset = 0x4D8; // int32
    public const nint m_iszListenFilter = 0x4E0; // CUtlSymbolLarge
    public const nint m_hListenFilter = 0x4E8; // CHandle< CBaseFilter >
    public const nint m_SoundLevel = 0x4F0; // CEntityOutputTemplate< float32 >
    public const nint m_OnRoutedSound = 0x518; // CEntityIOOutput
    public const nint m_OnHeardSound = 0x540; // CEntityIOOutput
    public const nint m_szLastSound = 0x568; // char[256]
    public const nint m_iLastRoutedFrame = 0x668; // int32
}

public static class CEnvMuzzleFlash {
    public const nint m_flScale = 0x4B0; // float32
    public const nint m_iszParentAttachment = 0x4B8; // CUtlSymbolLarge
}

public static class CEnvParticleGlow {
    public const nint m_flAlphaScale = 0xC78; // float32
    public const nint m_flRadiusScale = 0xC7C; // float32
    public const nint m_flSelfIllumScale = 0xC80; // float32
    public const nint m_ColorTint = 0xC84; // Color
    public const nint m_hTextureOverride = 0xC88; // CStrongHandle< InfoForResourceTypeCTextureBase >
}

public static class CEnvProjectedTexture {
    public const nint m_hTargetEntity = 0x700; // CHandle< CBaseEntity >
    public const nint m_bState = 0x704; // bool
    public const nint m_bAlwaysUpdate = 0x705; // bool
    public const nint m_flLightFOV = 0x708; // float32
    public const nint m_bEnableShadows = 0x70C; // bool
    public const nint m_bSimpleProjection = 0x70D; // bool
    public const nint m_bLightOnlyTarget = 0x70E; // bool
    public const nint m_bLightWorld = 0x70F; // bool
    public const nint m_bCameraSpace = 0x710; // bool
    public const nint m_flBrightnessScale = 0x714; // float32
    public const nint m_LightColor = 0x718; // Color
    public const nint m_flIntensity = 0x71C; // float32
    public const nint m_flLinearAttenuation = 0x720; // float32
    public const nint m_flQuadraticAttenuation = 0x724; // float32
    public const nint m_bVolumetric = 0x728; // bool
    public const nint m_flNoiseStrength = 0x72C; // float32
    public const nint m_flFlashlightTime = 0x730; // float32
    public const nint m_nNumPlanes = 0x734; // uint32
    public const nint m_flPlaneOffset = 0x738; // float32
    public const nint m_flVolumetricIntensity = 0x73C; // float32
    public const nint m_flColorTransitionTime = 0x740; // float32
    public const nint m_flAmbient = 0x744; // float32
    public const nint m_SpotlightTextureName = 0x748; // char[512]
    public const nint m_nSpotlightTextureFrame = 0x948; // int32
    public const nint m_nShadowQuality = 0x94C; // uint32
    public const nint m_flNearZ = 0x950; // float32
    public const nint m_flFarZ = 0x954; // float32
    public const nint m_flProjectionSize = 0x958; // float32
    public const nint m_flRotation = 0x95C; // float32
    public const nint m_bFlipHorizontal = 0x960; // bool
}

public static class CEnvScreenOverlay {
    public const nint m_iszOverlayNames = 0x4B0; // CUtlSymbolLarge[10]
    public const nint m_flOverlayTimes = 0x500; // float32[10]
    public const nint m_flStartTime = 0x528; // GameTime_t
    public const nint m_iDesiredOverlay = 0x52C; // int32
    public const nint m_bIsActive = 0x530; // bool
}

public static class CEnvShake {
    public const nint m_limitToEntity = 0x4B0; // CUtlSymbolLarge
    public const nint m_Amplitude = 0x4B8; // float32
    public const nint m_Frequency = 0x4BC; // float32
    public const nint m_Duration = 0x4C0; // float32
    public const nint m_Radius = 0x4C4; // float32
    public const nint m_stopTime = 0x4C8; // GameTime_t
    public const nint m_nextShake = 0x4CC; // GameTime_t
    public const nint m_currentAmp = 0x4D0; // float32
    public const nint m_maxForce = 0x4D4; // Vector
    public const nint m_shakeCallback = 0x4E8; // CPhysicsShake
}

public static class CEnvSky {
    public const nint m_hSkyMaterial = 0x700; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    public const nint m_hSkyMaterialLightingOnly = 0x708; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    public const nint m_bStartDisabled = 0x710; // bool
    public const nint m_vTintColor = 0x711; // Color
    public const nint m_vTintColorLightingOnly = 0x715; // Color
    public const nint m_flBrightnessScale = 0x71C; // float32
    public const nint m_nFogType = 0x720; // int32
    public const nint m_flFogMinStart = 0x724; // float32
    public const nint m_flFogMinEnd = 0x728; // float32
    public const nint m_flFogMaxStart = 0x72C; // float32
    public const nint m_flFogMaxEnd = 0x730; // float32
    public const nint m_bEnabled = 0x734; // bool
}

public static class CEnvSoundscape {
    public const nint m_OnPlay = 0x4B0; // CEntityIOOutput
    public const nint m_flRadius = 0x4D8; // float32
    public const nint m_soundscapeName = 0x4E0; // CUtlSymbolLarge
    public const nint m_soundEventName = 0x4E8; // CUtlSymbolLarge
    public const nint m_bOverrideWithEvent = 0x4F0; // bool
    public const nint m_soundscapeIndex = 0x4F4; // int32
    public const nint m_soundscapeEntityListId = 0x4F8; // int32
    public const nint m_soundEventHash = 0x4FC; // uint32
    public const nint m_positionNames = 0x500; // CUtlSymbolLarge[8]
    public const nint m_hProxySoundscape = 0x540; // CHandle< CEnvSoundscape >
    public const nint m_bDisabled = 0x544; // bool
}

public static class CEnvSoundscapeProxy {
    public const nint m_MainSoundscapeName = 0x548; // CUtlSymbolLarge
}

public static class CEnvSpark {
    public const nint m_flDelay = 0x4B0; // float32
    public const nint m_nMagnitude = 0x4B4; // int32
    public const nint m_nTrailLength = 0x4B8; // int32
    public const nint m_nType = 0x4BC; // int32
    public const nint m_OnSpark = 0x4C0; // CEntityIOOutput
}

public static class CEnvSplash {
    public const nint m_flScale = 0x4B0; // float32
}

public static class CEnvTilt {
    public const nint m_Duration = 0x4B0; // float32
    public const nint m_Radius = 0x4B4; // float32
    public const nint m_TiltTime = 0x4B8; // float32
    public const nint m_stopTime = 0x4BC; // GameTime_t
}

public static class CEnvTracer {
    public const nint m_vecEnd = 0x4B0; // Vector
    public const nint m_flDelay = 0x4BC; // float32
}

public static class CEnvViewPunch {
    public const nint m_flRadius = 0x4B0; // float32
    public const nint m_angViewPunch = 0x4B4; // QAngle
}

public static class CEnvVolumetricFogController {
    public const nint m_flScattering = 0x4B0; // float32
    public const nint m_flAnisotropy = 0x4B4; // float32
    public const nint m_flFadeSpeed = 0x4B8; // float32
    public const nint m_flDrawDistance = 0x4BC; // float32
    public const nint m_flFadeInStart = 0x4C0; // float32
    public const nint m_flFadeInEnd = 0x4C4; // float32
    public const nint m_flIndirectStrength = 0x4C8; // float32
    public const nint m_nIndirectTextureDimX = 0x4CC; // int32
    public const nint m_nIndirectTextureDimY = 0x4D0; // int32
    public const nint m_nIndirectTextureDimZ = 0x4D4; // int32
    public const nint m_vBoxMins = 0x4D8; // Vector
    public const nint m_vBoxMaxs = 0x4E4; // Vector
    public const nint m_bActive = 0x4F0; // bool
    public const nint m_flStartAnisoTime = 0x4F4; // GameTime_t
    public const nint m_flStartScatterTime = 0x4F8; // GameTime_t
    public const nint m_flStartDrawDistanceTime = 0x4FC; // GameTime_t
    public const nint m_flStartAnisotropy = 0x500; // float32
    public const nint m_flStartScattering = 0x504; // float32
    public const nint m_flStartDrawDistance = 0x508; // float32
    public const nint m_flDefaultAnisotropy = 0x50C; // float32
    public const nint m_flDefaultScattering = 0x510; // float32
    public const nint m_flDefaultDrawDistance = 0x514; // float32
    public const nint m_bStartDisabled = 0x518; // bool
    public const nint m_bEnableIndirect = 0x519; // bool
    public const nint m_bIsMaster = 0x51A; // bool
    public const nint m_hFogIndirectTexture = 0x520; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_nForceRefreshCount = 0x528; // int32
    public const nint m_bFirstTime = 0x52C; // bool
}

public static class CEnvVolumetricFogVolume {
    public const nint m_bActive = 0x4B0; // bool
    public const nint m_vBoxMins = 0x4B4; // Vector
    public const nint m_vBoxMaxs = 0x4C0; // Vector
    public const nint m_bStartDisabled = 0x4CC; // bool
    public const nint m_flStrength = 0x4D0; // float32
    public const nint m_nFalloffShape = 0x4D4; // int32
    public const nint m_flFalloffExponent = 0x4D8; // float32
}

public static class CEnvWind {
    public const nint m_EnvWindShared = 0x4B0; // CEnvWindShared
}

public static class CEnvWindShared {
    public const nint m_flStartTime = 0x8; // GameTime_t
    public const nint m_iWindSeed = 0xC; // uint32
    public const nint m_iMinWind = 0x10; // uint16
    public const nint m_iMaxWind = 0x12; // uint16
    public const nint m_windRadius = 0x14; // int32
    public const nint m_iMinGust = 0x18; // uint16
    public const nint m_iMaxGust = 0x1A; // uint16
    public const nint m_flMinGustDelay = 0x1C; // float32
    public const nint m_flMaxGustDelay = 0x20; // float32
    public const nint m_flGustDuration = 0x24; // float32
    public const nint m_iGustDirChange = 0x28; // uint16
    public const nint m_location = 0x2C; // Vector
    public const nint m_iszGustSound = 0x38; // int32
    public const nint m_iWindDir = 0x3C; // int32
    public const nint m_flWindSpeed = 0x40; // float32
    public const nint m_currentWindVector = 0x44; // Vector
    public const nint m_CurrentSwayVector = 0x50; // Vector
    public const nint m_PrevSwayVector = 0x5C; // Vector
    public const nint m_iInitialWindDir = 0x68; // uint16
    public const nint m_flInitialWindSpeed = 0x6C; // float32
    public const nint m_OnGustStart = 0x70; // CEntityIOOutput
    public const nint m_OnGustEnd = 0x98; // CEntityIOOutput
    public const nint m_flVariationTime = 0xC0; // GameTime_t
    public const nint m_flSwayTime = 0xC4; // GameTime_t
    public const nint m_flSimTime = 0xC8; // GameTime_t
    public const nint m_flSwitchTime = 0xCC; // GameTime_t
    public const nint m_flAveWindSpeed = 0xD0; // float32
    public const nint m_bGusting = 0xD4; // bool
    public const nint m_flWindAngleVariation = 0xD8; // float32
    public const nint m_flWindSpeedVariation = 0xDC; // float32
    public const nint m_iEntIndex = 0xE0; // CEntityIndex
}

public static class CEnvWindShared_WindAveEvent_t {
    public const nint m_flStartWindSpeed = 0x0; // float32
    public const nint m_flAveWindSpeed = 0x4; // float32
}

public static class CEnvWindShared_WindVariationEvent_t {
    public const nint m_flWindAngleVariation = 0x0; // float32
    public const nint m_flWindSpeedVariation = 0x4; // float32
}

public static class CFilterAttributeInt {
    public const nint m_sAttributeName = 0x508; // CUtlStringToken
}

public static class CFilterClass {
    public const nint m_iFilterClass = 0x508; // CUtlSymbolLarge
}

public static class CFilterContext {
    public const nint m_iFilterContext = 0x508; // CUtlSymbolLarge
}

public static class CFilterEnemy {
    public const nint m_iszEnemyName = 0x508; // CUtlSymbolLarge
    public const nint m_flRadius = 0x510; // float32
    public const nint m_flOuterRadius = 0x514; // float32
    public const nint m_nMaxSquadmatesPerEnemy = 0x518; // int32
    public const nint m_iszPlayerName = 0x520; // CUtlSymbolLarge
}

public static class CFilterMassGreater {
    public const nint m_fFilterMass = 0x508; // float32
}

public static class CFilterModel {
    public const nint m_iFilterModel = 0x508; // CUtlSymbolLarge
}

public static class CFilterMultiple {
    public const nint m_nFilterType = 0x508; // filter_t
    public const nint m_iFilterName = 0x510; // CUtlSymbolLarge[10]
    public const nint m_hFilter = 0x560; // CHandle< CBaseEntity >[10]
    public const nint m_nFilterCount = 0x588; // int32
}

public static class CFilterName {
    public const nint m_iFilterName = 0x508; // CUtlSymbolLarge
}

public static class CFilterProximity {
    public const nint m_flRadius = 0x508; // float32
}

public static class CFire {
    public const nint m_hEffect = 0x700; // CHandle< CBaseFire >
    public const nint m_hOwner = 0x704; // CHandle< CBaseEntity >
    public const nint m_nFireType = 0x708; // int32
    public const nint m_flFuel = 0x70C; // float32
    public const nint m_flDamageTime = 0x710; // GameTime_t
    public const nint m_lastDamage = 0x714; // GameTime_t
    public const nint m_flFireSize = 0x718; // float32
    public const nint m_flLastNavUpdateTime = 0x71C; // GameTime_t
    public const nint m_flHeatLevel = 0x720; // float32
    public const nint m_flHeatAbsorb = 0x724; // float32
    public const nint m_flDamageScale = 0x728; // float32
    public const nint m_flMaxHeat = 0x72C; // float32
    public const nint m_flLastHeatLevel = 0x730; // float32
    public const nint m_flAttackTime = 0x734; // float32
    public const nint m_bEnabled = 0x738; // bool
    public const nint m_bStartDisabled = 0x739; // bool
    public const nint m_bDidActivate = 0x73A; // bool
    public const nint m_OnIgnited = 0x740; // CEntityIOOutput
    public const nint m_OnExtinguished = 0x768; // CEntityIOOutput
}

public static class CFireSmoke {
    public const nint m_nFlameModelIndex = 0x4C0; // int32
    public const nint m_nFlameFromAboveModelIndex = 0x4C4; // int32
}

public static class CFiringModeFloat {
    public const nint m_flValues = 0x0; // float32[2]
}

public static class CFiringModeInt {
    public const nint m_nValues = 0x0; // int32[2]
}

public static class CFish {
    public const nint m_pool = 0x890; // CHandle< CFishPool >
    public const nint m_id = 0x894; // uint32
    public const nint m_x = 0x898; // float32
    public const nint m_y = 0x89C; // float32
    public const nint m_z = 0x8A0; // float32
    public const nint m_angle = 0x8A4; // float32
    public const nint m_angleChange = 0x8A8; // float32
    public const nint m_forward = 0x8AC; // Vector
    public const nint m_perp = 0x8B8; // Vector
    public const nint m_poolOrigin = 0x8C4; // Vector
    public const nint m_waterLevel = 0x8D0; // float32
    public const nint m_speed = 0x8D4; // float32
    public const nint m_desiredSpeed = 0x8D8; // float32
    public const nint m_calmSpeed = 0x8DC; // float32
    public const nint m_panicSpeed = 0x8E0; // float32
    public const nint m_avoidRange = 0x8E4; // float32
    public const nint m_turnTimer = 0x8E8; // CountdownTimer
    public const nint m_turnClockwise = 0x900; // bool
    public const nint m_goTimer = 0x908; // CountdownTimer
    public const nint m_moveTimer = 0x920; // CountdownTimer
    public const nint m_panicTimer = 0x938; // CountdownTimer
    public const nint m_disperseTimer = 0x950; // CountdownTimer
    public const nint m_proximityTimer = 0x968; // CountdownTimer
    public const nint m_visible = 0x980; // CUtlVector< CFish* >
}

public static class CFishPool {
    public const nint m_fishCount = 0x4C0; // int32
    public const nint m_maxRange = 0x4C4; // float32
    public const nint m_swimDepth = 0x4C8; // float32
    public const nint m_waterLevel = 0x4CC; // float32
    public const nint m_isDormant = 0x4D0; // bool
    public const nint m_fishes = 0x4D8; // CUtlVector< CHandle< CFish > >
    public const nint m_visTimer = 0x4F0; // CountdownTimer
}

public static class CFists {
    public const nint m_bPlayingUninterruptableAct = 0xDD8; // bool
    public const nint m_nUninterruptableActivity = 0xDDC; // PlayerAnimEvent_t
    public const nint m_bRestorePrevWep = 0xDE0; // bool
    public const nint m_hWeaponBeforePrevious = 0xDE4; // CHandle< CBasePlayerWeapon >
    public const nint m_hWeaponPrevious = 0xDE8; // CHandle< CBasePlayerWeapon >
    public const nint m_bDelayedHardPunchIncoming = 0xDEC; // bool
    public const nint m_bDestroyAfterTaunt = 0xDED; // bool
}

public static class CFlashbangProjectile {
    public const nint m_flTimeToDetonate = 0xA28; // float32
    public const nint m_numOpponentsHit = 0xA2C; // uint8
    public const nint m_numTeammatesHit = 0xA2D; // uint8
}

public static class CFogController {
    public const nint m_fog = 0x4B0; // fogparams_t
    public const nint m_bUseAngles = 0x518; // bool
    public const nint m_iChangedVariables = 0x51C; // int32
}

public static class CFogTrigger {
    public const nint m_fog = 0x8A8; // fogparams_t
}

public static class CFogVolume {
    public const nint m_fogName = 0x700; // CUtlSymbolLarge
    public const nint m_postProcessName = 0x708; // CUtlSymbolLarge
    public const nint m_colorCorrectionName = 0x710; // CUtlSymbolLarge
    public const nint m_bDisabled = 0x720; // bool
    public const nint m_bInFogVolumesList = 0x721; // bool
}

public static class CFootstepControl {
    public const nint m_source = 0x8A8; // CUtlSymbolLarge
    public const nint m_destination = 0x8B0; // CUtlSymbolLarge
}

public static class CFuncBrush {
    public const nint m_iSolidity = 0x700; // BrushSolidities_e
    public const nint m_iDisabled = 0x704; // int32
    public const nint m_bSolidBsp = 0x708; // bool
    public const nint m_iszExcludedClass = 0x710; // CUtlSymbolLarge
    public const nint m_bInvertExclusion = 0x718; // bool
    public const nint m_bScriptedMovement = 0x719; // bool
}

public static class CFuncConveyor {
    public const nint m_szConveyorModels = 0x700; // CUtlSymbolLarge
    public const nint m_flTransitionDurationSeconds = 0x708; // float32
    public const nint m_angMoveEntitySpace = 0x70C; // QAngle
    public const nint m_vecMoveDirEntitySpace = 0x718; // Vector
    public const nint m_flTargetSpeed = 0x724; // float32
    public const nint m_nTransitionStartTick = 0x728; // GameTick_t
    public const nint m_nTransitionDurationTicks = 0x72C; // int32
    public const nint m_flTransitionStartSpeed = 0x730; // float32
    public const nint m_hConveyorModels = 0x738; // CNetworkUtlVectorBase< CHandle< CBaseEntity > >
}

public static class CFuncElectrifiedVolume {
    public const nint m_EffectName = 0x720; // CUtlSymbolLarge
    public const nint m_EffectInterpenetrateName = 0x728; // CUtlSymbolLarge
    public const nint m_EffectZapName = 0x730; // CUtlSymbolLarge
    public const nint m_iszEffectSource = 0x738; // CUtlSymbolLarge
}

public static class CFuncInteractionLayerClip {
    public const nint m_bDisabled = 0x700; // bool
    public const nint m_iszInteractsAs = 0x708; // CUtlSymbolLarge
    public const nint m_iszInteractsWith = 0x710; // CUtlSymbolLarge
}

public static class CFuncLadder {
    public const nint m_vecLadderDir = 0x700; // Vector
    public const nint m_Dismounts = 0x710; // CUtlVector< CHandle< CInfoLadderDismount > >
    public const nint m_vecLocalTop = 0x728; // Vector
    public const nint m_vecPlayerMountPositionTop = 0x734; // Vector
    public const nint m_vecPlayerMountPositionBottom = 0x740; // Vector
    public const nint m_flAutoRideSpeed = 0x74C; // float32
    public const nint m_bDisabled = 0x750; // bool
    public const nint m_bFakeLadder = 0x751; // bool
    public const nint m_bHasSlack = 0x752; // bool
    public const nint m_surfacePropName = 0x758; // CUtlSymbolLarge
    public const nint m_OnPlayerGotOnLadder = 0x760; // CEntityIOOutput
    public const nint m_OnPlayerGotOffLadder = 0x788; // CEntityIOOutput
}

public static class CFuncMonitor {
    public const nint m_targetCamera = 0x720; // CUtlString
    public const nint m_nResolutionEnum = 0x728; // int32
    public const nint m_bRenderShadows = 0x72C; // bool
    public const nint m_bUseUniqueColorTarget = 0x72D; // bool
    public const nint m_brushModelName = 0x730; // CUtlString
    public const nint m_hTargetCamera = 0x738; // CHandle< CBaseEntity >
    public const nint m_bEnabled = 0x73C; // bool
    public const nint m_bDraw3DSkybox = 0x73D; // bool
    public const nint m_bStartEnabled = 0x73E; // bool
}

public static class CFuncMoveLinear {
    public const nint m_authoredPosition = 0x780; // MoveLinearAuthoredPos_t
    public const nint m_angMoveEntitySpace = 0x784; // QAngle
    public const nint m_vecMoveDirParentSpace = 0x790; // Vector
    public const nint m_soundStart = 0x7A0; // CUtlSymbolLarge
    public const nint m_soundStop = 0x7A8; // CUtlSymbolLarge
    public const nint m_currentSound = 0x7B0; // CUtlSymbolLarge
    public const nint m_flBlockDamage = 0x7B8; // float32
    public const nint m_flStartPosition = 0x7BC; // float32
    public const nint m_flMoveDistance = 0x7C0; // float32
    public const nint m_OnFullyOpen = 0x7D0; // CEntityIOOutput
    public const nint m_OnFullyClosed = 0x7F8; // CEntityIOOutput
    public const nint m_bCreateMovableNavMesh = 0x820; // bool
    public const nint m_bCreateNavObstacle = 0x821; // bool
}

public static class CFuncNavBlocker {
    public const nint m_bDisabled = 0x700; // bool
    public const nint m_nBlockedTeamNumber = 0x704; // int32
}

public static class CFuncNavObstruction {
    public const nint m_bDisabled = 0x708; // bool
}

public static class CFuncPlat {
    public const nint m_sNoise = 0x7A8; // CUtlSymbolLarge
}

public static class CFuncPlatRot {
    public const nint m_end = 0x7B0; // QAngle
    public const nint m_start = 0x7BC; // QAngle
}

public static class CFuncRotating {
    public const nint m_vecMoveAng = 0x700; // QAngle
    public const nint m_flFanFriction = 0x70C; // float32
    public const nint m_flAttenuation = 0x710; // float32
    public const nint m_flVolume = 0x714; // float32
    public const nint m_flTargetSpeed = 0x718; // float32
    public const nint m_flMaxSpeed = 0x71C; // float32
    public const nint m_flBlockDamage = 0x720; // float32
    public const nint m_flTimeScale = 0x724; // float32
    public const nint m_NoiseRunning = 0x728; // CUtlSymbolLarge
    public const nint m_bReversed = 0x730; // bool
    public const nint m_angStart = 0x73C; // QAngle
    public const nint m_bStopAtStartPos = 0x748; // bool
    public const nint m_vecClientOrigin = 0x74C; // Vector
    public const nint m_vecClientAngles = 0x758; // QAngle
}

public static class CFuncShatterglass {
    public const nint m_hGlassMaterialDamaged = 0x700; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    public const nint m_hGlassMaterialUndamaged = 0x708; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    public const nint m_hConcreteMaterialEdgeFace = 0x710; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    public const nint m_hConcreteMaterialEdgeCaps = 0x718; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    public const nint m_hConcreteMaterialEdgeFins = 0x720; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    public const nint m_matPanelTransform = 0x728; // matrix3x4_t
    public const nint m_matPanelTransformWsTemp = 0x758; // matrix3x4_t
    public const nint m_vecShatterGlassShards = 0x788; // CUtlVector< uint32 >
    public const nint m_PanelSize = 0x7A0; // Vector2D
    public const nint m_vecPanelNormalWs = 0x7A8; // Vector
    public const nint m_nNumShardsEverCreated = 0x7B4; // int32
    public const nint m_flLastShatterSoundEmitTime = 0x7B8; // GameTime_t
    public const nint m_flLastCleanupTime = 0x7BC; // GameTime_t
    public const nint m_flInitAtTime = 0x7C0; // GameTime_t
    public const nint m_flGlassThickness = 0x7C4; // float32
    public const nint m_flSpawnInvulnerability = 0x7C8; // float32
    public const nint m_bBreakSilent = 0x7CC; // bool
    public const nint m_bBreakShardless = 0x7CD; // bool
    public const nint m_bBroken = 0x7CE; // bool
    public const nint m_bHasRateLimitedShards = 0x7CF; // bool
    public const nint m_bGlassNavIgnore = 0x7D0; // bool
    public const nint m_bGlassInFrame = 0x7D1; // bool
    public const nint m_bStartBroken = 0x7D2; // bool
    public const nint m_iInitialDamageType = 0x7D3; // uint8
    public const nint m_szDamagePositioningEntityName01 = 0x7D8; // CUtlSymbolLarge
    public const nint m_szDamagePositioningEntityName02 = 0x7E0; // CUtlSymbolLarge
    public const nint m_szDamagePositioningEntityName03 = 0x7E8; // CUtlSymbolLarge
    public const nint m_szDamagePositioningEntityName04 = 0x7F0; // CUtlSymbolLarge
    public const nint m_vInitialDamagePositions = 0x7F8; // CUtlVector< Vector >
    public const nint m_vExtraDamagePositions = 0x810; // CUtlVector< Vector >
    public const nint m_OnBroken = 0x828; // CEntityIOOutput
    public const nint m_iSurfaceType = 0x851; // uint8
}

public static class CFuncTankTrain {
    public const nint m_OnDeath = 0x850; // CEntityIOOutput
}

public static class CFuncTimescale {
    public const nint m_flDesiredTimescale = 0x4B0; // float32
    public const nint m_flAcceleration = 0x4B4; // float32
    public const nint m_flMinBlendRate = 0x4B8; // float32
    public const nint m_flBlendDeltaMultiplier = 0x4BC; // float32
    public const nint m_isStarted = 0x4C0; // bool
}

public static class CFuncTrackChange {
    public const nint m_trackTop = 0x7C8; // CPathTrack*
    public const nint m_trackBottom = 0x7D0; // CPathTrack*
    public const nint m_train = 0x7D8; // CFuncTrackTrain*
    public const nint m_trackTopName = 0x7E0; // CUtlSymbolLarge
    public const nint m_trackBottomName = 0x7E8; // CUtlSymbolLarge
    public const nint m_trainName = 0x7F0; // CUtlSymbolLarge
    public const nint m_code = 0x7F8; // TRAIN_CODE
    public const nint m_targetState = 0x7FC; // int32
    public const nint m_use = 0x800; // int32
}

public static class CFuncTrackTrain {
    public const nint m_ppath = 0x700; // CHandle< CPathTrack >
    public const nint m_length = 0x704; // float32
    public const nint m_vPosPrev = 0x708; // Vector
    public const nint m_angPrev = 0x714; // QAngle
    public const nint m_controlMins = 0x720; // Vector
    public const nint m_controlMaxs = 0x72C; // Vector
    public const nint m_lastBlockPos = 0x738; // Vector
    public const nint m_lastBlockTick = 0x744; // int32
    public const nint m_flVolume = 0x748; // float32
    public const nint m_flBank = 0x74C; // float32
    public const nint m_oldSpeed = 0x750; // float32
    public const nint m_flBlockDamage = 0x754; // float32
    public const nint m_height = 0x758; // float32
    public const nint m_maxSpeed = 0x75C; // float32
    public const nint m_dir = 0x760; // float32
    public const nint m_iszSoundMove = 0x768; // CUtlSymbolLarge
    public const nint m_iszSoundMovePing = 0x770; // CUtlSymbolLarge
    public const nint m_iszSoundStart = 0x778; // CUtlSymbolLarge
    public const nint m_iszSoundStop = 0x780; // CUtlSymbolLarge
    public const nint m_strPathTarget = 0x788; // CUtlSymbolLarge
    public const nint m_flMoveSoundMinDuration = 0x790; // float32
    public const nint m_flMoveSoundMaxDuration = 0x794; // float32
    public const nint m_flNextMoveSoundTime = 0x798; // GameTime_t
    public const nint m_flMoveSoundMinPitch = 0x79C; // float32
    public const nint m_flMoveSoundMaxPitch = 0x7A0; // float32
    public const nint m_eOrientationType = 0x7A4; // TrainOrientationType_t
    public const nint m_eVelocityType = 0x7A8; // TrainVelocityType_t
    public const nint m_OnStart = 0x7B8; // CEntityIOOutput
    public const nint m_OnNext = 0x7E0; // CEntityIOOutput
    public const nint m_OnArrivedAtDestinationNode = 0x808; // CEntityIOOutput
    public const nint m_bManualSpeedChanges = 0x830; // bool
    public const nint m_flDesiredSpeed = 0x834; // float32
    public const nint m_flSpeedChangeTime = 0x838; // GameTime_t
    public const nint m_flAccelSpeed = 0x83C; // float32
    public const nint m_flDecelSpeed = 0x840; // float32
    public const nint m_bAccelToSpeed = 0x844; // bool
    public const nint m_flTimeScale = 0x848; // float32
    public const nint m_flNextMPSoundTime = 0x84C; // GameTime_t
}

public static class CFuncTrain {
    public const nint m_hCurrentTarget = 0x7A8; // CHandle< CBaseEntity >
    public const nint m_activated = 0x7AC; // bool
    public const nint m_hEnemy = 0x7B0; // CHandle< CBaseEntity >
    public const nint m_flBlockDamage = 0x7B4; // float32
    public const nint m_flNextBlockTime = 0x7B8; // GameTime_t
    public const nint m_iszLastTarget = 0x7C0; // CUtlSymbolLarge
}

public static class CFuncVPhysicsClip {
    public const nint m_bDisabled = 0x700; // bool
}

public static class CFuncWall {
    public const nint m_nState = 0x700; // int32
}

public static class CFuncWater {
    public const nint m_BuoyancyHelper = 0x700; // CBuoyancyHelper
}

public static class CGameChoreoServices {
    public const nint m_hOwner = 0x8; // CHandle< CBaseAnimGraph >
    public const nint m_hScriptedSequence = 0xC; // CHandle< CScriptedSequence >
    public const nint m_scriptState = 0x10; // IChoreoServices::ScriptState_t
    public const nint m_choreoState = 0x14; // IChoreoServices::ChoreoState_t
    public const nint m_flTimeStartedState = 0x18; // GameTime_t
}

public static class CGameGibManager {
    public const nint m_bAllowNewGibs = 0x4D0; // bool
    public const nint m_iCurrentMaxPieces = 0x4D4; // int32
    public const nint m_iMaxPieces = 0x4D8; // int32
    public const nint m_iLastFrame = 0x4DC; // int32
}

public static class CGamePlayerEquip {
    public const nint m_weaponNames = 0x710; // CUtlSymbolLarge[32]
    public const nint m_weaponCount = 0x810; // int32[32]
}

public static class CGamePlayerZone {
    public const nint m_OnPlayerInZone = 0x708; // CEntityIOOutput
    public const nint m_OnPlayerOutZone = 0x730; // CEntityIOOutput
    public const nint m_PlayersInCount = 0x758; // CEntityOutputTemplate< int32 >
    public const nint m_PlayersOutCount = 0x780; // CEntityOutputTemplate< int32 >
}

public static class CGameRules {
    public const nint m_szQuestName = 0x8; // char[128]
    public const nint m_nQuestPhase = 0x88; // int32
}

public static class CGameSceneNode {
    public const nint m_nodeToWorld = 0x10; // CTransform
    public const nint m_pOwner = 0x30; // CEntityInstance*
    public const nint m_pParent = 0x38; // CGameSceneNode*
    public const nint m_pChild = 0x40; // CGameSceneNode*
    public const nint m_pNextSibling = 0x48; // CGameSceneNode*
    public const nint m_hParent = 0x70; // CGameSceneNodeHandle
    public const nint m_vecOrigin = 0x80; // CNetworkOriginCellCoordQuantizedVector
    public const nint m_angRotation = 0xB8; // QAngle
    public const nint m_flScale = 0xC4; // float32
    public const nint m_vecAbsOrigin = 0xC8; // Vector
    public const nint m_angAbsRotation = 0xD4; // QAngle
    public const nint m_flAbsScale = 0xE0; // float32
    public const nint m_nParentAttachmentOrBone = 0xE4; // int16
    public const nint m_bDebugAbsOriginChanges = 0xE6; // bool
    public const nint m_bDormant = 0xE7; // bool
    public const nint m_bForceParentToBeNetworked = 0xE8; // bool
    public const nint m_bDirtyHierarchy = 0x0; // bitfield:1
    public const nint m_bDirtyBoneMergeInfo = 0x0; // bitfield:1
    public const nint m_bNetworkedPositionChanged = 0x0; // bitfield:1
    public const nint m_bNetworkedAnglesChanged = 0x0; // bitfield:1
    public const nint m_bNetworkedScaleChanged = 0x0; // bitfield:1
    public const nint m_bWillBeCallingPostDataUpdate = 0x0; // bitfield:1
    public const nint m_bNotifyBoneTransformsChanged = 0x0; // bitfield:1
    public const nint m_bBoneMergeFlex = 0x0; // bitfield:1
    public const nint m_nLatchAbsOrigin = 0x0; // bitfield:2
    public const nint m_bDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
    public const nint m_nHierarchicalDepth = 0xEB; // uint8
    public const nint m_nHierarchyType = 0xEC; // uint8
    public const nint m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xED; // uint8
    public const nint m_name = 0xF0; // CUtlStringToken
    public const nint m_hierarchyAttachName = 0x130; // CUtlStringToken
    public const nint m_flZOffset = 0x134; // float32
    public const nint m_vRenderOrigin = 0x138; // Vector
}

public static class CGameSceneNodeHandle {
    public const nint m_hOwner = 0x8; // CEntityHandle
    public const nint m_name = 0xC; // CUtlStringToken
}

public static class CGameScriptedMoveData {
    public const nint m_vDest = 0x0; // Vector
    public const nint m_vSrc = 0xC; // Vector
    public const nint m_angSrc = 0x18; // QAngle
    public const nint m_angDst = 0x24; // QAngle
    public const nint m_angCurrent = 0x30; // QAngle
    public const nint m_flAngRate = 0x3C; // float32
    public const nint m_flDuration = 0x40; // float32
    public const nint m_flStartTime = 0x44; // GameTime_t
    public const nint m_nPrevMoveType = 0x48; // MoveType_t
    public const nint m_bActive = 0x49; // bool
    public const nint m_bTeleportOnEnd = 0x4A; // bool
    public const nint m_bEndOnDestinationReached = 0x4B; // bool
    public const nint m_bIgnoreRotation = 0x4C; // bool
    public const nint m_nType = 0x50; // ScriptedMoveType_t
    public const nint m_bSuccess = 0x54; // bool
    public const nint m_nForcedCrouchState = 0x58; // ForcedCrouchState_t
    public const nint m_bIgnoreCollisions = 0x5C; // bool
}

public static class CGameText {
    public const nint m_iszMessage = 0x710; // CUtlSymbolLarge
    public const nint m_textParms = 0x718; // hudtextparms_t
}

public static class CGenericConstraint {
    public const nint m_nLinearMotionX = 0x510; // JointMotion_t
    public const nint m_nLinearMotionY = 0x514; // JointMotion_t
    public const nint m_nLinearMotionZ = 0x518; // JointMotion_t
    public const nint m_flLinearFrequencyX = 0x51C; // float32
    public const nint m_flLinearFrequencyY = 0x520; // float32
    public const nint m_flLinearFrequencyZ = 0x524; // float32
    public const nint m_flLinearDampingRatioX = 0x528; // float32
    public const nint m_flLinearDampingRatioY = 0x52C; // float32
    public const nint m_flLinearDampingRatioZ = 0x530; // float32
    public const nint m_flMaxLinearImpulseX = 0x534; // float32
    public const nint m_flMaxLinearImpulseY = 0x538; // float32
    public const nint m_flMaxLinearImpulseZ = 0x53C; // float32
    public const nint m_flBreakAfterTimeX = 0x540; // float32
    public const nint m_flBreakAfterTimeY = 0x544; // float32
    public const nint m_flBreakAfterTimeZ = 0x548; // float32
    public const nint m_flBreakAfterTimeStartTimeX = 0x54C; // GameTime_t
    public const nint m_flBreakAfterTimeStartTimeY = 0x550; // GameTime_t
    public const nint m_flBreakAfterTimeStartTimeZ = 0x554; // GameTime_t
    public const nint m_flBreakAfterTimeThresholdX = 0x558; // float32
    public const nint m_flBreakAfterTimeThresholdY = 0x55C; // float32
    public const nint m_flBreakAfterTimeThresholdZ = 0x560; // float32
    public const nint m_flNotifyForceX = 0x564; // float32
    public const nint m_flNotifyForceY = 0x568; // float32
    public const nint m_flNotifyForceZ = 0x56C; // float32
    public const nint m_flNotifyForceMinTimeX = 0x570; // float32
    public const nint m_flNotifyForceMinTimeY = 0x574; // float32
    public const nint m_flNotifyForceMinTimeZ = 0x578; // float32
    public const nint m_flNotifyForceLastTimeX = 0x57C; // GameTime_t
    public const nint m_flNotifyForceLastTimeY = 0x580; // GameTime_t
    public const nint m_flNotifyForceLastTimeZ = 0x584; // GameTime_t
    public const nint m_bAxisNotifiedX = 0x588; // bool
    public const nint m_bAxisNotifiedY = 0x589; // bool
    public const nint m_bAxisNotifiedZ = 0x58A; // bool
    public const nint m_nAngularMotionX = 0x58C; // JointMotion_t
    public const nint m_nAngularMotionY = 0x590; // JointMotion_t
    public const nint m_nAngularMotionZ = 0x594; // JointMotion_t
    public const nint m_flAngularFrequencyX = 0x598; // float32
    public const nint m_flAngularFrequencyY = 0x59C; // float32
    public const nint m_flAngularFrequencyZ = 0x5A0; // float32
    public const nint m_flAngularDampingRatioX = 0x5A4; // float32
    public const nint m_flAngularDampingRatioY = 0x5A8; // float32
    public const nint m_flAngularDampingRatioZ = 0x5AC; // float32
    public const nint m_flMaxAngularImpulseX = 0x5B0; // float32
    public const nint m_flMaxAngularImpulseY = 0x5B4; // float32
    public const nint m_flMaxAngularImpulseZ = 0x5B8; // float32
    public const nint m_NotifyForceReachedX = 0x5C0; // CEntityIOOutput
    public const nint m_NotifyForceReachedY = 0x5E8; // CEntityIOOutput
    public const nint m_NotifyForceReachedZ = 0x610; // CEntityIOOutput
}

public static class CGlowProperty {
    public const nint m_fGlowColor = 0x8; // Vector
    public const nint m_iGlowType = 0x30; // int32
    public const nint m_iGlowTeam = 0x34; // int32
    public const nint m_nGlowRange = 0x38; // int32
    public const nint m_nGlowRangeMin = 0x3C; // int32
    public const nint m_glowColorOverride = 0x40; // Color
    public const nint m_bFlashing = 0x44; // bool
    public const nint m_flGlowTime = 0x48; // float32
    public const nint m_flGlowStartTime = 0x4C; // float32
    public const nint m_bEligibleForScreenHighlight = 0x50; // bool
    public const nint m_bGlowing = 0x51; // bool
}

public static class CGradientFog {
    public const nint m_hGradientFogTexture = 0x4B0; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_flFogStartDistance = 0x4B8; // float32
    public const nint m_flFogEndDistance = 0x4BC; // float32
    public const nint m_bHeightFogEnabled = 0x4C0; // bool
    public const nint m_flFogStartHeight = 0x4C4; // float32
    public const nint m_flFogEndHeight = 0x4C8; // float32
    public const nint m_flFarZ = 0x4CC; // float32
    public const nint m_flFogMaxOpacity = 0x4D0; // float32
    public const nint m_flFogFalloffExponent = 0x4D4; // float32
    public const nint m_flFogVerticalExponent = 0x4D8; // float32
    public const nint m_fogColor = 0x4DC; // Color
    public const nint m_flFogStrength = 0x4E0; // float32
    public const nint m_flFadeTime = 0x4E4; // float32
    public const nint m_bStartDisabled = 0x4E8; // bool
    public const nint m_bIsEnabled = 0x4E9; // bool
    public const nint m_bGradientFogNeedsTextures = 0x4EA; // bool
}

public static class CGunTarget {
    public const nint m_on = 0x780; // bool
    public const nint m_hTargetEnt = 0x784; // CHandle< CBaseEntity >
    public const nint m_OnDeath = 0x788; // CEntityIOOutput
}

public static class CHandleTest {
    public const nint m_Handle = 0x4B0; // CHandle< CBaseEntity >
    public const nint m_bSendHandle = 0x4B4; // bool
}

public static class CHintMessage {
    public const nint m_hintString = 0x8; // char*
    public const nint m_args = 0x10; // CUtlVector< char* >
    public const nint m_duration = 0x28; // float32
}

public static class CHintMessageQueue {
    public const nint m_tmMessageEnd = 0x8; // float32
    public const nint m_messages = 0x10; // CUtlVector< CHintMessage* >
    public const nint m_pPlayerController = 0x28; // CBasePlayerController*
}

public static class CHitboxComponent {
    public const nint m_bvDisabledHitGroups = 0x24; // uint32[1]
}

public static class CHostage {
    public const nint m_OnHostageBeginGrab = 0x9E8; // CEntityIOOutput
    public const nint m_OnFirstPickedUp = 0xA10; // CEntityIOOutput
    public const nint m_OnDroppedNotRescued = 0xA38; // CEntityIOOutput
    public const nint m_OnRescued = 0xA60; // CEntityIOOutput
    public const nint m_entitySpottedState = 0xA88; // EntitySpottedState_t
    public const nint m_nSpotRules = 0xAA0; // int32
    public const nint m_uiHostageSpawnExclusionGroupMask = 0xAA4; // uint32
    public const nint m_nHostageSpawnRandomFactor = 0xAA8; // uint32
    public const nint m_bRemove = 0xAAC; // bool
    public const nint m_vel = 0xAB0; // Vector
    public const nint m_isRescued = 0xABC; // bool
    public const nint m_jumpedThisFrame = 0xABD; // bool
    public const nint m_nHostageState = 0xAC0; // int32
    public const nint m_leader = 0xAC4; // CHandle< CBaseEntity >
    public const nint m_lastLeader = 0xAC8; // CHandle< CCSPlayerPawnBase >
    public const nint m_reuseTimer = 0xAD0; // CountdownTimer
    public const nint m_hasBeenUsed = 0xAE8; // bool
    public const nint m_accel = 0xAEC; // Vector
    public const nint m_isRunning = 0xAF8; // bool
    public const nint m_isCrouching = 0xAF9; // bool
    public const nint m_jumpTimer = 0xB00; // CountdownTimer
    public const nint m_isWaitingForLeader = 0xB18; // bool
    public const nint m_repathTimer = 0x2B28; // CountdownTimer
    public const nint m_inhibitDoorTimer = 0x2B40; // CountdownTimer
    public const nint m_inhibitObstacleAvoidanceTimer = 0x2BD0; // CountdownTimer
    public const nint m_wiggleTimer = 0x2BF0; // CountdownTimer
    public const nint m_isAdjusted = 0x2C0C; // bool
    public const nint m_bHandsHaveBeenCut = 0x2C0D; // bool
    public const nint m_hHostageGrabber = 0x2C10; // CHandle< CCSPlayerPawn >
    public const nint m_fLastGrabTime = 0x2C14; // GameTime_t
    public const nint m_vecPositionWhenStartedDroppingToGround = 0x2C18; // Vector
    public const nint m_vecGrabbedPos = 0x2C24; // Vector
    public const nint m_flRescueStartTime = 0x2C30; // GameTime_t
    public const nint m_flGrabSuccessTime = 0x2C34; // GameTime_t
    public const nint m_flDropStartTime = 0x2C38; // GameTime_t
    public const nint m_nApproachRewardPayouts = 0x2C3C; // int32
    public const nint m_nPickupEventCount = 0x2C40; // int32
    public const nint m_vecSpawnGroundPos = 0x2C44; // Vector
}

public static class CHostageExpresserShim {
    public const nint m_pExpresser = 0x9D0; // CAI_Expresser*
}

public static class CInButtonState {
    public const nint m_pButtonStates = 0x8; // uint64[3]
}

public static class CInferno {
    public const nint m_fireXDelta = 0x710; // int32[64]
    public const nint m_fireYDelta = 0x810; // int32[64]
    public const nint m_fireZDelta = 0x910; // int32[64]
    public const nint m_fireParentXDelta = 0xA10; // int32[64]
    public const nint m_fireParentYDelta = 0xB10; // int32[64]
    public const nint m_fireParentZDelta = 0xC10; // int32[64]
    public const nint m_bFireIsBurning = 0xD10; // bool[64]
    public const nint m_BurnNormal = 0xD50; // Vector[64]
    public const nint m_fireCount = 0x1050; // int32
    public const nint m_nInfernoType = 0x1054; // int32
    public const nint m_nFireEffectTickBegin = 0x1058; // int32
    public const nint m_nFireLifetime = 0x105C; // float32
    public const nint m_bInPostEffectTime = 0x1060; // bool
    public const nint m_nFiresExtinguishCount = 0x1064; // int32
    public const nint m_bWasCreatedInSmoke = 0x1068; // bool
    public const nint m_extent = 0x1270; // Extent
    public const nint m_damageTimer = 0x1288; // CountdownTimer
    public const nint m_damageRampTimer = 0x12A0; // CountdownTimer
    public const nint m_splashVelocity = 0x12B8; // Vector
    public const nint m_InitialSplashVelocity = 0x12C4; // Vector
    public const nint m_startPos = 0x12D0; // Vector
    public const nint m_vecOriginalSpawnLocation = 0x12DC; // Vector
    public const nint m_activeTimer = 0x12E8; // IntervalTimer
    public const nint m_fireSpawnOffset = 0x12F8; // int32
    public const nint m_nMaxFlames = 0x12FC; // int32
    public const nint m_BookkeepingTimer = 0x1300; // CountdownTimer
    public const nint m_NextSpreadTimer = 0x1318; // CountdownTimer
    public const nint m_nSourceItemDefIndex = 0x1330; // uint16
}

public static class CInfoDynamicShadowHint {
    public const nint m_bDisabled = 0x4B0; // bool
    public const nint m_flRange = 0x4B4; // float32
    public const nint m_nImportance = 0x4B8; // int32
    public const nint m_nLightChoice = 0x4BC; // int32
    public const nint m_hLight = 0x4C0; // CHandle< CBaseEntity >
}

public static class CInfoDynamicShadowHintBox {
    public const nint m_vBoxMins = 0x4C8; // Vector
    public const nint m_vBoxMaxs = 0x4D4; // Vector
}

public static class CInfoGameEventProxy {
    public const nint m_iszEventName = 0x4B0; // CUtlSymbolLarge
    public const nint m_flRange = 0x4B8; // float32
}

public static class CInfoOffscreenPanoramaTexture {
    public const nint m_bDisabled = 0x4B0; // bool
    public const nint m_nResolutionX = 0x4B4; // int32
    public const nint m_nResolutionY = 0x4B8; // int32
    public const nint m_szLayoutFileName = 0x4C0; // CUtlSymbolLarge
    public const nint m_RenderAttrName = 0x4C8; // CUtlSymbolLarge
    public const nint m_TargetEntities = 0x4D0; // CNetworkUtlVectorBase< CHandle< CBaseModelEntity > >
    public const nint m_nTargetChangeCount = 0x4E8; // int32
    public const nint m_vecCSSClasses = 0x4F0; // CNetworkUtlVectorBase< CUtlSymbolLarge >
    public const nint m_szTargetsName = 0x508; // CUtlSymbolLarge
    public const nint m_AdditionalTargetEntities = 0x510; // CUtlVector< CHandle< CBaseModelEntity > >
}

public static class CInfoPlayerStart {
    public const nint m_bDisabled = 0x4B0; // bool
}

public static class CInfoSpawnGroupLoadUnload {
    public const nint m_OnSpawnGroupLoadStarted = 0x4B0; // CEntityIOOutput
    public const nint m_OnSpawnGroupLoadFinished = 0x4D8; // CEntityIOOutput
    public const nint m_OnSpawnGroupUnloadStarted = 0x500; // CEntityIOOutput
    public const nint m_OnSpawnGroupUnloadFinished = 0x528; // CEntityIOOutput
    public const nint m_iszSpawnGroupName = 0x550; // CUtlSymbolLarge
    public const nint m_iszSpawnGroupFilterName = 0x558; // CUtlSymbolLarge
    public const nint m_iszLandmarkName = 0x560; // CUtlSymbolLarge
    public const nint m_sFixedSpawnGroupName = 0x568; // CUtlString
    public const nint m_flTimeoutInterval = 0x570; // float32
    public const nint m_bStreamingStarted = 0x574; // bool
    public const nint m_bUnloadingStarted = 0x575; // bool
}

public static class CInfoVisibilityBox {
    public const nint m_nMode = 0x4B4; // int32
    public const nint m_vBoxSize = 0x4B8; // Vector
    public const nint m_bEnabled = 0x4C4; // bool
}

public static class CInfoWorldLayer {
    public const nint m_pOutputOnEntitiesSpawned = 0x4B0; // CEntityIOOutput
    public const nint m_worldName = 0x4D8; // CUtlSymbolLarge
    public const nint m_layerName = 0x4E0; // CUtlSymbolLarge
    public const nint m_bWorldLayerVisible = 0x4E8; // bool
    public const nint m_bEntitiesSpawned = 0x4E9; // bool
    public const nint m_bCreateAsChildSpawnGroup = 0x4EA; // bool
    public const nint m_hLayerSpawnGroup = 0x4EC; // uint32
}

public static class CInstancedSceneEntity {
    public const nint m_hOwner = 0xA08; // CHandle< CBaseEntity >
    public const nint m_bHadOwner = 0xA0C; // bool
    public const nint m_flPostSpeakDelay = 0xA10; // float32
    public const nint m_flPreDelay = 0xA14; // float32
    public const nint m_bIsBackground = 0xA18; // bool
}

public static class CInstructorEventEntity {
    public const nint m_iszName = 0x4B0; // CUtlSymbolLarge
    public const nint m_iszHintTargetEntity = 0x4B8; // CUtlSymbolLarge
    public const nint m_hTargetPlayer = 0x4C0; // CHandle< CBasePlayerPawn >
}

public static class CIronSightController {
    public const nint m_bIronSightAvailable = 0x8; // bool
    public const nint m_flIronSightAmount = 0xC; // float32
    public const nint m_flIronSightAmountGained = 0x10; // float32
    public const nint m_flIronSightAmountBiased = 0x14; // float32
}

public static class CItem {
    public const nint m_OnPlayerTouch = 0x898; // CEntityIOOutput
    public const nint m_bActivateWhenAtRest = 0x8C0; // bool
    public const nint m_OnCacheInteraction = 0x8C8; // CEntityIOOutput
    public const nint m_OnPlayerPickup = 0x8F0; // CEntityIOOutput
    public const nint m_OnGlovePulled = 0x918; // CEntityIOOutput
    public const nint m_vOriginalSpawnOrigin = 0x940; // Vector
    public const nint m_vOriginalSpawnAngles = 0x94C; // QAngle
    public const nint m_bPhysStartAsleep = 0x958; // bool
}

public static class CItemDefuser {
    public const nint m_entitySpottedState = 0x968; // EntitySpottedState_t
    public const nint m_nSpotRules = 0x980; // int32
}

public static class CItemDogtags {
    public const nint m_OwningPlayer = 0x968; // CHandle< CCSPlayerPawn >
    public const nint m_KillingPlayer = 0x96C; // CHandle< CCSPlayerPawn >
}

public static class CItemGeneric {
    public const nint m_bHasTriggerRadius = 0x970; // bool
    public const nint m_bHasPickupRadius = 0x971; // bool
    public const nint m_flPickupRadiusSqr = 0x974; // float32
    public const nint m_flTriggerRadiusSqr = 0x978; // float32
    public const nint m_flLastPickupCheck = 0x97C; // GameTime_t
    public const nint m_bPlayerCounterListenerAdded = 0x980; // bool
    public const nint m_bPlayerInTriggerRadius = 0x981; // bool
    public const nint m_hSpawnParticleEffect = 0x988; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
    public const nint m_pAmbientSoundEffect = 0x990; // CUtlSymbolLarge
    public const nint m_bAutoStartAmbientSound = 0x998; // bool
    public const nint m_pSpawnScriptFunction = 0x9A0; // CUtlSymbolLarge
    public const nint m_hPickupParticleEffect = 0x9A8; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
    public const nint m_pPickupSoundEffect = 0x9B0; // CUtlSymbolLarge
    public const nint m_pPickupScriptFunction = 0x9B8; // CUtlSymbolLarge
    public const nint m_hTimeoutParticleEffect = 0x9C0; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
    public const nint m_pTimeoutSoundEffect = 0x9C8; // CUtlSymbolLarge
    public const nint m_pTimeoutScriptFunction = 0x9D0; // CUtlSymbolLarge
    public const nint m_pPickupFilterName = 0x9D8; // CUtlSymbolLarge
    public const nint m_hPickupFilter = 0x9E0; // CHandle< CBaseFilter >
    public const nint m_OnPickup = 0x9E8; // CEntityIOOutput
    public const nint m_OnTimeout = 0xA10; // CEntityIOOutput
    public const nint m_OnTriggerStartTouch = 0xA38; // CEntityIOOutput
    public const nint m_OnTriggerTouch = 0xA60; // CEntityIOOutput
    public const nint m_OnTriggerEndTouch = 0xA88; // CEntityIOOutput
    public const nint m_pAllowPickupScriptFunction = 0xAB0; // CUtlSymbolLarge
    public const nint m_flPickupRadius = 0xAB8; // float32
    public const nint m_flTriggerRadius = 0xABC; // float32
    public const nint m_pTriggerSoundEffect = 0xAC0; // CUtlSymbolLarge
    public const nint m_bGlowWhenInTrigger = 0xAC8; // bool
    public const nint m_glowColor = 0xAC9; // Color
    public const nint m_bUseable = 0xACD; // bool
    public const nint m_hTriggerHelper = 0xAD0; // CHandle< CItemGenericTriggerHelper >
}

public static class CItemGenericTriggerHelper {
    public const nint m_hParentItem = 0x700; // CHandle< CItemGeneric >
}

public static class CKeepUpright {
    public const nint m_worldGoalAxis = 0x4B8; // Vector
    public const nint m_localTestAxis = 0x4C4; // Vector
    public const nint m_nameAttach = 0x4D8; // CUtlSymbolLarge
    public const nint m_attachedObject = 0x4E0; // CHandle< CBaseEntity >
    public const nint m_angularLimit = 0x4E4; // float32
    public const nint m_bActive = 0x4E8; // bool
    public const nint m_bDampAllRotation = 0x4E9; // bool
}

public static class CLightComponent {
    public const nint __m_pChainEntity = 0x48; // CNetworkVarChainer
    public const nint m_Color = 0x85; // Color
    public const nint m_SecondaryColor = 0x89; // Color
    public const nint m_flBrightness = 0x90; // float32
    public const nint m_flBrightnessScale = 0x94; // float32
    public const nint m_flBrightnessMult = 0x98; // float32
    public const nint m_flRange = 0x9C; // float32
    public const nint m_flFalloff = 0xA0; // float32
    public const nint m_flAttenuation0 = 0xA4; // float32
    public const nint m_flAttenuation1 = 0xA8; // float32
    public const nint m_flAttenuation2 = 0xAC; // float32
    public const nint m_flTheta = 0xB0; // float32
    public const nint m_flPhi = 0xB4; // float32
    public const nint m_hLightCookie = 0xB8; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_nCascades = 0xC0; // int32
    public const nint m_nCastShadows = 0xC4; // int32
    public const nint m_nShadowWidth = 0xC8; // int32
    public const nint m_nShadowHeight = 0xCC; // int32
    public const nint m_bRenderDiffuse = 0xD0; // bool
    public const nint m_nRenderSpecular = 0xD4; // int32
    public const nint m_bRenderTransmissive = 0xD8; // bool
    public const nint m_flOrthoLightWidth = 0xDC; // float32
    public const nint m_flOrthoLightHeight = 0xE0; // float32
    public const nint m_nStyle = 0xE4; // int32
    public const nint m_Pattern = 0xE8; // CUtlString
    public const nint m_nCascadeRenderStaticObjects = 0xF0; // int32
    public const nint m_flShadowCascadeCrossFade = 0xF4; // float32
    public const nint m_flShadowCascadeDistanceFade = 0xF8; // float32
    public const nint m_flShadowCascadeDistance0 = 0xFC; // float32
    public const nint m_flShadowCascadeDistance1 = 0x100; // float32
    public const nint m_flShadowCascadeDistance2 = 0x104; // float32
    public const nint m_flShadowCascadeDistance3 = 0x108; // float32
    public const nint m_nShadowCascadeResolution0 = 0x10C; // int32
    public const nint m_nShadowCascadeResolution1 = 0x110; // int32
    public const nint m_nShadowCascadeResolution2 = 0x114; // int32
    public const nint m_nShadowCascadeResolution3 = 0x118; // int32
    public const nint m_bUsesBakedShadowing = 0x11C; // bool
    public const nint m_nShadowPriority = 0x120; // int32
    public const nint m_nBakedShadowIndex = 0x124; // int32
    public const nint m_bRenderToCubemaps = 0x128; // bool
    public const nint m_LightGroups = 0x130; // CUtlSymbolLarge
    public const nint m_nDirectLight = 0x138; // int32
    public const nint m_nIndirectLight = 0x13C; // int32
    public const nint m_flFadeMinDist = 0x140; // float32
    public const nint m_flFadeMaxDist = 0x144; // float32
    public const nint m_flShadowFadeMinDist = 0x148; // float32
    public const nint m_flShadowFadeMaxDist = 0x14C; // float32
    public const nint m_bEnabled = 0x150; // bool
    public const nint m_bFlicker = 0x151; // bool
    public const nint m_bPrecomputedFieldsValid = 0x152; // bool
    public const nint m_vPrecomputedBoundsMins = 0x154; // Vector
    public const nint m_vPrecomputedBoundsMaxs = 0x160; // Vector
    public const nint m_vPrecomputedOBBOrigin = 0x16C; // Vector
    public const nint m_vPrecomputedOBBAngles = 0x178; // QAngle
    public const nint m_vPrecomputedOBBExtent = 0x184; // Vector
    public const nint m_flPrecomputedMaxRange = 0x190; // float32
    public const nint m_nFogLightingMode = 0x194; // int32
    public const nint m_flFogContributionStength = 0x198; // float32
    public const nint m_flNearClipPlane = 0x19C; // float32
    public const nint m_SkyColor = 0x1A0; // Color
    public const nint m_flSkyIntensity = 0x1A4; // float32
    public const nint m_SkyAmbientBounce = 0x1A8; // Color
    public const nint m_bUseSecondaryColor = 0x1AC; // bool
    public const nint m_bMixedShadows = 0x1AD; // bool
    public const nint m_flLightStyleStartTime = 0x1B0; // GameTime_t
    public const nint m_flCapsuleLength = 0x1B4; // float32
    public const nint m_flMinRoughness = 0x1B8; // float32
    public const nint m_bPvsModifyEntity = 0x1C8; // bool
}

public static class CLightEntity {
    public const nint m_CLightComponent = 0x700; // CLightComponent*
}

public static class CLightGlow {
    public const nint m_nHorizontalSize = 0x700; // uint32
    public const nint m_nVerticalSize = 0x704; // uint32
    public const nint m_nMinDist = 0x708; // uint32
    public const nint m_nMaxDist = 0x70C; // uint32
    public const nint m_nOuterMaxDist = 0x710; // uint32
    public const nint m_flGlowProxySize = 0x714; // float32
    public const nint m_flHDRColorScale = 0x718; // float32
}

public static class CLogicAchievement {
    public const nint m_bDisabled = 0x4B0; // bool
    public const nint m_iszAchievementEventID = 0x4B8; // CUtlSymbolLarge
    public const nint m_OnFired = 0x4C0; // CEntityIOOutput
}

public static class CLogicActiveAutosave {
    public const nint m_TriggerHitPoints = 0x4C0; // int32
    public const nint m_flTimeToTrigger = 0x4C4; // float32
    public const nint m_flStartTime = 0x4C8; // GameTime_t
    public const nint m_flDangerousTime = 0x4CC; // float32
}

public static class CLogicAuto {
    public const nint m_OnMapSpawn = 0x4B0; // CEntityIOOutput
    public const nint m_OnDemoMapSpawn = 0x4D8; // CEntityIOOutput
    public const nint m_OnNewGame = 0x500; // CEntityIOOutput
    public const nint m_OnLoadGame = 0x528; // CEntityIOOutput
    public const nint m_OnMapTransition = 0x550; // CEntityIOOutput
    public const nint m_OnBackgroundMap = 0x578; // CEntityIOOutput
    public const nint m_OnMultiNewMap = 0x5A0; // CEntityIOOutput
    public const nint m_OnMultiNewRound = 0x5C8; // CEntityIOOutput
    public const nint m_OnVREnabled = 0x5F0; // CEntityIOOutput
    public const nint m_OnVRNotEnabled = 0x618; // CEntityIOOutput
    public const nint m_globalstate = 0x640; // CUtlSymbolLarge
}

public static class CLogicAutosave {
    public const nint m_bForceNewLevelUnit = 0x4B0; // bool
    public const nint m_minHitPoints = 0x4B4; // int32
    public const nint m_minHitPointsToCommit = 0x4B8; // int32
}

public static class CLogicBranch {
    public const nint m_bInValue = 0x4B0; // bool
    public const nint m_Listeners = 0x4B8; // CUtlVector< CHandle< CBaseEntity > >
    public const nint m_OnTrue = 0x4D0; // CEntityIOOutput
    public const nint m_OnFalse = 0x4F8; // CEntityIOOutput
}

public static class CLogicBranchList {
    public const nint m_nLogicBranchNames = 0x4B0; // CUtlSymbolLarge[16]
    public const nint m_LogicBranchList = 0x530; // CUtlVector< CHandle< CBaseEntity > >
    public const nint m_eLastState = 0x548; // CLogicBranchList::LogicBranchListenerLastState_t
    public const nint m_OnAllTrue = 0x550; // CEntityIOOutput
    public const nint m_OnAllFalse = 0x578; // CEntityIOOutput
    public const nint m_OnMixed = 0x5A0; // CEntityIOOutput
}

public static class CLogicCase {
    public const nint m_nCase = 0x4B0; // CUtlSymbolLarge[32]
    public const nint m_nShuffleCases = 0x5B0; // int32
    public const nint m_nLastShuffleCase = 0x5B4; // int32
    public const nint m_uchShuffleCaseMap = 0x5B8; // uint8[32]
    public const nint m_OnCase = 0x5D8; // CEntityIOOutput[32]
    public const nint m_OnDefault = 0xAD8; // CEntityOutputTemplate< CVariantBase< CVariantDefaultAllocator > >
}

public static class CLogicCollisionPair {
    public const nint m_nameAttach1 = 0x4B0; // CUtlSymbolLarge
    public const nint m_nameAttach2 = 0x4B8; // CUtlSymbolLarge
    public const nint m_disabled = 0x4C0; // bool
    public const nint m_succeeded = 0x4C1; // bool
}

public static class CLogicCompare {
    public const nint m_flInValue = 0x4B0; // float32
    public const nint m_flCompareValue = 0x4B4; // float32
    public const nint m_OnLessThan = 0x4B8; // CEntityOutputTemplate< float32 >
    public const nint m_OnEqualTo = 0x4E0; // CEntityOutputTemplate< float32 >
    public const nint m_OnNotEqualTo = 0x508; // CEntityOutputTemplate< float32 >
    public const nint m_OnGreaterThan = 0x530; // CEntityOutputTemplate< float32 >
}

public static class CLogicDistanceAutosave {
    public const nint m_iszTargetEntity = 0x4B0; // CUtlSymbolLarge
    public const nint m_flDistanceToPlayer = 0x4B8; // float32
    public const nint m_bForceNewLevelUnit = 0x4BC; // bool
    public const nint m_bCheckCough = 0x4BD; // bool
    public const nint m_bThinkDangerous = 0x4BE; // bool
    public const nint m_flDangerousTime = 0x4C0; // float32
}

public static class CLogicDistanceCheck {
    public const nint m_iszEntityA = 0x4B0; // CUtlSymbolLarge
    public const nint m_iszEntityB = 0x4B8; // CUtlSymbolLarge
    public const nint m_flZone1Distance = 0x4C0; // float32
    public const nint m_flZone2Distance = 0x4C4; // float32
    public const nint m_InZone1 = 0x4C8; // CEntityIOOutput
    public const nint m_InZone2 = 0x4F0; // CEntityIOOutput
    public const nint m_InZone3 = 0x518; // CEntityIOOutput
}

public static class CLogicGameEvent {
    public const nint m_iszEventName = 0x4B0; // CUtlSymbolLarge
}

public static class CLogicGameEventListener {
    public const nint m_OnEventFired = 0x4C0; // CEntityIOOutput
    public const nint m_iszGameEventName = 0x4E8; // CUtlSymbolLarge
    public const nint m_iszGameEventItem = 0x4F0; // CUtlSymbolLarge
    public const nint m_bEnabled = 0x4F8; // bool
    public const nint m_bStartDisabled = 0x4F9; // bool
}

public static class CLogicLineToEntity {
    public const nint m_Line = 0x4B0; // CEntityOutputTemplate< Vector >
    public const nint m_SourceName = 0x4D8; // CUtlSymbolLarge
    public const nint m_StartEntity = 0x4E0; // CHandle< CBaseEntity >
    public const nint m_EndEntity = 0x4E4; // CHandle< CBaseEntity >
}

public static class CLogicMeasureMovement {
    public const nint m_strMeasureTarget = 0x4B0; // CUtlSymbolLarge
    public const nint m_strMeasureReference = 0x4B8; // CUtlSymbolLarge
    public const nint m_strTargetReference = 0x4C0; // CUtlSymbolLarge
    public const nint m_hMeasureTarget = 0x4C8; // CHandle< CBaseEntity >
    public const nint m_hMeasureReference = 0x4CC; // CHandle< CBaseEntity >
    public const nint m_hTarget = 0x4D0; // CHandle< CBaseEntity >
    public const nint m_hTargetReference = 0x4D4; // CHandle< CBaseEntity >
    public const nint m_flScale = 0x4D8; // float32
    public const nint m_nMeasureType = 0x4DC; // int32
}

public static class CLogicNPCCounter {
    public const nint m_OnMinCountAll = 0x4B0; // CEntityIOOutput
    public const nint m_OnMaxCountAll = 0x4D8; // CEntityIOOutput
    public const nint m_OnFactorAll = 0x500; // CEntityOutputTemplate< float32 >
    public const nint m_OnMinPlayerDistAll = 0x528; // CEntityOutputTemplate< float32 >
    public const nint m_OnMinCount_1 = 0x550; // CEntityIOOutput
    public const nint m_OnMaxCount_1 = 0x578; // CEntityIOOutput
    public const nint m_OnFactor_1 = 0x5A0; // CEntityOutputTemplate< float32 >
    public const nint m_OnMinPlayerDist_1 = 0x5C8; // CEntityOutputTemplate< float32 >
    public const nint m_OnMinCount_2 = 0x5F0; // CEntityIOOutput
    public const nint m_OnMaxCount_2 = 0x618; // CEntityIOOutput
    public const nint m_OnFactor_2 = 0x640; // CEntityOutputTemplate< float32 >
    public const nint m_OnMinPlayerDist_2 = 0x668; // CEntityOutputTemplate< float32 >
    public const nint m_OnMinCount_3 = 0x690; // CEntityIOOutput
    public const nint m_OnMaxCount_3 = 0x6B8; // CEntityIOOutput
    public const nint m_OnFactor_3 = 0x6E0; // CEntityOutputTemplate< float32 >
    public const nint m_OnMinPlayerDist_3 = 0x708; // CEntityOutputTemplate< float32 >
    public const nint m_hSource = 0x730; // CEntityHandle
    public const nint m_iszSourceEntityName = 0x738; // CUtlSymbolLarge
    public const nint m_flDistanceMax = 0x740; // float32
    public const nint m_bDisabled = 0x744; // bool
    public const nint m_nMinCountAll = 0x748; // int32
    public const nint m_nMaxCountAll = 0x74C; // int32
    public const nint m_nMinFactorAll = 0x750; // int32
    public const nint m_nMaxFactorAll = 0x754; // int32
    public const nint m_iszNPCClassname_1 = 0x760; // CUtlSymbolLarge
    public const nint m_nNPCState_1 = 0x768; // int32
    public const nint m_bInvertState_1 = 0x76C; // bool
    public const nint m_nMinCount_1 = 0x770; // int32
    public const nint m_nMaxCount_1 = 0x774; // int32
    public const nint m_nMinFactor_1 = 0x778; // int32
    public const nint m_nMaxFactor_1 = 0x77C; // int32
    public const nint m_flDefaultDist_1 = 0x784; // float32
    public const nint m_iszNPCClassname_2 = 0x788; // CUtlSymbolLarge
    public const nint m_nNPCState_2 = 0x790; // int32
    public const nint m_bInvertState_2 = 0x794; // bool
    public const nint m_nMinCount_2 = 0x798; // int32
    public const nint m_nMaxCount_2 = 0x79C; // int32
    public const nint m_nMinFactor_2 = 0x7A0; // int32
    public const nint m_nMaxFactor_2 = 0x7A4; // int32
    public const nint m_flDefaultDist_2 = 0x7AC; // float32
    public const nint m_iszNPCClassname_3 = 0x7B0; // CUtlSymbolLarge
    public const nint m_nNPCState_3 = 0x7B8; // int32
    public const nint m_bInvertState_3 = 0x7BC; // bool
    public const nint m_nMinCount_3 = 0x7C0; // int32
    public const nint m_nMaxCount_3 = 0x7C4; // int32
    public const nint m_nMinFactor_3 = 0x7C8; // int32
    public const nint m_nMaxFactor_3 = 0x7CC; // int32
    public const nint m_flDefaultDist_3 = 0x7D4; // float32
}

public static class CLogicNPCCounterAABB {
    public const nint m_vDistanceOuterMins = 0x7F0; // Vector
    public const nint m_vDistanceOuterMaxs = 0x7FC; // Vector
    public const nint m_vOuterMins = 0x808; // Vector
    public const nint m_vOuterMaxs = 0x814; // Vector
}

public static class CLogicNavigation {
    public const nint m_isOn = 0x4B8; // bool
    public const nint m_navProperty = 0x4BC; // navproperties_t
}

public static class CLogicPlayerProxy {
    public const nint m_hPlayer = 0x4B0; // CHandle< CBaseEntity >
    public const nint m_PlayerHasAmmo = 0x4B8; // CEntityIOOutput
    public const nint m_PlayerHasNoAmmo = 0x4E0; // CEntityIOOutput
    public const nint m_PlayerDied = 0x508; // CEntityIOOutput
    public const nint m_RequestedPlayerHealth = 0x530; // CEntityOutputTemplate< int32 >
}

public static class CLogicRelay {
    public const nint m_OnTrigger = 0x4B0; // CEntityIOOutput
    public const nint m_OnSpawn = 0x4D8; // CEntityIOOutput
    public const nint m_bDisabled = 0x500; // bool
    public const nint m_bWaitForRefire = 0x501; // bool
    public const nint m_bTriggerOnce = 0x502; // bool
    public const nint m_bFastRetrigger = 0x503; // bool
    public const nint m_bPassthoughCaller = 0x504; // bool
}

public static class CMapInfo {
    public const nint m_iBuyingStatus = 0x4B0; // int32
    public const nint m_flBombRadius = 0x4B4; // float32
    public const nint m_iPetPopulation = 0x4B8; // int32
    public const nint m_bUseNormalSpawnsForDM = 0x4BC; // bool
    public const nint m_bDisableAutoGeneratedDMSpawns = 0x4BD; // bool
    public const nint m_flBotMaxVisionDistance = 0x4C0; // float32
    public const nint m_iHostageCount = 0x4C4; // int32
    public const nint m_bFadePlayerVisibilityFarZ = 0x4C8; // bool
}

public static class CMapVetoPickController {
    public const nint m_bPlayedIntroVcd = 0x4B0; // bool
    public const nint m_bNeedToPlayFiveSecondsRemaining = 0x4B1; // bool
    public const nint m_dblPreMatchDraftSequenceTime = 0x4D0; // float64
    public const nint m_bPreMatchDraftStateChanged = 0x4D8; // bool
    public const nint m_nDraftType = 0x4DC; // int32
    public const nint m_nTeamWinningCoinToss = 0x4E0; // int32
    public const nint m_nTeamWithFirstChoice = 0x4E4; // int32[64]
    public const nint m_nVoteMapIdsList = 0x5E4; // int32[7]
    public const nint m_nAccountIDs = 0x600; // int32[64]
    public const nint m_nMapId0 = 0x700; // int32[64]
    public const nint m_nMapId1 = 0x800; // int32[64]
    public const nint m_nMapId2 = 0x900; // int32[64]
    public const nint m_nMapId3 = 0xA00; // int32[64]
    public const nint m_nMapId4 = 0xB00; // int32[64]
    public const nint m_nMapId5 = 0xC00; // int32[64]
    public const nint m_nStartingSide0 = 0xD00; // int32[64]
    public const nint m_nCurrentPhase = 0xE00; // int32
    public const nint m_nPhaseStartTick = 0xE04; // int32
    public const nint m_nPhaseDurationTicks = 0xE08; // int32
    public const nint m_OnMapVetoed = 0xE10; // CEntityOutputTemplate< CUtlSymbolLarge >
    public const nint m_OnMapPicked = 0xE38; // CEntityOutputTemplate< CUtlSymbolLarge >
    public const nint m_OnSidesPicked = 0xE60; // CEntityOutputTemplate< int32 >
    public const nint m_OnNewPhaseStarted = 0xE88; // CEntityOutputTemplate< int32 >
    public const nint m_OnLevelTransition = 0xEB0; // CEntityOutputTemplate< int32 >
}

public static class CMarkupVolume {
    public const nint m_bEnabled = 0x700; // bool
}

public static class CMarkupVolumeTagged {
    public const nint m_bIsGroup = 0x738; // bool
    public const nint m_bGroupByPrefab = 0x739; // bool
    public const nint m_bGroupByVolume = 0x73A; // bool
    public const nint m_bGroupOtherGroups = 0x73B; // bool
    public const nint m_bIsInGroup = 0x73C; // bool
}

public static class CMarkupVolumeTagged_NavGame {
    public const nint m_bFloodFillAttribute = 0x758; // bool
}

public static class CMarkupVolumeWithRef {
    public const nint m_bUseRef = 0x740; // bool
    public const nint m_vRefPos = 0x744; // Vector
    public const nint m_flRefDot = 0x750; // float32
}

public static class CMathColorBlend {
    public const nint m_flInMin = 0x4B0; // float32
    public const nint m_flInMax = 0x4B4; // float32
    public const nint m_OutColor1 = 0x4B8; // Color
    public const nint m_OutColor2 = 0x4BC; // Color
    public const nint m_OutValue = 0x4C0; // CEntityOutputTemplate< Color >
}

public static class CMathCounter {
    public const nint m_flMin = 0x4B0; // float32
    public const nint m_flMax = 0x4B4; // float32
    public const nint m_bHitMin = 0x4B8; // bool
    public const nint m_bHitMax = 0x4B9; // bool
    public const nint m_bDisabled = 0x4BA; // bool
    public const nint m_OutValue = 0x4C0; // CEntityOutputTemplate< float32 >
    public const nint m_OnGetValue = 0x4E8; // CEntityOutputTemplate< float32 >
    public const nint m_OnHitMin = 0x510; // CEntityIOOutput
    public const nint m_OnHitMax = 0x538; // CEntityIOOutput
    public const nint m_OnChangedFromMin = 0x560; // CEntityIOOutput
    public const nint m_OnChangedFromMax = 0x588; // CEntityIOOutput
}

public static class CMathRemap {
    public const nint m_flInMin = 0x4B0; // float32
    public const nint m_flInMax = 0x4B4; // float32
    public const nint m_flOut1 = 0x4B8; // float32
    public const nint m_flOut2 = 0x4BC; // float32
    public const nint m_flOldInValue = 0x4C0; // float32
    public const nint m_bEnabled = 0x4C4; // bool
    public const nint m_OutValue = 0x4C8; // CEntityOutputTemplate< float32 >
    public const nint m_OnRoseAboveMin = 0x4F0; // CEntityIOOutput
    public const nint m_OnRoseAboveMax = 0x518; // CEntityIOOutput
    public const nint m_OnFellBelowMin = 0x540; // CEntityIOOutput
    public const nint m_OnFellBelowMax = 0x568; // CEntityIOOutput
}

public static class CMelee {
    public const nint m_flThrowAt = 0xDD8; // GameTime_t
    public const nint m_hThrower = 0xDDC; // CHandle< CBaseEntity >
    public const nint m_bDidThrowDamage = 0xDE0; // bool
}

public static class CMessage {
    public const nint m_iszMessage = 0x4B0; // CUtlSymbolLarge
    public const nint m_MessageVolume = 0x4B8; // float32
    public const nint m_MessageAttenuation = 0x4BC; // int32
    public const nint m_Radius = 0x4C0; // float32
    public const nint m_sNoise = 0x4C8; // CUtlSymbolLarge
    public const nint m_OnShowMessage = 0x4D0; // CEntityIOOutput
}

public static class CMessageEntity {
    public const nint m_radius = 0x4B0; // int32
    public const nint m_messageText = 0x4B8; // CUtlSymbolLarge
    public const nint m_drawText = 0x4C0; // bool
    public const nint m_bDeveloperOnly = 0x4C1; // bool
    public const nint m_bEnabled = 0x4C2; // bool
}

public static class CModelState {
    public const nint m_hModel = 0xA0; // CStrongHandle< InfoForResourceTypeCModel >
    public const nint m_ModelName = 0xA8; // CUtlSymbolLarge
    public const nint m_bClientClothCreationSuppressed = 0xE8; // bool
    public const nint m_MeshGroupMask = 0x180; // uint64
    public const nint m_nIdealMotionType = 0x222; // int8
    public const nint m_nForceLOD = 0x223; // int8
    public const nint m_nClothUpdateFlags = 0x224; // int8
}

public static class CMolotovProjectile {
    public const nint m_bIsIncGrenade = 0xA28; // bool
    public const nint m_bDetonated = 0xA34; // bool
    public const nint m_stillTimer = 0xA38; // IntervalTimer
    public const nint m_bHasBouncedOffPlayer = 0xB18; // bool
}

public static class CMomentaryRotButton {
    public const nint m_Position = 0x8C8; // CEntityOutputTemplate< float32 >
    public const nint m_OnUnpressed = 0x8F0; // CEntityIOOutput
    public const nint m_OnFullyOpen = 0x918; // CEntityIOOutput
    public const nint m_OnFullyClosed = 0x940; // CEntityIOOutput
    public const nint m_OnReachedPosition = 0x968; // CEntityIOOutput
    public const nint m_lastUsed = 0x990; // int32
    public const nint m_start = 0x994; // QAngle
    public const nint m_end = 0x9A0; // QAngle
    public const nint m_IdealYaw = 0x9AC; // float32
    public const nint m_sNoise = 0x9B0; // CUtlSymbolLarge
    public const nint m_bUpdateTarget = 0x9B8; // bool
    public const nint m_direction = 0x9BC; // int32
    public const nint m_returnSpeed = 0x9C0; // float32
    public const nint m_flStartPosition = 0x9C4; // float32
}

public static class CMotorController {
    public const nint m_speed = 0x8; // float32
    public const nint m_maxTorque = 0xC; // float32
    public const nint m_axis = 0x10; // Vector
    public const nint m_inertiaFactor = 0x1C; // float32
}

public static class CMultiLightProxy {
    public const nint m_iszLightNameFilter = 0x4B0; // CUtlSymbolLarge
    public const nint m_iszLightClassFilter = 0x4B8; // CUtlSymbolLarge
    public const nint m_flLightRadiusFilter = 0x4C0; // float32
    public const nint m_flBrightnessDelta = 0x4C4; // float32
    public const nint m_bPerformScreenFade = 0x4C8; // bool
    public const nint m_flTargetBrightnessMultiplier = 0x4CC; // float32
    public const nint m_flCurrentBrightnessMultiplier = 0x4D0; // float32
    public const nint m_vecLights = 0x4D8; // CUtlVector< CHandle< CLightEntity > >
}

public static class CMultiSource {
    public const nint m_rgEntities = 0x4B0; // CHandle< CBaseEntity >[32]
    public const nint m_rgTriggered = 0x530; // int32[32]
    public const nint m_OnTrigger = 0x5B0; // CEntityIOOutput
    public const nint m_iTotal = 0x5D8; // int32
    public const nint m_globalstate = 0x5E0; // CUtlSymbolLarge
}

public static class CMultiplayer_Expresser {
    public const nint m_bAllowMultipleScenes = 0x70; // bool
}

public static class CNavHullPresetVData {
    public const nint m_vecNavHulls = 0x0; // CUtlVector< CUtlString >
}

public static class CNavHullVData {
    public const nint m_bAgentEnabled = 0x0; // bool
    public const nint m_agentRadius = 0x4; // float32
    public const nint m_agentHeight = 0x8; // float32
    public const nint m_agentShortHeightEnabled = 0xC; // bool
    public const nint m_agentShortHeight = 0x10; // float32
    public const nint m_agentMaxClimb = 0x14; // float32
    public const nint m_agentMaxSlope = 0x18; // int32
    public const nint m_agentMaxJumpDownDist = 0x1C; // float32
    public const nint m_agentMaxJumpHorizDistBase = 0x20; // float32
    public const nint m_agentMaxJumpUpDist = 0x24; // float32
    public const nint m_agentBorderErosion = 0x28; // int32
}

public static class CNavLinkAnimgraphVar {
    public const nint m_strAnimgraphVar = 0x0; // CUtlString
    public const nint m_unAlignmentDegrees = 0x8; // uint32
}

public static class CNavLinkAreaEntity {
    public const nint m_flWidth = 0x4B0; // float32
    public const nint m_vLocatorOffset = 0x4B4; // Vector
    public const nint m_qLocatorAnglesOffset = 0x4C0; // QAngle
    public const nint m_strMovementForward = 0x4D0; // CUtlSymbolLarge
    public const nint m_strMovementReverse = 0x4D8; // CUtlSymbolLarge
    public const nint m_nNavLinkIdForward = 0x4E0; // int32
    public const nint m_nNavLinkIdReverse = 0x4E4; // int32
    public const nint m_bEnabled = 0x4E8; // bool
    public const nint m_strFilterName = 0x4F0; // CUtlSymbolLarge
    public const nint m_hFilter = 0x4F8; // CHandle< CBaseFilter >
    public const nint m_OnNavLinkStart = 0x500; // CEntityIOOutput
    public const nint m_OnNavLinkFinish = 0x528; // CEntityIOOutput
    public const nint m_bIsTerminus = 0x550; // bool
}

public static class CNavLinkMovementVData {
    public const nint m_bIsInterpolated = 0x0; // bool
    public const nint m_unRecommendedDistance = 0x4; // uint32
    public const nint m_vecAnimgraphVars = 0x8; // CUtlVector< CNavLinkAnimgraphVar >
}

public static class CNavSpaceInfo {
    public const nint m_bCreateFlightSpace = 0x4B0; // bool
}

public static class CNavVolumeBreadthFirstSearch {
    public const nint m_vStartPos = 0xA0; // Vector
    public const nint m_flSearchDist = 0xAC; // float32
}

public static class CNavVolumeSphere {
    public const nint m_vCenter = 0x70; // Vector
    public const nint m_flRadius = 0x7C; // float32
}

public static class CNavVolumeSphericalShell {
    public const nint m_flRadiusInner = 0x80; // float32
}

public static class CNavVolumeVector {
    public const nint m_bHasBeenPreFiltered = 0x78; // bool
}

public static class CNetworkOriginCellCoordQuantizedVector {
    public const nint m_cellX = 0x10; // uint16
    public const nint m_cellY = 0x12; // uint16
    public const nint m_cellZ = 0x14; // uint16
    public const nint m_nOutsideWorld = 0x16; // uint16
    public const nint m_vecX = 0x18; // CNetworkedQuantizedFloat
    public const nint m_vecY = 0x20; // CNetworkedQuantizedFloat
    public const nint m_vecZ = 0x28; // CNetworkedQuantizedFloat
}

public static class CNetworkOriginQuantizedVector {
    public const nint m_vecX = 0x10; // CNetworkedQuantizedFloat
    public const nint m_vecY = 0x18; // CNetworkedQuantizedFloat
    public const nint m_vecZ = 0x20; // CNetworkedQuantizedFloat
}

public static class CNetworkTransmitComponent {
    public const nint m_nTransmitStateOwnedCounter = 0x16C; // uint8
}

public static class CNetworkVelocityVector {
    public const nint m_vecX = 0x10; // CNetworkedQuantizedFloat
    public const nint m_vecY = 0x18; // CNetworkedQuantizedFloat
    public const nint m_vecZ = 0x20; // CNetworkedQuantizedFloat
}

public static class CNetworkViewOffsetVector {
    public const nint m_vecX = 0x10; // CNetworkedQuantizedFloat
    public const nint m_vecY = 0x18; // CNetworkedQuantizedFloat
    public const nint m_vecZ = 0x20; // CNetworkedQuantizedFloat
}

public static class CNetworkedSequenceOperation {
    public const nint m_hSequence = 0x8; // HSequence
    public const nint m_flPrevCycle = 0xC; // float32
    public const nint m_flCycle = 0x10; // float32
    public const nint m_flWeight = 0x14; // CNetworkedQuantizedFloat
    public const nint m_bSequenceChangeNetworked = 0x1C; // bool
    public const nint m_bDiscontinuity = 0x1D; // bool
    public const nint m_flPrevCycleFromDiscontinuity = 0x20; // float32
    public const nint m_flPrevCycleForAnimEventDetection = 0x24; // float32
}

public static class COmniLight {
    public const nint m_flInnerAngle = 0x938; // float32
    public const nint m_flOuterAngle = 0x93C; // float32
    public const nint m_bShowLight = 0x940; // bool
}

public static class COrnamentProp {
    public const nint m_initialOwner = 0xB08; // CUtlSymbolLarge
}

public static class CParticleSystem {
    public const nint m_szSnapshotFileName = 0x700; // char[512]
    public const nint m_bActive = 0x900; // bool
    public const nint m_bFrozen = 0x901; // bool
    public const nint m_flFreezeTransitionDuration = 0x904; // float32
    public const nint m_nStopType = 0x908; // int32
    public const nint m_bAnimateDuringGameplayPause = 0x90C; // bool
    public const nint m_iEffectIndex = 0x910; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
    public const nint m_flStartTime = 0x918; // GameTime_t
    public const nint m_flPreSimTime = 0x91C; // float32
    public const nint m_vServerControlPoints = 0x920; // Vector[4]
    public const nint m_iServerControlPointAssignments = 0x950; // uint8[4]
    public const nint m_hControlPointEnts = 0x954; // CHandle< CBaseEntity >[64]
    public const nint m_bNoSave = 0xA54; // bool
    public const nint m_bNoFreeze = 0xA55; // bool
    public const nint m_bNoRamp = 0xA56; // bool
    public const nint m_bStartActive = 0xA57; // bool
    public const nint m_iszEffectName = 0xA58; // CUtlSymbolLarge
    public const nint m_iszControlPointNames = 0xA60; // CUtlSymbolLarge[64]
    public const nint m_nDataCP = 0xC60; // int32
    public const nint m_vecDataCPValue = 0xC64; // Vector
    public const nint m_nTintCP = 0xC70; // int32
    public const nint m_clrTint = 0xC74; // Color
}

public static class CPathCorner {
    public const nint m_flWait = 0x4B0; // float32
    public const nint m_flRadius = 0x4B4; // float32
    public const nint m_OnPass = 0x4B8; // CEntityIOOutput
}

public static class CPathKeyFrame {
    public const nint m_Origin = 0x4B0; // Vector
    public const nint m_Angles = 0x4BC; // QAngle
    public const nint m_qAngle = 0x4D0; // Quaternion
    public const nint m_iNextKey = 0x4E0; // CUtlSymbolLarge
    public const nint m_flNextTime = 0x4E8; // float32
    public const nint m_pNextKey = 0x4F0; // CPathKeyFrame*
    public const nint m_pPrevKey = 0x4F8; // CPathKeyFrame*
    public const nint m_flSpeed = 0x500; // float32
}

public static class CPathParticleRope {
    public const nint m_bStartActive = 0x4B0; // bool
    public const nint m_flMaxSimulationTime = 0x4B4; // float32
    public const nint m_iszEffectName = 0x4B8; // CUtlSymbolLarge
    public const nint m_PathNodes_Name = 0x4C0; // CUtlVector< CUtlSymbolLarge >
    public const nint m_flParticleSpacing = 0x4D8; // float32
    public const nint m_flSlack = 0x4DC; // float32
    public const nint m_flRadius = 0x4E0; // float32
    public const nint m_ColorTint = 0x4E4; // Color
    public const nint m_nEffectState = 0x4E8; // int32
    public const nint m_iEffectIndex = 0x4F0; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
    public const nint m_PathNodes_Position = 0x4F8; // CNetworkUtlVectorBase< Vector >
    public const nint m_PathNodes_TangentIn = 0x510; // CNetworkUtlVectorBase< Vector >
    public const nint m_PathNodes_TangentOut = 0x528; // CNetworkUtlVectorBase< Vector >
    public const nint m_PathNodes_Color = 0x540; // CNetworkUtlVectorBase< Vector >
    public const nint m_PathNodes_PinEnabled = 0x558; // CNetworkUtlVectorBase< bool >
    public const nint m_PathNodes_RadiusScale = 0x570; // CNetworkUtlVectorBase< float32 >
}

public static class CPathTrack {
    public const nint m_pnext = 0x4B0; // CPathTrack*
    public const nint m_pprevious = 0x4B8; // CPathTrack*
    public const nint m_paltpath = 0x4C0; // CPathTrack*
    public const nint m_flRadius = 0x4C8; // float32
    public const nint m_length = 0x4CC; // float32
    public const nint m_altName = 0x4D0; // CUtlSymbolLarge
    public const nint m_nIterVal = 0x4D8; // int32
    public const nint m_eOrientationType = 0x4DC; // TrackOrientationType_t
    public const nint m_OnPass = 0x4E0; // CEntityIOOutput
}

public static class CPhysBallSocket {
    public const nint m_flFriction = 0x508; // float32
    public const nint m_bEnableSwingLimit = 0x50C; // bool
    public const nint m_flSwingLimit = 0x510; // float32
    public const nint m_bEnableTwistLimit = 0x514; // bool
    public const nint m_flMinTwistAngle = 0x518; // float32
    public const nint m_flMaxTwistAngle = 0x51C; // float32
}

public static class CPhysBox {
    public const nint m_damageType = 0x7C0; // int32
    public const nint m_massScale = 0x7C4; // float32
    public const nint m_damageToEnableMotion = 0x7C8; // int32
    public const nint m_flForceToEnableMotion = 0x7CC; // float32
    public const nint m_angPreferredCarryAngles = 0x7D0; // QAngle
    public const nint m_bNotSolidToWorld = 0x7DC; // bool
    public const nint m_bEnableUseOutput = 0x7DD; // bool
    public const nint m_iExploitableByPlayer = 0x7E0; // int32
    public const nint m_flTouchOutputPerEntityDelay = 0x7E4; // float32
    public const nint m_OnDamaged = 0x7E8; // CEntityIOOutput
    public const nint m_OnAwakened = 0x810; // CEntityIOOutput
    public const nint m_OnMotionEnabled = 0x838; // CEntityIOOutput
    public const nint m_OnPlayerUse = 0x860; // CEntityIOOutput
    public const nint m_OnStartTouch = 0x888; // CEntityIOOutput
    public const nint m_hCarryingPlayer = 0x8B0; // CHandle< CBasePlayerPawn >
}

public static class CPhysConstraint {
    public const nint m_nameAttach1 = 0x4B8; // CUtlSymbolLarge
    public const nint m_nameAttach2 = 0x4C0; // CUtlSymbolLarge
    public const nint m_breakSound = 0x4C8; // CUtlSymbolLarge
    public const nint m_forceLimit = 0x4D0; // float32
    public const nint m_torqueLimit = 0x4D4; // float32
    public const nint m_teleportTick = 0x4D8; // uint32
    public const nint m_minTeleportDistance = 0x4DC; // float32
    public const nint m_OnBreak = 0x4E0; // CEntityIOOutput
}

public static class CPhysExplosion {
    public const nint m_bExplodeOnSpawn = 0x4B0; // bool
    public const nint m_flMagnitude = 0x4B4; // float32
    public const nint m_flDamage = 0x4B8; // float32
    public const nint m_radius = 0x4BC; // float32
    public const nint m_targetEntityName = 0x4C0; // CUtlSymbolLarge
    public const nint m_flInnerRadius = 0x4C8; // float32
    public const nint m_flPushScale = 0x4CC; // float32
    public const nint m_bConvertToDebrisWhenPossible = 0x4D0; // bool
    public const nint m_OnPushedPlayer = 0x4D8; // CEntityIOOutput
}

public static class CPhysFixed {
    public const nint m_flLinearFrequency = 0x508; // float32
    public const nint m_flLinearDampingRatio = 0x50C; // float32
    public const nint m_flAngularFrequency = 0x510; // float32
    public const nint m_flAngularDampingRatio = 0x514; // float32
    public const nint m_bEnableLinearConstraint = 0x518; // bool
    public const nint m_bEnableAngularConstraint = 0x519; // bool
}

public static class CPhysForce {
    public const nint m_nameAttach = 0x4B8; // CUtlSymbolLarge
    public const nint m_force = 0x4C0; // float32
    public const nint m_forceTime = 0x4C4; // float32
    public const nint m_attachedObject = 0x4C8; // CHandle< CBaseEntity >
    public const nint m_wasRestored = 0x4CC; // bool
    public const nint m_integrator = 0x4D0; // CConstantForceController
}

public static class CPhysHinge {
    public const nint m_soundInfo = 0x510; // ConstraintSoundInfo
    public const nint m_NotifyMinLimitReached = 0x598; // CEntityIOOutput
    public const nint m_NotifyMaxLimitReached = 0x5C0; // CEntityIOOutput
    public const nint m_bAtMinLimit = 0x5E8; // bool
    public const nint m_bAtMaxLimit = 0x5E9; // bool
    public const nint m_hinge = 0x5EC; // constraint_hingeparams_t
    public const nint m_hingeFriction = 0x62C; // float32
    public const nint m_systemLoadScale = 0x630; // float32
    public const nint m_bIsAxisLocal = 0x634; // bool
    public const nint m_flMinRotation = 0x638; // float32
    public const nint m_flMaxRotation = 0x63C; // float32
    public const nint m_flInitialRotation = 0x640; // float32
    public const nint m_flMotorFrequency = 0x644; // float32
    public const nint m_flMotorDampingRatio = 0x648; // float32
    public const nint m_flAngleSpeed = 0x64C; // float32
    public const nint m_flAngleSpeedThreshold = 0x650; // float32
    public const nint m_OnStartMoving = 0x658; // CEntityIOOutput
    public const nint m_OnStopMoving = 0x680; // CEntityIOOutput
}

public static class CPhysImpact {
    public const nint m_damage = 0x4B0; // float32
    public const nint m_distance = 0x4B4; // float32
    public const nint m_directionEntityName = 0x4B8; // CUtlSymbolLarge
}

public static class CPhysLength {
    public const nint m_offset = 0x508; // Vector[2]
    public const nint m_vecAttach = 0x520; // Vector
    public const nint m_addLength = 0x52C; // float32
    public const nint m_minLength = 0x530; // float32
    public const nint m_totalLength = 0x534; // float32
    public const nint m_bEnableCollision = 0x538; // bool
}

public static class CPhysMagnet {
    public const nint m_OnMagnetAttach = 0x890; // CEntityIOOutput
    public const nint m_OnMagnetDetach = 0x8B8; // CEntityIOOutput
    public const nint m_massScale = 0x8E0; // float32
    public const nint m_forceLimit = 0x8E4; // float32
    public const nint m_torqueLimit = 0x8E8; // float32
    public const nint m_MagnettedEntities = 0x8F0; // CUtlVector< magnetted_objects_t >
    public const nint m_bActive = 0x908; // bool
    public const nint m_bHasHitSomething = 0x909; // bool
    public const nint m_flTotalMass = 0x90C; // float32
    public const nint m_flRadius = 0x910; // float32
    public const nint m_flNextSuckTime = 0x914; // GameTime_t
    public const nint m_iMaxObjectsAttached = 0x918; // int32
}

public static class CPhysMotor {
    public const nint m_nameAttach = 0x4B0; // CUtlSymbolLarge
    public const nint m_hAttachedObject = 0x4B8; // CHandle< CBaseEntity >
    public const nint m_spinUp = 0x4BC; // float32
    public const nint m_additionalAcceleration = 0x4C0; // float32
    public const nint m_angularAcceleration = 0x4C4; // float32
    public const nint m_lastTime = 0x4C8; // GameTime_t
    public const nint m_motor = 0x4E0; // CMotorController
}

public static class CPhysPulley {
    public const nint m_position2 = 0x508; // Vector
    public const nint m_offset = 0x514; // Vector[2]
    public const nint m_addLength = 0x52C; // float32
    public const nint m_gearRatio = 0x530; // float32
}

public static class CPhysSlideConstraint {
    public const nint m_axisEnd = 0x510; // Vector
    public const nint m_slideFriction = 0x51C; // float32
    public const nint m_systemLoadScale = 0x520; // float32
    public const nint m_initialOffset = 0x524; // float32
    public const nint m_bEnableLinearConstraint = 0x528; // bool
    public const nint m_bEnableAngularConstraint = 0x529; // bool
    public const nint m_flMotorFrequency = 0x52C; // float32
    public const nint m_flMotorDampingRatio = 0x530; // float32
    public const nint m_bUseEntityPivot = 0x534; // bool
    public const nint m_soundInfo = 0x538; // ConstraintSoundInfo
}

public static class CPhysThruster {
    public const nint m_localOrigin = 0x510; // Vector
}

public static class CPhysTorque {
    public const nint m_axis = 0x510; // Vector
}

public static class CPhysWheelConstraint {
    public const nint m_flSuspensionFrequency = 0x508; // float32
    public const nint m_flSuspensionDampingRatio = 0x50C; // float32
    public const nint m_flSuspensionHeightOffset = 0x510; // float32
    public const nint m_bEnableSuspensionLimit = 0x514; // bool
    public const nint m_flMinSuspensionOffset = 0x518; // float32
    public const nint m_flMaxSuspensionOffset = 0x51C; // float32
    public const nint m_bEnableSteeringLimit = 0x520; // bool
    public const nint m_flMinSteeringAngle = 0x524; // float32
    public const nint m_flMaxSteeringAngle = 0x528; // float32
    public const nint m_flSteeringAxisFriction = 0x52C; // float32
    public const nint m_flSpinAxisFriction = 0x530; // float32
}

public static class CPhysicsEntitySolver {
    public const nint m_hMovingEntity = 0x4B8; // CHandle< CBaseEntity >
    public const nint m_hPhysicsBlocker = 0x4BC; // CHandle< CBaseEntity >
    public const nint m_separationDuration = 0x4C0; // float32
    public const nint m_cancelTime = 0x4C4; // GameTime_t
}

public static class CPhysicsProp {
    public const nint m_MotionEnabled = 0xA10; // CEntityIOOutput
    public const nint m_OnAwakened = 0xA38; // CEntityIOOutput
    public const nint m_OnAwake = 0xA60; // CEntityIOOutput
    public const nint m_OnAsleep = 0xA88; // CEntityIOOutput
    public const nint m_OnPlayerUse = 0xAB0; // CEntityIOOutput
    public const nint m_OnPlayerPickup = 0xAD8; // CEntityIOOutput
    public const nint m_OnOutOfWorld = 0xB00; // CEntityIOOutput
    public const nint m_massScale = 0xB28; // float32
    public const nint m_inertiaScale = 0xB2C; // float32
    public const nint m_buoyancyScale = 0xB30; // float32
    public const nint m_damageType = 0xB34; // int32
    public const nint m_damageToEnableMotion = 0xB38; // int32
    public const nint m_flForceToEnableMotion = 0xB3C; // float32
    public const nint m_bThrownByPlayer = 0xB40; // bool
    public const nint m_bDroppedByPlayer = 0xB41; // bool
    public const nint m_bTouchedByPlayer = 0xB42; // bool
    public const nint m_bFirstCollisionAfterLaunch = 0xB43; // bool
    public const nint m_iExploitableByPlayer = 0xB44; // int32
    public const nint m_bHasBeenAwakened = 0xB48; // bool
    public const nint m_bIsOverrideProp = 0xB49; // bool
    public const nint m_fNextCheckDisableMotionContactsTime = 0xB4C; // GameTime_t
    public const nint m_iInitialGlowState = 0xB50; // int32
    public const nint m_nGlowRange = 0xB54; // int32
    public const nint m_nGlowRangeMin = 0xB58; // int32
    public const nint m_glowColor = 0xB5C; // Color
    public const nint m_bForceNavIgnore = 0xB60; // bool
    public const nint m_bNoNavmeshBlocker = 0xB61; // bool
    public const nint m_bForceNpcExclude = 0xB62; // bool
    public const nint m_bShouldAutoConvertBackFromDebris = 0xB63; // bool
    public const nint m_bMuteImpactEffects = 0xB64; // bool
    public const nint m_bAcceptDamageFromHeldObjects = 0xB6C; // bool
    public const nint m_bEnableUseOutput = 0xB6D; // bool
    public const nint m_bAwake = 0xB6E; // bool
    public const nint m_nCollisionGroupOverride = 0xB70; // int32
}

public static class CPhysicsPropRespawnable {
    public const nint m_vOriginalSpawnOrigin = 0xB78; // Vector
    public const nint m_vOriginalSpawnAngles = 0xB84; // QAngle
    public const nint m_vOriginalMins = 0xB90; // Vector
    public const nint m_vOriginalMaxs = 0xB9C; // Vector
    public const nint m_flRespawnDuration = 0xBA8; // float32
}

public static class CPhysicsShake {
    public const nint m_force = 0x8; // Vector
}

public static class CPhysicsSpring {
    public const nint m_flFrequency = 0x4B8; // float32
    public const nint m_flDampingRatio = 0x4BC; // float32
    public const nint m_flRestLength = 0x4C0; // float32
    public const nint m_nameAttachStart = 0x4C8; // CUtlSymbolLarge
    public const nint m_nameAttachEnd = 0x4D0; // CUtlSymbolLarge
    public const nint m_start = 0x4D8; // Vector
    public const nint m_end = 0x4E4; // Vector
    public const nint m_teleportTick = 0x4F0; // uint32
}

public static class CPhysicsWire {
    public const nint m_nDensity = 0x4B0; // int32
}

public static class CPlantedC4 {
    public const nint m_bBombTicking = 0x890; // bool
    public const nint m_flC4Blow = 0x894; // GameTime_t
    public const nint m_nBombSite = 0x898; // int32
    public const nint m_nSourceSoundscapeHash = 0x89C; // int32
    public const nint m_OnBombDefused = 0x8A0; // CEntityIOOutput
    public const nint m_OnBombBeginDefuse = 0x8C8; // CEntityIOOutput
    public const nint m_OnBombDefuseAborted = 0x8F0; // CEntityIOOutput
    public const nint m_bCannotBeDefused = 0x918; // bool
    public const nint m_entitySpottedState = 0x920; // EntitySpottedState_t
    public const nint m_nSpotRules = 0x938; // int32
    public const nint m_bTrainingPlacedByPlayer = 0x93C; // bool
    public const nint m_bHasExploded = 0x93D; // bool
    public const nint m_flTimerLength = 0x940; // float32
    public const nint m_bBeingDefused = 0x944; // bool
    public const nint m_fLastDefuseTime = 0x94C; // GameTime_t
    public const nint m_flDefuseLength = 0x954; // float32
    public const nint m_flDefuseCountDown = 0x958; // GameTime_t
    public const nint m_bBombDefused = 0x95C; // bool
    public const nint m_hBombDefuser = 0x960; // CHandle< CCSPlayerPawn >
    public const nint m_hControlPanel = 0x964; // CHandle< CBaseEntity >
    public const nint m_iProgressBarTime = 0x968; // int32
    public const nint m_bVoiceAlertFired = 0x96C; // bool
    public const nint m_bVoiceAlertPlayed = 0x96D; // bool[4]
    public const nint m_flNextBotBeepTime = 0x974; // GameTime_t
    public const nint m_bPlantedAfterPickup = 0x97C; // bool
    public const nint m_angCatchUpToPlayerEye = 0x980; // QAngle
    public const nint m_flLastSpinDetectionTime = 0x98C; // GameTime_t
}

public static class CPlatTrigger {
    public const nint m_pPlatform = 0x700; // CHandle< CFuncPlat >
}

public static class CPlayerControllerComponent {
    public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
}

public static class CPlayerPawnComponent {
    public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
}

public static class CPlayerPing {
    public const nint m_hPlayer = 0x4B8; // CHandle< CCSPlayerPawn >
    public const nint m_hPingedEntity = 0x4BC; // CHandle< CBaseEntity >
    public const nint m_iType = 0x4C0; // int32
    public const nint m_bUrgent = 0x4C4; // bool
    public const nint m_szPlaceName = 0x4C5; // char[18]
}

public static class CPlayerSprayDecal {
    public const nint m_nUniqueID = 0x700; // int32
    public const nint m_unAccountID = 0x704; // uint32
    public const nint m_unTraceID = 0x708; // uint32
    public const nint m_rtGcTime = 0x70C; // uint32
    public const nint m_vecEndPos = 0x710; // Vector
    public const nint m_vecStart = 0x71C; // Vector
    public const nint m_vecLeft = 0x728; // Vector
    public const nint m_vecNormal = 0x734; // Vector
    public const nint m_nPlayer = 0x740; // int32
    public const nint m_nEntity = 0x744; // int32
    public const nint m_nHitbox = 0x748; // int32
    public const nint m_flCreationTime = 0x74C; // float32
    public const nint m_nTintID = 0x750; // int32
    public const nint m_nVersion = 0x754; // uint8
    public const nint m_ubSignature = 0x755; // uint8[128]
}

public static class CPlayerVisibility {
    public const nint m_flVisibilityStrength = 0x4B0; // float32
    public const nint m_flFogDistanceMultiplier = 0x4B4; // float32
    public const nint m_flFogMaxDensityMultiplier = 0x4B8; // float32
    public const nint m_flFadeTime = 0x4BC; // float32
    public const nint m_bStartDisabled = 0x4C0; // bool
    public const nint m_bIsEnabled = 0x4C1; // bool
}

public static class CPlayer_CameraServices {
    public const nint m_vecCsViewPunchAngle = 0x40; // QAngle
    public const nint m_nCsViewPunchAngleTick = 0x4C; // GameTick_t
    public const nint m_flCsViewPunchAngleTickRatio = 0x50; // float32
    public const nint m_PlayerFog = 0x58; // fogplayerparams_t
    public const nint m_hColorCorrectionCtrl = 0x98; // CHandle< CColorCorrection >
    public const nint m_hViewEntity = 0x9C; // CHandle< CBaseEntity >
    public const nint m_hTonemapController = 0xA0; // CHandle< CTonemapController2 >
    public const nint m_audio = 0xA8; // audioparams_t
    public const nint m_PostProcessingVolumes = 0x120; // CNetworkUtlVectorBase< CHandle< CPostProcessingVolume > >
    public const nint m_flOldPlayerZ = 0x138; // float32
    public const nint m_flOldPlayerViewOffsetZ = 0x13C; // float32
    public const nint m_hTriggerSoundscapeList = 0x158; // CUtlVector< CHandle< CEnvSoundscapeTriggerable > >
}

public static class CPlayer_MovementServices {
    public const nint m_nImpulse = 0x40; // int32
    public const nint m_nButtons = 0x48; // CInButtonState
    public const nint m_nQueuedButtonDownMask = 0x68; // uint64
    public const nint m_nQueuedButtonChangeMask = 0x70; // uint64
    public const nint m_nButtonDoublePressed = 0x78; // uint64
    public const nint m_pButtonPressedCmdNumber = 0x80; // uint32[64]
    public const nint m_nLastCommandNumberProcessed = 0x180; // uint32
    public const nint m_nToggleButtonDownMask = 0x188; // uint64
    public const nint m_flMaxspeed = 0x190; // float32
    public const nint m_arrForceSubtickMoveWhen = 0x194; // float32[4]
    public const nint m_flForwardMove = 0x1A4; // float32
    public const nint m_flLeftMove = 0x1A8; // float32
    public const nint m_flUpMove = 0x1AC; // float32
    public const nint m_vecLastMovementImpulses = 0x1B0; // Vector
    public const nint m_vecOldViewAngles = 0x1BC; // QAngle
}

public static class CPlayer_MovementServices_Humanoid {
    public const nint m_flStepSoundTime = 0x1D0; // float32
    public const nint m_flFallVelocity = 0x1D4; // float32
    public const nint m_bInCrouch = 0x1D8; // bool
    public const nint m_nCrouchState = 0x1DC; // uint32
    public const nint m_flCrouchTransitionStartTime = 0x1E0; // GameTime_t
    public const nint m_bDucked = 0x1E4; // bool
    public const nint m_bDucking = 0x1E5; // bool
    public const nint m_bInDuckJump = 0x1E6; // bool
    public const nint m_groundNormal = 0x1E8; // Vector
    public const nint m_flSurfaceFriction = 0x1F4; // float32
    public const nint m_surfaceProps = 0x1F8; // CUtlStringToken
    public const nint m_nStepside = 0x208; // int32
    public const nint m_iTargetVolume = 0x20C; // int32
    public const nint m_vecSmoothedVelocity = 0x210; // Vector
}

public static class CPlayer_ObserverServices {
    public const nint m_iObserverMode = 0x40; // uint8
    public const nint m_hObserverTarget = 0x44; // CHandle< CBaseEntity >
    public const nint m_iObserverLastMode = 0x48; // ObserverMode_t
    public const nint m_bForcedObserverMode = 0x4C; // bool
}

public static class CPlayer_WeaponServices {
    public const nint m_bAllowSwitchToNoWeapon = 0x40; // bool
    public const nint m_hMyWeapons = 0x48; // CNetworkUtlVectorBase< CHandle< CBasePlayerWeapon > >
    public const nint m_hActiveWeapon = 0x60; // CHandle< CBasePlayerWeapon >
    public const nint m_hLastWeapon = 0x64; // CHandle< CBasePlayerWeapon >
    public const nint m_iAmmo = 0x68; // uint16[32]
    public const nint m_bPreventWeaponPickup = 0xA8; // bool
}

public static class CPointAngleSensor {
    public const nint m_bDisabled = 0x4B0; // bool
    public const nint m_nLookAtName = 0x4B8; // CUtlSymbolLarge
    public const nint m_hTargetEntity = 0x4C0; // CHandle< CBaseEntity >
    public const nint m_hLookAtEntity = 0x4C4; // CHandle< CBaseEntity >
    public const nint m_flDuration = 0x4C8; // float32
    public const nint m_flDotTolerance = 0x4CC; // float32
    public const nint m_flFacingTime = 0x4D0; // GameTime_t
    public const nint m_bFired = 0x4D4; // bool
    public const nint m_OnFacingLookat = 0x4D8; // CEntityIOOutput
    public const nint m_OnNotFacingLookat = 0x500; // CEntityIOOutput
    public const nint m_TargetDir = 0x528; // CEntityOutputTemplate< Vector >
    public const nint m_FacingPercentage = 0x550; // CEntityOutputTemplate< float32 >
}

public static class CPointAngularVelocitySensor {
    public const nint m_hTargetEntity = 0x4B0; // CHandle< CBaseEntity >
    public const nint m_flThreshold = 0x4B4; // float32
    public const nint m_nLastCompareResult = 0x4B8; // int32
    public const nint m_nLastFireResult = 0x4BC; // int32
    public const nint m_flFireTime = 0x4C0; // GameTime_t
    public const nint m_flFireInterval = 0x4C4; // float32
    public const nint m_flLastAngVelocity = 0x4C8; // float32
    public const nint m_lastOrientation = 0x4CC; // QAngle
    public const nint m_vecAxis = 0x4D8; // Vector
    public const nint m_bUseHelper = 0x4E4; // bool
    public const nint m_AngularVelocity = 0x4E8; // CEntityOutputTemplate< float32 >
    public const nint m_OnLessThan = 0x510; // CEntityIOOutput
    public const nint m_OnLessThanOrEqualTo = 0x538; // CEntityIOOutput
    public const nint m_OnGreaterThan = 0x560; // CEntityIOOutput
    public const nint m_OnGreaterThanOrEqualTo = 0x588; // CEntityIOOutput
    public const nint m_OnEqualTo = 0x5B0; // CEntityIOOutput
}

public static class CPointCamera {
    public const nint m_FOV = 0x4B0; // float32
    public const nint m_Resolution = 0x4B4; // float32
    public const nint m_bFogEnable = 0x4B8; // bool
    public const nint m_FogColor = 0x4B9; // Color
    public const nint m_flFogStart = 0x4C0; // float32
    public const nint m_flFogEnd = 0x4C4; // float32
    public const nint m_flFogMaxDensity = 0x4C8; // float32
    public const nint m_bActive = 0x4CC; // bool
    public const nint m_bUseScreenAspectRatio = 0x4CD; // bool
    public const nint m_flAspectRatio = 0x4D0; // float32
    public const nint m_bNoSky = 0x4D4; // bool
    public const nint m_fBrightness = 0x4D8; // float32
    public const nint m_flZFar = 0x4DC; // float32
    public const nint m_flZNear = 0x4E0; // float32
    public const nint m_bCanHLTVUse = 0x4E4; // bool
    public const nint m_bDofEnabled = 0x4E5; // bool
    public const nint m_flDofNearBlurry = 0x4E8; // float32
    public const nint m_flDofNearCrisp = 0x4EC; // float32
    public const nint m_flDofFarCrisp = 0x4F0; // float32
    public const nint m_flDofFarBlurry = 0x4F4; // float32
    public const nint m_flDofTiltToGround = 0x4F8; // float32
    public const nint m_TargetFOV = 0x4FC; // float32
    public const nint m_DegreesPerSecond = 0x500; // float32
    public const nint m_bIsOn = 0x504; // bool
    public const nint m_pNext = 0x508; // CPointCamera*
}

public static class CPointCameraVFOV {
    public const nint m_flVerticalFOV = 0x510; // float32
}

public static class CPointClientUIDialog {
    public const nint m_hActivator = 0x8B0; // CHandle< CBaseEntity >
    public const nint m_bStartEnabled = 0x8B4; // bool
}

public static class CPointClientUIWorldPanel {
    public const nint m_bIgnoreInput = 0x8B0; // bool
    public const nint m_bLit = 0x8B1; // bool
    public const nint m_bFollowPlayerAcrossTeleport = 0x8B2; // bool
    public const nint m_flWidth = 0x8B4; // float32
    public const nint m_flHeight = 0x8B8; // float32
    public const nint m_flDPI = 0x8BC; // float32
    public const nint m_flInteractDistance = 0x8C0; // float32
    public const nint m_flDepthOffset = 0x8C4; // float32
    public const nint m_unOwnerContext = 0x8C8; // uint32
    public const nint m_unHorizontalAlign = 0x8CC; // uint32
    public const nint m_unVerticalAlign = 0x8D0; // uint32
    public const nint m_unOrientation = 0x8D4; // uint32
    public const nint m_bAllowInteractionFromAllSceneWorlds = 0x8D8; // bool
    public const nint m_vecCSSClasses = 0x8E0; // CNetworkUtlVectorBase< CUtlSymbolLarge >
    public const nint m_bOpaque = 0x8F8; // bool
    public const nint m_bNoDepth = 0x8F9; // bool
    public const nint m_bRenderBackface = 0x8FA; // bool
    public const nint m_bUseOffScreenIndicator = 0x8FB; // bool
    public const nint m_bExcludeFromSaveGames = 0x8FC; // bool
    public const nint m_bGrabbable = 0x8FD; // bool
    public const nint m_bOnlyRenderToTexture = 0x8FE; // bool
    public const nint m_bDisableMipGen = 0x8FF; // bool
    public const nint m_nExplicitImageLayout = 0x900; // int32
}

public static class CPointClientUIWorldTextPanel {
    public const nint m_messageText = 0x908; // char[512]
}

public static class CPointCommentaryNode {
    public const nint m_iszPreCommands = 0x890; // CUtlSymbolLarge
    public const nint m_iszPostCommands = 0x898; // CUtlSymbolLarge
    public const nint m_iszCommentaryFile = 0x8A0; // CUtlSymbolLarge
    public const nint m_iszViewTarget = 0x8A8; // CUtlSymbolLarge
    public const nint m_hViewTarget = 0x8B0; // CHandle< CBaseEntity >
    public const nint m_hViewTargetAngles = 0x8B4; // CHandle< CBaseEntity >
    public const nint m_iszViewPosition = 0x8B8; // CUtlSymbolLarge
    public const nint m_hViewPosition = 0x8C0; // CHandle< CBaseEntity >
    public const nint m_hViewPositionMover = 0x8C4; // CHandle< CBaseEntity >
    public const nint m_bPreventMovement = 0x8C8; // bool
    public const nint m_bUnderCrosshair = 0x8C9; // bool
    public const nint m_bUnstoppable = 0x8CA; // bool
    public const nint m_flFinishedTime = 0x8CC; // GameTime_t
    public const nint m_vecFinishOrigin = 0x8D0; // Vector
    public const nint m_vecOriginalAngles = 0x8DC; // QAngle
    public const nint m_vecFinishAngles = 0x8E8; // QAngle
    public const nint m_bPreventChangesWhileMoving = 0x8F4; // bool
    public const nint m_bDisabled = 0x8F5; // bool
    public const nint m_vecTeleportOrigin = 0x8F8; // Vector
    public const nint m_flAbortedPlaybackAt = 0x904; // GameTime_t
    public const nint m_pOnCommentaryStarted = 0x908; // CEntityIOOutput
    public const nint m_pOnCommentaryStopped = 0x930; // CEntityIOOutput
    public const nint m_bActive = 0x958; // bool
    public const nint m_flStartTime = 0x95C; // GameTime_t
    public const nint m_flStartTimeInCommentary = 0x960; // float32
    public const nint m_iszTitle = 0x968; // CUtlSymbolLarge
    public const nint m_iszSpeakers = 0x970; // CUtlSymbolLarge
    public const nint m_iNodeNumber = 0x978; // int32
    public const nint m_iNodeNumberMax = 0x97C; // int32
    public const nint m_bListenedTo = 0x980; // bool
}

public static class CPointEntityFinder {
    public const nint m_hEntity = 0x4B0; // CHandle< CBaseEntity >
    public const nint m_iFilterName = 0x4B8; // CUtlSymbolLarge
    public const nint m_hFilter = 0x4C0; // CHandle< CBaseFilter >
    public const nint m_iRefName = 0x4C8; // CUtlSymbolLarge
    public const nint m_hReference = 0x4D0; // CHandle< CBaseEntity >
    public const nint m_FindMethod = 0x4D4; // EntFinderMethod_t
    public const nint m_OnFoundEntity = 0x4D8; // CEntityIOOutput
}

public static class CPointGamestatsCounter {
    public const nint m_strStatisticName = 0x4B0; // CUtlSymbolLarge
    public const nint m_bDisabled = 0x4B8; // bool
}

public static class CPointGiveAmmo {
    public const nint m_pActivator = 0x4B0; // CHandle< CBaseEntity >
}

public static class CPointHurt {
    public const nint m_nDamage = 0x4B0; // int32
    public const nint m_bitsDamageType = 0x4B4; // int32
    public const nint m_flRadius = 0x4B8; // float32
    public const nint m_flDelay = 0x4BC; // float32
    public const nint m_strTarget = 0x4C0; // CUtlSymbolLarge
    public const nint m_pActivator = 0x4C8; // CHandle< CBaseEntity >
}

public static class CPointPrefab {
    public const nint m_targetMapName = 0x4B0; // CUtlSymbolLarge
    public const nint m_forceWorldGroupID = 0x4B8; // CUtlSymbolLarge
    public const nint m_associatedRelayTargetName = 0x4C0; // CUtlSymbolLarge
    public const nint m_fixupNames = 0x4C8; // bool
    public const nint m_bLoadDynamic = 0x4C9; // bool
    public const nint m_associatedRelayEntity = 0x4CC; // CHandle< CPointPrefab >
}

public static class CPointProximitySensor {
    public const nint m_bDisabled = 0x4B0; // bool
    public const nint m_hTargetEntity = 0x4B4; // CHandle< CBaseEntity >
    public const nint m_Distance = 0x4B8; // CEntityOutputTemplate< float32 >
}

public static class CPointPulse {
    public const nint m_sNameFixupStaticPrefix = 0x5C8; // CUtlSymbolLarge
    public const nint m_sNameFixupParent = 0x5D0; // CUtlSymbolLarge
    public const nint m_sNameFixupLocal = 0x5D8; // CUtlSymbolLarge
}

public static class CPointPush {
    public const nint m_bEnabled = 0x4B0; // bool
    public const nint m_flMagnitude = 0x4B4; // float32
    public const nint m_flRadius = 0x4B8; // float32
    public const nint m_flInnerRadius = 0x4BC; // float32
    public const nint m_flConeOfInfluence = 0x4C0; // float32
    public const nint m_iszFilterName = 0x4C8; // CUtlSymbolLarge
    public const nint m_hFilter = 0x4D0; // CHandle< CBaseFilter >
}

public static class CPointTeleport {
    public const nint m_vSaveOrigin = 0x4B0; // Vector
    public const nint m_vSaveAngles = 0x4BC; // QAngle
    public const nint m_bTeleportParentedEntities = 0x4C8; // bool
    public const nint m_bTeleportUseCurrentAngle = 0x4C9; // bool
}

public static class CPointTemplate {
    public const nint m_iszWorldName = 0x4B0; // CUtlSymbolLarge
    public const nint m_iszSource2EntityLumpName = 0x4B8; // CUtlSymbolLarge
    public const nint m_iszEntityFilterName = 0x4C0; // CUtlSymbolLarge
    public const nint m_flTimeoutInterval = 0x4C8; // float32
    public const nint m_bAsynchronouslySpawnEntities = 0x4CC; // bool
    public const nint m_pOutputOnSpawned = 0x4D0; // CEntityIOOutput
    public const nint m_clientOnlyEntityBehavior = 0x4F8; // PointTemplateClientOnlyEntityBehavior_t
    public const nint m_ownerSpawnGroupType = 0x4FC; // PointTemplateOwnerSpawnGroupType_t
    public const nint m_createdSpawnGroupHandles = 0x500; // CUtlVector< uint32 >
    public const nint m_SpawnedEntityHandles = 0x518; // CUtlVector< CEntityHandle >
    public const nint m_ScriptSpawnCallback = 0x530; // HSCRIPT
    public const nint m_ScriptCallbackScope = 0x538; // HSCRIPT
}

public static class CPointValueRemapper {
    public const nint m_bDisabled = 0x4B0; // bool
    public const nint m_bUpdateOnClient = 0x4B1; // bool
    public const nint m_nInputType = 0x4B4; // ValueRemapperInputType_t
    public const nint m_iszRemapLineStartName = 0x4B8; // CUtlSymbolLarge
    public const nint m_iszRemapLineEndName = 0x4C0; // CUtlSymbolLarge
    public const nint m_hRemapLineStart = 0x4C8; // CHandle< CBaseEntity >
    public const nint m_hRemapLineEnd = 0x4CC; // CHandle< CBaseEntity >
    public const nint m_flMaximumChangePerSecond = 0x4D0; // float32
    public const nint m_flDisengageDistance = 0x4D4; // float32
    public const nint m_flEngageDistance = 0x4D8; // float32
    public const nint m_bRequiresUseKey = 0x4DC; // bool
    public const nint m_nOutputType = 0x4E0; // ValueRemapperOutputType_t
    public const nint m_iszOutputEntityName = 0x4E8; // CUtlSymbolLarge
    public const nint m_iszOutputEntity2Name = 0x4F0; // CUtlSymbolLarge
    public const nint m_iszOutputEntity3Name = 0x4F8; // CUtlSymbolLarge
    public const nint m_iszOutputEntity4Name = 0x500; // CUtlSymbolLarge
    public const nint m_hOutputEntities = 0x508; // CNetworkUtlVectorBase< CHandle< CBaseEntity > >
    public const nint m_nHapticsType = 0x520; // ValueRemapperHapticsType_t
    public const nint m_nMomentumType = 0x524; // ValueRemapperMomentumType_t
    public const nint m_flMomentumModifier = 0x528; // float32
    public const nint m_flSnapValue = 0x52C; // float32
    public const nint m_flCurrentMomentum = 0x530; // float32
    public const nint m_nRatchetType = 0x534; // ValueRemapperRatchetType_t
    public const nint m_flRatchetOffset = 0x538; // float32
    public const nint m_flInputOffset = 0x53C; // float32
    public const nint m_bEngaged = 0x540; // bool
    public const nint m_bFirstUpdate = 0x541; // bool
    public const nint m_flPreviousValue = 0x544; // float32
    public const nint m_flPreviousUpdateTickTime = 0x548; // GameTime_t
    public const nint m_vecPreviousTestPoint = 0x54C; // Vector
    public const nint m_hUsingPlayer = 0x558; // CHandle< CBasePlayerPawn >
    public const nint m_flCustomOutputValue = 0x55C; // float32
    public const nint m_iszSoundEngage = 0x560; // CUtlSymbolLarge
    public const nint m_iszSoundDisengage = 0x568; // CUtlSymbolLarge
    public const nint m_iszSoundReachedValueZero = 0x570; // CUtlSymbolLarge
    public const nint m_iszSoundReachedValueOne = 0x578; // CUtlSymbolLarge
    public const nint m_iszSoundMovingLoop = 0x580; // CUtlSymbolLarge
    public const nint m_Position = 0x590; // CEntityOutputTemplate< float32 >
    public const nint m_PositionDelta = 0x5B8; // CEntityOutputTemplate< float32 >
    public const nint m_OnReachedValueZero = 0x5E0; // CEntityIOOutput
    public const nint m_OnReachedValueOne = 0x608; // CEntityIOOutput
    public const nint m_OnReachedValueCustom = 0x630; // CEntityIOOutput
    public const nint m_OnEngage = 0x658; // CEntityIOOutput
    public const nint m_OnDisengage = 0x680; // CEntityIOOutput
}

public static class CPointVelocitySensor {
    public const nint m_hTargetEntity = 0x4B0; // CHandle< CBaseEntity >
    public const nint m_vecAxis = 0x4B4; // Vector
    public const nint m_bEnabled = 0x4C0; // bool
    public const nint m_fPrevVelocity = 0x4C4; // float32
    public const nint m_flAvgInterval = 0x4C8; // float32
    public const nint m_Velocity = 0x4D0; // CEntityOutputTemplate< float32 >
}

public static class CPointWorldText {
    public const nint m_messageText = 0x700; // char[512]
    public const nint m_FontName = 0x900; // char[64]
    public const nint m_bEnabled = 0x940; // bool
    public const nint m_bFullbright = 0x941; // bool
    public const nint m_flWorldUnitsPerPx = 0x944; // float32
    public const nint m_flFontSize = 0x948; // float32
    public const nint m_flDepthOffset = 0x94C; // float32
    public const nint m_Color = 0x950; // Color
    public const nint m_nJustifyHorizontal = 0x954; // PointWorldTextJustifyHorizontal_t
    public const nint m_nJustifyVertical = 0x958; // PointWorldTextJustifyVertical_t
    public const nint m_nReorientMode = 0x95C; // PointWorldTextReorientMode_t
}

public static class CPostProcessingVolume {
    public const nint m_hPostSettings = 0x8B8; // CStrongHandle< InfoForResourceTypeCPostProcessingResource >
    public const nint m_flFadeDuration = 0x8C0; // float32
    public const nint m_flMinLogExposure = 0x8C4; // float32
    public const nint m_flMaxLogExposure = 0x8C8; // float32
    public const nint m_flMinExposure = 0x8CC; // float32
    public const nint m_flMaxExposure = 0x8D0; // float32
    public const nint m_flExposureCompensation = 0x8D4; // float32
    public const nint m_flExposureFadeSpeedUp = 0x8D8; // float32
    public const nint m_flExposureFadeSpeedDown = 0x8DC; // float32
    public const nint m_flTonemapEVSmoothingRange = 0x8E0; // float32
    public const nint m_bMaster = 0x8E4; // bool
    public const nint m_bExposureControl = 0x8E5; // bool
    public const nint m_flRate = 0x8E8; // float32
    public const nint m_flTonemapPercentTarget = 0x8EC; // float32
    public const nint m_flTonemapPercentBrightPixels = 0x8F0; // float32
    public const nint m_flTonemapMinAvgLum = 0x8F4; // float32
}

public static class CPrecipitationVData {
    public const nint m_szParticlePrecipitationEffect = 0x28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > >
    public const nint m_flInnerDistance = 0x108; // float32
    public const nint m_nAttachType = 0x10C; // ParticleAttachment_t
    public const nint m_bBatchSameVolumeType = 0x110; // bool
    public const nint m_nRTEnvCP = 0x114; // int32
    public const nint m_nRTEnvCPComponent = 0x118; // int32
    public const nint m_szModifier = 0x120; // CUtlString
}

public static class CProjectedDecal {
    public const nint m_nTexture = 0x4B0; // int32
    public const nint m_flDistance = 0x4B4; // float32
}

public static class CPropDoorRotating {
    public const nint m_vecAxis = 0xD98; // Vector
    public const nint m_flDistance = 0xDA4; // float32
    public const nint m_eSpawnPosition = 0xDA8; // PropDoorRotatingSpawnPos_t
    public const nint m_eOpenDirection = 0xDAC; // PropDoorRotatingOpenDirection_e
    public const nint m_eCurrentOpenDirection = 0xDB0; // PropDoorRotatingOpenDirection_e
    public const nint m_flAjarAngle = 0xDB4; // float32
    public const nint m_angRotationAjarDeprecated = 0xDB8; // QAngle
    public const nint m_angRotationClosed = 0xDC4; // QAngle
    public const nint m_angRotationOpenForward = 0xDD0; // QAngle
    public const nint m_angRotationOpenBack = 0xDDC; // QAngle
    public const nint m_angGoal = 0xDE8; // QAngle
    public const nint m_vecForwardBoundsMin = 0xDF4; // Vector
    public const nint m_vecForwardBoundsMax = 0xE00; // Vector
    public const nint m_vecBackBoundsMin = 0xE0C; // Vector
    public const nint m_vecBackBoundsMax = 0xE18; // Vector
    public const nint m_bAjarDoorShouldntAlwaysOpen = 0xE24; // bool
    public const nint m_hEntityBlocker = 0xE28; // CHandle< CEntityBlocker >
}

public static class CPropDoorRotatingBreakable {
    public const nint m_bBreakable = 0xE30; // bool
    public const nint m_isAbleToCloseAreaPortals = 0xE31; // bool
    public const nint m_currentDamageState = 0xE34; // int32
    public const nint m_damageStates = 0xE38; // CUtlVector< CUtlSymbolLarge >
}

public static class CPulseCell_Inflow_GameEvent {
    public const nint m_EventName = 0x70; // CBufferString
}

public static class CPulseCell_Outflow_PlayVCD {
    public const nint m_vcdFilename = 0x48; // CUtlString
    public const nint m_OnFinished = 0x50; // CPulse_OutflowConnection
    public const nint m_Triggers = 0x60; // CUtlVector< CPulse_OutflowConnection >
}

public static class CPulseCell_SoundEventStart {
    public const nint m_Type = 0x48; // SoundEventStartType_t
}

public static class CPulseCell_Step_EntFire {
    public const nint m_Input = 0x48; // CUtlString
}

public static class CPulseCell_Step_SetAnimGraphParam {
    public const nint m_ParamName = 0x48; // CUtlString
}

public static class CPulseCell_Value_FindEntByName {
    public const nint m_EntityType = 0x48; // CUtlString
}

public static class CRR_Response {
    public const nint m_Type = 0x0; // uint8
    public const nint m_szResponseName = 0x1; // char[192]
    public const nint m_szMatchingRule = 0xC1; // char[128]
    public const nint m_Params = 0x148; // ResponseParams
    public const nint m_fMatchScore = 0x168; // float32
    public const nint m_szSpeakerContext = 0x170; // char*
    public const nint m_szWorldContext = 0x178; // char*
    public const nint m_Followup = 0x180; // ResponseFollowup
    public const nint m_pchCriteriaNames = 0x1B8; // CUtlVector< CUtlSymbol >
    public const nint m_pchCriteriaValues = 0x1D0; // CUtlVector< char* >
}

public static class CRagdollConstraint {
    public const nint m_xmin = 0x508; // float32
    public const nint m_xmax = 0x50C; // float32
    public const nint m_ymin = 0x510; // float32
    public const nint m_ymax = 0x514; // float32
    public const nint m_zmin = 0x518; // float32
    public const nint m_zmax = 0x51C; // float32
    public const nint m_xfriction = 0x520; // float32
    public const nint m_yfriction = 0x524; // float32
    public const nint m_zfriction = 0x528; // float32
}

public static class CRagdollMagnet {
    public const nint m_bDisabled = 0x4B0; // bool
    public const nint m_radius = 0x4B4; // float32
    public const nint m_force = 0x4B8; // float32
    public const nint m_axis = 0x4BC; // Vector
}

public static class CRagdollManager {
    public const nint m_iCurrentMaxRagdollCount = 0x4B0; // int8
    public const nint m_iMaxRagdollCount = 0x4B4; // int32
    public const nint m_bSaveImportant = 0x4B8; // bool
}

public static class CRagdollProp {
    public const nint m_ragdoll = 0x898; // ragdoll_t
    public const nint m_bStartDisabled = 0x8D0; // bool
    public const nint m_ragPos = 0x8D8; // CNetworkUtlVectorBase< Vector >
    public const nint m_ragAngles = 0x8F0; // CNetworkUtlVectorBase< QAngle >
    public const nint m_hRagdollSource = 0x908; // CHandle< CBaseEntity >
    public const nint m_lastUpdateTickCount = 0x90C; // uint32
    public const nint m_allAsleep = 0x910; // bool
    public const nint m_bFirstCollisionAfterLaunch = 0x911; // bool
    public const nint m_hDamageEntity = 0x914; // CHandle< CBaseEntity >
    public const nint m_hKiller = 0x918; // CHandle< CBaseEntity >
    public const nint m_hPhysicsAttacker = 0x91C; // CHandle< CBasePlayerPawn >
    public const nint m_flLastPhysicsInfluenceTime = 0x920; // GameTime_t
    public const nint m_flFadeOutStartTime = 0x924; // GameTime_t
    public const nint m_flFadeTime = 0x928; // float32
    public const nint m_vecLastOrigin = 0x92C; // Vector
    public const nint m_flAwakeTime = 0x938; // GameTime_t
    public const nint m_flLastOriginChangeTime = 0x93C; // GameTime_t
    public const nint m_nBloodColor = 0x940; // int32
    public const nint m_strOriginClassName = 0x948; // CUtlSymbolLarge
    public const nint m_strSourceClassName = 0x950; // CUtlSymbolLarge
    public const nint m_bHasBeenPhysgunned = 0x958; // bool
    public const nint m_bShouldTeleportPhysics = 0x959; // bool
    public const nint m_flBlendWeight = 0x95C; // float32
    public const nint m_flDefaultFadeScale = 0x960; // float32
    public const nint m_ragdollMins = 0x968; // CUtlVector< Vector >
    public const nint m_ragdollMaxs = 0x980; // CUtlVector< Vector >
    public const nint m_bShouldDeleteActivationRecord = 0x998; // bool
    public const nint m_bValidatePoweredRagdollPose = 0x9F8; // bool
}

public static class CRagdollPropAttached {
    public const nint m_boneIndexAttached = 0xA38; // uint32
    public const nint m_ragdollAttachedObjectIndex = 0xA3C; // uint32
    public const nint m_attachmentPointBoneSpace = 0xA40; // Vector
    public const nint m_attachmentPointRagdollSpace = 0xA4C; // Vector
    public const nint m_bShouldDetach = 0xA58; // bool
    public const nint m_bShouldDeleteAttachedActivationRecord = 0xA68; // bool
}

public static class CRandSimTimer {
    public const nint m_minInterval = 0x8; // float32
    public const nint m_maxInterval = 0xC; // float32
}

public static class CRandStopwatch {
    public const nint m_minInterval = 0xC; // float32
    public const nint m_maxInterval = 0x10; // float32
}

public static class CRangeFloat {
    public const nint m_pValue = 0x0; // float32[2]
}

public static class CRangeInt {
    public const nint m_pValue = 0x0; // int32[2]
}

public static class CRectLight {
    public const nint m_bShowLight = 0x938; // bool
}

public static class CRemapFloat {
    public const nint m_pValue = 0x0; // float32[4]
}

public static class CRenderComponent {
    public const nint __m_pChainEntity = 0x10; // CNetworkVarChainer
    public const nint m_bIsRenderingWithViewModels = 0x50; // bool
    public const nint m_nSplitscreenFlags = 0x54; // uint32
    public const nint m_bEnableRendering = 0x60; // bool
    public const nint m_bInterpolationReadyToDraw = 0xB0; // bool
}

public static class CResponseCriteriaSet {
    public const nint m_nNumPrefixedContexts = 0x28; // int32
    public const nint m_bOverrideOnAppend = 0x2C; // bool
}

public static class CResponseQueue {
    public const nint m_ExpresserTargets = 0x50; // CUtlVector< CAI_Expresser* >
}

public static class CResponseQueue_CDeferredResponse {
    public const nint m_contexts = 0x10; // CResponseCriteriaSet
    public const nint m_fDispatchTime = 0x40; // float32
    public const nint m_hIssuer = 0x44; // CHandle< CBaseEntity >
    public const nint m_response = 0x50; // CRR_Response
    public const nint m_bResponseValid = 0x238; // bool
}

public static class CRetakeGameRules {
    public const nint m_nMatchSeed = 0xF8; // int32
    public const nint m_bBlockersPresent = 0xFC; // bool
    public const nint m_bRoundInProgress = 0xFD; // bool
    public const nint m_iFirstSecondHalfRound = 0x100; // int32
    public const nint m_iBombSite = 0x104; // int32
}

public static class CRevertSaved {
    public const nint m_loadTime = 0x700; // float32
    public const nint m_Duration = 0x704; // float32
    public const nint m_HoldTime = 0x708; // float32
}

public static class CRopeKeyframe {
    public const nint m_RopeFlags = 0x708; // uint16
    public const nint m_iNextLinkName = 0x710; // CUtlSymbolLarge
    public const nint m_Slack = 0x718; // int16
    public const nint m_Width = 0x71C; // float32
    public const nint m_TextureScale = 0x720; // float32
    public const nint m_nSegments = 0x724; // uint8
    public const nint m_bConstrainBetweenEndpoints = 0x725; // bool
    public const nint m_strRopeMaterialModel = 0x728; // CUtlSymbolLarge
    public const nint m_iRopeMaterialModelIndex = 0x730; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    public const nint m_Subdiv = 0x738; // uint8
    public const nint m_nChangeCount = 0x739; // uint8
    public const nint m_RopeLength = 0x73A; // int16
    public const nint m_fLockedPoints = 0x73C; // uint8
    public const nint m_bCreatedFromMapFile = 0x73D; // bool
    public const nint m_flScrollSpeed = 0x740; // float32
    public const nint m_bStartPointValid = 0x744; // bool
    public const nint m_bEndPointValid = 0x745; // bool
    public const nint m_hStartPoint = 0x748; // CHandle< CBaseEntity >
    public const nint m_hEndPoint = 0x74C; // CHandle< CBaseEntity >
    public const nint m_iStartAttachment = 0x750; // AttachmentHandle_t
    public const nint m_iEndAttachment = 0x751; // AttachmentHandle_t
}

public static class CRotDoor {
    public const nint m_bSolidBsp = 0x988; // bool
}

public static class CRuleEntity {
    public const nint m_iszMaster = 0x700; // CUtlSymbolLarge
}

public static class CRulePointEntity {
    public const nint m_Score = 0x708; // int32
}

public static class CSAdditionalMatchStats_t {
    public const nint m_numRoundsSurvived = 0x14; // int32
    public const nint m_maxNumRoundsSurvived = 0x18; // int32
    public const nint m_numRoundsSurvivedTotal = 0x1C; // int32
    public const nint m_iRoundsWonWithoutPurchase = 0x20; // int32
    public const nint m_iRoundsWonWithoutPurchaseTotal = 0x24; // int32
    public const nint m_numFirstKills = 0x28; // int32
    public const nint m_numClutchKills = 0x2C; // int32
    public const nint m_numPistolKills = 0x30; // int32
    public const nint m_numSniperKills = 0x34; // int32
}

public static class CSAdditionalPerRoundStats_t {
    public const nint m_numChickensKilled = 0x0; // int32
    public const nint m_killsWhileBlind = 0x4; // int32
    public const nint m_bombCarrierkills = 0x8; // int32
    public const nint m_iBurnDamageInflicted = 0xC; // int32
    public const nint m_iDinks = 0x10; // int32
}

public static class CSMatchStats_t {
    public const nint m_iEnemy5Ks = 0x68; // int32
    public const nint m_iEnemy4Ks = 0x6C; // int32
    public const nint m_iEnemy3Ks = 0x70; // int32
    public const nint m_iEnemy2Ks = 0x74; // int32
    public const nint m_iUtility_Count = 0x78; // int32
    public const nint m_iUtility_Successes = 0x7C; // int32
    public const nint m_iUtility_Enemies = 0x80; // int32
    public const nint m_iFlash_Count = 0x84; // int32
    public const nint m_iFlash_Successes = 0x88; // int32
    public const nint m_nHealthPointsRemovedTotal = 0x8C; // int32
    public const nint m_nHealthPointsDealtTotal = 0x90; // int32
    public const nint m_nShotsFiredTotal = 0x94; // int32
    public const nint m_nShotsOnTargetTotal = 0x98; // int32
    public const nint m_i1v1Count = 0x9C; // int32
    public const nint m_i1v1Wins = 0xA0; // int32
    public const nint m_i1v2Count = 0xA4; // int32
    public const nint m_i1v2Wins = 0xA8; // int32
    public const nint m_iEntryCount = 0xAC; // int32
    public const nint m_iEntryWins = 0xB0; // int32
}

public static class CSPerRoundStats_t {
    public const nint m_iKills = 0x30; // int32
    public const nint m_iDeaths = 0x34; // int32
    public const nint m_iAssists = 0x38; // int32
    public const nint m_iDamage = 0x3C; // int32
    public const nint m_iEquipmentValue = 0x40; // int32
    public const nint m_iMoneySaved = 0x44; // int32
    public const nint m_iKillReward = 0x48; // int32
    public const nint m_iLiveTime = 0x4C; // int32
    public const nint m_iHeadShotKills = 0x50; // int32
    public const nint m_iObjective = 0x54; // int32
    public const nint m_iCashEarned = 0x58; // int32
    public const nint m_iUtilityDamage = 0x5C; // int32
    public const nint m_iEnemiesFlashed = 0x60; // int32
}

public static class CSceneEntity {
    public const nint m_iszSceneFile = 0x4B8; // CUtlSymbolLarge
    public const nint m_iszResumeSceneFile = 0x4C0; // CUtlSymbolLarge
    public const nint m_iszTarget1 = 0x4C8; // CUtlSymbolLarge
    public const nint m_iszTarget2 = 0x4D0; // CUtlSymbolLarge
    public const nint m_iszTarget3 = 0x4D8; // CUtlSymbolLarge
    public const nint m_iszTarget4 = 0x4E0; // CUtlSymbolLarge
    public const nint m_iszTarget5 = 0x4E8; // CUtlSymbolLarge
    public const nint m_iszTarget6 = 0x4F0; // CUtlSymbolLarge
    public const nint m_iszTarget7 = 0x4F8; // CUtlSymbolLarge
    public const nint m_iszTarget8 = 0x500; // CUtlSymbolLarge
    public const nint m_hTarget1 = 0x508; // CHandle< CBaseEntity >
    public const nint m_hTarget2 = 0x50C; // CHandle< CBaseEntity >
    public const nint m_hTarget3 = 0x510; // CHandle< CBaseEntity >
    public const nint m_hTarget4 = 0x514; // CHandle< CBaseEntity >
    public const nint m_hTarget5 = 0x518; // CHandle< CBaseEntity >
    public const nint m_hTarget6 = 0x51C; // CHandle< CBaseEntity >
    public const nint m_hTarget7 = 0x520; // CHandle< CBaseEntity >
    public const nint m_hTarget8 = 0x524; // CHandle< CBaseEntity >
    public const nint m_bIsPlayingBack = 0x528; // bool
    public const nint m_bPaused = 0x529; // bool
    public const nint m_bMultiplayer = 0x52A; // bool
    public const nint m_bAutogenerated = 0x52B; // bool
    public const nint m_flForceClientTime = 0x52C; // float32
    public const nint m_flCurrentTime = 0x530; // float32
    public const nint m_flFrameTime = 0x534; // float32
    public const nint m_bCancelAtNextInterrupt = 0x538; // bool
    public const nint m_fPitch = 0x53C; // float32
    public const nint m_bAutomated = 0x540; // bool
    public const nint m_nAutomatedAction = 0x544; // int32
    public const nint m_flAutomationDelay = 0x548; // float32
    public const nint m_flAutomationTime = 0x54C; // float32
    public const nint m_hWaitingForThisResumeScene = 0x550; // CHandle< CBaseEntity >
    public const nint m_bWaitingForResumeScene = 0x554; // bool
    public const nint m_bPausedViaInput = 0x555; // bool
    public const nint m_bPauseAtNextInterrupt = 0x556; // bool
    public const nint m_bWaitingForActor = 0x557; // bool
    public const nint m_bWaitingForInterrupt = 0x558; // bool
    public const nint m_bInterruptedActorsScenes = 0x559; // bool
    public const nint m_bBreakOnNonIdle = 0x55A; // bool
    public const nint m_hActorList = 0x560; // CNetworkUtlVectorBase< CHandle< CBaseFlex > >
    public const nint m_hRemoveActorList = 0x578; // CUtlVector< CHandle< CBaseEntity > >
    public const nint m_nSceneFlushCounter = 0x5A0; // int32
    public const nint m_nSceneStringIndex = 0x5A4; // uint16
    public const nint m_OnStart = 0x5A8; // CEntityIOOutput
    public const nint m_OnCompletion = 0x5D0; // CEntityIOOutput
    public const nint m_OnCanceled = 0x5F8; // CEntityIOOutput
    public const nint m_OnPaused = 0x620; // CEntityIOOutput
    public const nint m_OnResumed = 0x648; // CEntityIOOutput
    public const nint m_OnTrigger = 0x670; // CEntityIOOutput[16]
    public const nint m_hInterruptScene = 0x980; // CHandle< CSceneEntity >
    public const nint m_nInterruptCount = 0x984; // int32
    public const nint m_bSceneMissing = 0x988; // bool
    public const nint m_bInterrupted = 0x989; // bool
    public const nint m_bCompletedEarly = 0x98A; // bool
    public const nint m_bInterruptSceneFinished = 0x98B; // bool
    public const nint m_bRestoring = 0x98C; // bool
    public const nint m_hNotifySceneCompletion = 0x990; // CUtlVector< CHandle< CSceneEntity > >
    public const nint m_hListManagers = 0x9A8; // CUtlVector< CHandle< CSceneListManager > >
    public const nint m_iszSoundName = 0x9E8; // CUtlSymbolLarge
    public const nint m_hActor = 0x9F0; // CHandle< CBaseFlex >
    public const nint m_hActivator = 0x9F4; // CHandle< CBaseEntity >
    public const nint m_BusyActor = 0x9F8; // int32
    public const nint m_iPlayerDeathBehavior = 0x9FC; // SceneOnPlayerDeath_t
}

public static class CSceneEventInfo {
    public const nint m_iLayer = 0x0; // int32
    public const nint m_iPriority = 0x4; // int32
    public const nint m_hSequence = 0x8; // HSequence
    public const nint m_flWeight = 0xC; // float32
    public const nint m_bIsMoving = 0x10; // bool
    public const nint m_bHasArrived = 0x11; // bool
    public const nint m_flInitialYaw = 0x14; // float32
    public const nint m_flTargetYaw = 0x18; // float32
    public const nint m_flFacingYaw = 0x1C; // float32
    public const nint m_nType = 0x20; // int32
    public const nint m_flNext = 0x24; // GameTime_t
    public const nint m_bIsGesture = 0x28; // bool
    public const nint m_bShouldRemove = 0x29; // bool
    public const nint m_hTarget = 0x54; // CHandle< CBaseEntity >
    public const nint m_nSceneEventId = 0x58; // uint32
    public const nint m_bClientSide = 0x5C; // bool
    public const nint m_bStarted = 0x5D; // bool
}

public static class CSceneListManager {
    public const nint m_hListManagers = 0x4B0; // CUtlVector< CHandle< CSceneListManager > >
    public const nint m_iszScenes = 0x4C8; // CUtlSymbolLarge[16]
    public const nint m_hScenes = 0x548; // CHandle< CBaseEntity >[16]
}

public static class CScriptComponent {
    public const nint m_scriptClassName = 0x30; // CUtlSymbolLarge
}

public static class CScriptItem {
    public const nint m_OnPlayerPickup = 0x968; // CEntityIOOutput
    public const nint m_MoveTypeOverride = 0x990; // MoveType_t
}

public static class CScriptNavBlocker {
    public const nint m_vExtent = 0x710; // Vector
}

public static class CScriptTriggerHurt {
    public const nint m_vExtent = 0x948; // Vector
}

public static class CScriptTriggerMultiple {
    public const nint m_vExtent = 0x8D0; // Vector
}

public static class CScriptTriggerOnce {
    public const nint m_vExtent = 0x8D0; // Vector
}

public static class CScriptTriggerPush {
    public const nint m_vExtent = 0x8D0; // Vector
}

public static class CScriptUniformRandomStream {
    public const nint m_hScriptScope = 0x8; // HSCRIPT
    public const nint m_nInitialSeed = 0x9C; // int32
}

public static class CScriptedSequence {
    public const nint m_iszEntry = 0x4B0; // CUtlSymbolLarge
    public const nint m_iszPreIdle = 0x4B8; // CUtlSymbolLarge
    public const nint m_iszPlay = 0x4C0; // CUtlSymbolLarge
    public const nint m_iszPostIdle = 0x4C8; // CUtlSymbolLarge
    public const nint m_iszModifierToAddOnPlay = 0x4D0; // CUtlSymbolLarge
    public const nint m_iszNextScript = 0x4D8; // CUtlSymbolLarge
    public const nint m_iszEntity = 0x4E0; // CUtlSymbolLarge
    public const nint m_iszSyncGroup = 0x4E8; // CUtlSymbolLarge
    public const nint m_nMoveTo = 0x4F0; // ScriptedMoveTo_t
    public const nint m_bIsPlayingPreIdle = 0x4F4; // bool
    public const nint m_bIsPlayingEntry = 0x4F5; // bool
    public const nint m_bIsPlayingAction = 0x4F6; // bool
    public const nint m_bIsPlayingPostIdle = 0x4F7; // bool
    public const nint m_bLoopPreIdleSequence = 0x4F8; // bool
    public const nint m_bLoopActionSequence = 0x4F9; // bool
    public const nint m_bLoopPostIdleSequence = 0x4FA; // bool
    public const nint m_bSynchPostIdles = 0x4FB; // bool
    public const nint m_bIgnoreGravity = 0x4FC; // bool
    public const nint m_bDisableNPCCollisions = 0x4FD; // bool
    public const nint m_bKeepAnimgraphLockedPost = 0x4FE; // bool
    public const nint m_bDontAddModifiers = 0x4FF; // bool
    public const nint m_flRadius = 0x500; // float32
    public const nint m_flRepeat = 0x504; // float32
    public const nint m_flPlayAnimFadeInTime = 0x508; // float32
    public const nint m_flMoveInterpTime = 0x50C; // float32
    public const nint m_flAngRate = 0x510; // float32
    public const nint m_iDelay = 0x514; // int32
    public const nint m_startTime = 0x518; // GameTime_t
    public const nint m_bWaitForBeginSequence = 0x51C; // bool
    public const nint m_saved_effects = 0x520; // int32
    public const nint m_savedFlags = 0x524; // int32
    public const nint m_savedCollisionGroup = 0x528; // int32
    public const nint m_interruptable = 0x52C; // bool
    public const nint m_sequenceStarted = 0x52D; // bool
    public const nint m_bPrevAnimatedEveryTick = 0x52E; // bool
    public const nint m_bForcedAnimatedEveryTick = 0x52F; // bool
    public const nint m_bPositionRelativeToOtherEntity = 0x530; // bool
    public const nint m_hTargetEnt = 0x534; // CHandle< CBaseEntity >
    public const nint m_hNextCine = 0x538; // CHandle< CScriptedSequence >
    public const nint m_bThinking = 0x53C; // bool
    public const nint m_bInitiatedSelfDelete = 0x53D; // bool
    public const nint m_bIsTeleportingDueToMoveTo = 0x53E; // bool
    public const nint m_bAllowCustomInterruptConditions = 0x53F; // bool
    public const nint m_hLastFoundEntity = 0x540; // CHandle< CBaseEntity >
    public const nint m_hForcedTarget = 0x544; // CHandle< CBaseAnimGraph >
    public const nint m_bDontCancelOtherSequences = 0x548; // bool
    public const nint m_bForceSynch = 0x549; // bool
    public const nint m_bTargetWasAsleep = 0x54A; // bool
    public const nint m_bPreventUpdateYawOnFinish = 0x54B; // bool
    public const nint m_bEnsureOnNavmeshOnFinish = 0x54C; // bool
    public const nint m_onDeathBehavior = 0x550; // ScriptedOnDeath_t
    public const nint m_ConflictResponse = 0x554; // ScriptedConflictResponse_t
    public const nint m_OnBeginSequence = 0x558; // CEntityIOOutput
    public const nint m_OnActionStartOrLoop = 0x580; // CEntityIOOutput
    public const nint m_OnEndSequence = 0x5A8; // CEntityIOOutput
    public const nint m_OnPostIdleEndSequence = 0x5D0; // CEntityIOOutput
    public const nint m_OnCancelSequence = 0x5F8; // CEntityIOOutput
    public const nint m_OnCancelFailedSequence = 0x620; // CEntityIOOutput
    public const nint m_OnScriptEvent = 0x648; // CEntityIOOutput[8]
    public const nint m_matOtherToMain = 0x790; // CTransform
    public const nint m_hInteractionMainEntity = 0x7B0; // CHandle< CBaseEntity >
    public const nint m_iPlayerDeathBehavior = 0x7B4; // int32
}

public static class CSensorGrenadeProjectile {
    public const nint m_fExpireTime = 0xA28; // GameTime_t
    public const nint m_fNextDetectPlayerSound = 0xA2C; // GameTime_t
    public const nint m_hDisplayGrenade = 0xA30; // CHandle< CBaseEntity >
}

public static class CShatterGlassShard {
    public const nint m_hShardHandle = 0x8; // uint32
    public const nint m_vecPanelVertices = 0x10; // CUtlVector< Vector2D >
    public const nint m_vLocalPanelSpaceOrigin = 0x28; // Vector2D
    public const nint m_hModel = 0x30; // CStrongHandle< InfoForResourceTypeCModel >
    public const nint m_hPhysicsEntity = 0x38; // CHandle< CShatterGlassShardPhysics >
    public const nint m_hParentPanel = 0x3C; // CHandle< CFuncShatterglass >
    public const nint m_hParentShard = 0x40; // uint32
    public const nint m_ShatterStressType = 0x44; // ShatterGlassStressType
    public const nint m_vecStressVelocity = 0x48; // Vector
    public const nint m_bCreatedModel = 0x54; // bool
    public const nint m_flLongestEdge = 0x58; // float32
    public const nint m_flShortestEdge = 0x5C; // float32
    public const nint m_flLongestAcross = 0x60; // float32
    public const nint m_flShortestAcross = 0x64; // float32
    public const nint m_flSumOfAllEdges = 0x68; // float32
    public const nint m_flArea = 0x6C; // float32
    public const nint m_nOnFrameEdge = 0x70; // OnFrame
    public const nint m_nParentPanelsNthShard = 0x74; // int32
    public const nint m_nSubShardGeneration = 0x78; // int32
    public const nint m_vecAverageVertPosition = 0x7C; // Vector2D
    public const nint m_bAverageVertPositionIsValid = 0x84; // bool
    public const nint m_vecPanelSpaceStressPositionA = 0x88; // Vector2D
    public const nint m_vecPanelSpaceStressPositionB = 0x90; // Vector2D
    public const nint m_bStressPositionAIsValid = 0x98; // bool
    public const nint m_bStressPositionBIsValid = 0x99; // bool
    public const nint m_bFlaggedForRemoval = 0x9A; // bool
    public const nint m_flPhysicsEntitySpawnedAtTime = 0x9C; // GameTime_t
    public const nint m_bShatterRateLimited = 0xA0; // bool
    public const nint m_hEntityHittingMe = 0xA4; // CHandle< CBaseEntity >
    public const nint m_vecNeighbors = 0xA8; // CUtlVector< uint32 >
}

public static class CShatterGlassShardPhysics {
    public const nint m_bDebris = 0xB78; // bool
    public const nint m_hParentShard = 0xB7C; // uint32
    public const nint m_ShardDesc = 0xB80; // shard_model_desc_t
}

public static class CSimTimer {
    public const nint m_interval = 0x8; // float32
}

public static class CSimpleSimTimer {
    public const nint m_next = 0x0; // GameTime_t
    public const nint m_nWorldGroupId = 0x4; // WorldGroupId_t
}

public static class CSingleplayRules {
    public const nint m_bSinglePlayerGameEnding = 0x90; // bool
}

public static class CSkeletonAnimationController {
    public const nint m_pSkeletonInstance = 0x8; // CSkeletonInstance*
}

public static class CSkeletonInstance {
    public const nint m_modelState = 0x160; // CModelState
    public const nint m_bIsAnimationEnabled = 0x390; // bool
    public const nint m_bUseParentRenderBounds = 0x391; // bool
    public const nint m_bDisableSolidCollisionsForHierarchy = 0x392; // bool
    public const nint m_bDirtyMotionType = 0x0; // bitfield:1
    public const nint m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
    public const nint m_materialGroup = 0x394; // CUtlStringToken
    public const nint m_nHitboxSet = 0x398; // uint8
}

public static class CSkillDamage {
    public const nint m_flDamage = 0x0; // CSkillFloat
    public const nint m_flPhysicsForceDamage = 0x10; // float32
}

public static class CSkillFloat {
    public const nint m_pValue = 0x0; // float32[4]
}

public static class CSkillInt {
    public const nint m_pValue = 0x0; // int32[4]
}

public static class CSkyCamera {
    public const nint m_skyboxData = 0x4B0; // sky3dparams_t
    public const nint m_skyboxSlotToken = 0x540; // CUtlStringToken
    public const nint m_bUseAngles = 0x544; // bool
    public const nint m_pNext = 0x548; // CSkyCamera*
}

public static class CSkyboxReference {
    public const nint m_worldGroupId = 0x4B0; // WorldGroupId_t
    public const nint m_hSkyCamera = 0x4B4; // CHandle< CSkyCamera >
}

public static class CSmokeGrenadeProjectile {
    public const nint m_nSmokeEffectTickBegin = 0xA40; // int32
    public const nint m_bDidSmokeEffect = 0xA44; // bool
    public const nint m_nRandomSeed = 0xA48; // int32
    public const nint m_vSmokeColor = 0xA4C; // Vector
    public const nint m_vSmokeDetonationPos = 0xA58; // Vector
    public const nint m_VoxelFrameData = 0xA68; // CUtlVector< uint8 >
    public const nint m_flLastBounce = 0xA80; // GameTime_t
    public const nint m_fllastSimulationTime = 0xA84; // GameTime_t
}

public static class CSmoothFunc {
    public const nint m_flSmoothAmplitude = 0x8; // float32
    public const nint m_flSmoothBias = 0xC; // float32
    public const nint m_flSmoothDuration = 0x10; // float32
    public const nint m_flSmoothRemainingTime = 0x14; // float32
    public const nint m_nSmoothDir = 0x18; // int32
}

public static class CSound {
    public const nint m_hOwner = 0x0; // CHandle< CBaseEntity >
    public const nint m_hTarget = 0x4; // CHandle< CBaseEntity >
    public const nint m_iVolume = 0x8; // int32
    public const nint m_flOcclusionScale = 0xC; // float32
    public const nint m_iType = 0x10; // int32
    public const nint m_iNextAudible = 0x14; // int32
    public const nint m_flExpireTime = 0x18; // GameTime_t
    public const nint m_iNext = 0x1C; // int16
    public const nint m_bNoExpirationTime = 0x1E; // bool
    public const nint m_ownerChannelIndex = 0x20; // int32
    public const nint m_vecOrigin = 0x24; // Vector
    public const nint m_bHasOwner = 0x30; // bool
}

public static class CSoundAreaEntityBase {
    public const nint m_bDisabled = 0x4B0; // bool
    public const nint m_iszSoundAreaType = 0x4B8; // CUtlSymbolLarge
    public const nint m_vPos = 0x4C0; // Vector
}

public static class CSoundAreaEntityOrientedBox {
    public const nint m_vMin = 0x4D0; // Vector
    public const nint m_vMax = 0x4DC; // Vector
}

public static class CSoundAreaEntitySphere {
    public const nint m_flRadius = 0x4D0; // float32
}

public static class CSoundEnt {
    public const nint m_iFreeSound = 0x4B0; // int32
    public const nint m_iActiveSound = 0x4B4; // int32
    public const nint m_cLastActiveSounds = 0x4B8; // int32
    public const nint m_SoundPool = 0x4BC; // CSound[128]
}

public static class CSoundEnvelope {
    public const nint m_current = 0x0; // float32
    public const nint m_target = 0x4; // float32
    public const nint m_rate = 0x8; // float32
    public const nint m_forceupdate = 0xC; // bool
}

public static class CSoundEventAABBEntity {
    public const nint m_vMins = 0x558; // Vector
    public const nint m_vMaxs = 0x564; // Vector
}

public static class CSoundEventEntity {
    public const nint m_bStartOnSpawn = 0x4B0; // bool
    public const nint m_bToLocalPlayer = 0x4B1; // bool
    public const nint m_bStopOnNew = 0x4B2; // bool
    public const nint m_bSaveRestore = 0x4B3; // bool
    public const nint m_bSavedIsPlaying = 0x4B4; // bool
    public const nint m_flSavedElapsedTime = 0x4B8; // float32
    public const nint m_iszSourceEntityName = 0x4C0; // CUtlSymbolLarge
    public const nint m_iszAttachmentName = 0x4C8; // CUtlSymbolLarge
    public const nint m_onGUIDChanged = 0x4D0; // CEntityOutputTemplate< uint64 >
    public const nint m_onSoundFinished = 0x4F8; // CEntityIOOutput
    public const nint m_iszSoundName = 0x540; // CUtlSymbolLarge
    public const nint m_hSource = 0x550; // CEntityHandle
}

public static class CSoundEventOBBEntity {
    public const nint m_vMins = 0x558; // Vector
    public const nint m_vMaxs = 0x564; // Vector
}

public static class CSoundEventParameter {
    public const nint m_iszParamName = 0x4B8; // CUtlSymbolLarge
    public const nint m_flFloatValue = 0x4C0; // float32
}

public static class CSoundEventPathCornerEntity {
    public const nint m_iszPathCorner = 0x558; // CUtlSymbolLarge
    public const nint m_iCountMax = 0x560; // int32
    public const nint m_flDistanceMax = 0x564; // float32
    public const nint m_flDistMaxSqr = 0x568; // float32
    public const nint m_flDotProductMax = 0x56C; // float32
    public const nint bPlaying = 0x570; // bool
}

public static class CSoundOpvarSetAABBEntity {
    public const nint m_vDistanceInnerMins = 0x648; // Vector
    public const nint m_vDistanceInnerMaxs = 0x654; // Vector
    public const nint m_vDistanceOuterMins = 0x660; // Vector
    public const nint m_vDistanceOuterMaxs = 0x66C; // Vector
    public const nint m_nAABBDirection = 0x678; // int32
    public const nint m_vInnerMins = 0x67C; // Vector
    public const nint m_vInnerMaxs = 0x688; // Vector
    public const nint m_vOuterMins = 0x694; // Vector
    public const nint m_vOuterMaxs = 0x6A0; // Vector
}

public static class CSoundOpvarSetEntity {
    public const nint m_iszStackName = 0x4B8; // CUtlSymbolLarge
    public const nint m_iszOperatorName = 0x4C0; // CUtlSymbolLarge
    public const nint m_iszOpvarName = 0x4C8; // CUtlSymbolLarge
    public const nint m_nOpvarType = 0x4D0; // int32
    public const nint m_nOpvarIndex = 0x4D4; // int32
    public const nint m_flOpvarValue = 0x4D8; // float32
    public const nint m_OpvarValueString = 0x4E0; // CUtlSymbolLarge
    public const nint m_bSetOnSpawn = 0x4E8; // bool
}

public static class CSoundOpvarSetOBBWindEntity {
    public const nint m_vMins = 0x548; // Vector
    public const nint m_vMaxs = 0x554; // Vector
    public const nint m_vDistanceMins = 0x560; // Vector
    public const nint m_vDistanceMaxs = 0x56C; // Vector
    public const nint m_flWindMin = 0x578; // float32
    public const nint m_flWindMax = 0x57C; // float32
    public const nint m_flWindMapMin = 0x580; // float32
    public const nint m_flWindMapMax = 0x584; // float32
}

public static class CSoundOpvarSetPathCornerEntity {
    public const nint m_flDistMinSqr = 0x660; // float32
    public const nint m_flDistMaxSqr = 0x664; // float32
    public const nint m_iszPathCornerEntityName = 0x668; // CUtlSymbolLarge
}

public static class CSoundOpvarSetPointBase {
    public const nint m_bDisabled = 0x4B0; // bool
    public const nint m_hSource = 0x4B4; // CEntityHandle
    public const nint m_iszSourceEntityName = 0x4C0; // CUtlSymbolLarge
    public const nint m_vLastPosition = 0x518; // Vector
    public const nint m_iszStackName = 0x528; // CUtlSymbolLarge
    public const nint m_iszOperatorName = 0x530; // CUtlSymbolLarge
    public const nint m_iszOpvarName = 0x538; // CUtlSymbolLarge
    public const nint m_iOpvarIndex = 0x540; // int32
    public const nint m_bUseAutoCompare = 0x544; // bool
}

public static class CSoundOpvarSetPointEntity {
    public const nint m_OnEnter = 0x548; // CEntityIOOutput
    public const nint m_OnExit = 0x570; // CEntityIOOutput
    public const nint m_bAutoDisable = 0x598; // bool
    public const nint m_flDistanceMin = 0x5DC; // float32
    public const nint m_flDistanceMax = 0x5E0; // float32
    public const nint m_flDistanceMapMin = 0x5E4; // float32
    public const nint m_flDistanceMapMax = 0x5E8; // float32
    public const nint m_flOcclusionRadius = 0x5EC; // float32
    public const nint m_flOcclusionMin = 0x5F0; // float32
    public const nint m_flOcclusionMax = 0x5F4; // float32
    public const nint m_flValSetOnDisable = 0x5F8; // float32
    public const nint m_bSetValueOnDisable = 0x5FC; // bool
    public const nint m_nSimulationMode = 0x600; // int32
    public const nint m_nVisibilitySamples = 0x604; // int32
    public const nint m_vDynamicProxyPoint = 0x608; // Vector
    public const nint m_flDynamicMaximumOcclusion = 0x614; // float32
    public const nint m_hDynamicEntity = 0x618; // CEntityHandle
    public const nint m_iszDynamicEntityName = 0x620; // CUtlSymbolLarge
    public const nint m_flPathingDistanceNormFactor = 0x628; // float32
    public const nint m_vPathingSourcePos = 0x62C; // Vector
    public const nint m_vPathingListenerPos = 0x638; // Vector
    public const nint m_nPathingSourceIndex = 0x644; // int32
}

public static class CSoundPatch {
    public const nint m_pitch = 0x8; // CSoundEnvelope
    public const nint m_volume = 0x18; // CSoundEnvelope
    public const nint m_shutdownTime = 0x30; // float32
    public const nint m_flLastTime = 0x34; // float32
    public const nint m_iszSoundScriptName = 0x38; // CUtlSymbolLarge
    public const nint m_hEnt = 0x40; // CHandle< CBaseEntity >
    public const nint m_soundEntityIndex = 0x44; // CEntityIndex
    public const nint m_soundOrigin = 0x48; // Vector
    public const nint m_isPlaying = 0x54; // int32
    public const nint m_Filter = 0x58; // CCopyRecipientFilter
    public const nint m_flCloseCaptionDuration = 0x80; // float32
    public const nint m_bUpdatedSoundOrigin = 0x84; // bool
    public const nint m_iszClassName = 0x88; // CUtlSymbolLarge
}

public static class CSoundStackSave {
    public const nint m_iszStackName = 0x4B0; // CUtlSymbolLarge
}

public static class CSpotlightEnd {
    public const nint m_flLightScale = 0x700; // float32
    public const nint m_Radius = 0x704; // float32
    public const nint m_vSpotlightDir = 0x708; // Vector
    public const nint m_vSpotlightOrg = 0x714; // Vector
}

public static class CSprite {
    public const nint m_hSpriteMaterial = 0x700; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    public const nint m_hAttachedToEntity = 0x708; // CHandle< CBaseEntity >
    public const nint m_nAttachment = 0x70C; // AttachmentHandle_t
    public const nint m_flSpriteFramerate = 0x710; // float32
    public const nint m_flFrame = 0x714; // float32
    public const nint m_flDieTime = 0x718; // GameTime_t
    public const nint m_nBrightness = 0x728; // uint32
    public const nint m_flBrightnessDuration = 0x72C; // float32
    public const nint m_flSpriteScale = 0x730; // float32
    public const nint m_flScaleDuration = 0x734; // float32
    public const nint m_bWorldSpaceScale = 0x738; // bool
    public const nint m_flGlowProxySize = 0x73C; // float32
    public const nint m_flHDRColorScale = 0x740; // float32
    public const nint m_flLastTime = 0x744; // GameTime_t
    public const nint m_flMaxFrame = 0x748; // float32
    public const nint m_flStartScale = 0x74C; // float32
    public const nint m_flDestScale = 0x750; // float32
    public const nint m_flScaleTimeStart = 0x754; // GameTime_t
    public const nint m_nStartBrightness = 0x758; // int32
    public const nint m_nDestBrightness = 0x75C; // int32
    public const nint m_flBrightnessTimeStart = 0x760; // GameTime_t
    public const nint m_nSpriteWidth = 0x764; // int32
    public const nint m_nSpriteHeight = 0x768; // int32
}

public static class CStopwatch {
    public const nint m_interval = 0xC; // float32
}

public static class CStopwatchBase {
    public const nint m_fIsRunning = 0x8; // bool
}

public static class CSun {
    public const nint m_vDirection = 0x700; // Vector
    public const nint m_clrOverlay = 0x70C; // Color
    public const nint m_iszEffectName = 0x710; // CUtlSymbolLarge
    public const nint m_iszSSEffectName = 0x718; // CUtlSymbolLarge
    public const nint m_bOn = 0x720; // bool
    public const nint m_bmaxColor = 0x721; // bool
    public const nint m_flSize = 0x724; // float32
    public const nint m_flRotation = 0x728; // float32
    public const nint m_flHazeScale = 0x72C; // float32
    public const nint m_flAlphaHaze = 0x730; // float32
    public const nint m_flAlphaHdr = 0x734; // float32
    public const nint m_flAlphaScale = 0x738; // float32
    public const nint m_flHDRColorScale = 0x73C; // float32
    public const nint m_flFarZScale = 0x740; // float32
}

public static class CTakeDamageInfo {
    public const nint m_vecDamageForce = 0x8; // Vector
    public const nint m_vecDamagePosition = 0x14; // Vector
    public const nint m_vecReportedPosition = 0x20; // Vector
    public const nint m_vecDamageDirection = 0x2C; // Vector
    public const nint m_hInflictor = 0x38; // CHandle< CBaseEntity >
    public const nint m_hAttacker = 0x3C; // CHandle< CBaseEntity >
    public const nint m_hAbility = 0x40; // CHandle< CBaseEntity >
    public const nint m_flDamage = 0x44; // float32
    public const nint m_bitsDamageType = 0x48; // int32
    public const nint m_iDamageCustom = 0x4C; // int32
    public const nint m_iAmmoType = 0x50; // AmmoIndex_t
    public const nint m_flOriginalDamage = 0x60; // float32
    public const nint m_bShouldBleed = 0x64; // bool
    public const nint m_bShouldSpark = 0x65; // bool
    public const nint m_nDamageFlags = 0x70; // TakeDamageFlags_t
    public const nint m_nNumObjectsPenetrated = 0x74; // int32
    public const nint m_hScriptInstance = 0x78; // HSCRIPT
    public const nint m_bInTakeDamageFlow = 0x94; // bool
}

public static class CTakeDamageResult {
    public const nint m_nHealthLost = 0x0; // int32
    public const nint m_nDamageTaken = 0x4; // int32
}

public static class CTakeDamageSummaryScopeGuard {
    public const nint m_vecSummaries = 0x8; // CUtlVector< SummaryTakeDamageInfo_t* >
}

public static class CTankTargetChange {
    public const nint m_newTarget = 0x4B0; // CVariantBase< CVariantDefaultAllocator >
    public const nint m_newTargetName = 0x4C0; // CUtlSymbolLarge
}

public static class CTankTrainAI {
    public const nint m_hTrain = 0x4B0; // CHandle< CFuncTrackTrain >
    public const nint m_hTargetEntity = 0x4B4; // CHandle< CBaseEntity >
    public const nint m_soundPlaying = 0x4B8; // int32
    public const nint m_startSoundName = 0x4D0; // CUtlSymbolLarge
    public const nint m_engineSoundName = 0x4D8; // CUtlSymbolLarge
    public const nint m_movementSoundName = 0x4E0; // CUtlSymbolLarge
    public const nint m_targetEntityName = 0x4E8; // CUtlSymbolLarge
}

public static class CTeam {
    public const nint m_aPlayerControllers = 0x4B0; // CNetworkUtlVectorBase< CHandle< CBasePlayerController > >
    public const nint m_aPlayers = 0x4C8; // CNetworkUtlVectorBase< CHandle< CBasePlayerPawn > >
    public const nint m_iScore = 0x4E0; // int32
    public const nint m_szTeamname = 0x4E4; // char[129]
}

public static class CTestEffect {
    public const nint m_iLoop = 0x4B0; // int32
    public const nint m_iBeam = 0x4B4; // int32
    public const nint m_pBeam = 0x4B8; // CBeam*[24]
    public const nint m_flBeamTime = 0x578; // GameTime_t[24]
    public const nint m_flStartTime = 0x5D8; // GameTime_t
}

public static class CTextureBasedAnimatable {
    public const nint m_bLoop = 0x700; // bool
    public const nint m_flFPS = 0x704; // float32
    public const nint m_hPositionKeys = 0x708; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_hRotationKeys = 0x710; // CStrongHandle< InfoForResourceTypeCTextureBase >
    public const nint m_vAnimationBoundsMin = 0x718; // Vector
    public const nint m_vAnimationBoundsMax = 0x724; // Vector
    public const nint m_flStartTime = 0x730; // float32
    public const nint m_flStartFrame = 0x734; // float32
}

public static class CTimeline {
    public const nint m_flValues = 0x10; // float32[64]
    public const nint m_nValueCounts = 0x110; // int32[64]
    public const nint m_nBucketCount = 0x210; // int32
    public const nint m_flInterval = 0x214; // float32
    public const nint m_flFinalValue = 0x218; // float32
    public const nint m_nCompressionType = 0x21C; // TimelineCompression_t
    public const nint m_bStopped = 0x220; // bool
}

public static class CTimerEntity {
    public const nint m_OnTimer = 0x4B0; // CEntityIOOutput
    public const nint m_OnTimerHigh = 0x4D8; // CEntityIOOutput
    public const nint m_OnTimerLow = 0x500; // CEntityIOOutput
    public const nint m_iDisabled = 0x528; // int32
    public const nint m_flInitialDelay = 0x52C; // float32
    public const nint m_flRefireTime = 0x530; // float32
    public const nint m_bUpDownState = 0x534; // bool
    public const nint m_iUseRandomTime = 0x538; // int32
    public const nint m_bPauseAfterFiring = 0x53C; // bool
    public const nint m_flLowerRandomBound = 0x540; // float32
    public const nint m_flUpperRandomBound = 0x544; // float32
    public const nint m_flRemainingTime = 0x548; // float32
    public const nint m_bPaused = 0x54C; // bool
}

public static class CTonemapController2 {
    public const nint m_flAutoExposureMin = 0x4B0; // float32
    public const nint m_flAutoExposureMax = 0x4B4; // float32
    public const nint m_flTonemapPercentTarget = 0x4B8; // float32
    public const nint m_flTonemapPercentBrightPixels = 0x4BC; // float32
    public const nint m_flTonemapMinAvgLum = 0x4C0; // float32
    public const nint m_flExposureAdaptationSpeedUp = 0x4C4; // float32
    public const nint m_flExposureAdaptationSpeedDown = 0x4C8; // float32
    public const nint m_flTonemapEVSmoothingRange = 0x4CC; // float32
}

public static class CTonemapTrigger {
    public const nint m_tonemapControllerName = 0x8A8; // CUtlSymbolLarge
    public const nint m_hTonemapController = 0x8B0; // CEntityHandle
}

public static class CTriggerActiveWeaponDetect {
    public const nint m_OnTouchedActiveWeapon = 0x8A8; // CEntityIOOutput
    public const nint m_iszWeaponClassName = 0x8D0; // CUtlSymbolLarge
}

public static class CTriggerBrush {
    public const nint m_OnStartTouch = 0x700; // CEntityIOOutput
    public const nint m_OnEndTouch = 0x728; // CEntityIOOutput
    public const nint m_OnUse = 0x750; // CEntityIOOutput
    public const nint m_iInputFilter = 0x778; // int32
    public const nint m_iDontMessageParent = 0x77C; // int32
}

public static class CTriggerBuoyancy {
    public const nint m_BuoyancyHelper = 0x8A8; // CBuoyancyHelper
    public const nint m_flFluidDensity = 0x8C8; // float32
}

public static class CTriggerDetectBulletFire {
    public const nint m_bPlayerFireOnly = 0x8A8; // bool
    public const nint m_OnDetectedBulletFire = 0x8B0; // CEntityIOOutput
}

public static class CTriggerDetectExplosion {
    public const nint m_OnDetectedExplosion = 0x8E0; // CEntityIOOutput
}

public static class CTriggerFan {
    public const nint m_vFanOrigin = 0x8A8; // Vector
    public const nint m_vFanEnd = 0x8B4; // Vector
    public const nint m_vNoise = 0x8C0; // Vector
    public const nint m_flForce = 0x8CC; // float32
    public const nint m_flPlayerForce = 0x8D0; // float32
    public const nint m_flRampTime = 0x8D4; // float32
    public const nint m_bFalloff = 0x8D8; // bool
    public const nint m_bPushPlayer = 0x8D9; // bool
    public const nint m_bRampDown = 0x8DA; // bool
    public const nint m_bAddNoise = 0x8DB; // bool
    public const nint m_RampTimer = 0x8E0; // CountdownTimer
}

public static class CTriggerGameEvent {
    public const nint m_strStartTouchEventName = 0x8A8; // CUtlString
    public const nint m_strEndTouchEventName = 0x8B0; // CUtlString
    public const nint m_strTriggerID = 0x8B8; // CUtlString
}

public static class CTriggerHurt {
    public const nint m_flOriginalDamage = 0x8A8; // float32
    public const nint m_flDamage = 0x8AC; // float32
    public const nint m_flDamageCap = 0x8B0; // float32
    public const nint m_flLastDmgTime = 0x8B4; // GameTime_t
    public const nint m_flForgivenessDelay = 0x8B8; // float32
    public const nint m_bitsDamageInflict = 0x8BC; // int32
    public const nint m_damageModel = 0x8C0; // int32
    public const nint m_bNoDmgForce = 0x8C4; // bool
    public const nint m_vDamageForce = 0x8C8; // Vector
    public const nint m_thinkAlways = 0x8D4; // bool
    public const nint m_hurtThinkPeriod = 0x8D8; // float32
    public const nint m_OnHurt = 0x8E0; // CEntityIOOutput
    public const nint m_OnHurtPlayer = 0x908; // CEntityIOOutput
    public const nint m_hurtEntities = 0x930; // CUtlVector< CHandle< CBaseEntity > >
}

public static class CTriggerImpact {
    public const nint m_flMagnitude = 0x8D0; // float32
    public const nint m_flNoise = 0x8D4; // float32
    public const nint m_flViewkick = 0x8D8; // float32
    public const nint m_pOutputForce = 0x8E0; // CEntityOutputTemplate< Vector >
}

public static class CTriggerLerpObject {
    public const nint m_iszLerpTarget = 0x8A8; // CUtlSymbolLarge
    public const nint m_hLerpTarget = 0x8B0; // CHandle< CBaseEntity >
    public const nint m_iszLerpTargetAttachment = 0x8B8; // CUtlSymbolLarge
    public const nint m_hLerpTargetAttachment = 0x8C0; // AttachmentHandle_t
    public const nint m_flLerpDuration = 0x8C4; // float32
    public const nint m_bLerpRestoreMoveType = 0x8C8; // bool
    public const nint m_bSingleLerpObject = 0x8C9; // bool
    public const nint m_vecLerpingObjects = 0x8D0; // CUtlVector< lerpdata_t >
    public const nint m_iszLerpEffect = 0x8E8; // CUtlSymbolLarge
    public const nint m_iszLerpSound = 0x8F0; // CUtlSymbolLarge
    public const nint m_OnLerpStarted = 0x8F8; // CEntityIOOutput
    public const nint m_OnLerpFinished = 0x920; // CEntityIOOutput
}

public static class CTriggerLook {
    public const nint m_hLookTarget = 0x8D0; // CHandle< CBaseEntity >
    public const nint m_flFieldOfView = 0x8D4; // float32
    public const nint m_flLookTime = 0x8D8; // float32
    public const nint m_flLookTimeTotal = 0x8DC; // float32
    public const nint m_flLookTimeLast = 0x8E0; // GameTime_t
    public const nint m_flTimeoutDuration = 0x8E4; // float32
    public const nint m_bTimeoutFired = 0x8E8; // bool
    public const nint m_bIsLooking = 0x8E9; // bool
    public const nint m_b2DFOV = 0x8EA; // bool
    public const nint m_bUseVelocity = 0x8EB; // bool
    public const nint m_hActivator = 0x8EC; // CHandle< CBaseEntity >
    public const nint m_bTestOcclusion = 0x8F0; // bool
    public const nint m_OnTimeout = 0x8F8; // CEntityIOOutput
    public const nint m_OnStartLook = 0x920; // CEntityIOOutput
    public const nint m_OnEndLook = 0x948; // CEntityIOOutput
}

public static class CTriggerMultiple {
    public const nint m_OnTrigger = 0x8A8; // CEntityIOOutput
}

public static class CTriggerPhysics {
    public const nint m_gravityScale = 0x8B8; // float32
    public const nint m_linearLimit = 0x8BC; // float32
    public const nint m_linearDamping = 0x8C0; // float32
    public const nint m_angularLimit = 0x8C4; // float32
    public const nint m_angularDamping = 0x8C8; // float32
    public const nint m_linearForce = 0x8CC; // float32
    public const nint m_flFrequency = 0x8D0; // float32
    public const nint m_flDampingRatio = 0x8D4; // float32
    public const nint m_vecLinearForcePointAt = 0x8D8; // Vector
    public const nint m_bCollapseToForcePoint = 0x8E4; // bool
    public const nint m_vecLinearForcePointAtWorld = 0x8E8; // Vector
    public const nint m_vecLinearForceDirection = 0x8F4; // Vector
    public const nint m_bConvertToDebrisWhenPossible = 0x900; // bool
}

public static class CTriggerProximity {
    public const nint m_hMeasureTarget = 0x8A8; // CHandle< CBaseEntity >
    public const nint m_iszMeasureTarget = 0x8B0; // CUtlSymbolLarge
    public const nint m_fRadius = 0x8B8; // float32
    public const nint m_nTouchers = 0x8BC; // int32
    public const nint m_NearestEntityDistance = 0x8C0; // CEntityOutputTemplate< float32 >
}

public static class CTriggerPush {
    public const nint m_angPushEntitySpace = 0x8A8; // QAngle
    public const nint m_vecPushDirEntitySpace = 0x8B4; // Vector
    public const nint m_bTriggerOnStartTouch = 0x8C0; // bool
    public const nint m_flAlternateTicksFix = 0x8C4; // float32
    public const nint m_flPushSpeed = 0x8C8; // float32
}

public static class CTriggerRemove {
    public const nint m_OnRemove = 0x8A8; // CEntityIOOutput
}

public static class CTriggerSave {
    public const nint m_bForceNewLevelUnit = 0x8A8; // bool
    public const nint m_fDangerousTimer = 0x8AC; // float32
    public const nint m_minHitPoints = 0x8B0; // int32
}

public static class CTriggerSndSosOpvar {
    public const nint m_hTouchingPlayers = 0x8A8; // CUtlVector< CHandle< CBaseEntity > >
    public const nint m_flPosition = 0x8C0; // Vector
    public const nint m_flCenterSize = 0x8CC; // float32
    public const nint m_flMinVal = 0x8D0; // float32
    public const nint m_flMaxVal = 0x8D4; // float32
    public const nint m_flWait = 0x8D8; // float32
    public const nint m_opvarName = 0x8E0; // CUtlSymbolLarge
    public const nint m_stackName = 0x8E8; // CUtlSymbolLarge
    public const nint m_operatorName = 0x8F0; // CUtlSymbolLarge
    public const nint m_bVolIs2D = 0x8F8; // bool
    public const nint m_opvarNameChar = 0x8F9; // char[256]
    public const nint m_stackNameChar = 0x9F9; // char[256]
    public const nint m_operatorNameChar = 0xAF9; // char[256]
    public const nint m_VecNormPos = 0xBFC; // Vector
    public const nint m_flNormCenterSize = 0xC08; // float32
}

public static class CTriggerSoundscape {
    public const nint m_hSoundscape = 0x8A8; // CHandle< CEnvSoundscapeTriggerable >
    public const nint m_SoundscapeName = 0x8B0; // CUtlSymbolLarge
    public const nint m_spectators = 0x8B8; // CUtlVector< CHandle< CBasePlayerPawn > >
}

public static class CTriggerTeleport {
    public const nint m_iLandmark = 0x8A8; // CUtlSymbolLarge
    public const nint m_bUseLandmarkAngles = 0x8B0; // bool
    public const nint m_bMirrorPlayer = 0x8B1; // bool
}

public static class CTriggerToggleSave {
    public const nint m_bDisabled = 0x8A8; // bool
}

public static class CTriggerVolume {
    public const nint m_iFilterName = 0x700; // CUtlSymbolLarge
    public const nint m_hFilter = 0x708; // CHandle< CBaseFilter >
}

public static class CVoteController {
    public const nint m_iActiveIssueIndex = 0x4B0; // int32
    public const nint m_iOnlyTeamToVote = 0x4B4; // int32
    public const nint m_nVoteOptionCount = 0x4B8; // int32[5]
    public const nint m_nPotentialVotes = 0x4CC; // int32
    public const nint m_bIsYesNoVote = 0x4D0; // bool
    public const nint m_acceptingVotesTimer = 0x4D8; // CountdownTimer
    public const nint m_executeCommandTimer = 0x4F0; // CountdownTimer
    public const nint m_resetVoteTimer = 0x508; // CountdownTimer
    public const nint m_nVotesCast = 0x520; // int32[64]
    public const nint m_playerHoldingVote = 0x620; // CPlayerSlot
    public const nint m_playerOverrideForVote = 0x624; // CPlayerSlot
    public const nint m_nHighestCountIndex = 0x628; // int32
    public const nint m_potentialIssues = 0x630; // CUtlVector< CBaseIssue* >
    public const nint m_VoteOptions = 0x648; // CUtlVector< char* >
}

public static class CWeaponBaseItem {
    public const nint m_SequenceCompleteTimer = 0xDD8; // CountdownTimer
    public const nint m_bRedraw = 0xDF0; // bool
}

public static class CWeaponShield {
    public const nint m_flBulletDamageAbsorbed = 0xDF8; // float32
    public const nint m_flLastBulletHitSoundTime = 0xDFC; // GameTime_t
    public const nint m_flDisplayHealth = 0xE00; // float32
}

public static class CWeaponTaser {
    public const nint m_fFireTime = 0xDF8; // GameTime_t
}

public static class CommandToolCommand_t {
    public const nint m_bEnabled = 0x0; // bool
    public const nint m_bOpened = 0x1; // bool
    public const nint m_InternalId = 0x4; // uint32
    public const nint m_ShortName = 0x8; // CUtlString
    public const nint m_ExecMode = 0x10; // CommandExecMode_t
    public const nint m_SpawnGroup = 0x18; // CUtlString
    public const nint m_PeriodicExecDelay = 0x20; // float32
    public const nint m_SpecType = 0x24; // CommandEntitySpecType_t
    public const nint m_EntitySpec = 0x28; // CUtlString
    public const nint m_Commands = 0x30; // CUtlString
    public const nint m_SetDebugBits = 0x38; // DebugOverlayBits_t
    public const nint m_ClearDebugBits = 0x40; // DebugOverlayBits_t
}

public static class ConceptHistory_t {
    public const nint timeSpoken = 0x0; // float32
    public const nint m_response = 0x8; // CRR_Response
}

public static class ConstraintSoundInfo {
    public const nint m_vSampler = 0x8; // VelocitySampler
    public const nint m_soundProfile = 0x20; // SimpleConstraintSoundProfile
    public const nint m_forwardAxis = 0x40; // Vector
    public const nint m_iszTravelSoundFwd = 0x50; // CUtlSymbolLarge
    public const nint m_iszTravelSoundBack = 0x58; // CUtlSymbolLarge
    public const nint m_iszReversalSounds = 0x68; // CUtlSymbolLarge[3]
    public const nint m_bPlayTravelSound = 0x80; // bool
    public const nint m_bPlayReversalSound = 0x81; // bool
}

public static class CountdownTimer {
    public const nint m_duration = 0x8; // float32
    public const nint m_timestamp = 0xC; // GameTime_t
    public const nint m_timescale = 0x10; // float32
    public const nint m_nWorldGroupId = 0x14; // WorldGroupId_t
}

public static class EngineCountdownTimer {
    public const nint m_duration = 0x8; // float32
    public const nint m_timestamp = 0xC; // float32
    public const nint m_timescale = 0x10; // float32
}

public static class EntityRenderAttribute_t {
    public const nint m_ID = 0x30; // CUtlStringToken
    public const nint m_Values = 0x34; // Vector4D
}

public static class EntitySpottedState_t {
    public const nint m_bSpotted = 0x8; // bool
    public const nint m_bSpottedByMask = 0xC; // uint32[2]
}

public static class Extent {
    public const nint lo = 0x0; // Vector
    public const nint hi = 0xC; // Vector
}

public static class FilterDamageType {
    public const nint m_iDamageType = 0x508; // int32
}

public static class FilterHealth {
    public const nint m_bAdrenalineActive = 0x508; // bool
    public const nint m_iHealthMin = 0x50C; // int32
    public const nint m_iHealthMax = 0x510; // int32
}

public static class FilterTeam {
    public const nint m_iFilterTeam = 0x508; // int32
}

public static class GameAmmoTypeInfo_t {
    public const nint m_nBuySize = 0x38; // int32
    public const nint m_nCost = 0x3C; // int32
}

public static class GameTick_t {
    public const nint m_Value = 0x0; // int32
}

public static class GameTime_t {
    public const nint m_Value = 0x0; // float32
}

public static class HullFlags_t {
    public const nint m_bHull_Human = 0x0; // bool
    public const nint m_bHull_SmallCentered = 0x1; // bool
    public const nint m_bHull_WideHuman = 0x2; // bool
    public const nint m_bHull_Tiny = 0x3; // bool
    public const nint m_bHull_Medium = 0x4; // bool
    public const nint m_bHull_TinyCentered = 0x5; // bool
    public const nint m_bHull_Large = 0x6; // bool
    public const nint m_bHull_LargeCentered = 0x7; // bool
    public const nint m_bHull_MediumTall = 0x8; // bool
    public const nint m_bHull_Small = 0x9; // bool
}

public static class IntervalTimer {
    public const nint m_timestamp = 0x8; // GameTime_t
    public const nint m_nWorldGroupId = 0xC; // WorldGroupId_t
}

public static class ModelConfigHandle_t {
    public const nint m_Value = 0x0; // uint32
}

public static class ParticleIndex_t {
    public const nint m_Value = 0x0; // int32
}

public static class PhysicsRagdollPose_t {
    public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
    public const nint m_Transforms = 0x30; // CNetworkUtlVectorBase< CTransform >
    public const nint m_hOwner = 0x48; // CHandle< CBaseEntity >
}

public static class RagdollCreationParams_t {
    public const nint m_vForce = 0x0; // Vector
    public const nint m_nForceBone = 0xC; // int32
}

public static class RelationshipOverride_t {
    public const nint entity = 0x8; // CHandle< CBaseEntity >
    public const nint classType = 0xC; // Class_T
}

public static class Relationship_t {
    public const nint disposition = 0x0; // Disposition_t
    public const nint priority = 0x4; // int32
}

public static class ResponseContext_t {
    public const nint m_iszName = 0x0; // CUtlSymbolLarge
    public const nint m_iszValue = 0x8; // CUtlSymbolLarge
    public const nint m_fExpirationTime = 0x10; // GameTime_t
}

public static class ResponseFollowup {
    public const nint followup_concept = 0x0; // char*
    public const nint followup_contexts = 0x8; // char*
    public const nint followup_delay = 0x10; // float32
    public const nint followup_target = 0x14; // char*
    public const nint followup_entityiotarget = 0x1C; // char*
    public const nint followup_entityioinput = 0x24; // char*
    public const nint followup_entityiodelay = 0x2C; // float32
    public const nint bFired = 0x30; // bool
}

public static class ResponseParams {
    public const nint odds = 0x10; // int16
    public const nint flags = 0x12; // int16
    public const nint m_pFollowup = 0x18; // ResponseFollowup*
}

public static class SellbackPurchaseEntry_t {
    public const nint m_unDefIdx = 0x30; // uint16
    public const nint m_nCost = 0x34; // int32
    public const nint m_nPrevArmor = 0x38; // int32
    public const nint m_bPrevHelmet = 0x3C; // bool
    public const nint m_hItem = 0x40; // CEntityHandle
}

public static class SimpleConstraintSoundProfile {
    public const nint eKeypoints = 0x8; // SimpleConstraintSoundProfile::SimpleConstraintsSoundProfileKeypoints_t
    public const nint m_keyPoints = 0xC; // float32[2]
    public const nint m_reversalSoundThresholds = 0x14; // float32[3]
}

public static class SpawnPoint {
    public const nint m_iPriority = 0x4B0; // int32
    public const nint m_bEnabled = 0x4B4; // bool
    public const nint m_nType = 0x4B8; // int32
}

public static class SpawnPointCoopEnemy {
    public const nint m_szWeaponsToGive = 0x4C0; // CUtlSymbolLarge
    public const nint m_szPlayerModelToUse = 0x4C8; // CUtlSymbolLarge
    public const nint m_nArmorToSpawnWith = 0x4D0; // int32
    public const nint m_nDefaultBehavior = 0x4D4; // SpawnPointCoopEnemy::BotDefaultBehavior_t
    public const nint m_nBotDifficulty = 0x4D8; // int32
    public const nint m_bIsAgressive = 0x4DC; // bool
    public const nint m_bStartAsleep = 0x4DD; // bool
    public const nint m_flHideRadius = 0x4E0; // float32
    public const nint m_szBehaviorTreeFile = 0x4F0; // CUtlSymbolLarge
}

public static class SummaryTakeDamageInfo_t {
    public const nint nSummarisedCount = 0x0; // int32
    public const nint info = 0x8; // CTakeDamageInfo
    public const nint result = 0xA0; // CTakeDamageResult
    public const nint hTarget = 0xA8; // CHandle< CBaseEntity >
}

public static class VPhysicsCollisionAttribute_t {
    public const nint m_nInteractsAs = 0x8; // uint64
    public const nint m_nInteractsWith = 0x10; // uint64
    public const nint m_nInteractsExclude = 0x18; // uint64
    public const nint m_nEntityId = 0x20; // uint32
    public const nint m_nOwnerId = 0x24; // uint32
    public const nint m_nHierarchyId = 0x28; // uint16
    public const nint m_nCollisionGroup = 0x2A; // uint8
    public const nint m_nCollisionFunctionMask = 0x2B; // uint8
}

public static class VelocitySampler {
    public const nint m_prevSample = 0x0; // Vector
    public const nint m_fPrevSampleTime = 0xC; // GameTime_t
    public const nint m_fIdealSampleRate = 0x10; // float32
}

public static class ViewAngleServerChange_t {
    public const nint nType = 0x30; // FixAngleSet_t
    public const nint qAngle = 0x34; // QAngle
    public const nint nIndex = 0x40; // uint32
}

public static class WeaponPurchaseCount_t {
    public const nint m_nItemDefIndex = 0x30; // uint16
    public const nint m_nCount = 0x32; // uint16
}

public static class WeaponPurchaseTracker_t {
    public const nint m_weaponPurchases = 0x8; // CUtlVectorEmbeddedNetworkVar< WeaponPurchaseCount_t >
}

public static class audioparams_t {
    public const nint localSound = 0x8; // Vector[8]
    public const nint soundscapeIndex = 0x68; // int32
    public const nint localBits = 0x6C; // uint8
    public const nint soundscapeEntityListIndex = 0x70; // int32
    public const nint soundEventHash = 0x74; // uint32
}

public static class dynpitchvol_base_t {
    public const nint preset = 0x0; // int32
    public const nint pitchrun = 0x4; // int32
    public const nint pitchstart = 0x8; // int32
    public const nint spinup = 0xC; // int32
    public const nint spindown = 0x10; // int32
    public const nint volrun = 0x14; // int32
    public const nint volstart = 0x18; // int32
    public const nint fadein = 0x1C; // int32
    public const nint fadeout = 0x20; // int32
    public const nint lfotype = 0x24; // int32
    public const nint lforate = 0x28; // int32
    public const nint lfomodpitch = 0x2C; // int32
    public const nint lfomodvol = 0x30; // int32
    public const nint cspinup = 0x34; // int32
    public const nint cspincount = 0x38; // int32
    public const nint pitch = 0x3C; // int32
    public const nint spinupsav = 0x40; // int32
    public const nint spindownsav = 0x44; // int32
    public const nint pitchfrac = 0x48; // int32
    public const nint vol = 0x4C; // int32
    public const nint fadeinsav = 0x50; // int32
    public const nint fadeoutsav = 0x54; // int32
    public const nint volfrac = 0x58; // int32
    public const nint lfofrac = 0x5C; // int32
    public const nint lfomult = 0x60; // int32
}

public static class fogparams_t {
    public const nint dirPrimary = 0x8; // Vector
    public const nint colorPrimary = 0x14; // Color
    public const nint colorSecondary = 0x18; // Color
    public const nint colorPrimaryLerpTo = 0x1C; // Color
    public const nint colorSecondaryLerpTo = 0x20; // Color
    public const nint start = 0x24; // float32
    public const nint end = 0x28; // float32
    public const nint farz = 0x2C; // float32
    public const nint maxdensity = 0x30; // float32
    public const nint exponent = 0x34; // float32
    public const nint HDRColorScale = 0x38; // float32
    public const nint skyboxFogFactor = 0x3C; // float32
    public const nint skyboxFogFactorLerpTo = 0x40; // float32
    public const nint startLerpTo = 0x44; // float32
    public const nint endLerpTo = 0x48; // float32
    public const nint maxdensityLerpTo = 0x4C; // float32
    public const nint lerptime = 0x50; // GameTime_t
    public const nint duration = 0x54; // float32
    public const nint blendtobackground = 0x58; // float32
    public const nint scattering = 0x5C; // float32
    public const nint locallightscale = 0x60; // float32
    public const nint enable = 0x64; // bool
    public const nint blend = 0x65; // bool
    public const nint m_bNoReflectionFog = 0x66; // bool
    public const nint m_bPadding = 0x67; // bool
}

public static class fogplayerparams_t {
    public const nint m_hCtrl = 0x8; // CHandle< CFogController >
    public const nint m_flTransitionTime = 0xC; // float32
    public const nint m_OldColor = 0x10; // Color
    public const nint m_flOldStart = 0x14; // float32
    public const nint m_flOldEnd = 0x18; // float32
    public const nint m_flOldMaxDensity = 0x1C; // float32
    public const nint m_flOldHDRColorScale = 0x20; // float32
    public const nint m_flOldFarZ = 0x24; // float32
    public const nint m_NewColor = 0x28; // Color
    public const nint m_flNewStart = 0x2C; // float32
    public const nint m_flNewEnd = 0x30; // float32
    public const nint m_flNewMaxDensity = 0x34; // float32
    public const nint m_flNewHDRColorScale = 0x38; // float32
    public const nint m_flNewFarZ = 0x3C; // float32
}

public static class hudtextparms_t {
    public const nint color1 = 0x0; // Color
    public const nint color2 = 0x4; // Color
    public const nint effect = 0x8; // uint8
    public const nint channel = 0x9; // uint8
    public const nint x = 0xC; // float32
    public const nint y = 0x10; // float32
}

public static class lerpdata_t {
    public const nint m_hEnt = 0x0; // CHandle< CBaseEntity >
    public const nint m_MoveType = 0x4; // MoveType_t
    public const nint m_flStartTime = 0x8; // GameTime_t
    public const nint m_vecStartOrigin = 0xC; // Vector
    public const nint m_qStartRot = 0x20; // Quaternion
    public const nint m_nFXIndex = 0x30; // ParticleIndex_t
}

public static class locksound_t {
    public const nint sLockedSound = 0x8; // CUtlSymbolLarge
    public const nint sUnlockedSound = 0x10; // CUtlSymbolLarge
    public const nint flwaitSound = 0x18; // GameTime_t
}

public static class magnetted_objects_t {
    public const nint hEntity = 0x8; // CHandle< CBaseEntity >
}

public static class ragdoll_t {
    public const nint list = 0x0; // CUtlVector< ragdollelement_t >
    public const nint boneIndex = 0x18; // CUtlVector< int32 >
    public const nint allowStretch = 0x30; // bool
    public const nint unused = 0x31; // bool
}

public static class ragdollelement_t {
    public const nint originParentSpace = 0x0; // Vector
    public const nint parentIndex = 0x20; // int32
    public const nint m_flRadius = 0x24; // float32
}

public static class shard_model_desc_t {
    public const nint m_nModelID = 0x8; // int32
    public const nint m_hMaterial = 0x10; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    public const nint m_solid = 0x18; // ShardSolid_t
    public const nint m_ShatterPanelMode = 0x19; // ShatterPanelMode
    public const nint m_vecPanelSize = 0x1C; // Vector2D
    public const nint m_vecStressPositionA = 0x24; // Vector2D
    public const nint m_vecStressPositionB = 0x2C; // Vector2D
    public const nint m_vecPanelVertices = 0x38; // CNetworkUtlVectorBase< Vector2D >
    public const nint m_flGlassHalfThickness = 0x50; // float32
    public const nint m_bHasParent = 0x54; // bool
    public const nint m_bParentFrozen = 0x55; // bool
    public const nint m_SurfacePropStringToken = 0x58; // CUtlStringToken
    public const nint m_LightGroup = 0x5C; // CUtlStringToken
}

public static class sky3dparams_t {
    public const nint scale = 0x8; // int16
    public const nint origin = 0xC; // Vector
    public const nint bClip3DSkyBoxNearToWorldFar = 0x18; // bool
    public const nint flClip3DSkyBoxNearToWorldFarOffset = 0x1C; // float32
    public const nint fog = 0x20; // fogparams_t
    public const nint m_nWorldGroupID = 0x88; // WorldGroupId_t
}

public static class thinkfunc_t {
    public const nint m_hFn = 0x8; // HSCRIPT
    public const nint m_nContext = 0x10; // CUtlStringToken
    public const nint m_nNextThinkTick = 0x14; // GameTick_t
    public const nint m_nLastThinkTick = 0x18; // GameTick_t
}