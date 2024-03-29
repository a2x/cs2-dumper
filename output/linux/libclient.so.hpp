// Generated using https://github.com/a2x/cs2-dumper
// 2024-03-29 21:16:02.890657436 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: libclient.so
        // Classes count: 220
        // Enums count: 0
        namespace libclient {
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // NetworkVarNames: m_nameStringableIndex (int32)
            namespace CEntityIdentity {
                constexpr std::ptrdiff_t m_nameStringableIndex = 0x14; // int32
                constexpr std::ptrdiff_t m_name = 0x18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_designerName = 0x20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flags = 0x30; // uint32
                constexpr std::ptrdiff_t m_worldGroupId = 0x38; // WorldGroupId_t
                constexpr std::ptrdiff_t m_fDataObjectTypes = 0x3C; // uint32
                constexpr std::ptrdiff_t m_PathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
                constexpr std::ptrdiff_t m_pPrev = 0x58; // CEntityIdentity*
                constexpr std::ptrdiff_t m_pNext = 0x60; // CEntityIdentity*
                constexpr std::ptrdiff_t m_pPrevByClass = 0x68; // CEntityIdentity*
                constexpr std::ptrdiff_t m_pNextByClass = 0x70; // CEntityIdentity*
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_pEntity (CEntityIdentity*)
            // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
            namespace CEntityInstance {
                constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pEntity = 0x10; // CEntityIdentity*
                constexpr std::ptrdiff_t m_CScriptComponent = 0x28; // CScriptComponent*
                constexpr std::ptrdiff_t m_bVisibleinPVS = 0x30; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_sceneNode (CGameSceneNode)
            namespace CBodyComponentPoint {
                constexpr std::ptrdiff_t m_sceneNode = 0x60; // CGameSceneNode
                constexpr std::ptrdiff_t __m_pChainEntity = 0x1C0; // CNetworkVarChainer
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_skeletonInstance (CSkeletonInstance)
            namespace CBodyComponentSkeletonInstance {
                constexpr std::ptrdiff_t m_skeletonInstance = 0x60; // CSkeletonInstance
                constexpr std::ptrdiff_t __m_pChainEntity = 0x450; // CNetworkVarChainer
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bvDisabledHitGroups (uint32)
            namespace CHitboxComponent {
                constexpr std::ptrdiff_t m_bvDisabledHitGroups = 0x24; // uint32[1]
            }
            // Parent: None
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
            namespace CLightComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x58; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_Color = 0x95; // Color
                constexpr std::ptrdiff_t m_SecondaryColor = 0x99; // Color
                constexpr std::ptrdiff_t m_flBrightness = 0xA0; // float32
                constexpr std::ptrdiff_t m_flBrightnessScale = 0xA4; // float32
                constexpr std::ptrdiff_t m_flBrightnessMult = 0xA8; // float32
                constexpr std::ptrdiff_t m_flRange = 0xAC; // float32
                constexpr std::ptrdiff_t m_flFalloff = 0xB0; // float32
                constexpr std::ptrdiff_t m_flAttenuation0 = 0xB4; // float32
                constexpr std::ptrdiff_t m_flAttenuation1 = 0xB8; // float32
                constexpr std::ptrdiff_t m_flAttenuation2 = 0xBC; // float32
                constexpr std::ptrdiff_t m_flTheta = 0xC0; // float32
                constexpr std::ptrdiff_t m_flPhi = 0xC4; // float32
                constexpr std::ptrdiff_t m_hLightCookie = 0xC8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_nCascades = 0xD0; // int32
                constexpr std::ptrdiff_t m_nCastShadows = 0xD4; // int32
                constexpr std::ptrdiff_t m_nShadowWidth = 0xD8; // int32
                constexpr std::ptrdiff_t m_nShadowHeight = 0xDC; // int32
                constexpr std::ptrdiff_t m_bRenderDiffuse = 0xE0; // bool
                constexpr std::ptrdiff_t m_nRenderSpecular = 0xE4; // int32
                constexpr std::ptrdiff_t m_bRenderTransmissive = 0xE8; // bool
                constexpr std::ptrdiff_t m_flOrthoLightWidth = 0xEC; // float32
                constexpr std::ptrdiff_t m_flOrthoLightHeight = 0xF0; // float32
                constexpr std::ptrdiff_t m_nStyle = 0xF4; // int32
                constexpr std::ptrdiff_t m_Pattern = 0xF8; // CUtlString
                constexpr std::ptrdiff_t m_nCascadeRenderStaticObjects = 0x100; // int32
                constexpr std::ptrdiff_t m_flShadowCascadeCrossFade = 0x104; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistanceFade = 0x108; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance0 = 0x10C; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance1 = 0x110; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance2 = 0x114; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance3 = 0x118; // float32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution0 = 0x11C; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution1 = 0x120; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution2 = 0x124; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution3 = 0x128; // int32
                constexpr std::ptrdiff_t m_bUsesBakedShadowing = 0x12C; // bool
                constexpr std::ptrdiff_t m_nShadowPriority = 0x130; // int32
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x134; // int32
                constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x138; // bool
                constexpr std::ptrdiff_t m_nDirectLight = 0x13C; // int32
                constexpr std::ptrdiff_t m_nIndirectLight = 0x140; // int32
                constexpr std::ptrdiff_t m_flFadeMinDist = 0x144; // float32
                constexpr std::ptrdiff_t m_flFadeMaxDist = 0x148; // float32
                constexpr std::ptrdiff_t m_flShadowFadeMinDist = 0x14C; // float32
                constexpr std::ptrdiff_t m_flShadowFadeMaxDist = 0x150; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0x154; // bool
                constexpr std::ptrdiff_t m_bFlicker = 0x155; // bool
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x156; // bool
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x158; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x164; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x170; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x17C; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x188; // Vector
                constexpr std::ptrdiff_t m_flPrecomputedMaxRange = 0x194; // float32
                constexpr std::ptrdiff_t m_nFogLightingMode = 0x198; // int32
                constexpr std::ptrdiff_t m_flFogContributionStength = 0x19C; // float32
                constexpr std::ptrdiff_t m_flNearClipPlane = 0x1A0; // float32
                constexpr std::ptrdiff_t m_SkyColor = 0x1A4; // Color
                constexpr std::ptrdiff_t m_flSkyIntensity = 0x1A8; // float32
                constexpr std::ptrdiff_t m_SkyAmbientBounce = 0x1AC; // Color
                constexpr std::ptrdiff_t m_bUseSecondaryColor = 0x1B0; // bool
                constexpr std::ptrdiff_t m_bMixedShadows = 0x1B1; // bool
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x1B4; // GameTime_t
                constexpr std::ptrdiff_t m_flCapsuleLength = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flMinRoughness = 0x1BC; // float32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CBasePlayerControllerAPI {
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: nType (FixAngleSet_t)
            // NetworkVarNames: qAngle (QAngle)
            // NetworkVarNames: nIndex (uint32)
            namespace ViewAngleServerChange_t {
                constexpr std::ptrdiff_t nType = 0x30; // FixAngleSet_t
                constexpr std::ptrdiff_t qAngle = 0x34; // QAngle
                constexpr std::ptrdiff_t nIndex = 0x40; // uint32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CDynamicPropAPI {
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
            namespace audioparams_t {
                constexpr std::ptrdiff_t localSound = 0x8; // Vector[8]
                constexpr std::ptrdiff_t soundscapeIndex = 0x68; // int32
                constexpr std::ptrdiff_t localBits = 0x6C; // uint8
                constexpr std::ptrdiff_t soundscapeEntityListIndex = 0x70; // int32
                constexpr std::ptrdiff_t soundEventHash = 0x74; // uint32
            }
            // Parent: None
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
            namespace CPlayer_CameraServices {
                constexpr std::ptrdiff_t m_vecCsViewPunchAngle = 0x40; // QAngle
                constexpr std::ptrdiff_t m_nCsViewPunchAngleTick = 0x4C; // GameTick_t
                constexpr std::ptrdiff_t m_flCsViewPunchAngleTickRatio = 0x50; // float32
                constexpr std::ptrdiff_t m_PlayerFog = 0x58; // C_fogplayerparams_t
                constexpr std::ptrdiff_t m_hColorCorrectionCtrl = 0x98; // CHandle<C_ColorCorrection>
                constexpr std::ptrdiff_t m_hViewEntity = 0x9C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hTonemapController = 0xA0; // CHandle<C_TonemapController2>
                constexpr std::ptrdiff_t m_audio = 0xA8; // audioparams_t
                constexpr std::ptrdiff_t m_PostProcessingVolumes = 0x120; // C_NetworkUtlVectorBase<CHandle<C_PostProcessingVolume>>
                constexpr std::ptrdiff_t m_flOldPlayerZ = 0x138; // float32
                constexpr std::ptrdiff_t m_flOldPlayerViewOffsetZ = 0x13C; // float32
                constexpr std::ptrdiff_t m_CurrentFog = 0x140; // fogparams_t
                constexpr std::ptrdiff_t m_hOldFogController = 0x1A8; // CHandle<C_FogController>
                constexpr std::ptrdiff_t m_bOverrideFogColor = 0x1AC; // bool[5]
                constexpr std::ptrdiff_t m_OverrideFogColor = 0x1B1; // Color[5]
                constexpr std::ptrdiff_t m_bOverrideFogStartEnd = 0x1C5; // bool[5]
                constexpr std::ptrdiff_t m_fOverrideFogStart = 0x1CC; // float32[5]
                constexpr std::ptrdiff_t m_fOverrideFogEnd = 0x1E0; // float32[5]
                constexpr std::ptrdiff_t m_hActivePostProcessingVolume = 0x1F4; // CHandle<C_PostProcessingVolume>
                constexpr std::ptrdiff_t m_angDemoViewAngles = 0x1F8; // QAngle
            }
            // Parent: None
            // Fields count: 15
            //
            // Metadata:
            // NetworkVarNames: m_nToggleButtonDownMask (ButtonBitMask_t)
            // NetworkVarNames: m_flMaxspeed (float32)
            // NetworkVarNames: m_arrForceSubtickMoveWhen (float32)
            namespace CPlayer_MovementServices {
                constexpr std::ptrdiff_t m_nImpulse = 0x40; // int32
                constexpr std::ptrdiff_t m_nButtons = 0x48; // CInButtonState
                constexpr std::ptrdiff_t m_nQueuedButtonDownMask = 0x68; // uint64
                constexpr std::ptrdiff_t m_nQueuedButtonChangeMask = 0x70; // uint64
                constexpr std::ptrdiff_t m_nButtonDoublePressed = 0x78; // uint64
                constexpr std::ptrdiff_t m_pButtonPressedCmdNumber = 0x80; // uint32[64]
                constexpr std::ptrdiff_t m_nLastCommandNumberProcessed = 0x180; // uint32
                constexpr std::ptrdiff_t m_nToggleButtonDownMask = 0x188; // uint64
                constexpr std::ptrdiff_t m_flMaxspeed = 0x198; // float32
                constexpr std::ptrdiff_t m_arrForceSubtickMoveWhen = 0x19C; // float32[4]
                constexpr std::ptrdiff_t m_flForwardMove = 0x1AC; // float32
                constexpr std::ptrdiff_t m_flLeftMove = 0x1B0; // float32
                constexpr std::ptrdiff_t m_flUpMove = 0x1B4; // float32
                constexpr std::ptrdiff_t m_vecLastMovementImpulses = 0x1B8; // Vector
                constexpr std::ptrdiff_t m_vecOldViewAngles = 0x1C4; // QAngle
            }
            // Parent: CPlayer_MovementServices
            // Fields count: 12
            //
            // Metadata:
            // NetworkVarNames: m_flFallVelocity (float32)
            // NetworkVarNames: m_bInCrouch (bool)
            // NetworkVarNames: m_nCrouchState (uint32)
            // NetworkVarNames: m_flCrouchTransitionStartTime (GameTime_t)
            // NetworkVarNames: m_bDucked (bool)
            // NetworkVarNames: m_bDucking (bool)
            // NetworkVarNames: m_bInDuckJump (bool)
            namespace CPlayer_MovementServices_Humanoid {
                constexpr std::ptrdiff_t m_flStepSoundTime = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flFallVelocity = 0x1DC; // float32
                constexpr std::ptrdiff_t m_bInCrouch = 0x1E0; // bool
                constexpr std::ptrdiff_t m_nCrouchState = 0x1E4; // uint32
                constexpr std::ptrdiff_t m_flCrouchTransitionStartTime = 0x1E8; // GameTime_t
                constexpr std::ptrdiff_t m_bDucked = 0x1EC; // bool
                constexpr std::ptrdiff_t m_bDucking = 0x1ED; // bool
                constexpr std::ptrdiff_t m_bInDuckJump = 0x1EE; // bool
                constexpr std::ptrdiff_t m_groundNormal = 0x1F0; // Vector
                constexpr std::ptrdiff_t m_flSurfaceFriction = 0x1FC; // float32
                constexpr std::ptrdiff_t m_surfaceProps = 0x200; // CUtlStringToken
                constexpr std::ptrdiff_t m_nStepside = 0x210; // int32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // NetworkVarNames: m_iObserverMode (uint8)
            // NetworkVarNames: m_hObserverTarget (CHandle<CBaseEntity>)
            namespace CPlayer_ObserverServices {
                constexpr std::ptrdiff_t m_iObserverMode = 0x40; // uint8
                constexpr std::ptrdiff_t m_hObserverTarget = 0x44; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iObserverLastMode = 0x48; // ObserverMode_t
                constexpr std::ptrdiff_t m_bForcedObserverMode = 0x4C; // bool
                constexpr std::ptrdiff_t m_flObserverChaseDistance = 0x50; // float32
                constexpr std::ptrdiff_t m_flObserverChaseDistanceCalcTime = 0x54; // GameTime_t
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_hMyWeapons (CHandle<C_BasePlayerWeapon>)
            // NetworkVarNames: m_hActiveWeapon (CHandle<CBasePlayerWeapon>)
            // NetworkVarNames: m_hLastWeapon (CHandle<CBasePlayerWeapon>)
            // NetworkVarNames: m_iAmmo (uint16)
            namespace CPlayer_WeaponServices {
                constexpr std::ptrdiff_t m_hMyWeapons = 0x40; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
                constexpr std::ptrdiff_t m_hActiveWeapon = 0x58; // CHandle<C_BasePlayerWeapon>
                constexpr std::ptrdiff_t m_hLastWeapon = 0x5C; // CHandle<C_BasePlayerWeapon>
                constexpr std::ptrdiff_t m_iAmmo = 0x60; // uint16[32]
            }
            // Parent: CBodyComponentSkeletonInstance
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_animationController (CBaseAnimGraphController)
            namespace CBodyComponentBaseAnimGraph {
                constexpr std::ptrdiff_t m_animationController = 0x478; // CBaseAnimGraphController
                constexpr std::ptrdiff_t __m_pChainEntity = 0x1C68; // CNetworkVarChainer
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_ID (CUtlStringToken)
            // NetworkVarNames: m_Values (Vector4D)
            namespace EntityRenderAttribute_t {
                constexpr std::ptrdiff_t m_ID = 0x30; // CUtlStringToken
                constexpr std::ptrdiff_t m_Values = 0x34; // Vector4D
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_Handle (ModelConfigHandle_t)
            // NetworkVarNames: m_Name (string_t)
            // NetworkVarNames: m_AssociatedEntities (CHandle<C_BaseModelEntity>)
            // NetworkVarNames: m_AssociatedEntityNames (string_t)
            namespace ActiveModelConfig_t {
                constexpr std::ptrdiff_t m_Handle = 0x28; // ModelConfigHandle_t
                constexpr std::ptrdiff_t m_Name = 0x30; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_AssociatedEntities = 0x38; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_AssociatedEntityNames = 0x50; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hOwner (CEntityHandle)
            // NetworkVarNames: m_name (CUtlStringToken)
            namespace CGameSceneNodeHandle {
                constexpr std::ptrdiff_t m_hOwner = 0x8; // CEntityHandle
                constexpr std::ptrdiff_t m_name = 0xC; // CUtlStringToken
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
            namespace CGameSceneNode {
                constexpr std::ptrdiff_t m_nodeToWorld = 0x10; // CTransform
                constexpr std::ptrdiff_t m_pOwner = 0x30; // CEntityInstance*
                constexpr std::ptrdiff_t m_pParent = 0x38; // CGameSceneNode*
                constexpr std::ptrdiff_t m_pChild = 0x40; // CGameSceneNode*
                constexpr std::ptrdiff_t m_pNextSibling = 0x48; // CGameSceneNode*
                constexpr std::ptrdiff_t m_hParent = 0x70; // CGameSceneNodeHandle
                constexpr std::ptrdiff_t m_vecOrigin = 0x80; // CNetworkOriginCellCoordQuantizedVector
                constexpr std::ptrdiff_t m_angRotation = 0xB8; // QAngle
                constexpr std::ptrdiff_t m_flScale = 0xC4; // float32
                constexpr std::ptrdiff_t m_vecAbsOrigin = 0xC8; // Vector
                constexpr std::ptrdiff_t m_angAbsRotation = 0xD4; // QAngle
                constexpr std::ptrdiff_t m_flAbsScale = 0xE0; // float32
                constexpr std::ptrdiff_t m_nParentAttachmentOrBone = 0xE4; // int16
                constexpr std::ptrdiff_t m_bDebugAbsOriginChanges = 0xE6; // bool
                constexpr std::ptrdiff_t m_bDormant = 0xE7; // bool
                constexpr std::ptrdiff_t m_bForceParentToBeNetworked = 0xE8; // bool
                constexpr std::ptrdiff_t m_bDirtyHierarchy = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bDirtyBoneMergeInfo = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNetworkedPositionChanged = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNetworkedAnglesChanged = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNetworkedScaleChanged = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bWillBeCallingPostDataUpdate = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bBoneMergeFlex = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_nLatchAbsOrigin = 0x0; // bitfield:2
                constexpr std::ptrdiff_t m_bDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_nHierarchicalDepth = 0xEB; // uint8
                constexpr std::ptrdiff_t m_nHierarchyType = 0xEC; // uint8
                constexpr std::ptrdiff_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xED; // uint8
                constexpr std::ptrdiff_t m_name = 0xF0; // CUtlStringToken
                constexpr std::ptrdiff_t m_hierarchyAttachName = 0x140; // CUtlStringToken
                constexpr std::ptrdiff_t m_flZOffset = 0x144; // float32
                constexpr std::ptrdiff_t m_vRenderOrigin = 0x148; // Vector
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_hSequence (HSequence)
            // NetworkVarNames: m_flPrevCycle (float32)
            // NetworkVarNames: m_flCycle (float32)
            namespace CNetworkedSequenceOperation {
                constexpr std::ptrdiff_t m_hSequence = 0x8; // HSequence
                constexpr std::ptrdiff_t m_flPrevCycle = 0xC; // float32
                constexpr std::ptrdiff_t m_flCycle = 0x10; // float32
                constexpr std::ptrdiff_t m_flWeight = 0x14; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_bSequenceChangeNetworked = 0x1C; // bool
                constexpr std::ptrdiff_t m_bDiscontinuity = 0x1D; // bool
                constexpr std::ptrdiff_t m_flPrevCycleFromDiscontinuity = 0x20; // float32
                constexpr std::ptrdiff_t m_flPrevCycleForAnimEventDetection = 0x24; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // NetworkVarNames: m_hModel (HModelStrong)
            // NetworkVarNames: m_bClientClothCreationSuppressed (bool)
            // NetworkVarNames: m_MeshGroupMask (MeshGroupMask_t)
            // NetworkVarNames: m_nIdealMotionType (int8)
            namespace CModelState {
                constexpr std::ptrdiff_t m_hModel = 0xA0; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_ModelName = 0xA8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bClientClothCreationSuppressed = 0xE8; // bool
                constexpr std::ptrdiff_t m_MeshGroupMask = 0x180; // uint64
                constexpr std::ptrdiff_t m_nIdealMotionType = 0x212; // int8
                constexpr std::ptrdiff_t m_nForceLOD = 0x213; // int8
                constexpr std::ptrdiff_t m_nClothUpdateFlags = 0x214; // int8
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
            namespace CSkeletonInstance {
                constexpr std::ptrdiff_t m_modelState = 0x160; // CModelState
                constexpr std::ptrdiff_t m_bIsAnimationEnabled = 0x380; // bool
                constexpr std::ptrdiff_t m_bUseParentRenderBounds = 0x381; // bool
                constexpr std::ptrdiff_t m_bDisableSolidCollisionsForHierarchy = 0x382; // bool
                constexpr std::ptrdiff_t m_bDirtyMotionType = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_materialGroup = 0x384; // CUtlStringToken
                constexpr std::ptrdiff_t m_nHitboxSet = 0x388; // uint8
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            namespace IntervalTimer {
                constexpr std::ptrdiff_t m_timestamp = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_nWorldGroupId = 0xC; // WorldGroupId_t
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_duration (float32)
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_timescale (float32)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            namespace CountdownTimer {
                constexpr std::ptrdiff_t m_duration = 0x8; // float32
                constexpr std::ptrdiff_t m_timestamp = 0xC; // GameTime_t
                constexpr std::ptrdiff_t m_timescale = 0x10; // float32
                constexpr std::ptrdiff_t m_nWorldGroupId = 0x14; // WorldGroupId_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_duration (float32)
            // NetworkVarNames: m_timestamp (float32)
            // NetworkVarNames: m_timescale (float32)
            namespace EngineCountdownTimer {
                constexpr std::ptrdiff_t m_duration = 0x8; // float32
                constexpr std::ptrdiff_t m_timestamp = 0xC; // float32
                constexpr std::ptrdiff_t m_timescale = 0x10; // float32
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
            namespace CTimeline {
                constexpr std::ptrdiff_t m_flValues = 0x10; // float32[64]
                constexpr std::ptrdiff_t m_nValueCounts = 0x110; // int32[64]
                constexpr std::ptrdiff_t m_nBucketCount = 0x210; // int32
                constexpr std::ptrdiff_t m_flInterval = 0x214; // float32
                constexpr std::ptrdiff_t m_flFinalValue = 0x218; // float32
                constexpr std::ptrdiff_t m_nCompressionType = 0x21C; // TimelineCompression_t
                constexpr std::ptrdiff_t m_bStopped = 0x220; // bool
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
            namespace CAnimGraphNetworkedVariables {
                constexpr std::ptrdiff_t m_PredNetBoolVariables = 0x8; // C_NetworkUtlVectorBase<uint32>
                constexpr std::ptrdiff_t m_PredNetByteVariables = 0x20; // C_NetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_PredNetUInt16Variables = 0x38; // C_NetworkUtlVectorBase<uint16>
                constexpr std::ptrdiff_t m_PredNetIntVariables = 0x50; // C_NetworkUtlVectorBase<int32>
                constexpr std::ptrdiff_t m_PredNetUInt32Variables = 0x68; // C_NetworkUtlVectorBase<uint32>
                constexpr std::ptrdiff_t m_PredNetUInt64Variables = 0x80; // C_NetworkUtlVectorBase<uint64>
                constexpr std::ptrdiff_t m_PredNetFloatVariables = 0x98; // C_NetworkUtlVectorBase<float32>
                constexpr std::ptrdiff_t m_PredNetVectorVariables = 0xB0; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PredNetQuaternionVariables = 0xC8; // C_NetworkUtlVectorBase<Quaternion>
                constexpr std::ptrdiff_t m_PredNetGlobalSymbolVariables = 0xE0; // C_NetworkUtlVectorBase<CGlobalSymbol>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetBoolVariables = 0xF8; // C_NetworkUtlVectorBase<uint32>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetByteVariables = 0x110; // C_NetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt16Variables = 0x128; // C_NetworkUtlVectorBase<uint16>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetIntVariables = 0x140; // C_NetworkUtlVectorBase<int32>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt32Variables = 0x158; // C_NetworkUtlVectorBase<uint32>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt64Variables = 0x170; // C_NetworkUtlVectorBase<uint64>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetFloatVariables = 0x188; // C_NetworkUtlVectorBase<float32>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetVectorVariables = 0x1A0; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetQuaternionVariables = 0x1B8; // C_NetworkUtlVectorBase<Quaternion>
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetGlobalSymbolVariables = 0x1D0; // C_NetworkUtlVectorBase<CGlobalSymbol>
                constexpr std::ptrdiff_t m_nBoolVariablesCount = 0x1E8; // int32
                constexpr std::ptrdiff_t m_nOwnerOnlyBoolVariablesCount = 0x1EC; // int32
                constexpr std::ptrdiff_t m_nRandomSeedOffset = 0x1F0; // int32
                constexpr std::ptrdiff_t m_flLastTeleportTime = 0x1F4; // float32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace C_BaseEntityAPI {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CTakeDamageInfoAPI {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseLibraryBindings
            namespace CClientPointEntityAPI {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace CPulseGraphInstance_ClientEntity {
                constexpr std::ptrdiff_t m_pParent = 0xD8; // CClientScriptEntity*
            }
            // Parent: CEntityInstance
            // Fields count: 80
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
            // MNetworkExcludeByName
            // NetworkVarNames: m_CBodyComponent (CBodyComponent::Storage_t)
            // NetworkVarNames: m_iMaxHealth (int32)
            // NetworkVarNames: m_iHealth (int32)
            // NetworkVarNames: m_lifeState (uint8)
            // NetworkVarNames: m_bTakesDamage (bool)
            // NetworkVarNames: m_nTakeDamageFlags (TakeDamageFlags_t)
            // NetworkVarNames: m_bIsPlatform (bool)
            // NetworkVarNames: m_ubInterpolationFrame (uint8)
            // NetworkVarNames: m_nSubclassID (EntitySubclassID_t)
            // NetworkVarNames: m_flAnimTime (float32)
            // NetworkVarNames: m_flSimulationTime (float32)
            // NetworkVarNames: m_flCreateTime (GameTime_t)
            // NetworkVarNames: m_bClientSideRagdoll (bool)
            // NetworkVarNames: m_iTeamNum (uint8)
            // NetworkVarNames: m_spawnflags (uint32)
            // NetworkVarNames: m_nNextThinkTick (GameTick_t)
            // NetworkVarNames: m_fFlags (uint32)
            // NetworkVarNames: m_vecBaseVelocity (Vector)
            // NetworkVarNames: m_hEffectEntity (CHandle<CBaseEntity>)
            // NetworkVarNames: m_hOwnerEntity (CHandle<CBaseEntity>)
            // NetworkVarNames: m_MoveCollide (MoveCollide_t)
            // NetworkVarNames: m_MoveType (MoveType_t)
            // NetworkVarNames: m_flWaterLevel (float32)
            // NetworkVarNames: m_fEffects (uint32)
            // NetworkVarNames: m_hGroundEntity (CHandle<CBaseEntity>)
            // NetworkVarNames: m_flFriction (float32)
            // NetworkVarNames: m_flElasticity (float32)
            // NetworkVarNames: m_flGravityScale (float32)
            // NetworkVarNames: m_flTimeScale (float32)
            // NetworkVarNames: m_bAnimatedEveryTick (bool)
            // NetworkVarNames: m_flNavIgnoreUntilTime (GameTime_t)
            namespace C_BaseEntity {
                constexpr std::ptrdiff_t m_CBodyComponent = 0x38; // CBodyComponent*
                constexpr std::ptrdiff_t m_NetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
                constexpr std::ptrdiff_t m_nLastThinkTick = 0x488; // GameTick_t
                constexpr std::ptrdiff_t m_pGameSceneNode = 0x490; // CGameSceneNode*
                constexpr std::ptrdiff_t m_pRenderComponent = 0x498; // CRenderComponent*
                constexpr std::ptrdiff_t m_pCollision = 0x4A0; // CCollisionProperty*
                constexpr std::ptrdiff_t m_iMaxHealth = 0x4A8; // int32
                constexpr std::ptrdiff_t m_iHealth = 0x4AC; // int32
                constexpr std::ptrdiff_t m_lifeState = 0x4B0; // uint8
                constexpr std::ptrdiff_t m_bTakesDamage = 0x4B1; // bool
                constexpr std::ptrdiff_t m_nTakeDamageFlags = 0x4B4; // TakeDamageFlags_t
                constexpr std::ptrdiff_t m_bIsPlatform = 0x4B8; // bool
                constexpr std::ptrdiff_t m_ubInterpolationFrame = 0x4B9; // uint8
                constexpr std::ptrdiff_t m_hSceneObjectController = 0x4BC; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nNoInterpolationTick = 0x4C0; // int32
                constexpr std::ptrdiff_t m_nVisibilityNoInterpolationTick = 0x4C4; // int32
                constexpr std::ptrdiff_t m_flProxyRandomValue = 0x4C8; // float32
                constexpr std::ptrdiff_t m_iEFlags = 0x4CC; // int32
                constexpr std::ptrdiff_t m_nWaterType = 0x4D0; // uint8
                constexpr std::ptrdiff_t m_bInterpolateEvenWithNoModel = 0x4D1; // bool
                constexpr std::ptrdiff_t m_bPredictionEligible = 0x4D2; // bool
                constexpr std::ptrdiff_t m_bApplyLayerMatchIDToModel = 0x4D3; // bool
                constexpr std::ptrdiff_t m_tokLayerMatchID = 0x4D4; // CUtlStringToken
                constexpr std::ptrdiff_t m_nSubclassID = 0x4D8; // CUtlStringToken
                constexpr std::ptrdiff_t m_nSimulationTick = 0x4E8; // int32
                constexpr std::ptrdiff_t m_iCurrentThinkContext = 0x4EC; // int32
                constexpr std::ptrdiff_t m_aThinkFunctions = 0x4F0; // CUtlVector<thinkfunc_t>
                constexpr std::ptrdiff_t m_nDisableContextThinkStartTick = 0x508; // GameTick_t
                constexpr std::ptrdiff_t m_flAnimTime = 0x50C; // float32
                constexpr std::ptrdiff_t m_flSimulationTime = 0x510; // float32
                constexpr std::ptrdiff_t m_nSceneObjectOverrideFlags = 0x514; // uint8
                constexpr std::ptrdiff_t m_bHasSuccessfullyInterpolated = 0x515; // bool
                constexpr std::ptrdiff_t m_bHasAddedVarsToInterpolation = 0x516; // bool
                constexpr std::ptrdiff_t m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x517; // bool
                constexpr std::ptrdiff_t m_nInterpolationLatchDirtyFlags = 0x518; // int32[2]
                constexpr std::ptrdiff_t m_ListEntry = 0x520; // uint16[11]
                constexpr std::ptrdiff_t m_flCreateTime = 0x538; // GameTime_t
                constexpr std::ptrdiff_t m_flSpeed = 0x53C; // float32
                constexpr std::ptrdiff_t m_EntClientFlags = 0x540; // uint16
                constexpr std::ptrdiff_t m_bClientSideRagdoll = 0x542; // bool
                constexpr std::ptrdiff_t m_iTeamNum = 0x543; // uint8
                constexpr std::ptrdiff_t m_spawnflags = 0x544; // uint32
                constexpr std::ptrdiff_t m_nNextThinkTick = 0x548; // GameTick_t
                constexpr std::ptrdiff_t m_fFlags = 0x54C; // uint32
                constexpr std::ptrdiff_t m_vecAbsVelocity = 0x550; // Vector
                constexpr std::ptrdiff_t m_vecVelocity = 0x560; // CNetworkVelocityVector
                constexpr std::ptrdiff_t m_vecBaseVelocity = 0x590; // Vector
                constexpr std::ptrdiff_t m_hEffectEntity = 0x59C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hOwnerEntity = 0x5A0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_MoveCollide = 0x5A4; // MoveCollide_t
                constexpr std::ptrdiff_t m_MoveType = 0x5A5; // MoveType_t
                constexpr std::ptrdiff_t m_nActualMoveType = 0x5A6; // MoveType_t
                constexpr std::ptrdiff_t m_flWaterLevel = 0x5A8; // float32
                constexpr std::ptrdiff_t m_fEffects = 0x5AC; // uint32
                constexpr std::ptrdiff_t m_hGroundEntity = 0x5B0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flFriction = 0x5B4; // float32
                constexpr std::ptrdiff_t m_flElasticity = 0x5B8; // float32
                constexpr std::ptrdiff_t m_flGravityScale = 0x5BC; // float32
                constexpr std::ptrdiff_t m_flTimeScale = 0x5C0; // float32
                constexpr std::ptrdiff_t m_bAnimatedEveryTick = 0x5C4; // bool
                constexpr std::ptrdiff_t m_flNavIgnoreUntilTime = 0x5C8; // GameTime_t
                constexpr std::ptrdiff_t m_hThink = 0x5CC; // uint16
                constexpr std::ptrdiff_t m_fBBoxVisFlags = 0x5D8; // uint8
                constexpr std::ptrdiff_t m_bPredictable = 0x5D9; // bool
                constexpr std::ptrdiff_t m_bRenderWithViewModels = 0x5DA; // bool
                constexpr std::ptrdiff_t m_nSplitUserPlayerPredictionSlot = 0x5DC; // CSplitScreenSlot
                constexpr std::ptrdiff_t m_nFirstPredictableCommand = 0x5E0; // int32
                constexpr std::ptrdiff_t m_nLastPredictableCommand = 0x5E4; // int32
                constexpr std::ptrdiff_t m_hOldMoveParent = 0x5E8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_Particles = 0x5F0; // CParticleProperty
                constexpr std::ptrdiff_t m_vecPredictedScriptFloats = 0x618; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecPredictedScriptFloatIDs = 0x630; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_nNextScriptVarRecordID = 0x660; // int32
                constexpr std::ptrdiff_t m_vecAngVelocity = 0x670; // QAngle
                constexpr std::ptrdiff_t m_DataChangeEventRef = 0x67C; // int32
                constexpr std::ptrdiff_t m_dependencies = 0x680; // CUtlVector<CEntityHandle>
                constexpr std::ptrdiff_t m_nCreationTick = 0x698; // int32
                constexpr std::ptrdiff_t m_bAnimTimeChanged = 0x6B9; // bool
                constexpr std::ptrdiff_t m_bSimulationTimeChanged = 0x6BA; // bool
                constexpr std::ptrdiff_t m_sUniqueHammerID = 0x6C8; // CUtlString
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
            namespace C_ColorCorrection {
                constexpr std::ptrdiff_t m_vecOrigin = 0x6D0; // Vector
                constexpr std::ptrdiff_t m_MinFalloff = 0x6DC; // float32
                constexpr std::ptrdiff_t m_MaxFalloff = 0x6E0; // float32
                constexpr std::ptrdiff_t m_flFadeInDuration = 0x6E4; // float32
                constexpr std::ptrdiff_t m_flFadeOutDuration = 0x6E8; // float32
                constexpr std::ptrdiff_t m_flMaxWeight = 0x6EC; // float32
                constexpr std::ptrdiff_t m_flCurWeight = 0x6F0; // float32
                constexpr std::ptrdiff_t m_netlookupFilename = 0x6F4; // char[512]
                constexpr std::ptrdiff_t m_bEnabled = 0x8F4; // bool
                constexpr std::ptrdiff_t m_bMaster = 0x8F5; // bool
                constexpr std::ptrdiff_t m_bClientSide = 0x8F6; // bool
                constexpr std::ptrdiff_t m_bExclusive = 0x8F7; // bool
                constexpr std::ptrdiff_t m_bEnabledOnClient = 0x8F8; // bool[1]
                constexpr std::ptrdiff_t m_flCurWeightOnClient = 0x8FC; // float32[1]
                constexpr std::ptrdiff_t m_bFadingIn = 0x900; // bool[1]
                constexpr std::ptrdiff_t m_flFadeStartWeight = 0x904; // float32[1]
                constexpr std::ptrdiff_t m_flFadeStartTime = 0x908; // float32[1]
                constexpr std::ptrdiff_t m_flFadeDuration = 0x90C; // float32[1]
            }
            // Parent: C_BaseEntity
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
            namespace C_EnvWindClientside {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x6D0; // C_EnvWindShared
            }
            // Parent: C_BaseEntity
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_hEntAttached (CHandle<C_BaseEntity>)
            // NetworkVarNames: m_bCheapEffect (bool)
            namespace C_EntityFlame {
                constexpr std::ptrdiff_t m_hEntAttached = 0x6D0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hOldAttached = 0x6F8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bCheapEffect = 0x6FC; // bool
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
            namespace CProjectedTextureBase {
                constexpr std::ptrdiff_t m_hTargetEntity = 0xC; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bState = 0x10; // bool
                constexpr std::ptrdiff_t m_bAlwaysUpdate = 0x11; // bool
                constexpr std::ptrdiff_t m_flLightFOV = 0x14; // float32
                constexpr std::ptrdiff_t m_bEnableShadows = 0x18; // bool
                constexpr std::ptrdiff_t m_bSimpleProjection = 0x19; // bool
                constexpr std::ptrdiff_t m_bLightOnlyTarget = 0x1A; // bool
                constexpr std::ptrdiff_t m_bLightWorld = 0x1B; // bool
                constexpr std::ptrdiff_t m_bCameraSpace = 0x1C; // bool
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x20; // float32
                constexpr std::ptrdiff_t m_LightColor = 0x24; // Color
                constexpr std::ptrdiff_t m_flIntensity = 0x28; // float32
                constexpr std::ptrdiff_t m_flLinearAttenuation = 0x2C; // float32
                constexpr std::ptrdiff_t m_flQuadraticAttenuation = 0x30; // float32
                constexpr std::ptrdiff_t m_bVolumetric = 0x34; // bool
                constexpr std::ptrdiff_t m_flVolumetricIntensity = 0x38; // float32
                constexpr std::ptrdiff_t m_flNoiseStrength = 0x3C; // float32
                constexpr std::ptrdiff_t m_flFlashlightTime = 0x40; // float32
                constexpr std::ptrdiff_t m_nNumPlanes = 0x44; // uint32
                constexpr std::ptrdiff_t m_flPlaneOffset = 0x48; // float32
                constexpr std::ptrdiff_t m_flColorTransitionTime = 0x4C; // float32
                constexpr std::ptrdiff_t m_flAmbient = 0x50; // float32
                constexpr std::ptrdiff_t m_SpotlightTextureName = 0x54; // char[512]
                constexpr std::ptrdiff_t m_nSpotlightTextureFrame = 0x254; // int32
                constexpr std::ptrdiff_t m_nShadowQuality = 0x258; // uint32
                constexpr std::ptrdiff_t m_flNearZ = 0x25C; // float32
                constexpr std::ptrdiff_t m_flFarZ = 0x260; // float32
                constexpr std::ptrdiff_t m_flProjectionSize = 0x264; // float32
                constexpr std::ptrdiff_t m_flRotation = 0x268; // float32
                constexpr std::ptrdiff_t m_bFlipHorizontal = 0x26C; // bool
            }
            // Parent: C_BaseEntity
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_flScale (float32)
            // NetworkVarNames: m_flStartScale (float32)
            // NetworkVarNames: m_flScaleTime (float)
            // NetworkVarNames: m_nFlags (uint32)
            namespace C_BaseFire {
                constexpr std::ptrdiff_t m_flScale = 0x6D0; // float32
                constexpr std::ptrdiff_t m_flStartScale = 0x6D4; // float32
                constexpr std::ptrdiff_t m_flScaleTime = 0x6D8; // float32
                constexpr std::ptrdiff_t m_nFlags = 0x6DC; // uint32
            }
            // Parent: C_BaseFire
            // Fields count: 13
            //
            // Metadata:
            // MNetworkOverride
            // MNetworkOverride
            // NetworkVarNames: m_nFlameModelIndex (int32)
            // NetworkVarNames: m_nFlameFromAboveModelIndex (int32)
            namespace C_FireSmoke {
                constexpr std::ptrdiff_t m_nFlameModelIndex = 0x6E0; // int32
                constexpr std::ptrdiff_t m_nFlameFromAboveModelIndex = 0x6E4; // int32
                constexpr std::ptrdiff_t m_flScaleRegister = 0x6E8; // float32
                constexpr std::ptrdiff_t m_flScaleStart = 0x6EC; // float32
                constexpr std::ptrdiff_t m_flScaleEnd = 0x6F0; // float32
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0x6F4; // GameTime_t
                constexpr std::ptrdiff_t m_flScaleTimeEnd = 0x6F8; // GameTime_t
                constexpr std::ptrdiff_t m_flChildFlameSpread = 0x6FC; // float32
                constexpr std::ptrdiff_t m_flClipPerc = 0x710; // float32
                constexpr std::ptrdiff_t m_bClipTested = 0x714; // bool
                constexpr std::ptrdiff_t m_bFadingOut = 0x715; // bool
                constexpr std::ptrdiff_t m_tParticleSpawn = 0x718; // TimedEvent
                constexpr std::ptrdiff_t m_pFireOverlay = 0x720; // CFireOverlay*
            }
            // Parent: C_BaseEntity
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_skyboxData (sky3dparams_t)
            // NetworkVarNames: m_skyboxSlotToken (CUtlStringToken)
            namespace C_SkyCamera {
                constexpr std::ptrdiff_t m_skyboxData = 0x6D0; // sky3dparams_t
                constexpr std::ptrdiff_t m_skyboxSlotToken = 0x760; // CUtlStringToken
                constexpr std::ptrdiff_t m_bUseAngles = 0x764; // bool
                constexpr std::ptrdiff_t m_pNext = 0x768; // C_SkyCamera*
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
            namespace VPhysicsCollisionAttribute_t {
                constexpr std::ptrdiff_t m_nInteractsAs = 0x8; // uint64
                constexpr std::ptrdiff_t m_nInteractsWith = 0x10; // uint64
                constexpr std::ptrdiff_t m_nInteractsExclude = 0x18; // uint64
                constexpr std::ptrdiff_t m_nEntityId = 0x20; // uint32
                constexpr std::ptrdiff_t m_nOwnerId = 0x24; // uint32
                constexpr std::ptrdiff_t m_nHierarchyId = 0x28; // uint16
                constexpr std::ptrdiff_t m_nCollisionGroup = 0x2A; // uint8
                constexpr std::ptrdiff_t m_nCollisionFunctionMask = 0x2B; // uint8
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
            namespace CCollisionProperty {
                constexpr std::ptrdiff_t m_collisionAttribute = 0x10; // VPhysicsCollisionAttribute_t
                constexpr std::ptrdiff_t m_vecMins = 0x40; // Vector
                constexpr std::ptrdiff_t m_vecMaxs = 0x4C; // Vector
                constexpr std::ptrdiff_t m_usSolidFlags = 0x5A; // uint8
                constexpr std::ptrdiff_t m_nSolidType = 0x5B; // SolidType_t
                constexpr std::ptrdiff_t m_triggerBloat = 0x5C; // uint8
                constexpr std::ptrdiff_t m_nSurroundType = 0x5D; // SurroundingBoundsType_t
                constexpr std::ptrdiff_t m_CollisionGroup = 0x5E; // uint8
                constexpr std::ptrdiff_t m_nEnablePhysics = 0x5F; // uint8
                constexpr std::ptrdiff_t m_flBoundingRadius = 0x60; // float32
                constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMins = 0x64; // Vector
                constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMaxs = 0x70; // Vector
                constexpr std::ptrdiff_t m_vecSurroundingMaxs = 0x7C; // Vector
                constexpr std::ptrdiff_t m_vecSurroundingMins = 0x88; // Vector
                constexpr std::ptrdiff_t m_vCapsuleCenter1 = 0x94; // Vector
                constexpr std::ptrdiff_t m_vCapsuleCenter2 = 0xA0; // Vector
                constexpr std::ptrdiff_t m_flCapsuleRadius = 0xAC; // float32
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
            namespace CEffectData {
                constexpr std::ptrdiff_t m_vOrigin = 0x8; // Vector
                constexpr std::ptrdiff_t m_vStart = 0x14; // Vector
                constexpr std::ptrdiff_t m_vNormal = 0x20; // Vector
                constexpr std::ptrdiff_t m_vAngles = 0x2C; // QAngle
                constexpr std::ptrdiff_t m_hEntity = 0x38; // CEntityHandle
                constexpr std::ptrdiff_t m_hOtherEntity = 0x3C; // CEntityHandle
                constexpr std::ptrdiff_t m_flScale = 0x40; // float32
                constexpr std::ptrdiff_t m_flMagnitude = 0x44; // float32
                constexpr std::ptrdiff_t m_flRadius = 0x48; // float32
                constexpr std::ptrdiff_t m_nSurfaceProp = 0x4C; // CUtlStringToken
                constexpr std::ptrdiff_t m_nEffectIndex = 0x50; // CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_nDamageType = 0x58; // uint32
                constexpr std::ptrdiff_t m_nPenetrate = 0x5C; // uint8
                constexpr std::ptrdiff_t m_nMaterial = 0x5E; // uint16
                constexpr std::ptrdiff_t m_nHitBox = 0x60; // uint16
                constexpr std::ptrdiff_t m_nColor = 0x62; // uint8
                constexpr std::ptrdiff_t m_fFlags = 0x63; // uint8
                constexpr std::ptrdiff_t m_nAttachmentIndex = 0x64; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_nAttachmentName = 0x68; // CUtlStringToken
                constexpr std::ptrdiff_t m_iEffectName = 0x6C; // uint16
                constexpr std::ptrdiff_t m_nExplosionType = 0x6E; // uint8
            }
            // Parent: C_BaseEntity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFadeStartDist (float32)
            // NetworkVarNames: m_flFadeEndDist (float32)
            namespace C_EnvDetailController {
                constexpr std::ptrdiff_t m_flFadeStartDist = 0x6D0; // float32
                constexpr std::ptrdiff_t m_flFadeEndDist = 0x6D4; // float32
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
            namespace C_EnvWindShared {
                constexpr std::ptrdiff_t m_flStartTime = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_iWindSeed = 0xC; // uint32
                constexpr std::ptrdiff_t m_iMinWind = 0x10; // uint16
                constexpr std::ptrdiff_t m_iMaxWind = 0x12; // uint16
                constexpr std::ptrdiff_t m_windRadius = 0x14; // int32
                constexpr std::ptrdiff_t m_iMinGust = 0x18; // uint16
                constexpr std::ptrdiff_t m_iMaxGust = 0x1A; // uint16
                constexpr std::ptrdiff_t m_flMinGustDelay = 0x1C; // float32
                constexpr std::ptrdiff_t m_flMaxGustDelay = 0x20; // float32
                constexpr std::ptrdiff_t m_flGustDuration = 0x24; // float32
                constexpr std::ptrdiff_t m_iGustDirChange = 0x28; // uint16
                constexpr std::ptrdiff_t m_location = 0x2C; // Vector
                constexpr std::ptrdiff_t m_iszGustSound = 0x38; // int32
                constexpr std::ptrdiff_t m_iWindDir = 0x3C; // int32
                constexpr std::ptrdiff_t m_flWindSpeed = 0x40; // float32
                constexpr std::ptrdiff_t m_currentWindVector = 0x44; // Vector
                constexpr std::ptrdiff_t m_CurrentSwayVector = 0x50; // Vector
                constexpr std::ptrdiff_t m_PrevSwayVector = 0x5C; // Vector
                constexpr std::ptrdiff_t m_iInitialWindDir = 0x68; // uint16
                constexpr std::ptrdiff_t m_flInitialWindSpeed = 0x6C; // float32
                constexpr std::ptrdiff_t m_flVariationTime = 0x70; // GameTime_t
                constexpr std::ptrdiff_t m_flSwayTime = 0x74; // GameTime_t
                constexpr std::ptrdiff_t m_flSimTime = 0x78; // GameTime_t
                constexpr std::ptrdiff_t m_flSwitchTime = 0x7C; // GameTime_t
                constexpr std::ptrdiff_t m_flAveWindSpeed = 0x80; // float32
                constexpr std::ptrdiff_t m_bGusting = 0x84; // bool
                constexpr std::ptrdiff_t m_flWindAngleVariation = 0x88; // float32
                constexpr std::ptrdiff_t m_flWindSpeedVariation = 0x8C; // float32
                constexpr std::ptrdiff_t m_iEntIndex = 0x90; // CEntityIndex
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
            namespace shard_model_desc_t {
                constexpr std::ptrdiff_t m_nModelID = 0x8; // int32
                constexpr std::ptrdiff_t m_hMaterial = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_solid = 0x18; // ShardSolid_t
                constexpr std::ptrdiff_t m_ShatterPanelMode = 0x19; // ShatterPanelMode
                constexpr std::ptrdiff_t m_vecPanelSize = 0x1C; // Vector2D
                constexpr std::ptrdiff_t m_vecStressPositionA = 0x24; // Vector2D
                constexpr std::ptrdiff_t m_vecStressPositionB = 0x2C; // Vector2D
                constexpr std::ptrdiff_t m_vecPanelVertices = 0x38; // C_NetworkUtlVectorBase<Vector2D>
                constexpr std::ptrdiff_t m_flGlassHalfThickness = 0x50; // float32
                constexpr std::ptrdiff_t m_bHasParent = 0x54; // bool
                constexpr std::ptrdiff_t m_bParentFrozen = 0x55; // bool
                constexpr std::ptrdiff_t m_SurfacePropStringToken = 0x58; // CUtlStringToken
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
            namespace CGlowProperty {
                constexpr std::ptrdiff_t m_fGlowColor = 0x8; // Vector
                constexpr std::ptrdiff_t m_iGlowType = 0x30; // int32
                constexpr std::ptrdiff_t m_iGlowTeam = 0x34; // int32
                constexpr std::ptrdiff_t m_nGlowRange = 0x38; // int32
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0x3C; // int32
                constexpr std::ptrdiff_t m_glowColorOverride = 0x40; // Color
                constexpr std::ptrdiff_t m_bFlashing = 0x44; // bool
                constexpr std::ptrdiff_t m_flGlowTime = 0x48; // float32
                constexpr std::ptrdiff_t m_flGlowStartTime = 0x4C; // float32
                constexpr std::ptrdiff_t m_bEligibleForScreenHighlight = 0x50; // bool
                constexpr std::ptrdiff_t m_bGlowing = 0x51; // bool
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
            namespace fogparams_t {
                constexpr std::ptrdiff_t dirPrimary = 0x8; // Vector
                constexpr std::ptrdiff_t colorPrimary = 0x14; // Color
                constexpr std::ptrdiff_t colorSecondary = 0x18; // Color
                constexpr std::ptrdiff_t colorPrimaryLerpTo = 0x1C; // Color
                constexpr std::ptrdiff_t colorSecondaryLerpTo = 0x20; // Color
                constexpr std::ptrdiff_t start = 0x24; // float32
                constexpr std::ptrdiff_t end = 0x28; // float32
                constexpr std::ptrdiff_t farz = 0x2C; // float32
                constexpr std::ptrdiff_t maxdensity = 0x30; // float32
                constexpr std::ptrdiff_t exponent = 0x34; // float32
                constexpr std::ptrdiff_t HDRColorScale = 0x38; // float32
                constexpr std::ptrdiff_t skyboxFogFactor = 0x3C; // float32
                constexpr std::ptrdiff_t skyboxFogFactorLerpTo = 0x40; // float32
                constexpr std::ptrdiff_t startLerpTo = 0x44; // float32
                constexpr std::ptrdiff_t endLerpTo = 0x48; // float32
                constexpr std::ptrdiff_t maxdensityLerpTo = 0x4C; // float32
                constexpr std::ptrdiff_t lerptime = 0x50; // GameTime_t
                constexpr std::ptrdiff_t duration = 0x54; // float32
                constexpr std::ptrdiff_t blendtobackground = 0x58; // float32
                constexpr std::ptrdiff_t scattering = 0x5C; // float32
                constexpr std::ptrdiff_t locallightscale = 0x60; // float32
                constexpr std::ptrdiff_t enable = 0x64; // bool
                constexpr std::ptrdiff_t blend = 0x65; // bool
                constexpr std::ptrdiff_t m_bNoReflectionFog = 0x66; // bool
                constexpr std::ptrdiff_t m_bPadding = 0x67; // bool
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // NetworkVarNames: m_hCtrl (CHandle<CFogController>)
            namespace C_fogplayerparams_t {
                constexpr std::ptrdiff_t m_hCtrl = 0x8; // CHandle<C_FogController>
                constexpr std::ptrdiff_t m_flTransitionTime = 0xC; // float32
                constexpr std::ptrdiff_t m_OldColor = 0x10; // Color
                constexpr std::ptrdiff_t m_flOldStart = 0x14; // float32
                constexpr std::ptrdiff_t m_flOldEnd = 0x18; // float32
                constexpr std::ptrdiff_t m_flOldMaxDensity = 0x1C; // float32
                constexpr std::ptrdiff_t m_flOldHDRColorScale = 0x20; // float32
                constexpr std::ptrdiff_t m_flOldFarZ = 0x24; // float32
                constexpr std::ptrdiff_t m_NewColor = 0x28; // Color
                constexpr std::ptrdiff_t m_flNewStart = 0x2C; // float32
                constexpr std::ptrdiff_t m_flNewEnd = 0x30; // float32
                constexpr std::ptrdiff_t m_flNewMaxDensity = 0x34; // float32
                constexpr std::ptrdiff_t m_flNewHDRColorScale = 0x38; // float32
                constexpr std::ptrdiff_t m_flNewFarZ = 0x3C; // float32
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
            namespace sky3dparams_t {
                constexpr std::ptrdiff_t scale = 0x8; // int16
                constexpr std::ptrdiff_t origin = 0xC; // Vector
                constexpr std::ptrdiff_t bClip3DSkyBoxNearToWorldFar = 0x18; // bool
                constexpr std::ptrdiff_t flClip3DSkyBoxNearToWorldFarOffset = 0x1C; // float32
                constexpr std::ptrdiff_t fog = 0x20; // fogparams_t
                constexpr std::ptrdiff_t m_nWorldGroupID = 0x88; // WorldGroupId_t
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_Transforms (CTransform)
            // NetworkVarNames: m_hOwner (EHANDLE)
            namespace PhysicsRagdollPose_t {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_Transforms = 0x30; // C_NetworkUtlVectorBase<CTransform>
                constexpr std::ptrdiff_t m_hOwner = 0x48; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bDirty = 0x68; // bool
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
            namespace C_SoundOpvarSetPointBase {
                constexpr std::ptrdiff_t m_iszStackName = 0x6D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperatorName = 0x6D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvarName = 0x6E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iOpvarIndex = 0x6E8; // int32
                constexpr std::ptrdiff_t m_bUseAutoCompare = 0x6EC; // bool
            }
            // Parent: C_BaseEntity
            // Fields count: 30
            //
            // Metadata:
            // NetworkVarNames: m_bTimerPaused (bool)
            // NetworkVarNames: m_flTimeRemaining (float)
            // NetworkVarNames: m_flTimerEndTime (GameTime_t)
            // NetworkVarNames: m_bIsDisabled (bool)
            // NetworkVarNames: m_bShowInHUD (bool)
            // NetworkVarNames: m_nTimerLength (int)
            // NetworkVarNames: m_nTimerInitialLength (int)
            // NetworkVarNames: m_nTimerMaxLength (int)
            // NetworkVarNames: m_bAutoCountdown (bool)
            // NetworkVarNames: m_nSetupTimeLength (int)
            // NetworkVarNames: m_nState (int)
            // NetworkVarNames: m_bStartPaused (bool)
            // NetworkVarNames: m_bInCaptureWatchState (bool)
            // NetworkVarNames: m_flTotalTime (float)
            // NetworkVarNames: m_bStopWatchTimer (bool)
            namespace C_TeamRoundTimer {
                constexpr std::ptrdiff_t m_bTimerPaused = 0x6D0; // bool
                constexpr std::ptrdiff_t m_flTimeRemaining = 0x6D4; // float32
                constexpr std::ptrdiff_t m_flTimerEndTime = 0x6D8; // GameTime_t
                constexpr std::ptrdiff_t m_bIsDisabled = 0x6DC; // bool
                constexpr std::ptrdiff_t m_bShowInHUD = 0x6DD; // bool
                constexpr std::ptrdiff_t m_nTimerLength = 0x6E0; // int32
                constexpr std::ptrdiff_t m_nTimerInitialLength = 0x6E4; // int32
                constexpr std::ptrdiff_t m_nTimerMaxLength = 0x6E8; // int32
                constexpr std::ptrdiff_t m_bAutoCountdown = 0x6EC; // bool
                constexpr std::ptrdiff_t m_nSetupTimeLength = 0x6F0; // int32
                constexpr std::ptrdiff_t m_nState = 0x6F4; // int32
                constexpr std::ptrdiff_t m_bStartPaused = 0x6F8; // bool
                constexpr std::ptrdiff_t m_bInCaptureWatchState = 0x6F9; // bool
                constexpr std::ptrdiff_t m_flTotalTime = 0x6FC; // float32
                constexpr std::ptrdiff_t m_bStopWatchTimer = 0x700; // bool
                constexpr std::ptrdiff_t m_bFireFinished = 0x701; // bool
                constexpr std::ptrdiff_t m_bFire5MinRemain = 0x702; // bool
                constexpr std::ptrdiff_t m_bFire4MinRemain = 0x703; // bool
                constexpr std::ptrdiff_t m_bFire3MinRemain = 0x704; // bool
                constexpr std::ptrdiff_t m_bFire2MinRemain = 0x705; // bool
                constexpr std::ptrdiff_t m_bFire1MinRemain = 0x706; // bool
                constexpr std::ptrdiff_t m_bFire30SecRemain = 0x707; // bool
                constexpr std::ptrdiff_t m_bFire10SecRemain = 0x708; // bool
                constexpr std::ptrdiff_t m_bFire5SecRemain = 0x709; // bool
                constexpr std::ptrdiff_t m_bFire4SecRemain = 0x70A; // bool
                constexpr std::ptrdiff_t m_bFire3SecRemain = 0x70B; // bool
                constexpr std::ptrdiff_t m_bFire2SecRemain = 0x70C; // bool
                constexpr std::ptrdiff_t m_bFire1SecRemain = 0x70D; // bool
                constexpr std::ptrdiff_t m_nOldTimerLength = 0x710; // int32
                constexpr std::ptrdiff_t m_nOldTimerState = 0x714; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Attributes (CEconItemAttribute)
            namespace CAttributeList {
                constexpr std::ptrdiff_t m_Attributes = 0x8; // C_UtlVectorEmbeddedNetworkVar<CEconItemAttribute>
                constexpr std::ptrdiff_t m_pManager = 0x58; // CAttributeManager*
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
            namespace CEconItemAttribute {
                constexpr std::ptrdiff_t m_iAttributeDefinitionIndex = 0x30; // uint16
                constexpr std::ptrdiff_t m_flValue = 0x34; // float32
                constexpr std::ptrdiff_t m_flInitialValue = 0x38; // float32
                constexpr std::ptrdiff_t m_nRefundableCurrency = 0x3C; // int32
                constexpr std::ptrdiff_t m_bSetBonus = 0x40; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // NetworkVarNames: m_iReapplyProvisionParity (int)
            // NetworkVarNames: m_hOuter (EHANDLE)
            // NetworkVarNames: m_ProviderType (attributeprovidertypes_t)
            namespace CAttributeManager {
                constexpr std::ptrdiff_t m_Providers = 0x8; // CUtlVector<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_iReapplyProvisionParity = 0x20; // int32
                constexpr std::ptrdiff_t m_hOuter = 0x24; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bPreventLoopback = 0x28; // bool
                constexpr std::ptrdiff_t m_ProviderType = 0x2C; // attributeprovidertypes_t
                constexpr std::ptrdiff_t m_CachedResults = 0x30; // CUtlVector<CAttributeManager::cached_attribute_float_t>
            }
            // Parent: CAttributeManager
            // Fields count: 3
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_Item (CEconItemView)
            namespace C_AttributeContainer {
                constexpr std::ptrdiff_t m_Item = 0x50; // C_EconItemView
                constexpr std::ptrdiff_t m_iExternalItemProviderRegisteredToken = 0x13A0; // int32
                constexpr std::ptrdiff_t m_ullRegisteredAsItemID = 0x13A8; // uint64
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bSpotted (bool)
            // NetworkVarNames: m_bSpottedByMask (uint32)
            namespace EntitySpottedState_t {
                constexpr std::ptrdiff_t m_bSpotted = 0x8; // bool
                constexpr std::ptrdiff_t m_bSpottedByMask = 0xC; // uint32[2]
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_pGameRules (CCSGameRules*)
            namespace C_CSGameRulesProxy {
                constexpr std::ptrdiff_t m_pGameRules = 0x6D0; // C_CSGameRules*
            }
            // Parent: None
            // Fields count: 117
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
            namespace C_CSGameRules {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_bFreezePeriod = 0x30; // bool
                constexpr std::ptrdiff_t m_bWarmupPeriod = 0x31; // bool
                constexpr std::ptrdiff_t m_fWarmupPeriodEnd = 0x34; // GameTime_t
                constexpr std::ptrdiff_t m_fWarmupPeriodStart = 0x38; // GameTime_t
                constexpr std::ptrdiff_t m_nTotalPausedTicks = 0x3C; // int32
                constexpr std::ptrdiff_t m_nPauseStartTick = 0x40; // int32
                constexpr std::ptrdiff_t m_bServerPaused = 0x44; // bool
                constexpr std::ptrdiff_t m_bGamePaused = 0x45; // bool
                constexpr std::ptrdiff_t m_bTerroristTimeOutActive = 0x46; // bool
                constexpr std::ptrdiff_t m_bCTTimeOutActive = 0x47; // bool
                constexpr std::ptrdiff_t m_flTerroristTimeOutRemaining = 0x48; // float32
                constexpr std::ptrdiff_t m_flCTTimeOutRemaining = 0x4C; // float32
                constexpr std::ptrdiff_t m_nTerroristTimeOuts = 0x50; // int32
                constexpr std::ptrdiff_t m_nCTTimeOuts = 0x54; // int32
                constexpr std::ptrdiff_t m_bTechnicalTimeOut = 0x58; // bool
                constexpr std::ptrdiff_t m_bMatchWaitingForResume = 0x59; // bool
                constexpr std::ptrdiff_t m_iRoundTime = 0x5C; // int32
                constexpr std::ptrdiff_t m_fMatchStartTime = 0x60; // float32
                constexpr std::ptrdiff_t m_fRoundStartTime = 0x64; // GameTime_t
                constexpr std::ptrdiff_t m_flRestartRoundTime = 0x68; // GameTime_t
                constexpr std::ptrdiff_t m_bGameRestart = 0x6C; // bool
                constexpr std::ptrdiff_t m_flGameStartTime = 0x70; // float32
                constexpr std::ptrdiff_t m_timeUntilNextPhaseStarts = 0x74; // float32
                constexpr std::ptrdiff_t m_gamePhase = 0x78; // int32
                constexpr std::ptrdiff_t m_totalRoundsPlayed = 0x7C; // int32
                constexpr std::ptrdiff_t m_nRoundsPlayedThisPhase = 0x80; // int32
                constexpr std::ptrdiff_t m_nOvertimePlaying = 0x84; // int32
                constexpr std::ptrdiff_t m_iHostagesRemaining = 0x88; // int32
                constexpr std::ptrdiff_t m_bAnyHostageReached = 0x8C; // bool
                constexpr std::ptrdiff_t m_bMapHasBombTarget = 0x8D; // bool
                constexpr std::ptrdiff_t m_bMapHasRescueZone = 0x8E; // bool
                constexpr std::ptrdiff_t m_bMapHasBuyZone = 0x8F; // bool
                constexpr std::ptrdiff_t m_bIsQueuedMatchmaking = 0x90; // bool
                constexpr std::ptrdiff_t m_nQueuedMatchmakingMode = 0x94; // int32
                constexpr std::ptrdiff_t m_bIsValveDS = 0x98; // bool
                constexpr std::ptrdiff_t m_bLogoMap = 0x99; // bool
                constexpr std::ptrdiff_t m_bPlayAllStepSoundsOnServer = 0x9A; // bool
                constexpr std::ptrdiff_t m_iSpectatorSlotCount = 0x9C; // int32
                constexpr std::ptrdiff_t m_MatchDevice = 0xA0; // int32
                constexpr std::ptrdiff_t m_bHasMatchStarted = 0xA4; // bool
                constexpr std::ptrdiff_t m_nNextMapInMapgroup = 0xA8; // int32
                constexpr std::ptrdiff_t m_szTournamentEventName = 0xAC; // char[512]
                constexpr std::ptrdiff_t m_szTournamentEventStage = 0x2AC; // char[512]
                constexpr std::ptrdiff_t m_szMatchStatTxt = 0x4AC; // char[512]
                constexpr std::ptrdiff_t m_szTournamentPredictionsTxt = 0x6AC; // char[512]
                constexpr std::ptrdiff_t m_nTournamentPredictionsPct = 0x8AC; // int32
                constexpr std::ptrdiff_t m_flCMMItemDropRevealStartTime = 0x8B0; // GameTime_t
                constexpr std::ptrdiff_t m_flCMMItemDropRevealEndTime = 0x8B4; // GameTime_t
                constexpr std::ptrdiff_t m_bIsDroppingItems = 0x8B8; // bool
                constexpr std::ptrdiff_t m_bIsQuestEligible = 0x8B9; // bool
                constexpr std::ptrdiff_t m_bIsHltvActive = 0x8BA; // bool
                constexpr std::ptrdiff_t m_nGuardianModeWaveNumber = 0x8BC; // int32
                constexpr std::ptrdiff_t m_nGuardianModeSpecialKillsRemaining = 0x8C0; // int32
                constexpr std::ptrdiff_t m_nGuardianModeSpecialWeaponNeeded = 0x8C4; // int32
                constexpr std::ptrdiff_t m_nGuardianGrenadesToGiveBots = 0x8C8; // int32
                constexpr std::ptrdiff_t m_nNumHeaviesToSpawn = 0x8CC; // int32
                constexpr std::ptrdiff_t m_numGlobalGiftsGiven = 0x8D0; // uint32
                constexpr std::ptrdiff_t m_numGlobalGifters = 0x8D4; // uint32
                constexpr std::ptrdiff_t m_numGlobalGiftsPeriodSeconds = 0x8D8; // uint32
                constexpr std::ptrdiff_t m_arrFeaturedGiftersAccounts = 0x8DC; // uint32[4]
                constexpr std::ptrdiff_t m_arrFeaturedGiftersGifts = 0x8EC; // uint32[4]
                constexpr std::ptrdiff_t m_arrProhibitedItemIndices = 0x8FC; // uint16[100]
                constexpr std::ptrdiff_t m_arrTournamentActiveCasterAccounts = 0x9C4; // uint32[4]
                constexpr std::ptrdiff_t m_numBestOfMaps = 0x9D4; // int32
                constexpr std::ptrdiff_t m_nHalloweenMaskListSeed = 0x9D8; // int32
                constexpr std::ptrdiff_t m_bBombDropped = 0x9DC; // bool
                constexpr std::ptrdiff_t m_bBombPlanted = 0x9DD; // bool
                constexpr std::ptrdiff_t m_iRoundWinStatus = 0x9E0; // int32
                constexpr std::ptrdiff_t m_eRoundWinReason = 0x9E4; // int32
                constexpr std::ptrdiff_t m_bTCantBuy = 0x9E8; // bool
                constexpr std::ptrdiff_t m_bCTCantBuy = 0x9E9; // bool
                constexpr std::ptrdiff_t m_flGuardianBuyUntilTime = 0x9EC; // GameTime_t
                constexpr std::ptrdiff_t m_iMatchStats_RoundResults = 0x9F0; // int32[30]
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_CT = 0xA68; // int32[30]
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_T = 0xAE0; // int32[30]
                constexpr std::ptrdiff_t m_TeamRespawnWaveTimes = 0xB58; // float32[32]
                constexpr std::ptrdiff_t m_flNextRespawnWave = 0xBD8; // GameTime_t[32]
                constexpr std::ptrdiff_t m_nServerQuestID = 0xC58; // int32
                constexpr std::ptrdiff_t m_vMinimapMins = 0xC5C; // Vector
                constexpr std::ptrdiff_t m_vMinimapMaxs = 0xC68; // Vector
                constexpr std::ptrdiff_t m_MinimapVerticalSectionHeights = 0xC74; // float32[8]
                constexpr std::ptrdiff_t m_bDontIncrementCoopWave = 0xC94; // bool
                constexpr std::ptrdiff_t m_bSpawnedTerrorHuntHeavy = 0xC95; // bool
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteTypes = 0xC98; // int32[10]
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteOptions = 0xCC0; // int32[10]
                constexpr std::ptrdiff_t m_nEndMatchMapVoteWinner = 0xCE8; // int32
                constexpr std::ptrdiff_t m_iNumConsecutiveCTLoses = 0xCEC; // int32
                constexpr std::ptrdiff_t m_iNumConsecutiveTerroristLoses = 0xCF0; // int32
                constexpr std::ptrdiff_t m_bMarkClientStopRecordAtRoundEnd = 0xD10; // bool
                constexpr std::ptrdiff_t m_nMatchAbortedEarlyReason = 0xD68; // int32
                constexpr std::ptrdiff_t m_bHasTriggeredRoundStartMusic = 0xD6C; // bool
                constexpr std::ptrdiff_t m_bHasTriggeredCoopSpawnReset = 0xD6D; // bool
                constexpr std::ptrdiff_t m_bSwitchingTeamsAtRoundReset = 0xD6E; // bool
                constexpr std::ptrdiff_t m_pGameModeRules = 0xD88; // CCSGameModeRules*
                constexpr std::ptrdiff_t m_RetakeRules = 0xD90; // C_RetakeGameRules
                constexpr std::ptrdiff_t m_nMatchEndCount = 0xEA8; // uint8
                constexpr std::ptrdiff_t m_nTTeamIntroVariant = 0xEAC; // int32
                constexpr std::ptrdiff_t m_nCTTeamIntroVariant = 0xEB0; // int32
                constexpr std::ptrdiff_t m_bTeamIntroPeriod = 0xEB4; // bool
                constexpr std::ptrdiff_t m_iRoundEndWinnerTeam = 0xEB8; // int32
                constexpr std::ptrdiff_t m_eRoundEndReason = 0xEBC; // int32
                constexpr std::ptrdiff_t m_bRoundEndShowTimerDefend = 0xEC0; // bool
                constexpr std::ptrdiff_t m_iRoundEndTimerTime = 0xEC4; // int32
                constexpr std::ptrdiff_t m_sRoundEndFunFactToken = 0xEC8; // CUtlString
                constexpr std::ptrdiff_t m_iRoundEndFunFactPlayerSlot = 0xED0; // CPlayerSlot
                constexpr std::ptrdiff_t m_iRoundEndFunFactData1 = 0xED4; // int32
                constexpr std::ptrdiff_t m_iRoundEndFunFactData2 = 0xED8; // int32
                constexpr std::ptrdiff_t m_iRoundEndFunFactData3 = 0xEDC; // int32
                constexpr std::ptrdiff_t m_sRoundEndMessage = 0xEE0; // CUtlString
                constexpr std::ptrdiff_t m_iRoundEndPlayerCount = 0xEE8; // int32
                constexpr std::ptrdiff_t m_bRoundEndNoMusic = 0xEEC; // bool
                constexpr std::ptrdiff_t m_iRoundEndLegacy = 0xEF0; // int32
                constexpr std::ptrdiff_t m_nRoundEndCount = 0xEF4; // uint8
                constexpr std::ptrdiff_t m_iRoundStartRoundNumber = 0xEF8; // int32
                constexpr std::ptrdiff_t m_nRoundStartCount = 0xEFC; // uint8
                constexpr std::ptrdiff_t m_flLastPerfSampleTime = 0x4F08; // float64
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSTakeDamageInfoAPI {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace CCSGameModeScript {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_WeaponSequence (CUtlString)
            namespace CCSGameModeRules_ArmsRace {
                constexpr std::ptrdiff_t m_WeaponSequence = 0x38; // C_NetworkUtlVectorBase<CUtlString>
            }
            // Parent: CCSGameModeScript
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace CCSArmsRaceScript {
                constexpr std::ptrdiff_t m_pOuter = 0xD8; // CCSGameModeRules_ArmsRace*
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flDMBonusStartTime (GameTime_t)
            // NetworkVarNames: m_flDMBonusTimeLength (float)
            // NetworkVarNames: m_nDMBonusWeaponLoadoutSlot (int16)
            namespace CCSGameModeRules_Deathmatch {
                constexpr std::ptrdiff_t m_flDMBonusStartTime = 0x38; // GameTime_t
                constexpr std::ptrdiff_t m_flDMBonusTimeLength = 0x3C; // float32
                constexpr std::ptrdiff_t m_nDMBonusWeaponLoadoutSlot = 0x40; // int16
            }
            // Parent: CCSGameModeScript
            // Fields count: 1
            //
            // Metadata:
            // MPulseInstanceDomainInfo
            // MPulseLibraryBindings
            // MPulseDomainOptInFeatureTag
            namespace CCSDeathmatchScript {
                constexpr std::ptrdiff_t m_pOuter = 0xD8; // CCSGameModeRules_Deathmatch*
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
            namespace C_RetakeGameRules {
                constexpr std::ptrdiff_t m_nMatchSeed = 0xF8; // int32
                constexpr std::ptrdiff_t m_bBlockersPresent = 0xFC; // bool
                constexpr std::ptrdiff_t m_bRoundInProgress = 0xFD; // bool
                constexpr std::ptrdiff_t m_iFirstSecondHalfRound = 0x100; // int32
                constexpr std::ptrdiff_t m_iBombSite = 0x104; // int32
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
            namespace CSPerRoundStats_t {
                constexpr std::ptrdiff_t m_iKills = 0x30; // int32
                constexpr std::ptrdiff_t m_iDeaths = 0x34; // int32
                constexpr std::ptrdiff_t m_iAssists = 0x38; // int32
                constexpr std::ptrdiff_t m_iDamage = 0x3C; // int32
                constexpr std::ptrdiff_t m_iEquipmentValue = 0x40; // int32
                constexpr std::ptrdiff_t m_iMoneySaved = 0x44; // int32
                constexpr std::ptrdiff_t m_iKillReward = 0x48; // int32
                constexpr std::ptrdiff_t m_iLiveTime = 0x4C; // int32
                constexpr std::ptrdiff_t m_iHeadShotKills = 0x50; // int32
                constexpr std::ptrdiff_t m_iObjective = 0x54; // int32
                constexpr std::ptrdiff_t m_iCashEarned = 0x58; // int32
                constexpr std::ptrdiff_t m_iUtilityDamage = 0x5C; // int32
                constexpr std::ptrdiff_t m_iEnemiesFlashed = 0x60; // int32
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
            namespace CSMatchStats_t {
                constexpr std::ptrdiff_t m_iEnemy5Ks = 0x64; // int32
                constexpr std::ptrdiff_t m_iEnemy4Ks = 0x68; // int32
                constexpr std::ptrdiff_t m_iEnemy3Ks = 0x6C; // int32
                constexpr std::ptrdiff_t m_iEnemyKnifeKills = 0x70; // int32
                constexpr std::ptrdiff_t m_iEnemyTaserKills = 0x74; // int32
            }
            // Parent: C_BaseEntity
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
            namespace C_CSGO_TeamPreviewCharacterPosition {
                constexpr std::ptrdiff_t m_nVariant = 0x6D0; // int32
                constexpr std::ptrdiff_t m_nRandom = 0x6D4; // int32
                constexpr std::ptrdiff_t m_nOrdinal = 0x6D8; // int32
                constexpr std::ptrdiff_t m_sWeaponName = 0x6E0; // CUtlString
                constexpr std::ptrdiff_t m_xuid = 0x6E8; // uint64
                constexpr std::ptrdiff_t m_agentItem = 0x6F0; // C_EconItemView
                constexpr std::ptrdiff_t m_glovesItem = 0x1A40; // C_EconItemView
                constexpr std::ptrdiff_t m_weaponItem = 0x2D90; // C_EconItemView
            }
            // Parent: C_BaseEntity
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_hPlayer (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_hPingedEntity (CHandle<CBaseEntity>)
            // NetworkVarNames: m_iType (int)
            // NetworkVarNames: m_bUrgent (bool)
            // NetworkVarNames: m_szPlaceName (char)
            namespace C_PlayerPing {
                constexpr std::ptrdiff_t m_hPlayer = 0x700; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_hPingedEntity = 0x704; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iType = 0x708; // int32
                constexpr std::ptrdiff_t m_bUrgent = 0x70C; // bool
                constexpr std::ptrdiff_t m_szPlaceName = 0x70D; // char[18]
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_hPlayerPing (CHandle<CBaseEntity>)
            namespace CCSPlayer_PingServices {
                constexpr std::ptrdiff_t m_hPlayerPing = 0x40; // CHandle<C_BaseEntity>
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
            namespace C_CSPlayerResource {
                constexpr std::ptrdiff_t m_bHostageAlive = 0x6D0; // bool[12]
                constexpr std::ptrdiff_t m_isHostageFollowingSomeone = 0x6DC; // bool[12]
                constexpr std::ptrdiff_t m_iHostageEntityIDs = 0x6E8; // CEntityIndex[12]
                constexpr std::ptrdiff_t m_bombsiteCenterA = 0x718; // Vector
                constexpr std::ptrdiff_t m_bombsiteCenterB = 0x724; // Vector
                constexpr std::ptrdiff_t m_hostageRescueX = 0x730; // int32[4]
                constexpr std::ptrdiff_t m_hostageRescueY = 0x740; // int32[4]
                constexpr std::ptrdiff_t m_hostageRescueZ = 0x750; // int32[4]
                constexpr std::ptrdiff_t m_bEndMatchNextMapAllVoted = 0x760; // bool
                constexpr std::ptrdiff_t m_foundGoalPositions = 0x761; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSPlayerControllerAPI {
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
            namespace CCSPlayerBase_CameraServices {
                constexpr std::ptrdiff_t m_iFOV = 0x210; // uint32
                constexpr std::ptrdiff_t m_iFOVStart = 0x214; // uint32
                constexpr std::ptrdiff_t m_flFOVTime = 0x218; // GameTime_t
                constexpr std::ptrdiff_t m_flFOVRate = 0x21C; // float32
                constexpr std::ptrdiff_t m_hZoomOwner = 0x220; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flLastShotFOV = 0x224; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nItemDefIndex (uint16)
            // NetworkVarNames: m_nCount (uint16)
            namespace WeaponPurchaseCount_t {
                constexpr std::ptrdiff_t m_nItemDefIndex = 0x30; // uint16
                constexpr std::ptrdiff_t m_nCount = 0x32; // uint16
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_weaponPurchases (WeaponPurchaseCount_t)
            namespace WeaponPurchaseTracker_t {
                constexpr std::ptrdiff_t m_weaponPurchases = 0x8; // C_UtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bIsRescuing (bool)
            // NetworkVarNames: m_weaponPurchasesThisMatch (WeaponPurchaseTracker_t)
            // NetworkVarNames: m_weaponPurchasesThisRound (WeaponPurchaseTracker_t)
            namespace CCSPlayer_ActionTrackingServices {
                constexpr std::ptrdiff_t m_hLastWeaponBeforeC4AutoSwitch = 0x40; // CHandle<C_BasePlayerWeapon>
                constexpr std::ptrdiff_t m_bIsRescuing = 0x44; // bool
                constexpr std::ptrdiff_t m_weaponPurchasesThisMatch = 0x48; // WeaponPurchaseTracker_t
                constexpr std::ptrdiff_t m_weaponPurchasesThisRound = 0xA0; // WeaponPurchaseTracker_t
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_totalHitsOnServer (int32)
            namespace CCSPlayer_BulletServices {
                constexpr std::ptrdiff_t m_totalHitsOnServer = 0x40; // int32
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
            namespace SellbackPurchaseEntry_t {
                constexpr std::ptrdiff_t m_unDefIdx = 0x30; // uint16
                constexpr std::ptrdiff_t m_nCost = 0x34; // int32
                constexpr std::ptrdiff_t m_nPrevArmor = 0x38; // int32
                constexpr std::ptrdiff_t m_bPrevHelmet = 0x3C; // bool
                constexpr std::ptrdiff_t m_hItem = 0x40; // CEntityHandle
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_vecSellbackPurchaseEntries (SellbackPurchaseEntry_t)
            namespace CCSPlayer_BuyServices {
                constexpr std::ptrdiff_t m_vecSellbackPurchaseEntries = 0x40; // C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hCarriedHostage (CHandle<CBaseEntity>)
            // NetworkVarNames: m_hCarriedHostageProp (CHandle<CBaseEntity>)
            namespace CCSPlayer_HostageServices {
                constexpr std::ptrdiff_t m_hCarriedHostage = 0x40; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hCarriedHostageProp = 0x44; // CHandle<C_BaseEntity>
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_bHasDefuser (bool)
            // NetworkVarNames: m_bHasHelmet (bool)
            // NetworkVarNames: m_bHasHeavyArmor (bool)
            namespace CCSPlayer_ItemServices {
                constexpr std::ptrdiff_t m_bHasDefuser = 0x40; // bool
                constexpr std::ptrdiff_t m_bHasHelmet = 0x41; // bool
                constexpr std::ptrdiff_t m_bHasHeavyArmor = 0x42; // bool
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
            namespace CCSPlayer_MovementServices {
                constexpr std::ptrdiff_t m_flMaxFallVelocity = 0x214; // float32
                constexpr std::ptrdiff_t m_vecLadderNormal = 0x218; // Vector
                constexpr std::ptrdiff_t m_nLadderSurfacePropIndex = 0x224; // int32
                constexpr std::ptrdiff_t m_flDuckAmount = 0x228; // float32
                constexpr std::ptrdiff_t m_flDuckSpeed = 0x22C; // float32
                constexpr std::ptrdiff_t m_bDuckOverride = 0x230; // bool
                constexpr std::ptrdiff_t m_bDesiresDuck = 0x231; // bool
                constexpr std::ptrdiff_t m_flDuckOffset = 0x234; // float32
                constexpr std::ptrdiff_t m_nDuckTimeMsecs = 0x238; // uint32
                constexpr std::ptrdiff_t m_nDuckJumpTimeMsecs = 0x23C; // uint32
                constexpr std::ptrdiff_t m_nJumpTimeMsecs = 0x240; // uint32
                constexpr std::ptrdiff_t m_flLastDuckTime = 0x244; // float32
                constexpr std::ptrdiff_t m_vecLastPositionAtFullCrouchSpeed = 0x250; // Vector2D
                constexpr std::ptrdiff_t m_duckUntilOnGround = 0x258; // bool
                constexpr std::ptrdiff_t m_bHasWalkMovedSinceLastJump = 0x259; // bool
                constexpr std::ptrdiff_t m_bInStuckTest = 0x25A; // bool
                constexpr std::ptrdiff_t m_flStuckCheckTime = 0x268; // float32[64][2]
                constexpr std::ptrdiff_t m_nTraceCount = 0x468; // int32
                constexpr std::ptrdiff_t m_StuckLast = 0x46C; // int32
                constexpr std::ptrdiff_t m_bSpeedCropped = 0x470; // bool
                constexpr std::ptrdiff_t m_nOldWaterLevel = 0x474; // int32
                constexpr std::ptrdiff_t m_flWaterEntryTime = 0x478; // float32
                constexpr std::ptrdiff_t m_vecForward = 0x47C; // Vector
                constexpr std::ptrdiff_t m_vecLeft = 0x488; // Vector
                constexpr std::ptrdiff_t m_vecUp = 0x494; // Vector
                constexpr std::ptrdiff_t m_nGameCodeHasMovedPlayerAfterCommand = 0x4A0; // int32
                constexpr std::ptrdiff_t m_bOldJumpPressed = 0x4A4; // bool
                constexpr std::ptrdiff_t m_flJumpPressedTime = 0x4A8; // float32
                constexpr std::ptrdiff_t m_flJumpUntil = 0x4AC; // float32
                constexpr std::ptrdiff_t m_flJumpVel = 0x4B0; // float32
                constexpr std::ptrdiff_t m_fStashGrenadeParameterWhen = 0x4B4; // GameTime_t
                constexpr std::ptrdiff_t m_nButtonDownMaskPrev = 0x4B8; // uint64
                constexpr std::ptrdiff_t m_flOffsetTickCompleteTime = 0x4C0; // float32
                constexpr std::ptrdiff_t m_flOffsetTickStashedSpeed = 0x4C4; // float32
                constexpr std::ptrdiff_t m_flStamina = 0x4C8; // float32
                constexpr std::ptrdiff_t m_flHeightAtJumpStart = 0x4CC; // float32
                constexpr std::ptrdiff_t m_flMaxJumpHeightThisJump = 0x4D0; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_hViewModel (CHandle<CBaseViewModel>)
            namespace CCSPlayer_ViewModelServices {
                constexpr std::ptrdiff_t m_hViewModel = 0x40; // CHandle<C_BaseViewModel>[3]
            }
            // Parent: CPlayer_WeaponServices
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_flNextAttack (GameTime_t)
            // NetworkVarNames: m_bIsLookingAtWeapon (bool)
            // NetworkVarNames: m_bIsHoldingLookAtWeapon (bool)
            namespace CCSPlayer_WeaponServices {
                constexpr std::ptrdiff_t m_flNextAttack = 0xB8; // GameTime_t
                constexpr std::ptrdiff_t m_bIsLookingAtWeapon = 0xBC; // bool
                constexpr std::ptrdiff_t m_bIsHoldingLookAtWeapon = 0xBD; // bool
                constexpr std::ptrdiff_t m_nOldShootPositionHistoryCount = 0xC0; // uint32
                constexpr std::ptrdiff_t m_nOldInputHistoryCount = 0x458; // uint32
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
            namespace CCSPlayerController_ActionTrackingServices {
                constexpr std::ptrdiff_t m_perRoundStats = 0x40; // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
                constexpr std::ptrdiff_t m_matchStats = 0x90; // CSMatchStats_t
                constexpr std::ptrdiff_t m_iNumRoundKills = 0x108; // int32
                constexpr std::ptrdiff_t m_iNumRoundKillsHeadshots = 0x10C; // int32
                constexpr std::ptrdiff_t m_unTotalRoundDamageDealt = 0x110; // uint32
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
            namespace CDamageRecord {
                constexpr std::ptrdiff_t m_PlayerDamager = 0x28; // CHandle<C_CSPlayerPawnBase>
                constexpr std::ptrdiff_t m_PlayerRecipient = 0x2C; // CHandle<C_CSPlayerPawnBase>
                constexpr std::ptrdiff_t m_hPlayerControllerDamager = 0x30; // CHandle<CCSPlayerController>
                constexpr std::ptrdiff_t m_hPlayerControllerRecipient = 0x34; // CHandle<CCSPlayerController>
                constexpr std::ptrdiff_t m_szPlayerDamagerName = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_szPlayerRecipientName = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_DamagerXuid = 0x48; // uint64
                constexpr std::ptrdiff_t m_RecipientXuid = 0x50; // uint64
                constexpr std::ptrdiff_t m_iDamage = 0x58; // int32
                constexpr std::ptrdiff_t m_iActualHealthRemoved = 0x5C; // int32
                constexpr std::ptrdiff_t m_iNumHits = 0x60; // int32
                constexpr std::ptrdiff_t m_iLastBulletUpdate = 0x64; // int32
                constexpr std::ptrdiff_t m_bIsOtherEnemy = 0x68; // bool
                constexpr std::ptrdiff_t m_killType = 0x69; // EKillTypes_t
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nSendUpdate (int)
            // NetworkVarNames: m_DamageList (CDamageRecord)
            namespace CCSPlayerController_DamageServices {
                constexpr std::ptrdiff_t m_nSendUpdate = 0x40; // int32
                constexpr std::ptrdiff_t m_DamageList = 0x48; // C_UtlVectorEmbeddedNetworkVar<CDamageRecord>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // NetworkVarNames: m_iAccount (int)
            // NetworkVarNames: m_iStartAccount (int)
            // NetworkVarNames: m_iTotalCashSpent (int)
            // NetworkVarNames: m_iCashSpentThisRound (int)
            namespace CCSPlayerController_InGameMoneyServices {
                constexpr std::ptrdiff_t m_iAccount = 0x40; // int32
                constexpr std::ptrdiff_t m_iStartAccount = 0x44; // int32
                constexpr std::ptrdiff_t m_iTotalCashSpent = 0x48; // int32
                constexpr std::ptrdiff_t m_iCashSpentThisRound = 0x4C; // int32
                constexpr std::ptrdiff_t m_nPreviousAccount = 0x50; // int32
            }
            // Parent: None
            // Fields count: 8
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
            namespace CCSPlayerController_InventoryServices {
                constexpr std::ptrdiff_t m_unMusicID = 0x40; // uint16
                constexpr std::ptrdiff_t m_rank = 0x44; // MedalRank_t[6]
                constexpr std::ptrdiff_t m_nPersonaDataPublicLevel = 0x5C; // int32
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsLeader = 0x60; // int32
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsTeacher = 0x64; // int32
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsFriendly = 0x68; // int32
                constexpr std::ptrdiff_t m_nPersonaDataXpTrailLevel = 0x6C; // int32
                constexpr std::ptrdiff_t m_vecServerAuthoritativeWeaponSlots = 0x70; // C_UtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSWeaponBaseVDataAPI {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSWeaponBaseAPI {
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CompositeMaterialMatchFilter_t {
                constexpr std::ptrdiff_t m_nCompositeMaterialMatchFilterType = 0x0; // CompositeMaterialMatchFilterType_t
                constexpr std::ptrdiff_t m_strMatchFilter = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_strMatchValue = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_bPassWhenTrue = 0x18; // bool
            }
            // Parent: None
            // Fields count: 34
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CompositeMaterialInputLooseVariable_t {
                constexpr std::ptrdiff_t m_strName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_bExposeExternally = 0x8; // bool
                constexpr std::ptrdiff_t m_strExposedFriendlyName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_strExposedFriendlyGroupName = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_bExposedVariableIsFixedRange = 0x20; // bool
                constexpr std::ptrdiff_t m_strExposedVisibleWhenTrue = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_strExposedHiddenWhenTrue = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_nVariableType = 0x38; // CompositeMaterialInputLooseVariableType_t
                constexpr std::ptrdiff_t m_bValueBoolean = 0x3C; // bool
                constexpr std::ptrdiff_t m_nValueIntX = 0x40; // int32
                constexpr std::ptrdiff_t m_nValueIntY = 0x44; // int32
                constexpr std::ptrdiff_t m_nValueIntZ = 0x48; // int32
                constexpr std::ptrdiff_t m_nValueIntW = 0x4C; // int32
                constexpr std::ptrdiff_t m_bHasFloatBounds = 0x50; // bool
                constexpr std::ptrdiff_t m_flValueFloatX = 0x54; // float32
                constexpr std::ptrdiff_t m_flValueFloatX_Min = 0x58; // float32
                constexpr std::ptrdiff_t m_flValueFloatX_Max = 0x5C; // float32
                constexpr std::ptrdiff_t m_flValueFloatY = 0x60; // float32
                constexpr std::ptrdiff_t m_flValueFloatY_Min = 0x64; // float32
                constexpr std::ptrdiff_t m_flValueFloatY_Max = 0x68; // float32
                constexpr std::ptrdiff_t m_flValueFloatZ = 0x6C; // float32
                constexpr std::ptrdiff_t m_flValueFloatZ_Min = 0x70; // float32
                constexpr std::ptrdiff_t m_flValueFloatZ_Max = 0x74; // float32
                constexpr std::ptrdiff_t m_flValueFloatW = 0x78; // float32
                constexpr std::ptrdiff_t m_flValueFloatW_Min = 0x7C; // float32
                constexpr std::ptrdiff_t m_flValueFloatW_Max = 0x80; // float32
                constexpr std::ptrdiff_t m_cValueColor4 = 0x84; // Color
                constexpr std::ptrdiff_t m_nValueSystemVar = 0x88; // CompositeMaterialVarSystemVar_t
                constexpr std::ptrdiff_t m_strResourceMaterial = 0x90; // CResourceName
                constexpr std::ptrdiff_t m_strTextureContentAssetPath = 0x170; // CUtlString
                constexpr std::ptrdiff_t m_strTextureRuntimeResourcePath = 0x178; // CResourceName
                constexpr std::ptrdiff_t m_strTextureCompilationVtexTemplate = 0x258; // CUtlString
                constexpr std::ptrdiff_t m_nTextureType = 0x260; // CompositeMaterialInputTextureType_t
                constexpr std::ptrdiff_t m_strString = 0x268; // CUtlString
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CompMatMutatorCondition_t {
                constexpr std::ptrdiff_t m_nMutatorCondition = 0x0; // CompMatPropertyMutatorConditionType_t
                constexpr std::ptrdiff_t m_strMutatorConditionContainerName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_strMutatorConditionContainerVarName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_strMutatorConditionContainerVarValue = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_bPassWhenTrue = 0x20; // bool
            }
            // Parent: None
            // Fields count: 28
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CompMatPropertyMutator_t {
                constexpr std::ptrdiff_t m_bEnabled = 0x0; // bool
                constexpr std::ptrdiff_t m_nMutatorCommandType = 0x4; // CompMatPropertyMutatorType_t
                constexpr std::ptrdiff_t m_strInitWith_Container = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_strCopyProperty_InputContainerSrc = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_strCopyProperty_InputContainerProperty = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_strCopyProperty_TargetProperty = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_strRandomRollInputVars_SeedInputVar = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_vecRandomRollInputVars_InputVarsToRoll = 0x30; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_strCopyMatchingKeys_InputContainerSrc = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_strCopyKeysWithSuffix_InputContainerSrc = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_strCopyKeysWithSuffix_FindSuffix = 0x58; // CUtlString
                constexpr std::ptrdiff_t m_strCopyKeysWithSuffix_ReplaceSuffix = 0x60; // CUtlString
                constexpr std::ptrdiff_t m_nSetValue_Value = 0x68; // CompositeMaterialInputLooseVariable_t
                constexpr std::ptrdiff_t m_strGenerateTexture_TargetParam = 0x2D8; // CUtlString
                constexpr std::ptrdiff_t m_strGenerateTexture_InitialContainer = 0x2E0; // CUtlString
                constexpr std::ptrdiff_t m_nResolution = 0x2E8; // int32
                constexpr std::ptrdiff_t m_bIsScratchTarget = 0x2EC; // bool
                constexpr std::ptrdiff_t m_bSplatDebugInfo = 0x2ED; // bool
                constexpr std::ptrdiff_t m_bCaptureInRenderDoc = 0x2EE; // bool
                constexpr std::ptrdiff_t m_vecTexGenInstructions = 0x2F0; // CUtlVector<CompMatPropertyMutator_t>
                constexpr std::ptrdiff_t m_vecConditionalMutators = 0x308; // CUtlVector<CompMatPropertyMutator_t>
                constexpr std::ptrdiff_t m_strPopInputQueue_Container = 0x320; // CUtlString
                constexpr std::ptrdiff_t m_strDrawText_InputContainerSrc = 0x328; // CUtlString
                constexpr std::ptrdiff_t m_strDrawText_InputContainerProperty = 0x330; // CUtlString
                constexpr std::ptrdiff_t m_vecDrawText_Position = 0x338; // Vector2D
                constexpr std::ptrdiff_t m_colDrawText_Color = 0x340; // Color
                constexpr std::ptrdiff_t m_strDrawText_Font = 0x348; // CUtlString
                constexpr std::ptrdiff_t m_vecConditions = 0x350; // CUtlVector<CompMatMutatorCondition_t>
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CompositeMaterialInputContainer_t {
                constexpr std::ptrdiff_t m_bEnabled = 0x0; // bool
                constexpr std::ptrdiff_t m_nCompositeMaterialInputContainerSourceType = 0x4; // CompositeMaterialInputContainerSourceType_t
                constexpr std::ptrdiff_t m_strSpecificContainerMaterial = 0x8; // CResourceName
                constexpr std::ptrdiff_t m_strAttrName = 0xE8; // CUtlString
                constexpr std::ptrdiff_t m_strAlias = 0xF0; // CUtlString
                constexpr std::ptrdiff_t m_vecLooseVariables = 0xF8; // CUtlVector<CompositeMaterialInputLooseVariable_t>
                constexpr std::ptrdiff_t m_strAttrNameForVar = 0x110; // CUtlString
                constexpr std::ptrdiff_t m_bExposeExternally = 0x118; // bool
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CompositeMaterialAssemblyProcedure_t {
                constexpr std::ptrdiff_t m_vecCompMatIncludes = 0x0; // CUtlVector<CResourceName>
                constexpr std::ptrdiff_t m_vecMatchFilters = 0x18; // CUtlVector<CompositeMaterialMatchFilter_t>
                constexpr std::ptrdiff_t m_vecCompositeInputContainers = 0x30; // CUtlVector<CompositeMaterialInputContainer_t>
                constexpr std::ptrdiff_t m_vecPropertyMutators = 0x48; // CUtlVector<CompMatPropertyMutator_t>
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPropertyElementNameFn
            namespace GeneratedTextureHandle_t {
                constexpr std::ptrdiff_t m_strBitmapName = 0x0; // CUtlString
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MPropertyElementNameFn
            namespace CompositeMaterial_t {
                constexpr std::ptrdiff_t m_TargetKVs = 0x8; // KeyValues3
                constexpr std::ptrdiff_t m_PreGenerationKVs = 0x18; // KeyValues3
                constexpr std::ptrdiff_t m_FinalKVs = 0x28; // KeyValues3
                constexpr std::ptrdiff_t m_vecGeneratedTextures = 0x40; // CUtlVector<GeneratedTextureHandle_t>
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CompositeMaterialEditorPoint_t {
                constexpr std::ptrdiff_t m_ModelName = 0x0; // CResourceName
                constexpr std::ptrdiff_t m_nSequenceIndex = 0xE0; // int32
                constexpr std::ptrdiff_t m_flCycle = 0xE4; // float32
                constexpr std::ptrdiff_t m_KVModelStateChoices = 0xE8; // KeyValues3
                constexpr std::ptrdiff_t m_bEnableChildModel = 0xF8; // bool
                constexpr std::ptrdiff_t m_ChildModelName = 0x100; // CResourceName
                constexpr std::ptrdiff_t m_vecCompositeMaterialAssemblyProcedures = 0x1E0; // CUtlVector<CompositeMaterialAssemblyProcedure_t>
                constexpr std::ptrdiff_t m_vecCompositeMaterials = 0x1F8; // CUtlVector<CompositeMaterial_t>
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCompositeMaterialEditorDoc {
                constexpr std::ptrdiff_t m_nVersion = 0x8; // int32
                constexpr std::ptrdiff_t m_Points = 0x10; // CUtlVector<CompositeMaterialEditorPoint_t>
                constexpr std::ptrdiff_t m_KVthumbnail = 0x28; // KeyValues3
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace C_CSObserverPawnAPI {
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace C_CSPlayerPawnAPI {
            }
            // Parent: C_BaseEntity
            // Fields count: 7
            //
            // Metadata:
            // NetworkVarNames: m_iActiveIssueIndex (int)
            // NetworkVarNames: m_iOnlyTeamToVote (int)
            // NetworkVarNames: m_nVoteOptionCount (int)
            // NetworkVarNames: m_nPotentialVotes (int)
            // NetworkVarNames: m_bIsYesNoVote (bool)
            namespace C_VoteController {
                constexpr std::ptrdiff_t m_iActiveIssueIndex = 0x6DC; // int32
                constexpr std::ptrdiff_t m_iOnlyTeamToVote = 0x6E0; // int32
                constexpr std::ptrdiff_t m_nVoteOptionCount = 0x6E4; // int32[5]
                constexpr std::ptrdiff_t m_nPotentialVotes = 0x6F8; // int32
                constexpr std::ptrdiff_t m_bVotesDirty = 0x6FC; // bool
                constexpr std::ptrdiff_t m_bTypeDirty = 0x6FD; // bool
                constexpr std::ptrdiff_t m_bIsYesNoVote = 0x6FE; // bool
            }
            // Parent: C_BaseEntity
            // Fields count: 17
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
            namespace C_MapVetoPickController {
                constexpr std::ptrdiff_t m_nDraftType = 0x6DC; // int32
                constexpr std::ptrdiff_t m_nTeamWinningCoinToss = 0x6E0; // int32
                constexpr std::ptrdiff_t m_nTeamWithFirstChoice = 0x6E4; // int32[64]
                constexpr std::ptrdiff_t m_nVoteMapIdsList = 0x7E4; // int32[7]
                constexpr std::ptrdiff_t m_nAccountIDs = 0x800; // int32[64]
                constexpr std::ptrdiff_t m_nMapId0 = 0x900; // int32[64]
                constexpr std::ptrdiff_t m_nMapId1 = 0xA00; // int32[64]
                constexpr std::ptrdiff_t m_nMapId2 = 0xB00; // int32[64]
                constexpr std::ptrdiff_t m_nMapId3 = 0xC00; // int32[64]
                constexpr std::ptrdiff_t m_nMapId4 = 0xD00; // int32[64]
                constexpr std::ptrdiff_t m_nMapId5 = 0xE00; // int32[64]
                constexpr std::ptrdiff_t m_nStartingSide0 = 0xF00; // int32[64]
                constexpr std::ptrdiff_t m_nCurrentPhase = 0x1000; // int32
                constexpr std::ptrdiff_t m_nPhaseStartTick = 0x1004; // int32
                constexpr std::ptrdiff_t m_nPhaseDurationTicks = 0x1008; // int32
                constexpr std::ptrdiff_t m_nPostDataUpdateTick = 0x100C; // int32
                constexpr std::ptrdiff_t m_bDisabledHud = 0x1010; // bool
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
            namespace C_EnvCombinedLightProbeVolume {
                constexpr std::ptrdiff_t m_Color = 0x1728; // Color
                constexpr std::ptrdiff_t m_flBrightness = 0x172C; // float32
                constexpr std::ptrdiff_t m_hCubemapTexture = 0x1730; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_bCustomCubemapTexture = 0x1738; // bool
                constexpr std::ptrdiff_t m_hLightProbeTexture = 0x1740; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hLightProbeDirectLightIndicesTexture = 0x1748; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hLightProbeDirectLightScalarsTexture = 0x1750; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hLightProbeDirectLightShadowsTexture = 0x1758; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_vBoxMins = 0x1760; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x176C; // Vector
                constexpr std::ptrdiff_t m_bMoveable = 0x1778; // bool
                constexpr std::ptrdiff_t m_nHandshake = 0x177C; // int32
                constexpr std::ptrdiff_t m_nEnvCubeMapArrayIndex = 0x1780; // int32
                constexpr std::ptrdiff_t m_nPriority = 0x1784; // int32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x1788; // bool
                constexpr std::ptrdiff_t m_flEdgeFadeDist = 0x178C; // float32
                constexpr std::ptrdiff_t m_vEdgeFadeDists = 0x1790; // Vector
                constexpr std::ptrdiff_t m_nLightProbeSizeX = 0x179C; // int32
                constexpr std::ptrdiff_t m_nLightProbeSizeY = 0x17A0; // int32
                constexpr std::ptrdiff_t m_nLightProbeSizeZ = 0x17A4; // int32
                constexpr std::ptrdiff_t m_nLightProbeAtlasX = 0x17A8; // int32
                constexpr std::ptrdiff_t m_nLightProbeAtlasY = 0x17AC; // int32
                constexpr std::ptrdiff_t m_nLightProbeAtlasZ = 0x17B0; // int32
                constexpr std::ptrdiff_t m_bEnabled = 0x17C9; // bool
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
            namespace C_EnvCubemap {
                constexpr std::ptrdiff_t m_hCubemapTexture = 0x750; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_bCustomCubemapTexture = 0x758; // bool
                constexpr std::ptrdiff_t m_flInfluenceRadius = 0x75C; // float32
                constexpr std::ptrdiff_t m_vBoxProjectMins = 0x760; // Vector
                constexpr std::ptrdiff_t m_vBoxProjectMaxs = 0x76C; // Vector
                constexpr std::ptrdiff_t m_bMoveable = 0x778; // bool
                constexpr std::ptrdiff_t m_nHandshake = 0x77C; // int32
                constexpr std::ptrdiff_t m_nEnvCubeMapArrayIndex = 0x780; // int32
                constexpr std::ptrdiff_t m_nPriority = 0x784; // int32
                constexpr std::ptrdiff_t m_flEdgeFadeDist = 0x788; // float32
                constexpr std::ptrdiff_t m_vEdgeFadeDists = 0x78C; // Vector
                constexpr std::ptrdiff_t m_flDiffuseScale = 0x798; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x79C; // bool
                constexpr std::ptrdiff_t m_bDefaultEnvMap = 0x79D; // bool
                constexpr std::ptrdiff_t m_bDefaultSpecEnvMap = 0x79E; // bool
                constexpr std::ptrdiff_t m_bIndoorCubeMap = 0x79F; // bool
                constexpr std::ptrdiff_t m_bCopyDiffuseFromDefaultCubemap = 0x7A0; // bool
                constexpr std::ptrdiff_t m_bEnabled = 0x7B0; // bool
            }
            // Parent: C_BaseEntity
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
            namespace C_EnvCubemapFog {
                constexpr std::ptrdiff_t m_flEndDistance = 0x6D0; // float32
                constexpr std::ptrdiff_t m_flStartDistance = 0x6D4; // float32
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x6D8; // float32
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x6DC; // bool
                constexpr std::ptrdiff_t m_flFogHeightWidth = 0x6E0; // float32
                constexpr std::ptrdiff_t m_flFogHeightEnd = 0x6E4; // float32
                constexpr std::ptrdiff_t m_flFogHeightStart = 0x6E8; // float32
                constexpr std::ptrdiff_t m_flFogHeightExponent = 0x6EC; // float32
                constexpr std::ptrdiff_t m_flLODBias = 0x6F0; // float32
                constexpr std::ptrdiff_t m_bActive = 0x6F4; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0x6F5; // bool
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x6F8; // float32
                constexpr std::ptrdiff_t m_nCubemapSourceType = 0x6FC; // int32
                constexpr std::ptrdiff_t m_hSkyMaterial = 0x700; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_iszSkyEntity = 0x708; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFogCubemapTexture = 0x710; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_bHasHeightFogEnd = 0x718; // bool
                constexpr std::ptrdiff_t m_bFirstTime = 0x719; // bool
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
            namespace C_GradientFog {
                constexpr std::ptrdiff_t m_hGradientFogTexture = 0x6D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_flFogStartDistance = 0x6D8; // float32
                constexpr std::ptrdiff_t m_flFogEndDistance = 0x6DC; // float32
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x6E0; // bool
                constexpr std::ptrdiff_t m_flFogStartHeight = 0x6E4; // float32
                constexpr std::ptrdiff_t m_flFogEndHeight = 0x6E8; // float32
                constexpr std::ptrdiff_t m_flFarZ = 0x6EC; // float32
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x6F0; // float32
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x6F4; // float32
                constexpr std::ptrdiff_t m_flFogVerticalExponent = 0x6F8; // float32
                constexpr std::ptrdiff_t m_fogColor = 0x6FC; // Color
                constexpr std::ptrdiff_t m_flFogStrength = 0x700; // float32
                constexpr std::ptrdiff_t m_flFadeTime = 0x704; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x708; // bool
                constexpr std::ptrdiff_t m_bIsEnabled = 0x709; // bool
                constexpr std::ptrdiff_t m_bGradientFogNeedsTextures = 0x70A; // bool
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
            namespace C_EnvLightProbeVolume {
                constexpr std::ptrdiff_t m_hLightProbeTexture = 0x16A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hLightProbeDirectLightIndicesTexture = 0x16B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hLightProbeDirectLightScalarsTexture = 0x16B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hLightProbeDirectLightShadowsTexture = 0x16C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_vBoxMins = 0x16C8; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x16D4; // Vector
                constexpr std::ptrdiff_t m_bMoveable = 0x16E0; // bool
                constexpr std::ptrdiff_t m_nHandshake = 0x16E4; // int32
                constexpr std::ptrdiff_t m_nPriority = 0x16E8; // int32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x16EC; // bool
                constexpr std::ptrdiff_t m_nLightProbeSizeX = 0x16F0; // int32
                constexpr std::ptrdiff_t m_nLightProbeSizeY = 0x16F4; // int32
                constexpr std::ptrdiff_t m_nLightProbeSizeZ = 0x16F8; // int32
                constexpr std::ptrdiff_t m_nLightProbeAtlasX = 0x16FC; // int32
                constexpr std::ptrdiff_t m_nLightProbeAtlasY = 0x1700; // int32
                constexpr std::ptrdiff_t m_nLightProbeAtlasZ = 0x1704; // int32
                constexpr std::ptrdiff_t m_bEnabled = 0x1711; // bool
            }
            // Parent: C_BaseEntity
            // Fields count: 6
            //
            // Metadata:
            // NetworkVarNames: m_flVisibilityStrength (float)
            // NetworkVarNames: m_flFogDistanceMultiplier (float)
            // NetworkVarNames: m_flFogMaxDensityMultiplier (float)
            // NetworkVarNames: m_flFadeTime (float)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_bIsEnabled (bool)
            namespace C_PlayerVisibility {
                constexpr std::ptrdiff_t m_flVisibilityStrength = 0x6D0; // float32
                constexpr std::ptrdiff_t m_flFogDistanceMultiplier = 0x6D4; // float32
                constexpr std::ptrdiff_t m_flFogMaxDensityMultiplier = 0x6D8; // float32
                constexpr std::ptrdiff_t m_flFadeTime = 0x6DC; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x6E0; // bool
                constexpr std::ptrdiff_t m_bIsEnabled = 0x6E1; // bool
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
            namespace C_TonemapController2 {
                constexpr std::ptrdiff_t m_flAutoExposureMin = 0x6D0; // float32
                constexpr std::ptrdiff_t m_flAutoExposureMax = 0x6D4; // float32
                constexpr std::ptrdiff_t m_flTonemapPercentTarget = 0x6D8; // float32
                constexpr std::ptrdiff_t m_flTonemapPercentBrightPixels = 0x6DC; // float32
                constexpr std::ptrdiff_t m_flTonemapMinAvgLum = 0x6E0; // float32
                constexpr std::ptrdiff_t m_flExposureAdaptationSpeedUp = 0x6E4; // float32
                constexpr std::ptrdiff_t m_flExposureAdaptationSpeedDown = 0x6E8; // float32
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x6EC; // float32
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
            namespace C_EnvVolumetricFogController {
                constexpr std::ptrdiff_t m_flScattering = 0x6D0; // float32
                constexpr std::ptrdiff_t m_flAnisotropy = 0x6D4; // float32
                constexpr std::ptrdiff_t m_flFadeSpeed = 0x6D8; // float32
                constexpr std::ptrdiff_t m_flDrawDistance = 0x6DC; // float32
                constexpr std::ptrdiff_t m_flFadeInStart = 0x6E0; // float32
                constexpr std::ptrdiff_t m_flFadeInEnd = 0x6E4; // float32
                constexpr std::ptrdiff_t m_flIndirectStrength = 0x6E8; // float32
                constexpr std::ptrdiff_t m_nIndirectTextureDimX = 0x6EC; // int32
                constexpr std::ptrdiff_t m_nIndirectTextureDimY = 0x6F0; // int32
                constexpr std::ptrdiff_t m_nIndirectTextureDimZ = 0x6F4; // int32
                constexpr std::ptrdiff_t m_vBoxMins = 0x6F8; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x704; // Vector
                constexpr std::ptrdiff_t m_bActive = 0x710; // bool
                constexpr std::ptrdiff_t m_flStartAnisoTime = 0x714; // GameTime_t
                constexpr std::ptrdiff_t m_flStartScatterTime = 0x718; // GameTime_t
                constexpr std::ptrdiff_t m_flStartDrawDistanceTime = 0x71C; // GameTime_t
                constexpr std::ptrdiff_t m_flStartAnisotropy = 0x720; // float32
                constexpr std::ptrdiff_t m_flStartScattering = 0x724; // float32
                constexpr std::ptrdiff_t m_flStartDrawDistance = 0x728; // float32
                constexpr std::ptrdiff_t m_flDefaultAnisotropy = 0x72C; // float32
                constexpr std::ptrdiff_t m_flDefaultScattering = 0x730; // float32
                constexpr std::ptrdiff_t m_flDefaultDrawDistance = 0x734; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x738; // bool
                constexpr std::ptrdiff_t m_bEnableIndirect = 0x739; // bool
                constexpr std::ptrdiff_t m_bIsMaster = 0x73A; // bool
                constexpr std::ptrdiff_t m_hFogIndirectTexture = 0x740; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_nForceRefreshCount = 0x748; // int32
                constexpr std::ptrdiff_t m_bFirstTime = 0x74C; // bool
            }
            // Parent: C_BaseEntity
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
            namespace C_EnvVolumetricFogVolume {
                constexpr std::ptrdiff_t m_bActive = 0x6D0; // bool
                constexpr std::ptrdiff_t m_vBoxMins = 0x6D4; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x6E0; // Vector
                constexpr std::ptrdiff_t m_bStartDisabled = 0x6EC; // bool
                constexpr std::ptrdiff_t m_flStrength = 0x6F0; // float32
                constexpr std::ptrdiff_t m_nFalloffShape = 0x6F4; // int32
                constexpr std::ptrdiff_t m_flFalloffExponent = 0x6F8; // float32
            }
            // Parent: C_BaseEntity
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_fog (fogparams_t)
            namespace C_FogController {
                constexpr std::ptrdiff_t m_fog = 0x6D0; // fogparams_t
                constexpr std::ptrdiff_t m_bUseAngles = 0x738; // bool
                constexpr std::ptrdiff_t m_iChangedVariables = 0x73C; // int32
            }
            // Parent: C_BaseEntity
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_nMode (int)
            // NetworkVarNames: m_vBoxSize (Vector)
            // NetworkVarNames: m_bEnabled (bool)
            namespace C_InfoVisibilityBox {
                constexpr std::ptrdiff_t m_nMode = 0x6D4; // int32
                constexpr std::ptrdiff_t m_vBoxSize = 0x6D8; // Vector
                constexpr std::ptrdiff_t m_bEnabled = 0x6E4; // bool
            }
            // Parent: C_BaseEntity
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_worldName (string_t)
            // NetworkVarNames: m_layerName (string_t)
            // NetworkVarNames: m_bWorldLayerVisible (bool)
            // NetworkVarNames: m_bEntitiesSpawned (bool)
            namespace CInfoWorldLayer {
                constexpr std::ptrdiff_t m_pOutputOnEntitiesSpawned = 0x6D0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_worldName = 0x6F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_layerName = 0x700; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bWorldLayerVisible = 0x708; // bool
                constexpr std::ptrdiff_t m_bEntitiesSpawned = 0x709; // bool
                constexpr std::ptrdiff_t m_bCreateAsChildSpawnGroup = 0x70A; // bool
                constexpr std::ptrdiff_t m_hLayerSpawnGroup = 0x70C; // uint32
                constexpr std::ptrdiff_t m_bWorldLayerActuallyVisible = 0x710; // bool
            }
            // Parent: C_BaseEntity
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
            namespace C_PointCamera {
                constexpr std::ptrdiff_t m_FOV = 0x6D0; // float32
                constexpr std::ptrdiff_t m_Resolution = 0x6D4; // float32
                constexpr std::ptrdiff_t m_bFogEnable = 0x6D8; // bool
                constexpr std::ptrdiff_t m_FogColor = 0x6D9; // Color
                constexpr std::ptrdiff_t m_flFogStart = 0x6E0; // float32
                constexpr std::ptrdiff_t m_flFogEnd = 0x6E4; // float32
                constexpr std::ptrdiff_t m_flFogMaxDensity = 0x6E8; // float32
                constexpr std::ptrdiff_t m_bActive = 0x6EC; // bool
                constexpr std::ptrdiff_t m_bUseScreenAspectRatio = 0x6ED; // bool
                constexpr std::ptrdiff_t m_flAspectRatio = 0x6F0; // float32
                constexpr std::ptrdiff_t m_bNoSky = 0x6F4; // bool
                constexpr std::ptrdiff_t m_fBrightness = 0x6F8; // float32
                constexpr std::ptrdiff_t m_flZFar = 0x6FC; // float32
                constexpr std::ptrdiff_t m_flZNear = 0x700; // float32
                constexpr std::ptrdiff_t m_bCanHLTVUse = 0x704; // bool
                constexpr std::ptrdiff_t m_bDofEnabled = 0x705; // bool
                constexpr std::ptrdiff_t m_flDofNearBlurry = 0x708; // float32
                constexpr std::ptrdiff_t m_flDofNearCrisp = 0x70C; // float32
                constexpr std::ptrdiff_t m_flDofFarCrisp = 0x710; // float32
                constexpr std::ptrdiff_t m_flDofFarBlurry = 0x714; // float32
                constexpr std::ptrdiff_t m_flDofTiltToGround = 0x718; // float32
                constexpr std::ptrdiff_t m_TargetFOV = 0x71C; // float32
                constexpr std::ptrdiff_t m_DegreesPerSecond = 0x720; // float32
                constexpr std::ptrdiff_t m_bIsOn = 0x724; // bool
                constexpr std::ptrdiff_t m_pNext = 0x728; // C_PointCamera*
            }
            // Parent: C_BaseEntity
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bDisabled (bool)
            // NetworkVarNames: m_iszSoundAreaType (string_t)
            // NetworkVarNames: m_vPos (Vector)
            namespace C_SoundAreaEntityBase {
                constexpr std::ptrdiff_t m_bDisabled = 0x6D0; // bool
                constexpr std::ptrdiff_t m_bWasEnabled = 0x6D8; // bool
                constexpr std::ptrdiff_t m_iszSoundAreaType = 0x6E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vPos = 0x6E8; // Vector
            }
            // Parent: C_SoundAreaEntityBase
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_flRadius (float)
            namespace C_SoundAreaEntitySphere {
                constexpr std::ptrdiff_t m_flRadius = 0x6F4; // float32
            }
            // Parent: C_SoundAreaEntityBase
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_vMin (Vector)
            // NetworkVarNames: m_vMax (Vector)
            namespace C_SoundAreaEntityOrientedBox {
                constexpr std::ptrdiff_t m_vMin = 0x6F4; // Vector
                constexpr std::ptrdiff_t m_vMax = 0x700; // Vector
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
            namespace C_Team {
                constexpr std::ptrdiff_t m_aPlayerControllers = 0x6D0; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
                constexpr std::ptrdiff_t m_aPlayers = 0x6E8; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
                constexpr std::ptrdiff_t m_iScore = 0x700; // int32
                constexpr std::ptrdiff_t m_szTeamname = 0x704; // char[129]
            }
            // Parent: C_BaseEntity
            // Fields count: 15
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
            // MNetworkReplayCompatField
            namespace CBasePlayerController {
                constexpr std::ptrdiff_t m_nFinalPredictedTick = 0x6D8; // int32
                constexpr std::ptrdiff_t m_CommandContext = 0x6E0; // C_CommandContext
                constexpr std::ptrdiff_t m_nInButtonsWhichAreToggles = 0x778; // uint64
                constexpr std::ptrdiff_t m_nTickBase = 0x780; // uint32
                constexpr std::ptrdiff_t m_hPawn = 0x784; // CHandle<C_BasePlayerPawn>
                constexpr std::ptrdiff_t m_hPredictedPawn = 0x788; // CHandle<C_BasePlayerPawn>
                constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x78C; // CSplitScreenSlot
                constexpr std::ptrdiff_t m_hSplitOwner = 0x790; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_hSplitScreenPlayers = 0x798; // CUtlVector<CHandle<CBasePlayerController>>
                constexpr std::ptrdiff_t m_bIsHLTV = 0x7B0; // bool
                constexpr std::ptrdiff_t m_iConnected = 0x7B4; // PlayerConnectedState
                constexpr std::ptrdiff_t m_iszPlayerName = 0x7B8; // char[128]
                constexpr std::ptrdiff_t m_steamID = 0x840; // uint64
                constexpr std::ptrdiff_t m_bIsLocalPlayerController = 0x848; // bool
                constexpr std::ptrdiff_t m_iDesiredFOV = 0x84C; // uint32
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBasePlayerVData {
                constexpr std::ptrdiff_t m_sModelName = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_flHeadDamageMultiplier = 0x108; // CSkillFloat
                constexpr std::ptrdiff_t m_flChestDamageMultiplier = 0x118; // CSkillFloat
                constexpr std::ptrdiff_t m_flStomachDamageMultiplier = 0x128; // CSkillFloat
                constexpr std::ptrdiff_t m_flArmDamageMultiplier = 0x138; // CSkillFloat
                constexpr std::ptrdiff_t m_flLegDamageMultiplier = 0x148; // CSkillFloat
                constexpr std::ptrdiff_t m_flHoldBreathTime = 0x158; // float32
                constexpr std::ptrdiff_t m_flDrowningDamageInterval = 0x15C; // float32
                constexpr std::ptrdiff_t m_nDrowningDamageInitial = 0x160; // int32
                constexpr std::ptrdiff_t m_nDrowningDamageMax = 0x164; // int32
                constexpr std::ptrdiff_t m_nWaterSpeed = 0x168; // int32
                constexpr std::ptrdiff_t m_flUseRange = 0x16C; // float32
                constexpr std::ptrdiff_t m_flUseAngleTolerance = 0x170; // float32
                constexpr std::ptrdiff_t m_flCrouchTime = 0x174; // float32
            }
            // Parent: None
            // Fields count: 20
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBasePlayerWeaponVData {
                constexpr std::ptrdiff_t m_szWorldModel = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_bBuiltRightHanded = 0x108; // bool
                constexpr std::ptrdiff_t m_bAllowFlipping = 0x109; // bool
                constexpr std::ptrdiff_t m_sMuzzleAttachment = 0x110; // CUtlString
                constexpr std::ptrdiff_t m_szMuzzleFlashParticle = 0x118; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_iFlags = 0x1F8; // ItemFlagTypes_t
                constexpr std::ptrdiff_t m_nPrimaryAmmoType = 0x1F9; // AmmoIndex_t
                constexpr std::ptrdiff_t m_nSecondaryAmmoType = 0x1FA; // AmmoIndex_t
                constexpr std::ptrdiff_t m_iMaxClip1 = 0x1FC; // int32
                constexpr std::ptrdiff_t m_iMaxClip2 = 0x200; // int32
                constexpr std::ptrdiff_t m_iDefaultClip1 = 0x204; // int32
                constexpr std::ptrdiff_t m_iDefaultClip2 = 0x208; // int32
                constexpr std::ptrdiff_t m_iWeight = 0x20C; // int32
                constexpr std::ptrdiff_t m_bAutoSwitchTo = 0x210; // bool
                constexpr std::ptrdiff_t m_bAutoSwitchFrom = 0x211; // bool
                constexpr std::ptrdiff_t m_iRumbleEffect = 0x214; // RumbleEffect_t
                constexpr std::ptrdiff_t m_bLinkedCooldowns = 0x218; // bool
                constexpr std::ptrdiff_t m_aShootSounds = 0x220; // CUtlMap<WeaponSound_t,CSoundEventName>
                constexpr std::ptrdiff_t m_iSlot = 0x240; // int32
                constexpr std::ptrdiff_t m_iPosition = 0x244; // int32
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
            namespace CBaseAnimGraphController {
                constexpr std::ptrdiff_t m_animGraphNetworkedVars = 0x18; // CAnimGraphNetworkedVariables
                constexpr std::ptrdiff_t m_bSequenceFinished = 0x14A8; // bool
                constexpr std::ptrdiff_t m_flSoundSyncTime = 0x14AC; // float32
                constexpr std::ptrdiff_t m_hSequence = 0x14B0; // HSequence
                constexpr std::ptrdiff_t m_flSeqStartTime = 0x14B4; // GameTime_t
                constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x14B8; // float32
                constexpr std::ptrdiff_t m_nAnimLoopMode = 0x14BC; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_flPlaybackRate = 0x14C0; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_nNotifyState = 0x14CC; // SequenceFinishNotifyState_t
                constexpr std::ptrdiff_t m_bNetworkedAnimationInputsChanged = 0x14CE; // bool
                constexpr std::ptrdiff_t m_bNetworkedSequenceChanged = 0x14CF; // bool
                constexpr std::ptrdiff_t m_bLastUpdateSkipped = 0x14D0; // bool
                constexpr std::ptrdiff_t m_flPrevAnimUpdateTime = 0x14D4; // GameTime_t
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
            namespace C_BaseModelEntity {
                constexpr std::ptrdiff_t m_CRenderComponent = 0x9A0; // CRenderComponent*
                constexpr std::ptrdiff_t m_CHitboxComponent = 0x9A8; // CHitboxComponent
                constexpr std::ptrdiff_t m_bInitModelEffects = 0x9F0; // bool
                constexpr std::ptrdiff_t m_bIsStaticProp = 0x9F1; // bool
                constexpr std::ptrdiff_t m_nLastAddDecal = 0x9F4; // int32
                constexpr std::ptrdiff_t m_nDecalsAdded = 0x9F8; // int32
                constexpr std::ptrdiff_t m_iOldHealth = 0x9FC; // int32
                constexpr std::ptrdiff_t m_nRenderMode = 0xA00; // RenderMode_t
                constexpr std::ptrdiff_t m_nRenderFX = 0xA01; // RenderFx_t
                constexpr std::ptrdiff_t m_bAllowFadeInView = 0xA02; // bool
                constexpr std::ptrdiff_t m_clrRender = 0xA03; // Color
                constexpr std::ptrdiff_t m_vecRenderAttributes = 0xA08; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
                constexpr std::ptrdiff_t m_bRenderToCubemaps = 0xA70; // bool
                constexpr std::ptrdiff_t m_Collision = 0xA78; // CCollisionProperty
                constexpr std::ptrdiff_t m_Glow = 0xB28; // CGlowProperty
                constexpr std::ptrdiff_t m_flGlowBackfaceMult = 0xB80; // float32
                constexpr std::ptrdiff_t m_fadeMinDist = 0xB84; // float32
                constexpr std::ptrdiff_t m_fadeMaxDist = 0xB88; // float32
                constexpr std::ptrdiff_t m_flFadeScale = 0xB8C; // float32
                constexpr std::ptrdiff_t m_flShadowStrength = 0xB90; // float32
                constexpr std::ptrdiff_t m_nObjectCulling = 0xB94; // uint8
                constexpr std::ptrdiff_t m_nAddDecal = 0xB98; // int32
                constexpr std::ptrdiff_t m_vDecalPosition = 0xB9C; // Vector
                constexpr std::ptrdiff_t m_vDecalForwardAxis = 0xBA8; // Vector
                constexpr std::ptrdiff_t m_flDecalHealBloodRate = 0xBB4; // float32
                constexpr std::ptrdiff_t m_flDecalHealHeightRate = 0xBB8; // float32
                constexpr std::ptrdiff_t m_ConfigEntitiesToPropagateMaterialDecalsTo = 0xBC0; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_vecViewOffset = 0xBD8; // CNetworkViewOffsetVector
                constexpr std::ptrdiff_t m_pClientAlphaProperty = 0xC08; // CClientAlphaProperty*
                constexpr std::ptrdiff_t m_ClientOverrideTint = 0xC10; // Color
                constexpr std::ptrdiff_t m_bUseClientOverrideTint = 0xC14; // bool
            }
            // Parent: C_BaseModelEntity
            // Fields count: 24
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
            namespace C_ParticleSystem {
                constexpr std::ptrdiff_t m_szSnapshotFileName = 0xC50; // char[512]
                constexpr std::ptrdiff_t m_bActive = 0xE50; // bool
                constexpr std::ptrdiff_t m_bFrozen = 0xE51; // bool
                constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0xE54; // float32
                constexpr std::ptrdiff_t m_nStopType = 0xE58; // int32
                constexpr std::ptrdiff_t m_bAnimateDuringGameplayPause = 0xE5C; // bool
                constexpr std::ptrdiff_t m_iEffectIndex = 0xE60; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_flStartTime = 0xE68; // GameTime_t
                constexpr std::ptrdiff_t m_flPreSimTime = 0xE6C; // float32
                constexpr std::ptrdiff_t m_vServerControlPoints = 0xE70; // Vector[4]
                constexpr std::ptrdiff_t m_iServerControlPointAssignments = 0xEA0; // uint8[4]
                constexpr std::ptrdiff_t m_hControlPointEnts = 0xEA4; // CHandle<C_BaseEntity>[64]
                constexpr std::ptrdiff_t m_bNoSave = 0xFA4; // bool
                constexpr std::ptrdiff_t m_bNoFreeze = 0xFA5; // bool
                constexpr std::ptrdiff_t m_bNoRamp = 0xFA6; // bool
                constexpr std::ptrdiff_t m_bStartActive = 0xFA7; // bool
                constexpr std::ptrdiff_t m_iszEffectName = 0xFA8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszControlPointNames = 0xFB0; // CUtlSymbolLarge[64]
                constexpr std::ptrdiff_t m_nDataCP = 0x11B0; // int32
                constexpr std::ptrdiff_t m_vecDataCPValue = 0x11B4; // Vector
                constexpr std::ptrdiff_t m_nTintCP = 0x11C0; // int32
                constexpr std::ptrdiff_t m_clrTint = 0x11C4; // Color
                constexpr std::ptrdiff_t m_bOldActive = 0x11E8; // bool
                constexpr std::ptrdiff_t m_bOldFrozen = 0x11E9; // bool
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
            namespace C_PathParticleRope {
                constexpr std::ptrdiff_t m_bStartActive = 0x6D0; // bool
                constexpr std::ptrdiff_t m_flMaxSimulationTime = 0x6D4; // float32
                constexpr std::ptrdiff_t m_iszEffectName = 0x6D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PathNodes_Name = 0x6E0; // CUtlVector<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_flParticleSpacing = 0x6F8; // float32
                constexpr std::ptrdiff_t m_flSlack = 0x6FC; // float32
                constexpr std::ptrdiff_t m_flRadius = 0x700; // float32
                constexpr std::ptrdiff_t m_ColorTint = 0x704; // Color
                constexpr std::ptrdiff_t m_nEffectState = 0x708; // int32
                constexpr std::ptrdiff_t m_iEffectIndex = 0x710; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_PathNodes_Position = 0x718; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_TangentIn = 0x730; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_TangentOut = 0x748; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_Color = 0x760; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_PinEnabled = 0x778; // C_NetworkUtlVectorBase<bool>
                constexpr std::ptrdiff_t m_PathNodes_RadiusScale = 0x790; // C_NetworkUtlVectorBase<float32>
            }
            // Parent: C_BaseModelEntity
            // Fields count: 7
            //
            // Metadata:
            // NetworkVarNames: m_Flags (uint8)
            // NetworkVarNames: m_LightStyle (uint8)
            // NetworkVarNames: m_Radius (float32)
            // NetworkVarNames: m_Exponent (int32)
            // NetworkVarNames: m_InnerAngle (float32)
            // NetworkVarNames: m_OuterAngle (float32)
            // NetworkVarNames: m_SpotRadius (float32)
            namespace C_DynamicLight {
                constexpr std::ptrdiff_t m_Flags = 0xC50; // uint8
                constexpr std::ptrdiff_t m_LightStyle = 0xC51; // uint8
                constexpr std::ptrdiff_t m_Radius = 0xC54; // float32
                constexpr std::ptrdiff_t m_Exponent = 0xC58; // int32
                constexpr std::ptrdiff_t m_InnerAngle = 0xC5C; // float32
                constexpr std::ptrdiff_t m_OuterAngle = 0xC60; // float32
                constexpr std::ptrdiff_t m_SpotRadius = 0xC64; // float32
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // NetworkVarNames: m_iszOverlayNames (string_t)
            // NetworkVarNames: m_flOverlayTimes (float32)
            // NetworkVarNames: m_flStartTime (GameTime_t)
            // NetworkVarNames: m_iDesiredOverlay (int32)
            // NetworkVarNames: m_bIsActive (bool)
            namespace C_EnvScreenOverlay {
                constexpr std::ptrdiff_t m_iszOverlayNames = 0x6D0; // CUtlSymbolLarge[10]
                constexpr std::ptrdiff_t m_flOverlayTimes = 0x720; // float32[10]
                constexpr std::ptrdiff_t m_flStartTime = 0x748; // GameTime_t
                constexpr std::ptrdiff_t m_iDesiredOverlay = 0x74C; // int32
                constexpr std::ptrdiff_t m_bIsActive = 0x750; // bool
                constexpr std::ptrdiff_t m_bWasActive = 0x751; // bool
                constexpr std::ptrdiff_t m_iCachedDesiredOverlay = 0x754; // int32
                constexpr std::ptrdiff_t m_iCurrentOverlay = 0x758; // int32
                constexpr std::ptrdiff_t m_flCurrentOverlayTime = 0x75C; // GameTime_t
            }
            // Parent: C_BaseModelEntity
            // Fields count: 8
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
            namespace C_LightGlow {
                constexpr std::ptrdiff_t m_nHorizontalSize = 0xC50; // uint32
                constexpr std::ptrdiff_t m_nVerticalSize = 0xC54; // uint32
                constexpr std::ptrdiff_t m_nMinDist = 0xC58; // uint32
                constexpr std::ptrdiff_t m_nMaxDist = 0xC5C; // uint32
                constexpr std::ptrdiff_t m_nOuterMaxDist = 0xC60; // uint32
                constexpr std::ptrdiff_t m_flGlowProxySize = 0xC64; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0xC68; // float32
                constexpr std::ptrdiff_t m_Glow = 0xC70; // C_LightGlowOverlay
            }
            // Parent: C_BaseEntity
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_iCurrentMaxRagdollCount (int8)
            namespace C_RagdollManager {
                constexpr std::ptrdiff_t m_iCurrentMaxRagdollCount = 0x6D0; // int8
            }
            // Parent: C_BaseModelEntity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flLightScale (float32)
            // NetworkVarNames: m_Radius (float32)
            namespace C_SpotlightEnd {
                constexpr std::ptrdiff_t m_flLightScale = 0xC50; // float32
                constexpr std::ptrdiff_t m_Radius = 0xC54; // float32
            }
            // Parent: C_BaseEntity
            // Fields count: 25
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
            // NetworkVarNames: m_hOutputEntities (CHandle<C_BaseEntity>)
            // NetworkVarNames: m_nHapticsType (ValueRemapperHapticsType_t)
            // NetworkVarNames: m_nMomentumType (ValueRemapperMomentumType_t)
            // NetworkVarNames: m_flMomentumModifier (float)
            // NetworkVarNames: m_flSnapValue (float)
            // NetworkVarNames: m_nRatchetType (ValueRemapperRatchetType_t)
            // NetworkVarNames: m_flInputOffset (float)
            namespace C_PointValueRemapper {
                constexpr std::ptrdiff_t m_bDisabled = 0x6D0; // bool
                constexpr std::ptrdiff_t m_bDisabledOld = 0x6D1; // bool
                constexpr std::ptrdiff_t m_bUpdateOnClient = 0x6D2; // bool
                constexpr std::ptrdiff_t m_nInputType = 0x6D4; // ValueRemapperInputType_t
                constexpr std::ptrdiff_t m_hRemapLineStart = 0x6D8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hRemapLineEnd = 0x6DC; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flMaximumChangePerSecond = 0x6E0; // float32
                constexpr std::ptrdiff_t m_flDisengageDistance = 0x6E4; // float32
                constexpr std::ptrdiff_t m_flEngageDistance = 0x6E8; // float32
                constexpr std::ptrdiff_t m_bRequiresUseKey = 0x6EC; // bool
                constexpr std::ptrdiff_t m_nOutputType = 0x6F0; // ValueRemapperOutputType_t
                constexpr std::ptrdiff_t m_hOutputEntities = 0x6F8; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_nHapticsType = 0x710; // ValueRemapperHapticsType_t
                constexpr std::ptrdiff_t m_nMomentumType = 0x714; // ValueRemapperMomentumType_t
                constexpr std::ptrdiff_t m_flMomentumModifier = 0x718; // float32
                constexpr std::ptrdiff_t m_flSnapValue = 0x71C; // float32
                constexpr std::ptrdiff_t m_flCurrentMomentum = 0x720; // float32
                constexpr std::ptrdiff_t m_nRatchetType = 0x724; // ValueRemapperRatchetType_t
                constexpr std::ptrdiff_t m_flRatchetOffset = 0x728; // float32
                constexpr std::ptrdiff_t m_flInputOffset = 0x72C; // float32
                constexpr std::ptrdiff_t m_bEngaged = 0x730; // bool
                constexpr std::ptrdiff_t m_bFirstUpdate = 0x731; // bool
                constexpr std::ptrdiff_t m_flPreviousValue = 0x734; // float32
                constexpr std::ptrdiff_t m_flPreviousUpdateTickTime = 0x738; // GameTime_t
                constexpr std::ptrdiff_t m_vecPreviousTestPoint = 0x73C; // Vector
            }
            // Parent: None
            // Fields count: 12
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
            namespace C_PointWorldText {
                constexpr std::ptrdiff_t m_bForceRecreateNextUpdate = 0xC58; // bool
                constexpr std::ptrdiff_t m_messageText = 0xC68; // char[512]
                constexpr std::ptrdiff_t m_FontName = 0xE68; // char[64]
                constexpr std::ptrdiff_t m_bEnabled = 0xEA8; // bool
                constexpr std::ptrdiff_t m_bFullbright = 0xEA9; // bool
                constexpr std::ptrdiff_t m_flWorldUnitsPerPx = 0xEAC; // float32
                constexpr std::ptrdiff_t m_flFontSize = 0xEB0; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0xEB4; // float32
                constexpr std::ptrdiff_t m_Color = 0xEB8; // Color
                constexpr std::ptrdiff_t m_nJustifyHorizontal = 0xEBC; // PointWorldTextJustifyHorizontal_t
                constexpr std::ptrdiff_t m_nJustifyVertical = 0xEC0; // PointWorldTextJustifyVertical_t
                constexpr std::ptrdiff_t m_nReorientMode = 0xEC4; // PointWorldTextReorientMode_t
            }
            // Parent: C_BaseEntity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Handle (CHandle<CBaseEntity>)
            // NetworkVarNames: m_bSendHandle (bool)
            namespace C_HandleTest {
                constexpr std::ptrdiff_t m_Handle = 0x6D0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bSendHandle = 0x6D4; // bool
            }
            // Parent: C_BaseEntity
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
            namespace C_EnvWind {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x6D0; // C_EnvWindShared
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_glowEntity (CHandle<C_BaseModelEntity>)
            // NetworkVarNames: m_usable (bool)
            // NetworkVarNames: m_szDisplayText (string_t)
            namespace C_BaseButton {
                constexpr std::ptrdiff_t m_glowEntity = 0xC50; // CHandle<C_BaseModelEntity>
                constexpr std::ptrdiff_t m_usable = 0xC54; // bool
                constexpr std::ptrdiff_t m_szDisplayText = 0xC58; // CUtlSymbolLarge
            }
            // Parent: C_BaseModelEntity
            // Fields count: 13
            //
            // Metadata:
            // NetworkVarNames: m_flStartTime (GameTime_t)
            // NetworkVarNames: m_flFadeInStart (float32)
            // NetworkVarNames: m_flFadeInLength (float32)
            // NetworkVarNames: m_flFadeOutModelStart (float32)
            // NetworkVarNames: m_flFadeOutModelLength (float32)
            // NetworkVarNames: m_flFadeOutStart (float32)
            // NetworkVarNames: m_flFadeOutLength (float32)
            // NetworkVarNames: m_nDissolveType (EntityDisolveType_t)
            // NetworkVarNames: m_vDissolverOrigin (Vector)
            // NetworkVarNames: m_nMagnitude (uint32)
            namespace C_EntityDissolve {
                constexpr std::ptrdiff_t m_flStartTime = 0xC58; // GameTime_t
                constexpr std::ptrdiff_t m_flFadeInStart = 0xC5C; // float32
                constexpr std::ptrdiff_t m_flFadeInLength = 0xC60; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelStart = 0xC64; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelLength = 0xC68; // float32
                constexpr std::ptrdiff_t m_flFadeOutStart = 0xC6C; // float32
                constexpr std::ptrdiff_t m_flFadeOutLength = 0xC70; // float32
                constexpr std::ptrdiff_t m_flNextSparkTime = 0xC74; // GameTime_t
                constexpr std::ptrdiff_t m_nDissolveType = 0xC78; // EntityDisolveType_t
                constexpr std::ptrdiff_t m_vDissolverOrigin = 0xC7C; // Vector
                constexpr std::ptrdiff_t m_nMagnitude = 0xC88; // uint32
                constexpr std::ptrdiff_t m_bCoreExplode = 0xC8C; // bool
                constexpr std::ptrdiff_t m_bLinkedToServerEnt = 0xC8D; // bool
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
            namespace C_EnvDecal {
                constexpr std::ptrdiff_t m_hDecalMaterial = 0xC50; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_flWidth = 0xC58; // float32
                constexpr std::ptrdiff_t m_flHeight = 0xC5C; // float32
                constexpr std::ptrdiff_t m_flDepth = 0xC60; // float32
                constexpr std::ptrdiff_t m_nRenderOrder = 0xC64; // uint32
                constexpr std::ptrdiff_t m_bProjectOnWorld = 0xC68; // bool
                constexpr std::ptrdiff_t m_bProjectOnCharacters = 0xC69; // bool
                constexpr std::ptrdiff_t m_bProjectOnWater = 0xC6A; // bool
                constexpr std::ptrdiff_t m_flDepthSortBias = 0xC6C; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_EffectName (string_t)
            // NetworkVarNames: m_bState (bool)
            namespace C_FuncElectrifiedVolume {
                constexpr std::ptrdiff_t m_nAmbientEffect = 0xC50; // ParticleIndex_t
                constexpr std::ptrdiff_t m_EffectName = 0xC58; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bState = 0xC60; // bool
            }
            // Parent: C_BaseModelEntity
            // Fields count: 0
            //
            // Metadata:
            // MNetworkOverride
            // MNetworkOverride
            namespace C_FuncRotating {
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
            namespace C_RopeKeyframe {
                constexpr std::ptrdiff_t m_LinksTouchingSomething = 0xC58; // CBitVec<10>
                constexpr std::ptrdiff_t m_nLinksTouchingSomething = 0xC5C; // int32
                constexpr std::ptrdiff_t m_bApplyWind = 0xC60; // bool
                constexpr std::ptrdiff_t m_fPrevLockedPoints = 0xC64; // int32
                constexpr std::ptrdiff_t m_iForcePointMoveCounter = 0xC68; // int32
                constexpr std::ptrdiff_t m_bPrevEndPointPos = 0xC6C; // bool[2]
                constexpr std::ptrdiff_t m_vPrevEndPointPos = 0xC70; // Vector[2]
                constexpr std::ptrdiff_t m_flCurScroll = 0xC88; // float32
                constexpr std::ptrdiff_t m_flScrollSpeed = 0xC8C; // float32
                constexpr std::ptrdiff_t m_RopeFlags = 0xC90; // uint16
                constexpr std::ptrdiff_t m_iRopeMaterialModelIndex = 0xC98; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_LightValues = 0xF10; // Vector[10]
                constexpr std::ptrdiff_t m_nSegments = 0xF88; // uint8
                constexpr std::ptrdiff_t m_hStartPoint = 0xF8C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hEndPoint = 0xF90; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iStartAttachment = 0xF94; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_iEndAttachment = 0xF95; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_Subdiv = 0xF96; // uint8
                constexpr std::ptrdiff_t m_RopeLength = 0xF98; // int16
                constexpr std::ptrdiff_t m_Slack = 0xF9A; // int16
                constexpr std::ptrdiff_t m_TextureScale = 0xF9C; // float32
                constexpr std::ptrdiff_t m_fLockedPoints = 0xFA0; // uint8
                constexpr std::ptrdiff_t m_nChangeCount = 0xFA1; // uint8
                constexpr std::ptrdiff_t m_Width = 0xFA4; // float32
                constexpr std::ptrdiff_t m_PhysicsDelegate = 0xFA8; // C_RopeKeyframe::CPhysicsDelegate
                constexpr std::ptrdiff_t m_hMaterial = 0xFB8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_TextureHeight = 0xFC0; // int32
                constexpr std::ptrdiff_t m_vecImpulse = 0xFC4; // Vector
                constexpr std::ptrdiff_t m_vecPreviousImpulse = 0xFD0; // Vector
                constexpr std::ptrdiff_t m_flCurrentGustTimer = 0xFDC; // float32
                constexpr std::ptrdiff_t m_flCurrentGustLifetime = 0xFE0; // float32
                constexpr std::ptrdiff_t m_flTimeToNextGust = 0xFE4; // float32
                constexpr std::ptrdiff_t m_vWindDir = 0xFE8; // Vector
                constexpr std::ptrdiff_t m_vColorMod = 0xFF4; // Vector
                constexpr std::ptrdiff_t m_vCachedEndPointAttachmentPos = 0x1000; // Vector[2]
                constexpr std::ptrdiff_t m_vCachedEndPointAttachmentAngle = 0x1018; // QAngle[2]
                constexpr std::ptrdiff_t m_bConstrainBetweenEndpoints = 0x1030; // bool
                constexpr std::ptrdiff_t m_bEndPointAttachmentPositionsDirty = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bEndPointAttachmentAnglesDirty = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNewDataThisFrame = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bPhysicsInitted = 0x0; // bitfield:1
            }
            // Parent: None
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
            namespace C_SceneEntity {
                constexpr std::ptrdiff_t m_bIsPlayingBack = 0x6D8; // bool
                constexpr std::ptrdiff_t m_bPaused = 0x6D9; // bool
                constexpr std::ptrdiff_t m_bMultiplayer = 0x6DA; // bool
                constexpr std::ptrdiff_t m_bAutogenerated = 0x6DB; // bool
                constexpr std::ptrdiff_t m_flForceClientTime = 0x6DC; // float32
                constexpr std::ptrdiff_t m_nSceneStringIndex = 0x6E0; // uint16
                constexpr std::ptrdiff_t m_bClientOnly = 0x6E2; // bool
                constexpr std::ptrdiff_t m_hOwner = 0x6E4; // CHandle<C_BaseFlex>
                constexpr std::ptrdiff_t m_hActorList = 0x6E8; // C_NetworkUtlVectorBase<CHandle<C_BaseFlex>>
                constexpr std::ptrdiff_t m_bWasPlaying = 0x700; // bool
                constexpr std::ptrdiff_t m_QueuedEvents = 0x710; // CUtlVector<C_SceneEntity::QueuedEvents_t>
                constexpr std::ptrdiff_t m_flCurrentTime = 0x728; // float32
            }
            // Parent: C_BaseModelEntity
            // Fields count: 18
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkExcludeByName
            // MNetworkIncludeByUserGroup
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_vDirection (Vector)
            // NetworkVarNames: m_iszEffectName (string_t)
            // NetworkVarNames: m_iszSSEffectName (string_t)
            // NetworkVarNames: m_clrOverlay (Color)
            // NetworkVarNames: m_bOn (bool)
            // NetworkVarNames: m_bmaxColor (bool)
            // NetworkVarNames: m_flSize (float32)
            // NetworkVarNames: m_flHazeScale (float32)
            // NetworkVarNames: m_flRotation (float32)
            // NetworkVarNames: m_flHDRColorScale (float32)
            // NetworkVarNames: m_flAlphaHaze (float32)
            // NetworkVarNames: m_flAlphaScale (float32)
            // NetworkVarNames: m_flAlphaHdr (float32)
            // NetworkVarNames: m_flFarZScale (float32)
            namespace C_Sun {
                constexpr std::ptrdiff_t m_fxSSSunFlareEffectIndex = 0xC50; // ParticleIndex_t
                constexpr std::ptrdiff_t m_fxSunFlareEffectIndex = 0xC54; // ParticleIndex_t
                constexpr std::ptrdiff_t m_fdistNormalize = 0xC58; // float32
                constexpr std::ptrdiff_t m_vSunPos = 0xC5C; // Vector
                constexpr std::ptrdiff_t m_vDirection = 0xC68; // Vector
                constexpr std::ptrdiff_t m_iszEffectName = 0xC78; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSSEffectName = 0xC80; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_clrOverlay = 0xC88; // Color
                constexpr std::ptrdiff_t m_bOn = 0xC8C; // bool
                constexpr std::ptrdiff_t m_bmaxColor = 0xC8D; // bool
                constexpr std::ptrdiff_t m_flSize = 0xC90; // float32
                constexpr std::ptrdiff_t m_flHazeScale = 0xC94; // float32
                constexpr std::ptrdiff_t m_flRotation = 0xC98; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0xC9C; // float32
                constexpr std::ptrdiff_t m_flAlphaHaze = 0xCA0; // float32
                constexpr std::ptrdiff_t m_flAlphaScale = 0xCA4; // float32
                constexpr std::ptrdiff_t m_flAlphaHdr = 0xCA8; // float32
                constexpr std::ptrdiff_t m_flFarZScale = 0xCAC; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames: m_bDisabled (bool)
            // NetworkVarNames: m_bClientSidePredicted (bool)
            namespace C_BaseTrigger {
                constexpr std::ptrdiff_t m_bDisabled = 0xC50; // bool
                constexpr std::ptrdiff_t m_bClientSidePredicted = 0xC51; // bool
            }
            // Parent: C_BaseTrigger
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
            namespace C_TriggerPhysics {
                constexpr std::ptrdiff_t m_gravityScale = 0xC54; // float32
                constexpr std::ptrdiff_t m_linearLimit = 0xC58; // float32
                constexpr std::ptrdiff_t m_linearDamping = 0xC5C; // float32
                constexpr std::ptrdiff_t m_angularLimit = 0xC60; // float32
                constexpr std::ptrdiff_t m_angularDamping = 0xC64; // float32
                constexpr std::ptrdiff_t m_linearForce = 0xC68; // float32
                constexpr std::ptrdiff_t m_flFrequency = 0xC6C; // float32
                constexpr std::ptrdiff_t m_flDampingRatio = 0xC70; // float32
                constexpr std::ptrdiff_t m_vecLinearForcePointAt = 0xC74; // Vector
                constexpr std::ptrdiff_t m_bCollapseToForcePoint = 0xC80; // bool
                constexpr std::ptrdiff_t m_vecLinearForcePointAtWorld = 0xC84; // Vector
                constexpr std::ptrdiff_t m_vecLinearForceDirection = 0xC90; // Vector
                constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0xC9C; // bool
            }
            // Parent: C_BaseModelEntity
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
            namespace C_Beam {
                constexpr std::ptrdiff_t m_flFrameRate = 0xC50; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0xC54; // float32
                constexpr std::ptrdiff_t m_flFireTime = 0xC58; // GameTime_t
                constexpr std::ptrdiff_t m_flDamage = 0xC5C; // float32
                constexpr std::ptrdiff_t m_nNumBeamEnts = 0xC60; // uint8
                constexpr std::ptrdiff_t m_queryHandleHalo = 0xC64; // int32
                constexpr std::ptrdiff_t m_hBaseMaterial = 0xC88; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nHaloIndex = 0xC90; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nBeamType = 0xC98; // BeamType_t
                constexpr std::ptrdiff_t m_nBeamFlags = 0xC9C; // uint32
                constexpr std::ptrdiff_t m_hAttachEntity = 0xCA0; // CHandle<C_BaseEntity>[10]
                constexpr std::ptrdiff_t m_nAttachIndex = 0xCC8; // AttachmentHandle_t[10]
                constexpr std::ptrdiff_t m_fWidth = 0xCD4; // float32
                constexpr std::ptrdiff_t m_fEndWidth = 0xCD8; // float32
                constexpr std::ptrdiff_t m_fFadeLength = 0xCDC; // float32
                constexpr std::ptrdiff_t m_fHaloScale = 0xCE0; // float32
                constexpr std::ptrdiff_t m_fAmplitude = 0xCE4; // float32
                constexpr std::ptrdiff_t m_fStartFrame = 0xCE8; // float32
                constexpr std::ptrdiff_t m_fSpeed = 0xCEC; // float32
                constexpr std::ptrdiff_t m_flFrame = 0xCF0; // float32
                constexpr std::ptrdiff_t m_nClipStyle = 0xCF4; // BeamClipStyle_t
                constexpr std::ptrdiff_t m_bTurnedOff = 0xCF8; // bool
                constexpr std::ptrdiff_t m_vecEndPos = 0xCFC; // Vector
                constexpr std::ptrdiff_t m_hEndEntity = 0xD08; // CHandle<C_BaseEntity>
            }
            // Parent: C_BaseModelEntity
            // Fields count: 9
            //
            // Metadata:
            // NetworkVarNames: m_vecLadderDir (Vector)
            // NetworkVarNames: m_vecPlayerMountPositionTop (Vector)
            // NetworkVarNames: m_vecPlayerMountPositionBottom (Vector)
            // NetworkVarNames: m_flAutoRideSpeed (float)
            // NetworkVarNames: m_bFakeLadder (bool)
            namespace C_FuncLadder {
                constexpr std::ptrdiff_t m_vecLadderDir = 0xC50; // Vector
                constexpr std::ptrdiff_t m_Dismounts = 0xC60; // CUtlVector<CHandle<C_InfoLadderDismount>>
                constexpr std::ptrdiff_t m_vecLocalTop = 0xC78; // Vector
                constexpr std::ptrdiff_t m_vecPlayerMountPositionTop = 0xC84; // Vector
                constexpr std::ptrdiff_t m_vecPlayerMountPositionBottom = 0xC90; // Vector
                constexpr std::ptrdiff_t m_flAutoRideSpeed = 0xC9C; // float32
                constexpr std::ptrdiff_t m_bDisabled = 0xCA0; // bool
                constexpr std::ptrdiff_t m_bFakeLadder = 0xCA1; // bool
                constexpr std::ptrdiff_t m_bHasSlack = 0xCA2; // bool
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPrecipitationVData {
                constexpr std::ptrdiff_t m_szParticlePrecipitationEffect = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flInnerDistance = 0x108; // float32
                constexpr std::ptrdiff_t m_nAttachType = 0x10C; // ParticleAttachment_t
                constexpr std::ptrdiff_t m_bBatchSameVolumeType = 0x110; // bool
                constexpr std::ptrdiff_t m_nRTEnvCP = 0x114; // int32
                constexpr std::ptrdiff_t m_nRTEnvCPComponent = 0x118; // int32
                constexpr std::ptrdiff_t m_szModifier = 0x120; // CUtlString
            }
            // Parent: C_BaseModelEntity
            // Fields count: 24
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
            namespace C_Sprite {
                constexpr std::ptrdiff_t m_hSpriteMaterial = 0xC68; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hAttachedToEntity = 0xC70; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nAttachment = 0xC74; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_flSpriteFramerate = 0xC78; // float32
                constexpr std::ptrdiff_t m_flFrame = 0xC7C; // float32
                constexpr std::ptrdiff_t m_flDieTime = 0xC80; // GameTime_t
                constexpr std::ptrdiff_t m_nBrightness = 0xC90; // uint32
                constexpr std::ptrdiff_t m_flBrightnessDuration = 0xC94; // float32
                constexpr std::ptrdiff_t m_flSpriteScale = 0xC98; // float32
                constexpr std::ptrdiff_t m_flScaleDuration = 0xC9C; // float32
                constexpr std::ptrdiff_t m_bWorldSpaceScale = 0xCA0; // bool
                constexpr std::ptrdiff_t m_flGlowProxySize = 0xCA4; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0xCA8; // float32
                constexpr std::ptrdiff_t m_flLastTime = 0xCAC; // GameTime_t
                constexpr std::ptrdiff_t m_flMaxFrame = 0xCB0; // float32
                constexpr std::ptrdiff_t m_flStartScale = 0xCB4; // float32
                constexpr std::ptrdiff_t m_flDestScale = 0xCB8; // float32
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0xCBC; // GameTime_t
                constexpr std::ptrdiff_t m_nStartBrightness = 0xCC0; // int32
                constexpr std::ptrdiff_t m_nDestBrightness = 0xCC4; // int32
                constexpr std::ptrdiff_t m_flBrightnessTimeStart = 0xCC8; // GameTime_t
                constexpr std::ptrdiff_t m_hOldSpriteMaterial = 0xCD0; // CWeakHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nSpriteWidth = 0xD78; // int32
                constexpr std::ptrdiff_t m_nSpriteHeight = 0xD7C; // int32
            }
            // Parent: C_BaseModelEntity
            // Fields count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_DialogXMLName (string_t)
            // NetworkVarNames: m_PanelClassName (string_t)
            // NetworkVarNames: m_PanelID (string_t)
            namespace C_BaseClientUIEntity {
                constexpr std::ptrdiff_t m_bEnabled = 0xC58; // bool
                constexpr std::ptrdiff_t m_DialogXMLName = 0xC60; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PanelClassName = 0xC68; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PanelID = 0xC70; // CUtlSymbolLarge
            }
            // Parent: C_BaseClientUIEntity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hActivator (EHANDLE)
            namespace C_PointClientUIDialog {
                constexpr std::ptrdiff_t m_hActivator = 0xC80; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bStartEnabled = 0xC84; // bool
            }
            // Parent: C_BaseClientUIEntity
            // Fields count: 13
            //
            // Metadata:
            // NetworkVarNames: m_bIgnoreInput (bool)
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
            namespace C_PointClientUIHUD {
                constexpr std::ptrdiff_t m_bCheckCSSClasses = 0xC88; // bool
                constexpr std::ptrdiff_t m_bIgnoreInput = 0xE10; // bool
                constexpr std::ptrdiff_t m_flWidth = 0xE14; // float32
                constexpr std::ptrdiff_t m_flHeight = 0xE18; // float32
                constexpr std::ptrdiff_t m_flDPI = 0xE1C; // float32
                constexpr std::ptrdiff_t m_flInteractDistance = 0xE20; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0xE24; // float32
                constexpr std::ptrdiff_t m_unOwnerContext = 0xE28; // uint32
                constexpr std::ptrdiff_t m_unHorizontalAlign = 0xE2C; // uint32
                constexpr std::ptrdiff_t m_unVerticalAlign = 0xE30; // uint32
                constexpr std::ptrdiff_t m_unOrientation = 0xE34; // uint32
                constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0xE38; // bool
                constexpr std::ptrdiff_t m_vecCSSClasses = 0xE40; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: C_BaseClientUIEntity
            // Fields count: 28
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
            namespace C_PointClientUIWorldPanel {
                constexpr std::ptrdiff_t m_bForceRecreateNextUpdate = 0xC88; // bool
                constexpr std::ptrdiff_t m_bMoveViewToPlayerNextThink = 0xC89; // bool
                constexpr std::ptrdiff_t m_bCheckCSSClasses = 0xC8A; // bool
                constexpr std::ptrdiff_t m_anchorDeltaTransform = 0xC90; // CTransform
                constexpr std::ptrdiff_t m_pOffScreenIndicator = 0xE30; // CPointOffScreenIndicatorUi*
                constexpr std::ptrdiff_t m_bIgnoreInput = 0xE58; // bool
                constexpr std::ptrdiff_t m_bLit = 0xE59; // bool
                constexpr std::ptrdiff_t m_bFollowPlayerAcrossTeleport = 0xE5A; // bool
                constexpr std::ptrdiff_t m_flWidth = 0xE5C; // float32
                constexpr std::ptrdiff_t m_flHeight = 0xE60; // float32
                constexpr std::ptrdiff_t m_flDPI = 0xE64; // float32
                constexpr std::ptrdiff_t m_flInteractDistance = 0xE68; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0xE6C; // float32
                constexpr std::ptrdiff_t m_unOwnerContext = 0xE70; // uint32
                constexpr std::ptrdiff_t m_unHorizontalAlign = 0xE74; // uint32
                constexpr std::ptrdiff_t m_unVerticalAlign = 0xE78; // uint32
                constexpr std::ptrdiff_t m_unOrientation = 0xE7C; // uint32
                constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0xE80; // bool
                constexpr std::ptrdiff_t m_vecCSSClasses = 0xE88; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_bOpaque = 0xEA0; // bool
                constexpr std::ptrdiff_t m_bNoDepth = 0xEA1; // bool
                constexpr std::ptrdiff_t m_bRenderBackface = 0xEA2; // bool
                constexpr std::ptrdiff_t m_bUseOffScreenIndicator = 0xEA3; // bool
                constexpr std::ptrdiff_t m_bExcludeFromSaveGames = 0xEA4; // bool
                constexpr std::ptrdiff_t m_bGrabbable = 0xEA5; // bool
                constexpr std::ptrdiff_t m_bOnlyRenderToTexture = 0xEA6; // bool
                constexpr std::ptrdiff_t m_bDisableMipGen = 0xEA7; // bool
                constexpr std::ptrdiff_t m_nExplicitImageLayout = 0xEA8; // int32
            }
            // Parent: C_PointClientUIWorldPanel
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_messageText (char)
            namespace C_PointClientUIWorldTextPanel {
                constexpr std::ptrdiff_t m_messageText = 0xEAC; // char[512]
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // NetworkVarNames: m_bDisabled (bool)
            // NetworkVarNames: m_nResolutionX (int)
            // NetworkVarNames: m_nResolutionY (int)
            // NetworkVarNames: m_szLayoutFileName (string_t)
            // NetworkVarNames: m_RenderAttrName (string_t)
            // NetworkVarNames: m_TargetEntities (CHandle<C_BaseModelEntity>)
            // NetworkVarNames: m_nTargetChangeCount (int)
            // NetworkVarNames: m_vecCSSClasses (string_t)
            namespace CInfoOffscreenPanoramaTexture {
                constexpr std::ptrdiff_t m_bDisabled = 0x6D0; // bool
                constexpr std::ptrdiff_t m_nResolutionX = 0x6D4; // int32
                constexpr std::ptrdiff_t m_nResolutionY = 0x6D8; // int32
                constexpr std::ptrdiff_t m_szLayoutFileName = 0x6E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_RenderAttrName = 0x6E8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_TargetEntities = 0x6F0; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_nTargetChangeCount = 0x708; // int32
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x710; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_bCheckCSSClasses = 0x888; // bool
            }
            // Parent: None
            // Fields count: 28
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
            namespace C_EconItemView {
                constexpr std::ptrdiff_t m_bInventoryImageRgbaRequested = 0x70; // bool
                constexpr std::ptrdiff_t m_bInventoryImageTriedCache = 0x71; // bool
                constexpr std::ptrdiff_t m_nInventoryImageRgbaWidth = 0x90; // int32
                constexpr std::ptrdiff_t m_nInventoryImageRgbaHeight = 0x94; // int32
                constexpr std::ptrdiff_t m_szCurrentLoadCachedFileName = 0x98; // char[4096]
                constexpr std::ptrdiff_t m_bRestoreCustomMaterialAfterPrecache = 0x10C0; // bool
                constexpr std::ptrdiff_t m_iItemDefinitionIndex = 0x10C2; // uint16
                constexpr std::ptrdiff_t m_iEntityQuality = 0x10C4; // int32
                constexpr std::ptrdiff_t m_iEntityLevel = 0x10C8; // uint32
                constexpr std::ptrdiff_t m_iItemID = 0x10D0; // uint64
                constexpr std::ptrdiff_t m_iItemIDHigh = 0x10D8; // uint32
                constexpr std::ptrdiff_t m_iItemIDLow = 0x10DC; // uint32
                constexpr std::ptrdiff_t m_iAccountID = 0x10E0; // uint32
                constexpr std::ptrdiff_t m_iInventoryPosition = 0x10E4; // uint32
                constexpr std::ptrdiff_t m_bInitialized = 0x10F0; // bool
                constexpr std::ptrdiff_t m_bDisallowSOC = 0x10F1; // bool
                constexpr std::ptrdiff_t m_bIsStoreItem = 0x10F2; // bool
                constexpr std::ptrdiff_t m_bIsTradeItem = 0x10F3; // bool
                constexpr std::ptrdiff_t m_iEntityQuantity = 0x10F4; // int32
                constexpr std::ptrdiff_t m_iRarityOverride = 0x10F8; // int32
                constexpr std::ptrdiff_t m_iQualityOverride = 0x10FC; // int32
                constexpr std::ptrdiff_t m_unClientFlags = 0x1100; // uint8
                constexpr std::ptrdiff_t m_unOverrideStyle = 0x1101; // uint8
                constexpr std::ptrdiff_t m_AttributeList = 0x1118; // CAttributeList
                constexpr std::ptrdiff_t m_NetworkedDynamicAttributes = 0x1178; // CAttributeList
                constexpr std::ptrdiff_t m_szCustomName = 0x11D8; // char[161]
                constexpr std::ptrdiff_t m_szCustomNameOverride = 0x1279; // char[161]
                constexpr std::ptrdiff_t m_bInitializedTags = 0x1348; // bool
            }
            // Parent: C_BaseTrigger
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bBombPlantedHere (bool)
            namespace CBombTarget {
                constexpr std::ptrdiff_t m_bBombPlantedHere = 0xC52; // bool
            }
            // Parent: C_BaseTrigger
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFluidDensity (float)
            namespace C_TriggerBuoyancy {
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0xC58; // CBuoyancyHelper
                constexpr std::ptrdiff_t m_flFluidDensity = 0xC78; // float32
            }
            // Parent: CBasePlayerController
            // Fields count: 62
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
            namespace CCSPlayerController {
                constexpr std::ptrdiff_t m_pInGameMoneyServices = 0x878; // CCSPlayerController_InGameMoneyServices*
                constexpr std::ptrdiff_t m_pInventoryServices = 0x880; // CCSPlayerController_InventoryServices*
                constexpr std::ptrdiff_t m_pActionTrackingServices = 0x888; // CCSPlayerController_ActionTrackingServices*
                constexpr std::ptrdiff_t m_pDamageServices = 0x890; // CCSPlayerController_DamageServices*
                constexpr std::ptrdiff_t m_iPing = 0x898; // uint32
                constexpr std::ptrdiff_t m_bHasCommunicationAbuseMute = 0x89C; // bool
                constexpr std::ptrdiff_t m_szCrosshairCodes = 0x8A0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iPendingTeamNum = 0x8A8; // uint8
                constexpr std::ptrdiff_t m_flForceTeamTime = 0x8AC; // GameTime_t
                constexpr std::ptrdiff_t m_iCompTeammateColor = 0x8B0; // int32
                constexpr std::ptrdiff_t m_bEverPlayedOnTeam = 0x8B4; // bool
                constexpr std::ptrdiff_t m_flPreviousForceJoinTeamTime = 0x8B8; // GameTime_t
                constexpr std::ptrdiff_t m_szClan = 0x8C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sSanitizedPlayerName = 0x8C8; // CUtlString
                constexpr std::ptrdiff_t m_iCoachingTeam = 0x8D0; // int32
                constexpr std::ptrdiff_t m_nPlayerDominated = 0x8D8; // uint64
                constexpr std::ptrdiff_t m_nPlayerDominatingMe = 0x8E0; // uint64
                constexpr std::ptrdiff_t m_iCompetitiveRanking = 0x8E8; // int32
                constexpr std::ptrdiff_t m_iCompetitiveWins = 0x8EC; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankType = 0x8F0; // int8
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Win = 0x8F4; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Loss = 0x8F8; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Tie = 0x8FC; // int32
                constexpr std::ptrdiff_t m_nEndMatchNextMapVote = 0x900; // int32
                constexpr std::ptrdiff_t m_unActiveQuestId = 0x904; // uint16
                constexpr std::ptrdiff_t m_nQuestProgressReason = 0x908; // QuestProgress::Reason
                constexpr std::ptrdiff_t m_unPlayerTvControlFlags = 0x90C; // uint32
                constexpr std::ptrdiff_t m_iDraftIndex = 0x938; // int32
                constexpr std::ptrdiff_t m_msQueuedModeDisconnectionTimestamp = 0x93C; // uint32
                constexpr std::ptrdiff_t m_uiAbandonRecordedReason = 0x940; // uint32
                constexpr std::ptrdiff_t m_bCannotBeKicked = 0x944; // bool
                constexpr std::ptrdiff_t m_bEverFullyConnected = 0x945; // bool
                constexpr std::ptrdiff_t m_bAbandonAllowsSurrender = 0x946; // bool
                constexpr std::ptrdiff_t m_bAbandonOffersInstantSurrender = 0x947; // bool
                constexpr std::ptrdiff_t m_bDisconnection1MinWarningPrinted = 0x948; // bool
                constexpr std::ptrdiff_t m_bScoreReported = 0x949; // bool
                constexpr std::ptrdiff_t m_nDisconnectionTick = 0x94C; // int32
                constexpr std::ptrdiff_t m_bControllingBot = 0x958; // bool
                constexpr std::ptrdiff_t m_bHasControlledBotThisRound = 0x959; // bool
                constexpr std::ptrdiff_t m_bHasBeenControlledByPlayerThisRound = 0x95A; // bool
                constexpr std::ptrdiff_t m_nBotsControlledThisRound = 0x95C; // int32
                constexpr std::ptrdiff_t m_bCanControlObservedBot = 0x960; // bool
                constexpr std::ptrdiff_t m_hPlayerPawn = 0x964; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_hObserverPawn = 0x968; // CHandle<C_CSObserverPawn>
                constexpr std::ptrdiff_t m_bPawnIsAlive = 0x96C; // bool
                constexpr std::ptrdiff_t m_iPawnHealth = 0x970; // uint32
                constexpr std::ptrdiff_t m_iPawnArmor = 0x974; // int32
                constexpr std::ptrdiff_t m_bPawnHasDefuser = 0x978; // bool
                constexpr std::ptrdiff_t m_bPawnHasHelmet = 0x979; // bool
                constexpr std::ptrdiff_t m_nPawnCharacterDefIndex = 0x97A; // uint16
                constexpr std::ptrdiff_t m_iPawnLifetimeStart = 0x97C; // int32
                constexpr std::ptrdiff_t m_iPawnLifetimeEnd = 0x980; // int32
                constexpr std::ptrdiff_t m_iPawnBotDifficulty = 0x984; // int32
                constexpr std::ptrdiff_t m_hOriginalControllerOfCurrentPawn = 0x988; // CHandle<CCSPlayerController>
                constexpr std::ptrdiff_t m_iScore = 0x98C; // int32
                constexpr std::ptrdiff_t m_vecKills = 0x990; // C_NetworkUtlVectorBase<EKillTypes_t>
                constexpr std::ptrdiff_t m_bMvpNoMusic = 0x9A8; // bool
                constexpr std::ptrdiff_t m_eMvpReason = 0x9AC; // int32
                constexpr std::ptrdiff_t m_iMusicKitID = 0x9B0; // int32
                constexpr std::ptrdiff_t m_iMusicKitMVPs = 0x9B4; // int32
                constexpr std::ptrdiff_t m_iMVPs = 0x9B8; // int32
                constexpr std::ptrdiff_t m_bIsPlayerNameDirty = 0x9BC; // bool
            }
            // Parent: C_BaseTrigger
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_source (string_t)
            // NetworkVarNames: m_destination (string_t)
            namespace C_FootstepControl {
                constexpr std::ptrdiff_t m_source = 0xC58; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_destination = 0xC60; // CUtlSymbolLarge
            }
            // Parent: CBasePlayerWeaponVData
            // Fields count: 92
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertySuppressBaseClassField
            // MPropertySuppressBaseClassField
            namespace CCSWeaponBaseVData {
                constexpr std::ptrdiff_t m_WeaponType = 0x248; // CSWeaponType
                constexpr std::ptrdiff_t m_WeaponCategory = 0x24C; // CSWeaponCategory
                constexpr std::ptrdiff_t m_szViewModel = 0x250; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_szPlayerModel = 0x330; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_szWorldDroppedModel = 0x410; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_szAimsightLensMaskModel = 0x4F0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_szMagazineModel = 0x5D0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_szHeatEffect = 0x6B0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_szEjectBrassEffect = 0x790; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_szMuzzleFlashParticleAlt = 0x870; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_szMuzzleFlashThirdPersonParticle = 0x950; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_szMuzzleFlashThirdPersonParticleAlt = 0xA30; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_szTracerParticle = 0xB10; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_GearSlot = 0xBF0; // gear_slot_t
                constexpr std::ptrdiff_t m_GearSlotPosition = 0xBF4; // int32
                constexpr std::ptrdiff_t m_DefaultLoadoutSlot = 0xBF8; // loadout_slot_t
                constexpr std::ptrdiff_t m_sWrongTeamMsg = 0xC00; // CUtlString
                constexpr std::ptrdiff_t m_nPrice = 0xC08; // int32
                constexpr std::ptrdiff_t m_nKillAward = 0xC0C; // int32
                constexpr std::ptrdiff_t m_nPrimaryReserveAmmoMax = 0xC10; // int32
                constexpr std::ptrdiff_t m_nSecondaryReserveAmmoMax = 0xC14; // int32
                constexpr std::ptrdiff_t m_bMeleeWeapon = 0xC18; // bool
                constexpr std::ptrdiff_t m_bHasBurstMode = 0xC19; // bool
                constexpr std::ptrdiff_t m_bIsRevolver = 0xC1A; // bool
                constexpr std::ptrdiff_t m_bCannotShootUnderwater = 0xC1B; // bool
                constexpr std::ptrdiff_t m_szName = 0xC20; // CGlobalSymbol
                constexpr std::ptrdiff_t m_szAnimExtension = 0xC28; // CUtlString
                constexpr std::ptrdiff_t m_eSilencerType = 0xC30; // CSWeaponSilencerType
                constexpr std::ptrdiff_t m_nCrosshairMinDistance = 0xC34; // int32
                constexpr std::ptrdiff_t m_nCrosshairDeltaDistance = 0xC38; // int32
                constexpr std::ptrdiff_t m_bIsFullAuto = 0xC3C; // bool
                constexpr std::ptrdiff_t m_nNumBullets = 0xC40; // int32
                constexpr std::ptrdiff_t m_flCycleTime = 0xC44; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flMaxSpeed = 0xC4C; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flSpread = 0xC54; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyCrouch = 0xC5C; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyStand = 0xC64; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyJump = 0xC6C; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyLand = 0xC74; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyLadder = 0xC7C; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyFire = 0xC84; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyMove = 0xC8C; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilAngle = 0xC94; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilAngleVariance = 0xC9C; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilMagnitude = 0xCA4; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilMagnitudeVariance = 0xCAC; // CFiringModeFloat
                constexpr std::ptrdiff_t m_nTracerFrequency = 0xCB4; // CFiringModeInt
                constexpr std::ptrdiff_t m_flInaccuracyJumpInitial = 0xCBC; // float32
                constexpr std::ptrdiff_t m_flInaccuracyJumpApex = 0xCC0; // float32
                constexpr std::ptrdiff_t m_flInaccuracyReload = 0xCC4; // float32
                constexpr std::ptrdiff_t m_nRecoilSeed = 0xCC8; // int32
                constexpr std::ptrdiff_t m_nSpreadSeed = 0xCCC; // int32
                constexpr std::ptrdiff_t m_flTimeToIdleAfterFire = 0xCD0; // float32
                constexpr std::ptrdiff_t m_flIdleInterval = 0xCD4; // float32
                constexpr std::ptrdiff_t m_flAttackMovespeedFactor = 0xCD8; // float32
                constexpr std::ptrdiff_t m_flHeatPerShot = 0xCDC; // float32
                constexpr std::ptrdiff_t m_flInaccuracyPitchShift = 0xCE0; // float32
                constexpr std::ptrdiff_t m_flInaccuracyAltSoundThreshold = 0xCE4; // float32
                constexpr std::ptrdiff_t m_flBotAudibleRange = 0xCE8; // float32
                constexpr std::ptrdiff_t m_szUseRadioSubtitle = 0xCF0; // CUtlString
                constexpr std::ptrdiff_t m_bUnzoomsAfterShot = 0xCF8; // bool
                constexpr std::ptrdiff_t m_bHideViewModelWhenZoomed = 0xCF9; // bool
                constexpr std::ptrdiff_t m_nZoomLevels = 0xCFC; // int32
                constexpr std::ptrdiff_t m_nZoomFOV1 = 0xD00; // int32
                constexpr std::ptrdiff_t m_nZoomFOV2 = 0xD04; // int32
                constexpr std::ptrdiff_t m_flZoomTime0 = 0xD08; // float32
                constexpr std::ptrdiff_t m_flZoomTime1 = 0xD0C; // float32
                constexpr std::ptrdiff_t m_flZoomTime2 = 0xD10; // float32
                constexpr std::ptrdiff_t m_flIronSightPullUpSpeed = 0xD14; // float32
                constexpr std::ptrdiff_t m_flIronSightPutDownSpeed = 0xD18; // float32
                constexpr std::ptrdiff_t m_flIronSightFOV = 0xD1C; // float32
                constexpr std::ptrdiff_t m_flIronSightPivotForward = 0xD20; // float32
                constexpr std::ptrdiff_t m_flIronSightLooseness = 0xD24; // float32
                constexpr std::ptrdiff_t m_angPivotAngle = 0xD28; // QAngle
                constexpr std::ptrdiff_t m_vecIronSightEyePos = 0xD34; // Vector
                constexpr std::ptrdiff_t m_nDamage = 0xD40; // int32
                constexpr std::ptrdiff_t m_flHeadshotMultiplier = 0xD44; // float32
                constexpr std::ptrdiff_t m_flArmorRatio = 0xD48; // float32
                constexpr std::ptrdiff_t m_flPenetration = 0xD4C; // float32
                constexpr std::ptrdiff_t m_flRange = 0xD50; // float32
                constexpr std::ptrdiff_t m_flRangeModifier = 0xD54; // float32
                constexpr std::ptrdiff_t m_flFlinchVelocityModifierLarge = 0xD58; // float32
                constexpr std::ptrdiff_t m_flFlinchVelocityModifierSmall = 0xD5C; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeCrouch = 0xD60; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeStand = 0xD64; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeCrouchFinal = 0xD68; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeStandFinal = 0xD6C; // float32
                constexpr std::ptrdiff_t m_nRecoveryTransitionStartBullet = 0xD70; // int32
                constexpr std::ptrdiff_t m_nRecoveryTransitionEndBullet = 0xD74; // int32
                constexpr std::ptrdiff_t m_flThrowVelocity = 0xD78; // float32
                constexpr std::ptrdiff_t m_vSmokeColor = 0xD7C; // Vector
                constexpr std::ptrdiff_t m_szAnimClass = 0xD88; // CGlobalSymbol
            }
            // Parent: None
            // Fields count: 16
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
            namespace C_PlayerSprayDecal {
                constexpr std::ptrdiff_t m_nUniqueID = 0xC50; // int32
                constexpr std::ptrdiff_t m_unAccountID = 0xC54; // uint32
                constexpr std::ptrdiff_t m_unTraceID = 0xC58; // uint32
                constexpr std::ptrdiff_t m_rtGcTime = 0xC5C; // uint32
                constexpr std::ptrdiff_t m_vecEndPos = 0xC60; // Vector
                constexpr std::ptrdiff_t m_vecStart = 0xC6C; // Vector
                constexpr std::ptrdiff_t m_vecLeft = 0xC78; // Vector
                constexpr std::ptrdiff_t m_vecNormal = 0xC84; // Vector
                constexpr std::ptrdiff_t m_nPlayer = 0xC90; // int32
                constexpr std::ptrdiff_t m_nEntity = 0xC94; // int32
                constexpr std::ptrdiff_t m_nHitbox = 0xC98; // int32
                constexpr std::ptrdiff_t m_flCreationTime = 0xC9C; // float32
                constexpr std::ptrdiff_t m_nTintID = 0xCA0; // int32
                constexpr std::ptrdiff_t m_nVersion = 0xCA4; // uint8
                constexpr std::ptrdiff_t m_ubSignature = 0xCA5; // uint8[128]
                constexpr std::ptrdiff_t m_SprayRenderHelper = 0xD30; // CPlayerSprayDecalRenderHelper
            }
            // Parent: C_BaseModelEntity
            // Fields count: 8
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
            namespace C_FuncConveyor {
                constexpr std::ptrdiff_t m_vecMoveDirEntitySpace = 0xC58; // Vector
                constexpr std::ptrdiff_t m_flTargetSpeed = 0xC64; // float32
                constexpr std::ptrdiff_t m_nTransitionStartTick = 0xC68; // GameTick_t
                constexpr std::ptrdiff_t m_nTransitionDurationTicks = 0xC6C; // int32
                constexpr std::ptrdiff_t m_flTransitionStartSpeed = 0xC70; // float32
                constexpr std::ptrdiff_t m_hConveyorModels = 0xC78; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_flCurrentConveyorOffset = 0xC90; // float32
                constexpr std::ptrdiff_t m_flCurrentConveyorSpeed = 0xC94; // float32
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
            namespace C_Inferno {
                constexpr std::ptrdiff_t m_nfxFireDamageEffect = 0xC90; // ParticleIndex_t
                constexpr std::ptrdiff_t m_firePositions = 0xC94; // Vector[64]
                constexpr std::ptrdiff_t m_fireParentPositions = 0xF94; // Vector[64]
                constexpr std::ptrdiff_t m_bFireIsBurning = 0x1294; // bool[64]
                constexpr std::ptrdiff_t m_BurnNormal = 0x12D4; // Vector[64]
                constexpr std::ptrdiff_t m_fireCount = 0x15D4; // int32
                constexpr std::ptrdiff_t m_nInfernoType = 0x15D8; // int32
                constexpr std::ptrdiff_t m_nFireLifetime = 0x15DC; // float32
                constexpr std::ptrdiff_t m_bInPostEffectTime = 0x15E0; // bool
                constexpr std::ptrdiff_t m_lastFireCount = 0x15E4; // int32
                constexpr std::ptrdiff_t m_nFireEffectTickBegin = 0x15E8; // int32
                constexpr std::ptrdiff_t m_drawableCount = 0x81F0; // int32
                constexpr std::ptrdiff_t m_blosCheck = 0x81F4; // bool
                constexpr std::ptrdiff_t m_nlosperiod = 0x81F8; // int32
                constexpr std::ptrdiff_t m_maxFireHalfWidth = 0x81FC; // float32
                constexpr std::ptrdiff_t m_maxFireHeight = 0x8200; // float32
                constexpr std::ptrdiff_t m_minBounds = 0x8204; // Vector
                constexpr std::ptrdiff_t m_maxBounds = 0x8210; // Vector
                constexpr std::ptrdiff_t m_flLastGrassBurnThink = 0x821C; // float32
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
            namespace C_BarnLight {
                constexpr std::ptrdiff_t m_bEnabled = 0xC50; // bool
                constexpr std::ptrdiff_t m_nColorMode = 0xC54; // int32
                constexpr std::ptrdiff_t m_Color = 0xC58; // Color
                constexpr std::ptrdiff_t m_flColorTemperature = 0xC5C; // float32
                constexpr std::ptrdiff_t m_flBrightness = 0xC60; // float32
                constexpr std::ptrdiff_t m_flBrightnessScale = 0xC64; // float32
                constexpr std::ptrdiff_t m_nDirectLight = 0xC68; // int32
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0xC6C; // int32
                constexpr std::ptrdiff_t m_nLuminaireShape = 0xC70; // int32
                constexpr std::ptrdiff_t m_flLuminaireSize = 0xC74; // float32
                constexpr std::ptrdiff_t m_flLuminaireAnisotropy = 0xC78; // float32
                constexpr std::ptrdiff_t m_LightStyleString = 0xC80; // CUtlString
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0xC88; // GameTime_t
                constexpr std::ptrdiff_t m_QueuedLightStyleStrings = 0xC90; // C_NetworkUtlVectorBase<CUtlString>
                constexpr std::ptrdiff_t m_LightStyleEvents = 0xCA8; // C_NetworkUtlVectorBase<CUtlString>
                constexpr std::ptrdiff_t m_LightStyleTargets = 0xCC0; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_StyleEvent = 0xCD8; // CEntityIOOutput[4]
                constexpr std::ptrdiff_t m_hLightCookie = 0xD78; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_flShape = 0xD80; // float32
                constexpr std::ptrdiff_t m_flSoftX = 0xD84; // float32
                constexpr std::ptrdiff_t m_flSoftY = 0xD88; // float32
                constexpr std::ptrdiff_t m_flSkirt = 0xD8C; // float32
                constexpr std::ptrdiff_t m_flSkirtNear = 0xD90; // float32
                constexpr std::ptrdiff_t m_vSizeParams = 0xD94; // Vector
                constexpr std::ptrdiff_t m_flRange = 0xDA0; // float32
                constexpr std::ptrdiff_t m_vShear = 0xDA4; // Vector
                constexpr std::ptrdiff_t m_nBakeSpecularToCubemaps = 0xDB0; // int32
                constexpr std::ptrdiff_t m_vBakeSpecularToCubemapsSize = 0xDB4; // Vector
                constexpr std::ptrdiff_t m_nCastShadows = 0xDC0; // int32
                constexpr std::ptrdiff_t m_nShadowMapSize = 0xDC4; // int32
                constexpr std::ptrdiff_t m_nShadowPriority = 0xDC8; // int32
                constexpr std::ptrdiff_t m_bContactShadow = 0xDCC; // bool
                constexpr std::ptrdiff_t m_nBounceLight = 0xDD0; // int32
                constexpr std::ptrdiff_t m_flBounceScale = 0xDD4; // float32
                constexpr std::ptrdiff_t m_flMinRoughness = 0xDD8; // float32
                constexpr std::ptrdiff_t m_vAlternateColor = 0xDDC; // Vector
                constexpr std::ptrdiff_t m_fAlternateColorBrightness = 0xDE8; // float32
                constexpr std::ptrdiff_t m_nFog = 0xDEC; // int32
                constexpr std::ptrdiff_t m_flFogStrength = 0xDF0; // float32
                constexpr std::ptrdiff_t m_nFogShadows = 0xDF4; // int32
                constexpr std::ptrdiff_t m_flFogScale = 0xDF8; // float32
                constexpr std::ptrdiff_t m_flFadeSizeStart = 0xDFC; // float32
                constexpr std::ptrdiff_t m_flFadeSizeEnd = 0xE00; // float32
                constexpr std::ptrdiff_t m_flShadowFadeSizeStart = 0xE04; // float32
                constexpr std::ptrdiff_t m_flShadowFadeSizeEnd = 0xE08; // float32
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0xE0C; // bool
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0xE10; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0xE1C; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0xE28; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0xE34; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0xE40; // Vector
            }
            // Parent: C_BarnLight
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bShowLight (bool)
            namespace C_RectLight {
                constexpr std::ptrdiff_t m_bShowLight = 0xE98; // bool
            }
            // Parent: C_BarnLight
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flInnerAngle (float)
            // NetworkVarNames: m_flOuterAngle (float)
            // NetworkVarNames: m_bShowLight (bool)
            namespace C_OmniLight {
                constexpr std::ptrdiff_t m_flInnerAngle = 0xE98; // float32
                constexpr std::ptrdiff_t m_flOuterAngle = 0xE9C; // float32
                constexpr std::ptrdiff_t m_bShowLight = 0xEA0; // bool
            }
            // Parent: C_Team
            // Fields count: 10
            //
            // Metadata:
            // NetworkVarNames: m_szTeamMatchStat (char)
            // NetworkVarNames: m_numMapVictories (int)
            // NetworkVarNames: m_bSurrendered (bool)
            // NetworkVarNames: m_scoreFirstHalf (int32)
            // NetworkVarNames: m_scoreSecondHalf (int32)
            // NetworkVarNames: m_scoreOvertime (int32)
            // NetworkVarNames: m_szClanTeamname (char)
            // NetworkVarNames: m_iClanID (uint32)
            // NetworkVarNames: m_szTeamFlagImage (char)
            // NetworkVarNames: m_szTeamLogoImage (char)
            namespace C_CSTeam {
                constexpr std::ptrdiff_t m_szTeamMatchStat = 0x785; // char[512]
                constexpr std::ptrdiff_t m_numMapVictories = 0x988; // int32
                constexpr std::ptrdiff_t m_bSurrendered = 0x98C; // bool
                constexpr std::ptrdiff_t m_scoreFirstHalf = 0x990; // int32
                constexpr std::ptrdiff_t m_scoreSecondHalf = 0x994; // int32
                constexpr std::ptrdiff_t m_scoreOvertime = 0x998; // int32
                constexpr std::ptrdiff_t m_szClanTeamname = 0x99C; // char[129]
                constexpr std::ptrdiff_t m_iClanID = 0xA20; // uint32
                constexpr std::ptrdiff_t m_szTeamFlagImage = 0xA24; // char[8]
                constexpr std::ptrdiff_t m_szTeamLogoImage = 0xA2C; // char[8]
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
            namespace C_EnvSky {
                constexpr std::ptrdiff_t m_hSkyMaterial = 0xC50; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hSkyMaterialLightingOnly = 0xC58; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_bStartDisabled = 0xC60; // bool
                constexpr std::ptrdiff_t m_vTintColor = 0xC61; // Color
                constexpr std::ptrdiff_t m_vTintColorLightingOnly = 0xC65; // Color
                constexpr std::ptrdiff_t m_flBrightnessScale = 0xC6C; // float32
                constexpr std::ptrdiff_t m_nFogType = 0xC70; // int32
                constexpr std::ptrdiff_t m_flFogMinStart = 0xC74; // float32
                constexpr std::ptrdiff_t m_flFogMinEnd = 0xC78; // float32
                constexpr std::ptrdiff_t m_flFogMaxStart = 0xC7C; // float32
                constexpr std::ptrdiff_t m_flFogMaxEnd = 0xC80; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0xC84; // bool
            }
            // Parent: C_BaseModelEntity
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_CLightComponent (CLightComponent::Storage_t)
            namespace C_LightEntity {
                constexpr std::ptrdiff_t m_CLightComponent = 0xC50; // CLightComponent*
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
            namespace C_PostProcessingVolume {
                constexpr std::ptrdiff_t m_hPostSettings = 0xC68; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
                constexpr std::ptrdiff_t m_flFadeDuration = 0xC70; // float32
                constexpr std::ptrdiff_t m_flMinLogExposure = 0xC74; // float32
                constexpr std::ptrdiff_t m_flMaxLogExposure = 0xC78; // float32
                constexpr std::ptrdiff_t m_flMinExposure = 0xC7C; // float32
                constexpr std::ptrdiff_t m_flMaxExposure = 0xC80; // float32
                constexpr std::ptrdiff_t m_flExposureCompensation = 0xC84; // float32
                constexpr std::ptrdiff_t m_flExposureFadeSpeedUp = 0xC88; // float32
                constexpr std::ptrdiff_t m_flExposureFadeSpeedDown = 0xC8C; // float32
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0xC90; // float32
                constexpr std::ptrdiff_t m_bMaster = 0xC94; // bool
                constexpr std::ptrdiff_t m_bExposureControl = 0xC95; // bool
                constexpr std::ptrdiff_t m_flRate = 0xC98; // float32
                constexpr std::ptrdiff_t m_flTonemapPercentTarget = 0xC9C; // float32
                constexpr std::ptrdiff_t m_flTonemapPercentBrightPixels = 0xCA0; // float32
                constexpr std::ptrdiff_t m_flTonemapMinAvgLum = 0xCA4; // float32
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
            namespace C_EnvParticleGlow {
                constexpr std::ptrdiff_t m_flAlphaScale = 0x1200; // float32
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1204; // float32
                constexpr std::ptrdiff_t m_flSelfIllumScale = 0x1208; // float32
                constexpr std::ptrdiff_t m_ColorTint = 0x120C; // Color
                constexpr std::ptrdiff_t m_hTextureOverride = 0x1210; // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
            // Parent: C_BaseModelEntity
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
            namespace C_TextureBasedAnimatable {
                constexpr std::ptrdiff_t m_bLoop = 0xC50; // bool
                constexpr std::ptrdiff_t m_flFPS = 0xC54; // float32
                constexpr std::ptrdiff_t m_hPositionKeys = 0xC58; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hRotationKeys = 0xC60; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_vAnimationBoundsMin = 0xC68; // Vector
                constexpr std::ptrdiff_t m_vAnimationBoundsMax = 0xC74; // Vector
                constexpr std::ptrdiff_t m_flStartTime = 0xC80; // float32
                constexpr std::ptrdiff_t m_flStartFrame = 0xC84; // float32
            }
            // Parent: C_BaseModelEntity
            // Fields count: 13
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames: m_bInitiallyPopulateInterpHistory (bool)
            // NetworkVarNames: m_bAnimGraphUpdateEnabled (bool)
            // NetworkVarNames: m_vecForce (Vector)
            // NetworkVarNames: m_nForceBone (int32)
            // NetworkVarNames: m_pRagdollPose (PhysicsRagdollPose_t*)
            // NetworkVarNames: m_bClientRagdoll (bool)
            namespace CBaseAnimGraph {
                constexpr std::ptrdiff_t m_bInitiallyPopulateInterpHistory = 0xCC8; // bool
                constexpr std::ptrdiff_t m_bSuppressAnimEventSounds = 0xCCA; // bool
                constexpr std::ptrdiff_t m_bAnimGraphUpdateEnabled = 0xCD8; // bool
                constexpr std::ptrdiff_t m_flMaxSlopeDistance = 0xCDC; // float32
                constexpr std::ptrdiff_t m_vLastSlopeCheckPos = 0xCE0; // Vector
                constexpr std::ptrdiff_t m_bAnimationUpdateScheduled = 0xCEC; // bool
                constexpr std::ptrdiff_t m_vecForce = 0xCF0; // Vector
                constexpr std::ptrdiff_t m_nForceBone = 0xCFC; // int32
                constexpr std::ptrdiff_t m_pClientsideRagdoll = 0xD00; // CBaseAnimGraph*
                constexpr std::ptrdiff_t m_bBuiltRagdoll = 0xD08; // bool
                constexpr std::ptrdiff_t m_pRagdollPose = 0xD20; // PhysicsRagdollPose_t*
                constexpr std::ptrdiff_t m_bClientRagdoll = 0xD28; // bool
                constexpr std::ptrdiff_t m_bHasAnimatedMaterialAttributes = 0xD38; // bool
            }
            // Parent: None
            // Fields count: 30
            //
            // Metadata:
            // NetworkVarNames: m_noGhostCollision (bool)
            namespace C_BreakableProp {
                constexpr std::ptrdiff_t m_OnBreak = 0xEC0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnHealthChanged = 0xEE8; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnTakeDamage = 0xF10; // CEntityIOOutput
                constexpr std::ptrdiff_t m_impactEnergyScale = 0xF38; // float32
                constexpr std::ptrdiff_t m_iMinHealthDmg = 0xF3C; // int32
                constexpr std::ptrdiff_t m_flPressureDelay = 0xF40; // float32
                constexpr std::ptrdiff_t m_hBreaker = 0xF44; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_PerformanceMode = 0xF48; // PerformanceMode_t
                constexpr std::ptrdiff_t m_flDmgModBullet = 0xF4C; // float32
                constexpr std::ptrdiff_t m_flDmgModClub = 0xF50; // float32
                constexpr std::ptrdiff_t m_flDmgModExplosive = 0xF54; // float32
                constexpr std::ptrdiff_t m_flDmgModFire = 0xF58; // float32
                constexpr std::ptrdiff_t m_iszPhysicsDamageTableName = 0xF60; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszBasePropData = 0xF68; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iInteractions = 0xF70; // int32
                constexpr std::ptrdiff_t m_flPreventDamageBeforeTime = 0xF74; // GameTime_t
                constexpr std::ptrdiff_t m_bHasBreakPiecesOrCommands = 0xF78; // bool
                constexpr std::ptrdiff_t m_explodeDamage = 0xF7C; // float32
                constexpr std::ptrdiff_t m_explodeRadius = 0xF80; // float32
                constexpr std::ptrdiff_t m_explosionDelay = 0xF88; // float32
                constexpr std::ptrdiff_t m_explosionBuildupSound = 0xF90; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionCustomEffect = 0xF98; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionCustomSound = 0xFA0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionModifier = 0xFA8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hPhysicsAttacker = 0xFB0; // CHandle<C_BasePlayerPawn>
                constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0xFB4; // GameTime_t
                constexpr std::ptrdiff_t m_flDefaultFadeScale = 0xFB8; // float32
                constexpr std::ptrdiff_t m_hLastAttacker = 0xFBC; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hFlareEnt = 0xFC0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_noGhostCollision = 0xFC4; // bool
            }
            // Parent: C_BreakableProp
            // Fields count: 23
            //
            // Metadata:
            // NetworkVarNames: m_bUseHitboxesForRenderBox (bool)
            // NetworkVarNames: m_bUseAnimGraph (bool)
            namespace C_DynamicProp {
                constexpr std::ptrdiff_t m_bUseHitboxesForRenderBox = 0xFC5; // bool
                constexpr std::ptrdiff_t m_bUseAnimGraph = 0xFC6; // bool
                constexpr std::ptrdiff_t m_pOutputAnimBegun = 0xFC8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOutputAnimOver = 0xFF0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOutputAnimLoopCycleOver = 0x1018; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAnimReachedStart = 0x1040; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAnimReachedEnd = 0x1068; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iszIdleAnim = 0x1090; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nIdleAnimLoopMode = 0x1098; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_bRandomizeCycle = 0x109C; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0x109D; // bool
                constexpr std::ptrdiff_t m_bFiredStartEndOutput = 0x109E; // bool
                constexpr std::ptrdiff_t m_bForceNpcExclude = 0x109F; // bool
                constexpr std::ptrdiff_t m_bCreateNonSolid = 0x10A0; // bool
                constexpr std::ptrdiff_t m_bIsOverrideProp = 0x10A1; // bool
                constexpr std::ptrdiff_t m_iInitialGlowState = 0x10A4; // int32
                constexpr std::ptrdiff_t m_nGlowRange = 0x10A8; // int32
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0x10AC; // int32
                constexpr std::ptrdiff_t m_glowColor = 0x10B0; // Color
                constexpr std::ptrdiff_t m_nGlowTeam = 0x10B4; // int32
                constexpr std::ptrdiff_t m_iCachedFrameCount = 0x10B8; // int32
                constexpr std::ptrdiff_t m_vecCachedRenderMins = 0x10BC; // Vector
                constexpr std::ptrdiff_t m_vecCachedRenderMaxs = 0x10C8; // Vector
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
            namespace C_ColorCorrectionVolume {
                constexpr std::ptrdiff_t m_LastEnterWeight = 0xC54; // float32
                constexpr std::ptrdiff_t m_LastEnterTime = 0xC58; // float32
                constexpr std::ptrdiff_t m_LastExitWeight = 0xC5C; // float32
                constexpr std::ptrdiff_t m_LastExitTime = 0xC60; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0xC64; // bool
                constexpr std::ptrdiff_t m_MaxWeight = 0xC68; // float32
                constexpr std::ptrdiff_t m_FadeDuration = 0xC6C; // float32
                constexpr std::ptrdiff_t m_Weight = 0xC70; // float32
                constexpr std::ptrdiff_t m_lookupFilename = 0xC74; // char[512]
            }
            // Parent: None
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
            namespace C_FuncMonitor {
                constexpr std::ptrdiff_t m_targetCamera = 0xC50; // CUtlString
                constexpr std::ptrdiff_t m_nResolutionEnum = 0xC58; // int32
                constexpr std::ptrdiff_t m_bRenderShadows = 0xC5C; // bool
                constexpr std::ptrdiff_t m_bUseUniqueColorTarget = 0xC5D; // bool
                constexpr std::ptrdiff_t m_brushModelName = 0xC60; // CUtlString
                constexpr std::ptrdiff_t m_hTargetCamera = 0xC68; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bEnabled = 0xC6C; // bool
                constexpr std::ptrdiff_t m_bDraw3DSkybox = 0xC6D; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkOverride
            namespace C_FuncMoveLinear {
            }
            // Parent: CBaseAnimGraph
            // Fields count: 13
            //
            // Metadata:
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_flStartTime (GameTime_t)
            // NetworkVarNames: m_flStartTimeInCommentary (float32)
            // NetworkVarNames: m_iszCommentaryFile (string_t)
            // NetworkVarNames: m_iszTitle (string_t)
            // NetworkVarNames: m_iszSpeakers (string_t)
            // NetworkVarNames: m_iNodeNumber (int)
            // NetworkVarNames: m_iNodeNumberMax (int)
            // NetworkVarNames: m_bListenedTo (bool)
            // NetworkVarNames: m_hViewPosition (CHandle<C_BaseEntity>)
            namespace C_PointCommentaryNode {
                constexpr std::ptrdiff_t m_bActive = 0xE80; // bool
                constexpr std::ptrdiff_t m_bWasActive = 0xE81; // bool
                constexpr std::ptrdiff_t m_flEndTime = 0xE84; // GameTime_t
                constexpr std::ptrdiff_t m_flStartTime = 0xE88; // GameTime_t
                constexpr std::ptrdiff_t m_flStartTimeInCommentary = 0xE8C; // float32
                constexpr std::ptrdiff_t m_iszCommentaryFile = 0xE90; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTitle = 0xE98; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSpeakers = 0xEA0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iNodeNumber = 0xEA8; // int32
                constexpr std::ptrdiff_t m_iNodeNumberMax = 0xEAC; // int32
                constexpr std::ptrdiff_t m_bListenedTo = 0xEB0; // bool
                constexpr std::ptrdiff_t m_hViewPosition = 0xEC0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bRestartAfterRestore = 0xEC4; // bool
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bIsUsable (bool)
            namespace C_BaseDoor {
                constexpr std::ptrdiff_t m_bIsUsable = 0xC50; // bool
            }
            // Parent: CBaseAnimGraph
            // Fields count: 19
            //
            // Metadata:
            // NetworkVarNames: m_flexWeight (float32)
            // NetworkVarNames: m_blinktoggle (bool)
            namespace C_BaseFlex {
                constexpr std::ptrdiff_t m_flexWeight = 0xE88; // C_NetworkUtlVectorBase<float32>
                constexpr std::ptrdiff_t m_vLookTargetPosition = 0xEA0; // Vector
                constexpr std::ptrdiff_t m_blinktoggle = 0xEB8; // bool
                constexpr std::ptrdiff_t m_nLastFlexUpdateFrameCount = 0xF18; // int32
                constexpr std::ptrdiff_t m_CachedViewTarget = 0xF1C; // Vector
                constexpr std::ptrdiff_t m_nNextSceneEventId = 0xF28; // uint32
                constexpr std::ptrdiff_t m_iBlink = 0xF2C; // int32
                constexpr std::ptrdiff_t m_blinktime = 0xF30; // float32
                constexpr std::ptrdiff_t m_prevblinktoggle = 0xF34; // bool
                constexpr std::ptrdiff_t m_iJawOpen = 0xF38; // int32
                constexpr std::ptrdiff_t m_flJawOpenAmount = 0xF3C; // float32
                constexpr std::ptrdiff_t m_flBlinkAmount = 0xF40; // float32
                constexpr std::ptrdiff_t m_iMouthAttachment = 0xF44; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_iEyeAttachment = 0xF45; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_bResetFlexWeightsOnModelChange = 0xF46; // bool
                constexpr std::ptrdiff_t m_nEyeOcclusionRendererBone = 0xF60; // int32
                constexpr std::ptrdiff_t m_mEyeOcclusionRendererCameraToBoneTransform = 0xF64; // matrix3x4_t
                constexpr std::ptrdiff_t m_vEyeOcclusionRendererHalfExtent = 0xF94; // Vector
                constexpr std::ptrdiff_t m_PhonemeClasses = 0xFB0; // C_BaseFlex::Emphasized_Phoneme[3]
            }
            // Parent: CBaseAnimGraph
            // Fields count: 23
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_poolOrigin (Vector)
            // NetworkVarNames: m_waterLevel (float32)
            // NetworkVarNames: m_x (float32)
            // NetworkVarNames: m_y (float32)
            // NetworkVarNames: m_z (float32)
            // NetworkVarNames: m_angle (float32)
            namespace C_Fish {
                constexpr std::ptrdiff_t m_pos = 0xE78; // Vector
                constexpr std::ptrdiff_t m_vel = 0xE84; // Vector
                constexpr std::ptrdiff_t m_angles = 0xE90; // QAngle
                constexpr std::ptrdiff_t m_localLifeState = 0xE9C; // int32
                constexpr std::ptrdiff_t m_deathDepth = 0xEA0; // float32
                constexpr std::ptrdiff_t m_deathAngle = 0xEA4; // float32
                constexpr std::ptrdiff_t m_buoyancy = 0xEA8; // float32
                constexpr std::ptrdiff_t m_wiggleTimer = 0xEB0; // CountdownTimer
                constexpr std::ptrdiff_t m_wigglePhase = 0xEC8; // float32
                constexpr std::ptrdiff_t m_wiggleRate = 0xECC; // float32
                constexpr std::ptrdiff_t m_actualPos = 0xED0; // Vector
                constexpr std::ptrdiff_t m_actualAngles = 0xEDC; // QAngle
                constexpr std::ptrdiff_t m_poolOrigin = 0xEE8; // Vector
                constexpr std::ptrdiff_t m_waterLevel = 0xEF4; // float32
                constexpr std::ptrdiff_t m_gotUpdate = 0xEF8; // bool
                constexpr std::ptrdiff_t m_x = 0xEFC; // float32
                constexpr std::ptrdiff_t m_y = 0xF00; // float32
                constexpr std::ptrdiff_t m_z = 0xF04; // float32
                constexpr std::ptrdiff_t m_angle = 0xF08; // float32
                constexpr std::ptrdiff_t m_errorHistory = 0xF0C; // float32[20]
                constexpr std::ptrdiff_t m_errorHistoryIndex = 0xF5C; // int32
                constexpr std::ptrdiff_t m_errorHistoryCount = 0xF60; // int32
                constexpr std::ptrdiff_t m_averageError = 0xF64; // float32
            }
            // Parent: C_BreakableProp
            // Fields count: 1
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
            namespace C_PhysicsProp {
                constexpr std::ptrdiff_t m_bAwake = 0xFC5; // bool
            }
            // Parent: C_DynamicProp
            // Fields count: 7
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
            // NetworkVarNames: m_hMaster (CHandle<C_BasePropDoor>)
            namespace C_BasePropDoor {
                constexpr std::ptrdiff_t m_eDoorState = 0x10E4; // DoorState_t
                constexpr std::ptrdiff_t m_modelChanged = 0x10E8; // bool
                constexpr std::ptrdiff_t m_bLocked = 0x10E9; // bool
                constexpr std::ptrdiff_t m_closedPosition = 0x10EC; // Vector
                constexpr std::ptrdiff_t m_closedAngles = 0x10F8; // QAngle
                constexpr std::ptrdiff_t m_hMaster = 0x1104; // CHandle<C_BasePropDoor>
                constexpr std::ptrdiff_t m_vWhereToSetLightingOrigin = 0x1108; // Vector
            }
            // Parent: CBaseAnimGraph
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_ragPos (Vector)
            // NetworkVarNames: m_ragAngles (QAngle)
            // NetworkVarNames: m_flBlendWeight (float32)
            // NetworkVarNames: m_hRagdollSource (EHANDLE)
            namespace C_RagdollProp {
                constexpr std::ptrdiff_t m_ragPos = 0xE80; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_ragAngles = 0xE98; // C_NetworkUtlVectorBase<QAngle>
                constexpr std::ptrdiff_t m_flBlendWeight = 0xEB0; // float32
                constexpr std::ptrdiff_t m_hRagdollSource = 0xEB4; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iEyeAttachment = 0xEB8; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_flBlendWeightCurrent = 0xEBC; // float32
                constexpr std::ptrdiff_t m_parentPhysicsBoneIndices = 0xEC0; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_worldSpaceBoneComputationOrder = 0xED8; // CUtlVector<int32>
            }
            // Parent: C_PhysicsProp
            // Fields count: 1
            //
            // Metadata:
            // MNetworkExcludeByName
            // NetworkVarNames: m_ShardDesc (shard_model_desc_t)
            namespace C_ShatterGlassShardPhysics {
                constexpr std::ptrdiff_t m_ShardDesc = 0xFD0; // shard_model_desc_t
            }
            // Parent: C_BaseFlex
            // Fields count: 20
            //
            // Metadata:
            // NetworkVarNames: m_AttributeManager (CAttributeContainer)
            // NetworkVarNames: m_OriginalOwnerXuidLow (uint32)
            // NetworkVarNames: m_OriginalOwnerXuidHigh (uint32)
            // NetworkVarNames: m_nFallbackPaintKit (int)
            // NetworkVarNames: m_nFallbackSeed (int)
            // NetworkVarNames: m_flFallbackWear (float)
            // NetworkVarNames: m_nFallbackStatTrak (int)
            namespace C_EconEntity {
                constexpr std::ptrdiff_t m_flFlexDelayTime = 0x1020; // float32
                constexpr std::ptrdiff_t m_flFlexDelayedWeight = 0x1028; // float32*
                constexpr std::ptrdiff_t m_bAttributesInitialized = 0x1030; // bool
                constexpr std::ptrdiff_t m_AttributeManager = 0x1038; // C_AttributeContainer
                constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0x23E8; // uint32
                constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x23EC; // uint32
                constexpr std::ptrdiff_t m_nFallbackPaintKit = 0x23F0; // int32
                constexpr std::ptrdiff_t m_nFallbackSeed = 0x23F4; // int32
                constexpr std::ptrdiff_t m_flFallbackWear = 0x23F8; // float32
                constexpr std::ptrdiff_t m_nFallbackStatTrak = 0x23FC; // int32
                constexpr std::ptrdiff_t m_bClientside = 0x2400; // bool
                constexpr std::ptrdiff_t m_bParticleSystemsCreated = 0x2401; // bool
                constexpr std::ptrdiff_t m_vecAttachedParticles = 0x2408; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_hViewmodelAttachment = 0x2420; // CHandle<CBaseAnimGraph>
                constexpr std::ptrdiff_t m_iOldTeam = 0x2424; // int32
                constexpr std::ptrdiff_t m_bAttachmentDirty = 0x2428; // bool
                constexpr std::ptrdiff_t m_nUnloadedModelIndex = 0x242C; // int32
                constexpr std::ptrdiff_t m_iNumOwnerValidationRetries = 0x2430; // int32
                constexpr std::ptrdiff_t m_hOldProvidee = 0x2440; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_vecAttachedModels = 0x2448; // CUtlVector<C_EconEntity::AttachedModelData_t>
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
            namespace C_BaseGrenade {
                constexpr std::ptrdiff_t m_bHasWarnedAI = 0x1010; // bool
                constexpr std::ptrdiff_t m_bIsSmokeGrenade = 0x1011; // bool
                constexpr std::ptrdiff_t m_bIsLive = 0x1012; // bool
                constexpr std::ptrdiff_t m_DmgRadius = 0x1014; // float32
                constexpr std::ptrdiff_t m_flDetonateTime = 0x1018; // GameTime_t
                constexpr std::ptrdiff_t m_flWarnAITime = 0x101C; // float32
                constexpr std::ptrdiff_t m_flDamage = 0x1020; // float32
                constexpr std::ptrdiff_t m_iszBounceSound = 0x1028; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_ExplosionSound = 0x1030; // CUtlString
                constexpr std::ptrdiff_t m_hThrower = 0x103C; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_flNextAttack = 0x1054; // GameTime_t
                constexpr std::ptrdiff_t m_hOriginalThrower = 0x1058; // CHandle<C_CSPlayerPawn>
            }
            // Parent: CBaseAnimGraph
            // Fields count: 17
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
            namespace C_BaseViewModel {
                constexpr std::ptrdiff_t m_vecLastFacing = 0xE80; // Vector
                constexpr std::ptrdiff_t m_nViewModelIndex = 0xE8C; // uint32
                constexpr std::ptrdiff_t m_nAnimationParity = 0xE90; // uint32
                constexpr std::ptrdiff_t m_flAnimationStartTime = 0xE94; // float32
                constexpr std::ptrdiff_t m_hWeapon = 0xE98; // CHandle<C_BasePlayerWeapon>
                constexpr std::ptrdiff_t m_sVMName = 0xEA0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sAnimationPrefix = 0xEA8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hWeaponModel = 0xEB0; // CHandle<C_ViewmodelWeapon>
                constexpr std::ptrdiff_t m_iCameraAttachment = 0xEB4; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_vecLastCameraAngles = 0xEB8; // QAngle
                constexpr std::ptrdiff_t m_previousElapsedDuration = 0xEC4; // float32
                constexpr std::ptrdiff_t m_previousCycle = 0xEC8; // float32
                constexpr std::ptrdiff_t m_nOldAnimationParity = 0xECC; // int32
                constexpr std::ptrdiff_t m_hOldLayerSequence = 0xED0; // HSequence
                constexpr std::ptrdiff_t m_oldLayer = 0xED4; // int32
                constexpr std::ptrdiff_t m_oldLayerStartTime = 0xED8; // float32
                constexpr std::ptrdiff_t m_hControlPanel = 0xEDC; // CHandle<C_BaseEntity>
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
            namespace C_BaseCSGrenadeProjectile {
                constexpr std::ptrdiff_t m_vInitialPosition = 0x105C; // Vector
                constexpr std::ptrdiff_t m_vInitialVelocity = 0x1068; // Vector
                constexpr std::ptrdiff_t m_nBounces = 0x1074; // int32
                constexpr std::ptrdiff_t m_nExplodeEffectIndex = 0x1078; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_nExplodeEffectTickBegin = 0x1080; // int32
                constexpr std::ptrdiff_t m_vecExplodeEffectOrigin = 0x1084; // Vector
                constexpr std::ptrdiff_t m_flSpawnTime = 0x1090; // GameTime_t
                constexpr std::ptrdiff_t vecLastTrailLinePos = 0x1094; // Vector
                constexpr std::ptrdiff_t flNextTrailLineTime = 0x10A0; // GameTime_t
                constexpr std::ptrdiff_t m_bExplodeEffectBegan = 0x10A4; // bool
                constexpr std::ptrdiff_t m_bCanCreateGrenadeTrail = 0x10A5; // bool
                constexpr std::ptrdiff_t m_nSnapshotTrajectoryEffectIndex = 0x10A8; // ParticleIndex_t
                constexpr std::ptrdiff_t m_hSnapshotTrajectoryParticleSnapshot = 0x10B0; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_arrTrajectoryTrailPoints = 0x10B8; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_arrTrajectoryTrailPointCreationTimes = 0x10D0; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_flTrajectoryTrailEffectCreationTime = 0x10E8; // float32
            }
            // Parent: CBaseAnimGraph
            // Fields count: 29
            //
            // Metadata:
            // NetworkVarNames: m_bBombTicking (bool)
            // NetworkVarNames: m_nBombSite (int)
            // NetworkVarNames: m_nSourceSoundscapeHash (int)
            // NetworkVarNames: m_entitySpottedState (EntitySpottedState_t)
            // NetworkVarNames: m_flC4Blow (GameTime_t)
            // NetworkVarNames: m_bCannotBeDefused (bool)
            // NetworkVarNames: m_bHasExploded (bool)
            // NetworkVarNames: m_flTimerLength (float)
            // NetworkVarNames: m_bBeingDefused (bool)
            // NetworkVarNames: m_flDefuseLength (float)
            // NetworkVarNames: m_flDefuseCountDown (GameTime_t)
            // NetworkVarNames: m_bBombDefused (bool)
            // NetworkVarNames: m_hBombDefuser (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_hControlPanel (CHandle<CBaseEntity>)
            namespace C_PlantedC4 {
                constexpr std::ptrdiff_t m_bBombTicking = 0xE78; // bool
                constexpr std::ptrdiff_t m_nBombSite = 0xE7C; // int32
                constexpr std::ptrdiff_t m_nSourceSoundscapeHash = 0xE80; // int32
                constexpr std::ptrdiff_t m_entitySpottedState = 0xE88; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_flNextGlow = 0xEA0; // GameTime_t
                constexpr std::ptrdiff_t m_flNextBeep = 0xEA4; // GameTime_t
                constexpr std::ptrdiff_t m_flC4Blow = 0xEA8; // GameTime_t
                constexpr std::ptrdiff_t m_bCannotBeDefused = 0xEAC; // bool
                constexpr std::ptrdiff_t m_bHasExploded = 0xEAD; // bool
                constexpr std::ptrdiff_t m_flTimerLength = 0xEB0; // float32
                constexpr std::ptrdiff_t m_bBeingDefused = 0xEB4; // bool
                constexpr std::ptrdiff_t m_bTriggerWarning = 0xEB8; // float32
                constexpr std::ptrdiff_t m_bExplodeWarning = 0xEBC; // float32
                constexpr std::ptrdiff_t m_bC4Activated = 0xEC0; // bool
                constexpr std::ptrdiff_t m_bTenSecWarning = 0xEC1; // bool
                constexpr std::ptrdiff_t m_flDefuseLength = 0xEC4; // float32
                constexpr std::ptrdiff_t m_flDefuseCountDown = 0xEC8; // GameTime_t
                constexpr std::ptrdiff_t m_bBombDefused = 0xECC; // bool
                constexpr std::ptrdiff_t m_hBombDefuser = 0xED0; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_hControlPanel = 0xED4; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hDefuserMultimeter = 0xED8; // CHandle<C_Multimeter>
                constexpr std::ptrdiff_t m_flNextRadarFlashTime = 0xEDC; // GameTime_t
                constexpr std::ptrdiff_t m_bRadarFlash = 0xEE0; // bool
                constexpr std::ptrdiff_t m_pBombDefuser = 0xEE4; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_fLastDefuseTime = 0xEE8; // GameTime_t
                constexpr std::ptrdiff_t m_pPredictionOwner = 0xEF0; // CBasePlayerController*
                constexpr std::ptrdiff_t m_vecC4ExplodeSpectatePos = 0xEF8; // Vector
                constexpr std::ptrdiff_t m_vecC4ExplodeSpectateAng = 0xF04; // QAngle
                constexpr std::ptrdiff_t m_flC4ExplodeSpectateDuration = 0xF10; // float32
            }
            // Parent: C_EconEntity
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bShouldGlow (bool)
            namespace C_Item {
                constexpr std::ptrdiff_t m_bShouldGlow = 0x2460; // bool
                constexpr std::ptrdiff_t m_pReticleHintTextName = 0x2461; // char[256]
            }
            // Parent: C_DynamicProp
            // Fields count: 8
            //
            // Metadata:
            // NetworkVarNames: m_jumpedThisFrame (bool)
            // NetworkVarNames: m_leader (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_AttributeManager (CAttributeContainer)
            // NetworkVarNames: m_OriginalOwnerXuidLow (uint32)
            // NetworkVarNames: m_OriginalOwnerXuidHigh (uint32)
            namespace C_Chicken {
                constexpr std::ptrdiff_t m_hHolidayHatAddon = 0x10E0; // CHandle<CBaseAnimGraph>
                constexpr std::ptrdiff_t m_jumpedThisFrame = 0x10E4; // bool
                constexpr std::ptrdiff_t m_leader = 0x10E8; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_AttributeManager = 0x10F0; // C_AttributeContainer
                constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0x24A0; // uint32
                constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x24A4; // uint32
                constexpr std::ptrdiff_t m_bAttributesInitialized = 0x24A8; // bool
                constexpr std::ptrdiff_t m_hWaterWakeParticles = 0x24AC; // ParticleIndex_t
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
            namespace C_BasePlayerWeapon {
                constexpr std::ptrdiff_t m_nNextPrimaryAttackTick = 0x2460; // GameTick_t
                constexpr std::ptrdiff_t m_flNextPrimaryAttackTickRatio = 0x2464; // float32
                constexpr std::ptrdiff_t m_nNextSecondaryAttackTick = 0x2468; // GameTick_t
                constexpr std::ptrdiff_t m_flNextSecondaryAttackTickRatio = 0x246C; // float32
                constexpr std::ptrdiff_t m_iClip1 = 0x2470; // int32
                constexpr std::ptrdiff_t m_iClip2 = 0x2474; // int32
                constexpr std::ptrdiff_t m_pReserveAmmo = 0x2478; // int32[2]
            }
            // Parent: C_RagdollProp
            // Fields count: 7
            //
            // Metadata:
            // NetworkVarNames: m_boneIndexAttached (uint32)
            // NetworkVarNames: m_ragdollAttachedObjectIndex (uint32)
            // NetworkVarNames: m_attachmentPointBoneSpace (Vector)
            // NetworkVarNames: m_attachmentPointRagdollSpace (Vector)
            namespace C_RagdollPropAttached {
                constexpr std::ptrdiff_t m_boneIndexAttached = 0xEF0; // uint32
                constexpr std::ptrdiff_t m_ragdollAttachedObjectIndex = 0xEF4; // uint32
                constexpr std::ptrdiff_t m_attachmentPointBoneSpace = 0xEF8; // Vector
                constexpr std::ptrdiff_t m_attachmentPointRagdollSpace = 0xF04; // Vector
                constexpr std::ptrdiff_t m_vecOffset = 0xF10; // Vector
                constexpr std::ptrdiff_t m_parentTime = 0xF1C; // float32
                constexpr std::ptrdiff_t m_bHasParent = 0xF20; // bool
            }
            // Parent: C_BaseFlex
            // Fields count: 8
            //
            // Metadata:
            // MNetworkExcludeByUserGroup
            // NetworkVarNames: m_hMyWearables (CHandle<C_EconWearable>)
            // NetworkVarNames: m_flFieldOfView (float)
            namespace C_BaseCombatCharacter {
                constexpr std::ptrdiff_t m_hMyWearables = 0x1010; // C_NetworkUtlVectorBase<CHandle<C_EconWearable>>
                constexpr std::ptrdiff_t m_bloodColor = 0x1028; // int32
                constexpr std::ptrdiff_t m_leftFootAttachment = 0x102C; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_rightFootAttachment = 0x102D; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_nWaterWakeMode = 0x1030; // C_BaseCombatCharacter::WaterWakeMode_t
                constexpr std::ptrdiff_t m_flWaterWorldZ = 0x1034; // float32
                constexpr std::ptrdiff_t m_flWaterNextTraceTime = 0x1038; // float32
                constexpr std::ptrdiff_t m_flFieldOfView = 0x103C; // float32
            }
            // Parent: C_BaseCombatCharacter
            // Fields count: 28
            //
            // Metadata:
            // MNetworkUserGroupProxy
            // MNetworkUserGroupProxy
            // MNetworkExcludeByUserGroup
            // MNetworkIncludeByUserGroup
            // MNetworkIncludeByUserGroup
            // MNetworkIncludeByUserGroup
            // MNetworkOverride
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
            // NetworkVarNames: m_ServerViewAngleChanges (ViewAngleServerChange_t)
            // NetworkVarNames: m_iHideHUD (uint32)
            // NetworkVarNames: m_skybox3d (sky3dparams_t)
            // NetworkVarNames: m_flDeathTime (GameTime_t)
            // NetworkVarNames: m_hController (CHandle<CBasePlayerController>)
            namespace C_BasePlayerPawn {
                constexpr std::ptrdiff_t m_pWeaponServices = 0x10A0; // CPlayer_WeaponServices*
                constexpr std::ptrdiff_t m_pItemServices = 0x10A8; // CPlayer_ItemServices*
                constexpr std::ptrdiff_t m_pAutoaimServices = 0x10B0; // CPlayer_AutoaimServices*
                constexpr std::ptrdiff_t m_pObserverServices = 0x10B8; // CPlayer_ObserverServices*
                constexpr std::ptrdiff_t m_pWaterServices = 0x10C0; // CPlayer_WaterServices*
                constexpr std::ptrdiff_t m_pUseServices = 0x10C8; // CPlayer_UseServices*
                constexpr std::ptrdiff_t m_pFlashlightServices = 0x10D0; // CPlayer_FlashlightServices*
                constexpr std::ptrdiff_t m_pCameraServices = 0x10D8; // CPlayer_CameraServices*
                constexpr std::ptrdiff_t m_pMovementServices = 0x10E0; // CPlayer_MovementServices*
                constexpr std::ptrdiff_t m_ServerViewAngleChanges = 0x10F0; // C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
                constexpr std::ptrdiff_t m_nHighestConsumedServerViewAngleChangeIndex = 0x1140; // uint32
                constexpr std::ptrdiff_t v_angle = 0x1144; // QAngle
                constexpr std::ptrdiff_t v_anglePrevious = 0x1150; // QAngle
                constexpr std::ptrdiff_t m_iHideHUD = 0x115C; // uint32
                constexpr std::ptrdiff_t m_skybox3d = 0x1160; // sky3dparams_t
                constexpr std::ptrdiff_t m_flDeathTime = 0x11F0; // GameTime_t
                constexpr std::ptrdiff_t m_vecPredictionError = 0x11F4; // Vector
                constexpr std::ptrdiff_t m_flPredictionErrorTime = 0x1200; // GameTime_t
                constexpr std::ptrdiff_t m_vecLastCameraSetupLocalOrigin = 0x1204; // Vector
                constexpr std::ptrdiff_t m_flLastCameraSetupTime = 0x1210; // GameTime_t
                constexpr std::ptrdiff_t m_flFOVSensitivityAdjust = 0x1214; // float32
                constexpr std::ptrdiff_t m_flMouseSensitivity = 0x1218; // float32
                constexpr std::ptrdiff_t m_vOldOrigin = 0x121C; // Vector
                constexpr std::ptrdiff_t m_flOldSimulationTime = 0x1228; // float32
                constexpr std::ptrdiff_t m_nLastExecutedCommandNumber = 0x122C; // int32
                constexpr std::ptrdiff_t m_nLastExecutedCommandTick = 0x1230; // int32
                constexpr std::ptrdiff_t m_hController = 0x1234; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_bIsSwappingToPredictableController = 0x1238; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MNetworkOverride
            // NetworkVarNames: m_bShouldIgnoreOffsetAndAccuracy (bool)
            // NetworkVarNames: m_nWeaponParity (uint32)
            namespace C_CSGOViewModel {
                constexpr std::ptrdiff_t m_bShouldIgnoreOffsetAndAccuracy = 0xF04; // bool
                constexpr std::ptrdiff_t m_nWeaponParity = 0xF08; // uint32
                constexpr std::ptrdiff_t m_nOldWeaponParity = 0xF0C; // uint32
                constexpr std::ptrdiff_t m_nLastKnownAssociatedWeaponEntIndex = 0xF10; // CEntityIndex
                constexpr std::ptrdiff_t m_bNeedToQueueHighResComposite = 0xF14; // bool
                constexpr std::ptrdiff_t m_vLoweredWeaponOffset = 0xF74; // QAngle
            }
            // Parent: C_BasePlayerWeapon
            // Fields count: 71
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
            namespace C_CSWeaponBase {
                constexpr std::ptrdiff_t m_flFireSequenceStartTime = 0x24CC; // float32
                constexpr std::ptrdiff_t m_nFireSequenceStartTimeChange = 0x24D0; // int32
                constexpr std::ptrdiff_t m_nFireSequenceStartTimeAck = 0x24D4; // int32
                constexpr std::ptrdiff_t m_ePlayerFireEvent = 0x24D8; // PlayerAnimEvent_t
                constexpr std::ptrdiff_t m_ePlayerFireEventAttackType = 0x24DC; // WeaponAttackType_t
                constexpr std::ptrdiff_t m_seqIdle = 0x24E0; // HSequence
                constexpr std::ptrdiff_t m_seqFirePrimary = 0x24E4; // HSequence
                constexpr std::ptrdiff_t m_seqFireSecondary = 0x24E8; // HSequence
                constexpr std::ptrdiff_t m_thirdPersonFireSequences = 0x24F0; // CUtlVector<HSequence>
                constexpr std::ptrdiff_t m_hCurrentThirdPersonSequence = 0x2508; // HSequence
                constexpr std::ptrdiff_t m_nSilencerBoneIndex = 0x250C; // int32
                constexpr std::ptrdiff_t m_thirdPersonSequences = 0x2510; // HSequence[7]
                constexpr std::ptrdiff_t m_ClientPreviousWeaponState = 0x2548; // CSWeaponState_t
                constexpr std::ptrdiff_t m_iState = 0x254C; // CSWeaponState_t
                constexpr std::ptrdiff_t m_flCrosshairDistance = 0x2550; // float32
                constexpr std::ptrdiff_t m_iAmmoLastCheck = 0x2554; // int32
                constexpr std::ptrdiff_t m_iAlpha = 0x2558; // int32
                constexpr std::ptrdiff_t m_iScopeTextureID = 0x255C; // int32
                constexpr std::ptrdiff_t m_iCrosshairTextureID = 0x2560; // int32
                constexpr std::ptrdiff_t m_flGunAccuracyPositionDeprecated = 0x2564; // float32
                constexpr std::ptrdiff_t m_nLastEmptySoundCmdNum = 0x2568; // int32
                constexpr std::ptrdiff_t m_nViewModelIndex = 0x256C; // uint32
                constexpr std::ptrdiff_t m_bReloadsWithClips = 0x2570; // bool
                constexpr std::ptrdiff_t m_flTimeWeaponIdle = 0x2574; // GameTime_t
                constexpr std::ptrdiff_t m_bFireOnEmpty = 0x2578; // bool
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0x2580; // CEntityIOOutput
                constexpr std::ptrdiff_t m_weaponMode = 0x25A8; // CSWeaponMode
                constexpr std::ptrdiff_t m_flTurningInaccuracyDelta = 0x25AC; // float32
                constexpr std::ptrdiff_t m_vecTurningInaccuracyEyeDirLast = 0x25B0; // Vector
                constexpr std::ptrdiff_t m_flTurningInaccuracy = 0x25BC; // float32
                constexpr std::ptrdiff_t m_fAccuracyPenalty = 0x25C0; // float32
                constexpr std::ptrdiff_t m_flLastAccuracyUpdateTime = 0x25C4; // GameTime_t
                constexpr std::ptrdiff_t m_fAccuracySmoothedForZoom = 0x25C8; // float32
                constexpr std::ptrdiff_t m_fScopeZoomEndTime = 0x25CC; // GameTime_t
                constexpr std::ptrdiff_t m_iRecoilIndex = 0x25D0; // int32
                constexpr std::ptrdiff_t m_flRecoilIndex = 0x25D4; // float32
                constexpr std::ptrdiff_t m_bBurstMode = 0x25D8; // bool
                constexpr std::ptrdiff_t m_nPostponeFireReadyTicks = 0x25DC; // GameTick_t
                constexpr std::ptrdiff_t m_flPostponeFireReadyFrac = 0x25E0; // float32
                constexpr std::ptrdiff_t m_bInReload = 0x25E4; // bool
                constexpr std::ptrdiff_t m_bReloadVisuallyComplete = 0x25E5; // bool
                constexpr std::ptrdiff_t m_flDroppedAtTime = 0x25E8; // GameTime_t
                constexpr std::ptrdiff_t m_bIsHauledBack = 0x25EC; // bool
                constexpr std::ptrdiff_t m_bSilencerOn = 0x25ED; // bool
                constexpr std::ptrdiff_t m_flTimeSilencerSwitchComplete = 0x25F0; // GameTime_t
                constexpr std::ptrdiff_t m_iOriginalTeamNumber = 0x25F4; // int32
                constexpr std::ptrdiff_t m_flNextAttackRenderTimeOffset = 0x25F8; // float32
                constexpr std::ptrdiff_t m_bVisualsDataSet = 0x2680; // bool
                constexpr std::ptrdiff_t m_bOldFirstPersonSpectatedState = 0x2681; // bool
                constexpr std::ptrdiff_t m_hOurPing = 0x2684; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nOurPingIndex = 0x2688; // CEntityIndex
                constexpr std::ptrdiff_t m_vecOurPingPos = 0x268C; // Vector
                constexpr std::ptrdiff_t m_bGlowForPing = 0x2698; // bool
                constexpr std::ptrdiff_t m_bUIWeapon = 0x2699; // bool
                constexpr std::ptrdiff_t m_hPrevOwner = 0x26A8; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_nDropTick = 0x26AC; // GameTick_t
                constexpr std::ptrdiff_t m_donated = 0x26CC; // bool
                constexpr std::ptrdiff_t m_fLastShotTime = 0x26D0; // GameTime_t
                constexpr std::ptrdiff_t m_bWasOwnedByCT = 0x26D4; // bool
                constexpr std::ptrdiff_t m_bWasOwnedByTerrorist = 0x26D5; // bool
                constexpr std::ptrdiff_t m_gunHeat = 0x26D8; // float32
                constexpr std::ptrdiff_t m_smokeAttachments = 0x26DC; // uint32
                constexpr std::ptrdiff_t m_lastSmokeTime = 0x26E0; // GameTime_t
                constexpr std::ptrdiff_t m_flNextClientFireBulletTime = 0x26E4; // float32
                constexpr std::ptrdiff_t m_flNextClientFireBulletTime_Repredict = 0x26E8; // float32
                constexpr std::ptrdiff_t m_IronSightController = 0x27C0; // C_IronSightController
                constexpr std::ptrdiff_t m_iIronSightMode = 0x2870; // int32
                constexpr std::ptrdiff_t m_flLastLOSTraceFailureTime = 0x2880; // GameTime_t
                constexpr std::ptrdiff_t m_iNumEmptyAttacks = 0x2884; // int32
                constexpr std::ptrdiff_t m_flLastMagDropRequestTime = 0x2900; // GameTime_t
                constexpr std::ptrdiff_t m_flWatTickOffset = 0x2904; // float32
            }
            // Parent: C_CSWeaponBase
            // Fields count: 6
            //
            // Metadata:
            // NetworkVarNames: m_zoomLevel (int)
            // NetworkVarNames: m_iBurstShotsRemaining (int)
            // NetworkVarNames: m_bNeedsBoltAction (bool)
            namespace C_CSWeaponBaseGun {
                constexpr std::ptrdiff_t m_zoomLevel = 0x2908; // int32
                constexpr std::ptrdiff_t m_iBurstShotsRemaining = 0x290C; // int32
                constexpr std::ptrdiff_t m_iSilencerBodygroup = 0x2910; // int32
                constexpr std::ptrdiff_t m_silencedModelIndex = 0x2920; // int32
                constexpr std::ptrdiff_t m_inPrecache = 0x2924; // bool
                constexpr std::ptrdiff_t m_bNeedsBoltAction = 0x2925; // bool
            }
            // Parent: C_CSWeaponBase
            // Fields count: 11
            //
            // Metadata:
            // NetworkVarNames: m_bStartedArming (bool)
            // NetworkVarNames: m_fArmedTime (GameTime_t)
            // NetworkVarNames: m_bBombPlacedAnimation (bool)
            // NetworkVarNames: m_bIsPlantingViaUse (bool)
            // NetworkVarNames: m_entitySpottedState (EntitySpottedState_t)
            namespace C_C4 {
                constexpr std::ptrdiff_t m_szScreenText = 0x2908; // char[32]
                constexpr std::ptrdiff_t m_activeLightParticleIndex = 0x2928; // ParticleIndex_t
                constexpr std::ptrdiff_t m_eActiveLightEffect = 0x292C; // C4LightEffect_t
                constexpr std::ptrdiff_t m_bStartedArming = 0x2930; // bool
                constexpr std::ptrdiff_t m_fArmedTime = 0x2934; // GameTime_t
                constexpr std::ptrdiff_t m_bBombPlacedAnimation = 0x2938; // bool
                constexpr std::ptrdiff_t m_bIsPlantingViaUse = 0x2939; // bool
                constexpr std::ptrdiff_t m_entitySpottedState = 0x2940; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSpotRules = 0x2958; // int32
                constexpr std::ptrdiff_t m_bPlayedArmingBeeps = 0x295C; // bool[7]
                constexpr std::ptrdiff_t m_bBombPlanted = 0x2963; // bool
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_fFireTime (GameTime_t)
            namespace C_WeaponTaser {
                constexpr std::ptrdiff_t m_fFireTime = 0x2928; // GameTime_t
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_flDisplayHealth (float)
            namespace C_WeaponShield {
                constexpr std::ptrdiff_t m_flDisplayHealth = 0x2928; // float32
            }
            // Parent: C_BaseCSGrenadeProjectile
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bIsIncGrenade (bool)
            namespace C_MolotovProjectile {
                constexpr std::ptrdiff_t m_bIsIncGrenade = 0x10EC; // bool
            }
            // Parent: C_BaseCSGrenadeProjectile
            // Fields count: 3
            //
            // Metadata:
            // NetworkVarNames: m_nDecoyShotTick (int)
            namespace C_DecoyProjectile {
                constexpr std::ptrdiff_t m_nDecoyShotTick = 0x10EC; // int32
                constexpr std::ptrdiff_t m_nClientLastKnownDecoyShotTick = 0x10F0; // int32
                constexpr std::ptrdiff_t m_flTimeParticleEffectSpawn = 0x1118; // GameTime_t
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
            namespace C_SmokeGrenadeProjectile {
                constexpr std::ptrdiff_t m_nSmokeEffectTickBegin = 0x10F8; // int32
                constexpr std::ptrdiff_t m_bDidSmokeEffect = 0x10FC; // bool
                constexpr std::ptrdiff_t m_nRandomSeed = 0x1100; // int32
                constexpr std::ptrdiff_t m_vSmokeColor = 0x1104; // Vector
                constexpr std::ptrdiff_t m_vSmokeDetonationPos = 0x1110; // Vector
                constexpr std::ptrdiff_t m_VoxelFrameData = 0x1120; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_bSmokeVolumeDataReceived = 0x1138; // bool
                constexpr std::ptrdiff_t m_bSmokeEffectSpawned = 0x1139; // bool
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
            namespace C_BaseCSGrenade {
                constexpr std::ptrdiff_t m_bClientPredictDelete = 0x2908; // bool
                constexpr std::ptrdiff_t m_bRedraw = 0x2909; // bool
                constexpr std::ptrdiff_t m_bIsHeldByPlayer = 0x290A; // bool
                constexpr std::ptrdiff_t m_bPinPulled = 0x290B; // bool
                constexpr std::ptrdiff_t m_bJumpThrow = 0x290C; // bool
                constexpr std::ptrdiff_t m_bThrowAnimating = 0x290D; // bool
                constexpr std::ptrdiff_t m_fThrowTime = 0x2910; // GameTime_t
                constexpr std::ptrdiff_t m_flThrowStrength = 0x2914; // float32
                constexpr std::ptrdiff_t m_flThrowStrengthApproach = 0x2918; // float32
                constexpr std::ptrdiff_t m_fDropTime = 0x291C; // GameTime_t
                constexpr std::ptrdiff_t m_bJustPulledPin = 0x2920; // bool
                constexpr std::ptrdiff_t m_nNextHoldTick = 0x2924; // GameTick_t
                constexpr std::ptrdiff_t m_flNextHoldFrac = 0x2928; // float32
                constexpr std::ptrdiff_t m_hSwitchToWeaponAfterThrow = 0x292C; // CHandle<C_CSWeaponBase>
            }
            // Parent: C_CSWeaponBase
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_SequenceCompleteTimer (CountdownTimer)
            // NetworkVarNames: m_bRedraw (bool)
            namespace C_WeaponBaseItem {
                constexpr std::ptrdiff_t m_SequenceCompleteTimer = 0x2908; // CountdownTimer
                constexpr std::ptrdiff_t m_bRedraw = 0x2920; // bool
            }
            // Parent: C_Item
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_OwningPlayer (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_KillingPlayer (CHandle<CCSPlayerPawn>)
            namespace C_ItemDogtags {
                constexpr std::ptrdiff_t m_OwningPlayer = 0x2564; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_KillingPlayer = 0x2568; // CHandle<C_CSPlayerPawn>
            }
            // Parent: C_CSWeaponBase
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bPlayingUninterruptableAct (bool)
            // NetworkVarNames: m_nUninterruptableActivity (PlayerAnimEvent_t)
            namespace C_Fists {
                constexpr std::ptrdiff_t m_bPlayingUninterruptableAct = 0x2908; // bool
                constexpr std::ptrdiff_t m_nUninterruptableActivity = 0x290C; // PlayerAnimEvent_t
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
            namespace C_CSPlayerPawnBase {
                constexpr std::ptrdiff_t m_pPingServices = 0x1260; // CCSPlayer_PingServices*
                constexpr std::ptrdiff_t m_pViewModelServices = 0x1268; // CPlayer_ViewModelServices*
                constexpr std::ptrdiff_t m_fRenderingClipPlane = 0x1278; // float32[4]
                constexpr std::ptrdiff_t m_nLastClipPlaneSetupFrame = 0x1288; // int32
                constexpr std::ptrdiff_t m_vecLastClipCameraPos = 0x128C; // Vector
                constexpr std::ptrdiff_t m_vecLastClipCameraForward = 0x1298; // Vector
                constexpr std::ptrdiff_t m_bClipHitStaticWorld = 0x12A4; // bool
                constexpr std::ptrdiff_t m_bCachedPlaneIsValid = 0x12A5; // bool
                constexpr std::ptrdiff_t m_pClippingWeapon = 0x12A8; // C_CSWeaponBase*
                constexpr std::ptrdiff_t m_previousPlayerState = 0x12B0; // CSPlayerState
                constexpr std::ptrdiff_t m_flLastCollisionCeiling = 0x12B4; // float32
                constexpr std::ptrdiff_t m_flLastCollisionCeilingChangeTime = 0x12B8; // float32
                constexpr std::ptrdiff_t m_grenadeParameterStashTime = 0x12D8; // GameTime_t
                constexpr std::ptrdiff_t m_bGrenadeParametersStashed = 0x12DC; // bool
                constexpr std::ptrdiff_t m_angStashedShootAngles = 0x12E0; // QAngle
                constexpr std::ptrdiff_t m_vecStashedGrenadeThrowPosition = 0x12EC; // Vector
                constexpr std::ptrdiff_t m_vecStashedVelocity = 0x12F8; // Vector
                constexpr std::ptrdiff_t m_angShootAngleHistory = 0x1304; // QAngle[2]
                constexpr std::ptrdiff_t m_vecThrowPositionHistory = 0x131C; // Vector[2]
                constexpr std::ptrdiff_t m_vecVelocityHistory = 0x1334; // Vector[2]
                constexpr std::ptrdiff_t m_thirdPersonHeading = 0x1350; // QAngle
                constexpr std::ptrdiff_t m_flSlopeDropOffset = 0x1368; // float32
                constexpr std::ptrdiff_t m_flSlopeDropHeight = 0x1378; // float32
                constexpr std::ptrdiff_t m_vHeadConstraintOffset = 0x1388; // Vector
                constexpr std::ptrdiff_t m_bIsScoped = 0x13A0; // bool
                constexpr std::ptrdiff_t m_bIsWalking = 0x13A1; // bool
                constexpr std::ptrdiff_t m_bResumeZoom = 0x13A2; // bool
                constexpr std::ptrdiff_t m_iPlayerState = 0x13A4; // CSPlayerState
                constexpr std::ptrdiff_t m_bIsDefusing = 0x13A8; // bool
                constexpr std::ptrdiff_t m_bIsGrabbingHostage = 0x13A9; // bool
                constexpr std::ptrdiff_t m_iBlockingUseActionInProgress = 0x13AC; // CSPlayerBlockingUseAction_t
                constexpr std::ptrdiff_t m_bIsRescuing = 0x13B0; // bool
                constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTime = 0x13B4; // GameTime_t
                constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTimeLast = 0x13B8; // GameTime_t
                constexpr std::ptrdiff_t m_bGunGameImmunity = 0x13BC; // bool
                constexpr std::ptrdiff_t m_GunGameImmunityColor = 0x13BD; // Color
                constexpr std::ptrdiff_t m_bHasMovedSinceSpawn = 0x13C1; // bool
                constexpr std::ptrdiff_t m_fMolotovUseTime = 0x13C4; // float32
                constexpr std::ptrdiff_t m_fMolotovDamageTime = 0x13C8; // float32
                constexpr std::ptrdiff_t m_nWhichBombZone = 0x13CC; // int32
                constexpr std::ptrdiff_t m_bInNoDefuseArea = 0x13D0; // bool
                constexpr std::ptrdiff_t m_iThrowGrenadeCounter = 0x13D4; // int32
                constexpr std::ptrdiff_t m_bWaitForNoAttack = 0x13D8; // bool
                constexpr std::ptrdiff_t m_flGuardianTooFarDistFrac = 0x13DC; // float32
                constexpr std::ptrdiff_t m_flDetectedByEnemySensorTime = 0x13E0; // GameTime_t
                constexpr std::ptrdiff_t m_flNextGuardianTooFarWarning = 0x13E4; // float32
                constexpr std::ptrdiff_t m_bSuppressGuardianTooFarWarningAudio = 0x13E8; // bool
                constexpr std::ptrdiff_t m_bKilledByTaser = 0x13E9; // bool
                constexpr std::ptrdiff_t m_iMoveState = 0x13EC; // int32
                constexpr std::ptrdiff_t m_bCanMoveDuringFreezePeriod = 0x13F0; // bool
                constexpr std::ptrdiff_t m_flLowerBodyYawTarget = 0x13F4; // float32
                constexpr std::ptrdiff_t m_bStrafing = 0x13F8; // bool
                constexpr std::ptrdiff_t m_flLastSpawnTimeIndex = 0x13FC; // GameTime_t
                constexpr std::ptrdiff_t m_flEmitSoundTime = 0x1400; // GameTime_t
                constexpr std::ptrdiff_t m_iAddonBits = 0x1404; // int32
                constexpr std::ptrdiff_t m_iPrimaryAddon = 0x1408; // int32
                constexpr std::ptrdiff_t m_iSecondaryAddon = 0x140C; // int32
                constexpr std::ptrdiff_t m_iProgressBarDuration = 0x1410; // int32
                constexpr std::ptrdiff_t m_flProgressBarStartTime = 0x1414; // float32
                constexpr std::ptrdiff_t m_iDirection = 0x1418; // int32
                constexpr std::ptrdiff_t m_iShotsFired = 0x141C; // int32
                constexpr std::ptrdiff_t m_bNightVisionOn = 0x1420; // bool
                constexpr std::ptrdiff_t m_bHasNightVision = 0x1421; // bool
                constexpr std::ptrdiff_t m_flVelocityModifier = 0x1424; // float32
                constexpr std::ptrdiff_t m_flHitHeading = 0x1428; // float32
                constexpr std::ptrdiff_t m_nHitBodyPart = 0x142C; // int32
                constexpr std::ptrdiff_t m_iStartAccount = 0x1430; // int32
                constexpr std::ptrdiff_t m_vecIntroStartEyePosition = 0x1434; // Vector
                constexpr std::ptrdiff_t m_vecIntroStartPlayerForward = 0x1440; // Vector
                constexpr std::ptrdiff_t m_flClientDeathTime = 0x144C; // GameTime_t
                constexpr std::ptrdiff_t m_flNightVisionAlpha = 0x1450; // float32
                constexpr std::ptrdiff_t m_bScreenTearFrameCaptured = 0x1454; // bool
                constexpr std::ptrdiff_t m_flFlashBangTime = 0x1458; // float32
                constexpr std::ptrdiff_t m_flFlashScreenshotAlpha = 0x145C; // float32
                constexpr std::ptrdiff_t m_flFlashOverlayAlpha = 0x1460; // float32
                constexpr std::ptrdiff_t m_bFlashBuildUp = 0x1464; // bool
                constexpr std::ptrdiff_t m_bFlashDspHasBeenCleared = 0x1465; // bool
                constexpr std::ptrdiff_t m_bFlashScreenshotHasBeenGrabbed = 0x1466; // bool
                constexpr std::ptrdiff_t m_flFlashMaxAlpha = 0x1468; // float32
                constexpr std::ptrdiff_t m_flFlashDuration = 0x146C; // float32
                constexpr std::ptrdiff_t m_lastStandingPos = 0x1470; // Vector
                constexpr std::ptrdiff_t m_vecLastMuzzleFlashPos = 0x147C; // Vector
                constexpr std::ptrdiff_t m_angLastMuzzleFlashAngle = 0x1488; // QAngle
                constexpr std::ptrdiff_t m_hMuzzleFlashShape = 0x1494; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iHealthBarRenderMaskIndex = 0x1498; // int32
                constexpr std::ptrdiff_t m_flHealthFadeValue = 0x149C; // float32
                constexpr std::ptrdiff_t m_flHealthFadeAlpha = 0x14A0; // float32
                constexpr std::ptrdiff_t m_nMyCollisionGroup = 0x14A4; // int32
                constexpr std::ptrdiff_t m_ignoreLadderJumpTime = 0x14A8; // float32
                constexpr std::ptrdiff_t m_ladderSurpressionTimer = 0x14B0; // CountdownTimer
                constexpr std::ptrdiff_t m_lastLadderNormal = 0x14C8; // Vector
                constexpr std::ptrdiff_t m_lastLadderPos = 0x14D4; // Vector
                constexpr std::ptrdiff_t m_flDeathCCWeight = 0x14E8; // float32
                constexpr std::ptrdiff_t m_bOldIsScoped = 0x14EC; // bool
                constexpr std::ptrdiff_t m_flPrevRoundEndTime = 0x14F0; // float32
                constexpr std::ptrdiff_t m_flPrevMatchEndTime = 0x14F4; // float32
                constexpr std::ptrdiff_t m_unCurrentEquipmentValue = 0x14F8; // uint16
                constexpr std::ptrdiff_t m_unRoundStartEquipmentValue = 0x14FA; // uint16
                constexpr std::ptrdiff_t m_unFreezetimeEndEquipmentValue = 0x14FC; // uint16
                constexpr std::ptrdiff_t m_vecThirdPersonViewPositionOverride = 0x1500; // Vector
                constexpr std::ptrdiff_t m_nHeavyAssaultSuitCooldownRemaining = 0x150C; // int32
                constexpr std::ptrdiff_t m_ArmorValue = 0x1510; // int32
                constexpr std::ptrdiff_t m_angEyeAngles = 0x1518; // QAngle
                constexpr std::ptrdiff_t m_fNextThinkPushAway = 0x1530; // float32
                constexpr std::ptrdiff_t m_bShouldAutobuyDMWeapons = 0x1534; // bool
                constexpr std::ptrdiff_t m_bShouldAutobuyNow = 0x1535; // bool
                constexpr std::ptrdiff_t m_bHud_MiniScoreHidden = 0x1536; // bool
                constexpr std::ptrdiff_t m_bHud_RadarHidden = 0x1537; // bool
                constexpr std::ptrdiff_t m_nLastKillerIndex = 0x1538; // CEntityIndex
                constexpr std::ptrdiff_t m_nLastConcurrentKilled = 0x153C; // int32
                constexpr std::ptrdiff_t m_nDeathCamMusic = 0x1540; // int32
                constexpr std::ptrdiff_t m_iIDEntIndex = 0x1544; // CEntityIndex
                constexpr std::ptrdiff_t m_delayTargetIDTimer = 0x1548; // CountdownTimer
                constexpr std::ptrdiff_t m_iTargetedWeaponEntIndex = 0x1560; // CEntityIndex
                constexpr std::ptrdiff_t m_iOldIDEntIndex = 0x1564; // CEntityIndex
                constexpr std::ptrdiff_t m_holdTargetIDTimer = 0x1568; // CountdownTimer
                constexpr std::ptrdiff_t m_flCurrentMusicStartTime = 0x1584; // float32
                constexpr std::ptrdiff_t m_flMusicRoundStartTime = 0x1588; // float32
                constexpr std::ptrdiff_t m_bDeferStartMusicOnWarmup = 0x158C; // bool
                constexpr std::ptrdiff_t m_cycleLatch = 0x1590; // int32
                constexpr std::ptrdiff_t m_serverIntendedCycle = 0x1594; // float32
                constexpr std::ptrdiff_t m_vecPlayerPatchEconIndices = 0x1598; // uint32[5]
                constexpr std::ptrdiff_t m_bHideTargetID = 0x15B4; // bool
                constexpr std::ptrdiff_t m_flLastSmokeOverlayAlpha = 0x15B8; // float32
                constexpr std::ptrdiff_t m_flLastSmokeAge = 0x15BC; // float32
                constexpr std::ptrdiff_t m_vLastSmokeOverlayColor = 0x15C0; // Vector
                constexpr std::ptrdiff_t m_nPlayerSmokedFx = 0x15CC; // ParticleIndex_t
                constexpr std::ptrdiff_t m_nPlayerInfernoBodyFx = 0x15D0; // ParticleIndex_t
                constexpr std::ptrdiff_t m_nPlayerInfernoFootFx = 0x15D4; // ParticleIndex_t
                constexpr std::ptrdiff_t m_flNextMagDropTime = 0x15D8; // float32
                constexpr std::ptrdiff_t m_nLastMagDropAttachmentIndex = 0x15DC; // int32
                constexpr std::ptrdiff_t m_vecBulletHitModels = 0x15E0; // CUtlVector<C_BulletHitModel*>
                constexpr std::ptrdiff_t m_vecPickupModelSlerpers = 0x15F8; // CUtlVector<C_PickUpModelSlerper*>
                constexpr std::ptrdiff_t m_vecLastAliveLocalVelocity = 0x1610; // Vector
                constexpr std::ptrdiff_t m_entitySpottedState = 0x1638; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSurvivalTeamNumber = 0x1650; // int32
                constexpr std::ptrdiff_t m_bGuardianShouldSprayCustomXMark = 0x1654; // bool
                constexpr std::ptrdiff_t m_bHasDeathInfo = 0x1655; // bool
                constexpr std::ptrdiff_t m_flDeathInfoTime = 0x1658; // float32
                constexpr std::ptrdiff_t m_vecDeathInfoOrigin = 0x165C; // Vector
                constexpr std::ptrdiff_t m_bKilledByHeadshot = 0x1668; // bool
                constexpr std::ptrdiff_t m_hOriginalController = 0x166C; // CHandle<CCSPlayerController>
            }
            // Parent: C_CSPlayerPawnBase
            // Fields count: 1
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
            namespace C_CSObserverPawn {
                constexpr std::ptrdiff_t m_hDetectParentChange = 0x16B4; // CEntityHandle
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
            namespace C_CSPlayerPawn {
                constexpr std::ptrdiff_t m_pBulletServices = 0x16B8; // CCSPlayer_BulletServices*
                constexpr std::ptrdiff_t m_pHostageServices = 0x16C0; // CCSPlayer_HostageServices*
                constexpr std::ptrdiff_t m_pBuyServices = 0x16C8; // CCSPlayer_BuyServices*
                constexpr std::ptrdiff_t m_pGlowServices = 0x16D0; // CCSPlayer_GlowServices*
                constexpr std::ptrdiff_t m_pActionTrackingServices = 0x16D8; // CCSPlayer_ActionTrackingServices*
                constexpr std::ptrdiff_t m_flHealthShotBoostExpirationTime = 0x16E0; // GameTime_t
                constexpr std::ptrdiff_t m_flLastFiredWeaponTime = 0x16E4; // GameTime_t
                constexpr std::ptrdiff_t m_bHasFemaleVoice = 0x16E8; // bool
                constexpr std::ptrdiff_t m_flLandseconds = 0x16EC; // float32
                constexpr std::ptrdiff_t m_flOldFallVelocity = 0x16F0; // float32
                constexpr std::ptrdiff_t m_szLastPlaceName = 0x16F4; // char[18]
                constexpr std::ptrdiff_t m_bPrevDefuser = 0x1706; // bool
                constexpr std::ptrdiff_t m_bPrevHelmet = 0x1707; // bool
                constexpr std::ptrdiff_t m_nPrevArmorVal = 0x1708; // int32
                constexpr std::ptrdiff_t m_nPrevGrenadeAmmoCount = 0x170C; // int32
                constexpr std::ptrdiff_t m_unPreviousWeaponHash = 0x1710; // uint32
                constexpr std::ptrdiff_t m_unWeaponHash = 0x1714; // uint32
                constexpr std::ptrdiff_t m_bInBuyZone = 0x1718; // bool
                constexpr std::ptrdiff_t m_bPreviouslyInBuyZone = 0x1719; // bool
                constexpr std::ptrdiff_t m_aimPunchAngle = 0x171C; // QAngle
                constexpr std::ptrdiff_t m_aimPunchAngleVel = 0x1728; // QAngle
                constexpr std::ptrdiff_t m_aimPunchTickBase = 0x1734; // int32
                constexpr std::ptrdiff_t m_aimPunchTickFraction = 0x1738; // float32
                constexpr std::ptrdiff_t m_aimPunchCache = 0x1740; // CUtlVector<QAngle>
                constexpr std::ptrdiff_t m_bInLanding = 0x1760; // bool
                constexpr std::ptrdiff_t m_flLandingTime = 0x1764; // float32
                constexpr std::ptrdiff_t m_bInHostageRescueZone = 0x1768; // bool
                constexpr std::ptrdiff_t m_bInBombZone = 0x1769; // bool
                constexpr std::ptrdiff_t m_bIsBuyMenuOpen = 0x176A; // bool
                constexpr std::ptrdiff_t m_flTimeOfLastInjury = 0x176C; // GameTime_t
                constexpr std::ptrdiff_t m_flNextSprayDecalTime = 0x1770; // GameTime_t
                constexpr std::ptrdiff_t m_iRetakesOffering = 0x1888; // int32
                constexpr std::ptrdiff_t m_iRetakesOfferingCard = 0x188C; // int32
                constexpr std::ptrdiff_t m_bRetakesHasDefuseKit = 0x1890; // bool
                constexpr std::ptrdiff_t m_bRetakesMVPLastRound = 0x1891; // bool
                constexpr std::ptrdiff_t m_iRetakesMVPBoostItem = 0x1894; // int32
                constexpr std::ptrdiff_t m_RetakesMVPBoostExtraUtility = 0x1898; // loadout_slot_t
                constexpr std::ptrdiff_t m_bNeedToReApplyGloves = 0x18B8; // bool
                constexpr std::ptrdiff_t m_EconGloves = 0x18C0; // C_EconItemView
                constexpr std::ptrdiff_t m_nEconGlovesChanged = 0x2C10; // uint8
                constexpr std::ptrdiff_t m_bMustSyncRagdollState = 0x2C11; // bool
                constexpr std::ptrdiff_t m_nRagdollDamageBone = 0x2C14; // int32
                constexpr std::ptrdiff_t m_vRagdollDamageForce = 0x2C18; // Vector
                constexpr std::ptrdiff_t m_vRagdollDamagePosition = 0x2C24; // Vector
                constexpr std::ptrdiff_t m_szRagdollDamageWeaponName = 0x2C30; // char[64]
                constexpr std::ptrdiff_t m_bRagdollDamageHeadshot = 0x2C70; // bool
                constexpr std::ptrdiff_t m_vRagdollServerOrigin = 0x2C74; // Vector
                constexpr std::ptrdiff_t m_bLastHeadBoneTransformIsValid = 0x3288; // bool
                constexpr std::ptrdiff_t m_lastLandTime = 0x328C; // GameTime_t
                constexpr std::ptrdiff_t m_bOnGroundLastTick = 0x3290; // bool
                constexpr std::ptrdiff_t m_qDeathEyeAngles = 0x32AC; // QAngle
                constexpr std::ptrdiff_t m_bSkipOneHeadConstraintUpdate = 0x32B8; // bool
            }
            // Parent: C_BaseCombatCharacter
            // Fields count: 23
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkOverride
            // NetworkVarNames: m_entitySpottedState (EntitySpottedState_t)
            // NetworkVarNames: m_leader (CHandle<CBaseEntity>)
            // NetworkVarNames: m_reuseTimer (CountdownTimer)
            // NetworkVarNames: m_vel (Vector)
            // NetworkVarNames: m_isRescued (bool)
            // NetworkVarNames: m_jumpedThisFrame (bool)
            // NetworkVarNames: m_nHostageState (int)
            // NetworkVarNames: m_bHandsHaveBeenCut (bool)
            // NetworkVarNames: m_hHostageGrabber (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_flRescueStartTime (GameTime_t)
            // NetworkVarNames: m_flGrabSuccessTime (GameTime_t)
            // NetworkVarNames: m_flDropStartTime (GameTime_t)
            namespace C_Hostage {
                constexpr std::ptrdiff_t m_entitySpottedState = 0x10A0; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_leader = 0x10B8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_reuseTimer = 0x10C0; // CountdownTimer
                constexpr std::ptrdiff_t m_vel = 0x10D8; // Vector
                constexpr std::ptrdiff_t m_isRescued = 0x10E4; // bool
                constexpr std::ptrdiff_t m_jumpedThisFrame = 0x10E5; // bool
                constexpr std::ptrdiff_t m_nHostageState = 0x10E8; // int32
                constexpr std::ptrdiff_t m_bHandsHaveBeenCut = 0x10EC; // bool
                constexpr std::ptrdiff_t m_hHostageGrabber = 0x10F0; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_fLastGrabTime = 0x10F4; // GameTime_t
                constexpr std::ptrdiff_t m_vecGrabbedPos = 0x10F8; // Vector
                constexpr std::ptrdiff_t m_flRescueStartTime = 0x1104; // GameTime_t
                constexpr std::ptrdiff_t m_flGrabSuccessTime = 0x1108; // GameTime_t
                constexpr std::ptrdiff_t m_flDropStartTime = 0x110C; // GameTime_t
                constexpr std::ptrdiff_t m_flDeadOrRescuedTime = 0x1110; // GameTime_t
                constexpr std::ptrdiff_t m_blinkTimer = 0x1118; // CountdownTimer
                constexpr std::ptrdiff_t m_lookAt = 0x1130; // Vector
                constexpr std::ptrdiff_t m_lookAroundTimer = 0x1140; // CountdownTimer
                constexpr std::ptrdiff_t m_isInit = 0x1158; // bool
                constexpr std::ptrdiff_t m_eyeAttachment = 0x1159; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_chestAttachment = 0x115A; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_pPredictionOwner = 0x1160; // CBasePlayerController*
                constexpr std::ptrdiff_t m_fNewestAlphaThinkTime = 0x1168; // GameTime_t
            }
        }
    }
}
