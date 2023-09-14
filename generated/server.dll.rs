#![allow(non_snake_case, non_upper_case_globals)]

pub mod ActiveModelConfig_t {
    pub const m_Handle: usize = 0x28;
    pub const m_Name: usize = 0x30;
    pub const m_AssociatedEntities: usize = 0x38;
    pub const m_AssociatedEntityNames: usize = 0x50;
}

pub mod AmmoIndex_t {
    pub const m_Value: usize = 0x0;
}

pub mod AmmoTypeInfo_t {
    pub const m_nMaxCarry: usize = 0x10;
    pub const m_nSplashSize: usize = 0x1c;
    pub const m_nFlags: usize = 0x24;
    pub const m_flMass: usize = 0x28;
    pub const m_flSpeed: usize = 0x2c;
}

pub mod AnimationUpdateListHandle_t {
    pub const m_Value: usize = 0x0;
}

pub mod CAISound {
    pub const m_iSoundType: usize = 0x4b0;
    pub const m_iSoundContext: usize = 0x4b4;
    pub const m_iVolume: usize = 0x4b8;
    pub const m_iSoundIndex: usize = 0x4bc;
    pub const m_flDuration: usize = 0x4c0;
    pub const m_iszProxyEntityName: usize = 0x4c8;
}

pub mod CAI_ChangeHintGroup {
    pub const m_iSearchType: usize = 0x4b0;
    pub const m_strSearchName: usize = 0x4b8;
    pub const m_strNewHintGroup: usize = 0x4c0;
    pub const m_flRadius: usize = 0x4c8;
}

pub mod CAI_ChangeTarget {
    pub const m_iszNewTarget: usize = 0x4b0;
}

pub mod CAI_Expresser {
    pub const m_flStopTalkTime: usize = 0x38;
    pub const m_flStopTalkTimeWithoutDelay: usize = 0x3c;
    pub const m_flBlockedTalkTime: usize = 0x40;
    pub const m_voicePitch: usize = 0x44;
    pub const m_flLastTimeAcceptedSpeak: usize = 0x48;
    pub const m_bAllowSpeakingInterrupts: usize = 0x4c;
    pub const m_bConsiderSceneInvolvementAsSpeech: usize = 0x4d;
    pub const m_nLastSpokenPriority: usize = 0x50;
    pub const m_pOuter: usize = 0x58;
}

pub mod CAI_ExpresserWithFollowup {
    pub const m_pPostponedFollowup: usize = 0x60;
}

pub mod CAmbientGeneric {
    pub const m_radius: usize = 0x4b0;
    pub const m_flMaxRadius: usize = 0x4b4;
    pub const m_iSoundLevel: usize = 0x4b8;
    pub const m_dpv: usize = 0x4bc;
    pub const m_fActive: usize = 0x520;
    pub const m_fLooping: usize = 0x521;
    pub const m_iszSound: usize = 0x528;
    pub const m_sSourceEntName: usize = 0x530;
    pub const m_hSoundSource: usize = 0x538;
    pub const m_nSoundSourceEntIndex: usize = 0x53c;
}

pub mod CAnimGraphNetworkedVariables {
    pub const m_PredNetBoolVariables: usize = 0x8;
    pub const m_PredNetByteVariables: usize = 0x20;
    pub const m_PredNetUInt16Variables: usize = 0x38;
    pub const m_PredNetIntVariables: usize = 0x50;
    pub const m_PredNetUInt32Variables: usize = 0x68;
    pub const m_PredNetUInt64Variables: usize = 0x80;
    pub const m_PredNetFloatVariables: usize = 0x98;
    pub const m_PredNetVectorVariables: usize = 0xb0;
    pub const m_PredNetQuaternionVariables: usize = 0xc8;
    pub const m_OwnerOnlyPredNetBoolVariables: usize = 0xe0;
    pub const m_OwnerOnlyPredNetByteVariables: usize = 0xf8;
    pub const m_OwnerOnlyPredNetUInt16Variables: usize = 0x110;
    pub const m_OwnerOnlyPredNetIntVariables: usize = 0x128;
    pub const m_OwnerOnlyPredNetUInt32Variables: usize = 0x140;
    pub const m_OwnerOnlyPredNetUInt64Variables: usize = 0x158;
    pub const m_OwnerOnlyPredNetFloatVariables: usize = 0x170;
    pub const m_OwnerOnlyPredNetVectorVariables: usize = 0x188;
    pub const m_OwnerOnlyPredNetQuaternionVariables: usize = 0x1a0;
    pub const m_nBoolVariablesCount: usize = 0x1b8;
    pub const m_nOwnerOnlyBoolVariablesCount: usize = 0x1bc;
    pub const m_nRandomSeedOffset: usize = 0x1c0;
    pub const m_flLastTeleportTime: usize = 0x1c4;
}

pub mod CAnimGraphTagRef {
    pub const m_nTagIndex: usize = 0x0;
    pub const m_tagName: usize = 0x10;
}

pub mod CAttributeContainer {
    pub const m_Item: usize = 0x50;
}

pub mod CAttributeList {
    pub const m_Attributes: usize = 0x8;
    pub const m_pManager: usize = 0x58;
}

pub mod CAttributeManager {
    pub const m_Providers: usize = 0x8;
    pub const m_iReapplyProvisionParity: usize = 0x20;
    pub const m_hOuter: usize = 0x24;
    pub const m_bPreventLoopback: usize = 0x28;
    pub const m_ProviderType: usize = 0x2c;
    pub const m_CachedResults: usize = 0x30;
}

pub mod CAttributeManager_cached_attribute_float_t {
    pub const flIn: usize = 0x0;
    pub const iAttribHook: usize = 0x8;
    pub const flOut: usize = 0x10;
}

pub mod CBRC4Target {
    pub const m_hPlayerThatActivatedMe: usize = 0x8b0;
    pub const m_bBrokenOpen: usize = 0x8b4;
    pub const m_flRadius: usize = 0x8b8;
}

pub mod CBarnLight {
    pub const m_bEnabled: usize = 0x700;
    pub const m_nColorMode: usize = 0x704;
    pub const m_Color: usize = 0x708;
    pub const m_flColorTemperature: usize = 0x70c;
    pub const m_flBrightness: usize = 0x710;
    pub const m_flBrightnessScale: usize = 0x714;
    pub const m_nDirectLight: usize = 0x718;
    pub const m_nBakedShadowIndex: usize = 0x71c;
    pub const m_nLuminaireShape: usize = 0x720;
    pub const m_flLuminaireSize: usize = 0x724;
    pub const m_flLuminaireAnisotropy: usize = 0x728;
    pub const m_LightStyleString: usize = 0x730;
    pub const m_flLightStyleStartTime: usize = 0x738;
    pub const m_QueuedLightStyleStrings: usize = 0x740;
    pub const m_LightStyleEvents: usize = 0x758;
    pub const m_LightStyleTargets: usize = 0x770;
    pub const m_StyleEvent: usize = 0x788;
    pub const m_StyleRadianceVar: usize = 0x828;
    pub const m_StyleVar: usize = 0x830;
    pub const m_hLightCookie: usize = 0x858;
    pub const m_flShape: usize = 0x860;
    pub const m_flSoftX: usize = 0x864;
    pub const m_flSoftY: usize = 0x868;
    pub const m_flSkirt: usize = 0x86c;
    pub const m_flSkirtNear: usize = 0x870;
    pub const m_vSizeParams: usize = 0x874;
    pub const m_flRange: usize = 0x880;
    pub const m_vShear: usize = 0x884;
    pub const m_nBakeSpecularToCubemaps: usize = 0x890;
    pub const m_vBakeSpecularToCubemapsSize: usize = 0x894;
    pub const m_nCastShadows: usize = 0x8a0;
    pub const m_nShadowMapSize: usize = 0x8a4;
    pub const m_nShadowPriority: usize = 0x8a8;
    pub const m_bContactShadow: usize = 0x8ac;
    pub const m_nBounceLight: usize = 0x8b0;
    pub const m_flBounceScale: usize = 0x8b4;
    pub const m_flMinRoughness: usize = 0x8b8;
    pub const m_vAlternateColor: usize = 0x8bc;
    pub const m_fAlternateColorBrightness: usize = 0x8c8;
    pub const m_nFog: usize = 0x8cc;
    pub const m_flFogStrength: usize = 0x8d0;
    pub const m_nFogShadows: usize = 0x8d4;
    pub const m_flFogScale: usize = 0x8d8;
    pub const m_flFadeSizeStart: usize = 0x8dc;
    pub const m_flFadeSizeEnd: usize = 0x8e0;
    pub const m_flShadowFadeSizeStart: usize = 0x8e4;
    pub const m_flShadowFadeSizeEnd: usize = 0x8e8;
    pub const m_bPrecomputedFieldsValid: usize = 0x8ec;
    pub const m_vPrecomputedBoundsMins: usize = 0x8f0;
    pub const m_vPrecomputedBoundsMaxs: usize = 0x8fc;
    pub const m_vPrecomputedOBBOrigin: usize = 0x908;
    pub const m_vPrecomputedOBBAngles: usize = 0x914;
    pub const m_vPrecomputedOBBExtent: usize = 0x920;
    pub const m_bPvsModifyEntity: usize = 0x92c;
}

pub mod CBaseAnimGraph {
    pub const m_bInitiallyPopulateInterpHistory: usize = 0x700;
    pub const m_bShouldAnimateDuringGameplayPause: usize = 0x701;
    pub const m_pChoreoServices: usize = 0x708;
    pub const m_bAnimGraphUpdateEnabled: usize = 0x710;
    pub const m_flMaxSlopeDistance: usize = 0x714;
    pub const m_vLastSlopeCheckPos: usize = 0x718;
    pub const m_bAnimGraphDirty: usize = 0x724;
    pub const m_vecForce: usize = 0x728;
    pub const m_nForceBone: usize = 0x734;
    pub const m_pRagdollPose: usize = 0x748;
    pub const m_bClientRagdoll: usize = 0x750;
}

pub mod CBaseAnimGraphController {
    pub const m_baseLayer: usize = 0x18;
    pub const m_animGraphNetworkedVars: usize = 0x40;
    pub const m_bSequenceFinished: usize = 0x218;
    pub const m_flLastEventCycle: usize = 0x21c;
    pub const m_flLastEventAnimTime: usize = 0x220;
    pub const m_flPlaybackRate: usize = 0x224;
    pub const m_flPrevAnimTime: usize = 0x22c;
    pub const m_bClientSideAnimation: usize = 0x230;
    pub const m_bNetworkedAnimationInputsChanged: usize = 0x231;
    pub const m_nNewSequenceParity: usize = 0x234;
    pub const m_nResetEventsParity: usize = 0x238;
    pub const m_nAnimLoopMode: usize = 0x23c;
    pub const m_hAnimationUpdate: usize = 0x2dc;
}

pub mod CBaseButton {
    pub const m_angMoveEntitySpace: usize = 0x780;
    pub const m_fStayPushed: usize = 0x78c;
    pub const m_fRotating: usize = 0x78d;
    pub const m_ls: usize = 0x790;
    pub const m_sUseSound: usize = 0x7b0;
    pub const m_sLockedSound: usize = 0x7b8;
    pub const m_sUnlockedSound: usize = 0x7c0;
    pub const m_bLocked: usize = 0x7c8;
    pub const m_bDisabled: usize = 0x7c9;
    pub const m_flUseLockedTime: usize = 0x7cc;
    pub const m_bSolidBsp: usize = 0x7d0;
    pub const m_OnDamaged: usize = 0x7d8;
    pub const m_OnPressed: usize = 0x800;
    pub const m_OnUseLocked: usize = 0x828;
    pub const m_OnIn: usize = 0x850;
    pub const m_OnOut: usize = 0x878;
    pub const m_nState: usize = 0x8a0;
    pub const m_hConstraint: usize = 0x8a4;
    pub const m_hConstraintParent: usize = 0x8a8;
    pub const m_bForceNpcExclude: usize = 0x8ac;
    pub const m_sGlowEntity: usize = 0x8b0;
    pub const m_glowEntity: usize = 0x8b8;
    pub const m_usable: usize = 0x8bc;
    pub const m_szDisplayText: usize = 0x8c0;
}

pub mod CBaseCSGrenade {
    pub const m_bRedraw: usize = 0xdf0;
    pub const m_bIsHeldByPlayer: usize = 0xdf1;
    pub const m_bPinPulled: usize = 0xdf2;
    pub const m_bJumpThrow: usize = 0xdf3;
    pub const m_eThrowStatus: usize = 0xdf4;
    pub const m_fThrowTime: usize = 0xdf8;
    pub const m_flThrowStrength: usize = 0xdfc;
    pub const m_flThrowStrengthApproach: usize = 0xe00;
    pub const m_fDropTime: usize = 0xe04;
}

pub mod CBaseCSGrenadeProjectile {
    pub const m_vInitialVelocity: usize = 0x9c0;
    pub const m_nBounces: usize = 0x9cc;
    pub const m_nExplodeEffectIndex: usize = 0x9d0;
    pub const m_nExplodeEffectTickBegin: usize = 0x9d8;
    pub const m_vecExplodeEffectOrigin: usize = 0x9dc;
    pub const m_unOGSExtraFlags: usize = 0x9e8;
    pub const m_bDetonationRecorded: usize = 0x9e9;
    pub const m_flDetonateTime: usize = 0x9ec;
    pub const m_nItemIndex: usize = 0x9f0;
    pub const m_vecOriginalSpawnLocation: usize = 0x9f4;
    pub const m_flLastBounceSoundTime: usize = 0xa00;
    pub const m_vecGrenadeSpin: usize = 0xa04;
    pub const m_vecLastHitSurfaceNormal: usize = 0xa10;
    pub const m_nTicksAtZeroVelocity: usize = 0xa1c;
}

pub mod CBaseClientUIEntity {
    pub const m_bEnabled: usize = 0x700;
    pub const m_DialogXMLName: usize = 0x708;
    pub const m_PanelClassName: usize = 0x710;
    pub const m_PanelID: usize = 0x718;
    pub const m_CustomOutput0: usize = 0x720;
    pub const m_CustomOutput1: usize = 0x748;
    pub const m_CustomOutput2: usize = 0x770;
    pub const m_CustomOutput3: usize = 0x798;
    pub const m_CustomOutput4: usize = 0x7c0;
    pub const m_CustomOutput5: usize = 0x7e8;
    pub const m_CustomOutput6: usize = 0x810;
    pub const m_CustomOutput7: usize = 0x838;
    pub const m_CustomOutput8: usize = 0x860;
    pub const m_CustomOutput9: usize = 0x888;
}

pub mod CBaseCombatCharacter {
    pub const m_bForceServerRagdoll: usize = 0x918;
    pub const m_hMyWearables: usize = 0x920;
    pub const m_flFieldOfView: usize = 0x938;
    pub const m_impactEnergyScale: usize = 0x93c;
    pub const m_LastHitGroup: usize = 0x940;
    pub const m_bApplyStressDamage: usize = 0x944;
    pub const m_bloodColor: usize = 0x948;
    pub const m_navMeshID: usize = 0x9a8;
    pub const m_iDamageCount: usize = 0x9ac;
    pub const m_pVecRelationships: usize = 0x9b0;
    pub const m_strRelationships: usize = 0x9b8;
    pub const m_eHull: usize = 0x9c0;
    pub const m_nNavHullIdx: usize = 0x9c4;
}

pub mod CBaseDMStart {
    pub const m_Master: usize = 0x4b0;
}

pub mod CBaseDoor {
    pub const m_angMoveEntitySpace: usize = 0x790;
    pub const m_vecMoveDirParentSpace: usize = 0x79c;
    pub const m_ls: usize = 0x7a8;
    pub const m_bForceClosed: usize = 0x7c8;
    pub const m_bDoorGroup: usize = 0x7c9;
    pub const m_bLocked: usize = 0x7ca;
    pub const m_bIgnoreDebris: usize = 0x7cb;
    pub const m_eSpawnPosition: usize = 0x7cc;
    pub const m_flBlockDamage: usize = 0x7d0;
    pub const m_NoiseMoving: usize = 0x7d8;
    pub const m_NoiseArrived: usize = 0x7e0;
    pub const m_NoiseMovingClosed: usize = 0x7e8;
    pub const m_NoiseArrivedClosed: usize = 0x7f0;
    pub const m_ChainTarget: usize = 0x7f8;
    pub const m_OnBlockedClosing: usize = 0x800;
    pub const m_OnBlockedOpening: usize = 0x828;
    pub const m_OnUnblockedClosing: usize = 0x850;
    pub const m_OnUnblockedOpening: usize = 0x878;
    pub const m_OnFullyClosed: usize = 0x8a0;
    pub const m_OnFullyOpen: usize = 0x8c8;
    pub const m_OnClose: usize = 0x8f0;
    pub const m_OnOpen: usize = 0x918;
    pub const m_OnLockedUse: usize = 0x940;
    pub const m_bLoopMoveSound: usize = 0x968;
    pub const m_bCreateNavObstacle: usize = 0x980;
    pub const m_isChaining: usize = 0x981;
    pub const m_bIsUsable: usize = 0x982;
}

pub mod CBaseEntity {
    pub const m_CBodyComponent: usize = 0x30;
    pub const m_NetworkTransmitComponent: usize = 0x38;
    pub const m_aThinkFunctions: usize = 0x228;
    pub const m_iCurrentThinkContext: usize = 0x240;
    pub const m_nLastThinkTick: usize = 0x244;
    pub const m_isSteadyState: usize = 0x250;
    pub const m_lastNetworkChange: usize = 0x258;
    pub const m_ResponseContexts: usize = 0x268;
    pub const m_iszResponseContext: usize = 0x280;
    pub const m_iHealth: usize = 0x2a8;
    pub const m_iMaxHealth: usize = 0x2ac;
    pub const m_lifeState: usize = 0x2b0;
    pub const m_flDamageAccumulator: usize = 0x2b4;
    pub const m_bTakesDamage: usize = 0x2b8;
    pub const m_nTakeDamageFlags: usize = 0x2bc;
    pub const m_MoveCollide: usize = 0x2c1;
    pub const m_MoveType: usize = 0x2c2;
    pub const m_nWaterTouch: usize = 0x2c3;
    pub const m_nSlimeTouch: usize = 0x2c4;
    pub const m_bRestoreInHierarchy: usize = 0x2c5;
    pub const m_target: usize = 0x2c8;
    pub const m_flMoveDoneTime: usize = 0x2d0;
    pub const m_hDamageFilter: usize = 0x2d4;
    pub const m_iszDamageFilterName: usize = 0x2d8;
    pub const m_nSubclassID: usize = 0x2e0;
    pub const m_flAnimTime: usize = 0x2f0;
    pub const m_flSimulationTime: usize = 0x2f4;
    pub const m_flCreateTime: usize = 0x2f8;
    pub const m_bClientSideRagdoll: usize = 0x2fc;
    pub const m_ubInterpolationFrame: usize = 0x2fd;
    pub const m_vPrevVPhysicsUpdatePos: usize = 0x300;
    pub const m_iTeamNum: usize = 0x30c;
    pub const m_iGlobalname: usize = 0x310;
    pub const m_iSentToClients: usize = 0x318;
    pub const m_flSpeed: usize = 0x31c;
    pub const m_sUniqueHammerID: usize = 0x320;
    pub const m_spawnflags: usize = 0x328;
    pub const m_nNextThinkTick: usize = 0x32c;
    pub const m_nSimulationTick: usize = 0x330;
    pub const m_OnKilled: usize = 0x338;
    pub const m_fFlags: usize = 0x360;
    pub const m_vecAbsVelocity: usize = 0x364;
    pub const m_vecVelocity: usize = 0x370;
    pub const m_vecBaseVelocity: usize = 0x3a0;
    pub const m_nPushEnumCount: usize = 0x3ac;
    pub const m_pCollision: usize = 0x3b0;
    pub const m_hEffectEntity: usize = 0x3b8;
    pub const m_hOwnerEntity: usize = 0x3bc;
    pub const m_fEffects: usize = 0x3c0;
    pub const m_hGroundEntity: usize = 0x3c4;
    pub const m_flFriction: usize = 0x3c8;
    pub const m_flElasticity: usize = 0x3cc;
    pub const m_flGravityScale: usize = 0x3d0;
    pub const m_flTimeScale: usize = 0x3d4;
    pub const m_flWaterLevel: usize = 0x3d8;
    pub const m_bSimulatedEveryTick: usize = 0x3dc;
    pub const m_bAnimatedEveryTick: usize = 0x3dd;
    pub const m_bDisableLowViolence: usize = 0x3de;
    pub const m_nWaterType: usize = 0x3df;
    pub const m_iEFlags: usize = 0x3e0;
    pub const m_OnUser1: usize = 0x3e8;
    pub const m_OnUser2: usize = 0x410;
    pub const m_OnUser3: usize = 0x438;
    pub const m_OnUser4: usize = 0x460;
    pub const m_iInitialTeamNum: usize = 0x488;
    pub const m_flNavIgnoreUntilTime: usize = 0x48c;
    pub const m_vecAngVelocity: usize = 0x490;
    pub const m_bNetworkQuantizeOriginAndAngles: usize = 0x49c;
    pub const m_bLagCompensate: usize = 0x49d;
    pub const m_flOverriddenFriction: usize = 0x4a0;
    pub const m_pBlocker: usize = 0x4a4;
    pub const m_flLocalTime: usize = 0x4a8;
    pub const m_flVPhysicsUpdateLocalTime: usize = 0x4ac;
}

pub mod CBaseFilter {
    pub const m_bNegated: usize = 0x4b0;
    pub const m_OnPass: usize = 0x4b8;
    pub const m_OnFail: usize = 0x4e0;
}

pub mod CBaseFire {
    pub const m_flScale: usize = 0x4b0;
    pub const m_flStartScale: usize = 0x4b4;
    pub const m_flScaleTime: usize = 0x4b8;
    pub const m_nFlags: usize = 0x4bc;
}

pub mod CBaseFlex {
    pub const m_flexWeight: usize = 0x888;
    pub const m_vLookTargetPosition: usize = 0x8a0;
    pub const m_blinktoggle: usize = 0x8ac;
    pub const m_flAllowResponsesEndTime: usize = 0x900;
    pub const m_flLastFlexAnimationTime: usize = 0x904;
    pub const m_nNextSceneEventId: usize = 0x908;
    pub const m_bUpdateLayerPriorities: usize = 0x90c;
}

pub mod CBaseGrenade {
    pub const m_OnPlayerPickup: usize = 0x920;
    pub const m_OnExplode: usize = 0x948;
    pub const m_bHasWarnedAI: usize = 0x970;
    pub const m_bIsSmokeGrenade: usize = 0x971;
    pub const m_bIsLive: usize = 0x972;
    pub const m_DmgRadius: usize = 0x974;
    pub const m_flDetonateTime: usize = 0x978;
    pub const m_flWarnAITime: usize = 0x97c;
    pub const m_flDamage: usize = 0x980;
    pub const m_iszBounceSound: usize = 0x988;
    pub const m_ExplosionSound: usize = 0x990;
    pub const m_hThrower: usize = 0x99c;
    pub const m_flNextAttack: usize = 0x9b8;
    pub const m_hOriginalThrower: usize = 0x9bc;
}

pub mod CBaseIssue {
    pub const m_szTypeString: usize = 0x20;
    pub const m_szDetailsString: usize = 0x60;
    pub const m_iNumYesVotes: usize = 0x164;
    pub const m_iNumNoVotes: usize = 0x168;
    pub const m_iNumPotentialVotes: usize = 0x16c;
    pub const m_pVoteController: usize = 0x170;
}

pub mod CBaseModelEntity {
    pub const m_CRenderComponent: usize = 0x4b0;
    pub const m_CHitboxComponent: usize = 0x4b8;
    pub const m_flDissolveStartTime: usize = 0x4e0;
    pub const m_OnIgnite: usize = 0x4e8;
    pub const m_nRenderMode: usize = 0x510;
    pub const m_nRenderFX: usize = 0x511;
    pub const m_bAllowFadeInView: usize = 0x512;
    pub const m_clrRender: usize = 0x513;
    pub const m_vecRenderAttributes: usize = 0x518;
    pub const m_LightGroup: usize = 0x568;
    pub const m_bRenderToCubemaps: usize = 0x56c;
    pub const m_Collision: usize = 0x570;
    pub const m_Glow: usize = 0x620;
    pub const m_flGlowBackfaceMult: usize = 0x678;
    pub const m_fadeMinDist: usize = 0x67c;
    pub const m_fadeMaxDist: usize = 0x680;
    pub const m_flFadeScale: usize = 0x684;
    pub const m_flShadowStrength: usize = 0x688;
    pub const m_nObjectCulling: usize = 0x68c;
    pub const m_nAddDecal: usize = 0x690;
    pub const m_vDecalPosition: usize = 0x694;
    pub const m_vDecalForwardAxis: usize = 0x6a0;
    pub const m_flDecalHealBloodRate: usize = 0x6ac;
    pub const m_flDecalHealHeightRate: usize = 0x6b0;
    pub const m_ConfigEntitiesToPropagateMaterialDecalsTo: usize = 0x6b8;
    pub const m_vecViewOffset: usize = 0x6d0;
}

pub mod CBaseMoveBehavior {
    pub const m_iPositionInterpolator: usize = 0x510;
    pub const m_iRotationInterpolator: usize = 0x514;
    pub const m_flAnimStartTime: usize = 0x518;
    pub const m_flAnimEndTime: usize = 0x51c;
    pub const m_flAverageSpeedAcrossFrame: usize = 0x520;
    pub const m_pCurrentKeyFrame: usize = 0x528;
    pub const m_pTargetKeyFrame: usize = 0x530;
    pub const m_pPreKeyFrame: usize = 0x538;
    pub const m_pPostKeyFrame: usize = 0x540;
    pub const m_flTimeIntoFrame: usize = 0x548;
    pub const m_iDirection: usize = 0x54c;
}

pub mod CBasePlatTrain {
    pub const m_NoiseMoving: usize = 0x780;
    pub const m_NoiseArrived: usize = 0x788;
    pub const m_volume: usize = 0x798;
    pub const m_flTWidth: usize = 0x79c;
    pub const m_flTLength: usize = 0x7a0;
}

pub mod CBasePlayerController {
    pub const m_nInButtonsWhichAreToggles: usize = 0x4b8;
    pub const m_nTickBase: usize = 0x4c0;
    pub const m_hPawn: usize = 0x4f0;
    pub const m_nSplitScreenSlot: usize = 0x4f4;
    pub const m_hSplitOwner: usize = 0x4f8;
    pub const m_hSplitScreenPlayers: usize = 0x500;
    pub const m_bIsHLTV: usize = 0x518;
    pub const m_iConnected: usize = 0x51c;
    pub const m_iszPlayerName: usize = 0x520;
    pub const m_szNetworkIDString: usize = 0x5a0;
    pub const m_fLerpTime: usize = 0x5a8;
    pub const m_bLagCompensation: usize = 0x5ac;
    pub const m_bPredict: usize = 0x5ad;
    pub const m_bAutoKickDisabled: usize = 0x5ae;
    pub const m_bIsLowViolence: usize = 0x5af;
    pub const m_bGamePaused: usize = 0x5b0;
    pub const m_nHighestCommandNumberReceived: usize = 0x628;
    pub const m_nUsecTimestampLastUserCmdReceived: usize = 0x630;
    pub const m_iIgnoreGlobalChat: usize = 0x648;
    pub const m_flLastPlayerTalkTime: usize = 0x64c;
    pub const m_flLastEntitySteadyState: usize = 0x650;
    pub const m_nAvailableEntitySteadyState: usize = 0x654;
    pub const m_bHasAnySteadyStateEnts: usize = 0x658;
    pub const m_steamID: usize = 0x668;
    pub const m_iDesiredFOV: usize = 0x670;
}

pub mod CBasePlayerPawn {
    pub const m_pWeaponServices: usize = 0x9c8;
    pub const m_pItemServices: usize = 0x9d0;
    pub const m_pAutoaimServices: usize = 0x9d8;
    pub const m_pObserverServices: usize = 0x9e0;
    pub const m_pWaterServices: usize = 0x9e8;
    pub const m_pUseServices: usize = 0x9f0;
    pub const m_pFlashlightServices: usize = 0x9f8;
    pub const m_pCameraServices: usize = 0xa00;
    pub const m_pMovementServices: usize = 0xa08;
    pub const m_ServerViewAngleChanges: usize = 0xa18;
    pub const m_nHighestGeneratedServerViewAngleChangeIndex: usize = 0xa68;
    pub const v_angle: usize = 0xa6c;
    pub const v_anglePrevious: usize = 0xa78;
    pub const m_iHideHUD: usize = 0xa84;
    pub const m_skybox3d: usize = 0xa88;
    pub const m_fTimeLastHurt: usize = 0xb18;
    pub const m_flDeathTime: usize = 0xb1c;
    pub const m_fNextSuicideTime: usize = 0xb20;
    pub const m_fInitHUD: usize = 0xb24;
    pub const m_pExpresser: usize = 0xb28;
    pub const m_hController: usize = 0xb30;
    pub const m_fHltvReplayDelay: usize = 0xb38;
    pub const m_fHltvReplayEnd: usize = 0xb3c;
    pub const m_iHltvReplayEntity: usize = 0xb40;
}

pub mod CBasePlayerVData {
    pub const m_sModelName: usize = 0x28;
    pub const m_flHeadDamageMultiplier: usize = 0x108;
    pub const m_flChestDamageMultiplier: usize = 0x118;
    pub const m_flStomachDamageMultiplier: usize = 0x128;
    pub const m_flArmDamageMultiplier: usize = 0x138;
    pub const m_flLegDamageMultiplier: usize = 0x148;
    pub const m_flHoldBreathTime: usize = 0x158;
    pub const m_flDrowningDamageInterval: usize = 0x15c;
    pub const m_nDrowningDamageInitial: usize = 0x160;
    pub const m_nDrowningDamageMax: usize = 0x164;
    pub const m_nWaterSpeed: usize = 0x168;
    pub const m_flUseRange: usize = 0x16c;
    pub const m_flUseAngleTolerance: usize = 0x170;
    pub const m_flCrouchTime: usize = 0x174;
}

pub mod CBasePlayerWeapon {
    pub const m_nNextPrimaryAttackTick: usize = 0xc10;
    pub const m_flNextPrimaryAttackTickRatio: usize = 0xc14;
    pub const m_nNextSecondaryAttackTick: usize = 0xc18;
    pub const m_flNextSecondaryAttackTickRatio: usize = 0xc1c;
    pub const m_iClip1: usize = 0xc20;
    pub const m_iClip2: usize = 0xc24;
    pub const m_pReserveAmmo: usize = 0xc28;
    pub const m_OnPlayerUse: usize = 0xc30;
}

pub mod CBasePlayerWeaponVData {
    pub const m_szWorldModel: usize = 0x28;
    pub const m_bBuiltRightHanded: usize = 0x108;
    pub const m_bAllowFlipping: usize = 0x109;
    pub const m_bIsFullAuto: usize = 0x10a;
    pub const m_nNumBullets: usize = 0x10c;
    pub const m_sMuzzleAttachment: usize = 0x110;
    pub const m_szMuzzleFlashParticle: usize = 0x118;
    pub const m_iFlags: usize = 0x1f8;
    pub const m_nPrimaryAmmoType: usize = 0x1f9;
    pub const m_nSecondaryAmmoType: usize = 0x1fa;
    pub const m_iMaxClip1: usize = 0x1fc;
    pub const m_iMaxClip2: usize = 0x200;
    pub const m_iDefaultClip1: usize = 0x204;
    pub const m_iDefaultClip2: usize = 0x208;
    pub const m_iWeight: usize = 0x20c;
    pub const m_bAutoSwitchTo: usize = 0x210;
    pub const m_bAutoSwitchFrom: usize = 0x211;
    pub const m_iRumbleEffect: usize = 0x214;
    pub const m_aShootSounds: usize = 0x218;
    pub const m_iSlot: usize = 0x238;
    pub const m_iPosition: usize = 0x23c;
}

pub mod CBaseProp {
    pub const m_bModelOverrodeBlockLOS: usize = 0x888;
    pub const m_iShapeType: usize = 0x88c;
    pub const m_bConformToCollisionBounds: usize = 0x890;
    pub const m_mPreferredCatchTransform: usize = 0x894;
}

pub mod CBasePropDoor {
    pub const m_flAutoReturnDelay: usize = 0xb10;
    pub const m_hDoorList: usize = 0xb18;
    pub const m_nHardwareType: usize = 0xb30;
    pub const m_bNeedsHardware: usize = 0xb34;
    pub const m_eDoorState: usize = 0xb38;
    pub const m_bLocked: usize = 0xb3c;
    pub const m_closedPosition: usize = 0xb40;
    pub const m_closedAngles: usize = 0xb4c;
    pub const m_hBlocker: usize = 0xb58;
    pub const m_bFirstBlocked: usize = 0xb5c;
    pub const m_ls: usize = 0xb60;
    pub const m_bForceClosed: usize = 0xb80;
    pub const m_vecLatchWorldPosition: usize = 0xb84;
    pub const m_hActivator: usize = 0xb90;
    pub const m_SoundMoving: usize = 0xba0;
    pub const m_SoundOpen: usize = 0xba8;
    pub const m_SoundClose: usize = 0xbb0;
    pub const m_SoundLock: usize = 0xbb8;
    pub const m_SoundUnlock: usize = 0xbc0;
    pub const m_SoundLatch: usize = 0xbc8;
    pub const m_SoundPound: usize = 0xbd0;
    pub const m_SoundJiggle: usize = 0xbd8;
    pub const m_SoundLockedAnim: usize = 0xbe0;
    pub const m_numCloseAttempts: usize = 0xbe8;
    pub const m_nPhysicsMaterial: usize = 0xbec;
    pub const m_SlaveName: usize = 0xbf0;
    pub const m_hMaster: usize = 0xbf8;
    pub const m_OnBlockedClosing: usize = 0xc00;
    pub const m_OnBlockedOpening: usize = 0xc28;
    pub const m_OnUnblockedClosing: usize = 0xc50;
    pub const m_OnUnblockedOpening: usize = 0xc78;
    pub const m_OnFullyClosed: usize = 0xca0;
    pub const m_OnFullyOpen: usize = 0xcc8;
    pub const m_OnClose: usize = 0xcf0;
    pub const m_OnOpen: usize = 0xd18;
    pub const m_OnLockedUse: usize = 0xd40;
    pub const m_OnAjarOpen: usize = 0xd68;
}

pub mod CBaseToggle {
    pub const m_toggle_state: usize = 0x700;
    pub const m_flMoveDistance: usize = 0x704;
    pub const m_flWait: usize = 0x708;
    pub const m_flLip: usize = 0x70c;
    pub const m_bAlwaysFireBlockedOutputs: usize = 0x710;
    pub const m_vecPosition1: usize = 0x714;
    pub const m_vecPosition2: usize = 0x720;
    pub const m_vecMoveAng: usize = 0x72c;
    pub const m_vecAngle1: usize = 0x738;
    pub const m_vecAngle2: usize = 0x744;
    pub const m_flHeight: usize = 0x750;
    pub const m_hActivator: usize = 0x754;
    pub const m_vecFinalDest: usize = 0x758;
    pub const m_vecFinalAngle: usize = 0x764;
    pub const m_movementType: usize = 0x770;
    pub const m_sMaster: usize = 0x778;
}

pub mod CBaseTrigger {
    pub const m_bDisabled: usize = 0x780;
    pub const m_iFilterName: usize = 0x788;
    pub const m_hFilter: usize = 0x790;
    pub const m_OnStartTouch: usize = 0x798;
    pub const m_OnStartTouchAll: usize = 0x7c0;
    pub const m_OnEndTouch: usize = 0x7e8;
    pub const m_OnEndTouchAll: usize = 0x810;
    pub const m_OnTouching: usize = 0x838;
    pub const m_OnNotTouching: usize = 0x860;
    pub const m_hTouchingEntities: usize = 0x888;
    pub const m_bClientSidePredicted: usize = 0x8a0;
}

pub mod CBaseViewModel {
    pub const m_vecLastFacing: usize = 0x890;
    pub const m_nViewModelIndex: usize = 0x89c;
    pub const m_nAnimationParity: usize = 0x8a0;
    pub const m_flAnimationStartTime: usize = 0x8a4;
    pub const m_hWeapon: usize = 0x8a8;
    pub const m_sVMName: usize = 0x8b0;
    pub const m_sAnimationPrefix: usize = 0x8b8;
    pub const m_hOldLayerSequence: usize = 0x8c0;
    pub const m_oldLayer: usize = 0x8c4;
    pub const m_oldLayerStartTime: usize = 0x8c8;
    pub const m_hControlPanel: usize = 0x8cc;
}

pub mod CBeam {
    pub const m_flFrameRate: usize = 0x700;
    pub const m_flHDRColorScale: usize = 0x704;
    pub const m_flFireTime: usize = 0x708;
    pub const m_flDamage: usize = 0x70c;
    pub const m_nNumBeamEnts: usize = 0x710;
    pub const m_hBaseMaterial: usize = 0x718;
    pub const m_nHaloIndex: usize = 0x720;
    pub const m_nBeamType: usize = 0x728;
    pub const m_nBeamFlags: usize = 0x72c;
    pub const m_hAttachEntity: usize = 0x730;
    pub const m_nAttachIndex: usize = 0x758;
    pub const m_fWidth: usize = 0x764;
    pub const m_fEndWidth: usize = 0x768;
    pub const m_fFadeLength: usize = 0x76c;
    pub const m_fHaloScale: usize = 0x770;
    pub const m_fAmplitude: usize = 0x774;
    pub const m_fStartFrame: usize = 0x778;
    pub const m_fSpeed: usize = 0x77c;
    pub const m_flFrame: usize = 0x780;
    pub const m_nClipStyle: usize = 0x784;
    pub const m_bTurnedOff: usize = 0x788;
    pub const m_vecEndPos: usize = 0x78c;
    pub const m_hEndEntity: usize = 0x798;
    pub const m_nDissolveType: usize = 0x79c;
}

pub mod CBlood {
    pub const m_vecSprayAngles: usize = 0x4b0;
    pub const m_vecSprayDir: usize = 0x4bc;
    pub const m_flAmount: usize = 0x4c8;
    pub const m_Color: usize = 0x4cc;
}

pub mod CBodyComponent {
    pub const m_pSceneNode: usize = 0x8;
    pub const __m_pChainEntity: usize = 0x20;
}

pub mod CBodyComponentBaseAnimGraph {
    pub const m_animationController: usize = 0x470;
    pub const __m_pChainEntity: usize = 0x750;
}

pub mod CBodyComponentBaseModelEntity {
    pub const __m_pChainEntity: usize = 0x470;
}

pub mod CBodyComponentPoint {
    pub const m_sceneNode: usize = 0x50;
    pub const __m_pChainEntity: usize = 0x1a0;
}

pub mod CBodyComponentSkeletonInstance {
    pub const m_skeletonInstance: usize = 0x50;
    pub const __m_pChainEntity: usize = 0x440;
}

pub mod CBombTarget {
    pub const m_OnBombExplode: usize = 0x8a8;
    pub const m_OnBombPlanted: usize = 0x8d0;
    pub const m_OnBombDefused: usize = 0x8f8;
    pub const m_bIsBombSiteB: usize = 0x920;
    pub const m_bIsHeistBombTarget: usize = 0x921;
    pub const m_bBombPlantedHere: usize = 0x922;
    pub const m_szMountTarget: usize = 0x928;
    pub const m_hInstructorHint: usize = 0x930;
    pub const m_nBombSiteDesignation: usize = 0x934;
}

pub mod CBot {
    pub const m_pPlayer: usize = 0x10;
    pub const m_bHasSpawned: usize = 0x18;
    pub const m_id: usize = 0x1c;
    pub const m_isRunning: usize = 0x90;
    pub const m_isCrouching: usize = 0x91;
    pub const m_forwardSpeed: usize = 0x94;
    pub const m_leftSpeed: usize = 0x98;
    pub const m_verticalSpeed: usize = 0x9c;
    pub const m_buttonFlags: usize = 0xa0;
    pub const m_jumpTimestamp: usize = 0xa8;
    pub const m_viewForward: usize = 0xac;
    pub const m_postureStackIndex: usize = 0xc8;
}

pub mod CBreachChargeProjectile {
    pub const m_bShouldExplode: usize = 0x9c0;
    pub const m_weaponThatThrewMe: usize = 0x9c4;
    pub const m_nParentBoneIndex: usize = 0x9c8;
    pub const m_vecParentBonePos: usize = 0x9cc;
    pub const m_bDefused: usize = 0x9d8;
    pub const m_bUnstuckFromPlayer: usize = 0x9d9;
    pub const m_bResolvedParent: usize = 0x9da;
    pub const m_vecLastKnownValidPos: usize = 0x9dc;
    pub const m_hDesiredParent: usize = 0x9e8;
}

pub mod CBreakable {
    pub const m_Material: usize = 0x710;
    pub const m_hBreaker: usize = 0x714;
    pub const m_Explosion: usize = 0x718;
    pub const m_iszSpawnObject: usize = 0x720;
    pub const m_flPressureDelay: usize = 0x728;
    pub const m_iMinHealthDmg: usize = 0x72c;
    pub const m_iszPropData: usize = 0x730;
    pub const m_impactEnergyScale: usize = 0x738;
    pub const m_nOverrideBlockLOS: usize = 0x73c;
    pub const m_OnBreak: usize = 0x740;
    pub const m_OnHealthChanged: usize = 0x768;
    pub const m_flDmgModBullet: usize = 0x790;
    pub const m_flDmgModClub: usize = 0x794;
    pub const m_flDmgModExplosive: usize = 0x798;
    pub const m_flDmgModFire: usize = 0x79c;
    pub const m_iszPhysicsDamageTableName: usize = 0x7a0;
    pub const m_iszBasePropData: usize = 0x7a8;
    pub const m_iInteractions: usize = 0x7b0;
    pub const m_PerformanceMode: usize = 0x7b4;
    pub const m_hPhysicsAttacker: usize = 0x7b8;
    pub const m_flLastPhysicsInfluenceTime: usize = 0x7bc;
}

pub mod CBreakableProp {
    pub const m_OnBreak: usize = 0x8d8;
    pub const m_OnHealthChanged: usize = 0x900;
    pub const m_OnTakeDamage: usize = 0x928;
    pub const m_impactEnergyScale: usize = 0x950;
    pub const m_iMinHealthDmg: usize = 0x954;
    pub const m_preferredCarryAngles: usize = 0x958;
    pub const m_flPressureDelay: usize = 0x964;
    pub const m_hBreaker: usize = 0x968;
    pub const m_PerformanceMode: usize = 0x96c;
    pub const m_flDmgModBullet: usize = 0x970;
    pub const m_flDmgModClub: usize = 0x974;
    pub const m_flDmgModExplosive: usize = 0x978;
    pub const m_flDmgModFire: usize = 0x97c;
    pub const m_iszPhysicsDamageTableName: usize = 0x980;
    pub const m_iszBasePropData: usize = 0x988;
    pub const m_iInteractions: usize = 0x990;
    pub const m_flPreventDamageBeforeTime: usize = 0x994;
    pub const m_bHasBreakPiecesOrCommands: usize = 0x998;
    pub const m_explodeDamage: usize = 0x99c;
    pub const m_explodeRadius: usize = 0x9a0;
    pub const m_explosionDelay: usize = 0x9a8;
    pub const m_explosionBuildupSound: usize = 0x9b0;
    pub const m_explosionCustomEffect: usize = 0x9b8;
    pub const m_explosionCustomSound: usize = 0x9c0;
    pub const m_explosionModifier: usize = 0x9c8;
    pub const m_hPhysicsAttacker: usize = 0x9d0;
    pub const m_flLastPhysicsInfluenceTime: usize = 0x9d4;
    pub const m_bOriginalBlockLOS: usize = 0x9d8;
    pub const m_flDefaultFadeScale: usize = 0x9dc;
    pub const m_hLastAttacker: usize = 0x9e0;
    pub const m_hFlareEnt: usize = 0x9e4;
    pub const m_bUsePuntSound: usize = 0x9e8;
    pub const m_iszPuntSound: usize = 0x9f0;
    pub const m_noGhostCollision: usize = 0x9f8;
}

pub mod CBreakableStageHelper {
    pub const m_nCurrentStage: usize = 0x8;
    pub const m_nStageCount: usize = 0xc;
}

pub mod CBtActionAim {
    pub const m_szSensorInputKey: usize = 0x68;
    pub const m_szAimReadyKey: usize = 0x80;
    pub const m_flZoomCooldownTimestamp: usize = 0x88;
    pub const m_bDoneAiming: usize = 0x8c;
    pub const m_flLerpStartTime: usize = 0x90;
    pub const m_flNextLookTargetLerpTime: usize = 0x94;
    pub const m_flPenaltyReductionRatio: usize = 0x98;
    pub const m_NextLookTarget: usize = 0x9c;
    pub const m_AimTimer: usize = 0xa8;
    pub const m_SniperHoldTimer: usize = 0xc0;
    pub const m_FocusIntervalTimer: usize = 0xd8;
    pub const m_bAcquired: usize = 0xf0;
}

pub mod CBtActionCombatPositioning {
    pub const m_szSensorInputKey: usize = 0x68;
    pub const m_szIsAttackingKey: usize = 0x80;
    pub const m_ActionTimer: usize = 0x88;
    pub const m_bCrouching: usize = 0xa0;
}

pub mod CBtActionMoveTo {
    pub const m_szDestinationInputKey: usize = 0x60;
    pub const m_szHidingSpotInputKey: usize = 0x68;
    pub const m_szThreatInputKey: usize = 0x70;
    pub const m_vecDestination: usize = 0x78;
    pub const m_bAutoLookAdjust: usize = 0x84;
    pub const m_bComputePath: usize = 0x85;
    pub const m_flDamagingAreasPenaltyCost: usize = 0x88;
    pub const m_CheckApproximateCornersTimer: usize = 0x90;
    pub const m_CheckHighPriorityItem: usize = 0xa8;
    pub const m_RepathTimer: usize = 0xc0;
    pub const m_flArrivalEpsilon: usize = 0xd8;
    pub const m_flAdditionalArrivalEpsilon2D: usize = 0xdc;
    pub const m_flHidingSpotCheckDistanceThreshold: usize = 0xe0;
    pub const m_flNearestAreaDistanceThreshold: usize = 0xe4;
}

pub mod CBtActionParachutePositioning {
    pub const m_ActionTimer: usize = 0x58;
}

pub mod CBtNodeCondition {
    pub const m_bNegated: usize = 0x58;
}

pub mod CBtNodeConditionInactive {
    pub const m_flRoundStartThresholdSeconds: usize = 0x78;
    pub const m_flSensorInactivityThresholdSeconds: usize = 0x7c;
    pub const m_SensorInactivityTimer: usize = 0x80;
}

pub mod CBubbling {
    pub const m_density: usize = 0x700;
    pub const m_frequency: usize = 0x704;
    pub const m_state: usize = 0x708;
}

pub mod CBumpMineProjectile {
    pub const m_bShouldExplode: usize = 0x9c0;
    pub const m_nParentBoneIndex: usize = 0x9c4;
    pub const m_vecParentBonePos: usize = 0x9c8;
    pub const m_bArmed: usize = 0x9d4;
    pub const m_bDefused: usize = 0x9d5;
    pub const m_bUnstuckFromPlayer: usize = 0x9d6;
    pub const m_vecTargetedObjects: usize = 0x9d8;
    pub const m_bResolvedParent: usize = 0xa18;
    pub const m_vecLastKnownValidPos: usize = 0xa1c;
    pub const m_hDesiredParent: usize = 0xa28;
    pub const m_bBeingUsed: usize = 0xa2c;
}

pub mod CBuoyancyHelper {
    pub const m_flFluidDensity: usize = 0x18;
}

pub mod CBuyZone {
    pub const m_LegacyTeamNum: usize = 0x8a8;
}

pub mod CC4 {
    pub const m_vecLastValidPlayerHeldPosition: usize = 0xdd0;
    pub const m_vecLastValidDroppedPosition: usize = 0xddc;
    pub const m_bDoValidDroppedPositionCheck: usize = 0xde8;
    pub const m_bStartedArming: usize = 0xde9;
    pub const m_fArmedTime: usize = 0xdec;
    pub const m_bBombPlacedAnimation: usize = 0xdf0;
    pub const m_bIsPlantingViaUse: usize = 0xdf1;
    pub const m_entitySpottedState: usize = 0xdf8;
    pub const m_nSpotRules: usize = 0xe10;
    pub const m_bPlayedArmingBeeps: usize = 0xe14;
    pub const m_bBombPlanted: usize = 0xe1b;
    pub const m_bDroppedFromDeath: usize = 0xe1c;
}

pub mod CCSBot {
    pub const m_lastCoopSpawnPoint: usize = 0xd0;
    pub const m_eyePosition: usize = 0xe0;
    pub const m_name: usize = 0xec;
    pub const m_combatRange: usize = 0x12c;
    pub const m_isRogue: usize = 0x130;
    pub const m_rogueTimer: usize = 0x138;
    pub const m_diedLastRound: usize = 0x154;
    pub const m_safeTime: usize = 0x158;
    pub const m_wasSafe: usize = 0x15c;
    pub const m_blindFire: usize = 0x164;
    pub const m_surpriseTimer: usize = 0x168;
    pub const m_bAllowActive: usize = 0x180;
    pub const m_isFollowing: usize = 0x181;
    pub const m_leader: usize = 0x184;
    pub const m_followTimestamp: usize = 0x188;
    pub const m_allowAutoFollowTime: usize = 0x18c;
    pub const m_hurryTimer: usize = 0x190;
    pub const m_alertTimer: usize = 0x1a8;
    pub const m_sneakTimer: usize = 0x1c0;
    pub const m_panicTimer: usize = 0x1d8;
    pub const m_stateTimestamp: usize = 0x4d8;
    pub const m_isAttacking: usize = 0x4dc;
    pub const m_isOpeningDoor: usize = 0x4dd;
    pub const m_taskEntity: usize = 0x4e4;
    pub const m_goalPosition: usize = 0x4f4;
    pub const m_goalEntity: usize = 0x500;
    pub const m_avoid: usize = 0x504;
    pub const m_avoidTimestamp: usize = 0x508;
    pub const m_isStopping: usize = 0x50c;
    pub const m_hasVisitedEnemySpawn: usize = 0x50d;
    pub const m_stillTimer: usize = 0x510;
    pub const m_bEyeAnglesUnderPathFinderControl: usize = 0x520;
    pub const m_pathIndex: usize = 0x6618;
    pub const m_areaEnteredTimestamp: usize = 0x661c;
    pub const m_repathTimer: usize = 0x6620;
    pub const m_avoidFriendTimer: usize = 0x6638;
    pub const m_isFriendInTheWay: usize = 0x6650;
    pub const m_politeTimer: usize = 0x6658;
    pub const m_isWaitingBehindFriend: usize = 0x6670;
    pub const m_pathLadderEnd: usize = 0x669c;
    pub const m_mustRunTimer: usize = 0x66e8;
    pub const m_waitTimer: usize = 0x6700;
    pub const m_updateTravelDistanceTimer: usize = 0x6718;
    pub const m_playerTravelDistance: usize = 0x6730;
    pub const m_travelDistancePhase: usize = 0x6830;
    pub const m_hostageEscortCount: usize = 0x69c8;
    pub const m_hostageEscortCountTimestamp: usize = 0x69cc;
    pub const m_desiredTeam: usize = 0x69d0;
    pub const m_hasJoined: usize = 0x69d4;
    pub const m_isWaitingForHostage: usize = 0x69d5;
    pub const m_inhibitWaitingForHostageTimer: usize = 0x69d8;
    pub const m_waitForHostageTimer: usize = 0x69f0;
    pub const m_noisePosition: usize = 0x6a08;
    pub const m_noiseTravelDistance: usize = 0x6a14;
    pub const m_noiseTimestamp: usize = 0x6a18;
    pub const m_noiseSource: usize = 0x6a20;
    pub const m_noiseBendTimer: usize = 0x6a38;
    pub const m_bentNoisePosition: usize = 0x6a50;
    pub const m_bendNoisePositionValid: usize = 0x6a5c;
    pub const m_lookAroundStateTimestamp: usize = 0x6a60;
    pub const m_lookAheadAngle: usize = 0x6a64;
    pub const m_forwardAngle: usize = 0x6a68;
    pub const m_inhibitLookAroundTimestamp: usize = 0x6a6c;
    pub const m_lookAtSpot: usize = 0x6a74;
    pub const m_lookAtSpotDuration: usize = 0x6a84;
    pub const m_lookAtSpotTimestamp: usize = 0x6a88;
    pub const m_lookAtSpotAngleTolerance: usize = 0x6a8c;
    pub const m_lookAtSpotClearIfClose: usize = 0x6a90;
    pub const m_lookAtSpotAttack: usize = 0x6a91;
    pub const m_lookAtDesc: usize = 0x6a98;
    pub const m_peripheralTimestamp: usize = 0x6aa0;
    pub const m_approachPointCount: usize = 0x6c28;
    pub const m_approachPointViewPosition: usize = 0x6c2c;
    pub const m_viewSteadyTimer: usize = 0x6c38;
    pub const m_tossGrenadeTimer: usize = 0x6c50;
    pub const m_isAvoidingGrenade: usize = 0x6c70;
    pub const m_spotCheckTimestamp: usize = 0x6c90;
    pub const m_checkedHidingSpotCount: usize = 0x7098;
    pub const m_lookPitch: usize = 0x709c;
    pub const m_lookPitchVel: usize = 0x70a0;
    pub const m_lookYaw: usize = 0x70a4;
    pub const m_lookYawVel: usize = 0x70a8;
    pub const m_targetSpot: usize = 0x70ac;
    pub const m_targetSpotVelocity: usize = 0x70b8;
    pub const m_targetSpotPredicted: usize = 0x70c4;
    pub const m_aimError: usize = 0x70d0;
    pub const m_aimGoal: usize = 0x70dc;
    pub const m_targetSpotTime: usize = 0x70e8;
    pub const m_aimFocus: usize = 0x70ec;
    pub const m_aimFocusInterval: usize = 0x70f0;
    pub const m_aimFocusNextUpdate: usize = 0x70f4;
    pub const m_ignoreEnemiesTimer: usize = 0x7100;
    pub const m_enemy: usize = 0x7118;
    pub const m_isEnemyVisible: usize = 0x711c;
    pub const m_visibleEnemyParts: usize = 0x711d;
    pub const m_lastEnemyPosition: usize = 0x7120;
    pub const m_lastSawEnemyTimestamp: usize = 0x712c;
    pub const m_firstSawEnemyTimestamp: usize = 0x7130;
    pub const m_currentEnemyAcquireTimestamp: usize = 0x7134;
    pub const m_enemyDeathTimestamp: usize = 0x7138;
    pub const m_friendDeathTimestamp: usize = 0x713c;
    pub const m_isLastEnemyDead: usize = 0x7140;
    pub const m_nearbyEnemyCount: usize = 0x7144;
    pub const m_bomber: usize = 0x7350;
    pub const m_nearbyFriendCount: usize = 0x7354;
    pub const m_closestVisibleFriend: usize = 0x7358;
    pub const m_closestVisibleHumanFriend: usize = 0x735c;
    pub const m_attentionInterval: usize = 0x7360;
    pub const m_attacker: usize = 0x7370;
    pub const m_attackedTimestamp: usize = 0x7374;
    pub const m_burnedByFlamesTimer: usize = 0x7378;
    pub const m_lastVictimID: usize = 0x7388;
    pub const m_isAimingAtEnemy: usize = 0x738c;
    pub const m_isRapidFiring: usize = 0x738d;
    pub const m_equipTimer: usize = 0x7390;
    pub const m_zoomTimer: usize = 0x73a0;
    pub const m_fireWeaponTimestamp: usize = 0x73b8;
    pub const m_lookForWeaponsOnGroundTimer: usize = 0x73c0;
    pub const m_bIsSleeping: usize = 0x73d8;
    pub const m_isEnemySniperVisible: usize = 0x73d9;
    pub const m_sawEnemySniperTimer: usize = 0x73e0;
    pub const m_enemyQueueIndex: usize = 0x7498;
    pub const m_enemyQueueCount: usize = 0x7499;
    pub const m_enemyQueueAttendIndex: usize = 0x749a;
    pub const m_isStuck: usize = 0x749b;
    pub const m_stuckTimestamp: usize = 0x749c;
    pub const m_stuckSpot: usize = 0x74a0;
    pub const m_wiggleTimer: usize = 0x74b0;
    pub const m_stuckJumpTimer: usize = 0x74c8;
    pub const m_nextCleanupCheckTimestamp: usize = 0x74e0;
    pub const m_avgVel: usize = 0x74e4;
    pub const m_avgVelIndex: usize = 0x750c;
    pub const m_avgVelCount: usize = 0x7510;
    pub const m_lastOrigin: usize = 0x7514;
    pub const m_lastRadioRecievedTimestamp: usize = 0x7524;
    pub const m_lastRadioSentTimestamp: usize = 0x7528;
    pub const m_radioSubject: usize = 0x752c;
    pub const m_radioPosition: usize = 0x7530;
    pub const m_voiceEndTimestamp: usize = 0x753c;
    pub const m_lastValidReactionQueueFrame: usize = 0x7548;
}

pub mod CCSEnvGunfire {
    pub const m_iMinBurstSize: usize = 0x4b0;
    pub const m_iMaxBurstSize: usize = 0x4b4;
    pub const m_flMinBurstDelay: usize = 0x4b8;
    pub const m_flMaxBurstDelay: usize = 0x4bc;
    pub const m_flRateOfFire: usize = 0x4c0;
    pub const m_iszShootSound: usize = 0x4c8;
    pub const m_iszTracerType: usize = 0x4d0;
    pub const m_iszWeaponName: usize = 0x4d8;
    pub const m_bDisabled: usize = 0x4e0;
    pub const m_iShotsRemaining: usize = 0x4e4;
    pub const m_iSpread: usize = 0x4e8;
    pub const m_vecSpread: usize = 0x4ec;
    pub const m_vecTargetPosition: usize = 0x4f4;
    pub const m_flTargetDist: usize = 0x500;
    pub const m_flBias: usize = 0x504;
    pub const m_bCollide: usize = 0x508;
    pub const m_hTarget: usize = 0x50c;
    pub const m_bAllowNullTarget: usize = 0x510;
    pub const m_bAlwaysWallbangTracer: usize = 0x511;
    pub const m_flDamageScaleValue: usize = 0x514;
    pub const m_flAdditionalSpread: usize = 0x518;
}

pub mod CCSGOViewModel {
    pub const m_bShouldIgnoreOffsetAndAccuracy: usize = 0x8d0;
    pub const m_nWeaponParity: usize = 0x8d4;
    pub const m_nOldWeaponParity: usize = 0x8d8;
}

pub mod CCSGO_TeamPreviewCharacterPosition {
    pub const m_nVariant: usize = 0x4b0;
    pub const m_nRandom: usize = 0x4b4;
    pub const m_nOrdinal: usize = 0x4b8;
    pub const m_sWeaponName: usize = 0x4c0;
    pub const m_xuid: usize = 0x4c8;
    pub const m_weaponItem: usize = 0x4d0;
}

pub mod CCSGameModeRules {
    pub const __m_pChainEntity: usize = 0x8;
}

pub mod CCSGameModeRules_Deathmatch {
    pub const m_bFirstThink: usize = 0x30;
    pub const m_bFirstThinkAfterConnected: usize = 0x31;
    pub const m_flDMBonusStartTime: usize = 0x34;
    pub const m_flDMBonusTimeLength: usize = 0x38;
    pub const m_nDMBonusWeaponLoadoutSlot: usize = 0x3c;
}

pub mod CCSGameRules {
    pub const __m_pChainEntity: usize = 0x98;
    pub const m_coopMissionManager: usize = 0xc0;
    pub const m_bFreezePeriod: usize = 0xc4;
    pub const m_bWarmupPeriod: usize = 0xc5;
    pub const m_fWarmupPeriodEnd: usize = 0xc8;
    pub const m_fWarmupPeriodStart: usize = 0xcc;
    pub const m_nTotalPausedTicks: usize = 0xd0;
    pub const m_nPauseStartTick: usize = 0xd4;
    pub const m_bServerPaused: usize = 0xd8;
    pub const m_bGamePaused: usize = 0xd9;
    pub const m_bTerroristTimeOutActive: usize = 0xda;
    pub const m_bCTTimeOutActive: usize = 0xdb;
    pub const m_flTerroristTimeOutRemaining: usize = 0xdc;
    pub const m_flCTTimeOutRemaining: usize = 0xe0;
    pub const m_nTerroristTimeOuts: usize = 0xe4;
    pub const m_nCTTimeOuts: usize = 0xe8;
    pub const m_bTechnicalTimeOut: usize = 0xec;
    pub const m_bMatchWaitingForResume: usize = 0xed;
    pub const m_iRoundTime: usize = 0xf0;
    pub const m_fMatchStartTime: usize = 0xf4;
    pub const m_fRoundStartTime: usize = 0xf8;
    pub const m_flRestartRoundTime: usize = 0xfc;
    pub const m_bGameRestart: usize = 0x100;
    pub const m_flGameStartTime: usize = 0x104;
    pub const m_timeUntilNextPhaseStarts: usize = 0x108;
    pub const m_gamePhase: usize = 0x10c;
    pub const m_totalRoundsPlayed: usize = 0x110;
    pub const m_nRoundsPlayedThisPhase: usize = 0x114;
    pub const m_nOvertimePlaying: usize = 0x118;
    pub const m_iHostagesRemaining: usize = 0x11c;
    pub const m_bAnyHostageReached: usize = 0x120;
    pub const m_bMapHasBombTarget: usize = 0x121;
    pub const m_bMapHasRescueZone: usize = 0x122;
    pub const m_bMapHasBuyZone: usize = 0x123;
    pub const m_bIsQueuedMatchmaking: usize = 0x124;
    pub const m_nQueuedMatchmakingMode: usize = 0x128;
    pub const m_bIsValveDS: usize = 0x12c;
    pub const m_bLogoMap: usize = 0x12d;
    pub const m_bPlayAllStepSoundsOnServer: usize = 0x12e;
    pub const m_iNumGunGameProgressiveWeaponsCT: usize = 0x130;
    pub const m_iNumGunGameProgressiveWeaponsT: usize = 0x134;
    pub const m_iSpectatorSlotCount: usize = 0x138;
    pub const m_GGProgressiveWeaponOrderCT: usize = 0x13c;
    pub const m_GGProgressiveWeaponOrderT: usize = 0x22c;
    pub const m_GGProgressiveWeaponKillUpgradeOrderCT: usize = 0x31c;
    pub const m_GGProgressiveWeaponKillUpgradeOrderT: usize = 0x40c;
    pub const m_MatchDevice: usize = 0x4fc;
    pub const m_bHasMatchStarted: usize = 0x500;
    pub const m_nNextMapInMapgroup: usize = 0x504;
    pub const m_szTournamentEventName: usize = 0x508;
    pub const m_szTournamentEventStage: usize = 0x708;
    pub const m_szMatchStatTxt: usize = 0x908;
    pub const m_szTournamentPredictionsTxt: usize = 0xb08;
    pub const m_nTournamentPredictionsPct: usize = 0xd08;
    pub const m_flCMMItemDropRevealStartTime: usize = 0xd0c;
    pub const m_flCMMItemDropRevealEndTime: usize = 0xd10;
    pub const m_bIsDroppingItems: usize = 0xd14;
    pub const m_bIsQuestEligible: usize = 0xd15;
    pub const m_nGuardianModeWaveNumber: usize = 0xd18;
    pub const m_nGuardianModeSpecialKillsRemaining: usize = 0xd1c;
    pub const m_nGuardianModeSpecialWeaponNeeded: usize = 0xd20;
    pub const m_nGuardianGrenadesToGiveBots: usize = 0xd24;
    pub const m_nNumHeaviesToSpawn: usize = 0xd28;
    pub const m_numGlobalGiftsGiven: usize = 0xd2c;
    pub const m_numGlobalGifters: usize = 0xd30;
    pub const m_numGlobalGiftsPeriodSeconds: usize = 0xd34;
    pub const m_arrFeaturedGiftersAccounts: usize = 0xd38;
    pub const m_arrFeaturedGiftersGifts: usize = 0xd48;
    pub const m_arrProhibitedItemIndices: usize = 0xd58;
    pub const m_arrTournamentActiveCasterAccounts: usize = 0xe20;
    pub const m_numBestOfMaps: usize = 0xe30;
    pub const m_nHalloweenMaskListSeed: usize = 0xe34;
    pub const m_bBombDropped: usize = 0xe38;
    pub const m_bBombPlanted: usize = 0xe39;
    pub const m_iRoundWinStatus: usize = 0xe3c;
    pub const m_eRoundWinReason: usize = 0xe40;
    pub const m_bTCantBuy: usize = 0xe44;
    pub const m_bCTCantBuy: usize = 0xe45;
    pub const m_flGuardianBuyUntilTime: usize = 0xe48;
    pub const m_iMatchStats_RoundResults: usize = 0xe4c;
    pub const m_iMatchStats_PlayersAlive_CT: usize = 0xec4;
    pub const m_iMatchStats_PlayersAlive_T: usize = 0xf3c;
    pub const m_TeamRespawnWaveTimes: usize = 0xfb4;
    pub const m_flNextRespawnWave: usize = 0x1034;
    pub const m_nServerQuestID: usize = 0x10b4;
    pub const m_vMinimapMins: usize = 0x10b8;
    pub const m_vMinimapMaxs: usize = 0x10c4;
    pub const m_MinimapVerticalSectionHeights: usize = 0x10d0;
    pub const m_bDontIncrementCoopWave: usize = 0x10f0;
    pub const m_bSpawnedTerrorHuntHeavy: usize = 0x10f1;
    pub const m_nEndMatchMapGroupVoteTypes: usize = 0x10f4;
    pub const m_nEndMatchMapGroupVoteOptions: usize = 0x111c;
    pub const m_nEndMatchMapVoteWinner: usize = 0x1144;
    pub const m_iNumConsecutiveCTLoses: usize = 0x1148;
    pub const m_iNumConsecutiveTerroristLoses: usize = 0x114c;
    pub const m_bHasHostageBeenTouched: usize = 0x1168;
    pub const m_flIntermissionStartTime: usize = 0x116c;
    pub const m_flIntermissionEndTime: usize = 0x1170;
    pub const m_bLevelInitialized: usize = 0x1174;
    pub const m_iTotalRoundsPlayed: usize = 0x1178;
    pub const m_iUnBalancedRounds: usize = 0x117c;
    pub const m_endMatchOnRoundReset: usize = 0x1180;
    pub const m_endMatchOnThink: usize = 0x1181;
    pub const m_iFreezeTime: usize = 0x1184;
    pub const m_iNumTerrorist: usize = 0x1188;
    pub const m_iNumCT: usize = 0x118c;
    pub const m_iNumSpawnableTerrorist: usize = 0x1190;
    pub const m_iNumSpawnableCT: usize = 0x1194;
    pub const m_arrSelectedHostageSpawnIndices: usize = 0x1198;
    pub const m_bFirstConnected: usize = 0x11b0;
    pub const m_bCompleteReset: usize = 0x11b1;
    pub const m_bPickNewTeamsOnReset: usize = 0x11b2;
    pub const m_bScrambleTeamsOnRestart: usize = 0x11b3;
    pub const m_bSwapTeamsOnRestart: usize = 0x11b4;
    pub const m_nEndMatchTiedVotes: usize = 0x11c0;
    pub const m_bNeedToAskPlayersForContinueVote: usize = 0x11dc;
    pub const m_numQueuedMatchmakingAccounts: usize = 0x11e0;
    pub const m_pQueuedMatchmakingReservationString: usize = 0x11e8;
    pub const m_numTotalTournamentDrops: usize = 0x11f0;
    pub const m_numSpectatorsCountMax: usize = 0x11f4;
    pub const m_numSpectatorsCountMaxTV: usize = 0x11f8;
    pub const m_numSpectatorsCountMaxLnk: usize = 0x11fc;
    pub const m_bForceTeamChangeSilent: usize = 0x1208;
    pub const m_bLoadingRoundBackupData: usize = 0x1209;
    pub const m_nMatchInfoShowType: usize = 0x1240;
    pub const m_flMatchInfoDecidedTime: usize = 0x1244;
    pub const m_flCoopRespawnAndHealTime: usize = 0x1260;
    pub const m_coopBonusCoinsFound: usize = 0x1264;
    pub const m_coopBonusPistolsOnly: usize = 0x1268;
    pub const m_coopPlayersInDeploymentZone: usize = 0x1269;
    pub const m_coopMissionDeadPlayerRespawnEnabled: usize = 0x126a;
    pub const mTeamDMLastWinningTeamNumber: usize = 0x126c;
    pub const mTeamDMLastThinkTime: usize = 0x1270;
    pub const m_flTeamDMLastAnnouncementTime: usize = 0x1274;
    pub const m_iAccountTerrorist: usize = 0x1278;
    pub const m_iAccountCT: usize = 0x127c;
    pub const m_iSpawnPointCount_Terrorist: usize = 0x1280;
    pub const m_iSpawnPointCount_CT: usize = 0x1284;
    pub const m_iMaxNumTerrorists: usize = 0x1288;
    pub const m_iMaxNumCTs: usize = 0x128c;
    pub const m_iLoserBonus: usize = 0x1290;
    pub const m_iLoserBonusMostRecentTeam: usize = 0x1294;
    pub const m_tmNextPeriodicThink: usize = 0x1298;
    pub const m_bVoiceWonMatchBragFired: usize = 0x129c;
    pub const m_fWarmupNextChatNoticeTime: usize = 0x12a0;
    pub const m_iHostagesRescued: usize = 0x12a8;
    pub const m_iHostagesTouched: usize = 0x12ac;
    pub const m_flNextHostageAnnouncement: usize = 0x12b0;
    pub const m_bNoTerroristsKilled: usize = 0x12b4;
    pub const m_bNoCTsKilled: usize = 0x12b5;
    pub const m_bNoEnemiesKilled: usize = 0x12b6;
    pub const m_bCanDonateWeapons: usize = 0x12b7;
    pub const m_firstKillTime: usize = 0x12bc;
    pub const m_firstBloodTime: usize = 0x12c4;
    pub const m_hostageWasInjured: usize = 0x12e0;
    pub const m_hostageWasKilled: usize = 0x12e1;
    pub const m_bVoteCalled: usize = 0x12f0;
    pub const m_bServerVoteOnReset: usize = 0x12f1;
    pub const m_flVoteCheckThrottle: usize = 0x12f4;
    pub const m_bBuyTimeEnded: usize = 0x12f8;
    pub const m_nLastFreezeEndBeep: usize = 0x12fc;
    pub const m_bTargetBombed: usize = 0x1300;
    pub const m_bBombDefused: usize = 0x1301;
    pub const m_bMapHasBombZone: usize = 0x1302;
    pub const m_bGunGameRespawnWithBomb: usize = 0x1303;
    pub const m_fGunGameBombRespawnTimer: usize = 0x1304;
    pub const m_vecMainCTSpawnPos: usize = 0x1324;
    pub const m_CTSpawnPointsMasterList: usize = 0x1330;
    pub const m_TerroristSpawnPointsMasterList: usize = 0x1348;
    pub const m_iNextCTSpawnPoint: usize = 0x1360;
    pub const m_iNextTerroristSpawnPoint: usize = 0x1364;
    pub const m_CTSpawnPoints: usize = 0x1368;
    pub const m_TerroristSpawnPoints: usize = 0x1380;
    pub const m_bIsUnreservedGameServer: usize = 0x1398;
    pub const m_fAutobalanceDisplayTime: usize = 0x139c;
    pub const m_bAllowWeaponSwitch: usize = 0x1608;
    pub const m_bRoundTimeWarningTriggered: usize = 0x1609;
    pub const m_phaseChangeAnnouncementTime: usize = 0x160c;
    pub const m_fNextUpdateTeamClanNamesTime: usize = 0x1610;
    pub const m_flLastThinkTime: usize = 0x1614;
    pub const m_fAccumulatedRoundOffDamage: usize = 0x1618;
    pub const m_nShorthandedBonusLastEvalRound: usize = 0x161c;
    pub const m_bMatchAbortedDueToPlayerBan: usize = 0x1898;
    pub const m_bHasTriggeredRoundStartMusic: usize = 0x1899;
    pub const m_bHasTriggeredCoopSpawnReset: usize = 0x189a;
    pub const m_bSwitchingTeamsAtRoundReset: usize = 0x189b;
    pub const m_iMaxGunGameProgressiveWeaponIndex: usize = 0x189c;
    pub const m_pGameModeRules: usize = 0x18b8;
    pub const m_SurvivalRules: usize = 0x18c0;
    pub const m_BtGlobalBlackboard: usize = 0x3558;
    pub const m_hPlayerResource: usize = 0x35c0;
    pub const m_RetakeRules: usize = 0x35c8;
    pub const m_GuardianBotSkillLevelMax: usize = 0x37ac;
    pub const m_GuardianBotSkillLevelMin: usize = 0x37b0;
    pub const m_arrTeamUniqueKillWeaponsMatch: usize = 0x37b8;
    pub const m_bTeamLastKillUsedUniqueWeaponMatch: usize = 0x3818;
    pub const m_nMatchEndCount: usize = 0x3840;
    pub const m_nTTeamIntroVariant: usize = 0x3844;
    pub const m_nCTTeamIntroVariant: usize = 0x3848;
    pub const m_bTeamIntroPeriod: usize = 0x384c;
    pub const m_fTeamIntroPeriodEnd: usize = 0x3850;
    pub const m_bPlayedTeamIntroVO: usize = 0x3854;
    pub const m_flLastPerfSampleTime: usize = 0x4810;
}

pub mod CCSGameRulesProxy {
    pub const m_pGameRules: usize = 0x4b0;
}

pub mod CCSPlace {
    pub const m_name: usize = 0x708;
}

pub mod CCSPlayerController {
    pub const m_pInGameMoneyServices: usize = 0x6a0;
    pub const m_pInventoryServices: usize = 0x6a8;
    pub const m_pActionTrackingServices: usize = 0x6b0;
    pub const m_pDamageServices: usize = 0x6b8;
    pub const m_iPing: usize = 0x6c0;
    pub const m_bHasCommunicationAbuseMute: usize = 0x6c4;
    pub const m_szCrosshairCodes: usize = 0x6c8;
    pub const m_iPendingTeamNum: usize = 0x6d0;
    pub const m_flForceTeamTime: usize = 0x6d4;
    pub const m_iCompTeammateColor: usize = 0x6d8;
    pub const m_bEverPlayedOnTeam: usize = 0x6dc;
    pub const m_bAttemptedToGetColor: usize = 0x6dd;
    pub const m_iTeammatePreferredColor: usize = 0x6e0;
    pub const m_bTeamChanged: usize = 0x6e4;
    pub const m_bInSwitchTeam: usize = 0x6e5;
    pub const m_bHasSeenJoinGame: usize = 0x6e6;
    pub const m_bJustBecameSpectator: usize = 0x6e7;
    pub const m_bSwitchTeamsOnNextRoundReset: usize = 0x6e8;
    pub const m_bRemoveAllItemsOnNextRoundReset: usize = 0x6e9;
    pub const m_szClan: usize = 0x6f0;
    pub const m_szClanName: usize = 0x6f8;
    pub const m_iCoachingTeam: usize = 0x718;
    pub const m_nPlayerDominated: usize = 0x720;
    pub const m_nPlayerDominatingMe: usize = 0x728;
    pub const m_iCompetitiveRanking: usize = 0x730;
    pub const m_iCompetitiveWins: usize = 0x734;
    pub const m_iCompetitiveRankType: usize = 0x738;
    pub const m_iCompetitiveRankingPredicted_Win: usize = 0x73c;
    pub const m_iCompetitiveRankingPredicted_Loss: usize = 0x740;
    pub const m_iCompetitiveRankingPredicted_Tie: usize = 0x744;
    pub const m_nEndMatchNextMapVote: usize = 0x748;
    pub const m_unActiveQuestId: usize = 0x74c;
    pub const m_nQuestProgressReason: usize = 0x750;
    pub const m_unPlayerTvControlFlags: usize = 0x754;
    pub const m_iDraftIndex: usize = 0x7c0;
    pub const m_msQueuedModeDisconnectionTimestamp: usize = 0x7c4;
    pub const m_uiAbandonRecordedReason: usize = 0x7c8;
    pub const m_bEverFullyConnected: usize = 0x7cc;
    pub const m_bAbandonAllowsSurrender: usize = 0x7cd;
    pub const m_bAbandonOffersInstantSurrender: usize = 0x7ce;
    pub const m_bDisconnection1MinWarningPrinted: usize = 0x7cf;
    pub const m_bScoreReported: usize = 0x7d0;
    pub const m_nDisconnectionTick: usize = 0x7d4;
    pub const m_bControllingBot: usize = 0x7e0;
    pub const m_bHasControlledBotThisRound: usize = 0x7e1;
    pub const m_bHasBeenControlledByPlayerThisRound: usize = 0x7e2;
    pub const m_nBotsControlledThisRound: usize = 0x7e4;
    pub const m_bCanControlObservedBot: usize = 0x7e8;
    pub const m_hPlayerPawn: usize = 0x7ec;
    pub const m_hObserverPawn: usize = 0x7f0;
    pub const m_DesiredObserverMode: usize = 0x7f4;
    pub const m_hDesiredObserverTarget: usize = 0x7f8;
    pub const m_bPawnIsAlive: usize = 0x7fc;
    pub const m_iPawnHealth: usize = 0x800;
    pub const m_iPawnArmor: usize = 0x804;
    pub const m_bPawnHasDefuser: usize = 0x808;
    pub const m_bPawnHasHelmet: usize = 0x809;
    pub const m_nPawnCharacterDefIndex: usize = 0x80a;
    pub const m_iPawnLifetimeStart: usize = 0x80c;
    pub const m_iPawnLifetimeEnd: usize = 0x810;
    pub const m_iPawnGunGameLevel: usize = 0x814;
    pub const m_iPawnBotDifficulty: usize = 0x818;
    pub const m_hOriginalControllerOfCurrentPawn: usize = 0x81c;
    pub const m_iScore: usize = 0x820;
    pub const m_iRoundScore: usize = 0x824;
    pub const m_vecKills: usize = 0x828;
    pub const m_iMVPs: usize = 0x840;
    pub const m_nUpdateCounter: usize = 0x844;
    pub const m_lastHeldVoteTimer: usize = 0xf8e8;
    pub const m_bShowHints: usize = 0xf900;
    pub const m_iNextTimeCheck: usize = 0xf904;
}

pub mod CCSPlayerController_ActionTrackingServices {
    pub const m_perRoundStats: usize = 0x40;
    pub const m_matchStats: usize = 0x90;
    pub const m_iNumRoundKills: usize = 0x148;
    pub const m_iNumRoundKillsHeadshots: usize = 0x14c;
}

pub mod CCSPlayerController_DamageServices {
    pub const m_nSendUpdate: usize = 0x40;
    pub const m_DamageList: usize = 0x48;
}

pub mod CCSPlayerController_InGameMoneyServices {
    pub const m_bReceivesMoneyNextRound: usize = 0x40;
    pub const m_iAccountMoneyEarnedForNextRound: usize = 0x44;
    pub const m_iAccount: usize = 0x48;
    pub const m_iStartAccount: usize = 0x4c;
    pub const m_iTotalCashSpent: usize = 0x50;
    pub const m_iCashSpentThisRound: usize = 0x54;
}

pub mod CCSPlayerController_InventoryServices {
    pub const m_unMusicID: usize = 0x40;
    pub const m_rank: usize = 0x44;
    pub const m_nPersonaDataPublicLevel: usize = 0x5c;
    pub const m_nPersonaDataPublicCommendsLeader: usize = 0x60;
    pub const m_nPersonaDataPublicCommendsTeacher: usize = 0x64;
    pub const m_nPersonaDataPublicCommendsFriendly: usize = 0x68;
    pub const m_unEquippedPlayerSprayIDs: usize = 0xf48;
    pub const m_vecTerroristLoadoutCache: usize = 0xf50;
    pub const m_vecCounterTerroristLoadoutCache: usize = 0xfa0;
}

pub mod CCSPlayerPawn {
    pub const m_pParachuteServices: usize = 0x1628;
    pub const m_pBulletServices: usize = 0x1630;
    pub const m_pHostageServices: usize = 0x1638;
    pub const m_pBuyServices: usize = 0x1640;
    pub const m_pPingServices: usize = 0x1648;
    pub const m_pRadioServices: usize = 0x1650;
    pub const m_pDamageReactServices: usize = 0x1658;
    pub const m_iRetakesOffering: usize = 0x1728;
    pub const m_iRetakesOfferingCard: usize = 0x172c;
    pub const m_bRetakesHasDefuseKit: usize = 0x1730;
    pub const m_bRetakesMVPLastRound: usize = 0x1731;
    pub const m_iRetakesMVPBoostItem: usize = 0x1734;
    pub const m_RetakesMVPBoostExtraUtility: usize = 0x1738;
    pub const m_bIsBuyMenuOpen: usize = 0x173c;
    pub const m_xLastHeadBoneTransform: usize = 0x1c90;
    pub const m_bLastHeadBoneTransformIsValid: usize = 0x1cb0;
    pub const m_iPlayerLocked: usize = 0x1cb4;
    pub const m_flNextSprayDecalTime: usize = 0x1cbc;
    pub const m_nRagdollDamageBone: usize = 0x1cc4;
    pub const m_vRagdollDamageForce: usize = 0x1cc8;
    pub const m_vRagdollDamagePosition: usize = 0x1cd4;
    pub const m_szRagdollDamageWeaponName: usize = 0x1ce0;
    pub const m_bRagdollDamageHeadshot: usize = 0x1d20;
    pub const m_EconGloves: usize = 0x1d28;
    pub const m_qDeathEyeAngles: usize = 0x1fa0;
    pub const m_bSkipOneHeadConstraintUpdate: usize = 0x1fac;
}

pub mod CCSPlayerPawnBase {
    pub const m_CTouchExpansionComponent: usize = 0xb58;
    pub const m_pActionTrackingServices: usize = 0xba8;
    pub const m_pViewModelServices: usize = 0xbb0;
    pub const m_iDisplayHistoryBits: usize = 0xbb8;
    pub const m_flLastAttackedTeammate: usize = 0xbbc;
    pub const m_hOriginalController: usize = 0xbc0;
    pub const m_blindUntilTime: usize = 0xbc4;
    pub const m_blindStartTime: usize = 0xbc8;
    pub const m_allowAutoFollowTime: usize = 0xbcc;
    pub const m_bHasFemaleVoice: usize = 0xbd0;
    pub const m_entitySpottedState: usize = 0xbd8;
    pub const m_nSpotRules: usize = 0xbf0;
    pub const m_flTimeOfLastInjury: usize = 0xbf4;
    pub const m_nRelativeDirectionOfLastInjury: usize = 0xbf8;
    pub const m_iPlayerState: usize = 0xbfc;
    pub const m_chickenIdleSoundTimer: usize = 0xc08;
    pub const m_chickenJumpSoundTimer: usize = 0xc20;
    pub const m_vecLastBookmarkedPosition: usize = 0xcd8;
    pub const m_flLastDistanceTraveledNotice: usize = 0xce4;
    pub const m_flAccumulatedDistanceTraveled: usize = 0xce8;
    pub const m_flLastFriendlyFireDamageReductionRatio: usize = 0xcec;
    pub const m_bRespawning: usize = 0xcf0;
    pub const m_iNumGunGameTRBombTotalPoints: usize = 0xcf4;
    pub const m_bShouldProgressGunGameTRBombModeWeapon: usize = 0xcf8;
    pub const m_nLastPickupPriority: usize = 0xcfc;
    pub const m_flLastPickupPriorityTime: usize = 0xd00;
    pub const m_passiveItems: usize = 0xd04;
    pub const m_bIsScoped: usize = 0xd08;
    pub const m_bIsWalking: usize = 0xd09;
    pub const m_bResumeZoom: usize = 0xd0a;
    pub const m_bIsDefusing: usize = 0xd0b;
    pub const m_bIsGrabbingHostage: usize = 0xd0c;
    pub const m_iBlockingUseActionInProgress: usize = 0xd10;
    pub const m_fImmuneToGunGameDamageTime: usize = 0xd14;
    pub const m_bGunGameImmunity: usize = 0xd18;
    pub const m_bMadeFinalGunGameProgressiveKill: usize = 0xd19;
    pub const m_iGunGameProgressiveWeaponIndex: usize = 0xd1c;
    pub const m_iNumGunGameTRKillPoints: usize = 0xd20;
    pub const m_iNumGunGameKillsWithCurrentWeapon: usize = 0xd24;
    pub const m_unTotalRoundDamageDealt: usize = 0xd28;
    pub const m_fMolotovDamageTime: usize = 0xd2c;
    pub const m_bHasMovedSinceSpawn: usize = 0xd30;
    pub const m_bCanMoveDuringFreezePeriod: usize = 0xd31;
    pub const m_isCurrentGunGameLeader: usize = 0xd32;
    pub const m_isCurrentGunGameTeamLeader: usize = 0xd33;
    pub const m_flGuardianTooFarDistFrac: usize = 0xd34;
    pub const m_flNextGuardianTooFarHurtTime: usize = 0xd38;
    pub const m_flDetectedByEnemySensorTime: usize = 0xd3c;
    pub const m_bIsSpawnRappelling: usize = 0xd40;
    pub const m_vecSpawnRappellingRopeOrigin: usize = 0xd44;
    pub const m_nSurvivalTeam: usize = 0xd50;
    pub const m_hSurvivalAssassinationTarget: usize = 0xd54;
    pub const m_nCompletedSurvivalAssassinations: usize = 0xd58;
    pub const m_flDealtDamageToEnemyMostRecentTimestamp: usize = 0xd5c;
    pub const m_flHealthShotBoostExpirationTime: usize = 0xd60;
    pub const m_flLastEquippedHelmetTime: usize = 0xd64;
    pub const m_flLastEquippedArmorTime: usize = 0xd68;
    pub const m_nHeavyAssaultSuitCooldownRemaining: usize = 0xd6c;
    pub const m_bResetArmorNextSpawn: usize = 0xd70;
    pub const m_flLastBumpMineBumpTime: usize = 0xd74;
    pub const m_flEmitSoundTime: usize = 0xd78;
    pub const m_iNumSpawns: usize = 0xd7c;
    pub const m_iShouldHaveCash: usize = 0xd80;
    pub const m_bJustKilledTeammate: usize = 0xd84;
    pub const m_bPunishedForTK: usize = 0xd85;
    pub const m_bInvalidSteamLogonDelayed: usize = 0xd86;
    pub const m_iTeamKills: usize = 0xd88;
    pub const m_flLastAction: usize = 0xd8c;
    pub const m_flNameChangeHistory: usize = 0xd90;
    pub const m_fLastGivenDefuserTime: usize = 0xda4;
    pub const m_fLastGivenBombTime: usize = 0xda8;
    pub const m_bHasNightVision: usize = 0xdac;
    pub const m_bNightVisionOn: usize = 0xdad;
    pub const m_fNextRadarUpdateTime: usize = 0xdb0;
    pub const m_flLastMoneyUpdateTime: usize = 0xdb4;
    pub const m_MenuStringBuffer: usize = 0xdb8;
    pub const m_fIntroCamTime: usize = 0x11b8;
    pub const m_nMyCollisionGroup: usize = 0x11bc;
    pub const m_bInBombZone: usize = 0x11c0;
    pub const m_bInBuyZone: usize = 0x11c1;
    pub const m_bInNoDefuseArea: usize = 0x11c2;
    pub const m_bKilledByTaser: usize = 0x11c3;
    pub const m_iMoveState: usize = 0x11c4;
    pub const m_nPreviousModelIndex: usize = 0x11c8;
    pub const m_grenadeParameterStashTime: usize = 0x11d0;
    pub const m_bGrenadeParametersStashed: usize = 0x11d4;
    pub const m_angStashedShootAngles: usize = 0x11d8;
    pub const m_vecStashedGrenadeThrowPosition: usize = 0x11e4;
    pub const m_vecStashedVelocity: usize = 0x11f0;
    pub const m_angShootAngleHistory: usize = 0x11fc;
    pub const m_vecThrowPositionHistory: usize = 0x1214;
    pub const m_vecVelocityHistory: usize = 0x122c;
    pub const m_nCharacterDefIndex: usize = 0x1244;
    pub const m_bDiedAirborne: usize = 0x1246;
    pub const m_iBombSiteIndex: usize = 0x1248;
    pub const m_nWhichBombZone: usize = 0x124c;
    pub const m_bInBombZoneTrigger: usize = 0x1250;
    pub const m_bWasInBombZoneTrigger: usize = 0x1251;
    pub const m_bWasInHostageRescueZone: usize = 0x1252;
    pub const m_bWasInBuyZone: usize = 0x1253;
    pub const m_bInHostageRescueZone: usize = 0x1254;
    pub const m_flStamina: usize = 0x1258;
    pub const m_iDirection: usize = 0x125c;
    pub const m_iShotsFired: usize = 0x1260;
    pub const m_ArmorValue: usize = 0x1264;
    pub const m_flFlinchStack: usize = 0x1268;
    pub const m_flVelocityModifier: usize = 0x126c;
    pub const m_flHitHeading: usize = 0x1270;
    pub const m_nHitBodyPart: usize = 0x1274;
    pub const m_iHostagesKilled: usize = 0x1278;
    pub const m_vecTotalBulletForce: usize = 0x127c;
    pub const m_flFlashDuration: usize = 0x1288;
    pub const m_flFlashMaxAlpha: usize = 0x128c;
    pub const m_flProgressBarStartTime: usize = 0x1290;
    pub const m_iProgressBarDuration: usize = 0x1294;
    pub const m_bWaitForNoAttack: usize = 0x1298;
    pub const m_flLowerBodyYawTarget: usize = 0x129c;
    pub const m_bStrafing: usize = 0x12a0;
    pub const m_lastStandingPos: usize = 0x12a4;
    pub const m_ignoreLadderJumpTime: usize = 0x12b0;
    pub const m_ladderSurpressionTimer: usize = 0x12b8;
    pub const m_lastLadderNormal: usize = 0x12d0;
    pub const m_lastLadderPos: usize = 0x12dc;
    pub const m_thirdPersonHeading: usize = 0x12e8;
    pub const m_flSlopeDropOffset: usize = 0x12f4;
    pub const m_flSlopeDropHeight: usize = 0x12f8;
    pub const m_vHeadConstraintOffset: usize = 0x12fc;
    pub const m_iLastWeaponFireUsercmd: usize = 0x1310;
    pub const m_angEyeAngles: usize = 0x1314;
    pub const m_bVCollisionInitted: usize = 0x1320;
    pub const m_storedSpawnPosition: usize = 0x1324;
    pub const m_storedSpawnAngle: usize = 0x1330;
    pub const m_bIsSpawning: usize = 0x133c;
    pub const m_bHideTargetID: usize = 0x133d;
    pub const m_nNumDangerZoneDamageHits: usize = 0x1340;
    pub const m_bHud_MiniScoreHidden: usize = 0x1344;
    pub const m_bHud_RadarHidden: usize = 0x1345;
    pub const m_nLastKillerIndex: usize = 0x1348;
    pub const m_nLastConcurrentKilled: usize = 0x134c;
    pub const m_nDeathCamMusic: usize = 0x1350;
    pub const m_iAddonBits: usize = 0x1354;
    pub const m_iPrimaryAddon: usize = 0x1358;
    pub const m_iSecondaryAddon: usize = 0x135c;
    pub const m_nTeamDamageGivenForMatch: usize = 0x1360;
    pub const m_bTDGaveProtectionWarning: usize = 0x1364;
    pub const m_bTDGaveProtectionWarningThisRound: usize = 0x1365;
    pub const m_flLastTHWarningTime: usize = 0x1368;
    pub const m_currentDeafnessFilter: usize = 0x136c;
    pub const m_enemyPlayersKilledThisRound: usize = 0x1370;
    pub const m_NumEnemiesKilledThisSpawn: usize = 0x1388;
    pub const m_maxNumEnemiesKillStreak: usize = 0x138c;
    pub const m_NumEnemiesKilledThisRound: usize = 0x1390;
    pub const m_NumEnemiesAtRoundStart: usize = 0x1394;
    pub const m_iRoundsWon: usize = 0x1398;
    pub const m_lastRoundResult: usize = 0x139c;
    pub const m_wasNotKilledNaturally: usize = 0x13a0;
    pub const m_vecPlayerPatchEconIndices: usize = 0x13a4;
    pub const m_iDeathFlags: usize = 0x13b8;
    pub const m_hPet: usize = 0x13bc;
    pub const m_unCurrentEquipmentValue: usize = 0x1588;
    pub const m_unRoundStartEquipmentValue: usize = 0x158a;
    pub const m_unFreezetimeEndEquipmentValue: usize = 0x158c;
    pub const m_szLastPlaceName: usize = 0x158e;
    pub const m_nSuicides: usize = 0x15a0;
    pub const m_nSurvivalTeamNumber: usize = 0x15a4;
    pub const m_aimPunchAngle: usize = 0x15a8;
    pub const m_aimPunchAngleVel: usize = 0x15b4;
    pub const m_aimPunchTickBase: usize = 0x15c0;
    pub const m_aimPunchTickFraction: usize = 0x15c4;
    pub const m_aimPunchCache: usize = 0x15c8;
    pub const m_bHasDeathInfo: usize = 0x15e0;
    pub const m_flDeathInfoTime: usize = 0x15e4;
    pub const m_vecDeathInfoOrigin: usize = 0x15e8;
    pub const m_bKilledByHeadshot: usize = 0x15f4;
    pub const m_LastHitBox: usize = 0x15f8;
    pub const m_LastHealth: usize = 0x15fc;
    pub const m_flLastCollisionCeiling: usize = 0x1600;
    pub const m_flLastCollisionCeilingChangeTime: usize = 0x1604;
    pub const m_strVOPrefix: usize = 0x1608;
    pub const m_flLandseconds: usize = 0x1610;
    pub const m_pBot: usize = 0x1618;
    pub const m_bBotAllowActive: usize = 0x1620;
    pub const m_bCommittingSuicideOnTeamChange: usize = 0x1621;
}

pub mod CCSPlayerResource {
    pub const m_bHostageAlive: usize = 0x4b0;
    pub const m_isHostageFollowingSomeone: usize = 0x4bc;
    pub const m_iHostageEntityIDs: usize = 0x4c8;
    pub const m_bombsiteCenterA: usize = 0x4f8;
    pub const m_bombsiteCenterB: usize = 0x504;
    pub const m_hostageRescueX: usize = 0x510;
    pub const m_hostageRescueY: usize = 0x520;
    pub const m_hostageRescueZ: usize = 0x530;
    pub const m_bEndMatchNextMapAllVoted: usize = 0x540;
    pub const m_foundGoalPositions: usize = 0x541;
}

pub mod CCSPlayer_ActionTrackingServices {
    pub const m_hLastWeaponBeforeC4AutoSwitch: usize = 0x230;
    pub const m_bIsRescuing: usize = 0x264;
    pub const m_weaponPurchasesThisMatch: usize = 0x268;
    pub const m_weaponPurchasesThisRound: usize = 0x2c0;
}

pub mod CCSPlayer_BulletServices {
    pub const m_totalHitsOnServer: usize = 0x40;
}

pub mod CCSPlayer_BuyServices {
    pub const m_vecSellbackPurchaseEntries: usize = 0xc8;
}

pub mod CCSPlayer_CameraServices {
    pub const m_iFOV: usize = 0x170;
    pub const m_iFOVStart: usize = 0x174;
    pub const m_flFOVTime: usize = 0x178;
    pub const m_flFOVRate: usize = 0x17c;
    pub const m_hZoomOwner: usize = 0x180;
    pub const m_hTriggerFogList: usize = 0x188;
    pub const m_hLastFogTrigger: usize = 0x1a0;
}

pub mod CCSPlayer_HostageServices {
    pub const m_hCarriedHostage: usize = 0x40;
    pub const m_hCarriedHostageProp: usize = 0x44;
}

pub mod CCSPlayer_ItemServices {
    pub const m_bHasDefuser: usize = 0x40;
    pub const m_bHasHelmet: usize = 0x41;
    pub const m_bHasHeavyArmor: usize = 0x42;
}

pub mod CCSPlayer_MovementServices {
    pub const m_flMaxFallVelocity: usize = 0x220;
    pub const m_vecLadderNormal: usize = 0x224;
    pub const m_nLadderSurfacePropIndex: usize = 0x230;
    pub const m_flDuckAmount: usize = 0x234;
    pub const m_flDuckSpeed: usize = 0x238;
    pub const m_bDuckOverride: usize = 0x23c;
    pub const m_bDesiresDuck: usize = 0x23d;
    pub const m_flDuckOffset: usize = 0x240;
    pub const m_nDuckTimeMsecs: usize = 0x244;
    pub const m_nDuckJumpTimeMsecs: usize = 0x248;
    pub const m_nJumpTimeMsecs: usize = 0x24c;
    pub const m_flLastDuckTime: usize = 0x250;
    pub const m_vecLastPositionAtFullCrouchSpeed: usize = 0x260;
    pub const m_duckUntilOnGround: usize = 0x268;
    pub const m_bHasWalkMovedSinceLastJump: usize = 0x269;
    pub const m_bInStuckTest: usize = 0x26a;
    pub const m_flStuckCheckTime: usize = 0x278;
    pub const m_nTraceCount: usize = 0x478;
    pub const m_StuckLast: usize = 0x47c;
    pub const m_bSpeedCropped: usize = 0x480;
    pub const m_nOldWaterLevel: usize = 0x484;
    pub const m_flWaterEntryTime: usize = 0x488;
    pub const m_vecForward: usize = 0x48c;
    pub const m_vecLeft: usize = 0x498;
    pub const m_vecUp: usize = 0x4a4;
    pub const m_vecPreviouslyPredictedOrigin: usize = 0x4b0;
    pub const m_bMadeFootstepNoise: usize = 0x4bc;
    pub const m_iFootsteps: usize = 0x4c0;
    pub const m_nRoundFootstepsMade: usize = 0x4c4;
    pub const m_bOldJumpPressed: usize = 0x4c8;
    pub const m_flJumpPressedTime: usize = 0x4cc;
    pub const m_flJumpUntil: usize = 0x4d0;
    pub const m_flJumpVel: usize = 0x4d4;
    pub const m_fStashGrenadeParameterWhen: usize = 0x4d8;
    pub const m_nButtonDownMaskPrev: usize = 0x4e0;
    pub const m_flOffsetTickCompleteTime: usize = 0x4e8;
    pub const m_flOffsetTickStashedSpeed: usize = 0x4ec;
}

pub mod CCSPlayer_PingServices {
    pub const m_flPlayerPingTokens: usize = 0x40;
    pub const m_hPlayerPing: usize = 0x54;
}

pub mod CCSPlayer_RadioServices {
    pub const m_flGotHostageTalkTimer: usize = 0x40;
    pub const m_flDefusingTalkTimer: usize = 0x44;
    pub const m_flC4PlantTalkTimer: usize = 0x48;
    pub const m_flRadioTokenSlots: usize = 0x4c;
    pub const m_bIgnoreRadio: usize = 0x58;
}

pub mod CCSPlayer_UseServices {
    pub const m_hLastKnownUseEntity: usize = 0x40;
    pub const m_flLastUseTimeStamp: usize = 0x44;
    pub const m_flTimeStartedHoldingUse: usize = 0x48;
    pub const m_flTimeLastUsedWindow: usize = 0x4c;
}

pub mod CCSPlayer_ViewModelServices {
    pub const m_hViewModel: usize = 0x40;
}

pub mod CCSPlayer_WaterServices {
    pub const m_NextDrownDamageTime: usize = 0x40;
    pub const m_nDrownDmgRate: usize = 0x44;
    pub const m_AirFinishedTime: usize = 0x48;
    pub const m_flWaterJumpTime: usize = 0x4c;
    pub const m_vecWaterJumpVel: usize = 0x50;
    pub const m_flSwimSoundTime: usize = 0x5c;
}

pub mod CCSPlayer_WeaponServices {
    pub const m_flNextAttack: usize = 0xb0;
    pub const m_bIsLookingAtWeapon: usize = 0xb4;
    pub const m_bIsHoldingLookAtWeapon: usize = 0xb5;
    pub const m_hSavedWeapon: usize = 0xb8;
    pub const m_nTimeToMelee: usize = 0xbc;
    pub const m_nTimeToSecondary: usize = 0xc0;
    pub const m_nTimeToPrimary: usize = 0xc4;
    pub const m_nTimeToSniperRifle: usize = 0xc8;
    pub const m_bIsBeingGivenItem: usize = 0xcc;
    pub const m_bIsPickingUpItemWithUse: usize = 0xcd;
    pub const m_bPickedUpWeapon: usize = 0xce;
}

pub mod CCSPropExplodingBarrel {
    pub const m_hBarrelTop: usize = 0xb78;
    pub const m_bExploded: usize = 0xb7c;
    pub const m_nAccumulatedDamage: usize = 0xb80;
}

pub mod CCSPropExplodingBarrelTop {
    pub const m_flOverrideAlpha: usize = 0xb70;
}

pub mod CCSTeam {
    pub const m_nLastRecievedShorthandedRoundBonus: usize = 0x568;
    pub const m_nShorthandedRoundBonusStartRound: usize = 0x56c;
    pub const m_bSurrendered: usize = 0x570;
    pub const m_szTeamMatchStat: usize = 0x571;
    pub const m_numMapVictories: usize = 0x774;
    pub const m_scoreFirstHalf: usize = 0x778;
    pub const m_scoreSecondHalf: usize = 0x77c;
    pub const m_scoreOvertime: usize = 0x780;
    pub const m_szClanTeamname: usize = 0x784;
    pub const m_iClanID: usize = 0x808;
    pub const m_szTeamFlagImage: usize = 0x80c;
    pub const m_szTeamLogoImage: usize = 0x814;
    pub const m_flNextResourceTime: usize = 0x81c;
    pub const m_iLastUpdateSentAt: usize = 0x820;
    pub const m_flLastPlayerSortTime: usize = 0x824;
    pub const m_nLastGGLeader_CT: usize = 0x828;
    pub const m_nLastGGLeader_T: usize = 0x82c;
    pub const m_nGGLeaderSlot_CT: usize = 0x830;
    pub const m_nGGLeaderSlot_T: usize = 0x834;
    pub const m_bGGHasLeader_CT: usize = 0x838;
    pub const m_bGGHasLeader_T: usize = 0x839;
}

pub mod CChangeLevel {
    pub const m_sMapName: usize = 0x8a8;
    pub const m_sLandmarkName: usize = 0x8b0;
    pub const m_OnChangeLevel: usize = 0x8b8;
    pub const m_bTouched: usize = 0x8e0;
    pub const m_bNoTouch: usize = 0x8e1;
    pub const m_bNewChapter: usize = 0x8e2;
    pub const m_bOnChangeLevelFired: usize = 0x8e3;
}

pub mod CChicken {
    pub const m_AttributeManager: usize = 0xb20;
    pub const m_OriginalOwnerXuidLow: usize = 0xde8;
    pub const m_OriginalOwnerXuidHigh: usize = 0xdec;
    pub const m_updateTimer: usize = 0xdf0;
    pub const m_stuckAnchor: usize = 0xe08;
    pub const m_stuckTimer: usize = 0xe18;
    pub const m_collisionStuckTimer: usize = 0xe30;
    pub const m_isOnGround: usize = 0xe48;
    pub const m_activity: usize = 0xe4c;
    pub const m_activityTimer: usize = 0xe50;
    pub const m_turnRate: usize = 0xe68;
    pub const m_fleeFrom: usize = 0xe6c;
    pub const m_moveRateThrottleTimer: usize = 0xe70;
    pub const m_startleTimer: usize = 0xe88;
    pub const m_vocalizeTimer: usize = 0xea0;
    pub const m_flWhenZombified: usize = 0xeb8;
    pub const m_jumpedThisFrame: usize = 0xebc;
    pub const m_leader: usize = 0xec0;
    pub const m_reuseTimer: usize = 0xec8;
    pub const m_hasBeenUsed: usize = 0xee0;
    pub const m_jumpTimer: usize = 0xee8;
    pub const m_flLastJumpTime: usize = 0xf00;
    pub const m_bInJump: usize = 0xf04;
    pub const m_isWaitingForLeader: usize = 0xf05;
    pub const m_repathTimer: usize = 0x2f10;
    pub const m_inhibitDoorTimer: usize = 0x2f28;
    pub const m_inhibitObstacleAvoidanceTimer: usize = 0x2fb8;
    pub const m_vecPathGoal: usize = 0x2fd8;
    pub const m_flActiveFollowStartTime: usize = 0x2fe4;
    pub const m_followMinuteTimer: usize = 0x2fe8;
    pub const m_vecLastEggPoopPosition: usize = 0x3000;
    pub const m_vecEggsPooped: usize = 0x3010;
    pub const m_BlockDirectionTimer: usize = 0x3030;
}

pub mod CCollisionProperty {
    pub const m_collisionAttribute: usize = 0x10;
    pub const m_vecMins: usize = 0x40;
    pub const m_vecMaxs: usize = 0x4c;
    pub const m_usSolidFlags: usize = 0x5a;
    pub const m_nSolidType: usize = 0x5b;
    pub const m_triggerBloat: usize = 0x5c;
    pub const m_nSurroundType: usize = 0x5d;
    pub const m_CollisionGroup: usize = 0x5e;
    pub const m_nEnablePhysics: usize = 0x5f;
    pub const m_flBoundingRadius: usize = 0x60;
    pub const m_vecSpecifiedSurroundingMins: usize = 0x64;
    pub const m_vecSpecifiedSurroundingMaxs: usize = 0x70;
    pub const m_vecSurroundingMaxs: usize = 0x7c;
    pub const m_vecSurroundingMins: usize = 0x88;
    pub const m_vCapsuleCenter1: usize = 0x94;
    pub const m_vCapsuleCenter2: usize = 0xa0;
    pub const m_flCapsuleRadius: usize = 0xac;
}

pub mod CColorCorrection {
    pub const m_flFadeInDuration: usize = 0x4b0;
    pub const m_flFadeOutDuration: usize = 0x4b4;
    pub const m_flStartFadeInWeight: usize = 0x4b8;
    pub const m_flStartFadeOutWeight: usize = 0x4bc;
    pub const m_flTimeStartFadeIn: usize = 0x4c0;
    pub const m_flTimeStartFadeOut: usize = 0x4c4;
    pub const m_flMaxWeight: usize = 0x4c8;
    pub const m_bStartDisabled: usize = 0x4cc;
    pub const m_bEnabled: usize = 0x4cd;
    pub const m_bMaster: usize = 0x4ce;
    pub const m_bClientSide: usize = 0x4cf;
    pub const m_bExclusive: usize = 0x4d0;
    pub const m_MinFalloff: usize = 0x4d4;
    pub const m_MaxFalloff: usize = 0x4d8;
    pub const m_flCurWeight: usize = 0x4dc;
    pub const m_netlookupFilename: usize = 0x4e0;
    pub const m_lookupFilename: usize = 0x6e0;
}

pub mod CColorCorrectionVolume {
    pub const m_bEnabled: usize = 0x8a8;
    pub const m_MaxWeight: usize = 0x8ac;
    pub const m_FadeDuration: usize = 0x8b0;
    pub const m_bStartDisabled: usize = 0x8b4;
    pub const m_Weight: usize = 0x8b8;
    pub const m_lookupFilename: usize = 0x8bc;
    pub const m_LastEnterWeight: usize = 0xabc;
    pub const m_LastEnterTime: usize = 0xac0;
    pub const m_LastExitWeight: usize = 0xac4;
    pub const m_LastExitTime: usize = 0xac8;
}

pub mod CCommentaryAuto {
    pub const m_OnCommentaryNewGame: usize = 0x4b0;
    pub const m_OnCommentaryMidGame: usize = 0x4d8;
    pub const m_OnCommentaryMultiplayerSpawn: usize = 0x500;
}

pub mod CCommentarySystem {
    pub const m_bCommentaryConvarsChanging: usize = 0x11;
    pub const m_bCommentaryEnabledMidGame: usize = 0x12;
    pub const m_flNextTeleportTime: usize = 0x14;
    pub const m_iTeleportStage: usize = 0x18;
    pub const m_bCheatState: usize = 0x1c;
    pub const m_bIsFirstSpawnGroupToLoad: usize = 0x1d;
    pub const m_hCurrentNode: usize = 0x38;
    pub const m_hActiveCommentaryNode: usize = 0x3c;
    pub const m_hLastCommentaryNode: usize = 0x40;
    pub const m_vecNodes: usize = 0x48;
}

pub mod CConstantForceController {
    pub const m_linear: usize = 0xc;
    pub const m_angular: usize = 0x18;
    pub const m_linearSave: usize = 0x24;
    pub const m_angularSave: usize = 0x30;
}

pub mod CConstraintAnchor {
    pub const m_massScale: usize = 0x888;
}

pub mod CCopyRecipientFilter {
    pub const m_Flags: usize = 0x8;
    pub const m_Recipients: usize = 0x10;
}

pub mod CCredits {
    pub const m_OnCreditsDone: usize = 0x4b0;
    pub const m_bRolledOutroCredits: usize = 0x4d8;
    pub const m_flLogoLength: usize = 0x4dc;
}

pub mod CDZDoor {
    pub const m_bIsSecurityDoor: usize = 0xe50;
    pub const m_hSpawnPoint: usize = 0xe54;
    pub const m_bPaidToUnlock: usize = 0xe58;
    pub const m_nPlayDoorOpenSound: usize = 0xe5c;
    pub const m_nAttachmentIndex1: usize = 0xe90;
    pub const m_nAttachmentIndex2: usize = 0xe91;
}

pub mod CDamageRecord {
    pub const m_PlayerDamager: usize = 0x28;
    pub const m_PlayerRecipient: usize = 0x2c;
    pub const m_hPlayerControllerDamager: usize = 0x30;
    pub const m_hPlayerControllerRecipient: usize = 0x34;
    pub const m_szPlayerDamagerName: usize = 0x38;
    pub const m_szPlayerRecipientName: usize = 0x40;
    pub const m_DamagerXuid: usize = 0x48;
    pub const m_RecipientXuid: usize = 0x50;
    pub const m_iDamage: usize = 0x58;
    pub const m_iActualHealthRemoved: usize = 0x5c;
    pub const m_iNumHits: usize = 0x60;
    pub const m_iLastBulletUpdate: usize = 0x64;
    pub const m_bIsOtherEnemy: usize = 0x68;
    pub const m_killType: usize = 0x69;
}

pub mod CDangerZone {
    pub const m_vecDangerZoneOriginStartedAt: usize = 0x4b0;
    pub const m_flBombLaunchTime: usize = 0x4bc;
    pub const m_flExtraRadius: usize = 0x4c0;
    pub const m_flExtraRadiusStartTime: usize = 0x4c4;
    pub const m_flExtraRadiusTotalLerpTime: usize = 0x4c8;
    pub const m_nDropOrder: usize = 0x4cc;
    pub const m_iWave: usize = 0x4d0;
    pub const m_nMyZoneIndex: usize = 0x4d4;
    pub const m_nZoneNeighbors: usize = 0x4d8;
}

pub mod CDangerZoneController {
    pub const m_bDangerZoneControllerEnabled: usize = 0x4b0;
    pub const m_bMissionControlledExplosions: usize = 0x4b1;
    pub const m_vecEndGameCircleStart: usize = 0x4b4;
    pub const m_vecEndGameCircleEnd: usize = 0x4c0;
    pub const m_flStartTime: usize = 0x4cc;
    pub const m_flFinalExpansionTime: usize = 0x4d0;
    pub const m_DangerZones: usize = 0x4d4;
    pub const m_flWaveEndTimes: usize = 0x57c;
    pub const m_hTheFinalZone: usize = 0x590;
    pub const m_flLastDangerZoneStatusLogged: usize = 0x594;
    pub const m_flLastDangerZoneDamageTime: usize = 0x598;
    pub const m_bFirstBombWarning: usize = 0x59c;
    pub const m_numWaveRewardsGranted: usize = 0x5a0;
    pub const m_pGasCanLaunchers: usize = 0x5a8;
}

pub mod CDebugHistory {
    pub const m_nNpcEvents: usize = 0x44f0;
}

pub mod CDecoyProjectile {
    pub const m_shotsRemaining: usize = 0xa28;
    pub const m_fExpireTime: usize = 0xa2c;
    pub const m_decoyWeaponDefIndex: usize = 0xa38;
}

pub mod CDrone {
    pub const m_hMoveToThisEntity: usize = 0xb88;
    pub const m_hDeliveryCargo: usize = 0xb8c;
    pub const m_hRecentCargo: usize = 0xb90;
    pub const m_bPilotTakeoverAllowed: usize = 0xb94;
    pub const m_hPotentialCargo: usize = 0xb98;
    pub const m_hCurrentPilot: usize = 0xb9c;
    pub const m_vecTagPositions: usize = 0xba0;
    pub const m_vecTagIncrements: usize = 0xcc0;
    pub const m_flLastUpdateTargetScanTime: usize = 0xd20;
    pub const m_bWasControlledByPlayer: usize = 0xd24;
    pub const m_bHovering: usize = 0xd25;
    pub const m_pStateSound: usize = 0xd28;
    pub const m_vecGroundOffset: usize = 0xd30;
    pub const m_bQueuingOrders: usize = 0xd58;
    pub const m_flLastOrdersChangeTimestamp: usize = 0xd5c;
    pub const m_vecLastKnownAcceleration: usize = 0xd60;
    pub const m_vecLastKnownVelocity: usize = 0xd6c;
    pub const m_vecLastKnownAngImpulse: usize = 0xd78;
    pub const m_flLastKnownSpeed: usize = 0xd84;
    pub const m_flMaxSpeed: usize = 0xd88;
    pub const m_vecCurrentDestination: usize = 0xd8c;
    pub const m_flLastKnownDistanceToDestination: usize = 0xd98;
    pub const m_flLastKnownWaypointAccuracy: usize = 0xd9c;
    pub const m_vecWaypointQueue: usize = 0xda0;
    pub const m_vecSparsePositionHistory: usize = 0xdb8;
    pub const m_vecPositionHistory: usize = 0xdd0;
    pub const m_vecUnstuckQueue: usize = 0xde8;
    pub const m_flLastKnownGroundHeight: usize = 0xe00;
    pub const m_GroundCheckTimer: usize = 0xe08;
    pub const m_ActInjuredTimer: usize = 0xe20;
    pub const m_flPowerCutUntil: usize = 0xe38;
    pub const m_WanderTimer: usize = 0xe40;
    pub const m_flLastTimeSawAttackTarget: usize = 0xe58;
    pub const m_vecLastKnownAttackTargetPosition: usize = 0xe5c;
    pub const m_hAttackTarget: usize = 0xe68;
    pub const m_IntervalThinkTimer: usize = 0xe70;
    pub const m_bDoIntervalThink: usize = 0xe88;
    pub const m_flLastDroppedGrenadeAt: usize = 0xe8c;
    pub const m_flSpawnTimeStamp: usize = 0xe90;
    pub const m_bInPlayArea: usize = 0xe94;
    pub const m_vecSpawnPosition: usize = 0xe98;
    pub const m_vecLastKnownMoveToEntityPosition: usize = 0xea4;
    pub const m_tCargoCollisionGroup: usize = 0xeb0;
    pub const m_flTimeArrivedAtMoveToEntity: usize = 0xeb4;
    pub const m_vecAvoidanceDir: usize = 0xeb8;
    pub const m_flAvoidanceTime: usize = 0xec4;
    pub const m_bUpgraded: usize = 0xec8;
    pub const m_hCargoOwner: usize = 0xecc;
    pub const m_vecPlayerControlThrust: usize = 0xed8;
    pub const m_flRopeLength: usize = 0xee4;
    pub const m_bDidDropOnRoofWarning: usize = 0xee8;
    pub const m_flSelfDestructTime: usize = 0xeec;
    pub const m_bSelfDestructFire: usize = 0xef0;
    pub const m_bSelfDestructSpark: usize = 0xef1;
    pub const m_hLastKnownPilot: usize = 0xef4;
    pub const m_bHasAlwaysBeenInZone: usize = 0xef8;
    pub const m_nJammedAmount: usize = 0xefc;
    pub const m_hPlayerThatOrderedMe: usize = 0xf00;
}

pub mod CDronegun {
    pub const m_vecAttentionTarget: usize = 0x898;
    pub const m_vecTargetOffset: usize = 0x8a4;
    pub const m_bHasTarget: usize = 0x8b0;
    pub const m_vecAttentionCurrent: usize = 0x8b4;
    pub const m_nPoseParamPitch: usize = 0x8c0;
    pub const m_nPoseParamYaw: usize = 0x8c4;
    pub const m_bVarInit: usize = 0x8c8;
    pub const m_flDisorientEndTime: usize = 0x8cc;
    pub const m_hEnvGunfire: usize = 0x8e8;
    pub const m_flLastShootTime: usize = 0x8ec;
    pub const m_flLastSound1: usize = 0x8f0;
    pub const m_flLastSound2: usize = 0x8f4;
    pub const m_flLastSound3: usize = 0x8f8;
    pub const m_nAttachMuzzle: usize = 0x8fc;
}

pub mod CDynamicLight {
    pub const m_ActualFlags: usize = 0x700;
    pub const m_Flags: usize = 0x701;
    pub const m_LightStyle: usize = 0x702;
    pub const m_On: usize = 0x703;
    pub const m_Radius: usize = 0x704;
    pub const m_Exponent: usize = 0x708;
    pub const m_InnerAngle: usize = 0x70c;
    pub const m_OuterAngle: usize = 0x710;
    pub const m_SpotRadius: usize = 0x714;
}

pub mod CDynamicProp {
    pub const m_bCreateNavObstacle: usize = 0xa08;
    pub const m_bUseHitboxesForRenderBox: usize = 0xa09;
    pub const m_bUseAnimGraph: usize = 0xa0a;
    pub const m_pOutputAnimBegun: usize = 0xa10;
    pub const m_pOutputAnimOver: usize = 0xa38;
    pub const m_pOutputAnimLoopCycleOver: usize = 0xa60;
    pub const m_OnAnimReachedStart: usize = 0xa88;
    pub const m_OnAnimReachedEnd: usize = 0xab0;
    pub const m_iszDefaultAnim: usize = 0xad8;
    pub const m_nDefaultAnimLoopMode: usize = 0xae0;
    pub const m_bAnimateOnServer: usize = 0xae4;
    pub const m_bRandomizeCycle: usize = 0xae5;
    pub const m_bStartDisabled: usize = 0xae6;
    pub const m_bScriptedMovement: usize = 0xae7;
    pub const m_bFiredStartEndOutput: usize = 0xae8;
    pub const m_bForceNpcExclude: usize = 0xae9;
    pub const m_bCreateNonSolid: usize = 0xaea;
    pub const m_bIsOverrideProp: usize = 0xaeb;
    pub const m_iInitialGlowState: usize = 0xaec;
    pub const m_nGlowRange: usize = 0xaf0;
    pub const m_nGlowRangeMin: usize = 0xaf4;
    pub const m_glowColor: usize = 0xaf8;
    pub const m_nGlowTeam: usize = 0xafc;
}

pub mod CEconEntity {
    pub const m_AttributeManager: usize = 0x928;
    pub const m_OriginalOwnerXuidLow: usize = 0xbf0;
    pub const m_OriginalOwnerXuidHigh: usize = 0xbf4;
    pub const m_nFallbackPaintKit: usize = 0xbf8;
    pub const m_nFallbackSeed: usize = 0xbfc;
    pub const m_flFallbackWear: usize = 0xc00;
    pub const m_nFallbackStatTrak: usize = 0xc04;
    pub const m_hOldProvidee: usize = 0xc08;
    pub const m_iOldOwnerClass: usize = 0xc0c;
}

pub mod CEconItemAttribute {
    pub const m_iAttributeDefinitionIndex: usize = 0x30;
    pub const m_flValue: usize = 0x34;
    pub const m_flInitialValue: usize = 0x38;
    pub const m_nRefundableCurrency: usize = 0x3c;
    pub const m_bSetBonus: usize = 0x40;
}

pub mod CEconItemView {
    pub const m_iItemDefinitionIndex: usize = 0x38;
    pub const m_iEntityQuality: usize = 0x3c;
    pub const m_iEntityLevel: usize = 0x40;
    pub const m_iItemID: usize = 0x48;
    pub const m_iItemIDHigh: usize = 0x50;
    pub const m_iItemIDLow: usize = 0x54;
    pub const m_iAccountID: usize = 0x58;
    pub const m_iInventoryPosition: usize = 0x5c;
    pub const m_bInitialized: usize = 0x68;
    pub const m_AttributeList: usize = 0x70;
    pub const m_NetworkedDynamicAttributes: usize = 0xd0;
    pub const m_szCustomName: usize = 0x130;
    pub const m_szCustomNameOverride: usize = 0x1d1;
}

pub mod CEconWearable {
    pub const m_nForceSkin: usize = 0xc10;
    pub const m_bAlwaysAllow: usize = 0xc14;
}

pub mod CEffectData {
    pub const m_vOrigin: usize = 0x8;
    pub const m_vStart: usize = 0x14;
    pub const m_vNormal: usize = 0x20;
    pub const m_vAngles: usize = 0x2c;
    pub const m_hEntity: usize = 0x38;
    pub const m_hOtherEntity: usize = 0x3c;
    pub const m_flScale: usize = 0x40;
    pub const m_flMagnitude: usize = 0x44;
    pub const m_flRadius: usize = 0x48;
    pub const m_nSurfaceProp: usize = 0x4c;
    pub const m_nEffectIndex: usize = 0x50;
    pub const m_nDamageType: usize = 0x58;
    pub const m_nPenetrate: usize = 0x5c;
    pub const m_nMaterial: usize = 0x5e;
    pub const m_nHitBox: usize = 0x60;
    pub const m_nColor: usize = 0x62;
    pub const m_fFlags: usize = 0x63;
    pub const m_nAttachmentIndex: usize = 0x64;
    pub const m_nAttachmentName: usize = 0x68;
    pub const m_iEffectName: usize = 0x6c;
    pub const m_nExplosionType: usize = 0x6e;
}

pub mod CEntityDissolve {
    pub const m_flFadeInStart: usize = 0x700;
    pub const m_flFadeInLength: usize = 0x704;
    pub const m_flFadeOutModelStart: usize = 0x708;
    pub const m_flFadeOutModelLength: usize = 0x70c;
    pub const m_flFadeOutStart: usize = 0x710;
    pub const m_flFadeOutLength: usize = 0x714;
    pub const m_flStartTime: usize = 0x718;
    pub const m_nDissolveType: usize = 0x71c;
    pub const m_vDissolverOrigin: usize = 0x720;
    pub const m_nMagnitude: usize = 0x72c;
}

pub mod CEntityFlame {
    pub const m_hEntAttached: usize = 0x4b0;
    pub const m_bCheapEffect: usize = 0x4b4;
    pub const m_flSize: usize = 0x4b8;
    pub const m_bUseHitboxes: usize = 0x4bc;
    pub const m_iNumHitboxFires: usize = 0x4c0;
    pub const m_flHitboxFireScale: usize = 0x4c4;
    pub const m_flLifetime: usize = 0x4c8;
    pub const m_hAttacker: usize = 0x4cc;
    pub const m_iDangerSound: usize = 0x4d0;
    pub const m_flDirectDamagePerSecond: usize = 0x4d4;
    pub const m_iCustomDamageType: usize = 0x4d8;
}

pub mod CEntityIdentity {
    pub const m_nameStringableIndex: usize = 0x14;
    pub const m_name: usize = 0x18;
    pub const m_designerName: usize = 0x20;
    pub const m_flags: usize = 0x30;
    pub const m_worldGroupId: usize = 0x38;
    pub const m_fDataObjectTypes: usize = 0x3c;
    pub const m_PathIndex: usize = 0x40;
    pub const m_pPrev: usize = 0x58;
    pub const m_pNext: usize = 0x60;
    pub const m_pPrevByClass: usize = 0x68;
    pub const m_pNextByClass: usize = 0x70;
}

pub mod CEntityInstance {
    pub const m_iszPrivateVScripts: usize = 0x8;
    pub const m_pEntity: usize = 0x10;
    pub const m_CScriptComponent: usize = 0x28;
}

pub mod CEnvBeam {
    pub const m_active: usize = 0x7a0;
    pub const m_spriteTexture: usize = 0x7a8;
    pub const m_iszStartEntity: usize = 0x7b0;
    pub const m_iszEndEntity: usize = 0x7b8;
    pub const m_life: usize = 0x7c0;
    pub const m_boltWidth: usize = 0x7c4;
    pub const m_noiseAmplitude: usize = 0x7c8;
    pub const m_speed: usize = 0x7cc;
    pub const m_restrike: usize = 0x7d0;
    pub const m_iszSpriteName: usize = 0x7d8;
    pub const m_frameStart: usize = 0x7e0;
    pub const m_vEndPointWorld: usize = 0x7e4;
    pub const m_vEndPointRelative: usize = 0x7f0;
    pub const m_radius: usize = 0x7fc;
    pub const m_TouchType: usize = 0x800;
    pub const m_iFilterName: usize = 0x808;
    pub const m_hFilter: usize = 0x810;
    pub const m_iszDecal: usize = 0x818;
    pub const m_OnTouchedByEntity: usize = 0x820;
}

pub mod CEnvBeverage {
    pub const m_CanInDispenser: usize = 0x4b0;
    pub const m_nBeverageType: usize = 0x4b4;
}

pub mod CEnvCombinedLightProbeVolume {
    pub const m_Color: usize = 0x1580;
    pub const m_flBrightness: usize = 0x1584;
    pub const m_hCubemapTexture: usize = 0x1588;
    pub const m_bCustomCubemapTexture: usize = 0x1590;
    pub const m_hLightProbeTexture: usize = 0x1598;
    pub const m_hLightProbeDirectLightIndicesTexture: usize = 0x15a0;
    pub const m_hLightProbeDirectLightScalarsTexture: usize = 0x15a8;
    pub const m_hLightProbeDirectLightShadowsTexture: usize = 0x15b0;
    pub const m_vBoxMins: usize = 0x15b8;
    pub const m_vBoxMaxs: usize = 0x15c4;
    pub const m_LightGroups: usize = 0x15d0;
    pub const m_bMoveable: usize = 0x15d8;
    pub const m_nHandshake: usize = 0x15dc;
    pub const m_nEnvCubeMapArrayIndex: usize = 0x15e0;
    pub const m_nPriority: usize = 0x15e4;
    pub const m_bStartDisabled: usize = 0x15e8;
    pub const m_flEdgeFadeDist: usize = 0x15ec;
    pub const m_vEdgeFadeDists: usize = 0x15f0;
    pub const m_nLightProbeSizeX: usize = 0x15fc;
    pub const m_nLightProbeSizeY: usize = 0x1600;
    pub const m_nLightProbeSizeZ: usize = 0x1604;
    pub const m_nLightProbeAtlasX: usize = 0x1608;
    pub const m_nLightProbeAtlasY: usize = 0x160c;
    pub const m_nLightProbeAtlasZ: usize = 0x1610;
    pub const m_bEnabled: usize = 0x1629;
}

pub mod CEnvCubemap {
    pub const m_hCubemapTexture: usize = 0x5a0;
    pub const m_bCustomCubemapTexture: usize = 0x5a8;
    pub const m_flInfluenceRadius: usize = 0x5ac;
    pub const m_vBoxProjectMins: usize = 0x5b0;
    pub const m_vBoxProjectMaxs: usize = 0x5bc;
    pub const m_LightGroups: usize = 0x5c8;
    pub const m_bMoveable: usize = 0x5d0;
    pub const m_nHandshake: usize = 0x5d4;
    pub const m_nEnvCubeMapArrayIndex: usize = 0x5d8;
    pub const m_nPriority: usize = 0x5dc;
    pub const m_flEdgeFadeDist: usize = 0x5e0;
    pub const m_vEdgeFadeDists: usize = 0x5e4;
    pub const m_flDiffuseScale: usize = 0x5f0;
    pub const m_bStartDisabled: usize = 0x5f4;
    pub const m_bDefaultEnvMap: usize = 0x5f5;
    pub const m_bDefaultSpecEnvMap: usize = 0x5f6;
    pub const m_bIndoorCubeMap: usize = 0x5f7;
    pub const m_bCopyDiffuseFromDefaultCubemap: usize = 0x5f8;
    pub const m_bEnabled: usize = 0x608;
}

pub mod CEnvCubemapFog {
    pub const m_flEndDistance: usize = 0x4b0;
    pub const m_flStartDistance: usize = 0x4b4;
    pub const m_flFogFalloffExponent: usize = 0x4b8;
    pub const m_bHeightFogEnabled: usize = 0x4bc;
    pub const m_flFogHeightWidth: usize = 0x4c0;
    pub const m_flFogHeightEnd: usize = 0x4c4;
    pub const m_flFogHeightStart: usize = 0x4c8;
    pub const m_flFogHeightExponent: usize = 0x4cc;
    pub const m_flLODBias: usize = 0x4d0;
    pub const m_bActive: usize = 0x4d4;
    pub const m_bStartDisabled: usize = 0x4d5;
    pub const m_flFogMaxOpacity: usize = 0x4d8;
    pub const m_nCubemapSourceType: usize = 0x4dc;
    pub const m_hSkyMaterial: usize = 0x4e0;
    pub const m_iszSkyEntity: usize = 0x4e8;
    pub const m_hFogCubemapTexture: usize = 0x4f0;
    pub const m_bHasHeightFogEnd: usize = 0x4f8;
    pub const m_bFirstTime: usize = 0x4f9;
}

pub mod CEnvDecal {
    pub const m_hDecalMaterial: usize = 0x700;
    pub const m_flWidth: usize = 0x708;
    pub const m_flHeight: usize = 0x70c;
    pub const m_flDepth: usize = 0x710;
    pub const m_nRenderOrder: usize = 0x714;
    pub const m_bProjectOnWorld: usize = 0x718;
    pub const m_bProjectOnCharacters: usize = 0x719;
    pub const m_bProjectOnWater: usize = 0x71a;
    pub const m_flDepthSortBias: usize = 0x71c;
}

pub mod CEnvDetailController {
    pub const m_flFadeStartDist: usize = 0x4b0;
    pub const m_flFadeEndDist: usize = 0x4b4;
}

pub mod CEnvEntityIgniter {
    pub const m_flLifetime: usize = 0x4b0;
}

pub mod CEnvEntityMaker {
    pub const m_vecEntityMins: usize = 0x4b0;
    pub const m_vecEntityMaxs: usize = 0x4bc;
    pub const m_hCurrentInstance: usize = 0x4c8;
    pub const m_hCurrentBlocker: usize = 0x4cc;
    pub const m_vecBlockerOrigin: usize = 0x4d0;
    pub const m_angPostSpawnDirection: usize = 0x4dc;
    pub const m_flPostSpawnDirectionVariance: usize = 0x4e8;
    pub const m_flPostSpawnSpeed: usize = 0x4ec;
    pub const m_bPostSpawnUseAngles: usize = 0x4f0;
    pub const m_iszTemplate: usize = 0x4f8;
    pub const m_pOutputOnSpawned: usize = 0x500;
    pub const m_pOutputOnFailedSpawn: usize = 0x528;
}

pub mod CEnvExplosion {
    pub const m_iMagnitude: usize = 0x700;
    pub const m_flPlayerDamage: usize = 0x704;
    pub const m_iRadiusOverride: usize = 0x708;
    pub const m_flInnerRadius: usize = 0x70c;
    pub const m_spriteScale: usize = 0x710;
    pub const m_flDamageForce: usize = 0x714;
    pub const m_hInflictor: usize = 0x718;
    pub const m_iCustomDamageType: usize = 0x71c;
    pub const m_iszExplosionType: usize = 0x728;
    pub const m_iszCustomEffectName: usize = 0x730;
    pub const m_iszCustomSoundName: usize = 0x738;
    pub const m_iClassIgnore: usize = 0x740;
    pub const m_iClassIgnore2: usize = 0x744;
    pub const m_iszEntityIgnoreName: usize = 0x748;
    pub const m_hEntityIgnore: usize = 0x750;
}

pub mod CEnvFade {
    pub const m_fadeColor: usize = 0x4b0;
    pub const m_Duration: usize = 0x4b4;
    pub const m_HoldDuration: usize = 0x4b8;
    pub const m_OnBeginFade: usize = 0x4c0;
}

pub mod CEnvFireSensor {
    pub const m_bEnabled: usize = 0x4b0;
    pub const m_bHeatAtLevel: usize = 0x4b1;
    pub const m_radius: usize = 0x4b4;
    pub const m_targetLevel: usize = 0x4b8;
    pub const m_targetTime: usize = 0x4bc;
    pub const m_levelTime: usize = 0x4c0;
    pub const m_OnHeatLevelStart: usize = 0x4c8;
    pub const m_OnHeatLevelEnd: usize = 0x4f0;
}

pub mod CEnvFireSource {
    pub const m_bEnabled: usize = 0x4b0;
    pub const m_radius: usize = 0x4b4;
    pub const m_damage: usize = 0x4b8;
}

pub mod CEnvGasCanister {
    pub const m_bLanded: usize = 0x888;
    pub const m_flDamageRadius: usize = 0x88c;
    pub const m_flDamage: usize = 0x890;
    pub const m_bIncomingSoundStarted: usize = 0x894;
    pub const m_bHasDetonated: usize = 0x895;
    pub const m_bLaunched: usize = 0x896;
    pub const m_OnLaunched: usize = 0x898;
    pub const m_OnImpacted: usize = 0x8c0;
    pub const m_OnOpened: usize = 0x8e8;
    pub const m_vecImpactPosition: usize = 0x910;
    pub const m_vecStartPosition: usize = 0x91c;
    pub const m_vecEnterWorldPosition: usize = 0x928;
    pub const m_vecDirection: usize = 0x934;
    pub const m_vecStartAngles: usize = 0x940;
    pub const m_flFlightTime: usize = 0x94c;
    pub const m_flFlightSpeed: usize = 0x950;
    pub const m_flLaunchTime: usize = 0x954;
    pub const m_flInitialZSpeed: usize = 0x958;
    pub const m_flZAcceleration: usize = 0x95c;
    pub const m_flHorizSpeed: usize = 0x960;
    pub const m_bLaunchedFromWithinWorld: usize = 0x964;
    pub const m_vecParabolaDirection: usize = 0x968;
    pub const m_flWorldEnterTime: usize = 0x974;
    pub const m_vecSkyboxOrigin: usize = 0x978;
    pub const m_flSkyboxScale: usize = 0x984;
    pub const m_bInSkybox: usize = 0x988;
    pub const m_bDoImpactEffects: usize = 0x989;
    pub const m_nMyZoneIndex: usize = 0x98c;
    pub const m_hSkyboxCopy: usize = 0x990;
    pub const m_flLaunchHeight: usize = 0x994;
}

pub mod CEnvGlobal {
    pub const m_outCounter: usize = 0x4b0;
    pub const m_globalstate: usize = 0x4d8;
    pub const m_triggermode: usize = 0x4e0;
    pub const m_initialstate: usize = 0x4e4;
    pub const m_counter: usize = 0x4e8;
}

pub mod CEnvHudHint {
    pub const m_iszMessage: usize = 0x4b0;
}

pub mod CEnvInstructorHint {
    pub const m_iszName: usize = 0x4b0;
    pub const m_iszReplace_Key: usize = 0x4b8;
    pub const m_iszHintTargetEntity: usize = 0x4c0;
    pub const m_iTimeout: usize = 0x4c8;
    pub const m_iDisplayLimit: usize = 0x4cc;
    pub const m_iszIcon_Onscreen: usize = 0x4d0;
    pub const m_iszIcon_Offscreen: usize = 0x4d8;
    pub const m_iszCaption: usize = 0x4e0;
    pub const m_iszActivatorCaption: usize = 0x4e8;
    pub const m_Color: usize = 0x4f0;
    pub const m_fIconOffset: usize = 0x4f4;
    pub const m_fRange: usize = 0x4f8;
    pub const m_iPulseOption: usize = 0x4fc;
    pub const m_iAlphaOption: usize = 0x4fd;
    pub const m_iShakeOption: usize = 0x4fe;
    pub const m_bStatic: usize = 0x4ff;
    pub const m_bNoOffscreen: usize = 0x500;
    pub const m_bForceCaption: usize = 0x501;
    pub const m_iInstanceType: usize = 0x504;
    pub const m_bSuppressRest: usize = 0x508;
    pub const m_iszBinding: usize = 0x510;
    pub const m_bAllowNoDrawTarget: usize = 0x518;
    pub const m_bAutoStart: usize = 0x519;
    pub const m_bLocalPlayerOnly: usize = 0x51a;
}

pub mod CEnvInstructorVRHint {
    pub const m_iszName: usize = 0x4b0;
    pub const m_iszHintTargetEntity: usize = 0x4b8;
    pub const m_iTimeout: usize = 0x4c0;
    pub const m_iszCaption: usize = 0x4c8;
    pub const m_iszStartSound: usize = 0x4d0;
    pub const m_iLayoutFileType: usize = 0x4d8;
    pub const m_iszCustomLayoutFile: usize = 0x4e0;
    pub const m_iAttachType: usize = 0x4e8;
    pub const m_flHeightOffset: usize = 0x4ec;
}

pub mod CEnvLaser {
    pub const m_iszLaserTarget: usize = 0x7a0;
    pub const m_pSprite: usize = 0x7a8;
    pub const m_iszSpriteName: usize = 0x7b0;
    pub const m_firePosition: usize = 0x7b8;
    pub const m_flStartFrame: usize = 0x7c4;
}

pub mod CEnvLightProbeVolume {
    pub const m_hLightProbeTexture: usize = 0x1490;
    pub const m_hLightProbeDirectLightIndicesTexture: usize = 0x1498;
    pub const m_hLightProbeDirectLightScalarsTexture: usize = 0x14a0;
    pub const m_hLightProbeDirectLightShadowsTexture: usize = 0x14a8;
    pub const m_vBoxMins: usize = 0x14b0;
    pub const m_vBoxMaxs: usize = 0x14bc;
    pub const m_LightGroups: usize = 0x14c8;
    pub const m_bMoveable: usize = 0x14d0;
    pub const m_nHandshake: usize = 0x14d4;
    pub const m_nPriority: usize = 0x14d8;
    pub const m_bStartDisabled: usize = 0x14dc;
    pub const m_nLightProbeSizeX: usize = 0x14e0;
    pub const m_nLightProbeSizeY: usize = 0x14e4;
    pub const m_nLightProbeSizeZ: usize = 0x14e8;
    pub const m_nLightProbeAtlasX: usize = 0x14ec;
    pub const m_nLightProbeAtlasY: usize = 0x14f0;
    pub const m_nLightProbeAtlasZ: usize = 0x14f4;
    pub const m_bEnabled: usize = 0x1501;
}

pub mod CEnvMicrophone {
    pub const m_bDisabled: usize = 0x4b0;
    pub const m_hMeasureTarget: usize = 0x4b4;
    pub const m_nSoundMask: usize = 0x4b8;
    pub const m_flSensitivity: usize = 0x4bc;
    pub const m_flSmoothFactor: usize = 0x4c0;
    pub const m_flMaxRange: usize = 0x4c4;
    pub const m_iszSpeakerName: usize = 0x4c8;
    pub const m_hSpeaker: usize = 0x4d0;
    pub const m_bAvoidFeedback: usize = 0x4d4;
    pub const m_iSpeakerDSPPreset: usize = 0x4d8;
    pub const m_iszListenFilter: usize = 0x4e0;
    pub const m_hListenFilter: usize = 0x4e8;
    pub const m_SoundLevel: usize = 0x4f0;
    pub const m_OnRoutedSound: usize = 0x518;
    pub const m_OnHeardSound: usize = 0x540;
    pub const m_szLastSound: usize = 0x568;
    pub const m_iLastRoutedFrame: usize = 0x668;
}

pub mod CEnvMuzzleFlash {
    pub const m_flScale: usize = 0x4b0;
    pub const m_iszParentAttachment: usize = 0x4b8;
}

pub mod CEnvParticleGlow {
    pub const m_flAlphaScale: usize = 0xc78;
    pub const m_flRadiusScale: usize = 0xc7c;
    pub const m_flSelfIllumScale: usize = 0xc80;
    pub const m_ColorTint: usize = 0xc84;
    pub const m_hTextureOverride: usize = 0xc88;
}

pub mod CEnvProjectedTexture {
    pub const m_hTargetEntity: usize = 0x700;
    pub const m_bState: usize = 0x704;
    pub const m_bAlwaysUpdate: usize = 0x705;
    pub const m_flLightFOV: usize = 0x708;
    pub const m_bEnableShadows: usize = 0x70c;
    pub const m_bSimpleProjection: usize = 0x70d;
    pub const m_bLightOnlyTarget: usize = 0x70e;
    pub const m_bLightWorld: usize = 0x70f;
    pub const m_bCameraSpace: usize = 0x710;
    pub const m_flBrightnessScale: usize = 0x714;
    pub const m_LightColor: usize = 0x718;
    pub const m_flIntensity: usize = 0x71c;
    pub const m_flLinearAttenuation: usize = 0x720;
    pub const m_flQuadraticAttenuation: usize = 0x724;
    pub const m_bVolumetric: usize = 0x728;
    pub const m_flNoiseStrength: usize = 0x72c;
    pub const m_flFlashlightTime: usize = 0x730;
    pub const m_nNumPlanes: usize = 0x734;
    pub const m_flPlaneOffset: usize = 0x738;
    pub const m_flVolumetricIntensity: usize = 0x73c;
    pub const m_flColorTransitionTime: usize = 0x740;
    pub const m_flAmbient: usize = 0x744;
    pub const m_SpotlightTextureName: usize = 0x748;
    pub const m_nSpotlightTextureFrame: usize = 0x948;
    pub const m_nShadowQuality: usize = 0x94c;
    pub const m_flNearZ: usize = 0x950;
    pub const m_flFarZ: usize = 0x954;
    pub const m_flProjectionSize: usize = 0x958;
    pub const m_flRotation: usize = 0x95c;
    pub const m_bFlipHorizontal: usize = 0x960;
}

pub mod CEnvScreenOverlay {
    pub const m_iszOverlayNames: usize = 0x4b0;
    pub const m_flOverlayTimes: usize = 0x500;
    pub const m_flStartTime: usize = 0x528;
    pub const m_iDesiredOverlay: usize = 0x52c;
    pub const m_bIsActive: usize = 0x530;
}

pub mod CEnvShake {
    pub const m_limitToEntity: usize = 0x4b0;
    pub const m_Amplitude: usize = 0x4b8;
    pub const m_Frequency: usize = 0x4bc;
    pub const m_Duration: usize = 0x4c0;
    pub const m_Radius: usize = 0x4c4;
    pub const m_stopTime: usize = 0x4c8;
    pub const m_nextShake: usize = 0x4cc;
    pub const m_currentAmp: usize = 0x4d0;
    pub const m_maxForce: usize = 0x4d4;
    pub const m_shakeCallback: usize = 0x4e8;
}

pub mod CEnvSky {
    pub const m_hSkyMaterial: usize = 0x700;
    pub const m_hSkyMaterialLightingOnly: usize = 0x708;
    pub const m_bStartDisabled: usize = 0x710;
    pub const m_vTintColor: usize = 0x711;
    pub const m_vTintColorLightingOnly: usize = 0x715;
    pub const m_flBrightnessScale: usize = 0x71c;
    pub const m_nFogType: usize = 0x720;
    pub const m_flFogMinStart: usize = 0x724;
    pub const m_flFogMinEnd: usize = 0x728;
    pub const m_flFogMaxStart: usize = 0x72c;
    pub const m_flFogMaxEnd: usize = 0x730;
    pub const m_bEnabled: usize = 0x734;
}

pub mod CEnvSoundscape {
    pub const m_OnPlay: usize = 0x4b0;
    pub const m_flRadius: usize = 0x4d8;
    pub const m_soundscapeName: usize = 0x4e0;
    pub const m_soundEventName: usize = 0x4e8;
    pub const m_bOverrideWithEvent: usize = 0x4f0;
    pub const m_soundscapeIndex: usize = 0x4f4;
    pub const m_soundscapeEntityListId: usize = 0x4f8;
    pub const m_soundEventHash: usize = 0x4fc;
    pub const m_positionNames: usize = 0x500;
    pub const m_hProxySoundscape: usize = 0x540;
    pub const m_bDisabled: usize = 0x544;
}

pub mod CEnvSoundscapeProxy {
    pub const m_MainSoundscapeName: usize = 0x548;
}

pub mod CEnvSpark {
    pub const m_flDelay: usize = 0x4b0;
    pub const m_nMagnitude: usize = 0x4b4;
    pub const m_nTrailLength: usize = 0x4b8;
    pub const m_nType: usize = 0x4bc;
    pub const m_OnSpark: usize = 0x4c0;
}

pub mod CEnvSplash {
    pub const m_flScale: usize = 0x4b0;
}

pub mod CEnvTilt {
    pub const m_Duration: usize = 0x4b0;
    pub const m_Radius: usize = 0x4b4;
    pub const m_TiltTime: usize = 0x4b8;
    pub const m_stopTime: usize = 0x4bc;
}

pub mod CEnvTracer {
    pub const m_vecEnd: usize = 0x4b0;
    pub const m_flDelay: usize = 0x4bc;
}

pub mod CEnvViewPunch {
    pub const m_flRadius: usize = 0x4b0;
    pub const m_angViewPunch: usize = 0x4b4;
}

pub mod CEnvVolumetricFogController {
    pub const m_flScattering: usize = 0x4b0;
    pub const m_flAnisotropy: usize = 0x4b4;
    pub const m_flFadeSpeed: usize = 0x4b8;
    pub const m_flDrawDistance: usize = 0x4bc;
    pub const m_flFadeInStart: usize = 0x4c0;
    pub const m_flFadeInEnd: usize = 0x4c4;
    pub const m_flIndirectStrength: usize = 0x4c8;
    pub const m_nIndirectTextureDimX: usize = 0x4cc;
    pub const m_nIndirectTextureDimY: usize = 0x4d0;
    pub const m_nIndirectTextureDimZ: usize = 0x4d4;
    pub const m_vBoxMins: usize = 0x4d8;
    pub const m_vBoxMaxs: usize = 0x4e4;
    pub const m_bActive: usize = 0x4f0;
    pub const m_flStartAnisoTime: usize = 0x4f4;
    pub const m_flStartScatterTime: usize = 0x4f8;
    pub const m_flStartDrawDistanceTime: usize = 0x4fc;
    pub const m_flStartAnisotropy: usize = 0x500;
    pub const m_flStartScattering: usize = 0x504;
    pub const m_flStartDrawDistance: usize = 0x508;
    pub const m_flDefaultAnisotropy: usize = 0x50c;
    pub const m_flDefaultScattering: usize = 0x510;
    pub const m_flDefaultDrawDistance: usize = 0x514;
    pub const m_bStartDisabled: usize = 0x518;
    pub const m_bEnableIndirect: usize = 0x519;
    pub const m_bIsMaster: usize = 0x51a;
    pub const m_hFogIndirectTexture: usize = 0x520;
    pub const m_nForceRefreshCount: usize = 0x528;
    pub const m_bFirstTime: usize = 0x52c;
}

pub mod CEnvVolumetricFogVolume {
    pub const m_bActive: usize = 0x4b0;
    pub const m_vBoxMins: usize = 0x4b4;
    pub const m_vBoxMaxs: usize = 0x4c0;
    pub const m_bStartDisabled: usize = 0x4cc;
    pub const m_flStrength: usize = 0x4d0;
    pub const m_nFalloffShape: usize = 0x4d4;
    pub const m_flFalloffExponent: usize = 0x4d8;
}

pub mod CEnvWind {
    pub const m_EnvWindShared: usize = 0x4b0;
}

pub mod CEnvWindShared {
    pub const m_flStartTime: usize = 0x8;
    pub const m_iWindSeed: usize = 0xc;
    pub const m_iMinWind: usize = 0x10;
    pub const m_iMaxWind: usize = 0x12;
    pub const m_windRadius: usize = 0x14;
    pub const m_iMinGust: usize = 0x18;
    pub const m_iMaxGust: usize = 0x1a;
    pub const m_flMinGustDelay: usize = 0x1c;
    pub const m_flMaxGustDelay: usize = 0x20;
    pub const m_flGustDuration: usize = 0x24;
    pub const m_iGustDirChange: usize = 0x28;
    pub const m_location: usize = 0x2c;
    pub const m_iszGustSound: usize = 0x38;
    pub const m_iWindDir: usize = 0x3c;
    pub const m_flWindSpeed: usize = 0x40;
    pub const m_currentWindVector: usize = 0x44;
    pub const m_CurrentSwayVector: usize = 0x50;
    pub const m_PrevSwayVector: usize = 0x5c;
    pub const m_iInitialWindDir: usize = 0x68;
    pub const m_flInitialWindSpeed: usize = 0x6c;
    pub const m_OnGustStart: usize = 0x70;
    pub const m_OnGustEnd: usize = 0x98;
    pub const m_flVariationTime: usize = 0xc0;
    pub const m_flSwayTime: usize = 0xc4;
    pub const m_flSimTime: usize = 0xc8;
    pub const m_flSwitchTime: usize = 0xcc;
    pub const m_flAveWindSpeed: usize = 0xd0;
    pub const m_bGusting: usize = 0xd4;
    pub const m_flWindAngleVariation: usize = 0xd8;
    pub const m_flWindSpeedVariation: usize = 0xdc;
    pub const m_iEntIndex: usize = 0xe0;
}

pub mod CEnvWindShared_WindAveEvent_t {
    pub const m_flStartWindSpeed: usize = 0x0;
    pub const m_flAveWindSpeed: usize = 0x4;
}

pub mod CEnvWindShared_WindVariationEvent_t {
    pub const m_flWindAngleVariation: usize = 0x0;
    pub const m_flWindSpeedVariation: usize = 0x4;
}

pub mod CFilterAttributeInt {
    pub const m_sAttributeName: usize = 0x508;
}

pub mod CFilterClass {
    pub const m_iFilterClass: usize = 0x508;
}

pub mod CFilterContext {
    pub const m_iFilterContext: usize = 0x508;
}

pub mod CFilterEnemy {
    pub const m_iszEnemyName: usize = 0x508;
    pub const m_flRadius: usize = 0x510;
    pub const m_flOuterRadius: usize = 0x514;
    pub const m_nMaxSquadmatesPerEnemy: usize = 0x518;
    pub const m_iszPlayerName: usize = 0x520;
}

pub mod CFilterMassGreater {
    pub const m_fFilterMass: usize = 0x508;
}

pub mod CFilterModel {
    pub const m_iFilterModel: usize = 0x508;
}

pub mod CFilterMultiple {
    pub const m_nFilterType: usize = 0x508;
    pub const m_iFilterName: usize = 0x510;
    pub const m_hFilter: usize = 0x560;
    pub const m_nFilterCount: usize = 0x588;
}

pub mod CFilterName {
    pub const m_iFilterName: usize = 0x508;
}

pub mod CFilterProximity {
    pub const m_flRadius: usize = 0x508;
}

pub mod CFire {
    pub const m_hEffect: usize = 0x700;
    pub const m_hOwner: usize = 0x704;
    pub const m_nFireType: usize = 0x708;
    pub const m_flFuel: usize = 0x70c;
    pub const m_flDamageTime: usize = 0x710;
    pub const m_lastDamage: usize = 0x714;
    pub const m_flFireSize: usize = 0x718;
    pub const m_flLastNavUpdateTime: usize = 0x71c;
    pub const m_flHeatLevel: usize = 0x720;
    pub const m_flHeatAbsorb: usize = 0x724;
    pub const m_flDamageScale: usize = 0x728;
    pub const m_flMaxHeat: usize = 0x72c;
    pub const m_flLastHeatLevel: usize = 0x730;
    pub const m_flAttackTime: usize = 0x734;
    pub const m_bEnabled: usize = 0x738;
    pub const m_bStartDisabled: usize = 0x739;
    pub const m_bDidActivate: usize = 0x73a;
    pub const m_OnIgnited: usize = 0x740;
    pub const m_OnExtinguished: usize = 0x768;
}

pub mod CFireSmoke {
    pub const m_nFlameModelIndex: usize = 0x4c0;
    pub const m_nFlameFromAboveModelIndex: usize = 0x4c4;
}

pub mod CFiringModeFloat {
    pub const m_flValues: usize = 0x0;
}

pub mod CFiringModeInt {
    pub const m_nValues: usize = 0x0;
}

pub mod CFish {
    pub const m_pool: usize = 0x888;
    pub const m_id: usize = 0x88c;
    pub const m_x: usize = 0x890;
    pub const m_y: usize = 0x894;
    pub const m_z: usize = 0x898;
    pub const m_angle: usize = 0x89c;
    pub const m_angleChange: usize = 0x8a0;
    pub const m_forward: usize = 0x8a4;
    pub const m_perp: usize = 0x8b0;
    pub const m_poolOrigin: usize = 0x8bc;
    pub const m_waterLevel: usize = 0x8c8;
    pub const m_speed: usize = 0x8cc;
    pub const m_desiredSpeed: usize = 0x8d0;
    pub const m_calmSpeed: usize = 0x8d4;
    pub const m_panicSpeed: usize = 0x8d8;
    pub const m_avoidRange: usize = 0x8dc;
    pub const m_turnTimer: usize = 0x8e0;
    pub const m_turnClockwise: usize = 0x8f8;
    pub const m_goTimer: usize = 0x900;
    pub const m_moveTimer: usize = 0x918;
    pub const m_panicTimer: usize = 0x930;
    pub const m_disperseTimer: usize = 0x948;
    pub const m_proximityTimer: usize = 0x960;
    pub const m_visible: usize = 0x978;
}

pub mod CFishPool {
    pub const m_fishCount: usize = 0x4c0;
    pub const m_maxRange: usize = 0x4c4;
    pub const m_swimDepth: usize = 0x4c8;
    pub const m_waterLevel: usize = 0x4cc;
    pub const m_isDormant: usize = 0x4d0;
    pub const m_fishes: usize = 0x4d8;
    pub const m_visTimer: usize = 0x4f0;
}

pub mod CFists {
    pub const m_bPlayingUninterruptableAct: usize = 0xdd0;
    pub const m_nUninterruptableActivity: usize = 0xdd4;
    pub const m_bRestorePrevWep: usize = 0xdd8;
    pub const m_hWeaponBeforePrevious: usize = 0xddc;
    pub const m_hWeaponPrevious: usize = 0xde0;
    pub const m_bDelayedHardPunchIncoming: usize = 0xde4;
    pub const m_bDestroyAfterTaunt: usize = 0xde5;
}

pub mod CFlashbangProjectile {
    pub const m_flTimeToDetonate: usize = 0xa20;
    pub const m_numOpponentsHit: usize = 0xa24;
    pub const m_numTeammatesHit: usize = 0xa25;
}

pub mod CFogController {
    pub const m_fog: usize = 0x4b0;
    pub const m_bUseAngles: usize = 0x518;
    pub const m_iChangedVariables: usize = 0x51c;
}

pub mod CFogTrigger {
    pub const m_fog: usize = 0x8a8;
}

pub mod CFogVolume {
    pub const m_fogName: usize = 0x700;
    pub const m_postProcessName: usize = 0x708;
    pub const m_colorCorrectionName: usize = 0x710;
    pub const m_bDisabled: usize = 0x720;
    pub const m_bInFogVolumesList: usize = 0x721;
}

pub mod CFootstepControl {
    pub const m_source: usize = 0x8a8;
    pub const m_destination: usize = 0x8b0;
}

pub mod CFuncBrush {
    pub const m_iSolidity: usize = 0x700;
    pub const m_iDisabled: usize = 0x704;
    pub const m_bSolidBsp: usize = 0x708;
    pub const m_iszExcludedClass: usize = 0x710;
    pub const m_bInvertExclusion: usize = 0x718;
    pub const m_bScriptedMovement: usize = 0x719;
}

pub mod CFuncConveyor {
    pub const m_szConveyorModels: usize = 0x700;
    pub const m_flTransitionDurationSeconds: usize = 0x708;
    pub const m_angMoveEntitySpace: usize = 0x70c;
    pub const m_vecMoveDirEntitySpace: usize = 0x718;
    pub const m_flTargetSpeed: usize = 0x724;
    pub const m_nTransitionStartTick: usize = 0x728;
    pub const m_nTransitionDurationTicks: usize = 0x72c;
    pub const m_flTransitionStartSpeed: usize = 0x730;
    pub const m_hConveyorModels: usize = 0x738;
}

pub mod CFuncElectrifiedVolume {
    pub const m_EffectName: usize = 0x720;
    pub const m_EffectInterpenetrateName: usize = 0x728;
    pub const m_EffectZapName: usize = 0x730;
    pub const m_iszEffectSource: usize = 0x738;
}

pub mod CFuncInteractionLayerClip {
    pub const m_bDisabled: usize = 0x700;
    pub const m_iszInteractsAs: usize = 0x708;
    pub const m_iszInteractsWith: usize = 0x710;
}

pub mod CFuncLadder {
    pub const m_vecLadderDir: usize = 0x700;
    pub const m_Dismounts: usize = 0x710;
    pub const m_vecLocalTop: usize = 0x728;
    pub const m_vecPlayerMountPositionTop: usize = 0x734;
    pub const m_vecPlayerMountPositionBottom: usize = 0x740;
    pub const m_flAutoRideSpeed: usize = 0x74c;
    pub const m_bDisabled: usize = 0x750;
    pub const m_bFakeLadder: usize = 0x751;
    pub const m_bHasSlack: usize = 0x752;
    pub const m_surfacePropName: usize = 0x758;
    pub const m_OnPlayerGotOnLadder: usize = 0x760;
    pub const m_OnPlayerGotOffLadder: usize = 0x788;
}

pub mod CFuncMonitor {
    pub const m_targetCamera: usize = 0x720;
    pub const m_nResolutionEnum: usize = 0x728;
    pub const m_bRenderShadows: usize = 0x72c;
    pub const m_bUseUniqueColorTarget: usize = 0x72d;
    pub const m_brushModelName: usize = 0x730;
    pub const m_hTargetCamera: usize = 0x738;
    pub const m_bEnabled: usize = 0x73c;
    pub const m_bDraw3DSkybox: usize = 0x73d;
    pub const m_bStartEnabled: usize = 0x73e;
}

pub mod CFuncMoveLinear {
    pub const m_authoredPosition: usize = 0x780;
    pub const m_angMoveEntitySpace: usize = 0x784;
    pub const m_vecMoveDirParentSpace: usize = 0x790;
    pub const m_soundStart: usize = 0x7a0;
    pub const m_soundStop: usize = 0x7a8;
    pub const m_currentSound: usize = 0x7b0;
    pub const m_flBlockDamage: usize = 0x7b8;
    pub const m_flStartPosition: usize = 0x7bc;
    pub const m_flMoveDistance: usize = 0x7c0;
    pub const m_OnFullyOpen: usize = 0x7d0;
    pub const m_OnFullyClosed: usize = 0x7f8;
    pub const m_bCreateMovableNavMesh: usize = 0x820;
    pub const m_bCreateNavObstacle: usize = 0x821;
}

pub mod CFuncNavBlocker {
    pub const m_bDisabled: usize = 0x700;
    pub const m_nBlockedTeamNumber: usize = 0x704;
}

pub mod CFuncNavObstruction {
    pub const m_bDisabled: usize = 0x708;
}

pub mod CFuncPlat {
    pub const m_sNoise: usize = 0x7a8;
}

pub mod CFuncPlatRot {
    pub const m_end: usize = 0x7b0;
    pub const m_start: usize = 0x7bc;
}

pub mod CFuncRotating {
    pub const m_vecMoveAng: usize = 0x700;
    pub const m_flFanFriction: usize = 0x70c;
    pub const m_flAttenuation: usize = 0x710;
    pub const m_flVolume: usize = 0x714;
    pub const m_flTargetSpeed: usize = 0x718;
    pub const m_flMaxSpeed: usize = 0x71c;
    pub const m_flBlockDamage: usize = 0x720;
    pub const m_flTimeScale: usize = 0x724;
    pub const m_NoiseRunning: usize = 0x728;
    pub const m_bReversed: usize = 0x730;
    pub const m_angStart: usize = 0x73c;
    pub const m_bStopAtStartPos: usize = 0x748;
    pub const m_vecClientOrigin: usize = 0x74c;
    pub const m_vecClientAngles: usize = 0x758;
}

pub mod CFuncShatterglass {
    pub const m_hGlassMaterialDamaged: usize = 0x700;
    pub const m_hGlassMaterialUndamaged: usize = 0x708;
    pub const m_hConcreteMaterialEdgeFace: usize = 0x710;
    pub const m_hConcreteMaterialEdgeCaps: usize = 0x718;
    pub const m_hConcreteMaterialEdgeFins: usize = 0x720;
    pub const m_matPanelTransform: usize = 0x728;
    pub const m_matPanelTransformWsTemp: usize = 0x758;
    pub const m_vecShatterGlassShards: usize = 0x788;
    pub const m_PanelSize: usize = 0x7a0;
    pub const m_vecPanelNormalWs: usize = 0x7a8;
    pub const m_nNumShardsEverCreated: usize = 0x7b4;
    pub const m_flLastShatterSoundEmitTime: usize = 0x7b8;
    pub const m_flLastCleanupTime: usize = 0x7bc;
    pub const m_flInitAtTime: usize = 0x7c0;
    pub const m_flGlassThickness: usize = 0x7c4;
    pub const m_flSpawnInvulnerability: usize = 0x7c8;
    pub const m_bBreakSilent: usize = 0x7cc;
    pub const m_bBreakShardless: usize = 0x7cd;
    pub const m_bBroken: usize = 0x7ce;
    pub const m_bHasRateLimitedShards: usize = 0x7cf;
    pub const m_bGlassNavIgnore: usize = 0x7d0;
    pub const m_bGlassInFrame: usize = 0x7d1;
    pub const m_bStartBroken: usize = 0x7d2;
    pub const m_iInitialDamageType: usize = 0x7d3;
    pub const m_szDamagePositioningEntityName01: usize = 0x7d8;
    pub const m_szDamagePositioningEntityName02: usize = 0x7e0;
    pub const m_szDamagePositioningEntityName03: usize = 0x7e8;
    pub const m_szDamagePositioningEntityName04: usize = 0x7f0;
    pub const m_vInitialDamagePositions: usize = 0x7f8;
    pub const m_vExtraDamagePositions: usize = 0x810;
    pub const m_OnBroken: usize = 0x828;
    pub const m_iSurfaceType: usize = 0x851;
}

pub mod CFuncTankTrain {
    pub const m_OnDeath: usize = 0x850;
}

pub mod CFuncTimescale {
    pub const m_flDesiredTimescale: usize = 0x4b0;
    pub const m_flAcceleration: usize = 0x4b4;
    pub const m_flMinBlendRate: usize = 0x4b8;
    pub const m_flBlendDeltaMultiplier: usize = 0x4bc;
    pub const m_isStarted: usize = 0x4c0;
}

pub mod CFuncTrackChange {
    pub const m_trackTop: usize = 0x7c8;
    pub const m_trackBottom: usize = 0x7d0;
    pub const m_train: usize = 0x7d8;
    pub const m_trackTopName: usize = 0x7e0;
    pub const m_trackBottomName: usize = 0x7e8;
    pub const m_trainName: usize = 0x7f0;
    pub const m_code: usize = 0x7f8;
    pub const m_targetState: usize = 0x7fc;
    pub const m_use: usize = 0x800;
}

pub mod CFuncTrackTrain {
    pub const m_ppath: usize = 0x700;
    pub const m_length: usize = 0x704;
    pub const m_vPosPrev: usize = 0x708;
    pub const m_angPrev: usize = 0x714;
    pub const m_controlMins: usize = 0x720;
    pub const m_controlMaxs: usize = 0x72c;
    pub const m_lastBlockPos: usize = 0x738;
    pub const m_lastBlockTick: usize = 0x744;
    pub const m_flVolume: usize = 0x748;
    pub const m_flBank: usize = 0x74c;
    pub const m_oldSpeed: usize = 0x750;
    pub const m_flBlockDamage: usize = 0x754;
    pub const m_height: usize = 0x758;
    pub const m_maxSpeed: usize = 0x75c;
    pub const m_dir: usize = 0x760;
    pub const m_iszSoundMove: usize = 0x768;
    pub const m_iszSoundMovePing: usize = 0x770;
    pub const m_iszSoundStart: usize = 0x778;
    pub const m_iszSoundStop: usize = 0x780;
    pub const m_strPathTarget: usize = 0x788;
    pub const m_flMoveSoundMinDuration: usize = 0x790;
    pub const m_flMoveSoundMaxDuration: usize = 0x794;
    pub const m_flNextMoveSoundTime: usize = 0x798;
    pub const m_flMoveSoundMinPitch: usize = 0x79c;
    pub const m_flMoveSoundMaxPitch: usize = 0x7a0;
    pub const m_eOrientationType: usize = 0x7a4;
    pub const m_eVelocityType: usize = 0x7a8;
    pub const m_OnStart: usize = 0x7b8;
    pub const m_OnNext: usize = 0x7e0;
    pub const m_OnArrivedAtDestinationNode: usize = 0x808;
    pub const m_bManualSpeedChanges: usize = 0x830;
    pub const m_flDesiredSpeed: usize = 0x834;
    pub const m_flSpeedChangeTime: usize = 0x838;
    pub const m_flAccelSpeed: usize = 0x83c;
    pub const m_flDecelSpeed: usize = 0x840;
    pub const m_bAccelToSpeed: usize = 0x844;
    pub const m_flTimeScale: usize = 0x848;
    pub const m_flNextMPSoundTime: usize = 0x84c;
}

pub mod CFuncTrain {
    pub const m_hCurrentTarget: usize = 0x7a8;
    pub const m_activated: usize = 0x7ac;
    pub const m_hEnemy: usize = 0x7b0;
    pub const m_flBlockDamage: usize = 0x7b4;
    pub const m_flNextBlockTime: usize = 0x7b8;
    pub const m_iszLastTarget: usize = 0x7c0;
}

pub mod CFuncVPhysicsClip {
    pub const m_bDisabled: usize = 0x700;
}

pub mod CFuncWall {
    pub const m_nState: usize = 0x700;
}

pub mod CFuncWater {
    pub const m_BuoyancyHelper: usize = 0x700;
}

pub mod CGameChoreoServices {
    pub const m_hOwner: usize = 0x8;
    pub const m_hScriptedSequence: usize = 0xc;
    pub const m_scriptState: usize = 0x10;
    pub const m_choreoState: usize = 0x14;
    pub const m_flTimeStartedState: usize = 0x18;
}

pub mod CGameGibManager {
    pub const m_bAllowNewGibs: usize = 0x4d0;
    pub const m_iCurrentMaxPieces: usize = 0x4d4;
    pub const m_iMaxPieces: usize = 0x4d8;
    pub const m_iLastFrame: usize = 0x4dc;
}

pub mod CGamePlayerEquip {
    pub const m_weaponNames: usize = 0x710;
    pub const m_weaponCount: usize = 0x810;
}

pub mod CGamePlayerZone {
    pub const m_OnPlayerInZone: usize = 0x708;
    pub const m_OnPlayerOutZone: usize = 0x730;
    pub const m_PlayersInCount: usize = 0x758;
    pub const m_PlayersOutCount: usize = 0x780;
}

pub mod CGameRules {
    pub const m_szQuestName: usize = 0x8;
    pub const m_nQuestPhase: usize = 0x88;
}

pub mod CGameSceneNode {
    pub const m_nodeToWorld: usize = 0x10;
    pub const m_pOwner: usize = 0x30;
    pub const m_pParent: usize = 0x38;
    pub const m_pChild: usize = 0x40;
    pub const m_pNextSibling: usize = 0x48;
    pub const m_hParent: usize = 0x70;
    pub const m_vecOrigin: usize = 0x80;
    pub const m_angRotation: usize = 0xb8;
    pub const m_flScale: usize = 0xc4;
    pub const m_vecAbsOrigin: usize = 0xc8;
    pub const m_angAbsRotation: usize = 0xd4;
    pub const m_flAbsScale: usize = 0xe0;
    pub const m_nParentAttachmentOrBone: usize = 0xe4;
    pub const m_bDebugAbsOriginChanges: usize = 0xe6;
    pub const m_bDormant: usize = 0xe7;
    pub const m_bForceParentToBeNetworked: usize = 0xe8;
    pub const m_bDirtyHierarchy: usize = 0x0;
    pub const m_bDirtyBoneMergeInfo: usize = 0x0;
    pub const m_bNetworkedPositionChanged: usize = 0x0;
    pub const m_bNetworkedAnglesChanged: usize = 0x0;
    pub const m_bNetworkedScaleChanged: usize = 0x0;
    pub const m_bWillBeCallingPostDataUpdate: usize = 0x0;
    pub const m_bNotifyBoneTransformsChanged: usize = 0x0;
    pub const m_bBoneMergeFlex: usize = 0x0;
    pub const m_nLatchAbsOrigin: usize = 0x0;
    pub const m_bDirtyBoneMergeBoneToRoot: usize = 0x0;
    pub const m_nHierarchicalDepth: usize = 0xeb;
    pub const m_nHierarchyType: usize = 0xec;
    pub const m_nDoNotSetAnimTimeInInvalidatePhysicsCount: usize = 0xed;
    pub const m_name: usize = 0xf0;
    pub const m_hierarchyAttachName: usize = 0x130;
    pub const m_flZOffset: usize = 0x134;
    pub const m_vRenderOrigin: usize = 0x138;
}

pub mod CGameSceneNodeHandle {
    pub const m_hOwner: usize = 0x8;
    pub const m_name: usize = 0xc;
}

pub mod CGameScriptedMoveData {
    pub const m_vDest: usize = 0x0;
    pub const m_vSrc: usize = 0xc;
    pub const m_angSrc: usize = 0x18;
    pub const m_angDst: usize = 0x24;
    pub const m_angCurrent: usize = 0x30;
    pub const m_flAngRate: usize = 0x3c;
    pub const m_flDuration: usize = 0x40;
    pub const m_flStartTime: usize = 0x44;
    pub const m_nPrevMoveType: usize = 0x48;
    pub const m_bActive: usize = 0x49;
    pub const m_bTeleportOnEnd: usize = 0x4a;
    pub const m_bEndOnDestinationReached: usize = 0x4b;
    pub const m_bIgnoreRotation: usize = 0x4c;
    pub const m_nType: usize = 0x50;
    pub const m_bSuccess: usize = 0x54;
    pub const m_nForcedCrouchState: usize = 0x58;
    pub const m_bIgnoreCollisions: usize = 0x5c;
}

pub mod CGameText {
    pub const m_iszMessage: usize = 0x710;
    pub const m_textParms: usize = 0x718;
}

pub mod CGenericConstraint {
    pub const m_nLinearMotionX: usize = 0x510;
    pub const m_nLinearMotionY: usize = 0x514;
    pub const m_nLinearMotionZ: usize = 0x518;
    pub const m_flLinearFrequencyX: usize = 0x51c;
    pub const m_flLinearFrequencyY: usize = 0x520;
    pub const m_flLinearFrequencyZ: usize = 0x524;
    pub const m_flLinearDampingRatioX: usize = 0x528;
    pub const m_flLinearDampingRatioY: usize = 0x52c;
    pub const m_flLinearDampingRatioZ: usize = 0x530;
    pub const m_flMaxLinearImpulseX: usize = 0x534;
    pub const m_flMaxLinearImpulseY: usize = 0x538;
    pub const m_flMaxLinearImpulseZ: usize = 0x53c;
    pub const m_flBreakAfterTimeX: usize = 0x540;
    pub const m_flBreakAfterTimeY: usize = 0x544;
    pub const m_flBreakAfterTimeZ: usize = 0x548;
    pub const m_flBreakAfterTimeStartTimeX: usize = 0x54c;
    pub const m_flBreakAfterTimeStartTimeY: usize = 0x550;
    pub const m_flBreakAfterTimeStartTimeZ: usize = 0x554;
    pub const m_flBreakAfterTimeThresholdX: usize = 0x558;
    pub const m_flBreakAfterTimeThresholdY: usize = 0x55c;
    pub const m_flBreakAfterTimeThresholdZ: usize = 0x560;
    pub const m_flNotifyForceX: usize = 0x564;
    pub const m_flNotifyForceY: usize = 0x568;
    pub const m_flNotifyForceZ: usize = 0x56c;
    pub const m_flNotifyForceMinTimeX: usize = 0x570;
    pub const m_flNotifyForceMinTimeY: usize = 0x574;
    pub const m_flNotifyForceMinTimeZ: usize = 0x578;
    pub const m_flNotifyForceLastTimeX: usize = 0x57c;
    pub const m_flNotifyForceLastTimeY: usize = 0x580;
    pub const m_flNotifyForceLastTimeZ: usize = 0x584;
    pub const m_bAxisNotifiedX: usize = 0x588;
    pub const m_bAxisNotifiedY: usize = 0x589;
    pub const m_bAxisNotifiedZ: usize = 0x58a;
    pub const m_nAngularMotionX: usize = 0x58c;
    pub const m_nAngularMotionY: usize = 0x590;
    pub const m_nAngularMotionZ: usize = 0x594;
    pub const m_flAngularFrequencyX: usize = 0x598;
    pub const m_flAngularFrequencyY: usize = 0x59c;
    pub const m_flAngularFrequencyZ: usize = 0x5a0;
    pub const m_flAngularDampingRatioX: usize = 0x5a4;
    pub const m_flAngularDampingRatioY: usize = 0x5a8;
    pub const m_flAngularDampingRatioZ: usize = 0x5ac;
    pub const m_flMaxAngularImpulseX: usize = 0x5b0;
    pub const m_flMaxAngularImpulseY: usize = 0x5b4;
    pub const m_flMaxAngularImpulseZ: usize = 0x5b8;
    pub const m_NotifyForceReachedX: usize = 0x5c0;
    pub const m_NotifyForceReachedY: usize = 0x5e8;
    pub const m_NotifyForceReachedZ: usize = 0x610;
}

pub mod CGlowProperty {
    pub const m_fGlowColor: usize = 0x8;
    pub const m_iGlowType: usize = 0x30;
    pub const m_iGlowTeam: usize = 0x34;
    pub const m_nGlowRange: usize = 0x38;
    pub const m_nGlowRangeMin: usize = 0x3c;
    pub const m_glowColorOverride: usize = 0x40;
    pub const m_bFlashing: usize = 0x44;
    pub const m_flGlowTime: usize = 0x48;
    pub const m_flGlowStartTime: usize = 0x4c;
    pub const m_bEligibleForScreenHighlight: usize = 0x50;
    pub const m_bGlowing: usize = 0x51;
}

pub mod CGradientFog {
    pub const m_hGradientFogTexture: usize = 0x4b0;
    pub const m_flFogStartDistance: usize = 0x4b8;
    pub const m_flFogEndDistance: usize = 0x4bc;
    pub const m_bHeightFogEnabled: usize = 0x4c0;
    pub const m_flFogStartHeight: usize = 0x4c4;
    pub const m_flFogEndHeight: usize = 0x4c8;
    pub const m_flFarZ: usize = 0x4cc;
    pub const m_flFogMaxOpacity: usize = 0x4d0;
    pub const m_flFogFalloffExponent: usize = 0x4d4;
    pub const m_flFogVerticalExponent: usize = 0x4d8;
    pub const m_fogColor: usize = 0x4dc;
    pub const m_flFogStrength: usize = 0x4e0;
    pub const m_flFadeTime: usize = 0x4e4;
    pub const m_bStartDisabled: usize = 0x4e8;
    pub const m_bIsEnabled: usize = 0x4e9;
    pub const m_bGradientFogNeedsTextures: usize = 0x4ea;
}

pub mod CGrassBurn {
    pub const m_flGrassBurnClearTime: usize = 0x4b0;
}

pub mod CGunTarget {
    pub const m_on: usize = 0x780;
    pub const m_hTargetEnt: usize = 0x784;
    pub const m_OnDeath: usize = 0x788;
}

pub mod CHandleTest {
    pub const m_Handle: usize = 0x4b0;
    pub const m_bSendHandle: usize = 0x4b4;
}

pub mod CHintMessage {
    pub const m_hintString: usize = 0x8;
    pub const m_args: usize = 0x10;
    pub const m_duration: usize = 0x28;
}

pub mod CHintMessageQueue {
    pub const m_tmMessageEnd: usize = 0x8;
    pub const m_messages: usize = 0x10;
    pub const m_pPlayerController: usize = 0x28;
}

pub mod CHitboxComponent {
    pub const m_bvDisabledHitGroups: usize = 0x24;
}

pub mod CHostage {
    pub const m_OnHostageBeginGrab: usize = 0x9e0;
    pub const m_OnFirstPickedUp: usize = 0xa08;
    pub const m_OnDroppedNotRescued: usize = 0xa30;
    pub const m_OnRescued: usize = 0xa58;
    pub const m_entitySpottedState: usize = 0xa80;
    pub const m_nSpotRules: usize = 0xa98;
    pub const m_uiHostageSpawnExclusionGroupMask: usize = 0xa9c;
    pub const m_nHostageSpawnRandomFactor: usize = 0xaa0;
    pub const m_bRemove: usize = 0xaa4;
    pub const m_vel: usize = 0xaa8;
    pub const m_isRescued: usize = 0xab4;
    pub const m_jumpedThisFrame: usize = 0xab5;
    pub const m_nHostageState: usize = 0xab8;
    pub const m_leader: usize = 0xabc;
    pub const m_lastLeader: usize = 0xac0;
    pub const m_reuseTimer: usize = 0xac8;
    pub const m_hasBeenUsed: usize = 0xae0;
    pub const m_accel: usize = 0xae4;
    pub const m_isRunning: usize = 0xaf0;
    pub const m_isCrouching: usize = 0xaf1;
    pub const m_jumpTimer: usize = 0xaf8;
    pub const m_isWaitingForLeader: usize = 0xb10;
    pub const m_repathTimer: usize = 0x2b20;
    pub const m_inhibitDoorTimer: usize = 0x2b38;
    pub const m_inhibitObstacleAvoidanceTimer: usize = 0x2bc8;
    pub const m_wiggleTimer: usize = 0x2be8;
    pub const m_isAdjusted: usize = 0x2c04;
    pub const m_bHandsHaveBeenCut: usize = 0x2c05;
    pub const m_hHostageGrabber: usize = 0x2c08;
    pub const m_fLastGrabTime: usize = 0x2c0c;
    pub const m_vecPositionWhenStartedDroppingToGround: usize = 0x2c10;
    pub const m_vecGrabbedPos: usize = 0x2c1c;
    pub const m_flRescueStartTime: usize = 0x2c28;
    pub const m_flGrabSuccessTime: usize = 0x2c2c;
    pub const m_flDropStartTime: usize = 0x2c30;
    pub const m_nApproachRewardPayouts: usize = 0x2c34;
    pub const m_nPickupEventCount: usize = 0x2c38;
    pub const m_vecSpawnGroundPos: usize = 0x2c3c;
}

pub mod CHostageExpresserShim {
    pub const m_pExpresser: usize = 0x9c8;
}

pub mod CInButtonState {
    pub const m_pButtonStates: usize = 0x8;
}

pub mod CInferno {
    pub const m_fireXDelta: usize = 0x710;
    pub const m_fireYDelta: usize = 0x810;
    pub const m_fireZDelta: usize = 0x910;
    pub const m_fireParentXDelta: usize = 0xa10;
    pub const m_fireParentYDelta: usize = 0xb10;
    pub const m_fireParentZDelta: usize = 0xc10;
    pub const m_bFireIsBurning: usize = 0xd10;
    pub const m_BurnNormal: usize = 0xd50;
    pub const m_fireCount: usize = 0x1050;
    pub const m_nInfernoType: usize = 0x1054;
    pub const m_nFireEffectTickBegin: usize = 0x1058;
    pub const m_nFireLifetime: usize = 0x105c;
    pub const m_bInPostEffectTime: usize = 0x1060;
    pub const m_nFiresExtinguishCount: usize = 0x1064;
    pub const m_bWasCreatedInSmoke: usize = 0x1068;
    pub const m_extent: usize = 0x1270;
    pub const m_damageTimer: usize = 0x1288;
    pub const m_damageRampTimer: usize = 0x12a0;
    pub const m_splashVelocity: usize = 0x12b8;
    pub const m_InitialSplashVelocity: usize = 0x12c4;
    pub const m_startPos: usize = 0x12d0;
    pub const m_vecOriginalSpawnLocation: usize = 0x12dc;
    pub const m_activeTimer: usize = 0x12e8;
    pub const m_fireSpawnOffset: usize = 0x12f8;
    pub const m_nMaxFlames: usize = 0x12fc;
    pub const m_BookkeepingTimer: usize = 0x1300;
    pub const m_NextSpreadTimer: usize = 0x1318;
    pub const m_nSourceItemDefIndex: usize = 0x1330;
}

pub mod CInfoDynamicShadowHint {
    pub const m_bDisabled: usize = 0x4b0;
    pub const m_flRange: usize = 0x4b4;
    pub const m_nImportance: usize = 0x4b8;
    pub const m_nLightChoice: usize = 0x4bc;
    pub const m_hLight: usize = 0x4c0;
}

pub mod CInfoDynamicShadowHintBox {
    pub const m_vBoxMins: usize = 0x4c8;
    pub const m_vBoxMaxs: usize = 0x4d4;
}

pub mod CInfoGameEventProxy {
    pub const m_iszEventName: usize = 0x4b0;
    pub const m_flRange: usize = 0x4b8;
}

pub mod CInfoMapRegion {
    pub const m_flRadius: usize = 0x4b0;
    pub const m_strLocToken: usize = 0x4b8;
    pub const m_szLocToken: usize = 0x4c0;
}

pub mod CInfoOffscreenPanoramaTexture {
    pub const m_bDisabled: usize = 0x4b0;
    pub const m_nResolutionX: usize = 0x4b4;
    pub const m_nResolutionY: usize = 0x4b8;
    pub const m_szLayoutFileName: usize = 0x4c0;
    pub const m_RenderAttrName: usize = 0x4c8;
    pub const m_TargetEntities: usize = 0x4d0;
    pub const m_nTargetChangeCount: usize = 0x4e8;
    pub const m_vecCSSClasses: usize = 0x4f0;
    pub const m_szTargetsName: usize = 0x508;
    pub const m_AdditionalTargetEntities: usize = 0x510;
}

pub mod CInfoPlayerStart {
    pub const m_bDisabled: usize = 0x4b0;
}

pub mod CInfoSpawnGroupLoadUnload {
    pub const m_OnSpawnGroupLoadStarted: usize = 0x4b0;
    pub const m_OnSpawnGroupLoadFinished: usize = 0x4d8;
    pub const m_OnSpawnGroupUnloadStarted: usize = 0x500;
    pub const m_OnSpawnGroupUnloadFinished: usize = 0x528;
    pub const m_iszSpawnGroupName: usize = 0x550;
    pub const m_iszSpawnGroupFilterName: usize = 0x558;
    pub const m_iszLandmarkName: usize = 0x560;
    pub const m_sFixedSpawnGroupName: usize = 0x568;
    pub const m_flTimeoutInterval: usize = 0x570;
    pub const m_bStreamingStarted: usize = 0x574;
    pub const m_bUnloadingStarted: usize = 0x575;
}

pub mod CInfoVisibilityBox {
    pub const m_nMode: usize = 0x4b4;
    pub const m_vBoxSize: usize = 0x4b8;
    pub const m_bEnabled: usize = 0x4c4;
}

pub mod CInfoWorldLayer {
    pub const m_pOutputOnEntitiesSpawned: usize = 0x4b0;
    pub const m_worldName: usize = 0x4d8;
    pub const m_layerName: usize = 0x4e0;
    pub const m_bWorldLayerVisible: usize = 0x4e8;
    pub const m_bEntitiesSpawned: usize = 0x4e9;
    pub const m_bCreateAsChildSpawnGroup: usize = 0x4ea;
    pub const m_hLayerSpawnGroup: usize = 0x4ec;
}

pub mod CInstancedSceneEntity {
    pub const m_hOwner: usize = 0xa08;
    pub const m_bHadOwner: usize = 0xa0c;
    pub const m_flPostSpeakDelay: usize = 0xa10;
    pub const m_flPreDelay: usize = 0xa14;
    pub const m_bIsBackground: usize = 0xa18;
}

pub mod CInstructorEventEntity {
    pub const m_iszName: usize = 0x4b0;
    pub const m_iszHintTargetEntity: usize = 0x4b8;
    pub const m_hTargetPlayer: usize = 0x4c0;
}

pub mod CIronSightController {
    pub const m_bIronSightAvailable: usize = 0x8;
    pub const m_flIronSightAmount: usize = 0xc;
    pub const m_flIronSightAmountGained: usize = 0x10;
    pub const m_flIronSightAmountBiased: usize = 0x14;
}

pub mod CItem {
    pub const m_OnPlayerTouch: usize = 0x890;
    pub const m_bActivateWhenAtRest: usize = 0x8b8;
    pub const m_OnCacheInteraction: usize = 0x8c0;
    pub const m_OnPlayerPickup: usize = 0x8e8;
    pub const m_OnGlovePulled: usize = 0x910;
    pub const m_vOriginalSpawnOrigin: usize = 0x938;
    pub const m_vOriginalSpawnAngles: usize = 0x944;
    pub const m_bPhysStartAsleep: usize = 0x950;
}

pub mod CItemCash {
    pub const m_bufCashOriginalSource: usize = 0x960;
    pub const m_nBundleSize: usize = 0x9a0;
    pub const m_flAllowPickupTime: usize = 0x9a8;
}

pub mod CItemDefuser {
    pub const m_entitySpottedState: usize = 0x960;
    pub const m_nSpotRules: usize = 0x978;
}

pub mod CItemDogtags {
    pub const m_OwningPlayer: usize = 0x960;
    pub const m_KillingPlayer: usize = 0x964;
}

pub mod CItemGeneric {
    pub const m_bHasTriggerRadius: usize = 0x968;
    pub const m_bHasPickupRadius: usize = 0x969;
    pub const m_flPickupRadiusSqr: usize = 0x96c;
    pub const m_flTriggerRadiusSqr: usize = 0x970;
    pub const m_flLastPickupCheck: usize = 0x974;
    pub const m_bPlayerCounterListenerAdded: usize = 0x978;
    pub const m_bPlayerInTriggerRadius: usize = 0x979;
    pub const m_hSpawnParticleEffect: usize = 0x980;
    pub const m_pAmbientSoundEffect: usize = 0x988;
    pub const m_bAutoStartAmbientSound: usize = 0x990;
    pub const m_pSpawnScriptFunction: usize = 0x998;
    pub const m_hPickupParticleEffect: usize = 0x9a0;
    pub const m_pPickupSoundEffect: usize = 0x9a8;
    pub const m_pPickupScriptFunction: usize = 0x9b0;
    pub const m_hTimeoutParticleEffect: usize = 0x9b8;
    pub const m_pTimeoutSoundEffect: usize = 0x9c0;
    pub const m_pTimeoutScriptFunction: usize = 0x9c8;
    pub const m_pPickupFilterName: usize = 0x9d0;
    pub const m_hPickupFilter: usize = 0x9d8;
    pub const m_OnPickup: usize = 0x9e0;
    pub const m_OnTimeout: usize = 0xa08;
    pub const m_OnTriggerStartTouch: usize = 0xa30;
    pub const m_OnTriggerTouch: usize = 0xa58;
    pub const m_OnTriggerEndTouch: usize = 0xa80;
    pub const m_pAllowPickupScriptFunction: usize = 0xaa8;
    pub const m_flPickupRadius: usize = 0xab0;
    pub const m_flTriggerRadius: usize = 0xab4;
    pub const m_pTriggerSoundEffect: usize = 0xab8;
    pub const m_bGlowWhenInTrigger: usize = 0xac0;
    pub const m_glowColor: usize = 0xac1;
    pub const m_bUseable: usize = 0xac5;
    pub const m_hTriggerHelper: usize = 0xac8;
}

pub mod CItemGenericTriggerHelper {
    pub const m_hParentItem: usize = 0x700;
}

pub mod CKeepUpright {
    pub const m_worldGoalAxis: usize = 0x4b8;
    pub const m_localTestAxis: usize = 0x4c4;
    pub const m_nameAttach: usize = 0x4d8;
    pub const m_attachedObject: usize = 0x4e0;
    pub const m_angularLimit: usize = 0x4e4;
    pub const m_bActive: usize = 0x4e8;
    pub const m_bDampAllRotation: usize = 0x4e9;
}

pub mod CLightComponent {
    pub const __m_pChainEntity: usize = 0x48;
    pub const m_Color: usize = 0x85;
    pub const m_SecondaryColor: usize = 0x89;
    pub const m_flBrightness: usize = 0x90;
    pub const m_flBrightnessScale: usize = 0x94;
    pub const m_flBrightnessMult: usize = 0x98;
    pub const m_flRange: usize = 0x9c;
    pub const m_flFalloff: usize = 0xa0;
    pub const m_flAttenuation0: usize = 0xa4;
    pub const m_flAttenuation1: usize = 0xa8;
    pub const m_flAttenuation2: usize = 0xac;
    pub const m_flTheta: usize = 0xb0;
    pub const m_flPhi: usize = 0xb4;
    pub const m_hLightCookie: usize = 0xb8;
    pub const m_nCascades: usize = 0xc0;
    pub const m_nCastShadows: usize = 0xc4;
    pub const m_nShadowWidth: usize = 0xc8;
    pub const m_nShadowHeight: usize = 0xcc;
    pub const m_bRenderDiffuse: usize = 0xd0;
    pub const m_nRenderSpecular: usize = 0xd4;
    pub const m_bRenderTransmissive: usize = 0xd8;
    pub const m_flOrthoLightWidth: usize = 0xdc;
    pub const m_flOrthoLightHeight: usize = 0xe0;
    pub const m_nStyle: usize = 0xe4;
    pub const m_Pattern: usize = 0xe8;
    pub const m_nCascadeRenderStaticObjects: usize = 0xf0;
    pub const m_flShadowCascadeCrossFade: usize = 0xf4;
    pub const m_flShadowCascadeDistanceFade: usize = 0xf8;
    pub const m_flShadowCascadeDistance0: usize = 0xfc;
    pub const m_flShadowCascadeDistance1: usize = 0x100;
    pub const m_flShadowCascadeDistance2: usize = 0x104;
    pub const m_flShadowCascadeDistance3: usize = 0x108;
    pub const m_nShadowCascadeResolution0: usize = 0x10c;
    pub const m_nShadowCascadeResolution1: usize = 0x110;
    pub const m_nShadowCascadeResolution2: usize = 0x114;
    pub const m_nShadowCascadeResolution3: usize = 0x118;
    pub const m_bUsesBakedShadowing: usize = 0x11c;
    pub const m_nShadowPriority: usize = 0x120;
    pub const m_nBakedShadowIndex: usize = 0x124;
    pub const m_bRenderToCubemaps: usize = 0x128;
    pub const m_LightGroups: usize = 0x130;
    pub const m_nDirectLight: usize = 0x138;
    pub const m_nIndirectLight: usize = 0x13c;
    pub const m_flFadeMinDist: usize = 0x140;
    pub const m_flFadeMaxDist: usize = 0x144;
    pub const m_flShadowFadeMinDist: usize = 0x148;
    pub const m_flShadowFadeMaxDist: usize = 0x14c;
    pub const m_bEnabled: usize = 0x150;
    pub const m_bFlicker: usize = 0x151;
    pub const m_bPrecomputedFieldsValid: usize = 0x152;
    pub const m_vPrecomputedBoundsMins: usize = 0x154;
    pub const m_vPrecomputedBoundsMaxs: usize = 0x160;
    pub const m_vPrecomputedOBBOrigin: usize = 0x16c;
    pub const m_vPrecomputedOBBAngles: usize = 0x178;
    pub const m_vPrecomputedOBBExtent: usize = 0x184;
    pub const m_flPrecomputedMaxRange: usize = 0x190;
    pub const m_nFogLightingMode: usize = 0x194;
    pub const m_flFogContributionStength: usize = 0x198;
    pub const m_flNearClipPlane: usize = 0x19c;
    pub const m_SkyColor: usize = 0x1a0;
    pub const m_flSkyIntensity: usize = 0x1a4;
    pub const m_SkyAmbientBounce: usize = 0x1a8;
    pub const m_bUseSecondaryColor: usize = 0x1ac;
    pub const m_bMixedShadows: usize = 0x1ad;
    pub const m_flLightStyleStartTime: usize = 0x1b0;
    pub const m_flCapsuleLength: usize = 0x1b4;
    pub const m_flMinRoughness: usize = 0x1b8;
    pub const m_bPvsModifyEntity: usize = 0x1c8;
}

pub mod CLightEntity {
    pub const m_CLightComponent: usize = 0x700;
}

pub mod CLightGlow {
    pub const m_nHorizontalSize: usize = 0x700;
    pub const m_nVerticalSize: usize = 0x704;
    pub const m_nMinDist: usize = 0x708;
    pub const m_nMaxDist: usize = 0x70c;
    pub const m_nOuterMaxDist: usize = 0x710;
    pub const m_flGlowProxySize: usize = 0x714;
    pub const m_flHDRColorScale: usize = 0x718;
}

pub mod CLogicAchievement {
    pub const m_bDisabled: usize = 0x4b0;
    pub const m_iszAchievementEventID: usize = 0x4b8;
    pub const m_OnFired: usize = 0x4c0;
}

pub mod CLogicActiveAutosave {
    pub const m_TriggerHitPoints: usize = 0x4c0;
    pub const m_flTimeToTrigger: usize = 0x4c4;
    pub const m_flStartTime: usize = 0x4c8;
    pub const m_flDangerousTime: usize = 0x4cc;
}

pub mod CLogicAuto {
    pub const m_OnMapSpawn: usize = 0x4b0;
    pub const m_OnDemoMapSpawn: usize = 0x4d8;
    pub const m_OnNewGame: usize = 0x500;
    pub const m_OnLoadGame: usize = 0x528;
    pub const m_OnMapTransition: usize = 0x550;
    pub const m_OnBackgroundMap: usize = 0x578;
    pub const m_OnMultiNewMap: usize = 0x5a0;
    pub const m_OnMultiNewRound: usize = 0x5c8;
    pub const m_OnVREnabled: usize = 0x5f0;
    pub const m_OnVRNotEnabled: usize = 0x618;
    pub const m_globalstate: usize = 0x640;
}

pub mod CLogicAutosave {
    pub const m_bForceNewLevelUnit: usize = 0x4b0;
    pub const m_minHitPoints: usize = 0x4b4;
    pub const m_minHitPointsToCommit: usize = 0x4b8;
}

pub mod CLogicBranch {
    pub const m_bInValue: usize = 0x4b0;
    pub const m_Listeners: usize = 0x4b8;
    pub const m_OnTrue: usize = 0x4d0;
    pub const m_OnFalse: usize = 0x4f8;
}

pub mod CLogicBranchList {
    pub const m_nLogicBranchNames: usize = 0x4b0;
    pub const m_LogicBranchList: usize = 0x530;
    pub const m_eLastState: usize = 0x548;
    pub const m_OnAllTrue: usize = 0x550;
    pub const m_OnAllFalse: usize = 0x578;
    pub const m_OnMixed: usize = 0x5a0;
}

pub mod CLogicCase {
    pub const m_nCase: usize = 0x4b0;
    pub const m_nShuffleCases: usize = 0x5b0;
    pub const m_nLastShuffleCase: usize = 0x5b4;
    pub const m_uchShuffleCaseMap: usize = 0x5b8;
    pub const m_OnCase: usize = 0x5d8;
    pub const m_OnDefault: usize = 0xad8;
}

pub mod CLogicCollisionPair {
    pub const m_nameAttach1: usize = 0x4b0;
    pub const m_nameAttach2: usize = 0x4b8;
    pub const m_disabled: usize = 0x4c0;
    pub const m_succeeded: usize = 0x4c1;
}

pub mod CLogicCompare {
    pub const m_flInValue: usize = 0x4b0;
    pub const m_flCompareValue: usize = 0x4b4;
    pub const m_OnLessThan: usize = 0x4b8;
    pub const m_OnEqualTo: usize = 0x4e0;
    pub const m_OnNotEqualTo: usize = 0x508;
    pub const m_OnGreaterThan: usize = 0x530;
}

pub mod CLogicDistanceAutosave {
    pub const m_iszTargetEntity: usize = 0x4b0;
    pub const m_flDistanceToPlayer: usize = 0x4b8;
    pub const m_bForceNewLevelUnit: usize = 0x4bc;
    pub const m_bCheckCough: usize = 0x4bd;
    pub const m_bThinkDangerous: usize = 0x4be;
    pub const m_flDangerousTime: usize = 0x4c0;
}

pub mod CLogicDistanceCheck {
    pub const m_iszEntityA: usize = 0x4b0;
    pub const m_iszEntityB: usize = 0x4b8;
    pub const m_flZone1Distance: usize = 0x4c0;
    pub const m_flZone2Distance: usize = 0x4c4;
    pub const m_InZone1: usize = 0x4c8;
    pub const m_InZone2: usize = 0x4f0;
    pub const m_InZone3: usize = 0x518;
}

pub mod CLogicEventListener {
    pub const m_iszEventName: usize = 0x4c0;
    pub const m_bIsEnabled: usize = 0x4c8;
    pub const m_nTeam: usize = 0x4cc;
    pub const m_bFetchEventData: usize = 0x4d0;
    pub const m_OnEventFired: usize = 0x4d8;
}

pub mod CLogicGameEvent {
    pub const m_iszEventName: usize = 0x4b0;
}

pub mod CLogicGameEventListener {
    pub const m_OnEventFired: usize = 0x4c0;
    pub const m_iszGameEventName: usize = 0x4e8;
    pub const m_iszGameEventItem: usize = 0x4f0;
    pub const m_bEnabled: usize = 0x4f8;
    pub const m_bStartDisabled: usize = 0x4f9;
}

pub mod CLogicLineToEntity {
    pub const m_Line: usize = 0x4b0;
    pub const m_SourceName: usize = 0x4d8;
    pub const m_StartEntity: usize = 0x4e0;
    pub const m_EndEntity: usize = 0x4e4;
}

pub mod CLogicMeasureMovement {
    pub const m_strMeasureTarget: usize = 0x4b0;
    pub const m_strMeasureReference: usize = 0x4b8;
    pub const m_strTargetReference: usize = 0x4c0;
    pub const m_hMeasureTarget: usize = 0x4c8;
    pub const m_hMeasureReference: usize = 0x4cc;
    pub const m_hTarget: usize = 0x4d0;
    pub const m_hTargetReference: usize = 0x4d4;
    pub const m_flScale: usize = 0x4d8;
    pub const m_nMeasureType: usize = 0x4dc;
}

pub mod CLogicNPCCounter {
    pub const m_OnMinCountAll: usize = 0x4b0;
    pub const m_OnMaxCountAll: usize = 0x4d8;
    pub const m_OnFactorAll: usize = 0x500;
    pub const m_OnMinPlayerDistAll: usize = 0x528;
    pub const m_OnMinCount_1: usize = 0x550;
    pub const m_OnMaxCount_1: usize = 0x578;
    pub const m_OnFactor_1: usize = 0x5a0;
    pub const m_OnMinPlayerDist_1: usize = 0x5c8;
    pub const m_OnMinCount_2: usize = 0x5f0;
    pub const m_OnMaxCount_2: usize = 0x618;
    pub const m_OnFactor_2: usize = 0x640;
    pub const m_OnMinPlayerDist_2: usize = 0x668;
    pub const m_OnMinCount_3: usize = 0x690;
    pub const m_OnMaxCount_3: usize = 0x6b8;
    pub const m_OnFactor_3: usize = 0x6e0;
    pub const m_OnMinPlayerDist_3: usize = 0x708;
    pub const m_hSource: usize = 0x730;
    pub const m_iszSourceEntityName: usize = 0x738;
    pub const m_flDistanceMax: usize = 0x740;
    pub const m_bDisabled: usize = 0x744;
    pub const m_nMinCountAll: usize = 0x748;
    pub const m_nMaxCountAll: usize = 0x74c;
    pub const m_nMinFactorAll: usize = 0x750;
    pub const m_nMaxFactorAll: usize = 0x754;
    pub const m_iszNPCClassname_1: usize = 0x760;
    pub const m_nNPCState_1: usize = 0x768;
    pub const m_bInvertState_1: usize = 0x76c;
    pub const m_nMinCount_1: usize = 0x770;
    pub const m_nMaxCount_1: usize = 0x774;
    pub const m_nMinFactor_1: usize = 0x778;
    pub const m_nMaxFactor_1: usize = 0x77c;
    pub const m_flDefaultDist_1: usize = 0x784;
    pub const m_iszNPCClassname_2: usize = 0x788;
    pub const m_nNPCState_2: usize = 0x790;
    pub const m_bInvertState_2: usize = 0x794;
    pub const m_nMinCount_2: usize = 0x798;
    pub const m_nMaxCount_2: usize = 0x79c;
    pub const m_nMinFactor_2: usize = 0x7a0;
    pub const m_nMaxFactor_2: usize = 0x7a4;
    pub const m_flDefaultDist_2: usize = 0x7ac;
    pub const m_iszNPCClassname_3: usize = 0x7b0;
    pub const m_nNPCState_3: usize = 0x7b8;
    pub const m_bInvertState_3: usize = 0x7bc;
    pub const m_nMinCount_3: usize = 0x7c0;
    pub const m_nMaxCount_3: usize = 0x7c4;
    pub const m_nMinFactor_3: usize = 0x7c8;
    pub const m_nMaxFactor_3: usize = 0x7cc;
    pub const m_flDefaultDist_3: usize = 0x7d4;
}

pub mod CLogicNPCCounterAABB {
    pub const m_vDistanceOuterMins: usize = 0x7f0;
    pub const m_vDistanceOuterMaxs: usize = 0x7fc;
    pub const m_vOuterMins: usize = 0x808;
    pub const m_vOuterMaxs: usize = 0x814;
}

pub mod CLogicNavigation {
    pub const m_isOn: usize = 0x4b8;
    pub const m_navProperty: usize = 0x4bc;
}

pub mod CLogicPlayerProxy {
    pub const m_hPlayer: usize = 0x4b0;
    pub const m_PlayerHasAmmo: usize = 0x4b8;
    pub const m_PlayerHasNoAmmo: usize = 0x4e0;
    pub const m_PlayerDied: usize = 0x508;
    pub const m_RequestedPlayerHealth: usize = 0x530;
}

pub mod CLogicRelay {
    pub const m_OnTrigger: usize = 0x4b0;
    pub const m_OnSpawn: usize = 0x4d8;
    pub const m_bDisabled: usize = 0x500;
    pub const m_bWaitForRefire: usize = 0x501;
    pub const m_bTriggerOnce: usize = 0x502;
    pub const m_bFastRetrigger: usize = 0x503;
    pub const m_bPassthoughCaller: usize = 0x504;
}

pub mod CMapInfo {
    pub const m_iBuyingStatus: usize = 0x4b0;
    pub const m_flBombRadius: usize = 0x4b4;
    pub const m_iPetPopulation: usize = 0x4b8;
    pub const m_bUseNormalSpawnsForDM: usize = 0x4bc;
    pub const m_bDisableAutoGeneratedDMSpawns: usize = 0x4bd;
    pub const m_flBotMaxVisionDistance: usize = 0x4c0;
    pub const m_iHostageCount: usize = 0x4c4;
    pub const m_bFadePlayerVisibilityFarZ: usize = 0x4c8;
}

pub mod CMapVetoPickController {
    pub const m_bPlayedIntroVcd: usize = 0x4b0;
    pub const m_bNeedToPlayFiveSecondsRemaining: usize = 0x4b1;
    pub const m_dblPreMatchDraftSequenceTime: usize = 0x4d0;
    pub const m_bPreMatchDraftStateChanged: usize = 0x4d8;
    pub const m_nDraftType: usize = 0x4dc;
    pub const m_nTeamWinningCoinToss: usize = 0x4e0;
    pub const m_nTeamWithFirstChoice: usize = 0x4e4;
    pub const m_nVoteMapIdsList: usize = 0x5e4;
    pub const m_nAccountIDs: usize = 0x600;
    pub const m_nMapId0: usize = 0x700;
    pub const m_nMapId1: usize = 0x800;
    pub const m_nMapId2: usize = 0x900;
    pub const m_nMapId3: usize = 0xa00;
    pub const m_nMapId4: usize = 0xb00;
    pub const m_nMapId5: usize = 0xc00;
    pub const m_nStartingSide0: usize = 0xd00;
    pub const m_nCurrentPhase: usize = 0xe00;
    pub const m_nPhaseStartTick: usize = 0xe04;
    pub const m_nPhaseDurationTicks: usize = 0xe08;
    pub const m_OnMapVetoed: usize = 0xe10;
    pub const m_OnMapPicked: usize = 0xe38;
    pub const m_OnSidesPicked: usize = 0xe60;
    pub const m_OnNewPhaseStarted: usize = 0xe88;
    pub const m_OnLevelTransition: usize = 0xeb0;
}

pub mod CMarkupVolume {
    pub const m_bEnabled: usize = 0x700;
}

pub mod CMarkupVolumeTagged {
    pub const m_bIsGroup: usize = 0x738;
    pub const m_bGroupByPrefab: usize = 0x739;
    pub const m_bGroupByVolume: usize = 0x73a;
    pub const m_bGroupOtherGroups: usize = 0x73b;
    pub const m_bIsInGroup: usize = 0x73c;
}

pub mod CMarkupVolumeTagged_NavGame {
    pub const m_bFloodFillAttribute: usize = 0x758;
}

pub mod CMarkupVolumeWithRef {
    pub const m_bUseRef: usize = 0x740;
    pub const m_vRefPos: usize = 0x744;
    pub const m_flRefDot: usize = 0x750;
}

pub mod CMathColorBlend {
    pub const m_flInMin: usize = 0x4b0;
    pub const m_flInMax: usize = 0x4b4;
    pub const m_OutColor1: usize = 0x4b8;
    pub const m_OutColor2: usize = 0x4bc;
    pub const m_OutValue: usize = 0x4c0;
}

pub mod CMathCounter {
    pub const m_flMin: usize = 0x4b0;
    pub const m_flMax: usize = 0x4b4;
    pub const m_bHitMin: usize = 0x4b8;
    pub const m_bHitMax: usize = 0x4b9;
    pub const m_bDisabled: usize = 0x4ba;
    pub const m_OutValue: usize = 0x4c0;
    pub const m_OnGetValue: usize = 0x4e8;
    pub const m_OnHitMin: usize = 0x510;
    pub const m_OnHitMax: usize = 0x538;
    pub const m_OnChangedFromMin: usize = 0x560;
    pub const m_OnChangedFromMax: usize = 0x588;
}

pub mod CMathRemap {
    pub const m_flInMin: usize = 0x4b0;
    pub const m_flInMax: usize = 0x4b4;
    pub const m_flOut1: usize = 0x4b8;
    pub const m_flOut2: usize = 0x4bc;
    pub const m_flOldInValue: usize = 0x4c0;
    pub const m_bEnabled: usize = 0x4c4;
    pub const m_OutValue: usize = 0x4c8;
    pub const m_OnRoseAboveMin: usize = 0x4f0;
    pub const m_OnRoseAboveMax: usize = 0x518;
    pub const m_OnFellBelowMin: usize = 0x540;
    pub const m_OnFellBelowMax: usize = 0x568;
}

pub mod CMelee {
    pub const m_flThrowAt: usize = 0xdd0;
    pub const m_hThrower: usize = 0xdd4;
    pub const m_bDidThrowDamage: usize = 0xdd8;
}

pub mod CMessage {
    pub const m_iszMessage: usize = 0x4b0;
    pub const m_MessageVolume: usize = 0x4b8;
    pub const m_MessageAttenuation: usize = 0x4bc;
    pub const m_Radius: usize = 0x4c0;
    pub const m_sNoise: usize = 0x4c8;
    pub const m_OnShowMessage: usize = 0x4d0;
}

pub mod CMessageEntity {
    pub const m_radius: usize = 0x4b0;
    pub const m_messageText: usize = 0x4b8;
    pub const m_drawText: usize = 0x4c0;
    pub const m_bDeveloperOnly: usize = 0x4c1;
    pub const m_bEnabled: usize = 0x4c2;
}

pub mod CModelState {
    pub const m_hModel: usize = 0xa0;
    pub const m_ModelName: usize = 0xa8;
    pub const m_bClientClothCreationSuppressed: usize = 0xe8;
    pub const m_MeshGroupMask: usize = 0x180;
    pub const m_nIdealMotionType: usize = 0x222;
    pub const m_nForceLOD: usize = 0x223;
    pub const m_nClothUpdateFlags: usize = 0x224;
}

pub mod CMolotovProjectile {
    pub const m_bIsIncGrenade: usize = 0xa20;
    pub const m_bDetonated: usize = 0xa2c;
    pub const m_stillTimer: usize = 0xa30;
    pub const m_bHasBouncedOffPlayer: usize = 0xb10;
}

pub mod CMomentaryRotButton {
    pub const m_Position: usize = 0x8c8;
    pub const m_OnUnpressed: usize = 0x8f0;
    pub const m_OnFullyOpen: usize = 0x918;
    pub const m_OnFullyClosed: usize = 0x940;
    pub const m_OnReachedPosition: usize = 0x968;
    pub const m_lastUsed: usize = 0x990;
    pub const m_start: usize = 0x994;
    pub const m_end: usize = 0x9a0;
    pub const m_IdealYaw: usize = 0x9ac;
    pub const m_sNoise: usize = 0x9b0;
    pub const m_bUpdateTarget: usize = 0x9b8;
    pub const m_direction: usize = 0x9bc;
    pub const m_returnSpeed: usize = 0x9c0;
    pub const m_flStartPosition: usize = 0x9c4;
}

pub mod CMotorController {
    pub const m_speed: usize = 0x8;
    pub const m_maxTorque: usize = 0xc;
    pub const m_axis: usize = 0x10;
    pub const m_inertiaFactor: usize = 0x1c;
}

pub mod CMultiLightProxy {
    pub const m_iszLightNameFilter: usize = 0x4b0;
    pub const m_iszLightClassFilter: usize = 0x4b8;
    pub const m_flLightRadiusFilter: usize = 0x4c0;
    pub const m_flBrightnessDelta: usize = 0x4c4;
    pub const m_bPerformScreenFade: usize = 0x4c8;
    pub const m_flTargetBrightnessMultiplier: usize = 0x4cc;
    pub const m_flCurrentBrightnessMultiplier: usize = 0x4d0;
    pub const m_vecLights: usize = 0x4d8;
}

pub mod CMultiSource {
    pub const m_rgEntities: usize = 0x4b0;
    pub const m_rgTriggered: usize = 0x530;
    pub const m_OnTrigger: usize = 0x5b0;
    pub const m_iTotal: usize = 0x5d8;
    pub const m_globalstate: usize = 0x5e0;
}

pub mod CMultiplayer_Expresser {
    pub const m_bAllowMultipleScenes: usize = 0x70;
}

pub mod CNavHullPresetVData {
    pub const m_vecNavHulls: usize = 0x0;
}

pub mod CNavHullVData {
    pub const m_bAgentEnabled: usize = 0x0;
    pub const m_agentRadius: usize = 0x4;
    pub const m_agentHeight: usize = 0x8;
    pub const m_agentShortHeightEnabled: usize = 0xc;
    pub const m_agentShortHeight: usize = 0x10;
    pub const m_agentMaxClimb: usize = 0x14;
    pub const m_agentMaxSlope: usize = 0x18;
    pub const m_agentMaxJumpDownDist: usize = 0x1c;
    pub const m_agentMaxJumpHorizDistBase: usize = 0x20;
    pub const m_agentMaxJumpUpDist: usize = 0x24;
    pub const m_agentBorderErosion: usize = 0x28;
}

pub mod CNavLinkAnimgraphVar {
    pub const m_strAnimgraphVar: usize = 0x0;
    pub const m_unAlignmentDegrees: usize = 0x8;
}

pub mod CNavLinkAreaEntity {
    pub const m_flWidth: usize = 0x4b0;
    pub const m_vLocatorOffset: usize = 0x4b4;
    pub const m_qLocatorAnglesOffset: usize = 0x4c0;
    pub const m_strMovementForward: usize = 0x4d0;
    pub const m_strMovementReverse: usize = 0x4d8;
    pub const m_nNavLinkIdForward: usize = 0x4e0;
    pub const m_nNavLinkIdReverse: usize = 0x4e4;
    pub const m_bEnabled: usize = 0x4e8;
    pub const m_strFilterName: usize = 0x4f0;
    pub const m_hFilter: usize = 0x4f8;
    pub const m_OnNavLinkStart: usize = 0x500;
    pub const m_OnNavLinkFinish: usize = 0x528;
    pub const m_bIsTerminus: usize = 0x550;
}

pub mod CNavLinkMovementVData {
    pub const m_bIsInterpolated: usize = 0x0;
    pub const m_unRecommendedDistance: usize = 0x4;
    pub const m_vecAnimgraphVars: usize = 0x8;
}

pub mod CNavSpaceInfo {
    pub const m_bCreateFlightSpace: usize = 0x4b0;
}

pub mod CNavVolumeBreadthFirstSearch {
    pub const m_vStartPos: usize = 0xa0;
    pub const m_flSearchDist: usize = 0xac;
}

pub mod CNavVolumeSphere {
    pub const m_vCenter: usize = 0x70;
    pub const m_flRadius: usize = 0x7c;
}

pub mod CNavVolumeSphericalShell {
    pub const m_flRadiusInner: usize = 0x80;
}

pub mod CNavVolumeVector {
    pub const m_bHasBeenPreFiltered: usize = 0x78;
}

pub mod CNetworkOriginCellCoordQuantizedVector {
    pub const m_cellX: usize = 0x10;
    pub const m_cellY: usize = 0x12;
    pub const m_cellZ: usize = 0x14;
    pub const m_nOutsideWorld: usize = 0x16;
    pub const m_vecX: usize = 0x18;
    pub const m_vecY: usize = 0x20;
    pub const m_vecZ: usize = 0x28;
}

pub mod CNetworkOriginQuantizedVector {
    pub const m_vecX: usize = 0x10;
    pub const m_vecY: usize = 0x18;
    pub const m_vecZ: usize = 0x20;
}

pub mod CNetworkTransmitComponent {
    pub const m_nTransmitStateOwnedCounter: usize = 0x16c;
}

pub mod CNetworkVelocityVector {
    pub const m_vecX: usize = 0x10;
    pub const m_vecY: usize = 0x18;
    pub const m_vecZ: usize = 0x20;
}

pub mod CNetworkViewOffsetVector {
    pub const m_vecX: usize = 0x10;
    pub const m_vecY: usize = 0x18;
    pub const m_vecZ: usize = 0x20;
}

pub mod CNetworkedSequenceOperation {
    pub const m_hSequence: usize = 0x8;
    pub const m_flPrevCycle: usize = 0xc;
    pub const m_flCycle: usize = 0x10;
    pub const m_flWeight: usize = 0x14;
    pub const m_bSequenceChangeNetworked: usize = 0x1c;
    pub const m_bDiscontinuity: usize = 0x1d;
    pub const m_flPrevCycleFromDiscontinuity: usize = 0x20;
    pub const m_flPrevCycleForAnimEventDetection: usize = 0x24;
}

pub mod COmniLight {
    pub const m_flInnerAngle: usize = 0x938;
    pub const m_flOuterAngle: usize = 0x93c;
    pub const m_bShowLight: usize = 0x940;
}

pub mod COrnamentProp {
    pub const m_initialOwner: usize = 0xb00;
}

pub mod CParadropChopper {
    pub const m_vecDropPos: usize = 0x88c;
    pub const m_flLastDistFromDrop: usize = 0x898;
    pub const m_bDroppedParadrop: usize = 0x89c;
    pub const m_pSoundLoop: usize = 0x8a0;
    pub const m_flSpawnTime: usize = 0x8a8;
    pub const m_flFlightTime: usize = 0x8ac;
    pub const m_bPlayerIsFinishedRappelling: usize = 0x8b0;
    pub const m_flPlayerFinishedRappellingTime: usize = 0x8b4;
    pub const m_strFlyoverDropEvent: usize = 0x8b8;
    pub const m_hCallingPlayer: usize = 0x8c0;
    pub const m_bCalledByPlayer: usize = 0x8c4;
}

pub mod CParticleSystem {
    pub const m_szSnapshotFileName: usize = 0x700;
    pub const m_bActive: usize = 0x900;
    pub const m_bFrozen: usize = 0x901;
    pub const m_flFreezeTransitionDuration: usize = 0x904;
    pub const m_nStopType: usize = 0x908;
    pub const m_bAnimateDuringGameplayPause: usize = 0x90c;
    pub const m_iEffectIndex: usize = 0x910;
    pub const m_flStartTime: usize = 0x918;
    pub const m_flPreSimTime: usize = 0x91c;
    pub const m_vServerControlPoints: usize = 0x920;
    pub const m_iServerControlPointAssignments: usize = 0x950;
    pub const m_hControlPointEnts: usize = 0x954;
    pub const m_bNoSave: usize = 0xa54;
    pub const m_bNoFreeze: usize = 0xa55;
    pub const m_bNoRamp: usize = 0xa56;
    pub const m_bStartActive: usize = 0xa57;
    pub const m_iszEffectName: usize = 0xa58;
    pub const m_iszControlPointNames: usize = 0xa60;
    pub const m_nDataCP: usize = 0xc60;
    pub const m_vecDataCPValue: usize = 0xc64;
    pub const m_nTintCP: usize = 0xc70;
    pub const m_clrTint: usize = 0xc74;
}

pub mod CPathCorner {
    pub const m_flWait: usize = 0x4b0;
    pub const m_flRadius: usize = 0x4b4;
    pub const m_OnPass: usize = 0x4b8;
}

pub mod CPathKeyFrame {
    pub const m_Origin: usize = 0x4b0;
    pub const m_Angles: usize = 0x4bc;
    pub const m_qAngle: usize = 0x4d0;
    pub const m_iNextKey: usize = 0x4e0;
    pub const m_flNextTime: usize = 0x4e8;
    pub const m_pNextKey: usize = 0x4f0;
    pub const m_pPrevKey: usize = 0x4f8;
    pub const m_flSpeed: usize = 0x500;
}

pub mod CPathParticleRope {
    pub const m_bStartActive: usize = 0x4b0;
    pub const m_flMaxSimulationTime: usize = 0x4b4;
    pub const m_iszEffectName: usize = 0x4b8;
    pub const m_PathNodes_Name: usize = 0x4c0;
    pub const m_flParticleSpacing: usize = 0x4d8;
    pub const m_flSlack: usize = 0x4dc;
    pub const m_flRadius: usize = 0x4e0;
    pub const m_ColorTint: usize = 0x4e4;
    pub const m_nEffectState: usize = 0x4e8;
    pub const m_iEffectIndex: usize = 0x4f0;
    pub const m_PathNodes_Position: usize = 0x4f8;
    pub const m_PathNodes_TangentIn: usize = 0x510;
    pub const m_PathNodes_TangentOut: usize = 0x528;
    pub const m_PathNodes_Color: usize = 0x540;
    pub const m_PathNodes_PinEnabled: usize = 0x558;
    pub const m_PathNodes_RadiusScale: usize = 0x570;
}

pub mod CPathTrack {
    pub const m_pnext: usize = 0x4b0;
    pub const m_pprevious: usize = 0x4b8;
    pub const m_paltpath: usize = 0x4c0;
    pub const m_flRadius: usize = 0x4c8;
    pub const m_length: usize = 0x4cc;
    pub const m_altName: usize = 0x4d0;
    pub const m_nIterVal: usize = 0x4d8;
    pub const m_eOrientationType: usize = 0x4dc;
    pub const m_OnPass: usize = 0x4e0;
}

pub mod CPhysBallSocket {
    pub const m_flFriction: usize = 0x508;
    pub const m_bEnableSwingLimit: usize = 0x50c;
    pub const m_flSwingLimit: usize = 0x510;
    pub const m_bEnableTwistLimit: usize = 0x514;
    pub const m_flMinTwistAngle: usize = 0x518;
    pub const m_flMaxTwistAngle: usize = 0x51c;
}

pub mod CPhysBox {
    pub const m_damageType: usize = 0x7c0;
    pub const m_massScale: usize = 0x7c4;
    pub const m_damageToEnableMotion: usize = 0x7c8;
    pub const m_flForceToEnableMotion: usize = 0x7cc;
    pub const m_angPreferredCarryAngles: usize = 0x7d0;
    pub const m_bNotSolidToWorld: usize = 0x7dc;
    pub const m_bEnableUseOutput: usize = 0x7dd;
    pub const m_iExploitableByPlayer: usize = 0x7e0;
    pub const m_flTouchOutputPerEntityDelay: usize = 0x7e4;
    pub const m_OnDamaged: usize = 0x7e8;
    pub const m_OnAwakened: usize = 0x810;
    pub const m_OnMotionEnabled: usize = 0x838;
    pub const m_OnPlayerUse: usize = 0x860;
    pub const m_OnStartTouch: usize = 0x888;
    pub const m_hCarryingPlayer: usize = 0x8b0;
}

pub mod CPhysConstraint {
    pub const m_nameAttach1: usize = 0x4b8;
    pub const m_nameAttach2: usize = 0x4c0;
    pub const m_breakSound: usize = 0x4c8;
    pub const m_forceLimit: usize = 0x4d0;
    pub const m_torqueLimit: usize = 0x4d4;
    pub const m_teleportTick: usize = 0x4d8;
    pub const m_minTeleportDistance: usize = 0x4dc;
    pub const m_OnBreak: usize = 0x4e0;
}

pub mod CPhysExplosion {
    pub const m_bExplodeOnSpawn: usize = 0x4b0;
    pub const m_flMagnitude: usize = 0x4b4;
    pub const m_flDamage: usize = 0x4b8;
    pub const m_radius: usize = 0x4bc;
    pub const m_targetEntityName: usize = 0x4c0;
    pub const m_flInnerRadius: usize = 0x4c8;
    pub const m_flPushScale: usize = 0x4cc;
    pub const m_bConvertToDebrisWhenPossible: usize = 0x4d0;
    pub const m_OnPushedPlayer: usize = 0x4d8;
}

pub mod CPhysFixed {
    pub const m_flLinearFrequency: usize = 0x508;
    pub const m_flLinearDampingRatio: usize = 0x50c;
    pub const m_flAngularFrequency: usize = 0x510;
    pub const m_flAngularDampingRatio: usize = 0x514;
    pub const m_bEnableLinearConstraint: usize = 0x518;
    pub const m_bEnableAngularConstraint: usize = 0x519;
}

pub mod CPhysForce {
    pub const m_nameAttach: usize = 0x4b8;
    pub const m_force: usize = 0x4c0;
    pub const m_forceTime: usize = 0x4c4;
    pub const m_attachedObject: usize = 0x4c8;
    pub const m_wasRestored: usize = 0x4cc;
    pub const m_integrator: usize = 0x4d0;
}

pub mod CPhysHinge {
    pub const m_soundInfo: usize = 0x510;
    pub const m_NotifyMinLimitReached: usize = 0x598;
    pub const m_NotifyMaxLimitReached: usize = 0x5c0;
    pub const m_bAtMinLimit: usize = 0x5e8;
    pub const m_bAtMaxLimit: usize = 0x5e9;
    pub const m_hinge: usize = 0x5ec;
    pub const m_hingeFriction: usize = 0x62c;
    pub const m_systemLoadScale: usize = 0x630;
    pub const m_bIsAxisLocal: usize = 0x634;
    pub const m_flMinRotation: usize = 0x638;
    pub const m_flMaxRotation: usize = 0x63c;
    pub const m_flInitialRotation: usize = 0x640;
    pub const m_flMotorFrequency: usize = 0x644;
    pub const m_flMotorDampingRatio: usize = 0x648;
    pub const m_flAngleSpeed: usize = 0x64c;
    pub const m_flAngleSpeedThreshold: usize = 0x650;
    pub const m_OnStartMoving: usize = 0x658;
    pub const m_OnStopMoving: usize = 0x680;
}

pub mod CPhysImpact {
    pub const m_damage: usize = 0x4b0;
    pub const m_distance: usize = 0x4b4;
    pub const m_directionEntityName: usize = 0x4b8;
}

pub mod CPhysLength {
    pub const m_offset: usize = 0x508;
    pub const m_vecAttach: usize = 0x520;
    pub const m_addLength: usize = 0x52c;
    pub const m_minLength: usize = 0x530;
    pub const m_totalLength: usize = 0x534;
    pub const m_bEnableCollision: usize = 0x538;
}

pub mod CPhysMagnet {
    pub const m_OnMagnetAttach: usize = 0x888;
    pub const m_OnMagnetDetach: usize = 0x8b0;
    pub const m_massScale: usize = 0x8d8;
    pub const m_forceLimit: usize = 0x8dc;
    pub const m_torqueLimit: usize = 0x8e0;
    pub const m_MagnettedEntities: usize = 0x8e8;
    pub const m_bActive: usize = 0x900;
    pub const m_bHasHitSomething: usize = 0x901;
    pub const m_flTotalMass: usize = 0x904;
    pub const m_flRadius: usize = 0x908;
    pub const m_flNextSuckTime: usize = 0x90c;
    pub const m_iMaxObjectsAttached: usize = 0x910;
}

pub mod CPhysMotor {
    pub const m_nameAttach: usize = 0x4b0;
    pub const m_hAttachedObject: usize = 0x4b8;
    pub const m_spinUp: usize = 0x4bc;
    pub const m_additionalAcceleration: usize = 0x4c0;
    pub const m_angularAcceleration: usize = 0x4c4;
    pub const m_lastTime: usize = 0x4c8;
    pub const m_motor: usize = 0x4e0;
}

pub mod CPhysPropAmmoBox {
    pub const m_nUsesRemaining: usize = 0xb98;
    pub const m_flTimeLastUsed: usize = 0xb9c;
}

pub mod CPhysPropLootCrate {
    pub const m_bRenderInPSPM: usize = 0xb98;
    pub const m_bRenderInTablet: usize = 0xb99;
    pub const m_flSpawnTime: usize = 0xb9c;
    pub const m_bTakeDamageFromDangerZone: usize = 0xba0;
    pub const m_pszCrateName: usize = 0xba8;
    pub const m_hCrateOwner: usize = 0xbb0;
    pub const m_bOwnedByPlayer: usize = 0xbb4;
    pub const m_flDampingOriginalSpeed: usize = 0xbb8;
    pub const m_flDampingOriginalRot: usize = 0xbbc;
}

pub mod CPhysPropMapPlacedLongUseEntity {
    pub const m_iszStartUseSound: usize = 0xba0;
    pub const m_nPingType: usize = 0xba8;
    pub const m_nLongUseActionType: usize = 0xbac;
    pub const m_flLongUseDuration: usize = 0xbb0;
    pub const m_OnUseCompleted: usize = 0xbb8;
}

pub mod CPhysPropMoneyCrate {
    pub const m_nCurrentCashCount: usize = 0xbc0;
    pub const m_nCashCount: usize = 0xbc4;
    pub const m_flTimeLastUsed: usize = 0xbc8;
}

pub mod CPhysPropParadropCrate {
    pub const m_bFalling: usize = 0xbc0;
    pub const m_nNumThinksAtZeroVerticalVelocity: usize = 0xbc4;
}

pub mod CPhysPropRadarJammer {
    pub const m_flSpawnTime: usize = 0xba0;
    pub const m_flLastSoundTime: usize = 0xba4;
    pub const m_vecJammedHexCenters: usize = 0xba8;
    pub const m_vecLastJammedOrigin: usize = 0xbc0;
}

pub mod CPhysPropWeaponUpgrade {
    pub const m_nEventPriority: usize = 0xb98;
    pub const m_flTimeLastUsed: usize = 0xb9c;
}

pub mod CPhysPulley {
    pub const m_position2: usize = 0x508;
    pub const m_offset: usize = 0x514;
    pub const m_addLength: usize = 0x52c;
    pub const m_gearRatio: usize = 0x530;
}

pub mod CPhysSlideConstraint {
    pub const m_axisEnd: usize = 0x510;
    pub const m_slideFriction: usize = 0x51c;
    pub const m_systemLoadScale: usize = 0x520;
    pub const m_initialOffset: usize = 0x524;
    pub const m_bEnableLinearConstraint: usize = 0x528;
    pub const m_bEnableAngularConstraint: usize = 0x529;
    pub const m_flMotorFrequency: usize = 0x52c;
    pub const m_flMotorDampingRatio: usize = 0x530;
    pub const m_bUseEntityPivot: usize = 0x534;
    pub const m_soundInfo: usize = 0x538;
}

pub mod CPhysThruster {
    pub const m_localOrigin: usize = 0x510;
}

pub mod CPhysTorque {
    pub const m_axis: usize = 0x510;
}

pub mod CPhysWheelConstraint {
    pub const m_flSuspensionFrequency: usize = 0x508;
    pub const m_flSuspensionDampingRatio: usize = 0x50c;
    pub const m_flSuspensionHeightOffset: usize = 0x510;
    pub const m_bEnableSuspensionLimit: usize = 0x514;
    pub const m_flMinSuspensionOffset: usize = 0x518;
    pub const m_flMaxSuspensionOffset: usize = 0x51c;
    pub const m_bEnableSteeringLimit: usize = 0x520;
    pub const m_flMinSteeringAngle: usize = 0x524;
    pub const m_flMaxSteeringAngle: usize = 0x528;
    pub const m_flSteeringAxisFriction: usize = 0x52c;
    pub const m_flSpinAxisFriction: usize = 0x530;
}

pub mod CPhysicsEntitySolver {
    pub const m_hMovingEntity: usize = 0x4b8;
    pub const m_hPhysicsBlocker: usize = 0x4bc;
    pub const m_separationDuration: usize = 0x4c0;
    pub const m_cancelTime: usize = 0x4c4;
}

pub mod CPhysicsProp {
    pub const m_MotionEnabled: usize = 0xa08;
    pub const m_OnAwakened: usize = 0xa30;
    pub const m_OnAwake: usize = 0xa58;
    pub const m_OnAsleep: usize = 0xa80;
    pub const m_OnPlayerUse: usize = 0xaa8;
    pub const m_OnPlayerPickup: usize = 0xad0;
    pub const m_OnOutOfWorld: usize = 0xaf8;
    pub const m_massScale: usize = 0xb20;
    pub const m_inertiaScale: usize = 0xb24;
    pub const m_buoyancyScale: usize = 0xb28;
    pub const m_damageType: usize = 0xb2c;
    pub const m_damageToEnableMotion: usize = 0xb30;
    pub const m_flForceToEnableMotion: usize = 0xb34;
    pub const m_bThrownByPlayer: usize = 0xb38;
    pub const m_bDroppedByPlayer: usize = 0xb39;
    pub const m_bTouchedByPlayer: usize = 0xb3a;
    pub const m_bFirstCollisionAfterLaunch: usize = 0xb3b;
    pub const m_iExploitableByPlayer: usize = 0xb3c;
    pub const m_bHasBeenAwakened: usize = 0xb40;
    pub const m_bIsOverrideProp: usize = 0xb41;
    pub const m_fNextCheckDisableMotionContactsTime: usize = 0xb44;
    pub const m_iInitialGlowState: usize = 0xb48;
    pub const m_nGlowRange: usize = 0xb4c;
    pub const m_nGlowRangeMin: usize = 0xb50;
    pub const m_glowColor: usize = 0xb54;
    pub const m_bForceNavIgnore: usize = 0xb58;
    pub const m_bNoNavmeshBlocker: usize = 0xb59;
    pub const m_bForceNpcExclude: usize = 0xb5a;
    pub const m_bShouldAutoConvertBackFromDebris: usize = 0xb5b;
    pub const m_bMuteImpactEffects: usize = 0xb5c;
    pub const m_bAcceptDamageFromHeldObjects: usize = 0xb64;
    pub const m_bEnableUseOutput: usize = 0xb65;
    pub const m_bAwake: usize = 0xb66;
    pub const m_nCollisionGroupOverride: usize = 0xb68;
}

pub mod CPhysicsPropRespawnable {
    pub const m_vOriginalSpawnOrigin: usize = 0xb70;
    pub const m_vOriginalSpawnAngles: usize = 0xb7c;
    pub const m_vOriginalMins: usize = 0xb88;
    pub const m_vOriginalMaxs: usize = 0xb94;
    pub const m_flRespawnDuration: usize = 0xba0;
}

pub mod CPhysicsShake {
    pub const m_force: usize = 0x8;
}

pub mod CPhysicsSpring {
    pub const m_flFrequency: usize = 0x4b8;
    pub const m_flDampingRatio: usize = 0x4bc;
    pub const m_flRestLength: usize = 0x4c0;
    pub const m_nameAttachStart: usize = 0x4c8;
    pub const m_nameAttachEnd: usize = 0x4d0;
    pub const m_start: usize = 0x4d8;
    pub const m_end: usize = 0x4e4;
    pub const m_teleportTick: usize = 0x4f0;
}

pub mod CPhysicsWire {
    pub const m_nDensity: usize = 0x4b0;
}

pub mod CPlantedC4 {
    pub const m_bPlantedAtQuestTarget: usize = 0x888;
    pub const m_bBombTicking: usize = 0x889;
    pub const m_flC4Blow: usize = 0x88c;
    pub const m_nBombSite: usize = 0x890;
    pub const m_nSourceSoundscapeHash: usize = 0x894;
    pub const m_OnBombDefused: usize = 0x898;
    pub const m_OnBombBeginDefuse: usize = 0x8c0;
    pub const m_OnBombDefuseAborted: usize = 0x8e8;
    pub const m_bCannotBeDefused: usize = 0x910;
    pub const m_entitySpottedState: usize = 0x918;
    pub const m_nSpotRules: usize = 0x930;
    pub const m_bTrainingPlacedByPlayer: usize = 0x934;
    pub const m_bHasExploded: usize = 0x935;
    pub const m_flTimerLength: usize = 0x938;
    pub const m_bBeingDefused: usize = 0x93c;
    pub const m_fLastDefuseTime: usize = 0x944;
    pub const m_flDefuseLength: usize = 0x94c;
    pub const m_flDefuseCountDown: usize = 0x950;
    pub const m_bBombDefused: usize = 0x954;
    pub const m_hBombDefuser: usize = 0x958;
    pub const m_hControlPanel: usize = 0x95c;
    pub const m_iProgressBarTime: usize = 0x960;
    pub const m_bVoiceAlertFired: usize = 0x964;
    pub const m_bVoiceAlertPlayed: usize = 0x965;
    pub const m_flNextBotBeepTime: usize = 0x96c;
    pub const m_bPlantedAfterPickup: usize = 0x974;
    pub const m_angCatchUpToPlayerEye: usize = 0x978;
    pub const m_flLastSpinDetectionTime: usize = 0x984;
}

pub mod CPlatTrigger {
    pub const m_pPlatform: usize = 0x700;
}

pub mod CPlayerControllerComponent {
    pub const __m_pChainEntity: usize = 0x8;
}

pub mod CPlayerPawnComponent {
    pub const __m_pChainEntity: usize = 0x8;
}

pub mod CPlayerPing {
    pub const m_hPlayer: usize = 0x4b8;
    pub const m_hPingedEntity: usize = 0x4bc;
    pub const m_iType: usize = 0x4c0;
    pub const m_bUrgent: usize = 0x4c4;
    pub const m_szPlaceName: usize = 0x4c5;
}

pub mod CPlayerSprayDecal {
    pub const m_nUniqueID: usize = 0x700;
    pub const m_unAccountID: usize = 0x704;
    pub const m_unTraceID: usize = 0x708;
    pub const m_rtGcTime: usize = 0x70c;
    pub const m_vecEndPos: usize = 0x710;
    pub const m_vecStart: usize = 0x71c;
    pub const m_vecLeft: usize = 0x728;
    pub const m_vecNormal: usize = 0x734;
    pub const m_nPlayer: usize = 0x740;
    pub const m_nEntity: usize = 0x744;
    pub const m_nHitbox: usize = 0x748;
    pub const m_flCreationTime: usize = 0x74c;
    pub const m_nTintID: usize = 0x750;
    pub const m_nVersion: usize = 0x754;
    pub const m_ubSignature: usize = 0x755;
}

pub mod CPlayerVisibility {
    pub const m_flVisibilityStrength: usize = 0x4b0;
    pub const m_flFogDistanceMultiplier: usize = 0x4b4;
    pub const m_flFogMaxDensityMultiplier: usize = 0x4b8;
    pub const m_flFadeTime: usize = 0x4bc;
    pub const m_bStartDisabled: usize = 0x4c0;
    pub const m_bIsEnabled: usize = 0x4c1;
}

pub mod CPlayer_CameraServices {
    pub const m_vecCsViewPunchAngle: usize = 0x40;
    pub const m_nCsViewPunchAngleTick: usize = 0x4c;
    pub const m_flCsViewPunchAngleTickRatio: usize = 0x50;
    pub const m_PlayerFog: usize = 0x58;
    pub const m_hColorCorrectionCtrl: usize = 0x98;
    pub const m_hViewEntity: usize = 0x9c;
    pub const m_hTonemapController: usize = 0xa0;
    pub const m_audio: usize = 0xa8;
    pub const m_PostProcessingVolumes: usize = 0x120;
    pub const m_flOldPlayerZ: usize = 0x138;
    pub const m_flOldPlayerViewOffsetZ: usize = 0x13c;
    pub const m_hTriggerSoundscapeList: usize = 0x158;
}

pub mod CPlayer_MovementServices {
    pub const m_nImpulse: usize = 0x40;
    pub const m_nButtons: usize = 0x48;
    pub const m_nQueuedButtonDownMask: usize = 0x68;
    pub const m_nQueuedButtonChangeMask: usize = 0x70;
    pub const m_nButtonDoublePressed: usize = 0x78;
    pub const m_pButtonPressedCmdNumber: usize = 0x80;
    pub const m_nLastCommandNumberProcessed: usize = 0x180;
    pub const m_nToggleButtonDownMask: usize = 0x188;
    pub const m_flMaxspeed: usize = 0x190;
    pub const m_arrForceSubtickMoveWhen: usize = 0x194;
    pub const m_flForwardMove: usize = 0x1a4;
    pub const m_flLeftMove: usize = 0x1a8;
    pub const m_flUpMove: usize = 0x1ac;
    pub const m_vecLastMovementImpulses: usize = 0x1b0;
    pub const m_vecOldViewAngles: usize = 0x1bc;
}

pub mod CPlayer_MovementServices_Humanoid {
    pub const m_flStepSoundTime: usize = 0x1d0;
    pub const m_flFallVelocity: usize = 0x1d4;
    pub const m_bInCrouch: usize = 0x1d8;
    pub const m_nCrouchState: usize = 0x1dc;
    pub const m_flCrouchTransitionStartTime: usize = 0x1e0;
    pub const m_bDucked: usize = 0x1e4;
    pub const m_bDucking: usize = 0x1e5;
    pub const m_bInDuckJump: usize = 0x1e6;
    pub const m_groundNormal: usize = 0x1e8;
    pub const m_flSurfaceFriction: usize = 0x1f4;
    pub const m_surfaceProps: usize = 0x1f8;
    pub const m_nStepside: usize = 0x208;
    pub const m_iTargetVolume: usize = 0x20c;
    pub const m_vecSmoothedVelocity: usize = 0x210;
}

pub mod CPlayer_ObserverServices {
    pub const m_iObserverMode: usize = 0x40;
    pub const m_hObserverTarget: usize = 0x44;
    pub const m_iObserverLastMode: usize = 0x48;
    pub const m_bForcedObserverMode: usize = 0x4c;
}

pub mod CPlayer_WeaponServices {
    pub const m_bAllowSwitchToNoWeapon: usize = 0x40;
    pub const m_hMyWeapons: usize = 0x48;
    pub const m_hActiveWeapon: usize = 0x60;
    pub const m_hLastWeapon: usize = 0x64;
    pub const m_iAmmo: usize = 0x68;
    pub const m_bPreventWeaponPickup: usize = 0xa8;
}

pub mod CPointAngleSensor {
    pub const m_bDisabled: usize = 0x4b0;
    pub const m_nLookAtName: usize = 0x4b8;
    pub const m_hTargetEntity: usize = 0x4c0;
    pub const m_hLookAtEntity: usize = 0x4c4;
    pub const m_flDuration: usize = 0x4c8;
    pub const m_flDotTolerance: usize = 0x4cc;
    pub const m_flFacingTime: usize = 0x4d0;
    pub const m_bFired: usize = 0x4d4;
    pub const m_OnFacingLookat: usize = 0x4d8;
    pub const m_OnNotFacingLookat: usize = 0x500;
    pub const m_TargetDir: usize = 0x528;
    pub const m_FacingPercentage: usize = 0x550;
}

pub mod CPointAngularVelocitySensor {
    pub const m_hTargetEntity: usize = 0x4b0;
    pub const m_flThreshold: usize = 0x4b4;
    pub const m_nLastCompareResult: usize = 0x4b8;
    pub const m_nLastFireResult: usize = 0x4bc;
    pub const m_flFireTime: usize = 0x4c0;
    pub const m_flFireInterval: usize = 0x4c4;
    pub const m_flLastAngVelocity: usize = 0x4c8;
    pub const m_lastOrientation: usize = 0x4cc;
    pub const m_vecAxis: usize = 0x4d8;
    pub const m_bUseHelper: usize = 0x4e4;
    pub const m_AngularVelocity: usize = 0x4e8;
    pub const m_OnLessThan: usize = 0x510;
    pub const m_OnLessThanOrEqualTo: usize = 0x538;
    pub const m_OnGreaterThan: usize = 0x560;
    pub const m_OnGreaterThanOrEqualTo: usize = 0x588;
    pub const m_OnEqualTo: usize = 0x5b0;
}

pub mod CPointCamera {
    pub const m_FOV: usize = 0x4b0;
    pub const m_Resolution: usize = 0x4b4;
    pub const m_bFogEnable: usize = 0x4b8;
    pub const m_FogColor: usize = 0x4b9;
    pub const m_flFogStart: usize = 0x4c0;
    pub const m_flFogEnd: usize = 0x4c4;
    pub const m_flFogMaxDensity: usize = 0x4c8;
    pub const m_bActive: usize = 0x4cc;
    pub const m_bUseScreenAspectRatio: usize = 0x4cd;
    pub const m_flAspectRatio: usize = 0x4d0;
    pub const m_bNoSky: usize = 0x4d4;
    pub const m_fBrightness: usize = 0x4d8;
    pub const m_flZFar: usize = 0x4dc;
    pub const m_flZNear: usize = 0x4e0;
    pub const m_bCanHLTVUse: usize = 0x4e4;
    pub const m_bDofEnabled: usize = 0x4e5;
    pub const m_flDofNearBlurry: usize = 0x4e8;
    pub const m_flDofNearCrisp: usize = 0x4ec;
    pub const m_flDofFarCrisp: usize = 0x4f0;
    pub const m_flDofFarBlurry: usize = 0x4f4;
    pub const m_flDofTiltToGround: usize = 0x4f8;
    pub const m_TargetFOV: usize = 0x4fc;
    pub const m_DegreesPerSecond: usize = 0x500;
    pub const m_bIsOn: usize = 0x504;
    pub const m_pNext: usize = 0x508;
}

pub mod CPointCameraVFOV {
    pub const m_flVerticalFOV: usize = 0x510;
}

pub mod CPointClientUIDialog {
    pub const m_hActivator: usize = 0x8b0;
    pub const m_bStartEnabled: usize = 0x8b4;
}

pub mod CPointClientUIWorldPanel {
    pub const m_bIgnoreInput: usize = 0x8b0;
    pub const m_bLit: usize = 0x8b1;
    pub const m_bFollowPlayerAcrossTeleport: usize = 0x8b2;
    pub const m_flWidth: usize = 0x8b4;
    pub const m_flHeight: usize = 0x8b8;
    pub const m_flDPI: usize = 0x8bc;
    pub const m_flInteractDistance: usize = 0x8c0;
    pub const m_flDepthOffset: usize = 0x8c4;
    pub const m_unOwnerContext: usize = 0x8c8;
    pub const m_unHorizontalAlign: usize = 0x8cc;
    pub const m_unVerticalAlign: usize = 0x8d0;
    pub const m_unOrientation: usize = 0x8d4;
    pub const m_bAllowInteractionFromAllSceneWorlds: usize = 0x8d8;
    pub const m_vecCSSClasses: usize = 0x8e0;
    pub const m_bOpaque: usize = 0x8f8;
    pub const m_bNoDepth: usize = 0x8f9;
    pub const m_bRenderBackface: usize = 0x8fa;
    pub const m_bUseOffScreenIndicator: usize = 0x8fb;
    pub const m_bExcludeFromSaveGames: usize = 0x8fc;
    pub const m_bGrabbable: usize = 0x8fd;
    pub const m_bOnlyRenderToTexture: usize = 0x8fe;
    pub const m_bDisableMipGen: usize = 0x8ff;
    pub const m_nExplicitImageLayout: usize = 0x900;
}

pub mod CPointClientUIWorldTextPanel {
    pub const m_messageText: usize = 0x908;
}

pub mod CPointCommentaryNode {
    pub const m_iszPreCommands: usize = 0x888;
    pub const m_iszPostCommands: usize = 0x890;
    pub const m_iszCommentaryFile: usize = 0x898;
    pub const m_iszViewTarget: usize = 0x8a0;
    pub const m_hViewTarget: usize = 0x8a8;
    pub const m_hViewTargetAngles: usize = 0x8ac;
    pub const m_iszViewPosition: usize = 0x8b0;
    pub const m_hViewPosition: usize = 0x8b8;
    pub const m_hViewPositionMover: usize = 0x8bc;
    pub const m_bPreventMovement: usize = 0x8c0;
    pub const m_bUnderCrosshair: usize = 0x8c1;
    pub const m_bUnstoppable: usize = 0x8c2;
    pub const m_flFinishedTime: usize = 0x8c4;
    pub const m_vecFinishOrigin: usize = 0x8c8;
    pub const m_vecOriginalAngles: usize = 0x8d4;
    pub const m_vecFinishAngles: usize = 0x8e0;
    pub const m_bPreventChangesWhileMoving: usize = 0x8ec;
    pub const m_bDisabled: usize = 0x8ed;
    pub const m_vecTeleportOrigin: usize = 0x8f0;
    pub const m_flAbortedPlaybackAt: usize = 0x8fc;
    pub const m_pOnCommentaryStarted: usize = 0x900;
    pub const m_pOnCommentaryStopped: usize = 0x928;
    pub const m_bActive: usize = 0x950;
    pub const m_flStartTime: usize = 0x954;
    pub const m_flStartTimeInCommentary: usize = 0x958;
    pub const m_iszTitle: usize = 0x960;
    pub const m_iszSpeakers: usize = 0x968;
    pub const m_iNodeNumber: usize = 0x970;
    pub const m_iNodeNumberMax: usize = 0x974;
    pub const m_bListenedTo: usize = 0x978;
}

pub mod CPointDZDroneGunSpawn {
    pub const m_bSpawnAutomatically: usize = 0x4b8;
}

pub mod CPointDZItemSpawnGroup {
    pub const m_flRadius: usize = 0x4b0;
}

pub mod CPointDZParadropDenialRegion {
    pub const m_flRadius: usize = 0x4b8;
}

pub mod CPointDZWeaponSpawn {
    pub const m_nGroupID: usize = 0x4c0;
    pub const m_flDefaultWeight: usize = 0x4c4;
    pub const m_flCurrentWeight: usize = 0x4c8;
    pub const m_hItem: usize = 0x4cc;
    pub const m_iszDoorName: usize = 0x4d0;
    pub const m_hDoor: usize = 0x4d8;
    pub const m_nPrice: usize = 0x4dc;
}

pub mod CPointEntityFinder {
    pub const m_hEntity: usize = 0x4b0;
    pub const m_iFilterName: usize = 0x4b8;
    pub const m_hFilter: usize = 0x4c0;
    pub const m_iRefName: usize = 0x4c8;
    pub const m_hReference: usize = 0x4d0;
    pub const m_FindMethod: usize = 0x4d4;
    pub const m_OnFoundEntity: usize = 0x4d8;
}

pub mod CPointGamestatsCounter {
    pub const m_strStatisticName: usize = 0x4b0;
    pub const m_bDisabled: usize = 0x4b8;
}

pub mod CPointGiveAmmo {
    pub const m_pActivator: usize = 0x4b0;
}

pub mod CPointHurt {
    pub const m_nDamage: usize = 0x4b0;
    pub const m_bitsDamageType: usize = 0x4b4;
    pub const m_flRadius: usize = 0x4b8;
    pub const m_flDelay: usize = 0x4bc;
    pub const m_strTarget: usize = 0x4c0;
    pub const m_pActivator: usize = 0x4c8;
}

pub mod CPointPrefab {
    pub const m_targetMapName: usize = 0x4b0;
    pub const m_forceWorldGroupID: usize = 0x4b8;
    pub const m_fixupNames: usize = 0x4c0;
    pub const m_bLoadDynamic: usize = 0x4c1;
}

pub mod CPointProximitySensor {
    pub const m_bDisabled: usize = 0x4b0;
    pub const m_hTargetEntity: usize = 0x4b4;
    pub const m_Distance: usize = 0x4b8;
}

pub mod CPointPulse {
    pub const m_sNameFixupStaticPrefix: usize = 0x5c8;
    pub const m_sNameFixupParent: usize = 0x5d0;
    pub const m_sNameFixupLocal: usize = 0x5d8;
}

pub mod CPointPush {
    pub const m_bEnabled: usize = 0x4b0;
    pub const m_flMagnitude: usize = 0x4b4;
    pub const m_flRadius: usize = 0x4b8;
    pub const m_flInnerRadius: usize = 0x4bc;
    pub const m_flConeOfInfluence: usize = 0x4c0;
    pub const m_iszFilterName: usize = 0x4c8;
    pub const m_hFilter: usize = 0x4d0;
}

pub mod CPointTeleport {
    pub const m_vSaveOrigin: usize = 0x4b0;
    pub const m_vSaveAngles: usize = 0x4bc;
    pub const m_bTeleportParentedEntities: usize = 0x4c8;
    pub const m_bTeleportUseCurrentAngle: usize = 0x4c9;
}

pub mod CPointTemplate {
    pub const m_iszWorldName: usize = 0x4b0;
    pub const m_iszSource2EntityLumpName: usize = 0x4b8;
    pub const m_iszEntityFilterName: usize = 0x4c0;
    pub const m_flTimeoutInterval: usize = 0x4c8;
    pub const m_bAsynchronouslySpawnEntities: usize = 0x4cc;
    pub const m_pOutputOnSpawned: usize = 0x4d0;
    pub const m_clientOnlyEntityBehavior: usize = 0x4f8;
    pub const m_ownerSpawnGroupType: usize = 0x4fc;
    pub const m_createdSpawnGroupHandles: usize = 0x500;
    pub const m_SpawnedEntityHandles: usize = 0x518;
    pub const m_ScriptSpawnCallback: usize = 0x530;
    pub const m_ScriptCallbackScope: usize = 0x538;
}

pub mod CPointValueRemapper {
    pub const m_bDisabled: usize = 0x4b0;
    pub const m_bUpdateOnClient: usize = 0x4b1;
    pub const m_nInputType: usize = 0x4b4;
    pub const m_iszRemapLineStartName: usize = 0x4b8;
    pub const m_iszRemapLineEndName: usize = 0x4c0;
    pub const m_hRemapLineStart: usize = 0x4c8;
    pub const m_hRemapLineEnd: usize = 0x4cc;
    pub const m_flMaximumChangePerSecond: usize = 0x4d0;
    pub const m_flDisengageDistance: usize = 0x4d4;
    pub const m_flEngageDistance: usize = 0x4d8;
    pub const m_bRequiresUseKey: usize = 0x4dc;
    pub const m_nOutputType: usize = 0x4e0;
    pub const m_iszOutputEntityName: usize = 0x4e8;
    pub const m_iszOutputEntity2Name: usize = 0x4f0;
    pub const m_iszOutputEntity3Name: usize = 0x4f8;
    pub const m_iszOutputEntity4Name: usize = 0x500;
    pub const m_hOutputEntities: usize = 0x508;
    pub const m_nHapticsType: usize = 0x520;
    pub const m_nMomentumType: usize = 0x524;
    pub const m_flMomentumModifier: usize = 0x528;
    pub const m_flSnapValue: usize = 0x52c;
    pub const m_flCurrentMomentum: usize = 0x530;
    pub const m_nRatchetType: usize = 0x534;
    pub const m_flRatchetOffset: usize = 0x538;
    pub const m_flInputOffset: usize = 0x53c;
    pub const m_bEngaged: usize = 0x540;
    pub const m_bFirstUpdate: usize = 0x541;
    pub const m_flPreviousValue: usize = 0x544;
    pub const m_flPreviousUpdateTickTime: usize = 0x548;
    pub const m_vecPreviousTestPoint: usize = 0x54c;
    pub const m_hUsingPlayer: usize = 0x558;
    pub const m_flCustomOutputValue: usize = 0x55c;
    pub const m_iszSoundEngage: usize = 0x560;
    pub const m_iszSoundDisengage: usize = 0x568;
    pub const m_iszSoundReachedValueZero: usize = 0x570;
    pub const m_iszSoundReachedValueOne: usize = 0x578;
    pub const m_iszSoundMovingLoop: usize = 0x580;
    pub const m_Position: usize = 0x590;
    pub const m_PositionDelta: usize = 0x5b8;
    pub const m_OnReachedValueZero: usize = 0x5e0;
    pub const m_OnReachedValueOne: usize = 0x608;
    pub const m_OnReachedValueCustom: usize = 0x630;
    pub const m_OnEngage: usize = 0x658;
    pub const m_OnDisengage: usize = 0x680;
}

pub mod CPointVelocitySensor {
    pub const m_hTargetEntity: usize = 0x4b0;
    pub const m_vecAxis: usize = 0x4b4;
    pub const m_bEnabled: usize = 0x4c0;
    pub const m_fPrevVelocity: usize = 0x4c4;
    pub const m_flAvgInterval: usize = 0x4c8;
    pub const m_Velocity: usize = 0x4d0;
}

pub mod CPointWorldText {
    pub const m_messageText: usize = 0x700;
    pub const m_FontName: usize = 0x900;
    pub const m_bEnabled: usize = 0x940;
    pub const m_bFullbright: usize = 0x941;
    pub const m_flWorldUnitsPerPx: usize = 0x944;
    pub const m_flFontSize: usize = 0x948;
    pub const m_flDepthOffset: usize = 0x94c;
    pub const m_Color: usize = 0x950;
    pub const m_nJustifyHorizontal: usize = 0x954;
    pub const m_nJustifyVertical: usize = 0x958;
    pub const m_nReorientMode: usize = 0x95c;
}

pub mod CPostProcessingVolume {
    pub const m_hPostSettings: usize = 0x8b8;
    pub const m_flFadeDuration: usize = 0x8c0;
    pub const m_flMinLogExposure: usize = 0x8c4;
    pub const m_flMaxLogExposure: usize = 0x8c8;
    pub const m_flMinExposure: usize = 0x8cc;
    pub const m_flMaxExposure: usize = 0x8d0;
    pub const m_flExposureCompensation: usize = 0x8d4;
    pub const m_flExposureFadeSpeedUp: usize = 0x8d8;
    pub const m_flExposureFadeSpeedDown: usize = 0x8dc;
    pub const m_flTonemapEVSmoothingRange: usize = 0x8e0;
    pub const m_bMaster: usize = 0x8e4;
    pub const m_bExposureControl: usize = 0x8e5;
    pub const m_flRate: usize = 0x8e8;
    pub const m_flTonemapPercentTarget: usize = 0x8ec;
    pub const m_flTonemapPercentBrightPixels: usize = 0x8f0;
    pub const m_flTonemapMinAvgLum: usize = 0x8f4;
}

pub mod CPrecipitationVData {
    pub const m_szParticlePrecipitationEffect: usize = 0x28;
    pub const m_flInnerDistance: usize = 0x108;
    pub const m_nAttachType: usize = 0x10c;
    pub const m_bBatchSameVolumeType: usize = 0x110;
    pub const m_nRTEnvCP: usize = 0x114;
    pub const m_nRTEnvCPComponent: usize = 0x118;
    pub const m_szModifier: usize = 0x120;
}

pub mod CProjectedDecal {
    pub const m_nTexture: usize = 0x4b0;
    pub const m_flDistance: usize = 0x4b4;
}

pub mod CPropCounter {
    pub const m_flDisplayValue: usize = 0x888;
    pub const m_nInitialValue: usize = 0x88c;
}

pub mod CPropDoorRotating {
    pub const m_vecAxis: usize = 0xd90;
    pub const m_flDistance: usize = 0xd9c;
    pub const m_eSpawnPosition: usize = 0xda0;
    pub const m_eOpenDirection: usize = 0xda4;
    pub const m_eCurrentOpenDirection: usize = 0xda8;
    pub const m_flAjarAngle: usize = 0xdac;
    pub const m_angRotationAjarDeprecated: usize = 0xdb0;
    pub const m_angRotationClosed: usize = 0xdbc;
    pub const m_angRotationOpenForward: usize = 0xdc8;
    pub const m_angRotationOpenBack: usize = 0xdd4;
    pub const m_angGoal: usize = 0xde0;
    pub const m_vecForwardBoundsMin: usize = 0xdec;
    pub const m_vecForwardBoundsMax: usize = 0xdf8;
    pub const m_vecBackBoundsMin: usize = 0xe04;
    pub const m_vecBackBoundsMax: usize = 0xe10;
    pub const m_bAjarDoorShouldntAlwaysOpen: usize = 0xe1c;
    pub const m_hEntityBlocker: usize = 0xe20;
}

pub mod CPropDoorRotatingBreakable {
    pub const m_bBreakable: usize = 0xe28;
    pub const m_isAbleToCloseAreaPortals: usize = 0xe29;
    pub const m_currentDamageState: usize = 0xe2c;
    pub const m_damageStates: usize = 0xe30;
}

pub mod CPulseCell_Inflow_GameEvent {
    pub const m_EventName: usize = 0x70;
}

pub mod CPulseCell_Outflow_PlayVCD {
    pub const m_vcdFilename: usize = 0x48;
    pub const m_OnFinished: usize = 0x50;
    pub const m_Triggers: usize = 0x60;
}

pub mod CPulseCell_SoundEventStart {
    pub const m_Type: usize = 0x48;
}

pub mod CPulseCell_Step_EntFire {
    pub const m_Input: usize = 0x48;
}

pub mod CPulseCell_Step_SetAnimGraphParam {
    pub const m_ParamName: usize = 0x48;
}

pub mod CPulseCell_Value_FindEntByName {
    pub const m_EntityType: usize = 0x48;
}

pub mod CRR_Response {
    pub const m_Type: usize = 0x0;
    pub const m_szResponseName: usize = 0x1;
    pub const m_szMatchingRule: usize = 0xc1;
    pub const m_Params: usize = 0x148;
    pub const m_fMatchScore: usize = 0x168;
    pub const m_szSpeakerContext: usize = 0x170;
    pub const m_szWorldContext: usize = 0x178;
    pub const m_Followup: usize = 0x180;
    pub const m_pchCriteriaNames: usize = 0x1b8;
    pub const m_pchCriteriaValues: usize = 0x1d0;
}

pub mod CRagdollConstraint {
    pub const m_xmin: usize = 0x508;
    pub const m_xmax: usize = 0x50c;
    pub const m_ymin: usize = 0x510;
    pub const m_ymax: usize = 0x514;
    pub const m_zmin: usize = 0x518;
    pub const m_zmax: usize = 0x51c;
    pub const m_xfriction: usize = 0x520;
    pub const m_yfriction: usize = 0x524;
    pub const m_zfriction: usize = 0x528;
}

pub mod CRagdollMagnet {
    pub const m_bDisabled: usize = 0x4b0;
    pub const m_radius: usize = 0x4b4;
    pub const m_force: usize = 0x4b8;
    pub const m_axis: usize = 0x4bc;
}

pub mod CRagdollManager {
    pub const m_iCurrentMaxRagdollCount: usize = 0x4b0;
    pub const m_iMaxRagdollCount: usize = 0x4b4;
    pub const m_bSaveImportant: usize = 0x4b8;
}

pub mod CRagdollProp {
    pub const m_ragdoll: usize = 0x890;
    pub const m_bStartDisabled: usize = 0x8c8;
    pub const m_ragPos: usize = 0x8d0;
    pub const m_ragAngles: usize = 0x8e8;
    pub const m_hRagdollSource: usize = 0x900;
    pub const m_lastUpdateTickCount: usize = 0x904;
    pub const m_allAsleep: usize = 0x908;
    pub const m_bFirstCollisionAfterLaunch: usize = 0x909;
    pub const m_hDamageEntity: usize = 0x90c;
    pub const m_hKiller: usize = 0x910;
    pub const m_hPhysicsAttacker: usize = 0x914;
    pub const m_flLastPhysicsInfluenceTime: usize = 0x918;
    pub const m_flFadeOutStartTime: usize = 0x91c;
    pub const m_flFadeTime: usize = 0x920;
    pub const m_vecLastOrigin: usize = 0x924;
    pub const m_flAwakeTime: usize = 0x930;
    pub const m_flLastOriginChangeTime: usize = 0x934;
    pub const m_nBloodColor: usize = 0x938;
    pub const m_strOriginClassName: usize = 0x940;
    pub const m_strSourceClassName: usize = 0x948;
    pub const m_bHasBeenPhysgunned: usize = 0x950;
    pub const m_bShouldTeleportPhysics: usize = 0x951;
    pub const m_flBlendWeight: usize = 0x954;
    pub const m_flDefaultFadeScale: usize = 0x958;
    pub const m_ragdollMins: usize = 0x960;
    pub const m_ragdollMaxs: usize = 0x978;
    pub const m_bShouldDeleteActivationRecord: usize = 0x990;
    pub const m_bValidatePoweredRagdollPose: usize = 0x9f0;
}

pub mod CRagdollPropAttached {
    pub const m_boneIndexAttached: usize = 0xa30;
    pub const m_ragdollAttachedObjectIndex: usize = 0xa34;
    pub const m_attachmentPointBoneSpace: usize = 0xa38;
    pub const m_attachmentPointRagdollSpace: usize = 0xa44;
    pub const m_bShouldDetach: usize = 0xa50;
    pub const m_bShouldDeleteAttachedActivationRecord: usize = 0xa60;
}

pub mod CRandSimTimer {
    pub const m_minInterval: usize = 0x8;
    pub const m_maxInterval: usize = 0xc;
}

pub mod CRandStopwatch {
    pub const m_minInterval: usize = 0xc;
    pub const m_maxInterval: usize = 0x10;
}

pub mod CRangeFloat {
    pub const m_pValue: usize = 0x0;
}

pub mod CRangeInt {
    pub const m_pValue: usize = 0x0;
}

pub mod CRectLight {
    pub const m_bShowLight: usize = 0x938;
}

pub mod CRemapFloat {
    pub const m_pValue: usize = 0x0;
}

pub mod CRenderComponent {
    pub const __m_pChainEntity: usize = 0x10;
    pub const m_bIsRenderingWithViewModels: usize = 0x50;
    pub const m_nSplitscreenFlags: usize = 0x54;
    pub const m_bEnableRendering: usize = 0x60;
    pub const m_bInterpolationReadyToDraw: usize = 0xb0;
}

pub mod CResponseCriteriaSet {
    pub const m_nNumPrefixedContexts: usize = 0x28;
    pub const m_bOverrideOnAppend: usize = 0x2c;
}

pub mod CResponseQueue {
    pub const m_ExpresserTargets: usize = 0x50;
}

pub mod CResponseQueue_CDeferredResponse {
    pub const m_contexts: usize = 0x10;
    pub const m_fDispatchTime: usize = 0x40;
    pub const m_hIssuer: usize = 0x44;
    pub const m_response: usize = 0x50;
    pub const m_bResponseValid: usize = 0x238;
}

pub mod CRetakeGameRules {
    pub const m_nMatchSeed: usize = 0xf8;
    pub const m_bBlockersPresent: usize = 0xfc;
    pub const m_bRoundInProgress: usize = 0xfd;
    pub const m_iFirstSecondHalfRound: usize = 0x100;
    pub const m_iBombSite: usize = 0x104;
}

pub mod CRevertSaved {
    pub const m_loadTime: usize = 0x700;
    pub const m_Duration: usize = 0x704;
    pub const m_HoldTime: usize = 0x708;
}

pub mod CRopeKeyframe {
    pub const m_RopeFlags: usize = 0x708;
    pub const m_iNextLinkName: usize = 0x710;
    pub const m_Slack: usize = 0x718;
    pub const m_Width: usize = 0x71c;
    pub const m_TextureScale: usize = 0x720;
    pub const m_nSegments: usize = 0x724;
    pub const m_bConstrainBetweenEndpoints: usize = 0x725;
    pub const m_strRopeMaterialModel: usize = 0x728;
    pub const m_iRopeMaterialModelIndex: usize = 0x730;
    pub const m_Subdiv: usize = 0x738;
    pub const m_nChangeCount: usize = 0x739;
    pub const m_RopeLength: usize = 0x73a;
    pub const m_fLockedPoints: usize = 0x73c;
    pub const m_bCreatedFromMapFile: usize = 0x73d;
    pub const m_flScrollSpeed: usize = 0x740;
    pub const m_bStartPointValid: usize = 0x744;
    pub const m_bEndPointValid: usize = 0x745;
    pub const m_hStartPoint: usize = 0x748;
    pub const m_hEndPoint: usize = 0x74c;
    pub const m_iStartAttachment: usize = 0x750;
    pub const m_iEndAttachment: usize = 0x751;
}

pub mod CRotDoor {
    pub const m_bSolidBsp: usize = 0x988;
}

pub mod CRuleEntity {
    pub const m_iszMaster: usize = 0x700;
}

pub mod CRulePointEntity {
    pub const m_Score: usize = 0x708;
}

pub mod CSAdditionalMatchStats_t {
    pub const m_numRoundsSurvived: usize = 0x14;
    pub const m_maxNumRoundsSurvived: usize = 0x18;
    pub const m_numRoundsSurvivedTotal: usize = 0x1c;
    pub const m_iRoundsWonWithoutPurchase: usize = 0x20;
    pub const m_iRoundsWonWithoutPurchaseTotal: usize = 0x24;
    pub const m_numFirstKills: usize = 0x28;
    pub const m_numClutchKills: usize = 0x2c;
    pub const m_numPistolKills: usize = 0x30;
    pub const m_numSniperKills: usize = 0x34;
}

pub mod CSAdditionalPerRoundStats_t {
    pub const m_numChickensKilled: usize = 0x0;
    pub const m_killsWhileBlind: usize = 0x4;
    pub const m_bombCarrierkills: usize = 0x8;
    pub const m_iBurnDamageInflicted: usize = 0xc;
    pub const m_iDinks: usize = 0x10;
}

pub mod CSMatchStats_t {
    pub const m_iEnemy5Ks: usize = 0x68;
    pub const m_iEnemy4Ks: usize = 0x6c;
    pub const m_iEnemy3Ks: usize = 0x70;
    pub const m_iEnemy2Ks: usize = 0x74;
    pub const m_iUtility_Count: usize = 0x78;
    pub const m_iUtility_Successes: usize = 0x7c;
    pub const m_iUtility_Enemies: usize = 0x80;
    pub const m_iFlash_Count: usize = 0x84;
    pub const m_iFlash_Successes: usize = 0x88;
    pub const m_nHealthPointsRemovedTotal: usize = 0x8c;
    pub const m_nHealthPointsDealtTotal: usize = 0x90;
    pub const m_nShotsFiredTotal: usize = 0x94;
    pub const m_nShotsOnTargetTotal: usize = 0x98;
    pub const m_i1v1Count: usize = 0x9c;
    pub const m_i1v1Wins: usize = 0xa0;
    pub const m_i1v2Count: usize = 0xa4;
    pub const m_i1v2Wins: usize = 0xa8;
    pub const m_iEntryCount: usize = 0xac;
    pub const m_iEntryWins: usize = 0xb0;
}

pub mod CSPerRoundStats_t {
    pub const m_iKills: usize = 0x30;
    pub const m_iDeaths: usize = 0x34;
    pub const m_iAssists: usize = 0x38;
    pub const m_iDamage: usize = 0x3c;
    pub const m_iEquipmentValue: usize = 0x40;
    pub const m_iMoneySaved: usize = 0x44;
    pub const m_iKillReward: usize = 0x48;
    pub const m_iLiveTime: usize = 0x4c;
    pub const m_iHeadShotKills: usize = 0x50;
    pub const m_iObjective: usize = 0x54;
    pub const m_iCashEarned: usize = 0x58;
    pub const m_iUtilityDamage: usize = 0x5c;
    pub const m_iEnemiesFlashed: usize = 0x60;
}

pub mod CSceneEntity {
    pub const m_iszSceneFile: usize = 0x4b8;
    pub const m_iszResumeSceneFile: usize = 0x4c0;
    pub const m_iszTarget1: usize = 0x4c8;
    pub const m_iszTarget2: usize = 0x4d0;
    pub const m_iszTarget3: usize = 0x4d8;
    pub const m_iszTarget4: usize = 0x4e0;
    pub const m_iszTarget5: usize = 0x4e8;
    pub const m_iszTarget6: usize = 0x4f0;
    pub const m_iszTarget7: usize = 0x4f8;
    pub const m_iszTarget8: usize = 0x500;
    pub const m_hTarget1: usize = 0x508;
    pub const m_hTarget2: usize = 0x50c;
    pub const m_hTarget3: usize = 0x510;
    pub const m_hTarget4: usize = 0x514;
    pub const m_hTarget5: usize = 0x518;
    pub const m_hTarget6: usize = 0x51c;
    pub const m_hTarget7: usize = 0x520;
    pub const m_hTarget8: usize = 0x524;
    pub const m_bIsPlayingBack: usize = 0x528;
    pub const m_bPaused: usize = 0x529;
    pub const m_bMultiplayer: usize = 0x52a;
    pub const m_bAutogenerated: usize = 0x52b;
    pub const m_flForceClientTime: usize = 0x52c;
    pub const m_flCurrentTime: usize = 0x530;
    pub const m_flFrameTime: usize = 0x534;
    pub const m_bCancelAtNextInterrupt: usize = 0x538;
    pub const m_fPitch: usize = 0x53c;
    pub const m_bAutomated: usize = 0x540;
    pub const m_nAutomatedAction: usize = 0x544;
    pub const m_flAutomationDelay: usize = 0x548;
    pub const m_flAutomationTime: usize = 0x54c;
    pub const m_hWaitingForThisResumeScene: usize = 0x550;
    pub const m_bWaitingForResumeScene: usize = 0x554;
    pub const m_bPausedViaInput: usize = 0x555;
    pub const m_bPauseAtNextInterrupt: usize = 0x556;
    pub const m_bWaitingForActor: usize = 0x557;
    pub const m_bWaitingForInterrupt: usize = 0x558;
    pub const m_bInterruptedActorsScenes: usize = 0x559;
    pub const m_bBreakOnNonIdle: usize = 0x55a;
    pub const m_hActorList: usize = 0x560;
    pub const m_hRemoveActorList: usize = 0x578;
    pub const m_nSceneFlushCounter: usize = 0x5a0;
    pub const m_nSceneStringIndex: usize = 0x5a4;
    pub const m_OnStart: usize = 0x5a8;
    pub const m_OnCompletion: usize = 0x5d0;
    pub const m_OnCanceled: usize = 0x5f8;
    pub const m_OnPaused: usize = 0x620;
    pub const m_OnResumed: usize = 0x648;
    pub const m_OnTrigger: usize = 0x670;
    pub const m_hInterruptScene: usize = 0x980;
    pub const m_nInterruptCount: usize = 0x984;
    pub const m_bSceneMissing: usize = 0x988;
    pub const m_bInterrupted: usize = 0x989;
    pub const m_bCompletedEarly: usize = 0x98a;
    pub const m_bInterruptSceneFinished: usize = 0x98b;
    pub const m_bRestoring: usize = 0x98c;
    pub const m_hNotifySceneCompletion: usize = 0x990;
    pub const m_hListManagers: usize = 0x9a8;
    pub const m_iszSoundName: usize = 0x9e8;
    pub const m_hActor: usize = 0x9f0;
    pub const m_hActivator: usize = 0x9f4;
    pub const m_BusyActor: usize = 0x9f8;
    pub const m_iPlayerDeathBehavior: usize = 0x9fc;
}

pub mod CSceneEventInfo {
    pub const m_iLayer: usize = 0x0;
    pub const m_iPriority: usize = 0x4;
    pub const m_hSequence: usize = 0x8;
    pub const m_flWeight: usize = 0xc;
    pub const m_bIsMoving: usize = 0x10;
    pub const m_bHasArrived: usize = 0x11;
    pub const m_flInitialYaw: usize = 0x14;
    pub const m_flTargetYaw: usize = 0x18;
    pub const m_flFacingYaw: usize = 0x1c;
    pub const m_nType: usize = 0x20;
    pub const m_flNext: usize = 0x24;
    pub const m_bIsGesture: usize = 0x28;
    pub const m_bShouldRemove: usize = 0x29;
    pub const m_hTarget: usize = 0x54;
    pub const m_nSceneEventId: usize = 0x58;
    pub const m_bClientSide: usize = 0x5c;
    pub const m_bStarted: usize = 0x5d;
}

pub mod CSceneListManager {
    pub const m_hListManagers: usize = 0x4b0;
    pub const m_iszScenes: usize = 0x4c8;
    pub const m_hScenes: usize = 0x548;
}

pub mod CScriptComponent {
    pub const m_scriptClassName: usize = 0x30;
}

pub mod CScriptItem {
    pub const m_OnPlayerPickup: usize = 0x960;
    pub const m_MoveTypeOverride: usize = 0x988;
}

pub mod CScriptNavBlocker {
    pub const m_vExtent: usize = 0x710;
}

pub mod CScriptTriggerHurt {
    pub const m_vExtent: usize = 0x948;
}

pub mod CScriptTriggerMultiple {
    pub const m_vExtent: usize = 0x8d0;
}

pub mod CScriptTriggerOnce {
    pub const m_vExtent: usize = 0x8d0;
}

pub mod CScriptTriggerPush {
    pub const m_vExtent: usize = 0x8d0;
}

pub mod CScriptUniformRandomStream {
    pub const m_hScriptScope: usize = 0x8;
    pub const m_nInitialSeed: usize = 0x9c;
}

pub mod CScriptedSequence {
    pub const m_iszEntry: usize = 0x4b0;
    pub const m_iszPreIdle: usize = 0x4b8;
    pub const m_iszPlay: usize = 0x4c0;
    pub const m_iszPostIdle: usize = 0x4c8;
    pub const m_iszModifierToAddOnPlay: usize = 0x4d0;
    pub const m_iszNextScript: usize = 0x4d8;
    pub const m_iszEntity: usize = 0x4e0;
    pub const m_iszSyncGroup: usize = 0x4e8;
    pub const m_nMoveTo: usize = 0x4f0;
    pub const m_bIsPlayingPreIdle: usize = 0x4f4;
    pub const m_bIsPlayingEntry: usize = 0x4f5;
    pub const m_bIsPlayingAction: usize = 0x4f6;
    pub const m_bIsPlayingPostIdle: usize = 0x4f7;
    pub const m_bLoopPreIdleSequence: usize = 0x4f8;
    pub const m_bLoopActionSequence: usize = 0x4f9;
    pub const m_bLoopPostIdleSequence: usize = 0x4fa;
    pub const m_bSynchPostIdles: usize = 0x4fb;
    pub const m_bIgnoreGravity: usize = 0x4fc;
    pub const m_bDisableNPCCollisions: usize = 0x4fd;
    pub const m_bKeepAnimgraphLockedPost: usize = 0x4fe;
    pub const m_bDontAddModifiers: usize = 0x4ff;
    pub const m_flRadius: usize = 0x500;
    pub const m_flRepeat: usize = 0x504;
    pub const m_flPlayAnimFadeInTime: usize = 0x508;
    pub const m_flMoveInterpTime: usize = 0x50c;
    pub const m_flAngRate: usize = 0x510;
    pub const m_iDelay: usize = 0x514;
    pub const m_startTime: usize = 0x518;
    pub const m_bWaitForBeginSequence: usize = 0x51c;
    pub const m_saved_effects: usize = 0x520;
    pub const m_savedFlags: usize = 0x524;
    pub const m_savedCollisionGroup: usize = 0x528;
    pub const m_interruptable: usize = 0x52c;
    pub const m_sequenceStarted: usize = 0x52d;
    pub const m_bPrevAnimatedEveryTick: usize = 0x52e;
    pub const m_bForcedAnimatedEveryTick: usize = 0x52f;
    pub const m_bPositionRelativeToOtherEntity: usize = 0x530;
    pub const m_hTargetEnt: usize = 0x534;
    pub const m_hNextCine: usize = 0x538;
    pub const m_bThinking: usize = 0x53c;
    pub const m_bInitiatedSelfDelete: usize = 0x53d;
    pub const m_bIsTeleportingDueToMoveTo: usize = 0x53e;
    pub const m_bAllowCustomInterruptConditions: usize = 0x53f;
    pub const m_hLastFoundEntity: usize = 0x540;
    pub const m_hForcedTarget: usize = 0x544;
    pub const m_bDontCancelOtherSequences: usize = 0x548;
    pub const m_bForceSynch: usize = 0x549;
    pub const m_bTargetWasAsleep: usize = 0x54a;
    pub const m_bPreventUpdateYawOnFinish: usize = 0x54b;
    pub const m_bEnsureOnNavmeshOnFinish: usize = 0x54c;
    pub const m_onDeathBehavior: usize = 0x550;
    pub const m_ConflictResponse: usize = 0x554;
    pub const m_OnBeginSequence: usize = 0x558;
    pub const m_OnActionStartOrLoop: usize = 0x580;
    pub const m_OnEndSequence: usize = 0x5a8;
    pub const m_OnPostIdleEndSequence: usize = 0x5d0;
    pub const m_OnCancelSequence: usize = 0x5f8;
    pub const m_OnCancelFailedSequence: usize = 0x620;
    pub const m_OnScriptEvent: usize = 0x648;
    pub const m_matOtherToMain: usize = 0x790;
    pub const m_hInteractionMainEntity: usize = 0x7b0;
    pub const m_iPlayerDeathBehavior: usize = 0x7b4;
}

pub mod CSensorGrenadeProjectile {
    pub const m_fExpireTime: usize = 0xa20;
    pub const m_fNextDetectPlayerSound: usize = 0xa24;
    pub const m_hDisplayGrenade: usize = 0xa28;
}

pub mod CShatterGlassShard {
    pub const m_hShardHandle: usize = 0x8;
    pub const m_vecPanelVertices: usize = 0x10;
    pub const m_vLocalPanelSpaceOrigin: usize = 0x28;
    pub const m_hModel: usize = 0x30;
    pub const m_hPhysicsEntity: usize = 0x38;
    pub const m_hParentPanel: usize = 0x3c;
    pub const m_hParentShard: usize = 0x40;
    pub const m_ShatterStressType: usize = 0x44;
    pub const m_vecStressVelocity: usize = 0x48;
    pub const m_bCreatedModel: usize = 0x54;
    pub const m_flLongestEdge: usize = 0x58;
    pub const m_flShortestEdge: usize = 0x5c;
    pub const m_flLongestAcross: usize = 0x60;
    pub const m_flShortestAcross: usize = 0x64;
    pub const m_flSumOfAllEdges: usize = 0x68;
    pub const m_flArea: usize = 0x6c;
    pub const m_nOnFrameEdge: usize = 0x70;
    pub const m_nParentPanelsNthShard: usize = 0x74;
    pub const m_nSubShardGeneration: usize = 0x78;
    pub const m_vecAverageVertPosition: usize = 0x7c;
    pub const m_bAverageVertPositionIsValid: usize = 0x84;
    pub const m_vecPanelSpaceStressPositionA: usize = 0x88;
    pub const m_vecPanelSpaceStressPositionB: usize = 0x90;
    pub const m_bStressPositionAIsValid: usize = 0x98;
    pub const m_bStressPositionBIsValid: usize = 0x99;
    pub const m_bFlaggedForRemoval: usize = 0x9a;
    pub const m_flPhysicsEntitySpawnedAtTime: usize = 0x9c;
    pub const m_bShatterRateLimited: usize = 0xa0;
    pub const m_hEntityHittingMe: usize = 0xa4;
    pub const m_vecNeighbors: usize = 0xa8;
}

pub mod CShatterGlassShardPhysics {
    pub const m_bDebris: usize = 0xb70;
    pub const m_hParentShard: usize = 0xb74;
    pub const m_ShardDesc: usize = 0xb78;
}

pub mod CSimTimer {
    pub const m_interval: usize = 0x8;
}

pub mod CSimpleSimTimer {
    pub const m_next: usize = 0x0;
    pub const m_nWorldGroupId: usize = 0x4;
}

pub mod CSingleplayRules {
    pub const m_bSinglePlayerGameEnding: usize = 0x90;
}

pub mod CSkeletonAnimationController {
    pub const m_pSkeletonInstance: usize = 0x8;
}

pub mod CSkeletonInstance {
    pub const m_modelState: usize = 0x160;
    pub const m_bIsAnimationEnabled: usize = 0x390;
    pub const m_bUseParentRenderBounds: usize = 0x391;
    pub const m_bDisableSolidCollisionsForHierarchy: usize = 0x392;
    pub const m_bDirtyMotionType: usize = 0x0;
    pub const m_bIsGeneratingLatchedParentSpaceState: usize = 0x0;
    pub const m_materialGroup: usize = 0x394;
    pub const m_nHitboxSet: usize = 0x398;
}

pub mod CSkillDamage {
    pub const m_flDamage: usize = 0x0;
    pub const m_flPhysicsForceDamage: usize = 0x10;
}

pub mod CSkillFloat {
    pub const m_pValue: usize = 0x0;
}

pub mod CSkillInt {
    pub const m_pValue: usize = 0x0;
}

pub mod CSkyCamera {
    pub const m_skyboxData: usize = 0x4b0;
    pub const m_skyboxSlotToken: usize = 0x540;
    pub const m_bUseAngles: usize = 0x544;
    pub const m_pNext: usize = 0x548;
}

pub mod CSkyboxReference {
    pub const m_worldGroupId: usize = 0x4b0;
    pub const m_hSkyCamera: usize = 0x4b4;
}

pub mod CSmokeGrenadeProjectile {
    pub const m_nSmokeEffectTickBegin: usize = 0xa38;
    pub const m_bDidSmokeEffect: usize = 0xa3c;
    pub const m_nRandomSeed: usize = 0xa40;
    pub const m_vSmokeColor: usize = 0xa44;
    pub const m_vSmokeDetonationPos: usize = 0xa50;
    pub const m_VoxelFrameData: usize = 0xa60;
    pub const m_flLastBounce: usize = 0xa78;
    pub const m_fllastSimulationTime: usize = 0xa7c;
}

pub mod CSmoothFunc {
    pub const m_flSmoothAmplitude: usize = 0x8;
    pub const m_flSmoothBias: usize = 0xc;
    pub const m_flSmoothDuration: usize = 0x10;
    pub const m_flSmoothRemainingTime: usize = 0x14;
    pub const m_nSmoothDir: usize = 0x18;
}

pub mod CSound {
    pub const m_hOwner: usize = 0x0;
    pub const m_hTarget: usize = 0x4;
    pub const m_iVolume: usize = 0x8;
    pub const m_flOcclusionScale: usize = 0xc;
    pub const m_iType: usize = 0x10;
    pub const m_iNextAudible: usize = 0x14;
    pub const m_flExpireTime: usize = 0x18;
    pub const m_iNext: usize = 0x1c;
    pub const m_bNoExpirationTime: usize = 0x1e;
    pub const m_ownerChannelIndex: usize = 0x20;
    pub const m_vecOrigin: usize = 0x24;
    pub const m_bHasOwner: usize = 0x30;
}

pub mod CSoundAreaEntityBase {
    pub const m_bDisabled: usize = 0x4b0;
    pub const m_iszSoundAreaType: usize = 0x4b8;
    pub const m_vPos: usize = 0x4c0;
}

pub mod CSoundAreaEntityOrientedBox {
    pub const m_vMin: usize = 0x4d0;
    pub const m_vMax: usize = 0x4dc;
}

pub mod CSoundAreaEntitySphere {
    pub const m_flRadius: usize = 0x4d0;
}

pub mod CSoundEnt {
    pub const m_iFreeSound: usize = 0x4b0;
    pub const m_iActiveSound: usize = 0x4b4;
    pub const m_cLastActiveSounds: usize = 0x4b8;
    pub const m_SoundPool: usize = 0x4bc;
}

pub mod CSoundEnvelope {
    pub const m_current: usize = 0x0;
    pub const m_target: usize = 0x4;
    pub const m_rate: usize = 0x8;
    pub const m_forceupdate: usize = 0xc;
}

pub mod CSoundEventAABBEntity {
    pub const m_vMins: usize = 0x558;
    pub const m_vMaxs: usize = 0x564;
}

pub mod CSoundEventEntity {
    pub const m_bStartOnSpawn: usize = 0x4b0;
    pub const m_bToLocalPlayer: usize = 0x4b1;
    pub const m_bStopOnNew: usize = 0x4b2;
    pub const m_bSaveRestore: usize = 0x4b3;
    pub const m_bSavedIsPlaying: usize = 0x4b4;
    pub const m_flSavedElapsedTime: usize = 0x4b8;
    pub const m_iszSourceEntityName: usize = 0x4c0;
    pub const m_iszAttachmentName: usize = 0x4c8;
    pub const m_onGUIDChanged: usize = 0x4d0;
    pub const m_onSoundFinished: usize = 0x4f8;
    pub const m_iszSoundName: usize = 0x540;
    pub const m_hSource: usize = 0x550;
}

pub mod CSoundEventOBBEntity {
    pub const m_vMins: usize = 0x558;
    pub const m_vMaxs: usize = 0x564;
}

pub mod CSoundEventParameter {
    pub const m_iszParamName: usize = 0x4b8;
    pub const m_flFloatValue: usize = 0x4c0;
}

pub mod CSoundEventPathCornerEntity {
    pub const m_iszPathCorner: usize = 0x558;
    pub const m_iCountMax: usize = 0x560;
    pub const m_flDistanceMax: usize = 0x564;
    pub const m_flDistMaxSqr: usize = 0x568;
    pub const m_flDotProductMax: usize = 0x56c;
    pub const bPlaying: usize = 0x570;
}

pub mod CSoundOpvarSetAABBEntity {
    pub const m_vDistanceInnerMins: usize = 0x648;
    pub const m_vDistanceInnerMaxs: usize = 0x654;
    pub const m_vDistanceOuterMins: usize = 0x660;
    pub const m_vDistanceOuterMaxs: usize = 0x66c;
    pub const m_nAABBDirection: usize = 0x678;
    pub const m_vInnerMins: usize = 0x67c;
    pub const m_vInnerMaxs: usize = 0x688;
    pub const m_vOuterMins: usize = 0x694;
    pub const m_vOuterMaxs: usize = 0x6a0;
}

pub mod CSoundOpvarSetEntity {
    pub const m_iszStackName: usize = 0x4b8;
    pub const m_iszOperatorName: usize = 0x4c0;
    pub const m_iszOpvarName: usize = 0x4c8;
    pub const m_nOpvarType: usize = 0x4d0;
    pub const m_nOpvarIndex: usize = 0x4d4;
    pub const m_flOpvarValue: usize = 0x4d8;
    pub const m_OpvarValueString: usize = 0x4e0;
    pub const m_bSetOnSpawn: usize = 0x4e8;
}

pub mod CSoundOpvarSetOBBWindEntity {
    pub const m_vMins: usize = 0x548;
    pub const m_vMaxs: usize = 0x554;
    pub const m_vDistanceMins: usize = 0x560;
    pub const m_vDistanceMaxs: usize = 0x56c;
    pub const m_flWindMin: usize = 0x578;
    pub const m_flWindMax: usize = 0x57c;
    pub const m_flWindMapMin: usize = 0x580;
    pub const m_flWindMapMax: usize = 0x584;
}

pub mod CSoundOpvarSetPathCornerEntity {
    pub const m_flDistMinSqr: usize = 0x660;
    pub const m_flDistMaxSqr: usize = 0x664;
    pub const m_iszPathCornerEntityName: usize = 0x668;
}

pub mod CSoundOpvarSetPointBase {
    pub const m_bDisabled: usize = 0x4b0;
    pub const m_hSource: usize = 0x4b4;
    pub const m_iszSourceEntityName: usize = 0x4c0;
    pub const m_vLastPosition: usize = 0x518;
    pub const m_iszStackName: usize = 0x528;
    pub const m_iszOperatorName: usize = 0x530;
    pub const m_iszOpvarName: usize = 0x538;
    pub const m_iOpvarIndex: usize = 0x540;
    pub const m_bUseAutoCompare: usize = 0x544;
}

pub mod CSoundOpvarSetPointEntity {
    pub const m_OnEnter: usize = 0x548;
    pub const m_OnExit: usize = 0x570;
    pub const m_bAutoDisable: usize = 0x598;
    pub const m_flDistanceMin: usize = 0x5dc;
    pub const m_flDistanceMax: usize = 0x5e0;
    pub const m_flDistanceMapMin: usize = 0x5e4;
    pub const m_flDistanceMapMax: usize = 0x5e8;
    pub const m_flOcclusionRadius: usize = 0x5ec;
    pub const m_flOcclusionMin: usize = 0x5f0;
    pub const m_flOcclusionMax: usize = 0x5f4;
    pub const m_flValSetOnDisable: usize = 0x5f8;
    pub const m_bSetValueOnDisable: usize = 0x5fc;
    pub const m_nSimulationMode: usize = 0x600;
    pub const m_nVisibilitySamples: usize = 0x604;
    pub const m_vDynamicProxyPoint: usize = 0x608;
    pub const m_flDynamicMaximumOcclusion: usize = 0x614;
    pub const m_hDynamicEntity: usize = 0x618;
    pub const m_iszDynamicEntityName: usize = 0x620;
    pub const m_flPathingDistanceNormFactor: usize = 0x628;
    pub const m_vPathingSourcePos: usize = 0x62c;
    pub const m_vPathingListenerPos: usize = 0x638;
    pub const m_nPathingSourceIndex: usize = 0x644;
}

pub mod CSoundPatch {
    pub const m_pitch: usize = 0x8;
    pub const m_volume: usize = 0x18;
    pub const m_shutdownTime: usize = 0x30;
    pub const m_flLastTime: usize = 0x34;
    pub const m_iszSoundScriptName: usize = 0x38;
    pub const m_hEnt: usize = 0x40;
    pub const m_soundEntityIndex: usize = 0x44;
    pub const m_soundOrigin: usize = 0x48;
    pub const m_isPlaying: usize = 0x54;
    pub const m_Filter: usize = 0x58;
    pub const m_flCloseCaptionDuration: usize = 0x80;
    pub const m_bUpdatedSoundOrigin: usize = 0x84;
    pub const m_iszClassName: usize = 0x88;
}

pub mod CSoundStackSave {
    pub const m_iszStackName: usize = 0x4b0;
}

pub mod CSpotlightEnd {
    pub const m_flLightScale: usize = 0x700;
    pub const m_Radius: usize = 0x704;
    pub const m_vSpotlightDir: usize = 0x708;
    pub const m_vSpotlightOrg: usize = 0x714;
}

pub mod CSprite {
    pub const m_hSpriteMaterial: usize = 0x700;
    pub const m_hAttachedToEntity: usize = 0x708;
    pub const m_nAttachment: usize = 0x70c;
    pub const m_flSpriteFramerate: usize = 0x710;
    pub const m_flFrame: usize = 0x714;
    pub const m_flDieTime: usize = 0x718;
    pub const m_nBrightness: usize = 0x728;
    pub const m_flBrightnessDuration: usize = 0x72c;
    pub const m_flSpriteScale: usize = 0x730;
    pub const m_flScaleDuration: usize = 0x734;
    pub const m_bWorldSpaceScale: usize = 0x738;
    pub const m_flGlowProxySize: usize = 0x73c;
    pub const m_flHDRColorScale: usize = 0x740;
    pub const m_flLastTime: usize = 0x744;
    pub const m_flMaxFrame: usize = 0x748;
    pub const m_flStartScale: usize = 0x74c;
    pub const m_flDestScale: usize = 0x750;
    pub const m_flScaleTimeStart: usize = 0x754;
    pub const m_nStartBrightness: usize = 0x758;
    pub const m_nDestBrightness: usize = 0x75c;
    pub const m_flBrightnessTimeStart: usize = 0x760;
    pub const m_nSpriteWidth: usize = 0x764;
    pub const m_nSpriteHeight: usize = 0x768;
}

pub mod CStopwatch {
    pub const m_interval: usize = 0xc;
}

pub mod CStopwatchBase {
    pub const m_fIsRunning: usize = 0x8;
}

pub mod CSun {
    pub const m_vDirection: usize = 0x700;
    pub const m_clrOverlay: usize = 0x70c;
    pub const m_iszEffectName: usize = 0x710;
    pub const m_iszSSEffectName: usize = 0x718;
    pub const m_bOn: usize = 0x720;
    pub const m_bmaxColor: usize = 0x721;
    pub const m_flSize: usize = 0x724;
    pub const m_flRotation: usize = 0x728;
    pub const m_flHazeScale: usize = 0x72c;
    pub const m_flAlphaHaze: usize = 0x730;
    pub const m_flAlphaHdr: usize = 0x734;
    pub const m_flAlphaScale: usize = 0x738;
    pub const m_flHDRColorScale: usize = 0x73c;
    pub const m_flFarZScale: usize = 0x740;
}

pub mod CSurvivalGameRules {
    pub const m_bBoundsInitialized: usize = 0x8;
    pub const m_vecPlayAreaMins: usize = 0xc;
    pub const m_vecPlayAreaMaxs: usize = 0x18;
    pub const m_iPlayerSpawnHexIndices: usize = 0x24;
    pub const m_SpawnTileState: usize = 0x124;
    pub const m_flSpawnSelectionTimeStartCurrentStage: usize = 0x204;
    pub const m_flSpawnSelectionTimeEndCurrentStage: usize = 0x208;
    pub const m_flSpawnSelectionTimeEndLastStage: usize = 0x20c;
    pub const m_spawnStage: usize = 0x210;
    pub const m_flTabletHexOriginX: usize = 0x214;
    pub const m_flTabletHexOriginY: usize = 0x218;
    pub const m_flTabletHexSize: usize = 0x21c;
    pub const m_roundData_playerXuids: usize = 0x220;
    pub const m_roundData_playerPositions: usize = 0x420;
    pub const m_roundData_playerTeams: usize = 0x520;
    pub const m_SurvivalGameRuleDecisionTypes: usize = 0x620;
    pub const m_SurvivalGameRuleDecisionValues: usize = 0x660;
    pub const m_flSurvivalStartTime: usize = 0x6a0;
    pub const m_flLastThinkTime: usize = 0x6a4;
    pub const m_nBlockedTileIndices: usize = 0x6a8;
    pub const m_vecPlayerSpawnLocations: usize = 0x790;
    pub const m_bWaitingForMoreThanOnePlayer: usize = 0x7a8;
    pub const m_bSurvivalEventFired_FadeEveryoneOutFromMapSelection: usize = 0x7a9;
    pub const m_bSurvivalEventFired_TimeForSmokeBeacons: usize = 0x7aa;
    pub const m_bSurvivalEventFired_FirstParadropIncoming: usize = 0x7ab;
    pub const m_bSurvivalEventFired_WarnedEveryoneAboutRespawnEnding: usize = 0x7ac;
    pub const m_flLastWinConditionDetectedTime: usize = 0x7b0;
    pub const m_nWinConditionStageProgress: usize = 0x7b4;
    pub const m_nEntIndexOfRunnerUpPlayer: usize = 0x7b8;
    pub const m_nEntIndexOfKilledPlayerCheckingWinConditions: usize = 0x7bc;
    pub const m_flTimeOfLastParadrop: usize = 0x7c0;
    pub const m_bSurvivalEventFired_PlayedWinnerSurrenderAnim: usize = 0x7f8;
    pub const m_hWinnerPlayer: usize = 0x7fc;
    pub const m_vecLoadedOutPlayers: usize = 0x800;
    pub const m_vecRespawnedPlayers: usize = 0x818;
    pub const m_vecMetalCrates: usize = 0x830;
    pub const m_flLastDroneSpawnTime: usize = 0x848;
    pub const m_hSpawnChopper: usize = 0x868;
}

pub mod CSurvivalSpawnChopper {
    pub const m_pSoundLoop: usize = 0x888;
    pub const m_flSpawnTimeStamp: usize = 0x890;
    pub const m_flFlightPathRotationOffset: usize = 0x894;
    pub const m_bFlipX: usize = 0x898;
    pub const m_bFlipY: usize = 0x899;
    pub const m_bCircling: usize = 0x89a;
    pub const m_flLastPassengerCheckTime: usize = 0x89c;
}

pub mod CTablet {
    pub const m_bPendingBuyMenu: usize = 0xdd8;
    pub const m_flUpgradeExpirationTime: usize = 0xddc;
    pub const m_vecLocalHexFlags: usize = 0xdec;
    pub const m_nContractKillGridIndex: usize = 0xe94;
    pub const m_nContractKillGridHighResIndex: usize = 0xe98;
    pub const m_bTabletReceptionIsBlocked: usize = 0xe9c;
    pub const m_flScanProgress: usize = 0xea0;
    pub const m_flBootTime: usize = 0xea4;
    pub const m_flShowMapTime: usize = 0xea8;
    pub const m_vecNearestMetalCratePos: usize = 0xeac;
    pub const m_skinState: usize = 0xeb8;
    pub const m_vecNotificationIds: usize = 0xebc;
    pub const m_vecNotificationTimestamps: usize = 0xedc;
    pub const m_nLastPurchaseIndex: usize = 0xefc;
    pub const m_vecPlayerPositionHistory: usize = 0xf00;
    pub const m_vecLastPlayerPosition: usize = 0x1020;
    pub const m_flNextCheckForIncomingDronesTime: usize = 0x1028;
    pub const m_flLastPlayerOccupiedGridUpdate: usize = 0x102c;
    pub const m_flLastTabletBlockedTime: usize = 0x1030;
    pub const m_flLastClosePoseParamVal: usize = 0x10e0;
}

pub mod CTakeDamageInfo {
    pub const m_vecDamageForce: usize = 0x8;
    pub const m_vecDamagePosition: usize = 0x14;
    pub const m_vecReportedPosition: usize = 0x20;
    pub const m_vecDamageDirection: usize = 0x2c;
    pub const m_hInflictor: usize = 0x38;
    pub const m_hAttacker: usize = 0x3c;
    pub const m_hAbility: usize = 0x40;
    pub const m_flDamage: usize = 0x44;
    pub const m_bitsDamageType: usize = 0x48;
    pub const m_iDamageCustom: usize = 0x4c;
    pub const m_iAmmoType: usize = 0x50;
    pub const m_flOriginalDamage: usize = 0x60;
    pub const m_bShouldBleed: usize = 0x64;
    pub const m_bShouldSpark: usize = 0x65;
    pub const m_nDamageFlags: usize = 0x70;
    pub const m_nNumObjectsPenetrated: usize = 0x74;
    pub const m_hScriptInstance: usize = 0x78;
    pub const m_bInTakeDamageFlow: usize = 0x98;
}

pub mod CTakeDamageResult {
    pub const m_nHealthLost: usize = 0x0;
    pub const m_nDamageTaken: usize = 0x4;
}

pub mod CTakeDamageSummaryScopeGuard {
    pub const m_vecSummaries: usize = 0x8;
}

pub mod CTankTargetChange {
    pub const m_newTarget: usize = 0x4b0;
    pub const m_newTargetName: usize = 0x4c0;
}

pub mod CTankTrainAI {
    pub const m_hTrain: usize = 0x4b0;
    pub const m_hTargetEntity: usize = 0x4b4;
    pub const m_soundPlaying: usize = 0x4b8;
    pub const m_startSoundName: usize = 0x4d0;
    pub const m_engineSoundName: usize = 0x4d8;
    pub const m_movementSoundName: usize = 0x4e0;
    pub const m_targetEntityName: usize = 0x4e8;
}

pub mod CTeam {
    pub const m_aPlayerControllers: usize = 0x4b0;
    pub const m_aPlayers: usize = 0x4c8;
    pub const m_iScore: usize = 0x4e0;
    pub const m_szTeamname: usize = 0x4e4;
}

pub mod CTestEffect {
    pub const m_iLoop: usize = 0x4b0;
    pub const m_iBeam: usize = 0x4b4;
    pub const m_pBeam: usize = 0x4b8;
    pub const m_flBeamTime: usize = 0x578;
    pub const m_flStartTime: usize = 0x5d8;
}

pub mod CTextureBasedAnimatable {
    pub const m_bLoop: usize = 0x700;
    pub const m_flFPS: usize = 0x704;
    pub const m_hPositionKeys: usize = 0x708;
    pub const m_hRotationKeys: usize = 0x710;
    pub const m_vAnimationBoundsMin: usize = 0x718;
    pub const m_vAnimationBoundsMax: usize = 0x724;
    pub const m_flStartTime: usize = 0x730;
    pub const m_flStartFrame: usize = 0x734;
}

pub mod CTimeline {
    pub const m_flValues: usize = 0x10;
    pub const m_nValueCounts: usize = 0x110;
    pub const m_nBucketCount: usize = 0x210;
    pub const m_flInterval: usize = 0x214;
    pub const m_flFinalValue: usize = 0x218;
    pub const m_nCompressionType: usize = 0x21c;
    pub const m_bStopped: usize = 0x220;
}

pub mod CTimerEntity {
    pub const m_OnTimer: usize = 0x4b0;
    pub const m_OnTimerHigh: usize = 0x4d8;
    pub const m_OnTimerLow: usize = 0x500;
    pub const m_iDisabled: usize = 0x528;
    pub const m_flInitialDelay: usize = 0x52c;
    pub const m_flRefireTime: usize = 0x530;
    pub const m_bUpDownState: usize = 0x534;
    pub const m_iUseRandomTime: usize = 0x538;
    pub const m_bPauseAfterFiring: usize = 0x53c;
    pub const m_flLowerRandomBound: usize = 0x540;
    pub const m_flUpperRandomBound: usize = 0x544;
    pub const m_flRemainingTime: usize = 0x548;
    pub const m_bPaused: usize = 0x54c;
}

pub mod CTonemapController2 {
    pub const m_flAutoExposureMin: usize = 0x4b0;
    pub const m_flAutoExposureMax: usize = 0x4b4;
    pub const m_flTonemapPercentTarget: usize = 0x4b8;
    pub const m_flTonemapPercentBrightPixels: usize = 0x4bc;
    pub const m_flTonemapMinAvgLum: usize = 0x4c0;
    pub const m_flExposureAdaptationSpeedUp: usize = 0x4c4;
    pub const m_flExposureAdaptationSpeedDown: usize = 0x4c8;
    pub const m_flTonemapEVSmoothingRange: usize = 0x4cc;
}

pub mod CTonemapTrigger {
    pub const m_tonemapControllerName: usize = 0x8a8;
    pub const m_hTonemapController: usize = 0x8b0;
}

pub mod CTriggerActiveWeaponDetect {
    pub const m_OnTouchedActiveWeapon: usize = 0x8a8;
    pub const m_iszWeaponClassName: usize = 0x8d0;
}

pub mod CTriggerBrush {
    pub const m_OnStartTouch: usize = 0x700;
    pub const m_OnEndTouch: usize = 0x728;
    pub const m_OnUse: usize = 0x750;
    pub const m_iInputFilter: usize = 0x778;
    pub const m_iDontMessageParent: usize = 0x77c;
}

pub mod CTriggerBuoyancy {
    pub const m_BuoyancyHelper: usize = 0x8a8;
    pub const m_flFluidDensity: usize = 0x8c8;
}

pub mod CTriggerDetectBulletFire {
    pub const m_bPlayerFireOnly: usize = 0x8a8;
    pub const m_OnDetectedBulletFire: usize = 0x8b0;
}

pub mod CTriggerDetectExplosion {
    pub const m_OnDetectedExplosion: usize = 0x8e0;
}

pub mod CTriggerFan {
    pub const m_vFanOrigin: usize = 0x8a8;
    pub const m_vFanEnd: usize = 0x8b4;
    pub const m_vNoise: usize = 0x8c0;
    pub const m_flForce: usize = 0x8cc;
    pub const m_flPlayerForce: usize = 0x8d0;
    pub const m_flRampTime: usize = 0x8d4;
    pub const m_bFalloff: usize = 0x8d8;
    pub const m_bPushPlayer: usize = 0x8d9;
    pub const m_bRampDown: usize = 0x8da;
    pub const m_bAddNoise: usize = 0x8db;
    pub const m_RampTimer: usize = 0x8e0;
}

pub mod CTriggerGameEvent {
    pub const m_strStartTouchEventName: usize = 0x8a8;
    pub const m_strEndTouchEventName: usize = 0x8b0;
    pub const m_strTriggerID: usize = 0x8b8;
}

pub mod CTriggerHurt {
    pub const m_flOriginalDamage: usize = 0x8a8;
    pub const m_flDamage: usize = 0x8ac;
    pub const m_flDamageCap: usize = 0x8b0;
    pub const m_flLastDmgTime: usize = 0x8b4;
    pub const m_flForgivenessDelay: usize = 0x8b8;
    pub const m_bitsDamageInflict: usize = 0x8bc;
    pub const m_damageModel: usize = 0x8c0;
    pub const m_bNoDmgForce: usize = 0x8c4;
    pub const m_vDamageForce: usize = 0x8c8;
    pub const m_thinkAlways: usize = 0x8d4;
    pub const m_hurtThinkPeriod: usize = 0x8d8;
    pub const m_OnHurt: usize = 0x8e0;
    pub const m_OnHurtPlayer: usize = 0x908;
    pub const m_hurtEntities: usize = 0x930;
}

pub mod CTriggerImpact {
    pub const m_flMagnitude: usize = 0x8d0;
    pub const m_flNoise: usize = 0x8d4;
    pub const m_flViewkick: usize = 0x8d8;
    pub const m_pOutputForce: usize = 0x8e0;
}

pub mod CTriggerLerpObject {
    pub const m_iszLerpTarget: usize = 0x8a8;
    pub const m_hLerpTarget: usize = 0x8b0;
    pub const m_iszLerpTargetAttachment: usize = 0x8b8;
    pub const m_hLerpTargetAttachment: usize = 0x8c0;
    pub const m_flLerpDuration: usize = 0x8c4;
    pub const m_bLerpRestoreMoveType: usize = 0x8c8;
    pub const m_bSingleLerpObject: usize = 0x8c9;
    pub const m_vecLerpingObjects: usize = 0x8d0;
    pub const m_iszLerpEffect: usize = 0x8e8;
    pub const m_iszLerpSound: usize = 0x8f0;
    pub const m_OnLerpStarted: usize = 0x8f8;
    pub const m_OnLerpFinished: usize = 0x920;
}

pub mod CTriggerLook {
    pub const m_hLookTarget: usize = 0x8d0;
    pub const m_flFieldOfView: usize = 0x8d4;
    pub const m_flLookTime: usize = 0x8d8;
    pub const m_flLookTimeTotal: usize = 0x8dc;
    pub const m_flLookTimeLast: usize = 0x8e0;
    pub const m_flTimeoutDuration: usize = 0x8e4;
    pub const m_bTimeoutFired: usize = 0x8e8;
    pub const m_bIsLooking: usize = 0x8e9;
    pub const m_b2DFOV: usize = 0x8ea;
    pub const m_bUseVelocity: usize = 0x8eb;
    pub const m_hActivator: usize = 0x8ec;
    pub const m_bTestOcclusion: usize = 0x8f0;
    pub const m_OnTimeout: usize = 0x8f8;
    pub const m_OnStartLook: usize = 0x920;
    pub const m_OnEndLook: usize = 0x948;
}

pub mod CTriggerMultiple {
    pub const m_OnTrigger: usize = 0x8a8;
}

pub mod CTriggerPhysics {
    pub const m_gravityScale: usize = 0x8b8;
    pub const m_linearLimit: usize = 0x8bc;
    pub const m_linearDamping: usize = 0x8c0;
    pub const m_angularLimit: usize = 0x8c4;
    pub const m_angularDamping: usize = 0x8c8;
    pub const m_linearForce: usize = 0x8cc;
    pub const m_flFrequency: usize = 0x8d0;
    pub const m_flDampingRatio: usize = 0x8d4;
    pub const m_vecLinearForcePointAt: usize = 0x8d8;
    pub const m_bCollapseToForcePoint: usize = 0x8e4;
    pub const m_vecLinearForcePointAtWorld: usize = 0x8e8;
    pub const m_vecLinearForceDirection: usize = 0x8f4;
    pub const m_bConvertToDebrisWhenPossible: usize = 0x900;
}

pub mod CTriggerProximity {
    pub const m_hMeasureTarget: usize = 0x8a8;
    pub const m_iszMeasureTarget: usize = 0x8b0;
    pub const m_fRadius: usize = 0x8b8;
    pub const m_nTouchers: usize = 0x8bc;
    pub const m_NearestEntityDistance: usize = 0x8c0;
}

pub mod CTriggerPush {
    pub const m_angPushEntitySpace: usize = 0x8a8;
    pub const m_vecPushDirEntitySpace: usize = 0x8b4;
    pub const m_bTriggerOnStartTouch: usize = 0x8c0;
    pub const m_flAlternateTicksFix: usize = 0x8c4;
    pub const m_flPushSpeed: usize = 0x8c8;
}

pub mod CTriggerRemove {
    pub const m_OnRemove: usize = 0x8a8;
}

pub mod CTriggerSafeMoneyGather {
    pub const m_vecCashBundles: usize = 0x8a8;
}

pub mod CTriggerSave {
    pub const m_bForceNewLevelUnit: usize = 0x8a8;
    pub const m_fDangerousTimer: usize = 0x8ac;
    pub const m_minHitPoints: usize = 0x8b0;
}

pub mod CTriggerSndSosOpvar {
    pub const m_hTouchingPlayers: usize = 0x8a8;
    pub const m_flPosition: usize = 0x8c0;
    pub const m_flCenterSize: usize = 0x8cc;
    pub const m_flMinVal: usize = 0x8d0;
    pub const m_flMaxVal: usize = 0x8d4;
    pub const m_flWait: usize = 0x8d8;
    pub const m_opvarName: usize = 0x8e0;
    pub const m_stackName: usize = 0x8e8;
    pub const m_operatorName: usize = 0x8f0;
    pub const m_bVolIs2D: usize = 0x8f8;
    pub const m_opvarNameChar: usize = 0x8f9;
    pub const m_stackNameChar: usize = 0x9f9;
    pub const m_operatorNameChar: usize = 0xaf9;
    pub const m_VecNormPos: usize = 0xbfc;
    pub const m_flNormCenterSize: usize = 0xc08;
}

pub mod CTriggerSoundscape {
    pub const m_hSoundscape: usize = 0x8a8;
    pub const m_SoundscapeName: usize = 0x8b0;
    pub const m_spectators: usize = 0x8b8;
}

pub mod CTriggerTeleport {
    pub const m_iLandmark: usize = 0x8a8;
    pub const m_bUseLandmarkAngles: usize = 0x8b0;
    pub const m_bMirrorPlayer: usize = 0x8b1;
}

pub mod CTriggerToggleSave {
    pub const m_bDisabled: usize = 0x8a8;
}

pub mod CTriggerVolume {
    pub const m_iFilterName: usize = 0x700;
    pub const m_hFilter: usize = 0x708;
}

pub mod CTripWireFireProjectile {
    pub const m_flAttachTime: usize = 0x9c0;
    pub const m_vecTripWireEndPositions: usize = 0x9c4;
    pub const m_bTripWireEndPositionsUsed: usize = 0xa3c;
    pub const m_hStuckToEnt: usize = 0xa48;
    pub const m_nLastStuckToEntModelIndex: usize = 0xa4c;
    pub const m_xformStuckToEnt: usize = 0xa50;
    pub const m_vecTrapSetPosition: usize = 0xa70;
    pub const m_nWireSoundsPlayed: usize = 0xa7c;
}

pub mod CVoteController {
    pub const m_iActiveIssueIndex: usize = 0x4b0;
    pub const m_iOnlyTeamToVote: usize = 0x4b4;
    pub const m_nVoteOptionCount: usize = 0x4b8;
    pub const m_nPotentialVotes: usize = 0x4cc;
    pub const m_bIsYesNoVote: usize = 0x4d0;
    pub const m_acceptingVotesTimer: usize = 0x4d8;
    pub const m_executeCommandTimer: usize = 0x4f0;
    pub const m_resetVoteTimer: usize = 0x508;
    pub const m_arrVotedUsers: usize = 0x520;
    pub const m_nVotesCast: usize = 0x538;
    pub const m_playerHoldingVote: usize = 0x638;
    pub const m_playerOverrideForVote: usize = 0x63c;
    pub const m_nHighestCountIndex: usize = 0x640;
    pub const m_potentialIssues: usize = 0x648;
    pub const m_VoteOptions: usize = 0x660;
}

pub mod CWeaponBaseItem {
    pub const m_SequenceCompleteTimer: usize = 0xdd0;
    pub const m_bRedraw: usize = 0xde8;
}

pub mod CWeaponCSBase {
    pub const m_bRemoveable: usize = 0xc80;
    pub const m_flFireSequenceStartTime: usize = 0xc84;
    pub const m_nFireSequenceStartTimeChange: usize = 0xc88;
    pub const m_nFireSequenceStartTimeAck: usize = 0xc8c;
    pub const m_bPlayerFireEventIsPrimary: usize = 0xc90;
    pub const m_seqIdle: usize = 0xc94;
    pub const m_seqFirePrimary: usize = 0xc98;
    pub const m_seqFireSecondary: usize = 0xc9c;
    pub const m_bPlayerAmmoStockOnPickup: usize = 0xca8;
    pub const m_bRequireUseToTouch: usize = 0xca9;
    pub const m_iState: usize = 0xcac;
    pub const m_flLastTimeInAir: usize = 0xcb0;
    pub const m_flLastDeployTime: usize = 0xcb4;
    pub const m_nViewModelIndex: usize = 0xcb8;
    pub const m_bReloadsWithClips: usize = 0xcbc;
    pub const m_flTimeWeaponIdle: usize = 0xcd8;
    pub const m_bFireOnEmpty: usize = 0xcdc;
    pub const m_OnPlayerPickup: usize = 0xce0;
    pub const m_weaponMode: usize = 0xd08;
    pub const m_flTurningInaccuracyDelta: usize = 0xd0c;
    pub const m_vecTurningInaccuracyEyeDirLast: usize = 0xd10;
    pub const m_flTurningInaccuracy: usize = 0xd1c;
    pub const m_fAccuracyPenalty: usize = 0xd20;
    pub const m_flLastAccuracyUpdateTime: usize = 0xd24;
    pub const m_fAccuracySmoothedForZoom: usize = 0xd28;
    pub const m_fScopeZoomEndTime: usize = 0xd2c;
    pub const m_iRecoilIndex: usize = 0xd30;
    pub const m_flRecoilIndex: usize = 0xd34;
    pub const m_bBurstMode: usize = 0xd38;
    pub const m_flPostponeFireReadyTime: usize = 0xd3c;
    pub const m_bInReload: usize = 0xd40;
    pub const m_bReloadVisuallyComplete: usize = 0xd41;
    pub const m_flDroppedAtTime: usize = 0xd44;
    pub const m_bIsHauledBack: usize = 0xd48;
    pub const m_bSilencerOn: usize = 0xd49;
    pub const m_flTimeSilencerSwitchComplete: usize = 0xd4c;
    pub const m_iOriginalTeamNumber: usize = 0xd50;
    pub const m_flNextAttackRenderTimeOffset: usize = 0xd54;
    pub const m_bCanBePickedUp: usize = 0xd60;
    pub const m_bUseCanOverrideNextOwnerTouchTime: usize = 0xd61;
    pub const m_nextOwnerTouchTime: usize = 0xd64;
    pub const m_nextPrevOwnerTouchTime: usize = 0xd68;
    pub const m_hPrevOwner: usize = 0xd6c;
    pub const m_nDropTick: usize = 0xd70;
    pub const m_donated: usize = 0xd94;
    pub const m_fLastShotTime: usize = 0xd98;
    pub const m_bWasOwnedByCT: usize = 0xd9c;
    pub const m_bWasOwnedByTerrorist: usize = 0xd9d;
    pub const m_bFiredOutOfAmmoEvent: usize = 0xd9e;
    pub const m_numRemoveUnownedWeaponThink: usize = 0xda0;
    pub const m_IronSightController: usize = 0xda8;
    pub const m_iIronSightMode: usize = 0xdc0;
    pub const m_flLastLOSTraceFailureTime: usize = 0xdc4;
    pub const m_iNumEmptyAttacks: usize = 0xdc8;
}

pub mod CWeaponCSBaseGun {
    pub const m_zoomLevel: usize = 0xdd0;
    pub const m_iBurstShotsRemaining: usize = 0xdd4;
    pub const m_silencedModelIndex: usize = 0xde0;
    pub const m_inPrecache: usize = 0xde4;
    pub const m_bNeedsBoltAction: usize = 0xde5;
    pub const m_bSkillReloadAvailable: usize = 0xde6;
    pub const m_bSkillReloadLiftedReloadKey: usize = 0xde7;
    pub const m_bSkillBoltInterruptAvailable: usize = 0xde8;
    pub const m_bSkillBoltLiftedFireKey: usize = 0xde9;
}

pub mod CWeaponCSBaseVData {
    pub const m_WeaponType: usize = 0x240;
    pub const m_WeaponCategory: usize = 0x244;
    pub const m_szViewModel: usize = 0x248;
    pub const m_szPlayerModel: usize = 0x328;
    pub const m_szWorldDroppedModel: usize = 0x408;
    pub const m_szAimsightLensMaskModel: usize = 0x4e8;
    pub const m_szMagazineModel: usize = 0x5c8;
    pub const m_szHeatEffect: usize = 0x6a8;
    pub const m_szEjectBrassEffect: usize = 0x788;
    pub const m_szMuzzleFlashParticleAlt: usize = 0x868;
    pub const m_szMuzzleFlashThirdPersonParticle: usize = 0x948;
    pub const m_szMuzzleFlashThirdPersonParticleAlt: usize = 0xa28;
    pub const m_szTracerParticle: usize = 0xb08;
    pub const m_GearSlot: usize = 0xbe8;
    pub const m_GearSlotPosition: usize = 0xbec;
    pub const m_DefaultLoadoutSlot: usize = 0xbf0;
    pub const m_sWrongTeamMsg: usize = 0xbf8;
    pub const m_nPrice: usize = 0xc00;
    pub const m_nKillAward: usize = 0xc04;
    pub const m_nPrimaryReserveAmmoMax: usize = 0xc08;
    pub const m_nSecondaryReserveAmmoMax: usize = 0xc0c;
    pub const m_bMeleeWeapon: usize = 0xc10;
    pub const m_bHasBurstMode: usize = 0xc11;
    pub const m_bIsRevolver: usize = 0xc12;
    pub const m_bCannotShootUnderwater: usize = 0xc13;
    pub const m_szName: usize = 0xc18;
    pub const m_szAnimExtension: usize = 0xc20;
    pub const m_eSilencerType: usize = 0xc28;
    pub const m_nCrosshairMinDistance: usize = 0xc2c;
    pub const m_nCrosshairDeltaDistance: usize = 0xc30;
    pub const m_flCycleTime: usize = 0xc34;
    pub const m_flMaxSpeed: usize = 0xc3c;
    pub const m_flSpread: usize = 0xc44;
    pub const m_flInaccuracyCrouch: usize = 0xc4c;
    pub const m_flInaccuracyStand: usize = 0xc54;
    pub const m_flInaccuracyJump: usize = 0xc5c;
    pub const m_flInaccuracyLand: usize = 0xc64;
    pub const m_flInaccuracyLadder: usize = 0xc6c;
    pub const m_flInaccuracyFire: usize = 0xc74;
    pub const m_flInaccuracyMove: usize = 0xc7c;
    pub const m_flRecoilAngle: usize = 0xc84;
    pub const m_flRecoilAngleVariance: usize = 0xc8c;
    pub const m_flRecoilMagnitude: usize = 0xc94;
    pub const m_flRecoilMagnitudeVariance: usize = 0xc9c;
    pub const m_nTracerFrequency: usize = 0xca4;
    pub const m_flInaccuracyJumpInitial: usize = 0xcac;
    pub const m_flInaccuracyJumpApex: usize = 0xcb0;
    pub const m_flInaccuracyReload: usize = 0xcb4;
    pub const m_nRecoilSeed: usize = 0xcb8;
    pub const m_nSpreadSeed: usize = 0xcbc;
    pub const m_flTimeToIdleAfterFire: usize = 0xcc0;
    pub const m_flIdleInterval: usize = 0xcc4;
    pub const m_flAttackMovespeedFactor: usize = 0xcc8;
    pub const m_flHeatPerShot: usize = 0xccc;
    pub const m_flInaccuracyPitchShift: usize = 0xcd0;
    pub const m_flInaccuracyAltSoundThreshold: usize = 0xcd4;
    pub const m_flBotAudibleRange: usize = 0xcd8;
    pub const m_szUseRadioSubtitle: usize = 0xce0;
    pub const m_bUnzoomsAfterShot: usize = 0xce8;
    pub const m_bHideViewModelWhenZoomed: usize = 0xce9;
    pub const m_nZoomLevels: usize = 0xcec;
    pub const m_nZoomFOV1: usize = 0xcf0;
    pub const m_nZoomFOV2: usize = 0xcf4;
    pub const m_flZoomTime0: usize = 0xcf8;
    pub const m_flZoomTime1: usize = 0xcfc;
    pub const m_flZoomTime2: usize = 0xd00;
    pub const m_flIronSightPullUpSpeed: usize = 0xd04;
    pub const m_flIronSightPutDownSpeed: usize = 0xd08;
    pub const m_flIronSightFOV: usize = 0xd0c;
    pub const m_flIronSightPivotForward: usize = 0xd10;
    pub const m_flIronSightLooseness: usize = 0xd14;
    pub const m_angPivotAngle: usize = 0xd18;
    pub const m_vecIronSightEyePos: usize = 0xd24;
    pub const m_nDamage: usize = 0xd30;
    pub const m_flHeadshotMultiplier: usize = 0xd34;
    pub const m_flArmorRatio: usize = 0xd38;
    pub const m_flPenetration: usize = 0xd3c;
    pub const m_flRange: usize = 0xd40;
    pub const m_flRangeModifier: usize = 0xd44;
    pub const m_flFlinchVelocityModifierLarge: usize = 0xd48;
    pub const m_flFlinchVelocityModifierSmall: usize = 0xd4c;
    pub const m_flRecoveryTimeCrouch: usize = 0xd50;
    pub const m_flRecoveryTimeStand: usize = 0xd54;
    pub const m_flRecoveryTimeCrouchFinal: usize = 0xd58;
    pub const m_flRecoveryTimeStandFinal: usize = 0xd5c;
    pub const m_nRecoveryTransitionStartBullet: usize = 0xd60;
    pub const m_nRecoveryTransitionEndBullet: usize = 0xd64;
    pub const m_flThrowVelocity: usize = 0xd68;
    pub const m_vSmokeColor: usize = 0xd6c;
    pub const m_szAnimClass: usize = 0xd78;
}

pub mod CWeaponShield {
    pub const m_flBulletDamageAbsorbed: usize = 0xdf0;
    pub const m_flLastBulletHitSoundTime: usize = 0xdf4;
    pub const m_flDisplayHealth: usize = 0xdf8;
}

pub mod CWeaponTaser {
    pub const m_fFireTime: usize = 0xdf0;
}

pub mod CommandToolCommand_t {
    pub const m_bEnabled: usize = 0x0;
    pub const m_bOpened: usize = 0x1;
    pub const m_InternalId: usize = 0x4;
    pub const m_ShortName: usize = 0x8;
    pub const m_ExecMode: usize = 0x10;
    pub const m_SpawnGroup: usize = 0x18;
    pub const m_PeriodicExecDelay: usize = 0x20;
    pub const m_SpecType: usize = 0x24;
    pub const m_EntitySpec: usize = 0x28;
    pub const m_Commands: usize = 0x30;
    pub const m_SetDebugBits: usize = 0x38;
    pub const m_ClearDebugBits: usize = 0x40;
}

pub mod ConceptHistory_t {
    pub const timeSpoken: usize = 0x0;
    pub const m_response: usize = 0x8;
}

pub mod ConstraintSoundInfo {
    pub const m_vSampler: usize = 0x8;
    pub const m_soundProfile: usize = 0x20;
    pub const m_forwardAxis: usize = 0x40;
    pub const m_iszTravelSoundFwd: usize = 0x50;
    pub const m_iszTravelSoundBack: usize = 0x58;
    pub const m_iszReversalSounds: usize = 0x68;
    pub const m_bPlayTravelSound: usize = 0x80;
    pub const m_bPlayReversalSound: usize = 0x81;
}

pub mod CountdownTimer {
    pub const m_duration: usize = 0x8;
    pub const m_timestamp: usize = 0xc;
    pub const m_timescale: usize = 0x10;
    pub const m_nWorldGroupId: usize = 0x14;
}

pub mod EngineCountdownTimer {
    pub const m_duration: usize = 0x8;
    pub const m_timestamp: usize = 0xc;
    pub const m_timescale: usize = 0x10;
}

pub mod EntityRenderAttribute_t {
    pub const m_ID: usize = 0x30;
    pub const m_Values: usize = 0x34;
}

pub mod EntitySpottedState_t {
    pub const m_bSpotted: usize = 0x8;
    pub const m_bSpottedByMask: usize = 0xc;
}

pub mod Extent {
    pub const lo: usize = 0x0;
    pub const hi: usize = 0xc;
}

pub mod FilterDamageType {
    pub const m_iDamageType: usize = 0x508;
}

pub mod FilterHealth {
    pub const m_bAdrenalineActive: usize = 0x508;
    pub const m_iHealthMin: usize = 0x50c;
    pub const m_iHealthMax: usize = 0x510;
}

pub mod FilterTeam {
    pub const m_iFilterTeam: usize = 0x508;
}

pub mod GameAmmoTypeInfo_t {
    pub const m_nBuySize: usize = 0x38;
    pub const m_nCost: usize = 0x3c;
}

pub mod GameTick_t {
    pub const m_Value: usize = 0x0;
}

pub mod GameTime_t {
    pub const m_Value: usize = 0x0;
}

pub mod HullFlags_t {
    pub const m_bHull_Human: usize = 0x0;
    pub const m_bHull_SmallCentered: usize = 0x1;
    pub const m_bHull_WideHuman: usize = 0x2;
    pub const m_bHull_Tiny: usize = 0x3;
    pub const m_bHull_Medium: usize = 0x4;
    pub const m_bHull_TinyCentered: usize = 0x5;
    pub const m_bHull_Large: usize = 0x6;
    pub const m_bHull_LargeCentered: usize = 0x7;
    pub const m_bHull_MediumTall: usize = 0x8;
    pub const m_bHull_Small: usize = 0x9;
}

pub mod IntervalTimer {
    pub const m_timestamp: usize = 0x8;
    pub const m_nWorldGroupId: usize = 0xc;
}

pub mod ModelConfigHandle_t {
    pub const m_Value: usize = 0x0;
}

pub mod ParticleIndex_t {
    pub const m_Value: usize = 0x0;
}

pub mod PhysicsRagdollPose_t {
    pub const __m_pChainEntity: usize = 0x8;
    pub const m_Transforms: usize = 0x30;
    pub const m_hOwner: usize = 0x48;
}

pub mod RagdollCreationParams_t {
    pub const m_vForce: usize = 0x0;
    pub const m_nForceBone: usize = 0xc;
}

pub mod RelationshipOverride_t {
    pub const entity: usize = 0x8;
    pub const classType: usize = 0xc;
}

pub mod Relationship_t {
    pub const disposition: usize = 0x0;
    pub const priority: usize = 0x4;
}

pub mod ResponseContext_t {
    pub const m_iszName: usize = 0x0;
    pub const m_iszValue: usize = 0x8;
    pub const m_fExpirationTime: usize = 0x10;
}

pub mod ResponseFollowup {
    pub const followup_concept: usize = 0x0;
    pub const followup_contexts: usize = 0x8;
    pub const followup_delay: usize = 0x10;
    pub const followup_target: usize = 0x14;
    pub const followup_entityiotarget: usize = 0x1c;
    pub const followup_entityioinput: usize = 0x24;
    pub const followup_entityiodelay: usize = 0x2c;
    pub const bFired: usize = 0x30;
}

pub mod ResponseParams {
    pub const odds: usize = 0x10;
    pub const flags: usize = 0x12;
    pub const m_pFollowup: usize = 0x18;
}

pub mod SellbackPurchaseEntry_t {
    pub const m_unDefIdx: usize = 0x30;
    pub const m_nCost: usize = 0x34;
    pub const m_nPrevArmor: usize = 0x38;
    pub const m_bPrevHelmet: usize = 0x3c;
    pub const m_hItem: usize = 0x40;
}

pub mod SimpleConstraintSoundProfile {
    pub const eKeypoints: usize = 0x8;
    pub const m_keyPoints: usize = 0xc;
    pub const m_reversalSoundThresholds: usize = 0x14;
}

pub mod SpawnPoint {
    pub const m_iPriority: usize = 0x4b0;
    pub const m_bEnabled: usize = 0x4b4;
    pub const m_nType: usize = 0x4b8;
}

pub mod SpawnPointCoopEnemy {
    pub const m_szWeaponsToGive: usize = 0x4c0;
    pub const m_szPlayerModelToUse: usize = 0x4c8;
    pub const m_nArmorToSpawnWith: usize = 0x4d0;
    pub const m_nDefaultBehavior: usize = 0x4d4;
    pub const m_nBotDifficulty: usize = 0x4d8;
    pub const m_bIsAgressive: usize = 0x4dc;
    pub const m_bStartAsleep: usize = 0x4dd;
    pub const m_flHideRadius: usize = 0x4e0;
    pub const m_szBehaviorTreeFile: usize = 0x4f0;
}

pub mod SummaryTakeDamageInfo_t {
    pub const nSummarisedCount: usize = 0x0;
    pub const info: usize = 0x8;
    pub const result: usize = 0xa8;
    pub const hTarget: usize = 0xb0;
}

pub mod VPhysicsCollisionAttribute_t {
    pub const m_nInteractsAs: usize = 0x8;
    pub const m_nInteractsWith: usize = 0x10;
    pub const m_nInteractsExclude: usize = 0x18;
    pub const m_nEntityId: usize = 0x20;
    pub const m_nOwnerId: usize = 0x24;
    pub const m_nHierarchyId: usize = 0x28;
    pub const m_nCollisionGroup: usize = 0x2a;
    pub const m_nCollisionFunctionMask: usize = 0x2b;
}

pub mod VelocitySampler {
    pub const m_prevSample: usize = 0x0;
    pub const m_fPrevSampleTime: usize = 0xc;
    pub const m_fIdealSampleRate: usize = 0x10;
}

pub mod ViewAngleServerChange_t {
    pub const nType: usize = 0x30;
    pub const qAngle: usize = 0x34;
    pub const nIndex: usize = 0x40;
}

pub mod WeaponPurchaseCount_t {
    pub const m_nItemDefIndex: usize = 0x30;
    pub const m_nCount: usize = 0x32;
}

pub mod WeaponPurchaseTracker_t {
    pub const m_weaponPurchases: usize = 0x8;
}

pub mod audioparams_t {
    pub const localSound: usize = 0x8;
    pub const soundscapeIndex: usize = 0x68;
    pub const localBits: usize = 0x6c;
    pub const soundscapeEntityListIndex: usize = 0x70;
    pub const soundEventHash: usize = 0x74;
}

pub mod dynpitchvol_base_t {
    pub const preset: usize = 0x0;
    pub const pitchrun: usize = 0x4;
    pub const pitchstart: usize = 0x8;
    pub const spinup: usize = 0xc;
    pub const spindown: usize = 0x10;
    pub const volrun: usize = 0x14;
    pub const volstart: usize = 0x18;
    pub const fadein: usize = 0x1c;
    pub const fadeout: usize = 0x20;
    pub const lfotype: usize = 0x24;
    pub const lforate: usize = 0x28;
    pub const lfomodpitch: usize = 0x2c;
    pub const lfomodvol: usize = 0x30;
    pub const cspinup: usize = 0x34;
    pub const cspincount: usize = 0x38;
    pub const pitch: usize = 0x3c;
    pub const spinupsav: usize = 0x40;
    pub const spindownsav: usize = 0x44;
    pub const pitchfrac: usize = 0x48;
    pub const vol: usize = 0x4c;
    pub const fadeinsav: usize = 0x50;
    pub const fadeoutsav: usize = 0x54;
    pub const volfrac: usize = 0x58;
    pub const lfofrac: usize = 0x5c;
    pub const lfomult: usize = 0x60;
}

pub mod fogparams_t {
    pub const dirPrimary: usize = 0x8;
    pub const colorPrimary: usize = 0x14;
    pub const colorSecondary: usize = 0x18;
    pub const colorPrimaryLerpTo: usize = 0x1c;
    pub const colorSecondaryLerpTo: usize = 0x20;
    pub const start: usize = 0x24;
    pub const end: usize = 0x28;
    pub const farz: usize = 0x2c;
    pub const maxdensity: usize = 0x30;
    pub const exponent: usize = 0x34;
    pub const HDRColorScale: usize = 0x38;
    pub const skyboxFogFactor: usize = 0x3c;
    pub const skyboxFogFactorLerpTo: usize = 0x40;
    pub const startLerpTo: usize = 0x44;
    pub const endLerpTo: usize = 0x48;
    pub const maxdensityLerpTo: usize = 0x4c;
    pub const lerptime: usize = 0x50;
    pub const duration: usize = 0x54;
    pub const blendtobackground: usize = 0x58;
    pub const scattering: usize = 0x5c;
    pub const locallightscale: usize = 0x60;
    pub const enable: usize = 0x64;
    pub const blend: usize = 0x65;
    pub const m_bNoReflectionFog: usize = 0x66;
    pub const m_bPadding: usize = 0x67;
}

pub mod fogplayerparams_t {
    pub const m_hCtrl: usize = 0x8;
    pub const m_flTransitionTime: usize = 0xc;
    pub const m_OldColor: usize = 0x10;
    pub const m_flOldStart: usize = 0x14;
    pub const m_flOldEnd: usize = 0x18;
    pub const m_flOldMaxDensity: usize = 0x1c;
    pub const m_flOldHDRColorScale: usize = 0x20;
    pub const m_flOldFarZ: usize = 0x24;
    pub const m_NewColor: usize = 0x28;
    pub const m_flNewStart: usize = 0x2c;
    pub const m_flNewEnd: usize = 0x30;
    pub const m_flNewMaxDensity: usize = 0x34;
    pub const m_flNewHDRColorScale: usize = 0x38;
    pub const m_flNewFarZ: usize = 0x3c;
}

pub mod hudtextparms_t {
    pub const color1: usize = 0x0;
    pub const color2: usize = 0x4;
    pub const effect: usize = 0x8;
    pub const channel: usize = 0x9;
    pub const x: usize = 0xc;
    pub const y: usize = 0x10;
}

pub mod lerpdata_t {
    pub const m_hEnt: usize = 0x0;
    pub const m_MoveType: usize = 0x4;
    pub const m_flStartTime: usize = 0x8;
    pub const m_vecStartOrigin: usize = 0xc;
    pub const m_qStartRot: usize = 0x20;
    pub const m_nFXIndex: usize = 0x30;
}

pub mod locksound_t {
    pub const sLockedSound: usize = 0x8;
    pub const sUnlockedSound: usize = 0x10;
    pub const flwaitSound: usize = 0x18;
}

pub mod magnetted_objects_t {
    pub const hEntity: usize = 0x8;
}

pub mod ragdoll_t {
    pub const list: usize = 0x0;
    pub const boneIndex: usize = 0x18;
    pub const allowStretch: usize = 0x30;
    pub const unused: usize = 0x31;
}

pub mod ragdollelement_t {
    pub const originParentSpace: usize = 0x0;
    pub const parentIndex: usize = 0x20;
    pub const m_flRadius: usize = 0x24;
}

pub mod shard_model_desc_t {
    pub const m_nModelID: usize = 0x8;
    pub const m_hMaterial: usize = 0x10;
    pub const m_solid: usize = 0x18;
    pub const m_ShatterPanelMode: usize = 0x19;
    pub const m_vecPanelSize: usize = 0x1c;
    pub const m_vecStressPositionA: usize = 0x24;
    pub const m_vecStressPositionB: usize = 0x2c;
    pub const m_vecPanelVertices: usize = 0x38;
    pub const m_flGlassHalfThickness: usize = 0x50;
    pub const m_bHasParent: usize = 0x54;
    pub const m_bParentFrozen: usize = 0x55;
    pub const m_SurfacePropStringToken: usize = 0x58;
    pub const m_LightGroup: usize = 0x5c;
}

pub mod sky3dparams_t {
    pub const scale: usize = 0x8;
    pub const origin: usize = 0xc;
    pub const bClip3DSkyBoxNearToWorldFar: usize = 0x18;
    pub const flClip3DSkyBoxNearToWorldFarOffset: usize = 0x1c;
    pub const fog: usize = 0x20;
    pub const m_nWorldGroupID: usize = 0x88;
}

pub mod thinkfunc_t {
    pub const m_hFn: usize = 0x8;
    pub const m_nContext: usize = 0x10;
    pub const m_nNextThinkTick: usize = 0x14;
    pub const m_nLastThinkTick: usize = 0x18;
}