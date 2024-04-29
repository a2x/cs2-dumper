// Generated using https://github.com/a2x/cs2-dumper
// 2024-04-29 23:05:53.220233445 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: libclient.so
        // Classes count: 146
        // Enums count: 8
        pub mod libclient_so {
            // Alignment: 4
            // Members count: 14
            #[repr(u32)]
            pub enum CompositeMaterialInputLooseVariableType_t {
                LOOSE_VARIABLE_TYPE_BOOLEAN = 0x0,
                LOOSE_VARIABLE_TYPE_INTEGER1 = 0x1,
                LOOSE_VARIABLE_TYPE_INTEGER2 = 0x2,
                LOOSE_VARIABLE_TYPE_INTEGER3 = 0x3,
                LOOSE_VARIABLE_TYPE_INTEGER4 = 0x4,
                LOOSE_VARIABLE_TYPE_FLOAT1 = 0x5,
                LOOSE_VARIABLE_TYPE_FLOAT2 = 0x6,
                LOOSE_VARIABLE_TYPE_FLOAT3 = 0x7,
                LOOSE_VARIABLE_TYPE_FLOAT4 = 0x8,
                LOOSE_VARIABLE_TYPE_COLOR4 = 0x9,
                LOOSE_VARIABLE_TYPE_STRING = 0xA,
                LOOSE_VARIABLE_TYPE_SYSTEMVAR = 0xB,
                LOOSE_VARIABLE_TYPE_RESOURCE_MATERIAL = 0xC,
                LOOSE_VARIABLE_TYPE_RESOURCE_TEXTURE = 0xD
            }
            // Alignment: 4
            // Members count: 7
            #[repr(u32)]
            pub enum CompositeMaterialInputTextureType_t {
                INPUT_TEXTURE_TYPE_DEFAULT = 0x0,
                INPUT_TEXTURE_TYPE_NORMALMAP = 0x1,
                INPUT_TEXTURE_TYPE_COLOR = 0x2,
                INPUT_TEXTURE_TYPE_MASKS = 0x3,
                INPUT_TEXTURE_TYPE_ROUGHNESS = 0x4,
                INPUT_TEXTURE_TYPE_PEARLESCENCE_MASK = 0x5,
                INPUT_TEXTURE_TYPE_AO = 0x6
            }
            // Alignment: 4
            // Members count: 6
            #[repr(u32)]
            pub enum CompositeMaterialInputContainerSourceType_t {
                CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0x0,
                CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 0x1,
                CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 0x2,
                CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 0x3,
                CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 0x4,
                CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 0x5
            }
            // Alignment: 4
            // Members count: 10
            #[repr(u32)]
            pub enum CompMatPropertyMutatorType_t {
                COMP_MAT_PROPERTY_MUTATOR_INIT = 0x0,
                COMP_MAT_PROPERTY_MUTATOR_COPY_MATCHING_KEYS = 0x1,
                COMP_MAT_PROPERTY_MUTATOR_COPY_KEYS_WITH_SUFFIX = 0x2,
                COMP_MAT_PROPERTY_MUTATOR_COPY_PROPERTY = 0x3,
                COMP_MAT_PROPERTY_MUTATOR_SET_VALUE = 0x4,
                COMP_MAT_PROPERTY_MUTATOR_GENERATE_TEXTURE = 0x5,
                COMP_MAT_PROPERTY_MUTATOR_CONDITIONAL_MUTATORS = 0x6,
                COMP_MAT_PROPERTY_MUTATOR_POP_INPUT_QUEUE = 0x7,
                COMP_MAT_PROPERTY_MUTATOR_DRAW_TEXT = 0x8,
                COMP_MAT_PROPERTY_MUTATOR_RANDOM_ROLL_INPUT_VARIABLES = 0x9
            }
            // Alignment: 4
            // Members count: 2
            #[repr(u32)]
            pub enum CompositeMaterialVarSystemVar_t {
                COMPMATSYSVAR_COMPOSITETIME = 0x0,
                COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 0x1
            }
            // Alignment: 4
            // Members count: 6
            #[repr(u32)]
            pub enum CompositeMaterialMatchFilterType_t {
                MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0x0,
                MATCH_FILTER_MATERIAL_SHADER = 0x1,
                MATCH_FILTER_MATERIAL_NAME_SUBSTR = 0x2,
                MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 0x3,
                MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 0x4,
                MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 0x5
            }
            // Alignment: 4
            // Members count: 3
            #[repr(u32)]
            pub enum CompMatPropertyMutatorConditionType_t {
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0x0,
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 0x1,
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 0x2
            }
            // Parent: C_BaseCSGrenade
            // Fields count: 0
            pub mod C_HEGrenade {
            }
            // Parent: C_BaseTrigger
            // Fields count: 0
            pub mod C_TriggerLerpObject {
            }
            // Parent: CPlayer_MovementServices_Humanoid
            // Fields count: 37
            //
            // Metadata:
            // NetworkVarNames: m_flMaxFallVelocity (float)
            // NetworkVarNames: m_vecLadderNormal (Vector)
            // NetworkVarNames: m_nLadderSurfacePropIndex (int)
            // NetworkVarNames: m_flDuckAmount (float)
            // NetworkVarNames: m_flDuckSpeed (float)
            // NetworkVarNames: m_bDuckOverride (bool)
            // NetworkVarNames: m_bDesiresDuck (bool)
            // NetworkVarNames: m_nDuckTimeMsecs (uint32)
            // NetworkVarNames: m_nDuckJumpTimeMsecs (uint32)
            // NetworkVarNames: m_nJumpTimeMsecs (uint32)
            // NetworkVarNames: m_flLastDuckTime (float)
            // NetworkVarNames: m_nGameCodeHasMovedPlayerAfterCommand (int)
            // NetworkVarNames: m_bOldJumpPressed (bool)
            // NetworkVarNames: m_flJumpUntil (float)
            // NetworkVarNames: m_flJumpVel (float)
            // NetworkVarNames: m_fStashGrenadeParameterWhen (GameTime_t)
            // NetworkVarNames: m_nButtonDownMaskPrev (ButtonBitMask_t)
            // NetworkVarNames: m_flOffsetTickCompleteTime (float)
            // NetworkVarNames: m_flOffsetTickStashedSpeed (float)
            // NetworkVarNames: m_flStamina (float)
            pub mod CCSPlayer_MovementServices {
                pub const m_flMaxFallVelocity: usize = 0x214; // float32
                pub const m_vecLadderNormal: usize = 0x218; // Vector
                pub const m_nLadderSurfacePropIndex: usize = 0x224; // int32
                pub const m_flDuckAmount: usize = 0x228; // float32
                pub const m_flDuckSpeed: usize = 0x22C; // float32
                pub const m_bDuckOverride: usize = 0x230; // bool
                pub const m_bDesiresDuck: usize = 0x231; // bool
                pub const m_flDuckOffset: usize = 0x234; // float32
                pub const m_nDuckTimeMsecs: usize = 0x238; // uint32
                pub const m_nDuckJumpTimeMsecs: usize = 0x23C; // uint32
                pub const m_nJumpTimeMsecs: usize = 0x240; // uint32
                pub const m_flLastDuckTime: usize = 0x244; // float32
                pub const m_vecLastPositionAtFullCrouchSpeed: usize = 0x250; // Vector2D
                pub const m_duckUntilOnGround: usize = 0x258; // bool
                pub const m_bHasWalkMovedSinceLastJump: usize = 0x259; // bool
                pub const m_bInStuckTest: usize = 0x25A; // bool
                pub const m_flStuckCheckTime: usize = 0x268; // float32[64][2]
                pub const m_nTraceCount: usize = 0x468; // int32
                pub const m_StuckLast: usize = 0x46C; // int32
                pub const m_bSpeedCropped: usize = 0x470; // bool
                pub const m_nOldWaterLevel: usize = 0x474; // int32
                pub const m_flWaterEntryTime: usize = 0x478; // float32
                pub const m_vecForward: usize = 0x47C; // Vector
                pub const m_vecLeft: usize = 0x488; // Vector
                pub const m_vecUp: usize = 0x494; // Vector
                pub const m_nGameCodeHasMovedPlayerAfterCommand: usize = 0x4A0; // int32
                pub const m_bOldJumpPressed: usize = 0x4A4; // bool
                pub const m_flJumpPressedTime: usize = 0x4A8; // float32
                pub const m_flJumpUntil: usize = 0x4AC; // float32
                pub const m_flJumpVel: usize = 0x4B0; // float32
                pub const m_fStashGrenadeParameterWhen: usize = 0x4B4; // GameTime_t
                pub const m_nButtonDownMaskPrev: usize = 0x4B8; // uint64
                pub const m_flOffsetTickCompleteTime: usize = 0x4C0; // float32
                pub const m_flOffsetTickStashedSpeed: usize = 0x4C4; // float32
                pub const m_flStamina: usize = 0x4C8; // float32
                pub const m_flHeightAtJumpStart: usize = 0x4CC; // float32
                pub const m_flMaxJumpHeightThisJump: usize = 0x4D0; // float32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // NetworkVarNames: scale (int16)
            // NetworkVarNames: origin (Vector)
            // NetworkVarNames: bClip3DSkyBoxNearToWorldFar (bool)
            // NetworkVarNames: flClip3DSkyBoxNearToWorldFarOffset (float32)
            // NetworkVarNames: fog (fogparams_t)
            // NetworkVarNames: m_nWorldGroupID (WorldGroupId_t)
            pub mod sky3dparams_t {
                pub const scale: usize = 0x8; // int16
                pub const origin: usize = 0xC; // Vector
                pub const bClip3DSkyBoxNearToWorldFar: usize = 0x18; // bool
                pub const flClip3DSkyBoxNearToWorldFarOffset: usize = 0x1C; // float32
                pub const fog: usize = 0x20; // fogparams_t
                pub const m_nWorldGroupID: usize = 0x88; // WorldGroupId_t
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            pub mod C_WeaponM4A1 {
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            pub mod C_WeaponCZ75a {
            }
            // Parent: C_BaseEntity
            // Fields count: 31
            //
            // Metadata:
            // NetworkVarNames: m_CRenderComponent (CRenderComponent::Storage_t)
            // NetworkVarNames: m_CHitboxComponent (CHitboxComponent::Storage_t)
            // NetworkVarNames: m_nRenderMode (RenderMode_t)
            // NetworkVarNames: m_nRenderFX (RenderFx_t)
            // NetworkVarNames: m_clrRender (Color)
            // NetworkVarNames: m_vecRenderAttributes (EntityRenderAttribute_t)
            // NetworkVarNames: m_bRenderToCubemaps (bool)
            // NetworkVarNames: m_Collision (CCollisionProperty)
            // NetworkVarNames: m_Glow (CGlowProperty)
            // NetworkVarNames: m_flGlowBackfaceMult (float)
            // NetworkVarNames: m_fadeMinDist (float32)
            // NetworkVarNames: m_fadeMaxDist (float32)
            // NetworkVarNames: m_flFadeScale (float32)
            // NetworkVarNames: m_flShadowStrength (float32)
            // NetworkVarNames: m_nObjectCulling (uint8)
            // NetworkVarNames: m_nAddDecal (int)
            // NetworkVarNames: m_vDecalPosition (Vector)
            // NetworkVarNames: m_vDecalForwardAxis (Vector)
            // NetworkVarNames: m_flDecalHealBloodRate (float)
            // NetworkVarNames: m_flDecalHealHeightRate (float)
            // NetworkVarNames: m_ConfigEntitiesToPropagateMaterialDecalsTo (CHandle<C_BaseModelEntity>)
            pub mod C_BaseModelEntity {
                pub const m_CRenderComponent: usize = 0x9A0; // CRenderComponent*
                pub const m_CHitboxComponent: usize = 0x9A8; // CHitboxComponent
                pub const m_bInitModelEffects: usize = 0x9F0; // bool
                pub const m_bIsStaticProp: usize = 0x9F1; // bool
                pub const m_nLastAddDecal: usize = 0x9F4; // int32
                pub const m_nDecalsAdded: usize = 0x9F8; // int32
                pub const m_iOldHealth: usize = 0x9FC; // int32
                pub const m_nRenderMode: usize = 0xA00; // RenderMode_t
                pub const m_nRenderFX: usize = 0xA01; // RenderFx_t
                pub const m_bAllowFadeInView: usize = 0xA02; // bool
                pub const m_clrRender: usize = 0xA03; // Color
                pub const m_vecRenderAttributes: usize = 0xA08; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
                pub const m_bRenderToCubemaps: usize = 0xA70; // bool
                pub const m_Collision: usize = 0xA78; // CCollisionProperty
                pub const m_Glow: usize = 0xB28; // CGlowProperty
                pub const m_flGlowBackfaceMult: usize = 0xB80; // float32
                pub const m_fadeMinDist: usize = 0xB84; // float32
                pub const m_fadeMaxDist: usize = 0xB88; // float32
                pub const m_flFadeScale: usize = 0xB8C; // float32
                pub const m_flShadowStrength: usize = 0xB90; // float32
                pub const m_nObjectCulling: usize = 0xB94; // uint8
                pub const m_nAddDecal: usize = 0xB98; // int32
                pub const m_vDecalPosition: usize = 0xB9C; // Vector
                pub const m_vDecalForwardAxis: usize = 0xBA8; // Vector
                pub const m_flDecalHealBloodRate: usize = 0xBB4; // float32
                pub const m_flDecalHealHeightRate: usize = 0xBB8; // float32
                pub const m_ConfigEntitiesToPropagateMaterialDecalsTo: usize = 0xBC0; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                pub const m_vecViewOffset: usize = 0xBD8; // CNetworkViewOffsetVector
                pub const m_pClientAlphaProperty: usize = 0xC08; // CClientAlphaProperty*
                pub const m_ClientOverrideTint: usize = 0xC10; // Color
                pub const m_bUseClientOverrideTint: usize = 0xC14; // bool
            }
            // Parent: C_LightEntity
            // Fields count: 0
            pub mod C_LightSpotEntity {
            }
            // Parent: C_BaseEntity
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
            pub mod C_EnvWind {
                pub const m_EnvWindShared: usize = 0x6D0; // C_EnvWindShared
            }
            // Parent: C_DynamicProp
            // Fields count: 0
            pub mod C_DynamicPropAlias_cable_dynamic {
            }
            // Parent: C_PointEntity
            // Fields count: 0
            pub mod C_InfoInstructorHintHostageRescueZone {
            }
            // Parent: C_PointEntity
            // Fields count: 12
            //
            // Metadata:
            // NetworkVarNames: m_bIsPlayingBack (bool)
            // NetworkVarNames: m_bPaused (bool)
            // NetworkVarNames: m_bMultiplayer (bool)
            // NetworkVarNames: m_bAutogenerated (bool)
            // NetworkVarNames: m_flForceClientTime (float32)
            // NetworkVarNames: m_nSceneStringIndex (uint16)
            // NetworkVarNames: m_hActorList (CHandle<C_BaseFlex>)
            pub mod C_SceneEntity {
                pub const m_bIsPlayingBack: usize = 0x6D8; // bool
                pub const m_bPaused: usize = 0x6D9; // bool
                pub const m_bMultiplayer: usize = 0x6DA; // bool
                pub const m_bAutogenerated: usize = 0x6DB; // bool
                pub const m_flForceClientTime: usize = 0x6DC; // float32
                pub const m_nSceneStringIndex: usize = 0x6E0; // uint16
                pub const m_bClientOnly: usize = 0x6E2; // bool
                pub const m_hOwner: usize = 0x6E4; // CHandle<C_BaseFlex>
                pub const m_hActorList: usize = 0x6E8; // C_NetworkUtlVectorBase<CHandle<C_BaseFlex>>
                pub const m_bWasPlaying: usize = 0x700; // bool
                pub const m_QueuedEvents: usize = 0x710; // CUtlVector<C_SceneEntity::QueuedEvents_t>
                pub const m_flCurrentTime: usize = 0x728; // float32
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 20
            //
            // Metadata:
            // NetworkVarNames: m_vecCsViewPunchAngle (QAngle)
            // NetworkVarNames: m_nCsViewPunchAngleTick (GameTick_t)
            // NetworkVarNames: m_flCsViewPunchAngleTickRatio (float32)
            // NetworkVarNames: m_PlayerFog (fogplayerparams_t)
            // NetworkVarNames: m_hColorCorrectionCtrl (CHandle<CColorCorrection>)
            // NetworkVarNames: m_hViewEntity (CHandle<CBaseEntity>)
            // NetworkVarNames: m_hTonemapController (CHandle<CTonemapController2>)
            // NetworkVarNames: m_audio (audioparams_t)
            // NetworkVarNames: m_PostProcessingVolumes (CHandle<C_PostProcessingVolume>)
            pub mod CPlayer_CameraServices {
                pub const m_vecCsViewPunchAngle: usize = 0x40; // QAngle
                pub const m_nCsViewPunchAngleTick: usize = 0x4C; // GameTick_t
                pub const m_flCsViewPunchAngleTickRatio: usize = 0x50; // float32
                pub const m_PlayerFog: usize = 0x58; // C_fogplayerparams_t
                pub const m_hColorCorrectionCtrl: usize = 0x98; // CHandle<C_ColorCorrection>
                pub const m_hViewEntity: usize = 0x9C; // CHandle<C_BaseEntity>
                pub const m_hTonemapController: usize = 0xA0; // CHandle<C_TonemapController2>
                pub const m_audio: usize = 0xA8; // audioparams_t
                pub const m_PostProcessingVolumes: usize = 0x120; // C_NetworkUtlVectorBase<CHandle<C_PostProcessingVolume>>
                pub const m_flOldPlayerZ: usize = 0x138; // float32
                pub const m_flOldPlayerViewOffsetZ: usize = 0x13C; // float32
                pub const m_CurrentFog: usize = 0x140; // fogparams_t
                pub const m_hOldFogController: usize = 0x1A8; // CHandle<C_FogController>
                pub const m_bOverrideFogColor: usize = 0x1AC; // bool[5]
                pub const m_OverrideFogColor: usize = 0x1B1; // Color[5]
                pub const m_bOverrideFogStartEnd: usize = 0x1C5; // bool[5]
                pub const m_fOverrideFogStart: usize = 0x1CC; // float32[5]
                pub const m_fOverrideFogEnd: usize = 0x1E0; // float32[5]
                pub const m_hActivePostProcessingVolume: usize = 0x1F4; // CHandle<C_PostProcessingVolume>
                pub const m_angDemoViewAngles: usize = 0x1F8; // QAngle
            }
            // Parent: C_CSWeaponBase
            // Fields count: 15
            //
            // Metadata:
            // NetworkVarNames: m_bRedraw (bool)
            // NetworkVarNames: m_bIsHeldByPlayer (bool)
            // NetworkVarNames: m_bPinPulled (bool)
            // NetworkVarNames: m_bJumpThrow (bool)
            // NetworkVarNames: m_bThrowAnimating (bool)
            // NetworkVarNames: m_fThrowTime (GameTime_t)
            // NetworkVarNames: m_flThrowStrength (float)
            // NetworkVarNames: m_flThrowStrengthApproach (float)
            // NetworkVarNames: m_fDropTime (GameTime_t)
            // NetworkVarNames: m_fPinPullTime (GameTime_t)
            // NetworkVarNames: m_bJustPulledPin (bool)
            // NetworkVarNames: m_nNextHoldTick (GameTick_t)
            // NetworkVarNames: m_flNextHoldFrac (float)
            // NetworkVarNames: m_hSwitchToWeaponAfterThrow (CHandle<CCSWeaponBase>)
            pub mod C_BaseCSGrenade {
                pub const m_bClientPredictDelete: usize = 0x2918; // bool
                pub const m_bRedraw: usize = 0x2919; // bool
                pub const m_bIsHeldByPlayer: usize = 0x291A; // bool
                pub const m_bPinPulled: usize = 0x291B; // bool
                pub const m_bJumpThrow: usize = 0x291C; // bool
                pub const m_bThrowAnimating: usize = 0x291D; // bool
                pub const m_fThrowTime: usize = 0x2920; // GameTime_t
                pub const m_flThrowStrength: usize = 0x2924; // float32
                pub const m_flThrowStrengthApproach: usize = 0x2928; // float32
                pub const m_fDropTime: usize = 0x292C; // GameTime_t
                pub const m_fPinPullTime: usize = 0x2930; // GameTime_t
                pub const m_bJustPulledPin: usize = 0x2934; // bool
                pub const m_nNextHoldTick: usize = 0x2938; // GameTick_t
                pub const m_flNextHoldFrac: usize = 0x293C; // float32
                pub const m_hSwitchToWeaponAfterThrow: usize = 0x2940; // CHandle<C_CSWeaponBase>
            }
            // Parent: C_FuncBrush
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_targetCamera (CUtlString)
            // NetworkVarNames: m_nResolutionEnum (int)
            // NetworkVarNames: m_bRenderShadows (bool)
            // NetworkVarNames: m_bUseUniqueColorTarget (bool)
            // NetworkVarNames: m_brushModelName (CUtlString)
            // NetworkVarNames: m_hTargetCamera (EHANDLE)
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_bDraw3DSkybox (bool)
            pub mod C_FuncMonitor {
                pub const m_targetCamera: usize = 0xC50; // CUtlString
                pub const m_nResolutionEnum: usize = 0xC58; // int32
                pub const m_bRenderShadows: usize = 0xC5C; // bool
                pub const m_bUseUniqueColorTarget: usize = 0xC5D; // bool
                pub const m_brushModelName: usize = 0xC60; // CUtlString
                pub const m_hTargetCamera: usize = 0xC68; // CHandle<C_BaseEntity>
                pub const m_bEnabled: usize = 0xC6C; // bool
                pub const m_bDraw3DSkybox: usize = 0xC6D; // bool
            }
            // Parent: C_BaseTrigger
            // Fields count: 0
            pub mod C_TriggerMultiple {
            }
            // Parent: None
            // Fields count: 1
            pub mod C_RopeKeyframe__CPhysicsDelegate {
                pub const m_pKeyframe: usize = 0x8; // C_RopeKeyframe*
            }
            // Parent: CBaseAnimGraph
            // Fields count: 14
            pub mod C_ClientRagdoll {
                pub const m_bFadeOut: usize = 0xE78; // bool
                pub const m_bImportant: usize = 0xE79; // bool
                pub const m_flEffectTime: usize = 0xE7C; // GameTime_t
                pub const m_gibDespawnTime: usize = 0xE80; // GameTime_t
                pub const m_iCurrentFriction: usize = 0xE84; // int32
                pub const m_iMinFriction: usize = 0xE88; // int32
                pub const m_iMaxFriction: usize = 0xE8C; // int32
                pub const m_iFrictionAnimState: usize = 0xE90; // int32
                pub const m_bReleaseRagdoll: usize = 0xE94; // bool
                pub const m_iEyeAttachment: usize = 0xE95; // AttachmentHandle_t
                pub const m_bFadingOut: usize = 0xE96; // bool
                pub const m_flScaleEnd: usize = 0xE98; // float32[10]
                pub const m_flScaleTimeStart: usize = 0xEC0; // GameTime_t[10]
                pub const m_flScaleTimeEnd: usize = 0xEE8; // GameTime_t[10]
            }
            // Parent: C_BaseEntity
            // Fields count: 1
            pub mod C_GlobalLight {
                pub const m_WindClothForceHandle: usize = 0xB90; // uint16
            }
            // Parent: C_BaseEntity
            // Fields count: 10
            //
            // Metadata:
            // NetworkVarNames: m_bHostageAlive (bool)
            // NetworkVarNames: m_isHostageFollowingSomeone (bool)
            // NetworkVarNames: m_iHostageEntityIDs (CEntityIndex)
            // NetworkVarNames: m_bombsiteCenterA (Vector)
            // NetworkVarNames: m_bombsiteCenterB (Vector)
            // NetworkVarNames: m_hostageRescueX (int)
            // NetworkVarNames: m_hostageRescueY (int)
            // NetworkVarNames: m_hostageRescueZ (int)
            // NetworkVarNames: m_bEndMatchNextMapAllVoted (bool)
            pub mod C_CSPlayerResource {
                pub const m_bHostageAlive: usize = 0x6D0; // bool[12]
                pub const m_isHostageFollowingSomeone: usize = 0x6DC; // bool[12]
                pub const m_iHostageEntityIDs: usize = 0x6E8; // CEntityIndex[12]
                pub const m_bombsiteCenterA: usize = 0x718; // Vector
                pub const m_bombsiteCenterB: usize = 0x724; // Vector
                pub const m_hostageRescueX: usize = 0x730; // int32[4]
                pub const m_hostageRescueY: usize = 0x740; // int32[4]
                pub const m_hostageRescueZ: usize = 0x750; // int32[4]
                pub const m_bEndMatchNextMapAllVoted: usize = 0x760; // bool
                pub const m_foundGoalPositions: usize = 0x761; // bool
            }
            // Parent: CGameSceneNode
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_modelState (CModelState)
            // NetworkVarNames: m_bIsAnimationEnabled (bool)
            // NetworkVarNames: m_bUseParentRenderBounds (bool)
            // NetworkVarNames: m_materialGroup (CUtlStringToken)
            // NetworkVarNames: m_nHitboxSet (uint8)
            pub mod CSkeletonInstance {
                pub const m_modelState: usize = 0x160; // CModelState
                pub const m_bIsAnimationEnabled: usize = 0x380; // bool
                pub const m_bUseParentRenderBounds: usize = 0x381; // bool
                pub const m_bDisableSolidCollisionsForHierarchy: usize = 0x382; // bool
                pub const m_bDirtyMotionType: usize = 0x0; // bitfield:1
                pub const m_bIsGeneratingLatchedParentSpaceState: usize = 0x0; // bitfield:1
                pub const m_materialGroup: usize = 0x384; // CUtlStringToken
                pub const m_nHitboxSet: usize = 0x388; // uint8
            }
            // Parent: C_BaseCSGrenadeProjectile
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_nSmokeEffectTickBegin (int)
            // NetworkVarNames: m_bDidSmokeEffect (bool)
            // NetworkVarNames: m_nRandomSeed (int)
            // NetworkVarNames: m_vSmokeColor (Vector)
            // NetworkVarNames: m_vSmokeDetonationPos (Vector)
            // NetworkVarNames: m_VoxelFrameData (CUtlVector<uint8>)
            pub mod C_SmokeGrenadeProjectile {
                pub const m_nSmokeEffectTickBegin: usize = 0x10F8; // int32
                pub const m_bDidSmokeEffect: usize = 0x10FC; // bool
                pub const m_nRandomSeed: usize = 0x1100; // int32
                pub const m_vSmokeColor: usize = 0x1104; // Vector
                pub const m_vSmokeDetonationPos: usize = 0x1110; // Vector
                pub const m_VoxelFrameData: usize = 0x1120; // CUtlVector<uint8>
                pub const m_bSmokeVolumeDataReceived: usize = 0x1138; // bool
                pub const m_bSmokeEffectSpawned: usize = 0x1139; // bool
            }
            // Parent: C_BaseEntity
            // Fields count: 8
            pub mod C_CSGO_MapPreviewCameraPath {
                pub const m_flZFar: usize = 0x6D0; // float32
                pub const m_flZNear: usize = 0x6D4; // float32
                pub const m_bLoop: usize = 0x6D8; // bool
                pub const m_bVerticalFOV: usize = 0x6D9; // bool
                pub const m_bConstantSpeed: usize = 0x6DA; // bool
                pub const m_flDuration: usize = 0x6DC; // float32
                pub const m_flPathLength: usize = 0x720; // float32
                pub const m_flPathDuration: usize = 0x724; // float32
            }
            // Parent: CCSGO_WingmanIntroCharacterPosition
            // Fields count: 0
            pub mod CCSGO_WingmanIntroTerroristPosition {
            }
            // Parent: C_BaseModelEntity
            // Fields count: 19
            //
            // Metadata:
            // NetworkVarNames: m_firePositions (Vector)
            // NetworkVarNames: m_fireParentPositions (Vector)
            // NetworkVarNames: m_bFireIsBurning (bool)
            // NetworkVarNames: m_BurnNormal (Vector)
            // NetworkVarNames: m_fireCount (int)
            // NetworkVarNames: m_nInfernoType (int)
            // NetworkVarNames: m_nFireLifetime (float)
            // NetworkVarNames: m_bInPostEffectTime (bool)
            // NetworkVarNames: m_nFireEffectTickBegin (int)
            pub mod C_Inferno {
                pub const m_nfxFireDamageEffect: usize = 0xC90; // ParticleIndex_t
                pub const m_firePositions: usize = 0xC94; // Vector[64]
                pub const m_fireParentPositions: usize = 0xF94; // Vector[64]
                pub const m_bFireIsBurning: usize = 0x1294; // bool[64]
                pub const m_BurnNormal: usize = 0x12D4; // Vector[64]
                pub const m_fireCount: usize = 0x15D4; // int32
                pub const m_nInfernoType: usize = 0x15D8; // int32
                pub const m_nFireLifetime: usize = 0x15DC; // float32
                pub const m_bInPostEffectTime: usize = 0x15E0; // bool
                pub const m_lastFireCount: usize = 0x15E4; // int32
                pub const m_nFireEffectTickBegin: usize = 0x15E8; // int32
                pub const m_drawableCount: usize = 0x81F0; // int32
                pub const m_blosCheck: usize = 0x81F4; // bool
                pub const m_nlosperiod: usize = 0x81F8; // int32
                pub const m_maxFireHalfWidth: usize = 0x81FC; // float32
                pub const m_maxFireHeight: usize = 0x8200; // float32
                pub const m_minBounds: usize = 0x8204; // Vector
                pub const m_maxBounds: usize = 0x8210; // Vector
                pub const m_flLastGrassBurnThink: usize = 0x821C; // float32
            }
            // Parent: C_CSPlayerPawnBase
            // Fields count: 99
            //
            // Metadata:
            // NetworkVarNames: m_pBulletServices (CCSPlayer_BulletServices*)
            // NetworkVarNames: m_pHostageServices (CCSPlayer_HostageServices*)
            // NetworkVarNames: m_pBuyServices (CCSPlayer_BuyServices*)
            // NetworkVarNames: m_pGlowServices (CCSPlayer_GlowServices*)
            // NetworkVarNames: m_pActionTrackingServices (CCSPlayer_ActionTrackingServices*)
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkVarTypeOverride
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_flHealthShotBoostExpirationTime (GameTime_t)
            // NetworkVarNames: m_bHasFemaleVoice (bool)
            // NetworkVarNames: m_szLastPlaceName (char)
            // NetworkVarNames: m_bInBuyZone (bool)
            // NetworkVarNames: m_aimPunchAngle (QAngle)
            // NetworkVarNames: m_aimPunchAngleVel (QAngle)
            // NetworkVarNames: m_aimPunchTickBase (int)
            // NetworkVarNames: m_aimPunchTickFraction (float)
            // NetworkVarNames: m_bInHostageRescueZone (bool)
            // NetworkVarNames: m_bInBombZone (bool)
            // NetworkVarNames: m_bIsBuyMenuOpen (bool)
            // NetworkVarNames: m_flTimeOfLastInjury (GameTime_t)
            // NetworkVarNames: m_flNextSprayDecalTime (GameTime_t)
            // NetworkVarNames: m_iRetakesOffering (int)
            // NetworkVarNames: m_iRetakesOfferingCard (int)
            // NetworkVarNames: m_bRetakesHasDefuseKit (bool)
            // NetworkVarNames: m_bRetakesMVPLastRound (bool)
            // NetworkVarNames: m_iRetakesMVPBoostItem (int)
            // NetworkVarNames: m_RetakesMVPBoostExtraUtility (loadout_slot_t)
            // NetworkVarNames: m_EconGloves (CEconItemView)
            // NetworkVarNames: m_nEconGlovesChanged (uint8)
            // NetworkVarNames: m_nRagdollDamageBone (int)
            // NetworkVarNames: m_vRagdollDamageForce (Vector)
            // NetworkVarNames: m_vRagdollDamagePosition (Vector)
            // NetworkVarNames: m_szRagdollDamageWeaponName (char)
            // NetworkVarNames: m_bRagdollDamageHeadshot (bool)
            // NetworkVarNames: m_vRagdollServerOrigin (Vector)
            // NetworkVarNames: m_qDeathEyeAngles (QAngle)
            // NetworkVarNames: m_bLeftHanded (bool)
            // NetworkVarNames: m_fSwitchedHandednessTime (GameTime_t)
            // NetworkVarNames: m_flViewmodelOffsetX (float)
            // NetworkVarNames: m_flViewmodelOffsetY (float)
            // NetworkVarNames: m_flViewmodelOffsetZ (float)
            // NetworkVarNames: m_flViewmodelFOV (float)
            // NetworkVarNames: m_vecPlayerPatchEconIndices (uint32)
            // NetworkVarNames: m_GunGameImmunityColor (Color)
            // NetworkVarNames: m_bIsWalking (bool)
            // NetworkVarNames: m_entitySpottedState (EntitySpottedState_t)
            // NetworkVarNames: m_bIsScoped (bool)
            // NetworkVarNames: m_bResumeZoom (bool)
            // NetworkVarNames: m_bIsDefusing (bool)
            // NetworkVarNames: m_bIsGrabbingHostage (bool)
            // NetworkVarNames: m_iBlockingUseActionInProgress (CSPlayerBlockingUseAction_t)
            // NetworkVarNames: m_flEmitSoundTime (GameTime_t)
            // NetworkVarNames: m_bInNoDefuseArea (bool)
            // NetworkVarNames: m_nWhichBombZone (int)
            // NetworkVarNames: m_iShotsFired (int)
            // NetworkVarNames: m_flVelocityModifier (float)
            // NetworkVarNames: m_flHitHeading (float)
            // NetworkVarNames: m_nHitBodyPart (int)
            // NetworkVarNames: m_bWaitForNoAttack (bool)
            // NetworkVarNames: m_bKilledByHeadshot (bool)
            // NetworkVarNames: m_ArmorValue (int32)
            // NetworkVarNames: m_unCurrentEquipmentValue (uint16)
            // NetworkVarNames: m_unRoundStartEquipmentValue (uint16)
            // NetworkVarNames: m_unFreezetimeEndEquipmentValue (uint16)
            // NetworkVarNames: m_nLastKillerIndex (CEntityIndex)
            pub mod C_CSPlayerPawn {
                pub const m_pBulletServices: usize = 0x1410; // CCSPlayer_BulletServices*
                pub const m_pHostageServices: usize = 0x1418; // CCSPlayer_HostageServices*
                pub const m_pBuyServices: usize = 0x1420; // CCSPlayer_BuyServices*
                pub const m_pGlowServices: usize = 0x1428; // CCSPlayer_GlowServices*
                pub const m_pActionTrackingServices: usize = 0x1430; // CCSPlayer_ActionTrackingServices*
                pub const m_flHealthShotBoostExpirationTime: usize = 0x1438; // GameTime_t
                pub const m_flLastFiredWeaponTime: usize = 0x143C; // GameTime_t
                pub const m_bHasFemaleVoice: usize = 0x1440; // bool
                pub const m_flLandingTimeSeconds: usize = 0x1444; // float32
                pub const m_flOldFallVelocity: usize = 0x1448; // float32
                pub const m_szLastPlaceName: usize = 0x144C; // char[18]
                pub const m_bPrevDefuser: usize = 0x145E; // bool
                pub const m_bPrevHelmet: usize = 0x145F; // bool
                pub const m_nPrevArmorVal: usize = 0x1460; // int32
                pub const m_nPrevGrenadeAmmoCount: usize = 0x1464; // int32
                pub const m_unPreviousWeaponHash: usize = 0x1468; // uint32
                pub const m_unWeaponHash: usize = 0x146C; // uint32
                pub const m_bInBuyZone: usize = 0x1470; // bool
                pub const m_bPreviouslyInBuyZone: usize = 0x1471; // bool
                pub const m_aimPunchAngle: usize = 0x1474; // QAngle
                pub const m_aimPunchAngleVel: usize = 0x1480; // QAngle
                pub const m_aimPunchTickBase: usize = 0x148C; // int32
                pub const m_aimPunchTickFraction: usize = 0x1490; // float32
                pub const m_aimPunchCache: usize = 0x1498; // CUtlVector<QAngle>
                pub const m_bInLanding: usize = 0x14B8; // bool
                pub const m_flLandingStartTime: usize = 0x14BC; // float32
                pub const m_bInHostageRescueZone: usize = 0x14C0; // bool
                pub const m_bInBombZone: usize = 0x14C1; // bool
                pub const m_bIsBuyMenuOpen: usize = 0x14C2; // bool
                pub const m_flTimeOfLastInjury: usize = 0x14C4; // GameTime_t
                pub const m_flNextSprayDecalTime: usize = 0x14C8; // GameTime_t
                pub const m_iRetakesOffering: usize = 0x15E0; // int32
                pub const m_iRetakesOfferingCard: usize = 0x15E4; // int32
                pub const m_bRetakesHasDefuseKit: usize = 0x15E8; // bool
                pub const m_bRetakesMVPLastRound: usize = 0x15E9; // bool
                pub const m_iRetakesMVPBoostItem: usize = 0x15EC; // int32
                pub const m_RetakesMVPBoostExtraUtility: usize = 0x15F0; // loadout_slot_t
                pub const m_bNeedToReApplyGloves: usize = 0x1610; // bool
                pub const m_EconGloves: usize = 0x1618; // C_EconItemView
                pub const m_nEconGlovesChanged: usize = 0x2968; // uint8
                pub const m_bMustSyncRagdollState: usize = 0x2969; // bool
                pub const m_nRagdollDamageBone: usize = 0x296C; // int32
                pub const m_vRagdollDamageForce: usize = 0x2970; // Vector
                pub const m_vRagdollDamagePosition: usize = 0x297C; // Vector
                pub const m_szRagdollDamageWeaponName: usize = 0x2988; // char[64]
                pub const m_bRagdollDamageHeadshot: usize = 0x29C8; // bool
                pub const m_vRagdollServerOrigin: usize = 0x29CC; // Vector
                pub const m_bLastHeadBoneTransformIsValid: usize = 0x2FE0; // bool
                pub const m_lastLandTime: usize = 0x2FE4; // GameTime_t
                pub const m_bOnGroundLastTick: usize = 0x2FE8; // bool
                pub const m_qDeathEyeAngles: usize = 0x3004; // QAngle
                pub const m_bSkipOneHeadConstraintUpdate: usize = 0x3010; // bool
                pub const m_bLeftHanded: usize = 0x3011; // bool
                pub const m_fSwitchedHandednessTime: usize = 0x3014; // GameTime_t
                pub const m_flViewmodelOffsetX: usize = 0x3018; // float32
                pub const m_flViewmodelOffsetY: usize = 0x301C; // float32
                pub const m_flViewmodelOffsetZ: usize = 0x3020; // float32
                pub const m_flViewmodelFOV: usize = 0x3024; // float32
                pub const m_vecPlayerPatchEconIndices: usize = 0x3028; // uint32[5]
                pub const m_GunGameImmunityColor: usize = 0x3060; // Color
                pub const m_vecBulletHitModels: usize = 0x30B0; // CUtlVector<C_BulletHitModel*>
                pub const m_bIsWalking: usize = 0x30C8; // bool
                pub const m_thirdPersonHeading: usize = 0x30D0; // QAngle
                pub const m_flSlopeDropOffset: usize = 0x30E8; // float32
                pub const m_flSlopeDropHeight: usize = 0x30F8; // float32
                pub const m_vHeadConstraintOffset: usize = 0x3108; // Vector
                pub const m_entitySpottedState: usize = 0x3120; // EntitySpottedState_t
                pub const m_bIsScoped: usize = 0x3138; // bool
                pub const m_bResumeZoom: usize = 0x3139; // bool
                pub const m_bIsDefusing: usize = 0x313A; // bool
                pub const m_bIsGrabbingHostage: usize = 0x313B; // bool
                pub const m_iBlockingUseActionInProgress: usize = 0x313C; // CSPlayerBlockingUseAction_t
                pub const m_flEmitSoundTime: usize = 0x3140; // GameTime_t
                pub const m_bInNoDefuseArea: usize = 0x3144; // bool
                pub const m_nWhichBombZone: usize = 0x3148; // int32
                pub const m_iShotsFired: usize = 0x314C; // int32
                pub const m_flVelocityModifier: usize = 0x3150; // float32
                pub const m_flHitHeading: usize = 0x3154; // float32
                pub const m_nHitBodyPart: usize = 0x3158; // int32
                pub const m_bWaitForNoAttack: usize = 0x315C; // bool
                pub const m_ignoreLadderJumpTime: usize = 0x3160; // float32
                pub const m_bKilledByHeadshot: usize = 0x3165; // bool
                pub const m_ArmorValue: usize = 0x3168; // int32
                pub const m_unCurrentEquipmentValue: usize = 0x316C; // uint16
                pub const m_unRoundStartEquipmentValue: usize = 0x316E; // uint16
                pub const m_unFreezetimeEndEquipmentValue: usize = 0x3170; // uint16
                pub const m_nLastKillerIndex: usize = 0x3174; // CEntityIndex
                pub const m_bOldIsScoped: usize = 0x3178; // bool
                pub const m_bHasDeathInfo: usize = 0x3179; // bool
                pub const m_flDeathInfoTime: usize = 0x317C; // float32
                pub const m_vecDeathInfoOrigin: usize = 0x3180; // Vector
                pub const m_grenadeParameterStashTime: usize = 0x318C; // GameTime_t
                pub const m_bGrenadeParametersStashed: usize = 0x3190; // bool
                pub const m_angStashedShootAngles: usize = 0x3194; // QAngle
                pub const m_vecStashedGrenadeThrowPosition: usize = 0x31A0; // Vector
                pub const m_vecStashedVelocity: usize = 0x31AC; // Vector
                pub const m_angShootAngleHistory: usize = 0x31B8; // QAngle[2]
                pub const m_vecThrowPositionHistory: usize = 0x31D0; // Vector[2]
                pub const m_vecVelocityHistory: usize = 0x31E8; // Vector[2]
            }
            // Parent: C_RagdollProp
            // Fields count: 7
            //
            // Metadata:
            // NetworkVarNames: m_boneIndexAttached (uint32)
            // NetworkVarNames: m_ragdollAttachedObjectIndex (uint32)
            // NetworkVarNames: m_attachmentPointBoneSpace (Vector)
            // NetworkVarNames: m_attachmentPointRagdollSpace (Vector)
            pub mod C_RagdollPropAttached {
                pub const m_boneIndexAttached: usize = 0xEF0; // uint32
                pub const m_ragdollAttachedObjectIndex: usize = 0xEF4; // uint32
                pub const m_attachmentPointBoneSpace: usize = 0xEF8; // Vector
                pub const m_attachmentPointRagdollSpace: usize = 0xF04; // Vector
                pub const m_vecOffset: usize = 0xF10; // Vector
                pub const m_parentTime: usize = 0xF1C; // float32
                pub const m_bHasParent: usize = 0xF20; // bool
            }
            // Parent: C_BaseGrenade
            // Fields count: 16
            //
            // Metadata:
            // NetworkVarNames: m_vInitialPosition (Vector)
            // NetworkVarNames: m_vInitialVelocity (Vector)
            // NetworkVarNames: m_nBounces (int)
            // NetworkVarNames: m_nExplodeEffectIndex (HParticleSystemDefinitionStrong)
            // NetworkVarNames: m_nExplodeEffectTickBegin (int)
            // NetworkVarNames: m_vecExplodeEffectOrigin (Vector)
            pub mod C_BaseCSGrenadeProjectile {
                pub const m_vInitialPosition: usize = 0x105C; // Vector
                pub const m_vInitialVelocity: usize = 0x1068; // Vector
                pub const m_nBounces: usize = 0x1074; // int32
                pub const m_nExplodeEffectIndex: usize = 0x1078; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_nExplodeEffectTickBegin: usize = 0x1080; // int32
                pub const m_vecExplodeEffectOrigin: usize = 0x1084; // Vector
                pub const m_flSpawnTime: usize = 0x1090; // GameTime_t
                pub const vecLastTrailLinePos: usize = 0x1094; // Vector
                pub const flNextTrailLineTime: usize = 0x10A0; // GameTime_t
                pub const m_bExplodeEffectBegan: usize = 0x10A4; // bool
                pub const m_bCanCreateGrenadeTrail: usize = 0x10A5; // bool
                pub const m_nSnapshotTrajectoryEffectIndex: usize = 0x10A8; // ParticleIndex_t
                pub const m_hSnapshotTrajectoryParticleSnapshot: usize = 0x10B0; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                pub const m_arrTrajectoryTrailPoints: usize = 0x10B8; // CUtlVector<Vector>
                pub const m_arrTrajectoryTrailPointCreationTimes: usize = 0x10D0; // CUtlVector<float32>
                pub const m_flTrajectoryTrailEffectCreationTime: usize = 0x10E8; // float32
            }
            // Parent: C_BaseToggle
            // Fields count: 2
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames: m_bDisabled (bool)
            // NetworkVarNames: m_bClientSidePredicted (bool)
            pub mod C_BaseTrigger {
                pub const m_bDisabled: usize = 0xC50; // bool
                pub const m_bClientSidePredicted: usize = 0xC51; // bool
            }
            // Parent: C_BaseCSGrenade
            // Fields count: 0
            pub mod C_MolotovGrenade {
            }
            // Parent: C_BaseToggle
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_glowEntity (CHandle<C_BaseModelEntity>)
            // NetworkVarNames: m_usable (bool)
            // NetworkVarNames: m_szDisplayText (string_t)
            pub mod C_BaseButton {
                pub const m_glowEntity: usize = 0xC50; // CHandle<C_BaseModelEntity>
                pub const m_usable: usize = 0xC54; // bool
                pub const m_szDisplayText: usize = 0xC58; // CUtlSymbolLarge
            }
            // Parent: CPlayer_ViewModelServices
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_hViewModel (CHandle<CBaseViewModel>)
            pub mod CCSPlayer_ViewModelServices {
                pub const m_hViewModel: usize = 0x40; // CHandle<C_BaseViewModel>[3]
            }
            // Parent: CBaseAnimGraph
            // Fields count: 0
            pub mod C_WorldModelNametag {
            }
            // Parent: C_BasePropDoor
            // Fields count: 0
            pub mod C_PropDoorRotating {
            }
            // Parent: C_BaseEntity
            // Fields count: 4
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames: m_aPlayerControllers (CHandle<CBasePlayerController>)
            // NetworkVarNames: m_aPlayers (CHandle<C_BasePlayerPawn>)
            // NetworkVarNames: m_iScore (int32)
            // NetworkVarNames: m_szTeamname (char)
            pub mod C_Team {
                pub const m_aPlayerControllers: usize = 0x6D0; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
                pub const m_aPlayers: usize = 0x6E8; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
                pub const m_iScore: usize = 0x700; // int32
                pub const m_szTeamname: usize = 0x704; // char[129]
            }
            // Parent: C_SoundAreaEntityBase
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_vMin (Vector)
            // NetworkVarNames: m_vMax (Vector)
            pub mod C_SoundAreaEntityOrientedBox {
                pub const m_vMin: usize = 0x6F4; // Vector
                pub const m_vMax: usize = 0x700; // Vector
            }
            // Parent: C_TonemapController2
            // Fields count: 0
            pub mod C_TonemapController2Alias_env_tonemap_controller2 {
            }
            // Parent: None
            // Fields count: 30
            //
            // Metadata:
            // NetworkVarNames: m_hTargetEntity (CHandle<C_BaseEntity>)
            // NetworkVarNames: m_bState (bool)
            // NetworkVarNames: m_bAlwaysUpdate (bool)
            // NetworkVarNames: m_flLightFOV (float32)
            // NetworkVarNames: m_bEnableShadows (bool)
            // NetworkVarNames: m_bSimpleProjection (bool)
            // NetworkVarNames: m_bLightOnlyTarget (bool)
            // NetworkVarNames: m_bLightWorld (bool)
            // NetworkVarNames: m_bCameraSpace (bool)
            // NetworkVarNames: m_flBrightnessScale (float32)
            // NetworkVarNames: m_LightColor (Color)
            // NetworkVarNames: m_flIntensity (float32)
            // NetworkVarNames: m_flLinearAttenuation (float32)
            // NetworkVarNames: m_flQuadraticAttenuation (float32)
            // NetworkVarNames: m_bVolumetric (bool)
            // NetworkVarNames: m_flVolumetricIntensity (float32)
            // NetworkVarNames: m_flNoiseStrength (float32)
            // NetworkVarNames: m_flFlashlightTime (float32)
            // NetworkVarNames: m_nNumPlanes (uint32)
            // NetworkVarNames: m_flPlaneOffset (float32)
            // NetworkVarNames: m_flColorTransitionTime (float32)
            // NetworkVarNames: m_flAmbient (float32)
            // NetworkVarNames: m_SpotlightTextureName (char)
            // NetworkVarNames: m_nSpotlightTextureFrame (int32)
            // NetworkVarNames: m_nShadowQuality (uint32)
            // NetworkVarNames: m_flNearZ (float32)
            // NetworkVarNames: m_flFarZ (float32)
            // NetworkVarNames: m_flProjectionSize (float32)
            // NetworkVarNames: m_flRotation (float32)
            // NetworkVarNames: m_bFlipHorizontal (bool)
            pub mod CProjectedTextureBase {
                pub const m_hTargetEntity: usize = 0xC; // CHandle<C_BaseEntity>
                pub const m_bState: usize = 0x10; // bool
                pub const m_bAlwaysUpdate: usize = 0x11; // bool
                pub const m_flLightFOV: usize = 0x14; // float32
                pub const m_bEnableShadows: usize = 0x18; // bool
                pub const m_bSimpleProjection: usize = 0x19; // bool
                pub const m_bLightOnlyTarget: usize = 0x1A; // bool
                pub const m_bLightWorld: usize = 0x1B; // bool
                pub const m_bCameraSpace: usize = 0x1C; // bool
                pub const m_flBrightnessScale: usize = 0x20; // float32
                pub const m_LightColor: usize = 0x24; // Color
                pub const m_flIntensity: usize = 0x28; // float32
                pub const m_flLinearAttenuation: usize = 0x2C; // float32
                pub const m_flQuadraticAttenuation: usize = 0x30; // float32
                pub const m_bVolumetric: usize = 0x34; // bool
                pub const m_flVolumetricIntensity: usize = 0x38; // float32
                pub const m_flNoiseStrength: usize = 0x3C; // float32
                pub const m_flFlashlightTime: usize = 0x40; // float32
                pub const m_nNumPlanes: usize = 0x44; // uint32
                pub const m_flPlaneOffset: usize = 0x48; // float32
                pub const m_flColorTransitionTime: usize = 0x4C; // float32
                pub const m_flAmbient: usize = 0x50; // float32
                pub const m_SpotlightTextureName: usize = 0x54; // char[512]
                pub const m_nSpotlightTextureFrame: usize = 0x254; // int32
                pub const m_nShadowQuality: usize = 0x258; // uint32
                pub const m_flNearZ: usize = 0x25C; // float32
                pub const m_flFarZ: usize = 0x260; // float32
                pub const m_flProjectionSize: usize = 0x264; // float32
                pub const m_flRotation: usize = 0x268; // float32
                pub const m_bFlipHorizontal: usize = 0x26C; // bool
            }
            // Parent: C_BaseEntity
            // Fields count: 17
            //
            // Metadata:
            // NetworkVarNames: m_hLightProbeTexture (HRenderTextureStrong)
            // NetworkVarNames: m_hLightProbeDirectLightIndicesTexture (HRenderTextureStrong)
            // NetworkVarNames: m_hLightProbeDirectLightScalarsTexture (HRenderTextureStrong)
            // NetworkVarNames: m_hLightProbeDirectLightShadowsTexture (HRenderTextureStrong)
            // NetworkVarNames: m_vBoxMins (Vector)
            // NetworkVarNames: m_vBoxMaxs (Vector)
            // NetworkVarNames: m_bMoveable (bool)
            // NetworkVarNames: m_nHandshake (int)
            // NetworkVarNames: m_nPriority (int)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_nLightProbeSizeX (int)
            // NetworkVarNames: m_nLightProbeSizeY (int)
            // NetworkVarNames: m_nLightProbeSizeZ (int)
            // NetworkVarNames: m_nLightProbeAtlasX (int)
            // NetworkVarNames: m_nLightProbeAtlasY (int)
            // NetworkVarNames: m_nLightProbeAtlasZ (int)
            // NetworkVarNames: m_bEnabled (bool)
            pub mod C_EnvLightProbeVolume {
                pub const m_hLightProbeTexture: usize = 0x16A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_hLightProbeDirectLightIndicesTexture: usize = 0x16B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_hLightProbeDirectLightScalarsTexture: usize = 0x16B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_hLightProbeDirectLightShadowsTexture: usize = 0x16C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_vBoxMins: usize = 0x16C8; // Vector
                pub const m_vBoxMaxs: usize = 0x16D4; // Vector
                pub const m_bMoveable: usize = 0x16E0; // bool
                pub const m_nHandshake: usize = 0x16E4; // int32
                pub const m_nPriority: usize = 0x16E8; // int32
                pub const m_bStartDisabled: usize = 0x16EC; // bool
                pub const m_nLightProbeSizeX: usize = 0x16F0; // int32
                pub const m_nLightProbeSizeY: usize = 0x16F4; // int32
                pub const m_nLightProbeSizeZ: usize = 0x16F8; // int32
                pub const m_nLightProbeAtlasX: usize = 0x16FC; // int32
                pub const m_nLightProbeAtlasY: usize = 0x1700; // int32
                pub const m_nLightProbeAtlasZ: usize = 0x1704; // int32
                pub const m_bEnabled: usize = 0x1711; // bool
            }
            // Parent: CBaseAnimGraph
            // Fields count: 1
            pub mod C_ViewmodelAttachmentModel {
                pub const m_bShouldFrontFaceCullLeftHanded: usize = 0xE78; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nItemDefIndex (uint16)
            // NetworkVarNames: m_nCount (uint16)
            pub mod WeaponPurchaseCount_t {
                pub const m_nItemDefIndex: usize = 0x30; // uint16
                pub const m_nCount: usize = 0x32; // uint16
            }
            // Parent: C_BaseCSGrenade
            // Fields count: 0
            pub mod C_SmokeGrenade {
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            pub mod C_WeaponGalilAR {
            }
            // Parent: CBaseAnimGraph
            // Fields count: 0
            pub mod C_WorldModelGloves {
            }
            // Parent: C_ModelPointEntity
            // Fields count: 0
            pub mod C_EnvProjectedTexture {
            }
            // Parent: CPlayer_CameraServices
            // Fields count: 6
            //
            // Metadata:
            // NetworkVarNames: m_iFOV (uint32)
            // NetworkVarNames: m_iFOVStart (uint32)
            // NetworkVarNames: m_flFOVTime (GameTime_t)
            // NetworkVarNames: m_flFOVRate (float32)
            // NetworkVarNames: m_hZoomOwner (CHandle<CBaseEntity>)
            pub mod CCSPlayerBase_CameraServices {
                pub const m_iFOV: usize = 0x210; // uint32
                pub const m_iFOVStart: usize = 0x214; // uint32
                pub const m_flFOVTime: usize = 0x218; // GameTime_t
                pub const m_flFOVRate: usize = 0x21C; // float32
                pub const m_hZoomOwner: usize = 0x220; // CHandle<C_BaseEntity>
                pub const m_flLastShotFOV: usize = 0x224; // float32
            }
            // Parent: C_BasePlayerPawn
            // Fields count: 67
            //
            // Metadata:
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // NetworkVarNames: m_pPingServices (CCSPlayer_PingServices*)
            // NetworkVarNames: m_pViewModelServices (CPlayer_ViewModelServices*)
            // NetworkVarNames: m_iPlayerState (CSPlayerState)
            // NetworkVarNames: m_bIsRescuing (bool)
            // NetworkVarNames: m_fImmuneToGunGameDamageTime (GameTime_t)
            // NetworkVarNames: m_bGunGameImmunity (bool)
            // NetworkVarNames: m_bHasMovedSinceSpawn (bool)
            // NetworkVarNames: m_fMolotovUseTime (float)
            // NetworkVarNames: m_fMolotovDamageTime (float)
            // NetworkVarNames: m_iThrowGrenadeCounter (int)
            // NetworkVarNames: m_iProgressBarDuration (int)
            // NetworkVarNames: m_flProgressBarStartTime (float)
            // NetworkVarNames: m_flFlashMaxAlpha (float)
            // NetworkVarNames: m_flFlashDuration (float)
            // NetworkVarNames: m_bHud_MiniScoreHidden (bool)
            // NetworkVarNames: m_bHud_RadarHidden (bool)
            // NetworkVarNames: m_cycleLatch (int)
            // NetworkVarNames: m_hOriginalController (CHandle<CCSPlayerController>)
            pub mod C_CSPlayerPawnBase {
                pub const m_pPingServices: usize = 0x1258; // CCSPlayer_PingServices*
                pub const m_pViewModelServices: usize = 0x1260; // CPlayer_ViewModelServices*
                pub const m_fRenderingClipPlane: usize = 0x1268; // float32[4]
                pub const m_nLastClipPlaneSetupFrame: usize = 0x1278; // int32
                pub const m_vecLastClipCameraPos: usize = 0x127C; // Vector
                pub const m_vecLastClipCameraForward: usize = 0x1288; // Vector
                pub const m_bClipHitStaticWorld: usize = 0x1294; // bool
                pub const m_bCachedPlaneIsValid: usize = 0x1295; // bool
                pub const m_pClippingWeapon: usize = 0x1298; // C_CSWeaponBase*
                pub const m_previousPlayerState: usize = 0x12A0; // CSPlayerState
                pub const m_iPlayerState: usize = 0x12A4; // CSPlayerState
                pub const m_bIsRescuing: usize = 0x12A8; // bool
                pub const m_fImmuneToGunGameDamageTime: usize = 0x12AC; // GameTime_t
                pub const m_fImmuneToGunGameDamageTimeLast: usize = 0x12B0; // GameTime_t
                pub const m_bGunGameImmunity: usize = 0x12B4; // bool
                pub const m_bHasMovedSinceSpawn: usize = 0x12B5; // bool
                pub const m_fMolotovUseTime: usize = 0x12B8; // float32
                pub const m_fMolotovDamageTime: usize = 0x12BC; // float32
                pub const m_iThrowGrenadeCounter: usize = 0x12C0; // int32
                pub const m_flLastSpawnTimeIndex: usize = 0x12C4; // GameTime_t
                pub const m_iProgressBarDuration: usize = 0x12C8; // int32
                pub const m_flProgressBarStartTime: usize = 0x12CC; // float32
                pub const m_vecIntroStartEyePosition: usize = 0x12D0; // Vector
                pub const m_vecIntroStartPlayerForward: usize = 0x12DC; // Vector
                pub const m_flClientDeathTime: usize = 0x12E8; // GameTime_t
                pub const m_bScreenTearFrameCaptured: usize = 0x12EC; // bool
                pub const m_flFlashBangTime: usize = 0x12F0; // float32
                pub const m_flFlashScreenshotAlpha: usize = 0x12F4; // float32
                pub const m_flFlashOverlayAlpha: usize = 0x12F8; // float32
                pub const m_bFlashBuildUp: usize = 0x12FC; // bool
                pub const m_bFlashDspHasBeenCleared: usize = 0x12FD; // bool
                pub const m_bFlashScreenshotHasBeenGrabbed: usize = 0x12FE; // bool
                pub const m_flFlashMaxAlpha: usize = 0x1300; // float32
                pub const m_flFlashDuration: usize = 0x1304; // float32
                pub const m_iHealthBarRenderMaskIndex: usize = 0x1308; // int32
                pub const m_flHealthFadeValue: usize = 0x130C; // float32
                pub const m_flHealthFadeAlpha: usize = 0x1310; // float32
                pub const m_flDeathCCWeight: usize = 0x1320; // float32
                pub const m_flPrevRoundEndTime: usize = 0x1324; // float32
                pub const m_flPrevMatchEndTime: usize = 0x1328; // float32
                pub const m_angEyeAngles: usize = 0x1330; // QAngle
                pub const m_fNextThinkPushAway: usize = 0x1348; // float32
                pub const m_bShouldAutobuyDMWeapons: usize = 0x134C; // bool
                pub const m_bShouldAutobuyNow: usize = 0x134D; // bool
                pub const m_bHud_MiniScoreHidden: usize = 0x134E; // bool
                pub const m_bHud_RadarHidden: usize = 0x134F; // bool
                pub const m_iIDEntIndex: usize = 0x1350; // CEntityIndex
                pub const m_delayTargetIDTimer: usize = 0x1358; // CountdownTimer
                pub const m_iTargetedWeaponEntIndex: usize = 0x1370; // CEntityIndex
                pub const m_iOldIDEntIndex: usize = 0x1374; // CEntityIndex
                pub const m_holdTargetIDTimer: usize = 0x1378; // CountdownTimer
                pub const m_flCurrentMusicStartTime: usize = 0x1394; // float32
                pub const m_flMusicRoundStartTime: usize = 0x1398; // float32
                pub const m_bDeferStartMusicOnWarmup: usize = 0x139C; // bool
                pub const m_cycleLatch: usize = 0x13A0; // int32
                pub const m_serverIntendedCycle: usize = 0x13A4; // float32
                pub const m_flLastSmokeOverlayAlpha: usize = 0x13A8; // float32
                pub const m_flLastSmokeAge: usize = 0x13AC; // float32
                pub const m_vLastSmokeOverlayColor: usize = 0x13B0; // Vector
                pub const m_nPlayerSmokedFx: usize = 0x13BC; // ParticleIndex_t
                pub const m_nPlayerInfernoBodyFx: usize = 0x13C0; // ParticleIndex_t
                pub const m_nPlayerInfernoFootFx: usize = 0x13C4; // ParticleIndex_t
                pub const m_flNextMagDropTime: usize = 0x13C8; // float32
                pub const m_nLastMagDropAttachmentIndex: usize = 0x13CC; // int32
                pub const m_vecLastAliveLocalVelocity: usize = 0x13D0; // Vector
                pub const m_bGuardianShouldSprayCustomXMark: usize = 0x13F8; // bool
                pub const m_hOriginalController: usize = 0x1400; // CHandle<CCSPlayerController>
            }
            // Parent: C_WeaponBaseItem
            // Fields count: 0
            pub mod C_Item_Healthshot {
            }
            // Parent: None
            // Fields count: 29
            //
            // Metadata:
            // NetworkVarNames: m_flStartTime (GameTime_t)
            // NetworkVarNames: m_iWindSeed (uint32)
            // NetworkVarNames: m_iMinWind (uint16)
            // NetworkVarNames: m_iMaxWind (uint16)
            // NetworkVarNames: m_windRadius (int32)
            // NetworkVarNames: m_iMinGust (uint16)
            // NetworkVarNames: m_iMaxGust (uint16)
            // NetworkVarNames: m_flMinGustDelay (float32)
            // NetworkVarNames: m_flMaxGustDelay (float32)
            // NetworkVarNames: m_flGustDuration (float32)
            // NetworkVarNames: m_iGustDirChange (uint16)
            // NetworkVarNames: m_location (Vector)
            // NetworkVarNames: m_iInitialWindDir (uint16)
            // NetworkVarNames: m_flInitialWindSpeed (float32)
            pub mod C_EnvWindShared {
                pub const m_flStartTime: usize = 0x8; // GameTime_t
                pub const m_iWindSeed: usize = 0xC; // uint32
                pub const m_iMinWind: usize = 0x10; // uint16
                pub const m_iMaxWind: usize = 0x12; // uint16
                pub const m_windRadius: usize = 0x14; // int32
                pub const m_iMinGust: usize = 0x18; // uint16
                pub const m_iMaxGust: usize = 0x1A; // uint16
                pub const m_flMinGustDelay: usize = 0x1C; // float32
                pub const m_flMaxGustDelay: usize = 0x20; // float32
                pub const m_flGustDuration: usize = 0x24; // float32
                pub const m_iGustDirChange: usize = 0x28; // uint16
                pub const m_location: usize = 0x2C; // Vector
                pub const m_iszGustSound: usize = 0x38; // int32
                pub const m_iWindDir: usize = 0x3C; // int32
                pub const m_flWindSpeed: usize = 0x40; // float32
                pub const m_currentWindVector: usize = 0x44; // Vector
                pub const m_CurrentSwayVector: usize = 0x50; // Vector
                pub const m_PrevSwayVector: usize = 0x5C; // Vector
                pub const m_iInitialWindDir: usize = 0x68; // uint16
                pub const m_flInitialWindSpeed: usize = 0x6C; // float32
                pub const m_flVariationTime: usize = 0x70; // GameTime_t
                pub const m_flSwayTime: usize = 0x74; // GameTime_t
                pub const m_flSimTime: usize = 0x78; // GameTime_t
                pub const m_flSwitchTime: usize = 0x7C; // GameTime_t
                pub const m_flAveWindSpeed: usize = 0x80; // float32
                pub const m_bGusting: usize = 0x84; // bool
                pub const m_flWindAngleVariation: usize = 0x88; // float32
                pub const m_flWindSpeedVariation: usize = 0x8C; // float32
                pub const m_iEntIndex: usize = 0x90; // CEntityIndex
            }
            // Parent: C_BaseTrigger
            // Fields count: 16
            //
            // Metadata:
            // NetworkVarNames: m_hPostSettings (HPostProcessingStrong)
            // NetworkVarNames: m_flFadeDuration (float)
            // NetworkVarNames: m_flMinLogExposure (float)
            // NetworkVarNames: m_flMaxLogExposure (float)
            // NetworkVarNames: m_flMinExposure (float)
            // NetworkVarNames: m_flMaxExposure (float)
            // NetworkVarNames: m_flExposureCompensation (float)
            // NetworkVarNames: m_flExposureFadeSpeedUp (float)
            // NetworkVarNames: m_flExposureFadeSpeedDown (float)
            // NetworkVarNames: m_flTonemapEVSmoothingRange (float)
            // NetworkVarNames: m_bMaster (bool)
            // NetworkVarNames: m_bExposureControl (bool)
            // NetworkVarNames: m_flRate (float)
            // NetworkVarNames: m_flTonemapPercentTarget (float)
            // NetworkVarNames: m_flTonemapPercentBrightPixels (float)
            // NetworkVarNames: m_flTonemapMinAvgLum (float)
            pub mod C_PostProcessingVolume {
                pub const m_hPostSettings: usize = 0xC68; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
                pub const m_flFadeDuration: usize = 0xC70; // float32
                pub const m_flMinLogExposure: usize = 0xC74; // float32
                pub const m_flMaxLogExposure: usize = 0xC78; // float32
                pub const m_flMinExposure: usize = 0xC7C; // float32
                pub const m_flMaxExposure: usize = 0xC80; // float32
                pub const m_flExposureCompensation: usize = 0xC84; // float32
                pub const m_flExposureFadeSpeedUp: usize = 0xC88; // float32
                pub const m_flExposureFadeSpeedDown: usize = 0xC8C; // float32
                pub const m_flTonemapEVSmoothingRange: usize = 0xC90; // float32
                pub const m_bMaster: usize = 0xC94; // bool
                pub const m_bExposureControl: usize = 0xC95; // bool
                pub const m_flRate: usize = 0xC98; // float32
                pub const m_flTonemapPercentTarget: usize = 0xC9C; // float32
                pub const m_flTonemapPercentBrightPixels: usize = 0xCA0; // float32
                pub const m_flTonemapMinAvgLum: usize = 0xCA4; // float32
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_hPlayerPing (CHandle<CBaseEntity>)
            pub mod CCSPlayer_PingServices {
                pub const m_hPlayerPing: usize = 0x40; // CHandle<C_BaseEntity>
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            pub mod CPlayer_FlashlightServices {
            }
            // Parent: C_BaseCSGrenadeProjectile
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_nDecoyShotTick (int)
            pub mod C_DecoyProjectile {
                pub const m_nDecoyShotTick: usize = 0x10EC; // int32
                pub const m_nClientLastKnownDecoyShotTick: usize = 0x10F0; // int32
                pub const m_flTimeParticleEffectSpawn: usize = 0x1118; // GameTime_t
            }
            // Parent: CBaseAnimGraph
            // Fields count: 0
            pub mod C_WaterBullet {
            }
            // Parent: C_CSPlayerPawn
            // Fields count: 3
            pub mod C_CSGO_PreviewPlayer {
                pub const m_animgraph: usize = 0x3200; // CUtlString
                pub const m_animgraphCharacterModeString: usize = 0x3208; // CGlobalSymbol
                pub const m_flInitialModelScale: usize = 0x3210; // float32
            }
            // Parent: CSkeletonAnimationController
            // Fields count: 13
            //
            // Metadata:
            // NetworkVarNames: m_animGraphNetworkedVars (CAnimGraphNetworkedVariables)
            // NetworkVarNames: m_hSequence (HSequence)
            // NetworkVarNames: m_flSeqStartTime (GameTime_t)
            // NetworkVarNames: m_flSeqFixedCycle (float)
            // NetworkVarNames: m_nAnimLoopMode (AnimLoopMode_t)
            pub mod CBaseAnimGraphController {
                pub const m_animGraphNetworkedVars: usize = 0x18; // CAnimGraphNetworkedVariables
                pub const m_bSequenceFinished: usize = 0x14A8; // bool
                pub const m_flSoundSyncTime: usize = 0x14AC; // float32
                pub const m_hSequence: usize = 0x14B0; // HSequence
                pub const m_flSeqStartTime: usize = 0x14B4; // GameTime_t
                pub const m_flSeqFixedCycle: usize = 0x14B8; // float32
                pub const m_nAnimLoopMode: usize = 0x14BC; // AnimLoopMode_t
                pub const m_flPlaybackRate: usize = 0x14C0; // CNetworkedQuantizedFloat
                pub const m_nNotifyState: usize = 0x14CC; // SequenceFinishNotifyState_t
                pub const m_bNetworkedAnimationInputsChanged: usize = 0x14CE; // bool
                pub const m_bNetworkedSequenceChanged: usize = 0x14CF; // bool
                pub const m_bLastUpdateSkipped: usize = 0x14D0; // bool
                pub const m_flPrevAnimUpdateTime: usize = 0x14D4; // GameTime_t
            }
            // Parent: C_BaseEntity
            // Fields count: 16
            //
            // Metadata:
            // NetworkVarNames: m_flParticleSpacing (float)
            // NetworkVarNames: m_flSlack (float)
            // NetworkVarNames: m_flRadius (float)
            // NetworkVarNames: m_ColorTint (Color)
            // NetworkVarNames: m_nEffectState (int)
            // NetworkVarNames: m_iEffectIndex (HParticleSystemDefinitionStrong)
            // NetworkVarNames: m_PathNodes_Position (Vector)
            // NetworkVarNames: m_PathNodes_TangentIn (Vector)
            // NetworkVarNames: m_PathNodes_TangentOut (Vector)
            // NetworkVarNames: m_PathNodes_Color (Vector)
            // NetworkVarNames: m_PathNodes_PinEnabled (bool)
            // NetworkVarNames: m_PathNodes_RadiusScale (float)
            pub mod C_PathParticleRope {
                pub const m_bStartActive: usize = 0x6D0; // bool
                pub const m_flMaxSimulationTime: usize = 0x6D4; // float32
                pub const m_iszEffectName: usize = 0x6D8; // CUtlSymbolLarge
                pub const m_PathNodes_Name: usize = 0x6E0; // CUtlVector<CUtlSymbolLarge>
                pub const m_flParticleSpacing: usize = 0x6F8; // float32
                pub const m_flSlack: usize = 0x6FC; // float32
                pub const m_flRadius: usize = 0x700; // float32
                pub const m_ColorTint: usize = 0x704; // Color
                pub const m_nEffectState: usize = 0x708; // int32
                pub const m_iEffectIndex: usize = 0x710; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_PathNodes_Position: usize = 0x718; // C_NetworkUtlVectorBase<Vector>
                pub const m_PathNodes_TangentIn: usize = 0x730; // C_NetworkUtlVectorBase<Vector>
                pub const m_PathNodes_TangentOut: usize = 0x748; // C_NetworkUtlVectorBase<Vector>
                pub const m_PathNodes_Color: usize = 0x760; // C_NetworkUtlVectorBase<Vector>
                pub const m_PathNodes_PinEnabled: usize = 0x778; // C_NetworkUtlVectorBase<bool>
                pub const m_PathNodes_RadiusScale: usize = 0x790; // C_NetworkUtlVectorBase<float32>
            }
            // Parent: C_EconEntity
            // Fields count: 7
            //
            // Metadata:
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkIncludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByUserGroup
            // MNetworkUserGroupProxy
            // NetworkVarNames: m_nNextPrimaryAttackTick (GameTick_t)
            // NetworkVarNames: m_flNextPrimaryAttackTickRatio (float32)
            // NetworkVarNames: m_nNextSecondaryAttackTick (GameTick_t)
            // NetworkVarNames: m_flNextSecondaryAttackTickRatio (float32)
            // NetworkVarNames: m_iClip1 (int32)
            // NetworkVarNames: m_iClip2 (int32)
            // NetworkVarNames: m_pReserveAmmo (int)
            pub mod C_BasePlayerWeapon {
                pub const m_nNextPrimaryAttackTick: usize = 0x2460; // GameTick_t
                pub const m_flNextPrimaryAttackTickRatio: usize = 0x2464; // float32
                pub const m_nNextSecondaryAttackTick: usize = 0x2468; // GameTick_t
                pub const m_flNextSecondaryAttackTickRatio: usize = 0x246C; // float32
                pub const m_iClip1: usize = 0x2470; // int32
                pub const m_iClip2: usize = 0x2474; // int32
                pub const m_pReserveAmmo: usize = 0x2478; // int32[2]
            }
            // Parent: CEntitySubclassVDataBase
            // Fields count: 20
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBasePlayerWeaponVData {
                pub const m_szWorldModel: usize = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_bBuiltRightHanded: usize = 0x108; // bool
                pub const m_bAllowFlipping: usize = 0x109; // bool
                pub const m_sMuzzleAttachment: usize = 0x110; // CUtlString
                pub const m_szMuzzleFlashParticle: usize = 0x118; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                pub const m_iFlags: usize = 0x1F8; // ItemFlagTypes_t
                pub const m_nPrimaryAmmoType: usize = 0x1F9; // AmmoIndex_t
                pub const m_nSecondaryAmmoType: usize = 0x1FA; // AmmoIndex_t
                pub const m_iMaxClip1: usize = 0x1FC; // int32
                pub const m_iMaxClip2: usize = 0x200; // int32
                pub const m_iDefaultClip1: usize = 0x204; // int32
                pub const m_iDefaultClip2: usize = 0x208; // int32
                pub const m_iWeight: usize = 0x20C; // int32
                pub const m_bAutoSwitchTo: usize = 0x210; // bool
                pub const m_bAutoSwitchFrom: usize = 0x211; // bool
                pub const m_iRumbleEffect: usize = 0x214; // RumbleEffect_t
                pub const m_bLinkedCooldowns: usize = 0x218; // bool
                pub const m_aShootSounds: usize = 0x220; // CUtlMap<WeaponSound_t,CSoundEventName>
                pub const m_iSlot: usize = 0x240; // int32
                pub const m_iPosition: usize = 0x244; // int32
            }
            // Parent: C_BaseTrigger
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFluidDensity (float)
            pub mod C_TriggerBuoyancy {
                pub const m_BuoyancyHelper: usize = 0xC58; // CBuoyancyHelper
                pub const m_flFluidDensity: usize = 0xC78; // float32
            }
            // Parent: C_BaseModelEntity
            // Fields count: 41
            //
            // Metadata:
            // MNetworkIncludeByUserGroup
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_flScrollSpeed (float32)
            // NetworkVarNames: m_RopeFlags (uint16)
            // NetworkVarNames: m_iRopeMaterialModelIndex (HMaterialStrong)
            // NetworkVarNames: m_nSegments (uint8)
            // NetworkVarNames: m_hStartPoint (CHandle<C_BaseEntity>)
            // NetworkVarNames: m_hEndPoint (CHandle<C_BaseEntity>)
            // NetworkVarNames: m_iStartAttachment (AttachmentHandle_t)
            // NetworkVarNames: m_iEndAttachment (AttachmentHandle_t)
            // NetworkVarNames: m_Subdiv (uint8)
            // NetworkVarNames: m_RopeLength (int16)
            // NetworkVarNames: m_Slack (int16)
            // NetworkVarNames: m_TextureScale (float32)
            // NetworkVarNames: m_fLockedPoints (uint8)
            // NetworkVarNames: m_nChangeCount (uint8)
            // NetworkVarNames: m_Width (float32)
            // NetworkVarNames: m_bConstrainBetweenEndpoints (bool)
            pub mod C_RopeKeyframe {
                pub const m_LinksTouchingSomething: usize = 0xC58; // CBitVec<10>
                pub const m_nLinksTouchingSomething: usize = 0xC5C; // int32
                pub const m_bApplyWind: usize = 0xC60; // bool
                pub const m_fPrevLockedPoints: usize = 0xC64; // int32
                pub const m_iForcePointMoveCounter: usize = 0xC68; // int32
                pub const m_bPrevEndPointPos: usize = 0xC6C; // bool[2]
                pub const m_vPrevEndPointPos: usize = 0xC70; // Vector[2]
                pub const m_flCurScroll: usize = 0xC88; // float32
                pub const m_flScrollSpeed: usize = 0xC8C; // float32
                pub const m_RopeFlags: usize = 0xC90; // uint16
                pub const m_iRopeMaterialModelIndex: usize = 0xC98; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_LightValues: usize = 0xF10; // Vector[10]
                pub const m_nSegments: usize = 0xF88; // uint8
                pub const m_hStartPoint: usize = 0xF8C; // CHandle<C_BaseEntity>
                pub const m_hEndPoint: usize = 0xF90; // CHandle<C_BaseEntity>
                pub const m_iStartAttachment: usize = 0xF94; // AttachmentHandle_t
                pub const m_iEndAttachment: usize = 0xF95; // AttachmentHandle_t
                pub const m_Subdiv: usize = 0xF96; // uint8
                pub const m_RopeLength: usize = 0xF98; // int16
                pub const m_Slack: usize = 0xF9A; // int16
                pub const m_TextureScale: usize = 0xF9C; // float32
                pub const m_fLockedPoints: usize = 0xFA0; // uint8
                pub const m_nChangeCount: usize = 0xFA1; // uint8
                pub const m_Width: usize = 0xFA4; // float32
                pub const m_PhysicsDelegate: usize = 0xFA8; // C_RopeKeyframe::CPhysicsDelegate
                pub const m_hMaterial: usize = 0xFB8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_TextureHeight: usize = 0xFC0; // int32
                pub const m_vecImpulse: usize = 0xFC4; // Vector
                pub const m_vecPreviousImpulse: usize = 0xFD0; // Vector
                pub const m_flCurrentGustTimer: usize = 0xFDC; // float32
                pub const m_flCurrentGustLifetime: usize = 0xFE0; // float32
                pub const m_flTimeToNextGust: usize = 0xFE4; // float32
                pub const m_vWindDir: usize = 0xFE8; // Vector
                pub const m_vColorMod: usize = 0xFF4; // Vector
                pub const m_vCachedEndPointAttachmentPos: usize = 0x1000; // Vector[2]
                pub const m_vCachedEndPointAttachmentAngle: usize = 0x1018; // QAngle[2]
                pub const m_bConstrainBetweenEndpoints: usize = 0x1030; // bool
                pub const m_bEndPointAttachmentPositionsDirty: usize = 0x0; // bitfield:1
                pub const m_bEndPointAttachmentAnglesDirty: usize = 0x0; // bitfield:1
                pub const m_bNewDataThisFrame: usize = 0x0; // bitfield:1
                pub const m_bPhysicsInitted: usize = 0x0; // bitfield:1
            }
            // Parent: C_BaseEntity
            // Fields count: 16
            //
            // Metadata:
            // NetworkVarNames: m_hGradientFogTexture (HRenderTextureStrong)
            // NetworkVarNames: m_flFogStartDistance (float)
            // NetworkVarNames: m_flFogEndDistance (float)
            // NetworkVarNames: m_bHeightFogEnabled (bool)
            // NetworkVarNames: m_flFogStartHeight (float)
            // NetworkVarNames: m_flFogEndHeight (float)
            // NetworkVarNames: m_flFarZ (float)
            // NetworkVarNames: m_flFogMaxOpacity (float)
            // NetworkVarNames: m_flFogFalloffExponent (float)
            // NetworkVarNames: m_flFogVerticalExponent (float)
            // NetworkVarNames: m_fogColor (Color)
            // NetworkVarNames: m_flFogStrength (float)
            // NetworkVarNames: m_flFadeTime (float)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_bIsEnabled (bool)
            pub mod C_GradientFog {
                pub const m_hGradientFogTexture: usize = 0x6D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_flFogStartDistance: usize = 0x6D8; // float32
                pub const m_flFogEndDistance: usize = 0x6DC; // float32
                pub const m_bHeightFogEnabled: usize = 0x6E0; // bool
                pub const m_flFogStartHeight: usize = 0x6E4; // float32
                pub const m_flFogEndHeight: usize = 0x6E8; // float32
                pub const m_flFarZ: usize = 0x6EC; // float32
                pub const m_flFogMaxOpacity: usize = 0x6F0; // float32
                pub const m_flFogFalloffExponent: usize = 0x6F4; // float32
                pub const m_flFogVerticalExponent: usize = 0x6F8; // float32
                pub const m_fogColor: usize = 0x6FC; // Color
                pub const m_flFogStrength: usize = 0x700; // float32
                pub const m_flFadeTime: usize = 0x704; // float32
                pub const m_bStartDisabled: usize = 0x708; // bool
                pub const m_bIsEnabled: usize = 0x709; // bool
                pub const m_bGradientFogNeedsTextures: usize = 0x70A; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bSpotted (bool)
            // NetworkVarNames: m_bSpottedByMask (uint32)
            pub mod EntitySpottedState_t {
                pub const m_bSpotted: usize = 0x8; // bool
                pub const m_bSpottedByMask: usize = 0xC; // uint32[2]
            }
            // Parent: C_EconEntity
            // Fields count: 2
            pub mod C_EconWearable {
                pub const m_nForceSkin: usize = 0x2460; // int32
                pub const m_bAlwaysAllow: usize = 0x2464; // bool
            }
            // Parent: C_CSGO_TeamIntroCharacterPosition
            // Fields count: 0
            pub mod CCSGO_WingmanIntroCharacterPosition {
            }
            // Parent: CSPerRoundStats_t
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_iEnemy5Ks (int)
            // NetworkVarNames: m_iEnemy4Ks (int)
            // NetworkVarNames: m_iEnemy3Ks (int)
            // NetworkVarNames: m_iEnemyKnifeKills (int)
            // NetworkVarNames: m_iEnemyTaserKills (int)
            pub mod CSMatchStats_t {
                pub const m_iEnemy5Ks: usize = 0x64; // int32
                pub const m_iEnemy4Ks: usize = 0x68; // int32
                pub const m_iEnemy3Ks: usize = 0x6C; // int32
                pub const m_iEnemyKnifeKills: usize = 0x70; // int32
                pub const m_iEnemyTaserKills: usize = 0x74; // int32
            }
            // Parent: C_BaseModelEntity
            // Fields count: 0
            pub mod C_BaseToggle {
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            pub mod C_WeaponRevolver {
            }
            // Parent: C_Sprite
            // Fields count: 0
            pub mod C_FireFromAboveSprite {
            }
            // Parent: C_BaseEntity
            // Fields count: 24
            //
            // Metadata:
            // NetworkVarNames: m_Color (Color)
            // NetworkVarNames: m_flBrightness (float)
            // NetworkVarNames: m_hCubemapTexture (HRenderTextureStrong)
            // NetworkVarNames: m_bCustomCubemapTexture (bool)
            // NetworkVarNames: m_hLightProbeTexture (HRenderTextureStrong)
            // NetworkVarNames: m_hLightProbeDirectLightIndicesTexture (HRenderTextureStrong)
            // NetworkVarNames: m_hLightProbeDirectLightScalarsTexture (HRenderTextureStrong)
            // NetworkVarNames: m_hLightProbeDirectLightShadowsTexture (HRenderTextureStrong)
            // NetworkVarNames: m_vBoxMins (Vector)
            // NetworkVarNames: m_vBoxMaxs (Vector)
            // NetworkVarNames: m_bMoveable (bool)
            // NetworkVarNames: m_nHandshake (int)
            // NetworkVarNames: m_nEnvCubeMapArrayIndex (int)
            // NetworkVarNames: m_nPriority (int)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_flEdgeFadeDist (float)
            // NetworkVarNames: m_vEdgeFadeDists (Vector)
            // NetworkVarNames: m_nLightProbeSizeX (int)
            // NetworkVarNames: m_nLightProbeSizeY (int)
            // NetworkVarNames: m_nLightProbeSizeZ (int)
            // NetworkVarNames: m_nLightProbeAtlasX (int)
            // NetworkVarNames: m_nLightProbeAtlasY (int)
            // NetworkVarNames: m_nLightProbeAtlasZ (int)
            // NetworkVarNames: m_bEnabled (bool)
            pub mod C_EnvCombinedLightProbeVolume {
                pub const m_Color: usize = 0x1728; // Color
                pub const m_flBrightness: usize = 0x172C; // float32
                pub const m_hCubemapTexture: usize = 0x1730; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_bCustomCubemapTexture: usize = 0x1738; // bool
                pub const m_hLightProbeTexture: usize = 0x1740; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_hLightProbeDirectLightIndicesTexture: usize = 0x1748; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_hLightProbeDirectLightScalarsTexture: usize = 0x1750; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_hLightProbeDirectLightShadowsTexture: usize = 0x1758; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_vBoxMins: usize = 0x1760; // Vector
                pub const m_vBoxMaxs: usize = 0x176C; // Vector
                pub const m_bMoveable: usize = 0x1778; // bool
                pub const m_nHandshake: usize = 0x177C; // int32
                pub const m_nEnvCubeMapArrayIndex: usize = 0x1780; // int32
                pub const m_nPriority: usize = 0x1784; // int32
                pub const m_bStartDisabled: usize = 0x1788; // bool
                pub const m_flEdgeFadeDist: usize = 0x178C; // float32
                pub const m_vEdgeFadeDists: usize = 0x1790; // Vector
                pub const m_nLightProbeSizeX: usize = 0x179C; // int32
                pub const m_nLightProbeSizeY: usize = 0x17A0; // int32
                pub const m_nLightProbeSizeZ: usize = 0x17A4; // int32
                pub const m_nLightProbeAtlasX: usize = 0x17A8; // int32
                pub const m_nLightProbeAtlasY: usize = 0x17AC; // int32
                pub const m_nLightProbeAtlasZ: usize = 0x17B0; // int32
                pub const m_bEnabled: usize = 0x17C9; // bool
            }
            // Parent: C_SoundOpvarSetPointBase
            // Fields count: 0
            pub mod C_SoundOpvarSetOBBWindEntity {
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_Handle (ModelConfigHandle_t)
            // NetworkVarNames: m_Name (string_t)
            // NetworkVarNames: m_AssociatedEntities (CHandle<C_BaseModelEntity>)
            // NetworkVarNames: m_AssociatedEntityNames (string_t)
            pub mod ActiveModelConfig_t {
                pub const m_Handle: usize = 0x28; // ModelConfigHandle_t
                pub const m_Name: usize = 0x30; // CUtlSymbolLarge
                pub const m_AssociatedEntities: usize = 0x38; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                pub const m_AssociatedEntityNames: usize = 0x50; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            pub mod C_WeaponMP5SD {
            }
            // Parent: C_PointCamera
            // Fields count: 1
            pub mod C_PointCameraVFOV {
                pub const m_flVerticalFOV: usize = 0x730; // float32
            }
            // Parent: CPlayer_ItemServices
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_bHasDefuser (bool)
            // NetworkVarNames: m_bHasHelmet (bool)
            // NetworkVarNames: m_bHasHeavyArmor (bool)
            pub mod CCSPlayer_ItemServices {
                pub const m_bHasDefuser: usize = 0x40; // bool
                pub const m_bHasHelmet: usize = 0x41; // bool
                pub const m_bHasHeavyArmor: usize = 0x42; // bool
            }
            // Parent: C_BaseModelEntity
            // Fields count: 51
            //
            // Metadata:
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_nColorMode (int)
            // NetworkVarNames: m_Color (Color)
            // NetworkVarNames: m_flColorTemperature (float)
            // NetworkVarNames: m_flBrightness (float)
            // NetworkVarNames: m_flBrightnessScale (float)
            // NetworkVarNames: m_nDirectLight (int)
            // NetworkVarNames: m_nBakedShadowIndex (int)
            // NetworkVarNames: m_nLuminaireShape (int)
            // NetworkVarNames: m_flLuminaireSize (float)
            // NetworkVarNames: m_flLuminaireAnisotropy (float)
            // NetworkVarNames: m_LightStyleString (CUtlString)
            // NetworkVarNames: m_flLightStyleStartTime (GameTime_t)
            // NetworkVarNames: m_QueuedLightStyleStrings (CUtlString)
            // NetworkVarNames: m_LightStyleEvents (CUtlString)
            // NetworkVarNames: m_LightStyleTargets (CHandle<C_BaseModelEntity>)
            // NetworkVarNames: m_hLightCookie (HRenderTextureStrong)
            // NetworkVarNames: m_flShape (float)
            // NetworkVarNames: m_flSoftX (float)
            // NetworkVarNames: m_flSoftY (float)
            // NetworkVarNames: m_flSkirt (float)
            // NetworkVarNames: m_flSkirtNear (float)
            // NetworkVarNames: m_vSizeParams (Vector)
            // NetworkVarNames: m_flRange (float)
            // NetworkVarNames: m_vShear (Vector)
            // NetworkVarNames: m_nBakeSpecularToCubemaps (int)
            // NetworkVarNames: m_vBakeSpecularToCubemapsSize (Vector)
            // NetworkVarNames: m_nCastShadows (int)
            // NetworkVarNames: m_nShadowMapSize (int)
            // NetworkVarNames: m_nShadowPriority (int)
            // NetworkVarNames: m_bContactShadow (bool)
            // NetworkVarNames: m_nBounceLight (int)
            // NetworkVarNames: m_flBounceScale (float)
            // NetworkVarNames: m_flMinRoughness (float)
            // NetworkVarNames: m_vAlternateColor (Vector)
            // NetworkVarNames: m_fAlternateColorBrightness (float)
            // NetworkVarNames: m_nFog (int)
            // NetworkVarNames: m_flFogStrength (float)
            // NetworkVarNames: m_nFogShadows (int)
            // NetworkVarNames: m_flFogScale (float)
            // NetworkVarNames: m_flFadeSizeStart (float)
            // NetworkVarNames: m_flFadeSizeEnd (float)
            // NetworkVarNames: m_flShadowFadeSizeStart (float)
            // NetworkVarNames: m_flShadowFadeSizeEnd (float)
            // NetworkVarNames: m_bPrecomputedFieldsValid (bool)
            // NetworkVarNames: m_vPrecomputedBoundsMins (Vector)
            // NetworkVarNames: m_vPrecomputedBoundsMaxs (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent (Vector)
            pub mod C_BarnLight {
                pub const m_bEnabled: usize = 0xC50; // bool
                pub const m_nColorMode: usize = 0xC54; // int32
                pub const m_Color: usize = 0xC58; // Color
                pub const m_flColorTemperature: usize = 0xC5C; // float32
                pub const m_flBrightness: usize = 0xC60; // float32
                pub const m_flBrightnessScale: usize = 0xC64; // float32
                pub const m_nDirectLight: usize = 0xC68; // int32
                pub const m_nBakedShadowIndex: usize = 0xC6C; // int32
                pub const m_nLuminaireShape: usize = 0xC70; // int32
                pub const m_flLuminaireSize: usize = 0xC74; // float32
                pub const m_flLuminaireAnisotropy: usize = 0xC78; // float32
                pub const m_LightStyleString: usize = 0xC80; // CUtlString
                pub const m_flLightStyleStartTime: usize = 0xC88; // GameTime_t
                pub const m_QueuedLightStyleStrings: usize = 0xC90; // C_NetworkUtlVectorBase<CUtlString>
                pub const m_LightStyleEvents: usize = 0xCA8; // C_NetworkUtlVectorBase<CUtlString>
                pub const m_LightStyleTargets: usize = 0xCC0; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                pub const m_StyleEvent: usize = 0xCD8; // CEntityIOOutput[4]
                pub const m_hLightCookie: usize = 0xD78; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_flShape: usize = 0xD80; // float32
                pub const m_flSoftX: usize = 0xD84; // float32
                pub const m_flSoftY: usize = 0xD88; // float32
                pub const m_flSkirt: usize = 0xD8C; // float32
                pub const m_flSkirtNear: usize = 0xD90; // float32
                pub const m_vSizeParams: usize = 0xD94; // Vector
                pub const m_flRange: usize = 0xDA0; // float32
                pub const m_vShear: usize = 0xDA4; // Vector
                pub const m_nBakeSpecularToCubemaps: usize = 0xDB0; // int32
                pub const m_vBakeSpecularToCubemapsSize: usize = 0xDB4; // Vector
                pub const m_nCastShadows: usize = 0xDC0; // int32
                pub const m_nShadowMapSize: usize = 0xDC4; // int32
                pub const m_nShadowPriority: usize = 0xDC8; // int32
                pub const m_bContactShadow: usize = 0xDCC; // bool
                pub const m_nBounceLight: usize = 0xDD0; // int32
                pub const m_flBounceScale: usize = 0xDD4; // float32
                pub const m_flMinRoughness: usize = 0xDD8; // float32
                pub const m_vAlternateColor: usize = 0xDDC; // Vector
                pub const m_fAlternateColorBrightness: usize = 0xDE8; // float32
                pub const m_nFog: usize = 0xDEC; // int32
                pub const m_flFogStrength: usize = 0xDF0; // float32
                pub const m_nFogShadows: usize = 0xDF4; // int32
                pub const m_flFogScale: usize = 0xDF8; // float32
                pub const m_flFadeSizeStart: usize = 0xDFC; // float32
                pub const m_flFadeSizeEnd: usize = 0xE00; // float32
                pub const m_flShadowFadeSizeStart: usize = 0xE04; // float32
                pub const m_flShadowFadeSizeEnd: usize = 0xE08; // float32
                pub const m_bPrecomputedFieldsValid: usize = 0xE0C; // bool
                pub const m_vPrecomputedBoundsMins: usize = 0xE10; // Vector
                pub const m_vPrecomputedBoundsMaxs: usize = 0xE1C; // Vector
                pub const m_vPrecomputedOBBOrigin: usize = 0xE28; // Vector
                pub const m_vPrecomputedOBBAngles: usize = 0xE34; // QAngle
                pub const m_vPrecomputedOBBExtent: usize = 0xE40; // Vector
            }
            // Parent: C_BaseEntity
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_flAutoExposureMin (float)
            // NetworkVarNames: m_flAutoExposureMax (float)
            // NetworkVarNames: m_flTonemapPercentTarget (float)
            // NetworkVarNames: m_flTonemapPercentBrightPixels (float)
            // NetworkVarNames: m_flTonemapMinAvgLum (float)
            // NetworkVarNames: m_flExposureAdaptationSpeedUp (float)
            // NetworkVarNames: m_flExposureAdaptationSpeedDown (float)
            // NetworkVarNames: m_flTonemapEVSmoothingRange (float)
            pub mod C_TonemapController2 {
                pub const m_flAutoExposureMin: usize = 0x6D0; // float32
                pub const m_flAutoExposureMax: usize = 0x6D4; // float32
                pub const m_flTonemapPercentTarget: usize = 0x6D8; // float32
                pub const m_flTonemapPercentBrightPixels: usize = 0x6DC; // float32
                pub const m_flTonemapMinAvgLum: usize = 0x6E0; // float32
                pub const m_flExposureAdaptationSpeedUp: usize = 0x6E4; // float32
                pub const m_flExposureAdaptationSpeedDown: usize = 0x6E8; // float32
                pub const m_flTonemapEVSmoothingRange: usize = 0x6EC; // float32
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            pub mod C_WeaponSG556 {
            }
            // Parent: C_BarnLight
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bShowLight (bool)
            pub mod C_RectLight {
                pub const m_bShowLight: usize = 0xE98; // bool
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 6
            //
            // Metadata:
            // NetworkVarNames: m_iObserverMode (uint8)
            // NetworkVarNames: m_hObserverTarget (CHandle<CBaseEntity>)
            pub mod CPlayer_ObserverServices {
                pub const m_iObserverMode: usize = 0x40; // uint8
                pub const m_hObserverTarget: usize = 0x44; // CHandle<C_BaseEntity>
                pub const m_iObserverLastMode: usize = 0x48; // ObserverMode_t
                pub const m_bForcedObserverMode: usize = 0x4C; // bool
                pub const m_flObserverChaseDistance: usize = 0x50; // float32
                pub const m_flObserverChaseDistanceCalcTime: usize = 0x54; // GameTime_t
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            pub mod CWeaponZoneRepulsor {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            pub mod CPlayer_WaterServices {
            }
            // Parent: C_BaseModelEntity
            // Fields count: 9
            //
            // Metadata:
            // NetworkVarNames: m_hDecalMaterial (HMaterialStrong)
            // NetworkVarNames: m_flWidth (float)
            // NetworkVarNames: m_flHeight (float)
            // NetworkVarNames: m_flDepth (float)
            // NetworkVarNames: m_nRenderOrder (uint32)
            // NetworkVarNames: m_bProjectOnWorld (bool)
            // NetworkVarNames: m_bProjectOnCharacters (bool)
            // NetworkVarNames: m_bProjectOnWater (bool)
            // NetworkVarNames: m_flDepthSortBias (float)
            pub mod C_EnvDecal {
                pub const m_hDecalMaterial: usize = 0xC50; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_flWidth: usize = 0xC58; // float32
                pub const m_flHeight: usize = 0xC5C; // float32
                pub const m_flDepth: usize = 0xC60; // float32
                pub const m_nRenderOrder: usize = 0xC64; // uint32
                pub const m_bProjectOnWorld: usize = 0xC68; // bool
                pub const m_bProjectOnCharacters: usize = 0xC69; // bool
                pub const m_bProjectOnWater: usize = 0xC6A; // bool
                pub const m_flDepthSortBias: usize = 0xC6C; // float32
            }
            // Parent: CCSGameModeRules
            // Fields count: 0
            pub mod CCSGameModeRules_Noop {
            }
            // Parent: C_BaseEntity
            // Fields count: 18
            //
            // Metadata:
            // MNetworkIncludeByUserGroup
            // NetworkVarNames: m_MinFalloff (float32)
            // NetworkVarNames: m_MaxFalloff (float32)
            // NetworkVarNames: m_flFadeInDuration (float32)
            // NetworkVarNames: m_flFadeOutDuration (float32)
            // NetworkVarNames: m_flMaxWeight (float32)
            // NetworkVarNames: m_flCurWeight (float32)
            // NetworkVarNames: m_netlookupFilename (char)
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_bMaster (bool)
            // NetworkVarNames: m_bClientSide (bool)
            // NetworkVarNames: m_bExclusive (bool)
            pub mod C_ColorCorrection {
                pub const m_vecOrigin: usize = 0x6D0; // Vector
                pub const m_MinFalloff: usize = 0x6DC; // float32
                pub const m_MaxFalloff: usize = 0x6E0; // float32
                pub const m_flFadeInDuration: usize = 0x6E4; // float32
                pub const m_flFadeOutDuration: usize = 0x6E8; // float32
                pub const m_flMaxWeight: usize = 0x6EC; // float32
                pub const m_flCurWeight: usize = 0x6F0; // float32
                pub const m_netlookupFilename: usize = 0x6F4; // char[512]
                pub const m_bEnabled: usize = 0x8F4; // bool
                pub const m_bMaster: usize = 0x8F5; // bool
                pub const m_bClientSide: usize = 0x8F6; // bool
                pub const m_bExclusive: usize = 0x8F7; // bool
                pub const m_bEnabledOnClient: usize = 0x8F8; // bool[1]
                pub const m_flCurWeightOnClient: usize = 0x8FC; // float32[1]
                pub const m_bFadingIn: usize = 0x900; // bool[1]
                pub const m_flFadeStartWeight: usize = 0x904; // float32[1]
                pub const m_flFadeStartTime: usize = 0x908; // float32[1]
                pub const m_flFadeDuration: usize = 0x90C; // float32[1]
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            pub mod CCSWeaponBaseAPI {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Attributes (CEconItemAttribute)
            pub mod CAttributeList {
                pub const m_Attributes: usize = 0x8; // C_UtlVectorEmbeddedNetworkVar<CEconItemAttribute>
                pub const m_pManager: usize = 0x58; // CAttributeManager*
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Fields count: 0
            pub mod C_CSGO_CounterTerroristWingmanIntroCamera {
            }
            // Parent: CEntityComponent
            // Fields count: 66
            //
            // Metadata:
            // NetworkVarNames: m_Color (Color)
            // NetworkVarNames: m_SecondaryColor (Color)
            // NetworkVarNames: m_flBrightness (float)
            // NetworkVarNames: m_flBrightnessScale (float)
            // NetworkVarNames: m_flBrightnessMult (float)
            // NetworkVarNames: m_flRange (float)
            // NetworkVarNames: m_flFalloff (float)
            // NetworkVarNames: m_flAttenuation0 (float)
            // NetworkVarNames: m_flAttenuation1 (float)
            // NetworkVarNames: m_flAttenuation2 (float)
            // NetworkVarNames: m_flTheta (float)
            // NetworkVarNames: m_flPhi (float)
            // NetworkVarNames: m_hLightCookie (HRenderTextureStrong)
            // NetworkVarNames: m_nCascades (int)
            // NetworkVarNames: m_nCastShadows (int)
            // NetworkVarNames: m_nShadowWidth (int)
            // NetworkVarNames: m_nShadowHeight (int)
            // NetworkVarNames: m_bRenderDiffuse (bool)
            // NetworkVarNames: m_nRenderSpecular (int)
            // NetworkVarNames: m_bRenderTransmissive (bool)
            // NetworkVarNames: m_flOrthoLightWidth (float)
            // NetworkVarNames: m_flOrthoLightHeight (float)
            // NetworkVarNames: m_nStyle (int)
            // NetworkVarNames: m_Pattern (CUtlString)
            // NetworkVarNames: m_nCascadeRenderStaticObjects (int)
            // NetworkVarNames: m_flShadowCascadeCrossFade (float)
            // NetworkVarNames: m_flShadowCascadeDistanceFade (float)
            // NetworkVarNames: m_flShadowCascadeDistance0 (float)
            // NetworkVarNames: m_flShadowCascadeDistance1 (float)
            // NetworkVarNames: m_flShadowCascadeDistance2 (float)
            // NetworkVarNames: m_flShadowCascadeDistance3 (float)
            // NetworkVarNames: m_nShadowCascadeResolution0 (int)
            // NetworkVarNames: m_nShadowCascadeResolution1 (int)
            // NetworkVarNames: m_nShadowCascadeResolution2 (int)
            // NetworkVarNames: m_nShadowCascadeResolution3 (int)
            // NetworkVarNames: m_bUsesBakedShadowing (bool)
            // NetworkVarNames: m_nShadowPriority (int)
            // NetworkVarNames: m_nBakedShadowIndex (int)
            // NetworkVarNames: m_bRenderToCubemaps (bool)
            // NetworkVarNames: m_nDirectLight (int)
            // NetworkVarNames: m_nIndirectLight (int)
            // NetworkVarNames: m_flFadeMinDist (float)
            // NetworkVarNames: m_flFadeMaxDist (float)
            // NetworkVarNames: m_flShadowFadeMinDist (float)
            // NetworkVarNames: m_flShadowFadeMaxDist (float)
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_bFlicker (bool)
            // NetworkVarNames: m_bPrecomputedFieldsValid (bool)
            // NetworkVarNames: m_vPrecomputedBoundsMins (Vector)
            // NetworkVarNames: m_vPrecomputedBoundsMaxs (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent (Vector)
            // NetworkVarNames: m_flPrecomputedMaxRange (float)
            // NetworkVarNames: m_nFogLightingMode (int)
            // NetworkVarNames: m_flFogContributionStength (float)
            // NetworkVarNames: m_flNearClipPlane (float)
            // NetworkVarNames: m_SkyColor (Color)
            // NetworkVarNames: m_flSkyIntensity (float)
            // NetworkVarNames: m_SkyAmbientBounce (Color)
            // NetworkVarNames: m_bUseSecondaryColor (bool)
            // NetworkVarNames: m_bMixedShadows (bool)
            // NetworkVarNames: m_flLightStyleStartTime (GameTime_t)
            // NetworkVarNames: m_flCapsuleLength (float)
            // NetworkVarNames: m_flMinRoughness (float)
            pub mod CLightComponent {
                pub const __m_pChainEntity: usize = 0x58; // CNetworkVarChainer
                pub const m_Color: usize = 0x95; // Color
                pub const m_SecondaryColor: usize = 0x99; // Color
                pub const m_flBrightness: usize = 0xA0; // float32
                pub const m_flBrightnessScale: usize = 0xA4; // float32
                pub const m_flBrightnessMult: usize = 0xA8; // float32
                pub const m_flRange: usize = 0xAC; // float32
                pub const m_flFalloff: usize = 0xB0; // float32
                pub const m_flAttenuation0: usize = 0xB4; // float32
                pub const m_flAttenuation1: usize = 0xB8; // float32
                pub const m_flAttenuation2: usize = 0xBC; // float32
                pub const m_flTheta: usize = 0xC0; // float32
                pub const m_flPhi: usize = 0xC4; // float32
                pub const m_hLightCookie: usize = 0xC8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_nCascades: usize = 0xD0; // int32
                pub const m_nCastShadows: usize = 0xD4; // int32
                pub const m_nShadowWidth: usize = 0xD8; // int32
                pub const m_nShadowHeight: usize = 0xDC; // int32
                pub const m_bRenderDiffuse: usize = 0xE0; // bool
                pub const m_nRenderSpecular: usize = 0xE4; // int32
                pub const m_bRenderTransmissive: usize = 0xE8; // bool
                pub const m_flOrthoLightWidth: usize = 0xEC; // float32
                pub const m_flOrthoLightHeight: usize = 0xF0; // float32
                pub const m_nStyle: usize = 0xF4; // int32
                pub const m_Pattern: usize = 0xF8; // CUtlString
                pub const m_nCascadeRenderStaticObjects: usize = 0x100; // int32
                pub const m_flShadowCascadeCrossFade: usize = 0x104; // float32
                pub const m_flShadowCascadeDistanceFade: usize = 0x108; // float32
                pub const m_flShadowCascadeDistance0: usize = 0x10C; // float32
                pub const m_flShadowCascadeDistance1: usize = 0x110; // float32
                pub const m_flShadowCascadeDistance2: usize = 0x114; // float32
                pub const m_flShadowCascadeDistance3: usize = 0x118; // float32
                pub const m_nShadowCascadeResolution0: usize = 0x11C; // int32
                pub const m_nShadowCascadeResolution1: usize = 0x120; // int32
                pub const m_nShadowCascadeResolution2: usize = 0x124; // int32
                pub const m_nShadowCascadeResolution3: usize = 0x128; // int32
                pub const m_bUsesBakedShadowing: usize = 0x12C; // bool
                pub const m_nShadowPriority: usize = 0x130; // int32
                pub const m_nBakedShadowIndex: usize = 0x134; // int32
                pub const m_bRenderToCubemaps: usize = 0x138; // bool
                pub const m_nDirectLight: usize = 0x13C; // int32
                pub const m_nIndirectLight: usize = 0x140; // int32
                pub const m_flFadeMinDist: usize = 0x144; // float32
                pub const m_flFadeMaxDist: usize = 0x148; // float32
                pub const m_flShadowFadeMinDist: usize = 0x14C; // float32
                pub const m_flShadowFadeMaxDist: usize = 0x150; // float32
                pub const m_bEnabled: usize = 0x154; // bool
                pub const m_bFlicker: usize = 0x155; // bool
                pub const m_bPrecomputedFieldsValid: usize = 0x156; // bool
                pub const m_vPrecomputedBoundsMins: usize = 0x158; // Vector
                pub const m_vPrecomputedBoundsMaxs: usize = 0x164; // Vector
                pub const m_vPrecomputedOBBOrigin: usize = 0x170; // Vector
                pub const m_vPrecomputedOBBAngles: usize = 0x17C; // QAngle
                pub const m_vPrecomputedOBBExtent: usize = 0x188; // Vector
                pub const m_flPrecomputedMaxRange: usize = 0x194; // float32
                pub const m_nFogLightingMode: usize = 0x198; // int32
                pub const m_flFogContributionStength: usize = 0x19C; // float32
                pub const m_flNearClipPlane: usize = 0x1A0; // float32
                pub const m_SkyColor: usize = 0x1A4; // Color
                pub const m_flSkyIntensity: usize = 0x1A8; // float32
                pub const m_SkyAmbientBounce: usize = 0x1AC; // Color
                pub const m_bUseSecondaryColor: usize = 0x1B0; // bool
                pub const m_bMixedShadows: usize = 0x1B1; // bool
                pub const m_flLightStyleStartTime: usize = 0x1B4; // GameTime_t
                pub const m_flCapsuleLength: usize = 0x1B8; // float32
                pub const m_flMinRoughness: usize = 0x1BC; // float32
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Fields count: 0
            pub mod C_CSGO_CounterTerroristTeamIntroCamera {
            }
            // Parent: None
            // Fields count: 0
            pub mod CEntityComponent {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 15
            //
            // Metadata:
            // NetworkVarNames: m_nToggleButtonDownMask (ButtonBitMask_t)
            // NetworkVarNames: m_flMaxspeed (float32)
            // NetworkVarNames: m_arrForceSubtickMoveWhen (float32)
            pub mod CPlayer_MovementServices {
                pub const m_nImpulse: usize = 0x40; // int32
                pub const m_nButtons: usize = 0x48; // CInButtonState
                pub const m_nQueuedButtonDownMask: usize = 0x68; // uint64
                pub const m_nQueuedButtonChangeMask: usize = 0x70; // uint64
                pub const m_nButtonDoublePressed: usize = 0x78; // uint64
                pub const m_pButtonPressedCmdNumber: usize = 0x80; // uint32[64]
                pub const m_nLastCommandNumberProcessed: usize = 0x180; // uint32
                pub const m_nToggleButtonDownMask: usize = 0x188; // uint64
                pub const m_flMaxspeed: usize = 0x198; // float32
                pub const m_arrForceSubtickMoveWhen: usize = 0x19C; // float32[4]
                pub const m_flForwardMove: usize = 0x1AC; // float32
                pub const m_flLeftMove: usize = 0x1B0; // float32
                pub const m_flUpMove: usize = 0x1B4; // float32
                pub const m_vecLastMovementImpulses: usize = 0x1B8; // Vector
                pub const m_vecOldViewAngles: usize = 0x1C4; // QAngle
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            pub mod C_WeaponUSPSilencer {
            }
            // Parent: C_CSGO_EndOfMatchLineupEndpoint
            // Fields count: 0
            pub mod C_CSGO_EndOfMatchLineupStart {
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            pub mod C_WeaponFamas {
            }
            // Parent: C_ParticleSystem
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_flAlphaScale (float32)
            // NetworkVarNames: m_flRadiusScale (float32)
            // NetworkVarNames: m_flSelfIllumScale (float32)
            // NetworkVarNames: m_ColorTint (Color)
            // NetworkVarNames: m_hTextureOverride (HRenderTextureStrong)
            pub mod C_EnvParticleGlow {
                pub const m_flAlphaScale: usize = 0x1200; // float32
                pub const m_flRadiusScale: usize = 0x1204; // float32
                pub const m_flSelfIllumScale: usize = 0x1208; // float32
                pub const m_ColorTint: usize = 0x120C; // Color
                pub const m_hTextureOverride: usize = 0x1210; // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
            // Parent: C_BaseEntity
            // Fields count: 0
            pub mod C_CSGO_EndOfMatchLineupEndpoint {
            }
            // Parent: CPlayerControllerComponent
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_perRoundStats (CSPerRoundStats_t)
            // NetworkVarNames: m_matchStats (CSMatchStats_t)
            // NetworkVarNames: m_iNumRoundKills (int)
            // NetworkVarNames: m_iNumRoundKillsHeadshots (int)
            // NetworkVarNames: m_unTotalRoundDamageDealt (uint32)
            pub mod CCSPlayerController_ActionTrackingServices {
                pub const m_perRoundStats: usize = 0x40; // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
                pub const m_matchStats: usize = 0x90; // CSMatchStats_t
                pub const m_iNumRoundKills: usize = 0x108; // int32
                pub const m_iNumRoundKillsHeadshots: usize = 0x10C; // int32
                pub const m_unTotalRoundDamageDealt: usize = 0x110; // uint32
            }
            // Parent: CEntityComponent
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bvDisabledHitGroups (uint32)
            pub mod CHitboxComponent {
                pub const m_bvDisabledHitGroups: usize = 0x24; // uint32[1]
            }
            // Parent: C_BaseTrigger
            // Fields count: 9
            //
            // Metadata:
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_MaxWeight (float)
            // NetworkVarNames: m_FadeDuration (float)
            // NetworkVarNames: m_Weight (float)
            // NetworkVarNames: m_lookupFilename (char)
            pub mod C_ColorCorrectionVolume {
                pub const m_LastEnterWeight: usize = 0xC54; // float32
                pub const m_LastEnterTime: usize = 0xC58; // float32
                pub const m_LastExitWeight: usize = 0xC5C; // float32
                pub const m_LastExitTime: usize = 0xC60; // float32
                pub const m_bEnabled: usize = 0xC64; // bool
                pub const m_MaxWeight: usize = 0xC68; // float32
                pub const m_FadeDuration: usize = 0xC6C; // float32
                pub const m_Weight: usize = 0xC70; // float32
                pub const m_lookupFilename: usize = 0xC74; // char[512]
            }
            // Parent: C_BaseModelEntity
            // Fields count: 0
            pub mod C_PrecipitationBlocker {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_weaponPurchases (WeaponPurchaseCount_t)
            pub mod WeaponPurchaseTracker_t {
                pub const m_weaponPurchases: usize = 0x8; // C_UtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_nMatchSeed (int)
            // NetworkVarNames: m_bBlockersPresent (bool)
            // NetworkVarNames: m_bRoundInProgress (bool)
            // NetworkVarNames: m_iFirstSecondHalfRound (int)
            // NetworkVarNames: m_iBombSite (int)
            pub mod C_RetakeGameRules {
                pub const m_nMatchSeed: usize = 0xF8; // int32
                pub const m_bBlockersPresent: usize = 0xFC; // bool
                pub const m_bRoundInProgress: usize = 0xFD; // bool
                pub const m_iFirstSecondHalfRound: usize = 0x100; // int32
                pub const m_iBombSite: usize = 0x104; // int32
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            pub mod CCSPlayer_GlowServices {
            }
            // Parent: None
            // Fields count: 5
            pub mod C_BaseFlex__Emphasized_Phoneme {
                pub const m_sClassName: usize = 0x0; // CUtlString
                pub const m_flAmount: usize = 0x18; // float32
                pub const m_bRequired: usize = 0x1C; // bool
                pub const m_bBasechecked: usize = 0x1D; // bool
                pub const m_bValid: usize = 0x1E; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            pub mod IntervalTimer {
                pub const m_timestamp: usize = 0x8; // GameTime_t
                pub const m_nWorldGroupId: usize = 0xC; // WorldGroupId_t
            }
            // Parent: C_BaseFlex
            // Fields count: 12
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // NetworkVarNames: m_bIsLive (bool)
            // NetworkVarNames: m_DmgRadius (float32)
            // NetworkVarNames: m_flDetonateTime (GameTime_t)
            // NetworkVarNames: m_flDamage (float32)
            // NetworkVarNames: m_hThrower (CHandle<CCSPlayerPawn>)
            pub mod C_BaseGrenade {
                pub const m_bHasWarnedAI: usize = 0x1010; // bool
                pub const m_bIsSmokeGrenade: usize = 0x1011; // bool
                pub const m_bIsLive: usize = 0x1012; // bool
                pub const m_DmgRadius: usize = 0x1014; // float32
                pub const m_flDetonateTime: usize = 0x1018; // GameTime_t
                pub const m_flWarnAITime: usize = 0x101C; // float32
                pub const m_flDamage: usize = 0x1020; // float32
                pub const m_iszBounceSound: usize = 0x1028; // CUtlSymbolLarge
                pub const m_ExplosionSound: usize = 0x1030; // CUtlString
                pub const m_hThrower: usize = 0x103C; // CHandle<C_CSPlayerPawn>
                pub const m_flNextAttack: usize = 0x1054; // GameTime_t
                pub const m_hOriginalThrower: usize = 0x1058; // CHandle<C_CSPlayerPawn>
            }
            // Parent: None
            // Fields count: 1
            pub mod CCSGameModeRules {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_nInteractsAs (uint64)
            // NetworkVarNames: m_nInteractsWith (uint64)
            // NetworkVarNames: m_nInteractsExclude (uint64)
            // NetworkVarNames: m_nEntityId (uint32)
            // NetworkVarNames: m_nOwnerId (uint32)
            // NetworkVarNames: m_nHierarchyId (uint16)
            // NetworkVarNames: m_nCollisionGroup (uint8)
            // NetworkVarNames: m_nCollisionFunctionMask (uint8)
            pub mod VPhysicsCollisionAttribute_t {
                pub const m_nInteractsAs: usize = 0x8; // uint64
                pub const m_nInteractsWith: usize = 0x10; // uint64
                pub const m_nInteractsExclude: usize = 0x18; // uint64
                pub const m_nEntityId: usize = 0x20; // uint32
                pub const m_nOwnerId: usize = 0x24; // uint32
                pub const m_nHierarchyId: usize = 0x28; // uint16
                pub const m_nCollisionGroup: usize = 0x2A; // uint8
                pub const m_nCollisionFunctionMask: usize = 0x2B; // uint8
            }
            // Parent: C_BaseEntity
            // Fields count: 28
            //
            // Metadata:
            // NetworkVarNames: m_flScattering (float)
            // NetworkVarNames: m_flAnisotropy (float)
            // NetworkVarNames: m_flFadeSpeed (float)
            // NetworkVarNames: m_flDrawDistance (float)
            // NetworkVarNames: m_flFadeInStart (float)
            // NetworkVarNames: m_flFadeInEnd (float)
            // NetworkVarNames: m_flIndirectStrength (float)
            // NetworkVarNames: m_nIndirectTextureDimX (int)
            // NetworkVarNames: m_nIndirectTextureDimY (int)
            // NetworkVarNames: m_nIndirectTextureDimZ (int)
            // NetworkVarNames: m_vBoxMins (Vector)
            // NetworkVarNames: m_vBoxMaxs (Vector)
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_flStartAnisoTime (GameTime_t)
            // NetworkVarNames: m_flStartScatterTime (GameTime_t)
            // NetworkVarNames: m_flStartDrawDistanceTime (GameTime_t)
            // NetworkVarNames: m_flStartAnisotropy (float)
            // NetworkVarNames: m_flStartScattering (float)
            // NetworkVarNames: m_flStartDrawDistance (float)
            // NetworkVarNames: m_flDefaultAnisotropy (float)
            // NetworkVarNames: m_flDefaultScattering (float)
            // NetworkVarNames: m_flDefaultDrawDistance (float)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_bEnableIndirect (bool)
            // NetworkVarNames: m_bIsMaster (bool)
            // NetworkVarNames: m_hFogIndirectTexture (HRenderTextureStrong)
            // NetworkVarNames: m_nForceRefreshCount (int)
            pub mod C_EnvVolumetricFogController {
                pub const m_flScattering: usize = 0x6D0; // float32
                pub const m_flAnisotropy: usize = 0x6D4; // float32
                pub const m_flFadeSpeed: usize = 0x6D8; // float32
                pub const m_flDrawDistance: usize = 0x6DC; // float32
                pub const m_flFadeInStart: usize = 0x6E0; // float32
                pub const m_flFadeInEnd: usize = 0x6E4; // float32
                pub const m_flIndirectStrength: usize = 0x6E8; // float32
                pub const m_nIndirectTextureDimX: usize = 0x6EC; // int32
                pub const m_nIndirectTextureDimY: usize = 0x6F0; // int32
                pub const m_nIndirectTextureDimZ: usize = 0x6F4; // int32
                pub const m_vBoxMins: usize = 0x6F8; // Vector
                pub const m_vBoxMaxs: usize = 0x704; // Vector
                pub const m_bActive: usize = 0x710; // bool
                pub const m_flStartAnisoTime: usize = 0x714; // GameTime_t
                pub const m_flStartScatterTime: usize = 0x718; // GameTime_t
                pub const m_flStartDrawDistanceTime: usize = 0x71C; // GameTime_t
                pub const m_flStartAnisotropy: usize = 0x720; // float32
                pub const m_flStartScattering: usize = 0x724; // float32
                pub const m_flStartDrawDistance: usize = 0x728; // float32
                pub const m_flDefaultAnisotropy: usize = 0x72C; // float32
                pub const m_flDefaultScattering: usize = 0x730; // float32
                pub const m_flDefaultDrawDistance: usize = 0x734; // float32
                pub const m_bStartDisabled: usize = 0x738; // bool
                pub const m_bEnableIndirect: usize = 0x739; // bool
                pub const m_bIsMaster: usize = 0x73A; // bool
                pub const m_hFogIndirectTexture: usize = 0x740; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_nForceRefreshCount: usize = 0x748; // int32
                pub const m_bFirstTime: usize = 0x74C; // bool
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: localSound (Vector)
            // NetworkVarNames: soundscapeIndex (int32)
            // NetworkVarNames: localBits (uint8)
            // NetworkVarNames: soundscapeEntityListIndex (int)
            // NetworkVarNames: soundEventHash (uint32)
            pub mod audioparams_t {
                pub const localSound: usize = 0x8; // Vector[8]
                pub const soundscapeIndex: usize = 0x68; // int32
                pub const localBits: usize = 0x6C; // uint8
                pub const soundscapeEntityListIndex: usize = 0x70; // int32
                pub const soundEventHash: usize = 0x74; // uint32
            }
            // Parent: C_CSGO_TeamIntroCharacterPosition
            // Fields count: 0
            pub mod C_CSGO_TeamIntroTerroristPosition {
            }
            // Parent: C_BaseTrigger
            // Fields count: 8
            pub mod C_Precipitation {
                pub const m_flDensity: usize = 0xC54; // float32
                pub const m_flParticleInnerDist: usize = 0xC60; // float32
                pub const m_pParticleDef: usize = 0xC68; // char*
                pub const m_tParticlePrecipTraceTimer: usize = 0xC90; // TimedEvent[1]
                pub const m_bActiveParticlePrecipEmitter: usize = 0xC98; // bool[1]
                pub const m_bParticlePrecipInitialized: usize = 0xC99; // bool
                pub const m_bHasSimulatedSinceLastSceneObjectUpdate: usize = 0xC9A; // bool
                pub const m_nAvailableSheetSequencesMaxIndex: usize = 0xC9C; // int32
            }
            // Parent: C_BaseModelEntity
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_DialogXMLName (string_t)
            // NetworkVarNames: m_PanelClassName (string_t)
            // NetworkVarNames: m_PanelID (string_t)
            pub mod C_BaseClientUIEntity {
                pub const m_bEnabled: usize = 0xC58; // bool
                pub const m_DialogXMLName: usize = 0xC60; // CUtlSymbolLarge
                pub const m_PanelClassName: usize = 0xC68; // CUtlSymbolLarge
                pub const m_PanelID: usize = 0xC70; // CUtlSymbolLarge
            }
            // Parent: C_BaseModelEntity
            // Fields count: 3
            pub mod C_FuncTrackTrain {
                pub const m_nLongAxis: usize = 0xC50; // int32
                pub const m_flRadius: usize = 0xC54; // float32
                pub const m_flLineLength: usize = 0xC58; // float32
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bIsRescuing (bool)
            // NetworkVarNames: m_weaponPurchasesThisMatch (WeaponPurchaseTracker_t)
            // NetworkVarNames: m_weaponPurchasesThisRound (WeaponPurchaseTracker_t)
            pub mod CCSPlayer_ActionTrackingServices {
                pub const m_hLastWeaponBeforeC4AutoSwitch: usize = 0x40; // CHandle<C_BasePlayerWeapon>
                pub const m_bIsRescuing: usize = 0x44; // bool
                pub const m_weaponPurchasesThisMatch: usize = 0x48; // WeaponPurchaseTracker_t
                pub const m_weaponPurchasesThisRound: usize = 0xA0; // WeaponPurchaseTracker_t
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // NetworkVarNames: m_nModelID (int32)
            // NetworkVarNames: m_hMaterial (HMaterialStrong)
            // NetworkVarNames: m_solid (ShardSolid_t)
            // NetworkVarNames: m_ShatterPanelMode (ShatterPanelMode)
            // NetworkVarNames: m_vecPanelSize (Vector2D)
            // NetworkVarNames: m_vecStressPositionA (Vector2D)
            // NetworkVarNames: m_vecStressPositionB (Vector2D)
            // NetworkVarNames: m_vecPanelVertices (Vector2D)
            // NetworkVarNames: m_flGlassHalfThickness (float)
            // NetworkVarNames: m_bHasParent (bool)
            // NetworkVarNames: m_bParentFrozen (bool)
            // NetworkVarNames: m_SurfacePropStringToken (CUtlStringToken)
            pub mod shard_model_desc_t {
                pub const m_nModelID: usize = 0x8; // int32
                pub const m_hMaterial: usize = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_solid: usize = 0x18; // ShardSolid_t
                pub const m_ShatterPanelMode: usize = 0x19; // ShatterPanelMode
                pub const m_vecPanelSize: usize = 0x1C; // Vector2D
                pub const m_vecStressPositionA: usize = 0x24; // Vector2D
                pub const m_vecStressPositionB: usize = 0x2C; // Vector2D
                pub const m_vecPanelVertices: usize = 0x38; // C_NetworkUtlVectorBase<Vector2D>
                pub const m_flGlassHalfThickness: usize = 0x50; // float32
                pub const m_bHasParent: usize = 0x54; // bool
                pub const m_bParentFrozen: usize = 0x55; // bool
                pub const m_SurfacePropStringToken: usize = 0x58; // CUtlStringToken
            }
            // Parent: None
            // Fields count: 1
            pub mod C_SceneEntity__QueuedEvents_t {
                pub const starttime: usize = 0x0; // float32
            }
            // Parent: CLogicalEntity
            // Fields count: 12
            pub mod CPointTemplate {
                pub const m_iszWorldName: usize = 0x6D0; // CUtlSymbolLarge
                pub const m_iszSource2EntityLumpName: usize = 0x6D8; // CUtlSymbolLarge
                pub const m_iszEntityFilterName: usize = 0x6E0; // CUtlSymbolLarge
                pub const m_flTimeoutInterval: usize = 0x6E8; // float32
                pub const m_bAsynchronouslySpawnEntities: usize = 0x6EC; // bool
                pub const m_pOutputOnSpawned: usize = 0x6F0; // CEntityIOOutput
                pub const m_clientOnlyEntityBehavior: usize = 0x718; // PointTemplateClientOnlyEntityBehavior_t
                pub const m_ownerSpawnGroupType: usize = 0x71C; // PointTemplateOwnerSpawnGroupType_t
                pub const m_createdSpawnGroupHandles: usize = 0x720; // CUtlVector<uint32>
                pub const m_SpawnedEntityHandles: usize = 0x738; // CUtlVector<CEntityHandle>
                pub const m_ScriptSpawnCallback: usize = 0x750; // HSCRIPT
                pub const m_ScriptCallbackScope: usize = 0x758; // HSCRIPT
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            pub mod C_WeaponHKP2000 {
            }
            // Parent: C_BaseCSGrenade
            // Fields count: 0
            pub mod CTripWireFire {
            }
            // Parent: C_BaseFlex
            // Fields count: 6
            pub mod C_CSGO_PreviewModel {
                pub const m_animgraph: usize = 0x1010; // CUtlString
                pub const m_animgraphCharacterModeString: usize = 0x1018; // CGlobalSymbol
                pub const m_defaultAnim: usize = 0x1020; // CUtlString
                pub const m_nDefaultAnimLoopMode: usize = 0x1028; // AnimLoopMode_t
                pub const m_flInitialModelScale: usize = 0x102C; // float32
                pub const m_sInitialWeaponState: usize = 0x1030; // CUtlString
            }
            // Parent: C_CSWeaponBase
            // Fields count: 0
            pub mod CBreachCharge {
            }
            // Parent: C_LightEntity
            // Fields count: 0
            pub mod C_LightDirectionalEntity {
            }
            // Parent: C_BaseEntity
            // Fields count: 18
            //
            // Metadata:
            // NetworkVarNames: m_hCubemapTexture (HRenderTextureStrong)
            // NetworkVarNames: m_bCustomCubemapTexture (bool)
            // NetworkVarNames: m_flInfluenceRadius (float)
            // NetworkVarNames: m_vBoxProjectMins (Vector)
            // NetworkVarNames: m_vBoxProjectMaxs (Vector)
            // NetworkVarNames: m_bMoveable (bool)
            // NetworkVarNames: m_nHandshake (int)
            // NetworkVarNames: m_nEnvCubeMapArrayIndex (int)
            // NetworkVarNames: m_nPriority (int)
            // NetworkVarNames: m_flEdgeFadeDist (float)
            // NetworkVarNames: m_vEdgeFadeDists (Vector)
            // NetworkVarNames: m_flDiffuseScale (float)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_bDefaultEnvMap (bool)
            // NetworkVarNames: m_bDefaultSpecEnvMap (bool)
            // NetworkVarNames: m_bIndoorCubeMap (bool)
            // NetworkVarNames: m_bCopyDiffuseFromDefaultCubemap (bool)
            // NetworkVarNames: m_bEnabled (bool)
            pub mod C_EnvCubemap {
                pub const m_hCubemapTexture: usize = 0x750; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_bCustomCubemapTexture: usize = 0x758; // bool
                pub const m_flInfluenceRadius: usize = 0x75C; // float32
                pub const m_vBoxProjectMins: usize = 0x760; // Vector
                pub const m_vBoxProjectMaxs: usize = 0x76C; // Vector
                pub const m_bMoveable: usize = 0x778; // bool
                pub const m_nHandshake: usize = 0x77C; // int32
                pub const m_nEnvCubeMapArrayIndex: usize = 0x780; // int32
                pub const m_nPriority: usize = 0x784; // int32
                pub const m_flEdgeFadeDist: usize = 0x788; // float32
                pub const m_vEdgeFadeDists: usize = 0x78C; // Vector
                pub const m_flDiffuseScale: usize = 0x798; // float32
                pub const m_bStartDisabled: usize = 0x79C; // bool
                pub const m_bDefaultEnvMap: usize = 0x79D; // bool
                pub const m_bDefaultSpecEnvMap: usize = 0x79E; // bool
                pub const m_bIndoorCubeMap: usize = 0x79F; // bool
                pub const m_bCopyDiffuseFromDefaultCubemap: usize = 0x7A0; // bool
                pub const m_bEnabled: usize = 0x7B0; // bool
            }
            // Parent: C_BaseViewModel
            // Fields count: 3
            pub mod C_PredictedViewModel {
                pub const m_vPredictedLagOffset: usize = 0xEE0; // Vector
                pub const m_targetSpeed: usize = 0xEEC; // QAngle
                pub const m_currentSpeed: usize = 0xEF8; // QAngle
            }
            // Parent: C_CSWeaponBase
            // Fields count: 0
            pub mod C_Knife {
            }
            // Parent: C_EnvCubemap
            // Fields count: 0
            pub mod C_EnvCubemapBox {
            }
            // Parent: C_Item
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_OwningPlayer (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_KillingPlayer (CHandle<CCSPlayerPawn>)
            pub mod C_ItemDogtags {
                pub const m_OwningPlayer: usize = 0x2564; // CHandle<C_CSPlayerPawn>
                pub const m_KillingPlayer: usize = 0x2568; // CHandle<C_CSPlayerPawn>
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Fields count: 0
            pub mod C_CSGO_EndOfMatchCamera {
            }
            // Parent: C_BaseEntity
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_iszStackName (string_t)
            // NetworkVarNames: m_iszOperatorName (string_t)
            // NetworkVarNames: m_iszOpvarName (string_t)
            // NetworkVarNames: m_iOpvarIndex (int)
            // NetworkVarNames: m_bUseAutoCompare (bool)
            pub mod C_SoundOpvarSetPointBase {
                pub const m_iszStackName: usize = 0x6D0; // CUtlSymbolLarge
                pub const m_iszOperatorName: usize = 0x6D8; // CUtlSymbolLarge
                pub const m_iszOpvarName: usize = 0x6E0; // CUtlSymbolLarge
                pub const m_iOpvarIndex: usize = 0x6E8; // int32
                pub const m_bUseAutoCompare: usize = 0x6EC; // bool
            }
            // Parent: C_BaseCSGrenade
            // Fields count: 0
            pub mod C_SensorGrenade {
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_fFireTime (GameTime_t)
            pub mod C_WeaponTaser {
                pub const m_fFireTime: usize = 0x2938; // GameTime_t
                pub const m_nLastAttackTick: usize = 0x293C; // int32
            }
            // Parent: C_CSWeaponBase
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bPlayingUninterruptableAct (bool)
            // NetworkVarNames: m_nUninterruptableActivity (PlayerAnimEvent_t)
            pub mod C_Fists {
                pub const m_bPlayingUninterruptableAct: usize = 0x2918; // bool
                pub const m_nUninterruptableActivity: usize = 0x291C; // PlayerAnimEvent_t
            }
            // Parent: C_PhysicsProp
            // Fields count: 0
            pub mod C_PhysicsPropMultiplayer {
            }
            // Parent: C_CSWeaponBase
            // Fields count: 0
            pub mod C_WeaponSawedoff {
            }
            // Parent: None
            // Fields count: 17
            //
            // Metadata:
            // NetworkVarNames: m_collisionAttribute (VPhysicsCollisionAttribute_t)
            // NetworkVarNames: m_vecMins (Vector)
            // NetworkVarNames: m_vecMaxs (Vector)
            // NetworkVarNames: m_usSolidFlags (uint8)
            // NetworkVarNames: m_nSolidType (SolidType_t)
            // NetworkVarNames: m_triggerBloat (uint8)
            // NetworkVarNames: m_nSurroundType (SurroundingBoundsType_t)
            // NetworkVarNames: m_CollisionGroup (uint8)
            // NetworkVarNames: m_nEnablePhysics (uint8)
            // NetworkVarNames: m_vecSpecifiedSurroundingMins (Vector)
            // NetworkVarNames: m_vecSpecifiedSurroundingMaxs (Vector)
            // NetworkVarNames: m_vCapsuleCenter1 (Vector)
            // NetworkVarNames: m_vCapsuleCenter2 (Vector)
            // NetworkVarNames: m_flCapsuleRadius (float)
            pub mod CCollisionProperty {
                pub const m_collisionAttribute: usize = 0x10; // VPhysicsCollisionAttribute_t
                pub const m_vecMins: usize = 0x40; // Vector
                pub const m_vecMaxs: usize = 0x4C; // Vector
                pub const m_usSolidFlags: usize = 0x5A; // uint8
                pub const m_nSolidType: usize = 0x5B; // SolidType_t
                pub const m_triggerBloat: usize = 0x5C; // uint8
                pub const m_nSurroundType: usize = 0x5D; // SurroundingBoundsType_t
                pub const m_CollisionGroup: usize = 0x5E; // uint8
                pub const m_nEnablePhysics: usize = 0x5F; // uint8
                pub const m_flBoundingRadius: usize = 0x60; // float32
                pub const m_vecSpecifiedSurroundingMins: usize = 0x64; // Vector
                pub const m_vecSpecifiedSurroundingMaxs: usize = 0x70; // Vector
                pub const m_vecSurroundingMaxs: usize = 0x7C; // Vector
                pub const m_vecSurroundingMins: usize = 0x88; // Vector
                pub const m_vCapsuleCenter1: usize = 0x94; // Vector
                pub const m_vCapsuleCenter2: usize = 0xA0; // Vector
                pub const m_flCapsuleRadius: usize = 0xAC; // float32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_hSequence (HSequence)
            // NetworkVarNames: m_flPrevCycle (float32)
            // NetworkVarNames: m_flCycle (float32)
            pub mod CNetworkedSequenceOperation {
                pub const m_hSequence: usize = 0x8; // HSequence
                pub const m_flPrevCycle: usize = 0xC; // float32
                pub const m_flCycle: usize = 0x10; // float32
                pub const m_flWeight: usize = 0x14; // CNetworkedQuantizedFloat
                pub const m_bSequenceChangeNetworked: usize = 0x1C; // bool
                pub const m_bDiscontinuity: usize = 0x1D; // bool
                pub const m_flPrevCycleFromDiscontinuity: usize = 0x20; // float32
                pub const m_flPrevCycleForAnimEventDetection: usize = 0x24; // float32
            }
            // Parent: C_PhysicsProp
            // Fields count: 1
            //
            // Metadata:
            // MNetworkExcludeByName
            // NetworkVarNames: m_ShardDesc (shard_model_desc_t)
            pub mod C_ShatterGlassShardPhysics {
                pub const m_ShardDesc: usize = 0xFD0; // shard_model_desc_t
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            pub mod C_WeaponElite {
            }
            // Parent: C_BaseModelEntity
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_CLightComponent (CLightComponent::Storage_t)
            pub mod C_LightEntity {
                pub const m_CLightComponent: usize = 0xC50; // CLightComponent*
            }
            // Parent: CBaseAnimGraph
            // Fields count: 19
            //
            // Metadata:
            // NetworkVarNames: m_flexWeight (float32)
            // NetworkVarNames: m_blinktoggle (bool)
            pub mod C_BaseFlex {
                pub const m_flexWeight: usize = 0xE88; // C_NetworkUtlVectorBase<float32>
                pub const m_vLookTargetPosition: usize = 0xEA0; // Vector
                pub const m_blinktoggle: usize = 0xEB8; // bool
                pub const m_nLastFlexUpdateFrameCount: usize = 0xF18; // int32
                pub const m_CachedViewTarget: usize = 0xF1C; // Vector
                pub const m_nNextSceneEventId: usize = 0xF28; // uint32
                pub const m_iBlink: usize = 0xF2C; // int32
                pub const m_blinktime: usize = 0xF30; // float32
                pub const m_prevblinktoggle: usize = 0xF34; // bool
                pub const m_iJawOpen: usize = 0xF38; // int32
                pub const m_flJawOpenAmount: usize = 0xF3C; // float32
                pub const m_flBlinkAmount: usize = 0xF40; // float32
                pub const m_iMouthAttachment: usize = 0xF44; // AttachmentHandle_t
                pub const m_iEyeAttachment: usize = 0xF45; // AttachmentHandle_t
                pub const m_bResetFlexWeightsOnModelChange: usize = 0xF46; // bool
                pub const m_nEyeOcclusionRendererBone: usize = 0xF60; // int32
                pub const m_mEyeOcclusionRendererCameraToBoneTransform: usize = 0xF64; // matrix3x4_t
                pub const m_vEyeOcclusionRendererHalfExtent: usize = 0xF94; // Vector
                pub const m_PhonemeClasses: usize = 0xFB0; // C_BaseFlex::Emphasized_Phoneme[3]
            }
            // Parent: C_BaseEntity
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_iCurrentMaxRagdollCount (int8)
            pub mod C_RagdollManager {
                pub const m_iCurrentMaxRagdollCount: usize = 0x6D0; // int8
            }
            // Parent: C_BaseModelEntity
            // Fields count: 12
            //
            // Metadata:
            // NetworkVarNames: m_hSkyMaterial (HMaterialStrong)
            // NetworkVarNames: m_hSkyMaterialLightingOnly (HMaterialStrong)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_vTintColor (Color)
            // NetworkVarNames: m_vTintColorLightingOnly (Color)
            // NetworkVarNames: m_flBrightnessScale (float)
            // NetworkVarNames: m_nFogType (int)
            // NetworkVarNames: m_flFogMinStart (float)
            // NetworkVarNames: m_flFogMinEnd (float)
            // NetworkVarNames: m_flFogMaxStart (float)
            // NetworkVarNames: m_flFogMaxEnd (float)
            // NetworkVarNames: m_bEnabled (bool)
            pub mod C_EnvSky {
                pub const m_hSkyMaterial: usize = 0xC50; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_hSkyMaterialLightingOnly: usize = 0xC58; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_bStartDisabled: usize = 0xC60; // bool
                pub const m_vTintColor: usize = 0xC61; // Color
                pub const m_vTintColorLightingOnly: usize = 0xC65; // Color
                pub const m_flBrightnessScale: usize = 0xC6C; // float32
                pub const m_nFogType: usize = 0xC70; // int32
                pub const m_flFogMinStart: usize = 0xC74; // float32
                pub const m_flFogMinEnd: usize = 0xC78; // float32
                pub const m_flFogMaxStart: usize = 0xC7C; // float32
                pub const m_flFogMaxEnd: usize = 0xC80; // float32
                pub const m_bEnabled: usize = 0xC84; // bool
            }
            // Parent: CCSGameModeScript
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            pub mod CCSDeathmatchScript {
                pub const m_pOuter: usize = 0xD8; // CCSGameModeRules_Deathmatch*
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            pub mod C_WeaponSCAR20 {
            }
        }
    }
}
