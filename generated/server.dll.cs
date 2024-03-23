/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 23 Mar 2024 05:02:04 +0000
 */

public static class ActiveModelConfig_t {
    public const nint m_Handle = 0x28; // ModelConfigHandle_t
    public const nint m_Name = 0x30; // CUtlSymbolLarge
    public const nint m_AssociatedEntities = 0x38; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    public const nint m_AssociatedEntityNames = 0x50; // CNetworkUtlVectorBase<CUtlSymbolLarge>
}

public static class AmmoIndex_t {
    public const nint m_Value = 0x0; // int8_t
}

public static class AmmoTypeInfo_t {
    public const nint m_nMaxCarry = 0x10; // int32_t
    public const nint m_nSplashSize = 0x1C; // CRangeInt
    public const nint m_nFlags = 0x24; // AmmoFlags_t
    public const nint m_flMass = 0x28; // float
    public const nint m_flSpeed = 0x2C; // CRangeFloat
}

public static class CAISound { // CPointEntity
    public const nint m_iSoundType = 0x4C0; // int32_t
    public const nint m_iSoundContext = 0x4C4; // int32_t
    public const nint m_iVolume = 0x4C8; // int32_t
    public const nint m_iSoundIndex = 0x4CC; // int32_t
    public const nint m_flDuration = 0x4D0; // float
    public const nint m_iszProxyEntityName = 0x4D8; // CUtlSymbolLarge
}

public static class CAI_ChangeHintGroup { // CBaseEntity
    public const nint m_iSearchType = 0x4C0; // int32_t
    public const nint m_strSearchName = 0x4C8; // CUtlSymbolLarge
    public const nint m_strNewHintGroup = 0x4D0; // CUtlSymbolLarge
    public const nint m_flRadius = 0x4D8; // float
}

public static class CAI_Expresser {
    public const nint m_flStopTalkTime = 0x38; // GameTime_t
    public const nint m_flStopTalkTimeWithoutDelay = 0x3C; // GameTime_t
    public const nint m_flBlockedTalkTime = 0x40; // GameTime_t
    public const nint m_voicePitch = 0x44; // int32_t
    public const nint m_flLastTimeAcceptedSpeak = 0x48; // GameTime_t
    public const nint m_bAllowSpeakingInterrupts = 0x4C; // bool
    public const nint m_bConsiderSceneInvolvementAsSpeech = 0x4D; // bool
    public const nint m_nLastSpokenPriority = 0x50; // int32_t
    public const nint m_pOuter = 0x58; // CBaseFlex*
}

public static class CAI_ExpresserWithFollowup { // CAI_Expresser
    public const nint m_pPostponedFollowup = 0x60; // ResponseFollowup*
}

public static class CAK47 { // CCSWeaponBaseGun
}

public static class CAmbientGeneric { // CPointEntity
    public const nint m_radius = 0x4C0; // float
    public const nint m_flMaxRadius = 0x4C4; // float
    public const nint m_iSoundLevel = 0x4C8; // soundlevel_t
    public const nint m_dpv = 0x4CC; // dynpitchvol_t
    public const nint m_fActive = 0x530; // bool
    public const nint m_fLooping = 0x531; // bool
    public const nint m_iszSound = 0x538; // CUtlSymbolLarge
    public const nint m_sSourceEntName = 0x540; // CUtlSymbolLarge
    public const nint m_hSoundSource = 0x548; // CHandle<CBaseEntity>
    public const nint m_nSoundSourceEntIndex = 0x54C; // CEntityIndex
}

public static class CAnimEventListener { // CAnimEventListenerBase
}

public static class CAnimEventListenerBase {
}

public static class CAnimEventQueueListener { // CAnimEventListenerBase
}

public static class CAnimGraphControllerBase {
}

public static class CAnimGraphNetworkedVariables {
    public const nint m_PredNetBoolVariables = 0x8; // CNetworkUtlVectorBase<uint32_t>
    public const nint m_PredNetByteVariables = 0x20; // CNetworkUtlVectorBase<uint8_t>
    public const nint m_PredNetUInt16Variables = 0x38; // CNetworkUtlVectorBase<uint16_t>
    public const nint m_PredNetIntVariables = 0x50; // CNetworkUtlVectorBase<int32_t>
    public const nint m_PredNetUInt32Variables = 0x68; // CNetworkUtlVectorBase<uint32_t>
    public const nint m_PredNetUInt64Variables = 0x80; // CNetworkUtlVectorBase<uint64_t>
    public const nint m_PredNetFloatVariables = 0x98; // CNetworkUtlVectorBase<float>
    public const nint m_PredNetVectorVariables = 0xB0; // CNetworkUtlVectorBase<Vector>
    public const nint m_PredNetQuaternionVariables = 0xC8; // CNetworkUtlVectorBase<Quaternion>
    public const nint m_PredNetGlobalSymbolVariables = 0xE0; // CNetworkUtlVectorBase<CGlobalSymbol>
    public const nint m_OwnerOnlyPredNetBoolVariables = 0xF8; // CNetworkUtlVectorBase<uint32_t>
    public const nint m_OwnerOnlyPredNetByteVariables = 0x110; // CNetworkUtlVectorBase<uint8_t>
    public const nint m_OwnerOnlyPredNetUInt16Variables = 0x128; // CNetworkUtlVectorBase<uint16_t>
    public const nint m_OwnerOnlyPredNetIntVariables = 0x140; // CNetworkUtlVectorBase<int32_t>
    public const nint m_OwnerOnlyPredNetUInt32Variables = 0x158; // CNetworkUtlVectorBase<uint32_t>
    public const nint m_OwnerOnlyPredNetUInt64Variables = 0x170; // CNetworkUtlVectorBase<uint64_t>
    public const nint m_OwnerOnlyPredNetFloatVariables = 0x188; // CNetworkUtlVectorBase<float>
    public const nint m_OwnerOnlyPredNetVectorVariables = 0x1A0; // CNetworkUtlVectorBase<Vector>
    public const nint m_OwnerOnlyPredNetQuaternionVariables = 0x1B8; // CNetworkUtlVectorBase<Quaternion>
    public const nint m_OwnerOnlyPredNetGlobalSymbolVariables = 0x1D0; // CNetworkUtlVectorBase<CGlobalSymbol>
    public const nint m_nBoolVariablesCount = 0x1E8; // int32_t
    public const nint m_nOwnerOnlyBoolVariablesCount = 0x1EC; // int32_t
    public const nint m_nRandomSeedOffset = 0x1F0; // int32_t
    public const nint m_flLastTeleportTime = 0x1F4; // float
}

public static class CAttributeContainer { // CAttributeManager
    public const nint m_Item = 0x50; // CEconItemView
}

public static class CAttributeList {
    public const nint m_Attributes = 0x8; // CUtlVectorEmbeddedNetworkVar<CEconItemAttribute>
    public const nint m_pManager = 0x58; // CAttributeManager*
}

public static class CAttributeManager {
    public const nint m_Providers = 0x8; // CUtlVector<CHandle<CBaseEntity>>
    public const nint m_iReapplyProvisionParity = 0x20; // int32_t
    public const nint m_hOuter = 0x24; // CHandle<CBaseEntity>
    public const nint m_bPreventLoopback = 0x28; // bool
    public const nint m_ProviderType = 0x2C; // attributeprovidertypes_t
    public const nint m_CachedResults = 0x30; // CUtlVector<CAttributeManager::cached_attribute_float_t>
}

public static class CAttributeManager_cached_attribute_float_t {
    public const nint flIn = 0x0; // float
    public const nint iAttribHook = 0x8; // CUtlSymbolLarge
    public const nint flOut = 0x10; // float
}

public static class CBarnLight { // CBaseModelEntity
    public const nint m_bEnabled = 0x710; // bool
    public const nint m_nColorMode = 0x714; // int32_t
    public const nint m_Color = 0x718; // Color
    public const nint m_flColorTemperature = 0x71C; // float
    public const nint m_flBrightness = 0x720; // float
    public const nint m_flBrightnessScale = 0x724; // float
    public const nint m_nDirectLight = 0x728; // int32_t
    public const nint m_nBakedShadowIndex = 0x72C; // int32_t
    public const nint m_nLuminaireShape = 0x730; // int32_t
    public const nint m_flLuminaireSize = 0x734; // float
    public const nint m_flLuminaireAnisotropy = 0x738; // float
    public const nint m_LightStyleString = 0x740; // CUtlString
    public const nint m_flLightStyleStartTime = 0x748; // GameTime_t
    public const nint m_QueuedLightStyleStrings = 0x750; // CNetworkUtlVectorBase<CUtlString>
    public const nint m_LightStyleEvents = 0x768; // CNetworkUtlVectorBase<CUtlString>
    public const nint m_LightStyleTargets = 0x780; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    public const nint m_StyleEvent = 0x798; // CEntityIOOutput[4]
    public const nint m_hLightCookie = 0x858; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_flShape = 0x860; // float
    public const nint m_flSoftX = 0x864; // float
    public const nint m_flSoftY = 0x868; // float
    public const nint m_flSkirt = 0x86C; // float
    public const nint m_flSkirtNear = 0x870; // float
    public const nint m_vSizeParams = 0x874; // Vector
    public const nint m_flRange = 0x880; // float
    public const nint m_vShear = 0x884; // Vector
    public const nint m_nBakeSpecularToCubemaps = 0x890; // int32_t
    public const nint m_vBakeSpecularToCubemapsSize = 0x894; // Vector
    public const nint m_nCastShadows = 0x8A0; // int32_t
    public const nint m_nShadowMapSize = 0x8A4; // int32_t
    public const nint m_nShadowPriority = 0x8A8; // int32_t
    public const nint m_bContactShadow = 0x8AC; // bool
    public const nint m_nBounceLight = 0x8B0; // int32_t
    public const nint m_flBounceScale = 0x8B4; // float
    public const nint m_flMinRoughness = 0x8B8; // float
    public const nint m_vAlternateColor = 0x8BC; // Vector
    public const nint m_fAlternateColorBrightness = 0x8C8; // float
    public const nint m_nFog = 0x8CC; // int32_t
    public const nint m_flFogStrength = 0x8D0; // float
    public const nint m_nFogShadows = 0x8D4; // int32_t
    public const nint m_flFogScale = 0x8D8; // float
    public const nint m_flFadeSizeStart = 0x8DC; // float
    public const nint m_flFadeSizeEnd = 0x8E0; // float
    public const nint m_flShadowFadeSizeStart = 0x8E4; // float
    public const nint m_flShadowFadeSizeEnd = 0x8E8; // float
    public const nint m_bPrecomputedFieldsValid = 0x8EC; // bool
    public const nint m_vPrecomputedBoundsMins = 0x8F0; // Vector
    public const nint m_vPrecomputedBoundsMaxs = 0x8FC; // Vector
    public const nint m_vPrecomputedOBBOrigin = 0x908; // Vector
    public const nint m_vPrecomputedOBBAngles = 0x914; // QAngle
    public const nint m_vPrecomputedOBBExtent = 0x920; // Vector
    public const nint m_bPvsModifyEntity = 0x92C; // bool
}

public static class CBaseAnimGraph { // CBaseModelEntity
    public const nint m_bInitiallyPopulateInterpHistory = 0x788; // bool
    public const nint m_pChoreoServices = 0x790; // IChoreoServices*
    public const nint m_bAnimGraphUpdateEnabled = 0x798; // bool
    public const nint m_flMaxSlopeDistance = 0x79C; // float
    public const nint m_vLastSlopeCheckPos = 0x7A0; // Vector
    public const nint m_bAnimationUpdateScheduled = 0x7AC; // bool
    public const nint m_vecForce = 0x7B0; // Vector
    public const nint m_nForceBone = 0x7BC; // int32_t
    public const nint m_pRagdollPose = 0x7D0; // PhysicsRagdollPose_t*
    public const nint m_bClientRagdoll = 0x7D8; // bool
}

public static class CBaseAnimGraphController { // CSkeletonAnimationController
    public const nint m_animGraphNetworkedVars = 0x18; // CAnimGraphNetworkedVariables
    public const nint m_bSequenceFinished = 0x220; // bool
    public const nint m_flSoundSyncTime = 0x224; // float
    public const nint m_hSequence = 0x228; // HSequence
    public const nint m_flSeqStartTime = 0x22C; // GameTime_t
    public const nint m_flSeqFixedCycle = 0x230; // float
    public const nint m_nAnimLoopMode = 0x234; // AnimLoopMode_t
    public const nint m_flPlaybackRate = 0x238; // CNetworkedQuantizedFloat
    public const nint m_nNotifyState = 0x244; // SequenceFinishNotifyState_t
    public const nint m_bNetworkedAnimationInputsChanged = 0x246; // bool
    public const nint m_bNetworkedSequenceChanged = 0x247; // bool
    public const nint m_bLastUpdateSkipped = 0x248; // bool
    public const nint m_flPrevAnimUpdateTime = 0x24C; // GameTime_t
}

public static class CBaseButton { // CBaseToggle
    public const nint m_angMoveEntitySpace = 0x790; // QAngle
    public const nint m_fStayPushed = 0x79C; // bool
    public const nint m_fRotating = 0x79D; // bool
    public const nint m_ls = 0x7A0; // locksound_t
    public const nint m_sUseSound = 0x7C0; // CUtlSymbolLarge
    public const nint m_sLockedSound = 0x7C8; // CUtlSymbolLarge
    public const nint m_sUnlockedSound = 0x7D0; // CUtlSymbolLarge
    public const nint m_bLocked = 0x7D8; // bool
    public const nint m_bDisabled = 0x7D9; // bool
    public const nint m_flUseLockedTime = 0x7DC; // GameTime_t
    public const nint m_bSolidBsp = 0x7E0; // bool
    public const nint m_OnDamaged = 0x7E8; // CEntityIOOutput
    public const nint m_OnPressed = 0x810; // CEntityIOOutput
    public const nint m_OnUseLocked = 0x838; // CEntityIOOutput
    public const nint m_OnIn = 0x860; // CEntityIOOutput
    public const nint m_OnOut = 0x888; // CEntityIOOutput
    public const nint m_nState = 0x8B0; // int32_t
    public const nint m_hConstraint = 0x8B4; // CEntityHandle
    public const nint m_hConstraintParent = 0x8B8; // CEntityHandle
    public const nint m_bForceNpcExclude = 0x8BC; // bool
    public const nint m_sGlowEntity = 0x8C0; // CUtlSymbolLarge
    public const nint m_glowEntity = 0x8C8; // CHandle<CBaseModelEntity>
    public const nint m_usable = 0x8CC; // bool
    public const nint m_szDisplayText = 0x8D0; // CUtlSymbolLarge
}

public static class CBaseCSGrenade { // CCSWeaponBase
    public const nint m_bRedraw = 0xE90; // bool
    public const nint m_bIsHeldByPlayer = 0xE91; // bool
    public const nint m_bPinPulled = 0xE92; // bool
    public const nint m_bJumpThrow = 0xE93; // bool
    public const nint m_bThrowAnimating = 0xE94; // bool
    public const nint m_fThrowTime = 0xE98; // GameTime_t
    public const nint m_flThrowStrength = 0xE9C; // float
    public const nint m_flThrowStrengthApproach = 0xEA0; // float
    public const nint m_fDropTime = 0xEA4; // GameTime_t
    public const nint m_bJustPulledPin = 0xEA8; // bool
    public const nint m_nNextHoldTick = 0xEAC; // GameTick_t
    public const nint m_flNextHoldFrac = 0xEB0; // float
    public const nint m_hSwitchToWeaponAfterThrow = 0xEB4; // CHandle<CCSWeaponBase>
}

public static class CBaseCSGrenadeProjectile { // CBaseGrenade
    public const nint m_vInitialPosition = 0xA20; // Vector
    public const nint m_vInitialVelocity = 0xA2C; // Vector
    public const nint m_nBounces = 0xA38; // int32_t
    public const nint m_nExplodeEffectIndex = 0xA40; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    public const nint m_nExplodeEffectTickBegin = 0xA48; // int32_t
    public const nint m_vecExplodeEffectOrigin = 0xA4C; // Vector
    public const nint m_flSpawnTime = 0xA58; // GameTime_t
    public const nint m_unOGSExtraFlags = 0xA5C; // uint8_t
    public const nint m_bDetonationRecorded = 0xA5D; // bool
    public const nint m_flDetonateTime = 0xA60; // GameTime_t
    public const nint m_nItemIndex = 0xA64; // uint16_t
    public const nint m_vecOriginalSpawnLocation = 0xA68; // Vector
    public const nint m_flLastBounceSoundTime = 0xA74; // GameTime_t
    public const nint m_vecGrenadeSpin = 0xA78; // RotationVector
    public const nint m_vecLastHitSurfaceNormal = 0xA84; // Vector
    public const nint m_nTicksAtZeroVelocity = 0xA90; // int32_t
    public const nint m_bHasEverHitPlayer = 0xA94; // bool
    public const nint m_bClearFromPlayers = 0xA95; // bool
}

public static class CBaseClientUIEntity { // CBaseModelEntity
    public const nint m_bEnabled = 0x710; // bool
    public const nint m_DialogXMLName = 0x718; // CUtlSymbolLarge
    public const nint m_PanelClassName = 0x720; // CUtlSymbolLarge
    public const nint m_PanelID = 0x728; // CUtlSymbolLarge
    public const nint m_CustomOutput0 = 0x730; // CEntityIOOutput
    public const nint m_CustomOutput1 = 0x758; // CEntityIOOutput
    public const nint m_CustomOutput2 = 0x780; // CEntityIOOutput
    public const nint m_CustomOutput3 = 0x7A8; // CEntityIOOutput
    public const nint m_CustomOutput4 = 0x7D0; // CEntityIOOutput
    public const nint m_CustomOutput5 = 0x7F8; // CEntityIOOutput
    public const nint m_CustomOutput6 = 0x820; // CEntityIOOutput
    public const nint m_CustomOutput7 = 0x848; // CEntityIOOutput
    public const nint m_CustomOutput8 = 0x870; // CEntityIOOutput
    public const nint m_CustomOutput9 = 0x898; // CEntityIOOutput
}

public static class CBaseCombatCharacter { // CBaseFlex
    public const nint m_bForceServerRagdoll = 0x978; // bool
    public const nint m_hMyWearables = 0x980; // CNetworkUtlVectorBase<CHandle<CEconWearable>>
    public const nint m_flFieldOfView = 0x998; // float
    public const nint m_impactEnergyScale = 0x99C; // float
    public const nint m_LastHitGroup = 0x9A0; // HitGroup_t
    public const nint m_bApplyStressDamage = 0x9A4; // bool
    public const nint m_bloodColor = 0x9A8; // int32_t
    public const nint m_iDamageCount = 0x9F0; // int32_t
    public const nint m_pVecRelationships = 0x9F8; // CUtlVector<RelationshipOverride_t>*
    public const nint m_strRelationships = 0xA00; // CUtlSymbolLarge
    public const nint m_eHull = 0xA08; // Hull_t
    public const nint m_nNavHullIdx = 0xA0C; // uint32_t
}

public static class CBaseDMStart { // CPointEntity
    public const nint m_Master = 0x4C0; // CUtlSymbolLarge
}

public static class CBaseDoor { // CBaseToggle
    public const nint m_angMoveEntitySpace = 0x7A0; // QAngle
    public const nint m_vecMoveDirParentSpace = 0x7AC; // Vector
    public const nint m_ls = 0x7B8; // locksound_t
    public const nint m_bForceClosed = 0x7D8; // bool
    public const nint m_bDoorGroup = 0x7D9; // bool
    public const nint m_bLocked = 0x7DA; // bool
    public const nint m_bIgnoreDebris = 0x7DB; // bool
    public const nint m_eSpawnPosition = 0x7DC; // FuncDoorSpawnPos_t
    public const nint m_flBlockDamage = 0x7E0; // float
    public const nint m_NoiseMoving = 0x7E8; // CUtlSymbolLarge
    public const nint m_NoiseArrived = 0x7F0; // CUtlSymbolLarge
    public const nint m_NoiseMovingClosed = 0x7F8; // CUtlSymbolLarge
    public const nint m_NoiseArrivedClosed = 0x800; // CUtlSymbolLarge
    public const nint m_ChainTarget = 0x808; // CUtlSymbolLarge
    public const nint m_OnBlockedClosing = 0x810; // CEntityIOOutput
    public const nint m_OnBlockedOpening = 0x838; // CEntityIOOutput
    public const nint m_OnUnblockedClosing = 0x860; // CEntityIOOutput
    public const nint m_OnUnblockedOpening = 0x888; // CEntityIOOutput
    public const nint m_OnFullyClosed = 0x8B0; // CEntityIOOutput
    public const nint m_OnFullyOpen = 0x8D8; // CEntityIOOutput
    public const nint m_OnClose = 0x900; // CEntityIOOutput
    public const nint m_OnOpen = 0x928; // CEntityIOOutput
    public const nint m_OnLockedUse = 0x950; // CEntityIOOutput
    public const nint m_bLoopMoveSound = 0x978; // bool
    public const nint m_bCreateNavObstacle = 0x990; // bool
    public const nint m_isChaining = 0x991; // bool
    public const nint m_bIsUsable = 0x992; // bool
}

public static class CBaseEntity { // CEntityInstance
    public const nint m_CBodyComponent = 0x38; // CBodyComponent*
    public const nint m_NetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
    public const nint m_aThinkFunctions = 0x230; // CUtlVector<thinkfunc_t>
    public const nint m_iCurrentThinkContext = 0x248; // int32_t
    public const nint m_nLastThinkTick = 0x24C; // GameTick_t
    public const nint m_nDisableContextThinkStartTick = 0x250; // GameTick_t
    public const nint m_isSteadyState = 0x260; // CBitVec<64>
    public const nint m_lastNetworkChange = 0x268; // float
    public const nint m_ResponseContexts = 0x278; // CUtlVector<ResponseContext_t>
    public const nint m_iszResponseContext = 0x290; // CUtlSymbolLarge
    public const nint m_iHealth = 0x2B8; // int32_t
    public const nint m_iMaxHealth = 0x2BC; // int32_t
    public const nint m_lifeState = 0x2C0; // uint8_t
    public const nint m_flDamageAccumulator = 0x2C4; // float
    public const nint m_bTakesDamage = 0x2C8; // bool
    public const nint m_nTakeDamageFlags = 0x2CC; // TakeDamageFlags_t
    public const nint m_bIsPlatform = 0x2D0; // bool
    public const nint m_MoveCollide = 0x2D2; // MoveCollide_t
    public const nint m_MoveType = 0x2D3; // MoveType_t
    public const nint m_nActualMoveType = 0x2D4; // MoveType_t
    public const nint m_nWaterTouch = 0x2D5; // uint8_t
    public const nint m_nSlimeTouch = 0x2D6; // uint8_t
    public const nint m_bRestoreInHierarchy = 0x2D7; // bool
    public const nint m_target = 0x2D8; // CUtlSymbolLarge
    public const nint m_hDamageFilter = 0x2E0; // CHandle<CBaseFilter>
    public const nint m_iszDamageFilterName = 0x2E8; // CUtlSymbolLarge
    public const nint m_flMoveDoneTime = 0x2F0; // float
    public const nint m_nSubclassID = 0x2F4; // CUtlStringToken
    public const nint m_flAnimTime = 0x300; // float
    public const nint m_flSimulationTime = 0x304; // float
    public const nint m_flCreateTime = 0x308; // GameTime_t
    public const nint m_bClientSideRagdoll = 0x30C; // bool
    public const nint m_ubInterpolationFrame = 0x30D; // uint8_t
    public const nint m_vPrevVPhysicsUpdatePos = 0x310; // Vector
    public const nint m_iTeamNum = 0x31C; // uint8_t
    public const nint m_iGlobalname = 0x320; // CUtlSymbolLarge
    public const nint m_iSentToClients = 0x328; // int32_t
    public const nint m_flSpeed = 0x32C; // float
    public const nint m_sUniqueHammerID = 0x330; // CUtlString
    public const nint m_spawnflags = 0x338; // uint32_t
    public const nint m_nNextThinkTick = 0x33C; // GameTick_t
    public const nint m_nSimulationTick = 0x340; // int32_t
    public const nint m_OnKilled = 0x348; // CEntityIOOutput
    public const nint m_fFlags = 0x370; // uint32_t
    public const nint m_vecAbsVelocity = 0x374; // Vector
    public const nint m_vecVelocity = 0x380; // CNetworkVelocityVector
    public const nint m_vecBaseVelocity = 0x3B0; // Vector
    public const nint m_nPushEnumCount = 0x3BC; // int32_t
    public const nint m_pCollision = 0x3C0; // CCollisionProperty*
    public const nint m_hEffectEntity = 0x3C8; // CHandle<CBaseEntity>
    public const nint m_hOwnerEntity = 0x3CC; // CHandle<CBaseEntity>
    public const nint m_fEffects = 0x3D0; // uint32_t
    public const nint m_hGroundEntity = 0x3D4; // CHandle<CBaseEntity>
    public const nint m_flFriction = 0x3D8; // float
    public const nint m_flElasticity = 0x3DC; // float
    public const nint m_flGravityScale = 0x3E0; // float
    public const nint m_flTimeScale = 0x3E4; // float
    public const nint m_flWaterLevel = 0x3E8; // float
    public const nint m_bAnimatedEveryTick = 0x3EC; // bool
    public const nint m_bDisableLowViolence = 0x3ED; // bool
    public const nint m_nWaterType = 0x3EE; // uint8_t
    public const nint m_iEFlags = 0x3F0; // int32_t
    public const nint m_OnUser1 = 0x3F8; // CEntityIOOutput
    public const nint m_OnUser2 = 0x420; // CEntityIOOutput
    public const nint m_OnUser3 = 0x448; // CEntityIOOutput
    public const nint m_OnUser4 = 0x470; // CEntityIOOutput
    public const nint m_iInitialTeamNum = 0x498; // int32_t
    public const nint m_flNavIgnoreUntilTime = 0x49C; // GameTime_t
    public const nint m_vecAngVelocity = 0x4A0; // QAngle
    public const nint m_bNetworkQuantizeOriginAndAngles = 0x4AC; // bool
    public const nint m_bLagCompensate = 0x4AD; // bool
    public const nint m_flOverriddenFriction = 0x4B0; // float
    public const nint m_pBlocker = 0x4B4; // CHandle<CBaseEntity>
    public const nint m_flLocalTime = 0x4B8; // float
    public const nint m_flVPhysicsUpdateLocalTime = 0x4BC; // float
}

public static class CBaseEntityAPI {
}

public static class CBaseFilter { // CLogicalEntity
    public const nint m_bNegated = 0x4C0; // bool
    public const nint m_OnPass = 0x4C8; // CEntityIOOutput
    public const nint m_OnFail = 0x4F0; // CEntityIOOutput
}

public static class CBaseFire { // CBaseEntity
    public const nint m_flScale = 0x4C0; // float
    public const nint m_flStartScale = 0x4C4; // float
    public const nint m_flScaleTime = 0x4C8; // float
    public const nint m_nFlags = 0x4CC; // uint32_t
}

public static class CBaseFlex { // CBaseAnimGraph
    public const nint m_flexWeight = 0x8E8; // CNetworkUtlVectorBase<float>
    public const nint m_vLookTargetPosition = 0x900; // Vector
    public const nint m_blinktoggle = 0x90C; // bool
    public const nint m_flAllowResponsesEndTime = 0x960; // GameTime_t
    public const nint m_flLastFlexAnimationTime = 0x964; // GameTime_t
    public const nint m_nNextSceneEventId = 0x968; // uint32_t
    public const nint m_bUpdateLayerPriorities = 0x96C; // bool
}

public static class CBaseFlexAlias_funCBaseFlex { // CBaseFlex
}

public static class CBaseGrenade { // CBaseFlex
    public const nint m_OnPlayerPickup = 0x980; // CEntityIOOutput
    public const nint m_OnExplode = 0x9A8; // CEntityIOOutput
    public const nint m_bHasWarnedAI = 0x9D0; // bool
    public const nint m_bIsSmokeGrenade = 0x9D1; // bool
    public const nint m_bIsLive = 0x9D2; // bool
    public const nint m_DmgRadius = 0x9D4; // float
    public const nint m_flDetonateTime = 0x9D8; // GameTime_t
    public const nint m_flWarnAITime = 0x9DC; // float
    public const nint m_flDamage = 0x9E0; // float
    public const nint m_iszBounceSound = 0x9E8; // CUtlSymbolLarge
    public const nint m_ExplosionSound = 0x9F0; // CUtlString
    public const nint m_hThrower = 0x9FC; // CHandle<CCSPlayerPawn>
    public const nint m_flNextAttack = 0xA14; // GameTime_t
    public const nint m_hOriginalThrower = 0xA18; // CHandle<CCSPlayerPawn>
}

public static class CBaseIssue {
    public const nint m_szTypeString = 0x20; // char[64]
    public const nint m_szDetailsString = 0x60; // char[260]
    public const nint m_iNumYesVotes = 0x164; // int32_t
    public const nint m_iNumNoVotes = 0x168; // int32_t
    public const nint m_iNumPotentialVotes = 0x16C; // int32_t
    public const nint m_pVoteController = 0x170; // CVoteController*
}

public static class CBaseModelEntity { // CBaseEntity
    public const nint m_CRenderComponent = 0x4C0; // CRenderComponent*
    public const nint m_CHitboxComponent = 0x4C8; // CHitboxComponent
    public const nint m_flDissolveStartTime = 0x4F0; // GameTime_t
    public const nint m_OnIgnite = 0x4F8; // CEntityIOOutput
    public const nint m_nRenderMode = 0x520; // RenderMode_t
    public const nint m_nRenderFX = 0x521; // RenderFx_t
    public const nint m_bAllowFadeInView = 0x522; // bool
    public const nint m_clrRender = 0x523; // Color
    public const nint m_vecRenderAttributes = 0x528; // CUtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
    public const nint m_bRenderToCubemaps = 0x578; // bool
    public const nint m_Collision = 0x580; // CCollisionProperty
    public const nint m_Glow = 0x630; // CGlowProperty
    public const nint m_flGlowBackfaceMult = 0x688; // float
    public const nint m_fadeMinDist = 0x68C; // float
    public const nint m_fadeMaxDist = 0x690; // float
    public const nint m_flFadeScale = 0x694; // float
    public const nint m_flShadowStrength = 0x698; // float
    public const nint m_nObjectCulling = 0x69C; // uint8_t
    public const nint m_nAddDecal = 0x6A0; // int32_t
    public const nint m_vDecalPosition = 0x6A4; // Vector
    public const nint m_vDecalForwardAxis = 0x6B0; // Vector
    public const nint m_flDecalHealBloodRate = 0x6BC; // float
    public const nint m_flDecalHealHeightRate = 0x6C0; // float
    public const nint m_ConfigEntitiesToPropagateMaterialDecalsTo = 0x6C8; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    public const nint m_vecViewOffset = 0x6E0; // CNetworkViewOffsetVector
}

public static class CBaseMoveBehavior { // CPathKeyFrame
    public const nint m_iPositionInterpolator = 0x520; // int32_t
    public const nint m_iRotationInterpolator = 0x524; // int32_t
    public const nint m_flAnimStartTime = 0x528; // float
    public const nint m_flAnimEndTime = 0x52C; // float
    public const nint m_flAverageSpeedAcrossFrame = 0x530; // float
    public const nint m_pCurrentKeyFrame = 0x538; // CPathKeyFrame*
    public const nint m_pTargetKeyFrame = 0x540; // CPathKeyFrame*
    public const nint m_pPreKeyFrame = 0x548; // CPathKeyFrame*
    public const nint m_pPostKeyFrame = 0x550; // CPathKeyFrame*
    public const nint m_flTimeIntoFrame = 0x558; // float
    public const nint m_iDirection = 0x55C; // int32_t
}

public static class CBasePlatTrain { // CBaseToggle
    public const nint m_NoiseMoving = 0x790; // CUtlSymbolLarge
    public const nint m_NoiseArrived = 0x798; // CUtlSymbolLarge
    public const nint m_volume = 0x7A8; // float
    public const nint m_flTWidth = 0x7AC; // float
    public const nint m_flTLength = 0x7B0; // float
}

public static class CBasePlayerController { // CBaseEntity
    public const nint m_nInButtonsWhichAreToggles = 0x4C8; // uint64_t
    public const nint m_nTickBase = 0x4D0; // uint32_t
    public const nint m_hPawn = 0x500; // CHandle<CBasePlayerPawn>
    public const nint m_nSplitScreenSlot = 0x504; // CSplitScreenSlot
    public const nint m_hSplitOwner = 0x508; // CHandle<CBasePlayerController>
    public const nint m_hSplitScreenPlayers = 0x510; // CUtlVector<CHandle<CBasePlayerController>>
    public const nint m_bIsHLTV = 0x528; // bool
    public const nint m_iConnected = 0x52C; // PlayerConnectedState
    public const nint m_iszPlayerName = 0x530; // char[128]
    public const nint m_szNetworkIDString = 0x5B0; // CUtlString
    public const nint m_fLerpTime = 0x5B8; // float
    public const nint m_bLagCompensation = 0x5BC; // bool
    public const nint m_bPredict = 0x5BD; // bool
    public const nint m_bAutoKickDisabled = 0x5BE; // bool
    public const nint m_bIsLowViolence = 0x5BF; // bool
    public const nint m_bGamePaused = 0x5C0; // bool
    public const nint m_nLastRealCommandNumberExecuted = 0x654; // int32_t
    public const nint m_nLastLateCommandExecuted = 0x658; // int32_t
    public const nint m_iIgnoreGlobalChat = 0x670; // ChatIgnoreType_t
    public const nint m_flLastPlayerTalkTime = 0x674; // float
    public const nint m_flLastEntitySteadyState = 0x678; // float
    public const nint m_nAvailableEntitySteadyState = 0x67C; // int32_t
    public const nint m_bHasAnySteadyStateEnts = 0x680; // bool
    public const nint m_steamID = 0x690; // uint64_t
    public const nint m_iDesiredFOV = 0x698; // uint32_t
}

public static class CBasePlayerControllerAPI {
}

public static class CBasePlayerPawn { // CBaseCombatCharacter
    public const nint m_pWeaponServices = 0xA10; // CPlayer_WeaponServices*
    public const nint m_pItemServices = 0xA18; // CPlayer_ItemServices*
    public const nint m_pAutoaimServices = 0xA20; // CPlayer_AutoaimServices*
    public const nint m_pObserverServices = 0xA28; // CPlayer_ObserverServices*
    public const nint m_pWaterServices = 0xA30; // CPlayer_WaterServices*
    public const nint m_pUseServices = 0xA38; // CPlayer_UseServices*
    public const nint m_pFlashlightServices = 0xA40; // CPlayer_FlashlightServices*
    public const nint m_pCameraServices = 0xA48; // CPlayer_CameraServices*
    public const nint m_pMovementServices = 0xA50; // CPlayer_MovementServices*
    public const nint m_ServerViewAngleChanges = 0xA60; // CUtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
    public const nint m_nHighestGeneratedServerViewAngleChangeIndex = 0xAB0; // uint32_t
    public const nint v_angle = 0xAB4; // QAngle
    public const nint v_anglePrevious = 0xAC0; // QAngle
    public const nint m_iHideHUD = 0xACC; // uint32_t
    public const nint m_skybox3d = 0xAD0; // sky3dparams_t
    public const nint m_fTimeLastHurt = 0xB60; // GameTime_t
    public const nint m_flDeathTime = 0xB64; // GameTime_t
    public const nint m_fNextSuicideTime = 0xB68; // GameTime_t
    public const nint m_fInitHUD = 0xB6C; // bool
    public const nint m_pExpresser = 0xB70; // CAI_Expresser*
    public const nint m_hController = 0xB78; // CHandle<CBasePlayerController>
    public const nint m_fHltvReplayDelay = 0xB80; // float
    public const nint m_fHltvReplayEnd = 0xB84; // float
    public const nint m_iHltvReplayEntity = 0xB88; // CEntityIndex
    public const nint m_sndOpvarLatchData = 0xB90; // CUtlVector<sndopvarlatchdata_t>
}

public static class CBasePlayerVData { // CEntitySubclassVDataBase
    public const nint m_sModelName = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    public const nint m_flHeadDamageMultiplier = 0x108; // CSkillFloat
    public const nint m_flChestDamageMultiplier = 0x118; // CSkillFloat
    public const nint m_flStomachDamageMultiplier = 0x128; // CSkillFloat
    public const nint m_flArmDamageMultiplier = 0x138; // CSkillFloat
    public const nint m_flLegDamageMultiplier = 0x148; // CSkillFloat
    public const nint m_flHoldBreathTime = 0x158; // float
    public const nint m_flDrowningDamageInterval = 0x15C; // float
    public const nint m_nDrowningDamageInitial = 0x160; // int32_t
    public const nint m_nDrowningDamageMax = 0x164; // int32_t
    public const nint m_nWaterSpeed = 0x168; // int32_t
    public const nint m_flUseRange = 0x16C; // float
    public const nint m_flUseAngleTolerance = 0x170; // float
    public const nint m_flCrouchTime = 0x174; // float
}

public static class CBasePlayerWeapon { // CEconEntity
    public const nint m_nNextPrimaryAttackTick = 0xC70; // GameTick_t
    public const nint m_flNextPrimaryAttackTickRatio = 0xC74; // float
    public const nint m_nNextSecondaryAttackTick = 0xC78; // GameTick_t
    public const nint m_flNextSecondaryAttackTickRatio = 0xC7C; // float
    public const nint m_iClip1 = 0xC80; // int32_t
    public const nint m_iClip2 = 0xC84; // int32_t
    public const nint m_pReserveAmmo = 0xC88; // int32_t[2]
    public const nint m_OnPlayerUse = 0xC90; // CEntityIOOutput
}

public static class CBasePlayerWeaponVData { // CEntitySubclassVDataBase
    public const nint m_szWorldModel = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    public const nint m_bBuiltRightHanded = 0x108; // bool
    public const nint m_bAllowFlipping = 0x109; // bool
    public const nint m_sMuzzleAttachment = 0x110; // CUtlString
    public const nint m_szMuzzleFlashParticle = 0x118; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    public const nint m_iFlags = 0x1F8; // ItemFlagTypes_t
    public const nint m_nPrimaryAmmoType = 0x1F9; // AmmoIndex_t
    public const nint m_nSecondaryAmmoType = 0x1FA; // AmmoIndex_t
    public const nint m_iMaxClip1 = 0x1FC; // int32_t
    public const nint m_iMaxClip2 = 0x200; // int32_t
    public const nint m_iDefaultClip1 = 0x204; // int32_t
    public const nint m_iDefaultClip2 = 0x208; // int32_t
    public const nint m_iWeight = 0x20C; // int32_t
    public const nint m_bAutoSwitchTo = 0x210; // bool
    public const nint m_bAutoSwitchFrom = 0x211; // bool
    public const nint m_iRumbleEffect = 0x214; // RumbleEffect_t
    public const nint m_bLinkedCooldowns = 0x218; // bool
    public const nint m_aShootSounds = 0x220; // CUtlMap<WeaponSound_t,CSoundEventName>
    public const nint m_iSlot = 0x240; // int32_t
    public const nint m_iPosition = 0x244; // int32_t
}

public static class CBaseProp { // CBaseAnimGraph
    public const nint m_bModelOverrodeBlockLOS = 0x8E8; // bool
    public const nint m_iShapeType = 0x8EC; // int32_t
    public const nint m_bConformToCollisionBounds = 0x8F0; // bool
    public const nint m_mPreferredCatchTransform = 0x8F4; // matrix3x4_t
}

public static class CBasePropDoor { // CDynamicProp
    public const nint m_flAutoReturnDelay = 0xB70; // float
    public const nint m_hDoorList = 0xB78; // CUtlVector<CHandle<CBasePropDoor>>
    public const nint m_nHardwareType = 0xB90; // int32_t
    public const nint m_bNeedsHardware = 0xB94; // bool
    public const nint m_eDoorState = 0xB98; // DoorState_t
    public const nint m_bLocked = 0xB9C; // bool
    public const nint m_closedPosition = 0xBA0; // Vector
    public const nint m_closedAngles = 0xBAC; // QAngle
    public const nint m_hBlocker = 0xBB8; // CHandle<CBaseEntity>
    public const nint m_bFirstBlocked = 0xBBC; // bool
    public const nint m_ls = 0xBC0; // locksound_t
    public const nint m_bForceClosed = 0xBE0; // bool
    public const nint m_vecLatchWorldPosition = 0xBE4; // Vector
    public const nint m_hActivator = 0xBF0; // CHandle<CBaseEntity>
    public const nint m_SoundMoving = 0xC00; // CUtlSymbolLarge
    public const nint m_SoundOpen = 0xC08; // CUtlSymbolLarge
    public const nint m_SoundClose = 0xC10; // CUtlSymbolLarge
    public const nint m_SoundLock = 0xC18; // CUtlSymbolLarge
    public const nint m_SoundUnlock = 0xC20; // CUtlSymbolLarge
    public const nint m_SoundLatch = 0xC28; // CUtlSymbolLarge
    public const nint m_SoundPound = 0xC30; // CUtlSymbolLarge
    public const nint m_SoundJiggle = 0xC38; // CUtlSymbolLarge
    public const nint m_SoundLockedAnim = 0xC40; // CUtlSymbolLarge
    public const nint m_numCloseAttempts = 0xC48; // int32_t
    public const nint m_nPhysicsMaterial = 0xC4C; // CUtlStringToken
    public const nint m_SlaveName = 0xC50; // CUtlSymbolLarge
    public const nint m_hMaster = 0xC58; // CHandle<CBasePropDoor>
    public const nint m_OnBlockedClosing = 0xC60; // CEntityIOOutput
    public const nint m_OnBlockedOpening = 0xC88; // CEntityIOOutput
    public const nint m_OnUnblockedClosing = 0xCB0; // CEntityIOOutput
    public const nint m_OnUnblockedOpening = 0xCD8; // CEntityIOOutput
    public const nint m_OnFullyClosed = 0xD00; // CEntityIOOutput
    public const nint m_OnFullyOpen = 0xD28; // CEntityIOOutput
    public const nint m_OnClose = 0xD50; // CEntityIOOutput
    public const nint m_OnOpen = 0xD78; // CEntityIOOutput
    public const nint m_OnLockedUse = 0xDA0; // CEntityIOOutput
    public const nint m_OnAjarOpen = 0xDC8; // CEntityIOOutput
}

public static class CBaseToggle { // CBaseModelEntity
    public const nint m_toggle_state = 0x710; // TOGGLE_STATE
    public const nint m_flMoveDistance = 0x714; // float
    public const nint m_flWait = 0x718; // float
    public const nint m_flLip = 0x71C; // float
    public const nint m_bAlwaysFireBlockedOutputs = 0x720; // bool
    public const nint m_vecPosition1 = 0x724; // Vector
    public const nint m_vecPosition2 = 0x730; // Vector
    public const nint m_vecMoveAng = 0x73C; // QAngle
    public const nint m_vecAngle1 = 0x748; // QAngle
    public const nint m_vecAngle2 = 0x754; // QAngle
    public const nint m_flHeight = 0x760; // float
    public const nint m_hActivator = 0x764; // CHandle<CBaseEntity>
    public const nint m_vecFinalDest = 0x768; // Vector
    public const nint m_vecFinalAngle = 0x774; // QAngle
    public const nint m_movementType = 0x780; // int32_t
    public const nint m_sMaster = 0x788; // CUtlSymbolLarge
}

public static class CBaseTrigger { // CBaseToggle
    public const nint m_bDisabled = 0x790; // bool
    public const nint m_iFilterName = 0x798; // CUtlSymbolLarge
    public const nint m_hFilter = 0x7A0; // CHandle<CBaseFilter>
    public const nint m_OnStartTouch = 0x7A8; // CEntityIOOutput
    public const nint m_OnStartTouchAll = 0x7D0; // CEntityIOOutput
    public const nint m_OnEndTouch = 0x7F8; // CEntityIOOutput
    public const nint m_OnEndTouchAll = 0x820; // CEntityIOOutput
    public const nint m_OnTouching = 0x848; // CEntityIOOutput
    public const nint m_OnNotTouching = 0x870; // CEntityIOOutput
    public const nint m_hTouchingEntities = 0x898; // CUtlVector<CHandle<CBaseEntity>>
    public const nint m_bClientSidePredicted = 0x8B0; // bool
}

public static class CBaseViewModel { // CBaseAnimGraph
    public const nint m_vecLastFacing = 0x8F0; // Vector
    public const nint m_nViewModelIndex = 0x8FC; // uint32_t
    public const nint m_nAnimationParity = 0x900; // uint32_t
    public const nint m_flAnimationStartTime = 0x904; // float
    public const nint m_hWeapon = 0x908; // CHandle<CBasePlayerWeapon>
    public const nint m_sVMName = 0x910; // CUtlSymbolLarge
    public const nint m_sAnimationPrefix = 0x918; // CUtlSymbolLarge
    public const nint m_hOldLayerSequence = 0x920; // HSequence
    public const nint m_oldLayer = 0x924; // int32_t
    public const nint m_oldLayerStartTime = 0x928; // float
    public const nint m_hControlPanel = 0x92C; // CHandle<CBaseEntity>
}

public static class CBeam { // CBaseModelEntity
    public const nint m_flFrameRate = 0x710; // float
    public const nint m_flHDRColorScale = 0x714; // float
    public const nint m_flFireTime = 0x718; // GameTime_t
    public const nint m_flDamage = 0x71C; // float
    public const nint m_nNumBeamEnts = 0x720; // uint8_t
    public const nint m_hBaseMaterial = 0x728; // CStrongHandle<InfoForResourceTypeIMaterial2>
    public const nint m_nHaloIndex = 0x730; // CStrongHandle<InfoForResourceTypeIMaterial2>
    public const nint m_nBeamType = 0x738; // BeamType_t
    public const nint m_nBeamFlags = 0x73C; // uint32_t
    public const nint m_hAttachEntity = 0x740; // CHandle<CBaseEntity>[10]
    public const nint m_nAttachIndex = 0x768; // AttachmentHandle_t[10]
    public const nint m_fWidth = 0x774; // float
    public const nint m_fEndWidth = 0x778; // float
    public const nint m_fFadeLength = 0x77C; // float
    public const nint m_fHaloScale = 0x780; // float
    public const nint m_fAmplitude = 0x784; // float
    public const nint m_fStartFrame = 0x788; // float
    public const nint m_fSpeed = 0x78C; // float
    public const nint m_flFrame = 0x790; // float
    public const nint m_nClipStyle = 0x794; // BeamClipStyle_t
    public const nint m_bTurnedOff = 0x798; // bool
    public const nint m_vecEndPos = 0x79C; // Vector
    public const nint m_hEndEntity = 0x7A8; // CHandle<CBaseEntity>
    public const nint m_nDissolveType = 0x7AC; // int32_t
}

public static class CBlood { // CPointEntity
    public const nint m_vecSprayAngles = 0x4C0; // QAngle
    public const nint m_vecSprayDir = 0x4CC; // Vector
    public const nint m_flAmount = 0x4D8; // float
    public const nint m_Color = 0x4DC; // int32_t
}

public static class CBodyComponent { // CEntityComponent
    public const nint m_pSceneNode = 0x8; // CGameSceneNode*
    public const nint __m_pChainEntity = 0x20; // CNetworkVarChainer
}

public static class CBodyComponentBaseAnimGraph { // CBodyComponentSkeletonInstance
    public const nint m_animationController = 0x460; // CBaseAnimGraphController
    public const nint __m_pChainEntity = 0x950; // CNetworkVarChainer
}

public static class CBodyComponentBaseModelEntity { // CBodyComponentSkeletonInstance
    public const nint __m_pChainEntity = 0x460; // CNetworkVarChainer
}

public static class CBodyComponentPoint { // CBodyComponent
    public const nint m_sceneNode = 0x50; // CGameSceneNode
    public const nint __m_pChainEntity = 0x1A0; // CNetworkVarChainer
}

public static class CBodyComponentSkeletonInstance { // CBodyComponent
    public const nint m_skeletonInstance = 0x50; // CSkeletonInstance
    public const nint __m_pChainEntity = 0x430; // CNetworkVarChainer
}

public static class CBombTarget { // CBaseTrigger
    public const nint m_OnBombExplode = 0x8B8; // CEntityIOOutput
    public const nint m_OnBombPlanted = 0x8E0; // CEntityIOOutput
    public const nint m_OnBombDefused = 0x908; // CEntityIOOutput
    public const nint m_bIsBombSiteB = 0x930; // bool
    public const nint m_bIsHeistBombTarget = 0x931; // bool
    public const nint m_bBombPlantedHere = 0x932; // bool
    public const nint m_szMountTarget = 0x938; // CUtlSymbolLarge
    public const nint m_hInstructorHint = 0x940; // CHandle<CBaseEntity>
    public const nint m_nBombSiteDesignation = 0x944; // int32_t
}

public static class CBot {
    public const nint m_pController = 0x10; // CCSPlayerController*
    public const nint m_pPlayer = 0x18; // CCSPlayerPawn*
    public const nint m_bHasSpawned = 0x20; // bool
    public const nint m_id = 0x24; // uint32_t
    public const nint m_isRunning = 0xB0; // bool
    public const nint m_isCrouching = 0xB1; // bool
    public const nint m_forwardSpeed = 0xB4; // float
    public const nint m_leftSpeed = 0xB8; // float
    public const nint m_verticalSpeed = 0xBC; // float
    public const nint m_buttonFlags = 0xC0; // uint64_t
    public const nint m_jumpTimestamp = 0xC8; // float
    public const nint m_viewForward = 0xCC; // Vector
    public const nint m_postureStackIndex = 0xE8; // int32_t
}

public static class CBreachCharge { // CCSWeaponBase
}

public static class CBreachChargeProjectile { // CBaseGrenade
}

public static class CBreakable { // CBaseModelEntity
    public const nint m_Material = 0x720; // Materials
    public const nint m_hBreaker = 0x724; // CHandle<CBaseEntity>
    public const nint m_Explosion = 0x728; // Explosions
    public const nint m_iszSpawnObject = 0x730; // CUtlSymbolLarge
    public const nint m_flPressureDelay = 0x738; // float
    public const nint m_iMinHealthDmg = 0x73C; // int32_t
    public const nint m_iszPropData = 0x740; // CUtlSymbolLarge
    public const nint m_impactEnergyScale = 0x748; // float
    public const nint m_nOverrideBlockLOS = 0x74C; // EOverrideBlockLOS_t
    public const nint m_OnBreak = 0x750; // CEntityIOOutput
    public const nint m_OnHealthChanged = 0x778; // CEntityOutputTemplate<float>
    public const nint m_flDmgModBullet = 0x7A0; // float
    public const nint m_flDmgModClub = 0x7A4; // float
    public const nint m_flDmgModExplosive = 0x7A8; // float
    public const nint m_flDmgModFire = 0x7AC; // float
    public const nint m_iszPhysicsDamageTableName = 0x7B0; // CUtlSymbolLarge
    public const nint m_iszBasePropData = 0x7B8; // CUtlSymbolLarge
    public const nint m_iInteractions = 0x7C0; // int32_t
    public const nint m_PerformanceMode = 0x7C4; // PerformanceMode_t
    public const nint m_hPhysicsAttacker = 0x7C8; // CHandle<CBasePlayerPawn>
    public const nint m_flLastPhysicsInfluenceTime = 0x7CC; // GameTime_t
}

public static class CBreakableProp { // CBaseProp
    public const nint m_OnBreak = 0x938; // CEntityIOOutput
    public const nint m_OnHealthChanged = 0x960; // CEntityOutputTemplate<float>
    public const nint m_OnTakeDamage = 0x988; // CEntityIOOutput
    public const nint m_impactEnergyScale = 0x9B0; // float
    public const nint m_iMinHealthDmg = 0x9B4; // int32_t
    public const nint m_preferredCarryAngles = 0x9B8; // QAngle
    public const nint m_flPressureDelay = 0x9C4; // float
    public const nint m_hBreaker = 0x9C8; // CHandle<CBaseEntity>
    public const nint m_PerformanceMode = 0x9CC; // PerformanceMode_t
    public const nint m_flDmgModBullet = 0x9D0; // float
    public const nint m_flDmgModClub = 0x9D4; // float
    public const nint m_flDmgModExplosive = 0x9D8; // float
    public const nint m_flDmgModFire = 0x9DC; // float
    public const nint m_iszPhysicsDamageTableName = 0x9E0; // CUtlSymbolLarge
    public const nint m_iszBasePropData = 0x9E8; // CUtlSymbolLarge
    public const nint m_iInteractions = 0x9F0; // int32_t
    public const nint m_flPreventDamageBeforeTime = 0x9F4; // GameTime_t
    public const nint m_bHasBreakPiecesOrCommands = 0x9F8; // bool
    public const nint m_explodeDamage = 0x9FC; // float
    public const nint m_explodeRadius = 0xA00; // float
    public const nint m_explosionDelay = 0xA08; // float
    public const nint m_explosionBuildupSound = 0xA10; // CUtlSymbolLarge
    public const nint m_explosionCustomEffect = 0xA18; // CUtlSymbolLarge
    public const nint m_explosionCustomSound = 0xA20; // CUtlSymbolLarge
    public const nint m_explosionModifier = 0xA28; // CUtlSymbolLarge
    public const nint m_hPhysicsAttacker = 0xA30; // CHandle<CBasePlayerPawn>
    public const nint m_flLastPhysicsInfluenceTime = 0xA34; // GameTime_t
    public const nint m_bOriginalBlockLOS = 0xA38; // bool
    public const nint m_flDefaultFadeScale = 0xA3C; // float
    public const nint m_hLastAttacker = 0xA40; // CHandle<CBaseEntity>
    public const nint m_hFlareEnt = 0xA44; // CHandle<CBaseEntity>
    public const nint m_bUsePuntSound = 0xA48; // bool
    public const nint m_iszPuntSound = 0xA50; // CUtlSymbolLarge
    public const nint m_noGhostCollision = 0xA58; // bool
}

public static class CBreakableStageHelper {
    public const nint m_nCurrentStage = 0x8; // int32_t
    public const nint m_nStageCount = 0xC; // int32_t
}

public static class CBtActionAim { // CBtNode
    public const nint m_szSensorInputKey = 0x68; // CUtlString
    public const nint m_szAimReadyKey = 0x80; // CUtlString
    public const nint m_flZoomCooldownTimestamp = 0x88; // float
    public const nint m_bDoneAiming = 0x8C; // bool
    public const nint m_flLerpStartTime = 0x90; // float
    public const nint m_flNextLookTargetLerpTime = 0x94; // float
    public const nint m_flPenaltyReductionRatio = 0x98; // float
    public const nint m_NextLookTarget = 0x9C; // QAngle
    public const nint m_AimTimer = 0xA8; // CountdownTimer
    public const nint m_SniperHoldTimer = 0xC0; // CountdownTimer
    public const nint m_FocusIntervalTimer = 0xD8; // CountdownTimer
    public const nint m_bAcquired = 0xF0; // bool
}

public static class CBtActionCombatPositioning { // CBtNode
    public const nint m_szSensorInputKey = 0x68; // CUtlString
    public const nint m_szIsAttackingKey = 0x80; // CUtlString
    public const nint m_ActionTimer = 0x88; // CountdownTimer
    public const nint m_bCrouching = 0xA0; // bool
}

public static class CBtActionMoveTo { // CBtNode
    public const nint m_szDestinationInputKey = 0x60; // CUtlString
    public const nint m_szHidingSpotInputKey = 0x68; // CUtlString
    public const nint m_szThreatInputKey = 0x70; // CUtlString
    public const nint m_vecDestination = 0x78; // Vector
    public const nint m_bAutoLookAdjust = 0x84; // bool
    public const nint m_bComputePath = 0x85; // bool
    public const nint m_flDamagingAreasPenaltyCost = 0x88; // float
    public const nint m_CheckApproximateCornersTimer = 0x90; // CountdownTimer
    public const nint m_CheckHighPriorityItem = 0xA8; // CountdownTimer
    public const nint m_RepathTimer = 0xC0; // CountdownTimer
    public const nint m_flArrivalEpsilon = 0xD8; // float
    public const nint m_flAdditionalArrivalEpsilon2D = 0xDC; // float
    public const nint m_flHidingSpotCheckDistanceThreshold = 0xE0; // float
    public const nint m_flNearestAreaDistanceThreshold = 0xE4; // float
}

public static class CBtActionParachutePositioning { // CBtNode
    public const nint m_ActionTimer = 0x58; // CountdownTimer
}

public static class CBtNode {
}

public static class CBtNodeComposite { // CBtNode
}

public static class CBtNodeCondition { // CBtNodeDecorator
    public const nint m_bNegated = 0x58; // bool
}

public static class CBtNodeConditionInactive { // CBtNodeCondition
    public const nint m_flRoundStartThresholdSeconds = 0x78; // float
    public const nint m_flSensorInactivityThresholdSeconds = 0x7C; // float
    public const nint m_SensorInactivityTimer = 0x80; // CountdownTimer
}

public static class CBtNodeDecorator { // CBtNode
}

public static class CBubbling { // CBaseModelEntity
    public const nint m_density = 0x710; // int32_t
    public const nint m_frequency = 0x714; // int32_t
    public const nint m_state = 0x718; // int32_t
}

public static class CBumpMine { // CCSWeaponBase
}

public static class CBumpMineProjectile { // CBaseGrenade
}

public static class CBuoyancyHelper {
    public const nint m_flFluidDensity = 0x18; // float
}

public static class CBuyZone { // CBaseTrigger
    public const nint m_LegacyTeamNum = 0x8B8; // int32_t
}

public static class CC4 { // CCSWeaponBase
    public const nint m_vecLastValidPlayerHeldPosition = 0xE90; // Vector
    public const nint m_vecLastValidDroppedPosition = 0xE9C; // Vector
    public const nint m_bDoValidDroppedPositionCheck = 0xEA8; // bool
    public const nint m_bStartedArming = 0xEA9; // bool
    public const nint m_fArmedTime = 0xEAC; // GameTime_t
    public const nint m_bBombPlacedAnimation = 0xEB0; // bool
    public const nint m_bIsPlantingViaUse = 0xEB1; // bool
    public const nint m_entitySpottedState = 0xEB8; // EntitySpottedState_t
    public const nint m_nSpotRules = 0xED0; // int32_t
    public const nint m_bPlayedArmingBeeps = 0xED4; // bool[7]
    public const nint m_bBombPlanted = 0xEDB; // bool
}

public static class CCSArmsRaceScript { // CCSGameModeScript
    public const nint m_pOuter = 0xD8; // CCSGameModeRules_ArmsRace*
}

public static class CCSBot { // CBot
    public const nint m_lastCoopSpawnPoint = 0xF0; // CHandle<SpawnPointCoopEnemy>
    public const nint m_eyePosition = 0x100; // Vector
    public const nint m_name = 0x10C; // char[64]
    public const nint m_combatRange = 0x14C; // float
    public const nint m_isRogue = 0x150; // bool
    public const nint m_rogueTimer = 0x158; // CountdownTimer
    public const nint m_diedLastRound = 0x174; // bool
    public const nint m_safeTime = 0x178; // float
    public const nint m_wasSafe = 0x17C; // bool
    public const nint m_blindFire = 0x184; // bool
    public const nint m_surpriseTimer = 0x188; // CountdownTimer
    public const nint m_bAllowActive = 0x1A0; // bool
    public const nint m_isFollowing = 0x1A1; // bool
    public const nint m_leader = 0x1A4; // CHandle<CCSPlayerPawn>
    public const nint m_followTimestamp = 0x1A8; // float
    public const nint m_allowAutoFollowTime = 0x1AC; // float
    public const nint m_hurryTimer = 0x1B0; // CountdownTimer
    public const nint m_alertTimer = 0x1C8; // CountdownTimer
    public const nint m_sneakTimer = 0x1E0; // CountdownTimer
    public const nint m_panicTimer = 0x1F8; // CountdownTimer
    public const nint m_stateTimestamp = 0x4C8; // float
    public const nint m_isAttacking = 0x4CC; // bool
    public const nint m_isOpeningDoor = 0x4CD; // bool
    public const nint m_taskEntity = 0x4D4; // CHandle<CBaseEntity>
    public const nint m_goalPosition = 0x4E4; // Vector
    public const nint m_goalEntity = 0x4F0; // CHandle<CBaseEntity>
    public const nint m_avoid = 0x4F4; // CHandle<CBaseEntity>
    public const nint m_avoidTimestamp = 0x4F8; // float
    public const nint m_isStopping = 0x4FC; // bool
    public const nint m_hasVisitedEnemySpawn = 0x4FD; // bool
    public const nint m_stillTimer = 0x500; // IntervalTimer
    public const nint m_bEyeAnglesUnderPathFinderControl = 0x510; // bool
    public const nint m_pathIndex = 0x6608; // int32_t
    public const nint m_areaEnteredTimestamp = 0x660C; // GameTime_t
    public const nint m_repathTimer = 0x6610; // CountdownTimer
    public const nint m_avoidFriendTimer = 0x6628; // CountdownTimer
    public const nint m_isFriendInTheWay = 0x6640; // bool
    public const nint m_politeTimer = 0x6648; // CountdownTimer
    public const nint m_isWaitingBehindFriend = 0x6660; // bool
    public const nint m_pathLadderEnd = 0x668C; // float
    public const nint m_mustRunTimer = 0x66D8; // CountdownTimer
    public const nint m_waitTimer = 0x66F0; // CountdownTimer
    public const nint m_updateTravelDistanceTimer = 0x6708; // CountdownTimer
    public const nint m_playerTravelDistance = 0x6720; // float[64]
    public const nint m_travelDistancePhase = 0x6820; // uint8_t
    public const nint m_hostageEscortCount = 0x69B8; // uint8_t
    public const nint m_hostageEscortCountTimestamp = 0x69BC; // float
    public const nint m_desiredTeam = 0x69C0; // int32_t
    public const nint m_hasJoined = 0x69C4; // bool
    public const nint m_isWaitingForHostage = 0x69C5; // bool
    public const nint m_inhibitWaitingForHostageTimer = 0x69C8; // CountdownTimer
    public const nint m_waitForHostageTimer = 0x69E0; // CountdownTimer
    public const nint m_noisePosition = 0x69F8; // Vector
    public const nint m_noiseTravelDistance = 0x6A04; // float
    public const nint m_noiseTimestamp = 0x6A08; // float
    public const nint m_noiseSource = 0x6A10; // CCSPlayerPawn*
    public const nint m_noiseBendTimer = 0x6A28; // CountdownTimer
    public const nint m_bentNoisePosition = 0x6A40; // Vector
    public const nint m_bendNoisePositionValid = 0x6A4C; // bool
    public const nint m_lookAroundStateTimestamp = 0x6A50; // float
    public const nint m_lookAheadAngle = 0x6A54; // float
    public const nint m_forwardAngle = 0x6A58; // float
    public const nint m_inhibitLookAroundTimestamp = 0x6A5C; // float
    public const nint m_lookAtSpot = 0x6A64; // Vector
    public const nint m_lookAtSpotDuration = 0x6A74; // float
    public const nint m_lookAtSpotTimestamp = 0x6A78; // float
    public const nint m_lookAtSpotAngleTolerance = 0x6A7C; // float
    public const nint m_lookAtSpotClearIfClose = 0x6A80; // bool
    public const nint m_lookAtSpotAttack = 0x6A81; // bool
    public const nint m_lookAtDesc = 0x6A88; // char*
    public const nint m_peripheralTimestamp = 0x6A90; // float
    public const nint m_approachPointCount = 0x6C18; // uint8_t
    public const nint m_approachPointViewPosition = 0x6C1C; // Vector
    public const nint m_viewSteadyTimer = 0x6C28; // IntervalTimer
    public const nint m_tossGrenadeTimer = 0x6C40; // CountdownTimer
    public const nint m_isAvoidingGrenade = 0x6C60; // CountdownTimer
    public const nint m_spotCheckTimestamp = 0x6C80; // float
    public const nint m_checkedHidingSpotCount = 0x7088; // int32_t
    public const nint m_lookPitch = 0x708C; // float
    public const nint m_lookPitchVel = 0x7090; // float
    public const nint m_lookYaw = 0x7094; // float
    public const nint m_lookYawVel = 0x7098; // float
    public const nint m_targetSpot = 0x709C; // Vector
    public const nint m_targetSpotVelocity = 0x70A8; // Vector
    public const nint m_targetSpotPredicted = 0x70B4; // Vector
    public const nint m_aimError = 0x70C0; // QAngle
    public const nint m_aimGoal = 0x70CC; // QAngle
    public const nint m_targetSpotTime = 0x70D8; // GameTime_t
    public const nint m_aimFocus = 0x70DC; // float
    public const nint m_aimFocusInterval = 0x70E0; // float
    public const nint m_aimFocusNextUpdate = 0x70E4; // GameTime_t
    public const nint m_ignoreEnemiesTimer = 0x70F0; // CountdownTimer
    public const nint m_enemy = 0x7108; // CHandle<CCSPlayerPawn>
    public const nint m_isEnemyVisible = 0x710C; // bool
    public const nint m_visibleEnemyParts = 0x710D; // uint8_t
    public const nint m_lastEnemyPosition = 0x7110; // Vector
    public const nint m_lastSawEnemyTimestamp = 0x711C; // float
    public const nint m_firstSawEnemyTimestamp = 0x7120; // float
    public const nint m_currentEnemyAcquireTimestamp = 0x7124; // float
    public const nint m_enemyDeathTimestamp = 0x7128; // float
    public const nint m_friendDeathTimestamp = 0x712C; // float
    public const nint m_isLastEnemyDead = 0x7130; // bool
    public const nint m_nearbyEnemyCount = 0x7134; // int32_t
    public const nint m_bomber = 0x7340; // CHandle<CCSPlayerPawn>
    public const nint m_nearbyFriendCount = 0x7344; // int32_t
    public const nint m_closestVisibleFriend = 0x7348; // CHandle<CCSPlayerPawn>
    public const nint m_closestVisibleHumanFriend = 0x734C; // CHandle<CCSPlayerPawn>
    public const nint m_attentionInterval = 0x7350; // IntervalTimer
    public const nint m_attacker = 0x7360; // CHandle<CCSPlayerPawn>
    public const nint m_attackedTimestamp = 0x7364; // float
    public const nint m_burnedByFlamesTimer = 0x7368; // IntervalTimer
    public const nint m_lastVictimID = 0x7378; // int32_t
    public const nint m_isAimingAtEnemy = 0x737C; // bool
    public const nint m_isRapidFiring = 0x737D; // bool
    public const nint m_equipTimer = 0x7380; // IntervalTimer
    public const nint m_zoomTimer = 0x7390; // CountdownTimer
    public const nint m_fireWeaponTimestamp = 0x73A8; // GameTime_t
    public const nint m_lookForWeaponsOnGroundTimer = 0x73B0; // CountdownTimer
    public const nint m_bIsSleeping = 0x73C8; // bool
    public const nint m_isEnemySniperVisible = 0x73C9; // bool
    public const nint m_sawEnemySniperTimer = 0x73D0; // CountdownTimer
    public const nint m_enemyQueueIndex = 0x7488; // uint8_t
    public const nint m_enemyQueueCount = 0x7489; // uint8_t
    public const nint m_enemyQueueAttendIndex = 0x748A; // uint8_t
    public const nint m_isStuck = 0x748B; // bool
    public const nint m_stuckTimestamp = 0x748C; // GameTime_t
    public const nint m_stuckSpot = 0x7490; // Vector
    public const nint m_wiggleTimer = 0x74A0; // CountdownTimer
    public const nint m_stuckJumpTimer = 0x74B8; // CountdownTimer
    public const nint m_nextCleanupCheckTimestamp = 0x74D0; // GameTime_t
    public const nint m_avgVel = 0x74D4; // float[10]
    public const nint m_avgVelIndex = 0x74FC; // int32_t
    public const nint m_avgVelCount = 0x7500; // int32_t
    public const nint m_lastOrigin = 0x7504; // Vector
    public const nint m_lastRadioRecievedTimestamp = 0x7514; // float
    public const nint m_lastRadioSentTimestamp = 0x7518; // float
    public const nint m_radioSubject = 0x751C; // CHandle<CCSPlayerPawn>
    public const nint m_radioPosition = 0x7520; // Vector
    public const nint m_voiceEndTimestamp = 0x752C; // float
    public const nint m_lastValidReactionQueueFrame = 0x7538; // int32_t
}

public static class CCSDeathmatchScript { // CCSGameModeScript
    public const nint m_pOuter = 0xD8; // CCSGameModeRules_Deathmatch*
}

public static class CCSDeathmatchScript_ConVars {
}

public static class CCSGOPlayerAnimGraphState {
}

public static class CCSGOViewModel { // CPredictedViewModel
    public const nint m_bShouldIgnoreOffsetAndAccuracy = 0x930; // bool
    public const nint m_nWeaponParity = 0x934; // uint32_t
    public const nint m_nOldWeaponParity = 0x938; // uint32_t
}

public static class CCSGO_TeamIntroCharacterPosition { // CCSGO_TeamPreviewCharacterPosition
}

public static class CCSGO_TeamIntroCounterTerroristPosition { // CCSGO_TeamIntroCharacterPosition
}

public static class CCSGO_TeamIntroTerroristPosition { // CCSGO_TeamIntroCharacterPosition
}

public static class CCSGO_TeamPreviewCharacterPosition { // CBaseEntity
    public const nint m_nVariant = 0x4C0; // int32_t
    public const nint m_nRandom = 0x4C4; // int32_t
    public const nint m_nOrdinal = 0x4C8; // int32_t
    public const nint m_sWeaponName = 0x4D0; // CUtlString
    public const nint m_xuid = 0x4D8; // uint64_t
    public const nint m_agentItem = 0x4E0; // CEconItemView
    public const nint m_glovesItem = 0x758; // CEconItemView
    public const nint m_weaponItem = 0x9D0; // CEconItemView
}

public static class CCSGO_TeamSelectCharacterPosition { // CCSGO_TeamPreviewCharacterPosition
}

public static class CCSGO_TeamSelectCounterTerroristPosition { // CCSGO_TeamSelectCharacterPosition
}

public static class CCSGO_TeamSelectTerroristPosition { // CCSGO_TeamSelectCharacterPosition
}

public static class CCSGO_WingmanIntroCharacterPosition { // CCSGO_TeamIntroCharacterPosition
}

public static class CCSGO_WingmanIntroCounterTerroristPosition { // CCSGO_WingmanIntroCharacterPosition
}

public static class CCSGO_WingmanIntroTerroristPosition { // CCSGO_WingmanIntroCharacterPosition
}

public static class CCSGameModeRules {
    public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
}

public static class CCSGameModeRules_ArmsRace { // CCSGameModeRules
    public const nint m_WeaponSequence = 0x38; // CNetworkUtlVectorBase<CUtlString>
}

public static class CCSGameModeRules_Deathmatch { // CCSGameModeRules
    public const nint m_flDMBonusStartTime = 0x38; // GameTime_t
    public const nint m_flDMBonusTimeLength = 0x3C; // float
    public const nint m_nDMBonusWeaponLoadoutSlot = 0x40; // int16_t
}

public static class CCSGameModeRules_Noop { // CCSGameModeRules
}

public static class CCSGameModeScript { // CBasePulseGraphInstance
}

public static class CCSGameModeScript_ConVars {
}

public static class CCSGameRules { // CTeamplayRules
    public const nint __m_pChainEntity = 0x98; // CNetworkVarChainer
    public const nint m_coopMissionManager = 0xC0; // CHandle<CBaseEntity>
    public const nint m_bFreezePeriod = 0xC4; // bool
    public const nint m_bWarmupPeriod = 0xC5; // bool
    public const nint m_fWarmupPeriodEnd = 0xC8; // GameTime_t
    public const nint m_fWarmupPeriodStart = 0xCC; // GameTime_t
    public const nint m_nTotalPausedTicks = 0xD0; // int32_t
    public const nint m_nPauseStartTick = 0xD4; // int32_t
    public const nint m_bServerPaused = 0xD8; // bool
    public const nint m_bGamePaused = 0xD9; // bool
    public const nint m_bTerroristTimeOutActive = 0xDA; // bool
    public const nint m_bCTTimeOutActive = 0xDB; // bool
    public const nint m_flTerroristTimeOutRemaining = 0xDC; // float
    public const nint m_flCTTimeOutRemaining = 0xE0; // float
    public const nint m_nTerroristTimeOuts = 0xE4; // int32_t
    public const nint m_nCTTimeOuts = 0xE8; // int32_t
    public const nint m_bTechnicalTimeOut = 0xEC; // bool
    public const nint m_bMatchWaitingForResume = 0xED; // bool
    public const nint m_iRoundTime = 0xF0; // int32_t
    public const nint m_fMatchStartTime = 0xF4; // float
    public const nint m_fRoundStartTime = 0xF8; // GameTime_t
    public const nint m_flRestartRoundTime = 0xFC; // GameTime_t
    public const nint m_bGameRestart = 0x100; // bool
    public const nint m_flGameStartTime = 0x104; // float
    public const nint m_timeUntilNextPhaseStarts = 0x108; // float
    public const nint m_gamePhase = 0x10C; // int32_t
    public const nint m_totalRoundsPlayed = 0x110; // int32_t
    public const nint m_nRoundsPlayedThisPhase = 0x114; // int32_t
    public const nint m_nOvertimePlaying = 0x118; // int32_t
    public const nint m_iHostagesRemaining = 0x11C; // int32_t
    public const nint m_bAnyHostageReached = 0x120; // bool
    public const nint m_bMapHasBombTarget = 0x121; // bool
    public const nint m_bMapHasRescueZone = 0x122; // bool
    public const nint m_bMapHasBuyZone = 0x123; // bool
    public const nint m_bIsQueuedMatchmaking = 0x124; // bool
    public const nint m_nQueuedMatchmakingMode = 0x128; // int32_t
    public const nint m_bIsValveDS = 0x12C; // bool
    public const nint m_bLogoMap = 0x12D; // bool
    public const nint m_bPlayAllStepSoundsOnServer = 0x12E; // bool
    public const nint m_iSpectatorSlotCount = 0x130; // int32_t
    public const nint m_MatchDevice = 0x134; // int32_t
    public const nint m_bHasMatchStarted = 0x138; // bool
    public const nint m_nNextMapInMapgroup = 0x13C; // int32_t
    public const nint m_szTournamentEventName = 0x140; // char[512]
    public const nint m_szTournamentEventStage = 0x340; // char[512]
    public const nint m_szMatchStatTxt = 0x540; // char[512]
    public const nint m_szTournamentPredictionsTxt = 0x740; // char[512]
    public const nint m_nTournamentPredictionsPct = 0x940; // int32_t
    public const nint m_flCMMItemDropRevealStartTime = 0x944; // GameTime_t
    public const nint m_flCMMItemDropRevealEndTime = 0x948; // GameTime_t
    public const nint m_bIsDroppingItems = 0x94C; // bool
    public const nint m_bIsQuestEligible = 0x94D; // bool
    public const nint m_bIsHltvActive = 0x94E; // bool
    public const nint m_nGuardianModeWaveNumber = 0x950; // int32_t
    public const nint m_nGuardianModeSpecialKillsRemaining = 0x954; // int32_t
    public const nint m_nGuardianModeSpecialWeaponNeeded = 0x958; // int32_t
    public const nint m_nGuardianGrenadesToGiveBots = 0x95C; // int32_t
    public const nint m_nNumHeaviesToSpawn = 0x960; // int32_t
    public const nint m_numGlobalGiftsGiven = 0x964; // uint32_t
    public const nint m_numGlobalGifters = 0x968; // uint32_t
    public const nint m_numGlobalGiftsPeriodSeconds = 0x96C; // uint32_t
    public const nint m_arrFeaturedGiftersAccounts = 0x970; // uint32_t[4]
    public const nint m_arrFeaturedGiftersGifts = 0x980; // uint32_t[4]
    public const nint m_arrProhibitedItemIndices = 0x990; // uint16_t[100]
    public const nint m_arrTournamentActiveCasterAccounts = 0xA58; // uint32_t[4]
    public const nint m_numBestOfMaps = 0xA68; // int32_t
    public const nint m_nHalloweenMaskListSeed = 0xA6C; // int32_t
    public const nint m_bBombDropped = 0xA70; // bool
    public const nint m_bBombPlanted = 0xA71; // bool
    public const nint m_iRoundWinStatus = 0xA74; // int32_t
    public const nint m_eRoundWinReason = 0xA78; // int32_t
    public const nint m_bTCantBuy = 0xA7C; // bool
    public const nint m_bCTCantBuy = 0xA7D; // bool
    public const nint m_flGuardianBuyUntilTime = 0xA80; // GameTime_t
    public const nint m_iMatchStats_RoundResults = 0xA84; // int32_t[30]
    public const nint m_iMatchStats_PlayersAlive_CT = 0xAFC; // int32_t[30]
    public const nint m_iMatchStats_PlayersAlive_T = 0xB74; // int32_t[30]
    public const nint m_TeamRespawnWaveTimes = 0xBEC; // float[32]
    public const nint m_flNextRespawnWave = 0xC6C; // GameTime_t[32]
    public const nint m_nServerQuestID = 0xCEC; // int32_t
    public const nint m_vMinimapMins = 0xCF0; // Vector
    public const nint m_vMinimapMaxs = 0xCFC; // Vector
    public const nint m_MinimapVerticalSectionHeights = 0xD08; // float[8]
    public const nint m_bDontIncrementCoopWave = 0xD28; // bool
    public const nint m_bSpawnedTerrorHuntHeavy = 0xD29; // bool
    public const nint m_nEndMatchMapGroupVoteTypes = 0xD2C; // int32_t[10]
    public const nint m_nEndMatchMapGroupVoteOptions = 0xD54; // int32_t[10]
    public const nint m_nEndMatchMapVoteWinner = 0xD7C; // int32_t
    public const nint m_iNumConsecutiveCTLoses = 0xD80; // int32_t
    public const nint m_iNumConsecutiveTerroristLoses = 0xD84; // int32_t
    public const nint m_bHasHostageBeenTouched = 0xDA0; // bool
    public const nint m_flIntermissionStartTime = 0xDA4; // GameTime_t
    public const nint m_flIntermissionEndTime = 0xDA8; // GameTime_t
    public const nint m_bLevelInitialized = 0xDAC; // bool
    public const nint m_iTotalRoundsPlayed = 0xDB0; // int32_t
    public const nint m_iUnBalancedRounds = 0xDB4; // int32_t
    public const nint m_endMatchOnRoundReset = 0xDB8; // bool
    public const nint m_endMatchOnThink = 0xDB9; // bool
    public const nint m_iFreezeTime = 0xDBC; // int32_t
    public const nint m_iNumTerrorist = 0xDC0; // int32_t
    public const nint m_iNumCT = 0xDC4; // int32_t
    public const nint m_iNumSpawnableTerrorist = 0xDC8; // int32_t
    public const nint m_iNumSpawnableCT = 0xDCC; // int32_t
    public const nint m_arrSelectedHostageSpawnIndices = 0xDD0; // CUtlVector<int32_t>
    public const nint m_nSpawnPointsRandomSeed = 0xDE8; // int32_t
    public const nint m_bFirstConnected = 0xDEC; // bool
    public const nint m_bCompleteReset = 0xDED; // bool
    public const nint m_bPickNewTeamsOnReset = 0xDEE; // bool
    public const nint m_bScrambleTeamsOnRestart = 0xDEF; // bool
    public const nint m_bSwapTeamsOnRestart = 0xDF0; // bool
    public const nint m_nEndMatchTiedVotes = 0xDF8; // CUtlVector<int32_t>
    public const nint m_bNeedToAskPlayersForContinueVote = 0xE14; // bool
    public const nint m_numQueuedMatchmakingAccounts = 0xE18; // uint32_t
    public const nint m_pQueuedMatchmakingReservationString = 0xE20; // char*
    public const nint m_numTotalTournamentDrops = 0xE28; // uint32_t
    public const nint m_numSpectatorsCountMax = 0xE2C; // uint32_t
    public const nint m_numSpectatorsCountMaxTV = 0xE30; // uint32_t
    public const nint m_numSpectatorsCountMaxLnk = 0xE34; // uint32_t
    public const nint m_bForceTeamChangeSilent = 0xE40; // bool
    public const nint m_bLoadingRoundBackupData = 0xE41; // bool
    public const nint m_nMatchInfoShowType = 0xE78; // int32_t
    public const nint m_flMatchInfoDecidedTime = 0xE7C; // float
    public const nint m_flCoopRespawnAndHealTime = 0xE98; // float
    public const nint m_coopBonusCoinsFound = 0xE9C; // int32_t
    public const nint m_coopBonusPistolsOnly = 0xEA0; // bool
    public const nint m_coopPlayersInDeploymentZone = 0xEA1; // bool
    public const nint m_coopMissionDeadPlayerRespawnEnabled = 0xEA2; // bool
    public const nint mTeamDMLastWinningTeamNumber = 0xEA4; // int32_t
    public const nint mTeamDMLastThinkTime = 0xEA8; // float
    public const nint m_flTeamDMLastAnnouncementTime = 0xEAC; // float
    public const nint m_iAccountTerrorist = 0xEB0; // int32_t
    public const nint m_iAccountCT = 0xEB4; // int32_t
    public const nint m_iSpawnPointCount_Terrorist = 0xEB8; // int32_t
    public const nint m_iSpawnPointCount_CT = 0xEBC; // int32_t
    public const nint m_iMaxNumTerrorists = 0xEC0; // int32_t
    public const nint m_iMaxNumCTs = 0xEC4; // int32_t
    public const nint m_iLoserBonus = 0xEC8; // int32_t
    public const nint m_iLoserBonusMostRecentTeam = 0xECC; // int32_t
    public const nint m_tmNextPeriodicThink = 0xED0; // float
    public const nint m_bVoiceWonMatchBragFired = 0xED4; // bool
    public const nint m_fWarmupNextChatNoticeTime = 0xED8; // float
    public const nint m_iHostagesRescued = 0xEE0; // int32_t
    public const nint m_iHostagesTouched = 0xEE4; // int32_t
    public const nint m_flNextHostageAnnouncement = 0xEE8; // float
    public const nint m_bNoTerroristsKilled = 0xEEC; // bool
    public const nint m_bNoCTsKilled = 0xEED; // bool
    public const nint m_bNoEnemiesKilled = 0xEEE; // bool
    public const nint m_bCanDonateWeapons = 0xEEF; // bool
    public const nint m_firstKillTime = 0xEF4; // float
    public const nint m_firstBloodTime = 0xEFC; // float
    public const nint m_hostageWasInjured = 0xF18; // bool
    public const nint m_hostageWasKilled = 0xF19; // bool
    public const nint m_bVoteCalled = 0xF28; // bool
    public const nint m_bServerVoteOnReset = 0xF29; // bool
    public const nint m_flVoteCheckThrottle = 0xF2C; // float
    public const nint m_bBuyTimeEnded = 0xF30; // bool
    public const nint m_nLastFreezeEndBeep = 0xF34; // int32_t
    public const nint m_bTargetBombed = 0xF38; // bool
    public const nint m_bBombDefused = 0xF39; // bool
    public const nint m_bMapHasBombZone = 0xF3A; // bool
    public const nint m_vecMainCTSpawnPos = 0xF58; // Vector
    public const nint m_CTSpawnPointsMasterList = 0xF68; // CUtlVector<SpawnPoint*>
    public const nint m_TerroristSpawnPointsMasterList = 0xF80; // CUtlVector<SpawnPoint*>
    public const nint m_bRespawningAllRespawnablePlayers = 0xF98; // bool
    public const nint m_iNextCTSpawnPoint = 0xF9C; // int32_t
    public const nint m_flCTSpawnPointUsedTime = 0xFA0; // float
    public const nint m_iNextTerroristSpawnPoint = 0xFA4; // int32_t
    public const nint m_flTerroristSpawnPointUsedTime = 0xFA8; // float
    public const nint m_CTSpawnPoints = 0xFB0; // CUtlVector<SpawnPoint*>
    public const nint m_TerroristSpawnPoints = 0xFC8; // CUtlVector<SpawnPoint*>
    public const nint m_bIsUnreservedGameServer = 0xFE0; // bool
    public const nint m_fAutobalanceDisplayTime = 0xFE4; // float
    public const nint m_bAllowWeaponSwitch = 0x1250; // bool
    public const nint m_bRoundTimeWarningTriggered = 0x1251; // bool
    public const nint m_phaseChangeAnnouncementTime = 0x1254; // GameTime_t
    public const nint m_fNextUpdateTeamClanNamesTime = 0x1258; // float
    public const nint m_flLastThinkTime = 0x125C; // GameTime_t
    public const nint m_fAccumulatedRoundOffDamage = 0x1260; // float
    public const nint m_nShorthandedBonusLastEvalRound = 0x1264; // int32_t
    public const nint m_nMatchAbortedEarlyReason = 0x14E0; // int32_t
    public const nint m_bHasTriggeredRoundStartMusic = 0x14E4; // bool
    public const nint m_bHasTriggeredCoopSpawnReset = 0x14E5; // bool
    public const nint m_bSwitchingTeamsAtRoundReset = 0x14E6; // bool
    public const nint m_pGameModeRules = 0x1500; // CCSGameModeRules*
    public const nint m_BtGlobalBlackboard = 0x1508; // KeyValues3
    public const nint m_hPlayerResource = 0x1570; // CHandle<CBaseEntity>
    public const nint m_RetakeRules = 0x1578; // CRetakeGameRules
    public const nint m_GuardianBotSkillLevelMax = 0x175C; // int32_t
    public const nint m_GuardianBotSkillLevelMin = 0x1760; // int32_t
    public const nint m_arrTeamUniqueKillWeaponsMatch = 0x1768; // CUtlVector<int32_t>[4]
    public const nint m_bTeamLastKillUsedUniqueWeaponMatch = 0x17C8; // bool[4]
    public const nint m_nMatchEndCount = 0x17F0; // uint8_t
    public const nint m_nTTeamIntroVariant = 0x17F4; // int32_t
    public const nint m_nCTTeamIntroVariant = 0x17F8; // int32_t
    public const nint m_bTeamIntroPeriod = 0x17FC; // bool
    public const nint m_fTeamIntroPeriodEnd = 0x1800; // GameTime_t
    public const nint m_bPlayedTeamIntroVO = 0x1804; // bool
    public const nint m_iRoundEndWinnerTeam = 0x1808; // int32_t
    public const nint m_eRoundEndReason = 0x180C; // int32_t
    public const nint m_bRoundEndShowTimerDefend = 0x1810; // bool
    public const nint m_iRoundEndTimerTime = 0x1814; // int32_t
    public const nint m_sRoundEndFunFactToken = 0x1818; // CUtlString
    public const nint m_iRoundEndFunFactPlayerSlot = 0x1820; // CPlayerSlot
    public const nint m_iRoundEndFunFactData1 = 0x1824; // int32_t
    public const nint m_iRoundEndFunFactData2 = 0x1828; // int32_t
    public const nint m_iRoundEndFunFactData3 = 0x182C; // int32_t
    public const nint m_sRoundEndMessage = 0x1830; // CUtlString
    public const nint m_iRoundEndPlayerCount = 0x1838; // int32_t
    public const nint m_bRoundEndNoMusic = 0x183C; // bool
    public const nint m_iRoundEndLegacy = 0x1840; // int32_t
    public const nint m_nRoundEndCount = 0x1844; // uint8_t
    public const nint m_iRoundStartRoundNumber = 0x1848; // int32_t
    public const nint m_nRoundStartCount = 0x184C; // uint8_t
    public const nint m_flLastPerfSampleTime = 0x5858; // double
    public const nint m_bSkipNextServerPerfSample = 0x5860; // bool
}

public static class CCSGameRulesProxy { // CGameRulesProxy
    public const nint m_pGameRules = 0x4C0; // CCSGameRules*
}

public static class CCSMinimapBoundary { // CBaseEntity
}

public static class CCSObserverPawn { // CCSPlayerPawnBase
}

public static class CCSObserverPawnAPI {
}

public static class CCSObserver_CameraServices { // CCSPlayerBase_CameraServices
}

public static class CCSObserver_MovementServices { // CPlayer_MovementServices
}

public static class CCSObserver_ObserverServices { // CPlayer_ObserverServices
}

public static class CCSObserver_UseServices { // CPlayer_UseServices
}

public static class CCSObserver_ViewModelServices { // CPlayer_ViewModelServices
}

public static class CCSPlace { // CServerOnlyModelEntity
    public const nint m_name = 0x718; // CUtlSymbolLarge
}

public static class CCSPlayerBase_CameraServices { // CPlayer_CameraServices
    public const nint m_iFOV = 0x170; // uint32_t
    public const nint m_iFOVStart = 0x174; // uint32_t
    public const nint m_flFOVTime = 0x178; // GameTime_t
    public const nint m_flFOVRate = 0x17C; // float
    public const nint m_hZoomOwner = 0x180; // CHandle<CBaseEntity>
    public const nint m_hTriggerFogList = 0x188; // CUtlVector<CHandle<CBaseEntity>>
    public const nint m_hLastFogTrigger = 0x1A0; // CHandle<CBaseEntity>
}

public static class CCSPlayerController { // CBasePlayerController
    public const nint m_pInGameMoneyServices = 0x6C8; // CCSPlayerController_InGameMoneyServices*
    public const nint m_pInventoryServices = 0x6D0; // CCSPlayerController_InventoryServices*
    public const nint m_pActionTrackingServices = 0x6D8; // CCSPlayerController_ActionTrackingServices*
    public const nint m_pDamageServices = 0x6E0; // CCSPlayerController_DamageServices*
    public const nint m_iPing = 0x6E8; // uint32_t
    public const nint m_bHasCommunicationAbuseMute = 0x6EC; // bool
    public const nint m_szCrosshairCodes = 0x6F0; // CUtlSymbolLarge
    public const nint m_iPendingTeamNum = 0x6F8; // uint8_t
    public const nint m_flForceTeamTime = 0x6FC; // GameTime_t
    public const nint m_iCompTeammateColor = 0x700; // int32_t
    public const nint m_bEverPlayedOnTeam = 0x704; // bool
    public const nint m_bAttemptedToGetColor = 0x705; // bool
    public const nint m_iTeammatePreferredColor = 0x708; // int32_t
    public const nint m_bTeamChanged = 0x70C; // bool
    public const nint m_bInSwitchTeam = 0x70D; // bool
    public const nint m_bHasSeenJoinGame = 0x70E; // bool
    public const nint m_bJustBecameSpectator = 0x70F; // bool
    public const nint m_bSwitchTeamsOnNextRoundReset = 0x710; // bool
    public const nint m_bRemoveAllItemsOnNextRoundReset = 0x711; // bool
    public const nint m_szClan = 0x718; // CUtlSymbolLarge
    public const nint m_szClanName = 0x720; // char[32]
    public const nint m_iCoachingTeam = 0x740; // int32_t
    public const nint m_nPlayerDominated = 0x748; // uint64_t
    public const nint m_nPlayerDominatingMe = 0x750; // uint64_t
    public const nint m_iCompetitiveRanking = 0x758; // int32_t
    public const nint m_iCompetitiveWins = 0x75C; // int32_t
    public const nint m_iCompetitiveRankType = 0x760; // int8_t
    public const nint m_iCompetitiveRankingPredicted_Win = 0x764; // int32_t
    public const nint m_iCompetitiveRankingPredicted_Loss = 0x768; // int32_t
    public const nint m_iCompetitiveRankingPredicted_Tie = 0x76C; // int32_t
    public const nint m_nEndMatchNextMapVote = 0x770; // int32_t
    public const nint m_unActiveQuestId = 0x774; // uint16_t
    public const nint m_nQuestProgressReason = 0x778; // QuestProgress::Reason
    public const nint m_unPlayerTvControlFlags = 0x77C; // uint32_t
    public const nint m_iDraftIndex = 0x7A8; // int32_t
    public const nint m_msQueuedModeDisconnectionTimestamp = 0x7AC; // uint32_t
    public const nint m_uiAbandonRecordedReason = 0x7B0; // uint32_t
    public const nint m_bCannotBeKicked = 0x7B4; // bool
    public const nint m_bEverFullyConnected = 0x7B5; // bool
    public const nint m_bAbandonAllowsSurrender = 0x7B6; // bool
    public const nint m_bAbandonOffersInstantSurrender = 0x7B7; // bool
    public const nint m_bDisconnection1MinWarningPrinted = 0x7B8; // bool
    public const nint m_bScoreReported = 0x7B9; // bool
    public const nint m_nDisconnectionTick = 0x7BC; // int32_t
    public const nint m_bControllingBot = 0x7C8; // bool
    public const nint m_bHasControlledBotThisRound = 0x7C9; // bool
    public const nint m_bHasBeenControlledByPlayerThisRound = 0x7CA; // bool
    public const nint m_nBotsControlledThisRound = 0x7CC; // int32_t
    public const nint m_bCanControlObservedBot = 0x7D0; // bool
    public const nint m_hPlayerPawn = 0x7D4; // CHandle<CCSPlayerPawn>
    public const nint m_hObserverPawn = 0x7D8; // CHandle<CCSObserverPawn>
    public const nint m_DesiredObserverMode = 0x7DC; // int32_t
    public const nint m_hDesiredObserverTarget = 0x7E0; // CEntityHandle
    public const nint m_bPawnIsAlive = 0x7E4; // bool
    public const nint m_iPawnHealth = 0x7E8; // uint32_t
    public const nint m_iPawnArmor = 0x7EC; // int32_t
    public const nint m_bPawnHasDefuser = 0x7F0; // bool
    public const nint m_bPawnHasHelmet = 0x7F1; // bool
    public const nint m_nPawnCharacterDefIndex = 0x7F2; // uint16_t
    public const nint m_iPawnLifetimeStart = 0x7F4; // int32_t
    public const nint m_iPawnLifetimeEnd = 0x7F8; // int32_t
    public const nint m_iPawnBotDifficulty = 0x7FC; // int32_t
    public const nint m_hOriginalControllerOfCurrentPawn = 0x800; // CHandle<CCSPlayerController>
    public const nint m_iScore = 0x804; // int32_t
    public const nint m_iRoundScore = 0x808; // int32_t
    public const nint m_iRoundsWon = 0x80C; // int32_t
    public const nint m_vecKills = 0x810; // CNetworkUtlVectorBase<EKillTypes_t>
    public const nint m_bMvpNoMusic = 0x828; // bool
    public const nint m_eMvpReason = 0x82C; // int32_t
    public const nint m_iMusicKitID = 0x830; // int32_t
    public const nint m_iMusicKitMVPs = 0x834; // int32_t
    public const nint m_iMVPs = 0x838; // int32_t
    public const nint m_nUpdateCounter = 0x83C; // int32_t
    public const nint m_flSmoothedPing = 0x840; // float
    public const nint m_lastHeldVoteTimer = 0xF8E8; // IntervalTimer
    public const nint m_bShowHints = 0xF900; // bool
    public const nint m_iNextTimeCheck = 0xF904; // int32_t
    public const nint m_bJustDidTeamKill = 0xF908; // bool
    public const nint m_bPunishForTeamKill = 0xF909; // bool
    public const nint m_bGaveTeamDamageWarning = 0xF90A; // bool
    public const nint m_bGaveTeamDamageWarningThisRound = 0xF90B; // bool
    public const nint m_dblLastReceivedPacketPlatFloatTime = 0xF910; // double
    public const nint m_LastTeamDamageWarningTime = 0xF918; // GameTime_t
    public const nint m_LastTimePlayerWasDisconnectedForPawnsRemove = 0xF91C; // GameTime_t
    public const nint m_nSuspiciousHitCount = 0xF920; // uint32_t
    public const nint m_nNonSuspiciousHitStreak = 0xF924; // uint32_t
}

public static class CCSPlayerControllerAPI {
}

public static class CCSPlayerController_ActionTrackingServices { // CPlayerControllerComponent
    public const nint m_perRoundStats = 0x40; // CUtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
    public const nint m_matchStats = 0x90; // CSMatchStats_t
    public const nint m_iNumRoundKills = 0x150; // int32_t
    public const nint m_iNumRoundKillsHeadshots = 0x154; // int32_t
    public const nint m_unTotalRoundDamageDealt = 0x158; // uint32_t
}

public static class CCSPlayerController_DamageServices { // CPlayerControllerComponent
    public const nint m_nSendUpdate = 0x40; // int32_t
    public const nint m_DamageList = 0x48; // CUtlVectorEmbeddedNetworkVar<CDamageRecord>
}

public static class CCSPlayerController_InGameMoneyServices { // CPlayerControllerComponent
    public const nint m_bReceivesMoneyNextRound = 0x40; // bool
    public const nint m_iAccountMoneyEarnedForNextRound = 0x44; // int32_t
    public const nint m_iAccount = 0x48; // int32_t
    public const nint m_iStartAccount = 0x4C; // int32_t
    public const nint m_iTotalCashSpent = 0x50; // int32_t
    public const nint m_iCashSpentThisRound = 0x54; // int32_t
}

public static class CCSPlayerController_InventoryServices { // CPlayerControllerComponent
    public const nint m_unMusicID = 0x40; // uint16_t
    public const nint m_rank = 0x44; // MedalRank_t[6]
    public const nint m_nPersonaDataPublicLevel = 0x5C; // int32_t
    public const nint m_nPersonaDataPublicCommendsLeader = 0x60; // int32_t
    public const nint m_nPersonaDataPublicCommendsTeacher = 0x64; // int32_t
    public const nint m_nPersonaDataPublicCommendsFriendly = 0x68; // int32_t
    public const nint m_nPersonaDataXpTrailLevel = 0x6C; // int32_t
    public const nint m_unEquippedPlayerSprayIDs = 0xF48; // uint32_t[1]
    public const nint m_vecServerAuthoritativeWeaponSlots = 0xF50; // CUtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
}

public static class CCSPlayerPawn { // CCSPlayerPawnBase
    public const nint m_pBulletServices = 0x15A8; // CCSPlayer_BulletServices*
    public const nint m_pHostageServices = 0x15B0; // CCSPlayer_HostageServices*
    public const nint m_pBuyServices = 0x15B8; // CCSPlayer_BuyServices*
    public const nint m_pActionTrackingServices = 0x15C0; // CCSPlayer_ActionTrackingServices*
    public const nint m_pRadioServices = 0x15C8; // CCSPlayer_RadioServices*
    public const nint m_pDamageReactServices = 0x15D0; // CCSPlayer_DamageReactServices*
    public const nint m_nCharacterDefIndex = 0x15D8; // uint16_t
    public const nint m_hPreviousModel = 0x15E0; // CStrongHandle<InfoForResourceTypeCModel>
    public const nint m_bHasFemaleVoice = 0x15E8; // bool
    public const nint m_strVOPrefix = 0x15F0; // CUtlString
    public const nint m_szLastPlaceName = 0x15F8; // char[18]
    public const nint m_bInHostageResetZone = 0x16B8; // bool
    public const nint m_bInBuyZone = 0x16B9; // bool
    public const nint m_bWasInBuyZone = 0x16BA; // bool
    public const nint m_bInHostageRescueZone = 0x16BB; // bool
    public const nint m_bInBombZone = 0x16BC; // bool
    public const nint m_bWasInHostageRescueZone = 0x16BD; // bool
    public const nint m_iRetakesOffering = 0x16C0; // int32_t
    public const nint m_iRetakesOfferingCard = 0x16C4; // int32_t
    public const nint m_bRetakesHasDefuseKit = 0x16C8; // bool
    public const nint m_bRetakesMVPLastRound = 0x16C9; // bool
    public const nint m_iRetakesMVPBoostItem = 0x16CC; // int32_t
    public const nint m_RetakesMVPBoostExtraUtility = 0x16D0; // loadout_slot_t
    public const nint m_flHealthShotBoostExpirationTime = 0x16D4; // GameTime_t
    public const nint m_flLandseconds = 0x16D8; // float
    public const nint m_aimPunchAngle = 0x16DC; // QAngle
    public const nint m_aimPunchAngleVel = 0x16E8; // QAngle
    public const nint m_aimPunchTickBase = 0x16F4; // int32_t
    public const nint m_aimPunchTickFraction = 0x16F8; // float
    public const nint m_aimPunchCache = 0x1700; // CUtlVector<QAngle>
    public const nint m_bIsBuyMenuOpen = 0x1718; // bool
    public const nint m_xLastHeadBoneTransform = 0x1D60; // CTransform
    public const nint m_bLastHeadBoneTransformIsValid = 0x1D80; // bool
    public const nint m_lastLandTime = 0x1D84; // GameTime_t
    public const nint m_bOnGroundLastTick = 0x1D88; // bool
    public const nint m_iPlayerLocked = 0x1D8C; // int32_t
    public const nint m_flTimeOfLastInjury = 0x1D94; // GameTime_t
    public const nint m_flNextSprayDecalTime = 0x1D98; // GameTime_t
    public const nint m_bNextSprayDecalTimeExpedited = 0x1D9C; // bool
    public const nint m_nRagdollDamageBone = 0x1DA0; // int32_t
    public const nint m_vRagdollDamageForce = 0x1DA4; // Vector
    public const nint m_vRagdollDamagePosition = 0x1DB0; // Vector
    public const nint m_szRagdollDamageWeaponName = 0x1DBC; // char[64]
    public const nint m_bRagdollDamageHeadshot = 0x1DFC; // bool
    public const nint m_vRagdollServerOrigin = 0x1E00; // Vector
    public const nint m_EconGloves = 0x1E10; // CEconItemView
    public const nint m_nEconGlovesChanged = 0x2088; // uint8_t
    public const nint m_qDeathEyeAngles = 0x208C; // QAngle
    public const nint m_bSkipOneHeadConstraintUpdate = 0x2098; // bool
}

public static class CCSPlayerPawnAPI {
}

public static class CCSPlayerPawnBase { // CBasePlayerPawn
    public const nint m_CTouchExpansionComponent = 0xBC0; // CTouchExpansionComponent
    public const nint m_pPingServices = 0xC10; // CCSPlayer_PingServices*
    public const nint m_pViewModelServices = 0xC18; // CPlayer_ViewModelServices*
    public const nint m_iDisplayHistoryBits = 0xC20; // uint32_t
    public const nint m_flLastAttackedTeammate = 0xC24; // float
    public const nint m_hOriginalController = 0xC28; // CHandle<CCSPlayerController>
    public const nint m_blindUntilTime = 0xC2C; // GameTime_t
    public const nint m_blindStartTime = 0xC30; // GameTime_t
    public const nint m_allowAutoFollowTime = 0xC34; // GameTime_t
    public const nint m_entitySpottedState = 0xC38; // EntitySpottedState_t
    public const nint m_nSpotRules = 0xC50; // int32_t
    public const nint m_iPlayerState = 0xC54; // CSPlayerState
    public const nint m_chickenIdleSoundTimer = 0xC60; // CountdownTimer
    public const nint m_chickenJumpSoundTimer = 0xC78; // CountdownTimer
    public const nint m_vecLastBookmarkedPosition = 0xD30; // Vector
    public const nint m_flLastDistanceTraveledNotice = 0xD3C; // float
    public const nint m_flAccumulatedDistanceTraveled = 0xD40; // float
    public const nint m_flLastFriendlyFireDamageReductionRatio = 0xD44; // float
    public const nint m_bRespawning = 0xD48; // bool
    public const nint m_nLastPickupPriority = 0xD4C; // int32_t
    public const nint m_flLastPickupPriorityTime = 0xD50; // float
    public const nint m_bIsScoped = 0xD54; // bool
    public const nint m_bIsWalking = 0xD55; // bool
    public const nint m_bResumeZoom = 0xD56; // bool
    public const nint m_bIsDefusing = 0xD57; // bool
    public const nint m_bIsGrabbingHostage = 0xD58; // bool
    public const nint m_iBlockingUseActionInProgress = 0xD5C; // CSPlayerBlockingUseAction_t
    public const nint m_fImmuneToGunGameDamageTime = 0xD60; // GameTime_t
    public const nint m_bGunGameImmunity = 0xD64; // bool
    public const nint m_GunGameImmunityColor = 0xD65; // Color
    public const nint m_fMolotovDamageTime = 0xD6C; // float
    public const nint m_bHasMovedSinceSpawn = 0xD70; // bool
    public const nint m_bCanMoveDuringFreezePeriod = 0xD71; // bool
    public const nint m_flGuardianTooFarDistFrac = 0xD74; // float
    public const nint m_flNextGuardianTooFarHurtTime = 0xD78; // float
    public const nint m_flDetectedByEnemySensorTime = 0xD7C; // GameTime_t
    public const nint m_flDealtDamageToEnemyMostRecentTimestamp = 0xD80; // float
    public const nint m_flLastEquippedHelmetTime = 0xD84; // GameTime_t
    public const nint m_flLastEquippedArmorTime = 0xD88; // GameTime_t
    public const nint m_nHeavyAssaultSuitCooldownRemaining = 0xD8C; // int32_t
    public const nint m_bResetArmorNextSpawn = 0xD90; // bool
    public const nint m_flLastBumpMineBumpTime = 0xD94; // GameTime_t
    public const nint m_flEmitSoundTime = 0xD98; // GameTime_t
    public const nint m_iNumSpawns = 0xD9C; // int32_t
    public const nint m_iShouldHaveCash = 0xDA0; // int32_t
    public const nint m_flIdleTimeSinceLastAction = 0xDA8; // float
    public const nint m_flNameChangeHistory = 0xDAC; // float[5]
    public const nint m_fLastGivenDefuserTime = 0xDC0; // float
    public const nint m_fLastGivenBombTime = 0xDC4; // float
    public const nint m_bHasNightVision = 0xDC8; // bool
    public const nint m_bNightVisionOn = 0xDC9; // bool
    public const nint m_fNextRadarUpdateTime = 0xDCC; // float
    public const nint m_flLastMoneyUpdateTime = 0xDD0; // float
    public const nint m_MenuStringBuffer = 0xDD4; // char[1024]
    public const nint m_fIntroCamTime = 0x11D4; // float
    public const nint m_nMyCollisionGroup = 0x11D8; // int32_t
    public const nint m_bInNoDefuseArea = 0x11DC; // bool
    public const nint m_bKilledByTaser = 0x11DD; // bool
    public const nint m_iMoveState = 0x11E0; // int32_t
    public const nint m_grenadeParameterStashTime = 0x11E4; // GameTime_t
    public const nint m_bGrenadeParametersStashed = 0x11E8; // bool
    public const nint m_angStashedShootAngles = 0x11EC; // QAngle
    public const nint m_vecStashedGrenadeThrowPosition = 0x11F8; // Vector
    public const nint m_vecStashedVelocity = 0x1204; // Vector
    public const nint m_angShootAngleHistory = 0x1210; // QAngle[2]
    public const nint m_vecThrowPositionHistory = 0x1228; // Vector[2]
    public const nint m_vecVelocityHistory = 0x1240; // Vector[2]
    public const nint m_bDiedAirborne = 0x1258; // bool
    public const nint m_iBombSiteIndex = 0x125C; // CEntityIndex
    public const nint m_nWhichBombZone = 0x1260; // int32_t
    public const nint m_bInBombZoneTrigger = 0x1264; // bool
    public const nint m_bWasInBombZoneTrigger = 0x1265; // bool
    public const nint m_iDirection = 0x1268; // int32_t
    public const nint m_iShotsFired = 0x126C; // int32_t
    public const nint m_ArmorValue = 0x1270; // int32_t
    public const nint m_flFlinchStack = 0x1274; // float
    public const nint m_flVelocityModifier = 0x1278; // float
    public const nint m_flHitHeading = 0x127C; // float
    public const nint m_nHitBodyPart = 0x1280; // int32_t
    public const nint m_iHostagesKilled = 0x1284; // int32_t
    public const nint m_vecTotalBulletForce = 0x1288; // Vector
    public const nint m_flFlashDuration = 0x1294; // float
    public const nint m_flFlashMaxAlpha = 0x1298; // float
    public const nint m_flProgressBarStartTime = 0x129C; // float
    public const nint m_iProgressBarDuration = 0x12A0; // int32_t
    public const nint m_bWaitForNoAttack = 0x12A4; // bool
    public const nint m_flLowerBodyYawTarget = 0x12A8; // float
    public const nint m_bStrafing = 0x12AC; // bool
    public const nint m_lastStandingPos = 0x12B0; // Vector
    public const nint m_ignoreLadderJumpTime = 0x12BC; // float
    public const nint m_ladderSurpressionTimer = 0x12C0; // CountdownTimer
    public const nint m_lastLadderNormal = 0x12D8; // Vector
    public const nint m_lastLadderPos = 0x12E4; // Vector
    public const nint m_thirdPersonHeading = 0x12F0; // QAngle
    public const nint m_flSlopeDropOffset = 0x12FC; // float
    public const nint m_flSlopeDropHeight = 0x1300; // float
    public const nint m_vHeadConstraintOffset = 0x1304; // Vector
    public const nint m_iLastWeaponFireUsercmd = 0x1318; // int32_t
    public const nint m_angEyeAngles = 0x131C; // QAngle
    public const nint m_bVCollisionInitted = 0x1328; // bool
    public const nint m_storedSpawnPosition = 0x132C; // Vector
    public const nint m_storedSpawnAngle = 0x1338; // QAngle
    public const nint m_bIsSpawning = 0x1344; // bool
    public const nint m_bHideTargetID = 0x1345; // bool
    public const nint m_nNumDangerZoneDamageHits = 0x1348; // int32_t
    public const nint m_bHud_MiniScoreHidden = 0x134C; // bool
    public const nint m_bHud_RadarHidden = 0x134D; // bool
    public const nint m_nLastKillerIndex = 0x1350; // CEntityIndex
    public const nint m_nLastConcurrentKilled = 0x1354; // int32_t
    public const nint m_nDeathCamMusic = 0x1358; // int32_t
    public const nint m_iAddonBits = 0x135C; // int32_t
    public const nint m_iPrimaryAddon = 0x1360; // int32_t
    public const nint m_iSecondaryAddon = 0x1364; // int32_t
    public const nint m_currentDeafnessFilter = 0x1368; // CUtlStringToken
    public const nint m_NumEnemiesKilledThisSpawn = 0x136C; // int32_t
    public const nint m_NumEnemiesKilledThisRound = 0x1370; // int32_t
    public const nint m_NumEnemiesAtRoundStart = 0x1374; // int32_t
    public const nint m_wasNotKilledNaturally = 0x1378; // bool
    public const nint m_vecPlayerPatchEconIndices = 0x137C; // uint32_t[5]
    public const nint m_iDeathFlags = 0x1390; // int32_t
    public const nint m_hPet = 0x1394; // CHandle<CChicken>
    public const nint m_unCurrentEquipmentValue = 0x1560; // uint16_t
    public const nint m_unRoundStartEquipmentValue = 0x1562; // uint16_t
    public const nint m_unFreezetimeEndEquipmentValue = 0x1564; // uint16_t
    public const nint m_nSurvivalTeamNumber = 0x1568; // int32_t
    public const nint m_bHasDeathInfo = 0x156C; // bool
    public const nint m_flDeathInfoTime = 0x1570; // float
    public const nint m_vecDeathInfoOrigin = 0x1574; // Vector
    public const nint m_bKilledByHeadshot = 0x1580; // bool
    public const nint m_LastHitBox = 0x1584; // int32_t
    public const nint m_LastHealth = 0x1588; // int32_t
    public const nint m_flLastCollisionCeiling = 0x158C; // float
    public const nint m_flLastCollisionCeilingChangeTime = 0x1590; // float
    public const nint m_pBot = 0x1598; // CCSBot*
    public const nint m_bBotAllowActive = 0x15A0; // bool
    public const nint m_bCommittingSuicideOnTeamChange = 0x15A1; // bool
}

public static class CCSPlayerResource { // CBaseEntity
    public const nint m_bHostageAlive = 0x4C0; // bool[12]
    public const nint m_isHostageFollowingSomeone = 0x4CC; // bool[12]
    public const nint m_iHostageEntityIDs = 0x4D8; // CEntityIndex[12]
    public const nint m_bombsiteCenterA = 0x508; // Vector
    public const nint m_bombsiteCenterB = 0x514; // Vector
    public const nint m_hostageRescueX = 0x520; // int32_t[4]
    public const nint m_hostageRescueY = 0x530; // int32_t[4]
    public const nint m_hostageRescueZ = 0x540; // int32_t[4]
    public const nint m_bEndMatchNextMapAllVoted = 0x550; // bool
    public const nint m_foundGoalPositions = 0x551; // bool
}

public static class CCSPlayer_ActionTrackingServices { // CPlayerPawnComponent
    public const nint m_hLastWeaponBeforeC4AutoSwitch = 0x208; // CHandle<CBasePlayerWeapon>
    public const nint m_bIsRescuing = 0x23C; // bool
    public const nint m_weaponPurchasesThisMatch = 0x240; // WeaponPurchaseTracker_t
    public const nint m_weaponPurchasesThisRound = 0x298; // WeaponPurchaseTracker_t
}

public static class CCSPlayer_BulletServices { // CPlayerPawnComponent
    public const nint m_totalHitsOnServer = 0x40; // int32_t
}

public static class CCSPlayer_BuyServices { // CPlayerPawnComponent
    public const nint m_vecSellbackPurchaseEntries = 0xC8; // CUtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
}

public static class CCSPlayer_CameraServices { // CCSPlayerBase_CameraServices
}

public static class CCSPlayer_DamageReactServices { // CPlayerPawnComponent
}

public static class CCSPlayer_HostageServices { // CPlayerPawnComponent
    public const nint m_hCarriedHostage = 0x40; // CHandle<CBaseEntity>
    public const nint m_hCarriedHostageProp = 0x44; // CHandle<CBaseEntity>
}

public static class CCSPlayer_ItemServices { // CPlayer_ItemServices
    public const nint m_bHasDefuser = 0x40; // bool
    public const nint m_bHasHelmet = 0x41; // bool
    public const nint m_bHasHeavyArmor = 0x42; // bool
}

public static class CCSPlayer_MovementServices { // CPlayer_MovementServices_Humanoid
    public const nint m_flMaxFallVelocity = 0x228; // float
    public const nint m_vecLadderNormal = 0x22C; // Vector
    public const nint m_nLadderSurfacePropIndex = 0x238; // int32_t
    public const nint m_flDuckAmount = 0x23C; // float
    public const nint m_flDuckSpeed = 0x240; // float
    public const nint m_bDuckOverride = 0x244; // bool
    public const nint m_bDesiresDuck = 0x245; // bool
    public const nint m_flDuckOffset = 0x248; // float
    public const nint m_nDuckTimeMsecs = 0x24C; // uint32_t
    public const nint m_nDuckJumpTimeMsecs = 0x250; // uint32_t
    public const nint m_nJumpTimeMsecs = 0x254; // uint32_t
    public const nint m_flLastDuckTime = 0x258; // float
    public const nint m_vecLastPositionAtFullCrouchSpeed = 0x268; // Vector2D
    public const nint m_duckUntilOnGround = 0x270; // bool
    public const nint m_bHasWalkMovedSinceLastJump = 0x271; // bool
    public const nint m_bInStuckTest = 0x272; // bool
    public const nint m_flStuckCheckTime = 0x280; // float[64][2]
    public const nint m_nTraceCount = 0x480; // int32_t
    public const nint m_StuckLast = 0x484; // int32_t
    public const nint m_bSpeedCropped = 0x488; // bool
    public const nint m_nOldWaterLevel = 0x48C; // int32_t
    public const nint m_flWaterEntryTime = 0x490; // float
    public const nint m_vecForward = 0x494; // Vector
    public const nint m_vecLeft = 0x4A0; // Vector
    public const nint m_vecUp = 0x4AC; // Vector
    public const nint m_nGameCodeHasMovedPlayerAfterCommand = 0x4B8; // int32_t
    public const nint m_bMadeFootstepNoise = 0x4BC; // bool
    public const nint m_iFootsteps = 0x4C0; // int32_t
    public const nint m_bOldJumpPressed = 0x4C4; // bool
    public const nint m_flJumpPressedTime = 0x4C8; // float
    public const nint m_flJumpUntil = 0x4CC; // float
    public const nint m_flJumpVel = 0x4D0; // float
    public const nint m_fStashGrenadeParameterWhen = 0x4D4; // GameTime_t
    public const nint m_nButtonDownMaskPrev = 0x4D8; // uint64_t
    public const nint m_flOffsetTickCompleteTime = 0x4E0; // float
    public const nint m_flOffsetTickStashedSpeed = 0x4E4; // float
    public const nint m_flStamina = 0x4E8; // float
    public const nint m_flHeightAtJumpStart = 0x4EC; // float
    public const nint m_flMaxJumpHeightThisJump = 0x4F0; // float
}

public static class CCSPlayer_PingServices { // CPlayerPawnComponent
    public const nint m_flPlayerPingTokens = 0x40; // GameTime_t[5]
    public const nint m_hPlayerPing = 0x54; // CHandle<CBaseEntity>
}

public static class CCSPlayer_RadioServices { // CPlayerPawnComponent
    public const nint m_flGotHostageTalkTimer = 0x40; // GameTime_t
    public const nint m_flDefusingTalkTimer = 0x44; // GameTime_t
    public const nint m_flC4PlantTalkTimer = 0x48; // GameTime_t
    public const nint m_flRadioTokenSlots = 0x4C; // GameTime_t[3]
    public const nint m_bIgnoreRadio = 0x58; // bool
}

public static class CCSPlayer_UseServices { // CPlayer_UseServices
    public const nint m_hLastKnownUseEntity = 0x40; // CHandle<CBaseEntity>
    public const nint m_flLastUseTimeStamp = 0x44; // GameTime_t
    public const nint m_flTimeStartedHoldingUse = 0x48; // GameTime_t
    public const nint m_flTimeLastUsedWindow = 0x4C; // GameTime_t
}

public static class CCSPlayer_ViewModelServices { // CPlayer_ViewModelServices
    public const nint m_hViewModel = 0x40; // CHandle<CBaseViewModel>[3]
}

public static class CCSPlayer_WaterServices { // CPlayer_WaterServices
    public const nint m_NextDrownDamageTime = 0x40; // float
    public const nint m_nDrownDmgRate = 0x44; // int32_t
    public const nint m_AirFinishedTime = 0x48; // GameTime_t
    public const nint m_flWaterJumpTime = 0x4C; // float
    public const nint m_vecWaterJumpVel = 0x50; // Vector
    public const nint m_flSwimSoundTime = 0x5C; // float
}

public static class CCSPlayer_WeaponServices { // CPlayer_WeaponServices
    public const nint m_flNextAttack = 0xA8; // GameTime_t
    public const nint m_bIsLookingAtWeapon = 0xAC; // bool
    public const nint m_bIsHoldingLookAtWeapon = 0xAD; // bool
    public const nint m_hSavedWeapon = 0xB0; // CHandle<CBasePlayerWeapon>
    public const nint m_nTimeToMelee = 0xB4; // int32_t
    public const nint m_nTimeToSecondary = 0xB8; // int32_t
    public const nint m_nTimeToPrimary = 0xBC; // int32_t
    public const nint m_nTimeToSniperRifle = 0xC0; // int32_t
    public const nint m_bIsBeingGivenItem = 0xC4; // bool
    public const nint m_bIsPickingUpItemWithUse = 0xC5; // bool
    public const nint m_bPickedUpWeapon = 0xC6; // bool
    public const nint m_bDisableAutoDeploy = 0xC7; // bool
    public const nint m_nOldShootPositionHistoryCount = 0xC8; // uint32_t
    public const nint m_nOldInputHistoryCount = 0x460; // uint32_t
}

public static class CCSPulseServerFuncs_Globals {
}

public static class CCSSprite { // CSprite
}

public static class CCSTakeDamageInfoAPI {
}

public static class CCSTeam { // CTeam
    public const nint m_nLastRecievedShorthandedRoundBonus = 0x578; // int32_t
    public const nint m_nShorthandedRoundBonusStartRound = 0x57C; // int32_t
    public const nint m_bSurrendered = 0x580; // bool
    public const nint m_szTeamMatchStat = 0x581; // char[512]
    public const nint m_numMapVictories = 0x784; // int32_t
    public const nint m_scoreFirstHalf = 0x788; // int32_t
    public const nint m_scoreSecondHalf = 0x78C; // int32_t
    public const nint m_scoreOvertime = 0x790; // int32_t
    public const nint m_szClanTeamname = 0x794; // char[129]
    public const nint m_iClanID = 0x818; // uint32_t
    public const nint m_szTeamFlagImage = 0x81C; // char[8]
    public const nint m_szTeamLogoImage = 0x824; // char[8]
    public const nint m_flNextResourceTime = 0x82C; // float
    public const nint m_iLastUpdateSentAt = 0x830; // int32_t
}

public static class CCSWeaponBase { // CBasePlayerWeapon
    public const nint m_bRemoveable = 0xCE0; // bool
    public const nint m_flFireSequenceStartTime = 0xCE8; // float
    public const nint m_nFireSequenceStartTimeChange = 0xCEC; // int32_t
    public const nint m_nFireSequenceStartTimeAck = 0xCF0; // int32_t
    public const nint m_ePlayerFireEvent = 0xCF4; // PlayerAnimEvent_t
    public const nint m_ePlayerFireEventAttackType = 0xCF8; // WeaponAttackType_t
    public const nint m_seqIdle = 0xCFC; // HSequence
    public const nint m_seqFirePrimary = 0xD00; // HSequence
    public const nint m_seqFireSecondary = 0xD04; // HSequence
    public const nint m_thirdPersonFireSequences = 0xD08; // CUtlVector<HSequence>
    public const nint m_hCurrentThirdPersonSequence = 0xD20; // HSequence
    public const nint m_nSilencerBoneIndex = 0xD24; // int32_t
    public const nint m_thirdPersonSequences = 0xD28; // HSequence[7]
    public const nint m_bPlayerAmmoStockOnPickup = 0xD50; // bool
    public const nint m_bRequireUseToTouch = 0xD51; // bool
    public const nint m_iState = 0xD54; // CSWeaponState_t
    public const nint m_flLastTimeInAir = 0xD58; // GameTime_t
    public const nint m_flLastDeployTime = 0xD5C; // GameTime_t
    public const nint m_nLastEmptySoundCmdNum = 0xD60; // int32_t
    public const nint m_nViewModelIndex = 0xD64; // uint32_t
    public const nint m_bReloadsWithClips = 0xD68; // bool
    public const nint m_flTimeWeaponIdle = 0xD88; // GameTime_t
    public const nint m_bFireOnEmpty = 0xD8C; // bool
    public const nint m_OnPlayerPickup = 0xD90; // CEntityIOOutput
    public const nint m_weaponMode = 0xDB8; // CSWeaponMode
    public const nint m_flTurningInaccuracyDelta = 0xDBC; // float
    public const nint m_vecTurningInaccuracyEyeDirLast = 0xDC0; // Vector
    public const nint m_flTurningInaccuracy = 0xDCC; // float
    public const nint m_fAccuracyPenalty = 0xDD0; // float
    public const nint m_flLastAccuracyUpdateTime = 0xDD4; // GameTime_t
    public const nint m_fAccuracySmoothedForZoom = 0xDD8; // float
    public const nint m_fScopeZoomEndTime = 0xDDC; // GameTime_t
    public const nint m_iRecoilIndex = 0xDE0; // int32_t
    public const nint m_flRecoilIndex = 0xDE4; // float
    public const nint m_bBurstMode = 0xDE8; // bool
    public const nint m_nPostponeFireReadyTicks = 0xDEC; // GameTick_t
    public const nint m_flPostponeFireReadyFrac = 0xDF0; // float
    public const nint m_bInReload = 0xDF4; // bool
    public const nint m_bReloadVisuallyComplete = 0xDF5; // bool
    public const nint m_flDroppedAtTime = 0xDF8; // GameTime_t
    public const nint m_bIsHauledBack = 0xDFC; // bool
    public const nint m_bSilencerOn = 0xDFD; // bool
    public const nint m_flTimeSilencerSwitchComplete = 0xE00; // GameTime_t
    public const nint m_iOriginalTeamNumber = 0xE04; // int32_t
    public const nint m_flNextAttackRenderTimeOffset = 0xE08; // float
    public const nint m_bCanBePickedUp = 0xE20; // bool
    public const nint m_bUseCanOverrideNextOwnerTouchTime = 0xE21; // bool
    public const nint m_nextOwnerTouchTime = 0xE24; // GameTime_t
    public const nint m_nextPrevOwnerTouchTime = 0xE28; // GameTime_t
    public const nint m_hPrevOwner = 0xE2C; // CHandle<CCSPlayerPawn>
    public const nint m_nDropTick = 0xE30; // GameTick_t
    public const nint m_donated = 0xE54; // bool
    public const nint m_fLastShotTime = 0xE58; // GameTime_t
    public const nint m_bWasOwnedByCT = 0xE5C; // bool
    public const nint m_bWasOwnedByTerrorist = 0xE5D; // bool
    public const nint m_bFiredOutOfAmmoEvent = 0xE5E; // bool
    public const nint m_numRemoveUnownedWeaponThink = 0xE60; // int32_t
    public const nint m_IronSightController = 0xE68; // CIronSightController
    public const nint m_iIronSightMode = 0xE80; // int32_t
    public const nint m_flLastLOSTraceFailureTime = 0xE84; // GameTime_t
    public const nint m_iNumEmptyAttacks = 0xE88; // int32_t
    public const nint m_flWatTickOffset = 0xE8C; // float
}

public static class CCSWeaponBaseAPI {
}

public static class CCSWeaponBaseGun { // CCSWeaponBase
    public const nint m_zoomLevel = 0xE90; // int32_t
    public const nint m_iBurstShotsRemaining = 0xE94; // int32_t
    public const nint m_silencedModelIndex = 0xEA0; // int32_t
    public const nint m_inPrecache = 0xEA4; // bool
    public const nint m_bNeedsBoltAction = 0xEA5; // bool
    public const nint m_bSkillReloadAvailable = 0xEA6; // bool
    public const nint m_bSkillReloadLiftedReloadKey = 0xEA7; // bool
    public const nint m_bSkillBoltInterruptAvailable = 0xEA8; // bool
    public const nint m_bSkillBoltLiftedFireKey = 0xEA9; // bool
}

public static class CCSWeaponBaseVData { // CBasePlayerWeaponVData
    public const nint m_WeaponType = 0x248; // CSWeaponType
    public const nint m_WeaponCategory = 0x24C; // CSWeaponCategory
    public const nint m_szViewModel = 0x250; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    public const nint m_szPlayerModel = 0x330; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    public const nint m_szWorldDroppedModel = 0x410; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    public const nint m_szAimsightLensMaskModel = 0x4F0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    public const nint m_szMagazineModel = 0x5D0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    public const nint m_szHeatEffect = 0x6B0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    public const nint m_szEjectBrassEffect = 0x790; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    public const nint m_szMuzzleFlashParticleAlt = 0x870; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    public const nint m_szMuzzleFlashThirdPersonParticle = 0x950; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    public const nint m_szMuzzleFlashThirdPersonParticleAlt = 0xA30; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    public const nint m_szTracerParticle = 0xB10; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    public const nint m_GearSlot = 0xBF0; // gear_slot_t
    public const nint m_GearSlotPosition = 0xBF4; // int32_t
    public const nint m_DefaultLoadoutSlot = 0xBF8; // loadout_slot_t
    public const nint m_sWrongTeamMsg = 0xC00; // CUtlString
    public const nint m_nPrice = 0xC08; // int32_t
    public const nint m_nKillAward = 0xC0C; // int32_t
    public const nint m_nPrimaryReserveAmmoMax = 0xC10; // int32_t
    public const nint m_nSecondaryReserveAmmoMax = 0xC14; // int32_t
    public const nint m_bMeleeWeapon = 0xC18; // bool
    public const nint m_bHasBurstMode = 0xC19; // bool
    public const nint m_bIsRevolver = 0xC1A; // bool
    public const nint m_bCannotShootUnderwater = 0xC1B; // bool
    public const nint m_szName = 0xC20; // CGlobalSymbol
    public const nint m_szAnimExtension = 0xC28; // CUtlString
    public const nint m_eSilencerType = 0xC30; // CSWeaponSilencerType
    public const nint m_nCrosshairMinDistance = 0xC34; // int32_t
    public const nint m_nCrosshairDeltaDistance = 0xC38; // int32_t
    public const nint m_bIsFullAuto = 0xC3C; // bool
    public const nint m_nNumBullets = 0xC40; // int32_t
    public const nint m_flCycleTime = 0xC44; // CFiringModeFloat
    public const nint m_flMaxSpeed = 0xC4C; // CFiringModeFloat
    public const nint m_flSpread = 0xC54; // CFiringModeFloat
    public const nint m_flInaccuracyCrouch = 0xC5C; // CFiringModeFloat
    public const nint m_flInaccuracyStand = 0xC64; // CFiringModeFloat
    public const nint m_flInaccuracyJump = 0xC6C; // CFiringModeFloat
    public const nint m_flInaccuracyLand = 0xC74; // CFiringModeFloat
    public const nint m_flInaccuracyLadder = 0xC7C; // CFiringModeFloat
    public const nint m_flInaccuracyFire = 0xC84; // CFiringModeFloat
    public const nint m_flInaccuracyMove = 0xC8C; // CFiringModeFloat
    public const nint m_flRecoilAngle = 0xC94; // CFiringModeFloat
    public const nint m_flRecoilAngleVariance = 0xC9C; // CFiringModeFloat
    public const nint m_flRecoilMagnitude = 0xCA4; // CFiringModeFloat
    public const nint m_flRecoilMagnitudeVariance = 0xCAC; // CFiringModeFloat
    public const nint m_nTracerFrequency = 0xCB4; // CFiringModeInt
    public const nint m_flInaccuracyJumpInitial = 0xCBC; // float
    public const nint m_flInaccuracyJumpApex = 0xCC0; // float
    public const nint m_flInaccuracyReload = 0xCC4; // float
    public const nint m_nRecoilSeed = 0xCC8; // int32_t
    public const nint m_nSpreadSeed = 0xCCC; // int32_t
    public const nint m_flTimeToIdleAfterFire = 0xCD0; // float
    public const nint m_flIdleInterval = 0xCD4; // float
    public const nint m_flAttackMovespeedFactor = 0xCD8; // float
    public const nint m_flHeatPerShot = 0xCDC; // float
    public const nint m_flInaccuracyPitchShift = 0xCE0; // float
    public const nint m_flInaccuracyAltSoundThreshold = 0xCE4; // float
    public const nint m_flBotAudibleRange = 0xCE8; // float
    public const nint m_szUseRadioSubtitle = 0xCF0; // CUtlString
    public const nint m_bUnzoomsAfterShot = 0xCF8; // bool
    public const nint m_bHideViewModelWhenZoomed = 0xCF9; // bool
    public const nint m_nZoomLevels = 0xCFC; // int32_t
    public const nint m_nZoomFOV1 = 0xD00; // int32_t
    public const nint m_nZoomFOV2 = 0xD04; // int32_t
    public const nint m_flZoomTime0 = 0xD08; // float
    public const nint m_flZoomTime1 = 0xD0C; // float
    public const nint m_flZoomTime2 = 0xD10; // float
    public const nint m_flIronSightPullUpSpeed = 0xD14; // float
    public const nint m_flIronSightPutDownSpeed = 0xD18; // float
    public const nint m_flIronSightFOV = 0xD1C; // float
    public const nint m_flIronSightPivotForward = 0xD20; // float
    public const nint m_flIronSightLooseness = 0xD24; // float
    public const nint m_angPivotAngle = 0xD28; // QAngle
    public const nint m_vecIronSightEyePos = 0xD34; // Vector
    public const nint m_nDamage = 0xD40; // int32_t
    public const nint m_flHeadshotMultiplier = 0xD44; // float
    public const nint m_flArmorRatio = 0xD48; // float
    public const nint m_flPenetration = 0xD4C; // float
    public const nint m_flRange = 0xD50; // float
    public const nint m_flRangeModifier = 0xD54; // float
    public const nint m_flFlinchVelocityModifierLarge = 0xD58; // float
    public const nint m_flFlinchVelocityModifierSmall = 0xD5C; // float
    public const nint m_flRecoveryTimeCrouch = 0xD60; // float
    public const nint m_flRecoveryTimeStand = 0xD64; // float
    public const nint m_flRecoveryTimeCrouchFinal = 0xD68; // float
    public const nint m_flRecoveryTimeStandFinal = 0xD6C; // float
    public const nint m_nRecoveryTransitionStartBullet = 0xD70; // int32_t
    public const nint m_nRecoveryTransitionEndBullet = 0xD74; // int32_t
    public const nint m_flThrowVelocity = 0xD78; // float
    public const nint m_vSmokeColor = 0xD7C; // Vector
    public const nint m_szAnimClass = 0xD88; // CGlobalSymbol
}

public static class CCSWeaponBaseVDataAPI {
}

public static class CChangeLevel { // CBaseTrigger
    public const nint m_sMapName = 0x8B8; // CUtlString
    public const nint m_sLandmarkName = 0x8C0; // CUtlString
    public const nint m_OnChangeLevel = 0x8C8; // CEntityIOOutput
    public const nint m_bTouched = 0x8F0; // bool
    public const nint m_bNoTouch = 0x8F1; // bool
    public const nint m_bNewChapter = 0x8F2; // bool
    public const nint m_bOnChangeLevelFired = 0x8F3; // bool
}

public static class CChicken { // CDynamicProp
    public const nint m_AttributeManager = 0xB80; // CAttributeContainer
    public const nint m_OriginalOwnerXuidLow = 0xE48; // uint32_t
    public const nint m_OriginalOwnerXuidHigh = 0xE4C; // uint32_t
    public const nint m_updateTimer = 0xE50; // CountdownTimer
    public const nint m_stuckAnchor = 0xE68; // Vector
    public const nint m_stuckTimer = 0xE78; // CountdownTimer
    public const nint m_collisionStuckTimer = 0xE90; // CountdownTimer
    public const nint m_isOnGround = 0xEA8; // bool
    public const nint m_vFallVelocity = 0xEAC; // Vector
    public const nint m_activity = 0xEB8; // ChickenActivity
    public const nint m_activityTimer = 0xEC0; // CountdownTimer
    public const nint m_turnRate = 0xED8; // float
    public const nint m_fleeFrom = 0xEDC; // CHandle<CBaseEntity>
    public const nint m_moveRateThrottleTimer = 0xEE0; // CountdownTimer
    public const nint m_startleTimer = 0xEF8; // CountdownTimer
    public const nint m_vocalizeTimer = 0xF10; // CountdownTimer
    public const nint m_flWhenZombified = 0xF28; // GameTime_t
    public const nint m_jumpedThisFrame = 0xF2C; // bool
    public const nint m_leader = 0xF30; // CHandle<CCSPlayerPawn>
    public const nint m_reuseTimer = 0xF38; // CountdownTimer
    public const nint m_hasBeenUsed = 0xF50; // bool
    public const nint m_jumpTimer = 0xF58; // CountdownTimer
    public const nint m_flLastJumpTime = 0xF70; // float
    public const nint m_bInJump = 0xF74; // bool
    public const nint m_isWaitingForLeader = 0xF75; // bool
    public const nint m_repathTimer = 0x2F80; // CountdownTimer
    public const nint m_inhibitDoorTimer = 0x2F98; // CountdownTimer
    public const nint m_inhibitObstacleAvoidanceTimer = 0x3028; // CountdownTimer
    public const nint m_vecPathGoal = 0x3048; // Vector
    public const nint m_flActiveFollowStartTime = 0x3054; // GameTime_t
    public const nint m_followMinuteTimer = 0x3058; // CountdownTimer
    public const nint m_vecLastEggPoopPosition = 0x3070; // Vector
    public const nint m_vecEggsPooped = 0x3080; // CUtlVector<CHandle<CBaseEntity>>
    public const nint m_BlockDirectionTimer = 0x30A0; // CountdownTimer
}

public static class CChicken_GraphController { // CAnimGraphControllerBase
    public const nint m_pszActivity = 0x18; // CAnimGraphParamRef<char*>
}

public static class CCollisionProperty {
    public const nint m_collisionAttribute = 0x10; // VPhysicsCollisionAttribute_t
    public const nint m_vecMins = 0x40; // Vector
    public const nint m_vecMaxs = 0x4C; // Vector
    public const nint m_usSolidFlags = 0x5A; // uint8_t
    public const nint m_nSolidType = 0x5B; // SolidType_t
    public const nint m_triggerBloat = 0x5C; // uint8_t
    public const nint m_nSurroundType = 0x5D; // SurroundingBoundsType_t
    public const nint m_CollisionGroup = 0x5E; // uint8_t
    public const nint m_nEnablePhysics = 0x5F; // uint8_t
    public const nint m_flBoundingRadius = 0x60; // float
    public const nint m_vecSpecifiedSurroundingMins = 0x64; // Vector
    public const nint m_vecSpecifiedSurroundingMaxs = 0x70; // Vector
    public const nint m_vecSurroundingMaxs = 0x7C; // Vector
    public const nint m_vecSurroundingMins = 0x88; // Vector
    public const nint m_vCapsuleCenter1 = 0x94; // Vector
    public const nint m_vCapsuleCenter2 = 0xA0; // Vector
    public const nint m_flCapsuleRadius = 0xAC; // float
}

public static class CColorCorrection { // CBaseEntity
    public const nint m_flFadeInDuration = 0x4C0; // float
    public const nint m_flFadeOutDuration = 0x4C4; // float
    public const nint m_flStartFadeInWeight = 0x4C8; // float
    public const nint m_flStartFadeOutWeight = 0x4CC; // float
    public const nint m_flTimeStartFadeIn = 0x4D0; // GameTime_t
    public const nint m_flTimeStartFadeOut = 0x4D4; // GameTime_t
    public const nint m_flMaxWeight = 0x4D8; // float
    public const nint m_bStartDisabled = 0x4DC; // bool
    public const nint m_bEnabled = 0x4DD; // bool
    public const nint m_bMaster = 0x4DE; // bool
    public const nint m_bClientSide = 0x4DF; // bool
    public const nint m_bExclusive = 0x4E0; // bool
    public const nint m_MinFalloff = 0x4E4; // float
    public const nint m_MaxFalloff = 0x4E8; // float
    public const nint m_flCurWeight = 0x4EC; // float
    public const nint m_netlookupFilename = 0x4F0; // char[512]
    public const nint m_lookupFilename = 0x6F0; // CUtlSymbolLarge
}

public static class CColorCorrectionVolume { // CBaseTrigger
    public const nint m_bEnabled = 0x8B8; // bool
    public const nint m_MaxWeight = 0x8BC; // float
    public const nint m_FadeDuration = 0x8C0; // float
    public const nint m_bStartDisabled = 0x8C4; // bool
    public const nint m_Weight = 0x8C8; // float
    public const nint m_lookupFilename = 0x8CC; // char[512]
    public const nint m_LastEnterWeight = 0xACC; // float
    public const nint m_LastEnterTime = 0xAD0; // GameTime_t
    public const nint m_LastExitWeight = 0xAD4; // float
    public const nint m_LastExitTime = 0xAD8; // GameTime_t
}

public static class CCommentaryAuto { // CBaseEntity
    public const nint m_OnCommentaryNewGame = 0x4C0; // CEntityIOOutput
    public const nint m_OnCommentaryMidGame = 0x4E8; // CEntityIOOutput
    public const nint m_OnCommentaryMultiplayerSpawn = 0x510; // CEntityIOOutput
}

public static class CCommentarySystem {
    public const nint m_bCommentaryConvarsChanging = 0x11; // bool
    public const nint m_bCommentaryEnabledMidGame = 0x12; // bool
    public const nint m_flNextTeleportTime = 0x14; // GameTime_t
    public const nint m_iTeleportStage = 0x18; // int32_t
    public const nint m_bCheatState = 0x1C; // bool
    public const nint m_bIsFirstSpawnGroupToLoad = 0x1D; // bool
    public const nint m_hCurrentNode = 0x38; // CHandle<CPointCommentaryNode>
    public const nint m_hActiveCommentaryNode = 0x3C; // CHandle<CPointCommentaryNode>
    public const nint m_hLastCommentaryNode = 0x40; // CHandle<CPointCommentaryNode>
    public const nint m_vecNodes = 0x48; // CUtlVector<CHandle<CPointCommentaryNode>>
}

public static class CCommentaryViewPosition { // CSprite
}

public static class CConstantForceController {
    public const nint m_linear = 0xC; // Vector
    public const nint m_angular = 0x18; // RotationVector
    public const nint m_linearSave = 0x24; // Vector
    public const nint m_angularSave = 0x30; // RotationVector
}

public static class CConstraintAnchor { // CBaseAnimGraph
    public const nint m_massScale = 0x8E8; // float
}

public static class CCoopBonusCoin { // CDynamicProp
}

public static class CCopyRecipientFilter {
    public const nint m_Flags = 0x8; // int32_t
    public const nint m_Recipients = 0x10; // CUtlVector<CPlayerSlot>
}

public static class CCredits { // CPointEntity
    public const nint m_OnCreditsDone = 0x4C0; // CEntityIOOutput
    public const nint m_bRolledOutroCredits = 0x4E8; // bool
    public const nint m_flLogoLength = 0x4EC; // float
}

public static class CDEagle { // CCSWeaponBaseGun
}

public static class CDamageRecord {
    public const nint m_PlayerDamager = 0x28; // CHandle<CCSPlayerPawnBase>
    public const nint m_PlayerRecipient = 0x2C; // CHandle<CCSPlayerPawnBase>
    public const nint m_hPlayerControllerDamager = 0x30; // CHandle<CCSPlayerController>
    public const nint m_hPlayerControllerRecipient = 0x34; // CHandle<CCSPlayerController>
    public const nint m_szPlayerDamagerName = 0x38; // CUtlString
    public const nint m_szPlayerRecipientName = 0x40; // CUtlString
    public const nint m_DamagerXuid = 0x48; // uint64_t
    public const nint m_RecipientXuid = 0x50; // uint64_t
    public const nint m_iDamage = 0x58; // int32_t
    public const nint m_iActualHealthRemoved = 0x5C; // int32_t
    public const nint m_iNumHits = 0x60; // int32_t
    public const nint m_iLastBulletUpdate = 0x64; // int32_t
    public const nint m_bIsOtherEnemy = 0x68; // bool
    public const nint m_killType = 0x69; // EKillTypes_t
}

public static class CDebugHistory { // CBaseEntity
    public const nint m_nNpcEvents = 0x4500; // int32_t
}

public static class CDecoyGrenade { // CBaseCSGrenade
}

public static class CDecoyProjectile { // CBaseCSGrenadeProjectile
    public const nint m_nDecoyShotTick = 0xAA0; // int32_t
    public const nint m_shotsRemaining = 0xAA4; // int32_t
    public const nint m_fExpireTime = 0xAA8; // GameTime_t
    public const nint m_decoyWeaponDefIndex = 0xAB8; // uint16_t
}

public static class CDynamicLight { // CBaseModelEntity
    public const nint m_ActualFlags = 0x710; // uint8_t
    public const nint m_Flags = 0x711; // uint8_t
    public const nint m_LightStyle = 0x712; // uint8_t
    public const nint m_On = 0x713; // bool
    public const nint m_Radius = 0x714; // float
    public const nint m_Exponent = 0x718; // int32_t
    public const nint m_InnerAngle = 0x71C; // float
    public const nint m_OuterAngle = 0x720; // float
    public const nint m_SpotRadius = 0x724; // float
}

public static class CDynamicProp { // CBreakableProp
    public const nint m_bCreateNavObstacle = 0xA68; // bool
    public const nint m_bUseHitboxesForRenderBox = 0xA69; // bool
    public const nint m_bUseAnimGraph = 0xA6A; // bool
    public const nint m_pOutputAnimBegun = 0xA70; // CEntityIOOutput
    public const nint m_pOutputAnimOver = 0xA98; // CEntityIOOutput
    public const nint m_pOutputAnimLoopCycleOver = 0xAC0; // CEntityIOOutput
    public const nint m_OnAnimReachedStart = 0xAE8; // CEntityIOOutput
    public const nint m_OnAnimReachedEnd = 0xB10; // CEntityIOOutput
    public const nint m_iszIdleAnim = 0xB38; // CUtlSymbolLarge
    public const nint m_nIdleAnimLoopMode = 0xB40; // AnimLoopMode_t
    public const nint m_bRandomizeCycle = 0xB44; // bool
    public const nint m_bStartDisabled = 0xB45; // bool
    public const nint m_bFiredStartEndOutput = 0xB46; // bool
    public const nint m_bForceNpcExclude = 0xB47; // bool
    public const nint m_bCreateNonSolid = 0xB48; // bool
    public const nint m_bIsOverrideProp = 0xB49; // bool
    public const nint m_iInitialGlowState = 0xB4C; // int32_t
    public const nint m_nGlowRange = 0xB50; // int32_t
    public const nint m_nGlowRangeMin = 0xB54; // int32_t
    public const nint m_glowColor = 0xB58; // Color
    public const nint m_nGlowTeam = 0xB5C; // int32_t
}

public static class CDynamicPropAPI {
}

public static class CDynamicPropAlias_cable_dynamic { // CDynamicProp
}

public static class CDynamicPropAlias_dynamic_prop { // CDynamicProp
}

public static class CDynamicPropAlias_prop_dynamic_override { // CDynamicProp
}

public static class CEconEntity { // CBaseFlex
    public const nint m_AttributeManager = 0x988; // CAttributeContainer
    public const nint m_OriginalOwnerXuidLow = 0xC50; // uint32_t
    public const nint m_OriginalOwnerXuidHigh = 0xC54; // uint32_t
    public const nint m_nFallbackPaintKit = 0xC58; // int32_t
    public const nint m_nFallbackSeed = 0xC5C; // int32_t
    public const nint m_flFallbackWear = 0xC60; // float
    public const nint m_nFallbackStatTrak = 0xC64; // int32_t
    public const nint m_hOldProvidee = 0xC68; // CHandle<CBaseEntity>
    public const nint m_iOldOwnerClass = 0xC6C; // int32_t
}

public static class CEconItemAttribute {
    public const nint m_iAttributeDefinitionIndex = 0x30; // uint16_t
    public const nint m_flValue = 0x34; // float
    public const nint m_flInitialValue = 0x38; // float
    public const nint m_nRefundableCurrency = 0x3C; // int32_t
    public const nint m_bSetBonus = 0x40; // bool
}

public static class CEconItemView { // IEconItemInterface
    public const nint m_iItemDefinitionIndex = 0x38; // uint16_t
    public const nint m_iEntityQuality = 0x3C; // int32_t
    public const nint m_iEntityLevel = 0x40; // uint32_t
    public const nint m_iItemID = 0x48; // uint64_t
    public const nint m_iItemIDHigh = 0x50; // uint32_t
    public const nint m_iItemIDLow = 0x54; // uint32_t
    public const nint m_iAccountID = 0x58; // uint32_t
    public const nint m_iInventoryPosition = 0x5C; // uint32_t
    public const nint m_bInitialized = 0x68; // bool
    public const nint m_AttributeList = 0x70; // CAttributeList
    public const nint m_NetworkedDynamicAttributes = 0xD0; // CAttributeList
    public const nint m_szCustomName = 0x130; // char[161]
    public const nint m_szCustomNameOverride = 0x1D1; // char[161]
}

public static class CEconWearable { // CEconEntity
    public const nint m_nForceSkin = 0xC70; // int32_t
    public const nint m_bAlwaysAllow = 0xC74; // bool
}

public static class CEffectData {
    public const nint m_vOrigin = 0x8; // Vector
    public const nint m_vStart = 0x14; // Vector
    public const nint m_vNormal = 0x20; // Vector
    public const nint m_vAngles = 0x2C; // QAngle
    public const nint m_hEntity = 0x38; // CEntityHandle
    public const nint m_hOtherEntity = 0x3C; // CEntityHandle
    public const nint m_flScale = 0x40; // float
    public const nint m_flMagnitude = 0x44; // float
    public const nint m_flRadius = 0x48; // float
    public const nint m_nSurfaceProp = 0x4C; // CUtlStringToken
    public const nint m_nEffectIndex = 0x50; // CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
    public const nint m_nDamageType = 0x58; // uint32_t
    public const nint m_nPenetrate = 0x5C; // uint8_t
    public const nint m_nMaterial = 0x5E; // uint16_t
    public const nint m_nHitBox = 0x60; // uint16_t
    public const nint m_nColor = 0x62; // uint8_t
    public const nint m_fFlags = 0x63; // uint8_t
    public const nint m_nAttachmentIndex = 0x64; // AttachmentHandle_t
    public const nint m_nAttachmentName = 0x68; // CUtlStringToken
    public const nint m_iEffectName = 0x6C; // uint16_t
    public const nint m_nExplosionType = 0x6E; // uint8_t
}

public static class CEnableMotionFixup { // CBaseEntity
}

public static class CEntityBlocker { // CBaseModelEntity
}

public static class CEntityComponent {
}

public static class CEntityDissolve { // CBaseModelEntity
    public const nint m_flFadeInStart = 0x710; // float
    public const nint m_flFadeInLength = 0x714; // float
    public const nint m_flFadeOutModelStart = 0x718; // float
    public const nint m_flFadeOutModelLength = 0x71C; // float
    public const nint m_flFadeOutStart = 0x720; // float
    public const nint m_flFadeOutLength = 0x724; // float
    public const nint m_flStartTime = 0x728; // GameTime_t
    public const nint m_nDissolveType = 0x72C; // EntityDisolveType_t
    public const nint m_vDissolverOrigin = 0x730; // Vector
    public const nint m_nMagnitude = 0x73C; // uint32_t
}

public static class CEntityFlame { // CBaseEntity
    public const nint m_hEntAttached = 0x4C0; // CHandle<CBaseEntity>
    public const nint m_bCheapEffect = 0x4C4; // bool
    public const nint m_flSize = 0x4C8; // float
    public const nint m_bUseHitboxes = 0x4CC; // bool
    public const nint m_iNumHitboxFires = 0x4D0; // int32_t
    public const nint m_flHitboxFireScale = 0x4D4; // float
    public const nint m_flLifetime = 0x4D8; // GameTime_t
    public const nint m_hAttacker = 0x4DC; // CHandle<CBaseEntity>
    public const nint m_iDangerSound = 0x4E0; // int32_t
    public const nint m_flDirectDamagePerSecond = 0x4E4; // float
    public const nint m_iCustomDamageType = 0x4E8; // int32_t
}

public static class CEntityIdentity {
    public const nint m_nameStringableIndex = 0x14; // int32_t
    public const nint m_name = 0x18; // CUtlSymbolLarge
    public const nint m_designerName = 0x20; // CUtlSymbolLarge
    public const nint m_flags = 0x30; // uint32_t
    public const nint m_worldGroupId = 0x38; // WorldGroupId_t
    public const nint m_fDataObjectTypes = 0x3C; // uint32_t
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
    public const nint m_bVisibleinPVS = 0x30; // bool
}

public static class CEntitySubclassVDataBase {
}

public static class CEnvBeam { // CBeam
    public const nint m_active = 0x7B0; // int32_t
    public const nint m_spriteTexture = 0x7B8; // CStrongHandle<InfoForResourceTypeIMaterial2>
    public const nint m_iszStartEntity = 0x7C0; // CUtlSymbolLarge
    public const nint m_iszEndEntity = 0x7C8; // CUtlSymbolLarge
    public const nint m_life = 0x7D0; // float
    public const nint m_boltWidth = 0x7D4; // float
    public const nint m_noiseAmplitude = 0x7D8; // float
    public const nint m_speed = 0x7DC; // int32_t
    public const nint m_restrike = 0x7E0; // float
    public const nint m_iszSpriteName = 0x7E8; // CUtlSymbolLarge
    public const nint m_frameStart = 0x7F0; // int32_t
    public const nint m_vEndPointWorld = 0x7F4; // Vector
    public const nint m_vEndPointRelative = 0x800; // Vector
    public const nint m_radius = 0x80C; // float
    public const nint m_TouchType = 0x810; // Touch_t
    public const nint m_iFilterName = 0x818; // CUtlSymbolLarge
    public const nint m_hFilter = 0x820; // CHandle<CBaseEntity>
    public const nint m_iszDecal = 0x828; // CUtlSymbolLarge
    public const nint m_OnTouchedByEntity = 0x830; // CEntityIOOutput
}

public static class CEnvBeverage { // CBaseEntity
    public const nint m_CanInDispenser = 0x4C0; // bool
    public const nint m_nBeverageType = 0x4C4; // int32_t
}

public static class CEnvCombinedLightProbeVolume { // CBaseEntity
    public const nint m_Color = 0x1518; // Color
    public const nint m_flBrightness = 0x151C; // float
    public const nint m_hCubemapTexture = 0x1520; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_bCustomCubemapTexture = 0x1528; // bool
    public const nint m_hLightProbeTexture = 0x1530; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_hLightProbeDirectLightIndicesTexture = 0x1538; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_hLightProbeDirectLightScalarsTexture = 0x1540; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_hLightProbeDirectLightShadowsTexture = 0x1548; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_vBoxMins = 0x1550; // Vector
    public const nint m_vBoxMaxs = 0x155C; // Vector
    public const nint m_bMoveable = 0x1568; // bool
    public const nint m_nHandshake = 0x156C; // int32_t
    public const nint m_nEnvCubeMapArrayIndex = 0x1570; // int32_t
    public const nint m_nPriority = 0x1574; // int32_t
    public const nint m_bStartDisabled = 0x1578; // bool
    public const nint m_flEdgeFadeDist = 0x157C; // float
    public const nint m_vEdgeFadeDists = 0x1580; // Vector
    public const nint m_nLightProbeSizeX = 0x158C; // int32_t
    public const nint m_nLightProbeSizeY = 0x1590; // int32_t
    public const nint m_nLightProbeSizeZ = 0x1594; // int32_t
    public const nint m_nLightProbeAtlasX = 0x1598; // int32_t
    public const nint m_nLightProbeAtlasY = 0x159C; // int32_t
    public const nint m_nLightProbeAtlasZ = 0x15A0; // int32_t
    public const nint m_bEnabled = 0x15B9; // bool
}

public static class CEnvCubemap { // CBaseEntity
    public const nint m_hCubemapTexture = 0x540; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_bCustomCubemapTexture = 0x548; // bool
    public const nint m_flInfluenceRadius = 0x54C; // float
    public const nint m_vBoxProjectMins = 0x550; // Vector
    public const nint m_vBoxProjectMaxs = 0x55C; // Vector
    public const nint m_bMoveable = 0x568; // bool
    public const nint m_nHandshake = 0x56C; // int32_t
    public const nint m_nEnvCubeMapArrayIndex = 0x570; // int32_t
    public const nint m_nPriority = 0x574; // int32_t
    public const nint m_flEdgeFadeDist = 0x578; // float
    public const nint m_vEdgeFadeDists = 0x57C; // Vector
    public const nint m_flDiffuseScale = 0x588; // float
    public const nint m_bStartDisabled = 0x58C; // bool
    public const nint m_bDefaultEnvMap = 0x58D; // bool
    public const nint m_bDefaultSpecEnvMap = 0x58E; // bool
    public const nint m_bIndoorCubeMap = 0x58F; // bool
    public const nint m_bCopyDiffuseFromDefaultCubemap = 0x590; // bool
    public const nint m_bEnabled = 0x5A0; // bool
}

public static class CEnvCubemapBox { // CEnvCubemap
}

public static class CEnvCubemapFog { // CBaseEntity
    public const nint m_flEndDistance = 0x4C0; // float
    public const nint m_flStartDistance = 0x4C4; // float
    public const nint m_flFogFalloffExponent = 0x4C8; // float
    public const nint m_bHeightFogEnabled = 0x4CC; // bool
    public const nint m_flFogHeightWidth = 0x4D0; // float
    public const nint m_flFogHeightEnd = 0x4D4; // float
    public const nint m_flFogHeightStart = 0x4D8; // float
    public const nint m_flFogHeightExponent = 0x4DC; // float
    public const nint m_flLODBias = 0x4E0; // float
    public const nint m_bActive = 0x4E4; // bool
    public const nint m_bStartDisabled = 0x4E5; // bool
    public const nint m_flFogMaxOpacity = 0x4E8; // float
    public const nint m_nCubemapSourceType = 0x4EC; // int32_t
    public const nint m_hSkyMaterial = 0x4F0; // CStrongHandle<InfoForResourceTypeIMaterial2>
    public const nint m_iszSkyEntity = 0x4F8; // CUtlSymbolLarge
    public const nint m_hFogCubemapTexture = 0x500; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_bHasHeightFogEnd = 0x508; // bool
    public const nint m_bFirstTime = 0x509; // bool
}

public static class CEnvDecal { // CBaseModelEntity
    public const nint m_hDecalMaterial = 0x710; // CStrongHandle<InfoForResourceTypeIMaterial2>
    public const nint m_flWidth = 0x718; // float
    public const nint m_flHeight = 0x71C; // float
    public const nint m_flDepth = 0x720; // float
    public const nint m_nRenderOrder = 0x724; // uint32_t
    public const nint m_bProjectOnWorld = 0x728; // bool
    public const nint m_bProjectOnCharacters = 0x729; // bool
    public const nint m_bProjectOnWater = 0x72A; // bool
    public const nint m_flDepthSortBias = 0x72C; // float
}

public static class CEnvDetailController { // CBaseEntity
    public const nint m_flFadeStartDist = 0x4C0; // float
    public const nint m_flFadeEndDist = 0x4C4; // float
}

public static class CEnvEntityIgniter { // CBaseEntity
    public const nint m_flLifetime = 0x4C0; // float
}

public static class CEnvEntityMaker { // CPointEntity
    public const nint m_vecEntityMins = 0x4C0; // Vector
    public const nint m_vecEntityMaxs = 0x4CC; // Vector
    public const nint m_hCurrentInstance = 0x4D8; // CHandle<CBaseEntity>
    public const nint m_hCurrentBlocker = 0x4DC; // CHandle<CBaseEntity>
    public const nint m_vecBlockerOrigin = 0x4E0; // Vector
    public const nint m_angPostSpawnDirection = 0x4EC; // QAngle
    public const nint m_flPostSpawnDirectionVariance = 0x4F8; // float
    public const nint m_flPostSpawnSpeed = 0x4FC; // float
    public const nint m_bPostSpawnUseAngles = 0x500; // bool
    public const nint m_iszTemplate = 0x508; // CUtlSymbolLarge
    public const nint m_pOutputOnSpawned = 0x510; // CEntityIOOutput
    public const nint m_pOutputOnFailedSpawn = 0x538; // CEntityIOOutput
}

public static class CEnvExplosion { // CModelPointEntity
    public const nint m_iMagnitude = 0x710; // int32_t
    public const nint m_flPlayerDamage = 0x714; // float
    public const nint m_iRadiusOverride = 0x718; // int32_t
    public const nint m_flInnerRadius = 0x71C; // float
    public const nint m_spriteScale = 0x720; // int32_t
    public const nint m_flDamageForce = 0x724; // float
    public const nint m_hInflictor = 0x728; // CHandle<CBaseEntity>
    public const nint m_iCustomDamageType = 0x72C; // int32_t
    public const nint m_iszExplosionType = 0x738; // CUtlSymbolLarge
    public const nint m_iszCustomEffectName = 0x740; // CUtlSymbolLarge
    public const nint m_iszCustomSoundName = 0x748; // CUtlSymbolLarge
    public const nint m_iClassIgnore = 0x750; // Class_T
    public const nint m_iClassIgnore2 = 0x754; // Class_T
    public const nint m_iszEntityIgnoreName = 0x758; // CUtlSymbolLarge
    public const nint m_hEntityIgnore = 0x760; // CHandle<CBaseEntity>
}

public static class CEnvFade { // CLogicalEntity
    public const nint m_fadeColor = 0x4C0; // Color
    public const nint m_Duration = 0x4C4; // float
    public const nint m_HoldDuration = 0x4C8; // float
    public const nint m_OnBeginFade = 0x4D0; // CEntityIOOutput
}

public static class CEnvFireSensor { // CBaseEntity
    public const nint m_bEnabled = 0x4C0; // bool
    public const nint m_bHeatAtLevel = 0x4C1; // bool
    public const nint m_radius = 0x4C4; // float
    public const nint m_targetLevel = 0x4C8; // float
    public const nint m_targetTime = 0x4CC; // float
    public const nint m_levelTime = 0x4D0; // float
    public const nint m_OnHeatLevelStart = 0x4D8; // CEntityIOOutput
    public const nint m_OnHeatLevelEnd = 0x500; // CEntityIOOutput
}

public static class CEnvFireSource { // CBaseEntity
    public const nint m_bEnabled = 0x4C0; // bool
    public const nint m_radius = 0x4C4; // float
    public const nint m_damage = 0x4C8; // float
}

public static class CEnvFunnel { // CBaseEntity
}

public static class CEnvGlobal { // CLogicalEntity
    public const nint m_outCounter = 0x4C0; // CEntityOutputTemplate<int32_t>
    public const nint m_globalstate = 0x4E8; // CUtlSymbolLarge
    public const nint m_triggermode = 0x4F0; // int32_t
    public const nint m_initialstate = 0x4F4; // int32_t
    public const nint m_counter = 0x4F8; // int32_t
}

public static class CEnvHudHint { // CPointEntity
    public const nint m_iszMessage = 0x4C0; // CUtlSymbolLarge
}

public static class CEnvInstructorHint { // CPointEntity
    public const nint m_iszName = 0x4C0; // CUtlSymbolLarge
    public const nint m_iszReplace_Key = 0x4C8; // CUtlSymbolLarge
    public const nint m_iszHintTargetEntity = 0x4D0; // CUtlSymbolLarge
    public const nint m_iTimeout = 0x4D8; // int32_t
    public const nint m_iDisplayLimit = 0x4DC; // int32_t
    public const nint m_iszIcon_Onscreen = 0x4E0; // CUtlSymbolLarge
    public const nint m_iszIcon_Offscreen = 0x4E8; // CUtlSymbolLarge
    public const nint m_iszCaption = 0x4F0; // CUtlSymbolLarge
    public const nint m_iszActivatorCaption = 0x4F8; // CUtlSymbolLarge
    public const nint m_Color = 0x500; // Color
    public const nint m_fIconOffset = 0x504; // float
    public const nint m_fRange = 0x508; // float
    public const nint m_iPulseOption = 0x50C; // uint8_t
    public const nint m_iAlphaOption = 0x50D; // uint8_t
    public const nint m_iShakeOption = 0x50E; // uint8_t
    public const nint m_bStatic = 0x50F; // bool
    public const nint m_bNoOffscreen = 0x510; // bool
    public const nint m_bForceCaption = 0x511; // bool
    public const nint m_iInstanceType = 0x514; // int32_t
    public const nint m_bSuppressRest = 0x518; // bool
    public const nint m_iszBinding = 0x520; // CUtlSymbolLarge
    public const nint m_bAllowNoDrawTarget = 0x528; // bool
    public const nint m_bAutoStart = 0x529; // bool
    public const nint m_bLocalPlayerOnly = 0x52A; // bool
}

public static class CEnvInstructorVRHint { // CPointEntity
    public const nint m_iszName = 0x4C0; // CUtlSymbolLarge
    public const nint m_iszHintTargetEntity = 0x4C8; // CUtlSymbolLarge
    public const nint m_iTimeout = 0x4D0; // int32_t
    public const nint m_iszCaption = 0x4D8; // CUtlSymbolLarge
    public const nint m_iszStartSound = 0x4E0; // CUtlSymbolLarge
    public const nint m_iLayoutFileType = 0x4E8; // int32_t
    public const nint m_iszCustomLayoutFile = 0x4F0; // CUtlSymbolLarge
    public const nint m_iAttachType = 0x4F8; // int32_t
    public const nint m_flHeightOffset = 0x4FC; // float
}

public static class CEnvLaser { // CBeam
    public const nint m_iszLaserTarget = 0x7B0; // CUtlSymbolLarge
    public const nint m_pSprite = 0x7B8; // CSprite*
    public const nint m_iszSpriteName = 0x7C0; // CUtlSymbolLarge
    public const nint m_firePosition = 0x7C8; // Vector
    public const nint m_flStartFrame = 0x7D4; // float
}

public static class CEnvLightProbeVolume { // CBaseEntity
    public const nint m_hLightProbeTexture = 0x1498; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_hLightProbeDirectLightIndicesTexture = 0x14A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_hLightProbeDirectLightScalarsTexture = 0x14A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_hLightProbeDirectLightShadowsTexture = 0x14B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_vBoxMins = 0x14B8; // Vector
    public const nint m_vBoxMaxs = 0x14C4; // Vector
    public const nint m_bMoveable = 0x14D0; // bool
    public const nint m_nHandshake = 0x14D4; // int32_t
    public const nint m_nPriority = 0x14D8; // int32_t
    public const nint m_bStartDisabled = 0x14DC; // bool
    public const nint m_nLightProbeSizeX = 0x14E0; // int32_t
    public const nint m_nLightProbeSizeY = 0x14E4; // int32_t
    public const nint m_nLightProbeSizeZ = 0x14E8; // int32_t
    public const nint m_nLightProbeAtlasX = 0x14EC; // int32_t
    public const nint m_nLightProbeAtlasY = 0x14F0; // int32_t
    public const nint m_nLightProbeAtlasZ = 0x14F4; // int32_t
    public const nint m_bEnabled = 0x1501; // bool
}

public static class CEnvMicrophone { // CPointEntity
    public const nint m_bDisabled = 0x4C0; // bool
    public const nint m_hMeasureTarget = 0x4C4; // CHandle<CBaseEntity>
    public const nint m_nSoundMask = 0x4C8; // int32_t
    public const nint m_flSensitivity = 0x4CC; // float
    public const nint m_flSmoothFactor = 0x4D0; // float
    public const nint m_flMaxRange = 0x4D4; // float
    public const nint m_iszSpeakerName = 0x4D8; // CUtlSymbolLarge
    public const nint m_hSpeaker = 0x4E0; // CHandle<CBaseEntity>
    public const nint m_bAvoidFeedback = 0x4E4; // bool
    public const nint m_iSpeakerDSPPreset = 0x4E8; // int32_t
    public const nint m_iszListenFilter = 0x4F0; // CUtlSymbolLarge
    public const nint m_hListenFilter = 0x4F8; // CHandle<CBaseFilter>
    public const nint m_SoundLevel = 0x500; // CEntityOutputTemplate<float>
    public const nint m_OnRoutedSound = 0x528; // CEntityIOOutput
    public const nint m_OnHeardSound = 0x550; // CEntityIOOutput
    public const nint m_szLastSound = 0x578; // char[256]
    public const nint m_iLastRoutedFrame = 0x678; // int32_t
}

public static class CEnvMuzzleFlash { // CPointEntity
    public const nint m_flScale = 0x4C0; // float
    public const nint m_iszParentAttachment = 0x4C8; // CUtlSymbolLarge
}

public static class CEnvParticleGlow { // CParticleSystem
    public const nint m_flAlphaScale = 0xC88; // float
    public const nint m_flRadiusScale = 0xC8C; // float
    public const nint m_flSelfIllumScale = 0xC90; // float
    public const nint m_ColorTint = 0xC94; // Color
    public const nint m_hTextureOverride = 0xC98; // CStrongHandle<InfoForResourceTypeCTextureBase>
}

public static class CEnvProjectedTexture { // CModelPointEntity
    public const nint m_hTargetEntity = 0x710; // CHandle<CBaseEntity>
    public const nint m_bState = 0x714; // bool
    public const nint m_bAlwaysUpdate = 0x715; // bool
    public const nint m_flLightFOV = 0x718; // float
    public const nint m_bEnableShadows = 0x71C; // bool
    public const nint m_bSimpleProjection = 0x71D; // bool
    public const nint m_bLightOnlyTarget = 0x71E; // bool
    public const nint m_bLightWorld = 0x71F; // bool
    public const nint m_bCameraSpace = 0x720; // bool
    public const nint m_flBrightnessScale = 0x724; // float
    public const nint m_LightColor = 0x728; // Color
    public const nint m_flIntensity = 0x72C; // float
    public const nint m_flLinearAttenuation = 0x730; // float
    public const nint m_flQuadraticAttenuation = 0x734; // float
    public const nint m_bVolumetric = 0x738; // bool
    public const nint m_flNoiseStrength = 0x73C; // float
    public const nint m_flFlashlightTime = 0x740; // float
    public const nint m_nNumPlanes = 0x744; // uint32_t
    public const nint m_flPlaneOffset = 0x748; // float
    public const nint m_flVolumetricIntensity = 0x74C; // float
    public const nint m_flColorTransitionTime = 0x750; // float
    public const nint m_flAmbient = 0x754; // float
    public const nint m_SpotlightTextureName = 0x758; // char[512]
    public const nint m_nSpotlightTextureFrame = 0x958; // int32_t
    public const nint m_nShadowQuality = 0x95C; // uint32_t
    public const nint m_flNearZ = 0x960; // float
    public const nint m_flFarZ = 0x964; // float
    public const nint m_flProjectionSize = 0x968; // float
    public const nint m_flRotation = 0x96C; // float
    public const nint m_bFlipHorizontal = 0x970; // bool
}

public static class CEnvScreenOverlay { // CPointEntity
    public const nint m_iszOverlayNames = 0x4C0; // CUtlSymbolLarge[10]
    public const nint m_flOverlayTimes = 0x510; // float[10]
    public const nint m_flStartTime = 0x538; // GameTime_t
    public const nint m_iDesiredOverlay = 0x53C; // int32_t
    public const nint m_bIsActive = 0x540; // bool
}

public static class CEnvShake { // CPointEntity
    public const nint m_limitToEntity = 0x4C0; // CUtlSymbolLarge
    public const nint m_Amplitude = 0x4C8; // float
    public const nint m_Frequency = 0x4CC; // float
    public const nint m_Duration = 0x4D0; // float
    public const nint m_Radius = 0x4D4; // float
    public const nint m_stopTime = 0x4D8; // GameTime_t
    public const nint m_nextShake = 0x4DC; // GameTime_t
    public const nint m_currentAmp = 0x4E0; // float
    public const nint m_maxForce = 0x4E4; // Vector
    public const nint m_shakeCallback = 0x4F8; // CPhysicsShake
}

public static class CEnvSky { // CBaseModelEntity
    public const nint m_hSkyMaterial = 0x710; // CStrongHandle<InfoForResourceTypeIMaterial2>
    public const nint m_hSkyMaterialLightingOnly = 0x718; // CStrongHandle<InfoForResourceTypeIMaterial2>
    public const nint m_bStartDisabled = 0x720; // bool
    public const nint m_vTintColor = 0x721; // Color
    public const nint m_vTintColorLightingOnly = 0x725; // Color
    public const nint m_flBrightnessScale = 0x72C; // float
    public const nint m_nFogType = 0x730; // int32_t
    public const nint m_flFogMinStart = 0x734; // float
    public const nint m_flFogMinEnd = 0x738; // float
    public const nint m_flFogMaxStart = 0x73C; // float
    public const nint m_flFogMaxEnd = 0x740; // float
    public const nint m_bEnabled = 0x744; // bool
}

public static class CEnvSoundscape { // CServerOnlyEntity
    public const nint m_OnPlay = 0x4C0; // CEntityIOOutput
    public const nint m_flRadius = 0x4E8; // float
    public const nint m_soundscapeName = 0x4F0; // CUtlSymbolLarge
    public const nint m_soundEventName = 0x4F8; // CUtlSymbolLarge
    public const nint m_bOverrideWithEvent = 0x500; // bool
    public const nint m_soundscapeIndex = 0x504; // int32_t
    public const nint m_soundscapeEntityListId = 0x508; // int32_t
    public const nint m_soundEventHash = 0x50C; // uint32_t
    public const nint m_positionNames = 0x510; // CUtlSymbolLarge[8]
    public const nint m_hProxySoundscape = 0x550; // CHandle<CEnvSoundscape>
    public const nint m_bDisabled = 0x554; // bool
}

public static class CEnvSoundscapeAlias_snd_soundscape { // CEnvSoundscape
}

public static class CEnvSoundscapeProxy { // CEnvSoundscape
    public const nint m_MainSoundscapeName = 0x558; // CUtlSymbolLarge
}

public static class CEnvSoundscapeProxyAlias_snd_soundscape_proxy { // CEnvSoundscapeProxy
}

public static class CEnvSoundscapeTriggerable { // CEnvSoundscape
}

public static class CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable { // CEnvSoundscapeTriggerable
}

public static class CEnvSpark { // CPointEntity
    public const nint m_flDelay = 0x4C0; // float
    public const nint m_nMagnitude = 0x4C4; // int32_t
    public const nint m_nTrailLength = 0x4C8; // int32_t
    public const nint m_nType = 0x4CC; // int32_t
    public const nint m_OnSpark = 0x4D0; // CEntityIOOutput
}

public static class CEnvSplash { // CPointEntity
    public const nint m_flScale = 0x4C0; // float
}

public static class CEnvTilt { // CPointEntity
    public const nint m_Duration = 0x4C0; // float
    public const nint m_Radius = 0x4C4; // float
    public const nint m_TiltTime = 0x4C8; // float
    public const nint m_stopTime = 0x4CC; // GameTime_t
}

public static class CEnvTracer { // CPointEntity
    public const nint m_vecEnd = 0x4C0; // Vector
    public const nint m_flDelay = 0x4CC; // float
}

public static class CEnvViewPunch { // CPointEntity
    public const nint m_flRadius = 0x4C0; // float
    public const nint m_angViewPunch = 0x4C4; // QAngle
}

public static class CEnvVolumetricFogController { // CBaseEntity
    public const nint m_flScattering = 0x4C0; // float
    public const nint m_flAnisotropy = 0x4C4; // float
    public const nint m_flFadeSpeed = 0x4C8; // float
    public const nint m_flDrawDistance = 0x4CC; // float
    public const nint m_flFadeInStart = 0x4D0; // float
    public const nint m_flFadeInEnd = 0x4D4; // float
    public const nint m_flIndirectStrength = 0x4D8; // float
    public const nint m_nIndirectTextureDimX = 0x4DC; // int32_t
    public const nint m_nIndirectTextureDimY = 0x4E0; // int32_t
    public const nint m_nIndirectTextureDimZ = 0x4E4; // int32_t
    public const nint m_vBoxMins = 0x4E8; // Vector
    public const nint m_vBoxMaxs = 0x4F4; // Vector
    public const nint m_bActive = 0x500; // bool
    public const nint m_flStartAnisoTime = 0x504; // GameTime_t
    public const nint m_flStartScatterTime = 0x508; // GameTime_t
    public const nint m_flStartDrawDistanceTime = 0x50C; // GameTime_t
    public const nint m_flStartAnisotropy = 0x510; // float
    public const nint m_flStartScattering = 0x514; // float
    public const nint m_flStartDrawDistance = 0x518; // float
    public const nint m_flDefaultAnisotropy = 0x51C; // float
    public const nint m_flDefaultScattering = 0x520; // float
    public const nint m_flDefaultDrawDistance = 0x524; // float
    public const nint m_bStartDisabled = 0x528; // bool
    public const nint m_bEnableIndirect = 0x529; // bool
    public const nint m_bIsMaster = 0x52A; // bool
    public const nint m_hFogIndirectTexture = 0x530; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_nForceRefreshCount = 0x538; // int32_t
    public const nint m_bFirstTime = 0x53C; // bool
}

public static class CEnvVolumetricFogVolume { // CBaseEntity
    public const nint m_bActive = 0x4C0; // bool
    public const nint m_vBoxMins = 0x4C4; // Vector
    public const nint m_vBoxMaxs = 0x4D0; // Vector
    public const nint m_bStartDisabled = 0x4DC; // bool
    public const nint m_flStrength = 0x4E0; // float
    public const nint m_nFalloffShape = 0x4E4; // int32_t
    public const nint m_flFalloffExponent = 0x4E8; // float
}

public static class CEnvWind { // CBaseEntity
    public const nint m_EnvWindShared = 0x4C0; // CEnvWindShared
}

public static class CEnvWindShared {
    public const nint m_flStartTime = 0x8; // GameTime_t
    public const nint m_iWindSeed = 0xC; // uint32_t
    public const nint m_iMinWind = 0x10; // uint16_t
    public const nint m_iMaxWind = 0x12; // uint16_t
    public const nint m_windRadius = 0x14; // int32_t
    public const nint m_iMinGust = 0x18; // uint16_t
    public const nint m_iMaxGust = 0x1A; // uint16_t
    public const nint m_flMinGustDelay = 0x1C; // float
    public const nint m_flMaxGustDelay = 0x20; // float
    public const nint m_flGustDuration = 0x24; // float
    public const nint m_iGustDirChange = 0x28; // uint16_t
    public const nint m_location = 0x2C; // Vector
    public const nint m_iszGustSound = 0x38; // int32_t
    public const nint m_iWindDir = 0x3C; // int32_t
    public const nint m_flWindSpeed = 0x40; // float
    public const nint m_currentWindVector = 0x44; // Vector
    public const nint m_CurrentSwayVector = 0x50; // Vector
    public const nint m_PrevSwayVector = 0x5C; // Vector
    public const nint m_iInitialWindDir = 0x68; // uint16_t
    public const nint m_flInitialWindSpeed = 0x6C; // float
    public const nint m_OnGustStart = 0x70; // CEntityIOOutput
    public const nint m_OnGustEnd = 0x98; // CEntityIOOutput
    public const nint m_flVariationTime = 0xC0; // GameTime_t
    public const nint m_flSwayTime = 0xC4; // GameTime_t
    public const nint m_flSimTime = 0xC8; // GameTime_t
    public const nint m_flSwitchTime = 0xCC; // GameTime_t
    public const nint m_flAveWindSpeed = 0xD0; // float
    public const nint m_bGusting = 0xD4; // bool
    public const nint m_flWindAngleVariation = 0xD8; // float
    public const nint m_flWindSpeedVariation = 0xDC; // float
    public const nint m_iEntIndex = 0xE0; // CEntityIndex
}

public static class CEnvWindShared_WindAveEvent_t {
    public const nint m_flStartWindSpeed = 0x0; // float
    public const nint m_flAveWindSpeed = 0x4; // float
}

public static class CEnvWindShared_WindVariationEvent_t {
    public const nint m_flWindAngleVariation = 0x0; // float
    public const nint m_flWindSpeedVariation = 0x4; // float
}

public static class CFilterAttributeInt { // CBaseFilter
    public const nint m_sAttributeName = 0x518; // CUtlStringToken
}

public static class CFilterClass { // CBaseFilter
    public const nint m_iFilterClass = 0x518; // CUtlSymbolLarge
}

public static class CFilterContext { // CBaseFilter
    public const nint m_iFilterContext = 0x518; // CUtlSymbolLarge
}

public static class CFilterEnemy { // CBaseFilter
    public const nint m_iszEnemyName = 0x518; // CUtlSymbolLarge
    public const nint m_flRadius = 0x520; // float
    public const nint m_flOuterRadius = 0x524; // float
    public const nint m_nMaxSquadmatesPerEnemy = 0x528; // int32_t
    public const nint m_iszPlayerName = 0x530; // CUtlSymbolLarge
}

public static class CFilterLOS { // CBaseFilter
}

public static class CFilterMassGreater { // CBaseFilter
    public const nint m_fFilterMass = 0x518; // float
}

public static class CFilterModel { // CBaseFilter
    public const nint m_iFilterModel = 0x518; // CUtlSymbolLarge
}

public static class CFilterMultiple { // CBaseFilter
    public const nint m_nFilterType = 0x518; // filter_t
    public const nint m_iFilterName = 0x520; // CUtlSymbolLarge[10]
    public const nint m_hFilter = 0x570; // CHandle<CBaseEntity>[10]
    public const nint m_nFilterCount = 0x598; // int32_t
}

public static class CFilterName { // CBaseFilter
    public const nint m_iFilterName = 0x518; // CUtlSymbolLarge
}

public static class CFilterProximity { // CBaseFilter
    public const nint m_flRadius = 0x518; // float
}

public static class CFire { // CBaseModelEntity
    public const nint m_hEffect = 0x710; // CHandle<CBaseFire>
    public const nint m_hOwner = 0x714; // CHandle<CBaseEntity>
    public const nint m_nFireType = 0x718; // int32_t
    public const nint m_flFuel = 0x71C; // float
    public const nint m_flDamageTime = 0x720; // GameTime_t
    public const nint m_lastDamage = 0x724; // GameTime_t
    public const nint m_flFireSize = 0x728; // float
    public const nint m_flLastNavUpdateTime = 0x72C; // GameTime_t
    public const nint m_flHeatLevel = 0x730; // float
    public const nint m_flHeatAbsorb = 0x734; // float
    public const nint m_flDamageScale = 0x738; // float
    public const nint m_flMaxHeat = 0x73C; // float
    public const nint m_flLastHeatLevel = 0x740; // float
    public const nint m_flAttackTime = 0x744; // float
    public const nint m_bEnabled = 0x748; // bool
    public const nint m_bStartDisabled = 0x749; // bool
    public const nint m_bDidActivate = 0x74A; // bool
    public const nint m_OnIgnited = 0x750; // CEntityIOOutput
    public const nint m_OnExtinguished = 0x778; // CEntityIOOutput
}

public static class CFireCrackerBlast { // CInferno
}

public static class CFireSmoke { // CBaseFire
    public const nint m_nFlameModelIndex = 0x4D0; // int32_t
    public const nint m_nFlameFromAboveModelIndex = 0x4D4; // int32_t
}

public static class CFiringModeFloat {
    public const nint m_flValues = 0x0; // float[2]
}

public static class CFiringModeInt {
    public const nint m_nValues = 0x0; // int32_t[2]
}

public static class CFish { // CBaseAnimGraph
    public const nint m_pool = 0x8E8; // CHandle<CFishPool>
    public const nint m_id = 0x8EC; // uint32_t
    public const nint m_x = 0x8F0; // float
    public const nint m_y = 0x8F4; // float
    public const nint m_z = 0x8F8; // float
    public const nint m_angle = 0x8FC; // float
    public const nint m_angleChange = 0x900; // float
    public const nint m_forward = 0x904; // Vector
    public const nint m_perp = 0x910; // Vector
    public const nint m_poolOrigin = 0x91C; // Vector
    public const nint m_waterLevel = 0x928; // float
    public const nint m_speed = 0x92C; // float
    public const nint m_desiredSpeed = 0x930; // float
    public const nint m_calmSpeed = 0x934; // float
    public const nint m_panicSpeed = 0x938; // float
    public const nint m_avoidRange = 0x93C; // float
    public const nint m_turnTimer = 0x940; // CountdownTimer
    public const nint m_turnClockwise = 0x958; // bool
    public const nint m_goTimer = 0x960; // CountdownTimer
    public const nint m_moveTimer = 0x978; // CountdownTimer
    public const nint m_panicTimer = 0x990; // CountdownTimer
    public const nint m_disperseTimer = 0x9A8; // CountdownTimer
    public const nint m_proximityTimer = 0x9C0; // CountdownTimer
    public const nint m_visible = 0x9D8; // CUtlVector<CFish*>
}

public static class CFishPool { // CBaseEntity
    public const nint m_fishCount = 0x4D0; // int32_t
    public const nint m_maxRange = 0x4D4; // float
    public const nint m_swimDepth = 0x4D8; // float
    public const nint m_waterLevel = 0x4DC; // float
    public const nint m_isDormant = 0x4E0; // bool
    public const nint m_fishes = 0x4E8; // CUtlVector<CHandle<CFish>>
    public const nint m_visTimer = 0x500; // CountdownTimer
}

public static class CFists { // CCSWeaponBase
    public const nint m_bPlayingUninterruptableAct = 0xE90; // bool
    public const nint m_nUninterruptableActivity = 0xE94; // PlayerAnimEvent_t
    public const nint m_bRestorePrevWep = 0xE98; // bool
    public const nint m_hWeaponBeforePrevious = 0xE9C; // CHandle<CBasePlayerWeapon>
    public const nint m_hWeaponPrevious = 0xEA0; // CHandle<CBasePlayerWeapon>
    public const nint m_bDelayedHardPunchIncoming = 0xEA4; // bool
    public const nint m_bDestroyAfterTaunt = 0xEA5; // bool
}

public static class CFlashbang { // CBaseCSGrenade
}

public static class CFlashbangProjectile { // CBaseCSGrenadeProjectile
    public const nint m_flTimeToDetonate = 0xA98; // float
    public const nint m_numOpponentsHit = 0xA9C; // uint8_t
    public const nint m_numTeammatesHit = 0xA9D; // uint8_t
}

public static class CFogController { // CBaseEntity
    public const nint m_fog = 0x4C0; // fogparams_t
    public const nint m_bUseAngles = 0x528; // bool
    public const nint m_iChangedVariables = 0x52C; // int32_t
}

public static class CFogTrigger { // CBaseTrigger
    public const nint m_fog = 0x8B8; // fogparams_t
}

public static class CFogVolume { // CServerOnlyModelEntity
    public const nint m_fogName = 0x710; // CUtlSymbolLarge
    public const nint m_postProcessName = 0x718; // CUtlSymbolLarge
    public const nint m_colorCorrectionName = 0x720; // CUtlSymbolLarge
    public const nint m_bDisabled = 0x730; // bool
    public const nint m_bInFogVolumesList = 0x731; // bool
}

public static class CFootstepControl { // CBaseTrigger
    public const nint m_source = 0x8B8; // CUtlSymbolLarge
    public const nint m_destination = 0x8C0; // CUtlSymbolLarge
}

public static class CFootstepTableHandle {
}

public static class CFuncBrush { // CBaseModelEntity
    public const nint m_iSolidity = 0x710; // BrushSolidities_e
    public const nint m_iDisabled = 0x714; // int32_t
    public const nint m_bSolidBsp = 0x718; // bool
    public const nint m_iszExcludedClass = 0x720; // CUtlSymbolLarge
    public const nint m_bInvertExclusion = 0x728; // bool
    public const nint m_bScriptedMovement = 0x729; // bool
}

public static class CFuncConveyor { // CBaseModelEntity
    public const nint m_szConveyorModels = 0x710; // CUtlSymbolLarge
    public const nint m_flTransitionDurationSeconds = 0x718; // float
    public const nint m_angMoveEntitySpace = 0x71C; // QAngle
    public const nint m_vecMoveDirEntitySpace = 0x728; // Vector
    public const nint m_flTargetSpeed = 0x734; // float
    public const nint m_nTransitionStartTick = 0x738; // GameTick_t
    public const nint m_nTransitionDurationTicks = 0x73C; // int32_t
    public const nint m_flTransitionStartSpeed = 0x740; // float
    public const nint m_hConveyorModels = 0x748; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
}

public static class CFuncElectrifiedVolume { // CFuncBrush
    public const nint m_EffectName = 0x730; // CUtlSymbolLarge
    public const nint m_EffectInterpenetrateName = 0x738; // CUtlSymbolLarge
    public const nint m_EffectZapName = 0x740; // CUtlSymbolLarge
    public const nint m_iszEffectSource = 0x748; // CUtlSymbolLarge
}

public static class CFuncIllusionary { // CBaseModelEntity
}

public static class CFuncInteractionLayerClip { // CBaseModelEntity
    public const nint m_bDisabled = 0x710; // bool
    public const nint m_iszInteractsAs = 0x718; // CUtlSymbolLarge
    public const nint m_iszInteractsWith = 0x720; // CUtlSymbolLarge
}

public static class CFuncLadder { // CBaseModelEntity
    public const nint m_vecLadderDir = 0x710; // Vector
    public const nint m_Dismounts = 0x720; // CUtlVector<CHandle<CInfoLadderDismount>>
    public const nint m_vecLocalTop = 0x738; // Vector
    public const nint m_vecPlayerMountPositionTop = 0x744; // Vector
    public const nint m_vecPlayerMountPositionBottom = 0x750; // Vector
    public const nint m_flAutoRideSpeed = 0x75C; // float
    public const nint m_bDisabled = 0x760; // bool
    public const nint m_bFakeLadder = 0x761; // bool
    public const nint m_bHasSlack = 0x762; // bool
    public const nint m_surfacePropName = 0x768; // CUtlSymbolLarge
    public const nint m_OnPlayerGotOnLadder = 0x770; // CEntityIOOutput
    public const nint m_OnPlayerGotOffLadder = 0x798; // CEntityIOOutput
}

public static class CFuncLadderAlias_func_useableladder { // CFuncLadder
}

public static class CFuncMonitor { // CFuncBrush
    public const nint m_targetCamera = 0x730; // CUtlString
    public const nint m_nResolutionEnum = 0x738; // int32_t
    public const nint m_bRenderShadows = 0x73C; // bool
    public const nint m_bUseUniqueColorTarget = 0x73D; // bool
    public const nint m_brushModelName = 0x740; // CUtlString
    public const nint m_hTargetCamera = 0x748; // CHandle<CBaseEntity>
    public const nint m_bEnabled = 0x74C; // bool
    public const nint m_bDraw3DSkybox = 0x74D; // bool
    public const nint m_bStartEnabled = 0x74E; // bool
}

public static class CFuncMoveLinear { // CBaseToggle
    public const nint m_authoredPosition = 0x790; // MoveLinearAuthoredPos_t
    public const nint m_angMoveEntitySpace = 0x794; // QAngle
    public const nint m_vecMoveDirParentSpace = 0x7A0; // Vector
    public const nint m_soundStart = 0x7B0; // CUtlSymbolLarge
    public const nint m_soundStop = 0x7B8; // CUtlSymbolLarge
    public const nint m_currentSound = 0x7C0; // CUtlSymbolLarge
    public const nint m_flBlockDamage = 0x7C8; // float
    public const nint m_flStartPosition = 0x7CC; // float
    public const nint m_flMoveDistance = 0x7D0; // float
    public const nint m_OnFullyOpen = 0x7E0; // CEntityIOOutput
    public const nint m_OnFullyClosed = 0x808; // CEntityIOOutput
    public const nint m_bCreateMovableNavMesh = 0x830; // bool
    public const nint m_bCreateNavObstacle = 0x831; // bool
}

public static class CFuncMoveLinearAlias_momentary_door { // CFuncMoveLinear
}

public static class CFuncNavBlocker { // CBaseModelEntity
    public const nint m_bDisabled = 0x710; // bool
    public const nint m_nBlockedTeamNumber = 0x714; // int32_t
}

public static class CFuncNavObstruction { // CBaseModelEntity
    public const nint m_bDisabled = 0x718; // bool
}

public static class CFuncPlat { // CBasePlatTrain
    public const nint m_sNoise = 0x7B8; // CUtlSymbolLarge
}

public static class CFuncPlatRot { // CFuncPlat
    public const nint m_end = 0x7C0; // QAngle
    public const nint m_start = 0x7CC; // QAngle
}

public static class CFuncPropRespawnZone { // CBaseEntity
}

public static class CFuncRotating { // CBaseModelEntity
    public const nint m_OnStopped = 0x710; // CEntityIOOutput
    public const nint m_OnStarted = 0x738; // CEntityIOOutput
    public const nint m_OnReachedStart = 0x760; // CEntityIOOutput
    public const nint m_localRotationVector = 0x788; // RotationVector
    public const nint m_flFanFriction = 0x794; // float
    public const nint m_flAttenuation = 0x798; // float
    public const nint m_flVolume = 0x79C; // float
    public const nint m_flTargetSpeed = 0x7A0; // float
    public const nint m_flMaxSpeed = 0x7A4; // float
    public const nint m_flBlockDamage = 0x7A8; // float
    public const nint m_flTimeScale = 0x7AC; // float
    public const nint m_NoiseRunning = 0x7B0; // CUtlSymbolLarge
    public const nint m_bReversed = 0x7B8; // bool
    public const nint m_bAccelDecel = 0x7B9; // bool
    public const nint m_prevLocalAngles = 0x7C4; // QAngle
    public const nint m_angStart = 0x7D0; // QAngle
    public const nint m_bStopAtStartPos = 0x7DC; // bool
    public const nint m_vecClientOrigin = 0x7E0; // Vector
    public const nint m_vecClientAngles = 0x7EC; // QAngle
}

public static class CFuncShatterglass { // CBaseModelEntity
    public const nint m_hGlassMaterialDamaged = 0x710; // CStrongHandle<InfoForResourceTypeIMaterial2>
    public const nint m_hGlassMaterialUndamaged = 0x718; // CStrongHandle<InfoForResourceTypeIMaterial2>
    public const nint m_hConcreteMaterialEdgeFace = 0x720; // CStrongHandle<InfoForResourceTypeIMaterial2>
    public const nint m_hConcreteMaterialEdgeCaps = 0x728; // CStrongHandle<InfoForResourceTypeIMaterial2>
    public const nint m_hConcreteMaterialEdgeFins = 0x730; // CStrongHandle<InfoForResourceTypeIMaterial2>
    public const nint m_matPanelTransform = 0x738; // matrix3x4_t
    public const nint m_matPanelTransformWsTemp = 0x768; // matrix3x4_t
    public const nint m_vecShatterGlassShards = 0x798; // CUtlVector<uint32_t>
    public const nint m_PanelSize = 0x7B0; // Vector2D
    public const nint m_vecPanelNormalWs = 0x7B8; // Vector
    public const nint m_nNumShardsEverCreated = 0x7C4; // int32_t
    public const nint m_flLastShatterSoundEmitTime = 0x7C8; // GameTime_t
    public const nint m_flLastCleanupTime = 0x7CC; // GameTime_t
    public const nint m_flInitAtTime = 0x7D0; // GameTime_t
    public const nint m_flGlassThickness = 0x7D4; // float
    public const nint m_flSpawnInvulnerability = 0x7D8; // float
    public const nint m_bBreakSilent = 0x7DC; // bool
    public const nint m_bBreakShardless = 0x7DD; // bool
    public const nint m_bBroken = 0x7DE; // bool
    public const nint m_bHasRateLimitedShards = 0x7DF; // bool
    public const nint m_bGlassNavIgnore = 0x7E0; // bool
    public const nint m_bGlassInFrame = 0x7E1; // bool
    public const nint m_bStartBroken = 0x7E2; // bool
    public const nint m_iInitialDamageType = 0x7E3; // uint8_t
    public const nint m_szDamagePositioningEntityName01 = 0x7E8; // CUtlSymbolLarge
    public const nint m_szDamagePositioningEntityName02 = 0x7F0; // CUtlSymbolLarge
    public const nint m_szDamagePositioningEntityName03 = 0x7F8; // CUtlSymbolLarge
    public const nint m_szDamagePositioningEntityName04 = 0x800; // CUtlSymbolLarge
    public const nint m_vInitialDamagePositions = 0x808; // CUtlVector<Vector>
    public const nint m_vExtraDamagePositions = 0x820; // CUtlVector<Vector>
    public const nint m_OnBroken = 0x838; // CEntityIOOutput
    public const nint m_iSurfaceType = 0x861; // uint8_t
}

public static class CFuncTankTrain { // CFuncTrackTrain
    public const nint m_OnDeath = 0x860; // CEntityIOOutput
}

public static class CFuncTimescale { // CBaseEntity
    public const nint m_flDesiredTimescale = 0x4C0; // float
    public const nint m_flAcceleration = 0x4C4; // float
    public const nint m_flMinBlendRate = 0x4C8; // float
    public const nint m_flBlendDeltaMultiplier = 0x4CC; // float
    public const nint m_isStarted = 0x4D0; // bool
}

public static class CFuncTrackAuto { // CFuncTrackChange
}

public static class CFuncTrackChange { // CFuncPlatRot
    public const nint m_trackTop = 0x7D8; // CPathTrack*
    public const nint m_trackBottom = 0x7E0; // CPathTrack*
    public const nint m_train = 0x7E8; // CFuncTrackTrain*
    public const nint m_trackTopName = 0x7F0; // CUtlSymbolLarge
    public const nint m_trackBottomName = 0x7F8; // CUtlSymbolLarge
    public const nint m_trainName = 0x800; // CUtlSymbolLarge
    public const nint m_code = 0x808; // TRAIN_CODE
    public const nint m_targetState = 0x80C; // int32_t
    public const nint m_use = 0x810; // int32_t
}

public static class CFuncTrackTrain { // CBaseModelEntity
    public const nint m_ppath = 0x710; // CHandle<CPathTrack>
    public const nint m_length = 0x714; // float
    public const nint m_vPosPrev = 0x718; // Vector
    public const nint m_angPrev = 0x724; // QAngle
    public const nint m_controlMins = 0x730; // Vector
    public const nint m_controlMaxs = 0x73C; // Vector
    public const nint m_lastBlockPos = 0x748; // Vector
    public const nint m_lastBlockTick = 0x754; // int32_t
    public const nint m_flVolume = 0x758; // float
    public const nint m_flBank = 0x75C; // float
    public const nint m_oldSpeed = 0x760; // float
    public const nint m_flBlockDamage = 0x764; // float
    public const nint m_height = 0x768; // float
    public const nint m_maxSpeed = 0x76C; // float
    public const nint m_dir = 0x770; // float
    public const nint m_iszSoundMove = 0x778; // CUtlSymbolLarge
    public const nint m_iszSoundMovePing = 0x780; // CUtlSymbolLarge
    public const nint m_iszSoundStart = 0x788; // CUtlSymbolLarge
    public const nint m_iszSoundStop = 0x790; // CUtlSymbolLarge
    public const nint m_strPathTarget = 0x798; // CUtlSymbolLarge
    public const nint m_flMoveSoundMinDuration = 0x7A0; // float
    public const nint m_flMoveSoundMaxDuration = 0x7A4; // float
    public const nint m_flNextMoveSoundTime = 0x7A8; // GameTime_t
    public const nint m_flMoveSoundMinPitch = 0x7AC; // float
    public const nint m_flMoveSoundMaxPitch = 0x7B0; // float
    public const nint m_eOrientationType = 0x7B4; // TrainOrientationType_t
    public const nint m_eVelocityType = 0x7B8; // TrainVelocityType_t
    public const nint m_OnStart = 0x7C8; // CEntityIOOutput
    public const nint m_OnNext = 0x7F0; // CEntityIOOutput
    public const nint m_OnArrivedAtDestinationNode = 0x818; // CEntityIOOutput
    public const nint m_bManualSpeedChanges = 0x840; // bool
    public const nint m_flDesiredSpeed = 0x844; // float
    public const nint m_flSpeedChangeTime = 0x848; // GameTime_t
    public const nint m_flAccelSpeed = 0x84C; // float
    public const nint m_flDecelSpeed = 0x850; // float
    public const nint m_bAccelToSpeed = 0x854; // bool
    public const nint m_flTimeScale = 0x858; // float
    public const nint m_flNextMPSoundTime = 0x85C; // GameTime_t
}

public static class CFuncTrain { // CBasePlatTrain
    public const nint m_hCurrentTarget = 0x7B8; // CHandle<CBaseEntity>
    public const nint m_activated = 0x7BC; // bool
    public const nint m_hEnemy = 0x7C0; // CHandle<CBaseEntity>
    public const nint m_flBlockDamage = 0x7C4; // float
    public const nint m_flNextBlockTime = 0x7C8; // GameTime_t
    public const nint m_iszLastTarget = 0x7D0; // CUtlSymbolLarge
}

public static class CFuncTrainControls { // CBaseModelEntity
}

public static class CFuncVPhysicsClip { // CBaseModelEntity
    public const nint m_bDisabled = 0x710; // bool
}

public static class CFuncVehicleClip { // CBaseModelEntity
}

public static class CFuncWall { // CBaseModelEntity
    public const nint m_nState = 0x710; // int32_t
}

public static class CFuncWallToggle { // CFuncWall
}

public static class CFuncWater { // CBaseModelEntity
    public const nint m_BuoyancyHelper = 0x710; // CBuoyancyHelper
}

public static class CGameChoreoServices { // IChoreoServices
    public const nint m_hOwner = 0x8; // CHandle<CBaseAnimGraph>
    public const nint m_hScriptedSequence = 0xC; // CHandle<CScriptedSequence>
    public const nint m_scriptState = 0x10; // IChoreoServices::ScriptState_t
    public const nint m_choreoState = 0x14; // IChoreoServices::ChoreoState_t
    public const nint m_flTimeStartedState = 0x18; // GameTime_t
}

public static class CGameEnd { // CRulePointEntity
}

public static class CGameGibManager { // CBaseEntity
    public const nint m_bAllowNewGibs = 0x4E0; // bool
    public const nint m_iCurrentMaxPieces = 0x4E4; // int32_t
    public const nint m_iMaxPieces = 0x4E8; // int32_t
    public const nint m_iLastFrame = 0x4EC; // int32_t
}

public static class CGameMoney { // CRulePointEntity
    public const nint m_OnMoneySpent = 0x720; // CEntityIOOutput
    public const nint m_OnMoneySpentFail = 0x748; // CEntityIOOutput
    public const nint m_nMoney = 0x770; // int32_t
    public const nint m_strAwardText = 0x778; // CUtlString
}

public static class CGamePlayerEquip { // CRulePointEntity
}

public static class CGamePlayerZone { // CRuleBrushEntity
    public const nint m_OnPlayerInZone = 0x718; // CEntityIOOutput
    public const nint m_OnPlayerOutZone = 0x740; // CEntityIOOutput
    public const nint m_PlayersInCount = 0x768; // CEntityOutputTemplate<int32_t>
    public const nint m_PlayersOutCount = 0x790; // CEntityOutputTemplate<int32_t>
}

public static class CGameRules {
    public const nint m_szQuestName = 0x8; // char[128]
    public const nint m_nQuestPhase = 0x88; // int32_t
}

public static class CGameRulesProxy { // CBaseEntity
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
    public const nint m_flScale = 0xC4; // float
    public const nint m_vecAbsOrigin = 0xC8; // Vector
    public const nint m_angAbsRotation = 0xD4; // QAngle
    public const nint m_flAbsScale = 0xE0; // float
    public const nint m_nParentAttachmentOrBone = 0xE4; // int16_t
    public const nint m_bDebugAbsOriginChanges = 0xE6; // bool
    public const nint m_bDormant = 0xE7; // bool
    public const nint m_bForceParentToBeNetworked = 0xE8; // bool
    public const nint m_bDirtyHierarchy = 0x0; // bitfield:1
    public const nint m_bDirtyBoneMergeInfo = 0x0; // bitfield:1
    public const nint m_bNetworkedPositionChanged = 0x0; // bitfield:1
    public const nint m_bNetworkedAnglesChanged = 0x0; // bitfield:1
    public const nint m_bNetworkedScaleChanged = 0x0; // bitfield:1
    public const nint m_bWillBeCallingPostDataUpdate = 0x0; // bitfield:1
    public const nint m_bBoneMergeFlex = 0x0; // bitfield:1
    public const nint m_nLatchAbsOrigin = 0x0; // bitfield:2
    public const nint m_bDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
    public const nint m_nHierarchicalDepth = 0xEB; // uint8_t
    public const nint m_nHierarchyType = 0xEC; // uint8_t
    public const nint m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xED; // uint8_t
    public const nint m_name = 0xF0; // CUtlStringToken
    public const nint m_hierarchyAttachName = 0x130; // CUtlStringToken
    public const nint m_flZOffset = 0x134; // float
    public const nint m_vRenderOrigin = 0x138; // Vector
}

public static class CGameSceneNodeHandle {
    public const nint m_hOwner = 0x8; // CEntityHandle
    public const nint m_name = 0xC; // CUtlStringToken
}

public static class CGameScriptedMoveData {
    public const nint m_vAccumulatedRootMotion = 0x0; // Vector
    public const nint m_vDest = 0xC; // Vector
    public const nint m_vSrc = 0x18; // Vector
    public const nint m_angSrc = 0x24; // QAngle
    public const nint m_angDst = 0x30; // QAngle
    public const nint m_angCurrent = 0x3C; // QAngle
    public const nint m_flAngRate = 0x48; // float
    public const nint m_flDuration = 0x4C; // float
    public const nint m_flStartTime = 0x50; // GameTime_t
    public const nint m_bActive = 0x54; // bool
    public const nint m_bTeleportOnEnd = 0x55; // bool
    public const nint m_bIgnoreRotation = 0x56; // bool
    public const nint m_nType = 0x58; // ScriptedMoveType_t
    public const nint m_bSuccess = 0x5C; // bool
    public const nint m_nForcedCrouchState = 0x60; // ForcedCrouchState_t
    public const nint m_bIgnoreCollisions = 0x64; // bool
}

public static class CGameText { // CRulePointEntity
    public const nint m_iszMessage = 0x720; // CUtlSymbolLarge
    public const nint m_textParms = 0x728; // hudtextparms_t
}

public static class CGenericConstraint { // CPhysConstraint
    public const nint m_nLinearMotionX = 0x520; // JointMotion_t
    public const nint m_nLinearMotionY = 0x524; // JointMotion_t
    public const nint m_nLinearMotionZ = 0x528; // JointMotion_t
    public const nint m_flLinearFrequencyX = 0x52C; // float
    public const nint m_flLinearFrequencyY = 0x530; // float
    public const nint m_flLinearFrequencyZ = 0x534; // float
    public const nint m_flLinearDampingRatioX = 0x538; // float
    public const nint m_flLinearDampingRatioY = 0x53C; // float
    public const nint m_flLinearDampingRatioZ = 0x540; // float
    public const nint m_flMaxLinearImpulseX = 0x544; // float
    public const nint m_flMaxLinearImpulseY = 0x548; // float
    public const nint m_flMaxLinearImpulseZ = 0x54C; // float
    public const nint m_flBreakAfterTimeX = 0x550; // float
    public const nint m_flBreakAfterTimeY = 0x554; // float
    public const nint m_flBreakAfterTimeZ = 0x558; // float
    public const nint m_flBreakAfterTimeStartTimeX = 0x55C; // GameTime_t
    public const nint m_flBreakAfterTimeStartTimeY = 0x560; // GameTime_t
    public const nint m_flBreakAfterTimeStartTimeZ = 0x564; // GameTime_t
    public const nint m_flBreakAfterTimeThresholdX = 0x568; // float
    public const nint m_flBreakAfterTimeThresholdY = 0x56C; // float
    public const nint m_flBreakAfterTimeThresholdZ = 0x570; // float
    public const nint m_flNotifyForceX = 0x574; // float
    public const nint m_flNotifyForceY = 0x578; // float
    public const nint m_flNotifyForceZ = 0x57C; // float
    public const nint m_flNotifyForceMinTimeX = 0x580; // float
    public const nint m_flNotifyForceMinTimeY = 0x584; // float
    public const nint m_flNotifyForceMinTimeZ = 0x588; // float
    public const nint m_flNotifyForceLastTimeX = 0x58C; // GameTime_t
    public const nint m_flNotifyForceLastTimeY = 0x590; // GameTime_t
    public const nint m_flNotifyForceLastTimeZ = 0x594; // GameTime_t
    public const nint m_bAxisNotifiedX = 0x598; // bool
    public const nint m_bAxisNotifiedY = 0x599; // bool
    public const nint m_bAxisNotifiedZ = 0x59A; // bool
    public const nint m_nAngularMotionX = 0x59C; // JointMotion_t
    public const nint m_nAngularMotionY = 0x5A0; // JointMotion_t
    public const nint m_nAngularMotionZ = 0x5A4; // JointMotion_t
    public const nint m_flAngularFrequencyX = 0x5A8; // float
    public const nint m_flAngularFrequencyY = 0x5AC; // float
    public const nint m_flAngularFrequencyZ = 0x5B0; // float
    public const nint m_flAngularDampingRatioX = 0x5B4; // float
    public const nint m_flAngularDampingRatioY = 0x5B8; // float
    public const nint m_flAngularDampingRatioZ = 0x5BC; // float
    public const nint m_flMaxAngularImpulseX = 0x5C0; // float
    public const nint m_flMaxAngularImpulseY = 0x5C4; // float
    public const nint m_flMaxAngularImpulseZ = 0x5C8; // float
    public const nint m_NotifyForceReachedX = 0x5D0; // CEntityIOOutput
    public const nint m_NotifyForceReachedY = 0x5F8; // CEntityIOOutput
    public const nint m_NotifyForceReachedZ = 0x620; // CEntityIOOutput
}

public static class CGlowProperty {
    public const nint m_fGlowColor = 0x8; // Vector
    public const nint m_iGlowType = 0x30; // int32_t
    public const nint m_iGlowTeam = 0x34; // int32_t
    public const nint m_nGlowRange = 0x38; // int32_t
    public const nint m_nGlowRangeMin = 0x3C; // int32_t
    public const nint m_glowColorOverride = 0x40; // Color
    public const nint m_bFlashing = 0x44; // bool
    public const nint m_flGlowTime = 0x48; // float
    public const nint m_flGlowStartTime = 0x4C; // float
    public const nint m_bEligibleForScreenHighlight = 0x50; // bool
    public const nint m_bGlowing = 0x51; // bool
}

public static class CGradientFog { // CBaseEntity
    public const nint m_hGradientFogTexture = 0x4C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_flFogStartDistance = 0x4C8; // float
    public const nint m_flFogEndDistance = 0x4CC; // float
    public const nint m_bHeightFogEnabled = 0x4D0; // bool
    public const nint m_flFogStartHeight = 0x4D4; // float
    public const nint m_flFogEndHeight = 0x4D8; // float
    public const nint m_flFarZ = 0x4DC; // float
    public const nint m_flFogMaxOpacity = 0x4E0; // float
    public const nint m_flFogFalloffExponent = 0x4E4; // float
    public const nint m_flFogVerticalExponent = 0x4E8; // float
    public const nint m_fogColor = 0x4EC; // Color
    public const nint m_flFogStrength = 0x4F0; // float
    public const nint m_flFadeTime = 0x4F4; // float
    public const nint m_bStartDisabled = 0x4F8; // bool
    public const nint m_bIsEnabled = 0x4F9; // bool
    public const nint m_bGradientFogNeedsTextures = 0x4FA; // bool
}

public static class CGunTarget { // CBaseToggle
    public const nint m_on = 0x790; // bool
    public const nint m_hTargetEnt = 0x794; // CHandle<CBaseEntity>
    public const nint m_OnDeath = 0x798; // CEntityIOOutput
}

public static class CHEGrenade { // CBaseCSGrenade
}

public static class CHEGrenadeProjectile { // CBaseCSGrenadeProjectile
}

public static class CHandleDummy { // CBaseEntity
}

public static class CHandleTest { // CBaseEntity
    public const nint m_Handle = 0x4C0; // CHandle<CBaseEntity>
    public const nint m_bSendHandle = 0x4C4; // bool
}

public static class CHintMessage {
    public const nint m_hintString = 0x0; // char*
    public const nint m_args = 0x8; // CUtlVector<char*>
    public const nint m_duration = 0x20; // float
}

public static class CHintMessageQueue {
    public const nint m_tmMessageEnd = 0x0; // float
    public const nint m_messages = 0x8; // CUtlVector<CHintMessage*>
    public const nint m_pPlayerController = 0x20; // CBasePlayerController*
}

public static class CHitboxComponent { // CEntityComponent
    public const nint m_bvDisabledHitGroups = 0x24; // uint32_t[1]
}

public static class CHostage { // CHostageExpresserShim
    public const nint m_OnHostageBeginGrab = 0xA28; // CEntityIOOutput
    public const nint m_OnFirstPickedUp = 0xA50; // CEntityIOOutput
    public const nint m_OnDroppedNotRescued = 0xA78; // CEntityIOOutput
    public const nint m_OnRescued = 0xAA0; // CEntityIOOutput
    public const nint m_entitySpottedState = 0xAC8; // EntitySpottedState_t
    public const nint m_nSpotRules = 0xAE0; // int32_t
    public const nint m_uiHostageSpawnExclusionGroupMask = 0xAE4; // uint32_t
    public const nint m_nHostageSpawnRandomFactor = 0xAE8; // uint32_t
    public const nint m_bRemove = 0xAEC; // bool
    public const nint m_vel = 0xAF0; // Vector
    public const nint m_isRescued = 0xAFC; // bool
    public const nint m_jumpedThisFrame = 0xAFD; // bool
    public const nint m_nHostageState = 0xB00; // int32_t
    public const nint m_leader = 0xB04; // CHandle<CBaseEntity>
    public const nint m_lastLeader = 0xB08; // CHandle<CCSPlayerPawnBase>
    public const nint m_reuseTimer = 0xB10; // CountdownTimer
    public const nint m_hasBeenUsed = 0xB28; // bool
    public const nint m_accel = 0xB2C; // Vector
    public const nint m_isRunning = 0xB38; // bool
    public const nint m_isCrouching = 0xB39; // bool
    public const nint m_jumpTimer = 0xB40; // CountdownTimer
    public const nint m_isWaitingForLeader = 0xB58; // bool
    public const nint m_repathTimer = 0x2B68; // CountdownTimer
    public const nint m_inhibitDoorTimer = 0x2B80; // CountdownTimer
    public const nint m_inhibitObstacleAvoidanceTimer = 0x2C10; // CountdownTimer
    public const nint m_wiggleTimer = 0x2C30; // CountdownTimer
    public const nint m_isAdjusted = 0x2C4C; // bool
    public const nint m_bHandsHaveBeenCut = 0x2C4D; // bool
    public const nint m_hHostageGrabber = 0x2C50; // CHandle<CCSPlayerPawn>
    public const nint m_fLastGrabTime = 0x2C54; // GameTime_t
    public const nint m_vecPositionWhenStartedDroppingToGround = 0x2C58; // Vector
    public const nint m_vecGrabbedPos = 0x2C64; // Vector
    public const nint m_flRescueStartTime = 0x2C70; // GameTime_t
    public const nint m_flGrabSuccessTime = 0x2C74; // GameTime_t
    public const nint m_flDropStartTime = 0x2C78; // GameTime_t
    public const nint m_nApproachRewardPayouts = 0x2C7C; // int32_t
    public const nint m_nPickupEventCount = 0x2C80; // int32_t
    public const nint m_vecSpawnGroundPos = 0x2C84; // Vector
    public const nint m_vecHostageResetPosition = 0x2CA4; // Vector
}

public static class CHostageAlias_info_hostage_spawn { // CHostage
}

public static class CHostageCarriableProp { // CBaseAnimGraph
}

public static class CHostageExpresserShim { // CBaseCombatCharacter
    public const nint m_pExpresser = 0xA10; // CAI_Expresser*
}

public static class CHostageRescueZone { // CHostageRescueZoneShim
}

public static class CHostageRescueZoneShim { // CBaseTrigger
}

public static class CInButtonState {
    public const nint m_pButtonStates = 0x8; // uint64_t[3]
}

public static class CIncendiaryGrenade { // CMolotovGrenade
}

public static class CInferno { // CBaseModelEntity
    public const nint m_firePositions = 0x720; // Vector[64]
    public const nint m_fireParentPositions = 0xA20; // Vector[64]
    public const nint m_bFireIsBurning = 0xD20; // bool[64]
    public const nint m_BurnNormal = 0xD60; // Vector[64]
    public const nint m_fireCount = 0x1060; // int32_t
    public const nint m_nInfernoType = 0x1064; // int32_t
    public const nint m_nFireEffectTickBegin = 0x1068; // int32_t
    public const nint m_nFireLifetime = 0x106C; // float
    public const nint m_bInPostEffectTime = 0x1070; // bool
    public const nint m_nFiresExtinguishCount = 0x1074; // int32_t
    public const nint m_bWasCreatedInSmoke = 0x1078; // bool
    public const nint m_extent = 0x1280; // Extent
    public const nint m_damageTimer = 0x1298; // CountdownTimer
    public const nint m_damageRampTimer = 0x12B0; // CountdownTimer
    public const nint m_splashVelocity = 0x12C8; // Vector
    public const nint m_InitialSplashVelocity = 0x12D4; // Vector
    public const nint m_startPos = 0x12E0; // Vector
    public const nint m_vecOriginalSpawnLocation = 0x12EC; // Vector
    public const nint m_activeTimer = 0x12F8; // IntervalTimer
    public const nint m_fireSpawnOffset = 0x1308; // int32_t
    public const nint m_nMaxFlames = 0x130C; // int32_t
    public const nint m_nSpreadCount = 0x1310; // int32_t
    public const nint m_BookkeepingTimer = 0x1318; // CountdownTimer
    public const nint m_NextSpreadTimer = 0x1330; // CountdownTimer
    public const nint m_nSourceItemDefIndex = 0x1348; // uint16_t
}

public static class CInfoData { // CServerOnlyEntity
}

public static class CInfoDeathmatchSpawn { // SpawnPoint
}

public static class CInfoDynamicShadowHint { // CPointEntity
    public const nint m_bDisabled = 0x4C0; // bool
    public const nint m_flRange = 0x4C4; // float
    public const nint m_nImportance = 0x4C8; // int32_t
    public const nint m_nLightChoice = 0x4CC; // int32_t
    public const nint m_hLight = 0x4D0; // CHandle<CBaseEntity>
}

public static class CInfoDynamicShadowHintBox { // CInfoDynamicShadowHint
    public const nint m_vBoxMins = 0x4D8; // Vector
    public const nint m_vBoxMaxs = 0x4E4; // Vector
}

public static class CInfoEnemyTerroristSpawn { // SpawnPointCoopEnemy
}

public static class CInfoGameEventProxy { // CPointEntity
    public const nint m_iszEventName = 0x4C0; // CUtlSymbolLarge
    public const nint m_flRange = 0x4C8; // float
}

public static class CInfoInstructorHintBombTargetA { // CPointEntity
}

public static class CInfoInstructorHintBombTargetB { // CPointEntity
}

public static class CInfoInstructorHintHostageRescueZone { // CPointEntity
}

public static class CInfoInstructorHintTarget { // CPointEntity
}

public static class CInfoLadderDismount { // CBaseEntity
}

public static class CInfoLandmark { // CPointEntity
}

public static class CInfoOffscreenPanoramaTexture { // CPointEntity
    public const nint m_bDisabled = 0x4C0; // bool
    public const nint m_nResolutionX = 0x4C4; // int32_t
    public const nint m_nResolutionY = 0x4C8; // int32_t
    public const nint m_szLayoutFileName = 0x4D0; // CUtlSymbolLarge
    public const nint m_RenderAttrName = 0x4D8; // CUtlSymbolLarge
    public const nint m_TargetEntities = 0x4E0; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    public const nint m_nTargetChangeCount = 0x4F8; // int32_t
    public const nint m_vecCSSClasses = 0x500; // CNetworkUtlVectorBase<CUtlSymbolLarge>
    public const nint m_szTargetsName = 0x518; // CUtlSymbolLarge
    public const nint m_AdditionalTargetEntities = 0x520; // CUtlVector<CHandle<CBaseModelEntity>>
}

public static class CInfoParticleTarget { // CPointEntity
}

public static class CInfoPlayerCounterterrorist { // SpawnPoint
}

public static class CInfoPlayerStart { // CPointEntity
    public const nint m_bDisabled = 0x4C0; // bool
}

public static class CInfoPlayerTerrorist { // SpawnPoint
}

public static class CInfoSpawnGroupLandmark { // CPointEntity
}

public static class CInfoSpawnGroupLoadUnload { // CLogicalEntity
    public const nint m_OnSpawnGroupLoadStarted = 0x4C0; // CEntityIOOutput
    public const nint m_OnSpawnGroupLoadFinished = 0x4E8; // CEntityIOOutput
    public const nint m_OnSpawnGroupUnloadStarted = 0x510; // CEntityIOOutput
    public const nint m_OnSpawnGroupUnloadFinished = 0x538; // CEntityIOOutput
    public const nint m_iszSpawnGroupName = 0x560; // CUtlSymbolLarge
    public const nint m_iszSpawnGroupFilterName = 0x568; // CUtlSymbolLarge
    public const nint m_iszLandmarkName = 0x570; // CUtlSymbolLarge
    public const nint m_sFixedSpawnGroupName = 0x578; // CUtlString
    public const nint m_flTimeoutInterval = 0x580; // float
    public const nint m_bStreamingStarted = 0x584; // bool
    public const nint m_bUnloadingStarted = 0x585; // bool
}

public static class CInfoTarget { // CPointEntity
}

public static class CInfoTargetServerOnly { // CServerOnlyPointEntity
}

public static class CInfoTeleportDestination { // CPointEntity
}

public static class CInfoVisibilityBox { // CBaseEntity
    public const nint m_nMode = 0x4C4; // int32_t
    public const nint m_vBoxSize = 0x4C8; // Vector
    public const nint m_bEnabled = 0x4D4; // bool
}

public static class CInfoWorldLayer { // CBaseEntity
    public const nint m_pOutputOnEntitiesSpawned = 0x4C0; // CEntityIOOutput
    public const nint m_worldName = 0x4E8; // CUtlSymbolLarge
    public const nint m_layerName = 0x4F0; // CUtlSymbolLarge
    public const nint m_bWorldLayerVisible = 0x4F8; // bool
    public const nint m_bEntitiesSpawned = 0x4F9; // bool
    public const nint m_bCreateAsChildSpawnGroup = 0x4FA; // bool
    public const nint m_hLayerSpawnGroup = 0x4FC; // uint32_t
}

public static class CInstancedSceneEntity { // CSceneEntity
    public const nint m_hOwner = 0xA18; // CHandle<CBaseEntity>
    public const nint m_bHadOwner = 0xA1C; // bool
    public const nint m_flPostSpeakDelay = 0xA20; // float
    public const nint m_flPreDelay = 0xA24; // float
    public const nint m_bIsBackground = 0xA28; // bool
    public const nint m_bRemoveOnCompletion = 0xA29; // bool
    public const nint m_hTarget = 0xA2C; // CHandle<CBaseEntity>
}

public static class CInstructorEventEntity { // CPointEntity
    public const nint m_iszName = 0x4C0; // CUtlSymbolLarge
    public const nint m_iszHintTargetEntity = 0x4C8; // CUtlSymbolLarge
    public const nint m_hTargetPlayer = 0x4D0; // CHandle<CBasePlayerPawn>
}

public static class CIronSightController {
    public const nint m_bIronSightAvailable = 0x8; // bool
    public const nint m_flIronSightAmount = 0xC; // float
    public const nint m_flIronSightAmountGained = 0x10; // float
    public const nint m_flIronSightAmountBiased = 0x14; // float
}

public static class CItem { // CBaseAnimGraph
    public const nint m_OnPlayerTouch = 0x8F0; // CEntityIOOutput
    public const nint m_bActivateWhenAtRest = 0x918; // bool
    public const nint m_OnCacheInteraction = 0x920; // CEntityIOOutput
    public const nint m_OnPlayerPickup = 0x948; // CEntityIOOutput
    public const nint m_OnGlovePulled = 0x970; // CEntityIOOutput
    public const nint m_vOriginalSpawnOrigin = 0x998; // Vector
    public const nint m_vOriginalSpawnAngles = 0x9A4; // QAngle
    public const nint m_bPhysStartAsleep = 0x9B0; // bool
}

public static class CItemAssaultSuit { // CItem
}

public static class CItemDefuser { // CItem
    public const nint m_entitySpottedState = 0x9C0; // EntitySpottedState_t
    public const nint m_nSpotRules = 0x9D8; // int32_t
}

public static class CItemDefuserAlias_item_defuser { // CItemDefuser
}

public static class CItemDogtags { // CItem
    public const nint m_OwningPlayer = 0x9C0; // CHandle<CCSPlayerPawn>
    public const nint m_KillingPlayer = 0x9C4; // CHandle<CCSPlayerPawn>
}

public static class CItemGeneric { // CItem
    public const nint m_bHasTriggerRadius = 0x9C8; // bool
    public const nint m_bHasPickupRadius = 0x9C9; // bool
    public const nint m_flPickupRadiusSqr = 0x9CC; // float
    public const nint m_flTriggerRadiusSqr = 0x9D0; // float
    public const nint m_flLastPickupCheck = 0x9D4; // GameTime_t
    public const nint m_bPlayerCounterListenerAdded = 0x9D8; // bool
    public const nint m_bPlayerInTriggerRadius = 0x9D9; // bool
    public const nint m_hSpawnParticleEffect = 0x9E0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    public const nint m_pAmbientSoundEffect = 0x9E8; // CUtlSymbolLarge
    public const nint m_bAutoStartAmbientSound = 0x9F0; // bool
    public const nint m_pSpawnScriptFunction = 0x9F8; // CUtlSymbolLarge
    public const nint m_hPickupParticleEffect = 0xA00; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    public const nint m_pPickupSoundEffect = 0xA08; // CUtlSymbolLarge
    public const nint m_pPickupScriptFunction = 0xA10; // CUtlSymbolLarge
    public const nint m_hTimeoutParticleEffect = 0xA18; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    public const nint m_pTimeoutSoundEffect = 0xA20; // CUtlSymbolLarge
    public const nint m_pTimeoutScriptFunction = 0xA28; // CUtlSymbolLarge
    public const nint m_pPickupFilterName = 0xA30; // CUtlSymbolLarge
    public const nint m_hPickupFilter = 0xA38; // CHandle<CBaseFilter>
    public const nint m_OnPickup = 0xA40; // CEntityIOOutput
    public const nint m_OnTimeout = 0xA68; // CEntityIOOutput
    public const nint m_OnTriggerStartTouch = 0xA90; // CEntityIOOutput
    public const nint m_OnTriggerTouch = 0xAB8; // CEntityIOOutput
    public const nint m_OnTriggerEndTouch = 0xAE0; // CEntityIOOutput
    public const nint m_pAllowPickupScriptFunction = 0xB08; // CUtlSymbolLarge
    public const nint m_flPickupRadius = 0xB10; // float
    public const nint m_flTriggerRadius = 0xB14; // float
    public const nint m_pTriggerSoundEffect = 0xB18; // CUtlSymbolLarge
    public const nint m_bGlowWhenInTrigger = 0xB20; // bool
    public const nint m_glowColor = 0xB21; // Color
    public const nint m_bUseable = 0xB25; // bool
    public const nint m_hTriggerHelper = 0xB28; // CHandle<CItemGenericTriggerHelper>
}

public static class CItemGenericTriggerHelper { // CBaseModelEntity
    public const nint m_hParentItem = 0x710; // CHandle<CItemGeneric>
}

public static class CItemHeavyAssaultSuit { // CItemAssaultSuit
}

public static class CItemKevlar { // CItem
}

public static class CItemSoda { // CBaseAnimGraph
}

public static class CItem_Healthshot { // CWeaponBaseItem
}

public static class CKeepUpright { // CPointEntity
    public const nint m_worldGoalAxis = 0x4C8; // Vector
    public const nint m_localTestAxis = 0x4D4; // Vector
    public const nint m_nameAttach = 0x4E8; // CUtlSymbolLarge
    public const nint m_attachedObject = 0x4F0; // CHandle<CBaseEntity>
    public const nint m_angularLimit = 0x4F4; // float
    public const nint m_bActive = 0x4F8; // bool
    public const nint m_bDampAllRotation = 0x4F9; // bool
}

public static class CKnife { // CCSWeaponBase
    public const nint m_bFirstAttack = 0xE90; // bool
}

public static class CLightComponent { // CEntityComponent
    public const nint __m_pChainEntity = 0x48; // CNetworkVarChainer
    public const nint m_Color = 0x85; // Color
    public const nint m_SecondaryColor = 0x89; // Color
    public const nint m_flBrightness = 0x90; // float
    public const nint m_flBrightnessScale = 0x94; // float
    public const nint m_flBrightnessMult = 0x98; // float
    public const nint m_flRange = 0x9C; // float
    public const nint m_flFalloff = 0xA0; // float
    public const nint m_flAttenuation0 = 0xA4; // float
    public const nint m_flAttenuation1 = 0xA8; // float
    public const nint m_flAttenuation2 = 0xAC; // float
    public const nint m_flTheta = 0xB0; // float
    public const nint m_flPhi = 0xB4; // float
    public const nint m_hLightCookie = 0xB8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_nCascades = 0xC0; // int32_t
    public const nint m_nCastShadows = 0xC4; // int32_t
    public const nint m_nShadowWidth = 0xC8; // int32_t
    public const nint m_nShadowHeight = 0xCC; // int32_t
    public const nint m_bRenderDiffuse = 0xD0; // bool
    public const nint m_nRenderSpecular = 0xD4; // int32_t
    public const nint m_bRenderTransmissive = 0xD8; // bool
    public const nint m_flOrthoLightWidth = 0xDC; // float
    public const nint m_flOrthoLightHeight = 0xE0; // float
    public const nint m_nStyle = 0xE4; // int32_t
    public const nint m_Pattern = 0xE8; // CUtlString
    public const nint m_nCascadeRenderStaticObjects = 0xF0; // int32_t
    public const nint m_flShadowCascadeCrossFade = 0xF4; // float
    public const nint m_flShadowCascadeDistanceFade = 0xF8; // float
    public const nint m_flShadowCascadeDistance0 = 0xFC; // float
    public const nint m_flShadowCascadeDistance1 = 0x100; // float
    public const nint m_flShadowCascadeDistance2 = 0x104; // float
    public const nint m_flShadowCascadeDistance3 = 0x108; // float
    public const nint m_nShadowCascadeResolution0 = 0x10C; // int32_t
    public const nint m_nShadowCascadeResolution1 = 0x110; // int32_t
    public const nint m_nShadowCascadeResolution2 = 0x114; // int32_t
    public const nint m_nShadowCascadeResolution3 = 0x118; // int32_t
    public const nint m_bUsesBakedShadowing = 0x11C; // bool
    public const nint m_nShadowPriority = 0x120; // int32_t
    public const nint m_nBakedShadowIndex = 0x124; // int32_t
    public const nint m_bRenderToCubemaps = 0x128; // bool
    public const nint m_nDirectLight = 0x12C; // int32_t
    public const nint m_nIndirectLight = 0x130; // int32_t
    public const nint m_flFadeMinDist = 0x134; // float
    public const nint m_flFadeMaxDist = 0x138; // float
    public const nint m_flShadowFadeMinDist = 0x13C; // float
    public const nint m_flShadowFadeMaxDist = 0x140; // float
    public const nint m_bEnabled = 0x144; // bool
    public const nint m_bFlicker = 0x145; // bool
    public const nint m_bPrecomputedFieldsValid = 0x146; // bool
    public const nint m_vPrecomputedBoundsMins = 0x148; // Vector
    public const nint m_vPrecomputedBoundsMaxs = 0x154; // Vector
    public const nint m_vPrecomputedOBBOrigin = 0x160; // Vector
    public const nint m_vPrecomputedOBBAngles = 0x16C; // QAngle
    public const nint m_vPrecomputedOBBExtent = 0x178; // Vector
    public const nint m_flPrecomputedMaxRange = 0x184; // float
    public const nint m_nFogLightingMode = 0x188; // int32_t
    public const nint m_flFogContributionStength = 0x18C; // float
    public const nint m_flNearClipPlane = 0x190; // float
    public const nint m_SkyColor = 0x194; // Color
    public const nint m_flSkyIntensity = 0x198; // float
    public const nint m_SkyAmbientBounce = 0x19C; // Color
    public const nint m_bUseSecondaryColor = 0x1A0; // bool
    public const nint m_bMixedShadows = 0x1A1; // bool
    public const nint m_flLightStyleStartTime = 0x1A4; // GameTime_t
    public const nint m_flCapsuleLength = 0x1A8; // float
    public const nint m_flMinRoughness = 0x1AC; // float
    public const nint m_bPvsModifyEntity = 0x1C0; // bool
}

public static class CLightDirectionalEntity { // CLightEntity
}

public static class CLightEntity { // CBaseModelEntity
    public const nint m_CLightComponent = 0x710; // CLightComponent*
}

public static class CLightEnvironmentEntity { // CLightDirectionalEntity
}

public static class CLightGlow { // CBaseModelEntity
    public const nint m_nHorizontalSize = 0x710; // uint32_t
    public const nint m_nVerticalSize = 0x714; // uint32_t
    public const nint m_nMinDist = 0x718; // uint32_t
    public const nint m_nMaxDist = 0x71C; // uint32_t
    public const nint m_nOuterMaxDist = 0x720; // uint32_t
    public const nint m_flGlowProxySize = 0x724; // float
    public const nint m_flHDRColorScale = 0x728; // float
}

public static class CLightOrthoEntity { // CLightEntity
}

public static class CLightSpotEntity { // CLightEntity
}

public static class CLogicAchievement { // CLogicalEntity
    public const nint m_bDisabled = 0x4C0; // bool
    public const nint m_iszAchievementEventID = 0x4C8; // CUtlSymbolLarge
    public const nint m_OnFired = 0x4D0; // CEntityIOOutput
}

public static class CLogicActiveAutosave { // CLogicAutosave
    public const nint m_TriggerHitPoints = 0x4D0; // int32_t
    public const nint m_flTimeToTrigger = 0x4D4; // float
    public const nint m_flStartTime = 0x4D8; // GameTime_t
    public const nint m_flDangerousTime = 0x4DC; // float
}

public static class CLogicAuto { // CBaseEntity
    public const nint m_OnMapSpawn = 0x4C0; // CEntityIOOutput
    public const nint m_OnDemoMapSpawn = 0x4E8; // CEntityIOOutput
    public const nint m_OnNewGame = 0x510; // CEntityIOOutput
    public const nint m_OnLoadGame = 0x538; // CEntityIOOutput
    public const nint m_OnMapTransition = 0x560; // CEntityIOOutput
    public const nint m_OnBackgroundMap = 0x588; // CEntityIOOutput
    public const nint m_OnMultiNewMap = 0x5B0; // CEntityIOOutput
    public const nint m_OnMultiNewRound = 0x5D8; // CEntityIOOutput
    public const nint m_OnVREnabled = 0x600; // CEntityIOOutput
    public const nint m_OnVRNotEnabled = 0x628; // CEntityIOOutput
    public const nint m_globalstate = 0x650; // CUtlSymbolLarge
}

public static class CLogicAutosave { // CLogicalEntity
    public const nint m_bForceNewLevelUnit = 0x4C0; // bool
    public const nint m_minHitPoints = 0x4C4; // int32_t
    public const nint m_minHitPointsToCommit = 0x4C8; // int32_t
}

public static class CLogicBranch { // CLogicalEntity
    public const nint m_bInValue = 0x4C0; // bool
    public const nint m_Listeners = 0x4C8; // CUtlVector<CHandle<CBaseEntity>>
    public const nint m_OnTrue = 0x4E0; // CEntityIOOutput
    public const nint m_OnFalse = 0x508; // CEntityIOOutput
}

public static class CLogicBranchList { // CLogicalEntity
    public const nint m_nLogicBranchNames = 0x4C0; // CUtlSymbolLarge[16]
    public const nint m_LogicBranchList = 0x540; // CUtlVector<CHandle<CBaseEntity>>
    public const nint m_eLastState = 0x558; // CLogicBranchList::LogicBranchListenerLastState_t
    public const nint m_OnAllTrue = 0x560; // CEntityIOOutput
    public const nint m_OnAllFalse = 0x588; // CEntityIOOutput
    public const nint m_OnMixed = 0x5B0; // CEntityIOOutput
}

public static class CLogicCase { // CLogicalEntity
    public const nint m_nCase = 0x4C0; // CUtlSymbolLarge[32]
    public const nint m_nShuffleCases = 0x5C0; // int32_t
    public const nint m_nLastShuffleCase = 0x5C4; // int32_t
    public const nint m_uchShuffleCaseMap = 0x5C8; // uint8_t[32]
    public const nint m_OnCase = 0x5E8; // CEntityIOOutput[32]
    public const nint m_OnDefault = 0xAE8; // CEntityOutputTemplate<CVariantBase<CVariantDefaultAllocator>>
}

public static class CLogicCollisionPair { // CLogicalEntity
    public const nint m_nameAttach1 = 0x4C0; // CUtlSymbolLarge
    public const nint m_nameAttach2 = 0x4C8; // CUtlSymbolLarge
    public const nint m_disabled = 0x4D0; // bool
    public const nint m_succeeded = 0x4D1; // bool
}

public static class CLogicCompare { // CLogicalEntity
    public const nint m_flInValue = 0x4C0; // float
    public const nint m_flCompareValue = 0x4C4; // float
    public const nint m_OnLessThan = 0x4C8; // CEntityOutputTemplate<float>
    public const nint m_OnEqualTo = 0x4F0; // CEntityOutputTemplate<float>
    public const nint m_OnNotEqualTo = 0x518; // CEntityOutputTemplate<float>
    public const nint m_OnGreaterThan = 0x540; // CEntityOutputTemplate<float>
}

public static class CLogicDistanceAutosave { // CLogicalEntity
    public const nint m_iszTargetEntity = 0x4C0; // CUtlSymbolLarge
    public const nint m_flDistanceToPlayer = 0x4C8; // float
    public const nint m_bForceNewLevelUnit = 0x4CC; // bool
    public const nint m_bCheckCough = 0x4CD; // bool
    public const nint m_bThinkDangerous = 0x4CE; // bool
    public const nint m_flDangerousTime = 0x4D0; // float
}

public static class CLogicDistanceCheck { // CLogicalEntity
    public const nint m_iszEntityA = 0x4C0; // CUtlSymbolLarge
    public const nint m_iszEntityB = 0x4C8; // CUtlSymbolLarge
    public const nint m_flZone1Distance = 0x4D0; // float
    public const nint m_flZone2Distance = 0x4D4; // float
    public const nint m_InZone1 = 0x4D8; // CEntityIOOutput
    public const nint m_InZone2 = 0x500; // CEntityIOOutput
    public const nint m_InZone3 = 0x528; // CEntityIOOutput
}

public static class CLogicEventListener { // CLogicalEntity
    public const nint m_strEventName = 0x4D0; // CUtlString
    public const nint m_bIsEnabled = 0x4D8; // bool
    public const nint m_nTeam = 0x4DC; // int32_t
    public const nint m_OnEventFired = 0x4E0; // CEntityIOOutput
}

public static class CLogicGameEvent { // CLogicalEntity
    public const nint m_iszEventName = 0x4C0; // CUtlSymbolLarge
}

public static class CLogicGameEventListener { // CLogicalEntity
    public const nint m_OnEventFired = 0x4D0; // CEntityIOOutput
    public const nint m_iszGameEventName = 0x4F8; // CUtlSymbolLarge
    public const nint m_iszGameEventItem = 0x500; // CUtlSymbolLarge
    public const nint m_bEnabled = 0x508; // bool
    public const nint m_bStartDisabled = 0x509; // bool
}

public static class CLogicLineToEntity { // CLogicalEntity
    public const nint m_Line = 0x4C0; // CEntityOutputTemplate<Vector>
    public const nint m_SourceName = 0x4E8; // CUtlSymbolLarge
    public const nint m_StartEntity = 0x4F0; // CHandle<CBaseEntity>
    public const nint m_EndEntity = 0x4F4; // CHandle<CBaseEntity>
}

public static class CLogicMeasureMovement { // CLogicalEntity
    public const nint m_strMeasureTarget = 0x4C0; // CUtlSymbolLarge
    public const nint m_strMeasureReference = 0x4C8; // CUtlSymbolLarge
    public const nint m_strTargetReference = 0x4D0; // CUtlSymbolLarge
    public const nint m_hMeasureTarget = 0x4D8; // CHandle<CBaseEntity>
    public const nint m_hMeasureReference = 0x4DC; // CHandle<CBaseEntity>
    public const nint m_hTarget = 0x4E0; // CHandle<CBaseEntity>
    public const nint m_hTargetReference = 0x4E4; // CHandle<CBaseEntity>
    public const nint m_flScale = 0x4E8; // float
    public const nint m_nMeasureType = 0x4EC; // int32_t
}

public static class CLogicNPCCounter { // CBaseEntity
    public const nint m_OnMinCountAll = 0x4C0; // CEntityIOOutput
    public const nint m_OnMaxCountAll = 0x4E8; // CEntityIOOutput
    public const nint m_OnFactorAll = 0x510; // CEntityOutputTemplate<float>
    public const nint m_OnMinPlayerDistAll = 0x538; // CEntityOutputTemplate<float>
    public const nint m_OnMinCount_1 = 0x560; // CEntityIOOutput
    public const nint m_OnMaxCount_1 = 0x588; // CEntityIOOutput
    public const nint m_OnFactor_1 = 0x5B0; // CEntityOutputTemplate<float>
    public const nint m_OnMinPlayerDist_1 = 0x5D8; // CEntityOutputTemplate<float>
    public const nint m_OnMinCount_2 = 0x600; // CEntityIOOutput
    public const nint m_OnMaxCount_2 = 0x628; // CEntityIOOutput
    public const nint m_OnFactor_2 = 0x650; // CEntityOutputTemplate<float>
    public const nint m_OnMinPlayerDist_2 = 0x678; // CEntityOutputTemplate<float>
    public const nint m_OnMinCount_3 = 0x6A0; // CEntityIOOutput
    public const nint m_OnMaxCount_3 = 0x6C8; // CEntityIOOutput
    public const nint m_OnFactor_3 = 0x6F0; // CEntityOutputTemplate<float>
    public const nint m_OnMinPlayerDist_3 = 0x718; // CEntityOutputTemplate<float>
    public const nint m_hSource = 0x740; // CEntityHandle
    public const nint m_iszSourceEntityName = 0x748; // CUtlSymbolLarge
    public const nint m_flDistanceMax = 0x750; // float
    public const nint m_bDisabled = 0x754; // bool
    public const nint m_nMinCountAll = 0x758; // int32_t
    public const nint m_nMaxCountAll = 0x75C; // int32_t
    public const nint m_nMinFactorAll = 0x760; // int32_t
    public const nint m_nMaxFactorAll = 0x764; // int32_t
    public const nint m_iszNPCClassname_1 = 0x770; // CUtlSymbolLarge
    public const nint m_nNPCState_1 = 0x778; // int32_t
    public const nint m_bInvertState_1 = 0x77C; // bool
    public const nint m_nMinCount_1 = 0x780; // int32_t
    public const nint m_nMaxCount_1 = 0x784; // int32_t
    public const nint m_nMinFactor_1 = 0x788; // int32_t
    public const nint m_nMaxFactor_1 = 0x78C; // int32_t
    public const nint m_flDefaultDist_1 = 0x794; // float
    public const nint m_iszNPCClassname_2 = 0x798; // CUtlSymbolLarge
    public const nint m_nNPCState_2 = 0x7A0; // int32_t
    public const nint m_bInvertState_2 = 0x7A4; // bool
    public const nint m_nMinCount_2 = 0x7A8; // int32_t
    public const nint m_nMaxCount_2 = 0x7AC; // int32_t
    public const nint m_nMinFactor_2 = 0x7B0; // int32_t
    public const nint m_nMaxFactor_2 = 0x7B4; // int32_t
    public const nint m_flDefaultDist_2 = 0x7BC; // float
    public const nint m_iszNPCClassname_3 = 0x7C0; // CUtlSymbolLarge
    public const nint m_nNPCState_3 = 0x7C8; // int32_t
    public const nint m_bInvertState_3 = 0x7CC; // bool
    public const nint m_nMinCount_3 = 0x7D0; // int32_t
    public const nint m_nMaxCount_3 = 0x7D4; // int32_t
    public const nint m_nMinFactor_3 = 0x7D8; // int32_t
    public const nint m_nMaxFactor_3 = 0x7DC; // int32_t
    public const nint m_flDefaultDist_3 = 0x7E4; // float
}

public static class CLogicNPCCounterAABB { // CLogicNPCCounter
    public const nint m_vDistanceOuterMins = 0x800; // Vector
    public const nint m_vDistanceOuterMaxs = 0x80C; // Vector
    public const nint m_vOuterMins = 0x818; // Vector
    public const nint m_vOuterMaxs = 0x824; // Vector
}

public static class CLogicNPCCounterOBB { // CLogicNPCCounterAABB
}

public static class CLogicNavigation { // CLogicalEntity
    public const nint m_isOn = 0x4C8; // bool
    public const nint m_navProperty = 0x4CC; // navproperties_t
}

public static class CLogicPlayerProxy { // CLogicalEntity
    public const nint m_hPlayer = 0x4C0; // CHandle<CBaseEntity>
    public const nint m_PlayerHasAmmo = 0x4C8; // CEntityIOOutput
    public const nint m_PlayerHasNoAmmo = 0x4F0; // CEntityIOOutput
    public const nint m_PlayerDied = 0x518; // CEntityIOOutput
    public const nint m_RequestedPlayerHealth = 0x540; // CEntityOutputTemplate<int32_t>
}

public static class CLogicProximity { // CPointEntity
}

public static class CLogicRelay { // CLogicalEntity
    public const nint m_OnTrigger = 0x4C0; // CEntityIOOutput
    public const nint m_OnSpawn = 0x4E8; // CEntityIOOutput
    public const nint m_bDisabled = 0x510; // bool
    public const nint m_bWaitForRefire = 0x511; // bool
    public const nint m_bTriggerOnce = 0x512; // bool
    public const nint m_bFastRetrigger = 0x513; // bool
    public const nint m_bPassthoughCaller = 0x514; // bool
}

public static class CLogicScript { // CPointEntity
}

public static class CLogicalEntity { // CServerOnlyEntity
}

public static class CMapInfo { // CPointEntity
    public const nint m_iBuyingStatus = 0x4C0; // int32_t
    public const nint m_flBombRadius = 0x4C4; // float
    public const nint m_iPetPopulation = 0x4C8; // int32_t
    public const nint m_bUseNormalSpawnsForDM = 0x4CC; // bool
    public const nint m_bDisableAutoGeneratedDMSpawns = 0x4CD; // bool
    public const nint m_flBotMaxVisionDistance = 0x4D0; // float
    public const nint m_iHostageCount = 0x4D4; // int32_t
    public const nint m_bFadePlayerVisibilityFarZ = 0x4D8; // bool
}

public static class CMapVetoPickController { // CBaseEntity
    public const nint m_bPlayedIntroVcd = 0x4C0; // bool
    public const nint m_bNeedToPlayFiveSecondsRemaining = 0x4C1; // bool
    public const nint m_dblPreMatchDraftSequenceTime = 0x4E0; // double
    public const nint m_bPreMatchDraftStateChanged = 0x4E8; // bool
    public const nint m_nDraftType = 0x4EC; // int32_t
    public const nint m_nTeamWinningCoinToss = 0x4F0; // int32_t
    public const nint m_nTeamWithFirstChoice = 0x4F4; // int32_t[64]
    public const nint m_nVoteMapIdsList = 0x5F4; // int32_t[7]
    public const nint m_nAccountIDs = 0x610; // int32_t[64]
    public const nint m_nMapId0 = 0x710; // int32_t[64]
    public const nint m_nMapId1 = 0x810; // int32_t[64]
    public const nint m_nMapId2 = 0x910; // int32_t[64]
    public const nint m_nMapId3 = 0xA10; // int32_t[64]
    public const nint m_nMapId4 = 0xB10; // int32_t[64]
    public const nint m_nMapId5 = 0xC10; // int32_t[64]
    public const nint m_nStartingSide0 = 0xD10; // int32_t[64]
    public const nint m_nCurrentPhase = 0xE10; // int32_t
    public const nint m_nPhaseStartTick = 0xE14; // int32_t
    public const nint m_nPhaseDurationTicks = 0xE18; // int32_t
    public const nint m_OnMapVetoed = 0xE20; // CEntityOutputTemplate<CUtlSymbolLarge>
    public const nint m_OnMapPicked = 0xE48; // CEntityOutputTemplate<CUtlSymbolLarge>
    public const nint m_OnSidesPicked = 0xE70; // CEntityOutputTemplate<int32_t>
    public const nint m_OnNewPhaseStarted = 0xE98; // CEntityOutputTemplate<int32_t>
    public const nint m_OnLevelTransition = 0xEC0; // CEntityOutputTemplate<int32_t>
}

public static class CMarkupVolume { // CBaseModelEntity
    public const nint m_bEnabled = 0x710; // bool
}

public static class CMarkupVolumeTagged { // CMarkupVolume
    public const nint m_bIsGroup = 0x748; // bool
    public const nint m_bGroupByPrefab = 0x749; // bool
    public const nint m_bGroupByVolume = 0x74A; // bool
    public const nint m_bGroupOtherGroups = 0x74B; // bool
    public const nint m_bIsInGroup = 0x74C; // bool
}

public static class CMarkupVolumeTagged_Nav { // CMarkupVolumeTagged
}

public static class CMarkupVolumeTagged_NavGame { // CMarkupVolumeWithRef
    public const nint m_bFloodFillAttribute = 0x768; // bool
}

public static class CMarkupVolumeWithRef { // CMarkupVolumeTagged
    public const nint m_bUseRef = 0x750; // bool
    public const nint m_vRefPos = 0x754; // Vector
    public const nint m_flRefDot = 0x760; // float
}

public static class CMathColorBlend { // CLogicalEntity
    public const nint m_flInMin = 0x4C0; // float
    public const nint m_flInMax = 0x4C4; // float
    public const nint m_OutColor1 = 0x4C8; // Color
    public const nint m_OutColor2 = 0x4CC; // Color
    public const nint m_OutValue = 0x4D0; // CEntityOutputTemplate<Color>
}

public static class CMathCounter { // CLogicalEntity
    public const nint m_flMin = 0x4C0; // float
    public const nint m_flMax = 0x4C4; // float
    public const nint m_bHitMin = 0x4C8; // bool
    public const nint m_bHitMax = 0x4C9; // bool
    public const nint m_bDisabled = 0x4CA; // bool
    public const nint m_OutValue = 0x4D0; // CEntityOutputTemplate<float>
    public const nint m_OnGetValue = 0x4F8; // CEntityOutputTemplate<float>
    public const nint m_OnHitMin = 0x520; // CEntityIOOutput
    public const nint m_OnHitMax = 0x548; // CEntityIOOutput
    public const nint m_OnChangedFromMin = 0x570; // CEntityIOOutput
    public const nint m_OnChangedFromMax = 0x598; // CEntityIOOutput
}

public static class CMathRemap { // CLogicalEntity
    public const nint m_flInMin = 0x4C0; // float
    public const nint m_flInMax = 0x4C4; // float
    public const nint m_flOut1 = 0x4C8; // float
    public const nint m_flOut2 = 0x4CC; // float
    public const nint m_flOldInValue = 0x4D0; // float
    public const nint m_bEnabled = 0x4D4; // bool
    public const nint m_OutValue = 0x4D8; // CEntityOutputTemplate<float>
    public const nint m_OnRoseAboveMin = 0x500; // CEntityIOOutput
    public const nint m_OnRoseAboveMax = 0x528; // CEntityIOOutput
    public const nint m_OnFellBelowMin = 0x550; // CEntityIOOutput
    public const nint m_OnFellBelowMax = 0x578; // CEntityIOOutput
}

public static class CMelee { // CCSWeaponBase
}

public static class CMessage { // CPointEntity
    public const nint m_iszMessage = 0x4C0; // CUtlSymbolLarge
    public const nint m_MessageVolume = 0x4C8; // float
    public const nint m_MessageAttenuation = 0x4CC; // int32_t
    public const nint m_Radius = 0x4D0; // float
    public const nint m_sNoise = 0x4D8; // CUtlSymbolLarge
    public const nint m_OnShowMessage = 0x4E0; // CEntityIOOutput
}

public static class CMessageEntity { // CPointEntity
    public const nint m_radius = 0x4C0; // int32_t
    public const nint m_messageText = 0x4C8; // CUtlSymbolLarge
    public const nint m_drawText = 0x4D0; // bool
    public const nint m_bDeveloperOnly = 0x4D1; // bool
    public const nint m_bEnabled = 0x4D2; // bool
}

public static class CModelPointEntity { // CBaseModelEntity
}

public static class CModelState {
    public const nint m_hModel = 0xA0; // CStrongHandle<InfoForResourceTypeCModel>
    public const nint m_ModelName = 0xA8; // CUtlSymbolLarge
    public const nint m_bClientClothCreationSuppressed = 0xE8; // bool
    public const nint m_MeshGroupMask = 0x180; // uint64_t
    public const nint m_nIdealMotionType = 0x202; // int8_t
    public const nint m_nForceLOD = 0x203; // int8_t
    public const nint m_nClothUpdateFlags = 0x204; // int8_t
}

public static class CMolotovGrenade { // CBaseCSGrenade
}

public static class CMolotovProjectile { // CBaseCSGrenadeProjectile
    public const nint m_bIsIncGrenade = 0xA98; // bool
    public const nint m_bDetonated = 0xAA4; // bool
    public const nint m_stillTimer = 0xAA8; // IntervalTimer
    public const nint m_bHasBouncedOffPlayer = 0xB88; // bool
}

public static class CMomentaryRotButton { // CRotButton
    public const nint m_Position = 0x8D8; // CEntityOutputTemplate<float>
    public const nint m_OnUnpressed = 0x900; // CEntityIOOutput
    public const nint m_OnFullyOpen = 0x928; // CEntityIOOutput
    public const nint m_OnFullyClosed = 0x950; // CEntityIOOutput
    public const nint m_OnReachedPosition = 0x978; // CEntityIOOutput
    public const nint m_lastUsed = 0x9A0; // int32_t
    public const nint m_start = 0x9A4; // QAngle
    public const nint m_end = 0x9B0; // QAngle
    public const nint m_IdealYaw = 0x9BC; // float
    public const nint m_sNoise = 0x9C0; // CUtlSymbolLarge
    public const nint m_bUpdateTarget = 0x9C8; // bool
    public const nint m_direction = 0x9CC; // int32_t
    public const nint m_returnSpeed = 0x9D0; // float
    public const nint m_flStartPosition = 0x9D4; // float
}

public static class CMotorController {
    public const nint m_speed = 0x8; // float
    public const nint m_maxTorque = 0xC; // float
    public const nint m_axis = 0x10; // Vector
    public const nint m_inertiaFactor = 0x1C; // float
}

public static class CMultiLightProxy { // CLogicalEntity
    public const nint m_iszLightNameFilter = 0x4C0; // CUtlSymbolLarge
    public const nint m_iszLightClassFilter = 0x4C8; // CUtlSymbolLarge
    public const nint m_flLightRadiusFilter = 0x4D0; // float
    public const nint m_flBrightnessDelta = 0x4D4; // float
    public const nint m_bPerformScreenFade = 0x4D8; // bool
    public const nint m_flTargetBrightnessMultiplier = 0x4DC; // float
    public const nint m_flCurrentBrightnessMultiplier = 0x4E0; // float
    public const nint m_vecLights = 0x4E8; // CUtlVector<CHandle<CLightEntity>>
}

public static class CMultiSource { // CLogicalEntity
    public const nint m_rgEntities = 0x4C0; // CHandle<CBaseEntity>[32]
    public const nint m_rgTriggered = 0x540; // int32_t[32]
    public const nint m_OnTrigger = 0x5C0; // CEntityIOOutput
    public const nint m_iTotal = 0x5E8; // int32_t
    public const nint m_globalstate = 0x5F0; // CUtlSymbolLarge
}

public static class CMultiplayRules { // CGameRules
}

public static class CMultiplayer_Expresser { // CAI_ExpresserWithFollowup
    public const nint m_bAllowMultipleScenes = 0x70; // bool
}

public static class CNavHullPresetVData {
    public const nint m_vecNavHulls = 0x0; // CUtlVector<CUtlString>
}

public static class CNavHullVData {
    public const nint m_bAgentEnabled = 0x0; // bool
    public const nint m_agentRadius = 0x4; // float
    public const nint m_agentHeight = 0x8; // float
    public const nint m_agentShortHeightEnabled = 0xC; // bool
    public const nint m_agentShortHeight = 0x10; // float
    public const nint m_agentMaxClimb = 0x14; // float
    public const nint m_agentMaxSlope = 0x18; // int32_t
    public const nint m_agentMaxJumpDownDist = 0x1C; // float
    public const nint m_agentMaxJumpHorizDistBase = 0x20; // float
    public const nint m_agentMaxJumpUpDist = 0x24; // float
    public const nint m_agentBorderErosion = 0x28; // int32_t
}

public static class CNavLinkAnimgraphVar {
    public const nint m_strAnimgraphVar = 0x0; // CUtlString
    public const nint m_unAlignmentDegrees = 0x8; // uint32_t
}

public static class CNavLinkAreaEntity { // CPointEntity
    public const nint m_flWidth = 0x4C0; // float
    public const nint m_vLocatorOffset = 0x4C4; // Vector
    public const nint m_qLocatorAnglesOffset = 0x4D0; // QAngle
    public const nint m_strMovementForward = 0x4E0; // CUtlSymbolLarge
    public const nint m_strMovementReverse = 0x4E8; // CUtlSymbolLarge
    public const nint m_nNavLinkIdForward = 0x4F0; // int32_t
    public const nint m_nNavLinkIdReverse = 0x4F4; // int32_t
    public const nint m_bEnabled = 0x4F8; // bool
    public const nint m_strFilterName = 0x500; // CUtlSymbolLarge
    public const nint m_hFilter = 0x508; // CHandle<CBaseFilter>
    public const nint m_OnNavLinkStart = 0x510; // CEntityIOOutput
    public const nint m_OnNavLinkFinish = 0x538; // CEntityIOOutput
    public const nint m_bIsTerminus = 0x560; // bool
}

public static class CNavLinkMovementVData {
    public const nint m_bIsInterpolated = 0x0; // bool
    public const nint m_unRecommendedDistance = 0x4; // uint32_t
    public const nint m_vecAnimgraphVars = 0x8; // CUtlVector<CNavLinkAnimgraphVar>
}

public static class CNavSpaceInfo { // CPointEntity
    public const nint m_bCreateFlightSpace = 0x4C0; // bool
}

public static class CNavVolume {
}

public static class CNavVolumeAll { // CNavVolumeVector
}

public static class CNavVolumeBreadthFirstSearch { // CNavVolumeCalculatedVector
    public const nint m_vStartPos = 0xA0; // Vector
    public const nint m_flSearchDist = 0xAC; // float
}

public static class CNavVolumeCalculatedVector { // CNavVolume
}

public static class CNavVolumeMarkupVolume { // CNavVolume
}

public static class CNavVolumeSphere { // CNavVolume
    public const nint m_vCenter = 0x70; // Vector
    public const nint m_flRadius = 0x7C; // float
}

public static class CNavVolumeSphericalShell { // CNavVolumeSphere
    public const nint m_flRadiusInner = 0x80; // float
}

public static class CNavVolumeVector { // CNavVolume
    public const nint m_bHasBeenPreFiltered = 0x78; // bool
}

public static class CNavWalkable { // CPointEntity
}

public static class CNetworkOriginCellCoordQuantizedVector {
    public const nint m_cellX = 0x10; // uint16_t
    public const nint m_cellY = 0x12; // uint16_t
    public const nint m_cellZ = 0x14; // uint16_t
    public const nint m_nOutsideWorld = 0x16; // uint16_t
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
    public const nint m_nTransmitStateOwnedCounter = 0x16C; // uint8_t
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
    public const nint m_flPrevCycle = 0xC; // float
    public const nint m_flCycle = 0x10; // float
    public const nint m_flWeight = 0x14; // CNetworkedQuantizedFloat
    public const nint m_bSequenceChangeNetworked = 0x1C; // bool
    public const nint m_bDiscontinuity = 0x1D; // bool
    public const nint m_flPrevCycleFromDiscontinuity = 0x20; // float
    public const nint m_flPrevCycleForAnimEventDetection = 0x24; // float
}

public static class CNullEntity { // CBaseEntity
}

public static class COmniLight { // CBarnLight
    public const nint m_flInnerAngle = 0x938; // float
    public const nint m_flOuterAngle = 0x93C; // float
    public const nint m_bShowLight = 0x940; // bool
}

public static class COrnamentProp { // CDynamicProp
    public const nint m_initialOwner = 0xB60; // CUtlSymbolLarge
}

public static class CParticleSystem { // CBaseModelEntity
    public const nint m_szSnapshotFileName = 0x710; // char[512]
    public const nint m_bActive = 0x910; // bool
    public const nint m_bFrozen = 0x911; // bool
    public const nint m_flFreezeTransitionDuration = 0x914; // float
    public const nint m_nStopType = 0x918; // int32_t
    public const nint m_bAnimateDuringGameplayPause = 0x91C; // bool
    public const nint m_iEffectIndex = 0x920; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    public const nint m_flStartTime = 0x928; // GameTime_t
    public const nint m_flPreSimTime = 0x92C; // float
    public const nint m_vServerControlPoints = 0x930; // Vector[4]
    public const nint m_iServerControlPointAssignments = 0x960; // uint8_t[4]
    public const nint m_hControlPointEnts = 0x964; // CHandle<CBaseEntity>[64]
    public const nint m_bNoSave = 0xA64; // bool
    public const nint m_bNoFreeze = 0xA65; // bool
    public const nint m_bNoRamp = 0xA66; // bool
    public const nint m_bStartActive = 0xA67; // bool
    public const nint m_iszEffectName = 0xA68; // CUtlSymbolLarge
    public const nint m_iszControlPointNames = 0xA70; // CUtlSymbolLarge[64]
    public const nint m_nDataCP = 0xC70; // int32_t
    public const nint m_vecDataCPValue = 0xC74; // Vector
    public const nint m_nTintCP = 0xC80; // int32_t
    public const nint m_clrTint = 0xC84; // Color
}

public static class CPathCorner { // CPointEntity
    public const nint m_flWait = 0x4C0; // float
    public const nint m_flRadius = 0x4C4; // float
    public const nint m_OnPass = 0x4C8; // CEntityIOOutput
}

public static class CPathCornerCrash { // CPathCorner
}

public static class CPathKeyFrame { // CLogicalEntity
    public const nint m_Origin = 0x4C0; // Vector
    public const nint m_Angles = 0x4CC; // QAngle
    public const nint m_qAngle = 0x4E0; // Quaternion
    public const nint m_iNextKey = 0x4F0; // CUtlSymbolLarge
    public const nint m_flNextTime = 0x4F8; // float
    public const nint m_pNextKey = 0x500; // CPathKeyFrame*
    public const nint m_pPrevKey = 0x508; // CPathKeyFrame*
    public const nint m_flSpeed = 0x510; // float
}

public static class CPathParticleRope { // CBaseEntity
    public const nint m_bStartActive = 0x4C0; // bool
    public const nint m_flMaxSimulationTime = 0x4C4; // float
    public const nint m_iszEffectName = 0x4C8; // CUtlSymbolLarge
    public const nint m_PathNodes_Name = 0x4D0; // CUtlVector<CUtlSymbolLarge>
    public const nint m_flParticleSpacing = 0x4E8; // float
    public const nint m_flSlack = 0x4EC; // float
    public const nint m_flRadius = 0x4F0; // float
    public const nint m_ColorTint = 0x4F4; // Color
    public const nint m_nEffectState = 0x4F8; // int32_t
    public const nint m_iEffectIndex = 0x500; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    public const nint m_PathNodes_Position = 0x508; // CNetworkUtlVectorBase<Vector>
    public const nint m_PathNodes_TangentIn = 0x520; // CNetworkUtlVectorBase<Vector>
    public const nint m_PathNodes_TangentOut = 0x538; // CNetworkUtlVectorBase<Vector>
    public const nint m_PathNodes_Color = 0x550; // CNetworkUtlVectorBase<Vector>
    public const nint m_PathNodes_PinEnabled = 0x568; // CNetworkUtlVectorBase<bool>
    public const nint m_PathNodes_RadiusScale = 0x580; // CNetworkUtlVectorBase<float>
}

public static class CPathParticleRopeAlias_path_particle_rope_clientside { // CPathParticleRope
}

public static class CPathTrack { // CPointEntity
    public const nint m_pnext = 0x4C0; // CPathTrack*
    public const nint m_pprevious = 0x4C8; // CPathTrack*
    public const nint m_paltpath = 0x4D0; // CPathTrack*
    public const nint m_flRadius = 0x4D8; // float
    public const nint m_length = 0x4DC; // float
    public const nint m_altName = 0x4E0; // CUtlSymbolLarge
    public const nint m_nIterVal = 0x4E8; // int32_t
    public const nint m_eOrientationType = 0x4EC; // TrackOrientationType_t
    public const nint m_OnPass = 0x4F0; // CEntityIOOutput
}

public static class CPhysBallSocket { // CPhysConstraint
    public const nint m_flFriction = 0x518; // float
    public const nint m_bEnableSwingLimit = 0x51C; // bool
    public const nint m_flSwingLimit = 0x520; // float
    public const nint m_bEnableTwistLimit = 0x524; // bool
    public const nint m_flMinTwistAngle = 0x528; // float
    public const nint m_flMaxTwistAngle = 0x52C; // float
}

public static class CPhysBox { // CBreakable
    public const nint m_damageType = 0x7D0; // int32_t
    public const nint m_massScale = 0x7D4; // float
    public const nint m_damageToEnableMotion = 0x7D8; // int32_t
    public const nint m_flForceToEnableMotion = 0x7DC; // float
    public const nint m_angPreferredCarryAngles = 0x7E0; // QAngle
    public const nint m_bNotSolidToWorld = 0x7EC; // bool
    public const nint m_bEnableUseOutput = 0x7ED; // bool
    public const nint m_iExploitableByPlayer = 0x7F0; // int32_t
    public const nint m_flTouchOutputPerEntityDelay = 0x7F4; // float
    public const nint m_OnDamaged = 0x7F8; // CEntityIOOutput
    public const nint m_OnAwakened = 0x820; // CEntityIOOutput
    public const nint m_OnMotionEnabled = 0x848; // CEntityIOOutput
    public const nint m_OnPlayerUse = 0x870; // CEntityIOOutput
    public const nint m_OnStartTouch = 0x898; // CEntityIOOutput
    public const nint m_hCarryingPlayer = 0x8C0; // CHandle<CBasePlayerPawn>
}

public static class CPhysConstraint { // CLogicalEntity
    public const nint m_nameAttach1 = 0x4C8; // CUtlSymbolLarge
    public const nint m_nameAttach2 = 0x4D0; // CUtlSymbolLarge
    public const nint m_breakSound = 0x4D8; // CUtlSymbolLarge
    public const nint m_forceLimit = 0x4E0; // float
    public const nint m_torqueLimit = 0x4E4; // float
    public const nint m_teleportTick = 0x4E8; // uint32_t
    public const nint m_minTeleportDistance = 0x4EC; // float
    public const nint m_OnBreak = 0x4F0; // CEntityIOOutput
}

public static class CPhysExplosion { // CPointEntity
    public const nint m_bExplodeOnSpawn = 0x4C0; // bool
    public const nint m_flMagnitude = 0x4C4; // float
    public const nint m_flDamage = 0x4C8; // float
    public const nint m_radius = 0x4CC; // float
    public const nint m_targetEntityName = 0x4D0; // CUtlSymbolLarge
    public const nint m_flInnerRadius = 0x4D8; // float
    public const nint m_flPushScale = 0x4DC; // float
    public const nint m_bConvertToDebrisWhenPossible = 0x4E0; // bool
    public const nint m_OnPushedPlayer = 0x4E8; // CEntityIOOutput
}

public static class CPhysFixed { // CPhysConstraint
    public const nint m_flLinearFrequency = 0x518; // float
    public const nint m_flLinearDampingRatio = 0x51C; // float
    public const nint m_flAngularFrequency = 0x520; // float
    public const nint m_flAngularDampingRatio = 0x524; // float
    public const nint m_bEnableLinearConstraint = 0x528; // bool
    public const nint m_bEnableAngularConstraint = 0x529; // bool
}

public static class CPhysForce { // CPointEntity
    public const nint m_nameAttach = 0x4C8; // CUtlSymbolLarge
    public const nint m_force = 0x4D0; // float
    public const nint m_forceTime = 0x4D4; // float
    public const nint m_attachedObject = 0x4D8; // CHandle<CBaseEntity>
    public const nint m_wasRestored = 0x4DC; // bool
    public const nint m_integrator = 0x4E0; // CConstantForceController
}

public static class CPhysHinge { // CPhysConstraint
    public const nint m_soundInfo = 0x520; // ConstraintSoundInfo
    public const nint m_NotifyMinLimitReached = 0x5A8; // CEntityIOOutput
    public const nint m_NotifyMaxLimitReached = 0x5D0; // CEntityIOOutput
    public const nint m_bAtMinLimit = 0x5F8; // bool
    public const nint m_bAtMaxLimit = 0x5F9; // bool
    public const nint m_hinge = 0x5FC; // constraint_hingeparams_t
    public const nint m_hingeFriction = 0x63C; // float
    public const nint m_systemLoadScale = 0x640; // float
    public const nint m_bIsAxisLocal = 0x644; // bool
    public const nint m_flMinRotation = 0x648; // float
    public const nint m_flMaxRotation = 0x64C; // float
    public const nint m_flInitialRotation = 0x650; // float
    public const nint m_flMotorFrequency = 0x654; // float
    public const nint m_flMotorDampingRatio = 0x658; // float
    public const nint m_flAngleSpeed = 0x65C; // float
    public const nint m_flAngleSpeedThreshold = 0x660; // float
    public const nint m_OnStartMoving = 0x668; // CEntityIOOutput
    public const nint m_OnStopMoving = 0x690; // CEntityIOOutput
}

public static class CPhysHingeAlias_phys_hinge_local { // CPhysHinge
}

public static class CPhysImpact { // CPointEntity
    public const nint m_damage = 0x4C0; // float
    public const nint m_distance = 0x4C4; // float
    public const nint m_directionEntityName = 0x4C8; // CUtlSymbolLarge
}

public static class CPhysLength { // CPhysConstraint
    public const nint m_offset = 0x518; // Vector[2]
    public const nint m_vecAttach = 0x530; // Vector
    public const nint m_addLength = 0x53C; // float
    public const nint m_minLength = 0x540; // float
    public const nint m_totalLength = 0x544; // float
    public const nint m_bEnableCollision = 0x548; // bool
}

public static class CPhysMagnet { // CBaseAnimGraph
    public const nint m_OnMagnetAttach = 0x8E8; // CEntityIOOutput
    public const nint m_OnMagnetDetach = 0x910; // CEntityIOOutput
    public const nint m_massScale = 0x938; // float
    public const nint m_forceLimit = 0x93C; // float
    public const nint m_torqueLimit = 0x940; // float
    public const nint m_MagnettedEntities = 0x948; // CUtlVector<magnetted_objects_t>
    public const nint m_bActive = 0x960; // bool
    public const nint m_bHasHitSomething = 0x961; // bool
    public const nint m_flTotalMass = 0x964; // float
    public const nint m_flRadius = 0x968; // float
    public const nint m_flNextSuckTime = 0x96C; // GameTime_t
    public const nint m_iMaxObjectsAttached = 0x970; // int32_t
}

public static class CPhysMotor { // CLogicalEntity
    public const nint m_nameAttach = 0x4C0; // CUtlSymbolLarge
    public const nint m_hAttachedObject = 0x4C8; // CHandle<CBaseEntity>
    public const nint m_spinUp = 0x4CC; // float
    public const nint m_additionalAcceleration = 0x4D0; // float
    public const nint m_angularAcceleration = 0x4D4; // float
    public const nint m_lastTime = 0x4D8; // GameTime_t
    public const nint m_motor = 0x4F0; // CMotorController
}

public static class CPhysPulley { // CPhysConstraint
    public const nint m_position2 = 0x518; // Vector
    public const nint m_offset = 0x524; // Vector[2]
    public const nint m_addLength = 0x53C; // float
    public const nint m_gearRatio = 0x540; // float
}

public static class CPhysSlideConstraint { // CPhysConstraint
    public const nint m_axisEnd = 0x520; // Vector
    public const nint m_slideFriction = 0x52C; // float
    public const nint m_systemLoadScale = 0x530; // float
    public const nint m_initialOffset = 0x534; // float
    public const nint m_bEnableLinearConstraint = 0x538; // bool
    public const nint m_bEnableAngularConstraint = 0x539; // bool
    public const nint m_flMotorFrequency = 0x53C; // float
    public const nint m_flMotorDampingRatio = 0x540; // float
    public const nint m_bUseEntityPivot = 0x544; // bool
    public const nint m_soundInfo = 0x548; // ConstraintSoundInfo
}

public static class CPhysThruster { // CPhysForce
    public const nint m_localOrigin = 0x520; // Vector
}

public static class CPhysTorque { // CPhysForce
    public const nint m_axis = 0x520; // Vector
}

public static class CPhysWheelConstraint { // CPhysConstraint
    public const nint m_flSuspensionFrequency = 0x518; // float
    public const nint m_flSuspensionDampingRatio = 0x51C; // float
    public const nint m_flSuspensionHeightOffset = 0x520; // float
    public const nint m_bEnableSuspensionLimit = 0x524; // bool
    public const nint m_flMinSuspensionOffset = 0x528; // float
    public const nint m_flMaxSuspensionOffset = 0x52C; // float
    public const nint m_bEnableSteeringLimit = 0x530; // bool
    public const nint m_flMinSteeringAngle = 0x534; // float
    public const nint m_flMaxSteeringAngle = 0x538; // float
    public const nint m_flSteeringAxisFriction = 0x53C; // float
    public const nint m_flSpinAxisFriction = 0x540; // float
}

public static class CPhysicalButton { // CBaseButton
}

public static class CPhysicsEntitySolver { // CLogicalEntity
    public const nint m_hMovingEntity = 0x4C8; // CHandle<CBaseEntity>
    public const nint m_hPhysicsBlocker = 0x4CC; // CHandle<CBaseEntity>
    public const nint m_separationDuration = 0x4D0; // float
    public const nint m_cancelTime = 0x4D4; // GameTime_t
}

public static class CPhysicsProp { // CBreakableProp
    public const nint m_MotionEnabled = 0xA68; // CEntityIOOutput
    public const nint m_OnAwakened = 0xA90; // CEntityIOOutput
    public const nint m_OnAwake = 0xAB8; // CEntityIOOutput
    public const nint m_OnAsleep = 0xAE0; // CEntityIOOutput
    public const nint m_OnPlayerUse = 0xB08; // CEntityIOOutput
    public const nint m_OnPlayerPickup = 0xB30; // CEntityIOOutput
    public const nint m_OnOutOfWorld = 0xB58; // CEntityIOOutput
    public const nint m_massScale = 0xB80; // float
    public const nint m_inertiaScale = 0xB84; // float
    public const nint m_buoyancyScale = 0xB88; // float
    public const nint m_damageType = 0xB8C; // int32_t
    public const nint m_damageToEnableMotion = 0xB90; // int32_t
    public const nint m_flForceToEnableMotion = 0xB94; // float
    public const nint m_bThrownByPlayer = 0xB98; // bool
    public const nint m_bDroppedByPlayer = 0xB99; // bool
    public const nint m_bTouchedByPlayer = 0xB9A; // bool
    public const nint m_bFirstCollisionAfterLaunch = 0xB9B; // bool
    public const nint m_iExploitableByPlayer = 0xB9C; // int32_t
    public const nint m_bHasBeenAwakened = 0xBA0; // bool
    public const nint m_bIsOverrideProp = 0xBA1; // bool
    public const nint m_fNextCheckDisableMotionContactsTime = 0xBA4; // GameTime_t
    public const nint m_iInitialGlowState = 0xBA8; // int32_t
    public const nint m_nGlowRange = 0xBAC; // int32_t
    public const nint m_nGlowRangeMin = 0xBB0; // int32_t
    public const nint m_glowColor = 0xBB4; // Color
    public const nint m_bForceNavIgnore = 0xBB8; // bool
    public const nint m_bNoNavmeshBlocker = 0xBB9; // bool
    public const nint m_bForceNpcExclude = 0xBBA; // bool
    public const nint m_bShouldAutoConvertBackFromDebris = 0xBBB; // bool
    public const nint m_bMuteImpactEffects = 0xBBC; // bool
    public const nint m_bAcceptDamageFromHeldObjects = 0xBC4; // bool
    public const nint m_bEnableUseOutput = 0xBC5; // bool
    public const nint m_bAwake = 0xBC6; // bool
    public const nint m_nCollisionGroupOverride = 0xBC8; // int32_t
}

public static class CPhysicsPropMultiplayer { // CPhysicsProp
}

public static class CPhysicsPropOverride { // CPhysicsProp
}

public static class CPhysicsPropRespawnable { // CPhysicsProp
    public const nint m_vOriginalSpawnOrigin = 0xBD0; // Vector
    public const nint m_vOriginalSpawnAngles = 0xBDC; // QAngle
    public const nint m_vOriginalMins = 0xBE8; // Vector
    public const nint m_vOriginalMaxs = 0xBF4; // Vector
    public const nint m_flRespawnDuration = 0xC00; // float
}

public static class CPhysicsShake {
    public const nint m_force = 0x8; // Vector
}

public static class CPhysicsSpring { // CBaseEntity
    public const nint m_flFrequency = 0x4C8; // float
    public const nint m_flDampingRatio = 0x4CC; // float
    public const nint m_flRestLength = 0x4D0; // float
    public const nint m_nameAttachStart = 0x4D8; // CUtlSymbolLarge
    public const nint m_nameAttachEnd = 0x4E0; // CUtlSymbolLarge
    public const nint m_start = 0x4E8; // Vector
    public const nint m_end = 0x4F4; // Vector
    public const nint m_teleportTick = 0x500; // uint32_t
}

public static class CPhysicsWire { // CBaseEntity
    public const nint m_nDensity = 0x4C0; // int32_t
}

public static class CPlantedC4 { // CBaseAnimGraph
    public const nint m_bBombTicking = 0x8E8; // bool
    public const nint m_flC4Blow = 0x8EC; // GameTime_t
    public const nint m_nBombSite = 0x8F0; // int32_t
    public const nint m_nSourceSoundscapeHash = 0x8F4; // int32_t
    public const nint m_OnBombDefused = 0x8F8; // CEntityIOOutput
    public const nint m_OnBombBeginDefuse = 0x920; // CEntityIOOutput
    public const nint m_OnBombDefuseAborted = 0x948; // CEntityIOOutput
    public const nint m_bCannotBeDefused = 0x970; // bool
    public const nint m_entitySpottedState = 0x978; // EntitySpottedState_t
    public const nint m_nSpotRules = 0x990; // int32_t
    public const nint m_bTrainingPlacedByPlayer = 0x994; // bool
    public const nint m_bHasExploded = 0x995; // bool
    public const nint m_flTimerLength = 0x998; // float
    public const nint m_bBeingDefused = 0x99C; // bool
    public const nint m_fLastDefuseTime = 0x9A4; // GameTime_t
    public const nint m_flDefuseLength = 0x9AC; // float
    public const nint m_flDefuseCountDown = 0x9B0; // GameTime_t
    public const nint m_bBombDefused = 0x9B4; // bool
    public const nint m_hBombDefuser = 0x9B8; // CHandle<CCSPlayerPawn>
    public const nint m_hControlPanel = 0x9BC; // CHandle<CBaseEntity>
    public const nint m_iProgressBarTime = 0x9C0; // int32_t
    public const nint m_bVoiceAlertFired = 0x9C4; // bool
    public const nint m_bVoiceAlertPlayed = 0x9C5; // bool[4]
    public const nint m_flNextBotBeepTime = 0x9CC; // GameTime_t
    public const nint m_angCatchUpToPlayerEye = 0x9D4; // QAngle
    public const nint m_flLastSpinDetectionTime = 0x9E0; // GameTime_t
}

public static class CPlatTrigger { // CBaseModelEntity
    public const nint m_pPlatform = 0x710; // CHandle<CFuncPlat>
}

public static class CPlayerControllerComponent {
    public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
}

public static class CPlayerPawnComponent {
    public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
}

public static class CPlayerPing { // CBaseEntity
    public const nint m_hPlayer = 0x4C8; // CHandle<CCSPlayerPawn>
    public const nint m_hPingedEntity = 0x4CC; // CHandle<CBaseEntity>
    public const nint m_iType = 0x4D0; // int32_t
    public const nint m_bUrgent = 0x4D4; // bool
    public const nint m_szPlaceName = 0x4D5; // char[18]
}

public static class CPlayerSprayDecal { // CModelPointEntity
    public const nint m_nUniqueID = 0x710; // int32_t
    public const nint m_unAccountID = 0x714; // uint32_t
    public const nint m_unTraceID = 0x718; // uint32_t
    public const nint m_rtGcTime = 0x71C; // uint32_t
    public const nint m_vecEndPos = 0x720; // Vector
    public const nint m_vecStart = 0x72C; // Vector
    public const nint m_vecLeft = 0x738; // Vector
    public const nint m_vecNormal = 0x744; // Vector
    public const nint m_nPlayer = 0x750; // int32_t
    public const nint m_nEntity = 0x754; // int32_t
    public const nint m_nHitbox = 0x758; // int32_t
    public const nint m_flCreationTime = 0x75C; // float
    public const nint m_nTintID = 0x760; // int32_t
    public const nint m_nVersion = 0x764; // uint8_t
    public const nint m_ubSignature = 0x765; // uint8_t[128]
}

public static class CPlayerVisibility { // CBaseEntity
    public const nint m_flVisibilityStrength = 0x4C0; // float
    public const nint m_flFogDistanceMultiplier = 0x4C4; // float
    public const nint m_flFogMaxDensityMultiplier = 0x4C8; // float
    public const nint m_flFadeTime = 0x4CC; // float
    public const nint m_bStartDisabled = 0x4D0; // bool
    public const nint m_bIsEnabled = 0x4D1; // bool
}

public static class CPlayer_AutoaimServices { // CPlayerPawnComponent
}

public static class CPlayer_CameraServices { // CPlayerPawnComponent
    public const nint m_vecCsViewPunchAngle = 0x40; // QAngle
    public const nint m_nCsViewPunchAngleTick = 0x4C; // GameTick_t
    public const nint m_flCsViewPunchAngleTickRatio = 0x50; // float
    public const nint m_PlayerFog = 0x58; // fogplayerparams_t
    public const nint m_hColorCorrectionCtrl = 0x98; // CHandle<CColorCorrection>
    public const nint m_hViewEntity = 0x9C; // CHandle<CBaseEntity>
    public const nint m_hTonemapController = 0xA0; // CHandle<CTonemapController2>
    public const nint m_audio = 0xA8; // audioparams_t
    public const nint m_PostProcessingVolumes = 0x120; // CNetworkUtlVectorBase<CHandle<CPostProcessingVolume>>
    public const nint m_flOldPlayerZ = 0x138; // float
    public const nint m_flOldPlayerViewOffsetZ = 0x13C; // float
    public const nint m_hTriggerSoundscapeList = 0x158; // CUtlVector<CHandle<CEnvSoundscapeTriggerable>>
}

public static class CPlayer_FlashlightServices { // CPlayerPawnComponent
}

public static class CPlayer_ItemServices { // CPlayerPawnComponent
}

public static class CPlayer_MovementServices { // CPlayerPawnComponent
    public const nint m_nImpulse = 0x40; // int32_t
    public const nint m_nButtons = 0x48; // CInButtonState
    public const nint m_nQueuedButtonDownMask = 0x68; // uint64_t
    public const nint m_nQueuedButtonChangeMask = 0x70; // uint64_t
    public const nint m_nButtonDoublePressed = 0x78; // uint64_t
    public const nint m_pButtonPressedCmdNumber = 0x80; // uint32_t[64]
    public const nint m_nLastCommandNumberProcessed = 0x180; // uint32_t
    public const nint m_nToggleButtonDownMask = 0x188; // uint64_t
    public const nint m_flMaxspeed = 0x198; // float
    public const nint m_arrForceSubtickMoveWhen = 0x19C; // float[4]
    public const nint m_flForwardMove = 0x1AC; // float
    public const nint m_flLeftMove = 0x1B0; // float
    public const nint m_flUpMove = 0x1B4; // float
    public const nint m_vecLastMovementImpulses = 0x1B8; // Vector
    public const nint m_vecOldViewAngles = 0x1C4; // QAngle
}

public static class CPlayer_MovementServices_Humanoid { // CPlayer_MovementServices
    public const nint m_flStepSoundTime = 0x1D8; // float
    public const nint m_flFallVelocity = 0x1DC; // float
    public const nint m_bInCrouch = 0x1E0; // bool
    public const nint m_nCrouchState = 0x1E4; // uint32_t
    public const nint m_flCrouchTransitionStartTime = 0x1E8; // GameTime_t
    public const nint m_bDucked = 0x1EC; // bool
    public const nint m_bDucking = 0x1ED; // bool
    public const nint m_bInDuckJump = 0x1EE; // bool
    public const nint m_groundNormal = 0x1F0; // Vector
    public const nint m_flSurfaceFriction = 0x1FC; // float
    public const nint m_surfaceProps = 0x200; // CUtlStringToken
    public const nint m_nStepside = 0x210; // int32_t
    public const nint m_iTargetVolume = 0x214; // int32_t
    public const nint m_vecSmoothedVelocity = 0x218; // Vector
}

public static class CPlayer_ObserverServices { // CPlayerPawnComponent
    public const nint m_iObserverMode = 0x40; // uint8_t
    public const nint m_hObserverTarget = 0x44; // CHandle<CBaseEntity>
    public const nint m_iObserverLastMode = 0x48; // ObserverMode_t
    public const nint m_bForcedObserverMode = 0x4C; // bool
}

public static class CPlayer_UseServices { // CPlayerPawnComponent
}

public static class CPlayer_ViewModelServices { // CPlayerPawnComponent
}

public static class CPlayer_WaterServices { // CPlayerPawnComponent
}

public static class CPlayer_WeaponServices { // CPlayerPawnComponent
    public const nint m_hMyWeapons = 0x40; // CNetworkUtlVectorBase<CHandle<CBasePlayerWeapon>>
    public const nint m_hActiveWeapon = 0x58; // CHandle<CBasePlayerWeapon>
    public const nint m_hLastWeapon = 0x5C; // CHandle<CBasePlayerWeapon>
    public const nint m_iAmmo = 0x60; // uint16_t[32]
    public const nint m_bPreventWeaponPickup = 0xA0; // bool
}

public static class CPointAngleSensor { // CPointEntity
    public const nint m_bDisabled = 0x4C0; // bool
    public const nint m_nLookAtName = 0x4C8; // CUtlSymbolLarge
    public const nint m_hTargetEntity = 0x4D0; // CHandle<CBaseEntity>
    public const nint m_hLookAtEntity = 0x4D4; // CHandle<CBaseEntity>
    public const nint m_flDuration = 0x4D8; // float
    public const nint m_flDotTolerance = 0x4DC; // float
    public const nint m_flFacingTime = 0x4E0; // GameTime_t
    public const nint m_bFired = 0x4E4; // bool
    public const nint m_OnFacingLookat = 0x4E8; // CEntityIOOutput
    public const nint m_OnNotFacingLookat = 0x510; // CEntityIOOutput
    public const nint m_TargetDir = 0x538; // CEntityOutputTemplate<Vector>
    public const nint m_FacingPercentage = 0x560; // CEntityOutputTemplate<float>
}

public static class CPointAngularVelocitySensor { // CPointEntity
    public const nint m_hTargetEntity = 0x4C0; // CHandle<CBaseEntity>
    public const nint m_flThreshold = 0x4C4; // float
    public const nint m_nLastCompareResult = 0x4C8; // int32_t
    public const nint m_nLastFireResult = 0x4CC; // int32_t
    public const nint m_flFireTime = 0x4D0; // GameTime_t
    public const nint m_flFireInterval = 0x4D4; // float
    public const nint m_flLastAngVelocity = 0x4D8; // float
    public const nint m_lastOrientation = 0x4DC; // QAngle
    public const nint m_vecAxis = 0x4E8; // Vector
    public const nint m_bUseHelper = 0x4F4; // bool
    public const nint m_AngularVelocity = 0x4F8; // CEntityOutputTemplate<float>
    public const nint m_OnLessThan = 0x520; // CEntityIOOutput
    public const nint m_OnLessThanOrEqualTo = 0x548; // CEntityIOOutput
    public const nint m_OnGreaterThan = 0x570; // CEntityIOOutput
    public const nint m_OnGreaterThanOrEqualTo = 0x598; // CEntityIOOutput
    public const nint m_OnEqualTo = 0x5C0; // CEntityIOOutput
}

public static class CPointBroadcastClientCommand { // CPointEntity
}

public static class CPointCamera { // CBaseEntity
    public const nint m_FOV = 0x4C0; // float
    public const nint m_Resolution = 0x4C4; // float
    public const nint m_bFogEnable = 0x4C8; // bool
    public const nint m_FogColor = 0x4C9; // Color
    public const nint m_flFogStart = 0x4D0; // float
    public const nint m_flFogEnd = 0x4D4; // float
    public const nint m_flFogMaxDensity = 0x4D8; // float
    public const nint m_bActive = 0x4DC; // bool
    public const nint m_bUseScreenAspectRatio = 0x4DD; // bool
    public const nint m_flAspectRatio = 0x4E0; // float
    public const nint m_bNoSky = 0x4E4; // bool
    public const nint m_fBrightness = 0x4E8; // float
    public const nint m_flZFar = 0x4EC; // float
    public const nint m_flZNear = 0x4F0; // float
    public const nint m_bCanHLTVUse = 0x4F4; // bool
    public const nint m_bDofEnabled = 0x4F5; // bool
    public const nint m_flDofNearBlurry = 0x4F8; // float
    public const nint m_flDofNearCrisp = 0x4FC; // float
    public const nint m_flDofFarCrisp = 0x500; // float
    public const nint m_flDofFarBlurry = 0x504; // float
    public const nint m_flDofTiltToGround = 0x508; // float
    public const nint m_TargetFOV = 0x50C; // float
    public const nint m_DegreesPerSecond = 0x510; // float
    public const nint m_bIsOn = 0x514; // bool
    public const nint m_pNext = 0x518; // CPointCamera*
}

public static class CPointCameraVFOV { // CPointCamera
    public const nint m_flVerticalFOV = 0x520; // float
}

public static class CPointClientCommand { // CPointEntity
}

public static class CPointClientUIDialog { // CBaseClientUIEntity
    public const nint m_hActivator = 0x8C0; // CHandle<CBaseEntity>
    public const nint m_bStartEnabled = 0x8C4; // bool
}

public static class CPointClientUIWorldPanel { // CBaseClientUIEntity
    public const nint m_bIgnoreInput = 0x8C0; // bool
    public const nint m_bLit = 0x8C1; // bool
    public const nint m_bFollowPlayerAcrossTeleport = 0x8C2; // bool
    public const nint m_flWidth = 0x8C4; // float
    public const nint m_flHeight = 0x8C8; // float
    public const nint m_flDPI = 0x8CC; // float
    public const nint m_flInteractDistance = 0x8D0; // float
    public const nint m_flDepthOffset = 0x8D4; // float
    public const nint m_unOwnerContext = 0x8D8; // uint32_t
    public const nint m_unHorizontalAlign = 0x8DC; // uint32_t
    public const nint m_unVerticalAlign = 0x8E0; // uint32_t
    public const nint m_unOrientation = 0x8E4; // uint32_t
    public const nint m_bAllowInteractionFromAllSceneWorlds = 0x8E8; // bool
    public const nint m_vecCSSClasses = 0x8F0; // CNetworkUtlVectorBase<CUtlSymbolLarge>
    public const nint m_bOpaque = 0x908; // bool
    public const nint m_bNoDepth = 0x909; // bool
    public const nint m_bRenderBackface = 0x90A; // bool
    public const nint m_bUseOffScreenIndicator = 0x90B; // bool
    public const nint m_bExcludeFromSaveGames = 0x90C; // bool
    public const nint m_bGrabbable = 0x90D; // bool
    public const nint m_bOnlyRenderToTexture = 0x90E; // bool
    public const nint m_bDisableMipGen = 0x90F; // bool
    public const nint m_nExplicitImageLayout = 0x910; // int32_t
}

public static class CPointClientUIWorldTextPanel { // CPointClientUIWorldPanel
    public const nint m_messageText = 0x918; // char[512]
}

public static class CPointCommentaryNode { // CBaseAnimGraph
    public const nint m_iszPreCommands = 0x8E8; // CUtlSymbolLarge
    public const nint m_iszPostCommands = 0x8F0; // CUtlSymbolLarge
    public const nint m_iszCommentaryFile = 0x8F8; // CUtlSymbolLarge
    public const nint m_iszViewTarget = 0x900; // CUtlSymbolLarge
    public const nint m_hViewTarget = 0x908; // CHandle<CBaseEntity>
    public const nint m_hViewTargetAngles = 0x90C; // CHandle<CBaseEntity>
    public const nint m_iszViewPosition = 0x910; // CUtlSymbolLarge
    public const nint m_hViewPosition = 0x918; // CHandle<CBaseEntity>
    public const nint m_hViewPositionMover = 0x91C; // CHandle<CBaseEntity>
    public const nint m_bPreventMovement = 0x920; // bool
    public const nint m_bUnderCrosshair = 0x921; // bool
    public const nint m_bUnstoppable = 0x922; // bool
    public const nint m_flFinishedTime = 0x924; // GameTime_t
    public const nint m_vecFinishOrigin = 0x928; // Vector
    public const nint m_vecOriginalAngles = 0x934; // QAngle
    public const nint m_vecFinishAngles = 0x940; // QAngle
    public const nint m_bPreventChangesWhileMoving = 0x94C; // bool
    public const nint m_bDisabled = 0x94D; // bool
    public const nint m_vecTeleportOrigin = 0x950; // Vector
    public const nint m_flAbortedPlaybackAt = 0x95C; // GameTime_t
    public const nint m_pOnCommentaryStarted = 0x960; // CEntityIOOutput
    public const nint m_pOnCommentaryStopped = 0x988; // CEntityIOOutput
    public const nint m_bActive = 0x9B0; // bool
    public const nint m_flStartTime = 0x9B4; // GameTime_t
    public const nint m_flStartTimeInCommentary = 0x9B8; // float
    public const nint m_iszTitle = 0x9C0; // CUtlSymbolLarge
    public const nint m_iszSpeakers = 0x9C8; // CUtlSymbolLarge
    public const nint m_iNodeNumber = 0x9D0; // int32_t
    public const nint m_iNodeNumberMax = 0x9D4; // int32_t
    public const nint m_bListenedTo = 0x9D8; // bool
}

public static class CPointEntity { // CBaseEntity
}

public static class CPointEntityFinder { // CBaseEntity
    public const nint m_hEntity = 0x4C0; // CHandle<CBaseEntity>
    public const nint m_iFilterName = 0x4C8; // CUtlSymbolLarge
    public const nint m_hFilter = 0x4D0; // CHandle<CBaseFilter>
    public const nint m_iRefName = 0x4D8; // CUtlSymbolLarge
    public const nint m_hReference = 0x4E0; // CHandle<CBaseEntity>
    public const nint m_FindMethod = 0x4E4; // EntFinderMethod_t
    public const nint m_OnFoundEntity = 0x4E8; // CEntityIOOutput
}

public static class CPointGamestatsCounter { // CPointEntity
    public const nint m_strStatisticName = 0x4C0; // CUtlSymbolLarge
    public const nint m_bDisabled = 0x4C8; // bool
}

public static class CPointGiveAmmo { // CPointEntity
    public const nint m_pActivator = 0x4C0; // CHandle<CBaseEntity>
}

public static class CPointHurt { // CPointEntity
    public const nint m_nDamage = 0x4C0; // int32_t
    public const nint m_bitsDamageType = 0x4C4; // int32_t
    public const nint m_flRadius = 0x4C8; // float
    public const nint m_flDelay = 0x4CC; // float
    public const nint m_strTarget = 0x4D0; // CUtlSymbolLarge
    public const nint m_pActivator = 0x4D8; // CHandle<CBaseEntity>
}

public static class CPointPrefab { // CServerOnlyPointEntity
    public const nint m_targetMapName = 0x4C0; // CUtlSymbolLarge
    public const nint m_forceWorldGroupID = 0x4C8; // CUtlSymbolLarge
    public const nint m_associatedRelayTargetName = 0x4D0; // CUtlSymbolLarge
    public const nint m_fixupNames = 0x4D8; // bool
    public const nint m_bLoadDynamic = 0x4D9; // bool
    public const nint m_associatedRelayEntity = 0x4DC; // CHandle<CPointPrefab>
}

public static class CPointProximitySensor { // CPointEntity
    public const nint m_bDisabled = 0x4C0; // bool
    public const nint m_hTargetEntity = 0x4C4; // CHandle<CBaseEntity>
    public const nint m_Distance = 0x4C8; // CEntityOutputTemplate<float>
}

public static class CPointPulse { // CBaseEntity
}

public static class CPointPush { // CPointEntity
    public const nint m_bEnabled = 0x4C0; // bool
    public const nint m_flMagnitude = 0x4C4; // float
    public const nint m_flRadius = 0x4C8; // float
    public const nint m_flInnerRadius = 0x4CC; // float
    public const nint m_flConeOfInfluence = 0x4D0; // float
    public const nint m_iszFilterName = 0x4D8; // CUtlSymbolLarge
    public const nint m_hFilter = 0x4E0; // CHandle<CBaseFilter>
}

public static class CPointScriptEntity { // CBaseEntity
}

public static class CPointServerCommand { // CPointEntity
}

public static class CPointTeleport { // CServerOnlyPointEntity
    public const nint m_vSaveOrigin = 0x4C0; // Vector
    public const nint m_vSaveAngles = 0x4CC; // QAngle
    public const nint m_bTeleportParentedEntities = 0x4D8; // bool
    public const nint m_bTeleportUseCurrentAngle = 0x4D9; // bool
}

public static class CPointTemplate { // CLogicalEntity
    public const nint m_iszWorldName = 0x4C0; // CUtlSymbolLarge
    public const nint m_iszSource2EntityLumpName = 0x4C8; // CUtlSymbolLarge
    public const nint m_iszEntityFilterName = 0x4D0; // CUtlSymbolLarge
    public const nint m_flTimeoutInterval = 0x4D8; // float
    public const nint m_bAsynchronouslySpawnEntities = 0x4DC; // bool
    public const nint m_pOutputOnSpawned = 0x4E0; // CEntityIOOutput
    public const nint m_clientOnlyEntityBehavior = 0x508; // PointTemplateClientOnlyEntityBehavior_t
    public const nint m_ownerSpawnGroupType = 0x50C; // PointTemplateOwnerSpawnGroupType_t
    public const nint m_createdSpawnGroupHandles = 0x510; // CUtlVector<uint32_t>
    public const nint m_SpawnedEntityHandles = 0x528; // CUtlVector<CEntityHandle>
    public const nint m_ScriptSpawnCallback = 0x540; // HSCRIPT
    public const nint m_ScriptCallbackScope = 0x548; // HSCRIPT
}

public static class CPointValueRemapper { // CBaseEntity
    public const nint m_bDisabled = 0x4C0; // bool
    public const nint m_bUpdateOnClient = 0x4C1; // bool
    public const nint m_nInputType = 0x4C4; // ValueRemapperInputType_t
    public const nint m_iszRemapLineStartName = 0x4C8; // CUtlSymbolLarge
    public const nint m_iszRemapLineEndName = 0x4D0; // CUtlSymbolLarge
    public const nint m_hRemapLineStart = 0x4D8; // CHandle<CBaseEntity>
    public const nint m_hRemapLineEnd = 0x4DC; // CHandle<CBaseEntity>
    public const nint m_flMaximumChangePerSecond = 0x4E0; // float
    public const nint m_flDisengageDistance = 0x4E4; // float
    public const nint m_flEngageDistance = 0x4E8; // float
    public const nint m_bRequiresUseKey = 0x4EC; // bool
    public const nint m_nOutputType = 0x4F0; // ValueRemapperOutputType_t
    public const nint m_iszOutputEntityName = 0x4F8; // CUtlSymbolLarge
    public const nint m_iszOutputEntity2Name = 0x500; // CUtlSymbolLarge
    public const nint m_iszOutputEntity3Name = 0x508; // CUtlSymbolLarge
    public const nint m_iszOutputEntity4Name = 0x510; // CUtlSymbolLarge
    public const nint m_hOutputEntities = 0x518; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
    public const nint m_nHapticsType = 0x530; // ValueRemapperHapticsType_t
    public const nint m_nMomentumType = 0x534; // ValueRemapperMomentumType_t
    public const nint m_flMomentumModifier = 0x538; // float
    public const nint m_flSnapValue = 0x53C; // float
    public const nint m_flCurrentMomentum = 0x540; // float
    public const nint m_nRatchetType = 0x544; // ValueRemapperRatchetType_t
    public const nint m_flRatchetOffset = 0x548; // float
    public const nint m_flInputOffset = 0x54C; // float
    public const nint m_bEngaged = 0x550; // bool
    public const nint m_bFirstUpdate = 0x551; // bool
    public const nint m_flPreviousValue = 0x554; // float
    public const nint m_flPreviousUpdateTickTime = 0x558; // GameTime_t
    public const nint m_vecPreviousTestPoint = 0x55C; // Vector
    public const nint m_hUsingPlayer = 0x568; // CHandle<CBasePlayerPawn>
    public const nint m_flCustomOutputValue = 0x56C; // float
    public const nint m_iszSoundEngage = 0x570; // CUtlSymbolLarge
    public const nint m_iszSoundDisengage = 0x578; // CUtlSymbolLarge
    public const nint m_iszSoundReachedValueZero = 0x580; // CUtlSymbolLarge
    public const nint m_iszSoundReachedValueOne = 0x588; // CUtlSymbolLarge
    public const nint m_iszSoundMovingLoop = 0x590; // CUtlSymbolLarge
    public const nint m_Position = 0x5A0; // CEntityOutputTemplate<float>
    public const nint m_PositionDelta = 0x5C8; // CEntityOutputTemplate<float>
    public const nint m_OnReachedValueZero = 0x5F0; // CEntityIOOutput
    public const nint m_OnReachedValueOne = 0x618; // CEntityIOOutput
    public const nint m_OnReachedValueCustom = 0x640; // CEntityIOOutput
    public const nint m_OnEngage = 0x668; // CEntityIOOutput
    public const nint m_OnDisengage = 0x690; // CEntityIOOutput
}

public static class CPointVelocitySensor { // CPointEntity
    public const nint m_hTargetEntity = 0x4C0; // CHandle<CBaseEntity>
    public const nint m_vecAxis = 0x4C4; // Vector
    public const nint m_bEnabled = 0x4D0; // bool
    public const nint m_fPrevVelocity = 0x4D4; // float
    public const nint m_flAvgInterval = 0x4D8; // float
    public const nint m_Velocity = 0x4E0; // CEntityOutputTemplate<float>
}

public static class CPointWorldText { // CModelPointEntity
    public const nint m_messageText = 0x710; // char[512]
    public const nint m_FontName = 0x910; // char[64]
    public const nint m_bEnabled = 0x950; // bool
    public const nint m_bFullbright = 0x951; // bool
    public const nint m_flWorldUnitsPerPx = 0x954; // float
    public const nint m_flFontSize = 0x958; // float
    public const nint m_flDepthOffset = 0x95C; // float
    public const nint m_Color = 0x960; // Color
    public const nint m_nJustifyHorizontal = 0x964; // PointWorldTextJustifyHorizontal_t
    public const nint m_nJustifyVertical = 0x968; // PointWorldTextJustifyVertical_t
    public const nint m_nReorientMode = 0x96C; // PointWorldTextReorientMode_t
}

public static class CPostProcessingVolume { // CBaseTrigger
    public const nint m_hPostSettings = 0x8C8; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
    public const nint m_flFadeDuration = 0x8D0; // float
    public const nint m_flMinLogExposure = 0x8D4; // float
    public const nint m_flMaxLogExposure = 0x8D8; // float
    public const nint m_flMinExposure = 0x8DC; // float
    public const nint m_flMaxExposure = 0x8E0; // float
    public const nint m_flExposureCompensation = 0x8E4; // float
    public const nint m_flExposureFadeSpeedUp = 0x8E8; // float
    public const nint m_flExposureFadeSpeedDown = 0x8EC; // float
    public const nint m_flTonemapEVSmoothingRange = 0x8F0; // float
    public const nint m_bMaster = 0x8F4; // bool
    public const nint m_bExposureControl = 0x8F5; // bool
    public const nint m_flRate = 0x8F8; // float
    public const nint m_flTonemapPercentTarget = 0x8FC; // float
    public const nint m_flTonemapPercentBrightPixels = 0x900; // float
    public const nint m_flTonemapMinAvgLum = 0x904; // float
}

public static class CPrecipitation { // CBaseTrigger
}

public static class CPrecipitationBlocker { // CBaseModelEntity
}

public static class CPrecipitationVData { // CEntitySubclassVDataBase
    public const nint m_szParticlePrecipitationEffect = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    public const nint m_flInnerDistance = 0x108; // float
    public const nint m_nAttachType = 0x10C; // ParticleAttachment_t
    public const nint m_bBatchSameVolumeType = 0x110; // bool
    public const nint m_nRTEnvCP = 0x114; // int32_t
    public const nint m_nRTEnvCPComponent = 0x118; // int32_t
    public const nint m_szModifier = 0x120; // CUtlString
}

public static class CPredictedViewModel { // CBaseViewModel
}

public static class CProjectedDecal { // CPointEntity
    public const nint m_nTexture = 0x4C0; // int32_t
    public const nint m_flDistance = 0x4C4; // float
}

public static class CPropDoorRotating { // CBasePropDoor
    public const nint m_vecAxis = 0xDF0; // Vector
    public const nint m_flDistance = 0xDFC; // float
    public const nint m_eSpawnPosition = 0xE00; // PropDoorRotatingSpawnPos_t
    public const nint m_eOpenDirection = 0xE04; // PropDoorRotatingOpenDirection_e
    public const nint m_eCurrentOpenDirection = 0xE08; // PropDoorRotatingOpenDirection_e
    public const nint m_flAjarAngle = 0xE0C; // float
    public const nint m_angRotationAjarDeprecated = 0xE10; // QAngle
    public const nint m_angRotationClosed = 0xE1C; // QAngle
    public const nint m_angRotationOpenForward = 0xE28; // QAngle
    public const nint m_angRotationOpenBack = 0xE34; // QAngle
    public const nint m_angGoal = 0xE40; // QAngle
    public const nint m_vecForwardBoundsMin = 0xE4C; // Vector
    public const nint m_vecForwardBoundsMax = 0xE58; // Vector
    public const nint m_vecBackBoundsMin = 0xE64; // Vector
    public const nint m_vecBackBoundsMax = 0xE70; // Vector
    public const nint m_bAjarDoorShouldntAlwaysOpen = 0xE7C; // bool
    public const nint m_hEntityBlocker = 0xE80; // CHandle<CEntityBlocker>
}

public static class CPropDoorRotatingBreakable { // CPropDoorRotating
    public const nint m_bBreakable = 0xE88; // bool
    public const nint m_isAbleToCloseAreaPortals = 0xE89; // bool
    public const nint m_currentDamageState = 0xE8C; // int32_t
    public const nint m_damageStates = 0xE90; // CUtlVector<CUtlSymbolLarge>
}

public static class CPulseCell_Inflow_GameEvent { // CPulseCell_Inflow_BaseEntrypoint
    public const nint m_EventName = 0x70; // CBufferString
}

public static class CPulseCell_Outflow_PlaySceneBase { // CPulseCell_BaseYieldingInflow
    public const nint m_OnFinished = 0x48; // CPulse_ResumePoint
    public const nint m_OnCanceled = 0x58; // CPulse_ResumePoint
    public const nint m_Triggers = 0x68; // CUtlVector<CPulse_OutflowConnection>
}

public static class CPulseCell_Outflow_PlaySceneBase_CursorState_t {
    public const nint m_sceneInstance = 0x0; // CHandle<CBaseEntity>
}

public static class CPulseCell_Outflow_PlaySequence { // CPulseCell_Outflow_PlaySceneBase
    public const nint m_ParamSequenceName = 0x80; // CUtlString
}

public static class CPulseCell_Outflow_PlayVCD { // CPulseCell_Outflow_PlaySceneBase
    public const nint m_vcdFilename = 0x80; // CUtlString
}

public static class CPulseCell_Outflow_ScriptedSequence { // CPulseCell_BaseYieldingInflow
    public const nint m_scriptedSequenceDataMain = 0x48; // PulseScriptedSequenceData_t
    public const nint m_vecAdditionalActors = 0x78; // CUtlVector<PulseScriptedSequenceData_t>
    public const nint m_OnFinished = 0x90; // CPulse_ResumePoint
    public const nint m_OnCanceled = 0xA0; // CPulse_ResumePoint
    public const nint m_Triggers = 0xB0; // CUtlVector<CPulse_OutflowConnection>
}

public static class CPulseCell_Outflow_ScriptedSequence_CursorState_t {
    public const nint m_scriptedSequence = 0x0; // CHandle<CBaseEntity>
}

public static class CPulseCell_SoundEventStart { // CPulseCell_BaseFlow
    public const nint m_Type = 0x48; // SoundEventStartType_t
}

public static class CPulseCell_Step_EntFire { // CPulseCell_BaseFlow
    public const nint m_Input = 0x48; // CUtlString
}

public static class CPulseCell_Step_FollowEntity { // CPulseCell_BaseFlow
    public const nint m_ParamBoneOrAttachName = 0x48; // CUtlString
    public const nint m_ParamBoneOrAttachNameChild = 0x50; // CUtlString
}

public static class CPulseCell_Value_FindEntByClassNameWithin { // CPulseCell_BaseValue
    public const nint m_EntityType = 0x48; // CUtlString
}

public static class CPulseCell_Value_FindEntByName { // CPulseCell_BaseValue
    public const nint m_EntityType = 0x48; // CUtlString
}

public static class CPulseGraphComponentBase {
    public const nint m_hOwner = 0x8; // CHandle<CBaseEntity>
    public const nint m_sNameFixupStaticPrefix = 0x10; // CUtlSymbolLarge
    public const nint m_sNameFixupParent = 0x18; // CUtlSymbolLarge
    public const nint m_sNameFixupLocal = 0x20; // CUtlSymbolLarge
}

public static class CPulseGraphComponentPointServer { // CPulseGraphComponentBase
}

public static class CPulseGraphInstance_ServerEntity { // CBasePulseGraphInstance
    public const nint m_pComponent = 0xD8; // CPulseGraphComponentBase*
}

public static class CPulseGraphInstance_ServerPointEntity { // CPulseGraphInstance_ServerEntity
}

public static class CPulseServerCursor { // CPulseExecCursor
}

public static class CPulseServerFuncs {
}

public static class CPulseServerFuncs_Sounds {
}

public static class CPushable { // CBreakable
}

public static class CRR_Response {
    public const nint m_Type = 0x0; // uint8_t
    public const nint m_szResponseName = 0x1; // char[192]
    public const nint m_szMatchingRule = 0xC1; // char[128]
    public const nint m_Params = 0x148; // ResponseParams
    public const nint m_fMatchScore = 0x168; // float
    public const nint m_szSpeakerContext = 0x170; // char*
    public const nint m_szWorldContext = 0x178; // char*
    public const nint m_Followup = 0x180; // ResponseFollowup
    public const nint m_pchCriteriaNames = 0x1B8; // CUtlVector<CUtlSymbol>
    public const nint m_pchCriteriaValues = 0x1D0; // CUtlVector<char*>
}

public static class CRagdollConstraint { // CPhysConstraint
    public const nint m_xmin = 0x518; // float
    public const nint m_xmax = 0x51C; // float
    public const nint m_ymin = 0x520; // float
    public const nint m_ymax = 0x524; // float
    public const nint m_zmin = 0x528; // float
    public const nint m_zmax = 0x52C; // float
    public const nint m_xfriction = 0x530; // float
    public const nint m_yfriction = 0x534; // float
    public const nint m_zfriction = 0x538; // float
}

public static class CRagdollMagnet { // CPointEntity
    public const nint m_bDisabled = 0x4C0; // bool
    public const nint m_radius = 0x4C4; // float
    public const nint m_force = 0x4C8; // float
    public const nint m_axis = 0x4CC; // Vector
}

public static class CRagdollManager { // CBaseEntity
    public const nint m_iCurrentMaxRagdollCount = 0x4C0; // int8_t
    public const nint m_iMaxRagdollCount = 0x4C4; // int32_t
    public const nint m_bSaveImportant = 0x4C8; // bool
}

public static class CRagdollProp { // CBaseAnimGraph
    public const nint m_ragdoll = 0x8F0; // ragdoll_t
    public const nint m_bStartDisabled = 0x928; // bool
    public const nint m_ragPos = 0x930; // CNetworkUtlVectorBase<Vector>
    public const nint m_ragAngles = 0x948; // CNetworkUtlVectorBase<QAngle>
    public const nint m_hRagdollSource = 0x960; // CHandle<CBaseEntity>
    public const nint m_lastUpdateTickCount = 0x964; // uint32_t
    public const nint m_allAsleep = 0x968; // bool
    public const nint m_bFirstCollisionAfterLaunch = 0x969; // bool
    public const nint m_hDamageEntity = 0x96C; // CHandle<CBaseEntity>
    public const nint m_hKiller = 0x970; // CHandle<CBaseEntity>
    public const nint m_hPhysicsAttacker = 0x974; // CHandle<CBasePlayerPawn>
    public const nint m_flLastPhysicsInfluenceTime = 0x978; // GameTime_t
    public const nint m_flFadeOutStartTime = 0x97C; // GameTime_t
    public const nint m_flFadeTime = 0x980; // float
    public const nint m_vecLastOrigin = 0x984; // Vector
    public const nint m_flAwakeTime = 0x990; // GameTime_t
    public const nint m_flLastOriginChangeTime = 0x994; // GameTime_t
    public const nint m_nBloodColor = 0x998; // int32_t
    public const nint m_strOriginClassName = 0x9A0; // CUtlSymbolLarge
    public const nint m_strSourceClassName = 0x9A8; // CUtlSymbolLarge
    public const nint m_bHasBeenPhysgunned = 0x9B0; // bool
    public const nint m_bShouldTeleportPhysics = 0x9B1; // bool
    public const nint m_flBlendWeight = 0x9B4; // float
    public const nint m_flDefaultFadeScale = 0x9B8; // float
    public const nint m_ragdollMins = 0x9C0; // CUtlVector<Vector>
    public const nint m_ragdollMaxs = 0x9D8; // CUtlVector<Vector>
    public const nint m_bShouldDeleteActivationRecord = 0x9F0; // bool
    public const nint m_bValidatePoweredRagdollPose = 0xA50; // bool
}

public static class CRagdollPropAlias_physics_prop_ragdoll { // CRagdollProp
}

public static class CRagdollPropAttached { // CRagdollProp
    public const nint m_boneIndexAttached = 0xA90; // uint32_t
    public const nint m_ragdollAttachedObjectIndex = 0xA94; // uint32_t
    public const nint m_attachmentPointBoneSpace = 0xA98; // Vector
    public const nint m_attachmentPointRagdollSpace = 0xAA4; // Vector
    public const nint m_bShouldDetach = 0xAB0; // bool
    public const nint m_bShouldDeleteAttachedActivationRecord = 0xAC0; // bool
}

public static class CRandSimTimer { // CSimpleSimTimer
    public const nint m_minInterval = 0x8; // float
    public const nint m_maxInterval = 0xC; // float
}

public static class CRandStopwatch { // CStopwatchBase
    public const nint m_minInterval = 0xC; // float
    public const nint m_maxInterval = 0x10; // float
}

public static class CRangeFloat {
    public const nint m_pValue = 0x0; // float[2]
}

public static class CRangeInt {
    public const nint m_pValue = 0x0; // int32_t[2]
}

public static class CRectLight { // CBarnLight
    public const nint m_bShowLight = 0x938; // bool
}

public static class CRemapFloat {
    public const nint m_pValue = 0x0; // float[4]
}

public static class CRenderComponent { // CEntityComponent
    public const nint __m_pChainEntity = 0x10; // CNetworkVarChainer
    public const nint m_bIsRenderingWithViewModels = 0x50; // bool
    public const nint m_nSplitscreenFlags = 0x54; // uint32_t
    public const nint m_bEnableRendering = 0x60; // bool
    public const nint m_bInterpolationReadyToDraw = 0xB0; // bool
}

public static class CResponseCriteriaSet {
    public const nint m_nNumPrefixedContexts = 0x28; // int32_t
    public const nint m_bOverrideOnAppend = 0x2C; // bool
}

public static class CResponseQueue {
    public const nint m_ExpresserTargets = 0x48; // CUtlVector<CAI_Expresser*>
}

public static class CResponseQueue_CDeferredResponse {
    public const nint m_contexts = 0x8; // CResponseCriteriaSet
    public const nint m_fDispatchTime = 0x38; // float
    public const nint m_hIssuer = 0x3C; // CHandle<CBaseEntity>
    public const nint m_response = 0x48; // CRR_Response
    public const nint m_bResponseValid = 0x230; // bool
}

public static class CRetakeGameRules {
    public const nint m_nMatchSeed = 0xF8; // int32_t
    public const nint m_bBlockersPresent = 0xFC; // bool
    public const nint m_bRoundInProgress = 0xFD; // bool
    public const nint m_iFirstSecondHalfRound = 0x100; // int32_t
    public const nint m_iBombSite = 0x104; // int32_t
}

public static class CRevertSaved { // CModelPointEntity
    public const nint m_loadTime = 0x710; // float
    public const nint m_Duration = 0x714; // float
    public const nint m_HoldTime = 0x718; // float
}

public static class CRopeKeyframe { // CBaseModelEntity
    public const nint m_RopeFlags = 0x718; // uint16_t
    public const nint m_iNextLinkName = 0x720; // CUtlSymbolLarge
    public const nint m_Slack = 0x728; // int16_t
    public const nint m_Width = 0x72C; // float
    public const nint m_TextureScale = 0x730; // float
    public const nint m_nSegments = 0x734; // uint8_t
    public const nint m_bConstrainBetweenEndpoints = 0x735; // bool
    public const nint m_strRopeMaterialModel = 0x738; // CUtlSymbolLarge
    public const nint m_iRopeMaterialModelIndex = 0x740; // CStrongHandle<InfoForResourceTypeIMaterial2>
    public const nint m_Subdiv = 0x748; // uint8_t
    public const nint m_nChangeCount = 0x749; // uint8_t
    public const nint m_RopeLength = 0x74A; // int16_t
    public const nint m_fLockedPoints = 0x74C; // uint8_t
    public const nint m_bCreatedFromMapFile = 0x74D; // bool
    public const nint m_flScrollSpeed = 0x750; // float
    public const nint m_bStartPointValid = 0x754; // bool
    public const nint m_bEndPointValid = 0x755; // bool
    public const nint m_hStartPoint = 0x758; // CHandle<CBaseEntity>
    public const nint m_hEndPoint = 0x75C; // CHandle<CBaseEntity>
    public const nint m_iStartAttachment = 0x760; // AttachmentHandle_t
    public const nint m_iEndAttachment = 0x761; // AttachmentHandle_t
}

public static class CRopeKeyframeAlias_move_rope { // CRopeKeyframe
}

public static class CRopeOverlapHit {
    public const nint m_hEntity = 0x0; // CHandle<CBaseEntity>
    public const nint m_vecOverlappingLinks = 0x8; // CUtlVector<int32_t>
}

public static class CRotButton { // CBaseButton
}

public static class CRotDoor { // CBaseDoor
    public const nint m_bSolidBsp = 0x998; // bool
}

public static class CRuleBrushEntity { // CRuleEntity
}

public static class CRuleEntity { // CBaseModelEntity
    public const nint m_iszMaster = 0x710; // CUtlSymbolLarge
}

public static class CRulePointEntity { // CRuleEntity
    public const nint m_Score = 0x718; // int32_t
}

public static class CSAdditionalMatchStats_t { // CSAdditionalPerRoundStats_t
    public const nint m_numRoundsSurvived = 0x14; // int32_t
    public const nint m_maxNumRoundsSurvived = 0x18; // int32_t
    public const nint m_numRoundsSurvivedTotal = 0x1C; // int32_t
    public const nint m_iRoundsWonWithoutPurchase = 0x20; // int32_t
    public const nint m_iRoundsWonWithoutPurchaseTotal = 0x24; // int32_t
    public const nint m_numFirstKills = 0x28; // int32_t
    public const nint m_numClutchKills = 0x2C; // int32_t
    public const nint m_numPistolKills = 0x30; // int32_t
    public const nint m_numSniperKills = 0x34; // int32_t
    public const nint m_iNumSuicides = 0x38; // int32_t
    public const nint m_iNumTeamKills = 0x3C; // int32_t
    public const nint m_iTeamDamage = 0x40; // int32_t
}

public static class CSAdditionalPerRoundStats_t {
    public const nint m_numChickensKilled = 0x0; // int32_t
    public const nint m_killsWhileBlind = 0x4; // int32_t
    public const nint m_bombCarrierkills = 0x8; // int32_t
    public const nint m_iBurnDamageInflicted = 0xC; // int32_t
    public const nint m_iDinks = 0x10; // int32_t
}

public static class CSMatchStats_t { // CSPerRoundStats_t
    public const nint m_iEnemy5Ks = 0x68; // int32_t
    public const nint m_iEnemy4Ks = 0x6C; // int32_t
    public const nint m_iEnemy3Ks = 0x70; // int32_t
    public const nint m_iEnemyKnifeKills = 0x74; // int32_t
    public const nint m_iEnemyTaserKills = 0x78; // int32_t
    public const nint m_iEnemy2Ks = 0x7C; // int32_t
    public const nint m_iUtility_Count = 0x80; // int32_t
    public const nint m_iUtility_Successes = 0x84; // int32_t
    public const nint m_iUtility_Enemies = 0x88; // int32_t
    public const nint m_iFlash_Count = 0x8C; // int32_t
    public const nint m_iFlash_Successes = 0x90; // int32_t
    public const nint m_nHealthPointsRemovedTotal = 0x94; // int32_t
    public const nint m_nHealthPointsDealtTotal = 0x98; // int32_t
    public const nint m_nShotsFiredTotal = 0x9C; // int32_t
    public const nint m_nShotsOnTargetTotal = 0xA0; // int32_t
    public const nint m_i1v1Count = 0xA4; // int32_t
    public const nint m_i1v1Wins = 0xA8; // int32_t
    public const nint m_i1v2Count = 0xAC; // int32_t
    public const nint m_i1v2Wins = 0xB0; // int32_t
    public const nint m_iEntryCount = 0xB4; // int32_t
    public const nint m_iEntryWins = 0xB8; // int32_t
}

public static class CSPerRoundStats_t {
    public const nint m_iKills = 0x30; // int32_t
    public const nint m_iDeaths = 0x34; // int32_t
    public const nint m_iAssists = 0x38; // int32_t
    public const nint m_iDamage = 0x3C; // int32_t
    public const nint m_iEquipmentValue = 0x40; // int32_t
    public const nint m_iMoneySaved = 0x44; // int32_t
    public const nint m_iKillReward = 0x48; // int32_t
    public const nint m_iLiveTime = 0x4C; // int32_t
    public const nint m_iHeadShotKills = 0x50; // int32_t
    public const nint m_iObjective = 0x54; // int32_t
    public const nint m_iCashEarned = 0x58; // int32_t
    public const nint m_iUtilityDamage = 0x5C; // int32_t
    public const nint m_iEnemiesFlashed = 0x60; // int32_t
}

public static class CSceneEntity { // CPointEntity
    public const nint m_iszSceneFile = 0x4C8; // CUtlSymbolLarge
    public const nint m_iszResumeSceneFile = 0x4D0; // CUtlSymbolLarge
    public const nint m_iszTarget1 = 0x4D8; // CUtlSymbolLarge
    public const nint m_iszTarget2 = 0x4E0; // CUtlSymbolLarge
    public const nint m_iszTarget3 = 0x4E8; // CUtlSymbolLarge
    public const nint m_iszTarget4 = 0x4F0; // CUtlSymbolLarge
    public const nint m_iszTarget5 = 0x4F8; // CUtlSymbolLarge
    public const nint m_iszTarget6 = 0x500; // CUtlSymbolLarge
    public const nint m_iszTarget7 = 0x508; // CUtlSymbolLarge
    public const nint m_iszTarget8 = 0x510; // CUtlSymbolLarge
    public const nint m_hTarget1 = 0x518; // CHandle<CBaseEntity>
    public const nint m_hTarget2 = 0x51C; // CHandle<CBaseEntity>
    public const nint m_hTarget3 = 0x520; // CHandle<CBaseEntity>
    public const nint m_hTarget4 = 0x524; // CHandle<CBaseEntity>
    public const nint m_hTarget5 = 0x528; // CHandle<CBaseEntity>
    public const nint m_hTarget6 = 0x52C; // CHandle<CBaseEntity>
    public const nint m_hTarget7 = 0x530; // CHandle<CBaseEntity>
    public const nint m_hTarget8 = 0x534; // CHandle<CBaseEntity>
    public const nint m_bIsPlayingBack = 0x538; // bool
    public const nint m_bPaused = 0x539; // bool
    public const nint m_bMultiplayer = 0x53A; // bool
    public const nint m_bAutogenerated = 0x53B; // bool
    public const nint m_flForceClientTime = 0x53C; // float
    public const nint m_flCurrentTime = 0x540; // float
    public const nint m_flFrameTime = 0x544; // float
    public const nint m_bCancelAtNextInterrupt = 0x548; // bool
    public const nint m_fPitch = 0x54C; // float
    public const nint m_bAutomated = 0x550; // bool
    public const nint m_nAutomatedAction = 0x554; // int32_t
    public const nint m_flAutomationDelay = 0x558; // float
    public const nint m_flAutomationTime = 0x55C; // float
    public const nint m_hWaitingForThisResumeScene = 0x560; // CHandle<CBaseEntity>
    public const nint m_bWaitingForResumeScene = 0x564; // bool
    public const nint m_bPausedViaInput = 0x565; // bool
    public const nint m_bPauseAtNextInterrupt = 0x566; // bool
    public const nint m_bWaitingForActor = 0x567; // bool
    public const nint m_bWaitingForInterrupt = 0x568; // bool
    public const nint m_bInterruptedActorsScenes = 0x569; // bool
    public const nint m_bBreakOnNonIdle = 0x56A; // bool
    public const nint m_hActorList = 0x570; // CNetworkUtlVectorBase<CHandle<CBaseFlex>>
    public const nint m_hRemoveActorList = 0x588; // CUtlVector<CHandle<CBaseEntity>>
    public const nint m_nSceneFlushCounter = 0x5D0; // int32_t
    public const nint m_nSceneStringIndex = 0x5D4; // uint16_t
    public const nint m_OnStart = 0x5D8; // CEntityIOOutput
    public const nint m_OnCompletion = 0x600; // CEntityIOOutput
    public const nint m_OnCanceled = 0x628; // CEntityIOOutput
    public const nint m_OnPaused = 0x650; // CEntityIOOutput
    public const nint m_OnResumed = 0x678; // CEntityIOOutput
    public const nint m_OnTrigger = 0x6A0; // CEntityIOOutput[16]
    public const nint m_hInterruptScene = 0x9B0; // CHandle<CSceneEntity>
    public const nint m_nInterruptCount = 0x9B4; // int32_t
    public const nint m_bSceneMissing = 0x9B8; // bool
    public const nint m_bInterrupted = 0x9B9; // bool
    public const nint m_bCompletedEarly = 0x9BA; // bool
    public const nint m_bInterruptSceneFinished = 0x9BB; // bool
    public const nint m_bRestoring = 0x9BC; // bool
    public const nint m_hNotifySceneCompletion = 0x9C0; // CUtlVector<CHandle<CSceneEntity>>
    public const nint m_hListManagers = 0x9D8; // CUtlVector<CHandle<CSceneListManager>>
    public const nint m_iszSoundName = 0x9F0; // CUtlSymbolLarge
    public const nint m_iszSequenceName = 0x9F8; // CUtlSymbolLarge
    public const nint m_hActor = 0xA00; // CHandle<CBaseFlex>
    public const nint m_hActivator = 0xA04; // CHandle<CBaseEntity>
    public const nint m_BusyActor = 0xA08; // int32_t
    public const nint m_iPlayerDeathBehavior = 0xA0C; // SceneOnPlayerDeath_t
}

public static class CSceneEntityAlias_logic_choreographed_scene { // CSceneEntity
}

public static class CSceneEventInfo {
    public const nint m_iLayer = 0x0; // int32_t
    public const nint m_iPriority = 0x4; // int32_t
    public const nint m_hSequence = 0x8; // HSequence
    public const nint m_flWeight = 0xC; // float
    public const nint m_bHasArrived = 0x10; // bool
    public const nint m_nType = 0x14; // int32_t
    public const nint m_flNext = 0x18; // GameTime_t
    public const nint m_bIsGesture = 0x1C; // bool
    public const nint m_bShouldRemove = 0x1D; // bool
    public const nint m_hTarget = 0x44; // CHandle<CBaseEntity>
    public const nint m_nSceneEventId = 0x48; // uint32_t
    public const nint m_bClientSide = 0x4C; // bool
    public const nint m_bStarted = 0x4D; // bool
}

public static class CSceneListManager { // CLogicalEntity
    public const nint m_hListManagers = 0x4C0; // CUtlVector<CHandle<CSceneListManager>>
    public const nint m_iszScenes = 0x4D8; // CUtlSymbolLarge[16]
    public const nint m_hScenes = 0x558; // CHandle<CBaseEntity>[16]
}

public static class CScriptComponent { // CEntityComponent
    public const nint m_scriptClassName = 0x30; // CUtlSymbolLarge
}

public static class CScriptItem { // CItem
    public const nint m_OnPlayerPickup = 0x9C0; // CEntityIOOutput
    public const nint m_MoveTypeOverride = 0x9E8; // MoveType_t
}

public static class CScriptNavBlocker { // CFuncNavBlocker
    public const nint m_vExtent = 0x720; // Vector
}

public static class CScriptTriggerHurt { // CTriggerHurt
    public const nint m_vExtent = 0x958; // Vector
}

public static class CScriptTriggerMultiple { // CTriggerMultiple
    public const nint m_vExtent = 0x8E0; // Vector
}

public static class CScriptTriggerOnce { // CTriggerOnce
    public const nint m_vExtent = 0x8E0; // Vector
}

public static class CScriptTriggerPush { // CTriggerPush
    public const nint m_vExtent = 0x8D8; // Vector
}

public static class CScriptUniformRandomStream {
    public const nint m_hScriptScope = 0x8; // HSCRIPT
    public const nint m_nInitialSeed = 0x9C; // int32_t
}

public static class CScriptedSequence { // CBaseEntity
    public const nint m_iszEntry = 0x4C0; // CUtlSymbolLarge
    public const nint m_iszPreIdle = 0x4C8; // CUtlSymbolLarge
    public const nint m_iszPlay = 0x4D0; // CUtlSymbolLarge
    public const nint m_iszPostIdle = 0x4D8; // CUtlSymbolLarge
    public const nint m_iszModifierToAddOnPlay = 0x4E0; // CUtlSymbolLarge
    public const nint m_iszNextScript = 0x4E8; // CUtlSymbolLarge
    public const nint m_iszEntity = 0x4F0; // CUtlSymbolLarge
    public const nint m_iszSyncGroup = 0x4F8; // CUtlSymbolLarge
    public const nint m_nMoveTo = 0x500; // ScriptedMoveTo_t
    public const nint m_bIsPlayingPreIdle = 0x504; // bool
    public const nint m_bIsPlayingEntry = 0x505; // bool
    public const nint m_bIsPlayingAction = 0x506; // bool
    public const nint m_bIsPlayingPostIdle = 0x507; // bool
    public const nint m_bLoopPreIdleSequence = 0x508; // bool
    public const nint m_bLoopActionSequence = 0x509; // bool
    public const nint m_bLoopPostIdleSequence = 0x50A; // bool
    public const nint m_bSynchPostIdles = 0x50B; // bool
    public const nint m_bIgnoreLookAt = 0x50C; // bool
    public const nint m_bIgnoreGravity = 0x50D; // bool
    public const nint m_bDisableNPCCollisions = 0x50E; // bool
    public const nint m_bKeepAnimgraphLockedPost = 0x50F; // bool
    public const nint m_bDontAddModifiers = 0x510; // bool
    public const nint m_flRadius = 0x514; // float
    public const nint m_flRepeat = 0x518; // float
    public const nint m_flPlayAnimFadeInTime = 0x51C; // float
    public const nint m_flMoveInterpTime = 0x520; // float
    public const nint m_flAngRate = 0x524; // float
    public const nint m_nNotReadySequenceCount = 0x528; // int32_t
    public const nint m_startTime = 0x52C; // GameTime_t
    public const nint m_bWaitForBeginSequence = 0x530; // bool
    public const nint m_saved_effects = 0x534; // int32_t
    public const nint m_savedFlags = 0x538; // int32_t
    public const nint m_savedCollisionGroup = 0x53C; // int32_t
    public const nint m_interruptable = 0x540; // bool
    public const nint m_sequenceStarted = 0x541; // bool
    public const nint m_bPositionRelativeToOtherEntity = 0x542; // bool
    public const nint m_hTargetEnt = 0x544; // CHandle<CBaseEntity>
    public const nint m_hNextCine = 0x548; // CHandle<CScriptedSequence>
    public const nint m_bThinking = 0x54C; // bool
    public const nint m_bInitiatedSelfDelete = 0x54D; // bool
    public const nint m_bIsTeleportingDueToMoveTo = 0x54E; // bool
    public const nint m_bAllowCustomInterruptConditions = 0x54F; // bool
    public const nint m_hLastFoundEntity = 0x550; // CHandle<CBaseEntity>
    public const nint m_hForcedTarget = 0x554; // CHandle<CBaseAnimGraph>
    public const nint m_bDontCancelOtherSequences = 0x558; // bool
    public const nint m_bForceSynch = 0x559; // bool
    public const nint m_bPreventUpdateYawOnFinish = 0x55A; // bool
    public const nint m_bEnsureOnNavmeshOnFinish = 0x55B; // bool
    public const nint m_onDeathBehavior = 0x55C; // ScriptedOnDeath_t
    public const nint m_ConflictResponse = 0x560; // ScriptedConflictResponse_t
    public const nint m_OnBeginSequence = 0x568; // CEntityIOOutput
    public const nint m_OnActionStartOrLoop = 0x590; // CEntityIOOutput
    public const nint m_OnEndSequence = 0x5B8; // CEntityIOOutput
    public const nint m_OnPostIdleEndSequence = 0x5E0; // CEntityIOOutput
    public const nint m_OnCancelSequence = 0x608; // CEntityIOOutput
    public const nint m_OnCancelFailedSequence = 0x630; // CEntityIOOutput
    public const nint m_OnScriptEvent = 0x658; // CEntityIOOutput[8]
    public const nint m_matOtherToMain = 0x7A0; // CTransform
    public const nint m_hInteractionMainEntity = 0x7C0; // CHandle<CBaseEntity>
    public const nint m_iPlayerDeathBehavior = 0x7C4; // int32_t
}

public static class CSensorGrenade { // CBaseCSGrenade
}

public static class CSensorGrenadeProjectile { // CBaseCSGrenadeProjectile
    public const nint m_fExpireTime = 0xA98; // GameTime_t
    public const nint m_fNextDetectPlayerSound = 0xA9C; // GameTime_t
    public const nint m_hDisplayGrenade = 0xAA0; // CHandle<CBaseEntity>
}

public static class CServerOnlyEntity { // CBaseEntity
}

public static class CServerOnlyModelEntity { // CBaseModelEntity
}

public static class CServerOnlyPointEntity { // CServerOnlyEntity
}

public static class CServerRagdollTrigger { // CBaseTrigger
}

public static class CShatterGlassShard {
    public const nint m_hShardHandle = 0x8; // uint32_t
    public const nint m_vecPanelVertices = 0x10; // CUtlVector<Vector2D>
    public const nint m_vLocalPanelSpaceOrigin = 0x28; // Vector2D
    public const nint m_hModel = 0x30; // CStrongHandle<InfoForResourceTypeCModel>
    public const nint m_hPhysicsEntity = 0x38; // CHandle<CShatterGlassShardPhysics>
    public const nint m_hParentPanel = 0x3C; // CHandle<CFuncShatterglass>
    public const nint m_hParentShard = 0x40; // uint32_t
    public const nint m_ShatterStressType = 0x44; // ShatterGlassStressType
    public const nint m_vecStressVelocity = 0x48; // Vector
    public const nint m_bCreatedModel = 0x54; // bool
    public const nint m_flLongestEdge = 0x58; // float
    public const nint m_flShortestEdge = 0x5C; // float
    public const nint m_flLongestAcross = 0x60; // float
    public const nint m_flShortestAcross = 0x64; // float
    public const nint m_flSumOfAllEdges = 0x68; // float
    public const nint m_flArea = 0x6C; // float
    public const nint m_nOnFrameEdge = 0x70; // OnFrame
    public const nint m_nParentPanelsNthShard = 0x74; // int32_t
    public const nint m_nSubShardGeneration = 0x78; // int32_t
    public const nint m_vecAverageVertPosition = 0x7C; // Vector2D
    public const nint m_bAverageVertPositionIsValid = 0x84; // bool
    public const nint m_vecPanelSpaceStressPositionA = 0x88; // Vector2D
    public const nint m_vecPanelSpaceStressPositionB = 0x90; // Vector2D
    public const nint m_bStressPositionAIsValid = 0x98; // bool
    public const nint m_bStressPositionBIsValid = 0x99; // bool
    public const nint m_bFlaggedForRemoval = 0x9A; // bool
    public const nint m_flPhysicsEntitySpawnedAtTime = 0x9C; // GameTime_t
    public const nint m_bShatterRateLimited = 0xA0; // bool
    public const nint m_hEntityHittingMe = 0xA4; // CHandle<CBaseEntity>
    public const nint m_vecNeighbors = 0xA8; // CUtlVector<uint32_t>
}

public static class CShatterGlassShardPhysics { // CPhysicsProp
    public const nint m_bDebris = 0xBD0; // bool
    public const nint m_hParentShard = 0xBD4; // uint32_t
    public const nint m_ShardDesc = 0xBD8; // shard_model_desc_t
}

public static class CShower { // CModelPointEntity
}

public static class CSimTimer { // CSimpleSimTimer
    public const nint m_interval = 0x8; // float
}

public static class CSimpleMarkupVolumeTagged { // CMarkupVolumeTagged
}

public static class CSimpleSimTimer {
    public const nint m_next = 0x0; // GameTime_t
    public const nint m_nWorldGroupId = 0x4; // WorldGroupId_t
}

public static class CSimpleStopwatch { // CStopwatchBase
}

public static class CSingleplayRules { // CGameRules
    public const nint m_bSinglePlayerGameEnding = 0x90; // bool
}

public static class CSkeletonAnimationController { // ISkeletonAnimationController
    public const nint m_pSkeletonInstance = 0x8; // CSkeletonInstance*
}

public static class CSkeletonInstance { // CGameSceneNode
    public const nint m_modelState = 0x160; // CModelState
    public const nint m_bIsAnimationEnabled = 0x370; // bool
    public const nint m_bUseParentRenderBounds = 0x371; // bool
    public const nint m_bDisableSolidCollisionsForHierarchy = 0x372; // bool
    public const nint m_bDirtyMotionType = 0x0; // bitfield:1
    public const nint m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
    public const nint m_materialGroup = 0x374; // CUtlStringToken
    public const nint m_nHitboxSet = 0x378; // uint8_t
}

public static class CSkillDamage {
    public const nint m_flDamage = 0x0; // CSkillFloat
    public const nint m_flPhysicsForceDamage = 0x10; // float
}

public static class CSkillFloat {
    public const nint m_pValue = 0x0; // float[4]
}

public static class CSkillInt {
    public const nint m_pValue = 0x0; // int32_t[4]
}

public static class CSkyCamera { // CBaseEntity
    public const nint m_skyboxData = 0x4C0; // sky3dparams_t
    public const nint m_skyboxSlotToken = 0x550; // CUtlStringToken
    public const nint m_bUseAngles = 0x554; // bool
    public const nint m_pNext = 0x558; // CSkyCamera*
}

public static class CSkyboxReference { // CBaseEntity
    public const nint m_worldGroupId = 0x4C0; // WorldGroupId_t
    public const nint m_hSkyCamera = 0x4C4; // CHandle<CSkyCamera>
}

public static class CSmokeGrenade { // CBaseCSGrenade
}

public static class CSmokeGrenadeProjectile { // CBaseCSGrenadeProjectile
    public const nint m_nSmokeEffectTickBegin = 0xAB0; // int32_t
    public const nint m_bDidSmokeEffect = 0xAB4; // bool
    public const nint m_nRandomSeed = 0xAB8; // int32_t
    public const nint m_vSmokeColor = 0xABC; // Vector
    public const nint m_vSmokeDetonationPos = 0xAC8; // Vector
    public const nint m_VoxelFrameData = 0xAD8; // CUtlVector<uint8_t>
    public const nint m_flLastBounce = 0xAF0; // GameTime_t
    public const nint m_fllastSimulationTime = 0xAF4; // GameTime_t
}

public static class CSmoothFunc {
    public const nint m_flSmoothAmplitude = 0x8; // float
    public const nint m_flSmoothBias = 0xC; // float
    public const nint m_flSmoothDuration = 0x10; // float
    public const nint m_flSmoothRemainingTime = 0x14; // float
    public const nint m_nSmoothDir = 0x18; // int32_t
}

public static class CSound {
    public const nint m_hOwner = 0x0; // CHandle<CBaseEntity>
    public const nint m_hTarget = 0x4; // CHandle<CBaseEntity>
    public const nint m_iVolume = 0x8; // int32_t
    public const nint m_flOcclusionScale = 0xC; // float
    public const nint m_iType = 0x10; // int32_t
    public const nint m_iNextAudible = 0x14; // int32_t
    public const nint m_flExpireTime = 0x18; // GameTime_t
    public const nint m_iNext = 0x1C; // int16_t
    public const nint m_bNoExpirationTime = 0x1E; // bool
    public const nint m_ownerChannelIndex = 0x20; // int32_t
    public const nint m_vecOrigin = 0x24; // Vector
    public const nint m_bHasOwner = 0x30; // bool
}

public static class CSoundAreaEntityBase { // CBaseEntity
    public const nint m_bDisabled = 0x4C0; // bool
    public const nint m_iszSoundAreaType = 0x4C8; // CUtlSymbolLarge
    public const nint m_vPos = 0x4D0; // Vector
}

public static class CSoundAreaEntityOrientedBox { // CSoundAreaEntityBase
    public const nint m_vMin = 0x4E0; // Vector
    public const nint m_vMax = 0x4EC; // Vector
}

public static class CSoundAreaEntitySphere { // CSoundAreaEntityBase
    public const nint m_flRadius = 0x4E0; // float
}

public static class CSoundEnt { // CPointEntity
    public const nint m_iFreeSound = 0x4C0; // int32_t
    public const nint m_iActiveSound = 0x4C4; // int32_t
    public const nint m_cLastActiveSounds = 0x4C8; // int32_t
    public const nint m_SoundPool = 0x4CC; // CSound[128]
}

public static class CSoundEnvelope {
    public const nint m_current = 0x0; // float
    public const nint m_target = 0x4; // float
    public const nint m_rate = 0x8; // float
    public const nint m_forceupdate = 0xC; // bool
}

public static class CSoundEventAABBEntity { // CSoundEventEntity
    public const nint m_vMins = 0x568; // Vector
    public const nint m_vMaxs = 0x574; // Vector
}

public static class CSoundEventEntity { // CBaseEntity
    public const nint m_bStartOnSpawn = 0x4C0; // bool
    public const nint m_bToLocalPlayer = 0x4C1; // bool
    public const nint m_bStopOnNew = 0x4C2; // bool
    public const nint m_bSaveRestore = 0x4C3; // bool
    public const nint m_bSavedIsPlaying = 0x4C4; // bool
    public const nint m_flSavedElapsedTime = 0x4C8; // float
    public const nint m_iszSourceEntityName = 0x4D0; // CUtlSymbolLarge
    public const nint m_iszAttachmentName = 0x4D8; // CUtlSymbolLarge
    public const nint m_onGUIDChanged = 0x4E0; // CEntityOutputTemplate<uint64_t>
    public const nint m_onSoundFinished = 0x508; // CEntityIOOutput
    public const nint m_iszSoundName = 0x550; // CUtlSymbolLarge
    public const nint m_hSource = 0x560; // CEntityHandle
}

public static class CSoundEventEntityAlias_snd_event_point { // CSoundEventEntity
}

public static class CSoundEventOBBEntity { // CSoundEventEntity
    public const nint m_vMins = 0x568; // Vector
    public const nint m_vMaxs = 0x574; // Vector
}

public static class CSoundEventParameter { // CBaseEntity
    public const nint m_iszParamName = 0x4C8; // CUtlSymbolLarge
    public const nint m_flFloatValue = 0x4D0; // float
}

public static class CSoundEventPathCornerEntity { // CSoundEventEntity
    public const nint m_iszPathCorner = 0x568; // CUtlSymbolLarge
    public const nint m_iCountMax = 0x570; // int32_t
    public const nint m_flDistanceMax = 0x574; // float
    public const nint m_flDistMaxSqr = 0x578; // float
    public const nint m_flDotProductMax = 0x57C; // float
    public const nint bPlaying = 0x580; // bool
}

public static class CSoundOpvarSetAABBEntity { // CSoundOpvarSetPointEntity
    public const nint m_vDistanceInnerMins = 0x668; // Vector
    public const nint m_vDistanceInnerMaxs = 0x674; // Vector
    public const nint m_vDistanceOuterMins = 0x680; // Vector
    public const nint m_vDistanceOuterMaxs = 0x68C; // Vector
    public const nint m_nAABBDirection = 0x698; // int32_t
    public const nint m_vInnerMins = 0x69C; // Vector
    public const nint m_vInnerMaxs = 0x6A8; // Vector
    public const nint m_vOuterMins = 0x6B4; // Vector
    public const nint m_vOuterMaxs = 0x6C0; // Vector
}

public static class CSoundOpvarSetAutoRoomEntity { // CSoundOpvarSetPointEntity
    public const nint m_traceResults = 0x668; // CUtlVector<SoundOpvarTraceResult_t>
    public const nint m_flSize = 0x698; // float
    public const nint m_flHeightTolerance = 0x69C; // float
    public const nint m_flSizeSqr = 0x6A0; // float
}

public static class CSoundOpvarSetEntity { // CBaseEntity
    public const nint m_iszStackName = 0x4C8; // CUtlSymbolLarge
    public const nint m_iszOperatorName = 0x4D0; // CUtlSymbolLarge
    public const nint m_iszOpvarName = 0x4D8; // CUtlSymbolLarge
    public const nint m_nOpvarType = 0x4E0; // int32_t
    public const nint m_nOpvarIndex = 0x4E4; // int32_t
    public const nint m_flOpvarValue = 0x4E8; // float
    public const nint m_OpvarValueString = 0x4F0; // CUtlSymbolLarge
    public const nint m_bSetOnSpawn = 0x4F8; // bool
}

public static class CSoundOpvarSetOBBEntity { // CSoundOpvarSetAABBEntity
}

public static class CSoundOpvarSetOBBWindEntity { // CSoundOpvarSetPointBase
    public const nint m_vMins = 0x558; // Vector
    public const nint m_vMaxs = 0x564; // Vector
    public const nint m_vDistanceMins = 0x570; // Vector
    public const nint m_vDistanceMaxs = 0x57C; // Vector
    public const nint m_flWindMin = 0x588; // float
    public const nint m_flWindMax = 0x58C; // float
    public const nint m_flWindMapMin = 0x590; // float
    public const nint m_flWindMapMax = 0x594; // float
}

public static class CSoundOpvarSetPathCornerEntity { // CSoundOpvarSetPointEntity
    public const nint m_flDistMinSqr = 0x680; // float
    public const nint m_flDistMaxSqr = 0x684; // float
    public const nint m_iszPathCornerEntityName = 0x688; // CUtlSymbolLarge
}

public static class CSoundOpvarSetPointBase { // CBaseEntity
    public const nint m_bDisabled = 0x4C0; // bool
    public const nint m_hSource = 0x4C4; // CEntityHandle
    public const nint m_iszSourceEntityName = 0x4D0; // CUtlSymbolLarge
    public const nint m_vLastPosition = 0x528; // Vector
    public const nint m_iszStackName = 0x538; // CUtlSymbolLarge
    public const nint m_iszOperatorName = 0x540; // CUtlSymbolLarge
    public const nint m_iszOpvarName = 0x548; // CUtlSymbolLarge
    public const nint m_iOpvarIndex = 0x550; // int32_t
    public const nint m_bUseAutoCompare = 0x554; // bool
}

public static class CSoundOpvarSetPointEntity { // CSoundOpvarSetPointBase
    public const nint m_OnEnter = 0x558; // CEntityIOOutput
    public const nint m_OnExit = 0x580; // CEntityIOOutput
    public const nint m_bAutoDisable = 0x5A8; // bool
    public const nint m_flDistanceMin = 0x5EC; // float
    public const nint m_flDistanceMax = 0x5F0; // float
    public const nint m_flDistanceMapMin = 0x5F4; // float
    public const nint m_flDistanceMapMax = 0x5F8; // float
    public const nint m_flOcclusionRadius = 0x5FC; // float
    public const nint m_flOcclusionMin = 0x600; // float
    public const nint m_flOcclusionMax = 0x604; // float
    public const nint m_flValSetOnDisable = 0x608; // float
    public const nint m_bSetValueOnDisable = 0x60C; // bool
    public const nint m_nSimulationMode = 0x610; // int32_t
    public const nint m_nVisibilitySamples = 0x614; // int32_t
    public const nint m_vDynamicProxyPoint = 0x618; // Vector
    public const nint m_flDynamicMaximumOcclusion = 0x624; // float
    public const nint m_hDynamicEntity = 0x628; // CEntityHandle
    public const nint m_iszDynamicEntityName = 0x630; // CUtlSymbolLarge
    public const nint m_flPathingDistanceNormFactor = 0x638; // float
    public const nint m_vPathingSourcePos = 0x63C; // Vector
    public const nint m_vPathingListenerPos = 0x648; // Vector
    public const nint m_vPathingDirection = 0x654; // Vector
    public const nint m_nPathingSourceIndex = 0x660; // int32_t
}

public static class CSoundPatch {
    public const nint m_pitch = 0x8; // CSoundEnvelope
    public const nint m_volume = 0x18; // CSoundEnvelope
    public const nint m_shutdownTime = 0x30; // float
    public const nint m_flLastTime = 0x34; // float
    public const nint m_iszSoundScriptName = 0x38; // CUtlSymbolLarge
    public const nint m_hEnt = 0x40; // CHandle<CBaseEntity>
    public const nint m_soundEntityIndex = 0x44; // CEntityIndex
    public const nint m_soundOrigin = 0x48; // Vector
    public const nint m_isPlaying = 0x54; // int32_t
    public const nint m_Filter = 0x58; // CCopyRecipientFilter
    public const nint m_flCloseCaptionDuration = 0x80; // float
    public const nint m_bUpdatedSoundOrigin = 0x84; // bool
    public const nint m_iszClassName = 0x88; // CUtlSymbolLarge
}

public static class CSoundStackSave { // CLogicalEntity
    public const nint m_iszStackName = 0x4C0; // CUtlSymbolLarge
}

public static class CSplineConstraint { // CPhysConstraint
}

public static class CSpotlightEnd { // CBaseModelEntity
    public const nint m_flLightScale = 0x710; // float
    public const nint m_Radius = 0x714; // float
    public const nint m_vSpotlightDir = 0x718; // Vector
    public const nint m_vSpotlightOrg = 0x724; // Vector
}

public static class CSprite { // CBaseModelEntity
    public const nint m_hSpriteMaterial = 0x710; // CStrongHandle<InfoForResourceTypeIMaterial2>
    public const nint m_hAttachedToEntity = 0x718; // CHandle<CBaseEntity>
    public const nint m_nAttachment = 0x71C; // AttachmentHandle_t
    public const nint m_flSpriteFramerate = 0x720; // float
    public const nint m_flFrame = 0x724; // float
    public const nint m_flDieTime = 0x728; // GameTime_t
    public const nint m_nBrightness = 0x738; // uint32_t
    public const nint m_flBrightnessDuration = 0x73C; // float
    public const nint m_flSpriteScale = 0x740; // float
    public const nint m_flScaleDuration = 0x744; // float
    public const nint m_bWorldSpaceScale = 0x748; // bool
    public const nint m_flGlowProxySize = 0x74C; // float
    public const nint m_flHDRColorScale = 0x750; // float
    public const nint m_flLastTime = 0x754; // GameTime_t
    public const nint m_flMaxFrame = 0x758; // float
    public const nint m_flStartScale = 0x75C; // float
    public const nint m_flDestScale = 0x760; // float
    public const nint m_flScaleTimeStart = 0x764; // GameTime_t
    public const nint m_nStartBrightness = 0x768; // int32_t
    public const nint m_nDestBrightness = 0x76C; // int32_t
    public const nint m_flBrightnessTimeStart = 0x770; // GameTime_t
    public const nint m_nSpriteWidth = 0x774; // int32_t
    public const nint m_nSpriteHeight = 0x778; // int32_t
}

public static class CSpriteAlias_env_glow { // CSprite
}

public static class CSpriteOriented { // CSprite
}

public static class CStopwatch { // CStopwatchBase
    public const nint m_interval = 0xC; // float
}

public static class CStopwatchBase { // CSimpleSimTimer
    public const nint m_fIsRunning = 0x8; // bool
}

public static class CSun { // CBaseModelEntity
    public const nint m_vDirection = 0x710; // Vector
    public const nint m_clrOverlay = 0x71C; // Color
    public const nint m_iszEffectName = 0x720; // CUtlSymbolLarge
    public const nint m_iszSSEffectName = 0x728; // CUtlSymbolLarge
    public const nint m_bOn = 0x730; // bool
    public const nint m_bmaxColor = 0x731; // bool
    public const nint m_flSize = 0x734; // float
    public const nint m_flRotation = 0x738; // float
    public const nint m_flHazeScale = 0x73C; // float
    public const nint m_flAlphaHaze = 0x740; // float
    public const nint m_flAlphaHdr = 0x744; // float
    public const nint m_flAlphaScale = 0x748; // float
    public const nint m_flHDRColorScale = 0x74C; // float
    public const nint m_flFarZScale = 0x750; // float
}

public static class CTablet { // CCSWeaponBase
}

public static class CTakeDamageInfo {
    public const nint m_vecDamageForce = 0x8; // Vector
    public const nint m_vecDamagePosition = 0x14; // Vector
    public const nint m_vecReportedPosition = 0x20; // Vector
    public const nint m_vecDamageDirection = 0x2C; // Vector
    public const nint m_hInflictor = 0x38; // CHandle<CBaseEntity>
    public const nint m_hAttacker = 0x3C; // CHandle<CBaseEntity>
    public const nint m_hAbility = 0x40; // CHandle<CBaseEntity>
    public const nint m_flDamage = 0x44; // float
    public const nint m_bitsDamageType = 0x48; // int32_t
    public const nint m_iDamageCustom = 0x4C; // int32_t
    public const nint m_iAmmoType = 0x50; // AmmoIndex_t
    public const nint m_flOriginalDamage = 0x60; // float
    public const nint m_bShouldBleed = 0x64; // bool
    public const nint m_bShouldSpark = 0x65; // bool
    public const nint m_nDamageFlags = 0x70; // TakeDamageFlags_t
    public const nint m_nNumObjectsPenetrated = 0x74; // int32_t
    public const nint m_hScriptInstance = 0x78; // HSCRIPT
    public const nint m_bInTakeDamageFlow = 0x94; // bool
}

public static class CTakeDamageInfoAPI {
}

public static class CTakeDamageResult {
    public const nint m_nHealthLost = 0x0; // int32_t
    public const nint m_nDamageTaken = 0x4; // int32_t
}

public static class CTakeDamageSummaryScopeGuard {
    public const nint m_vecSummaries = 0x8; // CUtlVector<SummaryTakeDamageInfo_t*>
}

public static class CTankTargetChange { // CPointEntity
    public const nint m_newTarget = 0x4C0; // CVariantBase<CVariantDefaultAllocator>
    public const nint m_newTargetName = 0x4D0; // CUtlSymbolLarge
}

public static class CTankTrainAI { // CPointEntity
    public const nint m_hTrain = 0x4C0; // CHandle<CFuncTrackTrain>
    public const nint m_hTargetEntity = 0x4C4; // CHandle<CBaseEntity>
    public const nint m_soundPlaying = 0x4C8; // int32_t
    public const nint m_startSoundName = 0x4E0; // CUtlSymbolLarge
    public const nint m_engineSoundName = 0x4E8; // CUtlSymbolLarge
    public const nint m_movementSoundName = 0x4F0; // CUtlSymbolLarge
    public const nint m_targetEntityName = 0x4F8; // CUtlSymbolLarge
}

public static class CTeam { // CBaseEntity
    public const nint m_aPlayerControllers = 0x4C0; // CNetworkUtlVectorBase<CHandle<CBasePlayerController>>
    public const nint m_aPlayers = 0x4D8; // CNetworkUtlVectorBase<CHandle<CBasePlayerPawn>>
    public const nint m_iScore = 0x4F0; // int32_t
    public const nint m_szTeamname = 0x4F4; // char[129]
}

public static class CTeamplayRules { // CMultiplayRules
}

public static class CTestEffect { // CBaseEntity
    public const nint m_iLoop = 0x4C0; // int32_t
    public const nint m_iBeam = 0x4C4; // int32_t
    public const nint m_pBeam = 0x4C8; // CBeam*[24]
    public const nint m_flBeamTime = 0x588; // GameTime_t[24]
    public const nint m_flStartTime = 0x5E8; // GameTime_t
}

public static class CTextureBasedAnimatable { // CBaseModelEntity
    public const nint m_bLoop = 0x710; // bool
    public const nint m_flFPS = 0x714; // float
    public const nint m_hPositionKeys = 0x718; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_hRotationKeys = 0x720; // CStrongHandle<InfoForResourceTypeCTextureBase>
    public const nint m_vAnimationBoundsMin = 0x728; // Vector
    public const nint m_vAnimationBoundsMax = 0x734; // Vector
    public const nint m_flStartTime = 0x740; // float
    public const nint m_flStartFrame = 0x744; // float
}

public static class CTimeline { // IntervalTimer
    public const nint m_flValues = 0x10; // float[64]
    public const nint m_nValueCounts = 0x110; // int32_t[64]
    public const nint m_nBucketCount = 0x210; // int32_t
    public const nint m_flInterval = 0x214; // float
    public const nint m_flFinalValue = 0x218; // float
    public const nint m_nCompressionType = 0x21C; // TimelineCompression_t
    public const nint m_bStopped = 0x220; // bool
}

public static class CTimerEntity { // CLogicalEntity
    public const nint m_OnTimer = 0x4C0; // CEntityIOOutput
    public const nint m_OnTimerHigh = 0x4E8; // CEntityIOOutput
    public const nint m_OnTimerLow = 0x510; // CEntityIOOutput
    public const nint m_iDisabled = 0x538; // int32_t
    public const nint m_flInitialDelay = 0x53C; // float
    public const nint m_flRefireTime = 0x540; // float
    public const nint m_bUpDownState = 0x544; // bool
    public const nint m_iUseRandomTime = 0x548; // int32_t
    public const nint m_bPauseAfterFiring = 0x54C; // bool
    public const nint m_flLowerRandomBound = 0x550; // float
    public const nint m_flUpperRandomBound = 0x554; // float
    public const nint m_flRemainingTime = 0x558; // float
    public const nint m_bPaused = 0x55C; // bool
}

public static class CTonemapController2 { // CBaseEntity
    public const nint m_flAutoExposureMin = 0x4C0; // float
    public const nint m_flAutoExposureMax = 0x4C4; // float
    public const nint m_flTonemapPercentTarget = 0x4C8; // float
    public const nint m_flTonemapPercentBrightPixels = 0x4CC; // float
    public const nint m_flTonemapMinAvgLum = 0x4D0; // float
    public const nint m_flExposureAdaptationSpeedUp = 0x4D4; // float
    public const nint m_flExposureAdaptationSpeedDown = 0x4D8; // float
    public const nint m_flTonemapEVSmoothingRange = 0x4DC; // float
}

public static class CTonemapController2Alias_env_tonemap_controller2 { // CTonemapController2
}

public static class CTonemapTrigger { // CBaseTrigger
    public const nint m_tonemapControllerName = 0x8B8; // CUtlSymbolLarge
    public const nint m_hTonemapController = 0x8C0; // CEntityHandle
}

public static class CTouchExpansionComponent { // CEntityComponent
}

public static class CTriggerActiveWeaponDetect { // CBaseTrigger
    public const nint m_OnTouchedActiveWeapon = 0x8B8; // CEntityIOOutput
    public const nint m_iszWeaponClassName = 0x8E0; // CUtlSymbolLarge
}

public static class CTriggerBombReset { // CBaseTrigger
}

public static class CTriggerBrush { // CBaseModelEntity
    public const nint m_OnStartTouch = 0x710; // CEntityIOOutput
    public const nint m_OnEndTouch = 0x738; // CEntityIOOutput
    public const nint m_OnUse = 0x760; // CEntityIOOutput
    public const nint m_iInputFilter = 0x788; // int32_t
    public const nint m_iDontMessageParent = 0x78C; // int32_t
}

public static class CTriggerBuoyancy { // CBaseTrigger
    public const nint m_BuoyancyHelper = 0x8B8; // CBuoyancyHelper
    public const nint m_flFluidDensity = 0x8D8; // float
}

public static class CTriggerCallback { // CBaseTrigger
}

public static class CTriggerDetectBulletFire { // CBaseTrigger
    public const nint m_bPlayerFireOnly = 0x8B8; // bool
    public const nint m_OnDetectedBulletFire = 0x8C0; // CEntityIOOutput
}

public static class CTriggerDetectExplosion { // CBaseTrigger
    public const nint m_OnDetectedExplosion = 0x8F0; // CEntityIOOutput
}

public static class CTriggerFan { // CBaseTrigger
    public const nint m_vFanOrigin = 0x8B8; // Vector
    public const nint m_vFanEnd = 0x8C4; // Vector
    public const nint m_vNoise = 0x8D0; // Vector
    public const nint m_flForce = 0x8DC; // float
    public const nint m_flRopeForceScale = 0x8E0; // float
    public const nint m_flPlayerForce = 0x8E4; // float
    public const nint m_flRampTime = 0x8E8; // float
    public const nint m_bFalloff = 0x8EC; // bool
    public const nint m_bPushPlayer = 0x8ED; // bool
    public const nint m_bRampDown = 0x8EE; // bool
    public const nint m_bAddNoise = 0x8EF; // bool
    public const nint m_RampTimer = 0x8F0; // CountdownTimer
}

public static class CTriggerGameEvent { // CBaseTrigger
    public const nint m_strStartTouchEventName = 0x8B8; // CUtlString
    public const nint m_strEndTouchEventName = 0x8C0; // CUtlString
    public const nint m_strTriggerID = 0x8C8; // CUtlString
}

public static class CTriggerGravity { // CBaseTrigger
}

public static class CTriggerHostageReset { // CBaseTrigger
}

public static class CTriggerHurt { // CBaseTrigger
    public const nint m_flOriginalDamage = 0x8B8; // float
    public const nint m_flDamage = 0x8BC; // float
    public const nint m_flDamageCap = 0x8C0; // float
    public const nint m_flLastDmgTime = 0x8C4; // GameTime_t
    public const nint m_flForgivenessDelay = 0x8C8; // float
    public const nint m_bitsDamageInflict = 0x8CC; // int32_t
    public const nint m_damageModel = 0x8D0; // int32_t
    public const nint m_bNoDmgForce = 0x8D4; // bool
    public const nint m_vDamageForce = 0x8D8; // Vector
    public const nint m_thinkAlways = 0x8E4; // bool
    public const nint m_hurtThinkPeriod = 0x8E8; // float
    public const nint m_OnHurt = 0x8F0; // CEntityIOOutput
    public const nint m_OnHurtPlayer = 0x918; // CEntityIOOutput
    public const nint m_hurtEntities = 0x940; // CUtlVector<CHandle<CBaseEntity>>
}

public static class CTriggerHurtGhost { // CTriggerHurt
}

public static class CTriggerImpact { // CTriggerMultiple
    public const nint m_flMagnitude = 0x8E0; // float
    public const nint m_flNoise = 0x8E4; // float
    public const nint m_flViewkick = 0x8E8; // float
    public const nint m_pOutputForce = 0x8F0; // CEntityOutputTemplate<Vector>
}

public static class CTriggerLerpObject { // CBaseTrigger
    public const nint m_iszLerpTarget = 0x8B8; // CUtlSymbolLarge
    public const nint m_hLerpTarget = 0x8C0; // CHandle<CBaseEntity>
    public const nint m_iszLerpTargetAttachment = 0x8C8; // CUtlSymbolLarge
    public const nint m_hLerpTargetAttachment = 0x8D0; // AttachmentHandle_t
    public const nint m_flLerpDuration = 0x8D4; // float
    public const nint m_bLerpRestoreMoveType = 0x8D8; // bool
    public const nint m_bSingleLerpObject = 0x8D9; // bool
    public const nint m_vecLerpingObjects = 0x8E0; // CUtlVector<lerpdata_t>
    public const nint m_iszLerpEffect = 0x8F8; // CUtlSymbolLarge
    public const nint m_iszLerpSound = 0x900; // CUtlSymbolLarge
    public const nint m_bAttachTouchingObject = 0x908; // bool
    public const nint m_hEntityToWaitForDisconnect = 0x90C; // CHandle<CBaseEntity>
    public const nint m_OnLerpStarted = 0x910; // CEntityIOOutput
    public const nint m_OnLerpFinished = 0x938; // CEntityIOOutput
}

public static class CTriggerLook { // CTriggerOnce
    public const nint m_hLookTarget = 0x8E0; // CHandle<CBaseEntity>
    public const nint m_flFieldOfView = 0x8E4; // float
    public const nint m_flLookTime = 0x8E8; // float
    public const nint m_flLookTimeTotal = 0x8EC; // float
    public const nint m_flLookTimeLast = 0x8F0; // GameTime_t
    public const nint m_flTimeoutDuration = 0x8F4; // float
    public const nint m_bTimeoutFired = 0x8F8; // bool
    public const nint m_bIsLooking = 0x8F9; // bool
    public const nint m_b2DFOV = 0x8FA; // bool
    public const nint m_bUseVelocity = 0x8FB; // bool
    public const nint m_hActivator = 0x8FC; // CHandle<CBaseEntity>
    public const nint m_bTestOcclusion = 0x900; // bool
    public const nint m_OnTimeout = 0x908; // CEntityIOOutput
    public const nint m_OnStartLook = 0x930; // CEntityIOOutput
    public const nint m_OnEndLook = 0x958; // CEntityIOOutput
}

public static class CTriggerMultiple { // CBaseTrigger
    public const nint m_OnTrigger = 0x8B8; // CEntityIOOutput
}

public static class CTriggerOnce { // CTriggerMultiple
}

public static class CTriggerPhysics { // CBaseTrigger
    public const nint m_gravityScale = 0x8C8; // float
    public const nint m_linearLimit = 0x8CC; // float
    public const nint m_linearDamping = 0x8D0; // float
    public const nint m_angularLimit = 0x8D4; // float
    public const nint m_angularDamping = 0x8D8; // float
    public const nint m_linearForce = 0x8DC; // float
    public const nint m_flFrequency = 0x8E0; // float
    public const nint m_flDampingRatio = 0x8E4; // float
    public const nint m_vecLinearForcePointAt = 0x8E8; // Vector
    public const nint m_bCollapseToForcePoint = 0x8F4; // bool
    public const nint m_vecLinearForcePointAtWorld = 0x8F8; // Vector
    public const nint m_vecLinearForceDirection = 0x904; // Vector
    public const nint m_bConvertToDebrisWhenPossible = 0x910; // bool
}

public static class CTriggerProximity { // CBaseTrigger
    public const nint m_hMeasureTarget = 0x8B8; // CHandle<CBaseEntity>
    public const nint m_iszMeasureTarget = 0x8C0; // CUtlSymbolLarge
    public const nint m_fRadius = 0x8C8; // float
    public const nint m_nTouchers = 0x8CC; // int32_t
    public const nint m_NearestEntityDistance = 0x8D0; // CEntityOutputTemplate<float>
}

public static class CTriggerPush { // CBaseTrigger
    public const nint m_angPushEntitySpace = 0x8B8; // QAngle
    public const nint m_vecPushDirEntitySpace = 0x8C4; // Vector
    public const nint m_bTriggerOnStartTouch = 0x8D0; // bool
}

public static class CTriggerRemove { // CBaseTrigger
    public const nint m_OnRemove = 0x8B8; // CEntityIOOutput
}

public static class CTriggerSave { // CBaseTrigger
    public const nint m_bForceNewLevelUnit = 0x8B8; // bool
    public const nint m_fDangerousTimer = 0x8BC; // float
    public const nint m_minHitPoints = 0x8C0; // int32_t
}

public static class CTriggerSndSosOpvar { // CBaseTrigger
    public const nint m_hTouchingPlayers = 0x8B8; // CUtlVector<CHandle<CBaseEntity>>
    public const nint m_flPosition = 0x8D0; // Vector
    public const nint m_flCenterSize = 0x8DC; // float
    public const nint m_flMinVal = 0x8E0; // float
    public const nint m_flMaxVal = 0x8E4; // float
    public const nint m_flWait = 0x8E8; // float
    public const nint m_opvarName = 0x8F0; // CUtlSymbolLarge
    public const nint m_stackName = 0x8F8; // CUtlSymbolLarge
    public const nint m_operatorName = 0x900; // CUtlSymbolLarge
    public const nint m_bVolIs2D = 0x908; // bool
    public const nint m_opvarNameChar = 0x909; // char[256]
    public const nint m_stackNameChar = 0xA09; // char[256]
    public const nint m_operatorNameChar = 0xB09; // char[256]
    public const nint m_VecNormPos = 0xC0C; // Vector
    public const nint m_flNormCenterSize = 0xC18; // float
}

public static class CTriggerSoundscape { // CBaseTrigger
    public const nint m_hSoundscape = 0x8B8; // CHandle<CEnvSoundscapeTriggerable>
    public const nint m_SoundscapeName = 0x8C0; // CUtlSymbolLarge
    public const nint m_spectators = 0x8C8; // CUtlVector<CHandle<CBasePlayerPawn>>
}

public static class CTriggerTeleport { // CBaseTrigger
    public const nint m_iLandmark = 0x8B8; // CUtlSymbolLarge
    public const nint m_bUseLandmarkAngles = 0x8C0; // bool
    public const nint m_bMirrorPlayer = 0x8C1; // bool
}

public static class CTriggerToggleSave { // CBaseTrigger
    public const nint m_bDisabled = 0x8B8; // bool
}

public static class CTriggerTripWire { // CBaseTrigger
}

public static class CTriggerVolume { // CBaseModelEntity
    public const nint m_iFilterName = 0x710; // CUtlSymbolLarge
    public const nint m_hFilter = 0x718; // CHandle<CBaseFilter>
}

public static class CTripWireFire { // CBaseCSGrenade
}

public static class CTripWireFireProjectile { // CBaseGrenade
}

public static class CVoteController { // CBaseEntity
    public const nint m_iActiveIssueIndex = 0x4C0; // int32_t
    public const nint m_iOnlyTeamToVote = 0x4C4; // int32_t
    public const nint m_nVoteOptionCount = 0x4C8; // int32_t[5]
    public const nint m_nPotentialVotes = 0x4DC; // int32_t
    public const nint m_bIsYesNoVote = 0x4E0; // bool
    public const nint m_acceptingVotesTimer = 0x4E8; // CountdownTimer
    public const nint m_executeCommandTimer = 0x500; // CountdownTimer
    public const nint m_resetVoteTimer = 0x518; // CountdownTimer
    public const nint m_nVotesCast = 0x530; // int32_t[64]
    public const nint m_playerHoldingVote = 0x630; // CPlayerSlot
    public const nint m_playerOverrideForVote = 0x634; // CPlayerSlot
    public const nint m_nHighestCountIndex = 0x638; // int32_t
    public const nint m_potentialIssues = 0x640; // CUtlVector<CBaseIssue*>
    public const nint m_VoteOptions = 0x658; // CUtlVector<char*>
}

public static class CWaterBullet { // CBaseAnimGraph
}

public static class CWeaponAWP { // CCSWeaponBaseGun
}

public static class CWeaponAug { // CCSWeaponBaseGun
}

public static class CWeaponBaseItem { // CCSWeaponBase
    public const nint m_SequenceCompleteTimer = 0xE90; // CountdownTimer
    public const nint m_bRedraw = 0xEA8; // bool
}

public static class CWeaponBizon { // CCSWeaponBaseGun
}

public static class CWeaponCZ75a { // CCSWeaponBaseGun
}

public static class CWeaponElite { // CCSWeaponBaseGun
}

public static class CWeaponFamas { // CCSWeaponBaseGun
}

public static class CWeaponFiveSeven { // CCSWeaponBaseGun
}

public static class CWeaponG3SG1 { // CCSWeaponBaseGun
}

public static class CWeaponGalilAR { // CCSWeaponBaseGun
}

public static class CWeaponGlock { // CCSWeaponBaseGun
}

public static class CWeaponHKP2000 { // CCSWeaponBaseGun
}

public static class CWeaponM249 { // CCSWeaponBaseGun
}

public static class CWeaponM4A1 { // CCSWeaponBaseGun
}

public static class CWeaponM4A1Silencer { // CCSWeaponBaseGun
}

public static class CWeaponMAC10 { // CCSWeaponBaseGun
}

public static class CWeaponMP5SD { // CCSWeaponBaseGun
}

public static class CWeaponMP7 { // CCSWeaponBaseGun
}

public static class CWeaponMP9 { // CCSWeaponBaseGun
}

public static class CWeaponMag7 { // CCSWeaponBaseGun
}

public static class CWeaponNOVA { // CCSWeaponBase
}

public static class CWeaponNegev { // CCSWeaponBaseGun
}

public static class CWeaponP250 { // CCSWeaponBaseGun
}

public static class CWeaponP90 { // CCSWeaponBaseGun
}

public static class CWeaponRevolver { // CCSWeaponBaseGun
}

public static class CWeaponSCAR20 { // CCSWeaponBaseGun
}

public static class CWeaponSG556 { // CCSWeaponBaseGun
}

public static class CWeaponSSG08 { // CCSWeaponBaseGun
}

public static class CWeaponSawedoff { // CCSWeaponBase
}

public static class CWeaponShield { // CCSWeaponBaseGun
    public const nint m_flBulletDamageAbsorbed = 0xEB0; // float
    public const nint m_flLastBulletHitSoundTime = 0xEB4; // GameTime_t
    public const nint m_flDisplayHealth = 0xEB8; // float
}

public static class CWeaponTaser { // CCSWeaponBaseGun
    public const nint m_fFireTime = 0xEB0; // GameTime_t
}

public static class CWeaponTec9 { // CCSWeaponBaseGun
}

public static class CWeaponUMP45 { // CCSWeaponBaseGun
}

public static class CWeaponUSPSilencer { // CCSWeaponBaseGun
}

public static class CWeaponXM1014 { // CCSWeaponBase
}

public static class CWeaponZoneRepulsor { // CCSWeaponBaseGun
}

public static class CWorld { // CBaseModelEntity
}

public static class CommandToolCommand_t {
    public const nint m_bEnabled = 0x0; // bool
    public const nint m_bOpened = 0x1; // bool
    public const nint m_InternalId = 0x4; // uint32_t
    public const nint m_ShortName = 0x8; // CUtlString
    public const nint m_ExecMode = 0x10; // CommandExecMode_t
    public const nint m_SpawnGroup = 0x18; // CUtlString
    public const nint m_PeriodicExecDelay = 0x20; // float
    public const nint m_SpecType = 0x24; // CommandEntitySpecType_t
    public const nint m_EntitySpec = 0x28; // CUtlString
    public const nint m_Commands = 0x30; // CUtlString
    public const nint m_SetDebugBits = 0x38; // DebugOverlayBits_t
    public const nint m_ClearDebugBits = 0x40; // DebugOverlayBits_t
}

public static class ConceptHistory_t {
    public const nint timeSpoken = 0x0; // float
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
    public const nint m_duration = 0x8; // float
    public const nint m_timestamp = 0xC; // GameTime_t
    public const nint m_timescale = 0x10; // float
    public const nint m_nWorldGroupId = 0x14; // WorldGroupId_t
}

public static class EngineCountdownTimer {
    public const nint m_duration = 0x8; // float
    public const nint m_timestamp = 0xC; // float
    public const nint m_timescale = 0x10; // float
}

public static class EntityRenderAttribute_t {
    public const nint m_ID = 0x30; // CUtlStringToken
    public const nint m_Values = 0x34; // Vector4D
}

public static class EntitySpottedState_t {
    public const nint m_bSpotted = 0x8; // bool
    public const nint m_bSpottedByMask = 0xC; // uint32_t[2]
}

public static class Extent {
    public const nint lo = 0x0; // Vector
    public const nint hi = 0xC; // Vector
}

public static class FilterDamageType { // CBaseFilter
    public const nint m_iDamageType = 0x518; // int32_t
}

public static class FilterHealth { // CBaseFilter
    public const nint m_bAdrenalineActive = 0x518; // bool
    public const nint m_iHealthMin = 0x51C; // int32_t
    public const nint m_iHealthMax = 0x520; // int32_t
}

public static class FilterTeam { // CBaseFilter
    public const nint m_iFilterTeam = 0x518; // int32_t
}

public static class GameAmmoTypeInfo_t { // AmmoTypeInfo_t
    public const nint m_nBuySize = 0x38; // int32_t
    public const nint m_nCost = 0x3C; // int32_t
}

public static class GameTick_t {
    public const nint m_Value = 0x0; // int32_t
}

public static class GameTime_t {
    public const nint m_Value = 0x0; // float
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

public static class IChoreoServices {
}

public static class IEconItemInterface {
}

public static class IHasAttributes {
}

public static class IRagdoll {
}

public static class ISkeletonAnimationController {
}

public static class IntervalTimer {
    public const nint m_timestamp = 0x8; // GameTime_t
    public const nint m_nWorldGroupId = 0xC; // WorldGroupId_t
}

public static class ModelConfigHandle_t {
    public const nint m_Value = 0x0; // uint32_t
}

public static class NavGravity_t {
    public const nint m_vGravity = 0x0; // Vector
    public const nint m_bDefault = 0xC; // bool
}

public static class ParticleIndex_t {
    public const nint m_Value = 0x0; // int32_t
}

public static class PhysicsRagdollPose_t {
    public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
    public const nint m_Transforms = 0x30; // CNetworkUtlVectorBase<CTransform>
    public const nint m_hOwner = 0x48; // CHandle<CBaseEntity>
}

public static class PulseScriptedSequenceData_t {
    public const nint m_nActorID = 0x0; // int32_t
    public const nint m_szPreIdleSequence = 0x8; // CUtlString
    public const nint m_szEntrySequence = 0x10; // CUtlString
    public const nint m_szSequence = 0x18; // CUtlString
    public const nint m_szExitSequence = 0x20; // CUtlString
    public const nint m_bLoopPreIdleSequence = 0x28; // bool
    public const nint m_bLoopActionSequence = 0x29; // bool
    public const nint m_bLoopPostIdleSequence = 0x2A; // bool
    public const nint m_bIgnoreLookAt = 0x2B; // bool
}

public static class QuestProgress {
}

public static class RagdollCreationParams_t {
    public const nint m_vForce = 0x0; // Vector
    public const nint m_nForceBone = 0xC; // int32_t
}

public static class RelationshipOverride_t { // Relationship_t
    public const nint entity = 0x8; // CHandle<CBaseEntity>
    public const nint classType = 0xC; // Class_T
}

public static class Relationship_t {
    public const nint disposition = 0x0; // Disposition_t
    public const nint priority = 0x4; // int32_t
}

public static class ResponseContext_t {
    public const nint m_iszName = 0x0; // CUtlSymbolLarge
    public const nint m_iszValue = 0x8; // CUtlSymbolLarge
    public const nint m_fExpirationTime = 0x10; // GameTime_t
}

public static class ResponseFollowup {
    public const nint followup_concept = 0x0; // char*
    public const nint followup_contexts = 0x8; // char*
    public const nint followup_delay = 0x10; // float
    public const nint followup_target = 0x14; // char*
    public const nint followup_entityiotarget = 0x1C; // char*
    public const nint followup_entityioinput = 0x24; // char*
    public const nint followup_entityiodelay = 0x2C; // float
    public const nint bFired = 0x30; // bool
}

public static class ResponseParams {
    public const nint odds = 0x10; // int16_t
    public const nint flags = 0x12; // int16_t
    public const nint m_pFollowup = 0x18; // ResponseFollowup*
}

public static class SellbackPurchaseEntry_t {
    public const nint m_unDefIdx = 0x30; // uint16_t
    public const nint m_nCost = 0x34; // int32_t
    public const nint m_nPrevArmor = 0x38; // int32_t
    public const nint m_bPrevHelmet = 0x3C; // bool
    public const nint m_hItem = 0x40; // CEntityHandle
}

public static class SequenceHistory_t {
    public const nint m_hSequence = 0x0; // HSequence
    public const nint m_flSeqStartTime = 0x4; // GameTime_t
    public const nint m_flSeqFixedCycle = 0x8; // float
    public const nint m_nSeqLoopMode = 0xC; // AnimLoopMode_t
    public const nint m_flPlaybackRate = 0x10; // float
    public const nint m_flCyclesPerSecond = 0x14; // float
}

public static class ServerAuthoritativeWeaponSlot_t {
    public const nint unClass = 0x28; // uint16_t
    public const nint unSlot = 0x2A; // uint16_t
    public const nint unItemDefIdx = 0x2C; // uint16_t
}

public static class SimpleConstraintSoundProfile {
    public const nint eKeypoints = 0x8; // SimpleConstraintSoundProfile::SimpleConstraintsSoundProfileKeypoints_t
    public const nint m_keyPoints = 0xC; // float[2]
    public const nint m_reversalSoundThresholds = 0x14; // float[3]
}

public static class SoundOpvarTraceResult_t {
    public const nint vPos = 0x0; // Vector
    public const nint bDidHit = 0xC; // bool
    public const nint flDistSqrToCenter = 0x10; // float
}

public static class SpawnPoint { // CServerOnlyPointEntity
    public const nint m_iPriority = 0x4C0; // int32_t
    public const nint m_bEnabled = 0x4C4; // bool
    public const nint m_nType = 0x4C8; // int32_t
}

public static class SpawnPointCoopEnemy { // SpawnPoint
    public const nint m_szWeaponsToGive = 0x4D0; // CUtlSymbolLarge
    public const nint m_szPlayerModelToUse = 0x4D8; // CUtlSymbolLarge
    public const nint m_nArmorToSpawnWith = 0x4E0; // int32_t
    public const nint m_nDefaultBehavior = 0x4E4; // SpawnPointCoopEnemy::BotDefaultBehavior_t
    public const nint m_nBotDifficulty = 0x4E8; // int32_t
    public const nint m_bIsAgressive = 0x4EC; // bool
    public const nint m_bStartAsleep = 0x4ED; // bool
    public const nint m_flHideRadius = 0x4F0; // float
    public const nint m_szBehaviorTreeFile = 0x500; // CUtlSymbolLarge
}

public static class SummaryTakeDamageInfo_t {
    public const nint nSummarisedCount = 0x0; // int32_t
    public const nint info = 0x8; // CTakeDamageInfo
    public const nint result = 0xA0; // CTakeDamageResult
    public const nint hTarget = 0xA8; // CHandle<CBaseEntity>
}

public static class VPhysicsCollisionAttribute_t {
    public const nint m_nInteractsAs = 0x8; // uint64_t
    public const nint m_nInteractsWith = 0x10; // uint64_t
    public const nint m_nInteractsExclude = 0x18; // uint64_t
    public const nint m_nEntityId = 0x20; // uint32_t
    public const nint m_nOwnerId = 0x24; // uint32_t
    public const nint m_nHierarchyId = 0x28; // uint16_t
    public const nint m_nCollisionGroup = 0x2A; // uint8_t
    public const nint m_nCollisionFunctionMask = 0x2B; // uint8_t
}

public static class VelocitySampler {
    public const nint m_prevSample = 0x0; // Vector
    public const nint m_fPrevSampleTime = 0xC; // GameTime_t
    public const nint m_fIdealSampleRate = 0x10; // float
}

public static class ViewAngleServerChange_t {
    public const nint nType = 0x30; // FixAngleSet_t
    public const nint qAngle = 0x34; // QAngle
    public const nint nIndex = 0x40; // uint32_t
}

public static class WeaponPurchaseCount_t {
    public const nint m_nItemDefIndex = 0x30; // uint16_t
    public const nint m_nCount = 0x32; // uint16_t
}

public static class WeaponPurchaseTracker_t {
    public const nint m_weaponPurchases = 0x8; // CUtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
}

public static class audioparams_t {
    public const nint localSound = 0x8; // Vector[8]
    public const nint soundscapeIndex = 0x68; // int32_t
    public const nint localBits = 0x6C; // uint8_t
    public const nint soundscapeEntityListIndex = 0x70; // int32_t
    public const nint soundEventHash = 0x74; // uint32_t
}

public static class dynpitchvol_base_t {
    public const nint preset = 0x0; // int32_t
    public const nint pitchrun = 0x4; // int32_t
    public const nint pitchstart = 0x8; // int32_t
    public const nint spinup = 0xC; // int32_t
    public const nint spindown = 0x10; // int32_t
    public const nint volrun = 0x14; // int32_t
    public const nint volstart = 0x18; // int32_t
    public const nint fadein = 0x1C; // int32_t
    public const nint fadeout = 0x20; // int32_t
    public const nint lfotype = 0x24; // int32_t
    public const nint lforate = 0x28; // int32_t
    public const nint lfomodpitch = 0x2C; // int32_t
    public const nint lfomodvol = 0x30; // int32_t
    public const nint cspinup = 0x34; // int32_t
    public const nint cspincount = 0x38; // int32_t
    public const nint pitch = 0x3C; // int32_t
    public const nint spinupsav = 0x40; // int32_t
    public const nint spindownsav = 0x44; // int32_t
    public const nint pitchfrac = 0x48; // int32_t
    public const nint vol = 0x4C; // int32_t
    public const nint fadeinsav = 0x50; // int32_t
    public const nint fadeoutsav = 0x54; // int32_t
    public const nint volfrac = 0x58; // int32_t
    public const nint lfofrac = 0x5C; // int32_t
    public const nint lfomult = 0x60; // int32_t
}

public static class dynpitchvol_t { // dynpitchvol_base_t
}

public static class fogparams_t {
    public const nint dirPrimary = 0x8; // Vector
    public const nint colorPrimary = 0x14; // Color
    public const nint colorSecondary = 0x18; // Color
    public const nint colorPrimaryLerpTo = 0x1C; // Color
    public const nint colorSecondaryLerpTo = 0x20; // Color
    public const nint start = 0x24; // float
    public const nint end = 0x28; // float
    public const nint farz = 0x2C; // float
    public const nint maxdensity = 0x30; // float
    public const nint exponent = 0x34; // float
    public const nint HDRColorScale = 0x38; // float
    public const nint skyboxFogFactor = 0x3C; // float
    public const nint skyboxFogFactorLerpTo = 0x40; // float
    public const nint startLerpTo = 0x44; // float
    public const nint endLerpTo = 0x48; // float
    public const nint maxdensityLerpTo = 0x4C; // float
    public const nint lerptime = 0x50; // GameTime_t
    public const nint duration = 0x54; // float
    public const nint blendtobackground = 0x58; // float
    public const nint scattering = 0x5C; // float
    public const nint locallightscale = 0x60; // float
    public const nint enable = 0x64; // bool
    public const nint blend = 0x65; // bool
    public const nint m_bNoReflectionFog = 0x66; // bool
    public const nint m_bPadding = 0x67; // bool
}

public static class fogplayerparams_t {
    public const nint m_hCtrl = 0x8; // CHandle<CFogController>
    public const nint m_flTransitionTime = 0xC; // float
    public const nint m_OldColor = 0x10; // Color
    public const nint m_flOldStart = 0x14; // float
    public const nint m_flOldEnd = 0x18; // float
    public const nint m_flOldMaxDensity = 0x1C; // float
    public const nint m_flOldHDRColorScale = 0x20; // float
    public const nint m_flOldFarZ = 0x24; // float
    public const nint m_NewColor = 0x28; // Color
    public const nint m_flNewStart = 0x2C; // float
    public const nint m_flNewEnd = 0x30; // float
    public const nint m_flNewMaxDensity = 0x34; // float
    public const nint m_flNewHDRColorScale = 0x38; // float
    public const nint m_flNewFarZ = 0x3C; // float
}

public static class hudtextparms_t {
    public const nint color1 = 0x0; // Color
    public const nint color2 = 0x4; // Color
    public const nint effect = 0x8; // uint8_t
    public const nint channel = 0x9; // uint8_t
    public const nint x = 0xC; // float
    public const nint y = 0x10; // float
}

public static class lerpdata_t {
    public const nint m_hEnt = 0x0; // CHandle<CBaseEntity>
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
    public const nint hEntity = 0x8; // CHandle<CBaseEntity>
}

public static class ragdoll_t {
    public const nint list = 0x0; // CUtlVector<ragdollelement_t>
    public const nint boneIndex = 0x18; // CUtlVector<int32_t>
    public const nint allowStretch = 0x30; // bool
    public const nint unused = 0x31; // bool
}

public static class ragdollelement_t {
    public const nint originParentSpace = 0x0; // Vector
    public const nint parentIndex = 0x20; // int32_t
    public const nint m_flRadius = 0x24; // float
}

public static class shard_model_desc_t {
    public const nint m_nModelID = 0x8; // int32_t
    public const nint m_hMaterial = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
    public const nint m_solid = 0x18; // ShardSolid_t
    public const nint m_ShatterPanelMode = 0x19; // ShatterPanelMode
    public const nint m_vecPanelSize = 0x1C; // Vector2D
    public const nint m_vecStressPositionA = 0x24; // Vector2D
    public const nint m_vecStressPositionB = 0x2C; // Vector2D
    public const nint m_vecPanelVertices = 0x38; // CNetworkUtlVectorBase<Vector2D>
    public const nint m_flGlassHalfThickness = 0x50; // float
    public const nint m_bHasParent = 0x54; // bool
    public const nint m_bParentFrozen = 0x55; // bool
    public const nint m_SurfacePropStringToken = 0x58; // CUtlStringToken
}

public static class sky3dparams_t {
    public const nint scale = 0x8; // int16_t
    public const nint origin = 0xC; // Vector
    public const nint bClip3DSkyBoxNearToWorldFar = 0x18; // bool
    public const nint flClip3DSkyBoxNearToWorldFarOffset = 0x1C; // float
    public const nint fog = 0x20; // fogparams_t
    public const nint m_nWorldGroupID = 0x88; // WorldGroupId_t
}

public static class sndopvarlatchdata_t {
    public const nint m_iszStack = 0x8; // CUtlSymbolLarge
    public const nint m_iszOperator = 0x10; // CUtlSymbolLarge
    public const nint m_iszOpvar = 0x18; // CUtlSymbolLarge
    public const nint m_flVal = 0x20; // float
    public const nint m_vPos = 0x24; // Vector
}

public static class thinkfunc_t {
    public const nint m_hFn = 0x8; // HSCRIPT
    public const nint m_nContext = 0x10; // CUtlStringToken
    public const nint m_nNextThinkTick = 0x14; // GameTick_t
    public const nint m_nLastThinkTick = 0x18; // GameTick_t
}