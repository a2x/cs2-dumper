// Generated using https://github.com/a2x/cs2-dumper
// 2026-10-15 20:28:01.381534584 UTC

#pragma once

#include <cstddef>
#include <cstdint>

namespace cs2_dumper {
    namespace schemas {
        // Module: libclient.so
        // Class count: 542
        // Enum count: 14
        namespace libclient_so {
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
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TeamIntroCharacterPosition {
            }
            // Parent: None
            // Field count: 0
            namespace C_FireCrackerBlast {
            }
            // Parent: None
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
            // Parent: None
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
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_RaceCursors {
                constexpr std::ptrdiff_t m_Outflows = 0xD8; // CUtlVector<CPulse_OutflowConnection>
                constexpr std::ptrdiff_t m_OnFinished = 0xF0; // CPulse_ResumePoint
            }
            // Parent: None
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
                constexpr std::ptrdiff_t m_skyboxData = 0x780; // sky3dparams_t
                constexpr std::ptrdiff_t m_skyboxSlotToken = 0x810; // CUtlStringToken
                constexpr std::ptrdiff_t m_bUseAngles = 0x814; // bool
                constexpr std::ptrdiff_t m_pNext = 0x818; // C_SkyCamera*
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Base {
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x8; // PulseDocNodeID_t
            }
            // Parent: None
            // Field count: 0
            namespace C_FuncRotating {
            }
            // Parent: C_BaseEntity
            // Field count: 6
            namespace C_SoundOpvarSetPointBase {
                constexpr std::ptrdiff_t m_iszStackName = 0x780; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperatorName = 0x788; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvarName = 0x790; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iOpvarIndex = 0x798; // int32
                constexpr std::ptrdiff_t m_bUseAutoCompare = 0x79C; // bool
                constexpr std::ptrdiff_t m_bFastRefresh = 0x79D; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 24
            namespace C_EnvCubemapFog {
                constexpr std::ptrdiff_t m_flEndDistance = 0x77C; // float32
                constexpr std::ptrdiff_t m_flStartDistance = 0x780; // float32
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x784; // float32
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x788; // bool
                constexpr std::ptrdiff_t m_flFogHeightWidth = 0x78C; // float32
                constexpr std::ptrdiff_t m_flFogHeightEnd = 0x790; // float32
                constexpr std::ptrdiff_t m_flFogHeightStart = 0x794; // float32
                constexpr std::ptrdiff_t m_flFogHeightExponent = 0x798; // float32
                constexpr std::ptrdiff_t m_flLODBias = 0x79C; // float32
                constexpr std::ptrdiff_t m_bActive = 0x7A0; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0x7A1; // bool
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x7A4; // float32
                constexpr std::ptrdiff_t m_nCubemapSourceType = 0x7A8; // int32
                constexpr std::ptrdiff_t m_hSkyMaterial = 0x7B0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_iszSkyEntity = 0x7B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nHeightFogType = 0x7C0; // int32
                constexpr std::ptrdiff_t m_nFogHeightBlendMode = 0x7C4; // int32
                constexpr std::ptrdiff_t m_nFogHeightCoordinateSpace = 0x7C8; // int32
                constexpr std::ptrdiff_t m_nDistanceFogType = 0x7CC; // int32
                constexpr std::ptrdiff_t m_DistanceFogCurveString = 0x7D0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_HeightFogCurveString = 0x7D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFogCubemapTexture = 0x870; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_bHasHeightFogEnd = 0x878; // bool
                constexpr std::ptrdiff_t m_bFirstTime = 0x879; // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TeamSelectTerroristPosition {
            }
            // Parent: C_ParticleSystem
            // Field count: 5
            namespace C_EnvParticleGlow {
                constexpr std::ptrdiff_t m_flAlphaScale = 0x15F0; // float32
                constexpr std::ptrdiff_t m_flRadiusScale = 0x15F4; // float32
                constexpr std::ptrdiff_t m_flSelfIllumScale = 0x15F8; // float32
                constexpr std::ptrdiff_t m_ColorTint = 0x15FC; // Color
                constexpr std::ptrdiff_t m_hTextureOverride = 0x1600; // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
            // Parent: None
            // Field count: 0
            namespace CCS_PortraitWorldCallbackHandler {
            }
            // Parent: None
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
                constexpr std::ptrdiff_t m_vFanOriginOffset = 0x1108; // Vector
                constexpr std::ptrdiff_t m_vDirection = 0x1114; // Vector
                constexpr std::ptrdiff_t m_bPushTowardsInfoTarget = 0x1120; // bool
                constexpr std::ptrdiff_t m_bPushAwayFromInfoTarget = 0x1121; // bool
                constexpr std::ptrdiff_t m_qNoiseDelta = 0x1130; // Quaternion
                constexpr std::ptrdiff_t m_hInfoFan = 0x1140; // CHandle<CInfoFan>
                constexpr std::ptrdiff_t m_flForce = 0x1144; // float32
                constexpr std::ptrdiff_t m_bFalloff = 0x1148; // bool
                constexpr std::ptrdiff_t m_RampTimer = 0x1150; // CountdownTimer
            }
            // Parent: None
            // Field count: 0
            namespace C_HostageCarriableProp {
            }
            // Parent: None
            // Field count: 6
            namespace C_BulletHitModel {
                constexpr std::ptrdiff_t m_matLocal = 0x11F0; // matrix3x4_t
                constexpr std::ptrdiff_t m_iBoneIndex = 0x1220; // int32
                constexpr std::ptrdiff_t m_hPlayerParent = 0x1224; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bIsHit = 0x1228; // bool
                constexpr std::ptrdiff_t m_flTimeCreated = 0x122C; // float32
                constexpr std::ptrdiff_t m_vecStartPos = 0x1230; // VectorWS
            }
            // Parent: None
            // Field count: 3
            namespace C_FuncElectrifiedVolume {
                constexpr std::ptrdiff_t m_nAmbientEffect = 0x1020; // ParticleIndex_t
                constexpr std::ptrdiff_t m_EffectName = 0x1028; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bState = 0x1030; // bool
            }
            // Parent: None
            // Field count: 17
            namespace C_MapVetoPickController {
                constexpr std::ptrdiff_t m_nDraftType = 0x78C; // int32
                constexpr std::ptrdiff_t m_nTeamWinningCoinToss = 0x790; // int32
                constexpr std::ptrdiff_t m_nTeamWithFirstChoice = 0x794; // int32[64]
                constexpr std::ptrdiff_t m_nVoteMapIdsList = 0x894; // int32[7]
                constexpr std::ptrdiff_t m_nAccountIDs = 0x8B0; // int32[64]
                constexpr std::ptrdiff_t m_nMapId0 = 0x9B0; // int32[64]
                constexpr std::ptrdiff_t m_nMapId1 = 0xAB0; // int32[64]
                constexpr std::ptrdiff_t m_nMapId2 = 0xBB0; // int32[64]
                constexpr std::ptrdiff_t m_nMapId3 = 0xCB0; // int32[64]
                constexpr std::ptrdiff_t m_nMapId4 = 0xDB0; // int32[64]
                constexpr std::ptrdiff_t m_nMapId5 = 0xEB0; // int32[64]
                constexpr std::ptrdiff_t m_nStartingSide0 = 0xFB0; // int32[64]
                constexpr std::ptrdiff_t m_nCurrentPhase = 0x10B0; // int32
                constexpr std::ptrdiff_t m_nPhaseStartTick = 0x10B4; // int32
                constexpr std::ptrdiff_t m_nPhaseDurationTicks = 0x10B8; // int32
                constexpr std::ptrdiff_t m_nPostDataUpdateTick = 0x10BC; // int32
                constexpr std::ptrdiff_t m_bDisabledHud = 0x10C0; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 18
            namespace C_EnvVolumetricFogVolume {
                constexpr std::ptrdiff_t m_bActive = 0x77C; // bool
                constexpr std::ptrdiff_t m_vBoxMins = 0x780; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x78C; // Vector
                constexpr std::ptrdiff_t m_bStartDisabled = 0x798; // bool
                constexpr std::ptrdiff_t m_bIndirectUseLPVs = 0x799; // bool
                constexpr std::ptrdiff_t m_flStrength = 0x79C; // float32
                constexpr std::ptrdiff_t m_nFalloffShape = 0x7A0; // int32
                constexpr std::ptrdiff_t m_flFalloffExponent = 0x7A4; // float32
                constexpr std::ptrdiff_t m_flHeightFogDepth = 0x7A8; // float32
                constexpr std::ptrdiff_t m_fHeightFogEdgeWidth = 0x7AC; // float32
                constexpr std::ptrdiff_t m_fIndirectLightStrength = 0x7B0; // float32
                constexpr std::ptrdiff_t m_fSunLightStrength = 0x7B4; // float32
                constexpr std::ptrdiff_t m_fNoiseStrength = 0x7B8; // float32
                constexpr std::ptrdiff_t m_TintColor = 0x7BC; // Color
                constexpr std::ptrdiff_t m_bOverrideTintColor = 0x7C0; // bool
                constexpr std::ptrdiff_t m_bOverrideIndirectLightStrength = 0x7C1; // bool
                constexpr std::ptrdiff_t m_bOverrideSunLightStrength = 0x7C2; // bool
                constexpr std::ptrdiff_t m_bOverrideNoiseStrength = 0x7C3; // bool
            }
            // Parent: None
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
            // Parent: C_BaseModelEntity
            // Field count: 76
            namespace C_BarnLight {
                constexpr std::ptrdiff_t m_bEnabled = 0x1020; // bool
                constexpr std::ptrdiff_t m_nColorMode = 0x1024; // int32
                constexpr std::ptrdiff_t m_Color = 0x1028; // Color
                constexpr std::ptrdiff_t m_flColorTemperature = 0x102C; // float32
                constexpr std::ptrdiff_t m_flBrightness = 0x1030; // float32
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x1034; // float32
                constexpr std::ptrdiff_t m_nDirectLight = 0x1038; // int32
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x103C; // int32
                constexpr std::ptrdiff_t m_nLightPathUniqueId = 0x1040; // int32
                constexpr std::ptrdiff_t m_nLightMapUniqueId = 0x1044; // int32
                constexpr std::ptrdiff_t m_nLuminaireShape = 0x1048; // int32
                constexpr std::ptrdiff_t m_flLuminaireSize = 0x104C; // float32
                constexpr std::ptrdiff_t m_flLuminaireAnisotropy = 0x1050; // float32
                constexpr std::ptrdiff_t m_LightStyleString = 0x1058; // CUtlString
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x1060; // GameTime_t
                constexpr std::ptrdiff_t m_QueuedLightStyleStrings = 0x1068; // C_NetworkUtlVectorBase<CUtlString>
                constexpr std::ptrdiff_t m_LightStyleEvents = 0x1080; // C_NetworkUtlVectorBase<CUtlString>
                constexpr std::ptrdiff_t m_LightStyleTargets = 0x1098; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_StyleEvent = 0x10B0; // CEntityIOOutput[4]
                constexpr std::ptrdiff_t m_hLightCookie = 0x1110; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_flShape = 0x1118; // float32
                constexpr std::ptrdiff_t m_flSoftX = 0x111C; // float32
                constexpr std::ptrdiff_t m_flSoftY = 0x1120; // float32
                constexpr std::ptrdiff_t m_flSkirt = 0x1124; // float32
                constexpr std::ptrdiff_t m_flSkirtNear = 0x1128; // float32
                constexpr std::ptrdiff_t m_vSizeParams = 0x112C; // Vector
                constexpr std::ptrdiff_t m_flRange = 0x1138; // float32
                constexpr std::ptrdiff_t m_vShear = 0x113C; // Vector
                constexpr std::ptrdiff_t m_nBakeSpecularToCubemaps = 0x1148; // int32
                constexpr std::ptrdiff_t m_vBakeSpecularToCubemapsSize = 0x114C; // Vector
                constexpr std::ptrdiff_t m_flBakeSpecularToCubemapsScale = 0x1158; // float32
                constexpr std::ptrdiff_t m_nCastShadows = 0x115C; // int32
                constexpr std::ptrdiff_t m_nShadowMapSize = 0x1160; // int32
                constexpr std::ptrdiff_t m_nShadowPriority = 0x1164; // int32
                constexpr std::ptrdiff_t m_bContactShadow = 0x1168; // bool
                constexpr std::ptrdiff_t m_bForceShadowsEnabled = 0x1169; // bool
                constexpr std::ptrdiff_t m_nBounceLight = 0x116C; // int32
                constexpr std::ptrdiff_t m_flBounceScale = 0x1170; // float32
                constexpr std::ptrdiff_t m_flMinRoughness = 0x1174; // float32
                constexpr std::ptrdiff_t m_vAlternateColor = 0x1178; // Vector
                constexpr std::ptrdiff_t m_fAlternateColorBrightness = 0x1184; // float32
                constexpr std::ptrdiff_t m_nFog = 0x1188; // int32
                constexpr std::ptrdiff_t m_flFogStrength = 0x118C; // float32
                constexpr std::ptrdiff_t m_nFogShadows = 0x1190; // int32
                constexpr std::ptrdiff_t m_flFogScale = 0x1194; // float32
                constexpr std::ptrdiff_t m_flFadeSizeStart = 0x1198; // float32
                constexpr std::ptrdiff_t m_flFadeSizeEnd = 0x119C; // float32
                constexpr std::ptrdiff_t m_flShadowFadeSizeStart = 0x11A0; // float32
                constexpr std::ptrdiff_t m_flShadowFadeSizeEnd = 0x11A4; // float32
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x11A8; // bool
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x11AC; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x11B8; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x11C4; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x11D0; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x11DC; // Vector
                constexpr std::ptrdiff_t m_nPrecomputedSubFrusta = 0x11E8; // int32
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin0 = 0x11EC; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles0 = 0x11F8; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent0 = 0x1204; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin1 = 0x1210; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles1 = 0x121C; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent1 = 0x1228; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin2 = 0x1234; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles2 = 0x1240; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent2 = 0x124C; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin3 = 0x1258; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles3 = 0x1264; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent3 = 0x1270; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin4 = 0x127C; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles4 = 0x1288; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent4 = 0x1294; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin5 = 0x12A0; // Vector
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles5 = 0x12AC; // QAngle
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent5 = 0x12B8; // Vector
                constexpr std::ptrdiff_t m_bInitialBoneSetup = 0x1308; // bool
                constexpr std::ptrdiff_t m_VisClusters = 0x1310; // C_NetworkUtlVectorBase<uint16>
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
                constexpr std::ptrdiff_t m_bBeenEnabled = 0x1269; // bool
                constexpr std::ptrdiff_t m_bHide = 0x126A; // bool
                constexpr std::ptrdiff_t m_flSeenTargetTime = 0x126C; // float32
                constexpr std::ptrdiff_t m_pTargetPanel = 0x1270; // C_PointClientUIWorldPanel*
            }
            // Parent: None
            // Field count: 0
            namespace CCSObserver_UseServices {
            }
            // Parent: C_BaseTrigger
            // Field count: 12
            namespace C_PostProcessingVolume {
                constexpr std::ptrdiff_t m_hPostSettings = 0x1118; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
                constexpr std::ptrdiff_t m_flFadeDuration = 0x1120; // float32
                constexpr std::ptrdiff_t m_flMinLogExposure = 0x1124; // float32
                constexpr std::ptrdiff_t m_flMaxLogExposure = 0x1128; // float32
                constexpr std::ptrdiff_t m_flMinExposure = 0x112C; // float32
                constexpr std::ptrdiff_t m_flMaxExposure = 0x1130; // float32
                constexpr std::ptrdiff_t m_flExposureCompensation = 0x1134; // float32
                constexpr std::ptrdiff_t m_flExposureFadeSpeedUp = 0x1138; // float32
                constexpr std::ptrdiff_t m_flExposureFadeSpeedDown = 0x113C; // float32
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x1140; // float32
                constexpr std::ptrdiff_t m_bMaster = 0x1144; // bool
                constexpr std::ptrdiff_t m_bExposureControl = 0x1145; // bool
            }
            // Parent: C_BaseTrigger
            // Field count: 1
            namespace CCSMinimapVolume {
                constexpr std::ptrdiff_t m_strMinimapName = 0x1120; // CUtlString
            }
            // Parent: None
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
            // Parent: None
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
                constexpr std::ptrdiff_t m_fFanForceMaxRadius = 0x7C0; // float32
                constexpr std::ptrdiff_t m_fFanForceMinRadius = 0x7C4; // float32
                constexpr std::ptrdiff_t m_flCurveDistRange = 0x7C8; // float32
                constexpr std::ptrdiff_t m_FanForceCurveString = 0x7D0; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 7
            namespace C_VoteController {
                constexpr std::ptrdiff_t m_iActiveIssueIndex = 0x78C; // int32
                constexpr std::ptrdiff_t m_iOnlyTeamToVote = 0x790; // int32
                constexpr std::ptrdiff_t m_nVoteOptionCount = 0x794; // int32[5]
                constexpr std::ptrdiff_t m_nPotentialVotes = 0x7A8; // int32
                constexpr std::ptrdiff_t m_bVotesDirty = 0x7AC; // bool
                constexpr std::ptrdiff_t m_bTypeDirty = 0x7AD; // bool
                constexpr std::ptrdiff_t m_bIsYesNoVote = 0x7AE; // bool
            }
            // Parent: None
            // Field count: 10
            namespace C_C4 {
                constexpr std::ptrdiff_t m_activeLightParticleIndex = 0x2DA8; // ParticleIndex_t
                constexpr std::ptrdiff_t m_eActiveLightEffect = 0x2DAC; // C4LightEffect_t
                constexpr std::ptrdiff_t m_bStartedArming = 0x2DB0; // bool
                constexpr std::ptrdiff_t m_fArmedTime = 0x2DB4; // GameTime_t
                constexpr std::ptrdiff_t m_bBombPlacedAnimation = 0x2DB8; // bool
                constexpr std::ptrdiff_t m_bIsPlantingViaUse = 0x2DB9; // bool
                constexpr std::ptrdiff_t m_entitySpottedState = 0x2DC0; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSpotRules = 0x2DD8; // int32
                constexpr std::ptrdiff_t m_bPlayedArmingBeeps = 0x2DDC; // bool[7]
                constexpr std::ptrdiff_t m_bBombPlanted = 0x2DE3; // bool
            }
            // Parent: C_BasePlayerPawn
            // Field count: 26
            namespace C_CSPlayerPawnBase {
                constexpr std::ptrdiff_t m_pPingServices = 0x1460; // CCSPlayer_PingServices*
                constexpr std::ptrdiff_t m_previousPlayerState = 0x1468; // CSPlayerState
                constexpr std::ptrdiff_t m_iPlayerState = 0x146C; // CSPlayerState
                constexpr std::ptrdiff_t m_bHasMovedSinceSpawn = 0x1470; // bool
                constexpr std::ptrdiff_t m_flLastSpawnTimeIndex = 0x1474; // GameTime_t
                constexpr std::ptrdiff_t m_iProgressBarDuration = 0x1478; // int32
                constexpr std::ptrdiff_t m_flProgressBarStartTime = 0x147C; // float32
                constexpr std::ptrdiff_t m_flClientDeathTime = 0x1480; // GameTime_t
                constexpr std::ptrdiff_t m_flFlashBangTime = 0x1484; // float32
                constexpr std::ptrdiff_t m_flFlashScreenshotAlpha = 0x1488; // float32
                constexpr std::ptrdiff_t m_flFlashOverlayAlpha = 0x148C; // float32
                constexpr std::ptrdiff_t m_bFlashBuildUp = 0x1490; // bool
                constexpr std::ptrdiff_t m_bFlashDspHasBeenCleared = 0x1491; // bool
                constexpr std::ptrdiff_t m_bFlashScreenshotHasBeenGrabbed = 0x1492; // bool
                constexpr std::ptrdiff_t m_flFlashMaxAlpha = 0x1494; // float32
                constexpr std::ptrdiff_t m_flFlashDuration = 0x1498; // float32
                constexpr std::ptrdiff_t m_flClientHealthFadeChangeTimestamp = 0x149C; // GameTime_t
                constexpr std::ptrdiff_t m_nClientHealthFadeParityValue = 0x14A0; // int32
                constexpr std::ptrdiff_t m_fNextThinkPushAway = 0x14A4; // float32
                constexpr std::ptrdiff_t m_flCurrentMusicStartTime = 0x14AC; // float32
                constexpr std::ptrdiff_t m_flMusicRoundStartTime = 0x14B0; // float32
                constexpr std::ptrdiff_t m_bDeferStartMusicOnWarmup = 0x14B4; // bool
                constexpr std::ptrdiff_t m_flLastSmokeOverlayAlpha = 0x14B8; // float32
                constexpr std::ptrdiff_t m_flLastSmokeAge = 0x14BC; // float32
                constexpr std::ptrdiff_t m_vLastSmokeOverlayColor = 0x14C0; // Vector
                constexpr std::ptrdiff_t m_hOriginalController = 0x14E8; // CHandle<CCSPlayerController>
            }
            // Parent: CBaseProp
            // Field count: 29
            namespace C_BreakableProp {
                constexpr std::ptrdiff_t m_CPropDataComponent = 0x1220; // CPropDataComponent
                constexpr std::ptrdiff_t m_OnStartDeath = 0x1260; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBreak = 0x1278; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnHealthChanged = 0x1290; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnTakeDamage = 0x12B0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_impactEnergyScale = 0x12C8; // float32
                constexpr std::ptrdiff_t m_iMinHealthDmg = 0x12CC; // int32
                constexpr std::ptrdiff_t m_flPressureDelay = 0x12D0; // float32
                constexpr std::ptrdiff_t m_flDefBurstScale = 0x12D4; // float32
                constexpr std::ptrdiff_t m_vDefBurstOffset = 0x12D8; // Vector
                constexpr std::ptrdiff_t m_hBreaker = 0x12E4; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_PerformanceMode = 0x12E8; // PerformanceMode_t
                constexpr std::ptrdiff_t m_flPreventDamageBeforeTime = 0x12EC; // GameTime_t
                constexpr std::ptrdiff_t m_BreakableContentsType = 0x12F0; // BreakableContentsType_t
                constexpr std::ptrdiff_t m_strBreakableContentsPropGroupOverride = 0x12F8; // CUtlString
                constexpr std::ptrdiff_t m_strBreakableContentsParticleOverride = 0x1300; // CUtlString
                constexpr std::ptrdiff_t m_bHasBreakPiecesOrCommands = 0x1308; // bool
                constexpr std::ptrdiff_t m_explodeDamage = 0x130C; // float32
                constexpr std::ptrdiff_t m_explodeRadius = 0x1310; // float32
                constexpr std::ptrdiff_t m_sExplosionType = 0x1318; // CGlobalSymbol
                constexpr std::ptrdiff_t m_explosionDelay = 0x1320; // float32
                constexpr std::ptrdiff_t m_explosionBuildupSound = 0x1328; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionCustomEffect = 0x1330; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionCustomSound = 0x1338; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionModifier = 0x1340; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hPhysicsAttacker = 0x1348; // CHandle<C_BasePlayerPawn>
                constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0x134C; // GameTime_t
                constexpr std::ptrdiff_t m_flDefaultFadeScale = 0x1350; // float32
                constexpr std::ptrdiff_t m_hLastAttacker = 0x1354; // CHandle<C_BaseEntity>
            }
            // Parent: None
            // Field count: 0
            namespace CCSGO_WingmanIntroTerroristPosition {
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
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            namespace C_SoundOpvarSetDomeEntity {
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
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CPulseCell_WaitForObservable {
                constexpr std::ptrdiff_t m_Condition = 0xD8; // CPulseObservableExpression<bool>
                constexpr std::ptrdiff_t m_OnTrue = 0x168; // CPulse_ResumePoint
            }
            // Parent: C_SoundAreaEntityBase
            // Field count: 1
            namespace C_SoundAreaEntitySphere {
                constexpr std::ptrdiff_t m_flRadius = 0x79C; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Step_EntFire {
                constexpr std::ptrdiff_t m_Input = 0x48; // CUtlString
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponAWP {
            }
            // Parent: C_BaseModelEntity
            // Field count: 3
            namespace C_BaseButton {
                constexpr std::ptrdiff_t m_glowEntity = 0x1020; // CHandle<C_BaseModelEntity>
                constexpr std::ptrdiff_t m_usable = 0x1024; // bool
                constexpr std::ptrdiff_t m_szDisplayText = 0x1028; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 1
            namespace CCSObserver_ObserverServices {
                constexpr std::ptrdiff_t m_obsInterpState = 0x70; // ObserverInterpState_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CHitboxComponent {
                constexpr std::ptrdiff_t m_flBoundsExpandRadius = 0x14; // float32
            }
            // Parent: C_BaseEntity
            // Field count: 2
            namespace C_SoundEventBoxHelper {
                constexpr std::ptrdiff_t m_vMins = 0x77C; // Vector
                constexpr std::ptrdiff_t m_vMaxs = 0x788; // Vector
            }
            // Parent: C_SoundEventMultiPointEntity
            // Field count: 1
            namespace C_SoundEventBoxEntity {
                constexpr std::ptrdiff_t m_vecBoxHelpersNetworked = 0x838; // C_NetworkUtlVectorBase<SoundeventBoxHelperNetworked_t>
            }
            // Parent: None
            // Field count: 3
            namespace ServerAuthoritativeWeaponSlot_t {
                constexpr std::ptrdiff_t unClass = 0x30; // uint16
                constexpr std::ptrdiff_t unSlot = 0x32; // uint16
                constexpr std::ptrdiff_t unItemDefIdx = 0x34; // uint16
            }
            // Parent: None
            // Field count: 0
            namespace C_CSMinimapBoundary {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPathQueryComponent {
            }
            // Parent: None
            // Field count: 8
            namespace C_Precipitation {
                constexpr std::ptrdiff_t m_flDensity = 0x1108; // float32
                constexpr std::ptrdiff_t m_flParticleInnerDist = 0x1118; // float32
                constexpr std::ptrdiff_t m_pParticleDef = 0x1120; // char*
                constexpr std::ptrdiff_t m_tParticlePrecipTraceTimer = 0x1134; // TimedEvent[1]
                constexpr std::ptrdiff_t m_bActiveParticlePrecipEmitter = 0x113C; // bool[1]
                constexpr std::ptrdiff_t m_bParticlePrecipInitialized = 0x113D; // bool
                constexpr std::ptrdiff_t m_bHasSimulatedSinceLastSceneObjectUpdate = 0x113E; // bool
                constexpr std::ptrdiff_t m_nAvailableSheetSequencesMaxIndex = 0x1140; // int32
            }
            // Parent: C_BaseEntity
            // Field count: 7
            namespace CLogicRelay {
                constexpr std::ptrdiff_t m_OnSpawn = 0x780; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTrigger = 0x798; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bDisabled = 0x7B0; // bool
                constexpr std::ptrdiff_t m_bWaitForRefire = 0x7B1; // bool
                constexpr std::ptrdiff_t m_bTriggerOnce = 0x7B2; // bool
                constexpr std::ptrdiff_t m_bFastRetrigger = 0x7B3; // bool
                constexpr std::ptrdiff_t m_bPassthoughCaller = 0x7B4; // bool
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
            // Parent: None
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
            // Parent: None
            // Field count: 0
            namespace C_WeaponUMP45 {
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponG3SG1 {
            }
            // Parent: None
            // Field count: 2
            namespace C_SpotlightEnd {
                constexpr std::ptrdiff_t m_flLightScale = 0x1020; // float32
                constexpr std::ptrdiff_t m_Radius = 0x1024; // float32
            }
            // Parent: None
            // Field count: 23
            namespace C_Fish {
                constexpr std::ptrdiff_t m_pos = 0x11F0; // VectorWS
                constexpr std::ptrdiff_t m_vel = 0x11FC; // Vector
                constexpr std::ptrdiff_t m_angles = 0x1208; // QAngle
                constexpr std::ptrdiff_t m_localLifeState = 0x1214; // int32
                constexpr std::ptrdiff_t m_deathDepth = 0x1218; // float32
                constexpr std::ptrdiff_t m_deathAngle = 0x121C; // float32
                constexpr std::ptrdiff_t m_buoyancy = 0x1220; // float32
                constexpr std::ptrdiff_t m_wiggleTimer = 0x1228; // CountdownTimer
                constexpr std::ptrdiff_t m_wigglePhase = 0x1240; // float32
                constexpr std::ptrdiff_t m_wiggleRate = 0x1244; // float32
                constexpr std::ptrdiff_t m_actualPos = 0x1248; // VectorWS
                constexpr std::ptrdiff_t m_actualAngles = 0x1254; // QAngle
                constexpr std::ptrdiff_t m_poolOrigin = 0x1260; // VectorWS
                constexpr std::ptrdiff_t m_waterLevel = 0x126C; // float32
                constexpr std::ptrdiff_t m_gotUpdate = 0x1270; // bool
                constexpr std::ptrdiff_t m_x = 0x1274; // float32
                constexpr std::ptrdiff_t m_y = 0x1278; // float32
                constexpr std::ptrdiff_t m_z = 0x127C; // float32
                constexpr std::ptrdiff_t m_angle = 0x1280; // float32
                constexpr std::ptrdiff_t m_errorHistory = 0x1284; // float32[20]
                constexpr std::ptrdiff_t m_errorHistoryIndex = 0x12D4; // int32
                constexpr std::ptrdiff_t m_errorHistoryCount = 0x12D8; // int32
                constexpr std::ptrdiff_t m_averageError = 0x12DC; // float32
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponFamas {
            }
            // Parent: C_BaseEntity
            // Field count: 36
            namespace C_EnvVolumetricFogController {
                constexpr std::ptrdiff_t m_flScattering = 0x77C; // float32
                constexpr std::ptrdiff_t m_TintColor = 0x780; // Color
                constexpr std::ptrdiff_t m_flAnisotropy = 0x784; // float32
                constexpr std::ptrdiff_t m_flFadeSpeed = 0x788; // float32
                constexpr std::ptrdiff_t m_flDrawDistance = 0x78C; // float32
                constexpr std::ptrdiff_t m_flFadeInStart = 0x790; // float32
                constexpr std::ptrdiff_t m_flFadeInEnd = 0x794; // float32
                constexpr std::ptrdiff_t m_flIndirectStrength = 0x798; // float32
                constexpr std::ptrdiff_t m_nVolumeDepth = 0x79C; // int32
                constexpr std::ptrdiff_t m_fFirstVolumeSliceThickness = 0x7A0; // float32
                constexpr std::ptrdiff_t m_nIndirectTextureDimX = 0x7A4; // int32
                constexpr std::ptrdiff_t m_nIndirectTextureDimY = 0x7A8; // int32
                constexpr std::ptrdiff_t m_nIndirectTextureDimZ = 0x7AC; // int32
                constexpr std::ptrdiff_t m_vBoxMins = 0x7B0; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x7BC; // Vector
                constexpr std::ptrdiff_t m_bActive = 0x7C8; // bool
                constexpr std::ptrdiff_t m_flStartAnisoTime = 0x7CC; // GameTime_t
                constexpr std::ptrdiff_t m_flStartScatterTime = 0x7D0; // GameTime_t
                constexpr std::ptrdiff_t m_flStartDrawDistanceTime = 0x7D4; // GameTime_t
                constexpr std::ptrdiff_t m_flStartAnisotropy = 0x7D8; // float32
                constexpr std::ptrdiff_t m_flStartScattering = 0x7DC; // float32
                constexpr std::ptrdiff_t m_flStartDrawDistance = 0x7E0; // float32
                constexpr std::ptrdiff_t m_flDefaultAnisotropy = 0x7E4; // float32
                constexpr std::ptrdiff_t m_flDefaultScattering = 0x7E8; // float32
                constexpr std::ptrdiff_t m_flDefaultDrawDistance = 0x7EC; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x7F0; // bool
                constexpr std::ptrdiff_t m_bEnableIndirect = 0x7F1; // bool
                constexpr std::ptrdiff_t m_bIsMaster = 0x7F2; // bool
                constexpr std::ptrdiff_t m_hFogIndirectTexture = 0x7F8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_nForceRefreshCount = 0x800; // int32
                constexpr std::ptrdiff_t m_fNoiseSpeed = 0x804; // float32
                constexpr std::ptrdiff_t m_fNoiseStrength = 0x808; // float32
                constexpr std::ptrdiff_t m_vNoiseScale = 0x80C; // Vector
                constexpr std::ptrdiff_t m_fWindSpeed = 0x818; // float32
                constexpr std::ptrdiff_t m_vWindDirection = 0x81C; // Vector
                constexpr std::ptrdiff_t m_bFirstTime = 0x828; // bool
            }
            // Parent: None
            // Field count: 15
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
                constexpr std::ptrdiff_t m_TempVarBanks = 0x98; // CUtlVector<CPulse_TempVarBankDefinition*>
                constexpr std::ptrdiff_t m_PublicOutputs = 0xB0; // CUtlVector<CPulse_PublicOutput>
                constexpr std::ptrdiff_t m_InvokeBindings = 0xC8; // CUtlVector<CPulse_InvokeBinding*>
                constexpr std::ptrdiff_t m_CallInfos = 0xE0; // CUtlVector<CPulse_CallInfo*>
                constexpr std::ptrdiff_t m_Constants = 0xF8; // CUtlVector<CPulse_Constant>
                constexpr std::ptrdiff_t m_DomainValues = 0x110; // CUtlVector<CPulse_DomainValue>
                constexpr std::ptrdiff_t m_BlackboardReferences = 0x128; // CUtlVector<CPulse_BlackboardReference>
                constexpr std::ptrdiff_t m_OutputConnections = 0x140; // CUtlVector<CPulse_OutputConnection*>
            }
            // Parent: C_BaseEntity
            // Field count: 2
            namespace C_EnvDetailController {
                constexpr std::ptrdiff_t m_flFadeStartDist = 0x77C; // float32
                constexpr std::ptrdiff_t m_flFadeEndDist = 0x780; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CHostageRescueZoneShim {
            }
            // Parent: None
            // Field count: 0
            namespace CEnvSoundscapeAlias_snd_soundscape {
            }
            // Parent: None
            // Field count: 2
            namespace CCSPlayer_HostageServices {
                constexpr std::ptrdiff_t m_hCarriedHostage = 0x48; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hCarriedHostageProp = 0x4C; // CHandle<C_BaseEntity>
            }
            // Parent: None
            // Field count: 0
            namespace C_GameRulesProxy {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRenderComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x10; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_bIsRenderingWithViewModels = 0x50; // bool
                constexpr std::ptrdiff_t m_nSplitscreenFlags = 0x54; // uint32
                constexpr std::ptrdiff_t m_bEnableRendering = 0x58; // bool
                constexpr std::ptrdiff_t m_bInterpolationReadyToDraw = 0xB8; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 4
            namespace C_Team {
                constexpr std::ptrdiff_t m_aPlayerControllers = 0x780; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
                constexpr std::ptrdiff_t m_aPlayers = 0x798; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
                constexpr std::ptrdiff_t m_iScore = 0x7B0; // int32
                constexpr std::ptrdiff_t m_szTeamname = 0x7B4; // char[129]
            }
            // Parent: None
            // Field count: 0
            namespace C_PathParticleRopeAlias_path_particle_rope_clientside {
            }
            // Parent: C_PointEntity
            // Field count: 1
            namespace CPointChildModifier {
                constexpr std::ptrdiff_t m_bOrphanInsteadOfDeletingChildrenOnRemove = 0x77C; // bool
            }
            // Parent: None
            // Field count: 2
            namespace CCSPlayerLegacyJump {
                constexpr std::ptrdiff_t m_bOldJumpPressed = 0x10; // bool
                constexpr std::ptrdiff_t m_flJumpPressedTime = 0x14; // float32
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponNOVA {
            }
            // Parent: None
            // Field count: 0
            namespace C_CS2HudModelAddon {
            }
            // Parent: None
            // Field count: 0
            namespace C_DEagle {
            }
            // Parent: None
            // Field count: 0
            namespace C_TriggerMultiple {
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TerroristRushIntroCamera {
            }
            // Parent: C_CSGO_MapPreviewCameraPath
            // Field count: 1
            namespace C_CSGO_TeamPreviewCamera {
                constexpr std::ptrdiff_t m_nVariant = 0x804; // int32
            }
            // Parent: None
            // Field count: 9
            namespace C_ColorCorrectionVolume {
                constexpr std::ptrdiff_t m_LastEnterWeight = 0x1108; // float32
                constexpr std::ptrdiff_t m_LastEnterTime = 0x110C; // GameTime_t
                constexpr std::ptrdiff_t m_LastExitWeight = 0x1110; // float32
                constexpr std::ptrdiff_t m_LastExitTime = 0x1114; // GameTime_t
                constexpr std::ptrdiff_t m_bEnabled = 0x1118; // bool
                constexpr std::ptrdiff_t m_MaxWeight = 0x111C; // float32
                constexpr std::ptrdiff_t m_FadeDuration = 0x1120; // float32
                constexpr std::ptrdiff_t m_Weight = 0x1124; // float32
                constexpr std::ptrdiff_t m_lookupFilename = 0x1128; // char[512]
            }
            // Parent: None
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
                constexpr std::ptrdiff_t m_vBoxMins = 0x790; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x79C; // Vector
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
                constexpr std::ptrdiff_t m_hSequence = 0xC0; // HSequence
                constexpr std::ptrdiff_t m_flSeqStartTime = 0xC4; // GameTime_t
                constexpr std::ptrdiff_t m_flSeqFixedCycle = 0xC8; // float32
                constexpr std::ptrdiff_t m_nAnimLoopMode = 0xCC; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_flPlaybackRate = 0xD0; // CNetworkedQuantizedFloat
                constexpr std::ptrdiff_t m_nNotifyState = 0xDC; // SequenceFinishNotifyState_t
                constexpr std::ptrdiff_t m_bNetworkedAnimationInputsChanged = 0xDD; // bool
                constexpr std::ptrdiff_t m_bNetworkedSequenceChanged = 0xDE; // bool
                constexpr std::ptrdiff_t m_bLastUpdateSkipped = 0xDF; // bool
                constexpr std::ptrdiff_t m_bSequenceFinished = 0xE0; // bool
                constexpr std::ptrdiff_t m_nPrevAnimUpdateTick = 0xE4; // GameTick_t
                constexpr std::ptrdiff_t m_hGraphDefinitionAG2 = 0x380; // CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
                constexpr std::ptrdiff_t m_SerializePoseRecipeAG2Slots = 0x388; // C_UtlVectorEmbeddedNetworkVar<AnimGraph2SerializedPoseRecipeSlot_t>
                constexpr std::ptrdiff_t m_SerializePoseRecipeAG2Dynamic = 0x3F0; // C_NetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_nSerializePoseRecipeAG2ActiveSlot = 0x408; // uint32
                constexpr std::ptrdiff_t m_nSerializePoseRecipeVersionAG2 = 0x40C; // int32
                constexpr std::ptrdiff_t m_nServerGraphInstanceIteration = 0x410; // int32
                constexpr std::ptrdiff_t m_nServerSerializationContextIteration = 0x414; // int32
                constexpr std::ptrdiff_t m_primaryGraphId = 0x418; // ResourceId_t
                constexpr std::ptrdiff_t m_vecExternalGraphIds = 0x420; // C_NetworkUtlVectorBase<ResourceId_t>
                constexpr std::ptrdiff_t m_vecExternalClipIds = 0x438; // C_NetworkUtlVectorBase<ResourceId_t>
                constexpr std::ptrdiff_t m_sAnimGraph2Identifier = 0x450; // CGlobalSymbol
                constexpr std::ptrdiff_t m_pGraphInstanceAG2 = 0x458; // CAnimGraph2InstancePtr
                constexpr std::ptrdiff_t m_vecExternalGraphs = 0x678; // CExternalAnimGraphList
                constexpr std::ptrdiff_t m_nPrevAnimationAlgorithm = 0x6A9; // AnimationAlgorithm_t
            }
            // Parent: None
            // Field count: 18
            namespace C_ColorCorrection {
                constexpr std::ptrdiff_t m_vecOrigin = 0x77C; // VectorWS
                constexpr std::ptrdiff_t m_MinFalloff = 0x788; // float32
                constexpr std::ptrdiff_t m_MaxFalloff = 0x78C; // float32
                constexpr std::ptrdiff_t m_flFadeInDuration = 0x790; // float32
                constexpr std::ptrdiff_t m_flFadeOutDuration = 0x794; // float32
                constexpr std::ptrdiff_t m_flMaxWeight = 0x798; // float32
                constexpr std::ptrdiff_t m_flCurWeight = 0x79C; // float32
                constexpr std::ptrdiff_t m_netlookupFilename = 0x7A0; // char[512]
                constexpr std::ptrdiff_t m_bEnabled = 0x9A0; // bool
                constexpr std::ptrdiff_t m_bMaster = 0x9A1; // bool
                constexpr std::ptrdiff_t m_bClientSide = 0x9A2; // bool
                constexpr std::ptrdiff_t m_bExclusive = 0x9A3; // bool
                constexpr std::ptrdiff_t m_bEnabledOnClient = 0x9A4; // bool[1]
                constexpr std::ptrdiff_t m_flCurWeightOnClient = 0x9A8; // float32[1]
                constexpr std::ptrdiff_t m_bFadingIn = 0x9AC; // bool[1]
                constexpr std::ptrdiff_t m_flFadeStartWeight = 0x9B0; // float32[1]
                constexpr std::ptrdiff_t m_flFadeStartTime = 0x9B4; // float32[1]
                constexpr std::ptrdiff_t m_flFadeDuration = 0x9B8; // float32[1]
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
            // Parent: None
            // Field count: 0
            namespace C_PhysBox {
            }
            // Parent: None
            // Field count: 4
            namespace CCSPlayer_CameraServices {
                constexpr std::ptrdiff_t m_flDeathCamTilt = 0x2B8; // float32
                constexpr std::ptrdiff_t m_hDeathCamBounds = 0x2BC; // CHandle<C_PointDeathcamBounds>
                constexpr std::ptrdiff_t m_bDeathCamBoundsSearched = 0x2C0; // bool
                constexpr std::ptrdiff_t m_vClientScopeInaccuracy = 0x2C8; // Vector
            }
            // Parent: CBaseFilter
            // Field count: 3
            namespace CFilterMultiple {
                constexpr std::ptrdiff_t m_nFilterType = 0x7B0; // filter_t
                constexpr std::ptrdiff_t m_iFilterName = 0x7B8; // CUtlSymbolLarge[10]
                constexpr std::ptrdiff_t m_hFilter = 0x808; // CHandle<C_BaseEntity>[10]
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
                constexpr std::ptrdiff_t m_OnPlay = 0x780; // CEntityIOOutput
                constexpr std::ptrdiff_t m_flRadius = 0x798; // float32
                constexpr std::ptrdiff_t m_soundEventName = 0x7A0; // CGameSoundEventName
                constexpr std::ptrdiff_t m_bOverrideWithEvent = 0x7A8; // bool
                constexpr std::ptrdiff_t m_soundscapeIndex = 0x7AC; // int32
                constexpr std::ptrdiff_t m_soundscapeEntityListId = 0x7B0; // int32
                constexpr std::ptrdiff_t m_positionNames = 0x7B8; // CUtlSymbolLarge[8]
                constexpr std::ptrdiff_t m_hProxySoundscape = 0x7F8; // CHandle<CEnvSoundscape>
                constexpr std::ptrdiff_t m_bDisabled = 0x7FC; // bool
                constexpr std::ptrdiff_t m_soundscapeName = 0x800; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_soundEventHash = 0x808; // uint32
            }
            // Parent: None
            // Field count: 0
            namespace C_SoundEventEntityAlias_snd_event_point {
            }
            // Parent: C_BaseEntity
            // Field count: 3
            namespace C_FogController {
                constexpr std::ptrdiff_t m_fog = 0x780; // fogparams_t
                constexpr std::ptrdiff_t m_bUseAngles = 0x7E8; // bool
                constexpr std::ptrdiff_t m_iChangedVariables = 0x7EC; // int32
            }
            // Parent: C_SoundOpvarSetPointBase
            // Field count: 0
            namespace C_SoundOpvarSetOBBWindEntity {
            }
            // Parent: None
            // Field count: 0
            namespace C_MolotovGrenade {
            }
            // Parent: None
            // Field count: 0
            namespace C_NetTestBaseCombatCharacter {
            }
            // Parent: CBodyComponent
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBodyComponentPoint {
                constexpr std::ptrdiff_t m_sceneNode = 0x80; // CGameSceneNode
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponM4A1Silencer {
            }
            // Parent: C_BaseEntity
            // Field count: 11
            namespace C_SkyCameraVolume {
                constexpr std::ptrdiff_t m_vBoxMins = 0x798; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x7A4; // Vector
                constexpr std::ptrdiff_t m_hTarget = 0x7B0; // CHandle<C_SkyCameraVolumeTarget>
                constexpr std::ptrdiff_t m_nPriority = 0x7B4; // int32
                constexpr std::ptrdiff_t m_bIsEnabled = 0x7B8; // bool
                constexpr std::ptrdiff_t m_bSkyboxBlurEffect = 0x7B9; // bool
                constexpr std::ptrdiff_t m_vBlurOrigin = 0x7BC; // Vector
                constexpr std::ptrdiff_t m_bSkyboxReceivesWorldCsm = 0x7C8; // bool
                constexpr std::ptrdiff_t m_bWorldReceivesSkyboxCsm = 0x7C9; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0x7CA; // bool
                constexpr std::ptrdiff_t m_iszTargetName = 0x7D0; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 31
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
                constexpr std::ptrdiff_t m_iOriginOverride = 0x1100; // int32
                constexpr std::ptrdiff_t m_ubStyleOverride = 0x1104; // uint8
                constexpr std::ptrdiff_t m_unClientFlags = 0x1105; // uint8
                constexpr std::ptrdiff_t m_AttributeList = 0x1110; // CAttributeList
                constexpr std::ptrdiff_t m_NetworkedDynamicAttributes = 0x1188; // CAttributeList
                constexpr std::ptrdiff_t m_szCustomName = 0x1200; // char[161]
                constexpr std::ptrdiff_t m_szCustomNameOverride = 0x12A1; // char[161]
                constexpr std::ptrdiff_t m_szCustomNameOverride2 = 0x1342; // char[161]
                constexpr std::ptrdiff_t m_szCustomNameOverride3 = 0x13E3; // char[161]
                constexpr std::ptrdiff_t m_bInitializedTags = 0x14B0; // bool
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
            // Parent: C_SoundEventMultiPointEntity
            // Field count: 1
            namespace C_SoundEventPathCornerEntity {
                constexpr std::ptrdiff_t m_vecCornerPairsNetworked = 0x838; // C_NetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
            }
            // Parent: C_BaseEntity
            // Field count: 3
            namespace C_InfoVisibilityBox {
                constexpr std::ptrdiff_t m_nMode = 0x780; // int32
                constexpr std::ptrdiff_t m_vBoxSize = 0x784; // Vector
                constexpr std::ptrdiff_t m_bEnabled = 0x790; // bool
            }
            // Parent: None
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
                constexpr std::ptrdiff_t m_bStartActive = 0x788; // bool
                constexpr std::ptrdiff_t m_flMaxSimulationTime = 0x78C; // float32
                constexpr std::ptrdiff_t m_iszEffectName = 0x790; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PathNodes_Name = 0x798; // CUtlVector<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_flParticleSpacing = 0x7B0; // float32
                constexpr std::ptrdiff_t m_flSlack = 0x7B4; // float32
                constexpr std::ptrdiff_t m_flRadius = 0x7B8; // float32
                constexpr std::ptrdiff_t m_ColorTint = 0x7BC; // Color
                constexpr std::ptrdiff_t m_nEffectState = 0x7C0; // int32
                constexpr std::ptrdiff_t m_iEffectIndex = 0x7C8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_PathNodes_Position = 0x7D0; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_TangentIn = 0x7E8; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_TangentOut = 0x800; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_Color = 0x818; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_PinEnabled = 0x830; // C_NetworkUtlVectorBase<bool>
                constexpr std::ptrdiff_t m_PathNodes_RadiusScale = 0x848; // C_NetworkUtlVectorBase<float32>
            }
            // Parent: None
            // Field count: 3
            namespace C_DecoyProjectile {
                constexpr std::ptrdiff_t m_nDecoyShotTick = 0x12CC; // int32
                constexpr std::ptrdiff_t m_nClientLastKnownDecoyShotTick = 0x12D0; // int32
                constexpr std::ptrdiff_t m_flTimeParticleEffectSpawn = 0x12F8; // GameTime_t
            }
            // Parent: None
            // Field count: 3
            namespace C_AttributeContainer {
                constexpr std::ptrdiff_t m_Item = 0x50; // C_EconItemView
                constexpr std::ptrdiff_t m_iExternalItemProviderRegisteredToken = 0x1508; // int32
                constexpr std::ptrdiff_t m_ullRegisteredAsItemID = 0x1510; // uint64
            }
            // Parent: C_BasePlayerWeapon
            // Field count: 57
            namespace C_CSWeaponBase {
                constexpr std::ptrdiff_t m_iWeaponGameplayAnimState = 0x2838; // WeaponGameplayAnimState
                constexpr std::ptrdiff_t m_flWeaponGameplayAnimStateTimestamp = 0x283C; // GameTime_t
                constexpr std::ptrdiff_t m_flInspectCancelCompleteTime = 0x2840; // GameTime_t
                constexpr std::ptrdiff_t m_bInspectPending = 0x2844; // bool
                constexpr std::ptrdiff_t m_bInspectShouldLoop = 0x2845; // bool
                constexpr std::ptrdiff_t m_nLastEmptySoundCmdNum = 0x2870; // int32
                constexpr std::ptrdiff_t m_bFireOnEmpty = 0x2874; // bool
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0x2878; // CEntityIOOutput
                constexpr std::ptrdiff_t m_weaponMode = 0x2890; // CSWeaponMode
                constexpr std::ptrdiff_t m_flTurningInaccuracyDelta = 0x2894; // float32
                constexpr std::ptrdiff_t m_vecTurningInaccuracyEyeDirLast = 0x2898; // Vector
                constexpr std::ptrdiff_t m_flTurningInaccuracy = 0x28A4; // float32
                constexpr std::ptrdiff_t m_fAccuracyPenalty = 0x28A8; // float32
                constexpr std::ptrdiff_t m_flLastAccuracyUpdateTime = 0x28AC; // GameTime_t
                constexpr std::ptrdiff_t m_fAccuracySmoothedForZoom = 0x28B0; // float32
                constexpr std::ptrdiff_t m_iRecoilIndex = 0x28B4; // int32
                constexpr std::ptrdiff_t m_flRecoilIndex = 0x28B8; // float32
                constexpr std::ptrdiff_t m_bBurstMode = 0x28BC; // bool
                constexpr std::ptrdiff_t m_flLastBurstModeChangeTime = 0x28C0; // GameTime_t
                constexpr std::ptrdiff_t m_nPostponeFireReadyTicks = 0x28C4; // GameTick_t
                constexpr std::ptrdiff_t m_flPostponeFireReadyFrac = 0x28C8; // float32
                constexpr std::ptrdiff_t m_bInReload = 0x28CC; // bool
                constexpr std::ptrdiff_t m_nDeployTick = 0x28D0; // GameTick_t
                constexpr std::ptrdiff_t m_flAttackHoldStartTime = 0x28D4; // GameTime_t
                constexpr std::ptrdiff_t m_flDroppedAtTime = 0x28D8; // GameTime_t
                constexpr std::ptrdiff_t m_bIsHauledBack = 0x28E0; // bool
                constexpr std::ptrdiff_t m_bSilencerOn = 0x28E1; // bool
                constexpr std::ptrdiff_t m_flTimeSilencerSwitchComplete = 0x28E4; // GameTime_t
                constexpr std::ptrdiff_t m_bStealthy = 0x28E8; // bool
                constexpr std::ptrdiff_t m_bInSilentReloadSection = 0x28E9; // bool
                constexpr std::ptrdiff_t m_flStealthHoldStartTime = 0x28EC; // GameTime_t
                constexpr std::ptrdiff_t m_bReloadHeldSinceStart = 0x28F0; // bool
                constexpr std::ptrdiff_t m_flWeaponActionPlaybackRate = 0x28F4; // float32
                constexpr std::ptrdiff_t m_iOriginalTeamNumber = 0x28F8; // int32
                constexpr std::ptrdiff_t m_iMostRecentTeamNumber = 0x28FC; // int32
                constexpr std::ptrdiff_t m_bDroppedNearBuyZone = 0x2900; // bool
                constexpr std::ptrdiff_t m_flNextAttackRenderTimeOffset = 0x2904; // float32
                constexpr std::ptrdiff_t m_bClearWeaponIdentifyingUGC = 0x29B0; // bool
                constexpr std::ptrdiff_t m_bVisualsDataSet = 0x29B1; // bool
                constexpr std::ptrdiff_t m_bUIWeapon = 0x29B2; // bool
                constexpr std::ptrdiff_t m_nCustomEconReloadEventId = 0x29B4; // int32
                constexpr std::ptrdiff_t m_bCanBePickedUp = 0x29C0; // bool
                constexpr std::ptrdiff_t m_nextPrevOwnerUseTime = 0x29C4; // GameTime_t
                constexpr std::ptrdiff_t m_hPrevOwner = 0x29C8; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_nDropTick = 0x29CC; // GameTick_t
                constexpr std::ptrdiff_t m_bWasActiveWeaponWhenDropped = 0x29D0; // bool
                constexpr std::ptrdiff_t m_donated = 0x29F4; // bool
                constexpr std::ptrdiff_t m_fLastShotTime = 0x29F8; // GameTime_t
                constexpr std::ptrdiff_t m_bWasOwnedByCT = 0x29FC; // bool
                constexpr std::ptrdiff_t m_bWasOwnedByTerrorist = 0x29FD; // bool
                constexpr std::ptrdiff_t m_flNextClientFireBulletTime = 0x2A00; // float32
                constexpr std::ptrdiff_t m_flNextClientFireBulletTime_Repredict = 0x2A04; // float32
                constexpr std::ptrdiff_t m_IronSightController = 0x2A60; // C_IronSightController
                constexpr std::ptrdiff_t m_iIronSightMode = 0x2B10; // int32
                constexpr std::ptrdiff_t m_flLastLOSTraceFailureTime = 0x2B88; // GameTime_t
                constexpr std::ptrdiff_t m_flWatTickOffset = 0x2BE8; // float32
                constexpr std::ptrdiff_t m_flLastShakeTime = 0x2BFC; // GameTime_t
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
            // Parent: C_BaseEntity
            // Field count: 5
            namespace C_TonemapController2 {
                constexpr std::ptrdiff_t m_flAutoExposureMin = 0x77C; // float32
                constexpr std::ptrdiff_t m_flAutoExposureMax = 0x780; // float32
                constexpr std::ptrdiff_t m_flExposureAdaptationSpeedUp = 0x784; // float32
                constexpr std::ptrdiff_t m_flExposureAdaptationSpeedDown = 0x788; // float32
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x78C; // float32
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
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataOverlayType
            // MVDataAssociatedFile
            // MVDataPreviewWidget
            namespace CNoiseStreamData {
                constexpr std::ptrdiff_t m_Stream = 0x0; // NoiseStreamDef_t
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
                constexpr std::ptrdiff_t m_bAdrenalineActive = 0x7B0; // bool
                constexpr std::ptrdiff_t m_iHealthMin = 0x7B4; // int32
                constexpr std::ptrdiff_t m_iHealthMax = 0x7B8; // int32
            }
            // Parent: C_BaseClientUIEntity
            // Field count: 13
            namespace C_PointClientUIHUD {
                constexpr std::ptrdiff_t m_bCheckCSSClasses = 0x1058; // bool
                constexpr std::ptrdiff_t m_bIgnoreInput = 0x11C8; // bool
                constexpr std::ptrdiff_t m_flWidth = 0x11CC; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x11D0; // float32
                constexpr std::ptrdiff_t m_flDPI = 0x11D4; // float32
                constexpr std::ptrdiff_t m_flInteractDistance = 0x11D8; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0x11DC; // float32
                constexpr std::ptrdiff_t m_unOwnerContext = 0x11E0; // uint32
                constexpr std::ptrdiff_t m_unHorizontalAlign = 0x11E4; // uint32
                constexpr std::ptrdiff_t m_unVerticalAlign = 0x11E8; // uint32
                constexpr std::ptrdiff_t m_unOrientation = 0x11EC; // uint32
                constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0x11F0; // bool
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x11F8; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
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
            namespace C_InfoLadderDismount {
            }
            // Parent: None
            // Field count: 14
            namespace C_PointCommentaryNode {
                constexpr std::ptrdiff_t m_bActive = 0x1208; // bool
                constexpr std::ptrdiff_t m_bWasActive = 0x1209; // bool
                constexpr std::ptrdiff_t m_flEndTime = 0x120C; // GameTime_t
                constexpr std::ptrdiff_t m_flStartTime = 0x1210; // GameTime_t
                constexpr std::ptrdiff_t m_flStartTimeInCommentary = 0x1214; // float32
                constexpr std::ptrdiff_t m_iszCommentaryFile = 0x1218; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTitle = 0x1220; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSpeakers = 0x1228; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iNodeNumber = 0x1230; // int32
                constexpr std::ptrdiff_t m_iNodeNumberMax = 0x1234; // int32
                constexpr std::ptrdiff_t m_bListenedTo = 0x1238; // bool
                constexpr std::ptrdiff_t m_sndCommentary = 0x1240; // CSoundPatch*
                constexpr std::ptrdiff_t m_hViewPosition = 0x1248; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bRestartAfterRestore = 0x124C; // bool
            }
            // Parent: None
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
            // Parent: None
            // Field count: 2
            namespace C_KeychainModule {
                constexpr std::ptrdiff_t m_nKeychainDefID = 0x11F8; // uint32
                constexpr std::ptrdiff_t m_nKeychainSeed = 0x11FC; // uint32
            }
            // Parent: None
            // Field count: 1
            namespace CFuncWater {
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0x1020; // CBuoyancyHelper
            }
            // Parent: None
            // Field count: 0
            namespace CCSPlayer_GlowServices {
            }
            // Parent: None
            // Field count: 1
            namespace CCSGameModeRules {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
            }
            // Parent: None
            // Field count: 0
            namespace C_Flashbang {
            }
            // Parent: C_PointClientUIWorldPanel
            // Field count: 1
            namespace C_PointClientUIWorldTextPanel {
                constexpr std::ptrdiff_t m_messageText = 0x1269; // char[512]
            }
            // Parent: None
            // Field count: 3
            namespace CCSPlayer_WaterServices {
                constexpr std::ptrdiff_t m_flWaterJumpTime = 0x48; // float32
                constexpr std::ptrdiff_t m_vecWaterJumpVel = 0x4C; // Vector
                constexpr std::ptrdiff_t m_flSwimSoundTime = 0x58; // float32
            }
            // Parent: C_CSPlayerPawnBase
            // Field count: 1
            namespace C_CSObserverPawn {
                constexpr std::ptrdiff_t m_hDetectParentChange = 0x14EC; // CEntityHandle
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
                constexpr std::ptrdiff_t m_vecLadderDir = 0x1020; // Vector
                constexpr std::ptrdiff_t m_Dismounts = 0x1030; // CUtlVector<CHandle<C_InfoLadderDismount>>
                constexpr std::ptrdiff_t m_vecLocalTop = 0x1048; // Vector
                constexpr std::ptrdiff_t m_vecPlayerMountPositionTop = 0x1054; // VectorWS
                constexpr std::ptrdiff_t m_vecPlayerMountPositionBottom = 0x1060; // VectorWS
                constexpr std::ptrdiff_t m_flAutoRideSpeed = 0x106C; // float32
                constexpr std::ptrdiff_t m_bDisabled = 0x1070; // bool
                constexpr std::ptrdiff_t m_bFakeLadder = 0x1071; // bool
                constexpr std::ptrdiff_t m_bHasSlack = 0x1072; // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponMP5SD {
            }
            // Parent: None
            // Field count: 0
            namespace C_World {
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TeamSelectCounterTerroristPosition {
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponGalilAR {
            }
            // Parent: None
            // Field count: 6
            namespace CCSPlayerBase_CameraServices {
                constexpr std::ptrdiff_t m_iFOV = 0x2A0; // uint32
                constexpr std::ptrdiff_t m_iFOVStart = 0x2A4; // uint32
                constexpr std::ptrdiff_t m_flFOVTime = 0x2A8; // GameTime_t
                constexpr std::ptrdiff_t m_flFOVRate = 0x2AC; // float32
                constexpr std::ptrdiff_t m_hZoomOwner = 0x2B0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flLastShotFOV = 0x2B4; // float32
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
            // Parent: None
            // Field count: 0
            namespace C_WeaponSG556 {
            }
            // Parent: C_CSPlayerPawnBase
            // Field count: 105
            namespace C_CSPlayerPawn {
                constexpr std::ptrdiff_t m_pBulletServices = 0x14F8; // CCSPlayer_BulletServices*
                constexpr std::ptrdiff_t m_pHostageServices = 0x1500; // CCSPlayer_HostageServices*
                constexpr std::ptrdiff_t m_pBuyServices = 0x1508; // CCSPlayer_BuyServices*
                constexpr std::ptrdiff_t m_pGlowServices = 0x1510; // CCSPlayer_GlowServices*
                constexpr std::ptrdiff_t m_pActionTrackingServices = 0x1518; // CCSPlayer_ActionTrackingServices*
                constexpr std::ptrdiff_t m_pAimPunchServices = 0x1520; // CCSPlayer_AimPunchServices*
                constexpr std::ptrdiff_t m_pDamageReactServices = 0x1528; // CCSPlayer_DamageReactServices*
                constexpr std::ptrdiff_t m_flHealthShotBoostExpirationTime = 0x1530; // GameTime_t
                constexpr std::ptrdiff_t m_flLastFiredWeaponTime = 0x1534; // GameTime_t
                constexpr std::ptrdiff_t m_bHasFemaleVoice = 0x1538; // bool
                constexpr std::ptrdiff_t m_flLandingTimeSeconds = 0x153C; // float32
                constexpr std::ptrdiff_t m_flOldFallVelocity = 0x1540; // float32
                constexpr std::ptrdiff_t m_szLastPlaceName = 0x1544; // char[18]
                constexpr std::ptrdiff_t m_bPrevDefuser = 0x1556; // bool
                constexpr std::ptrdiff_t m_bPrevHelmet = 0x1557; // bool
                constexpr std::ptrdiff_t m_nPrevArmorVal = 0x1558; // int32
                constexpr std::ptrdiff_t m_nPrevGrenadeAmmoCount = 0x155C; // int32
                constexpr std::ptrdiff_t m_unPreviousWeaponHash = 0x1560; // uint32
                constexpr std::ptrdiff_t m_unWeaponHash = 0x1564; // uint32
                constexpr std::ptrdiff_t m_bInBuyZone = 0x1568; // bool
                constexpr std::ptrdiff_t m_bPreviouslyInBuyZone = 0x1569; // bool
                constexpr std::ptrdiff_t m_bInLanding = 0x156A; // bool
                constexpr std::ptrdiff_t m_flLandingStartTime = 0x156C; // float32
                constexpr std::ptrdiff_t m_bInHostageRescueZone = 0x1570; // bool
                constexpr std::ptrdiff_t m_bInBombZone = 0x1571; // bool
                constexpr std::ptrdiff_t m_bIsBuyMenuOpen = 0x1572; // bool
                constexpr std::ptrdiff_t m_flTimeOfLastInjury = 0x1574; // GameTime_t
                constexpr std::ptrdiff_t m_flNextSprayDecalTime = 0x1578; // GameTime_t
                constexpr std::ptrdiff_t m_iRetakesOffering = 0x16E0; // int32
                constexpr std::ptrdiff_t m_iRetakesOfferingCard = 0x16E4; // int32
                constexpr std::ptrdiff_t m_bRetakesHasDefuseKit = 0x16E8; // bool
                constexpr std::ptrdiff_t m_bRetakesMVPLastRound = 0x16E9; // bool
                constexpr std::ptrdiff_t m_iRetakesMVPBoostItem = 0x16EC; // int32
                constexpr std::ptrdiff_t m_RetakesMVPBoostExtraUtility = 0x16F0; // loadout_slot_t
                constexpr std::ptrdiff_t m_bNeedToReApplyGloves = 0x16F5; // bool
                constexpr std::ptrdiff_t m_EconGloves = 0x16F8; // C_EconItemView
                constexpr std::ptrdiff_t m_nEconGlovesChanged = 0x2BB0; // uint8
                constexpr std::ptrdiff_t m_bMustSyncRagdollState = 0x2BB1; // bool
                constexpr std::ptrdiff_t m_nRagdollDamageBone = 0x2BB4; // int32
                constexpr std::ptrdiff_t m_vRagdollDamageForce = 0x2BB8; // Vector
                constexpr std::ptrdiff_t m_szRagdollDamageWeaponName = 0x2BC4; // char[64]
                constexpr std::ptrdiff_t m_bRagdollDamageHeadshot = 0x2C04; // bool
                constexpr std::ptrdiff_t m_vRagdollServerOrigin = 0x2C08; // VectorWS
                constexpr std::ptrdiff_t m_lastLandTime = 0x2C14; // GameTime_t
                constexpr std::ptrdiff_t m_bOnGroundLastTick = 0x2C18; // bool
                constexpr std::ptrdiff_t m_hHudModelArms = 0x2C34; // CHandle<C_CS2HudModelArms>
                constexpr std::ptrdiff_t m_qDeathEyeAngles = 0x2C38; // QAngle
                constexpr std::ptrdiff_t m_bLeftHanded = 0x2C44; // bool
                constexpr std::ptrdiff_t m_fSwitchedHandednessTime = 0x2C48; // GameTime_t
                constexpr std::ptrdiff_t m_flViewmodelOffsetX = 0x2C4C; // float32
                constexpr std::ptrdiff_t m_flViewmodelOffsetY = 0x2C50; // float32
                constexpr std::ptrdiff_t m_flViewmodelOffsetZ = 0x2C54; // float32
                constexpr std::ptrdiff_t m_flViewmodelFOV = 0x2C58; // float32
                constexpr std::ptrdiff_t m_vecPlayerPatchEconIndices = 0x2C5C; // uint32[5]
                constexpr std::ptrdiff_t m_GunGameImmunityColor = 0x2CA0; // Color
                constexpr std::ptrdiff_t m_vecBulletHitModels = 0x2CF0; // CUtlVector<C_BulletHitModel*>
                constexpr std::ptrdiff_t m_bIsWalking = 0x2D08; // bool
                constexpr std::ptrdiff_t m_entitySpottedState = 0x2D10; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_bIsScoped = 0x2D28; // bool
                constexpr std::ptrdiff_t m_bResumeZoom = 0x2D29; // bool
                constexpr std::ptrdiff_t m_bIsDefusing = 0x2D2A; // bool
                constexpr std::ptrdiff_t m_bIsGrabbingHostage = 0x2D2B; // bool
                constexpr std::ptrdiff_t m_iBlockingUseActionInProgress = 0x2D2C; // CSPlayerBlockingUseAction_t
                constexpr std::ptrdiff_t m_flEmitSoundTime = 0x2D30; // GameTime_t
                constexpr std::ptrdiff_t m_flEmitSoundTime_Client = 0x2D34; // GameTime_t
                constexpr std::ptrdiff_t m_bInNoDefuseArea = 0x2D38; // bool
                constexpr std::ptrdiff_t m_nWhichBombZone = 0x2D3C; // int32
                constexpr std::ptrdiff_t m_iShotsFired = 0x2D40; // int32
                constexpr std::ptrdiff_t m_flFlinchStack = 0x2D44; // float32
                constexpr std::ptrdiff_t m_flVelocityModifier = 0x2D48; // float32
                constexpr std::ptrdiff_t m_bWaitForNoAttack = 0x2D4C; // bool
                constexpr std::ptrdiff_t m_ignoreLadderJumpTime = 0x2D50; // float32
                constexpr std::ptrdiff_t m_bKilledByHeadshot = 0x2D55; // bool
                constexpr std::ptrdiff_t m_ArmorValue = 0x2D58; // int32
                constexpr std::ptrdiff_t m_unCurrentEquipmentValue = 0x2D5C; // uint16
                constexpr std::ptrdiff_t m_unRoundStartEquipmentValue = 0x2D5E; // uint16
                constexpr std::ptrdiff_t m_unFreezetimeEndEquipmentValue = 0x2D60; // uint16
                constexpr std::ptrdiff_t m_nLastKillerIndex = 0x2D64; // CEntityIndex
                constexpr std::ptrdiff_t m_bOldIsScoped = 0x2D68; // bool
                constexpr std::ptrdiff_t m_bHasDeathInfo = 0x2D69; // bool
                constexpr std::ptrdiff_t m_flDeathInfoTime = 0x2D6C; // float32
                constexpr std::ptrdiff_t m_vecDeathInfoOrigin = 0x2D70; // VectorWS
                constexpr std::ptrdiff_t m_grenadeParameterStashTime = 0x2DA8; // GameTime_t
                constexpr std::ptrdiff_t m_bGrenadeParametersStashed = 0x2DAC; // bool
                constexpr std::ptrdiff_t m_angStashedShootAngles = 0x2DB0; // QAngle
                constexpr std::ptrdiff_t m_vecStashedGrenadeThrowPosition = 0x2DBC; // VectorWS
                constexpr std::ptrdiff_t m_vecStashedGrenadeThrowPawnCenter = 0x2DC8; // VectorWS
                constexpr std::ptrdiff_t m_vecStashedVelocity = 0x2DD4; // Vector
                constexpr std::ptrdiff_t m_flInterpolatedInaccuracy = 0x2DE0; // float32
                constexpr std::ptrdiff_t m_bShouldAutobuyDMWeapons = 0x4390; // bool
                constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTime = 0x4394; // GameTime_t
                constexpr std::ptrdiff_t m_bGunGameImmunity = 0x4398; // bool
                constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTimeLast = 0x439C; // GameTime_t
                constexpr std::ptrdiff_t m_flModifier0 = 0x43A0; // float32
                constexpr std::ptrdiff_t m_fMolotovDamageTime = 0x43A4; // float32
                constexpr std::ptrdiff_t m_nPlayerInfernoBodyFx = 0x4410; // ParticleIndex_t
                constexpr std::ptrdiff_t m_angEyeAngles = 0x4490; // QAngle
                constexpr std::ptrdiff_t m_arrOldEyeAnglesTimes = 0x4528; // GameTime_t[4]
                constexpr std::ptrdiff_t m_arrOldEyeAngles = 0x4538; // QAngle[4]
                constexpr std::ptrdiff_t m_angEyeAnglesVelocity = 0x4568; // QAngle
                constexpr std::ptrdiff_t m_iIDEntIndex = 0x4574; // CEntityIndex
                constexpr std::ptrdiff_t m_delayTargetIDTimer = 0x4578; // CountdownTimer
                constexpr std::ptrdiff_t m_iTargetItemEntIdx = 0x4590; // CEntityIndex
                constexpr std::ptrdiff_t m_iOldIDEntIndex = 0x4594; // CEntityIndex
                constexpr std::ptrdiff_t m_holdTargetIDTimer = 0x4598; // CountdownTimer
            }
            // Parent: None
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
            // Parent: None
            // Field count: 23
            namespace C_Hostage {
                constexpr std::ptrdiff_t m_entitySpottedState = 0x1278; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_leader = 0x1290; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_reuseTimer = 0x1298; // CountdownTimer
                constexpr std::ptrdiff_t m_vel = 0x12B0; // Vector
                constexpr std::ptrdiff_t m_isRescued = 0x12BC; // bool
                constexpr std::ptrdiff_t m_jumpedThisFrame = 0x12BD; // bool
                constexpr std::ptrdiff_t m_nHostageState = 0x12C0; // int32
                constexpr std::ptrdiff_t m_bHandsHaveBeenCut = 0x12C4; // bool
                constexpr std::ptrdiff_t m_hHostageGrabber = 0x12C8; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_fLastGrabTime = 0x12CC; // GameTime_t
                constexpr std::ptrdiff_t m_vecGrabbedPos = 0x12D0; // VectorWS
                constexpr std::ptrdiff_t m_flRescueStartTime = 0x12DC; // GameTime_t
                constexpr std::ptrdiff_t m_flGrabSuccessTime = 0x12E0; // GameTime_t
                constexpr std::ptrdiff_t m_flDropStartTime = 0x12E4; // GameTime_t
                constexpr std::ptrdiff_t m_flDeadOrRescuedTime = 0x12E8; // GameTime_t
                constexpr std::ptrdiff_t m_blinkTimer = 0x12F0; // CountdownTimer
                constexpr std::ptrdiff_t m_lookAt = 0x1308; // VectorWS
                constexpr std::ptrdiff_t m_lookAroundTimer = 0x1318; // CountdownTimer
                constexpr std::ptrdiff_t m_isInit = 0x1330; // bool
                constexpr std::ptrdiff_t m_eyeAttachment = 0x1331; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_chestAttachment = 0x1332; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_pPredictionOwner = 0x1338; // CBasePlayerController*
                constexpr std::ptrdiff_t m_fNewestAlphaThinkTime = 0x1340; // GameTime_t
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
                constexpr std::ptrdiff_t m_hierarchyAttachName = 0x128; // CUtlStringToken
                constexpr std::ptrdiff_t m_flClientLocalScale = 0x12C; // float32
            }
            // Parent: None
            // Field count: 6
            namespace CPlayer_ObserverServices {
                constexpr std::ptrdiff_t m_iObserverMode = 0x48; // uint8
                constexpr std::ptrdiff_t m_hObserverTarget = 0x4C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iObserverLastMode = 0x50; // ObserverMode_t
                constexpr std::ptrdiff_t m_bForcedObserverMode = 0x54; // bool
                constexpr std::ptrdiff_t m_flObserverChaseDistance = 0x58; // float32
                constexpr std::ptrdiff_t m_flObserverChaseDistanceCalcTime = 0x5C; // GameTime_t
            }
            // Parent: None
            // Field count: 1
            namespace CCashStack {
                constexpr std::ptrdiff_t m_nCashStackValue = 0x1020; // int32
            }
            // Parent: C_BaseEntity
            // Field count: 4
            namespace C_SoundAreaEntityBase {
                constexpr std::ptrdiff_t m_bDisabled = 0x77C; // bool
                constexpr std::ptrdiff_t m_bWasEnabled = 0x784; // bool
                constexpr std::ptrdiff_t m_iszSoundAreaType = 0x788; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vPos = 0x790; // Vector
            }
            // Parent: C_BaseEntity
            // Field count: 6
            namespace C_PlayerVisibility {
                constexpr std::ptrdiff_t m_flVisibilityStrength = 0x77C; // float32
                constexpr std::ptrdiff_t m_flFogDistanceMultiplier = 0x780; // float32
                constexpr std::ptrdiff_t m_flFogMaxDensityMultiplier = 0x784; // float32
                constexpr std::ptrdiff_t m_flFadeTime = 0x788; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x78C; // bool
                constexpr std::ptrdiff_t m_bIsEnabled = 0x78D; // bool
            }
            // Parent: None
            // Field count: 3
            namespace CAttributeManager__cached_attribute_float_t {
                constexpr std::ptrdiff_t flIn = 0x0; // float32
                constexpr std::ptrdiff_t iAttribHook = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t flOut = 0x10; // float32
            }
            // Parent: CBaseAnimGraph
            // Field count: 7
            namespace C_BasePlayerWeapon {
                constexpr std::ptrdiff_t m_nNextPrimaryAttackTick = 0x27A8; // GameTick_t
                constexpr std::ptrdiff_t m_flNextPrimaryAttackTickRatio = 0x27AC; // float32
                constexpr std::ptrdiff_t m_nNextSecondaryAttackTick = 0x27B0; // GameTick_t
                constexpr std::ptrdiff_t m_flNextSecondaryAttackTickRatio = 0x27B4; // float32
                constexpr std::ptrdiff_t m_iClip1 = 0x27B8; // int32
                constexpr std::ptrdiff_t m_iClip2 = 0x27BC; // int32
                constexpr std::ptrdiff_t m_pReserveAmmo = 0x27C0; // int32[2]
            }
            // Parent: C_BaseEntity
            // Field count: 1
            namespace CRagdollManager {
                constexpr std::ptrdiff_t m_iCurrentMaxRagdollCount = 0x77C; // int8
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            namespace CSoundOpvarSetBoxEntity {
            }
            // Parent: None
            // Field count: 0
            namespace C_HEGrenade {
            }
            // Parent: C_BaseModelEntity
            // Field count: 12
            namespace C_EnvSky {
                constexpr std::ptrdiff_t m_hSkyMaterial = 0x1020; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hSkyMaterialLightingOnly = 0x1028; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_bStartDisabled = 0x1030; // bool
                constexpr std::ptrdiff_t m_vTintColor = 0x1034; // Color
                constexpr std::ptrdiff_t m_vTintColorLightingOnly = 0x1038; // Color
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x103C; // float32
                constexpr std::ptrdiff_t m_nFogType = 0x1040; // int32
                constexpr std::ptrdiff_t m_flFogMinStart = 0x1044; // float32
                constexpr std::ptrdiff_t m_flFogMinEnd = 0x1048; // float32
                constexpr std::ptrdiff_t m_flFogMaxStart = 0x104C; // float32
                constexpr std::ptrdiff_t m_flFogMaxEnd = 0x1050; // float32
                constexpr std::ptrdiff_t m_bEnabled = 0x1054; // bool
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
            // Parent: None
            // Field count: 4
            namespace C_GameRules {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_nTotalPausedTicks = 0x30; // int32
                constexpr std::ptrdiff_t m_nPauseStartTick = 0x34; // int32
                constexpr std::ptrdiff_t m_bGamePaused = 0x38; // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponMAC10 {
            }
            // Parent: C_BaseEntity
            // Field count: 14
            namespace C_CSGO_MapPreviewCameraPath {
                constexpr std::ptrdiff_t m_flZFar = 0x77C; // float32
                constexpr std::ptrdiff_t m_flZNear = 0x780; // float32
                constexpr std::ptrdiff_t m_bLoop = 0x784; // bool
                constexpr std::ptrdiff_t m_bVerticalFOV = 0x785; // bool
                constexpr std::ptrdiff_t m_bConstantSpeed = 0x786; // bool
                constexpr std::ptrdiff_t m_flDuration = 0x788; // float32
                constexpr std::ptrdiff_t m_flPathLength = 0x7D0; // float32
                constexpr std::ptrdiff_t m_flPathDuration = 0x7D4; // float32
                constexpr std::ptrdiff_t m_bDofEnabled = 0x7EC; // bool
                constexpr std::ptrdiff_t m_flDofNearBlurry = 0x7F0; // float32
                constexpr std::ptrdiff_t m_flDofNearCrisp = 0x7F4; // float32
                constexpr std::ptrdiff_t m_flDofFarCrisp = 0x7F8; // float32
                constexpr std::ptrdiff_t m_flDofFarBlurry = 0x7FC; // float32
                constexpr std::ptrdiff_t m_flDofTiltToGround = 0x800; // float32
            }
            // Parent: C_BaseModelEntity
            // Field count: 19
            namespace C_PointWorldText {
                constexpr std::ptrdiff_t m_bForceRecreateNextUpdate = 0x1028; // bool
                constexpr std::ptrdiff_t m_nTextWidthPx = 0x1040; // int32
                constexpr std::ptrdiff_t m_nTextHeightPx = 0x1044; // int32
                constexpr std::ptrdiff_t m_messageText = 0x1048; // char[512]
                constexpr std::ptrdiff_t m_FontName = 0x1248; // char[64]
                constexpr std::ptrdiff_t m_BackgroundMaterialName = 0x1288; // char[64]
                constexpr std::ptrdiff_t m_bEnabled = 0x12C8; // bool
                constexpr std::ptrdiff_t m_bFullbright = 0x12C9; // bool
                constexpr std::ptrdiff_t m_flWorldUnitsPerPx = 0x12CC; // float32
                constexpr std::ptrdiff_t m_flFontSize = 0x12D0; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0x12D4; // float32
                constexpr std::ptrdiff_t m_bDrawBackground = 0x12D8; // bool
                constexpr std::ptrdiff_t m_flBackgroundBorderWidth = 0x12DC; // float32
                constexpr std::ptrdiff_t m_flBackgroundBorderHeight = 0x12E0; // float32
                constexpr std::ptrdiff_t m_flBackgroundWorldToUV = 0x12E4; // float32
                constexpr std::ptrdiff_t m_Color = 0x12E8; // Color
                constexpr std::ptrdiff_t m_nJustifyHorizontal = 0x12EC; // PointWorldTextJustifyHorizontal_t
                constexpr std::ptrdiff_t m_nJustifyVertical = 0x12F0; // PointWorldTextJustifyVertical_t
                constexpr std::ptrdiff_t m_nReorientMode = 0x12F4; // PointWorldTextReorientMode_t
            }
            // Parent: None
            // Field count: 40
            namespace C_RopeKeyframe {
                constexpr std::ptrdiff_t m_LinksTouchingSomething = 0x1028; // CBitVec<10>
                constexpr std::ptrdiff_t m_nLinksTouchingSomething = 0x102C; // int32
                constexpr std::ptrdiff_t m_bApplyWind = 0x1030; // bool
                constexpr std::ptrdiff_t m_fPrevLockedPoints = 0x1034; // int32
                constexpr std::ptrdiff_t m_iForcePointMoveCounter = 0x1038; // int32
                constexpr std::ptrdiff_t m_bPrevEndPointPos = 0x103C; // bool[2]
                constexpr std::ptrdiff_t m_vPrevEndPointPos = 0x1040; // VectorWS[2]
                constexpr std::ptrdiff_t m_flCurScroll = 0x1058; // float32
                constexpr std::ptrdiff_t m_flScrollSpeed = 0x105C; // float32
                constexpr std::ptrdiff_t m_RopeFlags = 0x1060; // uint16
                constexpr std::ptrdiff_t m_iRopeMaterialModelIndex = 0x1068; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nSegments = 0x12E0; // uint8
                constexpr std::ptrdiff_t m_hStartPoint = 0x12E4; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hEndPoint = 0x12E8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iStartAttachment = 0x12EC; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_iEndAttachment = 0x12ED; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_Subdiv = 0x12EE; // uint8
                constexpr std::ptrdiff_t m_RopeLength = 0x12F0; // int16
                constexpr std::ptrdiff_t m_Slack = 0x12F2; // int16
                constexpr std::ptrdiff_t m_TextureScale = 0x12F4; // float32
                constexpr std::ptrdiff_t m_fLockedPoints = 0x12F8; // uint8
                constexpr std::ptrdiff_t m_nChangeCount = 0x12F9; // uint8
                constexpr std::ptrdiff_t m_Width = 0x12FC; // float32
                constexpr std::ptrdiff_t m_PhysicsDelegate = 0x1300; // C_RopeKeyframe::CPhysicsDelegate
                constexpr std::ptrdiff_t m_hMaterial = 0x1310; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_TextureHeight = 0x1318; // int32
                constexpr std::ptrdiff_t m_vecImpulse = 0x131C; // Vector
                constexpr std::ptrdiff_t m_vecPreviousImpulse = 0x1328; // Vector
                constexpr std::ptrdiff_t m_flCurrentGustTimer = 0x1334; // float32
                constexpr std::ptrdiff_t m_flCurrentGustLifetime = 0x1338; // float32
                constexpr std::ptrdiff_t m_flTimeToNextGust = 0x133C; // float32
                constexpr std::ptrdiff_t m_vWindDir = 0x1340; // Vector
                constexpr std::ptrdiff_t m_vColorMod = 0x134C; // Vector
                constexpr std::ptrdiff_t m_vCachedEndPointAttachmentPos = 0x1358; // VectorWS[2]
                constexpr std::ptrdiff_t m_vCachedEndPointAttachmentAngle = 0x1370; // QAngle[2]
                constexpr std::ptrdiff_t m_bConstrainBetweenEndpoints = 0x1388; // bool
                constexpr std::ptrdiff_t m_bEndPointAttachmentPositionsDirty = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bEndPointAttachmentAnglesDirty = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNewDataThisFrame = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bPhysicsInitted = 0x0; // bitfield:1
            }
            // Parent: None
            // Field count: 0
            namespace C_BaseToggle {
            }
            // Parent: None
            // Field count: 0
            namespace C_EnvCubemapBox {
            }
            // Parent: None
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
                constexpr std::ptrdiff_t m_bDisabled = 0x77C; // bool
                constexpr std::ptrdiff_t m_flRange = 0x780; // float32
                constexpr std::ptrdiff_t m_nImportance = 0x784; // int32
                constexpr std::ptrdiff_t m_nLightChoice = 0x788; // int32
                constexpr std::ptrdiff_t m_hLight = 0x78C; // CHandle<C_BaseEntity>
            }
            // Parent: C_PointEntity
            // Field count: 6
            namespace CPathNode {
                constexpr std::ptrdiff_t m_vInTangentLocal = 0x77C; // Vector
                constexpr std::ptrdiff_t m_vOutTangentLocal = 0x788; // Vector
                constexpr std::ptrdiff_t m_strParentPathUniqueID = 0x798; // CUtlString
                constexpr std::ptrdiff_t m_strPathNodeParameter = 0x7A0; // CUtlString
                constexpr std::ptrdiff_t m_xWSPrevParent = 0x7B0; // CTransformWS
                constexpr std::ptrdiff_t m_hPath = 0x7D0; // CHandle<CPathWithDynamicNodes>
            }
            // Parent: None
            // Field count: 0
            namespace C_FuncMoveLinear {
            }
            // Parent: C_BaseEntity
            // Field count: 6
            namespace C_EnvShakeVolume {
                constexpr std::ptrdiff_t m_vBoxMins = 0x798; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x7A4; // Vector
                constexpr std::ptrdiff_t m_flAmplitude = 0x7B0; // float32
                constexpr std::ptrdiff_t m_flFrequency = 0x7B4; // float32
                constexpr std::ptrdiff_t m_flFalloffDistance = 0x7B8; // float32
                constexpr std::ptrdiff_t m_flRollScale = 0x7BC; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CServerOnlyModelEntity {
            }
            // Parent: None
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
            // Parent: None
            // Field count: 0
            namespace C_WeaponXM1014 {
            }
            // Parent: None
            // Field count: 0
            namespace C_WorldModelGloves {
            }
            // Parent: None
            // Field count: 0
            namespace C_PhysicsPropMultiplayer {
            }
            // Parent: C_SoundEventEntity
            // Field count: 2
            namespace C_SoundEventOBBEntity {
                constexpr std::ptrdiff_t m_vMins = 0x838; // Vector
                constexpr std::ptrdiff_t m_vMaxs = 0x844; // Vector
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseLerp {
                constexpr std::ptrdiff_t m_WakeResume = 0xD8; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponAug {
            }
            // Parent: None
            // Field count: 8
            namespace C_BasePropDoor {
                constexpr std::ptrdiff_t m_eDoorState = 0x142C; // DoorState_t
                constexpr std::ptrdiff_t m_modelChanged = 0x1430; // bool
                constexpr std::ptrdiff_t m_bLocked = 0x1431; // bool
                constexpr std::ptrdiff_t m_bNoNPCs = 0x1432; // bool
                constexpr std::ptrdiff_t m_closedPosition = 0x1434; // VectorWS
                constexpr std::ptrdiff_t m_closedAngles = 0x1440; // QAngle
                constexpr std::ptrdiff_t m_hMaster = 0x144C; // CHandle<C_BasePropDoor>
                constexpr std::ptrdiff_t m_vWhereToSetLightingOrigin = 0x1450; // VectorWS
            }
            // Parent: None
            // Field count: 0
            namespace CChoreoInfoTarget {
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
            // Parent: None
            // Field count: 0
            namespace C_Item_Healthshot {
            }
            // Parent: C_BaseEntity
            // Field count: 7
            namespace CCSCustomHudLayout {
                constexpr std::ptrdiff_t m_strLayout = 0x798; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bObservable = 0x7A0; // bool
                constexpr std::ptrdiff_t m_vecPlayerLayoutStates = 0x7A8; // C_UtlVectorEmbeddedNetworkVar<CCSCustomHudLayoutState>
                constexpr std::ptrdiff_t m_globalLayoutState = 0x810; // CCSCustomHudLayoutState
                constexpr std::ptrdiff_t m_vecPanelIds = 0x918; // C_NetworkUtlVectorBase<CUtlString>
                constexpr std::ptrdiff_t m_vecClassNames = 0x930; // C_NetworkUtlVectorBase<CUtlString>
                constexpr std::ptrdiff_t m_vecDialogVariableNames = 0x948; // C_NetworkUtlVectorBase<CUtlString>
            }
            // Parent: None
            // Field count: 3
            namespace CEntityInstance {
                constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pEntity = 0x10; // CEntityIdentity*
                constexpr std::ptrdiff_t m_CScriptComponent = 0x28; // CScriptComponent*
            }
            // Parent: C_BaseEntity
            // Field count: 47
            namespace C_BaseModelEntity {
                constexpr std::ptrdiff_t m_CRenderComponent = 0xA78; // CRenderComponent*
                constexpr std::ptrdiff_t m_CHitboxComponent = 0xA80; // CHitboxComponent
                constexpr std::ptrdiff_t m_pChoreoComponent = 0xA98; // CChoreoComponent*
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed0 = 0xAA0; // HitGroup_t
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed1 = 0xAA4; // HitGroup_t
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed2 = 0xAA8; // HitGroup_t
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed3 = 0xAAC; // HitGroup_t
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed4 = 0xAB0; // HitGroup_t
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed0_PartIndex = 0xAB4; // int32
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed1_PartIndex = 0xAB8; // int32
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed2_PartIndex = 0xABC; // int32
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed3_PartIndex = 0xAC0; // int32
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed4_PartIndex = 0xAC4; // int32
                constexpr std::ptrdiff_t m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces = 0xAC8; // bool
                constexpr std::ptrdiff_t m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces = 0xAC9; // bool
                constexpr std::ptrdiff_t m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces = 0xACA; // bool
                constexpr std::ptrdiff_t m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces = 0xACB; // bool
                constexpr std::ptrdiff_t m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces = 0xACC; // bool
                constexpr std::ptrdiff_t m_pDestructiblePartsSystemComponent = 0xAD0; // CDestructiblePartsComponent*
                constexpr std::ptrdiff_t m_bInitModelEffects = 0xBF8; // bool
                constexpr std::ptrdiff_t m_bDoingModelEffects = 0xBF9; // bool
                constexpr std::ptrdiff_t m_iOldHealth = 0xBFC; // int32
                constexpr std::ptrdiff_t m_nRenderMode = 0xC00; // RenderMode_t
                constexpr std::ptrdiff_t m_nRenderFX = 0xC01; // RenderFx_t
                constexpr std::ptrdiff_t m_bAllowFadeInView = 0xC02; // bool
                constexpr std::ptrdiff_t m_clrRender = 0xC20; // Color
                constexpr std::ptrdiff_t m_vecRenderAttributes = 0xC28; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
                constexpr std::ptrdiff_t m_bRenderToCubemaps = 0xCA8; // bool
                constexpr std::ptrdiff_t m_bExpandRenderBoundsToIncludeCloth = 0xCA9; // bool
                constexpr std::ptrdiff_t m_bNoInterpolate = 0xCAA; // bool
                constexpr std::ptrdiff_t m_Collision = 0xCB0; // CCollisionProperty
                constexpr std::ptrdiff_t m_Glow = 0xD68; // CGlowProperty
                constexpr std::ptrdiff_t m_flGlowBackfaceMult = 0xDC0; // float32
                constexpr std::ptrdiff_t m_fadeMinDist = 0xDC4; // float32
                constexpr std::ptrdiff_t m_fadeMaxDist = 0xDC8; // float32
                constexpr std::ptrdiff_t m_flFadeScale = 0xDCC; // float32
                constexpr std::ptrdiff_t m_flShadowStrength = 0xDD0; // float32
                constexpr std::ptrdiff_t m_nObjectCulling = 0xDD4; // uint8
                constexpr std::ptrdiff_t m_nRequiredDecalRtEncoding = 0xDD5; // DecalRtEncoding_t
                constexpr std::ptrdiff_t m_bodyGroupTotalRequestCount = 0xDD8; // uint32
                constexpr std::ptrdiff_t m_bodyGroupRequests = 0xDE0; // CUtlVectorFixedGrowable<C_BaseModelEntity::BodyGroupRequest_t,8>
                constexpr std::ptrdiff_t m_bodyGroupChoices = 0xEB8; // CUtlOrderedMap<CGlobalSymbol,int32>
                constexpr std::ptrdiff_t m_vecViewOffset = 0xEE0; // CNetworkViewOffsetVector
                constexpr std::ptrdiff_t m_pClientAlphaProperty = 0xFC8; // CClientAlphaProperty*
                constexpr std::ptrdiff_t m_ClientOverrideTint = 0xFD0; // Color
                constexpr std::ptrdiff_t m_bUseClientOverrideTint = 0xFD4; // bool
                constexpr std::ptrdiff_t m_bvDisabledHitGroups = 0x1010; // uint32[1]
            }
            // Parent: None
            // Field count: 1
            namespace CCSPlayer_BulletServices {
                constexpr std::ptrdiff_t m_totalHitsOnServer = 0x48; // int32
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            namespace C_SoundOpvarSetAutoRoomEntity {
            }
            // Parent: C_BaseEntity
            // Field count: 27
            namespace C_EnvCombinedLightProbeVolume {
                constexpr std::ptrdiff_t m_Entity_Color = 0x898; // Color
                constexpr std::ptrdiff_t m_Entity_flBrightness = 0x89C; // float32
                constexpr std::ptrdiff_t m_Entity_hCubemapTexture = 0x8A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_bCustomCubemapTexture = 0x8A8; // bool
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_AmbientCube = 0x8B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SDF = 0x8B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_DC = 0x8C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_L1 = 0x8C8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x8D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x8D8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x8E0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x8E8; // Vector
                constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x8F4; // Vector
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x900; // bool
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x904; // int32
                constexpr std::ptrdiff_t m_Entity_nEnvCubeMapArrayIndex = 0x908; // int32
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x90C; // int32
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x910; // bool
                constexpr std::ptrdiff_t m_Entity_flEdgeFadeDist = 0x914; // float32
                constexpr std::ptrdiff_t m_Entity_vEdgeFadeDists = 0x918; // Vector
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x924; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x928; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x92C; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x930; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x934; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x938; // int32
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x951; // bool
            }
            // Parent: None
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
            namespace C_LightDirectionalEntity {
            }
            // Parent: None
            // Field count: 82
            namespace C_BaseEntity {
                constexpr std::ptrdiff_t m_CBodyComponent = 0x30; // CBodyComponent*
                constexpr std::ptrdiff_t m_NetworkTransmitComponent = 0x38; // CNetworkTransmitComponent
                constexpr std::ptrdiff_t m_nLastThinkTick = 0x498; // GameTick_t
                constexpr std::ptrdiff_t m_pGameSceneNode = 0x4A0; // CGameSceneNode*
                constexpr std::ptrdiff_t m_pRenderComponent = 0x4A8; // CRenderComponent*
                constexpr std::ptrdiff_t m_pCollision = 0x4B0; // CCollisionProperty*
                constexpr std::ptrdiff_t m_iMaxHealth = 0x4B8; // int32
                constexpr std::ptrdiff_t m_iHealth = 0x4BC; // int32
                constexpr std::ptrdiff_t m_flDamageAccumulator = 0x4C0; // float32
                constexpr std::ptrdiff_t m_lifeState = 0x4C4; // uint8
                constexpr std::ptrdiff_t m_bTakesDamage = 0x4C5; // bool
                constexpr std::ptrdiff_t m_nTakeDamageFlags = 0x4C8; // TakeDamageFlags_t
                constexpr std::ptrdiff_t m_nPlatformType = 0x4D0; // EntityPlatformTypes_t
                constexpr std::ptrdiff_t m_ubInterpolationFrame = 0x4D1; // uint8
                constexpr std::ptrdiff_t m_hSceneObjectController = 0x4D4; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nNoInterpolationTick = 0x4D8; // int32
                constexpr std::ptrdiff_t m_nVisibilityNoInterpolationTick = 0x4DC; // int32
                constexpr std::ptrdiff_t m_flProxyRandomValue = 0x4E0; // float32
                constexpr std::ptrdiff_t m_iEFlags = 0x4E4; // int32
                constexpr std::ptrdiff_t m_nWaterType = 0x4E8; // uint8
                constexpr std::ptrdiff_t m_bInterpolateEvenWithNoModel = 0x4E9; // bool
                constexpr std::ptrdiff_t m_bPredictionEligible = 0x4EA; // bool
                constexpr std::ptrdiff_t m_bApplyLayerMatchIDToModel = 0x4EB; // bool
                constexpr std::ptrdiff_t m_tokLayerMatchID = 0x4EC; // CUtlStringToken
                constexpr std::ptrdiff_t m_nSubclassID = 0x4F0; // CUtlStringToken
                constexpr std::ptrdiff_t m_nSimulationTick = 0x500; // int32
                constexpr std::ptrdiff_t m_iCurrentThinkContext = 0x504; // int32
                constexpr std::ptrdiff_t m_aThinkFunctions = 0x508; // CUtlVector<thinkfunc_t>
                constexpr std::ptrdiff_t m_bDisabledContextThinks = 0x520; // bool
                constexpr std::ptrdiff_t m_flAnimTime = 0x524; // float32
                constexpr std::ptrdiff_t m_flSimulationTime = 0x528; // float32
                constexpr std::ptrdiff_t m_nSceneObjectOverrideFlags = 0x52C; // uint8
                constexpr std::ptrdiff_t m_bHasSuccessfullyInterpolated = 0x52D; // bool
                constexpr std::ptrdiff_t m_bHasAddedVarsToInterpolation = 0x52E; // bool
                constexpr std::ptrdiff_t m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x52F; // bool
                constexpr std::ptrdiff_t m_nInterpolationLatchDirtyFlags = 0x530; // int32[2]
                constexpr std::ptrdiff_t m_ListEntry = 0x538; // uint16[11]
                constexpr std::ptrdiff_t m_flCreateTime = 0x550; // GameTime_t
                constexpr std::ptrdiff_t m_EntClientFlags = 0x554; // uint16
                constexpr std::ptrdiff_t m_bClientSideRagdoll = 0x556; // bool
                constexpr std::ptrdiff_t m_iTeamNum = 0x557; // uint8
                constexpr std::ptrdiff_t m_spawnflags = 0x558; // uint32
                constexpr std::ptrdiff_t m_nNextThinkTick = 0x55C; // GameTick_t
                constexpr std::ptrdiff_t m_fFlags = 0x564; // uint32
                constexpr std::ptrdiff_t m_vecAbsVelocity = 0x568; // Vector
                constexpr std::ptrdiff_t m_vecServerVelocity = 0x574; // CNetworkVelocityVector
                constexpr std::ptrdiff_t m_vecVelocity = 0x5A0; // CNetworkVelocityVector
                constexpr std::ptrdiff_t m_vecBaseVelocity = 0x688; // Vector
                constexpr std::ptrdiff_t m_hEffectEntity = 0x694; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hOwnerEntity = 0x698; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_MoveCollide = 0x69C; // MoveCollide_t
                constexpr std::ptrdiff_t m_MoveType = 0x69D; // MoveType_t
                constexpr std::ptrdiff_t m_nActualMoveType = 0x69E; // MoveType_t
                constexpr std::ptrdiff_t m_flWaterLevel = 0x6A0; // float32
                constexpr std::ptrdiff_t m_fEffects = 0x6A4; // uint32
                constexpr std::ptrdiff_t m_hGroundEntity = 0x6A8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nGroundBodyIndex = 0x6AC; // int32
                constexpr std::ptrdiff_t m_flFriction = 0x6B0; // float32
                constexpr std::ptrdiff_t m_flElasticity = 0x6B4; // float32
                constexpr std::ptrdiff_t m_flGravityScale = 0x6B8; // float32
                constexpr std::ptrdiff_t m_flTimeScale = 0x6BC; // float32
                constexpr std::ptrdiff_t m_bAnimatedEveryTick = 0x6C0; // bool
                constexpr std::ptrdiff_t m_bGravityDisabled = 0x6C1; // bool
                constexpr std::ptrdiff_t m_flNavIgnoreUntilTime = 0x6C4; // GameTime_t
                constexpr std::ptrdiff_t m_hThink = 0x6C8; // uint16
                constexpr std::ptrdiff_t m_fBBoxVisFlags = 0x6D8; // uint8
                constexpr std::ptrdiff_t m_flActualGravityScale = 0x6DC; // float32
                constexpr std::ptrdiff_t m_bGravityActuallyDisabled = 0x6E0; // bool
                constexpr std::ptrdiff_t m_bPredictable = 0x6E1; // bool
                constexpr std::ptrdiff_t m_bRenderWithViewModels = 0x6E2; // bool
                constexpr std::ptrdiff_t m_nFirstPredictableCommand = 0x6E4; // int32
                constexpr std::ptrdiff_t m_nLastPredictableCommand = 0x6E8; // int32
                constexpr std::ptrdiff_t m_hOldMoveParent = 0x6EC; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_Particles = 0x6F0; // CParticleProperty
                constexpr std::ptrdiff_t m_vecAngVelocity = 0x720; // QAngle
                constexpr std::ptrdiff_t m_DataChangeEventRef = 0x72C; // int32
                constexpr std::ptrdiff_t m_dependencies = 0x730; // CUtlVector<CEntityHandle>
                constexpr std::ptrdiff_t m_nCreationTick = 0x748; // int32
                constexpr std::ptrdiff_t m_bAnimTimeChanged = 0x761; // bool
                constexpr std::ptrdiff_t m_bSimulationTimeChanged = 0x762; // bool
                constexpr std::ptrdiff_t m_sUniqueHammerID = 0x770; // CUtlString
                constexpr std::ptrdiff_t m_nBloodType = 0x778; // BloodType
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
            // Parent: None
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
            // Parent: None
            // Field count: 7
            namespace C_Chicken {
                constexpr std::ptrdiff_t m_leader = 0x1430; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_owner = 0x1434; // CHandle<CCSPlayerController>
                constexpr std::ptrdiff_t m_AttributeManager = 0x1438; // C_AttributeContainer
                constexpr std::ptrdiff_t m_bAttributesInitialized = 0x2950; // bool
                constexpr std::ptrdiff_t m_hWaterWakeParticles = 0x2954; // ParticleIndex_t
                constexpr std::ptrdiff_t m_bIsPreviewModel = 0x2958; // bool
                constexpr std::ptrdiff_t m_bSpawnDyingParticles = 0x29E0; // bool
            }
            // Parent: CBaseAnimGraph
            // Field count: 28
            namespace C_BasePlayerPawn {
                constexpr std::ptrdiff_t m_pWeaponServices = 0x1278; // CPlayer_WeaponServices*
                constexpr std::ptrdiff_t m_pItemServices = 0x1280; // CPlayer_ItemServices*
                constexpr std::ptrdiff_t m_pAutoaimServices = 0x1288; // CPlayer_AutoaimServices*
                constexpr std::ptrdiff_t m_pObserverServices = 0x1290; // CPlayer_ObserverServices*
                constexpr std::ptrdiff_t m_pWaterServices = 0x1298; // CPlayer_WaterServices*
                constexpr std::ptrdiff_t m_pUseServices = 0x12A0; // CPlayer_UseServices*
                constexpr std::ptrdiff_t m_pFlashlightServices = 0x12A8; // CPlayer_FlashlightServices*
                constexpr std::ptrdiff_t m_pCameraServices = 0x12B0; // CPlayer_CameraServices*
                constexpr std::ptrdiff_t m_pMovementServices = 0x12B8; // CPlayer_MovementServices*
                constexpr std::ptrdiff_t m_ServerViewAngleChanges = 0x12C8; // C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
                constexpr std::ptrdiff_t v_angle = 0x1330; // QAngle
                constexpr std::ptrdiff_t v_anglePrevious = 0x133C; // QAngle
                constexpr std::ptrdiff_t m_iHideHUD = 0x1348; // uint32
                constexpr std::ptrdiff_t m_skybox3d = 0x1350; // sky3dparams_t
                constexpr std::ptrdiff_t m_flDeathTime = 0x13E0; // GameTime_t
                constexpr std::ptrdiff_t m_vecPredictionError = 0x13E8; // Vector
                constexpr std::ptrdiff_t m_flPredictionErrorTime = 0x13F4; // GameTime_t
                constexpr std::ptrdiff_t m_vecLastCameraSetupLocalOrigin = 0x1414; // Vector
                constexpr std::ptrdiff_t m_flLastCameraSetupTime = 0x1420; // GameTime_t
                constexpr std::ptrdiff_t m_flFOVSensitivityAdjust = 0x1424; // float32
                constexpr std::ptrdiff_t m_flMouseSensitivity = 0x1428; // float32
                constexpr std::ptrdiff_t m_vOldOrigin = 0x142C; // Vector
                constexpr std::ptrdiff_t m_flOldSimulationTime = 0x1438; // float32
                constexpr std::ptrdiff_t m_nLastExecutedCommandNumber = 0x143C; // int32
                constexpr std::ptrdiff_t m_nLastExecutedCommandTick = 0x1440; // int32
                constexpr std::ptrdiff_t m_hController = 0x1444; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_hDefaultController = 0x1448; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_bIsSwappingToPredictableController = 0x144C; // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_SoundOpvarSetAABBEntity {
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponBizon {
            }
            // Parent: None
            // Field count: 1
            namespace C_StattrakModule {
                constexpr std::ptrdiff_t m_bKnife = 0x11F8; // bool
            }
            // Parent: None
            // Field count: 1
            namespace CCSObserver_CameraServices {
                constexpr std::ptrdiff_t m_hPrevPostProcessingVolume = 0x2B8; // CHandle<C_PostProcessingVolume>
            }
            // Parent: CEnvSoundscape
            // Field count: 1
            namespace CEnvSoundscapeProxy {
                constexpr std::ptrdiff_t m_MainSoundscapeName = 0x810; // CUtlSymbolLarge
            }
            // Parent: C_BaseEntity
            // Field count: 15
            namespace C_SoundEventEntity {
                constexpr std::ptrdiff_t m_bStartOnSpawn = 0x77C; // bool
                constexpr std::ptrdiff_t m_bToLocalPlayer = 0x77D; // bool
                constexpr std::ptrdiff_t m_bStopOnNew = 0x77E; // bool
                constexpr std::ptrdiff_t m_bSaveRestore = 0x77F; // bool
                constexpr std::ptrdiff_t m_bSavedIsPlaying = 0x780; // bool
                constexpr std::ptrdiff_t m_flSavedElapsedTime = 0x784; // float32
                constexpr std::ptrdiff_t m_iszSourceEntityName = 0x788; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszAttachmentName = 0x790; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_onGUIDChanged = 0x798; // CEntityOutputTemplate<SndOpEventGuid_t>
                constexpr std::ptrdiff_t m_onSoundFinished = 0x7C8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_flClientCullRadius = 0x7E0; // float32
                constexpr std::ptrdiff_t m_iszSoundName = 0x810; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hSource = 0x82C; // CEntityHandle
                constexpr std::ptrdiff_t m_nEntityIndexSelection = 0x830; // int32
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
            // Parent: None
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
                constexpr std::ptrdiff_t m_bBombPlantedHere = 0x1105; // bool
            }
            // Parent: None
            // Field count: 1
            namespace C_Knife {
                constexpr std::ptrdiff_t m_bFirstAttack = 0x2DA5; // bool
            }
            // Parent: None
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
                constexpr std::ptrdiff_t m_bUseParentRenderBounds = 0x400; // bool
                constexpr std::ptrdiff_t m_bDisableSolidCollisionsForHierarchy = 0x401; // bool
                constexpr std::ptrdiff_t m_bDirtyMotionType = 0x402; // bool
                constexpr std::ptrdiff_t m_bIsGeneratingLatchedParentSpaceState = 0x403; // bool
                constexpr std::ptrdiff_t m_materialGroup = 0x408; // CUtlStringToken
                constexpr std::ptrdiff_t m_nHitboxSet = 0x40C; // uint8
            }
            // Parent: None
            // Field count: 0
            namespace CEntityComponent {
            }
            // Parent: None
            // Field count: 2
            namespace C_ItemDogtags {
                constexpr std::ptrdiff_t m_OwningPlayer = 0x28A8; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_KillingPlayer = 0x28AC; // CHandle<C_CSPlayerPawn>
            }
            // Parent: None
            // Field count: 0
            namespace C_LateUpdatedAnimating {
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TeamPreviewCameraBone {
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
                constexpr std::ptrdiff_t m_bEnabled = 0x1028; // bool
                constexpr std::ptrdiff_t m_DialogXMLName = 0x1030; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PanelClassName = 0x1038; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PanelID = 0x1040; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponUSPSilencer {
            }
            // Parent: None
            // Field count: 1
            namespace C_MolotovProjectile {
                constexpr std::ptrdiff_t m_bIsIncGrenade = 0x12CC; // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_TriggerLerpObject {
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponRevolver {
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponElite {
            }
            // Parent: None
            // Field count: 0
            namespace C_DynamicPropAlias_cable_dynamic {
            }
            // Parent: CBaseAnimGraph
            // Field count: 4
            namespace CBaseProp {
                constexpr std::ptrdiff_t m_bModelOverrodeBlockLOS = 0x11F0; // bool
                constexpr std::ptrdiff_t m_iShapeType = 0x11F4; // int32
                constexpr std::ptrdiff_t m_bConformToCollisionBounds = 0x11F8; // bool
                constexpr std::ptrdiff_t m_mPreferredCatchTransform = 0x1200; // CTransform
            }
            // Parent: C_PointEntity
            // Field count: 13
            namespace CInfoOffscreenPanoramaTexture {
                constexpr std::ptrdiff_t m_bDisabled = 0x77C; // bool
                constexpr std::ptrdiff_t m_bEnableMipGen = 0x77D; // bool
                constexpr std::ptrdiff_t m_nResolutionX = 0x780; // int32
                constexpr std::ptrdiff_t m_nResolutionY = 0x784; // int32
                constexpr std::ptrdiff_t m_szPanelType = 0x788; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_szLayoutFileName = 0x790; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_RenderAttrName = 0x798; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_TargetEntities = 0x7A0; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_nTargetChangeCount = 0x7B8; // int32
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x7C0; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_szTargetsName = 0x7D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_AdditionalTargetEntities = 0x7E0; // CUtlVector<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_bCheckCSSClasses = 0x950; // bool
            }
            // Parent: None
            // Field count: 83
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
                constexpr std::ptrdiff_t m_bShowCrosshair = 0x72C; // bool
                constexpr std::ptrdiff_t m_bIsFullAuto = 0x72D; // bool
                constexpr std::ptrdiff_t m_nNumBullets = 0x730; // int32
                constexpr std::ptrdiff_t m_bReloadsSingleShells = 0x734; // bool
                constexpr std::ptrdiff_t m_flCycleTime = 0x738; // CFiringModeFloat
                constexpr std::ptrdiff_t m_flCycleTimeWhenInBurstMode = 0x740; // float32
                constexpr std::ptrdiff_t m_flTimeBetweenBurstShots = 0x744; // float32
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
            // Parent: None
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
                constexpr std::ptrdiff_t m_OverrideFogColor = 0x1BC; // Color[5]
                constexpr std::ptrdiff_t m_bOverrideFogStartEnd = 0x1D0; // bool[5]
                constexpr std::ptrdiff_t m_fOverrideFogStart = 0x1D8; // float32[5]
                constexpr std::ptrdiff_t m_fOverrideFogEnd = 0x1EC; // float32[5]
                constexpr std::ptrdiff_t m_hActivePostProcessingVolume = 0x200; // CHandle<C_PostProcessingVolume>
                constexpr std::ptrdiff_t m_angDemoViewAngles = 0x208; // QAngle
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
            // Parent: None
            // Field count: 14
            namespace C_BaseCSGrenade {
                constexpr std::ptrdiff_t m_bClientPredictDelete = 0x2DA5; // bool
                constexpr std::ptrdiff_t m_bRedraw = 0x2DA6; // bool
                constexpr std::ptrdiff_t m_bIsHeldByPlayer = 0x2DA7; // bool
                constexpr std::ptrdiff_t m_bPinPulled = 0x2DA8; // bool
                constexpr std::ptrdiff_t m_bJumpThrow = 0x2DA9; // bool
                constexpr std::ptrdiff_t m_bThrowAnimating = 0x2DAA; // bool
                constexpr std::ptrdiff_t m_fThrowTime = 0x2DAC; // GameTime_t
                constexpr std::ptrdiff_t m_flThrowStrength = 0x2DB0; // float32
                constexpr std::ptrdiff_t m_fDropTime = 0x2E30; // GameTime_t
                constexpr std::ptrdiff_t m_fPinPullTime = 0x2E34; // GameTime_t
                constexpr std::ptrdiff_t m_bJustPulledPin = 0x2E38; // bool
                constexpr std::ptrdiff_t m_nNextHoldTick = 0x2E3C; // GameTick_t
                constexpr std::ptrdiff_t m_flNextHoldFrac = 0x2E40; // float32
                constexpr std::ptrdiff_t m_hSwitchToWeaponAfterThrow = 0x2E44; // CHandle<C_CSWeaponBase>
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterAttributeInt {
                constexpr std::ptrdiff_t m_sAttributeName = 0x7B0; // CUtlSymbolLarge
            }
            // Parent: C_BaseEntity
            // Field count: 12
            namespace CPointTemplate {
                constexpr std::ptrdiff_t m_iszWorldName = 0x780; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSource2EntityLumpName = 0x788; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszEntityFilterName = 0x790; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flTimeoutInterval = 0x798; // float32
                constexpr std::ptrdiff_t m_bAsynchronouslySpawnEntities = 0x79C; // bool
                constexpr std::ptrdiff_t m_clientOnlyEntityBehavior = 0x7A0; // PointTemplateClientOnlyEntityBehavior_t
                constexpr std::ptrdiff_t m_ownerSpawnGroupType = 0x7A4; // PointTemplateOwnerSpawnGroupType_t
                constexpr std::ptrdiff_t m_createdSpawnGroupHandles = 0x7A8; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_SpawnedEntityHandles = 0x7C0; // CUtlVector<CEntityHandle>
                constexpr std::ptrdiff_t m_ScriptSpawnCallback = 0x7D8; // HSCRIPT
                constexpr std::ptrdiff_t m_ScriptCallbackScope = 0x7E0; // HSCRIPT
                constexpr std::ptrdiff_t m_OnEntitySpawned = 0x7E8; // CEntityOutputTemplate<CUtlVector<CEntityHandle>>
            }
            // Parent: None
            // Field count: 0
            namespace CPlayer_FlashlightServices {
            }
            // Parent: CBasePlayerController
            // Field count: 70
            namespace CCSPlayerController {
                constexpr std::ptrdiff_t m_pInGameMoneyServices = 0x998; // CCSPlayerController_InGameMoneyServices*
                constexpr std::ptrdiff_t m_pInventoryServices = 0x9A0; // CCSPlayerController_InventoryServices*
                constexpr std::ptrdiff_t m_pActionTrackingServices = 0x9A8; // CCSPlayerController_ActionTrackingServices*
                constexpr std::ptrdiff_t m_pDamageServices = 0x9B0; // CCSPlayerController_DamageServices*
                constexpr std::ptrdiff_t m_iPing = 0x9B8; // uint32
                constexpr std::ptrdiff_t m_bHasCommunicationAbuseMute = 0x9BC; // bool
                constexpr std::ptrdiff_t m_uiCommunicationMuteFlags = 0x9C0; // uint32
                constexpr std::ptrdiff_t m_szCrosshairCodes = 0x9C8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iPendingTeamNum = 0x9D0; // uint8
                constexpr std::ptrdiff_t m_flForceTeamTime = 0x9D4; // GameTime_t
                constexpr std::ptrdiff_t m_iCompTeammateColor = 0x9D8; // int32
                constexpr std::ptrdiff_t m_bEverPlayedOnTeam = 0x9DC; // bool
                constexpr std::ptrdiff_t m_flPreviousForceJoinTeamTime = 0x9E0; // GameTime_t
                constexpr std::ptrdiff_t m_szClan = 0x9E8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_unClanId32bit = 0x9F0; // uint32
                constexpr std::ptrdiff_t m_sSanitizedPlayerName = 0x9F8; // CUtlString
                constexpr std::ptrdiff_t m_sSanitizedClanTag = 0xA00; // CUtlString
                constexpr std::ptrdiff_t m_iCoachingTeam = 0xA08; // int32
                constexpr std::ptrdiff_t m_nPlayerDominated = 0xA10; // uint64
                constexpr std::ptrdiff_t m_nPlayerDominatingMe = 0xA18; // uint64
                constexpr std::ptrdiff_t m_iCompetitiveRanking = 0xA20; // int32
                constexpr std::ptrdiff_t m_iCompetitiveWins = 0xA24; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankType = 0xA28; // int8
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Win = 0xA2C; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Loss = 0xA30; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Tie = 0xA34; // int32
                constexpr std::ptrdiff_t m_nEndMatchNextMapVote = 0xA38; // int32
                constexpr std::ptrdiff_t m_unActiveQuestId = 0xA3C; // uint16
                constexpr std::ptrdiff_t m_rtActiveMissionPeriod = 0xA40; // uint32
                constexpr std::ptrdiff_t m_nQuestProgressReason = 0xA44; // QuestProgress::Reason
                constexpr std::ptrdiff_t m_unPlayerTvControlFlags = 0xA48; // uint32
                constexpr std::ptrdiff_t m_iDraftIndex = 0xA78; // int32
                constexpr std::ptrdiff_t m_msQueuedModeDisconnectionTimestamp = 0xA7C; // uint32
                constexpr std::ptrdiff_t m_uiAbandonRecordedReason = 0xA80; // uint32
                constexpr std::ptrdiff_t m_eNetworkDisconnectionReason = 0xA84; // uint32
                constexpr std::ptrdiff_t m_bCannotBeKicked = 0xA88; // bool
                constexpr std::ptrdiff_t m_bEverFullyConnected = 0xA89; // bool
                constexpr std::ptrdiff_t m_bAbandonAllowsSurrender = 0xA8A; // bool
                constexpr std::ptrdiff_t m_bAbandonOffersInstantSurrender = 0xA8B; // bool
                constexpr std::ptrdiff_t m_bDisconnection1MinWarningPrinted = 0xA8C; // bool
                constexpr std::ptrdiff_t m_bScoreReported = 0xA8D; // bool
                constexpr std::ptrdiff_t m_nDisconnectionTick = 0xA90; // int32
                constexpr std::ptrdiff_t m_bControllingBot = 0xAA0; // bool
                constexpr std::ptrdiff_t m_bHasControlledBotThisRound = 0xAA1; // bool
                constexpr std::ptrdiff_t m_bHasBeenControlledByPlayerThisRound = 0xAA2; // bool
                constexpr std::ptrdiff_t m_nBotsControlledThisRound = 0xAA4; // int32
                constexpr std::ptrdiff_t m_bCanControlObservedBot = 0xAA8; // bool
                constexpr std::ptrdiff_t m_hPlayerPawn = 0xAAC; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_hObserverPawn = 0xAB0; // CHandle<C_CSObserverPawn>
                constexpr std::ptrdiff_t m_bPawnIsAlive = 0xAB4; // bool
                constexpr std::ptrdiff_t m_iPawnHealth = 0xAB8; // uint32
                constexpr std::ptrdiff_t m_iPawnArmor = 0xABC; // int32
                constexpr std::ptrdiff_t m_bPawnHasDefuser = 0xAC0; // bool
                constexpr std::ptrdiff_t m_bPawnHasHelmet = 0xAC1; // bool
                constexpr std::ptrdiff_t m_nPawnCharacterDefIndex = 0xAC2; // uint16
                constexpr std::ptrdiff_t m_iPawnLifetimeStart = 0xAC4; // int32
                constexpr std::ptrdiff_t m_iPawnLifetimeEnd = 0xAC8; // int32
                constexpr std::ptrdiff_t m_iPawnBotDifficulty = 0xACC; // int32
                constexpr std::ptrdiff_t m_hOriginalControllerOfCurrentPawn = 0xAD0; // CHandle<CCSPlayerController>
                constexpr std::ptrdiff_t m_iScore = 0xAD4; // int32
                constexpr std::ptrdiff_t m_recentKillQueue = 0xAD8; // uint8[8]
                constexpr std::ptrdiff_t m_nFirstKill = 0xAE0; // uint8
                constexpr std::ptrdiff_t m_nKillCount = 0xAE1; // uint8
                constexpr std::ptrdiff_t m_bMvpNoMusic = 0xAE2; // bool
                constexpr std::ptrdiff_t m_eMvpReason = 0xAE4; // int32
                constexpr std::ptrdiff_t m_iMusicKitID = 0xAE8; // int32
                constexpr std::ptrdiff_t m_iMusicKitMVPs = 0xAEC; // int32
                constexpr std::ptrdiff_t m_iMVPs = 0xAF0; // int32
                constexpr std::ptrdiff_t m_bIsPlayerNameDirty = 0xAF4; // bool
                constexpr std::ptrdiff_t m_bFireBulletsSeedSynchronized = 0xAFC; // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_CounterTerroristRushIntroCamera {
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TeamIntroCounterTerroristPosition {
            }
            // Parent: CBaseAnimGraph
            // Field count: 4
            namespace C_CSGO_PreviewModel {
                constexpr std::ptrdiff_t m_defaultAnim = 0x11F0; // CUtlString
                constexpr std::ptrdiff_t m_nDefaultAnimLoopMode = 0x11F8; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_flInitialModelScale = 0x11FC; // float32
                constexpr std::ptrdiff_t m_sInitialWeaponState = 0x1200; // CUtlString
            }
            // Parent: None
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
            // Parent: C_BaseEntity
            // Field count: 4
            namespace CCSObservableElement {
                constexpr std::ptrdiff_t m_iszObservableModelEntity = 0x798; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hObservableModelEntity = 0x7A0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hObservableModelEntity2 = 0x7A4; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nTeamFilter = 0x7A8; // uint32
            }
            // Parent: C_SoundEventEntity
            // Field count: 2
            namespace C_SoundEventAABBEntity {
                constexpr std::ptrdiff_t m_vMins = 0x838; // Vector
                constexpr std::ptrdiff_t m_vMaxs = 0x844; // Vector
            }
            // Parent: None
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
            // Parent: None
            // Field count: 0
            namespace C_TintController {
            }
            // Parent: None
            // Field count: 2
            namespace C_WeaponBaseItem {
                constexpr std::ptrdiff_t m_bSequenceInProgress = 0x2DA5; // bool
                constexpr std::ptrdiff_t m_bRedraw = 0x2DA6; // bool
            }
            // Parent: None
            // Field count: 0
            namespace CWaterSplasher {
            }
            // Parent: None
            // Field count: 0
            namespace C_FuncBrush {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PhysicsRagdollPose_t {
                constexpr std::ptrdiff_t m_RelativeTransforms = 0x8; // C_NetworkUtlVectorBase<CTransform>
                constexpr std::ptrdiff_t m_hOwner = 0x20; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bSetFromDebugHistory = 0x24; // bool
            }
            // Parent: None
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
            // Parent: None
            // Field count: 1
            namespace C_WeaponCZ75a {
                constexpr std::ptrdiff_t m_bMagazineRemoved = 0x2DCC; // bool
            }
            // Parent: None
            // Field count: 7
            namespace C_DynamicLight {
                constexpr std::ptrdiff_t m_Flags = 0x1020; // uint8
                constexpr std::ptrdiff_t m_LightStyle = 0x1021; // uint8
                constexpr std::ptrdiff_t m_Radius = 0x1024; // float32
                constexpr std::ptrdiff_t m_Exponent = 0x1028; // int32
                constexpr std::ptrdiff_t m_InnerAngle = 0x102C; // float32
                constexpr std::ptrdiff_t m_OuterAngle = 0x1030; // float32
                constexpr std::ptrdiff_t m_SpotRadius = 0x1034; // float32
            }
            // Parent: None
            // Field count: 28
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCS2PawnGraphController {
                constexpr std::ptrdiff_t m_bIsDefusing = 0x2D8; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_moveType = 0x2F0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_moveDirectionID = 0x308; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_flMoveSpeedX = 0x320; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flMoveSpeedY = 0x338; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flMoveSpeedHorizontal = 0x350; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flPreviousMoveSpeedHorizontal = 0x368; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flCrouchAmount = 0x380; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_bIsWalking = 0x398; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_flWeaponDropAmount = 0x3B0; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_groundAction = 0x3C8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_groundActionDirectionID = 0x3E0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_flGroundTurnAngleOrVelocity = 0x3F8; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flLadderCycle = 0x410; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flLadderYaw = 0x428; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flLadderYawBackwards = 0x440; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_airAction = 0x458; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_flAirHeightAboveGround = 0x470; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_leftFootTarget = 0x488; // CAnimGraph2ParamOptionalRef<CNmTarget>
                constexpr std::ptrdiff_t m_rightFootTarget = 0x4A0; // CAnimGraph2ParamOptionalRef<CNmTarget>
                constexpr std::ptrdiff_t m_flFlashedAmount = 0x4B8; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flAimPitchAngle = 0x4D0; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flAimYawAngle = 0x4E8; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flinchHead = 0x500; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_flinchHeadRestart = 0x518; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_flinchBody = 0x530; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_flinchBodyRestart = 0x548; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_flinchIsOnFire = 0x560; // CAnimGraph2ParamOptionalRef<bool>
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
            // Parent: C_SoundEventEntity
            // Field count: 1
            namespace C_SoundEventSphereEntity {
                constexpr std::ptrdiff_t m_flRadius = 0x838; // float32
            }
            // Parent: None
            // Field count: 2
            namespace CCSPlayerController_DamageServices {
                constexpr std::ptrdiff_t m_nSendUpdate = 0x40; // int32
                constexpr std::ptrdiff_t m_DamageList = 0x48; // C_UtlVectorEmbeddedNetworkVar<CDamageRecord>
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TeamPreviewModel {
            }
            // Parent: None
            // Field count: 0
            namespace C_TonemapController2Alias_env_tonemap_controller2 {
            }
            // Parent: None
            // Field count: 24
            namespace C_Inferno {
                constexpr std::ptrdiff_t m_nfxFireDamageEffect = 0x1060; // ParticleIndex_t
                constexpr std::ptrdiff_t m_hInfernoPointsSnapshot = 0x1068; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_hInfernoFillerPointsSnapshot = 0x1070; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_hInfernoOutlinePointsSnapshot = 0x1078; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_hInfernoClimbingOutlinePointsSnapshot = 0x1080; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_hInfernoDecalsSnapshot = 0x1088; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_firePositions = 0x1090; // VectorWS[64]
                constexpr std::ptrdiff_t m_fireParentPositions = 0x1390; // VectorWS[64]
                constexpr std::ptrdiff_t m_bFireIsBurning = 0x1690; // bool[64]
                constexpr std::ptrdiff_t m_BurnNormal = 0x16D0; // Vector[64]
                constexpr std::ptrdiff_t m_fireCount = 0x19D0; // int32
                constexpr std::ptrdiff_t m_nInfernoType = 0x19D4; // int32
                constexpr std::ptrdiff_t m_nFireLifetime = 0x19D8; // float32
                constexpr std::ptrdiff_t m_bInPostEffectTime = 0x19DC; // bool
                constexpr std::ptrdiff_t m_lastFireCount = 0x19E0; // int32
                constexpr std::ptrdiff_t m_nFireEffectTickBegin = 0x19E4; // int32
                constexpr std::ptrdiff_t m_drawableCount = 0x85F0; // int32
                constexpr std::ptrdiff_t m_blosCheck = 0x85F4; // bool
                constexpr std::ptrdiff_t m_nlosperiod = 0x85F8; // int32
                constexpr std::ptrdiff_t m_maxFireHalfWidth = 0x85FC; // float32
                constexpr std::ptrdiff_t m_maxFireHeight = 0x8600; // float32
                constexpr std::ptrdiff_t m_minBounds = 0x8604; // VectorWS
                constexpr std::ptrdiff_t m_maxBounds = 0x8610; // VectorWS
                constexpr std::ptrdiff_t m_flLastGrassBurnThink = 0x861C; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CFilterLOS {
            }
            // Parent: C_BaseEntity
            // Field count: 7
            namespace CPointOrient {
                constexpr std::ptrdiff_t m_iszSpawnTargetName = 0x780; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hTarget = 0x788; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bActive = 0x78C; // bool
                constexpr std::ptrdiff_t m_nGoalDirection = 0x790; // PointOrientGoalDirectionType_t
                constexpr std::ptrdiff_t m_nConstraint = 0x794; // PointOrientConstraint_t
                constexpr std::ptrdiff_t m_flMaxTurnRate = 0x798; // float32
                constexpr std::ptrdiff_t m_flLastGameTime = 0x79C; // GameTime_t
            }
            // Parent: C_BaseEntity
            // Field count: 1
            namespace C_GlobalLight {
                constexpr std::ptrdiff_t m_WindClothForceHandle = 0xC40; // uint16
            }
            // Parent: C_BaseEntity
            // Field count: 1
            namespace C_EnvWindClientside {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x780; // C_EnvWindShared
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
            // Parent: C_BaseGrenade
            // Field count: 0
            namespace C_FlashbangProjectile {
            }
            // Parent: C_SoundEventEntity
            // Field count: 5
            namespace C_SoundEventConeEntity {
                constexpr std::ptrdiff_t m_flEmitterAngle = 0x838; // float32
                constexpr std::ptrdiff_t m_flSweetSpotAngle = 0x83C; // float32
                constexpr std::ptrdiff_t m_flAttenMin = 0x840; // float32
                constexpr std::ptrdiff_t m_flAttenMax = 0x844; // float32
                constexpr std::ptrdiff_t m_iszParameterName = 0x848; // CUtlSymbolLarge
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
            // Parent: None
            // Field count: 0
            namespace C_WeaponP90 {
            }
            // Parent: C_BaseEntity
            // Field count: 1
            namespace C_EnvWind {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x780; // C_EnvWindShared
            }
            // Parent: None
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
            // Parent: C_BaseEntity
            // Field count: 3
            namespace C_PointDeathcamBounds {
                constexpr std::ptrdiff_t m_vBoxMins = 0x77C; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x788; // Vector
                constexpr std::ptrdiff_t m_flLerpDistance = 0x794; // float32
            }
            // Parent: None
            // Field count: 5
            namespace CCSPlayerController_ActionTrackingServices {
                constexpr std::ptrdiff_t m_perRoundStats = 0x40; // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
                constexpr std::ptrdiff_t m_matchStats = 0xA8; // CSMatchStats_t
                constexpr std::ptrdiff_t m_iNumRoundKills = 0x120; // int32
                constexpr std::ptrdiff_t m_iNumRoundKillsHeadshots = 0x124; // int32
                constexpr std::ptrdiff_t m_flTotalRoundDamageDealt = 0x128; // float32
            }
            // Parent: CBodyComponentSkeletonInstance
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBodyComponentBaseAnimGraph {
                constexpr std::ptrdiff_t m_animationController = 0x520; // CBaseAnimGraphController
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_PreviewModelAlias_csgo_item_previewmodel {
            }
            // Parent: None
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
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0x1108; // CBuoyancyHelper
                constexpr std::ptrdiff_t m_flFluidDensity = 0x1220; // float32
            }
            // Parent: None
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
            // Parent: None
            // Field count: 0
            namespace C_WeaponTec9 {
            }
            // Parent: C_BreakableProp
            // Field count: 5
            namespace C_PhysPropClientside {
                constexpr std::ptrdiff_t m_flTouchDelta = 0x1358; // GameTime_t
                constexpr std::ptrdiff_t m_fDeathTime = 0x135C; // GameTime_t
                constexpr std::ptrdiff_t m_vecDamagePosition = 0x1360; // VectorWS
                constexpr std::ptrdiff_t m_vecDamageDirection = 0x136C; // Vector
                constexpr std::ptrdiff_t m_nDamageType = 0x1378; // DamageTypes_t
            }
            // Parent: None
            // Field count: 1
            namespace C_BaseDoor {
                constexpr std::ptrdiff_t m_bIsUsable = 0x1020; // bool
            }
            // Parent: None
            // Field count: 5
            namespace CSMatchStats_t {
                constexpr std::ptrdiff_t m_iEnemy5Ks = 0x64; // int32
                constexpr std::ptrdiff_t m_iEnemy4Ks = 0x68; // int32
                constexpr std::ptrdiff_t m_iEnemy3Ks = 0x6C; // int32
                constexpr std::ptrdiff_t m_iEnemyKnifeKills = 0x70; // int32
                constexpr std::ptrdiff_t m_iEnemyTaserKills = 0x74; // int32
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
            namespace CCSGO_RushIntroTerroristPosition {
            }
            // Parent: None
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
                constexpr std::ptrdiff_t m_nBodyGroupChoices = 0x268; // C_NetworkUtlVectorBase<int32>
                constexpr std::ptrdiff_t m_nIdealMotionType = 0x2B2; // int8
                constexpr std::ptrdiff_t m_nForceLOD = 0x2B3; // int8
                constexpr std::ptrdiff_t m_nClothUpdateFlags = 0x2B4; // int8
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
            // Parent: None
            // Field count: 7
            namespace C_CSWeaponBaseGun {
                constexpr std::ptrdiff_t m_zoomLevel = 0x2DA8; // int32
                constexpr std::ptrdiff_t m_iBurstShotsRemaining = 0x2DAC; // int32
                constexpr std::ptrdiff_t m_iSilencerBodygroup = 0x2DB0; // int32
                constexpr std::ptrdiff_t m_silencedModelIndex = 0x2DC0; // int32
                constexpr std::ptrdiff_t m_inPrecache = 0x2DC4; // bool
                constexpr std::ptrdiff_t m_bNeedsBoltAction = 0x2DC5; // bool
                constexpr std::ptrdiff_t m_nRevolverCylinderIdx = 0x2DC8; // int32
            }
            // Parent: None
            // Field count: 1
            namespace C_CSGameRulesProxy {
                constexpr std::ptrdiff_t m_pGameRules = 0x780; // C_CSGameRules*
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
            // Parent: None
            // Field count: 0
            namespace C_WeaponP250 {
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterMassGreater {
                constexpr std::ptrdiff_t m_fFilterMass = 0x7B0; // float32
            }
            // Parent: None
            // Field count: 1
            namespace C_ShatterGlassShardPhysics {
                constexpr std::ptrdiff_t m_ShardDesc = 0x1028; // shard_model_desc_t
            }
            // Parent: None
            // Field count: 13
            namespace C_EntityDissolve {
                constexpr std::ptrdiff_t m_flStartTime = 0x1028; // GameTime_t
                constexpr std::ptrdiff_t m_flFadeInStart = 0x102C; // float32
                constexpr std::ptrdiff_t m_flFadeInLength = 0x1030; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelStart = 0x1034; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelLength = 0x1038; // float32
                constexpr std::ptrdiff_t m_flFadeOutStart = 0x103C; // float32
                constexpr std::ptrdiff_t m_flFadeOutLength = 0x1040; // float32
                constexpr std::ptrdiff_t m_nDissolveType = 0x1044; // EntityDissolveType_t
                constexpr std::ptrdiff_t m_nMagnitude = 0x1048; // uint32
                constexpr std::ptrdiff_t m_vDissolverOrigin = 0x104C; // VectorWS
                constexpr std::ptrdiff_t m_flNextSparkTime = 0x1058; // GameTime_t
                constexpr std::ptrdiff_t m_bCoreExplode = 0x105C; // bool
                constexpr std::ptrdiff_t m_bLinkedToServerEnt = 0x105D; // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_SoundOpvarSetOBBEntity {
            }
            // Parent: None
            // Field count: 8
            namespace CCSCustomPlayerCamera {
                constexpr std::ptrdiff_t m_hPawn = 0x77C; // CHandle<C_CSPlayerPawnBase>
                constexpr std::ptrdiff_t m_nCameraMode = 0x780; // CustomCameraMode_t
                constexpr std::ptrdiff_t m_hFollowEntity = 0x784; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bFollowEyes = 0x788; // bool
                constexpr std::ptrdiff_t m_vecFollowOffset = 0x78C; // Vector
                constexpr std::ptrdiff_t m_vecCameraOffset = 0x798; // Vector
                constexpr std::ptrdiff_t m_bClipCameraOffset = 0x7A4; // bool
                constexpr std::ptrdiff_t m_flCameraOffsetReturnStrength = 0x7A8; // float32
            }
            // Parent: None
            // Field count: 1
            namespace CCSGameModeRules_ArmsRace {
                constexpr std::ptrdiff_t m_WeaponSequence = 0x30; // C_NetworkUtlVectorBase<CUtlString>
            }
            // Parent: C_BaseModelEntity
            // Field count: 8
            namespace C_FuncMonitor {
                constexpr std::ptrdiff_t m_targetCamera = 0x1020; // CUtlString
                constexpr std::ptrdiff_t m_nResolutionEnum = 0x1028; // int32
                constexpr std::ptrdiff_t m_bRenderShadows = 0x102C; // bool
                constexpr std::ptrdiff_t m_bUseUniqueColorTarget = 0x102D; // bool
                constexpr std::ptrdiff_t m_brushModelName = 0x1030; // CUtlString
                constexpr std::ptrdiff_t m_hTargetCamera = 0x1038; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bEnabled = 0x103C; // bool
                constexpr std::ptrdiff_t m_bDraw3DSkybox = 0x103D; // bool
            }
            // Parent: None
            // Field count: 14
            namespace C_ClientRagdoll {
                constexpr std::ptrdiff_t m_bFadeOut = 0x11F0; // bool
                constexpr std::ptrdiff_t m_bImportant = 0x11F1; // bool
                constexpr std::ptrdiff_t m_flEffectTime = 0x11F4; // GameTime_t
                constexpr std::ptrdiff_t m_gibDespawnTime = 0x11F8; // GameTime_t
                constexpr std::ptrdiff_t m_iCurrentFriction = 0x11FC; // int32
                constexpr std::ptrdiff_t m_iMinFriction = 0x1200; // int32
                constexpr std::ptrdiff_t m_iMaxFriction = 0x1204; // int32
                constexpr std::ptrdiff_t m_iFrictionAnimState = 0x1208; // int32
                constexpr std::ptrdiff_t m_bReleaseRagdoll = 0x120C; // bool
                constexpr std::ptrdiff_t m_iEyeAttachment = 0x120D; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_bFadingOut = 0x120E; // bool
                constexpr std::ptrdiff_t m_flScaleEnd = 0x1210; // float32[10]
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0x1238; // GameTime_t[10]
                constexpr std::ptrdiff_t m_flScaleTimeEnd = 0x1260; // GameTime_t[10]
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
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_BaseModelEntity__BodyGroupRequest_t {
                constexpr std::ptrdiff_t m_uRequestID = 0x0; // uint32
                constexpr std::ptrdiff_t m_nGroupName = 0x4; // CUtlStringToken
                constexpr std::ptrdiff_t m_sChoiceName = 0x8; // CGlobalSymbol
                constexpr std::ptrdiff_t m_nGroup = 0x10; // int32
                constexpr std::ptrdiff_t m_uChoice = 0x14; // uint16
                constexpr std::ptrdiff_t m_uRefCount = 0x16; // uint16
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
            // Parent: None
            // Field count: 0
            namespace C_CS2WeaponModuleBase {
            }
            // Parent: C_BaseEntity
            // Field count: 9
            namespace C_CSGO_TeamPreviewCharacterPosition {
                constexpr std::ptrdiff_t m_nVariant = 0x77C; // int32
                constexpr std::ptrdiff_t m_nRandom = 0x780; // int32
                constexpr std::ptrdiff_t m_nOrdinal = 0x784; // int32
                constexpr std::ptrdiff_t m_sWeaponName = 0x788; // CUtlString
                constexpr std::ptrdiff_t m_xuid = 0x790; // uint64
                constexpr std::ptrdiff_t m_agentItem = 0x798; // C_EconItemView
                constexpr std::ptrdiff_t m_glovesItem = 0x1C50; // C_EconItemView
                constexpr std::ptrdiff_t m_weaponItem = 0x3108; // C_EconItemView
                constexpr std::ptrdiff_t m_petItem = 0x45C0; // C_EconItemView
            }
            // Parent: None
            // Field count: 11
            namespace C_SmokeGrenadeProjectile {
                constexpr std::ptrdiff_t m_nSmokeEffectTickBegin = 0x12E8; // int32
                constexpr std::ptrdiff_t m_bDidSmokeEffect = 0x12EC; // bool
                constexpr std::ptrdiff_t m_nRandomSeed = 0x12F0; // int32
                constexpr std::ptrdiff_t m_vSmokeColor = 0x12F4; // Vector
                constexpr std::ptrdiff_t m_vSmokeDetonationPos = 0x1300; // VectorWS
                constexpr std::ptrdiff_t m_VoxelFrameData = 0x1310; // C_NetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_nVoxelFrameDataSize = 0x1328; // int32
                constexpr std::ptrdiff_t m_nVoxelUpdate = 0x132C; // int32
                constexpr std::ptrdiff_t m_nSmokeLightProbeRegen = 0x1330; // uint8
                constexpr std::ptrdiff_t m_bSmokeVolumeDataReceived = 0x1331; // bool
                constexpr std::ptrdiff_t m_bSmokeEffectSpawned = 0x1332; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CScriptComponent {
                constexpr std::ptrdiff_t m_scriptClassName = 0x30; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 1
            namespace CCSPlayer_BuyServices {
                constexpr std::ptrdiff_t m_vecSellbackPurchaseEntries = 0x48; // C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
            }
            // Parent: C_BaseEntity
            // Field count: 2
            namespace C_SkyCameraVolumeTarget {
                constexpr std::ptrdiff_t m_nSkyboxScale = 0x77C; // int16
                constexpr std::ptrdiff_t m_hSkyMaterial = 0x780; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Field count: 0
            namespace C_PortraitWorldCallbackHandler {
            }
            // Parent: C_BreakableProp
            // Field count: 25
            namespace C_DynamicProp {
                constexpr std::ptrdiff_t m_bGraphControllerEnabled = 0x1358; // bool
                constexpr std::ptrdiff_t m_bUseHitboxesForRenderBox = 0x1359; // bool
                constexpr std::ptrdiff_t m_bUseAnimGraph = 0x135A; // bool
                constexpr std::ptrdiff_t m_pOutputAnimBegun = 0x1360; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOutputAnimOver = 0x1378; // CEntityIOOutput
                constexpr std::ptrdiff_t m_pOutputAnimLoopCycleOver = 0x1390; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAnimReachedStart = 0x13A8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnAnimReachedEnd = 0x13C0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_iszIdleAnim = 0x13D8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nIdleAnimLoopMode = 0x13E0; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_bRandomizeCycle = 0x13E4; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0x13E5; // bool
                constexpr std::ptrdiff_t m_bFiredStartEndOutput = 0x13E6; // bool
                constexpr std::ptrdiff_t m_bForceNpcExclude = 0x13E7; // bool
                constexpr std::ptrdiff_t m_bCreateMovableSurfaceGraph = 0x13E8; // bool
                constexpr std::ptrdiff_t m_bCreateNonSolid = 0x13E9; // bool
                constexpr std::ptrdiff_t m_bIsOverrideProp = 0x13EA; // bool
                constexpr std::ptrdiff_t m_iInitialGlowState = 0x13EC; // int32
                constexpr std::ptrdiff_t m_nGlowRange = 0x13F0; // int32
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0x13F4; // int32
                constexpr std::ptrdiff_t m_glowColor = 0x13F8; // Color
                constexpr std::ptrdiff_t m_nGlowTeam = 0x13FC; // int32
                constexpr std::ptrdiff_t m_iCachedFrameCount = 0x1400; // int32
                constexpr std::ptrdiff_t m_vecCachedRenderMins = 0x1404; // Vector
                constexpr std::ptrdiff_t m_vecCachedRenderMaxs = 0x1410; // Vector
            }
            // Parent: None
            // Field count: 10
            namespace C_CSTeam {
                constexpr std::ptrdiff_t m_szTeamMatchStat = 0x835; // char[512]
                constexpr std::ptrdiff_t m_numMapVictories = 0xA38; // int32
                constexpr std::ptrdiff_t m_bSurrendered = 0xA3C; // bool
                constexpr std::ptrdiff_t m_scoreFirstHalf = 0xA40; // int32
                constexpr std::ptrdiff_t m_scoreSecondHalf = 0xA44; // int32
                constexpr std::ptrdiff_t m_scoreOvertime = 0xA48; // int32
                constexpr std::ptrdiff_t m_szClanTeamname = 0xA4C; // char[129]
                constexpr std::ptrdiff_t m_iClanID = 0xAD0; // uint32
                constexpr std::ptrdiff_t m_szTeamFlagImage = 0xAD4; // char[8]
                constexpr std::ptrdiff_t m_szTeamLogoImage = 0xADC; // char[8]
            }
            // Parent: None
            // Field count: 0
            namespace C_CS2HudModelWeapon {
            }
            // Parent: C_BaseModelEntity
            // Field count: 8
            namespace C_TextureBasedAnimatable {
                constexpr std::ptrdiff_t m_bLoop = 0x1020; // bool
                constexpr std::ptrdiff_t m_flFPS = 0x1024; // float32
                constexpr std::ptrdiff_t m_hPositionKeys = 0x1028; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hRotationKeys = 0x1030; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_vAnimationBoundsMin = 0x1038; // Vector
                constexpr std::ptrdiff_t m_vAnimationBoundsMax = 0x1044; // Vector
                constexpr std::ptrdiff_t m_flStartTime = 0x1050; // float32
                constexpr std::ptrdiff_t m_flStartFrame = 0x1054; // float32
            }
            // Parent: None
            // Field count: 0
            namespace C_LightEnvironmentEntity {
            }
            // Parent: C_BaseTrigger
            // Field count: 14
            namespace C_TriggerPhysics {
                constexpr std::ptrdiff_t m_gravityScale = 0x1108; // float32
                constexpr std::ptrdiff_t m_linearLimit = 0x110C; // float32
                constexpr std::ptrdiff_t m_linearDamping = 0x1110; // float32
                constexpr std::ptrdiff_t m_angularLimit = 0x1114; // float32
                constexpr std::ptrdiff_t m_angularDamping = 0x1118; // float32
                constexpr std::ptrdiff_t m_linearForce = 0x111C; // float32
                constexpr std::ptrdiff_t m_flFrequency = 0x1120; // float32
                constexpr std::ptrdiff_t m_flDampingRatio = 0x1124; // float32
                constexpr std::ptrdiff_t m_vecLinearForcePointAt = 0x1128; // Vector
                constexpr std::ptrdiff_t m_bCollapseToForcePoint = 0x1134; // bool
                constexpr std::ptrdiff_t m_vecLinearForcePointAtWorld = 0x1138; // VectorWS
                constexpr std::ptrdiff_t m_vecLinearForceDirection = 0x1144; // Vector
                constexpr std::ptrdiff_t m_bForceDirectionIsInLocalSpace = 0x1150; // bool
                constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0x1151; // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_PropDoorRotating {
            }
            // Parent: None
            // Field count: 2
            namespace C_HandleTest {
                constexpr std::ptrdiff_t m_Handle = 0x77C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bSendHandle = 0x780; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 8
            namespace CInfoWorldLayer {
                constexpr std::ptrdiff_t m_pOutputOnEntitiesSpawned = 0x780; // CEntityIOOutput
                constexpr std::ptrdiff_t m_worldName = 0x798; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_layerName = 0x7A0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bWorldLayerVisible = 0x7A8; // bool
                constexpr std::ptrdiff_t m_bEntitiesSpawned = 0x7A9; // bool
                constexpr std::ptrdiff_t m_bCreateAsChildSpawnGroup = 0x7AA; // bool
                constexpr std::ptrdiff_t m_hLayerSpawnGroup = 0x7AC; // uint32
                constexpr std::ptrdiff_t m_bWorldLayerActuallyVisible = 0x7B0; // bool
            }
            // Parent: None
            // Field count: 0
            namespace CBodyComponentBaseModelEntity {
            }
            // Parent: None
            // Field count: 1
            namespace C_Multimeter {
                constexpr std::ptrdiff_t m_hTargetC4 = 0x11F0; // CHandle<C_PlantedC4>
            }
            // Parent: C_BaseModelEntity
            // Field count: 12
            namespace C_BaseTrigger {
                constexpr std::ptrdiff_t m_OnStartTouch = 0x1020; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStartTouchAll = 0x1038; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEndTouch = 0x1050; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEndTouchAll = 0x1068; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTouching = 0x1080; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTouchingEachEntity = 0x1098; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnNotTouching = 0x10B0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTouchingChanged = 0x10C8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_hTouchingEntities = 0x10E0; // CUtlVector<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_iFilterName = 0x10F8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFilter = 0x1100; // CHandle<CBaseFilter>
                constexpr std::ptrdiff_t m_bDisabled = 0x1104; // bool
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace FilterDamageType {
                constexpr std::ptrdiff_t m_iDamageType = 0x7B0; // int32
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
                constexpr std::ptrdiff_t m_flRadius = 0x7B0; // float32
            }
            // Parent: None
            // Field count: 20
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCS2WeaponGraphController {
                constexpr std::ptrdiff_t m_action = 0xC0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_bActionReset = 0xD8; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_flWeaponActionSpeedScale = 0xF0; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_weaponCategory = 0x108; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_weaponType = 0x120; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_weaponExtraInfo = 0x138; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_flWeaponAmmo = 0x150; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flWeaponAmmoMax = 0x168; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flWeaponAmmoReserve = 0x180; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_bWeaponIsSilenced = 0x198; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_flWeaponIronsightAmount = 0x1B0; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_bIsUsingLegacyModel = 0x1C8; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_idleVariation = 0x1E0; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_deployVariation = 0x1F8; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_attackType = 0x210; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_attackThrowStrength = 0x228; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_flAttackVariation = 0x240; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_inspectVariation = 0x258; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_inspectExtraInfo = 0x270; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_reloadStage = 0x288; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
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
                constexpr std::ptrdiff_t m_szSnapshotFileName = 0x1020; // char[512]
                constexpr std::ptrdiff_t m_bActive = 0x1220; // bool
                constexpr std::ptrdiff_t m_bFrozen = 0x1221; // bool
                constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0x1224; // float32
                constexpr std::ptrdiff_t m_nStopType = 0x1228; // int32
                constexpr std::ptrdiff_t m_bAnimateDuringGameplayPause = 0x122C; // bool
                constexpr std::ptrdiff_t m_iEffectIndex = 0x1230; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_flStartTime = 0x1238; // GameTime_t
                constexpr std::ptrdiff_t m_flPreSimTime = 0x123C; // float32
                constexpr std::ptrdiff_t m_vServerControlPoints = 0x1240; // Vector[4]
                constexpr std::ptrdiff_t m_iServerControlPointAssignments = 0x1270; // uint8[4]
                constexpr std::ptrdiff_t m_hControlPointEnts = 0x1274; // CHandle<C_BaseEntity>[64]
                constexpr std::ptrdiff_t m_bDataStringLocalized = 0x1374; // bool
                constexpr std::ptrdiff_t m_strDataString = 0x1378; // CUtlString
                constexpr std::ptrdiff_t m_bNoSave = 0x1380; // bool
                constexpr std::ptrdiff_t m_bNoFreeze = 0x1381; // bool
                constexpr std::ptrdiff_t m_bNoRamp = 0x1382; // bool
                constexpr std::ptrdiff_t m_bStartActive = 0x1383; // bool
                constexpr std::ptrdiff_t m_iszEffectName = 0x1388; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszControlPointNames = 0x1390; // CUtlSymbolLarge[64]
                constexpr std::ptrdiff_t m_nDataCP = 0x1590; // int32
                constexpr std::ptrdiff_t m_vecDataCPValue = 0x1594; // Vector
                constexpr std::ptrdiff_t m_nTintCP = 0x15A0; // int32
                constexpr std::ptrdiff_t m_clrTint = 0x15A4; // Color
                constexpr std::ptrdiff_t m_bOldActive = 0x15C8; // bool
                constexpr std::ptrdiff_t m_bOldFrozen = 0x15C9; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleShuffled {
                constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponSCAR20 {
            }
            // Parent: None
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
            // Field count: 84
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CLightComponent {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x38; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_Color = 0x78; // Color
                constexpr std::ptrdiff_t m_SecondaryColor = 0x7C; // Color
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
                constexpr std::ptrdiff_t m_bAmbientOcclusionProxyOverride = 0x1AC; // bool
                constexpr std::ptrdiff_t m_hAmbientOcclusionProxyPosition0 = 0x1B0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hAmbientOcclusionProxyPosition1 = 0x1B4; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hAmbientOcclusionProxyPosition2 = 0x1B8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hAmbientOcclusionProxyPosition3 = 0x1BC; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flAmbientOcclusionProxyStrength0 = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flAmbientOcclusionProxyStrength1 = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flAmbientOcclusionProxyStrength2 = 0x1C8; // float32
                constexpr std::ptrdiff_t m_flAmbientOcclusionProxyStrength3 = 0x1CC; // float32
                constexpr std::ptrdiff_t m_flAmbientOcclusionProxyAmbientStrength = 0x1D0; // float32
                constexpr std::ptrdiff_t m_flAmbientOcclusionProxyConeAngle0 = 0x1D4; // float32
                constexpr std::ptrdiff_t m_flAmbientOcclusionProxyConeAngle1 = 0x1D8; // float32
                constexpr std::ptrdiff_t m_flAmbientOcclusionProxyConeAngle2 = 0x1DC; // float32
                constexpr std::ptrdiff_t m_flAmbientOcclusionProxyConeAngle3 = 0x1E0; // float32
            }
            // Parent: None
            // Field count: 0
            namespace C_DecoyGrenade {
            }
            // Parent: None
            // Field count: 0
            namespace C_WaterBullet {
            }
            // Parent: None
            // Field count: 5
            namespace CCSPlayer_ActionTrackingServices {
                constexpr std::ptrdiff_t m_hLastWeaponBeforeC4AutoSwitch = 0x48; // CHandle<C_BasePlayerWeapon>
                constexpr std::ptrdiff_t m_bIsRescuing = 0x4C; // bool
                constexpr std::ptrdiff_t m_weaponPurchasesThisMatch = 0x50; // WeaponPurchaseTracker_t
                constexpr std::ptrdiff_t m_weaponPurchasesThisRound = 0xC0; // WeaponPurchaseTracker_t
                constexpr std::ptrdiff_t m_weaponCarryOverIntoThisRound = 0x130; // WeaponPurchaseTracker_t
            }
            // Parent: None
            // Field count: 0
            namespace CBrokenGlassTrap {
            }
            // Parent: C_BaseEntity
            // Field count: 18
            namespace C_EnvCubemap {
                constexpr std::ptrdiff_t m_Entity_hCubemapTexture = 0x800; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_bCustomCubemapTexture = 0x808; // bool
                constexpr std::ptrdiff_t m_Entity_flInfluenceRadius = 0x80C; // float32
                constexpr std::ptrdiff_t m_Entity_vBoxProjectMins = 0x810; // Vector
                constexpr std::ptrdiff_t m_Entity_vBoxProjectMaxs = 0x81C; // Vector
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x828; // bool
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x82C; // int32
                constexpr std::ptrdiff_t m_Entity_nEnvCubeMapArrayIndex = 0x830; // int32
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x834; // int32
                constexpr std::ptrdiff_t m_Entity_flEdgeFadeDist = 0x838; // float32
                constexpr std::ptrdiff_t m_Entity_vEdgeFadeDists = 0x83C; // Vector
                constexpr std::ptrdiff_t m_Entity_flDiffuseScale = 0x848; // float32
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x84C; // bool
                constexpr std::ptrdiff_t m_Entity_bDefaultEnvMap = 0x84D; // bool
                constexpr std::ptrdiff_t m_Entity_bDefaultSpecEnvMap = 0x84E; // bool
                constexpr std::ptrdiff_t m_Entity_bIndoorCubeMap = 0x84F; // bool
                constexpr std::ptrdiff_t m_Entity_bCopyDiffuseFromDefaultCubemap = 0x850; // bool
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x860; // bool
            }
            // Parent: None
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
                constexpr std::ptrdiff_t m_Args = 0xA0; // CUtlLeanVector<CPulseRuntimeMethodArg>
                constexpr std::ptrdiff_t m_ReturnValues = 0xB0; // CUtlLeanVector<CPulseRuntimeMethodArg>
            }
            // Parent: None
            // Field count: 6
            namespace C_BaseCombatCharacter {
                constexpr std::ptrdiff_t m_hMyWearables = 0x11F0; // C_NetworkUtlVectorBase<CHandle<C_EconWearable>>
                constexpr std::ptrdiff_t m_leftFootAttachment = 0x1208; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_rightFootAttachment = 0x1209; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_nWaterWakeMode = 0x120C; // C_BaseCombatCharacter::WaterWakeMode_t
                constexpr std::ptrdiff_t m_flWaterWorldZ = 0x1210; // float32
                constexpr std::ptrdiff_t m_flWaterNextTraceTime = 0x1214; // float32
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
                constexpr std::ptrdiff_t m_hActivator = 0x1050; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bStartEnabled = 0x1054; // bool
            }
            // Parent: C_SoundEventEntity
            // Field count: 0
            namespace C_SoundEventMultiPointEntity {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseValue {
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponHKP2000 {
            }
            // Parent: C_BaseTrigger
            // Field count: 2
            namespace C_FootstepControl {
                constexpr std::ptrdiff_t m_source = 0x1108; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_destination = 0x1110; // CUtlSymbolLarge
            }
            // Parent: C_BaseEntity
            // Field count: 8
            namespace CCitadelSoundOpvarSetOBB {
                constexpr std::ptrdiff_t m_iszStackName = 0x798; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperatorName = 0x7A0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvarName = 0x7A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vDistanceInnerMins = 0x7B0; // Vector
                constexpr std::ptrdiff_t m_vDistanceInnerMaxs = 0x7BC; // Vector
                constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x7C8; // Vector
                constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x7D4; // Vector
                constexpr std::ptrdiff_t m_nAABBDirection = 0x7E0; // int32
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_EndOfMatchLineupStart {
            }
            // Parent: None
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
                constexpr std::ptrdiff_t m_WhenTrue = 0x168; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_WhenFalse = 0x1B0; // CPulse_OutflowConnection
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
            // Parent: None
            // Field count: 0
            namespace C_DynamicPropAlias_dynamic_prop {
            }
            // Parent: None
            // Field count: 0
            namespace CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
            }
            // Parent: C_BarnLight
            // Field count: 3
            namespace C_OmniLight {
                constexpr std::ptrdiff_t m_flInnerAngle = 0x1330; // float32
                constexpr std::ptrdiff_t m_flOuterAngle = 0x1334; // float32
                constexpr std::ptrdiff_t m_bShowLight = 0x1338; // bool
            }
            // Parent: None
            // Field count: 13
            namespace C_SceneEntity {
                constexpr std::ptrdiff_t m_bIsPlayingBack = 0x788; // bool
                constexpr std::ptrdiff_t m_bPaused = 0x789; // bool
                constexpr std::ptrdiff_t m_bMultiplayer = 0x78A; // bool
                constexpr std::ptrdiff_t m_bAutogenerated = 0x78B; // bool
                constexpr std::ptrdiff_t m_bAllRequirementsComplete = 0x78C; // bool
                constexpr std::ptrdiff_t m_flForceClientTime = 0x790; // float32
                constexpr std::ptrdiff_t m_nSceneStringIndex = 0x794; // uint16
                constexpr std::ptrdiff_t m_bClientOnly = 0x796; // bool
                constexpr std::ptrdiff_t m_hOwner = 0x798; // CHandle<C_BaseModelEntity>
                constexpr std::ptrdiff_t m_hActorList = 0x7A0; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_bWasPlaying = 0x7B8; // bool
                constexpr std::ptrdiff_t m_QueuedEvents = 0x7C8; // CUtlVector<C_SceneEntity::QueuedEvents_t>
                constexpr std::ptrdiff_t m_flCurrentTime = 0x7E0; // float32
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
            // Field count: 1
            namespace C_NametagModule {
                constexpr std::ptrdiff_t m_strNametagString = 0x11F8; // CUtlString
            }
            // Parent: None
            // Field count: 20
            namespace C_EconEntity {
                constexpr std::ptrdiff_t m_flFlexDelayTime = 0x1200; // float32
                constexpr std::ptrdiff_t m_flFlexDelayedWeight = 0x1208; // float32*
                constexpr std::ptrdiff_t m_bAttributesInitialized = 0x1210; // bool
                constexpr std::ptrdiff_t m_AttributeManager = 0x1218; // C_AttributeContainer
                constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0x2730; // uint32
                constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x2734; // uint32
                constexpr std::ptrdiff_t m_nFallbackPaintKit = 0x2738; // int32
                constexpr std::ptrdiff_t m_nFallbackSeed = 0x273C; // int32
                constexpr std::ptrdiff_t m_flFallbackWear = 0x2740; // float32
                constexpr std::ptrdiff_t m_nFallbackStatTrak = 0x2744; // int32
                constexpr std::ptrdiff_t m_bClientside = 0x2748; // bool
                constexpr std::ptrdiff_t m_bParticleSystemsCreated = 0x2749; // bool
                constexpr std::ptrdiff_t m_vecAttachedParticles = 0x2750; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_hViewmodelAttachment = 0x2768; // CHandle<CBaseAnimGraph>
                constexpr std::ptrdiff_t m_iOldTeam = 0x276C; // int32
                constexpr std::ptrdiff_t m_bAttachmentDirty = 0x2770; // bool
                constexpr std::ptrdiff_t m_nUnloadedModelIndex = 0x2774; // int32
                constexpr std::ptrdiff_t m_iNumOwnerValidationRetries = 0x2778; // int32
                constexpr std::ptrdiff_t m_hOldProvidee = 0x2788; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_vecAttachedModels = 0x2790; // CUtlVector<C_EconEntity::AttachedModelData_t>
            }
            // Parent: None
            // Field count: 0
            namespace CPlayer_UseServices {
            }
            // Parent: C_BaseEntity
            // Field count: 25
            namespace C_PointValueRemapper {
                constexpr std::ptrdiff_t m_bDisabled = 0x77C; // bool
                constexpr std::ptrdiff_t m_bDisabledOld = 0x77D; // bool
                constexpr std::ptrdiff_t m_bUpdateOnClient = 0x77E; // bool
                constexpr std::ptrdiff_t m_nInputType = 0x780; // ValueRemapperInputType_t
                constexpr std::ptrdiff_t m_hRemapLineStart = 0x784; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hRemapLineEnd = 0x788; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flMaximumChangePerSecond = 0x78C; // float32
                constexpr std::ptrdiff_t m_flDisengageDistance = 0x790; // float32
                constexpr std::ptrdiff_t m_flEngageDistance = 0x794; // float32
                constexpr std::ptrdiff_t m_bRequiresUseKey = 0x798; // bool
                constexpr std::ptrdiff_t m_nOutputType = 0x79C; // ValueRemapperOutputType_t
                constexpr std::ptrdiff_t m_hOutputEntities = 0x7A0; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_nHapticsType = 0x7B8; // ValueRemapperHapticsType_t
                constexpr std::ptrdiff_t m_nMomentumType = 0x7BC; // ValueRemapperMomentumType_t
                constexpr std::ptrdiff_t m_flMomentumModifier = 0x7C0; // float32
                constexpr std::ptrdiff_t m_flSnapValue = 0x7C4; // float32
                constexpr std::ptrdiff_t m_flCurrentMomentum = 0x7C8; // float32
                constexpr std::ptrdiff_t m_nRatchetType = 0x7CC; // ValueRemapperRatchetType_t
                constexpr std::ptrdiff_t m_flRatchetOffset = 0x7D0; // float32
                constexpr std::ptrdiff_t m_flInputOffset = 0x7D4; // float32
                constexpr std::ptrdiff_t m_bEngaged = 0x7D8; // bool
                constexpr std::ptrdiff_t m_bFirstUpdate = 0x7D9; // bool
                constexpr std::ptrdiff_t m_flPreviousValue = 0x7DC; // float32
                constexpr std::ptrdiff_t m_flPreviousUpdateTickTime = 0x7E0; // GameTime_t
                constexpr std::ptrdiff_t m_vecPreviousTestPoint = 0x7E4; // VectorWS
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
            // Parent: None
            // Field count: 0
            namespace C_WeaponMP7 {
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
            // Parent: None
            // Field count: 0
            namespace C_CS2HudModelBase {
            }
            // Parent: None
            // Field count: 98
            namespace C_CSGameRules {
                constexpr std::ptrdiff_t m_bFreezePeriod = 0x39; // bool
                constexpr std::ptrdiff_t m_bWarmupPeriod = 0x3A; // bool
                constexpr std::ptrdiff_t m_fWarmupPeriodEnd = 0x3C; // GameTime_t
                constexpr std::ptrdiff_t m_fWarmupPeriodStart = 0x40; // GameTime_t
                constexpr std::ptrdiff_t m_bTerroristTimeOutActive = 0x44; // bool
                constexpr std::ptrdiff_t m_bCTTimeOutActive = 0x45; // bool
                constexpr std::ptrdiff_t m_flTerroristTimeOutRemaining = 0x48; // float32
                constexpr std::ptrdiff_t m_flCTTimeOutRemaining = 0x4C; // float32
                constexpr std::ptrdiff_t m_nTerroristTimeOuts = 0x50; // int32
                constexpr std::ptrdiff_t m_nCTTimeOuts = 0x54; // int32
                constexpr std::ptrdiff_t m_bTechnicalTimeOut = 0x58; // bool
                constexpr std::ptrdiff_t m_bMatchWaitingForResume = 0x59; // bool
                constexpr std::ptrdiff_t m_iFreezeTime = 0x5C; // int32
                constexpr std::ptrdiff_t m_iRoundTime = 0x60; // int32
                constexpr std::ptrdiff_t m_fMatchStartTime = 0x64; // float32
                constexpr std::ptrdiff_t m_fRoundStartTime = 0x68; // GameTime_t
                constexpr std::ptrdiff_t m_flRestartRoundTime = 0x6C; // GameTime_t
                constexpr std::ptrdiff_t m_bGameRestart = 0x70; // bool
                constexpr std::ptrdiff_t m_flGameStartTime = 0x74; // float32
                constexpr std::ptrdiff_t m_timeUntilNextPhaseStarts = 0x78; // float32
                constexpr std::ptrdiff_t m_gamePhase = 0x7C; // int32
                constexpr std::ptrdiff_t m_totalRoundsPlayed = 0x80; // int32
                constexpr std::ptrdiff_t m_nRoundsPlayedThisPhase = 0x84; // int32
                constexpr std::ptrdiff_t m_nOvertimePlaying = 0x88; // int32
                constexpr std::ptrdiff_t m_iHostagesRemaining = 0x8C; // int32
                constexpr std::ptrdiff_t m_bAnyHostageReached = 0x90; // bool
                constexpr std::ptrdiff_t m_bMapHasBombTarget = 0x91; // bool
                constexpr std::ptrdiff_t m_bMapHasRescueZone = 0x92; // bool
                constexpr std::ptrdiff_t m_bMapHasBuyZone = 0x93; // bool
                constexpr std::ptrdiff_t m_bIsQueuedMatchmaking = 0x94; // bool
                constexpr std::ptrdiff_t m_nQueuedMatchmakingMode = 0x98; // int32
                constexpr std::ptrdiff_t m_bIsValveDS = 0x9C; // bool
                constexpr std::ptrdiff_t m_bLogoMap = 0x9D; // bool
                constexpr std::ptrdiff_t m_bPlayAllStepSoundsOnServer = 0x9E; // bool
                constexpr std::ptrdiff_t m_iSpectatorSlotCount = 0xA0; // int32
                constexpr std::ptrdiff_t m_MatchDevice = 0xA4; // int32
                constexpr std::ptrdiff_t m_bHasMatchStarted = 0xA8; // bool
                constexpr std::ptrdiff_t m_nNextMapInMapgroup = 0xAC; // int32
                constexpr std::ptrdiff_t m_szTournamentEventName = 0xB0; // char[512]
                constexpr std::ptrdiff_t m_szTournamentEventStage = 0x2B0; // char[512]
                constexpr std::ptrdiff_t m_szMatchStatTxt = 0x4B0; // char[512]
                constexpr std::ptrdiff_t m_szTournamentPredictionsTxt = 0x6B0; // char[512]
                constexpr std::ptrdiff_t m_nTournamentPredictionsPct = 0x8B0; // int32
                constexpr std::ptrdiff_t m_flCMMItemDropRevealStartTime = 0x8B4; // GameTime_t
                constexpr std::ptrdiff_t m_flCMMItemDropRevealEndTime = 0x8B8; // GameTime_t
                constexpr std::ptrdiff_t m_bIsDroppingItems = 0x8BC; // bool
                constexpr std::ptrdiff_t m_bIsQuestEligible = 0x8BD; // bool
                constexpr std::ptrdiff_t m_bIsHltvActive = 0x8BE; // bool
                constexpr std::ptrdiff_t m_bBombPlanted = 0x8BF; // bool
                constexpr std::ptrdiff_t m_arrProhibitedItemIndices = 0x8C0; // uint16[100]
                constexpr std::ptrdiff_t m_arrTournamentActiveCasterAccounts = 0x988; // uint32[4]
                constexpr std::ptrdiff_t m_numBestOfMaps = 0x998; // int32
                constexpr std::ptrdiff_t m_nHalloweenMaskListSeed = 0x99C; // int32
                constexpr std::ptrdiff_t m_bBombDropped = 0x9A0; // bool
                constexpr std::ptrdiff_t m_iRoundWinStatus = 0x9A4; // int32
                constexpr std::ptrdiff_t m_eRoundWinReason = 0x9A8; // int32
                constexpr std::ptrdiff_t m_bTCantBuy = 0x9AC; // bool
                constexpr std::ptrdiff_t m_bCTCantBuy = 0x9AD; // bool
                constexpr std::ptrdiff_t m_iMatchStats_RoundResults = 0x9B0; // int32[30]
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_CT = 0xA28; // int32[30]
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_T = 0xAA0; // int32[30]
                constexpr std::ptrdiff_t m_TeamRespawnWaveTimes = 0xB18; // float32[32]
                constexpr std::ptrdiff_t m_flNextRespawnWave = 0xB98; // GameTime_t[32]
                constexpr std::ptrdiff_t m_vMinimapMins = 0xC18; // VectorWS
                constexpr std::ptrdiff_t m_vMinimapMaxs = 0xC24; // VectorWS
                constexpr std::ptrdiff_t m_MinimapVerticalSectionHeights = 0xC30; // float32[8]
                constexpr std::ptrdiff_t m_ullLocalMatchID = 0xC50; // uint64
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteTypes = 0xC58; // int32[10]
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteOptions = 0xC80; // int32[10]
                constexpr std::ptrdiff_t m_nEndMatchMapVoteWinner = 0xCA8; // int32
                constexpr std::ptrdiff_t m_iNumConsecutiveCTLoses = 0xCAC; // int32
                constexpr std::ptrdiff_t m_iNumConsecutiveTerroristLoses = 0xCB0; // int32
                constexpr std::ptrdiff_t m_nMatchAbortedEarlyReason = 0xD70; // int32
                constexpr std::ptrdiff_t m_bHasTriggeredRoundStartMusic = 0xD74; // bool
                constexpr std::ptrdiff_t m_bSwitchingTeamsAtRoundReset = 0xD75; // bool
                constexpr std::ptrdiff_t m_pGameModeRules = 0xD90; // CCSGameModeRules*
                constexpr std::ptrdiff_t m_RetakeRules = 0xD98; // C_RetakeGameRules
                constexpr std::ptrdiff_t m_nMatchEndCount = 0xEF0; // uint8
                constexpr std::ptrdiff_t m_nTTeamIntroVariant = 0xEF4; // int32
                constexpr std::ptrdiff_t m_nCTTeamIntroVariant = 0xEF8; // int32
                constexpr std::ptrdiff_t m_bTeamIntroPeriod = 0xEFC; // bool
                constexpr std::ptrdiff_t m_iRoundEndWinnerTeam = 0xF00; // int32
                constexpr std::ptrdiff_t m_eRoundEndReason = 0xF04; // int32
                constexpr std::ptrdiff_t m_bRoundEndShowTimerDefend = 0xF08; // bool
                constexpr std::ptrdiff_t m_iRoundEndTimerTime = 0xF0C; // int32
                constexpr std::ptrdiff_t m_sRoundEndFunFactToken = 0xF10; // CUtlString
                constexpr std::ptrdiff_t m_iRoundEndFunFactPlayerSlot = 0xF18; // CPlayerSlot
                constexpr std::ptrdiff_t m_iRoundEndFunFactData1 = 0xF1C; // int32
                constexpr std::ptrdiff_t m_iRoundEndFunFactData2 = 0xF20; // int32
                constexpr std::ptrdiff_t m_iRoundEndFunFactData3 = 0xF24; // int32
                constexpr std::ptrdiff_t m_sRoundEndMessage = 0xF28; // CUtlString
                constexpr std::ptrdiff_t m_iRoundEndPlayerCount = 0xF30; // int32
                constexpr std::ptrdiff_t m_bRoundEndNoMusic = 0xF34; // bool
                constexpr std::ptrdiff_t m_iRoundEndLegacy = 0xF38; // int32
                constexpr std::ptrdiff_t m_nRoundEndCount = 0xF3C; // uint8
                constexpr std::ptrdiff_t m_iRoundStartRoundNumber = 0xF40; // int32
                constexpr std::ptrdiff_t m_nRoundStartCount = 0xF44; // uint8
                constexpr std::ptrdiff_t m_flLastPerfSampleTime = 0x4F50; // float64
            }
            // Parent: C_BaseModelEntity
            // Field count: 2
            namespace CGrenadeTracer {
                constexpr std::ptrdiff_t m_flTracerDuration = 0x1038; // float32
                constexpr std::ptrdiff_t m_nType = 0x103C; // GrenadeType_t
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
            // Parent: None
            // Field count: 16
            namespace C_BaseCSGrenadeProjectile {
                constexpr std::ptrdiff_t m_vInitialPosition = 0x1238; // VectorWS
                constexpr std::ptrdiff_t m_vInitialVelocity = 0x1244; // Vector
                constexpr std::ptrdiff_t m_nBounces = 0x1250; // int32
                constexpr std::ptrdiff_t m_nExplodeEffectIndex = 0x1258; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_nExplodeEffectTickBegin = 0x1260; // int32
                constexpr std::ptrdiff_t m_vecExplodeEffectOrigin = 0x1264; // VectorWS
                constexpr std::ptrdiff_t m_flSpawnTime = 0x1270; // GameTime_t
                constexpr std::ptrdiff_t vecLastTrailLinePos = 0x1274; // Vector
                constexpr std::ptrdiff_t flNextTrailLineTime = 0x1280; // GameTime_t
                constexpr std::ptrdiff_t m_bExplodeEffectBegan = 0x1284; // bool
                constexpr std::ptrdiff_t m_bCanCreateGrenadeTrail = 0x1285; // bool
                constexpr std::ptrdiff_t m_nSnapshotTrajectoryEffectIndex = 0x1288; // ParticleIndex_t
                constexpr std::ptrdiff_t m_hSnapshotTrajectoryParticleSnapshot = 0x1290; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_arrTrajectoryTrailPoints = 0x1298; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_arrTrajectoryTrailPointCreationTimes = 0x12B0; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_flTrajectoryTrailEffectCreationTime = 0x12C8; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CCSGO_RushIntroCounterTerroristPosition {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_ReturnValues {
            }
            // Parent: C_BaseEntity
            // Field count: 16
            namespace C_GradientFog {
                constexpr std::ptrdiff_t m_hGradientFogTexture = 0x780; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_flFogStartDistance = 0x788; // float32
                constexpr std::ptrdiff_t m_flFogEndDistance = 0x78C; // float32
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x790; // bool
                constexpr std::ptrdiff_t m_flFogStartHeight = 0x794; // float32
                constexpr std::ptrdiff_t m_flFogEndHeight = 0x798; // float32
                constexpr std::ptrdiff_t m_flFarZ = 0x79C; // float32
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x7A0; // float32
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x7A4; // float32
                constexpr std::ptrdiff_t m_flFogVerticalExponent = 0x7A8; // float32
                constexpr std::ptrdiff_t m_fogColor = 0x7AC; // Color
                constexpr std::ptrdiff_t m_flFogStrength = 0x7B0; // float32
                constexpr std::ptrdiff_t m_flFadeTime = 0x7B4; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x7B8; // bool
                constexpr std::ptrdiff_t m_bIsEnabled = 0x7B9; // bool
                constexpr std::ptrdiff_t m_bGradientFogNeedsTextures = 0x7BA; // bool
            }
            // Parent: None
            // Field count: 4
            namespace CCSPlayerController_InGameMoneyServices {
                constexpr std::ptrdiff_t m_iAccount = 0x40; // int32
                constexpr std::ptrdiff_t m_iStartAccount = 0x44; // int32
                constexpr std::ptrdiff_t m_iTotalCashSpent = 0x48; // int32
                constexpr std::ptrdiff_t m_iCashSpentThisRound = 0x4C; // int32
            }
            // Parent: None
            // Field count: 6
            namespace CCSPlayer_AimPunchServices {
                constexpr std::ptrdiff_t m_predictableBaseTick = 0x48; // GameTick_t
                constexpr std::ptrdiff_t m_predictableBaseTickInterpAmount = 0x4C; // float32
                constexpr std::ptrdiff_t m_predictableBaseAngle = 0x50; // QAngle
                constexpr std::ptrdiff_t m_predictableBaseAngleVel = 0x5C; // QAngle
                constexpr std::ptrdiff_t m_unpredictableBaseTick = 0xA0; // GameTick_t
                constexpr std::ptrdiff_t m_unpredictableBaseAngle = 0xA4; // QAngle
            }
            // Parent: None
            // Field count: 0
            namespace C_HEGrenadeProjectile {
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterModel {
                constexpr std::ptrdiff_t m_iFilterModel = 0x7B0; // CUtlSymbolLarge
            }
            // Parent: C_SoundAreaEntityBase
            // Field count: 2
            namespace C_SoundAreaEntityOrientedBox {
                constexpr std::ptrdiff_t m_vMin = 0x79C; // Vector
                constexpr std::ptrdiff_t m_vMax = 0x7A8; // Vector
            }
            // Parent: C_SoundOpvarSetPointBase
            // Field count: 0
            namespace C_SoundOpvarSetPointEntity {
            }
            // Parent: C_BaseEntity
            // Field count: 2
            namespace CPulseGameBlackboard {
                constexpr std::ptrdiff_t m_strGraphName = 0x788; // CUtlString
                constexpr std::ptrdiff_t m_strStateBlob = 0x790; // CUtlString
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
            // Parent: None
            // Field count: 0
            namespace C_CSWeaponBaseShotgun {
            }
            // Parent: None
            // Field count: 7
            namespace C_RagdollPropAttached {
                constexpr std::ptrdiff_t m_boneIndexAttached = 0x1278; // uint32
                constexpr std::ptrdiff_t m_ragdollAttachedObjectIndex = 0x127C; // uint32
                constexpr std::ptrdiff_t m_attachmentPointBoneSpace = 0x1280; // Vector
                constexpr std::ptrdiff_t m_attachmentPointRagdollSpace = 0x128C; // Vector
                constexpr std::ptrdiff_t m_vecOffset = 0x1298; // Vector
                constexpr std::ptrdiff_t m_parentTime = 0x12A4; // float32
                constexpr std::ptrdiff_t m_bHasParent = 0x12A8; // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_ModelPointEntity {
            }
            // Parent: C_CSPlayerPawn
            // Field count: 2
            namespace C_CSGO_PreviewPlayer {
                constexpr std::ptrdiff_t m_animgraphCharacterModeString = 0x45B8; // CGlobalSymbol
                constexpr std::ptrdiff_t m_flInitialModelScale = 0x45C0; // float32
            }
            // Parent: C_BarnLight
            // Field count: 1
            namespace C_RectLight {
                constexpr std::ptrdiff_t m_bShowLight = 0x1330; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 3
            namespace CCSRadarElement {
                constexpr std::ptrdiff_t m_nElementType = 0x798; // uint32
                constexpr std::ptrdiff_t m_nElementColor = 0x79C; // uint32
                constexpr std::ptrdiff_t m_nTeamFilter = 0x7A0; // uint32
            }
            // Parent: C_BaseEntity
            // Field count: 3
            namespace CPathSimple {
                constexpr std::ptrdiff_t m_CPathQueryComponent = 0x790; // CPathQueryComponent
                constexpr std::ptrdiff_t m_pathString = 0x880; // CUtlString
                constexpr std::ptrdiff_t m_bClosedLoop = 0x888; // bool
            }
            // Parent: None
            // Field count: 3
            namespace C_FuncTrackTrain {
                constexpr std::ptrdiff_t m_nLongAxis = 0x1020; // int32
                constexpr std::ptrdiff_t m_flRadius = 0x1024; // float32
                constexpr std::ptrdiff_t m_flLineLength = 0x1028; // float32
            }
            // Parent: None
            // Field count: 2
            namespace C_EconWearable {
                constexpr std::ptrdiff_t m_nForceSkin = 0x27A8; // int32
                constexpr std::ptrdiff_t m_bAlwaysAllow = 0x27AC; // bool
            }
            // Parent: C_BaseModelEntity
            // Field count: 9
            namespace C_EnvDecal {
                constexpr std::ptrdiff_t m_hDecalMaterial = 0x1020; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_flWidth = 0x1028; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x102C; // float32
                constexpr std::ptrdiff_t m_flDepth = 0x1030; // float32
                constexpr std::ptrdiff_t m_nRenderOrder = 0x1034; // uint32
                constexpr std::ptrdiff_t m_bProjectOnWorld = 0x1038; // bool
                constexpr std::ptrdiff_t m_bProjectOnCharacters = 0x1039; // bool
                constexpr std::ptrdiff_t m_bProjectOnWater = 0x103A; // bool
                constexpr std::ptrdiff_t m_flDepthSortBias = 0x103C; // float32
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
            // Parent: None
            // Field count: 0
            namespace C_WeaponM4A1 {
            }
            // Parent: None
            // Field count: 1
            namespace C_Item {
                constexpr std::ptrdiff_t m_pReticleHintTextName = 0x27A8; // char[256]
            }
            // Parent: None
            // Field count: 0
            namespace C_CSPetPlacement {
            }
            // Parent: C_BaseModelEntity
            // Field count: 23
            namespace C_Beam {
                constexpr std::ptrdiff_t m_flFrameRate = 0x1020; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0x1024; // float32
                constexpr std::ptrdiff_t m_flFireTime = 0x1028; // GameTime_t
                constexpr std::ptrdiff_t m_flDamage = 0x102C; // float32
                constexpr std::ptrdiff_t m_nNumBeamEnts = 0x1030; // uint8
                constexpr std::ptrdiff_t m_queryHandleHalo = 0x1034; // int32
                constexpr std::ptrdiff_t m_hBaseMaterial = 0x1058; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nHaloIndex = 0x1060; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nBeamType = 0x1068; // BeamType_t
                constexpr std::ptrdiff_t m_nBeamFlags = 0x106C; // uint32
                constexpr std::ptrdiff_t m_hAttachEntity = 0x1070; // CHandle<C_BaseEntity>[10]
                constexpr std::ptrdiff_t m_nAttachIndex = 0x1098; // AttachmentHandle_t[10]
                constexpr std::ptrdiff_t m_fWidth = 0x10A4; // float32
                constexpr std::ptrdiff_t m_fEndWidth = 0x10A8; // float32
                constexpr std::ptrdiff_t m_fFadeLength = 0x10AC; // float32
                constexpr std::ptrdiff_t m_fHaloScale = 0x10B0; // float32
                constexpr std::ptrdiff_t m_fAmplitude = 0x10B4; // float32
                constexpr std::ptrdiff_t m_fStartFrame = 0x10B8; // float32
                constexpr std::ptrdiff_t m_fSpeed = 0x10BC; // float32
                constexpr std::ptrdiff_t m_flFrame = 0x10C0; // float32
                constexpr std::ptrdiff_t m_bTurnedOff = 0x10C4; // bool
                constexpr std::ptrdiff_t m_vecEndPos = 0x10C8; // VectorWS
                constexpr std::ptrdiff_t m_hEndEntity = 0x10D4; // CHandle<C_BaseEntity>
            }
            // Parent: C_BaseEntity
            // Field count: 20
            namespace C_EnvLightProbeVolume {
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_AmbientCube = 0x818; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SDF = 0x820; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_DC = 0x828; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_L1 = 0x830; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x838; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x840; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x848; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x850; // Vector
                constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x85C; // Vector
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x868; // bool
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x86C; // int32
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x870; // int32
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x874; // bool
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x878; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x87C; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x880; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x884; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x888; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x88C; // int32
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x899; // bool
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
            // Field count: 9
            namespace C_FuncConveyor {
                constexpr std::ptrdiff_t m_vecMoveDirEntitySpace = 0x1028; // Vector
                constexpr std::ptrdiff_t m_flTargetSpeed = 0x1034; // float32
                constexpr std::ptrdiff_t m_nTransitionStartTick = 0x1038; // GameTick_t
                constexpr std::ptrdiff_t m_nTransitionDurationTicks = 0x103C; // int32
                constexpr std::ptrdiff_t m_flTransitionStartSpeed = 0x1040; // float32
                constexpr std::ptrdiff_t m_flFrictionScale = 0x1044; // float32
                constexpr std::ptrdiff_t m_hConveyorModels = 0x1048; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_flCurrentConveyorOffset = 0x1060; // float32
                constexpr std::ptrdiff_t m_flCurrentConveyorSpeed = 0x1064; // float32
            }
            // Parent: None
            // Field count: 5
            namespace CCSPlayer_WeaponServices {
                constexpr std::ptrdiff_t m_flNextAttack = 0xD0; // GameTime_t
                constexpr std::ptrdiff_t m_nOldTotalShootPositionHistoryCount = 0xD4; // uint32
                constexpr std::ptrdiff_t m_nOldTotalInputHistoryCount = 0x370; // uint32
                constexpr std::ptrdiff_t m_networkAnimTiming = 0x15C0; // C_NetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_bBlockInspectUntilNextGraphUpdate = 0x15D8; // bool
            }
            // Parent: None
            // Field count: 2
            namespace C_PhysMagnet {
                constexpr std::ptrdiff_t m_aAttachedObjectsFromServer = 0x11F0; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_aAttachedObjects = 0x1208; // CUtlVector<CHandle<C_BaseEntity>>
            }
            // Parent: None
            // Field count: 0
            namespace CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
            }
            // Parent: None
            // Field count: 0
            namespace C_Breakable {
            }
            // Parent: None
            // Field count: 29
            namespace C_PlantedC4 {
                constexpr std::ptrdiff_t m_bBombTicking = 0x1210; // bool
                constexpr std::ptrdiff_t m_nBombSite = 0x1214; // int32
                constexpr std::ptrdiff_t m_nSourceSoundscapeHash = 0x1218; // int32
                constexpr std::ptrdiff_t m_entitySpottedState = 0x1220; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_flNextGlow = 0x1238; // GameTime_t
                constexpr std::ptrdiff_t m_flNextBeep = 0x123C; // GameTime_t
                constexpr std::ptrdiff_t m_flC4Blow = 0x1240; // GameTime_t
                constexpr std::ptrdiff_t m_bCannotBeDefused = 0x1244; // bool
                constexpr std::ptrdiff_t m_bHasExploded = 0x1245; // bool
                constexpr std::ptrdiff_t m_flTimerLength = 0x1248; // float32
                constexpr std::ptrdiff_t m_bBeingDefused = 0x124C; // bool
                constexpr std::ptrdiff_t m_bTriggerWarning = 0x1250; // float32
                constexpr std::ptrdiff_t m_bExplodeWarning = 0x1254; // float32
                constexpr std::ptrdiff_t m_bC4Activated = 0x1258; // bool
                constexpr std::ptrdiff_t m_bTenSecWarning = 0x1259; // bool
                constexpr std::ptrdiff_t m_flDefuseLength = 0x125C; // float32
                constexpr std::ptrdiff_t m_flDefuseCountDown = 0x1260; // GameTime_t
                constexpr std::ptrdiff_t m_bBombDefused = 0x1264; // bool
                constexpr std::ptrdiff_t m_hBombDefuser = 0x1268; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_AttributeManager = 0x1270; // C_AttributeContainer
                constexpr std::ptrdiff_t m_hDefuserMultimeter = 0x2788; // CHandle<C_Multimeter>
                constexpr std::ptrdiff_t m_flNextRadarFlashTime = 0x278C; // GameTime_t
                constexpr std::ptrdiff_t m_bRadarFlash = 0x2790; // bool
                constexpr std::ptrdiff_t m_pBombDefuser = 0x2794; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_fLastDefuseTime = 0x2798; // GameTime_t
                constexpr std::ptrdiff_t m_pPredictionOwner = 0x27A0; // CBasePlayerController*
                constexpr std::ptrdiff_t m_vecC4ExplodeSpectatePos = 0x27A8; // VectorWS
                constexpr std::ptrdiff_t m_vecC4ExplodeSpectateAng = 0x27B4; // QAngle
                constexpr std::ptrdiff_t m_flC4ExplodeSpectateDuration = 0x27C0; // float32
            }
            // Parent: None
            // Field count: 4
            namespace CCSCustomHudLayoutState {
                constexpr std::ptrdiff_t m_playerSlot = 0x30; // CPlayerSlot
                constexpr std::ptrdiff_t m_bInputCaptureEnabled = 0x34; // bool
                constexpr std::ptrdiff_t m_vecHasClasses = 0x38; // C_NetworkUtlVectorBase<HUDPanelHasClass_t>
                constexpr std::ptrdiff_t m_vecDialogVariableStrings = 0x50; // C_NetworkUtlVectorBase<HUDPanelDialogVariableString_t>
            }
            // Parent: None
            // Field count: 0
            namespace CCSGO_WingmanIntroCharacterPosition {
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterName {
                constexpr std::ptrdiff_t m_iFilterName = 0x7B0; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 9
            namespace C_RagdollProp {
                constexpr std::ptrdiff_t m_ragEnabled = 0x11F0; // C_NetworkUtlVectorBase<bool>
                constexpr std::ptrdiff_t m_ragPos = 0x1208; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_ragAngles = 0x1220; // C_NetworkUtlVectorBase<QAngle>
                constexpr std::ptrdiff_t m_flBlendWeight = 0x1238; // float32
                constexpr std::ptrdiff_t m_hRagdollSource = 0x123C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iEyeAttachment = 0x1240; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_flBlendWeightCurrent = 0x1244; // float32
                constexpr std::ptrdiff_t m_parentPhysicsBoneIndices = 0x1248; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_worldSpaceBoneComputationOrder = 0x1260; // CUtlVector<int32>
            }
            // Parent: None
            // Field count: 8
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
                constexpr std::ptrdiff_t m_nBreakDestChunk = 0x54; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nBreakDestInstruction = 0x58; // int32
            }
            // Parent: None
            // Field count: 0
            namespace C_MapPreviewParticleSystem {
            }
            // Parent: C_BaseModelEntity
            // Field count: 18
            namespace CBaseAnimGraph {
                constexpr std::ptrdiff_t m_graphControllerManager = 0x1020; // CAnimGraphControllerManager
                constexpr std::ptrdiff_t m_pMainGraphController = 0x10B8; // CAnimGraphControllerPtr
                constexpr std::ptrdiff_t m_bInitiallyPopulateInterpHistory = 0x10C0; // bool
                constexpr std::ptrdiff_t m_bSuppressAnimEventSounds = 0x10C2; // bool
                constexpr std::ptrdiff_t m_OnLayerCycleUpdated = 0x10C8; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnExternalChoreoGraphChanged = 0x10E8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bAnimGraphUpdateEnabled = 0x1108; // bool
                constexpr std::ptrdiff_t m_bAnimationUpdateScheduled = 0x1109; // bool
                constexpr std::ptrdiff_t m_vecForce = 0x110C; // Vector
                constexpr std::ptrdiff_t m_nForceBone = 0x1118; // int32
                constexpr std::ptrdiff_t m_pClientsideRagdoll = 0x1120; // CBaseAnimGraph*
                constexpr std::ptrdiff_t m_bBuiltRagdoll = 0x1128; // bool
                constexpr std::ptrdiff_t m_pRagdollControl = 0x1138; // IPhysicsRagdollControl*
                constexpr std::ptrdiff_t m_RagdollPose = 0x1140; // PhysicsRagdollPose_t
                constexpr std::ptrdiff_t m_bRagdollEnabled = 0x1188; // bool
                constexpr std::ptrdiff_t m_bRagdollClientSide = 0x1189; // bool
                constexpr std::ptrdiff_t m_bShouldUpdateTransformations = 0x118A; // bool
                constexpr std::ptrdiff_t m_bHasAnimatedMaterialAttributes = 0x1198; // bool
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
            namespace C_LightEntity {
                constexpr std::ptrdiff_t m_CLightComponent = 0x1020; // CLightComponent*
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponM249 {
            }
            // Parent: None
            // Field count: 25
            namespace C_LocalTempEntity {
                constexpr std::ptrdiff_t flags = 0x11F0; // int32
                constexpr std::ptrdiff_t die = 0x11F4; // GameTime_t
                constexpr std::ptrdiff_t m_flFrameMax = 0x11F8; // float32
                constexpr std::ptrdiff_t x = 0x11FC; // float32
                constexpr std::ptrdiff_t y = 0x1200; // float32
                constexpr std::ptrdiff_t fadeSpeed = 0x1204; // float32
                constexpr std::ptrdiff_t bounceFactor = 0x1208; // float32
                constexpr std::ptrdiff_t hitSound = 0x120C; // int32
                constexpr std::ptrdiff_t priority = 0x1210; // int32
                constexpr std::ptrdiff_t tentOffset = 0x1214; // Vector
                constexpr std::ptrdiff_t m_vecTempEntAngVelocity = 0x1220; // QAngle
                constexpr std::ptrdiff_t tempent_renderamt = 0x122C; // int32
                constexpr std::ptrdiff_t m_vecNormal = 0x1230; // Vector
                constexpr std::ptrdiff_t m_flSpriteScale = 0x123C; // float32
                constexpr std::ptrdiff_t m_nFlickerFrame = 0x1240; // int32
                constexpr std::ptrdiff_t m_flFrameRate = 0x1244; // float32
                constexpr std::ptrdiff_t m_flFrame = 0x1248; // float32
                constexpr std::ptrdiff_t m_pszImpactEffect = 0x1250; // char*
                constexpr std::ptrdiff_t m_pszParticleEffect = 0x1258; // char*
                constexpr std::ptrdiff_t m_bParticleCollision = 0x1260; // bool
                constexpr std::ptrdiff_t m_iLastCollisionFrame = 0x1264; // int32
                constexpr std::ptrdiff_t m_vLastCollisionOrigin = 0x1268; // VectorWS
                constexpr std::ptrdiff_t m_vecTempEntVelocity = 0x1274; // Vector
                constexpr std::ptrdiff_t m_vecPrevAbsOrigin = 0x1280; // VectorWS
                constexpr std::ptrdiff_t m_vecTempEntAcceleration = 0x128C; // Vector
            }
            // Parent: None
            // Field count: 2
            namespace C_WeaponTaser {
                constexpr std::ptrdiff_t m_fFireTime = 0x2DCC; // GameTime_t
                constexpr std::ptrdiff_t m_nLastAttackTick = 0x2DD0; // int32
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
            // Parent: None
            // Field count: 0
            namespace C_PrecipitationBlocker {
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_CounterTerroristTeamIntroCamera {
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            namespace C_SoundOpvarSetPathCornerEntity {
            }
            // Parent: None
            // Field count: 4
            namespace CPlayer_WeaponServices {
                constexpr std::ptrdiff_t m_hMyWeapons = 0x48; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
                constexpr std::ptrdiff_t m_hActiveWeapon = 0x60; // CHandle<C_BasePlayerWeapon>
                constexpr std::ptrdiff_t m_hLastWeapon = 0x64; // CHandle<C_BasePlayerWeapon>
                constexpr std::ptrdiff_t m_iAmmo = 0x68; // uint16[32]
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponNegev {
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponFiveSeven {
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponSawedoff {
            }
            // Parent: None
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
            // Parent: None
            // Field count: 0
            namespace C_WeaponMP9 {
            }
            // Parent: None
            // Field count: 0
            namespace C_DynamicPropAlias_prop_dynamic_override {
            }
            // Parent: None
            // Field count: 0
            namespace CEnvSoundscapeTriggerable {
            }
            // Parent: None
            // Field count: 5
            namespace C_PlayerPing {
                constexpr std::ptrdiff_t m_hPlayer = 0x7B0; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_hPingedEntity = 0x7B4; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iType = 0x7B8; // int32
                constexpr std::ptrdiff_t m_bUrgent = 0x7BC; // bool
                constexpr std::ptrdiff_t m_szPlaceName = 0x7BD; // char[18]
            }
            // Parent: None
            // Field count: 0
            namespace C_AK47 {
            }
            // Parent: C_BaseEntity
            // Field count: 10
            namespace C_CSGO_MapPreviewCameraPathNode {
                constexpr std::ptrdiff_t m_szParentPathUniqueID = 0x780; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nPathIndex = 0x788; // int32
                constexpr std::ptrdiff_t m_vInTangentLocal = 0x78C; // Vector
                constexpr std::ptrdiff_t m_vOutTangentLocal = 0x798; // Vector
                constexpr std::ptrdiff_t m_flFOV = 0x7A4; // float32
                constexpr std::ptrdiff_t m_flCameraSpeed = 0x7A8; // float32
                constexpr std::ptrdiff_t m_flEaseIn = 0x7AC; // float32
                constexpr std::ptrdiff_t m_flEaseOut = 0x7B0; // float32
                constexpr std::ptrdiff_t m_vInTangentWorld = 0x7B4; // Vector
                constexpr std::ptrdiff_t m_vOutTangentWorld = 0x7C0; // Vector
            }
            // Parent: None
            // Field count: 10
            namespace C_CSPlayerResource {
                constexpr std::ptrdiff_t m_bHostageAlive = 0x77C; // bool[12]
                constexpr std::ptrdiff_t m_isHostageFollowingSomeone = 0x788; // bool[12]
                constexpr std::ptrdiff_t m_iHostageEntityIDs = 0x794; // CEntityIndex[12]
                constexpr std::ptrdiff_t m_bombsiteCenterA = 0x7C4; // VectorWS
                constexpr std::ptrdiff_t m_bombsiteCenterB = 0x7D0; // VectorWS
                constexpr std::ptrdiff_t m_hostageRescueX = 0x7DC; // int32[4]
                constexpr std::ptrdiff_t m_hostageRescueY = 0x7EC; // int32[4]
                constexpr std::ptrdiff_t m_hostageRescueZ = 0x7FC; // int32[4]
                constexpr std::ptrdiff_t m_bEndMatchNextMapAllVoted = 0x80C; // bool
                constexpr std::ptrdiff_t m_foundGoalPositions = 0x80D; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 2
            namespace CSkyboxReference {
                constexpr std::ptrdiff_t m_worldGroupId = 0x77C; // WorldGroupId_t
                constexpr std::ptrdiff_t m_hSkyCamera = 0x780; // CHandle<C_SkyCamera>
            }
            // Parent: None
            // Field count: 0
            namespace C_IncendiaryGrenade {
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterClass {
                constexpr std::ptrdiff_t m_iFilterClass = 0x7B0; // CUtlSymbolLarge
            }
            // Parent: C_PointCamera
            // Field count: 1
            namespace C_PointCameraVFOV {
                constexpr std::ptrdiff_t m_flVerticalFOV = 0x7E0; // float32
            }
            // Parent: C_BaseEntity
            // Field count: 26
            namespace C_PointCamera {
                constexpr std::ptrdiff_t m_FOV = 0x77C; // float32
                constexpr std::ptrdiff_t m_Resolution = 0x780; // float32
                constexpr std::ptrdiff_t m_bFogEnable = 0x784; // bool
                constexpr std::ptrdiff_t m_FogColor = 0x788; // Color
                constexpr std::ptrdiff_t m_flFogStart = 0x78C; // float32
                constexpr std::ptrdiff_t m_flFogEnd = 0x790; // float32
                constexpr std::ptrdiff_t m_flFogMaxDensity = 0x794; // float32
                constexpr std::ptrdiff_t m_bActive = 0x798; // bool
                constexpr std::ptrdiff_t m_bUseScreenAspectRatio = 0x799; // bool
                constexpr std::ptrdiff_t m_flAspectRatio = 0x79C; // float32
                constexpr std::ptrdiff_t m_bNoSky = 0x7A0; // bool
                constexpr std::ptrdiff_t m_fBrightness = 0x7A4; // float32
                constexpr std::ptrdiff_t m_flZFar = 0x7A8; // float32
                constexpr std::ptrdiff_t m_flZNear = 0x7AC; // float32
                constexpr std::ptrdiff_t m_bCanHLTVUse = 0x7B0; // bool
                constexpr std::ptrdiff_t m_bAlignWithParent = 0x7B1; // bool
                constexpr std::ptrdiff_t m_bDofEnabled = 0x7B2; // bool
                constexpr std::ptrdiff_t m_flDofNearBlurry = 0x7B4; // float32
                constexpr std::ptrdiff_t m_flDofNearCrisp = 0x7B8; // float32
                constexpr std::ptrdiff_t m_flDofFarCrisp = 0x7BC; // float32
                constexpr std::ptrdiff_t m_flDofFarBlurry = 0x7C0; // float32
                constexpr std::ptrdiff_t m_flDofTiltToGround = 0x7C4; // float32
                constexpr std::ptrdiff_t m_TargetFOV = 0x7C8; // float32
                constexpr std::ptrdiff_t m_DegreesPerSecond = 0x7CC; // float32
                constexpr std::ptrdiff_t m_bIsOn = 0x7D0; // bool
                constexpr std::ptrdiff_t m_pNext = 0x7D8; // C_PointCamera*
            }
            // Parent: CPathSimple
            // Field count: 4
            namespace CPathWithDynamicNodes {
                constexpr std::ptrdiff_t m_vecPathNodes = 0x890; // C_NetworkUtlVectorBase<CHandle<CPathNode>>
                constexpr std::ptrdiff_t m_xInitialPathWorldToLocal = 0x8B0; // CTransform
                constexpr std::ptrdiff_t m_eDesiredDirection = 0x8D0; // DirectionAlongSimplePath_t
                constexpr std::ptrdiff_t m_bIgnoreParentRotation = 0x8D4; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 3
            namespace CBaseFilter {
                constexpr std::ptrdiff_t m_bNegated = 0x77C; // bool
                constexpr std::ptrdiff_t m_OnPass = 0x780; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFail = 0x798; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 1
            namespace WeaponPurchaseTracker_t {
                constexpr std::ptrdiff_t m_weaponPurchases = 0x8; // C_UtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
            }
            // Parent: C_PointEntity
            // Field count: 15
            namespace CMapInfo {
                constexpr std::ptrdiff_t m_iBuyingStatus = 0x77C; // int32
                constexpr std::ptrdiff_t m_flBombRadius = 0x780; // float32
                constexpr std::ptrdiff_t m_iPetPopulation = 0x784; // int32
                constexpr std::ptrdiff_t m_bUseNormalSpawnsForDM = 0x788; // bool
                constexpr std::ptrdiff_t m_bDisableAutoGeneratedDMSpawns = 0x789; // bool
                constexpr std::ptrdiff_t m_flBotMaxVisionDistance = 0x78C; // float32
                constexpr std::ptrdiff_t m_iHostageCount = 0x790; // int32
                constexpr std::ptrdiff_t m_bFadePlayerVisibilityFarZ = 0x794; // bool
                constexpr std::ptrdiff_t m_bRainTraceToSkyEnabled = 0x795; // bool
                constexpr std::ptrdiff_t m_bGPUCullSkybox = 0x796; // bool
                constexpr std::ptrdiff_t m_flEnvRainStrength = 0x798; // float32
                constexpr std::ptrdiff_t m_flEnvPuddleRippleStrength = 0x79C; // float32
                constexpr std::ptrdiff_t m_flEnvPuddleRippleDirection = 0x7A0; // float32
                constexpr std::ptrdiff_t m_flEnvWetnessCoverage = 0x7A4; // float32
                constexpr std::ptrdiff_t m_flEnvWetnessDryingAmount = 0x7A8; // float32
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_EndOfMatchCamera {
            }
            // Parent: CBaseAnimGraph
            // Field count: 12
            namespace C_BaseGrenade {
                constexpr std::ptrdiff_t m_bHasWarnedAI = 0x11F0; // bool
                constexpr std::ptrdiff_t m_bIsSmokeGrenade = 0x11F1; // bool
                constexpr std::ptrdiff_t m_bIsLive = 0x11F2; // bool
                constexpr std::ptrdiff_t m_DmgRadius = 0x11F4; // float32
                constexpr std::ptrdiff_t m_flDetonateTime = 0x11F8; // GameTime_t
                constexpr std::ptrdiff_t m_flWarnAITime = 0x11FC; // float32
                constexpr std::ptrdiff_t m_flDamage = 0x1200; // float32
                constexpr std::ptrdiff_t m_iszBounceSound = 0x1208; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_ExplosionSound = 0x1210; // CUtlString
                constexpr std::ptrdiff_t m_hThrower = 0x1218; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_flNextAttack = 0x1230; // GameTime_t
                constexpr std::ptrdiff_t m_hOriginalThrower = 0x1234; // CHandle<C_CSPlayerPawn>
            }
            // Parent: None
            // Field count: 16
            namespace C_PlayerSprayDecal {
                constexpr std::ptrdiff_t m_nUniqueID = 0x1020; // int32
                constexpr std::ptrdiff_t m_unAccountID = 0x1024; // uint32
                constexpr std::ptrdiff_t m_unTraceID = 0x1028; // uint32
                constexpr std::ptrdiff_t m_rtGcTime = 0x102C; // uint32
                constexpr std::ptrdiff_t m_vecEndPos = 0x1030; // VectorWS
                constexpr std::ptrdiff_t m_vecStart = 0x103C; // VectorWS
                constexpr std::ptrdiff_t m_vecLeft = 0x1048; // Vector
                constexpr std::ptrdiff_t m_vecNormal = 0x1054; // Vector
                constexpr std::ptrdiff_t m_nPlayer = 0x1060; // int32
                constexpr std::ptrdiff_t m_nEntity = 0x1064; // int32
                constexpr std::ptrdiff_t m_nHitbox = 0x1068; // int32
                constexpr std::ptrdiff_t m_flCreationTime = 0x106C; // float32
                constexpr std::ptrdiff_t m_nTintID = 0x1070; // int32
                constexpr std::ptrdiff_t m_nVersion = 0x1074; // uint8
                constexpr std::ptrdiff_t m_ubSignature = 0x1075; // uint8[128]
                constexpr std::ptrdiff_t m_SprayRenderHelper = 0x1100; // CPlayerSprayDecalRenderHelper
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_LimitCount__Criteria_t {
                constexpr std::ptrdiff_t m_bLimitCountPasses = 0x0; // bool
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
            // Parent: None
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
                constexpr std::ptrdiff_t m_hSpriteMaterial = 0x1020; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hAttachedToEntity = 0x1028; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nAttachment = 0x102C; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_flSpriteFramerate = 0x1030; // float32
                constexpr std::ptrdiff_t m_flFrame = 0x1034; // float32
                constexpr std::ptrdiff_t m_flDieTime = 0x1038; // GameTime_t
                constexpr std::ptrdiff_t m_nBrightness = 0x1048; // uint32
                constexpr std::ptrdiff_t m_flBrightnessDuration = 0x104C; // float32
                constexpr std::ptrdiff_t m_flSpriteScale = 0x1050; // float32
                constexpr std::ptrdiff_t m_flScaleDuration = 0x1054; // float32
                constexpr std::ptrdiff_t m_bWorldSpaceScale = 0x1058; // bool
                constexpr std::ptrdiff_t m_flGlowProxySize = 0x105C; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0x1060; // float32
                constexpr std::ptrdiff_t m_flLastTime = 0x1064; // GameTime_t
                constexpr std::ptrdiff_t m_flMaxFrame = 0x1068; // float32
                constexpr std::ptrdiff_t m_flStartScale = 0x106C; // float32
                constexpr std::ptrdiff_t m_flDestScale = 0x1070; // float32
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0x1074; // GameTime_t
                constexpr std::ptrdiff_t m_nStartBrightness = 0x1078; // int32
                constexpr std::ptrdiff_t m_nDestBrightness = 0x107C; // int32
                constexpr std::ptrdiff_t m_flBrightnessTimeStart = 0x1080; // GameTime_t
                constexpr std::ptrdiff_t m_nSpriteWidth = 0x1090; // int32
                constexpr std::ptrdiff_t m_nSpriteHeight = 0x1094; // int32
                constexpr std::ptrdiff_t m_flSpeed = 0x1098; // float32
            }
            // Parent: C_BaseEntity
            // Field count: 2
            namespace C_CsmFovOverride {
                constexpr std::ptrdiff_t m_cameraName = 0x780; // CUtlString
                constexpr std::ptrdiff_t m_flCsmFovOverrideValue = 0x788; // float32
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponGlock {
            }
            // Parent: None
            // Field count: 1
            namespace C_PhysicsProp {
                constexpr std::ptrdiff_t m_bAwake = 0x1358; // bool
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterTeam {
                constexpr std::ptrdiff_t m_iFilterTeam = 0x7B0; // int32
            }
            // Parent: None
            // Field count: 33
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
                constexpr std::ptrdiff_t m_bShouldAnimateInWorld = 0x4C5; // bool
                constexpr std::ptrdiff_t m_bLinkedCooldowns = 0x4C6; // bool
                constexpr std::ptrdiff_t m_iFlags = 0x4C7; // ItemFlagTypes_t
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
            namespace C_SmokeGrenade {
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel {
            }
            // Parent: None
            // Field count: 0
            namespace CCSGO_RushIntroCharacterPosition {
            }
            // Parent: None
            // Field count: 0
            namespace CInfoParticleTarget {
            }
            // Parent: None
            // Field count: 0
            namespace CCSPlayer_DamageReactServices {
            }
            // Parent: C_BaseClientUIEntity
            // Field count: 31
            namespace C_PointClientUIWorldPanel {
                constexpr std::ptrdiff_t m_bForceRecreateNextUpdate = 0x1058; // bool
                constexpr std::ptrdiff_t m_bMoveViewToPlayerNextThink = 0x1059; // bool
                constexpr std::ptrdiff_t m_bCheckCSSClasses = 0x105A; // bool
                constexpr std::ptrdiff_t m_anchorDeltaTransform = 0x1060; // CTransform
                constexpr std::ptrdiff_t m_pOffScreenIndicator = 0x11E8; // CPointOffScreenIndicatorUi*
                constexpr std::ptrdiff_t m_bIgnoreInput = 0x1210; // bool
                constexpr std::ptrdiff_t m_bLit = 0x1211; // bool
                constexpr std::ptrdiff_t m_bFollowPlayerAcrossTeleport = 0x1212; // bool
                constexpr std::ptrdiff_t m_flWidth = 0x1214; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x1218; // float32
                constexpr std::ptrdiff_t m_flDPI = 0x121C; // float32
                constexpr std::ptrdiff_t m_flWindowUIScale = 0x1220; // float32
                constexpr std::ptrdiff_t m_flInteractDistance = 0x1224; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0x1228; // float32
                constexpr std::ptrdiff_t m_unOwnerContext = 0x122C; // uint32
                constexpr std::ptrdiff_t m_unHorizontalAlign = 0x1230; // uint32
                constexpr std::ptrdiff_t m_unVerticalAlign = 0x1234; // uint32
                constexpr std::ptrdiff_t m_unOrientation = 0x1238; // uint32
                constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0x123C; // bool
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x1240; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_bOpaque = 0x1258; // bool
                constexpr std::ptrdiff_t m_bNoDepth = 0x1259; // bool
                constexpr std::ptrdiff_t m_bVisibleWhenParentNoDraw = 0x125A; // bool
                constexpr std::ptrdiff_t m_bRenderBackface = 0x125B; // bool
                constexpr std::ptrdiff_t m_bUseOffScreenIndicator = 0x125C; // bool
                constexpr std::ptrdiff_t m_bExcludeFromSaveGames = 0x125D; // bool
                constexpr std::ptrdiff_t m_bGrabbable = 0x125E; // bool
                constexpr std::ptrdiff_t m_bOnlyRenderToTexture = 0x125F; // bool
                constexpr std::ptrdiff_t m_bDisableMipGen = 0x1260; // bool
                constexpr std::ptrdiff_t m_nExplicitImageLayout = 0x1264; // int32
                constexpr std::ptrdiff_t m_bIgnoreParentOrientation = 0x1268; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 3
            namespace C_EntityFlame {
                constexpr std::ptrdiff_t m_hEntAttached = 0x77C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hOldAttached = 0x7A0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bCheapEffect = 0x7A4; // bool
            }
            // Parent: None
            // Field count: 0
            namespace CBaseAnimGraphAlias_baseanimating {
            }
            // Parent: C_BaseEntity
            // Field count: 17
            namespace CBasePlayerController {
                constexpr std::ptrdiff_t m_CommandContext = 0x788; // C_CommandContext
                constexpr std::ptrdiff_t m_nInButtonsWhichAreToggles = 0x830; // uint64
                constexpr std::ptrdiff_t m_nTickBase = 0x838; // uint32
                constexpr std::ptrdiff_t m_hPawn = 0x83C; // CHandle<C_BasePlayerPawn>
                constexpr std::ptrdiff_t m_bKnownTeamMismatch = 0x840; // bool
                constexpr std::ptrdiff_t m_hPredictedPawn = 0x844; // CHandle<C_BasePlayerPawn>
                constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x84C; // CSplitScreenSlot
                constexpr std::ptrdiff_t m_hSplitOwner = 0x850; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_hSplitScreenPlayers = 0x858; // CUtlVector<CHandle<CBasePlayerController>>
                constexpr std::ptrdiff_t m_bIsHLTV = 0x870; // bool
                constexpr std::ptrdiff_t m_iConnected = 0x874; // PlayerConnectedState
                constexpr std::ptrdiff_t m_iMostConnected = 0x878; // PlayerConnectedState
                constexpr std::ptrdiff_t m_iszPlayerName = 0x87C; // char[128]
                constexpr std::ptrdiff_t m_steamID = 0x908; // uint64
                constexpr std::ptrdiff_t m_bIsLocalPlayerController = 0x910; // bool
                constexpr std::ptrdiff_t m_bNoClipEnabled = 0x911; // bool
                constexpr std::ptrdiff_t m_iDesiredFOV = 0x914; // uint32
            }
            // Parent: None
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
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCS2UIPawnGraphController {
                constexpr std::ptrdiff_t m_nAnimationSeed = 0xC0; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_characterMode = 0xD8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_bCharacterModeReset = 0xF0; // CAnimGraph2ParamOptionalRef<bool>
                constexpr std::ptrdiff_t m_nTeamPreviewVariant = 0x108; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_nTeamPreviewRandom = 0x120; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_nTeamPreviewPosition = 0x138; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_endOfMatchCelebration = 0x150; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_action = 0x168; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_bannerAnimation = 0x180; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_weaponCategory = 0x198; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_weaponType = 0x1B0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_weaponState = 0x1C8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                constexpr std::ptrdiff_t m_inspectTurnAngle = 0x1E0; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_nChickSnapshotVariant = 0x1F8; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_nChickLifeStage = 0x210; // CAnimGraph2ParamOptionalRef<float32>
                constexpr std::ptrdiff_t m_bCT = 0x228; // CAnimGraph2ParamOptionalRef<bool>
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
                constexpr std::ptrdiff_t m_bIsOn = 0x8; // bool
                constexpr std::ptrdiff_t m_bMuzzleFlashEnabled = 0x18; // bool
                constexpr std::ptrdiff_t m_flMuzzleFlashBrightness = 0x1C; // float32
                constexpr std::ptrdiff_t m_quatMuzzleFlashOrientation = 0x20; // Quaternion
                constexpr std::ptrdiff_t m_vecMuzzleFlashOrigin = 0x30; // VectorWS
                constexpr std::ptrdiff_t m_flFov = 0x3C; // float32
                constexpr std::ptrdiff_t m_flFarZ = 0x40; // float32
                constexpr std::ptrdiff_t m_flLinearAtten = 0x44; // float32
                constexpr std::ptrdiff_t m_bCastsShadows = 0x48; // bool
                constexpr std::ptrdiff_t m_flCurrentPullBackDist = 0x4C; // float32
                constexpr std::ptrdiff_t m_FlashlightTexture = 0x50; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_MuzzleFlashTexture = 0x58; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_textureName = 0x60; // char[64]
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace inv_image_camera_t {
                constexpr std::ptrdiff_t angle = 0x0; // QAngle
                constexpr std::ptrdiff_t fov_h = 0xC; // float32
                constexpr std::ptrdiff_t fov_v = 0x10; // float32
                constexpr std::ptrdiff_t znear = 0x14; // float32
                constexpr std::ptrdiff_t zfar = 0x18; // float32
                constexpr std::ptrdiff_t target = 0x1C; // Vector
                constexpr std::ptrdiff_t target_nudge = 0x28; // Vector
                constexpr std::ptrdiff_t orbit_distance = 0x34; // float32
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
                constexpr std::ptrdiff_t lightsun = 0x68; // inv_image_light_sun_t
                constexpr std::ptrdiff_t lightfill = 0x84; // inv_image_light_fill_t
                constexpr std::ptrdiff_t light0 = 0xA0; // inv_image_light_barn_t
                constexpr std::ptrdiff_t light1 = 0xC0; // inv_image_light_barn_t
                constexpr std::ptrdiff_t clearcolor = 0xE0; // inv_image_clearcolor_t
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
                constexpr std::ptrdiff_t m_LightColor = 0x6C; // Color
                constexpr std::ptrdiff_t m_AmbientColor1 = 0x70; // Color
                constexpr std::ptrdiff_t m_AmbientColor2 = 0x74; // Color
                constexpr std::ptrdiff_t m_AmbientColor3 = 0x78; // Color
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
