// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-14 23:58:25.486779500 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: client.dll
        // Class count: 489
        // Enum count: 8
        namespace client_dll {
            // Alignment: 4
            // Member count: 15
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
                LOOSE_VARIABLE_TYPE_RESOURCE_TEXTURE = 0xD,
                LOOSE_VARIABLE_TYPE_PANORAMA_RENDER = 0xE
            };
            // Alignment: 4
            // Member count: 8
            enum class CompositeMaterialInputTextureType_t : uint32_t {
                INPUT_TEXTURE_TYPE_DEFAULT = 0x0,
                INPUT_TEXTURE_TYPE_NORMALMAP = 0x1,
                INPUT_TEXTURE_TYPE_COLOR = 0x2,
                INPUT_TEXTURE_TYPE_MASKS = 0x3,
                INPUT_TEXTURE_TYPE_ROUGHNESS = 0x4,
                INPUT_TEXTURE_TYPE_PEARLESCENCE_MASK = 0x5,
                INPUT_TEXTURE_TYPE_AO = 0x6,
                INPUT_TEXTURE_TYPE_POSITION = 0x7
            };
            // Alignment: 4
            // Member count: 9
            enum class InventoryNodeType_t : uint32_t {
                NODE_TYPE_INVALID = 0x0,
                VIRTUAL_NODE_SCHEMA_PREFAB = 0x1,
                VIRTUAL_NODE_SCHEMA_ITEMDEF = 0x2,
                VIRTUAL_NODE_SCHEMA_STICKER = 0x3,
                VIRTUAL_NODE_SCHEMA_KEYCHAIN = 0x4,
                CONCRETE_NODE_SCHEMA_PREFAB = 0x5,
                CONCRETE_NODE_SCHEMA_ITEMDEF = 0x6,
                CONCRETE_NODE_SCHEMA_STICKER = 0x7,
                CONCRETE_NODE_SCHEMA_KEYCHAIN = 0x8
            };
            // Alignment: 4
            // Member count: 6
            enum class CompositeMaterialInputContainerSourceType_t : uint32_t {
                CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0x0,
                CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 0x1,
                CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 0x2,
                CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 0x3,
                CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 0x4,
                CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 0x5
            };
            // Alignment: 4
            // Member count: 10
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
            // Member count: 2
            enum class CompositeMaterialVarSystemVar_t : uint32_t {
                COMPMATSYSVAR_COMPOSITETIME = 0x0,
                COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 0x1
            };
            // Alignment: 4
            // Member count: 6
            enum class CompositeMaterialMatchFilterType_t : uint32_t {
                MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0x0,
                MATCH_FILTER_MATERIAL_SHADER = 0x1,
                MATCH_FILTER_MATERIAL_NAME_SUBSTR = 0x2,
                MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 0x3,
                MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 0x4,
                MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 0x5
            };
            // Alignment: 4
            // Member count: 3
            enum class CompMatPropertyMutatorConditionType_t : uint32_t {
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0x0,
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 0x1,
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 0x2
            };
            // Parent: C_CSGO_TeamPreviewCharacterPosition
            // Field count: 0
            namespace C_CSGO_TeamIntroCharacterPosition {
            }
            // Parent: C_Inferno
            // Field count: 0
            namespace C_FireCrackerBlast {
            }
            // Parent: CCSGO_WingmanIntroCharacterPosition
            // Field count: 0
            namespace CCSGO_WingmanIntroCounterTerroristPosition {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace CPulseCell_WaitForCursorsWithTag {
                constexpr std::ptrdiff_t m_bTagSelfWhenComplete = 0x98; // bool
                constexpr std::ptrdiff_t m_nDesiredKillPriority = 0x9C; // PulseCursorCancelPriority_t
            }
            // Parent: None
            // Field count: 1
            namespace C_SceneEntity__QueuedEvents_t {
                constexpr std::ptrdiff_t starttime = 0x0; // float32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_hPlayerPing (CHandle<CBaseEntity>)
            namespace CCSPlayer_PingServices {
                constexpr std::ptrdiff_t m_hPlayerPing = 0x40; // CHandle<C_BaseEntity>
            }
            // Parent: None
            // Field count: 5
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
            // Field count: 0
            namespace CBaseTriggerAPI {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: nTagTick (GameTick_t)
            // NetworkVarNames: flFlinchModSmall (float)
            // NetworkVarNames: flFlinchModLarge (float)
            // NetworkVarNames: flFriendlyFireDamageReductionRatio (float)
            namespace PredictedDamageTag_t {
                constexpr std::ptrdiff_t nTagTick = 0x30; // GameTick_t
                constexpr std::ptrdiff_t flFlinchModSmall = 0x34; // float32
                constexpr std::ptrdiff_t flFlinchModLarge = 0x38; // float32
                constexpr std::ptrdiff_t flFriendlyFireDamageReductionRatio = 0x3C; // float32
            }
            // Parent: 
            // Field count: 15
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
            // NetworkVarNames: m_iInitialWindDir (uint16)
            // NetworkVarNames: m_flInitialWindSpeed (float32)
            // NetworkVarNames: m_location (Vector)
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
                constexpr std::ptrdiff_t m_iInitialWindDir = 0x2A; // uint16
                constexpr std::ptrdiff_t m_flInitialWindSpeed = 0x2C; // float32
                constexpr std::ptrdiff_t m_location = 0x30; // Vector
                constexpr std::ptrdiff_t m_hEntOwner = 0x3C; // CHandle<C_BaseEntity>
            }
            // Parent: C_BaseEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_skyboxData (sky3dparams_t)
            // NetworkVarNames: m_skyboxSlotToken (CUtlStringToken)
            namespace C_SkyCamera {
                constexpr std::ptrdiff_t m_skyboxData = 0x5F8; // sky3dparams_t
                constexpr std::ptrdiff_t m_skyboxSlotToken = 0x688; // CUtlStringToken
                constexpr std::ptrdiff_t m_bUseAngles = 0x68C; // bool
                constexpr std::ptrdiff_t m_pNext = 0x690; // C_SkyCamera*
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Base {
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x8; // PulseDocNodeID_t
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            //
            // Metadata:
            // MNetworkOverride
            // MNetworkOverride
            namespace C_FuncRotating {
            }
            // Parent: C_BaseEntity
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_iszStackName (string_t)
            // NetworkVarNames: m_iszOperatorName (string_t)
            // NetworkVarNames: m_iszOpvarName (string_t)
            // NetworkVarNames: m_iOpvarIndex (int)
            // NetworkVarNames: m_bUseAutoCompare (bool)
            namespace C_SoundOpvarSetPointBase {
                constexpr std::ptrdiff_t m_iszStackName = 0x5F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperatorName = 0x600; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvarName = 0x608; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iOpvarIndex = 0x610; // int32
                constexpr std::ptrdiff_t m_bUseAutoCompare = 0x614; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 18
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
                constexpr std::ptrdiff_t m_flEndDistance = 0x5F8; // float32
                constexpr std::ptrdiff_t m_flStartDistance = 0x5FC; // float32
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x600; // float32
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x604; // bool
                constexpr std::ptrdiff_t m_flFogHeightWidth = 0x608; // float32
                constexpr std::ptrdiff_t m_flFogHeightEnd = 0x60C; // float32
                constexpr std::ptrdiff_t m_flFogHeightStart = 0x610; // float32
                constexpr std::ptrdiff_t m_flFogHeightExponent = 0x614; // float32
                constexpr std::ptrdiff_t m_flLODBias = 0x618; // float32
                constexpr std::ptrdiff_t m_bActive = 0x61C; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0x61D; // bool
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x620; // float32
                constexpr std::ptrdiff_t m_nCubemapSourceType = 0x624; // int32
                constexpr std::ptrdiff_t m_hSkyMaterial = 0x628; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_iszSkyEntity = 0x630; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFogCubemapTexture = 0x638; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_bHasHeightFogEnd = 0x640; // bool
                constexpr std::ptrdiff_t m_bFirstTime = 0x641; // bool
            }
            // Parent: C_CSGO_TeamSelectCharacterPosition
            // Field count: 0
            namespace C_CSGO_TeamSelectTerroristPosition {
            }
            // Parent: None
            // Field count: 5
            namespace C_BaseFlex__Emphasized_Phoneme {
                constexpr std::ptrdiff_t m_sClassName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_flAmount = 0x18; // float32
                constexpr std::ptrdiff_t m_bRequired = 0x1C; // bool
                constexpr std::ptrdiff_t m_bBasechecked = 0x1D; // bool
                constexpr std::ptrdiff_t m_bValid = 0x1E; // bool
            }
            // Parent: C_ParticleSystem
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_flAlphaScale (float32)
            // NetworkVarNames: m_flRadiusScale (float32)
            // NetworkVarNames: m_flSelfIllumScale (float32)
            // NetworkVarNames: m_ColorTint (Color)
            // NetworkVarNames: m_hTextureOverride (HRenderTextureStrong)
            namespace C_EnvParticleGlow {
                constexpr std::ptrdiff_t m_flAlphaScale = 0x1460; // float32
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1464; // float32
                constexpr std::ptrdiff_t m_flSelfIllumScale = 0x1468; // float32
                constexpr std::ptrdiff_t m_ColorTint = 0x146C; // Color
                constexpr std::ptrdiff_t m_hTextureOverride = 0x1470; // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace CCS_PortraitWorldCallbackHandler {
            }
            // Parent: CPlayerControllerComponent
            // Field count: 9
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
                constexpr std::ptrdiff_t m_vecNetworkableLoadout = 0x40; // CUtlVector<CCSPlayerController_InventoryServices::NetworkedLoadoutSlot_t>
                constexpr std::ptrdiff_t m_unMusicID = 0x58; // uint16
                constexpr std::ptrdiff_t m_rank = 0x5C; // MedalRank_t[6]
                constexpr std::ptrdiff_t m_nPersonaDataPublicLevel = 0x74; // int32
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsLeader = 0x78; // int32
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsTeacher = 0x7C; // int32
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsFriendly = 0x80; // int32
                constexpr std::ptrdiff_t m_nPersonaDataXpTrailLevel = 0x84; // int32
                constexpr std::ptrdiff_t m_vecServerAuthoritativeWeaponSlots = 0x88; // C_UtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
            }
            // Parent: None
            // Field count: 1
            namespace C_EconEntity__AttachedModelData_t {
                constexpr std::ptrdiff_t m_iModelDisplayFlags = 0x0; // int32
            }
            // Parent: None
            // Field count: 0
            namespace CPulse_ResumePoint {
            }
            // Parent: C_BaseTrigger
            // Field count: 9
            //
            // Metadata:
            // NetworkVarNames: m_vFanOriginOffset (Vector)
            // NetworkVarNames: m_vDirection (Vector)
            // NetworkVarNames: m_bPushTowardsInfoTarget (bool)
            // NetworkVarNames: m_bPushAwayFromInfoTarget (bool)
            // NetworkVarNames: m_qNoiseDelta (Quaternion)
            // NetworkVarNames: m_hInfoFan (CHandle<CInfoFan>)
            // NetworkVarNames: m_flForce (float)
            // NetworkVarNames: m_bFalloff (bool)
            // NetworkVarNames: m_RampTimer (CountdownTimer)
            namespace CTriggerFan {
                constexpr std::ptrdiff_t m_vFanOriginOffset = 0xFF0; // Vector
                constexpr std::ptrdiff_t m_vDirection = 0xFFC; // Vector
                constexpr std::ptrdiff_t m_bPushTowardsInfoTarget = 0x1008; // bool
                constexpr std::ptrdiff_t m_bPushAwayFromInfoTarget = 0x1009; // bool
                constexpr std::ptrdiff_t m_qNoiseDelta = 0x1010; // Quaternion
                constexpr std::ptrdiff_t m_hInfoFan = 0x1020; // CHandle<CInfoFan>
                constexpr std::ptrdiff_t m_flForce = 0x1024; // float32
                constexpr std::ptrdiff_t m_bFalloff = 0x1028; // bool
                constexpr std::ptrdiff_t m_RampTimer = 0x1030; // CountdownTimer
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace C_HostageCarriableProp {
            }
            // Parent: None
            // Field count: 6
            namespace C_BulletHitModel {
                constexpr std::ptrdiff_t m_matLocal = 0x1158; // matrix3x4_t
                constexpr std::ptrdiff_t m_iBoneIndex = 0x1188; // int32
                constexpr std::ptrdiff_t m_hPlayerParent = 0x118C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bIsHit = 0x1190; // bool
                constexpr std::ptrdiff_t m_flTimeCreated = 0x1194; // float32
                constexpr std::ptrdiff_t m_vecStartPos = 0x1198; // Vector
            }
            // Parent: C_FuncBrush
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_EffectName (string_t)
            // NetworkVarNames: m_bState (bool)
            namespace C_FuncElectrifiedVolume {
                constexpr std::ptrdiff_t m_nAmbientEffect = 0xEB0; // ParticleIndex_t
                constexpr std::ptrdiff_t m_EffectName = 0xEB8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bState = 0xEC0; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 17
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
                constexpr std::ptrdiff_t m_nDraftType = 0x608; // int32
                constexpr std::ptrdiff_t m_nTeamWinningCoinToss = 0x60C; // int32
                constexpr std::ptrdiff_t m_nTeamWithFirstChoice = 0x610; // int32[64]
                constexpr std::ptrdiff_t m_nVoteMapIdsList = 0x710; // int32[7]
                constexpr std::ptrdiff_t m_nAccountIDs = 0x72C; // int32[64]
                constexpr std::ptrdiff_t m_nMapId0 = 0x82C; // int32[64]
                constexpr std::ptrdiff_t m_nMapId1 = 0x92C; // int32[64]
                constexpr std::ptrdiff_t m_nMapId2 = 0xA2C; // int32[64]
                constexpr std::ptrdiff_t m_nMapId3 = 0xB2C; // int32[64]
                constexpr std::ptrdiff_t m_nMapId4 = 0xC2C; // int32[64]
                constexpr std::ptrdiff_t m_nMapId5 = 0xD2C; // int32[64]
                constexpr std::ptrdiff_t m_nStartingSide0 = 0xE2C; // int32[64]
                constexpr std::ptrdiff_t m_nCurrentPhase = 0xF2C; // int32
                constexpr std::ptrdiff_t m_nPhaseStartTick = 0xF30; // int32
                constexpr std::ptrdiff_t m_nPhaseDurationTicks = 0xF34; // int32
                constexpr std::ptrdiff_t m_nPostDataUpdateTick = 0xF38; // int32
                constexpr std::ptrdiff_t m_bDisabledHud = 0xF3C; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 18
            //
            // Metadata:
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_vBoxMins (Vector)
            // NetworkVarNames: m_vBoxMaxs (Vector)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_bIndirectUseLPVs (bool)
            // NetworkVarNames: m_flStrength (float)
            // NetworkVarNames: m_nFalloffShape (int)
            // NetworkVarNames: m_flFalloffExponent (float)
            // NetworkVarNames: m_flHeightFogDepth (float)
            // NetworkVarNames: m_fHeightFogEdgeWidth (float)
            // NetworkVarNames: m_fIndirectLightStrength (float)
            // NetworkVarNames: m_fSunLightStrength (float)
            // NetworkVarNames: m_fNoiseStrength (float)
            // NetworkVarNames: m_TintColor (Color)
            // NetworkVarNames: m_bOverrideTintColor (bool)
            // NetworkVarNames: m_bOverrideIndirectLightStrength (bool)
            // NetworkVarNames: m_bOverrideSunLightStrength (bool)
            // NetworkVarNames: m_bOverrideNoiseStrength (bool)
            namespace C_EnvVolumetricFogVolume {
                constexpr std::ptrdiff_t m_bActive = 0x5F8; // bool
                constexpr std::ptrdiff_t m_vBoxMins = 0x5FC; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x608; // Vector
                constexpr std::ptrdiff_t m_bStartDisabled = 0x614; // bool
                constexpr std::ptrdiff_t m_bIndirectUseLPVs = 0x615; // bool
                constexpr std::ptrdiff_t m_flStrength = 0x618; // float32
                constexpr std::ptrdiff_t m_nFalloffShape = 0x61C; // int32
                constexpr std::ptrdiff_t m_flFalloffExponent = 0x620; // float32
                constexpr std::ptrdiff_t m_flHeightFogDepth = 0x624; // float32
                constexpr std::ptrdiff_t m_fHeightFogEdgeWidth = 0x628; // float32
                constexpr std::ptrdiff_t m_fIndirectLightStrength = 0x62C; // float32
                constexpr std::ptrdiff_t m_fSunLightStrength = 0x630; // float32
                constexpr std::ptrdiff_t m_fNoiseStrength = 0x634; // float32
                constexpr std::ptrdiff_t m_TintColor = 0x638; // Color
                constexpr std::ptrdiff_t m_bOverrideTintColor = 0x63C; // bool
                constexpr std::ptrdiff_t m_bOverrideIndirectLightStrength = 0x63D; // bool
                constexpr std::ptrdiff_t m_bOverrideSunLightStrength = 0x63E; // bool
                constexpr std::ptrdiff_t m_bOverrideNoiseStrength = 0x63F; // bool
            }
            // Parent: C_CSGO_TeamPreviewCharacterPosition
            // Field count: 0
            namespace C_CSGO_EndOfMatchCharacterPosition {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CPulseCell_PlaySequence {
                constexpr std::ptrdiff_t m_SequenceName = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_PulseAnimEvents = 0x50; // PulseNodeDynamicOutflows_t
                constexpr std::ptrdiff_t m_OnFinished = 0x68; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_OnCanceled = 0xB0; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 0
            namespace C_BaseEntityAPI {
            }
            // Parent: C_BaseModelEntity
            // Field count: 76
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
            // NetworkVarNames: m_nLightPathUniqueId (int32)
            // NetworkVarNames: m_nLightMapUniqueId (int32)
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
            // NetworkVarNames: m_bForceShadowsEnabled (bool)
            // NetworkVarNames: m_nBounceLight (int)
            // NetworkVarNames: m_flBounceScale (float)
            // NetworkVarNames: m_flMinRoughness (float)
            // NetworkVarNames: m_vAlternateColor (Vector)
            // NetworkVarNames: m_fAlternateColorBrightness (float)
            // NetworkVarNames: m_nFog (int)
            // NetworkVarNames: m_flFogStrength (float)
            // NetworkVarNames: m_nFogShadows (int)
            // NetworkVarNames: m_flFogScale (float)
            // NetworkVarNames: m_bFogMixedShadows (bool)
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
            // NetworkVarNames: m_nPrecomputedSubFrusta (int)
            // NetworkVarNames: m_vPrecomputedOBBOrigin0 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles0 (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent0 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin1 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles1 (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent1 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin2 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles2 (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent2 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin3 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles3 (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent3 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin4 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles4 (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent4 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBOrigin5 (Vector)
            // NetworkVarNames: m_vPrecomputedOBBAngles5 (QAngle)
            // NetworkVarNames: m_vPrecomputedOBBExtent5 (Vector)
            // NetworkVarNames: m_VisClusters (uint16)
            namespace C_BarnLight {
                constexpr std::ptrdiff_t m_bEnabled = 0xEB0; // bool
                constexpr std::ptrdiff_t m_nColorMode = 0xEB4; // int32
                constexpr std::ptrdiff_t m_Color = 0xEB8; // Color
                constexpr std::ptrdiff_t m_flColorTemperature = 0xEBC; // float32
                constexpr std::ptrdiff_t m_flBrightness = 0xEC0; // float32
                constexpr std::ptrdiff_t m_flBrightnessScale = 0xEC4; // float32
                constexpr std::ptrdiff_t m_nDirectLight = 0xEC8; // int32
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0xECC; // int32
                constexpr std::ptrdiff_t m_nLightPathUniqueId = 0xED0; // int32
                constexpr std::ptrdiff_t m_nLightMapUniqueId = 0xED4; // int32
                constexpr std::ptrdiff_t m_nLuminaireShape = 0xED8; // int32
                constexpr std::ptrdiff_t m_flLuminaireSize = 0xEDC; // float32
                constexpr std::ptrdiff_t m_flLuminaireAnisotropy = 0xEE0; // float32
                constexpr std::ptrdiff_t m_LightStyleString = 0xEE8; // CUtlString
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0xEF0; // GameTime_t
                constexpr std::ptrdiff_t m_QueuedLightStyleStrings = 0xEF8; // C_NetworkUtlVectorBase<CUtlString>
                constexpr std::ptrdiff_t m_LightStyleEvents = 0xF10; // C_NetworkUtlVectorBase<CUtlString>
                constexpr std::ptrdiff_t m_LightStyleTargets = 0xF28; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_StyleEvent = 0xF40; // CEntityIOOutput[4]
                constexpr std::ptrdiff_t m_hLightCookie = 0xFE0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_flShape = 0xFE8; // float32
                constexpr std::ptrdiff_t m_flSoftX = 0xFEC; // float32
                constexpr std::ptrdiff_t m_flSoftY = 0xFF0; // float32
                constexpr std::ptrdiff_t m_flSkirt = 0xFF4; // float32
                constexpr std::ptrdiff_t m_flSkirtNear = 0xFF8; // float32
                constexpr std::ptrdiff_t m_vSizeParams = 0xFFC; // Vector
                constexpr std::ptrdiff_t m_flRange = 0x1008; // float32
                constexpr std::ptrdiff_t m_vShear = 0x100C; // Vector
                constexpr std::ptrdiff_t m_nBakeSpecularToCubemaps = 0x1018; // int32
                constexpr std::ptrdiff_t m_vBakeSpecularToCubemapsSize = 0x101C; // Vector
                constexpr std::ptrdiff_t m_nCastShadows = 0x1028; // int32
                constexpr std::ptrdiff_t m_nShadowMapSize = 0x102C; // int32
                constexpr std::ptrdiff_t m_nShadowPriority = 0x1030; // int32
                constexpr std::ptrdiff_t m_bContactShadow = 0x1034; // bool
                constexpr std::ptrdiff_t m_bForceShadowsEnabled = 0x1035; // bool
                constexpr std::ptrdiff_t m_nBounceLight = 0x1038; // int32
                constexpr std::ptrdiff_t m_flBounceScale = 0x103C; // float32
                constexpr std::ptrdiff_t m_flMinRoughness = 0x1040; // float32
                constexpr std::ptrdiff_t m_vAlternateColor = 0x1044; // Vector
                constexpr std::ptrdiff_t m_fAlternateColorBrightness = 0x1050; // float32
                constexpr std::ptrdiff_t m_nFog = 0x1054; // int32
                constexpr std::ptrdiff_t m_flFogStrength = 0x1058; // float32
                constexpr std::ptrdiff_t m_nFogShadows = 0x105C; // int32
                constexpr std::ptrdiff_t m_flFogScale = 0x1060; // float32
                constexpr std::ptrdiff_t m_bFogMixedShadows = 0x1064; // bool
                constexpr std::ptrdiff_t m_flFadeSizeStart = 0x1068; // float32
                constexpr std::ptrdiff_t m_flFadeSizeEnd = 0x106C; // float32
                constexpr std::ptrdiff_t m_flShadowFadeSizeStart = 0x1070; // float32
                constexpr std::ptrdiff_t m_flShadowFadeSizeEnd = 0x1074; // float32
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x1078; // bool
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x107C; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x1088; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x1094; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x10A0; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x10AC; // Vector
                constexpr std::ptrdiff_t m_nPrecomputedSubFrusta = 0x10B8; // int32
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin0 = 0x10BC; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles0 = 0x10C8; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent0 = 0x10D4; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin1 = 0x10E0; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles1 = 0x10EC; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent1 = 0x10F8; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin2 = 0x1104; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles2 = 0x1110; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent2 = 0x111C; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin3 = 0x1128; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles3 = 0x1134; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent3 = 0x1140; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin4 = 0x114C; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles4 = 0x1158; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent4 = 0x1164; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin5 = 0x1170; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles5 = 0x117C; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent5 = 0x1188; // Vector
                constexpr std::ptrdiff_t m_bInitialBoneSetup = 0x11D8; // bool
                constexpr std::ptrdiff_t m_VisClusters = 0x11E0; // C_NetworkUtlVectorBase<uint16>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_LerpCameraSettings {
                constexpr std::ptrdiff_t m_flSeconds = 0x90; // float32
                constexpr std::ptrdiff_t m_Start = 0x94; // PointCameraSettings_t
                constexpr std::ptrdiff_t m_End = 0xA4; // PointCameraSettings_t
            }
            // Parent: C_PointClientUIWorldPanel
            // Field count: 4
            namespace CPointOffScreenIndicatorUi {
                constexpr std::ptrdiff_t m_bBeenEnabled = 0x1100; // bool
                constexpr std::ptrdiff_t m_bHide = 0x1101; // bool
                constexpr std::ptrdiff_t m_flSeenTargetTime = 0x1104; // float32
                constexpr std::ptrdiff_t m_pTargetPanel = 0x1108; // C_PointClientUIWorldPanel*
            }
            // Parent: CPlayer_UseServices
            // Field count: 0
            namespace CCSObserver_UseServices {
            }
            // Parent: C_BaseTrigger
            // Field count: 12
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
            namespace C_PostProcessingVolume {
                constexpr std::ptrdiff_t m_hPostSettings = 0x1000; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
                constexpr std::ptrdiff_t m_flFadeDuration = 0x1008; // float32
                constexpr std::ptrdiff_t m_flMinLogExposure = 0x100C; // float32
                constexpr std::ptrdiff_t m_flMaxLogExposure = 0x1010; // float32
                constexpr std::ptrdiff_t m_flMinExposure = 0x1014; // float32
                constexpr std::ptrdiff_t m_flMaxExposure = 0x1018; // float32
                constexpr std::ptrdiff_t m_flExposureCompensation = 0x101C; // float32
                constexpr std::ptrdiff_t m_flExposureFadeSpeedUp = 0x1020; // float32
                constexpr std::ptrdiff_t m_flExposureFadeSpeedDown = 0x1024; // float32
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x1028; // float32
                constexpr std::ptrdiff_t m_bMaster = 0x102C; // bool
                constexpr std::ptrdiff_t m_bExposureControl = 0x102D; // bool
            }
            // Parent: CPlayer_UseServices
            // Field count: 0
            namespace CCSPlayer_UseServices {
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Field count: 0
            namespace C_CSGO_CounterTerroristWingmanIntroCamera {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            namespace CPulseCell_PickBestOutflowSelector {
                constexpr std::ptrdiff_t m_nCheckType = 0x48; // PulseBestOutflowRules_t
                constexpr std::ptrdiff_t m_OutflowList = 0x50; // PulseSelectorOutflowList_t
            }
            // Parent: C_PointEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_fFanForceMaxRadius (float)
            // NetworkVarNames: m_fFanForceMinRadius (float)
            // NetworkVarNames: m_flCurveDistRange (float)
            // NetworkVarNames: m_FanForceCurveString (string_t)
            namespace CInfoFan {
                constexpr std::ptrdiff_t m_fFanForceMaxRadius = 0x638; // float32
                constexpr std::ptrdiff_t m_fFanForceMinRadius = 0x63C; // float32
                constexpr std::ptrdiff_t m_flCurveDistRange = 0x640; // float32
                constexpr std::ptrdiff_t m_FanForceCurveString = 0x648; // CUtlSymbolLarge
            }
            // Parent: C_BaseEntity
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_iActiveIssueIndex (int)
            // NetworkVarNames: m_iOnlyTeamToVote (int)
            // NetworkVarNames: m_nVoteOptionCount (int)
            // NetworkVarNames: m_nPotentialVotes (int)
            // NetworkVarNames: m_bIsYesNoVote (bool)
            namespace C_VoteController {
                constexpr std::ptrdiff_t m_iActiveIssueIndex = 0x608; // int32
                constexpr std::ptrdiff_t m_iOnlyTeamToVote = 0x60C; // int32
                constexpr std::ptrdiff_t m_nVoteOptionCount = 0x610; // int32[5]
                constexpr std::ptrdiff_t m_nPotentialVotes = 0x624; // int32
                constexpr std::ptrdiff_t m_bVotesDirty = 0x628; // bool
                constexpr std::ptrdiff_t m_bTypeDirty = 0x629; // bool
                constexpr std::ptrdiff_t m_bIsYesNoVote = 0x62A; // bool
            }
            // Parent: C_BasePlayerPawn
            // Field count: 26
            //
            // Metadata:
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // NetworkVarNames: m_pPingServices (CCSPlayer_PingServices*)
            // NetworkVarNames: m_iPlayerState (CSPlayerState)
            // NetworkVarNames: m_bHasMovedSinceSpawn (bool)
            // NetworkVarNames: m_iProgressBarDuration (int)
            // NetworkVarNames: m_flProgressBarStartTime (float)
            // NetworkVarNames: m_flFlashMaxAlpha (float)
            // NetworkVarNames: m_flFlashDuration (float)
            // NetworkVarNames: m_hOriginalController (CHandle<CCSPlayerController>)
            namespace C_CSPlayerPawnBase {
                constexpr std::ptrdiff_t m_pPingServices = 0x15D8; // CCSPlayer_PingServices*
                constexpr std::ptrdiff_t m_previousPlayerState = 0x15E0; // CSPlayerState
                constexpr std::ptrdiff_t m_iPlayerState = 0x15E4; // CSPlayerState
                constexpr std::ptrdiff_t m_bHasMovedSinceSpawn = 0x15E8; // bool
                constexpr std::ptrdiff_t m_flLastSpawnTimeIndex = 0x15EC; // GameTime_t
                constexpr std::ptrdiff_t m_iProgressBarDuration = 0x15F0; // int32
                constexpr std::ptrdiff_t m_flProgressBarStartTime = 0x15F4; // float32
                constexpr std::ptrdiff_t m_flClientDeathTime = 0x15F8; // GameTime_t
                constexpr std::ptrdiff_t m_flFlashBangTime = 0x15FC; // float32
                constexpr std::ptrdiff_t m_flFlashScreenshotAlpha = 0x1600; // float32
                constexpr std::ptrdiff_t m_flFlashOverlayAlpha = 0x1604; // float32
                constexpr std::ptrdiff_t m_bFlashBuildUp = 0x1608; // bool
                constexpr std::ptrdiff_t m_bFlashDspHasBeenCleared = 0x1609; // bool
                constexpr std::ptrdiff_t m_bFlashScreenshotHasBeenGrabbed = 0x160A; // bool
                constexpr std::ptrdiff_t m_flFlashMaxAlpha = 0x160C; // float32
                constexpr std::ptrdiff_t m_flFlashDuration = 0x1610; // float32
                constexpr std::ptrdiff_t m_flClientHealthFadeChangeTimestamp = 0x1614; // GameTime_t
                constexpr std::ptrdiff_t m_nClientHealthFadeParityValue = 0x1618; // int32
                constexpr std::ptrdiff_t m_fNextThinkPushAway = 0x161C; // float32
                constexpr std::ptrdiff_t m_flCurrentMusicStartTime = 0x1624; // float32
                constexpr std::ptrdiff_t m_flMusicRoundStartTime = 0x1628; // float32
                constexpr std::ptrdiff_t m_bDeferStartMusicOnWarmup = 0x162C; // bool
                constexpr std::ptrdiff_t m_flLastSmokeOverlayAlpha = 0x1630; // float32
                constexpr std::ptrdiff_t m_flLastSmokeAge = 0x1634; // float32
                constexpr std::ptrdiff_t m_vLastSmokeOverlayColor = 0x1638; // Vector
                constexpr std::ptrdiff_t m_hOriginalController = 0x1660; // CHandle<CCSPlayerController>
            }
            // Parent: C_CSWeaponBase
            // Field count: 10
            //
            // Metadata:
            // NetworkVarNames: m_bStartedArming (bool)
            // NetworkVarNames: m_fArmedTime (GameTime_t)
            // NetworkVarNames: m_bBombPlacedAnimation (bool)
            // NetworkVarNames: m_bIsPlantingViaUse (bool)
            // NetworkVarNames: m_entitySpottedState (EntitySpottedState_t)
            namespace C_C4 {
                constexpr std::ptrdiff_t m_activeLightParticleIndex = 0x1F80; // ParticleIndex_t
                constexpr std::ptrdiff_t m_eActiveLightEffect = 0x1F84; // C4LightEffect_t
                constexpr std::ptrdiff_t m_bStartedArming = 0x1F88; // bool
                constexpr std::ptrdiff_t m_fArmedTime = 0x1F8C; // GameTime_t
                constexpr std::ptrdiff_t m_bBombPlacedAnimation = 0x1F90; // bool
                constexpr std::ptrdiff_t m_bIsPlantingViaUse = 0x1F91; // bool
                constexpr std::ptrdiff_t m_entitySpottedState = 0x1F98; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSpotRules = 0x1FB0; // int32
                constexpr std::ptrdiff_t m_bPlayedArmingBeeps = 0x1FB4; // bool[7]
                constexpr std::ptrdiff_t m_bBombPlanted = 0x1FBB; // bool
            }
            // Parent: CBaseProp
            // Field count: 28
            //
            // Metadata:
            // NetworkVarNames: m_CPropDataComponent (CPropDataComponent::Storage_t)
            namespace C_BreakableProp {
                constexpr std::ptrdiff_t m_CPropDataComponent = 0x1190; // CPropDataComponent
                constexpr std::ptrdiff_t m_OnStartDeath = 0x11D0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBreak = 0x11F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnHealthChanged = 0x1220; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnTakeDamage = 0x1248; // CEntityIOOutput
                constexpr std::ptrdiff_t m_impactEnergyScale = 0x1270; // float32
                constexpr std::ptrdiff_t m_iMinHealthDmg = 0x1274; // int32
                constexpr std::ptrdiff_t m_flPressureDelay = 0x1278; // float32
                constexpr std::ptrdiff_t m_flDefBurstScale = 0x127C; // float32
                constexpr std::ptrdiff_t m_vDefBurstOffset = 0x1280; // Vector
                constexpr std::ptrdiff_t m_hBreaker = 0x128C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_PerformanceMode = 0x1290; // PerformanceMode_t
                constexpr std::ptrdiff_t m_flPreventDamageBeforeTime = 0x1294; // GameTime_t
                constexpr std::ptrdiff_t m_BreakableContentsType = 0x1298; // BreakableContentsType_t
                constexpr std::ptrdiff_t m_strBreakableContentsPropGroupOverride = 0x12A0; // CUtlString
                constexpr std::ptrdiff_t m_strBreakableContentsParticleOverride = 0x12A8; // CUtlString
                constexpr std::ptrdiff_t m_bHasBreakPiecesOrCommands = 0x12B0; // bool
                constexpr std::ptrdiff_t m_explodeDamage = 0x12B4; // float32
                constexpr std::ptrdiff_t m_explodeRadius = 0x12B8; // float32
                constexpr std::ptrdiff_t m_explosionDelay = 0x12C0; // float32
                constexpr std::ptrdiff_t m_explosionBuildupSound = 0x12C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionCustomEffect = 0x12D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionCustomSound = 0x12D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionModifier = 0x12E0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hPhysicsAttacker = 0x12E8; // CHandle<C_BasePlayerPawn>
                constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0x12EC; // GameTime_t
                constexpr std::ptrdiff_t m_flDefaultFadeScale = 0x12F0; // float32
                constexpr std::ptrdiff_t m_hLastAttacker = 0x12F4; // CHandle<C_BaseEntity>
            }
            // Parent: CCSGO_WingmanIntroCharacterPosition
            // Field count: 0
            namespace CCSGO_WingmanIntroTerroristPosition {
            }
            // Parent: None
            // Field count: 7
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
            // Parent: None
            // Field count: 5
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
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            // MPropertyFriendlyName
            namespace CPulseCell_WaitForObservable {
                constexpr std::ptrdiff_t m_Condition = 0x48; // PulseObservableBoolExpression_t
                constexpr std::ptrdiff_t m_OnTrue = 0xC0; // CPulse_ResumePoint
            }
            // Parent: C_SoundAreaEntityBase
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_flRadius (float)
            namespace C_SoundAreaEntitySphere {
                constexpr std::ptrdiff_t m_flRadius = 0x620; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Step_EntFire {
                constexpr std::ptrdiff_t m_Input = 0x48; // CUtlString
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponAWP {
            }
            // Parent: C_BaseToggle
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_glowEntity (CHandle<C_BaseModelEntity>)
            // NetworkVarNames: m_usable (bool)
            // NetworkVarNames: m_szDisplayText (string_t)
            namespace C_BaseButton {
                constexpr std::ptrdiff_t m_glowEntity = 0xEB0; // CHandle<C_BaseModelEntity>
                constexpr std::ptrdiff_t m_usable = 0xEB4; // bool
                constexpr std::ptrdiff_t m_szDisplayText = 0xEB8; // CUtlSymbolLarge
            }
            // Parent: CPlayer_ObserverServices
            // Field count: 1
            namespace CCSObserver_ObserverServices {
                constexpr std::ptrdiff_t m_obsInterpState = 0x5C; // ObserverInterpState_t
            }
            // Parent: CEntityComponent
            // Field count: 1
            namespace CHitboxComponent {
                constexpr std::ptrdiff_t m_flBoundsExpandRadius = 0x14; // float32
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace C_CSMinimapBoundary {
            }
            // Parent: CEntityComponent
            // Field count: 0
            namespace CPathQueryComponent {
            }
            // Parent: C_BaseTrigger
            // Field count: 8
            namespace C_Precipitation {
                constexpr std::ptrdiff_t m_flDensity = 0xFF0; // float32
                constexpr std::ptrdiff_t m_flParticleInnerDist = 0x1000; // float32
                constexpr std::ptrdiff_t m_pParticleDef = 0x1008; // char*
                constexpr std::ptrdiff_t m_tParticlePrecipTraceTimer = 0x1030; // TimedEvent[1]
                constexpr std::ptrdiff_t m_bActiveParticlePrecipEmitter = 0x1038; // bool[1]
                constexpr std::ptrdiff_t m_bParticlePrecipInitialized = 0x1039; // bool
                constexpr std::ptrdiff_t m_bHasSimulatedSinceLastSceneObjectUpdate = 0x103A; // bool
                constexpr std::ptrdiff_t m_nAvailableSheetSequencesMaxIndex = 0x103C; // int32
            }
            // Parent: CLogicalEntity
            // Field count: 5
            namespace CLogicRelay {
                constexpr std::ptrdiff_t m_bDisabled = 0x5F8; // bool
                constexpr std::ptrdiff_t m_bWaitForRefire = 0x5F9; // bool
                constexpr std::ptrdiff_t m_bTriggerOnce = 0x5FA; // bool
                constexpr std::ptrdiff_t m_bFastRetrigger = 0x5FB; // bool
                constexpr std::ptrdiff_t m_bPassthoughCaller = 0x5FC; // bool
            }
            // Parent: 
            // Field count: 6
            namespace SequenceHistory_t {
                constexpr std::ptrdiff_t m_hSequence = 0x0; // HSequence
                constexpr std::ptrdiff_t m_flSeqStartTime = 0x4; // GameTime_t
                constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x8; // float32
                constexpr std::ptrdiff_t m_nSeqLoopMode = 0xC; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_flPlaybackRate = 0x10; // float32
                constexpr std::ptrdiff_t m_flCyclesPerSecond = 0x14; // float32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_ItemServices {
            }
            // Parent: None
            // Field count: 4
            namespace CPulse_OutflowConnection {
                constexpr std::ptrdiff_t m_SourceOutflowName = 0x0; // PulseSymbol_t
                constexpr std::ptrdiff_t m_nDestChunk = 0x10; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nInstruction = 0x14; // int32
                constexpr std::ptrdiff_t m_OutflowRegisterMap = 0x18; // PulseRegisterMap_t
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponUMP45 {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponG3SG1 {
            }
            // Parent: C_BaseModelEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flLightScale (float32)
            // NetworkVarNames: m_Radius (float32)
            namespace C_SpotlightEnd {
                constexpr std::ptrdiff_t m_flLightScale = 0xEB0; // float32
                constexpr std::ptrdiff_t m_Radius = 0xEB4; // float32
            }
            // Parent: CBaseAnimGraph
            // Field count: 23
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
                constexpr std::ptrdiff_t m_pos = 0x1158; // Vector
                constexpr std::ptrdiff_t m_vel = 0x1164; // Vector
                constexpr std::ptrdiff_t m_angles = 0x1170; // QAngle
                constexpr std::ptrdiff_t m_localLifeState = 0x117C; // int32
                constexpr std::ptrdiff_t m_deathDepth = 0x1180; // float32
                constexpr std::ptrdiff_t m_deathAngle = 0x1184; // float32
                constexpr std::ptrdiff_t m_buoyancy = 0x1188; // float32
                constexpr std::ptrdiff_t m_wiggleTimer = 0x1190; // CountdownTimer
                constexpr std::ptrdiff_t m_wigglePhase = 0x11A8; // float32
                constexpr std::ptrdiff_t m_wiggleRate = 0x11AC; // float32
                constexpr std::ptrdiff_t m_actualPos = 0x11B0; // Vector
                constexpr std::ptrdiff_t m_actualAngles = 0x11BC; // QAngle
                constexpr std::ptrdiff_t m_poolOrigin = 0x11C8; // Vector
                constexpr std::ptrdiff_t m_waterLevel = 0x11D4; // float32
                constexpr std::ptrdiff_t m_gotUpdate = 0x11D8; // bool
                constexpr std::ptrdiff_t m_x = 0x11DC; // float32
                constexpr std::ptrdiff_t m_y = 0x11E0; // float32
                constexpr std::ptrdiff_t m_z = 0x11E4; // float32
                constexpr std::ptrdiff_t m_angle = 0x11E8; // float32
                constexpr std::ptrdiff_t m_errorHistory = 0x11EC; // float32[20]
                constexpr std::ptrdiff_t m_errorHistoryIndex = 0x123C; // int32
                constexpr std::ptrdiff_t m_errorHistoryCount = 0x1240; // int32
                constexpr std::ptrdiff_t m_averageError = 0x1244; // float32
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponFamas {
            }
            // Parent: C_BaseEntity
            // Field count: 36
            //
            // Metadata:
            // NetworkVarNames: m_flScattering (float)
            // NetworkVarNames: m_TintColor (Color)
            // NetworkVarNames: m_flAnisotropy (float)
            // NetworkVarNames: m_flFadeSpeed (float)
            // NetworkVarNames: m_flDrawDistance (float)
            // NetworkVarNames: m_flFadeInStart (float)
            // NetworkVarNames: m_flFadeInEnd (float)
            // NetworkVarNames: m_flIndirectStrength (float)
            // NetworkVarNames: m_nVolumeDepth (int)
            // NetworkVarNames: m_fFirstVolumeSliceThickness (float)
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
            // NetworkVarNames: m_fNoiseSpeed (float)
            // NetworkVarNames: m_fNoiseStrength (float)
            // NetworkVarNames: m_vNoiseScale (Vector)
            // NetworkVarNames: m_fWindSpeed (float)
            // NetworkVarNames: m_vWindDirection (Vector)
            namespace C_EnvVolumetricFogController {
                constexpr std::ptrdiff_t m_flScattering = 0x5F8; // float32
                constexpr std::ptrdiff_t m_TintColor = 0x5FC; // Color
                constexpr std::ptrdiff_t m_flAnisotropy = 0x600; // float32
                constexpr std::ptrdiff_t m_flFadeSpeed = 0x604; // float32
                constexpr std::ptrdiff_t m_flDrawDistance = 0x608; // float32
                constexpr std::ptrdiff_t m_flFadeInStart = 0x60C; // float32
                constexpr std::ptrdiff_t m_flFadeInEnd = 0x610; // float32
                constexpr std::ptrdiff_t m_flIndirectStrength = 0x614; // float32
                constexpr std::ptrdiff_t m_nVolumeDepth = 0x618; // int32
                constexpr std::ptrdiff_t m_fFirstVolumeSliceThickness = 0x61C; // float32
                constexpr std::ptrdiff_t m_nIndirectTextureDimX = 0x620; // int32
                constexpr std::ptrdiff_t m_nIndirectTextureDimY = 0x624; // int32
                constexpr std::ptrdiff_t m_nIndirectTextureDimZ = 0x628; // int32
                constexpr std::ptrdiff_t m_vBoxMins = 0x62C; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x638; // Vector
                constexpr std::ptrdiff_t m_bActive = 0x644; // bool
                constexpr std::ptrdiff_t m_flStartAnisoTime = 0x648; // GameTime_t
                constexpr std::ptrdiff_t m_flStartScatterTime = 0x64C; // GameTime_t
                constexpr std::ptrdiff_t m_flStartDrawDistanceTime = 0x650; // GameTime_t
                constexpr std::ptrdiff_t m_flStartAnisotropy = 0x654; // float32
                constexpr std::ptrdiff_t m_flStartScattering = 0x658; // float32
                constexpr std::ptrdiff_t m_flStartDrawDistance = 0x65C; // float32
                constexpr std::ptrdiff_t m_flDefaultAnisotropy = 0x660; // float32
                constexpr std::ptrdiff_t m_flDefaultScattering = 0x664; // float32
                constexpr std::ptrdiff_t m_flDefaultDrawDistance = 0x668; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x66C; // bool
                constexpr std::ptrdiff_t m_bEnableIndirect = 0x66D; // bool
                constexpr std::ptrdiff_t m_bIsMaster = 0x66E; // bool
                constexpr std::ptrdiff_t m_hFogIndirectTexture = 0x670; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_nForceRefreshCount = 0x678; // int32
                constexpr std::ptrdiff_t m_fNoiseSpeed = 0x67C; // float32
                constexpr std::ptrdiff_t m_fNoiseStrength = 0x680; // float32
                constexpr std::ptrdiff_t m_vNoiseScale = 0x684; // Vector
                constexpr std::ptrdiff_t m_fWindSpeed = 0x690; // float32
                constexpr std::ptrdiff_t m_vWindDirection = 0x694; // Vector
                constexpr std::ptrdiff_t m_bFirstTime = 0x6A0; // bool
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseGraphDef {
                constexpr std::ptrdiff_t m_DomainIdentifier = 0x8; // PulseSymbol_t
                constexpr std::ptrdiff_t m_DomainSubType = 0x18; // CPulseValueFullType
                constexpr std::ptrdiff_t m_ParentMapName = 0x30; // PulseSymbol_t
                constexpr std::ptrdiff_t m_ParentXmlName = 0x40; // PulseSymbol_t
                constexpr std::ptrdiff_t m_Chunks = 0x50; // CUtlVector<CPulse_Chunk*>
                constexpr std::ptrdiff_t m_Cells = 0x68; // CUtlVector<CPulseCell_Base*>
                constexpr std::ptrdiff_t m_Vars = 0x80; // CUtlVector<CPulse_Variable>
                constexpr std::ptrdiff_t m_PublicOutputs = 0x98; // CUtlVector<CPulse_PublicOutput>
                constexpr std::ptrdiff_t m_InvokeBindings = 0xB0; // CUtlVector<CPulse_InvokeBinding*>
                constexpr std::ptrdiff_t m_CallInfos = 0xC8; // CUtlVector<CPulse_CallInfo*>
                constexpr std::ptrdiff_t m_Constants = 0xE0; // CUtlVector<CPulse_Constant>
                constexpr std::ptrdiff_t m_DomainValues = 0xF8; // CUtlVector<CPulse_DomainValue>
                constexpr std::ptrdiff_t m_BlackboardReferences = 0x110; // CUtlVector<CPulse_BlackboardReference>
                constexpr std::ptrdiff_t m_OutputConnections = 0x128; // CUtlVector<CPulse_OutputConnection*>
            }
            // Parent: C_BaseEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFadeStartDist (float32)
            // NetworkVarNames: m_flFadeEndDist (float32)
            namespace C_EnvDetailController {
                constexpr std::ptrdiff_t m_flFadeStartDist = 0x5F8; // float32
                constexpr std::ptrdiff_t m_flFadeEndDist = 0x5FC; // float32
            }
            // Parent: C_BaseEntity
            // Field count: 9
            //
            // Metadata:
            // NetworkVarNames: m_bActive (bool)
            // NetworkVarNames: m_vBoxMins (Vector)
            // NetworkVarNames: m_vBoxMaxs (Vector)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_nShape (int)
            // NetworkVarNames: m_fWindSpeedMultiplier (float)
            // NetworkVarNames: m_fWindTurbulenceMultiplier (float)
            // NetworkVarNames: m_fWindSpeedVariationMultiplier (float)
            // NetworkVarNames: m_fWindDirectionVariationMultiplier (float)
            namespace C_EnvWindVolume {
                constexpr std::ptrdiff_t m_bActive = 0x5F8; // bool
                constexpr std::ptrdiff_t m_vBoxMins = 0x5FC; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x608; // Vector
                constexpr std::ptrdiff_t m_bStartDisabled = 0x614; // bool
                constexpr std::ptrdiff_t m_nShape = 0x618; // int32
                constexpr std::ptrdiff_t m_fWindSpeedMultiplier = 0x61C; // float32
                constexpr std::ptrdiff_t m_fWindTurbulenceMultiplier = 0x620; // float32
                constexpr std::ptrdiff_t m_fWindSpeedVariationMultiplier = 0x624; // float32
                constexpr std::ptrdiff_t m_fWindDirectionVariationMultiplier = 0x628; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CBasePlayerControllerAPI {
            }
            // Parent: C_BaseTrigger
            // Field count: 0
            namespace CHostageRescueZoneShim {
            }
            // Parent: CEnvSoundscape
            // Field count: 0
            namespace CEnvSoundscapeAlias_snd_soundscape {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hCarriedHostage (CHandle<CBaseEntity>)
            // NetworkVarNames: m_hCarriedHostageProp (CHandle<CBaseEntity>)
            namespace CCSPlayer_HostageServices {
                constexpr std::ptrdiff_t m_hCarriedHostage = 0x40; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hCarriedHostageProp = 0x44; // CHandle<C_BaseEntity>
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace C_GameRulesProxy {
            }
            // Parent: CEntityComponent
            // Field count: 5
            namespace CRenderComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x10; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_bIsRenderingWithViewModels = 0x50; // bool
                constexpr std::ptrdiff_t m_nSplitscreenFlags = 0x54; // uint32
                constexpr std::ptrdiff_t m_bEnableRendering = 0x58; // bool
                constexpr std::ptrdiff_t m_bInterpolationReadyToDraw = 0xA8; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 4
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames: m_aPlayerControllers (CHandle<CBasePlayerController>)
            // NetworkVarNames: m_aPlayers (CHandle<C_BasePlayerPawn>)
            // NetworkVarNames: m_iScore (int32)
            // NetworkVarNames: m_szTeamname (char)
            namespace C_Team {
                constexpr std::ptrdiff_t m_aPlayerControllers = 0x5F8; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
                constexpr std::ptrdiff_t m_aPlayers = 0x610; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
                constexpr std::ptrdiff_t m_iScore = 0x628; // int32
                constexpr std::ptrdiff_t m_szTeamname = 0x62C; // char[129]
            }
            // Parent: C_PathParticleRope
            // Field count: 0
            namespace C_PathParticleRopeAlias_path_particle_rope_clientside {
            }
            // Parent: C_PointEntity
            // Field count: 1
            namespace CPointChildModifier {
                constexpr std::ptrdiff_t m_bOrphanInsteadOfDeletingChildrenOnRemove = 0x5F8; // bool
            }
            // Parent: C_CSWeaponBaseShotgun
            // Field count: 0
            namespace C_WeaponNOVA {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_DEagle {
            }
            // Parent: C_LateUpdatedAnimating
            // Field count: 0
            namespace C_CS2HudModelAddon {
            }
            // Parent: C_BaseTrigger
            // Field count: 0
            namespace C_TriggerMultiple {
            }
            // Parent: C_CSGO_MapPreviewCameraPath
            // Field count: 1
            namespace C_CSGO_TeamPreviewCamera {
                constexpr std::ptrdiff_t m_nVariant = 0x680; // int32
            }
            // Parent: C_BaseTrigger
            // Field count: 9
            //
            // Metadata:
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_MaxWeight (float)
            // NetworkVarNames: m_FadeDuration (float)
            // NetworkVarNames: m_Weight (float)
            // NetworkVarNames: m_lookupFilename (char)
            namespace C_ColorCorrectionVolume {
                constexpr std::ptrdiff_t m_LastEnterWeight = 0xFF0; // float32
                constexpr std::ptrdiff_t m_LastEnterTime = 0xFF4; // GameTime_t
                constexpr std::ptrdiff_t m_LastExitWeight = 0xFF8; // float32
                constexpr std::ptrdiff_t m_LastExitTime = 0xFFC; // GameTime_t
                constexpr std::ptrdiff_t m_bEnabled = 0x1000; // bool
                constexpr std::ptrdiff_t m_MaxWeight = 0x1004; // float32
                constexpr std::ptrdiff_t m_FadeDuration = 0x1008; // float32
                constexpr std::ptrdiff_t m_Weight = 0x100C; // float32
                constexpr std::ptrdiff_t m_lookupFilename = 0x1010; // char[512]
            }
            // Parent: CPlayerPawnComponent
            // Field count: 15
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
                constexpr std::ptrdiff_t m_vecOldViewAngles = 0x220; // QAngle
            }
            // Parent: CInfoDynamicShadowHint
            // Field count: 2
            namespace CInfoDynamicShadowHintBox {
                constexpr std::ptrdiff_t m_vBoxMins = 0x610; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x61C; // Vector
            }
            // Parent: CSkeletonAnimationController
            // Field count: 22
            //
            // Metadata:
            // NetworkVarNames: m_animGraphNetworkedVars (CAnimGraphNetworkedVariables)
            // NetworkVarNames: m_hSequence (HSequence)
            // NetworkVarNames: m_flSeqStartTime (GameTime_t)
            // NetworkVarNames: m_flSeqFixedCycle (float)
            // NetworkVarNames: m_nAnimLoopMode (AnimLoopMode_t)
            // NetworkVarNames: m_hGraphDefinitionAG2 (HNmGraphDefinitionStrong)
            // NetworkVarNames: m_bIsUsingAG2 (bool)
            // NetworkVarNames: m_serializedPoseRecipeAG2 (uint8)
            // NetworkVarNames: m_nSerializePoseRecipeSizeAG2 (int)
            // NetworkVarNames: m_nSerializePoseRecipeVersionAG2 (int)
            // NetworkVarNames: m_nGraphCreationFlagsAG2 (uint8)
            // NetworkVarNames: m_nServerGraphDefReloadCountAG2 (int)
            // NetworkVarNames: m_nServerSerializationContextIteration (int)
            namespace CBaseAnimGraphController {
                constexpr std::ptrdiff_t m_animGraphNetworkedVars = 0x18; // CAnimGraphNetworkedVariables
                constexpr std::ptrdiff_t m_bSequenceFinished = 0x14A8; // bool
                constexpr std::ptrdiff_t m_flSoundSyncTime = 0x14AC; // float32
                constexpr std::ptrdiff_t m_nActiveIKChainMask = 0x14B0; // uint32
                constexpr std::ptrdiff_t m_hSequence = 0x14B4; // HSequence
                constexpr std::ptrdiff_t m_flSeqStartTime = 0x14B8; // GameTime_t
                constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x14BC; // float32
                constexpr std::ptrdiff_t m_nAnimLoopMode = 0x14C0; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_flPlaybackRate = 0x14C4; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_nNotifyState = 0x14D0; // SequenceFinishNotifyState_t
                constexpr std::ptrdiff_t m_bNetworkedAnimationInputsChanged = 0x14D2; // bool
                constexpr std::ptrdiff_t m_bNetworkedSequenceChanged = 0x14D3; // bool
                constexpr std::ptrdiff_t m_bLastUpdateSkipped = 0x14D4; // bool
                constexpr std::ptrdiff_t m_flPrevAnimUpdateTime = 0x14D8; // GameTime_t
                constexpr std::ptrdiff_t m_hGraphDefinitionAG2 = 0x1860; // CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
                constexpr std::ptrdiff_t m_bIsUsingAG2 = 0x1868; // bool
                constexpr std::ptrdiff_t m_serializedPoseRecipeAG2 = 0x1870; // C_NetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_nSerializePoseRecipeSizeAG2 = 0x1888; // int32
                constexpr std::ptrdiff_t m_nSerializePoseRecipeVersionAG2 = 0x188C; // int32
                constexpr std::ptrdiff_t m_nGraphCreationFlagsAG2 = 0x1890; // uint8
                constexpr std::ptrdiff_t m_nServerGraphDefReloadCountAG2 = 0x1A7C; // int32
                constexpr std::ptrdiff_t m_nServerSerializationContextIteration = 0x1A84; // int32
            }
            // Parent: C_BaseEntity
            // Field count: 18
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
                constexpr std::ptrdiff_t m_vecOrigin = 0x5F8; // Vector
                constexpr std::ptrdiff_t m_MinFalloff = 0x604; // float32
                constexpr std::ptrdiff_t m_MaxFalloff = 0x608; // float32
                constexpr std::ptrdiff_t m_flFadeInDuration = 0x60C; // float32
                constexpr std::ptrdiff_t m_flFadeOutDuration = 0x610; // float32
                constexpr std::ptrdiff_t m_flMaxWeight = 0x614; // float32
                constexpr std::ptrdiff_t m_flCurWeight = 0x618; // float32
                constexpr std::ptrdiff_t m_netlookupFilename = 0x61C; // char[512]
                constexpr std::ptrdiff_t m_bEnabled = 0x81C; // bool
                constexpr std::ptrdiff_t m_bMaster = 0x81D; // bool
                constexpr std::ptrdiff_t m_bClientSide = 0x81E; // bool
                constexpr std::ptrdiff_t m_bExclusive = 0x81F; // bool
                constexpr std::ptrdiff_t m_bEnabledOnClient = 0x820; // bool[1]
                constexpr std::ptrdiff_t m_flCurWeightOnClient = 0x824; // float32[1]
                constexpr std::ptrdiff_t m_bFadingIn = 0x828; // bool[1]
                constexpr std::ptrdiff_t m_flFadeStartWeight = 0x82C; // float32[1]
                constexpr std::ptrdiff_t m_flFadeStartTime = 0x830; // float32[1]
                constexpr std::ptrdiff_t m_flFadeDuration = 0x834; // float32[1]
            }
            // Parent: 
            // Field count: 10
            namespace CBuoyancyHelper {
                constexpr std::ptrdiff_t m_nFluidType = 0x18; // CUtlStringToken
                constexpr std::ptrdiff_t m_flFluidDensity = 0x1C; // float32
                constexpr std::ptrdiff_t m_flNeutrallyBuoyantGravity = 0x20; // float32
                constexpr std::ptrdiff_t m_flNeutrallyBuoyantLinearDamping = 0x24; // float32
                constexpr std::ptrdiff_t m_flNeutrallyBuoyantAngularDamping = 0x28; // float32
                constexpr std::ptrdiff_t m_bNeutrallyBuoyant = 0x2C; // bool
                constexpr std::ptrdiff_t m_vecFractionOfWheelSubmergedForWheelFriction = 0x30; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecWheelFrictionScales = 0x48; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecFractionOfWheelSubmergedForWheelDrag = 0x60; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecWheelDrag = 0x78; // CUtlVector<float32>
            }
            // Parent: C_Breakable
            // Field count: 0
            namespace C_PhysBox {
            }
            // Parent: CCSPlayerBase_CameraServices
            // Field count: 2
            namespace CCSPlayer_CameraServices {
                constexpr std::ptrdiff_t m_flDeathCamTilt = 0x2A0; // float32
                constexpr std::ptrdiff_t m_vClientScopeInaccuracy = 0x2A8; // Vector
            }
            // Parent: CBaseFilter
            // Field count: 3
            namespace CFilterMultiple {
                constexpr std::ptrdiff_t m_nFilterType = 0x650; // filter_t
                constexpr std::ptrdiff_t m_iFilterName = 0x658; // CUtlSymbolLarge[10]
                constexpr std::ptrdiff_t m_hFilter = 0x6A8; // CHandle<C_BaseEntity>[10]
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_FireCursors {
                constexpr std::ptrdiff_t m_Outflows = 0x48; // CUtlVector<CPulse_OutflowConnection>
                constexpr std::ptrdiff_t m_bWaitForChildOutflows = 0x60; // bool
                constexpr std::ptrdiff_t m_OnFinished = 0x68; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_OnCanceled = 0xB0; // CPulse_ResumePoint
            }
            // Parent: C_BaseEntity
            // Field count: 11
            namespace CEnvSoundscape {
                constexpr std::ptrdiff_t m_OnPlay = 0x5F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_flRadius = 0x620; // float32
                constexpr std::ptrdiff_t m_soundEventName = 0x628; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bOverrideWithEvent = 0x630; // bool
                constexpr std::ptrdiff_t m_soundscapeIndex = 0x634; // int32
                constexpr std::ptrdiff_t m_soundscapeEntityListId = 0x638; // int32
                constexpr std::ptrdiff_t m_positionNames = 0x640; // CUtlSymbolLarge[8]
                constexpr std::ptrdiff_t m_hProxySoundscape = 0x680; // CHandle<CEnvSoundscape>
                constexpr std::ptrdiff_t m_bDisabled = 0x684; // bool
                constexpr std::ptrdiff_t m_soundscapeName = 0x688; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_soundEventHash = 0x690; // uint32
            }
            // Parent: C_SoundEventEntity
            // Field count: 0
            namespace C_SoundEventEntityAlias_snd_event_point {
            }
            // Parent: C_BaseEntity
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_fog (fogparams_t)
            namespace C_FogController {
                constexpr std::ptrdiff_t m_fog = 0x5F8; // fogparams_t
                constexpr std::ptrdiff_t m_bUseAngles = 0x660; // bool
                constexpr std::ptrdiff_t m_iChangedVariables = 0x664; // int32
            }
            // Parent: C_SoundOpvarSetPointBase
            // Field count: 0
            namespace C_SoundOpvarSetOBBWindEntity {
            }
            // Parent: C_BaseCSGrenade
            // Field count: 0
            namespace C_MolotovGrenade {
            }
            // Parent: C_BaseCombatCharacter
            // Field count: 0
            namespace C_NetTestBaseCombatCharacter {
            }
            // Parent: CBodyComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_sceneNode (CGameSceneNode)
            namespace CBodyComponentPoint {
                constexpr std::ptrdiff_t m_sceneNode = 0x80; // CGameSceneNode
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponM4A1Silencer {
            }
            // Parent: 
            // Field count: 29
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
                constexpr std::ptrdiff_t m_bInventoryImageRgbaRequested = 0x60; // bool
                constexpr std::ptrdiff_t m_bInventoryImageTriedCache = 0x61; // bool
                constexpr std::ptrdiff_t m_nInventoryImageRgbaWidth = 0x80; // int32
                constexpr std::ptrdiff_t m_nInventoryImageRgbaHeight = 0x84; // int32
                constexpr std::ptrdiff_t m_szCurrentLoadCachedFileName = 0x88; // char[260]
                constexpr std::ptrdiff_t m_bRestoreCustomMaterialAfterPrecache = 0x1B8; // bool
                constexpr std::ptrdiff_t m_iItemDefinitionIndex = 0x1BA; // uint16
                constexpr std::ptrdiff_t m_iEntityQuality = 0x1BC; // int32
                constexpr std::ptrdiff_t m_iEntityLevel = 0x1C0; // uint32
                constexpr std::ptrdiff_t m_iItemID = 0x1C8; // uint64
                constexpr std::ptrdiff_t m_iItemIDHigh = 0x1D0; // uint32
                constexpr std::ptrdiff_t m_iItemIDLow = 0x1D4; // uint32
                constexpr std::ptrdiff_t m_iAccountID = 0x1D8; // uint32
                constexpr std::ptrdiff_t m_iInventoryPosition = 0x1DC; // uint32
                constexpr std::ptrdiff_t m_bInitialized = 0x1E8; // bool
                constexpr std::ptrdiff_t m_bDisallowSOC = 0x1E9; // bool
                constexpr std::ptrdiff_t m_bIsStoreItem = 0x1EA; // bool
                constexpr std::ptrdiff_t m_bIsTradeItem = 0x1EB; // bool
                constexpr std::ptrdiff_t m_iEntityQuantity = 0x1EC; // int32
                constexpr std::ptrdiff_t m_iRarityOverride = 0x1F0; // int32
                constexpr std::ptrdiff_t m_iQualityOverride = 0x1F4; // int32
                constexpr std::ptrdiff_t m_iOriginOverride = 0x1F8; // int32
                constexpr std::ptrdiff_t m_ubStyleOverride = 0x1FC; // uint8
                constexpr std::ptrdiff_t m_unClientFlags = 0x1FD; // uint8
                constexpr std::ptrdiff_t m_AttributeList = 0x210; // CAttributeList
                constexpr std::ptrdiff_t m_NetworkedDynamicAttributes = 0x288; // CAttributeList
                constexpr std::ptrdiff_t m_szCustomName = 0x300; // char[161]
                constexpr std::ptrdiff_t m_szCustomNameOverride = 0x3A1; // char[161]
                constexpr std::ptrdiff_t m_bInitializedTags = 0x470; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Timeline__TimelineEvent_t {
                constexpr std::ptrdiff_t m_flTimeFromPrevious = 0x0; // float32
                constexpr std::ptrdiff_t m_EventOutflow = 0x8; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_IntervalTimer__CursorState_t {
                constexpr std::ptrdiff_t m_StartTime = 0x0; // GameTime_t
                constexpr std::ptrdiff_t m_EndTime = 0x4; // GameTime_t
                constexpr std::ptrdiff_t m_flWaitInterval = 0x8; // float32
                constexpr std::ptrdiff_t m_flWaitIntervalHigh = 0xC; // float32
                constexpr std::ptrdiff_t m_bCompleteOnNextWake = 0x10; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseRequirement {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            namespace CPulseCell_BaseState {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace OutflowWithRequirements_t {
                constexpr std::ptrdiff_t m_Connection = 0x0; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_DestinationFlowNodeID = 0x48; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_RequirementNodeIDs = 0x50; // CUtlVector<PulseDocNodeID_t>
                constexpr std::ptrdiff_t m_nCursorStateBlockIndex = 0x68; // CUtlVector<int32>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_IsRequirementValid {
            }
            // Parent: C_SoundEventEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_vecCornerPairsNetworked (SoundeventPathCornerPairNetworked_t)
            namespace C_SoundEventPathCornerEntity {
                constexpr std::ptrdiff_t m_vecCornerPairsNetworked = 0x6C0; // C_NetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
            }
            // Parent: C_BaseEntity
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_nMode (int)
            // NetworkVarNames: m_vBoxSize (Vector)
            // NetworkVarNames: m_bEnabled (bool)
            namespace C_InfoVisibilityBox {
                constexpr std::ptrdiff_t m_nMode = 0x5FC; // int32
                constexpr std::ptrdiff_t m_vBoxSize = 0x600; // Vector
                constexpr std::ptrdiff_t m_bEnabled = 0x60C; // bool
            }
            // Parent: CPlayer_ItemServices
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bHasDefuser (bool)
            // NetworkVarNames: m_bHasHelmet (bool)
            namespace CCSPlayer_ItemServices {
                constexpr std::ptrdiff_t m_bHasDefuser = 0x40; // bool
                constexpr std::ptrdiff_t m_bHasHelmet = 0x41; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CPulseCell_Value_Gradient {
                constexpr std::ptrdiff_t m_Gradient = 0x48; // CColorGradient
            }
            // Parent: 
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_timestamp (GameTime_t)
            // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
            namespace IntervalTimer {
                constexpr std::ptrdiff_t m_timestamp = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_nWorldGroupId = 0xC; // WorldGroupId_t
            }
            // Parent: 
            // Field count: 5
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
            // Parent: C_BaseEntity
            // Field count: 16
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
                constexpr std::ptrdiff_t m_bStartActive = 0x600; // bool
                constexpr std::ptrdiff_t m_flMaxSimulationTime = 0x604; // float32
                constexpr std::ptrdiff_t m_iszEffectName = 0x608; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PathNodes_Name = 0x610; // CUtlVector<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_flParticleSpacing = 0x628; // float32
                constexpr std::ptrdiff_t m_flSlack = 0x62C; // float32
                constexpr std::ptrdiff_t m_flRadius = 0x630; // float32
                constexpr std::ptrdiff_t m_ColorTint = 0x634; // Color
                constexpr std::ptrdiff_t m_nEffectState = 0x638; // int32
                constexpr std::ptrdiff_t m_iEffectIndex = 0x640; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_PathNodes_Position = 0x648; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_TangentIn = 0x660; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_TangentOut = 0x678; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_Color = 0x690; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_PinEnabled = 0x6A8; // C_NetworkUtlVectorBase<bool>
                constexpr std::ptrdiff_t m_PathNodes_RadiusScale = 0x6C0; // C_NetworkUtlVectorBase<float32>
            }
            // Parent: C_BaseCSGrenadeProjectile
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_nDecoyShotTick (int)
            namespace C_DecoyProjectile {
                constexpr std::ptrdiff_t m_nDecoyShotTick = 0x1450; // int32
                constexpr std::ptrdiff_t m_nClientLastKnownDecoyShotTick = 0x1454; // int32
                constexpr std::ptrdiff_t m_flTimeParticleEffectSpawn = 0x1478; // GameTime_t
            }
            // Parent: CAttributeManager
            // Field count: 3
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // NetworkVarNames: m_Item (CEconItemView)
            namespace C_AttributeContainer {
                constexpr std::ptrdiff_t m_Item = 0x50; // C_EconItemView
                constexpr std::ptrdiff_t m_iExternalItemProviderRegisteredToken = 0x4C8; // int32
                constexpr std::ptrdiff_t m_ullRegisteredAsItemID = 0x4D0; // uint64
            }
            // Parent: C_BasePlayerWeapon
            // Field count: 51
            //
            // Metadata:
            // MNetworkOutOfPVSUpdates
            // NetworkVarNames: m_iWeaponGameplayAnimState (WeaponGameplayAnimState)
            // NetworkVarNames: m_flWeaponGameplayAnimStateTimestamp (GameTime_t)
            // NetworkVarNames: m_flInspectCancelCompleteTime (GameTime_t)
            // NetworkVarNames: m_bInspectPending (bool)
            // NetworkVarNames: m_bInspectShouldLoop (bool)
            // NetworkVarNames: m_weaponMode (CSWeaponMode)
            // NetworkVarNames: m_fAccuracyPenalty (float)
            // NetworkVarNames: m_iRecoilIndex (int)
            // NetworkVarNames: m_flRecoilIndex (float)
            // NetworkVarNames: m_bBurstMode (bool)
            // NetworkVarNames: m_nPostponeFireReadyTicks (GameTick_t)
            // NetworkVarNames: m_flPostponeFireReadyFrac (float)
            // NetworkVarNames: m_bInReload (bool)
            // NetworkVarNames: m_flDroppedAtTime (GameTime_t)
            // NetworkVarNames: m_bIsHauledBack (bool)
            // NetworkVarNames: m_bSilencerOn (bool)
            // NetworkVarNames: m_flTimeSilencerSwitchComplete (GameTime_t)
            // NetworkVarNames: m_iOriginalTeamNumber (int)
            // NetworkVarNames: m_iMostRecentTeamNumber (int)
            // NetworkVarNames: m_bDroppedNearBuyZone (bool)
            // NetworkVarNames: m_nextPrevOwnerUseTime (GameTime_t)
            // NetworkVarNames: m_hPrevOwner (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_nDropTick (GameTick_t)
            // NetworkVarNames: m_bWasActiveWeaponWhenDropped (bool)
            // NetworkVarNames: m_fLastShotTime (GameTime_t)
            // NetworkVarNames: m_iIronSightMode (int)
            // NetworkVarNames: m_flWatTickOffset (float)
            // NetworkVarNames: m_flLastShakeTime (GameTime_t)
            namespace C_CSWeaponBase {
                constexpr std::ptrdiff_t m_iWeaponGameplayAnimState = 0x1970; // WeaponGameplayAnimState
                constexpr std::ptrdiff_t m_flWeaponGameplayAnimStateTimestamp = 0x1974; // GameTime_t
                constexpr std::ptrdiff_t m_flInspectCancelCompleteTime = 0x1978; // GameTime_t
                constexpr std::ptrdiff_t m_bInspectPending = 0x197C; // bool
                constexpr std::ptrdiff_t m_bInspectShouldLoop = 0x197D; // bool
                constexpr std::ptrdiff_t m_flCrosshairDistance = 0x19A8; // float32
                constexpr std::ptrdiff_t m_iAmmoLastCheck = 0x19AC; // int32
                constexpr std::ptrdiff_t m_nLastEmptySoundCmdNum = 0x19B0; // int32
                constexpr std::ptrdiff_t m_bFireOnEmpty = 0x19B4; // bool
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0x19B8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_weaponMode = 0x19E0; // CSWeaponMode
                constexpr std::ptrdiff_t m_flTurningInaccuracyDelta = 0x19E4; // float32
                constexpr std::ptrdiff_t m_vecTurningInaccuracyEyeDirLast = 0x19E8; // Vector
                constexpr std::ptrdiff_t m_flTurningInaccuracy = 0x19F4; // float32
                constexpr std::ptrdiff_t m_fAccuracyPenalty = 0x19F8; // float32
                constexpr std::ptrdiff_t m_flLastAccuracyUpdateTime = 0x19FC; // GameTime_t
                constexpr std::ptrdiff_t m_fAccuracySmoothedForZoom = 0x1A00; // float32
                constexpr std::ptrdiff_t m_iRecoilIndex = 0x1A04; // int32
                constexpr std::ptrdiff_t m_flRecoilIndex = 0x1A08; // float32
                constexpr std::ptrdiff_t m_bBurstMode = 0x1A0C; // bool
                constexpr std::ptrdiff_t m_flLastBurstModeChangeTime = 0x1A10; // GameTime_t
                constexpr std::ptrdiff_t m_nPostponeFireReadyTicks = 0x1A14; // GameTick_t
                constexpr std::ptrdiff_t m_flPostponeFireReadyFrac = 0x1A18; // float32
                constexpr std::ptrdiff_t m_bInReload = 0x1A1C; // bool
                constexpr std::ptrdiff_t m_flDroppedAtTime = 0x1A20; // GameTime_t
                constexpr std::ptrdiff_t m_bIsHauledBack = 0x1A24; // bool
                constexpr std::ptrdiff_t m_bSilencerOn = 0x1A25; // bool
                constexpr std::ptrdiff_t m_flTimeSilencerSwitchComplete = 0x1A28; // GameTime_t
                constexpr std::ptrdiff_t m_iOriginalTeamNumber = 0x1A2C; // int32
                constexpr std::ptrdiff_t m_iMostRecentTeamNumber = 0x1A30; // int32
                constexpr std::ptrdiff_t m_bDroppedNearBuyZone = 0x1A34; // bool
                constexpr std::ptrdiff_t m_flNextAttackRenderTimeOffset = 0x1A38; // float32
                constexpr std::ptrdiff_t m_bClearWeaponIdentifyingUGC = 0x1AD8; // bool
                constexpr std::ptrdiff_t m_bVisualsDataSet = 0x1AD9; // bool
                constexpr std::ptrdiff_t m_bUIWeapon = 0x1ADA; // bool
                constexpr std::ptrdiff_t m_nCustomEconReloadEventId = 0x1ADC; // int32
                constexpr std::ptrdiff_t m_nextPrevOwnerUseTime = 0x1AE8; // GameTime_t
                constexpr std::ptrdiff_t m_hPrevOwner = 0x1AEC; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_nDropTick = 0x1AF0; // GameTick_t
                constexpr std::ptrdiff_t m_bWasActiveWeaponWhenDropped = 0x1AF4; // bool
                constexpr std::ptrdiff_t m_donated = 0x1B14; // bool
                constexpr std::ptrdiff_t m_fLastShotTime = 0x1B18; // GameTime_t
                constexpr std::ptrdiff_t m_bWasOwnedByCT = 0x1B1C; // bool
                constexpr std::ptrdiff_t m_bWasOwnedByTerrorist = 0x1B1D; // bool
                constexpr std::ptrdiff_t m_flNextClientFireBulletTime = 0x1B20; // float32
                constexpr std::ptrdiff_t m_flNextClientFireBulletTime_Repredict = 0x1B24; // float32
                constexpr std::ptrdiff_t m_IronSightController = 0x1C90; // C_IronSightController
                constexpr std::ptrdiff_t m_iIronSightMode = 0x1D40; // int32
                constexpr std::ptrdiff_t m_flLastLOSTraceFailureTime = 0x1D58; // GameTime_t
                constexpr std::ptrdiff_t m_flWatTickOffset = 0x1DB8; // float32
                constexpr std::ptrdiff_t m_flLastShakeTime = 0x1DCC; // GameTime_t
            }
            // Parent: 
            // Field count: 7
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
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            namespace CPulseCursorFuncs {
            }
            // Parent: C_BaseEntity
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_flAutoExposureMin (float)
            // NetworkVarNames: m_flAutoExposureMax (float)
            // NetworkVarNames: m_flExposureAdaptationSpeedUp (float)
            // NetworkVarNames: m_flExposureAdaptationSpeedDown (float)
            // NetworkVarNames: m_flTonemapEVSmoothingRange (float)
            namespace C_TonemapController2 {
                constexpr std::ptrdiff_t m_flAutoExposureMin = 0x5F8; // float32
                constexpr std::ptrdiff_t m_flAutoExposureMax = 0x5FC; // float32
                constexpr std::ptrdiff_t m_flExposureAdaptationSpeedUp = 0x600; // float32
                constexpr std::ptrdiff_t m_flExposureAdaptationSpeedDown = 0x604; // float32
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x608; // float32
            }
            // Parent: 
            // Field count: 4
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
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseNodeDynamicOutflows_t__DynamicOutflow_t {
                constexpr std::ptrdiff_t m_OutflowID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_Connection = 0x8; // CPulse_OutflowConnection
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponMag7 {
            }
            // Parent: 
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nItemDefIndex (uint16)
            // NetworkVarNames: m_nCount (uint16)
            namespace WeaponPurchaseCount_t {
                constexpr std::ptrdiff_t m_nItemDefIndex = 0x30; // uint16
                constexpr std::ptrdiff_t m_nCount = 0x32; // uint16
            }
            // Parent: None
            // Field count: 0
            namespace CBasePulseGraphInstance {
            }
            // Parent: CBaseFilter
            // Field count: 3
            namespace FilterHealth {
                constexpr std::ptrdiff_t m_bAdrenalineActive = 0x650; // bool
                constexpr std::ptrdiff_t m_iHealthMin = 0x654; // int32
                constexpr std::ptrdiff_t m_iHealthMax = 0x658; // int32
            }
            // Parent: C_BaseClientUIEntity
            // Field count: 13
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
                constexpr std::ptrdiff_t m_bCheckCSSClasses = 0xEE8; // bool
                constexpr std::ptrdiff_t m_bIgnoreInput = 0x1060; // bool
                constexpr std::ptrdiff_t m_flWidth = 0x1064; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x1068; // float32
                constexpr std::ptrdiff_t m_flDPI = 0x106C; // float32
                constexpr std::ptrdiff_t m_flInteractDistance = 0x1070; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0x1074; // float32
                constexpr std::ptrdiff_t m_unOwnerContext = 0x1078; // uint32
                constexpr std::ptrdiff_t m_unHorizontalAlign = 0x107C; // uint32
                constexpr std::ptrdiff_t m_unVerticalAlign = 0x1080; // uint32
                constexpr std::ptrdiff_t m_unOrientation = 0x1084; // uint32
                constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0x1088; // bool
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x1090; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_GraphHook {
                constexpr std::ptrdiff_t m_HookName = 0x80; // PulseSymbol_t
            }
            // Parent: None
            // Field count: 0
            namespace SignatureOutflow_Resume {
            }
            // Parent: None
            // Field count: 0
            namespace CPathSimpleAPI {
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace C_InfoLadderDismount {
            }
            // Parent: CBaseAnimGraph
            // Field count: 13
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
                constexpr std::ptrdiff_t m_bActive = 0x1170; // bool
                constexpr std::ptrdiff_t m_bWasActive = 0x1171; // bool
                constexpr std::ptrdiff_t m_flEndTime = 0x1174; // GameTime_t
                constexpr std::ptrdiff_t m_flStartTime = 0x1178; // GameTime_t
                constexpr std::ptrdiff_t m_flStartTimeInCommentary = 0x117C; // float32
                constexpr std::ptrdiff_t m_iszCommentaryFile = 0x1180; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTitle = 0x1188; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSpeakers = 0x1190; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iNodeNumber = 0x1198; // int32
                constexpr std::ptrdiff_t m_iNodeNumberMax = 0x119C; // int32
                constexpr std::ptrdiff_t m_bListenedTo = 0x11A0; // bool
                constexpr std::ptrdiff_t m_hViewPosition = 0x11B0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bRestartAfterRestore = 0x11B4; // bool
            }
            // Parent: C_Sprite
            // Field count: 0
            namespace CSpriteOriented {
            }
            // Parent: 
            // Field count: 13
            //
            // Metadata:
            // NetworkVarNames: m_nModelID (int32)
            // NetworkVarNames: m_hMaterialBase (HMaterialStrong)
            // NetworkVarNames: m_hMaterialDamageOverlay (HMaterialStrong)
            // NetworkVarNames: m_solid (ShardSolid_t)
            // NetworkVarNames: m_vecPanelSize (Vector2D)
            // NetworkVarNames: m_vecStressPositionA (Vector2D)
            // NetworkVarNames: m_vecStressPositionB (Vector2D)
            // NetworkVarNames: m_vecPanelVertices (Vector2D)
            // NetworkVarNames: m_vInitialPanelVertices (Vector4D)
            // NetworkVarNames: m_flGlassHalfThickness (float)
            // NetworkVarNames: m_bHasParent (bool)
            // NetworkVarNames: m_bParentFrozen (bool)
            // NetworkVarNames: m_SurfacePropStringToken (CUtlStringToken)
            namespace shard_model_desc_t {
                constexpr std::ptrdiff_t m_nModelID = 0x8; // int32
                constexpr std::ptrdiff_t m_hMaterialBase = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hMaterialDamageOverlay = 0x18; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_solid = 0x20; // ShardSolid_t
                constexpr std::ptrdiff_t m_vecPanelSize = 0x24; // Vector2D
                constexpr std::ptrdiff_t m_vecStressPositionA = 0x2C; // Vector2D
                constexpr std::ptrdiff_t m_vecStressPositionB = 0x34; // Vector2D
                constexpr std::ptrdiff_t m_vecPanelVertices = 0x40; // C_NetworkUtlVectorBase<Vector2D>
                constexpr std::ptrdiff_t m_vInitialPanelVertices = 0x58; // C_NetworkUtlVectorBase<Vector4D>
                constexpr std::ptrdiff_t m_flGlassHalfThickness = 0x70; // float32
                constexpr std::ptrdiff_t m_bHasParent = 0x74; // bool
                constexpr std::ptrdiff_t m_bParentFrozen = 0x75; // bool
                constexpr std::ptrdiff_t m_SurfacePropStringToken = 0x78; // CUtlStringToken
            }
            // Parent: C_CS2WeaponModuleBase
            // Field count: 2
            namespace C_KeychainModule {
                constexpr std::ptrdiff_t m_nKeychainDefID = 0x1160; // uint32
                constexpr std::ptrdiff_t m_nKeychainSeed = 0x1164; // uint32
            }
            // Parent: C_BaseModelEntity
            // Field count: 1
            namespace CFuncWater {
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0xEB0; // CBuoyancyHelper
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CCSPlayer_GlowServices {
            }
            // Parent: None
            // Field count: 1
            namespace CCSGameModeRules {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
            }
            // Parent: C_BaseCSGrenade
            // Field count: 0
            namespace C_Flashbang {
            }
            // Parent: C_PointClientUIWorldPanel
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_messageText (char)
            namespace C_PointClientUIWorldTextPanel {
                constexpr std::ptrdiff_t m_messageText = 0x1100; // char[512]
            }
            // Parent: CPlayer_WaterServices
            // Field count: 3
            namespace CCSPlayer_WaterServices {
                constexpr std::ptrdiff_t m_flWaterJumpTime = 0x40; // float32
                constexpr std::ptrdiff_t m_vecWaterJumpVel = 0x44; // Vector
                constexpr std::ptrdiff_t m_flSwimSoundTime = 0x50; // float32
            }
            // Parent: C_CSPlayerPawnBase
            // Field count: 1
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
            namespace C_CSObserverPawn {
                constexpr std::ptrdiff_t m_hDetectParentChange = 0x1668; // CEntityHandle
            }
            // Parent: None
            // Field count: 3
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
            // Parent: C_BaseModelEntity
            // Field count: 9
            //
            // Metadata:
            // NetworkVarNames: m_vecLadderDir (Vector)
            // NetworkVarNames: m_vecPlayerMountPositionTop (VectorWS)
            // NetworkVarNames: m_vecPlayerMountPositionBottom (VectorWS)
            // NetworkVarNames: m_flAutoRideSpeed (float)
            // NetworkVarNames: m_bFakeLadder (bool)
            namespace C_FuncLadder {
                constexpr std::ptrdiff_t m_vecLadderDir = 0xEB0; // Vector
                constexpr std::ptrdiff_t m_Dismounts = 0xEC0; // CUtlVector<CHandle<C_InfoLadderDismount>>
                constexpr std::ptrdiff_t m_vecLocalTop = 0xED8; // Vector
                constexpr std::ptrdiff_t m_vecPlayerMountPositionTop = 0xEE4; // VectorWS
                constexpr std::ptrdiff_t m_vecPlayerMountPositionBottom = 0xEF0; // VectorWS
                constexpr std::ptrdiff_t m_flAutoRideSpeed = 0xEFC; // float32
                constexpr std::ptrdiff_t m_bDisabled = 0xF00; // bool
                constexpr std::ptrdiff_t m_bFakeLadder = 0xF01; // bool
                constexpr std::ptrdiff_t m_bHasSlack = 0xF02; // bool
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponMP5SD {
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            namespace C_World {
            }
            // Parent: C_CSGO_TeamSelectCharacterPosition
            // Field count: 0
            namespace C_CSGO_TeamSelectCounterTerroristPosition {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponGalilAR {
            }
            // Parent: CPlayer_CameraServices
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_iFOV (uint32)
            // NetworkVarNames: m_iFOVStart (uint32)
            // NetworkVarNames: m_flFOVTime (GameTime_t)
            // NetworkVarNames: m_flFOVRate (float32)
            // NetworkVarNames: m_hZoomOwner (CHandle<CBaseEntity>)
            namespace CCSPlayerBase_CameraServices {
                constexpr std::ptrdiff_t m_iFOV = 0x288; // uint32
                constexpr std::ptrdiff_t m_iFOVStart = 0x28C; // uint32
                constexpr std::ptrdiff_t m_flFOVTime = 0x290; // GameTime_t
                constexpr std::ptrdiff_t m_flFOVRate = 0x294; // float32
                constexpr std::ptrdiff_t m_hZoomOwner = 0x298; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flLastShotFOV = 0x29C; // float32
            }
            // Parent: None
            // Field count: 0
            namespace C_TeamplayRules {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_BaseEntrypoint {
                constexpr std::ptrdiff_t m_EntryChunk = 0x48; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_RegisterMap = 0x50; // PulseRegisterMap_t
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponSG556 {
            }
            // Parent: C_CSPlayerPawnBase
            // Field count: 127
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
            // MNetworkIncludeByName
            // NetworkVarNames: m_flHealthShotBoostExpirationTime (GameTime_t)
            // NetworkVarNames: m_bHasFemaleVoice (bool)
            // NetworkVarNames: m_szLastPlaceName (char)
            // NetworkVarNames: m_bInBuyZone (bool)
            // NetworkVarNames: m_aimPunchAngle (QAngle)
            // NetworkVarNames: m_aimPunchAngleVel (QAngle)
            // NetworkVarNames: m_aimPunchTickBase (GameTick_t)
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
            // MNetworkReplayCompatField
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
            // NetworkVarNames: m_flFlinchStack (float)
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
            // NetworkVarNames: m_PredictedDamageTags (PredictedDamageTag_t)
            // NetworkVarNames: m_fImmuneToGunGameDamageTime (GameTime_t)
            // NetworkVarNames: m_bGunGameImmunity (bool)
            // NetworkVarNames: m_fMolotovDamageTime (float)
            namespace C_CSPlayerPawn {
                constexpr std::ptrdiff_t m_pBulletServices = 0x1678; // CCSPlayer_BulletServices*
                constexpr std::ptrdiff_t m_pHostageServices = 0x1680; // CCSPlayer_HostageServices*
                constexpr std::ptrdiff_t m_pBuyServices = 0x1688; // CCSPlayer_BuyServices*
                constexpr std::ptrdiff_t m_pGlowServices = 0x1690; // CCSPlayer_GlowServices*
                constexpr std::ptrdiff_t m_pActionTrackingServices = 0x1698; // CCSPlayer_ActionTrackingServices*
                constexpr std::ptrdiff_t m_pDamageReactServices = 0x16A0; // CCSPlayer_DamageReactServices*
                constexpr std::ptrdiff_t m_flHealthShotBoostExpirationTime = 0x16A8; // GameTime_t
                constexpr std::ptrdiff_t m_flLastFiredWeaponTime = 0x16AC; // GameTime_t
                constexpr std::ptrdiff_t m_bHasFemaleVoice = 0x16B0; // bool
                constexpr std::ptrdiff_t m_flLandingTimeSeconds = 0x16B4; // float32
                constexpr std::ptrdiff_t m_flOldFallVelocity = 0x16B8; // float32
                constexpr std::ptrdiff_t m_szLastPlaceName = 0x16BC; // char[18]
                constexpr std::ptrdiff_t m_bPrevDefuser = 0x16CE; // bool
                constexpr std::ptrdiff_t m_bPrevHelmet = 0x16CF; // bool
                constexpr std::ptrdiff_t m_nPrevArmorVal = 0x16D0; // int32
                constexpr std::ptrdiff_t m_nPrevGrenadeAmmoCount = 0x16D4; // int32
                constexpr std::ptrdiff_t m_unPreviousWeaponHash = 0x16D8; // uint32
                constexpr std::ptrdiff_t m_unWeaponHash = 0x16DC; // uint32
                constexpr std::ptrdiff_t m_bInBuyZone = 0x16E0; // bool
                constexpr std::ptrdiff_t m_bPreviouslyInBuyZone = 0x16E1; // bool
                constexpr std::ptrdiff_t m_aimPunchAngle = 0x16E4; // QAngle
                constexpr std::ptrdiff_t m_aimPunchAngleVel = 0x16F0; // QAngle
                constexpr std::ptrdiff_t m_aimPunchTickBase = 0x16FC; // GameTick_t
                constexpr std::ptrdiff_t m_aimPunchTickFraction = 0x1700; // float32
                constexpr std::ptrdiff_t m_aimPunchCache = 0x1708; // CUtlVector<QAngle>
                constexpr std::ptrdiff_t m_bInLanding = 0x1728; // bool
                constexpr std::ptrdiff_t m_flLandingStartTime = 0x172C; // float32
                constexpr std::ptrdiff_t m_bInHostageRescueZone = 0x1730; // bool
                constexpr std::ptrdiff_t m_bInBombZone = 0x1731; // bool
                constexpr std::ptrdiff_t m_bIsBuyMenuOpen = 0x1732; // bool
                constexpr std::ptrdiff_t m_flTimeOfLastInjury = 0x1734; // GameTime_t
                constexpr std::ptrdiff_t m_flNextSprayDecalTime = 0x1738; // GameTime_t
                constexpr std::ptrdiff_t m_iRetakesOffering = 0x1890; // int32
                constexpr std::ptrdiff_t m_iRetakesOfferingCard = 0x1894; // int32
                constexpr std::ptrdiff_t m_bRetakesHasDefuseKit = 0x1898; // bool
                constexpr std::ptrdiff_t m_bRetakesMVPLastRound = 0x1899; // bool
                constexpr std::ptrdiff_t m_iRetakesMVPBoostItem = 0x189C; // int32
                constexpr std::ptrdiff_t m_RetakesMVPBoostExtraUtility = 0x18A0; // loadout_slot_t
                constexpr std::ptrdiff_t m_bNeedToReApplyGloves = 0x18A5; // bool
                constexpr std::ptrdiff_t m_EconGloves = 0x18A8; // C_EconItemView
                constexpr std::ptrdiff_t m_nEconGlovesChanged = 0x1D20; // uint8
                constexpr std::ptrdiff_t m_bMustSyncRagdollState = 0x1D21; // bool
                constexpr std::ptrdiff_t m_nRagdollDamageBone = 0x1D24; // int32
                constexpr std::ptrdiff_t m_vRagdollDamageForce = 0x1D28; // Vector
                constexpr std::ptrdiff_t m_vRagdollDamagePosition = 0x1D34; // Vector
                constexpr std::ptrdiff_t m_szRagdollDamageWeaponName = 0x1D40; // char[64]
                constexpr std::ptrdiff_t m_bRagdollDamageHeadshot = 0x1D80; // bool
                constexpr std::ptrdiff_t m_vRagdollServerOrigin = 0x1D84; // Vector
                constexpr std::ptrdiff_t m_lastLandTime = 0x2400; // GameTime_t
                constexpr std::ptrdiff_t m_bOnGroundLastTick = 0x2404; // bool
                constexpr std::ptrdiff_t m_hHudModelArms = 0x2420; // CHandle<C_CS2HudModelArms>
                constexpr std::ptrdiff_t m_qDeathEyeAngles = 0x2424; // QAngle
                constexpr std::ptrdiff_t m_bSkipOneHeadConstraintUpdate = 0x2430; // bool
                constexpr std::ptrdiff_t m_bLeftHanded = 0x2431; // bool
                constexpr std::ptrdiff_t m_fSwitchedHandednessTime = 0x2434; // GameTime_t
                constexpr std::ptrdiff_t m_flViewmodelOffsetX = 0x2438; // float32
                constexpr std::ptrdiff_t m_flViewmodelOffsetY = 0x243C; // float32
                constexpr std::ptrdiff_t m_flViewmodelOffsetZ = 0x2440; // float32
                constexpr std::ptrdiff_t m_flViewmodelFOV = 0x2444; // float32
                constexpr std::ptrdiff_t m_vecPlayerPatchEconIndices = 0x2448; // uint32[5]
                constexpr std::ptrdiff_t m_GunGameImmunityColor = 0x2480; // Color
                constexpr std::ptrdiff_t m_vecBulletHitModels = 0x24D0; // CUtlVector<C_BulletHitModel*>
                constexpr std::ptrdiff_t m_bIsWalking = 0x24E8; // bool
                constexpr std::ptrdiff_t m_thirdPersonHeading = 0x24F0; // QAngle
                constexpr std::ptrdiff_t m_flSlopeDropOffset = 0x2580; // float32
                constexpr std::ptrdiff_t m_flSlopeDropHeight = 0x25F8; // float32
                constexpr std::ptrdiff_t m_vHeadConstraintOffset = 0x2670; // Vector
                constexpr std::ptrdiff_t m_entitySpottedState = 0x2700; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_bIsScoped = 0x2718; // bool
                constexpr std::ptrdiff_t m_bResumeZoom = 0x2719; // bool
                constexpr std::ptrdiff_t m_bIsDefusing = 0x271A; // bool
                constexpr std::ptrdiff_t m_bIsGrabbingHostage = 0x271B; // bool
                constexpr std::ptrdiff_t m_iBlockingUseActionInProgress = 0x271C; // CSPlayerBlockingUseAction_t
                constexpr std::ptrdiff_t m_flEmitSoundTime = 0x2720; // GameTime_t
                constexpr std::ptrdiff_t m_bInNoDefuseArea = 0x2724; // bool
                constexpr std::ptrdiff_t m_nWhichBombZone = 0x2728; // int32
                constexpr std::ptrdiff_t m_iShotsFired = 0x272C; // int32
                constexpr std::ptrdiff_t m_flFlinchStack = 0x2730; // float32
                constexpr std::ptrdiff_t m_flVelocityModifier = 0x2734; // float32
                constexpr std::ptrdiff_t m_flHitHeading = 0x2738; // float32
                constexpr std::ptrdiff_t m_nHitBodyPart = 0x273C; // int32
                constexpr std::ptrdiff_t m_bWaitForNoAttack = 0x2740; // bool
                constexpr std::ptrdiff_t m_ignoreLadderJumpTime = 0x2744; // float32
                constexpr std::ptrdiff_t m_bKilledByHeadshot = 0x2749; // bool
                constexpr std::ptrdiff_t m_ArmorValue = 0x274C; // int32
                constexpr std::ptrdiff_t m_unCurrentEquipmentValue = 0x2750; // uint16
                constexpr std::ptrdiff_t m_unRoundStartEquipmentValue = 0x2752; // uint16
                constexpr std::ptrdiff_t m_unFreezetimeEndEquipmentValue = 0x2754; // uint16
                constexpr std::ptrdiff_t m_nLastKillerIndex = 0x2758; // CEntityIndex
                constexpr std::ptrdiff_t m_bOldIsScoped = 0x275C; // bool
                constexpr std::ptrdiff_t m_bHasDeathInfo = 0x275D; // bool
                constexpr std::ptrdiff_t m_flDeathInfoTime = 0x2760; // float32
                constexpr std::ptrdiff_t m_vecDeathInfoOrigin = 0x2764; // Vector
                constexpr std::ptrdiff_t m_grenadeParameterStashTime = 0x2774; // GameTime_t
                constexpr std::ptrdiff_t m_bGrenadeParametersStashed = 0x2778; // bool
                constexpr std::ptrdiff_t m_angStashedShootAngles = 0x277C; // QAngle
                constexpr std::ptrdiff_t m_vecStashedGrenadeThrowPosition = 0x2788; // Vector
                constexpr std::ptrdiff_t m_vecStashedVelocity = 0x2794; // Vector
                constexpr std::ptrdiff_t m_angShootAngleHistory = 0x27A0; // QAngle[2]
                constexpr std::ptrdiff_t m_vecThrowPositionHistory = 0x27B8; // Vector[2]
                constexpr std::ptrdiff_t m_vecVelocityHistory = 0x27D0; // Vector[2]
                constexpr std::ptrdiff_t m_PredictedDamageTags = 0x27E8; // C_UtlVectorEmbeddedNetworkVar<PredictedDamageTag_t>
                constexpr std::ptrdiff_t m_nPrevHighestReceivedDamageTagTick = 0x2850; // GameTick_t
                constexpr std::ptrdiff_t m_nHighestAppliedDamageTagTick = 0x2854; // int32
                constexpr std::ptrdiff_t m_bShouldAutobuyDMWeapons = 0x3D8C; // bool
                constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTime = 0x3D90; // GameTime_t
                constexpr std::ptrdiff_t m_bGunGameImmunity = 0x3D94; // bool
                constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTimeLast = 0x3D98; // GameTime_t
                constexpr std::ptrdiff_t m_fMolotovDamageTime = 0x3D9C; // float32
                constexpr std::ptrdiff_t m_vecLastAliveLocalVelocity = 0x3DA4; // Vector
                constexpr std::ptrdiff_t m_fRenderingClipPlane = 0x3DB0; // float32[4]
                constexpr std::ptrdiff_t m_nLastClipPlaneSetupFrame = 0x3DC0; // int32
                constexpr std::ptrdiff_t m_vecLastClipCameraPos = 0x3DC4; // Vector
                constexpr std::ptrdiff_t m_vecLastClipCameraForward = 0x3DD0; // Vector
                constexpr std::ptrdiff_t m_bClipHitStaticWorld = 0x3DDC; // bool
                constexpr std::ptrdiff_t m_bCachedPlaneIsValid = 0x3DDD; // bool
                constexpr std::ptrdiff_t m_pClippingWeapon = 0x3DE0; // C_CSWeaponBase*
                constexpr std::ptrdiff_t m_nPlayerInfernoBodyFx = 0x3DE8; // ParticleIndex_t
                constexpr std::ptrdiff_t m_angEyeAngles = 0x3DF0; // QAngle
                constexpr std::ptrdiff_t m_arrOldEyeAnglesTimes = 0x3E80; // GameTime_t[4]
                constexpr std::ptrdiff_t m_arrOldEyeAngles = 0x3E90; // QAngle[4]
                constexpr std::ptrdiff_t m_angEyeAnglesVelocity = 0x3EC0; // QAngle
                constexpr std::ptrdiff_t m_iIDEntIndex = 0x3ECC; // CEntityIndex
                constexpr std::ptrdiff_t m_delayTargetIDTimer = 0x3ED0; // CountdownTimer
                constexpr std::ptrdiff_t m_iTargetItemEntIdx = 0x3EE8; // CEntityIndex
                constexpr std::ptrdiff_t m_iOldIDEntIndex = 0x3EEC; // CEntityIndex
                constexpr std::ptrdiff_t m_holdTargetIDTimer = 0x3EF0; // CountdownTimer
            }
            // Parent: C_CSGO_TeamIntroCharacterPosition
            // Field count: 0
            namespace C_CSGO_TeamIntroTerroristPosition {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorCanvasItemSpecKV3
            namespace CPulseCell_WaitForCursorsWithTagBase {
                constexpr std::ptrdiff_t m_nCursorsAllowedToWait = 0x48; // int32
                constexpr std::ptrdiff_t m_WaitComplete = 0x50; // CPulse_ResumePoint
            }
            // Parent: C_BaseCombatCharacter
            // Field count: 23
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
                constexpr std::ptrdiff_t m_entitySpottedState = 0x13F0; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_leader = 0x1408; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_reuseTimer = 0x1410; // CountdownTimer
                constexpr std::ptrdiff_t m_vel = 0x1428; // Vector
                constexpr std::ptrdiff_t m_isRescued = 0x1434; // bool
                constexpr std::ptrdiff_t m_jumpedThisFrame = 0x1435; // bool
                constexpr std::ptrdiff_t m_nHostageState = 0x1438; // int32
                constexpr std::ptrdiff_t m_bHandsHaveBeenCut = 0x143C; // bool
                constexpr std::ptrdiff_t m_hHostageGrabber = 0x1440; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_fLastGrabTime = 0x1444; // GameTime_t
                constexpr std::ptrdiff_t m_vecGrabbedPos = 0x1448; // Vector
                constexpr std::ptrdiff_t m_flRescueStartTime = 0x1454; // GameTime_t
                constexpr std::ptrdiff_t m_flGrabSuccessTime = 0x1458; // GameTime_t
                constexpr std::ptrdiff_t m_flDropStartTime = 0x145C; // GameTime_t
                constexpr std::ptrdiff_t m_flDeadOrRescuedTime = 0x1460; // GameTime_t
                constexpr std::ptrdiff_t m_blinkTimer = 0x1468; // CountdownTimer
                constexpr std::ptrdiff_t m_lookAt = 0x1480; // Vector
                constexpr std::ptrdiff_t m_lookAroundTimer = 0x1490; // CountdownTimer
                constexpr std::ptrdiff_t m_isInit = 0x14A8; // bool
                constexpr std::ptrdiff_t m_eyeAttachment = 0x14A9; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_chestAttachment = 0x14AA; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_pPredictionOwner = 0x14B0; // CBasePlayerController*
                constexpr std::ptrdiff_t m_fNewestAlphaThinkTime = 0x14B8; // GameTime_t
            }
            // Parent: 
            // Field count: 14
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
            // Parent: 
            // Field count: 36
            //
            // Metadata:
            // NetworkVarNames: m_hParent (CGameSceneNodeHandle)
            // NetworkVarNames: m_vecOrigin (CNetworkOriginCellCoordQuantizedVector)
            // NetworkVarNames: m_angRotation (QAngle)
            // NetworkVarNames: m_flScale (float)
            // NetworkVarNames: m_name (CUtlStringToken)
            // NetworkVarNames: m_hierarchyAttachName (CUtlStringToken)
            namespace CGameSceneNode {
                constexpr std::ptrdiff_t m_nodeToWorld = 0x10; // CTransformWS
                constexpr std::ptrdiff_t m_pOwner = 0x30; // CEntityInstance*
                constexpr std::ptrdiff_t m_pParent = 0x38; // CGameSceneNode*
                constexpr std::ptrdiff_t m_pChild = 0x40; // CGameSceneNode*
                constexpr std::ptrdiff_t m_pNextSibling = 0x48; // CGameSceneNode*
                constexpr std::ptrdiff_t m_hParent = 0x78; // CGameSceneNodeHandle
                constexpr std::ptrdiff_t m_vecOrigin = 0x88; // CNetworkOriginCellCoordQuantizedVector
                constexpr std::ptrdiff_t m_angRotation = 0xC0; // QAngle
                constexpr std::ptrdiff_t m_flScale = 0xCC; // float32
                constexpr std::ptrdiff_t m_vecAbsOrigin = 0xD0; // VectorWS
                constexpr std::ptrdiff_t m_angAbsRotation = 0xDC; // QAngle
                constexpr std::ptrdiff_t m_flAbsScale = 0xE8; // float32
                constexpr std::ptrdiff_t m_vecWrappedLocalOrigin = 0xEC; // Vector
                constexpr std::ptrdiff_t m_angWrappedLocalRotation = 0xF8; // QAngle
                constexpr std::ptrdiff_t m_flWrappedScale = 0x104; // float32
                constexpr std::ptrdiff_t m_nParentAttachmentOrBone = 0x108; // int16
                constexpr std::ptrdiff_t m_bDebugAbsOriginChanges = 0x10A; // bool
                constexpr std::ptrdiff_t m_bDormant = 0x10B; // bool
                constexpr std::ptrdiff_t m_bForceParentToBeNetworked = 0x10C; // bool
                constexpr std::ptrdiff_t m_bDirtyHierarchy = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bDirtyBoneMergeInfo = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNetworkedPositionChanged = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNetworkedAnglesChanged = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNetworkedScaleChanged = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bWillBeCallingPostDataUpdate = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bBoneMergeFlex = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_nLatchAbsOrigin = 0x0; // bitfield:2
                constexpr std::ptrdiff_t m_bDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_nHierarchicalDepth = 0x10F; // uint8
                constexpr std::ptrdiff_t m_nHierarchyType = 0x110; // uint8
                constexpr std::ptrdiff_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0x111; // uint8
                constexpr std::ptrdiff_t m_name = 0x114; // CUtlStringToken
                constexpr std::ptrdiff_t m_hierarchyAttachName = 0x158; // CUtlStringToken
                constexpr std::ptrdiff_t m_flZOffset = 0x15C; // float32
                constexpr std::ptrdiff_t m_flClientLocalScale = 0x160; // float32
                constexpr std::ptrdiff_t m_vRenderOrigin = 0x164; // Vector
            }
            // Parent: CPlayerPawnComponent
            // Field count: 6
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
            // Parent: C_BaseEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bDisabled (bool)
            // NetworkVarNames: m_iszSoundAreaType (string_t)
            // NetworkVarNames: m_vPos (Vector)
            namespace C_SoundAreaEntityBase {
                constexpr std::ptrdiff_t m_bDisabled = 0x5F8; // bool
                constexpr std::ptrdiff_t m_bWasEnabled = 0x600; // bool
                constexpr std::ptrdiff_t m_iszSoundAreaType = 0x608; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vPos = 0x610; // Vector
            }
            // Parent: C_BaseEntity
            // Field count: 6
            //
            // Metadata:
            // NetworkVarNames: m_flVisibilityStrength (float)
            // NetworkVarNames: m_flFogDistanceMultiplier (float)
            // NetworkVarNames: m_flFogMaxDensityMultiplier (float)
            // NetworkVarNames: m_flFadeTime (float)
            // NetworkVarNames: m_bStartDisabled (bool)
            // NetworkVarNames: m_bIsEnabled (bool)
            namespace C_PlayerVisibility {
                constexpr std::ptrdiff_t m_flVisibilityStrength = 0x5F8; // float32
                constexpr std::ptrdiff_t m_flFogDistanceMultiplier = 0x5FC; // float32
                constexpr std::ptrdiff_t m_flFogMaxDensityMultiplier = 0x600; // float32
                constexpr std::ptrdiff_t m_flFadeTime = 0x604; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x608; // bool
                constexpr std::ptrdiff_t m_bIsEnabled = 0x609; // bool
            }
            // Parent: None
            // Field count: 3
            namespace CAttributeManager__cached_attribute_float_t {
                constexpr std::ptrdiff_t flIn = 0x0; // float32
                constexpr std::ptrdiff_t iAttribHook = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t flOut = 0x10; // float32
            }
            // Parent: C_EconEntity
            // Field count: 7
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
                constexpr std::ptrdiff_t m_nNextPrimaryAttackTick = 0x18E0; // GameTick_t
                constexpr std::ptrdiff_t m_flNextPrimaryAttackTickRatio = 0x18E4; // float32
                constexpr std::ptrdiff_t m_nNextSecondaryAttackTick = 0x18E8; // GameTick_t
                constexpr std::ptrdiff_t m_flNextSecondaryAttackTickRatio = 0x18EC; // float32
                constexpr std::ptrdiff_t m_iClip1 = 0x18F0; // int32
                constexpr std::ptrdiff_t m_iClip2 = 0x18F4; // int32
                constexpr std::ptrdiff_t m_pReserveAmmo = 0x18F8; // int32[2]
            }
            // Parent: C_BaseEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_iCurrentMaxRagdollCount (int8)
            namespace CRagdollManager {
                constexpr std::ptrdiff_t m_iCurrentMaxRagdollCount = 0x5F8; // int8
            }
            // Parent: C_BaseCSGrenade
            // Field count: 0
            namespace C_HEGrenade {
            }
            // Parent: C_BaseModelEntity
            // Field count: 12
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
                constexpr std::ptrdiff_t m_hSkyMaterial = 0xEB0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hSkyMaterialLightingOnly = 0xEB8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_bStartDisabled = 0xEC0; // bool
                constexpr std::ptrdiff_t m_vTintColor = 0xEC1; // Color
                constexpr std::ptrdiff_t m_vTintColorLightingOnly = 0xEC5; // Color
                constexpr std::ptrdiff_t m_flBrightnessScale = 0xECC; // float32
                constexpr std::ptrdiff_t m_nFogType = 0xED0; // int32
                constexpr std::ptrdiff_t m_flFogMinStart = 0xED4; // float32
                constexpr std::ptrdiff_t m_flFogMinEnd = 0xED8; // float32
                constexpr std::ptrdiff_t m_flFogMaxStart = 0xEDC; // float32
                constexpr std::ptrdiff_t m_flFogMaxEnd = 0xEE0; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0xEE4; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_InvokeBinding {
                constexpr std::ptrdiff_t m_RegisterMap = 0x0; // PulseRegisterMap_t
                constexpr std::ptrdiff_t m_FuncName = 0x30; // PulseSymbol_t
                constexpr std::ptrdiff_t m_nCellIndex = 0x40; // PulseRuntimeCellIndex_t
                constexpr std::ptrdiff_t m_nSrcChunk = 0x44; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nSrcInstruction = 0x48; // int32
            }
            // Parent: C_BaseEntity
            // Field count: 11
            //
            // Metadata:
            // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
            // NetworkVarNames: m_fDirectionVariation (float)
            // NetworkVarNames: m_fSpeedVariation (float)
            // NetworkVarNames: m_fTurbulence (float)
            // NetworkVarNames: m_fVolumeHalfExtentXY (float)
            // NetworkVarNames: m_fVolumeHalfExtentZ (float)
            // NetworkVarNames: m_nVolumeResolutionXY (int)
            // NetworkVarNames: m_nVolumeResolutionZ (int)
            // NetworkVarNames: m_nClipmapLevels (int)
            // NetworkVarNames: m_bIsMaster (bool)
            namespace C_EnvWindController {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x5F8; // C_EnvWindShared
                constexpr std::ptrdiff_t m_fDirectionVariation = 0x6F0; // float32
                constexpr std::ptrdiff_t m_fSpeedVariation = 0x6F4; // float32
                constexpr std::ptrdiff_t m_fTurbulence = 0x6F8; // float32
                constexpr std::ptrdiff_t m_fVolumeHalfExtentXY = 0x6FC; // float32
                constexpr std::ptrdiff_t m_fVolumeHalfExtentZ = 0x700; // float32
                constexpr std::ptrdiff_t m_nVolumeResolutionXY = 0x704; // int32
                constexpr std::ptrdiff_t m_nVolumeResolutionZ = 0x708; // int32
                constexpr std::ptrdiff_t m_nClipmapLevels = 0x70C; // int32
                constexpr std::ptrdiff_t m_bIsMaster = 0x710; // bool
                constexpr std::ptrdiff_t m_bFirstTime = 0x711; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_nTotalPausedTicks (int)
            // NetworkVarNames: m_nPauseStartTick (int)
            // NetworkVarNames: m_bGamePaused (bool)
            namespace C_GameRules {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_nTotalPausedTicks = 0x30; // int32
                constexpr std::ptrdiff_t m_nPauseStartTick = 0x34; // int32
                constexpr std::ptrdiff_t m_bGamePaused = 0x38; // bool
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponMAC10 {
            }
            // Parent: C_BaseEntity
            // Field count: 14
            namespace C_CSGO_MapPreviewCameraPath {
                constexpr std::ptrdiff_t m_flZFar = 0x5F8; // float32
                constexpr std::ptrdiff_t m_flZNear = 0x5FC; // float32
                constexpr std::ptrdiff_t m_bLoop = 0x600; // bool
                constexpr std::ptrdiff_t m_bVerticalFOV = 0x601; // bool
                constexpr std::ptrdiff_t m_bConstantSpeed = 0x602; // bool
                constexpr std::ptrdiff_t m_flDuration = 0x604; // float32
                constexpr std::ptrdiff_t m_flPathLength = 0x648; // float32
                constexpr std::ptrdiff_t m_flPathDuration = 0x64C; // float32
                constexpr std::ptrdiff_t m_bDofEnabled = 0x664; // bool
                constexpr std::ptrdiff_t m_flDofNearBlurry = 0x668; // float32
                constexpr std::ptrdiff_t m_flDofNearCrisp = 0x66C; // float32
                constexpr std::ptrdiff_t m_flDofFarCrisp = 0x670; // float32
                constexpr std::ptrdiff_t m_flDofFarBlurry = 0x674; // float32
                constexpr std::ptrdiff_t m_flDofTiltToGround = 0x678; // float32
            }
            // Parent: C_ModelPointEntity
            // Field count: 17
            //
            // Metadata:
            // NetworkVarNames: m_messageText (char)
            // NetworkVarNames: m_FontName (char)
            // NetworkVarNames: m_BackgroundMaterialName (char)
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_bFullbright (bool)
            // NetworkVarNames: m_flWorldUnitsPerPx (float)
            // NetworkVarNames: m_flFontSize (float)
            // NetworkVarNames: m_flDepthOffset (float)
            // NetworkVarNames: m_bDrawBackground (bool)
            // NetworkVarNames: m_flBackgroundBorderWidth (float)
            // NetworkVarNames: m_flBackgroundBorderHeight (float)
            // NetworkVarNames: m_flBackgroundWorldToUV (float)
            // NetworkVarNames: m_Color (Color)
            // NetworkVarNames: m_nJustifyHorizontal (PointWorldTextJustifyHorizontal_t)
            // NetworkVarNames: m_nJustifyVertical (PointWorldTextJustifyVertical_t)
            // NetworkVarNames: m_nReorientMode (PointWorldTextReorientMode_t)
            namespace C_PointWorldText {
                constexpr std::ptrdiff_t m_bForceRecreateNextUpdate = 0xEB8; // bool
                constexpr std::ptrdiff_t m_messageText = 0xED0; // char[512]
                constexpr std::ptrdiff_t m_FontName = 0x10D0; // char[64]
                constexpr std::ptrdiff_t m_BackgroundMaterialName = 0x1110; // char[64]
                constexpr std::ptrdiff_t m_bEnabled = 0x1150; // bool
                constexpr std::ptrdiff_t m_bFullbright = 0x1151; // bool
                constexpr std::ptrdiff_t m_flWorldUnitsPerPx = 0x1154; // float32
                constexpr std::ptrdiff_t m_flFontSize = 0x1158; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0x115C; // float32
                constexpr std::ptrdiff_t m_bDrawBackground = 0x1160; // bool
                constexpr std::ptrdiff_t m_flBackgroundBorderWidth = 0x1164; // float32
                constexpr std::ptrdiff_t m_flBackgroundBorderHeight = 0x1168; // float32
                constexpr std::ptrdiff_t m_flBackgroundWorldToUV = 0x116C; // float32
                constexpr std::ptrdiff_t m_Color = 0x1170; // Color
                constexpr std::ptrdiff_t m_nJustifyHorizontal = 0x1174; // PointWorldTextJustifyHorizontal_t
                constexpr std::ptrdiff_t m_nJustifyVertical = 0x1178; // PointWorldTextJustifyVertical_t
                constexpr std::ptrdiff_t m_nReorientMode = 0x117C; // PointWorldTextReorientMode_t
            }
            // Parent: C_BaseModelEntity
            // Field count: 40
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
                constexpr std::ptrdiff_t m_LinksTouchingSomething = 0xEB8; // CBitVec<10>
                constexpr std::ptrdiff_t m_nLinksTouchingSomething = 0xEBC; // int32
                constexpr std::ptrdiff_t m_bApplyWind = 0xEC0; // bool
                constexpr std::ptrdiff_t m_fPrevLockedPoints = 0xEC4; // int32
                constexpr std::ptrdiff_t m_iForcePointMoveCounter = 0xEC8; // int32
                constexpr std::ptrdiff_t m_bPrevEndPointPos = 0xECC; // bool[2]
                constexpr std::ptrdiff_t m_vPrevEndPointPos = 0xED0; // Vector[2]
                constexpr std::ptrdiff_t m_flCurScroll = 0xEE8; // float32
                constexpr std::ptrdiff_t m_flScrollSpeed = 0xEEC; // float32
                constexpr std::ptrdiff_t m_RopeFlags = 0xEF0; // uint16
                constexpr std::ptrdiff_t m_iRopeMaterialModelIndex = 0xEF8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nSegments = 0x1170; // uint8
                constexpr std::ptrdiff_t m_hStartPoint = 0x1174; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hEndPoint = 0x1178; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iStartAttachment = 0x117C; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_iEndAttachment = 0x117D; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_Subdiv = 0x117E; // uint8
                constexpr std::ptrdiff_t m_RopeLength = 0x1180; // int16
                constexpr std::ptrdiff_t m_Slack = 0x1182; // int16
                constexpr std::ptrdiff_t m_TextureScale = 0x1184; // float32
                constexpr std::ptrdiff_t m_fLockedPoints = 0x1188; // uint8
                constexpr std::ptrdiff_t m_nChangeCount = 0x1189; // uint8
                constexpr std::ptrdiff_t m_Width = 0x118C; // float32
                constexpr std::ptrdiff_t m_PhysicsDelegate = 0x1190; // C_RopeKeyframe::CPhysicsDelegate
                constexpr std::ptrdiff_t m_hMaterial = 0x11A0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_TextureHeight = 0x11A8; // int32
                constexpr std::ptrdiff_t m_vecImpulse = 0x11AC; // Vector
                constexpr std::ptrdiff_t m_vecPreviousImpulse = 0x11B8; // Vector
                constexpr std::ptrdiff_t m_flCurrentGustTimer = 0x11C4; // float32
                constexpr std::ptrdiff_t m_flCurrentGustLifetime = 0x11C8; // float32
                constexpr std::ptrdiff_t m_flTimeToNextGust = 0x11CC; // float32
                constexpr std::ptrdiff_t m_vWindDir = 0x11D0; // Vector
                constexpr std::ptrdiff_t m_vColorMod = 0x11DC; // Vector
                constexpr std::ptrdiff_t m_vCachedEndPointAttachmentPos = 0x11E8; // Vector[2]
                constexpr std::ptrdiff_t m_vCachedEndPointAttachmentAngle = 0x1200; // QAngle[2]
                constexpr std::ptrdiff_t m_bConstrainBetweenEndpoints = 0x1218; // bool
                constexpr std::ptrdiff_t m_bEndPointAttachmentPositionsDirty = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bEndPointAttachmentAnglesDirty = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNewDataThisFrame = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bPhysicsInitted = 0x0; // bitfield:1
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            namespace C_BaseToggle {
            }
            // Parent: C_EnvCubemap
            // Field count: 0
            namespace C_EnvCubemapBox {
            }
            // Parent: C_EnvCombinedLightProbeVolume
            // Field count: 0
            namespace C_EnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume {
            }
            // Parent: None
            // Field count: 1
            namespace C_RopeKeyframe__CPhysicsDelegate {
                constexpr std::ptrdiff_t m_pKeyframe = 0x8; // C_RopeKeyframe*
            }
            // Parent: C_PointEntity
            // Field count: 5
            namespace CInfoDynamicShadowHint {
                constexpr std::ptrdiff_t m_bDisabled = 0x5F8; // bool
                constexpr std::ptrdiff_t m_flRange = 0x5FC; // float32
                constexpr std::ptrdiff_t m_nImportance = 0x600; // int32
                constexpr std::ptrdiff_t m_nLightChoice = 0x604; // int32
                constexpr std::ptrdiff_t m_hLight = 0x608; // CHandle<C_BaseEntity>
            }
            // Parent: C_BaseToggle
            // Field count: 0
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkOverride
            namespace C_FuncMoveLinear {
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            namespace CServerOnlyModelEntity {
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Field count: 0
            namespace C_CSGO_TeamSelectCamera {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace CPulseCell_IntervalTimer {
                constexpr std::ptrdiff_t m_Completed = 0x48; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_OnInterval = 0x90; // SignatureOutflow_Continue
            }
            // Parent: C_CSWeaponBaseShotgun
            // Field count: 0
            namespace C_WeaponXM1014 {
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace C_WorldModelGloves {
            }
            // Parent: C_PhysicsProp
            // Field count: 0
            namespace C_PhysicsPropMultiplayer {
            }
            // Parent: C_SoundEventEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_vMins (Vector)
            // NetworkVarNames: m_vMaxs (Vector)
            namespace C_SoundEventOBBEntity {
                constexpr std::ptrdiff_t m_vMins = 0x6C0; // Vector
                constexpr std::ptrdiff_t m_vMaxs = 0x6CC; // Vector
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            namespace CPulseTestScriptLib {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseLerp {
                constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponAug {
            }
            // Parent: C_DynamicProp
            // Field count: 8
            //
            // Metadata:
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkIncludeByName
            // NetworkVarNames: m_eDoorState (DoorState_t)
            // NetworkVarNames: m_bLocked (bool)
            // NetworkVarNames: m_bNoNPCs (bool)
            // NetworkVarNames: m_closedPosition (Vector)
            // NetworkVarNames: m_closedAngles (QAngle)
            // NetworkVarNames: m_hMaster (CHandle<C_BasePropDoor>)
            namespace C_BasePropDoor {
                constexpr std::ptrdiff_t m_eDoorState = 0x1430; // DoorState_t
                constexpr std::ptrdiff_t m_modelChanged = 0x1434; // bool
                constexpr std::ptrdiff_t m_bLocked = 0x1435; // bool
                constexpr std::ptrdiff_t m_bNoNPCs = 0x1436; // bool
                constexpr std::ptrdiff_t m_closedPosition = 0x1438; // Vector
                constexpr std::ptrdiff_t m_closedAngles = 0x1444; // QAngle
                constexpr std::ptrdiff_t m_hMaster = 0x1450; // CHandle<C_BasePropDoor>
                constexpr std::ptrdiff_t m_vWhereToSetLightingOrigin = 0x1454; // Vector
            }
            // Parent: 
            // Field count: 8
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
            // Parent: C_WeaponBaseItem
            // Field count: 0
            namespace C_Item_Healthshot {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_pEntity (CEntityIdentity*)
            // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
            namespace CEntityInstance {
                constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pEntity = 0x10; // CEntityIdentity*
                constexpr std::ptrdiff_t m_CScriptComponent = 0x30; // CScriptComponent*
            }
            // Parent: C_BaseEntity
            // Field count: 37
            //
            // Metadata:
            // NetworkVarNames: m_CRenderComponent (CRenderComponent::Storage_t)
            // NetworkVarNames: m_CHitboxComponent (CHitboxComponent::Storage_t)
            // NetworkVarNames: m_pDestructiblePartsSystemComponent (CDestructiblePartsComponent*)
            // NetworkVarNames: m_nRenderMode (RenderMode_t)
            // NetworkVarNames: m_nRenderFX (RenderFx_t)
            // NetworkVarNames: m_clrRender (Color)
            // NetworkVarNames: m_vecRenderAttributes (EntityRenderAttribute_t)
            // NetworkVarNames: m_bRenderToCubemaps (bool)
            // NetworkVarNames: m_bNoInterpolate (bool)
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
            // NetworkVarNames: m_nDecalMode (DecalMode_t)
            // NetworkVarNames: m_nRequiredDecalMode (DecalMode_t)
            // NetworkVarNames: m_ConfigEntitiesToPropagateMaterialDecalsTo (CHandle<C_BaseModelEntity>)
            // NetworkVarNames: m_bvDisabledHitGroups (uint32)
            namespace C_BaseModelEntity {
                constexpr std::ptrdiff_t m_CRenderComponent = 0xAE0; // CRenderComponent*
                constexpr std::ptrdiff_t m_CHitboxComponent = 0xAE8; // CHitboxComponent
                constexpr std::ptrdiff_t m_pDestructiblePartsSystemComponent = 0xB00; // CDestructiblePartsComponent*
                constexpr std::ptrdiff_t m_LastHitGroup = 0xB08; // HitGroup_t
                constexpr std::ptrdiff_t m_sLastDamageSourceName = 0xB10; // CGlobalSymbol
                constexpr std::ptrdiff_t m_vLastDamagePosition = 0xB18; // VectorWS
                constexpr std::ptrdiff_t m_bInitModelEffects = 0xB40; // bool
                constexpr std::ptrdiff_t m_bIsStaticProp = 0xB41; // bool
                constexpr std::ptrdiff_t m_nLastAddDecal = 0xB44; // int32
                constexpr std::ptrdiff_t m_nDecalsAdded = 0xB48; // int32
                constexpr std::ptrdiff_t m_iOldHealth = 0xB4C; // int32
                constexpr std::ptrdiff_t m_nRenderMode = 0xB50; // RenderMode_t
                constexpr std::ptrdiff_t m_nRenderFX = 0xB51; // RenderFx_t
                constexpr std::ptrdiff_t m_bAllowFadeInView = 0xB52; // bool
                constexpr std::ptrdiff_t m_clrRender = 0xB70; // Color
                constexpr std::ptrdiff_t m_vecRenderAttributes = 0xB78; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
                constexpr std::ptrdiff_t m_bRenderToCubemaps = 0xBF8; // bool
                constexpr std::ptrdiff_t m_bNoInterpolate = 0xBF9; // bool
                constexpr std::ptrdiff_t m_Collision = 0xC00; // CCollisionProperty
                constexpr std::ptrdiff_t m_Glow = 0xCB0; // CGlowProperty
                constexpr std::ptrdiff_t m_flGlowBackfaceMult = 0xD08; // float32
                constexpr std::ptrdiff_t m_fadeMinDist = 0xD0C; // float32
                constexpr std::ptrdiff_t m_fadeMaxDist = 0xD10; // float32
                constexpr std::ptrdiff_t m_flFadeScale = 0xD14; // float32
                constexpr std::ptrdiff_t m_flShadowStrength = 0xD18; // float32
                constexpr std::ptrdiff_t m_nObjectCulling = 0xD1C; // uint8
                constexpr std::ptrdiff_t m_nAddDecal = 0xD20; // int32
                constexpr std::ptrdiff_t m_vDecalPosition = 0xD24; // Vector
                constexpr std::ptrdiff_t m_vDecalForwardAxis = 0xD30; // Vector
                constexpr std::ptrdiff_t m_nDecalMode = 0xD3C; // DecalMode_t
                constexpr std::ptrdiff_t m_nRequiredDecalMode = 0xD3D; // DecalMode_t
                constexpr std::ptrdiff_t m_ConfigEntitiesToPropagateMaterialDecalsTo = 0xD40; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_vecViewOffset = 0xD80; // CNetworkViewOffsetVector
                constexpr std::ptrdiff_t m_pClientAlphaProperty = 0xE60; // CClientAlphaProperty*
                constexpr std::ptrdiff_t m_ClientOverrideTint = 0xE68; // Color
                constexpr std::ptrdiff_t m_bUseClientOverrideTint = 0xE6C; // bool
                constexpr std::ptrdiff_t m_bvDisabledHitGroups = 0xEA8; // uint32[1]
            }
            // Parent: CPlayerPawnComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_totalHitsOnServer (int32)
            namespace CCSPlayer_BulletServices {
                constexpr std::ptrdiff_t m_totalHitsOnServer = 0x40; // int32
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            namespace C_SoundOpvarSetAutoRoomEntity {
            }
            // Parent: C_BaseEntity
            // Field count: 29
            //
            // Metadata:
            // NetworkVarNames: m_Entity_Color (Color)
            // NetworkVarNames: m_Entity_flBrightness (float)
            // NetworkVarNames: m_Entity_hCubemapTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_bCustomCubemapTexture (bool)
            // NetworkVarNames: m_Entity_hLightProbeTexture_AmbientCube (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeTexture_SDF (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeTexture_SH2_DC (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeTexture_SH2_R (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeTexture_SH2_G (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeTexture_SH2_B (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeDirectLightIndicesTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeDirectLightScalarsTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeDirectLightShadowsTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_vBoxMins (Vector)
            // NetworkVarNames: m_Entity_vBoxMaxs (Vector)
            // NetworkVarNames: m_Entity_bMoveable (bool)
            // NetworkVarNames: m_Entity_nHandshake (int)
            // NetworkVarNames: m_Entity_nEnvCubeMapArrayIndex (int)
            // NetworkVarNames: m_Entity_nPriority (int)
            // NetworkVarNames: m_Entity_bStartDisabled (bool)
            // NetworkVarNames: m_Entity_flEdgeFadeDist (float)
            // NetworkVarNames: m_Entity_vEdgeFadeDists (Vector)
            // NetworkVarNames: m_Entity_nLightProbeSizeX (int)
            // NetworkVarNames: m_Entity_nLightProbeSizeY (int)
            // NetworkVarNames: m_Entity_nLightProbeSizeZ (int)
            // NetworkVarNames: m_Entity_nLightProbeAtlasX (int)
            // NetworkVarNames: m_Entity_nLightProbeAtlasY (int)
            // NetworkVarNames: m_Entity_nLightProbeAtlasZ (int)
            // NetworkVarNames: m_Entity_bEnabled (bool)
            namespace C_EnvCombinedLightProbeVolume {
                constexpr std::ptrdiff_t m_Entity_Color = 0x1670; // Color
                constexpr std::ptrdiff_t m_Entity_flBrightness = 0x1674; // float32
                constexpr std::ptrdiff_t m_Entity_hCubemapTexture = 0x1678; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_bCustomCubemapTexture = 0x1680; // bool
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_AmbientCube = 0x1688; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SDF = 0x1690; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_DC = 0x1698; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_R = 0x16A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_G = 0x16A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_B = 0x16B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x16B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x16C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x16C8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x16D0; // Vector
                constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x16DC; // Vector
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x16E8; // bool
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x16EC; // int32
                constexpr std::ptrdiff_t m_Entity_nEnvCubeMapArrayIndex = 0x16F0; // int32
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x16F4; // int32
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x16F8; // bool
                constexpr std::ptrdiff_t m_Entity_flEdgeFadeDist = 0x16FC; // float32
                constexpr std::ptrdiff_t m_Entity_vEdgeFadeDists = 0x1700; // Vector
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x170C; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x1710; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x1714; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x1718; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x171C; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x1720; // int32
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x1739; // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_MultiplayRules {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_AutoaimServices {
            }
            // Parent: C_LightEntity
            // Field count: 0
            namespace C_LightDirectionalEntity {
            }
            // Parent: 
            // Field count: 83
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
            // MNetworkExcludeByName
            // NetworkVarNames: m_CBodyComponent (CBodyComponent::Storage_t)
            // NetworkVarNames: m_iMaxHealth (int32)
            // NetworkVarNames: m_iHealth (int32)
            // NetworkVarNames: m_lifeState (uint8)
            // NetworkVarNames: m_bTakesDamage (bool)
            // NetworkVarNames: m_nTakeDamageFlags (TakeDamageFlags_t)
            // NetworkVarNames: m_nPlatformType (EntityPlatformTypes_t)
            // NetworkVarNames: m_ubInterpolationFrame (uint8)
            // NetworkVarNames: m_nSubclassID (EntitySubclassID_t)
            // NetworkVarNames: m_flAnimTime (float32)
            // NetworkVarNames: m_flSimulationTime (float32)
            // NetworkVarNames: m_flCreateTime (GameTime_t)
            // NetworkVarNames: m_flSpeed (float)
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
            // NetworkVarNames: m_nGroundBodyIndex (int)
            // NetworkVarNames: m_flFriction (float32)
            // NetworkVarNames: m_flElasticity (float32)
            // NetworkVarNames: m_flGravityScale (float32)
            // NetworkVarNames: m_flTimeScale (float32)
            // NetworkVarNames: m_bAnimatedEveryTick (bool)
            // NetworkVarNames: m_bGravityDisabled (bool)
            // NetworkVarNames: m_flNavIgnoreUntilTime (GameTime_t)
            // NetworkVarNames: m_nBloodType (BloodType)
            namespace C_BaseEntity {
                constexpr std::ptrdiff_t m_CBodyComponent = 0x38; // CBodyComponent*
                constexpr std::ptrdiff_t m_NetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
                constexpr std::ptrdiff_t m_nLastThinkTick = 0x328; // GameTick_t
                constexpr std::ptrdiff_t m_pGameSceneNode = 0x330; // CGameSceneNode*
                constexpr std::ptrdiff_t m_pRenderComponent = 0x338; // CRenderComponent*
                constexpr std::ptrdiff_t m_pCollision = 0x340; // CCollisionProperty*
                constexpr std::ptrdiff_t m_iMaxHealth = 0x348; // int32
                constexpr std::ptrdiff_t m_iHealth = 0x34C; // int32
                constexpr std::ptrdiff_t m_flDamageAccumulator = 0x350; // float32
                constexpr std::ptrdiff_t m_lifeState = 0x354; // uint8
                constexpr std::ptrdiff_t m_bTakesDamage = 0x355; // bool
                constexpr std::ptrdiff_t m_nTakeDamageFlags = 0x358; // TakeDamageFlags_t
                constexpr std::ptrdiff_t m_nPlatformType = 0x360; // EntityPlatformTypes_t
                constexpr std::ptrdiff_t m_ubInterpolationFrame = 0x361; // uint8
                constexpr std::ptrdiff_t m_hSceneObjectController = 0x364; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nNoInterpolationTick = 0x368; // int32
                constexpr std::ptrdiff_t m_nVisibilityNoInterpolationTick = 0x36C; // int32
                constexpr std::ptrdiff_t m_flProxyRandomValue = 0x370; // float32
                constexpr std::ptrdiff_t m_iEFlags = 0x374; // int32
                constexpr std::ptrdiff_t m_nWaterType = 0x378; // uint8
                constexpr std::ptrdiff_t m_bInterpolateEvenWithNoModel = 0x379; // bool
                constexpr std::ptrdiff_t m_bPredictionEligible = 0x37A; // bool
                constexpr std::ptrdiff_t m_bApplyLayerMatchIDToModel = 0x37B; // bool
                constexpr std::ptrdiff_t m_tokLayerMatchID = 0x37C; // CUtlStringToken
                constexpr std::ptrdiff_t m_nSubclassID = 0x380; // CUtlStringToken
                constexpr std::ptrdiff_t m_nSimulationTick = 0x390; // int32
                constexpr std::ptrdiff_t m_iCurrentThinkContext = 0x394; // int32
                constexpr std::ptrdiff_t m_aThinkFunctions = 0x398; // CUtlVector<thinkfunc_t>
                constexpr std::ptrdiff_t m_bDisabledContextThinks = 0x3B0; // bool
                constexpr std::ptrdiff_t m_flAnimTime = 0x3B4; // float32
                constexpr std::ptrdiff_t m_flSimulationTime = 0x3B8; // float32
                constexpr std::ptrdiff_t m_nSceneObjectOverrideFlags = 0x3BC; // uint8
                constexpr std::ptrdiff_t m_bHasSuccessfullyInterpolated = 0x3BD; // bool
                constexpr std::ptrdiff_t m_bHasAddedVarsToInterpolation = 0x3BE; // bool
                constexpr std::ptrdiff_t m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x3BF; // bool
                constexpr std::ptrdiff_t m_nInterpolationLatchDirtyFlags = 0x3C0; // int32[2]
                constexpr std::ptrdiff_t m_ListEntry = 0x3C8; // uint16[11]
                constexpr std::ptrdiff_t m_flCreateTime = 0x3E0; // GameTime_t
                constexpr std::ptrdiff_t m_flSpeed = 0x3E4; // float32
                constexpr std::ptrdiff_t m_EntClientFlags = 0x3E8; // uint16
                constexpr std::ptrdiff_t m_bClientSideRagdoll = 0x3EA; // bool
                constexpr std::ptrdiff_t m_iTeamNum = 0x3EB; // uint8
                constexpr std::ptrdiff_t m_spawnflags = 0x3EC; // uint32
                constexpr std::ptrdiff_t m_nNextThinkTick = 0x3F0; // GameTick_t
                constexpr std::ptrdiff_t m_fFlags = 0x3F8; // uint32
                constexpr std::ptrdiff_t m_vecAbsVelocity = 0x3FC; // Vector
                constexpr std::ptrdiff_t m_vecServerVelocity = 0x408; // CNetworkVelocityVector
                constexpr std::ptrdiff_t m_vecVelocity = 0x430; // CNetworkVelocityVector
                constexpr std::ptrdiff_t m_vecBaseVelocity = 0x510; // Vector
                constexpr std::ptrdiff_t m_hEffectEntity = 0x51C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hOwnerEntity = 0x520; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_MoveCollide = 0x524; // MoveCollide_t
                constexpr std::ptrdiff_t m_MoveType = 0x525; // MoveType_t
                constexpr std::ptrdiff_t m_nActualMoveType = 0x526; // MoveType_t
                constexpr std::ptrdiff_t m_flWaterLevel = 0x528; // float32
                constexpr std::ptrdiff_t m_fEffects = 0x52C; // uint32
                constexpr std::ptrdiff_t m_hGroundEntity = 0x530; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nGroundBodyIndex = 0x534; // int32
                constexpr std::ptrdiff_t m_flFriction = 0x538; // float32
                constexpr std::ptrdiff_t m_flElasticity = 0x53C; // float32
                constexpr std::ptrdiff_t m_flGravityScale = 0x540; // float32
                constexpr std::ptrdiff_t m_flTimeScale = 0x544; // float32
                constexpr std::ptrdiff_t m_bAnimatedEveryTick = 0x548; // bool
                constexpr std::ptrdiff_t m_bGravityDisabled = 0x549; // bool
                constexpr std::ptrdiff_t m_flNavIgnoreUntilTime = 0x54C; // GameTime_t
                constexpr std::ptrdiff_t m_hThink = 0x550; // uint16
                constexpr std::ptrdiff_t m_fBBoxVisFlags = 0x560; // uint8
                constexpr std::ptrdiff_t m_flActualGravityScale = 0x564; // float32
                constexpr std::ptrdiff_t m_bGravityActuallyDisabled = 0x568; // bool
                constexpr std::ptrdiff_t m_bPredictable = 0x569; // bool
                constexpr std::ptrdiff_t m_bRenderWithViewModels = 0x56A; // bool
                constexpr std::ptrdiff_t m_nFirstPredictableCommand = 0x56C; // int32
                constexpr std::ptrdiff_t m_nLastPredictableCommand = 0x570; // int32
                constexpr std::ptrdiff_t m_hOldMoveParent = 0x574; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_Particles = 0x578; // CParticleProperty
                constexpr std::ptrdiff_t m_vecAngVelocity = 0x5A8; // QAngle
                constexpr std::ptrdiff_t m_DataChangeEventRef = 0x5B4; // int32
                constexpr std::ptrdiff_t m_dependencies = 0x5B8; // CUtlVector<CEntityHandle>
                constexpr std::ptrdiff_t m_nCreationTick = 0x5D0; // int32
                constexpr std::ptrdiff_t m_bAnimTimeChanged = 0x5DD; // bool
                constexpr std::ptrdiff_t m_bSimulationTimeChanged = 0x5DE; // bool
                constexpr std::ptrdiff_t m_sUniqueHammerID = 0x5E8; // CUtlString
                constexpr std::ptrdiff_t m_nBloodType = 0x5F0; // BloodType
            }
            // Parent: 
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_Handle (ModelConfigHandle_t)
            // NetworkVarNames: m_Name (string_t)
            // NetworkVarNames: m_AssociatedEntities (CHandle<C_BaseModelEntity>)
            // NetworkVarNames: m_AssociatedEntityNames (string_t)
            namespace ActiveModelConfig_t {
                constexpr std::ptrdiff_t m_Handle = 0x30; // ModelConfigHandle_t
                constexpr std::ptrdiff_t m_Name = 0x38; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_AssociatedEntities = 0x40; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_AssociatedEntityNames = 0x58; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponSSG08 {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CPulseCell_Value_Curve {
                constexpr std::ptrdiff_t m_Curve = 0x48; // CPiecewiseCurve
            }
            // Parent: C_BaseCombatCharacter
            // Field count: 28
            //
            // Metadata:
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
            // NetworkVarNames: m_hDefaultController (CHandle<CBasePlayerController>)
            namespace C_BasePlayerPawn {
                constexpr std::ptrdiff_t m_pWeaponServices = 0x13F0; // CPlayer_WeaponServices*
                constexpr std::ptrdiff_t m_pItemServices = 0x13F8; // CPlayer_ItemServices*
                constexpr std::ptrdiff_t m_pAutoaimServices = 0x1400; // CPlayer_AutoaimServices*
                constexpr std::ptrdiff_t m_pObserverServices = 0x1408; // CPlayer_ObserverServices*
                constexpr std::ptrdiff_t m_pWaterServices = 0x1410; // CPlayer_WaterServices*
                constexpr std::ptrdiff_t m_pUseServices = 0x1418; // CPlayer_UseServices*
                constexpr std::ptrdiff_t m_pFlashlightServices = 0x1420; // CPlayer_FlashlightServices*
                constexpr std::ptrdiff_t m_pCameraServices = 0x1428; // CPlayer_CameraServices*
                constexpr std::ptrdiff_t m_pMovementServices = 0x1430; // CPlayer_MovementServices*
                constexpr std::ptrdiff_t m_ServerViewAngleChanges = 0x1440; // C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
                constexpr std::ptrdiff_t v_angle = 0x14A8; // QAngle
                constexpr std::ptrdiff_t v_anglePrevious = 0x14B4; // QAngle
                constexpr std::ptrdiff_t m_iHideHUD = 0x14C0; // uint32
                constexpr std::ptrdiff_t m_skybox3d = 0x14C8; // sky3dparams_t
                constexpr std::ptrdiff_t m_flDeathTime = 0x1558; // GameTime_t
                constexpr std::ptrdiff_t m_vecPredictionError = 0x155C; // Vector
                constexpr std::ptrdiff_t m_flPredictionErrorTime = 0x1568; // GameTime_t
                constexpr std::ptrdiff_t m_vecLastCameraSetupLocalOrigin = 0x1588; // Vector
                constexpr std::ptrdiff_t m_flLastCameraSetupTime = 0x1594; // GameTime_t
                constexpr std::ptrdiff_t m_flFOVSensitivityAdjust = 0x1598; // float32
                constexpr std::ptrdiff_t m_flMouseSensitivity = 0x159C; // float32
                constexpr std::ptrdiff_t m_vOldOrigin = 0x15A0; // Vector
                constexpr std::ptrdiff_t m_flOldSimulationTime = 0x15AC; // float32
                constexpr std::ptrdiff_t m_nLastExecutedCommandNumber = 0x15B0; // int32
                constexpr std::ptrdiff_t m_nLastExecutedCommandTick = 0x15B4; // int32
                constexpr std::ptrdiff_t m_hController = 0x15B8; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_hDefaultController = 0x15BC; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_bIsSwappingToPredictableController = 0x15C0; // bool
            }
            // Parent: C_DynamicProp
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_jumpedThisFrame (bool)
            // NetworkVarNames: m_leader (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_AttributeManager (CAttributeContainer)
            namespace C_Chicken {
                constexpr std::ptrdiff_t m_hHolidayHatAddon = 0x1428; // CHandle<CBaseAnimGraph>
                constexpr std::ptrdiff_t m_jumpedThisFrame = 0x142C; // bool
                constexpr std::ptrdiff_t m_leader = 0x1430; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_AttributeManager = 0x1438; // C_AttributeContainer
                constexpr std::ptrdiff_t m_bAttributesInitialized = 0x1910; // bool
                constexpr std::ptrdiff_t m_hWaterWakeParticles = 0x1914; // ParticleIndex_t
                constexpr std::ptrdiff_t m_bIsPreviewModel = 0x1918; // bool
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            namespace C_SoundOpvarSetAABBEntity {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponBizon {
            }
            // Parent: C_CS2WeaponModuleBase
            // Field count: 1
            namespace C_StattrakModule {
                constexpr std::ptrdiff_t m_bKnife = 0x1160; // bool
            }
            // Parent: CCSPlayerBase_CameraServices
            // Field count: 0
            namespace CCSObserver_CameraServices {
            }
            // Parent: None
            // Field count: 0
            namespace CTakeDamageInfoAPI {
            }
            // Parent: CEnvSoundscape
            // Field count: 1
            namespace CEnvSoundscapeProxy {
                constexpr std::ptrdiff_t m_MainSoundscapeName = 0x698; // CUtlSymbolLarge
            }
            // Parent: C_BaseEntity
            // Field count: 15
            namespace C_SoundEventEntity {
                constexpr std::ptrdiff_t m_bStartOnSpawn = 0x5F8; // bool
                constexpr std::ptrdiff_t m_bToLocalPlayer = 0x5F9; // bool
                constexpr std::ptrdiff_t m_bStopOnNew = 0x5FA; // bool
                constexpr std::ptrdiff_t m_bSaveRestore = 0x5FB; // bool
                constexpr std::ptrdiff_t m_bSavedIsPlaying = 0x5FC; // bool
                constexpr std::ptrdiff_t m_flSavedElapsedTime = 0x600; // float32
                constexpr std::ptrdiff_t m_iszSourceEntityName = 0x608; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszAttachmentName = 0x610; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_onGUIDChanged = 0x618; // CEntityOutputTemplate<uint64>
                constexpr std::ptrdiff_t m_onSoundFinished = 0x640; // CEntityIOOutput
                constexpr std::ptrdiff_t m_flClientCullRadius = 0x668; // float32
                constexpr std::ptrdiff_t m_iszSoundName = 0x698; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hSource = 0x6B4; // CEntityHandle
                constexpr std::ptrdiff_t m_nEntityIndexSelection = 0x6B8; // int32
                constexpr std::ptrdiff_t m_bClientSideOnly = 0x0; // bitfield:1
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_EventHandler {
                constexpr std::ptrdiff_t m_EventName = 0x80; // PulseSymbol_t
            }
            // Parent: C_LightEntity
            // Field count: 0
            namespace C_LightOrthoEntity {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseFlow {
            }
            // Parent: C_BaseTrigger
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bBombPlantedHere (bool)
            namespace CBombTarget {
                constexpr std::ptrdiff_t m_bBombPlantedHere = 0xFF0; // bool
            }
            // Parent: C_CSWeaponBase
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bFirstAttack (bool)
            namespace C_Knife {
                constexpr std::ptrdiff_t m_bFirstAttack = 0x1F80; // bool
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Field count: 0
            namespace C_CSGO_TerroristWingmanIntroCamera {
            }
            // Parent: CGameSceneNode
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_modelState (CModelState)
            // NetworkVarNames: m_bIsAnimationEnabled (bool)
            // NetworkVarNames: m_bUseParentRenderBounds (bool)
            // NetworkVarNames: m_materialGroup (CUtlStringToken)
            // NetworkVarNames: m_nHitboxSet (uint8)
            namespace CSkeletonInstance {
                constexpr std::ptrdiff_t m_modelState = 0x190; // CModelState
                constexpr std::ptrdiff_t m_bIsAnimationEnabled = 0x490; // bool
                constexpr std::ptrdiff_t m_bUseParentRenderBounds = 0x491; // bool
                constexpr std::ptrdiff_t m_bDisableSolidCollisionsForHierarchy = 0x492; // bool
                constexpr std::ptrdiff_t m_bDirtyMotionType = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_materialGroup = 0x494; // CUtlStringToken
                constexpr std::ptrdiff_t m_nHitboxSet = 0x498; // uint8
            }
            // Parent: 
            // Field count: 0
            namespace CEntityComponent {
            }
            // Parent: C_Item
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_OwningPlayer (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_KillingPlayer (CHandle<CCSPlayerPawn>)
            namespace C_ItemDogtags {
                constexpr std::ptrdiff_t m_OwningPlayer = 0x19E0; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_KillingPlayer = 0x19E4; // CHandle<C_CSPlayerPawn>
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace C_LateUpdatedAnimating {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleShuffled__InstanceState_t {
                constexpr std::ptrdiff_t m_Shuffle = 0x0; // CUtlVectorFixedGrowable<uint8,8>
                constexpr std::ptrdiff_t m_nNextShuffle = 0x20; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseLerp__CursorState_t {
                constexpr std::ptrdiff_t m_StartTime = 0x0; // GameTime_t
                constexpr std::ptrdiff_t m_EndTime = 0x4; // GameTime_t
            }
            // Parent: None
            // Field count: 0
            namespace CPulseAnimFuncs {
            }
            // Parent: C_BaseModelEntity
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bEnabled (bool)
            // NetworkVarNames: m_DialogXMLName (string_t)
            // NetworkVarNames: m_PanelClassName (string_t)
            // NetworkVarNames: m_PanelID (string_t)
            namespace C_BaseClientUIEntity {
                constexpr std::ptrdiff_t m_bEnabled = 0xEB8; // bool
                constexpr std::ptrdiff_t m_DialogXMLName = 0xEC0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PanelClassName = 0xEC8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PanelID = 0xED0; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
                constexpr std::ptrdiff_t m_TagName = 0x0; // PulseSymbol_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            namespace CPulseArraylib {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponUSPSilencer {
            }
            // Parent: C_BaseCSGrenadeProjectile
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bIsIncGrenade (bool)
            namespace C_MolotovProjectile {
                constexpr std::ptrdiff_t m_bIsIncGrenade = 0x1450; // bool
            }
            // Parent: C_BaseTrigger
            // Field count: 0
            namespace C_TriggerLerpObject {
            }
            // Parent: None
            // Field count: 0
            namespace CPointTemplateAPI {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponRevolver {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponElite {
            }
            // Parent: C_DynamicProp
            // Field count: 0
            namespace C_DynamicPropAlias_cable_dynamic {
            }
            // Parent: CBaseAnimGraph
            // Field count: 4
            namespace CBaseProp {
                constexpr std::ptrdiff_t m_bModelOverrodeBlockLOS = 0x1158; // bool
                constexpr std::ptrdiff_t m_iShapeType = 0x115C; // int32
                constexpr std::ptrdiff_t m_bConformToCollisionBounds = 0x1160; // bool
                constexpr std::ptrdiff_t m_mPreferredCatchTransform = 0x1170; // CTransform
            }
            // Parent: C_PointEntity
            // Field count: 9
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
                constexpr std::ptrdiff_t m_bDisabled = 0x5F8; // bool
                constexpr std::ptrdiff_t m_nResolutionX = 0x5FC; // int32
                constexpr std::ptrdiff_t m_nResolutionY = 0x600; // int32
                constexpr std::ptrdiff_t m_szLayoutFileName = 0x608; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_RenderAttrName = 0x610; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_TargetEntities = 0x618; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_nTargetChangeCount = 0x630; // int32
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x638; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_bCheckCSSClasses = 0x7B0; // bool
            }
            // Parent: None
            // Field count: 83
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertySuppressBaseClassField
            // MPropertySuppressBaseClassField
            namespace CCSWeaponBaseVData {
                constexpr std::ptrdiff_t m_WeaponType = 0x440; // CSWeaponType
                constexpr std::ptrdiff_t m_WeaponCategory = 0x444; // CSWeaponCategory
                constexpr std::ptrdiff_t m_szModel_AG2 = 0x448; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_szAnimSkeleton = 0x528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCNmSkeleton>>
                constexpr std::ptrdiff_t m_vecMuzzlePos0 = 0x608; // Vector
                constexpr std::ptrdiff_t m_vecMuzzlePos1 = 0x614; // Vector
                constexpr std::ptrdiff_t m_szTracerParticle = 0x620; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_GearSlot = 0x700; // gear_slot_t
                constexpr std::ptrdiff_t m_GearSlotPosition = 0x704; // int32
                constexpr std::ptrdiff_t m_DefaultLoadoutSlot = 0x708; // loadout_slot_t
                constexpr std::ptrdiff_t m_nPrice = 0x70C; // int32
                constexpr std::ptrdiff_t m_nKillAward = 0x710; // int32
                constexpr std::ptrdiff_t m_nPrimaryReserveAmmoMax = 0x714; // int32
                constexpr std::ptrdiff_t m_nSecondaryReserveAmmoMax = 0x718; // int32
                constexpr std::ptrdiff_t m_bMeleeWeapon = 0x71C; // bool
                constexpr std::ptrdiff_t m_bHasBurstMode = 0x71D; // bool
                constexpr std::ptrdiff_t m_bIsRevolver = 0x71E; // bool
                constexpr std::ptrdiff_t m_bCannotShootUnderwater = 0x71F; // bool
                constexpr std::ptrdiff_t m_szName = 0x720; // CGlobalSymbol
                constexpr std::ptrdiff_t m_eSilencerType = 0x728; // CSWeaponSilencerType
                constexpr std::ptrdiff_t m_nCrosshairMinDistance = 0x72C; // int32
                constexpr std::ptrdiff_t m_nCrosshairDeltaDistance = 0x730; // int32
                constexpr std::ptrdiff_t m_bIsFullAuto = 0x734; // bool
                constexpr std::ptrdiff_t m_nNumBullets = 0x738; // int32
                constexpr std::ptrdiff_t m_bReloadsSingleShells = 0x73C; // bool
                constexpr std::ptrdiff_t m_flCycleTime = 0x740; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flMaxSpeed = 0x748; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flSpread = 0x750; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyCrouch = 0x758; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyStand = 0x760; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyJump = 0x768; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyLand = 0x770; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyLadder = 0x778; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyFire = 0x780; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyMove = 0x788; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilAngle = 0x790; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilAngleVariance = 0x798; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilMagnitude = 0x7A0; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilMagnitudeVariance = 0x7A8; // CFiringModeFloat
                constexpr std::ptrdiff_t m_nTracerFrequency = 0x7B0; // CFiringModeInt
                constexpr std::ptrdiff_t m_flInaccuracyJumpInitial = 0x7B8; // float32
                constexpr std::ptrdiff_t m_flInaccuracyJumpApex = 0x7BC; // float32
                constexpr std::ptrdiff_t m_flInaccuracyReload = 0x7C0; // float32
                constexpr std::ptrdiff_t m_flDeployDuration = 0x7C4; // float32
                constexpr std::ptrdiff_t m_flDisallowAttackAfterReloadStartDuration = 0x7C8; // float32
                constexpr std::ptrdiff_t m_nBurstShotCount = 0x7CC; // int32
                constexpr std::ptrdiff_t m_bAllowBurstHolster = 0x7D0; // bool
                constexpr std::ptrdiff_t m_nRecoilSeed = 0x7D4; // int32
                constexpr std::ptrdiff_t m_nSpreadSeed = 0x7D8; // int32
                constexpr std::ptrdiff_t m_flAttackMovespeedFactor = 0x7DC; // float32
                constexpr std::ptrdiff_t m_flInaccuracyPitchShift = 0x7E0; // float32
                constexpr std::ptrdiff_t m_flInaccuracyAltSoundThreshold = 0x7E4; // float32
                constexpr std::ptrdiff_t m_szUseRadioSubtitle = 0x7E8; // CUtlString
                constexpr std::ptrdiff_t m_bUnzoomsAfterShot = 0x7F0; // bool
                constexpr std::ptrdiff_t m_bHideViewModelWhenZoomed = 0x7F1; // bool
                constexpr std::ptrdiff_t m_nZoomLevels = 0x7F4; // int32
                constexpr std::ptrdiff_t m_nZoomFOV1 = 0x7F8; // int32
                constexpr std::ptrdiff_t m_nZoomFOV2 = 0x7FC; // int32
                constexpr std::ptrdiff_t m_flZoomTime0 = 0x800; // float32
                constexpr std::ptrdiff_t m_flZoomTime1 = 0x804; // float32
                constexpr std::ptrdiff_t m_flZoomTime2 = 0x808; // float32
                constexpr std::ptrdiff_t m_flIronSightPullUpSpeed = 0x80C; // float32
                constexpr std::ptrdiff_t m_flIronSightPutDownSpeed = 0x810; // float32
                constexpr std::ptrdiff_t m_flIronSightFOV = 0x814; // float32
                constexpr std::ptrdiff_t m_flIronSightPivotForward = 0x818; // float32
                constexpr std::ptrdiff_t m_flIronSightLooseness = 0x81C; // float32
                constexpr std::ptrdiff_t m_nDamage = 0x820; // int32
                constexpr std::ptrdiff_t m_flHeadshotMultiplier = 0x824; // float32
                constexpr std::ptrdiff_t m_flArmorRatio = 0x828; // float32
                constexpr std::ptrdiff_t m_flPenetration = 0x82C; // float32
                constexpr std::ptrdiff_t m_flRange = 0x830; // float32
                constexpr std::ptrdiff_t m_flRangeModifier = 0x834; // float32
                constexpr std::ptrdiff_t m_flFlinchVelocityModifierLarge = 0x838; // float32
                constexpr std::ptrdiff_t m_flFlinchVelocityModifierSmall = 0x83C; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeCrouch = 0x840; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeStand = 0x844; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeCrouchFinal = 0x848; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeStandFinal = 0x84C; // float32
                constexpr std::ptrdiff_t m_nRecoveryTransitionStartBullet = 0x850; // int32
                constexpr std::ptrdiff_t m_nRecoveryTransitionEndBullet = 0x854; // int32
                constexpr std::ptrdiff_t m_flThrowVelocity = 0x858; // float32
                constexpr std::ptrdiff_t m_vSmokeColor = 0x85C; // Vector
                constexpr std::ptrdiff_t m_szAnimClass = 0x868; // CGlobalSymbol
            }
            // Parent: 
            // Field count: 6
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
            // Parent: None
            // Field count: 0
            namespace SignatureOutflow_Continue {
            }
            // Parent: C_PointEntity
            // Field count: 0
            namespace CInfoTarget {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 20
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
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Timeline {
                constexpr std::ptrdiff_t m_TimelineEvents = 0x48; // CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
                constexpr std::ptrdiff_t m_bWaitForChildOutflows = 0x60; // bool
                constexpr std::ptrdiff_t m_OnFinished = 0x68; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_OnCanceled = 0xB0; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_EntOutputHandler {
                constexpr std::ptrdiff_t m_SourceEntity = 0x80; // PulseSymbol_t
                constexpr std::ptrdiff_t m_SourceOutput = 0x90; // PulseSymbol_t
                constexpr std::ptrdiff_t m_ExpectedParamType = 0xA0; // CPulseValueFullType
            }
            // Parent: C_CSWeaponBase
            // Field count: 14
            //
            // Metadata:
            // NetworkVarNames: m_bRedraw (bool)
            // NetworkVarNames: m_bIsHeldByPlayer (bool)
            // NetworkVarNames: m_bPinPulled (bool)
            // NetworkVarNames: m_bJumpThrow (bool)
            // NetworkVarNames: m_bThrowAnimating (bool)
            // NetworkVarNames: m_fThrowTime (GameTime_t)
            // NetworkVarNames: m_fDropTime (GameTime_t)
            // NetworkVarNames: m_fPinPullTime (GameTime_t)
            // NetworkVarNames: m_bJustPulledPin (bool)
            // NetworkVarNames: m_nNextHoldTick (GameTick_t)
            // NetworkVarNames: m_flNextHoldFrac (float)
            // NetworkVarNames: m_hSwitchToWeaponAfterThrow (CHandle<CCSWeaponBase>)
            namespace C_BaseCSGrenade {
                constexpr std::ptrdiff_t m_bClientPredictDelete = 0x1F80; // bool
                constexpr std::ptrdiff_t m_bRedraw = 0x1F81; // bool
                constexpr std::ptrdiff_t m_bIsHeldByPlayer = 0x1F82; // bool
                constexpr std::ptrdiff_t m_bPinPulled = 0x1F83; // bool
                constexpr std::ptrdiff_t m_bJumpThrow = 0x1F84; // bool
                constexpr std::ptrdiff_t m_bThrowAnimating = 0x1F85; // bool
                constexpr std::ptrdiff_t m_fThrowTime = 0x1F88; // GameTime_t
                constexpr std::ptrdiff_t m_flThrowStrength = 0x1F90; // float32
                constexpr std::ptrdiff_t m_fDropTime = 0x2008; // GameTime_t
                constexpr std::ptrdiff_t m_fPinPullTime = 0x200C; // GameTime_t
                constexpr std::ptrdiff_t m_bJustPulledPin = 0x2010; // bool
                constexpr std::ptrdiff_t m_nNextHoldTick = 0x2014; // GameTick_t
                constexpr std::ptrdiff_t m_flNextHoldFrac = 0x2018; // float32
                constexpr std::ptrdiff_t m_hSwitchToWeaponAfterThrow = 0x201C; // CHandle<C_CSWeaponBase>
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterAttributeInt {
                constexpr std::ptrdiff_t m_sAttributeName = 0x650; // CUtlSymbolLarge
            }
            // Parent: CLogicalEntity
            // Field count: 11
            namespace CPointTemplate {
                constexpr std::ptrdiff_t m_iszWorldName = 0x5F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSource2EntityLumpName = 0x600; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszEntityFilterName = 0x608; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flTimeoutInterval = 0x610; // float32
                constexpr std::ptrdiff_t m_bAsynchronouslySpawnEntities = 0x614; // bool
                constexpr std::ptrdiff_t m_clientOnlyEntityBehavior = 0x618; // PointTemplateClientOnlyEntityBehavior_t
                constexpr std::ptrdiff_t m_ownerSpawnGroupType = 0x61C; // PointTemplateOwnerSpawnGroupType_t
                constexpr std::ptrdiff_t m_createdSpawnGroupHandles = 0x620; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_SpawnedEntityHandles = 0x638; // CUtlVector<CEntityHandle>
                constexpr std::ptrdiff_t m_ScriptSpawnCallback = 0x650; // HSCRIPT
                constexpr std::ptrdiff_t m_ScriptCallbackScope = 0x658; // HSCRIPT
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_FlashlightServices {
            }
            // Parent: CBasePlayerController
            // Field count: 68
            //
            // Metadata:
            // MNetworkUserGroupProxy
            // MNetworkUserGroupProxy
            // MNetworkUserGroupProxy
            // MNetworkUserGroupProxy
            // NetworkVarNames: m_pInGameMoneyServices (CCSPlayerController_InGameMoneyServices*)
            // NetworkVarNames: m_pInventoryServices (CCSPlayerController_InventoryServices*)
            // NetworkVarNames: m_pActionTrackingServices (CCSPlayerController_ActionTrackingServices*)
            // NetworkVarNames: m_pDamageServices (CCSPlayerController_DamageServices*)
            // NetworkVarNames: m_iPing (uint32)
            // NetworkVarNames: m_bHasCommunicationAbuseMute (bool)
            // NetworkVarNames: m_uiCommunicationMuteFlags (uint32)
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
            // NetworkVarNames: m_rtActiveMissionPeriod (RTime32)
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
            // NetworkVarNames: m_recentKillQueue (uint8)
            // NetworkVarNames: m_nFirstKill (uint8)
            // NetworkVarNames: m_nKillCount (uint8)
            // NetworkVarNames: m_bMvpNoMusic (bool)
            // NetworkVarNames: m_eMvpReason (int)
            // NetworkVarNames: m_iMusicKitID (int)
            // NetworkVarNames: m_iMusicKitMVPs (int)
            // NetworkVarNames: m_iMVPs (int)
            // NetworkVarNames: m_bFireBulletsSeedSynchronized (bool)
            namespace CCSPlayerController {
                constexpr std::ptrdiff_t m_pInGameMoneyServices = 0x7F8; // CCSPlayerController_InGameMoneyServices*
                constexpr std::ptrdiff_t m_pInventoryServices = 0x800; // CCSPlayerController_InventoryServices*
                constexpr std::ptrdiff_t m_pActionTrackingServices = 0x808; // CCSPlayerController_ActionTrackingServices*
                constexpr std::ptrdiff_t m_pDamageServices = 0x810; // CCSPlayerController_DamageServices*
                constexpr std::ptrdiff_t m_iPing = 0x818; // uint32
                constexpr std::ptrdiff_t m_bHasCommunicationAbuseMute = 0x81C; // bool
                constexpr std::ptrdiff_t m_uiCommunicationMuteFlags = 0x820; // uint32
                constexpr std::ptrdiff_t m_szCrosshairCodes = 0x828; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iPendingTeamNum = 0x830; // uint8
                constexpr std::ptrdiff_t m_flForceTeamTime = 0x834; // GameTime_t
                constexpr std::ptrdiff_t m_iCompTeammateColor = 0x838; // int32
                constexpr std::ptrdiff_t m_bEverPlayedOnTeam = 0x83C; // bool
                constexpr std::ptrdiff_t m_flPreviousForceJoinTeamTime = 0x840; // GameTime_t
                constexpr std::ptrdiff_t m_szClan = 0x848; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sSanitizedPlayerName = 0x850; // CUtlString
                constexpr std::ptrdiff_t m_iCoachingTeam = 0x858; // int32
                constexpr std::ptrdiff_t m_nPlayerDominated = 0x860; // uint64
                constexpr std::ptrdiff_t m_nPlayerDominatingMe = 0x868; // uint64
                constexpr std::ptrdiff_t m_iCompetitiveRanking = 0x870; // int32
                constexpr std::ptrdiff_t m_iCompetitiveWins = 0x874; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankType = 0x878; // int8
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Win = 0x87C; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Loss = 0x880; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Tie = 0x884; // int32
                constexpr std::ptrdiff_t m_nEndMatchNextMapVote = 0x888; // int32
                constexpr std::ptrdiff_t m_unActiveQuestId = 0x88C; // uint16
                constexpr std::ptrdiff_t m_rtActiveMissionPeriod = 0x890; // uint32
                constexpr std::ptrdiff_t m_nQuestProgressReason = 0x894; // QuestProgress::Reason
                constexpr std::ptrdiff_t m_unPlayerTvControlFlags = 0x898; // uint32
                constexpr std::ptrdiff_t m_iDraftIndex = 0x8C8; // int32
                constexpr std::ptrdiff_t m_msQueuedModeDisconnectionTimestamp = 0x8CC; // uint32
                constexpr std::ptrdiff_t m_uiAbandonRecordedReason = 0x8D0; // uint32
                constexpr std::ptrdiff_t m_eNetworkDisconnectionReason = 0x8D4; // uint32
                constexpr std::ptrdiff_t m_bCannotBeKicked = 0x8D8; // bool
                constexpr std::ptrdiff_t m_bEverFullyConnected = 0x8D9; // bool
                constexpr std::ptrdiff_t m_bAbandonAllowsSurrender = 0x8DA; // bool
                constexpr std::ptrdiff_t m_bAbandonOffersInstantSurrender = 0x8DB; // bool
                constexpr std::ptrdiff_t m_bDisconnection1MinWarningPrinted = 0x8DC; // bool
                constexpr std::ptrdiff_t m_bScoreReported = 0x8DD; // bool
                constexpr std::ptrdiff_t m_nDisconnectionTick = 0x8E0; // int32
                constexpr std::ptrdiff_t m_bControllingBot = 0x8F0; // bool
                constexpr std::ptrdiff_t m_bHasControlledBotThisRound = 0x8F1; // bool
                constexpr std::ptrdiff_t m_bHasBeenControlledByPlayerThisRound = 0x8F2; // bool
                constexpr std::ptrdiff_t m_nBotsControlledThisRound = 0x8F4; // int32
                constexpr std::ptrdiff_t m_bCanControlObservedBot = 0x8F8; // bool
                constexpr std::ptrdiff_t m_hPlayerPawn = 0x8FC; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_hObserverPawn = 0x900; // CHandle<C_CSObserverPawn>
                constexpr std::ptrdiff_t m_bPawnIsAlive = 0x904; // bool
                constexpr std::ptrdiff_t m_iPawnHealth = 0x908; // uint32
                constexpr std::ptrdiff_t m_iPawnArmor = 0x90C; // int32
                constexpr std::ptrdiff_t m_bPawnHasDefuser = 0x910; // bool
                constexpr std::ptrdiff_t m_bPawnHasHelmet = 0x911; // bool
                constexpr std::ptrdiff_t m_nPawnCharacterDefIndex = 0x912; // uint16
                constexpr std::ptrdiff_t m_iPawnLifetimeStart = 0x914; // int32
                constexpr std::ptrdiff_t m_iPawnLifetimeEnd = 0x918; // int32
                constexpr std::ptrdiff_t m_iPawnBotDifficulty = 0x91C; // int32
                constexpr std::ptrdiff_t m_hOriginalControllerOfCurrentPawn = 0x920; // CHandle<CCSPlayerController>
                constexpr std::ptrdiff_t m_iScore = 0x924; // int32
                constexpr std::ptrdiff_t m_recentKillQueue = 0x928; // uint8[8]
                constexpr std::ptrdiff_t m_nFirstKill = 0x930; // uint8
                constexpr std::ptrdiff_t m_nKillCount = 0x931; // uint8
                constexpr std::ptrdiff_t m_bMvpNoMusic = 0x932; // bool
                constexpr std::ptrdiff_t m_eMvpReason = 0x934; // int32
                constexpr std::ptrdiff_t m_iMusicKitID = 0x938; // int32
                constexpr std::ptrdiff_t m_iMusicKitMVPs = 0x93C; // int32
                constexpr std::ptrdiff_t m_iMVPs = 0x940; // int32
                constexpr std::ptrdiff_t m_bIsPlayerNameDirty = 0x944; // bool
                constexpr std::ptrdiff_t m_bFireBulletsSeedSynchronized = 0x945; // bool
            }
            // Parent: C_CSGO_TeamIntroCharacterPosition
            // Field count: 0
            namespace C_CSGO_TeamIntroCounterTerroristPosition {
            }
            // Parent: C_BaseFlex
            // Field count: 4
            namespace C_CSGO_PreviewModel {
                constexpr std::ptrdiff_t m_defaultAnim = 0x1368; // CUtlString
                constexpr std::ptrdiff_t m_nDefaultAnimLoopMode = 0x1370; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_flInitialModelScale = 0x1374; // float32
                constexpr std::ptrdiff_t m_sInitialWeaponState = 0x1378; // CUtlString
            }
            // Parent: C_CSGO_TeamPreviewCharacterPosition
            // Field count: 0
            namespace C_CSGO_TeamSelectCharacterPosition {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleOrdered__InstanceState_t {
                constexpr std::ptrdiff_t m_nNextIndex = 0x0; // int32
            }
            // Parent: C_SoundEventEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_vMins (Vector)
            // NetworkVarNames: m_vMaxs (Vector)
            namespace C_SoundEventAABBEntity {
                constexpr std::ptrdiff_t m_vMins = 0x6C0; // Vector
                constexpr std::ptrdiff_t m_vMaxs = 0x6CC; // Vector
            }
            // Parent: CPlayer_MovementServices_Humanoid
            // Field count: 39
            //
            // Metadata:
            // NetworkVarNames: m_vecLadderNormal (Vector)
            // NetworkVarNames: m_nLadderSurfacePropIndex (int)
            // NetworkVarNames: m_flDuckAmount (float)
            // NetworkVarNames: m_flDuckSpeed (float)
            // NetworkVarNames: m_bDuckOverride (bool)
            // NetworkVarNames: m_bDesiresDuck (bool)
            // NetworkVarNames: m_flDuckOffset (float)
            // NetworkVarNames: m_nDuckTimeMsecs (uint32)
            // NetworkVarNames: m_nDuckJumpTimeMsecs (uint32)
            // NetworkVarNames: m_nJumpTimeMsecs (uint32)
            // NetworkVarNames: m_flLastDuckTime (float)
            // NetworkVarNames: m_nGameCodeHasMovedPlayerAfterCommand (int)
            // NetworkVarNames: m_bOldJumpPressed (bool)
            // NetworkVarNames: m_fStashGrenadeParameterWhen (GameTime_t)
            // NetworkVarNames: m_nButtonDownMaskPrev (ButtonBitMask_t)
            // NetworkVarNames: m_flOffsetTickCompleteTime (float)
            // NetworkVarNames: m_flOffsetTickStashedSpeed (float)
            // NetworkVarNames: m_flStamina (float)
            // NetworkVarNames: m_bWasSurfing (bool)
            namespace CCSPlayer_MovementServices {
                constexpr std::ptrdiff_t m_vecLadderNormal = 0x278; // Vector
                constexpr std::ptrdiff_t m_nLadderSurfacePropIndex = 0x284; // int32
                constexpr std::ptrdiff_t m_flDuckAmount = 0x288; // float32
                constexpr std::ptrdiff_t m_flDuckSpeed = 0x28C; // float32
                constexpr std::ptrdiff_t m_bDuckOverride = 0x290; // bool
                constexpr std::ptrdiff_t m_bDesiresDuck = 0x291; // bool
                constexpr std::ptrdiff_t m_flDuckOffset = 0x294; // float32
                constexpr std::ptrdiff_t m_nDuckTimeMsecs = 0x298; // uint32
                constexpr std::ptrdiff_t m_nDuckJumpTimeMsecs = 0x29C; // uint32
                constexpr std::ptrdiff_t m_nJumpTimeMsecs = 0x2A0; // uint32
                constexpr std::ptrdiff_t m_flLastDuckTime = 0x2A4; // float32
                constexpr std::ptrdiff_t m_vecLastPositionAtFullCrouchSpeed = 0x2B0; // Vector2D
                constexpr std::ptrdiff_t m_duckUntilOnGround = 0x2B8; // bool
                constexpr std::ptrdiff_t m_bHasWalkMovedSinceLastJump = 0x2B9; // bool
                constexpr std::ptrdiff_t m_bInStuckTest = 0x2BA; // bool
                constexpr std::ptrdiff_t m_nTraceCount = 0x4C8; // int32
                constexpr std::ptrdiff_t m_StuckLast = 0x4CC; // int32
                constexpr std::ptrdiff_t m_bSpeedCropped = 0x4D0; // bool
                constexpr std::ptrdiff_t m_nOldWaterLevel = 0x4D4; // int32
                constexpr std::ptrdiff_t m_flWaterEntryTime = 0x4D8; // float32
                constexpr std::ptrdiff_t m_vecForward = 0x4DC; // Vector
                constexpr std::ptrdiff_t m_vecLeft = 0x4E8; // Vector
                constexpr std::ptrdiff_t m_vecUp = 0x4F4; // Vector
                constexpr std::ptrdiff_t m_nGameCodeHasMovedPlayerAfterCommand = 0x500; // int32
                constexpr std::ptrdiff_t m_bOldJumpPressed = 0x504; // bool
                constexpr std::ptrdiff_t m_flJumpPressedTime = 0x508; // float32
                constexpr std::ptrdiff_t m_fStashGrenadeParameterWhen = 0x50C; // GameTime_t
                constexpr std::ptrdiff_t m_nButtonDownMaskPrev = 0x510; // uint64
                constexpr std::ptrdiff_t m_flOffsetTickCompleteTime = 0x518; // float32
                constexpr std::ptrdiff_t m_flOffsetTickStashedSpeed = 0x51C; // float32
                constexpr std::ptrdiff_t m_flStamina = 0x520; // float32
                constexpr std::ptrdiff_t m_flHeightAtJumpStart = 0x524; // float32
                constexpr std::ptrdiff_t m_flMaxJumpHeightThisJump = 0x528; // float32
                constexpr std::ptrdiff_t m_flMaxJumpHeightLastJump = 0x52C; // float32
                constexpr std::ptrdiff_t m_flStaminaAtJumpStart = 0x530; // float32
                constexpr std::ptrdiff_t m_flAccumulatedJumpError = 0x534; // float32
                constexpr std::ptrdiff_t m_flTicksSinceLastSurfingDetected = 0x538; // float32
                constexpr std::ptrdiff_t m_bWasSurfing = 0x53C; // bool
                constexpr std::ptrdiff_t m_vecInputRotated = 0x5CC; // Vector
            }
            // Parent: 
            // Field count: 5
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
            // Parent: C_BaseEntity
            // Field count: 0
            namespace C_TintController {
            }
            // Parent: C_CSWeaponBase
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bSequenceInProgress (bool)
            // NetworkVarNames: m_bRedraw (bool)
            namespace C_WeaponBaseItem {
                constexpr std::ptrdiff_t m_bSequenceInProgress = 0x1F80; // bool
                constexpr std::ptrdiff_t m_bRedraw = 0x1F81; // bool
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            namespace CWaterSplasher {
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            namespace C_FuncBrush {
            }
            // Parent: 
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_Transforms (CTransform)
            // NetworkVarNames: m_hOwner (EHANDLE)
            namespace PhysicsRagdollPose_t {
                constexpr std::ptrdiff_t m_Transforms = 0x8; // C_NetworkUtlVectorBase<CTransform>
                constexpr std::ptrdiff_t m_hOwner = 0x20; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bSetFromDebugHistory = 0x24; // bool
            }
            // Parent: CEntityComponent
            // Field count: 10
            namespace CPropDataComponent {
                constexpr std::ptrdiff_t m_flDmgModBullet = 0x10; // float32
                constexpr std::ptrdiff_t m_flDmgModClub = 0x14; // float32
                constexpr std::ptrdiff_t m_flDmgModExplosive = 0x18; // float32
                constexpr std::ptrdiff_t m_flDmgModFire = 0x1C; // float32
                constexpr std::ptrdiff_t m_iszPhysicsDamageTableName = 0x20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszBasePropData = 0x28; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nInteractions = 0x30; // int32
                constexpr std::ptrdiff_t m_bSpawnMotionDisabled = 0x34; // bool
                constexpr std::ptrdiff_t m_nDisableTakePhysicsDamageSpawnFlag = 0x38; // int32
                constexpr std::ptrdiff_t m_nMotionDisabledSpawnFlag = 0x3C; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_LimitCount__InstanceState_t {
                constexpr std::ptrdiff_t m_nCurrentCount = 0x0; // int32
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bMagazineRemoved (bool)
            namespace C_WeaponCZ75a {
                constexpr std::ptrdiff_t m_bMagazineRemoved = 0x1FB0; // bool
            }
            // Parent: C_BaseModelEntity
            // Field count: 7
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
                constexpr std::ptrdiff_t m_Flags = 0xEB0; // uint8
                constexpr std::ptrdiff_t m_LightStyle = 0xEB1; // uint8
                constexpr std::ptrdiff_t m_Radius = 0xEB4; // float32
                constexpr std::ptrdiff_t m_Exponent = 0xEB8; // int32
                constexpr std::ptrdiff_t m_InnerAngle = 0xEBC; // float32
                constexpr std::ptrdiff_t m_OuterAngle = 0xEC0; // float32
                constexpr std::ptrdiff_t m_SpotRadius = 0xEC4; // float32
            }
            // Parent: 
            // Field count: 3
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
            // Parent: C_SoundEventEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_flRadius (float)
            namespace C_SoundEventSphereEntity {
                constexpr std::ptrdiff_t m_flRadius = 0x6C0; // float32
            }
            // Parent: CPlayerControllerComponent
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_nSendUpdate (int)
            // NetworkVarNames: m_DamageList (CDamageRecord)
            // MNetworkReplayCompatField
            namespace CCSPlayerController_DamageServices {
                constexpr std::ptrdiff_t m_nSendUpdate = 0x40; // int32
                constexpr std::ptrdiff_t m_DamageList = 0x48; // C_UtlVectorEmbeddedNetworkVar<CDamageRecord>
            }
            // Parent: C_CSGO_PreviewPlayer
            // Field count: 0
            namespace C_CSGO_TeamPreviewModel {
            }
            // Parent: C_TonemapController2
            // Field count: 0
            namespace C_TonemapController2Alias_env_tonemap_controller2 {
            }
            // Parent: C_BaseModelEntity
            // Field count: 24
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
                constexpr std::ptrdiff_t m_nfxFireDamageEffect = 0xEF0; // ParticleIndex_t
                constexpr std::ptrdiff_t m_hInfernoPointsSnapshot = 0xEF8; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_hInfernoFillerPointsSnapshot = 0xF00; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_hInfernoOutlinePointsSnapshot = 0xF08; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_hInfernoClimbingOutlinePointsSnapshot = 0xF10; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_hInfernoDecalsSnapshot = 0xF18; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_firePositions = 0xF20; // Vector[64]
                constexpr std::ptrdiff_t m_fireParentPositions = 0x1220; // Vector[64]
                constexpr std::ptrdiff_t m_bFireIsBurning = 0x1520; // bool[64]
                constexpr std::ptrdiff_t m_BurnNormal = 0x1560; // Vector[64]
                constexpr std::ptrdiff_t m_fireCount = 0x1860; // int32
                constexpr std::ptrdiff_t m_nInfernoType = 0x1864; // int32
                constexpr std::ptrdiff_t m_nFireLifetime = 0x1868; // float32
                constexpr std::ptrdiff_t m_bInPostEffectTime = 0x186C; // bool
                constexpr std::ptrdiff_t m_lastFireCount = 0x1870; // int32
                constexpr std::ptrdiff_t m_nFireEffectTickBegin = 0x1874; // int32
                constexpr std::ptrdiff_t m_drawableCount = 0x8480; // int32
                constexpr std::ptrdiff_t m_blosCheck = 0x8484; // bool
                constexpr std::ptrdiff_t m_nlosperiod = 0x8488; // int32
                constexpr std::ptrdiff_t m_maxFireHalfWidth = 0x848C; // float32
                constexpr std::ptrdiff_t m_maxFireHeight = 0x8490; // float32
                constexpr std::ptrdiff_t m_minBounds = 0x8494; // Vector
                constexpr std::ptrdiff_t m_maxBounds = 0x84A0; // Vector
                constexpr std::ptrdiff_t m_flLastGrassBurnThink = 0x84AC; // float32
            }
            // Parent: CBaseFilter
            // Field count: 0
            namespace CFilterLOS {
            }
            // Parent: C_BaseEntity
            // Field count: 7
            namespace CPointOrient {
                constexpr std::ptrdiff_t m_iszSpawnTargetName = 0x5F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hTarget = 0x600; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bActive = 0x604; // bool
                constexpr std::ptrdiff_t m_nGoalDirection = 0x608; // PointOrientGoalDirectionType_t
                constexpr std::ptrdiff_t m_nConstraint = 0x60C; // PointOrientConstraint_t
                constexpr std::ptrdiff_t m_flMaxTurnRate = 0x610; // float32
                constexpr std::ptrdiff_t m_flLastGameTime = 0x614; // GameTime_t
            }
            // Parent: C_BaseEntity
            // Field count: 1
            namespace C_GlobalLight {
                constexpr std::ptrdiff_t m_WindClothForceHandle = 0xAC0; // uint16
            }
            // Parent: C_BaseEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
            namespace C_EnvWindClientside {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x5F8; // C_EnvWindShared
            }
            // Parent: 
            // Field count: 6
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
            // Parent: C_BaseCSGrenadeProjectile
            // Field count: 0
            namespace C_FlashbangProjectile {
            }
            // Parent: 
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_hOwner (CHandle<CBaseModelEntity>)
            // NetworkVarNames: m_nLastHitDamageLevel (int)
            namespace CDestructiblePartsComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x0; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_vecDamageTakenByHitGroup = 0x48; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_hOwner = 0x60; // CHandle<C_BaseModelEntity>
                constexpr std::ptrdiff_t m_nLastHitDamageLevel = 0x64; // int32
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponP90 {
            }
            // Parent: C_BaseEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
            namespace C_EnvWind {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x5F8; // C_EnvWindShared
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Field count: 0
            namespace C_CSGO_TerroristTeamIntroCamera {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Step_DebugLog {
            }
            // Parent: CPlayerControllerComponent
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_perRoundStats (CSPerRoundStats_t)
            // NetworkVarNames: m_matchStats (CSMatchStats_t)
            // NetworkVarNames: m_iNumRoundKills (int)
            // NetworkVarNames: m_iNumRoundKillsHeadshots (int)
            // NetworkVarNames: m_flTotalRoundDamageDealt (float)
            namespace CCSPlayerController_ActionTrackingServices {
                constexpr std::ptrdiff_t m_perRoundStats = 0x40; // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
                constexpr std::ptrdiff_t m_matchStats = 0xA8; // CSMatchStats_t
                constexpr std::ptrdiff_t m_iNumRoundKills = 0x128; // int32
                constexpr std::ptrdiff_t m_iNumRoundKillsHeadshots = 0x12C; // int32
                constexpr std::ptrdiff_t m_flTotalRoundDamageDealt = 0x130; // float32
            }
            // Parent: CBodyComponentSkeletonInstance
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_animationController (CBaseAnimGraphController)
            namespace CBodyComponentBaseAnimGraph {
                constexpr std::ptrdiff_t m_animationController = 0x5B0; // CBaseAnimGraphController
            }
            // Parent: C_CSGO_PreviewModel
            // Field count: 0
            namespace C_CSGO_PreviewModelAlias_csgo_item_previewmodel {
            }
            // Parent: C_PointEntity
            // Field count: 0
            namespace C_InfoInstructorHintHostageRescueZone {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseYieldingInflow {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseNodeDynamicOutflows_t {
                constexpr std::ptrdiff_t m_Outflows = 0x0; // CUtlVector<PulseNodeDynamicOutflows_t::DynamicOutflow_t>
            }
            // Parent: C_BaseTrigger
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_flFluidDensity (float)
            namespace C_TriggerBuoyancy {
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0xFF0; // CBuoyancyHelper
                constexpr std::ptrdiff_t m_flFluidDensity = 0x1108; // float32
            }
            // Parent: CPlayer_MovementServices
            // Field count: 12
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
                constexpr std::ptrdiff_t m_flStepSoundTime = 0x238; // float32
                constexpr std::ptrdiff_t m_flFallVelocity = 0x23C; // float32
                constexpr std::ptrdiff_t m_bInCrouch = 0x240; // bool
                constexpr std::ptrdiff_t m_nCrouchState = 0x244; // uint32
                constexpr std::ptrdiff_t m_flCrouchTransitionStartTime = 0x248; // GameTime_t
                constexpr std::ptrdiff_t m_bDucked = 0x24C; // bool
                constexpr std::ptrdiff_t m_bDucking = 0x24D; // bool
                constexpr std::ptrdiff_t m_bInDuckJump = 0x24E; // bool
                constexpr std::ptrdiff_t m_groundNormal = 0x250; // Vector
                constexpr std::ptrdiff_t m_flSurfaceFriction = 0x25C; // float32
                constexpr std::ptrdiff_t m_surfaceProps = 0x260; // CUtlStringToken
                constexpr std::ptrdiff_t m_nStepside = 0x270; // int32
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_IsRequirementValid__Criteria_t {
                constexpr std::ptrdiff_t m_bIsValid = 0x0; // bool
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponTec9 {
            }
            // Parent: C_BreakableProp
            // Field count: 5
            namespace C_PhysPropClientside {
                constexpr std::ptrdiff_t m_flTouchDelta = 0x1300; // GameTime_t
                constexpr std::ptrdiff_t m_fDeathTime = 0x1304; // GameTime_t
                constexpr std::ptrdiff_t m_vecDamagePosition = 0x1308; // Vector
                constexpr std::ptrdiff_t m_vecDamageDirection = 0x1314; // Vector
                constexpr std::ptrdiff_t m_nDamageType = 0x1320; // DamageTypes_t
            }
            // Parent: C_BaseToggle
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bIsUsable (bool)
            namespace C_BaseDoor {
                constexpr std::ptrdiff_t m_bIsUsable = 0xEB0; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_iEnemy5Ks (int)
            // NetworkVarNames: m_iEnemy4Ks (int)
            // NetworkVarNames: m_iEnemy3Ks (int)
            // NetworkVarNames: m_iEnemyKnifeKills (int)
            // NetworkVarNames: m_iEnemyTaserKills (int)
            namespace CSMatchStats_t {
                constexpr std::ptrdiff_t m_iEnemy5Ks = 0x68; // int32
                constexpr std::ptrdiff_t m_iEnemy4Ks = 0x6C; // int32
                constexpr std::ptrdiff_t m_iEnemy3Ks = 0x70; // int32
                constexpr std::ptrdiff_t m_iEnemyKnifeKills = 0x74; // int32
                constexpr std::ptrdiff_t m_iEnemyTaserKills = 0x78; // int32
            }
            // Parent: 
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_ID (CUtlStringToken)
            // NetworkVarNames: m_Values (Vector4D)
            namespace EntityRenderAttribute_t {
                constexpr std::ptrdiff_t m_ID = 0x30; // CUtlStringToken
                constexpr std::ptrdiff_t m_Values = 0x34; // Vector4D
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_ObservableVariableListener {
                constexpr std::ptrdiff_t m_nBlackboardReference = 0x80; // PulseRuntimeBlackboardReferenceIndex_t
                constexpr std::ptrdiff_t m_bSelfReference = 0x82; // bool
            }
            // Parent: None
            // Field count: 0
            namespace CFilterMultipleAPI {
            }
            // Parent: CHostageRescueZoneShim
            // Field count: 0
            namespace CHostageRescueZone {
            }
            // Parent: 
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_hModel (HModelStrong)
            // NetworkVarNames: m_bClientClothCreationSuppressed (bool)
            // NetworkVarNames: m_MeshGroupMask (MeshGroupMask_t)
            // NetworkVarNames: m_nBodyGroupChoices (int32)
            // NetworkVarNames: m_nIdealMotionType (int8)
            namespace CModelState {
                constexpr std::ptrdiff_t m_hModel = 0xD0; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_ModelName = 0xD8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bClientClothCreationSuppressed = 0x1A9; // bool
                constexpr std::ptrdiff_t m_MeshGroupMask = 0x250; // uint64
                constexpr std::ptrdiff_t m_nBodyGroupChoices = 0x2A0; // C_NetworkUtlVectorBase<int32>
                constexpr std::ptrdiff_t m_nIdealMotionType = 0x2EA; // int8
                constexpr std::ptrdiff_t m_nForceLOD = 0x2EB; // int8
                constexpr std::ptrdiff_t m_nClothUpdateFlags = 0x2EC; // int8
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_LerpCameraSettings__CursorState_t {
                constexpr std::ptrdiff_t m_hCamera = 0x8; // CHandle<C_PointCamera>
                constexpr std::ptrdiff_t m_OverlaidStart = 0xC; // PointCameraSettings_t
                constexpr std::ptrdiff_t m_OverlaidEnd = 0x1C; // PointCameraSettings_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleOrdered {
                constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: C_CSWeaponBase
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_zoomLevel (int)
            // NetworkVarNames: m_iBurstShotsRemaining (int)
            // NetworkVarNames: m_bNeedsBoltAction (bool)
            // NetworkVarNames: m_nRevolverCylinderIdx (int32)
            namespace C_CSWeaponBaseGun {
                constexpr std::ptrdiff_t m_zoomLevel = 0x1F80; // int32
                constexpr std::ptrdiff_t m_iBurstShotsRemaining = 0x1F84; // int32
                constexpr std::ptrdiff_t m_iSilencerBodygroup = 0x1F88; // int32
                constexpr std::ptrdiff_t m_silencedModelIndex = 0x1F98; // int32
                constexpr std::ptrdiff_t m_inPrecache = 0x1F9C; // bool
                constexpr std::ptrdiff_t m_bNeedsBoltAction = 0x1F9D; // bool
                constexpr std::ptrdiff_t m_nRevolverCylinderIdx = 0x1FA0; // int32
            }
            // Parent: C_GameRulesProxy
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_pGameRules (C_CSGameRules*)
            namespace C_CSGameRulesProxy {
                constexpr std::ptrdiff_t m_pGameRules = 0x5F8; // C_CSGameRules*
            }
            // Parent: 
            // Field count: 17
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
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponP250 {
            }
            // Parent: C_PhysicsProp
            // Field count: 1
            //
            // Metadata:
            // MNetworkExcludeByName
            // NetworkVarNames: m_ShardDesc (shard_model_desc_t)
            namespace C_ShatterGlassShardPhysics {
                constexpr std::ptrdiff_t m_ShardDesc = 0x1318; // shard_model_desc_t
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterMassGreater {
                constexpr std::ptrdiff_t m_fFilterMass = 0x650; // float32
            }
            // Parent: C_BaseModelEntity
            // Field count: 13
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
                constexpr std::ptrdiff_t m_flStartTime = 0xEB8; // GameTime_t
                constexpr std::ptrdiff_t m_flFadeInStart = 0xEBC; // float32
                constexpr std::ptrdiff_t m_flFadeInLength = 0xEC0; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelStart = 0xEC4; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelLength = 0xEC8; // float32
                constexpr std::ptrdiff_t m_flFadeOutStart = 0xECC; // float32
                constexpr std::ptrdiff_t m_flFadeOutLength = 0xED0; // float32
                constexpr std::ptrdiff_t m_flNextSparkTime = 0xED4; // GameTime_t
                constexpr std::ptrdiff_t m_nDissolveType = 0xED8; // EntityDisolveType_t
                constexpr std::ptrdiff_t m_vDissolverOrigin = 0xEDC; // Vector
                constexpr std::ptrdiff_t m_nMagnitude = 0xEE8; // uint32
                constexpr std::ptrdiff_t m_bCoreExplode = 0xEEC; // bool
                constexpr std::ptrdiff_t m_bLinkedToServerEnt = 0xEED; // bool
            }
            // Parent: C_SoundOpvarSetAABBEntity
            // Field count: 0
            namespace C_SoundOpvarSetOBBEntity {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_WeaponSequence (CUtlString)
            namespace CCSGameModeRules_ArmsRace {
                constexpr std::ptrdiff_t m_WeaponSequence = 0x30; // C_NetworkUtlVectorBase<CUtlString>
            }
            // Parent: C_FuncBrush
            // Field count: 8
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
                constexpr std::ptrdiff_t m_targetCamera = 0xEB0; // CUtlString
                constexpr std::ptrdiff_t m_nResolutionEnum = 0xEB8; // int32
                constexpr std::ptrdiff_t m_bRenderShadows = 0xEBC; // bool
                constexpr std::ptrdiff_t m_bUseUniqueColorTarget = 0xEBD; // bool
                constexpr std::ptrdiff_t m_brushModelName = 0xEC0; // CUtlString
                constexpr std::ptrdiff_t m_hTargetCamera = 0xEC8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bEnabled = 0xECC; // bool
                constexpr std::ptrdiff_t m_bDraw3DSkybox = 0xECD; // bool
            }
            // Parent: CBaseAnimGraph
            // Field count: 14
            namespace C_ClientRagdoll {
                constexpr std::ptrdiff_t m_bFadeOut = 0x1158; // bool
                constexpr std::ptrdiff_t m_bImportant = 0x1159; // bool
                constexpr std::ptrdiff_t m_flEffectTime = 0x115C; // GameTime_t
                constexpr std::ptrdiff_t m_gibDespawnTime = 0x1160; // GameTime_t
                constexpr std::ptrdiff_t m_iCurrentFriction = 0x1164; // int32
                constexpr std::ptrdiff_t m_iMinFriction = 0x1168; // int32
                constexpr std::ptrdiff_t m_iMaxFriction = 0x116C; // int32
                constexpr std::ptrdiff_t m_iFrictionAnimState = 0x1170; // int32
                constexpr std::ptrdiff_t m_bReleaseRagdoll = 0x1174; // bool
                constexpr std::ptrdiff_t m_iEyeAttachment = 0x1175; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_bFadingOut = 0x1176; // bool
                constexpr std::ptrdiff_t m_flScaleEnd = 0x1178; // float32[10]
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0x11A0; // GameTime_t[10]
                constexpr std::ptrdiff_t m_flScaleTimeEnd = 0x11C8; // GameTime_t[10]
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseSelectorOutflowList_t {
                constexpr std::ptrdiff_t m_Outflows = 0x0; // CUtlVector<OutflowWithRequirements_t>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_PlaySequence__CursorState_t {
                constexpr std::ptrdiff_t m_hTarget = 0x0; // CHandle<CBaseAnimGraph>
            }
            // Parent: CBodyComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_skeletonInstance (CSkeletonInstance)
            namespace CBodyComponentSkeletonInstance {
                constexpr std::ptrdiff_t m_skeletonInstance = 0x80; // CSkeletonInstance
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace C_CS2WeaponModuleBase {
            }
            // Parent: C_BaseEntity
            // Field count: 8
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
                constexpr std::ptrdiff_t m_nVariant = 0x5F8; // int32
                constexpr std::ptrdiff_t m_nRandom = 0x5FC; // int32
                constexpr std::ptrdiff_t m_nOrdinal = 0x600; // int32
                constexpr std::ptrdiff_t m_sWeaponName = 0x608; // CUtlString
                constexpr std::ptrdiff_t m_xuid = 0x610; // uint64
                constexpr std::ptrdiff_t m_agentItem = 0x618; // C_EconItemView
                constexpr std::ptrdiff_t m_glovesItem = 0xA90; // C_EconItemView
                constexpr std::ptrdiff_t m_weaponItem = 0xF08; // C_EconItemView
            }
            // Parent: C_BaseCSGrenadeProjectile
            // Field count: 10
            //
            // Metadata:
            // NetworkVarNames: m_nSmokeEffectTickBegin (int)
            // NetworkVarNames: m_bDidSmokeEffect (bool)
            // NetworkVarNames: m_nRandomSeed (int)
            // NetworkVarNames: m_vSmokeColor (Vector)
            // NetworkVarNames: m_vSmokeDetonationPos (Vector)
            // NetworkVarNames: m_VoxelFrameData (uint8)
            // NetworkVarNames: m_nVoxelFrameDataSize (int)
            // NetworkVarNames: m_nVoxelUpdate (int)
            namespace C_SmokeGrenadeProjectile {
                constexpr std::ptrdiff_t m_nSmokeEffectTickBegin = 0x1468; // int32
                constexpr std::ptrdiff_t m_bDidSmokeEffect = 0x146C; // bool
                constexpr std::ptrdiff_t m_nRandomSeed = 0x1470; // int32
                constexpr std::ptrdiff_t m_vSmokeColor = 0x1474; // Vector
                constexpr std::ptrdiff_t m_vSmokeDetonationPos = 0x1480; // Vector
                constexpr std::ptrdiff_t m_VoxelFrameData = 0x1490; // C_NetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_nVoxelFrameDataSize = 0x14A8; // int32
                constexpr std::ptrdiff_t m_nVoxelUpdate = 0x14AC; // int32
                constexpr std::ptrdiff_t m_bSmokeVolumeDataReceived = 0x14B0; // bool
                constexpr std::ptrdiff_t m_bSmokeEffectSpawned = 0x14B1; // bool
            }
            // Parent: CEntityComponent
            // Field count: 1
            namespace CScriptComponent {
                constexpr std::ptrdiff_t m_scriptClassName = 0x30; // CUtlSymbolLarge
            }
            // Parent: CPlayerPawnComponent
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_vecSellbackPurchaseEntries (SellbackPurchaseEntry_t)
            namespace CCSPlayer_BuyServices {
                constexpr std::ptrdiff_t m_vecSellbackPurchaseEntries = 0x40; // C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace C_PortraitWorldCallbackHandler {
            }
            // Parent: C_BreakableProp
            // Field count: 23
            //
            // Metadata:
            // NetworkVarNames: m_bUseHitboxesForRenderBox (bool)
            // NetworkVarNames: m_bUseAnimGraph (bool)
            namespace C_DynamicProp {
                constexpr std::ptrdiff_t m_bUseHitboxesForRenderBox = 0x1300; // bool
                constexpr std::ptrdiff_t m_bUseAnimGraph = 0x1301; // bool
                constexpr std::ptrdiff_t m_pOutputAnimBegun = 0x1308; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOutputAnimOver = 0x1330; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOutputAnimLoopCycleOver = 0x1358; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAnimReachedStart = 0x1380; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAnimReachedEnd = 0x13A8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iszIdleAnim = 0x13D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nIdleAnimLoopMode = 0x13D8; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_bRandomizeCycle = 0x13DC; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0x13DD; // bool
                constexpr std::ptrdiff_t m_bFiredStartEndOutput = 0x13DE; // bool
                constexpr std::ptrdiff_t m_bForceNpcExclude = 0x13DF; // bool
                constexpr std::ptrdiff_t m_bCreateNonSolid = 0x13E0; // bool
                constexpr std::ptrdiff_t m_bIsOverrideProp = 0x13E1; // bool
                constexpr std::ptrdiff_t m_iInitialGlowState = 0x13E4; // int32
                constexpr std::ptrdiff_t m_nGlowRange = 0x13E8; // int32
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0x13EC; // int32
                constexpr std::ptrdiff_t m_glowColor = 0x13F0; // Color
                constexpr std::ptrdiff_t m_nGlowTeam = 0x13F4; // int32
                constexpr std::ptrdiff_t m_iCachedFrameCount = 0x13F8; // int32
                constexpr std::ptrdiff_t m_vecCachedRenderMins = 0x13FC; // Vector
                constexpr std::ptrdiff_t m_vecCachedRenderMaxs = 0x1408; // Vector
            }
            // Parent: C_Team
            // Field count: 10
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
                constexpr std::ptrdiff_t m_szTeamMatchStat = 0x6B0; // char[512]
                constexpr std::ptrdiff_t m_numMapVictories = 0x8B0; // int32
                constexpr std::ptrdiff_t m_bSurrendered = 0x8B4; // bool
                constexpr std::ptrdiff_t m_scoreFirstHalf = 0x8B8; // int32
                constexpr std::ptrdiff_t m_scoreSecondHalf = 0x8BC; // int32
                constexpr std::ptrdiff_t m_scoreOvertime = 0x8C0; // int32
                constexpr std::ptrdiff_t m_szClanTeamname = 0x8C4; // char[129]
                constexpr std::ptrdiff_t m_iClanID = 0x948; // uint32
                constexpr std::ptrdiff_t m_szTeamFlagImage = 0x94C; // char[8]
                constexpr std::ptrdiff_t m_szTeamLogoImage = 0x954; // char[8]
            }
            // Parent: C_CS2HudModelBase
            // Field count: 0
            namespace C_CS2HudModelWeapon {
            }
            // Parent: C_BaseModelEntity
            // Field count: 8
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
                constexpr std::ptrdiff_t m_bLoop = 0xEB0; // bool
                constexpr std::ptrdiff_t m_flFPS = 0xEB4; // float32
                constexpr std::ptrdiff_t m_hPositionKeys = 0xEB8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hRotationKeys = 0xEC0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_vAnimationBoundsMin = 0xEC8; // Vector
                constexpr std::ptrdiff_t m_vAnimationBoundsMax = 0xED4; // Vector
                constexpr std::ptrdiff_t m_flStartTime = 0xEE0; // float32
                constexpr std::ptrdiff_t m_flStartFrame = 0xEE4; // float32
            }
            // Parent: C_LightDirectionalEntity
            // Field count: 0
            namespace C_LightEnvironmentEntity {
            }
            // Parent: None
            // Field count: 0
            namespace CLogicRelayAPI {
            }
            // Parent: C_BaseTrigger
            // Field count: 13
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
                constexpr std::ptrdiff_t m_gravityScale = 0xFF0; // float32
                constexpr std::ptrdiff_t m_linearLimit = 0xFF4; // float32
                constexpr std::ptrdiff_t m_linearDamping = 0xFF8; // float32
                constexpr std::ptrdiff_t m_angularLimit = 0xFFC; // float32
                constexpr std::ptrdiff_t m_angularDamping = 0x1000; // float32
                constexpr std::ptrdiff_t m_linearForce = 0x1004; // float32
                constexpr std::ptrdiff_t m_flFrequency = 0x1008; // float32
                constexpr std::ptrdiff_t m_flDampingRatio = 0x100C; // float32
                constexpr std::ptrdiff_t m_vecLinearForcePointAt = 0x1010; // Vector
                constexpr std::ptrdiff_t m_bCollapseToForcePoint = 0x101C; // bool
                constexpr std::ptrdiff_t m_vecLinearForcePointAtWorld = 0x1020; // Vector
                constexpr std::ptrdiff_t m_vecLinearForceDirection = 0x102C; // Vector
                constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0x1038; // bool
            }
            // Parent: C_BasePropDoor
            // Field count: 0
            namespace C_PropDoorRotating {
            }
            // Parent: C_BaseEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Handle (CHandle<CBaseEntity>)
            // NetworkVarNames: m_bSendHandle (bool)
            namespace C_HandleTest {
                constexpr std::ptrdiff_t m_Handle = 0x5F8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bSendHandle = 0x5FC; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_worldName (string_t)
            // NetworkVarNames: m_layerName (string_t)
            // NetworkVarNames: m_bWorldLayerVisible (bool)
            // NetworkVarNames: m_bEntitiesSpawned (bool)
            namespace CInfoWorldLayer {
                constexpr std::ptrdiff_t m_pOutputOnEntitiesSpawned = 0x5F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_worldName = 0x620; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_layerName = 0x628; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bWorldLayerVisible = 0x630; // bool
                constexpr std::ptrdiff_t m_bEntitiesSpawned = 0x631; // bool
                constexpr std::ptrdiff_t m_bCreateAsChildSpawnGroup = 0x632; // bool
                constexpr std::ptrdiff_t m_hLayerSpawnGroup = 0x634; // uint32
                constexpr std::ptrdiff_t m_bWorldLayerActuallyVisible = 0x638; // bool
            }
            // Parent: CBodyComponentSkeletonInstance
            // Field count: 0
            namespace CBodyComponentBaseModelEntity {
            }
            // Parent: CBaseAnimGraph
            // Field count: 1
            namespace C_Multimeter {
                constexpr std::ptrdiff_t m_hTargetC4 = 0x1160; // CHandle<C_PlantedC4>
            }
            // Parent: C_BaseToggle
            // Field count: 11
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames: m_bDisabled (bool)
            namespace C_BaseTrigger {
                constexpr std::ptrdiff_t m_OnStartTouch = 0xEB0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStartTouchAll = 0xED8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEndTouch = 0xF00; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEndTouchAll = 0xF28; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTouching = 0xF50; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTouchingEachEntity = 0xF78; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnNotTouching = 0xFA0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_hTouchingEntities = 0xFC8; // CUtlVector<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_iFilterName = 0xFE0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFilter = 0xFE8; // CHandle<CBaseFilter>
                constexpr std::ptrdiff_t m_bDisabled = 0xFEC; // bool
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace FilterDamageType {
                constexpr std::ptrdiff_t m_iDamageType = 0x650; // int32
            }
            // Parent: 
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_Attributes (CEconItemAttribute)
            namespace CAttributeList {
                constexpr std::ptrdiff_t m_Attributes = 0x8; // C_UtlVectorEmbeddedNetworkVar<CEconItemAttribute>
                constexpr std::ptrdiff_t m_pManager = 0x70; // CAttributeManager*
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            namespace CPulseCell_Inflow_Wait {
                constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterProximity {
                constexpr std::ptrdiff_t m_flRadius = 0x650; // float32
            }
            // Parent: None
            // Field count: 21
            //
            // Metadata:
            // NetworkVarNames: m_vOrigin (VectorWS)
            // NetworkVarNames: m_vStart (VectorWS)
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
            // NetworkVarNames: m_nHitBox (int16)
            // NetworkVarNames: m_nColor (uint8)
            // NetworkVarNames: m_fFlags (uint8)
            // NetworkVarNames: m_nAttachmentIndex (AttachmentHandle_t)
            // NetworkVarNames: m_nAttachmentName (CUtlStringToken)
            // NetworkVarNames: m_iEffectName (uint16)
            // NetworkVarNames: m_nExplosionType (uint8)
            namespace CEffectData {
                constexpr std::ptrdiff_t m_vOrigin = 0x8; // VectorWS
                constexpr std::ptrdiff_t m_vStart = 0x14; // VectorWS
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
                constexpr std::ptrdiff_t m_nHitBox = 0x60; // int16
                constexpr std::ptrdiff_t m_nColor = 0x62; // uint8
                constexpr std::ptrdiff_t m_fFlags = 0x63; // uint8
                constexpr std::ptrdiff_t m_nAttachmentIndex = 0x64; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_nAttachmentName = 0x68; // CUtlStringToken
                constexpr std::ptrdiff_t m_iEffectName = 0x6C; // uint16
                constexpr std::ptrdiff_t m_nExplosionType = 0x6E; // uint8
            }
            // Parent: C_BaseModelEntity
            // Field count: 24
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
                constexpr std::ptrdiff_t m_szSnapshotFileName = 0xEB0; // char[512]
                constexpr std::ptrdiff_t m_bActive = 0x10B0; // bool
                constexpr std::ptrdiff_t m_bFrozen = 0x10B1; // bool
                constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0x10B4; // float32
                constexpr std::ptrdiff_t m_nStopType = 0x10B8; // int32
                constexpr std::ptrdiff_t m_bAnimateDuringGameplayPause = 0x10BC; // bool
                constexpr std::ptrdiff_t m_iEffectIndex = 0x10C0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_flStartTime = 0x10C8; // GameTime_t
                constexpr std::ptrdiff_t m_flPreSimTime = 0x10CC; // float32
                constexpr std::ptrdiff_t m_vServerControlPoints = 0x10D0; // Vector[4]
                constexpr std::ptrdiff_t m_iServerControlPointAssignments = 0x1100; // uint8[4]
                constexpr std::ptrdiff_t m_hControlPointEnts = 0x1104; // CHandle<C_BaseEntity>[64]
                constexpr std::ptrdiff_t m_bNoSave = 0x1204; // bool
                constexpr std::ptrdiff_t m_bNoFreeze = 0x1205; // bool
                constexpr std::ptrdiff_t m_bNoRamp = 0x1206; // bool
                constexpr std::ptrdiff_t m_bStartActive = 0x1207; // bool
                constexpr std::ptrdiff_t m_iszEffectName = 0x1208; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszControlPointNames = 0x1210; // CUtlSymbolLarge[64]
                constexpr std::ptrdiff_t m_nDataCP = 0x1410; // int32
                constexpr std::ptrdiff_t m_vecDataCPValue = 0x1414; // Vector
                constexpr std::ptrdiff_t m_nTintCP = 0x1420; // int32
                constexpr std::ptrdiff_t m_clrTint = 0x1424; // Color
                constexpr std::ptrdiff_t m_bOldActive = 0x1448; // bool
                constexpr std::ptrdiff_t m_bOldFrozen = 0x1449; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleShuffled {
                constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponSCAR20 {
            }
            // Parent: CBaseAnimGraph
            // Field count: 19
            //
            // Metadata:
            // NetworkVarNames: m_flexWeight (float32)
            // NetworkVarNames: m_blinktoggle (bool)
            namespace C_BaseFlex {
                constexpr std::ptrdiff_t m_flexWeight = 0x1168; // C_NetworkUtlVectorBase<float32>
                constexpr std::ptrdiff_t m_vLookTargetPosition = 0x1180; // VectorWS
                constexpr std::ptrdiff_t m_blinktoggle = 0x1210; // bool
                constexpr std::ptrdiff_t m_nLastFlexUpdateFrameCount = 0x1270; // int32
                constexpr std::ptrdiff_t m_CachedViewTarget = 0x1274; // Vector
                constexpr std::ptrdiff_t m_nNextSceneEventId = 0x1280; // SceneEventId_t
                constexpr std::ptrdiff_t m_iBlink = 0x1284; // int32
                constexpr std::ptrdiff_t m_blinktime = 0x1288; // float32
                constexpr std::ptrdiff_t m_prevblinktoggle = 0x128C; // bool
                constexpr std::ptrdiff_t m_iJawOpen = 0x1290; // int32
                constexpr std::ptrdiff_t m_flJawOpenAmount = 0x1294; // float32
                constexpr std::ptrdiff_t m_flBlinkAmount = 0x1298; // float32
                constexpr std::ptrdiff_t m_iMouthAttachment = 0x129C; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_iEyeAttachment = 0x129D; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_bResetFlexWeightsOnModelChange = 0x129E; // bool
                constexpr std::ptrdiff_t m_nEyeOcclusionRendererBone = 0x12B8; // int32
                constexpr std::ptrdiff_t m_mEyeOcclusionRendererCameraToBoneTransform = 0x12BC; // matrix3x4_t
                constexpr std::ptrdiff_t m_vEyeOcclusionRendererHalfExtent = 0x12EC; // Vector
                constexpr std::ptrdiff_t m_PhonemeClasses = 0x1308; // C_BaseFlex::Emphasized_Phoneme[3]
            }
            // Parent: C_BaseToggle
            // Field count: 0
            namespace C_FuncMover {
            }
            // Parent: None
            // Field count: 3
            namespace CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
                constexpr std::ptrdiff_t pItem = 0x0; // C_EconItemView*
                constexpr std::ptrdiff_t team = 0x8; // uint16
                constexpr std::ptrdiff_t slot = 0xA; // uint16
            }
            // Parent: CEntityComponent
            // Field count: 69
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
            // NetworkVarNames: m_nLightPathUniqueId (int32)
            // NetworkVarNames: m_nLightMapUniqueId (int32)
            // NetworkVarNames: m_bRenderToCubemaps (bool)
            // NetworkVarNames: m_bAllowSSTGeneration (bool)
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
                constexpr std::ptrdiff_t __m_pChainEntity = 0x30; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_Color = 0x6D; // Color
                constexpr std::ptrdiff_t m_SecondaryColor = 0x71; // Color
                constexpr std::ptrdiff_t m_flBrightness = 0x78; // float32
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x7C; // float32
                constexpr std::ptrdiff_t m_flBrightnessMult = 0x80; // float32
                constexpr std::ptrdiff_t m_flRange = 0x84; // float32
                constexpr std::ptrdiff_t m_flFalloff = 0x88; // float32
                constexpr std::ptrdiff_t m_flAttenuation0 = 0x8C; // float32
                constexpr std::ptrdiff_t m_flAttenuation1 = 0x90; // float32
                constexpr std::ptrdiff_t m_flAttenuation2 = 0x94; // float32
                constexpr std::ptrdiff_t m_flTheta = 0x98; // float32
                constexpr std::ptrdiff_t m_flPhi = 0x9C; // float32
                constexpr std::ptrdiff_t m_hLightCookie = 0xA0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_nCascades = 0xA8; // int32
                constexpr std::ptrdiff_t m_nCastShadows = 0xAC; // int32
                constexpr std::ptrdiff_t m_nShadowWidth = 0xB0; // int32
                constexpr std::ptrdiff_t m_nShadowHeight = 0xB4; // int32
                constexpr std::ptrdiff_t m_bRenderDiffuse = 0xB8; // bool
                constexpr std::ptrdiff_t m_nRenderSpecular = 0xBC; // int32
                constexpr std::ptrdiff_t m_bRenderTransmissive = 0xC0; // bool
                constexpr std::ptrdiff_t m_flOrthoLightWidth = 0xC4; // float32
                constexpr std::ptrdiff_t m_flOrthoLightHeight = 0xC8; // float32
                constexpr std::ptrdiff_t m_nStyle = 0xCC; // int32
                constexpr std::ptrdiff_t m_Pattern = 0xD0; // CUtlString
                constexpr std::ptrdiff_t m_nCascadeRenderStaticObjects = 0xD8; // int32
                constexpr std::ptrdiff_t m_flShadowCascadeCrossFade = 0xDC; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistanceFade = 0xE0; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance0 = 0xE4; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance1 = 0xE8; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance2 = 0xEC; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance3 = 0xF0; // float32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution0 = 0xF4; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution1 = 0xF8; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution2 = 0xFC; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution3 = 0x100; // int32
                constexpr std::ptrdiff_t m_bUsesBakedShadowing = 0x104; // bool
                constexpr std::ptrdiff_t m_nShadowPriority = 0x108; // int32
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x10C; // int32
                constexpr std::ptrdiff_t m_nLightPathUniqueId = 0x110; // int32
                constexpr std::ptrdiff_t m_nLightMapUniqueId = 0x114; // int32
                constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x118; // bool
                constexpr std::ptrdiff_t m_bAllowSSTGeneration = 0x119; // bool
                constexpr std::ptrdiff_t m_nDirectLight = 0x11C; // int32
                constexpr std::ptrdiff_t m_nIndirectLight = 0x120; // int32
                constexpr std::ptrdiff_t m_flFadeMinDist = 0x124; // float32
                constexpr std::ptrdiff_t m_flFadeMaxDist = 0x128; // float32
                constexpr std::ptrdiff_t m_flShadowFadeMinDist = 0x12C; // float32
                constexpr std::ptrdiff_t m_flShadowFadeMaxDist = 0x130; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0x134; // bool
                constexpr std::ptrdiff_t m_bFlicker = 0x135; // bool
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x136; // bool
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x138; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x144; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x150; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x15C; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x168; // Vector
                constexpr std::ptrdiff_t m_flPrecomputedMaxRange = 0x174; // float32
                constexpr std::ptrdiff_t m_nFogLightingMode = 0x178; // int32
                constexpr std::ptrdiff_t m_flFogContributionStength = 0x17C; // float32
                constexpr std::ptrdiff_t m_flNearClipPlane = 0x180; // float32
                constexpr std::ptrdiff_t m_SkyColor = 0x184; // Color
                constexpr std::ptrdiff_t m_flSkyIntensity = 0x188; // float32
                constexpr std::ptrdiff_t m_SkyAmbientBounce = 0x18C; // Color
                constexpr std::ptrdiff_t m_bUseSecondaryColor = 0x190; // bool
                constexpr std::ptrdiff_t m_bMixedShadows = 0x191; // bool
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x194; // GameTime_t
                constexpr std::ptrdiff_t m_flCapsuleLength = 0x198; // float32
                constexpr std::ptrdiff_t m_flMinRoughness = 0x19C; // float32
            }
            // Parent: C_BaseCSGrenade
            // Field count: 0
            namespace C_DecoyGrenade {
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace C_WaterBullet {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 4
            //
            // Metadata:
            // NetworkVarNames: m_bIsRescuing (bool)
            // NetworkVarNames: m_weaponPurchasesThisMatch (WeaponPurchaseTracker_t)
            // NetworkVarNames: m_weaponPurchasesThisRound (WeaponPurchaseTracker_t)
            namespace CCSPlayer_ActionTrackingServices {
                constexpr std::ptrdiff_t m_hLastWeaponBeforeC4AutoSwitch = 0x40; // CHandle<C_BasePlayerWeapon>
                constexpr std::ptrdiff_t m_bIsRescuing = 0x44; // bool
                constexpr std::ptrdiff_t m_weaponPurchasesThisMatch = 0x48; // WeaponPurchaseTracker_t
                constexpr std::ptrdiff_t m_weaponPurchasesThisRound = 0xB8; // WeaponPurchaseTracker_t
            }
            // Parent: C_BaseEntity
            // Field count: 18
            //
            // Metadata:
            // NetworkVarNames: m_Entity_hCubemapTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_bCustomCubemapTexture (bool)
            // NetworkVarNames: m_Entity_flInfluenceRadius (float)
            // NetworkVarNames: m_Entity_vBoxProjectMins (Vector)
            // NetworkVarNames: m_Entity_vBoxProjectMaxs (Vector)
            // NetworkVarNames: m_Entity_bMoveable (bool)
            // NetworkVarNames: m_Entity_nHandshake (int)
            // NetworkVarNames: m_Entity_nEnvCubeMapArrayIndex (int)
            // NetworkVarNames: m_Entity_nPriority (int)
            // NetworkVarNames: m_Entity_flEdgeFadeDist (float)
            // NetworkVarNames: m_Entity_vEdgeFadeDists (Vector)
            // NetworkVarNames: m_Entity_flDiffuseScale (float)
            // NetworkVarNames: m_Entity_bStartDisabled (bool)
            // NetworkVarNames: m_Entity_bDefaultEnvMap (bool)
            // NetworkVarNames: m_Entity_bDefaultSpecEnvMap (bool)
            // NetworkVarNames: m_Entity_bIndoorCubeMap (bool)
            // NetworkVarNames: m_Entity_bCopyDiffuseFromDefaultCubemap (bool)
            // NetworkVarNames: m_Entity_bEnabled (bool)
            namespace C_EnvCubemap {
                constexpr std::ptrdiff_t m_Entity_hCubemapTexture = 0x678; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_bCustomCubemapTexture = 0x680; // bool
                constexpr std::ptrdiff_t m_Entity_flInfluenceRadius = 0x684; // float32
                constexpr std::ptrdiff_t m_Entity_vBoxProjectMins = 0x688; // Vector
                constexpr std::ptrdiff_t m_Entity_vBoxProjectMaxs = 0x694; // Vector
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x6A0; // bool
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x6A4; // int32
                constexpr std::ptrdiff_t m_Entity_nEnvCubeMapArrayIndex = 0x6A8; // int32
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x6AC; // int32
                constexpr std::ptrdiff_t m_Entity_flEdgeFadeDist = 0x6B0; // float32
                constexpr std::ptrdiff_t m_Entity_vEdgeFadeDists = 0x6B4; // Vector
                constexpr std::ptrdiff_t m_Entity_flDiffuseScale = 0x6C0; // float32
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x6C4; // bool
                constexpr std::ptrdiff_t m_Entity_bDefaultEnvMap = 0x6C5; // bool
                constexpr std::ptrdiff_t m_Entity_bDefaultSpecEnvMap = 0x6C6; // bool
                constexpr std::ptrdiff_t m_Entity_bIndoorCubeMap = 0x6C7; // bool
                constexpr std::ptrdiff_t m_Entity_bCopyDiffuseFromDefaultCubemap = 0x6C8; // bool
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x6D8; // bool
            }
            // Parent: CPlayer_MovementServices
            // Field count: 0
            namespace CCSObserver_MovementServices {
            }
            // Parent: CEntityComponent
            // Field count: 2
            namespace CBodyComponent {
                constexpr std::ptrdiff_t m_pSceneNode = 0x8; // CGameSceneNode*
                constexpr std::ptrdiff_t __m_pChainEntity = 0x48; // CNetworkVarChainer
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_Method {
                constexpr std::ptrdiff_t m_MethodName = 0x80; // PulseSymbol_t
                constexpr std::ptrdiff_t m_Description = 0x90; // CUtlString
                constexpr std::ptrdiff_t m_bIsPublic = 0x98; // bool
                constexpr std::ptrdiff_t m_ReturnType = 0xA0; // CPulseValueFullType
                constexpr std::ptrdiff_t m_Args = 0xB8; // CUtlLeanVector<CPulseRuntimeMethodArg>
            }
            // Parent: C_BaseFlex
            // Field count: 6
            //
            // Metadata:
            // MNetworkExcludeByUserGroup
            // NetworkVarNames: m_hMyWearables (CHandle<C_EconWearable>)
            namespace C_BaseCombatCharacter {
                constexpr std::ptrdiff_t m_hMyWearables = 0x1368; // C_NetworkUtlVectorBase<CHandle<C_EconWearable>>
                constexpr std::ptrdiff_t m_leftFootAttachment = 0x1380; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_rightFootAttachment = 0x1381; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_nWaterWakeMode = 0x1384; // C_BaseCombatCharacter::WaterWakeMode_t
                constexpr std::ptrdiff_t m_flWaterWorldZ = 0x1388; // float32
                constexpr std::ptrdiff_t m_flWaterNextTraceTime = 0x138C; // float32
            }
            // Parent: 
            // Field count: 11
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
            // Parent: C_BaseClientUIEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hActivator (EHANDLE)
            namespace C_PointClientUIDialog {
                constexpr std::ptrdiff_t m_hActivator = 0xEE0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bStartEnabled = 0xEE4; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseValue {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponHKP2000 {
            }
            // Parent: C_BaseTrigger
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_source (string_t)
            // NetworkVarNames: m_destination (string_t)
            namespace C_FootstepControl {
                constexpr std::ptrdiff_t m_source = 0xFF0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_destination = 0xFF8; // CUtlSymbolLarge
            }
            // Parent: C_BaseEntity
            // Field count: 8
            //
            // Metadata:
            // NetworkVarNames: m_iszStackName (string_t)
            // NetworkVarNames: m_iszOperatorName (string_t)
            // NetworkVarNames: m_iszOpvarName (string_t)
            // NetworkVarNames: m_vDistanceInnerMins (Vector)
            // NetworkVarNames: m_vDistanceInnerMaxs (Vector)
            // NetworkVarNames: m_vDistanceOuterMins (Vector)
            // NetworkVarNames: m_vDistanceOuterMaxs (Vector)
            // NetworkVarNames: m_nAABBDirection (int)
            namespace CCitadelSoundOpvarSetOBB {
                constexpr std::ptrdiff_t m_iszStackName = 0x610; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperatorName = 0x618; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvarName = 0x620; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vDistanceInnerMins = 0x628; // Vector
                constexpr std::ptrdiff_t m_vDistanceInnerMaxs = 0x634; // Vector
                constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x640; // Vector
                constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x64C; // Vector
                constexpr std::ptrdiff_t m_nAABBDirection = 0x658; // int32
            }
            // Parent: C_CSGO_EndOfMatchLineupEndpoint
            // Field count: 0
            namespace C_CSGO_EndOfMatchLineupStart {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_WaterServices {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorCanvasItemSpecKV3
            namespace CPulseCell_BooleanSwitchState {
                constexpr std::ptrdiff_t m_Condition = 0x48; // PulseObservableBoolExpression_t
                constexpr std::ptrdiff_t m_SubGraph = 0xC0; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_WhenTrue = 0x108; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_WhenFalse = 0x150; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // NetworkVarNames: m_PlayerDamager (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_PlayerRecipient (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_hPlayerControllerDamager (CHandle<CCSPlayerController>)
            // NetworkVarNames: m_hPlayerControllerRecipient (CHandle<CCSPlayerController>)
            // NetworkVarNames: m_szPlayerDamagerName (CUtlString)
            // NetworkVarNames: m_szPlayerRecipientName (CUtlString)
            // NetworkVarNames: m_DamagerXuid (uint64)
            // NetworkVarNames: m_RecipientXuid (uint64)
            // MNetworkReplayCompatField
            // NetworkVarNames: m_flDamage (float)
            // MNetworkReplayCompatField
            // NetworkVarNames: m_flActualHealthRemoved (float)
            // NetworkVarNames: m_iNumHits (int)
            // NetworkVarNames: m_iLastBulletUpdate (int)
            // NetworkVarNames: m_bIsOtherEnemy (bool)
            // NetworkVarNames: m_killType (EKillTypes_t)
            namespace CDamageRecord {
                constexpr std::ptrdiff_t m_PlayerDamager = 0x30; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_PlayerRecipient = 0x34; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_hPlayerControllerDamager = 0x38; // CHandle<CCSPlayerController>
                constexpr std::ptrdiff_t m_hPlayerControllerRecipient = 0x3C; // CHandle<CCSPlayerController>
                constexpr std::ptrdiff_t m_szPlayerDamagerName = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_szPlayerRecipientName = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_DamagerXuid = 0x50; // uint64
                constexpr std::ptrdiff_t m_RecipientXuid = 0x58; // uint64
                constexpr std::ptrdiff_t m_flBulletsDamage = 0x60; // float32
                constexpr std::ptrdiff_t m_flDamage = 0x64; // float32
                constexpr std::ptrdiff_t m_flActualHealthRemoved = 0x68; // float32
                constexpr std::ptrdiff_t m_iNumHits = 0x6C; // int32
                constexpr std::ptrdiff_t m_iLastBulletUpdate = 0x70; // int32
                constexpr std::ptrdiff_t m_bIsOtherEnemy = 0x74; // bool
                constexpr std::ptrdiff_t m_killType = 0x75; // EKillTypes_t
            }
            // Parent: 
            // Field count: 8
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
            // Parent: C_DynamicProp
            // Field count: 0
            namespace C_DynamicPropAlias_dynamic_prop {
            }
            // Parent: CEnvSoundscapeProxy
            // Field count: 0
            namespace CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
            }
            // Parent: C_BarnLight
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flInnerAngle (float)
            // NetworkVarNames: m_flOuterAngle (float)
            // NetworkVarNames: m_bShowLight (bool)
            namespace C_OmniLight {
                constexpr std::ptrdiff_t m_flInnerAngle = 0x1200; // float32
                constexpr std::ptrdiff_t m_flOuterAngle = 0x1204; // float32
                constexpr std::ptrdiff_t m_bShowLight = 0x1208; // bool
            }
            // Parent: C_PointEntity
            // Field count: 12
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
                constexpr std::ptrdiff_t m_bIsPlayingBack = 0x600; // bool
                constexpr std::ptrdiff_t m_bPaused = 0x601; // bool
                constexpr std::ptrdiff_t m_bMultiplayer = 0x602; // bool
                constexpr std::ptrdiff_t m_bAutogenerated = 0x603; // bool
                constexpr std::ptrdiff_t m_flForceClientTime = 0x604; // float32
                constexpr std::ptrdiff_t m_nSceneStringIndex = 0x608; // uint16
                constexpr std::ptrdiff_t m_bClientOnly = 0x60A; // bool
                constexpr std::ptrdiff_t m_hOwner = 0x60C; // CHandle<C_BaseFlex>
                constexpr std::ptrdiff_t m_hActorList = 0x610; // C_NetworkUtlVectorBase<CHandle<C_BaseFlex>>
                constexpr std::ptrdiff_t m_bWasPlaying = 0x628; // bool
                constexpr std::ptrdiff_t m_QueuedEvents = 0x638; // CUtlVector<C_SceneEntity::QueuedEvents_t>
                constexpr std::ptrdiff_t m_flCurrentTime = 0x650; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_Yield {
                constexpr std::ptrdiff_t m_UnyieldResume = 0x48; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            namespace CPulseMathlib {
            }
            // Parent: C_CS2WeaponModuleBase
            // Field count: 1
            namespace C_NametagModule {
                constexpr std::ptrdiff_t m_strNametagString = 0x1160; // CUtlString
            }
            // Parent: C_BaseFlex
            // Field count: 20
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
                constexpr std::ptrdiff_t m_flFlexDelayTime = 0x1378; // float32
                constexpr std::ptrdiff_t m_flFlexDelayedWeight = 0x1380; // float32*
                constexpr std::ptrdiff_t m_bAttributesInitialized = 0x1388; // bool
                constexpr std::ptrdiff_t m_AttributeManager = 0x1390; // C_AttributeContainer
                constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0x1868; // uint32
                constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x186C; // uint32
                constexpr std::ptrdiff_t m_nFallbackPaintKit = 0x1870; // int32
                constexpr std::ptrdiff_t m_nFallbackSeed = 0x1874; // int32
                constexpr std::ptrdiff_t m_flFallbackWear = 0x1878; // float32
                constexpr std::ptrdiff_t m_nFallbackStatTrak = 0x187C; // int32
                constexpr std::ptrdiff_t m_bClientside = 0x1880; // bool
                constexpr std::ptrdiff_t m_bParticleSystemsCreated = 0x1881; // bool
                constexpr std::ptrdiff_t m_vecAttachedParticles = 0x1888; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_hViewmodelAttachment = 0x18A0; // CHandle<CBaseAnimGraph>
                constexpr std::ptrdiff_t m_iOldTeam = 0x18A4; // int32
                constexpr std::ptrdiff_t m_bAttachmentDirty = 0x18A8; // bool
                constexpr std::ptrdiff_t m_nUnloadedModelIndex = 0x18AC; // int32
                constexpr std::ptrdiff_t m_iNumOwnerValidationRetries = 0x18B0; // int32
                constexpr std::ptrdiff_t m_hOldProvidee = 0x18C0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_vecAttachedModels = 0x18C8; // CUtlVector<C_EconEntity::AttachedModelData_t>
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_UseServices {
            }
            // Parent: C_BaseEntity
            // Field count: 25
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
                constexpr std::ptrdiff_t m_bDisabled = 0x5F8; // bool
                constexpr std::ptrdiff_t m_bDisabledOld = 0x5F9; // bool
                constexpr std::ptrdiff_t m_bUpdateOnClient = 0x5FA; // bool
                constexpr std::ptrdiff_t m_nInputType = 0x5FC; // ValueRemapperInputType_t
                constexpr std::ptrdiff_t m_hRemapLineStart = 0x600; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hRemapLineEnd = 0x604; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flMaximumChangePerSecond = 0x608; // float32
                constexpr std::ptrdiff_t m_flDisengageDistance = 0x60C; // float32
                constexpr std::ptrdiff_t m_flEngageDistance = 0x610; // float32
                constexpr std::ptrdiff_t m_bRequiresUseKey = 0x614; // bool
                constexpr std::ptrdiff_t m_nOutputType = 0x618; // ValueRemapperOutputType_t
                constexpr std::ptrdiff_t m_hOutputEntities = 0x620; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_nHapticsType = 0x638; // ValueRemapperHapticsType_t
                constexpr std::ptrdiff_t m_nMomentumType = 0x63C; // ValueRemapperMomentumType_t
                constexpr std::ptrdiff_t m_flMomentumModifier = 0x640; // float32
                constexpr std::ptrdiff_t m_flSnapValue = 0x644; // float32
                constexpr std::ptrdiff_t m_flCurrentMomentum = 0x648; // float32
                constexpr std::ptrdiff_t m_nRatchetType = 0x64C; // ValueRemapperRatchetType_t
                constexpr std::ptrdiff_t m_flRatchetOffset = 0x650; // float32
                constexpr std::ptrdiff_t m_flInputOffset = 0x654; // float32
                constexpr std::ptrdiff_t m_bEngaged = 0x658; // bool
                constexpr std::ptrdiff_t m_bFirstUpdate = 0x659; // bool
                constexpr std::ptrdiff_t m_flPreviousValue = 0x65C; // float32
                constexpr std::ptrdiff_t m_flPreviousUpdateTickTime = 0x660; // GameTime_t
                constexpr std::ptrdiff_t m_vecPreviousTestPoint = 0x664; // Vector
            }
            // Parent: 
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_hOwner (CEntityHandle)
            // NetworkVarNames: m_name (CUtlStringToken)
            namespace CGameSceneNodeHandle {
                constexpr std::ptrdiff_t m_hOwner = 0x8; // CEntityHandle
                constexpr std::ptrdiff_t m_name = 0xC; // CUtlStringToken
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_Unknown {
                constexpr std::ptrdiff_t m_UnknownKeys = 0x48; // KeyValues3
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponMP7 {
            }
            // Parent: None
            // Field count: 13
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
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleRandom {
                constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Step_PublicOutput {
                constexpr std::ptrdiff_t m_OutputIndex = 0x48; // PulseRuntimeOutputIndex_t
            }
            // Parent: C_LateUpdatedAnimating
            // Field count: 0
            namespace C_CS2HudModelBase {
            }
            // Parent: None
            // Field count: 97
            //
            // Metadata:
            // NetworkVarNames: m_bFreezePeriod (bool)
            // NetworkVarNames: m_bWarmupPeriod (bool)
            // NetworkVarNames: m_fWarmupPeriodEnd (GameTime_t)
            // NetworkVarNames: m_fWarmupPeriodStart (GameTime_t)
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
            // NetworkVarNames: m_iMatchStats_RoundResults (int)
            // NetworkVarNames: m_iMatchStats_PlayersAlive_CT (int)
            // NetworkVarNames: m_iMatchStats_PlayersAlive_T (int)
            // NetworkVarNames: m_TeamRespawnWaveTimes (float)
            // NetworkVarNames: m_flNextRespawnWave (GameTime_t)
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
                constexpr std::ptrdiff_t m_bFreezePeriod = 0x40; // bool
                constexpr std::ptrdiff_t m_bWarmupPeriod = 0x41; // bool
                constexpr std::ptrdiff_t m_fWarmupPeriodEnd = 0x44; // GameTime_t
                constexpr std::ptrdiff_t m_fWarmupPeriodStart = 0x48; // GameTime_t
                constexpr std::ptrdiff_t m_bTerroristTimeOutActive = 0x4C; // bool
                constexpr std::ptrdiff_t m_bCTTimeOutActive = 0x4D; // bool
                constexpr std::ptrdiff_t m_flTerroristTimeOutRemaining = 0x50; // float32
                constexpr std::ptrdiff_t m_flCTTimeOutRemaining = 0x54; // float32
                constexpr std::ptrdiff_t m_nTerroristTimeOuts = 0x58; // int32
                constexpr std::ptrdiff_t m_nCTTimeOuts = 0x5C; // int32
                constexpr std::ptrdiff_t m_bTechnicalTimeOut = 0x60; // bool
                constexpr std::ptrdiff_t m_bMatchWaitingForResume = 0x61; // bool
                constexpr std::ptrdiff_t m_iRoundTime = 0x64; // int32
                constexpr std::ptrdiff_t m_fMatchStartTime = 0x68; // float32
                constexpr std::ptrdiff_t m_fRoundStartTime = 0x6C; // GameTime_t
                constexpr std::ptrdiff_t m_flRestartRoundTime = 0x70; // GameTime_t
                constexpr std::ptrdiff_t m_bGameRestart = 0x74; // bool
                constexpr std::ptrdiff_t m_flGameStartTime = 0x78; // float32
                constexpr std::ptrdiff_t m_timeUntilNextPhaseStarts = 0x7C; // float32
                constexpr std::ptrdiff_t m_gamePhase = 0x80; // int32
                constexpr std::ptrdiff_t m_totalRoundsPlayed = 0x84; // int32
                constexpr std::ptrdiff_t m_nRoundsPlayedThisPhase = 0x88; // int32
                constexpr std::ptrdiff_t m_nOvertimePlaying = 0x8C; // int32
                constexpr std::ptrdiff_t m_iHostagesRemaining = 0x90; // int32
                constexpr std::ptrdiff_t m_bAnyHostageReached = 0x94; // bool
                constexpr std::ptrdiff_t m_bMapHasBombTarget = 0x95; // bool
                constexpr std::ptrdiff_t m_bMapHasRescueZone = 0x96; // bool
                constexpr std::ptrdiff_t m_bMapHasBuyZone = 0x97; // bool
                constexpr std::ptrdiff_t m_bIsQueuedMatchmaking = 0x98; // bool
                constexpr std::ptrdiff_t m_nQueuedMatchmakingMode = 0x9C; // int32
                constexpr std::ptrdiff_t m_bIsValveDS = 0xA0; // bool
                constexpr std::ptrdiff_t m_bLogoMap = 0xA1; // bool
                constexpr std::ptrdiff_t m_bPlayAllStepSoundsOnServer = 0xA2; // bool
                constexpr std::ptrdiff_t m_iSpectatorSlotCount = 0xA4; // int32
                constexpr std::ptrdiff_t m_MatchDevice = 0xA8; // int32
                constexpr std::ptrdiff_t m_bHasMatchStarted = 0xAC; // bool
                constexpr std::ptrdiff_t m_nNextMapInMapgroup = 0xB0; // int32
                constexpr std::ptrdiff_t m_szTournamentEventName = 0xB4; // char[512]
                constexpr std::ptrdiff_t m_szTournamentEventStage = 0x2B4; // char[512]
                constexpr std::ptrdiff_t m_szMatchStatTxt = 0x4B4; // char[512]
                constexpr std::ptrdiff_t m_szTournamentPredictionsTxt = 0x6B4; // char[512]
                constexpr std::ptrdiff_t m_nTournamentPredictionsPct = 0x8B4; // int32
                constexpr std::ptrdiff_t m_flCMMItemDropRevealStartTime = 0x8B8; // GameTime_t
                constexpr std::ptrdiff_t m_flCMMItemDropRevealEndTime = 0x8BC; // GameTime_t
                constexpr std::ptrdiff_t m_bIsDroppingItems = 0x8C0; // bool
                constexpr std::ptrdiff_t m_bIsQuestEligible = 0x8C1; // bool
                constexpr std::ptrdiff_t m_bIsHltvActive = 0x8C2; // bool
                constexpr std::ptrdiff_t m_arrProhibitedItemIndices = 0x8C4; // uint16[100]
                constexpr std::ptrdiff_t m_arrTournamentActiveCasterAccounts = 0x98C; // uint32[4]
                constexpr std::ptrdiff_t m_numBestOfMaps = 0x99C; // int32
                constexpr std::ptrdiff_t m_nHalloweenMaskListSeed = 0x9A0; // int32
                constexpr std::ptrdiff_t m_bBombDropped = 0x9A4; // bool
                constexpr std::ptrdiff_t m_bBombPlanted = 0x9A5; // bool
                constexpr std::ptrdiff_t m_iRoundWinStatus = 0x9A8; // int32
                constexpr std::ptrdiff_t m_eRoundWinReason = 0x9AC; // int32
                constexpr std::ptrdiff_t m_bTCantBuy = 0x9B0; // bool
                constexpr std::ptrdiff_t m_bCTCantBuy = 0x9B1; // bool
                constexpr std::ptrdiff_t m_iMatchStats_RoundResults = 0x9B4; // int32[30]
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_CT = 0xA2C; // int32[30]
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_T = 0xAA4; // int32[30]
                constexpr std::ptrdiff_t m_TeamRespawnWaveTimes = 0xB1C; // float32[32]
                constexpr std::ptrdiff_t m_flNextRespawnWave = 0xB9C; // GameTime_t[32]
                constexpr std::ptrdiff_t m_vMinimapMins = 0xC1C; // Vector
                constexpr std::ptrdiff_t m_vMinimapMaxs = 0xC28; // Vector
                constexpr std::ptrdiff_t m_MinimapVerticalSectionHeights = 0xC34; // float32[8]
                constexpr std::ptrdiff_t m_ullLocalMatchID = 0xC58; // uint64
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteTypes = 0xC60; // int32[10]
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteOptions = 0xC88; // int32[10]
                constexpr std::ptrdiff_t m_nEndMatchMapVoteWinner = 0xCB0; // int32
                constexpr std::ptrdiff_t m_iNumConsecutiveCTLoses = 0xCB4; // int32
                constexpr std::ptrdiff_t m_iNumConsecutiveTerroristLoses = 0xCB8; // int32
                constexpr std::ptrdiff_t m_nMatchAbortedEarlyReason = 0xD78; // int32
                constexpr std::ptrdiff_t m_bHasTriggeredRoundStartMusic = 0xD7C; // bool
                constexpr std::ptrdiff_t m_bSwitchingTeamsAtRoundReset = 0xD7D; // bool
                constexpr std::ptrdiff_t m_pGameModeRules = 0xD98; // CCSGameModeRules*
                constexpr std::ptrdiff_t m_RetakeRules = 0xDA0; // C_RetakeGameRules
                constexpr std::ptrdiff_t m_nMatchEndCount = 0xEB8; // uint8
                constexpr std::ptrdiff_t m_nTTeamIntroVariant = 0xEBC; // int32
                constexpr std::ptrdiff_t m_nCTTeamIntroVariant = 0xEC0; // int32
                constexpr std::ptrdiff_t m_bTeamIntroPeriod = 0xEC4; // bool
                constexpr std::ptrdiff_t m_iRoundEndWinnerTeam = 0xEC8; // int32
                constexpr std::ptrdiff_t m_eRoundEndReason = 0xECC; // int32
                constexpr std::ptrdiff_t m_bRoundEndShowTimerDefend = 0xED0; // bool
                constexpr std::ptrdiff_t m_iRoundEndTimerTime = 0xED4; // int32
                constexpr std::ptrdiff_t m_sRoundEndFunFactToken = 0xED8; // CUtlString
                constexpr std::ptrdiff_t m_iRoundEndFunFactPlayerSlot = 0xEE0; // CPlayerSlot
                constexpr std::ptrdiff_t m_iRoundEndFunFactData1 = 0xEE4; // int32
                constexpr std::ptrdiff_t m_iRoundEndFunFactData2 = 0xEE8; // int32
                constexpr std::ptrdiff_t m_iRoundEndFunFactData3 = 0xEEC; // int32
                constexpr std::ptrdiff_t m_sRoundEndMessage = 0xEF0; // CUtlString
                constexpr std::ptrdiff_t m_iRoundEndPlayerCount = 0xEF8; // int32
                constexpr std::ptrdiff_t m_bRoundEndNoMusic = 0xEFC; // bool
                constexpr std::ptrdiff_t m_iRoundEndLegacy = 0xF00; // int32
                constexpr std::ptrdiff_t m_nRoundEndCount = 0xF04; // uint8
                constexpr std::ptrdiff_t m_iRoundStartRoundNumber = 0xF08; // int32
                constexpr std::ptrdiff_t m_nRoundStartCount = 0xF0C; // uint8
                constexpr std::ptrdiff_t m_flLastPerfSampleTime = 0x4F18; // float64
            }
            // Parent: C_BaseModelEntity
            // Field count: 2
            namespace CGrenadeTracer {
                constexpr std::ptrdiff_t m_flTracerDuration = 0xEC8; // float32
                constexpr std::ptrdiff_t m_nType = 0xECC; // GrenadeType_t
            }
            // Parent: None
            // Field count: 0
            namespace CCSGameModeRules_Noop {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_BlackboardReference {
                constexpr std::ptrdiff_t m_hBlackboardResource = 0x0; // CStrongHandle<InfoForResourceTypeIPulseGraphDef>
                constexpr std::ptrdiff_t m_BlackboardResource = 0x8; // PulseSymbol_t
                constexpr std::ptrdiff_t m_nNodeID = 0x18; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_NodeName = 0x20; // CGlobalSymbol
            }
            // Parent: C_BaseGrenade
            // Field count: 16
            //
            // Metadata:
            // NetworkVarNames: m_vInitialPosition (Vector)
            // NetworkVarNames: m_vInitialVelocity (Vector)
            // NetworkVarNames: m_nBounces (int)
            // NetworkVarNames: m_nExplodeEffectIndex (HParticleSystemDefinitionStrong)
            // NetworkVarNames: m_nExplodeEffectTickBegin (int)
            // NetworkVarNames: m_vecExplodeEffectOrigin (Vector)
            namespace C_BaseCSGrenadeProjectile {
                constexpr std::ptrdiff_t m_vInitialPosition = 0x13B8; // Vector
                constexpr std::ptrdiff_t m_vInitialVelocity = 0x13C4; // Vector
                constexpr std::ptrdiff_t m_nBounces = 0x13D0; // int32
                constexpr std::ptrdiff_t m_nExplodeEffectIndex = 0x13D8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_nExplodeEffectTickBegin = 0x13E0; // int32
                constexpr std::ptrdiff_t m_vecExplodeEffectOrigin = 0x13E4; // Vector
                constexpr std::ptrdiff_t m_flSpawnTime = 0x13F0; // GameTime_t
                constexpr std::ptrdiff_t vecLastTrailLinePos = 0x13F4; // Vector
                constexpr std::ptrdiff_t flNextTrailLineTime = 0x1400; // GameTime_t
                constexpr std::ptrdiff_t m_bExplodeEffectBegan = 0x1404; // bool
                constexpr std::ptrdiff_t m_bCanCreateGrenadeTrail = 0x1405; // bool
                constexpr std::ptrdiff_t m_nSnapshotTrajectoryEffectIndex = 0x1408; // ParticleIndex_t
                constexpr std::ptrdiff_t m_hSnapshotTrajectoryParticleSnapshot = 0x1410; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_arrTrajectoryTrailPoints = 0x1418; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_arrTrajectoryTrailPointCreationTimes = 0x1430; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_flTrajectoryTrailEffectCreationTime = 0x1448; // float32
            }
            // Parent: C_BaseEntity
            // Field count: 16
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
                constexpr std::ptrdiff_t m_hGradientFogTexture = 0x5F8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_flFogStartDistance = 0x600; // float32
                constexpr std::ptrdiff_t m_flFogEndDistance = 0x604; // float32
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x608; // bool
                constexpr std::ptrdiff_t m_flFogStartHeight = 0x60C; // float32
                constexpr std::ptrdiff_t m_flFogEndHeight = 0x610; // float32
                constexpr std::ptrdiff_t m_flFarZ = 0x614; // float32
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x618; // float32
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x61C; // float32
                constexpr std::ptrdiff_t m_flFogVerticalExponent = 0x620; // float32
                constexpr std::ptrdiff_t m_fogColor = 0x624; // Color
                constexpr std::ptrdiff_t m_flFogStrength = 0x628; // float32
                constexpr std::ptrdiff_t m_flFadeTime = 0x62C; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x630; // bool
                constexpr std::ptrdiff_t m_bIsEnabled = 0x631; // bool
                constexpr std::ptrdiff_t m_bGradientFogNeedsTextures = 0x632; // bool
            }
            // Parent: CPlayerControllerComponent
            // Field count: 4
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
            }
            // Parent: C_BaseCSGrenadeProjectile
            // Field count: 0
            namespace C_HEGrenadeProjectile {
            }
            // Parent: 
            // Field count: 24
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
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterModel {
                constexpr std::ptrdiff_t m_iFilterModel = 0x650; // CUtlSymbolLarge
            }
            // Parent: C_SoundAreaEntityBase
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_vMin (Vector)
            // NetworkVarNames: m_vMax (Vector)
            namespace C_SoundAreaEntityOrientedBox {
                constexpr std::ptrdiff_t m_vMin = 0x620; // Vector
                constexpr std::ptrdiff_t m_vMax = 0x62C; // Vector
            }
            // Parent: C_SoundOpvarSetPointBase
            // Field count: 0
            namespace C_SoundOpvarSetPointEntity {
            }
            // Parent: C_BaseEntity
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_strGraphName (CUtlString)
            // NetworkVarNames: m_strStateBlob (CUtlString)
            namespace CPulseGameBlackboard {
                constexpr std::ptrdiff_t m_strGraphName = 0x600; // CUtlString
                constexpr std::ptrdiff_t m_strStateBlob = 0x608; // CUtlString
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace CPulseCell_Value_RandomInt {
            }
            // Parent: C_CSWeaponBase
            // Field count: 0
            namespace C_CSWeaponBaseShotgun {
            }
            // Parent: C_RagdollProp
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_boneIndexAttached (uint32)
            // NetworkVarNames: m_ragdollAttachedObjectIndex (uint32)
            // NetworkVarNames: m_attachmentPointBoneSpace (Vector)
            // NetworkVarNames: m_attachmentPointRagdollSpace (Vector)
            namespace C_RagdollPropAttached {
                constexpr std::ptrdiff_t m_boneIndexAttached = 0x11E8; // uint32
                constexpr std::ptrdiff_t m_ragdollAttachedObjectIndex = 0x11EC; // uint32
                constexpr std::ptrdiff_t m_attachmentPointBoneSpace = 0x11F0; // Vector
                constexpr std::ptrdiff_t m_attachmentPointRagdollSpace = 0x11FC; // Vector
                constexpr std::ptrdiff_t m_vecOffset = 0x1208; // Vector
                constexpr std::ptrdiff_t m_parentTime = 0x1214; // float32
                constexpr std::ptrdiff_t m_bHasParent = 0x1218; // bool
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            namespace C_ModelPointEntity {
            }
            // Parent: C_CSPlayerPawn
            // Field count: 2
            namespace C_CSGO_PreviewPlayer {
                constexpr std::ptrdiff_t m_animgraphCharacterModeString = 0x3F10; // CGlobalSymbol
                constexpr std::ptrdiff_t m_flInitialModelScale = 0x3F18; // float32
            }
            // Parent: C_BarnLight
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_bShowLight (bool)
            namespace C_RectLight {
                constexpr std::ptrdiff_t m_bShowLight = 0x1200; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_CPathQueryComponent (CPathQueryComponent::Storage_t)
            // NetworkVarNames: m_pathString (CUtlString)
            namespace CPathSimple {
                constexpr std::ptrdiff_t m_CPathQueryComponent = 0x600; // CPathQueryComponent
                constexpr std::ptrdiff_t m_pathString = 0x6F0; // CUtlString
                constexpr std::ptrdiff_t m_bClosedLoop = 0x6F8; // bool
            }
            // Parent: C_BaseModelEntity
            // Field count: 3
            namespace C_FuncTrackTrain {
                constexpr std::ptrdiff_t m_nLongAxis = 0xEB0; // int32
                constexpr std::ptrdiff_t m_flRadius = 0xEB4; // float32
                constexpr std::ptrdiff_t m_flLineLength = 0xEB8; // float32
            }
            // Parent: C_EconEntity
            // Field count: 2
            namespace C_EconWearable {
                constexpr std::ptrdiff_t m_nForceSkin = 0x18E0; // int32
                constexpr std::ptrdiff_t m_bAlwaysAllow = 0x18E4; // bool
            }
            // Parent: C_BaseModelEntity
            // Field count: 9
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
                constexpr std::ptrdiff_t m_hDecalMaterial = 0xEB0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_flWidth = 0xEB8; // float32
                constexpr std::ptrdiff_t m_flHeight = 0xEBC; // float32
                constexpr std::ptrdiff_t m_flDepth = 0xEC0; // float32
                constexpr std::ptrdiff_t m_nRenderOrder = 0xEC4; // uint32
                constexpr std::ptrdiff_t m_bProjectOnWorld = 0xEC8; // bool
                constexpr std::ptrdiff_t m_bProjectOnCharacters = 0xEC9; // bool
                constexpr std::ptrdiff_t m_bProjectOnWater = 0xECA; // bool
                constexpr std::ptrdiff_t m_flDepthSortBias = 0xECC; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_bSpotted (bool)
            // NetworkVarNames: m_bSpottedByMask (uint32)
            namespace EntitySpottedState_t {
                constexpr std::ptrdiff_t m_bSpotted = 0x8; // bool
                constexpr std::ptrdiff_t m_bSpottedByMask = 0xC; // uint32[2]
            }
            // Parent: 
            // Field count: 25
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
                constexpr std::ptrdiff_t m_bPadding2 = 0x66; // bool
                constexpr std::ptrdiff_t m_bPadding = 0x67; // bool
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponM4A1 {
            }
            // Parent: C_EconEntity
            // Field count: 1
            namespace C_Item {
                constexpr std::ptrdiff_t m_pReticleHintTextName = 0x18E0; // char[256]
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace C_CSPetPlacement {
            }
            // Parent: C_BaseModelEntity
            // Field count: 24
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
            // NetworkVarNames: m_vecEndPos (VectorWS)
            namespace C_Beam {
                constexpr std::ptrdiff_t m_flFrameRate = 0xEB0; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0xEB4; // float32
                constexpr std::ptrdiff_t m_flFireTime = 0xEB8; // GameTime_t
                constexpr std::ptrdiff_t m_flDamage = 0xEBC; // float32
                constexpr std::ptrdiff_t m_nNumBeamEnts = 0xEC0; // uint8
                constexpr std::ptrdiff_t m_queryHandleHalo = 0xEC4; // int32
                constexpr std::ptrdiff_t m_hBaseMaterial = 0xEE8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nHaloIndex = 0xEF0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nBeamType = 0xEF8; // BeamType_t
                constexpr std::ptrdiff_t m_nBeamFlags = 0xEFC; // uint32
                constexpr std::ptrdiff_t m_hAttachEntity = 0xF00; // CHandle<C_BaseEntity>[10]
                constexpr std::ptrdiff_t m_nAttachIndex = 0xF28; // AttachmentHandle_t[10]
                constexpr std::ptrdiff_t m_fWidth = 0xF34; // float32
                constexpr std::ptrdiff_t m_fEndWidth = 0xF38; // float32
                constexpr std::ptrdiff_t m_fFadeLength = 0xF3C; // float32
                constexpr std::ptrdiff_t m_fHaloScale = 0xF40; // float32
                constexpr std::ptrdiff_t m_fAmplitude = 0xF44; // float32
                constexpr std::ptrdiff_t m_fStartFrame = 0xF48; // float32
                constexpr std::ptrdiff_t m_fSpeed = 0xF4C; // float32
                constexpr std::ptrdiff_t m_flFrame = 0xF50; // float32
                constexpr std::ptrdiff_t m_nClipStyle = 0xF54; // BeamClipStyle_t
                constexpr std::ptrdiff_t m_bTurnedOff = 0xF58; // bool
                constexpr std::ptrdiff_t m_vecEndPos = 0xF5C; // VectorWS
                constexpr std::ptrdiff_t m_hEndEntity = 0xF68; // CHandle<C_BaseEntity>
            }
            // Parent: C_BaseEntity
            // Field count: 22
            //
            // Metadata:
            // NetworkVarNames: m_Entity_hLightProbeTexture_AmbientCube (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeTexture_SDF (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeTexture_SH2_DC (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeTexture_SH2_R (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeTexture_SH2_G (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeTexture_SH2_B (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeDirectLightIndicesTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeDirectLightScalarsTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_hLightProbeDirectLightShadowsTexture (HRenderTextureStrong)
            // NetworkVarNames: m_Entity_vBoxMins (Vector)
            // NetworkVarNames: m_Entity_vBoxMaxs (Vector)
            // NetworkVarNames: m_Entity_bMoveable (bool)
            // NetworkVarNames: m_Entity_nHandshake (int)
            // NetworkVarNames: m_Entity_nPriority (int)
            // NetworkVarNames: m_Entity_bStartDisabled (bool)
            // NetworkVarNames: m_Entity_nLightProbeSizeX (int)
            // NetworkVarNames: m_Entity_nLightProbeSizeY (int)
            // NetworkVarNames: m_Entity_nLightProbeSizeZ (int)
            // NetworkVarNames: m_Entity_nLightProbeAtlasX (int)
            // NetworkVarNames: m_Entity_nLightProbeAtlasY (int)
            // NetworkVarNames: m_Entity_nLightProbeAtlasZ (int)
            // NetworkVarNames: m_Entity_bEnabled (bool)
            namespace C_EnvLightProbeVolume {
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_AmbientCube = 0x15F0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SDF = 0x15F8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_DC = 0x1600; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_R = 0x1608; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_G = 0x1610; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_B = 0x1618; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x1620; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x1628; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x1630; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x1638; // Vector
                constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x1644; // Vector
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x1650; // bool
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x1654; // int32
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x1658; // int32
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x165C; // bool
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x1660; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x1664; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x1668; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x166C; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x1670; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x1674; // int32
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x1681; // bool
            }
            // Parent: C_BaseModelEntity
            // Field count: 8
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkOverride
            // MNetworkOverride
            // MNetworkOverride
            // MNetworkOverride
            // MNetworkOverride
            // NetworkVarNames: m_vecMoveDirEntitySpace (Vector)
            // NetworkVarNames: m_flTargetSpeed (float32)
            // NetworkVarNames: m_nTransitionStartTick (GameTick_t)
            // NetworkVarNames: m_nTransitionDurationTicks (int)
            // NetworkVarNames: m_flTransitionStartSpeed (float32)
            // NetworkVarNames: m_hConveyorModels (EHANDLE)
            namespace C_FuncConveyor {
                constexpr std::ptrdiff_t m_vecMoveDirEntitySpace = 0xEB8; // Vector
                constexpr std::ptrdiff_t m_flTargetSpeed = 0xEC4; // float32
                constexpr std::ptrdiff_t m_nTransitionStartTick = 0xEC8; // GameTick_t
                constexpr std::ptrdiff_t m_nTransitionDurationTicks = 0xECC; // int32
                constexpr std::ptrdiff_t m_flTransitionStartSpeed = 0xED0; // float32
                constexpr std::ptrdiff_t m_hConveyorModels = 0xED8; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_flCurrentConveyorOffset = 0xEF0; // float32
                constexpr std::ptrdiff_t m_flCurrentConveyorSpeed = 0xEF4; // float32
            }
            // Parent: CPlayer_WeaponServices
            // Field count: 7
            //
            // Metadata:
            // NetworkVarNames: m_flNextAttack (GameTime_t)
            // NetworkVarNames: m_bIsLookingAtWeapon (bool)
            // NetworkVarNames: m_bIsHoldingLookAtWeapon (bool)
            // NetworkVarNames: m_networkAnimTiming (uint8)
            // NetworkVarNames: m_bBlockInspectUntilNextGraphUpdate (bool)
            namespace CCSPlayer_WeaponServices {
                constexpr std::ptrdiff_t m_flNextAttack = 0xC8; // GameTime_t
                constexpr std::ptrdiff_t m_bIsLookingAtWeapon = 0xCC; // bool
                constexpr std::ptrdiff_t m_bIsHoldingLookAtWeapon = 0xCD; // bool
                constexpr std::ptrdiff_t m_nOldTotalShootPositionHistoryCount = 0xD0; // uint32
                constexpr std::ptrdiff_t m_nOldTotalInputHistoryCount = 0x368; // uint32
                constexpr std::ptrdiff_t m_networkAnimTiming = 0x18C8; // C_NetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_bBlockInspectUntilNextGraphUpdate = 0x18E0; // bool
            }
            // Parent: CBaseAnimGraph
            // Field count: 2
            namespace C_PhysMagnet {
                constexpr std::ptrdiff_t m_aAttachedObjectsFromServer = 0x1158; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_aAttachedObjects = 0x1170; // CUtlVector<CHandle<C_BaseEntity>>
            }
            // Parent: CEnvSoundscapeTriggerable
            // Field count: 0
            namespace CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            namespace C_Breakable {
            }
            // Parent: CBaseAnimGraph
            // Field count: 29
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
            // NetworkVarNames: m_AttributeManager (CAttributeContainer)
            namespace C_PlantedC4 {
                constexpr std::ptrdiff_t m_bBombTicking = 0x1160; // bool
                constexpr std::ptrdiff_t m_nBombSite = 0x1164; // int32
                constexpr std::ptrdiff_t m_nSourceSoundscapeHash = 0x1168; // int32
                constexpr std::ptrdiff_t m_entitySpottedState = 0x1170; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_flNextGlow = 0x1188; // GameTime_t
                constexpr std::ptrdiff_t m_flNextBeep = 0x118C; // GameTime_t
                constexpr std::ptrdiff_t m_flC4Blow = 0x1190; // GameTime_t
                constexpr std::ptrdiff_t m_bCannotBeDefused = 0x1194; // bool
                constexpr std::ptrdiff_t m_bHasExploded = 0x1195; // bool
                constexpr std::ptrdiff_t m_flTimerLength = 0x1198; // float32
                constexpr std::ptrdiff_t m_bBeingDefused = 0x119C; // bool
                constexpr std::ptrdiff_t m_bTriggerWarning = 0x11A0; // float32
                constexpr std::ptrdiff_t m_bExplodeWarning = 0x11A4; // float32
                constexpr std::ptrdiff_t m_bC4Activated = 0x11A8; // bool
                constexpr std::ptrdiff_t m_bTenSecWarning = 0x11A9; // bool
                constexpr std::ptrdiff_t m_flDefuseLength = 0x11AC; // float32
                constexpr std::ptrdiff_t m_flDefuseCountDown = 0x11B0; // GameTime_t
                constexpr std::ptrdiff_t m_bBombDefused = 0x11B4; // bool
                constexpr std::ptrdiff_t m_hBombDefuser = 0x11B8; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_AttributeManager = 0x11C0; // C_AttributeContainer
                constexpr std::ptrdiff_t m_hDefuserMultimeter = 0x1698; // CHandle<C_Multimeter>
                constexpr std::ptrdiff_t m_flNextRadarFlashTime = 0x169C; // GameTime_t
                constexpr std::ptrdiff_t m_bRadarFlash = 0x16A0; // bool
                constexpr std::ptrdiff_t m_pBombDefuser = 0x16A4; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_fLastDefuseTime = 0x16A8; // GameTime_t
                constexpr std::ptrdiff_t m_pPredictionOwner = 0x16B0; // CBasePlayerController*
                constexpr std::ptrdiff_t m_vecC4ExplodeSpectatePos = 0x16B8; // Vector
                constexpr std::ptrdiff_t m_vecC4ExplodeSpectateAng = 0x16C4; // QAngle
                constexpr std::ptrdiff_t m_flC4ExplodeSpectateDuration = 0x16D0; // float32
            }
            // Parent: C_CSGO_TeamIntroCharacterPosition
            // Field count: 0
            namespace CCSGO_WingmanIntroCharacterPosition {
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterName {
                constexpr std::ptrdiff_t m_iFilterName = 0x650; // CUtlSymbolLarge
            }
            // Parent: CBaseAnimGraph
            // Field count: 9
            //
            // Metadata:
            // NetworkVarNames: m_ragEnabled (bool)
            // NetworkVarNames: m_ragPos (Vector)
            // NetworkVarNames: m_ragAngles (QAngle)
            // NetworkVarNames: m_flBlendWeight (float32)
            // NetworkVarNames: m_hRagdollSource (EHANDLE)
            namespace C_RagdollProp {
                constexpr std::ptrdiff_t m_ragEnabled = 0x1160; // C_NetworkUtlVectorBase<bool>
                constexpr std::ptrdiff_t m_ragPos = 0x1178; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_ragAngles = 0x1190; // C_NetworkUtlVectorBase<QAngle>
                constexpr std::ptrdiff_t m_flBlendWeight = 0x11A8; // float32
                constexpr std::ptrdiff_t m_hRagdollSource = 0x11AC; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iEyeAttachment = 0x11B0; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_flBlendWeightCurrent = 0x11B4; // float32
                constexpr std::ptrdiff_t m_parentPhysicsBoneIndices = 0x11B8; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_worldSpaceBoneComputationOrder = 0x11D0; // CUtlVector<int32>
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_CallInfo {
                constexpr std::ptrdiff_t m_PortName = 0x0; // PulseSymbol_t
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x10; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_RegisterMap = 0x18; // PulseRegisterMap_t
                constexpr std::ptrdiff_t m_CallMethodID = 0x48; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_nSrcChunk = 0x4C; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nSrcInstruction = 0x50; // int32
            }
            // Parent: C_ParticleSystem
            // Field count: 0
            namespace C_MapPreviewParticleSystem {
            }
            // Parent: C_BaseModelEntity
            // Field count: 14
            //
            // Metadata:
            // MNetworkIncludeByName
            // NetworkVarNames: m_bInitiallyPopulateInterpHistory (bool)
            // NetworkVarNames: m_bAnimGraphUpdateEnabled (bool)
            // NetworkVarNames: m_vecForce (Vector)
            // NetworkVarNames: m_nForceBone (int32)
            // NetworkVarNames: m_RagdollPose (PhysicsRagdollPose_t)
            // NetworkVarNames: m_bRagdollEnabled (bool)
            // NetworkVarNames: m_bRagdollClientSide (bool)
            namespace CBaseAnimGraph {
                constexpr std::ptrdiff_t m_bInitiallyPopulateInterpHistory = 0xF30; // bool
                constexpr std::ptrdiff_t m_bSuppressAnimEventSounds = 0xF32; // bool
                constexpr std::ptrdiff_t m_bAnimGraphUpdateEnabled = 0xF40; // bool
                constexpr std::ptrdiff_t m_flMaxSlopeDistance = 0xF44; // float32
                constexpr std::ptrdiff_t m_vLastSlopeCheckPos = 0xF48; // VectorWS
                constexpr std::ptrdiff_t m_bAnimationUpdateScheduled = 0xF54; // bool
                constexpr std::ptrdiff_t m_vecForce = 0xF58; // Vector
                constexpr std::ptrdiff_t m_nForceBone = 0xF64; // int32
                constexpr std::ptrdiff_t m_pClientsideRagdoll = 0xF68; // CBaseAnimGraph*
                constexpr std::ptrdiff_t m_bBuiltRagdoll = 0xF70; // bool
                constexpr std::ptrdiff_t m_RagdollPose = 0xF88; // PhysicsRagdollPose_t
                constexpr std::ptrdiff_t m_bRagdollEnabled = 0xFD0; // bool
                constexpr std::ptrdiff_t m_bRagdollClientSide = 0xFD1; // bool
                constexpr std::ptrdiff_t m_bHasAnimatedMaterialAttributes = 0xFE0; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_InlineNodeSkipSelector {
                constexpr std::ptrdiff_t m_nFlowNodeID = 0x48; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_bAnd = 0x4C; // bool
                constexpr std::ptrdiff_t m_PassOutflow = 0x50; // PulseSelectorOutflowList_t
                constexpr std::ptrdiff_t m_FailOutflow = 0x68; // CPulse_OutflowConnection
            }
            // Parent: C_BaseModelEntity
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_CLightComponent (CLightComponent::Storage_t)
            namespace C_LightEntity {
                constexpr std::ptrdiff_t m_CLightComponent = 0xEB0; // CLightComponent*
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponM249 {
            }
            // Parent: CBaseAnimGraph
            // Field count: 25
            namespace C_LocalTempEntity {
                constexpr std::ptrdiff_t flags = 0x1158; // int32
                constexpr std::ptrdiff_t die = 0x115C; // GameTime_t
                constexpr std::ptrdiff_t m_flFrameMax = 0x1160; // float32
                constexpr std::ptrdiff_t x = 0x1164; // float32
                constexpr std::ptrdiff_t y = 0x1168; // float32
                constexpr std::ptrdiff_t fadeSpeed = 0x116C; // float32
                constexpr std::ptrdiff_t bounceFactor = 0x1170; // float32
                constexpr std::ptrdiff_t hitSound = 0x1174; // int32
                constexpr std::ptrdiff_t priority = 0x1178; // int32
                constexpr std::ptrdiff_t tentOffset = 0x117C; // Vector
                constexpr std::ptrdiff_t m_vecTempEntAngVelocity = 0x1188; // QAngle
                constexpr std::ptrdiff_t tempent_renderamt = 0x1194; // int32
                constexpr std::ptrdiff_t m_vecNormal = 0x1198; // Vector
                constexpr std::ptrdiff_t m_flSpriteScale = 0x11A4; // float32
                constexpr std::ptrdiff_t m_nFlickerFrame = 0x11A8; // int32
                constexpr std::ptrdiff_t m_flFrameRate = 0x11AC; // float32
                constexpr std::ptrdiff_t m_flFrame = 0x11B0; // float32
                constexpr std::ptrdiff_t m_pszImpactEffect = 0x11B8; // char*
                constexpr std::ptrdiff_t m_pszParticleEffect = 0x11C0; // char*
                constexpr std::ptrdiff_t m_bParticleCollision = 0x11C8; // bool
                constexpr std::ptrdiff_t m_iLastCollisionFrame = 0x11CC; // int32
                constexpr std::ptrdiff_t m_vLastCollisionOrigin = 0x11D0; // Vector
                constexpr std::ptrdiff_t m_vecTempEntVelocity = 0x11DC; // Vector
                constexpr std::ptrdiff_t m_vecPrevAbsOrigin = 0x11E8; // Vector
                constexpr std::ptrdiff_t m_vecTempEntAcceleration = 0x11F4; // Vector
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 2
            //
            // Metadata:
            // NetworkVarNames: m_fFireTime (GameTime_t)
            namespace C_WeaponTaser {
                constexpr std::ptrdiff_t m_fFireTime = 0x1FB0; // GameTime_t
                constexpr std::ptrdiff_t m_nLastAttackTick = 0x1FB4; // int32
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace C_PointEntity {
            }
            // Parent: None
            // Field count: 0
            namespace C_SingleplayRules {
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace CLogicalEntity {
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            namespace C_PrecipitationBlocker {
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Field count: 0
            namespace C_CSGO_CounterTerroristTeamIntroCamera {
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            namespace C_SoundOpvarSetPathCornerEntity {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 4
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
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponNegev {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponFiveSeven {
            }
            // Parent: C_CSWeaponBaseShotgun
            // Field count: 0
            namespace C_WeaponSawedoff {
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            namespace C_TriggerVolume {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CPulseCell_LimitCount {
                constexpr std::ptrdiff_t m_nLimitCount = 0x48; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Step_CallExternalMethod {
                constexpr std::ptrdiff_t m_MethodName = 0x48; // PulseSymbol_t
                constexpr std::ptrdiff_t m_GameBlackboard = 0x58; // PulseSymbol_t
                constexpr std::ptrdiff_t m_ExpectedArgs = 0x68; // CUtlLeanVector<CPulseRuntimeMethodArg>
                constexpr std::ptrdiff_t m_nAsyncCallMode = 0x78; // PulseMethodCallMode_t
                constexpr std::ptrdiff_t m_OnFinished = 0x80; // CPulse_ResumePoint
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponMP9 {
            }
            // Parent: C_DynamicProp
            // Field count: 0
            namespace C_DynamicPropAlias_prop_dynamic_override {
            }
            // Parent: CEnvSoundscape
            // Field count: 0
            namespace CEnvSoundscapeTriggerable {
            }
            // Parent: C_BaseEntity
            // Field count: 5
            //
            // Metadata:
            // NetworkVarNames: m_hPlayer (CHandle<CCSPlayerPawn>)
            // NetworkVarNames: m_hPingedEntity (CHandle<CBaseEntity>)
            // NetworkVarNames: m_iType (int)
            // NetworkVarNames: m_bUrgent (bool)
            // NetworkVarNames: m_szPlaceName (char)
            namespace C_PlayerPing {
                constexpr std::ptrdiff_t m_hPlayer = 0x628; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_hPingedEntity = 0x62C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iType = 0x630; // int32
                constexpr std::ptrdiff_t m_bUrgent = 0x634; // bool
                constexpr std::ptrdiff_t m_szPlaceName = 0x635; // char[18]
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_AK47 {
            }
            // Parent: C_BaseEntity
            // Field count: 10
            namespace C_CSGO_MapPreviewCameraPathNode {
                constexpr std::ptrdiff_t m_szParentPathUniqueID = 0x5F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nPathIndex = 0x600; // int32
                constexpr std::ptrdiff_t m_vInTangentLocal = 0x604; // Vector
                constexpr std::ptrdiff_t m_vOutTangentLocal = 0x610; // Vector
                constexpr std::ptrdiff_t m_flFOV = 0x61C; // float32
                constexpr std::ptrdiff_t m_flCameraSpeed = 0x620; // float32
                constexpr std::ptrdiff_t m_flEaseIn = 0x624; // float32
                constexpr std::ptrdiff_t m_flEaseOut = 0x628; // float32
                constexpr std::ptrdiff_t m_vInTangentWorld = 0x62C; // Vector
                constexpr std::ptrdiff_t m_vOutTangentWorld = 0x638; // Vector
            }
            // Parent: C_BaseEntity
            // Field count: 10
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
                constexpr std::ptrdiff_t m_bHostageAlive = 0x5F8; // bool[12]
                constexpr std::ptrdiff_t m_isHostageFollowingSomeone = 0x604; // bool[12]
                constexpr std::ptrdiff_t m_iHostageEntityIDs = 0x610; // CEntityIndex[12]
                constexpr std::ptrdiff_t m_bombsiteCenterA = 0x640; // Vector
                constexpr std::ptrdiff_t m_bombsiteCenterB = 0x64C; // Vector
                constexpr std::ptrdiff_t m_hostageRescueX = 0x658; // int32[4]
                constexpr std::ptrdiff_t m_hostageRescueY = 0x668; // int32[4]
                constexpr std::ptrdiff_t m_hostageRescueZ = 0x678; // int32[4]
                constexpr std::ptrdiff_t m_bEndMatchNextMapAllVoted = 0x688; // bool
                constexpr std::ptrdiff_t m_foundGoalPositions = 0x689; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 2
            namespace CSkyboxReference {
                constexpr std::ptrdiff_t m_worldGroupId = 0x5F8; // WorldGroupId_t
                constexpr std::ptrdiff_t m_hSkyCamera = 0x5FC; // CHandle<C_SkyCamera>
            }
            // Parent: C_MolotovGrenade
            // Field count: 0
            namespace C_IncendiaryGrenade {
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterClass {
                constexpr std::ptrdiff_t m_iFilterClass = 0x650; // CUtlSymbolLarge
            }
            // Parent: C_PointCamera
            // Field count: 1
            namespace C_PointCameraVFOV {
                constexpr std::ptrdiff_t m_flVerticalFOV = 0x658; // float32
            }
            // Parent: C_BaseEntity
            // Field count: 26
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
            // NetworkVarNames: m_bAlignWithParent (bool)
            // NetworkVarNames: m_bDofEnabled (bool)
            // NetworkVarNames: m_flDofNearBlurry (float)
            // NetworkVarNames: m_flDofNearCrisp (float)
            // NetworkVarNames: m_flDofFarCrisp (float)
            // NetworkVarNames: m_flDofFarBlurry (float)
            // NetworkVarNames: m_flDofTiltToGround (float)
            namespace C_PointCamera {
                constexpr std::ptrdiff_t m_FOV = 0x5F8; // float32
                constexpr std::ptrdiff_t m_Resolution = 0x5FC; // float32
                constexpr std::ptrdiff_t m_bFogEnable = 0x600; // bool
                constexpr std::ptrdiff_t m_FogColor = 0x601; // Color
                constexpr std::ptrdiff_t m_flFogStart = 0x608; // float32
                constexpr std::ptrdiff_t m_flFogEnd = 0x60C; // float32
                constexpr std::ptrdiff_t m_flFogMaxDensity = 0x610; // float32
                constexpr std::ptrdiff_t m_bActive = 0x614; // bool
                constexpr std::ptrdiff_t m_bUseScreenAspectRatio = 0x615; // bool
                constexpr std::ptrdiff_t m_flAspectRatio = 0x618; // float32
                constexpr std::ptrdiff_t m_bNoSky = 0x61C; // bool
                constexpr std::ptrdiff_t m_fBrightness = 0x620; // float32
                constexpr std::ptrdiff_t m_flZFar = 0x624; // float32
                constexpr std::ptrdiff_t m_flZNear = 0x628; // float32
                constexpr std::ptrdiff_t m_bCanHLTVUse = 0x62C; // bool
                constexpr std::ptrdiff_t m_bAlignWithParent = 0x62D; // bool
                constexpr std::ptrdiff_t m_bDofEnabled = 0x62E; // bool
                constexpr std::ptrdiff_t m_flDofNearBlurry = 0x630; // float32
                constexpr std::ptrdiff_t m_flDofNearCrisp = 0x634; // float32
                constexpr std::ptrdiff_t m_flDofFarCrisp = 0x638; // float32
                constexpr std::ptrdiff_t m_flDofFarBlurry = 0x63C; // float32
                constexpr std::ptrdiff_t m_flDofTiltToGround = 0x640; // float32
                constexpr std::ptrdiff_t m_TargetFOV = 0x644; // float32
                constexpr std::ptrdiff_t m_DegreesPerSecond = 0x648; // float32
                constexpr std::ptrdiff_t m_bIsOn = 0x64C; // bool
                constexpr std::ptrdiff_t m_pNext = 0x650; // C_PointCamera*
            }
            // Parent: CLogicalEntity
            // Field count: 3
            namespace CBaseFilter {
                constexpr std::ptrdiff_t m_bNegated = 0x5F8; // bool
                constexpr std::ptrdiff_t m_OnPass = 0x600; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFail = 0x628; // CEntityIOOutput
            }
            // Parent: 
            // Field count: 1
            //
            // Metadata:
            // NetworkVarNames: m_weaponPurchases (WeaponPurchaseCount_t)
            namespace WeaponPurchaseTracker_t {
                constexpr std::ptrdiff_t m_weaponPurchases = 0x8; // C_UtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseObservableBoolExpression_t {
                constexpr std::ptrdiff_t m_EvaluateConnection = 0x0; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_DependentObservableVars = 0x48; // CUtlVector<PulseRuntimeVarIndex_t>
                constexpr std::ptrdiff_t m_DependentObservableBlackboardReferences = 0x60; // CUtlVector<PulseRuntimeBlackboardReferenceIndex_t>
            }
            // Parent: C_PointEntity
            // Field count: 14
            namespace CMapInfo {
                constexpr std::ptrdiff_t m_iBuyingStatus = 0x5F8; // int32
                constexpr std::ptrdiff_t m_flBombRadius = 0x5FC; // float32
                constexpr std::ptrdiff_t m_iPetPopulation = 0x600; // int32
                constexpr std::ptrdiff_t m_bUseNormalSpawnsForDM = 0x604; // bool
                constexpr std::ptrdiff_t m_bDisableAutoGeneratedDMSpawns = 0x605; // bool
                constexpr std::ptrdiff_t m_flBotMaxVisionDistance = 0x608; // float32
                constexpr std::ptrdiff_t m_iHostageCount = 0x60C; // int32
                constexpr std::ptrdiff_t m_bFadePlayerVisibilityFarZ = 0x610; // bool
                constexpr std::ptrdiff_t m_bRainTraceToSkyEnabled = 0x611; // bool
                constexpr std::ptrdiff_t m_flEnvRainStrength = 0x614; // float32
                constexpr std::ptrdiff_t m_flEnvPuddleRippleStrength = 0x618; // float32
                constexpr std::ptrdiff_t m_flEnvPuddleRippleDirection = 0x61C; // float32
                constexpr std::ptrdiff_t m_flEnvWetnessCoverage = 0x620; // float32
                constexpr std::ptrdiff_t m_flEnvWetnessDryingAmount = 0x624; // float32
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Field count: 0
            namespace C_CSGO_EndOfMatchCamera {
            }
            // Parent: C_BaseFlex
            // Field count: 12
            //
            // Metadata:
            // MNetworkIncludeByName
            // MNetworkIncludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
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
                constexpr std::ptrdiff_t m_bHasWarnedAI = 0x1368; // bool
                constexpr std::ptrdiff_t m_bIsSmokeGrenade = 0x1369; // bool
                constexpr std::ptrdiff_t m_bIsLive = 0x136A; // bool
                constexpr std::ptrdiff_t m_DmgRadius = 0x136C; // float32
                constexpr std::ptrdiff_t m_flDetonateTime = 0x1370; // GameTime_t
                constexpr std::ptrdiff_t m_flWarnAITime = 0x1374; // float32
                constexpr std::ptrdiff_t m_flDamage = 0x1378; // float32
                constexpr std::ptrdiff_t m_iszBounceSound = 0x1380; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_ExplosionSound = 0x1388; // CUtlString
                constexpr std::ptrdiff_t m_hThrower = 0x1394; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_flNextAttack = 0x13AC; // GameTime_t
                constexpr std::ptrdiff_t m_hOriginalThrower = 0x13B0; // CHandle<C_CSPlayerPawn>
            }
            // Parent: C_ModelPointEntity
            // Field count: 16
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
                constexpr std::ptrdiff_t m_nUniqueID = 0xEB0; // int32
                constexpr std::ptrdiff_t m_unAccountID = 0xEB4; // uint32
                constexpr std::ptrdiff_t m_unTraceID = 0xEB8; // uint32
                constexpr std::ptrdiff_t m_rtGcTime = 0xEBC; // uint32
                constexpr std::ptrdiff_t m_vecEndPos = 0xEC0; // Vector
                constexpr std::ptrdiff_t m_vecStart = 0xECC; // Vector
                constexpr std::ptrdiff_t m_vecLeft = 0xED8; // Vector
                constexpr std::ptrdiff_t m_vecNormal = 0xEE4; // Vector
                constexpr std::ptrdiff_t m_nPlayer = 0xEF0; // int32
                constexpr std::ptrdiff_t m_nEntity = 0xEF4; // int32
                constexpr std::ptrdiff_t m_nHitbox = 0xEF8; // int32
                constexpr std::ptrdiff_t m_flCreationTime = 0xEFC; // float32
                constexpr std::ptrdiff_t m_nTintID = 0xF00; // int32
                constexpr std::ptrdiff_t m_nVersion = 0xF04; // uint8
                constexpr std::ptrdiff_t m_ubSignature = 0xF05; // uint8[128]
                constexpr std::ptrdiff_t m_SprayRenderHelper = 0xF90; // CPlayerSprayDecalRenderHelper
            }
            // Parent: 
            // Field count: 11
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
                constexpr std::ptrdiff_t m_pPrev = 0x50; // CEntityIdentity*
                constexpr std::ptrdiff_t m_pNext = 0x58; // CEntityIdentity*
                constexpr std::ptrdiff_t m_pPrevByClass = 0x60; // CEntityIdentity*
                constexpr std::ptrdiff_t m_pNextByClass = 0x68; // CEntityIdentity*
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_LimitCount__Criteria_t {
                constexpr std::ptrdiff_t m_bLimitCountPasses = 0x0; // bool
            }
            // Parent: C_CS2HudModelBase
            // Field count: 0
            namespace C_CS2HudModelArms {
            }
            // Parent: None
            // Field count: 14
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
            // Parent: C_LightEntity
            // Field count: 0
            namespace C_LightSpotEntity {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_flDMBonusStartTime (GameTime_t)
            // NetworkVarNames: m_flDMBonusTimeLength (float)
            // NetworkVarNames: m_sDMBonusWeapon (CUtlString)
            namespace CCSGameModeRules_Deathmatch {
                constexpr std::ptrdiff_t m_flDMBonusStartTime = 0x30; // GameTime_t
                constexpr std::ptrdiff_t m_flDMBonusTimeLength = 0x34; // float32
                constexpr std::ptrdiff_t m_sDMBonusWeapon = 0x38; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace CPulseCell_CursorQueue {
                constexpr std::ptrdiff_t m_nCursorsAllowedToRunParallel = 0x98; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace CPulseCell_Value_RandomFloat {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseExecCursor {
            }
            // Parent: C_BaseModelEntity
            // Field count: 23
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
                constexpr std::ptrdiff_t m_hSpriteMaterial = 0xEB0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hAttachedToEntity = 0xEB8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nAttachment = 0xEBC; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_flSpriteFramerate = 0xEC0; // float32
                constexpr std::ptrdiff_t m_flFrame = 0xEC4; // float32
                constexpr std::ptrdiff_t m_flDieTime = 0xEC8; // GameTime_t
                constexpr std::ptrdiff_t m_nBrightness = 0xED8; // uint32
                constexpr std::ptrdiff_t m_flBrightnessDuration = 0xEDC; // float32
                constexpr std::ptrdiff_t m_flSpriteScale = 0xEE0; // float32
                constexpr std::ptrdiff_t m_flScaleDuration = 0xEE4; // float32
                constexpr std::ptrdiff_t m_bWorldSpaceScale = 0xEE8; // bool
                constexpr std::ptrdiff_t m_flGlowProxySize = 0xEEC; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0xEF0; // float32
                constexpr std::ptrdiff_t m_flLastTime = 0xEF4; // GameTime_t
                constexpr std::ptrdiff_t m_flMaxFrame = 0xEF8; // float32
                constexpr std::ptrdiff_t m_flStartScale = 0xEFC; // float32
                constexpr std::ptrdiff_t m_flDestScale = 0xF00; // float32
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0xF04; // GameTime_t
                constexpr std::ptrdiff_t m_nStartBrightness = 0xF08; // int32
                constexpr std::ptrdiff_t m_nDestBrightness = 0xF0C; // int32
                constexpr std::ptrdiff_t m_flBrightnessTimeStart = 0xF10; // GameTime_t
                constexpr std::ptrdiff_t m_nSpriteWidth = 0xF20; // int32
                constexpr std::ptrdiff_t m_nSpriteHeight = 0xF24; // int32
            }
            // Parent: C_BaseEntity
            // Field count: 2
            namespace C_CsmFovOverride {
                constexpr std::ptrdiff_t m_cameraName = 0x5F8; // CUtlString
                constexpr std::ptrdiff_t m_flCsmFovOverrideValue = 0x600; // float32
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponGlock {
            }
            // Parent: C_BreakableProp
            // Field count: 1
            //
            // Metadata:
            // MNetworkExcludeByName
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkExcludeByName
            // MNetworkExcludeByUserGroup
            // MNetworkIncludeByName
            // NetworkVarNames: m_bAwake (bool)
            namespace C_PhysicsProp {
                constexpr std::ptrdiff_t m_bAwake = 0x1300; // bool
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterTeam {
                constexpr std::ptrdiff_t m_iFilterTeam = 0x650; // int32
            }
            // Parent: None
            // Field count: 30
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBasePlayerWeaponVData {
                constexpr std::ptrdiff_t m_szWorldModel = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_sToolsOnlyOwnerModelName = 0x108; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_bBuiltRightHanded = 0x1E8; // bool
                constexpr std::ptrdiff_t m_bAllowFlipping = 0x1E9; // bool
                constexpr std::ptrdiff_t m_sMuzzleAttachment = 0x1F0; // CAttachmentNameSymbolWithStorage
                constexpr std::ptrdiff_t m_szMuzzleFlashParticle = 0x210; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_szMuzzleFlashParticleConfig = 0x2F0; // CUtlString
                constexpr std::ptrdiff_t m_szBarrelSmokeParticle = 0x2F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_nMuzzleSmokeShotThreshold = 0x3D8; // uint8
                constexpr std::ptrdiff_t m_flMuzzleSmokeTimeout = 0x3DC; // float32
                constexpr std::ptrdiff_t m_flMuzzleSmokeDecrementRate = 0x3E0; // float32
                constexpr std::ptrdiff_t m_bLinkedCooldowns = 0x3E4; // bool
                constexpr std::ptrdiff_t m_iFlags = 0x3E5; // ItemFlagTypes_t
                constexpr std::ptrdiff_t m_nPrimaryAmmoType = 0x3E6; // AmmoIndex_t
                constexpr std::ptrdiff_t m_nSecondaryAmmoType = 0x3E7; // AmmoIndex_t
                constexpr std::ptrdiff_t m_iMaxClip1 = 0x3E8; // int32
                constexpr std::ptrdiff_t m_iMaxClip2 = 0x3EC; // int32
                constexpr std::ptrdiff_t m_iDefaultClip1 = 0x3F0; // int32
                constexpr std::ptrdiff_t m_iDefaultClip2 = 0x3F4; // int32
                constexpr std::ptrdiff_t m_bReserveAmmoAsClips = 0x3F8; // bool
                constexpr std::ptrdiff_t m_bTreatAsSingleClip = 0x3F9; // bool
                constexpr std::ptrdiff_t m_bKeepLoadedAmmo = 0x3FA; // bool
                constexpr std::ptrdiff_t m_iWeight = 0x3FC; // int32
                constexpr std::ptrdiff_t m_bAutoSwitchTo = 0x400; // bool
                constexpr std::ptrdiff_t m_bAutoSwitchFrom = 0x401; // bool
                constexpr std::ptrdiff_t m_iRumbleEffect = 0x404; // RumbleEffect_t
                constexpr std::ptrdiff_t m_flDropSpeed = 0x408; // float32
                constexpr std::ptrdiff_t m_iSlot = 0x40C; // int32
                constexpr std::ptrdiff_t m_iPosition = 0x410; // int32
                constexpr std::ptrdiff_t m_aShootSounds = 0x418; // CUtlOrderedMap<WeaponSound_t,CSoundEventName>
            }
            // Parent: C_CSGO_EndOfMatchLineupEndpoint
            // Field count: 0
            namespace C_CSGO_EndOfMatchLineupEnd {
            }
            // Parent: C_CSGO_PreviewPlayer
            // Field count: 0
            namespace C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel {
            }
            // Parent: C_BaseCSGrenade
            // Field count: 0
            namespace C_SmokeGrenade {
            }
            // Parent: C_PointEntity
            // Field count: 0
            namespace CInfoParticleTarget {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CCSPlayer_DamageReactServices {
            }
            // Parent: C_BaseClientUIEntity
            // Field count: 29
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
            // NetworkVarNames: m_bVisibleWhenParentNoDraw (bool)
            // NetworkVarNames: m_bRenderBackface (bool)
            // NetworkVarNames: m_bUseOffScreenIndicator (bool)
            // NetworkVarNames: m_bExcludeFromSaveGames (bool)
            // NetworkVarNames: m_bGrabbable (bool)
            // NetworkVarNames: m_bOnlyRenderToTexture (bool)
            // NetworkVarNames: m_bDisableMipGen (bool)
            // NetworkVarNames: m_nExplicitImageLayout (int32)
            namespace C_PointClientUIWorldPanel {
                constexpr std::ptrdiff_t m_bForceRecreateNextUpdate = 0xEE8; // bool
                constexpr std::ptrdiff_t m_bMoveViewToPlayerNextThink = 0xEE9; // bool
                constexpr std::ptrdiff_t m_bCheckCSSClasses = 0xEEA; // bool
                constexpr std::ptrdiff_t m_anchorDeltaTransform = 0xEF0; // CTransform
                constexpr std::ptrdiff_t m_pOffScreenIndicator = 0x1080; // CPointOffScreenIndicatorUi*
                constexpr std::ptrdiff_t m_bIgnoreInput = 0x10A8; // bool
                constexpr std::ptrdiff_t m_bLit = 0x10A9; // bool
                constexpr std::ptrdiff_t m_bFollowPlayerAcrossTeleport = 0x10AA; // bool
                constexpr std::ptrdiff_t m_flWidth = 0x10AC; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x10B0; // float32
                constexpr std::ptrdiff_t m_flDPI = 0x10B4; // float32
                constexpr std::ptrdiff_t m_flInteractDistance = 0x10B8; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0x10BC; // float32
                constexpr std::ptrdiff_t m_unOwnerContext = 0x10C0; // uint32
                constexpr std::ptrdiff_t m_unHorizontalAlign = 0x10C4; // uint32
                constexpr std::ptrdiff_t m_unVerticalAlign = 0x10C8; // uint32
                constexpr std::ptrdiff_t m_unOrientation = 0x10CC; // uint32
                constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0x10D0; // bool
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x10D8; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_bOpaque = 0x10F0; // bool
                constexpr std::ptrdiff_t m_bNoDepth = 0x10F1; // bool
                constexpr std::ptrdiff_t m_bVisibleWhenParentNoDraw = 0x10F2; // bool
                constexpr std::ptrdiff_t m_bRenderBackface = 0x10F3; // bool
                constexpr std::ptrdiff_t m_bUseOffScreenIndicator = 0x10F4; // bool
                constexpr std::ptrdiff_t m_bExcludeFromSaveGames = 0x10F5; // bool
                constexpr std::ptrdiff_t m_bGrabbable = 0x10F6; // bool
                constexpr std::ptrdiff_t m_bOnlyRenderToTexture = 0x10F7; // bool
                constexpr std::ptrdiff_t m_bDisableMipGen = 0x10F8; // bool
                constexpr std::ptrdiff_t m_nExplicitImageLayout = 0x10FC; // int32
            }
            // Parent: C_BaseEntity
            // Field count: 3
            //
            // Metadata:
            // NetworkVarNames: m_hEntAttached (CHandle<C_BaseEntity>)
            // NetworkVarNames: m_bCheapEffect (bool)
            namespace C_EntityFlame {
                constexpr std::ptrdiff_t m_hEntAttached = 0x5F8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hOldAttached = 0x620; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bCheapEffect = 0x624; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 16
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
            // NetworkVarNames: m_bKnownTeamMismatch (bool)
            // NetworkVarNames: m_iConnected (PlayerConnectedState)
            // NetworkVarNames: m_iszPlayerName (char)
            // NetworkVarNames: m_steamID (uint64)
            // NetworkVarNames: m_bNoClipEnabled (bool)
            // NetworkVarNames: m_iDesiredFOV (uint32)
            // MNetworkReplayCompatField
            namespace CBasePlayerController {
                constexpr std::ptrdiff_t m_CommandContext = 0x600; // C_CommandContext
                constexpr std::ptrdiff_t m_nInButtonsWhichAreToggles = 0x6A8; // uint64
                constexpr std::ptrdiff_t m_nTickBase = 0x6B0; // uint32
                constexpr std::ptrdiff_t m_hPawn = 0x6B4; // CHandle<C_BasePlayerPawn>
                constexpr std::ptrdiff_t m_bKnownTeamMismatch = 0x6B8; // bool
                constexpr std::ptrdiff_t m_hPredictedPawn = 0x6BC; // CHandle<C_BasePlayerPawn>
                constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x6C0; // CSplitScreenSlot
                constexpr std::ptrdiff_t m_hSplitOwner = 0x6C4; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_hSplitScreenPlayers = 0x6C8; // CUtlVector<CHandle<CBasePlayerController>>
                constexpr std::ptrdiff_t m_bIsHLTV = 0x6E0; // bool
                constexpr std::ptrdiff_t m_iConnected = 0x6E4; // PlayerConnectedState
                constexpr std::ptrdiff_t m_iszPlayerName = 0x6E8; // char[128]
                constexpr std::ptrdiff_t m_steamID = 0x770; // uint64
                constexpr std::ptrdiff_t m_bIsLocalPlayerController = 0x778; // bool
                constexpr std::ptrdiff_t m_bNoClipEnabled = 0x779; // bool
                constexpr std::ptrdiff_t m_iDesiredFOV = 0x77C; // uint32
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace C_CSGO_EndOfMatchLineupEndpoint {
            }
        }
    }
}
