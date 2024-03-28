/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 16 Mar 2024 22:03:49 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod ActiveModelConfig_t {
    pub const m_Handle: usize = 0x28; // ModelConfigHandle_t
    pub const m_Name: usize = 0x30; // CUtlSymbolLarge
    pub const m_AssociatedEntities: usize = 0x38; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    pub const m_AssociatedEntityNames: usize = 0x50; // CNetworkUtlVectorBase<CUtlSymbolLarge>
}

pub mod AmmoIndex_t {
    pub const m_Value: usize = 0x0; // int8_t
}

pub mod AmmoTypeInfo_t {
    pub const m_nMaxCarry: usize = 0x10; // int32_t
    pub const m_nSplashSize: usize = 0x1C; // CRangeInt
    pub const m_nFlags: usize = 0x24; // AmmoFlags_t
    pub const m_flMass: usize = 0x28; // float
    pub const m_flSpeed: usize = 0x2C; // CRangeFloat
}

pub mod CAISound { // CPointEntity
    pub const m_iSoundType: usize = 0x7A8; // int32_t
    pub const m_iSoundContext: usize = 0x7AC; // int32_t
    pub const m_iVolume: usize = 0x7B0; // int32_t
    pub const m_iSoundIndex: usize = 0x7B4; // int32_t
    pub const m_flDuration: usize = 0x7B8; // float
    pub const m_iszProxyEntityName: usize = 0x7C0; // CUtlSymbolLarge
}

pub mod CAI_ChangeHintGroup { // CBaseEntity
    pub const m_iSearchType: usize = 0x7A8; // int32_t
    pub const m_strSearchName: usize = 0x7B0; // CUtlSymbolLarge
    pub const m_strNewHintGroup: usize = 0x7B8; // CUtlSymbolLarge
    pub const m_flRadius: usize = 0x7C0; // float
}

pub mod CAI_Expresser {
    pub const m_flStopTalkTime: usize = 0x38; // GameTime_t
    pub const m_flStopTalkTimeWithoutDelay: usize = 0x3C; // GameTime_t
    pub const m_flBlockedTalkTime: usize = 0x40; // GameTime_t
    pub const m_voicePitch: usize = 0x44; // int32_t
    pub const m_flLastTimeAcceptedSpeak: usize = 0x48; // GameTime_t
    pub const m_bAllowSpeakingInterrupts: usize = 0x4C; // bool
    pub const m_bConsiderSceneInvolvementAsSpeech: usize = 0x4D; // bool
    pub const m_nLastSpokenPriority: usize = 0x50; // int32_t
    pub const m_pOuter: usize = 0x58; // CBaseFlex*
}

pub mod CAI_ExpresserWithFollowup { // CAI_Expresser
    pub const m_pPostponedFollowup: usize = 0x60; // ResponseFollowup*
}

pub mod CAK47 { // CCSWeaponBaseGun
}

pub mod CAmbientGeneric { // CPointEntity
    pub const m_radius: usize = 0x7A8; // float
    pub const m_flMaxRadius: usize = 0x7AC; // float
    pub const m_iSoundLevel: usize = 0x7B0; // soundlevel_t
    pub const m_dpv: usize = 0x7B4; // dynpitchvol_t
    pub const m_fActive: usize = 0x818; // bool
    pub const m_fLooping: usize = 0x819; // bool
    pub const m_iszSound: usize = 0x820; // CUtlSymbolLarge
    pub const m_sSourceEntName: usize = 0x828; // CUtlSymbolLarge
    pub const m_hSoundSource: usize = 0x830; // CHandle<CBaseEntity>
    pub const m_nSoundSourceEntIndex: usize = 0x834; // CEntityIndex
}

pub mod CAnimEventListener { // CAnimEventListenerBase
}

pub mod CAnimEventListenerBase {
}

pub mod CAnimEventQueueListener { // CAnimEventListenerBase
}

pub mod CAnimGraphControllerBase {
}

pub mod CAnimGraphNetworkedVariables {
    pub const m_PredNetBoolVariables: usize = 0x8; // CNetworkUtlVectorBase<uint32_t>
    pub const m_PredNetByteVariables: usize = 0x20; // CNetworkUtlVectorBase<uint8_t>
    pub const m_PredNetUInt16Variables: usize = 0x38; // CNetworkUtlVectorBase<uint16_t>
    pub const m_PredNetIntVariables: usize = 0x50; // CNetworkUtlVectorBase<int32_t>
    pub const m_PredNetUInt32Variables: usize = 0x68; // CNetworkUtlVectorBase<uint32_t>
    pub const m_PredNetUInt64Variables: usize = 0x80; // CNetworkUtlVectorBase<uint64_t>
    pub const m_PredNetFloatVariables: usize = 0x98; // CNetworkUtlVectorBase<float>
    pub const m_PredNetVectorVariables: usize = 0xB0; // CNetworkUtlVectorBase<Vector>
    pub const m_PredNetQuaternionVariables: usize = 0xC8; // CNetworkUtlVectorBase<Quaternion>
    pub const m_PredNetGlobalSymbolVariables: usize = 0xE0; // CNetworkUtlVectorBase<CGlobalSymbol>
    pub const m_OwnerOnlyPredNetBoolVariables: usize = 0xF8; // CNetworkUtlVectorBase<uint32_t>
    pub const m_OwnerOnlyPredNetByteVariables: usize = 0x110; // CNetworkUtlVectorBase<uint8_t>
    pub const m_OwnerOnlyPredNetUInt16Variables: usize = 0x128; // CNetworkUtlVectorBase<uint16_t>
    pub const m_OwnerOnlyPredNetIntVariables: usize = 0x140; // CNetworkUtlVectorBase<int32_t>
    pub const m_OwnerOnlyPredNetUInt32Variables: usize = 0x158; // CNetworkUtlVectorBase<uint32_t>
    pub const m_OwnerOnlyPredNetUInt64Variables: usize = 0x170; // CNetworkUtlVectorBase<uint64_t>
    pub const m_OwnerOnlyPredNetFloatVariables: usize = 0x188; // CNetworkUtlVectorBase<float>
    pub const m_OwnerOnlyPredNetVectorVariables: usize = 0x1A0; // CNetworkUtlVectorBase<Vector>
    pub const m_OwnerOnlyPredNetQuaternionVariables: usize = 0x1B8; // CNetworkUtlVectorBase<Quaternion>
    pub const m_OwnerOnlyPredNetGlobalSymbolVariables: usize = 0x1D0; // CNetworkUtlVectorBase<CGlobalSymbol>
    pub const m_nBoolVariablesCount: usize = 0x1E8; // int32_t
    pub const m_nOwnerOnlyBoolVariablesCount: usize = 0x1EC; // int32_t
    pub const m_nRandomSeedOffset: usize = 0x1F0; // int32_t
    pub const m_flLastTeleportTime: usize = 0x1F4; // float
}

pub mod CAttributeContainer { // CAttributeManager
    pub const m_Item: usize = 0x50; // CEconItemView
}

pub mod CAttributeList {
    pub const m_Attributes: usize = 0x8; // CUtlVectorEmbeddedNetworkVar<CEconItemAttribute>
    pub const m_pManager: usize = 0x58; // CAttributeManager*
}

pub mod CAttributeManager {
    pub const m_Providers: usize = 0x8; // CUtlVector<CHandle<CBaseEntity>>
    pub const m_iReapplyProvisionParity: usize = 0x20; // int32_t
    pub const m_hOuter: usize = 0x24; // CHandle<CBaseEntity>
    pub const m_bPreventLoopback: usize = 0x28; // bool
    pub const m_ProviderType: usize = 0x2C; // attributeprovidertypes_t
    pub const m_CachedResults: usize = 0x30; // CUtlVector<CAttributeManager::cached_attribute_float_t>
}

pub mod CAttributeManager_cached_attribute_float_t {
    pub const flIn: usize = 0x0; // float
    pub const iAttribHook: usize = 0x8; // CUtlSymbolLarge
    pub const flOut: usize = 0x10; // float
}

pub mod CBarnLight { // CBaseModelEntity
    pub const m_bEnabled: usize = 0x9F8; // bool
    pub const m_nColorMode: usize = 0x9FC; // int32_t
    pub const m_Color: usize = 0xA00; // Color
    pub const m_flColorTemperature: usize = 0xA04; // float
    pub const m_flBrightness: usize = 0xA08; // float
    pub const m_flBrightnessScale: usize = 0xA0C; // float
    pub const m_nDirectLight: usize = 0xA10; // int32_t
    pub const m_nBakedShadowIndex: usize = 0xA14; // int32_t
    pub const m_nLuminaireShape: usize = 0xA18; // int32_t
    pub const m_flLuminaireSize: usize = 0xA1C; // float
    pub const m_flLuminaireAnisotropy: usize = 0xA20; // float
    pub const m_LightStyleString: usize = 0xA28; // CUtlString
    pub const m_flLightStyleStartTime: usize = 0xA30; // GameTime_t
    pub const m_QueuedLightStyleStrings: usize = 0xA38; // CNetworkUtlVectorBase<CUtlString>
    pub const m_LightStyleEvents: usize = 0xA50; // CNetworkUtlVectorBase<CUtlString>
    pub const m_LightStyleTargets: usize = 0xA68; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    pub const m_StyleEvent: usize = 0xA80; // CEntityIOOutput[4]
    pub const m_hLightCookie: usize = 0xB40; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_flShape: usize = 0xB48; // float
    pub const m_flSoftX: usize = 0xB4C; // float
    pub const m_flSoftY: usize = 0xB50; // float
    pub const m_flSkirt: usize = 0xB54; // float
    pub const m_flSkirtNear: usize = 0xB58; // float
    pub const m_vSizeParams: usize = 0xB5C; // Vector
    pub const m_flRange: usize = 0xB68; // float
    pub const m_vShear: usize = 0xB6C; // Vector
    pub const m_nBakeSpecularToCubemaps: usize = 0xB78; // int32_t
    pub const m_vBakeSpecularToCubemapsSize: usize = 0xB7C; // Vector
    pub const m_nCastShadows: usize = 0xB88; // int32_t
    pub const m_nShadowMapSize: usize = 0xB8C; // int32_t
    pub const m_nShadowPriority: usize = 0xB90; // int32_t
    pub const m_bContactShadow: usize = 0xB94; // bool
    pub const m_nBounceLight: usize = 0xB98; // int32_t
    pub const m_flBounceScale: usize = 0xB9C; // float
    pub const m_flMinRoughness: usize = 0xBA0; // float
    pub const m_vAlternateColor: usize = 0xBA4; // Vector
    pub const m_fAlternateColorBrightness: usize = 0xBB0; // float
    pub const m_nFog: usize = 0xBB4; // int32_t
    pub const m_flFogStrength: usize = 0xBB8; // float
    pub const m_nFogShadows: usize = 0xBBC; // int32_t
    pub const m_flFogScale: usize = 0xBC0; // float
    pub const m_flFadeSizeStart: usize = 0xBC4; // float
    pub const m_flFadeSizeEnd: usize = 0xBC8; // float
    pub const m_flShadowFadeSizeStart: usize = 0xBCC; // float
    pub const m_flShadowFadeSizeEnd: usize = 0xBD0; // float
    pub const m_bPrecomputedFieldsValid: usize = 0xBD4; // bool
    pub const m_vPrecomputedBoundsMins: usize = 0xBD8; // Vector
    pub const m_vPrecomputedBoundsMaxs: usize = 0xBE4; // Vector
    pub const m_vPrecomputedOBBOrigin: usize = 0xBF0; // Vector
    pub const m_vPrecomputedOBBAngles: usize = 0xBFC; // QAngle
    pub const m_vPrecomputedOBBExtent: usize = 0xC08; // Vector
    pub const m_bPvsModifyEntity: usize = 0xC14; // bool
}

pub mod CBaseAnimGraph { // CBaseModelEntity
    pub const m_bInitiallyPopulateInterpHistory: usize = 0xA70; // bool
    pub const m_pChoreoServices: usize = 0xA78; // IChoreoServices*
    pub const m_bAnimGraphUpdateEnabled: usize = 0xA80; // bool
    pub const m_flMaxSlopeDistance: usize = 0xA84; // float
    pub const m_vLastSlopeCheckPos: usize = 0xA88; // Vector
    pub const m_bAnimationUpdateScheduled: usize = 0xA94; // bool
    pub const m_vecForce: usize = 0xA98; // Vector
    pub const m_nForceBone: usize = 0xAA4; // int32_t
    pub const m_pRagdollPose: usize = 0xAB8; // PhysicsRagdollPose_t*
    pub const m_bClientRagdoll: usize = 0xAC0; // bool
}

pub mod CBaseAnimGraphController { // CSkeletonAnimationController
    pub const m_animGraphNetworkedVars: usize = 0x18; // CAnimGraphNetworkedVariables
    pub const m_bSequenceFinished: usize = 0x220; // bool
    pub const m_flSoundSyncTime: usize = 0x224; // float
    pub const m_hSequence: usize = 0x228; // HSequence
    pub const m_flSeqStartTime: usize = 0x22C; // GameTime_t
    pub const m_flSeqFixedCycle: usize = 0x230; // float
    pub const m_nAnimLoopMode: usize = 0x234; // AnimLoopMode_t
    pub const m_flPlaybackRate: usize = 0x238; // CNetworkedQuantizedFloat
    pub const m_nNotifyState: usize = 0x244; // SequenceFinishNotifyState_t
    pub const m_bNetworkedAnimationInputsChanged: usize = 0x246; // bool
    pub const m_bNetworkedSequenceChanged: usize = 0x247; // bool
    pub const m_bLastUpdateSkipped: usize = 0x248; // bool
    pub const m_flPrevAnimUpdateTime: usize = 0x24C; // GameTime_t
}

pub mod CBaseButton { // CBaseToggle
    pub const m_angMoveEntitySpace: usize = 0xA78; // QAngle
    pub const m_fStayPushed: usize = 0xA84; // bool
    pub const m_fRotating: usize = 0xA85; // bool
    pub const m_ls: usize = 0xA88; // locksound_t
    pub const m_sUseSound: usize = 0xAA8; // CUtlSymbolLarge
    pub const m_sLockedSound: usize = 0xAB0; // CUtlSymbolLarge
    pub const m_sUnlockedSound: usize = 0xAB8; // CUtlSymbolLarge
    pub const m_bLocked: usize = 0xAC0; // bool
    pub const m_bDisabled: usize = 0xAC1; // bool
    pub const m_flUseLockedTime: usize = 0xAC4; // GameTime_t
    pub const m_bSolidBsp: usize = 0xAC8; // bool
    pub const m_OnDamaged: usize = 0xAD0; // CEntityIOOutput
    pub const m_OnPressed: usize = 0xAF8; // CEntityIOOutput
    pub const m_OnUseLocked: usize = 0xB20; // CEntityIOOutput
    pub const m_OnIn: usize = 0xB48; // CEntityIOOutput
    pub const m_OnOut: usize = 0xB70; // CEntityIOOutput
    pub const m_nState: usize = 0xB98; // int32_t
    pub const m_hConstraint: usize = 0xB9C; // CEntityHandle
    pub const m_hConstraintParent: usize = 0xBA0; // CEntityHandle
    pub const m_bForceNpcExclude: usize = 0xBA4; // bool
    pub const m_sGlowEntity: usize = 0xBA8; // CUtlSymbolLarge
    pub const m_glowEntity: usize = 0xBB0; // CHandle<CBaseModelEntity>
    pub const m_usable: usize = 0xBB4; // bool
    pub const m_szDisplayText: usize = 0xBB8; // CUtlSymbolLarge
}

pub mod CBaseCSGrenade { // CCSWeaponBase
    pub const m_bRedraw: usize = 0x1198; // bool
    pub const m_bIsHeldByPlayer: usize = 0x1199; // bool
    pub const m_bPinPulled: usize = 0x119A; // bool
    pub const m_bJumpThrow: usize = 0x119B; // bool
    pub const m_bThrowAnimating: usize = 0x119C; // bool
    pub const m_fThrowTime: usize = 0x11A0; // GameTime_t
    pub const m_flThrowStrength: usize = 0x11A4; // float
    pub const m_flThrowStrengthApproach: usize = 0x11A8; // float
    pub const m_fDropTime: usize = 0x11AC; // GameTime_t
    pub const m_bJustPulledPin: usize = 0x11B0; // bool
    pub const m_nNextHoldTick: usize = 0x11B4; // GameTick_t
    pub const m_flNextHoldFrac: usize = 0x11B8; // float
    pub const m_hSwitchToWeaponAfterThrow: usize = 0x11BC; // CHandle<CCSWeaponBase>
}

pub mod CBaseCSGrenadeProjectile { // CBaseGrenade
    pub const m_vInitialPosition: usize = 0xD24; // Vector
    pub const m_vInitialVelocity: usize = 0xD30; // Vector
    pub const m_nBounces: usize = 0xD3C; // int32_t
    pub const m_nExplodeEffectIndex: usize = 0xD40; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    pub const m_nExplodeEffectTickBegin: usize = 0xD48; // int32_t
    pub const m_vecExplodeEffectOrigin: usize = 0xD4C; // Vector
    pub const m_flSpawnTime: usize = 0xD58; // GameTime_t
    pub const m_unOGSExtraFlags: usize = 0xD5C; // uint8_t
    pub const m_bDetonationRecorded: usize = 0xD5D; // bool
    pub const m_flDetonateTime: usize = 0xD60; // GameTime_t
    pub const m_nItemIndex: usize = 0xD64; // uint16_t
    pub const m_vecOriginalSpawnLocation: usize = 0xD68; // Vector
    pub const m_flLastBounceSoundTime: usize = 0xD74; // GameTime_t
    pub const m_vecGrenadeSpin: usize = 0xD78; // RotationVector
    pub const m_vecLastHitSurfaceNormal: usize = 0xD84; // Vector
    pub const m_nTicksAtZeroVelocity: usize = 0xD90; // int32_t
    pub const m_bHasEverHitPlayer: usize = 0xD94; // bool
    pub const m_bClearFromPlayers: usize = 0xD95; // bool
}

pub mod CBaseClientUIEntity { // CBaseModelEntity
    pub const m_bEnabled: usize = 0x9F8; // bool
    pub const m_DialogXMLName: usize = 0xA00; // CUtlSymbolLarge
    pub const m_PanelClassName: usize = 0xA08; // CUtlSymbolLarge
    pub const m_PanelID: usize = 0xA10; // CUtlSymbolLarge
    pub const m_CustomOutput0: usize = 0xA18; // CEntityIOOutput
    pub const m_CustomOutput1: usize = 0xA40; // CEntityIOOutput
    pub const m_CustomOutput2: usize = 0xA68; // CEntityIOOutput
    pub const m_CustomOutput3: usize = 0xA90; // CEntityIOOutput
    pub const m_CustomOutput4: usize = 0xAB8; // CEntityIOOutput
    pub const m_CustomOutput5: usize = 0xAE0; // CEntityIOOutput
    pub const m_CustomOutput6: usize = 0xB08; // CEntityIOOutput
    pub const m_CustomOutput7: usize = 0xB30; // CEntityIOOutput
    pub const m_CustomOutput8: usize = 0xB58; // CEntityIOOutput
    pub const m_CustomOutput9: usize = 0xB80; // CEntityIOOutput
}

pub mod CBaseCombatCharacter { // CBaseFlex
    pub const m_bForceServerRagdoll: usize = 0xC80; // bool
    pub const m_hMyWearables: usize = 0xC88; // CNetworkUtlVectorBase<CHandle<CEconWearable>>
    pub const m_flFieldOfView: usize = 0xCA0; // float
    pub const m_impactEnergyScale: usize = 0xCA4; // float
    pub const m_LastHitGroup: usize = 0xCA8; // HitGroup_t
    pub const m_bApplyStressDamage: usize = 0xCAC; // bool
    pub const m_bloodColor: usize = 0xCB0; // int32_t
    pub const m_iDamageCount: usize = 0xCF8; // int32_t
    pub const m_pVecRelationships: usize = 0xD00; // CUtlVector<RelationshipOverride_t>*
    pub const m_strRelationships: usize = 0xD08; // CUtlSymbolLarge
    pub const m_eHull: usize = 0xD10; // Hull_t
    pub const m_nNavHullIdx: usize = 0xD14; // uint32_t
}

pub mod CBaseDMStart { // CPointEntity
    pub const m_Master: usize = 0x7A8; // CUtlSymbolLarge
}

pub mod CBaseDoor { // CBaseToggle
    pub const m_angMoveEntitySpace: usize = 0xA84; // QAngle
    pub const m_vecMoveDirParentSpace: usize = 0xA90; // Vector
    pub const m_ls: usize = 0xAA0; // locksound_t
    pub const m_bForceClosed: usize = 0xAC0; // bool
    pub const m_bDoorGroup: usize = 0xAC1; // bool
    pub const m_bLocked: usize = 0xAC2; // bool
    pub const m_bIgnoreDebris: usize = 0xAC3; // bool
    pub const m_eSpawnPosition: usize = 0xAC4; // FuncDoorSpawnPos_t
    pub const m_flBlockDamage: usize = 0xAC8; // float
    pub const m_NoiseMoving: usize = 0xAD0; // CUtlSymbolLarge
    pub const m_NoiseArrived: usize = 0xAD8; // CUtlSymbolLarge
    pub const m_NoiseMovingClosed: usize = 0xAE0; // CUtlSymbolLarge
    pub const m_NoiseArrivedClosed: usize = 0xAE8; // CUtlSymbolLarge
    pub const m_ChainTarget: usize = 0xAF0; // CUtlSymbolLarge
    pub const m_OnBlockedClosing: usize = 0xAF8; // CEntityIOOutput
    pub const m_OnBlockedOpening: usize = 0xB20; // CEntityIOOutput
    pub const m_OnUnblockedClosing: usize = 0xB48; // CEntityIOOutput
    pub const m_OnUnblockedOpening: usize = 0xB70; // CEntityIOOutput
    pub const m_OnFullyClosed: usize = 0xB98; // CEntityIOOutput
    pub const m_OnFullyOpen: usize = 0xBC0; // CEntityIOOutput
    pub const m_OnClose: usize = 0xBE8; // CEntityIOOutput
    pub const m_OnOpen: usize = 0xC10; // CEntityIOOutput
    pub const m_OnLockedUse: usize = 0xC38; // CEntityIOOutput
    pub const m_bLoopMoveSound: usize = 0xC60; // bool
    pub const m_bCreateNavObstacle: usize = 0xC78; // bool
    pub const m_isChaining: usize = 0xC79; // bool
    pub const m_bIsUsable: usize = 0xC7A; // bool
}

pub mod CBaseEntity { // CEntityInstance
    pub const m_CBodyComponent: usize = 0x38; // CBodyComponent*
    pub const m_NetworkTransmitComponent: usize = 0x40; // CNetworkTransmitComponent
    pub const m_aThinkFunctions: usize = 0x4F0; // CUtlVector<thinkfunc_t>
    pub const m_iCurrentThinkContext: usize = 0x508; // int32_t
    pub const m_nLastThinkTick: usize = 0x50C; // GameTick_t
    pub const m_nDisableContextThinkStartTick: usize = 0x510; // GameTick_t
    pub const m_isSteadyState: usize = 0x520; // CBitVec<64>
    pub const m_lastNetworkChange: usize = 0x528; // float
    pub const m_ResponseContexts: usize = 0x540; // CUtlVector<ResponseContext_t>
    pub const m_iszResponseContext: usize = 0x558; // CUtlSymbolLarge
    pub const m_iHealth: usize = 0x5A0; // int32_t
    pub const m_iMaxHealth: usize = 0x5A4; // int32_t
    pub const m_lifeState: usize = 0x5A8; // uint8_t
    pub const m_flDamageAccumulator: usize = 0x5AC; // float
    pub const m_bTakesDamage: usize = 0x5B0; // bool
    pub const m_nTakeDamageFlags: usize = 0x5B4; // TakeDamageFlags_t
    pub const m_bIsPlatform: usize = 0x5B8; // bool
    pub const m_MoveCollide: usize = 0x5BA; // MoveCollide_t
    pub const m_MoveType: usize = 0x5BB; // MoveType_t
    pub const m_nActualMoveType: usize = 0x5BC; // MoveType_t
    pub const m_nWaterTouch: usize = 0x5BD; // uint8_t
    pub const m_nSlimeTouch: usize = 0x5BE; // uint8_t
    pub const m_bRestoreInHierarchy: usize = 0x5BF; // bool
    pub const m_target: usize = 0x5C0; // CUtlSymbolLarge
    pub const m_hDamageFilter: usize = 0x5C8; // CHandle<CBaseFilter>
    pub const m_iszDamageFilterName: usize = 0x5D0; // CUtlSymbolLarge
    pub const m_flMoveDoneTime: usize = 0x5D8; // float
    pub const m_nSubclassID: usize = 0x5DC; // CUtlStringToken
    pub const m_flAnimTime: usize = 0x5E8; // float
    pub const m_flSimulationTime: usize = 0x5EC; // float
    pub const m_flCreateTime: usize = 0x5F0; // GameTime_t
    pub const m_bClientSideRagdoll: usize = 0x5F4; // bool
    pub const m_ubInterpolationFrame: usize = 0x5F5; // uint8_t
    pub const m_vPrevVPhysicsUpdatePos: usize = 0x5F8; // Vector
    pub const m_iTeamNum: usize = 0x604; // uint8_t
    pub const m_iGlobalname: usize = 0x608; // CUtlSymbolLarge
    pub const m_iSentToClients: usize = 0x610; // int32_t
    pub const m_flSpeed: usize = 0x614; // float
    pub const m_sUniqueHammerID: usize = 0x618; // CUtlString
    pub const m_spawnflags: usize = 0x620; // uint32_t
    pub const m_nNextThinkTick: usize = 0x624; // GameTick_t
    pub const m_nSimulationTick: usize = 0x628; // int32_t
    pub const m_OnKilled: usize = 0x630; // CEntityIOOutput
    pub const m_fFlags: usize = 0x658; // uint32_t
    pub const m_vecAbsVelocity: usize = 0x65C; // Vector
    pub const m_vecVelocity: usize = 0x668; // CNetworkVelocityVector
    pub const m_vecBaseVelocity: usize = 0x698; // Vector
    pub const m_nPushEnumCount: usize = 0x6A4; // int32_t
    pub const m_pCollision: usize = 0x6A8; // CCollisionProperty*
    pub const m_hEffectEntity: usize = 0x6B0; // CHandle<CBaseEntity>
    pub const m_hOwnerEntity: usize = 0x6B4; // CHandle<CBaseEntity>
    pub const m_fEffects: usize = 0x6B8; // uint32_t
    pub const m_hGroundEntity: usize = 0x6BC; // CHandle<CBaseEntity>
    pub const m_flFriction: usize = 0x6C0; // float
    pub const m_flElasticity: usize = 0x6C4; // float
    pub const m_flGravityScale: usize = 0x6C8; // float
    pub const m_flTimeScale: usize = 0x6CC; // float
    pub const m_flWaterLevel: usize = 0x6D0; // float
    pub const m_bAnimatedEveryTick: usize = 0x6D4; // bool
    pub const m_bDisableLowViolence: usize = 0x6D5; // bool
    pub const m_nWaterType: usize = 0x6D6; // uint8_t
    pub const m_iEFlags: usize = 0x6D8; // int32_t
    pub const m_OnUser1: usize = 0x6E0; // CEntityIOOutput
    pub const m_OnUser2: usize = 0x708; // CEntityIOOutput
    pub const m_OnUser3: usize = 0x730; // CEntityIOOutput
    pub const m_OnUser4: usize = 0x758; // CEntityIOOutput
    pub const m_iInitialTeamNum: usize = 0x780; // int32_t
    pub const m_flNavIgnoreUntilTime: usize = 0x784; // GameTime_t
    pub const m_vecAngVelocity: usize = 0x788; // QAngle
    pub const m_bNetworkQuantizeOriginAndAngles: usize = 0x794; // bool
    pub const m_bLagCompensate: usize = 0x795; // bool
    pub const m_flOverriddenFriction: usize = 0x798; // float
    pub const m_pBlocker: usize = 0x79C; // CHandle<CBaseEntity>
    pub const m_flLocalTime: usize = 0x7A0; // float
    pub const m_flVPhysicsUpdateLocalTime: usize = 0x7A4; // float
}

pub mod CBaseEntityAPI {
}

pub mod CBaseFilter { // CLogicalEntity
    pub const m_bNegated: usize = 0x7A8; // bool
    pub const m_OnPass: usize = 0x7B0; // CEntityIOOutput
    pub const m_OnFail: usize = 0x7D8; // CEntityIOOutput
}

pub mod CBaseFire { // CBaseEntity
    pub const m_flScale: usize = 0x7A8; // float
    pub const m_flStartScale: usize = 0x7AC; // float
    pub const m_flScaleTime: usize = 0x7B0; // float
    pub const m_nFlags: usize = 0x7B4; // uint32_t
}

pub mod CBaseFlex { // CBaseAnimGraph
    pub const m_flexWeight: usize = 0xBF0; // CNetworkUtlVectorBase<float>
    pub const m_vLookTargetPosition: usize = 0xC08; // Vector
    pub const m_blinktoggle: usize = 0xC14; // bool
    pub const m_flAllowResponsesEndTime: usize = 0xC68; // GameTime_t
    pub const m_flLastFlexAnimationTime: usize = 0xC6C; // GameTime_t
    pub const m_nNextSceneEventId: usize = 0xC70; // uint32_t
    pub const m_bUpdateLayerPriorities: usize = 0xC74; // bool
}

pub mod CBaseFlexAlias_funCBaseFlex { // CBaseFlex
}

pub mod CBaseGrenade { // CBaseFlex
    pub const m_OnPlayerPickup: usize = 0xC88; // CEntityIOOutput
    pub const m_OnExplode: usize = 0xCB0; // CEntityIOOutput
    pub const m_bHasWarnedAI: usize = 0xCD8; // bool
    pub const m_bIsSmokeGrenade: usize = 0xCD9; // bool
    pub const m_bIsLive: usize = 0xCDA; // bool
    pub const m_DmgRadius: usize = 0xCDC; // float
    pub const m_flDetonateTime: usize = 0xCE0; // GameTime_t
    pub const m_flWarnAITime: usize = 0xCE4; // float
    pub const m_flDamage: usize = 0xCE8; // float
    pub const m_iszBounceSound: usize = 0xCF0; // CUtlSymbolLarge
    pub const m_ExplosionSound: usize = 0xCF8; // CUtlString
    pub const m_hThrower: usize = 0xD04; // CHandle<CCSPlayerPawn>
    pub const m_flNextAttack: usize = 0xD1C; // GameTime_t
    pub const m_hOriginalThrower: usize = 0xD20; // CHandle<CCSPlayerPawn>
}

pub mod CBaseIssue {
    pub const m_szTypeString: usize = 0x20; // char[64]
    pub const m_szDetailsString: usize = 0x60; // char[4096]
    pub const m_iNumYesVotes: usize = 0x1060; // int32_t
    pub const m_iNumNoVotes: usize = 0x1064; // int32_t
    pub const m_iNumPotentialVotes: usize = 0x1068; // int32_t
    pub const m_pVoteController: usize = 0x1070; // CVoteController*
}

pub mod CBaseModelEntity { // CBaseEntity
    pub const m_CRenderComponent: usize = 0x7A8; // CRenderComponent*
    pub const m_CHitboxComponent: usize = 0x7B0; // CHitboxComponent
    pub const m_flDissolveStartTime: usize = 0x7D8; // GameTime_t
    pub const m_OnIgnite: usize = 0x7E0; // CEntityIOOutput
    pub const m_nRenderMode: usize = 0x808; // RenderMode_t
    pub const m_nRenderFX: usize = 0x809; // RenderFx_t
    pub const m_bAllowFadeInView: usize = 0x80A; // bool
    pub const m_clrRender: usize = 0x80B; // Color
    pub const m_vecRenderAttributes: usize = 0x810; // CUtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
    pub const m_bRenderToCubemaps: usize = 0x860; // bool
    pub const m_Collision: usize = 0x868; // CCollisionProperty
    pub const m_Glow: usize = 0x918; // CGlowProperty
    pub const m_flGlowBackfaceMult: usize = 0x970; // float
    pub const m_fadeMinDist: usize = 0x974; // float
    pub const m_fadeMaxDist: usize = 0x978; // float
    pub const m_flFadeScale: usize = 0x97C; // float
    pub const m_flShadowStrength: usize = 0x980; // float
    pub const m_nObjectCulling: usize = 0x984; // uint8_t
    pub const m_nAddDecal: usize = 0x988; // int32_t
    pub const m_vDecalPosition: usize = 0x98C; // Vector
    pub const m_vDecalForwardAxis: usize = 0x998; // Vector
    pub const m_flDecalHealBloodRate: usize = 0x9A4; // float
    pub const m_flDecalHealHeightRate: usize = 0x9A8; // float
    pub const m_ConfigEntitiesToPropagateMaterialDecalsTo: usize = 0x9B0; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    pub const m_vecViewOffset: usize = 0x9C8; // CNetworkViewOffsetVector
}

pub mod CBaseMoveBehavior { // CPathKeyFrame
    pub const m_iPositionInterpolator: usize = 0x7F4; // int32_t
    pub const m_iRotationInterpolator: usize = 0x7F8; // int32_t
    pub const m_flAnimStartTime: usize = 0x7FC; // float
    pub const m_flAnimEndTime: usize = 0x800; // float
    pub const m_flAverageSpeedAcrossFrame: usize = 0x804; // float
    pub const m_pCurrentKeyFrame: usize = 0x808; // CPathKeyFrame*
    pub const m_pTargetKeyFrame: usize = 0x810; // CPathKeyFrame*
    pub const m_pPreKeyFrame: usize = 0x818; // CPathKeyFrame*
    pub const m_pPostKeyFrame: usize = 0x820; // CPathKeyFrame*
    pub const m_flTimeIntoFrame: usize = 0x828; // float
    pub const m_iDirection: usize = 0x82C; // int32_t
}

pub mod CBasePlatTrain { // CBaseToggle
    pub const m_NoiseMoving: usize = 0xA78; // CUtlSymbolLarge
    pub const m_NoiseArrived: usize = 0xA80; // CUtlSymbolLarge
    pub const m_volume: usize = 0xA90; // float
    pub const m_flTWidth: usize = 0xA94; // float
    pub const m_flTLength: usize = 0xA98; // float
}

pub mod CBasePlayerController { // CBaseEntity
    pub const m_nInButtonsWhichAreToggles: usize = 0x7B0; // uint64_t
    pub const m_nTickBase: usize = 0x7B8; // uint32_t
    pub const m_hPawn: usize = 0x7E8; // CHandle<CBasePlayerPawn>
    pub const m_nSplitScreenSlot: usize = 0x7EC; // CSplitScreenSlot
    pub const m_hSplitOwner: usize = 0x7F0; // CHandle<CBasePlayerController>
    pub const m_hSplitScreenPlayers: usize = 0x7F8; // CUtlVector<CHandle<CBasePlayerController>>
    pub const m_bIsHLTV: usize = 0x810; // bool
    pub const m_iConnected: usize = 0x814; // PlayerConnectedState
    pub const m_iszPlayerName: usize = 0x818; // char[128]
    pub const m_szNetworkIDString: usize = 0x898; // CUtlString
    pub const m_fLerpTime: usize = 0x8A0; // float
    pub const m_bLagCompensation: usize = 0x8A4; // bool
    pub const m_bPredict: usize = 0x8A5; // bool
    pub const m_bAutoKickDisabled: usize = 0x8A6; // bool
    pub const m_bIsLowViolence: usize = 0x8A7; // bool
    pub const m_bGamePaused: usize = 0x8A8; // bool
    pub const m_nLastRealCommandNumberExecuted: usize = 0x934; // int32_t
    pub const m_nLastLateCommandExecuted: usize = 0x938; // int32_t
    pub const m_iIgnoreGlobalChat: usize = 0x950; // ChatIgnoreType_t
    pub const m_flLastPlayerTalkTime: usize = 0x954; // float
    pub const m_flLastEntitySteadyState: usize = 0x958; // float
    pub const m_nAvailableEntitySteadyState: usize = 0x95C; // int32_t
    pub const m_bHasAnySteadyStateEnts: usize = 0x960; // bool
    pub const m_steamID: usize = 0x970; // uint64_t
    pub const m_iDesiredFOV: usize = 0x978; // uint32_t
}

pub mod CBasePlayerControllerAPI {
}

pub mod CBasePlayerPawn { // CBaseCombatCharacter
    pub const m_pWeaponServices: usize = 0xD18; // CPlayer_WeaponServices*
    pub const m_pItemServices: usize = 0xD20; // CPlayer_ItemServices*
    pub const m_pAutoaimServices: usize = 0xD28; // CPlayer_AutoaimServices*
    pub const m_pObserverServices: usize = 0xD30; // CPlayer_ObserverServices*
    pub const m_pWaterServices: usize = 0xD38; // CPlayer_WaterServices*
    pub const m_pUseServices: usize = 0xD40; // CPlayer_UseServices*
    pub const m_pFlashlightServices: usize = 0xD48; // CPlayer_FlashlightServices*
    pub const m_pCameraServices: usize = 0xD50; // CPlayer_CameraServices*
    pub const m_pMovementServices: usize = 0xD58; // CPlayer_MovementServices*
    pub const m_ServerViewAngleChanges: usize = 0xD68; // CUtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
    pub const m_nHighestGeneratedServerViewAngleChangeIndex: usize = 0xDB8; // uint32_t
    pub const v_angle: usize = 0xDBC; // QAngle
    pub const v_anglePrevious: usize = 0xDC8; // QAngle
    pub const m_iHideHUD: usize = 0xDD4; // uint32_t
    pub const m_skybox3d: usize = 0xDD8; // sky3dparams_t
    pub const m_fTimeLastHurt: usize = 0xE68; // GameTime_t
    pub const m_flDeathTime: usize = 0xE6C; // GameTime_t
    pub const m_fNextSuicideTime: usize = 0xE70; // GameTime_t
    pub const m_fInitHUD: usize = 0xE74; // bool
    pub const m_pExpresser: usize = 0xE78; // CAI_Expresser*
    pub const m_hController: usize = 0xE80; // CHandle<CBasePlayerController>
    pub const m_fHltvReplayDelay: usize = 0xE88; // float
    pub const m_fHltvReplayEnd: usize = 0xE8C; // float
    pub const m_iHltvReplayEntity: usize = 0xE90; // CEntityIndex
    pub const m_sndOpvarLatchData: usize = 0xE98; // CUtlVector<sndopvarlatchdata_t>
}

pub mod CBasePlayerVData { // CEntitySubclassVDataBase
    pub const m_sModelName: usize = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    pub const m_flHeadDamageMultiplier: usize = 0x108; // CSkillFloat
    pub const m_flChestDamageMultiplier: usize = 0x118; // CSkillFloat
    pub const m_flStomachDamageMultiplier: usize = 0x128; // CSkillFloat
    pub const m_flArmDamageMultiplier: usize = 0x138; // CSkillFloat
    pub const m_flLegDamageMultiplier: usize = 0x148; // CSkillFloat
    pub const m_flHoldBreathTime: usize = 0x158; // float
    pub const m_flDrowningDamageInterval: usize = 0x15C; // float
    pub const m_nDrowningDamageInitial: usize = 0x160; // int32_t
    pub const m_nDrowningDamageMax: usize = 0x164; // int32_t
    pub const m_nWaterSpeed: usize = 0x168; // int32_t
    pub const m_flUseRange: usize = 0x16C; // float
    pub const m_flUseAngleTolerance: usize = 0x170; // float
    pub const m_flCrouchTime: usize = 0x174; // float
}

pub mod CBasePlayerWeapon { // CEconEntity
    pub const m_nNextPrimaryAttackTick: usize = 0xF78; // GameTick_t
    pub const m_flNextPrimaryAttackTickRatio: usize = 0xF7C; // float
    pub const m_nNextSecondaryAttackTick: usize = 0xF80; // GameTick_t
    pub const m_flNextSecondaryAttackTickRatio: usize = 0xF84; // float
    pub const m_iClip1: usize = 0xF88; // int32_t
    pub const m_iClip2: usize = 0xF8C; // int32_t
    pub const m_pReserveAmmo: usize = 0xF90; // int32_t[2]
    pub const m_OnPlayerUse: usize = 0xF98; // CEntityIOOutput
}

pub mod CBasePlayerWeaponVData { // CEntitySubclassVDataBase
    pub const m_szWorldModel: usize = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    pub const m_bBuiltRightHanded: usize = 0x108; // bool
    pub const m_bAllowFlipping: usize = 0x109; // bool
    pub const m_sMuzzleAttachment: usize = 0x110; // CUtlString
    pub const m_szMuzzleFlashParticle: usize = 0x118; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    pub const m_iFlags: usize = 0x1F8; // ItemFlagTypes_t
    pub const m_nPrimaryAmmoType: usize = 0x1F9; // AmmoIndex_t
    pub const m_nSecondaryAmmoType: usize = 0x1FA; // AmmoIndex_t
    pub const m_iMaxClip1: usize = 0x1FC; // int32_t
    pub const m_iMaxClip2: usize = 0x200; // int32_t
    pub const m_iDefaultClip1: usize = 0x204; // int32_t
    pub const m_iDefaultClip2: usize = 0x208; // int32_t
    pub const m_iWeight: usize = 0x20C; // int32_t
    pub const m_bAutoSwitchTo: usize = 0x210; // bool
    pub const m_bAutoSwitchFrom: usize = 0x211; // bool
    pub const m_iRumbleEffect: usize = 0x214; // RumbleEffect_t
    pub const m_bLinkedCooldowns: usize = 0x218; // bool
    pub const m_aShootSounds: usize = 0x220; // CUtlMap<WeaponSound_t,CSoundEventName>
    pub const m_iSlot: usize = 0x240; // int32_t
    pub const m_iPosition: usize = 0x244; // int32_t
}

pub mod CBaseProp { // CBaseAnimGraph
    pub const m_bModelOverrodeBlockLOS: usize = 0xBF0; // bool
    pub const m_iShapeType: usize = 0xBF4; // int32_t
    pub const m_bConformToCollisionBounds: usize = 0xBF8; // bool
    pub const m_mPreferredCatchTransform: usize = 0xBFC; // matrix3x4_t
}

pub mod CBasePropDoor { // CDynamicProp
    pub const m_flAutoReturnDelay: usize = 0xE74; // float
    pub const m_hDoorList: usize = 0xE78; // CUtlVector<CHandle<CBasePropDoor>>
    pub const m_nHardwareType: usize = 0xE90; // int32_t
    pub const m_bNeedsHardware: usize = 0xE94; // bool
    pub const m_eDoorState: usize = 0xE98; // DoorState_t
    pub const m_bLocked: usize = 0xE9C; // bool
    pub const m_closedPosition: usize = 0xEA0; // Vector
    pub const m_closedAngles: usize = 0xEAC; // QAngle
    pub const m_hBlocker: usize = 0xEB8; // CHandle<CBaseEntity>
    pub const m_bFirstBlocked: usize = 0xEBC; // bool
    pub const m_ls: usize = 0xEC0; // locksound_t
    pub const m_bForceClosed: usize = 0xEE0; // bool
    pub const m_vecLatchWorldPosition: usize = 0xEE4; // Vector
    pub const m_hActivator: usize = 0xEF0; // CHandle<CBaseEntity>
    pub const m_SoundMoving: usize = 0xF00; // CUtlSymbolLarge
    pub const m_SoundOpen: usize = 0xF08; // CUtlSymbolLarge
    pub const m_SoundClose: usize = 0xF10; // CUtlSymbolLarge
    pub const m_SoundLock: usize = 0xF18; // CUtlSymbolLarge
    pub const m_SoundUnlock: usize = 0xF20; // CUtlSymbolLarge
    pub const m_SoundLatch: usize = 0xF28; // CUtlSymbolLarge
    pub const m_SoundPound: usize = 0xF30; // CUtlSymbolLarge
    pub const m_SoundJiggle: usize = 0xF38; // CUtlSymbolLarge
    pub const m_SoundLockedAnim: usize = 0xF40; // CUtlSymbolLarge
    pub const m_numCloseAttempts: usize = 0xF48; // int32_t
    pub const m_nPhysicsMaterial: usize = 0xF4C; // CUtlStringToken
    pub const m_SlaveName: usize = 0xF50; // CUtlSymbolLarge
    pub const m_hMaster: usize = 0xF58; // CHandle<CBasePropDoor>
    pub const m_OnBlockedClosing: usize = 0xF60; // CEntityIOOutput
    pub const m_OnBlockedOpening: usize = 0xF88; // CEntityIOOutput
    pub const m_OnUnblockedClosing: usize = 0xFB0; // CEntityIOOutput
    pub const m_OnUnblockedOpening: usize = 0xFD8; // CEntityIOOutput
    pub const m_OnFullyClosed: usize = 0x1000; // CEntityIOOutput
    pub const m_OnFullyOpen: usize = 0x1028; // CEntityIOOutput
    pub const m_OnClose: usize = 0x1050; // CEntityIOOutput
    pub const m_OnOpen: usize = 0x1078; // CEntityIOOutput
    pub const m_OnLockedUse: usize = 0x10A0; // CEntityIOOutput
    pub const m_OnAjarOpen: usize = 0x10C8; // CEntityIOOutput
}

pub mod CBaseToggle { // CBaseModelEntity
    pub const m_toggle_state: usize = 0x9F8; // TOGGLE_STATE
    pub const m_flMoveDistance: usize = 0x9FC; // float
    pub const m_flWait: usize = 0xA00; // float
    pub const m_flLip: usize = 0xA04; // float
    pub const m_bAlwaysFireBlockedOutputs: usize = 0xA08; // bool
    pub const m_vecPosition1: usize = 0xA0C; // Vector
    pub const m_vecPosition2: usize = 0xA18; // Vector
    pub const m_vecMoveAng: usize = 0xA24; // QAngle
    pub const m_vecAngle1: usize = 0xA30; // QAngle
    pub const m_vecAngle2: usize = 0xA3C; // QAngle
    pub const m_flHeight: usize = 0xA48; // float
    pub const m_hActivator: usize = 0xA4C; // CHandle<CBaseEntity>
    pub const m_vecFinalDest: usize = 0xA50; // Vector
    pub const m_vecFinalAngle: usize = 0xA5C; // QAngle
    pub const m_movementType: usize = 0xA68; // int32_t
    pub const m_sMaster: usize = 0xA70; // CUtlSymbolLarge
}

pub mod CBaseTrigger { // CBaseToggle
    pub const m_bDisabled: usize = 0xA78; // bool
    pub const m_iFilterName: usize = 0xA80; // CUtlSymbolLarge
    pub const m_hFilter: usize = 0xA88; // CHandle<CBaseFilter>
    pub const m_OnStartTouch: usize = 0xA90; // CEntityIOOutput
    pub const m_OnStartTouchAll: usize = 0xAB8; // CEntityIOOutput
    pub const m_OnEndTouch: usize = 0xAE0; // CEntityIOOutput
    pub const m_OnEndTouchAll: usize = 0xB08; // CEntityIOOutput
    pub const m_OnTouching: usize = 0xB30; // CEntityIOOutput
    pub const m_OnNotTouching: usize = 0xB58; // CEntityIOOutput
    pub const m_hTouchingEntities: usize = 0xB80; // CUtlVector<CHandle<CBaseEntity>>
    pub const m_bClientSidePredicted: usize = 0xB98; // bool
}

pub mod CBaseViewModel { // CBaseAnimGraph
    pub const m_vecLastFacing: usize = 0xBF8; // Vector
    pub const m_nViewModelIndex: usize = 0xC04; // uint32_t
    pub const m_nAnimationParity: usize = 0xC08; // uint32_t
    pub const m_flAnimationStartTime: usize = 0xC0C; // float
    pub const m_hWeapon: usize = 0xC10; // CHandle<CBasePlayerWeapon>
    pub const m_sVMName: usize = 0xC18; // CUtlSymbolLarge
    pub const m_sAnimationPrefix: usize = 0xC20; // CUtlSymbolLarge
    pub const m_hOldLayerSequence: usize = 0xC28; // HSequence
    pub const m_oldLayer: usize = 0xC2C; // int32_t
    pub const m_oldLayerStartTime: usize = 0xC30; // float
    pub const m_hControlPanel: usize = 0xC34; // CHandle<CBaseEntity>
}

pub mod CBeam { // CBaseModelEntity
    pub const m_flFrameRate: usize = 0x9F8; // float
    pub const m_flHDRColorScale: usize = 0x9FC; // float
    pub const m_flFireTime: usize = 0xA00; // GameTime_t
    pub const m_flDamage: usize = 0xA04; // float
    pub const m_nNumBeamEnts: usize = 0xA08; // uint8_t
    pub const m_hBaseMaterial: usize = 0xA10; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_nHaloIndex: usize = 0xA18; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_nBeamType: usize = 0xA20; // BeamType_t
    pub const m_nBeamFlags: usize = 0xA24; // uint32_t
    pub const m_hAttachEntity: usize = 0xA28; // CHandle<CBaseEntity>[10]
    pub const m_nAttachIndex: usize = 0xA50; // AttachmentHandle_t[10]
    pub const m_fWidth: usize = 0xA5C; // float
    pub const m_fEndWidth: usize = 0xA60; // float
    pub const m_fFadeLength: usize = 0xA64; // float
    pub const m_fHaloScale: usize = 0xA68; // float
    pub const m_fAmplitude: usize = 0xA6C; // float
    pub const m_fStartFrame: usize = 0xA70; // float
    pub const m_fSpeed: usize = 0xA74; // float
    pub const m_flFrame: usize = 0xA78; // float
    pub const m_nClipStyle: usize = 0xA7C; // BeamClipStyle_t
    pub const m_bTurnedOff: usize = 0xA80; // bool
    pub const m_vecEndPos: usize = 0xA84; // Vector
    pub const m_hEndEntity: usize = 0xA90; // CHandle<CBaseEntity>
    pub const m_nDissolveType: usize = 0xA94; // int32_t
}

pub mod CBlood { // CPointEntity
    pub const m_vecSprayAngles: usize = 0x7A8; // QAngle
    pub const m_vecSprayDir: usize = 0x7B4; // Vector
    pub const m_flAmount: usize = 0x7C0; // float
    pub const m_Color: usize = 0x7C4; // int32_t
}

pub mod CBodyComponent { // CEntityComponent
    pub const m_pSceneNode: usize = 0x8; // CGameSceneNode*
    pub const __m_pChainEntity: usize = 0x28; // CNetworkVarChainer
}

pub mod CBodyComponentBaseAnimGraph { // CBodyComponentSkeletonInstance
    pub const m_animationController: usize = 0x478; // CBaseAnimGraphController
    pub const __m_pChainEntity: usize = 0x980; // CNetworkVarChainer
}

pub mod CBodyComponentBaseModelEntity { // CBodyComponentSkeletonInstance
    pub const __m_pChainEntity: usize = 0x478; // CNetworkVarChainer
}

pub mod CBodyComponentPoint { // CBodyComponent
    pub const m_sceneNode: usize = 0x60; // CGameSceneNode
    pub const __m_pChainEntity: usize = 0x1C0; // CNetworkVarChainer
}

pub mod CBodyComponentSkeletonInstance { // CBodyComponent
    pub const m_skeletonInstance: usize = 0x60; // CSkeletonInstance
    pub const __m_pChainEntity: usize = 0x450; // CNetworkVarChainer
}

pub mod CBombTarget { // CBaseTrigger
    pub const m_OnBombExplode: usize = 0xBA0; // CEntityIOOutput
    pub const m_OnBombPlanted: usize = 0xBC8; // CEntityIOOutput
    pub const m_OnBombDefused: usize = 0xBF0; // CEntityIOOutput
    pub const m_bIsBombSiteB: usize = 0xC18; // bool
    pub const m_bIsHeistBombTarget: usize = 0xC19; // bool
    pub const m_bBombPlantedHere: usize = 0xC1A; // bool
    pub const m_szMountTarget: usize = 0xC20; // CUtlSymbolLarge
    pub const m_hInstructorHint: usize = 0xC28; // CHandle<CBaseEntity>
    pub const m_nBombSiteDesignation: usize = 0xC2C; // int32_t
}

pub mod CBot {
    pub const m_pController: usize = 0x10; // CCSPlayerController*
    pub const m_pPlayer: usize = 0x18; // CCSPlayerPawn*
    pub const m_bHasSpawned: usize = 0x20; // bool
    pub const m_id: usize = 0x24; // uint32_t
    pub const m_isRunning: usize = 0xA8; // bool
    pub const m_isCrouching: usize = 0xA9; // bool
    pub const m_forwardSpeed: usize = 0xAC; // float
    pub const m_leftSpeed: usize = 0xB0; // float
    pub const m_verticalSpeed: usize = 0xB4; // float
    pub const m_buttonFlags: usize = 0xB8; // uint64_t
    pub const m_jumpTimestamp: usize = 0xC0; // float
    pub const m_viewForward: usize = 0xC4; // Vector
    pub const m_postureStackIndex: usize = 0xE0; // int32_t
}

pub mod CBreachCharge { // CCSWeaponBase
}

pub mod CBreachChargeProjectile { // CBaseGrenade
}

pub mod CBreakable { // CBaseModelEntity
    pub const m_Material: usize = 0xA08; // Materials
    pub const m_hBreaker: usize = 0xA0C; // CHandle<CBaseEntity>
    pub const m_Explosion: usize = 0xA10; // Explosions
    pub const m_iszSpawnObject: usize = 0xA18; // CUtlSymbolLarge
    pub const m_flPressureDelay: usize = 0xA20; // float
    pub const m_iMinHealthDmg: usize = 0xA24; // int32_t
    pub const m_iszPropData: usize = 0xA28; // CUtlSymbolLarge
    pub const m_impactEnergyScale: usize = 0xA30; // float
    pub const m_nOverrideBlockLOS: usize = 0xA34; // EOverrideBlockLOS_t
    pub const m_OnBreak: usize = 0xA38; // CEntityIOOutput
    pub const m_OnHealthChanged: usize = 0xA60; // CEntityOutputTemplate<float>
    pub const m_flDmgModBullet: usize = 0xA88; // float
    pub const m_flDmgModClub: usize = 0xA8C; // float
    pub const m_flDmgModExplosive: usize = 0xA90; // float
    pub const m_flDmgModFire: usize = 0xA94; // float
    pub const m_iszPhysicsDamageTableName: usize = 0xA98; // CUtlSymbolLarge
    pub const m_iszBasePropData: usize = 0xAA0; // CUtlSymbolLarge
    pub const m_iInteractions: usize = 0xAA8; // int32_t
    pub const m_PerformanceMode: usize = 0xAAC; // PerformanceMode_t
    pub const m_hPhysicsAttacker: usize = 0xAB0; // CHandle<CBasePlayerPawn>
    pub const m_flLastPhysicsInfluenceTime: usize = 0xAB4; // GameTime_t
}

pub mod CBreakableProp { // CBaseProp
    pub const m_OnBreak: usize = 0xC40; // CEntityIOOutput
    pub const m_OnHealthChanged: usize = 0xC68; // CEntityOutputTemplate<float>
    pub const m_OnTakeDamage: usize = 0xC90; // CEntityIOOutput
    pub const m_impactEnergyScale: usize = 0xCB8; // float
    pub const m_iMinHealthDmg: usize = 0xCBC; // int32_t
    pub const m_preferredCarryAngles: usize = 0xCC0; // QAngle
    pub const m_flPressureDelay: usize = 0xCCC; // float
    pub const m_hBreaker: usize = 0xCD0; // CHandle<CBaseEntity>
    pub const m_PerformanceMode: usize = 0xCD4; // PerformanceMode_t
    pub const m_flDmgModBullet: usize = 0xCD8; // float
    pub const m_flDmgModClub: usize = 0xCDC; // float
    pub const m_flDmgModExplosive: usize = 0xCE0; // float
    pub const m_flDmgModFire: usize = 0xCE4; // float
    pub const m_iszPhysicsDamageTableName: usize = 0xCE8; // CUtlSymbolLarge
    pub const m_iszBasePropData: usize = 0xCF0; // CUtlSymbolLarge
    pub const m_iInteractions: usize = 0xCF8; // int32_t
    pub const m_flPreventDamageBeforeTime: usize = 0xCFC; // GameTime_t
    pub const m_bHasBreakPiecesOrCommands: usize = 0xD00; // bool
    pub const m_explodeDamage: usize = 0xD04; // float
    pub const m_explodeRadius: usize = 0xD08; // float
    pub const m_explosionDelay: usize = 0xD10; // float
    pub const m_explosionBuildupSound: usize = 0xD18; // CUtlSymbolLarge
    pub const m_explosionCustomEffect: usize = 0xD20; // CUtlSymbolLarge
    pub const m_explosionCustomSound: usize = 0xD28; // CUtlSymbolLarge
    pub const m_explosionModifier: usize = 0xD30; // CUtlSymbolLarge
    pub const m_hPhysicsAttacker: usize = 0xD38; // CHandle<CBasePlayerPawn>
    pub const m_flLastPhysicsInfluenceTime: usize = 0xD3C; // GameTime_t
    pub const m_bOriginalBlockLOS: usize = 0xD40; // bool
    pub const m_flDefaultFadeScale: usize = 0xD44; // float
    pub const m_hLastAttacker: usize = 0xD48; // CHandle<CBaseEntity>
    pub const m_hFlareEnt: usize = 0xD4C; // CHandle<CBaseEntity>
    pub const m_bUsePuntSound: usize = 0xD50; // bool
    pub const m_iszPuntSound: usize = 0xD58; // CUtlSymbolLarge
    pub const m_noGhostCollision: usize = 0xD60; // bool
}

pub mod CBreakableStageHelper {
    pub const m_nCurrentStage: usize = 0x8; // int32_t
    pub const m_nStageCount: usize = 0xC; // int32_t
}

pub mod CBtActionAim { // CBtNode
    pub const m_szSensorInputKey: usize = 0x68; // CUtlString
    pub const m_szAimReadyKey: usize = 0x80; // CUtlString
    pub const m_flZoomCooldownTimestamp: usize = 0x88; // float
    pub const m_bDoneAiming: usize = 0x8C; // bool
    pub const m_flLerpStartTime: usize = 0x90; // float
    pub const m_flNextLookTargetLerpTime: usize = 0x94; // float
    pub const m_flPenaltyReductionRatio: usize = 0x98; // float
    pub const m_NextLookTarget: usize = 0x9C; // QAngle
    pub const m_AimTimer: usize = 0xA8; // CountdownTimer
    pub const m_SniperHoldTimer: usize = 0xC0; // CountdownTimer
    pub const m_FocusIntervalTimer: usize = 0xD8; // CountdownTimer
    pub const m_bAcquired: usize = 0xF0; // bool
}

pub mod CBtActionCombatPositioning { // CBtNode
    pub const m_szSensorInputKey: usize = 0x68; // CUtlString
    pub const m_szIsAttackingKey: usize = 0x80; // CUtlString
    pub const m_ActionTimer: usize = 0x88; // CountdownTimer
    pub const m_bCrouching: usize = 0xA0; // bool
}

pub mod CBtActionMoveTo { // CBtNode
    pub const m_szDestinationInputKey: usize = 0x60; // CUtlString
    pub const m_szHidingSpotInputKey: usize = 0x68; // CUtlString
    pub const m_szThreatInputKey: usize = 0x70; // CUtlString
    pub const m_vecDestination: usize = 0x78; // Vector
    pub const m_bAutoLookAdjust: usize = 0x84; // bool
    pub const m_bComputePath: usize = 0x85; // bool
    pub const m_flDamagingAreasPenaltyCost: usize = 0x88; // float
    pub const m_CheckApproximateCornersTimer: usize = 0x90; // CountdownTimer
    pub const m_CheckHighPriorityItem: usize = 0xA8; // CountdownTimer
    pub const m_RepathTimer: usize = 0xC0; // CountdownTimer
    pub const m_flArrivalEpsilon: usize = 0xD8; // float
    pub const m_flAdditionalArrivalEpsilon2D: usize = 0xDC; // float
    pub const m_flHidingSpotCheckDistanceThreshold: usize = 0xE0; // float
    pub const m_flNearestAreaDistanceThreshold: usize = 0xE4; // float
}

pub mod CBtActionParachutePositioning { // CBtNode
    pub const m_ActionTimer: usize = 0x58; // CountdownTimer
}

pub mod CBtNode {
}

pub mod CBtNodeComposite { // CBtNode
}

pub mod CBtNodeCondition { // CBtNodeDecorator
    pub const m_bNegated: usize = 0x58; // bool
}

pub mod CBtNodeConditionInactive { // CBtNodeCondition
    pub const m_flRoundStartThresholdSeconds: usize = 0x78; // float
    pub const m_flSensorInactivityThresholdSeconds: usize = 0x7C; // float
    pub const m_SensorInactivityTimer: usize = 0x80; // CountdownTimer
}

pub mod CBtNodeDecorator { // CBtNode
}

pub mod CBubbling { // CBaseModelEntity
    pub const m_density: usize = 0x9F8; // int32_t
    pub const m_frequency: usize = 0x9FC; // int32_t
    pub const m_state: usize = 0xA00; // int32_t
}

pub mod CBumpMine { // CCSWeaponBase
}

pub mod CBumpMineProjectile { // CBaseGrenade
}

pub mod CBuoyancyHelper {
    pub const m_flFluidDensity: usize = 0x18; // float
}

pub mod CBuyZone { // CBaseTrigger
    pub const m_LegacyTeamNum: usize = 0xB9C; // int32_t
}

pub mod CC4 { // CCSWeaponBase
    pub const m_vecLastValidPlayerHeldPosition: usize = 0x1198; // Vector
    pub const m_vecLastValidDroppedPosition: usize = 0x11A4; // Vector
    pub const m_bDoValidDroppedPositionCheck: usize = 0x11B0; // bool
    pub const m_bStartedArming: usize = 0x11B1; // bool
    pub const m_fArmedTime: usize = 0x11B4; // GameTime_t
    pub const m_bBombPlacedAnimation: usize = 0x11B8; // bool
    pub const m_bIsPlantingViaUse: usize = 0x11B9; // bool
    pub const m_entitySpottedState: usize = 0x11C0; // EntitySpottedState_t
    pub const m_nSpotRules: usize = 0x11D8; // int32_t
    pub const m_bPlayedArmingBeeps: usize = 0x11DC; // bool[7]
    pub const m_bBombPlanted: usize = 0x11E3; // bool
}

pub mod CCSArmsRaceScript { // CCSGameModeScript
    pub const m_pOuter: usize = 0xD8; // CCSGameModeRules_ArmsRace*
}

pub mod CCSBot { // CBot
    pub const m_lastCoopSpawnPoint: usize = 0xE4; // CHandle<SpawnPointCoopEnemy>
    pub const m_eyePosition: usize = 0xF0; // Vector
    pub const m_name: usize = 0xFC; // char[64]
    pub const m_combatRange: usize = 0x13C; // float
    pub const m_isRogue: usize = 0x140; // bool
    pub const m_rogueTimer: usize = 0x148; // CountdownTimer
    pub const m_diedLastRound: usize = 0x164; // bool
    pub const m_safeTime: usize = 0x168; // float
    pub const m_wasSafe: usize = 0x16C; // bool
    pub const m_blindFire: usize = 0x174; // bool
    pub const m_surpriseTimer: usize = 0x178; // CountdownTimer
    pub const m_bAllowActive: usize = 0x190; // bool
    pub const m_isFollowing: usize = 0x191; // bool
    pub const m_leader: usize = 0x194; // CHandle<CCSPlayerPawn>
    pub const m_followTimestamp: usize = 0x198; // float
    pub const m_allowAutoFollowTime: usize = 0x19C; // float
    pub const m_hurryTimer: usize = 0x1A0; // CountdownTimer
    pub const m_alertTimer: usize = 0x1B8; // CountdownTimer
    pub const m_sneakTimer: usize = 0x1D0; // CountdownTimer
    pub const m_panicTimer: usize = 0x1E8; // CountdownTimer
    pub const m_stateTimestamp: usize = 0x4B8; // float
    pub const m_isAttacking: usize = 0x4BC; // bool
    pub const m_isOpeningDoor: usize = 0x4BD; // bool
    pub const m_taskEntity: usize = 0x4C4; // CHandle<CBaseEntity>
    pub const m_goalPosition: usize = 0x4D4; // Vector
    pub const m_goalEntity: usize = 0x4E0; // CHandle<CBaseEntity>
    pub const m_avoid: usize = 0x4E4; // CHandle<CBaseEntity>
    pub const m_avoidTimestamp: usize = 0x4E8; // float
    pub const m_isStopping: usize = 0x4EC; // bool
    pub const m_hasVisitedEnemySpawn: usize = 0x4ED; // bool
    pub const m_stillTimer: usize = 0x4F0; // IntervalTimer
    pub const m_bEyeAnglesUnderPathFinderControl: usize = 0x500; // bool
    pub const m_pathIndex: usize = 0x65D8; // int32_t
    pub const m_areaEnteredTimestamp: usize = 0x65DC; // GameTime_t
    pub const m_repathTimer: usize = 0x65E0; // CountdownTimer
    pub const m_avoidFriendTimer: usize = 0x65F8; // CountdownTimer
    pub const m_isFriendInTheWay: usize = 0x6610; // bool
    pub const m_politeTimer: usize = 0x6618; // CountdownTimer
    pub const m_isWaitingBehindFriend: usize = 0x6630; // bool
    pub const m_pathLadderEnd: usize = 0x665C; // float
    pub const m_mustRunTimer: usize = 0x66A8; // CountdownTimer
    pub const m_waitTimer: usize = 0x66C0; // CountdownTimer
    pub const m_updateTravelDistanceTimer: usize = 0x66D8; // CountdownTimer
    pub const m_playerTravelDistance: usize = 0x66F0; // float[64]
    pub const m_travelDistancePhase: usize = 0x67F0; // uint8_t
    pub const m_hostageEscortCount: usize = 0x6988; // uint8_t
    pub const m_hostageEscortCountTimestamp: usize = 0x698C; // float
    pub const m_desiredTeam: usize = 0x6990; // int32_t
    pub const m_hasJoined: usize = 0x6994; // bool
    pub const m_isWaitingForHostage: usize = 0x6995; // bool
    pub const m_inhibitWaitingForHostageTimer: usize = 0x6998; // CountdownTimer
    pub const m_waitForHostageTimer: usize = 0x69B0; // CountdownTimer
    pub const m_noisePosition: usize = 0x69C8; // Vector
    pub const m_noiseTravelDistance: usize = 0x69D4; // float
    pub const m_noiseTimestamp: usize = 0x69D8; // float
    pub const m_noiseSource: usize = 0x69E0; // CCSPlayerPawn*
    pub const m_noiseBendTimer: usize = 0x69F8; // CountdownTimer
    pub const m_bentNoisePosition: usize = 0x6A10; // Vector
    pub const m_bendNoisePositionValid: usize = 0x6A1C; // bool
    pub const m_lookAroundStateTimestamp: usize = 0x6A20; // float
    pub const m_lookAheadAngle: usize = 0x6A24; // float
    pub const m_forwardAngle: usize = 0x6A28; // float
    pub const m_inhibitLookAroundTimestamp: usize = 0x6A2C; // float
    pub const m_lookAtSpot: usize = 0x6A34; // Vector
    pub const m_lookAtSpotDuration: usize = 0x6A44; // float
    pub const m_lookAtSpotTimestamp: usize = 0x6A48; // float
    pub const m_lookAtSpotAngleTolerance: usize = 0x6A4C; // float
    pub const m_lookAtSpotClearIfClose: usize = 0x6A50; // bool
    pub const m_lookAtSpotAttack: usize = 0x6A51; // bool
    pub const m_lookAtDesc: usize = 0x6A58; // char*
    pub const m_peripheralTimestamp: usize = 0x6A60; // float
    pub const m_approachPointCount: usize = 0x6BE8; // uint8_t
    pub const m_approachPointViewPosition: usize = 0x6BEC; // Vector
    pub const m_viewSteadyTimer: usize = 0x6BF8; // IntervalTimer
    pub const m_tossGrenadeTimer: usize = 0x6C10; // CountdownTimer
    pub const m_isAvoidingGrenade: usize = 0x6C30; // CountdownTimer
    pub const m_spotCheckTimestamp: usize = 0x6C50; // float
    pub const m_checkedHidingSpotCount: usize = 0x7058; // int32_t
    pub const m_lookPitch: usize = 0x705C; // float
    pub const m_lookPitchVel: usize = 0x7060; // float
    pub const m_lookYaw: usize = 0x7064; // float
    pub const m_lookYawVel: usize = 0x7068; // float
    pub const m_targetSpot: usize = 0x706C; // Vector
    pub const m_targetSpotVelocity: usize = 0x7078; // Vector
    pub const m_targetSpotPredicted: usize = 0x7084; // Vector
    pub const m_aimError: usize = 0x7090; // QAngle
    pub const m_aimGoal: usize = 0x709C; // QAngle
    pub const m_targetSpotTime: usize = 0x70A8; // GameTime_t
    pub const m_aimFocus: usize = 0x70AC; // float
    pub const m_aimFocusInterval: usize = 0x70B0; // float
    pub const m_aimFocusNextUpdate: usize = 0x70B4; // GameTime_t
    pub const m_ignoreEnemiesTimer: usize = 0x70C0; // CountdownTimer
    pub const m_enemy: usize = 0x70D8; // CHandle<CCSPlayerPawn>
    pub const m_isEnemyVisible: usize = 0x70DC; // bool
    pub const m_visibleEnemyParts: usize = 0x70DD; // uint8_t
    pub const m_lastEnemyPosition: usize = 0x70E0; // Vector
    pub const m_lastSawEnemyTimestamp: usize = 0x70EC; // float
    pub const m_firstSawEnemyTimestamp: usize = 0x70F0; // float
    pub const m_currentEnemyAcquireTimestamp: usize = 0x70F4; // float
    pub const m_enemyDeathTimestamp: usize = 0x70F8; // float
    pub const m_friendDeathTimestamp: usize = 0x70FC; // float
    pub const m_isLastEnemyDead: usize = 0x7100; // bool
    pub const m_nearbyEnemyCount: usize = 0x7104; // int32_t
    pub const m_bomber: usize = 0x7310; // CHandle<CCSPlayerPawn>
    pub const m_nearbyFriendCount: usize = 0x7314; // int32_t
    pub const m_closestVisibleFriend: usize = 0x7318; // CHandle<CCSPlayerPawn>
    pub const m_closestVisibleHumanFriend: usize = 0x731C; // CHandle<CCSPlayerPawn>
    pub const m_attentionInterval: usize = 0x7320; // IntervalTimer
    pub const m_attacker: usize = 0x7330; // CHandle<CCSPlayerPawn>
    pub const m_attackedTimestamp: usize = 0x7334; // float
    pub const m_burnedByFlamesTimer: usize = 0x7338; // IntervalTimer
    pub const m_lastVictimID: usize = 0x7348; // int32_t
    pub const m_isAimingAtEnemy: usize = 0x734C; // bool
    pub const m_isRapidFiring: usize = 0x734D; // bool
    pub const m_equipTimer: usize = 0x7350; // IntervalTimer
    pub const m_zoomTimer: usize = 0x7360; // CountdownTimer
    pub const m_fireWeaponTimestamp: usize = 0x7378; // GameTime_t
    pub const m_lookForWeaponsOnGroundTimer: usize = 0x7380; // CountdownTimer
    pub const m_bIsSleeping: usize = 0x7398; // bool
    pub const m_isEnemySniperVisible: usize = 0x7399; // bool
    pub const m_sawEnemySniperTimer: usize = 0x73A0; // CountdownTimer
    pub const m_enemyQueueIndex: usize = 0x7458; // uint8_t
    pub const m_enemyQueueCount: usize = 0x7459; // uint8_t
    pub const m_enemyQueueAttendIndex: usize = 0x745A; // uint8_t
    pub const m_isStuck: usize = 0x745B; // bool
    pub const m_stuckTimestamp: usize = 0x745C; // GameTime_t
    pub const m_stuckSpot: usize = 0x7460; // Vector
    pub const m_wiggleTimer: usize = 0x7470; // CountdownTimer
    pub const m_stuckJumpTimer: usize = 0x7488; // CountdownTimer
    pub const m_nextCleanupCheckTimestamp: usize = 0x74A0; // GameTime_t
    pub const m_avgVel: usize = 0x74A4; // float[10]
    pub const m_avgVelIndex: usize = 0x74CC; // int32_t
    pub const m_avgVelCount: usize = 0x74D0; // int32_t
    pub const m_lastOrigin: usize = 0x74D4; // Vector
    pub const m_lastRadioRecievedTimestamp: usize = 0x74E4; // float
    pub const m_lastRadioSentTimestamp: usize = 0x74E8; // float
    pub const m_radioSubject: usize = 0x74EC; // CHandle<CCSPlayerPawn>
    pub const m_radioPosition: usize = 0x74F0; // Vector
    pub const m_voiceEndTimestamp: usize = 0x74FC; // float
    pub const m_lastValidReactionQueueFrame: usize = 0x7508; // int32_t
}

pub mod CCSDeathmatchScript { // CCSGameModeScript
    pub const m_pOuter: usize = 0xD8; // CCSGameModeRules_Deathmatch*
}

pub mod CCSDeathmatchScript_ConVars {
}

pub mod CCSGOPlayerAnimGraphState {
}

pub mod CCSGOViewModel { // CPredictedViewModel
    pub const m_bShouldIgnoreOffsetAndAccuracy: usize = 0xC38; // bool
    pub const m_nWeaponParity: usize = 0xC3C; // uint32_t
    pub const m_nOldWeaponParity: usize = 0xC40; // uint32_t
}

pub mod CCSGO_TeamIntroCharacterPosition { // CCSGO_TeamPreviewCharacterPosition
}

pub mod CCSGO_TeamIntroCounterTerroristPosition { // CCSGO_TeamIntroCharacterPosition
}

pub mod CCSGO_TeamIntroTerroristPosition { // CCSGO_TeamIntroCharacterPosition
}

pub mod CCSGO_TeamPreviewCharacterPosition { // CBaseEntity
    pub const m_nVariant: usize = 0x7A8; // int32_t
    pub const m_nRandom: usize = 0x7AC; // int32_t
    pub const m_nOrdinal: usize = 0x7B0; // int32_t
    pub const m_sWeaponName: usize = 0x7B8; // CUtlString
    pub const m_xuid: usize = 0x7C0; // uint64_t
    pub const m_agentItem: usize = 0x7C8; // CEconItemView
    pub const m_glovesItem: usize = 0xA40; // CEconItemView
    pub const m_weaponItem: usize = 0xCB8; // CEconItemView
}

pub mod CCSGO_TeamSelectCharacterPosition { // CCSGO_TeamPreviewCharacterPosition
}

pub mod CCSGO_TeamSelectCounterTerroristPosition { // CCSGO_TeamSelectCharacterPosition
}

pub mod CCSGO_TeamSelectTerroristPosition { // CCSGO_TeamSelectCharacterPosition
}

pub mod CCSGO_WingmanIntroCharacterPosition { // CCSGO_TeamIntroCharacterPosition
}

pub mod CCSGO_WingmanIntroCounterTerroristPosition { // CCSGO_WingmanIntroCharacterPosition
}

pub mod CCSGO_WingmanIntroTerroristPosition { // CCSGO_WingmanIntroCharacterPosition
}

pub mod CCSGameModeRules {
    pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
}

pub mod CCSGameModeRules_ArmsRace { // CCSGameModeRules
    pub const m_WeaponSequence: usize = 0x38; // CNetworkUtlVectorBase<CUtlString>
}

pub mod CCSGameModeRules_Deathmatch { // CCSGameModeRules
    pub const m_flDMBonusStartTime: usize = 0x38; // GameTime_t
    pub const m_flDMBonusTimeLength: usize = 0x3C; // float
    pub const m_nDMBonusWeaponLoadoutSlot: usize = 0x40; // int16_t
}

pub mod CCSGameModeRules_Noop { // CCSGameModeRules
}

pub mod CCSGameModeScript { // CBasePulseGraphInstance
}

pub mod CCSGameModeScript_ConVars {
}

pub mod CCSGameRules { // CTeamplayRules
    pub const __m_pChainEntity: usize = 0x98; // CNetworkVarChainer
    pub const m_coopMissionManager: usize = 0xC0; // CHandle<CBaseEntity>
    pub const m_bFreezePeriod: usize = 0xC4; // bool
    pub const m_bWarmupPeriod: usize = 0xC5; // bool
    pub const m_fWarmupPeriodEnd: usize = 0xC8; // GameTime_t
    pub const m_fWarmupPeriodStart: usize = 0xCC; // GameTime_t
    pub const m_nTotalPausedTicks: usize = 0xD0; // int32_t
    pub const m_nPauseStartTick: usize = 0xD4; // int32_t
    pub const m_bServerPaused: usize = 0xD8; // bool
    pub const m_bGamePaused: usize = 0xD9; // bool
    pub const m_bTerroristTimeOutActive: usize = 0xDA; // bool
    pub const m_bCTTimeOutActive: usize = 0xDB; // bool
    pub const m_flTerroristTimeOutRemaining: usize = 0xDC; // float
    pub const m_flCTTimeOutRemaining: usize = 0xE0; // float
    pub const m_nTerroristTimeOuts: usize = 0xE4; // int32_t
    pub const m_nCTTimeOuts: usize = 0xE8; // int32_t
    pub const m_bTechnicalTimeOut: usize = 0xEC; // bool
    pub const m_bMatchWaitingForResume: usize = 0xED; // bool
    pub const m_iRoundTime: usize = 0xF0; // int32_t
    pub const m_fMatchStartTime: usize = 0xF4; // float
    pub const m_fRoundStartTime: usize = 0xF8; // GameTime_t
    pub const m_flRestartRoundTime: usize = 0xFC; // GameTime_t
    pub const m_bGameRestart: usize = 0x100; // bool
    pub const m_flGameStartTime: usize = 0x104; // float
    pub const m_timeUntilNextPhaseStarts: usize = 0x108; // float
    pub const m_gamePhase: usize = 0x10C; // int32_t
    pub const m_totalRoundsPlayed: usize = 0x110; // int32_t
    pub const m_nRoundsPlayedThisPhase: usize = 0x114; // int32_t
    pub const m_nOvertimePlaying: usize = 0x118; // int32_t
    pub const m_iHostagesRemaining: usize = 0x11C; // int32_t
    pub const m_bAnyHostageReached: usize = 0x120; // bool
    pub const m_bMapHasBombTarget: usize = 0x121; // bool
    pub const m_bMapHasRescueZone: usize = 0x122; // bool
    pub const m_bMapHasBuyZone: usize = 0x123; // bool
    pub const m_bIsQueuedMatchmaking: usize = 0x124; // bool
    pub const m_nQueuedMatchmakingMode: usize = 0x128; // int32_t
    pub const m_bIsValveDS: usize = 0x12C; // bool
    pub const m_bLogoMap: usize = 0x12D; // bool
    pub const m_bPlayAllStepSoundsOnServer: usize = 0x12E; // bool
    pub const m_iSpectatorSlotCount: usize = 0x130; // int32_t
    pub const m_MatchDevice: usize = 0x134; // int32_t
    pub const m_bHasMatchStarted: usize = 0x138; // bool
    pub const m_nNextMapInMapgroup: usize = 0x13C; // int32_t
    pub const m_szTournamentEventName: usize = 0x140; // char[512]
    pub const m_szTournamentEventStage: usize = 0x340; // char[512]
    pub const m_szMatchStatTxt: usize = 0x540; // char[512]
    pub const m_szTournamentPredictionsTxt: usize = 0x740; // char[512]
    pub const m_nTournamentPredictionsPct: usize = 0x940; // int32_t
    pub const m_flCMMItemDropRevealStartTime: usize = 0x944; // GameTime_t
    pub const m_flCMMItemDropRevealEndTime: usize = 0x948; // GameTime_t
    pub const m_bIsDroppingItems: usize = 0x94C; // bool
    pub const m_bIsQuestEligible: usize = 0x94D; // bool
    pub const m_bIsHltvActive: usize = 0x94E; // bool
    pub const m_nGuardianModeWaveNumber: usize = 0x950; // int32_t
    pub const m_nGuardianModeSpecialKillsRemaining: usize = 0x954; // int32_t
    pub const m_nGuardianModeSpecialWeaponNeeded: usize = 0x958; // int32_t
    pub const m_nGuardianGrenadesToGiveBots: usize = 0x95C; // int32_t
    pub const m_nNumHeaviesToSpawn: usize = 0x960; // int32_t
    pub const m_numGlobalGiftsGiven: usize = 0x964; // uint32_t
    pub const m_numGlobalGifters: usize = 0x968; // uint32_t
    pub const m_numGlobalGiftsPeriodSeconds: usize = 0x96C; // uint32_t
    pub const m_arrFeaturedGiftersAccounts: usize = 0x970; // uint32_t[4]
    pub const m_arrFeaturedGiftersGifts: usize = 0x980; // uint32_t[4]
    pub const m_arrProhibitedItemIndices: usize = 0x990; // uint16_t[100]
    pub const m_arrTournamentActiveCasterAccounts: usize = 0xA58; // uint32_t[4]
    pub const m_numBestOfMaps: usize = 0xA68; // int32_t
    pub const m_nHalloweenMaskListSeed: usize = 0xA6C; // int32_t
    pub const m_bBombDropped: usize = 0xA70; // bool
    pub const m_bBombPlanted: usize = 0xA71; // bool
    pub const m_iRoundWinStatus: usize = 0xA74; // int32_t
    pub const m_eRoundWinReason: usize = 0xA78; // int32_t
    pub const m_bTCantBuy: usize = 0xA7C; // bool
    pub const m_bCTCantBuy: usize = 0xA7D; // bool
    pub const m_flGuardianBuyUntilTime: usize = 0xA80; // GameTime_t
    pub const m_iMatchStats_RoundResults: usize = 0xA84; // int32_t[30]
    pub const m_iMatchStats_PlayersAlive_CT: usize = 0xAFC; // int32_t[30]
    pub const m_iMatchStats_PlayersAlive_T: usize = 0xB74; // int32_t[30]
    pub const m_TeamRespawnWaveTimes: usize = 0xBEC; // float[32]
    pub const m_flNextRespawnWave: usize = 0xC6C; // GameTime_t[32]
    pub const m_nServerQuestID: usize = 0xCEC; // int32_t
    pub const m_vMinimapMins: usize = 0xCF0; // Vector
    pub const m_vMinimapMaxs: usize = 0xCFC; // Vector
    pub const m_MinimapVerticalSectionHeights: usize = 0xD08; // float[8]
    pub const m_bDontIncrementCoopWave: usize = 0xD28; // bool
    pub const m_bSpawnedTerrorHuntHeavy: usize = 0xD29; // bool
    pub const m_nEndMatchMapGroupVoteTypes: usize = 0xD2C; // int32_t[10]
    pub const m_nEndMatchMapGroupVoteOptions: usize = 0xD54; // int32_t[10]
    pub const m_nEndMatchMapVoteWinner: usize = 0xD7C; // int32_t
    pub const m_iNumConsecutiveCTLoses: usize = 0xD80; // int32_t
    pub const m_iNumConsecutiveTerroristLoses: usize = 0xD84; // int32_t
    pub const m_bHasHostageBeenTouched: usize = 0xDA0; // bool
    pub const m_flIntermissionStartTime: usize = 0xDA4; // GameTime_t
    pub const m_flIntermissionEndTime: usize = 0xDA8; // GameTime_t
    pub const m_bLevelInitialized: usize = 0xDAC; // bool
    pub const m_iTotalRoundsPlayed: usize = 0xDB0; // int32_t
    pub const m_iUnBalancedRounds: usize = 0xDB4; // int32_t
    pub const m_endMatchOnRoundReset: usize = 0xDB8; // bool
    pub const m_endMatchOnThink: usize = 0xDB9; // bool
    pub const m_iFreezeTime: usize = 0xDBC; // int32_t
    pub const m_iNumTerrorist: usize = 0xDC0; // int32_t
    pub const m_iNumCT: usize = 0xDC4; // int32_t
    pub const m_iNumSpawnableTerrorist: usize = 0xDC8; // int32_t
    pub const m_iNumSpawnableCT: usize = 0xDCC; // int32_t
    pub const m_arrSelectedHostageSpawnIndices: usize = 0xDD0; // CUtlVector<int32_t>
    pub const m_nSpawnPointsRandomSeed: usize = 0xDE8; // int32_t
    pub const m_bFirstConnected: usize = 0xDEC; // bool
    pub const m_bCompleteReset: usize = 0xDED; // bool
    pub const m_bPickNewTeamsOnReset: usize = 0xDEE; // bool
    pub const m_bScrambleTeamsOnRestart: usize = 0xDEF; // bool
    pub const m_bSwapTeamsOnRestart: usize = 0xDF0; // bool
    pub const m_nEndMatchTiedVotes: usize = 0xDF8; // CUtlVector<int32_t>
    pub const m_bNeedToAskPlayersForContinueVote: usize = 0xE14; // bool
    pub const m_numQueuedMatchmakingAccounts: usize = 0xE18; // uint32_t
    pub const m_pQueuedMatchmakingReservationString: usize = 0xE20; // char*
    pub const m_numTotalTournamentDrops: usize = 0xE28; // uint32_t
    pub const m_numSpectatorsCountMax: usize = 0xE2C; // uint32_t
    pub const m_numSpectatorsCountMaxTV: usize = 0xE30; // uint32_t
    pub const m_numSpectatorsCountMaxLnk: usize = 0xE34; // uint32_t
    pub const m_bForceTeamChangeSilent: usize = 0xE40; // bool
    pub const m_bLoadingRoundBackupData: usize = 0xE41; // bool
    pub const m_nMatchInfoShowType: usize = 0xE78; // int32_t
    pub const m_flMatchInfoDecidedTime: usize = 0xE7C; // float
    pub const m_flCoopRespawnAndHealTime: usize = 0xE98; // float
    pub const m_coopBonusCoinsFound: usize = 0xE9C; // int32_t
    pub const m_coopBonusPistolsOnly: usize = 0xEA0; // bool
    pub const m_coopPlayersInDeploymentZone: usize = 0xEA1; // bool
    pub const m_coopMissionDeadPlayerRespawnEnabled: usize = 0xEA2; // bool
    pub const mTeamDMLastWinningTeamNumber: usize = 0xEA4; // int32_t
    pub const mTeamDMLastThinkTime: usize = 0xEA8; // float
    pub const m_flTeamDMLastAnnouncementTime: usize = 0xEAC; // float
    pub const m_iAccountTerrorist: usize = 0xEB0; // int32_t
    pub const m_iAccountCT: usize = 0xEB4; // int32_t
    pub const m_iSpawnPointCount_Terrorist: usize = 0xEB8; // int32_t
    pub const m_iSpawnPointCount_CT: usize = 0xEBC; // int32_t
    pub const m_iMaxNumTerrorists: usize = 0xEC0; // int32_t
    pub const m_iMaxNumCTs: usize = 0xEC4; // int32_t
    pub const m_iLoserBonus: usize = 0xEC8; // int32_t
    pub const m_iLoserBonusMostRecentTeam: usize = 0xECC; // int32_t
    pub const m_tmNextPeriodicThink: usize = 0xED0; // float
    pub const m_bVoiceWonMatchBragFired: usize = 0xED4; // bool
    pub const m_fWarmupNextChatNoticeTime: usize = 0xED8; // float
    pub const m_iHostagesRescued: usize = 0xEE0; // int32_t
    pub const m_iHostagesTouched: usize = 0xEE4; // int32_t
    pub const m_flNextHostageAnnouncement: usize = 0xEE8; // float
    pub const m_bNoTerroristsKilled: usize = 0xEEC; // bool
    pub const m_bNoCTsKilled: usize = 0xEED; // bool
    pub const m_bNoEnemiesKilled: usize = 0xEEE; // bool
    pub const m_bCanDonateWeapons: usize = 0xEEF; // bool
    pub const m_firstKillTime: usize = 0xEF4; // float
    pub const m_firstBloodTime: usize = 0xEFC; // float
    pub const m_hostageWasInjured: usize = 0xF18; // bool
    pub const m_hostageWasKilled: usize = 0xF19; // bool
    pub const m_bVoteCalled: usize = 0xF28; // bool
    pub const m_bServerVoteOnReset: usize = 0xF29; // bool
    pub const m_flVoteCheckThrottle: usize = 0xF2C; // float
    pub const m_bBuyTimeEnded: usize = 0xF30; // bool
    pub const m_nLastFreezeEndBeep: usize = 0xF34; // int32_t
    pub const m_bTargetBombed: usize = 0xF38; // bool
    pub const m_bBombDefused: usize = 0xF39; // bool
    pub const m_bMapHasBombZone: usize = 0xF3A; // bool
    pub const m_vecMainCTSpawnPos: usize = 0xF58; // Vector
    pub const m_CTSpawnPointsMasterList: usize = 0xF68; // CUtlVector<SpawnPoint*>
    pub const m_TerroristSpawnPointsMasterList: usize = 0xF80; // CUtlVector<SpawnPoint*>
    pub const m_bRespawningAllRespawnablePlayers: usize = 0xF98; // bool
    pub const m_iNextCTSpawnPoint: usize = 0xF9C; // int32_t
    pub const m_flCTSpawnPointUsedTime: usize = 0xFA0; // float
    pub const m_iNextTerroristSpawnPoint: usize = 0xFA4; // int32_t
    pub const m_flTerroristSpawnPointUsedTime: usize = 0xFA8; // float
    pub const m_CTSpawnPoints: usize = 0xFB0; // CUtlVector<SpawnPoint*>
    pub const m_TerroristSpawnPoints: usize = 0xFC8; // CUtlVector<SpawnPoint*>
    pub const m_bIsUnreservedGameServer: usize = 0xFE0; // bool
    pub const m_fAutobalanceDisplayTime: usize = 0xFE4; // float
    pub const m_bAllowWeaponSwitch: usize = 0x1250; // bool
    pub const m_bRoundTimeWarningTriggered: usize = 0x1251; // bool
    pub const m_phaseChangeAnnouncementTime: usize = 0x1254; // GameTime_t
    pub const m_fNextUpdateTeamClanNamesTime: usize = 0x1258; // float
    pub const m_flLastThinkTime: usize = 0x125C; // GameTime_t
    pub const m_fAccumulatedRoundOffDamage: usize = 0x1260; // float
    pub const m_nShorthandedBonusLastEvalRound: usize = 0x1264; // int32_t
    pub const m_nMatchAbortedEarlyReason: usize = 0x14E0; // int32_t
    pub const m_bHasTriggeredRoundStartMusic: usize = 0x14E4; // bool
    pub const m_bHasTriggeredCoopSpawnReset: usize = 0x14E5; // bool
    pub const m_bSwitchingTeamsAtRoundReset: usize = 0x14E6; // bool
    pub const m_pGameModeRules: usize = 0x1500; // CCSGameModeRules*
    pub const m_BtGlobalBlackboard: usize = 0x1508; // KeyValues3
    pub const m_hPlayerResource: usize = 0x1568; // CHandle<CBaseEntity>
    pub const m_RetakeRules: usize = 0x1570; // CRetakeGameRules
    pub const m_GuardianBotSkillLevelMax: usize = 0x1754; // int32_t
    pub const m_GuardianBotSkillLevelMin: usize = 0x1758; // int32_t
    pub const m_arrTeamUniqueKillWeaponsMatch: usize = 0x1760; // CUtlVector<int32_t>[4]
    pub const m_bTeamLastKillUsedUniqueWeaponMatch: usize = 0x17C0; // bool[4]
    pub const m_nMatchEndCount: usize = 0x17E8; // uint8_t
    pub const m_nTTeamIntroVariant: usize = 0x17EC; // int32_t
    pub const m_nCTTeamIntroVariant: usize = 0x17F0; // int32_t
    pub const m_bTeamIntroPeriod: usize = 0x17F4; // bool
    pub const m_fTeamIntroPeriodEnd: usize = 0x17F8; // GameTime_t
    pub const m_bPlayedTeamIntroVO: usize = 0x17FC; // bool
    pub const m_iRoundEndWinnerTeam: usize = 0x1800; // int32_t
    pub const m_eRoundEndReason: usize = 0x1804; // int32_t
    pub const m_bRoundEndShowTimerDefend: usize = 0x1808; // bool
    pub const m_iRoundEndTimerTime: usize = 0x180C; // int32_t
    pub const m_sRoundEndFunFactToken: usize = 0x1810; // CUtlString
    pub const m_iRoundEndFunFactPlayerSlot: usize = 0x1818; // CPlayerSlot
    pub const m_iRoundEndFunFactData1: usize = 0x181C; // int32_t
    pub const m_iRoundEndFunFactData2: usize = 0x1820; // int32_t
    pub const m_iRoundEndFunFactData3: usize = 0x1824; // int32_t
    pub const m_sRoundEndMessage: usize = 0x1828; // CUtlString
    pub const m_iRoundEndPlayerCount: usize = 0x1830; // int32_t
    pub const m_bRoundEndNoMusic: usize = 0x1834; // bool
    pub const m_iRoundEndLegacy: usize = 0x1838; // int32_t
    pub const m_nRoundEndCount: usize = 0x183C; // uint8_t
    pub const m_iRoundStartRoundNumber: usize = 0x1840; // int32_t
    pub const m_nRoundStartCount: usize = 0x1844; // uint8_t
    pub const m_flLastPerfSampleTime: usize = 0x5850; // double
    pub const m_bSkipNextServerPerfSample: usize = 0x5858; // bool
}

pub mod CCSGameRulesProxy { // CGameRulesProxy
    pub const m_pGameRules: usize = 0x7A8; // CCSGameRules*
}

pub mod CCSMinimapBoundary { // CBaseEntity
}

pub mod CCSObserverPawn { // CCSPlayerPawnBase
}

pub mod CCSObserverPawnAPI {
}

pub mod CCSObserver_CameraServices { // CCSPlayerBase_CameraServices
}

pub mod CCSObserver_MovementServices { // CPlayer_MovementServices
}

pub mod CCSObserver_ObserverServices { // CPlayer_ObserverServices
}

pub mod CCSObserver_UseServices { // CPlayer_UseServices
}

pub mod CCSObserver_ViewModelServices { // CPlayer_ViewModelServices
}

pub mod CCSPlace { // CServerOnlyModelEntity
    pub const m_name: usize = 0xA00; // CUtlSymbolLarge
}

pub mod CCSPlayerBase_CameraServices { // CPlayer_CameraServices
    pub const m_iFOV: usize = 0x170; // uint32_t
    pub const m_iFOVStart: usize = 0x174; // uint32_t
    pub const m_flFOVTime: usize = 0x178; // GameTime_t
    pub const m_flFOVRate: usize = 0x17C; // float
    pub const m_hZoomOwner: usize = 0x180; // CHandle<CBaseEntity>
    pub const m_hTriggerFogList: usize = 0x188; // CUtlVector<CHandle<CBaseEntity>>
    pub const m_hLastFogTrigger: usize = 0x1A0; // CHandle<CBaseEntity>
}

pub mod CCSPlayerController { // CBasePlayerController
    pub const m_pInGameMoneyServices: usize = 0x9A8; // CCSPlayerController_InGameMoneyServices*
    pub const m_pInventoryServices: usize = 0x9B0; // CCSPlayerController_InventoryServices*
    pub const m_pActionTrackingServices: usize = 0x9B8; // CCSPlayerController_ActionTrackingServices*
    pub const m_pDamageServices: usize = 0x9C0; // CCSPlayerController_DamageServices*
    pub const m_iPing: usize = 0x9C8; // uint32_t
    pub const m_bHasCommunicationAbuseMute: usize = 0x9CC; // bool
    pub const m_szCrosshairCodes: usize = 0x9D0; // CUtlSymbolLarge
    pub const m_iPendingTeamNum: usize = 0x9D8; // uint8_t
    pub const m_flForceTeamTime: usize = 0x9DC; // GameTime_t
    pub const m_iCompTeammateColor: usize = 0x9E0; // int32_t
    pub const m_bEverPlayedOnTeam: usize = 0x9E4; // bool
    pub const m_bAttemptedToGetColor: usize = 0x9E5; // bool
    pub const m_iTeammatePreferredColor: usize = 0x9E8; // int32_t
    pub const m_bTeamChanged: usize = 0x9EC; // bool
    pub const m_bInSwitchTeam: usize = 0x9ED; // bool
    pub const m_bHasSeenJoinGame: usize = 0x9EE; // bool
    pub const m_bJustBecameSpectator: usize = 0x9EF; // bool
    pub const m_bSwitchTeamsOnNextRoundReset: usize = 0x9F0; // bool
    pub const m_bRemoveAllItemsOnNextRoundReset: usize = 0x9F1; // bool
    pub const m_szClan: usize = 0x9F8; // CUtlSymbolLarge
    pub const m_szClanName: usize = 0xA00; // char[32]
    pub const m_iCoachingTeam: usize = 0xA20; // int32_t
    pub const m_nPlayerDominated: usize = 0xA28; // uint64_t
    pub const m_nPlayerDominatingMe: usize = 0xA30; // uint64_t
    pub const m_iCompetitiveRanking: usize = 0xA38; // int32_t
    pub const m_iCompetitiveWins: usize = 0xA3C; // int32_t
    pub const m_iCompetitiveRankType: usize = 0xA40; // int8_t
    pub const m_iCompetitiveRankingPredicted_Win: usize = 0xA44; // int32_t
    pub const m_iCompetitiveRankingPredicted_Loss: usize = 0xA48; // int32_t
    pub const m_iCompetitiveRankingPredicted_Tie: usize = 0xA4C; // int32_t
    pub const m_nEndMatchNextMapVote: usize = 0xA50; // int32_t
    pub const m_unActiveQuestId: usize = 0xA54; // uint16_t
    pub const m_nQuestProgressReason: usize = 0xA58; // QuestProgress::Reason
    pub const m_unPlayerTvControlFlags: usize = 0xA5C; // uint32_t
    pub const m_iDraftIndex: usize = 0xA88; // int32_t
    pub const m_msQueuedModeDisconnectionTimestamp: usize = 0xA8C; // uint32_t
    pub const m_uiAbandonRecordedReason: usize = 0xA90; // uint32_t
    pub const m_bCannotBeKicked: usize = 0xA94; // bool
    pub const m_bEverFullyConnected: usize = 0xA95; // bool
    pub const m_bAbandonAllowsSurrender: usize = 0xA96; // bool
    pub const m_bAbandonOffersInstantSurrender: usize = 0xA97; // bool
    pub const m_bDisconnection1MinWarningPrinted: usize = 0xA98; // bool
    pub const m_bScoreReported: usize = 0xA99; // bool
    pub const m_nDisconnectionTick: usize = 0xA9C; // int32_t
    pub const m_bControllingBot: usize = 0xAA8; // bool
    pub const m_bHasControlledBotThisRound: usize = 0xAA9; // bool
    pub const m_bHasBeenControlledByPlayerThisRound: usize = 0xAAA; // bool
    pub const m_nBotsControlledThisRound: usize = 0xAAC; // int32_t
    pub const m_bCanControlObservedBot: usize = 0xAB0; // bool
    pub const m_hPlayerPawn: usize = 0xAB4; // CHandle<CCSPlayerPawn>
    pub const m_hObserverPawn: usize = 0xAB8; // CHandle<CCSObserverPawn>
    pub const m_DesiredObserverMode: usize = 0xABC; // int32_t
    pub const m_hDesiredObserverTarget: usize = 0xAC0; // CEntityHandle
    pub const m_bPawnIsAlive: usize = 0xAC4; // bool
    pub const m_iPawnHealth: usize = 0xAC8; // uint32_t
    pub const m_iPawnArmor: usize = 0xACC; // int32_t
    pub const m_bPawnHasDefuser: usize = 0xAD0; // bool
    pub const m_bPawnHasHelmet: usize = 0xAD1; // bool
    pub const m_nPawnCharacterDefIndex: usize = 0xAD2; // uint16_t
    pub const m_iPawnLifetimeStart: usize = 0xAD4; // int32_t
    pub const m_iPawnLifetimeEnd: usize = 0xAD8; // int32_t
    pub const m_iPawnBotDifficulty: usize = 0xADC; // int32_t
    pub const m_hOriginalControllerOfCurrentPawn: usize = 0xAE0; // CHandle<CCSPlayerController>
    pub const m_iScore: usize = 0xAE4; // int32_t
    pub const m_iRoundScore: usize = 0xAE8; // int32_t
    pub const m_iRoundsWon: usize = 0xAEC; // int32_t
    pub const m_vecKills: usize = 0xAF0; // CNetworkUtlVectorBase<EKillTypes_t>
    pub const m_bMvpNoMusic: usize = 0xB08; // bool
    pub const m_eMvpReason: usize = 0xB0C; // int32_t
    pub const m_iMusicKitID: usize = 0xB10; // int32_t
    pub const m_iMusicKitMVPs: usize = 0xB14; // int32_t
    pub const m_iMVPs: usize = 0xB18; // int32_t
    pub const m_nUpdateCounter: usize = 0xB1C; // int32_t
    pub const m_flSmoothedPing: usize = 0xB20; // float
    pub const m_lastHeldVoteTimer: usize = 0xFBC8; // IntervalTimer
    pub const m_bShowHints: usize = 0xFBE0; // bool
    pub const m_iNextTimeCheck: usize = 0xFBE4; // int32_t
    pub const m_bJustDidTeamKill: usize = 0xFBE8; // bool
    pub const m_bPunishForTeamKill: usize = 0xFBE9; // bool
    pub const m_bGaveTeamDamageWarning: usize = 0xFBEA; // bool
    pub const m_bGaveTeamDamageWarningThisRound: usize = 0xFBEB; // bool
    pub const m_dblLastReceivedPacketPlatFloatTime: usize = 0xFBF0; // double
    pub const m_LastTeamDamageWarningTime: usize = 0xFBF8; // GameTime_t
    pub const m_LastTimePlayerWasDisconnectedForPawnsRemove: usize = 0xFBFC; // GameTime_t
    pub const m_nSuspiciousHitCount: usize = 0xFC00; // uint32_t
    pub const m_nNonSuspiciousHitStreak: usize = 0xFC04; // uint32_t
}

pub mod CCSPlayerControllerAPI {
}

pub mod CCSPlayerController_ActionTrackingServices { // CPlayerControllerComponent
    pub const m_perRoundStats: usize = 0x40; // CUtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
    pub const m_matchStats: usize = 0x90; // CSMatchStats_t
    pub const m_iNumRoundKills: usize = 0x148; // int32_t
    pub const m_iNumRoundKillsHeadshots: usize = 0x14C; // int32_t
    pub const m_unTotalRoundDamageDealt: usize = 0x150; // uint32_t
}

pub mod CCSPlayerController_DamageServices { // CPlayerControllerComponent
    pub const m_nSendUpdate: usize = 0x40; // int32_t
    pub const m_DamageList: usize = 0x48; // CUtlVectorEmbeddedNetworkVar<CDamageRecord>
}

pub mod CCSPlayerController_InGameMoneyServices { // CPlayerControllerComponent
    pub const m_bReceivesMoneyNextRound: usize = 0x40; // bool
    pub const m_iAccountMoneyEarnedForNextRound: usize = 0x44; // int32_t
    pub const m_iAccount: usize = 0x48; // int32_t
    pub const m_iStartAccount: usize = 0x4C; // int32_t
    pub const m_iTotalCashSpent: usize = 0x50; // int32_t
    pub const m_iCashSpentThisRound: usize = 0x54; // int32_t
}

pub mod CCSPlayerController_InventoryServices { // CPlayerControllerComponent
    pub const m_unMusicID: usize = 0x40; // uint16_t
    pub const m_rank: usize = 0x44; // MedalRank_t[6]
    pub const m_nPersonaDataPublicLevel: usize = 0x5C; // int32_t
    pub const m_nPersonaDataPublicCommendsLeader: usize = 0x60; // int32_t
    pub const m_nPersonaDataPublicCommendsTeacher: usize = 0x64; // int32_t
    pub const m_nPersonaDataPublicCommendsFriendly: usize = 0x68; // int32_t
    pub const m_nPersonaDataXpTrailLevel: usize = 0x6C; // int32_t
    pub const m_unEquippedPlayerSprayIDs: usize = 0xF48; // uint32_t[1]
    pub const m_vecServerAuthoritativeWeaponSlots: usize = 0xF50; // CUtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
}

pub mod CCSPlayerPawn { // CCSPlayerPawnBase
    pub const m_pBulletServices: usize = 0x18B0; // CCSPlayer_BulletServices*
    pub const m_pHostageServices: usize = 0x18B8; // CCSPlayer_HostageServices*
    pub const m_pBuyServices: usize = 0x18C0; // CCSPlayer_BuyServices*
    pub const m_pActionTrackingServices: usize = 0x18C8; // CCSPlayer_ActionTrackingServices*
    pub const m_pRadioServices: usize = 0x18D0; // CCSPlayer_RadioServices*
    pub const m_pDamageReactServices: usize = 0x18D8; // CCSPlayer_DamageReactServices*
    pub const m_nCharacterDefIndex: usize = 0x18E0; // uint16_t
    pub const m_hPreviousModel: usize = 0x18E8; // CStrongHandle<InfoForResourceTypeCModel>
    pub const m_bHasFemaleVoice: usize = 0x18F0; // bool
    pub const m_strVOPrefix: usize = 0x18F8; // CUtlString
    pub const m_szLastPlaceName: usize = 0x1900; // char[18]
    pub const m_bInHostageResetZone: usize = 0x19C0; // bool
    pub const m_bInBuyZone: usize = 0x19C1; // bool
    pub const m_bWasInBuyZone: usize = 0x19C2; // bool
    pub const m_bInHostageRescueZone: usize = 0x19C3; // bool
    pub const m_bInBombZone: usize = 0x19C4; // bool
    pub const m_bWasInHostageRescueZone: usize = 0x19C5; // bool
    pub const m_iRetakesOffering: usize = 0x19C8; // int32_t
    pub const m_iRetakesOfferingCard: usize = 0x19CC; // int32_t
    pub const m_bRetakesHasDefuseKit: usize = 0x19D0; // bool
    pub const m_bRetakesMVPLastRound: usize = 0x19D1; // bool
    pub const m_iRetakesMVPBoostItem: usize = 0x19D4; // int32_t
    pub const m_RetakesMVPBoostExtraUtility: usize = 0x19D8; // loadout_slot_t
    pub const m_flHealthShotBoostExpirationTime: usize = 0x19DC; // GameTime_t
    pub const m_flLandseconds: usize = 0x19E0; // float
    pub const m_aimPunchAngle: usize = 0x19E4; // QAngle
    pub const m_aimPunchAngleVel: usize = 0x19F0; // QAngle
    pub const m_aimPunchTickBase: usize = 0x19FC; // int32_t
    pub const m_aimPunchTickFraction: usize = 0x1A00; // float
    pub const m_aimPunchCache: usize = 0x1A08; // CUtlVector<QAngle>
    pub const m_bIsBuyMenuOpen: usize = 0x1A20; // bool
    pub const m_xLastHeadBoneTransform: usize = 0x2060; // CTransform
    pub const m_bLastHeadBoneTransformIsValid: usize = 0x2080; // bool
    pub const m_lastLandTime: usize = 0x2084; // GameTime_t
    pub const m_bOnGroundLastTick: usize = 0x2088; // bool
    pub const m_iPlayerLocked: usize = 0x208C; // int32_t
    pub const m_flTimeOfLastInjury: usize = 0x2094; // GameTime_t
    pub const m_flNextSprayDecalTime: usize = 0x2098; // GameTime_t
    pub const m_bNextSprayDecalTimeExpedited: usize = 0x209C; // bool
    pub const m_nRagdollDamageBone: usize = 0x20A0; // int32_t
    pub const m_vRagdollDamageForce: usize = 0x20A4; // Vector
    pub const m_vRagdollDamagePosition: usize = 0x20B0; // Vector
    pub const m_szRagdollDamageWeaponName: usize = 0x20BC; // char[64]
    pub const m_bRagdollDamageHeadshot: usize = 0x20FC; // bool
    pub const m_vRagdollServerOrigin: usize = 0x2100; // Vector
    pub const m_EconGloves: usize = 0x2110; // CEconItemView
    pub const m_nEconGlovesChanged: usize = 0x2388; // uint8_t
    pub const m_qDeathEyeAngles: usize = 0x238C; // QAngle
    pub const m_bSkipOneHeadConstraintUpdate: usize = 0x2398; // bool
}

pub mod CCSPlayerPawnAPI {
}

pub mod CCSPlayerPawnBase { // CBasePlayerPawn
    pub const m_CTouchExpansionComponent: usize = 0xEC8; // CTouchExpansionComponent
    pub const m_pPingServices: usize = 0xF18; // CCSPlayer_PingServices*
    pub const m_pViewModelServices: usize = 0xF20; // CPlayer_ViewModelServices*
    pub const m_iDisplayHistoryBits: usize = 0xF28; // uint32_t
    pub const m_flLastAttackedTeammate: usize = 0xF2C; // float
    pub const m_hOriginalController: usize = 0xF30; // CHandle<CCSPlayerController>
    pub const m_blindUntilTime: usize = 0xF34; // GameTime_t
    pub const m_blindStartTime: usize = 0xF38; // GameTime_t
    pub const m_allowAutoFollowTime: usize = 0xF3C; // GameTime_t
    pub const m_entitySpottedState: usize = 0xF40; // EntitySpottedState_t
    pub const m_nSpotRules: usize = 0xF58; // int32_t
    pub const m_iPlayerState: usize = 0xF5C; // CSPlayerState
    pub const m_chickenIdleSoundTimer: usize = 0xF68; // CountdownTimer
    pub const m_chickenJumpSoundTimer: usize = 0xF80; // CountdownTimer
    pub const m_vecLastBookmarkedPosition: usize = 0x1038; // Vector
    pub const m_flLastDistanceTraveledNotice: usize = 0x1044; // float
    pub const m_flAccumulatedDistanceTraveled: usize = 0x1048; // float
    pub const m_flLastFriendlyFireDamageReductionRatio: usize = 0x104C; // float
    pub const m_bRespawning: usize = 0x1050; // bool
    pub const m_nLastPickupPriority: usize = 0x1054; // int32_t
    pub const m_flLastPickupPriorityTime: usize = 0x1058; // float
    pub const m_bIsScoped: usize = 0x105C; // bool
    pub const m_bIsWalking: usize = 0x105D; // bool
    pub const m_bResumeZoom: usize = 0x105E; // bool
    pub const m_bIsDefusing: usize = 0x105F; // bool
    pub const m_bIsGrabbingHostage: usize = 0x1060; // bool
    pub const m_iBlockingUseActionInProgress: usize = 0x1064; // CSPlayerBlockingUseAction_t
    pub const m_fImmuneToGunGameDamageTime: usize = 0x1068; // GameTime_t
    pub const m_bGunGameImmunity: usize = 0x106C; // bool
    pub const m_GunGameImmunityColor: usize = 0x106D; // Color
    pub const m_fMolotovDamageTime: usize = 0x1074; // float
    pub const m_bHasMovedSinceSpawn: usize = 0x1078; // bool
    pub const m_bCanMoveDuringFreezePeriod: usize = 0x1079; // bool
    pub const m_flGuardianTooFarDistFrac: usize = 0x107C; // float
    pub const m_flNextGuardianTooFarHurtTime: usize = 0x1080; // float
    pub const m_flDetectedByEnemySensorTime: usize = 0x1084; // GameTime_t
    pub const m_flDealtDamageToEnemyMostRecentTimestamp: usize = 0x1088; // float
    pub const m_flLastEquippedHelmetTime: usize = 0x108C; // GameTime_t
    pub const m_flLastEquippedArmorTime: usize = 0x1090; // GameTime_t
    pub const m_nHeavyAssaultSuitCooldownRemaining: usize = 0x1094; // int32_t
    pub const m_bResetArmorNextSpawn: usize = 0x1098; // bool
    pub const m_flLastBumpMineBumpTime: usize = 0x109C; // GameTime_t
    pub const m_flEmitSoundTime: usize = 0x10A0; // GameTime_t
    pub const m_iNumSpawns: usize = 0x10A4; // int32_t
    pub const m_iShouldHaveCash: usize = 0x10A8; // int32_t
    pub const m_bInvalidSteamLogonDelayed: usize = 0x10AC; // bool
    pub const m_flIdleTimeSinceLastAction: usize = 0x10B0; // float
    pub const m_flNameChangeHistory: usize = 0x10B4; // float[5]
    pub const m_fLastGivenDefuserTime: usize = 0x10C8; // float
    pub const m_fLastGivenBombTime: usize = 0x10CC; // float
    pub const m_bHasNightVision: usize = 0x10D0; // bool
    pub const m_bNightVisionOn: usize = 0x10D1; // bool
    pub const m_fNextRadarUpdateTime: usize = 0x10D4; // float
    pub const m_flLastMoneyUpdateTime: usize = 0x10D8; // float
    pub const m_MenuStringBuffer: usize = 0x10DC; // char[1024]
    pub const m_fIntroCamTime: usize = 0x14DC; // float
    pub const m_nMyCollisionGroup: usize = 0x14E0; // int32_t
    pub const m_bInNoDefuseArea: usize = 0x14E4; // bool
    pub const m_bKilledByTaser: usize = 0x14E5; // bool
    pub const m_iMoveState: usize = 0x14E8; // int32_t
    pub const m_grenadeParameterStashTime: usize = 0x14EC; // GameTime_t
    pub const m_bGrenadeParametersStashed: usize = 0x14F0; // bool
    pub const m_angStashedShootAngles: usize = 0x14F4; // QAngle
    pub const m_vecStashedGrenadeThrowPosition: usize = 0x1500; // Vector
    pub const m_vecStashedVelocity: usize = 0x150C; // Vector
    pub const m_angShootAngleHistory: usize = 0x1518; // QAngle[2]
    pub const m_vecThrowPositionHistory: usize = 0x1530; // Vector[2]
    pub const m_vecVelocityHistory: usize = 0x1548; // Vector[2]
    pub const m_bDiedAirborne: usize = 0x1560; // bool
    pub const m_iBombSiteIndex: usize = 0x1564; // CEntityIndex
    pub const m_nWhichBombZone: usize = 0x1568; // int32_t
    pub const m_bInBombZoneTrigger: usize = 0x156C; // bool
    pub const m_bWasInBombZoneTrigger: usize = 0x156D; // bool
    pub const m_iDirection: usize = 0x1570; // int32_t
    pub const m_iShotsFired: usize = 0x1574; // int32_t
    pub const m_ArmorValue: usize = 0x1578; // int32_t
    pub const m_flFlinchStack: usize = 0x157C; // float
    pub const m_flVelocityModifier: usize = 0x1580; // float
    pub const m_flHitHeading: usize = 0x1584; // float
    pub const m_nHitBodyPart: usize = 0x1588; // int32_t
    pub const m_iHostagesKilled: usize = 0x158C; // int32_t
    pub const m_vecTotalBulletForce: usize = 0x1590; // Vector
    pub const m_flFlashDuration: usize = 0x159C; // float
    pub const m_flFlashMaxAlpha: usize = 0x15A0; // float
    pub const m_flProgressBarStartTime: usize = 0x15A4; // float
    pub const m_iProgressBarDuration: usize = 0x15A8; // int32_t
    pub const m_bWaitForNoAttack: usize = 0x15AC; // bool
    pub const m_flLowerBodyYawTarget: usize = 0x15B0; // float
    pub const m_bStrafing: usize = 0x15B4; // bool
    pub const m_lastStandingPos: usize = 0x15B8; // Vector
    pub const m_ignoreLadderJumpTime: usize = 0x15C4; // float
    pub const m_ladderSurpressionTimer: usize = 0x15C8; // CountdownTimer
    pub const m_lastLadderNormal: usize = 0x15E0; // Vector
    pub const m_lastLadderPos: usize = 0x15EC; // Vector
    pub const m_thirdPersonHeading: usize = 0x15F8; // QAngle
    pub const m_flSlopeDropOffset: usize = 0x1604; // float
    pub const m_flSlopeDropHeight: usize = 0x1608; // float
    pub const m_vHeadConstraintOffset: usize = 0x160C; // Vector
    pub const m_iLastWeaponFireUsercmd: usize = 0x1620; // int32_t
    pub const m_angEyeAngles: usize = 0x1624; // QAngle
    pub const m_bVCollisionInitted: usize = 0x1630; // bool
    pub const m_storedSpawnPosition: usize = 0x1634; // Vector
    pub const m_storedSpawnAngle: usize = 0x1640; // QAngle
    pub const m_bIsSpawning: usize = 0x164C; // bool
    pub const m_bHideTargetID: usize = 0x164D; // bool
    pub const m_nNumDangerZoneDamageHits: usize = 0x1650; // int32_t
    pub const m_bHud_MiniScoreHidden: usize = 0x1654; // bool
    pub const m_bHud_RadarHidden: usize = 0x1655; // bool
    pub const m_nLastKillerIndex: usize = 0x1658; // CEntityIndex
    pub const m_nLastConcurrentKilled: usize = 0x165C; // int32_t
    pub const m_nDeathCamMusic: usize = 0x1660; // int32_t
    pub const m_iAddonBits: usize = 0x1664; // int32_t
    pub const m_iPrimaryAddon: usize = 0x1668; // int32_t
    pub const m_iSecondaryAddon: usize = 0x166C; // int32_t
    pub const m_currentDeafnessFilter: usize = 0x1670; // CUtlStringToken
    pub const m_NumEnemiesKilledThisSpawn: usize = 0x1674; // int32_t
    pub const m_NumEnemiesKilledThisRound: usize = 0x1678; // int32_t
    pub const m_NumEnemiesAtRoundStart: usize = 0x167C; // int32_t
    pub const m_wasNotKilledNaturally: usize = 0x1680; // bool
    pub const m_vecPlayerPatchEconIndices: usize = 0x1684; // uint32_t[5]
    pub const m_iDeathFlags: usize = 0x1698; // int32_t
    pub const m_hPet: usize = 0x169C; // CHandle<CChicken>
    pub const m_unCurrentEquipmentValue: usize = 0x1868; // uint16_t
    pub const m_unRoundStartEquipmentValue: usize = 0x186A; // uint16_t
    pub const m_unFreezetimeEndEquipmentValue: usize = 0x186C; // uint16_t
    pub const m_nSurvivalTeamNumber: usize = 0x1870; // int32_t
    pub const m_bHasDeathInfo: usize = 0x1874; // bool
    pub const m_flDeathInfoTime: usize = 0x1878; // float
    pub const m_vecDeathInfoOrigin: usize = 0x187C; // Vector
    pub const m_bKilledByHeadshot: usize = 0x1888; // bool
    pub const m_LastHitBox: usize = 0x188C; // int32_t
    pub const m_LastHealth: usize = 0x1890; // int32_t
    pub const m_flLastCollisionCeiling: usize = 0x1894; // float
    pub const m_flLastCollisionCeilingChangeTime: usize = 0x1898; // float
    pub const m_pBot: usize = 0x18A0; // CCSBot*
    pub const m_bBotAllowActive: usize = 0x18A8; // bool
    pub const m_bCommittingSuicideOnTeamChange: usize = 0x18A9; // bool
}

pub mod CCSPlayerResource { // CBaseEntity
    pub const m_bHostageAlive: usize = 0x7A8; // bool[12]
    pub const m_isHostageFollowingSomeone: usize = 0x7B4; // bool[12]
    pub const m_iHostageEntityIDs: usize = 0x7C0; // CEntityIndex[12]
    pub const m_bombsiteCenterA: usize = 0x7F0; // Vector
    pub const m_bombsiteCenterB: usize = 0x7FC; // Vector
    pub const m_hostageRescueX: usize = 0x808; // int32_t[4]
    pub const m_hostageRescueY: usize = 0x818; // int32_t[4]
    pub const m_hostageRescueZ: usize = 0x828; // int32_t[4]
    pub const m_bEndMatchNextMapAllVoted: usize = 0x838; // bool
    pub const m_foundGoalPositions: usize = 0x839; // bool
}

pub mod CCSPlayer_ActionTrackingServices { // CPlayerPawnComponent
    pub const m_hLastWeaponBeforeC4AutoSwitch: usize = 0x208; // CHandle<CBasePlayerWeapon>
    pub const m_bIsRescuing: usize = 0x23C; // bool
    pub const m_weaponPurchasesThisMatch: usize = 0x240; // WeaponPurchaseTracker_t
    pub const m_weaponPurchasesThisRound: usize = 0x298; // WeaponPurchaseTracker_t
}

pub mod CCSPlayer_BulletServices { // CPlayerPawnComponent
    pub const m_totalHitsOnServer: usize = 0x40; // int32_t
}

pub mod CCSPlayer_BuyServices { // CPlayerPawnComponent
    pub const m_vecSellbackPurchaseEntries: usize = 0xC8; // CUtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
}

pub mod CCSPlayer_CameraServices { // CCSPlayerBase_CameraServices
}

pub mod CCSPlayer_DamageReactServices { // CPlayerPawnComponent
}

pub mod CCSPlayer_HostageServices { // CPlayerPawnComponent
    pub const m_hCarriedHostage: usize = 0x40; // CHandle<CBaseEntity>
    pub const m_hCarriedHostageProp: usize = 0x44; // CHandle<CBaseEntity>
}

pub mod CCSPlayer_ItemServices { // CPlayer_ItemServices
    pub const m_bHasDefuser: usize = 0x40; // bool
    pub const m_bHasHelmet: usize = 0x41; // bool
    pub const m_bHasHeavyArmor: usize = 0x42; // bool
}

pub mod CCSPlayer_MovementServices { // CPlayer_MovementServices_Humanoid
    pub const m_flMaxFallVelocity: usize = 0x224; // float
    pub const m_vecLadderNormal: usize = 0x228; // Vector
    pub const m_nLadderSurfacePropIndex: usize = 0x234; // int32_t
    pub const m_flDuckAmount: usize = 0x238; // float
    pub const m_flDuckSpeed: usize = 0x23C; // float
    pub const m_bDuckOverride: usize = 0x240; // bool
    pub const m_bDesiresDuck: usize = 0x241; // bool
    pub const m_flDuckOffset: usize = 0x244; // float
    pub const m_nDuckTimeMsecs: usize = 0x248; // uint32_t
    pub const m_nDuckJumpTimeMsecs: usize = 0x24C; // uint32_t
    pub const m_nJumpTimeMsecs: usize = 0x250; // uint32_t
    pub const m_flLastDuckTime: usize = 0x254; // float
    pub const m_vecLastPositionAtFullCrouchSpeed: usize = 0x260; // Vector2D
    pub const m_duckUntilOnGround: usize = 0x268; // bool
    pub const m_bHasWalkMovedSinceLastJump: usize = 0x269; // bool
    pub const m_bInStuckTest: usize = 0x26A; // bool
    pub const m_flStuckCheckTime: usize = 0x278; // float[64][2]
    pub const m_nTraceCount: usize = 0x478; // int32_t
    pub const m_StuckLast: usize = 0x47C; // int32_t
    pub const m_bSpeedCropped: usize = 0x480; // bool
    pub const m_nOldWaterLevel: usize = 0x484; // int32_t
    pub const m_flWaterEntryTime: usize = 0x488; // float
    pub const m_vecForward: usize = 0x48C; // Vector
    pub const m_vecLeft: usize = 0x498; // Vector
    pub const m_vecUp: usize = 0x4A4; // Vector
    pub const m_nGameCodeHasMovedPlayerAfterCommand: usize = 0x4B0; // int32_t
    pub const m_bMadeFootstepNoise: usize = 0x4B4; // bool
    pub const m_iFootsteps: usize = 0x4B8; // int32_t
    pub const m_bOldJumpPressed: usize = 0x4BC; // bool
    pub const m_flJumpPressedTime: usize = 0x4C0; // float
    pub const m_flJumpUntil: usize = 0x4C4; // float
    pub const m_flJumpVel: usize = 0x4C8; // float
    pub const m_fStashGrenadeParameterWhen: usize = 0x4CC; // GameTime_t
    pub const m_nButtonDownMaskPrev: usize = 0x4D0; // uint64_t
    pub const m_flOffsetTickCompleteTime: usize = 0x4D8; // float
    pub const m_flOffsetTickStashedSpeed: usize = 0x4DC; // float
    pub const m_flStamina: usize = 0x4E0; // float
    pub const m_flHeightAtJumpStart: usize = 0x4E4; // float
    pub const m_flMaxJumpHeightThisJump: usize = 0x4E8; // float
}

pub mod CCSPlayer_PingServices { // CPlayerPawnComponent
    pub const m_flPlayerPingTokens: usize = 0x40; // GameTime_t[5]
    pub const m_hPlayerPing: usize = 0x54; // CHandle<CBaseEntity>
}

pub mod CCSPlayer_RadioServices { // CPlayerPawnComponent
    pub const m_flGotHostageTalkTimer: usize = 0x40; // GameTime_t
    pub const m_flDefusingTalkTimer: usize = 0x44; // GameTime_t
    pub const m_flC4PlantTalkTimer: usize = 0x48; // GameTime_t
    pub const m_flRadioTokenSlots: usize = 0x4C; // GameTime_t[3]
    pub const m_bIgnoreRadio: usize = 0x58; // bool
}

pub mod CCSPlayer_UseServices { // CPlayer_UseServices
    pub const m_hLastKnownUseEntity: usize = 0x40; // CHandle<CBaseEntity>
    pub const m_flLastUseTimeStamp: usize = 0x44; // GameTime_t
    pub const m_flTimeStartedHoldingUse: usize = 0x48; // GameTime_t
    pub const m_flTimeLastUsedWindow: usize = 0x4C; // GameTime_t
}

pub mod CCSPlayer_ViewModelServices { // CPlayer_ViewModelServices
    pub const m_hViewModel: usize = 0x40; // CHandle<CBaseViewModel>[3]
}

pub mod CCSPlayer_WaterServices { // CPlayer_WaterServices
    pub const m_NextDrownDamageTime: usize = 0x40; // float
    pub const m_nDrownDmgRate: usize = 0x44; // int32_t
    pub const m_AirFinishedTime: usize = 0x48; // GameTime_t
    pub const m_flWaterJumpTime: usize = 0x4C; // float
    pub const m_vecWaterJumpVel: usize = 0x50; // Vector
    pub const m_flSwimSoundTime: usize = 0x5C; // float
}

pub mod CCSPlayer_WeaponServices { // CPlayer_WeaponServices
    pub const m_flNextAttack: usize = 0xA4; // GameTime_t
    pub const m_bIsLookingAtWeapon: usize = 0xA8; // bool
    pub const m_bIsHoldingLookAtWeapon: usize = 0xA9; // bool
    pub const m_hSavedWeapon: usize = 0xAC; // CHandle<CBasePlayerWeapon>
    pub const m_nTimeToMelee: usize = 0xB0; // int32_t
    pub const m_nTimeToSecondary: usize = 0xB4; // int32_t
    pub const m_nTimeToPrimary: usize = 0xB8; // int32_t
    pub const m_nTimeToSniperRifle: usize = 0xBC; // int32_t
    pub const m_bIsBeingGivenItem: usize = 0xC0; // bool
    pub const m_bIsPickingUpItemWithUse: usize = 0xC1; // bool
    pub const m_bPickedUpWeapon: usize = 0xC2; // bool
    pub const m_bDisableAutoDeploy: usize = 0xC3; // bool
    pub const m_nOldShootPositionHistoryCount: usize = 0xC4; // uint32_t
    pub const m_nOldInputHistoryCount: usize = 0x460; // uint32_t
}

pub mod CCSPulseServerFuncs_Globals {
}

pub mod CCSSprite { // CSprite
}

pub mod CCSTakeDamageInfoAPI {
}

pub mod CCSTeam { // CTeam
    pub const m_nLastRecievedShorthandedRoundBonus: usize = 0x860; // int32_t
    pub const m_nShorthandedRoundBonusStartRound: usize = 0x864; // int32_t
    pub const m_bSurrendered: usize = 0x868; // bool
    pub const m_szTeamMatchStat: usize = 0x869; // char[512]
    pub const m_numMapVictories: usize = 0xA6C; // int32_t
    pub const m_scoreFirstHalf: usize = 0xA70; // int32_t
    pub const m_scoreSecondHalf: usize = 0xA74; // int32_t
    pub const m_scoreOvertime: usize = 0xA78; // int32_t
    pub const m_szClanTeamname: usize = 0xA7C; // char[129]
    pub const m_iClanID: usize = 0xB00; // uint32_t
    pub const m_szTeamFlagImage: usize = 0xB04; // char[8]
    pub const m_szTeamLogoImage: usize = 0xB0C; // char[8]
    pub const m_flNextResourceTime: usize = 0xB14; // float
    pub const m_iLastUpdateSentAt: usize = 0xB18; // int32_t
}

pub mod CCSWeaponBase { // CBasePlayerWeapon
    pub const m_bRemoveable: usize = 0xFE8; // bool
    pub const m_flFireSequenceStartTime: usize = 0xFF0; // float
    pub const m_nFireSequenceStartTimeChange: usize = 0xFF4; // int32_t
    pub const m_nFireSequenceStartTimeAck: usize = 0xFF8; // int32_t
    pub const m_ePlayerFireEvent: usize = 0xFFC; // PlayerAnimEvent_t
    pub const m_ePlayerFireEventAttackType: usize = 0x1000; // WeaponAttackType_t
    pub const m_seqIdle: usize = 0x1004; // HSequence
    pub const m_seqFirePrimary: usize = 0x1008; // HSequence
    pub const m_seqFireSecondary: usize = 0x100C; // HSequence
    pub const m_thirdPersonFireSequences: usize = 0x1010; // CUtlVector<HSequence>
    pub const m_hCurrentThirdPersonSequence: usize = 0x1028; // HSequence
    pub const m_nSilencerBoneIndex: usize = 0x102C; // int32_t
    pub const m_thirdPersonSequences: usize = 0x1030; // HSequence[7]
    pub const m_bPlayerAmmoStockOnPickup: usize = 0x1058; // bool
    pub const m_bRequireUseToTouch: usize = 0x1059; // bool
    pub const m_iState: usize = 0x105C; // CSWeaponState_t
    pub const m_flLastTimeInAir: usize = 0x1060; // GameTime_t
    pub const m_flLastDeployTime: usize = 0x1064; // GameTime_t
    pub const m_nLastEmptySoundCmdNum: usize = 0x1068; // int32_t
    pub const m_nViewModelIndex: usize = 0x106C; // uint32_t
    pub const m_bReloadsWithClips: usize = 0x1070; // bool
    pub const m_flTimeWeaponIdle: usize = 0x1090; // GameTime_t
    pub const m_bFireOnEmpty: usize = 0x1094; // bool
    pub const m_OnPlayerPickup: usize = 0x1098; // CEntityIOOutput
    pub const m_weaponMode: usize = 0x10C0; // CSWeaponMode
    pub const m_flTurningInaccuracyDelta: usize = 0x10C4; // float
    pub const m_vecTurningInaccuracyEyeDirLast: usize = 0x10C8; // Vector
    pub const m_flTurningInaccuracy: usize = 0x10D4; // float
    pub const m_fAccuracyPenalty: usize = 0x10D8; // float
    pub const m_flLastAccuracyUpdateTime: usize = 0x10DC; // GameTime_t
    pub const m_fAccuracySmoothedForZoom: usize = 0x10E0; // float
    pub const m_fScopeZoomEndTime: usize = 0x10E4; // GameTime_t
    pub const m_iRecoilIndex: usize = 0x10E8; // int32_t
    pub const m_flRecoilIndex: usize = 0x10EC; // float
    pub const m_bBurstMode: usize = 0x10F0; // bool
    pub const m_nPostponeFireReadyTicks: usize = 0x10F4; // GameTick_t
    pub const m_flPostponeFireReadyFrac: usize = 0x10F8; // float
    pub const m_bInReload: usize = 0x10FC; // bool
    pub const m_bReloadVisuallyComplete: usize = 0x10FD; // bool
    pub const m_flDroppedAtTime: usize = 0x1100; // GameTime_t
    pub const m_bIsHauledBack: usize = 0x1104; // bool
    pub const m_bSilencerOn: usize = 0x1105; // bool
    pub const m_flTimeSilencerSwitchComplete: usize = 0x1108; // GameTime_t
    pub const m_iOriginalTeamNumber: usize = 0x110C; // int32_t
    pub const m_flNextAttackRenderTimeOffset: usize = 0x1110; // float
    pub const m_bCanBePickedUp: usize = 0x1128; // bool
    pub const m_bUseCanOverrideNextOwnerTouchTime: usize = 0x1129; // bool
    pub const m_nextOwnerTouchTime: usize = 0x112C; // GameTime_t
    pub const m_nextPrevOwnerTouchTime: usize = 0x1130; // GameTime_t
    pub const m_hPrevOwner: usize = 0x1134; // CHandle<CCSPlayerPawn>
    pub const m_nDropTick: usize = 0x1138; // GameTick_t
    pub const m_donated: usize = 0x115C; // bool
    pub const m_fLastShotTime: usize = 0x1160; // GameTime_t
    pub const m_bWasOwnedByCT: usize = 0x1164; // bool
    pub const m_bWasOwnedByTerrorist: usize = 0x1165; // bool
    pub const m_bFiredOutOfAmmoEvent: usize = 0x1166; // bool
    pub const m_numRemoveUnownedWeaponThink: usize = 0x1168; // int32_t
    pub const m_IronSightController: usize = 0x1170; // CIronSightController
    pub const m_iIronSightMode: usize = 0x1188; // int32_t
    pub const m_flLastLOSTraceFailureTime: usize = 0x118C; // GameTime_t
    pub const m_iNumEmptyAttacks: usize = 0x1190; // int32_t
    pub const m_flWatTickOffset: usize = 0x1194; // float
}

pub mod CCSWeaponBaseAPI {
}

pub mod CCSWeaponBaseGun { // CCSWeaponBase
    pub const m_zoomLevel: usize = 0x1198; // int32_t
    pub const m_iBurstShotsRemaining: usize = 0x119C; // int32_t
    pub const m_silencedModelIndex: usize = 0x11A8; // int32_t
    pub const m_inPrecache: usize = 0x11AC; // bool
    pub const m_bNeedsBoltAction: usize = 0x11AD; // bool
    pub const m_bSkillReloadAvailable: usize = 0x11AE; // bool
    pub const m_bSkillReloadLiftedReloadKey: usize = 0x11AF; // bool
    pub const m_bSkillBoltInterruptAvailable: usize = 0x11B0; // bool
    pub const m_bSkillBoltLiftedFireKey: usize = 0x11B1; // bool
}

pub mod CCSWeaponBaseVData { // CBasePlayerWeaponVData
    pub const m_WeaponType: usize = 0x248; // CSWeaponType
    pub const m_WeaponCategory: usize = 0x24C; // CSWeaponCategory
    pub const m_szViewModel: usize = 0x250; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    pub const m_szPlayerModel: usize = 0x330; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    pub const m_szWorldDroppedModel: usize = 0x410; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    pub const m_szAimsightLensMaskModel: usize = 0x4F0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    pub const m_szMagazineModel: usize = 0x5D0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
    pub const m_szHeatEffect: usize = 0x6B0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    pub const m_szEjectBrassEffect: usize = 0x790; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    pub const m_szMuzzleFlashParticleAlt: usize = 0x870; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    pub const m_szMuzzleFlashThirdPersonParticle: usize = 0x950; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    pub const m_szMuzzleFlashThirdPersonParticleAlt: usize = 0xA30; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    pub const m_szTracerParticle: usize = 0xB10; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    pub const m_GearSlot: usize = 0xBF0; // gear_slot_t
    pub const m_GearSlotPosition: usize = 0xBF4; // int32_t
    pub const m_DefaultLoadoutSlot: usize = 0xBF8; // loadout_slot_t
    pub const m_sWrongTeamMsg: usize = 0xC00; // CUtlString
    pub const m_nPrice: usize = 0xC08; // int32_t
    pub const m_nKillAward: usize = 0xC0C; // int32_t
    pub const m_nPrimaryReserveAmmoMax: usize = 0xC10; // int32_t
    pub const m_nSecondaryReserveAmmoMax: usize = 0xC14; // int32_t
    pub const m_bMeleeWeapon: usize = 0xC18; // bool
    pub const m_bHasBurstMode: usize = 0xC19; // bool
    pub const m_bIsRevolver: usize = 0xC1A; // bool
    pub const m_bCannotShootUnderwater: usize = 0xC1B; // bool
    pub const m_szName: usize = 0xC20; // CGlobalSymbol
    pub const m_szAnimExtension: usize = 0xC28; // CUtlString
    pub const m_eSilencerType: usize = 0xC30; // CSWeaponSilencerType
    pub const m_nCrosshairMinDistance: usize = 0xC34; // int32_t
    pub const m_nCrosshairDeltaDistance: usize = 0xC38; // int32_t
    pub const m_bIsFullAuto: usize = 0xC3C; // bool
    pub const m_nNumBullets: usize = 0xC40; // int32_t
    pub const m_flCycleTime: usize = 0xC44; // CFiringModeFloat
    pub const m_flMaxSpeed: usize = 0xC4C; // CFiringModeFloat
    pub const m_flSpread: usize = 0xC54; // CFiringModeFloat
    pub const m_flInaccuracyCrouch: usize = 0xC5C; // CFiringModeFloat
    pub const m_flInaccuracyStand: usize = 0xC64; // CFiringModeFloat
    pub const m_flInaccuracyJump: usize = 0xC6C; // CFiringModeFloat
    pub const m_flInaccuracyLand: usize = 0xC74; // CFiringModeFloat
    pub const m_flInaccuracyLadder: usize = 0xC7C; // CFiringModeFloat
    pub const m_flInaccuracyFire: usize = 0xC84; // CFiringModeFloat
    pub const m_flInaccuracyMove: usize = 0xC8C; // CFiringModeFloat
    pub const m_flRecoilAngle: usize = 0xC94; // CFiringModeFloat
    pub const m_flRecoilAngleVariance: usize = 0xC9C; // CFiringModeFloat
    pub const m_flRecoilMagnitude: usize = 0xCA4; // CFiringModeFloat
    pub const m_flRecoilMagnitudeVariance: usize = 0xCAC; // CFiringModeFloat
    pub const m_nTracerFrequency: usize = 0xCB4; // CFiringModeInt
    pub const m_flInaccuracyJumpInitial: usize = 0xCBC; // float
    pub const m_flInaccuracyJumpApex: usize = 0xCC0; // float
    pub const m_flInaccuracyReload: usize = 0xCC4; // float
    pub const m_nRecoilSeed: usize = 0xCC8; // int32_t
    pub const m_nSpreadSeed: usize = 0xCCC; // int32_t
    pub const m_flTimeToIdleAfterFire: usize = 0xCD0; // float
    pub const m_flIdleInterval: usize = 0xCD4; // float
    pub const m_flAttackMovespeedFactor: usize = 0xCD8; // float
    pub const m_flHeatPerShot: usize = 0xCDC; // float
    pub const m_flInaccuracyPitchShift: usize = 0xCE0; // float
    pub const m_flInaccuracyAltSoundThreshold: usize = 0xCE4; // float
    pub const m_flBotAudibleRange: usize = 0xCE8; // float
    pub const m_szUseRadioSubtitle: usize = 0xCF0; // CUtlString
    pub const m_bUnzoomsAfterShot: usize = 0xCF8; // bool
    pub const m_bHideViewModelWhenZoomed: usize = 0xCF9; // bool
    pub const m_nZoomLevels: usize = 0xCFC; // int32_t
    pub const m_nZoomFOV1: usize = 0xD00; // int32_t
    pub const m_nZoomFOV2: usize = 0xD04; // int32_t
    pub const m_flZoomTime0: usize = 0xD08; // float
    pub const m_flZoomTime1: usize = 0xD0C; // float
    pub const m_flZoomTime2: usize = 0xD10; // float
    pub const m_flIronSightPullUpSpeed: usize = 0xD14; // float
    pub const m_flIronSightPutDownSpeed: usize = 0xD18; // float
    pub const m_flIronSightFOV: usize = 0xD1C; // float
    pub const m_flIronSightPivotForward: usize = 0xD20; // float
    pub const m_flIronSightLooseness: usize = 0xD24; // float
    pub const m_angPivotAngle: usize = 0xD28; // QAngle
    pub const m_vecIronSightEyePos: usize = 0xD34; // Vector
    pub const m_nDamage: usize = 0xD40; // int32_t
    pub const m_flHeadshotMultiplier: usize = 0xD44; // float
    pub const m_flArmorRatio: usize = 0xD48; // float
    pub const m_flPenetration: usize = 0xD4C; // float
    pub const m_flRange: usize = 0xD50; // float
    pub const m_flRangeModifier: usize = 0xD54; // float
    pub const m_flFlinchVelocityModifierLarge: usize = 0xD58; // float
    pub const m_flFlinchVelocityModifierSmall: usize = 0xD5C; // float
    pub const m_flRecoveryTimeCrouch: usize = 0xD60; // float
    pub const m_flRecoveryTimeStand: usize = 0xD64; // float
    pub const m_flRecoveryTimeCrouchFinal: usize = 0xD68; // float
    pub const m_flRecoveryTimeStandFinal: usize = 0xD6C; // float
    pub const m_nRecoveryTransitionStartBullet: usize = 0xD70; // int32_t
    pub const m_nRecoveryTransitionEndBullet: usize = 0xD74; // int32_t
    pub const m_flThrowVelocity: usize = 0xD78; // float
    pub const m_vSmokeColor: usize = 0xD7C; // Vector
    pub const m_szAnimClass: usize = 0xD88; // CGlobalSymbol
}

pub mod CCSWeaponBaseVDataAPI {
}

pub mod CChangeLevel { // CBaseTrigger
    pub const m_sMapName: usize = 0xBA0; // CUtlString
    pub const m_sLandmarkName: usize = 0xBA8; // CUtlString
    pub const m_OnChangeLevel: usize = 0xBB0; // CEntityIOOutput
    pub const m_bTouched: usize = 0xBD8; // bool
    pub const m_bNoTouch: usize = 0xBD9; // bool
    pub const m_bNewChapter: usize = 0xBDA; // bool
    pub const m_bOnChangeLevelFired: usize = 0xBDB; // bool
}

pub mod CChicken { // CDynamicProp
    pub const m_AttributeManager: usize = 0xE88; // CAttributeContainer
    pub const m_OriginalOwnerXuidLow: usize = 0x1150; // uint32_t
    pub const m_OriginalOwnerXuidHigh: usize = 0x1154; // uint32_t
    pub const m_updateTimer: usize = 0x1158; // CountdownTimer
    pub const m_stuckAnchor: usize = 0x1170; // Vector
    pub const m_stuckTimer: usize = 0x1180; // CountdownTimer
    pub const m_collisionStuckTimer: usize = 0x1198; // CountdownTimer
    pub const m_isOnGround: usize = 0x11B0; // bool
    pub const m_vFallVelocity: usize = 0x11B4; // Vector
    pub const m_activity: usize = 0x11C0; // ChickenActivity
    pub const m_activityTimer: usize = 0x11C8; // CountdownTimer
    pub const m_turnRate: usize = 0x11E0; // float
    pub const m_fleeFrom: usize = 0x11E4; // CHandle<CBaseEntity>
    pub const m_moveRateThrottleTimer: usize = 0x11E8; // CountdownTimer
    pub const m_startleTimer: usize = 0x1200; // CountdownTimer
    pub const m_vocalizeTimer: usize = 0x1218; // CountdownTimer
    pub const m_flWhenZombified: usize = 0x1230; // GameTime_t
    pub const m_jumpedThisFrame: usize = 0x1234; // bool
    pub const m_leader: usize = 0x1238; // CHandle<CCSPlayerPawn>
    pub const m_reuseTimer: usize = 0x1240; // CountdownTimer
    pub const m_hasBeenUsed: usize = 0x1258; // bool
    pub const m_jumpTimer: usize = 0x1260; // CountdownTimer
    pub const m_flLastJumpTime: usize = 0x1278; // float
    pub const m_bInJump: usize = 0x127C; // bool
    pub const m_isWaitingForLeader: usize = 0x127D; // bool
    pub const m_repathTimer: usize = 0x3288; // CountdownTimer
    pub const m_inhibitDoorTimer: usize = 0x32A0; // CountdownTimer
    pub const m_inhibitObstacleAvoidanceTimer: usize = 0x3330; // CountdownTimer
    pub const m_vecPathGoal: usize = 0x3350; // Vector
    pub const m_flActiveFollowStartTime: usize = 0x335C; // GameTime_t
    pub const m_followMinuteTimer: usize = 0x3360; // CountdownTimer
    pub const m_vecLastEggPoopPosition: usize = 0x3378; // Vector
    pub const m_vecEggsPooped: usize = 0x3388; // CUtlVector<CHandle<CBaseEntity>>
    pub const m_BlockDirectionTimer: usize = 0x33A8; // CountdownTimer
}

pub mod CChicken_GraphController { // CAnimGraphControllerBase
    pub const m_pszActivity: usize = 0x18; // CAnimGraphParamRef<char*>
}

pub mod CCollisionProperty {
    pub const m_collisionAttribute: usize = 0x10; // VPhysicsCollisionAttribute_t
    pub const m_vecMins: usize = 0x40; // Vector
    pub const m_vecMaxs: usize = 0x4C; // Vector
    pub const m_usSolidFlags: usize = 0x5A; // uint8_t
    pub const m_nSolidType: usize = 0x5B; // SolidType_t
    pub const m_triggerBloat: usize = 0x5C; // uint8_t
    pub const m_nSurroundType: usize = 0x5D; // SurroundingBoundsType_t
    pub const m_CollisionGroup: usize = 0x5E; // uint8_t
    pub const m_nEnablePhysics: usize = 0x5F; // uint8_t
    pub const m_flBoundingRadius: usize = 0x60; // float
    pub const m_vecSpecifiedSurroundingMins: usize = 0x64; // Vector
    pub const m_vecSpecifiedSurroundingMaxs: usize = 0x70; // Vector
    pub const m_vecSurroundingMaxs: usize = 0x7C; // Vector
    pub const m_vecSurroundingMins: usize = 0x88; // Vector
    pub const m_vCapsuleCenter1: usize = 0x94; // Vector
    pub const m_vCapsuleCenter2: usize = 0xA0; // Vector
    pub const m_flCapsuleRadius: usize = 0xAC; // float
}

pub mod CColorCorrection { // CBaseEntity
    pub const m_flFadeInDuration: usize = 0x7A8; // float
    pub const m_flFadeOutDuration: usize = 0x7AC; // float
    pub const m_flStartFadeInWeight: usize = 0x7B0; // float
    pub const m_flStartFadeOutWeight: usize = 0x7B4; // float
    pub const m_flTimeStartFadeIn: usize = 0x7B8; // GameTime_t
    pub const m_flTimeStartFadeOut: usize = 0x7BC; // GameTime_t
    pub const m_flMaxWeight: usize = 0x7C0; // float
    pub const m_bStartDisabled: usize = 0x7C4; // bool
    pub const m_bEnabled: usize = 0x7C5; // bool
    pub const m_bMaster: usize = 0x7C6; // bool
    pub const m_bClientSide: usize = 0x7C7; // bool
    pub const m_bExclusive: usize = 0x7C8; // bool
    pub const m_MinFalloff: usize = 0x7CC; // float
    pub const m_MaxFalloff: usize = 0x7D0; // float
    pub const m_flCurWeight: usize = 0x7D4; // float
    pub const m_netlookupFilename: usize = 0x7D8; // char[512]
    pub const m_lookupFilename: usize = 0x9D8; // CUtlSymbolLarge
}

pub mod CColorCorrectionVolume { // CBaseTrigger
    pub const m_bEnabled: usize = 0xB99; // bool
    pub const m_MaxWeight: usize = 0xB9C; // float
    pub const m_FadeDuration: usize = 0xBA0; // float
    pub const m_bStartDisabled: usize = 0xBA4; // bool
    pub const m_Weight: usize = 0xBA8; // float
    pub const m_lookupFilename: usize = 0xBAC; // char[512]
    pub const m_LastEnterWeight: usize = 0xDAC; // float
    pub const m_LastEnterTime: usize = 0xDB0; // GameTime_t
    pub const m_LastExitWeight: usize = 0xDB4; // float
    pub const m_LastExitTime: usize = 0xDB8; // GameTime_t
}

pub mod CCommentaryAuto { // CBaseEntity
    pub const m_OnCommentaryNewGame: usize = 0x7A8; // CEntityIOOutput
    pub const m_OnCommentaryMidGame: usize = 0x7D0; // CEntityIOOutput
    pub const m_OnCommentaryMultiplayerSpawn: usize = 0x7F8; // CEntityIOOutput
}

pub mod CCommentarySystem {
    pub const m_bCommentaryConvarsChanging: usize = 0x11; // bool
    pub const m_bCommentaryEnabledMidGame: usize = 0x12; // bool
    pub const m_flNextTeleportTime: usize = 0x14; // GameTime_t
    pub const m_iTeleportStage: usize = 0x18; // int32_t
    pub const m_bCheatState: usize = 0x1C; // bool
    pub const m_bIsFirstSpawnGroupToLoad: usize = 0x1D; // bool
    pub const m_hCurrentNode: usize = 0x38; // CHandle<CPointCommentaryNode>
    pub const m_hActiveCommentaryNode: usize = 0x3C; // CHandle<CPointCommentaryNode>
    pub const m_hLastCommentaryNode: usize = 0x40; // CHandle<CPointCommentaryNode>
    pub const m_vecNodes: usize = 0x48; // CUtlVector<CHandle<CPointCommentaryNode>>
}

pub mod CCommentaryViewPosition { // CSprite
}

pub mod CConstantForceController {
    pub const m_linear: usize = 0xC; // Vector
    pub const m_angular: usize = 0x18; // RotationVector
    pub const m_linearSave: usize = 0x24; // Vector
    pub const m_angularSave: usize = 0x30; // RotationVector
}

pub mod CConstraintAnchor { // CBaseAnimGraph
    pub const m_massScale: usize = 0xBF0; // float
}

pub mod CCoopBonusCoin { // CDynamicProp
}

pub mod CCopyRecipientFilter {
    pub const m_Flags: usize = 0x8; // int32_t
    pub const m_Recipients: usize = 0x10; // CUtlVector<CPlayerSlot>
}

pub mod CCredits { // CPointEntity
    pub const m_OnCreditsDone: usize = 0x7A8; // CEntityIOOutput
    pub const m_bRolledOutroCredits: usize = 0x7D0; // bool
    pub const m_flLogoLength: usize = 0x7D4; // float
}

pub mod CDEagle { // CCSWeaponBaseGun
}

pub mod CDamageRecord {
    pub const m_PlayerDamager: usize = 0x28; // CHandle<CCSPlayerPawnBase>
    pub const m_PlayerRecipient: usize = 0x2C; // CHandle<CCSPlayerPawnBase>
    pub const m_hPlayerControllerDamager: usize = 0x30; // CHandle<CCSPlayerController>
    pub const m_hPlayerControllerRecipient: usize = 0x34; // CHandle<CCSPlayerController>
    pub const m_szPlayerDamagerName: usize = 0x38; // CUtlString
    pub const m_szPlayerRecipientName: usize = 0x40; // CUtlString
    pub const m_DamagerXuid: usize = 0x48; // uint64_t
    pub const m_RecipientXuid: usize = 0x50; // uint64_t
    pub const m_iDamage: usize = 0x58; // int32_t
    pub const m_iActualHealthRemoved: usize = 0x5C; // int32_t
    pub const m_iNumHits: usize = 0x60; // int32_t
    pub const m_iLastBulletUpdate: usize = 0x64; // int32_t
    pub const m_bIsOtherEnemy: usize = 0x68; // bool
    pub const m_killType: usize = 0x69; // EKillTypes_t
}

pub mod CDebugHistory { // CBaseEntity
    pub const m_nNpcEvents: usize = 0x47E8; // int32_t
}

pub mod CDecoyGrenade { // CBaseCSGrenade
}

pub mod CDecoyProjectile { // CBaseCSGrenadeProjectile
    pub const m_nDecoyShotTick: usize = 0xDA0; // int32_t
    pub const m_shotsRemaining: usize = 0xDA4; // int32_t
    pub const m_fExpireTime: usize = 0xDA8; // GameTime_t
    pub const m_decoyWeaponDefIndex: usize = 0xDB8; // uint16_t
}

pub mod CDynamicLight { // CBaseModelEntity
    pub const m_ActualFlags: usize = 0x9F8; // uint8_t
    pub const m_Flags: usize = 0x9F9; // uint8_t
    pub const m_LightStyle: usize = 0x9FA; // uint8_t
    pub const m_On: usize = 0x9FB; // bool
    pub const m_Radius: usize = 0x9FC; // float
    pub const m_Exponent: usize = 0xA00; // int32_t
    pub const m_InnerAngle: usize = 0xA04; // float
    pub const m_OuterAngle: usize = 0xA08; // float
    pub const m_SpotRadius: usize = 0xA0C; // float
}

pub mod CDynamicProp { // CBreakableProp
    pub const m_bCreateNavObstacle: usize = 0xD70; // bool
    pub const m_bUseHitboxesForRenderBox: usize = 0xD71; // bool
    pub const m_bUseAnimGraph: usize = 0xD72; // bool
    pub const m_pOutputAnimBegun: usize = 0xD78; // CEntityIOOutput
    pub const m_pOutputAnimOver: usize = 0xDA0; // CEntityIOOutput
    pub const m_pOutputAnimLoopCycleOver: usize = 0xDC8; // CEntityIOOutput
    pub const m_OnAnimReachedStart: usize = 0xDF0; // CEntityIOOutput
    pub const m_OnAnimReachedEnd: usize = 0xE18; // CEntityIOOutput
    pub const m_iszIdleAnim: usize = 0xE40; // CUtlSymbolLarge
    pub const m_nIdleAnimLoopMode: usize = 0xE48; // AnimLoopMode_t
    pub const m_bRandomizeCycle: usize = 0xE4C; // bool
    pub const m_bStartDisabled: usize = 0xE4D; // bool
    pub const m_bFiredStartEndOutput: usize = 0xE4E; // bool
    pub const m_bForceNpcExclude: usize = 0xE4F; // bool
    pub const m_bCreateNonSolid: usize = 0xE50; // bool
    pub const m_bIsOverrideProp: usize = 0xE51; // bool
    pub const m_iInitialGlowState: usize = 0xE54; // int32_t
    pub const m_nGlowRange: usize = 0xE58; // int32_t
    pub const m_nGlowRangeMin: usize = 0xE5C; // int32_t
    pub const m_glowColor: usize = 0xE60; // Color
    pub const m_nGlowTeam: usize = 0xE64; // int32_t
}

pub mod CDynamicPropAPI {
}

pub mod CDynamicPropAlias_cable_dynamic { // CDynamicProp
}

pub mod CDynamicPropAlias_dynamic_prop { // CDynamicProp
}

pub mod CDynamicPropAlias_prop_dynamic_override { // CDynamicProp
}

pub mod CEconEntity { // CBaseFlex
    pub const m_AttributeManager: usize = 0xC90; // CAttributeContainer
    pub const m_OriginalOwnerXuidLow: usize = 0xF58; // uint32_t
    pub const m_OriginalOwnerXuidHigh: usize = 0xF5C; // uint32_t
    pub const m_nFallbackPaintKit: usize = 0xF60; // int32_t
    pub const m_nFallbackSeed: usize = 0xF64; // int32_t
    pub const m_flFallbackWear: usize = 0xF68; // float
    pub const m_nFallbackStatTrak: usize = 0xF6C; // int32_t
    pub const m_hOldProvidee: usize = 0xF70; // CHandle<CBaseEntity>
    pub const m_iOldOwnerClass: usize = 0xF74; // int32_t
}

pub mod CEconItemAttribute {
    pub const m_iAttributeDefinitionIndex: usize = 0x30; // uint16_t
    pub const m_flValue: usize = 0x34; // float
    pub const m_flInitialValue: usize = 0x38; // float
    pub const m_nRefundableCurrency: usize = 0x3C; // int32_t
    pub const m_bSetBonus: usize = 0x40; // bool
}

pub mod CEconItemView { // IEconItemInterface
    pub const m_iItemDefinitionIndex: usize = 0x38; // uint16_t
    pub const m_iEntityQuality: usize = 0x3C; // int32_t
    pub const m_iEntityLevel: usize = 0x40; // uint32_t
    pub const m_iItemID: usize = 0x48; // uint64_t
    pub const m_iItemIDHigh: usize = 0x50; // uint32_t
    pub const m_iItemIDLow: usize = 0x54; // uint32_t
    pub const m_iAccountID: usize = 0x58; // uint32_t
    pub const m_iInventoryPosition: usize = 0x5C; // uint32_t
    pub const m_bInitialized: usize = 0x68; // bool
    pub const m_AttributeList: usize = 0x70; // CAttributeList
    pub const m_NetworkedDynamicAttributes: usize = 0xD0; // CAttributeList
    pub const m_szCustomName: usize = 0x130; // char[161]
    pub const m_szCustomNameOverride: usize = 0x1D1; // char[161]
}

pub mod CEconWearable { // CEconEntity
    pub const m_nForceSkin: usize = 0xF78; // int32_t
    pub const m_bAlwaysAllow: usize = 0xF7C; // bool
}

pub mod CEffectData {
    pub const m_vOrigin: usize = 0x8; // Vector
    pub const m_vStart: usize = 0x14; // Vector
    pub const m_vNormal: usize = 0x20; // Vector
    pub const m_vAngles: usize = 0x2C; // QAngle
    pub const m_hEntity: usize = 0x38; // CEntityHandle
    pub const m_hOtherEntity: usize = 0x3C; // CEntityHandle
    pub const m_flScale: usize = 0x40; // float
    pub const m_flMagnitude: usize = 0x44; // float
    pub const m_flRadius: usize = 0x48; // float
    pub const m_nSurfaceProp: usize = 0x4C; // CUtlStringToken
    pub const m_nEffectIndex: usize = 0x50; // CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
    pub const m_nDamageType: usize = 0x58; // uint32_t
    pub const m_nPenetrate: usize = 0x5C; // uint8_t
    pub const m_nMaterial: usize = 0x5E; // uint16_t
    pub const m_nHitBox: usize = 0x60; // uint16_t
    pub const m_nColor: usize = 0x62; // uint8_t
    pub const m_fFlags: usize = 0x63; // uint8_t
    pub const m_nAttachmentIndex: usize = 0x64; // AttachmentHandle_t
    pub const m_nAttachmentName: usize = 0x68; // CUtlStringToken
    pub const m_iEffectName: usize = 0x6C; // uint16_t
    pub const m_nExplosionType: usize = 0x6E; // uint8_t
}

pub mod CEnableMotionFixup { // CBaseEntity
}

pub mod CEntityBlocker { // CBaseModelEntity
}

pub mod CEntityComponent {
}

pub mod CEntityDissolve { // CBaseModelEntity
    pub const m_flFadeInStart: usize = 0x9F8; // float
    pub const m_flFadeInLength: usize = 0x9FC; // float
    pub const m_flFadeOutModelStart: usize = 0xA00; // float
    pub const m_flFadeOutModelLength: usize = 0xA04; // float
    pub const m_flFadeOutStart: usize = 0xA08; // float
    pub const m_flFadeOutLength: usize = 0xA0C; // float
    pub const m_flStartTime: usize = 0xA10; // GameTime_t
    pub const m_nDissolveType: usize = 0xA14; // EntityDisolveType_t
    pub const m_vDissolverOrigin: usize = 0xA18; // Vector
    pub const m_nMagnitude: usize = 0xA24; // uint32_t
}

pub mod CEntityFlame { // CBaseEntity
    pub const m_hEntAttached: usize = 0x7A8; // CHandle<CBaseEntity>
    pub const m_bCheapEffect: usize = 0x7AC; // bool
    pub const m_flSize: usize = 0x7B0; // float
    pub const m_bUseHitboxes: usize = 0x7B4; // bool
    pub const m_iNumHitboxFires: usize = 0x7B8; // int32_t
    pub const m_flHitboxFireScale: usize = 0x7BC; // float
    pub const m_flLifetime: usize = 0x7C0; // GameTime_t
    pub const m_hAttacker: usize = 0x7C4; // CHandle<CBaseEntity>
    pub const m_iDangerSound: usize = 0x7C8; // int32_t
    pub const m_flDirectDamagePerSecond: usize = 0x7CC; // float
    pub const m_iCustomDamageType: usize = 0x7D0; // int32_t
}

pub mod CEntityIdentity {
    pub const m_nameStringableIndex: usize = 0x14; // int32_t
    pub const m_name: usize = 0x18; // CUtlSymbolLarge
    pub const m_designerName: usize = 0x20; // CUtlSymbolLarge
    pub const m_flags: usize = 0x30; // uint32_t
    pub const m_worldGroupId: usize = 0x38; // WorldGroupId_t
    pub const m_fDataObjectTypes: usize = 0x3C; // uint32_t
    pub const m_PathIndex: usize = 0x40; // ChangeAccessorFieldPathIndex_t
    pub const m_pPrev: usize = 0x58; // CEntityIdentity*
    pub const m_pNext: usize = 0x60; // CEntityIdentity*
    pub const m_pPrevByClass: usize = 0x68; // CEntityIdentity*
    pub const m_pNextByClass: usize = 0x70; // CEntityIdentity*
}

pub mod CEntityInstance {
    pub const m_iszPrivateVScripts: usize = 0x8; // CUtlSymbolLarge
    pub const m_pEntity: usize = 0x10; // CEntityIdentity*
    pub const m_CScriptComponent: usize = 0x28; // CScriptComponent*
    pub const m_bVisibleinPVS: usize = 0x30; // bool
}

pub mod CEntitySubclassVDataBase {
}

pub mod CEnvBeam { // CBeam
    pub const m_active: usize = 0xA98; // int32_t
    pub const m_spriteTexture: usize = 0xAA0; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_iszStartEntity: usize = 0xAA8; // CUtlSymbolLarge
    pub const m_iszEndEntity: usize = 0xAB0; // CUtlSymbolLarge
    pub const m_life: usize = 0xAB8; // float
    pub const m_boltWidth: usize = 0xABC; // float
    pub const m_noiseAmplitude: usize = 0xAC0; // float
    pub const m_speed: usize = 0xAC4; // int32_t
    pub const m_restrike: usize = 0xAC8; // float
    pub const m_iszSpriteName: usize = 0xAD0; // CUtlSymbolLarge
    pub const m_frameStart: usize = 0xAD8; // int32_t
    pub const m_vEndPointWorld: usize = 0xADC; // Vector
    pub const m_vEndPointRelative: usize = 0xAE8; // Vector
    pub const m_radius: usize = 0xAF4; // float
    pub const m_TouchType: usize = 0xAF8; // Touch_t
    pub const m_iFilterName: usize = 0xB00; // CUtlSymbolLarge
    pub const m_hFilter: usize = 0xB08; // CHandle<CBaseEntity>
    pub const m_iszDecal: usize = 0xB10; // CUtlSymbolLarge
    pub const m_OnTouchedByEntity: usize = 0xB18; // CEntityIOOutput
}

pub mod CEnvBeverage { // CBaseEntity
    pub const m_CanInDispenser: usize = 0x7A8; // bool
    pub const m_nBeverageType: usize = 0x7AC; // int32_t
}

pub mod CEnvCombinedLightProbeVolume { // CBaseEntity
    pub const m_Color: usize = 0x1800; // Color
    pub const m_flBrightness: usize = 0x1804; // float
    pub const m_hCubemapTexture: usize = 0x1808; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_bCustomCubemapTexture: usize = 0x1810; // bool
    pub const m_hLightProbeTexture: usize = 0x1818; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_hLightProbeDirectLightIndicesTexture: usize = 0x1820; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_hLightProbeDirectLightScalarsTexture: usize = 0x1828; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_hLightProbeDirectLightShadowsTexture: usize = 0x1830; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_vBoxMins: usize = 0x1838; // Vector
    pub const m_vBoxMaxs: usize = 0x1844; // Vector
    pub const m_bMoveable: usize = 0x1850; // bool
    pub const m_nHandshake: usize = 0x1854; // int32_t
    pub const m_nEnvCubeMapArrayIndex: usize = 0x1858; // int32_t
    pub const m_nPriority: usize = 0x185C; // int32_t
    pub const m_bStartDisabled: usize = 0x1860; // bool
    pub const m_flEdgeFadeDist: usize = 0x1864; // float
    pub const m_vEdgeFadeDists: usize = 0x1868; // Vector
    pub const m_nLightProbeSizeX: usize = 0x1874; // int32_t
    pub const m_nLightProbeSizeY: usize = 0x1878; // int32_t
    pub const m_nLightProbeSizeZ: usize = 0x187C; // int32_t
    pub const m_nLightProbeAtlasX: usize = 0x1880; // int32_t
    pub const m_nLightProbeAtlasY: usize = 0x1884; // int32_t
    pub const m_nLightProbeAtlasZ: usize = 0x1888; // int32_t
    pub const m_bEnabled: usize = 0x18A1; // bool
}

pub mod CEnvCubemap { // CBaseEntity
    pub const m_hCubemapTexture: usize = 0x828; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_bCustomCubemapTexture: usize = 0x830; // bool
    pub const m_flInfluenceRadius: usize = 0x834; // float
    pub const m_vBoxProjectMins: usize = 0x838; // Vector
    pub const m_vBoxProjectMaxs: usize = 0x844; // Vector
    pub const m_bMoveable: usize = 0x850; // bool
    pub const m_nHandshake: usize = 0x854; // int32_t
    pub const m_nEnvCubeMapArrayIndex: usize = 0x858; // int32_t
    pub const m_nPriority: usize = 0x85C; // int32_t
    pub const m_flEdgeFadeDist: usize = 0x860; // float
    pub const m_vEdgeFadeDists: usize = 0x864; // Vector
    pub const m_flDiffuseScale: usize = 0x870; // float
    pub const m_bStartDisabled: usize = 0x874; // bool
    pub const m_bDefaultEnvMap: usize = 0x875; // bool
    pub const m_bDefaultSpecEnvMap: usize = 0x876; // bool
    pub const m_bIndoorCubeMap: usize = 0x877; // bool
    pub const m_bCopyDiffuseFromDefaultCubemap: usize = 0x878; // bool
    pub const m_bEnabled: usize = 0x888; // bool
}

pub mod CEnvCubemapBox { // CEnvCubemap
}

pub mod CEnvCubemapFog { // CBaseEntity
    pub const m_flEndDistance: usize = 0x7A8; // float
    pub const m_flStartDistance: usize = 0x7AC; // float
    pub const m_flFogFalloffExponent: usize = 0x7B0; // float
    pub const m_bHeightFogEnabled: usize = 0x7B4; // bool
    pub const m_flFogHeightWidth: usize = 0x7B8; // float
    pub const m_flFogHeightEnd: usize = 0x7BC; // float
    pub const m_flFogHeightStart: usize = 0x7C0; // float
    pub const m_flFogHeightExponent: usize = 0x7C4; // float
    pub const m_flLODBias: usize = 0x7C8; // float
    pub const m_bActive: usize = 0x7CC; // bool
    pub const m_bStartDisabled: usize = 0x7CD; // bool
    pub const m_flFogMaxOpacity: usize = 0x7D0; // float
    pub const m_nCubemapSourceType: usize = 0x7D4; // int32_t
    pub const m_hSkyMaterial: usize = 0x7D8; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_iszSkyEntity: usize = 0x7E0; // CUtlSymbolLarge
    pub const m_hFogCubemapTexture: usize = 0x7E8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_bHasHeightFogEnd: usize = 0x7F0; // bool
    pub const m_bFirstTime: usize = 0x7F1; // bool
}

pub mod CEnvDecal { // CBaseModelEntity
    pub const m_hDecalMaterial: usize = 0x9F8; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_flWidth: usize = 0xA00; // float
    pub const m_flHeight: usize = 0xA04; // float
    pub const m_flDepth: usize = 0xA08; // float
    pub const m_nRenderOrder: usize = 0xA0C; // uint32_t
    pub const m_bProjectOnWorld: usize = 0xA10; // bool
    pub const m_bProjectOnCharacters: usize = 0xA11; // bool
    pub const m_bProjectOnWater: usize = 0xA12; // bool
    pub const m_flDepthSortBias: usize = 0xA14; // float
}

pub mod CEnvDetailController { // CBaseEntity
    pub const m_flFadeStartDist: usize = 0x7A8; // float
    pub const m_flFadeEndDist: usize = 0x7AC; // float
}

pub mod CEnvEntityIgniter { // CBaseEntity
    pub const m_flLifetime: usize = 0x7A8; // float
}

pub mod CEnvEntityMaker { // CPointEntity
    pub const m_vecEntityMins: usize = 0x7A8; // Vector
    pub const m_vecEntityMaxs: usize = 0x7B4; // Vector
    pub const m_hCurrentInstance: usize = 0x7C0; // CHandle<CBaseEntity>
    pub const m_hCurrentBlocker: usize = 0x7C4; // CHandle<CBaseEntity>
    pub const m_vecBlockerOrigin: usize = 0x7C8; // Vector
    pub const m_angPostSpawnDirection: usize = 0x7D4; // QAngle
    pub const m_flPostSpawnDirectionVariance: usize = 0x7E0; // float
    pub const m_flPostSpawnSpeed: usize = 0x7E4; // float
    pub const m_bPostSpawnUseAngles: usize = 0x7E8; // bool
    pub const m_iszTemplate: usize = 0x7F0; // CUtlSymbolLarge
    pub const m_pOutputOnSpawned: usize = 0x7F8; // CEntityIOOutput
    pub const m_pOutputOnFailedSpawn: usize = 0x820; // CEntityIOOutput
}

pub mod CEnvExplosion { // CModelPointEntity
    pub const m_iMagnitude: usize = 0x9F8; // int32_t
    pub const m_flPlayerDamage: usize = 0x9FC; // float
    pub const m_iRadiusOverride: usize = 0xA00; // int32_t
    pub const m_flInnerRadius: usize = 0xA04; // float
    pub const m_spriteScale: usize = 0xA08; // int32_t
    pub const m_flDamageForce: usize = 0xA0C; // float
    pub const m_hInflictor: usize = 0xA10; // CHandle<CBaseEntity>
    pub const m_iCustomDamageType: usize = 0xA14; // int32_t
    pub const m_iszExplosionType: usize = 0xA20; // CUtlSymbolLarge
    pub const m_iszCustomEffectName: usize = 0xA28; // CUtlSymbolLarge
    pub const m_iszCustomSoundName: usize = 0xA30; // CUtlSymbolLarge
    pub const m_iClassIgnore: usize = 0xA38; // Class_T
    pub const m_iClassIgnore2: usize = 0xA3C; // Class_T
    pub const m_iszEntityIgnoreName: usize = 0xA40; // CUtlSymbolLarge
    pub const m_hEntityIgnore: usize = 0xA48; // CHandle<CBaseEntity>
}

pub mod CEnvFade { // CLogicalEntity
    pub const m_fadeColor: usize = 0x7A8; // Color
    pub const m_Duration: usize = 0x7AC; // float
    pub const m_HoldDuration: usize = 0x7B0; // float
    pub const m_OnBeginFade: usize = 0x7B8; // CEntityIOOutput
}

pub mod CEnvFireSensor { // CBaseEntity
    pub const m_bEnabled: usize = 0x7A8; // bool
    pub const m_bHeatAtLevel: usize = 0x7A9; // bool
    pub const m_radius: usize = 0x7AC; // float
    pub const m_targetLevel: usize = 0x7B0; // float
    pub const m_targetTime: usize = 0x7B4; // float
    pub const m_levelTime: usize = 0x7B8; // float
    pub const m_OnHeatLevelStart: usize = 0x7C0; // CEntityIOOutput
    pub const m_OnHeatLevelEnd: usize = 0x7E8; // CEntityIOOutput
}

pub mod CEnvFireSource { // CBaseEntity
    pub const m_bEnabled: usize = 0x7A8; // bool
    pub const m_radius: usize = 0x7AC; // float
    pub const m_damage: usize = 0x7B0; // float
}

pub mod CEnvFunnel { // CBaseEntity
}

pub mod CEnvGlobal { // CLogicalEntity
    pub const m_outCounter: usize = 0x7A8; // CEntityOutputTemplate<int32_t>
    pub const m_globalstate: usize = 0x7D0; // CUtlSymbolLarge
    pub const m_triggermode: usize = 0x7D8; // int32_t
    pub const m_initialstate: usize = 0x7DC; // int32_t
    pub const m_counter: usize = 0x7E0; // int32_t
}

pub mod CEnvHudHint { // CPointEntity
    pub const m_iszMessage: usize = 0x7A8; // CUtlSymbolLarge
}

pub mod CEnvInstructorHint { // CPointEntity
    pub const m_iszName: usize = 0x7A8; // CUtlSymbolLarge
    pub const m_iszReplace_Key: usize = 0x7B0; // CUtlSymbolLarge
    pub const m_iszHintTargetEntity: usize = 0x7B8; // CUtlSymbolLarge
    pub const m_iTimeout: usize = 0x7C0; // int32_t
    pub const m_iDisplayLimit: usize = 0x7C4; // int32_t
    pub const m_iszIcon_Onscreen: usize = 0x7C8; // CUtlSymbolLarge
    pub const m_iszIcon_Offscreen: usize = 0x7D0; // CUtlSymbolLarge
    pub const m_iszCaption: usize = 0x7D8; // CUtlSymbolLarge
    pub const m_iszActivatorCaption: usize = 0x7E0; // CUtlSymbolLarge
    pub const m_Color: usize = 0x7E8; // Color
    pub const m_fIconOffset: usize = 0x7EC; // float
    pub const m_fRange: usize = 0x7F0; // float
    pub const m_iPulseOption: usize = 0x7F4; // uint8_t
    pub const m_iAlphaOption: usize = 0x7F5; // uint8_t
    pub const m_iShakeOption: usize = 0x7F6; // uint8_t
    pub const m_bStatic: usize = 0x7F7; // bool
    pub const m_bNoOffscreen: usize = 0x7F8; // bool
    pub const m_bForceCaption: usize = 0x7F9; // bool
    pub const m_iInstanceType: usize = 0x7FC; // int32_t
    pub const m_bSuppressRest: usize = 0x800; // bool
    pub const m_iszBinding: usize = 0x808; // CUtlSymbolLarge
    pub const m_bAllowNoDrawTarget: usize = 0x810; // bool
    pub const m_bAutoStart: usize = 0x811; // bool
    pub const m_bLocalPlayerOnly: usize = 0x812; // bool
}

pub mod CEnvInstructorVRHint { // CPointEntity
    pub const m_iszName: usize = 0x7A8; // CUtlSymbolLarge
    pub const m_iszHintTargetEntity: usize = 0x7B0; // CUtlSymbolLarge
    pub const m_iTimeout: usize = 0x7B8; // int32_t
    pub const m_iszCaption: usize = 0x7C0; // CUtlSymbolLarge
    pub const m_iszStartSound: usize = 0x7C8; // CUtlSymbolLarge
    pub const m_iLayoutFileType: usize = 0x7D0; // int32_t
    pub const m_iszCustomLayoutFile: usize = 0x7D8; // CUtlSymbolLarge
    pub const m_iAttachType: usize = 0x7E0; // int32_t
    pub const m_flHeightOffset: usize = 0x7E4; // float
}

pub mod CEnvLaser { // CBeam
    pub const m_iszLaserTarget: usize = 0xA98; // CUtlSymbolLarge
    pub const m_pSprite: usize = 0xAA0; // CSprite*
    pub const m_iszSpriteName: usize = 0xAA8; // CUtlSymbolLarge
    pub const m_firePosition: usize = 0xAB0; // Vector
    pub const m_flStartFrame: usize = 0xABC; // float
}

pub mod CEnvLightProbeVolume { // CBaseEntity
    pub const m_hLightProbeTexture: usize = 0x1780; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_hLightProbeDirectLightIndicesTexture: usize = 0x1788; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_hLightProbeDirectLightScalarsTexture: usize = 0x1790; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_hLightProbeDirectLightShadowsTexture: usize = 0x1798; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_vBoxMins: usize = 0x17A0; // Vector
    pub const m_vBoxMaxs: usize = 0x17AC; // Vector
    pub const m_bMoveable: usize = 0x17B8; // bool
    pub const m_nHandshake: usize = 0x17BC; // int32_t
    pub const m_nPriority: usize = 0x17C0; // int32_t
    pub const m_bStartDisabled: usize = 0x17C4; // bool
    pub const m_nLightProbeSizeX: usize = 0x17C8; // int32_t
    pub const m_nLightProbeSizeY: usize = 0x17CC; // int32_t
    pub const m_nLightProbeSizeZ: usize = 0x17D0; // int32_t
    pub const m_nLightProbeAtlasX: usize = 0x17D4; // int32_t
    pub const m_nLightProbeAtlasY: usize = 0x17D8; // int32_t
    pub const m_nLightProbeAtlasZ: usize = 0x17DC; // int32_t
    pub const m_bEnabled: usize = 0x17E9; // bool
}

pub mod CEnvMicrophone { // CPointEntity
    pub const m_bDisabled: usize = 0x7A8; // bool
    pub const m_hMeasureTarget: usize = 0x7AC; // CHandle<CBaseEntity>
    pub const m_nSoundMask: usize = 0x7B0; // int32_t
    pub const m_flSensitivity: usize = 0x7B4; // float
    pub const m_flSmoothFactor: usize = 0x7B8; // float
    pub const m_flMaxRange: usize = 0x7BC; // float
    pub const m_iszSpeakerName: usize = 0x7C0; // CUtlSymbolLarge
    pub const m_hSpeaker: usize = 0x7C8; // CHandle<CBaseEntity>
    pub const m_bAvoidFeedback: usize = 0x7CC; // bool
    pub const m_iSpeakerDSPPreset: usize = 0x7D0; // int32_t
    pub const m_iszListenFilter: usize = 0x7D8; // CUtlSymbolLarge
    pub const m_hListenFilter: usize = 0x7E0; // CHandle<CBaseFilter>
    pub const m_SoundLevel: usize = 0x7E8; // CEntityOutputTemplate<float>
    pub const m_OnRoutedSound: usize = 0x810; // CEntityIOOutput
    pub const m_OnHeardSound: usize = 0x838; // CEntityIOOutput
    pub const m_szLastSound: usize = 0x860; // char[256]
    pub const m_iLastRoutedFrame: usize = 0x960; // int32_t
}

pub mod CEnvMuzzleFlash { // CPointEntity
    pub const m_flScale: usize = 0x7A8; // float
    pub const m_iszParentAttachment: usize = 0x7B0; // CUtlSymbolLarge
}

pub mod CEnvParticleGlow { // CParticleSystem
    pub const m_flAlphaScale: usize = 0xF70; // float
    pub const m_flRadiusScale: usize = 0xF74; // float
    pub const m_flSelfIllumScale: usize = 0xF78; // float
    pub const m_ColorTint: usize = 0xF7C; // Color
    pub const m_hTextureOverride: usize = 0xF80; // CStrongHandle<InfoForResourceTypeCTextureBase>
}

pub mod CEnvProjectedTexture { // CModelPointEntity
    pub const m_hTargetEntity: usize = 0x9F8; // CHandle<CBaseEntity>
    pub const m_bState: usize = 0x9FC; // bool
    pub const m_bAlwaysUpdate: usize = 0x9FD; // bool
    pub const m_flLightFOV: usize = 0xA00; // float
    pub const m_bEnableShadows: usize = 0xA04; // bool
    pub const m_bSimpleProjection: usize = 0xA05; // bool
    pub const m_bLightOnlyTarget: usize = 0xA06; // bool
    pub const m_bLightWorld: usize = 0xA07; // bool
    pub const m_bCameraSpace: usize = 0xA08; // bool
    pub const m_flBrightnessScale: usize = 0xA0C; // float
    pub const m_LightColor: usize = 0xA10; // Color
    pub const m_flIntensity: usize = 0xA14; // float
    pub const m_flLinearAttenuation: usize = 0xA18; // float
    pub const m_flQuadraticAttenuation: usize = 0xA1C; // float
    pub const m_bVolumetric: usize = 0xA20; // bool
    pub const m_flNoiseStrength: usize = 0xA24; // float
    pub const m_flFlashlightTime: usize = 0xA28; // float
    pub const m_nNumPlanes: usize = 0xA2C; // uint32_t
    pub const m_flPlaneOffset: usize = 0xA30; // float
    pub const m_flVolumetricIntensity: usize = 0xA34; // float
    pub const m_flColorTransitionTime: usize = 0xA38; // float
    pub const m_flAmbient: usize = 0xA3C; // float
    pub const m_SpotlightTextureName: usize = 0xA40; // char[512]
    pub const m_nSpotlightTextureFrame: usize = 0xC40; // int32_t
    pub const m_nShadowQuality: usize = 0xC44; // uint32_t
    pub const m_flNearZ: usize = 0xC48; // float
    pub const m_flFarZ: usize = 0xC4C; // float
    pub const m_flProjectionSize: usize = 0xC50; // float
    pub const m_flRotation: usize = 0xC54; // float
    pub const m_bFlipHorizontal: usize = 0xC58; // bool
}

pub mod CEnvScreenOverlay { // CPointEntity
    pub const m_iszOverlayNames: usize = 0x7A8; // CUtlSymbolLarge[10]
    pub const m_flOverlayTimes: usize = 0x7F8; // float[10]
    pub const m_flStartTime: usize = 0x820; // GameTime_t
    pub const m_iDesiredOverlay: usize = 0x824; // int32_t
    pub const m_bIsActive: usize = 0x828; // bool
}

pub mod CEnvShake { // CPointEntity
    pub const m_limitToEntity: usize = 0x7A8; // CUtlSymbolLarge
    pub const m_Amplitude: usize = 0x7B0; // float
    pub const m_Frequency: usize = 0x7B4; // float
    pub const m_Duration: usize = 0x7B8; // float
    pub const m_Radius: usize = 0x7BC; // float
    pub const m_stopTime: usize = 0x7C0; // GameTime_t
    pub const m_nextShake: usize = 0x7C4; // GameTime_t
    pub const m_currentAmp: usize = 0x7C8; // float
    pub const m_maxForce: usize = 0x7CC; // Vector
    pub const m_shakeCallback: usize = 0x7E0; // CPhysicsShake
}

pub mod CEnvSky { // CBaseModelEntity
    pub const m_hSkyMaterial: usize = 0x9F8; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_hSkyMaterialLightingOnly: usize = 0xA00; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_bStartDisabled: usize = 0xA08; // bool
    pub const m_vTintColor: usize = 0xA09; // Color
    pub const m_vTintColorLightingOnly: usize = 0xA0D; // Color
    pub const m_flBrightnessScale: usize = 0xA14; // float
    pub const m_nFogType: usize = 0xA18; // int32_t
    pub const m_flFogMinStart: usize = 0xA1C; // float
    pub const m_flFogMinEnd: usize = 0xA20; // float
    pub const m_flFogMaxStart: usize = 0xA24; // float
    pub const m_flFogMaxEnd: usize = 0xA28; // float
    pub const m_bEnabled: usize = 0xA2C; // bool
}

pub mod CEnvSoundscape { // CServerOnlyEntity
    pub const m_OnPlay: usize = 0x7A8; // CEntityIOOutput
    pub const m_flRadius: usize = 0x7D0; // float
    pub const m_soundscapeName: usize = 0x7D8; // CUtlSymbolLarge
    pub const m_soundEventName: usize = 0x7E0; // CUtlSymbolLarge
    pub const m_bOverrideWithEvent: usize = 0x7E8; // bool
    pub const m_soundscapeIndex: usize = 0x7EC; // int32_t
    pub const m_soundscapeEntityListId: usize = 0x7F0; // int32_t
    pub const m_soundEventHash: usize = 0x7F4; // uint32_t
    pub const m_positionNames: usize = 0x7F8; // CUtlSymbolLarge[8]
    pub const m_hProxySoundscape: usize = 0x838; // CHandle<CEnvSoundscape>
    pub const m_bDisabled: usize = 0x83C; // bool
}

pub mod CEnvSoundscapeAlias_snd_soundscape { // CEnvSoundscape
}

pub mod CEnvSoundscapeProxy { // CEnvSoundscape
    pub const m_MainSoundscapeName: usize = 0x840; // CUtlSymbolLarge
}

pub mod CEnvSoundscapeProxyAlias_snd_soundscape_proxy { // CEnvSoundscapeProxy
}

pub mod CEnvSoundscapeTriggerable { // CEnvSoundscape
}

pub mod CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable { // CEnvSoundscapeTriggerable
}

pub mod CEnvSpark { // CPointEntity
    pub const m_flDelay: usize = 0x7A8; // float
    pub const m_nMagnitude: usize = 0x7AC; // int32_t
    pub const m_nTrailLength: usize = 0x7B0; // int32_t
    pub const m_nType: usize = 0x7B4; // int32_t
    pub const m_OnSpark: usize = 0x7B8; // CEntityIOOutput
}

pub mod CEnvSplash { // CPointEntity
    pub const m_flScale: usize = 0x7A8; // float
}

pub mod CEnvTilt { // CPointEntity
    pub const m_Duration: usize = 0x7A8; // float
    pub const m_Radius: usize = 0x7AC; // float
    pub const m_TiltTime: usize = 0x7B0; // float
    pub const m_stopTime: usize = 0x7B4; // GameTime_t
}

pub mod CEnvTracer { // CPointEntity
    pub const m_vecEnd: usize = 0x7A8; // Vector
    pub const m_flDelay: usize = 0x7B4; // float
}

pub mod CEnvViewPunch { // CPointEntity
    pub const m_flRadius: usize = 0x7A8; // float
    pub const m_angViewPunch: usize = 0x7AC; // QAngle
}

pub mod CEnvVolumetricFogController { // CBaseEntity
    pub const m_flScattering: usize = 0x7A8; // float
    pub const m_flAnisotropy: usize = 0x7AC; // float
    pub const m_flFadeSpeed: usize = 0x7B0; // float
    pub const m_flDrawDistance: usize = 0x7B4; // float
    pub const m_flFadeInStart: usize = 0x7B8; // float
    pub const m_flFadeInEnd: usize = 0x7BC; // float
    pub const m_flIndirectStrength: usize = 0x7C0; // float
    pub const m_nIndirectTextureDimX: usize = 0x7C4; // int32_t
    pub const m_nIndirectTextureDimY: usize = 0x7C8; // int32_t
    pub const m_nIndirectTextureDimZ: usize = 0x7CC; // int32_t
    pub const m_vBoxMins: usize = 0x7D0; // Vector
    pub const m_vBoxMaxs: usize = 0x7DC; // Vector
    pub const m_bActive: usize = 0x7E8; // bool
    pub const m_flStartAnisoTime: usize = 0x7EC; // GameTime_t
    pub const m_flStartScatterTime: usize = 0x7F0; // GameTime_t
    pub const m_flStartDrawDistanceTime: usize = 0x7F4; // GameTime_t
    pub const m_flStartAnisotropy: usize = 0x7F8; // float
    pub const m_flStartScattering: usize = 0x7FC; // float
    pub const m_flStartDrawDistance: usize = 0x800; // float
    pub const m_flDefaultAnisotropy: usize = 0x804; // float
    pub const m_flDefaultScattering: usize = 0x808; // float
    pub const m_flDefaultDrawDistance: usize = 0x80C; // float
    pub const m_bStartDisabled: usize = 0x810; // bool
    pub const m_bEnableIndirect: usize = 0x811; // bool
    pub const m_bIsMaster: usize = 0x812; // bool
    pub const m_hFogIndirectTexture: usize = 0x818; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_nForceRefreshCount: usize = 0x820; // int32_t
    pub const m_bFirstTime: usize = 0x824; // bool
}

pub mod CEnvVolumetricFogVolume { // CBaseEntity
    pub const m_bActive: usize = 0x7A8; // bool
    pub const m_vBoxMins: usize = 0x7AC; // Vector
    pub const m_vBoxMaxs: usize = 0x7B8; // Vector
    pub const m_bStartDisabled: usize = 0x7C4; // bool
    pub const m_flStrength: usize = 0x7C8; // float
    pub const m_nFalloffShape: usize = 0x7CC; // int32_t
    pub const m_flFalloffExponent: usize = 0x7D0; // float
}

pub mod CEnvWind { // CBaseEntity
    pub const m_EnvWindShared: usize = 0x7A8; // CEnvWindShared
}

pub mod CEnvWindShared {
    pub const m_flStartTime: usize = 0x8; // GameTime_t
    pub const m_iWindSeed: usize = 0xC; // uint32_t
    pub const m_iMinWind: usize = 0x10; // uint16_t
    pub const m_iMaxWind: usize = 0x12; // uint16_t
    pub const m_windRadius: usize = 0x14; // int32_t
    pub const m_iMinGust: usize = 0x18; // uint16_t
    pub const m_iMaxGust: usize = 0x1A; // uint16_t
    pub const m_flMinGustDelay: usize = 0x1C; // float
    pub const m_flMaxGustDelay: usize = 0x20; // float
    pub const m_flGustDuration: usize = 0x24; // float
    pub const m_iGustDirChange: usize = 0x28; // uint16_t
    pub const m_location: usize = 0x2C; // Vector
    pub const m_iszGustSound: usize = 0x38; // int32_t
    pub const m_iWindDir: usize = 0x3C; // int32_t
    pub const m_flWindSpeed: usize = 0x40; // float
    pub const m_currentWindVector: usize = 0x44; // Vector
    pub const m_CurrentSwayVector: usize = 0x50; // Vector
    pub const m_PrevSwayVector: usize = 0x5C; // Vector
    pub const m_iInitialWindDir: usize = 0x68; // uint16_t
    pub const m_flInitialWindSpeed: usize = 0x6C; // float
    pub const m_OnGustStart: usize = 0x70; // CEntityIOOutput
    pub const m_OnGustEnd: usize = 0x98; // CEntityIOOutput
    pub const m_flVariationTime: usize = 0xC0; // GameTime_t
    pub const m_flSwayTime: usize = 0xC4; // GameTime_t
    pub const m_flSimTime: usize = 0xC8; // GameTime_t
    pub const m_flSwitchTime: usize = 0xCC; // GameTime_t
    pub const m_flAveWindSpeed: usize = 0xD0; // float
    pub const m_bGusting: usize = 0xD4; // bool
    pub const m_flWindAngleVariation: usize = 0xD8; // float
    pub const m_flWindSpeedVariation: usize = 0xDC; // float
    pub const m_iEntIndex: usize = 0xE0; // CEntityIndex
}

pub mod CEnvWindShared_WindAveEvent_t {
    pub const m_flStartWindSpeed: usize = 0x0; // float
    pub const m_flAveWindSpeed: usize = 0x4; // float
}

pub mod CEnvWindShared_WindVariationEvent_t {
    pub const m_flWindAngleVariation: usize = 0x0; // float
    pub const m_flWindSpeedVariation: usize = 0x4; // float
}

pub mod CFilterAttributeInt { // CBaseFilter
    pub const m_sAttributeName: usize = 0x800; // CUtlStringToken
}

pub mod CFilterClass { // CBaseFilter
    pub const m_iFilterClass: usize = 0x800; // CUtlSymbolLarge
}

pub mod CFilterContext { // CBaseFilter
    pub const m_iFilterContext: usize = 0x800; // CUtlSymbolLarge
}

pub mod CFilterEnemy { // CBaseFilter
    pub const m_iszEnemyName: usize = 0x800; // CUtlSymbolLarge
    pub const m_flRadius: usize = 0x808; // float
    pub const m_flOuterRadius: usize = 0x80C; // float
    pub const m_nMaxSquadmatesPerEnemy: usize = 0x810; // int32_t
    pub const m_iszPlayerName: usize = 0x818; // CUtlSymbolLarge
}

pub mod CFilterLOS { // CBaseFilter
}

pub mod CFilterMassGreater { // CBaseFilter
    pub const m_fFilterMass: usize = 0x800; // float
}

pub mod CFilterModel { // CBaseFilter
    pub const m_iFilterModel: usize = 0x800; // CUtlSymbolLarge
}

pub mod CFilterMultiple { // CBaseFilter
    pub const m_nFilterType: usize = 0x800; // filter_t
    pub const m_iFilterName: usize = 0x808; // CUtlSymbolLarge[10]
    pub const m_hFilter: usize = 0x858; // CHandle<CBaseEntity>[10]
    pub const m_nFilterCount: usize = 0x880; // int32_t
}

pub mod CFilterName { // CBaseFilter
    pub const m_iFilterName: usize = 0x800; // CUtlSymbolLarge
}

pub mod CFilterProximity { // CBaseFilter
    pub const m_flRadius: usize = 0x800; // float
}

pub mod CFire { // CBaseModelEntity
    pub const m_hEffect: usize = 0x9F8; // CHandle<CBaseFire>
    pub const m_hOwner: usize = 0x9FC; // CHandle<CBaseEntity>
    pub const m_nFireType: usize = 0xA00; // int32_t
    pub const m_flFuel: usize = 0xA04; // float
    pub const m_flDamageTime: usize = 0xA08; // GameTime_t
    pub const m_lastDamage: usize = 0xA0C; // GameTime_t
    pub const m_flFireSize: usize = 0xA10; // float
    pub const m_flLastNavUpdateTime: usize = 0xA14; // GameTime_t
    pub const m_flHeatLevel: usize = 0xA18; // float
    pub const m_flHeatAbsorb: usize = 0xA1C; // float
    pub const m_flDamageScale: usize = 0xA20; // float
    pub const m_flMaxHeat: usize = 0xA24; // float
    pub const m_flLastHeatLevel: usize = 0xA28; // float
    pub const m_flAttackTime: usize = 0xA2C; // float
    pub const m_bEnabled: usize = 0xA30; // bool
    pub const m_bStartDisabled: usize = 0xA31; // bool
    pub const m_bDidActivate: usize = 0xA32; // bool
    pub const m_OnIgnited: usize = 0xA38; // CEntityIOOutput
    pub const m_OnExtinguished: usize = 0xA60; // CEntityIOOutput
}

pub mod CFireCrackerBlast { // CInferno
}

pub mod CFireSmoke { // CBaseFire
    pub const m_nFlameModelIndex: usize = 0x7B8; // int32_t
    pub const m_nFlameFromAboveModelIndex: usize = 0x7BC; // int32_t
}

pub mod CFiringModeFloat {
    pub const m_flValues: usize = 0x0; // float[2]
}

pub mod CFiringModeInt {
    pub const m_nValues: usize = 0x0; // int32_t[2]
}

pub mod CFish { // CBaseAnimGraph
    pub const m_pool: usize = 0xBF0; // CHandle<CFishPool>
    pub const m_id: usize = 0xBF4; // uint32_t
    pub const m_x: usize = 0xBF8; // float
    pub const m_y: usize = 0xBFC; // float
    pub const m_z: usize = 0xC00; // float
    pub const m_angle: usize = 0xC04; // float
    pub const m_angleChange: usize = 0xC08; // float
    pub const m_forward: usize = 0xC0C; // Vector
    pub const m_perp: usize = 0xC18; // Vector
    pub const m_poolOrigin: usize = 0xC24; // Vector
    pub const m_waterLevel: usize = 0xC30; // float
    pub const m_speed: usize = 0xC34; // float
    pub const m_desiredSpeed: usize = 0xC38; // float
    pub const m_calmSpeed: usize = 0xC3C; // float
    pub const m_panicSpeed: usize = 0xC40; // float
    pub const m_avoidRange: usize = 0xC44; // float
    pub const m_turnTimer: usize = 0xC48; // CountdownTimer
    pub const m_turnClockwise: usize = 0xC60; // bool
    pub const m_goTimer: usize = 0xC68; // CountdownTimer
    pub const m_moveTimer: usize = 0xC80; // CountdownTimer
    pub const m_panicTimer: usize = 0xC98; // CountdownTimer
    pub const m_disperseTimer: usize = 0xCB0; // CountdownTimer
    pub const m_proximityTimer: usize = 0xCC8; // CountdownTimer
    pub const m_visible: usize = 0xCE0; // CUtlVector<CFish*>
}

pub mod CFishPool { // CBaseEntity
    pub const m_fishCount: usize = 0x7B4; // int32_t
    pub const m_maxRange: usize = 0x7B8; // float
    pub const m_swimDepth: usize = 0x7BC; // float
    pub const m_waterLevel: usize = 0x7C0; // float
    pub const m_isDormant: usize = 0x7C4; // bool
    pub const m_fishes: usize = 0x7C8; // CUtlVector<CHandle<CFish>>
    pub const m_visTimer: usize = 0x7E0; // CountdownTimer
}

pub mod CFists { // CCSWeaponBase
    pub const m_bPlayingUninterruptableAct: usize = 0x1198; // bool
    pub const m_nUninterruptableActivity: usize = 0x119C; // PlayerAnimEvent_t
    pub const m_bRestorePrevWep: usize = 0x11A0; // bool
    pub const m_hWeaponBeforePrevious: usize = 0x11A4; // CHandle<CBasePlayerWeapon>
    pub const m_hWeaponPrevious: usize = 0x11A8; // CHandle<CBasePlayerWeapon>
    pub const m_bDelayedHardPunchIncoming: usize = 0x11AC; // bool
    pub const m_bDestroyAfterTaunt: usize = 0x11AD; // bool
}

pub mod CFlashbang { // CBaseCSGrenade
}

pub mod CFlashbangProjectile { // CBaseCSGrenadeProjectile
    pub const m_flTimeToDetonate: usize = 0xD98; // float
    pub const m_numOpponentsHit: usize = 0xD9C; // uint8_t
    pub const m_numTeammatesHit: usize = 0xD9D; // uint8_t
}

pub mod CFogController { // CBaseEntity
    pub const m_fog: usize = 0x7A8; // fogparams_t
    pub const m_bUseAngles: usize = 0x810; // bool
    pub const m_iChangedVariables: usize = 0x814; // int32_t
}

pub mod CFogTrigger { // CBaseTrigger
    pub const m_fog: usize = 0xBA0; // fogparams_t
}

pub mod CFogVolume { // CServerOnlyModelEntity
    pub const m_fogName: usize = 0x9F8; // CUtlSymbolLarge
    pub const m_postProcessName: usize = 0xA00; // CUtlSymbolLarge
    pub const m_colorCorrectionName: usize = 0xA08; // CUtlSymbolLarge
    pub const m_bDisabled: usize = 0xA18; // bool
    pub const m_bInFogVolumesList: usize = 0xA19; // bool
}

pub mod CFootstepControl { // CBaseTrigger
    pub const m_source: usize = 0xBA0; // CUtlSymbolLarge
    pub const m_destination: usize = 0xBA8; // CUtlSymbolLarge
}

pub mod CFootstepTableHandle {
}

pub mod CFuncBrush { // CBaseModelEntity
    pub const m_iSolidity: usize = 0x9F8; // BrushSolidities_e
    pub const m_iDisabled: usize = 0x9FC; // int32_t
    pub const m_bSolidBsp: usize = 0xA00; // bool
    pub const m_iszExcludedClass: usize = 0xA08; // CUtlSymbolLarge
    pub const m_bInvertExclusion: usize = 0xA10; // bool
    pub const m_bScriptedMovement: usize = 0xA11; // bool
}

pub mod CFuncConveyor { // CBaseModelEntity
    pub const m_szConveyorModels: usize = 0x9F8; // CUtlSymbolLarge
    pub const m_flTransitionDurationSeconds: usize = 0xA00; // float
    pub const m_angMoveEntitySpace: usize = 0xA04; // QAngle
    pub const m_vecMoveDirEntitySpace: usize = 0xA10; // Vector
    pub const m_flTargetSpeed: usize = 0xA1C; // float
    pub const m_nTransitionStartTick: usize = 0xA20; // GameTick_t
    pub const m_nTransitionDurationTicks: usize = 0xA24; // int32_t
    pub const m_flTransitionStartSpeed: usize = 0xA28; // float
    pub const m_hConveyorModels: usize = 0xA30; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
}

pub mod CFuncElectrifiedVolume { // CFuncBrush
    pub const m_EffectName: usize = 0xA18; // CUtlSymbolLarge
    pub const m_EffectInterpenetrateName: usize = 0xA20; // CUtlSymbolLarge
    pub const m_EffectZapName: usize = 0xA28; // CUtlSymbolLarge
    pub const m_iszEffectSource: usize = 0xA30; // CUtlSymbolLarge
}

pub mod CFuncIllusionary { // CBaseModelEntity
}

pub mod CFuncInteractionLayerClip { // CBaseModelEntity
    pub const m_bDisabled: usize = 0x9F8; // bool
    pub const m_iszInteractsAs: usize = 0xA00; // CUtlSymbolLarge
    pub const m_iszInteractsWith: usize = 0xA08; // CUtlSymbolLarge
}

pub mod CFuncLadder { // CBaseModelEntity
    pub const m_vecLadderDir: usize = 0x9F8; // Vector
    pub const m_Dismounts: usize = 0xA08; // CUtlVector<CHandle<CInfoLadderDismount>>
    pub const m_vecLocalTop: usize = 0xA20; // Vector
    pub const m_vecPlayerMountPositionTop: usize = 0xA2C; // Vector
    pub const m_vecPlayerMountPositionBottom: usize = 0xA38; // Vector
    pub const m_flAutoRideSpeed: usize = 0xA44; // float
    pub const m_bDisabled: usize = 0xA48; // bool
    pub const m_bFakeLadder: usize = 0xA49; // bool
    pub const m_bHasSlack: usize = 0xA4A; // bool
    pub const m_surfacePropName: usize = 0xA50; // CUtlSymbolLarge
    pub const m_OnPlayerGotOnLadder: usize = 0xA58; // CEntityIOOutput
    pub const m_OnPlayerGotOffLadder: usize = 0xA80; // CEntityIOOutput
}

pub mod CFuncLadderAlias_func_useableladder { // CFuncLadder
}

pub mod CFuncMonitor { // CFuncBrush
    pub const m_targetCamera: usize = 0xA18; // CUtlString
    pub const m_nResolutionEnum: usize = 0xA20; // int32_t
    pub const m_bRenderShadows: usize = 0xA24; // bool
    pub const m_bUseUniqueColorTarget: usize = 0xA25; // bool
    pub const m_brushModelName: usize = 0xA28; // CUtlString
    pub const m_hTargetCamera: usize = 0xA30; // CHandle<CBaseEntity>
    pub const m_bEnabled: usize = 0xA34; // bool
    pub const m_bDraw3DSkybox: usize = 0xA35; // bool
    pub const m_bStartEnabled: usize = 0xA36; // bool
}

pub mod CFuncMoveLinear { // CBaseToggle
    pub const m_authoredPosition: usize = 0xA78; // MoveLinearAuthoredPos_t
    pub const m_angMoveEntitySpace: usize = 0xA7C; // QAngle
    pub const m_vecMoveDirParentSpace: usize = 0xA88; // Vector
    pub const m_soundStart: usize = 0xA98; // CUtlSymbolLarge
    pub const m_soundStop: usize = 0xAA0; // CUtlSymbolLarge
    pub const m_currentSound: usize = 0xAA8; // CUtlSymbolLarge
    pub const m_flBlockDamage: usize = 0xAB0; // float
    pub const m_flStartPosition: usize = 0xAB4; // float
    pub const m_flMoveDistance: usize = 0xAB8; // float
    pub const m_OnFullyOpen: usize = 0xAC8; // CEntityIOOutput
    pub const m_OnFullyClosed: usize = 0xAF0; // CEntityIOOutput
    pub const m_bCreateMovableNavMesh: usize = 0xB18; // bool
    pub const m_bCreateNavObstacle: usize = 0xB19; // bool
}

pub mod CFuncMoveLinearAlias_momentary_door { // CFuncMoveLinear
}

pub mod CFuncNavBlocker { // CBaseModelEntity
    pub const m_bDisabled: usize = 0x9F8; // bool
    pub const m_nBlockedTeamNumber: usize = 0x9FC; // int32_t
}

pub mod CFuncNavObstruction { // CBaseModelEntity
    pub const m_bDisabled: usize = 0xA00; // bool
}

pub mod CFuncPlat { // CBasePlatTrain
    pub const m_sNoise: usize = 0xAA0; // CUtlSymbolLarge
}

pub mod CFuncPlatRot { // CFuncPlat
    pub const m_end: usize = 0xAA8; // QAngle
    pub const m_start: usize = 0xAB4; // QAngle
}

pub mod CFuncPropRespawnZone { // CBaseEntity
}

pub mod CFuncRotating { // CBaseModelEntity
    pub const m_OnStopped: usize = 0x9F8; // CEntityIOOutput
    pub const m_OnStarted: usize = 0xA20; // CEntityIOOutput
    pub const m_OnReachedStart: usize = 0xA48; // CEntityIOOutput
    pub const m_localRotationVector: usize = 0xA70; // RotationVector
    pub const m_flFanFriction: usize = 0xA7C; // float
    pub const m_flAttenuation: usize = 0xA80; // float
    pub const m_flVolume: usize = 0xA84; // float
    pub const m_flTargetSpeed: usize = 0xA88; // float
    pub const m_flMaxSpeed: usize = 0xA8C; // float
    pub const m_flBlockDamage: usize = 0xA90; // float
    pub const m_flTimeScale: usize = 0xA94; // float
    pub const m_NoiseRunning: usize = 0xA98; // CUtlSymbolLarge
    pub const m_bReversed: usize = 0xAA0; // bool
    pub const m_bAccelDecel: usize = 0xAA1; // bool
    pub const m_prevLocalAngles: usize = 0xAAC; // QAngle
    pub const m_angStart: usize = 0xAB8; // QAngle
    pub const m_bStopAtStartPos: usize = 0xAC4; // bool
    pub const m_vecClientOrigin: usize = 0xAC8; // Vector
    pub const m_vecClientAngles: usize = 0xAD4; // QAngle
}

pub mod CFuncShatterglass { // CBaseModelEntity
    pub const m_hGlassMaterialDamaged: usize = 0x9F8; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_hGlassMaterialUndamaged: usize = 0xA00; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_hConcreteMaterialEdgeFace: usize = 0xA08; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_hConcreteMaterialEdgeCaps: usize = 0xA10; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_hConcreteMaterialEdgeFins: usize = 0xA18; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_matPanelTransform: usize = 0xA20; // matrix3x4_t
    pub const m_matPanelTransformWsTemp: usize = 0xA50; // matrix3x4_t
    pub const m_vecShatterGlassShards: usize = 0xA80; // CUtlVector<uint32_t>
    pub const m_PanelSize: usize = 0xA98; // Vector2D
    pub const m_vecPanelNormalWs: usize = 0xAA0; // Vector
    pub const m_nNumShardsEverCreated: usize = 0xAAC; // int32_t
    pub const m_flLastShatterSoundEmitTime: usize = 0xAB0; // GameTime_t
    pub const m_flLastCleanupTime: usize = 0xAB4; // GameTime_t
    pub const m_flInitAtTime: usize = 0xAB8; // GameTime_t
    pub const m_flGlassThickness: usize = 0xABC; // float
    pub const m_flSpawnInvulnerability: usize = 0xAC0; // float
    pub const m_bBreakSilent: usize = 0xAC4; // bool
    pub const m_bBreakShardless: usize = 0xAC5; // bool
    pub const m_bBroken: usize = 0xAC6; // bool
    pub const m_bHasRateLimitedShards: usize = 0xAC7; // bool
    pub const m_bGlassNavIgnore: usize = 0xAC8; // bool
    pub const m_bGlassInFrame: usize = 0xAC9; // bool
    pub const m_bStartBroken: usize = 0xACA; // bool
    pub const m_iInitialDamageType: usize = 0xACB; // uint8_t
    pub const m_szDamagePositioningEntityName01: usize = 0xAD0; // CUtlSymbolLarge
    pub const m_szDamagePositioningEntityName02: usize = 0xAD8; // CUtlSymbolLarge
    pub const m_szDamagePositioningEntityName03: usize = 0xAE0; // CUtlSymbolLarge
    pub const m_szDamagePositioningEntityName04: usize = 0xAE8; // CUtlSymbolLarge
    pub const m_vInitialDamagePositions: usize = 0xAF0; // CUtlVector<Vector>
    pub const m_vExtraDamagePositions: usize = 0xB08; // CUtlVector<Vector>
    pub const m_OnBroken: usize = 0xB20; // CEntityIOOutput
    pub const m_iSurfaceType: usize = 0xB49; // uint8_t
}

pub mod CFuncTankTrain { // CFuncTrackTrain
    pub const m_OnDeath: usize = 0xB48; // CEntityIOOutput
}

pub mod CFuncTimescale { // CBaseEntity
    pub const m_flDesiredTimescale: usize = 0x7A8; // float
    pub const m_flAcceleration: usize = 0x7AC; // float
    pub const m_flMinBlendRate: usize = 0x7B0; // float
    pub const m_flBlendDeltaMultiplier: usize = 0x7B4; // float
    pub const m_isStarted: usize = 0x7B8; // bool
}

pub mod CFuncTrackAuto { // CFuncTrackChange
}

pub mod CFuncTrackChange { // CFuncPlatRot
    pub const m_trackTop: usize = 0xAC0; // CPathTrack*
    pub const m_trackBottom: usize = 0xAC8; // CPathTrack*
    pub const m_train: usize = 0xAD0; // CFuncTrackTrain*
    pub const m_trackTopName: usize = 0xAD8; // CUtlSymbolLarge
    pub const m_trackBottomName: usize = 0xAE0; // CUtlSymbolLarge
    pub const m_trainName: usize = 0xAE8; // CUtlSymbolLarge
    pub const m_code: usize = 0xAF0; // TRAIN_CODE
    pub const m_targetState: usize = 0xAF4; // int32_t
    pub const m_use: usize = 0xAF8; // int32_t
}

pub mod CFuncTrackTrain { // CBaseModelEntity
    pub const m_ppath: usize = 0x9F8; // CHandle<CPathTrack>
    pub const m_length: usize = 0x9FC; // float
    pub const m_vPosPrev: usize = 0xA00; // Vector
    pub const m_angPrev: usize = 0xA0C; // QAngle
    pub const m_controlMins: usize = 0xA18; // Vector
    pub const m_controlMaxs: usize = 0xA24; // Vector
    pub const m_lastBlockPos: usize = 0xA30; // Vector
    pub const m_lastBlockTick: usize = 0xA3C; // int32_t
    pub const m_flVolume: usize = 0xA40; // float
    pub const m_flBank: usize = 0xA44; // float
    pub const m_oldSpeed: usize = 0xA48; // float
    pub const m_flBlockDamage: usize = 0xA4C; // float
    pub const m_height: usize = 0xA50; // float
    pub const m_maxSpeed: usize = 0xA54; // float
    pub const m_dir: usize = 0xA58; // float
    pub const m_iszSoundMove: usize = 0xA60; // CUtlSymbolLarge
    pub const m_iszSoundMovePing: usize = 0xA68; // CUtlSymbolLarge
    pub const m_iszSoundStart: usize = 0xA70; // CUtlSymbolLarge
    pub const m_iszSoundStop: usize = 0xA78; // CUtlSymbolLarge
    pub const m_strPathTarget: usize = 0xA80; // CUtlSymbolLarge
    pub const m_flMoveSoundMinDuration: usize = 0xA88; // float
    pub const m_flMoveSoundMaxDuration: usize = 0xA8C; // float
    pub const m_flNextMoveSoundTime: usize = 0xA90; // GameTime_t
    pub const m_flMoveSoundMinPitch: usize = 0xA94; // float
    pub const m_flMoveSoundMaxPitch: usize = 0xA98; // float
    pub const m_eOrientationType: usize = 0xA9C; // TrainOrientationType_t
    pub const m_eVelocityType: usize = 0xAA0; // TrainVelocityType_t
    pub const m_OnStart: usize = 0xAB0; // CEntityIOOutput
    pub const m_OnNext: usize = 0xAD8; // CEntityIOOutput
    pub const m_OnArrivedAtDestinationNode: usize = 0xB00; // CEntityIOOutput
    pub const m_bManualSpeedChanges: usize = 0xB28; // bool
    pub const m_flDesiredSpeed: usize = 0xB2C; // float
    pub const m_flSpeedChangeTime: usize = 0xB30; // GameTime_t
    pub const m_flAccelSpeed: usize = 0xB34; // float
    pub const m_flDecelSpeed: usize = 0xB38; // float
    pub const m_bAccelToSpeed: usize = 0xB3C; // bool
    pub const m_flTimeScale: usize = 0xB40; // float
    pub const m_flNextMPSoundTime: usize = 0xB44; // GameTime_t
}

pub mod CFuncTrain { // CBasePlatTrain
    pub const m_hCurrentTarget: usize = 0xA9C; // CHandle<CBaseEntity>
    pub const m_activated: usize = 0xAA0; // bool
    pub const m_hEnemy: usize = 0xAA4; // CHandle<CBaseEntity>
    pub const m_flBlockDamage: usize = 0xAA8; // float
    pub const m_flNextBlockTime: usize = 0xAAC; // GameTime_t
    pub const m_iszLastTarget: usize = 0xAB0; // CUtlSymbolLarge
}

pub mod CFuncTrainControls { // CBaseModelEntity
}

pub mod CFuncVPhysicsClip { // CBaseModelEntity
    pub const m_bDisabled: usize = 0x9F8; // bool
}

pub mod CFuncVehicleClip { // CBaseModelEntity
}

pub mod CFuncWall { // CBaseModelEntity
    pub const m_nState: usize = 0x9F8; // int32_t
}

pub mod CFuncWallToggle { // CFuncWall
}

pub mod CFuncWater { // CBaseModelEntity
    pub const m_BuoyancyHelper: usize = 0x9F8; // CBuoyancyHelper
}

pub mod CGameChoreoServices { // IChoreoServices
    pub const m_hOwner: usize = 0x8; // CHandle<CBaseAnimGraph>
    pub const m_hScriptedSequence: usize = 0xC; // CHandle<CScriptedSequence>
    pub const m_scriptState: usize = 0x10; // IChoreoServices::ScriptState_t
    pub const m_choreoState: usize = 0x14; // IChoreoServices::ChoreoState_t
    pub const m_flTimeStartedState: usize = 0x18; // GameTime_t
}

pub mod CGameEnd { // CRulePointEntity
}

pub mod CGameGibManager { // CBaseEntity
    pub const m_bAllowNewGibs: usize = 0x7C8; // bool
    pub const m_iCurrentMaxPieces: usize = 0x7CC; // int32_t
    pub const m_iMaxPieces: usize = 0x7D0; // int32_t
    pub const m_iLastFrame: usize = 0x7D4; // int32_t
}

pub mod CGameMoney { // CRulePointEntity
    pub const m_OnMoneySpent: usize = 0xA08; // CEntityIOOutput
    pub const m_OnMoneySpentFail: usize = 0xA30; // CEntityIOOutput
    pub const m_nMoney: usize = 0xA58; // int32_t
    pub const m_strAwardText: usize = 0xA60; // CUtlString
}

pub mod CGamePlayerEquip { // CRulePointEntity
}

pub mod CGamePlayerZone { // CRuleBrushEntity
    pub const m_OnPlayerInZone: usize = 0xA00; // CEntityIOOutput
    pub const m_OnPlayerOutZone: usize = 0xA28; // CEntityIOOutput
    pub const m_PlayersInCount: usize = 0xA50; // CEntityOutputTemplate<int32_t>
    pub const m_PlayersOutCount: usize = 0xA78; // CEntityOutputTemplate<int32_t>
}

pub mod CGameRules {
    pub const m_szQuestName: usize = 0x8; // char[128]
    pub const m_nQuestPhase: usize = 0x88; // int32_t
}

pub mod CGameRulesProxy { // CBaseEntity
}

pub mod CGameSceneNode {
    pub const m_nodeToWorld: usize = 0x10; // CTransform
    pub const m_pOwner: usize = 0x30; // CEntityInstance*
    pub const m_pParent: usize = 0x38; // CGameSceneNode*
    pub const m_pChild: usize = 0x40; // CGameSceneNode*
    pub const m_pNextSibling: usize = 0x48; // CGameSceneNode*
    pub const m_hParent: usize = 0x70; // CGameSceneNodeHandle
    pub const m_vecOrigin: usize = 0x80; // CNetworkOriginCellCoordQuantizedVector
    pub const m_angRotation: usize = 0xB8; // QAngle
    pub const m_flScale: usize = 0xC4; // float
    pub const m_vecAbsOrigin: usize = 0xC8; // Vector
    pub const m_angAbsRotation: usize = 0xD4; // QAngle
    pub const m_flAbsScale: usize = 0xE0; // float
    pub const m_nParentAttachmentOrBone: usize = 0xE4; // int16_t
    pub const m_bDebugAbsOriginChanges: usize = 0xE6; // bool
    pub const m_bDormant: usize = 0xE7; // bool
    pub const m_bForceParentToBeNetworked: usize = 0xE8; // bool
    pub const m_bDirtyHierarchy: usize = 0x0; // bitfield:1
    pub const m_bDirtyBoneMergeInfo: usize = 0x0; // bitfield:1
    pub const m_bNetworkedPositionChanged: usize = 0x0; // bitfield:1
    pub const m_bNetworkedAnglesChanged: usize = 0x0; // bitfield:1
    pub const m_bNetworkedScaleChanged: usize = 0x0; // bitfield:1
    pub const m_bWillBeCallingPostDataUpdate: usize = 0x0; // bitfield:1
    pub const m_bBoneMergeFlex: usize = 0x0; // bitfield:1
    pub const m_nLatchAbsOrigin: usize = 0x0; // bitfield:2
    pub const m_bDirtyBoneMergeBoneToRoot: usize = 0x0; // bitfield:1
    pub const m_nHierarchicalDepth: usize = 0xEB; // uint8_t
    pub const m_nHierarchyType: usize = 0xEC; // uint8_t
    pub const m_nDoNotSetAnimTimeInInvalidatePhysicsCount: usize = 0xED; // uint8_t
    pub const m_name: usize = 0xF0; // CUtlStringToken
    pub const m_hierarchyAttachName: usize = 0x140; // CUtlStringToken
    pub const m_flZOffset: usize = 0x144; // float
    pub const m_vRenderOrigin: usize = 0x148; // Vector
}

pub mod CGameSceneNodeHandle {
    pub const m_hOwner: usize = 0x8; // CEntityHandle
    pub const m_name: usize = 0xC; // CUtlStringToken
}

pub mod CGameScriptedMoveData {
    pub const m_vAccumulatedRootMotion: usize = 0x0; // Vector
    pub const m_vDest: usize = 0xC; // Vector
    pub const m_vSrc: usize = 0x18; // Vector
    pub const m_angSrc: usize = 0x24; // QAngle
    pub const m_angDst: usize = 0x30; // QAngle
    pub const m_angCurrent: usize = 0x3C; // QAngle
    pub const m_flAngRate: usize = 0x48; // float
    pub const m_flDuration: usize = 0x4C; // float
    pub const m_flStartTime: usize = 0x50; // GameTime_t
    pub const m_bActive: usize = 0x54; // bool
    pub const m_bTeleportOnEnd: usize = 0x55; // bool
    pub const m_bIgnoreRotation: usize = 0x56; // bool
    pub const m_nType: usize = 0x58; // ScriptedMoveType_t
    pub const m_bSuccess: usize = 0x5C; // bool
    pub const m_nForcedCrouchState: usize = 0x60; // ForcedCrouchState_t
    pub const m_bIgnoreCollisions: usize = 0x64; // bool
}

pub mod CGameText { // CRulePointEntity
    pub const m_iszMessage: usize = 0xA08; // CUtlSymbolLarge
    pub const m_textParms: usize = 0xA10; // hudtextparms_t
}

pub mod CGenericConstraint { // CPhysConstraint
    pub const m_nLinearMotionX: usize = 0x808; // JointMotion_t
    pub const m_nLinearMotionY: usize = 0x80C; // JointMotion_t
    pub const m_nLinearMotionZ: usize = 0x810; // JointMotion_t
    pub const m_flLinearFrequencyX: usize = 0x814; // float
    pub const m_flLinearFrequencyY: usize = 0x818; // float
    pub const m_flLinearFrequencyZ: usize = 0x81C; // float
    pub const m_flLinearDampingRatioX: usize = 0x820; // float
    pub const m_flLinearDampingRatioY: usize = 0x824; // float
    pub const m_flLinearDampingRatioZ: usize = 0x828; // float
    pub const m_flMaxLinearImpulseX: usize = 0x82C; // float
    pub const m_flMaxLinearImpulseY: usize = 0x830; // float
    pub const m_flMaxLinearImpulseZ: usize = 0x834; // float
    pub const m_flBreakAfterTimeX: usize = 0x838; // float
    pub const m_flBreakAfterTimeY: usize = 0x83C; // float
    pub const m_flBreakAfterTimeZ: usize = 0x840; // float
    pub const m_flBreakAfterTimeStartTimeX: usize = 0x844; // GameTime_t
    pub const m_flBreakAfterTimeStartTimeY: usize = 0x848; // GameTime_t
    pub const m_flBreakAfterTimeStartTimeZ: usize = 0x84C; // GameTime_t
    pub const m_flBreakAfterTimeThresholdX: usize = 0x850; // float
    pub const m_flBreakAfterTimeThresholdY: usize = 0x854; // float
    pub const m_flBreakAfterTimeThresholdZ: usize = 0x858; // float
    pub const m_flNotifyForceX: usize = 0x85C; // float
    pub const m_flNotifyForceY: usize = 0x860; // float
    pub const m_flNotifyForceZ: usize = 0x864; // float
    pub const m_flNotifyForceMinTimeX: usize = 0x868; // float
    pub const m_flNotifyForceMinTimeY: usize = 0x86C; // float
    pub const m_flNotifyForceMinTimeZ: usize = 0x870; // float
    pub const m_flNotifyForceLastTimeX: usize = 0x874; // GameTime_t
    pub const m_flNotifyForceLastTimeY: usize = 0x878; // GameTime_t
    pub const m_flNotifyForceLastTimeZ: usize = 0x87C; // GameTime_t
    pub const m_bAxisNotifiedX: usize = 0x880; // bool
    pub const m_bAxisNotifiedY: usize = 0x881; // bool
    pub const m_bAxisNotifiedZ: usize = 0x882; // bool
    pub const m_nAngularMotionX: usize = 0x884; // JointMotion_t
    pub const m_nAngularMotionY: usize = 0x888; // JointMotion_t
    pub const m_nAngularMotionZ: usize = 0x88C; // JointMotion_t
    pub const m_flAngularFrequencyX: usize = 0x890; // float
    pub const m_flAngularFrequencyY: usize = 0x894; // float
    pub const m_flAngularFrequencyZ: usize = 0x898; // float
    pub const m_flAngularDampingRatioX: usize = 0x89C; // float
    pub const m_flAngularDampingRatioY: usize = 0x8A0; // float
    pub const m_flAngularDampingRatioZ: usize = 0x8A4; // float
    pub const m_flMaxAngularImpulseX: usize = 0x8A8; // float
    pub const m_flMaxAngularImpulseY: usize = 0x8AC; // float
    pub const m_flMaxAngularImpulseZ: usize = 0x8B0; // float
    pub const m_NotifyForceReachedX: usize = 0x8B8; // CEntityIOOutput
    pub const m_NotifyForceReachedY: usize = 0x8E0; // CEntityIOOutput
    pub const m_NotifyForceReachedZ: usize = 0x908; // CEntityIOOutput
}

pub mod CGlowProperty {
    pub const m_fGlowColor: usize = 0x8; // Vector
    pub const m_iGlowType: usize = 0x30; // int32_t
    pub const m_iGlowTeam: usize = 0x34; // int32_t
    pub const m_nGlowRange: usize = 0x38; // int32_t
    pub const m_nGlowRangeMin: usize = 0x3C; // int32_t
    pub const m_glowColorOverride: usize = 0x40; // Color
    pub const m_bFlashing: usize = 0x44; // bool
    pub const m_flGlowTime: usize = 0x48; // float
    pub const m_flGlowStartTime: usize = 0x4C; // float
    pub const m_bEligibleForScreenHighlight: usize = 0x50; // bool
    pub const m_bGlowing: usize = 0x51; // bool
}

pub mod CGradientFog { // CBaseEntity
    pub const m_hGradientFogTexture: usize = 0x7A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_flFogStartDistance: usize = 0x7B0; // float
    pub const m_flFogEndDistance: usize = 0x7B4; // float
    pub const m_bHeightFogEnabled: usize = 0x7B8; // bool
    pub const m_flFogStartHeight: usize = 0x7BC; // float
    pub const m_flFogEndHeight: usize = 0x7C0; // float
    pub const m_flFarZ: usize = 0x7C4; // float
    pub const m_flFogMaxOpacity: usize = 0x7C8; // float
    pub const m_flFogFalloffExponent: usize = 0x7CC; // float
    pub const m_flFogVerticalExponent: usize = 0x7D0; // float
    pub const m_fogColor: usize = 0x7D4; // Color
    pub const m_flFogStrength: usize = 0x7D8; // float
    pub const m_flFadeTime: usize = 0x7DC; // float
    pub const m_bStartDisabled: usize = 0x7E0; // bool
    pub const m_bIsEnabled: usize = 0x7E1; // bool
    pub const m_bGradientFogNeedsTextures: usize = 0x7E2; // bool
}

pub mod CGunTarget { // CBaseToggle
    pub const m_on: usize = 0xA78; // bool
    pub const m_hTargetEnt: usize = 0xA7C; // CHandle<CBaseEntity>
    pub const m_OnDeath: usize = 0xA80; // CEntityIOOutput
}

pub mod CHEGrenade { // CBaseCSGrenade
}

pub mod CHEGrenadeProjectile { // CBaseCSGrenadeProjectile
}

pub mod CHandleDummy { // CBaseEntity
}

pub mod CHandleTest { // CBaseEntity
    pub const m_Handle: usize = 0x7A8; // CHandle<CBaseEntity>
    pub const m_bSendHandle: usize = 0x7AC; // bool
}

pub mod CHintMessage {
    pub const m_hintString: usize = 0x0; // char*
    pub const m_args: usize = 0x8; // CUtlVector<char*>
    pub const m_duration: usize = 0x20; // float
}

pub mod CHintMessageQueue {
    pub const m_tmMessageEnd: usize = 0x0; // float
    pub const m_messages: usize = 0x8; // CUtlVector<CHintMessage*>
    pub const m_pPlayerController: usize = 0x20; // CBasePlayerController*
}

pub mod CHitboxComponent { // CEntityComponent
    pub const m_bvDisabledHitGroups: usize = 0x24; // uint32_t[1]
}

pub mod CHostage { // CHostageExpresserShim
    pub const m_OnHostageBeginGrab: usize = 0xD30; // CEntityIOOutput
    pub const m_OnFirstPickedUp: usize = 0xD58; // CEntityIOOutput
    pub const m_OnDroppedNotRescued: usize = 0xD80; // CEntityIOOutput
    pub const m_OnRescued: usize = 0xDA8; // CEntityIOOutput
    pub const m_entitySpottedState: usize = 0xDD0; // EntitySpottedState_t
    pub const m_nSpotRules: usize = 0xDE8; // int32_t
    pub const m_uiHostageSpawnExclusionGroupMask: usize = 0xDEC; // uint32_t
    pub const m_nHostageSpawnRandomFactor: usize = 0xDF0; // uint32_t
    pub const m_bRemove: usize = 0xDF4; // bool
    pub const m_vel: usize = 0xDF8; // Vector
    pub const m_isRescued: usize = 0xE04; // bool
    pub const m_jumpedThisFrame: usize = 0xE05; // bool
    pub const m_nHostageState: usize = 0xE08; // int32_t
    pub const m_leader: usize = 0xE0C; // CHandle<CBaseEntity>
    pub const m_lastLeader: usize = 0xE10; // CHandle<CCSPlayerPawnBase>
    pub const m_reuseTimer: usize = 0xE18; // CountdownTimer
    pub const m_hasBeenUsed: usize = 0xE30; // bool
    pub const m_accel: usize = 0xE34; // Vector
    pub const m_isRunning: usize = 0xE40; // bool
    pub const m_isCrouching: usize = 0xE41; // bool
    pub const m_jumpTimer: usize = 0xE48; // CountdownTimer
    pub const m_isWaitingForLeader: usize = 0xE60; // bool
    pub const m_repathTimer: usize = 0x2E70; // CountdownTimer
    pub const m_inhibitDoorTimer: usize = 0x2E88; // CountdownTimer
    pub const m_inhibitObstacleAvoidanceTimer: usize = 0x2F18; // CountdownTimer
    pub const m_wiggleTimer: usize = 0x2F38; // CountdownTimer
    pub const m_isAdjusted: usize = 0x2F54; // bool
    pub const m_bHandsHaveBeenCut: usize = 0x2F55; // bool
    pub const m_hHostageGrabber: usize = 0x2F58; // CHandle<CCSPlayerPawn>
    pub const m_fLastGrabTime: usize = 0x2F5C; // GameTime_t
    pub const m_vecPositionWhenStartedDroppingToGround: usize = 0x2F60; // Vector
    pub const m_vecGrabbedPos: usize = 0x2F6C; // Vector
    pub const m_flRescueStartTime: usize = 0x2F78; // GameTime_t
    pub const m_flGrabSuccessTime: usize = 0x2F7C; // GameTime_t
    pub const m_flDropStartTime: usize = 0x2F80; // GameTime_t
    pub const m_nApproachRewardPayouts: usize = 0x2F84; // int32_t
    pub const m_nPickupEventCount: usize = 0x2F88; // int32_t
    pub const m_vecSpawnGroundPos: usize = 0x2F8C; // Vector
    pub const m_vecHostageResetPosition: usize = 0x2FAC; // Vector
}

pub mod CHostageAlias_info_hostage_spawn { // CHostage
}

pub mod CHostageCarriableProp { // CBaseAnimGraph
}

pub mod CHostageExpresserShim { // CBaseCombatCharacter
    pub const m_pExpresser: usize = 0xD18; // CAI_Expresser*
}

pub mod CHostageRescueZone { // CHostageRescueZoneShim
}

pub mod CHostageRescueZoneShim { // CBaseTrigger
}

pub mod CInButtonState {
    pub const m_pButtonStates: usize = 0x8; // uint64_t[3]
}

pub mod CIncendiaryGrenade { // CMolotovGrenade
}

pub mod CInferno { // CBaseModelEntity
    pub const m_firePositions: usize = 0xA04; // Vector[64]
    pub const m_fireParentPositions: usize = 0xD04; // Vector[64]
    pub const m_bFireIsBurning: usize = 0x1004; // bool[64]
    pub const m_BurnNormal: usize = 0x1044; // Vector[64]
    pub const m_fireCount: usize = 0x1344; // int32_t
    pub const m_nInfernoType: usize = 0x1348; // int32_t
    pub const m_nFireEffectTickBegin: usize = 0x134C; // int32_t
    pub const m_nFireLifetime: usize = 0x1350; // float
    pub const m_bInPostEffectTime: usize = 0x1354; // bool
    pub const m_nFiresExtinguishCount: usize = 0x1358; // int32_t
    pub const m_bWasCreatedInSmoke: usize = 0x135C; // bool
    pub const m_extent: usize = 0x1560; // Extent
    pub const m_damageTimer: usize = 0x1578; // CountdownTimer
    pub const m_damageRampTimer: usize = 0x1590; // CountdownTimer
    pub const m_splashVelocity: usize = 0x15A8; // Vector
    pub const m_InitialSplashVelocity: usize = 0x15B4; // Vector
    pub const m_startPos: usize = 0x15C0; // Vector
    pub const m_vecOriginalSpawnLocation: usize = 0x15CC; // Vector
    pub const m_activeTimer: usize = 0x15D8; // IntervalTimer
    pub const m_fireSpawnOffset: usize = 0x15E8; // int32_t
    pub const m_nMaxFlames: usize = 0x15EC; // int32_t
    pub const m_nSpreadCount: usize = 0x15F0; // int32_t
    pub const m_BookkeepingTimer: usize = 0x15F8; // CountdownTimer
    pub const m_NextSpreadTimer: usize = 0x1610; // CountdownTimer
    pub const m_nSourceItemDefIndex: usize = 0x1628; // uint16_t
}

pub mod CInfoData { // CServerOnlyEntity
}

pub mod CInfoDeathmatchSpawn { // SpawnPoint
}

pub mod CInfoDynamicShadowHint { // CPointEntity
    pub const m_bDisabled: usize = 0x7A8; // bool
    pub const m_flRange: usize = 0x7AC; // float
    pub const m_nImportance: usize = 0x7B0; // int32_t
    pub const m_nLightChoice: usize = 0x7B4; // int32_t
    pub const m_hLight: usize = 0x7B8; // CHandle<CBaseEntity>
}

pub mod CInfoDynamicShadowHintBox { // CInfoDynamicShadowHint
    pub const m_vBoxMins: usize = 0x7BC; // Vector
    pub const m_vBoxMaxs: usize = 0x7C8; // Vector
}

pub mod CInfoEnemyTerroristSpawn { // SpawnPointCoopEnemy
}

pub mod CInfoGameEventProxy { // CPointEntity
    pub const m_iszEventName: usize = 0x7A8; // CUtlSymbolLarge
    pub const m_flRange: usize = 0x7B0; // float
}

pub mod CInfoInstructorHintBombTargetA { // CPointEntity
}

pub mod CInfoInstructorHintBombTargetB { // CPointEntity
}

pub mod CInfoInstructorHintHostageRescueZone { // CPointEntity
}

pub mod CInfoInstructorHintTarget { // CPointEntity
}

pub mod CInfoLadderDismount { // CBaseEntity
}

pub mod CInfoLandmark { // CPointEntity
}

pub mod CInfoOffscreenPanoramaTexture { // CPointEntity
    pub const m_bDisabled: usize = 0x7A8; // bool
    pub const m_nResolutionX: usize = 0x7AC; // int32_t
    pub const m_nResolutionY: usize = 0x7B0; // int32_t
    pub const m_szLayoutFileName: usize = 0x7B8; // CUtlSymbolLarge
    pub const m_RenderAttrName: usize = 0x7C0; // CUtlSymbolLarge
    pub const m_TargetEntities: usize = 0x7C8; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    pub const m_nTargetChangeCount: usize = 0x7E0; // int32_t
    pub const m_vecCSSClasses: usize = 0x7E8; // CNetworkUtlVectorBase<CUtlSymbolLarge>
    pub const m_szTargetsName: usize = 0x800; // CUtlSymbolLarge
    pub const m_AdditionalTargetEntities: usize = 0x808; // CUtlVector<CHandle<CBaseModelEntity>>
}

pub mod CInfoParticleTarget { // CPointEntity
}

pub mod CInfoPlayerCounterterrorist { // SpawnPoint
}

pub mod CInfoPlayerStart { // CPointEntity
    pub const m_bDisabled: usize = 0x7A8; // bool
}

pub mod CInfoPlayerTerrorist { // SpawnPoint
}

pub mod CInfoSpawnGroupLandmark { // CPointEntity
}

pub mod CInfoSpawnGroupLoadUnload { // CLogicalEntity
    pub const m_OnSpawnGroupLoadStarted: usize = 0x7A8; // CEntityIOOutput
    pub const m_OnSpawnGroupLoadFinished: usize = 0x7D0; // CEntityIOOutput
    pub const m_OnSpawnGroupUnloadStarted: usize = 0x7F8; // CEntityIOOutput
    pub const m_OnSpawnGroupUnloadFinished: usize = 0x820; // CEntityIOOutput
    pub const m_iszSpawnGroupName: usize = 0x848; // CUtlSymbolLarge
    pub const m_iszSpawnGroupFilterName: usize = 0x850; // CUtlSymbolLarge
    pub const m_iszLandmarkName: usize = 0x858; // CUtlSymbolLarge
    pub const m_sFixedSpawnGroupName: usize = 0x860; // CUtlString
    pub const m_flTimeoutInterval: usize = 0x868; // float
    pub const m_bStreamingStarted: usize = 0x86C; // bool
    pub const m_bUnloadingStarted: usize = 0x86D; // bool
}

pub mod CInfoTarget { // CPointEntity
}

pub mod CInfoTargetServerOnly { // CServerOnlyPointEntity
}

pub mod CInfoTeleportDestination { // CPointEntity
}

pub mod CInfoVisibilityBox { // CBaseEntity
    pub const m_nMode: usize = 0x7AC; // int32_t
    pub const m_vBoxSize: usize = 0x7B0; // Vector
    pub const m_bEnabled: usize = 0x7BC; // bool
}

pub mod CInfoWorldLayer { // CBaseEntity
    pub const m_pOutputOnEntitiesSpawned: usize = 0x7A8; // CEntityIOOutput
    pub const m_worldName: usize = 0x7D0; // CUtlSymbolLarge
    pub const m_layerName: usize = 0x7D8; // CUtlSymbolLarge
    pub const m_bWorldLayerVisible: usize = 0x7E0; // bool
    pub const m_bEntitiesSpawned: usize = 0x7E1; // bool
    pub const m_bCreateAsChildSpawnGroup: usize = 0x7E2; // bool
    pub const m_hLayerSpawnGroup: usize = 0x7E4; // uint32_t
}

pub mod CInstancedSceneEntity { // CSceneEntity
    pub const m_hOwner: usize = 0xD00; // CHandle<CBaseEntity>
    pub const m_bHadOwner: usize = 0xD04; // bool
    pub const m_flPostSpeakDelay: usize = 0xD08; // float
    pub const m_flPreDelay: usize = 0xD0C; // float
    pub const m_bIsBackground: usize = 0xD10; // bool
    pub const m_bRemoveOnCompletion: usize = 0xD11; // bool
    pub const m_hTarget: usize = 0xD14; // CHandle<CBaseEntity>
}

pub mod CInstructorEventEntity { // CPointEntity
    pub const m_iszName: usize = 0x7A8; // CUtlSymbolLarge
    pub const m_iszHintTargetEntity: usize = 0x7B0; // CUtlSymbolLarge
    pub const m_hTargetPlayer: usize = 0x7B8; // CHandle<CBasePlayerPawn>
}

pub mod CIronSightController {
    pub const m_bIronSightAvailable: usize = 0x8; // bool
    pub const m_flIronSightAmount: usize = 0xC; // float
    pub const m_flIronSightAmountGained: usize = 0x10; // float
    pub const m_flIronSightAmountBiased: usize = 0x14; // float
}

pub mod CItem { // CBaseAnimGraph
    pub const m_OnPlayerTouch: usize = 0xBF8; // CEntityIOOutput
    pub const m_bActivateWhenAtRest: usize = 0xC20; // bool
    pub const m_OnCacheInteraction: usize = 0xC28; // CEntityIOOutput
    pub const m_OnPlayerPickup: usize = 0xC50; // CEntityIOOutput
    pub const m_OnGlovePulled: usize = 0xC78; // CEntityIOOutput
    pub const m_vOriginalSpawnOrigin: usize = 0xCA0; // Vector
    pub const m_vOriginalSpawnAngles: usize = 0xCAC; // QAngle
    pub const m_bPhysStartAsleep: usize = 0xCB8; // bool
}

pub mod CItemAssaultSuit { // CItem
}

pub mod CItemDefuser { // CItem
    pub const m_entitySpottedState: usize = 0xCC8; // EntitySpottedState_t
    pub const m_nSpotRules: usize = 0xCE0; // int32_t
}

pub mod CItemDefuserAlias_item_defuser { // CItemDefuser
}

pub mod CItemDogtags { // CItem
    pub const m_OwningPlayer: usize = 0xCC8; // CHandle<CCSPlayerPawn>
    pub const m_KillingPlayer: usize = 0xCCC; // CHandle<CCSPlayerPawn>
}

pub mod CItemGeneric { // CItem
    pub const m_bHasTriggerRadius: usize = 0xCD0; // bool
    pub const m_bHasPickupRadius: usize = 0xCD1; // bool
    pub const m_flPickupRadiusSqr: usize = 0xCD4; // float
    pub const m_flTriggerRadiusSqr: usize = 0xCD8; // float
    pub const m_flLastPickupCheck: usize = 0xCDC; // GameTime_t
    pub const m_bPlayerCounterListenerAdded: usize = 0xCE0; // bool
    pub const m_bPlayerInTriggerRadius: usize = 0xCE1; // bool
    pub const m_hSpawnParticleEffect: usize = 0xCE8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    pub const m_pAmbientSoundEffect: usize = 0xCF0; // CUtlSymbolLarge
    pub const m_bAutoStartAmbientSound: usize = 0xCF8; // bool
    pub const m_pSpawnScriptFunction: usize = 0xD00; // CUtlSymbolLarge
    pub const m_hPickupParticleEffect: usize = 0xD08; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    pub const m_pPickupSoundEffect: usize = 0xD10; // CUtlSymbolLarge
    pub const m_pPickupScriptFunction: usize = 0xD18; // CUtlSymbolLarge
    pub const m_hTimeoutParticleEffect: usize = 0xD20; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    pub const m_pTimeoutSoundEffect: usize = 0xD28; // CUtlSymbolLarge
    pub const m_pTimeoutScriptFunction: usize = 0xD30; // CUtlSymbolLarge
    pub const m_pPickupFilterName: usize = 0xD38; // CUtlSymbolLarge
    pub const m_hPickupFilter: usize = 0xD40; // CHandle<CBaseFilter>
    pub const m_OnPickup: usize = 0xD48; // CEntityIOOutput
    pub const m_OnTimeout: usize = 0xD70; // CEntityIOOutput
    pub const m_OnTriggerStartTouch: usize = 0xD98; // CEntityIOOutput
    pub const m_OnTriggerTouch: usize = 0xDC0; // CEntityIOOutput
    pub const m_OnTriggerEndTouch: usize = 0xDE8; // CEntityIOOutput
    pub const m_pAllowPickupScriptFunction: usize = 0xE10; // CUtlSymbolLarge
    pub const m_flPickupRadius: usize = 0xE18; // float
    pub const m_flTriggerRadius: usize = 0xE1C; // float
    pub const m_pTriggerSoundEffect: usize = 0xE20; // CUtlSymbolLarge
    pub const m_bGlowWhenInTrigger: usize = 0xE28; // bool
    pub const m_glowColor: usize = 0xE29; // Color
    pub const m_bUseable: usize = 0xE2D; // bool
    pub const m_hTriggerHelper: usize = 0xE30; // CHandle<CItemGenericTriggerHelper>
}

pub mod CItemGenericTriggerHelper { // CBaseModelEntity
    pub const m_hParentItem: usize = 0x9F8; // CHandle<CItemGeneric>
}

pub mod CItemHeavyAssaultSuit { // CItemAssaultSuit
}

pub mod CItemKevlar { // CItem
}

pub mod CItemSoda { // CBaseAnimGraph
}

pub mod CItem_Healthshot { // CWeaponBaseItem
}

pub mod CKeepUpright { // CPointEntity
    pub const m_worldGoalAxis: usize = 0x7B0; // Vector
    pub const m_localTestAxis: usize = 0x7BC; // Vector
    pub const m_nameAttach: usize = 0x7D0; // CUtlSymbolLarge
    pub const m_attachedObject: usize = 0x7D8; // CHandle<CBaseEntity>
    pub const m_angularLimit: usize = 0x7DC; // float
    pub const m_bActive: usize = 0x7E0; // bool
    pub const m_bDampAllRotation: usize = 0x7E1; // bool
}

pub mod CKnife { // CCSWeaponBase
    pub const m_bFirstAttack: usize = 0x1198; // bool
}

pub mod CLightComponent { // CEntityComponent
    pub const __m_pChainEntity: usize = 0x58; // CNetworkVarChainer
    pub const m_Color: usize = 0x95; // Color
    pub const m_SecondaryColor: usize = 0x99; // Color
    pub const m_flBrightness: usize = 0xA0; // float
    pub const m_flBrightnessScale: usize = 0xA4; // float
    pub const m_flBrightnessMult: usize = 0xA8; // float
    pub const m_flRange: usize = 0xAC; // float
    pub const m_flFalloff: usize = 0xB0; // float
    pub const m_flAttenuation0: usize = 0xB4; // float
    pub const m_flAttenuation1: usize = 0xB8; // float
    pub const m_flAttenuation2: usize = 0xBC; // float
    pub const m_flTheta: usize = 0xC0; // float
    pub const m_flPhi: usize = 0xC4; // float
    pub const m_hLightCookie: usize = 0xC8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_nCascades: usize = 0xD0; // int32_t
    pub const m_nCastShadows: usize = 0xD4; // int32_t
    pub const m_nShadowWidth: usize = 0xD8; // int32_t
    pub const m_nShadowHeight: usize = 0xDC; // int32_t
    pub const m_bRenderDiffuse: usize = 0xE0; // bool
    pub const m_nRenderSpecular: usize = 0xE4; // int32_t
    pub const m_bRenderTransmissive: usize = 0xE8; // bool
    pub const m_flOrthoLightWidth: usize = 0xEC; // float
    pub const m_flOrthoLightHeight: usize = 0xF0; // float
    pub const m_nStyle: usize = 0xF4; // int32_t
    pub const m_Pattern: usize = 0xF8; // CUtlString
    pub const m_nCascadeRenderStaticObjects: usize = 0x100; // int32_t
    pub const m_flShadowCascadeCrossFade: usize = 0x104; // float
    pub const m_flShadowCascadeDistanceFade: usize = 0x108; // float
    pub const m_flShadowCascadeDistance0: usize = 0x10C; // float
    pub const m_flShadowCascadeDistance1: usize = 0x110; // float
    pub const m_flShadowCascadeDistance2: usize = 0x114; // float
    pub const m_flShadowCascadeDistance3: usize = 0x118; // float
    pub const m_nShadowCascadeResolution0: usize = 0x11C; // int32_t
    pub const m_nShadowCascadeResolution1: usize = 0x120; // int32_t
    pub const m_nShadowCascadeResolution2: usize = 0x124; // int32_t
    pub const m_nShadowCascadeResolution3: usize = 0x128; // int32_t
    pub const m_bUsesBakedShadowing: usize = 0x12C; // bool
    pub const m_nShadowPriority: usize = 0x130; // int32_t
    pub const m_nBakedShadowIndex: usize = 0x134; // int32_t
    pub const m_bRenderToCubemaps: usize = 0x138; // bool
    pub const m_nDirectLight: usize = 0x13C; // int32_t
    pub const m_nIndirectLight: usize = 0x140; // int32_t
    pub const m_flFadeMinDist: usize = 0x144; // float
    pub const m_flFadeMaxDist: usize = 0x148; // float
    pub const m_flShadowFadeMinDist: usize = 0x14C; // float
    pub const m_flShadowFadeMaxDist: usize = 0x150; // float
    pub const m_bEnabled: usize = 0x154; // bool
    pub const m_bFlicker: usize = 0x155; // bool
    pub const m_bPrecomputedFieldsValid: usize = 0x156; // bool
    pub const m_vPrecomputedBoundsMins: usize = 0x158; // Vector
    pub const m_vPrecomputedBoundsMaxs: usize = 0x164; // Vector
    pub const m_vPrecomputedOBBOrigin: usize = 0x170; // Vector
    pub const m_vPrecomputedOBBAngles: usize = 0x17C; // QAngle
    pub const m_vPrecomputedOBBExtent: usize = 0x188; // Vector
    pub const m_flPrecomputedMaxRange: usize = 0x194; // float
    pub const m_nFogLightingMode: usize = 0x198; // int32_t
    pub const m_flFogContributionStength: usize = 0x19C; // float
    pub const m_flNearClipPlane: usize = 0x1A0; // float
    pub const m_SkyColor: usize = 0x1A4; // Color
    pub const m_flSkyIntensity: usize = 0x1A8; // float
    pub const m_SkyAmbientBounce: usize = 0x1AC; // Color
    pub const m_bUseSecondaryColor: usize = 0x1B0; // bool
    pub const m_bMixedShadows: usize = 0x1B1; // bool
    pub const m_flLightStyleStartTime: usize = 0x1B4; // GameTime_t
    pub const m_flCapsuleLength: usize = 0x1B8; // float
    pub const m_flMinRoughness: usize = 0x1BC; // float
    pub const m_bPvsModifyEntity: usize = 0x1D0; // bool
}

pub mod CLightDirectionalEntity { // CLightEntity
}

pub mod CLightEntity { // CBaseModelEntity
    pub const m_CLightComponent: usize = 0x9F8; // CLightComponent*
}

pub mod CLightEnvironmentEntity { // CLightDirectionalEntity
}

pub mod CLightGlow { // CBaseModelEntity
    pub const m_nHorizontalSize: usize = 0x9F8; // uint32_t
    pub const m_nVerticalSize: usize = 0x9FC; // uint32_t
    pub const m_nMinDist: usize = 0xA00; // uint32_t
    pub const m_nMaxDist: usize = 0xA04; // uint32_t
    pub const m_nOuterMaxDist: usize = 0xA08; // uint32_t
    pub const m_flGlowProxySize: usize = 0xA0C; // float
    pub const m_flHDRColorScale: usize = 0xA10; // float
}

pub mod CLightOrthoEntity { // CLightEntity
}

pub mod CLightSpotEntity { // CLightEntity
}

pub mod CLogicAchievement { // CLogicalEntity
    pub const m_bDisabled: usize = 0x7A8; // bool
    pub const m_iszAchievementEventID: usize = 0x7B0; // CUtlSymbolLarge
    pub const m_OnFired: usize = 0x7B8; // CEntityIOOutput
}

pub mod CLogicActiveAutosave { // CLogicAutosave
    pub const m_TriggerHitPoints: usize = 0x7B4; // int32_t
    pub const m_flTimeToTrigger: usize = 0x7B8; // float
    pub const m_flStartTime: usize = 0x7BC; // GameTime_t
    pub const m_flDangerousTime: usize = 0x7C0; // float
}

pub mod CLogicAuto { // CBaseEntity
    pub const m_OnMapSpawn: usize = 0x7A8; // CEntityIOOutput
    pub const m_OnDemoMapSpawn: usize = 0x7D0; // CEntityIOOutput
    pub const m_OnNewGame: usize = 0x7F8; // CEntityIOOutput
    pub const m_OnLoadGame: usize = 0x820; // CEntityIOOutput
    pub const m_OnMapTransition: usize = 0x848; // CEntityIOOutput
    pub const m_OnBackgroundMap: usize = 0x870; // CEntityIOOutput
    pub const m_OnMultiNewMap: usize = 0x898; // CEntityIOOutput
    pub const m_OnMultiNewRound: usize = 0x8C0; // CEntityIOOutput
    pub const m_OnVREnabled: usize = 0x8E8; // CEntityIOOutput
    pub const m_OnVRNotEnabled: usize = 0x910; // CEntityIOOutput
    pub const m_globalstate: usize = 0x938; // CUtlSymbolLarge
}

pub mod CLogicAutosave { // CLogicalEntity
    pub const m_bForceNewLevelUnit: usize = 0x7A8; // bool
    pub const m_minHitPoints: usize = 0x7AC; // int32_t
    pub const m_minHitPointsToCommit: usize = 0x7B0; // int32_t
}

pub mod CLogicBranch { // CLogicalEntity
    pub const m_bInValue: usize = 0x7A8; // bool
    pub const m_Listeners: usize = 0x7B0; // CUtlVector<CHandle<CBaseEntity>>
    pub const m_OnTrue: usize = 0x7C8; // CEntityIOOutput
    pub const m_OnFalse: usize = 0x7F0; // CEntityIOOutput
}

pub mod CLogicBranchList { // CLogicalEntity
    pub const m_nLogicBranchNames: usize = 0x7A8; // CUtlSymbolLarge[16]
    pub const m_LogicBranchList: usize = 0x828; // CUtlVector<CHandle<CBaseEntity>>
    pub const m_eLastState: usize = 0x840; // CLogicBranchList::LogicBranchListenerLastState_t
    pub const m_OnAllTrue: usize = 0x848; // CEntityIOOutput
    pub const m_OnAllFalse: usize = 0x870; // CEntityIOOutput
    pub const m_OnMixed: usize = 0x898; // CEntityIOOutput
}

pub mod CLogicCase { // CLogicalEntity
    pub const m_nCase: usize = 0x7A8; // CUtlSymbolLarge[32]
    pub const m_nShuffleCases: usize = 0x8A8; // int32_t
    pub const m_nLastShuffleCase: usize = 0x8AC; // int32_t
    pub const m_uchShuffleCaseMap: usize = 0x8B0; // uint8_t[32]
    pub const m_OnCase: usize = 0x8D0; // CEntityIOOutput[32]
    pub const m_OnDefault: usize = 0xDD0; // CEntityOutputTemplate<CVariantBase<CVariantDefaultAllocator>>
}

pub mod CLogicCollisionPair { // CLogicalEntity
    pub const m_nameAttach1: usize = 0x7A8; // CUtlSymbolLarge
    pub const m_nameAttach2: usize = 0x7B0; // CUtlSymbolLarge
    pub const m_disabled: usize = 0x7B8; // bool
    pub const m_succeeded: usize = 0x7B9; // bool
}

pub mod CLogicCompare { // CLogicalEntity
    pub const m_flInValue: usize = 0x7A8; // float
    pub const m_flCompareValue: usize = 0x7AC; // float
    pub const m_OnLessThan: usize = 0x7B0; // CEntityOutputTemplate<float>
    pub const m_OnEqualTo: usize = 0x7D8; // CEntityOutputTemplate<float>
    pub const m_OnNotEqualTo: usize = 0x800; // CEntityOutputTemplate<float>
    pub const m_OnGreaterThan: usize = 0x828; // CEntityOutputTemplate<float>
}

pub mod CLogicDistanceAutosave { // CLogicalEntity
    pub const m_iszTargetEntity: usize = 0x7A8; // CUtlSymbolLarge
    pub const m_flDistanceToPlayer: usize = 0x7B0; // float
    pub const m_bForceNewLevelUnit: usize = 0x7B4; // bool
    pub const m_bCheckCough: usize = 0x7B5; // bool
    pub const m_bThinkDangerous: usize = 0x7B6; // bool
    pub const m_flDangerousTime: usize = 0x7B8; // float
}

pub mod CLogicDistanceCheck { // CLogicalEntity
    pub const m_iszEntityA: usize = 0x7A8; // CUtlSymbolLarge
    pub const m_iszEntityB: usize = 0x7B0; // CUtlSymbolLarge
    pub const m_flZone1Distance: usize = 0x7B8; // float
    pub const m_flZone2Distance: usize = 0x7BC; // float
    pub const m_InZone1: usize = 0x7C0; // CEntityIOOutput
    pub const m_InZone2: usize = 0x7E8; // CEntityIOOutput
    pub const m_InZone3: usize = 0x810; // CEntityIOOutput
}

pub mod CLogicEventListener { // CLogicalEntity
    pub const m_strEventName: usize = 0x7B8; // CUtlString
    pub const m_bIsEnabled: usize = 0x7C0; // bool
    pub const m_nTeam: usize = 0x7C4; // int32_t
    pub const m_OnEventFired: usize = 0x7C8; // CEntityIOOutput
}

pub mod CLogicGameEvent { // CLogicalEntity
    pub const m_iszEventName: usize = 0x7A8; // CUtlSymbolLarge
}

pub mod CLogicGameEventListener { // CLogicalEntity
    pub const m_OnEventFired: usize = 0x7B8; // CEntityIOOutput
    pub const m_iszGameEventName: usize = 0x7E0; // CUtlSymbolLarge
    pub const m_iszGameEventItem: usize = 0x7E8; // CUtlSymbolLarge
    pub const m_bEnabled: usize = 0x7F0; // bool
    pub const m_bStartDisabled: usize = 0x7F1; // bool
}

pub mod CLogicLineToEntity { // CLogicalEntity
    pub const m_Line: usize = 0x7A8; // CEntityOutputTemplate<Vector>
    pub const m_SourceName: usize = 0x7D0; // CUtlSymbolLarge
    pub const m_StartEntity: usize = 0x7D8; // CHandle<CBaseEntity>
    pub const m_EndEntity: usize = 0x7DC; // CHandle<CBaseEntity>
}

pub mod CLogicMeasureMovement { // CLogicalEntity
    pub const m_strMeasureTarget: usize = 0x7A8; // CUtlSymbolLarge
    pub const m_strMeasureReference: usize = 0x7B0; // CUtlSymbolLarge
    pub const m_strTargetReference: usize = 0x7B8; // CUtlSymbolLarge
    pub const m_hMeasureTarget: usize = 0x7C0; // CHandle<CBaseEntity>
    pub const m_hMeasureReference: usize = 0x7C4; // CHandle<CBaseEntity>
    pub const m_hTarget: usize = 0x7C8; // CHandle<CBaseEntity>
    pub const m_hTargetReference: usize = 0x7CC; // CHandle<CBaseEntity>
    pub const m_flScale: usize = 0x7D0; // float
    pub const m_nMeasureType: usize = 0x7D4; // int32_t
}

pub mod CLogicNPCCounter { // CBaseEntity
    pub const m_OnMinCountAll: usize = 0x7A8; // CEntityIOOutput
    pub const m_OnMaxCountAll: usize = 0x7D0; // CEntityIOOutput
    pub const m_OnFactorAll: usize = 0x7F8; // CEntityOutputTemplate<float>
    pub const m_OnMinPlayerDistAll: usize = 0x820; // CEntityOutputTemplate<float>
    pub const m_OnMinCount_1: usize = 0x848; // CEntityIOOutput
    pub const m_OnMaxCount_1: usize = 0x870; // CEntityIOOutput
    pub const m_OnFactor_1: usize = 0x898; // CEntityOutputTemplate<float>
    pub const m_OnMinPlayerDist_1: usize = 0x8C0; // CEntityOutputTemplate<float>
    pub const m_OnMinCount_2: usize = 0x8E8; // CEntityIOOutput
    pub const m_OnMaxCount_2: usize = 0x910; // CEntityIOOutput
    pub const m_OnFactor_2: usize = 0x938; // CEntityOutputTemplate<float>
    pub const m_OnMinPlayerDist_2: usize = 0x960; // CEntityOutputTemplate<float>
    pub const m_OnMinCount_3: usize = 0x988; // CEntityIOOutput
    pub const m_OnMaxCount_3: usize = 0x9B0; // CEntityIOOutput
    pub const m_OnFactor_3: usize = 0x9D8; // CEntityOutputTemplate<float>
    pub const m_OnMinPlayerDist_3: usize = 0xA00; // CEntityOutputTemplate<float>
    pub const m_hSource: usize = 0xA28; // CEntityHandle
    pub const m_iszSourceEntityName: usize = 0xA30; // CUtlSymbolLarge
    pub const m_flDistanceMax: usize = 0xA38; // float
    pub const m_bDisabled: usize = 0xA3C; // bool
    pub const m_nMinCountAll: usize = 0xA40; // int32_t
    pub const m_nMaxCountAll: usize = 0xA44; // int32_t
    pub const m_nMinFactorAll: usize = 0xA48; // int32_t
    pub const m_nMaxFactorAll: usize = 0xA4C; // int32_t
    pub const m_iszNPCClassname_1: usize = 0xA58; // CUtlSymbolLarge
    pub const m_nNPCState_1: usize = 0xA60; // int32_t
    pub const m_bInvertState_1: usize = 0xA64; // bool
    pub const m_nMinCount_1: usize = 0xA68; // int32_t
    pub const m_nMaxCount_1: usize = 0xA6C; // int32_t
    pub const m_nMinFactor_1: usize = 0xA70; // int32_t
    pub const m_nMaxFactor_1: usize = 0xA74; // int32_t
    pub const m_flDefaultDist_1: usize = 0xA7C; // float
    pub const m_iszNPCClassname_2: usize = 0xA80; // CUtlSymbolLarge
    pub const m_nNPCState_2: usize = 0xA88; // int32_t
    pub const m_bInvertState_2: usize = 0xA8C; // bool
    pub const m_nMinCount_2: usize = 0xA90; // int32_t
    pub const m_nMaxCount_2: usize = 0xA94; // int32_t
    pub const m_nMinFactor_2: usize = 0xA98; // int32_t
    pub const m_nMaxFactor_2: usize = 0xA9C; // int32_t
    pub const m_flDefaultDist_2: usize = 0xAA4; // float
    pub const m_iszNPCClassname_3: usize = 0xAA8; // CUtlSymbolLarge
    pub const m_nNPCState_3: usize = 0xAB0; // int32_t
    pub const m_bInvertState_3: usize = 0xAB4; // bool
    pub const m_nMinCount_3: usize = 0xAB8; // int32_t
    pub const m_nMaxCount_3: usize = 0xABC; // int32_t
    pub const m_nMinFactor_3: usize = 0xAC0; // int32_t
    pub const m_nMaxFactor_3: usize = 0xAC4; // int32_t
    pub const m_flDefaultDist_3: usize = 0xACC; // float
}

pub mod CLogicNPCCounterAABB { // CLogicNPCCounter
    pub const m_vDistanceOuterMins: usize = 0xAE8; // Vector
    pub const m_vDistanceOuterMaxs: usize = 0xAF4; // Vector
    pub const m_vOuterMins: usize = 0xB00; // Vector
    pub const m_vOuterMaxs: usize = 0xB0C; // Vector
}

pub mod CLogicNPCCounterOBB { // CLogicNPCCounterAABB
}

pub mod CLogicNavigation { // CLogicalEntity
    pub const m_isOn: usize = 0x7B0; // bool
    pub const m_navProperty: usize = 0x7B4; // navproperties_t
}

pub mod CLogicPlayerProxy { // CLogicalEntity
    pub const m_hPlayer: usize = 0x7A8; // CHandle<CBaseEntity>
    pub const m_PlayerHasAmmo: usize = 0x7B0; // CEntityIOOutput
    pub const m_PlayerHasNoAmmo: usize = 0x7D8; // CEntityIOOutput
    pub const m_PlayerDied: usize = 0x800; // CEntityIOOutput
    pub const m_RequestedPlayerHealth: usize = 0x828; // CEntityOutputTemplate<int32_t>
}

pub mod CLogicProximity { // CPointEntity
}

pub mod CLogicRelay { // CLogicalEntity
    pub const m_OnTrigger: usize = 0x7A8; // CEntityIOOutput
    pub const m_OnSpawn: usize = 0x7D0; // CEntityIOOutput
    pub const m_bDisabled: usize = 0x7F8; // bool
    pub const m_bWaitForRefire: usize = 0x7F9; // bool
    pub const m_bTriggerOnce: usize = 0x7FA; // bool
    pub const m_bFastRetrigger: usize = 0x7FB; // bool
    pub const m_bPassthoughCaller: usize = 0x7FC; // bool
}

pub mod CLogicScript { // CPointEntity
}

pub mod CLogicalEntity { // CServerOnlyEntity
}

pub mod CMapInfo { // CPointEntity
    pub const m_iBuyingStatus: usize = 0x7A8; // int32_t
    pub const m_flBombRadius: usize = 0x7AC; // float
    pub const m_iPetPopulation: usize = 0x7B0; // int32_t
    pub const m_bUseNormalSpawnsForDM: usize = 0x7B4; // bool
    pub const m_bDisableAutoGeneratedDMSpawns: usize = 0x7B5; // bool
    pub const m_flBotMaxVisionDistance: usize = 0x7B8; // float
    pub const m_iHostageCount: usize = 0x7BC; // int32_t
    pub const m_bFadePlayerVisibilityFarZ: usize = 0x7C0; // bool
}

pub mod CMapVetoPickController { // CBaseEntity
    pub const m_bPlayedIntroVcd: usize = 0x7A8; // bool
    pub const m_bNeedToPlayFiveSecondsRemaining: usize = 0x7A9; // bool
    pub const m_dblPreMatchDraftSequenceTime: usize = 0x7C8; // double
    pub const m_bPreMatchDraftStateChanged: usize = 0x7D0; // bool
    pub const m_nDraftType: usize = 0x7D4; // int32_t
    pub const m_nTeamWinningCoinToss: usize = 0x7D8; // int32_t
    pub const m_nTeamWithFirstChoice: usize = 0x7DC; // int32_t[64]
    pub const m_nVoteMapIdsList: usize = 0x8DC; // int32_t[7]
    pub const m_nAccountIDs: usize = 0x8F8; // int32_t[64]
    pub const m_nMapId0: usize = 0x9F8; // int32_t[64]
    pub const m_nMapId1: usize = 0xAF8; // int32_t[64]
    pub const m_nMapId2: usize = 0xBF8; // int32_t[64]
    pub const m_nMapId3: usize = 0xCF8; // int32_t[64]
    pub const m_nMapId4: usize = 0xDF8; // int32_t[64]
    pub const m_nMapId5: usize = 0xEF8; // int32_t[64]
    pub const m_nStartingSide0: usize = 0xFF8; // int32_t[64]
    pub const m_nCurrentPhase: usize = 0x10F8; // int32_t
    pub const m_nPhaseStartTick: usize = 0x10FC; // int32_t
    pub const m_nPhaseDurationTicks: usize = 0x1100; // int32_t
    pub const m_OnMapVetoed: usize = 0x1108; // CEntityOutputTemplate<CUtlSymbolLarge>
    pub const m_OnMapPicked: usize = 0x1130; // CEntityOutputTemplate<CUtlSymbolLarge>
    pub const m_OnSidesPicked: usize = 0x1158; // CEntityOutputTemplate<int32_t>
    pub const m_OnNewPhaseStarted: usize = 0x1180; // CEntityOutputTemplate<int32_t>
    pub const m_OnLevelTransition: usize = 0x11A8; // CEntityOutputTemplate<int32_t>
}

pub mod CMarkupVolume { // CBaseModelEntity
    pub const m_bEnabled: usize = 0x9F8; // bool
}

pub mod CMarkupVolumeTagged { // CMarkupVolume
    pub const m_bIsGroup: usize = 0xA30; // bool
    pub const m_bGroupByPrefab: usize = 0xA31; // bool
    pub const m_bGroupByVolume: usize = 0xA32; // bool
    pub const m_bGroupOtherGroups: usize = 0xA33; // bool
    pub const m_bIsInGroup: usize = 0xA34; // bool
}

pub mod CMarkupVolumeTagged_Nav { // CMarkupVolumeTagged
}

pub mod CMarkupVolumeTagged_NavGame { // CMarkupVolumeWithRef
    pub const m_bFloodFillAttribute: usize = 0xA48; // bool
}

pub mod CMarkupVolumeWithRef { // CMarkupVolumeTagged
    pub const m_bUseRef: usize = 0xA35; // bool
    pub const m_vRefPos: usize = 0xA38; // Vector
    pub const m_flRefDot: usize = 0xA44; // float
}

pub mod CMathColorBlend { // CLogicalEntity
    pub const m_flInMin: usize = 0x7A8; // float
    pub const m_flInMax: usize = 0x7AC; // float
    pub const m_OutColor1: usize = 0x7B0; // Color
    pub const m_OutColor2: usize = 0x7B4; // Color
    pub const m_OutValue: usize = 0x7B8; // CEntityOutputTemplate<Color>
}

pub mod CMathCounter { // CLogicalEntity
    pub const m_flMin: usize = 0x7A8; // float
    pub const m_flMax: usize = 0x7AC; // float
    pub const m_bHitMin: usize = 0x7B0; // bool
    pub const m_bHitMax: usize = 0x7B1; // bool
    pub const m_bDisabled: usize = 0x7B2; // bool
    pub const m_OutValue: usize = 0x7B8; // CEntityOutputTemplate<float>
    pub const m_OnGetValue: usize = 0x7E0; // CEntityOutputTemplate<float>
    pub const m_OnHitMin: usize = 0x808; // CEntityIOOutput
    pub const m_OnHitMax: usize = 0x830; // CEntityIOOutput
    pub const m_OnChangedFromMin: usize = 0x858; // CEntityIOOutput
    pub const m_OnChangedFromMax: usize = 0x880; // CEntityIOOutput
}

pub mod CMathRemap { // CLogicalEntity
    pub const m_flInMin: usize = 0x7A8; // float
    pub const m_flInMax: usize = 0x7AC; // float
    pub const m_flOut1: usize = 0x7B0; // float
    pub const m_flOut2: usize = 0x7B4; // float
    pub const m_flOldInValue: usize = 0x7B8; // float
    pub const m_bEnabled: usize = 0x7BC; // bool
    pub const m_OutValue: usize = 0x7C0; // CEntityOutputTemplate<float>
    pub const m_OnRoseAboveMin: usize = 0x7E8; // CEntityIOOutput
    pub const m_OnRoseAboveMax: usize = 0x810; // CEntityIOOutput
    pub const m_OnFellBelowMin: usize = 0x838; // CEntityIOOutput
    pub const m_OnFellBelowMax: usize = 0x860; // CEntityIOOutput
}

pub mod CMelee { // CCSWeaponBase
}

pub mod CMessage { // CPointEntity
    pub const m_iszMessage: usize = 0x7A8; // CUtlSymbolLarge
    pub const m_MessageVolume: usize = 0x7B0; // float
    pub const m_MessageAttenuation: usize = 0x7B4; // int32_t
    pub const m_Radius: usize = 0x7B8; // float
    pub const m_sNoise: usize = 0x7C0; // CUtlSymbolLarge
    pub const m_OnShowMessage: usize = 0x7C8; // CEntityIOOutput
}

pub mod CMessageEntity { // CPointEntity
    pub const m_radius: usize = 0x7A8; // int32_t
    pub const m_messageText: usize = 0x7B0; // CUtlSymbolLarge
    pub const m_drawText: usize = 0x7B8; // bool
    pub const m_bDeveloperOnly: usize = 0x7B9; // bool
    pub const m_bEnabled: usize = 0x7BA; // bool
}

pub mod CModelPointEntity { // CBaseModelEntity
}

pub mod CModelState {
    pub const m_hModel: usize = 0xA0; // CStrongHandle<InfoForResourceTypeCModel>
    pub const m_ModelName: usize = 0xA8; // CUtlSymbolLarge
    pub const m_bClientClothCreationSuppressed: usize = 0xE8; // bool
    pub const m_MeshGroupMask: usize = 0x180; // uint64_t
    pub const m_nIdealMotionType: usize = 0x212; // int8_t
    pub const m_nForceLOD: usize = 0x213; // int8_t
    pub const m_nClothUpdateFlags: usize = 0x214; // int8_t
}

pub mod CMolotovGrenade { // CBaseCSGrenade
}

pub mod CMolotovProjectile { // CBaseCSGrenadeProjectile
    pub const m_bIsIncGrenade: usize = 0xD96; // bool
    pub const m_bDetonated: usize = 0xDA0; // bool
    pub const m_stillTimer: usize = 0xDA8; // IntervalTimer
    pub const m_bHasBouncedOffPlayer: usize = 0xE88; // bool
}

pub mod CMomentaryRotButton { // CRotButton
    pub const m_Position: usize = 0xBC0; // CEntityOutputTemplate<float>
    pub const m_OnUnpressed: usize = 0xBE8; // CEntityIOOutput
    pub const m_OnFullyOpen: usize = 0xC10; // CEntityIOOutput
    pub const m_OnFullyClosed: usize = 0xC38; // CEntityIOOutput
    pub const m_OnReachedPosition: usize = 0xC60; // CEntityIOOutput
    pub const m_lastUsed: usize = 0xC88; // int32_t
    pub const m_start: usize = 0xC8C; // QAngle
    pub const m_end: usize = 0xC98; // QAngle
    pub const m_IdealYaw: usize = 0xCA4; // float
    pub const m_sNoise: usize = 0xCA8; // CUtlSymbolLarge
    pub const m_bUpdateTarget: usize = 0xCB0; // bool
    pub const m_direction: usize = 0xCB4; // int32_t
    pub const m_returnSpeed: usize = 0xCB8; // float
    pub const m_flStartPosition: usize = 0xCBC; // float
}

pub mod CMotorController {
    pub const m_speed: usize = 0x8; // float
    pub const m_maxTorque: usize = 0xC; // float
    pub const m_axis: usize = 0x10; // Vector
    pub const m_inertiaFactor: usize = 0x1C; // float
}

pub mod CMultiLightProxy { // CLogicalEntity
    pub const m_iszLightNameFilter: usize = 0x7A8; // CUtlSymbolLarge
    pub const m_iszLightClassFilter: usize = 0x7B0; // CUtlSymbolLarge
    pub const m_flLightRadiusFilter: usize = 0x7B8; // float
    pub const m_flBrightnessDelta: usize = 0x7BC; // float
    pub const m_bPerformScreenFade: usize = 0x7C0; // bool
    pub const m_flTargetBrightnessMultiplier: usize = 0x7C4; // float
    pub const m_flCurrentBrightnessMultiplier: usize = 0x7C8; // float
    pub const m_vecLights: usize = 0x7D0; // CUtlVector<CHandle<CLightEntity>>
}

pub mod CMultiSource { // CLogicalEntity
    pub const m_rgEntities: usize = 0x7A8; // CHandle<CBaseEntity>[32]
    pub const m_rgTriggered: usize = 0x828; // int32_t[32]
    pub const m_OnTrigger: usize = 0x8A8; // CEntityIOOutput
    pub const m_iTotal: usize = 0x8D0; // int32_t
    pub const m_globalstate: usize = 0x8D8; // CUtlSymbolLarge
}

pub mod CMultiplayRules { // CGameRules
}

pub mod CMultiplayer_Expresser { // CAI_ExpresserWithFollowup
    pub const m_bAllowMultipleScenes: usize = 0x70; // bool
}

pub mod CNavHullPresetVData {
    pub const m_vecNavHulls: usize = 0x0; // CUtlVector<CUtlString>
}

pub mod CNavHullVData {
    pub const m_bAgentEnabled: usize = 0x0; // bool
    pub const m_agentRadius: usize = 0x4; // float
    pub const m_agentHeight: usize = 0x8; // float
    pub const m_agentShortHeightEnabled: usize = 0xC; // bool
    pub const m_agentShortHeight: usize = 0x10; // float
    pub const m_agentMaxClimb: usize = 0x14; // float
    pub const m_agentMaxSlope: usize = 0x18; // int32_t
    pub const m_agentMaxJumpDownDist: usize = 0x1C; // float
    pub const m_agentMaxJumpHorizDistBase: usize = 0x20; // float
    pub const m_agentMaxJumpUpDist: usize = 0x24; // float
    pub const m_agentBorderErosion: usize = 0x28; // int32_t
}

pub mod CNavLinkAnimgraphVar {
    pub const m_strAnimgraphVar: usize = 0x0; // CUtlString
    pub const m_unAlignmentDegrees: usize = 0x8; // uint32_t
}

pub mod CNavLinkAreaEntity { // CPointEntity
    pub const m_flWidth: usize = 0x7A8; // float
    pub const m_vLocatorOffset: usize = 0x7AC; // Vector
    pub const m_qLocatorAnglesOffset: usize = 0x7B8; // QAngle
    pub const m_strMovementForward: usize = 0x7C8; // CUtlSymbolLarge
    pub const m_strMovementReverse: usize = 0x7D0; // CUtlSymbolLarge
    pub const m_nNavLinkIdForward: usize = 0x7D8; // int32_t
    pub const m_nNavLinkIdReverse: usize = 0x7DC; // int32_t
    pub const m_bEnabled: usize = 0x7E0; // bool
    pub const m_strFilterName: usize = 0x7E8; // CUtlSymbolLarge
    pub const m_hFilter: usize = 0x7F0; // CHandle<CBaseFilter>
    pub const m_OnNavLinkStart: usize = 0x7F8; // CEntityIOOutput
    pub const m_OnNavLinkFinish: usize = 0x820; // CEntityIOOutput
    pub const m_bIsTerminus: usize = 0x848; // bool
}

pub mod CNavLinkMovementVData {
    pub const m_bIsInterpolated: usize = 0x0; // bool
    pub const m_unRecommendedDistance: usize = 0x4; // uint32_t
    pub const m_vecAnimgraphVars: usize = 0x8; // CUtlVector<CNavLinkAnimgraphVar>
}

pub mod CNavSpaceInfo { // CPointEntity
    pub const m_bCreateFlightSpace: usize = 0x7A8; // bool
}

pub mod CNavVolume {
}

pub mod CNavVolumeAll { // CNavVolumeVector
}

pub mod CNavVolumeBreadthFirstSearch { // CNavVolumeCalculatedVector
    pub const m_vStartPos: usize = 0x80; // Vector
    pub const m_flSearchDist: usize = 0x8C; // float
}

pub mod CNavVolumeCalculatedVector { // CNavVolume
}

pub mod CNavVolumeMarkupVolume { // CNavVolume
}

pub mod CNavVolumeSphere { // CNavVolume
    pub const m_vCenter: usize = 0x50; // Vector
    pub const m_flRadius: usize = 0x5C; // float
}

pub mod CNavVolumeSphericalShell { // CNavVolumeSphere
    pub const m_flRadiusInner: usize = 0x60; // float
}

pub mod CNavVolumeVector { // CNavVolume
    pub const m_bHasBeenPreFiltered: usize = 0x58; // bool
}

pub mod CNavWalkable { // CPointEntity
}

pub mod CNetworkOriginCellCoordQuantizedVector {
    pub const m_cellX: usize = 0x10; // uint16_t
    pub const m_cellY: usize = 0x12; // uint16_t
    pub const m_cellZ: usize = 0x14; // uint16_t
    pub const m_nOutsideWorld: usize = 0x16; // uint16_t
    pub const m_vecX: usize = 0x18; // CNetworkedQuantizedFloat
    pub const m_vecY: usize = 0x20; // CNetworkedQuantizedFloat
    pub const m_vecZ: usize = 0x28; // CNetworkedQuantizedFloat
}

pub mod CNetworkOriginQuantizedVector {
    pub const m_vecX: usize = 0x10; // CNetworkedQuantizedFloat
    pub const m_vecY: usize = 0x18; // CNetworkedQuantizedFloat
    pub const m_vecZ: usize = 0x20; // CNetworkedQuantizedFloat
}

pub mod CNetworkTransmitComponent {
    pub const m_nTransmitStateOwnedCounter: usize = 0x2C4; // uint8_t
}

pub mod CNetworkVelocityVector {
    pub const m_vecX: usize = 0x10; // CNetworkedQuantizedFloat
    pub const m_vecY: usize = 0x18; // CNetworkedQuantizedFloat
    pub const m_vecZ: usize = 0x20; // CNetworkedQuantizedFloat
}

pub mod CNetworkViewOffsetVector {
    pub const m_vecX: usize = 0x10; // CNetworkedQuantizedFloat
    pub const m_vecY: usize = 0x18; // CNetworkedQuantizedFloat
    pub const m_vecZ: usize = 0x20; // CNetworkedQuantizedFloat
}

pub mod CNetworkedSequenceOperation {
    pub const m_hSequence: usize = 0x8; // HSequence
    pub const m_flPrevCycle: usize = 0xC; // float
    pub const m_flCycle: usize = 0x10; // float
    pub const m_flWeight: usize = 0x14; // CNetworkedQuantizedFloat
    pub const m_bSequenceChangeNetworked: usize = 0x1C; // bool
    pub const m_bDiscontinuity: usize = 0x1D; // bool
    pub const m_flPrevCycleFromDiscontinuity: usize = 0x20; // float
    pub const m_flPrevCycleForAnimEventDetection: usize = 0x24; // float
}

pub mod CNullEntity { // CBaseEntity
}

pub mod COmniLight { // CBarnLight
    pub const m_flInnerAngle: usize = 0xC20; // float
    pub const m_flOuterAngle: usize = 0xC24; // float
    pub const m_bShowLight: usize = 0xC28; // bool
}

pub mod COrnamentProp { // CDynamicProp
    pub const m_initialOwner: usize = 0xE68; // CUtlSymbolLarge
}

pub mod CParticleSystem { // CBaseModelEntity
    pub const m_szSnapshotFileName: usize = 0x9F8; // char[512]
    pub const m_bActive: usize = 0xBF8; // bool
    pub const m_bFrozen: usize = 0xBF9; // bool
    pub const m_flFreezeTransitionDuration: usize = 0xBFC; // float
    pub const m_nStopType: usize = 0xC00; // int32_t
    pub const m_bAnimateDuringGameplayPause: usize = 0xC04; // bool
    pub const m_iEffectIndex: usize = 0xC08; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    pub const m_flStartTime: usize = 0xC10; // GameTime_t
    pub const m_flPreSimTime: usize = 0xC14; // float
    pub const m_vServerControlPoints: usize = 0xC18; // Vector[4]
    pub const m_iServerControlPointAssignments: usize = 0xC48; // uint8_t[4]
    pub const m_hControlPointEnts: usize = 0xC4C; // CHandle<CBaseEntity>[64]
    pub const m_bNoSave: usize = 0xD4C; // bool
    pub const m_bNoFreeze: usize = 0xD4D; // bool
    pub const m_bNoRamp: usize = 0xD4E; // bool
    pub const m_bStartActive: usize = 0xD4F; // bool
    pub const m_iszEffectName: usize = 0xD50; // CUtlSymbolLarge
    pub const m_iszControlPointNames: usize = 0xD58; // CUtlSymbolLarge[64]
    pub const m_nDataCP: usize = 0xF58; // int32_t
    pub const m_vecDataCPValue: usize = 0xF5C; // Vector
    pub const m_nTintCP: usize = 0xF68; // int32_t
    pub const m_clrTint: usize = 0xF6C; // Color
}

pub mod CPathCorner { // CPointEntity
    pub const m_flWait: usize = 0x7A8; // float
    pub const m_flRadius: usize = 0x7AC; // float
    pub const m_OnPass: usize = 0x7B0; // CEntityIOOutput
}

pub mod CPathCornerCrash { // CPathCorner
}

pub mod CPathKeyFrame { // CLogicalEntity
    pub const m_Origin: usize = 0x7A8; // Vector
    pub const m_Angles: usize = 0x7B4; // QAngle
    pub const m_qAngle: usize = 0x7C0; // Quaternion
    pub const m_iNextKey: usize = 0x7D0; // CUtlSymbolLarge
    pub const m_flNextTime: usize = 0x7D8; // float
    pub const m_pNextKey: usize = 0x7E0; // CPathKeyFrame*
    pub const m_pPrevKey: usize = 0x7E8; // CPathKeyFrame*
    pub const m_flSpeed: usize = 0x7F0; // float
}

pub mod CPathParticleRope { // CBaseEntity
    pub const m_bStartActive: usize = 0x7A8; // bool
    pub const m_flMaxSimulationTime: usize = 0x7AC; // float
    pub const m_iszEffectName: usize = 0x7B0; // CUtlSymbolLarge
    pub const m_PathNodes_Name: usize = 0x7B8; // CUtlVector<CUtlSymbolLarge>
    pub const m_flParticleSpacing: usize = 0x7D0; // float
    pub const m_flSlack: usize = 0x7D4; // float
    pub const m_flRadius: usize = 0x7D8; // float
    pub const m_ColorTint: usize = 0x7DC; // Color
    pub const m_nEffectState: usize = 0x7E0; // int32_t
    pub const m_iEffectIndex: usize = 0x7E8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    pub const m_PathNodes_Position: usize = 0x7F0; // CNetworkUtlVectorBase<Vector>
    pub const m_PathNodes_TangentIn: usize = 0x808; // CNetworkUtlVectorBase<Vector>
    pub const m_PathNodes_TangentOut: usize = 0x820; // CNetworkUtlVectorBase<Vector>
    pub const m_PathNodes_Color: usize = 0x838; // CNetworkUtlVectorBase<Vector>
    pub const m_PathNodes_PinEnabled: usize = 0x850; // CNetworkUtlVectorBase<bool>
    pub const m_PathNodes_RadiusScale: usize = 0x868; // CNetworkUtlVectorBase<float>
}

pub mod CPathParticleRopeAlias_path_particle_rope_clientside { // CPathParticleRope
}

pub mod CPathTrack { // CPointEntity
    pub const m_pnext: usize = 0x7A8; // CPathTrack*
    pub const m_pprevious: usize = 0x7B0; // CPathTrack*
    pub const m_paltpath: usize = 0x7B8; // CPathTrack*
    pub const m_flRadius: usize = 0x7C0; // float
    pub const m_length: usize = 0x7C4; // float
    pub const m_altName: usize = 0x7C8; // CUtlSymbolLarge
    pub const m_nIterVal: usize = 0x7D0; // int32_t
    pub const m_eOrientationType: usize = 0x7D4; // TrackOrientationType_t
    pub const m_OnPass: usize = 0x7D8; // CEntityIOOutput
}

pub mod CPhysBallSocket { // CPhysConstraint
    pub const m_flFriction: usize = 0x800; // float
    pub const m_bEnableSwingLimit: usize = 0x804; // bool
    pub const m_flSwingLimit: usize = 0x808; // float
    pub const m_bEnableTwistLimit: usize = 0x80C; // bool
    pub const m_flMinTwistAngle: usize = 0x810; // float
    pub const m_flMaxTwistAngle: usize = 0x814; // float
}

pub mod CPhysBox { // CBreakable
    pub const m_damageType: usize = 0xAB8; // int32_t
    pub const m_massScale: usize = 0xABC; // float
    pub const m_damageToEnableMotion: usize = 0xAC0; // int32_t
    pub const m_flForceToEnableMotion: usize = 0xAC4; // float
    pub const m_angPreferredCarryAngles: usize = 0xAC8; // QAngle
    pub const m_bNotSolidToWorld: usize = 0xAD4; // bool
    pub const m_bEnableUseOutput: usize = 0xAD5; // bool
    pub const m_iExploitableByPlayer: usize = 0xAD8; // int32_t
    pub const m_flTouchOutputPerEntityDelay: usize = 0xADC; // float
    pub const m_OnDamaged: usize = 0xAE0; // CEntityIOOutput
    pub const m_OnAwakened: usize = 0xB08; // CEntityIOOutput
    pub const m_OnMotionEnabled: usize = 0xB30; // CEntityIOOutput
    pub const m_OnPlayerUse: usize = 0xB58; // CEntityIOOutput
    pub const m_OnStartTouch: usize = 0xB80; // CEntityIOOutput
    pub const m_hCarryingPlayer: usize = 0xBA8; // CHandle<CBasePlayerPawn>
}

pub mod CPhysConstraint { // CLogicalEntity
    pub const m_nameAttach1: usize = 0x7B0; // CUtlSymbolLarge
    pub const m_nameAttach2: usize = 0x7B8; // CUtlSymbolLarge
    pub const m_breakSound: usize = 0x7C0; // CUtlSymbolLarge
    pub const m_forceLimit: usize = 0x7C8; // float
    pub const m_torqueLimit: usize = 0x7CC; // float
    pub const m_teleportTick: usize = 0x7D0; // uint32_t
    pub const m_minTeleportDistance: usize = 0x7D4; // float
    pub const m_OnBreak: usize = 0x7D8; // CEntityIOOutput
}

pub mod CPhysExplosion { // CPointEntity
    pub const m_bExplodeOnSpawn: usize = 0x7A8; // bool
    pub const m_flMagnitude: usize = 0x7AC; // float
    pub const m_flDamage: usize = 0x7B0; // float
    pub const m_radius: usize = 0x7B4; // float
    pub const m_targetEntityName: usize = 0x7B8; // CUtlSymbolLarge
    pub const m_flInnerRadius: usize = 0x7C0; // float
    pub const m_flPushScale: usize = 0x7C4; // float
    pub const m_bConvertToDebrisWhenPossible: usize = 0x7C8; // bool
    pub const m_OnPushedPlayer: usize = 0x7D0; // CEntityIOOutput
}

pub mod CPhysFixed { // CPhysConstraint
    pub const m_flLinearFrequency: usize = 0x800; // float
    pub const m_flLinearDampingRatio: usize = 0x804; // float
    pub const m_flAngularFrequency: usize = 0x808; // float
    pub const m_flAngularDampingRatio: usize = 0x80C; // float
    pub const m_bEnableLinearConstraint: usize = 0x810; // bool
    pub const m_bEnableAngularConstraint: usize = 0x811; // bool
}

pub mod CPhysForce { // CPointEntity
    pub const m_nameAttach: usize = 0x7B0; // CUtlSymbolLarge
    pub const m_force: usize = 0x7B8; // float
    pub const m_forceTime: usize = 0x7BC; // float
    pub const m_attachedObject: usize = 0x7C0; // CHandle<CBaseEntity>
    pub const m_wasRestored: usize = 0x7C4; // bool
    pub const m_integrator: usize = 0x7C8; // CConstantForceController
}

pub mod CPhysHinge { // CPhysConstraint
    pub const m_soundInfo: usize = 0x808; // ConstraintSoundInfo
    pub const m_NotifyMinLimitReached: usize = 0x890; // CEntityIOOutput
    pub const m_NotifyMaxLimitReached: usize = 0x8B8; // CEntityIOOutput
    pub const m_bAtMinLimit: usize = 0x8E0; // bool
    pub const m_bAtMaxLimit: usize = 0x8E1; // bool
    pub const m_hinge: usize = 0x8E4; // constraint_hingeparams_t
    pub const m_hingeFriction: usize = 0x924; // float
    pub const m_systemLoadScale: usize = 0x928; // float
    pub const m_bIsAxisLocal: usize = 0x92C; // bool
    pub const m_flMinRotation: usize = 0x930; // float
    pub const m_flMaxRotation: usize = 0x934; // float
    pub const m_flInitialRotation: usize = 0x938; // float
    pub const m_flMotorFrequency: usize = 0x93C; // float
    pub const m_flMotorDampingRatio: usize = 0x940; // float
    pub const m_flAngleSpeed: usize = 0x944; // float
    pub const m_flAngleSpeedThreshold: usize = 0x948; // float
    pub const m_OnStartMoving: usize = 0x950; // CEntityIOOutput
    pub const m_OnStopMoving: usize = 0x978; // CEntityIOOutput
}

pub mod CPhysHingeAlias_phys_hinge_local { // CPhysHinge
}

pub mod CPhysImpact { // CPointEntity
    pub const m_damage: usize = 0x7A8; // float
    pub const m_distance: usize = 0x7AC; // float
    pub const m_directionEntityName: usize = 0x7B0; // CUtlSymbolLarge
}

pub mod CPhysLength { // CPhysConstraint
    pub const m_offset: usize = 0x800; // Vector[2]
    pub const m_vecAttach: usize = 0x818; // Vector
    pub const m_addLength: usize = 0x824; // float
    pub const m_minLength: usize = 0x828; // float
    pub const m_totalLength: usize = 0x82C; // float
    pub const m_bEnableCollision: usize = 0x830; // bool
}

pub mod CPhysMagnet { // CBaseAnimGraph
    pub const m_OnMagnetAttach: usize = 0xBF0; // CEntityIOOutput
    pub const m_OnMagnetDetach: usize = 0xC18; // CEntityIOOutput
    pub const m_massScale: usize = 0xC40; // float
    pub const m_forceLimit: usize = 0xC44; // float
    pub const m_torqueLimit: usize = 0xC48; // float
    pub const m_MagnettedEntities: usize = 0xC50; // CUtlVector<magnetted_objects_t>
    pub const m_bActive: usize = 0xC68; // bool
    pub const m_bHasHitSomething: usize = 0xC69; // bool
    pub const m_flTotalMass: usize = 0xC6C; // float
    pub const m_flRadius: usize = 0xC70; // float
    pub const m_flNextSuckTime: usize = 0xC74; // GameTime_t
    pub const m_iMaxObjectsAttached: usize = 0xC78; // int32_t
}

pub mod CPhysMotor { // CLogicalEntity
    pub const m_nameAttach: usize = 0x7A8; // CUtlSymbolLarge
    pub const m_hAttachedObject: usize = 0x7B0; // CHandle<CBaseEntity>
    pub const m_spinUp: usize = 0x7B4; // float
    pub const m_additionalAcceleration: usize = 0x7B8; // float
    pub const m_angularAcceleration: usize = 0x7BC; // float
    pub const m_lastTime: usize = 0x7C0; // GameTime_t
    pub const m_motor: usize = 0x7D8; // CMotorController
}

pub mod CPhysPulley { // CPhysConstraint
    pub const m_position2: usize = 0x800; // Vector
    pub const m_offset: usize = 0x80C; // Vector[2]
    pub const m_addLength: usize = 0x824; // float
    pub const m_gearRatio: usize = 0x828; // float
}

pub mod CPhysSlideConstraint { // CPhysConstraint
    pub const m_axisEnd: usize = 0x808; // Vector
    pub const m_slideFriction: usize = 0x814; // float
    pub const m_systemLoadScale: usize = 0x818; // float
    pub const m_initialOffset: usize = 0x81C; // float
    pub const m_bEnableLinearConstraint: usize = 0x820; // bool
    pub const m_bEnableAngularConstraint: usize = 0x821; // bool
    pub const m_flMotorFrequency: usize = 0x824; // float
    pub const m_flMotorDampingRatio: usize = 0x828; // float
    pub const m_bUseEntityPivot: usize = 0x82C; // bool
    pub const m_soundInfo: usize = 0x830; // ConstraintSoundInfo
}

pub mod CPhysThruster { // CPhysForce
    pub const m_localOrigin: usize = 0x808; // Vector
}

pub mod CPhysTorque { // CPhysForce
    pub const m_axis: usize = 0x808; // Vector
}

pub mod CPhysWheelConstraint { // CPhysConstraint
    pub const m_flSuspensionFrequency: usize = 0x800; // float
    pub const m_flSuspensionDampingRatio: usize = 0x804; // float
    pub const m_flSuspensionHeightOffset: usize = 0x808; // float
    pub const m_bEnableSuspensionLimit: usize = 0x80C; // bool
    pub const m_flMinSuspensionOffset: usize = 0x810; // float
    pub const m_flMaxSuspensionOffset: usize = 0x814; // float
    pub const m_bEnableSteeringLimit: usize = 0x818; // bool
    pub const m_flMinSteeringAngle: usize = 0x81C; // float
    pub const m_flMaxSteeringAngle: usize = 0x820; // float
    pub const m_flSteeringAxisFriction: usize = 0x824; // float
    pub const m_flSpinAxisFriction: usize = 0x828; // float
}

pub mod CPhysicalButton { // CBaseButton
}

pub mod CPhysicsEntitySolver { // CLogicalEntity
    pub const m_hMovingEntity: usize = 0x7B0; // CHandle<CBaseEntity>
    pub const m_hPhysicsBlocker: usize = 0x7B4; // CHandle<CBaseEntity>
    pub const m_separationDuration: usize = 0x7B8; // float
    pub const m_cancelTime: usize = 0x7BC; // GameTime_t
}

pub mod CPhysicsProp { // CBreakableProp
    pub const m_MotionEnabled: usize = 0xD70; // CEntityIOOutput
    pub const m_OnAwakened: usize = 0xD98; // CEntityIOOutput
    pub const m_OnAwake: usize = 0xDC0; // CEntityIOOutput
    pub const m_OnAsleep: usize = 0xDE8; // CEntityIOOutput
    pub const m_OnPlayerUse: usize = 0xE10; // CEntityIOOutput
    pub const m_OnPlayerPickup: usize = 0xE38; // CEntityIOOutput
    pub const m_OnOutOfWorld: usize = 0xE60; // CEntityIOOutput
    pub const m_massScale: usize = 0xE88; // float
    pub const m_inertiaScale: usize = 0xE8C; // float
    pub const m_buoyancyScale: usize = 0xE90; // float
    pub const m_damageType: usize = 0xE94; // int32_t
    pub const m_damageToEnableMotion: usize = 0xE98; // int32_t
    pub const m_flForceToEnableMotion: usize = 0xE9C; // float
    pub const m_bThrownByPlayer: usize = 0xEA0; // bool
    pub const m_bDroppedByPlayer: usize = 0xEA1; // bool
    pub const m_bTouchedByPlayer: usize = 0xEA2; // bool
    pub const m_bFirstCollisionAfterLaunch: usize = 0xEA3; // bool
    pub const m_iExploitableByPlayer: usize = 0xEA4; // int32_t
    pub const m_bHasBeenAwakened: usize = 0xEA8; // bool
    pub const m_bIsOverrideProp: usize = 0xEA9; // bool
    pub const m_fNextCheckDisableMotionContactsTime: usize = 0xEAC; // GameTime_t
    pub const m_iInitialGlowState: usize = 0xEB0; // int32_t
    pub const m_nGlowRange: usize = 0xEB4; // int32_t
    pub const m_nGlowRangeMin: usize = 0xEB8; // int32_t
    pub const m_glowColor: usize = 0xEBC; // Color
    pub const m_bForceNavIgnore: usize = 0xEC0; // bool
    pub const m_bNoNavmeshBlocker: usize = 0xEC1; // bool
    pub const m_bForceNpcExclude: usize = 0xEC2; // bool
    pub const m_bShouldAutoConvertBackFromDebris: usize = 0xEC3; // bool
    pub const m_bMuteImpactEffects: usize = 0xEC4; // bool
    pub const m_bAcceptDamageFromHeldObjects: usize = 0xECC; // bool
    pub const m_bEnableUseOutput: usize = 0xECD; // bool
    pub const m_bAwake: usize = 0xECE; // bool
    pub const m_nCollisionGroupOverride: usize = 0xED0; // int32_t
}

pub mod CPhysicsPropMultiplayer { // CPhysicsProp
}

pub mod CPhysicsPropOverride { // CPhysicsProp
}

pub mod CPhysicsPropRespawnable { // CPhysicsProp
    pub const m_vOriginalSpawnOrigin: usize = 0xED4; // Vector
    pub const m_vOriginalSpawnAngles: usize = 0xEE0; // QAngle
    pub const m_vOriginalMins: usize = 0xEEC; // Vector
    pub const m_vOriginalMaxs: usize = 0xEF8; // Vector
    pub const m_flRespawnDuration: usize = 0xF04; // float
}

pub mod CPhysicsShake {
    pub const m_force: usize = 0x8; // Vector
}

pub mod CPhysicsSpring { // CBaseEntity
    pub const m_flFrequency: usize = 0x7B0; // float
    pub const m_flDampingRatio: usize = 0x7B4; // float
    pub const m_flRestLength: usize = 0x7B8; // float
    pub const m_nameAttachStart: usize = 0x7C0; // CUtlSymbolLarge
    pub const m_nameAttachEnd: usize = 0x7C8; // CUtlSymbolLarge
    pub const m_start: usize = 0x7D0; // Vector
    pub const m_end: usize = 0x7DC; // Vector
    pub const m_teleportTick: usize = 0x7E8; // uint32_t
}

pub mod CPhysicsWire { // CBaseEntity
    pub const m_nDensity: usize = 0x7A8; // int32_t
}

pub mod CPlantedC4 { // CBaseAnimGraph
    pub const m_bBombTicking: usize = 0xBF0; // bool
    pub const m_flC4Blow: usize = 0xBF4; // GameTime_t
    pub const m_nBombSite: usize = 0xBF8; // int32_t
    pub const m_nSourceSoundscapeHash: usize = 0xBFC; // int32_t
    pub const m_OnBombDefused: usize = 0xC00; // CEntityIOOutput
    pub const m_OnBombBeginDefuse: usize = 0xC28; // CEntityIOOutput
    pub const m_OnBombDefuseAborted: usize = 0xC50; // CEntityIOOutput
    pub const m_bCannotBeDefused: usize = 0xC78; // bool
    pub const m_entitySpottedState: usize = 0xC80; // EntitySpottedState_t
    pub const m_nSpotRules: usize = 0xC98; // int32_t
    pub const m_bTrainingPlacedByPlayer: usize = 0xC9C; // bool
    pub const m_bHasExploded: usize = 0xC9D; // bool
    pub const m_flTimerLength: usize = 0xCA0; // float
    pub const m_bBeingDefused: usize = 0xCA4; // bool
    pub const m_fLastDefuseTime: usize = 0xCAC; // GameTime_t
    pub const m_flDefuseLength: usize = 0xCB4; // float
    pub const m_flDefuseCountDown: usize = 0xCB8; // GameTime_t
    pub const m_bBombDefused: usize = 0xCBC; // bool
    pub const m_hBombDefuser: usize = 0xCC0; // CHandle<CCSPlayerPawn>
    pub const m_hControlPanel: usize = 0xCC4; // CHandle<CBaseEntity>
    pub const m_iProgressBarTime: usize = 0xCC8; // int32_t
    pub const m_bVoiceAlertFired: usize = 0xCCC; // bool
    pub const m_bVoiceAlertPlayed: usize = 0xCCD; // bool[4]
    pub const m_flNextBotBeepTime: usize = 0xCD4; // GameTime_t
    pub const m_angCatchUpToPlayerEye: usize = 0xCDC; // QAngle
    pub const m_flLastSpinDetectionTime: usize = 0xCE8; // GameTime_t
}

pub mod CPlatTrigger { // CBaseModelEntity
    pub const m_pPlatform: usize = 0x9F8; // CHandle<CFuncPlat>
}

pub mod CPlayerControllerComponent {
    pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
}

pub mod CPlayerPawnComponent {
    pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
}

pub mod CPlayerPing { // CBaseEntity
    pub const m_hPlayer: usize = 0x7B0; // CHandle<CCSPlayerPawn>
    pub const m_hPingedEntity: usize = 0x7B4; // CHandle<CBaseEntity>
    pub const m_iType: usize = 0x7B8; // int32_t
    pub const m_bUrgent: usize = 0x7BC; // bool
    pub const m_szPlaceName: usize = 0x7BD; // char[18]
}

pub mod CPlayerSprayDecal { // CModelPointEntity
    pub const m_nUniqueID: usize = 0x9F8; // int32_t
    pub const m_unAccountID: usize = 0x9FC; // uint32_t
    pub const m_unTraceID: usize = 0xA00; // uint32_t
    pub const m_rtGcTime: usize = 0xA04; // uint32_t
    pub const m_vecEndPos: usize = 0xA08; // Vector
    pub const m_vecStart: usize = 0xA14; // Vector
    pub const m_vecLeft: usize = 0xA20; // Vector
    pub const m_vecNormal: usize = 0xA2C; // Vector
    pub const m_nPlayer: usize = 0xA38; // int32_t
    pub const m_nEntity: usize = 0xA3C; // int32_t
    pub const m_nHitbox: usize = 0xA40; // int32_t
    pub const m_flCreationTime: usize = 0xA44; // float
    pub const m_nTintID: usize = 0xA48; // int32_t
    pub const m_nVersion: usize = 0xA4C; // uint8_t
    pub const m_ubSignature: usize = 0xA4D; // uint8_t[128]
}

pub mod CPlayerVisibility { // CBaseEntity
    pub const m_flVisibilityStrength: usize = 0x7A8; // float
    pub const m_flFogDistanceMultiplier: usize = 0x7AC; // float
    pub const m_flFogMaxDensityMultiplier: usize = 0x7B0; // float
    pub const m_flFadeTime: usize = 0x7B4; // float
    pub const m_bStartDisabled: usize = 0x7B8; // bool
    pub const m_bIsEnabled: usize = 0x7B9; // bool
}

pub mod CPlayer_AutoaimServices { // CPlayerPawnComponent
}

pub mod CPlayer_CameraServices { // CPlayerPawnComponent
    pub const m_vecCsViewPunchAngle: usize = 0x40; // QAngle
    pub const m_nCsViewPunchAngleTick: usize = 0x4C; // GameTick_t
    pub const m_flCsViewPunchAngleTickRatio: usize = 0x50; // float
    pub const m_PlayerFog: usize = 0x58; // fogplayerparams_t
    pub const m_hColorCorrectionCtrl: usize = 0x98; // CHandle<CColorCorrection>
    pub const m_hViewEntity: usize = 0x9C; // CHandle<CBaseEntity>
    pub const m_hTonemapController: usize = 0xA0; // CHandle<CTonemapController2>
    pub const m_audio: usize = 0xA8; // audioparams_t
    pub const m_PostProcessingVolumes: usize = 0x120; // CNetworkUtlVectorBase<CHandle<CPostProcessingVolume>>
    pub const m_flOldPlayerZ: usize = 0x138; // float
    pub const m_flOldPlayerViewOffsetZ: usize = 0x13C; // float
    pub const m_hTriggerSoundscapeList: usize = 0x158; // CUtlVector<CHandle<CEnvSoundscapeTriggerable>>
}

pub mod CPlayer_FlashlightServices { // CPlayerPawnComponent
}

pub mod CPlayer_ItemServices { // CPlayerPawnComponent
}

pub mod CPlayer_MovementServices { // CPlayerPawnComponent
    pub const m_nImpulse: usize = 0x40; // int32_t
    pub const m_nButtons: usize = 0x48; // CInButtonState
    pub const m_nQueuedButtonDownMask: usize = 0x68; // uint64_t
    pub const m_nQueuedButtonChangeMask: usize = 0x70; // uint64_t
    pub const m_nButtonDoublePressed: usize = 0x78; // uint64_t
    pub const m_pButtonPressedCmdNumber: usize = 0x80; // uint32_t[64]
    pub const m_nLastCommandNumberProcessed: usize = 0x180; // uint32_t
    pub const m_nToggleButtonDownMask: usize = 0x188; // uint64_t
    pub const m_flMaxspeed: usize = 0x198; // float
    pub const m_arrForceSubtickMoveWhen: usize = 0x19C; // float[4]
    pub const m_flForwardMove: usize = 0x1AC; // float
    pub const m_flLeftMove: usize = 0x1B0; // float
    pub const m_flUpMove: usize = 0x1B4; // float
    pub const m_vecLastMovementImpulses: usize = 0x1B8; // Vector
    pub const m_vecOldViewAngles: usize = 0x1C4; // QAngle
}

pub mod CPlayer_MovementServices_Humanoid { // CPlayer_MovementServices
    pub const m_flStepSoundTime: usize = 0x1D8; // float
    pub const m_flFallVelocity: usize = 0x1DC; // float
    pub const m_bInCrouch: usize = 0x1E0; // bool
    pub const m_nCrouchState: usize = 0x1E4; // uint32_t
    pub const m_flCrouchTransitionStartTime: usize = 0x1E8; // GameTime_t
    pub const m_bDucked: usize = 0x1EC; // bool
    pub const m_bDucking: usize = 0x1ED; // bool
    pub const m_bInDuckJump: usize = 0x1EE; // bool
    pub const m_groundNormal: usize = 0x1F0; // Vector
    pub const m_flSurfaceFriction: usize = 0x1FC; // float
    pub const m_surfaceProps: usize = 0x200; // CUtlStringToken
    pub const m_nStepside: usize = 0x210; // int32_t
    pub const m_iTargetVolume: usize = 0x214; // int32_t
    pub const m_vecSmoothedVelocity: usize = 0x218; // Vector
}

pub mod CPlayer_ObserverServices { // CPlayerPawnComponent
    pub const m_iObserverMode: usize = 0x40; // uint8_t
    pub const m_hObserverTarget: usize = 0x44; // CHandle<CBaseEntity>
    pub const m_iObserverLastMode: usize = 0x48; // ObserverMode_t
    pub const m_bForcedObserverMode: usize = 0x4C; // bool
}

pub mod CPlayer_UseServices { // CPlayerPawnComponent
}

pub mod CPlayer_ViewModelServices { // CPlayerPawnComponent
}

pub mod CPlayer_WaterServices { // CPlayerPawnComponent
}

pub mod CPlayer_WeaponServices { // CPlayerPawnComponent
    pub const m_hMyWeapons: usize = 0x40; // CNetworkUtlVectorBase<CHandle<CBasePlayerWeapon>>
    pub const m_hActiveWeapon: usize = 0x58; // CHandle<CBasePlayerWeapon>
    pub const m_hLastWeapon: usize = 0x5C; // CHandle<CBasePlayerWeapon>
    pub const m_iAmmo: usize = 0x60; // uint16_t[32]
    pub const m_bPreventWeaponPickup: usize = 0xA0; // bool
}

pub mod CPointAngleSensor { // CPointEntity
    pub const m_bDisabled: usize = 0x7A8; // bool
    pub const m_nLookAtName: usize = 0x7B0; // CUtlSymbolLarge
    pub const m_hTargetEntity: usize = 0x7B8; // CHandle<CBaseEntity>
    pub const m_hLookAtEntity: usize = 0x7BC; // CHandle<CBaseEntity>
    pub const m_flDuration: usize = 0x7C0; // float
    pub const m_flDotTolerance: usize = 0x7C4; // float
    pub const m_flFacingTime: usize = 0x7C8; // GameTime_t
    pub const m_bFired: usize = 0x7CC; // bool
    pub const m_OnFacingLookat: usize = 0x7D0; // CEntityIOOutput
    pub const m_OnNotFacingLookat: usize = 0x7F8; // CEntityIOOutput
    pub const m_TargetDir: usize = 0x820; // CEntityOutputTemplate<Vector>
    pub const m_FacingPercentage: usize = 0x848; // CEntityOutputTemplate<float>
}

pub mod CPointAngularVelocitySensor { // CPointEntity
    pub const m_hTargetEntity: usize = 0x7A8; // CHandle<CBaseEntity>
    pub const m_flThreshold: usize = 0x7AC; // float
    pub const m_nLastCompareResult: usize = 0x7B0; // int32_t
    pub const m_nLastFireResult: usize = 0x7B4; // int32_t
    pub const m_flFireTime: usize = 0x7B8; // GameTime_t
    pub const m_flFireInterval: usize = 0x7BC; // float
    pub const m_flLastAngVelocity: usize = 0x7C0; // float
    pub const m_lastOrientation: usize = 0x7C4; // QAngle
    pub const m_vecAxis: usize = 0x7D0; // Vector
    pub const m_bUseHelper: usize = 0x7DC; // bool
    pub const m_AngularVelocity: usize = 0x7E0; // CEntityOutputTemplate<float>
    pub const m_OnLessThan: usize = 0x808; // CEntityIOOutput
    pub const m_OnLessThanOrEqualTo: usize = 0x830; // CEntityIOOutput
    pub const m_OnGreaterThan: usize = 0x858; // CEntityIOOutput
    pub const m_OnGreaterThanOrEqualTo: usize = 0x880; // CEntityIOOutput
    pub const m_OnEqualTo: usize = 0x8A8; // CEntityIOOutput
}

pub mod CPointBroadcastClientCommand { // CPointEntity
}

pub mod CPointCamera { // CBaseEntity
    pub const m_FOV: usize = 0x7A8; // float
    pub const m_Resolution: usize = 0x7AC; // float
    pub const m_bFogEnable: usize = 0x7B0; // bool
    pub const m_FogColor: usize = 0x7B1; // Color
    pub const m_flFogStart: usize = 0x7B8; // float
    pub const m_flFogEnd: usize = 0x7BC; // float
    pub const m_flFogMaxDensity: usize = 0x7C0; // float
    pub const m_bActive: usize = 0x7C4; // bool
    pub const m_bUseScreenAspectRatio: usize = 0x7C5; // bool
    pub const m_flAspectRatio: usize = 0x7C8; // float
    pub const m_bNoSky: usize = 0x7CC; // bool
    pub const m_fBrightness: usize = 0x7D0; // float
    pub const m_flZFar: usize = 0x7D4; // float
    pub const m_flZNear: usize = 0x7D8; // float
    pub const m_bCanHLTVUse: usize = 0x7DC; // bool
    pub const m_bDofEnabled: usize = 0x7DD; // bool
    pub const m_flDofNearBlurry: usize = 0x7E0; // float
    pub const m_flDofNearCrisp: usize = 0x7E4; // float
    pub const m_flDofFarCrisp: usize = 0x7E8; // float
    pub const m_flDofFarBlurry: usize = 0x7EC; // float
    pub const m_flDofTiltToGround: usize = 0x7F0; // float
    pub const m_TargetFOV: usize = 0x7F4; // float
    pub const m_DegreesPerSecond: usize = 0x7F8; // float
    pub const m_bIsOn: usize = 0x7FC; // bool
    pub const m_pNext: usize = 0x800; // CPointCamera*
}

pub mod CPointCameraVFOV { // CPointCamera
    pub const m_flVerticalFOV: usize = 0x808; // float
}

pub mod CPointClientCommand { // CPointEntity
}

pub mod CPointClientUIDialog { // CBaseClientUIEntity
    pub const m_hActivator: usize = 0xBA8; // CHandle<CBaseEntity>
    pub const m_bStartEnabled: usize = 0xBAC; // bool
}

pub mod CPointClientUIWorldPanel { // CBaseClientUIEntity
    pub const m_bIgnoreInput: usize = 0xBA8; // bool
    pub const m_bLit: usize = 0xBA9; // bool
    pub const m_bFollowPlayerAcrossTeleport: usize = 0xBAA; // bool
    pub const m_flWidth: usize = 0xBAC; // float
    pub const m_flHeight: usize = 0xBB0; // float
    pub const m_flDPI: usize = 0xBB4; // float
    pub const m_flInteractDistance: usize = 0xBB8; // float
    pub const m_flDepthOffset: usize = 0xBBC; // float
    pub const m_unOwnerContext: usize = 0xBC0; // uint32_t
    pub const m_unHorizontalAlign: usize = 0xBC4; // uint32_t
    pub const m_unVerticalAlign: usize = 0xBC8; // uint32_t
    pub const m_unOrientation: usize = 0xBCC; // uint32_t
    pub const m_bAllowInteractionFromAllSceneWorlds: usize = 0xBD0; // bool
    pub const m_vecCSSClasses: usize = 0xBD8; // CNetworkUtlVectorBase<CUtlSymbolLarge>
    pub const m_bOpaque: usize = 0xBF0; // bool
    pub const m_bNoDepth: usize = 0xBF1; // bool
    pub const m_bRenderBackface: usize = 0xBF2; // bool
    pub const m_bUseOffScreenIndicator: usize = 0xBF3; // bool
    pub const m_bExcludeFromSaveGames: usize = 0xBF4; // bool
    pub const m_bGrabbable: usize = 0xBF5; // bool
    pub const m_bOnlyRenderToTexture: usize = 0xBF6; // bool
    pub const m_bDisableMipGen: usize = 0xBF7; // bool
    pub const m_nExplicitImageLayout: usize = 0xBF8; // int32_t
}

pub mod CPointClientUIWorldTextPanel { // CPointClientUIWorldPanel
    pub const m_messageText: usize = 0xBFC; // char[512]
}

pub mod CPointCommentaryNode { // CBaseAnimGraph
    pub const m_iszPreCommands: usize = 0xBF0; // CUtlSymbolLarge
    pub const m_iszPostCommands: usize = 0xBF8; // CUtlSymbolLarge
    pub const m_iszCommentaryFile: usize = 0xC00; // CUtlSymbolLarge
    pub const m_iszViewTarget: usize = 0xC08; // CUtlSymbolLarge
    pub const m_hViewTarget: usize = 0xC10; // CHandle<CBaseEntity>
    pub const m_hViewTargetAngles: usize = 0xC14; // CHandle<CBaseEntity>
    pub const m_iszViewPosition: usize = 0xC18; // CUtlSymbolLarge
    pub const m_hViewPosition: usize = 0xC20; // CHandle<CBaseEntity>
    pub const m_hViewPositionMover: usize = 0xC24; // CHandle<CBaseEntity>
    pub const m_bPreventMovement: usize = 0xC28; // bool
    pub const m_bUnderCrosshair: usize = 0xC29; // bool
    pub const m_bUnstoppable: usize = 0xC2A; // bool
    pub const m_flFinishedTime: usize = 0xC2C; // GameTime_t
    pub const m_vecFinishOrigin: usize = 0xC30; // Vector
    pub const m_vecOriginalAngles: usize = 0xC3C; // QAngle
    pub const m_vecFinishAngles: usize = 0xC48; // QAngle
    pub const m_bPreventChangesWhileMoving: usize = 0xC54; // bool
    pub const m_bDisabled: usize = 0xC55; // bool
    pub const m_vecTeleportOrigin: usize = 0xC58; // Vector
    pub const m_flAbortedPlaybackAt: usize = 0xC64; // GameTime_t
    pub const m_pOnCommentaryStarted: usize = 0xC68; // CEntityIOOutput
    pub const m_pOnCommentaryStopped: usize = 0xC90; // CEntityIOOutput
    pub const m_bActive: usize = 0xCB8; // bool
    pub const m_flStartTime: usize = 0xCBC; // GameTime_t
    pub const m_flStartTimeInCommentary: usize = 0xCC0; // float
    pub const m_iszTitle: usize = 0xCC8; // CUtlSymbolLarge
    pub const m_iszSpeakers: usize = 0xCD0; // CUtlSymbolLarge
    pub const m_iNodeNumber: usize = 0xCD8; // int32_t
    pub const m_iNodeNumberMax: usize = 0xCDC; // int32_t
    pub const m_bListenedTo: usize = 0xCE0; // bool
}

pub mod CPointEntity { // CBaseEntity
}

pub mod CPointEntityFinder { // CBaseEntity
    pub const m_hEntity: usize = 0x7A8; // CHandle<CBaseEntity>
    pub const m_iFilterName: usize = 0x7B0; // CUtlSymbolLarge
    pub const m_hFilter: usize = 0x7B8; // CHandle<CBaseFilter>
    pub const m_iRefName: usize = 0x7C0; // CUtlSymbolLarge
    pub const m_hReference: usize = 0x7C8; // CHandle<CBaseEntity>
    pub const m_FindMethod: usize = 0x7CC; // EntFinderMethod_t
    pub const m_OnFoundEntity: usize = 0x7D0; // CEntityIOOutput
}

pub mod CPointGamestatsCounter { // CPointEntity
    pub const m_strStatisticName: usize = 0x7A8; // CUtlSymbolLarge
    pub const m_bDisabled: usize = 0x7B0; // bool
}

pub mod CPointGiveAmmo { // CPointEntity
    pub const m_pActivator: usize = 0x7A8; // CHandle<CBaseEntity>
}

pub mod CPointHurt { // CPointEntity
    pub const m_nDamage: usize = 0x7A8; // int32_t
    pub const m_bitsDamageType: usize = 0x7AC; // int32_t
    pub const m_flRadius: usize = 0x7B0; // float
    pub const m_flDelay: usize = 0x7B4; // float
    pub const m_strTarget: usize = 0x7B8; // CUtlSymbolLarge
    pub const m_pActivator: usize = 0x7C0; // CHandle<CBaseEntity>
}

pub mod CPointPrefab { // CServerOnlyPointEntity
    pub const m_targetMapName: usize = 0x7A8; // CUtlSymbolLarge
    pub const m_forceWorldGroupID: usize = 0x7B0; // CUtlSymbolLarge
    pub const m_associatedRelayTargetName: usize = 0x7B8; // CUtlSymbolLarge
    pub const m_fixupNames: usize = 0x7C0; // bool
    pub const m_bLoadDynamic: usize = 0x7C1; // bool
    pub const m_associatedRelayEntity: usize = 0x7C4; // CHandle<CPointPrefab>
}

pub mod CPointProximitySensor { // CPointEntity
    pub const m_bDisabled: usize = 0x7A8; // bool
    pub const m_hTargetEntity: usize = 0x7AC; // CHandle<CBaseEntity>
    pub const m_Distance: usize = 0x7B0; // CEntityOutputTemplate<float>
}

pub mod CPointPulse { // CBaseEntity
}

pub mod CPointPush { // CPointEntity
    pub const m_bEnabled: usize = 0x7A8; // bool
    pub const m_flMagnitude: usize = 0x7AC; // float
    pub const m_flRadius: usize = 0x7B0; // float
    pub const m_flInnerRadius: usize = 0x7B4; // float
    pub const m_flConeOfInfluence: usize = 0x7B8; // float
    pub const m_iszFilterName: usize = 0x7C0; // CUtlSymbolLarge
    pub const m_hFilter: usize = 0x7C8; // CHandle<CBaseFilter>
}

pub mod CPointScriptEntity { // CBaseEntity
}

pub mod CPointServerCommand { // CPointEntity
}

pub mod CPointTeleport { // CServerOnlyPointEntity
    pub const m_vSaveOrigin: usize = 0x7A8; // Vector
    pub const m_vSaveAngles: usize = 0x7B4; // QAngle
    pub const m_bTeleportParentedEntities: usize = 0x7C0; // bool
    pub const m_bTeleportUseCurrentAngle: usize = 0x7C1; // bool
}

pub mod CPointTemplate { // CLogicalEntity
    pub const m_iszWorldName: usize = 0x7A8; // CUtlSymbolLarge
    pub const m_iszSource2EntityLumpName: usize = 0x7B0; // CUtlSymbolLarge
    pub const m_iszEntityFilterName: usize = 0x7B8; // CUtlSymbolLarge
    pub const m_flTimeoutInterval: usize = 0x7C0; // float
    pub const m_bAsynchronouslySpawnEntities: usize = 0x7C4; // bool
    pub const m_pOutputOnSpawned: usize = 0x7C8; // CEntityIOOutput
    pub const m_clientOnlyEntityBehavior: usize = 0x7F0; // PointTemplateClientOnlyEntityBehavior_t
    pub const m_ownerSpawnGroupType: usize = 0x7F4; // PointTemplateOwnerSpawnGroupType_t
    pub const m_createdSpawnGroupHandles: usize = 0x7F8; // CUtlVector<uint32_t>
    pub const m_SpawnedEntityHandles: usize = 0x810; // CUtlVector<CEntityHandle>
    pub const m_ScriptSpawnCallback: usize = 0x828; // HSCRIPT
    pub const m_ScriptCallbackScope: usize = 0x830; // HSCRIPT
}

pub mod CPointValueRemapper { // CBaseEntity
    pub const m_bDisabled: usize = 0x7A8; // bool
    pub const m_bUpdateOnClient: usize = 0x7A9; // bool
    pub const m_nInputType: usize = 0x7AC; // ValueRemapperInputType_t
    pub const m_iszRemapLineStartName: usize = 0x7B0; // CUtlSymbolLarge
    pub const m_iszRemapLineEndName: usize = 0x7B8; // CUtlSymbolLarge
    pub const m_hRemapLineStart: usize = 0x7C0; // CHandle<CBaseEntity>
    pub const m_hRemapLineEnd: usize = 0x7C4; // CHandle<CBaseEntity>
    pub const m_flMaximumChangePerSecond: usize = 0x7C8; // float
    pub const m_flDisengageDistance: usize = 0x7CC; // float
    pub const m_flEngageDistance: usize = 0x7D0; // float
    pub const m_bRequiresUseKey: usize = 0x7D4; // bool
    pub const m_nOutputType: usize = 0x7D8; // ValueRemapperOutputType_t
    pub const m_iszOutputEntityName: usize = 0x7E0; // CUtlSymbolLarge
    pub const m_iszOutputEntity2Name: usize = 0x7E8; // CUtlSymbolLarge
    pub const m_iszOutputEntity3Name: usize = 0x7F0; // CUtlSymbolLarge
    pub const m_iszOutputEntity4Name: usize = 0x7F8; // CUtlSymbolLarge
    pub const m_hOutputEntities: usize = 0x800; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
    pub const m_nHapticsType: usize = 0x818; // ValueRemapperHapticsType_t
    pub const m_nMomentumType: usize = 0x81C; // ValueRemapperMomentumType_t
    pub const m_flMomentumModifier: usize = 0x820; // float
    pub const m_flSnapValue: usize = 0x824; // float
    pub const m_flCurrentMomentum: usize = 0x828; // float
    pub const m_nRatchetType: usize = 0x82C; // ValueRemapperRatchetType_t
    pub const m_flRatchetOffset: usize = 0x830; // float
    pub const m_flInputOffset: usize = 0x834; // float
    pub const m_bEngaged: usize = 0x838; // bool
    pub const m_bFirstUpdate: usize = 0x839; // bool
    pub const m_flPreviousValue: usize = 0x83C; // float
    pub const m_flPreviousUpdateTickTime: usize = 0x840; // GameTime_t
    pub const m_vecPreviousTestPoint: usize = 0x844; // Vector
    pub const m_hUsingPlayer: usize = 0x850; // CHandle<CBasePlayerPawn>
    pub const m_flCustomOutputValue: usize = 0x854; // float
    pub const m_iszSoundEngage: usize = 0x858; // CUtlSymbolLarge
    pub const m_iszSoundDisengage: usize = 0x860; // CUtlSymbolLarge
    pub const m_iszSoundReachedValueZero: usize = 0x868; // CUtlSymbolLarge
    pub const m_iszSoundReachedValueOne: usize = 0x870; // CUtlSymbolLarge
    pub const m_iszSoundMovingLoop: usize = 0x878; // CUtlSymbolLarge
    pub const m_Position: usize = 0x888; // CEntityOutputTemplate<float>
    pub const m_PositionDelta: usize = 0x8B0; // CEntityOutputTemplate<float>
    pub const m_OnReachedValueZero: usize = 0x8D8; // CEntityIOOutput
    pub const m_OnReachedValueOne: usize = 0x900; // CEntityIOOutput
    pub const m_OnReachedValueCustom: usize = 0x928; // CEntityIOOutput
    pub const m_OnEngage: usize = 0x950; // CEntityIOOutput
    pub const m_OnDisengage: usize = 0x978; // CEntityIOOutput
}

pub mod CPointVelocitySensor { // CPointEntity
    pub const m_hTargetEntity: usize = 0x7A8; // CHandle<CBaseEntity>
    pub const m_vecAxis: usize = 0x7AC; // Vector
    pub const m_bEnabled: usize = 0x7B8; // bool
    pub const m_fPrevVelocity: usize = 0x7BC; // float
    pub const m_flAvgInterval: usize = 0x7C0; // float
    pub const m_Velocity: usize = 0x7C8; // CEntityOutputTemplate<float>
}

pub mod CPointWorldText { // CModelPointEntity
    pub const m_messageText: usize = 0x9F8; // char[512]
    pub const m_FontName: usize = 0xBF8; // char[64]
    pub const m_bEnabled: usize = 0xC38; // bool
    pub const m_bFullbright: usize = 0xC39; // bool
    pub const m_flWorldUnitsPerPx: usize = 0xC3C; // float
    pub const m_flFontSize: usize = 0xC40; // float
    pub const m_flDepthOffset: usize = 0xC44; // float
    pub const m_Color: usize = 0xC48; // Color
    pub const m_nJustifyHorizontal: usize = 0xC4C; // PointWorldTextJustifyHorizontal_t
    pub const m_nJustifyVertical: usize = 0xC50; // PointWorldTextJustifyVertical_t
    pub const m_nReorientMode: usize = 0xC54; // PointWorldTextReorientMode_t
}

pub mod CPostProcessingVolume { // CBaseTrigger
    pub const m_hPostSettings: usize = 0xBB0; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
    pub const m_flFadeDuration: usize = 0xBB8; // float
    pub const m_flMinLogExposure: usize = 0xBBC; // float
    pub const m_flMaxLogExposure: usize = 0xBC0; // float
    pub const m_flMinExposure: usize = 0xBC4; // float
    pub const m_flMaxExposure: usize = 0xBC8; // float
    pub const m_flExposureCompensation: usize = 0xBCC; // float
    pub const m_flExposureFadeSpeedUp: usize = 0xBD0; // float
    pub const m_flExposureFadeSpeedDown: usize = 0xBD4; // float
    pub const m_flTonemapEVSmoothingRange: usize = 0xBD8; // float
    pub const m_bMaster: usize = 0xBDC; // bool
    pub const m_bExposureControl: usize = 0xBDD; // bool
    pub const m_flRate: usize = 0xBE0; // float
    pub const m_flTonemapPercentTarget: usize = 0xBE4; // float
    pub const m_flTonemapPercentBrightPixels: usize = 0xBE8; // float
    pub const m_flTonemapMinAvgLum: usize = 0xBEC; // float
}

pub mod CPrecipitation { // CBaseTrigger
}

pub mod CPrecipitationBlocker { // CBaseModelEntity
}

pub mod CPrecipitationVData { // CEntitySubclassVDataBase
    pub const m_szParticlePrecipitationEffect: usize = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
    pub const m_flInnerDistance: usize = 0x108; // float
    pub const m_nAttachType: usize = 0x10C; // ParticleAttachment_t
    pub const m_bBatchSameVolumeType: usize = 0x110; // bool
    pub const m_nRTEnvCP: usize = 0x114; // int32_t
    pub const m_nRTEnvCPComponent: usize = 0x118; // int32_t
    pub const m_szModifier: usize = 0x120; // CUtlString
}

pub mod CPredictedViewModel { // CBaseViewModel
}

pub mod CProjectedDecal { // CPointEntity
    pub const m_nTexture: usize = 0x7A8; // int32_t
    pub const m_flDistance: usize = 0x7AC; // float
}

pub mod CPropDoorRotating { // CBasePropDoor
    pub const m_vecAxis: usize = 0x10F0; // Vector
    pub const m_flDistance: usize = 0x10FC; // float
    pub const m_eSpawnPosition: usize = 0x1100; // PropDoorRotatingSpawnPos_t
    pub const m_eOpenDirection: usize = 0x1104; // PropDoorRotatingOpenDirection_e
    pub const m_eCurrentOpenDirection: usize = 0x1108; // PropDoorRotatingOpenDirection_e
    pub const m_flAjarAngle: usize = 0x110C; // float
    pub const m_angRotationAjarDeprecated: usize = 0x1110; // QAngle
    pub const m_angRotationClosed: usize = 0x111C; // QAngle
    pub const m_angRotationOpenForward: usize = 0x1128; // QAngle
    pub const m_angRotationOpenBack: usize = 0x1134; // QAngle
    pub const m_angGoal: usize = 0x1140; // QAngle
    pub const m_vecForwardBoundsMin: usize = 0x114C; // Vector
    pub const m_vecForwardBoundsMax: usize = 0x1158; // Vector
    pub const m_vecBackBoundsMin: usize = 0x1164; // Vector
    pub const m_vecBackBoundsMax: usize = 0x1170; // Vector
    pub const m_bAjarDoorShouldntAlwaysOpen: usize = 0x117C; // bool
    pub const m_hEntityBlocker: usize = 0x1180; // CHandle<CEntityBlocker>
}

pub mod CPropDoorRotatingBreakable { // CPropDoorRotating
    pub const m_bBreakable: usize = 0x1184; // bool
    pub const m_isAbleToCloseAreaPortals: usize = 0x1185; // bool
    pub const m_currentDamageState: usize = 0x1188; // int32_t
    pub const m_damageStates: usize = 0x1190; // CUtlVector<CUtlSymbolLarge>
}

pub mod CPulseCell_Inflow_GameEvent { // CPulseCell_Inflow_BaseEntrypoint
    pub const m_EventName: usize = 0x70; // CBufferString
}

pub mod CPulseCell_Outflow_PlaySceneBase { // CPulseCell_BaseYieldingInflow
    pub const m_OnFinished: usize = 0x48; // CPulse_ResumePoint
    pub const m_OnCanceled: usize = 0x58; // CPulse_ResumePoint
    pub const m_Triggers: usize = 0x68; // CUtlVector<CPulse_OutflowConnection>
}

pub mod CPulseCell_Outflow_PlaySceneBase_CursorState_t {
    pub const m_sceneInstance: usize = 0x0; // CHandle<CBaseEntity>
}

pub mod CPulseCell_Outflow_PlaySequence { // CPulseCell_Outflow_PlaySceneBase
    pub const m_ParamSequenceName: usize = 0x80; // CUtlString
}

pub mod CPulseCell_Outflow_PlayVCD { // CPulseCell_Outflow_PlaySceneBase
    pub const m_vcdFilename: usize = 0x80; // CUtlString
}

pub mod CPulseCell_Outflow_ScriptedSequence { // CPulseCell_BaseYieldingInflow
    pub const m_scriptedSequenceDataMain: usize = 0x48; // PulseScriptedSequenceData_t
    pub const m_vecAdditionalActors: usize = 0x78; // CUtlVector<PulseScriptedSequenceData_t>
    pub const m_OnFinished: usize = 0x90; // CPulse_ResumePoint
    pub const m_OnCanceled: usize = 0xA0; // CPulse_ResumePoint
    pub const m_Triggers: usize = 0xB0; // CUtlVector<CPulse_OutflowConnection>
}

pub mod CPulseCell_Outflow_ScriptedSequence_CursorState_t {
    pub const m_scriptedSequence: usize = 0x0; // CHandle<CBaseEntity>
}

pub mod CPulseCell_SoundEventStart { // CPulseCell_BaseFlow
    pub const m_Type: usize = 0x48; // SoundEventStartType_t
}

pub mod CPulseCell_Step_EntFire { // CPulseCell_BaseFlow
    pub const m_Input: usize = 0x48; // CUtlString
}

pub mod CPulseCell_Step_FollowEntity { // CPulseCell_BaseFlow
    pub const m_ParamBoneOrAttachName: usize = 0x48; // CUtlString
    pub const m_ParamBoneOrAttachNameChild: usize = 0x50; // CUtlString
}

pub mod CPulseCell_Value_FindEntByClassNameWithin { // CPulseCell_BaseValue
    pub const m_EntityType: usize = 0x48; // CUtlString
}

pub mod CPulseCell_Value_FindEntByName { // CPulseCell_BaseValue
    pub const m_EntityType: usize = 0x48; // CUtlString
}

pub mod CPulseGraphComponentBase {
    pub const m_hOwner: usize = 0x8; // CHandle<CBaseEntity>
    pub const m_sNameFixupStaticPrefix: usize = 0x10; // CUtlSymbolLarge
    pub const m_sNameFixupParent: usize = 0x18; // CUtlSymbolLarge
    pub const m_sNameFixupLocal: usize = 0x20; // CUtlSymbolLarge
}

pub mod CPulseGraphComponentPointServer { // CPulseGraphComponentBase
}

pub mod CPulseGraphInstance_ServerEntity { // CBasePulseGraphInstance
    pub const m_pComponent: usize = 0xD8; // CPulseGraphComponentBase*
}

pub mod CPulseGraphInstance_ServerPointEntity { // CPulseGraphInstance_ServerEntity
}

pub mod CPulseServerCursor { // CPulseExecCursor
}

pub mod CPulseServerFuncs {
}

pub mod CPulseServerFuncs_Sounds {
}

pub mod CPushable { // CBreakable
}

pub mod CRR_Response {
    pub const m_Type: usize = 0x0; // uint8_t
    pub const m_szResponseName: usize = 0x1; // char[192]
    pub const m_szMatchingRule: usize = 0xC1; // char[128]
    pub const m_Params: usize = 0x141; // ResponseParams
    pub const m_fMatchScore: usize = 0x160; // float
    pub const m_szSpeakerContext: usize = 0x168; // char*
    pub const m_szWorldContext: usize = 0x170; // char*
    pub const m_Followup: usize = 0x178; // ResponseFollowup
    pub const m_pchCriteriaNames: usize = 0x1B0; // CUtlVector<CUtlSymbol>
    pub const m_pchCriteriaValues: usize = 0x1C8; // CUtlVector<char*>
}

pub mod CRagdollConstraint { // CPhysConstraint
    pub const m_xmin: usize = 0x800; // float
    pub const m_xmax: usize = 0x804; // float
    pub const m_ymin: usize = 0x808; // float
    pub const m_ymax: usize = 0x80C; // float
    pub const m_zmin: usize = 0x810; // float
    pub const m_zmax: usize = 0x814; // float
    pub const m_xfriction: usize = 0x818; // float
    pub const m_yfriction: usize = 0x81C; // float
    pub const m_zfriction: usize = 0x820; // float
}

pub mod CRagdollMagnet { // CPointEntity
    pub const m_bDisabled: usize = 0x7A8; // bool
    pub const m_radius: usize = 0x7AC; // float
    pub const m_force: usize = 0x7B0; // float
    pub const m_axis: usize = 0x7B4; // Vector
}

pub mod CRagdollManager { // CBaseEntity
    pub const m_iCurrentMaxRagdollCount: usize = 0x7A8; // int8_t
    pub const m_iMaxRagdollCount: usize = 0x7AC; // int32_t
    pub const m_bSaveImportant: usize = 0x7B0; // bool
}

pub mod CRagdollProp { // CBaseAnimGraph
    pub const m_ragdoll: usize = 0xBF8; // ragdoll_t
    pub const m_bStartDisabled: usize = 0xC30; // bool
    pub const m_ragPos: usize = 0xC38; // CNetworkUtlVectorBase<Vector>
    pub const m_ragAngles: usize = 0xC50; // CNetworkUtlVectorBase<QAngle>
    pub const m_hRagdollSource: usize = 0xC68; // CHandle<CBaseEntity>
    pub const m_lastUpdateTickCount: usize = 0xC6C; // uint32_t
    pub const m_allAsleep: usize = 0xC70; // bool
    pub const m_bFirstCollisionAfterLaunch: usize = 0xC71; // bool
    pub const m_hDamageEntity: usize = 0xC74; // CHandle<CBaseEntity>
    pub const m_hKiller: usize = 0xC78; // CHandle<CBaseEntity>
    pub const m_hPhysicsAttacker: usize = 0xC7C; // CHandle<CBasePlayerPawn>
    pub const m_flLastPhysicsInfluenceTime: usize = 0xC80; // GameTime_t
    pub const m_flFadeOutStartTime: usize = 0xC84; // GameTime_t
    pub const m_flFadeTime: usize = 0xC88; // float
    pub const m_vecLastOrigin: usize = 0xC8C; // Vector
    pub const m_flAwakeTime: usize = 0xC98; // GameTime_t
    pub const m_flLastOriginChangeTime: usize = 0xC9C; // GameTime_t
    pub const m_nBloodColor: usize = 0xCA0; // int32_t
    pub const m_strOriginClassName: usize = 0xCA8; // CUtlSymbolLarge
    pub const m_strSourceClassName: usize = 0xCB0; // CUtlSymbolLarge
    pub const m_bHasBeenPhysgunned: usize = 0xCB8; // bool
    pub const m_bShouldTeleportPhysics: usize = 0xCB9; // bool
    pub const m_flBlendWeight: usize = 0xCBC; // float
    pub const m_flDefaultFadeScale: usize = 0xCC0; // float
    pub const m_ragdollMins: usize = 0xCC8; // CUtlVector<Vector>
    pub const m_ragdollMaxs: usize = 0xCE0; // CUtlVector<Vector>
    pub const m_bShouldDeleteActivationRecord: usize = 0xCF8; // bool
    pub const m_bValidatePoweredRagdollPose: usize = 0xD58; // bool
}

pub mod CRagdollPropAlias_physics_prop_ragdoll { // CRagdollProp
}

pub mod CRagdollPropAttached { // CRagdollProp
    pub const m_boneIndexAttached: usize = 0xD98; // uint32_t
    pub const m_ragdollAttachedObjectIndex: usize = 0xD9C; // uint32_t
    pub const m_attachmentPointBoneSpace: usize = 0xDA0; // Vector
    pub const m_attachmentPointRagdollSpace: usize = 0xDAC; // Vector
    pub const m_bShouldDetach: usize = 0xDB8; // bool
    pub const m_bShouldDeleteAttachedActivationRecord: usize = 0xDC8; // bool
}

pub mod CRandSimTimer { // CSimpleSimTimer
    pub const m_minInterval: usize = 0x8; // float
    pub const m_maxInterval: usize = 0xC; // float
}

pub mod CRandStopwatch { // CStopwatchBase
    pub const m_minInterval: usize = 0xC; // float
    pub const m_maxInterval: usize = 0x10; // float
}

pub mod CRangeFloat {
    pub const m_pValue: usize = 0x0; // float[2]
}

pub mod CRangeInt {
    pub const m_pValue: usize = 0x0; // int32_t[2]
}

pub mod CRectLight { // CBarnLight
    pub const m_bShowLight: usize = 0xC20; // bool
}

pub mod CRemapFloat {
    pub const m_pValue: usize = 0x0; // float[4]
}

pub mod CRenderComponent { // CEntityComponent
    pub const __m_pChainEntity: usize = 0x10; // CNetworkVarChainer
    pub const m_bIsRenderingWithViewModels: usize = 0x50; // bool
    pub const m_nSplitscreenFlags: usize = 0x54; // uint32_t
    pub const m_bEnableRendering: usize = 0x60; // bool
    pub const m_bInterpolationReadyToDraw: usize = 0xC0; // bool
}

pub mod CResponseCriteriaSet {
    pub const m_nNumPrefixedContexts: usize = 0x28; // int32_t
    pub const m_bOverrideOnAppend: usize = 0x2C; // bool
}

pub mod CResponseQueue {
    pub const m_ExpresserTargets: usize = 0x48; // CUtlVector<CAI_Expresser*>
}

pub mod CResponseQueue_CDeferredResponse {
    pub const m_contexts: usize = 0x8; // CResponseCriteriaSet
    pub const m_fDispatchTime: usize = 0x38; // float
    pub const m_hIssuer: usize = 0x3C; // CHandle<CBaseEntity>
    pub const m_response: usize = 0x48; // CRR_Response
    pub const m_bResponseValid: usize = 0x228; // bool
}

pub mod CRetakeGameRules {
    pub const m_nMatchSeed: usize = 0xF8; // int32_t
    pub const m_bBlockersPresent: usize = 0xFC; // bool
    pub const m_bRoundInProgress: usize = 0xFD; // bool
    pub const m_iFirstSecondHalfRound: usize = 0x100; // int32_t
    pub const m_iBombSite: usize = 0x104; // int32_t
}

pub mod CRevertSaved { // CModelPointEntity
    pub const m_loadTime: usize = 0x9F8; // float
    pub const m_Duration: usize = 0x9FC; // float
    pub const m_HoldTime: usize = 0xA00; // float
}

pub mod CRopeKeyframe { // CBaseModelEntity
    pub const m_RopeFlags: usize = 0xA00; // uint16_t
    pub const m_iNextLinkName: usize = 0xA08; // CUtlSymbolLarge
    pub const m_Slack: usize = 0xA10; // int16_t
    pub const m_Width: usize = 0xA14; // float
    pub const m_TextureScale: usize = 0xA18; // float
    pub const m_nSegments: usize = 0xA1C; // uint8_t
    pub const m_bConstrainBetweenEndpoints: usize = 0xA1D; // bool
    pub const m_strRopeMaterialModel: usize = 0xA20; // CUtlSymbolLarge
    pub const m_iRopeMaterialModelIndex: usize = 0xA28; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_Subdiv: usize = 0xA30; // uint8_t
    pub const m_nChangeCount: usize = 0xA31; // uint8_t
    pub const m_RopeLength: usize = 0xA32; // int16_t
    pub const m_fLockedPoints: usize = 0xA34; // uint8_t
    pub const m_bCreatedFromMapFile: usize = 0xA35; // bool
    pub const m_flScrollSpeed: usize = 0xA38; // float
    pub const m_bStartPointValid: usize = 0xA3C; // bool
    pub const m_bEndPointValid: usize = 0xA3D; // bool
    pub const m_hStartPoint: usize = 0xA40; // CHandle<CBaseEntity>
    pub const m_hEndPoint: usize = 0xA44; // CHandle<CBaseEntity>
    pub const m_iStartAttachment: usize = 0xA48; // AttachmentHandle_t
    pub const m_iEndAttachment: usize = 0xA49; // AttachmentHandle_t
}

pub mod CRopeKeyframeAlias_move_rope { // CRopeKeyframe
}

pub mod CRopeOverlapHit {
    pub const m_hEntity: usize = 0x0; // CHandle<CBaseEntity>
    pub const m_vecOverlappingLinks: usize = 0x8; // CUtlVector<int32_t>
}

pub mod CRotButton { // CBaseButton
}

pub mod CRotDoor { // CBaseDoor
    pub const m_bSolidBsp: usize = 0xC7B; // bool
}

pub mod CRuleBrushEntity { // CRuleEntity
}

pub mod CRuleEntity { // CBaseModelEntity
    pub const m_iszMaster: usize = 0x9F8; // CUtlSymbolLarge
}

pub mod CRulePointEntity { // CRuleEntity
    pub const m_Score: usize = 0xA00; // int32_t
}

pub mod CSAdditionalMatchStats_t { // CSAdditionalPerRoundStats_t
    pub const m_numRoundsSurvived: usize = 0x14; // int32_t
    pub const m_maxNumRoundsSurvived: usize = 0x18; // int32_t
    pub const m_numRoundsSurvivedTotal: usize = 0x1C; // int32_t
    pub const m_iRoundsWonWithoutPurchase: usize = 0x20; // int32_t
    pub const m_iRoundsWonWithoutPurchaseTotal: usize = 0x24; // int32_t
    pub const m_numFirstKills: usize = 0x28; // int32_t
    pub const m_numClutchKills: usize = 0x2C; // int32_t
    pub const m_numPistolKills: usize = 0x30; // int32_t
    pub const m_numSniperKills: usize = 0x34; // int32_t
    pub const m_iNumSuicides: usize = 0x38; // int32_t
    pub const m_iNumTeamKills: usize = 0x3C; // int32_t
    pub const m_iTeamDamage: usize = 0x40; // int32_t
}

pub mod CSAdditionalPerRoundStats_t {
    pub const m_numChickensKilled: usize = 0x0; // int32_t
    pub const m_killsWhileBlind: usize = 0x4; // int32_t
    pub const m_bombCarrierkills: usize = 0x8; // int32_t
    pub const m_iBurnDamageInflicted: usize = 0xC; // int32_t
    pub const m_iDinks: usize = 0x10; // int32_t
}

pub mod CSMatchStats_t { // CSPerRoundStats_t
    pub const m_iEnemy5Ks: usize = 0x64; // int32_t
    pub const m_iEnemy4Ks: usize = 0x68; // int32_t
    pub const m_iEnemy3Ks: usize = 0x6C; // int32_t
    pub const m_iEnemyKnifeKills: usize = 0x70; // int32_t
    pub const m_iEnemyTaserKills: usize = 0x74; // int32_t
    pub const m_iEnemy2Ks: usize = 0x78; // int32_t
    pub const m_iUtility_Count: usize = 0x7C; // int32_t
    pub const m_iUtility_Successes: usize = 0x80; // int32_t
    pub const m_iUtility_Enemies: usize = 0x84; // int32_t
    pub const m_iFlash_Count: usize = 0x88; // int32_t
    pub const m_iFlash_Successes: usize = 0x8C; // int32_t
    pub const m_nHealthPointsRemovedTotal: usize = 0x90; // int32_t
    pub const m_nHealthPointsDealtTotal: usize = 0x94; // int32_t
    pub const m_nShotsFiredTotal: usize = 0x98; // int32_t
    pub const m_nShotsOnTargetTotal: usize = 0x9C; // int32_t
    pub const m_i1v1Count: usize = 0xA0; // int32_t
    pub const m_i1v1Wins: usize = 0xA4; // int32_t
    pub const m_i1v2Count: usize = 0xA8; // int32_t
    pub const m_i1v2Wins: usize = 0xAC; // int32_t
    pub const m_iEntryCount: usize = 0xB0; // int32_t
    pub const m_iEntryWins: usize = 0xB4; // int32_t
}

pub mod CSPerRoundStats_t {
    pub const m_iKills: usize = 0x30; // int32_t
    pub const m_iDeaths: usize = 0x34; // int32_t
    pub const m_iAssists: usize = 0x38; // int32_t
    pub const m_iDamage: usize = 0x3C; // int32_t
    pub const m_iEquipmentValue: usize = 0x40; // int32_t
    pub const m_iMoneySaved: usize = 0x44; // int32_t
    pub const m_iKillReward: usize = 0x48; // int32_t
    pub const m_iLiveTime: usize = 0x4C; // int32_t
    pub const m_iHeadShotKills: usize = 0x50; // int32_t
    pub const m_iObjective: usize = 0x54; // int32_t
    pub const m_iCashEarned: usize = 0x58; // int32_t
    pub const m_iUtilityDamage: usize = 0x5C; // int32_t
    pub const m_iEnemiesFlashed: usize = 0x60; // int32_t
}

pub mod CSceneEntity { // CPointEntity
    pub const m_iszSceneFile: usize = 0x7B0; // CUtlSymbolLarge
    pub const m_iszResumeSceneFile: usize = 0x7B8; // CUtlSymbolLarge
    pub const m_iszTarget1: usize = 0x7C0; // CUtlSymbolLarge
    pub const m_iszTarget2: usize = 0x7C8; // CUtlSymbolLarge
    pub const m_iszTarget3: usize = 0x7D0; // CUtlSymbolLarge
    pub const m_iszTarget4: usize = 0x7D8; // CUtlSymbolLarge
    pub const m_iszTarget5: usize = 0x7E0; // CUtlSymbolLarge
    pub const m_iszTarget6: usize = 0x7E8; // CUtlSymbolLarge
    pub const m_iszTarget7: usize = 0x7F0; // CUtlSymbolLarge
    pub const m_iszTarget8: usize = 0x7F8; // CUtlSymbolLarge
    pub const m_hTarget1: usize = 0x800; // CHandle<CBaseEntity>
    pub const m_hTarget2: usize = 0x804; // CHandle<CBaseEntity>
    pub const m_hTarget3: usize = 0x808; // CHandle<CBaseEntity>
    pub const m_hTarget4: usize = 0x80C; // CHandle<CBaseEntity>
    pub const m_hTarget5: usize = 0x810; // CHandle<CBaseEntity>
    pub const m_hTarget6: usize = 0x814; // CHandle<CBaseEntity>
    pub const m_hTarget7: usize = 0x818; // CHandle<CBaseEntity>
    pub const m_hTarget8: usize = 0x81C; // CHandle<CBaseEntity>
    pub const m_bIsPlayingBack: usize = 0x820; // bool
    pub const m_bPaused: usize = 0x821; // bool
    pub const m_bMultiplayer: usize = 0x822; // bool
    pub const m_bAutogenerated: usize = 0x823; // bool
    pub const m_flForceClientTime: usize = 0x824; // float
    pub const m_flCurrentTime: usize = 0x828; // float
    pub const m_flFrameTime: usize = 0x82C; // float
    pub const m_bCancelAtNextInterrupt: usize = 0x830; // bool
    pub const m_fPitch: usize = 0x834; // float
    pub const m_bAutomated: usize = 0x838; // bool
    pub const m_nAutomatedAction: usize = 0x83C; // int32_t
    pub const m_flAutomationDelay: usize = 0x840; // float
    pub const m_flAutomationTime: usize = 0x844; // float
    pub const m_hWaitingForThisResumeScene: usize = 0x848; // CHandle<CBaseEntity>
    pub const m_bWaitingForResumeScene: usize = 0x84C; // bool
    pub const m_bPausedViaInput: usize = 0x84D; // bool
    pub const m_bPauseAtNextInterrupt: usize = 0x84E; // bool
    pub const m_bWaitingForActor: usize = 0x84F; // bool
    pub const m_bWaitingForInterrupt: usize = 0x850; // bool
    pub const m_bInterruptedActorsScenes: usize = 0x851; // bool
    pub const m_bBreakOnNonIdle: usize = 0x852; // bool
    pub const m_hActorList: usize = 0x858; // CNetworkUtlVectorBase<CHandle<CBaseFlex>>
    pub const m_hRemoveActorList: usize = 0x870; // CUtlVector<CHandle<CBaseEntity>>
    pub const m_nSceneFlushCounter: usize = 0x8B8; // int32_t
    pub const m_nSceneStringIndex: usize = 0x8BC; // uint16_t
    pub const m_OnStart: usize = 0x8C0; // CEntityIOOutput
    pub const m_OnCompletion: usize = 0x8E8; // CEntityIOOutput
    pub const m_OnCanceled: usize = 0x910; // CEntityIOOutput
    pub const m_OnPaused: usize = 0x938; // CEntityIOOutput
    pub const m_OnResumed: usize = 0x960; // CEntityIOOutput
    pub const m_OnTrigger: usize = 0x988; // CEntityIOOutput[16]
    pub const m_hInterruptScene: usize = 0xC98; // CHandle<CSceneEntity>
    pub const m_nInterruptCount: usize = 0xC9C; // int32_t
    pub const m_bSceneMissing: usize = 0xCA0; // bool
    pub const m_bInterrupted: usize = 0xCA1; // bool
    pub const m_bCompletedEarly: usize = 0xCA2; // bool
    pub const m_bInterruptSceneFinished: usize = 0xCA3; // bool
    pub const m_bRestoring: usize = 0xCA4; // bool
    pub const m_hNotifySceneCompletion: usize = 0xCA8; // CUtlVector<CHandle<CSceneEntity>>
    pub const m_hListManagers: usize = 0xCC0; // CUtlVector<CHandle<CSceneListManager>>
    pub const m_iszSoundName: usize = 0xCD8; // CUtlSymbolLarge
    pub const m_iszSequenceName: usize = 0xCE0; // CUtlSymbolLarge
    pub const m_hActor: usize = 0xCE8; // CHandle<CBaseFlex>
    pub const m_hActivator: usize = 0xCEC; // CHandle<CBaseEntity>
    pub const m_BusyActor: usize = 0xCF0; // int32_t
    pub const m_iPlayerDeathBehavior: usize = 0xCF4; // SceneOnPlayerDeath_t
}

pub mod CSceneEntityAlias_logic_choreographed_scene { // CSceneEntity
}

pub mod CSceneEventInfo {
    pub const m_iLayer: usize = 0x0; // int32_t
    pub const m_iPriority: usize = 0x4; // int32_t
    pub const m_hSequence: usize = 0x8; // HSequence
    pub const m_flWeight: usize = 0xC; // float
    pub const m_bHasArrived: usize = 0x10; // bool
    pub const m_nType: usize = 0x14; // int32_t
    pub const m_flNext: usize = 0x18; // GameTime_t
    pub const m_bIsGesture: usize = 0x1C; // bool
    pub const m_bShouldRemove: usize = 0x1D; // bool
    pub const m_hTarget: usize = 0x44; // CHandle<CBaseEntity>
    pub const m_nSceneEventId: usize = 0x48; // uint32_t
    pub const m_bClientSide: usize = 0x4C; // bool
    pub const m_bStarted: usize = 0x4D; // bool
}

pub mod CSceneListManager { // CLogicalEntity
    pub const m_hListManagers: usize = 0x7A8; // CUtlVector<CHandle<CSceneListManager>>
    pub const m_iszScenes: usize = 0x7C0; // CUtlSymbolLarge[16]
    pub const m_hScenes: usize = 0x840; // CHandle<CBaseEntity>[16]
}

pub mod CScriptComponent { // CEntityComponent
    pub const m_scriptClassName: usize = 0x30; // CUtlSymbolLarge
}

pub mod CScriptItem { // CItem
    pub const m_OnPlayerPickup: usize = 0xCC8; // CEntityIOOutput
    pub const m_MoveTypeOverride: usize = 0xCF0; // MoveType_t
}

pub mod CScriptNavBlocker { // CFuncNavBlocker
    pub const m_vExtent: usize = 0xA08; // Vector
}

pub mod CScriptTriggerHurt { // CTriggerHurt
    pub const m_vExtent: usize = 0xC38; // Vector
}

pub mod CScriptTriggerMultiple { // CTriggerMultiple
    pub const m_vExtent: usize = 0xBC8; // Vector
}

pub mod CScriptTriggerOnce { // CTriggerOnce
    pub const m_vExtent: usize = 0xBC8; // Vector
}

pub mod CScriptTriggerPush { // CTriggerPush
    pub const m_vExtent: usize = 0xBB8; // Vector
}

pub mod CScriptUniformRandomStream {
    pub const m_hScriptScope: usize = 0x8; // HSCRIPT
    pub const m_nInitialSeed: usize = 0x9C; // int32_t
}

pub mod CScriptedSequence { // CBaseEntity
    pub const m_iszEntry: usize = 0x7A8; // CUtlSymbolLarge
    pub const m_iszPreIdle: usize = 0x7B0; // CUtlSymbolLarge
    pub const m_iszPlay: usize = 0x7B8; // CUtlSymbolLarge
    pub const m_iszPostIdle: usize = 0x7C0; // CUtlSymbolLarge
    pub const m_iszModifierToAddOnPlay: usize = 0x7C8; // CUtlSymbolLarge
    pub const m_iszNextScript: usize = 0x7D0; // CUtlSymbolLarge
    pub const m_iszEntity: usize = 0x7D8; // CUtlSymbolLarge
    pub const m_iszSyncGroup: usize = 0x7E0; // CUtlSymbolLarge
    pub const m_nMoveTo: usize = 0x7E8; // ScriptedMoveTo_t
    pub const m_bIsPlayingPreIdle: usize = 0x7EC; // bool
    pub const m_bIsPlayingEntry: usize = 0x7ED; // bool
    pub const m_bIsPlayingAction: usize = 0x7EE; // bool
    pub const m_bIsPlayingPostIdle: usize = 0x7EF; // bool
    pub const m_bLoopPreIdleSequence: usize = 0x7F0; // bool
    pub const m_bLoopActionSequence: usize = 0x7F1; // bool
    pub const m_bLoopPostIdleSequence: usize = 0x7F2; // bool
    pub const m_bSynchPostIdles: usize = 0x7F3; // bool
    pub const m_bIgnoreLookAt: usize = 0x7F4; // bool
    pub const m_bIgnoreGravity: usize = 0x7F5; // bool
    pub const m_bDisableNPCCollisions: usize = 0x7F6; // bool
    pub const m_bKeepAnimgraphLockedPost: usize = 0x7F7; // bool
    pub const m_bDontAddModifiers: usize = 0x7F8; // bool
    pub const m_flRadius: usize = 0x7FC; // float
    pub const m_flRepeat: usize = 0x800; // float
    pub const m_flPlayAnimFadeInTime: usize = 0x804; // float
    pub const m_flMoveInterpTime: usize = 0x808; // float
    pub const m_flAngRate: usize = 0x80C; // float
    pub const m_nNotReadySequenceCount: usize = 0x810; // int32_t
    pub const m_startTime: usize = 0x814; // GameTime_t
    pub const m_bWaitForBeginSequence: usize = 0x818; // bool
    pub const m_saved_effects: usize = 0x81C; // int32_t
    pub const m_savedFlags: usize = 0x820; // int32_t
    pub const m_savedCollisionGroup: usize = 0x824; // int32_t
    pub const m_interruptable: usize = 0x828; // bool
    pub const m_sequenceStarted: usize = 0x829; // bool
    pub const m_bPositionRelativeToOtherEntity: usize = 0x82A; // bool
    pub const m_hTargetEnt: usize = 0x82C; // CHandle<CBaseEntity>
    pub const m_hNextCine: usize = 0x830; // CHandle<CScriptedSequence>
    pub const m_bThinking: usize = 0x834; // bool
    pub const m_bInitiatedSelfDelete: usize = 0x835; // bool
    pub const m_bIsTeleportingDueToMoveTo: usize = 0x836; // bool
    pub const m_bAllowCustomInterruptConditions: usize = 0x837; // bool
    pub const m_hLastFoundEntity: usize = 0x838; // CHandle<CBaseEntity>
    pub const m_hForcedTarget: usize = 0x83C; // CHandle<CBaseAnimGraph>
    pub const m_bDontCancelOtherSequences: usize = 0x840; // bool
    pub const m_bForceSynch: usize = 0x841; // bool
    pub const m_bPreventUpdateYawOnFinish: usize = 0x842; // bool
    pub const m_bEnsureOnNavmeshOnFinish: usize = 0x843; // bool
    pub const m_onDeathBehavior: usize = 0x844; // ScriptedOnDeath_t
    pub const m_ConflictResponse: usize = 0x848; // ScriptedConflictResponse_t
    pub const m_OnBeginSequence: usize = 0x850; // CEntityIOOutput
    pub const m_OnActionStartOrLoop: usize = 0x878; // CEntityIOOutput
    pub const m_OnEndSequence: usize = 0x8A0; // CEntityIOOutput
    pub const m_OnPostIdleEndSequence: usize = 0x8C8; // CEntityIOOutput
    pub const m_OnCancelSequence: usize = 0x8F0; // CEntityIOOutput
    pub const m_OnCancelFailedSequence: usize = 0x918; // CEntityIOOutput
    pub const m_OnScriptEvent: usize = 0x940; // CEntityIOOutput[8]
    pub const m_matOtherToMain: usize = 0xA80; // CTransform
    pub const m_hInteractionMainEntity: usize = 0xAA0; // CHandle<CBaseEntity>
    pub const m_iPlayerDeathBehavior: usize = 0xAA4; // int32_t
}

pub mod CSensorGrenade { // CBaseCSGrenade
}

pub mod CSensorGrenadeProjectile { // CBaseCSGrenadeProjectile
    pub const m_fExpireTime: usize = 0xD98; // GameTime_t
    pub const m_fNextDetectPlayerSound: usize = 0xD9C; // GameTime_t
    pub const m_hDisplayGrenade: usize = 0xDA0; // CHandle<CBaseEntity>
}

pub mod CServerOnlyEntity { // CBaseEntity
}

pub mod CServerOnlyModelEntity { // CBaseModelEntity
}

pub mod CServerOnlyPointEntity { // CServerOnlyEntity
}

pub mod CServerRagdollTrigger { // CBaseTrigger
}

pub mod CShatterGlassShard {
    pub const m_hShardHandle: usize = 0x8; // uint32_t
    pub const m_vecPanelVertices: usize = 0x10; // CUtlVector<Vector2D>
    pub const m_vLocalPanelSpaceOrigin: usize = 0x28; // Vector2D
    pub const m_hModel: usize = 0x30; // CStrongHandle<InfoForResourceTypeCModel>
    pub const m_hPhysicsEntity: usize = 0x38; // CHandle<CShatterGlassShardPhysics>
    pub const m_hParentPanel: usize = 0x3C; // CHandle<CFuncShatterglass>
    pub const m_hParentShard: usize = 0x40; // uint32_t
    pub const m_ShatterStressType: usize = 0x44; // ShatterGlassStressType
    pub const m_vecStressVelocity: usize = 0x48; // Vector
    pub const m_bCreatedModel: usize = 0x54; // bool
    pub const m_flLongestEdge: usize = 0x58; // float
    pub const m_flShortestEdge: usize = 0x5C; // float
    pub const m_flLongestAcross: usize = 0x60; // float
    pub const m_flShortestAcross: usize = 0x64; // float
    pub const m_flSumOfAllEdges: usize = 0x68; // float
    pub const m_flArea: usize = 0x6C; // float
    pub const m_nOnFrameEdge: usize = 0x70; // OnFrame
    pub const m_nParentPanelsNthShard: usize = 0x74; // int32_t
    pub const m_nSubShardGeneration: usize = 0x78; // int32_t
    pub const m_vecAverageVertPosition: usize = 0x7C; // Vector2D
    pub const m_bAverageVertPositionIsValid: usize = 0x84; // bool
    pub const m_vecPanelSpaceStressPositionA: usize = 0x88; // Vector2D
    pub const m_vecPanelSpaceStressPositionB: usize = 0x90; // Vector2D
    pub const m_bStressPositionAIsValid: usize = 0x98; // bool
    pub const m_bStressPositionBIsValid: usize = 0x99; // bool
    pub const m_bFlaggedForRemoval: usize = 0x9A; // bool
    pub const m_flPhysicsEntitySpawnedAtTime: usize = 0x9C; // GameTime_t
    pub const m_bShatterRateLimited: usize = 0xA0; // bool
    pub const m_hEntityHittingMe: usize = 0xA4; // CHandle<CBaseEntity>
    pub const m_vecNeighbors: usize = 0xA8; // CUtlVector<uint32_t>
}

pub mod CShatterGlassShardPhysics { // CPhysicsProp
    pub const m_bDebris: usize = 0xED4; // bool
    pub const m_hParentShard: usize = 0xED8; // uint32_t
    pub const m_ShardDesc: usize = 0xEE0; // shard_model_desc_t
}

pub mod CShower { // CModelPointEntity
}

pub mod CSimTimer { // CSimpleSimTimer
    pub const m_interval: usize = 0x8; // float
}

pub mod CSimpleMarkupVolumeTagged { // CMarkupVolumeTagged
}

pub mod CSimpleSimTimer {
    pub const m_next: usize = 0x0; // GameTime_t
    pub const m_nWorldGroupId: usize = 0x4; // WorldGroupId_t
}

pub mod CSimpleStopwatch { // CStopwatchBase
}

pub mod CSingleplayRules { // CGameRules
    pub const m_bSinglePlayerGameEnding: usize = 0x8C; // bool
}

pub mod CSkeletonAnimationController { // ISkeletonAnimationController
    pub const m_pSkeletonInstance: usize = 0x8; // CSkeletonInstance*
}

pub mod CSkeletonInstance { // CGameSceneNode
    pub const m_modelState: usize = 0x160; // CModelState
    pub const m_bIsAnimationEnabled: usize = 0x380; // bool
    pub const m_bUseParentRenderBounds: usize = 0x381; // bool
    pub const m_bDisableSolidCollisionsForHierarchy: usize = 0x382; // bool
    pub const m_bDirtyMotionType: usize = 0x0; // bitfield:1
    pub const m_bIsGeneratingLatchedParentSpaceState: usize = 0x0; // bitfield:1
    pub const m_materialGroup: usize = 0x384; // CUtlStringToken
    pub const m_nHitboxSet: usize = 0x388; // uint8_t
}

pub mod CSkillDamage {
    pub const m_flDamage: usize = 0x0; // CSkillFloat
    pub const m_flPhysicsForceDamage: usize = 0x10; // float
}

pub mod CSkillFloat {
    pub const m_pValue: usize = 0x0; // float[4]
}

pub mod CSkillInt {
    pub const m_pValue: usize = 0x0; // int32_t[4]
}

pub mod CSkyCamera { // CBaseEntity
    pub const m_skyboxData: usize = 0x7A8; // sky3dparams_t
    pub const m_skyboxSlotToken: usize = 0x838; // CUtlStringToken
    pub const m_bUseAngles: usize = 0x83C; // bool
    pub const m_pNext: usize = 0x840; // CSkyCamera*
}

pub mod CSkyboxReference { // CBaseEntity
    pub const m_worldGroupId: usize = 0x7A8; // WorldGroupId_t
    pub const m_hSkyCamera: usize = 0x7AC; // CHandle<CSkyCamera>
}

pub mod CSmokeGrenade { // CBaseCSGrenade
}

pub mod CSmokeGrenadeProjectile { // CBaseCSGrenadeProjectile
    pub const m_nSmokeEffectTickBegin: usize = 0xDB0; // int32_t
    pub const m_bDidSmokeEffect: usize = 0xDB4; // bool
    pub const m_nRandomSeed: usize = 0xDB8; // int32_t
    pub const m_vSmokeColor: usize = 0xDBC; // Vector
    pub const m_vSmokeDetonationPos: usize = 0xDC8; // Vector
    pub const m_VoxelFrameData: usize = 0xDD8; // CUtlVector<uint8_t>
    pub const m_flLastBounce: usize = 0xDF0; // GameTime_t
    pub const m_fllastSimulationTime: usize = 0xDF4; // GameTime_t
}

pub mod CSmoothFunc {
    pub const m_flSmoothAmplitude: usize = 0x8; // float
    pub const m_flSmoothBias: usize = 0xC; // float
    pub const m_flSmoothDuration: usize = 0x10; // float
    pub const m_flSmoothRemainingTime: usize = 0x14; // float
    pub const m_nSmoothDir: usize = 0x18; // int32_t
}

pub mod CSound {
    pub const m_hOwner: usize = 0x0; // CHandle<CBaseEntity>
    pub const m_hTarget: usize = 0x4; // CHandle<CBaseEntity>
    pub const m_iVolume: usize = 0x8; // int32_t
    pub const m_flOcclusionScale: usize = 0xC; // float
    pub const m_iType: usize = 0x10; // int32_t
    pub const m_iNextAudible: usize = 0x14; // int32_t
    pub const m_flExpireTime: usize = 0x18; // GameTime_t
    pub const m_iNext: usize = 0x1C; // int16_t
    pub const m_bNoExpirationTime: usize = 0x1E; // bool
    pub const m_ownerChannelIndex: usize = 0x20; // int32_t
    pub const m_vecOrigin: usize = 0x24; // Vector
    pub const m_bHasOwner: usize = 0x30; // bool
}

pub mod CSoundAreaEntityBase { // CBaseEntity
    pub const m_bDisabled: usize = 0x7A8; // bool
    pub const m_iszSoundAreaType: usize = 0x7B0; // CUtlSymbolLarge
    pub const m_vPos: usize = 0x7B8; // Vector
}

pub mod CSoundAreaEntityOrientedBox { // CSoundAreaEntityBase
    pub const m_vMin: usize = 0x7C4; // Vector
    pub const m_vMax: usize = 0x7D0; // Vector
}

pub mod CSoundAreaEntitySphere { // CSoundAreaEntityBase
    pub const m_flRadius: usize = 0x7C4; // float
}

pub mod CSoundEnt { // CPointEntity
    pub const m_iFreeSound: usize = 0x7A8; // int32_t
    pub const m_iActiveSound: usize = 0x7AC; // int32_t
    pub const m_cLastActiveSounds: usize = 0x7B0; // int32_t
    pub const m_SoundPool: usize = 0x7B4; // CSound[128]
}

pub mod CSoundEnvelope {
    pub const m_current: usize = 0x0; // float
    pub const m_target: usize = 0x4; // float
    pub const m_rate: usize = 0x8; // float
    pub const m_forceupdate: usize = 0xC; // bool
}

pub mod CSoundEventAABBEntity { // CSoundEventEntity
    pub const m_vMins: usize = 0x84C; // Vector
    pub const m_vMaxs: usize = 0x858; // Vector
}

pub mod CSoundEventEntity { // CBaseEntity
    pub const m_bStartOnSpawn: usize = 0x7A8; // bool
    pub const m_bToLocalPlayer: usize = 0x7A9; // bool
    pub const m_bStopOnNew: usize = 0x7AA; // bool
    pub const m_bSaveRestore: usize = 0x7AB; // bool
    pub const m_bSavedIsPlaying: usize = 0x7AC; // bool
    pub const m_flSavedElapsedTime: usize = 0x7B0; // float
    pub const m_iszSourceEntityName: usize = 0x7B8; // CUtlSymbolLarge
    pub const m_iszAttachmentName: usize = 0x7C0; // CUtlSymbolLarge
    pub const m_onGUIDChanged: usize = 0x7C8; // CEntityOutputTemplate<uint64_t>
    pub const m_onSoundFinished: usize = 0x7F0; // CEntityIOOutput
    pub const m_iszSoundName: usize = 0x838; // CUtlSymbolLarge
    pub const m_hSource: usize = 0x848; // CEntityHandle
}

pub mod CSoundEventEntityAlias_snd_event_point { // CSoundEventEntity
}

pub mod CSoundEventOBBEntity { // CSoundEventEntity
    pub const m_vMins: usize = 0x84C; // Vector
    pub const m_vMaxs: usize = 0x858; // Vector
}

pub mod CSoundEventParameter { // CBaseEntity
    pub const m_iszParamName: usize = 0x7B0; // CUtlSymbolLarge
    pub const m_flFloatValue: usize = 0x7B8; // float
}

pub mod CSoundEventPathCornerEntity { // CSoundEventEntity
    pub const m_iszPathCorner: usize = 0x850; // CUtlSymbolLarge
    pub const m_iCountMax: usize = 0x858; // int32_t
    pub const m_flDistanceMax: usize = 0x85C; // float
    pub const m_flDistMaxSqr: usize = 0x860; // float
    pub const m_flDotProductMax: usize = 0x864; // float
    pub const bPlaying: usize = 0x868; // bool
}

pub mod CSoundOpvarSetAABBEntity { // CSoundOpvarSetPointEntity
    pub const m_vDistanceInnerMins: usize = 0x94C; // Vector
    pub const m_vDistanceInnerMaxs: usize = 0x958; // Vector
    pub const m_vDistanceOuterMins: usize = 0x964; // Vector
    pub const m_vDistanceOuterMaxs: usize = 0x970; // Vector
    pub const m_nAABBDirection: usize = 0x97C; // int32_t
    pub const m_vInnerMins: usize = 0x980; // Vector
    pub const m_vInnerMaxs: usize = 0x98C; // Vector
    pub const m_vOuterMins: usize = 0x998; // Vector
    pub const m_vOuterMaxs: usize = 0x9A4; // Vector
}

pub mod CSoundOpvarSetAutoRoomEntity { // CSoundOpvarSetPointEntity
    pub const m_traceResults: usize = 0x950; // CUtlVector<SoundOpvarTraceResult_t>
    pub const m_flSize: usize = 0x980; // float
    pub const m_flHeightTolerance: usize = 0x984; // float
    pub const m_flSizeSqr: usize = 0x988; // float
}

pub mod CSoundOpvarSetEntity { // CBaseEntity
    pub const m_iszStackName: usize = 0x7B0; // CUtlSymbolLarge
    pub const m_iszOperatorName: usize = 0x7B8; // CUtlSymbolLarge
    pub const m_iszOpvarName: usize = 0x7C0; // CUtlSymbolLarge
    pub const m_nOpvarType: usize = 0x7C8; // int32_t
    pub const m_nOpvarIndex: usize = 0x7CC; // int32_t
    pub const m_flOpvarValue: usize = 0x7D0; // float
    pub const m_OpvarValueString: usize = 0x7D8; // CUtlSymbolLarge
    pub const m_bSetOnSpawn: usize = 0x7E0; // bool
}

pub mod CSoundOpvarSetOBBEntity { // CSoundOpvarSetAABBEntity
}

pub mod CSoundOpvarSetOBBWindEntity { // CSoundOpvarSetPointBase
    pub const m_vMins: usize = 0x840; // Vector
    pub const m_vMaxs: usize = 0x84C; // Vector
    pub const m_vDistanceMins: usize = 0x858; // Vector
    pub const m_vDistanceMaxs: usize = 0x864; // Vector
    pub const m_flWindMin: usize = 0x870; // float
    pub const m_flWindMax: usize = 0x874; // float
    pub const m_flWindMapMin: usize = 0x878; // float
    pub const m_flWindMapMax: usize = 0x87C; // float
}

pub mod CSoundOpvarSetPathCornerEntity { // CSoundOpvarSetPointEntity
    pub const m_flDistMinSqr: usize = 0x968; // float
    pub const m_flDistMaxSqr: usize = 0x96C; // float
    pub const m_iszPathCornerEntityName: usize = 0x970; // CUtlSymbolLarge
}

pub mod CSoundOpvarSetPointBase { // CBaseEntity
    pub const m_bDisabled: usize = 0x7A8; // bool
    pub const m_hSource: usize = 0x7AC; // CEntityHandle
    pub const m_iszSourceEntityName: usize = 0x7B8; // CUtlSymbolLarge
    pub const m_vLastPosition: usize = 0x810; // Vector
    pub const m_iszStackName: usize = 0x820; // CUtlSymbolLarge
    pub const m_iszOperatorName: usize = 0x828; // CUtlSymbolLarge
    pub const m_iszOpvarName: usize = 0x830; // CUtlSymbolLarge
    pub const m_iOpvarIndex: usize = 0x838; // int32_t
    pub const m_bUseAutoCompare: usize = 0x83C; // bool
}

pub mod CSoundOpvarSetPointEntity { // CSoundOpvarSetPointBase
    pub const m_OnEnter: usize = 0x840; // CEntityIOOutput
    pub const m_OnExit: usize = 0x868; // CEntityIOOutput
    pub const m_bAutoDisable: usize = 0x890; // bool
    pub const m_flDistanceMin: usize = 0x8D4; // float
    pub const m_flDistanceMax: usize = 0x8D8; // float
    pub const m_flDistanceMapMin: usize = 0x8DC; // float
    pub const m_flDistanceMapMax: usize = 0x8E0; // float
    pub const m_flOcclusionRadius: usize = 0x8E4; // float
    pub const m_flOcclusionMin: usize = 0x8E8; // float
    pub const m_flOcclusionMax: usize = 0x8EC; // float
    pub const m_flValSetOnDisable: usize = 0x8F0; // float
    pub const m_bSetValueOnDisable: usize = 0x8F4; // bool
    pub const m_nSimulationMode: usize = 0x8F8; // int32_t
    pub const m_nVisibilitySamples: usize = 0x8FC; // int32_t
    pub const m_vDynamicProxyPoint: usize = 0x900; // Vector
    pub const m_flDynamicMaximumOcclusion: usize = 0x90C; // float
    pub const m_hDynamicEntity: usize = 0x910; // CEntityHandle
    pub const m_iszDynamicEntityName: usize = 0x918; // CUtlSymbolLarge
    pub const m_flPathingDistanceNormFactor: usize = 0x920; // float
    pub const m_vPathingSourcePos: usize = 0x924; // Vector
    pub const m_vPathingListenerPos: usize = 0x930; // Vector
    pub const m_vPathingDirection: usize = 0x93C; // Vector
    pub const m_nPathingSourceIndex: usize = 0x948; // int32_t
}

pub mod CSoundPatch {
    pub const m_pitch: usize = 0x8; // CSoundEnvelope
    pub const m_volume: usize = 0x18; // CSoundEnvelope
    pub const m_shutdownTime: usize = 0x30; // float
    pub const m_flLastTime: usize = 0x34; // float
    pub const m_iszSoundScriptName: usize = 0x38; // CUtlSymbolLarge
    pub const m_hEnt: usize = 0x40; // CHandle<CBaseEntity>
    pub const m_soundEntityIndex: usize = 0x44; // CEntityIndex
    pub const m_soundOrigin: usize = 0x48; // Vector
    pub const m_isPlaying: usize = 0x54; // int32_t
    pub const m_Filter: usize = 0x58; // CCopyRecipientFilter
    pub const m_flCloseCaptionDuration: usize = 0x80; // float
    pub const m_bUpdatedSoundOrigin: usize = 0x84; // bool
    pub const m_iszClassName: usize = 0x88; // CUtlSymbolLarge
}

pub mod CSoundStackSave { // CLogicalEntity
    pub const m_iszStackName: usize = 0x7A8; // CUtlSymbolLarge
}

pub mod CSplineConstraint { // CPhysConstraint
}

pub mod CSpotlightEnd { // CBaseModelEntity
    pub const m_flLightScale: usize = 0x9F8; // float
    pub const m_Radius: usize = 0x9FC; // float
    pub const m_vSpotlightDir: usize = 0xA00; // Vector
    pub const m_vSpotlightOrg: usize = 0xA0C; // Vector
}

pub mod CSprite { // CBaseModelEntity
    pub const m_hSpriteMaterial: usize = 0x9F8; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_hAttachedToEntity: usize = 0xA00; // CHandle<CBaseEntity>
    pub const m_nAttachment: usize = 0xA04; // AttachmentHandle_t
    pub const m_flSpriteFramerate: usize = 0xA08; // float
    pub const m_flFrame: usize = 0xA0C; // float
    pub const m_flDieTime: usize = 0xA10; // GameTime_t
    pub const m_nBrightness: usize = 0xA20; // uint32_t
    pub const m_flBrightnessDuration: usize = 0xA24; // float
    pub const m_flSpriteScale: usize = 0xA28; // float
    pub const m_flScaleDuration: usize = 0xA2C; // float
    pub const m_bWorldSpaceScale: usize = 0xA30; // bool
    pub const m_flGlowProxySize: usize = 0xA34; // float
    pub const m_flHDRColorScale: usize = 0xA38; // float
    pub const m_flLastTime: usize = 0xA3C; // GameTime_t
    pub const m_flMaxFrame: usize = 0xA40; // float
    pub const m_flStartScale: usize = 0xA44; // float
    pub const m_flDestScale: usize = 0xA48; // float
    pub const m_flScaleTimeStart: usize = 0xA4C; // GameTime_t
    pub const m_nStartBrightness: usize = 0xA50; // int32_t
    pub const m_nDestBrightness: usize = 0xA54; // int32_t
    pub const m_flBrightnessTimeStart: usize = 0xA58; // GameTime_t
    pub const m_nSpriteWidth: usize = 0xA5C; // int32_t
    pub const m_nSpriteHeight: usize = 0xA60; // int32_t
}

pub mod CSpriteAlias_env_glow { // CSprite
}

pub mod CSpriteOriented { // CSprite
}

pub mod CStopwatch { // CStopwatchBase
    pub const m_interval: usize = 0xC; // float
}

pub mod CStopwatchBase { // CSimpleSimTimer
    pub const m_fIsRunning: usize = 0x8; // bool
}

pub mod CSun { // CBaseModelEntity
    pub const m_vDirection: usize = 0x9F8; // Vector
    pub const m_clrOverlay: usize = 0xA04; // Color
    pub const m_iszEffectName: usize = 0xA08; // CUtlSymbolLarge
    pub const m_iszSSEffectName: usize = 0xA10; // CUtlSymbolLarge
    pub const m_bOn: usize = 0xA18; // bool
    pub const m_bmaxColor: usize = 0xA19; // bool
    pub const m_flSize: usize = 0xA1C; // float
    pub const m_flRotation: usize = 0xA20; // float
    pub const m_flHazeScale: usize = 0xA24; // float
    pub const m_flAlphaHaze: usize = 0xA28; // float
    pub const m_flAlphaHdr: usize = 0xA2C; // float
    pub const m_flAlphaScale: usize = 0xA30; // float
    pub const m_flHDRColorScale: usize = 0xA34; // float
    pub const m_flFarZScale: usize = 0xA38; // float
}

pub mod CTablet { // CCSWeaponBase
}

pub mod CTakeDamageInfo {
    pub const m_vecDamageForce: usize = 0x8; // Vector
    pub const m_vecDamagePosition: usize = 0x14; // Vector
    pub const m_vecReportedPosition: usize = 0x20; // Vector
    pub const m_vecDamageDirection: usize = 0x2C; // Vector
    pub const m_hInflictor: usize = 0x38; // CHandle<CBaseEntity>
    pub const m_hAttacker: usize = 0x3C; // CHandle<CBaseEntity>
    pub const m_hAbility: usize = 0x40; // CHandle<CBaseEntity>
    pub const m_flDamage: usize = 0x44; // float
    pub const m_bitsDamageType: usize = 0x48; // int32_t
    pub const m_iDamageCustom: usize = 0x4C; // int32_t
    pub const m_iAmmoType: usize = 0x50; // AmmoIndex_t
    pub const m_flOriginalDamage: usize = 0x60; // float
    pub const m_bShouldBleed: usize = 0x64; // bool
    pub const m_bShouldSpark: usize = 0x65; // bool
    pub const m_nDamageFlags: usize = 0x70; // TakeDamageFlags_t
    pub const m_nNumObjectsPenetrated: usize = 0x74; // int32_t
    pub const m_hScriptInstance: usize = 0x78; // HSCRIPT
    pub const m_bInTakeDamageFlow: usize = 0x94; // bool
}

pub mod CTakeDamageInfoAPI {
}

pub mod CTakeDamageResult {
    pub const m_nHealthLost: usize = 0x0; // int32_t
    pub const m_nDamageTaken: usize = 0x4; // int32_t
}

pub mod CTakeDamageSummaryScopeGuard {
    pub const m_vecSummaries: usize = 0x8; // CUtlVector<SummaryTakeDamageInfo_t*>
}

pub mod CTankTargetChange { // CPointEntity
    pub const m_newTarget: usize = 0x7A8; // CVariantBase<CVariantDefaultAllocator>
    pub const m_newTargetName: usize = 0x7B8; // CUtlSymbolLarge
}

pub mod CTankTrainAI { // CPointEntity
    pub const m_hTrain: usize = 0x7A8; // CHandle<CFuncTrackTrain>
    pub const m_hTargetEntity: usize = 0x7AC; // CHandle<CBaseEntity>
    pub const m_soundPlaying: usize = 0x7B0; // int32_t
    pub const m_startSoundName: usize = 0x7C8; // CUtlSymbolLarge
    pub const m_engineSoundName: usize = 0x7D0; // CUtlSymbolLarge
    pub const m_movementSoundName: usize = 0x7D8; // CUtlSymbolLarge
    pub const m_targetEntityName: usize = 0x7E0; // CUtlSymbolLarge
}

pub mod CTeam { // CBaseEntity
    pub const m_aPlayerControllers: usize = 0x7A8; // CNetworkUtlVectorBase<CHandle<CBasePlayerController>>
    pub const m_aPlayers: usize = 0x7C0; // CNetworkUtlVectorBase<CHandle<CBasePlayerPawn>>
    pub const m_iScore: usize = 0x7D8; // int32_t
    pub const m_szTeamname: usize = 0x7DC; // char[129]
}

pub mod CTeamplayRules { // CMultiplayRules
}

pub mod CTestEffect { // CBaseEntity
    pub const m_iLoop: usize = 0x7A8; // int32_t
    pub const m_iBeam: usize = 0x7AC; // int32_t
    pub const m_pBeam: usize = 0x7B0; // CBeam*[24]
    pub const m_flBeamTime: usize = 0x870; // GameTime_t[24]
    pub const m_flStartTime: usize = 0x8D0; // GameTime_t
}

pub mod CTextureBasedAnimatable { // CBaseModelEntity
    pub const m_bLoop: usize = 0x9F8; // bool
    pub const m_flFPS: usize = 0x9FC; // float
    pub const m_hPositionKeys: usize = 0xA00; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_hRotationKeys: usize = 0xA08; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_vAnimationBoundsMin: usize = 0xA10; // Vector
    pub const m_vAnimationBoundsMax: usize = 0xA1C; // Vector
    pub const m_flStartTime: usize = 0xA28; // float
    pub const m_flStartFrame: usize = 0xA2C; // float
}

pub mod CTimeline { // IntervalTimer
    pub const m_flValues: usize = 0x10; // float[64]
    pub const m_nValueCounts: usize = 0x110; // int32_t[64]
    pub const m_nBucketCount: usize = 0x210; // int32_t
    pub const m_flInterval: usize = 0x214; // float
    pub const m_flFinalValue: usize = 0x218; // float
    pub const m_nCompressionType: usize = 0x21C; // TimelineCompression_t
    pub const m_bStopped: usize = 0x220; // bool
}

pub mod CTimerEntity { // CLogicalEntity
    pub const m_OnTimer: usize = 0x7A8; // CEntityIOOutput
    pub const m_OnTimerHigh: usize = 0x7D0; // CEntityIOOutput
    pub const m_OnTimerLow: usize = 0x7F8; // CEntityIOOutput
    pub const m_iDisabled: usize = 0x820; // int32_t
    pub const m_flInitialDelay: usize = 0x824; // float
    pub const m_flRefireTime: usize = 0x828; // float
    pub const m_bUpDownState: usize = 0x82C; // bool
    pub const m_iUseRandomTime: usize = 0x830; // int32_t
    pub const m_bPauseAfterFiring: usize = 0x834; // bool
    pub const m_flLowerRandomBound: usize = 0x838; // float
    pub const m_flUpperRandomBound: usize = 0x83C; // float
    pub const m_flRemainingTime: usize = 0x840; // float
    pub const m_bPaused: usize = 0x844; // bool
}

pub mod CTonemapController2 { // CBaseEntity
    pub const m_flAutoExposureMin: usize = 0x7A8; // float
    pub const m_flAutoExposureMax: usize = 0x7AC; // float
    pub const m_flTonemapPercentTarget: usize = 0x7B0; // float
    pub const m_flTonemapPercentBrightPixels: usize = 0x7B4; // float
    pub const m_flTonemapMinAvgLum: usize = 0x7B8; // float
    pub const m_flExposureAdaptationSpeedUp: usize = 0x7BC; // float
    pub const m_flExposureAdaptationSpeedDown: usize = 0x7C0; // float
    pub const m_flTonemapEVSmoothingRange: usize = 0x7C4; // float
}

pub mod CTonemapController2Alias_env_tonemap_controller2 { // CTonemapController2
}

pub mod CTonemapTrigger { // CBaseTrigger
    pub const m_tonemapControllerName: usize = 0xBA0; // CUtlSymbolLarge
    pub const m_hTonemapController: usize = 0xBA8; // CEntityHandle
}

pub mod CTouchExpansionComponent { // CEntityComponent
}

pub mod CTriggerActiveWeaponDetect { // CBaseTrigger
    pub const m_OnTouchedActiveWeapon: usize = 0xBA0; // CEntityIOOutput
    pub const m_iszWeaponClassName: usize = 0xBC8; // CUtlSymbolLarge
}

pub mod CTriggerBombReset { // CBaseTrigger
}

pub mod CTriggerBrush { // CBaseModelEntity
    pub const m_OnStartTouch: usize = 0x9F8; // CEntityIOOutput
    pub const m_OnEndTouch: usize = 0xA20; // CEntityIOOutput
    pub const m_OnUse: usize = 0xA48; // CEntityIOOutput
    pub const m_iInputFilter: usize = 0xA70; // int32_t
    pub const m_iDontMessageParent: usize = 0xA74; // int32_t
}

pub mod CTriggerBuoyancy { // CBaseTrigger
    pub const m_BuoyancyHelper: usize = 0xBA0; // CBuoyancyHelper
    pub const m_flFluidDensity: usize = 0xBC0; // float
}

pub mod CTriggerCallback { // CBaseTrigger
}

pub mod CTriggerDetectBulletFire { // CBaseTrigger
    pub const m_bPlayerFireOnly: usize = 0xB99; // bool
    pub const m_OnDetectedBulletFire: usize = 0xBA0; // CEntityIOOutput
}

pub mod CTriggerDetectExplosion { // CBaseTrigger
    pub const m_OnDetectedExplosion: usize = 0xBE8; // CEntityIOOutput
}

pub mod CTriggerFan { // CBaseTrigger
    pub const m_vFanOrigin: usize = 0xB9C; // Vector
    pub const m_vFanEnd: usize = 0xBA8; // Vector
    pub const m_vNoise: usize = 0xBB4; // Vector
    pub const m_flForce: usize = 0xBC0; // float
    pub const m_flRopeForceScale: usize = 0xBC4; // float
    pub const m_flPlayerForce: usize = 0xBC8; // float
    pub const m_flRampTime: usize = 0xBCC; // float
    pub const m_bFalloff: usize = 0xBD0; // bool
    pub const m_bPushPlayer: usize = 0xBD1; // bool
    pub const m_bRampDown: usize = 0xBD2; // bool
    pub const m_bAddNoise: usize = 0xBD3; // bool
    pub const m_RampTimer: usize = 0xBD8; // CountdownTimer
}

pub mod CTriggerGameEvent { // CBaseTrigger
    pub const m_strStartTouchEventName: usize = 0xBA0; // CUtlString
    pub const m_strEndTouchEventName: usize = 0xBA8; // CUtlString
    pub const m_strTriggerID: usize = 0xBB0; // CUtlString
}

pub mod CTriggerGravity { // CBaseTrigger
}

pub mod CTriggerHostageReset { // CBaseTrigger
}

pub mod CTriggerHurt { // CBaseTrigger
    pub const m_flOriginalDamage: usize = 0xB9C; // float
    pub const m_flDamage: usize = 0xBA0; // float
    pub const m_flDamageCap: usize = 0xBA4; // float
    pub const m_flLastDmgTime: usize = 0xBA8; // GameTime_t
    pub const m_flForgivenessDelay: usize = 0xBAC; // float
    pub const m_bitsDamageInflict: usize = 0xBB0; // int32_t
    pub const m_damageModel: usize = 0xBB4; // int32_t
    pub const m_bNoDmgForce: usize = 0xBB8; // bool
    pub const m_vDamageForce: usize = 0xBBC; // Vector
    pub const m_thinkAlways: usize = 0xBC8; // bool
    pub const m_hurtThinkPeriod: usize = 0xBCC; // float
    pub const m_OnHurt: usize = 0xBD0; // CEntityIOOutput
    pub const m_OnHurtPlayer: usize = 0xBF8; // CEntityIOOutput
    pub const m_hurtEntities: usize = 0xC20; // CUtlVector<CHandle<CBaseEntity>>
}

pub mod CTriggerHurtGhost { // CTriggerHurt
}

pub mod CTriggerImpact { // CTriggerMultiple
    pub const m_flMagnitude: usize = 0xBC8; // float
    pub const m_flNoise: usize = 0xBCC; // float
    pub const m_flViewkick: usize = 0xBD0; // float
    pub const m_pOutputForce: usize = 0xBD8; // CEntityOutputTemplate<Vector>
}

pub mod CTriggerLerpObject { // CBaseTrigger
    pub const m_iszLerpTarget: usize = 0xBA0; // CUtlSymbolLarge
    pub const m_hLerpTarget: usize = 0xBA8; // CHandle<CBaseEntity>
    pub const m_iszLerpTargetAttachment: usize = 0xBB0; // CUtlSymbolLarge
    pub const m_hLerpTargetAttachment: usize = 0xBB8; // AttachmentHandle_t
    pub const m_flLerpDuration: usize = 0xBBC; // float
    pub const m_bLerpRestoreMoveType: usize = 0xBC0; // bool
    pub const m_bSingleLerpObject: usize = 0xBC1; // bool
    pub const m_vecLerpingObjects: usize = 0xBC8; // CUtlVector<lerpdata_t>
    pub const m_iszLerpEffect: usize = 0xBE0; // CUtlSymbolLarge
    pub const m_iszLerpSound: usize = 0xBE8; // CUtlSymbolLarge
    pub const m_bAttachTouchingObject: usize = 0xBF0; // bool
    pub const m_hEntityToWaitForDisconnect: usize = 0xBF4; // CHandle<CBaseEntity>
    pub const m_OnLerpStarted: usize = 0xBF8; // CEntityIOOutput
    pub const m_OnLerpFinished: usize = 0xC20; // CEntityIOOutput
}

pub mod CTriggerLook { // CTriggerOnce
    pub const m_hLookTarget: usize = 0xBC8; // CHandle<CBaseEntity>
    pub const m_flFieldOfView: usize = 0xBCC; // float
    pub const m_flLookTime: usize = 0xBD0; // float
    pub const m_flLookTimeTotal: usize = 0xBD4; // float
    pub const m_flLookTimeLast: usize = 0xBD8; // GameTime_t
    pub const m_flTimeoutDuration: usize = 0xBDC; // float
    pub const m_bTimeoutFired: usize = 0xBE0; // bool
    pub const m_bIsLooking: usize = 0xBE1; // bool
    pub const m_b2DFOV: usize = 0xBE2; // bool
    pub const m_bUseVelocity: usize = 0xBE3; // bool
    pub const m_hActivator: usize = 0xBE4; // CHandle<CBaseEntity>
    pub const m_bTestOcclusion: usize = 0xBE8; // bool
    pub const m_OnTimeout: usize = 0xBF0; // CEntityIOOutput
    pub const m_OnStartLook: usize = 0xC18; // CEntityIOOutput
    pub const m_OnEndLook: usize = 0xC40; // CEntityIOOutput
}

pub mod CTriggerMultiple { // CBaseTrigger
    pub const m_OnTrigger: usize = 0xBA0; // CEntityIOOutput
}

pub mod CTriggerOnce { // CTriggerMultiple
}

pub mod CTriggerPhysics { // CBaseTrigger
    pub const m_gravityScale: usize = 0xBB0; // float
    pub const m_linearLimit: usize = 0xBB4; // float
    pub const m_linearDamping: usize = 0xBB8; // float
    pub const m_angularLimit: usize = 0xBBC; // float
    pub const m_angularDamping: usize = 0xBC0; // float
    pub const m_linearForce: usize = 0xBC4; // float
    pub const m_flFrequency: usize = 0xBC8; // float
    pub const m_flDampingRatio: usize = 0xBCC; // float
    pub const m_vecLinearForcePointAt: usize = 0xBD0; // Vector
    pub const m_bCollapseToForcePoint: usize = 0xBDC; // bool
    pub const m_vecLinearForcePointAtWorld: usize = 0xBE0; // Vector
    pub const m_vecLinearForceDirection: usize = 0xBEC; // Vector
    pub const m_bConvertToDebrisWhenPossible: usize = 0xBF8; // bool
}

pub mod CTriggerProximity { // CBaseTrigger
    pub const m_hMeasureTarget: usize = 0xB9C; // CHandle<CBaseEntity>
    pub const m_iszMeasureTarget: usize = 0xBA0; // CUtlSymbolLarge
    pub const m_fRadius: usize = 0xBA8; // float
    pub const m_nTouchers: usize = 0xBAC; // int32_t
    pub const m_NearestEntityDistance: usize = 0xBB0; // CEntityOutputTemplate<float>
}

pub mod CTriggerPush { // CBaseTrigger
    pub const m_angPushEntitySpace: usize = 0xB9C; // QAngle
    pub const m_vecPushDirEntitySpace: usize = 0xBA8; // Vector
    pub const m_bTriggerOnStartTouch: usize = 0xBB4; // bool
}

pub mod CTriggerRemove { // CBaseTrigger
    pub const m_OnRemove: usize = 0xBA0; // CEntityIOOutput
}

pub mod CTriggerSave { // CBaseTrigger
    pub const m_bForceNewLevelUnit: usize = 0xB99; // bool
    pub const m_fDangerousTimer: usize = 0xB9C; // float
    pub const m_minHitPoints: usize = 0xBA0; // int32_t
}

pub mod CTriggerSndSosOpvar { // CBaseTrigger
    pub const m_hTouchingPlayers: usize = 0xBA0; // CUtlVector<CHandle<CBaseEntity>>
    pub const m_flPosition: usize = 0xBB8; // Vector
    pub const m_flCenterSize: usize = 0xBC4; // float
    pub const m_flMinVal: usize = 0xBC8; // float
    pub const m_flMaxVal: usize = 0xBCC; // float
    pub const m_flWait: usize = 0xBD0; // float
    pub const m_opvarName: usize = 0xBD8; // CUtlSymbolLarge
    pub const m_stackName: usize = 0xBE0; // CUtlSymbolLarge
    pub const m_operatorName: usize = 0xBE8; // CUtlSymbolLarge
    pub const m_bVolIs2D: usize = 0xBF0; // bool
    pub const m_opvarNameChar: usize = 0xBF1; // char[256]
    pub const m_stackNameChar: usize = 0xCF1; // char[256]
    pub const m_operatorNameChar: usize = 0xDF1; // char[256]
    pub const m_VecNormPos: usize = 0xEF4; // Vector
    pub const m_flNormCenterSize: usize = 0xF00; // float
}

pub mod CTriggerSoundscape { // CBaseTrigger
    pub const m_hSoundscape: usize = 0xB9C; // CHandle<CEnvSoundscapeTriggerable>
    pub const m_SoundscapeName: usize = 0xBA0; // CUtlSymbolLarge
    pub const m_spectators: usize = 0xBA8; // CUtlVector<CHandle<CBasePlayerPawn>>
}

pub mod CTriggerTeleport { // CBaseTrigger
    pub const m_iLandmark: usize = 0xBA0; // CUtlSymbolLarge
    pub const m_bUseLandmarkAngles: usize = 0xBA8; // bool
    pub const m_bMirrorPlayer: usize = 0xBA9; // bool
}

pub mod CTriggerToggleSave { // CBaseTrigger
    pub const m_bDisabled: usize = 0xB99; // bool
}

pub mod CTriggerTripWire { // CBaseTrigger
}

pub mod CTriggerVolume { // CBaseModelEntity
    pub const m_iFilterName: usize = 0x9F8; // CUtlSymbolLarge
    pub const m_hFilter: usize = 0xA00; // CHandle<CBaseFilter>
}

pub mod CTripWireFire { // CBaseCSGrenade
}

pub mod CTripWireFireProjectile { // CBaseGrenade
}

pub mod CVoteController { // CBaseEntity
    pub const m_iActiveIssueIndex: usize = 0x7A8; // int32_t
    pub const m_iOnlyTeamToVote: usize = 0x7AC; // int32_t
    pub const m_nVoteOptionCount: usize = 0x7B0; // int32_t[5]
    pub const m_nPotentialVotes: usize = 0x7C4; // int32_t
    pub const m_bIsYesNoVote: usize = 0x7C8; // bool
    pub const m_acceptingVotesTimer: usize = 0x7D0; // CountdownTimer
    pub const m_executeCommandTimer: usize = 0x7E8; // CountdownTimer
    pub const m_resetVoteTimer: usize = 0x800; // CountdownTimer
    pub const m_nVotesCast: usize = 0x818; // int32_t[64]
    pub const m_playerHoldingVote: usize = 0x918; // CPlayerSlot
    pub const m_playerOverrideForVote: usize = 0x91C; // CPlayerSlot
    pub const m_nHighestCountIndex: usize = 0x920; // int32_t
    pub const m_potentialIssues: usize = 0x928; // CUtlVector<CBaseIssue*>
    pub const m_VoteOptions: usize = 0x940; // CUtlVector<char*>
}

pub mod CWaterBullet { // CBaseAnimGraph
}

pub mod CWeaponAWP { // CCSWeaponBaseGun
}

pub mod CWeaponAug { // CCSWeaponBaseGun
}

pub mod CWeaponBaseItem { // CCSWeaponBase
    pub const m_SequenceCompleteTimer: usize = 0x1198; // CountdownTimer
    pub const m_bRedraw: usize = 0x11B0; // bool
}

pub mod CWeaponBizon { // CCSWeaponBaseGun
}

pub mod CWeaponCZ75a { // CCSWeaponBaseGun
}

pub mod CWeaponElite { // CCSWeaponBaseGun
}

pub mod CWeaponFamas { // CCSWeaponBaseGun
}

pub mod CWeaponFiveSeven { // CCSWeaponBaseGun
}

pub mod CWeaponG3SG1 { // CCSWeaponBaseGun
}

pub mod CWeaponGalilAR { // CCSWeaponBaseGun
}

pub mod CWeaponGlock { // CCSWeaponBaseGun
}

pub mod CWeaponHKP2000 { // CCSWeaponBaseGun
}

pub mod CWeaponM249 { // CCSWeaponBaseGun
}

pub mod CWeaponM4A1 { // CCSWeaponBaseGun
}

pub mod CWeaponM4A1Silencer { // CCSWeaponBaseGun
}

pub mod CWeaponMAC10 { // CCSWeaponBaseGun
}

pub mod CWeaponMP5SD { // CCSWeaponBaseGun
}

pub mod CWeaponMP7 { // CCSWeaponBaseGun
}

pub mod CWeaponMP9 { // CCSWeaponBaseGun
}

pub mod CWeaponMag7 { // CCSWeaponBaseGun
}

pub mod CWeaponNOVA { // CCSWeaponBase
}

pub mod CWeaponNegev { // CCSWeaponBaseGun
}

pub mod CWeaponP250 { // CCSWeaponBaseGun
}

pub mod CWeaponP90 { // CCSWeaponBaseGun
}

pub mod CWeaponRevolver { // CCSWeaponBaseGun
}

pub mod CWeaponSCAR20 { // CCSWeaponBaseGun
}

pub mod CWeaponSG556 { // CCSWeaponBaseGun
}

pub mod CWeaponSSG08 { // CCSWeaponBaseGun
}

pub mod CWeaponSawedoff { // CCSWeaponBase
}

pub mod CWeaponShield { // CCSWeaponBaseGun
    pub const m_flBulletDamageAbsorbed: usize = 0x11B4; // float
    pub const m_flLastBulletHitSoundTime: usize = 0x11B8; // GameTime_t
    pub const m_flDisplayHealth: usize = 0x11BC; // float
}

pub mod CWeaponTaser { // CCSWeaponBaseGun
    pub const m_fFireTime: usize = 0x11B4; // GameTime_t
}

pub mod CWeaponTec9 { // CCSWeaponBaseGun
}

pub mod CWeaponUMP45 { // CCSWeaponBaseGun
}

pub mod CWeaponUSPSilencer { // CCSWeaponBaseGun
}

pub mod CWeaponXM1014 { // CCSWeaponBase
}

pub mod CWeaponZoneRepulsor { // CCSWeaponBaseGun
}

pub mod CWorld { // CBaseModelEntity
}

pub mod CommandToolCommand_t {
    pub const m_bEnabled: usize = 0x0; // bool
    pub const m_bOpened: usize = 0x1; // bool
    pub const m_InternalId: usize = 0x4; // uint32_t
    pub const m_ShortName: usize = 0x8; // CUtlString
    pub const m_ExecMode: usize = 0x10; // CommandExecMode_t
    pub const m_SpawnGroup: usize = 0x18; // CUtlString
    pub const m_PeriodicExecDelay: usize = 0x20; // float
    pub const m_SpecType: usize = 0x24; // CommandEntitySpecType_t
    pub const m_EntitySpec: usize = 0x28; // CUtlString
    pub const m_Commands: usize = 0x30; // CUtlString
    pub const m_SetDebugBits: usize = 0x38; // DebugOverlayBits_t
    pub const m_ClearDebugBits: usize = 0x40; // DebugOverlayBits_t
}

pub mod ConceptHistory_t {
    pub const timeSpoken: usize = 0x0; // float
    pub const m_response: usize = 0x8; // CRR_Response
}

pub mod ConstraintSoundInfo {
    pub const m_vSampler: usize = 0x8; // VelocitySampler
    pub const m_soundProfile: usize = 0x20; // SimpleConstraintSoundProfile
    pub const m_forwardAxis: usize = 0x40; // Vector
    pub const m_iszTravelSoundFwd: usize = 0x50; // CUtlSymbolLarge
    pub const m_iszTravelSoundBack: usize = 0x58; // CUtlSymbolLarge
    pub const m_iszReversalSounds: usize = 0x68; // CUtlSymbolLarge[3]
    pub const m_bPlayTravelSound: usize = 0x80; // bool
    pub const m_bPlayReversalSound: usize = 0x81; // bool
}

pub mod CountdownTimer {
    pub const m_duration: usize = 0x8; // float
    pub const m_timestamp: usize = 0xC; // GameTime_t
    pub const m_timescale: usize = 0x10; // float
    pub const m_nWorldGroupId: usize = 0x14; // WorldGroupId_t
}

pub mod EngineCountdownTimer {
    pub const m_duration: usize = 0x8; // float
    pub const m_timestamp: usize = 0xC; // float
    pub const m_timescale: usize = 0x10; // float
}

pub mod EntityRenderAttribute_t {
    pub const m_ID: usize = 0x30; // CUtlStringToken
    pub const m_Values: usize = 0x34; // Vector4D
}

pub mod EntitySpottedState_t {
    pub const m_bSpotted: usize = 0x8; // bool
    pub const m_bSpottedByMask: usize = 0xC; // uint32_t[2]
}

pub mod Extent {
    pub const lo: usize = 0x0; // Vector
    pub const hi: usize = 0xC; // Vector
}

pub mod FilterDamageType { // CBaseFilter
    pub const m_iDamageType: usize = 0x800; // int32_t
}

pub mod FilterHealth { // CBaseFilter
    pub const m_bAdrenalineActive: usize = 0x800; // bool
    pub const m_iHealthMin: usize = 0x804; // int32_t
    pub const m_iHealthMax: usize = 0x808; // int32_t
}

pub mod FilterTeam { // CBaseFilter
    pub const m_iFilterTeam: usize = 0x800; // int32_t
}

pub mod GameAmmoTypeInfo_t { // AmmoTypeInfo_t
    pub const m_nBuySize: usize = 0x34; // int32_t
    pub const m_nCost: usize = 0x38; // int32_t
}

pub mod GameTick_t {
    pub const m_Value: usize = 0x0; // int32_t
}

pub mod GameTime_t {
    pub const m_Value: usize = 0x0; // float
}

pub mod HullFlags_t {
    pub const m_bHull_Human: usize = 0x0; // bool
    pub const m_bHull_SmallCentered: usize = 0x1; // bool
    pub const m_bHull_WideHuman: usize = 0x2; // bool
    pub const m_bHull_Tiny: usize = 0x3; // bool
    pub const m_bHull_Medium: usize = 0x4; // bool
    pub const m_bHull_TinyCentered: usize = 0x5; // bool
    pub const m_bHull_Large: usize = 0x6; // bool
    pub const m_bHull_LargeCentered: usize = 0x7; // bool
    pub const m_bHull_MediumTall: usize = 0x8; // bool
    pub const m_bHull_Small: usize = 0x9; // bool
}

pub mod IChoreoServices {
}

pub mod IEconItemInterface {
}

pub mod IHasAttributes {
}

pub mod IRagdoll {
}

pub mod ISkeletonAnimationController {
}

pub mod IntervalTimer {
    pub const m_timestamp: usize = 0x8; // GameTime_t
    pub const m_nWorldGroupId: usize = 0xC; // WorldGroupId_t
}

pub mod ModelConfigHandle_t {
    pub const m_Value: usize = 0x0; // uint32_t
}

pub mod NavGravity_t {
    pub const m_vGravity: usize = 0x0; // Vector
    pub const m_bDefault: usize = 0xC; // bool
}

pub mod ParticleIndex_t {
    pub const m_Value: usize = 0x0; // int32_t
}

pub mod PhysicsRagdollPose_t {
    pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
    pub const m_Transforms: usize = 0x30; // CNetworkUtlVectorBase<CTransform>
    pub const m_hOwner: usize = 0x48; // CHandle<CBaseEntity>
}

pub mod PulseScriptedSequenceData_t {
    pub const m_nActorID: usize = 0x0; // int32_t
    pub const m_szPreIdleSequence: usize = 0x8; // CUtlString
    pub const m_szEntrySequence: usize = 0x10; // CUtlString
    pub const m_szSequence: usize = 0x18; // CUtlString
    pub const m_szExitSequence: usize = 0x20; // CUtlString
    pub const m_bLoopPreIdleSequence: usize = 0x28; // bool
    pub const m_bLoopActionSequence: usize = 0x29; // bool
    pub const m_bLoopPostIdleSequence: usize = 0x2A; // bool
    pub const m_bIgnoreLookAt: usize = 0x2B; // bool
}

pub mod QuestProgress {
}

pub mod RagdollCreationParams_t {
    pub const m_vForce: usize = 0x0; // Vector
    pub const m_nForceBone: usize = 0xC; // int32_t
}

pub mod RelationshipOverride_t { // Relationship_t
    pub const entity: usize = 0x8; // CHandle<CBaseEntity>
    pub const classType: usize = 0xC; // Class_T
}

pub mod Relationship_t {
    pub const disposition: usize = 0x0; // Disposition_t
    pub const priority: usize = 0x4; // int32_t
}

pub mod ResponseContext_t {
    pub const m_iszName: usize = 0x0; // CUtlSymbolLarge
    pub const m_iszValue: usize = 0x8; // CUtlSymbolLarge
    pub const m_fExpirationTime: usize = 0x10; // GameTime_t
}

pub mod ResponseFollowup {
    pub const followup_concept: usize = 0x0; // char*
    pub const followup_contexts: usize = 0x8; // char*
    pub const followup_delay: usize = 0x10; // float
    pub const followup_target: usize = 0x14; // char*
    pub const followup_entityiotarget: usize = 0x1C; // char*
    pub const followup_entityioinput: usize = 0x24; // char*
    pub const followup_entityiodelay: usize = 0x2C; // float
    pub const bFired: usize = 0x30; // bool
}

pub mod ResponseParams {
    pub const odds: usize = 0x10; // int16_t
    pub const flags: usize = 0x12; // int16_t
    pub const m_pFollowup: usize = 0x14; // ResponseFollowup*
}

pub mod SellbackPurchaseEntry_t {
    pub const m_unDefIdx: usize = 0x30; // uint16_t
    pub const m_nCost: usize = 0x34; // int32_t
    pub const m_nPrevArmor: usize = 0x38; // int32_t
    pub const m_bPrevHelmet: usize = 0x3C; // bool
    pub const m_hItem: usize = 0x40; // CEntityHandle
}

pub mod SequenceHistory_t {
    pub const m_hSequence: usize = 0x0; // HSequence
    pub const m_flSeqStartTime: usize = 0x4; // GameTime_t
    pub const m_flSeqFixedCycle: usize = 0x8; // float
    pub const m_nSeqLoopMode: usize = 0xC; // AnimLoopMode_t
    pub const m_flPlaybackRate: usize = 0x10; // float
    pub const m_flCyclesPerSecond: usize = 0x14; // float
}

pub mod ServerAuthoritativeWeaponSlot_t {
    pub const unClass: usize = 0x28; // uint16_t
    pub const unSlot: usize = 0x2A; // uint16_t
    pub const unItemDefIdx: usize = 0x2C; // uint16_t
}

pub mod SimpleConstraintSoundProfile {
    pub const eKeypoints: usize = 0x8; // SimpleConstraintSoundProfile::SimpleConstraintsSoundProfileKeypoints_t
    pub const m_keyPoints: usize = 0xC; // float[2]
    pub const m_reversalSoundThresholds: usize = 0x14; // float[3]
}

pub mod SoundOpvarTraceResult_t {
    pub const vPos: usize = 0x0; // Vector
    pub const bDidHit: usize = 0xC; // bool
    pub const flDistSqrToCenter: usize = 0x10; // float
}

pub mod SpawnPoint { // CServerOnlyPointEntity
    pub const m_iPriority: usize = 0x7A8; // int32_t
    pub const m_bEnabled: usize = 0x7AC; // bool
    pub const m_nType: usize = 0x7B0; // int32_t
}

pub mod SpawnPointCoopEnemy { // SpawnPoint
    pub const m_szWeaponsToGive: usize = 0x7B8; // CUtlSymbolLarge
    pub const m_szPlayerModelToUse: usize = 0x7C0; // CUtlSymbolLarge
    pub const m_nArmorToSpawnWith: usize = 0x7C8; // int32_t
    pub const m_nDefaultBehavior: usize = 0x7CC; // SpawnPointCoopEnemy::BotDefaultBehavior_t
    pub const m_nBotDifficulty: usize = 0x7D0; // int32_t
    pub const m_bIsAgressive: usize = 0x7D4; // bool
    pub const m_bStartAsleep: usize = 0x7D5; // bool
    pub const m_flHideRadius: usize = 0x7D8; // float
    pub const m_szBehaviorTreeFile: usize = 0x7E8; // CUtlSymbolLarge
}

pub mod SummaryTakeDamageInfo_t {
    pub const nSummarisedCount: usize = 0x0; // int32_t
    pub const info: usize = 0x8; // CTakeDamageInfo
    pub const result: usize = 0xA0; // CTakeDamageResult
    pub const hTarget: usize = 0xA8; // CHandle<CBaseEntity>
}

pub mod VPhysicsCollisionAttribute_t {
    pub const m_nInteractsAs: usize = 0x8; // uint64_t
    pub const m_nInteractsWith: usize = 0x10; // uint64_t
    pub const m_nInteractsExclude: usize = 0x18; // uint64_t
    pub const m_nEntityId: usize = 0x20; // uint32_t
    pub const m_nOwnerId: usize = 0x24; // uint32_t
    pub const m_nHierarchyId: usize = 0x28; // uint16_t
    pub const m_nCollisionGroup: usize = 0x2A; // uint8_t
    pub const m_nCollisionFunctionMask: usize = 0x2B; // uint8_t
}

pub mod VelocitySampler {
    pub const m_prevSample: usize = 0x0; // Vector
    pub const m_fPrevSampleTime: usize = 0xC; // GameTime_t
    pub const m_fIdealSampleRate: usize = 0x10; // float
}

pub mod ViewAngleServerChange_t {
    pub const nType: usize = 0x30; // FixAngleSet_t
    pub const qAngle: usize = 0x34; // QAngle
    pub const nIndex: usize = 0x40; // uint32_t
}

pub mod WeaponPurchaseCount_t {
    pub const m_nItemDefIndex: usize = 0x30; // uint16_t
    pub const m_nCount: usize = 0x32; // uint16_t
}

pub mod WeaponPurchaseTracker_t {
    pub const m_weaponPurchases: usize = 0x8; // CUtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
}

pub mod audioparams_t {
    pub const localSound: usize = 0x8; // Vector[8]
    pub const soundscapeIndex: usize = 0x68; // int32_t
    pub const localBits: usize = 0x6C; // uint8_t
    pub const soundscapeEntityListIndex: usize = 0x70; // int32_t
    pub const soundEventHash: usize = 0x74; // uint32_t
}

pub mod dynpitchvol_base_t {
    pub const preset: usize = 0x0; // int32_t
    pub const pitchrun: usize = 0x4; // int32_t
    pub const pitchstart: usize = 0x8; // int32_t
    pub const spinup: usize = 0xC; // int32_t
    pub const spindown: usize = 0x10; // int32_t
    pub const volrun: usize = 0x14; // int32_t
    pub const volstart: usize = 0x18; // int32_t
    pub const fadein: usize = 0x1C; // int32_t
    pub const fadeout: usize = 0x20; // int32_t
    pub const lfotype: usize = 0x24; // int32_t
    pub const lforate: usize = 0x28; // int32_t
    pub const lfomodpitch: usize = 0x2C; // int32_t
    pub const lfomodvol: usize = 0x30; // int32_t
    pub const cspinup: usize = 0x34; // int32_t
    pub const cspincount: usize = 0x38; // int32_t
    pub const pitch: usize = 0x3C; // int32_t
    pub const spinupsav: usize = 0x40; // int32_t
    pub const spindownsav: usize = 0x44; // int32_t
    pub const pitchfrac: usize = 0x48; // int32_t
    pub const vol: usize = 0x4C; // int32_t
    pub const fadeinsav: usize = 0x50; // int32_t
    pub const fadeoutsav: usize = 0x54; // int32_t
    pub const volfrac: usize = 0x58; // int32_t
    pub const lfofrac: usize = 0x5C; // int32_t
    pub const lfomult: usize = 0x60; // int32_t
}

pub mod dynpitchvol_t { // dynpitchvol_base_t
}

pub mod fogparams_t {
    pub const dirPrimary: usize = 0x8; // Vector
    pub const colorPrimary: usize = 0x14; // Color
    pub const colorSecondary: usize = 0x18; // Color
    pub const colorPrimaryLerpTo: usize = 0x1C; // Color
    pub const colorSecondaryLerpTo: usize = 0x20; // Color
    pub const start: usize = 0x24; // float
    pub const end: usize = 0x28; // float
    pub const farz: usize = 0x2C; // float
    pub const maxdensity: usize = 0x30; // float
    pub const exponent: usize = 0x34; // float
    pub const HDRColorScale: usize = 0x38; // float
    pub const skyboxFogFactor: usize = 0x3C; // float
    pub const skyboxFogFactorLerpTo: usize = 0x40; // float
    pub const startLerpTo: usize = 0x44; // float
    pub const endLerpTo: usize = 0x48; // float
    pub const maxdensityLerpTo: usize = 0x4C; // float
    pub const lerptime: usize = 0x50; // GameTime_t
    pub const duration: usize = 0x54; // float
    pub const blendtobackground: usize = 0x58; // float
    pub const scattering: usize = 0x5C; // float
    pub const locallightscale: usize = 0x60; // float
    pub const enable: usize = 0x64; // bool
    pub const blend: usize = 0x65; // bool
    pub const m_bNoReflectionFog: usize = 0x66; // bool
    pub const m_bPadding: usize = 0x67; // bool
}

pub mod fogplayerparams_t {
    pub const m_hCtrl: usize = 0x8; // CHandle<CFogController>
    pub const m_flTransitionTime: usize = 0xC; // float
    pub const m_OldColor: usize = 0x10; // Color
    pub const m_flOldStart: usize = 0x14; // float
    pub const m_flOldEnd: usize = 0x18; // float
    pub const m_flOldMaxDensity: usize = 0x1C; // float
    pub const m_flOldHDRColorScale: usize = 0x20; // float
    pub const m_flOldFarZ: usize = 0x24; // float
    pub const m_NewColor: usize = 0x28; // Color
    pub const m_flNewStart: usize = 0x2C; // float
    pub const m_flNewEnd: usize = 0x30; // float
    pub const m_flNewMaxDensity: usize = 0x34; // float
    pub const m_flNewHDRColorScale: usize = 0x38; // float
    pub const m_flNewFarZ: usize = 0x3C; // float
}

pub mod hudtextparms_t {
    pub const color1: usize = 0x0; // Color
    pub const color2: usize = 0x4; // Color
    pub const effect: usize = 0x8; // uint8_t
    pub const channel: usize = 0x9; // uint8_t
    pub const x: usize = 0xC; // float
    pub const y: usize = 0x10; // float
}

pub mod lerpdata_t {
    pub const m_hEnt: usize = 0x0; // CHandle<CBaseEntity>
    pub const m_MoveType: usize = 0x4; // MoveType_t
    pub const m_flStartTime: usize = 0x8; // GameTime_t
    pub const m_vecStartOrigin: usize = 0xC; // Vector
    pub const m_qStartRot: usize = 0x20; // Quaternion
    pub const m_nFXIndex: usize = 0x30; // ParticleIndex_t
}

pub mod locksound_t {
    pub const sLockedSound: usize = 0x8; // CUtlSymbolLarge
    pub const sUnlockedSound: usize = 0x10; // CUtlSymbolLarge
    pub const flwaitSound: usize = 0x18; // GameTime_t
}

pub mod magnetted_objects_t {
    pub const hEntity: usize = 0x8; // CHandle<CBaseEntity>
}

pub mod ragdoll_t {
    pub const list: usize = 0x0; // CUtlVector<ragdollelement_t>
    pub const boneIndex: usize = 0x18; // CUtlVector<int32_t>
    pub const allowStretch: usize = 0x30; // bool
    pub const unused: usize = 0x31; // bool
}

pub mod ragdollelement_t {
    pub const originParentSpace: usize = 0x0; // Vector
    pub const parentIndex: usize = 0x20; // int32_t
    pub const m_flRadius: usize = 0x24; // float
}

pub mod shard_model_desc_t {
    pub const m_nModelID: usize = 0x8; // int32_t
    pub const m_hMaterial: usize = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_solid: usize = 0x18; // ShardSolid_t
    pub const m_ShatterPanelMode: usize = 0x19; // ShatterPanelMode
    pub const m_vecPanelSize: usize = 0x1C; // Vector2D
    pub const m_vecStressPositionA: usize = 0x24; // Vector2D
    pub const m_vecStressPositionB: usize = 0x2C; // Vector2D
    pub const m_vecPanelVertices: usize = 0x38; // CNetworkUtlVectorBase<Vector2D>
    pub const m_flGlassHalfThickness: usize = 0x50; // float
    pub const m_bHasParent: usize = 0x54; // bool
    pub const m_bParentFrozen: usize = 0x55; // bool
    pub const m_SurfacePropStringToken: usize = 0x58; // CUtlStringToken
}

pub mod sky3dparams_t {
    pub const scale: usize = 0x8; // int16_t
    pub const origin: usize = 0xC; // Vector
    pub const bClip3DSkyBoxNearToWorldFar: usize = 0x18; // bool
    pub const flClip3DSkyBoxNearToWorldFarOffset: usize = 0x1C; // float
    pub const fog: usize = 0x20; // fogparams_t
    pub const m_nWorldGroupID: usize = 0x88; // WorldGroupId_t
}

pub mod sndopvarlatchdata_t {
    pub const m_iszStack: usize = 0x8; // CUtlSymbolLarge
    pub const m_iszOperator: usize = 0x10; // CUtlSymbolLarge
    pub const m_iszOpvar: usize = 0x18; // CUtlSymbolLarge
    pub const m_flVal: usize = 0x20; // float
    pub const m_vPos: usize = 0x24; // Vector
}

pub mod thinkfunc_t {
    pub const m_hFn: usize = 0x10; // HSCRIPT
    pub const m_nContext: usize = 0x18; // CUtlStringToken
    pub const m_nNextThinkTick: usize = 0x1C; // GameTick_t
    pub const m_nLastThinkTick: usize = 0x20; // GameTick_t
}