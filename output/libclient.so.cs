// Generated using https://github.com/a2x/cs2-dumper
// 2024-04-16 02:29:53.956513739 UTC

namespace CS2Dumper.Schemas {
    // Module: libclient.so
    // Classes count: 147
    // Enums count: 13
    public static class LibclientSo {
        // Parent: C_BaseCSGrenade
        // Fields count: 0
        public static class C_HEGrenade {
        }
        // Parent: C_BaseTrigger
        // Fields count: 0
        public static class C_TriggerLerpObject {
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
        public static class CCSPlayer_MovementServices {
            public const nint m_flMaxFallVelocity = 0x214; // float32
            public const nint m_vecLadderNormal = 0x218; // Vector
            public const nint m_nLadderSurfacePropIndex = 0x224; // int32
            public const nint m_flDuckAmount = 0x228; // float32
            public const nint m_flDuckSpeed = 0x22C; // float32
            public const nint m_bDuckOverride = 0x230; // bool
            public const nint m_bDesiresDuck = 0x231; // bool
            public const nint m_flDuckOffset = 0x234; // float32
            public const nint m_nDuckTimeMsecs = 0x238; // uint32
            public const nint m_nDuckJumpTimeMsecs = 0x23C; // uint32
            public const nint m_nJumpTimeMsecs = 0x240; // uint32
            public const nint m_flLastDuckTime = 0x244; // float32
            public const nint m_vecLastPositionAtFullCrouchSpeed = 0x250; // Vector2D
            public const nint m_duckUntilOnGround = 0x258; // bool
            public const nint m_bHasWalkMovedSinceLastJump = 0x259; // bool
            public const nint m_bInStuckTest = 0x25A; // bool
            public const nint m_flStuckCheckTime = 0x268; // float32[64][2]
            public const nint m_nTraceCount = 0x468; // int32
            public const nint m_StuckLast = 0x46C; // int32
            public const nint m_bSpeedCropped = 0x470; // bool
            public const nint m_nOldWaterLevel = 0x474; // int32
            public const nint m_flWaterEntryTime = 0x478; // float32
            public const nint m_vecForward = 0x47C; // Vector
            public const nint m_vecLeft = 0x488; // Vector
            public const nint m_vecUp = 0x494; // Vector
            public const nint m_nGameCodeHasMovedPlayerAfterCommand = 0x4A0; // int32
            public const nint m_bOldJumpPressed = 0x4A4; // bool
            public const nint m_flJumpPressedTime = 0x4A8; // float32
            public const nint m_flJumpUntil = 0x4AC; // float32
            public const nint m_flJumpVel = 0x4B0; // float32
            public const nint m_fStashGrenadeParameterWhen = 0x4B4; // GameTime_t
            public const nint m_nButtonDownMaskPrev = 0x4B8; // uint64
            public const nint m_flOffsetTickCompleteTime = 0x4C0; // float32
            public const nint m_flOffsetTickStashedSpeed = 0x4C4; // float32
            public const nint m_flStamina = 0x4C8; // float32
            public const nint m_flHeightAtJumpStart = 0x4CC; // float32
            public const nint m_flMaxJumpHeightThisJump = 0x4D0; // float32
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
        public static class sky3dparams_t {
            public const nint scale = 0x8; // int16
            public const nint origin = 0xC; // Vector
            public const nint bClip3DSkyBoxNearToWorldFar = 0x18; // bool
            public const nint flClip3DSkyBoxNearToWorldFarOffset = 0x1C; // float32
            public const nint fog = 0x20; // fogparams_t
            public const nint m_nWorldGroupID = 0x88; // WorldGroupId_t
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponM4A1 {
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponCZ75a {
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
        public static class C_BaseModelEntity {
            public const nint m_CRenderComponent = 0x9A0; // CRenderComponent*
            public const nint m_CHitboxComponent = 0x9A8; // CHitboxComponent
            public const nint m_bInitModelEffects = 0x9F0; // bool
            public const nint m_bIsStaticProp = 0x9F1; // bool
            public const nint m_nLastAddDecal = 0x9F4; // int32
            public const nint m_nDecalsAdded = 0x9F8; // int32
            public const nint m_iOldHealth = 0x9FC; // int32
            public const nint m_nRenderMode = 0xA00; // RenderMode_t
            public const nint m_nRenderFX = 0xA01; // RenderFx_t
            public const nint m_bAllowFadeInView = 0xA02; // bool
            public const nint m_clrRender = 0xA03; // Color
            public const nint m_vecRenderAttributes = 0xA08; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
            public const nint m_bRenderToCubemaps = 0xA70; // bool
            public const nint m_Collision = 0xA78; // CCollisionProperty
            public const nint m_Glow = 0xB28; // CGlowProperty
            public const nint m_flGlowBackfaceMult = 0xB80; // float32
            public const nint m_fadeMinDist = 0xB84; // float32
            public const nint m_fadeMaxDist = 0xB88; // float32
            public const nint m_flFadeScale = 0xB8C; // float32
            public const nint m_flShadowStrength = 0xB90; // float32
            public const nint m_nObjectCulling = 0xB94; // uint8
            public const nint m_nAddDecal = 0xB98; // int32
            public const nint m_vDecalPosition = 0xB9C; // Vector
            public const nint m_vDecalForwardAxis = 0xBA8; // Vector
            public const nint m_flDecalHealBloodRate = 0xBB4; // float32
            public const nint m_flDecalHealHeightRate = 0xBB8; // float32
            public const nint m_ConfigEntitiesToPropagateMaterialDecalsTo = 0xBC0; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
            public const nint m_vecViewOffset = 0xBD8; // CNetworkViewOffsetVector
            public const nint m_pClientAlphaProperty = 0xC08; // CClientAlphaProperty*
            public const nint m_ClientOverrideTint = 0xC10; // Color
            public const nint m_bUseClientOverrideTint = 0xC14; // bool
        }
        // Parent: C_LightEntity
        // Fields count: 0
        public static class C_LightSpotEntity {
        }
        // Parent: C_BaseEntity
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
        public static class C_EnvWind {
            public const nint m_EnvWindShared = 0x6D0; // C_EnvWindShared
        }
        // Parent: C_DynamicProp
        // Fields count: 0
        public static class C_DynamicPropAlias_cable_dynamic {
        }
        // Parent: C_PointEntity
        // Fields count: 0
        public static class C_InfoInstructorHintHostageRescueZone {
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
        public static class C_SceneEntity {
            public const nint m_bIsPlayingBack = 0x6D8; // bool
            public const nint m_bPaused = 0x6D9; // bool
            public const nint m_bMultiplayer = 0x6DA; // bool
            public const nint m_bAutogenerated = 0x6DB; // bool
            public const nint m_flForceClientTime = 0x6DC; // float32
            public const nint m_nSceneStringIndex = 0x6E0; // uint16
            public const nint m_bClientOnly = 0x6E2; // bool
            public const nint m_hOwner = 0x6E4; // CHandle<C_BaseFlex>
            public const nint m_hActorList = 0x6E8; // C_NetworkUtlVectorBase<CHandle<C_BaseFlex>>
            public const nint m_bWasPlaying = 0x700; // bool
            public const nint m_QueuedEvents = 0x710; // CUtlVector<C_SceneEntity::QueuedEvents_t>
            public const nint m_flCurrentTime = 0x728; // float32
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
        public static class CPlayer_CameraServices {
            public const nint m_vecCsViewPunchAngle = 0x40; // QAngle
            public const nint m_nCsViewPunchAngleTick = 0x4C; // GameTick_t
            public const nint m_flCsViewPunchAngleTickRatio = 0x50; // float32
            public const nint m_PlayerFog = 0x58; // C_fogplayerparams_t
            public const nint m_hColorCorrectionCtrl = 0x98; // CHandle<C_ColorCorrection>
            public const nint m_hViewEntity = 0x9C; // CHandle<C_BaseEntity>
            public const nint m_hTonemapController = 0xA0; // CHandle<C_TonemapController2>
            public const nint m_audio = 0xA8; // audioparams_t
            public const nint m_PostProcessingVolumes = 0x120; // C_NetworkUtlVectorBase<CHandle<C_PostProcessingVolume>>
            public const nint m_flOldPlayerZ = 0x138; // float32
            public const nint m_flOldPlayerViewOffsetZ = 0x13C; // float32
            public const nint m_CurrentFog = 0x140; // fogparams_t
            public const nint m_hOldFogController = 0x1A8; // CHandle<C_FogController>
            public const nint m_bOverrideFogColor = 0x1AC; // bool[5]
            public const nint m_OverrideFogColor = 0x1B1; // Color[5]
            public const nint m_bOverrideFogStartEnd = 0x1C5; // bool[5]
            public const nint m_fOverrideFogStart = 0x1CC; // float32[5]
            public const nint m_fOverrideFogEnd = 0x1E0; // float32[5]
            public const nint m_hActivePostProcessingVolume = 0x1F4; // CHandle<C_PostProcessingVolume>
            public const nint m_angDemoViewAngles = 0x1F8; // QAngle
        }
        // Parent: C_CSWeaponBase
        // Fields count: 14
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
        // NetworkVarNames: m_bJustPulledPin (bool)
        // NetworkVarNames: m_nNextHoldTick (GameTick_t)
        // NetworkVarNames: m_flNextHoldFrac (float)
        // NetworkVarNames: m_hSwitchToWeaponAfterThrow (CHandle<CCSWeaponBase>)
        public static class C_BaseCSGrenade {
            public const nint m_bClientPredictDelete = 0x2908; // bool
            public const nint m_bRedraw = 0x2909; // bool
            public const nint m_bIsHeldByPlayer = 0x290A; // bool
            public const nint m_bPinPulled = 0x290B; // bool
            public const nint m_bJumpThrow = 0x290C; // bool
            public const nint m_bThrowAnimating = 0x290D; // bool
            public const nint m_fThrowTime = 0x2910; // GameTime_t
            public const nint m_flThrowStrength = 0x2914; // float32
            public const nint m_flThrowStrengthApproach = 0x2918; // float32
            public const nint m_fDropTime = 0x291C; // GameTime_t
            public const nint m_bJustPulledPin = 0x2920; // bool
            public const nint m_nNextHoldTick = 0x2924; // GameTick_t
            public const nint m_flNextHoldFrac = 0x2928; // float32
            public const nint m_hSwitchToWeaponAfterThrow = 0x292C; // CHandle<C_CSWeaponBase>
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
        public static class C_FuncMonitor {
            public const nint m_targetCamera = 0xC50; // CUtlString
            public const nint m_nResolutionEnum = 0xC58; // int32
            public const nint m_bRenderShadows = 0xC5C; // bool
            public const nint m_bUseUniqueColorTarget = 0xC5D; // bool
            public const nint m_brushModelName = 0xC60; // CUtlString
            public const nint m_hTargetCamera = 0xC68; // CHandle<C_BaseEntity>
            public const nint m_bEnabled = 0xC6C; // bool
            public const nint m_bDraw3DSkybox = 0xC6D; // bool
        }
        // Parent: C_BaseTrigger
        // Fields count: 0
        public static class C_TriggerMultiple {
        }
        // Parent: None
        // Fields count: 1
        public static class C_RopeKeyframe__CPhysicsDelegate {
            public const nint m_pKeyframe = 0x8; // C_RopeKeyframe*
        }
        // Parent: CBaseAnimGraph
        // Fields count: 14
        public static class C_ClientRagdoll {
            public const nint m_bFadeOut = 0xE78; // bool
            public const nint m_bImportant = 0xE79; // bool
            public const nint m_flEffectTime = 0xE7C; // GameTime_t
            public const nint m_gibDespawnTime = 0xE80; // GameTime_t
            public const nint m_iCurrentFriction = 0xE84; // int32
            public const nint m_iMinFriction = 0xE88; // int32
            public const nint m_iMaxFriction = 0xE8C; // int32
            public const nint m_iFrictionAnimState = 0xE90; // int32
            public const nint m_bReleaseRagdoll = 0xE94; // bool
            public const nint m_iEyeAttachment = 0xE95; // AttachmentHandle_t
            public const nint m_bFadingOut = 0xE96; // bool
            public const nint m_flScaleEnd = 0xE98; // float32[10]
            public const nint m_flScaleTimeStart = 0xEC0; // GameTime_t[10]
            public const nint m_flScaleTimeEnd = 0xEE8; // GameTime_t[10]
        }
        // Parent: C_BaseEntity
        // Fields count: 1
        public static class C_GlobalLight {
            public const nint m_WindClothForceHandle = 0xB90; // uint16
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
        public static class C_CSPlayerResource {
            public const nint m_bHostageAlive = 0x6D0; // bool[12]
            public const nint m_isHostageFollowingSomeone = 0x6DC; // bool[12]
            public const nint m_iHostageEntityIDs = 0x6E8; // CEntityIndex[12]
            public const nint m_bombsiteCenterA = 0x718; // Vector
            public const nint m_bombsiteCenterB = 0x724; // Vector
            public const nint m_hostageRescueX = 0x730; // int32[4]
            public const nint m_hostageRescueY = 0x740; // int32[4]
            public const nint m_hostageRescueZ = 0x750; // int32[4]
            public const nint m_bEndMatchNextMapAllVoted = 0x760; // bool
            public const nint m_foundGoalPositions = 0x761; // bool
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
        public static class CSkeletonInstance {
            public const nint m_modelState = 0x160; // CModelState
            public const nint m_bIsAnimationEnabled = 0x380; // bool
            public const nint m_bUseParentRenderBounds = 0x381; // bool
            public const nint m_bDisableSolidCollisionsForHierarchy = 0x382; // bool
            public const nint m_bDirtyMotionType = 0x0; // bitfield:1
            public const nint m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
            public const nint m_materialGroup = 0x384; // CUtlStringToken
            public const nint m_nHitboxSet = 0x388; // uint8
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
        public static class C_SmokeGrenadeProjectile {
            public const nint m_nSmokeEffectTickBegin = 0x10F8; // int32
            public const nint m_bDidSmokeEffect = 0x10FC; // bool
            public const nint m_nRandomSeed = 0x1100; // int32
            public const nint m_vSmokeColor = 0x1104; // Vector
            public const nint m_vSmokeDetonationPos = 0x1110; // Vector
            public const nint m_VoxelFrameData = 0x1120; // CUtlVector<uint8>
            public const nint m_bSmokeVolumeDataReceived = 0x1138; // bool
            public const nint m_bSmokeEffectSpawned = 0x1139; // bool
        }
        // Parent: C_BaseEntity
        // Fields count: 8
        public static class C_CSGO_MapPreviewCameraPath {
            public const nint m_flZFar = 0x6D0; // float32
            public const nint m_flZNear = 0x6D4; // float32
            public const nint m_bLoop = 0x6D8; // bool
            public const nint m_bVerticalFOV = 0x6D9; // bool
            public const nint m_bConstantSpeed = 0x6DA; // bool
            public const nint m_flDuration = 0x6DC; // float32
            public const nint m_flPathLength = 0x720; // float32
            public const nint m_flPathDuration = 0x724; // float32
        }
        // Parent: CCSGO_WingmanIntroCharacterPosition
        // Fields count: 0
        public static class CCSGO_WingmanIntroTerroristPosition {
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
        public static class C_Inferno {
            public const nint m_nfxFireDamageEffect = 0xC90; // ParticleIndex_t
            public const nint m_firePositions = 0xC94; // Vector[64]
            public const nint m_fireParentPositions = 0xF94; // Vector[64]
            public const nint m_bFireIsBurning = 0x1294; // bool[64]
            public const nint m_BurnNormal = 0x12D4; // Vector[64]
            public const nint m_fireCount = 0x15D4; // int32
            public const nint m_nInfernoType = 0x15D8; // int32
            public const nint m_nFireLifetime = 0x15DC; // float32
            public const nint m_bInPostEffectTime = 0x15E0; // bool
            public const nint m_lastFireCount = 0x15E4; // int32
            public const nint m_nFireEffectTickBegin = 0x15E8; // int32
            public const nint m_drawableCount = 0x81F0; // int32
            public const nint m_blosCheck = 0x81F4; // bool
            public const nint m_nlosperiod = 0x81F8; // int32
            public const nint m_maxFireHalfWidth = 0x81FC; // float32
            public const nint m_maxFireHeight = 0x8200; // float32
            public const nint m_minBounds = 0x8204; // Vector
            public const nint m_maxBounds = 0x8210; // Vector
            public const nint m_flLastGrassBurnThink = 0x821C; // float32
        }
        // Parent: C_CSPlayerPawnBase
        // Fields count: 52
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
        public static class C_CSPlayerPawn {
            public const nint m_pBulletServices = 0x16B8; // CCSPlayer_BulletServices*
            public const nint m_pHostageServices = 0x16C0; // CCSPlayer_HostageServices*
            public const nint m_pBuyServices = 0x16C8; // CCSPlayer_BuyServices*
            public const nint m_pGlowServices = 0x16D0; // CCSPlayer_GlowServices*
            public const nint m_pActionTrackingServices = 0x16D8; // CCSPlayer_ActionTrackingServices*
            public const nint m_flHealthShotBoostExpirationTime = 0x16E0; // GameTime_t
            public const nint m_flLastFiredWeaponTime = 0x16E4; // GameTime_t
            public const nint m_bHasFemaleVoice = 0x16E8; // bool
            public const nint m_flLandseconds = 0x16EC; // float32
            public const nint m_flOldFallVelocity = 0x16F0; // float32
            public const nint m_szLastPlaceName = 0x16F4; // char[18]
            public const nint m_bPrevDefuser = 0x1706; // bool
            public const nint m_bPrevHelmet = 0x1707; // bool
            public const nint m_nPrevArmorVal = 0x1708; // int32
            public const nint m_nPrevGrenadeAmmoCount = 0x170C; // int32
            public const nint m_unPreviousWeaponHash = 0x1710; // uint32
            public const nint m_unWeaponHash = 0x1714; // uint32
            public const nint m_bInBuyZone = 0x1718; // bool
            public const nint m_bPreviouslyInBuyZone = 0x1719; // bool
            public const nint m_aimPunchAngle = 0x171C; // QAngle
            public const nint m_aimPunchAngleVel = 0x1728; // QAngle
            public const nint m_aimPunchTickBase = 0x1734; // int32
            public const nint m_aimPunchTickFraction = 0x1738; // float32
            public const nint m_aimPunchCache = 0x1740; // CUtlVector<QAngle>
            public const nint m_bInLanding = 0x1760; // bool
            public const nint m_flLandingTime = 0x1764; // float32
            public const nint m_bInHostageRescueZone = 0x1768; // bool
            public const nint m_bInBombZone = 0x1769; // bool
            public const nint m_bIsBuyMenuOpen = 0x176A; // bool
            public const nint m_flTimeOfLastInjury = 0x176C; // GameTime_t
            public const nint m_flNextSprayDecalTime = 0x1770; // GameTime_t
            public const nint m_iRetakesOffering = 0x1888; // int32
            public const nint m_iRetakesOfferingCard = 0x188C; // int32
            public const nint m_bRetakesHasDefuseKit = 0x1890; // bool
            public const nint m_bRetakesMVPLastRound = 0x1891; // bool
            public const nint m_iRetakesMVPBoostItem = 0x1894; // int32
            public const nint m_RetakesMVPBoostExtraUtility = 0x1898; // loadout_slot_t
            public const nint m_bNeedToReApplyGloves = 0x18B8; // bool
            public const nint m_EconGloves = 0x18C0; // C_EconItemView
            public const nint m_nEconGlovesChanged = 0x2C10; // uint8
            public const nint m_bMustSyncRagdollState = 0x2C11; // bool
            public const nint m_nRagdollDamageBone = 0x2C14; // int32
            public const nint m_vRagdollDamageForce = 0x2C18; // Vector
            public const nint m_vRagdollDamagePosition = 0x2C24; // Vector
            public const nint m_szRagdollDamageWeaponName = 0x2C30; // char[64]
            public const nint m_bRagdollDamageHeadshot = 0x2C70; // bool
            public const nint m_vRagdollServerOrigin = 0x2C74; // Vector
            public const nint m_bLastHeadBoneTransformIsValid = 0x3288; // bool
            public const nint m_lastLandTime = 0x328C; // GameTime_t
            public const nint m_bOnGroundLastTick = 0x3290; // bool
            public const nint m_qDeathEyeAngles = 0x32AC; // QAngle
            public const nint m_bSkipOneHeadConstraintUpdate = 0x32B8; // bool
        }
        // Parent: C_RagdollProp
        // Fields count: 7
        //
        // Metadata:
        // NetworkVarNames: m_boneIndexAttached (uint32)
        // NetworkVarNames: m_ragdollAttachedObjectIndex (uint32)
        // NetworkVarNames: m_attachmentPointBoneSpace (Vector)
        // NetworkVarNames: m_attachmentPointRagdollSpace (Vector)
        public static class C_RagdollPropAttached {
            public const nint m_boneIndexAttached = 0xEF0; // uint32
            public const nint m_ragdollAttachedObjectIndex = 0xEF4; // uint32
            public const nint m_attachmentPointBoneSpace = 0xEF8; // Vector
            public const nint m_attachmentPointRagdollSpace = 0xF04; // Vector
            public const nint m_vecOffset = 0xF10; // Vector
            public const nint m_parentTime = 0xF1C; // float32
            public const nint m_bHasParent = 0xF20; // bool
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
        public static class C_BaseCSGrenadeProjectile {
            public const nint m_vInitialPosition = 0x105C; // Vector
            public const nint m_vInitialVelocity = 0x1068; // Vector
            public const nint m_nBounces = 0x1074; // int32
            public const nint m_nExplodeEffectIndex = 0x1078; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_nExplodeEffectTickBegin = 0x1080; // int32
            public const nint m_vecExplodeEffectOrigin = 0x1084; // Vector
            public const nint m_flSpawnTime = 0x1090; // GameTime_t
            public const nint vecLastTrailLinePos = 0x1094; // Vector
            public const nint flNextTrailLineTime = 0x10A0; // GameTime_t
            public const nint m_bExplodeEffectBegan = 0x10A4; // bool
            public const nint m_bCanCreateGrenadeTrail = 0x10A5; // bool
            public const nint m_nSnapshotTrajectoryEffectIndex = 0x10A8; // ParticleIndex_t
            public const nint m_hSnapshotTrajectoryParticleSnapshot = 0x10B0; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_arrTrajectoryTrailPoints = 0x10B8; // CUtlVector<Vector>
            public const nint m_arrTrajectoryTrailPointCreationTimes = 0x10D0; // CUtlVector<float32>
            public const nint m_flTrajectoryTrailEffectCreationTime = 0x10E8; // float32
        }
        // Parent: C_BaseToggle
        // Fields count: 2
        //
        // Metadata:
        // MNetworkIncludeByName
        // NetworkVarNames: m_bDisabled (bool)
        // NetworkVarNames: m_bClientSidePredicted (bool)
        public static class C_BaseTrigger {
            public const nint m_bDisabled = 0xC50; // bool
            public const nint m_bClientSidePredicted = 0xC51; // bool
        }
        // Parent: C_BaseCSGrenade
        // Fields count: 0
        public static class C_MolotovGrenade {
        }
        // Parent: C_BaseToggle
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_glowEntity (CHandle<C_BaseModelEntity>)
        // NetworkVarNames: m_usable (bool)
        // NetworkVarNames: m_szDisplayText (string_t)
        public static class C_BaseButton {
            public const nint m_glowEntity = 0xC50; // CHandle<C_BaseModelEntity>
            public const nint m_usable = 0xC54; // bool
            public const nint m_szDisplayText = 0xC58; // CUtlSymbolLarge
        }
        // Parent: CPlayer_ViewModelServices
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_hViewModel (CHandle<CBaseViewModel>)
        public static class CCSPlayer_ViewModelServices {
            public const nint m_hViewModel = 0x40; // CHandle<C_BaseViewModel>[3]
        }
        // Parent: CBaseAnimGraph
        // Fields count: 0
        public static class C_WorldModelNametag {
        }
        // Parent: C_BasePropDoor
        // Fields count: 0
        public static class C_PropDoorRotating {
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
        public static class C_Team {
            public const nint m_aPlayerControllers = 0x6D0; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
            public const nint m_aPlayers = 0x6E8; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
            public const nint m_iScore = 0x700; // int32
            public const nint m_szTeamname = 0x704; // char[129]
        }
        // Parent: C_SoundAreaEntityBase
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_vMin (Vector)
        // NetworkVarNames: m_vMax (Vector)
        public static class C_SoundAreaEntityOrientedBox {
            public const nint m_vMin = 0x6F4; // Vector
            public const nint m_vMax = 0x700; // Vector
        }
        // Parent: C_TonemapController2
        // Fields count: 0
        public static class C_TonemapController2Alias_env_tonemap_controller2 {
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
        public static class CProjectedTextureBase {
            public const nint m_hTargetEntity = 0xC; // CHandle<C_BaseEntity>
            public const nint m_bState = 0x10; // bool
            public const nint m_bAlwaysUpdate = 0x11; // bool
            public const nint m_flLightFOV = 0x14; // float32
            public const nint m_bEnableShadows = 0x18; // bool
            public const nint m_bSimpleProjection = 0x19; // bool
            public const nint m_bLightOnlyTarget = 0x1A; // bool
            public const nint m_bLightWorld = 0x1B; // bool
            public const nint m_bCameraSpace = 0x1C; // bool
            public const nint m_flBrightnessScale = 0x20; // float32
            public const nint m_LightColor = 0x24; // Color
            public const nint m_flIntensity = 0x28; // float32
            public const nint m_flLinearAttenuation = 0x2C; // float32
            public const nint m_flQuadraticAttenuation = 0x30; // float32
            public const nint m_bVolumetric = 0x34; // bool
            public const nint m_flVolumetricIntensity = 0x38; // float32
            public const nint m_flNoiseStrength = 0x3C; // float32
            public const nint m_flFlashlightTime = 0x40; // float32
            public const nint m_nNumPlanes = 0x44; // uint32
            public const nint m_flPlaneOffset = 0x48; // float32
            public const nint m_flColorTransitionTime = 0x4C; // float32
            public const nint m_flAmbient = 0x50; // float32
            public const nint m_SpotlightTextureName = 0x54; // char[512]
            public const nint m_nSpotlightTextureFrame = 0x254; // int32
            public const nint m_nShadowQuality = 0x258; // uint32
            public const nint m_flNearZ = 0x25C; // float32
            public const nint m_flFarZ = 0x260; // float32
            public const nint m_flProjectionSize = 0x264; // float32
            public const nint m_flRotation = 0x268; // float32
            public const nint m_bFlipHorizontal = 0x26C; // bool
        }
        // Parent: CBaseAnimGraph
        // Fields count: 6
        public static class C_PickUpModelSlerper {
            public const nint m_hPlayerParent = 0xE78; // CHandle<C_BaseEntity>
            public const nint m_hItem = 0xE7C; // CHandle<C_BaseEntity>
            public const nint m_flTimePickedUp = 0xE80; // float32
            public const nint m_angOriginal = 0xE84; // QAngle
            public const nint m_vecPosOriginal = 0xE90; // Vector
            public const nint m_angRandom = 0xEA0; // QAngle
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
        public static class C_EnvLightProbeVolume {
            public const nint m_hLightProbeTexture = 0x16A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hLightProbeDirectLightIndicesTexture = 0x16B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hLightProbeDirectLightScalarsTexture = 0x16B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hLightProbeDirectLightShadowsTexture = 0x16C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_vBoxMins = 0x16C8; // Vector
            public const nint m_vBoxMaxs = 0x16D4; // Vector
            public const nint m_bMoveable = 0x16E0; // bool
            public const nint m_nHandshake = 0x16E4; // int32
            public const nint m_nPriority = 0x16E8; // int32
            public const nint m_bStartDisabled = 0x16EC; // bool
            public const nint m_nLightProbeSizeX = 0x16F0; // int32
            public const nint m_nLightProbeSizeY = 0x16F4; // int32
            public const nint m_nLightProbeSizeZ = 0x16F8; // int32
            public const nint m_nLightProbeAtlasX = 0x16FC; // int32
            public const nint m_nLightProbeAtlasY = 0x1700; // int32
            public const nint m_nLightProbeAtlasZ = 0x1704; // int32
            public const nint m_bEnabled = 0x1711; // bool
        }
        // Parent: CBaseAnimGraph
        // Fields count: 0
        public static class C_ViewmodelAttachmentModel {
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_nItemDefIndex (uint16)
        // NetworkVarNames: m_nCount (uint16)
        public static class WeaponPurchaseCount_t {
            public const nint m_nItemDefIndex = 0x30; // uint16
            public const nint m_nCount = 0x32; // uint16
        }
        // Parent: C_BaseCSGrenade
        // Fields count: 0
        public static class C_SmokeGrenade {
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponGalilAR {
        }
        // Parent: CBaseAnimGraph
        // Fields count: 0
        public static class C_WorldModelGloves {
        }
        // Parent: C_ModelPointEntity
        // Fields count: 0
        public static class C_EnvProjectedTexture {
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
        public static class CCSPlayerBase_CameraServices {
            public const nint m_iFOV = 0x210; // uint32
            public const nint m_iFOVStart = 0x214; // uint32
            public const nint m_flFOVTime = 0x218; // GameTime_t
            public const nint m_flFOVRate = 0x21C; // float32
            public const nint m_hZoomOwner = 0x220; // CHandle<C_BaseEntity>
            public const nint m_flLastShotFOV = 0x224; // float32
        }
        // Parent: C_BasePlayerPawn
        // Fields count: 142
        //
        // Metadata:
        // MNetworkExcludeByName
        // MNetworkExcludeByName
        // MNetworkExcludeByUserGroup
        // MNetworkExcludeByName
        // MNetworkExcludeByName
        // MNetworkIncludeByName
        // NetworkVarNames: m_pPingServices (CCSPlayer_PingServices*)
        // NetworkVarNames: m_pViewModelServices (CPlayer_ViewModelServices*)
        // NetworkVarNames: m_bIsScoped (bool)
        // NetworkVarNames: m_bIsWalking (bool)
        // NetworkVarNames: m_bResumeZoom (bool)
        // NetworkVarNames: m_iPlayerState (CSPlayerState)
        // NetworkVarNames: m_bIsDefusing (bool)
        // NetworkVarNames: m_bIsGrabbingHostage (bool)
        // NetworkVarNames: m_iBlockingUseActionInProgress (CSPlayerBlockingUseAction_t)
        // NetworkVarNames: m_bIsRescuing (bool)
        // NetworkVarNames: m_fImmuneToGunGameDamageTime (GameTime_t)
        // NetworkVarNames: m_bGunGameImmunity (bool)
        // NetworkVarNames: m_GunGameImmunityColor (Color)
        // NetworkVarNames: m_bHasMovedSinceSpawn (bool)
        // NetworkVarNames: m_fMolotovUseTime (float)
        // NetworkVarNames: m_fMolotovDamageTime (float)
        // NetworkVarNames: m_nWhichBombZone (int)
        // NetworkVarNames: m_bInNoDefuseArea (bool)
        // NetworkVarNames: m_iThrowGrenadeCounter (int)
        // NetworkVarNames: m_bWaitForNoAttack (bool)
        // NetworkVarNames: m_flGuardianTooFarDistFrac (float)
        // NetworkVarNames: m_flDetectedByEnemySensorTime (GameTime_t)
        // NetworkVarNames: m_bKilledByTaser (bool)
        // NetworkVarNames: m_iMoveState (int)
        // NetworkVarNames: m_bCanMoveDuringFreezePeriod (bool)
        // NetworkVarNames: m_flLowerBodyYawTarget (float)
        // NetworkVarNames: m_bStrafing (bool)
        // NetworkVarNames: m_flEmitSoundTime (GameTime_t)
        // NetworkVarNames: m_iAddonBits (int)
        // NetworkVarNames: m_iPrimaryAddon (int)
        // NetworkVarNames: m_iSecondaryAddon (int)
        // NetworkVarNames: m_iProgressBarDuration (int)
        // NetworkVarNames: m_flProgressBarStartTime (float)
        // NetworkVarNames: m_iDirection (int)
        // NetworkVarNames: m_iShotsFired (int)
        // NetworkVarNames: m_bNightVisionOn (bool)
        // NetworkVarNames: m_bHasNightVision (bool)
        // NetworkVarNames: m_flVelocityModifier (float)
        // NetworkVarNames: m_flHitHeading (float)
        // NetworkVarNames: m_nHitBodyPart (int)
        // NetworkVarNames: m_iStartAccount (int)
        // NetworkVarNames: m_flFlashMaxAlpha (float)
        // NetworkVarNames: m_flFlashDuration (float)
        // NetworkVarNames: m_unCurrentEquipmentValue (uint16)
        // NetworkVarNames: m_unRoundStartEquipmentValue (uint16)
        // NetworkVarNames: m_unFreezetimeEndEquipmentValue (uint16)
        // NetworkVarNames: m_nHeavyAssaultSuitCooldownRemaining (int)
        // NetworkVarNames: m_ArmorValue (int32)
        // NetworkVarNames: m_bHud_MiniScoreHidden (bool)
        // NetworkVarNames: m_bHud_RadarHidden (bool)
        // NetworkVarNames: m_nLastKillerIndex (CEntityIndex)
        // NetworkVarNames: m_nLastConcurrentKilled (int)
        // NetworkVarNames: m_nDeathCamMusic (int)
        // NetworkVarNames: m_cycleLatch (int)
        // NetworkVarNames: m_vecPlayerPatchEconIndices (uint32)
        // NetworkVarNames: m_bHideTargetID (bool)
        // NetworkVarNames: m_entitySpottedState (EntitySpottedState_t)
        // NetworkVarNames: m_nSurvivalTeamNumber (int)
        // NetworkVarNames: m_bKilledByHeadshot (bool)
        // NetworkVarNames: m_hOriginalController (CHandle<CCSPlayerController>)
        public static class C_CSPlayerPawnBase {
            public const nint m_pPingServices = 0x1260; // CCSPlayer_PingServices*
            public const nint m_pViewModelServices = 0x1268; // CPlayer_ViewModelServices*
            public const nint m_fRenderingClipPlane = 0x1278; // float32[4]
            public const nint m_nLastClipPlaneSetupFrame = 0x1288; // int32
            public const nint m_vecLastClipCameraPos = 0x128C; // Vector
            public const nint m_vecLastClipCameraForward = 0x1298; // Vector
            public const nint m_bClipHitStaticWorld = 0x12A4; // bool
            public const nint m_bCachedPlaneIsValid = 0x12A5; // bool
            public const nint m_pClippingWeapon = 0x12A8; // C_CSWeaponBase*
            public const nint m_previousPlayerState = 0x12B0; // CSPlayerState
            public const nint m_flLastCollisionCeiling = 0x12B4; // float32
            public const nint m_flLastCollisionCeilingChangeTime = 0x12B8; // float32
            public const nint m_grenadeParameterStashTime = 0x12D8; // GameTime_t
            public const nint m_bGrenadeParametersStashed = 0x12DC; // bool
            public const nint m_angStashedShootAngles = 0x12E0; // QAngle
            public const nint m_vecStashedGrenadeThrowPosition = 0x12EC; // Vector
            public const nint m_vecStashedVelocity = 0x12F8; // Vector
            public const nint m_angShootAngleHistory = 0x1304; // QAngle[2]
            public const nint m_vecThrowPositionHistory = 0x131C; // Vector[2]
            public const nint m_vecVelocityHistory = 0x1334; // Vector[2]
            public const nint m_thirdPersonHeading = 0x1350; // QAngle
            public const nint m_flSlopeDropOffset = 0x1368; // float32
            public const nint m_flSlopeDropHeight = 0x1378; // float32
            public const nint m_vHeadConstraintOffset = 0x1388; // Vector
            public const nint m_bIsScoped = 0x13A0; // bool
            public const nint m_bIsWalking = 0x13A1; // bool
            public const nint m_bResumeZoom = 0x13A2; // bool
            public const nint m_iPlayerState = 0x13A4; // CSPlayerState
            public const nint m_bIsDefusing = 0x13A8; // bool
            public const nint m_bIsGrabbingHostage = 0x13A9; // bool
            public const nint m_iBlockingUseActionInProgress = 0x13AC; // CSPlayerBlockingUseAction_t
            public const nint m_bIsRescuing = 0x13B0; // bool
            public const nint m_fImmuneToGunGameDamageTime = 0x13B4; // GameTime_t
            public const nint m_fImmuneToGunGameDamageTimeLast = 0x13B8; // GameTime_t
            public const nint m_bGunGameImmunity = 0x13BC; // bool
            public const nint m_GunGameImmunityColor = 0x13BD; // Color
            public const nint m_bHasMovedSinceSpawn = 0x13C1; // bool
            public const nint m_fMolotovUseTime = 0x13C4; // float32
            public const nint m_fMolotovDamageTime = 0x13C8; // float32
            public const nint m_nWhichBombZone = 0x13CC; // int32
            public const nint m_bInNoDefuseArea = 0x13D0; // bool
            public const nint m_iThrowGrenadeCounter = 0x13D4; // int32
            public const nint m_bWaitForNoAttack = 0x13D8; // bool
            public const nint m_flGuardianTooFarDistFrac = 0x13DC; // float32
            public const nint m_flDetectedByEnemySensorTime = 0x13E0; // GameTime_t
            public const nint m_flNextGuardianTooFarWarning = 0x13E4; // float32
            public const nint m_bSuppressGuardianTooFarWarningAudio = 0x13E8; // bool
            public const nint m_bKilledByTaser = 0x13E9; // bool
            public const nint m_iMoveState = 0x13EC; // int32
            public const nint m_bCanMoveDuringFreezePeriod = 0x13F0; // bool
            public const nint m_flLowerBodyYawTarget = 0x13F4; // float32
            public const nint m_bStrafing = 0x13F8; // bool
            public const nint m_flLastSpawnTimeIndex = 0x13FC; // GameTime_t
            public const nint m_flEmitSoundTime = 0x1400; // GameTime_t
            public const nint m_iAddonBits = 0x1404; // int32
            public const nint m_iPrimaryAddon = 0x1408; // int32
            public const nint m_iSecondaryAddon = 0x140C; // int32
            public const nint m_iProgressBarDuration = 0x1410; // int32
            public const nint m_flProgressBarStartTime = 0x1414; // float32
            public const nint m_iDirection = 0x1418; // int32
            public const nint m_iShotsFired = 0x141C; // int32
            public const nint m_bNightVisionOn = 0x1420; // bool
            public const nint m_bHasNightVision = 0x1421; // bool
            public const nint m_flVelocityModifier = 0x1424; // float32
            public const nint m_flHitHeading = 0x1428; // float32
            public const nint m_nHitBodyPart = 0x142C; // int32
            public const nint m_iStartAccount = 0x1430; // int32
            public const nint m_vecIntroStartEyePosition = 0x1434; // Vector
            public const nint m_vecIntroStartPlayerForward = 0x1440; // Vector
            public const nint m_flClientDeathTime = 0x144C; // GameTime_t
            public const nint m_flNightVisionAlpha = 0x1450; // float32
            public const nint m_bScreenTearFrameCaptured = 0x1454; // bool
            public const nint m_flFlashBangTime = 0x1458; // float32
            public const nint m_flFlashScreenshotAlpha = 0x145C; // float32
            public const nint m_flFlashOverlayAlpha = 0x1460; // float32
            public const nint m_bFlashBuildUp = 0x1464; // bool
            public const nint m_bFlashDspHasBeenCleared = 0x1465; // bool
            public const nint m_bFlashScreenshotHasBeenGrabbed = 0x1466; // bool
            public const nint m_flFlashMaxAlpha = 0x1468; // float32
            public const nint m_flFlashDuration = 0x146C; // float32
            public const nint m_lastStandingPos = 0x1470; // Vector
            public const nint m_vecLastMuzzleFlashPos = 0x147C; // Vector
            public const nint m_angLastMuzzleFlashAngle = 0x1488; // QAngle
            public const nint m_hMuzzleFlashShape = 0x1494; // CHandle<C_BaseEntity>
            public const nint m_iHealthBarRenderMaskIndex = 0x1498; // int32
            public const nint m_flHealthFadeValue = 0x149C; // float32
            public const nint m_flHealthFadeAlpha = 0x14A0; // float32
            public const nint m_nMyCollisionGroup = 0x14A4; // int32
            public const nint m_ignoreLadderJumpTime = 0x14A8; // float32
            public const nint m_ladderSurpressionTimer = 0x14B0; // CountdownTimer
            public const nint m_lastLadderNormal = 0x14C8; // Vector
            public const nint m_lastLadderPos = 0x14D4; // Vector
            public const nint m_flDeathCCWeight = 0x14E8; // float32
            public const nint m_bOldIsScoped = 0x14EC; // bool
            public const nint m_flPrevRoundEndTime = 0x14F0; // float32
            public const nint m_flPrevMatchEndTime = 0x14F4; // float32
            public const nint m_unCurrentEquipmentValue = 0x14F8; // uint16
            public const nint m_unRoundStartEquipmentValue = 0x14FA; // uint16
            public const nint m_unFreezetimeEndEquipmentValue = 0x14FC; // uint16
            public const nint m_vecThirdPersonViewPositionOverride = 0x1500; // Vector
            public const nint m_nHeavyAssaultSuitCooldownRemaining = 0x150C; // int32
            public const nint m_ArmorValue = 0x1510; // int32
            public const nint m_angEyeAngles = 0x1518; // QAngle
            public const nint m_fNextThinkPushAway = 0x1530; // float32
            public const nint m_bShouldAutobuyDMWeapons = 0x1534; // bool
            public const nint m_bShouldAutobuyNow = 0x1535; // bool
            public const nint m_bHud_MiniScoreHidden = 0x1536; // bool
            public const nint m_bHud_RadarHidden = 0x1537; // bool
            public const nint m_nLastKillerIndex = 0x1538; // CEntityIndex
            public const nint m_nLastConcurrentKilled = 0x153C; // int32
            public const nint m_nDeathCamMusic = 0x1540; // int32
            public const nint m_iIDEntIndex = 0x1544; // CEntityIndex
            public const nint m_delayTargetIDTimer = 0x1548; // CountdownTimer
            public const nint m_iTargetedWeaponEntIndex = 0x1560; // CEntityIndex
            public const nint m_iOldIDEntIndex = 0x1564; // CEntityIndex
            public const nint m_holdTargetIDTimer = 0x1568; // CountdownTimer
            public const nint m_flCurrentMusicStartTime = 0x1584; // float32
            public const nint m_flMusicRoundStartTime = 0x1588; // float32
            public const nint m_bDeferStartMusicOnWarmup = 0x158C; // bool
            public const nint m_cycleLatch = 0x1590; // int32
            public const nint m_serverIntendedCycle = 0x1594; // float32
            public const nint m_vecPlayerPatchEconIndices = 0x1598; // uint32[5]
            public const nint m_bHideTargetID = 0x15B4; // bool
            public const nint m_flLastSmokeOverlayAlpha = 0x15B8; // float32
            public const nint m_flLastSmokeAge = 0x15BC; // float32
            public const nint m_vLastSmokeOverlayColor = 0x15C0; // Vector
            public const nint m_nPlayerSmokedFx = 0x15CC; // ParticleIndex_t
            public const nint m_nPlayerInfernoBodyFx = 0x15D0; // ParticleIndex_t
            public const nint m_nPlayerInfernoFootFx = 0x15D4; // ParticleIndex_t
            public const nint m_flNextMagDropTime = 0x15D8; // float32
            public const nint m_nLastMagDropAttachmentIndex = 0x15DC; // int32
            public const nint m_vecBulletHitModels = 0x15E0; // CUtlVector<C_BulletHitModel*>
            public const nint m_vecPickupModelSlerpers = 0x15F8; // CUtlVector<C_PickUpModelSlerper*>
            public const nint m_vecLastAliveLocalVelocity = 0x1610; // Vector
            public const nint m_entitySpottedState = 0x1638; // EntitySpottedState_t
            public const nint m_nSurvivalTeamNumber = 0x1650; // int32
            public const nint m_bGuardianShouldSprayCustomXMark = 0x1654; // bool
            public const nint m_bHasDeathInfo = 0x1655; // bool
            public const nint m_flDeathInfoTime = 0x1658; // float32
            public const nint m_vecDeathInfoOrigin = 0x165C; // Vector
            public const nint m_bKilledByHeadshot = 0x1668; // bool
            public const nint m_hOriginalController = 0x166C; // CHandle<CCSPlayerController>
        }
        // Parent: C_WeaponBaseItem
        // Fields count: 0
        public static class C_Item_Healthshot {
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
        public static class C_EnvWindShared {
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
            public const nint m_flVariationTime = 0x70; // GameTime_t
            public const nint m_flSwayTime = 0x74; // GameTime_t
            public const nint m_flSimTime = 0x78; // GameTime_t
            public const nint m_flSwitchTime = 0x7C; // GameTime_t
            public const nint m_flAveWindSpeed = 0x80; // float32
            public const nint m_bGusting = 0x84; // bool
            public const nint m_flWindAngleVariation = 0x88; // float32
            public const nint m_flWindSpeedVariation = 0x8C; // float32
            public const nint m_iEntIndex = 0x90; // CEntityIndex
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
        public static class C_PostProcessingVolume {
            public const nint m_hPostSettings = 0xC68; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
            public const nint m_flFadeDuration = 0xC70; // float32
            public const nint m_flMinLogExposure = 0xC74; // float32
            public const nint m_flMaxLogExposure = 0xC78; // float32
            public const nint m_flMinExposure = 0xC7C; // float32
            public const nint m_flMaxExposure = 0xC80; // float32
            public const nint m_flExposureCompensation = 0xC84; // float32
            public const nint m_flExposureFadeSpeedUp = 0xC88; // float32
            public const nint m_flExposureFadeSpeedDown = 0xC8C; // float32
            public const nint m_flTonemapEVSmoothingRange = 0xC90; // float32
            public const nint m_bMaster = 0xC94; // bool
            public const nint m_bExposureControl = 0xC95; // bool
            public const nint m_flRate = 0xC98; // float32
            public const nint m_flTonemapPercentTarget = 0xC9C; // float32
            public const nint m_flTonemapPercentBrightPixels = 0xCA0; // float32
            public const nint m_flTonemapMinAvgLum = 0xCA4; // float32
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_hPlayerPing (CHandle<CBaseEntity>)
        public static class CCSPlayer_PingServices {
            public const nint m_hPlayerPing = 0x40; // CHandle<C_BaseEntity>
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayer_FlashlightServices {
        }
        // Parent: C_BaseCSGrenadeProjectile
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_nDecoyShotTick (int)
        public static class C_DecoyProjectile {
            public const nint m_nDecoyShotTick = 0x10EC; // int32
            public const nint m_nClientLastKnownDecoyShotTick = 0x10F0; // int32
            public const nint m_flTimeParticleEffectSpawn = 0x1118; // GameTime_t
        }
        // Parent: CBaseAnimGraph
        // Fields count: 0
        public static class C_WaterBullet {
        }
        // Parent: C_CSPlayerPawn
        // Fields count: 3
        public static class C_CSGO_PreviewPlayer {
            public const nint m_animgraph = 0x32C0; // CUtlString
            public const nint m_animgraphCharacterModeString = 0x32C8; // CGlobalSymbol
            public const nint m_flInitialModelScale = 0x32D0; // float32
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
        public static class CBaseAnimGraphController {
            public const nint m_animGraphNetworkedVars = 0x18; // CAnimGraphNetworkedVariables
            public const nint m_bSequenceFinished = 0x14A8; // bool
            public const nint m_flSoundSyncTime = 0x14AC; // float32
            public const nint m_hSequence = 0x14B0; // HSequence
            public const nint m_flSeqStartTime = 0x14B4; // GameTime_t
            public const nint m_flSeqFixedCycle = 0x14B8; // float32
            public const nint m_nAnimLoopMode = 0x14BC; // AnimLoopMode_t
            public const nint m_flPlaybackRate = 0x14C0; // CNetworkedQuantizedFloat
            public const nint m_nNotifyState = 0x14CC; // SequenceFinishNotifyState_t
            public const nint m_bNetworkedAnimationInputsChanged = 0x14CE; // bool
            public const nint m_bNetworkedSequenceChanged = 0x14CF; // bool
            public const nint m_bLastUpdateSkipped = 0x14D0; // bool
            public const nint m_flPrevAnimUpdateTime = 0x14D4; // GameTime_t
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
        public static class C_PathParticleRope {
            public const nint m_bStartActive = 0x6D0; // bool
            public const nint m_flMaxSimulationTime = 0x6D4; // float32
            public const nint m_iszEffectName = 0x6D8; // CUtlSymbolLarge
            public const nint m_PathNodes_Name = 0x6E0; // CUtlVector<CUtlSymbolLarge>
            public const nint m_flParticleSpacing = 0x6F8; // float32
            public const nint m_flSlack = 0x6FC; // float32
            public const nint m_flRadius = 0x700; // float32
            public const nint m_ColorTint = 0x704; // Color
            public const nint m_nEffectState = 0x708; // int32
            public const nint m_iEffectIndex = 0x710; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_PathNodes_Position = 0x718; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_TangentIn = 0x730; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_TangentOut = 0x748; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_Color = 0x760; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_PinEnabled = 0x778; // C_NetworkUtlVectorBase<bool>
            public const nint m_PathNodes_RadiusScale = 0x790; // C_NetworkUtlVectorBase<float32>
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
        public static class C_BasePlayerWeapon {
            public const nint m_nNextPrimaryAttackTick = 0x2460; // GameTick_t
            public const nint m_flNextPrimaryAttackTickRatio = 0x2464; // float32
            public const nint m_nNextSecondaryAttackTick = 0x2468; // GameTick_t
            public const nint m_flNextSecondaryAttackTickRatio = 0x246C; // float32
            public const nint m_iClip1 = 0x2470; // int32
            public const nint m_iClip2 = 0x2474; // int32
            public const nint m_pReserveAmmo = 0x2478; // int32[2]
        }
        // Parent: CEntitySubclassVDataBase
        // Fields count: 20
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBasePlayerWeaponVData {
            public const nint m_szWorldModel = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_bBuiltRightHanded = 0x108; // bool
            public const nint m_bAllowFlipping = 0x109; // bool
            public const nint m_sMuzzleAttachment = 0x110; // CUtlString
            public const nint m_szMuzzleFlashParticle = 0x118; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
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
            public const nint m_bLinkedCooldowns = 0x218; // bool
            public const nint m_aShootSounds = 0x220; // CUtlMap<WeaponSound_t,CSoundEventName>
            public const nint m_iSlot = 0x240; // int32
            public const nint m_iPosition = 0x244; // int32
        }
        // Parent: C_BaseTrigger
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_flFluidDensity (float)
        public static class C_TriggerBuoyancy {
            public const nint m_BuoyancyHelper = 0xC58; // CBuoyancyHelper
            public const nint m_flFluidDensity = 0xC78; // float32
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
        public static class C_RopeKeyframe {
            public const nint m_LinksTouchingSomething = 0xC58; // CBitVec<10>
            public const nint m_nLinksTouchingSomething = 0xC5C; // int32
            public const nint m_bApplyWind = 0xC60; // bool
            public const nint m_fPrevLockedPoints = 0xC64; // int32
            public const nint m_iForcePointMoveCounter = 0xC68; // int32
            public const nint m_bPrevEndPointPos = 0xC6C; // bool[2]
            public const nint m_vPrevEndPointPos = 0xC70; // Vector[2]
            public const nint m_flCurScroll = 0xC88; // float32
            public const nint m_flScrollSpeed = 0xC8C; // float32
            public const nint m_RopeFlags = 0xC90; // uint16
            public const nint m_iRopeMaterialModelIndex = 0xC98; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_LightValues = 0xF10; // Vector[10]
            public const nint m_nSegments = 0xF88; // uint8
            public const nint m_hStartPoint = 0xF8C; // CHandle<C_BaseEntity>
            public const nint m_hEndPoint = 0xF90; // CHandle<C_BaseEntity>
            public const nint m_iStartAttachment = 0xF94; // AttachmentHandle_t
            public const nint m_iEndAttachment = 0xF95; // AttachmentHandle_t
            public const nint m_Subdiv = 0xF96; // uint8
            public const nint m_RopeLength = 0xF98; // int16
            public const nint m_Slack = 0xF9A; // int16
            public const nint m_TextureScale = 0xF9C; // float32
            public const nint m_fLockedPoints = 0xFA0; // uint8
            public const nint m_nChangeCount = 0xFA1; // uint8
            public const nint m_Width = 0xFA4; // float32
            public const nint m_PhysicsDelegate = 0xFA8; // C_RopeKeyframe::CPhysicsDelegate
            public const nint m_hMaterial = 0xFB8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_TextureHeight = 0xFC0; // int32
            public const nint m_vecImpulse = 0xFC4; // Vector
            public const nint m_vecPreviousImpulse = 0xFD0; // Vector
            public const nint m_flCurrentGustTimer = 0xFDC; // float32
            public const nint m_flCurrentGustLifetime = 0xFE0; // float32
            public const nint m_flTimeToNextGust = 0xFE4; // float32
            public const nint m_vWindDir = 0xFE8; // Vector
            public const nint m_vColorMod = 0xFF4; // Vector
            public const nint m_vCachedEndPointAttachmentPos = 0x1000; // Vector[2]
            public const nint m_vCachedEndPointAttachmentAngle = 0x1018; // QAngle[2]
            public const nint m_bConstrainBetweenEndpoints = 0x1030; // bool
            public const nint m_bEndPointAttachmentPositionsDirty = 0x0; // bitfield:1
            public const nint m_bEndPointAttachmentAnglesDirty = 0x0; // bitfield:1
            public const nint m_bNewDataThisFrame = 0x0; // bitfield:1
            public const nint m_bPhysicsInitted = 0x0; // bitfield:1
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
        public static class C_GradientFog {
            public const nint m_hGradientFogTexture = 0x6D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_flFogStartDistance = 0x6D8; // float32
            public const nint m_flFogEndDistance = 0x6DC; // float32
            public const nint m_bHeightFogEnabled = 0x6E0; // bool
            public const nint m_flFogStartHeight = 0x6E4; // float32
            public const nint m_flFogEndHeight = 0x6E8; // float32
            public const nint m_flFarZ = 0x6EC; // float32
            public const nint m_flFogMaxOpacity = 0x6F0; // float32
            public const nint m_flFogFalloffExponent = 0x6F4; // float32
            public const nint m_flFogVerticalExponent = 0x6F8; // float32
            public const nint m_fogColor = 0x6FC; // Color
            public const nint m_flFogStrength = 0x700; // float32
            public const nint m_flFadeTime = 0x704; // float32
            public const nint m_bStartDisabled = 0x708; // bool
            public const nint m_bIsEnabled = 0x709; // bool
            public const nint m_bGradientFogNeedsTextures = 0x70A; // bool
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_bSpotted (bool)
        // NetworkVarNames: m_bSpottedByMask (uint32)
        public static class EntitySpottedState_t {
            public const nint m_bSpotted = 0x8; // bool
            public const nint m_bSpottedByMask = 0xC; // uint32[2]
        }
        // Parent: C_EconEntity
        // Fields count: 2
        public static class C_EconWearable {
            public const nint m_nForceSkin = 0x2460; // int32
            public const nint m_bAlwaysAllow = 0x2464; // bool
        }
        // Parent: C_CSGO_TeamIntroCharacterPosition
        // Fields count: 0
        public static class CCSGO_WingmanIntroCharacterPosition {
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
        public static class CSMatchStats_t {
            public const nint m_iEnemy5Ks = 0x64; // int32
            public const nint m_iEnemy4Ks = 0x68; // int32
            public const nint m_iEnemy3Ks = 0x6C; // int32
            public const nint m_iEnemyKnifeKills = 0x70; // int32
            public const nint m_iEnemyTaserKills = 0x74; // int32
        }
        // Parent: C_BaseModelEntity
        // Fields count: 0
        public static class C_BaseToggle {
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponRevolver {
        }
        // Parent: C_Sprite
        // Fields count: 0
        public static class C_FireFromAboveSprite {
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
        public static class C_EnvCombinedLightProbeVolume {
            public const nint m_Color = 0x1728; // Color
            public const nint m_flBrightness = 0x172C; // float32
            public const nint m_hCubemapTexture = 0x1730; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_bCustomCubemapTexture = 0x1738; // bool
            public const nint m_hLightProbeTexture = 0x1740; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hLightProbeDirectLightIndicesTexture = 0x1748; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hLightProbeDirectLightScalarsTexture = 0x1750; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hLightProbeDirectLightShadowsTexture = 0x1758; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_vBoxMins = 0x1760; // Vector
            public const nint m_vBoxMaxs = 0x176C; // Vector
            public const nint m_bMoveable = 0x1778; // bool
            public const nint m_nHandshake = 0x177C; // int32
            public const nint m_nEnvCubeMapArrayIndex = 0x1780; // int32
            public const nint m_nPriority = 0x1784; // int32
            public const nint m_bStartDisabled = 0x1788; // bool
            public const nint m_flEdgeFadeDist = 0x178C; // float32
            public const nint m_vEdgeFadeDists = 0x1790; // Vector
            public const nint m_nLightProbeSizeX = 0x179C; // int32
            public const nint m_nLightProbeSizeY = 0x17A0; // int32
            public const nint m_nLightProbeSizeZ = 0x17A4; // int32
            public const nint m_nLightProbeAtlasX = 0x17A8; // int32
            public const nint m_nLightProbeAtlasY = 0x17AC; // int32
            public const nint m_nLightProbeAtlasZ = 0x17B0; // int32
            public const nint m_bEnabled = 0x17C9; // bool
        }
        // Parent: C_SoundOpvarSetPointBase
        // Fields count: 0
        public static class C_SoundOpvarSetOBBWindEntity {
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_Handle (ModelConfigHandle_t)
        // NetworkVarNames: m_Name (string_t)
        // NetworkVarNames: m_AssociatedEntities (CHandle<C_BaseModelEntity>)
        // NetworkVarNames: m_AssociatedEntityNames (string_t)
        public static class ActiveModelConfig_t {
            public const nint m_Handle = 0x28; // ModelConfigHandle_t
            public const nint m_Name = 0x30; // CUtlSymbolLarge
            public const nint m_AssociatedEntities = 0x38; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
            public const nint m_AssociatedEntityNames = 0x50; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponMP5SD {
        }
        // Parent: C_PointCamera
        // Fields count: 1
        public static class C_PointCameraVFOV {
            public const nint m_flVerticalFOV = 0x730; // float32
        }
        // Parent: CPlayer_ItemServices
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_bHasDefuser (bool)
        // NetworkVarNames: m_bHasHelmet (bool)
        // NetworkVarNames: m_bHasHeavyArmor (bool)
        public static class CCSPlayer_ItemServices {
            public const nint m_bHasDefuser = 0x40; // bool
            public const nint m_bHasHelmet = 0x41; // bool
            public const nint m_bHasHeavyArmor = 0x42; // bool
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
        public static class C_BarnLight {
            public const nint m_bEnabled = 0xC50; // bool
            public const nint m_nColorMode = 0xC54; // int32
            public const nint m_Color = 0xC58; // Color
            public const nint m_flColorTemperature = 0xC5C; // float32
            public const nint m_flBrightness = 0xC60; // float32
            public const nint m_flBrightnessScale = 0xC64; // float32
            public const nint m_nDirectLight = 0xC68; // int32
            public const nint m_nBakedShadowIndex = 0xC6C; // int32
            public const nint m_nLuminaireShape = 0xC70; // int32
            public const nint m_flLuminaireSize = 0xC74; // float32
            public const nint m_flLuminaireAnisotropy = 0xC78; // float32
            public const nint m_LightStyleString = 0xC80; // CUtlString
            public const nint m_flLightStyleStartTime = 0xC88; // GameTime_t
            public const nint m_QueuedLightStyleStrings = 0xC90; // C_NetworkUtlVectorBase<CUtlString>
            public const nint m_LightStyleEvents = 0xCA8; // C_NetworkUtlVectorBase<CUtlString>
            public const nint m_LightStyleTargets = 0xCC0; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
            public const nint m_StyleEvent = 0xCD8; // CEntityIOOutput[4]
            public const nint m_hLightCookie = 0xD78; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_flShape = 0xD80; // float32
            public const nint m_flSoftX = 0xD84; // float32
            public const nint m_flSoftY = 0xD88; // float32
            public const nint m_flSkirt = 0xD8C; // float32
            public const nint m_flSkirtNear = 0xD90; // float32
            public const nint m_vSizeParams = 0xD94; // Vector
            public const nint m_flRange = 0xDA0; // float32
            public const nint m_vShear = 0xDA4; // Vector
            public const nint m_nBakeSpecularToCubemaps = 0xDB0; // int32
            public const nint m_vBakeSpecularToCubemapsSize = 0xDB4; // Vector
            public const nint m_nCastShadows = 0xDC0; // int32
            public const nint m_nShadowMapSize = 0xDC4; // int32
            public const nint m_nShadowPriority = 0xDC8; // int32
            public const nint m_bContactShadow = 0xDCC; // bool
            public const nint m_nBounceLight = 0xDD0; // int32
            public const nint m_flBounceScale = 0xDD4; // float32
            public const nint m_flMinRoughness = 0xDD8; // float32
            public const nint m_vAlternateColor = 0xDDC; // Vector
            public const nint m_fAlternateColorBrightness = 0xDE8; // float32
            public const nint m_nFog = 0xDEC; // int32
            public const nint m_flFogStrength = 0xDF0; // float32
            public const nint m_nFogShadows = 0xDF4; // int32
            public const nint m_flFogScale = 0xDF8; // float32
            public const nint m_flFadeSizeStart = 0xDFC; // float32
            public const nint m_flFadeSizeEnd = 0xE00; // float32
            public const nint m_flShadowFadeSizeStart = 0xE04; // float32
            public const nint m_flShadowFadeSizeEnd = 0xE08; // float32
            public const nint m_bPrecomputedFieldsValid = 0xE0C; // bool
            public const nint m_vPrecomputedBoundsMins = 0xE10; // Vector
            public const nint m_vPrecomputedBoundsMaxs = 0xE1C; // Vector
            public const nint m_vPrecomputedOBBOrigin = 0xE28; // Vector
            public const nint m_vPrecomputedOBBAngles = 0xE34; // QAngle
            public const nint m_vPrecomputedOBBExtent = 0xE40; // Vector
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
        public static class C_TonemapController2 {
            public const nint m_flAutoExposureMin = 0x6D0; // float32
            public const nint m_flAutoExposureMax = 0x6D4; // float32
            public const nint m_flTonemapPercentTarget = 0x6D8; // float32
            public const nint m_flTonemapPercentBrightPixels = 0x6DC; // float32
            public const nint m_flTonemapMinAvgLum = 0x6E0; // float32
            public const nint m_flExposureAdaptationSpeedUp = 0x6E4; // float32
            public const nint m_flExposureAdaptationSpeedDown = 0x6E8; // float32
            public const nint m_flTonemapEVSmoothingRange = 0x6EC; // float32
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponSG556 {
        }
        // Parent: C_BarnLight
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bShowLight (bool)
        public static class C_RectLight {
            public const nint m_bShowLight = 0xE98; // bool
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 6
        //
        // Metadata:
        // NetworkVarNames: m_iObserverMode (uint8)
        // NetworkVarNames: m_hObserverTarget (CHandle<CBaseEntity>)
        public static class CPlayer_ObserverServices {
            public const nint m_iObserverMode = 0x40; // uint8
            public const nint m_hObserverTarget = 0x44; // CHandle<C_BaseEntity>
            public const nint m_iObserverLastMode = 0x48; // ObserverMode_t
            public const nint m_bForcedObserverMode = 0x4C; // bool
            public const nint m_flObserverChaseDistance = 0x50; // float32
            public const nint m_flObserverChaseDistanceCalcTime = 0x54; // GameTime_t
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class CWeaponZoneRepulsor {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CPlayer_WaterServices {
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
        public static class C_EnvDecal {
            public const nint m_hDecalMaterial = 0xC50; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_flWidth = 0xC58; // float32
            public const nint m_flHeight = 0xC5C; // float32
            public const nint m_flDepth = 0xC60; // float32
            public const nint m_nRenderOrder = 0xC64; // uint32
            public const nint m_bProjectOnWorld = 0xC68; // bool
            public const nint m_bProjectOnCharacters = 0xC69; // bool
            public const nint m_bProjectOnWater = 0xC6A; // bool
            public const nint m_flDepthSortBias = 0xC6C; // float32
        }
        // Parent: CCSGameModeRules
        // Fields count: 0
        public static class CCSGameModeRules_Noop {
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
        public static class C_ColorCorrection {
            public const nint m_vecOrigin = 0x6D0; // Vector
            public const nint m_MinFalloff = 0x6DC; // float32
            public const nint m_MaxFalloff = 0x6E0; // float32
            public const nint m_flFadeInDuration = 0x6E4; // float32
            public const nint m_flFadeOutDuration = 0x6E8; // float32
            public const nint m_flMaxWeight = 0x6EC; // float32
            public const nint m_flCurWeight = 0x6F0; // float32
            public const nint m_netlookupFilename = 0x6F4; // char[512]
            public const nint m_bEnabled = 0x8F4; // bool
            public const nint m_bMaster = 0x8F5; // bool
            public const nint m_bClientSide = 0x8F6; // bool
            public const nint m_bExclusive = 0x8F7; // bool
            public const nint m_bEnabledOnClient = 0x8F8; // bool[1]
            public const nint m_flCurWeightOnClient = 0x8FC; // float32[1]
            public const nint m_bFadingIn = 0x900; // bool[1]
            public const nint m_flFadeStartWeight = 0x904; // float32[1]
            public const nint m_flFadeStartTime = 0x908; // float32[1]
            public const nint m_flFadeDuration = 0x90C; // float32[1]
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSWeaponBaseAPI {
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_Attributes (CEconItemAttribute)
        public static class CAttributeList {
            public const nint m_Attributes = 0x8; // C_UtlVectorEmbeddedNetworkVar<CEconItemAttribute>
            public const nint m_pManager = 0x58; // CAttributeManager*
        }
        // Parent: C_CSGO_TeamPreviewCamera
        // Fields count: 0
        public static class C_CSGO_CounterTerroristWingmanIntroCamera {
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
        public static class CLightComponent {
            public const nint __m_pChainEntity = 0x58; // CNetworkVarChainer
            public const nint m_Color = 0x95; // Color
            public const nint m_SecondaryColor = 0x99; // Color
            public const nint m_flBrightness = 0xA0; // float32
            public const nint m_flBrightnessScale = 0xA4; // float32
            public const nint m_flBrightnessMult = 0xA8; // float32
            public const nint m_flRange = 0xAC; // float32
            public const nint m_flFalloff = 0xB0; // float32
            public const nint m_flAttenuation0 = 0xB4; // float32
            public const nint m_flAttenuation1 = 0xB8; // float32
            public const nint m_flAttenuation2 = 0xBC; // float32
            public const nint m_flTheta = 0xC0; // float32
            public const nint m_flPhi = 0xC4; // float32
            public const nint m_hLightCookie = 0xC8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_nCascades = 0xD0; // int32
            public const nint m_nCastShadows = 0xD4; // int32
            public const nint m_nShadowWidth = 0xD8; // int32
            public const nint m_nShadowHeight = 0xDC; // int32
            public const nint m_bRenderDiffuse = 0xE0; // bool
            public const nint m_nRenderSpecular = 0xE4; // int32
            public const nint m_bRenderTransmissive = 0xE8; // bool
            public const nint m_flOrthoLightWidth = 0xEC; // float32
            public const nint m_flOrthoLightHeight = 0xF0; // float32
            public const nint m_nStyle = 0xF4; // int32
            public const nint m_Pattern = 0xF8; // CUtlString
            public const nint m_nCascadeRenderStaticObjects = 0x100; // int32
            public const nint m_flShadowCascadeCrossFade = 0x104; // float32
            public const nint m_flShadowCascadeDistanceFade = 0x108; // float32
            public const nint m_flShadowCascadeDistance0 = 0x10C; // float32
            public const nint m_flShadowCascadeDistance1 = 0x110; // float32
            public const nint m_flShadowCascadeDistance2 = 0x114; // float32
            public const nint m_flShadowCascadeDistance3 = 0x118; // float32
            public const nint m_nShadowCascadeResolution0 = 0x11C; // int32
            public const nint m_nShadowCascadeResolution1 = 0x120; // int32
            public const nint m_nShadowCascadeResolution2 = 0x124; // int32
            public const nint m_nShadowCascadeResolution3 = 0x128; // int32
            public const nint m_bUsesBakedShadowing = 0x12C; // bool
            public const nint m_nShadowPriority = 0x130; // int32
            public const nint m_nBakedShadowIndex = 0x134; // int32
            public const nint m_bRenderToCubemaps = 0x138; // bool
            public const nint m_nDirectLight = 0x13C; // int32
            public const nint m_nIndirectLight = 0x140; // int32
            public const nint m_flFadeMinDist = 0x144; // float32
            public const nint m_flFadeMaxDist = 0x148; // float32
            public const nint m_flShadowFadeMinDist = 0x14C; // float32
            public const nint m_flShadowFadeMaxDist = 0x150; // float32
            public const nint m_bEnabled = 0x154; // bool
            public const nint m_bFlicker = 0x155; // bool
            public const nint m_bPrecomputedFieldsValid = 0x156; // bool
            public const nint m_vPrecomputedBoundsMins = 0x158; // Vector
            public const nint m_vPrecomputedBoundsMaxs = 0x164; // Vector
            public const nint m_vPrecomputedOBBOrigin = 0x170; // Vector
            public const nint m_vPrecomputedOBBAngles = 0x17C; // QAngle
            public const nint m_vPrecomputedOBBExtent = 0x188; // Vector
            public const nint m_flPrecomputedMaxRange = 0x194; // float32
            public const nint m_nFogLightingMode = 0x198; // int32
            public const nint m_flFogContributionStength = 0x19C; // float32
            public const nint m_flNearClipPlane = 0x1A0; // float32
            public const nint m_SkyColor = 0x1A4; // Color
            public const nint m_flSkyIntensity = 0x1A8; // float32
            public const nint m_SkyAmbientBounce = 0x1AC; // Color
            public const nint m_bUseSecondaryColor = 0x1B0; // bool
            public const nint m_bMixedShadows = 0x1B1; // bool
            public const nint m_flLightStyleStartTime = 0x1B4; // GameTime_t
            public const nint m_flCapsuleLength = 0x1B8; // float32
            public const nint m_flMinRoughness = 0x1BC; // float32
        }
        // Parent: C_CSGO_TeamPreviewCamera
        // Fields count: 0
        public static class C_CSGO_CounterTerroristTeamIntroCamera {
        }
        // Parent: None
        // Fields count: 0
        public static class CEntityComponent {
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 15
        //
        // Metadata:
        // NetworkVarNames: m_nToggleButtonDownMask (ButtonBitMask_t)
        // NetworkVarNames: m_flMaxspeed (float32)
        // NetworkVarNames: m_arrForceSubtickMoveWhen (float32)
        public static class CPlayer_MovementServices {
            public const nint m_nImpulse = 0x40; // int32
            public const nint m_nButtons = 0x48; // CInButtonState
            public const nint m_nQueuedButtonDownMask = 0x68; // uint64
            public const nint m_nQueuedButtonChangeMask = 0x70; // uint64
            public const nint m_nButtonDoublePressed = 0x78; // uint64
            public const nint m_pButtonPressedCmdNumber = 0x80; // uint32[64]
            public const nint m_nLastCommandNumberProcessed = 0x180; // uint32
            public const nint m_nToggleButtonDownMask = 0x188; // uint64
            public const nint m_flMaxspeed = 0x198; // float32
            public const nint m_arrForceSubtickMoveWhen = 0x19C; // float32[4]
            public const nint m_flForwardMove = 0x1AC; // float32
            public const nint m_flLeftMove = 0x1B0; // float32
            public const nint m_flUpMove = 0x1B4; // float32
            public const nint m_vecLastMovementImpulses = 0x1B8; // Vector
            public const nint m_vecOldViewAngles = 0x1C4; // QAngle
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponUSPSilencer {
        }
        // Parent: C_CSGO_EndOfMatchLineupEndpoint
        // Fields count: 0
        public static class C_CSGO_EndOfMatchLineupStart {
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponFamas {
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
        public static class C_EnvParticleGlow {
            public const nint m_flAlphaScale = 0x1200; // float32
            public const nint m_flRadiusScale = 0x1204; // float32
            public const nint m_flSelfIllumScale = 0x1208; // float32
            public const nint m_ColorTint = 0x120C; // Color
            public const nint m_hTextureOverride = 0x1210; // CStrongHandle<InfoForResourceTypeCTextureBase>
        }
        // Parent: C_BaseEntity
        // Fields count: 0
        public static class C_CSGO_EndOfMatchLineupEndpoint {
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
        public static class CCSPlayerController_ActionTrackingServices {
            public const nint m_perRoundStats = 0x40; // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
            public const nint m_matchStats = 0x90; // CSMatchStats_t
            public const nint m_iNumRoundKills = 0x108; // int32
            public const nint m_iNumRoundKillsHeadshots = 0x10C; // int32
            public const nint m_unTotalRoundDamageDealt = 0x110; // uint32
        }
        // Parent: CEntityComponent
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bvDisabledHitGroups (uint32)
        public static class CHitboxComponent {
            public const nint m_bvDisabledHitGroups = 0x24; // uint32[1]
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
        public static class C_ColorCorrectionVolume {
            public const nint m_LastEnterWeight = 0xC54; // float32
            public const nint m_LastEnterTime = 0xC58; // float32
            public const nint m_LastExitWeight = 0xC5C; // float32
            public const nint m_LastExitTime = 0xC60; // float32
            public const nint m_bEnabled = 0xC64; // bool
            public const nint m_MaxWeight = 0xC68; // float32
            public const nint m_FadeDuration = 0xC6C; // float32
            public const nint m_Weight = 0xC70; // float32
            public const nint m_lookupFilename = 0xC74; // char[512]
        }
        // Parent: C_BaseModelEntity
        // Fields count: 0
        public static class C_PrecipitationBlocker {
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_weaponPurchases (WeaponPurchaseCount_t)
        public static class WeaponPurchaseTracker_t {
            public const nint m_weaponPurchases = 0x8; // C_UtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
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
        public static class C_RetakeGameRules {
            public const nint m_nMatchSeed = 0xF8; // int32
            public const nint m_bBlockersPresent = 0xFC; // bool
            public const nint m_bRoundInProgress = 0xFD; // bool
            public const nint m_iFirstSecondHalfRound = 0x100; // int32
            public const nint m_iBombSite = 0x104; // int32
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 0
        public static class CCSPlayer_GlowServices {
        }
        // Parent: None
        // Fields count: 5
        public static class C_BaseFlex__Emphasized_Phoneme {
            public const nint m_sClassName = 0x0; // CUtlString
            public const nint m_flAmount = 0x18; // float32
            public const nint m_bRequired = 0x1C; // bool
            public const nint m_bBasechecked = 0x1D; // bool
            public const nint m_bValid = 0x1E; // bool
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_timestamp (GameTime_t)
        // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
        public static class IntervalTimer {
            public const nint m_timestamp = 0x8; // GameTime_t
            public const nint m_nWorldGroupId = 0xC; // WorldGroupId_t
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
        public static class C_BaseGrenade {
            public const nint m_bHasWarnedAI = 0x1010; // bool
            public const nint m_bIsSmokeGrenade = 0x1011; // bool
            public const nint m_bIsLive = 0x1012; // bool
            public const nint m_DmgRadius = 0x1014; // float32
            public const nint m_flDetonateTime = 0x1018; // GameTime_t
            public const nint m_flWarnAITime = 0x101C; // float32
            public const nint m_flDamage = 0x1020; // float32
            public const nint m_iszBounceSound = 0x1028; // CUtlSymbolLarge
            public const nint m_ExplosionSound = 0x1030; // CUtlString
            public const nint m_hThrower = 0x103C; // CHandle<C_CSPlayerPawn>
            public const nint m_flNextAttack = 0x1054; // GameTime_t
            public const nint m_hOriginalThrower = 0x1058; // CHandle<C_CSPlayerPawn>
        }
        // Parent: None
        // Fields count: 1
        public static class CCSGameModeRules {
            public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
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
        public static class C_EnvVolumetricFogController {
            public const nint m_flScattering = 0x6D0; // float32
            public const nint m_flAnisotropy = 0x6D4; // float32
            public const nint m_flFadeSpeed = 0x6D8; // float32
            public const nint m_flDrawDistance = 0x6DC; // float32
            public const nint m_flFadeInStart = 0x6E0; // float32
            public const nint m_flFadeInEnd = 0x6E4; // float32
            public const nint m_flIndirectStrength = 0x6E8; // float32
            public const nint m_nIndirectTextureDimX = 0x6EC; // int32
            public const nint m_nIndirectTextureDimY = 0x6F0; // int32
            public const nint m_nIndirectTextureDimZ = 0x6F4; // int32
            public const nint m_vBoxMins = 0x6F8; // Vector
            public const nint m_vBoxMaxs = 0x704; // Vector
            public const nint m_bActive = 0x710; // bool
            public const nint m_flStartAnisoTime = 0x714; // GameTime_t
            public const nint m_flStartScatterTime = 0x718; // GameTime_t
            public const nint m_flStartDrawDistanceTime = 0x71C; // GameTime_t
            public const nint m_flStartAnisotropy = 0x720; // float32
            public const nint m_flStartScattering = 0x724; // float32
            public const nint m_flStartDrawDistance = 0x728; // float32
            public const nint m_flDefaultAnisotropy = 0x72C; // float32
            public const nint m_flDefaultScattering = 0x730; // float32
            public const nint m_flDefaultDrawDistance = 0x734; // float32
            public const nint m_bStartDisabled = 0x738; // bool
            public const nint m_bEnableIndirect = 0x739; // bool
            public const nint m_bIsMaster = 0x73A; // bool
            public const nint m_hFogIndirectTexture = 0x740; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_nForceRefreshCount = 0x748; // int32
            public const nint m_bFirstTime = 0x74C; // bool
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
        public static class audioparams_t {
            public const nint localSound = 0x8; // Vector[8]
            public const nint soundscapeIndex = 0x68; // int32
            public const nint localBits = 0x6C; // uint8
            public const nint soundscapeEntityListIndex = 0x70; // int32
            public const nint soundEventHash = 0x74; // uint32
        }
        // Parent: C_CSGO_TeamIntroCharacterPosition
        // Fields count: 0
        public static class C_CSGO_TeamIntroTerroristPosition {
        }
        // Parent: C_BaseTrigger
        // Fields count: 8
        public static class C_Precipitation {
            public const nint m_flDensity = 0xC54; // float32
            public const nint m_flParticleInnerDist = 0xC60; // float32
            public const nint m_pParticleDef = 0xC68; // char*
            public const nint m_tParticlePrecipTraceTimer = 0xC90; // TimedEvent[1]
            public const nint m_bActiveParticlePrecipEmitter = 0xC98; // bool[1]
            public const nint m_bParticlePrecipInitialized = 0xC99; // bool
            public const nint m_bHasSimulatedSinceLastSceneObjectUpdate = 0xC9A; // bool
            public const nint m_nAvailableSheetSequencesMaxIndex = 0xC9C; // int32
        }
        // Parent: C_BaseModelEntity
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_bEnabled (bool)
        // NetworkVarNames: m_DialogXMLName (string_t)
        // NetworkVarNames: m_PanelClassName (string_t)
        // NetworkVarNames: m_PanelID (string_t)
        public static class C_BaseClientUIEntity {
            public const nint m_bEnabled = 0xC58; // bool
            public const nint m_DialogXMLName = 0xC60; // CUtlSymbolLarge
            public const nint m_PanelClassName = 0xC68; // CUtlSymbolLarge
            public const nint m_PanelID = 0xC70; // CUtlSymbolLarge
        }
        // Parent: C_BaseModelEntity
        // Fields count: 3
        public static class C_FuncTrackTrain {
            public const nint m_nLongAxis = 0xC50; // int32
            public const nint m_flRadius = 0xC54; // float32
            public const nint m_flLineLength = 0xC58; // float32
        }
        // Parent: CPlayerPawnComponent
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_bIsRescuing (bool)
        // NetworkVarNames: m_weaponPurchasesThisMatch (WeaponPurchaseTracker_t)
        // NetworkVarNames: m_weaponPurchasesThisRound (WeaponPurchaseTracker_t)
        public static class CCSPlayer_ActionTrackingServices {
            public const nint m_hLastWeaponBeforeC4AutoSwitch = 0x40; // CHandle<C_BasePlayerWeapon>
            public const nint m_bIsRescuing = 0x44; // bool
            public const nint m_weaponPurchasesThisMatch = 0x48; // WeaponPurchaseTracker_t
            public const nint m_weaponPurchasesThisRound = 0xA0; // WeaponPurchaseTracker_t
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
        public static class shard_model_desc_t {
            public const nint m_nModelID = 0x8; // int32
            public const nint m_hMaterial = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_solid = 0x18; // ShardSolid_t
            public const nint m_ShatterPanelMode = 0x19; // ShatterPanelMode
            public const nint m_vecPanelSize = 0x1C; // Vector2D
            public const nint m_vecStressPositionA = 0x24; // Vector2D
            public const nint m_vecStressPositionB = 0x2C; // Vector2D
            public const nint m_vecPanelVertices = 0x38; // C_NetworkUtlVectorBase<Vector2D>
            public const nint m_flGlassHalfThickness = 0x50; // float32
            public const nint m_bHasParent = 0x54; // bool
            public const nint m_bParentFrozen = 0x55; // bool
            public const nint m_SurfacePropStringToken = 0x58; // CUtlStringToken
        }
        // Parent: None
        // Fields count: 1
        public static class C_SceneEntity__QueuedEvents_t {
            public const nint starttime = 0x0; // float32
        }
        // Parent: CLogicalEntity
        // Fields count: 12
        public static class CPointTemplate {
            public const nint m_iszWorldName = 0x6D0; // CUtlSymbolLarge
            public const nint m_iszSource2EntityLumpName = 0x6D8; // CUtlSymbolLarge
            public const nint m_iszEntityFilterName = 0x6E0; // CUtlSymbolLarge
            public const nint m_flTimeoutInterval = 0x6E8; // float32
            public const nint m_bAsynchronouslySpawnEntities = 0x6EC; // bool
            public const nint m_pOutputOnSpawned = 0x6F0; // CEntityIOOutput
            public const nint m_clientOnlyEntityBehavior = 0x718; // PointTemplateClientOnlyEntityBehavior_t
            public const nint m_ownerSpawnGroupType = 0x71C; // PointTemplateOwnerSpawnGroupType_t
            public const nint m_createdSpawnGroupHandles = 0x720; // CUtlVector<uint32>
            public const nint m_SpawnedEntityHandles = 0x738; // CUtlVector<CEntityHandle>
            public const nint m_ScriptSpawnCallback = 0x750; // HSCRIPT
            public const nint m_ScriptCallbackScope = 0x758; // HSCRIPT
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponHKP2000 {
        }
        // Parent: C_BaseCSGrenade
        // Fields count: 0
        public static class CTripWireFire {
        }
        // Parent: C_BaseFlex
        // Fields count: 6
        public static class C_CSGO_PreviewModel {
            public const nint m_animgraph = 0x1010; // CUtlString
            public const nint m_animgraphCharacterModeString = 0x1018; // CGlobalSymbol
            public const nint m_defaultAnim = 0x1020; // CUtlString
            public const nint m_nDefaultAnimLoopMode = 0x1028; // AnimLoopMode_t
            public const nint m_flInitialModelScale = 0x102C; // float32
            public const nint m_sInitialWeaponState = 0x1030; // CUtlString
        }
        // Parent: C_CSWeaponBase
        // Fields count: 0
        public static class CBreachCharge {
        }
        // Parent: C_LightEntity
        // Fields count: 0
        public static class C_LightDirectionalEntity {
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
        public static class C_EnvCubemap {
            public const nint m_hCubemapTexture = 0x750; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_bCustomCubemapTexture = 0x758; // bool
            public const nint m_flInfluenceRadius = 0x75C; // float32
            public const nint m_vBoxProjectMins = 0x760; // Vector
            public const nint m_vBoxProjectMaxs = 0x76C; // Vector
            public const nint m_bMoveable = 0x778; // bool
            public const nint m_nHandshake = 0x77C; // int32
            public const nint m_nEnvCubeMapArrayIndex = 0x780; // int32
            public const nint m_nPriority = 0x784; // int32
            public const nint m_flEdgeFadeDist = 0x788; // float32
            public const nint m_vEdgeFadeDists = 0x78C; // Vector
            public const nint m_flDiffuseScale = 0x798; // float32
            public const nint m_bStartDisabled = 0x79C; // bool
            public const nint m_bDefaultEnvMap = 0x79D; // bool
            public const nint m_bDefaultSpecEnvMap = 0x79E; // bool
            public const nint m_bIndoorCubeMap = 0x79F; // bool
            public const nint m_bCopyDiffuseFromDefaultCubemap = 0x7A0; // bool
            public const nint m_bEnabled = 0x7B0; // bool
        }
        // Parent: C_BaseViewModel
        // Fields count: 3
        public static class C_PredictedViewModel {
            public const nint m_vPredictedLagOffset = 0xEE0; // Vector
            public const nint m_targetSpeed = 0xEEC; // QAngle
            public const nint m_currentSpeed = 0xEF8; // QAngle
        }
        // Parent: C_CSWeaponBase
        // Fields count: 0
        public static class C_Knife {
        }
        // Parent: C_EnvCubemap
        // Fields count: 0
        public static class C_EnvCubemapBox {
        }
        // Parent: C_Item
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_OwningPlayer (CHandle<CCSPlayerPawn>)
        // NetworkVarNames: m_KillingPlayer (CHandle<CCSPlayerPawn>)
        public static class C_ItemDogtags {
            public const nint m_OwningPlayer = 0x2564; // CHandle<C_CSPlayerPawn>
            public const nint m_KillingPlayer = 0x2568; // CHandle<C_CSPlayerPawn>
        }
        // Parent: C_CSGO_TeamPreviewCamera
        // Fields count: 0
        public static class C_CSGO_EndOfMatchCamera {
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
        public static class C_SoundOpvarSetPointBase {
            public const nint m_iszStackName = 0x6D0; // CUtlSymbolLarge
            public const nint m_iszOperatorName = 0x6D8; // CUtlSymbolLarge
            public const nint m_iszOpvarName = 0x6E0; // CUtlSymbolLarge
            public const nint m_iOpvarIndex = 0x6E8; // int32
            public const nint m_bUseAutoCompare = 0x6EC; // bool
        }
        // Parent: C_BaseCSGrenade
        // Fields count: 0
        public static class C_SensorGrenade {
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_fFireTime (GameTime_t)
        public static class C_WeaponTaser {
            public const nint m_fFireTime = 0x2928; // GameTime_t
        }
        // Parent: C_CSWeaponBase
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_bPlayingUninterruptableAct (bool)
        // NetworkVarNames: m_nUninterruptableActivity (PlayerAnimEvent_t)
        public static class C_Fists {
            public const nint m_bPlayingUninterruptableAct = 0x2908; // bool
            public const nint m_nUninterruptableActivity = 0x290C; // PlayerAnimEvent_t
        }
        // Parent: C_PhysicsProp
        // Fields count: 0
        public static class C_PhysicsPropMultiplayer {
        }
        // Parent: C_CSWeaponBase
        // Fields count: 0
        public static class C_WeaponSawedoff {
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
        // Parent: None
        // Fields count: 8
        //
        // Metadata:
        // NetworkVarNames: m_hSequence (HSequence)
        // NetworkVarNames: m_flPrevCycle (float32)
        // NetworkVarNames: m_flCycle (float32)
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
        // Parent: C_PhysicsProp
        // Fields count: 1
        //
        // Metadata:
        // MNetworkExcludeByName
        // NetworkVarNames: m_ShardDesc (shard_model_desc_t)
        public static class C_ShatterGlassShardPhysics {
            public const nint m_ShardDesc = 0xFD0; // shard_model_desc_t
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponElite {
        }
        // Parent: C_BaseModelEntity
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_CLightComponent (CLightComponent::Storage_t)
        public static class C_LightEntity {
            public const nint m_CLightComponent = 0xC50; // CLightComponent*
        }
        // Parent: CBaseAnimGraph
        // Fields count: 19
        //
        // Metadata:
        // NetworkVarNames: m_flexWeight (float32)
        // NetworkVarNames: m_blinktoggle (bool)
        public static class C_BaseFlex {
            public const nint m_flexWeight = 0xE88; // C_NetworkUtlVectorBase<float32>
            public const nint m_vLookTargetPosition = 0xEA0; // Vector
            public const nint m_blinktoggle = 0xEB8; // bool
            public const nint m_nLastFlexUpdateFrameCount = 0xF18; // int32
            public const nint m_CachedViewTarget = 0xF1C; // Vector
            public const nint m_nNextSceneEventId = 0xF28; // uint32
            public const nint m_iBlink = 0xF2C; // int32
            public const nint m_blinktime = 0xF30; // float32
            public const nint m_prevblinktoggle = 0xF34; // bool
            public const nint m_iJawOpen = 0xF38; // int32
            public const nint m_flJawOpenAmount = 0xF3C; // float32
            public const nint m_flBlinkAmount = 0xF40; // float32
            public const nint m_iMouthAttachment = 0xF44; // AttachmentHandle_t
            public const nint m_iEyeAttachment = 0xF45; // AttachmentHandle_t
            public const nint m_bResetFlexWeightsOnModelChange = 0xF46; // bool
            public const nint m_nEyeOcclusionRendererBone = 0xF60; // int32
            public const nint m_mEyeOcclusionRendererCameraToBoneTransform = 0xF64; // matrix3x4_t
            public const nint m_vEyeOcclusionRendererHalfExtent = 0xF94; // Vector
            public const nint m_PhonemeClasses = 0xFB0; // C_BaseFlex::Emphasized_Phoneme[3]
        }
        // Parent: C_BaseEntity
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_iCurrentMaxRagdollCount (int8)
        public static class C_RagdollManager {
            public const nint m_iCurrentMaxRagdollCount = 0x6D0; // int8
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
        public static class C_EnvSky {
            public const nint m_hSkyMaterial = 0xC50; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_hSkyMaterialLightingOnly = 0xC58; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_bStartDisabled = 0xC60; // bool
            public const nint m_vTintColor = 0xC61; // Color
            public const nint m_vTintColorLightingOnly = 0xC65; // Color
            public const nint m_flBrightnessScale = 0xC6C; // float32
            public const nint m_nFogType = 0xC70; // int32
            public const nint m_flFogMinStart = 0xC74; // float32
            public const nint m_flFogMinEnd = 0xC78; // float32
            public const nint m_flFogMaxStart = 0xC7C; // float32
            public const nint m_flFogMaxEnd = 0xC80; // float32
            public const nint m_bEnabled = 0xC84; // bool
        }
        // Parent: CCSGameModeScript
        // Fields count: 1
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CCSDeathmatchScript {
            public const nint m_pOuter = 0xD8; // CCSGameModeRules_Deathmatch*
        }
        // Parent: C_CSWeaponBaseGun
        // Fields count: 0
        public static class C_WeaponSCAR20 {
        }
    }
}
