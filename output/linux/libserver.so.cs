// Generated using https://github.com/a2x/cs2-dumper
// 2024-03-29 21:16:02.890657436 UTC

namespace CS2Dumper.Schemas {
    // Module: libserver.so
    // Classes count: 231
    // Enums count: 0
    public static class Libserver {
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CRangeFloat {
            public const nint m_pValue = 0x0; // float32[2]
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CRangeInt {
            public const nint m_pValue = 0x0; // int32[2]
        }
        // Parent: None
        // Fields count: 11
        //
        // Metadata:
        // NetworkVarNames: m_nameStringableIndex (int32)
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
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_pEntity (CEntityIdentity*)
        // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
        public static class CEntityInstance {
            public const nint m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
            public const nint m_pEntity = 0x10; // CEntityIdentity*
            public const nint m_CScriptComponent = 0x28; // CScriptComponent*
            public const nint m_bVisibleinPVS = 0x30; // bool
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_sceneNode (CGameSceneNode)
        public static class CBodyComponentPoint {
            public const nint m_sceneNode = 0x60; // CGameSceneNode
            public const nint __m_pChainEntity = 0x1C0; // CNetworkVarChainer
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_skeletonInstance (CSkeletonInstance)
        public static class CBodyComponentSkeletonInstance {
            public const nint m_skeletonInstance = 0x60; // CSkeletonInstance
            public const nint __m_pChainEntity = 0x450; // CNetworkVarChainer
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bvDisabledHitGroups (uint32)
        public static class CHitboxComponent {
            public const nint m_bvDisabledHitGroups = 0x24; // uint32[1]
        }
        // Parent: None
        // Fields count: 67
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
            public const nint m_bPvsModifyEntity = 0x1D0; // bool
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CSkillFloat {
            public const nint m_pValue = 0x0; // float32[4]
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CSkillInt {
            public const nint m_pValue = 0x0; // int32[4]
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSkillDamage {
            public const nint m_flDamage = 0x0; // CSkillFloat
            public const nint m_flPhysicsForceDamage = 0x10; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CRemapFloat {
            public const nint m_pValue = 0x0; // float32[4]
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CBasePlayerControllerAPI {
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: nType (FixAngleSet_t)
        // NetworkVarNames: qAngle (QAngle)
        // NetworkVarNames: nIndex (uint32)
        public static class ViewAngleServerChange_t {
            public const nint nType = 0x30; // FixAngleSet_t
            public const nint qAngle = 0x34; // QAngle
            public const nint nIndex = 0x40; // uint32
        }
        // Parent: None
        // Fields count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
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
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CDynamicPropAPI {
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
        // Parent: None
        // Fields count: 12
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
        // NetworkVarNames: m_PostProcessingVolumes (CHandle<CPostProcessingVolume>)
        public static class CPlayer_CameraServices {
            public const nint m_vecCsViewPunchAngle = 0x40; // QAngle
            public const nint m_nCsViewPunchAngleTick = 0x4C; // GameTick_t
            public const nint m_flCsViewPunchAngleTickRatio = 0x50; // float32
            public const nint m_PlayerFog = 0x58; // fogplayerparams_t
            public const nint m_hColorCorrectionCtrl = 0x98; // CHandle<CColorCorrection>
            public const nint m_hViewEntity = 0x9C; // CHandle<CBaseEntity>
            public const nint m_hTonemapController = 0xA0; // CHandle<CTonemapController2>
            public const nint m_audio = 0xA8; // audioparams_t
            public const nint m_PostProcessingVolumes = 0x120; // CNetworkUtlVectorBase<CHandle<CPostProcessingVolume>>
            public const nint m_flOldPlayerZ = 0x138; // float32
            public const nint m_flOldPlayerViewOffsetZ = 0x13C; // float32
            public const nint m_hTriggerSoundscapeList = 0x158; // CUtlVector<CHandle<CEnvSoundscapeTriggerable>>
        }
        // Parent: None
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
        // Parent: CPlayer_MovementServices
        // Fields count: 14
        //
        // Metadata:
        // NetworkVarNames: m_flFallVelocity (float32)
        // NetworkVarNames: m_bInCrouch (bool)
        // NetworkVarNames: m_nCrouchState (uint32)
        // NetworkVarNames: m_flCrouchTransitionStartTime (GameTime_t)
        // NetworkVarNames: m_bDucked (bool)
        // NetworkVarNames: m_bDucking (bool)
        // NetworkVarNames: m_bInDuckJump (bool)
        public static class CPlayer_MovementServices_Humanoid {
            public const nint m_flStepSoundTime = 0x1D8; // float32
            public const nint m_flFallVelocity = 0x1DC; // float32
            public const nint m_bInCrouch = 0x1E0; // bool
            public const nint m_nCrouchState = 0x1E4; // uint32
            public const nint m_flCrouchTransitionStartTime = 0x1E8; // GameTime_t
            public const nint m_bDucked = 0x1EC; // bool
            public const nint m_bDucking = 0x1ED; // bool
            public const nint m_bInDuckJump = 0x1EE; // bool
            public const nint m_groundNormal = 0x1F0; // Vector
            public const nint m_flSurfaceFriction = 0x1FC; // float32
            public const nint m_surfaceProps = 0x200; // CUtlStringToken
            public const nint m_nStepside = 0x210; // int32
            public const nint m_iTargetVolume = 0x214; // int32
            public const nint m_vecSmoothedVelocity = 0x218; // Vector
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_iObserverMode (uint8)
        // NetworkVarNames: m_hObserverTarget (CHandle<CBaseEntity>)
        public static class CPlayer_ObserverServices {
            public const nint m_iObserverMode = 0x40; // uint8
            public const nint m_hObserverTarget = 0x44; // CHandle<CBaseEntity>
            public const nint m_iObserverLastMode = 0x48; // ObserverMode_t
            public const nint m_bForcedObserverMode = 0x4C; // bool
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_hMyWeapons (CHandle<CBasePlayerWeapon>)
        // NetworkVarNames: m_hActiveWeapon (CHandle<CBasePlayerWeapon>)
        // NetworkVarNames: m_hLastWeapon (CHandle<CBasePlayerWeapon>)
        // NetworkVarNames: m_iAmmo (uint16)
        public static class CPlayer_WeaponServices {
            public const nint m_hMyWeapons = 0x40; // CNetworkUtlVectorBase<CHandle<CBasePlayerWeapon>>
            public const nint m_hActiveWeapon = 0x58; // CHandle<CBasePlayerWeapon>
            public const nint m_hLastWeapon = 0x5C; // CHandle<CBasePlayerWeapon>
            public const nint m_iAmmo = 0x60; // uint16[32]
            public const nint m_bPreventWeaponPickup = 0xA0; // bool
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AmmoTypeInfo_t {
            public const nint m_nMaxCarry = 0x10; // int32
            public const nint m_nSplashSize = 0x1C; // CRangeInt
            public const nint m_nFlags = 0x24; // AmmoFlags_t
            public const nint m_flMass = 0x28; // float32
            public const nint m_flSpeed = 0x2C; // CRangeFloat
        }
        // Parent: CBodyComponentSkeletonInstance
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_animationController (CBaseAnimGraphController)
        public static class CBodyComponentBaseAnimGraph {
            public const nint m_animationController = 0x478; // CBaseAnimGraphController
            public const nint __m_pChainEntity = 0x980; // CNetworkVarChainer
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_ID (CUtlStringToken)
        // NetworkVarNames: m_Values (Vector4D)
        public static class EntityRenderAttribute_t {
            public const nint m_ID = 0x30; // CUtlStringToken
            public const nint m_Values = 0x34; // Vector4D
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_Handle (ModelConfigHandle_t)
        // NetworkVarNames: m_Name (string_t)
        // NetworkVarNames: m_AssociatedEntities (CHandle<CBaseModelEntity>)
        // NetworkVarNames: m_AssociatedEntityNames (string_t)
        public static class ActiveModelConfig_t {
            public const nint m_Handle = 0x28; // ModelConfigHandle_t
            public const nint m_Name = 0x30; // CUtlSymbolLarge
            public const nint m_AssociatedEntities = 0x38; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
            public const nint m_AssociatedEntityNames = 0x50; // CNetworkUtlVectorBase<CUtlSymbolLarge>
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_hOwner (CEntityHandle)
        // NetworkVarNames: m_name (CUtlStringToken)
        public static class CGameSceneNodeHandle {
            public const nint m_hOwner = 0x8; // CEntityHandle
            public const nint m_name = 0xC; // CUtlStringToken
        }
        // Parent: None
        // Fields count: 32
        //
        // Metadata:
        // NetworkVarNames: m_hParent (CGameSceneNodeHandle)
        // NetworkVarNames: m_vecOrigin (CNetworkOriginCellCoordQuantizedVector)
        // NetworkVarNames: m_angRotation (QAngle)
        // NetworkVarNames: m_flScale (float)
        // NetworkVarNames: m_name (CUtlStringToken)
        // NetworkVarNames: m_hierarchyAttachName (CUtlStringToken)
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
            public const nint m_bBoneMergeFlex = 0x0; // bitfield:1
            public const nint m_nLatchAbsOrigin = 0x0; // bitfield:2
            public const nint m_bDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
            public const nint m_nHierarchicalDepth = 0xEB; // uint8
            public const nint m_nHierarchyType = 0xEC; // uint8
            public const nint m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xED; // uint8
            public const nint m_name = 0xF0; // CUtlStringToken
            public const nint m_hierarchyAttachName = 0x140; // CUtlStringToken
            public const nint m_flZOffset = 0x144; // float32
            public const nint m_vRenderOrigin = 0x148; // Vector
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
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // NetworkVarNames: m_hModel (HModelStrong)
        // NetworkVarNames: m_bClientClothCreationSuppressed (bool)
        // NetworkVarNames: m_MeshGroupMask (MeshGroupMask_t)
        // NetworkVarNames: m_nIdealMotionType (int8)
        public static class CModelState {
            public const nint m_hModel = 0xA0; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_ModelName = 0xA8; // CUtlSymbolLarge
            public const nint m_bClientClothCreationSuppressed = 0xE8; // bool
            public const nint m_MeshGroupMask = 0x180; // uint64
            public const nint m_nIdealMotionType = 0x212; // int8
            public const nint m_nForceLOD = 0x213; // int8
            public const nint m_nClothUpdateFlags = 0x214; // int8
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
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_duration (float32)
        // NetworkVarNames: m_timestamp (GameTime_t)
        // NetworkVarNames: m_timescale (float32)
        // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
        public static class CountdownTimer {
            public const nint m_duration = 0x8; // float32
            public const nint m_timestamp = 0xC; // GameTime_t
            public const nint m_timescale = 0x10; // float32
            public const nint m_nWorldGroupId = 0x14; // WorldGroupId_t
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_duration (float32)
        // NetworkVarNames: m_timestamp (float32)
        // NetworkVarNames: m_timescale (float32)
        public static class EngineCountdownTimer {
            public const nint m_duration = 0x8; // float32
            public const nint m_timestamp = 0xC; // float32
            public const nint m_timescale = 0x10; // float32
        }
        // Parent: IntervalTimer
        // Fields count: 7
        //
        // Metadata:
        // NetworkVarNames: m_flValues (float)
        // NetworkVarNames: m_nValueCounts (int)
        // NetworkVarNames: m_nBucketCount (int)
        // NetworkVarNames: m_flInterval (float)
        // NetworkVarNames: m_flFinalValue (float)
        // NetworkVarNames: m_nCompressionType (TimelineCompression_t)
        // NetworkVarNames: m_bStopped (bool)
        public static class CTimeline {
            public const nint m_flValues = 0x10; // float32[64]
            public const nint m_nValueCounts = 0x110; // int32[64]
            public const nint m_nBucketCount = 0x210; // int32
            public const nint m_flInterval = 0x214; // float32
            public const nint m_flFinalValue = 0x218; // float32
            public const nint m_nCompressionType = 0x21C; // TimelineCompression_t
            public const nint m_bStopped = 0x220; // bool
        }
        // Parent: None
        // Fields count: 24
        //
        // Metadata:
        // NetworkVarNames: m_PredNetBoolVariables (uint32)
        // NetworkVarNames: m_PredNetByteVariables (byte)
        // NetworkVarNames: m_PredNetUInt16Variables (uint16)
        // NetworkVarNames: m_PredNetIntVariables (int32)
        // NetworkVarNames: m_PredNetUInt32Variables (uint32)
        // NetworkVarNames: m_PredNetUInt64Variables (uint64)
        // NetworkVarNames: m_PredNetFloatVariables (float)
        // NetworkVarNames: m_PredNetVectorVariables (Vector)
        // NetworkVarNames: m_PredNetQuaternionVariables (Quaternion)
        // NetworkVarNames: m_PredNetGlobalSymbolVariables (CGlobalSymbol)
        // NetworkVarNames: m_OwnerOnlyPredNetBoolVariables (uint32)
        // NetworkVarNames: m_OwnerOnlyPredNetByteVariables (byte)
        // NetworkVarNames: m_OwnerOnlyPredNetUInt16Variables (uint16)
        // NetworkVarNames: m_OwnerOnlyPredNetIntVariables (int32)
        // NetworkVarNames: m_OwnerOnlyPredNetUInt32Variables (uint32)
        // NetworkVarNames: m_OwnerOnlyPredNetUInt64Variables (uint64)
        // NetworkVarNames: m_OwnerOnlyPredNetFloatVariables (float)
        // NetworkVarNames: m_OwnerOnlyPredNetVectorVariables (Vector)
        // NetworkVarNames: m_OwnerOnlyPredNetQuaternionVariables (Quaternion)
        // NetworkVarNames: m_OwnerOnlyPredNetGlobalSymbolVariables (CGlobalSymbol)
        // NetworkVarNames: m_nBoolVariablesCount (int)
        // NetworkVarNames: m_nOwnerOnlyBoolVariablesCount (int)
        // NetworkVarNames: m_nRandomSeedOffset (int)
        // NetworkVarNames: m_flLastTeleportTime (float)
        public static class CAnimGraphNetworkedVariables {
            public const nint m_PredNetBoolVariables = 0x8; // CNetworkUtlVectorBase<uint32>
            public const nint m_PredNetByteVariables = 0x20; // CNetworkUtlVectorBase<uint8>
            public const nint m_PredNetUInt16Variables = 0x38; // CNetworkUtlVectorBase<uint16>
            public const nint m_PredNetIntVariables = 0x50; // CNetworkUtlVectorBase<int32>
            public const nint m_PredNetUInt32Variables = 0x68; // CNetworkUtlVectorBase<uint32>
            public const nint m_PredNetUInt64Variables = 0x80; // CNetworkUtlVectorBase<uint64>
            public const nint m_PredNetFloatVariables = 0x98; // CNetworkUtlVectorBase<float32>
            public const nint m_PredNetVectorVariables = 0xB0; // CNetworkUtlVectorBase<Vector>
            public const nint m_PredNetQuaternionVariables = 0xC8; // CNetworkUtlVectorBase<Quaternion>
            public const nint m_PredNetGlobalSymbolVariables = 0xE0; // CNetworkUtlVectorBase<CGlobalSymbol>
            public const nint m_OwnerOnlyPredNetBoolVariables = 0xF8; // CNetworkUtlVectorBase<uint32>
            public const nint m_OwnerOnlyPredNetByteVariables = 0x110; // CNetworkUtlVectorBase<uint8>
            public const nint m_OwnerOnlyPredNetUInt16Variables = 0x128; // CNetworkUtlVectorBase<uint16>
            public const nint m_OwnerOnlyPredNetIntVariables = 0x140; // CNetworkUtlVectorBase<int32>
            public const nint m_OwnerOnlyPredNetUInt32Variables = 0x158; // CNetworkUtlVectorBase<uint32>
            public const nint m_OwnerOnlyPredNetUInt64Variables = 0x170; // CNetworkUtlVectorBase<uint64>
            public const nint m_OwnerOnlyPredNetFloatVariables = 0x188; // CNetworkUtlVectorBase<float32>
            public const nint m_OwnerOnlyPredNetVectorVariables = 0x1A0; // CNetworkUtlVectorBase<Vector>
            public const nint m_OwnerOnlyPredNetQuaternionVariables = 0x1B8; // CNetworkUtlVectorBase<Quaternion>
            public const nint m_OwnerOnlyPredNetGlobalSymbolVariables = 0x1D0; // CNetworkUtlVectorBase<CGlobalSymbol>
            public const nint m_nBoolVariablesCount = 0x1E8; // int32
            public const nint m_nOwnerOnlyBoolVariablesCount = 0x1EC; // int32
            public const nint m_nRandomSeedOffset = 0x1F0; // int32
            public const nint m_flLastTeleportTime = 0x1F4; // float32
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPropertyCustomFGDType
        public static class CFootstepTableHandle {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CBaseEntityAPI {
        }
        // Parent: None
        // Fields count: 16
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CGameScriptedMoveData {
            public const nint m_vAccumulatedRootMotion = 0x0; // Vector
            public const nint m_vDest = 0xC; // Vector
            public const nint m_vSrc = 0x18; // Vector
            public const nint m_angSrc = 0x24; // QAngle
            public const nint m_angDst = 0x30; // QAngle
            public const nint m_angCurrent = 0x3C; // QAngle
            public const nint m_flAngRate = 0x48; // float32
            public const nint m_flDuration = 0x4C; // float32
            public const nint m_flStartTime = 0x50; // GameTime_t
            public const nint m_bActive = 0x54; // bool
            public const nint m_bTeleportOnEnd = 0x55; // bool
            public const nint m_bIgnoreRotation = 0x56; // bool
            public const nint m_nType = 0x58; // ScriptedMoveType_t
            public const nint m_bSuccess = 0x5C; // bool
            public const nint m_nForcedCrouchState = 0x60; // ForcedCrouchState_t
            public const nint m_bIgnoreCollisions = 0x64; // bool
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CTakeDamageInfoAPI {
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CPulseGraphInstance_ServerEntity {
            public const nint m_pComponent = 0xD8; // CPulseGraphComponentBase*
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseServerFuncs {
        }
        // Parent: CPulseCell_BaseFlow
        // Fields count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MCellForDomain
        // MPulseCellMethodBindings
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseCell_SoundEventStart {
            public const nint m_Type = 0x48; // SoundEventStartType_t
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseServerFuncs_Sounds {
        }
        // Parent: CPulseCell_BaseYieldingInflow
        // Fields count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_PlaySceneBase {
            public const nint m_OnFinished = 0x48; // CPulse_ResumePoint
            public const nint m_OnCanceled = 0x58; // CPulse_ResumePoint
            public const nint m_Triggers = 0x68; // CUtlVector<CPulse_OutflowConnection>
        }
        // Parent: None
        // Fields count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PulseScriptedSequenceData_t {
            public const nint m_nActorID = 0x0; // int32
            public const nint m_szPreIdleSequence = 0x8; // CUtlString
            public const nint m_szEntrySequence = 0x10; // CUtlString
            public const nint m_szSequence = 0x18; // CUtlString
            public const nint m_szExitSequence = 0x20; // CUtlString
            public const nint m_bLoopPreIdleSequence = 0x28; // bool
            public const nint m_bLoopActionSequence = 0x29; // bool
            public const nint m_bLoopPostIdleSequence = 0x2A; // bool
            public const nint m_bIgnoreLookAt = 0x2B; // bool
        }
        // Parent: CEntityInstance
        // Fields count: 75
        //
        // Metadata:
        // MNetworkExcludeByName
        // MNetworkExcludeByName
        // MNetworkExcludeByUserGroup
        // MNetworkExcludeByUserGroup
        // MNetworkExcludeByUserGroup
        // MNetworkExcludeByName
        // MNetworkExcludeByName
        // MNetworkExcludeByName
        // NetworkVarNames: m_CBodyComponent (CBodyComponent::Storage_t)
        // NetworkVarNames: m_iHealth (int32)
        // NetworkVarNames: m_iMaxHealth (int32)
        // NetworkVarNames: m_lifeState (uint8)
        // NetworkVarNames: m_bTakesDamage (bool)
        // NetworkVarNames: m_nTakeDamageFlags (TakeDamageFlags_t)
        // NetworkVarNames: m_bIsPlatform (bool)
        // NetworkVarNames: m_MoveCollide (MoveCollide_t)
        // NetworkVarNames: m_MoveType (MoveType_t)
        // NetworkVarNames: m_nSubclassID (EntitySubclassID_t)
        // NetworkVarNames: m_flAnimTime (float32)
        // NetworkVarNames: m_flSimulationTime (float32)
        // NetworkVarNames: m_flCreateTime (GameTime_t)
        // NetworkVarNames: m_bClientSideRagdoll (bool)
        // NetworkVarNames: m_ubInterpolationFrame (uint8)
        // NetworkVarNames: m_iTeamNum (uint8)
        // NetworkVarNames: m_spawnflags (uint32)
        // NetworkVarNames: m_nNextThinkTick (GameTick_t)
        // NetworkVarNames: m_fFlags (uint32)
        // NetworkVarNames: m_vecVelocity (CNetworkVelocityVector)
        // NetworkVarNames: m_vecBaseVelocity (Vector)
        // NetworkVarNames: m_hEffectEntity (CHandle<CBaseEntity>)
        // NetworkVarNames: m_hOwnerEntity (CHandle<CBaseEntity>)
        // NetworkVarNames: m_fEffects (uint32)
        // NetworkVarNames: m_hGroundEntity (CHandle<CBaseEntity>)
        // NetworkVarNames: m_flFriction (float32)
        // NetworkVarNames: m_flElasticity (float32)
        // NetworkVarNames: m_flGravityScale (float32)
        // NetworkVarNames: m_flTimeScale (float32)
        // NetworkVarNames: m_flWaterLevel (float)
        // NetworkVarNames: m_bAnimatedEveryTick (bool)
        // NetworkVarNames: m_flNavIgnoreUntilTime (GameTime_t)
        public static class CBaseEntity {
            public const nint m_CBodyComponent = 0x38; // CBodyComponent*
            public const nint m_NetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
            public const nint m_aThinkFunctions = 0x4F0; // CUtlVector<thinkfunc_t>
            public const nint m_iCurrentThinkContext = 0x508; // int32
            public const nint m_nLastThinkTick = 0x50C; // GameTick_t
            public const nint m_nDisableContextThinkStartTick = 0x510; // GameTick_t
            public const nint m_isSteadyState = 0x520; // CBitVec<64>
            public const nint m_lastNetworkChange = 0x528; // float32
            public const nint m_ResponseContexts = 0x540; // CUtlVector<ResponseContext_t>
            public const nint m_iszResponseContext = 0x558; // CUtlSymbolLarge
            public const nint m_iHealth = 0x5A0; // int32
            public const nint m_iMaxHealth = 0x5A4; // int32
            public const nint m_lifeState = 0x5A8; // uint8
            public const nint m_flDamageAccumulator = 0x5AC; // float32
            public const nint m_bTakesDamage = 0x5B0; // bool
            public const nint m_nTakeDamageFlags = 0x5B4; // TakeDamageFlags_t
            public const nint m_bIsPlatform = 0x5B8; // bool
            public const nint m_MoveCollide = 0x5BA; // MoveCollide_t
            public const nint m_MoveType = 0x5BB; // MoveType_t
            public const nint m_nActualMoveType = 0x5BC; // MoveType_t
            public const nint m_nWaterTouch = 0x5BD; // uint8
            public const nint m_nSlimeTouch = 0x5BE; // uint8
            public const nint m_bRestoreInHierarchy = 0x5BF; // bool
            public const nint m_target = 0x5C0; // CUtlSymbolLarge
            public const nint m_hDamageFilter = 0x5C8; // CHandle<CBaseFilter>
            public const nint m_iszDamageFilterName = 0x5D0; // CUtlSymbolLarge
            public const nint m_flMoveDoneTime = 0x5D8; // float32
            public const nint m_nSubclassID = 0x5DC; // CUtlStringToken
            public const nint m_flAnimTime = 0x5E8; // float32
            public const nint m_flSimulationTime = 0x5EC; // float32
            public const nint m_flCreateTime = 0x5F0; // GameTime_t
            public const nint m_bClientSideRagdoll = 0x5F4; // bool
            public const nint m_ubInterpolationFrame = 0x5F5; // uint8
            public const nint m_vPrevVPhysicsUpdatePos = 0x5F8; // Vector
            public const nint m_iTeamNum = 0x604; // uint8
            public const nint m_iGlobalname = 0x608; // CUtlSymbolLarge
            public const nint m_iSentToClients = 0x610; // int32
            public const nint m_flSpeed = 0x614; // float32
            public const nint m_sUniqueHammerID = 0x618; // CUtlString
            public const nint m_spawnflags = 0x620; // uint32
            public const nint m_nNextThinkTick = 0x624; // GameTick_t
            public const nint m_nSimulationTick = 0x628; // int32
            public const nint m_OnKilled = 0x630; // CEntityIOOutput
            public const nint m_fFlags = 0x658; // uint32
            public const nint m_vecAbsVelocity = 0x65C; // Vector
            public const nint m_vecVelocity = 0x668; // CNetworkVelocityVector
            public const nint m_vecBaseVelocity = 0x698; // Vector
            public const nint m_nPushEnumCount = 0x6A4; // int32
            public const nint m_pCollision = 0x6A8; // CCollisionProperty*
            public const nint m_hEffectEntity = 0x6B0; // CHandle<CBaseEntity>
            public const nint m_hOwnerEntity = 0x6B4; // CHandle<CBaseEntity>
            public const nint m_fEffects = 0x6B8; // uint32
            public const nint m_hGroundEntity = 0x6BC; // CHandle<CBaseEntity>
            public const nint m_flFriction = 0x6C0; // float32
            public const nint m_flElasticity = 0x6C4; // float32
            public const nint m_flGravityScale = 0x6C8; // float32
            public const nint m_flTimeScale = 0x6CC; // float32
            public const nint m_flWaterLevel = 0x6D0; // float32
            public const nint m_bAnimatedEveryTick = 0x6D4; // bool
            public const nint m_bDisableLowViolence = 0x6D5; // bool
            public const nint m_nWaterType = 0x6D6; // uint8
            public const nint m_iEFlags = 0x6D8; // int32
            public const nint m_OnUser1 = 0x6E0; // CEntityIOOutput
            public const nint m_OnUser2 = 0x708; // CEntityIOOutput
            public const nint m_OnUser3 = 0x730; // CEntityIOOutput
            public const nint m_OnUser4 = 0x758; // CEntityIOOutput
            public const nint m_iInitialTeamNum = 0x780; // int32
            public const nint m_flNavIgnoreUntilTime = 0x784; // GameTime_t
            public const nint m_vecAngVelocity = 0x788; // QAngle
            public const nint m_bNetworkQuantizeOriginAndAngles = 0x794; // bool
            public const nint m_bLagCompensate = 0x795; // bool
            public const nint m_flOverriddenFriction = 0x798; // float32
            public const nint m_pBlocker = 0x79C; // CHandle<CBaseEntity>
            public const nint m_flLocalTime = 0x7A0; // float32
            public const nint m_flVPhysicsUpdateLocalTime = 0x7A4; // float32
        }
        // Parent: CBaseEntity
        // Fields count: 17
        //
        // Metadata:
        // MNetworkIncludeByUserGroup
        // NetworkVarNames: m_flFadeInDuration (float32)
        // NetworkVarNames: m_flFadeOutDuration (float32)
        // NetworkVarNames: m_flMaxWeight (float32)
        // NetworkVarNames: m_bEnabled (bool)
        // NetworkVarNames: m_bMaster (bool)
        // NetworkVarNames: m_bClientSide (bool)
        // NetworkVarNames: m_bExclusive (bool)
        // NetworkVarNames: m_MinFalloff (float32)
        // NetworkVarNames: m_MaxFalloff (float32)
        // NetworkVarNames: m_flCurWeight (float32)
        // NetworkVarNames: m_netlookupFilename (char)
        public static class CColorCorrection {
            public const nint m_flFadeInDuration = 0x7A8; // float32
            public const nint m_flFadeOutDuration = 0x7AC; // float32
            public const nint m_flStartFadeInWeight = 0x7B0; // float32
            public const nint m_flStartFadeOutWeight = 0x7B4; // float32
            public const nint m_flTimeStartFadeIn = 0x7B8; // GameTime_t
            public const nint m_flTimeStartFadeOut = 0x7BC; // GameTime_t
            public const nint m_flMaxWeight = 0x7C0; // float32
            public const nint m_bStartDisabled = 0x7C4; // bool
            public const nint m_bEnabled = 0x7C5; // bool
            public const nint m_bMaster = 0x7C6; // bool
            public const nint m_bClientSide = 0x7C7; // bool
            public const nint m_bExclusive = 0x7C8; // bool
            public const nint m_MinFalloff = 0x7CC; // float32
            public const nint m_MaxFalloff = 0x7D0; // float32
            public const nint m_flCurWeight = 0x7D4; // float32
            public const nint m_netlookupFilename = 0x7D8; // char[512]
            public const nint m_lookupFilename = 0x9D8; // CUtlSymbolLarge
        }
        // Parent: CBaseEntity
        // Fields count: 11
        //
        // Metadata:
        // NetworkVarNames: m_hEntAttached (CHandle<CBaseEntity>)
        // NetworkVarNames: m_bCheapEffect (bool)
        public static class CEntityFlame {
            public const nint m_hEntAttached = 0x7A8; // CHandle<CBaseEntity>
            public const nint m_bCheapEffect = 0x7AC; // bool
            public const nint m_flSize = 0x7B0; // float32
            public const nint m_bUseHitboxes = 0x7B4; // bool
            public const nint m_iNumHitboxFires = 0x7B8; // int32
            public const nint m_flHitboxFireScale = 0x7BC; // float32
            public const nint m_flLifetime = 0x7C0; // GameTime_t
            public const nint m_hAttacker = 0x7C4; // CHandle<CBaseEntity>
            public const nint m_iDangerSound = 0x7C8; // int32
            public const nint m_flDirectDamagePerSecond = 0x7CC; // float32
            public const nint m_iCustomDamageType = 0x7D0; // int32
        }
        // Parent: CBaseEntity
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_flScale (float32)
        // NetworkVarNames: m_flStartScale (float32)
        // NetworkVarNames: m_flScaleTime (float32)
        // NetworkVarNames: m_nFlags (uint32)
        public static class CBaseFire {
            public const nint m_flScale = 0x7A8; // float32
            public const nint m_flStartScale = 0x7AC; // float32
            public const nint m_flScaleTime = 0x7B0; // float32
            public const nint m_nFlags = 0x7B4; // uint32
        }
        // Parent: CBaseFire
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_nFlameModelIndex (int32)
        // NetworkVarNames: m_nFlameFromAboveModelIndex (int32)
        public static class CFireSmoke {
            public const nint m_nFlameModelIndex = 0x7B8; // int32
            public const nint m_nFlameFromAboveModelIndex = 0x7BC; // int32
        }
        // Parent: CBaseEntity
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_skyboxData (sky3dparams_t)
        // NetworkVarNames: m_skyboxSlotToken (CUtlStringToken)
        public static class CSkyCamera {
            public const nint m_skyboxData = 0x7A8; // sky3dparams_t
            public const nint m_skyboxSlotToken = 0x838; // CUtlStringToken
            public const nint m_bUseAngles = 0x83C; // bool
            public const nint m_pNext = 0x840; // CSkyCamera*
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNavLinkAnimgraphVar {
            public const nint m_strAnimgraphVar = 0x0; // CUtlString
            public const nint m_unAlignmentDegrees = 0x8; // uint32
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
        // Fields count: 21
        //
        // Metadata:
        // NetworkVarNames: m_vOrigin (Vector)
        // NetworkVarNames: m_vStart (Vector)
        // NetworkVarNames: m_vNormal (Vector)
        // NetworkVarNames: m_vAngles (QAngle)
        // NetworkVarNames: m_hEntity (CEntityHandle)
        // NetworkVarNames: m_hOtherEntity (CEntityHandle)
        // NetworkVarNames: m_flScale (float32)
        // NetworkVarNames: m_flMagnitude (float32)
        // NetworkVarNames: m_flRadius (float32)
        // NetworkVarNames: m_nSurfaceProp (CUtlStringToken)
        // NetworkVarNames: m_nEffectIndex (HParticleSystemDefinition)
        // NetworkVarNames: m_nDamageType (uint32)
        // NetworkVarNames: m_nPenetrate (uint8)
        // NetworkVarNames: m_nMaterial (uint16)
        // NetworkVarNames: m_nHitBox (uint16)
        // NetworkVarNames: m_nColor (uint8)
        // NetworkVarNames: m_fFlags (uint8)
        // NetworkVarNames: m_nAttachmentIndex (AttachmentHandle_t)
        // NetworkVarNames: m_nAttachmentName (CUtlStringToken)
        // NetworkVarNames: m_iEffectName (uint16)
        // NetworkVarNames: m_nExplosionType (uint8)
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
            public const nint m_nEffectIndex = 0x50; // CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
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
        // Parent: CBaseEntity
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_flFadeStartDist (float32)
        // NetworkVarNames: m_flFadeEndDist (float32)
        public static class CEnvDetailController {
            public const nint m_flFadeStartDist = 0x7A8; // float32
            public const nint m_flFadeEndDist = 0x7AC; // float32
        }
        // Parent: None
        // Fields count: 31
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
            public const nint m_vecPanelVertices = 0x38; // CNetworkUtlVectorBase<Vector2D>
            public const nint m_flGlassHalfThickness = 0x50; // float32
            public const nint m_bHasParent = 0x54; // bool
            public const nint m_bParentFrozen = 0x55; // bool
            public const nint m_SurfacePropStringToken = 0x58; // CUtlStringToken
        }
        // Parent: None
        // Fields count: 11
        //
        // Metadata:
        // NetworkVarNames: m_iGlowType (int32)
        // NetworkVarNames: m_iGlowTeam (int32)
        // NetworkVarNames: m_nGlowRange (int32)
        // NetworkVarNames: m_nGlowRangeMin (int32)
        // NetworkVarNames: m_glowColorOverride (Color)
        // NetworkVarNames: m_bFlashing (bool)
        // NetworkVarNames: m_flGlowTime (float)
        // NetworkVarNames: m_flGlowStartTime (float)
        // NetworkVarNames: m_bEligibleForScreenHighlight (bool)
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
        // Parent: None
        // Fields count: 25
        //
        // Metadata:
        // NetworkVarNames: dirPrimary (Vector)
        // NetworkVarNames: colorPrimary (Color)
        // NetworkVarNames: colorSecondary (Color)
        // NetworkVarNames: colorPrimaryLerpTo (Color)
        // NetworkVarNames: colorSecondaryLerpTo (Color)
        // NetworkVarNames: start (float32)
        // NetworkVarNames: end (float32)
        // NetworkVarNames: farz (float32)
        // NetworkVarNames: maxdensity (float32)
        // NetworkVarNames: exponent (float32)
        // NetworkVarNames: HDRColorScale (float32)
        // NetworkVarNames: skyboxFogFactor (float32)
        // NetworkVarNames: skyboxFogFactorLerpTo (float32)
        // NetworkVarNames: startLerpTo (float32)
        // NetworkVarNames: endLerpTo (float32)
        // NetworkVarNames: maxdensityLerpTo (float32)
        // NetworkVarNames: lerptime (GameTime_t)
        // NetworkVarNames: duration (float32)
        // NetworkVarNames: blendtobackground (float32)
        // NetworkVarNames: scattering (float32)
        // NetworkVarNames: locallightscale (float32)
        // NetworkVarNames: enable (bool)
        // NetworkVarNames: blend (bool)
        // NetworkVarNames: m_bNoReflectionFog (bool)
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
        // Parent: None
        // Fields count: 14
        //
        // Metadata:
        // NetworkVarNames: m_hCtrl (CHandle<CFogController>)
        public static class fogplayerparams_t {
            public const nint m_hCtrl = 0x8; // CHandle<CFogController>
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
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_Transforms (CTransform)
        // NetworkVarNames: m_hOwner (EHANDLE)
        public static class PhysicsRagdollPose_t {
            public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
            public const nint m_Transforms = 0x30; // CNetworkUtlVectorBase<CTransform>
            public const nint m_hOwner = 0x48; // CHandle<CBaseEntity>
        }
        // Parent: CBaseEntity
        // Fields count: 9
        //
        // Metadata:
        // NetworkVarNames: m_iszStackName (string_t)
        // NetworkVarNames: m_iszOperatorName (string_t)
        // NetworkVarNames: m_iszOpvarName (string_t)
        // NetworkVarNames: m_iOpvarIndex (int)
        // NetworkVarNames: m_bUseAutoCompare (bool)
        public static class CSoundOpvarSetPointBase {
            public const nint m_bDisabled = 0x7A8; // bool
            public const nint m_hSource = 0x7AC; // CEntityHandle
            public const nint m_iszSourceEntityName = 0x7B8; // CUtlSymbolLarge
            public const nint m_vLastPosition = 0x810; // Vector
            public const nint m_iszStackName = 0x820; // CUtlSymbolLarge
            public const nint m_iszOperatorName = 0x828; // CUtlSymbolLarge
            public const nint m_iszOpvarName = 0x830; // CUtlSymbolLarge
            public const nint m_iOpvarIndex = 0x838; // int32
            public const nint m_bUseAutoCompare = 0x83C; // bool
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_Attributes (CEconItemAttribute)
        public static class CAttributeList {
            public const nint m_Attributes = 0x8; // CUtlVectorEmbeddedNetworkVar<CEconItemAttribute>
            public const nint m_pManager = 0x58; // CAttributeManager*
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_iAttributeDefinitionIndex (attrib_definition_index_t)
        // NetworkVarNames: m_flValue (float)
        // NetworkVarNames: m_flInitialValue (float)
        // NetworkVarNames: m_nRefundableCurrency (int)
        // NetworkVarNames: m_bSetBonus (bool)
        public static class CEconItemAttribute {
            public const nint m_iAttributeDefinitionIndex = 0x30; // uint16
            public const nint m_flValue = 0x34; // float32
            public const nint m_flInitialValue = 0x38; // float32
            public const nint m_nRefundableCurrency = 0x3C; // int32
            public const nint m_bSetBonus = 0x40; // bool
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // NetworkVarNames: m_iReapplyProvisionParity (int)
        // NetworkVarNames: m_hOuter (EHANDLE)
        // NetworkVarNames: m_ProviderType (attributeprovidertypes_t)
        public static class CAttributeManager {
            public const nint m_Providers = 0x8; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_iReapplyProvisionParity = 0x20; // int32
            public const nint m_hOuter = 0x24; // CHandle<CBaseEntity>
            public const nint m_bPreventLoopback = 0x28; // bool
            public const nint m_ProviderType = 0x2C; // attributeprovidertypes_t
            public const nint m_CachedResults = 0x30; // CUtlVector<CAttributeManager::cached_attribute_float_t>
        }
        // Parent: CAttributeManager
        // Fields count: 1
        //
        // Metadata:
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // NetworkVarNames: m_Item (CEconItemView)
        public static class CAttributeContainer {
            public const nint m_Item = 0x50; // CEconItemView
        }
        // Parent: AmmoTypeInfo_t
        // Fields count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class GameAmmoTypeInfo_t {
            public const nint m_nBuySize = 0x34; // int32
            public const nint m_nCost = 0x38; // int32
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
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_pGameRules (CCSGameRules*)
        public static class CCSGameRulesProxy {
            public const nint m_pGameRules = 0x7A8; // CCSGameRules*
        }
        // Parent: None
        // Fields count: 215
        //
        // Metadata:
        // NetworkVarNames: m_bFreezePeriod (bool)
        // NetworkVarNames: m_bWarmupPeriod (bool)
        // NetworkVarNames: m_fWarmupPeriodEnd (GameTime_t)
        // NetworkVarNames: m_fWarmupPeriodStart (GameTime_t)
        // NetworkVarNames: m_nTotalPausedTicks (int)
        // NetworkVarNames: m_nPauseStartTick (int)
        // NetworkVarNames: m_bServerPaused (bool)
        // NetworkVarNames: m_bGamePaused (bool)
        // NetworkVarNames: m_bTerroristTimeOutActive (bool)
        // NetworkVarNames: m_bCTTimeOutActive (bool)
        // NetworkVarNames: m_flTerroristTimeOutRemaining (float)
        // NetworkVarNames: m_flCTTimeOutRemaining (float)
        // NetworkVarNames: m_nTerroristTimeOuts (int)
        // NetworkVarNames: m_nCTTimeOuts (int)
        // NetworkVarNames: m_bTechnicalTimeOut (bool)
        // NetworkVarNames: m_bMatchWaitingForResume (bool)
        // NetworkVarNames: m_iRoundTime (int)
        // NetworkVarNames: m_fMatchStartTime (float)
        // NetworkVarNames: m_fRoundStartTime (GameTime_t)
        // NetworkVarNames: m_flRestartRoundTime (GameTime_t)
        // NetworkVarNames: m_bGameRestart (bool)
        // NetworkVarNames: m_flGameStartTime (float)
        // NetworkVarNames: m_timeUntilNextPhaseStarts (float)
        // NetworkVarNames: m_gamePhase (int)
        // NetworkVarNames: m_totalRoundsPlayed (int)
        // NetworkVarNames: m_nRoundsPlayedThisPhase (int)
        // NetworkVarNames: m_nOvertimePlaying (int)
        // NetworkVarNames: m_iHostagesRemaining (int)
        // NetworkVarNames: m_bAnyHostageReached (bool)
        // NetworkVarNames: m_bMapHasBombTarget (bool)
        // NetworkVarNames: m_bMapHasRescueZone (bool)
        // NetworkVarNames: m_bMapHasBuyZone (bool)
        // NetworkVarNames: m_bIsQueuedMatchmaking (bool)
        // NetworkVarNames: m_nQueuedMatchmakingMode (int)
        // NetworkVarNames: m_bIsValveDS (bool)
        // NetworkVarNames: m_bLogoMap (bool)
        // NetworkVarNames: m_bPlayAllStepSoundsOnServer (bool)
        // NetworkVarNames: m_iSpectatorSlotCount (int)
        // NetworkVarNames: m_MatchDevice (int)
        // NetworkVarNames: m_bHasMatchStarted (bool)
        // NetworkVarNames: m_nNextMapInMapgroup (int)
        // NetworkVarNames: m_szTournamentEventName (char)
        // NetworkVarNames: m_szTournamentEventStage (char)
        // NetworkVarNames: m_szMatchStatTxt (char)
        // NetworkVarNames: m_szTournamentPredictionsTxt (char)
        // NetworkVarNames: m_nTournamentPredictionsPct (int)
        // NetworkVarNames: m_flCMMItemDropRevealStartTime (GameTime_t)
        // NetworkVarNames: m_flCMMItemDropRevealEndTime (GameTime_t)
        // NetworkVarNames: m_bIsDroppingItems (bool)
        // NetworkVarNames: m_bIsQuestEligible (bool)
        // NetworkVarNames: m_bIsHltvActive (bool)
        // NetworkVarNames: m_nGuardianModeWaveNumber (int)
        // NetworkVarNames: m_nGuardianModeSpecialKillsRemaining (int)
        // NetworkVarNames: m_nGuardianModeSpecialWeaponNeeded (int)
        // NetworkVarNames: m_numGlobalGiftsGiven (uint32)
        // NetworkVarNames: m_numGlobalGifters (uint32)
        // NetworkVarNames: m_numGlobalGiftsPeriodSeconds (uint32)
        // NetworkVarNames: m_arrFeaturedGiftersAccounts (uint32)
        // NetworkVarNames: m_arrFeaturedGiftersGifts (uint32)
        // NetworkVarNames: m_arrProhibitedItemIndices (uint16)
        // NetworkVarNames: m_arrTournamentActiveCasterAccounts (uint32)
        // NetworkVarNames: m_numBestOfMaps (int)
        // NetworkVarNames: m_nHalloweenMaskListSeed (int)
        // NetworkVarNames: m_bBombDropped (bool)
        // NetworkVarNames: m_bBombPlanted (bool)
        // NetworkVarNames: m_iRoundWinStatus (int)
        // NetworkVarNames: m_eRoundWinReason (int)
        // NetworkVarNames: m_bTCantBuy (bool)
        // NetworkVarNames: m_bCTCantBuy (bool)
        // NetworkVarNames: m_flGuardianBuyUntilTime (GameTime_t)
        // NetworkVarNames: m_iMatchStats_RoundResults (int)
        // NetworkVarNames: m_iMatchStats_PlayersAlive_CT (int)
        // NetworkVarNames: m_iMatchStats_PlayersAlive_T (int)
        // NetworkVarNames: m_TeamRespawnWaveTimes (float)
        // NetworkVarNames: m_flNextRespawnWave (GameTime_t)
        // NetworkVarNames: m_nServerQuestID (int)
        // NetworkVarNames: m_vMinimapMins (Vector)
        // NetworkVarNames: m_vMinimapMaxs (Vector)
        // NetworkVarNames: m_MinimapVerticalSectionHeights (float)
        // NetworkVarNames: m_nEndMatchMapGroupVoteTypes (int)
        // NetworkVarNames: m_nEndMatchMapGroupVoteOptions (int)
        // NetworkVarNames: m_nEndMatchMapVoteWinner (int)
        // NetworkVarNames: m_iNumConsecutiveCTLoses (int)
        // NetworkVarNames: m_iNumConsecutiveTerroristLoses (int)
        // NetworkVarNames: m_nMatchAbortedEarlyReason (int)
        // NetworkVarNames: m_pGameModeRules (CCSGameModeRules*)
        // NetworkVarNames: m_RetakeRules (CRetakeGameRules)
        // NetworkVarNames: m_nMatchEndCount (uint8)
        // NetworkVarNames: m_nTTeamIntroVariant (int)
        // NetworkVarNames: m_nCTTeamIntroVariant (int)
        // NetworkVarNames: m_bTeamIntroPeriod (bool)
        // NetworkVarNames: m_iRoundEndWinnerTeam (int)
        // NetworkVarNames: m_eRoundEndReason (int)
        // NetworkVarNames: m_bRoundEndShowTimerDefend (bool)
        // NetworkVarNames: m_iRoundEndTimerTime (int)
        // NetworkVarNames: m_sRoundEndFunFactToken (CUtlString)
        // NetworkVarNames: m_iRoundEndFunFactPlayerSlot (CPlayerSlot)
        // NetworkVarNames: m_iRoundEndFunFactData1 (int)
        // NetworkVarNames: m_iRoundEndFunFactData2 (int)
        // NetworkVarNames: m_iRoundEndFunFactData3 (int)
        // NetworkVarNames: m_sRoundEndMessage (CUtlString)
        // NetworkVarNames: m_iRoundEndPlayerCount (int)
        // NetworkVarNames: m_bRoundEndNoMusic (bool)
        // NetworkVarNames: m_iRoundEndLegacy (int)
        // NetworkVarNames: m_nRoundEndCount (uint8)
        // NetworkVarNames: m_iRoundStartRoundNumber (int)
        // NetworkVarNames: m_nRoundStartCount (uint8)
        public static class CCSGameRules {
            public const nint __m_pChainEntity = 0x98; // CNetworkVarChainer
            public const nint m_coopMissionManager = 0xC0; // CHandle<CBaseEntity>
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
            public const nint m_bIsHltvActive = 0x94E; // bool
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
            public const nint m_arrSelectedHostageSpawnIndices = 0xDD0; // CUtlVector<int32>
            public const nint m_nSpawnPointsRandomSeed = 0xDE8; // int32
            public const nint m_bFirstConnected = 0xDEC; // bool
            public const nint m_bCompleteReset = 0xDED; // bool
            public const nint m_bPickNewTeamsOnReset = 0xDEE; // bool
            public const nint m_bScrambleTeamsOnRestart = 0xDEF; // bool
            public const nint m_bSwapTeamsOnRestart = 0xDF0; // bool
            public const nint m_nEndMatchTiedVotes = 0xDF8; // CUtlVector<int32>
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
            public const nint m_CTSpawnPointsMasterList = 0xF68; // CUtlVector<SpawnPoint*>
            public const nint m_TerroristSpawnPointsMasterList = 0xF80; // CUtlVector<SpawnPoint*>
            public const nint m_bRespawningAllRespawnablePlayers = 0xF98; // bool
            public const nint m_iNextCTSpawnPoint = 0xF9C; // int32
            public const nint m_flCTSpawnPointUsedTime = 0xFA0; // float32
            public const nint m_iNextTerroristSpawnPoint = 0xFA4; // int32
            public const nint m_flTerroristSpawnPointUsedTime = 0xFA8; // float32
            public const nint m_CTSpawnPoints = 0xFB0; // CUtlVector<SpawnPoint*>
            public const nint m_TerroristSpawnPoints = 0xFC8; // CUtlVector<SpawnPoint*>
            public const nint m_bIsUnreservedGameServer = 0xFE0; // bool
            public const nint m_fAutobalanceDisplayTime = 0xFE4; // float32
            public const nint m_bAllowWeaponSwitch = 0x1250; // bool
            public const nint m_bRoundTimeWarningTriggered = 0x1251; // bool
            public const nint m_phaseChangeAnnouncementTime = 0x1254; // GameTime_t
            public const nint m_fNextUpdateTeamClanNamesTime = 0x1258; // float32
            public const nint m_flLastThinkTime = 0x125C; // GameTime_t
            public const nint m_fAccumulatedRoundOffDamage = 0x1260; // float32
            public const nint m_nShorthandedBonusLastEvalRound = 0x1264; // int32
            public const nint m_nMatchAbortedEarlyReason = 0x14E0; // int32
            public const nint m_bHasTriggeredRoundStartMusic = 0x14E4; // bool
            public const nint m_bHasTriggeredCoopSpawnReset = 0x14E5; // bool
            public const nint m_bSwitchingTeamsAtRoundReset = 0x14E6; // bool
            public const nint m_pGameModeRules = 0x1500; // CCSGameModeRules*
            public const nint m_BtGlobalBlackboard = 0x1508; // KeyValues3
            public const nint m_hPlayerResource = 0x1568; // CHandle<CBaseEntity>
            public const nint m_RetakeRules = 0x1570; // CRetakeGameRules
            public const nint m_GuardianBotSkillLevelMax = 0x1754; // int32
            public const nint m_GuardianBotSkillLevelMin = 0x1758; // int32
            public const nint m_arrTeamUniqueKillWeaponsMatch = 0x1760; // CUtlVector<int32>[4]
            public const nint m_bTeamLastKillUsedUniqueWeaponMatch = 0x17C0; // bool[4]
            public const nint m_nMatchEndCount = 0x17E8; // uint8
            public const nint m_nTTeamIntroVariant = 0x17EC; // int32
            public const nint m_nCTTeamIntroVariant = 0x17F0; // int32
            public const nint m_bTeamIntroPeriod = 0x17F4; // bool
            public const nint m_fTeamIntroPeriodEnd = 0x17F8; // GameTime_t
            public const nint m_bPlayedTeamIntroVO = 0x17FC; // bool
            public const nint m_iRoundEndWinnerTeam = 0x1800; // int32
            public const nint m_eRoundEndReason = 0x1804; // int32
            public const nint m_bRoundEndShowTimerDefend = 0x1808; // bool
            public const nint m_iRoundEndTimerTime = 0x180C; // int32
            public const nint m_sRoundEndFunFactToken = 0x1810; // CUtlString
            public const nint m_iRoundEndFunFactPlayerSlot = 0x1818; // CPlayerSlot
            public const nint m_iRoundEndFunFactData1 = 0x181C; // int32
            public const nint m_iRoundEndFunFactData2 = 0x1820; // int32
            public const nint m_iRoundEndFunFactData3 = 0x1824; // int32
            public const nint m_sRoundEndMessage = 0x1828; // CUtlString
            public const nint m_iRoundEndPlayerCount = 0x1830; // int32
            public const nint m_bRoundEndNoMusic = 0x1834; // bool
            public const nint m_iRoundEndLegacy = 0x1838; // int32
            public const nint m_nRoundEndCount = 0x183C; // uint8
            public const nint m_iRoundStartRoundNumber = 0x1840; // int32
            public const nint m_nRoundStartCount = 0x1844; // uint8
            public const nint m_flLastPerfSampleTime = 0x5850; // float64
            public const nint m_bSkipNextServerPerfSample = 0x5858; // bool
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSTakeDamageInfoAPI {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CCSGameModeScript {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        public static class CCSGameModeScript_ConVars {
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_WeaponSequence (CUtlString)
        public static class CCSGameModeRules_ArmsRace {
            public const nint m_WeaponSequence = 0x38; // CNetworkUtlVectorBase<CUtlString>
        }
        // Parent: CCSGameModeScript
        // Fields count: 1
        //
        // Metadata:
        // MPulseInstanceDomainInfo
        // MPulseLibraryBindings
        // MPulseDomainOptInFeatureTag
        public static class CCSArmsRaceScript {
            public const nint m_pOuter = 0xD8; // CCSGameModeRules_ArmsRace*
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_flDMBonusStartTime (GameTime_t)
        // NetworkVarNames: m_flDMBonusTimeLength (float)
        // NetworkVarNames: m_nDMBonusWeaponLoadoutSlot (int16)
        public static class CCSGameModeRules_Deathmatch {
            public const nint m_flDMBonusStartTime = 0x38; // GameTime_t
            public const nint m_flDMBonusTimeLength = 0x3C; // float32
            public const nint m_nDMBonusWeaponLoadoutSlot = 0x40; // int16
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
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        public static class CCSDeathmatchScript_ConVars {
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
        public static class CRetakeGameRules {
            public const nint m_nMatchSeed = 0xF8; // int32
            public const nint m_bBlockersPresent = 0xFC; // bool
            public const nint m_bRoundInProgress = 0xFD; // bool
            public const nint m_iFirstSecondHalfRound = 0x100; // int32
            public const nint m_iBombSite = 0x104; // int32
        }
        // Parent: None
        // Fields count: 13
        //
        // Metadata:
        // NetworkVarNames: m_iKills (int)
        // NetworkVarNames: m_iDeaths (int)
        // NetworkVarNames: m_iAssists (int)
        // NetworkVarNames: m_iDamage (int)
        // NetworkVarNames: m_iEquipmentValue (int)
        // NetworkVarNames: m_iMoneySaved (int)
        // NetworkVarNames: m_iKillReward (int)
        // NetworkVarNames: m_iLiveTime (int)
        // NetworkVarNames: m_iHeadShotKills (int)
        // NetworkVarNames: m_iObjective (int)
        // NetworkVarNames: m_iCashEarned (int)
        // NetworkVarNames: m_iUtilityDamage (int)
        // NetworkVarNames: m_iEnemiesFlashed (int)
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
        // Parent: CSPerRoundStats_t
        // Fields count: 21
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
            public const nint m_iEnemy2Ks = 0x78; // int32
            public const nint m_iUtility_Count = 0x7C; // int32
            public const nint m_iUtility_Successes = 0x80; // int32
            public const nint m_iUtility_Enemies = 0x84; // int32
            public const nint m_iFlash_Count = 0x88; // int32
            public const nint m_iFlash_Successes = 0x8C; // int32
            public const nint m_nHealthPointsRemovedTotal = 0x90; // int32
            public const nint m_nHealthPointsDealtTotal = 0x94; // int32
            public const nint m_nShotsFiredTotal = 0x98; // int32
            public const nint m_nShotsOnTargetTotal = 0x9C; // int32
            public const nint m_i1v1Count = 0xA0; // int32
            public const nint m_i1v1Wins = 0xA4; // int32
            public const nint m_i1v2Count = 0xA8; // int32
            public const nint m_i1v2Wins = 0xAC; // int32
            public const nint m_iEntryCount = 0xB0; // int32
            public const nint m_iEntryWins = 0xB4; // int32
        }
        // Parent: CBaseEntity
        // Fields count: 8
        //
        // Metadata:
        // NetworkVarNames: m_nVariant (int)
        // NetworkVarNames: m_nRandom (int)
        // NetworkVarNames: m_nOrdinal (int)
        // NetworkVarNames: m_sWeaponName (CUtlString)
        // NetworkVarNames: m_xuid (XUID)
        // NetworkVarNames: m_agentItem (CEconItemView)
        // NetworkVarNames: m_glovesItem (CEconItemView)
        // NetworkVarNames: m_weaponItem (CEconItemView)
        public static class CCSGO_TeamPreviewCharacterPosition {
            public const nint m_nVariant = 0x7A8; // int32
            public const nint m_nRandom = 0x7AC; // int32
            public const nint m_nOrdinal = 0x7B0; // int32
            public const nint m_sWeaponName = 0x7B8; // CUtlString
            public const nint m_xuid = 0x7C0; // uint64
            public const nint m_agentItem = 0x7C8; // CEconItemView
            public const nint m_glovesItem = 0xA40; // CEconItemView
            public const nint m_weaponItem = 0xCB8; // CEconItemView
        }
        // Parent: CBaseEntity
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_hPlayer (CHandle<CCSPlayerPawn>)
        // NetworkVarNames: m_hPingedEntity (CHandle<CBaseEntity>)
        // NetworkVarNames: m_iType (int)
        // NetworkVarNames: m_bUrgent (bool)
        // NetworkVarNames: m_szPlaceName (char)
        public static class CPlayerPing {
            public const nint m_hPlayer = 0x7B0; // CHandle<CCSPlayerPawn>
            public const nint m_hPingedEntity = 0x7B4; // CHandle<CBaseEntity>
            public const nint m_iType = 0x7B8; // int32
            public const nint m_bUrgent = 0x7BC; // bool
            public const nint m_szPlaceName = 0x7BD; // char[18]
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_hPlayerPing (CHandle<CBaseEntity>)
        public static class CCSPlayer_PingServices {
            public const nint m_flPlayerPingTokens = 0x40; // GameTime_t[5]
            public const nint m_hPlayerPing = 0x54; // CHandle<CBaseEntity>
        }
        // Parent: CBaseEntity
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
        public static class CCSPlayerResource {
            public const nint m_bHostageAlive = 0x7A8; // bool[12]
            public const nint m_isHostageFollowingSomeone = 0x7B4; // bool[12]
            public const nint m_iHostageEntityIDs = 0x7C0; // CEntityIndex[12]
            public const nint m_bombsiteCenterA = 0x7F0; // Vector
            public const nint m_bombsiteCenterB = 0x7FC; // Vector
            public const nint m_hostageRescueX = 0x808; // int32[4]
            public const nint m_hostageRescueY = 0x818; // int32[4]
            public const nint m_hostageRescueZ = 0x828; // int32[4]
            public const nint m_bEndMatchNextMapAllVoted = 0x838; // bool
            public const nint m_foundGoalPositions = 0x839; // bool
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSPlayerControllerAPI {
        }
        // Parent: CPlayer_CameraServices
        // Fields count: 7
        //
        // Metadata:
        // NetworkVarNames: m_iFOV (uint32)
        // NetworkVarNames: m_iFOVStart (uint32)
        // NetworkVarNames: m_flFOVTime (GameTime_t)
        // NetworkVarNames: m_flFOVRate (float32)
        // NetworkVarNames: m_hZoomOwner (CHandle<CBaseEntity>)
        public static class CCSPlayerBase_CameraServices {
            public const nint m_iFOV = 0x170; // uint32
            public const nint m_iFOVStart = 0x174; // uint32
            public const nint m_flFOVTime = 0x178; // GameTime_t
            public const nint m_flFOVRate = 0x17C; // float32
            public const nint m_hZoomOwner = 0x180; // CHandle<CBaseEntity>
            public const nint m_hTriggerFogList = 0x188; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_hLastFogTrigger = 0x1A0; // CHandle<CBaseEntity>
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
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_weaponPurchases (WeaponPurchaseCount_t)
        public static class WeaponPurchaseTracker_t {
            public const nint m_weaponPurchases = 0x8; // CUtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_bIsRescuing (bool)
        // NetworkVarNames: m_weaponPurchasesThisMatch (WeaponPurchaseTracker_t)
        // NetworkVarNames: m_weaponPurchasesThisRound (WeaponPurchaseTracker_t)
        public static class CCSPlayer_ActionTrackingServices {
            public const nint m_hLastWeaponBeforeC4AutoSwitch = 0x208; // CHandle<CBasePlayerWeapon>
            public const nint m_bIsRescuing = 0x23C; // bool
            public const nint m_weaponPurchasesThisMatch = 0x240; // WeaponPurchaseTracker_t
            public const nint m_weaponPurchasesThisRound = 0x298; // WeaponPurchaseTracker_t
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_totalHitsOnServer (int32)
        public static class CCSPlayer_BulletServices {
            public const nint m_totalHitsOnServer = 0x40; // int32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_unDefIdx (item_definition_index_t)
        // NetworkVarNames: m_nCost (int)
        // NetworkVarNames: m_nPrevArmor (int)
        // NetworkVarNames: m_bPrevHelmet (bool)
        // NetworkVarNames: m_hItem (CEntityHandle)
        public static class SellbackPurchaseEntry_t {
            public const nint m_unDefIdx = 0x30; // uint16
            public const nint m_nCost = 0x34; // int32
            public const nint m_nPrevArmor = 0x38; // int32
            public const nint m_bPrevHelmet = 0x3C; // bool
            public const nint m_hItem = 0x40; // CEntityHandle
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_vecSellbackPurchaseEntries (SellbackPurchaseEntry_t)
        public static class CCSPlayer_BuyServices {
            public const nint m_vecSellbackPurchaseEntries = 0xC8; // CUtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_hCarriedHostage (CHandle<CBaseEntity>)
        // NetworkVarNames: m_hCarriedHostageProp (CHandle<CBaseEntity>)
        public static class CCSPlayer_HostageServices {
            public const nint m_hCarriedHostage = 0x40; // CHandle<CBaseEntity>
            public const nint m_hCarriedHostageProp = 0x44; // CHandle<CBaseEntity>
        }
        // Parent: None
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
        // Parent: CPlayer_MovementServices_Humanoid
        // Fields count: 39
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
            public const nint m_flMaxFallVelocity = 0x224; // float32
            public const nint m_vecLadderNormal = 0x228; // Vector
            public const nint m_nLadderSurfacePropIndex = 0x234; // int32
            public const nint m_flDuckAmount = 0x238; // float32
            public const nint m_flDuckSpeed = 0x23C; // float32
            public const nint m_bDuckOverride = 0x240; // bool
            public const nint m_bDesiresDuck = 0x241; // bool
            public const nint m_flDuckOffset = 0x244; // float32
            public const nint m_nDuckTimeMsecs = 0x248; // uint32
            public const nint m_nDuckJumpTimeMsecs = 0x24C; // uint32
            public const nint m_nJumpTimeMsecs = 0x250; // uint32
            public const nint m_flLastDuckTime = 0x254; // float32
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
            public const nint m_nGameCodeHasMovedPlayerAfterCommand = 0x4B0; // int32
            public const nint m_bMadeFootstepNoise = 0x4B4; // bool
            public const nint m_iFootsteps = 0x4B8; // int32
            public const nint m_bOldJumpPressed = 0x4BC; // bool
            public const nint m_flJumpPressedTime = 0x4C0; // float32
            public const nint m_flJumpUntil = 0x4C4; // float32
            public const nint m_flJumpVel = 0x4C8; // float32
            public const nint m_fStashGrenadeParameterWhen = 0x4CC; // GameTime_t
            public const nint m_nButtonDownMaskPrev = 0x4D0; // uint64
            public const nint m_flOffsetTickCompleteTime = 0x4D8; // float32
            public const nint m_flOffsetTickStashedSpeed = 0x4DC; // float32
            public const nint m_flStamina = 0x4E0; // float32
            public const nint m_flHeightAtJumpStart = 0x4E4; // float32
            public const nint m_flMaxJumpHeightThisJump = 0x4E8; // float32
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_hViewModel (CHandle<CBaseViewModel>)
        public static class CCSPlayer_ViewModelServices {
            public const nint m_hViewModel = 0x40; // CHandle<CBaseViewModel>[3]
        }
        // Parent: CPlayer_WeaponServices
        // Fields count: 14
        //
        // Metadata:
        // NetworkVarNames: m_flNextAttack (GameTime_t)
        // NetworkVarNames: m_bIsLookingAtWeapon (bool)
        // NetworkVarNames: m_bIsHoldingLookAtWeapon (bool)
        public static class CCSPlayer_WeaponServices {
            public const nint m_flNextAttack = 0xA4; // GameTime_t
            public const nint m_bIsLookingAtWeapon = 0xA8; // bool
            public const nint m_bIsHoldingLookAtWeapon = 0xA9; // bool
            public const nint m_hSavedWeapon = 0xAC; // CHandle<CBasePlayerWeapon>
            public const nint m_nTimeToMelee = 0xB0; // int32
            public const nint m_nTimeToSecondary = 0xB4; // int32
            public const nint m_nTimeToPrimary = 0xB8; // int32
            public const nint m_nTimeToSniperRifle = 0xBC; // int32
            public const nint m_bIsBeingGivenItem = 0xC0; // bool
            public const nint m_bIsPickingUpItemWithUse = 0xC1; // bool
            public const nint m_bPickedUpWeapon = 0xC2; // bool
            public const nint m_bDisableAutoDeploy = 0xC3; // bool
            public const nint m_nOldShootPositionHistoryCount = 0xC4; // uint32
            public const nint m_nOldInputHistoryCount = 0x460; // uint32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_perRoundStats (CSPerRoundStats_t)
        // NetworkVarNames: m_matchStats (CSMatchStats_t)
        // NetworkVarNames: m_iNumRoundKills (int)
        // NetworkVarNames: m_iNumRoundKillsHeadshots (int)
        // NetworkVarNames: m_unTotalRoundDamageDealt (uint32)
        public static class CCSPlayerController_ActionTrackingServices {
            public const nint m_perRoundStats = 0x40; // CUtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
            public const nint m_matchStats = 0x90; // CSMatchStats_t
            public const nint m_iNumRoundKills = 0x148; // int32
            public const nint m_iNumRoundKillsHeadshots = 0x14C; // int32
            public const nint m_unTotalRoundDamageDealt = 0x150; // uint32
        }
        // Parent: None
        // Fields count: 14
        //
        // Metadata:
        // NetworkVarNames: m_PlayerDamager (CHandle<CCSPlayerPawnBase>)
        // NetworkVarNames: m_PlayerRecipient (CHandle<CCSPlayerPawnBase>)
        // NetworkVarNames: m_hPlayerControllerDamager (CHandle<CCSPlayerController>)
        // NetworkVarNames: m_hPlayerControllerRecipient (CHandle<CCSPlayerController>)
        // NetworkVarNames: m_szPlayerDamagerName (CUtlString)
        // NetworkVarNames: m_szPlayerRecipientName (CUtlString)
        // NetworkVarNames: m_DamagerXuid (uint64)
        // NetworkVarNames: m_RecipientXuid (uint64)
        // NetworkVarNames: m_iDamage (int)
        // NetworkVarNames: m_iActualHealthRemoved (int)
        // NetworkVarNames: m_iNumHits (int)
        // NetworkVarNames: m_iLastBulletUpdate (int)
        // NetworkVarNames: m_bIsOtherEnemy (bool)
        // NetworkVarNames: m_killType (EKillTypes_t)
        public static class CDamageRecord {
            public const nint m_PlayerDamager = 0x28; // CHandle<CCSPlayerPawnBase>
            public const nint m_PlayerRecipient = 0x2C; // CHandle<CCSPlayerPawnBase>
            public const nint m_hPlayerControllerDamager = 0x30; // CHandle<CCSPlayerController>
            public const nint m_hPlayerControllerRecipient = 0x34; // CHandle<CCSPlayerController>
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
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_nSendUpdate (int)
        // NetworkVarNames: m_DamageList (CDamageRecord)
        public static class CCSPlayerController_DamageServices {
            public const nint m_nSendUpdate = 0x40; // int32
            public const nint m_DamageList = 0x48; // CUtlVectorEmbeddedNetworkVar<CDamageRecord>
        }
        // Parent: None
        // Fields count: 6
        //
        // Metadata:
        // NetworkVarNames: m_iAccount (int)
        // NetworkVarNames: m_iStartAccount (int)
        // NetworkVarNames: m_iTotalCashSpent (int)
        // NetworkVarNames: m_iCashSpentThisRound (int)
        public static class CCSPlayerController_InGameMoneyServices {
            public const nint m_bReceivesMoneyNextRound = 0x40; // bool
            public const nint m_iAccountMoneyEarnedForNextRound = 0x44; // int32
            public const nint m_iAccount = 0x48; // int32
            public const nint m_iStartAccount = 0x4C; // int32
            public const nint m_iTotalCashSpent = 0x50; // int32
            public const nint m_iCashSpentThisRound = 0x54; // int32
        }
        // Parent: None
        // Fields count: 9
        //
        // Metadata:
        // NetworkVarNames: m_unMusicID (item_definition_index_t)
        // NetworkVarNames: m_rank (MedalRank_t)
        // NetworkVarNames: m_nPersonaDataPublicLevel (int)
        // NetworkVarNames: m_nPersonaDataPublicCommendsLeader (int)
        // NetworkVarNames: m_nPersonaDataPublicCommendsTeacher (int)
        // NetworkVarNames: m_nPersonaDataPublicCommendsFriendly (int)
        // NetworkVarNames: m_nPersonaDataXpTrailLevel (int)
        // NetworkVarNames: m_vecServerAuthoritativeWeaponSlots (ServerAuthoritativeWeaponSlot_t)
        public static class CCSPlayerController_InventoryServices {
            public const nint m_unMusicID = 0x40; // uint16
            public const nint m_rank = 0x44; // MedalRank_t[6]
            public const nint m_nPersonaDataPublicLevel = 0x5C; // int32
            public const nint m_nPersonaDataPublicCommendsLeader = 0x60; // int32
            public const nint m_nPersonaDataPublicCommendsTeacher = 0x64; // int32
            public const nint m_nPersonaDataPublicCommendsFriendly = 0x68; // int32
            public const nint m_nPersonaDataXpTrailLevel = 0x6C; // int32
            public const nint m_unEquippedPlayerSprayIDs = 0xF48; // uint32[1]
            public const nint m_vecServerAuthoritativeWeaponSlots = 0xF50; // CUtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSWeaponBaseVDataAPI {
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
        // Fields count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CFiringModeFloat {
            public const nint m_flValues = 0x0; // float32[2]
        }
        // Parent: None
        // Fields count: 1
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CFiringModeInt {
            public const nint m_nValues = 0x0; // int32[2]
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSObserverPawnAPI {
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseProvideFeatureTag
        // MPulseLibraryBindings
        public static class CCSPlayerPawnAPI {
        }
        // Parent: CBaseEntity
        // Fields count: 14
        //
        // Metadata:
        // NetworkVarNames: m_iActiveIssueIndex (int)
        // NetworkVarNames: m_iOnlyTeamToVote (int)
        // NetworkVarNames: m_nVoteOptionCount (int)
        // NetworkVarNames: m_nPotentialVotes (int)
        // NetworkVarNames: m_bIsYesNoVote (bool)
        public static class CVoteController {
            public const nint m_iActiveIssueIndex = 0x7A8; // int32
            public const nint m_iOnlyTeamToVote = 0x7AC; // int32
            public const nint m_nVoteOptionCount = 0x7B0; // int32[5]
            public const nint m_nPotentialVotes = 0x7C4; // int32
            public const nint m_bIsYesNoVote = 0x7C8; // bool
            public const nint m_acceptingVotesTimer = 0x7D0; // CountdownTimer
            public const nint m_executeCommandTimer = 0x7E8; // CountdownTimer
            public const nint m_resetVoteTimer = 0x800; // CountdownTimer
            public const nint m_nVotesCast = 0x818; // int32[64]
            public const nint m_playerHoldingVote = 0x918; // CPlayerSlot
            public const nint m_playerOverrideForVote = 0x91C; // CPlayerSlot
            public const nint m_nHighestCountIndex = 0x920; // int32
            public const nint m_potentialIssues = 0x928; // CUtlVector<CBaseIssue*>
            public const nint m_VoteOptions = 0x940; // CUtlVector<char*>
        }
        // Parent: CBaseEntity
        // Fields count: 24
        //
        // Metadata:
        // NetworkVarNames: m_nDraftType (int)
        // NetworkVarNames: m_nTeamWinningCoinToss (int)
        // NetworkVarNames: m_nTeamWithFirstChoice (int)
        // NetworkVarNames: m_nVoteMapIdsList (int)
        // NetworkVarNames: m_nAccountIDs (int)
        // NetworkVarNames: m_nMapId0 (int)
        // NetworkVarNames: m_nMapId1 (int)
        // NetworkVarNames: m_nMapId2 (int)
        // NetworkVarNames: m_nMapId3 (int)
        // NetworkVarNames: m_nMapId4 (int)
        // NetworkVarNames: m_nMapId5 (int)
        // NetworkVarNames: m_nStartingSide0 (int)
        // NetworkVarNames: m_nCurrentPhase (int)
        // NetworkVarNames: m_nPhaseStartTick (int)
        // NetworkVarNames: m_nPhaseDurationTicks (int)
        public static class CMapVetoPickController {
            public const nint m_bPlayedIntroVcd = 0x7A8; // bool
            public const nint m_bNeedToPlayFiveSecondsRemaining = 0x7A9; // bool
            public const nint m_dblPreMatchDraftSequenceTime = 0x7C8; // float64
            public const nint m_bPreMatchDraftStateChanged = 0x7D0; // bool
            public const nint m_nDraftType = 0x7D4; // int32
            public const nint m_nTeamWinningCoinToss = 0x7D8; // int32
            public const nint m_nTeamWithFirstChoice = 0x7DC; // int32[64]
            public const nint m_nVoteMapIdsList = 0x8DC; // int32[7]
            public const nint m_nAccountIDs = 0x8F8; // int32[64]
            public const nint m_nMapId0 = 0x9F8; // int32[64]
            public const nint m_nMapId1 = 0xAF8; // int32[64]
            public const nint m_nMapId2 = 0xBF8; // int32[64]
            public const nint m_nMapId3 = 0xCF8; // int32[64]
            public const nint m_nMapId4 = 0xDF8; // int32[64]
            public const nint m_nMapId5 = 0xEF8; // int32[64]
            public const nint m_nStartingSide0 = 0xFF8; // int32[64]
            public const nint m_nCurrentPhase = 0x10F8; // int32
            public const nint m_nPhaseStartTick = 0x10FC; // int32
            public const nint m_nPhaseDurationTicks = 0x1100; // int32
            public const nint m_OnMapVetoed = 0x1108; // CEntityOutputTemplate<CUtlSymbolLarge>
            public const nint m_OnMapPicked = 0x1130; // CEntityOutputTemplate<CUtlSymbolLarge>
            public const nint m_OnSidesPicked = 0x1158; // CEntityOutputTemplate<int32>
            public const nint m_OnNewPhaseStarted = 0x1180; // CEntityOutputTemplate<int32>
            public const nint m_OnLevelTransition = 0x11A8; // CEntityOutputTemplate<int32>
        }
        // Parent: None
        // Fields count: 0
        //
        // Metadata:
        // MPulseLibraryBindings
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CCSPulseServerFuncs_Globals {
        }
        // Parent: CBaseEntity
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
        public static class CEnvCombinedLightProbeVolume {
            public const nint m_Color = 0x1800; // Color
            public const nint m_flBrightness = 0x1804; // float32
            public const nint m_hCubemapTexture = 0x1808; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_bCustomCubemapTexture = 0x1810; // bool
            public const nint m_hLightProbeTexture = 0x1818; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hLightProbeDirectLightIndicesTexture = 0x1820; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hLightProbeDirectLightScalarsTexture = 0x1828; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hLightProbeDirectLightShadowsTexture = 0x1830; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_vBoxMins = 0x1838; // Vector
            public const nint m_vBoxMaxs = 0x1844; // Vector
            public const nint m_bMoveable = 0x1850; // bool
            public const nint m_nHandshake = 0x1854; // int32
            public const nint m_nEnvCubeMapArrayIndex = 0x1858; // int32
            public const nint m_nPriority = 0x185C; // int32
            public const nint m_bStartDisabled = 0x1860; // bool
            public const nint m_flEdgeFadeDist = 0x1864; // float32
            public const nint m_vEdgeFadeDists = 0x1868; // Vector
            public const nint m_nLightProbeSizeX = 0x1874; // int32
            public const nint m_nLightProbeSizeY = 0x1878; // int32
            public const nint m_nLightProbeSizeZ = 0x187C; // int32
            public const nint m_nLightProbeAtlasX = 0x1880; // int32
            public const nint m_nLightProbeAtlasY = 0x1884; // int32
            public const nint m_nLightProbeAtlasZ = 0x1888; // int32
            public const nint m_bEnabled = 0x18A1; // bool
        }
        // Parent: CBaseEntity
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
        public static class CEnvCubemap {
            public const nint m_hCubemapTexture = 0x828; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_bCustomCubemapTexture = 0x830; // bool
            public const nint m_flInfluenceRadius = 0x834; // float32
            public const nint m_vBoxProjectMins = 0x838; // Vector
            public const nint m_vBoxProjectMaxs = 0x844; // Vector
            public const nint m_bMoveable = 0x850; // bool
            public const nint m_nHandshake = 0x854; // int32
            public const nint m_nEnvCubeMapArrayIndex = 0x858; // int32
            public const nint m_nPriority = 0x85C; // int32
            public const nint m_flEdgeFadeDist = 0x860; // float32
            public const nint m_vEdgeFadeDists = 0x864; // Vector
            public const nint m_flDiffuseScale = 0x870; // float32
            public const nint m_bStartDisabled = 0x874; // bool
            public const nint m_bDefaultEnvMap = 0x875; // bool
            public const nint m_bDefaultSpecEnvMap = 0x876; // bool
            public const nint m_bIndoorCubeMap = 0x877; // bool
            public const nint m_bCopyDiffuseFromDefaultCubemap = 0x878; // bool
            public const nint m_bEnabled = 0x888; // bool
        }
        // Parent: CBaseEntity
        // Fields count: 18
        //
        // Metadata:
        // NetworkVarNames: m_flEndDistance (float)
        // NetworkVarNames: m_flStartDistance (float)
        // NetworkVarNames: m_flFogFalloffExponent (float)
        // NetworkVarNames: m_bHeightFogEnabled (bool)
        // NetworkVarNames: m_flFogHeightWidth (float)
        // NetworkVarNames: m_flFogHeightEnd (float)
        // NetworkVarNames: m_flFogHeightStart (float)
        // NetworkVarNames: m_flFogHeightExponent (float)
        // NetworkVarNames: m_flLODBias (float)
        // NetworkVarNames: m_bActive (bool)
        // NetworkVarNames: m_bStartDisabled (bool)
        // NetworkVarNames: m_flFogMaxOpacity (float)
        // NetworkVarNames: m_nCubemapSourceType (int)
        // NetworkVarNames: m_hSkyMaterial (HMaterialStrong)
        // NetworkVarNames: m_iszSkyEntity (string_t)
        // NetworkVarNames: m_hFogCubemapTexture (HRenderTextureStrong)
        // NetworkVarNames: m_bHasHeightFogEnd (bool)
        public static class CEnvCubemapFog {
            public const nint m_flEndDistance = 0x7A8; // float32
            public const nint m_flStartDistance = 0x7AC; // float32
            public const nint m_flFogFalloffExponent = 0x7B0; // float32
            public const nint m_bHeightFogEnabled = 0x7B4; // bool
            public const nint m_flFogHeightWidth = 0x7B8; // float32
            public const nint m_flFogHeightEnd = 0x7BC; // float32
            public const nint m_flFogHeightStart = 0x7C0; // float32
            public const nint m_flFogHeightExponent = 0x7C4; // float32
            public const nint m_flLODBias = 0x7C8; // float32
            public const nint m_bActive = 0x7CC; // bool
            public const nint m_bStartDisabled = 0x7CD; // bool
            public const nint m_flFogMaxOpacity = 0x7D0; // float32
            public const nint m_nCubemapSourceType = 0x7D4; // int32
            public const nint m_hSkyMaterial = 0x7D8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_iszSkyEntity = 0x7E0; // CUtlSymbolLarge
            public const nint m_hFogCubemapTexture = 0x7E8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_bHasHeightFogEnd = 0x7F0; // bool
            public const nint m_bFirstTime = 0x7F1; // bool
        }
        // Parent: CBaseEntity
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
        public static class CGradientFog {
            public const nint m_hGradientFogTexture = 0x7A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_flFogStartDistance = 0x7B0; // float32
            public const nint m_flFogEndDistance = 0x7B4; // float32
            public const nint m_bHeightFogEnabled = 0x7B8; // bool
            public const nint m_flFogStartHeight = 0x7BC; // float32
            public const nint m_flFogEndHeight = 0x7C0; // float32
            public const nint m_flFarZ = 0x7C4; // float32
            public const nint m_flFogMaxOpacity = 0x7C8; // float32
            public const nint m_flFogFalloffExponent = 0x7CC; // float32
            public const nint m_flFogVerticalExponent = 0x7D0; // float32
            public const nint m_fogColor = 0x7D4; // Color
            public const nint m_flFogStrength = 0x7D8; // float32
            public const nint m_flFadeTime = 0x7DC; // float32
            public const nint m_bStartDisabled = 0x7E0; // bool
            public const nint m_bIsEnabled = 0x7E1; // bool
            public const nint m_bGradientFogNeedsTextures = 0x7E2; // bool
        }
        // Parent: CBaseEntity
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
        public static class CEnvLightProbeVolume {
            public const nint m_hLightProbeTexture = 0x1780; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hLightProbeDirectLightIndicesTexture = 0x1788; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hLightProbeDirectLightScalarsTexture = 0x1790; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hLightProbeDirectLightShadowsTexture = 0x1798; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_vBoxMins = 0x17A0; // Vector
            public const nint m_vBoxMaxs = 0x17AC; // Vector
            public const nint m_bMoveable = 0x17B8; // bool
            public const nint m_nHandshake = 0x17BC; // int32
            public const nint m_nPriority = 0x17C0; // int32
            public const nint m_bStartDisabled = 0x17C4; // bool
            public const nint m_nLightProbeSizeX = 0x17C8; // int32
            public const nint m_nLightProbeSizeY = 0x17CC; // int32
            public const nint m_nLightProbeSizeZ = 0x17D0; // int32
            public const nint m_nLightProbeAtlasX = 0x17D4; // int32
            public const nint m_nLightProbeAtlasY = 0x17D8; // int32
            public const nint m_nLightProbeAtlasZ = 0x17DC; // int32
            public const nint m_bEnabled = 0x17E9; // bool
        }
        // Parent: CBaseEntity
        // Fields count: 6
        //
        // Metadata:
        // NetworkVarNames: m_flVisibilityStrength (float)
        // NetworkVarNames: m_flFogDistanceMultiplier (float)
        // NetworkVarNames: m_flFogMaxDensityMultiplier (float)
        // NetworkVarNames: m_flFadeTime (float)
        // NetworkVarNames: m_bStartDisabled (bool)
        // NetworkVarNames: m_bIsEnabled (bool)
        public static class CPlayerVisibility {
            public const nint m_flVisibilityStrength = 0x7A8; // float32
            public const nint m_flFogDistanceMultiplier = 0x7AC; // float32
            public const nint m_flFogMaxDensityMultiplier = 0x7B0; // float32
            public const nint m_flFadeTime = 0x7B4; // float32
            public const nint m_bStartDisabled = 0x7B8; // bool
            public const nint m_bIsEnabled = 0x7B9; // bool
        }
        // Parent: CBaseEntity
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
        public static class CTonemapController2 {
            public const nint m_flAutoExposureMin = 0x7A8; // float32
            public const nint m_flAutoExposureMax = 0x7AC; // float32
            public const nint m_flTonemapPercentTarget = 0x7B0; // float32
            public const nint m_flTonemapPercentBrightPixels = 0x7B4; // float32
            public const nint m_flTonemapMinAvgLum = 0x7B8; // float32
            public const nint m_flExposureAdaptationSpeedUp = 0x7BC; // float32
            public const nint m_flExposureAdaptationSpeedDown = 0x7C0; // float32
            public const nint m_flTonemapEVSmoothingRange = 0x7C4; // float32
        }
        // Parent: CBaseEntity
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
        public static class CEnvVolumetricFogController {
            public const nint m_flScattering = 0x7A8; // float32
            public const nint m_flAnisotropy = 0x7AC; // float32
            public const nint m_flFadeSpeed = 0x7B0; // float32
            public const nint m_flDrawDistance = 0x7B4; // float32
            public const nint m_flFadeInStart = 0x7B8; // float32
            public const nint m_flFadeInEnd = 0x7BC; // float32
            public const nint m_flIndirectStrength = 0x7C0; // float32
            public const nint m_nIndirectTextureDimX = 0x7C4; // int32
            public const nint m_nIndirectTextureDimY = 0x7C8; // int32
            public const nint m_nIndirectTextureDimZ = 0x7CC; // int32
            public const nint m_vBoxMins = 0x7D0; // Vector
            public const nint m_vBoxMaxs = 0x7DC; // Vector
            public const nint m_bActive = 0x7E8; // bool
            public const nint m_flStartAnisoTime = 0x7EC; // GameTime_t
            public const nint m_flStartScatterTime = 0x7F0; // GameTime_t
            public const nint m_flStartDrawDistanceTime = 0x7F4; // GameTime_t
            public const nint m_flStartAnisotropy = 0x7F8; // float32
            public const nint m_flStartScattering = 0x7FC; // float32
            public const nint m_flStartDrawDistance = 0x800; // float32
            public const nint m_flDefaultAnisotropy = 0x804; // float32
            public const nint m_flDefaultScattering = 0x808; // float32
            public const nint m_flDefaultDrawDistance = 0x80C; // float32
            public const nint m_bStartDisabled = 0x810; // bool
            public const nint m_bEnableIndirect = 0x811; // bool
            public const nint m_bIsMaster = 0x812; // bool
            public const nint m_hFogIndirectTexture = 0x818; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_nForceRefreshCount = 0x820; // int32
            public const nint m_bFirstTime = 0x824; // bool
        }
        // Parent: CBaseEntity
        // Fields count: 7
        //
        // Metadata:
        // NetworkVarNames: m_bActive (bool)
        // NetworkVarNames: m_vBoxMins (Vector)
        // NetworkVarNames: m_vBoxMaxs (Vector)
        // NetworkVarNames: m_bStartDisabled (bool)
        // NetworkVarNames: m_flStrength (float)
        // NetworkVarNames: m_nFalloffShape (int)
        // NetworkVarNames: m_flFalloffExponent (float)
        public static class CEnvVolumetricFogVolume {
            public const nint m_bActive = 0x7A8; // bool
            public const nint m_vBoxMins = 0x7AC; // Vector
            public const nint m_vBoxMaxs = 0x7B8; // Vector
            public const nint m_bStartDisabled = 0x7C4; // bool
            public const nint m_flStrength = 0x7C8; // float32
            public const nint m_nFalloffShape = 0x7CC; // int32
            public const nint m_flFalloffExponent = 0x7D0; // float32
        }
        // Parent: CBaseEntity
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_fog (fogparams_t)
        public static class CFogController {
            public const nint m_fog = 0x7A8; // fogparams_t
            public const nint m_bUseAngles = 0x810; // bool
            public const nint m_iChangedVariables = 0x814; // int32
        }
        // Parent: CBaseEntity
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_nMode (int)
        // NetworkVarNames: m_vBoxSize (Vector)
        // NetworkVarNames: m_bEnabled (bool)
        public static class CInfoVisibilityBox {
            public const nint m_nMode = 0x7AC; // int32
            public const nint m_vBoxSize = 0x7B0; // Vector
            public const nint m_bEnabled = 0x7BC; // bool
        }
        // Parent: CBaseEntity
        // Fields count: 7
        //
        // Metadata:
        // NetworkVarNames: m_worldName (string_t)
        // NetworkVarNames: m_layerName (string_t)
        // NetworkVarNames: m_bWorldLayerVisible (bool)
        // NetworkVarNames: m_bEntitiesSpawned (bool)
        public static class CInfoWorldLayer {
            public const nint m_pOutputOnEntitiesSpawned = 0x7A8; // CEntityIOOutput
            public const nint m_worldName = 0x7D0; // CUtlSymbolLarge
            public const nint m_layerName = 0x7D8; // CUtlSymbolLarge
            public const nint m_bWorldLayerVisible = 0x7E0; // bool
            public const nint m_bEntitiesSpawned = 0x7E1; // bool
            public const nint m_bCreateAsChildSpawnGroup = 0x7E2; // bool
            public const nint m_hLayerSpawnGroup = 0x7E4; // uint32
        }
        // Parent: CBaseEntity
        // Fields count: 25
        //
        // Metadata:
        // NetworkVarNames: m_FOV (float)
        // NetworkVarNames: m_Resolution (float)
        // NetworkVarNames: m_bFogEnable (bool)
        // NetworkVarNames: m_FogColor (Color)
        // NetworkVarNames: m_flFogStart (float)
        // NetworkVarNames: m_flFogEnd (float)
        // NetworkVarNames: m_flFogMaxDensity (float)
        // NetworkVarNames: m_bActive (bool)
        // NetworkVarNames: m_bUseScreenAspectRatio (bool)
        // NetworkVarNames: m_flAspectRatio (float)
        // NetworkVarNames: m_bNoSky (bool)
        // NetworkVarNames: m_fBrightness (float)
        // NetworkVarNames: m_flZFar (float)
        // NetworkVarNames: m_flZNear (float)
        // NetworkVarNames: m_bCanHLTVUse (bool)
        // NetworkVarNames: m_bDofEnabled (bool)
        // NetworkVarNames: m_flDofNearBlurry (float)
        // NetworkVarNames: m_flDofNearCrisp (float)
        // NetworkVarNames: m_flDofFarCrisp (float)
        // NetworkVarNames: m_flDofFarBlurry (float)
        // NetworkVarNames: m_flDofTiltToGround (float)
        public static class CPointCamera {
            public const nint m_FOV = 0x7A8; // float32
            public const nint m_Resolution = 0x7AC; // float32
            public const nint m_bFogEnable = 0x7B0; // bool
            public const nint m_FogColor = 0x7B1; // Color
            public const nint m_flFogStart = 0x7B8; // float32
            public const nint m_flFogEnd = 0x7BC; // float32
            public const nint m_flFogMaxDensity = 0x7C0; // float32
            public const nint m_bActive = 0x7C4; // bool
            public const nint m_bUseScreenAspectRatio = 0x7C5; // bool
            public const nint m_flAspectRatio = 0x7C8; // float32
            public const nint m_bNoSky = 0x7CC; // bool
            public const nint m_fBrightness = 0x7D0; // float32
            public const nint m_flZFar = 0x7D4; // float32
            public const nint m_flZNear = 0x7D8; // float32
            public const nint m_bCanHLTVUse = 0x7DC; // bool
            public const nint m_bDofEnabled = 0x7DD; // bool
            public const nint m_flDofNearBlurry = 0x7E0; // float32
            public const nint m_flDofNearCrisp = 0x7E4; // float32
            public const nint m_flDofFarCrisp = 0x7E8; // float32
            public const nint m_flDofFarBlurry = 0x7EC; // float32
            public const nint m_flDofTiltToGround = 0x7F0; // float32
            public const nint m_TargetFOV = 0x7F4; // float32
            public const nint m_DegreesPerSecond = 0x7F8; // float32
            public const nint m_bIsOn = 0x7FC; // bool
            public const nint m_pNext = 0x800; // CPointCamera*
        }
        // Parent: CBaseEntity
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_bDisabled (bool)
        // NetworkVarNames: m_iszSoundAreaType (string_t)
        // NetworkVarNames: m_vPos (Vector)
        public static class CSoundAreaEntityBase {
            public const nint m_bDisabled = 0x7A8; // bool
            public const nint m_iszSoundAreaType = 0x7B0; // CUtlSymbolLarge
            public const nint m_vPos = 0x7B8; // Vector
        }
        // Parent: CSoundAreaEntityBase
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_flRadius (float)
        public static class CSoundAreaEntitySphere {
            public const nint m_flRadius = 0x7C4; // float32
        }
        // Parent: CSoundAreaEntityBase
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_vMin (Vector)
        // NetworkVarNames: m_vMax (Vector)
        public static class CSoundAreaEntityOrientedBox {
            public const nint m_vMin = 0x7C4; // Vector
            public const nint m_vMax = 0x7D0; // Vector
        }
        // Parent: CBaseEntity
        // Fields count: 4
        //
        // Metadata:
        // MNetworkIncludeByName
        // NetworkVarNames: m_aPlayerControllers (CHandle<CBasePlayerController>)
        // NetworkVarNames: m_aPlayers (CHandle<CBasePlayerPawn>)
        // NetworkVarNames: m_iScore (int32)
        // NetworkVarNames: m_szTeamname (char)
        public static class CTeam {
            public const nint m_aPlayerControllers = 0x7A8; // CNetworkUtlVectorBase<CHandle<CBasePlayerController>>
            public const nint m_aPlayers = 0x7C0; // CNetworkUtlVectorBase<CHandle<CBasePlayerPawn>>
            public const nint m_iScore = 0x7D8; // int32
            public const nint m_szTeamname = 0x7DC; // char[129]
        }
        // Parent: CBaseEntity
        // Fields count: 25
        //
        // Metadata:
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkUserGroupProxy
        // MNetworkUserGroupProxy
        // MNetworkIncludeByUserGroup
        // NetworkVarNames: m_nTickBase (uint32)
        // NetworkVarNames: m_hPawn (CHandle<CBasePlayerPawn>)
        // NetworkVarNames: m_iConnected (PlayerConnectedState)
        // NetworkVarNames: m_iszPlayerName (char)
        // NetworkVarNames: m_steamID (uint64)
        // NetworkVarNames: m_iDesiredFOV (uint32)
        public static class CBasePlayerController {
            public const nint m_nInButtonsWhichAreToggles = 0x7B0; // uint64
            public const nint m_nTickBase = 0x7B8; // uint32
            public const nint m_hPawn = 0x7E8; // CHandle<CBasePlayerPawn>
            public const nint m_nSplitScreenSlot = 0x7EC; // CSplitScreenSlot
            public const nint m_hSplitOwner = 0x7F0; // CHandle<CBasePlayerController>
            public const nint m_hSplitScreenPlayers = 0x7F8; // CUtlVector<CHandle<CBasePlayerController>>
            public const nint m_bIsHLTV = 0x810; // bool
            public const nint m_iConnected = 0x814; // PlayerConnectedState
            public const nint m_iszPlayerName = 0x818; // char[128]
            public const nint m_szNetworkIDString = 0x898; // CUtlString
            public const nint m_fLerpTime = 0x8A0; // float32
            public const nint m_bLagCompensation = 0x8A4; // bool
            public const nint m_bPredict = 0x8A5; // bool
            public const nint m_bAutoKickDisabled = 0x8A6; // bool
            public const nint m_bIsLowViolence = 0x8A7; // bool
            public const nint m_bGamePaused = 0x8A8; // bool
            public const nint m_nLastRealCommandNumberExecuted = 0x934; // int32
            public const nint m_nLastLateCommandExecuted = 0x938; // int32
            public const nint m_iIgnoreGlobalChat = 0x950; // ChatIgnoreType_t
            public const nint m_flLastPlayerTalkTime = 0x954; // float32
            public const nint m_flLastEntitySteadyState = 0x958; // float32
            public const nint m_nAvailableEntitySteadyState = 0x95C; // int32
            public const nint m_bHasAnySteadyStateEnts = 0x960; // bool
            public const nint m_steamID = 0x970; // uint64
            public const nint m_iDesiredFOV = 0x978; // uint32
        }
        // Parent: None
        // Fields count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBasePlayerVData {
            public const nint m_sModelName = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
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
        // Parent: None
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
        // Parent: None
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
            public const nint m_bSequenceFinished = 0x220; // bool
            public const nint m_flSoundSyncTime = 0x224; // float32
            public const nint m_hSequence = 0x228; // HSequence
            public const nint m_flSeqStartTime = 0x22C; // GameTime_t
            public const nint m_flSeqFixedCycle = 0x230; // float32
            public const nint m_nAnimLoopMode = 0x234; // AnimLoopMode_t
            public const nint m_flPlaybackRate = 0x238; // CNetworkedQuantizedFloat
            public const nint m_nNotifyState = 0x244; // SequenceFinishNotifyState_t
            public const nint m_bNetworkedAnimationInputsChanged = 0x246; // bool
            public const nint m_bNetworkedSequenceChanged = 0x247; // bool
            public const nint m_bLastUpdateSkipped = 0x248; // bool
            public const nint m_flPrevAnimUpdateTime = 0x24C; // GameTime_t
        }
        // Parent: CBaseEntity
        // Fields count: 25
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
        // NetworkVarNames: m_ConfigEntitiesToPropagateMaterialDecalsTo (CHandle<CBaseModelEntity>)
        // NetworkVarNames: m_vecViewOffset (CNetworkViewOffsetVector)
        public static class CBaseModelEntity {
            public const nint m_CRenderComponent = 0x7A8; // CRenderComponent*
            public const nint m_CHitboxComponent = 0x7B0; // CHitboxComponent
            public const nint m_flDissolveStartTime = 0x7D8; // GameTime_t
            public const nint m_OnIgnite = 0x7E0; // CEntityIOOutput
            public const nint m_nRenderMode = 0x808; // RenderMode_t
            public const nint m_nRenderFX = 0x809; // RenderFx_t
            public const nint m_bAllowFadeInView = 0x80A; // bool
            public const nint m_clrRender = 0x80B; // Color
            public const nint m_vecRenderAttributes = 0x810; // CUtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
            public const nint m_bRenderToCubemaps = 0x860; // bool
            public const nint m_Collision = 0x868; // CCollisionProperty
            public const nint m_Glow = 0x918; // CGlowProperty
            public const nint m_flGlowBackfaceMult = 0x970; // float32
            public const nint m_fadeMinDist = 0x974; // float32
            public const nint m_fadeMaxDist = 0x978; // float32
            public const nint m_flFadeScale = 0x97C; // float32
            public const nint m_flShadowStrength = 0x980; // float32
            public const nint m_nObjectCulling = 0x984; // uint8
            public const nint m_nAddDecal = 0x988; // int32
            public const nint m_vDecalPosition = 0x98C; // Vector
            public const nint m_vDecalForwardAxis = 0x998; // Vector
            public const nint m_flDecalHealBloodRate = 0x9A4; // float32
            public const nint m_flDecalHealHeightRate = 0x9A8; // float32
            public const nint m_ConfigEntitiesToPropagateMaterialDecalsTo = 0x9B0; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
            public const nint m_vecViewOffset = 0x9C8; // CNetworkViewOffsetVector
        }
        // Parent: CBaseModelEntity
        // Fields count: 22
        //
        // Metadata:
        // MNetworkIncludeByUserGroup
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // NetworkVarNames: m_szSnapshotFileName (char)
        // NetworkVarNames: m_bActive (bool)
        // NetworkVarNames: m_bFrozen (bool)
        // NetworkVarNames: m_flFreezeTransitionDuration (float)
        // NetworkVarNames: m_nStopType (int)
        // NetworkVarNames: m_bAnimateDuringGameplayPause (bool)
        // NetworkVarNames: m_iEffectIndex (HParticleSystemDefinitionStrong)
        // NetworkVarNames: m_flStartTime (GameTime_t)
        // NetworkVarNames: m_flPreSimTime (float32)
        // NetworkVarNames: m_vServerControlPoints (Vector)
        // NetworkVarNames: m_iServerControlPointAssignments (uint8)
        // NetworkVarNames: m_hControlPointEnts (CHandle<CBaseEntity>)
        // NetworkVarNames: m_bNoSave (bool)
        // NetworkVarNames: m_bNoFreeze (bool)
        // NetworkVarNames: m_bNoRamp (bool)
        public static class CParticleSystem {
            public const nint m_szSnapshotFileName = 0x9F8; // char[512]
            public const nint m_bActive = 0xBF8; // bool
            public const nint m_bFrozen = 0xBF9; // bool
            public const nint m_flFreezeTransitionDuration = 0xBFC; // float32
            public const nint m_nStopType = 0xC00; // int32
            public const nint m_bAnimateDuringGameplayPause = 0xC04; // bool
            public const nint m_iEffectIndex = 0xC08; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_flStartTime = 0xC10; // GameTime_t
            public const nint m_flPreSimTime = 0xC14; // float32
            public const nint m_vServerControlPoints = 0xC18; // Vector[4]
            public const nint m_iServerControlPointAssignments = 0xC48; // uint8[4]
            public const nint m_hControlPointEnts = 0xC4C; // CHandle<CBaseEntity>[64]
            public const nint m_bNoSave = 0xD4C; // bool
            public const nint m_bNoFreeze = 0xD4D; // bool
            public const nint m_bNoRamp = 0xD4E; // bool
            public const nint m_bStartActive = 0xD4F; // bool
            public const nint m_iszEffectName = 0xD50; // CUtlSymbolLarge
            public const nint m_iszControlPointNames = 0xD58; // CUtlSymbolLarge[64]
            public const nint m_nDataCP = 0xF58; // int32
            public const nint m_vecDataCPValue = 0xF5C; // Vector
            public const nint m_nTintCP = 0xF68; // int32
            public const nint m_clrTint = 0xF6C; // Color
        }
        // Parent: CBaseEntity
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
        public static class CPathParticleRope {
            public const nint m_bStartActive = 0x7A8; // bool
            public const nint m_flMaxSimulationTime = 0x7AC; // float32
            public const nint m_iszEffectName = 0x7B0; // CUtlSymbolLarge
            public const nint m_PathNodes_Name = 0x7B8; // CUtlVector<CUtlSymbolLarge>
            public const nint m_flParticleSpacing = 0x7D0; // float32
            public const nint m_flSlack = 0x7D4; // float32
            public const nint m_flRadius = 0x7D8; // float32
            public const nint m_ColorTint = 0x7DC; // Color
            public const nint m_nEffectState = 0x7E0; // int32
            public const nint m_iEffectIndex = 0x7E8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_PathNodes_Position = 0x7F0; // CNetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_TangentIn = 0x808; // CNetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_TangentOut = 0x820; // CNetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_Color = 0x838; // CNetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_PinEnabled = 0x850; // CNetworkUtlVectorBase<bool>
            public const nint m_PathNodes_RadiusScale = 0x868; // CNetworkUtlVectorBase<float32>
        }
        // Parent: CBaseModelEntity
        // Fields count: 9
        //
        // Metadata:
        // NetworkVarNames: m_Flags (uint8)
        // NetworkVarNames: m_LightStyle (uint8)
        // NetworkVarNames: m_Radius (float32)
        // NetworkVarNames: m_Exponent (int32)
        // NetworkVarNames: m_InnerAngle (float32)
        // NetworkVarNames: m_OuterAngle (float32)
        // NetworkVarNames: m_SpotRadius (float32)
        public static class CDynamicLight {
            public const nint m_ActualFlags = 0x9F8; // uint8
            public const nint m_Flags = 0x9F9; // uint8
            public const nint m_LightStyle = 0x9FA; // uint8
            public const nint m_On = 0x9FB; // bool
            public const nint m_Radius = 0x9FC; // float32
            public const nint m_Exponent = 0xA00; // int32
            public const nint m_InnerAngle = 0xA04; // float32
            public const nint m_OuterAngle = 0xA08; // float32
            public const nint m_SpotRadius = 0xA0C; // float32
        }
        // Parent: CBaseEntity
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
        public static class CEnvWind {
            public const nint m_EnvWindShared = 0x7A8; // CEnvWindShared
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_iszOverlayNames (string_t)
        // NetworkVarNames: m_flOverlayTimes (float32)
        // NetworkVarNames: m_flStartTime (GameTime_t)
        // NetworkVarNames: m_iDesiredOverlay (int32)
        // NetworkVarNames: m_bIsActive (bool)
        public static class CEnvScreenOverlay {
            public const nint m_iszOverlayNames = 0x7A8; // CUtlSymbolLarge[10]
            public const nint m_flOverlayTimes = 0x7F8; // float32[10]
            public const nint m_flStartTime = 0x820; // GameTime_t
            public const nint m_iDesiredOverlay = 0x824; // int32
            public const nint m_bIsActive = 0x828; // bool
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_fadeColor (Color)
        public static class CEnvFade {
            public const nint m_fadeColor = 0x7A8; // Color
            public const nint m_Duration = 0x7AC; // float32
            public const nint m_HoldDuration = 0x7B0; // float32
            public const nint m_OnBeginFade = 0x7B8; // CEntityIOOutput
        }
        // Parent: CBaseModelEntity
        // Fields count: 7
        //
        // Metadata:
        // MNetworkIncludeByUserGroup
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // NetworkVarNames: m_nHorizontalSize (uint32)
        // NetworkVarNames: m_nVerticalSize (uint32)
        // NetworkVarNames: m_nMinDist (uint32)
        // NetworkVarNames: m_nMaxDist (uint32)
        // NetworkVarNames: m_nOuterMaxDist (uint32)
        // NetworkVarNames: m_flGlowProxySize (float32)
        // NetworkVarNames: m_flHDRColorScale (float32)
        public static class CLightGlow {
            public const nint m_nHorizontalSize = 0x9F8; // uint32
            public const nint m_nVerticalSize = 0x9FC; // uint32
            public const nint m_nMinDist = 0xA00; // uint32
            public const nint m_nMaxDist = 0xA04; // uint32
            public const nint m_nOuterMaxDist = 0xA08; // uint32
            public const nint m_flGlowProxySize = 0xA0C; // float32
            public const nint m_flHDRColorScale = 0xA10; // float32
        }
        // Parent: None
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_bEnabled (bool)
        public static class CLogicGameEventListener {
            public const nint m_OnEventFired = 0x7B8; // CEntityIOOutput
            public const nint m_iszGameEventName = 0x7E0; // CUtlSymbolLarge
            public const nint m_iszGameEventItem = 0x7E8; // CUtlSymbolLarge
            public const nint m_bEnabled = 0x7F0; // bool
            public const nint m_bStartDisabled = 0x7F1; // bool
        }
        // Parent: CBaseEntity
        // Fields count: 44
        //
        // Metadata:
        // NetworkVarNames: m_bDisabled (bool)
        // NetworkVarNames: m_bUpdateOnClient (bool)
        // NetworkVarNames: m_nInputType (ValueRemapperInputType_t)
        // NetworkVarNames: m_hRemapLineStart (CHandle<CBaseEntity>)
        // NetworkVarNames: m_hRemapLineEnd (CHandle<CBaseEntity>)
        // NetworkVarNames: m_flMaximumChangePerSecond (float)
        // NetworkVarNames: m_flDisengageDistance (float)
        // NetworkVarNames: m_flEngageDistance (float)
        // NetworkVarNames: m_bRequiresUseKey (bool)
        // NetworkVarNames: m_nOutputType (ValueRemapperOutputType_t)
        // NetworkVarNames: m_hOutputEntities (CHandle<CBaseEntity>)
        // NetworkVarNames: m_nHapticsType (ValueRemapperHapticsType_t)
        // NetworkVarNames: m_nMomentumType (ValueRemapperMomentumType_t)
        // NetworkVarNames: m_flMomentumModifier (float)
        // NetworkVarNames: m_flSnapValue (float)
        // NetworkVarNames: m_nRatchetType (ValueRemapperRatchetType_t)
        // NetworkVarNames: m_flInputOffset (float)
        public static class CPointValueRemapper {
            public const nint m_bDisabled = 0x7A8; // bool
            public const nint m_bUpdateOnClient = 0x7A9; // bool
            public const nint m_nInputType = 0x7AC; // ValueRemapperInputType_t
            public const nint m_iszRemapLineStartName = 0x7B0; // CUtlSymbolLarge
            public const nint m_iszRemapLineEndName = 0x7B8; // CUtlSymbolLarge
            public const nint m_hRemapLineStart = 0x7C0; // CHandle<CBaseEntity>
            public const nint m_hRemapLineEnd = 0x7C4; // CHandle<CBaseEntity>
            public const nint m_flMaximumChangePerSecond = 0x7C8; // float32
            public const nint m_flDisengageDistance = 0x7CC; // float32
            public const nint m_flEngageDistance = 0x7D0; // float32
            public const nint m_bRequiresUseKey = 0x7D4; // bool
            public const nint m_nOutputType = 0x7D8; // ValueRemapperOutputType_t
            public const nint m_iszOutputEntityName = 0x7E0; // CUtlSymbolLarge
            public const nint m_iszOutputEntity2Name = 0x7E8; // CUtlSymbolLarge
            public const nint m_iszOutputEntity3Name = 0x7F0; // CUtlSymbolLarge
            public const nint m_iszOutputEntity4Name = 0x7F8; // CUtlSymbolLarge
            public const nint m_hOutputEntities = 0x800; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
            public const nint m_nHapticsType = 0x818; // ValueRemapperHapticsType_t
            public const nint m_nMomentumType = 0x81C; // ValueRemapperMomentumType_t
            public const nint m_flMomentumModifier = 0x820; // float32
            public const nint m_flSnapValue = 0x824; // float32
            public const nint m_flCurrentMomentum = 0x828; // float32
            public const nint m_nRatchetType = 0x82C; // ValueRemapperRatchetType_t
            public const nint m_flRatchetOffset = 0x830; // float32
            public const nint m_flInputOffset = 0x834; // float32
            public const nint m_bEngaged = 0x838; // bool
            public const nint m_bFirstUpdate = 0x839; // bool
            public const nint m_flPreviousValue = 0x83C; // float32
            public const nint m_flPreviousUpdateTickTime = 0x840; // GameTime_t
            public const nint m_vecPreviousTestPoint = 0x844; // Vector
            public const nint m_hUsingPlayer = 0x850; // CHandle<CBasePlayerPawn>
            public const nint m_flCustomOutputValue = 0x854; // float32
            public const nint m_iszSoundEngage = 0x858; // CUtlSymbolLarge
            public const nint m_iszSoundDisengage = 0x860; // CUtlSymbolLarge
            public const nint m_iszSoundReachedValueZero = 0x868; // CUtlSymbolLarge
            public const nint m_iszSoundReachedValueOne = 0x870; // CUtlSymbolLarge
            public const nint m_iszSoundMovingLoop = 0x878; // CUtlSymbolLarge
            public const nint m_Position = 0x888; // CEntityOutputTemplate<float32>
            public const nint m_PositionDelta = 0x8B0; // CEntityOutputTemplate<float32>
            public const nint m_OnReachedValueZero = 0x8D8; // CEntityIOOutput
            public const nint m_OnReachedValueOne = 0x900; // CEntityIOOutput
            public const nint m_OnReachedValueCustom = 0x928; // CEntityIOOutput
            public const nint m_OnEngage = 0x950; // CEntityIOOutput
            public const nint m_OnDisengage = 0x978; // CEntityIOOutput
        }
        // Parent: None
        // Fields count: 11
        //
        // Metadata:
        // NetworkVarNames: m_messageText (char)
        // NetworkVarNames: m_FontName (char)
        // NetworkVarNames: m_bEnabled (bool)
        // NetworkVarNames: m_bFullbright (bool)
        // NetworkVarNames: m_flWorldUnitsPerPx (float)
        // NetworkVarNames: m_flFontSize (float)
        // NetworkVarNames: m_flDepthOffset (float)
        // NetworkVarNames: m_Color (Color)
        // NetworkVarNames: m_nJustifyHorizontal (PointWorldTextJustifyHorizontal_t)
        // NetworkVarNames: m_nJustifyVertical (PointWorldTextJustifyVertical_t)
        // NetworkVarNames: m_nReorientMode (PointWorldTextReorientMode_t)
        public static class CPointWorldText {
            public const nint m_messageText = 0x9F8; // char[512]
            public const nint m_FontName = 0xBF8; // char[64]
            public const nint m_bEnabled = 0xC38; // bool
            public const nint m_bFullbright = 0xC39; // bool
            public const nint m_flWorldUnitsPerPx = 0xC3C; // float32
            public const nint m_flFontSize = 0xC40; // float32
            public const nint m_flDepthOffset = 0xC44; // float32
            public const nint m_Color = 0xC48; // Color
            public const nint m_nJustifyHorizontal = 0xC4C; // PointWorldTextJustifyHorizontal_t
            public const nint m_nJustifyVertical = 0xC50; // PointWorldTextJustifyVertical_t
            public const nint m_nReorientMode = 0xC54; // PointWorldTextReorientMode_t
        }
        // Parent: CBaseEntity
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_iCurrentMaxRagdollCount (int8)
        public static class CRagdollManager {
            public const nint m_iCurrentMaxRagdollCount = 0x7A8; // int8
            public const nint m_iMaxRagdollCount = 0x7AC; // int32
            public const nint m_bSaveImportant = 0x7B0; // bool
        }
        // Parent: None
        // Fields count: 64
        //
        // Metadata:
        // NetworkVarNames: m_bIsPlayingBack (bool)
        // NetworkVarNames: m_bPaused (bool)
        // NetworkVarNames: m_bMultiplayer (bool)
        // NetworkVarNames: m_bAutogenerated (bool)
        // NetworkVarNames: m_flForceClientTime (float32)
        // NetworkVarNames: m_hActorList (CHandle<CBaseFlex>)
        // NetworkVarNames: m_nSceneStringIndex (uint16)
        public static class CSceneEntity {
            public const nint m_iszSceneFile = 0x7B0; // CUtlSymbolLarge
            public const nint m_iszResumeSceneFile = 0x7B8; // CUtlSymbolLarge
            public const nint m_iszTarget1 = 0x7C0; // CUtlSymbolLarge
            public const nint m_iszTarget2 = 0x7C8; // CUtlSymbolLarge
            public const nint m_iszTarget3 = 0x7D0; // CUtlSymbolLarge
            public const nint m_iszTarget4 = 0x7D8; // CUtlSymbolLarge
            public const nint m_iszTarget5 = 0x7E0; // CUtlSymbolLarge
            public const nint m_iszTarget6 = 0x7E8; // CUtlSymbolLarge
            public const nint m_iszTarget7 = 0x7F0; // CUtlSymbolLarge
            public const nint m_iszTarget8 = 0x7F8; // CUtlSymbolLarge
            public const nint m_hTarget1 = 0x800; // CHandle<CBaseEntity>
            public const nint m_hTarget2 = 0x804; // CHandle<CBaseEntity>
            public const nint m_hTarget3 = 0x808; // CHandle<CBaseEntity>
            public const nint m_hTarget4 = 0x80C; // CHandle<CBaseEntity>
            public const nint m_hTarget5 = 0x810; // CHandle<CBaseEntity>
            public const nint m_hTarget6 = 0x814; // CHandle<CBaseEntity>
            public const nint m_hTarget7 = 0x818; // CHandle<CBaseEntity>
            public const nint m_hTarget8 = 0x81C; // CHandle<CBaseEntity>
            public const nint m_bIsPlayingBack = 0x820; // bool
            public const nint m_bPaused = 0x821; // bool
            public const nint m_bMultiplayer = 0x822; // bool
            public const nint m_bAutogenerated = 0x823; // bool
            public const nint m_flForceClientTime = 0x824; // float32
            public const nint m_flCurrentTime = 0x828; // float32
            public const nint m_flFrameTime = 0x82C; // float32
            public const nint m_bCancelAtNextInterrupt = 0x830; // bool
            public const nint m_fPitch = 0x834; // float32
            public const nint m_bAutomated = 0x838; // bool
            public const nint m_nAutomatedAction = 0x83C; // int32
            public const nint m_flAutomationDelay = 0x840; // float32
            public const nint m_flAutomationTime = 0x844; // float32
            public const nint m_hWaitingForThisResumeScene = 0x848; // CHandle<CBaseEntity>
            public const nint m_bWaitingForResumeScene = 0x84C; // bool
            public const nint m_bPausedViaInput = 0x84D; // bool
            public const nint m_bPauseAtNextInterrupt = 0x84E; // bool
            public const nint m_bWaitingForActor = 0x84F; // bool
            public const nint m_bWaitingForInterrupt = 0x850; // bool
            public const nint m_bInterruptedActorsScenes = 0x851; // bool
            public const nint m_bBreakOnNonIdle = 0x852; // bool
            public const nint m_hActorList = 0x858; // CNetworkUtlVectorBase<CHandle<CBaseFlex>>
            public const nint m_hRemoveActorList = 0x870; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_nSceneFlushCounter = 0x8B8; // int32
            public const nint m_nSceneStringIndex = 0x8BC; // uint16
            public const nint m_OnStart = 0x8C0; // CEntityIOOutput
            public const nint m_OnCompletion = 0x8E8; // CEntityIOOutput
            public const nint m_OnCanceled = 0x910; // CEntityIOOutput
            public const nint m_OnPaused = 0x938; // CEntityIOOutput
            public const nint m_OnResumed = 0x960; // CEntityIOOutput
            public const nint m_OnTrigger = 0x988; // CEntityIOOutput[16]
            public const nint m_hInterruptScene = 0xC98; // CHandle<CSceneEntity>
            public const nint m_nInterruptCount = 0xC9C; // int32
            public const nint m_bSceneMissing = 0xCA0; // bool
            public const nint m_bInterrupted = 0xCA1; // bool
            public const nint m_bCompletedEarly = 0xCA2; // bool
            public const nint m_bInterruptSceneFinished = 0xCA3; // bool
            public const nint m_bRestoring = 0xCA4; // bool
            public const nint m_hNotifySceneCompletion = 0xCA8; // CUtlVector<CHandle<CSceneEntity>>
            public const nint m_hListManagers = 0xCC0; // CUtlVector<CHandle<CSceneListManager>>
            public const nint m_iszSoundName = 0xCD8; // CUtlSymbolLarge
            public const nint m_iszSequenceName = 0xCE0; // CUtlSymbolLarge
            public const nint m_hActor = 0xCE8; // CHandle<CBaseFlex>
            public const nint m_hActivator = 0xCEC; // CHandle<CBaseEntity>
            public const nint m_BusyActor = 0xCF0; // int32
            public const nint m_iPlayerDeathBehavior = 0xCF4; // SceneOnPlayerDeath_t
        }
        // Parent: CBaseModelEntity
        // Fields count: 14
        //
        // Metadata:
        // MNetworkIncludeByName
        // NetworkVarNames: m_vDirection (Vector)
        // NetworkVarNames: m_clrOverlay (Color)
        // NetworkVarNames: m_iszEffectName (string_t)
        // NetworkVarNames: m_iszSSEffectName (string_t)
        // NetworkVarNames: m_bOn (bool)
        // NetworkVarNames: m_bmaxColor (bool)
        // NetworkVarNames: m_flSize (float32)
        // NetworkVarNames: m_flRotation (float32)
        // NetworkVarNames: m_flHazeScale (float32)
        // NetworkVarNames: m_flAlphaHaze (float32)
        // NetworkVarNames: m_flAlphaHdr (float32)
        // NetworkVarNames: m_flAlphaScale (float32)
        // NetworkVarNames: m_flHDRColorScale (float32)
        // NetworkVarNames: m_flFarZScale (float32)
        public static class CSun {
            public const nint m_vDirection = 0x9F8; // Vector
            public const nint m_clrOverlay = 0xA04; // Color
            public const nint m_iszEffectName = 0xA08; // CUtlSymbolLarge
            public const nint m_iszSSEffectName = 0xA10; // CUtlSymbolLarge
            public const nint m_bOn = 0xA18; // bool
            public const nint m_bmaxColor = 0xA19; // bool
            public const nint m_flSize = 0xA1C; // float32
            public const nint m_flRotation = 0xA20; // float32
            public const nint m_flHazeScale = 0xA24; // float32
            public const nint m_flAlphaHaze = 0xA28; // float32
            public const nint m_flAlphaHdr = 0xA2C; // float32
            public const nint m_flAlphaScale = 0xA30; // float32
            public const nint m_flHDRColorScale = 0xA34; // float32
            public const nint m_flFarZScale = 0xA38; // float32
        }
        // Parent: CBaseEntity
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_Handle (CHandle<CBaseEntity>)
        // NetworkVarNames: m_bSendHandle (bool)
        public static class CHandleTest {
            public const nint m_Handle = 0x7A8; // CHandle<CBaseEntity>
            public const nint m_bSendHandle = 0x7AC; // bool
        }
        // Parent: None
        // Fields count: 24
        //
        // Metadata:
        // NetworkVarNames: m_glowEntity (CHandle<CBaseModelEntity>)
        // NetworkVarNames: m_usable (bool)
        // NetworkVarNames: m_szDisplayText (string_t)
        public static class CBaseButton {
            public const nint m_angMoveEntitySpace = 0xA78; // QAngle
            public const nint m_fStayPushed = 0xA84; // bool
            public const nint m_fRotating = 0xA85; // bool
            public const nint m_ls = 0xA88; // locksound_t
            public const nint m_sUseSound = 0xAA8; // CUtlSymbolLarge
            public const nint m_sLockedSound = 0xAB0; // CUtlSymbolLarge
            public const nint m_sUnlockedSound = 0xAB8; // CUtlSymbolLarge
            public const nint m_bLocked = 0xAC0; // bool
            public const nint m_bDisabled = 0xAC1; // bool
            public const nint m_flUseLockedTime = 0xAC4; // GameTime_t
            public const nint m_bSolidBsp = 0xAC8; // bool
            public const nint m_OnDamaged = 0xAD0; // CEntityIOOutput
            public const nint m_OnPressed = 0xAF8; // CEntityIOOutput
            public const nint m_OnUseLocked = 0xB20; // CEntityIOOutput
            public const nint m_OnIn = 0xB48; // CEntityIOOutput
            public const nint m_OnOut = 0xB70; // CEntityIOOutput
            public const nint m_nState = 0xB98; // int32
            public const nint m_hConstraint = 0xB9C; // CEntityHandle
            public const nint m_hConstraintParent = 0xBA0; // CEntityHandle
            public const nint m_bForceNpcExclude = 0xBA4; // bool
            public const nint m_sGlowEntity = 0xBA8; // CUtlSymbolLarge
            public const nint m_glowEntity = 0xBB0; // CHandle<CBaseModelEntity>
            public const nint m_usable = 0xBB4; // bool
            public const nint m_szDisplayText = 0xBB8; // CUtlSymbolLarge
        }
        // Parent: None
        // Fields count: 27
        //
        // Metadata:
        // NetworkVarNames: m_bIsUsable (bool)
        public static class CBaseDoor {
            public const nint m_angMoveEntitySpace = 0xA84; // QAngle
            public const nint m_vecMoveDirParentSpace = 0xA90; // Vector
            public const nint m_ls = 0xAA0; // locksound_t
            public const nint m_bForceClosed = 0xAC0; // bool
            public const nint m_bDoorGroup = 0xAC1; // bool
            public const nint m_bLocked = 0xAC2; // bool
            public const nint m_bIgnoreDebris = 0xAC3; // bool
            public const nint m_eSpawnPosition = 0xAC4; // FuncDoorSpawnPos_t
            public const nint m_flBlockDamage = 0xAC8; // float32
            public const nint m_NoiseMoving = 0xAD0; // CUtlSymbolLarge
            public const nint m_NoiseArrived = 0xAD8; // CUtlSymbolLarge
            public const nint m_NoiseMovingClosed = 0xAE0; // CUtlSymbolLarge
            public const nint m_NoiseArrivedClosed = 0xAE8; // CUtlSymbolLarge
            public const nint m_ChainTarget = 0xAF0; // CUtlSymbolLarge
            public const nint m_OnBlockedClosing = 0xAF8; // CEntityIOOutput
            public const nint m_OnBlockedOpening = 0xB20; // CEntityIOOutput
            public const nint m_OnUnblockedClosing = 0xB48; // CEntityIOOutput
            public const nint m_OnUnblockedOpening = 0xB70; // CEntityIOOutput
            public const nint m_OnFullyClosed = 0xB98; // CEntityIOOutput
            public const nint m_OnFullyOpen = 0xBC0; // CEntityIOOutput
            public const nint m_OnClose = 0xBE8; // CEntityIOOutput
            public const nint m_OnOpen = 0xC10; // CEntityIOOutput
            public const nint m_OnLockedUse = 0xC38; // CEntityIOOutput
            public const nint m_bLoopMoveSound = 0xC60; // bool
            public const nint m_bCreateNavObstacle = 0xC78; // bool
            public const nint m_isChaining = 0xC79; // bool
            public const nint m_bIsUsable = 0xC7A; // bool
        }
        // Parent: CBaseModelEntity
        // Fields count: 10
        //
        // Metadata:
        // NetworkVarNames: m_flFadeInStart (float32)
        // NetworkVarNames: m_flFadeInLength (float32)
        // NetworkVarNames: m_flFadeOutModelStart (float32)
        // NetworkVarNames: m_flFadeOutModelLength (float32)
        // NetworkVarNames: m_flFadeOutStart (float32)
        // NetworkVarNames: m_flFadeOutLength (float32)
        // NetworkVarNames: m_flStartTime (GameTime_t)
        // NetworkVarNames: m_nDissolveType (EntityDisolveType_t)
        // NetworkVarNames: m_vDissolverOrigin (Vector)
        // NetworkVarNames: m_nMagnitude (uint32)
        public static class CEntityDissolve {
            public const nint m_flFadeInStart = 0x9F8; // float32
            public const nint m_flFadeInLength = 0x9FC; // float32
            public const nint m_flFadeOutModelStart = 0xA00; // float32
            public const nint m_flFadeOutModelLength = 0xA04; // float32
            public const nint m_flFadeOutStart = 0xA08; // float32
            public const nint m_flFadeOutLength = 0xA0C; // float32
            public const nint m_flStartTime = 0xA10; // GameTime_t
            public const nint m_nDissolveType = 0xA14; // EntityDisolveType_t
            public const nint m_vDissolverOrigin = 0xA18; // Vector
            public const nint m_nMagnitude = 0xA24; // uint32
        }
        // Parent: None
        // Fields count: 30
        //
        // Metadata:
        // NetworkVarNames: m_hTargetEntity (CHandle<CBaseEntity>)
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
        // NetworkVarNames: m_flNoiseStrength (float32)
        // NetworkVarNames: m_flFlashlightTime (float32)
        // NetworkVarNames: m_nNumPlanes (uint32)
        // NetworkVarNames: m_flPlaneOffset (float32)
        // NetworkVarNames: m_flVolumetricIntensity (float32)
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
        public static class CEnvProjectedTexture {
            public const nint m_hTargetEntity = 0x9F8; // CHandle<CBaseEntity>
            public const nint m_bState = 0x9FC; // bool
            public const nint m_bAlwaysUpdate = 0x9FD; // bool
            public const nint m_flLightFOV = 0xA00; // float32
            public const nint m_bEnableShadows = 0xA04; // bool
            public const nint m_bSimpleProjection = 0xA05; // bool
            public const nint m_bLightOnlyTarget = 0xA06; // bool
            public const nint m_bLightWorld = 0xA07; // bool
            public const nint m_bCameraSpace = 0xA08; // bool
            public const nint m_flBrightnessScale = 0xA0C; // float32
            public const nint m_LightColor = 0xA10; // Color
            public const nint m_flIntensity = 0xA14; // float32
            public const nint m_flLinearAttenuation = 0xA18; // float32
            public const nint m_flQuadraticAttenuation = 0xA1C; // float32
            public const nint m_bVolumetric = 0xA20; // bool
            public const nint m_flNoiseStrength = 0xA24; // float32
            public const nint m_flFlashlightTime = 0xA28; // float32
            public const nint m_nNumPlanes = 0xA2C; // uint32
            public const nint m_flPlaneOffset = 0xA30; // float32
            public const nint m_flVolumetricIntensity = 0xA34; // float32
            public const nint m_flColorTransitionTime = 0xA38; // float32
            public const nint m_flAmbient = 0xA3C; // float32
            public const nint m_SpotlightTextureName = 0xA40; // char[512]
            public const nint m_nSpotlightTextureFrame = 0xC40; // int32
            public const nint m_nShadowQuality = 0xC44; // uint32
            public const nint m_flNearZ = 0xC48; // float32
            public const nint m_flFarZ = 0xC4C; // float32
            public const nint m_flProjectionSize = 0xC50; // float32
            public const nint m_flRotation = 0xC54; // float32
            public const nint m_bFlipHorizontal = 0xC58; // bool
        }
        // Parent: CBaseModelEntity
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
        public static class CEnvDecal {
            public const nint m_hDecalMaterial = 0x9F8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_flWidth = 0xA00; // float32
            public const nint m_flHeight = 0xA04; // float32
            public const nint m_flDepth = 0xA08; // float32
            public const nint m_nRenderOrder = 0xA0C; // uint32
            public const nint m_bProjectOnWorld = 0xA10; // bool
            public const nint m_bProjectOnCharacters = 0xA11; // bool
            public const nint m_bProjectOnWater = 0xA12; // bool
            public const nint m_flDepthSortBias = 0xA14; // float32
        }
        // Parent: None
        // Fields count: 13
        //
        // Metadata:
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkOverride
        public static class CFuncMoveLinear {
            public const nint m_authoredPosition = 0xA78; // MoveLinearAuthoredPos_t
            public const nint m_angMoveEntitySpace = 0xA7C; // QAngle
            public const nint m_vecMoveDirParentSpace = 0xA88; // Vector
            public const nint m_soundStart = 0xA98; // CUtlSymbolLarge
            public const nint m_soundStop = 0xAA0; // CUtlSymbolLarge
            public const nint m_currentSound = 0xAA8; // CUtlSymbolLarge
            public const nint m_flBlockDamage = 0xAB0; // float32
            public const nint m_flStartPosition = 0xAB4; // float32
            public const nint m_flMoveDistance = 0xAB8; // float32
            public const nint m_OnFullyOpen = 0xAC8; // CEntityIOOutput
            public const nint m_OnFullyClosed = 0xAF0; // CEntityIOOutput
            public const nint m_bCreateMovableNavMesh = 0xB18; // bool
            public const nint m_bCreateNavObstacle = 0xB19; // bool
        }
        // Parent: CBaseModelEntity
        // Fields count: 19
        //
        // Metadata:
        // MNetworkOverride
        // MNetworkOverride
        public static class CFuncRotating {
            public const nint m_OnStopped = 0x9F8; // CEntityIOOutput
            public const nint m_OnStarted = 0xA20; // CEntityIOOutput
            public const nint m_OnReachedStart = 0xA48; // CEntityIOOutput
            public const nint m_localRotationVector = 0xA70; // RotationVector
            public const nint m_flFanFriction = 0xA7C; // float32
            public const nint m_flAttenuation = 0xA80; // float32
            public const nint m_flVolume = 0xA84; // float32
            public const nint m_flTargetSpeed = 0xA88; // float32
            public const nint m_flMaxSpeed = 0xA8C; // float32
            public const nint m_flBlockDamage = 0xA90; // float32
            public const nint m_flTimeScale = 0xA94; // float32
            public const nint m_NoiseRunning = 0xA98; // CUtlSymbolLarge
            public const nint m_bReversed = 0xAA0; // bool
            public const nint m_bAccelDecel = 0xAA1; // bool
            public const nint m_prevLocalAngles = 0xAAC; // QAngle
            public const nint m_angStart = 0xAB8; // QAngle
            public const nint m_bStopAtStartPos = 0xAC4; // bool
            public const nint m_vecClientOrigin = 0xAC8; // Vector
            public const nint m_vecClientAngles = 0xAD4; // QAngle
        }
        // Parent: CBaseModelEntity
        // Fields count: 21
        //
        // Metadata:
        // MNetworkIncludeByUserGroup
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // NetworkVarNames: m_RopeFlags (uint16)
        // NetworkVarNames: m_Slack (int16)
        // NetworkVarNames: m_Width (float32)
        // NetworkVarNames: m_TextureScale (float32)
        // NetworkVarNames: m_nSegments (uint8)
        // NetworkVarNames: m_bConstrainBetweenEndpoints (bool)
        // NetworkVarNames: m_iRopeMaterialModelIndex (HMaterialStrong)
        // NetworkVarNames: m_Subdiv (uint8)
        // NetworkVarNames: m_nChangeCount (uint8)
        // NetworkVarNames: m_RopeLength (int16)
        // NetworkVarNames: m_fLockedPoints (uint8)
        // NetworkVarNames: m_flScrollSpeed (float32)
        // NetworkVarNames: m_hStartPoint (CHandle<CBaseEntity>)
        // NetworkVarNames: m_hEndPoint (CHandle<CBaseEntity>)
        // NetworkVarNames: m_iStartAttachment (AttachmentHandle_t)
        // NetworkVarNames: m_iEndAttachment (AttachmentHandle_t)
        public static class CRopeKeyframe {
            public const nint m_RopeFlags = 0xA00; // uint16
            public const nint m_iNextLinkName = 0xA08; // CUtlSymbolLarge
            public const nint m_Slack = 0xA10; // int16
            public const nint m_Width = 0xA14; // float32
            public const nint m_TextureScale = 0xA18; // float32
            public const nint m_nSegments = 0xA1C; // uint8
            public const nint m_bConstrainBetweenEndpoints = 0xA1D; // bool
            public const nint m_strRopeMaterialModel = 0xA20; // CUtlSymbolLarge
            public const nint m_iRopeMaterialModelIndex = 0xA28; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_Subdiv = 0xA30; // uint8
            public const nint m_nChangeCount = 0xA31; // uint8
            public const nint m_RopeLength = 0xA32; // int16
            public const nint m_fLockedPoints = 0xA34; // uint8
            public const nint m_bCreatedFromMapFile = 0xA35; // bool
            public const nint m_flScrollSpeed = 0xA38; // float32
            public const nint m_bStartPointValid = 0xA3C; // bool
            public const nint m_bEndPointValid = 0xA3D; // bool
            public const nint m_hStartPoint = 0xA40; // CHandle<CBaseEntity>
            public const nint m_hEndPoint = 0xA44; // CHandle<CBaseEntity>
            public const nint m_iStartAttachment = 0xA48; // AttachmentHandle_t
            public const nint m_iEndAttachment = 0xA49; // AttachmentHandle_t
        }
        // Parent: CBaseModelEntity
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_flLightScale (float32)
        // NetworkVarNames: m_Radius (float32)
        public static class CSpotlightEnd {
            public const nint m_flLightScale = 0x9F8; // float32
            public const nint m_Radius = 0x9FC; // float32
            public const nint m_vSpotlightDir = 0xA00; // Vector
            public const nint m_vSpotlightOrg = 0xA0C; // Vector
        }
        // Parent: None
        // Fields count: 11
        //
        // Metadata:
        // MNetworkIncludeByName
        // NetworkVarNames: m_bDisabled (bool)
        // NetworkVarNames: m_bClientSidePredicted (bool)
        public static class CBaseTrigger {
            public const nint m_bDisabled = 0xA78; // bool
            public const nint m_iFilterName = 0xA80; // CUtlSymbolLarge
            public const nint m_hFilter = 0xA88; // CHandle<CBaseFilter>
            public const nint m_OnStartTouch = 0xA90; // CEntityIOOutput
            public const nint m_OnStartTouchAll = 0xAB8; // CEntityIOOutput
            public const nint m_OnEndTouch = 0xAE0; // CEntityIOOutput
            public const nint m_OnEndTouchAll = 0xB08; // CEntityIOOutput
            public const nint m_OnTouching = 0xB30; // CEntityIOOutput
            public const nint m_OnNotTouching = 0xB58; // CEntityIOOutput
            public const nint m_hTouchingEntities = 0xB80; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_bClientSidePredicted = 0xB98; // bool
        }
        // Parent: CBaseModelEntity
        // Fields count: 24
        //
        // Metadata:
        // MNetworkIncludeByUserGroup
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkOverride
        // NetworkVarNames: m_flFrameRate (float32)
        // NetworkVarNames: m_flHDRColorScale (float32)
        // NetworkVarNames: m_nNumBeamEnts (uint8)
        // NetworkVarNames: m_hBaseMaterial (HMaterialStrong)
        // NetworkVarNames: m_nHaloIndex (HMaterialStrong)
        // NetworkVarNames: m_nBeamType (BeamType_t)
        // NetworkVarNames: m_nBeamFlags (uint32)
        // NetworkVarNames: m_hAttachEntity (CHandle<CBaseEntity>)
        // NetworkVarNames: m_nAttachIndex (AttachmentHandle_t)
        // NetworkVarNames: m_fWidth (float32)
        // NetworkVarNames: m_fEndWidth (float32)
        // NetworkVarNames: m_fFadeLength (float32)
        // NetworkVarNames: m_fHaloScale (float32)
        // NetworkVarNames: m_fAmplitude (float32)
        // NetworkVarNames: m_fStartFrame (float32)
        // NetworkVarNames: m_fSpeed (float32)
        // NetworkVarNames: m_flFrame (float32)
        // NetworkVarNames: m_nClipStyle (BeamClipStyle_t)
        // NetworkVarNames: m_bTurnedOff (bool)
        // NetworkVarNames: m_vecEndPos (Vector)
        public static class CBeam {
            public const nint m_flFrameRate = 0x9F8; // float32
            public const nint m_flHDRColorScale = 0x9FC; // float32
            public const nint m_flFireTime = 0xA00; // GameTime_t
            public const nint m_flDamage = 0xA04; // float32
            public const nint m_nNumBeamEnts = 0xA08; // uint8
            public const nint m_hBaseMaterial = 0xA10; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_nHaloIndex = 0xA18; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_nBeamType = 0xA20; // BeamType_t
            public const nint m_nBeamFlags = 0xA24; // uint32
            public const nint m_hAttachEntity = 0xA28; // CHandle<CBaseEntity>[10]
            public const nint m_nAttachIndex = 0xA50; // AttachmentHandle_t[10]
            public const nint m_fWidth = 0xA5C; // float32
            public const nint m_fEndWidth = 0xA60; // float32
            public const nint m_fFadeLength = 0xA64; // float32
            public const nint m_fHaloScale = 0xA68; // float32
            public const nint m_fAmplitude = 0xA6C; // float32
            public const nint m_fStartFrame = 0xA70; // float32
            public const nint m_fSpeed = 0xA74; // float32
            public const nint m_flFrame = 0xA78; // float32
            public const nint m_nClipStyle = 0xA7C; // BeamClipStyle_t
            public const nint m_bTurnedOff = 0xA80; // bool
            public const nint m_vecEndPos = 0xA84; // Vector
            public const nint m_hEndEntity = 0xA90; // CHandle<CBaseEntity>
            public const nint m_nDissolveType = 0xA94; // int32
        }
        // Parent: CBaseModelEntity
        // Fields count: 12
        //
        // Metadata:
        // NetworkVarNames: m_vecLadderDir (Vector)
        // NetworkVarNames: m_vecPlayerMountPositionTop (Vector)
        // NetworkVarNames: m_vecPlayerMountPositionBottom (Vector)
        // NetworkVarNames: m_flAutoRideSpeed (float)
        // NetworkVarNames: m_bFakeLadder (bool)
        public static class CFuncLadder {
            public const nint m_vecLadderDir = 0x9F8; // Vector
            public const nint m_Dismounts = 0xA08; // CUtlVector<CHandle<CInfoLadderDismount>>
            public const nint m_vecLocalTop = 0xA20; // Vector
            public const nint m_vecPlayerMountPositionTop = 0xA2C; // Vector
            public const nint m_vecPlayerMountPositionBottom = 0xA38; // Vector
            public const nint m_flAutoRideSpeed = 0xA44; // float32
            public const nint m_bDisabled = 0xA48; // bool
            public const nint m_bFakeLadder = 0xA49; // bool
            public const nint m_bHasSlack = 0xA4A; // bool
            public const nint m_surfacePropName = 0xA50; // CUtlSymbolLarge
            public const nint m_OnPlayerGotOnLadder = 0xA58; // CEntityIOOutput
            public const nint m_OnPlayerGotOffLadder = 0xA80; // CEntityIOOutput
        }
        // Parent: None
        // Fields count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPrecipitationVData {
            public const nint m_szParticlePrecipitationEffect = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            public const nint m_flInnerDistance = 0x108; // float32
            public const nint m_nAttachType = 0x10C; // ParticleAttachment_t
            public const nint m_bBatchSameVolumeType = 0x110; // bool
            public const nint m_nRTEnvCP = 0x114; // int32
            public const nint m_nRTEnvCPComponent = 0x118; // int32
            public const nint m_szModifier = 0x120; // CUtlString
        }
        // Parent: CBaseModelEntity
        // Fields count: 23
        //
        // Metadata:
        // NetworkVarNames: m_hSpriteMaterial (HMaterialStrong)
        // NetworkVarNames: m_hAttachedToEntity (CHandle<CBaseEntity>)
        // NetworkVarNames: m_nAttachment (AttachmentHandle_t)
        // NetworkVarNames: m_flSpriteFramerate (float32)
        // NetworkVarNames: m_flFrame (float32)
        // NetworkVarNames: m_nBrightness (uint32)
        // NetworkVarNames: m_flBrightnessDuration (float32)
        // NetworkVarNames: m_flSpriteScale (float32)
        // NetworkVarNames: m_flScaleDuration (float32)
        // NetworkVarNames: m_bWorldSpaceScale (bool)
        // NetworkVarNames: m_flGlowProxySize (float32)
        // NetworkVarNames: m_flHDRColorScale (float32)
        public static class CSprite {
            public const nint m_hSpriteMaterial = 0x9F8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_hAttachedToEntity = 0xA00; // CHandle<CBaseEntity>
            public const nint m_nAttachment = 0xA04; // AttachmentHandle_t
            public const nint m_flSpriteFramerate = 0xA08; // float32
            public const nint m_flFrame = 0xA0C; // float32
            public const nint m_flDieTime = 0xA10; // GameTime_t
            public const nint m_nBrightness = 0xA20; // uint32
            public const nint m_flBrightnessDuration = 0xA24; // float32
            public const nint m_flSpriteScale = 0xA28; // float32
            public const nint m_flScaleDuration = 0xA2C; // float32
            public const nint m_bWorldSpaceScale = 0xA30; // bool
            public const nint m_flGlowProxySize = 0xA34; // float32
            public const nint m_flHDRColorScale = 0xA38; // float32
            public const nint m_flLastTime = 0xA3C; // GameTime_t
            public const nint m_flMaxFrame = 0xA40; // float32
            public const nint m_flStartScale = 0xA44; // float32
            public const nint m_flDestScale = 0xA48; // float32
            public const nint m_flScaleTimeStart = 0xA4C; // GameTime_t
            public const nint m_nStartBrightness = 0xA50; // int32
            public const nint m_nDestBrightness = 0xA54; // int32
            public const nint m_flBrightnessTimeStart = 0xA58; // GameTime_t
            public const nint m_nSpriteWidth = 0xA5C; // int32
            public const nint m_nSpriteHeight = 0xA60; // int32
        }
        // Parent: CBaseModelEntity
        // Fields count: 14
        //
        // Metadata:
        // NetworkVarNames: m_bEnabled (bool)
        // NetworkVarNames: m_DialogXMLName (string_t)
        // NetworkVarNames: m_PanelClassName (string_t)
        // NetworkVarNames: m_PanelID (string_t)
        public static class CBaseClientUIEntity {
            public const nint m_bEnabled = 0x9F8; // bool
            public const nint m_DialogXMLName = 0xA00; // CUtlSymbolLarge
            public const nint m_PanelClassName = 0xA08; // CUtlSymbolLarge
            public const nint m_PanelID = 0xA10; // CUtlSymbolLarge
            public const nint m_CustomOutput0 = 0xA18; // CEntityIOOutput
            public const nint m_CustomOutput1 = 0xA40; // CEntityIOOutput
            public const nint m_CustomOutput2 = 0xA68; // CEntityIOOutput
            public const nint m_CustomOutput3 = 0xA90; // CEntityIOOutput
            public const nint m_CustomOutput4 = 0xAB8; // CEntityIOOutput
            public const nint m_CustomOutput5 = 0xAE0; // CEntityIOOutput
            public const nint m_CustomOutput6 = 0xB08; // CEntityIOOutput
            public const nint m_CustomOutput7 = 0xB30; // CEntityIOOutput
            public const nint m_CustomOutput8 = 0xB58; // CEntityIOOutput
            public const nint m_CustomOutput9 = 0xB80; // CEntityIOOutput
        }
        // Parent: CBaseClientUIEntity
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_hActivator (EHANDLE)
        public static class CPointClientUIDialog {
            public const nint m_hActivator = 0xBA8; // CHandle<CBaseEntity>
            public const nint m_bStartEnabled = 0xBAC; // bool
        }
        // Parent: CBaseClientUIEntity
        // Fields count: 23
        //
        // Metadata:
        // NetworkVarNames: m_bIgnoreInput (bool)
        // NetworkVarNames: m_bLit (bool)
        // NetworkVarNames: m_bFollowPlayerAcrossTeleport (bool)
        // NetworkVarNames: m_flWidth (float)
        // NetworkVarNames: m_flHeight (float)
        // NetworkVarNames: m_flDPI (float)
        // NetworkVarNames: m_flInteractDistance (float)
        // NetworkVarNames: m_flDepthOffset (float)
        // NetworkVarNames: m_unOwnerContext (uint32)
        // NetworkVarNames: m_unHorizontalAlign (uint32)
        // NetworkVarNames: m_unVerticalAlign (uint32)
        // NetworkVarNames: m_unOrientation (uint32)
        // NetworkVarNames: m_bAllowInteractionFromAllSceneWorlds (bool)
        // NetworkVarNames: m_vecCSSClasses (string_t)
        // NetworkVarNames: m_bOpaque (bool)
        // NetworkVarNames: m_bNoDepth (bool)
        // NetworkVarNames: m_bRenderBackface (bool)
        // NetworkVarNames: m_bUseOffScreenIndicator (bool)
        // NetworkVarNames: m_bExcludeFromSaveGames (bool)
        // NetworkVarNames: m_bGrabbable (bool)
        // NetworkVarNames: m_bOnlyRenderToTexture (bool)
        // NetworkVarNames: m_bDisableMipGen (bool)
        // NetworkVarNames: m_nExplicitImageLayout (int32)
        public static class CPointClientUIWorldPanel {
            public const nint m_bIgnoreInput = 0xBA8; // bool
            public const nint m_bLit = 0xBA9; // bool
            public const nint m_bFollowPlayerAcrossTeleport = 0xBAA; // bool
            public const nint m_flWidth = 0xBAC; // float32
            public const nint m_flHeight = 0xBB0; // float32
            public const nint m_flDPI = 0xBB4; // float32
            public const nint m_flInteractDistance = 0xBB8; // float32
            public const nint m_flDepthOffset = 0xBBC; // float32
            public const nint m_unOwnerContext = 0xBC0; // uint32
            public const nint m_unHorizontalAlign = 0xBC4; // uint32
            public const nint m_unVerticalAlign = 0xBC8; // uint32
            public const nint m_unOrientation = 0xBCC; // uint32
            public const nint m_bAllowInteractionFromAllSceneWorlds = 0xBD0; // bool
            public const nint m_vecCSSClasses = 0xBD8; // CNetworkUtlVectorBase<CUtlSymbolLarge>
            public const nint m_bOpaque = 0xBF0; // bool
            public const nint m_bNoDepth = 0xBF1; // bool
            public const nint m_bRenderBackface = 0xBF2; // bool
            public const nint m_bUseOffScreenIndicator = 0xBF3; // bool
            public const nint m_bExcludeFromSaveGames = 0xBF4; // bool
            public const nint m_bGrabbable = 0xBF5; // bool
            public const nint m_bOnlyRenderToTexture = 0xBF6; // bool
            public const nint m_bDisableMipGen = 0xBF7; // bool
            public const nint m_nExplicitImageLayout = 0xBF8; // int32
        }
        // Parent: CPointClientUIWorldPanel
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_messageText (char)
        public static class CPointClientUIWorldTextPanel {
            public const nint m_messageText = 0xBFC; // char[512]
        }
        // Parent: None
        // Fields count: 10
        //
        // Metadata:
        // NetworkVarNames: m_bDisabled (bool)
        // NetworkVarNames: m_nResolutionX (int)
        // NetworkVarNames: m_nResolutionY (int)
        // NetworkVarNames: m_szLayoutFileName (string_t)
        // NetworkVarNames: m_RenderAttrName (string_t)
        // NetworkVarNames: m_TargetEntities (CHandle<CBaseModelEntity>)
        // NetworkVarNames: m_nTargetChangeCount (int)
        // NetworkVarNames: m_vecCSSClasses (string_t)
        public static class CInfoOffscreenPanoramaTexture {
            public const nint m_bDisabled = 0x7A8; // bool
            public const nint m_nResolutionX = 0x7AC; // int32
            public const nint m_nResolutionY = 0x7B0; // int32
            public const nint m_szLayoutFileName = 0x7B8; // CUtlSymbolLarge
            public const nint m_RenderAttrName = 0x7C0; // CUtlSymbolLarge
            public const nint m_TargetEntities = 0x7C8; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
            public const nint m_nTargetChangeCount = 0x7E0; // int32
            public const nint m_vecCSSClasses = 0x7E8; // CNetworkUtlVectorBase<CUtlSymbolLarge>
            public const nint m_szTargetsName = 0x800; // CUtlSymbolLarge
            public const nint m_AdditionalTargetEntities = 0x808; // CUtlVector<CHandle<CBaseModelEntity>>
        }
        // Parent: None
        // Fields count: 13
        //
        // Metadata:
        // NetworkVarNames: m_iItemDefinitionIndex (item_definition_index_t)
        // NetworkVarNames: m_iEntityQuality (int)
        // NetworkVarNames: m_iEntityLevel (uint32)
        // NetworkVarNames: m_iItemIDHigh (uint32)
        // NetworkVarNames: m_iItemIDLow (uint32)
        // NetworkVarNames: m_iAccountID (uint32)
        // NetworkVarNames: m_iInventoryPosition (uint32)
        // NetworkVarNames: m_bInitialized (bool)
        // NetworkVarNames: m_AttributeList (CAttributeList)
        // NetworkVarNames: m_NetworkedDynamicAttributes (CAttributeList)
        // NetworkVarNames: m_szCustomName (char)
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
        // Parent: CBaseTrigger
        // Fields count: 9
        //
        // Metadata:
        // NetworkVarNames: m_bBombPlantedHere (bool)
        public static class CBombTarget {
            public const nint m_OnBombExplode = 0xBA0; // CEntityIOOutput
            public const nint m_OnBombPlanted = 0xBC8; // CEntityIOOutput
            public const nint m_OnBombDefused = 0xBF0; // CEntityIOOutput
            public const nint m_bIsBombSiteB = 0xC18; // bool
            public const nint m_bIsHeistBombTarget = 0xC19; // bool
            public const nint m_bBombPlantedHere = 0xC1A; // bool
            public const nint m_szMountTarget = 0xC20; // CUtlSymbolLarge
            public const nint m_hInstructorHint = 0xC28; // CHandle<CBaseEntity>
            public const nint m_nBombSiteDesignation = 0xC2C; // int32
        }
        // Parent: CBaseTrigger
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_flFluidDensity (float)
        public static class CTriggerBuoyancy {
            public const nint m_BuoyancyHelper = 0xBA0; // CBuoyancyHelper
            public const nint m_flFluidDensity = 0xBC0; // float32
        }
        // Parent: CBasePlayerController
        // Fields count: 86
        //
        // Metadata:
        // MNetworkUserGroupProxy
        // MNetworkUserGroupProxy
        // MNetworkUserGroupProxy
        // NetworkVarNames: m_pInGameMoneyServices (CCSPlayerController_InGameMoneyServices*)
        // NetworkVarNames: m_pInventoryServices (CCSPlayerController_InventoryServices*)
        // NetworkVarNames: m_pActionTrackingServices (CCSPlayerController_ActionTrackingServices*)
        // NetworkVarNames: m_pDamageServices (CCSPlayerController_DamageServices*)
        // NetworkVarNames: m_iPing (uint32)
        // NetworkVarNames: m_bHasCommunicationAbuseMute (bool)
        // NetworkVarNames: m_szCrosshairCodes (string_t)
        // NetworkVarNames: m_iPendingTeamNum (uint8)
        // NetworkVarNames: m_flForceTeamTime (GameTime_t)
        // NetworkVarNames: m_iCompTeammateColor (int)
        // NetworkVarNames: m_bEverPlayedOnTeam (bool)
        // NetworkVarNames: m_szClan (string_t)
        // NetworkVarNames: m_iCoachingTeam (int)
        // NetworkVarNames: m_nPlayerDominated (uint64)
        // NetworkVarNames: m_nPlayerDominatingMe (uint64)
        // NetworkVarNames: m_iCompetitiveRanking (int)
        // NetworkVarNames: m_iCompetitiveWins (int)
        // NetworkVarNames: m_iCompetitiveRankType (int8)
        // NetworkVarNames: m_iCompetitiveRankingPredicted_Win (int)
        // NetworkVarNames: m_iCompetitiveRankingPredicted_Loss (int)
        // NetworkVarNames: m_iCompetitiveRankingPredicted_Tie (int)
        // NetworkVarNames: m_nEndMatchNextMapVote (int)
        // NetworkVarNames: m_unActiveQuestId (uint16)
        // NetworkVarNames: m_nQuestProgressReason (QuestProgress::Reason)
        // NetworkVarNames: m_unPlayerTvControlFlags (uint32)
        // NetworkVarNames: m_nDisconnectionTick (int)
        // NetworkVarNames: m_bControllingBot (bool)
        // NetworkVarNames: m_bHasControlledBotThisRound (bool)
        // NetworkVarNames: m_bCanControlObservedBot (bool)
        // NetworkVarNames: m_hPlayerPawn (CHandle<CCSPlayerPawn>)
        // NetworkVarNames: m_hObserverPawn (CHandle<CCSObserverPawn>)
        // NetworkVarNames: m_bPawnIsAlive (bool)
        // NetworkVarNames: m_iPawnHealth (uint32)
        // NetworkVarNames: m_iPawnArmor (int)
        // NetworkVarNames: m_bPawnHasDefuser (bool)
        // NetworkVarNames: m_bPawnHasHelmet (bool)
        // NetworkVarNames: m_nPawnCharacterDefIndex (item_definition_index_t)
        // NetworkVarNames: m_iPawnLifetimeStart (int)
        // NetworkVarNames: m_iPawnLifetimeEnd (int)
        // NetworkVarNames: m_iPawnBotDifficulty (int)
        // NetworkVarNames: m_hOriginalControllerOfCurrentPawn (CHandle<CCSPlayerController>)
        // NetworkVarNames: m_iScore (int32)
        // NetworkVarNames: m_vecKills (EKillTypes_t)
        // NetworkVarNames: m_bMvpNoMusic (bool)
        // NetworkVarNames: m_eMvpReason (int)
        // NetworkVarNames: m_iMusicKitID (int)
        // NetworkVarNames: m_iMusicKitMVPs (int)
        // NetworkVarNames: m_iMVPs (int)
        public static class CCSPlayerController {
            public const nint m_pInGameMoneyServices = 0x9A8; // CCSPlayerController_InGameMoneyServices*
            public const nint m_pInventoryServices = 0x9B0; // CCSPlayerController_InventoryServices*
            public const nint m_pActionTrackingServices = 0x9B8; // CCSPlayerController_ActionTrackingServices*
            public const nint m_pDamageServices = 0x9C0; // CCSPlayerController_DamageServices*
            public const nint m_iPing = 0x9C8; // uint32
            public const nint m_bHasCommunicationAbuseMute = 0x9CC; // bool
            public const nint m_szCrosshairCodes = 0x9D0; // CUtlSymbolLarge
            public const nint m_iPendingTeamNum = 0x9D8; // uint8
            public const nint m_flForceTeamTime = 0x9DC; // GameTime_t
            public const nint m_iCompTeammateColor = 0x9E0; // int32
            public const nint m_bEverPlayedOnTeam = 0x9E4; // bool
            public const nint m_bAttemptedToGetColor = 0x9E5; // bool
            public const nint m_iTeammatePreferredColor = 0x9E8; // int32
            public const nint m_bTeamChanged = 0x9EC; // bool
            public const nint m_bInSwitchTeam = 0x9ED; // bool
            public const nint m_bHasSeenJoinGame = 0x9EE; // bool
            public const nint m_bJustBecameSpectator = 0x9EF; // bool
            public const nint m_bSwitchTeamsOnNextRoundReset = 0x9F0; // bool
            public const nint m_bRemoveAllItemsOnNextRoundReset = 0x9F1; // bool
            public const nint m_szClan = 0x9F8; // CUtlSymbolLarge
            public const nint m_szClanName = 0xA00; // char[32]
            public const nint m_iCoachingTeam = 0xA20; // int32
            public const nint m_nPlayerDominated = 0xA28; // uint64
            public const nint m_nPlayerDominatingMe = 0xA30; // uint64
            public const nint m_iCompetitiveRanking = 0xA38; // int32
            public const nint m_iCompetitiveWins = 0xA3C; // int32
            public const nint m_iCompetitiveRankType = 0xA40; // int8
            public const nint m_iCompetitiveRankingPredicted_Win = 0xA44; // int32
            public const nint m_iCompetitiveRankingPredicted_Loss = 0xA48; // int32
            public const nint m_iCompetitiveRankingPredicted_Tie = 0xA4C; // int32
            public const nint m_nEndMatchNextMapVote = 0xA50; // int32
            public const nint m_unActiveQuestId = 0xA54; // uint16
            public const nint m_nQuestProgressReason = 0xA58; // QuestProgress::Reason
            public const nint m_unPlayerTvControlFlags = 0xA5C; // uint32
            public const nint m_iDraftIndex = 0xA88; // int32
            public const nint m_msQueuedModeDisconnectionTimestamp = 0xA8C; // uint32
            public const nint m_uiAbandonRecordedReason = 0xA90; // uint32
            public const nint m_bCannotBeKicked = 0xA94; // bool
            public const nint m_bEverFullyConnected = 0xA95; // bool
            public const nint m_bAbandonAllowsSurrender = 0xA96; // bool
            public const nint m_bAbandonOffersInstantSurrender = 0xA97; // bool
            public const nint m_bDisconnection1MinWarningPrinted = 0xA98; // bool
            public const nint m_bScoreReported = 0xA99; // bool
            public const nint m_nDisconnectionTick = 0xA9C; // int32
            public const nint m_bControllingBot = 0xAA8; // bool
            public const nint m_bHasControlledBotThisRound = 0xAA9; // bool
            public const nint m_bHasBeenControlledByPlayerThisRound = 0xAAA; // bool
            public const nint m_nBotsControlledThisRound = 0xAAC; // int32
            public const nint m_bCanControlObservedBot = 0xAB0; // bool
            public const nint m_hPlayerPawn = 0xAB4; // CHandle<CCSPlayerPawn>
            public const nint m_hObserverPawn = 0xAB8; // CHandle<CCSObserverPawn>
            public const nint m_DesiredObserverMode = 0xABC; // int32
            public const nint m_hDesiredObserverTarget = 0xAC0; // CEntityHandle
            public const nint m_bPawnIsAlive = 0xAC4; // bool
            public const nint m_iPawnHealth = 0xAC8; // uint32
            public const nint m_iPawnArmor = 0xACC; // int32
            public const nint m_bPawnHasDefuser = 0xAD0; // bool
            public const nint m_bPawnHasHelmet = 0xAD1; // bool
            public const nint m_nPawnCharacterDefIndex = 0xAD2; // uint16
            public const nint m_iPawnLifetimeStart = 0xAD4; // int32
            public const nint m_iPawnLifetimeEnd = 0xAD8; // int32
            public const nint m_iPawnBotDifficulty = 0xADC; // int32
            public const nint m_hOriginalControllerOfCurrentPawn = 0xAE0; // CHandle<CCSPlayerController>
            public const nint m_iScore = 0xAE4; // int32
            public const nint m_iRoundScore = 0xAE8; // int32
            public const nint m_iRoundsWon = 0xAEC; // int32
            public const nint m_vecKills = 0xAF0; // CNetworkUtlVectorBase<EKillTypes_t>
            public const nint m_bMvpNoMusic = 0xB08; // bool
            public const nint m_eMvpReason = 0xB0C; // int32
            public const nint m_iMusicKitID = 0xB10; // int32
            public const nint m_iMusicKitMVPs = 0xB14; // int32
            public const nint m_iMVPs = 0xB18; // int32
            public const nint m_nUpdateCounter = 0xB1C; // int32
            public const nint m_flSmoothedPing = 0xB20; // float32
            public const nint m_lastHeldVoteTimer = 0xFBC8; // IntervalTimer
            public const nint m_bShowHints = 0xFBE0; // bool
            public const nint m_iNextTimeCheck = 0xFBE4; // int32
            public const nint m_bJustDidTeamKill = 0xFBE8; // bool
            public const nint m_bPunishForTeamKill = 0xFBE9; // bool
            public const nint m_bGaveTeamDamageWarning = 0xFBEA; // bool
            public const nint m_bGaveTeamDamageWarningThisRound = 0xFBEB; // bool
            public const nint m_dblLastReceivedPacketPlatFloatTime = 0xFBF0; // float64
            public const nint m_LastTeamDamageWarningTime = 0xFBF8; // GameTime_t
            public const nint m_LastTimePlayerWasDisconnectedForPawnsRemove = 0xFBFC; // GameTime_t
            public const nint m_nSuspiciousHitCount = 0xFC00; // uint32
            public const nint m_nNonSuspiciousHitStreak = 0xFC04; // uint32
        }
        // Parent: CBaseTrigger
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_source (string_t)
        // NetworkVarNames: m_destination (string_t)
        public static class CFootstepControl {
            public const nint m_source = 0xBA0; // CUtlSymbolLarge
            public const nint m_destination = 0xBA8; // CUtlSymbolLarge
        }
        // Parent: CBasePlayerWeaponVData
        // Fields count: 92
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertySuppressBaseClassField
        // MPropertySuppressBaseClassField
        public static class CCSWeaponBaseVData {
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
            public const nint m_GearSlotPosition = 0xBF4; // int32
            public const nint m_DefaultLoadoutSlot = 0xBF8; // loadout_slot_t
            public const nint m_sWrongTeamMsg = 0xC00; // CUtlString
            public const nint m_nPrice = 0xC08; // int32
            public const nint m_nKillAward = 0xC0C; // int32
            public const nint m_nPrimaryReserveAmmoMax = 0xC10; // int32
            public const nint m_nSecondaryReserveAmmoMax = 0xC14; // int32
            public const nint m_bMeleeWeapon = 0xC18; // bool
            public const nint m_bHasBurstMode = 0xC19; // bool
            public const nint m_bIsRevolver = 0xC1A; // bool
            public const nint m_bCannotShootUnderwater = 0xC1B; // bool
            public const nint m_szName = 0xC20; // CGlobalSymbol
            public const nint m_szAnimExtension = 0xC28; // CUtlString
            public const nint m_eSilencerType = 0xC30; // CSWeaponSilencerType
            public const nint m_nCrosshairMinDistance = 0xC34; // int32
            public const nint m_nCrosshairDeltaDistance = 0xC38; // int32
            public const nint m_bIsFullAuto = 0xC3C; // bool
            public const nint m_nNumBullets = 0xC40; // int32
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
            public const nint m_flInaccuracyJumpInitial = 0xCBC; // float32
            public const nint m_flInaccuracyJumpApex = 0xCC0; // float32
            public const nint m_flInaccuracyReload = 0xCC4; // float32
            public const nint m_nRecoilSeed = 0xCC8; // int32
            public const nint m_nSpreadSeed = 0xCCC; // int32
            public const nint m_flTimeToIdleAfterFire = 0xCD0; // float32
            public const nint m_flIdleInterval = 0xCD4; // float32
            public const nint m_flAttackMovespeedFactor = 0xCD8; // float32
            public const nint m_flHeatPerShot = 0xCDC; // float32
            public const nint m_flInaccuracyPitchShift = 0xCE0; // float32
            public const nint m_flInaccuracyAltSoundThreshold = 0xCE4; // float32
            public const nint m_flBotAudibleRange = 0xCE8; // float32
            public const nint m_szUseRadioSubtitle = 0xCF0; // CUtlString
            public const nint m_bUnzoomsAfterShot = 0xCF8; // bool
            public const nint m_bHideViewModelWhenZoomed = 0xCF9; // bool
            public const nint m_nZoomLevels = 0xCFC; // int32
            public const nint m_nZoomFOV1 = 0xD00; // int32
            public const nint m_nZoomFOV2 = 0xD04; // int32
            public const nint m_flZoomTime0 = 0xD08; // float32
            public const nint m_flZoomTime1 = 0xD0C; // float32
            public const nint m_flZoomTime2 = 0xD10; // float32
            public const nint m_flIronSightPullUpSpeed = 0xD14; // float32
            public const nint m_flIronSightPutDownSpeed = 0xD18; // float32
            public const nint m_flIronSightFOV = 0xD1C; // float32
            public const nint m_flIronSightPivotForward = 0xD20; // float32
            public const nint m_flIronSightLooseness = 0xD24; // float32
            public const nint m_angPivotAngle = 0xD28; // QAngle
            public const nint m_vecIronSightEyePos = 0xD34; // Vector
            public const nint m_nDamage = 0xD40; // int32
            public const nint m_flHeadshotMultiplier = 0xD44; // float32
            public const nint m_flArmorRatio = 0xD48; // float32
            public const nint m_flPenetration = 0xD4C; // float32
            public const nint m_flRange = 0xD50; // float32
            public const nint m_flRangeModifier = 0xD54; // float32
            public const nint m_flFlinchVelocityModifierLarge = 0xD58; // float32
            public const nint m_flFlinchVelocityModifierSmall = 0xD5C; // float32
            public const nint m_flRecoveryTimeCrouch = 0xD60; // float32
            public const nint m_flRecoveryTimeStand = 0xD64; // float32
            public const nint m_flRecoveryTimeCrouchFinal = 0xD68; // float32
            public const nint m_flRecoveryTimeStandFinal = 0xD6C; // float32
            public const nint m_nRecoveryTransitionStartBullet = 0xD70; // int32
            public const nint m_nRecoveryTransitionEndBullet = 0xD74; // int32
            public const nint m_flThrowVelocity = 0xD78; // float32
            public const nint m_vSmokeColor = 0xD7C; // Vector
            public const nint m_szAnimClass = 0xD88; // CGlobalSymbol
        }
        // Parent: CBaseModelEntity
        // Fields count: 9
        //
        // Metadata:
        // MNetworkIncludeByName
        // MNetworkOverride
        // NetworkVarNames: m_vecMoveDirEntitySpace (Vector)
        // NetworkVarNames: m_flTargetSpeed (float32)
        // NetworkVarNames: m_nTransitionStartTick (GameTick_t)
        // NetworkVarNames: m_nTransitionDurationTicks (int)
        // NetworkVarNames: m_flTransitionStartSpeed (float32)
        // NetworkVarNames: m_hConveyorModels (EHANDLE)
        public static class CFuncConveyor {
            public const nint m_szConveyorModels = 0x9F8; // CUtlSymbolLarge
            public const nint m_flTransitionDurationSeconds = 0xA00; // float32
            public const nint m_angMoveEntitySpace = 0xA04; // QAngle
            public const nint m_vecMoveDirEntitySpace = 0xA10; // Vector
            public const nint m_flTargetSpeed = 0xA1C; // float32
            public const nint m_nTransitionStartTick = 0xA20; // GameTick_t
            public const nint m_nTransitionDurationTicks = 0xA24; // int32
            public const nint m_flTransitionStartSpeed = 0xA28; // float32
            public const nint m_hConveyorModels = 0xA30; // CNetworkUtlVectorBase<CHandle<CBaseEntity>>
        }
        // Parent: None
        // Fields count: 15
        //
        // Metadata:
        // NetworkVarNames: m_nUniqueID (int)
        // NetworkVarNames: m_unAccountID (uint32)
        // NetworkVarNames: m_unTraceID (uint32)
        // NetworkVarNames: m_rtGcTime (uint32)
        // NetworkVarNames: m_vecEndPos (Vector)
        // NetworkVarNames: m_vecStart (Vector)
        // NetworkVarNames: m_vecLeft (Vector)
        // NetworkVarNames: m_vecNormal (Vector)
        // NetworkVarNames: m_nPlayer (int)
        // NetworkVarNames: m_nEntity (int)
        // NetworkVarNames: m_nHitbox (int)
        // NetworkVarNames: m_flCreationTime (float)
        // NetworkVarNames: m_nTintID (int)
        // NetworkVarNames: m_nVersion (uint8)
        // NetworkVarNames: m_ubSignature (uint8)
        public static class CPlayerSprayDecal {
            public const nint m_nUniqueID = 0x9F8; // int32
            public const nint m_unAccountID = 0x9FC; // uint32
            public const nint m_unTraceID = 0xA00; // uint32
            public const nint m_rtGcTime = 0xA04; // uint32
            public const nint m_vecEndPos = 0xA08; // Vector
            public const nint m_vecStart = 0xA14; // Vector
            public const nint m_vecLeft = 0xA20; // Vector
            public const nint m_vecNormal = 0xA2C; // Vector
            public const nint m_nPlayer = 0xA38; // int32
            public const nint m_nEntity = 0xA3C; // int32
            public const nint m_nHitbox = 0xA40; // int32
            public const nint m_flCreationTime = 0xA44; // float32
            public const nint m_nTintID = 0xA48; // int32
            public const nint m_nVersion = 0xA4C; // uint8
            public const nint m_ubSignature = 0xA4D; // uint8[128]
        }
        // Parent: CBaseModelEntity
        // Fields count: 25
        //
        // Metadata:
        // NetworkVarNames: m_firePositions (Vector)
        // NetworkVarNames: m_fireParentPositions (Vector)
        // NetworkVarNames: m_bFireIsBurning (bool)
        // NetworkVarNames: m_BurnNormal (Vector)
        // NetworkVarNames: m_fireCount (int)
        // NetworkVarNames: m_nInfernoType (int)
        // NetworkVarNames: m_nFireEffectTickBegin (int)
        // NetworkVarNames: m_nFireLifetime (float)
        // NetworkVarNames: m_bInPostEffectTime (bool)
        public static class CInferno {
            public const nint m_firePositions = 0xA04; // Vector[64]
            public const nint m_fireParentPositions = 0xD04; // Vector[64]
            public const nint m_bFireIsBurning = 0x1004; // bool[64]
            public const nint m_BurnNormal = 0x1044; // Vector[64]
            public const nint m_fireCount = 0x1344; // int32
            public const nint m_nInfernoType = 0x1348; // int32
            public const nint m_nFireEffectTickBegin = 0x134C; // int32
            public const nint m_nFireLifetime = 0x1350; // float32
            public const nint m_bInPostEffectTime = 0x1354; // bool
            public const nint m_nFiresExtinguishCount = 0x1358; // int32
            public const nint m_bWasCreatedInSmoke = 0x135C; // bool
            public const nint m_extent = 0x1560; // Extent
            public const nint m_damageTimer = 0x1578; // CountdownTimer
            public const nint m_damageRampTimer = 0x1590; // CountdownTimer
            public const nint m_splashVelocity = 0x15A8; // Vector
            public const nint m_InitialSplashVelocity = 0x15B4; // Vector
            public const nint m_startPos = 0x15C0; // Vector
            public const nint m_vecOriginalSpawnLocation = 0x15CC; // Vector
            public const nint m_activeTimer = 0x15D8; // IntervalTimer
            public const nint m_fireSpawnOffset = 0x15E8; // int32
            public const nint m_nMaxFlames = 0x15EC; // int32
            public const nint m_nSpreadCount = 0x15F0; // int32
            public const nint m_BookkeepingTimer = 0x15F8; // CountdownTimer
            public const nint m_NextSpreadTimer = 0x1610; // CountdownTimer
            public const nint m_nSourceItemDefIndex = 0x1628; // uint16
        }
        // Parent: CBaseModelEntity
        // Fields count: 52
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
        // NetworkVarNames: m_LightStyleTargets (CHandle<CBaseModelEntity>)
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
        public static class CBarnLight {
            public const nint m_bEnabled = 0x9F8; // bool
            public const nint m_nColorMode = 0x9FC; // int32
            public const nint m_Color = 0xA00; // Color
            public const nint m_flColorTemperature = 0xA04; // float32
            public const nint m_flBrightness = 0xA08; // float32
            public const nint m_flBrightnessScale = 0xA0C; // float32
            public const nint m_nDirectLight = 0xA10; // int32
            public const nint m_nBakedShadowIndex = 0xA14; // int32
            public const nint m_nLuminaireShape = 0xA18; // int32
            public const nint m_flLuminaireSize = 0xA1C; // float32
            public const nint m_flLuminaireAnisotropy = 0xA20; // float32
            public const nint m_LightStyleString = 0xA28; // CUtlString
            public const nint m_flLightStyleStartTime = 0xA30; // GameTime_t
            public const nint m_QueuedLightStyleStrings = 0xA38; // CNetworkUtlVectorBase<CUtlString>
            public const nint m_LightStyleEvents = 0xA50; // CNetworkUtlVectorBase<CUtlString>
            public const nint m_LightStyleTargets = 0xA68; // CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
            public const nint m_StyleEvent = 0xA80; // CEntityIOOutput[4]
            public const nint m_hLightCookie = 0xB40; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_flShape = 0xB48; // float32
            public const nint m_flSoftX = 0xB4C; // float32
            public const nint m_flSoftY = 0xB50; // float32
            public const nint m_flSkirt = 0xB54; // float32
            public const nint m_flSkirtNear = 0xB58; // float32
            public const nint m_vSizeParams = 0xB5C; // Vector
            public const nint m_flRange = 0xB68; // float32
            public const nint m_vShear = 0xB6C; // Vector
            public const nint m_nBakeSpecularToCubemaps = 0xB78; // int32
            public const nint m_vBakeSpecularToCubemapsSize = 0xB7C; // Vector
            public const nint m_nCastShadows = 0xB88; // int32
            public const nint m_nShadowMapSize = 0xB8C; // int32
            public const nint m_nShadowPriority = 0xB90; // int32
            public const nint m_bContactShadow = 0xB94; // bool
            public const nint m_nBounceLight = 0xB98; // int32
            public const nint m_flBounceScale = 0xB9C; // float32
            public const nint m_flMinRoughness = 0xBA0; // float32
            public const nint m_vAlternateColor = 0xBA4; // Vector
            public const nint m_fAlternateColorBrightness = 0xBB0; // float32
            public const nint m_nFog = 0xBB4; // int32
            public const nint m_flFogStrength = 0xBB8; // float32
            public const nint m_nFogShadows = 0xBBC; // int32
            public const nint m_flFogScale = 0xBC0; // float32
            public const nint m_flFadeSizeStart = 0xBC4; // float32
            public const nint m_flFadeSizeEnd = 0xBC8; // float32
            public const nint m_flShadowFadeSizeStart = 0xBCC; // float32
            public const nint m_flShadowFadeSizeEnd = 0xBD0; // float32
            public const nint m_bPrecomputedFieldsValid = 0xBD4; // bool
            public const nint m_vPrecomputedBoundsMins = 0xBD8; // Vector
            public const nint m_vPrecomputedBoundsMaxs = 0xBE4; // Vector
            public const nint m_vPrecomputedOBBOrigin = 0xBF0; // Vector
            public const nint m_vPrecomputedOBBAngles = 0xBFC; // QAngle
            public const nint m_vPrecomputedOBBExtent = 0xC08; // Vector
            public const nint m_bPvsModifyEntity = 0xC14; // bool
        }
        // Parent: CBarnLight
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bShowLight (bool)
        public static class CRectLight {
            public const nint m_bShowLight = 0xC20; // bool
        }
        // Parent: CBarnLight
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_flInnerAngle (float)
        // NetworkVarNames: m_flOuterAngle (float)
        // NetworkVarNames: m_bShowLight (bool)
        public static class COmniLight {
            public const nint m_flInnerAngle = 0xC20; // float32
            public const nint m_flOuterAngle = 0xC24; // float32
            public const nint m_bShowLight = 0xC28; // bool
        }
        // Parent: CTeam
        // Fields count: 14
        //
        // Metadata:
        // NetworkVarNames: m_bSurrendered (bool)
        // NetworkVarNames: m_szTeamMatchStat (char)
        // NetworkVarNames: m_numMapVictories (int)
        // NetworkVarNames: m_scoreFirstHalf (int32)
        // NetworkVarNames: m_scoreSecondHalf (int32)
        // NetworkVarNames: m_scoreOvertime (int32)
        // NetworkVarNames: m_szClanTeamname (char)
        // NetworkVarNames: m_iClanID (uint32)
        // NetworkVarNames: m_szTeamFlagImage (char)
        // NetworkVarNames: m_szTeamLogoImage (char)
        public static class CCSTeam {
            public const nint m_nLastRecievedShorthandedRoundBonus = 0x860; // int32
            public const nint m_nShorthandedRoundBonusStartRound = 0x864; // int32
            public const nint m_bSurrendered = 0x868; // bool
            public const nint m_szTeamMatchStat = 0x869; // char[512]
            public const nint m_numMapVictories = 0xA6C; // int32
            public const nint m_scoreFirstHalf = 0xA70; // int32
            public const nint m_scoreSecondHalf = 0xA74; // int32
            public const nint m_scoreOvertime = 0xA78; // int32
            public const nint m_szClanTeamname = 0xA7C; // char[129]
            public const nint m_iClanID = 0xB00; // uint32
            public const nint m_szTeamFlagImage = 0xB04; // char[8]
            public const nint m_szTeamLogoImage = 0xB0C; // char[8]
            public const nint m_flNextResourceTime = 0xB14; // float32
            public const nint m_iLastUpdateSentAt = 0xB18; // int32
        }
        // Parent: CBaseModelEntity
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
        public static class CEnvSky {
            public const nint m_hSkyMaterial = 0x9F8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_hSkyMaterialLightingOnly = 0xA00; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_bStartDisabled = 0xA08; // bool
            public const nint m_vTintColor = 0xA09; // Color
            public const nint m_vTintColorLightingOnly = 0xA0D; // Color
            public const nint m_flBrightnessScale = 0xA14; // float32
            public const nint m_nFogType = 0xA18; // int32
            public const nint m_flFogMinStart = 0xA1C; // float32
            public const nint m_flFogMinEnd = 0xA20; // float32
            public const nint m_flFogMaxStart = 0xA24; // float32
            public const nint m_flFogMaxEnd = 0xA28; // float32
            public const nint m_bEnabled = 0xA2C; // bool
        }
        // Parent: CBaseModelEntity
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_CLightComponent (CLightComponent::Storage_t)
        public static class CLightEntity {
            public const nint m_CLightComponent = 0x9F8; // CLightComponent*
        }
        // Parent: CBaseTrigger
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
        public static class CPostProcessingVolume {
            public const nint m_hPostSettings = 0xBB0; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
            public const nint m_flFadeDuration = 0xBB8; // float32
            public const nint m_flMinLogExposure = 0xBBC; // float32
            public const nint m_flMaxLogExposure = 0xBC0; // float32
            public const nint m_flMinExposure = 0xBC4; // float32
            public const nint m_flMaxExposure = 0xBC8; // float32
            public const nint m_flExposureCompensation = 0xBCC; // float32
            public const nint m_flExposureFadeSpeedUp = 0xBD0; // float32
            public const nint m_flExposureFadeSpeedDown = 0xBD4; // float32
            public const nint m_flTonemapEVSmoothingRange = 0xBD8; // float32
            public const nint m_bMaster = 0xBDC; // bool
            public const nint m_bExposureControl = 0xBDD; // bool
            public const nint m_flRate = 0xBE0; // float32
            public const nint m_flTonemapPercentTarget = 0xBE4; // float32
            public const nint m_flTonemapPercentBrightPixels = 0xBE8; // float32
            public const nint m_flTonemapMinAvgLum = 0xBEC; // float32
        }
        // Parent: CParticleSystem
        // Fields count: 5
        //
        // Metadata:
        // NetworkVarNames: m_flAlphaScale (float32)
        // NetworkVarNames: m_flRadiusScale (float32)
        // NetworkVarNames: m_flSelfIllumScale (float32)
        // NetworkVarNames: m_ColorTint (Color)
        // NetworkVarNames: m_hTextureOverride (HRenderTextureStrong)
        public static class CEnvParticleGlow {
            public const nint m_flAlphaScale = 0xF70; // float32
            public const nint m_flRadiusScale = 0xF74; // float32
            public const nint m_flSelfIllumScale = 0xF78; // float32
            public const nint m_ColorTint = 0xF7C; // Color
            public const nint m_hTextureOverride = 0xF80; // CStrongHandle<InfoForResourceTypeCTextureBase>
        }
        // Parent: CBaseModelEntity
        // Fields count: 8
        //
        // Metadata:
        // NetworkVarNames: m_bLoop (bool)
        // NetworkVarNames: m_flFPS (float)
        // NetworkVarNames: m_hPositionKeys (HRenderTextureStrong)
        // NetworkVarNames: m_hRotationKeys (HRenderTextureStrong)
        // NetworkVarNames: m_vAnimationBoundsMin (Vector)
        // NetworkVarNames: m_vAnimationBoundsMax (Vector)
        // NetworkVarNames: m_flStartTime (float)
        // NetworkVarNames: m_flStartFrame (float)
        public static class CTextureBasedAnimatable {
            public const nint m_bLoop = 0x9F8; // bool
            public const nint m_flFPS = 0x9FC; // float32
            public const nint m_hPositionKeys = 0xA00; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hRotationKeys = 0xA08; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_vAnimationBoundsMin = 0xA10; // Vector
            public const nint m_vAnimationBoundsMax = 0xA1C; // Vector
            public const nint m_flStartTime = 0xA28; // float32
            public const nint m_flStartFrame = 0xA2C; // float32
        }
        // Parent: CBaseModelEntity
        // Fields count: 10
        //
        // Metadata:
        // MNetworkIncludeByName
        // NetworkVarNames: m_bInitiallyPopulateInterpHistory (bool)
        // NetworkVarNames: m_bAnimGraphUpdateEnabled (bool)
        // NetworkVarNames: m_vecForce (Vector)
        // NetworkVarNames: m_nForceBone (int32)
        // NetworkVarNames: m_pRagdollPose (PhysicsRagdollPose_t*)
        // NetworkVarNames: m_bClientRagdoll (bool)
        public static class CBaseAnimGraph {
            public const nint m_bInitiallyPopulateInterpHistory = 0xA70; // bool
            public const nint m_pChoreoServices = 0xA78; // IChoreoServices*
            public const nint m_bAnimGraphUpdateEnabled = 0xA80; // bool
            public const nint m_flMaxSlopeDistance = 0xA84; // float32
            public const nint m_vLastSlopeCheckPos = 0xA88; // Vector
            public const nint m_bAnimationUpdateScheduled = 0xA94; // bool
            public const nint m_vecForce = 0xA98; // Vector
            public const nint m_nForceBone = 0xAA4; // int32
            public const nint m_pRagdollPose = 0xAB8; // PhysicsRagdollPose_t*
            public const nint m_bClientRagdoll = 0xAC0; // bool
        }
        // Parent: None
        // Fields count: 34
        //
        // Metadata:
        // NetworkVarNames: m_noGhostCollision (bool)
        public static class CBreakableProp {
            public const nint m_OnBreak = 0xC40; // CEntityIOOutput
            public const nint m_OnHealthChanged = 0xC68; // CEntityOutputTemplate<float32>
            public const nint m_OnTakeDamage = 0xC90; // CEntityIOOutput
            public const nint m_impactEnergyScale = 0xCB8; // float32
            public const nint m_iMinHealthDmg = 0xCBC; // int32
            public const nint m_preferredCarryAngles = 0xCC0; // QAngle
            public const nint m_flPressureDelay = 0xCCC; // float32
            public const nint m_hBreaker = 0xCD0; // CHandle<CBaseEntity>
            public const nint m_PerformanceMode = 0xCD4; // PerformanceMode_t
            public const nint m_flDmgModBullet = 0xCD8; // float32
            public const nint m_flDmgModClub = 0xCDC; // float32
            public const nint m_flDmgModExplosive = 0xCE0; // float32
            public const nint m_flDmgModFire = 0xCE4; // float32
            public const nint m_iszPhysicsDamageTableName = 0xCE8; // CUtlSymbolLarge
            public const nint m_iszBasePropData = 0xCF0; // CUtlSymbolLarge
            public const nint m_iInteractions = 0xCF8; // int32
            public const nint m_flPreventDamageBeforeTime = 0xCFC; // GameTime_t
            public const nint m_bHasBreakPiecesOrCommands = 0xD00; // bool
            public const nint m_explodeDamage = 0xD04; // float32
            public const nint m_explodeRadius = 0xD08; // float32
            public const nint m_explosionDelay = 0xD10; // float32
            public const nint m_explosionBuildupSound = 0xD18; // CUtlSymbolLarge
            public const nint m_explosionCustomEffect = 0xD20; // CUtlSymbolLarge
            public const nint m_explosionCustomSound = 0xD28; // CUtlSymbolLarge
            public const nint m_explosionModifier = 0xD30; // CUtlSymbolLarge
            public const nint m_hPhysicsAttacker = 0xD38; // CHandle<CBasePlayerPawn>
            public const nint m_flLastPhysicsInfluenceTime = 0xD3C; // GameTime_t
            public const nint m_bOriginalBlockLOS = 0xD40; // bool
            public const nint m_flDefaultFadeScale = 0xD44; // float32
            public const nint m_hLastAttacker = 0xD48; // CHandle<CBaseEntity>
            public const nint m_hFlareEnt = 0xD4C; // CHandle<CBaseEntity>
            public const nint m_bUsePuntSound = 0xD50; // bool
            public const nint m_iszPuntSound = 0xD58; // CUtlSymbolLarge
            public const nint m_noGhostCollision = 0xD60; // bool
        }
        // Parent: CBreakableProp
        // Fields count: 21
        //
        // Metadata:
        // NetworkVarNames: m_bUseHitboxesForRenderBox (bool)
        // NetworkVarNames: m_bUseAnimGraph (bool)
        public static class CDynamicProp {
            public const nint m_bCreateNavObstacle = 0xD70; // bool
            public const nint m_bUseHitboxesForRenderBox = 0xD71; // bool
            public const nint m_bUseAnimGraph = 0xD72; // bool
            public const nint m_pOutputAnimBegun = 0xD78; // CEntityIOOutput
            public const nint m_pOutputAnimOver = 0xDA0; // CEntityIOOutput
            public const nint m_pOutputAnimLoopCycleOver = 0xDC8; // CEntityIOOutput
            public const nint m_OnAnimReachedStart = 0xDF0; // CEntityIOOutput
            public const nint m_OnAnimReachedEnd = 0xE18; // CEntityIOOutput
            public const nint m_iszIdleAnim = 0xE40; // CUtlSymbolLarge
            public const nint m_nIdleAnimLoopMode = 0xE48; // AnimLoopMode_t
            public const nint m_bRandomizeCycle = 0xE4C; // bool
            public const nint m_bStartDisabled = 0xE4D; // bool
            public const nint m_bFiredStartEndOutput = 0xE4E; // bool
            public const nint m_bForceNpcExclude = 0xE4F; // bool
            public const nint m_bCreateNonSolid = 0xE50; // bool
            public const nint m_bIsOverrideProp = 0xE51; // bool
            public const nint m_iInitialGlowState = 0xE54; // int32
            public const nint m_nGlowRange = 0xE58; // int32
            public const nint m_nGlowRangeMin = 0xE5C; // int32
            public const nint m_glowColor = 0xE60; // Color
            public const nint m_nGlowTeam = 0xE64; // int32
        }
        // Parent: CBaseTrigger
        // Fields count: 10
        //
        // Metadata:
        // NetworkVarNames: m_bEnabled (bool)
        // NetworkVarNames: m_MaxWeight (float32)
        // NetworkVarNames: m_FadeDuration (float32)
        // NetworkVarNames: m_Weight (float32)
        // NetworkVarNames: m_lookupFilename (char)
        public static class CColorCorrectionVolume {
            public const nint m_bEnabled = 0xB99; // bool
            public const nint m_MaxWeight = 0xB9C; // float32
            public const nint m_FadeDuration = 0xBA0; // float32
            public const nint m_bStartDisabled = 0xBA4; // bool
            public const nint m_Weight = 0xBA8; // float32
            public const nint m_lookupFilename = 0xBAC; // char[512]
            public const nint m_LastEnterWeight = 0xDAC; // float32
            public const nint m_LastEnterTime = 0xDB0; // GameTime_t
            public const nint m_LastExitWeight = 0xDB4; // float32
            public const nint m_LastExitTime = 0xDB8; // GameTime_t
        }
        // Parent: CBaseAnimGraph
        // Fields count: 30
        //
        // Metadata:
        // NetworkVarNames: m_iszCommentaryFile (string_t)
        // NetworkVarNames: m_hViewPosition (CHandle<CBaseEntity>)
        // NetworkVarNames: m_bActive (bool)
        // NetworkVarNames: m_flStartTime (GameTime_t)
        // NetworkVarNames: m_flStartTimeInCommentary (float32)
        // NetworkVarNames: m_iszTitle (string_t)
        // NetworkVarNames: m_iszSpeakers (string_t)
        // NetworkVarNames: m_iNodeNumber (int)
        // NetworkVarNames: m_iNodeNumberMax (int)
        // NetworkVarNames: m_bListenedTo (bool)
        public static class CPointCommentaryNode {
            public const nint m_iszPreCommands = 0xBF0; // CUtlSymbolLarge
            public const nint m_iszPostCommands = 0xBF8; // CUtlSymbolLarge
            public const nint m_iszCommentaryFile = 0xC00; // CUtlSymbolLarge
            public const nint m_iszViewTarget = 0xC08; // CUtlSymbolLarge
            public const nint m_hViewTarget = 0xC10; // CHandle<CBaseEntity>
            public const nint m_hViewTargetAngles = 0xC14; // CHandle<CBaseEntity>
            public const nint m_iszViewPosition = 0xC18; // CUtlSymbolLarge
            public const nint m_hViewPosition = 0xC20; // CHandle<CBaseEntity>
            public const nint m_hViewPositionMover = 0xC24; // CHandle<CBaseEntity>
            public const nint m_bPreventMovement = 0xC28; // bool
            public const nint m_bUnderCrosshair = 0xC29; // bool
            public const nint m_bUnstoppable = 0xC2A; // bool
            public const nint m_flFinishedTime = 0xC2C; // GameTime_t
            public const nint m_vecFinishOrigin = 0xC30; // Vector
            public const nint m_vecOriginalAngles = 0xC3C; // QAngle
            public const nint m_vecFinishAngles = 0xC48; // QAngle
            public const nint m_bPreventChangesWhileMoving = 0xC54; // bool
            public const nint m_bDisabled = 0xC55; // bool
            public const nint m_vecTeleportOrigin = 0xC58; // Vector
            public const nint m_flAbortedPlaybackAt = 0xC64; // GameTime_t
            public const nint m_pOnCommentaryStarted = 0xC68; // CEntityIOOutput
            public const nint m_pOnCommentaryStopped = 0xC90; // CEntityIOOutput
            public const nint m_bActive = 0xCB8; // bool
            public const nint m_flStartTime = 0xCBC; // GameTime_t
            public const nint m_flStartTimeInCommentary = 0xCC0; // float32
            public const nint m_iszTitle = 0xCC8; // CUtlSymbolLarge
            public const nint m_iszSpeakers = 0xCD0; // CUtlSymbolLarge
            public const nint m_iNodeNumber = 0xCD8; // int32
            public const nint m_iNodeNumberMax = 0xCDC; // int32
            public const nint m_bListenedTo = 0xCE0; // bool
        }
        // Parent: None
        // Fields count: 9
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
        public static class CFuncMonitor {
            public const nint m_targetCamera = 0xA18; // CUtlString
            public const nint m_nResolutionEnum = 0xA20; // int32
            public const nint m_bRenderShadows = 0xA24; // bool
            public const nint m_bUseUniqueColorTarget = 0xA25; // bool
            public const nint m_brushModelName = 0xA28; // CUtlString
            public const nint m_hTargetCamera = 0xA30; // CHandle<CBaseEntity>
            public const nint m_bEnabled = 0xA34; // bool
            public const nint m_bDraw3DSkybox = 0xA35; // bool
            public const nint m_bStartEnabled = 0xA36; // bool
        }
        // Parent: CBaseTrigger
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_strStartTouchEventName (CUtlString)
        // NetworkVarNames: m_strEndTouchEventName (CUtlString)
        // NetworkVarNames: m_strTriggerID (CUtlString)
        public static class CTriggerGameEvent {
            public const nint m_strStartTouchEventName = 0xBA0; // CUtlString
            public const nint m_strEndTouchEventName = 0xBA8; // CUtlString
            public const nint m_strTriggerID = 0xBB0; // CUtlString
        }
        // Parent: None
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_EffectName (string_t)
        public static class CFuncElectrifiedVolume {
            public const nint m_EffectName = 0xA18; // CUtlSymbolLarge
            public const nint m_EffectInterpenetrateName = 0xA20; // CUtlSymbolLarge
            public const nint m_EffectZapName = 0xA28; // CUtlSymbolLarge
            public const nint m_iszEffectSource = 0xA30; // CUtlSymbolLarge
        }
        // Parent: None
        // Fields count: 15
        //
        // Metadata:
        // NetworkVarNames: m_bTestOcclusion (bool)
        public static class CTriggerLook {
            public const nint m_hLookTarget = 0xBC8; // CHandle<CBaseEntity>
            public const nint m_flFieldOfView = 0xBCC; // float32
            public const nint m_flLookTime = 0xBD0; // float32
            public const nint m_flLookTimeTotal = 0xBD4; // float32
            public const nint m_flLookTimeLast = 0xBD8; // GameTime_t
            public const nint m_flTimeoutDuration = 0xBDC; // float32
            public const nint m_bTimeoutFired = 0xBE0; // bool
            public const nint m_bIsLooking = 0xBE1; // bool
            public const nint m_b2DFOV = 0xBE2; // bool
            public const nint m_bUseVelocity = 0xBE3; // bool
            public const nint m_hActivator = 0xBE4; // CHandle<CBaseEntity>
            public const nint m_bTestOcclusion = 0xBE8; // bool
            public const nint m_OnTimeout = 0xBF0; // CEntityIOOutput
            public const nint m_OnStartLook = 0xC18; // CEntityIOOutput
            public const nint m_OnEndLook = 0xC40; // CEntityIOOutput
        }
        // Parent: CBaseTrigger
        // Fields count: 13
        //
        // Metadata:
        // NetworkVarNames: m_gravityScale (float)
        // NetworkVarNames: m_linearLimit (float)
        // NetworkVarNames: m_linearDamping (float)
        // NetworkVarNames: m_angularLimit (float)
        // NetworkVarNames: m_angularDamping (float)
        // NetworkVarNames: m_linearForce (float)
        // NetworkVarNames: m_flFrequency (float)
        // NetworkVarNames: m_flDampingRatio (float)
        // NetworkVarNames: m_vecLinearForcePointAt (Vector)
        // NetworkVarNames: m_bCollapseToForcePoint (bool)
        // NetworkVarNames: m_vecLinearForcePointAtWorld (Vector)
        // NetworkVarNames: m_vecLinearForceDirection (Vector)
        // NetworkVarNames: m_bConvertToDebrisWhenPossible (bool)
        public static class CTriggerPhysics {
            public const nint m_gravityScale = 0xBB0; // float32
            public const nint m_linearLimit = 0xBB4; // float32
            public const nint m_linearDamping = 0xBB8; // float32
            public const nint m_angularLimit = 0xBBC; // float32
            public const nint m_angularDamping = 0xBC0; // float32
            public const nint m_linearForce = 0xBC4; // float32
            public const nint m_flFrequency = 0xBC8; // float32
            public const nint m_flDampingRatio = 0xBCC; // float32
            public const nint m_vecLinearForcePointAt = 0xBD0; // Vector
            public const nint m_bCollapseToForcePoint = 0xBDC; // bool
            public const nint m_vecLinearForcePointAtWorld = 0xBE0; // Vector
            public const nint m_vecLinearForceDirection = 0xBEC; // Vector
            public const nint m_bConvertToDebrisWhenPossible = 0xBF8; // bool
        }
        // Parent: CBaseAnimGraph
        // Fields count: 7
        //
        // Metadata:
        // NetworkVarNames: m_flexWeight (float32)
        // NetworkVarNames: m_vLookTargetPosition (Vector)
        // NetworkVarNames: m_blinktoggle (bool)
        public static class CBaseFlex {
            public const nint m_flexWeight = 0xBF0; // CNetworkUtlVectorBase<float32>
            public const nint m_vLookTargetPosition = 0xC08; // Vector
            public const nint m_blinktoggle = 0xC14; // bool
            public const nint m_flAllowResponsesEndTime = 0xC68; // GameTime_t
            public const nint m_flLastFlexAnimationTime = 0xC6C; // GameTime_t
            public const nint m_nNextSceneEventId = 0xC70; // uint32
            public const nint m_bUpdateLayerPriorities = 0xC74; // bool
        }
        // Parent: CDynamicProp
        // Fields count: 37
        //
        // Metadata:
        // MNetworkExcludeByName
        // MNetworkExcludeByName
        // MNetworkExcludeByName
        // MNetworkExcludeByUserGroup
        // MNetworkExcludeByName
        // MNetworkExcludeByUserGroup
        // MNetworkIncludeByName
        // NetworkVarNames: m_eDoorState (DoorState_t)
        // NetworkVarNames: m_bLocked (bool)
        // NetworkVarNames: m_closedPosition (Vector)
        // NetworkVarNames: m_closedAngles (QAngle)
        // NetworkVarNames: m_hMaster (CHandle<CBasePropDoor>)
        public static class CBasePropDoor {
            public const nint m_flAutoReturnDelay = 0xE74; // float32
            public const nint m_hDoorList = 0xE78; // CUtlVector<CHandle<CBasePropDoor>>
            public const nint m_nHardwareType = 0xE90; // int32
            public const nint m_bNeedsHardware = 0xE94; // bool
            public const nint m_eDoorState = 0xE98; // DoorState_t
            public const nint m_bLocked = 0xE9C; // bool
            public const nint m_closedPosition = 0xEA0; // Vector
            public const nint m_closedAngles = 0xEAC; // QAngle
            public const nint m_hBlocker = 0xEB8; // CHandle<CBaseEntity>
            public const nint m_bFirstBlocked = 0xEBC; // bool
            public const nint m_ls = 0xEC0; // locksound_t
            public const nint m_bForceClosed = 0xEE0; // bool
            public const nint m_vecLatchWorldPosition = 0xEE4; // Vector
            public const nint m_hActivator = 0xEF0; // CHandle<CBaseEntity>
            public const nint m_SoundMoving = 0xF00; // CUtlSymbolLarge
            public const nint m_SoundOpen = 0xF08; // CUtlSymbolLarge
            public const nint m_SoundClose = 0xF10; // CUtlSymbolLarge
            public const nint m_SoundLock = 0xF18; // CUtlSymbolLarge
            public const nint m_SoundUnlock = 0xF20; // CUtlSymbolLarge
            public const nint m_SoundLatch = 0xF28; // CUtlSymbolLarge
            public const nint m_SoundPound = 0xF30; // CUtlSymbolLarge
            public const nint m_SoundJiggle = 0xF38; // CUtlSymbolLarge
            public const nint m_SoundLockedAnim = 0xF40; // CUtlSymbolLarge
            public const nint m_numCloseAttempts = 0xF48; // int32
            public const nint m_nPhysicsMaterial = 0xF4C; // CUtlStringToken
            public const nint m_SlaveName = 0xF50; // CUtlSymbolLarge
            public const nint m_hMaster = 0xF58; // CHandle<CBasePropDoor>
            public const nint m_OnBlockedClosing = 0xF60; // CEntityIOOutput
            public const nint m_OnBlockedOpening = 0xF88; // CEntityIOOutput
            public const nint m_OnUnblockedClosing = 0xFB0; // CEntityIOOutput
            public const nint m_OnUnblockedOpening = 0xFD8; // CEntityIOOutput
            public const nint m_OnFullyClosed = 0x1000; // CEntityIOOutput
            public const nint m_OnFullyOpen = 0x1028; // CEntityIOOutput
            public const nint m_OnClose = 0x1050; // CEntityIOOutput
            public const nint m_OnOpen = 0x1078; // CEntityIOOutput
            public const nint m_OnLockedUse = 0x10A0; // CEntityIOOutput
            public const nint m_OnAjarOpen = 0x10C8; // CEntityIOOutput
        }
        // Parent: CBaseAnimGraph
        // Fields count: 24
        //
        // Metadata:
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // NetworkVarNames: m_x (float32)
        // NetworkVarNames: m_y (float32)
        // NetworkVarNames: m_z (float32)
        // NetworkVarNames: m_angle (float32)
        // NetworkVarNames: m_poolOrigin (Vector)
        // NetworkVarNames: m_waterLevel (float32)
        public static class CFish {
            public const nint m_pool = 0xBF0; // CHandle<CFishPool>
            public const nint m_id = 0xBF4; // uint32
            public const nint m_x = 0xBF8; // float32
            public const nint m_y = 0xBFC; // float32
            public const nint m_z = 0xC00; // float32
            public const nint m_angle = 0xC04; // float32
            public const nint m_angleChange = 0xC08; // float32
            public const nint m_forward = 0xC0C; // Vector
            public const nint m_perp = 0xC18; // Vector
            public const nint m_poolOrigin = 0xC24; // Vector
            public const nint m_waterLevel = 0xC30; // float32
            public const nint m_speed = 0xC34; // float32
            public const nint m_desiredSpeed = 0xC38; // float32
            public const nint m_calmSpeed = 0xC3C; // float32
            public const nint m_panicSpeed = 0xC40; // float32
            public const nint m_avoidRange = 0xC44; // float32
            public const nint m_turnTimer = 0xC48; // CountdownTimer
            public const nint m_turnClockwise = 0xC60; // bool
            public const nint m_goTimer = 0xC68; // CountdownTimer
            public const nint m_moveTimer = 0xC80; // CountdownTimer
            public const nint m_panicTimer = 0xC98; // CountdownTimer
            public const nint m_disperseTimer = 0xCB0; // CountdownTimer
            public const nint m_proximityTimer = 0xCC8; // CountdownTimer
            public const nint m_visible = 0xCE0; // CUtlVector<CFish*>
        }
        // Parent: CBaseAnimGraph
        // Fields count: 28
        //
        // Metadata:
        // NetworkVarNames: m_ragPos (Vector)
        // NetworkVarNames: m_ragAngles (QAngle)
        // NetworkVarNames: m_hRagdollSource (EHANDLE)
        // NetworkVarNames: m_flBlendWeight (float32)
        public static class CRagdollProp {
            public const nint m_ragdoll = 0xBF8; // ragdoll_t
            public const nint m_bStartDisabled = 0xC30; // bool
            public const nint m_ragPos = 0xC38; // CNetworkUtlVectorBase<Vector>
            public const nint m_ragAngles = 0xC50; // CNetworkUtlVectorBase<QAngle>
            public const nint m_hRagdollSource = 0xC68; // CHandle<CBaseEntity>
            public const nint m_lastUpdateTickCount = 0xC6C; // uint32
            public const nint m_allAsleep = 0xC70; // bool
            public const nint m_bFirstCollisionAfterLaunch = 0xC71; // bool
            public const nint m_hDamageEntity = 0xC74; // CHandle<CBaseEntity>
            public const nint m_hKiller = 0xC78; // CHandle<CBaseEntity>
            public const nint m_hPhysicsAttacker = 0xC7C; // CHandle<CBasePlayerPawn>
            public const nint m_flLastPhysicsInfluenceTime = 0xC80; // GameTime_t
            public const nint m_flFadeOutStartTime = 0xC84; // GameTime_t
            public const nint m_flFadeTime = 0xC88; // float32
            public const nint m_vecLastOrigin = 0xC8C; // Vector
            public const nint m_flAwakeTime = 0xC98; // GameTime_t
            public const nint m_flLastOriginChangeTime = 0xC9C; // GameTime_t
            public const nint m_nBloodColor = 0xCA0; // int32
            public const nint m_strOriginClassName = 0xCA8; // CUtlSymbolLarge
            public const nint m_strSourceClassName = 0xCB0; // CUtlSymbolLarge
            public const nint m_bHasBeenPhysgunned = 0xCB8; // bool
            public const nint m_bShouldTeleportPhysics = 0xCB9; // bool
            public const nint m_flBlendWeight = 0xCBC; // float32
            public const nint m_flDefaultFadeScale = 0xCC0; // float32
            public const nint m_ragdollMins = 0xCC8; // CUtlVector<Vector>
            public const nint m_ragdollMaxs = 0xCE0; // CUtlVector<Vector>
            public const nint m_bShouldDeleteActivationRecord = 0xCF8; // bool
            public const nint m_bValidatePoweredRagdollPose = 0xD58; // bool
        }
        // Parent: CBreakableProp
        // Fields count: 34
        //
        // Metadata:
        // MNetworkExcludeByName
        // MNetworkExcludeByName
        // MNetworkExcludeByName
        // MNetworkExcludeByUserGroup
        // MNetworkExcludeByName
        // MNetworkExcludeByUserGroup
        // MNetworkIncludeByName
        // NetworkVarNames: m_bAwake (bool)
        public static class CPhysicsProp {
            public const nint m_MotionEnabled = 0xD70; // CEntityIOOutput
            public const nint m_OnAwakened = 0xD98; // CEntityIOOutput
            public const nint m_OnAwake = 0xDC0; // CEntityIOOutput
            public const nint m_OnAsleep = 0xDE8; // CEntityIOOutput
            public const nint m_OnPlayerUse = 0xE10; // CEntityIOOutput
            public const nint m_OnPlayerPickup = 0xE38; // CEntityIOOutput
            public const nint m_OnOutOfWorld = 0xE60; // CEntityIOOutput
            public const nint m_massScale = 0xE88; // float32
            public const nint m_inertiaScale = 0xE8C; // float32
            public const nint m_buoyancyScale = 0xE90; // float32
            public const nint m_damageType = 0xE94; // int32
            public const nint m_damageToEnableMotion = 0xE98; // int32
            public const nint m_flForceToEnableMotion = 0xE9C; // float32
            public const nint m_bThrownByPlayer = 0xEA0; // bool
            public const nint m_bDroppedByPlayer = 0xEA1; // bool
            public const nint m_bTouchedByPlayer = 0xEA2; // bool
            public const nint m_bFirstCollisionAfterLaunch = 0xEA3; // bool
            public const nint m_iExploitableByPlayer = 0xEA4; // int32
            public const nint m_bHasBeenAwakened = 0xEA8; // bool
            public const nint m_bIsOverrideProp = 0xEA9; // bool
            public const nint m_fNextCheckDisableMotionContactsTime = 0xEAC; // GameTime_t
            public const nint m_iInitialGlowState = 0xEB0; // int32
            public const nint m_nGlowRange = 0xEB4; // int32
            public const nint m_nGlowRangeMin = 0xEB8; // int32
            public const nint m_glowColor = 0xEBC; // Color
            public const nint m_bForceNavIgnore = 0xEC0; // bool
            public const nint m_bNoNavmeshBlocker = 0xEC1; // bool
            public const nint m_bForceNpcExclude = 0xEC2; // bool
            public const nint m_bShouldAutoConvertBackFromDebris = 0xEC3; // bool
            public const nint m_bMuteImpactEffects = 0xEC4; // bool
            public const nint m_bAcceptDamageFromHeldObjects = 0xECC; // bool
            public const nint m_bEnableUseOutput = 0xECD; // bool
            public const nint m_bAwake = 0xECE; // bool
            public const nint m_nCollisionGroupOverride = 0xED0; // int32
        }
        // Parent: CPhysicsProp
        // Fields count: 3
        //
        // Metadata:
        // MNetworkExcludeByName
        // NetworkVarNames: m_ShardDesc (shard_model_desc_t)
        public static class CShatterGlassShardPhysics {
            public const nint m_bDebris = 0xED4; // bool
            public const nint m_hParentShard = 0xED8; // uint32
            public const nint m_ShardDesc = 0xEE0; // shard_model_desc_t
        }
        // Parent: CBaseFlex
        // Fields count: 9
        //
        // Metadata:
        // NetworkVarNames: m_AttributeManager (CAttributeContainer)
        // NetworkVarNames: m_OriginalOwnerXuidLow (uint32)
        // NetworkVarNames: m_OriginalOwnerXuidHigh (uint32)
        // NetworkVarNames: m_nFallbackPaintKit (int)
        // NetworkVarNames: m_nFallbackSeed (int)
        // NetworkVarNames: m_flFallbackWear (float)
        // NetworkVarNames: m_nFallbackStatTrak (int)
        public static class CEconEntity {
            public const nint m_AttributeManager = 0xC90; // CAttributeContainer
            public const nint m_OriginalOwnerXuidLow = 0xF58; // uint32
            public const nint m_OriginalOwnerXuidHigh = 0xF5C; // uint32
            public const nint m_nFallbackPaintKit = 0xF60; // int32
            public const nint m_nFallbackSeed = 0xF64; // int32
            public const nint m_flFallbackWear = 0xF68; // float32
            public const nint m_nFallbackStatTrak = 0xF6C; // int32
            public const nint m_hOldProvidee = 0xF70; // CHandle<CBaseEntity>
            public const nint m_iOldOwnerClass = 0xF74; // int32
        }
        // Parent: CBaseFlex
        // Fields count: 14
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
        public static class CBaseGrenade {
            public const nint m_OnPlayerPickup = 0xC88; // CEntityIOOutput
            public const nint m_OnExplode = 0xCB0; // CEntityIOOutput
            public const nint m_bHasWarnedAI = 0xCD8; // bool
            public const nint m_bIsSmokeGrenade = 0xCD9; // bool
            public const nint m_bIsLive = 0xCDA; // bool
            public const nint m_DmgRadius = 0xCDC; // float32
            public const nint m_flDetonateTime = 0xCE0; // GameTime_t
            public const nint m_flWarnAITime = 0xCE4; // float32
            public const nint m_flDamage = 0xCE8; // float32
            public const nint m_iszBounceSound = 0xCF0; // CUtlSymbolLarge
            public const nint m_ExplosionSound = 0xCF8; // CUtlString
            public const nint m_hThrower = 0xD04; // CHandle<CCSPlayerPawn>
            public const nint m_flNextAttack = 0xD1C; // GameTime_t
            public const nint m_hOriginalThrower = 0xD20; // CHandle<CCSPlayerPawn>
        }
        // Parent: CBaseAnimGraph
        // Fields count: 11
        //
        // Metadata:
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkExcludeByUserGroup
        // MNetworkOverride
        // MNetworkIncludeByName
        // NetworkVarNames: m_nViewModelIndex (uint32)
        // NetworkVarNames: m_nAnimationParity (uint32)
        // NetworkVarNames: m_flAnimationStartTime (float32)
        // NetworkVarNames: m_hWeapon (CHandle<CBasePlayerWeapon>)
        // NetworkVarNames: m_hControlPanel (CHandle<CBaseEntity>)
        public static class CBaseViewModel {
            public const nint m_vecLastFacing = 0xBF8; // Vector
            public const nint m_nViewModelIndex = 0xC04; // uint32
            public const nint m_nAnimationParity = 0xC08; // uint32
            public const nint m_flAnimationStartTime = 0xC0C; // float32
            public const nint m_hWeapon = 0xC10; // CHandle<CBasePlayerWeapon>
            public const nint m_sVMName = 0xC18; // CUtlSymbolLarge
            public const nint m_sAnimationPrefix = 0xC20; // CUtlSymbolLarge
            public const nint m_hOldLayerSequence = 0xC28; // HSequence
            public const nint m_oldLayer = 0xC2C; // int32
            public const nint m_oldLayerStartTime = 0xC30; // float32
            public const nint m_hControlPanel = 0xC34; // CHandle<CBaseEntity>
        }
        // Parent: CBaseAnimGraph
        // Fields count: 26
        //
        // Metadata:
        // NetworkVarNames: m_bBombTicking (bool)
        // NetworkVarNames: m_flC4Blow (GameTime_t)
        // NetworkVarNames: m_nBombSite (int)
        // NetworkVarNames: m_nSourceSoundscapeHash (int)
        // NetworkVarNames: m_bCannotBeDefused (bool)
        // NetworkVarNames: m_entitySpottedState (EntitySpottedState_t)
        // NetworkVarNames: m_bHasExploded (bool)
        // NetworkVarNames: m_flTimerLength (float)
        // NetworkVarNames: m_bBeingDefused (bool)
        // NetworkVarNames: m_flDefuseLength (float)
        // NetworkVarNames: m_flDefuseCountDown (GameTime_t)
        // NetworkVarNames: m_bBombDefused (bool)
        // NetworkVarNames: m_hBombDefuser (CHandle<CCSPlayerPawn>)
        // NetworkVarNames: m_hControlPanel (CHandle<CBaseEntity>)
        public static class CPlantedC4 {
            public const nint m_bBombTicking = 0xBF0; // bool
            public const nint m_flC4Blow = 0xBF4; // GameTime_t
            public const nint m_nBombSite = 0xBF8; // int32
            public const nint m_nSourceSoundscapeHash = 0xBFC; // int32
            public const nint m_OnBombDefused = 0xC00; // CEntityIOOutput
            public const nint m_OnBombBeginDefuse = 0xC28; // CEntityIOOutput
            public const nint m_OnBombDefuseAborted = 0xC50; // CEntityIOOutput
            public const nint m_bCannotBeDefused = 0xC78; // bool
            public const nint m_entitySpottedState = 0xC80; // EntitySpottedState_t
            public const nint m_nSpotRules = 0xC98; // int32
            public const nint m_bTrainingPlacedByPlayer = 0xC9C; // bool
            public const nint m_bHasExploded = 0xC9D; // bool
            public const nint m_flTimerLength = 0xCA0; // float32
            public const nint m_bBeingDefused = 0xCA4; // bool
            public const nint m_fLastDefuseTime = 0xCAC; // GameTime_t
            public const nint m_flDefuseLength = 0xCB4; // float32
            public const nint m_flDefuseCountDown = 0xCB8; // GameTime_t
            public const nint m_bBombDefused = 0xCBC; // bool
            public const nint m_hBombDefuser = 0xCC0; // CHandle<CCSPlayerPawn>
            public const nint m_hControlPanel = 0xCC4; // CHandle<CBaseEntity>
            public const nint m_iProgressBarTime = 0xCC8; // int32
            public const nint m_bVoiceAlertFired = 0xCCC; // bool
            public const nint m_bVoiceAlertPlayed = 0xCCD; // bool[4]
            public const nint m_flNextBotBeepTime = 0xCD4; // GameTime_t
            public const nint m_angCatchUpToPlayerEye = 0xCDC; // QAngle
            public const nint m_flLastSpinDetectionTime = 0xCE8; // GameTime_t
        }
        // Parent: CBaseGrenade
        // Fields count: 18
        //
        // Metadata:
        // NetworkVarNames: m_vInitialPosition (Vector)
        // NetworkVarNames: m_vInitialVelocity (Vector)
        // NetworkVarNames: m_nBounces (int)
        // NetworkVarNames: m_nExplodeEffectIndex (HParticleSystemDefinitionStrong)
        // NetworkVarNames: m_nExplodeEffectTickBegin (int)
        // NetworkVarNames: m_vecExplodeEffectOrigin (Vector)
        public static class CBaseCSGrenadeProjectile {
            public const nint m_vInitialPosition = 0xD24; // Vector
            public const nint m_vInitialVelocity = 0xD30; // Vector
            public const nint m_nBounces = 0xD3C; // int32
            public const nint m_nExplodeEffectIndex = 0xD40; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_nExplodeEffectTickBegin = 0xD48; // int32
            public const nint m_vecExplodeEffectOrigin = 0xD4C; // Vector
            public const nint m_flSpawnTime = 0xD58; // GameTime_t
            public const nint m_unOGSExtraFlags = 0xD5C; // uint8
            public const nint m_bDetonationRecorded = 0xD5D; // bool
            public const nint m_flDetonateTime = 0xD60; // GameTime_t
            public const nint m_nItemIndex = 0xD64; // uint16
            public const nint m_vecOriginalSpawnLocation = 0xD68; // Vector
            public const nint m_flLastBounceSoundTime = 0xD74; // GameTime_t
            public const nint m_vecGrenadeSpin = 0xD78; // RotationVector
            public const nint m_vecLastHitSurfaceNormal = 0xD84; // Vector
            public const nint m_nTicksAtZeroVelocity = 0xD90; // int32
            public const nint m_bHasEverHitPlayer = 0xD94; // bool
            public const nint m_bClearFromPlayers = 0xD95; // bool
        }
        // Parent: None
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_OwningPlayer (CHandle<CCSPlayerPawn>)
        // NetworkVarNames: m_KillingPlayer (CHandle<CCSPlayerPawn>)
        public static class CItemDogtags {
            public const nint m_OwningPlayer = 0xCC8; // CHandle<CCSPlayerPawn>
            public const nint m_KillingPlayer = 0xCCC; // CHandle<CCSPlayerPawn>
        }
        // Parent: CDynamicProp
        // Fields count: 34
        //
        // Metadata:
        // NetworkVarNames: m_AttributeManager (CAttributeContainer)
        // NetworkVarNames: m_OriginalOwnerXuidLow (uint32)
        // NetworkVarNames: m_OriginalOwnerXuidHigh (uint32)
        // NetworkVarNames: m_jumpedThisFrame (bool)
        // NetworkVarNames: m_leader (CHandle<CCSPlayerPawn>)
        public static class CChicken {
            public const nint m_AttributeManager = 0xE88; // CAttributeContainer
            public const nint m_OriginalOwnerXuidLow = 0x1150; // uint32
            public const nint m_OriginalOwnerXuidHigh = 0x1154; // uint32
            public const nint m_updateTimer = 0x1158; // CountdownTimer
            public const nint m_stuckAnchor = 0x1170; // Vector
            public const nint m_stuckTimer = 0x1180; // CountdownTimer
            public const nint m_collisionStuckTimer = 0x1198; // CountdownTimer
            public const nint m_isOnGround = 0x11B0; // bool
            public const nint m_vFallVelocity = 0x11B4; // Vector
            public const nint m_activity = 0x11C0; // ChickenActivity
            public const nint m_activityTimer = 0x11C8; // CountdownTimer
            public const nint m_turnRate = 0x11E0; // float32
            public const nint m_fleeFrom = 0x11E4; // CHandle<CBaseEntity>
            public const nint m_moveRateThrottleTimer = 0x11E8; // CountdownTimer
            public const nint m_startleTimer = 0x1200; // CountdownTimer
            public const nint m_vocalizeTimer = 0x1218; // CountdownTimer
            public const nint m_flWhenZombified = 0x1230; // GameTime_t
            public const nint m_jumpedThisFrame = 0x1234; // bool
            public const nint m_leader = 0x1238; // CHandle<CCSPlayerPawn>
            public const nint m_reuseTimer = 0x1240; // CountdownTimer
            public const nint m_hasBeenUsed = 0x1258; // bool
            public const nint m_jumpTimer = 0x1260; // CountdownTimer
            public const nint m_flLastJumpTime = 0x1278; // float32
            public const nint m_bInJump = 0x127C; // bool
            public const nint m_isWaitingForLeader = 0x127D; // bool
            public const nint m_repathTimer = 0x3288; // CountdownTimer
            public const nint m_inhibitDoorTimer = 0x32A0; // CountdownTimer
            public const nint m_inhibitObstacleAvoidanceTimer = 0x3330; // CountdownTimer
            public const nint m_vecPathGoal = 0x3350; // Vector
            public const nint m_flActiveFollowStartTime = 0x335C; // GameTime_t
            public const nint m_followMinuteTimer = 0x3360; // CountdownTimer
            public const nint m_vecLastEggPoopPosition = 0x3378; // Vector
            public const nint m_vecEggsPooped = 0x3388; // CUtlVector<CHandle<CBaseEntity>>
            public const nint m_BlockDirectionTimer = 0x33A8; // CountdownTimer
        }
        // Parent: CEconEntity
        // Fields count: 8
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
        public static class CBasePlayerWeapon {
            public const nint m_nNextPrimaryAttackTick = 0xF78; // GameTick_t
            public const nint m_flNextPrimaryAttackTickRatio = 0xF7C; // float32
            public const nint m_nNextSecondaryAttackTick = 0xF80; // GameTick_t
            public const nint m_flNextSecondaryAttackTickRatio = 0xF84; // float32
            public const nint m_iClip1 = 0xF88; // int32
            public const nint m_iClip2 = 0xF8C; // int32
            public const nint m_pReserveAmmo = 0xF90; // int32[2]
            public const nint m_OnPlayerUse = 0xF98; // CEntityIOOutput
        }
        // Parent: CRagdollProp
        // Fields count: 6
        //
        // Metadata:
        // NetworkVarNames: m_boneIndexAttached (uint32)
        // NetworkVarNames: m_ragdollAttachedObjectIndex (uint32)
        // NetworkVarNames: m_attachmentPointBoneSpace (Vector)
        // NetworkVarNames: m_attachmentPointRagdollSpace (Vector)
        public static class CRagdollPropAttached {
            public const nint m_boneIndexAttached = 0xD98; // uint32
            public const nint m_ragdollAttachedObjectIndex = 0xD9C; // uint32
            public const nint m_attachmentPointBoneSpace = 0xDA0; // Vector
            public const nint m_attachmentPointRagdollSpace = 0xDAC; // Vector
            public const nint m_bShouldDetach = 0xDB8; // bool
            public const nint m_bShouldDeleteAttachedActivationRecord = 0xDC8; // bool
        }
        // Parent: CBaseFlex
        // Fields count: 12
        //
        // Metadata:
        // MNetworkExcludeByUserGroup
        // NetworkVarNames: m_hMyWearables (CHandle<CEconWearable>)
        // NetworkVarNames: m_flFieldOfView (float)
        public static class CBaseCombatCharacter {
            public const nint m_bForceServerRagdoll = 0xC80; // bool
            public const nint m_hMyWearables = 0xC88; // CNetworkUtlVectorBase<CHandle<CEconWearable>>
            public const nint m_flFieldOfView = 0xCA0; // float32
            public const nint m_impactEnergyScale = 0xCA4; // float32
            public const nint m_LastHitGroup = 0xCA8; // HitGroup_t
            public const nint m_bApplyStressDamage = 0xCAC; // bool
            public const nint m_bloodColor = 0xCB0; // int32
            public const nint m_iDamageCount = 0xCF8; // int32
            public const nint m_pVecRelationships = 0xD00; // CUtlVector<RelationshipOverride_t>*
            public const nint m_strRelationships = 0xD08; // CUtlSymbolLarge
            public const nint m_eHull = 0xD10; // Hull_t
            public const nint m_nNavHullIdx = 0xD14; // uint32
        }
        // Parent: CBaseCombatCharacter
        // Fields count: 25
        //
        // Metadata:
        // MNetworkUserGroupProxy
        // MNetworkUserGroupProxy
        // MNetworkExcludeByUserGroup
        // MNetworkIncludeByUserGroup
        // MNetworkIncludeByUserGroup
        // MNetworkIncludeByUserGroup
        // MNetworkIncludeByName
        // MNetworkOverride
        // MNetworkOverride
        // MNetworkOverride
        // MNetworkExcludeByName
        // MNetworkExcludeByName
        // MNetworkExcludeByName
        // MNetworkExcludeByName
        // MNetworkExcludeByName
        // MNetworkExcludeByName
        // MNetworkExcludeByName
        // MNetworkExcludeByName
        // NetworkVarNames: m_pWeaponServices (CPlayer_WeaponServices*)
        // NetworkVarNames: m_pItemServices (CPlayer_ItemServices*)
        // NetworkVarNames: m_pAutoaimServices (CPlayer_AutoaimServices*)
        // NetworkVarNames: m_pObserverServices (CPlayer_ObserverServices*)
        // NetworkVarNames: m_pWaterServices (CPlayer_WaterServices*)
        // NetworkVarNames: m_pUseServices (CPlayer_UseServices*)
        // NetworkVarNames: m_pFlashlightServices (CPlayer_FlashlightServices*)
        // NetworkVarNames: m_pCameraServices (CPlayer_CameraServices*)
        // NetworkVarNames: m_pMovementServices (CPlayer_MovementServices*)
        // MNetworkUserGroupProxy
        // NetworkVarNames: m_ServerViewAngleChanges (ViewAngleServerChange_t)
        // NetworkVarNames: m_iHideHUD (uint32)
        // NetworkVarNames: m_skybox3d (sky3dparams_t)
        // NetworkVarNames: m_flDeathTime (GameTime_t)
        // NetworkVarNames: m_hController (CHandle<CBasePlayerController>)
        public static class CBasePlayerPawn {
            public const nint m_pWeaponServices = 0xD18; // CPlayer_WeaponServices*
            public const nint m_pItemServices = 0xD20; // CPlayer_ItemServices*
            public const nint m_pAutoaimServices = 0xD28; // CPlayer_AutoaimServices*
            public const nint m_pObserverServices = 0xD30; // CPlayer_ObserverServices*
            public const nint m_pWaterServices = 0xD38; // CPlayer_WaterServices*
            public const nint m_pUseServices = 0xD40; // CPlayer_UseServices*
            public const nint m_pFlashlightServices = 0xD48; // CPlayer_FlashlightServices*
            public const nint m_pCameraServices = 0xD50; // CPlayer_CameraServices*
            public const nint m_pMovementServices = 0xD58; // CPlayer_MovementServices*
            public const nint m_ServerViewAngleChanges = 0xD68; // CUtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
            public const nint m_nHighestGeneratedServerViewAngleChangeIndex = 0xDB8; // uint32
            public const nint v_angle = 0xDBC; // QAngle
            public const nint v_anglePrevious = 0xDC8; // QAngle
            public const nint m_iHideHUD = 0xDD4; // uint32
            public const nint m_skybox3d = 0xDD8; // sky3dparams_t
            public const nint m_fTimeLastHurt = 0xE68; // GameTime_t
            public const nint m_flDeathTime = 0xE6C; // GameTime_t
            public const nint m_fNextSuicideTime = 0xE70; // GameTime_t
            public const nint m_fInitHUD = 0xE74; // bool
            public const nint m_pExpresser = 0xE78; // CAI_Expresser*
            public const nint m_hController = 0xE80; // CHandle<CBasePlayerController>
            public const nint m_fHltvReplayDelay = 0xE88; // float32
            public const nint m_fHltvReplayEnd = 0xE8C; // float32
            public const nint m_iHltvReplayEntity = 0xE90; // CEntityIndex
            public const nint m_sndOpvarLatchData = 0xE98; // CUtlVector<sndopvarlatchdata_t>
        }
        // Parent: None
        // Fields count: 3
        //
        // Metadata:
        // MNetworkOverride
        // NetworkVarNames: m_bShouldIgnoreOffsetAndAccuracy (bool)
        // NetworkVarNames: m_nWeaponParity (uint32)
        public static class CCSGOViewModel {
            public const nint m_bShouldIgnoreOffsetAndAccuracy = 0xC38; // bool
            public const nint m_nWeaponParity = 0xC3C; // uint32
            public const nint m_nOldWeaponParity = 0xC40; // uint32
        }
        // Parent: CBasePlayerWeapon
        // Fields count: 62
        //
        // Metadata:
        // MNetworkExcludeByName
        // NetworkVarNames: m_flFireSequenceStartTime (float)
        // NetworkVarNames: m_nFireSequenceStartTimeChange (int)
        // NetworkVarNames: m_ePlayerFireEvent (PlayerAnimEvent_t)
        // NetworkVarNames: m_ePlayerFireEventAttackType (WeaponAttackType_t)
        // NetworkVarNames: m_iState (CSWeaponState_t)
        // NetworkVarNames: m_nViewModelIndex (uint32)
        // NetworkVarNames: m_flTimeWeaponIdle (GameTime_t)
        // NetworkVarNames: m_weaponMode (CSWeaponMode)
        // NetworkVarNames: m_fAccuracyPenalty (float)
        // NetworkVarNames: m_iRecoilIndex (int)
        // NetworkVarNames: m_flRecoilIndex (float)
        // NetworkVarNames: m_bBurstMode (bool)
        // NetworkVarNames: m_nPostponeFireReadyTicks (GameTick_t)
        // NetworkVarNames: m_flPostponeFireReadyFrac (float)
        // NetworkVarNames: m_bInReload (bool)
        // NetworkVarNames: m_bReloadVisuallyComplete (bool)
        // NetworkVarNames: m_flDroppedAtTime (GameTime_t)
        // NetworkVarNames: m_bIsHauledBack (bool)
        // NetworkVarNames: m_bSilencerOn (bool)
        // NetworkVarNames: m_flTimeSilencerSwitchComplete (GameTime_t)
        // NetworkVarNames: m_iOriginalTeamNumber (int)
        // NetworkVarNames: m_hPrevOwner (CHandle<CCSPlayerPawn>)
        // NetworkVarNames: m_nDropTick (GameTick_t)
        // NetworkVarNames: m_fLastShotTime (GameTime_t)
        // NetworkVarNames: m_iIronSightMode (int)
        // NetworkVarNames: m_iNumEmptyAttacks (int)
        public static class CCSWeaponBase {
            public const nint m_bRemoveable = 0xFE8; // bool
            public const nint m_flFireSequenceStartTime = 0xFF0; // float32
            public const nint m_nFireSequenceStartTimeChange = 0xFF4; // int32
            public const nint m_nFireSequenceStartTimeAck = 0xFF8; // int32
            public const nint m_ePlayerFireEvent = 0xFFC; // PlayerAnimEvent_t
            public const nint m_ePlayerFireEventAttackType = 0x1000; // WeaponAttackType_t
            public const nint m_seqIdle = 0x1004; // HSequence
            public const nint m_seqFirePrimary = 0x1008; // HSequence
            public const nint m_seqFireSecondary = 0x100C; // HSequence
            public const nint m_thirdPersonFireSequences = 0x1010; // CUtlVector<HSequence>
            public const nint m_hCurrentThirdPersonSequence = 0x1028; // HSequence
            public const nint m_nSilencerBoneIndex = 0x102C; // int32
            public const nint m_thirdPersonSequences = 0x1030; // HSequence[7]
            public const nint m_bPlayerAmmoStockOnPickup = 0x1058; // bool
            public const nint m_bRequireUseToTouch = 0x1059; // bool
            public const nint m_iState = 0x105C; // CSWeaponState_t
            public const nint m_flLastTimeInAir = 0x1060; // GameTime_t
            public const nint m_flLastDeployTime = 0x1064; // GameTime_t
            public const nint m_nLastEmptySoundCmdNum = 0x1068; // int32
            public const nint m_nViewModelIndex = 0x106C; // uint32
            public const nint m_bReloadsWithClips = 0x1070; // bool
            public const nint m_flTimeWeaponIdle = 0x1090; // GameTime_t
            public const nint m_bFireOnEmpty = 0x1094; // bool
            public const nint m_OnPlayerPickup = 0x1098; // CEntityIOOutput
            public const nint m_weaponMode = 0x10C0; // CSWeaponMode
            public const nint m_flTurningInaccuracyDelta = 0x10C4; // float32
            public const nint m_vecTurningInaccuracyEyeDirLast = 0x10C8; // Vector
            public const nint m_flTurningInaccuracy = 0x10D4; // float32
            public const nint m_fAccuracyPenalty = 0x10D8; // float32
            public const nint m_flLastAccuracyUpdateTime = 0x10DC; // GameTime_t
            public const nint m_fAccuracySmoothedForZoom = 0x10E0; // float32
            public const nint m_fScopeZoomEndTime = 0x10E4; // GameTime_t
            public const nint m_iRecoilIndex = 0x10E8; // int32
            public const nint m_flRecoilIndex = 0x10EC; // float32
            public const nint m_bBurstMode = 0x10F0; // bool
            public const nint m_nPostponeFireReadyTicks = 0x10F4; // GameTick_t
            public const nint m_flPostponeFireReadyFrac = 0x10F8; // float32
            public const nint m_bInReload = 0x10FC; // bool
            public const nint m_bReloadVisuallyComplete = 0x10FD; // bool
            public const nint m_flDroppedAtTime = 0x1100; // GameTime_t
            public const nint m_bIsHauledBack = 0x1104; // bool
            public const nint m_bSilencerOn = 0x1105; // bool
            public const nint m_flTimeSilencerSwitchComplete = 0x1108; // GameTime_t
            public const nint m_iOriginalTeamNumber = 0x110C; // int32
            public const nint m_flNextAttackRenderTimeOffset = 0x1110; // float32
            public const nint m_bCanBePickedUp = 0x1128; // bool
            public const nint m_bUseCanOverrideNextOwnerTouchTime = 0x1129; // bool
            public const nint m_nextOwnerTouchTime = 0x112C; // GameTime_t
            public const nint m_nextPrevOwnerTouchTime = 0x1130; // GameTime_t
            public const nint m_hPrevOwner = 0x1134; // CHandle<CCSPlayerPawn>
            public const nint m_nDropTick = 0x1138; // GameTick_t
            public const nint m_donated = 0x115C; // bool
            public const nint m_fLastShotTime = 0x1160; // GameTime_t
            public const nint m_bWasOwnedByCT = 0x1164; // bool
            public const nint m_bWasOwnedByTerrorist = 0x1165; // bool
            public const nint m_bFiredOutOfAmmoEvent = 0x1166; // bool
            public const nint m_numRemoveUnownedWeaponThink = 0x1168; // int32
            public const nint m_IronSightController = 0x1170; // CIronSightController
            public const nint m_iIronSightMode = 0x1188; // int32
            public const nint m_flLastLOSTraceFailureTime = 0x118C; // GameTime_t
            public const nint m_iNumEmptyAttacks = 0x1190; // int32
            public const nint m_flWatTickOffset = 0x1194; // float32
        }
        // Parent: CCSWeaponBase
        // Fields count: 9
        //
        // Metadata:
        // NetworkVarNames: m_zoomLevel (int)
        // NetworkVarNames: m_iBurstShotsRemaining (int)
        // NetworkVarNames: m_bNeedsBoltAction (bool)
        public static class CCSWeaponBaseGun {
            public const nint m_zoomLevel = 0x1198; // int32
            public const nint m_iBurstShotsRemaining = 0x119C; // int32
            public const nint m_silencedModelIndex = 0x11A8; // int32
            public const nint m_inPrecache = 0x11AC; // bool
            public const nint m_bNeedsBoltAction = 0x11AD; // bool
            public const nint m_bSkillReloadAvailable = 0x11AE; // bool
            public const nint m_bSkillReloadLiftedReloadKey = 0x11AF; // bool
            public const nint m_bSkillBoltInterruptAvailable = 0x11B0; // bool
            public const nint m_bSkillBoltLiftedFireKey = 0x11B1; // bool
        }
        // Parent: CCSWeaponBase
        // Fields count: 11
        //
        // Metadata:
        // NetworkVarNames: m_bStartedArming (bool)
        // NetworkVarNames: m_fArmedTime (GameTime_t)
        // NetworkVarNames: m_bBombPlacedAnimation (bool)
        // NetworkVarNames: m_bIsPlantingViaUse (bool)
        // NetworkVarNames: m_entitySpottedState (EntitySpottedState_t)
        public static class CC4 {
            public const nint m_vecLastValidPlayerHeldPosition = 0x1198; // Vector
            public const nint m_vecLastValidDroppedPosition = 0x11A4; // Vector
            public const nint m_bDoValidDroppedPositionCheck = 0x11B0; // bool
            public const nint m_bStartedArming = 0x11B1; // bool
            public const nint m_fArmedTime = 0x11B4; // GameTime_t
            public const nint m_bBombPlacedAnimation = 0x11B8; // bool
            public const nint m_bIsPlantingViaUse = 0x11B9; // bool
            public const nint m_entitySpottedState = 0x11C0; // EntitySpottedState_t
            public const nint m_nSpotRules = 0x11D8; // int32
            public const nint m_bPlayedArmingBeeps = 0x11DC; // bool[7]
            public const nint m_bBombPlanted = 0x11E3; // bool
        }
        // Parent: CCSWeaponBaseGun
        // Fields count: 1
        //
        // Metadata:
        // NetworkVarNames: m_fFireTime (GameTime_t)
        public static class CWeaponTaser {
            public const nint m_fFireTime = 0x11B4; // GameTime_t
        }
        // Parent: CCSWeaponBaseGun
        // Fields count: 3
        //
        // Metadata:
        // NetworkVarNames: m_flDisplayHealth (float)
        public static class CWeaponShield {
            public const nint m_flBulletDamageAbsorbed = 0x11B4; // float32
            public const nint m_flLastBulletHitSoundTime = 0x11B8; // GameTime_t
            public const nint m_flDisplayHealth = 0x11BC; // float32
        }
        // Parent: CBaseCSGrenadeProjectile
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_bIsIncGrenade (bool)
        public static class CMolotovProjectile {
            public const nint m_bIsIncGrenade = 0xD96; // bool
            public const nint m_bDetonated = 0xDA0; // bool
            public const nint m_stillTimer = 0xDA8; // IntervalTimer
            public const nint m_bHasBouncedOffPlayer = 0xE88; // bool
        }
        // Parent: CBaseCSGrenadeProjectile
        // Fields count: 4
        //
        // Metadata:
        // NetworkVarNames: m_nDecoyShotTick (int)
        public static class CDecoyProjectile {
            public const nint m_nDecoyShotTick = 0xDA0; // int32
            public const nint m_shotsRemaining = 0xDA4; // int32
            public const nint m_fExpireTime = 0xDA8; // GameTime_t
            public const nint m_decoyWeaponDefIndex = 0xDB8; // uint16
        }
        // Parent: CBaseCSGrenadeProjectile
        // Fields count: 8
        //
        // Metadata:
        // NetworkVarNames: m_nSmokeEffectTickBegin (int)
        // NetworkVarNames: m_bDidSmokeEffect (bool)
        // NetworkVarNames: m_nRandomSeed (int)
        // NetworkVarNames: m_vSmokeColor (Vector)
        // NetworkVarNames: m_vSmokeDetonationPos (Vector)
        // NetworkVarNames: m_VoxelFrameData (CUtlVector<uint8>)
        public static class CSmokeGrenadeProjectile {
            public const nint m_nSmokeEffectTickBegin = 0xDB0; // int32
            public const nint m_bDidSmokeEffect = 0xDB4; // bool
            public const nint m_nRandomSeed = 0xDB8; // int32
            public const nint m_vSmokeColor = 0xDBC; // Vector
            public const nint m_vSmokeDetonationPos = 0xDC8; // Vector
            public const nint m_VoxelFrameData = 0xDD8; // CUtlVector<uint8>
            public const nint m_flLastBounce = 0xDF0; // GameTime_t
            public const nint m_fllastSimulationTime = 0xDF4; // GameTime_t
        }
        // Parent: CCSWeaponBase
        // Fields count: 13
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
        public static class CBaseCSGrenade {
            public const nint m_bRedraw = 0x1198; // bool
            public const nint m_bIsHeldByPlayer = 0x1199; // bool
            public const nint m_bPinPulled = 0x119A; // bool
            public const nint m_bJumpThrow = 0x119B; // bool
            public const nint m_bThrowAnimating = 0x119C; // bool
            public const nint m_fThrowTime = 0x11A0; // GameTime_t
            public const nint m_flThrowStrength = 0x11A4; // float32
            public const nint m_flThrowStrengthApproach = 0x11A8; // float32
            public const nint m_fDropTime = 0x11AC; // GameTime_t
            public const nint m_bJustPulledPin = 0x11B0; // bool
            public const nint m_nNextHoldTick = 0x11B4; // GameTick_t
            public const nint m_flNextHoldFrac = 0x11B8; // float32
            public const nint m_hSwitchToWeaponAfterThrow = 0x11BC; // CHandle<CCSWeaponBase>
        }
        // Parent: CCSWeaponBase
        // Fields count: 2
        //
        // Metadata:
        // NetworkVarNames: m_SequenceCompleteTimer (CountdownTimer)
        // NetworkVarNames: m_bRedraw (bool)
        public static class CWeaponBaseItem {
            public const nint m_SequenceCompleteTimer = 0x1198; // CountdownTimer
            public const nint m_bRedraw = 0x11B0; // bool
        }
        // Parent: CCSWeaponBase
        // Fields count: 7
        //
        // Metadata:
        // NetworkVarNames: m_bPlayingUninterruptableAct (bool)
        // NetworkVarNames: m_nUninterruptableActivity (PlayerAnimEvent_t)
        public static class CFists {
            public const nint m_bPlayingUninterruptableAct = 0x1198; // bool
            public const nint m_nUninterruptableActivity = 0x119C; // PlayerAnimEvent_t
            public const nint m_bRestorePrevWep = 0x11A0; // bool
            public const nint m_hWeaponBeforePrevious = 0x11A4; // CHandle<CBasePlayerWeapon>
            public const nint m_hWeaponPrevious = 0x11A8; // CHandle<CBasePlayerWeapon>
            public const nint m_bDelayedHardPunchIncoming = 0x11AC; // bool
            public const nint m_bDestroyAfterTaunt = 0x11AD; // bool
        }
        // Parent: CBasePlayerPawn
        // Fields count: 136
        //
        // Metadata:
        // NetworkVarNames: m_CTouchExpansionComponent (CTouchExpansionComponent::Storage_t)
        // MNetworkExcludeByName
        // MNetworkExcludeByName
        // MNetworkExcludeByUserGroup
        // MNetworkExcludeByName
        // MNetworkExcludeByName
        // NetworkVarNames: m_pPingServices (CCSPlayer_PingServices*)
        // NetworkVarNames: m_pViewModelServices (CPlayer_ViewModelServices*)
        // NetworkVarNames: m_hOriginalController (CHandle<CCSPlayerController>)
        // NetworkVarNames: m_entitySpottedState (EntitySpottedState_t)
        // NetworkVarNames: m_iPlayerState (CSPlayerState)
        // NetworkVarNames: m_bIsScoped (bool)
        // NetworkVarNames: m_bIsWalking (bool)
        // NetworkVarNames: m_bResumeZoom (bool)
        // NetworkVarNames: m_bIsDefusing (bool)
        // NetworkVarNames: m_bIsGrabbingHostage (bool)
        // NetworkVarNames: m_iBlockingUseActionInProgress (CSPlayerBlockingUseAction_t)
        // NetworkVarNames: m_fImmuneToGunGameDamageTime (GameTime_t)
        // NetworkVarNames: m_bGunGameImmunity (bool)
        // NetworkVarNames: m_GunGameImmunityColor (Color)
        // NetworkVarNames: m_fMolotovDamageTime (float)
        // NetworkVarNames: m_bHasMovedSinceSpawn (bool)
        // NetworkVarNames: m_bCanMoveDuringFreezePeriod (bool)
        // NetworkVarNames: m_flGuardianTooFarDistFrac (float)
        // NetworkVarNames: m_flDetectedByEnemySensorTime (GameTime_t)
        // NetworkVarNames: m_nHeavyAssaultSuitCooldownRemaining (int)
        // NetworkVarNames: m_flEmitSoundTime (GameTime_t)
        // NetworkVarNames: m_bHasNightVision (bool)
        // NetworkVarNames: m_bNightVisionOn (bool)
        // NetworkVarNames: m_bInNoDefuseArea (bool)
        // NetworkVarNames: m_bKilledByTaser (bool)
        // NetworkVarNames: m_iMoveState (int)
        // NetworkVarNames: m_nWhichBombZone (int)
        // NetworkVarNames: m_iDirection (int)
        // NetworkVarNames: m_iShotsFired (int)
        // NetworkVarNames: m_ArmorValue (int32)
        // NetworkVarNames: m_flVelocityModifier (float)
        // NetworkVarNames: m_flHitHeading (float)
        // NetworkVarNames: m_nHitBodyPart (int)
        // NetworkVarNames: m_flFlashDuration (float)
        // NetworkVarNames: m_flFlashMaxAlpha (float)
        // NetworkVarNames: m_flProgressBarStartTime (float)
        // NetworkVarNames: m_iProgressBarDuration (int)
        // NetworkVarNames: m_bWaitForNoAttack (bool)
        // NetworkVarNames: m_flLowerBodyYawTarget (float)
        // NetworkVarNames: m_bStrafing (bool)
        // NetworkVarNames: m_thirdPersonHeading (QAngle)
        // NetworkVarNames: m_flSlopeDropOffset (float)
        // NetworkVarNames: m_flSlopeDropHeight (float)
        // NetworkVarNames: m_vHeadConstraintOffset (Vector)
        // NetworkVarNames: m_angEyeAngles (QAngle)
        // NetworkVarNames: m_bHideTargetID (bool)
        // NetworkVarNames: m_bHud_MiniScoreHidden (bool)
        // NetworkVarNames: m_bHud_RadarHidden (bool)
        // NetworkVarNames: m_nLastKillerIndex (CEntityIndex)
        // NetworkVarNames: m_nLastConcurrentKilled (int)
        // NetworkVarNames: m_nDeathCamMusic (int)
        // NetworkVarNames: m_iAddonBits (int)
        // NetworkVarNames: m_iPrimaryAddon (int)
        // NetworkVarNames: m_iSecondaryAddon (int)
        // NetworkVarNames: m_vecPlayerPatchEconIndices (uint32)
        // NetworkVarNames: m_unCurrentEquipmentValue (uint16)
        // NetworkVarNames: m_unRoundStartEquipmentValue (uint16)
        // NetworkVarNames: m_unFreezetimeEndEquipmentValue (uint16)
        // NetworkVarNames: m_nSurvivalTeamNumber (int)
        // NetworkVarNames: m_bKilledByHeadshot (bool)
        public static class CCSPlayerPawnBase {
            public const nint m_CTouchExpansionComponent = 0xEC8; // CTouchExpansionComponent
            public const nint m_pPingServices = 0xF18; // CCSPlayer_PingServices*
            public const nint m_pViewModelServices = 0xF20; // CPlayer_ViewModelServices*
            public const nint m_iDisplayHistoryBits = 0xF28; // uint32
            public const nint m_flLastAttackedTeammate = 0xF2C; // float32
            public const nint m_hOriginalController = 0xF30; // CHandle<CCSPlayerController>
            public const nint m_blindUntilTime = 0xF34; // GameTime_t
            public const nint m_blindStartTime = 0xF38; // GameTime_t
            public const nint m_allowAutoFollowTime = 0xF3C; // GameTime_t
            public const nint m_entitySpottedState = 0xF40; // EntitySpottedState_t
            public const nint m_nSpotRules = 0xF58; // int32
            public const nint m_iPlayerState = 0xF5C; // CSPlayerState
            public const nint m_chickenIdleSoundTimer = 0xF68; // CountdownTimer
            public const nint m_chickenJumpSoundTimer = 0xF80; // CountdownTimer
            public const nint m_vecLastBookmarkedPosition = 0x1038; // Vector
            public const nint m_flLastDistanceTraveledNotice = 0x1044; // float32
            public const nint m_flAccumulatedDistanceTraveled = 0x1048; // float32
            public const nint m_flLastFriendlyFireDamageReductionRatio = 0x104C; // float32
            public const nint m_bRespawning = 0x1050; // bool
            public const nint m_nLastPickupPriority = 0x1054; // int32
            public const nint m_flLastPickupPriorityTime = 0x1058; // float32
            public const nint m_bIsScoped = 0x105C; // bool
            public const nint m_bIsWalking = 0x105D; // bool
            public const nint m_bResumeZoom = 0x105E; // bool
            public const nint m_bIsDefusing = 0x105F; // bool
            public const nint m_bIsGrabbingHostage = 0x1060; // bool
            public const nint m_iBlockingUseActionInProgress = 0x1064; // CSPlayerBlockingUseAction_t
            public const nint m_fImmuneToGunGameDamageTime = 0x1068; // GameTime_t
            public const nint m_bGunGameImmunity = 0x106C; // bool
            public const nint m_GunGameImmunityColor = 0x106D; // Color
            public const nint m_fMolotovDamageTime = 0x1074; // float32
            public const nint m_bHasMovedSinceSpawn = 0x1078; // bool
            public const nint m_bCanMoveDuringFreezePeriod = 0x1079; // bool
            public const nint m_flGuardianTooFarDistFrac = 0x107C; // float32
            public const nint m_flNextGuardianTooFarHurtTime = 0x1080; // float32
            public const nint m_flDetectedByEnemySensorTime = 0x1084; // GameTime_t
            public const nint m_flDealtDamageToEnemyMostRecentTimestamp = 0x1088; // float32
            public const nint m_flLastEquippedHelmetTime = 0x108C; // GameTime_t
            public const nint m_flLastEquippedArmorTime = 0x1090; // GameTime_t
            public const nint m_nHeavyAssaultSuitCooldownRemaining = 0x1094; // int32
            public const nint m_bResetArmorNextSpawn = 0x1098; // bool
            public const nint m_flLastBumpMineBumpTime = 0x109C; // GameTime_t
            public const nint m_flEmitSoundTime = 0x10A0; // GameTime_t
            public const nint m_iNumSpawns = 0x10A4; // int32
            public const nint m_iShouldHaveCash = 0x10A8; // int32
            public const nint m_flIdleTimeSinceLastAction = 0x10B0; // float32
            public const nint m_flNameChangeHistory = 0x10B4; // float32[5]
            public const nint m_fLastGivenDefuserTime = 0x10C8; // float32
            public const nint m_fLastGivenBombTime = 0x10CC; // float32
            public const nint m_bHasNightVision = 0x10D0; // bool
            public const nint m_bNightVisionOn = 0x10D1; // bool
            public const nint m_fNextRadarUpdateTime = 0x10D4; // float32
            public const nint m_flLastMoneyUpdateTime = 0x10D8; // float32
            public const nint m_MenuStringBuffer = 0x10DC; // char[1024]
            public const nint m_fIntroCamTime = 0x14DC; // float32
            public const nint m_nMyCollisionGroup = 0x14E0; // int32
            public const nint m_bInNoDefuseArea = 0x14E4; // bool
            public const nint m_bKilledByTaser = 0x14E5; // bool
            public const nint m_iMoveState = 0x14E8; // int32
            public const nint m_grenadeParameterStashTime = 0x14EC; // GameTime_t
            public const nint m_bGrenadeParametersStashed = 0x14F0; // bool
            public const nint m_angStashedShootAngles = 0x14F4; // QAngle
            public const nint m_vecStashedGrenadeThrowPosition = 0x1500; // Vector
            public const nint m_vecStashedVelocity = 0x150C; // Vector
            public const nint m_angShootAngleHistory = 0x1518; // QAngle[2]
            public const nint m_vecThrowPositionHistory = 0x1530; // Vector[2]
            public const nint m_vecVelocityHistory = 0x1548; // Vector[2]
            public const nint m_bDiedAirborne = 0x1560; // bool
            public const nint m_iBombSiteIndex = 0x1564; // CEntityIndex
            public const nint m_nWhichBombZone = 0x1568; // int32
            public const nint m_bInBombZoneTrigger = 0x156C; // bool
            public const nint m_bWasInBombZoneTrigger = 0x156D; // bool
            public const nint m_iDirection = 0x1570; // int32
            public const nint m_iShotsFired = 0x1574; // int32
            public const nint m_ArmorValue = 0x1578; // int32
            public const nint m_flFlinchStack = 0x157C; // float32
            public const nint m_flVelocityModifier = 0x1580; // float32
            public const nint m_flHitHeading = 0x1584; // float32
            public const nint m_nHitBodyPart = 0x1588; // int32
            public const nint m_iHostagesKilled = 0x158C; // int32
            public const nint m_vecTotalBulletForce = 0x1590; // Vector
            public const nint m_flFlashDuration = 0x159C; // float32
            public const nint m_flFlashMaxAlpha = 0x15A0; // float32
            public const nint m_flProgressBarStartTime = 0x15A4; // float32
            public const nint m_iProgressBarDuration = 0x15A8; // int32
            public const nint m_bWaitForNoAttack = 0x15AC; // bool
            public const nint m_flLowerBodyYawTarget = 0x15B0; // float32
            public const nint m_bStrafing = 0x15B4; // bool
            public const nint m_lastStandingPos = 0x15B8; // Vector
            public const nint m_ignoreLadderJumpTime = 0x15C4; // float32
            public const nint m_ladderSurpressionTimer = 0x15C8; // CountdownTimer
            public const nint m_lastLadderNormal = 0x15E0; // Vector
            public const nint m_lastLadderPos = 0x15EC; // Vector
            public const nint m_thirdPersonHeading = 0x15F8; // QAngle
            public const nint m_flSlopeDropOffset = 0x1604; // float32
            public const nint m_flSlopeDropHeight = 0x1608; // float32
            public const nint m_vHeadConstraintOffset = 0x160C; // Vector
            public const nint m_iLastWeaponFireUsercmd = 0x1620; // int32
            public const nint m_angEyeAngles = 0x1624; // QAngle
            public const nint m_bVCollisionInitted = 0x1630; // bool
            public const nint m_storedSpawnPosition = 0x1634; // Vector
            public const nint m_storedSpawnAngle = 0x1640; // QAngle
            public const nint m_bIsSpawning = 0x164C; // bool
            public const nint m_bHideTargetID = 0x164D; // bool
            public const nint m_nNumDangerZoneDamageHits = 0x1650; // int32
            public const nint m_bHud_MiniScoreHidden = 0x1654; // bool
            public const nint m_bHud_RadarHidden = 0x1655; // bool
            public const nint m_nLastKillerIndex = 0x1658; // CEntityIndex
            public const nint m_nLastConcurrentKilled = 0x165C; // int32
            public const nint m_nDeathCamMusic = 0x1660; // int32
            public const nint m_iAddonBits = 0x1664; // int32
            public const nint m_iPrimaryAddon = 0x1668; // int32
            public const nint m_iSecondaryAddon = 0x166C; // int32
            public const nint m_currentDeafnessFilter = 0x1670; // CUtlStringToken
            public const nint m_NumEnemiesKilledThisSpawn = 0x1674; // int32
            public const nint m_NumEnemiesKilledThisRound = 0x1678; // int32
            public const nint m_NumEnemiesAtRoundStart = 0x167C; // int32
            public const nint m_wasNotKilledNaturally = 0x1680; // bool
            public const nint m_vecPlayerPatchEconIndices = 0x1684; // uint32[5]
            public const nint m_iDeathFlags = 0x1698; // int32
            public const nint m_hPet = 0x169C; // CHandle<CChicken>
            public const nint m_unCurrentEquipmentValue = 0x1868; // uint16
            public const nint m_unRoundStartEquipmentValue = 0x186A; // uint16
            public const nint m_unFreezetimeEndEquipmentValue = 0x186C; // uint16
            public const nint m_nSurvivalTeamNumber = 0x1870; // int32
            public const nint m_bHasDeathInfo = 0x1874; // bool
            public const nint m_flDeathInfoTime = 0x1878; // float32
            public const nint m_vecDeathInfoOrigin = 0x187C; // Vector
            public const nint m_bKilledByHeadshot = 0x1888; // bool
            public const nint m_LastHitBox = 0x188C; // int32
            public const nint m_LastHealth = 0x1890; // int32
            public const nint m_flLastCollisionCeiling = 0x1894; // float32
            public const nint m_flLastCollisionCeilingChangeTime = 0x1898; // float32
            public const nint m_pBot = 0x18A0; // CCSBot*
            public const nint m_bBotAllowActive = 0x18A8; // bool
            public const nint m_bCommittingSuicideOnTeamChange = 0x18A9; // bool
        }
        // Parent: CCSPlayerPawnBase
        // Fields count: 0
        //
        // Metadata:
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
        public static class CCSObserverPawn {
        }
        // Parent: CCSPlayerPawnBase
        // Fields count: 49
        //
        // Metadata:
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
        // NetworkVarNames: m_pBulletServices (CCSPlayer_BulletServices*)
        // NetworkVarNames: m_pHostageServices (CCSPlayer_HostageServices*)
        // NetworkVarNames: m_pBuyServices (CCSPlayer_BuyServices*)
        // NetworkVarNames: m_pActionTrackingServices (CCSPlayer_ActionTrackingServices*)
        // NetworkVarNames: m_bHasFemaleVoice (bool)
        // NetworkVarNames: m_szLastPlaceName (char)
        // NetworkVarNames: m_bInBuyZone (bool)
        // NetworkVarNames: m_bInHostageRescueZone (bool)
        // NetworkVarNames: m_bInBombZone (bool)
        // NetworkVarNames: m_iRetakesOffering (int)
        // NetworkVarNames: m_iRetakesOfferingCard (int)
        // NetworkVarNames: m_bRetakesHasDefuseKit (bool)
        // NetworkVarNames: m_bRetakesMVPLastRound (bool)
        // NetworkVarNames: m_iRetakesMVPBoostItem (int)
        // NetworkVarNames: m_RetakesMVPBoostExtraUtility (loadout_slot_t)
        // NetworkVarNames: m_flHealthShotBoostExpirationTime (GameTime_t)
        // NetworkVarNames: m_aimPunchAngle (QAngle)
        // NetworkVarNames: m_aimPunchAngleVel (QAngle)
        // NetworkVarNames: m_aimPunchTickBase (int)
        // NetworkVarNames: m_aimPunchTickFraction (float)
        // NetworkVarNames: m_bIsBuyMenuOpen (bool)
        // NetworkVarNames: m_flTimeOfLastInjury (GameTime_t)
        // NetworkVarNames: m_flNextSprayDecalTime (GameTime_t)
        // NetworkVarNames: m_nRagdollDamageBone (int)
        // NetworkVarNames: m_vRagdollDamageForce (Vector)
        // NetworkVarNames: m_vRagdollDamagePosition (Vector)
        // NetworkVarNames: m_szRagdollDamageWeaponName (char)
        // NetworkVarNames: m_bRagdollDamageHeadshot (bool)
        // NetworkVarNames: m_vRagdollServerOrigin (Vector)
        // NetworkVarNames: m_EconGloves (CEconItemView)
        // NetworkVarNames: m_nEconGlovesChanged (uint8)
        // NetworkVarNames: m_qDeathEyeAngles (QAngle)
        public static class CCSPlayerPawn {
            public const nint m_pBulletServices = 0x18B0; // CCSPlayer_BulletServices*
            public const nint m_pHostageServices = 0x18B8; // CCSPlayer_HostageServices*
            public const nint m_pBuyServices = 0x18C0; // CCSPlayer_BuyServices*
            public const nint m_pActionTrackingServices = 0x18C8; // CCSPlayer_ActionTrackingServices*
            public const nint m_pRadioServices = 0x18D0; // CCSPlayer_RadioServices*
            public const nint m_pDamageReactServices = 0x18D8; // CCSPlayer_DamageReactServices*
            public const nint m_nCharacterDefIndex = 0x18E0; // uint16
            public const nint m_hPreviousModel = 0x18E8; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_bHasFemaleVoice = 0x18F0; // bool
            public const nint m_strVOPrefix = 0x18F8; // CUtlString
            public const nint m_szLastPlaceName = 0x1900; // char[18]
            public const nint m_bInHostageResetZone = 0x19C0; // bool
            public const nint m_bInBuyZone = 0x19C1; // bool
            public const nint m_bWasInBuyZone = 0x19C2; // bool
            public const nint m_bInHostageRescueZone = 0x19C3; // bool
            public const nint m_bInBombZone = 0x19C4; // bool
            public const nint m_bWasInHostageRescueZone = 0x19C5; // bool
            public const nint m_iRetakesOffering = 0x19C8; // int32
            public const nint m_iRetakesOfferingCard = 0x19CC; // int32
            public const nint m_bRetakesHasDefuseKit = 0x19D0; // bool
            public const nint m_bRetakesMVPLastRound = 0x19D1; // bool
            public const nint m_iRetakesMVPBoostItem = 0x19D4; // int32
            public const nint m_RetakesMVPBoostExtraUtility = 0x19D8; // loadout_slot_t
            public const nint m_flHealthShotBoostExpirationTime = 0x19DC; // GameTime_t
            public const nint m_flLandseconds = 0x19E0; // float32
            public const nint m_aimPunchAngle = 0x19E4; // QAngle
            public const nint m_aimPunchAngleVel = 0x19F0; // QAngle
            public const nint m_aimPunchTickBase = 0x19FC; // int32
            public const nint m_aimPunchTickFraction = 0x1A00; // float32
            public const nint m_aimPunchCache = 0x1A08; // CUtlVector<QAngle>
            public const nint m_bIsBuyMenuOpen = 0x1A20; // bool
            public const nint m_xLastHeadBoneTransform = 0x2060; // CTransform
            public const nint m_bLastHeadBoneTransformIsValid = 0x2080; // bool
            public const nint m_lastLandTime = 0x2084; // GameTime_t
            public const nint m_bOnGroundLastTick = 0x2088; // bool
            public const nint m_iPlayerLocked = 0x208C; // int32
            public const nint m_flTimeOfLastInjury = 0x2094; // GameTime_t
            public const nint m_flNextSprayDecalTime = 0x2098; // GameTime_t
            public const nint m_bNextSprayDecalTimeExpedited = 0x209C; // bool
            public const nint m_nRagdollDamageBone = 0x20A0; // int32
            public const nint m_vRagdollDamageForce = 0x20A4; // Vector
            public const nint m_vRagdollDamagePosition = 0x20B0; // Vector
            public const nint m_szRagdollDamageWeaponName = 0x20BC; // char[64]
            public const nint m_bRagdollDamageHeadshot = 0x20FC; // bool
            public const nint m_vRagdollServerOrigin = 0x2100; // Vector
            public const nint m_EconGloves = 0x2110; // CEconItemView
            public const nint m_nEconGlovesChanged = 0x2388; // uint8
            public const nint m_qDeathEyeAngles = 0x238C; // QAngle
            public const nint m_bSkipOneHeadConstraintUpdate = 0x2398; // bool
        }
        // Parent: None
        // Fields count: 39
        //
        // Metadata:
        // NetworkVarNames: m_entitySpottedState (EntitySpottedState_t)
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // NetworkVarNames: m_vel (Vector)
        // NetworkVarNames: m_isRescued (bool)
        // NetworkVarNames: m_jumpedThisFrame (bool)
        // NetworkVarNames: m_nHostageState (int)
        // NetworkVarNames: m_leader (CHandle<CBaseEntity>)
        // NetworkVarNames: m_reuseTimer (CountdownTimer)
        // NetworkVarNames: m_bHandsHaveBeenCut (bool)
        // NetworkVarNames: m_hHostageGrabber (CHandle<CCSPlayerPawn>)
        // NetworkVarNames: m_flRescueStartTime (GameTime_t)
        // NetworkVarNames: m_flGrabSuccessTime (GameTime_t)
        // NetworkVarNames: m_flDropStartTime (GameTime_t)
        public static class CHostage {
            public const nint m_OnHostageBeginGrab = 0xD30; // CEntityIOOutput
            public const nint m_OnFirstPickedUp = 0xD58; // CEntityIOOutput
            public const nint m_OnDroppedNotRescued = 0xD80; // CEntityIOOutput
            public const nint m_OnRescued = 0xDA8; // CEntityIOOutput
            public const nint m_entitySpottedState = 0xDD0; // EntitySpottedState_t
            public const nint m_nSpotRules = 0xDE8; // int32
            public const nint m_uiHostageSpawnExclusionGroupMask = 0xDEC; // uint32
            public const nint m_nHostageSpawnRandomFactor = 0xDF0; // uint32
            public const nint m_bRemove = 0xDF4; // bool
            public const nint m_vel = 0xDF8; // Vector
            public const nint m_isRescued = 0xE04; // bool
            public const nint m_jumpedThisFrame = 0xE05; // bool
            public const nint m_nHostageState = 0xE08; // int32
            public const nint m_leader = 0xE0C; // CHandle<CBaseEntity>
            public const nint m_lastLeader = 0xE10; // CHandle<CCSPlayerPawnBase>
            public const nint m_reuseTimer = 0xE18; // CountdownTimer
            public const nint m_hasBeenUsed = 0xE30; // bool
            public const nint m_accel = 0xE34; // Vector
            public const nint m_isRunning = 0xE40; // bool
            public const nint m_isCrouching = 0xE41; // bool
            public const nint m_jumpTimer = 0xE48; // CountdownTimer
            public const nint m_isWaitingForLeader = 0xE60; // bool
            public const nint m_repathTimer = 0x2E70; // CountdownTimer
            public const nint m_inhibitDoorTimer = 0x2E88; // CountdownTimer
            public const nint m_inhibitObstacleAvoidanceTimer = 0x2F18; // CountdownTimer
            public const nint m_wiggleTimer = 0x2F38; // CountdownTimer
            public const nint m_isAdjusted = 0x2F54; // bool
            public const nint m_bHandsHaveBeenCut = 0x2F55; // bool
            public const nint m_hHostageGrabber = 0x2F58; // CHandle<CCSPlayerPawn>
            public const nint m_fLastGrabTime = 0x2F5C; // GameTime_t
            public const nint m_vecPositionWhenStartedDroppingToGround = 0x2F60; // Vector
            public const nint m_vecGrabbedPos = 0x2F6C; // Vector
            public const nint m_flRescueStartTime = 0x2F78; // GameTime_t
            public const nint m_flGrabSuccessTime = 0x2F7C; // GameTime_t
            public const nint m_flDropStartTime = 0x2F80; // GameTime_t
            public const nint m_nApproachRewardPayouts = 0x2F84; // int32
            public const nint m_nPickupEventCount = 0x2F88; // int32
            public const nint m_vecSpawnGroundPos = 0x2F8C; // Vector
            public const nint m_vecHostageResetPosition = 0x2FAC; // Vector
        }
    }
}
