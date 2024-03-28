/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 23 Mar 2024 05:02:04 +0000
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
    pub const m_iSoundType: usize = 0x4C0; // int32_t
    pub const m_iSoundContext: usize = 0x4C4; // int32_t
    pub const m_iVolume: usize = 0x4C8; // int32_t
    pub const m_iSoundIndex: usize = 0x4CC; // int32_t
    pub const m_flDuration: usize = 0x4D0; // float
    pub const m_iszProxyEntityName: usize = 0x4D8; // CUtlSymbolLarge
}

pub mod CAI_ChangeHintGroup { // CBaseEntity
    pub const m_iSearchType: usize = 0x4C0; // int32_t
    pub const m_strSearchName: usize = 0x4C8; // CUtlSymbolLarge
    pub const m_strNewHintGroup: usize = 0x4D0; // CUtlSymbolLarge
    pub const m_flRadius: usize = 0x4D8; // float
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
    pub const m_radius: usize = 0x4C0; // float
    pub const m_flMaxRadius: usize = 0x4C4; // float
    pub const m_iSoundLevel: usize = 0x4C8; // soundlevel_t
    pub const m_dpv: usize = 0x4CC; // dynpitchvol_t
    pub const m_fActive: usize = 0x530; // bool
    pub const m_fLooping: usize = 0x531; // bool
    pub const m_iszSound: usize = 0x538; // CUtlSymbolLarge
    pub const m_sSourceEntName: usize = 0x540; // CUtlSymbolLarge
    pub const m_hSoundSource: usize = 0x548; // CHandle<CBaseEntity>
    pub const m_nSoundSourceEntIndex: usize = 0x54C; // CEntityIndex
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
    pub const m_bEnabled: usize = 0x710; // bool
    pub const m_nColorMode: usize = 0x714; // int32_t
    pub const m_Color: usize = 0x718; // Color
    pub const m_flColorTemperature: usize = 0x71C; // float
    pub const m_flBrightness: usize = 0x720; // float
    pub const m_flBrightnessScale: usize = 0x724; // float
    pub const m_nDirectLight: usize = 0x728; // int32_t
    pub const m_nBakedShadowIndex: usize = 0x72C; // int32_t
    pub const m_nLuminaireShape: usize = 0x730; // int32_t
    pub const m_flLuminaireSize: usize = 0x734; // float
    pub const m_flLuminaireAnisotropy: usize = 0x738; // float
    pub const m_LightStyleString: usize = 0x740; // CUtlString
    pub const m_flLightStyleStartTime: usize = 0x748; // GameTime_t
    pub const m_QueuedLightStyleStrings: usize = 0x750; // CNetworkUtlVectorBase<CUtlString>
    pub const m_LightStyleEvents: usize = 0x768; // CNetworkUtlVectorBase<CUtlString>
    pub const m_LightStyleTargets: usize = 0x780; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    pub const m_StyleEvent: usize = 0x798; // CEntityIOOutput[4]
    pub const m_hLightCookie: usize = 0x858; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_flShape: usize = 0x860; // float
    pub const m_flSoftX: usize = 0x864; // float
    pub const m_flSoftY: usize = 0x868; // float
    pub const m_flSkirt: usize = 0x86C; // float
    pub const m_flSkirtNear: usize = 0x870; // float
    pub const m_vSizeParams: usize = 0x874; // Vector
    pub const m_flRange: usize = 0x880; // float
    pub const m_vShear: usize = 0x884; // Vector
    pub const m_nBakeSpecularToCubemaps: usize = 0x890; // int32_t
    pub const m_vBakeSpecularToCubemapsSize: usize = 0x894; // Vector
    pub const m_nCastShadows: usize = 0x8A0; // int32_t
    pub const m_nShadowMapSize: usize = 0x8A4; // int32_t
    pub const m_nShadowPriority: usize = 0x8A8; // int32_t
    pub const m_bContactShadow: usize = 0x8AC; // bool
    pub const m_nBounceLight: usize = 0x8B0; // int32_t
    pub const m_flBounceScale: usize = 0x8B4; // float
    pub const m_flMinRoughness: usize = 0x8B8; // float
    pub const m_vAlternateColor: usize = 0x8BC; // Vector
    pub const m_fAlternateColorBrightness: usize = 0x8C8; // float
    pub const m_nFog: usize = 0x8CC; // int32_t
    pub const m_flFogStrength: usize = 0x8D0; // float
    pub const m_nFogShadows: usize = 0x8D4; // int32_t
    pub const m_flFogScale: usize = 0x8D8; // float
    pub const m_flFadeSizeStart: usize = 0x8DC; // float
    pub const m_flFadeSizeEnd: usize = 0x8E0; // float
    pub const m_flShadowFadeSizeStart: usize = 0x8E4; // float
    pub const m_flShadowFadeSizeEnd: usize = 0x8E8; // float
    pub const m_bPrecomputedFieldsValid: usize = 0x8EC; // bool
    pub const m_vPrecomputedBoundsMins: usize = 0x8F0; // Vector
    pub const m_vPrecomputedBoundsMaxs: usize = 0x8FC; // Vector
    pub const m_vPrecomputedOBBOrigin: usize = 0x908; // Vector
    pub const m_vPrecomputedOBBAngles: usize = 0x914; // QAngle
    pub const m_vPrecomputedOBBExtent: usize = 0x920; // Vector
    pub const m_bPvsModifyEntity: usize = 0x92C; // bool
}

pub mod CBaseAnimGraph { // CBaseModelEntity
    pub const m_bInitiallyPopulateInterpHistory: usize = 0x788; // bool
    pub const m_pChoreoServices: usize = 0x790; // IChoreoServices*
    pub const m_bAnimGraphUpdateEnabled: usize = 0x798; // bool
    pub const m_flMaxSlopeDistance: usize = 0x79C; // float
    pub const m_vLastSlopeCheckPos: usize = 0x7A0; // Vector
    pub const m_bAnimationUpdateScheduled: usize = 0x7AC; // bool
    pub const m_vecForce: usize = 0x7B0; // Vector
    pub const m_nForceBone: usize = 0x7BC; // int32_t
    pub const m_pRagdollPose: usize = 0x7D0; // PhysicsRagdollPose_t*
    pub const m_bClientRagdoll: usize = 0x7D8; // bool
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
    pub const m_angMoveEntitySpace: usize = 0x790; // QAngle
    pub const m_fStayPushed: usize = 0x79C; // bool
    pub const m_fRotating: usize = 0x79D; // bool
    pub const m_ls: usize = 0x7A0; // locksound_t
    pub const m_sUseSound: usize = 0x7C0; // CUtlSymbolLarge
    pub const m_sLockedSound: usize = 0x7C8; // CUtlSymbolLarge
    pub const m_sUnlockedSound: usize = 0x7D0; // CUtlSymbolLarge
    pub const m_bLocked: usize = 0x7D8; // bool
    pub const m_bDisabled: usize = 0x7D9; // bool
    pub const m_flUseLockedTime: usize = 0x7DC; // GameTime_t
    pub const m_bSolidBsp: usize = 0x7E0; // bool
    pub const m_OnDamaged: usize = 0x7E8; // CEntityIOOutput
    pub const m_OnPressed: usize = 0x810; // CEntityIOOutput
    pub const m_OnUseLocked: usize = 0x838; // CEntityIOOutput
    pub const m_OnIn: usize = 0x860; // CEntityIOOutput
    pub const m_OnOut: usize = 0x888; // CEntityIOOutput
    pub const m_nState: usize = 0x8B0; // int32_t
    pub const m_hConstraint: usize = 0x8B4; // CEntityHandle
    pub const m_hConstraintParent: usize = 0x8B8; // CEntityHandle
    pub const m_bForceNpcExclude: usize = 0x8BC; // bool
    pub const m_sGlowEntity: usize = 0x8C0; // CUtlSymbolLarge
    pub const m_glowEntity: usize = 0x8C8; // CHandle<CBaseModelEntity>
    pub const m_usable: usize = 0x8CC; // bool
    pub const m_szDisplayText: usize = 0x8D0; // CUtlSymbolLarge
}

pub mod CBaseCSGrenade { // CCSWeaponBase
    pub const m_bRedraw: usize = 0xE90; // bool
    pub const m_bIsHeldByPlayer: usize = 0xE91; // bool
    pub const m_bPinPulled: usize = 0xE92; // bool
    pub const m_bJumpThrow: usize = 0xE93; // bool
    pub const m_bThrowAnimating: usize = 0xE94; // bool
    pub const m_fThrowTime: usize = 0xE98; // GameTime_t
    pub const m_flThrowStrength: usize = 0xE9C; // float
    pub const m_flThrowStrengthApproach: usize = 0xEA0; // float
    pub const m_fDropTime: usize = 0xEA4; // GameTime_t
    pub const m_bJustPulledPin: usize = 0xEA8; // bool
    pub const m_nNextHoldTick: usize = 0xEAC; // GameTick_t
    pub const m_flNextHoldFrac: usize = 0xEB0; // float
    pub const m_hSwitchToWeaponAfterThrow: usize = 0xEB4; // CHandle<CCSWeaponBase>
}

pub mod CBaseCSGrenadeProjectile { // CBaseGrenade
    pub const m_vInitialPosition: usize = 0xA20; // Vector
    pub const m_vInitialVelocity: usize = 0xA2C; // Vector
    pub const m_nBounces: usize = 0xA38; // int32_t
    pub const m_nExplodeEffectIndex: usize = 0xA40; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    pub const m_nExplodeEffectTickBegin: usize = 0xA48; // int32_t
    pub const m_vecExplodeEffectOrigin: usize = 0xA4C; // Vector
    pub const m_flSpawnTime: usize = 0xA58; // GameTime_t
    pub const m_unOGSExtraFlags: usize = 0xA5C; // uint8_t
    pub const m_bDetonationRecorded: usize = 0xA5D; // bool
    pub const m_flDetonateTime: usize = 0xA60; // GameTime_t
    pub const m_nItemIndex: usize = 0xA64; // uint16_t
    pub const m_vecOriginalSpawnLocation: usize = 0xA68; // Vector
    pub const m_flLastBounceSoundTime: usize = 0xA74; // GameTime_t
    pub const m_vecGrenadeSpin: usize = 0xA78; // RotationVector
    pub const m_vecLastHitSurfaceNormal: usize = 0xA84; // Vector
    pub const m_nTicksAtZeroVelocity: usize = 0xA90; // int32_t
    pub const m_bHasEverHitPlayer: usize = 0xA94; // bool
    pub const m_bClearFromPlayers: usize = 0xA95; // bool
}

pub mod CBaseClientUIEntity { // CBaseModelEntity
    pub const m_bEnabled: usize = 0x710; // bool
    pub const m_DialogXMLName: usize = 0x718; // CUtlSymbolLarge
    pub const m_PanelClassName: usize = 0x720; // CUtlSymbolLarge
    pub const m_PanelID: usize = 0x728; // CUtlSymbolLarge
    pub const m_CustomOutput0: usize = 0x730; // CEntityIOOutput
    pub const m_CustomOutput1: usize = 0x758; // CEntityIOOutput
    pub const m_CustomOutput2: usize = 0x780; // CEntityIOOutput
    pub const m_CustomOutput3: usize = 0x7A8; // CEntityIOOutput
    pub const m_CustomOutput4: usize = 0x7D0; // CEntityIOOutput
    pub const m_CustomOutput5: usize = 0x7F8; // CEntityIOOutput
    pub const m_CustomOutput6: usize = 0x820; // CEntityIOOutput
    pub const m_CustomOutput7: usize = 0x848; // CEntityIOOutput
    pub const m_CustomOutput8: usize = 0x870; // CEntityIOOutput
    pub const m_CustomOutput9: usize = 0x898; // CEntityIOOutput
}

pub mod CBaseCombatCharacter { // CBaseFlex
    pub const m_bForceServerRagdoll: usize = 0x978; // bool
    pub const m_hMyWearables: usize = 0x980; // CNetworkUtlVectorBase<CHandle<CEconWearable>>
    pub const m_flFieldOfView: usize = 0x998; // float
    pub const m_impactEnergyScale: usize = 0x99C; // float
    pub const m_LastHitGroup: usize = 0x9A0; // HitGroup_t
    pub const m_bApplyStressDamage: usize = 0x9A4; // bool
    pub const m_bloodColor: usize = 0x9A8; // int32_t
    pub const m_iDamageCount: usize = 0x9F0; // int32_t
    pub const m_pVecRelationships: usize = 0x9F8; // CUtlVector<RelationshipOverride_t>*
    pub const m_strRelationships: usize = 0xA00; // CUtlSymbolLarge
    pub const m_eHull: usize = 0xA08; // Hull_t
    pub const m_nNavHullIdx: usize = 0xA0C; // uint32_t
}

pub mod CBaseDMStart { // CPointEntity
    pub const m_Master: usize = 0x4C0; // CUtlSymbolLarge
}

pub mod CBaseDoor { // CBaseToggle
    pub const m_angMoveEntitySpace: usize = 0x7A0; // QAngle
    pub const m_vecMoveDirParentSpace: usize = 0x7AC; // Vector
    pub const m_ls: usize = 0x7B8; // locksound_t
    pub const m_bForceClosed: usize = 0x7D8; // bool
    pub const m_bDoorGroup: usize = 0x7D9; // bool
    pub const m_bLocked: usize = 0x7DA; // bool
    pub const m_bIgnoreDebris: usize = 0x7DB; // bool
    pub const m_eSpawnPosition: usize = 0x7DC; // FuncDoorSpawnPos_t
    pub const m_flBlockDamage: usize = 0x7E0; // float
    pub const m_NoiseMoving: usize = 0x7E8; // CUtlSymbolLarge
    pub const m_NoiseArrived: usize = 0x7F0; // CUtlSymbolLarge
    pub const m_NoiseMovingClosed: usize = 0x7F8; // CUtlSymbolLarge
    pub const m_NoiseArrivedClosed: usize = 0x800; // CUtlSymbolLarge
    pub const m_ChainTarget: usize = 0x808; // CUtlSymbolLarge
    pub const m_OnBlockedClosing: usize = 0x810; // CEntityIOOutput
    pub const m_OnBlockedOpening: usize = 0x838; // CEntityIOOutput
    pub const m_OnUnblockedClosing: usize = 0x860; // CEntityIOOutput
    pub const m_OnUnblockedOpening: usize = 0x888; // CEntityIOOutput
    pub const m_OnFullyClosed: usize = 0x8B0; // CEntityIOOutput
    pub const m_OnFullyOpen: usize = 0x8D8; // CEntityIOOutput
    pub const m_OnClose: usize = 0x900; // CEntityIOOutput
    pub const m_OnOpen: usize = 0x928; // CEntityIOOutput
    pub const m_OnLockedUse: usize = 0x950; // CEntityIOOutput
    pub const m_bLoopMoveSound: usize = 0x978; // bool
    pub const m_bCreateNavObstacle: usize = 0x990; // bool
    pub const m_isChaining: usize = 0x991; // bool
    pub const m_bIsUsable: usize = 0x992; // bool
}

pub mod CBaseEntity { // CEntityInstance
    pub const m_CBodyComponent: usize = 0x38; // CBodyComponent*
    pub const m_NetworkTransmitComponent: usize = 0x40; // CNetworkTransmitComponent
    pub const m_aThinkFunctions: usize = 0x230; // CUtlVector<thinkfunc_t>
    pub const m_iCurrentThinkContext: usize = 0x248; // int32_t
    pub const m_nLastThinkTick: usize = 0x24C; // GameTick_t
    pub const m_nDisableContextThinkStartTick: usize = 0x250; // GameTick_t
    pub const m_isSteadyState: usize = 0x260; // CBitVec<64>
    pub const m_lastNetworkChange: usize = 0x268; // float
    pub const m_ResponseContexts: usize = 0x278; // CUtlVector<ResponseContext_t>
    pub const m_iszResponseContext: usize = 0x290; // CUtlSymbolLarge
    pub const m_iHealth: usize = 0x2B8; // int32_t
    pub const m_iMaxHealth: usize = 0x2BC; // int32_t
    pub const m_lifeState: usize = 0x2C0; // uint8_t
    pub const m_flDamageAccumulator: usize = 0x2C4; // float
    pub const m_bTakesDamage: usize = 0x2C8; // bool
    pub const m_nTakeDamageFlags: usize = 0x2CC; // TakeDamageFlags_t
    pub const m_bIsPlatform: usize = 0x2D0; // bool
    pub const m_MoveCollide: usize = 0x2D2; // MoveCollide_t
    pub const m_MoveType: usize = 0x2D3; // MoveType_t
    pub const m_nActualMoveType: usize = 0x2D4; // MoveType_t
    pub const m_nWaterTouch: usize = 0x2D5; // uint8_t
    pub const m_nSlimeTouch: usize = 0x2D6; // uint8_t
    pub const m_bRestoreInHierarchy: usize = 0x2D7; // bool
    pub const m_target: usize = 0x2D8; // CUtlSymbolLarge
    pub const m_hDamageFilter: usize = 0x2E0; // CHandle<CBaseFilter>
    pub const m_iszDamageFilterName: usize = 0x2E8; // CUtlSymbolLarge
    pub const m_flMoveDoneTime: usize = 0x2F0; // float
    pub const m_nSubclassID: usize = 0x2F4; // CUtlStringToken
    pub const m_flAnimTime: usize = 0x300; // float
    pub const m_flSimulationTime: usize = 0x304; // float
    pub const m_flCreateTime: usize = 0x308; // GameTime_t
    pub const m_bClientSideRagdoll: usize = 0x30C; // bool
    pub const m_ubInterpolationFrame: usize = 0x30D; // uint8_t
    pub const m_vPrevVPhysicsUpdatePos: usize = 0x310; // Vector
    pub const m_iTeamNum: usize = 0x31C; // uint8_t
    pub const m_iGlobalname: usize = 0x320; // CUtlSymbolLarge
    pub const m_iSentToClients: usize = 0x328; // int32_t
    pub const m_flSpeed: usize = 0x32C; // float
    pub const m_sUniqueHammerID: usize = 0x330; // CUtlString
    pub const m_spawnflags: usize = 0x338; // uint32_t
    pub const m_nNextThinkTick: usize = 0x33C; // GameTick_t
    pub const m_nSimulationTick: usize = 0x340; // int32_t
    pub const m_OnKilled: usize = 0x348; // CEntityIOOutput
    pub const m_fFlags: usize = 0x370; // uint32_t
    pub const m_vecAbsVelocity: usize = 0x374; // Vector
    pub const m_vecVelocity: usize = 0x380; // CNetworkVelocityVector
    pub const m_vecBaseVelocity: usize = 0x3B0; // Vector
    pub const m_nPushEnumCount: usize = 0x3BC; // int32_t
    pub const m_pCollision: usize = 0x3C0; // CCollisionProperty*
    pub const m_hEffectEntity: usize = 0x3C8; // CHandle<CBaseEntity>
    pub const m_hOwnerEntity: usize = 0x3CC; // CHandle<CBaseEntity>
    pub const m_fEffects: usize = 0x3D0; // uint32_t
    pub const m_hGroundEntity: usize = 0x3D4; // CHandle<CBaseEntity>
    pub const m_flFriction: usize = 0x3D8; // float
    pub const m_flElasticity: usize = 0x3DC; // float
    pub const m_flGravityScale: usize = 0x3E0; // float
    pub const m_flTimeScale: usize = 0x3E4; // float
    pub const m_flWaterLevel: usize = 0x3E8; // float
    pub const m_bAnimatedEveryTick: usize = 0x3EC; // bool
    pub const m_bDisableLowViolence: usize = 0x3ED; // bool
    pub const m_nWaterType: usize = 0x3EE; // uint8_t
    pub const m_iEFlags: usize = 0x3F0; // int32_t
    pub const m_OnUser1: usize = 0x3F8; // CEntityIOOutput
    pub const m_OnUser2: usize = 0x420; // CEntityIOOutput
    pub const m_OnUser3: usize = 0x448; // CEntityIOOutput
    pub const m_OnUser4: usize = 0x470; // CEntityIOOutput
    pub const m_iInitialTeamNum: usize = 0x498; // int32_t
    pub const m_flNavIgnoreUntilTime: usize = 0x49C; // GameTime_t
    pub const m_vecAngVelocity: usize = 0x4A0; // QAngle
    pub const m_bNetworkQuantizeOriginAndAngles: usize = 0x4AC; // bool
    pub const m_bLagCompensate: usize = 0x4AD; // bool
    pub const m_flOverriddenFriction: usize = 0x4B0; // float
    pub const m_pBlocker: usize = 0x4B4; // CHandle<CBaseEntity>
    pub const m_flLocalTime: usize = 0x4B8; // float
    pub const m_flVPhysicsUpdateLocalTime: usize = 0x4BC; // float
}

pub mod CBaseEntityAPI {
}

pub mod CBaseFilter { // CLogicalEntity
    pub const m_bNegated: usize = 0x4C0; // bool
    pub const m_OnPass: usize = 0x4C8; // CEntityIOOutput
    pub const m_OnFail: usize = 0x4F0; // CEntityIOOutput
}

pub mod CBaseFire { // CBaseEntity
    pub const m_flScale: usize = 0x4C0; // float
    pub const m_flStartScale: usize = 0x4C4; // float
    pub const m_flScaleTime: usize = 0x4C8; // float
    pub const m_nFlags: usize = 0x4CC; // uint32_t
}

pub mod CBaseFlex { // CBaseAnimGraph
    pub const m_flexWeight: usize = 0x8E8; // CNetworkUtlVectorBase<float>
    pub const m_vLookTargetPosition: usize = 0x900; // Vector
    pub const m_blinktoggle: usize = 0x90C; // bool
    pub const m_flAllowResponsesEndTime: usize = 0x960; // GameTime_t
    pub const m_flLastFlexAnimationTime: usize = 0x964; // GameTime_t
    pub const m_nNextSceneEventId: usize = 0x968; // uint32_t
    pub const m_bUpdateLayerPriorities: usize = 0x96C; // bool
}

pub mod CBaseFlexAlias_funCBaseFlex { // CBaseFlex
}

pub mod CBaseGrenade { // CBaseFlex
    pub const m_OnPlayerPickup: usize = 0x980; // CEntityIOOutput
    pub const m_OnExplode: usize = 0x9A8; // CEntityIOOutput
    pub const m_bHasWarnedAI: usize = 0x9D0; // bool
    pub const m_bIsSmokeGrenade: usize = 0x9D1; // bool
    pub const m_bIsLive: usize = 0x9D2; // bool
    pub const m_DmgRadius: usize = 0x9D4; // float
    pub const m_flDetonateTime: usize = 0x9D8; // GameTime_t
    pub const m_flWarnAITime: usize = 0x9DC; // float
    pub const m_flDamage: usize = 0x9E0; // float
    pub const m_iszBounceSound: usize = 0x9E8; // CUtlSymbolLarge
    pub const m_ExplosionSound: usize = 0x9F0; // CUtlString
    pub const m_hThrower: usize = 0x9FC; // CHandle<CCSPlayerPawn>
    pub const m_flNextAttack: usize = 0xA14; // GameTime_t
    pub const m_hOriginalThrower: usize = 0xA18; // CHandle<CCSPlayerPawn>
}

pub mod CBaseIssue {
    pub const m_szTypeString: usize = 0x20; // char[64]
    pub const m_szDetailsString: usize = 0x60; // char[260]
    pub const m_iNumYesVotes: usize = 0x164; // int32_t
    pub const m_iNumNoVotes: usize = 0x168; // int32_t
    pub const m_iNumPotentialVotes: usize = 0x16C; // int32_t
    pub const m_pVoteController: usize = 0x170; // CVoteController*
}

pub mod CBaseModelEntity { // CBaseEntity
    pub const m_CRenderComponent: usize = 0x4C0; // CRenderComponent*
    pub const m_CHitboxComponent: usize = 0x4C8; // CHitboxComponent
    pub const m_flDissolveStartTime: usize = 0x4F0; // GameTime_t
    pub const m_OnIgnite: usize = 0x4F8; // CEntityIOOutput
    pub const m_nRenderMode: usize = 0x520; // RenderMode_t
    pub const m_nRenderFX: usize = 0x521; // RenderFx_t
    pub const m_bAllowFadeInView: usize = 0x522; // bool
    pub const m_clrRender: usize = 0x523; // Color
    pub const m_vecRenderAttributes: usize = 0x528; // CUtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
    pub const m_bRenderToCubemaps: usize = 0x578; // bool
    pub const m_Collision: usize = 0x580; // CCollisionProperty
    pub const m_Glow: usize = 0x630; // CGlowProperty
    pub const m_flGlowBackfaceMult: usize = 0x688; // float
    pub const m_fadeMinDist: usize = 0x68C; // float
    pub const m_fadeMaxDist: usize = 0x690; // float
    pub const m_flFadeScale: usize = 0x694; // float
    pub const m_flShadowStrength: usize = 0x698; // float
    pub const m_nObjectCulling: usize = 0x69C; // uint8_t
    pub const m_nAddDecal: usize = 0x6A0; // int32_t
    pub const m_vDecalPosition: usize = 0x6A4; // Vector
    pub const m_vDecalForwardAxis: usize = 0x6B0; // Vector
    pub const m_flDecalHealBloodRate: usize = 0x6BC; // float
    pub const m_flDecalHealHeightRate: usize = 0x6C0; // float
    pub const m_ConfigEntitiesToPropagateMaterialDecalsTo: usize = 0x6C8; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    pub const m_vecViewOffset: usize = 0x6E0; // CNetworkViewOffsetVector
}

pub mod CBaseMoveBehavior { // CPathKeyFrame
    pub const m_iPositionInterpolator: usize = 0x520; // int32_t
    pub const m_iRotationInterpolator: usize = 0x524; // int32_t
    pub const m_flAnimStartTime: usize = 0x528; // float
    pub const m_flAnimEndTime: usize = 0x52C; // float
    pub const m_flAverageSpeedAcrossFrame: usize = 0x530; // float
    pub const m_pCurrentKeyFrame: usize = 0x538; // CPathKeyFrame*
    pub const m_pTargetKeyFrame: usize = 0x540; // CPathKeyFrame*
    pub const m_pPreKeyFrame: usize = 0x548; // CPathKeyFrame*
    pub const m_pPostKeyFrame: usize = 0x550; // CPathKeyFrame*
    pub const m_flTimeIntoFrame: usize = 0x558; // float
    pub const m_iDirection: usize = 0x55C; // int32_t
}

pub mod CBasePlatTrain { // CBaseToggle
    pub const m_NoiseMoving: usize = 0x790; // CUtlSymbolLarge
    pub const m_NoiseArrived: usize = 0x798; // CUtlSymbolLarge
    pub const m_volume: usize = 0x7A8; // float
    pub const m_flTWidth: usize = 0x7AC; // float
    pub const m_flTLength: usize = 0x7B0; // float
}

pub mod CBasePlayerController { // CBaseEntity
    pub const m_nInButtonsWhichAreToggles: usize = 0x4C8; // uint64_t
    pub const m_nTickBase: usize = 0x4D0; // uint32_t
    pub const m_hPawn: usize = 0x500; // CHandle<CBasePlayerPawn>
    pub const m_nSplitScreenSlot: usize = 0x504; // CSplitScreenSlot
    pub const m_hSplitOwner: usize = 0x508; // CHandle<CBasePlayerController>
    pub const m_hSplitScreenPlayers: usize = 0x510; // CUtlVector<CHandle<CBasePlayerController>>
    pub const m_bIsHLTV: usize = 0x528; // bool
    pub const m_iConnected: usize = 0x52C; // PlayerConnectedState
    pub const m_iszPlayerName: usize = 0x530; // char[128]
    pub const m_szNetworkIDString: usize = 0x5B0; // CUtlString
    pub const m_fLerpTime: usize = 0x5B8; // float
    pub const m_bLagCompensation: usize = 0x5BC; // bool
    pub const m_bPredict: usize = 0x5BD; // bool
    pub const m_bAutoKickDisabled: usize = 0x5BE; // bool
    pub const m_bIsLowViolence: usize = 0x5BF; // bool
    pub const m_bGamePaused: usize = 0x5C0; // bool
    pub const m_nLastRealCommandNumberExecuted: usize = 0x654; // int32_t
    pub const m_nLastLateCommandExecuted: usize = 0x658; // int32_t
    pub const m_iIgnoreGlobalChat: usize = 0x670; // ChatIgnoreType_t
    pub const m_flLastPlayerTalkTime: usize = 0x674; // float
    pub const m_flLastEntitySteadyState: usize = 0x678; // float
    pub const m_nAvailableEntitySteadyState: usize = 0x67C; // int32_t
    pub const m_bHasAnySteadyStateEnts: usize = 0x680; // bool
    pub const m_steamID: usize = 0x690; // uint64_t
    pub const m_iDesiredFOV: usize = 0x698; // uint32_t
}

pub mod CBasePlayerControllerAPI {
}

pub mod CBasePlayerPawn { // CBaseCombatCharacter
    pub const m_pWeaponServices: usize = 0xA10; // CPlayer_WeaponServices*
    pub const m_pItemServices: usize = 0xA18; // CPlayer_ItemServices*
    pub const m_pAutoaimServices: usize = 0xA20; // CPlayer_AutoaimServices*
    pub const m_pObserverServices: usize = 0xA28; // CPlayer_ObserverServices*
    pub const m_pWaterServices: usize = 0xA30; // CPlayer_WaterServices*
    pub const m_pUseServices: usize = 0xA38; // CPlayer_UseServices*
    pub const m_pFlashlightServices: usize = 0xA40; // CPlayer_FlashlightServices*
    pub const m_pCameraServices: usize = 0xA48; // CPlayer_CameraServices*
    pub const m_pMovementServices: usize = 0xA50; // CPlayer_MovementServices*
    pub const m_ServerViewAngleChanges: usize = 0xA60; // CUtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
    pub const m_nHighestGeneratedServerViewAngleChangeIndex: usize = 0xAB0; // uint32_t
    pub const v_angle: usize = 0xAB4; // QAngle
    pub const v_anglePrevious: usize = 0xAC0; // QAngle
    pub const m_iHideHUD: usize = 0xACC; // uint32_t
    pub const m_skybox3d: usize = 0xAD0; // sky3dparams_t
    pub const m_fTimeLastHurt: usize = 0xB60; // GameTime_t
    pub const m_flDeathTime: usize = 0xB64; // GameTime_t
    pub const m_fNextSuicideTime: usize = 0xB68; // GameTime_t
    pub const m_fInitHUD: usize = 0xB6C; // bool
    pub const m_pExpresser: usize = 0xB70; // CAI_Expresser*
    pub const m_hController: usize = 0xB78; // CHandle<CBasePlayerController>
    pub const m_fHltvReplayDelay: usize = 0xB80; // float
    pub const m_fHltvReplayEnd: usize = 0xB84; // float
    pub const m_iHltvReplayEntity: usize = 0xB88; // CEntityIndex
    pub const m_sndOpvarLatchData: usize = 0xB90; // CUtlVector<sndopvarlatchdata_t>
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
    pub const m_nNextPrimaryAttackTick: usize = 0xC70; // GameTick_t
    pub const m_flNextPrimaryAttackTickRatio: usize = 0xC74; // float
    pub const m_nNextSecondaryAttackTick: usize = 0xC78; // GameTick_t
    pub const m_flNextSecondaryAttackTickRatio: usize = 0xC7C; // float
    pub const m_iClip1: usize = 0xC80; // int32_t
    pub const m_iClip2: usize = 0xC84; // int32_t
    pub const m_pReserveAmmo: usize = 0xC88; // int32_t[2]
    pub const m_OnPlayerUse: usize = 0xC90; // CEntityIOOutput
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
    pub const m_bModelOverrodeBlockLOS: usize = 0x8E8; // bool
    pub const m_iShapeType: usize = 0x8EC; // int32_t
    pub const m_bConformToCollisionBounds: usize = 0x8F0; // bool
    pub const m_mPreferredCatchTransform: usize = 0x8F4; // matrix3x4_t
}

pub mod CBasePropDoor { // CDynamicProp
    pub const m_flAutoReturnDelay: usize = 0xB70; // float
    pub const m_hDoorList: usize = 0xB78; // CUtlVector<CHandle<CBasePropDoor>>
    pub const m_nHardwareType: usize = 0xB90; // int32_t
    pub const m_bNeedsHardware: usize = 0xB94; // bool
    pub const m_eDoorState: usize = 0xB98; // DoorState_t
    pub const m_bLocked: usize = 0xB9C; // bool
    pub const m_closedPosition: usize = 0xBA0; // Vector
    pub const m_closedAngles: usize = 0xBAC; // QAngle
    pub const m_hBlocker: usize = 0xBB8; // CHandle<CBaseEntity>
    pub const m_bFirstBlocked: usize = 0xBBC; // bool
    pub const m_ls: usize = 0xBC0; // locksound_t
    pub const m_bForceClosed: usize = 0xBE0; // bool
    pub const m_vecLatchWorldPosition: usize = 0xBE4; // Vector
    pub const m_hActivator: usize = 0xBF0; // CHandle<CBaseEntity>
    pub const m_SoundMoving: usize = 0xC00; // CUtlSymbolLarge
    pub const m_SoundOpen: usize = 0xC08; // CUtlSymbolLarge
    pub const m_SoundClose: usize = 0xC10; // CUtlSymbolLarge
    pub const m_SoundLock: usize = 0xC18; // CUtlSymbolLarge
    pub const m_SoundUnlock: usize = 0xC20; // CUtlSymbolLarge
    pub const m_SoundLatch: usize = 0xC28; // CUtlSymbolLarge
    pub const m_SoundPound: usize = 0xC30; // CUtlSymbolLarge
    pub const m_SoundJiggle: usize = 0xC38; // CUtlSymbolLarge
    pub const m_SoundLockedAnim: usize = 0xC40; // CUtlSymbolLarge
    pub const m_numCloseAttempts: usize = 0xC48; // int32_t
    pub const m_nPhysicsMaterial: usize = 0xC4C; // CUtlStringToken
    pub const m_SlaveName: usize = 0xC50; // CUtlSymbolLarge
    pub const m_hMaster: usize = 0xC58; // CHandle<CBasePropDoor>
    pub const m_OnBlockedClosing: usize = 0xC60; // CEntityIOOutput
    pub const m_OnBlockedOpening: usize = 0xC88; // CEntityIOOutput
    pub const m_OnUnblockedClosing: usize = 0xCB0; // CEntityIOOutput
    pub const m_OnUnblockedOpening: usize = 0xCD8; // CEntityIOOutput
    pub const m_OnFullyClosed: usize = 0xD00; // CEntityIOOutput
    pub const m_OnFullyOpen: usize = 0xD28; // CEntityIOOutput
    pub const m_OnClose: usize = 0xD50; // CEntityIOOutput
    pub const m_OnOpen: usize = 0xD78; // CEntityIOOutput
    pub const m_OnLockedUse: usize = 0xDA0; // CEntityIOOutput
    pub const m_OnAjarOpen: usize = 0xDC8; // CEntityIOOutput
}

pub mod CBaseToggle { // CBaseModelEntity
    pub const m_toggle_state: usize = 0x710; // TOGGLE_STATE
    pub const m_flMoveDistance: usize = 0x714; // float
    pub const m_flWait: usize = 0x718; // float
    pub const m_flLip: usize = 0x71C; // float
    pub const m_bAlwaysFireBlockedOutputs: usize = 0x720; // bool
    pub const m_vecPosition1: usize = 0x724; // Vector
    pub const m_vecPosition2: usize = 0x730; // Vector
    pub const m_vecMoveAng: usize = 0x73C; // QAngle
    pub const m_vecAngle1: usize = 0x748; // QAngle
    pub const m_vecAngle2: usize = 0x754; // QAngle
    pub const m_flHeight: usize = 0x760; // float
    pub const m_hActivator: usize = 0x764; // CHandle<CBaseEntity>
    pub const m_vecFinalDest: usize = 0x768; // Vector
    pub const m_vecFinalAngle: usize = 0x774; // QAngle
    pub const m_movementType: usize = 0x780; // int32_t
    pub const m_sMaster: usize = 0x788; // CUtlSymbolLarge
}

pub mod CBaseTrigger { // CBaseToggle
    pub const m_bDisabled: usize = 0x790; // bool
    pub const m_iFilterName: usize = 0x798; // CUtlSymbolLarge
    pub const m_hFilter: usize = 0x7A0; // CHandle<CBaseFilter>
    pub const m_OnStartTouch: usize = 0x7A8; // CEntityIOOutput
    pub const m_OnStartTouchAll: usize = 0x7D0; // CEntityIOOutput
    pub const m_OnEndTouch: usize = 0x7F8; // CEntityIOOutput
    pub const m_OnEndTouchAll: usize = 0x820; // CEntityIOOutput
    pub const m_OnTouching: usize = 0x848; // CEntityIOOutput
    pub const m_OnNotTouching: usize = 0x870; // CEntityIOOutput
    pub const m_hTouchingEntities: usize = 0x898; // CUtlVector<CHandle<CBaseEntity>>
    pub const m_bClientSidePredicted: usize = 0x8B0; // bool
}

pub mod CBaseViewModel { // CBaseAnimGraph
    pub const m_vecLastFacing: usize = 0x8F0; // Vector
    pub const m_nViewModelIndex: usize = 0x8FC; // uint32_t
    pub const m_nAnimationParity: usize = 0x900; // uint32_t
    pub const m_flAnimationStartTime: usize = 0x904; // float
    pub const m_hWeapon: usize = 0x908; // CHandle<CBasePlayerWeapon>
    pub const m_sVMName: usize = 0x910; // CUtlSymbolLarge
    pub const m_sAnimationPrefix: usize = 0x918; // CUtlSymbolLarge
    pub const m_hOldLayerSequence: usize = 0x920; // HSequence
    pub const m_oldLayer: usize = 0x924; // int32_t
    pub const m_oldLayerStartTime: usize = 0x928; // float
    pub const m_hControlPanel: usize = 0x92C; // CHandle<CBaseEntity>
}

pub mod CBeam { // CBaseModelEntity
    pub const m_flFrameRate: usize = 0x710; // float
    pub const m_flHDRColorScale: usize = 0x714; // float
    pub const m_flFireTime: usize = 0x718; // GameTime_t
    pub const m_flDamage: usize = 0x71C; // float
    pub const m_nNumBeamEnts: usize = 0x720; // uint8_t
    pub const m_hBaseMaterial: usize = 0x728; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_nHaloIndex: usize = 0x730; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_nBeamType: usize = 0x738; // BeamType_t
    pub const m_nBeamFlags: usize = 0x73C; // uint32_t
    pub const m_hAttachEntity: usize = 0x740; // CHandle<CBaseEntity>[10]
    pub const m_nAttachIndex: usize = 0x768; // AttachmentHandle_t[10]
    pub const m_fWidth: usize = 0x774; // float
    pub const m_fEndWidth: usize = 0x778; // float
    pub const m_fFadeLength: usize = 0x77C; // float
    pub const m_fHaloScale: usize = 0x780; // float
    pub const m_fAmplitude: usize = 0x784; // float
    pub const m_fStartFrame: usize = 0x788; // float
    pub const m_fSpeed: usize = 0x78C; // float
    pub const m_flFrame: usize = 0x790; // float
    pub const m_nClipStyle: usize = 0x794; // BeamClipStyle_t
    pub const m_bTurnedOff: usize = 0x798; // bool
    pub const m_vecEndPos: usize = 0x79C; // Vector
    pub const m_hEndEntity: usize = 0x7A8; // CHandle<CBaseEntity>
    pub const m_nDissolveType: usize = 0x7AC; // int32_t
}

pub mod CBlood { // CPointEntity
    pub const m_vecSprayAngles: usize = 0x4C0; // QAngle
    pub const m_vecSprayDir: usize = 0x4CC; // Vector
    pub const m_flAmount: usize = 0x4D8; // float
    pub const m_Color: usize = 0x4DC; // int32_t
}

pub mod CBodyComponent { // CEntityComponent
    pub const m_pSceneNode: usize = 0x8; // CGameSceneNode*
    pub const __m_pChainEntity: usize = 0x20; // CNetworkVarChainer
}

pub mod CBodyComponentBaseAnimGraph { // CBodyComponentSkeletonInstance
    pub const m_animationController: usize = 0x460; // CBaseAnimGraphController
    pub const __m_pChainEntity: usize = 0x950; // CNetworkVarChainer
}

pub mod CBodyComponentBaseModelEntity { // CBodyComponentSkeletonInstance
    pub const __m_pChainEntity: usize = 0x460; // CNetworkVarChainer
}

pub mod CBodyComponentPoint { // CBodyComponent
    pub const m_sceneNode: usize = 0x50; // CGameSceneNode
    pub const __m_pChainEntity: usize = 0x1A0; // CNetworkVarChainer
}

pub mod CBodyComponentSkeletonInstance { // CBodyComponent
    pub const m_skeletonInstance: usize = 0x50; // CSkeletonInstance
    pub const __m_pChainEntity: usize = 0x430; // CNetworkVarChainer
}

pub mod CBombTarget { // CBaseTrigger
    pub const m_OnBombExplode: usize = 0x8B8; // CEntityIOOutput
    pub const m_OnBombPlanted: usize = 0x8E0; // CEntityIOOutput
    pub const m_OnBombDefused: usize = 0x908; // CEntityIOOutput
    pub const m_bIsBombSiteB: usize = 0x930; // bool
    pub const m_bIsHeistBombTarget: usize = 0x931; // bool
    pub const m_bBombPlantedHere: usize = 0x932; // bool
    pub const m_szMountTarget: usize = 0x938; // CUtlSymbolLarge
    pub const m_hInstructorHint: usize = 0x940; // CHandle<CBaseEntity>
    pub const m_nBombSiteDesignation: usize = 0x944; // int32_t
}

pub mod CBot {
    pub const m_pController: usize = 0x10; // CCSPlayerController*
    pub const m_pPlayer: usize = 0x18; // CCSPlayerPawn*
    pub const m_bHasSpawned: usize = 0x20; // bool
    pub const m_id: usize = 0x24; // uint32_t
    pub const m_isRunning: usize = 0xB0; // bool
    pub const m_isCrouching: usize = 0xB1; // bool
    pub const m_forwardSpeed: usize = 0xB4; // float
    pub const m_leftSpeed: usize = 0xB8; // float
    pub const m_verticalSpeed: usize = 0xBC; // float
    pub const m_buttonFlags: usize = 0xC0; // uint64_t
    pub const m_jumpTimestamp: usize = 0xC8; // float
    pub const m_viewForward: usize = 0xCC; // Vector
    pub const m_postureStackIndex: usize = 0xE8; // int32_t
}

pub mod CBreachCharge { // CCSWeaponBase
}

pub mod CBreachChargeProjectile { // CBaseGrenade
}

pub mod CBreakable { // CBaseModelEntity
    pub const m_Material: usize = 0x720; // Materials
    pub const m_hBreaker: usize = 0x724; // CHandle<CBaseEntity>
    pub const m_Explosion: usize = 0x728; // Explosions
    pub const m_iszSpawnObject: usize = 0x730; // CUtlSymbolLarge
    pub const m_flPressureDelay: usize = 0x738; // float
    pub const m_iMinHealthDmg: usize = 0x73C; // int32_t
    pub const m_iszPropData: usize = 0x740; // CUtlSymbolLarge
    pub const m_impactEnergyScale: usize = 0x748; // float
    pub const m_nOverrideBlockLOS: usize = 0x74C; // EOverrideBlockLOS_t
    pub const m_OnBreak: usize = 0x750; // CEntityIOOutput
    pub const m_OnHealthChanged: usize = 0x778; // CEntityOutputTemplate<float>
    pub const m_flDmgModBullet: usize = 0x7A0; // float
    pub const m_flDmgModClub: usize = 0x7A4; // float
    pub const m_flDmgModExplosive: usize = 0x7A8; // float
    pub const m_flDmgModFire: usize = 0x7AC; // float
    pub const m_iszPhysicsDamageTableName: usize = 0x7B0; // CUtlSymbolLarge
    pub const m_iszBasePropData: usize = 0x7B8; // CUtlSymbolLarge
    pub const m_iInteractions: usize = 0x7C0; // int32_t
    pub const m_PerformanceMode: usize = 0x7C4; // PerformanceMode_t
    pub const m_hPhysicsAttacker: usize = 0x7C8; // CHandle<CBasePlayerPawn>
    pub const m_flLastPhysicsInfluenceTime: usize = 0x7CC; // GameTime_t
}

pub mod CBreakableProp { // CBaseProp
    pub const m_OnBreak: usize = 0x938; // CEntityIOOutput
    pub const m_OnHealthChanged: usize = 0x960; // CEntityOutputTemplate<float>
    pub const m_OnTakeDamage: usize = 0x988; // CEntityIOOutput
    pub const m_impactEnergyScale: usize = 0x9B0; // float
    pub const m_iMinHealthDmg: usize = 0x9B4; // int32_t
    pub const m_preferredCarryAngles: usize = 0x9B8; // QAngle
    pub const m_flPressureDelay: usize = 0x9C4; // float
    pub const m_hBreaker: usize = 0x9C8; // CHandle<CBaseEntity>
    pub const m_PerformanceMode: usize = 0x9CC; // PerformanceMode_t
    pub const m_flDmgModBullet: usize = 0x9D0; // float
    pub const m_flDmgModClub: usize = 0x9D4; // float
    pub const m_flDmgModExplosive: usize = 0x9D8; // float
    pub const m_flDmgModFire: usize = 0x9DC; // float
    pub const m_iszPhysicsDamageTableName: usize = 0x9E0; // CUtlSymbolLarge
    pub const m_iszBasePropData: usize = 0x9E8; // CUtlSymbolLarge
    pub const m_iInteractions: usize = 0x9F0; // int32_t
    pub const m_flPreventDamageBeforeTime: usize = 0x9F4; // GameTime_t
    pub const m_bHasBreakPiecesOrCommands: usize = 0x9F8; // bool
    pub const m_explodeDamage: usize = 0x9FC; // float
    pub const m_explodeRadius: usize = 0xA00; // float
    pub const m_explosionDelay: usize = 0xA08; // float
    pub const m_explosionBuildupSound: usize = 0xA10; // CUtlSymbolLarge
    pub const m_explosionCustomEffect: usize = 0xA18; // CUtlSymbolLarge
    pub const m_explosionCustomSound: usize = 0xA20; // CUtlSymbolLarge
    pub const m_explosionModifier: usize = 0xA28; // CUtlSymbolLarge
    pub const m_hPhysicsAttacker: usize = 0xA30; // CHandle<CBasePlayerPawn>
    pub const m_flLastPhysicsInfluenceTime: usize = 0xA34; // GameTime_t
    pub const m_bOriginalBlockLOS: usize = 0xA38; // bool
    pub const m_flDefaultFadeScale: usize = 0xA3C; // float
    pub const m_hLastAttacker: usize = 0xA40; // CHandle<CBaseEntity>
    pub const m_hFlareEnt: usize = 0xA44; // CHandle<CBaseEntity>
    pub const m_bUsePuntSound: usize = 0xA48; // bool
    pub const m_iszPuntSound: usize = 0xA50; // CUtlSymbolLarge
    pub const m_noGhostCollision: usize = 0xA58; // bool
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
    pub const m_density: usize = 0x710; // int32_t
    pub const m_frequency: usize = 0x714; // int32_t
    pub const m_state: usize = 0x718; // int32_t
}

pub mod CBumpMine { // CCSWeaponBase
}

pub mod CBumpMineProjectile { // CBaseGrenade
}

pub mod CBuoyancyHelper {
    pub const m_flFluidDensity: usize = 0x18; // float
}

pub mod CBuyZone { // CBaseTrigger
    pub const m_LegacyTeamNum: usize = 0x8B8; // int32_t
}

pub mod CC4 { // CCSWeaponBase
    pub const m_vecLastValidPlayerHeldPosition: usize = 0xE90; // Vector
    pub const m_vecLastValidDroppedPosition: usize = 0xE9C; // Vector
    pub const m_bDoValidDroppedPositionCheck: usize = 0xEA8; // bool
    pub const m_bStartedArming: usize = 0xEA9; // bool
    pub const m_fArmedTime: usize = 0xEAC; // GameTime_t
    pub const m_bBombPlacedAnimation: usize = 0xEB0; // bool
    pub const m_bIsPlantingViaUse: usize = 0xEB1; // bool
    pub const m_entitySpottedState: usize = 0xEB8; // EntitySpottedState_t
    pub const m_nSpotRules: usize = 0xED0; // int32_t
    pub const m_bPlayedArmingBeeps: usize = 0xED4; // bool[7]
    pub const m_bBombPlanted: usize = 0xEDB; // bool
}

pub mod CCSArmsRaceScript { // CCSGameModeScript
    pub const m_pOuter: usize = 0xD8; // CCSGameModeRules_ArmsRace*
}

pub mod CCSBot { // CBot
    pub const m_lastCoopSpawnPoint: usize = 0xF0; // CHandle<SpawnPointCoopEnemy>
    pub const m_eyePosition: usize = 0x100; // Vector
    pub const m_name: usize = 0x10C; // char[64]
    pub const m_combatRange: usize = 0x14C; // float
    pub const m_isRogue: usize = 0x150; // bool
    pub const m_rogueTimer: usize = 0x158; // CountdownTimer
    pub const m_diedLastRound: usize = 0x174; // bool
    pub const m_safeTime: usize = 0x178; // float
    pub const m_wasSafe: usize = 0x17C; // bool
    pub const m_blindFire: usize = 0x184; // bool
    pub const m_surpriseTimer: usize = 0x188; // CountdownTimer
    pub const m_bAllowActive: usize = 0x1A0; // bool
    pub const m_isFollowing: usize = 0x1A1; // bool
    pub const m_leader: usize = 0x1A4; // CHandle<CCSPlayerPawn>
    pub const m_followTimestamp: usize = 0x1A8; // float
    pub const m_allowAutoFollowTime: usize = 0x1AC; // float
    pub const m_hurryTimer: usize = 0x1B0; // CountdownTimer
    pub const m_alertTimer: usize = 0x1C8; // CountdownTimer
    pub const m_sneakTimer: usize = 0x1E0; // CountdownTimer
    pub const m_panicTimer: usize = 0x1F8; // CountdownTimer
    pub const m_stateTimestamp: usize = 0x4C8; // float
    pub const m_isAttacking: usize = 0x4CC; // bool
    pub const m_isOpeningDoor: usize = 0x4CD; // bool
    pub const m_taskEntity: usize = 0x4D4; // CHandle<CBaseEntity>
    pub const m_goalPosition: usize = 0x4E4; // Vector
    pub const m_goalEntity: usize = 0x4F0; // CHandle<CBaseEntity>
    pub const m_avoid: usize = 0x4F4; // CHandle<CBaseEntity>
    pub const m_avoidTimestamp: usize = 0x4F8; // float
    pub const m_isStopping: usize = 0x4FC; // bool
    pub const m_hasVisitedEnemySpawn: usize = 0x4FD; // bool
    pub const m_stillTimer: usize = 0x500; // IntervalTimer
    pub const m_bEyeAnglesUnderPathFinderControl: usize = 0x510; // bool
    pub const m_pathIndex: usize = 0x6608; // int32_t
    pub const m_areaEnteredTimestamp: usize = 0x660C; // GameTime_t
    pub const m_repathTimer: usize = 0x6610; // CountdownTimer
    pub const m_avoidFriendTimer: usize = 0x6628; // CountdownTimer
    pub const m_isFriendInTheWay: usize = 0x6640; // bool
    pub const m_politeTimer: usize = 0x6648; // CountdownTimer
    pub const m_isWaitingBehindFriend: usize = 0x6660; // bool
    pub const m_pathLadderEnd: usize = 0x668C; // float
    pub const m_mustRunTimer: usize = 0x66D8; // CountdownTimer
    pub const m_waitTimer: usize = 0x66F0; // CountdownTimer
    pub const m_updateTravelDistanceTimer: usize = 0x6708; // CountdownTimer
    pub const m_playerTravelDistance: usize = 0x6720; // float[64]
    pub const m_travelDistancePhase: usize = 0x6820; // uint8_t
    pub const m_hostageEscortCount: usize = 0x69B8; // uint8_t
    pub const m_hostageEscortCountTimestamp: usize = 0x69BC; // float
    pub const m_desiredTeam: usize = 0x69C0; // int32_t
    pub const m_hasJoined: usize = 0x69C4; // bool
    pub const m_isWaitingForHostage: usize = 0x69C5; // bool
    pub const m_inhibitWaitingForHostageTimer: usize = 0x69C8; // CountdownTimer
    pub const m_waitForHostageTimer: usize = 0x69E0; // CountdownTimer
    pub const m_noisePosition: usize = 0x69F8; // Vector
    pub const m_noiseTravelDistance: usize = 0x6A04; // float
    pub const m_noiseTimestamp: usize = 0x6A08; // float
    pub const m_noiseSource: usize = 0x6A10; // CCSPlayerPawn*
    pub const m_noiseBendTimer: usize = 0x6A28; // CountdownTimer
    pub const m_bentNoisePosition: usize = 0x6A40; // Vector
    pub const m_bendNoisePositionValid: usize = 0x6A4C; // bool
    pub const m_lookAroundStateTimestamp: usize = 0x6A50; // float
    pub const m_lookAheadAngle: usize = 0x6A54; // float
    pub const m_forwardAngle: usize = 0x6A58; // float
    pub const m_inhibitLookAroundTimestamp: usize = 0x6A5C; // float
    pub const m_lookAtSpot: usize = 0x6A64; // Vector
    pub const m_lookAtSpotDuration: usize = 0x6A74; // float
    pub const m_lookAtSpotTimestamp: usize = 0x6A78; // float
    pub const m_lookAtSpotAngleTolerance: usize = 0x6A7C; // float
    pub const m_lookAtSpotClearIfClose: usize = 0x6A80; // bool
    pub const m_lookAtSpotAttack: usize = 0x6A81; // bool
    pub const m_lookAtDesc: usize = 0x6A88; // char*
    pub const m_peripheralTimestamp: usize = 0x6A90; // float
    pub const m_approachPointCount: usize = 0x6C18; // uint8_t
    pub const m_approachPointViewPosition: usize = 0x6C1C; // Vector
    pub const m_viewSteadyTimer: usize = 0x6C28; // IntervalTimer
    pub const m_tossGrenadeTimer: usize = 0x6C40; // CountdownTimer
    pub const m_isAvoidingGrenade: usize = 0x6C60; // CountdownTimer
    pub const m_spotCheckTimestamp: usize = 0x6C80; // float
    pub const m_checkedHidingSpotCount: usize = 0x7088; // int32_t
    pub const m_lookPitch: usize = 0x708C; // float
    pub const m_lookPitchVel: usize = 0x7090; // float
    pub const m_lookYaw: usize = 0x7094; // float
    pub const m_lookYawVel: usize = 0x7098; // float
    pub const m_targetSpot: usize = 0x709C; // Vector
    pub const m_targetSpotVelocity: usize = 0x70A8; // Vector
    pub const m_targetSpotPredicted: usize = 0x70B4; // Vector
    pub const m_aimError: usize = 0x70C0; // QAngle
    pub const m_aimGoal: usize = 0x70CC; // QAngle
    pub const m_targetSpotTime: usize = 0x70D8; // GameTime_t
    pub const m_aimFocus: usize = 0x70DC; // float
    pub const m_aimFocusInterval: usize = 0x70E0; // float
    pub const m_aimFocusNextUpdate: usize = 0x70E4; // GameTime_t
    pub const m_ignoreEnemiesTimer: usize = 0x70F0; // CountdownTimer
    pub const m_enemy: usize = 0x7108; // CHandle<CCSPlayerPawn>
    pub const m_isEnemyVisible: usize = 0x710C; // bool
    pub const m_visibleEnemyParts: usize = 0x710D; // uint8_t
    pub const m_lastEnemyPosition: usize = 0x7110; // Vector
    pub const m_lastSawEnemyTimestamp: usize = 0x711C; // float
    pub const m_firstSawEnemyTimestamp: usize = 0x7120; // float
    pub const m_currentEnemyAcquireTimestamp: usize = 0x7124; // float
    pub const m_enemyDeathTimestamp: usize = 0x7128; // float
    pub const m_friendDeathTimestamp: usize = 0x712C; // float
    pub const m_isLastEnemyDead: usize = 0x7130; // bool
    pub const m_nearbyEnemyCount: usize = 0x7134; // int32_t
    pub const m_bomber: usize = 0x7340; // CHandle<CCSPlayerPawn>
    pub const m_nearbyFriendCount: usize = 0x7344; // int32_t
    pub const m_closestVisibleFriend: usize = 0x7348; // CHandle<CCSPlayerPawn>
    pub const m_closestVisibleHumanFriend: usize = 0x734C; // CHandle<CCSPlayerPawn>
    pub const m_attentionInterval: usize = 0x7350; // IntervalTimer
    pub const m_attacker: usize = 0x7360; // CHandle<CCSPlayerPawn>
    pub const m_attackedTimestamp: usize = 0x7364; // float
    pub const m_burnedByFlamesTimer: usize = 0x7368; // IntervalTimer
    pub const m_lastVictimID: usize = 0x7378; // int32_t
    pub const m_isAimingAtEnemy: usize = 0x737C; // bool
    pub const m_isRapidFiring: usize = 0x737D; // bool
    pub const m_equipTimer: usize = 0x7380; // IntervalTimer
    pub const m_zoomTimer: usize = 0x7390; // CountdownTimer
    pub const m_fireWeaponTimestamp: usize = 0x73A8; // GameTime_t
    pub const m_lookForWeaponsOnGroundTimer: usize = 0x73B0; // CountdownTimer
    pub const m_bIsSleeping: usize = 0x73C8; // bool
    pub const m_isEnemySniperVisible: usize = 0x73C9; // bool
    pub const m_sawEnemySniperTimer: usize = 0x73D0; // CountdownTimer
    pub const m_enemyQueueIndex: usize = 0x7488; // uint8_t
    pub const m_enemyQueueCount: usize = 0x7489; // uint8_t
    pub const m_enemyQueueAttendIndex: usize = 0x748A; // uint8_t
    pub const m_isStuck: usize = 0x748B; // bool
    pub const m_stuckTimestamp: usize = 0x748C; // GameTime_t
    pub const m_stuckSpot: usize = 0x7490; // Vector
    pub const m_wiggleTimer: usize = 0x74A0; // CountdownTimer
    pub const m_stuckJumpTimer: usize = 0x74B8; // CountdownTimer
    pub const m_nextCleanupCheckTimestamp: usize = 0x74D0; // GameTime_t
    pub const m_avgVel: usize = 0x74D4; // float[10]
    pub const m_avgVelIndex: usize = 0x74FC; // int32_t
    pub const m_avgVelCount: usize = 0x7500; // int32_t
    pub const m_lastOrigin: usize = 0x7504; // Vector
    pub const m_lastRadioRecievedTimestamp: usize = 0x7514; // float
    pub const m_lastRadioSentTimestamp: usize = 0x7518; // float
    pub const m_radioSubject: usize = 0x751C; // CHandle<CCSPlayerPawn>
    pub const m_radioPosition: usize = 0x7520; // Vector
    pub const m_voiceEndTimestamp: usize = 0x752C; // float
    pub const m_lastValidReactionQueueFrame: usize = 0x7538; // int32_t
}

pub mod CCSDeathmatchScript { // CCSGameModeScript
    pub const m_pOuter: usize = 0xD8; // CCSGameModeRules_Deathmatch*
}

pub mod CCSDeathmatchScript_ConVars {
}

pub mod CCSGOPlayerAnimGraphState {
}

pub mod CCSGOViewModel { // CPredictedViewModel
    pub const m_bShouldIgnoreOffsetAndAccuracy: usize = 0x930; // bool
    pub const m_nWeaponParity: usize = 0x934; // uint32_t
    pub const m_nOldWeaponParity: usize = 0x938; // uint32_t
}

pub mod CCSGO_TeamIntroCharacterPosition { // CCSGO_TeamPreviewCharacterPosition
}

pub mod CCSGO_TeamIntroCounterTerroristPosition { // CCSGO_TeamIntroCharacterPosition
}

pub mod CCSGO_TeamIntroTerroristPosition { // CCSGO_TeamIntroCharacterPosition
}

pub mod CCSGO_TeamPreviewCharacterPosition { // CBaseEntity
    pub const m_nVariant: usize = 0x4C0; // int32_t
    pub const m_nRandom: usize = 0x4C4; // int32_t
    pub const m_nOrdinal: usize = 0x4C8; // int32_t
    pub const m_sWeaponName: usize = 0x4D0; // CUtlString
    pub const m_xuid: usize = 0x4D8; // uint64_t
    pub const m_agentItem: usize = 0x4E0; // CEconItemView
    pub const m_glovesItem: usize = 0x758; // CEconItemView
    pub const m_weaponItem: usize = 0x9D0; // CEconItemView
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
    pub const m_hPlayerResource: usize = 0x1570; // CHandle<CBaseEntity>
    pub const m_RetakeRules: usize = 0x1578; // CRetakeGameRules
    pub const m_GuardianBotSkillLevelMax: usize = 0x175C; // int32_t
    pub const m_GuardianBotSkillLevelMin: usize = 0x1760; // int32_t
    pub const m_arrTeamUniqueKillWeaponsMatch: usize = 0x1768; // CUtlVector<int32_t>[4]
    pub const m_bTeamLastKillUsedUniqueWeaponMatch: usize = 0x17C8; // bool[4]
    pub const m_nMatchEndCount: usize = 0x17F0; // uint8_t
    pub const m_nTTeamIntroVariant: usize = 0x17F4; // int32_t
    pub const m_nCTTeamIntroVariant: usize = 0x17F8; // int32_t
    pub const m_bTeamIntroPeriod: usize = 0x17FC; // bool
    pub const m_fTeamIntroPeriodEnd: usize = 0x1800; // GameTime_t
    pub const m_bPlayedTeamIntroVO: usize = 0x1804; // bool
    pub const m_iRoundEndWinnerTeam: usize = 0x1808; // int32_t
    pub const m_eRoundEndReason: usize = 0x180C; // int32_t
    pub const m_bRoundEndShowTimerDefend: usize = 0x1810; // bool
    pub const m_iRoundEndTimerTime: usize = 0x1814; // int32_t
    pub const m_sRoundEndFunFactToken: usize = 0x1818; // CUtlString
    pub const m_iRoundEndFunFactPlayerSlot: usize = 0x1820; // CPlayerSlot
    pub const m_iRoundEndFunFactData1: usize = 0x1824; // int32_t
    pub const m_iRoundEndFunFactData2: usize = 0x1828; // int32_t
    pub const m_iRoundEndFunFactData3: usize = 0x182C; // int32_t
    pub const m_sRoundEndMessage: usize = 0x1830; // CUtlString
    pub const m_iRoundEndPlayerCount: usize = 0x1838; // int32_t
    pub const m_bRoundEndNoMusic: usize = 0x183C; // bool
    pub const m_iRoundEndLegacy: usize = 0x1840; // int32_t
    pub const m_nRoundEndCount: usize = 0x1844; // uint8_t
    pub const m_iRoundStartRoundNumber: usize = 0x1848; // int32_t
    pub const m_nRoundStartCount: usize = 0x184C; // uint8_t
    pub const m_flLastPerfSampleTime: usize = 0x5858; // double
    pub const m_bSkipNextServerPerfSample: usize = 0x5860; // bool
}

pub mod CCSGameRulesProxy { // CGameRulesProxy
    pub const m_pGameRules: usize = 0x4C0; // CCSGameRules*
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
    pub const m_name: usize = 0x718; // CUtlSymbolLarge
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
    pub const m_pInGameMoneyServices: usize = 0x6C8; // CCSPlayerController_InGameMoneyServices*
    pub const m_pInventoryServices: usize = 0x6D0; // CCSPlayerController_InventoryServices*
    pub const m_pActionTrackingServices: usize = 0x6D8; // CCSPlayerController_ActionTrackingServices*
    pub const m_pDamageServices: usize = 0x6E0; // CCSPlayerController_DamageServices*
    pub const m_iPing: usize = 0x6E8; // uint32_t
    pub const m_bHasCommunicationAbuseMute: usize = 0x6EC; // bool
    pub const m_szCrosshairCodes: usize = 0x6F0; // CUtlSymbolLarge
    pub const m_iPendingTeamNum: usize = 0x6F8; // uint8_t
    pub const m_flForceTeamTime: usize = 0x6FC; // GameTime_t
    pub const m_iCompTeammateColor: usize = 0x700; // int32_t
    pub const m_bEverPlayedOnTeam: usize = 0x704; // bool
    pub const m_bAttemptedToGetColor: usize = 0x705; // bool
    pub const m_iTeammatePreferredColor: usize = 0x708; // int32_t
    pub const m_bTeamChanged: usize = 0x70C; // bool
    pub const m_bInSwitchTeam: usize = 0x70D; // bool
    pub const m_bHasSeenJoinGame: usize = 0x70E; // bool
    pub const m_bJustBecameSpectator: usize = 0x70F; // bool
    pub const m_bSwitchTeamsOnNextRoundReset: usize = 0x710; // bool
    pub const m_bRemoveAllItemsOnNextRoundReset: usize = 0x711; // bool
    pub const m_szClan: usize = 0x718; // CUtlSymbolLarge
    pub const m_szClanName: usize = 0x720; // char[32]
    pub const m_iCoachingTeam: usize = 0x740; // int32_t
    pub const m_nPlayerDominated: usize = 0x748; // uint64_t
    pub const m_nPlayerDominatingMe: usize = 0x750; // uint64_t
    pub const m_iCompetitiveRanking: usize = 0x758; // int32_t
    pub const m_iCompetitiveWins: usize = 0x75C; // int32_t
    pub const m_iCompetitiveRankType: usize = 0x760; // int8_t
    pub const m_iCompetitiveRankingPredicted_Win: usize = 0x764; // int32_t
    pub const m_iCompetitiveRankingPredicted_Loss: usize = 0x768; // int32_t
    pub const m_iCompetitiveRankingPredicted_Tie: usize = 0x76C; // int32_t
    pub const m_nEndMatchNextMapVote: usize = 0x770; // int32_t
    pub const m_unActiveQuestId: usize = 0x774; // uint16_t
    pub const m_nQuestProgressReason: usize = 0x778; // QuestProgress::Reason
    pub const m_unPlayerTvControlFlags: usize = 0x77C; // uint32_t
    pub const m_iDraftIndex: usize = 0x7A8; // int32_t
    pub const m_msQueuedModeDisconnectionTimestamp: usize = 0x7AC; // uint32_t
    pub const m_uiAbandonRecordedReason: usize = 0x7B0; // uint32_t
    pub const m_bCannotBeKicked: usize = 0x7B4; // bool
    pub const m_bEverFullyConnected: usize = 0x7B5; // bool
    pub const m_bAbandonAllowsSurrender: usize = 0x7B6; // bool
    pub const m_bAbandonOffersInstantSurrender: usize = 0x7B7; // bool
    pub const m_bDisconnection1MinWarningPrinted: usize = 0x7B8; // bool
    pub const m_bScoreReported: usize = 0x7B9; // bool
    pub const m_nDisconnectionTick: usize = 0x7BC; // int32_t
    pub const m_bControllingBot: usize = 0x7C8; // bool
    pub const m_bHasControlledBotThisRound: usize = 0x7C9; // bool
    pub const m_bHasBeenControlledByPlayerThisRound: usize = 0x7CA; // bool
    pub const m_nBotsControlledThisRound: usize = 0x7CC; // int32_t
    pub const m_bCanControlObservedBot: usize = 0x7D0; // bool
    pub const m_hPlayerPawn: usize = 0x7D4; // CHandle<CCSPlayerPawn>
    pub const m_hObserverPawn: usize = 0x7D8; // CHandle<CCSObserverPawn>
    pub const m_DesiredObserverMode: usize = 0x7DC; // int32_t
    pub const m_hDesiredObserverTarget: usize = 0x7E0; // CEntityHandle
    pub const m_bPawnIsAlive: usize = 0x7E4; // bool
    pub const m_iPawnHealth: usize = 0x7E8; // uint32_t
    pub const m_iPawnArmor: usize = 0x7EC; // int32_t
    pub const m_bPawnHasDefuser: usize = 0x7F0; // bool
    pub const m_bPawnHasHelmet: usize = 0x7F1; // bool
    pub const m_nPawnCharacterDefIndex: usize = 0x7F2; // uint16_t
    pub const m_iPawnLifetimeStart: usize = 0x7F4; // int32_t
    pub const m_iPawnLifetimeEnd: usize = 0x7F8; // int32_t
    pub const m_iPawnBotDifficulty: usize = 0x7FC; // int32_t
    pub const m_hOriginalControllerOfCurrentPawn: usize = 0x800; // CHandle<CCSPlayerController>
    pub const m_iScore: usize = 0x804; // int32_t
    pub const m_iRoundScore: usize = 0x808; // int32_t
    pub const m_iRoundsWon: usize = 0x80C; // int32_t
    pub const m_vecKills: usize = 0x810; // CNetworkUtlVectorBase<EKillTypes_t>
    pub const m_bMvpNoMusic: usize = 0x828; // bool
    pub const m_eMvpReason: usize = 0x82C; // int32_t
    pub const m_iMusicKitID: usize = 0x830; // int32_t
    pub const m_iMusicKitMVPs: usize = 0x834; // int32_t
    pub const m_iMVPs: usize = 0x838; // int32_t
    pub const m_nUpdateCounter: usize = 0x83C; // int32_t
    pub const m_flSmoothedPing: usize = 0x840; // float
    pub const m_lastHeldVoteTimer: usize = 0xF8E8; // IntervalTimer
    pub const m_bShowHints: usize = 0xF900; // bool
    pub const m_iNextTimeCheck: usize = 0xF904; // int32_t
    pub const m_bJustDidTeamKill: usize = 0xF908; // bool
    pub const m_bPunishForTeamKill: usize = 0xF909; // bool
    pub const m_bGaveTeamDamageWarning: usize = 0xF90A; // bool
    pub const m_bGaveTeamDamageWarningThisRound: usize = 0xF90B; // bool
    pub const m_dblLastReceivedPacketPlatFloatTime: usize = 0xF910; // double
    pub const m_LastTeamDamageWarningTime: usize = 0xF918; // GameTime_t
    pub const m_LastTimePlayerWasDisconnectedForPawnsRemove: usize = 0xF91C; // GameTime_t
    pub const m_nSuspiciousHitCount: usize = 0xF920; // uint32_t
    pub const m_nNonSuspiciousHitStreak: usize = 0xF924; // uint32_t
}

pub mod CCSPlayerControllerAPI {
}

pub mod CCSPlayerController_ActionTrackingServices { // CPlayerControllerComponent
    pub const m_perRoundStats: usize = 0x40; // CUtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
    pub const m_matchStats: usize = 0x90; // CSMatchStats_t
    pub const m_iNumRoundKills: usize = 0x150; // int32_t
    pub const m_iNumRoundKillsHeadshots: usize = 0x154; // int32_t
    pub const m_unTotalRoundDamageDealt: usize = 0x158; // uint32_t
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
    pub const m_pBulletServices: usize = 0x15A8; // CCSPlayer_BulletServices*
    pub const m_pHostageServices: usize = 0x15B0; // CCSPlayer_HostageServices*
    pub const m_pBuyServices: usize = 0x15B8; // CCSPlayer_BuyServices*
    pub const m_pActionTrackingServices: usize = 0x15C0; // CCSPlayer_ActionTrackingServices*
    pub const m_pRadioServices: usize = 0x15C8; // CCSPlayer_RadioServices*
    pub const m_pDamageReactServices: usize = 0x15D0; // CCSPlayer_DamageReactServices*
    pub const m_nCharacterDefIndex: usize = 0x15D8; // uint16_t
    pub const m_hPreviousModel: usize = 0x15E0; // CStrongHandle<InfoForResourceTypeCModel>
    pub const m_bHasFemaleVoice: usize = 0x15E8; // bool
    pub const m_strVOPrefix: usize = 0x15F0; // CUtlString
    pub const m_szLastPlaceName: usize = 0x15F8; // char[18]
    pub const m_bInHostageResetZone: usize = 0x16B8; // bool
    pub const m_bInBuyZone: usize = 0x16B9; // bool
    pub const m_bWasInBuyZone: usize = 0x16BA; // bool
    pub const m_bInHostageRescueZone: usize = 0x16BB; // bool
    pub const m_bInBombZone: usize = 0x16BC; // bool
    pub const m_bWasInHostageRescueZone: usize = 0x16BD; // bool
    pub const m_iRetakesOffering: usize = 0x16C0; // int32_t
    pub const m_iRetakesOfferingCard: usize = 0x16C4; // int32_t
    pub const m_bRetakesHasDefuseKit: usize = 0x16C8; // bool
    pub const m_bRetakesMVPLastRound: usize = 0x16C9; // bool
    pub const m_iRetakesMVPBoostItem: usize = 0x16CC; // int32_t
    pub const m_RetakesMVPBoostExtraUtility: usize = 0x16D0; // loadout_slot_t
    pub const m_flHealthShotBoostExpirationTime: usize = 0x16D4; // GameTime_t
    pub const m_flLandseconds: usize = 0x16D8; // float
    pub const m_aimPunchAngle: usize = 0x16DC; // QAngle
    pub const m_aimPunchAngleVel: usize = 0x16E8; // QAngle
    pub const m_aimPunchTickBase: usize = 0x16F4; // int32_t
    pub const m_aimPunchTickFraction: usize = 0x16F8; // float
    pub const m_aimPunchCache: usize = 0x1700; // CUtlVector<QAngle>
    pub const m_bIsBuyMenuOpen: usize = 0x1718; // bool
    pub const m_xLastHeadBoneTransform: usize = 0x1D60; // CTransform
    pub const m_bLastHeadBoneTransformIsValid: usize = 0x1D80; // bool
    pub const m_lastLandTime: usize = 0x1D84; // GameTime_t
    pub const m_bOnGroundLastTick: usize = 0x1D88; // bool
    pub const m_iPlayerLocked: usize = 0x1D8C; // int32_t
    pub const m_flTimeOfLastInjury: usize = 0x1D94; // GameTime_t
    pub const m_flNextSprayDecalTime: usize = 0x1D98; // GameTime_t
    pub const m_bNextSprayDecalTimeExpedited: usize = 0x1D9C; // bool
    pub const m_nRagdollDamageBone: usize = 0x1DA0; // int32_t
    pub const m_vRagdollDamageForce: usize = 0x1DA4; // Vector
    pub const m_vRagdollDamagePosition: usize = 0x1DB0; // Vector
    pub const m_szRagdollDamageWeaponName: usize = 0x1DBC; // char[64]
    pub const m_bRagdollDamageHeadshot: usize = 0x1DFC; // bool
    pub const m_vRagdollServerOrigin: usize = 0x1E00; // Vector
    pub const m_EconGloves: usize = 0x1E10; // CEconItemView
    pub const m_nEconGlovesChanged: usize = 0x2088; // uint8_t
    pub const m_qDeathEyeAngles: usize = 0x208C; // QAngle
    pub const m_bSkipOneHeadConstraintUpdate: usize = 0x2098; // bool
}

pub mod CCSPlayerPawnAPI {
}

pub mod CCSPlayerPawnBase { // CBasePlayerPawn
    pub const m_CTouchExpansionComponent: usize = 0xBC0; // CTouchExpansionComponent
    pub const m_pPingServices: usize = 0xC10; // CCSPlayer_PingServices*
    pub const m_pViewModelServices: usize = 0xC18; // CPlayer_ViewModelServices*
    pub const m_iDisplayHistoryBits: usize = 0xC20; // uint32_t
    pub const m_flLastAttackedTeammate: usize = 0xC24; // float
    pub const m_hOriginalController: usize = 0xC28; // CHandle<CCSPlayerController>
    pub const m_blindUntilTime: usize = 0xC2C; // GameTime_t
    pub const m_blindStartTime: usize = 0xC30; // GameTime_t
    pub const m_allowAutoFollowTime: usize = 0xC34; // GameTime_t
    pub const m_entitySpottedState: usize = 0xC38; // EntitySpottedState_t
    pub const m_nSpotRules: usize = 0xC50; // int32_t
    pub const m_iPlayerState: usize = 0xC54; // CSPlayerState
    pub const m_chickenIdleSoundTimer: usize = 0xC60; // CountdownTimer
    pub const m_chickenJumpSoundTimer: usize = 0xC78; // CountdownTimer
    pub const m_vecLastBookmarkedPosition: usize = 0xD30; // Vector
    pub const m_flLastDistanceTraveledNotice: usize = 0xD3C; // float
    pub const m_flAccumulatedDistanceTraveled: usize = 0xD40; // float
    pub const m_flLastFriendlyFireDamageReductionRatio: usize = 0xD44; // float
    pub const m_bRespawning: usize = 0xD48; // bool
    pub const m_nLastPickupPriority: usize = 0xD4C; // int32_t
    pub const m_flLastPickupPriorityTime: usize = 0xD50; // float
    pub const m_bIsScoped: usize = 0xD54; // bool
    pub const m_bIsWalking: usize = 0xD55; // bool
    pub const m_bResumeZoom: usize = 0xD56; // bool
    pub const m_bIsDefusing: usize = 0xD57; // bool
    pub const m_bIsGrabbingHostage: usize = 0xD58; // bool
    pub const m_iBlockingUseActionInProgress: usize = 0xD5C; // CSPlayerBlockingUseAction_t
    pub const m_fImmuneToGunGameDamageTime: usize = 0xD60; // GameTime_t
    pub const m_bGunGameImmunity: usize = 0xD64; // bool
    pub const m_GunGameImmunityColor: usize = 0xD65; // Color
    pub const m_fMolotovDamageTime: usize = 0xD6C; // float
    pub const m_bHasMovedSinceSpawn: usize = 0xD70; // bool
    pub const m_bCanMoveDuringFreezePeriod: usize = 0xD71; // bool
    pub const m_flGuardianTooFarDistFrac: usize = 0xD74; // float
    pub const m_flNextGuardianTooFarHurtTime: usize = 0xD78; // float
    pub const m_flDetectedByEnemySensorTime: usize = 0xD7C; // GameTime_t
    pub const m_flDealtDamageToEnemyMostRecentTimestamp: usize = 0xD80; // float
    pub const m_flLastEquippedHelmetTime: usize = 0xD84; // GameTime_t
    pub const m_flLastEquippedArmorTime: usize = 0xD88; // GameTime_t
    pub const m_nHeavyAssaultSuitCooldownRemaining: usize = 0xD8C; // int32_t
    pub const m_bResetArmorNextSpawn: usize = 0xD90; // bool
    pub const m_flLastBumpMineBumpTime: usize = 0xD94; // GameTime_t
    pub const m_flEmitSoundTime: usize = 0xD98; // GameTime_t
    pub const m_iNumSpawns: usize = 0xD9C; // int32_t
    pub const m_iShouldHaveCash: usize = 0xDA0; // int32_t
    pub const m_flIdleTimeSinceLastAction: usize = 0xDA8; // float
    pub const m_flNameChangeHistory: usize = 0xDAC; // float[5]
    pub const m_fLastGivenDefuserTime: usize = 0xDC0; // float
    pub const m_fLastGivenBombTime: usize = 0xDC4; // float
    pub const m_bHasNightVision: usize = 0xDC8; // bool
    pub const m_bNightVisionOn: usize = 0xDC9; // bool
    pub const m_fNextRadarUpdateTime: usize = 0xDCC; // float
    pub const m_flLastMoneyUpdateTime: usize = 0xDD0; // float
    pub const m_MenuStringBuffer: usize = 0xDD4; // char[1024]
    pub const m_fIntroCamTime: usize = 0x11D4; // float
    pub const m_nMyCollisionGroup: usize = 0x11D8; // int32_t
    pub const m_bInNoDefuseArea: usize = 0x11DC; // bool
    pub const m_bKilledByTaser: usize = 0x11DD; // bool
    pub const m_iMoveState: usize = 0x11E0; // int32_t
    pub const m_grenadeParameterStashTime: usize = 0x11E4; // GameTime_t
    pub const m_bGrenadeParametersStashed: usize = 0x11E8; // bool
    pub const m_angStashedShootAngles: usize = 0x11EC; // QAngle
    pub const m_vecStashedGrenadeThrowPosition: usize = 0x11F8; // Vector
    pub const m_vecStashedVelocity: usize = 0x1204; // Vector
    pub const m_angShootAngleHistory: usize = 0x1210; // QAngle[2]
    pub const m_vecThrowPositionHistory: usize = 0x1228; // Vector[2]
    pub const m_vecVelocityHistory: usize = 0x1240; // Vector[2]
    pub const m_bDiedAirborne: usize = 0x1258; // bool
    pub const m_iBombSiteIndex: usize = 0x125C; // CEntityIndex
    pub const m_nWhichBombZone: usize = 0x1260; // int32_t
    pub const m_bInBombZoneTrigger: usize = 0x1264; // bool
    pub const m_bWasInBombZoneTrigger: usize = 0x1265; // bool
    pub const m_iDirection: usize = 0x1268; // int32_t
    pub const m_iShotsFired: usize = 0x126C; // int32_t
    pub const m_ArmorValue: usize = 0x1270; // int32_t
    pub const m_flFlinchStack: usize = 0x1274; // float
    pub const m_flVelocityModifier: usize = 0x1278; // float
    pub const m_flHitHeading: usize = 0x127C; // float
    pub const m_nHitBodyPart: usize = 0x1280; // int32_t
    pub const m_iHostagesKilled: usize = 0x1284; // int32_t
    pub const m_vecTotalBulletForce: usize = 0x1288; // Vector
    pub const m_flFlashDuration: usize = 0x1294; // float
    pub const m_flFlashMaxAlpha: usize = 0x1298; // float
    pub const m_flProgressBarStartTime: usize = 0x129C; // float
    pub const m_iProgressBarDuration: usize = 0x12A0; // int32_t
    pub const m_bWaitForNoAttack: usize = 0x12A4; // bool
    pub const m_flLowerBodyYawTarget: usize = 0x12A8; // float
    pub const m_bStrafing: usize = 0x12AC; // bool
    pub const m_lastStandingPos: usize = 0x12B0; // Vector
    pub const m_ignoreLadderJumpTime: usize = 0x12BC; // float
    pub const m_ladderSurpressionTimer: usize = 0x12C0; // CountdownTimer
    pub const m_lastLadderNormal: usize = 0x12D8; // Vector
    pub const m_lastLadderPos: usize = 0x12E4; // Vector
    pub const m_thirdPersonHeading: usize = 0x12F0; // QAngle
    pub const m_flSlopeDropOffset: usize = 0x12FC; // float
    pub const m_flSlopeDropHeight: usize = 0x1300; // float
    pub const m_vHeadConstraintOffset: usize = 0x1304; // Vector
    pub const m_iLastWeaponFireUsercmd: usize = 0x1318; // int32_t
    pub const m_angEyeAngles: usize = 0x131C; // QAngle
    pub const m_bVCollisionInitted: usize = 0x1328; // bool
    pub const m_storedSpawnPosition: usize = 0x132C; // Vector
    pub const m_storedSpawnAngle: usize = 0x1338; // QAngle
    pub const m_bIsSpawning: usize = 0x1344; // bool
    pub const m_bHideTargetID: usize = 0x1345; // bool
    pub const m_nNumDangerZoneDamageHits: usize = 0x1348; // int32_t
    pub const m_bHud_MiniScoreHidden: usize = 0x134C; // bool
    pub const m_bHud_RadarHidden: usize = 0x134D; // bool
    pub const m_nLastKillerIndex: usize = 0x1350; // CEntityIndex
    pub const m_nLastConcurrentKilled: usize = 0x1354; // int32_t
    pub const m_nDeathCamMusic: usize = 0x1358; // int32_t
    pub const m_iAddonBits: usize = 0x135C; // int32_t
    pub const m_iPrimaryAddon: usize = 0x1360; // int32_t
    pub const m_iSecondaryAddon: usize = 0x1364; // int32_t
    pub const m_currentDeafnessFilter: usize = 0x1368; // CUtlStringToken
    pub const m_NumEnemiesKilledThisSpawn: usize = 0x136C; // int32_t
    pub const m_NumEnemiesKilledThisRound: usize = 0x1370; // int32_t
    pub const m_NumEnemiesAtRoundStart: usize = 0x1374; // int32_t
    pub const m_wasNotKilledNaturally: usize = 0x1378; // bool
    pub const m_vecPlayerPatchEconIndices: usize = 0x137C; // uint32_t[5]
    pub const m_iDeathFlags: usize = 0x1390; // int32_t
    pub const m_hPet: usize = 0x1394; // CHandle<CChicken>
    pub const m_unCurrentEquipmentValue: usize = 0x1560; // uint16_t
    pub const m_unRoundStartEquipmentValue: usize = 0x1562; // uint16_t
    pub const m_unFreezetimeEndEquipmentValue: usize = 0x1564; // uint16_t
    pub const m_nSurvivalTeamNumber: usize = 0x1568; // int32_t
    pub const m_bHasDeathInfo: usize = 0x156C; // bool
    pub const m_flDeathInfoTime: usize = 0x1570; // float
    pub const m_vecDeathInfoOrigin: usize = 0x1574; // Vector
    pub const m_bKilledByHeadshot: usize = 0x1580; // bool
    pub const m_LastHitBox: usize = 0x1584; // int32_t
    pub const m_LastHealth: usize = 0x1588; // int32_t
    pub const m_flLastCollisionCeiling: usize = 0x158C; // float
    pub const m_flLastCollisionCeilingChangeTime: usize = 0x1590; // float
    pub const m_pBot: usize = 0x1598; // CCSBot*
    pub const m_bBotAllowActive: usize = 0x15A0; // bool
    pub const m_bCommittingSuicideOnTeamChange: usize = 0x15A1; // bool
}

pub mod CCSPlayerResource { // CBaseEntity
    pub const m_bHostageAlive: usize = 0x4C0; // bool[12]
    pub const m_isHostageFollowingSomeone: usize = 0x4CC; // bool[12]
    pub const m_iHostageEntityIDs: usize = 0x4D8; // CEntityIndex[12]
    pub const m_bombsiteCenterA: usize = 0x508; // Vector
    pub const m_bombsiteCenterB: usize = 0x514; // Vector
    pub const m_hostageRescueX: usize = 0x520; // int32_t[4]
    pub const m_hostageRescueY: usize = 0x530; // int32_t[4]
    pub const m_hostageRescueZ: usize = 0x540; // int32_t[4]
    pub const m_bEndMatchNextMapAllVoted: usize = 0x550; // bool
    pub const m_foundGoalPositions: usize = 0x551; // bool
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
    pub const m_flMaxFallVelocity: usize = 0x228; // float
    pub const m_vecLadderNormal: usize = 0x22C; // Vector
    pub const m_nLadderSurfacePropIndex: usize = 0x238; // int32_t
    pub const m_flDuckAmount: usize = 0x23C; // float
    pub const m_flDuckSpeed: usize = 0x240; // float
    pub const m_bDuckOverride: usize = 0x244; // bool
    pub const m_bDesiresDuck: usize = 0x245; // bool
    pub const m_flDuckOffset: usize = 0x248; // float
    pub const m_nDuckTimeMsecs: usize = 0x24C; // uint32_t
    pub const m_nDuckJumpTimeMsecs: usize = 0x250; // uint32_t
    pub const m_nJumpTimeMsecs: usize = 0x254; // uint32_t
    pub const m_flLastDuckTime: usize = 0x258; // float
    pub const m_vecLastPositionAtFullCrouchSpeed: usize = 0x268; // Vector2D
    pub const m_duckUntilOnGround: usize = 0x270; // bool
    pub const m_bHasWalkMovedSinceLastJump: usize = 0x271; // bool
    pub const m_bInStuckTest: usize = 0x272; // bool
    pub const m_flStuckCheckTime: usize = 0x280; // float[64][2]
    pub const m_nTraceCount: usize = 0x480; // int32_t
    pub const m_StuckLast: usize = 0x484; // int32_t
    pub const m_bSpeedCropped: usize = 0x488; // bool
    pub const m_nOldWaterLevel: usize = 0x48C; // int32_t
    pub const m_flWaterEntryTime: usize = 0x490; // float
    pub const m_vecForward: usize = 0x494; // Vector
    pub const m_vecLeft: usize = 0x4A0; // Vector
    pub const m_vecUp: usize = 0x4AC; // Vector
    pub const m_nGameCodeHasMovedPlayerAfterCommand: usize = 0x4B8; // int32_t
    pub const m_bMadeFootstepNoise: usize = 0x4BC; // bool
    pub const m_iFootsteps: usize = 0x4C0; // int32_t
    pub const m_bOldJumpPressed: usize = 0x4C4; // bool
    pub const m_flJumpPressedTime: usize = 0x4C8; // float
    pub const m_flJumpUntil: usize = 0x4CC; // float
    pub const m_flJumpVel: usize = 0x4D0; // float
    pub const m_fStashGrenadeParameterWhen: usize = 0x4D4; // GameTime_t
    pub const m_nButtonDownMaskPrev: usize = 0x4D8; // uint64_t
    pub const m_flOffsetTickCompleteTime: usize = 0x4E0; // float
    pub const m_flOffsetTickStashedSpeed: usize = 0x4E4; // float
    pub const m_flStamina: usize = 0x4E8; // float
    pub const m_flHeightAtJumpStart: usize = 0x4EC; // float
    pub const m_flMaxJumpHeightThisJump: usize = 0x4F0; // float
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
    pub const m_flNextAttack: usize = 0xA8; // GameTime_t
    pub const m_bIsLookingAtWeapon: usize = 0xAC; // bool
    pub const m_bIsHoldingLookAtWeapon: usize = 0xAD; // bool
    pub const m_hSavedWeapon: usize = 0xB0; // CHandle<CBasePlayerWeapon>
    pub const m_nTimeToMelee: usize = 0xB4; // int32_t
    pub const m_nTimeToSecondary: usize = 0xB8; // int32_t
    pub const m_nTimeToPrimary: usize = 0xBC; // int32_t
    pub const m_nTimeToSniperRifle: usize = 0xC0; // int32_t
    pub const m_bIsBeingGivenItem: usize = 0xC4; // bool
    pub const m_bIsPickingUpItemWithUse: usize = 0xC5; // bool
    pub const m_bPickedUpWeapon: usize = 0xC6; // bool
    pub const m_bDisableAutoDeploy: usize = 0xC7; // bool
    pub const m_nOldShootPositionHistoryCount: usize = 0xC8; // uint32_t
    pub const m_nOldInputHistoryCount: usize = 0x460; // uint32_t
}

pub mod CCSPulseServerFuncs_Globals {
}

pub mod CCSSprite { // CSprite
}

pub mod CCSTakeDamageInfoAPI {
}

pub mod CCSTeam { // CTeam
    pub const m_nLastRecievedShorthandedRoundBonus: usize = 0x578; // int32_t
    pub const m_nShorthandedRoundBonusStartRound: usize = 0x57C; // int32_t
    pub const m_bSurrendered: usize = 0x580; // bool
    pub const m_szTeamMatchStat: usize = 0x581; // char[512]
    pub const m_numMapVictories: usize = 0x784; // int32_t
    pub const m_scoreFirstHalf: usize = 0x788; // int32_t
    pub const m_scoreSecondHalf: usize = 0x78C; // int32_t
    pub const m_scoreOvertime: usize = 0x790; // int32_t
    pub const m_szClanTeamname: usize = 0x794; // char[129]
    pub const m_iClanID: usize = 0x818; // uint32_t
    pub const m_szTeamFlagImage: usize = 0x81C; // char[8]
    pub const m_szTeamLogoImage: usize = 0x824; // char[8]
    pub const m_flNextResourceTime: usize = 0x82C; // float
    pub const m_iLastUpdateSentAt: usize = 0x830; // int32_t
}

pub mod CCSWeaponBase { // CBasePlayerWeapon
    pub const m_bRemoveable: usize = 0xCE0; // bool
    pub const m_flFireSequenceStartTime: usize = 0xCE8; // float
    pub const m_nFireSequenceStartTimeChange: usize = 0xCEC; // int32_t
    pub const m_nFireSequenceStartTimeAck: usize = 0xCF0; // int32_t
    pub const m_ePlayerFireEvent: usize = 0xCF4; // PlayerAnimEvent_t
    pub const m_ePlayerFireEventAttackType: usize = 0xCF8; // WeaponAttackType_t
    pub const m_seqIdle: usize = 0xCFC; // HSequence
    pub const m_seqFirePrimary: usize = 0xD00; // HSequence
    pub const m_seqFireSecondary: usize = 0xD04; // HSequence
    pub const m_thirdPersonFireSequences: usize = 0xD08; // CUtlVector<HSequence>
    pub const m_hCurrentThirdPersonSequence: usize = 0xD20; // HSequence
    pub const m_nSilencerBoneIndex: usize = 0xD24; // int32_t
    pub const m_thirdPersonSequences: usize = 0xD28; // HSequence[7]
    pub const m_bPlayerAmmoStockOnPickup: usize = 0xD50; // bool
    pub const m_bRequireUseToTouch: usize = 0xD51; // bool
    pub const m_iState: usize = 0xD54; // CSWeaponState_t
    pub const m_flLastTimeInAir: usize = 0xD58; // GameTime_t
    pub const m_flLastDeployTime: usize = 0xD5C; // GameTime_t
    pub const m_nLastEmptySoundCmdNum: usize = 0xD60; // int32_t
    pub const m_nViewModelIndex: usize = 0xD64; // uint32_t
    pub const m_bReloadsWithClips: usize = 0xD68; // bool
    pub const m_flTimeWeaponIdle: usize = 0xD88; // GameTime_t
    pub const m_bFireOnEmpty: usize = 0xD8C; // bool
    pub const m_OnPlayerPickup: usize = 0xD90; // CEntityIOOutput
    pub const m_weaponMode: usize = 0xDB8; // CSWeaponMode
    pub const m_flTurningInaccuracyDelta: usize = 0xDBC; // float
    pub const m_vecTurningInaccuracyEyeDirLast: usize = 0xDC0; // Vector
    pub const m_flTurningInaccuracy: usize = 0xDCC; // float
    pub const m_fAccuracyPenalty: usize = 0xDD0; // float
    pub const m_flLastAccuracyUpdateTime: usize = 0xDD4; // GameTime_t
    pub const m_fAccuracySmoothedForZoom: usize = 0xDD8; // float
    pub const m_fScopeZoomEndTime: usize = 0xDDC; // GameTime_t
    pub const m_iRecoilIndex: usize = 0xDE0; // int32_t
    pub const m_flRecoilIndex: usize = 0xDE4; // float
    pub const m_bBurstMode: usize = 0xDE8; // bool
    pub const m_nPostponeFireReadyTicks: usize = 0xDEC; // GameTick_t
    pub const m_flPostponeFireReadyFrac: usize = 0xDF0; // float
    pub const m_bInReload: usize = 0xDF4; // bool
    pub const m_bReloadVisuallyComplete: usize = 0xDF5; // bool
    pub const m_flDroppedAtTime: usize = 0xDF8; // GameTime_t
    pub const m_bIsHauledBack: usize = 0xDFC; // bool
    pub const m_bSilencerOn: usize = 0xDFD; // bool
    pub const m_flTimeSilencerSwitchComplete: usize = 0xE00; // GameTime_t
    pub const m_iOriginalTeamNumber: usize = 0xE04; // int32_t
    pub const m_flNextAttackRenderTimeOffset: usize = 0xE08; // float
    pub const m_bCanBePickedUp: usize = 0xE20; // bool
    pub const m_bUseCanOverrideNextOwnerTouchTime: usize = 0xE21; // bool
    pub const m_nextOwnerTouchTime: usize = 0xE24; // GameTime_t
    pub const m_nextPrevOwnerTouchTime: usize = 0xE28; // GameTime_t
    pub const m_hPrevOwner: usize = 0xE2C; // CHandle<CCSPlayerPawn>
    pub const m_nDropTick: usize = 0xE30; // GameTick_t
    pub const m_donated: usize = 0xE54; // bool
    pub const m_fLastShotTime: usize = 0xE58; // GameTime_t
    pub const m_bWasOwnedByCT: usize = 0xE5C; // bool
    pub const m_bWasOwnedByTerrorist: usize = 0xE5D; // bool
    pub const m_bFiredOutOfAmmoEvent: usize = 0xE5E; // bool
    pub const m_numRemoveUnownedWeaponThink: usize = 0xE60; // int32_t
    pub const m_IronSightController: usize = 0xE68; // CIronSightController
    pub const m_iIronSightMode: usize = 0xE80; // int32_t
    pub const m_flLastLOSTraceFailureTime: usize = 0xE84; // GameTime_t
    pub const m_iNumEmptyAttacks: usize = 0xE88; // int32_t
    pub const m_flWatTickOffset: usize = 0xE8C; // float
}

pub mod CCSWeaponBaseAPI {
}

pub mod CCSWeaponBaseGun { // CCSWeaponBase
    pub const m_zoomLevel: usize = 0xE90; // int32_t
    pub const m_iBurstShotsRemaining: usize = 0xE94; // int32_t
    pub const m_silencedModelIndex: usize = 0xEA0; // int32_t
    pub const m_inPrecache: usize = 0xEA4; // bool
    pub const m_bNeedsBoltAction: usize = 0xEA5; // bool
    pub const m_bSkillReloadAvailable: usize = 0xEA6; // bool
    pub const m_bSkillReloadLiftedReloadKey: usize = 0xEA7; // bool
    pub const m_bSkillBoltInterruptAvailable: usize = 0xEA8; // bool
    pub const m_bSkillBoltLiftedFireKey: usize = 0xEA9; // bool
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
    pub const m_sMapName: usize = 0x8B8; // CUtlString
    pub const m_sLandmarkName: usize = 0x8C0; // CUtlString
    pub const m_OnChangeLevel: usize = 0x8C8; // CEntityIOOutput
    pub const m_bTouched: usize = 0x8F0; // bool
    pub const m_bNoTouch: usize = 0x8F1; // bool
    pub const m_bNewChapter: usize = 0x8F2; // bool
    pub const m_bOnChangeLevelFired: usize = 0x8F3; // bool
}

pub mod CChicken { // CDynamicProp
    pub const m_AttributeManager: usize = 0xB80; // CAttributeContainer
    pub const m_OriginalOwnerXuidLow: usize = 0xE48; // uint32_t
    pub const m_OriginalOwnerXuidHigh: usize = 0xE4C; // uint32_t
    pub const m_updateTimer: usize = 0xE50; // CountdownTimer
    pub const m_stuckAnchor: usize = 0xE68; // Vector
    pub const m_stuckTimer: usize = 0xE78; // CountdownTimer
    pub const m_collisionStuckTimer: usize = 0xE90; // CountdownTimer
    pub const m_isOnGround: usize = 0xEA8; // bool
    pub const m_vFallVelocity: usize = 0xEAC; // Vector
    pub const m_activity: usize = 0xEB8; // ChickenActivity
    pub const m_activityTimer: usize = 0xEC0; // CountdownTimer
    pub const m_turnRate: usize = 0xED8; // float
    pub const m_fleeFrom: usize = 0xEDC; // CHandle<CBaseEntity>
    pub const m_moveRateThrottleTimer: usize = 0xEE0; // CountdownTimer
    pub const m_startleTimer: usize = 0xEF8; // CountdownTimer
    pub const m_vocalizeTimer: usize = 0xF10; // CountdownTimer
    pub const m_flWhenZombified: usize = 0xF28; // GameTime_t
    pub const m_jumpedThisFrame: usize = 0xF2C; // bool
    pub const m_leader: usize = 0xF30; // CHandle<CCSPlayerPawn>
    pub const m_reuseTimer: usize = 0xF38; // CountdownTimer
    pub const m_hasBeenUsed: usize = 0xF50; // bool
    pub const m_jumpTimer: usize = 0xF58; // CountdownTimer
    pub const m_flLastJumpTime: usize = 0xF70; // float
    pub const m_bInJump: usize = 0xF74; // bool
    pub const m_isWaitingForLeader: usize = 0xF75; // bool
    pub const m_repathTimer: usize = 0x2F80; // CountdownTimer
    pub const m_inhibitDoorTimer: usize = 0x2F98; // CountdownTimer
    pub const m_inhibitObstacleAvoidanceTimer: usize = 0x3028; // CountdownTimer
    pub const m_vecPathGoal: usize = 0x3048; // Vector
    pub const m_flActiveFollowStartTime: usize = 0x3054; // GameTime_t
    pub const m_followMinuteTimer: usize = 0x3058; // CountdownTimer
    pub const m_vecLastEggPoopPosition: usize = 0x3070; // Vector
    pub const m_vecEggsPooped: usize = 0x3080; // CUtlVector<CHandle<CBaseEntity>>
    pub const m_BlockDirectionTimer: usize = 0x30A0; // CountdownTimer
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
    pub const m_flFadeInDuration: usize = 0x4C0; // float
    pub const m_flFadeOutDuration: usize = 0x4C4; // float
    pub const m_flStartFadeInWeight: usize = 0x4C8; // float
    pub const m_flStartFadeOutWeight: usize = 0x4CC; // float
    pub const m_flTimeStartFadeIn: usize = 0x4D0; // GameTime_t
    pub const m_flTimeStartFadeOut: usize = 0x4D4; // GameTime_t
    pub const m_flMaxWeight: usize = 0x4D8; // float
    pub const m_bStartDisabled: usize = 0x4DC; // bool
    pub const m_bEnabled: usize = 0x4DD; // bool
    pub const m_bMaster: usize = 0x4DE; // bool
    pub const m_bClientSide: usize = 0x4DF; // bool
    pub const m_bExclusive: usize = 0x4E0; // bool
    pub const m_MinFalloff: usize = 0x4E4; // float
    pub const m_MaxFalloff: usize = 0x4E8; // float
    pub const m_flCurWeight: usize = 0x4EC; // float
    pub const m_netlookupFilename: usize = 0x4F0; // char[512]
    pub const m_lookupFilename: usize = 0x6F0; // CUtlSymbolLarge
}

pub mod CColorCorrectionVolume { // CBaseTrigger
    pub const m_bEnabled: usize = 0x8B8; // bool
    pub const m_MaxWeight: usize = 0x8BC; // float
    pub const m_FadeDuration: usize = 0x8C0; // float
    pub const m_bStartDisabled: usize = 0x8C4; // bool
    pub const m_Weight: usize = 0x8C8; // float
    pub const m_lookupFilename: usize = 0x8CC; // char[512]
    pub const m_LastEnterWeight: usize = 0xACC; // float
    pub const m_LastEnterTime: usize = 0xAD0; // GameTime_t
    pub const m_LastExitWeight: usize = 0xAD4; // float
    pub const m_LastExitTime: usize = 0xAD8; // GameTime_t
}

pub mod CCommentaryAuto { // CBaseEntity
    pub const m_OnCommentaryNewGame: usize = 0x4C0; // CEntityIOOutput
    pub const m_OnCommentaryMidGame: usize = 0x4E8; // CEntityIOOutput
    pub const m_OnCommentaryMultiplayerSpawn: usize = 0x510; // CEntityIOOutput
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
    pub const m_massScale: usize = 0x8E8; // float
}

pub mod CCoopBonusCoin { // CDynamicProp
}

pub mod CCopyRecipientFilter {
    pub const m_Flags: usize = 0x8; // int32_t
    pub const m_Recipients: usize = 0x10; // CUtlVector<CPlayerSlot>
}

pub mod CCredits { // CPointEntity
    pub const m_OnCreditsDone: usize = 0x4C0; // CEntityIOOutput
    pub const m_bRolledOutroCredits: usize = 0x4E8; // bool
    pub const m_flLogoLength: usize = 0x4EC; // float
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
    pub const m_nNpcEvents: usize = 0x4500; // int32_t
}

pub mod CDecoyGrenade { // CBaseCSGrenade
}

pub mod CDecoyProjectile { // CBaseCSGrenadeProjectile
    pub const m_nDecoyShotTick: usize = 0xAA0; // int32_t
    pub const m_shotsRemaining: usize = 0xAA4; // int32_t
    pub const m_fExpireTime: usize = 0xAA8; // GameTime_t
    pub const m_decoyWeaponDefIndex: usize = 0xAB8; // uint16_t
}

pub mod CDynamicLight { // CBaseModelEntity
    pub const m_ActualFlags: usize = 0x710; // uint8_t
    pub const m_Flags: usize = 0x711; // uint8_t
    pub const m_LightStyle: usize = 0x712; // uint8_t
    pub const m_On: usize = 0x713; // bool
    pub const m_Radius: usize = 0x714; // float
    pub const m_Exponent: usize = 0x718; // int32_t
    pub const m_InnerAngle: usize = 0x71C; // float
    pub const m_OuterAngle: usize = 0x720; // float
    pub const m_SpotRadius: usize = 0x724; // float
}

pub mod CDynamicProp { // CBreakableProp
    pub const m_bCreateNavObstacle: usize = 0xA68; // bool
    pub const m_bUseHitboxesForRenderBox: usize = 0xA69; // bool
    pub const m_bUseAnimGraph: usize = 0xA6A; // bool
    pub const m_pOutputAnimBegun: usize = 0xA70; // CEntityIOOutput
    pub const m_pOutputAnimOver: usize = 0xA98; // CEntityIOOutput
    pub const m_pOutputAnimLoopCycleOver: usize = 0xAC0; // CEntityIOOutput
    pub const m_OnAnimReachedStart: usize = 0xAE8; // CEntityIOOutput
    pub const m_OnAnimReachedEnd: usize = 0xB10; // CEntityIOOutput
    pub const m_iszIdleAnim: usize = 0xB38; // CUtlSymbolLarge
    pub const m_nIdleAnimLoopMode: usize = 0xB40; // AnimLoopMode_t
    pub const m_bRandomizeCycle: usize = 0xB44; // bool
    pub const m_bStartDisabled: usize = 0xB45; // bool
    pub const m_bFiredStartEndOutput: usize = 0xB46; // bool
    pub const m_bForceNpcExclude: usize = 0xB47; // bool
    pub const m_bCreateNonSolid: usize = 0xB48; // bool
    pub const m_bIsOverrideProp: usize = 0xB49; // bool
    pub const m_iInitialGlowState: usize = 0xB4C; // int32_t
    pub const m_nGlowRange: usize = 0xB50; // int32_t
    pub const m_nGlowRangeMin: usize = 0xB54; // int32_t
    pub const m_glowColor: usize = 0xB58; // Color
    pub const m_nGlowTeam: usize = 0xB5C; // int32_t
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
    pub const m_AttributeManager: usize = 0x988; // CAttributeContainer
    pub const m_OriginalOwnerXuidLow: usize = 0xC50; // uint32_t
    pub const m_OriginalOwnerXuidHigh: usize = 0xC54; // uint32_t
    pub const m_nFallbackPaintKit: usize = 0xC58; // int32_t
    pub const m_nFallbackSeed: usize = 0xC5C; // int32_t
    pub const m_flFallbackWear: usize = 0xC60; // float
    pub const m_nFallbackStatTrak: usize = 0xC64; // int32_t
    pub const m_hOldProvidee: usize = 0xC68; // CHandle<CBaseEntity>
    pub const m_iOldOwnerClass: usize = 0xC6C; // int32_t
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
    pub const m_nForceSkin: usize = 0xC70; // int32_t
    pub const m_bAlwaysAllow: usize = 0xC74; // bool
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
    pub const m_flFadeInStart: usize = 0x710; // float
    pub const m_flFadeInLength: usize = 0x714; // float
    pub const m_flFadeOutModelStart: usize = 0x718; // float
    pub const m_flFadeOutModelLength: usize = 0x71C; // float
    pub const m_flFadeOutStart: usize = 0x720; // float
    pub const m_flFadeOutLength: usize = 0x724; // float
    pub const m_flStartTime: usize = 0x728; // GameTime_t
    pub const m_nDissolveType: usize = 0x72C; // EntityDisolveType_t
    pub const m_vDissolverOrigin: usize = 0x730; // Vector
    pub const m_nMagnitude: usize = 0x73C; // uint32_t
}

pub mod CEntityFlame { // CBaseEntity
    pub const m_hEntAttached: usize = 0x4C0; // CHandle<CBaseEntity>
    pub const m_bCheapEffect: usize = 0x4C4; // bool
    pub const m_flSize: usize = 0x4C8; // float
    pub const m_bUseHitboxes: usize = 0x4CC; // bool
    pub const m_iNumHitboxFires: usize = 0x4D0; // int32_t
    pub const m_flHitboxFireScale: usize = 0x4D4; // float
    pub const m_flLifetime: usize = 0x4D8; // GameTime_t
    pub const m_hAttacker: usize = 0x4DC; // CHandle<CBaseEntity>
    pub const m_iDangerSound: usize = 0x4E0; // int32_t
    pub const m_flDirectDamagePerSecond: usize = 0x4E4; // float
    pub const m_iCustomDamageType: usize = 0x4E8; // int32_t
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
    pub const m_active: usize = 0x7B0; // int32_t
    pub const m_spriteTexture: usize = 0x7B8; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_iszStartEntity: usize = 0x7C0; // CUtlSymbolLarge
    pub const m_iszEndEntity: usize = 0x7C8; // CUtlSymbolLarge
    pub const m_life: usize = 0x7D0; // float
    pub const m_boltWidth: usize = 0x7D4; // float
    pub const m_noiseAmplitude: usize = 0x7D8; // float
    pub const m_speed: usize = 0x7DC; // int32_t
    pub const m_restrike: usize = 0x7E0; // float
    pub const m_iszSpriteName: usize = 0x7E8; // CUtlSymbolLarge
    pub const m_frameStart: usize = 0x7F0; // int32_t
    pub const m_vEndPointWorld: usize = 0x7F4; // Vector
    pub const m_vEndPointRelative: usize = 0x800; // Vector
    pub const m_radius: usize = 0x80C; // float
    pub const m_TouchType: usize = 0x810; // Touch_t
    pub const m_iFilterName: usize = 0x818; // CUtlSymbolLarge
    pub const m_hFilter: usize = 0x820; // CHandle<CBaseEntity>
    pub const m_iszDecal: usize = 0x828; // CUtlSymbolLarge
    pub const m_OnTouchedByEntity: usize = 0x830; // CEntityIOOutput
}

pub mod CEnvBeverage { // CBaseEntity
    pub const m_CanInDispenser: usize = 0x4C0; // bool
    pub const m_nBeverageType: usize = 0x4C4; // int32_t
}

pub mod CEnvCombinedLightProbeVolume { // CBaseEntity
    pub const m_Color: usize = 0x1518; // Color
    pub const m_flBrightness: usize = 0x151C; // float
    pub const m_hCubemapTexture: usize = 0x1520; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_bCustomCubemapTexture: usize = 0x1528; // bool
    pub const m_hLightProbeTexture: usize = 0x1530; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_hLightProbeDirectLightIndicesTexture: usize = 0x1538; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_hLightProbeDirectLightScalarsTexture: usize = 0x1540; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_hLightProbeDirectLightShadowsTexture: usize = 0x1548; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_vBoxMins: usize = 0x1550; // Vector
    pub const m_vBoxMaxs: usize = 0x155C; // Vector
    pub const m_bMoveable: usize = 0x1568; // bool
    pub const m_nHandshake: usize = 0x156C; // int32_t
    pub const m_nEnvCubeMapArrayIndex: usize = 0x1570; // int32_t
    pub const m_nPriority: usize = 0x1574; // int32_t
    pub const m_bStartDisabled: usize = 0x1578; // bool
    pub const m_flEdgeFadeDist: usize = 0x157C; // float
    pub const m_vEdgeFadeDists: usize = 0x1580; // Vector
    pub const m_nLightProbeSizeX: usize = 0x158C; // int32_t
    pub const m_nLightProbeSizeY: usize = 0x1590; // int32_t
    pub const m_nLightProbeSizeZ: usize = 0x1594; // int32_t
    pub const m_nLightProbeAtlasX: usize = 0x1598; // int32_t
    pub const m_nLightProbeAtlasY: usize = 0x159C; // int32_t
    pub const m_nLightProbeAtlasZ: usize = 0x15A0; // int32_t
    pub const m_bEnabled: usize = 0x15B9; // bool
}

pub mod CEnvCubemap { // CBaseEntity
    pub const m_hCubemapTexture: usize = 0x540; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_bCustomCubemapTexture: usize = 0x548; // bool
    pub const m_flInfluenceRadius: usize = 0x54C; // float
    pub const m_vBoxProjectMins: usize = 0x550; // Vector
    pub const m_vBoxProjectMaxs: usize = 0x55C; // Vector
    pub const m_bMoveable: usize = 0x568; // bool
    pub const m_nHandshake: usize = 0x56C; // int32_t
    pub const m_nEnvCubeMapArrayIndex: usize = 0x570; // int32_t
    pub const m_nPriority: usize = 0x574; // int32_t
    pub const m_flEdgeFadeDist: usize = 0x578; // float
    pub const m_vEdgeFadeDists: usize = 0x57C; // Vector
    pub const m_flDiffuseScale: usize = 0x588; // float
    pub const m_bStartDisabled: usize = 0x58C; // bool
    pub const m_bDefaultEnvMap: usize = 0x58D; // bool
    pub const m_bDefaultSpecEnvMap: usize = 0x58E; // bool
    pub const m_bIndoorCubeMap: usize = 0x58F; // bool
    pub const m_bCopyDiffuseFromDefaultCubemap: usize = 0x590; // bool
    pub const m_bEnabled: usize = 0x5A0; // bool
}

pub mod CEnvCubemapBox { // CEnvCubemap
}

pub mod CEnvCubemapFog { // CBaseEntity
    pub const m_flEndDistance: usize = 0x4C0; // float
    pub const m_flStartDistance: usize = 0x4C4; // float
    pub const m_flFogFalloffExponent: usize = 0x4C8; // float
    pub const m_bHeightFogEnabled: usize = 0x4CC; // bool
    pub const m_flFogHeightWidth: usize = 0x4D0; // float
    pub const m_flFogHeightEnd: usize = 0x4D4; // float
    pub const m_flFogHeightStart: usize = 0x4D8; // float
    pub const m_flFogHeightExponent: usize = 0x4DC; // float
    pub const m_flLODBias: usize = 0x4E0; // float
    pub const m_bActive: usize = 0x4E4; // bool
    pub const m_bStartDisabled: usize = 0x4E5; // bool
    pub const m_flFogMaxOpacity: usize = 0x4E8; // float
    pub const m_nCubemapSourceType: usize = 0x4EC; // int32_t
    pub const m_hSkyMaterial: usize = 0x4F0; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_iszSkyEntity: usize = 0x4F8; // CUtlSymbolLarge
    pub const m_hFogCubemapTexture: usize = 0x500; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_bHasHeightFogEnd: usize = 0x508; // bool
    pub const m_bFirstTime: usize = 0x509; // bool
}

pub mod CEnvDecal { // CBaseModelEntity
    pub const m_hDecalMaterial: usize = 0x710; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_flWidth: usize = 0x718; // float
    pub const m_flHeight: usize = 0x71C; // float
    pub const m_flDepth: usize = 0x720; // float
    pub const m_nRenderOrder: usize = 0x724; // uint32_t
    pub const m_bProjectOnWorld: usize = 0x728; // bool
    pub const m_bProjectOnCharacters: usize = 0x729; // bool
    pub const m_bProjectOnWater: usize = 0x72A; // bool
    pub const m_flDepthSortBias: usize = 0x72C; // float
}

pub mod CEnvDetailController { // CBaseEntity
    pub const m_flFadeStartDist: usize = 0x4C0; // float
    pub const m_flFadeEndDist: usize = 0x4C4; // float
}

pub mod CEnvEntityIgniter { // CBaseEntity
    pub const m_flLifetime: usize = 0x4C0; // float
}

pub mod CEnvEntityMaker { // CPointEntity
    pub const m_vecEntityMins: usize = 0x4C0; // Vector
    pub const m_vecEntityMaxs: usize = 0x4CC; // Vector
    pub const m_hCurrentInstance: usize = 0x4D8; // CHandle<CBaseEntity>
    pub const m_hCurrentBlocker: usize = 0x4DC; // CHandle<CBaseEntity>
    pub const m_vecBlockerOrigin: usize = 0x4E0; // Vector
    pub const m_angPostSpawnDirection: usize = 0x4EC; // QAngle
    pub const m_flPostSpawnDirectionVariance: usize = 0x4F8; // float
    pub const m_flPostSpawnSpeed: usize = 0x4FC; // float
    pub const m_bPostSpawnUseAngles: usize = 0x500; // bool
    pub const m_iszTemplate: usize = 0x508; // CUtlSymbolLarge
    pub const m_pOutputOnSpawned: usize = 0x510; // CEntityIOOutput
    pub const m_pOutputOnFailedSpawn: usize = 0x538; // CEntityIOOutput
}

pub mod CEnvExplosion { // CModelPointEntity
    pub const m_iMagnitude: usize = 0x710; // int32_t
    pub const m_flPlayerDamage: usize = 0x714; // float
    pub const m_iRadiusOverride: usize = 0x718; // int32_t
    pub const m_flInnerRadius: usize = 0x71C; // float
    pub const m_spriteScale: usize = 0x720; // int32_t
    pub const m_flDamageForce: usize = 0x724; // float
    pub const m_hInflictor: usize = 0x728; // CHandle<CBaseEntity>
    pub const m_iCustomDamageType: usize = 0x72C; // int32_t
    pub const m_iszExplosionType: usize = 0x738; // CUtlSymbolLarge
    pub const m_iszCustomEffectName: usize = 0x740; // CUtlSymbolLarge
    pub const m_iszCustomSoundName: usize = 0x748; // CUtlSymbolLarge
    pub const m_iClassIgnore: usize = 0x750; // Class_T
    pub const m_iClassIgnore2: usize = 0x754; // Class_T
    pub const m_iszEntityIgnoreName: usize = 0x758; // CUtlSymbolLarge
    pub const m_hEntityIgnore: usize = 0x760; // CHandle<CBaseEntity>
}

pub mod CEnvFade { // CLogicalEntity
    pub const m_fadeColor: usize = 0x4C0; // Color
    pub const m_Duration: usize = 0x4C4; // float
    pub const m_HoldDuration: usize = 0x4C8; // float
    pub const m_OnBeginFade: usize = 0x4D0; // CEntityIOOutput
}

pub mod CEnvFireSensor { // CBaseEntity
    pub const m_bEnabled: usize = 0x4C0; // bool
    pub const m_bHeatAtLevel: usize = 0x4C1; // bool
    pub const m_radius: usize = 0x4C4; // float
    pub const m_targetLevel: usize = 0x4C8; // float
    pub const m_targetTime: usize = 0x4CC; // float
    pub const m_levelTime: usize = 0x4D0; // float
    pub const m_OnHeatLevelStart: usize = 0x4D8; // CEntityIOOutput
    pub const m_OnHeatLevelEnd: usize = 0x500; // CEntityIOOutput
}

pub mod CEnvFireSource { // CBaseEntity
    pub const m_bEnabled: usize = 0x4C0; // bool
    pub const m_radius: usize = 0x4C4; // float
    pub const m_damage: usize = 0x4C8; // float
}

pub mod CEnvFunnel { // CBaseEntity
}

pub mod CEnvGlobal { // CLogicalEntity
    pub const m_outCounter: usize = 0x4C0; // CEntityOutputTemplate<int32_t>
    pub const m_globalstate: usize = 0x4E8; // CUtlSymbolLarge
    pub const m_triggermode: usize = 0x4F0; // int32_t
    pub const m_initialstate: usize = 0x4F4; // int32_t
    pub const m_counter: usize = 0x4F8; // int32_t
}

pub mod CEnvHudHint { // CPointEntity
    pub const m_iszMessage: usize = 0x4C0; // CUtlSymbolLarge
}

pub mod CEnvInstructorHint { // CPointEntity
    pub const m_iszName: usize = 0x4C0; // CUtlSymbolLarge
    pub const m_iszReplace_Key: usize = 0x4C8; // CUtlSymbolLarge
    pub const m_iszHintTargetEntity: usize = 0x4D0; // CUtlSymbolLarge
    pub const m_iTimeout: usize = 0x4D8; // int32_t
    pub const m_iDisplayLimit: usize = 0x4DC; // int32_t
    pub const m_iszIcon_Onscreen: usize = 0x4E0; // CUtlSymbolLarge
    pub const m_iszIcon_Offscreen: usize = 0x4E8; // CUtlSymbolLarge
    pub const m_iszCaption: usize = 0x4F0; // CUtlSymbolLarge
    pub const m_iszActivatorCaption: usize = 0x4F8; // CUtlSymbolLarge
    pub const m_Color: usize = 0x500; // Color
    pub const m_fIconOffset: usize = 0x504; // float
    pub const m_fRange: usize = 0x508; // float
    pub const m_iPulseOption: usize = 0x50C; // uint8_t
    pub const m_iAlphaOption: usize = 0x50D; // uint8_t
    pub const m_iShakeOption: usize = 0x50E; // uint8_t
    pub const m_bStatic: usize = 0x50F; // bool
    pub const m_bNoOffscreen: usize = 0x510; // bool
    pub const m_bForceCaption: usize = 0x511; // bool
    pub const m_iInstanceType: usize = 0x514; // int32_t
    pub const m_bSuppressRest: usize = 0x518; // bool
    pub const m_iszBinding: usize = 0x520; // CUtlSymbolLarge
    pub const m_bAllowNoDrawTarget: usize = 0x528; // bool
    pub const m_bAutoStart: usize = 0x529; // bool
    pub const m_bLocalPlayerOnly: usize = 0x52A; // bool
}

pub mod CEnvInstructorVRHint { // CPointEntity
    pub const m_iszName: usize = 0x4C0; // CUtlSymbolLarge
    pub const m_iszHintTargetEntity: usize = 0x4C8; // CUtlSymbolLarge
    pub const m_iTimeout: usize = 0x4D0; // int32_t
    pub const m_iszCaption: usize = 0x4D8; // CUtlSymbolLarge
    pub const m_iszStartSound: usize = 0x4E0; // CUtlSymbolLarge
    pub const m_iLayoutFileType: usize = 0x4E8; // int32_t
    pub const m_iszCustomLayoutFile: usize = 0x4F0; // CUtlSymbolLarge
    pub const m_iAttachType: usize = 0x4F8; // int32_t
    pub const m_flHeightOffset: usize = 0x4FC; // float
}

pub mod CEnvLaser { // CBeam
    pub const m_iszLaserTarget: usize = 0x7B0; // CUtlSymbolLarge
    pub const m_pSprite: usize = 0x7B8; // CSprite*
    pub const m_iszSpriteName: usize = 0x7C0; // CUtlSymbolLarge
    pub const m_firePosition: usize = 0x7C8; // Vector
    pub const m_flStartFrame: usize = 0x7D4; // float
}

pub mod CEnvLightProbeVolume { // CBaseEntity
    pub const m_hLightProbeTexture: usize = 0x1498; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_hLightProbeDirectLightIndicesTexture: usize = 0x14A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_hLightProbeDirectLightScalarsTexture: usize = 0x14A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_hLightProbeDirectLightShadowsTexture: usize = 0x14B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_vBoxMins: usize = 0x14B8; // Vector
    pub const m_vBoxMaxs: usize = 0x14C4; // Vector
    pub const m_bMoveable: usize = 0x14D0; // bool
    pub const m_nHandshake: usize = 0x14D4; // int32_t
    pub const m_nPriority: usize = 0x14D8; // int32_t
    pub const m_bStartDisabled: usize = 0x14DC; // bool
    pub const m_nLightProbeSizeX: usize = 0x14E0; // int32_t
    pub const m_nLightProbeSizeY: usize = 0x14E4; // int32_t
    pub const m_nLightProbeSizeZ: usize = 0x14E8; // int32_t
    pub const m_nLightProbeAtlasX: usize = 0x14EC; // int32_t
    pub const m_nLightProbeAtlasY: usize = 0x14F0; // int32_t
    pub const m_nLightProbeAtlasZ: usize = 0x14F4; // int32_t
    pub const m_bEnabled: usize = 0x1501; // bool
}

pub mod CEnvMicrophone { // CPointEntity
    pub const m_bDisabled: usize = 0x4C0; // bool
    pub const m_hMeasureTarget: usize = 0x4C4; // CHandle<CBaseEntity>
    pub const m_nSoundMask: usize = 0x4C8; // int32_t
    pub const m_flSensitivity: usize = 0x4CC; // float
    pub const m_flSmoothFactor: usize = 0x4D0; // float
    pub const m_flMaxRange: usize = 0x4D4; // float
    pub const m_iszSpeakerName: usize = 0x4D8; // CUtlSymbolLarge
    pub const m_hSpeaker: usize = 0x4E0; // CHandle<CBaseEntity>
    pub const m_bAvoidFeedback: usize = 0x4E4; // bool
    pub const m_iSpeakerDSPPreset: usize = 0x4E8; // int32_t
    pub const m_iszListenFilter: usize = 0x4F0; // CUtlSymbolLarge
    pub const m_hListenFilter: usize = 0x4F8; // CHandle<CBaseFilter>
    pub const m_SoundLevel: usize = 0x500; // CEntityOutputTemplate<float>
    pub const m_OnRoutedSound: usize = 0x528; // CEntityIOOutput
    pub const m_OnHeardSound: usize = 0x550; // CEntityIOOutput
    pub const m_szLastSound: usize = 0x578; // char[256]
    pub const m_iLastRoutedFrame: usize = 0x678; // int32_t
}

pub mod CEnvMuzzleFlash { // CPointEntity
    pub const m_flScale: usize = 0x4C0; // float
    pub const m_iszParentAttachment: usize = 0x4C8; // CUtlSymbolLarge
}

pub mod CEnvParticleGlow { // CParticleSystem
    pub const m_flAlphaScale: usize = 0xC88; // float
    pub const m_flRadiusScale: usize = 0xC8C; // float
    pub const m_flSelfIllumScale: usize = 0xC90; // float
    pub const m_ColorTint: usize = 0xC94; // Color
    pub const m_hTextureOverride: usize = 0xC98; // CStrongHandle<InfoForResourceTypeCTextureBase>
}

pub mod CEnvProjectedTexture { // CModelPointEntity
    pub const m_hTargetEntity: usize = 0x710; // CHandle<CBaseEntity>
    pub const m_bState: usize = 0x714; // bool
    pub const m_bAlwaysUpdate: usize = 0x715; // bool
    pub const m_flLightFOV: usize = 0x718; // float
    pub const m_bEnableShadows: usize = 0x71C; // bool
    pub const m_bSimpleProjection: usize = 0x71D; // bool
    pub const m_bLightOnlyTarget: usize = 0x71E; // bool
    pub const m_bLightWorld: usize = 0x71F; // bool
    pub const m_bCameraSpace: usize = 0x720; // bool
    pub const m_flBrightnessScale: usize = 0x724; // float
    pub const m_LightColor: usize = 0x728; // Color
    pub const m_flIntensity: usize = 0x72C; // float
    pub const m_flLinearAttenuation: usize = 0x730; // float
    pub const m_flQuadraticAttenuation: usize = 0x734; // float
    pub const m_bVolumetric: usize = 0x738; // bool
    pub const m_flNoiseStrength: usize = 0x73C; // float
    pub const m_flFlashlightTime: usize = 0x740; // float
    pub const m_nNumPlanes: usize = 0x744; // uint32_t
    pub const m_flPlaneOffset: usize = 0x748; // float
    pub const m_flVolumetricIntensity: usize = 0x74C; // float
    pub const m_flColorTransitionTime: usize = 0x750; // float
    pub const m_flAmbient: usize = 0x754; // float
    pub const m_SpotlightTextureName: usize = 0x758; // char[512]
    pub const m_nSpotlightTextureFrame: usize = 0x958; // int32_t
    pub const m_nShadowQuality: usize = 0x95C; // uint32_t
    pub const m_flNearZ: usize = 0x960; // float
    pub const m_flFarZ: usize = 0x964; // float
    pub const m_flProjectionSize: usize = 0x968; // float
    pub const m_flRotation: usize = 0x96C; // float
    pub const m_bFlipHorizontal: usize = 0x970; // bool
}

pub mod CEnvScreenOverlay { // CPointEntity
    pub const m_iszOverlayNames: usize = 0x4C0; // CUtlSymbolLarge[10]
    pub const m_flOverlayTimes: usize = 0x510; // float[10]
    pub const m_flStartTime: usize = 0x538; // GameTime_t
    pub const m_iDesiredOverlay: usize = 0x53C; // int32_t
    pub const m_bIsActive: usize = 0x540; // bool
}

pub mod CEnvShake { // CPointEntity
    pub const m_limitToEntity: usize = 0x4C0; // CUtlSymbolLarge
    pub const m_Amplitude: usize = 0x4C8; // float
    pub const m_Frequency: usize = 0x4CC; // float
    pub const m_Duration: usize = 0x4D0; // float
    pub const m_Radius: usize = 0x4D4; // float
    pub const m_stopTime: usize = 0x4D8; // GameTime_t
    pub const m_nextShake: usize = 0x4DC; // GameTime_t
    pub const m_currentAmp: usize = 0x4E0; // float
    pub const m_maxForce: usize = 0x4E4; // Vector
    pub const m_shakeCallback: usize = 0x4F8; // CPhysicsShake
}

pub mod CEnvSky { // CBaseModelEntity
    pub const m_hSkyMaterial: usize = 0x710; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_hSkyMaterialLightingOnly: usize = 0x718; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_bStartDisabled: usize = 0x720; // bool
    pub const m_vTintColor: usize = 0x721; // Color
    pub const m_vTintColorLightingOnly: usize = 0x725; // Color
    pub const m_flBrightnessScale: usize = 0x72C; // float
    pub const m_nFogType: usize = 0x730; // int32_t
    pub const m_flFogMinStart: usize = 0x734; // float
    pub const m_flFogMinEnd: usize = 0x738; // float
    pub const m_flFogMaxStart: usize = 0x73C; // float
    pub const m_flFogMaxEnd: usize = 0x740; // float
    pub const m_bEnabled: usize = 0x744; // bool
}

pub mod CEnvSoundscape { // CServerOnlyEntity
    pub const m_OnPlay: usize = 0x4C0; // CEntityIOOutput
    pub const m_flRadius: usize = 0x4E8; // float
    pub const m_soundscapeName: usize = 0x4F0; // CUtlSymbolLarge
    pub const m_soundEventName: usize = 0x4F8; // CUtlSymbolLarge
    pub const m_bOverrideWithEvent: usize = 0x500; // bool
    pub const m_soundscapeIndex: usize = 0x504; // int32_t
    pub const m_soundscapeEntityListId: usize = 0x508; // int32_t
    pub const m_soundEventHash: usize = 0x50C; // uint32_t
    pub const m_positionNames: usize = 0x510; // CUtlSymbolLarge[8]
    pub const m_hProxySoundscape: usize = 0x550; // CHandle<CEnvSoundscape>
    pub const m_bDisabled: usize = 0x554; // bool
}

pub mod CEnvSoundscapeAlias_snd_soundscape { // CEnvSoundscape
}

pub mod CEnvSoundscapeProxy { // CEnvSoundscape
    pub const m_MainSoundscapeName: usize = 0x558; // CUtlSymbolLarge
}

pub mod CEnvSoundscapeProxyAlias_snd_soundscape_proxy { // CEnvSoundscapeProxy
}

pub mod CEnvSoundscapeTriggerable { // CEnvSoundscape
}

pub mod CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable { // CEnvSoundscapeTriggerable
}

pub mod CEnvSpark { // CPointEntity
    pub const m_flDelay: usize = 0x4C0; // float
    pub const m_nMagnitude: usize = 0x4C4; // int32_t
    pub const m_nTrailLength: usize = 0x4C8; // int32_t
    pub const m_nType: usize = 0x4CC; // int32_t
    pub const m_OnSpark: usize = 0x4D0; // CEntityIOOutput
}

pub mod CEnvSplash { // CPointEntity
    pub const m_flScale: usize = 0x4C0; // float
}

pub mod CEnvTilt { // CPointEntity
    pub const m_Duration: usize = 0x4C0; // float
    pub const m_Radius: usize = 0x4C4; // float
    pub const m_TiltTime: usize = 0x4C8; // float
    pub const m_stopTime: usize = 0x4CC; // GameTime_t
}

pub mod CEnvTracer { // CPointEntity
    pub const m_vecEnd: usize = 0x4C0; // Vector
    pub const m_flDelay: usize = 0x4CC; // float
}

pub mod CEnvViewPunch { // CPointEntity
    pub const m_flRadius: usize = 0x4C0; // float
    pub const m_angViewPunch: usize = 0x4C4; // QAngle
}

pub mod CEnvVolumetricFogController { // CBaseEntity
    pub const m_flScattering: usize = 0x4C0; // float
    pub const m_flAnisotropy: usize = 0x4C4; // float
    pub const m_flFadeSpeed: usize = 0x4C8; // float
    pub const m_flDrawDistance: usize = 0x4CC; // float
    pub const m_flFadeInStart: usize = 0x4D0; // float
    pub const m_flFadeInEnd: usize = 0x4D4; // float
    pub const m_flIndirectStrength: usize = 0x4D8; // float
    pub const m_nIndirectTextureDimX: usize = 0x4DC; // int32_t
    pub const m_nIndirectTextureDimY: usize = 0x4E0; // int32_t
    pub const m_nIndirectTextureDimZ: usize = 0x4E4; // int32_t
    pub const m_vBoxMins: usize = 0x4E8; // Vector
    pub const m_vBoxMaxs: usize = 0x4F4; // Vector
    pub const m_bActive: usize = 0x500; // bool
    pub const m_flStartAnisoTime: usize = 0x504; // GameTime_t
    pub const m_flStartScatterTime: usize = 0x508; // GameTime_t
    pub const m_flStartDrawDistanceTime: usize = 0x50C; // GameTime_t
    pub const m_flStartAnisotropy: usize = 0x510; // float
    pub const m_flStartScattering: usize = 0x514; // float
    pub const m_flStartDrawDistance: usize = 0x518; // float
    pub const m_flDefaultAnisotropy: usize = 0x51C; // float
    pub const m_flDefaultScattering: usize = 0x520; // float
    pub const m_flDefaultDrawDistance: usize = 0x524; // float
    pub const m_bStartDisabled: usize = 0x528; // bool
    pub const m_bEnableIndirect: usize = 0x529; // bool
    pub const m_bIsMaster: usize = 0x52A; // bool
    pub const m_hFogIndirectTexture: usize = 0x530; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_nForceRefreshCount: usize = 0x538; // int32_t
    pub const m_bFirstTime: usize = 0x53C; // bool
}

pub mod CEnvVolumetricFogVolume { // CBaseEntity
    pub const m_bActive: usize = 0x4C0; // bool
    pub const m_vBoxMins: usize = 0x4C4; // Vector
    pub const m_vBoxMaxs: usize = 0x4D0; // Vector
    pub const m_bStartDisabled: usize = 0x4DC; // bool
    pub const m_flStrength: usize = 0x4E0; // float
    pub const m_nFalloffShape: usize = 0x4E4; // int32_t
    pub const m_flFalloffExponent: usize = 0x4E8; // float
}

pub mod CEnvWind { // CBaseEntity
    pub const m_EnvWindShared: usize = 0x4C0; // CEnvWindShared
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
    pub const m_sAttributeName: usize = 0x518; // CUtlStringToken
}

pub mod CFilterClass { // CBaseFilter
    pub const m_iFilterClass: usize = 0x518; // CUtlSymbolLarge
}

pub mod CFilterContext { // CBaseFilter
    pub const m_iFilterContext: usize = 0x518; // CUtlSymbolLarge
}

pub mod CFilterEnemy { // CBaseFilter
    pub const m_iszEnemyName: usize = 0x518; // CUtlSymbolLarge
    pub const m_flRadius: usize = 0x520; // float
    pub const m_flOuterRadius: usize = 0x524; // float
    pub const m_nMaxSquadmatesPerEnemy: usize = 0x528; // int32_t
    pub const m_iszPlayerName: usize = 0x530; // CUtlSymbolLarge
}

pub mod CFilterLOS { // CBaseFilter
}

pub mod CFilterMassGreater { // CBaseFilter
    pub const m_fFilterMass: usize = 0x518; // float
}

pub mod CFilterModel { // CBaseFilter
    pub const m_iFilterModel: usize = 0x518; // CUtlSymbolLarge
}

pub mod CFilterMultiple { // CBaseFilter
    pub const m_nFilterType: usize = 0x518; // filter_t
    pub const m_iFilterName: usize = 0x520; // CUtlSymbolLarge[10]
    pub const m_hFilter: usize = 0x570; // CHandle<CBaseEntity>[10]
    pub const m_nFilterCount: usize = 0x598; // int32_t
}

pub mod CFilterName { // CBaseFilter
    pub const m_iFilterName: usize = 0x518; // CUtlSymbolLarge
}

pub mod CFilterProximity { // CBaseFilter
    pub const m_flRadius: usize = 0x518; // float
}

pub mod CFire { // CBaseModelEntity
    pub const m_hEffect: usize = 0x710; // CHandle<CBaseFire>
    pub const m_hOwner: usize = 0x714; // CHandle<CBaseEntity>
    pub const m_nFireType: usize = 0x718; // int32_t
    pub const m_flFuel: usize = 0x71C; // float
    pub const m_flDamageTime: usize = 0x720; // GameTime_t
    pub const m_lastDamage: usize = 0x724; // GameTime_t
    pub const m_flFireSize: usize = 0x728; // float
    pub const m_flLastNavUpdateTime: usize = 0x72C; // GameTime_t
    pub const m_flHeatLevel: usize = 0x730; // float
    pub const m_flHeatAbsorb: usize = 0x734; // float
    pub const m_flDamageScale: usize = 0x738; // float
    pub const m_flMaxHeat: usize = 0x73C; // float
    pub const m_flLastHeatLevel: usize = 0x740; // float
    pub const m_flAttackTime: usize = 0x744; // float
    pub const m_bEnabled: usize = 0x748; // bool
    pub const m_bStartDisabled: usize = 0x749; // bool
    pub const m_bDidActivate: usize = 0x74A; // bool
    pub const m_OnIgnited: usize = 0x750; // CEntityIOOutput
    pub const m_OnExtinguished: usize = 0x778; // CEntityIOOutput
}

pub mod CFireCrackerBlast { // CInferno
}

pub mod CFireSmoke { // CBaseFire
    pub const m_nFlameModelIndex: usize = 0x4D0; // int32_t
    pub const m_nFlameFromAboveModelIndex: usize = 0x4D4; // int32_t
}

pub mod CFiringModeFloat {
    pub const m_flValues: usize = 0x0; // float[2]
}

pub mod CFiringModeInt {
    pub const m_nValues: usize = 0x0; // int32_t[2]
}

pub mod CFish { // CBaseAnimGraph
    pub const m_pool: usize = 0x8E8; // CHandle<CFishPool>
    pub const m_id: usize = 0x8EC; // uint32_t
    pub const m_x: usize = 0x8F0; // float
    pub const m_y: usize = 0x8F4; // float
    pub const m_z: usize = 0x8F8; // float
    pub const m_angle: usize = 0x8FC; // float
    pub const m_angleChange: usize = 0x900; // float
    pub const m_forward: usize = 0x904; // Vector
    pub const m_perp: usize = 0x910; // Vector
    pub const m_poolOrigin: usize = 0x91C; // Vector
    pub const m_waterLevel: usize = 0x928; // float
    pub const m_speed: usize = 0x92C; // float
    pub const m_desiredSpeed: usize = 0x930; // float
    pub const m_calmSpeed: usize = 0x934; // float
    pub const m_panicSpeed: usize = 0x938; // float
    pub const m_avoidRange: usize = 0x93C; // float
    pub const m_turnTimer: usize = 0x940; // CountdownTimer
    pub const m_turnClockwise: usize = 0x958; // bool
    pub const m_goTimer: usize = 0x960; // CountdownTimer
    pub const m_moveTimer: usize = 0x978; // CountdownTimer
    pub const m_panicTimer: usize = 0x990; // CountdownTimer
    pub const m_disperseTimer: usize = 0x9A8; // CountdownTimer
    pub const m_proximityTimer: usize = 0x9C0; // CountdownTimer
    pub const m_visible: usize = 0x9D8; // CUtlVector<CFish*>
}

pub mod CFishPool { // CBaseEntity
    pub const m_fishCount: usize = 0x4D0; // int32_t
    pub const m_maxRange: usize = 0x4D4; // float
    pub const m_swimDepth: usize = 0x4D8; // float
    pub const m_waterLevel: usize = 0x4DC; // float
    pub const m_isDormant: usize = 0x4E0; // bool
    pub const m_fishes: usize = 0x4E8; // CUtlVector<CHandle<CFish>>
    pub const m_visTimer: usize = 0x500; // CountdownTimer
}

pub mod CFists { // CCSWeaponBase
    pub const m_bPlayingUninterruptableAct: usize = 0xE90; // bool
    pub const m_nUninterruptableActivity: usize = 0xE94; // PlayerAnimEvent_t
    pub const m_bRestorePrevWep: usize = 0xE98; // bool
    pub const m_hWeaponBeforePrevious: usize = 0xE9C; // CHandle<CBasePlayerWeapon>
    pub const m_hWeaponPrevious: usize = 0xEA0; // CHandle<CBasePlayerWeapon>
    pub const m_bDelayedHardPunchIncoming: usize = 0xEA4; // bool
    pub const m_bDestroyAfterTaunt: usize = 0xEA5; // bool
}

pub mod CFlashbang { // CBaseCSGrenade
}

pub mod CFlashbangProjectile { // CBaseCSGrenadeProjectile
    pub const m_flTimeToDetonate: usize = 0xA98; // float
    pub const m_numOpponentsHit: usize = 0xA9C; // uint8_t
    pub const m_numTeammatesHit: usize = 0xA9D; // uint8_t
}

pub mod CFogController { // CBaseEntity
    pub const m_fog: usize = 0x4C0; // fogparams_t
    pub const m_bUseAngles: usize = 0x528; // bool
    pub const m_iChangedVariables: usize = 0x52C; // int32_t
}

pub mod CFogTrigger { // CBaseTrigger
    pub const m_fog: usize = 0x8B8; // fogparams_t
}

pub mod CFogVolume { // CServerOnlyModelEntity
    pub const m_fogName: usize = 0x710; // CUtlSymbolLarge
    pub const m_postProcessName: usize = 0x718; // CUtlSymbolLarge
    pub const m_colorCorrectionName: usize = 0x720; // CUtlSymbolLarge
    pub const m_bDisabled: usize = 0x730; // bool
    pub const m_bInFogVolumesList: usize = 0x731; // bool
}

pub mod CFootstepControl { // CBaseTrigger
    pub const m_source: usize = 0x8B8; // CUtlSymbolLarge
    pub const m_destination: usize = 0x8C0; // CUtlSymbolLarge
}

pub mod CFootstepTableHandle {
}

pub mod CFuncBrush { // CBaseModelEntity
    pub const m_iSolidity: usize = 0x710; // BrushSolidities_e
    pub const m_iDisabled: usize = 0x714; // int32_t
    pub const m_bSolidBsp: usize = 0x718; // bool
    pub const m_iszExcludedClass: usize = 0x720; // CUtlSymbolLarge
    pub const m_bInvertExclusion: usize = 0x728; // bool
    pub const m_bScriptedMovement: usize = 0x729; // bool
}

pub mod CFuncConveyor { // CBaseModelEntity
    pub const m_szConveyorModels: usize = 0x710; // CUtlSymbolLarge
    pub const m_flTransitionDurationSeconds: usize = 0x718; // float
    pub const m_angMoveEntitySpace: usize = 0x71C; // QAngle
    pub const m_vecMoveDirEntitySpace: usize = 0x728; // Vector
    pub const m_flTargetSpeed: usize = 0x734; // float
    pub const m_nTransitionStartTick: usize = 0x738; // GameTick_t
    pub const m_nTransitionDurationTicks: usize = 0x73C; // int32_t
    pub const m_flTransitionStartSpeed: usize = 0x740; // float
    pub const m_hConveyorModels: usize = 0x748; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
}

pub mod CFuncElectrifiedVolume { // CFuncBrush
    pub const m_EffectName: usize = 0x730; // CUtlSymbolLarge
    pub const m_EffectInterpenetrateName: usize = 0x738; // CUtlSymbolLarge
    pub const m_EffectZapName: usize = 0x740; // CUtlSymbolLarge
    pub const m_iszEffectSource: usize = 0x748; // CUtlSymbolLarge
}

pub mod CFuncIllusionary { // CBaseModelEntity
}

pub mod CFuncInteractionLayerClip { // CBaseModelEntity
    pub const m_bDisabled: usize = 0x710; // bool
    pub const m_iszInteractsAs: usize = 0x718; // CUtlSymbolLarge
    pub const m_iszInteractsWith: usize = 0x720; // CUtlSymbolLarge
}

pub mod CFuncLadder { // CBaseModelEntity
    pub const m_vecLadderDir: usize = 0x710; // Vector
    pub const m_Dismounts: usize = 0x720; // CUtlVector<CHandle<CInfoLadderDismount>>
    pub const m_vecLocalTop: usize = 0x738; // Vector
    pub const m_vecPlayerMountPositionTop: usize = 0x744; // Vector
    pub const m_vecPlayerMountPositionBottom: usize = 0x750; // Vector
    pub const m_flAutoRideSpeed: usize = 0x75C; // float
    pub const m_bDisabled: usize = 0x760; // bool
    pub const m_bFakeLadder: usize = 0x761; // bool
    pub const m_bHasSlack: usize = 0x762; // bool
    pub const m_surfacePropName: usize = 0x768; // CUtlSymbolLarge
    pub const m_OnPlayerGotOnLadder: usize = 0x770; // CEntityIOOutput
    pub const m_OnPlayerGotOffLadder: usize = 0x798; // CEntityIOOutput
}

pub mod CFuncLadderAlias_func_useableladder { // CFuncLadder
}

pub mod CFuncMonitor { // CFuncBrush
    pub const m_targetCamera: usize = 0x730; // CUtlString
    pub const m_nResolutionEnum: usize = 0x738; // int32_t
    pub const m_bRenderShadows: usize = 0x73C; // bool
    pub const m_bUseUniqueColorTarget: usize = 0x73D; // bool
    pub const m_brushModelName: usize = 0x740; // CUtlString
    pub const m_hTargetCamera: usize = 0x748; // CHandle<CBaseEntity>
    pub const m_bEnabled: usize = 0x74C; // bool
    pub const m_bDraw3DSkybox: usize = 0x74D; // bool
    pub const m_bStartEnabled: usize = 0x74E; // bool
}

pub mod CFuncMoveLinear { // CBaseToggle
    pub const m_authoredPosition: usize = 0x790; // MoveLinearAuthoredPos_t
    pub const m_angMoveEntitySpace: usize = 0x794; // QAngle
    pub const m_vecMoveDirParentSpace: usize = 0x7A0; // Vector
    pub const m_soundStart: usize = 0x7B0; // CUtlSymbolLarge
    pub const m_soundStop: usize = 0x7B8; // CUtlSymbolLarge
    pub const m_currentSound: usize = 0x7C0; // CUtlSymbolLarge
    pub const m_flBlockDamage: usize = 0x7C8; // float
    pub const m_flStartPosition: usize = 0x7CC; // float
    pub const m_flMoveDistance: usize = 0x7D0; // float
    pub const m_OnFullyOpen: usize = 0x7E0; // CEntityIOOutput
    pub const m_OnFullyClosed: usize = 0x808; // CEntityIOOutput
    pub const m_bCreateMovableNavMesh: usize = 0x830; // bool
    pub const m_bCreateNavObstacle: usize = 0x831; // bool
}

pub mod CFuncMoveLinearAlias_momentary_door { // CFuncMoveLinear
}

pub mod CFuncNavBlocker { // CBaseModelEntity
    pub const m_bDisabled: usize = 0x710; // bool
    pub const m_nBlockedTeamNumber: usize = 0x714; // int32_t
}

pub mod CFuncNavObstruction { // CBaseModelEntity
    pub const m_bDisabled: usize = 0x718; // bool
}

pub mod CFuncPlat { // CBasePlatTrain
    pub const m_sNoise: usize = 0x7B8; // CUtlSymbolLarge
}

pub mod CFuncPlatRot { // CFuncPlat
    pub const m_end: usize = 0x7C0; // QAngle
    pub const m_start: usize = 0x7CC; // QAngle
}

pub mod CFuncPropRespawnZone { // CBaseEntity
}

pub mod CFuncRotating { // CBaseModelEntity
    pub const m_OnStopped: usize = 0x710; // CEntityIOOutput
    pub const m_OnStarted: usize = 0x738; // CEntityIOOutput
    pub const m_OnReachedStart: usize = 0x760; // CEntityIOOutput
    pub const m_localRotationVector: usize = 0x788; // RotationVector
    pub const m_flFanFriction: usize = 0x794; // float
    pub const m_flAttenuation: usize = 0x798; // float
    pub const m_flVolume: usize = 0x79C; // float
    pub const m_flTargetSpeed: usize = 0x7A0; // float
    pub const m_flMaxSpeed: usize = 0x7A4; // float
    pub const m_flBlockDamage: usize = 0x7A8; // float
    pub const m_flTimeScale: usize = 0x7AC; // float
    pub const m_NoiseRunning: usize = 0x7B0; // CUtlSymbolLarge
    pub const m_bReversed: usize = 0x7B8; // bool
    pub const m_bAccelDecel: usize = 0x7B9; // bool
    pub const m_prevLocalAngles: usize = 0x7C4; // QAngle
    pub const m_angStart: usize = 0x7D0; // QAngle
    pub const m_bStopAtStartPos: usize = 0x7DC; // bool
    pub const m_vecClientOrigin: usize = 0x7E0; // Vector
    pub const m_vecClientAngles: usize = 0x7EC; // QAngle
}

pub mod CFuncShatterglass { // CBaseModelEntity
    pub const m_hGlassMaterialDamaged: usize = 0x710; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_hGlassMaterialUndamaged: usize = 0x718; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_hConcreteMaterialEdgeFace: usize = 0x720; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_hConcreteMaterialEdgeCaps: usize = 0x728; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_hConcreteMaterialEdgeFins: usize = 0x730; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_matPanelTransform: usize = 0x738; // matrix3x4_t
    pub const m_matPanelTransformWsTemp: usize = 0x768; // matrix3x4_t
    pub const m_vecShatterGlassShards: usize = 0x798; // CUtlVector<uint32_t>
    pub const m_PanelSize: usize = 0x7B0; // Vector2D
    pub const m_vecPanelNormalWs: usize = 0x7B8; // Vector
    pub const m_nNumShardsEverCreated: usize = 0x7C4; // int32_t
    pub const m_flLastShatterSoundEmitTime: usize = 0x7C8; // GameTime_t
    pub const m_flLastCleanupTime: usize = 0x7CC; // GameTime_t
    pub const m_flInitAtTime: usize = 0x7D0; // GameTime_t
    pub const m_flGlassThickness: usize = 0x7D4; // float
    pub const m_flSpawnInvulnerability: usize = 0x7D8; // float
    pub const m_bBreakSilent: usize = 0x7DC; // bool
    pub const m_bBreakShardless: usize = 0x7DD; // bool
    pub const m_bBroken: usize = 0x7DE; // bool
    pub const m_bHasRateLimitedShards: usize = 0x7DF; // bool
    pub const m_bGlassNavIgnore: usize = 0x7E0; // bool
    pub const m_bGlassInFrame: usize = 0x7E1; // bool
    pub const m_bStartBroken: usize = 0x7E2; // bool
    pub const m_iInitialDamageType: usize = 0x7E3; // uint8_t
    pub const m_szDamagePositioningEntityName01: usize = 0x7E8; // CUtlSymbolLarge
    pub const m_szDamagePositioningEntityName02: usize = 0x7F0; // CUtlSymbolLarge
    pub const m_szDamagePositioningEntityName03: usize = 0x7F8; // CUtlSymbolLarge
    pub const m_szDamagePositioningEntityName04: usize = 0x800; // CUtlSymbolLarge
    pub const m_vInitialDamagePositions: usize = 0x808; // CUtlVector<Vector>
    pub const m_vExtraDamagePositions: usize = 0x820; // CUtlVector<Vector>
    pub const m_OnBroken: usize = 0x838; // CEntityIOOutput
    pub const m_iSurfaceType: usize = 0x861; // uint8_t
}

pub mod CFuncTankTrain { // CFuncTrackTrain
    pub const m_OnDeath: usize = 0x860; // CEntityIOOutput
}

pub mod CFuncTimescale { // CBaseEntity
    pub const m_flDesiredTimescale: usize = 0x4C0; // float
    pub const m_flAcceleration: usize = 0x4C4; // float
    pub const m_flMinBlendRate: usize = 0x4C8; // float
    pub const m_flBlendDeltaMultiplier: usize = 0x4CC; // float
    pub const m_isStarted: usize = 0x4D0; // bool
}

pub mod CFuncTrackAuto { // CFuncTrackChange
}

pub mod CFuncTrackChange { // CFuncPlatRot
    pub const m_trackTop: usize = 0x7D8; // CPathTrack*
    pub const m_trackBottom: usize = 0x7E0; // CPathTrack*
    pub const m_train: usize = 0x7E8; // CFuncTrackTrain*
    pub const m_trackTopName: usize = 0x7F0; // CUtlSymbolLarge
    pub const m_trackBottomName: usize = 0x7F8; // CUtlSymbolLarge
    pub const m_trainName: usize = 0x800; // CUtlSymbolLarge
    pub const m_code: usize = 0x808; // TRAIN_CODE
    pub const m_targetState: usize = 0x80C; // int32_t
    pub const m_use: usize = 0x810; // int32_t
}

pub mod CFuncTrackTrain { // CBaseModelEntity
    pub const m_ppath: usize = 0x710; // CHandle<CPathTrack>
    pub const m_length: usize = 0x714; // float
    pub const m_vPosPrev: usize = 0x718; // Vector
    pub const m_angPrev: usize = 0x724; // QAngle
    pub const m_controlMins: usize = 0x730; // Vector
    pub const m_controlMaxs: usize = 0x73C; // Vector
    pub const m_lastBlockPos: usize = 0x748; // Vector
    pub const m_lastBlockTick: usize = 0x754; // int32_t
    pub const m_flVolume: usize = 0x758; // float
    pub const m_flBank: usize = 0x75C; // float
    pub const m_oldSpeed: usize = 0x760; // float
    pub const m_flBlockDamage: usize = 0x764; // float
    pub const m_height: usize = 0x768; // float
    pub const m_maxSpeed: usize = 0x76C; // float
    pub const m_dir: usize = 0x770; // float
    pub const m_iszSoundMove: usize = 0x778; // CUtlSymbolLarge
    pub const m_iszSoundMovePing: usize = 0x780; // CUtlSymbolLarge
    pub const m_iszSoundStart: usize = 0x788; // CUtlSymbolLarge
    pub const m_iszSoundStop: usize = 0x790; // CUtlSymbolLarge
    pub const m_strPathTarget: usize = 0x798; // CUtlSymbolLarge
    pub const m_flMoveSoundMinDuration: usize = 0x7A0; // float
    pub const m_flMoveSoundMaxDuration: usize = 0x7A4; // float
    pub const m_flNextMoveSoundTime: usize = 0x7A8; // GameTime_t
    pub const m_flMoveSoundMinPitch: usize = 0x7AC; // float
    pub const m_flMoveSoundMaxPitch: usize = 0x7B0; // float
    pub const m_eOrientationType: usize = 0x7B4; // TrainOrientationType_t
    pub const m_eVelocityType: usize = 0x7B8; // TrainVelocityType_t
    pub const m_OnStart: usize = 0x7C8; // CEntityIOOutput
    pub const m_OnNext: usize = 0x7F0; // CEntityIOOutput
    pub const m_OnArrivedAtDestinationNode: usize = 0x818; // CEntityIOOutput
    pub const m_bManualSpeedChanges: usize = 0x840; // bool
    pub const m_flDesiredSpeed: usize = 0x844; // float
    pub const m_flSpeedChangeTime: usize = 0x848; // GameTime_t
    pub const m_flAccelSpeed: usize = 0x84C; // float
    pub const m_flDecelSpeed: usize = 0x850; // float
    pub const m_bAccelToSpeed: usize = 0x854; // bool
    pub const m_flTimeScale: usize = 0x858; // float
    pub const m_flNextMPSoundTime: usize = 0x85C; // GameTime_t
}

pub mod CFuncTrain { // CBasePlatTrain
    pub const m_hCurrentTarget: usize = 0x7B8; // CHandle<CBaseEntity>
    pub const m_activated: usize = 0x7BC; // bool
    pub const m_hEnemy: usize = 0x7C0; // CHandle<CBaseEntity>
    pub const m_flBlockDamage: usize = 0x7C4; // float
    pub const m_flNextBlockTime: usize = 0x7C8; // GameTime_t
    pub const m_iszLastTarget: usize = 0x7D0; // CUtlSymbolLarge
}

pub mod CFuncTrainControls { // CBaseModelEntity
}

pub mod CFuncVPhysicsClip { // CBaseModelEntity
    pub const m_bDisabled: usize = 0x710; // bool
}

pub mod CFuncVehicleClip { // CBaseModelEntity
}

pub mod CFuncWall { // CBaseModelEntity
    pub const m_nState: usize = 0x710; // int32_t
}

pub mod CFuncWallToggle { // CFuncWall
}

pub mod CFuncWater { // CBaseModelEntity
    pub const m_BuoyancyHelper: usize = 0x710; // CBuoyancyHelper
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
    pub const m_bAllowNewGibs: usize = 0x4E0; // bool
    pub const m_iCurrentMaxPieces: usize = 0x4E4; // int32_t
    pub const m_iMaxPieces: usize = 0x4E8; // int32_t
    pub const m_iLastFrame: usize = 0x4EC; // int32_t
}

pub mod CGameMoney { // CRulePointEntity
    pub const m_OnMoneySpent: usize = 0x720; // CEntityIOOutput
    pub const m_OnMoneySpentFail: usize = 0x748; // CEntityIOOutput
    pub const m_nMoney: usize = 0x770; // int32_t
    pub const m_strAwardText: usize = 0x778; // CUtlString
}

pub mod CGamePlayerEquip { // CRulePointEntity
}

pub mod CGamePlayerZone { // CRuleBrushEntity
    pub const m_OnPlayerInZone: usize = 0x718; // CEntityIOOutput
    pub const m_OnPlayerOutZone: usize = 0x740; // CEntityIOOutput
    pub const m_PlayersInCount: usize = 0x768; // CEntityOutputTemplate<int32_t>
    pub const m_PlayersOutCount: usize = 0x790; // CEntityOutputTemplate<int32_t>
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
    pub const m_hierarchyAttachName: usize = 0x130; // CUtlStringToken
    pub const m_flZOffset: usize = 0x134; // float
    pub const m_vRenderOrigin: usize = 0x138; // Vector
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
    pub const m_iszMessage: usize = 0x720; // CUtlSymbolLarge
    pub const m_textParms: usize = 0x728; // hudtextparms_t
}

pub mod CGenericConstraint { // CPhysConstraint
    pub const m_nLinearMotionX: usize = 0x520; // JointMotion_t
    pub const m_nLinearMotionY: usize = 0x524; // JointMotion_t
    pub const m_nLinearMotionZ: usize = 0x528; // JointMotion_t
    pub const m_flLinearFrequencyX: usize = 0x52C; // float
    pub const m_flLinearFrequencyY: usize = 0x530; // float
    pub const m_flLinearFrequencyZ: usize = 0x534; // float
    pub const m_flLinearDampingRatioX: usize = 0x538; // float
    pub const m_flLinearDampingRatioY: usize = 0x53C; // float
    pub const m_flLinearDampingRatioZ: usize = 0x540; // float
    pub const m_flMaxLinearImpulseX: usize = 0x544; // float
    pub const m_flMaxLinearImpulseY: usize = 0x548; // float
    pub const m_flMaxLinearImpulseZ: usize = 0x54C; // float
    pub const m_flBreakAfterTimeX: usize = 0x550; // float
    pub const m_flBreakAfterTimeY: usize = 0x554; // float
    pub const m_flBreakAfterTimeZ: usize = 0x558; // float
    pub const m_flBreakAfterTimeStartTimeX: usize = 0x55C; // GameTime_t
    pub const m_flBreakAfterTimeStartTimeY: usize = 0x560; // GameTime_t
    pub const m_flBreakAfterTimeStartTimeZ: usize = 0x564; // GameTime_t
    pub const m_flBreakAfterTimeThresholdX: usize = 0x568; // float
    pub const m_flBreakAfterTimeThresholdY: usize = 0x56C; // float
    pub const m_flBreakAfterTimeThresholdZ: usize = 0x570; // float
    pub const m_flNotifyForceX: usize = 0x574; // float
    pub const m_flNotifyForceY: usize = 0x578; // float
    pub const m_flNotifyForceZ: usize = 0x57C; // float
    pub const m_flNotifyForceMinTimeX: usize = 0x580; // float
    pub const m_flNotifyForceMinTimeY: usize = 0x584; // float
    pub const m_flNotifyForceMinTimeZ: usize = 0x588; // float
    pub const m_flNotifyForceLastTimeX: usize = 0x58C; // GameTime_t
    pub const m_flNotifyForceLastTimeY: usize = 0x590; // GameTime_t
    pub const m_flNotifyForceLastTimeZ: usize = 0x594; // GameTime_t
    pub const m_bAxisNotifiedX: usize = 0x598; // bool
    pub const m_bAxisNotifiedY: usize = 0x599; // bool
    pub const m_bAxisNotifiedZ: usize = 0x59A; // bool
    pub const m_nAngularMotionX: usize = 0x59C; // JointMotion_t
    pub const m_nAngularMotionY: usize = 0x5A0; // JointMotion_t
    pub const m_nAngularMotionZ: usize = 0x5A4; // JointMotion_t
    pub const m_flAngularFrequencyX: usize = 0x5A8; // float
    pub const m_flAngularFrequencyY: usize = 0x5AC; // float
    pub const m_flAngularFrequencyZ: usize = 0x5B0; // float
    pub const m_flAngularDampingRatioX: usize = 0x5B4; // float
    pub const m_flAngularDampingRatioY: usize = 0x5B8; // float
    pub const m_flAngularDampingRatioZ: usize = 0x5BC; // float
    pub const m_flMaxAngularImpulseX: usize = 0x5C0; // float
    pub const m_flMaxAngularImpulseY: usize = 0x5C4; // float
    pub const m_flMaxAngularImpulseZ: usize = 0x5C8; // float
    pub const m_NotifyForceReachedX: usize = 0x5D0; // CEntityIOOutput
    pub const m_NotifyForceReachedY: usize = 0x5F8; // CEntityIOOutput
    pub const m_NotifyForceReachedZ: usize = 0x620; // CEntityIOOutput
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
    pub const m_hGradientFogTexture: usize = 0x4C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_flFogStartDistance: usize = 0x4C8; // float
    pub const m_flFogEndDistance: usize = 0x4CC; // float
    pub const m_bHeightFogEnabled: usize = 0x4D0; // bool
    pub const m_flFogStartHeight: usize = 0x4D4; // float
    pub const m_flFogEndHeight: usize = 0x4D8; // float
    pub const m_flFarZ: usize = 0x4DC; // float
    pub const m_flFogMaxOpacity: usize = 0x4E0; // float
    pub const m_flFogFalloffExponent: usize = 0x4E4; // float
    pub const m_flFogVerticalExponent: usize = 0x4E8; // float
    pub const m_fogColor: usize = 0x4EC; // Color
    pub const m_flFogStrength: usize = 0x4F0; // float
    pub const m_flFadeTime: usize = 0x4F4; // float
    pub const m_bStartDisabled: usize = 0x4F8; // bool
    pub const m_bIsEnabled: usize = 0x4F9; // bool
    pub const m_bGradientFogNeedsTextures: usize = 0x4FA; // bool
}

pub mod CGunTarget { // CBaseToggle
    pub const m_on: usize = 0x790; // bool
    pub const m_hTargetEnt: usize = 0x794; // CHandle<CBaseEntity>
    pub const m_OnDeath: usize = 0x798; // CEntityIOOutput
}

pub mod CHEGrenade { // CBaseCSGrenade
}

pub mod CHEGrenadeProjectile { // CBaseCSGrenadeProjectile
}

pub mod CHandleDummy { // CBaseEntity
}

pub mod CHandleTest { // CBaseEntity
    pub const m_Handle: usize = 0x4C0; // CHandle<CBaseEntity>
    pub const m_bSendHandle: usize = 0x4C4; // bool
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
    pub const m_OnHostageBeginGrab: usize = 0xA28; // CEntityIOOutput
    pub const m_OnFirstPickedUp: usize = 0xA50; // CEntityIOOutput
    pub const m_OnDroppedNotRescued: usize = 0xA78; // CEntityIOOutput
    pub const m_OnRescued: usize = 0xAA0; // CEntityIOOutput
    pub const m_entitySpottedState: usize = 0xAC8; // EntitySpottedState_t
    pub const m_nSpotRules: usize = 0xAE0; // int32_t
    pub const m_uiHostageSpawnExclusionGroupMask: usize = 0xAE4; // uint32_t
    pub const m_nHostageSpawnRandomFactor: usize = 0xAE8; // uint32_t
    pub const m_bRemove: usize = 0xAEC; // bool
    pub const m_vel: usize = 0xAF0; // Vector
    pub const m_isRescued: usize = 0xAFC; // bool
    pub const m_jumpedThisFrame: usize = 0xAFD; // bool
    pub const m_nHostageState: usize = 0xB00; // int32_t
    pub const m_leader: usize = 0xB04; // CHandle<CBaseEntity>
    pub const m_lastLeader: usize = 0xB08; // CHandle<CCSPlayerPawnBase>
    pub const m_reuseTimer: usize = 0xB10; // CountdownTimer
    pub const m_hasBeenUsed: usize = 0xB28; // bool
    pub const m_accel: usize = 0xB2C; // Vector
    pub const m_isRunning: usize = 0xB38; // bool
    pub const m_isCrouching: usize = 0xB39; // bool
    pub const m_jumpTimer: usize = 0xB40; // CountdownTimer
    pub const m_isWaitingForLeader: usize = 0xB58; // bool
    pub const m_repathTimer: usize = 0x2B68; // CountdownTimer
    pub const m_inhibitDoorTimer: usize = 0x2B80; // CountdownTimer
    pub const m_inhibitObstacleAvoidanceTimer: usize = 0x2C10; // CountdownTimer
    pub const m_wiggleTimer: usize = 0x2C30; // CountdownTimer
    pub const m_isAdjusted: usize = 0x2C4C; // bool
    pub const m_bHandsHaveBeenCut: usize = 0x2C4D; // bool
    pub const m_hHostageGrabber: usize = 0x2C50; // CHandle<CCSPlayerPawn>
    pub const m_fLastGrabTime: usize = 0x2C54; // GameTime_t
    pub const m_vecPositionWhenStartedDroppingToGround: usize = 0x2C58; // Vector
    pub const m_vecGrabbedPos: usize = 0x2C64; // Vector
    pub const m_flRescueStartTime: usize = 0x2C70; // GameTime_t
    pub const m_flGrabSuccessTime: usize = 0x2C74; // GameTime_t
    pub const m_flDropStartTime: usize = 0x2C78; // GameTime_t
    pub const m_nApproachRewardPayouts: usize = 0x2C7C; // int32_t
    pub const m_nPickupEventCount: usize = 0x2C80; // int32_t
    pub const m_vecSpawnGroundPos: usize = 0x2C84; // Vector
    pub const m_vecHostageResetPosition: usize = 0x2CA4; // Vector
}

pub mod CHostageAlias_info_hostage_spawn { // CHostage
}

pub mod CHostageCarriableProp { // CBaseAnimGraph
}

pub mod CHostageExpresserShim { // CBaseCombatCharacter
    pub const m_pExpresser: usize = 0xA10; // CAI_Expresser*
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
    pub const m_firePositions: usize = 0x720; // Vector[64]
    pub const m_fireParentPositions: usize = 0xA20; // Vector[64]
    pub const m_bFireIsBurning: usize = 0xD20; // bool[64]
    pub const m_BurnNormal: usize = 0xD60; // Vector[64]
    pub const m_fireCount: usize = 0x1060; // int32_t
    pub const m_nInfernoType: usize = 0x1064; // int32_t
    pub const m_nFireEffectTickBegin: usize = 0x1068; // int32_t
    pub const m_nFireLifetime: usize = 0x106C; // float
    pub const m_bInPostEffectTime: usize = 0x1070; // bool
    pub const m_nFiresExtinguishCount: usize = 0x1074; // int32_t
    pub const m_bWasCreatedInSmoke: usize = 0x1078; // bool
    pub const m_extent: usize = 0x1280; // Extent
    pub const m_damageTimer: usize = 0x1298; // CountdownTimer
    pub const m_damageRampTimer: usize = 0x12B0; // CountdownTimer
    pub const m_splashVelocity: usize = 0x12C8; // Vector
    pub const m_InitialSplashVelocity: usize = 0x12D4; // Vector
    pub const m_startPos: usize = 0x12E0; // Vector
    pub const m_vecOriginalSpawnLocation: usize = 0x12EC; // Vector
    pub const m_activeTimer: usize = 0x12F8; // IntervalTimer
    pub const m_fireSpawnOffset: usize = 0x1308; // int32_t
    pub const m_nMaxFlames: usize = 0x130C; // int32_t
    pub const m_nSpreadCount: usize = 0x1310; // int32_t
    pub const m_BookkeepingTimer: usize = 0x1318; // CountdownTimer
    pub const m_NextSpreadTimer: usize = 0x1330; // CountdownTimer
    pub const m_nSourceItemDefIndex: usize = 0x1348; // uint16_t
}

pub mod CInfoData { // CServerOnlyEntity
}

pub mod CInfoDeathmatchSpawn { // SpawnPoint
}

pub mod CInfoDynamicShadowHint { // CPointEntity
    pub const m_bDisabled: usize = 0x4C0; // bool
    pub const m_flRange: usize = 0x4C4; // float
    pub const m_nImportance: usize = 0x4C8; // int32_t
    pub const m_nLightChoice: usize = 0x4CC; // int32_t
    pub const m_hLight: usize = 0x4D0; // CHandle<CBaseEntity>
}

pub mod CInfoDynamicShadowHintBox { // CInfoDynamicShadowHint
    pub const m_vBoxMins: usize = 0x4D8; // Vector
    pub const m_vBoxMaxs: usize = 0x4E4; // Vector
}

pub mod CInfoEnemyTerroristSpawn { // SpawnPointCoopEnemy
}

pub mod CInfoGameEventProxy { // CPointEntity
    pub const m_iszEventName: usize = 0x4C0; // CUtlSymbolLarge
    pub const m_flRange: usize = 0x4C8; // float
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
    pub const m_bDisabled: usize = 0x4C0; // bool
    pub const m_nResolutionX: usize = 0x4C4; // int32_t
    pub const m_nResolutionY: usize = 0x4C8; // int32_t
    pub const m_szLayoutFileName: usize = 0x4D0; // CUtlSymbolLarge
    pub const m_RenderAttrName: usize = 0x4D8; // CUtlSymbolLarge
    pub const m_TargetEntities: usize = 0x4E0; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
    pub const m_nTargetChangeCount: usize = 0x4F8; // int32_t
    pub const m_vecCSSClasses: usize = 0x500; // CNetworkUtlVectorBase<CUtlSymbolLarge>
    pub const m_szTargetsName: usize = 0x518; // CUtlSymbolLarge
    pub const m_AdditionalTargetEntities: usize = 0x520; // CUtlVector<CHandle<CBaseModelEntity>>
}

pub mod CInfoParticleTarget { // CPointEntity
}

pub mod CInfoPlayerCounterterrorist { // SpawnPoint
}

pub mod CInfoPlayerStart { // CPointEntity
    pub const m_bDisabled: usize = 0x4C0; // bool
}

pub mod CInfoPlayerTerrorist { // SpawnPoint
}

pub mod CInfoSpawnGroupLandmark { // CPointEntity
}

pub mod CInfoSpawnGroupLoadUnload { // CLogicalEntity
    pub const m_OnSpawnGroupLoadStarted: usize = 0x4C0; // CEntityIOOutput
    pub const m_OnSpawnGroupLoadFinished: usize = 0x4E8; // CEntityIOOutput
    pub const m_OnSpawnGroupUnloadStarted: usize = 0x510; // CEntityIOOutput
    pub const m_OnSpawnGroupUnloadFinished: usize = 0x538; // CEntityIOOutput
    pub const m_iszSpawnGroupName: usize = 0x560; // CUtlSymbolLarge
    pub const m_iszSpawnGroupFilterName: usize = 0x568; // CUtlSymbolLarge
    pub const m_iszLandmarkName: usize = 0x570; // CUtlSymbolLarge
    pub const m_sFixedSpawnGroupName: usize = 0x578; // CUtlString
    pub const m_flTimeoutInterval: usize = 0x580; // float
    pub const m_bStreamingStarted: usize = 0x584; // bool
    pub const m_bUnloadingStarted: usize = 0x585; // bool
}

pub mod CInfoTarget { // CPointEntity
}

pub mod CInfoTargetServerOnly { // CServerOnlyPointEntity
}

pub mod CInfoTeleportDestination { // CPointEntity
}

pub mod CInfoVisibilityBox { // CBaseEntity
    pub const m_nMode: usize = 0x4C4; // int32_t
    pub const m_vBoxSize: usize = 0x4C8; // Vector
    pub const m_bEnabled: usize = 0x4D4; // bool
}

pub mod CInfoWorldLayer { // CBaseEntity
    pub const m_pOutputOnEntitiesSpawned: usize = 0x4C0; // CEntityIOOutput
    pub const m_worldName: usize = 0x4E8; // CUtlSymbolLarge
    pub const m_layerName: usize = 0x4F0; // CUtlSymbolLarge
    pub const m_bWorldLayerVisible: usize = 0x4F8; // bool
    pub const m_bEntitiesSpawned: usize = 0x4F9; // bool
    pub const m_bCreateAsChildSpawnGroup: usize = 0x4FA; // bool
    pub const m_hLayerSpawnGroup: usize = 0x4FC; // uint32_t
}

pub mod CInstancedSceneEntity { // CSceneEntity
    pub const m_hOwner: usize = 0xA18; // CHandle<CBaseEntity>
    pub const m_bHadOwner: usize = 0xA1C; // bool
    pub const m_flPostSpeakDelay: usize = 0xA20; // float
    pub const m_flPreDelay: usize = 0xA24; // float
    pub const m_bIsBackground: usize = 0xA28; // bool
    pub const m_bRemoveOnCompletion: usize = 0xA29; // bool
    pub const m_hTarget: usize = 0xA2C; // CHandle<CBaseEntity>
}

pub mod CInstructorEventEntity { // CPointEntity
    pub const m_iszName: usize = 0x4C0; // CUtlSymbolLarge
    pub const m_iszHintTargetEntity: usize = 0x4C8; // CUtlSymbolLarge
    pub const m_hTargetPlayer: usize = 0x4D0; // CHandle<CBasePlayerPawn>
}

pub mod CIronSightController {
    pub const m_bIronSightAvailable: usize = 0x8; // bool
    pub const m_flIronSightAmount: usize = 0xC; // float
    pub const m_flIronSightAmountGained: usize = 0x10; // float
    pub const m_flIronSightAmountBiased: usize = 0x14; // float
}

pub mod CItem { // CBaseAnimGraph
    pub const m_OnPlayerTouch: usize = 0x8F0; // CEntityIOOutput
    pub const m_bActivateWhenAtRest: usize = 0x918; // bool
    pub const m_OnCacheInteraction: usize = 0x920; // CEntityIOOutput
    pub const m_OnPlayerPickup: usize = 0x948; // CEntityIOOutput
    pub const m_OnGlovePulled: usize = 0x970; // CEntityIOOutput
    pub const m_vOriginalSpawnOrigin: usize = 0x998; // Vector
    pub const m_vOriginalSpawnAngles: usize = 0x9A4; // QAngle
    pub const m_bPhysStartAsleep: usize = 0x9B0; // bool
}

pub mod CItemAssaultSuit { // CItem
}

pub mod CItemDefuser { // CItem
    pub const m_entitySpottedState: usize = 0x9C0; // EntitySpottedState_t
    pub const m_nSpotRules: usize = 0x9D8; // int32_t
}

pub mod CItemDefuserAlias_item_defuser { // CItemDefuser
}

pub mod CItemDogtags { // CItem
    pub const m_OwningPlayer: usize = 0x9C0; // CHandle<CCSPlayerPawn>
    pub const m_KillingPlayer: usize = 0x9C4; // CHandle<CCSPlayerPawn>
}

pub mod CItemGeneric { // CItem
    pub const m_bHasTriggerRadius: usize = 0x9C8; // bool
    pub const m_bHasPickupRadius: usize = 0x9C9; // bool
    pub const m_flPickupRadiusSqr: usize = 0x9CC; // float
    pub const m_flTriggerRadiusSqr: usize = 0x9D0; // float
    pub const m_flLastPickupCheck: usize = 0x9D4; // GameTime_t
    pub const m_bPlayerCounterListenerAdded: usize = 0x9D8; // bool
    pub const m_bPlayerInTriggerRadius: usize = 0x9D9; // bool
    pub const m_hSpawnParticleEffect: usize = 0x9E0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    pub const m_pAmbientSoundEffect: usize = 0x9E8; // CUtlSymbolLarge
    pub const m_bAutoStartAmbientSound: usize = 0x9F0; // bool
    pub const m_pSpawnScriptFunction: usize = 0x9F8; // CUtlSymbolLarge
    pub const m_hPickupParticleEffect: usize = 0xA00; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    pub const m_pPickupSoundEffect: usize = 0xA08; // CUtlSymbolLarge
    pub const m_pPickupScriptFunction: usize = 0xA10; // CUtlSymbolLarge
    pub const m_hTimeoutParticleEffect: usize = 0xA18; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    pub const m_pTimeoutSoundEffect: usize = 0xA20; // CUtlSymbolLarge
    pub const m_pTimeoutScriptFunction: usize = 0xA28; // CUtlSymbolLarge
    pub const m_pPickupFilterName: usize = 0xA30; // CUtlSymbolLarge
    pub const m_hPickupFilter: usize = 0xA38; // CHandle<CBaseFilter>
    pub const m_OnPickup: usize = 0xA40; // CEntityIOOutput
    pub const m_OnTimeout: usize = 0xA68; // CEntityIOOutput
    pub const m_OnTriggerStartTouch: usize = 0xA90; // CEntityIOOutput
    pub const m_OnTriggerTouch: usize = 0xAB8; // CEntityIOOutput
    pub const m_OnTriggerEndTouch: usize = 0xAE0; // CEntityIOOutput
    pub const m_pAllowPickupScriptFunction: usize = 0xB08; // CUtlSymbolLarge
    pub const m_flPickupRadius: usize = 0xB10; // float
    pub const m_flTriggerRadius: usize = 0xB14; // float
    pub const m_pTriggerSoundEffect: usize = 0xB18; // CUtlSymbolLarge
    pub const m_bGlowWhenInTrigger: usize = 0xB20; // bool
    pub const m_glowColor: usize = 0xB21; // Color
    pub const m_bUseable: usize = 0xB25; // bool
    pub const m_hTriggerHelper: usize = 0xB28; // CHandle<CItemGenericTriggerHelper>
}

pub mod CItemGenericTriggerHelper { // CBaseModelEntity
    pub const m_hParentItem: usize = 0x710; // CHandle<CItemGeneric>
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
    pub const m_worldGoalAxis: usize = 0x4C8; // Vector
    pub const m_localTestAxis: usize = 0x4D4; // Vector
    pub const m_nameAttach: usize = 0x4E8; // CUtlSymbolLarge
    pub const m_attachedObject: usize = 0x4F0; // CHandle<CBaseEntity>
    pub const m_angularLimit: usize = 0x4F4; // float
    pub const m_bActive: usize = 0x4F8; // bool
    pub const m_bDampAllRotation: usize = 0x4F9; // bool
}

pub mod CKnife { // CCSWeaponBase
    pub const m_bFirstAttack: usize = 0xE90; // bool
}

pub mod CLightComponent { // CEntityComponent
    pub const __m_pChainEntity: usize = 0x48; // CNetworkVarChainer
    pub const m_Color: usize = 0x85; // Color
    pub const m_SecondaryColor: usize = 0x89; // Color
    pub const m_flBrightness: usize = 0x90; // float
    pub const m_flBrightnessScale: usize = 0x94; // float
    pub const m_flBrightnessMult: usize = 0x98; // float
    pub const m_flRange: usize = 0x9C; // float
    pub const m_flFalloff: usize = 0xA0; // float
    pub const m_flAttenuation0: usize = 0xA4; // float
    pub const m_flAttenuation1: usize = 0xA8; // float
    pub const m_flAttenuation2: usize = 0xAC; // float
    pub const m_flTheta: usize = 0xB0; // float
    pub const m_flPhi: usize = 0xB4; // float
    pub const m_hLightCookie: usize = 0xB8; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_nCascades: usize = 0xC0; // int32_t
    pub const m_nCastShadows: usize = 0xC4; // int32_t
    pub const m_nShadowWidth: usize = 0xC8; // int32_t
    pub const m_nShadowHeight: usize = 0xCC; // int32_t
    pub const m_bRenderDiffuse: usize = 0xD0; // bool
    pub const m_nRenderSpecular: usize = 0xD4; // int32_t
    pub const m_bRenderTransmissive: usize = 0xD8; // bool
    pub const m_flOrthoLightWidth: usize = 0xDC; // float
    pub const m_flOrthoLightHeight: usize = 0xE0; // float
    pub const m_nStyle: usize = 0xE4; // int32_t
    pub const m_Pattern: usize = 0xE8; // CUtlString
    pub const m_nCascadeRenderStaticObjects: usize = 0xF0; // int32_t
    pub const m_flShadowCascadeCrossFade: usize = 0xF4; // float
    pub const m_flShadowCascadeDistanceFade: usize = 0xF8; // float
    pub const m_flShadowCascadeDistance0: usize = 0xFC; // float
    pub const m_flShadowCascadeDistance1: usize = 0x100; // float
    pub const m_flShadowCascadeDistance2: usize = 0x104; // float
    pub const m_flShadowCascadeDistance3: usize = 0x108; // float
    pub const m_nShadowCascadeResolution0: usize = 0x10C; // int32_t
    pub const m_nShadowCascadeResolution1: usize = 0x110; // int32_t
    pub const m_nShadowCascadeResolution2: usize = 0x114; // int32_t
    pub const m_nShadowCascadeResolution3: usize = 0x118; // int32_t
    pub const m_bUsesBakedShadowing: usize = 0x11C; // bool
    pub const m_nShadowPriority: usize = 0x120; // int32_t
    pub const m_nBakedShadowIndex: usize = 0x124; // int32_t
    pub const m_bRenderToCubemaps: usize = 0x128; // bool
    pub const m_nDirectLight: usize = 0x12C; // int32_t
    pub const m_nIndirectLight: usize = 0x130; // int32_t
    pub const m_flFadeMinDist: usize = 0x134; // float
    pub const m_flFadeMaxDist: usize = 0x138; // float
    pub const m_flShadowFadeMinDist: usize = 0x13C; // float
    pub const m_flShadowFadeMaxDist: usize = 0x140; // float
    pub const m_bEnabled: usize = 0x144; // bool
    pub const m_bFlicker: usize = 0x145; // bool
    pub const m_bPrecomputedFieldsValid: usize = 0x146; // bool
    pub const m_vPrecomputedBoundsMins: usize = 0x148; // Vector
    pub const m_vPrecomputedBoundsMaxs: usize = 0x154; // Vector
    pub const m_vPrecomputedOBBOrigin: usize = 0x160; // Vector
    pub const m_vPrecomputedOBBAngles: usize = 0x16C; // QAngle
    pub const m_vPrecomputedOBBExtent: usize = 0x178; // Vector
    pub const m_flPrecomputedMaxRange: usize = 0x184; // float
    pub const m_nFogLightingMode: usize = 0x188; // int32_t
    pub const m_flFogContributionStength: usize = 0x18C; // float
    pub const m_flNearClipPlane: usize = 0x190; // float
    pub const m_SkyColor: usize = 0x194; // Color
    pub const m_flSkyIntensity: usize = 0x198; // float
    pub const m_SkyAmbientBounce: usize = 0x19C; // Color
    pub const m_bUseSecondaryColor: usize = 0x1A0; // bool
    pub const m_bMixedShadows: usize = 0x1A1; // bool
    pub const m_flLightStyleStartTime: usize = 0x1A4; // GameTime_t
    pub const m_flCapsuleLength: usize = 0x1A8; // float
    pub const m_flMinRoughness: usize = 0x1AC; // float
    pub const m_bPvsModifyEntity: usize = 0x1C0; // bool
}

pub mod CLightDirectionalEntity { // CLightEntity
}

pub mod CLightEntity { // CBaseModelEntity
    pub const m_CLightComponent: usize = 0x710; // CLightComponent*
}

pub mod CLightEnvironmentEntity { // CLightDirectionalEntity
}

pub mod CLightGlow { // CBaseModelEntity
    pub const m_nHorizontalSize: usize = 0x710; // uint32_t
    pub const m_nVerticalSize: usize = 0x714; // uint32_t
    pub const m_nMinDist: usize = 0x718; // uint32_t
    pub const m_nMaxDist: usize = 0x71C; // uint32_t
    pub const m_nOuterMaxDist: usize = 0x720; // uint32_t
    pub const m_flGlowProxySize: usize = 0x724; // float
    pub const m_flHDRColorScale: usize = 0x728; // float
}

pub mod CLightOrthoEntity { // CLightEntity
}

pub mod CLightSpotEntity { // CLightEntity
}

pub mod CLogicAchievement { // CLogicalEntity
    pub const m_bDisabled: usize = 0x4C0; // bool
    pub const m_iszAchievementEventID: usize = 0x4C8; // CUtlSymbolLarge
    pub const m_OnFired: usize = 0x4D0; // CEntityIOOutput
}

pub mod CLogicActiveAutosave { // CLogicAutosave
    pub const m_TriggerHitPoints: usize = 0x4D0; // int32_t
    pub const m_flTimeToTrigger: usize = 0x4D4; // float
    pub const m_flStartTime: usize = 0x4D8; // GameTime_t
    pub const m_flDangerousTime: usize = 0x4DC; // float
}

pub mod CLogicAuto { // CBaseEntity
    pub const m_OnMapSpawn: usize = 0x4C0; // CEntityIOOutput
    pub const m_OnDemoMapSpawn: usize = 0x4E8; // CEntityIOOutput
    pub const m_OnNewGame: usize = 0x510; // CEntityIOOutput
    pub const m_OnLoadGame: usize = 0x538; // CEntityIOOutput
    pub const m_OnMapTransition: usize = 0x560; // CEntityIOOutput
    pub const m_OnBackgroundMap: usize = 0x588; // CEntityIOOutput
    pub const m_OnMultiNewMap: usize = 0x5B0; // CEntityIOOutput
    pub const m_OnMultiNewRound: usize = 0x5D8; // CEntityIOOutput
    pub const m_OnVREnabled: usize = 0x600; // CEntityIOOutput
    pub const m_OnVRNotEnabled: usize = 0x628; // CEntityIOOutput
    pub const m_globalstate: usize = 0x650; // CUtlSymbolLarge
}

pub mod CLogicAutosave { // CLogicalEntity
    pub const m_bForceNewLevelUnit: usize = 0x4C0; // bool
    pub const m_minHitPoints: usize = 0x4C4; // int32_t
    pub const m_minHitPointsToCommit: usize = 0x4C8; // int32_t
}

pub mod CLogicBranch { // CLogicalEntity
    pub const m_bInValue: usize = 0x4C0; // bool
    pub const m_Listeners: usize = 0x4C8; // CUtlVector<CHandle<CBaseEntity>>
    pub const m_OnTrue: usize = 0x4E0; // CEntityIOOutput
    pub const m_OnFalse: usize = 0x508; // CEntityIOOutput
}

pub mod CLogicBranchList { // CLogicalEntity
    pub const m_nLogicBranchNames: usize = 0x4C0; // CUtlSymbolLarge[16]
    pub const m_LogicBranchList: usize = 0x540; // CUtlVector<CHandle<CBaseEntity>>
    pub const m_eLastState: usize = 0x558; // CLogicBranchList::LogicBranchListenerLastState_t
    pub const m_OnAllTrue: usize = 0x560; // CEntityIOOutput
    pub const m_OnAllFalse: usize = 0x588; // CEntityIOOutput
    pub const m_OnMixed: usize = 0x5B0; // CEntityIOOutput
}

pub mod CLogicCase { // CLogicalEntity
    pub const m_nCase: usize = 0x4C0; // CUtlSymbolLarge[32]
    pub const m_nShuffleCases: usize = 0x5C0; // int32_t
    pub const m_nLastShuffleCase: usize = 0x5C4; // int32_t
    pub const m_uchShuffleCaseMap: usize = 0x5C8; // uint8_t[32]
    pub const m_OnCase: usize = 0x5E8; // CEntityIOOutput[32]
    pub const m_OnDefault: usize = 0xAE8; // CEntityOutputTemplate<CVariantBase<CVariantDefaultAllocator>>
}

pub mod CLogicCollisionPair { // CLogicalEntity
    pub const m_nameAttach1: usize = 0x4C0; // CUtlSymbolLarge
    pub const m_nameAttach2: usize = 0x4C8; // CUtlSymbolLarge
    pub const m_disabled: usize = 0x4D0; // bool
    pub const m_succeeded: usize = 0x4D1; // bool
}

pub mod CLogicCompare { // CLogicalEntity
    pub const m_flInValue: usize = 0x4C0; // float
    pub const m_flCompareValue: usize = 0x4C4; // float
    pub const m_OnLessThan: usize = 0x4C8; // CEntityOutputTemplate<float>
    pub const m_OnEqualTo: usize = 0x4F0; // CEntityOutputTemplate<float>
    pub const m_OnNotEqualTo: usize = 0x518; // CEntityOutputTemplate<float>
    pub const m_OnGreaterThan: usize = 0x540; // CEntityOutputTemplate<float>
}

pub mod CLogicDistanceAutosave { // CLogicalEntity
    pub const m_iszTargetEntity: usize = 0x4C0; // CUtlSymbolLarge
    pub const m_flDistanceToPlayer: usize = 0x4C8; // float
    pub const m_bForceNewLevelUnit: usize = 0x4CC; // bool
    pub const m_bCheckCough: usize = 0x4CD; // bool
    pub const m_bThinkDangerous: usize = 0x4CE; // bool
    pub const m_flDangerousTime: usize = 0x4D0; // float
}

pub mod CLogicDistanceCheck { // CLogicalEntity
    pub const m_iszEntityA: usize = 0x4C0; // CUtlSymbolLarge
    pub const m_iszEntityB: usize = 0x4C8; // CUtlSymbolLarge
    pub const m_flZone1Distance: usize = 0x4D0; // float
    pub const m_flZone2Distance: usize = 0x4D4; // float
    pub const m_InZone1: usize = 0x4D8; // CEntityIOOutput
    pub const m_InZone2: usize = 0x500; // CEntityIOOutput
    pub const m_InZone3: usize = 0x528; // CEntityIOOutput
}

pub mod CLogicEventListener { // CLogicalEntity
    pub const m_strEventName: usize = 0x4D0; // CUtlString
    pub const m_bIsEnabled: usize = 0x4D8; // bool
    pub const m_nTeam: usize = 0x4DC; // int32_t
    pub const m_OnEventFired: usize = 0x4E0; // CEntityIOOutput
}

pub mod CLogicGameEvent { // CLogicalEntity
    pub const m_iszEventName: usize = 0x4C0; // CUtlSymbolLarge
}

pub mod CLogicGameEventListener { // CLogicalEntity
    pub const m_OnEventFired: usize = 0x4D0; // CEntityIOOutput
    pub const m_iszGameEventName: usize = 0x4F8; // CUtlSymbolLarge
    pub const m_iszGameEventItem: usize = 0x500; // CUtlSymbolLarge
    pub const m_bEnabled: usize = 0x508; // bool
    pub const m_bStartDisabled: usize = 0x509; // bool
}

pub mod CLogicLineToEntity { // CLogicalEntity
    pub const m_Line: usize = 0x4C0; // CEntityOutputTemplate<Vector>
    pub const m_SourceName: usize = 0x4E8; // CUtlSymbolLarge
    pub const m_StartEntity: usize = 0x4F0; // CHandle<CBaseEntity>
    pub const m_EndEntity: usize = 0x4F4; // CHandle<CBaseEntity>
}

pub mod CLogicMeasureMovement { // CLogicalEntity
    pub const m_strMeasureTarget: usize = 0x4C0; // CUtlSymbolLarge
    pub const m_strMeasureReference: usize = 0x4C8; // CUtlSymbolLarge
    pub const m_strTargetReference: usize = 0x4D0; // CUtlSymbolLarge
    pub const m_hMeasureTarget: usize = 0x4D8; // CHandle<CBaseEntity>
    pub const m_hMeasureReference: usize = 0x4DC; // CHandle<CBaseEntity>
    pub const m_hTarget: usize = 0x4E0; // CHandle<CBaseEntity>
    pub const m_hTargetReference: usize = 0x4E4; // CHandle<CBaseEntity>
    pub const m_flScale: usize = 0x4E8; // float
    pub const m_nMeasureType: usize = 0x4EC; // int32_t
}

pub mod CLogicNPCCounter { // CBaseEntity
    pub const m_OnMinCountAll: usize = 0x4C0; // CEntityIOOutput
    pub const m_OnMaxCountAll: usize = 0x4E8; // CEntityIOOutput
    pub const m_OnFactorAll: usize = 0x510; // CEntityOutputTemplate<float>
    pub const m_OnMinPlayerDistAll: usize = 0x538; // CEntityOutputTemplate<float>
    pub const m_OnMinCount_1: usize = 0x560; // CEntityIOOutput
    pub const m_OnMaxCount_1: usize = 0x588; // CEntityIOOutput
    pub const m_OnFactor_1: usize = 0x5B0; // CEntityOutputTemplate<float>
    pub const m_OnMinPlayerDist_1: usize = 0x5D8; // CEntityOutputTemplate<float>
    pub const m_OnMinCount_2: usize = 0x600; // CEntityIOOutput
    pub const m_OnMaxCount_2: usize = 0x628; // CEntityIOOutput
    pub const m_OnFactor_2: usize = 0x650; // CEntityOutputTemplate<float>
    pub const m_OnMinPlayerDist_2: usize = 0x678; // CEntityOutputTemplate<float>
    pub const m_OnMinCount_3: usize = 0x6A0; // CEntityIOOutput
    pub const m_OnMaxCount_3: usize = 0x6C8; // CEntityIOOutput
    pub const m_OnFactor_3: usize = 0x6F0; // CEntityOutputTemplate<float>
    pub const m_OnMinPlayerDist_3: usize = 0x718; // CEntityOutputTemplate<float>
    pub const m_hSource: usize = 0x740; // CEntityHandle
    pub const m_iszSourceEntityName: usize = 0x748; // CUtlSymbolLarge
    pub const m_flDistanceMax: usize = 0x750; // float
    pub const m_bDisabled: usize = 0x754; // bool
    pub const m_nMinCountAll: usize = 0x758; // int32_t
    pub const m_nMaxCountAll: usize = 0x75C; // int32_t
    pub const m_nMinFactorAll: usize = 0x760; // int32_t
    pub const m_nMaxFactorAll: usize = 0x764; // int32_t
    pub const m_iszNPCClassname_1: usize = 0x770; // CUtlSymbolLarge
    pub const m_nNPCState_1: usize = 0x778; // int32_t
    pub const m_bInvertState_1: usize = 0x77C; // bool
    pub const m_nMinCount_1: usize = 0x780; // int32_t
    pub const m_nMaxCount_1: usize = 0x784; // int32_t
    pub const m_nMinFactor_1: usize = 0x788; // int32_t
    pub const m_nMaxFactor_1: usize = 0x78C; // int32_t
    pub const m_flDefaultDist_1: usize = 0x794; // float
    pub const m_iszNPCClassname_2: usize = 0x798; // CUtlSymbolLarge
    pub const m_nNPCState_2: usize = 0x7A0; // int32_t
    pub const m_bInvertState_2: usize = 0x7A4; // bool
    pub const m_nMinCount_2: usize = 0x7A8; // int32_t
    pub const m_nMaxCount_2: usize = 0x7AC; // int32_t
    pub const m_nMinFactor_2: usize = 0x7B0; // int32_t
    pub const m_nMaxFactor_2: usize = 0x7B4; // int32_t
    pub const m_flDefaultDist_2: usize = 0x7BC; // float
    pub const m_iszNPCClassname_3: usize = 0x7C0; // CUtlSymbolLarge
    pub const m_nNPCState_3: usize = 0x7C8; // int32_t
    pub const m_bInvertState_3: usize = 0x7CC; // bool
    pub const m_nMinCount_3: usize = 0x7D0; // int32_t
    pub const m_nMaxCount_3: usize = 0x7D4; // int32_t
    pub const m_nMinFactor_3: usize = 0x7D8; // int32_t
    pub const m_nMaxFactor_3: usize = 0x7DC; // int32_t
    pub const m_flDefaultDist_3: usize = 0x7E4; // float
}

pub mod CLogicNPCCounterAABB { // CLogicNPCCounter
    pub const m_vDistanceOuterMins: usize = 0x800; // Vector
    pub const m_vDistanceOuterMaxs: usize = 0x80C; // Vector
    pub const m_vOuterMins: usize = 0x818; // Vector
    pub const m_vOuterMaxs: usize = 0x824; // Vector
}

pub mod CLogicNPCCounterOBB { // CLogicNPCCounterAABB
}

pub mod CLogicNavigation { // CLogicalEntity
    pub const m_isOn: usize = 0x4C8; // bool
    pub const m_navProperty: usize = 0x4CC; // navproperties_t
}

pub mod CLogicPlayerProxy { // CLogicalEntity
    pub const m_hPlayer: usize = 0x4C0; // CHandle<CBaseEntity>
    pub const m_PlayerHasAmmo: usize = 0x4C8; // CEntityIOOutput
    pub const m_PlayerHasNoAmmo: usize = 0x4F0; // CEntityIOOutput
    pub const m_PlayerDied: usize = 0x518; // CEntityIOOutput
    pub const m_RequestedPlayerHealth: usize = 0x540; // CEntityOutputTemplate<int32_t>
}

pub mod CLogicProximity { // CPointEntity
}

pub mod CLogicRelay { // CLogicalEntity
    pub const m_OnTrigger: usize = 0x4C0; // CEntityIOOutput
    pub const m_OnSpawn: usize = 0x4E8; // CEntityIOOutput
    pub const m_bDisabled: usize = 0x510; // bool
    pub const m_bWaitForRefire: usize = 0x511; // bool
    pub const m_bTriggerOnce: usize = 0x512; // bool
    pub const m_bFastRetrigger: usize = 0x513; // bool
    pub const m_bPassthoughCaller: usize = 0x514; // bool
}

pub mod CLogicScript { // CPointEntity
}

pub mod CLogicalEntity { // CServerOnlyEntity
}

pub mod CMapInfo { // CPointEntity
    pub const m_iBuyingStatus: usize = 0x4C0; // int32_t
    pub const m_flBombRadius: usize = 0x4C4; // float
    pub const m_iPetPopulation: usize = 0x4C8; // int32_t
    pub const m_bUseNormalSpawnsForDM: usize = 0x4CC; // bool
    pub const m_bDisableAutoGeneratedDMSpawns: usize = 0x4CD; // bool
    pub const m_flBotMaxVisionDistance: usize = 0x4D0; // float
    pub const m_iHostageCount: usize = 0x4D4; // int32_t
    pub const m_bFadePlayerVisibilityFarZ: usize = 0x4D8; // bool
}

pub mod CMapVetoPickController { // CBaseEntity
    pub const m_bPlayedIntroVcd: usize = 0x4C0; // bool
    pub const m_bNeedToPlayFiveSecondsRemaining: usize = 0x4C1; // bool
    pub const m_dblPreMatchDraftSequenceTime: usize = 0x4E0; // double
    pub const m_bPreMatchDraftStateChanged: usize = 0x4E8; // bool
    pub const m_nDraftType: usize = 0x4EC; // int32_t
    pub const m_nTeamWinningCoinToss: usize = 0x4F0; // int32_t
    pub const m_nTeamWithFirstChoice: usize = 0x4F4; // int32_t[64]
    pub const m_nVoteMapIdsList: usize = 0x5F4; // int32_t[7]
    pub const m_nAccountIDs: usize = 0x610; // int32_t[64]
    pub const m_nMapId0: usize = 0x710; // int32_t[64]
    pub const m_nMapId1: usize = 0x810; // int32_t[64]
    pub const m_nMapId2: usize = 0x910; // int32_t[64]
    pub const m_nMapId3: usize = 0xA10; // int32_t[64]
    pub const m_nMapId4: usize = 0xB10; // int32_t[64]
    pub const m_nMapId5: usize = 0xC10; // int32_t[64]
    pub const m_nStartingSide0: usize = 0xD10; // int32_t[64]
    pub const m_nCurrentPhase: usize = 0xE10; // int32_t
    pub const m_nPhaseStartTick: usize = 0xE14; // int32_t
    pub const m_nPhaseDurationTicks: usize = 0xE18; // int32_t
    pub const m_OnMapVetoed: usize = 0xE20; // CEntityOutputTemplate<CUtlSymbolLarge>
    pub const m_OnMapPicked: usize = 0xE48; // CEntityOutputTemplate<CUtlSymbolLarge>
    pub const m_OnSidesPicked: usize = 0xE70; // CEntityOutputTemplate<int32_t>
    pub const m_OnNewPhaseStarted: usize = 0xE98; // CEntityOutputTemplate<int32_t>
    pub const m_OnLevelTransition: usize = 0xEC0; // CEntityOutputTemplate<int32_t>
}

pub mod CMarkupVolume { // CBaseModelEntity
    pub const m_bEnabled: usize = 0x710; // bool
}

pub mod CMarkupVolumeTagged { // CMarkupVolume
    pub const m_bIsGroup: usize = 0x748; // bool
    pub const m_bGroupByPrefab: usize = 0x749; // bool
    pub const m_bGroupByVolume: usize = 0x74A; // bool
    pub const m_bGroupOtherGroups: usize = 0x74B; // bool
    pub const m_bIsInGroup: usize = 0x74C; // bool
}

pub mod CMarkupVolumeTagged_Nav { // CMarkupVolumeTagged
}

pub mod CMarkupVolumeTagged_NavGame { // CMarkupVolumeWithRef
    pub const m_bFloodFillAttribute: usize = 0x768; // bool
}

pub mod CMarkupVolumeWithRef { // CMarkupVolumeTagged
    pub const m_bUseRef: usize = 0x750; // bool
    pub const m_vRefPos: usize = 0x754; // Vector
    pub const m_flRefDot: usize = 0x760; // float
}

pub mod CMathColorBlend { // CLogicalEntity
    pub const m_flInMin: usize = 0x4C0; // float
    pub const m_flInMax: usize = 0x4C4; // float
    pub const m_OutColor1: usize = 0x4C8; // Color
    pub const m_OutColor2: usize = 0x4CC; // Color
    pub const m_OutValue: usize = 0x4D0; // CEntityOutputTemplate<Color>
}

pub mod CMathCounter { // CLogicalEntity
    pub const m_flMin: usize = 0x4C0; // float
    pub const m_flMax: usize = 0x4C4; // float
    pub const m_bHitMin: usize = 0x4C8; // bool
    pub const m_bHitMax: usize = 0x4C9; // bool
    pub const m_bDisabled: usize = 0x4CA; // bool
    pub const m_OutValue: usize = 0x4D0; // CEntityOutputTemplate<float>
    pub const m_OnGetValue: usize = 0x4F8; // CEntityOutputTemplate<float>
    pub const m_OnHitMin: usize = 0x520; // CEntityIOOutput
    pub const m_OnHitMax: usize = 0x548; // CEntityIOOutput
    pub const m_OnChangedFromMin: usize = 0x570; // CEntityIOOutput
    pub const m_OnChangedFromMax: usize = 0x598; // CEntityIOOutput
}

pub mod CMathRemap { // CLogicalEntity
    pub const m_flInMin: usize = 0x4C0; // float
    pub const m_flInMax: usize = 0x4C4; // float
    pub const m_flOut1: usize = 0x4C8; // float
    pub const m_flOut2: usize = 0x4CC; // float
    pub const m_flOldInValue: usize = 0x4D0; // float
    pub const m_bEnabled: usize = 0x4D4; // bool
    pub const m_OutValue: usize = 0x4D8; // CEntityOutputTemplate<float>
    pub const m_OnRoseAboveMin: usize = 0x500; // CEntityIOOutput
    pub const m_OnRoseAboveMax: usize = 0x528; // CEntityIOOutput
    pub const m_OnFellBelowMin: usize = 0x550; // CEntityIOOutput
    pub const m_OnFellBelowMax: usize = 0x578; // CEntityIOOutput
}

pub mod CMelee { // CCSWeaponBase
}

pub mod CMessage { // CPointEntity
    pub const m_iszMessage: usize = 0x4C0; // CUtlSymbolLarge
    pub const m_MessageVolume: usize = 0x4C8; // float
    pub const m_MessageAttenuation: usize = 0x4CC; // int32_t
    pub const m_Radius: usize = 0x4D0; // float
    pub const m_sNoise: usize = 0x4D8; // CUtlSymbolLarge
    pub const m_OnShowMessage: usize = 0x4E0; // CEntityIOOutput
}

pub mod CMessageEntity { // CPointEntity
    pub const m_radius: usize = 0x4C0; // int32_t
    pub const m_messageText: usize = 0x4C8; // CUtlSymbolLarge
    pub const m_drawText: usize = 0x4D0; // bool
    pub const m_bDeveloperOnly: usize = 0x4D1; // bool
    pub const m_bEnabled: usize = 0x4D2; // bool
}

pub mod CModelPointEntity { // CBaseModelEntity
}

pub mod CModelState {
    pub const m_hModel: usize = 0xA0; // CStrongHandle<InfoForResourceTypeCModel>
    pub const m_ModelName: usize = 0xA8; // CUtlSymbolLarge
    pub const m_bClientClothCreationSuppressed: usize = 0xE8; // bool
    pub const m_MeshGroupMask: usize = 0x180; // uint64_t
    pub const m_nIdealMotionType: usize = 0x202; // int8_t
    pub const m_nForceLOD: usize = 0x203; // int8_t
    pub const m_nClothUpdateFlags: usize = 0x204; // int8_t
}

pub mod CMolotovGrenade { // CBaseCSGrenade
}

pub mod CMolotovProjectile { // CBaseCSGrenadeProjectile
    pub const m_bIsIncGrenade: usize = 0xA98; // bool
    pub const m_bDetonated: usize = 0xAA4; // bool
    pub const m_stillTimer: usize = 0xAA8; // IntervalTimer
    pub const m_bHasBouncedOffPlayer: usize = 0xB88; // bool
}

pub mod CMomentaryRotButton { // CRotButton
    pub const m_Position: usize = 0x8D8; // CEntityOutputTemplate<float>
    pub const m_OnUnpressed: usize = 0x900; // CEntityIOOutput
    pub const m_OnFullyOpen: usize = 0x928; // CEntityIOOutput
    pub const m_OnFullyClosed: usize = 0x950; // CEntityIOOutput
    pub const m_OnReachedPosition: usize = 0x978; // CEntityIOOutput
    pub const m_lastUsed: usize = 0x9A0; // int32_t
    pub const m_start: usize = 0x9A4; // QAngle
    pub const m_end: usize = 0x9B0; // QAngle
    pub const m_IdealYaw: usize = 0x9BC; // float
    pub const m_sNoise: usize = 0x9C0; // CUtlSymbolLarge
    pub const m_bUpdateTarget: usize = 0x9C8; // bool
    pub const m_direction: usize = 0x9CC; // int32_t
    pub const m_returnSpeed: usize = 0x9D0; // float
    pub const m_flStartPosition: usize = 0x9D4; // float
}

pub mod CMotorController {
    pub const m_speed: usize = 0x8; // float
    pub const m_maxTorque: usize = 0xC; // float
    pub const m_axis: usize = 0x10; // Vector
    pub const m_inertiaFactor: usize = 0x1C; // float
}

pub mod CMultiLightProxy { // CLogicalEntity
    pub const m_iszLightNameFilter: usize = 0x4C0; // CUtlSymbolLarge
    pub const m_iszLightClassFilter: usize = 0x4C8; // CUtlSymbolLarge
    pub const m_flLightRadiusFilter: usize = 0x4D0; // float
    pub const m_flBrightnessDelta: usize = 0x4D4; // float
    pub const m_bPerformScreenFade: usize = 0x4D8; // bool
    pub const m_flTargetBrightnessMultiplier: usize = 0x4DC; // float
    pub const m_flCurrentBrightnessMultiplier: usize = 0x4E0; // float
    pub const m_vecLights: usize = 0x4E8; // CUtlVector<CHandle<CLightEntity>>
}

pub mod CMultiSource { // CLogicalEntity
    pub const m_rgEntities: usize = 0x4C0; // CHandle<CBaseEntity>[32]
    pub const m_rgTriggered: usize = 0x540; // int32_t[32]
    pub const m_OnTrigger: usize = 0x5C0; // CEntityIOOutput
    pub const m_iTotal: usize = 0x5E8; // int32_t
    pub const m_globalstate: usize = 0x5F0; // CUtlSymbolLarge
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
    pub const m_flWidth: usize = 0x4C0; // float
    pub const m_vLocatorOffset: usize = 0x4C4; // Vector
    pub const m_qLocatorAnglesOffset: usize = 0x4D0; // QAngle
    pub const m_strMovementForward: usize = 0x4E0; // CUtlSymbolLarge
    pub const m_strMovementReverse: usize = 0x4E8; // CUtlSymbolLarge
    pub const m_nNavLinkIdForward: usize = 0x4F0; // int32_t
    pub const m_nNavLinkIdReverse: usize = 0x4F4; // int32_t
    pub const m_bEnabled: usize = 0x4F8; // bool
    pub const m_strFilterName: usize = 0x500; // CUtlSymbolLarge
    pub const m_hFilter: usize = 0x508; // CHandle<CBaseFilter>
    pub const m_OnNavLinkStart: usize = 0x510; // CEntityIOOutput
    pub const m_OnNavLinkFinish: usize = 0x538; // CEntityIOOutput
    pub const m_bIsTerminus: usize = 0x560; // bool
}

pub mod CNavLinkMovementVData {
    pub const m_bIsInterpolated: usize = 0x0; // bool
    pub const m_unRecommendedDistance: usize = 0x4; // uint32_t
    pub const m_vecAnimgraphVars: usize = 0x8; // CUtlVector<CNavLinkAnimgraphVar>
}

pub mod CNavSpaceInfo { // CPointEntity
    pub const m_bCreateFlightSpace: usize = 0x4C0; // bool
}

pub mod CNavVolume {
}

pub mod CNavVolumeAll { // CNavVolumeVector
}

pub mod CNavVolumeBreadthFirstSearch { // CNavVolumeCalculatedVector
    pub const m_vStartPos: usize = 0xA0; // Vector
    pub const m_flSearchDist: usize = 0xAC; // float
}

pub mod CNavVolumeCalculatedVector { // CNavVolume
}

pub mod CNavVolumeMarkupVolume { // CNavVolume
}

pub mod CNavVolumeSphere { // CNavVolume
    pub const m_vCenter: usize = 0x70; // Vector
    pub const m_flRadius: usize = 0x7C; // float
}

pub mod CNavVolumeSphericalShell { // CNavVolumeSphere
    pub const m_flRadiusInner: usize = 0x80; // float
}

pub mod CNavVolumeVector { // CNavVolume
    pub const m_bHasBeenPreFiltered: usize = 0x78; // bool
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
    pub const m_nTransmitStateOwnedCounter: usize = 0x16C; // uint8_t
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
    pub const m_flInnerAngle: usize = 0x938; // float
    pub const m_flOuterAngle: usize = 0x93C; // float
    pub const m_bShowLight: usize = 0x940; // bool
}

pub mod COrnamentProp { // CDynamicProp
    pub const m_initialOwner: usize = 0xB60; // CUtlSymbolLarge
}

pub mod CParticleSystem { // CBaseModelEntity
    pub const m_szSnapshotFileName: usize = 0x710; // char[512]
    pub const m_bActive: usize = 0x910; // bool
    pub const m_bFrozen: usize = 0x911; // bool
    pub const m_flFreezeTransitionDuration: usize = 0x914; // float
    pub const m_nStopType: usize = 0x918; // int32_t
    pub const m_bAnimateDuringGameplayPause: usize = 0x91C; // bool
    pub const m_iEffectIndex: usize = 0x920; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    pub const m_flStartTime: usize = 0x928; // GameTime_t
    pub const m_flPreSimTime: usize = 0x92C; // float
    pub const m_vServerControlPoints: usize = 0x930; // Vector[4]
    pub const m_iServerControlPointAssignments: usize = 0x960; // uint8_t[4]
    pub const m_hControlPointEnts: usize = 0x964; // CHandle<CBaseEntity>[64]
    pub const m_bNoSave: usize = 0xA64; // bool
    pub const m_bNoFreeze: usize = 0xA65; // bool
    pub const m_bNoRamp: usize = 0xA66; // bool
    pub const m_bStartActive: usize = 0xA67; // bool
    pub const m_iszEffectName: usize = 0xA68; // CUtlSymbolLarge
    pub const m_iszControlPointNames: usize = 0xA70; // CUtlSymbolLarge[64]
    pub const m_nDataCP: usize = 0xC70; // int32_t
    pub const m_vecDataCPValue: usize = 0xC74; // Vector
    pub const m_nTintCP: usize = 0xC80; // int32_t
    pub const m_clrTint: usize = 0xC84; // Color
}

pub mod CPathCorner { // CPointEntity
    pub const m_flWait: usize = 0x4C0; // float
    pub const m_flRadius: usize = 0x4C4; // float
    pub const m_OnPass: usize = 0x4C8; // CEntityIOOutput
}

pub mod CPathCornerCrash { // CPathCorner
}

pub mod CPathKeyFrame { // CLogicalEntity
    pub const m_Origin: usize = 0x4C0; // Vector
    pub const m_Angles: usize = 0x4CC; // QAngle
    pub const m_qAngle: usize = 0x4E0; // Quaternion
    pub const m_iNextKey: usize = 0x4F0; // CUtlSymbolLarge
    pub const m_flNextTime: usize = 0x4F8; // float
    pub const m_pNextKey: usize = 0x500; // CPathKeyFrame*
    pub const m_pPrevKey: usize = 0x508; // CPathKeyFrame*
    pub const m_flSpeed: usize = 0x510; // float
}

pub mod CPathParticleRope { // CBaseEntity
    pub const m_bStartActive: usize = 0x4C0; // bool
    pub const m_flMaxSimulationTime: usize = 0x4C4; // float
    pub const m_iszEffectName: usize = 0x4C8; // CUtlSymbolLarge
    pub const m_PathNodes_Name: usize = 0x4D0; // CUtlVector<CUtlSymbolLarge>
    pub const m_flParticleSpacing: usize = 0x4E8; // float
    pub const m_flSlack: usize = 0x4EC; // float
    pub const m_flRadius: usize = 0x4F0; // float
    pub const m_ColorTint: usize = 0x4F4; // Color
    pub const m_nEffectState: usize = 0x4F8; // int32_t
    pub const m_iEffectIndex: usize = 0x500; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
    pub const m_PathNodes_Position: usize = 0x508; // CNetworkUtlVectorBase<Vector>
    pub const m_PathNodes_TangentIn: usize = 0x520; // CNetworkUtlVectorBase<Vector>
    pub const m_PathNodes_TangentOut: usize = 0x538; // CNetworkUtlVectorBase<Vector>
    pub const m_PathNodes_Color: usize = 0x550; // CNetworkUtlVectorBase<Vector>
    pub const m_PathNodes_PinEnabled: usize = 0x568; // CNetworkUtlVectorBase<bool>
    pub const m_PathNodes_RadiusScale: usize = 0x580; // CNetworkUtlVectorBase<float>
}

pub mod CPathParticleRopeAlias_path_particle_rope_clientside { // CPathParticleRope
}

pub mod CPathTrack { // CPointEntity
    pub const m_pnext: usize = 0x4C0; // CPathTrack*
    pub const m_pprevious: usize = 0x4C8; // CPathTrack*
    pub const m_paltpath: usize = 0x4D0; // CPathTrack*
    pub const m_flRadius: usize = 0x4D8; // float
    pub const m_length: usize = 0x4DC; // float
    pub const m_altName: usize = 0x4E0; // CUtlSymbolLarge
    pub const m_nIterVal: usize = 0x4E8; // int32_t
    pub const m_eOrientationType: usize = 0x4EC; // TrackOrientationType_t
    pub const m_OnPass: usize = 0x4F0; // CEntityIOOutput
}

pub mod CPhysBallSocket { // CPhysConstraint
    pub const m_flFriction: usize = 0x518; // float
    pub const m_bEnableSwingLimit: usize = 0x51C; // bool
    pub const m_flSwingLimit: usize = 0x520; // float
    pub const m_bEnableTwistLimit: usize = 0x524; // bool
    pub const m_flMinTwistAngle: usize = 0x528; // float
    pub const m_flMaxTwistAngle: usize = 0x52C; // float
}

pub mod CPhysBox { // CBreakable
    pub const m_damageType: usize = 0x7D0; // int32_t
    pub const m_massScale: usize = 0x7D4; // float
    pub const m_damageToEnableMotion: usize = 0x7D8; // int32_t
    pub const m_flForceToEnableMotion: usize = 0x7DC; // float
    pub const m_angPreferredCarryAngles: usize = 0x7E0; // QAngle
    pub const m_bNotSolidToWorld: usize = 0x7EC; // bool
    pub const m_bEnableUseOutput: usize = 0x7ED; // bool
    pub const m_iExploitableByPlayer: usize = 0x7F0; // int32_t
    pub const m_flTouchOutputPerEntityDelay: usize = 0x7F4; // float
    pub const m_OnDamaged: usize = 0x7F8; // CEntityIOOutput
    pub const m_OnAwakened: usize = 0x820; // CEntityIOOutput
    pub const m_OnMotionEnabled: usize = 0x848; // CEntityIOOutput
    pub const m_OnPlayerUse: usize = 0x870; // CEntityIOOutput
    pub const m_OnStartTouch: usize = 0x898; // CEntityIOOutput
    pub const m_hCarryingPlayer: usize = 0x8C0; // CHandle<CBasePlayerPawn>
}

pub mod CPhysConstraint { // CLogicalEntity
    pub const m_nameAttach1: usize = 0x4C8; // CUtlSymbolLarge
    pub const m_nameAttach2: usize = 0x4D0; // CUtlSymbolLarge
    pub const m_breakSound: usize = 0x4D8; // CUtlSymbolLarge
    pub const m_forceLimit: usize = 0x4E0; // float
    pub const m_torqueLimit: usize = 0x4E4; // float
    pub const m_teleportTick: usize = 0x4E8; // uint32_t
    pub const m_minTeleportDistance: usize = 0x4EC; // float
    pub const m_OnBreak: usize = 0x4F0; // CEntityIOOutput
}

pub mod CPhysExplosion { // CPointEntity
    pub const m_bExplodeOnSpawn: usize = 0x4C0; // bool
    pub const m_flMagnitude: usize = 0x4C4; // float
    pub const m_flDamage: usize = 0x4C8; // float
    pub const m_radius: usize = 0x4CC; // float
    pub const m_targetEntityName: usize = 0x4D0; // CUtlSymbolLarge
    pub const m_flInnerRadius: usize = 0x4D8; // float
    pub const m_flPushScale: usize = 0x4DC; // float
    pub const m_bConvertToDebrisWhenPossible: usize = 0x4E0; // bool
    pub const m_OnPushedPlayer: usize = 0x4E8; // CEntityIOOutput
}

pub mod CPhysFixed { // CPhysConstraint
    pub const m_flLinearFrequency: usize = 0x518; // float
    pub const m_flLinearDampingRatio: usize = 0x51C; // float
    pub const m_flAngularFrequency: usize = 0x520; // float
    pub const m_flAngularDampingRatio: usize = 0x524; // float
    pub const m_bEnableLinearConstraint: usize = 0x528; // bool
    pub const m_bEnableAngularConstraint: usize = 0x529; // bool
}

pub mod CPhysForce { // CPointEntity
    pub const m_nameAttach: usize = 0x4C8; // CUtlSymbolLarge
    pub const m_force: usize = 0x4D0; // float
    pub const m_forceTime: usize = 0x4D4; // float
    pub const m_attachedObject: usize = 0x4D8; // CHandle<CBaseEntity>
    pub const m_wasRestored: usize = 0x4DC; // bool
    pub const m_integrator: usize = 0x4E0; // CConstantForceController
}

pub mod CPhysHinge { // CPhysConstraint
    pub const m_soundInfo: usize = 0x520; // ConstraintSoundInfo
    pub const m_NotifyMinLimitReached: usize = 0x5A8; // CEntityIOOutput
    pub const m_NotifyMaxLimitReached: usize = 0x5D0; // CEntityIOOutput
    pub const m_bAtMinLimit: usize = 0x5F8; // bool
    pub const m_bAtMaxLimit: usize = 0x5F9; // bool
    pub const m_hinge: usize = 0x5FC; // constraint_hingeparams_t
    pub const m_hingeFriction: usize = 0x63C; // float
    pub const m_systemLoadScale: usize = 0x640; // float
    pub const m_bIsAxisLocal: usize = 0x644; // bool
    pub const m_flMinRotation: usize = 0x648; // float
    pub const m_flMaxRotation: usize = 0x64C; // float
    pub const m_flInitialRotation: usize = 0x650; // float
    pub const m_flMotorFrequency: usize = 0x654; // float
    pub const m_flMotorDampingRatio: usize = 0x658; // float
    pub const m_flAngleSpeed: usize = 0x65C; // float
    pub const m_flAngleSpeedThreshold: usize = 0x660; // float
    pub const m_OnStartMoving: usize = 0x668; // CEntityIOOutput
    pub const m_OnStopMoving: usize = 0x690; // CEntityIOOutput
}

pub mod CPhysHingeAlias_phys_hinge_local { // CPhysHinge
}

pub mod CPhysImpact { // CPointEntity
    pub const m_damage: usize = 0x4C0; // float
    pub const m_distance: usize = 0x4C4; // float
    pub const m_directionEntityName: usize = 0x4C8; // CUtlSymbolLarge
}

pub mod CPhysLength { // CPhysConstraint
    pub const m_offset: usize = 0x518; // Vector[2]
    pub const m_vecAttach: usize = 0x530; // Vector
    pub const m_addLength: usize = 0x53C; // float
    pub const m_minLength: usize = 0x540; // float
    pub const m_totalLength: usize = 0x544; // float
    pub const m_bEnableCollision: usize = 0x548; // bool
}

pub mod CPhysMagnet { // CBaseAnimGraph
    pub const m_OnMagnetAttach: usize = 0x8E8; // CEntityIOOutput
    pub const m_OnMagnetDetach: usize = 0x910; // CEntityIOOutput
    pub const m_massScale: usize = 0x938; // float
    pub const m_forceLimit: usize = 0x93C; // float
    pub const m_torqueLimit: usize = 0x940; // float
    pub const m_MagnettedEntities: usize = 0x948; // CUtlVector<magnetted_objects_t>
    pub const m_bActive: usize = 0x960; // bool
    pub const m_bHasHitSomething: usize = 0x961; // bool
    pub const m_flTotalMass: usize = 0x964; // float
    pub const m_flRadius: usize = 0x968; // float
    pub const m_flNextSuckTime: usize = 0x96C; // GameTime_t
    pub const m_iMaxObjectsAttached: usize = 0x970; // int32_t
}

pub mod CPhysMotor { // CLogicalEntity
    pub const m_nameAttach: usize = 0x4C0; // CUtlSymbolLarge
    pub const m_hAttachedObject: usize = 0x4C8; // CHandle<CBaseEntity>
    pub const m_spinUp: usize = 0x4CC; // float
    pub const m_additionalAcceleration: usize = 0x4D0; // float
    pub const m_angularAcceleration: usize = 0x4D4; // float
    pub const m_lastTime: usize = 0x4D8; // GameTime_t
    pub const m_motor: usize = 0x4F0; // CMotorController
}

pub mod CPhysPulley { // CPhysConstraint
    pub const m_position2: usize = 0x518; // Vector
    pub const m_offset: usize = 0x524; // Vector[2]
    pub const m_addLength: usize = 0x53C; // float
    pub const m_gearRatio: usize = 0x540; // float
}

pub mod CPhysSlideConstraint { // CPhysConstraint
    pub const m_axisEnd: usize = 0x520; // Vector
    pub const m_slideFriction: usize = 0x52C; // float
    pub const m_systemLoadScale: usize = 0x530; // float
    pub const m_initialOffset: usize = 0x534; // float
    pub const m_bEnableLinearConstraint: usize = 0x538; // bool
    pub const m_bEnableAngularConstraint: usize = 0x539; // bool
    pub const m_flMotorFrequency: usize = 0x53C; // float
    pub const m_flMotorDampingRatio: usize = 0x540; // float
    pub const m_bUseEntityPivot: usize = 0x544; // bool
    pub const m_soundInfo: usize = 0x548; // ConstraintSoundInfo
}

pub mod CPhysThruster { // CPhysForce
    pub const m_localOrigin: usize = 0x520; // Vector
}

pub mod CPhysTorque { // CPhysForce
    pub const m_axis: usize = 0x520; // Vector
}

pub mod CPhysWheelConstraint { // CPhysConstraint
    pub const m_flSuspensionFrequency: usize = 0x518; // float
    pub const m_flSuspensionDampingRatio: usize = 0x51C; // float
    pub const m_flSuspensionHeightOffset: usize = 0x520; // float
    pub const m_bEnableSuspensionLimit: usize = 0x524; // bool
    pub const m_flMinSuspensionOffset: usize = 0x528; // float
    pub const m_flMaxSuspensionOffset: usize = 0x52C; // float
    pub const m_bEnableSteeringLimit: usize = 0x530; // bool
    pub const m_flMinSteeringAngle: usize = 0x534; // float
    pub const m_flMaxSteeringAngle: usize = 0x538; // float
    pub const m_flSteeringAxisFriction: usize = 0x53C; // float
    pub const m_flSpinAxisFriction: usize = 0x540; // float
}

pub mod CPhysicalButton { // CBaseButton
}

pub mod CPhysicsEntitySolver { // CLogicalEntity
    pub const m_hMovingEntity: usize = 0x4C8; // CHandle<CBaseEntity>
    pub const m_hPhysicsBlocker: usize = 0x4CC; // CHandle<CBaseEntity>
    pub const m_separationDuration: usize = 0x4D0; // float
    pub const m_cancelTime: usize = 0x4D4; // GameTime_t
}

pub mod CPhysicsProp { // CBreakableProp
    pub const m_MotionEnabled: usize = 0xA68; // CEntityIOOutput
    pub const m_OnAwakened: usize = 0xA90; // CEntityIOOutput
    pub const m_OnAwake: usize = 0xAB8; // CEntityIOOutput
    pub const m_OnAsleep: usize = 0xAE0; // CEntityIOOutput
    pub const m_OnPlayerUse: usize = 0xB08; // CEntityIOOutput
    pub const m_OnPlayerPickup: usize = 0xB30; // CEntityIOOutput
    pub const m_OnOutOfWorld: usize = 0xB58; // CEntityIOOutput
    pub const m_massScale: usize = 0xB80; // float
    pub const m_inertiaScale: usize = 0xB84; // float
    pub const m_buoyancyScale: usize = 0xB88; // float
    pub const m_damageType: usize = 0xB8C; // int32_t
    pub const m_damageToEnableMotion: usize = 0xB90; // int32_t
    pub const m_flForceToEnableMotion: usize = 0xB94; // float
    pub const m_bThrownByPlayer: usize = 0xB98; // bool
    pub const m_bDroppedByPlayer: usize = 0xB99; // bool
    pub const m_bTouchedByPlayer: usize = 0xB9A; // bool
    pub const m_bFirstCollisionAfterLaunch: usize = 0xB9B; // bool
    pub const m_iExploitableByPlayer: usize = 0xB9C; // int32_t
    pub const m_bHasBeenAwakened: usize = 0xBA0; // bool
    pub const m_bIsOverrideProp: usize = 0xBA1; // bool
    pub const m_fNextCheckDisableMotionContactsTime: usize = 0xBA4; // GameTime_t
    pub const m_iInitialGlowState: usize = 0xBA8; // int32_t
    pub const m_nGlowRange: usize = 0xBAC; // int32_t
    pub const m_nGlowRangeMin: usize = 0xBB0; // int32_t
    pub const m_glowColor: usize = 0xBB4; // Color
    pub const m_bForceNavIgnore: usize = 0xBB8; // bool
    pub const m_bNoNavmeshBlocker: usize = 0xBB9; // bool
    pub const m_bForceNpcExclude: usize = 0xBBA; // bool
    pub const m_bShouldAutoConvertBackFromDebris: usize = 0xBBB; // bool
    pub const m_bMuteImpactEffects: usize = 0xBBC; // bool
    pub const m_bAcceptDamageFromHeldObjects: usize = 0xBC4; // bool
    pub const m_bEnableUseOutput: usize = 0xBC5; // bool
    pub const m_bAwake: usize = 0xBC6; // bool
    pub const m_nCollisionGroupOverride: usize = 0xBC8; // int32_t
}

pub mod CPhysicsPropMultiplayer { // CPhysicsProp
}

pub mod CPhysicsPropOverride { // CPhysicsProp
}

pub mod CPhysicsPropRespawnable { // CPhysicsProp
    pub const m_vOriginalSpawnOrigin: usize = 0xBD0; // Vector
    pub const m_vOriginalSpawnAngles: usize = 0xBDC; // QAngle
    pub const m_vOriginalMins: usize = 0xBE8; // Vector
    pub const m_vOriginalMaxs: usize = 0xBF4; // Vector
    pub const m_flRespawnDuration: usize = 0xC00; // float
}

pub mod CPhysicsShake {
    pub const m_force: usize = 0x8; // Vector
}

pub mod CPhysicsSpring { // CBaseEntity
    pub const m_flFrequency: usize = 0x4C8; // float
    pub const m_flDampingRatio: usize = 0x4CC; // float
    pub const m_flRestLength: usize = 0x4D0; // float
    pub const m_nameAttachStart: usize = 0x4D8; // CUtlSymbolLarge
    pub const m_nameAttachEnd: usize = 0x4E0; // CUtlSymbolLarge
    pub const m_start: usize = 0x4E8; // Vector
    pub const m_end: usize = 0x4F4; // Vector
    pub const m_teleportTick: usize = 0x500; // uint32_t
}

pub mod CPhysicsWire { // CBaseEntity
    pub const m_nDensity: usize = 0x4C0; // int32_t
}

pub mod CPlantedC4 { // CBaseAnimGraph
    pub const m_bBombTicking: usize = 0x8E8; // bool
    pub const m_flC4Blow: usize = 0x8EC; // GameTime_t
    pub const m_nBombSite: usize = 0x8F0; // int32_t
    pub const m_nSourceSoundscapeHash: usize = 0x8F4; // int32_t
    pub const m_OnBombDefused: usize = 0x8F8; // CEntityIOOutput
    pub const m_OnBombBeginDefuse: usize = 0x920; // CEntityIOOutput
    pub const m_OnBombDefuseAborted: usize = 0x948; // CEntityIOOutput
    pub const m_bCannotBeDefused: usize = 0x970; // bool
    pub const m_entitySpottedState: usize = 0x978; // EntitySpottedState_t
    pub const m_nSpotRules: usize = 0x990; // int32_t
    pub const m_bTrainingPlacedByPlayer: usize = 0x994; // bool
    pub const m_bHasExploded: usize = 0x995; // bool
    pub const m_flTimerLength: usize = 0x998; // float
    pub const m_bBeingDefused: usize = 0x99C; // bool
    pub const m_fLastDefuseTime: usize = 0x9A4; // GameTime_t
    pub const m_flDefuseLength: usize = 0x9AC; // float
    pub const m_flDefuseCountDown: usize = 0x9B0; // GameTime_t
    pub const m_bBombDefused: usize = 0x9B4; // bool
    pub const m_hBombDefuser: usize = 0x9B8; // CHandle<CCSPlayerPawn>
    pub const m_hControlPanel: usize = 0x9BC; // CHandle<CBaseEntity>
    pub const m_iProgressBarTime: usize = 0x9C0; // int32_t
    pub const m_bVoiceAlertFired: usize = 0x9C4; // bool
    pub const m_bVoiceAlertPlayed: usize = 0x9C5; // bool[4]
    pub const m_flNextBotBeepTime: usize = 0x9CC; // GameTime_t
    pub const m_angCatchUpToPlayerEye: usize = 0x9D4; // QAngle
    pub const m_flLastSpinDetectionTime: usize = 0x9E0; // GameTime_t
}

pub mod CPlatTrigger { // CBaseModelEntity
    pub const m_pPlatform: usize = 0x710; // CHandle<CFuncPlat>
}

pub mod CPlayerControllerComponent {
    pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
}

pub mod CPlayerPawnComponent {
    pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
}

pub mod CPlayerPing { // CBaseEntity
    pub const m_hPlayer: usize = 0x4C8; // CHandle<CCSPlayerPawn>
    pub const m_hPingedEntity: usize = 0x4CC; // CHandle<CBaseEntity>
    pub const m_iType: usize = 0x4D0; // int32_t
    pub const m_bUrgent: usize = 0x4D4; // bool
    pub const m_szPlaceName: usize = 0x4D5; // char[18]
}

pub mod CPlayerSprayDecal { // CModelPointEntity
    pub const m_nUniqueID: usize = 0x710; // int32_t
    pub const m_unAccountID: usize = 0x714; // uint32_t
    pub const m_unTraceID: usize = 0x718; // uint32_t
    pub const m_rtGcTime: usize = 0x71C; // uint32_t
    pub const m_vecEndPos: usize = 0x720; // Vector
    pub const m_vecStart: usize = 0x72C; // Vector
    pub const m_vecLeft: usize = 0x738; // Vector
    pub const m_vecNormal: usize = 0x744; // Vector
    pub const m_nPlayer: usize = 0x750; // int32_t
    pub const m_nEntity: usize = 0x754; // int32_t
    pub const m_nHitbox: usize = 0x758; // int32_t
    pub const m_flCreationTime: usize = 0x75C; // float
    pub const m_nTintID: usize = 0x760; // int32_t
    pub const m_nVersion: usize = 0x764; // uint8_t
    pub const m_ubSignature: usize = 0x765; // uint8_t[128]
}

pub mod CPlayerVisibility { // CBaseEntity
    pub const m_flVisibilityStrength: usize = 0x4C0; // float
    pub const m_flFogDistanceMultiplier: usize = 0x4C4; // float
    pub const m_flFogMaxDensityMultiplier: usize = 0x4C8; // float
    pub const m_flFadeTime: usize = 0x4CC; // float
    pub const m_bStartDisabled: usize = 0x4D0; // bool
    pub const m_bIsEnabled: usize = 0x4D1; // bool
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
    pub const m_bDisabled: usize = 0x4C0; // bool
    pub const m_nLookAtName: usize = 0x4C8; // CUtlSymbolLarge
    pub const m_hTargetEntity: usize = 0x4D0; // CHandle<CBaseEntity>
    pub const m_hLookAtEntity: usize = 0x4D4; // CHandle<CBaseEntity>
    pub const m_flDuration: usize = 0x4D8; // float
    pub const m_flDotTolerance: usize = 0x4DC; // float
    pub const m_flFacingTime: usize = 0x4E0; // GameTime_t
    pub const m_bFired: usize = 0x4E4; // bool
    pub const m_OnFacingLookat: usize = 0x4E8; // CEntityIOOutput
    pub const m_OnNotFacingLookat: usize = 0x510; // CEntityIOOutput
    pub const m_TargetDir: usize = 0x538; // CEntityOutputTemplate<Vector>
    pub const m_FacingPercentage: usize = 0x560; // CEntityOutputTemplate<float>
}

pub mod CPointAngularVelocitySensor { // CPointEntity
    pub const m_hTargetEntity: usize = 0x4C0; // CHandle<CBaseEntity>
    pub const m_flThreshold: usize = 0x4C4; // float
    pub const m_nLastCompareResult: usize = 0x4C8; // int32_t
    pub const m_nLastFireResult: usize = 0x4CC; // int32_t
    pub const m_flFireTime: usize = 0x4D0; // GameTime_t
    pub const m_flFireInterval: usize = 0x4D4; // float
    pub const m_flLastAngVelocity: usize = 0x4D8; // float
    pub const m_lastOrientation: usize = 0x4DC; // QAngle
    pub const m_vecAxis: usize = 0x4E8; // Vector
    pub const m_bUseHelper: usize = 0x4F4; // bool
    pub const m_AngularVelocity: usize = 0x4F8; // CEntityOutputTemplate<float>
    pub const m_OnLessThan: usize = 0x520; // CEntityIOOutput
    pub const m_OnLessThanOrEqualTo: usize = 0x548; // CEntityIOOutput
    pub const m_OnGreaterThan: usize = 0x570; // CEntityIOOutput
    pub const m_OnGreaterThanOrEqualTo: usize = 0x598; // CEntityIOOutput
    pub const m_OnEqualTo: usize = 0x5C0; // CEntityIOOutput
}

pub mod CPointBroadcastClientCommand { // CPointEntity
}

pub mod CPointCamera { // CBaseEntity
    pub const m_FOV: usize = 0x4C0; // float
    pub const m_Resolution: usize = 0x4C4; // float
    pub const m_bFogEnable: usize = 0x4C8; // bool
    pub const m_FogColor: usize = 0x4C9; // Color
    pub const m_flFogStart: usize = 0x4D0; // float
    pub const m_flFogEnd: usize = 0x4D4; // float
    pub const m_flFogMaxDensity: usize = 0x4D8; // float
    pub const m_bActive: usize = 0x4DC; // bool
    pub const m_bUseScreenAspectRatio: usize = 0x4DD; // bool
    pub const m_flAspectRatio: usize = 0x4E0; // float
    pub const m_bNoSky: usize = 0x4E4; // bool
    pub const m_fBrightness: usize = 0x4E8; // float
    pub const m_flZFar: usize = 0x4EC; // float
    pub const m_flZNear: usize = 0x4F0; // float
    pub const m_bCanHLTVUse: usize = 0x4F4; // bool
    pub const m_bDofEnabled: usize = 0x4F5; // bool
    pub const m_flDofNearBlurry: usize = 0x4F8; // float
    pub const m_flDofNearCrisp: usize = 0x4FC; // float
    pub const m_flDofFarCrisp: usize = 0x500; // float
    pub const m_flDofFarBlurry: usize = 0x504; // float
    pub const m_flDofTiltToGround: usize = 0x508; // float
    pub const m_TargetFOV: usize = 0x50C; // float
    pub const m_DegreesPerSecond: usize = 0x510; // float
    pub const m_bIsOn: usize = 0x514; // bool
    pub const m_pNext: usize = 0x518; // CPointCamera*
}

pub mod CPointCameraVFOV { // CPointCamera
    pub const m_flVerticalFOV: usize = 0x520; // float
}

pub mod CPointClientCommand { // CPointEntity
}

pub mod CPointClientUIDialog { // CBaseClientUIEntity
    pub const m_hActivator: usize = 0x8C0; // CHandle<CBaseEntity>
    pub const m_bStartEnabled: usize = 0x8C4; // bool
}

pub mod CPointClientUIWorldPanel { // CBaseClientUIEntity
    pub const m_bIgnoreInput: usize = 0x8C0; // bool
    pub const m_bLit: usize = 0x8C1; // bool
    pub const m_bFollowPlayerAcrossTeleport: usize = 0x8C2; // bool
    pub const m_flWidth: usize = 0x8C4; // float
    pub const m_flHeight: usize = 0x8C8; // float
    pub const m_flDPI: usize = 0x8CC; // float
    pub const m_flInteractDistance: usize = 0x8D0; // float
    pub const m_flDepthOffset: usize = 0x8D4; // float
    pub const m_unOwnerContext: usize = 0x8D8; // uint32_t
    pub const m_unHorizontalAlign: usize = 0x8DC; // uint32_t
    pub const m_unVerticalAlign: usize = 0x8E0; // uint32_t
    pub const m_unOrientation: usize = 0x8E4; // uint32_t
    pub const m_bAllowInteractionFromAllSceneWorlds: usize = 0x8E8; // bool
    pub const m_vecCSSClasses: usize = 0x8F0; // CNetworkUtlVectorBase<CUtlSymbolLarge>
    pub const m_bOpaque: usize = 0x908; // bool
    pub const m_bNoDepth: usize = 0x909; // bool
    pub const m_bRenderBackface: usize = 0x90A; // bool
    pub const m_bUseOffScreenIndicator: usize = 0x90B; // bool
    pub const m_bExcludeFromSaveGames: usize = 0x90C; // bool
    pub const m_bGrabbable: usize = 0x90D; // bool
    pub const m_bOnlyRenderToTexture: usize = 0x90E; // bool
    pub const m_bDisableMipGen: usize = 0x90F; // bool
    pub const m_nExplicitImageLayout: usize = 0x910; // int32_t
}

pub mod CPointClientUIWorldTextPanel { // CPointClientUIWorldPanel
    pub const m_messageText: usize = 0x918; // char[512]
}

pub mod CPointCommentaryNode { // CBaseAnimGraph
    pub const m_iszPreCommands: usize = 0x8E8; // CUtlSymbolLarge
    pub const m_iszPostCommands: usize = 0x8F0; // CUtlSymbolLarge
    pub const m_iszCommentaryFile: usize = 0x8F8; // CUtlSymbolLarge
    pub const m_iszViewTarget: usize = 0x900; // CUtlSymbolLarge
    pub const m_hViewTarget: usize = 0x908; // CHandle<CBaseEntity>
    pub const m_hViewTargetAngles: usize = 0x90C; // CHandle<CBaseEntity>
    pub const m_iszViewPosition: usize = 0x910; // CUtlSymbolLarge
    pub const m_hViewPosition: usize = 0x918; // CHandle<CBaseEntity>
    pub const m_hViewPositionMover: usize = 0x91C; // CHandle<CBaseEntity>
    pub const m_bPreventMovement: usize = 0x920; // bool
    pub const m_bUnderCrosshair: usize = 0x921; // bool
    pub const m_bUnstoppable: usize = 0x922; // bool
    pub const m_flFinishedTime: usize = 0x924; // GameTime_t
    pub const m_vecFinishOrigin: usize = 0x928; // Vector
    pub const m_vecOriginalAngles: usize = 0x934; // QAngle
    pub const m_vecFinishAngles: usize = 0x940; // QAngle
    pub const m_bPreventChangesWhileMoving: usize = 0x94C; // bool
    pub const m_bDisabled: usize = 0x94D; // bool
    pub const m_vecTeleportOrigin: usize = 0x950; // Vector
    pub const m_flAbortedPlaybackAt: usize = 0x95C; // GameTime_t
    pub const m_pOnCommentaryStarted: usize = 0x960; // CEntityIOOutput
    pub const m_pOnCommentaryStopped: usize = 0x988; // CEntityIOOutput
    pub const m_bActive: usize = 0x9B0; // bool
    pub const m_flStartTime: usize = 0x9B4; // GameTime_t
    pub const m_flStartTimeInCommentary: usize = 0x9B8; // float
    pub const m_iszTitle: usize = 0x9C0; // CUtlSymbolLarge
    pub const m_iszSpeakers: usize = 0x9C8; // CUtlSymbolLarge
    pub const m_iNodeNumber: usize = 0x9D0; // int32_t
    pub const m_iNodeNumberMax: usize = 0x9D4; // int32_t
    pub const m_bListenedTo: usize = 0x9D8; // bool
}

pub mod CPointEntity { // CBaseEntity
}

pub mod CPointEntityFinder { // CBaseEntity
    pub const m_hEntity: usize = 0x4C0; // CHandle<CBaseEntity>
    pub const m_iFilterName: usize = 0x4C8; // CUtlSymbolLarge
    pub const m_hFilter: usize = 0x4D0; // CHandle<CBaseFilter>
    pub const m_iRefName: usize = 0x4D8; // CUtlSymbolLarge
    pub const m_hReference: usize = 0x4E0; // CHandle<CBaseEntity>
    pub const m_FindMethod: usize = 0x4E4; // EntFinderMethod_t
    pub const m_OnFoundEntity: usize = 0x4E8; // CEntityIOOutput
}

pub mod CPointGamestatsCounter { // CPointEntity
    pub const m_strStatisticName: usize = 0x4C0; // CUtlSymbolLarge
    pub const m_bDisabled: usize = 0x4C8; // bool
}

pub mod CPointGiveAmmo { // CPointEntity
    pub const m_pActivator: usize = 0x4C0; // CHandle<CBaseEntity>
}

pub mod CPointHurt { // CPointEntity
    pub const m_nDamage: usize = 0x4C0; // int32_t
    pub const m_bitsDamageType: usize = 0x4C4; // int32_t
    pub const m_flRadius: usize = 0x4C8; // float
    pub const m_flDelay: usize = 0x4CC; // float
    pub const m_strTarget: usize = 0x4D0; // CUtlSymbolLarge
    pub const m_pActivator: usize = 0x4D8; // CHandle<CBaseEntity>
}

pub mod CPointPrefab { // CServerOnlyPointEntity
    pub const m_targetMapName: usize = 0x4C0; // CUtlSymbolLarge
    pub const m_forceWorldGroupID: usize = 0x4C8; // CUtlSymbolLarge
    pub const m_associatedRelayTargetName: usize = 0x4D0; // CUtlSymbolLarge
    pub const m_fixupNames: usize = 0x4D8; // bool
    pub const m_bLoadDynamic: usize = 0x4D9; // bool
    pub const m_associatedRelayEntity: usize = 0x4DC; // CHandle<CPointPrefab>
}

pub mod CPointProximitySensor { // CPointEntity
    pub const m_bDisabled: usize = 0x4C0; // bool
    pub const m_hTargetEntity: usize = 0x4C4; // CHandle<CBaseEntity>
    pub const m_Distance: usize = 0x4C8; // CEntityOutputTemplate<float>
}

pub mod CPointPulse { // CBaseEntity
}

pub mod CPointPush { // CPointEntity
    pub const m_bEnabled: usize = 0x4C0; // bool
    pub const m_flMagnitude: usize = 0x4C4; // float
    pub const m_flRadius: usize = 0x4C8; // float
    pub const m_flInnerRadius: usize = 0x4CC; // float
    pub const m_flConeOfInfluence: usize = 0x4D0; // float
    pub const m_iszFilterName: usize = 0x4D8; // CUtlSymbolLarge
    pub const m_hFilter: usize = 0x4E0; // CHandle<CBaseFilter>
}

pub mod CPointScriptEntity { // CBaseEntity
}

pub mod CPointServerCommand { // CPointEntity
}

pub mod CPointTeleport { // CServerOnlyPointEntity
    pub const m_vSaveOrigin: usize = 0x4C0; // Vector
    pub const m_vSaveAngles: usize = 0x4CC; // QAngle
    pub const m_bTeleportParentedEntities: usize = 0x4D8; // bool
    pub const m_bTeleportUseCurrentAngle: usize = 0x4D9; // bool
}

pub mod CPointTemplate { // CLogicalEntity
    pub const m_iszWorldName: usize = 0x4C0; // CUtlSymbolLarge
    pub const m_iszSource2EntityLumpName: usize = 0x4C8; // CUtlSymbolLarge
    pub const m_iszEntityFilterName: usize = 0x4D0; // CUtlSymbolLarge
    pub const m_flTimeoutInterval: usize = 0x4D8; // float
    pub const m_bAsynchronouslySpawnEntities: usize = 0x4DC; // bool
    pub const m_pOutputOnSpawned: usize = 0x4E0; // CEntityIOOutput
    pub const m_clientOnlyEntityBehavior: usize = 0x508; // PointTemplateClientOnlyEntityBehavior_t
    pub const m_ownerSpawnGroupType: usize = 0x50C; // PointTemplateOwnerSpawnGroupType_t
    pub const m_createdSpawnGroupHandles: usize = 0x510; // CUtlVector<uint32_t>
    pub const m_SpawnedEntityHandles: usize = 0x528; // CUtlVector<CEntityHandle>
    pub const m_ScriptSpawnCallback: usize = 0x540; // HSCRIPT
    pub const m_ScriptCallbackScope: usize = 0x548; // HSCRIPT
}

pub mod CPointValueRemapper { // CBaseEntity
    pub const m_bDisabled: usize = 0x4C0; // bool
    pub const m_bUpdateOnClient: usize = 0x4C1; // bool
    pub const m_nInputType: usize = 0x4C4; // ValueRemapperInputType_t
    pub const m_iszRemapLineStartName: usize = 0x4C8; // CUtlSymbolLarge
    pub const m_iszRemapLineEndName: usize = 0x4D0; // CUtlSymbolLarge
    pub const m_hRemapLineStart: usize = 0x4D8; // CHandle<CBaseEntity>
    pub const m_hRemapLineEnd: usize = 0x4DC; // CHandle<CBaseEntity>
    pub const m_flMaximumChangePerSecond: usize = 0x4E0; // float
    pub const m_flDisengageDistance: usize = 0x4E4; // float
    pub const m_flEngageDistance: usize = 0x4E8; // float
    pub const m_bRequiresUseKey: usize = 0x4EC; // bool
    pub const m_nOutputType: usize = 0x4F0; // ValueRemapperOutputType_t
    pub const m_iszOutputEntityName: usize = 0x4F8; // CUtlSymbolLarge
    pub const m_iszOutputEntity2Name: usize = 0x500; // CUtlSymbolLarge
    pub const m_iszOutputEntity3Name: usize = 0x508; // CUtlSymbolLarge
    pub const m_iszOutputEntity4Name: usize = 0x510; // CUtlSymbolLarge
    pub const m_hOutputEntities: usize = 0x518; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
    pub const m_nHapticsType: usize = 0x530; // ValueRemapperHapticsType_t
    pub const m_nMomentumType: usize = 0x534; // ValueRemapperMomentumType_t
    pub const m_flMomentumModifier: usize = 0x538; // float
    pub const m_flSnapValue: usize = 0x53C; // float
    pub const m_flCurrentMomentum: usize = 0x540; // float
    pub const m_nRatchetType: usize = 0x544; // ValueRemapperRatchetType_t
    pub const m_flRatchetOffset: usize = 0x548; // float
    pub const m_flInputOffset: usize = 0x54C; // float
    pub const m_bEngaged: usize = 0x550; // bool
    pub const m_bFirstUpdate: usize = 0x551; // bool
    pub const m_flPreviousValue: usize = 0x554; // float
    pub const m_flPreviousUpdateTickTime: usize = 0x558; // GameTime_t
    pub const m_vecPreviousTestPoint: usize = 0x55C; // Vector
    pub const m_hUsingPlayer: usize = 0x568; // CHandle<CBasePlayerPawn>
    pub const m_flCustomOutputValue: usize = 0x56C; // float
    pub const m_iszSoundEngage: usize = 0x570; // CUtlSymbolLarge
    pub const m_iszSoundDisengage: usize = 0x578; // CUtlSymbolLarge
    pub const m_iszSoundReachedValueZero: usize = 0x580; // CUtlSymbolLarge
    pub const m_iszSoundReachedValueOne: usize = 0x588; // CUtlSymbolLarge
    pub const m_iszSoundMovingLoop: usize = 0x590; // CUtlSymbolLarge
    pub const m_Position: usize = 0x5A0; // CEntityOutputTemplate<float>
    pub const m_PositionDelta: usize = 0x5C8; // CEntityOutputTemplate<float>
    pub const m_OnReachedValueZero: usize = 0x5F0; // CEntityIOOutput
    pub const m_OnReachedValueOne: usize = 0x618; // CEntityIOOutput
    pub const m_OnReachedValueCustom: usize = 0x640; // CEntityIOOutput
    pub const m_OnEngage: usize = 0x668; // CEntityIOOutput
    pub const m_OnDisengage: usize = 0x690; // CEntityIOOutput
}

pub mod CPointVelocitySensor { // CPointEntity
    pub const m_hTargetEntity: usize = 0x4C0; // CHandle<CBaseEntity>
    pub const m_vecAxis: usize = 0x4C4; // Vector
    pub const m_bEnabled: usize = 0x4D0; // bool
    pub const m_fPrevVelocity: usize = 0x4D4; // float
    pub const m_flAvgInterval: usize = 0x4D8; // float
    pub const m_Velocity: usize = 0x4E0; // CEntityOutputTemplate<float>
}

pub mod CPointWorldText { // CModelPointEntity
    pub const m_messageText: usize = 0x710; // char[512]
    pub const m_FontName: usize = 0x910; // char[64]
    pub const m_bEnabled: usize = 0x950; // bool
    pub const m_bFullbright: usize = 0x951; // bool
    pub const m_flWorldUnitsPerPx: usize = 0x954; // float
    pub const m_flFontSize: usize = 0x958; // float
    pub const m_flDepthOffset: usize = 0x95C; // float
    pub const m_Color: usize = 0x960; // Color
    pub const m_nJustifyHorizontal: usize = 0x964; // PointWorldTextJustifyHorizontal_t
    pub const m_nJustifyVertical: usize = 0x968; // PointWorldTextJustifyVertical_t
    pub const m_nReorientMode: usize = 0x96C; // PointWorldTextReorientMode_t
}

pub mod CPostProcessingVolume { // CBaseTrigger
    pub const m_hPostSettings: usize = 0x8C8; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
    pub const m_flFadeDuration: usize = 0x8D0; // float
    pub const m_flMinLogExposure: usize = 0x8D4; // float
    pub const m_flMaxLogExposure: usize = 0x8D8; // float
    pub const m_flMinExposure: usize = 0x8DC; // float
    pub const m_flMaxExposure: usize = 0x8E0; // float
    pub const m_flExposureCompensation: usize = 0x8E4; // float
    pub const m_flExposureFadeSpeedUp: usize = 0x8E8; // float
    pub const m_flExposureFadeSpeedDown: usize = 0x8EC; // float
    pub const m_flTonemapEVSmoothingRange: usize = 0x8F0; // float
    pub const m_bMaster: usize = 0x8F4; // bool
    pub const m_bExposureControl: usize = 0x8F5; // bool
    pub const m_flRate: usize = 0x8F8; // float
    pub const m_flTonemapPercentTarget: usize = 0x8FC; // float
    pub const m_flTonemapPercentBrightPixels: usize = 0x900; // float
    pub const m_flTonemapMinAvgLum: usize = 0x904; // float
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
    pub const m_nTexture: usize = 0x4C0; // int32_t
    pub const m_flDistance: usize = 0x4C4; // float
}

pub mod CPropDoorRotating { // CBasePropDoor
    pub const m_vecAxis: usize = 0xDF0; // Vector
    pub const m_flDistance: usize = 0xDFC; // float
    pub const m_eSpawnPosition: usize = 0xE00; // PropDoorRotatingSpawnPos_t
    pub const m_eOpenDirection: usize = 0xE04; // PropDoorRotatingOpenDirection_e
    pub const m_eCurrentOpenDirection: usize = 0xE08; // PropDoorRotatingOpenDirection_e
    pub const m_flAjarAngle: usize = 0xE0C; // float
    pub const m_angRotationAjarDeprecated: usize = 0xE10; // QAngle
    pub const m_angRotationClosed: usize = 0xE1C; // QAngle
    pub const m_angRotationOpenForward: usize = 0xE28; // QAngle
    pub const m_angRotationOpenBack: usize = 0xE34; // QAngle
    pub const m_angGoal: usize = 0xE40; // QAngle
    pub const m_vecForwardBoundsMin: usize = 0xE4C; // Vector
    pub const m_vecForwardBoundsMax: usize = 0xE58; // Vector
    pub const m_vecBackBoundsMin: usize = 0xE64; // Vector
    pub const m_vecBackBoundsMax: usize = 0xE70; // Vector
    pub const m_bAjarDoorShouldntAlwaysOpen: usize = 0xE7C; // bool
    pub const m_hEntityBlocker: usize = 0xE80; // CHandle<CEntityBlocker>
}

pub mod CPropDoorRotatingBreakable { // CPropDoorRotating
    pub const m_bBreakable: usize = 0xE88; // bool
    pub const m_isAbleToCloseAreaPortals: usize = 0xE89; // bool
    pub const m_currentDamageState: usize = 0xE8C; // int32_t
    pub const m_damageStates: usize = 0xE90; // CUtlVector<CUtlSymbolLarge>
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
    pub const m_Params: usize = 0x148; // ResponseParams
    pub const m_fMatchScore: usize = 0x168; // float
    pub const m_szSpeakerContext: usize = 0x170; // char*
    pub const m_szWorldContext: usize = 0x178; // char*
    pub const m_Followup: usize = 0x180; // ResponseFollowup
    pub const m_pchCriteriaNames: usize = 0x1B8; // CUtlVector<CUtlSymbol>
    pub const m_pchCriteriaValues: usize = 0x1D0; // CUtlVector<char*>
}

pub mod CRagdollConstraint { // CPhysConstraint
    pub const m_xmin: usize = 0x518; // float
    pub const m_xmax: usize = 0x51C; // float
    pub const m_ymin: usize = 0x520; // float
    pub const m_ymax: usize = 0x524; // float
    pub const m_zmin: usize = 0x528; // float
    pub const m_zmax: usize = 0x52C; // float
    pub const m_xfriction: usize = 0x530; // float
    pub const m_yfriction: usize = 0x534; // float
    pub const m_zfriction: usize = 0x538; // float
}

pub mod CRagdollMagnet { // CPointEntity
    pub const m_bDisabled: usize = 0x4C0; // bool
    pub const m_radius: usize = 0x4C4; // float
    pub const m_force: usize = 0x4C8; // float
    pub const m_axis: usize = 0x4CC; // Vector
}

pub mod CRagdollManager { // CBaseEntity
    pub const m_iCurrentMaxRagdollCount: usize = 0x4C0; // int8_t
    pub const m_iMaxRagdollCount: usize = 0x4C4; // int32_t
    pub const m_bSaveImportant: usize = 0x4C8; // bool
}

pub mod CRagdollProp { // CBaseAnimGraph
    pub const m_ragdoll: usize = 0x8F0; // ragdoll_t
    pub const m_bStartDisabled: usize = 0x928; // bool
    pub const m_ragPos: usize = 0x930; // CNetworkUtlVectorBase<Vector>
    pub const m_ragAngles: usize = 0x948; // CNetworkUtlVectorBase<QAngle>
    pub const m_hRagdollSource: usize = 0x960; // CHandle<CBaseEntity>
    pub const m_lastUpdateTickCount: usize = 0x964; // uint32_t
    pub const m_allAsleep: usize = 0x968; // bool
    pub const m_bFirstCollisionAfterLaunch: usize = 0x969; // bool
    pub const m_hDamageEntity: usize = 0x96C; // CHandle<CBaseEntity>
    pub const m_hKiller: usize = 0x970; // CHandle<CBaseEntity>
    pub const m_hPhysicsAttacker: usize = 0x974; // CHandle<CBasePlayerPawn>
    pub const m_flLastPhysicsInfluenceTime: usize = 0x978; // GameTime_t
    pub const m_flFadeOutStartTime: usize = 0x97C; // GameTime_t
    pub const m_flFadeTime: usize = 0x980; // float
    pub const m_vecLastOrigin: usize = 0x984; // Vector
    pub const m_flAwakeTime: usize = 0x990; // GameTime_t
    pub const m_flLastOriginChangeTime: usize = 0x994; // GameTime_t
    pub const m_nBloodColor: usize = 0x998; // int32_t
    pub const m_strOriginClassName: usize = 0x9A0; // CUtlSymbolLarge
    pub const m_strSourceClassName: usize = 0x9A8; // CUtlSymbolLarge
    pub const m_bHasBeenPhysgunned: usize = 0x9B0; // bool
    pub const m_bShouldTeleportPhysics: usize = 0x9B1; // bool
    pub const m_flBlendWeight: usize = 0x9B4; // float
    pub const m_flDefaultFadeScale: usize = 0x9B8; // float
    pub const m_ragdollMins: usize = 0x9C0; // CUtlVector<Vector>
    pub const m_ragdollMaxs: usize = 0x9D8; // CUtlVector<Vector>
    pub const m_bShouldDeleteActivationRecord: usize = 0x9F0; // bool
    pub const m_bValidatePoweredRagdollPose: usize = 0xA50; // bool
}

pub mod CRagdollPropAlias_physics_prop_ragdoll { // CRagdollProp
}

pub mod CRagdollPropAttached { // CRagdollProp
    pub const m_boneIndexAttached: usize = 0xA90; // uint32_t
    pub const m_ragdollAttachedObjectIndex: usize = 0xA94; // uint32_t
    pub const m_attachmentPointBoneSpace: usize = 0xA98; // Vector
    pub const m_attachmentPointRagdollSpace: usize = 0xAA4; // Vector
    pub const m_bShouldDetach: usize = 0xAB0; // bool
    pub const m_bShouldDeleteAttachedActivationRecord: usize = 0xAC0; // bool
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
    pub const m_bShowLight: usize = 0x938; // bool
}

pub mod CRemapFloat {
    pub const m_pValue: usize = 0x0; // float[4]
}

pub mod CRenderComponent { // CEntityComponent
    pub const __m_pChainEntity: usize = 0x10; // CNetworkVarChainer
    pub const m_bIsRenderingWithViewModels: usize = 0x50; // bool
    pub const m_nSplitscreenFlags: usize = 0x54; // uint32_t
    pub const m_bEnableRendering: usize = 0x60; // bool
    pub const m_bInterpolationReadyToDraw: usize = 0xB0; // bool
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
    pub const m_bResponseValid: usize = 0x230; // bool
}

pub mod CRetakeGameRules {
    pub const m_nMatchSeed: usize = 0xF8; // int32_t
    pub const m_bBlockersPresent: usize = 0xFC; // bool
    pub const m_bRoundInProgress: usize = 0xFD; // bool
    pub const m_iFirstSecondHalfRound: usize = 0x100; // int32_t
    pub const m_iBombSite: usize = 0x104; // int32_t
}

pub mod CRevertSaved { // CModelPointEntity
    pub const m_loadTime: usize = 0x710; // float
    pub const m_Duration: usize = 0x714; // float
    pub const m_HoldTime: usize = 0x718; // float
}

pub mod CRopeKeyframe { // CBaseModelEntity
    pub const m_RopeFlags: usize = 0x718; // uint16_t
    pub const m_iNextLinkName: usize = 0x720; // CUtlSymbolLarge
    pub const m_Slack: usize = 0x728; // int16_t
    pub const m_Width: usize = 0x72C; // float
    pub const m_TextureScale: usize = 0x730; // float
    pub const m_nSegments: usize = 0x734; // uint8_t
    pub const m_bConstrainBetweenEndpoints: usize = 0x735; // bool
    pub const m_strRopeMaterialModel: usize = 0x738; // CUtlSymbolLarge
    pub const m_iRopeMaterialModelIndex: usize = 0x740; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_Subdiv: usize = 0x748; // uint8_t
    pub const m_nChangeCount: usize = 0x749; // uint8_t
    pub const m_RopeLength: usize = 0x74A; // int16_t
    pub const m_fLockedPoints: usize = 0x74C; // uint8_t
    pub const m_bCreatedFromMapFile: usize = 0x74D; // bool
    pub const m_flScrollSpeed: usize = 0x750; // float
    pub const m_bStartPointValid: usize = 0x754; // bool
    pub const m_bEndPointValid: usize = 0x755; // bool
    pub const m_hStartPoint: usize = 0x758; // CHandle<CBaseEntity>
    pub const m_hEndPoint: usize = 0x75C; // CHandle<CBaseEntity>
    pub const m_iStartAttachment: usize = 0x760; // AttachmentHandle_t
    pub const m_iEndAttachment: usize = 0x761; // AttachmentHandle_t
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
    pub const m_bSolidBsp: usize = 0x998; // bool
}

pub mod CRuleBrushEntity { // CRuleEntity
}

pub mod CRuleEntity { // CBaseModelEntity
    pub const m_iszMaster: usize = 0x710; // CUtlSymbolLarge
}

pub mod CRulePointEntity { // CRuleEntity
    pub const m_Score: usize = 0x718; // int32_t
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
    pub const m_iEnemy5Ks: usize = 0x68; // int32_t
    pub const m_iEnemy4Ks: usize = 0x6C; // int32_t
    pub const m_iEnemy3Ks: usize = 0x70; // int32_t
    pub const m_iEnemyKnifeKills: usize = 0x74; // int32_t
    pub const m_iEnemyTaserKills: usize = 0x78; // int32_t
    pub const m_iEnemy2Ks: usize = 0x7C; // int32_t
    pub const m_iUtility_Count: usize = 0x80; // int32_t
    pub const m_iUtility_Successes: usize = 0x84; // int32_t
    pub const m_iUtility_Enemies: usize = 0x88; // int32_t
    pub const m_iFlash_Count: usize = 0x8C; // int32_t
    pub const m_iFlash_Successes: usize = 0x90; // int32_t
    pub const m_nHealthPointsRemovedTotal: usize = 0x94; // int32_t
    pub const m_nHealthPointsDealtTotal: usize = 0x98; // int32_t
    pub const m_nShotsFiredTotal: usize = 0x9C; // int32_t
    pub const m_nShotsOnTargetTotal: usize = 0xA0; // int32_t
    pub const m_i1v1Count: usize = 0xA4; // int32_t
    pub const m_i1v1Wins: usize = 0xA8; // int32_t
    pub const m_i1v2Count: usize = 0xAC; // int32_t
    pub const m_i1v2Wins: usize = 0xB0; // int32_t
    pub const m_iEntryCount: usize = 0xB4; // int32_t
    pub const m_iEntryWins: usize = 0xB8; // int32_t
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
    pub const m_iszSceneFile: usize = 0x4C8; // CUtlSymbolLarge
    pub const m_iszResumeSceneFile: usize = 0x4D0; // CUtlSymbolLarge
    pub const m_iszTarget1: usize = 0x4D8; // CUtlSymbolLarge
    pub const m_iszTarget2: usize = 0x4E0; // CUtlSymbolLarge
    pub const m_iszTarget3: usize = 0x4E8; // CUtlSymbolLarge
    pub const m_iszTarget4: usize = 0x4F0; // CUtlSymbolLarge
    pub const m_iszTarget5: usize = 0x4F8; // CUtlSymbolLarge
    pub const m_iszTarget6: usize = 0x500; // CUtlSymbolLarge
    pub const m_iszTarget7: usize = 0x508; // CUtlSymbolLarge
    pub const m_iszTarget8: usize = 0x510; // CUtlSymbolLarge
    pub const m_hTarget1: usize = 0x518; // CHandle<CBaseEntity>
    pub const m_hTarget2: usize = 0x51C; // CHandle<CBaseEntity>
    pub const m_hTarget3: usize = 0x520; // CHandle<CBaseEntity>
    pub const m_hTarget4: usize = 0x524; // CHandle<CBaseEntity>
    pub const m_hTarget5: usize = 0x528; // CHandle<CBaseEntity>
    pub const m_hTarget6: usize = 0x52C; // CHandle<CBaseEntity>
    pub const m_hTarget7: usize = 0x530; // CHandle<CBaseEntity>
    pub const m_hTarget8: usize = 0x534; // CHandle<CBaseEntity>
    pub const m_bIsPlayingBack: usize = 0x538; // bool
    pub const m_bPaused: usize = 0x539; // bool
    pub const m_bMultiplayer: usize = 0x53A; // bool
    pub const m_bAutogenerated: usize = 0x53B; // bool
    pub const m_flForceClientTime: usize = 0x53C; // float
    pub const m_flCurrentTime: usize = 0x540; // float
    pub const m_flFrameTime: usize = 0x544; // float
    pub const m_bCancelAtNextInterrupt: usize = 0x548; // bool
    pub const m_fPitch: usize = 0x54C; // float
    pub const m_bAutomated: usize = 0x550; // bool
    pub const m_nAutomatedAction: usize = 0x554; // int32_t
    pub const m_flAutomationDelay: usize = 0x558; // float
    pub const m_flAutomationTime: usize = 0x55C; // float
    pub const m_hWaitingForThisResumeScene: usize = 0x560; // CHandle<CBaseEntity>
    pub const m_bWaitingForResumeScene: usize = 0x564; // bool
    pub const m_bPausedViaInput: usize = 0x565; // bool
    pub const m_bPauseAtNextInterrupt: usize = 0x566; // bool
    pub const m_bWaitingForActor: usize = 0x567; // bool
    pub const m_bWaitingForInterrupt: usize = 0x568; // bool
    pub const m_bInterruptedActorsScenes: usize = 0x569; // bool
    pub const m_bBreakOnNonIdle: usize = 0x56A; // bool
    pub const m_hActorList: usize = 0x570; // CNetworkUtlVectorBase<CHandle<CBaseFlex>>
    pub const m_hRemoveActorList: usize = 0x588; // CUtlVector<CHandle<CBaseEntity>>
    pub const m_nSceneFlushCounter: usize = 0x5D0; // int32_t
    pub const m_nSceneStringIndex: usize = 0x5D4; // uint16_t
    pub const m_OnStart: usize = 0x5D8; // CEntityIOOutput
    pub const m_OnCompletion: usize = 0x600; // CEntityIOOutput
    pub const m_OnCanceled: usize = 0x628; // CEntityIOOutput
    pub const m_OnPaused: usize = 0x650; // CEntityIOOutput
    pub const m_OnResumed: usize = 0x678; // CEntityIOOutput
    pub const m_OnTrigger: usize = 0x6A0; // CEntityIOOutput[16]
    pub const m_hInterruptScene: usize = 0x9B0; // CHandle<CSceneEntity>
    pub const m_nInterruptCount: usize = 0x9B4; // int32_t
    pub const m_bSceneMissing: usize = 0x9B8; // bool
    pub const m_bInterrupted: usize = 0x9B9; // bool
    pub const m_bCompletedEarly: usize = 0x9BA; // bool
    pub const m_bInterruptSceneFinished: usize = 0x9BB; // bool
    pub const m_bRestoring: usize = 0x9BC; // bool
    pub const m_hNotifySceneCompletion: usize = 0x9C0; // CUtlVector<CHandle<CSceneEntity>>
    pub const m_hListManagers: usize = 0x9D8; // CUtlVector<CHandle<CSceneListManager>>
    pub const m_iszSoundName: usize = 0x9F0; // CUtlSymbolLarge
    pub const m_iszSequenceName: usize = 0x9F8; // CUtlSymbolLarge
    pub const m_hActor: usize = 0xA00; // CHandle<CBaseFlex>
    pub const m_hActivator: usize = 0xA04; // CHandle<CBaseEntity>
    pub const m_BusyActor: usize = 0xA08; // int32_t
    pub const m_iPlayerDeathBehavior: usize = 0xA0C; // SceneOnPlayerDeath_t
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
    pub const m_hListManagers: usize = 0x4C0; // CUtlVector<CHandle<CSceneListManager>>
    pub const m_iszScenes: usize = 0x4D8; // CUtlSymbolLarge[16]
    pub const m_hScenes: usize = 0x558; // CHandle<CBaseEntity>[16]
}

pub mod CScriptComponent { // CEntityComponent
    pub const m_scriptClassName: usize = 0x30; // CUtlSymbolLarge
}

pub mod CScriptItem { // CItem
    pub const m_OnPlayerPickup: usize = 0x9C0; // CEntityIOOutput
    pub const m_MoveTypeOverride: usize = 0x9E8; // MoveType_t
}

pub mod CScriptNavBlocker { // CFuncNavBlocker
    pub const m_vExtent: usize = 0x720; // Vector
}

pub mod CScriptTriggerHurt { // CTriggerHurt
    pub const m_vExtent: usize = 0x958; // Vector
}

pub mod CScriptTriggerMultiple { // CTriggerMultiple
    pub const m_vExtent: usize = 0x8E0; // Vector
}

pub mod CScriptTriggerOnce { // CTriggerOnce
    pub const m_vExtent: usize = 0x8E0; // Vector
}

pub mod CScriptTriggerPush { // CTriggerPush
    pub const m_vExtent: usize = 0x8D8; // Vector
}

pub mod CScriptUniformRandomStream {
    pub const m_hScriptScope: usize = 0x8; // HSCRIPT
    pub const m_nInitialSeed: usize = 0x9C; // int32_t
}

pub mod CScriptedSequence { // CBaseEntity
    pub const m_iszEntry: usize = 0x4C0; // CUtlSymbolLarge
    pub const m_iszPreIdle: usize = 0x4C8; // CUtlSymbolLarge
    pub const m_iszPlay: usize = 0x4D0; // CUtlSymbolLarge
    pub const m_iszPostIdle: usize = 0x4D8; // CUtlSymbolLarge
    pub const m_iszModifierToAddOnPlay: usize = 0x4E0; // CUtlSymbolLarge
    pub const m_iszNextScript: usize = 0x4E8; // CUtlSymbolLarge
    pub const m_iszEntity: usize = 0x4F0; // CUtlSymbolLarge
    pub const m_iszSyncGroup: usize = 0x4F8; // CUtlSymbolLarge
    pub const m_nMoveTo: usize = 0x500; // ScriptedMoveTo_t
    pub const m_bIsPlayingPreIdle: usize = 0x504; // bool
    pub const m_bIsPlayingEntry: usize = 0x505; // bool
    pub const m_bIsPlayingAction: usize = 0x506; // bool
    pub const m_bIsPlayingPostIdle: usize = 0x507; // bool
    pub const m_bLoopPreIdleSequence: usize = 0x508; // bool
    pub const m_bLoopActionSequence: usize = 0x509; // bool
    pub const m_bLoopPostIdleSequence: usize = 0x50A; // bool
    pub const m_bSynchPostIdles: usize = 0x50B; // bool
    pub const m_bIgnoreLookAt: usize = 0x50C; // bool
    pub const m_bIgnoreGravity: usize = 0x50D; // bool
    pub const m_bDisableNPCCollisions: usize = 0x50E; // bool
    pub const m_bKeepAnimgraphLockedPost: usize = 0x50F; // bool
    pub const m_bDontAddModifiers: usize = 0x510; // bool
    pub const m_flRadius: usize = 0x514; // float
    pub const m_flRepeat: usize = 0x518; // float
    pub const m_flPlayAnimFadeInTime: usize = 0x51C; // float
    pub const m_flMoveInterpTime: usize = 0x520; // float
    pub const m_flAngRate: usize = 0x524; // float
    pub const m_nNotReadySequenceCount: usize = 0x528; // int32_t
    pub const m_startTime: usize = 0x52C; // GameTime_t
    pub const m_bWaitForBeginSequence: usize = 0x530; // bool
    pub const m_saved_effects: usize = 0x534; // int32_t
    pub const m_savedFlags: usize = 0x538; // int32_t
    pub const m_savedCollisionGroup: usize = 0x53C; // int32_t
    pub const m_interruptable: usize = 0x540; // bool
    pub const m_sequenceStarted: usize = 0x541; // bool
    pub const m_bPositionRelativeToOtherEntity: usize = 0x542; // bool
    pub const m_hTargetEnt: usize = 0x544; // CHandle<CBaseEntity>
    pub const m_hNextCine: usize = 0x548; // CHandle<CScriptedSequence>
    pub const m_bThinking: usize = 0x54C; // bool
    pub const m_bInitiatedSelfDelete: usize = 0x54D; // bool
    pub const m_bIsTeleportingDueToMoveTo: usize = 0x54E; // bool
    pub const m_bAllowCustomInterruptConditions: usize = 0x54F; // bool
    pub const m_hLastFoundEntity: usize = 0x550; // CHandle<CBaseEntity>
    pub const m_hForcedTarget: usize = 0x554; // CHandle<CBaseAnimGraph>
    pub const m_bDontCancelOtherSequences: usize = 0x558; // bool
    pub const m_bForceSynch: usize = 0x559; // bool
    pub const m_bPreventUpdateYawOnFinish: usize = 0x55A; // bool
    pub const m_bEnsureOnNavmeshOnFinish: usize = 0x55B; // bool
    pub const m_onDeathBehavior: usize = 0x55C; // ScriptedOnDeath_t
    pub const m_ConflictResponse: usize = 0x560; // ScriptedConflictResponse_t
    pub const m_OnBeginSequence: usize = 0x568; // CEntityIOOutput
    pub const m_OnActionStartOrLoop: usize = 0x590; // CEntityIOOutput
    pub const m_OnEndSequence: usize = 0x5B8; // CEntityIOOutput
    pub const m_OnPostIdleEndSequence: usize = 0x5E0; // CEntityIOOutput
    pub const m_OnCancelSequence: usize = 0x608; // CEntityIOOutput
    pub const m_OnCancelFailedSequence: usize = 0x630; // CEntityIOOutput
    pub const m_OnScriptEvent: usize = 0x658; // CEntityIOOutput[8]
    pub const m_matOtherToMain: usize = 0x7A0; // CTransform
    pub const m_hInteractionMainEntity: usize = 0x7C0; // CHandle<CBaseEntity>
    pub const m_iPlayerDeathBehavior: usize = 0x7C4; // int32_t
}

pub mod CSensorGrenade { // CBaseCSGrenade
}

pub mod CSensorGrenadeProjectile { // CBaseCSGrenadeProjectile
    pub const m_fExpireTime: usize = 0xA98; // GameTime_t
    pub const m_fNextDetectPlayerSound: usize = 0xA9C; // GameTime_t
    pub const m_hDisplayGrenade: usize = 0xAA0; // CHandle<CBaseEntity>
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
    pub const m_bDebris: usize = 0xBD0; // bool
    pub const m_hParentShard: usize = 0xBD4; // uint32_t
    pub const m_ShardDesc: usize = 0xBD8; // shard_model_desc_t
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
    pub const m_bSinglePlayerGameEnding: usize = 0x90; // bool
}

pub mod CSkeletonAnimationController { // ISkeletonAnimationController
    pub const m_pSkeletonInstance: usize = 0x8; // CSkeletonInstance*
}

pub mod CSkeletonInstance { // CGameSceneNode
    pub const m_modelState: usize = 0x160; // CModelState
    pub const m_bIsAnimationEnabled: usize = 0x370; // bool
    pub const m_bUseParentRenderBounds: usize = 0x371; // bool
    pub const m_bDisableSolidCollisionsForHierarchy: usize = 0x372; // bool
    pub const m_bDirtyMotionType: usize = 0x0; // bitfield:1
    pub const m_bIsGeneratingLatchedParentSpaceState: usize = 0x0; // bitfield:1
    pub const m_materialGroup: usize = 0x374; // CUtlStringToken
    pub const m_nHitboxSet: usize = 0x378; // uint8_t
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
    pub const m_skyboxData: usize = 0x4C0; // sky3dparams_t
    pub const m_skyboxSlotToken: usize = 0x550; // CUtlStringToken
    pub const m_bUseAngles: usize = 0x554; // bool
    pub const m_pNext: usize = 0x558; // CSkyCamera*
}

pub mod CSkyboxReference { // CBaseEntity
    pub const m_worldGroupId: usize = 0x4C0; // WorldGroupId_t
    pub const m_hSkyCamera: usize = 0x4C4; // CHandle<CSkyCamera>
}

pub mod CSmokeGrenade { // CBaseCSGrenade
}

pub mod CSmokeGrenadeProjectile { // CBaseCSGrenadeProjectile
    pub const m_nSmokeEffectTickBegin: usize = 0xAB0; // int32_t
    pub const m_bDidSmokeEffect: usize = 0xAB4; // bool
    pub const m_nRandomSeed: usize = 0xAB8; // int32_t
    pub const m_vSmokeColor: usize = 0xABC; // Vector
    pub const m_vSmokeDetonationPos: usize = 0xAC8; // Vector
    pub const m_VoxelFrameData: usize = 0xAD8; // CUtlVector<uint8_t>
    pub const m_flLastBounce: usize = 0xAF0; // GameTime_t
    pub const m_fllastSimulationTime: usize = 0xAF4; // GameTime_t
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
    pub const m_bDisabled: usize = 0x4C0; // bool
    pub const m_iszSoundAreaType: usize = 0x4C8; // CUtlSymbolLarge
    pub const m_vPos: usize = 0x4D0; // Vector
}

pub mod CSoundAreaEntityOrientedBox { // CSoundAreaEntityBase
    pub const m_vMin: usize = 0x4E0; // Vector
    pub const m_vMax: usize = 0x4EC; // Vector
}

pub mod CSoundAreaEntitySphere { // CSoundAreaEntityBase
    pub const m_flRadius: usize = 0x4E0; // float
}

pub mod CSoundEnt { // CPointEntity
    pub const m_iFreeSound: usize = 0x4C0; // int32_t
    pub const m_iActiveSound: usize = 0x4C4; // int32_t
    pub const m_cLastActiveSounds: usize = 0x4C8; // int32_t
    pub const m_SoundPool: usize = 0x4CC; // CSound[128]
}

pub mod CSoundEnvelope {
    pub const m_current: usize = 0x0; // float
    pub const m_target: usize = 0x4; // float
    pub const m_rate: usize = 0x8; // float
    pub const m_forceupdate: usize = 0xC; // bool
}

pub mod CSoundEventAABBEntity { // CSoundEventEntity
    pub const m_vMins: usize = 0x568; // Vector
    pub const m_vMaxs: usize = 0x574; // Vector
}

pub mod CSoundEventEntity { // CBaseEntity
    pub const m_bStartOnSpawn: usize = 0x4C0; // bool
    pub const m_bToLocalPlayer: usize = 0x4C1; // bool
    pub const m_bStopOnNew: usize = 0x4C2; // bool
    pub const m_bSaveRestore: usize = 0x4C3; // bool
    pub const m_bSavedIsPlaying: usize = 0x4C4; // bool
    pub const m_flSavedElapsedTime: usize = 0x4C8; // float
    pub const m_iszSourceEntityName: usize = 0x4D0; // CUtlSymbolLarge
    pub const m_iszAttachmentName: usize = 0x4D8; // CUtlSymbolLarge
    pub const m_onGUIDChanged: usize = 0x4E0; // CEntityOutputTemplate<uint64_t>
    pub const m_onSoundFinished: usize = 0x508; // CEntityIOOutput
    pub const m_iszSoundName: usize = 0x550; // CUtlSymbolLarge
    pub const m_hSource: usize = 0x560; // CEntityHandle
}

pub mod CSoundEventEntityAlias_snd_event_point { // CSoundEventEntity
}

pub mod CSoundEventOBBEntity { // CSoundEventEntity
    pub const m_vMins: usize = 0x568; // Vector
    pub const m_vMaxs: usize = 0x574; // Vector
}

pub mod CSoundEventParameter { // CBaseEntity
    pub const m_iszParamName: usize = 0x4C8; // CUtlSymbolLarge
    pub const m_flFloatValue: usize = 0x4D0; // float
}

pub mod CSoundEventPathCornerEntity { // CSoundEventEntity
    pub const m_iszPathCorner: usize = 0x568; // CUtlSymbolLarge
    pub const m_iCountMax: usize = 0x570; // int32_t
    pub const m_flDistanceMax: usize = 0x574; // float
    pub const m_flDistMaxSqr: usize = 0x578; // float
    pub const m_flDotProductMax: usize = 0x57C; // float
    pub const bPlaying: usize = 0x580; // bool
}

pub mod CSoundOpvarSetAABBEntity { // CSoundOpvarSetPointEntity
    pub const m_vDistanceInnerMins: usize = 0x668; // Vector
    pub const m_vDistanceInnerMaxs: usize = 0x674; // Vector
    pub const m_vDistanceOuterMins: usize = 0x680; // Vector
    pub const m_vDistanceOuterMaxs: usize = 0x68C; // Vector
    pub const m_nAABBDirection: usize = 0x698; // int32_t
    pub const m_vInnerMins: usize = 0x69C; // Vector
    pub const m_vInnerMaxs: usize = 0x6A8; // Vector
    pub const m_vOuterMins: usize = 0x6B4; // Vector
    pub const m_vOuterMaxs: usize = 0x6C0; // Vector
}

pub mod CSoundOpvarSetAutoRoomEntity { // CSoundOpvarSetPointEntity
    pub const m_traceResults: usize = 0x668; // CUtlVector<SoundOpvarTraceResult_t>
    pub const m_flSize: usize = 0x698; // float
    pub const m_flHeightTolerance: usize = 0x69C; // float
    pub const m_flSizeSqr: usize = 0x6A0; // float
}

pub mod CSoundOpvarSetEntity { // CBaseEntity
    pub const m_iszStackName: usize = 0x4C8; // CUtlSymbolLarge
    pub const m_iszOperatorName: usize = 0x4D0; // CUtlSymbolLarge
    pub const m_iszOpvarName: usize = 0x4D8; // CUtlSymbolLarge
    pub const m_nOpvarType: usize = 0x4E0; // int32_t
    pub const m_nOpvarIndex: usize = 0x4E4; // int32_t
    pub const m_flOpvarValue: usize = 0x4E8; // float
    pub const m_OpvarValueString: usize = 0x4F0; // CUtlSymbolLarge
    pub const m_bSetOnSpawn: usize = 0x4F8; // bool
}

pub mod CSoundOpvarSetOBBEntity { // CSoundOpvarSetAABBEntity
}

pub mod CSoundOpvarSetOBBWindEntity { // CSoundOpvarSetPointBase
    pub const m_vMins: usize = 0x558; // Vector
    pub const m_vMaxs: usize = 0x564; // Vector
    pub const m_vDistanceMins: usize = 0x570; // Vector
    pub const m_vDistanceMaxs: usize = 0x57C; // Vector
    pub const m_flWindMin: usize = 0x588; // float
    pub const m_flWindMax: usize = 0x58C; // float
    pub const m_flWindMapMin: usize = 0x590; // float
    pub const m_flWindMapMax: usize = 0x594; // float
}

pub mod CSoundOpvarSetPathCornerEntity { // CSoundOpvarSetPointEntity
    pub const m_flDistMinSqr: usize = 0x680; // float
    pub const m_flDistMaxSqr: usize = 0x684; // float
    pub const m_iszPathCornerEntityName: usize = 0x688; // CUtlSymbolLarge
}

pub mod CSoundOpvarSetPointBase { // CBaseEntity
    pub const m_bDisabled: usize = 0x4C0; // bool
    pub const m_hSource: usize = 0x4C4; // CEntityHandle
    pub const m_iszSourceEntityName: usize = 0x4D0; // CUtlSymbolLarge
    pub const m_vLastPosition: usize = 0x528; // Vector
    pub const m_iszStackName: usize = 0x538; // CUtlSymbolLarge
    pub const m_iszOperatorName: usize = 0x540; // CUtlSymbolLarge
    pub const m_iszOpvarName: usize = 0x548; // CUtlSymbolLarge
    pub const m_iOpvarIndex: usize = 0x550; // int32_t
    pub const m_bUseAutoCompare: usize = 0x554; // bool
}

pub mod CSoundOpvarSetPointEntity { // CSoundOpvarSetPointBase
    pub const m_OnEnter: usize = 0x558; // CEntityIOOutput
    pub const m_OnExit: usize = 0x580; // CEntityIOOutput
    pub const m_bAutoDisable: usize = 0x5A8; // bool
    pub const m_flDistanceMin: usize = 0x5EC; // float
    pub const m_flDistanceMax: usize = 0x5F0; // float
    pub const m_flDistanceMapMin: usize = 0x5F4; // float
    pub const m_flDistanceMapMax: usize = 0x5F8; // float
    pub const m_flOcclusionRadius: usize = 0x5FC; // float
    pub const m_flOcclusionMin: usize = 0x600; // float
    pub const m_flOcclusionMax: usize = 0x604; // float
    pub const m_flValSetOnDisable: usize = 0x608; // float
    pub const m_bSetValueOnDisable: usize = 0x60C; // bool
    pub const m_nSimulationMode: usize = 0x610; // int32_t
    pub const m_nVisibilitySamples: usize = 0x614; // int32_t
    pub const m_vDynamicProxyPoint: usize = 0x618; // Vector
    pub const m_flDynamicMaximumOcclusion: usize = 0x624; // float
    pub const m_hDynamicEntity: usize = 0x628; // CEntityHandle
    pub const m_iszDynamicEntityName: usize = 0x630; // CUtlSymbolLarge
    pub const m_flPathingDistanceNormFactor: usize = 0x638; // float
    pub const m_vPathingSourcePos: usize = 0x63C; // Vector
    pub const m_vPathingListenerPos: usize = 0x648; // Vector
    pub const m_vPathingDirection: usize = 0x654; // Vector
    pub const m_nPathingSourceIndex: usize = 0x660; // int32_t
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
    pub const m_iszStackName: usize = 0x4C0; // CUtlSymbolLarge
}

pub mod CSplineConstraint { // CPhysConstraint
}

pub mod CSpotlightEnd { // CBaseModelEntity
    pub const m_flLightScale: usize = 0x710; // float
    pub const m_Radius: usize = 0x714; // float
    pub const m_vSpotlightDir: usize = 0x718; // Vector
    pub const m_vSpotlightOrg: usize = 0x724; // Vector
}

pub mod CSprite { // CBaseModelEntity
    pub const m_hSpriteMaterial: usize = 0x710; // CStrongHandle<InfoForResourceTypeIMaterial2>
    pub const m_hAttachedToEntity: usize = 0x718; // CHandle<CBaseEntity>
    pub const m_nAttachment: usize = 0x71C; // AttachmentHandle_t
    pub const m_flSpriteFramerate: usize = 0x720; // float
    pub const m_flFrame: usize = 0x724; // float
    pub const m_flDieTime: usize = 0x728; // GameTime_t
    pub const m_nBrightness: usize = 0x738; // uint32_t
    pub const m_flBrightnessDuration: usize = 0x73C; // float
    pub const m_flSpriteScale: usize = 0x740; // float
    pub const m_flScaleDuration: usize = 0x744; // float
    pub const m_bWorldSpaceScale: usize = 0x748; // bool
    pub const m_flGlowProxySize: usize = 0x74C; // float
    pub const m_flHDRColorScale: usize = 0x750; // float
    pub const m_flLastTime: usize = 0x754; // GameTime_t
    pub const m_flMaxFrame: usize = 0x758; // float
    pub const m_flStartScale: usize = 0x75C; // float
    pub const m_flDestScale: usize = 0x760; // float
    pub const m_flScaleTimeStart: usize = 0x764; // GameTime_t
    pub const m_nStartBrightness: usize = 0x768; // int32_t
    pub const m_nDestBrightness: usize = 0x76C; // int32_t
    pub const m_flBrightnessTimeStart: usize = 0x770; // GameTime_t
    pub const m_nSpriteWidth: usize = 0x774; // int32_t
    pub const m_nSpriteHeight: usize = 0x778; // int32_t
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
    pub const m_vDirection: usize = 0x710; // Vector
    pub const m_clrOverlay: usize = 0x71C; // Color
    pub const m_iszEffectName: usize = 0x720; // CUtlSymbolLarge
    pub const m_iszSSEffectName: usize = 0x728; // CUtlSymbolLarge
    pub const m_bOn: usize = 0x730; // bool
    pub const m_bmaxColor: usize = 0x731; // bool
    pub const m_flSize: usize = 0x734; // float
    pub const m_flRotation: usize = 0x738; // float
    pub const m_flHazeScale: usize = 0x73C; // float
    pub const m_flAlphaHaze: usize = 0x740; // float
    pub const m_flAlphaHdr: usize = 0x744; // float
    pub const m_flAlphaScale: usize = 0x748; // float
    pub const m_flHDRColorScale: usize = 0x74C; // float
    pub const m_flFarZScale: usize = 0x750; // float
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
    pub const m_newTarget: usize = 0x4C0; // CVariantBase<CVariantDefaultAllocator>
    pub const m_newTargetName: usize = 0x4D0; // CUtlSymbolLarge
}

pub mod CTankTrainAI { // CPointEntity
    pub const m_hTrain: usize = 0x4C0; // CHandle<CFuncTrackTrain>
    pub const m_hTargetEntity: usize = 0x4C4; // CHandle<CBaseEntity>
    pub const m_soundPlaying: usize = 0x4C8; // int32_t
    pub const m_startSoundName: usize = 0x4E0; // CUtlSymbolLarge
    pub const m_engineSoundName: usize = 0x4E8; // CUtlSymbolLarge
    pub const m_movementSoundName: usize = 0x4F0; // CUtlSymbolLarge
    pub const m_targetEntityName: usize = 0x4F8; // CUtlSymbolLarge
}

pub mod CTeam { // CBaseEntity
    pub const m_aPlayerControllers: usize = 0x4C0; // CNetworkUtlVectorBase<CHandle<CBasePlayerController>>
    pub const m_aPlayers: usize = 0x4D8; // CNetworkUtlVectorBase<CHandle<CBasePlayerPawn>>
    pub const m_iScore: usize = 0x4F0; // int32_t
    pub const m_szTeamname: usize = 0x4F4; // char[129]
}

pub mod CTeamplayRules { // CMultiplayRules
}

pub mod CTestEffect { // CBaseEntity
    pub const m_iLoop: usize = 0x4C0; // int32_t
    pub const m_iBeam: usize = 0x4C4; // int32_t
    pub const m_pBeam: usize = 0x4C8; // CBeam*[24]
    pub const m_flBeamTime: usize = 0x588; // GameTime_t[24]
    pub const m_flStartTime: usize = 0x5E8; // GameTime_t
}

pub mod CTextureBasedAnimatable { // CBaseModelEntity
    pub const m_bLoop: usize = 0x710; // bool
    pub const m_flFPS: usize = 0x714; // float
    pub const m_hPositionKeys: usize = 0x718; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_hRotationKeys: usize = 0x720; // CStrongHandle<InfoForResourceTypeCTextureBase>
    pub const m_vAnimationBoundsMin: usize = 0x728; // Vector
    pub const m_vAnimationBoundsMax: usize = 0x734; // Vector
    pub const m_flStartTime: usize = 0x740; // float
    pub const m_flStartFrame: usize = 0x744; // float
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
    pub const m_OnTimer: usize = 0x4C0; // CEntityIOOutput
    pub const m_OnTimerHigh: usize = 0x4E8; // CEntityIOOutput
    pub const m_OnTimerLow: usize = 0x510; // CEntityIOOutput
    pub const m_iDisabled: usize = 0x538; // int32_t
    pub const m_flInitialDelay: usize = 0x53C; // float
    pub const m_flRefireTime: usize = 0x540; // float
    pub const m_bUpDownState: usize = 0x544; // bool
    pub const m_iUseRandomTime: usize = 0x548; // int32_t
    pub const m_bPauseAfterFiring: usize = 0x54C; // bool
    pub const m_flLowerRandomBound: usize = 0x550; // float
    pub const m_flUpperRandomBound: usize = 0x554; // float
    pub const m_flRemainingTime: usize = 0x558; // float
    pub const m_bPaused: usize = 0x55C; // bool
}

pub mod CTonemapController2 { // CBaseEntity
    pub const m_flAutoExposureMin: usize = 0x4C0; // float
    pub const m_flAutoExposureMax: usize = 0x4C4; // float
    pub const m_flTonemapPercentTarget: usize = 0x4C8; // float
    pub const m_flTonemapPercentBrightPixels: usize = 0x4CC; // float
    pub const m_flTonemapMinAvgLum: usize = 0x4D0; // float
    pub const m_flExposureAdaptationSpeedUp: usize = 0x4D4; // float
    pub const m_flExposureAdaptationSpeedDown: usize = 0x4D8; // float
    pub const m_flTonemapEVSmoothingRange: usize = 0x4DC; // float
}

pub mod CTonemapController2Alias_env_tonemap_controller2 { // CTonemapController2
}

pub mod CTonemapTrigger { // CBaseTrigger
    pub const m_tonemapControllerName: usize = 0x8B8; // CUtlSymbolLarge
    pub const m_hTonemapController: usize = 0x8C0; // CEntityHandle
}

pub mod CTouchExpansionComponent { // CEntityComponent
}

pub mod CTriggerActiveWeaponDetect { // CBaseTrigger
    pub const m_OnTouchedActiveWeapon: usize = 0x8B8; // CEntityIOOutput
    pub const m_iszWeaponClassName: usize = 0x8E0; // CUtlSymbolLarge
}

pub mod CTriggerBombReset { // CBaseTrigger
}

pub mod CTriggerBrush { // CBaseModelEntity
    pub const m_OnStartTouch: usize = 0x710; // CEntityIOOutput
    pub const m_OnEndTouch: usize = 0x738; // CEntityIOOutput
    pub const m_OnUse: usize = 0x760; // CEntityIOOutput
    pub const m_iInputFilter: usize = 0x788; // int32_t
    pub const m_iDontMessageParent: usize = 0x78C; // int32_t
}

pub mod CTriggerBuoyancy { // CBaseTrigger
    pub const m_BuoyancyHelper: usize = 0x8B8; // CBuoyancyHelper
    pub const m_flFluidDensity: usize = 0x8D8; // float
}

pub mod CTriggerCallback { // CBaseTrigger
}

pub mod CTriggerDetectBulletFire { // CBaseTrigger
    pub const m_bPlayerFireOnly: usize = 0x8B8; // bool
    pub const m_OnDetectedBulletFire: usize = 0x8C0; // CEntityIOOutput
}

pub mod CTriggerDetectExplosion { // CBaseTrigger
    pub const m_OnDetectedExplosion: usize = 0x8F0; // CEntityIOOutput
}

pub mod CTriggerFan { // CBaseTrigger
    pub const m_vFanOrigin: usize = 0x8B8; // Vector
    pub const m_vFanEnd: usize = 0x8C4; // Vector
    pub const m_vNoise: usize = 0x8D0; // Vector
    pub const m_flForce: usize = 0x8DC; // float
    pub const m_flRopeForceScale: usize = 0x8E0; // float
    pub const m_flPlayerForce: usize = 0x8E4; // float
    pub const m_flRampTime: usize = 0x8E8; // float
    pub const m_bFalloff: usize = 0x8EC; // bool
    pub const m_bPushPlayer: usize = 0x8ED; // bool
    pub const m_bRampDown: usize = 0x8EE; // bool
    pub const m_bAddNoise: usize = 0x8EF; // bool
    pub const m_RampTimer: usize = 0x8F0; // CountdownTimer
}

pub mod CTriggerGameEvent { // CBaseTrigger
    pub const m_strStartTouchEventName: usize = 0x8B8; // CUtlString
    pub const m_strEndTouchEventName: usize = 0x8C0; // CUtlString
    pub const m_strTriggerID: usize = 0x8C8; // CUtlString
}

pub mod CTriggerGravity { // CBaseTrigger
}

pub mod CTriggerHostageReset { // CBaseTrigger
}

pub mod CTriggerHurt { // CBaseTrigger
    pub const m_flOriginalDamage: usize = 0x8B8; // float
    pub const m_flDamage: usize = 0x8BC; // float
    pub const m_flDamageCap: usize = 0x8C0; // float
    pub const m_flLastDmgTime: usize = 0x8C4; // GameTime_t
    pub const m_flForgivenessDelay: usize = 0x8C8; // float
    pub const m_bitsDamageInflict: usize = 0x8CC; // int32_t
    pub const m_damageModel: usize = 0x8D0; // int32_t
    pub const m_bNoDmgForce: usize = 0x8D4; // bool
    pub const m_vDamageForce: usize = 0x8D8; // Vector
    pub const m_thinkAlways: usize = 0x8E4; // bool
    pub const m_hurtThinkPeriod: usize = 0x8E8; // float
    pub const m_OnHurt: usize = 0x8F0; // CEntityIOOutput
    pub const m_OnHurtPlayer: usize = 0x918; // CEntityIOOutput
    pub const m_hurtEntities: usize = 0x940; // CUtlVector<CHandle<CBaseEntity>>
}

pub mod CTriggerHurtGhost { // CTriggerHurt
}

pub mod CTriggerImpact { // CTriggerMultiple
    pub const m_flMagnitude: usize = 0x8E0; // float
    pub const m_flNoise: usize = 0x8E4; // float
    pub const m_flViewkick: usize = 0x8E8; // float
    pub const m_pOutputForce: usize = 0x8F0; // CEntityOutputTemplate<Vector>
}

pub mod CTriggerLerpObject { // CBaseTrigger
    pub const m_iszLerpTarget: usize = 0x8B8; // CUtlSymbolLarge
    pub const m_hLerpTarget: usize = 0x8C0; // CHandle<CBaseEntity>
    pub const m_iszLerpTargetAttachment: usize = 0x8C8; // CUtlSymbolLarge
    pub const m_hLerpTargetAttachment: usize = 0x8D0; // AttachmentHandle_t
    pub const m_flLerpDuration: usize = 0x8D4; // float
    pub const m_bLerpRestoreMoveType: usize = 0x8D8; // bool
    pub const m_bSingleLerpObject: usize = 0x8D9; // bool
    pub const m_vecLerpingObjects: usize = 0x8E0; // CUtlVector<lerpdata_t>
    pub const m_iszLerpEffect: usize = 0x8F8; // CUtlSymbolLarge
    pub const m_iszLerpSound: usize = 0x900; // CUtlSymbolLarge
    pub const m_bAttachTouchingObject: usize = 0x908; // bool
    pub const m_hEntityToWaitForDisconnect: usize = 0x90C; // CHandle<CBaseEntity>
    pub const m_OnLerpStarted: usize = 0x910; // CEntityIOOutput
    pub const m_OnLerpFinished: usize = 0x938; // CEntityIOOutput
}

pub mod CTriggerLook { // CTriggerOnce
    pub const m_hLookTarget: usize = 0x8E0; // CHandle<CBaseEntity>
    pub const m_flFieldOfView: usize = 0x8E4; // float
    pub const m_flLookTime: usize = 0x8E8; // float
    pub const m_flLookTimeTotal: usize = 0x8EC; // float
    pub const m_flLookTimeLast: usize = 0x8F0; // GameTime_t
    pub const m_flTimeoutDuration: usize = 0x8F4; // float
    pub const m_bTimeoutFired: usize = 0x8F8; // bool
    pub const m_bIsLooking: usize = 0x8F9; // bool
    pub const m_b2DFOV: usize = 0x8FA; // bool
    pub const m_bUseVelocity: usize = 0x8FB; // bool
    pub const m_hActivator: usize = 0x8FC; // CHandle<CBaseEntity>
    pub const m_bTestOcclusion: usize = 0x900; // bool
    pub const m_OnTimeout: usize = 0x908; // CEntityIOOutput
    pub const m_OnStartLook: usize = 0x930; // CEntityIOOutput
    pub const m_OnEndLook: usize = 0x958; // CEntityIOOutput
}

pub mod CTriggerMultiple { // CBaseTrigger
    pub const m_OnTrigger: usize = 0x8B8; // CEntityIOOutput
}

pub mod CTriggerOnce { // CTriggerMultiple
}

pub mod CTriggerPhysics { // CBaseTrigger
    pub const m_gravityScale: usize = 0x8C8; // float
    pub const m_linearLimit: usize = 0x8CC; // float
    pub const m_linearDamping: usize = 0x8D0; // float
    pub const m_angularLimit: usize = 0x8D4; // float
    pub const m_angularDamping: usize = 0x8D8; // float
    pub const m_linearForce: usize = 0x8DC; // float
    pub const m_flFrequency: usize = 0x8E0; // float
    pub const m_flDampingRatio: usize = 0x8E4; // float
    pub const m_vecLinearForcePointAt: usize = 0x8E8; // Vector
    pub const m_bCollapseToForcePoint: usize = 0x8F4; // bool
    pub const m_vecLinearForcePointAtWorld: usize = 0x8F8; // Vector
    pub const m_vecLinearForceDirection: usize = 0x904; // Vector
    pub const m_bConvertToDebrisWhenPossible: usize = 0x910; // bool
}

pub mod CTriggerProximity { // CBaseTrigger
    pub const m_hMeasureTarget: usize = 0x8B8; // CHandle<CBaseEntity>
    pub const m_iszMeasureTarget: usize = 0x8C0; // CUtlSymbolLarge
    pub const m_fRadius: usize = 0x8C8; // float
    pub const m_nTouchers: usize = 0x8CC; // int32_t
    pub const m_NearestEntityDistance: usize = 0x8D0; // CEntityOutputTemplate<float>
}

pub mod CTriggerPush { // CBaseTrigger
    pub const m_angPushEntitySpace: usize = 0x8B8; // QAngle
    pub const m_vecPushDirEntitySpace: usize = 0x8C4; // Vector
    pub const m_bTriggerOnStartTouch: usize = 0x8D0; // bool
}

pub mod CTriggerRemove { // CBaseTrigger
    pub const m_OnRemove: usize = 0x8B8; // CEntityIOOutput
}

pub mod CTriggerSave { // CBaseTrigger
    pub const m_bForceNewLevelUnit: usize = 0x8B8; // bool
    pub const m_fDangerousTimer: usize = 0x8BC; // float
    pub const m_minHitPoints: usize = 0x8C0; // int32_t
}

pub mod CTriggerSndSosOpvar { // CBaseTrigger
    pub const m_hTouchingPlayers: usize = 0x8B8; // CUtlVector<CHandle<CBaseEntity>>
    pub const m_flPosition: usize = 0x8D0; // Vector
    pub const m_flCenterSize: usize = 0x8DC; // float
    pub const m_flMinVal: usize = 0x8E0; // float
    pub const m_flMaxVal: usize = 0x8E4; // float
    pub const m_flWait: usize = 0x8E8; // float
    pub const m_opvarName: usize = 0x8F0; // CUtlSymbolLarge
    pub const m_stackName: usize = 0x8F8; // CUtlSymbolLarge
    pub const m_operatorName: usize = 0x900; // CUtlSymbolLarge
    pub const m_bVolIs2D: usize = 0x908; // bool
    pub const m_opvarNameChar: usize = 0x909; // char[256]
    pub const m_stackNameChar: usize = 0xA09; // char[256]
    pub const m_operatorNameChar: usize = 0xB09; // char[256]
    pub const m_VecNormPos: usize = 0xC0C; // Vector
    pub const m_flNormCenterSize: usize = 0xC18; // float
}

pub mod CTriggerSoundscape { // CBaseTrigger
    pub const m_hSoundscape: usize = 0x8B8; // CHandle<CEnvSoundscapeTriggerable>
    pub const m_SoundscapeName: usize = 0x8C0; // CUtlSymbolLarge
    pub const m_spectators: usize = 0x8C8; // CUtlVector<CHandle<CBasePlayerPawn>>
}

pub mod CTriggerTeleport { // CBaseTrigger
    pub const m_iLandmark: usize = 0x8B8; // CUtlSymbolLarge
    pub const m_bUseLandmarkAngles: usize = 0x8C0; // bool
    pub const m_bMirrorPlayer: usize = 0x8C1; // bool
}

pub mod CTriggerToggleSave { // CBaseTrigger
    pub const m_bDisabled: usize = 0x8B8; // bool
}

pub mod CTriggerTripWire { // CBaseTrigger
}

pub mod CTriggerVolume { // CBaseModelEntity
    pub const m_iFilterName: usize = 0x710; // CUtlSymbolLarge
    pub const m_hFilter: usize = 0x718; // CHandle<CBaseFilter>
}

pub mod CTripWireFire { // CBaseCSGrenade
}

pub mod CTripWireFireProjectile { // CBaseGrenade
}

pub mod CVoteController { // CBaseEntity
    pub const m_iActiveIssueIndex: usize = 0x4C0; // int32_t
    pub const m_iOnlyTeamToVote: usize = 0x4C4; // int32_t
    pub const m_nVoteOptionCount: usize = 0x4C8; // int32_t[5]
    pub const m_nPotentialVotes: usize = 0x4DC; // int32_t
    pub const m_bIsYesNoVote: usize = 0x4E0; // bool
    pub const m_acceptingVotesTimer: usize = 0x4E8; // CountdownTimer
    pub const m_executeCommandTimer: usize = 0x500; // CountdownTimer
    pub const m_resetVoteTimer: usize = 0x518; // CountdownTimer
    pub const m_nVotesCast: usize = 0x530; // int32_t[64]
    pub const m_playerHoldingVote: usize = 0x630; // CPlayerSlot
    pub const m_playerOverrideForVote: usize = 0x634; // CPlayerSlot
    pub const m_nHighestCountIndex: usize = 0x638; // int32_t
    pub const m_potentialIssues: usize = 0x640; // CUtlVector<CBaseIssue*>
    pub const m_VoteOptions: usize = 0x658; // CUtlVector<char*>
}

pub mod CWaterBullet { // CBaseAnimGraph
}

pub mod CWeaponAWP { // CCSWeaponBaseGun
}

pub mod CWeaponAug { // CCSWeaponBaseGun
}

pub mod CWeaponBaseItem { // CCSWeaponBase
    pub const m_SequenceCompleteTimer: usize = 0xE90; // CountdownTimer
    pub const m_bRedraw: usize = 0xEA8; // bool
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
    pub const m_flBulletDamageAbsorbed: usize = 0xEB0; // float
    pub const m_flLastBulletHitSoundTime: usize = 0xEB4; // GameTime_t
    pub const m_flDisplayHealth: usize = 0xEB8; // float
}

pub mod CWeaponTaser { // CCSWeaponBaseGun
    pub const m_fFireTime: usize = 0xEB0; // GameTime_t
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
    pub const m_iDamageType: usize = 0x518; // int32_t
}

pub mod FilterHealth { // CBaseFilter
    pub const m_bAdrenalineActive: usize = 0x518; // bool
    pub const m_iHealthMin: usize = 0x51C; // int32_t
    pub const m_iHealthMax: usize = 0x520; // int32_t
}

pub mod FilterTeam { // CBaseFilter
    pub const m_iFilterTeam: usize = 0x518; // int32_t
}

pub mod GameAmmoTypeInfo_t { // AmmoTypeInfo_t
    pub const m_nBuySize: usize = 0x38; // int32_t
    pub const m_nCost: usize = 0x3C; // int32_t
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
    pub const m_pFollowup: usize = 0x18; // ResponseFollowup*
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
    pub const m_iPriority: usize = 0x4C0; // int32_t
    pub const m_bEnabled: usize = 0x4C4; // bool
    pub const m_nType: usize = 0x4C8; // int32_t
}

pub mod SpawnPointCoopEnemy { // SpawnPoint
    pub const m_szWeaponsToGive: usize = 0x4D0; // CUtlSymbolLarge
    pub const m_szPlayerModelToUse: usize = 0x4D8; // CUtlSymbolLarge
    pub const m_nArmorToSpawnWith: usize = 0x4E0; // int32_t
    pub const m_nDefaultBehavior: usize = 0x4E4; // SpawnPointCoopEnemy::BotDefaultBehavior_t
    pub const m_nBotDifficulty: usize = 0x4E8; // int32_t
    pub const m_bIsAgressive: usize = 0x4EC; // bool
    pub const m_bStartAsleep: usize = 0x4ED; // bool
    pub const m_flHideRadius: usize = 0x4F0; // float
    pub const m_szBehaviorTreeFile: usize = 0x500; // CUtlSymbolLarge
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
    pub const m_hFn: usize = 0x8; // HSCRIPT
    pub const m_nContext: usize = 0x10; // CUtlStringToken
    pub const m_nNextThinkTick: usize = 0x14; // GameTick_t
    pub const m_nLastThinkTick: usize = 0x18; // GameTick_t
}