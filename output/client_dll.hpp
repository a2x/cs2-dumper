// Generated using https://github.com/a2x/cs2-dumper
// 2026-07-21 00:33:36.983799300 UTC

#pragma once

#include <cstddef>
#include <cstdint>

namespace cs2_dumper {
    namespace schemas {
        // Module: client.dll
        // Class count: 563
        // Enum count: 14
        namespace client_dll {
            // Alignment: 4
            // Member count: 5
            enum class C_BaseCombatCharacter__WaterWakeMode_t : uint32_t {
                WATER_WAKE_NONE = 0x0,
                WATER_WAKE_IDLE = 0x1,
                WATER_WAKE_WALKING = 0x2,
                WATER_WAKE_RUNNING = 0x3,
                WATER_WAKE_WATER_OVERHEAD = 0x4
            };
            // Alignment: 4
            // Member count: 2
            enum class PulseBestOutflowRules_t : uint32_t {
                SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
                SORT_BY_OUTFLOW_INDEX = 0x1
            };
            // Alignment: 4
            // Member count: 4
            enum class PulseCursorCancelPriority_t : uint32_t {
                None = 0x0,
                CancelOnSucceeded = 0x1,
                SoftCancel = 0x2,
                HardCancel = 0x3
            };
            // Alignment: 4
            // Member count: 2
            enum class PulseMethodCallMode_t : uint32_t {
                SYNC_WAIT_FOR_COMPLETION = 0x0,
                ASYNC_FIRE_AND_FORGET = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class PulseCursorWakePriority_t : uint32_t {
                WakeElegantly = 0x0,
                WakeImmediate = 0x1
            };
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
            // Member count: 7
            enum class P2P_Messages : uint32_t {
                p2p_TextMessage = 0x100,
                p2p_Voice = 0x101,
                p2p_Ping = 0x102,
                p2p_VRAvatarPosition = 0x103,
                p2p_WatchSynchronization = 0x104,
                p2p_FightingGame_GameData = 0x105,
                p2p_FightingGame_Connection = 0x106
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
                constexpr std::ptrdiff_t m_bTagSelfWhenComplete = 0x128; // bool
                constexpr std::ptrdiff_t m_nDesiredKillPriority = 0x12C; // PulseCursorCancelPriority_t
            }
            // Parent: None
            // Field count: 1
            namespace C_SceneEntity__QueuedEvents_t {
                constexpr std::ptrdiff_t starttime = 0x0; // float32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 1
            namespace CCSPlayer_PingServices {
                constexpr std::ptrdiff_t m_hPlayerPing = 0x48; // CHandle<C_PlayerPing>
            }
            // Parent: None
            // Field count: 5
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
            // Parent: C_DynamicProp
            // Field count: 0
            namespace CFuncRetakeBarrier {
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
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
                constexpr std::ptrdiff_t m_location = 0x30; // VectorWS
                constexpr std::ptrdiff_t m_hEntOwner = 0x3C; // CHandle<C_BaseEntity>
            }
            // Parent: C_BaseEntity
            // Field count: 4
            namespace C_SkyCamera {
                constexpr std::ptrdiff_t m_skyboxData = 0x600; // sky3dparams_t
                constexpr std::ptrdiff_t m_skyboxSlotToken = 0x690; // CUtlStringToken
                constexpr std::ptrdiff_t m_bUseAngles = 0x694; // bool
                constexpr std::ptrdiff_t m_pNext = 0x698; // C_SkyCamera*
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
            namespace C_FuncRotating {
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_PreviewPlayer_API {
            }
            // Parent: C_BaseEntity
            // Field count: 6
            namespace C_SoundOpvarSetPointBase {
                constexpr std::ptrdiff_t m_iszStackName = 0x600; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperatorName = 0x608; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvarName = 0x610; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iOpvarIndex = 0x618; // int32
                constexpr std::ptrdiff_t m_bUseAutoCompare = 0x61C; // bool
                constexpr std::ptrdiff_t m_bFastRefresh = 0x61D; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 24
            namespace C_EnvCubemapFog {
                constexpr std::ptrdiff_t m_flEndDistance = 0x600; // float32
                constexpr std::ptrdiff_t m_flStartDistance = 0x604; // float32
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x608; // float32
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x60C; // bool
                constexpr std::ptrdiff_t m_flFogHeightWidth = 0x610; // float32
                constexpr std::ptrdiff_t m_flFogHeightEnd = 0x614; // float32
                constexpr std::ptrdiff_t m_flFogHeightStart = 0x618; // float32
                constexpr std::ptrdiff_t m_flFogHeightExponent = 0x61C; // float32
                constexpr std::ptrdiff_t m_flLODBias = 0x620; // float32
                constexpr std::ptrdiff_t m_bActive = 0x624; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0x625; // bool
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x628; // float32
                constexpr std::ptrdiff_t m_nCubemapSourceType = 0x62C; // int32
                constexpr std::ptrdiff_t m_hSkyMaterial = 0x630; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_iszSkyEntity = 0x638; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nHeightFogType = 0x640; // int32
                constexpr std::ptrdiff_t m_nFogHeightBlendMode = 0x644; // int32
                constexpr std::ptrdiff_t m_nFogHeightCoordinateSpace = 0x648; // int32
                constexpr std::ptrdiff_t m_nDistanceFogType = 0x64C; // int32
                constexpr std::ptrdiff_t m_DistanceFogCurveString = 0x650; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_HeightFogCurveString = 0x658; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFogCubemapTexture = 0x6F0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_bHasHeightFogEnd = 0x6F8; // bool
                constexpr std::ptrdiff_t m_bFirstTime = 0x6F9; // bool
            }
            // Parent: C_CSGO_TeamSelectCharacterPosition
            // Field count: 0
            namespace C_CSGO_TeamSelectTerroristPosition {
            }
            // Parent: C_ParticleSystem
            // Field count: 5
            namespace C_EnvParticleGlow {
                constexpr std::ptrdiff_t m_flAlphaScale = 0x1580; // float32
                constexpr std::ptrdiff_t m_flRadiusScale = 0x1584; // float32
                constexpr std::ptrdiff_t m_flSelfIllumScale = 0x1588; // float32
                constexpr std::ptrdiff_t m_ColorTint = 0x158C; // Color
                constexpr std::ptrdiff_t m_hTextureOverride = 0x1590; // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace CCS_PortraitWorldCallbackHandler {
            }
            // Parent: CPlayerControllerComponent
            // Field count: 9
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
            // Field count: 9
            namespace CCSPlayerModernJump {
                constexpr std::ptrdiff_t m_nLastActualJumpPressTick = 0x10; // GameTick_t
                constexpr std::ptrdiff_t m_flLastActualJumpPressFrac = 0x14; // float32
                constexpr std::ptrdiff_t m_nLastUsableJumpPressTick = 0x18; // GameTick_t
                constexpr std::ptrdiff_t m_flLastUsableJumpPressFrac = 0x1C; // float32
                constexpr std::ptrdiff_t m_nLastLandedTick = 0x20; // GameTick_t
                constexpr std::ptrdiff_t m_flLastLandedFrac = 0x24; // float32
                constexpr std::ptrdiff_t m_flLastLandedVelocityX = 0x28; // float32
                constexpr std::ptrdiff_t m_flLastLandedVelocityY = 0x2C; // float32
                constexpr std::ptrdiff_t m_flLastLandedVelocityZ = 0x30; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CCSGO_TeamPreviewCharacterPosition_API {
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
            namespace CTriggerFan {
                constexpr std::ptrdiff_t m_vFanOriginOffset = 0x1098; // Vector
                constexpr std::ptrdiff_t m_vDirection = 0x10A4; // Vector
                constexpr std::ptrdiff_t m_bPushTowardsInfoTarget = 0x10B0; // bool
                constexpr std::ptrdiff_t m_bPushAwayFromInfoTarget = 0x10B1; // bool
                constexpr std::ptrdiff_t m_qNoiseDelta = 0x10C0; // Quaternion
                constexpr std::ptrdiff_t m_hInfoFan = 0x10D0; // CHandle<CInfoFan>
                constexpr std::ptrdiff_t m_flForce = 0x10D4; // float32
                constexpr std::ptrdiff_t m_bFalloff = 0x10D8; // bool
                constexpr std::ptrdiff_t m_RampTimer = 0x10E0; // CountdownTimer
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace C_HostageCarriableProp {
            }
            // Parent: None
            // Field count: 6
            namespace C_BulletHitModel {
                constexpr std::ptrdiff_t m_matLocal = 0x1180; // matrix3x4_t
                constexpr std::ptrdiff_t m_iBoneIndex = 0x11B0; // int32
                constexpr std::ptrdiff_t m_hPlayerParent = 0x11B4; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bIsHit = 0x11B8; // bool
                constexpr std::ptrdiff_t m_flTimeCreated = 0x11BC; // float32
                constexpr std::ptrdiff_t m_vecStartPos = 0x11C0; // VectorWS
            }
            // Parent: None
            // Field count: 3
            namespace C_FuncElectrifiedVolume {
                constexpr std::ptrdiff_t m_nAmbientEffect = 0xFB0; // ParticleIndex_t
                constexpr std::ptrdiff_t m_EffectName = 0xFB8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bState = 0xFC0; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 17
            namespace C_MapVetoPickController {
                constexpr std::ptrdiff_t m_nDraftType = 0x610; // int32
                constexpr std::ptrdiff_t m_nTeamWinningCoinToss = 0x614; // int32
                constexpr std::ptrdiff_t m_nTeamWithFirstChoice = 0x618; // int32[64]
                constexpr std::ptrdiff_t m_nVoteMapIdsList = 0x718; // int32[7]
                constexpr std::ptrdiff_t m_nAccountIDs = 0x734; // int32[64]
                constexpr std::ptrdiff_t m_nMapId0 = 0x834; // int32[64]
                constexpr std::ptrdiff_t m_nMapId1 = 0x934; // int32[64]
                constexpr std::ptrdiff_t m_nMapId2 = 0xA34; // int32[64]
                constexpr std::ptrdiff_t m_nMapId3 = 0xB34; // int32[64]
                constexpr std::ptrdiff_t m_nMapId4 = 0xC34; // int32[64]
                constexpr std::ptrdiff_t m_nMapId5 = 0xD34; // int32[64]
                constexpr std::ptrdiff_t m_nStartingSide0 = 0xE34; // int32[64]
                constexpr std::ptrdiff_t m_nCurrentPhase = 0xF34; // int32
                constexpr std::ptrdiff_t m_nPhaseStartTick = 0xF38; // int32
                constexpr std::ptrdiff_t m_nPhaseDurationTicks = 0xF3C; // int32
                constexpr std::ptrdiff_t m_nPostDataUpdateTick = 0xF40; // int32
                constexpr std::ptrdiff_t m_bDisabledHud = 0xF44; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 18
            namespace C_EnvVolumetricFogVolume {
                constexpr std::ptrdiff_t m_bActive = 0x600; // bool
                constexpr std::ptrdiff_t m_vBoxMins = 0x604; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x610; // Vector
                constexpr std::ptrdiff_t m_bStartDisabled = 0x61C; // bool
                constexpr std::ptrdiff_t m_bIndirectUseLPVs = 0x61D; // bool
                constexpr std::ptrdiff_t m_flStrength = 0x620; // float32
                constexpr std::ptrdiff_t m_nFalloffShape = 0x624; // int32
                constexpr std::ptrdiff_t m_flFalloffExponent = 0x628; // float32
                constexpr std::ptrdiff_t m_flHeightFogDepth = 0x62C; // float32
                constexpr std::ptrdiff_t m_fHeightFogEdgeWidth = 0x630; // float32
                constexpr std::ptrdiff_t m_fIndirectLightStrength = 0x634; // float32
                constexpr std::ptrdiff_t m_fSunLightStrength = 0x638; // float32
                constexpr std::ptrdiff_t m_fNoiseStrength = 0x63C; // float32
                constexpr std::ptrdiff_t m_TintColor = 0x640; // Color
                constexpr std::ptrdiff_t m_bOverrideTintColor = 0x644; // bool
                constexpr std::ptrdiff_t m_bOverrideIndirectLightStrength = 0x645; // bool
                constexpr std::ptrdiff_t m_bOverrideSunLightStrength = 0x646; // bool
                constexpr std::ptrdiff_t m_bOverrideNoiseStrength = 0x647; // bool
            }
            // Parent: C_CSGO_TeamPreviewCharacterPosition
            // Field count: 0
            namespace C_CSGO_EndOfMatchCharacterPosition {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CPulseCell_PlaySequence {
                constexpr std::ptrdiff_t m_SequenceName = 0xD8; // CUtlString
                constexpr std::ptrdiff_t m_PulseAnimEvents = 0xE0; // PulseNodeDynamicOutflows_t
                constexpr std::ptrdiff_t m_OnFinished = 0xF8; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 0
            namespace C_BaseEntityAPI {
            }
            // Parent: C_BaseModelEntity
            // Field count: 76
            namespace C_BarnLight {
                constexpr std::ptrdiff_t m_bEnabled = 0xFB0; // bool
                constexpr std::ptrdiff_t m_nColorMode = 0xFB4; // int32
                constexpr std::ptrdiff_t m_Color = 0xFB8; // Color
                constexpr std::ptrdiff_t m_flColorTemperature = 0xFBC; // float32
                constexpr std::ptrdiff_t m_flBrightness = 0xFC0; // float32
                constexpr std::ptrdiff_t m_flBrightnessScale = 0xFC4; // float32
                constexpr std::ptrdiff_t m_nDirectLight = 0xFC8; // int32
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0xFCC; // int32
                constexpr std::ptrdiff_t m_nLightPathUniqueId = 0xFD0; // int32
                constexpr std::ptrdiff_t m_nLightMapUniqueId = 0xFD4; // int32
                constexpr std::ptrdiff_t m_nLuminaireShape = 0xFD8; // int32
                constexpr std::ptrdiff_t m_flLuminaireSize = 0xFDC; // float32
                constexpr std::ptrdiff_t m_flLuminaireAnisotropy = 0xFE0; // float32
                constexpr std::ptrdiff_t m_LightStyleString = 0xFE8; // CUtlString
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0xFF0; // GameTime_t
                constexpr std::ptrdiff_t m_QueuedLightStyleStrings = 0xFF8; // C_NetworkUtlVectorBase<CUtlString>
                constexpr std::ptrdiff_t m_LightStyleEvents = 0x1010; // C_NetworkUtlVectorBase<CUtlString>
                constexpr std::ptrdiff_t m_LightStyleTargets = 0x1028; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_StyleEvent = 0x1040; // CEntityIOOutput[4]
                constexpr std::ptrdiff_t m_hLightCookie = 0x10A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_flShape = 0x10A8; // float32
                constexpr std::ptrdiff_t m_flSoftX = 0x10AC; // float32
                constexpr std::ptrdiff_t m_flSoftY = 0x10B0; // float32
                constexpr std::ptrdiff_t m_flSkirt = 0x10B4; // float32
                constexpr std::ptrdiff_t m_flSkirtNear = 0x10B8; // float32
                constexpr std::ptrdiff_t m_vSizeParams = 0x10BC; // Vector
                constexpr std::ptrdiff_t m_flRange = 0x10C8; // float32
                constexpr std::ptrdiff_t m_vShear = 0x10CC; // Vector
                constexpr std::ptrdiff_t m_nBakeSpecularToCubemaps = 0x10D8; // int32
                constexpr std::ptrdiff_t m_vBakeSpecularToCubemapsSize = 0x10DC; // Vector
                constexpr std::ptrdiff_t m_flBakeSpecularToCubemapsScale = 0x10E8; // float32
                constexpr std::ptrdiff_t m_nCastShadows = 0x10EC; // int32
                constexpr std::ptrdiff_t m_nShadowMapSize = 0x10F0; // int32
                constexpr std::ptrdiff_t m_nShadowPriority = 0x10F4; // int32
                constexpr std::ptrdiff_t m_bContactShadow = 0x10F8; // bool
                constexpr std::ptrdiff_t m_bForceShadowsEnabled = 0x10F9; // bool
                constexpr std::ptrdiff_t m_nBounceLight = 0x10FC; // int32
                constexpr std::ptrdiff_t m_flBounceScale = 0x1100; // float32
                constexpr std::ptrdiff_t m_flMinRoughness = 0x1104; // float32
                constexpr std::ptrdiff_t m_vAlternateColor = 0x1108; // Vector
                constexpr std::ptrdiff_t m_fAlternateColorBrightness = 0x1114; // float32
                constexpr std::ptrdiff_t m_nFog = 0x1118; // int32
                constexpr std::ptrdiff_t m_flFogStrength = 0x111C; // float32
                constexpr std::ptrdiff_t m_nFogShadows = 0x1120; // int32
                constexpr std::ptrdiff_t m_flFogScale = 0x1124; // float32
                constexpr std::ptrdiff_t m_flFadeSizeStart = 0x1128; // float32
                constexpr std::ptrdiff_t m_flFadeSizeEnd = 0x112C; // float32
                constexpr std::ptrdiff_t m_flShadowFadeSizeStart = 0x1130; // float32
                constexpr std::ptrdiff_t m_flShadowFadeSizeEnd = 0x1134; // float32
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x1138; // bool
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x113C; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x1148; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x1154; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x1160; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x116C; // Vector
                constexpr std::ptrdiff_t m_nPrecomputedSubFrusta = 0x1178; // int32
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin0 = 0x117C; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles0 = 0x1188; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent0 = 0x1194; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin1 = 0x11A0; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles1 = 0x11AC; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent1 = 0x11B8; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin2 = 0x11C4; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles2 = 0x11D0; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent2 = 0x11DC; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin3 = 0x11E8; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles3 = 0x11F4; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent3 = 0x1200; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin4 = 0x120C; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles4 = 0x1218; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent4 = 0x1224; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin5 = 0x1230; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles5 = 0x123C; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent5 = 0x1248; // Vector
                constexpr std::ptrdiff_t m_bInitialBoneSetup = 0x1298; // bool
                constexpr std::ptrdiff_t m_VisClusters = 0x12A0; // C_NetworkUtlVectorBase<uint16>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_LerpCameraSettings {
                constexpr std::ptrdiff_t m_flSeconds = 0x120; // float32
                constexpr std::ptrdiff_t m_Start = 0x124; // PointCameraSettings_t
                constexpr std::ptrdiff_t m_End = 0x134; // PointCameraSettings_t
            }
            // Parent: None
            // Field count: 4
            namespace CPointOffScreenIndicatorUi {
                constexpr std::ptrdiff_t m_bBeenEnabled = 0x1210; // bool
                constexpr std::ptrdiff_t m_bHide = 0x1211; // bool
                constexpr std::ptrdiff_t m_flSeenTargetTime = 0x1214; // float32
                constexpr std::ptrdiff_t m_pTargetPanel = 0x1218; // C_PointClientUIWorldPanel*
            }
            // Parent: CPlayer_UseServices
            // Field count: 0
            namespace CCSObserver_UseServices {
            }
            // Parent: C_BaseTrigger
            // Field count: 12
            namespace C_PostProcessingVolume {
                constexpr std::ptrdiff_t m_hPostSettings = 0x10A8; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
                constexpr std::ptrdiff_t m_flFadeDuration = 0x10B0; // float32
                constexpr std::ptrdiff_t m_flMinLogExposure = 0x10B4; // float32
                constexpr std::ptrdiff_t m_flMaxLogExposure = 0x10B8; // float32
                constexpr std::ptrdiff_t m_flMinExposure = 0x10BC; // float32
                constexpr std::ptrdiff_t m_flMaxExposure = 0x10C0; // float32
                constexpr std::ptrdiff_t m_flExposureCompensation = 0x10C4; // float32
                constexpr std::ptrdiff_t m_flExposureFadeSpeedUp = 0x10C8; // float32
                constexpr std::ptrdiff_t m_flExposureFadeSpeedDown = 0x10CC; // float32
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x10D0; // float32
                constexpr std::ptrdiff_t m_bMaster = 0x10D4; // bool
                constexpr std::ptrdiff_t m_bExposureControl = 0x10D5; // bool
            }
            // Parent: CPlayer_UseServices
            // Field count: 0
            namespace CCSPlayer_UseServices {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_BaseModelEntity__Emphasized_Phoneme {
                constexpr std::ptrdiff_t m_sClassName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_flAmount = 0x18; // float32
                constexpr std::ptrdiff_t m_bRequired = 0x1C; // bool
                constexpr std::ptrdiff_t m_bBasechecked = 0x1D; // bool
                constexpr std::ptrdiff_t m_bValid = 0x1E; // bool
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
            namespace CInfoFan {
                constexpr std::ptrdiff_t m_fFanForceMaxRadius = 0x640; // float32
                constexpr std::ptrdiff_t m_fFanForceMinRadius = 0x644; // float32
                constexpr std::ptrdiff_t m_flCurveDistRange = 0x648; // float32
                constexpr std::ptrdiff_t m_FanForceCurveString = 0x650; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 0
            namespace CCSWeaponBase_API {
            }
            // Parent: C_BaseEntity
            // Field count: 7
            namespace C_VoteController {
                constexpr std::ptrdiff_t m_iActiveIssueIndex = 0x610; // int32
                constexpr std::ptrdiff_t m_iOnlyTeamToVote = 0x614; // int32
                constexpr std::ptrdiff_t m_nVoteOptionCount = 0x618; // int32[5]
                constexpr std::ptrdiff_t m_nPotentialVotes = 0x62C; // int32
                constexpr std::ptrdiff_t m_bVotesDirty = 0x630; // bool
                constexpr std::ptrdiff_t m_bTypeDirty = 0x631; // bool
                constexpr std::ptrdiff_t m_bIsYesNoVote = 0x632; // bool
            }
            // Parent: C_CSWeaponBase
            // Field count: 10
            namespace C_C4 {
                constexpr std::ptrdiff_t m_activeLightParticleIndex = 0x1CE0; // ParticleIndex_t
                constexpr std::ptrdiff_t m_eActiveLightEffect = 0x1CE4; // C4LightEffect_t
                constexpr std::ptrdiff_t m_bStartedArming = 0x1CE8; // bool
                constexpr std::ptrdiff_t m_fArmedTime = 0x1CEC; // GameTime_t
                constexpr std::ptrdiff_t m_bBombPlacedAnimation = 0x1CF0; // bool
                constexpr std::ptrdiff_t m_bIsPlantingViaUse = 0x1CF1; // bool
                constexpr std::ptrdiff_t m_entitySpottedState = 0x1CF8; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSpotRules = 0x1D10; // int32
                constexpr std::ptrdiff_t m_bPlayedArmingBeeps = 0x1D14; // bool[7]
                constexpr std::ptrdiff_t m_bBombPlanted = 0x1D1B; // bool
            }
            // Parent: C_BasePlayerPawn
            // Field count: 26
            namespace C_CSPlayerPawnBase {
                constexpr std::ptrdiff_t m_pPingServices = 0x13F0; // CCSPlayer_PingServices*
                constexpr std::ptrdiff_t m_previousPlayerState = 0x13F8; // CSPlayerState
                constexpr std::ptrdiff_t m_iPlayerState = 0x13FC; // CSPlayerState
                constexpr std::ptrdiff_t m_bHasMovedSinceSpawn = 0x1400; // bool
                constexpr std::ptrdiff_t m_flLastSpawnTimeIndex = 0x1404; // GameTime_t
                constexpr std::ptrdiff_t m_iProgressBarDuration = 0x1408; // int32
                constexpr std::ptrdiff_t m_flProgressBarStartTime = 0x140C; // float32
                constexpr std::ptrdiff_t m_flClientDeathTime = 0x1410; // GameTime_t
                constexpr std::ptrdiff_t m_flFlashBangTime = 0x1414; // float32
                constexpr std::ptrdiff_t m_flFlashScreenshotAlpha = 0x1418; // float32
                constexpr std::ptrdiff_t m_flFlashOverlayAlpha = 0x141C; // float32
                constexpr std::ptrdiff_t m_bFlashBuildUp = 0x1420; // bool
                constexpr std::ptrdiff_t m_bFlashDspHasBeenCleared = 0x1421; // bool
                constexpr std::ptrdiff_t m_bFlashScreenshotHasBeenGrabbed = 0x1422; // bool
                constexpr std::ptrdiff_t m_flFlashMaxAlpha = 0x1424; // float32
                constexpr std::ptrdiff_t m_flFlashDuration = 0x1428; // float32
                constexpr std::ptrdiff_t m_flClientHealthFadeChangeTimestamp = 0x142C; // GameTime_t
                constexpr std::ptrdiff_t m_nClientHealthFadeParityValue = 0x1430; // int32
                constexpr std::ptrdiff_t m_fNextThinkPushAway = 0x1434; // float32
                constexpr std::ptrdiff_t m_flCurrentMusicStartTime = 0x143C; // float32
                constexpr std::ptrdiff_t m_flMusicRoundStartTime = 0x1440; // float32
                constexpr std::ptrdiff_t m_bDeferStartMusicOnWarmup = 0x1444; // bool
                constexpr std::ptrdiff_t m_flLastSmokeOverlayAlpha = 0x1448; // float32
                constexpr std::ptrdiff_t m_flLastSmokeAge = 0x144C; // float32
                constexpr std::ptrdiff_t m_vLastSmokeOverlayColor = 0x1450; // Vector
                constexpr std::ptrdiff_t m_hOriginalController = 0x1478; // CHandle<CCSPlayerController>
            }
            // Parent: CBaseProp
            // Field count: 29
            namespace C_BreakableProp {
                constexpr std::ptrdiff_t m_CPropDataComponent = 0x11B0; // CPropDataComponent
                constexpr std::ptrdiff_t m_OnStartDeath = 0x11F0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBreak = 0x1208; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnHealthChanged = 0x1220; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnTakeDamage = 0x1240; // CEntityIOOutput
                constexpr std::ptrdiff_t m_impactEnergyScale = 0x1258; // float32
                constexpr std::ptrdiff_t m_iMinHealthDmg = 0x125C; // int32
                constexpr std::ptrdiff_t m_flPressureDelay = 0x1260; // float32
                constexpr std::ptrdiff_t m_flDefBurstScale = 0x1264; // float32
                constexpr std::ptrdiff_t m_vDefBurstOffset = 0x1268; // Vector
                constexpr std::ptrdiff_t m_hBreaker = 0x1274; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_PerformanceMode = 0x1278; // PerformanceMode_t
                constexpr std::ptrdiff_t m_flPreventDamageBeforeTime = 0x127C; // GameTime_t
                constexpr std::ptrdiff_t m_BreakableContentsType = 0x1280; // BreakableContentsType_t
                constexpr std::ptrdiff_t m_strBreakableContentsPropGroupOverride = 0x1288; // CUtlString
                constexpr std::ptrdiff_t m_strBreakableContentsParticleOverride = 0x1290; // CUtlString
                constexpr std::ptrdiff_t m_bHasBreakPiecesOrCommands = 0x1298; // bool
                constexpr std::ptrdiff_t m_explodeDamage = 0x129C; // float32
                constexpr std::ptrdiff_t m_explodeRadius = 0x12A0; // float32
                constexpr std::ptrdiff_t m_sExplosionType = 0x12A8; // CGlobalSymbol
                constexpr std::ptrdiff_t m_explosionDelay = 0x12B0; // float32
                constexpr std::ptrdiff_t m_explosionBuildupSound = 0x12B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionCustomEffect = 0x12C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionCustomSound = 0x12C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionModifier = 0x12D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hPhysicsAttacker = 0x12D8; // CHandle<C_BasePlayerPawn>
                constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0x12DC; // GameTime_t
                constexpr std::ptrdiff_t m_flDefaultFadeScale = 0x12E0; // float32
                constexpr std::ptrdiff_t m_hLastAttacker = 0x12E4; // CHandle<C_BaseEntity>
            }
            // Parent: CCSGO_WingmanIntroCharacterPosition
            // Field count: 0
            namespace CCSGO_WingmanIntroTerroristPosition {
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPrecipitationVData {
                constexpr std::ptrdiff_t m_szParticlePrecipitationEffect = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_szParticlePrecipitationPuddleEffect = 0x108; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_szParticlePrecipitationPostEffect = 0x1E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_flInnerDistance = 0x2C8; // float32
                constexpr std::ptrdiff_t m_nAttachType = 0x2CC; // ParticleAttachment_t
                constexpr std::ptrdiff_t m_bBatchSameVolumeType = 0x2D0; // bool
                constexpr std::ptrdiff_t m_nRTEnvCP = 0x2D4; // int32
                constexpr std::ptrdiff_t m_nRTEnvCPComponent = 0x2D8; // int32
                constexpr std::ptrdiff_t m_szModifier = 0x2E0; // CUtlString
                constexpr std::ptrdiff_t m_nUseSnapshotFromSurfaceGraph = 0x2E8; // int32
                constexpr std::ptrdiff_t m_snapshotFilter = 0x2EC; // PrecipitationFilter_t
            }
            // Parent: None
            // Field count: 6
            namespace C_RetakeGameRules {
                constexpr std::ptrdiff_t m_nMatchSeed = 0x138; // int32
                constexpr std::ptrdiff_t m_bBlockersPresent = 0x13C; // bool
                constexpr std::ptrdiff_t m_bRoundInProgress = 0x13D; // bool
                constexpr std::ptrdiff_t m_iFirstSecondHalfRound = 0x140; // int32
                constexpr std::ptrdiff_t m_iBombSite = 0x144; // int32
                constexpr std::ptrdiff_t m_hBombPlanter = 0x148; // CHandle<C_CSPlayerPawn>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CPulseCell_WaitForObservable {
                constexpr std::ptrdiff_t m_Condition = 0xD8; // CPulseObservableExpression<bool>
                constexpr std::ptrdiff_t m_OnTrue = 0x150; // CPulse_ResumePoint
            }
            // Parent: C_SoundAreaEntityBase
            // Field count: 1
            namespace C_SoundAreaEntitySphere {
                constexpr std::ptrdiff_t m_flRadius = 0x628; // float32
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
            // Parent: C_BaseModelEntity
            // Field count: 3
            namespace C_BaseButton {
                constexpr std::ptrdiff_t m_glowEntity = 0xFB0; // CHandle<C_BaseModelEntity>
                constexpr std::ptrdiff_t m_usable = 0xFB4; // bool
                constexpr std::ptrdiff_t m_szDisplayText = 0xFB8; // CUtlSymbolLarge
            }
            // Parent: CPlayer_ObserverServices
            // Field count: 1
            namespace CCSObserver_ObserverServices {
                constexpr std::ptrdiff_t m_obsInterpState = 0x68; // ObserverInterpState_t
            }
            // Parent: CEntityComponent
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CHitboxComponent {
                constexpr std::ptrdiff_t m_flBoundsExpandRadius = 0x14; // float32
            }
            // Parent: None
            // Field count: 3
            namespace ServerAuthoritativeWeaponSlot_t {
                constexpr std::ptrdiff_t unClass = 0x30; // uint16
                constexpr std::ptrdiff_t unSlot = 0x32; // uint16
                constexpr std::ptrdiff_t unItemDefIdx = 0x34; // uint16
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace C_CSMinimapBoundary {
            }
            // Parent: CEntityComponent
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPathQueryComponent {
            }
            // Parent: None
            // Field count: 8
            namespace C_Precipitation {
                constexpr std::ptrdiff_t m_flDensity = 0x1098; // float32
                constexpr std::ptrdiff_t m_flParticleInnerDist = 0x10A8; // float32
                constexpr std::ptrdiff_t m_pParticleDef = 0x10B0; // char*
                constexpr std::ptrdiff_t m_tParticlePrecipTraceTimer = 0x10C4; // TimedEvent[1]
                constexpr std::ptrdiff_t m_bActiveParticlePrecipEmitter = 0x10CC; // bool[1]
                constexpr std::ptrdiff_t m_bParticlePrecipInitialized = 0x10CD; // bool
                constexpr std::ptrdiff_t m_bHasSimulatedSinceLastSceneObjectUpdate = 0x10CE; // bool
                constexpr std::ptrdiff_t m_nAvailableSheetSequencesMaxIndex = 0x10D0; // int32
            }
            // Parent: C_BaseEntity
            // Field count: 7
            namespace CLogicRelay {
                constexpr std::ptrdiff_t m_OnSpawn = 0x600; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTrigger = 0x618; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bDisabled = 0x630; // bool
                constexpr std::ptrdiff_t m_bWaitForRefire = 0x631; // bool
                constexpr std::ptrdiff_t m_bTriggerOnce = 0x632; // bool
                constexpr std::ptrdiff_t m_bFastRetrigger = 0x633; // bool
                constexpr std::ptrdiff_t m_bPassthoughCaller = 0x634; // bool
            }
            // Parent: None
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
            // Parent: None
            // Field count: 2
            namespace C_SpotlightEnd {
                constexpr std::ptrdiff_t m_flLightScale = 0xFB0; // float32
                constexpr std::ptrdiff_t m_Radius = 0xFB4; // float32
            }
            // Parent: None
            // Field count: 23
            namespace C_Fish {
                constexpr std::ptrdiff_t m_pos = 0x1180; // VectorWS
                constexpr std::ptrdiff_t m_vel = 0x118C; // Vector
                constexpr std::ptrdiff_t m_angles = 0x1198; // QAngle
                constexpr std::ptrdiff_t m_localLifeState = 0x11A4; // int32
                constexpr std::ptrdiff_t m_deathDepth = 0x11A8; // float32
                constexpr std::ptrdiff_t m_deathAngle = 0x11AC; // float32
                constexpr std::ptrdiff_t m_buoyancy = 0x11B0; // float32
                constexpr std::ptrdiff_t m_wiggleTimer = 0x11B8; // CountdownTimer
                constexpr std::ptrdiff_t m_wigglePhase = 0x11D0; // float32
                constexpr std::ptrdiff_t m_wiggleRate = 0x11D4; // float32
                constexpr std::ptrdiff_t m_actualPos = 0x11D8; // VectorWS
                constexpr std::ptrdiff_t m_actualAngles = 0x11E4; // QAngle
                constexpr std::ptrdiff_t m_poolOrigin = 0x11F0; // VectorWS
                constexpr std::ptrdiff_t m_waterLevel = 0x11FC; // float32
                constexpr std::ptrdiff_t m_gotUpdate = 0x1200; // bool
                constexpr std::ptrdiff_t m_x = 0x1204; // float32
                constexpr std::ptrdiff_t m_y = 0x1208; // float32
                constexpr std::ptrdiff_t m_z = 0x120C; // float32
                constexpr std::ptrdiff_t m_angle = 0x1210; // float32
                constexpr std::ptrdiff_t m_errorHistory = 0x1214; // float32[20]
                constexpr std::ptrdiff_t m_errorHistoryIndex = 0x1264; // int32
                constexpr std::ptrdiff_t m_errorHistoryCount = 0x1268; // int32
                constexpr std::ptrdiff_t m_averageError = 0x126C; // float32
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponFamas {
            }
            // Parent: C_BaseEntity
            // Field count: 36
            namespace C_EnvVolumetricFogController {
                constexpr std::ptrdiff_t m_flScattering = 0x600; // float32
                constexpr std::ptrdiff_t m_TintColor = 0x604; // Color
                constexpr std::ptrdiff_t m_flAnisotropy = 0x608; // float32
                constexpr std::ptrdiff_t m_flFadeSpeed = 0x60C; // float32
                constexpr std::ptrdiff_t m_flDrawDistance = 0x610; // float32
                constexpr std::ptrdiff_t m_flFadeInStart = 0x614; // float32
                constexpr std::ptrdiff_t m_flFadeInEnd = 0x618; // float32
                constexpr std::ptrdiff_t m_flIndirectStrength = 0x61C; // float32
                constexpr std::ptrdiff_t m_nVolumeDepth = 0x620; // int32
                constexpr std::ptrdiff_t m_fFirstVolumeSliceThickness = 0x624; // float32
                constexpr std::ptrdiff_t m_nIndirectTextureDimX = 0x628; // int32
                constexpr std::ptrdiff_t m_nIndirectTextureDimY = 0x62C; // int32
                constexpr std::ptrdiff_t m_nIndirectTextureDimZ = 0x630; // int32
                constexpr std::ptrdiff_t m_vBoxMins = 0x634; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x640; // Vector
                constexpr std::ptrdiff_t m_bActive = 0x64C; // bool
                constexpr std::ptrdiff_t m_flStartAnisoTime = 0x650; // GameTime_t
                constexpr std::ptrdiff_t m_flStartScatterTime = 0x654; // GameTime_t
                constexpr std::ptrdiff_t m_flStartDrawDistanceTime = 0x658; // GameTime_t
                constexpr std::ptrdiff_t m_flStartAnisotropy = 0x65C; // float32
                constexpr std::ptrdiff_t m_flStartScattering = 0x660; // float32
                constexpr std::ptrdiff_t m_flStartDrawDistance = 0x664; // float32
                constexpr std::ptrdiff_t m_flDefaultAnisotropy = 0x668; // float32
                constexpr std::ptrdiff_t m_flDefaultScattering = 0x66C; // float32
                constexpr std::ptrdiff_t m_flDefaultDrawDistance = 0x670; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x674; // bool
                constexpr std::ptrdiff_t m_bEnableIndirect = 0x675; // bool
                constexpr std::ptrdiff_t m_bIsMaster = 0x676; // bool
                constexpr std::ptrdiff_t m_hFogIndirectTexture = 0x678; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_nForceRefreshCount = 0x680; // int32
                constexpr std::ptrdiff_t m_fNoiseSpeed = 0x684; // float32
                constexpr std::ptrdiff_t m_fNoiseStrength = 0x688; // float32
                constexpr std::ptrdiff_t m_vNoiseScale = 0x68C; // Vector
                constexpr std::ptrdiff_t m_fWindSpeed = 0x698; // float32
                constexpr std::ptrdiff_t m_vWindDirection = 0x69C; // Vector
                constexpr std::ptrdiff_t m_bFirstTime = 0x6A8; // bool
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
            namespace C_EnvDetailController {
                constexpr std::ptrdiff_t m_flFadeStartDist = 0x600; // float32
                constexpr std::ptrdiff_t m_flFadeEndDist = 0x604; // float32
            }
            // Parent: C_BaseEntity
            // Field count: 9
            namespace C_EnvWindVolume {
                constexpr std::ptrdiff_t m_bActive = 0x600; // bool
                constexpr std::ptrdiff_t m_vBoxMins = 0x604; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x610; // Vector
                constexpr std::ptrdiff_t m_bStartDisabled = 0x61C; // bool
                constexpr std::ptrdiff_t m_nShape = 0x620; // int32
                constexpr std::ptrdiff_t m_fWindSpeedMultiplier = 0x624; // float32
                constexpr std::ptrdiff_t m_fWindTurbulenceMultiplier = 0x628; // float32
                constexpr std::ptrdiff_t m_fWindSpeedVariationMultiplier = 0x62C; // float32
                constexpr std::ptrdiff_t m_fWindDirectionVariationMultiplier = 0x630; // float32
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
            namespace CCSPlayer_HostageServices {
                constexpr std::ptrdiff_t m_hCarriedHostage = 0x48; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hCarriedHostageProp = 0x4C; // CHandle<C_BaseEntity>
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace C_GameRulesProxy {
            }
            // Parent: None
            // Field count: 0
            namespace CEnvLightProbeVolumeAPI {
            }
            // Parent: CEntityComponent
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRenderComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x10; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_bIsRenderingWithViewModels = 0x50; // bool
                constexpr std::ptrdiff_t m_nSplitscreenFlags = 0x54; // uint32
                constexpr std::ptrdiff_t m_bEnableRendering = 0x58; // bool
                constexpr std::ptrdiff_t m_bInterpolationReadyToDraw = 0xA8; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 4
            namespace C_Team {
                constexpr std::ptrdiff_t m_aPlayerControllers = 0x600; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
                constexpr std::ptrdiff_t m_aPlayers = 0x618; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
                constexpr std::ptrdiff_t m_iScore = 0x630; // int32
                constexpr std::ptrdiff_t m_szTeamname = 0x634; // char[129]
            }
            // Parent: None
            // Field count: 0
            namespace CBaseGrenade_API {
            }
            // Parent: C_PathParticleRope
            // Field count: 0
            namespace C_PathParticleRopeAlias_path_particle_rope_clientside {
            }
            // Parent: C_PointEntity
            // Field count: 1
            namespace CPointChildModifier {
                constexpr std::ptrdiff_t m_bOrphanInsteadOfDeletingChildrenOnRemove = 0x600; // bool
            }
            // Parent: None
            // Field count: 2
            namespace CCSPlayerLegacyJump {
                constexpr std::ptrdiff_t m_bOldJumpPressed = 0x10; // bool
                constexpr std::ptrdiff_t m_flJumpPressedTime = 0x14; // float32
            }
            // Parent: C_CSWeaponBaseShotgun
            // Field count: 0
            namespace C_WeaponNOVA {
            }
            // Parent: C_LateUpdatedAnimating
            // Field count: 0
            namespace C_CS2HudModelAddon {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_DEagle {
            }
            // Parent: None
            // Field count: 0
            namespace C_TriggerMultiple {
            }
            // Parent: C_CSGO_MapPreviewCameraPath
            // Field count: 1
            namespace C_CSGO_TeamPreviewCamera {
                constexpr std::ptrdiff_t m_nVariant = 0x688; // int32
            }
            // Parent: None
            // Field count: 9
            namespace C_ColorCorrectionVolume {
                constexpr std::ptrdiff_t m_LastEnterWeight = 0x1098; // float32
                constexpr std::ptrdiff_t m_LastEnterTime = 0x109C; // GameTime_t
                constexpr std::ptrdiff_t m_LastExitWeight = 0x10A0; // float32
                constexpr std::ptrdiff_t m_LastExitTime = 0x10A4; // GameTime_t
                constexpr std::ptrdiff_t m_bEnabled = 0x10A8; // bool
                constexpr std::ptrdiff_t m_MaxWeight = 0x10AC; // float32
                constexpr std::ptrdiff_t m_FadeDuration = 0x10B0; // float32
                constexpr std::ptrdiff_t m_Weight = 0x10B4; // float32
                constexpr std::ptrdiff_t m_lookupFilename = 0x10B8; // char[512]
            }
            // Parent: CPlayerPawnComponent
            // Field count: 18
            namespace CPlayer_MovementServices {
                constexpr std::ptrdiff_t m_nImpulse = 0x48; // int32
                constexpr std::ptrdiff_t m_nButtons = 0x50; // CInButtonState
                constexpr std::ptrdiff_t m_nQueuedButtonDownMask = 0x70; // uint64
                constexpr std::ptrdiff_t m_nQueuedButtonChangeMask = 0x78; // uint64
                constexpr std::ptrdiff_t m_nButtonDoublePressed = 0x80; // uint64
                constexpr std::ptrdiff_t m_pButtonPressedCmdNumber = 0x88; // uint32[64]
                constexpr std::ptrdiff_t m_nLastCommandNumberProcessed = 0x188; // uint32
                constexpr std::ptrdiff_t m_nToggleButtonDownMask = 0x190; // uint64
                constexpr std::ptrdiff_t m_flCmdForwardMove = 0x1A0; // float32
                constexpr std::ptrdiff_t m_flCmdLeftMove = 0x1A4; // float32
                constexpr std::ptrdiff_t m_flCmdUpMove = 0x1A8; // float32
                constexpr std::ptrdiff_t m_flMaxspeed = 0x1AC; // float32
                constexpr std::ptrdiff_t m_arrForceSubtickMoveWhen = 0x1B0; // float32[4]
                constexpr std::ptrdiff_t m_flForwardMove = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flLeftMove = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flUpMove = 0x1C8; // float32
                constexpr std::ptrdiff_t m_vecLastMovementImpulses = 0x1CC; // Vector
                constexpr std::ptrdiff_t m_vecOldViewAngles = 0x240; // QAngle
            }
            // Parent: CInfoDynamicShadowHint
            // Field count: 2
            namespace CInfoDynamicShadowHintBox {
                constexpr std::ptrdiff_t m_vBoxMins = 0x618; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x624; // Vector
            }
            // Parent: CSkeletonAnimationController
            // Field count: 32
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBaseAnimGraphController {
                constexpr std::ptrdiff_t m_nAnimationAlgorithm = 0x18; // AnimationAlgorithm_t
                constexpr std::ptrdiff_t m_nNextExternalGraphHandle = 0x1C; // ExternalAnimGraphHandle_t
                constexpr std::ptrdiff_t m_vecSecondarySkeletonSlotIDs = 0x20; // C_NetworkUtlVectorBase<CGlobalSymbol>
                constexpr std::ptrdiff_t m_vecSecondarySkeletons = 0x38; // C_NetworkUtlVectorBase<CHandle<CBaseAnimGraph>>
                constexpr std::ptrdiff_t m_nSecondarySkeletonMasterCount = 0x50; // int32
                constexpr std::ptrdiff_t m_flSoundSyncTime = 0x58; // float32
                constexpr std::ptrdiff_t m_nActiveIKChainMask = 0x5C; // uint32
                constexpr std::ptrdiff_t m_hSequence = 0xB0; // HSequence
                constexpr std::ptrdiff_t m_flSeqStartTime = 0xB4; // GameTime_t
                constexpr std::ptrdiff_t m_flSeqFixedCycle = 0xB8; // float32
                constexpr std::ptrdiff_t m_nAnimLoopMode = 0xBC; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_flPlaybackRate = 0xC0; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_nNotifyState = 0xCC; // SequenceFinishNotifyState_t
                constexpr std::ptrdiff_t m_bNetworkedAnimationInputsChanged = 0xCD; // bool
                constexpr std::ptrdiff_t m_bNetworkedSequenceChanged = 0xCE; // bool
                constexpr std::ptrdiff_t m_bLastUpdateSkipped = 0xCF; // bool
                constexpr std::ptrdiff_t m_bSequenceFinished = 0xD0; // bool
                constexpr std::ptrdiff_t m_nPrevAnimUpdateTick = 0xD4; // GameTick_t
                constexpr std::ptrdiff_t m_hGraphDefinitionAG2 = 0x370; // CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
                constexpr std::ptrdiff_t m_SerializePoseRecipeAG2Slots = 0x378; // C_UtlVectorEmbeddedNetworkVar<AnimGraph2SerializedPoseRecipeSlot_t>
                constexpr std::ptrdiff_t m_SerializePoseRecipeAG2Dynamic = 0x3E0; // C_NetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_nSerializePoseRecipeAG2ActiveSlot = 0x3F8; // uint32
                constexpr std::ptrdiff_t m_nSerializePoseRecipeVersionAG2 = 0x3FC; // int32
                constexpr std::ptrdiff_t m_nServerGraphInstanceIteration = 0x400; // int32
                constexpr std::ptrdiff_t m_nServerSerializationContextIteration = 0x404; // int32
                constexpr std::ptrdiff_t m_primaryGraphId = 0x408; // ResourceId_t
                constexpr std::ptrdiff_t m_vecExternalGraphIds = 0x410; // C_NetworkUtlVectorBase<ResourceId_t>
                constexpr std::ptrdiff_t m_vecExternalClipIds = 0x428; // C_NetworkUtlVectorBase<ResourceId_t>
                constexpr std::ptrdiff_t m_sAnimGraph2Identifier = 0x440; // CGlobalSymbol
                constexpr std::ptrdiff_t m_pGraphInstanceAG2 = 0x448; // CAnimGraph2InstancePtr
                constexpr std::ptrdiff_t m_vecExternalGraphs = 0x668; // CExternalAnimGraphList
                constexpr std::ptrdiff_t m_nPrevAnimationAlgorithm = 0x699; // AnimationAlgorithm_t
            }
            // Parent: None
            // Field count: 18
            namespace C_ColorCorrection {
                constexpr std::ptrdiff_t m_vecOrigin = 0x600; // VectorWS
                constexpr std::ptrdiff_t m_MinFalloff = 0x60C; // float32
                constexpr std::ptrdiff_t m_MaxFalloff = 0x610; // float32
                constexpr std::ptrdiff_t m_flFadeInDuration = 0x614; // float32
                constexpr std::ptrdiff_t m_flFadeOutDuration = 0x618; // float32
                constexpr std::ptrdiff_t m_flMaxWeight = 0x61C; // float32
                constexpr std::ptrdiff_t m_flCurWeight = 0x620; // float32
                constexpr std::ptrdiff_t m_netlookupFilename = 0x624; // char[512]
                constexpr std::ptrdiff_t m_bEnabled = 0x824; // bool
                constexpr std::ptrdiff_t m_bMaster = 0x825; // bool
                constexpr std::ptrdiff_t m_bClientSide = 0x826; // bool
                constexpr std::ptrdiff_t m_bExclusive = 0x827; // bool
                constexpr std::ptrdiff_t m_bEnabledOnClient = 0x828; // bool[1]
                constexpr std::ptrdiff_t m_flCurWeightOnClient = 0x82C; // float32[1]
                constexpr std::ptrdiff_t m_bFadingIn = 0x830; // bool[1]
                constexpr std::ptrdiff_t m_flFadeStartWeight = 0x834; // float32[1]
                constexpr std::ptrdiff_t m_flFadeStartTime = 0x838; // float32[1]
                constexpr std::ptrdiff_t m_flFadeDuration = 0x83C; // float32[1]
            }
            // Parent: None
            // Field count: 1
            namespace AnimGraph2SerializedPoseRecipeSlot_t {
                constexpr std::ptrdiff_t m_topology = 0x30; // CUtlBinaryBlock
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBuoyancyHelper {
                constexpr std::ptrdiff_t m_pController = 0x8; // IPhysicsMotionController*
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
                constexpr std::ptrdiff_t m_flDeathCamTilt = 0x2A8; // float32
                constexpr std::ptrdiff_t m_vClientScopeInaccuracy = 0x2B0; // Vector
            }
            // Parent: CBaseFilter
            // Field count: 3
            namespace CFilterMultiple {
                constexpr std::ptrdiff_t m_nFilterType = 0x638; // filter_t
                constexpr std::ptrdiff_t m_iFilterName = 0x640; // CUtlSymbolLarge[10]
                constexpr std::ptrdiff_t m_hFilter = 0x690; // CHandle<C_BaseEntity>[10]
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_FireCursors {
                constexpr std::ptrdiff_t m_Outflows = 0xD8; // CUtlVector<CPulse_OutflowConnection>
                constexpr std::ptrdiff_t m_bWaitForChildOutflows = 0xF0; // bool
                constexpr std::ptrdiff_t m_OnFinished = 0xF8; // CPulse_ResumePoint
            }
            // Parent: C_BaseEntity
            // Field count: 11
            namespace CEnvSoundscape {
                constexpr std::ptrdiff_t m_OnPlay = 0x600; // CEntityIOOutput
                constexpr std::ptrdiff_t m_flRadius = 0x618; // float32
                constexpr std::ptrdiff_t m_soundEventName = 0x620; // CGameSoundEventName
                constexpr std::ptrdiff_t m_bOverrideWithEvent = 0x628; // bool
                constexpr std::ptrdiff_t m_soundscapeIndex = 0x62C; // int32
                constexpr std::ptrdiff_t m_soundscapeEntityListId = 0x630; // int32
                constexpr std::ptrdiff_t m_positionNames = 0x638; // CUtlSymbolLarge[8]
                constexpr std::ptrdiff_t m_hProxySoundscape = 0x678; // CHandle<CEnvSoundscape>
                constexpr std::ptrdiff_t m_bDisabled = 0x67C; // bool
                constexpr std::ptrdiff_t m_soundscapeName = 0x680; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_soundEventHash = 0x688; // uint32
            }
            // Parent: C_SoundEventEntity
            // Field count: 0
            namespace C_SoundEventEntityAlias_snd_event_point {
            }
            // Parent: C_BaseEntity
            // Field count: 3
            namespace C_FogController {
                constexpr std::ptrdiff_t m_fog = 0x600; // fogparams_t
                constexpr std::ptrdiff_t m_bUseAngles = 0x668; // bool
                constexpr std::ptrdiff_t m_iChangedVariables = 0x66C; // int32
            }
            // Parent: C_SoundOpvarSetPointBase
            // Field count: 0
            namespace C_SoundOpvarSetOBBWindEntity {
            }
            // Parent: C_BaseCSGrenade
            // Field count: 0
            namespace C_MolotovGrenade {
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace C_NetTestBaseCombatCharacter {
            }
            // Parent: None
            // Field count: 0
            namespace CParticleSystemAPI {
            }
            // Parent: CBodyComponent
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBodyComponentPoint {
                constexpr std::ptrdiff_t m_sceneNode = 0x80; // CGameSceneNode
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponM4A1Silencer {
            }
            // Parent: None
            // Field count: 29
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
                constexpr std::ptrdiff_t m_AttributeList = 0x208; // CAttributeList
                constexpr std::ptrdiff_t m_NetworkedDynamicAttributes = 0x280; // CAttributeList
                constexpr std::ptrdiff_t m_szCustomName = 0x2F8; // char[161]
                constexpr std::ptrdiff_t m_szCustomNameOverride = 0x399; // char[161]
                constexpr std::ptrdiff_t m_bInitializedTags = 0x468; // bool
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
            namespace C_SoundEventPathCornerEntity {
                constexpr std::ptrdiff_t m_vecCornerPairsNetworked = 0x6C0; // C_NetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
            }
            // Parent: C_BaseEntity
            // Field count: 3
            namespace C_InfoVisibilityBox {
                constexpr std::ptrdiff_t m_nMode = 0x604; // int32
                constexpr std::ptrdiff_t m_vBoxSize = 0x608; // Vector
                constexpr std::ptrdiff_t m_bEnabled = 0x614; // bool
            }
            // Parent: CPlayer_ItemServices
            // Field count: 2
            namespace CCSPlayer_ItemServices {
                constexpr std::ptrdiff_t m_bHasDefuser = 0x48; // bool
                constexpr std::ptrdiff_t m_bHasHelmet = 0x49; // bool
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
            // Parent: None
            // Field count: 0
            namespace CGrenadeTracer_API {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace IntervalTimer {
                constexpr std::ptrdiff_t m_timestamp = 0x8; // GameTime_t
                constexpr std::ptrdiff_t m_nWorldGroupId = 0xC; // WorldGroupId_t
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace audioparams_t {
                constexpr std::ptrdiff_t localSound = 0x8; // VectorWS[8]
                constexpr std::ptrdiff_t soundscapeIndex = 0x68; // int32
                constexpr std::ptrdiff_t localBits = 0x6C; // uint8
                constexpr std::ptrdiff_t soundscapeEntityListIndex = 0x70; // int32
                constexpr std::ptrdiff_t soundEventHash = 0x74; // uint32
            }
            // Parent: C_BaseEntity
            // Field count: 16
            namespace C_PathParticleRope {
                constexpr std::ptrdiff_t m_bStartActive = 0x608; // bool
                constexpr std::ptrdiff_t m_flMaxSimulationTime = 0x60C; // float32
                constexpr std::ptrdiff_t m_iszEffectName = 0x610; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PathNodes_Name = 0x618; // CUtlVector<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_flParticleSpacing = 0x630; // float32
                constexpr std::ptrdiff_t m_flSlack = 0x634; // float32
                constexpr std::ptrdiff_t m_flRadius = 0x638; // float32
                constexpr std::ptrdiff_t m_ColorTint = 0x63C; // Color
                constexpr std::ptrdiff_t m_nEffectState = 0x640; // int32
                constexpr std::ptrdiff_t m_iEffectIndex = 0x648; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_PathNodes_Position = 0x650; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_TangentIn = 0x668; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_TangentOut = 0x680; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_Color = 0x698; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_PinEnabled = 0x6B0; // C_NetworkUtlVectorBase<bool>
                constexpr std::ptrdiff_t m_PathNodes_RadiusScale = 0x6C8; // C_NetworkUtlVectorBase<float32>
            }
            // Parent: C_BaseCSGrenadeProjectile
            // Field count: 3
            namespace C_DecoyProjectile {
                constexpr std::ptrdiff_t m_nDecoyShotTick = 0x1260; // int32
                constexpr std::ptrdiff_t m_nClientLastKnownDecoyShotTick = 0x1264; // int32
                constexpr std::ptrdiff_t m_flTimeParticleEffectSpawn = 0x1288; // GameTime_t
            }
            // Parent: CAttributeManager
            // Field count: 3
            namespace C_AttributeContainer {
                constexpr std::ptrdiff_t m_Item = 0x50; // C_EconItemView
                constexpr std::ptrdiff_t m_iExternalItemProviderRegisteredToken = 0x4C0; // int32
                constexpr std::ptrdiff_t m_ullRegisteredAsItemID = 0x4C8; // uint64
            }
            // Parent: C_BasePlayerWeapon
            // Field count: 54
            namespace C_CSWeaponBase {
                constexpr std::ptrdiff_t m_iWeaponGameplayAnimState = 0x1778; // WeaponGameplayAnimState
                constexpr std::ptrdiff_t m_flWeaponGameplayAnimStateTimestamp = 0x177C; // GameTime_t
                constexpr std::ptrdiff_t m_flInspectCancelCompleteTime = 0x1780; // GameTime_t
                constexpr std::ptrdiff_t m_bInspectPending = 0x1784; // bool
                constexpr std::ptrdiff_t m_bInspectShouldLoop = 0x1785; // bool
                constexpr std::ptrdiff_t m_flCrosshairDistance = 0x17B0; // float32
                constexpr std::ptrdiff_t m_iAmmoLastCheck = 0x17B4; // int32
                constexpr std::ptrdiff_t m_nLastEmptySoundCmdNum = 0x17B8; // int32
                constexpr std::ptrdiff_t m_bFireOnEmpty = 0x17BC; // bool
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0x17C0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_weaponMode = 0x17D8; // CSWeaponMode
                constexpr std::ptrdiff_t m_flTurningInaccuracyDelta = 0x17DC; // float32
                constexpr std::ptrdiff_t m_vecTurningInaccuracyEyeDirLast = 0x17E0; // Vector
                constexpr std::ptrdiff_t m_flTurningInaccuracy = 0x17EC; // float32
                constexpr std::ptrdiff_t m_fAccuracyPenalty = 0x17F0; // float32
                constexpr std::ptrdiff_t m_flLastAccuracyUpdateTime = 0x17F4; // GameTime_t
                constexpr std::ptrdiff_t m_fAccuracySmoothedForZoom = 0x17F8; // float32
                constexpr std::ptrdiff_t m_iRecoilIndex = 0x17FC; // int32
                constexpr std::ptrdiff_t m_flRecoilIndex = 0x1800; // float32
                constexpr std::ptrdiff_t m_bBurstMode = 0x1804; // bool
                constexpr std::ptrdiff_t m_flLastBurstModeChangeTime = 0x1808; // GameTime_t
                constexpr std::ptrdiff_t m_nPostponeFireReadyTicks = 0x180C; // GameTick_t
                constexpr std::ptrdiff_t m_flPostponeFireReadyFrac = 0x1810; // float32
                constexpr std::ptrdiff_t m_bInReload = 0x1814; // bool
                constexpr std::ptrdiff_t m_nDeployTick = 0x1818; // GameTick_t
                constexpr std::ptrdiff_t m_flDroppedAtTime = 0x181C; // GameTime_t
                constexpr std::ptrdiff_t m_bIsHauledBack = 0x1824; // bool
                constexpr std::ptrdiff_t m_bSilencerOn = 0x1825; // bool
                constexpr std::ptrdiff_t m_flTimeSilencerSwitchComplete = 0x1828; // GameTime_t
                constexpr std::ptrdiff_t m_flWeaponActionPlaybackRate = 0x182C; // float32
                constexpr std::ptrdiff_t m_iOriginalTeamNumber = 0x1830; // int32
                constexpr std::ptrdiff_t m_iMostRecentTeamNumber = 0x1834; // int32
                constexpr std::ptrdiff_t m_bDroppedNearBuyZone = 0x1838; // bool
                constexpr std::ptrdiff_t m_flNextAttackRenderTimeOffset = 0x183C; // float32
                constexpr std::ptrdiff_t m_bClearWeaponIdentifyingUGC = 0x18E0; // bool
                constexpr std::ptrdiff_t m_bVisualsDataSet = 0x18E1; // bool
                constexpr std::ptrdiff_t m_bUIWeapon = 0x18E2; // bool
                constexpr std::ptrdiff_t m_nCustomEconReloadEventId = 0x18E4; // int32
                constexpr std::ptrdiff_t m_bCanBePickedUp = 0x18F0; // bool
                constexpr std::ptrdiff_t m_nextPrevOwnerUseTime = 0x18F4; // GameTime_t
                constexpr std::ptrdiff_t m_hPrevOwner = 0x18F8; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_nDropTick = 0x18FC; // GameTick_t
                constexpr std::ptrdiff_t m_bWasActiveWeaponWhenDropped = 0x1900; // bool
                constexpr std::ptrdiff_t m_donated = 0x1924; // bool
                constexpr std::ptrdiff_t m_fLastShotTime = 0x1928; // GameTime_t
                constexpr std::ptrdiff_t m_bWasOwnedByCT = 0x192C; // bool
                constexpr std::ptrdiff_t m_bWasOwnedByTerrorist = 0x192D; // bool
                constexpr std::ptrdiff_t m_flNextClientFireBulletTime = 0x1930; // float32
                constexpr std::ptrdiff_t m_flNextClientFireBulletTime_Repredict = 0x1934; // float32
                constexpr std::ptrdiff_t m_IronSightController = 0x1990; // C_IronSightController
                constexpr std::ptrdiff_t m_iIronSightMode = 0x1A40; // int32
                constexpr std::ptrdiff_t m_flLastLOSTraceFailureTime = 0x1AB8; // GameTime_t
                constexpr std::ptrdiff_t m_flWatTickOffset = 0x1B18; // float32
                constexpr std::ptrdiff_t m_flLastShakeTime = 0x1B2C; // GameTime_t
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
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
            namespace CEnvCubemapAPI {
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
            namespace C_TonemapController2 {
                constexpr std::ptrdiff_t m_flAutoExposureMin = 0x600; // float32
                constexpr std::ptrdiff_t m_flAutoExposureMax = 0x604; // float32
                constexpr std::ptrdiff_t m_flExposureAdaptationSpeedUp = 0x608; // float32
                constexpr std::ptrdiff_t m_flExposureAdaptationSpeedDown = 0x60C; // float32
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x610; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
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
            // Parent: None
            // Field count: 0
            namespace C_CSGO_PreviewModel_API {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponMag7 {
            }
            // Parent: None
            // Field count: 2
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
                constexpr std::ptrdiff_t m_bAdrenalineActive = 0x638; // bool
                constexpr std::ptrdiff_t m_iHealthMin = 0x63C; // int32
                constexpr std::ptrdiff_t m_iHealthMax = 0x640; // int32
            }
            // Parent: C_BaseClientUIEntity
            // Field count: 13
            namespace C_PointClientUIHUD {
                constexpr std::ptrdiff_t m_bCheckCSSClasses = 0xFE8; // bool
                constexpr std::ptrdiff_t m_bIgnoreInput = 0x1160; // bool
                constexpr std::ptrdiff_t m_flWidth = 0x1164; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x1168; // float32
                constexpr std::ptrdiff_t m_flDPI = 0x116C; // float32
                constexpr std::ptrdiff_t m_flInteractDistance = 0x1170; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0x1174; // float32
                constexpr std::ptrdiff_t m_unOwnerContext = 0x1178; // uint32
                constexpr std::ptrdiff_t m_unHorizontalAlign = 0x117C; // uint32
                constexpr std::ptrdiff_t m_unVerticalAlign = 0x1180; // uint32
                constexpr std::ptrdiff_t m_unOrientation = 0x1184; // uint32
                constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0x1188; // bool
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x1190; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
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
            // Parent: None
            // Field count: 14
            namespace C_PointCommentaryNode {
                constexpr std::ptrdiff_t m_bActive = 0x1198; // bool
                constexpr std::ptrdiff_t m_bWasActive = 0x1199; // bool
                constexpr std::ptrdiff_t m_flEndTime = 0x119C; // GameTime_t
                constexpr std::ptrdiff_t m_flStartTime = 0x11A0; // GameTime_t
                constexpr std::ptrdiff_t m_flStartTimeInCommentary = 0x11A4; // float32
                constexpr std::ptrdiff_t m_iszCommentaryFile = 0x11A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTitle = 0x11B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSpeakers = 0x11B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iNodeNumber = 0x11C0; // int32
                constexpr std::ptrdiff_t m_iNodeNumberMax = 0x11C4; // int32
                constexpr std::ptrdiff_t m_bListenedTo = 0x11C8; // bool
                constexpr std::ptrdiff_t m_sndCommentary = 0x11D0; // CSoundPatch*
                constexpr std::ptrdiff_t m_hViewPosition = 0x11D8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bRestartAfterRestore = 0x11DC; // bool
            }
            // Parent: C_Sprite
            // Field count: 0
            namespace CSpriteOriented {
            }
            // Parent: None
            // Field count: 13
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
                constexpr std::ptrdiff_t m_nKeychainDefID = 0x1188; // uint32
                constexpr std::ptrdiff_t m_nKeychainSeed = 0x118C; // uint32
            }
            // Parent: C_BaseModelEntity
            // Field count: 1
            namespace CFuncWater {
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0xFB0; // CBuoyancyHelper
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
            namespace C_PointClientUIWorldTextPanel {
                constexpr std::ptrdiff_t m_messageText = 0x1210; // char[512]
            }
            // Parent: None
            // Field count: 0
            namespace C_CSObserverPawn_API {
            }
            // Parent: CPlayer_WaterServices
            // Field count: 3
            namespace CCSPlayer_WaterServices {
                constexpr std::ptrdiff_t m_flWaterJumpTime = 0x48; // float32
                constexpr std::ptrdiff_t m_vecWaterJumpVel = 0x4C; // Vector
                constexpr std::ptrdiff_t m_flSwimSoundTime = 0x58; // float32
            }
            // Parent: C_CSPlayerPawnBase
            // Field count: 1
            namespace C_CSObserverPawn {
                constexpr std::ptrdiff_t m_hDetectParentChange = 0x1480; // CEntityHandle
            }
            // Parent: None
            // Field count: 3
            namespace ViewAngleServerChange_t {
                constexpr std::ptrdiff_t nType = 0x30; // FixAngleSet_t
                constexpr std::ptrdiff_t qAngle = 0x34; // QAngle
                constexpr std::ptrdiff_t nIndex = 0x40; // uint32
            }
            // Parent: C_BaseModelEntity
            // Field count: 9
            namespace C_FuncLadder {
                constexpr std::ptrdiff_t m_vecLadderDir = 0xFB0; // Vector
                constexpr std::ptrdiff_t m_Dismounts = 0xFC0; // CUtlVector<CHandle<C_InfoLadderDismount>>
                constexpr std::ptrdiff_t m_vecLocalTop = 0xFD8; // Vector
                constexpr std::ptrdiff_t m_vecPlayerMountPositionTop = 0xFE4; // VectorWS
                constexpr std::ptrdiff_t m_vecPlayerMountPositionBottom = 0xFF0; // VectorWS
                constexpr std::ptrdiff_t m_flAutoRideSpeed = 0xFFC; // float32
                constexpr std::ptrdiff_t m_bDisabled = 0x1000; // bool
                constexpr std::ptrdiff_t m_bFakeLadder = 0x1001; // bool
                constexpr std::ptrdiff_t m_bHasSlack = 0x1002; // bool
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponMP5SD {
            }
            // Parent: None
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
            namespace CCSPlayerBase_CameraServices {
                constexpr std::ptrdiff_t m_iFOV = 0x290; // uint32
                constexpr std::ptrdiff_t m_iFOVStart = 0x294; // uint32
                constexpr std::ptrdiff_t m_flFOVTime = 0x298; // GameTime_t
                constexpr std::ptrdiff_t m_flFOVRate = 0x29C; // float32
                constexpr std::ptrdiff_t m_hZoomOwner = 0x2A0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flLastShotFOV = 0x2A4; // float32
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
            // Field count: 101
            namespace C_CSPlayerPawn {
                constexpr std::ptrdiff_t m_pBulletServices = 0x1490; // CCSPlayer_BulletServices*
                constexpr std::ptrdiff_t m_pHostageServices = 0x1498; // CCSPlayer_HostageServices*
                constexpr std::ptrdiff_t m_pBuyServices = 0x14A0; // CCSPlayer_BuyServices*
                constexpr std::ptrdiff_t m_pGlowServices = 0x14A8; // CCSPlayer_GlowServices*
                constexpr std::ptrdiff_t m_pActionTrackingServices = 0x14B0; // CCSPlayer_ActionTrackingServices*
                constexpr std::ptrdiff_t m_pAimPunchServices = 0x14B8; // CCSPlayer_AimPunchServices*
                constexpr std::ptrdiff_t m_pDamageReactServices = 0x14C0; // CCSPlayer_DamageReactServices*
                constexpr std::ptrdiff_t m_flHealthShotBoostExpirationTime = 0x14C8; // GameTime_t
                constexpr std::ptrdiff_t m_flLastFiredWeaponTime = 0x14CC; // GameTime_t
                constexpr std::ptrdiff_t m_bHasFemaleVoice = 0x14D0; // bool
                constexpr std::ptrdiff_t m_flLandingTimeSeconds = 0x14D4; // float32
                constexpr std::ptrdiff_t m_flOldFallVelocity = 0x14D8; // float32
                constexpr std::ptrdiff_t m_szLastPlaceName = 0x14DC; // char[18]
                constexpr std::ptrdiff_t m_bPrevDefuser = 0x14EE; // bool
                constexpr std::ptrdiff_t m_bPrevHelmet = 0x14EF; // bool
                constexpr std::ptrdiff_t m_nPrevArmorVal = 0x14F0; // int32
                constexpr std::ptrdiff_t m_nPrevGrenadeAmmoCount = 0x14F4; // int32
                constexpr std::ptrdiff_t m_unPreviousWeaponHash = 0x14F8; // uint32
                constexpr std::ptrdiff_t m_unWeaponHash = 0x14FC; // uint32
                constexpr std::ptrdiff_t m_bInBuyZone = 0x1500; // bool
                constexpr std::ptrdiff_t m_bPreviouslyInBuyZone = 0x1501; // bool
                constexpr std::ptrdiff_t m_bInLanding = 0x1502; // bool
                constexpr std::ptrdiff_t m_flLandingStartTime = 0x1504; // float32
                constexpr std::ptrdiff_t m_bInHostageRescueZone = 0x1508; // bool
                constexpr std::ptrdiff_t m_bInBombZone = 0x1509; // bool
                constexpr std::ptrdiff_t m_bIsBuyMenuOpen = 0x150A; // bool
                constexpr std::ptrdiff_t m_flTimeOfLastInjury = 0x150C; // GameTime_t
                constexpr std::ptrdiff_t m_flNextSprayDecalTime = 0x1510; // GameTime_t
                constexpr std::ptrdiff_t m_iRetakesOffering = 0x1670; // int32
                constexpr std::ptrdiff_t m_iRetakesOfferingCard = 0x1674; // int32
                constexpr std::ptrdiff_t m_bRetakesHasDefuseKit = 0x1678; // bool
                constexpr std::ptrdiff_t m_bRetakesMVPLastRound = 0x1679; // bool
                constexpr std::ptrdiff_t m_iRetakesMVPBoostItem = 0x167C; // int32
                constexpr std::ptrdiff_t m_RetakesMVPBoostExtraUtility = 0x1680; // loadout_slot_t
                constexpr std::ptrdiff_t m_bNeedToReApplyGloves = 0x1685; // bool
                constexpr std::ptrdiff_t m_EconGloves = 0x1688; // C_EconItemView
                constexpr std::ptrdiff_t m_nEconGlovesChanged = 0x1AF8; // uint8
                constexpr std::ptrdiff_t m_bMustSyncRagdollState = 0x1AF9; // bool
                constexpr std::ptrdiff_t m_nRagdollDamageBone = 0x1AFC; // int32
                constexpr std::ptrdiff_t m_vRagdollDamageForce = 0x1B00; // Vector
                constexpr std::ptrdiff_t m_szRagdollDamageWeaponName = 0x1B0C; // char[64]
                constexpr std::ptrdiff_t m_bRagdollDamageHeadshot = 0x1B4C; // bool
                constexpr std::ptrdiff_t m_vRagdollServerOrigin = 0x1B50; // VectorWS
                constexpr std::ptrdiff_t m_lastLandTime = 0x1B5C; // GameTime_t
                constexpr std::ptrdiff_t m_bOnGroundLastTick = 0x1B60; // bool
                constexpr std::ptrdiff_t m_hHudModelArms = 0x1B7C; // CHandle<C_CS2HudModelArms>
                constexpr std::ptrdiff_t m_qDeathEyeAngles = 0x1B80; // QAngle
                constexpr std::ptrdiff_t m_bLeftHanded = 0x1B8C; // bool
                constexpr std::ptrdiff_t m_fSwitchedHandednessTime = 0x1B90; // GameTime_t
                constexpr std::ptrdiff_t m_flViewmodelOffsetX = 0x1B94; // float32
                constexpr std::ptrdiff_t m_flViewmodelOffsetY = 0x1B98; // float32
                constexpr std::ptrdiff_t m_flViewmodelOffsetZ = 0x1B9C; // float32
                constexpr std::ptrdiff_t m_flViewmodelFOV = 0x1BA0; // float32
                constexpr std::ptrdiff_t m_vecPlayerPatchEconIndices = 0x1BA4; // uint32[5]
                constexpr std::ptrdiff_t m_GunGameImmunityColor = 0x1BE8; // Color
                constexpr std::ptrdiff_t m_vecBulletHitModels = 0x1C38; // CUtlVector<C_BulletHitModel*>
                constexpr std::ptrdiff_t m_bIsWalking = 0x1C50; // bool
                constexpr std::ptrdiff_t m_entitySpottedState = 0x1C58; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_bIsScoped = 0x1C70; // bool
                constexpr std::ptrdiff_t m_bResumeZoom = 0x1C71; // bool
                constexpr std::ptrdiff_t m_bIsDefusing = 0x1C72; // bool
                constexpr std::ptrdiff_t m_bIsGrabbingHostage = 0x1C73; // bool
                constexpr std::ptrdiff_t m_iBlockingUseActionInProgress = 0x1C74; // CSPlayerBlockingUseAction_t
                constexpr std::ptrdiff_t m_flEmitSoundTime = 0x1C78; // GameTime_t
                constexpr std::ptrdiff_t m_bInNoDefuseArea = 0x1C7C; // bool
                constexpr std::ptrdiff_t m_nWhichBombZone = 0x1C80; // int32
                constexpr std::ptrdiff_t m_iShotsFired = 0x1C84; // int32
                constexpr std::ptrdiff_t m_flFlinchStack = 0x1C88; // float32
                constexpr std::ptrdiff_t m_flVelocityModifier = 0x1C8C; // float32
                constexpr std::ptrdiff_t m_bWaitForNoAttack = 0x1C90; // bool
                constexpr std::ptrdiff_t m_ignoreLadderJumpTime = 0x1C94; // float32
                constexpr std::ptrdiff_t m_bKilledByHeadshot = 0x1C99; // bool
                constexpr std::ptrdiff_t m_ArmorValue = 0x1C9C; // int32
                constexpr std::ptrdiff_t m_unCurrentEquipmentValue = 0x1CA0; // uint16
                constexpr std::ptrdiff_t m_unRoundStartEquipmentValue = 0x1CA2; // uint16
                constexpr std::ptrdiff_t m_unFreezetimeEndEquipmentValue = 0x1CA4; // uint16
                constexpr std::ptrdiff_t m_nLastKillerIndex = 0x1CA8; // CEntityIndex
                constexpr std::ptrdiff_t m_bOldIsScoped = 0x1CAC; // bool
                constexpr std::ptrdiff_t m_bHasDeathInfo = 0x1CAD; // bool
                constexpr std::ptrdiff_t m_flDeathInfoTime = 0x1CB0; // float32
                constexpr std::ptrdiff_t m_vecDeathInfoOrigin = 0x1CB4; // VectorWS
                constexpr std::ptrdiff_t m_grenadeParameterStashTime = 0x1CF0; // GameTime_t
                constexpr std::ptrdiff_t m_bGrenadeParametersStashed = 0x1CF4; // bool
                constexpr std::ptrdiff_t m_angStashedShootAngles = 0x1CF8; // QAngle
                constexpr std::ptrdiff_t m_vecStashedGrenadeThrowPosition = 0x1D04; // VectorWS
                constexpr std::ptrdiff_t m_vecStashedVelocity = 0x1D10; // Vector
                constexpr std::ptrdiff_t m_bShouldAutobuyDMWeapons = 0x3250; // bool
                constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTime = 0x3254; // GameTime_t
                constexpr std::ptrdiff_t m_bGunGameImmunity = 0x3258; // bool
                constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTimeLast = 0x325C; // GameTime_t
                constexpr std::ptrdiff_t m_fMolotovDamageTime = 0x3260; // float32
                constexpr std::ptrdiff_t m_nPlayerInfernoBodyFx = 0x32CC; // ParticleIndex_t
                constexpr std::ptrdiff_t m_angEyeAngles = 0x3340; // QAngle
                constexpr std::ptrdiff_t m_arrOldEyeAnglesTimes = 0x33D0; // GameTime_t[4]
                constexpr std::ptrdiff_t m_arrOldEyeAngles = 0x33E0; // QAngle[4]
                constexpr std::ptrdiff_t m_angEyeAnglesVelocity = 0x3410; // QAngle
                constexpr std::ptrdiff_t m_iIDEntIndex = 0x341C; // CEntityIndex
                constexpr std::ptrdiff_t m_delayTargetIDTimer = 0x3420; // CountdownTimer
                constexpr std::ptrdiff_t m_iTargetItemEntIdx = 0x3438; // CEntityIndex
                constexpr std::ptrdiff_t m_iOldIDEntIndex = 0x343C; // CEntityIndex
                constexpr std::ptrdiff_t m_holdTargetIDTimer = 0x3440; // CountdownTimer
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
                constexpr std::ptrdiff_t m_nCursorsAllowedToWait = 0xD8; // int32
                constexpr std::ptrdiff_t m_WaitComplete = 0xE0; // CPulse_ResumePoint
            }
            // Parent: CBaseAnimGraph
            // Field count: 23
            namespace C_Hostage {
                constexpr std::ptrdiff_t m_entitySpottedState = 0x1208; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_leader = 0x1220; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_reuseTimer = 0x1228; // CountdownTimer
                constexpr std::ptrdiff_t m_vel = 0x1240; // Vector
                constexpr std::ptrdiff_t m_isRescued = 0x124C; // bool
                constexpr std::ptrdiff_t m_jumpedThisFrame = 0x124D; // bool
                constexpr std::ptrdiff_t m_nHostageState = 0x1250; // int32
                constexpr std::ptrdiff_t m_bHandsHaveBeenCut = 0x1254; // bool
                constexpr std::ptrdiff_t m_hHostageGrabber = 0x1258; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_fLastGrabTime = 0x125C; // GameTime_t
                constexpr std::ptrdiff_t m_vecGrabbedPos = 0x1260; // VectorWS
                constexpr std::ptrdiff_t m_flRescueStartTime = 0x126C; // GameTime_t
                constexpr std::ptrdiff_t m_flGrabSuccessTime = 0x1270; // GameTime_t
                constexpr std::ptrdiff_t m_flDropStartTime = 0x1274; // GameTime_t
                constexpr std::ptrdiff_t m_flDeadOrRescuedTime = 0x1278; // GameTime_t
                constexpr std::ptrdiff_t m_blinkTimer = 0x1280; // CountdownTimer
                constexpr std::ptrdiff_t m_lookAt = 0x1298; // VectorWS
                constexpr std::ptrdiff_t m_lookAroundTimer = 0x12A8; // CountdownTimer
                constexpr std::ptrdiff_t m_isInit = 0x12C0; // bool
                constexpr std::ptrdiff_t m_eyeAttachment = 0x12C1; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_chestAttachment = 0x12C2; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_pPredictionOwner = 0x12C8; // CBasePlayerController*
                constexpr std::ptrdiff_t m_fNewestAlphaThinkTime = 0x12D0; // GameTime_t
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
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
            // Field count: 34
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CGameSceneNode {
                constexpr std::ptrdiff_t m_nodeToWorld = 0x10; // CTransformWS
                constexpr std::ptrdiff_t m_pOwner = 0x30; // CEntityInstance*
                constexpr std::ptrdiff_t m_pParent = 0x38; // CGameSceneNode*
                constexpr std::ptrdiff_t m_pChild = 0x40; // CGameSceneNode*
                constexpr std::ptrdiff_t m_pNextSibling = 0x48; // CGameSceneNode*
                constexpr std::ptrdiff_t m_hParent = 0x70; // CGameSceneNodeHandle
                constexpr std::ptrdiff_t m_vecOrigin = 0x80; // CNetworkOriginCellCoordQuantizedVector
                constexpr std::ptrdiff_t m_angRotation = 0xB8; // QAngle
                constexpr std::ptrdiff_t m_flScale = 0xC4; // float32
                constexpr std::ptrdiff_t m_vecAbsOrigin = 0xC8; // VectorWS
                constexpr std::ptrdiff_t m_angAbsRotation = 0xD4; // QAngle
                constexpr std::ptrdiff_t m_flAbsScale = 0xE0; // float32
                constexpr std::ptrdiff_t m_vecWrappedLocalOrigin = 0xE4; // Vector
                constexpr std::ptrdiff_t m_angWrappedLocalRotation = 0xF0; // QAngle
                constexpr std::ptrdiff_t m_flWrappedScale = 0xFC; // float32
                constexpr std::ptrdiff_t m_nParentAttachmentOrBone = 0x100; // int16
                constexpr std::ptrdiff_t m_bDebugAbsOriginChanges = 0x102; // bool
                constexpr std::ptrdiff_t m_bDormant = 0x103; // bool
                constexpr std::ptrdiff_t m_bForceParentToBeNetworked = 0x104; // bool
                constexpr std::ptrdiff_t m_bDirtyHierarchy = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bDirtyBoneMergeInfo = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNetworkedPositionChanged = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNetworkedAnglesChanged = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNetworkedScaleChanged = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bWillBeCallingPostDataUpdate = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bBoneMergeFlex = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_nLatchAbsOrigin = 0x0; // bitfield:2
                constexpr std::ptrdiff_t m_bDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_nHierarchicalDepth = 0x107; // uint8
                constexpr std::ptrdiff_t m_nHierarchyType = 0x108; // uint8
                constexpr std::ptrdiff_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0x109; // uint8
                constexpr std::ptrdiff_t m_name = 0x10C; // CUtlStringToken
                constexpr std::ptrdiff_t m_hierarchyAttachName = 0x120; // CUtlStringToken
                constexpr std::ptrdiff_t m_flClientLocalScale = 0x124; // float32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 6
            namespace CPlayer_ObserverServices {
                constexpr std::ptrdiff_t m_iObserverMode = 0x48; // uint8
                constexpr std::ptrdiff_t m_hObserverTarget = 0x4C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iObserverLastMode = 0x50; // ObserverMode_t
                constexpr std::ptrdiff_t m_bForcedObserverMode = 0x54; // bool
                constexpr std::ptrdiff_t m_flObserverChaseDistance = 0x58; // float32
                constexpr std::ptrdiff_t m_flObserverChaseDistanceCalcTime = 0x5C; // GameTime_t
            }
            // Parent: C_BaseModelEntity
            // Field count: 1
            namespace CCashStack {
                constexpr std::ptrdiff_t m_nCashStackValue = 0xFB0; // int32
            }
            // Parent: C_BaseEntity
            // Field count: 4
            namespace C_SoundAreaEntityBase {
                constexpr std::ptrdiff_t m_bDisabled = 0x600; // bool
                constexpr std::ptrdiff_t m_bWasEnabled = 0x608; // bool
                constexpr std::ptrdiff_t m_iszSoundAreaType = 0x610; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vPos = 0x618; // Vector
            }
            // Parent: C_BaseEntity
            // Field count: 6
            namespace C_PlayerVisibility {
                constexpr std::ptrdiff_t m_flVisibilityStrength = 0x600; // float32
                constexpr std::ptrdiff_t m_flFogDistanceMultiplier = 0x604; // float32
                constexpr std::ptrdiff_t m_flFogMaxDensityMultiplier = 0x608; // float32
                constexpr std::ptrdiff_t m_flFadeTime = 0x60C; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x610; // bool
                constexpr std::ptrdiff_t m_bIsEnabled = 0x611; // bool
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
            namespace C_BasePlayerWeapon {
                constexpr std::ptrdiff_t m_nNextPrimaryAttackTick = 0x16F0; // GameTick_t
                constexpr std::ptrdiff_t m_flNextPrimaryAttackTickRatio = 0x16F4; // float32
                constexpr std::ptrdiff_t m_nNextSecondaryAttackTick = 0x16F8; // GameTick_t
                constexpr std::ptrdiff_t m_flNextSecondaryAttackTickRatio = 0x16FC; // float32
                constexpr std::ptrdiff_t m_iClip1 = 0x1700; // int32
                constexpr std::ptrdiff_t m_iClip2 = 0x1704; // int32
                constexpr std::ptrdiff_t m_pReserveAmmo = 0x1708; // int32[2]
            }
            // Parent: C_BaseEntity
            // Field count: 1
            namespace CRagdollManager {
                constexpr std::ptrdiff_t m_iCurrentMaxRagdollCount = 0x600; // int8
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            namespace CSoundOpvarSetBoxEntity {
            }
            // Parent: C_BaseCSGrenade
            // Field count: 0
            namespace C_HEGrenade {
            }
            // Parent: C_BaseModelEntity
            // Field count: 12
            namespace C_EnvSky {
                constexpr std::ptrdiff_t m_hSkyMaterial = 0xFB0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hSkyMaterialLightingOnly = 0xFB8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_bStartDisabled = 0xFC0; // bool
                constexpr std::ptrdiff_t m_vTintColor = 0xFC1; // Color
                constexpr std::ptrdiff_t m_vTintColorLightingOnly = 0xFC5; // Color
                constexpr std::ptrdiff_t m_flBrightnessScale = 0xFCC; // float32
                constexpr std::ptrdiff_t m_nFogType = 0xFD0; // int32
                constexpr std::ptrdiff_t m_flFogMinStart = 0xFD4; // float32
                constexpr std::ptrdiff_t m_flFogMinEnd = 0xFD8; // float32
                constexpr std::ptrdiff_t m_flFogMaxStart = 0xFDC; // float32
                constexpr std::ptrdiff_t m_flFogMaxEnd = 0xFE0; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0xFE4; // bool
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
            namespace C_EnvWindController {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x600; // C_EnvWindShared
                constexpr std::ptrdiff_t m_fDirectionVariation = 0x6F8; // float32
                constexpr std::ptrdiff_t m_fSpeedVariation = 0x6FC; // float32
                constexpr std::ptrdiff_t m_fTurbulence = 0x700; // float32
                constexpr std::ptrdiff_t m_fVolumeHalfExtentXY = 0x704; // float32
                constexpr std::ptrdiff_t m_fVolumeHalfExtentZ = 0x708; // float32
                constexpr std::ptrdiff_t m_nVolumeResolutionXY = 0x70C; // int32
                constexpr std::ptrdiff_t m_nVolumeResolutionZ = 0x710; // int32
                constexpr std::ptrdiff_t m_nClipmapLevels = 0x714; // int32
                constexpr std::ptrdiff_t m_bIsMaster = 0x718; // bool
                constexpr std::ptrdiff_t m_bFirstTime = 0x719; // bool
            }
            // Parent: None
            // Field count: 4
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
                constexpr std::ptrdiff_t m_flZFar = 0x600; // float32
                constexpr std::ptrdiff_t m_flZNear = 0x604; // float32
                constexpr std::ptrdiff_t m_bLoop = 0x608; // bool
                constexpr std::ptrdiff_t m_bVerticalFOV = 0x609; // bool
                constexpr std::ptrdiff_t m_bConstantSpeed = 0x60A; // bool
                constexpr std::ptrdiff_t m_flDuration = 0x60C; // float32
                constexpr std::ptrdiff_t m_flPathLength = 0x650; // float32
                constexpr std::ptrdiff_t m_flPathDuration = 0x654; // float32
                constexpr std::ptrdiff_t m_bDofEnabled = 0x66C; // bool
                constexpr std::ptrdiff_t m_flDofNearBlurry = 0x670; // float32
                constexpr std::ptrdiff_t m_flDofNearCrisp = 0x674; // float32
                constexpr std::ptrdiff_t m_flDofFarCrisp = 0x678; // float32
                constexpr std::ptrdiff_t m_flDofFarBlurry = 0x67C; // float32
                constexpr std::ptrdiff_t m_flDofTiltToGround = 0x680; // float32
            }
            // Parent: C_BaseModelEntity
            // Field count: 19
            namespace C_PointWorldText {
                constexpr std::ptrdiff_t m_bForceRecreateNextUpdate = 0xFB8; // bool
                constexpr std::ptrdiff_t m_nTextWidthPx = 0xFD0; // int32
                constexpr std::ptrdiff_t m_nTextHeightPx = 0xFD4; // int32
                constexpr std::ptrdiff_t m_messageText = 0xFD8; // char[512]
                constexpr std::ptrdiff_t m_FontName = 0x11D8; // char[64]
                constexpr std::ptrdiff_t m_BackgroundMaterialName = 0x1218; // char[64]
                constexpr std::ptrdiff_t m_bEnabled = 0x1258; // bool
                constexpr std::ptrdiff_t m_bFullbright = 0x1259; // bool
                constexpr std::ptrdiff_t m_flWorldUnitsPerPx = 0x125C; // float32
                constexpr std::ptrdiff_t m_flFontSize = 0x1260; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0x1264; // float32
                constexpr std::ptrdiff_t m_bDrawBackground = 0x1268; // bool
                constexpr std::ptrdiff_t m_flBackgroundBorderWidth = 0x126C; // float32
                constexpr std::ptrdiff_t m_flBackgroundBorderHeight = 0x1270; // float32
                constexpr std::ptrdiff_t m_flBackgroundWorldToUV = 0x1274; // float32
                constexpr std::ptrdiff_t m_Color = 0x1278; // Color
                constexpr std::ptrdiff_t m_nJustifyHorizontal = 0x127C; // PointWorldTextJustifyHorizontal_t
                constexpr std::ptrdiff_t m_nJustifyVertical = 0x1280; // PointWorldTextJustifyVertical_t
                constexpr std::ptrdiff_t m_nReorientMode = 0x1284; // PointWorldTextReorientMode_t
            }
            // Parent: C_BaseModelEntity
            // Field count: 40
            namespace C_RopeKeyframe {
                constexpr std::ptrdiff_t m_LinksTouchingSomething = 0xFB8; // CBitVec<10>
                constexpr std::ptrdiff_t m_nLinksTouchingSomething = 0xFBC; // int32
                constexpr std::ptrdiff_t m_bApplyWind = 0xFC0; // bool
                constexpr std::ptrdiff_t m_fPrevLockedPoints = 0xFC4; // int32
                constexpr std::ptrdiff_t m_iForcePointMoveCounter = 0xFC8; // int32
                constexpr std::ptrdiff_t m_bPrevEndPointPos = 0xFCC; // bool[2]
                constexpr std::ptrdiff_t m_vPrevEndPointPos = 0xFD0; // VectorWS[2]
                constexpr std::ptrdiff_t m_flCurScroll = 0xFE8; // float32
                constexpr std::ptrdiff_t m_flScrollSpeed = 0xFEC; // float32
                constexpr std::ptrdiff_t m_RopeFlags = 0xFF0; // uint16
                constexpr std::ptrdiff_t m_iRopeMaterialModelIndex = 0xFF8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nSegments = 0x1270; // uint8
                constexpr std::ptrdiff_t m_hStartPoint = 0x1274; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hEndPoint = 0x1278; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iStartAttachment = 0x127C; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_iEndAttachment = 0x127D; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_Subdiv = 0x127E; // uint8
                constexpr std::ptrdiff_t m_RopeLength = 0x1280; // int16
                constexpr std::ptrdiff_t m_Slack = 0x1282; // int16
                constexpr std::ptrdiff_t m_TextureScale = 0x1284; // float32
                constexpr std::ptrdiff_t m_fLockedPoints = 0x1288; // uint8
                constexpr std::ptrdiff_t m_nChangeCount = 0x1289; // uint8
                constexpr std::ptrdiff_t m_Width = 0x128C; // float32
                constexpr std::ptrdiff_t m_PhysicsDelegate = 0x1290; // C_RopeKeyframe::CPhysicsDelegate
                constexpr std::ptrdiff_t m_hMaterial = 0x12A0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_TextureHeight = 0x12A8; // int32
                constexpr std::ptrdiff_t m_vecImpulse = 0x12AC; // Vector
                constexpr std::ptrdiff_t m_vecPreviousImpulse = 0x12B8; // Vector
                constexpr std::ptrdiff_t m_flCurrentGustTimer = 0x12C4; // float32
                constexpr std::ptrdiff_t m_flCurrentGustLifetime = 0x12C8; // float32
                constexpr std::ptrdiff_t m_flTimeToNextGust = 0x12CC; // float32
                constexpr std::ptrdiff_t m_vWindDir = 0x12D0; // Vector
                constexpr std::ptrdiff_t m_vColorMod = 0x12DC; // Vector
                constexpr std::ptrdiff_t m_vCachedEndPointAttachmentPos = 0x12E8; // VectorWS[2]
                constexpr std::ptrdiff_t m_vCachedEndPointAttachmentAngle = 0x1300; // QAngle[2]
                constexpr std::ptrdiff_t m_bConstrainBetweenEndpoints = 0x1318; // bool
                constexpr std::ptrdiff_t m_bEndPointAttachmentPositionsDirty = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bEndPointAttachmentAnglesDirty = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNewDataThisFrame = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bPhysicsInitted = 0x0; // bitfield:1
            }
            // Parent: None
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
                constexpr std::ptrdiff_t m_bDisabled = 0x600; // bool
                constexpr std::ptrdiff_t m_flRange = 0x604; // float32
                constexpr std::ptrdiff_t m_nImportance = 0x608; // int32
                constexpr std::ptrdiff_t m_nLightChoice = 0x60C; // int32
                constexpr std::ptrdiff_t m_hLight = 0x610; // CHandle<C_BaseEntity>
            }
            // Parent: C_PointEntity
            // Field count: 6
            namespace CPathNode {
                constexpr std::ptrdiff_t m_vInTangentLocal = 0x600; // Vector
                constexpr std::ptrdiff_t m_vOutTangentLocal = 0x60C; // Vector
                constexpr std::ptrdiff_t m_strParentPathUniqueID = 0x618; // CUtlString
                constexpr std::ptrdiff_t m_strPathNodeParameter = 0x620; // CUtlString
                constexpr std::ptrdiff_t m_xWSPrevParent = 0x630; // CTransformWS
                constexpr std::ptrdiff_t m_hPath = 0x650; // CHandle<CPathWithDynamicNodes>
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            namespace C_FuncMoveLinear {
            }
            // Parent: None
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
            // MPulseEditorCanvasItemSpecKV3
            namespace CPulseCell_IntervalTimer {
                constexpr std::ptrdiff_t m_Completed = 0xD8; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_OnInterval = 0x120; // SignatureOutflow_Continue
            }
            // Parent: C_CSWeaponBaseShotgun
            // Field count: 0
            namespace C_WeaponXM1014 {
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace C_WorldModelGloves {
            }
            // Parent: C_BreakableProp
            // Field count: 0
            namespace C_PhysicsPropMultiplayer {
            }
            // Parent: C_SoundEventEntity
            // Field count: 2
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
                constexpr std::ptrdiff_t m_WakeResume = 0xD8; // CPulse_ResumePoint
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponAug {
            }
            // Parent: None
            // Field count: 8
            namespace C_BasePropDoor {
                constexpr std::ptrdiff_t m_eDoorState = 0x13D0; // DoorState_t
                constexpr std::ptrdiff_t m_modelChanged = 0x13D4; // bool
                constexpr std::ptrdiff_t m_bLocked = 0x13D5; // bool
                constexpr std::ptrdiff_t m_bNoNPCs = 0x13D6; // bool
                constexpr std::ptrdiff_t m_closedPosition = 0x13D8; // VectorWS
                constexpr std::ptrdiff_t m_closedAngles = 0x13E4; // QAngle
                constexpr std::ptrdiff_t m_hMaster = 0x13F0; // CHandle<C_BasePropDoor>
                constexpr std::ptrdiff_t m_vWhereToSetLightingOrigin = 0x13F4; // VectorWS
            }
            // Parent: None
            // Field count: 0
            namespace CPointValueRemapperAPI {
            }
            // Parent: C_PointEntity
            // Field count: 0
            namespace CChoreoInfoTarget {
            }
            // Parent: None
            // Field count: 0
            namespace C_CsmFovOverride_API {
            }
            // Parent: None
            // Field count: 0
            namespace CTakeDamageResultAPI {
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
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
            namespace CEntityInstance {
                constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pEntity = 0x10; // CEntityIdentity*
                constexpr std::ptrdiff_t m_CScriptComponent = 0x28; // CScriptComponent*
            }
            // Parent: C_BaseEntity
            // Field count: 44
            namespace C_BaseModelEntity {
                constexpr std::ptrdiff_t m_CRenderComponent = 0xAF0; // CRenderComponent*
                constexpr std::ptrdiff_t m_CHitboxComponent = 0xAF8; // CHitboxComponent
                constexpr std::ptrdiff_t m_pChoreoComponent = 0xB10; // CChoreoComponent*
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed0 = 0xB18; // HitGroup_t
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed1 = 0xB1C; // HitGroup_t
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed2 = 0xB20; // HitGroup_t
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed3 = 0xB24; // HitGroup_t
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed4 = 0xB28; // HitGroup_t
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed0_PartIndex = 0xB2C; // int32
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed1_PartIndex = 0xB30; // int32
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed2_PartIndex = 0xB34; // int32
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed3_PartIndex = 0xB38; // int32
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed4_PartIndex = 0xB3C; // int32
                constexpr std::ptrdiff_t m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces = 0xB40; // bool
                constexpr std::ptrdiff_t m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces = 0xB41; // bool
                constexpr std::ptrdiff_t m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces = 0xB42; // bool
                constexpr std::ptrdiff_t m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces = 0xB43; // bool
                constexpr std::ptrdiff_t m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces = 0xB44; // bool
                constexpr std::ptrdiff_t m_pDestructiblePartsSystemComponent = 0xB48; // CDestructiblePartsComponent*
                constexpr std::ptrdiff_t m_bInitModelEffects = 0xC70; // bool
                constexpr std::ptrdiff_t m_bDoingModelEffects = 0xC71; // bool
                constexpr std::ptrdiff_t m_iOldHealth = 0xC74; // int32
                constexpr std::ptrdiff_t m_nRenderMode = 0xC78; // RenderMode_t
                constexpr std::ptrdiff_t m_nRenderFX = 0xC79; // RenderFx_t
                constexpr std::ptrdiff_t m_bAllowFadeInView = 0xC7A; // bool
                constexpr std::ptrdiff_t m_clrRender = 0xC98; // Color
                constexpr std::ptrdiff_t m_vecRenderAttributes = 0xCA0; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
                constexpr std::ptrdiff_t m_bRenderToCubemaps = 0xD20; // bool
                constexpr std::ptrdiff_t m_bNoInterpolate = 0xD21; // bool
                constexpr std::ptrdiff_t m_Collision = 0xD28; // CCollisionProperty
                constexpr std::ptrdiff_t m_Glow = 0xDE0; // CGlowProperty
                constexpr std::ptrdiff_t m_flGlowBackfaceMult = 0xE38; // float32
                constexpr std::ptrdiff_t m_fadeMinDist = 0xE3C; // float32
                constexpr std::ptrdiff_t m_fadeMaxDist = 0xE40; // float32
                constexpr std::ptrdiff_t m_flFadeScale = 0xE44; // float32
                constexpr std::ptrdiff_t m_flShadowStrength = 0xE48; // float32
                constexpr std::ptrdiff_t m_nObjectCulling = 0xE4C; // uint8
                constexpr std::ptrdiff_t m_nRequiredDecalRtEncoding = 0xE4D; // DecalRtEncoding_t
                constexpr std::ptrdiff_t m_bodyGroupChoices = 0xE50; // CUtlOrderedMap<CGlobalSymbol,int32>
                constexpr std::ptrdiff_t m_vecViewOffset = 0xE78; // CNetworkViewOffsetVector
                constexpr std::ptrdiff_t m_pClientAlphaProperty = 0xF58; // CClientAlphaProperty*
                constexpr std::ptrdiff_t m_ClientOverrideTint = 0xF60; // Color
                constexpr std::ptrdiff_t m_bUseClientOverrideTint = 0xF64; // bool
                constexpr std::ptrdiff_t m_bvDisabledHitGroups = 0xFA0; // uint32[1]
            }
            // Parent: CPlayerPawnComponent
            // Field count: 1
            namespace CCSPlayer_BulletServices {
                constexpr std::ptrdiff_t m_totalHitsOnServer = 0x48; // int32
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            namespace C_SoundOpvarSetAutoRoomEntity {
            }
            // Parent: C_BaseEntity
            // Field count: 29
            namespace C_EnvCombinedLightProbeVolume {
                constexpr std::ptrdiff_t m_Entity_Color = 0x1678; // Color
                constexpr std::ptrdiff_t m_Entity_flBrightness = 0x167C; // float32
                constexpr std::ptrdiff_t m_Entity_hCubemapTexture = 0x1680; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_bCustomCubemapTexture = 0x1688; // bool
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_AmbientCube = 0x1690; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SDF = 0x1698; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_DC = 0x16A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_R = 0x16A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_G = 0x16B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_B = 0x16B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x16C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x16C8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x16D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x16D8; // Vector
                constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x16E4; // Vector
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x16F0; // bool
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x16F4; // int32
                constexpr std::ptrdiff_t m_Entity_nEnvCubeMapArrayIndex = 0x16F8; // int32
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x16FC; // int32
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x1700; // bool
                constexpr std::ptrdiff_t m_Entity_flEdgeFadeDist = 0x1704; // float32
                constexpr std::ptrdiff_t m_Entity_vEdgeFadeDists = 0x1708; // Vector
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x1714; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x1718; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x171C; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x1720; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x1724; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x1728; // int32
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x1741; // bool
            }
            // Parent: C_CSGO_EndOfMatchLineupEndpoint
            // Field count: 0
            namespace CCSGO_EndOfMatchLineupEnd {
            }
            // Parent: None
            // Field count: 0
            namespace C_MultiplayRules {
            }
            // Parent: None
            // Field count: 0
            namespace CPlayer_AutoaimServices {
            }
            // Parent: None
            // Field count: 0
            namespace CEnvWindSharedAPI {
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            namespace C_LightDirectionalEntity {
            }
            // Parent: None
            // Field count: 0
            namespace CMapInfo_API {
            }
            // Parent: None
            // Field count: 82
            namespace C_BaseEntity {
                constexpr std::ptrdiff_t m_CBodyComponent = 0x30; // CBodyComponent*
                constexpr std::ptrdiff_t m_NetworkTransmitComponent = 0x38; // CNetworkTransmitComponent
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
                constexpr std::ptrdiff_t m_EntClientFlags = 0x3E4; // uint16
                constexpr std::ptrdiff_t m_bClientSideRagdoll = 0x3E6; // bool
                constexpr std::ptrdiff_t m_iTeamNum = 0x3E7; // uint8
                constexpr std::ptrdiff_t m_spawnflags = 0x3E8; // uint32
                constexpr std::ptrdiff_t m_nNextThinkTick = 0x3EC; // GameTick_t
                constexpr std::ptrdiff_t m_fFlags = 0x3F4; // uint32
                constexpr std::ptrdiff_t m_vecAbsVelocity = 0x3F8; // Vector
                constexpr std::ptrdiff_t m_vecServerVelocity = 0x404; // CNetworkVelocityVector
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
                constexpr std::ptrdiff_t m_bAnimTimeChanged = 0x5E1; // bool
                constexpr std::ptrdiff_t m_bSimulationTimeChanged = 0x5E2; // bool
                constexpr std::ptrdiff_t m_sUniqueHammerID = 0x5F0; // CUtlString
                constexpr std::ptrdiff_t m_nBloodType = 0x5F8; // BloodType
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
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
            // Parent: C_DynamicProp
            // Field count: 5
            namespace C_Chicken {
                constexpr std::ptrdiff_t m_leader = 0x13C8; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_AttributeManager = 0x13D0; // C_AttributeContainer
                constexpr std::ptrdiff_t m_bAttributesInitialized = 0x18A0; // bool
                constexpr std::ptrdiff_t m_hWaterWakeParticles = 0x18A4; // ParticleIndex_t
                constexpr std::ptrdiff_t m_bIsPreviewModel = 0x18A8; // bool
            }
            // Parent: CBaseAnimGraph
            // Field count: 28
            namespace C_BasePlayerPawn {
                constexpr std::ptrdiff_t m_pWeaponServices = 0x1208; // CPlayer_WeaponServices*
                constexpr std::ptrdiff_t m_pItemServices = 0x1210; // CPlayer_ItemServices*
                constexpr std::ptrdiff_t m_pAutoaimServices = 0x1218; // CPlayer_AutoaimServices*
                constexpr std::ptrdiff_t m_pObserverServices = 0x1220; // CPlayer_ObserverServices*
                constexpr std::ptrdiff_t m_pWaterServices = 0x1228; // CPlayer_WaterServices*
                constexpr std::ptrdiff_t m_pUseServices = 0x1230; // CPlayer_UseServices*
                constexpr std::ptrdiff_t m_pFlashlightServices = 0x1238; // CPlayer_FlashlightServices*
                constexpr std::ptrdiff_t m_pCameraServices = 0x1240; // CPlayer_CameraServices*
                constexpr std::ptrdiff_t m_pMovementServices = 0x1248; // CPlayer_MovementServices*
                constexpr std::ptrdiff_t m_ServerViewAngleChanges = 0x1258; // C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
                constexpr std::ptrdiff_t v_angle = 0x12C0; // QAngle
                constexpr std::ptrdiff_t v_anglePrevious = 0x12CC; // QAngle
                constexpr std::ptrdiff_t m_iHideHUD = 0x12D8; // uint32
                constexpr std::ptrdiff_t m_skybox3d = 0x12E0; // sky3dparams_t
                constexpr std::ptrdiff_t m_flDeathTime = 0x1370; // GameTime_t
                constexpr std::ptrdiff_t m_vecPredictionError = 0x1374; // Vector
                constexpr std::ptrdiff_t m_flPredictionErrorTime = 0x1380; // GameTime_t
                constexpr std::ptrdiff_t m_vecLastCameraSetupLocalOrigin = 0x13A0; // Vector
                constexpr std::ptrdiff_t m_flLastCameraSetupTime = 0x13AC; // GameTime_t
                constexpr std::ptrdiff_t m_flFOVSensitivityAdjust = 0x13B0; // float32
                constexpr std::ptrdiff_t m_flMouseSensitivity = 0x13B4; // float32
                constexpr std::ptrdiff_t m_vOldOrigin = 0x13B8; // Vector
                constexpr std::ptrdiff_t m_flOldSimulationTime = 0x13C4; // float32
                constexpr std::ptrdiff_t m_nLastExecutedCommandNumber = 0x13C8; // int32
                constexpr std::ptrdiff_t m_nLastExecutedCommandTick = 0x13CC; // int32
                constexpr std::ptrdiff_t m_hController = 0x13D0; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_hDefaultController = 0x13D4; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_bIsSwappingToPredictableController = 0x13D8; // bool
            }
            // Parent: None
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
                constexpr std::ptrdiff_t m_bKnife = 0x1188; // bool
            }
            // Parent: CCSPlayerBase_CameraServices
            // Field count: 1
            namespace CCSObserver_CameraServices {
                constexpr std::ptrdiff_t m_hPrevPostProcessingVolume = 0x2A8; // CHandle<C_PostProcessingVolume>
            }
            // Parent: CEnvSoundscape
            // Field count: 1
            namespace CEnvSoundscapeProxy {
                constexpr std::ptrdiff_t m_MainSoundscapeName = 0x690; // CUtlSymbolLarge
            }
            // Parent: C_BaseEntity
            // Field count: 15
            namespace C_SoundEventEntity {
                constexpr std::ptrdiff_t m_bStartOnSpawn = 0x600; // bool
                constexpr std::ptrdiff_t m_bToLocalPlayer = 0x601; // bool
                constexpr std::ptrdiff_t m_bStopOnNew = 0x602; // bool
                constexpr std::ptrdiff_t m_bSaveRestore = 0x603; // bool
                constexpr std::ptrdiff_t m_bSavedIsPlaying = 0x604; // bool
                constexpr std::ptrdiff_t m_flSavedElapsedTime = 0x608; // float32
                constexpr std::ptrdiff_t m_iszSourceEntityName = 0x610; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszAttachmentName = 0x618; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_onGUIDChanged = 0x620; // CEntityOutputTemplate<SndOpEventGuid_t>
                constexpr std::ptrdiff_t m_onSoundFinished = 0x650; // CEntityIOOutput
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
            // Parent: C_BaseModelEntity
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
            namespace CBombTarget {
                constexpr std::ptrdiff_t m_bBombPlantedHere = 0x1098; // bool
            }
            // Parent: C_CSWeaponBase
            // Field count: 1
            namespace C_Knife {
                constexpr std::ptrdiff_t m_bFirstAttack = 0x1CE0; // bool
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Field count: 0
            namespace C_CSGO_TerroristWingmanIntroCamera {
            }
            // Parent: CGameSceneNode
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSkeletonInstance {
                constexpr std::ptrdiff_t m_modelState = 0x140; // CModelState
                constexpr std::ptrdiff_t m_bUseParentRenderBounds = 0x3F0; // bool
                constexpr std::ptrdiff_t m_bDisableSolidCollisionsForHierarchy = 0x3F1; // bool
                constexpr std::ptrdiff_t m_bDirtyMotionType = 0x3F2; // bool
                constexpr std::ptrdiff_t m_bIsGeneratingLatchedParentSpaceState = 0x3F3; // bool
                constexpr std::ptrdiff_t m_materialGroup = 0x3F8; // CUtlStringToken
                constexpr std::ptrdiff_t m_nHitboxSet = 0x3FC; // uint8
            }
            // Parent: None
            // Field count: 0
            namespace CEntityComponent {
            }
            // Parent: C_Item
            // Field count: 2
            namespace C_ItemDogtags {
                constexpr std::ptrdiff_t m_OwningPlayer = 0x17F0; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_KillingPlayer = 0x17F4; // CHandle<C_CSPlayerPawn>
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
            // Parent: C_BaseModelEntity
            // Field count: 4
            namespace C_BaseClientUIEntity {
                constexpr std::ptrdiff_t m_bEnabled = 0xFB8; // bool
                constexpr std::ptrdiff_t m_DialogXMLName = 0xFC0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PanelClassName = 0xFC8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PanelID = 0xFD0; // CUtlSymbolLarge
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
            namespace C_MolotovProjectile {
                constexpr std::ptrdiff_t m_bIsIncGrenade = 0x1260; // bool
            }
            // Parent: None
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
                constexpr std::ptrdiff_t m_bModelOverrodeBlockLOS = 0x1180; // bool
                constexpr std::ptrdiff_t m_iShapeType = 0x1184; // int32
                constexpr std::ptrdiff_t m_bConformToCollisionBounds = 0x1188; // bool
                constexpr std::ptrdiff_t m_mPreferredCatchTransform = 0x1190; // CTransform
            }
            // Parent: C_PointEntity
            // Field count: 12
            namespace CInfoOffscreenPanoramaTexture {
                constexpr std::ptrdiff_t m_bDisabled = 0x600; // bool
                constexpr std::ptrdiff_t m_nResolutionX = 0x604; // int32
                constexpr std::ptrdiff_t m_nResolutionY = 0x608; // int32
                constexpr std::ptrdiff_t m_szPanelType = 0x610; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_szLayoutFileName = 0x618; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_RenderAttrName = 0x620; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_TargetEntities = 0x628; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_nTargetChangeCount = 0x640; // int32
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x648; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_szTargetsName = 0x660; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_AdditionalTargetEntities = 0x668; // CUtlVector<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_bCheckCSSClasses = 0x7E0; // bool
            }
            // Parent: None
            // Field count: 84
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertySuppressBaseClassField
            // MPropertySuppressBaseClassField
            namespace CCSWeaponBaseVData {
                constexpr std::ptrdiff_t m_WeaponType = 0x520; // CSWeaponType
                constexpr std::ptrdiff_t m_WeaponCategory = 0x524; // CSWeaponCategory
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
                constexpr std::ptrdiff_t m_flCycleTimeWhenInBurstMode = 0x748; // float32
                constexpr std::ptrdiff_t m_flTimeBetweenBurstShots = 0x74C; // float32
                constexpr std::ptrdiff_t m_flMaxSpeed = 0x750; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flSpread = 0x758; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyCrouch = 0x760; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyStand = 0x768; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyJump = 0x770; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyLand = 0x778; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyLadder = 0x780; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyFire = 0x788; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flInaccuracyMove = 0x790; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilAngle = 0x798; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilAngleVariance = 0x7A0; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilMagnitude = 0x7A8; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flRecoilMagnitudeVariance = 0x7B0; // CFiringModeFloat
                constexpr std::ptrdiff_t m_nTracerFrequency = 0x7B8; // CFiringModeInt
                constexpr std::ptrdiff_t m_flInaccuracyJumpInitial = 0x7C0; // float32
                constexpr std::ptrdiff_t m_flInaccuracyJumpApex = 0x7C4; // float32
                constexpr std::ptrdiff_t m_flInaccuracyReload = 0x7C8; // float32
                constexpr std::ptrdiff_t m_flDeployDuration = 0x7CC; // float32
                constexpr std::ptrdiff_t m_flDisallowAttackAfterReloadStartDuration = 0x7D0; // float32
                constexpr std::ptrdiff_t m_nBurstShotCount = 0x7D4; // int32
                constexpr std::ptrdiff_t m_bAllowBurstHolster = 0x7D8; // bool
                constexpr std::ptrdiff_t m_nRecoilSeed = 0x7DC; // int32
                constexpr std::ptrdiff_t m_nSpreadSeed = 0x7E0; // int32
                constexpr std::ptrdiff_t m_flAttackMovespeedFactor = 0x7E4; // float32
                constexpr std::ptrdiff_t m_flInaccuracyPitchShift = 0x7E8; // float32
                constexpr std::ptrdiff_t m_flInaccuracyAltSoundThreshold = 0x7EC; // float32
                constexpr std::ptrdiff_t m_szUseRadioSubtitle = 0x7F0; // CUtlString
                constexpr std::ptrdiff_t m_bUnzoomsAfterShot = 0x7F8; // bool
                constexpr std::ptrdiff_t m_bHideViewModelWhenZoomed = 0x7F9; // bool
                constexpr std::ptrdiff_t m_nZoomLevels = 0x7FC; // int32
                constexpr std::ptrdiff_t m_nZoomFOV1 = 0x800; // int32
                constexpr std::ptrdiff_t m_nZoomFOV2 = 0x804; // int32
                constexpr std::ptrdiff_t m_flZoomTime0 = 0x808; // float32
                constexpr std::ptrdiff_t m_flZoomTime1 = 0x80C; // float32
                constexpr std::ptrdiff_t m_flZoomTime2 = 0x810; // float32
                constexpr std::ptrdiff_t m_flIronSightPullUpSpeed = 0x814; // float32
                constexpr std::ptrdiff_t m_flIronSightPutDownSpeed = 0x818; // float32
                constexpr std::ptrdiff_t m_flIronSightFOV = 0x81C; // float32
                constexpr std::ptrdiff_t m_flIronSightPivotForward = 0x820; // float32
                constexpr std::ptrdiff_t m_flIronSightLooseness = 0x824; // float32
                constexpr std::ptrdiff_t m_nDamage = 0x828; // int32
                constexpr std::ptrdiff_t m_flHeadshotMultiplier = 0x82C; // float32
                constexpr std::ptrdiff_t m_flArmorRatio = 0x830; // float32
                constexpr std::ptrdiff_t m_flPenetration = 0x834; // float32
                constexpr std::ptrdiff_t m_flRange = 0x838; // float32
                constexpr std::ptrdiff_t m_flRangeModifier = 0x83C; // float32
                constexpr std::ptrdiff_t m_flFlinchVelocityModifierLarge = 0x840; // float32
                constexpr std::ptrdiff_t m_flFlinchVelocityModifierSmall = 0x844; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeCrouch = 0x848; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeStand = 0x84C; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeCrouchFinal = 0x850; // float32
                constexpr std::ptrdiff_t m_flRecoveryTimeStandFinal = 0x854; // float32
                constexpr std::ptrdiff_t m_nRecoveryTransitionStartBullet = 0x858; // int32
                constexpr std::ptrdiff_t m_nRecoveryTransitionEndBullet = 0x85C; // int32
                constexpr std::ptrdiff_t m_flThrowVelocity = 0x860; // float32
                constexpr std::ptrdiff_t m_vSmokeColor = 0x864; // Vector
                constexpr std::ptrdiff_t m_szAnimClass = 0x870; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 6
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
            namespace CPlayer_CameraServices {
                constexpr std::ptrdiff_t m_vecCsViewPunchAngle = 0x48; // QAngle
                constexpr std::ptrdiff_t m_nCsViewPunchAngleTick = 0x54; // GameTick_t
                constexpr std::ptrdiff_t m_flCsViewPunchAngleTickRatio = 0x58; // float32
                constexpr std::ptrdiff_t m_PlayerFog = 0x60; // C_fogplayerparams_t
                constexpr std::ptrdiff_t m_hColorCorrectionCtrl = 0xA0; // CHandle<C_ColorCorrection>
                constexpr std::ptrdiff_t m_hViewEntity = 0xA4; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hTonemapController = 0xA8; // CHandle<C_TonemapController2>
                constexpr std::ptrdiff_t m_audio = 0xB0; // audioparams_t
                constexpr std::ptrdiff_t m_PostProcessingVolumes = 0x128; // C_NetworkUtlVectorBase<CHandle<C_PostProcessingVolume>>
                constexpr std::ptrdiff_t m_flOldPlayerZ = 0x140; // float32
                constexpr std::ptrdiff_t m_flOldPlayerViewOffsetZ = 0x144; // float32
                constexpr std::ptrdiff_t m_CurrentFog = 0x148; // fogparams_t
                constexpr std::ptrdiff_t m_hOldFogController = 0x1B0; // CHandle<C_FogController>
                constexpr std::ptrdiff_t m_bOverrideFogColor = 0x1B4; // bool[5]
                constexpr std::ptrdiff_t m_OverrideFogColor = 0x1B9; // Color[5]
                constexpr std::ptrdiff_t m_bOverrideFogStartEnd = 0x1CD; // bool[5]
                constexpr std::ptrdiff_t m_fOverrideFogStart = 0x1D4; // float32[5]
                constexpr std::ptrdiff_t m_fOverrideFogEnd = 0x1E8; // float32[5]
                constexpr std::ptrdiff_t m_hActivePostProcessingVolume = 0x1FC; // CHandle<C_PostProcessingVolume>
                constexpr std::ptrdiff_t m_angDemoViewAngles = 0x200; // QAngle
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Timeline {
                constexpr std::ptrdiff_t m_TimelineEvents = 0xD8; // CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
                constexpr std::ptrdiff_t m_bWaitForChildOutflows = 0xF0; // bool
                constexpr std::ptrdiff_t m_OnFinished = 0xF8; // CPulse_ResumePoint
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
            namespace C_BaseCSGrenade {
                constexpr std::ptrdiff_t m_bClientPredictDelete = 0x1CE0; // bool
                constexpr std::ptrdiff_t m_bRedraw = 0x1CE1; // bool
                constexpr std::ptrdiff_t m_bIsHeldByPlayer = 0x1CE2; // bool
                constexpr std::ptrdiff_t m_bPinPulled = 0x1CE3; // bool
                constexpr std::ptrdiff_t m_bJumpThrow = 0x1CE4; // bool
                constexpr std::ptrdiff_t m_bThrowAnimating = 0x1CE5; // bool
                constexpr std::ptrdiff_t m_fThrowTime = 0x1CE8; // GameTime_t
                constexpr std::ptrdiff_t m_flThrowStrength = 0x1CF0; // float32
                constexpr std::ptrdiff_t m_fDropTime = 0x1D68; // GameTime_t
                constexpr std::ptrdiff_t m_fPinPullTime = 0x1D6C; // GameTime_t
                constexpr std::ptrdiff_t m_bJustPulledPin = 0x1D70; // bool
                constexpr std::ptrdiff_t m_nNextHoldTick = 0x1D74; // GameTick_t
                constexpr std::ptrdiff_t m_flNextHoldFrac = 0x1D78; // float32
                constexpr std::ptrdiff_t m_hSwitchToWeaponAfterThrow = 0x1D7C; // CHandle<C_CSWeaponBase>
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterAttributeInt {
                constexpr std::ptrdiff_t m_sAttributeName = 0x638; // CUtlSymbolLarge
            }
            // Parent: C_BaseEntity
            // Field count: 12
            namespace CPointTemplate {
                constexpr std::ptrdiff_t m_iszWorldName = 0x600; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSource2EntityLumpName = 0x608; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszEntityFilterName = 0x610; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flTimeoutInterval = 0x618; // float32
                constexpr std::ptrdiff_t m_bAsynchronouslySpawnEntities = 0x61C; // bool
                constexpr std::ptrdiff_t m_clientOnlyEntityBehavior = 0x620; // PointTemplateClientOnlyEntityBehavior_t
                constexpr std::ptrdiff_t m_ownerSpawnGroupType = 0x624; // PointTemplateOwnerSpawnGroupType_t
                constexpr std::ptrdiff_t m_createdSpawnGroupHandles = 0x628; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_SpawnedEntityHandles = 0x640; // CUtlVector<CEntityHandle>
                constexpr std::ptrdiff_t m_ScriptSpawnCallback = 0x658; // HSCRIPT
                constexpr std::ptrdiff_t m_ScriptCallbackScope = 0x660; // HSCRIPT
                constexpr std::ptrdiff_t m_OnEntitySpawned = 0x668; // CEntityOutputTemplate<CUtlVector<CEntityHandle>>
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_FlashlightServices {
            }
            // Parent: CBasePlayerController
            // Field count: 68
            namespace CCSPlayerController {
                constexpr std::ptrdiff_t m_pInGameMoneyServices = 0x810; // CCSPlayerController_InGameMoneyServices*
                constexpr std::ptrdiff_t m_pInventoryServices = 0x818; // CCSPlayerController_InventoryServices*
                constexpr std::ptrdiff_t m_pActionTrackingServices = 0x820; // CCSPlayerController_ActionTrackingServices*
                constexpr std::ptrdiff_t m_pDamageServices = 0x828; // CCSPlayerController_DamageServices*
                constexpr std::ptrdiff_t m_iPing = 0x830; // uint32
                constexpr std::ptrdiff_t m_bHasCommunicationAbuseMute = 0x834; // bool
                constexpr std::ptrdiff_t m_uiCommunicationMuteFlags = 0x838; // uint32
                constexpr std::ptrdiff_t m_szCrosshairCodes = 0x840; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iPendingTeamNum = 0x848; // uint8
                constexpr std::ptrdiff_t m_flForceTeamTime = 0x84C; // GameTime_t
                constexpr std::ptrdiff_t m_iCompTeammateColor = 0x850; // int32
                constexpr std::ptrdiff_t m_bEverPlayedOnTeam = 0x854; // bool
                constexpr std::ptrdiff_t m_flPreviousForceJoinTeamTime = 0x858; // GameTime_t
                constexpr std::ptrdiff_t m_szClan = 0x860; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_sSanitizedPlayerName = 0x868; // CUtlString
                constexpr std::ptrdiff_t m_iCoachingTeam = 0x870; // int32
                constexpr std::ptrdiff_t m_nPlayerDominated = 0x878; // uint64
                constexpr std::ptrdiff_t m_nPlayerDominatingMe = 0x880; // uint64
                constexpr std::ptrdiff_t m_iCompetitiveRanking = 0x888; // int32
                constexpr std::ptrdiff_t m_iCompetitiveWins = 0x88C; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankType = 0x890; // int8
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Win = 0x894; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Loss = 0x898; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Tie = 0x89C; // int32
                constexpr std::ptrdiff_t m_nEndMatchNextMapVote = 0x8A0; // int32
                constexpr std::ptrdiff_t m_unActiveQuestId = 0x8A4; // uint16
                constexpr std::ptrdiff_t m_rtActiveMissionPeriod = 0x8A8; // uint32
                constexpr std::ptrdiff_t m_nQuestProgressReason = 0x8AC; // QuestProgress::Reason
                constexpr std::ptrdiff_t m_unPlayerTvControlFlags = 0x8B0; // uint32
                constexpr std::ptrdiff_t m_iDraftIndex = 0x8E0; // int32
                constexpr std::ptrdiff_t m_msQueuedModeDisconnectionTimestamp = 0x8E4; // uint32
                constexpr std::ptrdiff_t m_uiAbandonRecordedReason = 0x8E8; // uint32
                constexpr std::ptrdiff_t m_eNetworkDisconnectionReason = 0x8EC; // uint32
                constexpr std::ptrdiff_t m_bCannotBeKicked = 0x8F0; // bool
                constexpr std::ptrdiff_t m_bEverFullyConnected = 0x8F1; // bool
                constexpr std::ptrdiff_t m_bAbandonAllowsSurrender = 0x8F2; // bool
                constexpr std::ptrdiff_t m_bAbandonOffersInstantSurrender = 0x8F3; // bool
                constexpr std::ptrdiff_t m_bDisconnection1MinWarningPrinted = 0x8F4; // bool
                constexpr std::ptrdiff_t m_bScoreReported = 0x8F5; // bool
                constexpr std::ptrdiff_t m_nDisconnectionTick = 0x8F8; // int32
                constexpr std::ptrdiff_t m_bControllingBot = 0x908; // bool
                constexpr std::ptrdiff_t m_bHasControlledBotThisRound = 0x909; // bool
                constexpr std::ptrdiff_t m_bHasBeenControlledByPlayerThisRound = 0x90A; // bool
                constexpr std::ptrdiff_t m_nBotsControlledThisRound = 0x90C; // int32
                constexpr std::ptrdiff_t m_bCanControlObservedBot = 0x910; // bool
                constexpr std::ptrdiff_t m_hPlayerPawn = 0x914; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_hObserverPawn = 0x918; // CHandle<C_CSObserverPawn>
                constexpr std::ptrdiff_t m_bPawnIsAlive = 0x91C; // bool
                constexpr std::ptrdiff_t m_iPawnHealth = 0x920; // uint32
                constexpr std::ptrdiff_t m_iPawnArmor = 0x924; // int32
                constexpr std::ptrdiff_t m_bPawnHasDefuser = 0x928; // bool
                constexpr std::ptrdiff_t m_bPawnHasHelmet = 0x929; // bool
                constexpr std::ptrdiff_t m_nPawnCharacterDefIndex = 0x92A; // uint16
                constexpr std::ptrdiff_t m_iPawnLifetimeStart = 0x92C; // int32
                constexpr std::ptrdiff_t m_iPawnLifetimeEnd = 0x930; // int32
                constexpr std::ptrdiff_t m_iPawnBotDifficulty = 0x934; // int32
                constexpr std::ptrdiff_t m_hOriginalControllerOfCurrentPawn = 0x938; // CHandle<CCSPlayerController>
                constexpr std::ptrdiff_t m_iScore = 0x93C; // int32
                constexpr std::ptrdiff_t m_recentKillQueue = 0x940; // uint8[8]
                constexpr std::ptrdiff_t m_nFirstKill = 0x948; // uint8
                constexpr std::ptrdiff_t m_nKillCount = 0x949; // uint8
                constexpr std::ptrdiff_t m_bMvpNoMusic = 0x94A; // bool
                constexpr std::ptrdiff_t m_eMvpReason = 0x94C; // int32
                constexpr std::ptrdiff_t m_iMusicKitID = 0x950; // int32
                constexpr std::ptrdiff_t m_iMusicKitMVPs = 0x954; // int32
                constexpr std::ptrdiff_t m_iMVPs = 0x958; // int32
                constexpr std::ptrdiff_t m_bIsPlayerNameDirty = 0x95C; // bool
                constexpr std::ptrdiff_t m_bFireBulletsSeedSynchronized = 0x95D; // bool
            }
            // Parent: C_CSGO_TeamIntroCharacterPosition
            // Field count: 0
            namespace C_CSGO_TeamIntroCounterTerroristPosition {
            }
            // Parent: CBaseAnimGraph
            // Field count: 4
            namespace C_CSGO_PreviewModel {
                constexpr std::ptrdiff_t m_defaultAnim = 0x1180; // CUtlString
                constexpr std::ptrdiff_t m_nDefaultAnimLoopMode = 0x1188; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_flInitialModelScale = 0x118C; // float32
                constexpr std::ptrdiff_t m_sInitialWeaponState = 0x1190; // CUtlString
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
            namespace C_SoundEventAABBEntity {
                constexpr std::ptrdiff_t m_vMins = 0x6C0; // Vector
                constexpr std::ptrdiff_t m_vMaxs = 0x6CC; // Vector
            }
            // Parent: CPlayer_MovementServices_Humanoid
            // Field count: 49
            namespace CCSPlayer_MovementServices {
                constexpr std::ptrdiff_t m_AnimationState = 0x310; // CCSPlayerAnimationState
                constexpr std::ptrdiff_t m_bUsingGroundTopologyOffset = 0x3F0; // bool
                constexpr std::ptrdiff_t m_flUsingGroundTopologyOffsetTransitionSmoothing = 0x3F4; // float32
                constexpr std::ptrdiff_t m_vecLadderNormal = 0x3F8; // Vector
                constexpr std::ptrdiff_t m_nLadderSurfacePropIndex = 0x404; // int32
                constexpr std::ptrdiff_t m_bDucked = 0x408; // bool
                constexpr std::ptrdiff_t m_flDuckAmount = 0x40C; // float32
                constexpr std::ptrdiff_t m_flDuckSpeed = 0x410; // float32
                constexpr std::ptrdiff_t m_bDuckOverride = 0x414; // bool
                constexpr std::ptrdiff_t m_bDesiresDuck = 0x415; // bool
                constexpr std::ptrdiff_t m_bDucking = 0x416; // bool
                constexpr std::ptrdiff_t m_flDuckRootOffset = 0x418; // float32
                constexpr std::ptrdiff_t m_flDuckViewOffset = 0x41C; // float32
                constexpr std::ptrdiff_t m_flLastDuckTime = 0x420; // float32
                constexpr std::ptrdiff_t m_flBombPlantViewOffset = 0x424; // float32
                constexpr std::ptrdiff_t m_vecLastPositionAtFullCrouchSpeed = 0x430; // Vector2D
                constexpr std::ptrdiff_t m_duckUntilOnGround = 0x438; // bool
                constexpr std::ptrdiff_t m_bHasWalkMovedSinceLastJump = 0x439; // bool
                constexpr std::ptrdiff_t m_bInStuckTest = 0x43A; // bool
                constexpr std::ptrdiff_t m_nTraceCount = 0x648; // int32
                constexpr std::ptrdiff_t m_StuckLast = 0x64C; // int32
                constexpr std::ptrdiff_t m_bSpeedCropped = 0x650; // bool
                constexpr std::ptrdiff_t m_nOldWaterLevel = 0x654; // int32
                constexpr std::ptrdiff_t m_flWaterEntryTime = 0x658; // float32
                constexpr std::ptrdiff_t m_vecForward = 0x65C; // Vector
                constexpr std::ptrdiff_t m_vecLeft = 0x668; // Vector
                constexpr std::ptrdiff_t m_vecUp = 0x674; // Vector
                constexpr std::ptrdiff_t m_nGameCodeHasMovedPlayerAfterCommand = 0x680; // int32
                constexpr std::ptrdiff_t m_fStashGrenadeParameterWhen = 0x684; // GameTime_t
                constexpr std::ptrdiff_t m_bUseFrictionStashedSpeed = 0x688; // bool
                constexpr std::ptrdiff_t m_flUseFrictionStashedSpeedUntilFrac = 0x68C; // float32
                constexpr std::ptrdiff_t m_flFrictionStashedSpeed = 0x690; // float32
                constexpr std::ptrdiff_t m_flStamina = 0x694; // float32
                constexpr std::ptrdiff_t m_flHeightAtJumpStart = 0x698; // float32
                constexpr std::ptrdiff_t m_flMaxJumpHeightThisJump = 0x69C; // float32
                constexpr std::ptrdiff_t m_flMaxJumpHeightLastJump = 0x6A0; // float32
                constexpr std::ptrdiff_t m_flStaminaAtJumpStart = 0x6A4; // float32
                constexpr std::ptrdiff_t m_flVelMulAtJumpStart = 0x6A8; // float32
                constexpr std::ptrdiff_t m_flAccumulatedJumpError = 0x6AC; // float32
                constexpr std::ptrdiff_t m_LegacyJump = 0x6B0; // CCSPlayerLegacyJump
                constexpr std::ptrdiff_t m_ModernJump = 0x6C8; // CCSPlayerModernJump
                constexpr std::ptrdiff_t m_nLastJumpTick = 0x700; // GameTick_t
                constexpr std::ptrdiff_t m_flLastJumpFrac = 0x704; // float32
                constexpr std::ptrdiff_t m_flLastJumpVelocityZ = 0x708; // float32
                constexpr std::ptrdiff_t m_bJumpApexPending = 0x70C; // bool
                constexpr std::ptrdiff_t m_flTicksSinceLastSurfingDetected = 0x710; // float32
                constexpr std::ptrdiff_t m_bWasSurfing = 0x714; // bool
                constexpr std::ptrdiff_t m_vecWalkWishVel = 0x7A4; // Vector2D
                constexpr std::ptrdiff_t m_bHasEverProcessedCommand = 0xFD0; // bool
            }
            // Parent: None
            // Field count: 5
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
            namespace C_WeaponBaseItem {
                constexpr std::ptrdiff_t m_bSequenceInProgress = 0x1CE0; // bool
                constexpr std::ptrdiff_t m_bRedraw = 0x1CE1; // bool
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            namespace CWaterSplasher {
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            namespace C_FuncBrush {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PhysicsRagdollPose_t {
                constexpr std::ptrdiff_t m_Transforms = 0x8; // C_NetworkUtlVectorBase<CTransform>
                constexpr std::ptrdiff_t m_hOwner = 0x20; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bSetFromDebugHistory = 0x24; // bool
            }
            // Parent: CEntityComponent
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
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
            namespace C_WeaponCZ75a {
                constexpr std::ptrdiff_t m_bMagazineRemoved = 0x1D10; // bool
            }
            // Parent: None
            // Field count: 0
            namespace CLightEntityAPI {
            }
            // Parent: None
            // Field count: 7
            namespace C_DynamicLight {
                constexpr std::ptrdiff_t m_Flags = 0xFB0; // uint8
                constexpr std::ptrdiff_t m_LightStyle = 0xFB1; // uint8
                constexpr std::ptrdiff_t m_Radius = 0xFB4; // float32
                constexpr std::ptrdiff_t m_Exponent = 0xFB8; // int32
                constexpr std::ptrdiff_t m_InnerAngle = 0xFBC; // float32
                constexpr std::ptrdiff_t m_OuterAngle = 0xFC0; // float32
                constexpr std::ptrdiff_t m_SpotRadius = 0xFC4; // float32
            }
            // Parent: None
            // Field count: 28
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCS2PawnGraphController {
                constexpr std::ptrdiff_t m_bIsDefusing = 0x2A0; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_moveType = 0x2B8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_moveDirectionID = 0x2D0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_flMoveSpeedX = 0x2E8; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flMoveSpeedY = 0x300; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flMoveSpeedHorizontal = 0x318; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flPreviousMoveSpeedHorizontal = 0x330; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flCrouchAmount = 0x348; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_bIsWalking = 0x360; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_flWeaponDropAmount = 0x378; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_groundAction = 0x390; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_groundActionDirectionID = 0x3A8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_flGroundTurnAngleOrVelocity = 0x3C0; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flLadderCycle = 0x3D8; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flLadderYaw = 0x3F0; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flLadderYawBackwards = 0x408; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_airAction = 0x420; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_flAirHeightAboveGround = 0x438; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_leftFootTarget = 0x450; // CAnimGraph2ParamOptionalRef<CNmTarget>
                constexpr std::ptrdiff_t m_rightFootTarget = 0x468; // CAnimGraph2ParamOptionalRef<CNmTarget>
                constexpr std::ptrdiff_t m_flFlashedAmount = 0x480; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flAimPitchAngle = 0x498; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flAimYawAngle = 0x4B0; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flinchHead = 0x4C8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_flinchHeadRestart = 0x4E0; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_flinchBody = 0x4F8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_flinchBodyRestart = 0x510; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_flinchIsOnFire = 0x528; // CAnimGraph2ParamOptionalRef<bool>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace EngineCountdownTimer {
                constexpr std::ptrdiff_t m_duration = 0x8; // float32
                constexpr std::ptrdiff_t m_timestamp = 0xC; // float32
                constexpr std::ptrdiff_t m_timescale = 0x10; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CBaseModelEntityAPI {
            }
            // Parent: C_SoundEventEntity
            // Field count: 1
            namespace C_SoundEventSphereEntity {
                constexpr std::ptrdiff_t m_flRadius = 0x6C0; // float32
            }
            // Parent: CPlayerControllerComponent
            // Field count: 2
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
            namespace C_Inferno {
                constexpr std::ptrdiff_t m_nfxFireDamageEffect = 0xFF0; // ParticleIndex_t
                constexpr std::ptrdiff_t m_hInfernoPointsSnapshot = 0xFF8; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_hInfernoFillerPointsSnapshot = 0x1000; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_hInfernoOutlinePointsSnapshot = 0x1008; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_hInfernoClimbingOutlinePointsSnapshot = 0x1010; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_hInfernoDecalsSnapshot = 0x1018; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_firePositions = 0x1020; // VectorWS[64]
                constexpr std::ptrdiff_t m_fireParentPositions = 0x1320; // VectorWS[64]
                constexpr std::ptrdiff_t m_bFireIsBurning = 0x1620; // bool[64]
                constexpr std::ptrdiff_t m_BurnNormal = 0x1660; // Vector[64]
                constexpr std::ptrdiff_t m_fireCount = 0x1960; // int32
                constexpr std::ptrdiff_t m_nInfernoType = 0x1964; // int32
                constexpr std::ptrdiff_t m_nFireLifetime = 0x1968; // float32
                constexpr std::ptrdiff_t m_bInPostEffectTime = 0x196C; // bool
                constexpr std::ptrdiff_t m_lastFireCount = 0x1970; // int32
                constexpr std::ptrdiff_t m_nFireEffectTickBegin = 0x1974; // int32
                constexpr std::ptrdiff_t m_drawableCount = 0x8580; // int32
                constexpr std::ptrdiff_t m_blosCheck = 0x8584; // bool
                constexpr std::ptrdiff_t m_nlosperiod = 0x8588; // int32
                constexpr std::ptrdiff_t m_maxFireHalfWidth = 0x858C; // float32
                constexpr std::ptrdiff_t m_maxFireHeight = 0x8590; // float32
                constexpr std::ptrdiff_t m_minBounds = 0x8594; // VectorWS
                constexpr std::ptrdiff_t m_maxBounds = 0x85A0; // VectorWS
                constexpr std::ptrdiff_t m_flLastGrassBurnThink = 0x85AC; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CFilterLOS {
            }
            // Parent: C_BaseEntity
            // Field count: 7
            namespace CPointOrient {
                constexpr std::ptrdiff_t m_iszSpawnTargetName = 0x600; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hTarget = 0x608; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bActive = 0x60C; // bool
                constexpr std::ptrdiff_t m_nGoalDirection = 0x610; // PointOrientGoalDirectionType_t
                constexpr std::ptrdiff_t m_nConstraint = 0x614; // PointOrientConstraint_t
                constexpr std::ptrdiff_t m_flMaxTurnRate = 0x618; // float32
                constexpr std::ptrdiff_t m_flLastGameTime = 0x61C; // GameTime_t
            }
            // Parent: C_BaseEntity
            // Field count: 1
            namespace C_GlobalLight {
                constexpr std::ptrdiff_t m_WindClothForceHandle = 0xAC0; // uint16
            }
            // Parent: C_BaseEntity
            // Field count: 1
            namespace C_EnvWindClientside {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x600; // C_EnvWindShared
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace sky3dparams_t {
                constexpr std::ptrdiff_t scale = 0x8; // int16
                constexpr std::ptrdiff_t origin = 0xC; // VectorWS
                constexpr std::ptrdiff_t bClip3DSkyBoxNearToWorldFar = 0x18; // bool
                constexpr std::ptrdiff_t flClip3DSkyBoxNearToWorldFarOffset = 0x1C; // float32
                constexpr std::ptrdiff_t fog = 0x20; // fogparams_t
                constexpr std::ptrdiff_t m_nWorldGroupID = 0x88; // WorldGroupId_t
            }
            // Parent: C_BaseCSGrenadeProjectile
            // Field count: 0
            namespace C_FlashbangProjectile {
            }
            // Parent: C_SoundEventEntity
            // Field count: 5
            namespace C_SoundEventConeEntity {
                constexpr std::ptrdiff_t m_flEmitterAngle = 0x6C0; // float32
                constexpr std::ptrdiff_t m_flSweetSpotAngle = 0x6C4; // float32
                constexpr std::ptrdiff_t m_flAttenMin = 0x6C8; // float32
                constexpr std::ptrdiff_t m_flAttenMax = 0x6CC; // float32
                constexpr std::ptrdiff_t m_iszParameterName = 0x6D0; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDestructiblePartsComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x0; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_vecDamageTakenByHitGroup = 0x48; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_hOwner = 0x60; // CHandle<C_BaseModelEntity>
                constexpr std::ptrdiff_t m_pAnimGraphDestructibleGraphController = 0x68; // CAnimGraphControllerPtr
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponP90 {
            }
            // Parent: C_BaseEntity
            // Field count: 1
            namespace C_EnvWind {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x600; // C_EnvWindShared
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Field count: 0
            namespace C_CSGO_TerroristTeamIntroCamera {
            }
            // Parent: None
            // Field count: 0
            namespace C_CSPlayerPawnBase_API {
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
            // MGetKV3ClassDefaults
            namespace CBodyComponentBaseAnimGraph {
                constexpr std::ptrdiff_t m_animationController = 0x510; // CBaseAnimGraphController
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
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCustomFGDMetadata
            namespace CPulseCell_BaseYieldingInflow {
                constexpr std::ptrdiff_t m_BaseFlow_OnAfterCancel = 0x48; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_BaseFlow_WhileActive = 0x90; // CPulse_ResumePoint
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
            namespace C_TriggerBuoyancy {
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0x1098; // CBuoyancyHelper
                constexpr std::ptrdiff_t m_flFluidDensity = 0x11B0; // float32
            }
            // Parent: CPlayer_MovementServices
            // Field count: 6
            namespace CPlayer_MovementServices_Humanoid {
                constexpr std::ptrdiff_t m_flStepSoundTime = 0x258; // float32
                constexpr std::ptrdiff_t m_flFallVelocity = 0x25C; // float32
                constexpr std::ptrdiff_t m_groundNormal = 0x260; // Vector
                constexpr std::ptrdiff_t m_flSurfaceFriction = 0x26C; // float32
                constexpr std::ptrdiff_t m_surfaceProps = 0x270; // CUtlStringToken
                constexpr std::ptrdiff_t m_nStepside = 0x280; // int32
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
                constexpr std::ptrdiff_t m_flTouchDelta = 0x12F0; // GameTime_t
                constexpr std::ptrdiff_t m_fDeathTime = 0x12F4; // GameTime_t
                constexpr std::ptrdiff_t m_vecDamagePosition = 0x12F8; // VectorWS
                constexpr std::ptrdiff_t m_vecDamageDirection = 0x1304; // Vector
                constexpr std::ptrdiff_t m_nDamageType = 0x1310; // DamageTypes_t
            }
            // Parent: None
            // Field count: 1
            namespace C_BaseDoor {
                constexpr std::ptrdiff_t m_bIsUsable = 0xFB0; // bool
            }
            // Parent: None
            // Field count: 5
            namespace CSMatchStats_t {
                constexpr std::ptrdiff_t m_iEnemy5Ks = 0x68; // int32
                constexpr std::ptrdiff_t m_iEnemy4Ks = 0x6C; // int32
                constexpr std::ptrdiff_t m_iEnemy3Ks = 0x70; // int32
                constexpr std::ptrdiff_t m_iEnemyKnifeKills = 0x74; // int32
                constexpr std::ptrdiff_t m_iEnemyTaserKills = 0x78; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
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
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelState {
                constexpr std::ptrdiff_t m_hModel = 0xA0; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_ModelName = 0xA8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pVPhysicsAggregate = 0xE0; // IPhysAggregateInstance*
                constexpr std::ptrdiff_t m_flRootBoneOffset_x = 0xE8; // float32
                constexpr std::ptrdiff_t m_flRootBoneOffset_y = 0xEC; // float32
                constexpr std::ptrdiff_t m_flRootBoneOffset_z = 0xF0; // float32
                constexpr std::ptrdiff_t m_nRootBoneOffsetResetSerialNumber = 0xF4; // uint8
                constexpr std::ptrdiff_t m_bClientClothCreationSuppressed = 0x110; // bool
                constexpr std::ptrdiff_t m_nAnimStateNoInterpSerialNumber = 0x200; // uint8
                constexpr std::ptrdiff_t m_MeshGroupMask = 0x208; // uint64
                constexpr std::ptrdiff_t m_nBodyGroupChoices = 0x258; // C_NetworkUtlVectorBase<int32>
                constexpr std::ptrdiff_t m_nIdealMotionType = 0x2A2; // int8
                constexpr std::ptrdiff_t m_nForceLOD = 0x2A3; // int8
                constexpr std::ptrdiff_t m_nClothUpdateFlags = 0x2A4; // int8
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
            namespace C_CSWeaponBaseGun {
                constexpr std::ptrdiff_t m_zoomLevel = 0x1CE0; // int32
                constexpr std::ptrdiff_t m_iBurstShotsRemaining = 0x1CE4; // int32
                constexpr std::ptrdiff_t m_iSilencerBodygroup = 0x1CE8; // int32
                constexpr std::ptrdiff_t m_silencedModelIndex = 0x1CF8; // int32
                constexpr std::ptrdiff_t m_inPrecache = 0x1CFC; // bool
                constexpr std::ptrdiff_t m_bNeedsBoltAction = 0x1CFD; // bool
                constexpr std::ptrdiff_t m_nRevolverCylinderIdx = 0x1D00; // int32
            }
            // Parent: C_GameRulesProxy
            // Field count: 1
            namespace C_CSGameRulesProxy {
                constexpr std::ptrdiff_t m_pGameRules = 0x600; // C_CSGameRules*
            }
            // Parent: None
            // Field count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
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
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterMassGreater {
                constexpr std::ptrdiff_t m_fFilterMass = 0x638; // float32
            }
            // Parent: None
            // Field count: 1
            namespace C_ShatterGlassShardPhysics {
                constexpr std::ptrdiff_t m_ShardDesc = 0xFB8; // shard_model_desc_t
            }
            // Parent: None
            // Field count: 13
            namespace C_EntityDissolve {
                constexpr std::ptrdiff_t m_flStartTime = 0xFB8; // GameTime_t
                constexpr std::ptrdiff_t m_flFadeInStart = 0xFBC; // float32
                constexpr std::ptrdiff_t m_flFadeInLength = 0xFC0; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelStart = 0xFC4; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelLength = 0xFC8; // float32
                constexpr std::ptrdiff_t m_flFadeOutStart = 0xFCC; // float32
                constexpr std::ptrdiff_t m_flFadeOutLength = 0xFD0; // float32
                constexpr std::ptrdiff_t m_flNextSparkTime = 0xFD4; // GameTime_t
                constexpr std::ptrdiff_t m_nDissolveType = 0xFD8; // EntityDissolveType_t
                constexpr std::ptrdiff_t m_vDissolverOrigin = 0xFDC; // VectorWS
                constexpr std::ptrdiff_t m_nMagnitude = 0xFE8; // uint32
                constexpr std::ptrdiff_t m_bCoreExplode = 0xFEC; // bool
                constexpr std::ptrdiff_t m_bLinkedToServerEnt = 0xFED; // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_SoundOpvarSetOBBEntity {
            }
            // Parent: None
            // Field count: 1
            namespace CCSGameModeRules_ArmsRace {
                constexpr std::ptrdiff_t m_WeaponSequence = 0x30; // C_NetworkUtlVectorBase<CUtlString>
            }
            // Parent: C_FuncBrush
            // Field count: 8
            namespace C_FuncMonitor {
                constexpr std::ptrdiff_t m_targetCamera = 0xFB0; // CUtlString
                constexpr std::ptrdiff_t m_nResolutionEnum = 0xFB8; // int32
                constexpr std::ptrdiff_t m_bRenderShadows = 0xFBC; // bool
                constexpr std::ptrdiff_t m_bUseUniqueColorTarget = 0xFBD; // bool
                constexpr std::ptrdiff_t m_brushModelName = 0xFC0; // CUtlString
                constexpr std::ptrdiff_t m_hTargetCamera = 0xFC8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bEnabled = 0xFCC; // bool
                constexpr std::ptrdiff_t m_bDraw3DSkybox = 0xFCD; // bool
            }
            // Parent: None
            // Field count: 14
            namespace C_ClientRagdoll {
                constexpr std::ptrdiff_t m_bFadeOut = 0x1180; // bool
                constexpr std::ptrdiff_t m_bImportant = 0x1181; // bool
                constexpr std::ptrdiff_t m_flEffectTime = 0x1184; // GameTime_t
                constexpr std::ptrdiff_t m_gibDespawnTime = 0x1188; // GameTime_t
                constexpr std::ptrdiff_t m_iCurrentFriction = 0x118C; // int32
                constexpr std::ptrdiff_t m_iMinFriction = 0x1190; // int32
                constexpr std::ptrdiff_t m_iMaxFriction = 0x1194; // int32
                constexpr std::ptrdiff_t m_iFrictionAnimState = 0x1198; // int32
                constexpr std::ptrdiff_t m_bReleaseRagdoll = 0x119C; // bool
                constexpr std::ptrdiff_t m_iEyeAttachment = 0x119D; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_bFadingOut = 0x119E; // bool
                constexpr std::ptrdiff_t m_flScaleEnd = 0x11A0; // float32[10]
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0x11C8; // GameTime_t[10]
                constexpr std::ptrdiff_t m_flScaleTimeEnd = 0x11F0; // GameTime_t[10]
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
            // MGetKV3ClassDefaults
            namespace CBodyComponentSkeletonInstance {
                constexpr std::ptrdiff_t m_skeletonInstance = 0x80; // CSkeletonInstance
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace C_CS2WeaponModuleBase {
            }
            // Parent: C_BaseEntity
            // Field count: 8
            namespace C_CSGO_TeamPreviewCharacterPosition {
                constexpr std::ptrdiff_t m_nVariant = 0x600; // int32
                constexpr std::ptrdiff_t m_nRandom = 0x604; // int32
                constexpr std::ptrdiff_t m_nOrdinal = 0x608; // int32
                constexpr std::ptrdiff_t m_sWeaponName = 0x610; // CUtlString
                constexpr std::ptrdiff_t m_xuid = 0x618; // uint64
                constexpr std::ptrdiff_t m_agentItem = 0x620; // C_EconItemView
                constexpr std::ptrdiff_t m_glovesItem = 0xA90; // C_EconItemView
                constexpr std::ptrdiff_t m_weaponItem = 0xF00; // C_EconItemView
            }
            // Parent: C_BaseCSGrenadeProjectile
            // Field count: 10
            namespace C_SmokeGrenadeProjectile {
                constexpr std::ptrdiff_t m_nSmokeEffectTickBegin = 0x1278; // int32
                constexpr std::ptrdiff_t m_bDidSmokeEffect = 0x127C; // bool
                constexpr std::ptrdiff_t m_nRandomSeed = 0x1280; // int32
                constexpr std::ptrdiff_t m_vSmokeColor = 0x1284; // Vector
                constexpr std::ptrdiff_t m_vSmokeDetonationPos = 0x1290; // VectorWS
                constexpr std::ptrdiff_t m_VoxelFrameData = 0x12A0; // C_NetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_nVoxelFrameDataSize = 0x12B8; // int32
                constexpr std::ptrdiff_t m_nVoxelUpdate = 0x12BC; // int32
                constexpr std::ptrdiff_t m_bSmokeVolumeDataReceived = 0x12C0; // bool
                constexpr std::ptrdiff_t m_bSmokeEffectSpawned = 0x12C1; // bool
            }
            // Parent: CEntityComponent
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CScriptComponent {
                constexpr std::ptrdiff_t m_scriptClassName = 0x30; // CUtlSymbolLarge
            }
            // Parent: CPlayerPawnComponent
            // Field count: 1
            namespace CCSPlayer_BuyServices {
                constexpr std::ptrdiff_t m_vecSellbackPurchaseEntries = 0x48; // C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace C_PortraitWorldCallbackHandler {
            }
            // Parent: C_BreakableProp
            // Field count: 24
            namespace C_DynamicProp {
                constexpr std::ptrdiff_t m_bUseHitboxesForRenderBox = 0x12F0; // bool
                constexpr std::ptrdiff_t m_bUseAnimGraph = 0x12F1; // bool
                constexpr std::ptrdiff_t m_pOutputAnimBegun = 0x12F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOutputAnimOver = 0x1310; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOutputAnimLoopCycleOver = 0x1328; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAnimReachedStart = 0x1340; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAnimReachedEnd = 0x1358; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iszIdleAnim = 0x1370; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nIdleAnimLoopMode = 0x1378; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_bRandomizeCycle = 0x137C; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0x137D; // bool
                constexpr std::ptrdiff_t m_bFiredStartEndOutput = 0x137E; // bool
                constexpr std::ptrdiff_t m_bForceNpcExclude = 0x137F; // bool
                constexpr std::ptrdiff_t m_bCreateMovableSurfaceGraph = 0x1380; // bool
                constexpr std::ptrdiff_t m_bCreateNonSolid = 0x1381; // bool
                constexpr std::ptrdiff_t m_bIsOverrideProp = 0x1382; // bool
                constexpr std::ptrdiff_t m_iInitialGlowState = 0x1384; // int32
                constexpr std::ptrdiff_t m_nGlowRange = 0x1388; // int32
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0x138C; // int32
                constexpr std::ptrdiff_t m_glowColor = 0x1390; // Color
                constexpr std::ptrdiff_t m_nGlowTeam = 0x1394; // int32
                constexpr std::ptrdiff_t m_iCachedFrameCount = 0x1398; // int32
                constexpr std::ptrdiff_t m_vecCachedRenderMins = 0x139C; // Vector
                constexpr std::ptrdiff_t m_vecCachedRenderMaxs = 0x13A8; // Vector
            }
            // Parent: C_Team
            // Field count: 10
            namespace C_CSTeam {
                constexpr std::ptrdiff_t m_szTeamMatchStat = 0x6B8; // char[512]
                constexpr std::ptrdiff_t m_numMapVictories = 0x8B8; // int32
                constexpr std::ptrdiff_t m_bSurrendered = 0x8BC; // bool
                constexpr std::ptrdiff_t m_scoreFirstHalf = 0x8C0; // int32
                constexpr std::ptrdiff_t m_scoreSecondHalf = 0x8C4; // int32
                constexpr std::ptrdiff_t m_scoreOvertime = 0x8C8; // int32
                constexpr std::ptrdiff_t m_szClanTeamname = 0x8CC; // char[129]
                constexpr std::ptrdiff_t m_iClanID = 0x950; // uint32
                constexpr std::ptrdiff_t m_szTeamFlagImage = 0x954; // char[8]
                constexpr std::ptrdiff_t m_szTeamLogoImage = 0x95C; // char[8]
            }
            // Parent: C_CS2HudModelBase
            // Field count: 0
            namespace C_CS2HudModelWeapon {
            }
            // Parent: C_BaseModelEntity
            // Field count: 8
            namespace C_TextureBasedAnimatable {
                constexpr std::ptrdiff_t m_bLoop = 0xFB0; // bool
                constexpr std::ptrdiff_t m_flFPS = 0xFB4; // float32
                constexpr std::ptrdiff_t m_hPositionKeys = 0xFB8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hRotationKeys = 0xFC0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_vAnimationBoundsMin = 0xFC8; // Vector
                constexpr std::ptrdiff_t m_vAnimationBoundsMax = 0xFD4; // Vector
                constexpr std::ptrdiff_t m_flStartTime = 0xFE0; // float32
                constexpr std::ptrdiff_t m_flStartFrame = 0xFE4; // float32
            }
            // Parent: C_LightDirectionalEntity
            // Field count: 0
            namespace C_LightEnvironmentEntity {
            }
            // Parent: None
            // Field count: 0
            namespace DestructiblePartDamageRequestAPI {
            }
            // Parent: None
            // Field count: 0
            namespace CLogicRelayAPI {
            }
            // Parent: C_BaseTrigger
            // Field count: 13
            namespace C_TriggerPhysics {
                constexpr std::ptrdiff_t m_gravityScale = 0x1098; // float32
                constexpr std::ptrdiff_t m_linearLimit = 0x109C; // float32
                constexpr std::ptrdiff_t m_linearDamping = 0x10A0; // float32
                constexpr std::ptrdiff_t m_angularLimit = 0x10A4; // float32
                constexpr std::ptrdiff_t m_angularDamping = 0x10A8; // float32
                constexpr std::ptrdiff_t m_linearForce = 0x10AC; // float32
                constexpr std::ptrdiff_t m_flFrequency = 0x10B0; // float32
                constexpr std::ptrdiff_t m_flDampingRatio = 0x10B4; // float32
                constexpr std::ptrdiff_t m_vecLinearForcePointAt = 0x10B8; // Vector
                constexpr std::ptrdiff_t m_bCollapseToForcePoint = 0x10C4; // bool
                constexpr std::ptrdiff_t m_vecLinearForcePointAtWorld = 0x10C8; // VectorWS
                constexpr std::ptrdiff_t m_vecLinearForceDirection = 0x10D4; // Vector
                constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0x10E0; // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_PropDoorRotating {
            }
            // Parent: C_BaseEntity
            // Field count: 2
            namespace C_HandleTest {
                constexpr std::ptrdiff_t m_Handle = 0x600; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bSendHandle = 0x604; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 8
            namespace CInfoWorldLayer {
                constexpr std::ptrdiff_t m_pOutputOnEntitiesSpawned = 0x600; // CEntityIOOutput
                constexpr std::ptrdiff_t m_worldName = 0x618; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_layerName = 0x620; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bWorldLayerVisible = 0x628; // bool
                constexpr std::ptrdiff_t m_bEntitiesSpawned = 0x629; // bool
                constexpr std::ptrdiff_t m_bCreateAsChildSpawnGroup = 0x62A; // bool
                constexpr std::ptrdiff_t m_hLayerSpawnGroup = 0x62C; // uint32
                constexpr std::ptrdiff_t m_bWorldLayerActuallyVisible = 0x630; // bool
            }
            // Parent: CBodyComponentSkeletonInstance
            // Field count: 0
            namespace CBodyComponentBaseModelEntity {
            }
            // Parent: CBaseAnimGraph
            // Field count: 1
            namespace C_Multimeter {
                constexpr std::ptrdiff_t m_hTargetC4 = 0x1180; // CHandle<C_PlantedC4>
            }
            // Parent: C_BaseModelEntity
            // Field count: 12
            namespace C_BaseTrigger {
                constexpr std::ptrdiff_t m_OnStartTouch = 0xFB0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStartTouchAll = 0xFC8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEndTouch = 0xFE0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEndTouchAll = 0xFF8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTouching = 0x1010; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTouchingEachEntity = 0x1028; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnNotTouching = 0x1040; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTouchingChanged = 0x1058; // CEntityIOOutput
                constexpr std::ptrdiff_t m_hTouchingEntities = 0x1070; // CUtlVector<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_iFilterName = 0x1088; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFilter = 0x1090; // CHandle<CBaseFilter>
                constexpr std::ptrdiff_t m_bDisabled = 0x1094; // bool
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace FilterDamageType {
                constexpr std::ptrdiff_t m_iDamageType = 0x638; // int32
            }
            // Parent: None
            // Field count: 2
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
                constexpr std::ptrdiff_t m_WakeResume = 0xD8; // CPulse_ResumePoint
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterProximity {
                constexpr std::ptrdiff_t m_flRadius = 0x638; // float32
            }
            // Parent: None
            // Field count: 20
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCS2WeaponGraphController {
                constexpr std::ptrdiff_t m_action = 0x88; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_bActionReset = 0xA0; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_flWeaponActionSpeedScale = 0xB8; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_weaponCategory = 0xD0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_weaponType = 0xE8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_weaponExtraInfo = 0x100; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_flWeaponAmmo = 0x118; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flWeaponAmmoMax = 0x130; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flWeaponAmmoReserve = 0x148; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_bWeaponIsSilenced = 0x160; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_flWeaponIronsightAmount = 0x178; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_bIsUsingLegacyModel = 0x190; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_idleVariation = 0x1A8; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_deployVariation = 0x1C0; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_attackType = 0x1D8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_attackThrowStrength = 0x1F0; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flAttackVariation = 0x208; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_inspectVariation = 0x220; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_inspectExtraInfo = 0x238; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_reloadStage = 0x250; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            }
            // Parent: None
            // Field count: 20
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
            }
            // Parent: C_BaseModelEntity
            // Field count: 26
            namespace C_ParticleSystem {
                constexpr std::ptrdiff_t m_szSnapshotFileName = 0xFB0; // char[512]
                constexpr std::ptrdiff_t m_bActive = 0x11B0; // bool
                constexpr std::ptrdiff_t m_bFrozen = 0x11B1; // bool
                constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0x11B4; // float32
                constexpr std::ptrdiff_t m_nStopType = 0x11B8; // int32
                constexpr std::ptrdiff_t m_bAnimateDuringGameplayPause = 0x11BC; // bool
                constexpr std::ptrdiff_t m_iEffectIndex = 0x11C0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_flStartTime = 0x11C8; // GameTime_t
                constexpr std::ptrdiff_t m_flPreSimTime = 0x11CC; // float32
                constexpr std::ptrdiff_t m_vServerControlPoints = 0x11D0; // Vector[4]
                constexpr std::ptrdiff_t m_iServerControlPointAssignments = 0x1200; // uint8[4]
                constexpr std::ptrdiff_t m_hControlPointEnts = 0x1204; // CHandle<C_BaseEntity>[64]
                constexpr std::ptrdiff_t m_bDataStringLocalized = 0x1304; // bool
                constexpr std::ptrdiff_t m_strDataString = 0x1308; // CUtlString
                constexpr std::ptrdiff_t m_bNoSave = 0x1310; // bool
                constexpr std::ptrdiff_t m_bNoFreeze = 0x1311; // bool
                constexpr std::ptrdiff_t m_bNoRamp = 0x1312; // bool
                constexpr std::ptrdiff_t m_bStartActive = 0x1313; // bool
                constexpr std::ptrdiff_t m_iszEffectName = 0x1318; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszControlPointNames = 0x1320; // CUtlSymbolLarge[64]
                constexpr std::ptrdiff_t m_nDataCP = 0x1520; // int32
                constexpr std::ptrdiff_t m_vecDataCPValue = 0x1524; // Vector
                constexpr std::ptrdiff_t m_nTintCP = 0x1530; // int32
                constexpr std::ptrdiff_t m_clrTint = 0x1534; // Color
                constexpr std::ptrdiff_t m_bOldActive = 0x1558; // bool
                constexpr std::ptrdiff_t m_bOldFrozen = 0x1559; // bool
            }
            // Parent: None
            // Field count: 0
            namespace CEnvSkyAPI {
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
            // Parent: C_BaseModelEntity
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
            // Field count: 70
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CLightComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x38; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_Color = 0x75; // Color
                constexpr std::ptrdiff_t m_SecondaryColor = 0x79; // Color
                constexpr std::ptrdiff_t m_flBrightness = 0x80; // float32
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x84; // float32
                constexpr std::ptrdiff_t m_flBrightnessMult = 0x88; // float32
                constexpr std::ptrdiff_t m_flRange = 0x8C; // float32
                constexpr std::ptrdiff_t m_flFalloff = 0x90; // float32
                constexpr std::ptrdiff_t m_flAttenuation0 = 0x94; // float32
                constexpr std::ptrdiff_t m_flAttenuation1 = 0x98; // float32
                constexpr std::ptrdiff_t m_flAttenuation2 = 0x9C; // float32
                constexpr std::ptrdiff_t m_flTheta = 0xA0; // float32
                constexpr std::ptrdiff_t m_flPhi = 0xA4; // float32
                constexpr std::ptrdiff_t m_hLightCookie = 0xA8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_nCascades = 0xB0; // int32
                constexpr std::ptrdiff_t m_nCastShadows = 0xB4; // int32
                constexpr std::ptrdiff_t m_nShadowWidth = 0xB8; // int32
                constexpr std::ptrdiff_t m_nShadowHeight = 0xBC; // int32
                constexpr std::ptrdiff_t m_bRenderDiffuse = 0xC0; // bool
                constexpr std::ptrdiff_t m_nRenderSpecular = 0xC4; // int32
                constexpr std::ptrdiff_t m_bRenderTransmissive = 0xC8; // bool
                constexpr std::ptrdiff_t m_flOrthoLightWidth = 0xCC; // float32
                constexpr std::ptrdiff_t m_flOrthoLightHeight = 0xD0; // float32
                constexpr std::ptrdiff_t m_nStyle = 0xD4; // int32
                constexpr std::ptrdiff_t m_Pattern = 0xD8; // CUtlString
                constexpr std::ptrdiff_t m_nCascadeRenderStaticObjects = 0xE0; // int32
                constexpr std::ptrdiff_t m_flShadowCascadeCrossFade = 0xE4; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistanceFade = 0xE8; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance0 = 0xEC; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance1 = 0xF0; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance2 = 0xF4; // float32
                constexpr std::ptrdiff_t m_flShadowCascadeDistance3 = 0xF8; // float32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution0 = 0xFC; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution1 = 0x100; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution2 = 0x104; // int32
                constexpr std::ptrdiff_t m_nShadowCascadeResolution3 = 0x108; // int32
                constexpr std::ptrdiff_t m_bUsesBakedShadowing = 0x10C; // bool
                constexpr std::ptrdiff_t m_nShadowPriority = 0x110; // int32
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x114; // int32
                constexpr std::ptrdiff_t m_nLightPathUniqueId = 0x118; // int32
                constexpr std::ptrdiff_t m_nLightMapUniqueId = 0x11C; // int32
                constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x120; // bool
                constexpr std::ptrdiff_t m_bAllowSSTGeneration = 0x121; // bool
                constexpr std::ptrdiff_t m_nDirectLight = 0x124; // int32
                constexpr std::ptrdiff_t m_nBounceLight = 0x128; // int32
                constexpr std::ptrdiff_t m_flBounceScale = 0x12C; // float32
                constexpr std::ptrdiff_t m_flFadeMinDist = 0x130; // float32
                constexpr std::ptrdiff_t m_flFadeMaxDist = 0x134; // float32
                constexpr std::ptrdiff_t m_flShadowFadeMinDist = 0x138; // float32
                constexpr std::ptrdiff_t m_flShadowFadeMaxDist = 0x13C; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0x140; // bool
                constexpr std::ptrdiff_t m_bFlicker = 0x141; // bool
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x142; // bool
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x144; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x150; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x15C; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x168; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x174; // Vector
                constexpr std::ptrdiff_t m_flPrecomputedMaxRange = 0x180; // float32
                constexpr std::ptrdiff_t m_nFogLightingMode = 0x184; // int32
                constexpr std::ptrdiff_t m_flFogContributionStength = 0x188; // float32
                constexpr std::ptrdiff_t m_flNearClipPlane = 0x18C; // float32
                constexpr std::ptrdiff_t m_SkyColor = 0x190; // Color
                constexpr std::ptrdiff_t m_flSkyIntensity = 0x194; // float32
                constexpr std::ptrdiff_t m_SkyAmbientBounce = 0x198; // Color
                constexpr std::ptrdiff_t m_bUseSecondaryColor = 0x19C; // bool
                constexpr std::ptrdiff_t m_bMixedShadows = 0x19D; // bool
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x1A0; // GameTime_t
                constexpr std::ptrdiff_t m_flCapsuleLength = 0x1A4; // float32
                constexpr std::ptrdiff_t m_flMinRoughness = 0x1A8; // float32
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
            namespace CCSPlayer_ActionTrackingServices {
                constexpr std::ptrdiff_t m_hLastWeaponBeforeC4AutoSwitch = 0x48; // CHandle<C_BasePlayerWeapon>
                constexpr std::ptrdiff_t m_bIsRescuing = 0x4C; // bool
                constexpr std::ptrdiff_t m_weaponPurchasesThisMatch = 0x50; // WeaponPurchaseTracker_t
                constexpr std::ptrdiff_t m_weaponPurchasesThisRound = 0xC0; // WeaponPurchaseTracker_t
            }
            // Parent: C_BaseEntity
            // Field count: 18
            namespace C_EnvCubemap {
                constexpr std::ptrdiff_t m_Entity_hCubemapTexture = 0x680; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_bCustomCubemapTexture = 0x688; // bool
                constexpr std::ptrdiff_t m_Entity_flInfluenceRadius = 0x68C; // float32
                constexpr std::ptrdiff_t m_Entity_vBoxProjectMins = 0x690; // Vector
                constexpr std::ptrdiff_t m_Entity_vBoxProjectMaxs = 0x69C; // Vector
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x6A8; // bool
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x6AC; // int32
                constexpr std::ptrdiff_t m_Entity_nEnvCubeMapArrayIndex = 0x6B0; // int32
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x6B4; // int32
                constexpr std::ptrdiff_t m_Entity_flEdgeFadeDist = 0x6B8; // float32
                constexpr std::ptrdiff_t m_Entity_vEdgeFadeDists = 0x6BC; // Vector
                constexpr std::ptrdiff_t m_Entity_flDiffuseScale = 0x6C8; // float32
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x6CC; // bool
                constexpr std::ptrdiff_t m_Entity_bDefaultEnvMap = 0x6CD; // bool
                constexpr std::ptrdiff_t m_Entity_bDefaultSpecEnvMap = 0x6CE; // bool
                constexpr std::ptrdiff_t m_Entity_bIndoorCubeMap = 0x6CF; // bool
                constexpr std::ptrdiff_t m_Entity_bCopyDiffuseFromDefaultCubemap = 0x6D0; // bool
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x6E0; // bool
            }
            // Parent: CPlayer_MovementServices
            // Field count: 0
            namespace CCSObserver_MovementServices {
            }
            // Parent: CEntityComponent
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
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
            // Parent: None
            // Field count: 6
            namespace C_BaseCombatCharacter {
                constexpr std::ptrdiff_t m_hMyWearables = 0x1180; // C_NetworkUtlVectorBase<CHandle<C_EconWearable>>
                constexpr std::ptrdiff_t m_leftFootAttachment = 0x1198; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_rightFootAttachment = 0x1199; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_nWaterWakeMode = 0x119C; // C_BaseCombatCharacter::WaterWakeMode_t
                constexpr std::ptrdiff_t m_flWaterWorldZ = 0x11A0; // float32
                constexpr std::ptrdiff_t m_flWaterNextTraceTime = 0x11A4; // float32
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
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
            namespace C_PointClientUIDialog {
                constexpr std::ptrdiff_t m_hActivator = 0xFE0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bStartEnabled = 0xFE4; // bool
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
            namespace C_FootstepControl {
                constexpr std::ptrdiff_t m_source = 0x1098; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_destination = 0x10A0; // CUtlSymbolLarge
            }
            // Parent: C_BaseEntity
            // Field count: 8
            namespace CCitadelSoundOpvarSetOBB {
                constexpr std::ptrdiff_t m_iszStackName = 0x618; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperatorName = 0x620; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvarName = 0x628; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vDistanceInnerMins = 0x630; // Vector
                constexpr std::ptrdiff_t m_vDistanceInnerMaxs = 0x63C; // Vector
                constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x648; // Vector
                constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x654; // Vector
                constexpr std::ptrdiff_t m_nAABBDirection = 0x660; // int32
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
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorCanvasItemSpecKV3
            namespace CPulseCell_BooleanSwitchState {
                constexpr std::ptrdiff_t m_Condition = 0xD8; // CPulseObservableExpression<bool>
                constexpr std::ptrdiff_t m_WhenTrue = 0x150; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_WhenFalse = 0x198; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 15
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
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VPhysicsCollisionAttribute_t {
                constexpr std::ptrdiff_t m_nInteractsAs = 0x8; // uint64
                constexpr std::ptrdiff_t m_nInteractsWith = 0x10; // uint64
                constexpr std::ptrdiff_t m_nInteractsExclude = 0x18; // uint64
                constexpr std::ptrdiff_t m_nEntityId = 0x20; // uint32
                constexpr std::ptrdiff_t m_nOwnerId = 0x24; // uint32
                constexpr std::ptrdiff_t m_nHierarchyId = 0x28; // uint16
                constexpr std::ptrdiff_t m_nDetailLayerMask = 0x2A; // uint16
                constexpr std::ptrdiff_t m_nDetailLayerMaskType = 0x2C; // uint8
                constexpr std::ptrdiff_t m_nTargetDetailLayer = 0x2D; // uint8
                constexpr std::ptrdiff_t m_nCollisionGroup = 0x2E; // uint8
                constexpr std::ptrdiff_t m_nCollisionFunctionMask = 0x2F; // uint8
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
            namespace C_OmniLight {
                constexpr std::ptrdiff_t m_flInnerAngle = 0x12C0; // float32
                constexpr std::ptrdiff_t m_flOuterAngle = 0x12C4; // float32
                constexpr std::ptrdiff_t m_bShowLight = 0x12C8; // bool
            }
            // Parent: None
            // Field count: 13
            namespace C_SceneEntity {
                constexpr std::ptrdiff_t m_bIsPlayingBack = 0x608; // bool
                constexpr std::ptrdiff_t m_bPaused = 0x609; // bool
                constexpr std::ptrdiff_t m_bMultiplayer = 0x60A; // bool
                constexpr std::ptrdiff_t m_bAutogenerated = 0x60B; // bool
                constexpr std::ptrdiff_t m_bAllRequirementsComplete = 0x60C; // bool
                constexpr std::ptrdiff_t m_flForceClientTime = 0x610; // float32
                constexpr std::ptrdiff_t m_nSceneStringIndex = 0x614; // uint16
                constexpr std::ptrdiff_t m_bClientOnly = 0x616; // bool
                constexpr std::ptrdiff_t m_hOwner = 0x618; // CHandle<C_BaseModelEntity>
                constexpr std::ptrdiff_t m_hActorList = 0x620; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_bWasPlaying = 0x638; // bool
                constexpr std::ptrdiff_t m_QueuedEvents = 0x648; // CUtlVector<C_SceneEntity::QueuedEvents_t>
                constexpr std::ptrdiff_t m_flCurrentTime = 0x660; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CFootstepControl_API {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_Yield {
                constexpr std::ptrdiff_t m_UnyieldResume = 0xD8; // CPulse_ResumePoint
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
                constexpr std::ptrdiff_t m_strNametagString = 0x1188; // CUtlString
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TeamPreviewCamera_API {
            }
            // Parent: CBaseAnimGraph
            // Field count: 20
            namespace C_EconEntity {
                constexpr std::ptrdiff_t m_flFlexDelayTime = 0x1190; // float32
                constexpr std::ptrdiff_t m_flFlexDelayedWeight = 0x1198; // float32*
                constexpr std::ptrdiff_t m_bAttributesInitialized = 0x11A0; // bool
                constexpr std::ptrdiff_t m_AttributeManager = 0x11A8; // C_AttributeContainer
                constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0x1678; // uint32
                constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x167C; // uint32
                constexpr std::ptrdiff_t m_nFallbackPaintKit = 0x1680; // int32
                constexpr std::ptrdiff_t m_nFallbackSeed = 0x1684; // int32
                constexpr std::ptrdiff_t m_flFallbackWear = 0x1688; // float32
                constexpr std::ptrdiff_t m_nFallbackStatTrak = 0x168C; // int32
                constexpr std::ptrdiff_t m_bClientside = 0x1690; // bool
                constexpr std::ptrdiff_t m_bParticleSystemsCreated = 0x1691; // bool
                constexpr std::ptrdiff_t m_vecAttachedParticles = 0x1698; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_hViewmodelAttachment = 0x16B0; // CHandle<CBaseAnimGraph>
                constexpr std::ptrdiff_t m_iOldTeam = 0x16B4; // int32
                constexpr std::ptrdiff_t m_bAttachmentDirty = 0x16B8; // bool
                constexpr std::ptrdiff_t m_nUnloadedModelIndex = 0x16BC; // int32
                constexpr std::ptrdiff_t m_iNumOwnerValidationRetries = 0x16C0; // int32
                constexpr std::ptrdiff_t m_hOldProvidee = 0x16D0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_vecAttachedModels = 0x16D8; // CUtlVector<C_EconEntity::AttachedModelData_t>
            }
            // Parent: CPlayerPawnComponent
            // Field count: 0
            namespace CPlayer_UseServices {
            }
            // Parent: C_BaseEntity
            // Field count: 25
            namespace C_PointValueRemapper {
                constexpr std::ptrdiff_t m_bDisabled = 0x600; // bool
                constexpr std::ptrdiff_t m_bDisabledOld = 0x601; // bool
                constexpr std::ptrdiff_t m_bUpdateOnClient = 0x602; // bool
                constexpr std::ptrdiff_t m_nInputType = 0x604; // ValueRemapperInputType_t
                constexpr std::ptrdiff_t m_hRemapLineStart = 0x608; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hRemapLineEnd = 0x60C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flMaximumChangePerSecond = 0x610; // float32
                constexpr std::ptrdiff_t m_flDisengageDistance = 0x614; // float32
                constexpr std::ptrdiff_t m_flEngageDistance = 0x618; // float32
                constexpr std::ptrdiff_t m_bRequiresUseKey = 0x61C; // bool
                constexpr std::ptrdiff_t m_nOutputType = 0x620; // ValueRemapperOutputType_t
                constexpr std::ptrdiff_t m_hOutputEntities = 0x628; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_nHapticsType = 0x640; // ValueRemapperHapticsType_t
                constexpr std::ptrdiff_t m_nMomentumType = 0x644; // ValueRemapperMomentumType_t
                constexpr std::ptrdiff_t m_flMomentumModifier = 0x648; // float32
                constexpr std::ptrdiff_t m_flSnapValue = 0x64C; // float32
                constexpr std::ptrdiff_t m_flCurrentMomentum = 0x650; // float32
                constexpr std::ptrdiff_t m_nRatchetType = 0x654; // ValueRemapperRatchetType_t
                constexpr std::ptrdiff_t m_flRatchetOffset = 0x658; // float32
                constexpr std::ptrdiff_t m_flInputOffset = 0x65C; // float32
                constexpr std::ptrdiff_t m_bEngaged = 0x660; // bool
                constexpr std::ptrdiff_t m_bFirstUpdate = 0x661; // bool
                constexpr std::ptrdiff_t m_flPreviousValue = 0x664; // float32
                constexpr std::ptrdiff_t m_flPreviousUpdateTickTime = 0x668; // GameTime_t
                constexpr std::ptrdiff_t m_vecPreviousTestPoint = 0x66C; // VectorWS
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
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
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            namespace CPulseStringlib {
            }
            // Parent: None
            // Field count: 13
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
            // Field count: 98
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
                constexpr std::ptrdiff_t m_iFreezeTime = 0x64; // int32
                constexpr std::ptrdiff_t m_iRoundTime = 0x68; // int32
                constexpr std::ptrdiff_t m_fMatchStartTime = 0x6C; // float32
                constexpr std::ptrdiff_t m_fRoundStartTime = 0x70; // GameTime_t
                constexpr std::ptrdiff_t m_flRestartRoundTime = 0x74; // GameTime_t
                constexpr std::ptrdiff_t m_bGameRestart = 0x78; // bool
                constexpr std::ptrdiff_t m_flGameStartTime = 0x7C; // float32
                constexpr std::ptrdiff_t m_timeUntilNextPhaseStarts = 0x80; // float32
                constexpr std::ptrdiff_t m_gamePhase = 0x84; // int32
                constexpr std::ptrdiff_t m_totalRoundsPlayed = 0x88; // int32
                constexpr std::ptrdiff_t m_nRoundsPlayedThisPhase = 0x8C; // int32
                constexpr std::ptrdiff_t m_nOvertimePlaying = 0x90; // int32
                constexpr std::ptrdiff_t m_iHostagesRemaining = 0x94; // int32
                constexpr std::ptrdiff_t m_bAnyHostageReached = 0x98; // bool
                constexpr std::ptrdiff_t m_bMapHasBombTarget = 0x99; // bool
                constexpr std::ptrdiff_t m_bMapHasRescueZone = 0x9A; // bool
                constexpr std::ptrdiff_t m_bMapHasBuyZone = 0x9B; // bool
                constexpr std::ptrdiff_t m_bIsQueuedMatchmaking = 0x9C; // bool
                constexpr std::ptrdiff_t m_nQueuedMatchmakingMode = 0xA0; // int32
                constexpr std::ptrdiff_t m_bIsValveDS = 0xA4; // bool
                constexpr std::ptrdiff_t m_bLogoMap = 0xA5; // bool
                constexpr std::ptrdiff_t m_bPlayAllStepSoundsOnServer = 0xA6; // bool
                constexpr std::ptrdiff_t m_iSpectatorSlotCount = 0xA8; // int32
                constexpr std::ptrdiff_t m_MatchDevice = 0xAC; // int32
                constexpr std::ptrdiff_t m_bHasMatchStarted = 0xB0; // bool
                constexpr std::ptrdiff_t m_nNextMapInMapgroup = 0xB4; // int32
                constexpr std::ptrdiff_t m_szTournamentEventName = 0xB8; // char[512]
                constexpr std::ptrdiff_t m_szTournamentEventStage = 0x2B8; // char[512]
                constexpr std::ptrdiff_t m_szMatchStatTxt = 0x4B8; // char[512]
                constexpr std::ptrdiff_t m_szTournamentPredictionsTxt = 0x6B8; // char[512]
                constexpr std::ptrdiff_t m_nTournamentPredictionsPct = 0x8B8; // int32
                constexpr std::ptrdiff_t m_flCMMItemDropRevealStartTime = 0x8BC; // GameTime_t
                constexpr std::ptrdiff_t m_flCMMItemDropRevealEndTime = 0x8C0; // GameTime_t
                constexpr std::ptrdiff_t m_bIsDroppingItems = 0x8C4; // bool
                constexpr std::ptrdiff_t m_bIsQuestEligible = 0x8C5; // bool
                constexpr std::ptrdiff_t m_bIsHltvActive = 0x8C6; // bool
                constexpr std::ptrdiff_t m_bBombPlanted = 0x8C7; // bool
                constexpr std::ptrdiff_t m_arrProhibitedItemIndices = 0x8C8; // uint16[100]
                constexpr std::ptrdiff_t m_arrTournamentActiveCasterAccounts = 0x990; // uint32[4]
                constexpr std::ptrdiff_t m_numBestOfMaps = 0x9A0; // int32
                constexpr std::ptrdiff_t m_nHalloweenMaskListSeed = 0x9A4; // int32
                constexpr std::ptrdiff_t m_bBombDropped = 0x9A8; // bool
                constexpr std::ptrdiff_t m_iRoundWinStatus = 0x9AC; // int32
                constexpr std::ptrdiff_t m_eRoundWinReason = 0x9B0; // int32
                constexpr std::ptrdiff_t m_bTCantBuy = 0x9B4; // bool
                constexpr std::ptrdiff_t m_bCTCantBuy = 0x9B5; // bool
                constexpr std::ptrdiff_t m_iMatchStats_RoundResults = 0x9B8; // int32[30]
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_CT = 0xA30; // int32[30]
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_T = 0xAA8; // int32[30]
                constexpr std::ptrdiff_t m_TeamRespawnWaveTimes = 0xB20; // float32[32]
                constexpr std::ptrdiff_t m_flNextRespawnWave = 0xBA0; // GameTime_t[32]
                constexpr std::ptrdiff_t m_vMinimapMins = 0xC20; // VectorWS
                constexpr std::ptrdiff_t m_vMinimapMaxs = 0xC2C; // VectorWS
                constexpr std::ptrdiff_t m_MinimapVerticalSectionHeights = 0xC38; // float32[8]
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
                constexpr std::ptrdiff_t m_nMatchEndCount = 0xEF8; // uint8
                constexpr std::ptrdiff_t m_nTTeamIntroVariant = 0xEFC; // int32
                constexpr std::ptrdiff_t m_nCTTeamIntroVariant = 0xF00; // int32
                constexpr std::ptrdiff_t m_bTeamIntroPeriod = 0xF04; // bool
                constexpr std::ptrdiff_t m_iRoundEndWinnerTeam = 0xF08; // int32
                constexpr std::ptrdiff_t m_eRoundEndReason = 0xF0C; // int32
                constexpr std::ptrdiff_t m_bRoundEndShowTimerDefend = 0xF10; // bool
                constexpr std::ptrdiff_t m_iRoundEndTimerTime = 0xF14; // int32
                constexpr std::ptrdiff_t m_sRoundEndFunFactToken = 0xF18; // CUtlString
                constexpr std::ptrdiff_t m_iRoundEndFunFactPlayerSlot = 0xF20; // CPlayerSlot
                constexpr std::ptrdiff_t m_iRoundEndFunFactData1 = 0xF24; // int32
                constexpr std::ptrdiff_t m_iRoundEndFunFactData2 = 0xF28; // int32
                constexpr std::ptrdiff_t m_iRoundEndFunFactData3 = 0xF2C; // int32
                constexpr std::ptrdiff_t m_sRoundEndMessage = 0xF30; // CUtlString
                constexpr std::ptrdiff_t m_iRoundEndPlayerCount = 0xF38; // int32
                constexpr std::ptrdiff_t m_bRoundEndNoMusic = 0xF3C; // bool
                constexpr std::ptrdiff_t m_iRoundEndLegacy = 0xF40; // int32
                constexpr std::ptrdiff_t m_nRoundEndCount = 0xF44; // uint8
                constexpr std::ptrdiff_t m_iRoundStartRoundNumber = 0xF48; // int32
                constexpr std::ptrdiff_t m_nRoundStartCount = 0xF4C; // uint8
                constexpr std::ptrdiff_t m_flLastPerfSampleTime = 0x4F58; // float64
            }
            // Parent: None
            // Field count: 0
            namespace CBaseAnimGraphAPI {
            }
            // Parent: C_BaseModelEntity
            // Field count: 2
            namespace CGrenadeTracer {
                constexpr std::ptrdiff_t m_flTracerDuration = 0xFC8; // float32
                constexpr std::ptrdiff_t m_nType = 0xFCC; // GrenadeType_t
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
            namespace C_BaseCSGrenadeProjectile {
                constexpr std::ptrdiff_t m_vInitialPosition = 0x11C8; // VectorWS
                constexpr std::ptrdiff_t m_vInitialVelocity = 0x11D4; // Vector
                constexpr std::ptrdiff_t m_nBounces = 0x11E0; // int32
                constexpr std::ptrdiff_t m_nExplodeEffectIndex = 0x11E8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_nExplodeEffectTickBegin = 0x11F0; // int32
                constexpr std::ptrdiff_t m_vecExplodeEffectOrigin = 0x11F4; // VectorWS
                constexpr std::ptrdiff_t m_flSpawnTime = 0x1200; // GameTime_t
                constexpr std::ptrdiff_t vecLastTrailLinePos = 0x1204; // Vector
                constexpr std::ptrdiff_t flNextTrailLineTime = 0x1210; // GameTime_t
                constexpr std::ptrdiff_t m_bExplodeEffectBegan = 0x1214; // bool
                constexpr std::ptrdiff_t m_bCanCreateGrenadeTrail = 0x1215; // bool
                constexpr std::ptrdiff_t m_nSnapshotTrajectoryEffectIndex = 0x1218; // ParticleIndex_t
                constexpr std::ptrdiff_t m_hSnapshotTrajectoryParticleSnapshot = 0x1220; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_arrTrajectoryTrailPoints = 0x1228; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_arrTrajectoryTrailPointCreationTimes = 0x1240; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_flTrajectoryTrailEffectCreationTime = 0x1258; // float32
            }
            // Parent: C_BaseEntity
            // Field count: 16
            namespace C_GradientFog {
                constexpr std::ptrdiff_t m_hGradientFogTexture = 0x600; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_flFogStartDistance = 0x608; // float32
                constexpr std::ptrdiff_t m_flFogEndDistance = 0x60C; // float32
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x610; // bool
                constexpr std::ptrdiff_t m_flFogStartHeight = 0x614; // float32
                constexpr std::ptrdiff_t m_flFogEndHeight = 0x618; // float32
                constexpr std::ptrdiff_t m_flFarZ = 0x61C; // float32
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x620; // float32
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x624; // float32
                constexpr std::ptrdiff_t m_flFogVerticalExponent = 0x628; // float32
                constexpr std::ptrdiff_t m_fogColor = 0x62C; // Color
                constexpr std::ptrdiff_t m_flFogStrength = 0x630; // float32
                constexpr std::ptrdiff_t m_flFadeTime = 0x634; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x638; // bool
                constexpr std::ptrdiff_t m_bIsEnabled = 0x639; // bool
                constexpr std::ptrdiff_t m_bGradientFogNeedsTextures = 0x63A; // bool
            }
            // Parent: CPlayerControllerComponent
            // Field count: 4
            namespace CCSPlayerController_InGameMoneyServices {
                constexpr std::ptrdiff_t m_iAccount = 0x40; // int32
                constexpr std::ptrdiff_t m_iStartAccount = 0x44; // int32
                constexpr std::ptrdiff_t m_iTotalCashSpent = 0x48; // int32
                constexpr std::ptrdiff_t m_iCashSpentThisRound = 0x4C; // int32
            }
            // Parent: CPlayerPawnComponent
            // Field count: 6
            namespace CCSPlayer_AimPunchServices {
                constexpr std::ptrdiff_t m_predictableBaseTick = 0x48; // GameTick_t
                constexpr std::ptrdiff_t m_predictableBaseTickInterpAmount = 0x4C; // float32
                constexpr std::ptrdiff_t m_predictableBaseAngle = 0x50; // QAngle
                constexpr std::ptrdiff_t m_predictableBaseAngleVel = 0x5C; // QAngle
                constexpr std::ptrdiff_t m_unpredictableBaseTick = 0xA0; // GameTick_t
                constexpr std::ptrdiff_t m_unpredictableBaseAngle = 0xA4; // QAngle
            }
            // Parent: C_BaseCSGrenadeProjectile
            // Field count: 0
            namespace C_HEGrenadeProjectile {
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterModel {
                constexpr std::ptrdiff_t m_iFilterModel = 0x638; // CUtlSymbolLarge
            }
            // Parent: C_SoundAreaEntityBase
            // Field count: 2
            namespace C_SoundAreaEntityOrientedBox {
                constexpr std::ptrdiff_t m_vMin = 0x628; // Vector
                constexpr std::ptrdiff_t m_vMax = 0x634; // Vector
            }
            // Parent: C_SoundOpvarSetPointBase
            // Field count: 0
            namespace C_SoundOpvarSetPointEntity {
            }
            // Parent: C_BaseEntity
            // Field count: 2
            namespace CPulseGameBlackboard {
                constexpr std::ptrdiff_t m_strGraphName = 0x608; // CUtlString
                constexpr std::ptrdiff_t m_strStateBlob = 0x610; // CUtlString
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CChoreoComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_hOwner = 0x30; // CHandle<C_BaseModelEntity>
                constexpr std::ptrdiff_t m_nExernalChoreoGraphCount = 0x34; // int32
                constexpr std::ptrdiff_t m_sActiveExternalChoreoGraphSlotID = 0x38; // CGlobalSymbol
                constexpr std::ptrdiff_t m_nNextSceneEventId = 0x70; // SceneEventId_t
                constexpr std::ptrdiff_t m_flAllowResponsesEndTime = 0x74; // GameTime_t
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
            // Parent: None
            // Field count: 7
            namespace C_RagdollPropAttached {
                constexpr std::ptrdiff_t m_boneIndexAttached = 0x1208; // uint32
                constexpr std::ptrdiff_t m_ragdollAttachedObjectIndex = 0x120C; // uint32
                constexpr std::ptrdiff_t m_attachmentPointBoneSpace = 0x1210; // Vector
                constexpr std::ptrdiff_t m_attachmentPointRagdollSpace = 0x121C; // Vector
                constexpr std::ptrdiff_t m_vecOffset = 0x1228; // Vector
                constexpr std::ptrdiff_t m_parentTime = 0x1234; // float32
                constexpr std::ptrdiff_t m_bHasParent = 0x1238; // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_ModelPointEntity {
            }
            // Parent: C_CSPlayerPawn
            // Field count: 2
            namespace C_CSGO_PreviewPlayer {
                constexpr std::ptrdiff_t m_animgraphCharacterModeString = 0x3460; // CGlobalSymbol
                constexpr std::ptrdiff_t m_flInitialModelScale = 0x3468; // float32
            }
            // Parent: C_BarnLight
            // Field count: 1
            namespace C_RectLight {
                constexpr std::ptrdiff_t m_bShowLight = 0x12C0; // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_CSPlayerPawn_API {
            }
            // Parent: C_BaseEntity
            // Field count: 3
            namespace CPathSimple {
                constexpr std::ptrdiff_t m_CPathQueryComponent = 0x610; // CPathQueryComponent
                constexpr std::ptrdiff_t m_pathString = 0x700; // CUtlString
                constexpr std::ptrdiff_t m_bClosedLoop = 0x708; // bool
            }
            // Parent: None
            // Field count: 3
            namespace C_FuncTrackTrain {
                constexpr std::ptrdiff_t m_nLongAxis = 0xFB0; // int32
                constexpr std::ptrdiff_t m_flRadius = 0xFB4; // float32
                constexpr std::ptrdiff_t m_flLineLength = 0xFB8; // float32
            }
            // Parent: C_EconEntity
            // Field count: 2
            namespace C_EconWearable {
                constexpr std::ptrdiff_t m_nForceSkin = 0x16F0; // int32
                constexpr std::ptrdiff_t m_bAlwaysAllow = 0x16F4; // bool
            }
            // Parent: C_BaseModelEntity
            // Field count: 9
            namespace C_EnvDecal {
                constexpr std::ptrdiff_t m_hDecalMaterial = 0xFB0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_flWidth = 0xFB8; // float32
                constexpr std::ptrdiff_t m_flHeight = 0xFBC; // float32
                constexpr std::ptrdiff_t m_flDepth = 0xFC0; // float32
                constexpr std::ptrdiff_t m_nRenderOrder = 0xFC4; // uint32
                constexpr std::ptrdiff_t m_bProjectOnWorld = 0xFC8; // bool
                constexpr std::ptrdiff_t m_bProjectOnCharacters = 0xFC9; // bool
                constexpr std::ptrdiff_t m_bProjectOnWater = 0xFCA; // bool
                constexpr std::ptrdiff_t m_flDepthSortBias = 0xFCC; // float32
            }
            // Parent: None
            // Field count: 2
            namespace EntitySpottedState_t {
                constexpr std::ptrdiff_t m_bSpotted = 0x8; // bool
                constexpr std::ptrdiff_t m_bSpottedByMask = 0xC; // uint32[2]
            }
            // Parent: None
            // Field count: 25
            //
            // Metadata:
            // MGetKV3ClassDefaults
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
                constexpr std::ptrdiff_t m_pReticleHintTextName = 0x16F0; // char[256]
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace C_CSPetPlacement {
            }
            // Parent: None
            // Field count: 0
            namespace CBaseEntity_SharedAPI {
            }
            // Parent: C_BaseModelEntity
            // Field count: 23
            namespace C_Beam {
                constexpr std::ptrdiff_t m_flFrameRate = 0xFB0; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0xFB4; // float32
                constexpr std::ptrdiff_t m_flFireTime = 0xFB8; // GameTime_t
                constexpr std::ptrdiff_t m_flDamage = 0xFBC; // float32
                constexpr std::ptrdiff_t m_nNumBeamEnts = 0xFC0; // uint8
                constexpr std::ptrdiff_t m_queryHandleHalo = 0xFC4; // int32
                constexpr std::ptrdiff_t m_hBaseMaterial = 0xFE8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nHaloIndex = 0xFF0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nBeamType = 0xFF8; // BeamType_t
                constexpr std::ptrdiff_t m_nBeamFlags = 0xFFC; // uint32
                constexpr std::ptrdiff_t m_hAttachEntity = 0x1000; // CHandle<C_BaseEntity>[10]
                constexpr std::ptrdiff_t m_nAttachIndex = 0x1028; // AttachmentHandle_t[10]
                constexpr std::ptrdiff_t m_fWidth = 0x1034; // float32
                constexpr std::ptrdiff_t m_fEndWidth = 0x1038; // float32
                constexpr std::ptrdiff_t m_fFadeLength = 0x103C; // float32
                constexpr std::ptrdiff_t m_fHaloScale = 0x1040; // float32
                constexpr std::ptrdiff_t m_fAmplitude = 0x1044; // float32
                constexpr std::ptrdiff_t m_fStartFrame = 0x1048; // float32
                constexpr std::ptrdiff_t m_fSpeed = 0x104C; // float32
                constexpr std::ptrdiff_t m_flFrame = 0x1050; // float32
                constexpr std::ptrdiff_t m_bTurnedOff = 0x1054; // bool
                constexpr std::ptrdiff_t m_vecEndPos = 0x1058; // VectorWS
                constexpr std::ptrdiff_t m_hEndEntity = 0x1064; // CHandle<C_BaseEntity>
            }
            // Parent: C_BaseEntity
            // Field count: 22
            namespace C_EnvLightProbeVolume {
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_AmbientCube = 0x15F8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SDF = 0x1600; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_DC = 0x1608; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_R = 0x1610; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_G = 0x1618; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_B = 0x1620; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x1628; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x1630; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x1638; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x1640; // Vector
                constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x164C; // Vector
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x1658; // bool
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x165C; // int32
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x1660; // int32
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x1664; // bool
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x1668; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x166C; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x1670; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x1674; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x1678; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x167C; // int32
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x1689; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataOverlayType
            // MVDataAssociatedFile
            namespace CExplosionTypeData {
                constexpr std::ptrdiff_t m_SoundName = 0x0; // CSoundEventName
                constexpr std::ptrdiff_t m_ParticleEffect = 0x10; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_bIsIncindiary = 0xF0; // bool
                constexpr std::ptrdiff_t m_bHasForces = 0xF1; // bool
                constexpr std::ptrdiff_t m_DecalType = 0xF8; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 0
            namespace CCSPlayerController_API {
            }
            // Parent: C_BaseModelEntity
            // Field count: 8
            namespace C_FuncConveyor {
                constexpr std::ptrdiff_t m_vecMoveDirEntitySpace = 0xFB8; // Vector
                constexpr std::ptrdiff_t m_flTargetSpeed = 0xFC4; // float32
                constexpr std::ptrdiff_t m_nTransitionStartTick = 0xFC8; // GameTick_t
                constexpr std::ptrdiff_t m_nTransitionDurationTicks = 0xFCC; // int32
                constexpr std::ptrdiff_t m_flTransitionStartSpeed = 0xFD0; // float32
                constexpr std::ptrdiff_t m_hConveyorModels = 0xFD8; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_flCurrentConveyorOffset = 0xFF0; // float32
                constexpr std::ptrdiff_t m_flCurrentConveyorSpeed = 0xFF4; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            namespace CPulseEnumlib {
            }
            // Parent: CPlayer_WeaponServices
            // Field count: 5
            namespace CCSPlayer_WeaponServices {
                constexpr std::ptrdiff_t m_flNextAttack = 0xD0; // GameTime_t
                constexpr std::ptrdiff_t m_nOldTotalShootPositionHistoryCount = 0xD4; // uint32
                constexpr std::ptrdiff_t m_nOldTotalInputHistoryCount = 0x370; // uint32
                constexpr std::ptrdiff_t m_networkAnimTiming = 0x1588; // C_NetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_bBlockInspectUntilNextGraphUpdate = 0x15A0; // bool
            }
            // Parent: None
            // Field count: 2
            namespace C_PhysMagnet {
                constexpr std::ptrdiff_t m_aAttachedObjectsFromServer = 0x1180; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_aAttachedObjects = 0x1198; // CUtlVector<CHandle<C_BaseEntity>>
            }
            // Parent: CEnvSoundscape
            // Field count: 0
            namespace CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            namespace C_Breakable {
            }
            // Parent: CBaseAnimGraph
            // Field count: 29
            namespace C_PlantedC4 {
                constexpr std::ptrdiff_t m_bBombTicking = 0x11A0; // bool
                constexpr std::ptrdiff_t m_nBombSite = 0x11A4; // int32
                constexpr std::ptrdiff_t m_nSourceSoundscapeHash = 0x11A8; // int32
                constexpr std::ptrdiff_t m_entitySpottedState = 0x11B0; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_flNextGlow = 0x11C8; // GameTime_t
                constexpr std::ptrdiff_t m_flNextBeep = 0x11CC; // GameTime_t
                constexpr std::ptrdiff_t m_flC4Blow = 0x11D0; // GameTime_t
                constexpr std::ptrdiff_t m_bCannotBeDefused = 0x11D4; // bool
                constexpr std::ptrdiff_t m_bHasExploded = 0x11D5; // bool
                constexpr std::ptrdiff_t m_flTimerLength = 0x11D8; // float32
                constexpr std::ptrdiff_t m_bBeingDefused = 0x11DC; // bool
                constexpr std::ptrdiff_t m_bTriggerWarning = 0x11E0; // float32
                constexpr std::ptrdiff_t m_bExplodeWarning = 0x11E4; // float32
                constexpr std::ptrdiff_t m_bC4Activated = 0x11E8; // bool
                constexpr std::ptrdiff_t m_bTenSecWarning = 0x11E9; // bool
                constexpr std::ptrdiff_t m_flDefuseLength = 0x11EC; // float32
                constexpr std::ptrdiff_t m_flDefuseCountDown = 0x11F0; // GameTime_t
                constexpr std::ptrdiff_t m_bBombDefused = 0x11F4; // bool
                constexpr std::ptrdiff_t m_hBombDefuser = 0x11F8; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_AttributeManager = 0x1200; // C_AttributeContainer
                constexpr std::ptrdiff_t m_hDefuserMultimeter = 0x16D0; // CHandle<C_Multimeter>
                constexpr std::ptrdiff_t m_flNextRadarFlashTime = 0x16D4; // GameTime_t
                constexpr std::ptrdiff_t m_bRadarFlash = 0x16D8; // bool
                constexpr std::ptrdiff_t m_pBombDefuser = 0x16DC; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_fLastDefuseTime = 0x16E0; // GameTime_t
                constexpr std::ptrdiff_t m_pPredictionOwner = 0x16E8; // CBasePlayerController*
                constexpr std::ptrdiff_t m_vecC4ExplodeSpectatePos = 0x16F0; // VectorWS
                constexpr std::ptrdiff_t m_vecC4ExplodeSpectateAng = 0x16FC; // QAngle
                constexpr std::ptrdiff_t m_flC4ExplodeSpectateDuration = 0x1708; // float32
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_MapPreviewCameraPath_API {
            }
            // Parent: C_CSGO_TeamIntroCharacterPosition
            // Field count: 0
            namespace CCSGO_WingmanIntroCharacterPosition {
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterName {
                constexpr std::ptrdiff_t m_iFilterName = 0x638; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 9
            namespace C_RagdollProp {
                constexpr std::ptrdiff_t m_ragEnabled = 0x1180; // C_NetworkUtlVectorBase<bool>
                constexpr std::ptrdiff_t m_ragPos = 0x1198; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_ragAngles = 0x11B0; // C_NetworkUtlVectorBase<QAngle>
                constexpr std::ptrdiff_t m_flBlendWeight = 0x11C8; // float32
                constexpr std::ptrdiff_t m_hRagdollSource = 0x11CC; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iEyeAttachment = 0x11D0; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_flBlendWeightCurrent = 0x11D4; // float32
                constexpr std::ptrdiff_t m_parentPhysicsBoneIndices = 0x11D8; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_worldSpaceBoneComputationOrder = 0x11F0; // CUtlVector<int32>
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
            // Field count: 17
            namespace CBaseAnimGraph {
                constexpr std::ptrdiff_t m_graphControllerManager = 0xFB0; // CAnimGraphControllerManager
                constexpr std::ptrdiff_t m_pMainGraphController = 0x1048; // CAnimGraphControllerPtr
                constexpr std::ptrdiff_t m_bInitiallyPopulateInterpHistory = 0x1050; // bool
                constexpr std::ptrdiff_t m_bSuppressAnimEventSounds = 0x1052; // bool
                constexpr std::ptrdiff_t m_OnLayerCycleUpdated = 0x1058; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnExternalChoreoGraphChanged = 0x1078; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bAnimGraphUpdateEnabled = 0x1098; // bool
                constexpr std::ptrdiff_t m_bAnimationUpdateScheduled = 0x1099; // bool
                constexpr std::ptrdiff_t m_vecForce = 0x109C; // Vector
                constexpr std::ptrdiff_t m_nForceBone = 0x10A8; // int32
                constexpr std::ptrdiff_t m_pClientsideRagdoll = 0x10B0; // CBaseAnimGraph*
                constexpr std::ptrdiff_t m_bBuiltRagdoll = 0x10B8; // bool
                constexpr std::ptrdiff_t m_pRagdollControl = 0x10C8; // IPhysicsRagdollControl*
                constexpr std::ptrdiff_t m_RagdollPose = 0x10D0; // PhysicsRagdollPose_t
                constexpr std::ptrdiff_t m_bRagdollEnabled = 0x1118; // bool
                constexpr std::ptrdiff_t m_bRagdollClientSide = 0x1119; // bool
                constexpr std::ptrdiff_t m_bHasAnimatedMaterialAttributes = 0x1128; // bool
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
            // Parent: None
            // Field count: 1
            namespace C_LightEntity {
                constexpr std::ptrdiff_t m_CLightComponent = 0xFB0; // CLightComponent*
            }
            // Parent: None
            // Field count: 0
            namespace CBarnLightAPI {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponM249 {
            }
            // Parent: None
            // Field count: 25
            namespace C_LocalTempEntity {
                constexpr std::ptrdiff_t flags = 0x1180; // int32
                constexpr std::ptrdiff_t die = 0x1184; // GameTime_t
                constexpr std::ptrdiff_t m_flFrameMax = 0x1188; // float32
                constexpr std::ptrdiff_t x = 0x118C; // float32
                constexpr std::ptrdiff_t y = 0x1190; // float32
                constexpr std::ptrdiff_t fadeSpeed = 0x1194; // float32
                constexpr std::ptrdiff_t bounceFactor = 0x1198; // float32
                constexpr std::ptrdiff_t hitSound = 0x119C; // int32
                constexpr std::ptrdiff_t priority = 0x11A0; // int32
                constexpr std::ptrdiff_t tentOffset = 0x11A4; // Vector
                constexpr std::ptrdiff_t m_vecTempEntAngVelocity = 0x11B0; // QAngle
                constexpr std::ptrdiff_t tempent_renderamt = 0x11BC; // int32
                constexpr std::ptrdiff_t m_vecNormal = 0x11C0; // Vector
                constexpr std::ptrdiff_t m_flSpriteScale = 0x11CC; // float32
                constexpr std::ptrdiff_t m_nFlickerFrame = 0x11D0; // int32
                constexpr std::ptrdiff_t m_flFrameRate = 0x11D4; // float32
                constexpr std::ptrdiff_t m_flFrame = 0x11D8; // float32
                constexpr std::ptrdiff_t m_pszImpactEffect = 0x11E0; // char*
                constexpr std::ptrdiff_t m_pszParticleEffect = 0x11E8; // char*
                constexpr std::ptrdiff_t m_bParticleCollision = 0x11F0; // bool
                constexpr std::ptrdiff_t m_iLastCollisionFrame = 0x11F4; // int32
                constexpr std::ptrdiff_t m_vLastCollisionOrigin = 0x11F8; // VectorWS
                constexpr std::ptrdiff_t m_vecTempEntVelocity = 0x1204; // Vector
                constexpr std::ptrdiff_t m_vecPrevAbsOrigin = 0x1210; // VectorWS
                constexpr std::ptrdiff_t m_vecTempEntAcceleration = 0x121C; // Vector
            }
            // Parent: None
            // Field count: 0
            namespace CFlashbangProjectile_API {
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 2
            namespace C_WeaponTaser {
                constexpr std::ptrdiff_t m_fFireTime = 0x1D10; // GameTime_t
                constexpr std::ptrdiff_t m_nLastAttackTick = 0x1D14; // int32
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace C_PointEntity {
            }
            // Parent: None
            // Field count: 0
            namespace C_SingleplayRules {
            }
            // Parent: None
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
            namespace CPlayer_WeaponServices {
                constexpr std::ptrdiff_t m_hMyWeapons = 0x48; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
                constexpr std::ptrdiff_t m_hActiveWeapon = 0x60; // CHandle<C_BasePlayerWeapon>
                constexpr std::ptrdiff_t m_hLastWeapon = 0x64; // CHandle<C_BasePlayerWeapon>
                constexpr std::ptrdiff_t m_iAmmo = 0x68; // uint16[32]
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
                constexpr std::ptrdiff_t m_MethodName = 0xD8; // PulseSymbol_t
                constexpr std::ptrdiff_t m_nBlackboardIndex = 0xE8; // PulseRuntimeBlackboardReferenceIndex_t
                constexpr std::ptrdiff_t m_ExpectedArgs = 0xF0; // CUtlLeanVector<CPulseRuntimeMethodArg>
                constexpr std::ptrdiff_t m_nAsyncCallMode = 0x100; // PulseMethodCallMode_t
                constexpr std::ptrdiff_t m_OnFinished = 0x108; // CPulse_ResumePoint
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponMP9 {
            }
            // Parent: C_DynamicProp
            // Field count: 0
            namespace C_DynamicPropAlias_prop_dynamic_override {
            }
            // Parent: None
            // Field count: 0
            namespace CEnvSoundscapeTriggerable {
            }
            // Parent: C_BaseEntity
            // Field count: 5
            namespace C_PlayerPing {
                constexpr std::ptrdiff_t m_hPlayer = 0x630; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_hPingedEntity = 0x634; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iType = 0x638; // int32
                constexpr std::ptrdiff_t m_bUrgent = 0x63C; // bool
                constexpr std::ptrdiff_t m_szPlaceName = 0x63D; // char[18]
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_AK47 {
            }
            // Parent: C_BaseEntity
            // Field count: 10
            namespace C_CSGO_MapPreviewCameraPathNode {
                constexpr std::ptrdiff_t m_szParentPathUniqueID = 0x600; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nPathIndex = 0x608; // int32
                constexpr std::ptrdiff_t m_vInTangentLocal = 0x60C; // Vector
                constexpr std::ptrdiff_t m_vOutTangentLocal = 0x618; // Vector
                constexpr std::ptrdiff_t m_flFOV = 0x624; // float32
                constexpr std::ptrdiff_t m_flCameraSpeed = 0x628; // float32
                constexpr std::ptrdiff_t m_flEaseIn = 0x62C; // float32
                constexpr std::ptrdiff_t m_flEaseOut = 0x630; // float32
                constexpr std::ptrdiff_t m_vInTangentWorld = 0x634; // Vector
                constexpr std::ptrdiff_t m_vOutTangentWorld = 0x640; // Vector
            }
            // Parent: C_BaseEntity
            // Field count: 10
            namespace C_CSPlayerResource {
                constexpr std::ptrdiff_t m_bHostageAlive = 0x600; // bool[12]
                constexpr std::ptrdiff_t m_isHostageFollowingSomeone = 0x60C; // bool[12]
                constexpr std::ptrdiff_t m_iHostageEntityIDs = 0x618; // CEntityIndex[12]
                constexpr std::ptrdiff_t m_bombsiteCenterA = 0x648; // VectorWS
                constexpr std::ptrdiff_t m_bombsiteCenterB = 0x654; // VectorWS
                constexpr std::ptrdiff_t m_hostageRescueX = 0x660; // int32[4]
                constexpr std::ptrdiff_t m_hostageRescueY = 0x670; // int32[4]
                constexpr std::ptrdiff_t m_hostageRescueZ = 0x680; // int32[4]
                constexpr std::ptrdiff_t m_bEndMatchNextMapAllVoted = 0x690; // bool
                constexpr std::ptrdiff_t m_foundGoalPositions = 0x691; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 2
            namespace CSkyboxReference {
                constexpr std::ptrdiff_t m_worldGroupId = 0x600; // WorldGroupId_t
                constexpr std::ptrdiff_t m_hSkyCamera = 0x604; // CHandle<C_SkyCamera>
            }
            // Parent: C_MolotovGrenade
            // Field count: 0
            namespace C_IncendiaryGrenade {
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterClass {
                constexpr std::ptrdiff_t m_iFilterClass = 0x638; // CUtlSymbolLarge
            }
            // Parent: C_PointCamera
            // Field count: 1
            namespace C_PointCameraVFOV {
                constexpr std::ptrdiff_t m_flVerticalFOV = 0x660; // float32
            }
            // Parent: C_BaseEntity
            // Field count: 26
            namespace C_PointCamera {
                constexpr std::ptrdiff_t m_FOV = 0x600; // float32
                constexpr std::ptrdiff_t m_Resolution = 0x604; // float32
                constexpr std::ptrdiff_t m_bFogEnable = 0x608; // bool
                constexpr std::ptrdiff_t m_FogColor = 0x609; // Color
                constexpr std::ptrdiff_t m_flFogStart = 0x610; // float32
                constexpr std::ptrdiff_t m_flFogEnd = 0x614; // float32
                constexpr std::ptrdiff_t m_flFogMaxDensity = 0x618; // float32
                constexpr std::ptrdiff_t m_bActive = 0x61C; // bool
                constexpr std::ptrdiff_t m_bUseScreenAspectRatio = 0x61D; // bool
                constexpr std::ptrdiff_t m_flAspectRatio = 0x620; // float32
                constexpr std::ptrdiff_t m_bNoSky = 0x624; // bool
                constexpr std::ptrdiff_t m_fBrightness = 0x628; // float32
                constexpr std::ptrdiff_t m_flZFar = 0x62C; // float32
                constexpr std::ptrdiff_t m_flZNear = 0x630; // float32
                constexpr std::ptrdiff_t m_bCanHLTVUse = 0x634; // bool
                constexpr std::ptrdiff_t m_bAlignWithParent = 0x635; // bool
                constexpr std::ptrdiff_t m_bDofEnabled = 0x636; // bool
                constexpr std::ptrdiff_t m_flDofNearBlurry = 0x638; // float32
                constexpr std::ptrdiff_t m_flDofNearCrisp = 0x63C; // float32
                constexpr std::ptrdiff_t m_flDofFarCrisp = 0x640; // float32
                constexpr std::ptrdiff_t m_flDofFarBlurry = 0x644; // float32
                constexpr std::ptrdiff_t m_flDofTiltToGround = 0x648; // float32
                constexpr std::ptrdiff_t m_TargetFOV = 0x64C; // float32
                constexpr std::ptrdiff_t m_DegreesPerSecond = 0x650; // float32
                constexpr std::ptrdiff_t m_bIsOn = 0x654; // bool
                constexpr std::ptrdiff_t m_pNext = 0x658; // C_PointCamera*
            }
            // Parent: None
            // Field count: 2
            namespace CPathWithDynamicNodes {
                constexpr std::ptrdiff_t m_vecPathNodes = 0x710; // C_NetworkUtlVectorBase<CHandle<CPathNode>>
                constexpr std::ptrdiff_t m_xInitialPathWorldToLocal = 0x730; // CTransform
            }
            // Parent: C_BaseEntity
            // Field count: 3
            namespace CBaseFilter {
                constexpr std::ptrdiff_t m_bNegated = 0x600; // bool
                constexpr std::ptrdiff_t m_OnPass = 0x608; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFail = 0x620; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 1
            namespace WeaponPurchaseTracker_t {
                constexpr std::ptrdiff_t m_weaponPurchases = 0x8; // C_UtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
            }
            // Parent: C_PointEntity
            // Field count: 15
            namespace CMapInfo {
                constexpr std::ptrdiff_t m_iBuyingStatus = 0x600; // int32
                constexpr std::ptrdiff_t m_flBombRadius = 0x604; // float32
                constexpr std::ptrdiff_t m_iPetPopulation = 0x608; // int32
                constexpr std::ptrdiff_t m_bUseNormalSpawnsForDM = 0x60C; // bool
                constexpr std::ptrdiff_t m_bDisableAutoGeneratedDMSpawns = 0x60D; // bool
                constexpr std::ptrdiff_t m_flBotMaxVisionDistance = 0x610; // float32
                constexpr std::ptrdiff_t m_iHostageCount = 0x614; // int32
                constexpr std::ptrdiff_t m_bFadePlayerVisibilityFarZ = 0x618; // bool
                constexpr std::ptrdiff_t m_bRainTraceToSkyEnabled = 0x619; // bool
                constexpr std::ptrdiff_t m_bGPUCullSkybox = 0x61A; // bool
                constexpr std::ptrdiff_t m_flEnvRainStrength = 0x61C; // float32
                constexpr std::ptrdiff_t m_flEnvPuddleRippleStrength = 0x620; // float32
                constexpr std::ptrdiff_t m_flEnvPuddleRippleDirection = 0x624; // float32
                constexpr std::ptrdiff_t m_flEnvWetnessCoverage = 0x628; // float32
                constexpr std::ptrdiff_t m_flEnvWetnessDryingAmount = 0x62C; // float32
            }
            // Parent: C_CSGO_TeamPreviewCamera
            // Field count: 0
            namespace C_CSGO_EndOfMatchCamera {
            }
            // Parent: CBaseAnimGraph
            // Field count: 12
            namespace C_BaseGrenade {
                constexpr std::ptrdiff_t m_bHasWarnedAI = 0x1180; // bool
                constexpr std::ptrdiff_t m_bIsSmokeGrenade = 0x1181; // bool
                constexpr std::ptrdiff_t m_bIsLive = 0x1182; // bool
                constexpr std::ptrdiff_t m_DmgRadius = 0x1184; // float32
                constexpr std::ptrdiff_t m_flDetonateTime = 0x1188; // GameTime_t
                constexpr std::ptrdiff_t m_flWarnAITime = 0x118C; // float32
                constexpr std::ptrdiff_t m_flDamage = 0x1190; // float32
                constexpr std::ptrdiff_t m_iszBounceSound = 0x1198; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_ExplosionSound = 0x11A0; // CUtlString
                constexpr std::ptrdiff_t m_hThrower = 0x11A8; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_flNextAttack = 0x11C0; // GameTime_t
                constexpr std::ptrdiff_t m_hOriginalThrower = 0x11C4; // CHandle<C_CSPlayerPawn>
            }
            // Parent: C_BaseModelEntity
            // Field count: 16
            namespace C_PlayerSprayDecal {
                constexpr std::ptrdiff_t m_nUniqueID = 0xFB0; // int32
                constexpr std::ptrdiff_t m_unAccountID = 0xFB4; // uint32
                constexpr std::ptrdiff_t m_unTraceID = 0xFB8; // uint32
                constexpr std::ptrdiff_t m_rtGcTime = 0xFBC; // uint32
                constexpr std::ptrdiff_t m_vecEndPos = 0xFC0; // VectorWS
                constexpr std::ptrdiff_t m_vecStart = 0xFCC; // VectorWS
                constexpr std::ptrdiff_t m_vecLeft = 0xFD8; // Vector
                constexpr std::ptrdiff_t m_vecNormal = 0xFE4; // Vector
                constexpr std::ptrdiff_t m_nPlayer = 0xFF0; // int32
                constexpr std::ptrdiff_t m_nEntity = 0xFF4; // int32
                constexpr std::ptrdiff_t m_nHitbox = 0xFF8; // int32
                constexpr std::ptrdiff_t m_flCreationTime = 0xFFC; // float32
                constexpr std::ptrdiff_t m_nTintID = 0x1000; // int32
                constexpr std::ptrdiff_t m_nVersion = 0x1004; // uint8
                constexpr std::ptrdiff_t m_ubSignature = 0x1005; // uint8[128]
                constexpr std::ptrdiff_t m_SprayRenderHelper = 0x1090; // CPlayerSprayDecalRenderHelper
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CEntityIdentity {
                constexpr std::ptrdiff_t m_nameStringTableIndex = 0x14; // int32
                constexpr std::ptrdiff_t m_name = 0x18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_designerName = 0x20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flags = 0x30; // uint32
                constexpr std::ptrdiff_t m_worldGroupId = 0x38; // WorldGroupId_t
                constexpr std::ptrdiff_t m_fDataObjectTypes = 0x3C; // uint32
                constexpr std::ptrdiff_t m_PathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
                constexpr std::ptrdiff_t m_pAttributes = 0x48; // CEntityAttributeTable*
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
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBasePlayerVData {
                constexpr std::ptrdiff_t m_sModelName = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_sModelNameAg2Override = 0x108; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_flHeadDamageMultiplier = 0x1E8; // CSkillFloat
                constexpr std::ptrdiff_t m_flChestDamageMultiplier = 0x1F8; // CSkillFloat
                constexpr std::ptrdiff_t m_flStomachDamageMultiplier = 0x208; // CSkillFloat
                constexpr std::ptrdiff_t m_flArmDamageMultiplier = 0x218; // CSkillFloat
                constexpr std::ptrdiff_t m_flLegDamageMultiplier = 0x228; // CSkillFloat
                constexpr std::ptrdiff_t m_flHoldBreathTime = 0x238; // float32
                constexpr std::ptrdiff_t m_flDrowningDamageInterval = 0x23C; // float32
                constexpr std::ptrdiff_t m_nDrowningDamageInitial = 0x240; // int32
                constexpr std::ptrdiff_t m_nDrowningDamageMax = 0x244; // int32
                constexpr std::ptrdiff_t m_nWaterSpeed = 0x248; // int32
                constexpr std::ptrdiff_t m_flUseRange = 0x24C; // float32
                constexpr std::ptrdiff_t m_flUseAngleTolerance = 0x250; // float32
                constexpr std::ptrdiff_t m_flCrouchTime = 0x254; // float32
            }
            // Parent: C_BaseModelEntity
            // Field count: 0
            namespace C_LightSpotEntity {
            }
            // Parent: None
            // Field count: 3
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
                constexpr std::ptrdiff_t m_nCursorsAllowedToRunParallel = 0x128; // int32
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
            // Field count: 24
            namespace C_Sprite {
                constexpr std::ptrdiff_t m_hSpriteMaterial = 0xFB0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hAttachedToEntity = 0xFB8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nAttachment = 0xFBC; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_flSpriteFramerate = 0xFC0; // float32
                constexpr std::ptrdiff_t m_flFrame = 0xFC4; // float32
                constexpr std::ptrdiff_t m_flDieTime = 0xFC8; // GameTime_t
                constexpr std::ptrdiff_t m_nBrightness = 0xFD8; // uint32
                constexpr std::ptrdiff_t m_flBrightnessDuration = 0xFDC; // float32
                constexpr std::ptrdiff_t m_flSpriteScale = 0xFE0; // float32
                constexpr std::ptrdiff_t m_flScaleDuration = 0xFE4; // float32
                constexpr std::ptrdiff_t m_bWorldSpaceScale = 0xFE8; // bool
                constexpr std::ptrdiff_t m_flGlowProxySize = 0xFEC; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0xFF0; // float32
                constexpr std::ptrdiff_t m_flLastTime = 0xFF4; // GameTime_t
                constexpr std::ptrdiff_t m_flMaxFrame = 0xFF8; // float32
                constexpr std::ptrdiff_t m_flStartScale = 0xFFC; // float32
                constexpr std::ptrdiff_t m_flDestScale = 0x1000; // float32
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0x1004; // GameTime_t
                constexpr std::ptrdiff_t m_nStartBrightness = 0x1008; // int32
                constexpr std::ptrdiff_t m_nDestBrightness = 0x100C; // int32
                constexpr std::ptrdiff_t m_flBrightnessTimeStart = 0x1010; // GameTime_t
                constexpr std::ptrdiff_t m_nSpriteWidth = 0x1020; // int32
                constexpr std::ptrdiff_t m_nSpriteHeight = 0x1024; // int32
                constexpr std::ptrdiff_t m_flSpeed = 0x1028; // float32
            }
            // Parent: C_BaseEntity
            // Field count: 2
            namespace C_CsmFovOverride {
                constexpr std::ptrdiff_t m_cameraName = 0x600; // CUtlString
                constexpr std::ptrdiff_t m_flCsmFovOverrideValue = 0x608; // float32
            }
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            namespace C_WeaponGlock {
            }
            // Parent: None
            // Field count: 1
            namespace C_PhysicsProp {
                constexpr std::ptrdiff_t m_bAwake = 0x12F0; // bool
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterTeam {
                constexpr std::ptrdiff_t m_iFilterTeam = 0x638; // int32
            }
            // Parent: None
            // Field count: 32
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBasePlayerWeaponVData {
                constexpr std::ptrdiff_t m_szWorldModel = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_szWorldModelAg2Override = 0x108; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_sToolsOnlyOwnerModelName = 0x1E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_bBuiltRightHanded = 0x2C8; // bool
                constexpr std::ptrdiff_t m_bAllowFlipping = 0x2C9; // bool
                constexpr std::ptrdiff_t m_sMuzzleAttachment = 0x2D0; // CAttachmentNameSymbolWithStorage
                constexpr std::ptrdiff_t m_szMuzzleFlashParticle = 0x2F0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_szMuzzleFlashParticleConfig = 0x3D0; // CUtlString
                constexpr std::ptrdiff_t m_szBarrelSmokeParticle = 0x3D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                constexpr std::ptrdiff_t m_nMuzzleSmokeShotThreshold = 0x4B8; // uint8
                constexpr std::ptrdiff_t m_flMuzzleSmokeTimeout = 0x4BC; // float32
                constexpr std::ptrdiff_t m_flMuzzleSmokeDecrementRate = 0x4C0; // float32
                constexpr std::ptrdiff_t m_bGenerateMuzzleLight = 0x4C4; // bool
                constexpr std::ptrdiff_t m_bLinkedCooldowns = 0x4C5; // bool
                constexpr std::ptrdiff_t m_iFlags = 0x4C6; // ItemFlagTypes_t
                constexpr std::ptrdiff_t m_iWeight = 0x4C8; // int32
                constexpr std::ptrdiff_t m_bAutoSwitchTo = 0x4CC; // bool
                constexpr std::ptrdiff_t m_bAutoSwitchFrom = 0x4CD; // bool
                constexpr std::ptrdiff_t m_nPrimaryAmmoType = 0x4CE; // AmmoIndex_t
                constexpr std::ptrdiff_t m_nSecondaryAmmoType = 0x4CF; // AmmoIndex_t
                constexpr std::ptrdiff_t m_iMaxClip1 = 0x4D0; // int32
                constexpr std::ptrdiff_t m_iMaxClip2 = 0x4D4; // int32
                constexpr std::ptrdiff_t m_iDefaultClip1 = 0x4D8; // int32
                constexpr std::ptrdiff_t m_iDefaultClip2 = 0x4DC; // int32
                constexpr std::ptrdiff_t m_bReserveAmmoAsClips = 0x4E0; // bool
                constexpr std::ptrdiff_t m_bTreatAsSingleClip = 0x4E1; // bool
                constexpr std::ptrdiff_t m_bKeepLoadedAmmo = 0x4E2; // bool
                constexpr std::ptrdiff_t m_iRumbleEffect = 0x4E4; // RumbleEffect_t
                constexpr std::ptrdiff_t m_flDropSpeed = 0x4E8; // float32
                constexpr std::ptrdiff_t m_iSlot = 0x4EC; // int32
                constexpr std::ptrdiff_t m_iPosition = 0x4F0; // int32
                constexpr std::ptrdiff_t m_aShootSounds = 0x4F8; // CUtlOrderedMap<WeaponSound_t,CSoundEventName>
            }
            // Parent: None
            // Field count: 0
            namespace CEnvCombinedLightProbeVolumeAPI {
            }
            // Parent: C_BaseCSGrenade
            // Field count: 0
            namespace C_SmokeGrenade {
            }
            // Parent: C_CSGO_PreviewPlayer
            // Field count: 0
            namespace C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel {
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
            // Field count: 30
            namespace C_PointClientUIWorldPanel {
                constexpr std::ptrdiff_t m_bForceRecreateNextUpdate = 0xFE8; // bool
                constexpr std::ptrdiff_t m_bMoveViewToPlayerNextThink = 0xFE9; // bool
                constexpr std::ptrdiff_t m_bCheckCSSClasses = 0xFEA; // bool
                constexpr std::ptrdiff_t m_anchorDeltaTransform = 0xFF0; // CTransform
                constexpr std::ptrdiff_t m_pOffScreenIndicator = 0x1180; // CPointOffScreenIndicatorUi*
                constexpr std::ptrdiff_t m_bIgnoreInput = 0x11A8; // bool
                constexpr std::ptrdiff_t m_bLit = 0x11A9; // bool
                constexpr std::ptrdiff_t m_bFollowPlayerAcrossTeleport = 0x11AA; // bool
                constexpr std::ptrdiff_t m_flWidth = 0x11AC; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x11B0; // float32
                constexpr std::ptrdiff_t m_flDPI = 0x11B4; // float32
                constexpr std::ptrdiff_t m_flInteractDistance = 0x11B8; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0x11BC; // float32
                constexpr std::ptrdiff_t m_unOwnerContext = 0x11C0; // uint32
                constexpr std::ptrdiff_t m_unHorizontalAlign = 0x11C4; // uint32
                constexpr std::ptrdiff_t m_unVerticalAlign = 0x11C8; // uint32
                constexpr std::ptrdiff_t m_unOrientation = 0x11CC; // uint32
                constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0x11D0; // bool
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x11D8; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_bOpaque = 0x11F0; // bool
                constexpr std::ptrdiff_t m_bNoDepth = 0x11F1; // bool
                constexpr std::ptrdiff_t m_bVisibleWhenParentNoDraw = 0x11F2; // bool
                constexpr std::ptrdiff_t m_bRenderBackface = 0x11F3; // bool
                constexpr std::ptrdiff_t m_bUseOffScreenIndicator = 0x11F4; // bool
                constexpr std::ptrdiff_t m_bExcludeFromSaveGames = 0x11F5; // bool
                constexpr std::ptrdiff_t m_bGrabbable = 0x11F6; // bool
                constexpr std::ptrdiff_t m_bOnlyRenderToTexture = 0x11F7; // bool
                constexpr std::ptrdiff_t m_bDisableMipGen = 0x11F8; // bool
                constexpr std::ptrdiff_t m_nExplicitImageLayout = 0x11FC; // int32
                constexpr std::ptrdiff_t m_bIgnoreParentOrientation = 0x1200; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 3
            namespace C_EntityFlame {
                constexpr std::ptrdiff_t m_hEntAttached = 0x600; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hOldAttached = 0x628; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bCheapEffect = 0x62C; // bool
            }
            // Parent: CBaseAnimGraph
            // Field count: 0
            namespace CBaseAnimGraphAlias_baseanimating {
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_MapPreviewCameraPathNode_API {
            }
            // Parent: C_BaseEntity
            // Field count: 17
            namespace CBasePlayerController {
                constexpr std::ptrdiff_t m_CommandContext = 0x608; // C_CommandContext
                constexpr std::ptrdiff_t m_nInButtonsWhichAreToggles = 0x6B0; // uint64
                constexpr std::ptrdiff_t m_nTickBase = 0x6B8; // uint32
                constexpr std::ptrdiff_t m_hPawn = 0x6BC; // CHandle<C_BasePlayerPawn>
                constexpr std::ptrdiff_t m_bKnownTeamMismatch = 0x6C0; // bool
                constexpr std::ptrdiff_t m_hPredictedPawn = 0x6C4; // CHandle<C_BasePlayerPawn>
                constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x6C8; // CSplitScreenSlot
                constexpr std::ptrdiff_t m_hSplitOwner = 0x6CC; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_hSplitScreenPlayers = 0x6D0; // CUtlVector<CHandle<CBasePlayerController>>
                constexpr std::ptrdiff_t m_bIsHLTV = 0x6E8; // bool
                constexpr std::ptrdiff_t m_iConnected = 0x6EC; // PlayerConnectedState
                constexpr std::ptrdiff_t m_iMostConnected = 0x6F0; // PlayerConnectedState
                constexpr std::ptrdiff_t m_iszPlayerName = 0x6F4; // char[128]
                constexpr std::ptrdiff_t m_steamID = 0x780; // uint64
                constexpr std::ptrdiff_t m_bIsLocalPlayerController = 0x788; // bool
                constexpr std::ptrdiff_t m_bNoClipEnabled = 0x789; // bool
                constexpr std::ptrdiff_t m_iDesiredFOV = 0x78C; // uint32
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace C_CSGO_EndOfMatchLineupEndpoint {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyElementNameFn
            namespace GeneratedTextureHandle_t {
                constexpr std::ptrdiff_t m_strBitmapName = 0x0; // CUtlString
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CompositeMaterialInputContainer_t {
                constexpr std::ptrdiff_t m_bEnabled = 0x0; // bool
                constexpr std::ptrdiff_t m_nCompositeMaterialInputContainerSourceType = 0x4; // CompositeMaterialInputContainerSourceType_t
                constexpr std::ptrdiff_t m_strSpecificContainerMaterial = 0x8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIMaterial2>>
                constexpr std::ptrdiff_t m_strAttrName = 0xE8; // CUtlString
                constexpr std::ptrdiff_t m_strAlias = 0xF0; // CUtlString
                constexpr std::ptrdiff_t m_vecLooseVariables = 0xF8; // CUtlVector<CompositeMaterialInputLooseVariable_t>
                constexpr std::ptrdiff_t m_strAttrNameForVar = 0x110; // CUtlString
                constexpr std::ptrdiff_t m_bExposeExternally = 0x118; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CompositeMaterialAssemblyProcedure_t {
                constexpr std::ptrdiff_t m_vecCompMatIncludes = 0x0; // CUtlVector<CResourceNameTyped<CWeakHandle<InfoForResourceTypeCCompositeMaterialKit>>>
                constexpr std::ptrdiff_t m_vecMatchFilters = 0x18; // CUtlVector<CompositeMaterialMatchFilter_t>
                constexpr std::ptrdiff_t m_vecCompositeInputContainers = 0x30; // CUtlVector<CompositeMaterialInputContainer_t>
                constexpr std::ptrdiff_t m_vecPropertyMutators = 0x48; // CUtlVector<CompMatPropertyMutator_t>
            }
            // Parent: None
            // Field count: 37
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
                constexpr std::ptrdiff_t m_strExposedValueList = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_nVariableType = 0x40; // CompositeMaterialInputLooseVariableType_t
                constexpr std::ptrdiff_t m_bValueBoolean = 0x44; // bool
                constexpr std::ptrdiff_t m_nValueIntX = 0x48; // int32
                constexpr std::ptrdiff_t m_nValueIntY = 0x4C; // int32
                constexpr std::ptrdiff_t m_nValueIntZ = 0x50; // int32
                constexpr std::ptrdiff_t m_nValueIntW = 0x54; // int32
                constexpr std::ptrdiff_t m_bHasFloatBounds = 0x58; // bool
                constexpr std::ptrdiff_t m_flValueFloatX = 0x5C; // float32
                constexpr std::ptrdiff_t m_flValueFloatX_Min = 0x60; // float32
                constexpr std::ptrdiff_t m_flValueFloatX_Max = 0x64; // float32
                constexpr std::ptrdiff_t m_flValueFloatY = 0x68; // float32
                constexpr std::ptrdiff_t m_flValueFloatY_Min = 0x6C; // float32
                constexpr std::ptrdiff_t m_flValueFloatY_Max = 0x70; // float32
                constexpr std::ptrdiff_t m_flValueFloatZ = 0x74; // float32
                constexpr std::ptrdiff_t m_flValueFloatZ_Min = 0x78; // float32
                constexpr std::ptrdiff_t m_flValueFloatZ_Max = 0x7C; // float32
                constexpr std::ptrdiff_t m_flValueFloatW = 0x80; // float32
                constexpr std::ptrdiff_t m_flValueFloatW_Min = 0x84; // float32
                constexpr std::ptrdiff_t m_flValueFloatW_Max = 0x88; // float32
                constexpr std::ptrdiff_t m_cValueColor4 = 0x8C; // Color
                constexpr std::ptrdiff_t m_nValueSystemVar = 0x90; // CompositeMaterialVarSystemVar_t
                constexpr std::ptrdiff_t m_strResourceMaterial = 0x98; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIMaterial2>>
                constexpr std::ptrdiff_t m_strTextureContentAssetPath = 0x178; // CUtlString
                constexpr std::ptrdiff_t m_strTextureRuntimeResourcePath = 0x180; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCTextureBase>>
                constexpr std::ptrdiff_t m_strTextureCompilationVtexTemplate = 0x260; // CUtlString
                constexpr std::ptrdiff_t m_nTextureType = 0x268; // CompositeMaterialInputTextureType_t
                constexpr std::ptrdiff_t m_strString = 0x270; // CUtlString
                constexpr std::ptrdiff_t m_strPanoramaPanelPath = 0x278; // CUtlString
                constexpr std::ptrdiff_t m_nPanoramaRenderRes = 0x280; // int32
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace screenshake_t {
                constexpr std::ptrdiff_t endtime = 0x0; // GameTime_t
                constexpr std::ptrdiff_t duration = 0x4; // float32
                constexpr std::ptrdiff_t amplitude = 0x8; // float32
                constexpr std::ptrdiff_t frequency = 0xC; // float32
                constexpr std::ptrdiff_t nextShake = 0x10; // GameTime_t
                constexpr std::ptrdiff_t offset = 0x14; // Vector
                constexpr std::ptrdiff_t angle = 0x20; // float32
                constexpr std::ptrdiff_t direction = 0x28; // Vector
                constexpr std::ptrdiff_t nShakeType = 0x34; // uint8
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCS2UIPawnGraphController {
                constexpr std::ptrdiff_t m_nAnimationSeed = 0x88; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_characterMode = 0xA0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_bCharacterModeReset = 0xB8; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_nTeamPreviewVariant = 0xD0; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_nTeamPreviewRandom = 0xE8; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_nTeamPreviewPosition = 0x100; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_endOfMatchCelebration = 0x118; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_action = 0x130; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_bannerAnimation = 0x148; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_weaponCategory = 0x160; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_weaponType = 0x178; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_weaponState = 0x190; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_inspectTurnAngle = 0x1A8; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_bCT = 0x1C0; // CAnimGraph2ParamOptionalRef<bool>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace inv_image_light_barn_t {
                constexpr std::ptrdiff_t color = 0x0; // Vector
                constexpr std::ptrdiff_t angle = 0xC; // QAngle
                constexpr std::ptrdiff_t brightness = 0x18; // float32
                constexpr std::ptrdiff_t orbit_distance = 0x1C; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace inv_image_map_t {
                constexpr std::ptrdiff_t map_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t map_rotation = 0x8; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace inv_image_light_fill_t {
                constexpr std::ptrdiff_t color = 0x0; // Vector
                constexpr std::ptrdiff_t angle = 0xC; // QAngle
                constexpr std::ptrdiff_t brightness = 0x18; // float32
            }
            // Parent: None
            // Field count: 5
            namespace CInterpolatedValue {
                constexpr std::ptrdiff_t m_flStartTime = 0x0; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x4; // float32
                constexpr std::ptrdiff_t m_flStartValue = 0x8; // float32
                constexpr std::ptrdiff_t m_flEndValue = 0xC; // float32
                constexpr std::ptrdiff_t m_nInterpType = 0x10; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace inv_image_item_t {
                constexpr std::ptrdiff_t position = 0x0; // Vector
                constexpr std::ptrdiff_t angle = 0xC; // QAngle
                constexpr std::ptrdiff_t pose_sequence = 0x18; // CUtlString
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace TimedEvent {
                constexpr std::ptrdiff_t m_TimeBetweenEvents = 0x0; // float32
                constexpr std::ptrdiff_t m_fNextEvent = 0x4; // float32
            }
            // Parent: None
            // Field count: 13
            namespace CFlashlightEffect {
                constexpr std::ptrdiff_t m_bIsOn = 0x10; // bool
                constexpr std::ptrdiff_t m_bMuzzleFlashEnabled = 0x20; // bool
                constexpr std::ptrdiff_t m_flMuzzleFlashBrightness = 0x24; // float32
                constexpr std::ptrdiff_t m_quatMuzzleFlashOrientation = 0x30; // Quaternion
                constexpr std::ptrdiff_t m_vecMuzzleFlashOrigin = 0x40; // VectorWS
                constexpr std::ptrdiff_t m_flFov = 0x4C; // float32
                constexpr std::ptrdiff_t m_flFarZ = 0x50; // float32
                constexpr std::ptrdiff_t m_flLinearAtten = 0x54; // float32
                constexpr std::ptrdiff_t m_bCastsShadows = 0x58; // bool
                constexpr std::ptrdiff_t m_flCurrentPullBackDist = 0x5C; // float32
                constexpr std::ptrdiff_t m_FlashlightTexture = 0x60; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_MuzzleFlashTexture = 0x68; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_textureName = 0x70; // char[64]
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace inv_image_camera_t {
                constexpr std::ptrdiff_t angle = 0x0; // QAngle
                constexpr std::ptrdiff_t fov = 0xC; // float32
                constexpr std::ptrdiff_t znear = 0x10; // float32
                constexpr std::ptrdiff_t zfar = 0x14; // float32
                constexpr std::ptrdiff_t target = 0x18; // Vector
                constexpr std::ptrdiff_t target_nudge = 0x24; // Vector
                constexpr std::ptrdiff_t orbit_distance = 0x30; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataOutlinerDetailExpr
            // MVDataOverlayType
            // MVDataPreviewWidget
            // MVDataOutlinerLeafNameFn
            // MVDataOutlinerLeafColorFn
            // MVDataOutlinerLeafDetailFn
            // MVDataVirtualNodeFactoryFn
            // MVDataPreLoadFixupFn
            // MVDataPostSaveFixupFn
            namespace CInventoryImageData {
                constexpr std::ptrdiff_t m_nNodeType = 0x0; // InventoryNodeType_t
                constexpr std::ptrdiff_t name = 0x8; // CUtlString
                constexpr std::ptrdiff_t inventory_image_data = 0x10; // inv_image_data_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace inv_image_clearcolor_t {
                constexpr std::ptrdiff_t color = 0x0; // Vector
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_CommandContext {
                constexpr std::ptrdiff_t needsprocessing = 0x0; // bool
                constexpr std::ptrdiff_t command_number = 0xA0; // int32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CompositeMaterialEditorPoint_t {
                constexpr std::ptrdiff_t m_ModelName = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_nSequenceIndex = 0xE0; // int32
                constexpr std::ptrdiff_t m_flCycle = 0xE4; // float32
                constexpr std::ptrdiff_t m_KVModelStateChoices = 0xE8; // KeyValues3
                constexpr std::ptrdiff_t m_bEnableChildModel = 0xF8; // bool
                constexpr std::ptrdiff_t m_ChildModelName = 0x100; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_vecCompositeMaterialAssemblyProcedures = 0x1E0; // CUtlVector<CompositeMaterialAssemblyProcedure_t>
                constexpr std::ptrdiff_t m_vecCompositeMaterials = 0x1F8; // CUtlVector<CompositeMaterial_t>
            }
            // Parent: None
            // Field count: 0
            namespace CPlayerSprayDecalRenderHelper {
            }
            // Parent: None
            // Field count: 13
            namespace C_IronSightController {
                constexpr std::ptrdiff_t m_bIronSightAvailable = 0x10; // bool
                constexpr std::ptrdiff_t m_flIronSightAmount = 0x14; // float32
                constexpr std::ptrdiff_t m_flIronSightAmountGained = 0x18; // float32
                constexpr std::ptrdiff_t m_flIronSightAmountBiased = 0x1C; // float32
                constexpr std::ptrdiff_t m_flIronSightAmount_Interpolated = 0x20; // float32
                constexpr std::ptrdiff_t m_flIronSightAmountGained_Interpolated = 0x24; // float32
                constexpr std::ptrdiff_t m_flIronSightAmountBiased_Interpolated = 0x28; // float32
                constexpr std::ptrdiff_t m_flInterpolationLastUpdated = 0x2C; // float32
                constexpr std::ptrdiff_t m_angDeltaAverage = 0x30; // QAngle[8]
                constexpr std::ptrdiff_t m_angViewLast = 0x90; // QAngle
                constexpr std::ptrdiff_t m_vecDotCoords = 0x9C; // Vector2D
                constexpr std::ptrdiff_t m_flFiringInaccuracyExtraWidthMultiplier = 0xA4; // float32
                constexpr std::ptrdiff_t m_flSpeedRatio = 0xA8; // float32
            }
            // Parent: None
            // Field count: 5
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
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace inv_image_data_t {
                constexpr std::ptrdiff_t map = 0x0; // inv_image_map_t
                constexpr std::ptrdiff_t item = 0x10; // inv_image_item_t
                constexpr std::ptrdiff_t camera = 0x30; // inv_image_camera_t
                constexpr std::ptrdiff_t lightsun = 0x64; // inv_image_light_sun_t
                constexpr std::ptrdiff_t lightfill = 0x80; // inv_image_light_fill_t
                constexpr std::ptrdiff_t light0 = 0x9C; // inv_image_light_barn_t
                constexpr std::ptrdiff_t light1 = 0xBC; // inv_image_light_barn_t
                constexpr std::ptrdiff_t clearcolor = 0xDC; // inv_image_clearcolor_t
            }
            // Parent: None
            // Field count: 29
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
                constexpr std::ptrdiff_t m_strGenerateTexture_TargetParam = 0x2F0; // CUtlString
                constexpr std::ptrdiff_t m_strGenerateTexture_InitialContainer = 0x2F8; // CUtlString
                constexpr std::ptrdiff_t m_nResolution = 0x300; // int32
                constexpr std::ptrdiff_t m_bIsScratchTarget = 0x304; // bool
                constexpr std::ptrdiff_t m_strCompressionFormat = 0x308; // CUtlString
                constexpr std::ptrdiff_t m_bSplatDebugInfo = 0x310; // bool
                constexpr std::ptrdiff_t m_bCaptureInRenderDoc = 0x311; // bool
                constexpr std::ptrdiff_t m_vecTexGenInstructions = 0x318; // CUtlVector<CompMatPropertyMutator_t>
                constexpr std::ptrdiff_t m_vecConditionalMutators = 0x330; // CUtlVector<CompMatPropertyMutator_t>
                constexpr std::ptrdiff_t m_strPopInputQueue_Container = 0x348; // CUtlString
                constexpr std::ptrdiff_t m_strDrawText_InputContainerSrc = 0x350; // CUtlString
                constexpr std::ptrdiff_t m_strDrawText_InputContainerProperty = 0x358; // CUtlString
                constexpr std::ptrdiff_t m_vecDrawText_Position = 0x360; // Vector2D
                constexpr std::ptrdiff_t m_colDrawText_Color = 0x368; // Color
                constexpr std::ptrdiff_t m_strDrawText_Font = 0x370; // CUtlString
                constexpr std::ptrdiff_t m_vecConditions = 0x378; // CUtlVector<CompMatMutatorCondition_t>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCompositeMaterialEditorDoc {
                constexpr std::ptrdiff_t m_nVersion = 0x8; // int32
                constexpr std::ptrdiff_t m_Points = 0x10; // CUtlVector<CompositeMaterialEditorPoint_t>
                constexpr std::ptrdiff_t m_KVthumbnail = 0x28; // KeyValues3
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CClientAlphaProperty {
                constexpr std::ptrdiff_t m_nDistFadeStart = 0x10; // uint16
                constexpr std::ptrdiff_t m_nDistFadeEnd = 0x12; // uint16
                constexpr std::ptrdiff_t m_nDesyncOffset = 0x0; // bitfield:14
                constexpr std::ptrdiff_t m_bAlphaOverride = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bShadowAlphaOverride = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_nRenderMode = 0x0; // bitfield:3
                constexpr std::ptrdiff_t m_nRenderFX = 0x0; // bitfield:5
                constexpr std::ptrdiff_t m_nAlpha = 0x17; // uint8
                constexpr std::ptrdiff_t m_flFadeScale = 0x18; // float32
                constexpr std::ptrdiff_t m_flRenderFxStartTime = 0x1C; // GameTime_t
                constexpr std::ptrdiff_t m_flRenderFxDuration = 0x20; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace screenfade_t {
                constexpr std::ptrdiff_t Speed = 0x0; // float32
                constexpr std::ptrdiff_t End = 0x4; // float32
                constexpr std::ptrdiff_t Reset = 0x8; // float32
                constexpr std::ptrdiff_t m_Color = 0xC; // Color
                constexpr std::ptrdiff_t Flags = 0x10; // int32
            }
            // Parent: None
            // Field count: 43
            namespace CGlobalLightBase {
                constexpr std::ptrdiff_t m_bSpotLight = 0x10; // bool
                constexpr std::ptrdiff_t m_SpotLightOrigin = 0x14; // VectorWS
                constexpr std::ptrdiff_t m_SpotLightAngles = 0x20; // QAngle
                constexpr std::ptrdiff_t m_ShadowDirection = 0x2C; // Vector
                constexpr std::ptrdiff_t m_AmbientDirection = 0x38; // Vector
                constexpr std::ptrdiff_t m_SpecularDirection = 0x44; // Vector
                constexpr std::ptrdiff_t m_InspectorSpecularDirection = 0x50; // Vector
                constexpr std::ptrdiff_t m_flSpecularPower = 0x5C; // float32
                constexpr std::ptrdiff_t m_flSpecularIndependence = 0x60; // float32
                constexpr std::ptrdiff_t m_SpecularColor = 0x64; // Color
                constexpr std::ptrdiff_t m_bStartDisabled = 0x68; // bool
                constexpr std::ptrdiff_t m_bEnabled = 0x69; // bool
                constexpr std::ptrdiff_t m_LightColor = 0x6A; // Color
                constexpr std::ptrdiff_t m_AmbientColor1 = 0x6E; // Color
                constexpr std::ptrdiff_t m_AmbientColor2 = 0x72; // Color
                constexpr std::ptrdiff_t m_AmbientColor3 = 0x76; // Color
                constexpr std::ptrdiff_t m_flSunDistance = 0x7C; // float32
                constexpr std::ptrdiff_t m_flFOV = 0x80; // float32
                constexpr std::ptrdiff_t m_flNearZ = 0x84; // float32
                constexpr std::ptrdiff_t m_flFarZ = 0x88; // float32
                constexpr std::ptrdiff_t m_bEnableShadows = 0x8C; // bool
                constexpr std::ptrdiff_t m_bOldEnableShadows = 0x8D; // bool
                constexpr std::ptrdiff_t m_bBackgroundClearNotRequired = 0x8E; // bool
                constexpr std::ptrdiff_t m_flCloudScale = 0x90; // float32
                constexpr std::ptrdiff_t m_flCloud1Speed = 0x94; // float32
                constexpr std::ptrdiff_t m_flCloud1Direction = 0x98; // float32
                constexpr std::ptrdiff_t m_flCloud2Speed = 0x9C; // float32
                constexpr std::ptrdiff_t m_flCloud2Direction = 0xA0; // float32
                constexpr std::ptrdiff_t m_flAmbientScale1 = 0xB0; // float32
                constexpr std::ptrdiff_t m_flAmbientScale2 = 0xB4; // float32
                constexpr std::ptrdiff_t m_flGroundScale = 0xB8; // float32
                constexpr std::ptrdiff_t m_flLightScale = 0xBC; // float32
                constexpr std::ptrdiff_t m_flFoWDarkness = 0xC0; // float32
                constexpr std::ptrdiff_t m_bEnableSeparateSkyboxFog = 0xC4; // bool
                constexpr std::ptrdiff_t m_vFowColor = 0xC8; // Vector
                constexpr std::ptrdiff_t m_ViewOrigin = 0xD4; // VectorWS
                constexpr std::ptrdiff_t m_ViewAngles = 0xE0; // QAngle
                constexpr std::ptrdiff_t m_flViewFoV = 0xEC; // float32
                constexpr std::ptrdiff_t m_WorldPoints = 0xF0; // VectorWS[8]
                constexpr std::ptrdiff_t m_vFogOffsetLayer0 = 0x4A8; // Vector2D
                constexpr std::ptrdiff_t m_vFogOffsetLayer1 = 0x4B0; // Vector2D
                constexpr std::ptrdiff_t m_hEnvWind = 0x4B8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hEnvSky = 0x4BC; // CHandle<C_BaseEntity>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace IClientAlphaProperty {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace inv_image_light_sun_t {
                constexpr std::ptrdiff_t color = 0x0; // Vector
                constexpr std::ptrdiff_t angle = 0xC; // QAngle
                constexpr std::ptrdiff_t brightness = 0x18; // float32
            }
            // Parent: None
            // Field count: 4
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
            // Field count: 4
            //
            // Metadata:
            // MPropertyElementNameFn
            namespace CompositeMaterial_t {
                constexpr std::ptrdiff_t m_TargetKVs = 0x8; // KeyValues3
                constexpr std::ptrdiff_t m_PreGenerationKVs = 0x18; // KeyValues3
                constexpr std::ptrdiff_t m_FinalKVs = 0x58; // KeyValues3
                constexpr std::ptrdiff_t m_vecGeneratedTextures = 0x80; // CUtlVector<GeneratedTextureHandle_t>
            }
        }
    }
}
