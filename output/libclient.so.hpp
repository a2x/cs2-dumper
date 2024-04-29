// Generated using https://github.com/a2x/cs2-dumper
// 2024-04-29 23:05:53.220233445 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: libclient.so
        // Classes count: 146
        // Enums count: 8
        namespace libclient_so {
            // Alignment: 4
            // Members count: 14
            enum class CompositeMaterialInputLooseVariableType_t : uint32_t {
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
            };
            // Alignment: 4
            // Members count: 7
            enum class CompositeMaterialInputTextureType_t : uint32_t {
                INPUT_TEXTURE_TYPE_DEFAULT = 0x0,
                INPUT_TEXTURE_TYPE_NORMALMAP = 0x1,
                INPUT_TEXTURE_TYPE_COLOR = 0x2,
                INPUT_TEXTURE_TYPE_MASKS = 0x3,
                INPUT_TEXTURE_TYPE_ROUGHNESS = 0x4,
                INPUT_TEXTURE_TYPE_PEARLESCENCE_MASK = 0x5,
                INPUT_TEXTURE_TYPE_AO = 0x6
            };
            // Alignment: 4
            // Members count: 6
            enum class CompositeMaterialInputContainerSourceType_t : uint32_t {
                CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0x0,
                CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 0x1,
                CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 0x2,
                CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 0x3,
                CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 0x4,
                CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 0x5
            };
            // Alignment: 4
            // Members count: 10
            enum class CompMatPropertyMutatorType_t : uint32_t {
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
            };
            // Alignment: 4
            // Members count: 2
            enum class CompositeMaterialVarSystemVar_t : uint32_t {
                COMPMATSYSVAR_COMPOSITETIME = 0x0,
                COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 0x1
            };
            // Alignment: 4
            // Members count: 6
            enum class CompositeMaterialMatchFilterType_t : uint32_t {
                MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0x0,
                MATCH_FILTER_MATERIAL_SHADER = 0x1,
                MATCH_FILTER_MATERIAL_NAME_SUBSTR = 0x2,
                MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 0x3,
                MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 0x4,
                MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 0x5
            };
            // Alignment: 4
            // Members count: 3
            enum class CompMatPropertyMutatorConditionType_t : uint32_t {
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0x0,
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 0x1,
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 0x2
            };
            // Parent: C_BaseCSGrenade
            // Fields count: 0
            namespace C_HEGrenade {
            }
            // Parent: C_BaseTrigger
            // Fields count: 0
            namespace C_TriggerLerpObject {
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
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponM4A1 {
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponCZ75a {
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
            // Parent: C_LightEntity
            // Fields count: 0
            namespace C_LightSpotEntity {
            }
            // Parent: C_BaseEntity
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
            namespace C_EnvWind {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x6D0; // C_EnvWindShared
            }
            // Parent: C_DynamicProp
            // Fields count: 0
            namespace C_DynamicPropAlias_cable_dynamic {
            }
            // Parent: C_PointEntity
            // Fields count: 0
            namespace C_InfoInstructorHintHostageRescueZone {
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
            namespace C_BaseCSGrenade {
                constexpr std::ptrdiff_t m_bClientPredictDelete = 0x2918; // bool
                constexpr std::ptrdiff_t m_bRedraw = 0x2919; // bool
                constexpr std::ptrdiff_t m_bIsHeldByPlayer = 0x291A; // bool
                constexpr std::ptrdiff_t m_bPinPulled = 0x291B; // bool
                constexpr std::ptrdiff_t m_bJumpThrow = 0x291C; // bool
                constexpr std::ptrdiff_t m_bThrowAnimating = 0x291D; // bool
                constexpr std::ptrdiff_t m_fThrowTime = 0x2920; // GameTime_t
                constexpr std::ptrdiff_t m_flThrowStrength = 0x2924; // float32
                constexpr std::ptrdiff_t m_flThrowStrengthApproach = 0x2928; // float32
                constexpr std::ptrdiff_t m_fDropTime = 0x292C; // GameTime_t
                constexpr std::ptrdiff_t m_fPinPullTime = 0x2930; // GameTime_t
                constexpr std::ptrdiff_t m_bJustPulledPin = 0x2934; // bool
                constexpr std::ptrdiff_t m_nNextHoldTick = 0x2938; // GameTick_t
                constexpr std::ptrdiff_t m_flNextHoldFrac = 0x293C; // float32
                constexpr std::ptrdiff_t m_hSwitchToWeaponAfterThrow = 0x2940; // CHandle<C_CSWeaponBase>
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
            // Parent: C_BaseTrigger
            // Fields count: 0
            namespace C_TriggerMultiple {
            }
            // Parent: None
            // Fields count: 1
            namespace C_RopeKeyframe__CPhysicsDelegate {
                constexpr std::ptrdiff_t m_pKeyframe = 0x8; // C_RopeKeyframe*
            }
            // Parent: CBaseAnimGraph
            // Fields count: 14
            namespace C_ClientRagdoll {
                constexpr std::ptrdiff_t m_bFadeOut = 0xE78; // bool
                constexpr std::ptrdiff_t m_bImportant = 0xE79; // bool
                constexpr std::ptrdiff_t m_flEffectTime = 0xE7C; // GameTime_t
                constexpr std::ptrdiff_t m_gibDespawnTime = 0xE80; // GameTime_t
                constexpr std::ptrdiff_t m_iCurrentFriction = 0xE84; // int32
                constexpr std::ptrdiff_t m_iMinFriction = 0xE88; // int32
                constexpr std::ptrdiff_t m_iMaxFriction = 0xE8C; // int32
                constexpr std::ptrdiff_t m_iFrictionAnimState = 0xE90; // int32
                constexpr std::ptrdiff_t m_bReleaseRagdoll = 0xE94; // bool
                constexpr std::ptrdiff_t m_iEyeAttachment = 0xE95; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_bFadingOut = 0xE96; // bool
                constexpr std::ptrdiff_t m_flScaleEnd = 0xE98; // float32[10]
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0xEC0; // GameTime_t[10]
                constexpr std::ptrdiff_t m_flScaleTimeEnd = 0xEE8; // GameTime_t[10]
            }
            // Parent: C_BaseEntity
            // Fields count: 1
            namespace C_GlobalLight {
                constexpr std::ptrdiff_t m_WindClothForceHandle = 0xB90; // uint16
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
            // Parent: C_BaseEntity
            // Fields count: 8
            namespace C_CSGO_MapPreviewCameraPath {
                constexpr std::ptrdiff_t m_flZFar = 0x6D0; // float32
                constexpr std::ptrdiff_t m_flZNear = 0x6D4; // float32
                constexpr std::ptrdiff_t m_bLoop = 0x6D8; // bool
                constexpr std::ptrdiff_t m_bVerticalFOV = 0x6D9; // bool
                constexpr std::ptrdiff_t m_bConstantSpeed = 0x6DA; // bool
                constexpr std::ptrdiff_t m_flDuration = 0x6DC; // float32
                constexpr std::ptrdiff_t m_flPathLength = 0x720; // float32
                constexpr std::ptrdiff_t m_flPathDuration = 0x724; // float32
            }
            // Parent: CCSGO_WingmanIntroCharacterPosition
            // Fields count: 0
            namespace CCSGO_WingmanIntroTerroristPosition {
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
            namespace C_CSPlayerPawn {
                constexpr std::ptrdiff_t m_pBulletServices = 0x1410; // CCSPlayer_BulletServices*
                constexpr std::ptrdiff_t m_pHostageServices = 0x1418; // CCSPlayer_HostageServices*
                constexpr std::ptrdiff_t m_pBuyServices = 0x1420; // CCSPlayer_BuyServices*
                constexpr std::ptrdiff_t m_pGlowServices = 0x1428; // CCSPlayer_GlowServices*
                constexpr std::ptrdiff_t m_pActionTrackingServices = 0x1430; // CCSPlayer_ActionTrackingServices*
                constexpr std::ptrdiff_t m_flHealthShotBoostExpirationTime = 0x1438; // GameTime_t
                constexpr std::ptrdiff_t m_flLastFiredWeaponTime = 0x143C; // GameTime_t
                constexpr std::ptrdiff_t m_bHasFemaleVoice = 0x1440; // bool
                constexpr std::ptrdiff_t m_flLandingTimeSeconds = 0x1444; // float32
                constexpr std::ptrdiff_t m_flOldFallVelocity = 0x1448; // float32
                constexpr std::ptrdiff_t m_szLastPlaceName = 0x144C; // char[18]
                constexpr std::ptrdiff_t m_bPrevDefuser = 0x145E; // bool
                constexpr std::ptrdiff_t m_bPrevHelmet = 0x145F; // bool
                constexpr std::ptrdiff_t m_nPrevArmorVal = 0x1460; // int32
                constexpr std::ptrdiff_t m_nPrevGrenadeAmmoCount = 0x1464; // int32
                constexpr std::ptrdiff_t m_unPreviousWeaponHash = 0x1468; // uint32
                constexpr std::ptrdiff_t m_unWeaponHash = 0x146C; // uint32
                constexpr std::ptrdiff_t m_bInBuyZone = 0x1470; // bool
                constexpr std::ptrdiff_t m_bPreviouslyInBuyZone = 0x1471; // bool
                constexpr std::ptrdiff_t m_aimPunchAngle = 0x1474; // QAngle
                constexpr std::ptrdiff_t m_aimPunchAngleVel = 0x1480; // QAngle
                constexpr std::ptrdiff_t m_aimPunchTickBase = 0x148C; // int32
                constexpr std::ptrdiff_t m_aimPunchTickFraction = 0x1490; // float32
                constexpr std::ptrdiff_t m_aimPunchCache = 0x1498; // CUtlVector<QAngle>
                constexpr std::ptrdiff_t m_bInLanding = 0x14B8; // bool
                constexpr std::ptrdiff_t m_flLandingStartTime = 0x14BC; // float32
                constexpr std::ptrdiff_t m_bInHostageRescueZone = 0x14C0; // bool
                constexpr std::ptrdiff_t m_bInBombZone = 0x14C1; // bool
                constexpr std::ptrdiff_t m_bIsBuyMenuOpen = 0x14C2; // bool
                constexpr std::ptrdiff_t m_flTimeOfLastInjury = 0x14C4; // GameTime_t
                constexpr std::ptrdiff_t m_flNextSprayDecalTime = 0x14C8; // GameTime_t
                constexpr std::ptrdiff_t m_iRetakesOffering = 0x15E0; // int32
                constexpr std::ptrdiff_t m_iRetakesOfferingCard = 0x15E4; // int32
                constexpr std::ptrdiff_t m_bRetakesHasDefuseKit = 0x15E8; // bool
                constexpr std::ptrdiff_t m_bRetakesMVPLastRound = 0x15E9; // bool
                constexpr std::ptrdiff_t m_iRetakesMVPBoostItem = 0x15EC; // int32
                constexpr std::ptrdiff_t m_RetakesMVPBoostExtraUtility = 0x15F0; // loadout_slot_t
                constexpr std::ptrdiff_t m_bNeedToReApplyGloves = 0x1610; // bool
                constexpr std::ptrdiff_t m_EconGloves = 0x1618; // C_EconItemView
                constexpr std::ptrdiff_t m_nEconGlovesChanged = 0x2968; // uint8
                constexpr std::ptrdiff_t m_bMustSyncRagdollState = 0x2969; // bool
                constexpr std::ptrdiff_t m_nRagdollDamageBone = 0x296C; // int32
                constexpr std::ptrdiff_t m_vRagdollDamageForce = 0x2970; // Vector
                constexpr std::ptrdiff_t m_vRagdollDamagePosition = 0x297C; // Vector
                constexpr std::ptrdiff_t m_szRagdollDamageWeaponName = 0x2988; // char[64]
                constexpr std::ptrdiff_t m_bRagdollDamageHeadshot = 0x29C8; // bool
                constexpr std::ptrdiff_t m_vRagdollServerOrigin = 0x29CC; // Vector
                constexpr std::ptrdiff_t m_bLastHeadBoneTransformIsValid = 0x2FE0; // bool
                constexpr std::ptrdiff_t m_lastLandTime = 0x2FE4; // GameTime_t
                constexpr std::ptrdiff_t m_bOnGroundLastTick = 0x2FE8; // bool
                constexpr std::ptrdiff_t m_qDeathEyeAngles = 0x3004; // QAngle
                constexpr std::ptrdiff_t m_bSkipOneHeadConstraintUpdate = 0x3010; // bool
                constexpr std::ptrdiff_t m_bLeftHanded = 0x3011; // bool
                constexpr std::ptrdiff_t m_fSwitchedHandednessTime = 0x3014; // GameTime_t
                constexpr std::ptrdiff_t m_flViewmodelOffsetX = 0x3018; // float32
                constexpr std::ptrdiff_t m_flViewmodelOffsetY = 0x301C; // float32
                constexpr std::ptrdiff_t m_flViewmodelOffsetZ = 0x3020; // float32
                constexpr std::ptrdiff_t m_flViewmodelFOV = 0x3024; // float32
                constexpr std::ptrdiff_t m_vecPlayerPatchEconIndices = 0x3028; // uint32[5]
                constexpr std::ptrdiff_t m_GunGameImmunityColor = 0x3060; // Color
                constexpr std::ptrdiff_t m_vecBulletHitModels = 0x30B0; // CUtlVector<C_BulletHitModel*>
                constexpr std::ptrdiff_t m_bIsWalking = 0x30C8; // bool
                constexpr std::ptrdiff_t m_thirdPersonHeading = 0x30D0; // QAngle
                constexpr std::ptrdiff_t m_flSlopeDropOffset = 0x30E8; // float32
                constexpr std::ptrdiff_t m_flSlopeDropHeight = 0x30F8; // float32
                constexpr std::ptrdiff_t m_vHeadConstraintOffset = 0x3108; // Vector
                constexpr std::ptrdiff_t m_entitySpottedState = 0x3120; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_bIsScoped = 0x3138; // bool
                constexpr std::ptrdiff_t m_bResumeZoom = 0x3139; // bool
                constexpr std::ptrdiff_t m_bIsDefusing = 0x313A; // bool
                constexpr std::ptrdiff_t m_bIsGrabbingHostage = 0x313B; // bool
                constexpr std::ptrdiff_t m_iBlockingUseActionInProgress = 0x313C; // CSPlayerBlockingUseAction_t
                constexpr std::ptrdiff_t m_flEmitSoundTime = 0x3140; // GameTime_t
                constexpr std::ptrdiff_t m_bInNoDefuseArea = 0x3144; // bool
                constexpr std::ptrdiff_t m_nWhichBombZone = 0x3148; // int32
                constexpr std::ptrdiff_t m_iShotsFired = 0x314C; // int32
                constexpr std::ptrdiff_t m_flVelocityModifier = 0x3150; // float32
                constexpr std::ptrdiff_t m_flHitHeading = 0x3154; // float32
                constexpr std::ptrdiff_t m_nHitBodyPart = 0x3158; // int32
                constexpr std::ptrdiff_t m_bWaitForNoAttack = 0x315C; // bool
                constexpr std::ptrdiff_t m_ignoreLadderJumpTime = 0x3160; // float32
                constexpr std::ptrdiff_t m_bKilledByHeadshot = 0x3165; // bool
                constexpr std::ptrdiff_t m_ArmorValue = 0x3168; // int32
                constexpr std::ptrdiff_t m_unCurrentEquipmentValue = 0x316C; // uint16
                constexpr std::ptrdiff_t m_unRoundStartEquipmentValue = 0x316E; // uint16
                constexpr std::ptrdiff_t m_unFreezetimeEndEquipmentValue = 0x3170; // uint16
                constexpr std::ptrdiff_t m_nLastKillerIndex = 0x3174; // CEntityIndex
                constexpr std::ptrdiff_t m_bOldIsScoped = 0x3178; // bool
                constexpr std::ptrdiff_t m_bHasDeathInfo = 0x3179; // bool
                constexpr std::ptrdiff_t m_flDeathInfoTime = 0x317C; // float32
                constexpr std::ptrdiff_t m_vecDeathInfoOrigin = 0x3180; // Vector
                constexpr std::ptrdiff_t m_grenadeParameterStashTime = 0x318C; // GameTime_t
                constexpr std::ptrdiff_t m_bGrenadeParametersStashed = 0x3190; // bool
                constexpr std::ptrdiff_t m_angStashedShootAngles = 0x3194; // QAngle
                constexpr std::ptrdiff_t m_vecStashedGrenadeThrowPosition = 0x31A0; // Vector
                constexpr std::ptrdiff_t m_vecStashedVelocity = 0x31AC; // Vector
                constexpr std::ptrdiff_t m_angShootAngleHistory = 0x31B8; // QAngle[2]
                constexpr std::ptrdiff_t m_vecThrowPositionHistory = 0x31D0; // Vector[2]
                constexpr std::ptrdiff_t m_vecVelocityHistory = 0x31E8; // Vector[2]
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
            // Parent: C_BaseToggle
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
            // Parent: C_BaseCSGrenade
            // Fields count: 0
            namespace C_MolotovGrenade {
            }
            // Parent: C_BaseToggle
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
            // Parent: CPlayer_ViewModelServices
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_hViewModel (CHandle<CBaseViewModel>)
            namespace CCSPlayer_ViewModelServices {
                constexpr std::ptrdiff_t m_hViewModel = 0x40; // CHandle<C_BaseViewModel>[3]
            }
            // Parent: CBaseAnimGraph
            // Fields count: 0
            namespace C_WorldModelNametag {
            }
            // Parent: C_BasePropDoor
            // Fields count: 0
            namespace C_PropDoorRotating {
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
            // Parent: C_TonemapController2
            // Fields count: 0
            namespace C_TonemapController2Alias_env_tonemap_controller2 {
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
            // Parent: CBaseAnimGraph
            // Fields count: 1
            namespace C_ViewmodelAttachmentModel {
                constexpr std::ptrdiff_t m_bShouldFrontFaceCullLeftHanded = 0xE78; // bool
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
            // Parent: C_BaseCSGrenade
            // Fields count: 0
            namespace C_SmokeGrenade {
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponGalilAR {
            }
            // Parent: CBaseAnimGraph
            // Fields count: 0
            namespace C_WorldModelGloves {
            }
            // Parent: C_ModelPointEntity
            // Fields count: 0
            namespace C_EnvProjectedTexture {
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
            namespace C_CSPlayerPawnBase {
                constexpr std::ptrdiff_t m_pPingServices = 0x1258; // CCSPlayer_PingServices*
                constexpr std::ptrdiff_t m_pViewModelServices = 0x1260; // CPlayer_ViewModelServices*
                constexpr std::ptrdiff_t m_fRenderingClipPlane = 0x1268; // float32[4]
                constexpr std::ptrdiff_t m_nLastClipPlaneSetupFrame = 0x1278; // int32
                constexpr std::ptrdiff_t m_vecLastClipCameraPos = 0x127C; // Vector
                constexpr std::ptrdiff_t m_vecLastClipCameraForward = 0x1288; // Vector
                constexpr std::ptrdiff_t m_bClipHitStaticWorld = 0x1294; // bool
                constexpr std::ptrdiff_t m_bCachedPlaneIsValid = 0x1295; // bool
                constexpr std::ptrdiff_t m_pClippingWeapon = 0x1298; // C_CSWeaponBase*
                constexpr std::ptrdiff_t m_previousPlayerState = 0x12A0; // CSPlayerState
                constexpr std::ptrdiff_t m_iPlayerState = 0x12A4; // CSPlayerState
                constexpr std::ptrdiff_t m_bIsRescuing = 0x12A8; // bool
                constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTime = 0x12AC; // GameTime_t
                constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTimeLast = 0x12B0; // GameTime_t
                constexpr std::ptrdiff_t m_bGunGameImmunity = 0x12B4; // bool
                constexpr std::ptrdiff_t m_bHasMovedSinceSpawn = 0x12B5; // bool
                constexpr std::ptrdiff_t m_fMolotovUseTime = 0x12B8; // float32
                constexpr std::ptrdiff_t m_fMolotovDamageTime = 0x12BC; // float32
                constexpr std::ptrdiff_t m_iThrowGrenadeCounter = 0x12C0; // int32
                constexpr std::ptrdiff_t m_flLastSpawnTimeIndex = 0x12C4; // GameTime_t
                constexpr std::ptrdiff_t m_iProgressBarDuration = 0x12C8; // int32
                constexpr std::ptrdiff_t m_flProgressBarStartTime = 0x12CC; // float32
                constexpr std::ptrdiff_t m_vecIntroStartEyePosition = 0x12D0; // Vector
                constexpr std::ptrdiff_t m_vecIntroStartPlayerForward = 0x12DC; // Vector
                constexpr std::ptrdiff_t m_flClientDeathTime = 0x12E8; // GameTime_t
                constexpr std::ptrdiff_t m_bScreenTearFrameCaptured = 0x12EC; // bool
                constexpr std::ptrdiff_t m_flFlashBangTime = 0x12F0; // float32
                constexpr std::ptrdiff_t m_flFlashScreenshotAlpha = 0x12F4; // float32
                constexpr std::ptrdiff_t m_flFlashOverlayAlpha = 0x12F8; // float32
                constexpr std::ptrdiff_t m_bFlashBuildUp = 0x12FC; // bool
                constexpr std::ptrdiff_t m_bFlashDspHasBeenCleared = 0x12FD; // bool
                constexpr std::ptrdiff_t m_bFlashScreenshotHasBeenGrabbed = 0x12FE; // bool
                constexpr std::ptrdiff_t m_flFlashMaxAlpha = 0x1300; // float32
                constexpr std::ptrdiff_t m_flFlashDuration = 0x1304; // float32
                constexpr std::ptrdiff_t m_iHealthBarRenderMaskIndex = 0x1308; // int32
                constexpr std::ptrdiff_t m_flHealthFadeValue = 0x130C; // float32
                constexpr std::ptrdiff_t m_flHealthFadeAlpha = 0x1310; // float32
                constexpr std::ptrdiff_t m_flDeathCCWeight = 0x1320; // float32
                constexpr std::ptrdiff_t m_flPrevRoundEndTime = 0x1324; // float32
                constexpr std::ptrdiff_t m_flPrevMatchEndTime = 0x1328; // float32
                constexpr std::ptrdiff_t m_angEyeAngles = 0x1330; // QAngle
                constexpr std::ptrdiff_t m_fNextThinkPushAway = 0x1348; // float32
                constexpr std::ptrdiff_t m_bShouldAutobuyDMWeapons = 0x134C; // bool
                constexpr std::ptrdiff_t m_bShouldAutobuyNow = 0x134D; // bool
                constexpr std::ptrdiff_t m_bHud_MiniScoreHidden = 0x134E; // bool
                constexpr std::ptrdiff_t m_bHud_RadarHidden = 0x134F; // bool
                constexpr std::ptrdiff_t m_iIDEntIndex = 0x1350; // CEntityIndex
                constexpr std::ptrdiff_t m_delayTargetIDTimer = 0x1358; // CountdownTimer
                constexpr std::ptrdiff_t m_iTargetedWeaponEntIndex = 0x1370; // CEntityIndex
                constexpr std::ptrdiff_t m_iOldIDEntIndex = 0x1374; // CEntityIndex
                constexpr std::ptrdiff_t m_holdTargetIDTimer = 0x1378; // CountdownTimer
                constexpr std::ptrdiff_t m_flCurrentMusicStartTime = 0x1394; // float32
                constexpr std::ptrdiff_t m_flMusicRoundStartTime = 0x1398; // float32
                constexpr std::ptrdiff_t m_bDeferStartMusicOnWarmup = 0x139C; // bool
                constexpr std::ptrdiff_t m_cycleLatch = 0x13A0; // int32
                constexpr std::ptrdiff_t m_serverIntendedCycle = 0x13A4; // float32
                constexpr std::ptrdiff_t m_flLastSmokeOverlayAlpha = 0x13A8; // float32
                constexpr std::ptrdiff_t m_flLastSmokeAge = 0x13AC; // float32
                constexpr std::ptrdiff_t m_vLastSmokeOverlayColor = 0x13B0; // Vector
                constexpr std::ptrdiff_t m_nPlayerSmokedFx = 0x13BC; // ParticleIndex_t
                constexpr std::ptrdiff_t m_nPlayerInfernoBodyFx = 0x13C0; // ParticleIndex_t
                constexpr std::ptrdiff_t m_nPlayerInfernoFootFx = 0x13C4; // ParticleIndex_t
                constexpr std::ptrdiff_t m_flNextMagDropTime = 0x13C8; // float32
                constexpr std::ptrdiff_t m_nLastMagDropAttachmentIndex = 0x13CC; // int32
                constexpr std::ptrdiff_t m_vecLastAliveLocalVelocity = 0x13D0; // Vector
                constexpr std::ptrdiff_t m_bGuardianShouldSprayCustomXMark = 0x13F8; // bool
                constexpr std::ptrdiff_t m_hOriginalController = 0x1400; // CHandle<CCSPlayerController>
            }
            // Parent: C_WeaponBaseItem
            // Fields count: 0
            namespace C_Item_Healthshot {
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
            // Parent: CPlayerPawnComponent
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_hPlayerPing (CHandle<CBaseEntity>)
            namespace CCSPlayer_PingServices {
                constexpr std::ptrdiff_t m_hPlayerPing = 0x40; // CHandle<C_BaseEntity>
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            namespace CPlayer_FlashlightServices {
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
            // Parent: CBaseAnimGraph
            // Fields count: 0
            namespace C_WaterBullet {
            }
            // Parent: C_CSPlayerPawn
            // Fields count: 3
            namespace C_CSGO_PreviewPlayer {
                constexpr std::ptrdiff_t m_animgraph = 0x3200; // CUtlString
                constexpr std::ptrdiff_t m_animgraphCharacterModeString = 0x3208; // CGlobalSymbol
                constexpr std::ptrdiff_t m_flInitialModelScale = 0x3210; // float32
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
            // Parent: CEntitySubclassVDataBase
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
            // Parent: C_BaseTrigger
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFluidDensity (float)
            namespace C_TriggerBuoyancy {
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0xC58; // CBuoyancyHelper
                constexpr std::ptrdiff_t m_flFluidDensity = 0xC78; // float32
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
            // Parent: C_EconEntity
            // Fields count: 2
            namespace C_EconWearable {
                constexpr std::ptrdiff_t m_nForceSkin = 0x2460; // int32
                constexpr std::ptrdiff_t m_bAlwaysAllow = 0x2464; // bool
            }
            // Parent: C_CSGO_TeamIntroCharacterPosition
            // Fields count: 0
            namespace CCSGO_WingmanIntroCharacterPosition {
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
            // Parent: C_BaseModelEntity
            // Fields count: 0
            namespace C_BaseToggle {
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponRevolver {
            }
            // Parent: C_Sprite
            // Fields count: 0
            namespace C_FireFromAboveSprite {
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
            // Parent: C_SoundOpvarSetPointBase
            // Fields count: 0
            namespace C_SoundOpvarSetOBBWindEntity {
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
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponMP5SD {
            }
            // Parent: C_PointCamera
            // Fields count: 1
            namespace C_PointCameraVFOV {
                constexpr std::ptrdiff_t m_flVerticalFOV = 0x730; // float32
            }
            // Parent: CPlayer_ItemServices
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
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponSG556 {
            }
            // Parent: C_BarnLight
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bShowLight (bool)
            namespace C_RectLight {
                constexpr std::ptrdiff_t m_bShowLight = 0xE98; // bool
            }
            // Parent: CPlayerPawnComponent
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
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace CWeaponZoneRepulsor {
            }
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            namespace CPlayer_WaterServices {
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
            // Parent: CCSGameModeRules
            // Fields count: 0
            namespace CCSGameModeRules_Noop {
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
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MPulseProvideFeatureTag
            // MPulseLibraryBindings
            namespace CCSWeaponBaseAPI {
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
            // Parent: C_CSGO_TeamPreviewCamera
            // Fields count: 0
            namespace C_CSGO_CounterTerroristWingmanIntroCamera {
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
            // Parent: C_CSGO_TeamPreviewCamera
            // Fields count: 0
            namespace C_CSGO_CounterTerroristTeamIntroCamera {
            }
            // Parent: None
            // Fields count: 0
            namespace CEntityComponent {
            }
            // Parent: CPlayerPawnComponent
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
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponUSPSilencer {
            }
            // Parent: C_CSGO_EndOfMatchLineupEndpoint
            // Fields count: 0
            namespace C_CSGO_EndOfMatchLineupStart {
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponFamas {
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
            // Parent: C_BaseEntity
            // Fields count: 0
            namespace C_CSGO_EndOfMatchLineupEndpoint {
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
            namespace CCSPlayerController_ActionTrackingServices {
                constexpr std::ptrdiff_t m_perRoundStats = 0x40; // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
                constexpr std::ptrdiff_t m_matchStats = 0x90; // CSMatchStats_t
                constexpr std::ptrdiff_t m_iNumRoundKills = 0x108; // int32
                constexpr std::ptrdiff_t m_iNumRoundKillsHeadshots = 0x10C; // int32
                constexpr std::ptrdiff_t m_unTotalRoundDamageDealt = 0x110; // uint32
            }
            // Parent: CEntityComponent
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bvDisabledHitGroups (uint32)
            namespace CHitboxComponent {
                constexpr std::ptrdiff_t m_bvDisabledHitGroups = 0x24; // uint32[1]
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
            // Parent: C_BaseModelEntity
            // Fields count: 0
            namespace C_PrecipitationBlocker {
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
            // Parent: CPlayerPawnComponent
            // Fields count: 0
            namespace CCSPlayer_GlowServices {
            }
            // Parent: None
            // Fields count: 5
            namespace C_BaseFlex__Emphasized_Phoneme {
                constexpr std::ptrdiff_t m_sClassName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_flAmount = 0x18; // float32
                constexpr std::ptrdiff_t m_bRequired = 0x1C; // bool
                constexpr std::ptrdiff_t m_bBasechecked = 0x1D; // bool
                constexpr std::ptrdiff_t m_bValid = 0x1E; // bool
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
            // Parent: None
            // Fields count: 1
            namespace CCSGameModeRules {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
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
            // Parent: C_CSGO_TeamIntroCharacterPosition
            // Fields count: 0
            namespace C_CSGO_TeamIntroTerroristPosition {
            }
            // Parent: C_BaseTrigger
            // Fields count: 8
            namespace C_Precipitation {
                constexpr std::ptrdiff_t m_flDensity = 0xC54; // float32
                constexpr std::ptrdiff_t m_flParticleInnerDist = 0xC60; // float32
                constexpr std::ptrdiff_t m_pParticleDef = 0xC68; // char*
                constexpr std::ptrdiff_t m_tParticlePrecipTraceTimer = 0xC90; // TimedEvent[1]
                constexpr std::ptrdiff_t m_bActiveParticlePrecipEmitter = 0xC98; // bool[1]
                constexpr std::ptrdiff_t m_bParticlePrecipInitialized = 0xC99; // bool
                constexpr std::ptrdiff_t m_bHasSimulatedSinceLastSceneObjectUpdate = 0xC9A; // bool
                constexpr std::ptrdiff_t m_nAvailableSheetSequencesMaxIndex = 0xC9C; // int32
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
            // Parent: C_BaseModelEntity
            // Fields count: 3
            namespace C_FuncTrackTrain {
                constexpr std::ptrdiff_t m_nLongAxis = 0xC50; // int32
                constexpr std::ptrdiff_t m_flRadius = 0xC54; // float32
                constexpr std::ptrdiff_t m_flLineLength = 0xC58; // float32
            }
            // Parent: CPlayerPawnComponent
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
            // Fields count: 1
            namespace C_SceneEntity__QueuedEvents_t {
                constexpr std::ptrdiff_t starttime = 0x0; // float32
            }
            // Parent: CLogicalEntity
            // Fields count: 12
            namespace CPointTemplate {
                constexpr std::ptrdiff_t m_iszWorldName = 0x6D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSource2EntityLumpName = 0x6D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszEntityFilterName = 0x6E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flTimeoutInterval = 0x6E8; // float32
                constexpr std::ptrdiff_t m_bAsynchronouslySpawnEntities = 0x6EC; // bool
                constexpr std::ptrdiff_t m_pOutputOnSpawned = 0x6F0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_clientOnlyEntityBehavior = 0x718; // PointTemplateClientOnlyEntityBehavior_t
                constexpr std::ptrdiff_t m_ownerSpawnGroupType = 0x71C; // PointTemplateOwnerSpawnGroupType_t
                constexpr std::ptrdiff_t m_createdSpawnGroupHandles = 0x720; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_SpawnedEntityHandles = 0x738; // CUtlVector<CEntityHandle>
                constexpr std::ptrdiff_t m_ScriptSpawnCallback = 0x750; // HSCRIPT
                constexpr std::ptrdiff_t m_ScriptCallbackScope = 0x758; // HSCRIPT
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponHKP2000 {
            }
            // Parent: C_BaseCSGrenade
            // Fields count: 0
            namespace CTripWireFire {
            }
            // Parent: C_BaseFlex
            // Fields count: 6
            namespace C_CSGO_PreviewModel {
                constexpr std::ptrdiff_t m_animgraph = 0x1010; // CUtlString
                constexpr std::ptrdiff_t m_animgraphCharacterModeString = 0x1018; // CGlobalSymbol
                constexpr std::ptrdiff_t m_defaultAnim = 0x1020; // CUtlString
                constexpr std::ptrdiff_t m_nDefaultAnimLoopMode = 0x1028; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_flInitialModelScale = 0x102C; // float32
                constexpr std::ptrdiff_t m_sInitialWeaponState = 0x1030; // CUtlString
            }
            // Parent: C_CSWeaponBase
            // Fields count: 0
            namespace CBreachCharge {
            }
            // Parent: C_LightEntity
            // Fields count: 0
            namespace C_LightDirectionalEntity {
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
            // Parent: C_BaseViewModel
            // Fields count: 3
            namespace C_PredictedViewModel {
                constexpr std::ptrdiff_t m_vPredictedLagOffset = 0xEE0; // Vector
                constexpr std::ptrdiff_t m_targetSpeed = 0xEEC; // QAngle
                constexpr std::ptrdiff_t m_currentSpeed = 0xEF8; // QAngle
            }
            // Parent: C_CSWeaponBase
            // Fields count: 0
            namespace C_Knife {
            }
            // Parent: C_EnvCubemap
            // Fields count: 0
            namespace C_EnvCubemapBox {
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
            // Parent: C_CSGO_TeamPreviewCamera
            // Fields count: 0
            namespace C_CSGO_EndOfMatchCamera {
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
            // Parent: C_BaseCSGrenade
            // Fields count: 0
            namespace C_SensorGrenade {
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_fFireTime (GameTime_t)
            namespace C_WeaponTaser {
                constexpr std::ptrdiff_t m_fFireTime = 0x2938; // GameTime_t
                constexpr std::ptrdiff_t m_nLastAttackTick = 0x293C; // int32
            }
            // Parent: C_CSWeaponBase
            // Fields count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bPlayingUninterruptableAct (bool)
            // NetworkVarNames: m_nUninterruptableActivity (PlayerAnimEvent_t)
            namespace C_Fists {
                constexpr std::ptrdiff_t m_bPlayingUninterruptableAct = 0x2918; // bool
                constexpr std::ptrdiff_t m_nUninterruptableActivity = 0x291C; // PlayerAnimEvent_t
            }
            // Parent: C_PhysicsProp
            // Fields count: 0
            namespace C_PhysicsPropMultiplayer {
            }
            // Parent: C_CSWeaponBase
            // Fields count: 0
            namespace C_WeaponSawedoff {
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
            // Parent: C_PhysicsProp
            // Fields count: 1
            //
            // Metadata:
            // MNetworkExcludeByName
            // NetworkVarNames: m_ShardDesc (shard_model_desc_t)
            namespace C_ShatterGlassShardPhysics {
                constexpr std::ptrdiff_t m_ShardDesc = 0xFD0; // shard_model_desc_t
            }
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponElite {
            }
            // Parent: C_BaseModelEntity
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_CLightComponent (CLightComponent::Storage_t)
            namespace C_LightEntity {
                constexpr std::ptrdiff_t m_CLightComponent = 0xC50; // CLightComponent*
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
            // Parent: C_BaseEntity
            // Fields count: 1
            //
            // Metadata:
            // NetworkVarNames: m_iCurrentMaxRagdollCount (int8)
            namespace C_RagdollManager {
                constexpr std::ptrdiff_t m_iCurrentMaxRagdollCount = 0x6D0; // int8
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
            // Parent: C_CSWeaponBaseGun
            // Fields count: 0
            namespace C_WeaponSCAR20 {
            }
        }
    }
}
