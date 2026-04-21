// Generated using https://github.com/a2x/cs2-dumper
// 2026-04-21 16:19:03.827280400 UTC

namespace CS2Dumper.Schemas {
    // Module: client.dll
    // Class count: 534
    // Enum count: 12
    public static class ClientDll {
        // Alignment: 4
        // Member count: 5
        public enum C_BaseCombatCharacter__WaterWakeMode_t : uint {
            WATER_WAKE_NONE = 0x0,
            WATER_WAKE_IDLE = 0x1,
            WATER_WAKE_WALKING = 0x2,
            WATER_WAKE_RUNNING = 0x3,
            WATER_WAKE_WATER_OVERHEAD = 0x4
        }
        // Alignment: 4
        // Member count: 2
        public enum PulseBestOutflowRules_t : uint {
            SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
            SORT_BY_OUTFLOW_INDEX = 0x1
        }
        // Alignment: 4
        // Member count: 4
        public enum PulseCursorCancelPriority_t : uint {
            None = 0x0,
            CancelOnSucceeded = 0x1,
            SoftCancel = 0x2,
            HardCancel = 0x3
        }
        // Alignment: 4
        // Member count: 2
        public enum PulseMethodCallMode_t : uint {
            SYNC_WAIT_FOR_COMPLETION = 0x0,
            ASYNC_FIRE_AND_FORGET = 0x1
        }
        // Alignment: 4
        // Member count: 15
        public enum CompositeMaterialInputLooseVariableType_t : uint {
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
        }
        // Alignment: 4
        // Member count: 8
        public enum CompositeMaterialInputTextureType_t : uint {
            INPUT_TEXTURE_TYPE_DEFAULT = 0x0,
            INPUT_TEXTURE_TYPE_NORMALMAP = 0x1,
            INPUT_TEXTURE_TYPE_COLOR = 0x2,
            INPUT_TEXTURE_TYPE_MASKS = 0x3,
            INPUT_TEXTURE_TYPE_ROUGHNESS = 0x4,
            INPUT_TEXTURE_TYPE_PEARLESCENCE_MASK = 0x5,
            INPUT_TEXTURE_TYPE_AO = 0x6,
            INPUT_TEXTURE_TYPE_POSITION = 0x7
        }
        // Alignment: 4
        // Member count: 9
        public enum InventoryNodeType_t : uint {
            NODE_TYPE_INVALID = 0x0,
            VIRTUAL_NODE_SCHEMA_PREFAB = 0x1,
            VIRTUAL_NODE_SCHEMA_ITEMDEF = 0x2,
            VIRTUAL_NODE_SCHEMA_STICKER = 0x3,
            VIRTUAL_NODE_SCHEMA_KEYCHAIN = 0x4,
            CONCRETE_NODE_SCHEMA_PREFAB = 0x5,
            CONCRETE_NODE_SCHEMA_ITEMDEF = 0x6,
            CONCRETE_NODE_SCHEMA_STICKER = 0x7,
            CONCRETE_NODE_SCHEMA_KEYCHAIN = 0x8
        }
        // Alignment: 4
        // Member count: 6
        public enum CompositeMaterialInputContainerSourceType_t : uint {
            CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0x0,
            CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 0x1,
            CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 0x2,
            CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 0x3,
            CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 0x4,
            CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 0x5
        }
        // Alignment: 4
        // Member count: 10
        public enum CompMatPropertyMutatorType_t : uint {
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
        // Member count: 2
        public enum CompositeMaterialVarSystemVar_t : uint {
            COMPMATSYSVAR_COMPOSITETIME = 0x0,
            COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 0x1
        }
        // Alignment: 4
        // Member count: 6
        public enum CompositeMaterialMatchFilterType_t : uint {
            MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0x0,
            MATCH_FILTER_MATERIAL_SHADER = 0x1,
            MATCH_FILTER_MATERIAL_NAME_SUBSTR = 0x2,
            MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 0x3,
            MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 0x4,
            MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 0x5
        }
        // Alignment: 4
        // Member count: 3
        public enum CompMatPropertyMutatorConditionType_t : uint {
            COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0x0,
            COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 0x1,
            COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 0x2
        }
        // Parent: C_CSGO_TeamPreviewCharacterPosition
        // Field count: 0
        public static class C_CSGO_TeamIntroCharacterPosition {
        }
        // Parent: C_Inferno
        // Field count: 0
        public static class C_FireCrackerBlast {
        }
        // Parent: CCSGO_WingmanIntroCharacterPosition
        // Field count: 0
        public static class CCSGO_WingmanIntroCounterTerroristPosition {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_WaitForCursorsWithTag {
            public const nint m_bTagSelfWhenComplete = 0x98; // bool
            public const nint m_nDesiredKillPriority = 0x9C; // PulseCursorCancelPriority_t
        }
        // Parent: None
        // Field count: 1
        public static class C_SceneEntity__QueuedEvents_t {
            public const nint starttime = 0x0; // float32
        }
        // Parent: CPlayerPawnComponent
        // Field count: 1
        public static class CCSPlayer_PingServices {
            public const nint m_hPlayerPing = 0x48; // CHandle<C_PlayerPing>
        }
        // Parent: None
        // Field count: 5
        public static class CEconItemAttribute {
            public const nint m_iAttributeDefinitionIndex = 0x30; // uint16
            public const nint m_flValue = 0x34; // float32
            public const nint m_flInitialValue = 0x38; // float32
            public const nint m_nRefundableCurrency = 0x3C; // int32
            public const nint m_bSetBonus = 0x40; // bool
        }
        // Parent: None
        // Field count: 0
        public static class CBaseTriggerAPI {
        }
        // Parent: C_DynamicProp
        // Field count: 0
        public static class CFuncRetakeBarrier {
        }
        // Parent: None
        // Field count: 15
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
            public const nint m_iInitialWindDir = 0x2A; // uint16
            public const nint m_flInitialWindSpeed = 0x2C; // float32
            public const nint m_location = 0x30; // VectorWS
            public const nint m_hEntOwner = 0x3C; // CHandle<C_BaseEntity>
        }
        // Parent: C_BaseEntity
        // Field count: 4
        public static class C_SkyCamera {
            public const nint m_skyboxData = 0x600; // sky3dparams_t
            public const nint m_skyboxSlotToken = 0x690; // CUtlStringToken
            public const nint m_bUseAngles = 0x694; // bool
            public const nint m_pNext = 0x698; // C_SkyCamera*
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Base {
            public const nint m_nEditorNodeID = 0x8; // PulseDocNodeID_t
        }
        // Parent: C_BaseModelEntity
        // Field count: 0
        public static class C_FuncRotating {
        }
        // Parent: C_BaseEntity
        // Field count: 6
        public static class C_SoundOpvarSetPointBase {
            public const nint m_iszStackName = 0x600; // CUtlSymbolLarge
            public const nint m_iszOperatorName = 0x608; // CUtlSymbolLarge
            public const nint m_iszOpvarName = 0x610; // CUtlSymbolLarge
            public const nint m_iOpvarIndex = 0x618; // int32
            public const nint m_bUseAutoCompare = 0x61C; // bool
            public const nint m_bFastRefresh = 0x61D; // bool
        }
        // Parent: C_BaseEntity
        // Field count: 24
        public static class C_EnvCubemapFog {
            public const nint m_flEndDistance = 0x600; // float32
            public const nint m_flStartDistance = 0x604; // float32
            public const nint m_flFogFalloffExponent = 0x608; // float32
            public const nint m_bHeightFogEnabled = 0x60C; // bool
            public const nint m_flFogHeightWidth = 0x610; // float32
            public const nint m_flFogHeightEnd = 0x614; // float32
            public const nint m_flFogHeightStart = 0x618; // float32
            public const nint m_flFogHeightExponent = 0x61C; // float32
            public const nint m_flLODBias = 0x620; // float32
            public const nint m_bActive = 0x624; // bool
            public const nint m_bStartDisabled = 0x625; // bool
            public const nint m_flFogMaxOpacity = 0x628; // float32
            public const nint m_nCubemapSourceType = 0x62C; // int32
            public const nint m_hSkyMaterial = 0x630; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_iszSkyEntity = 0x638; // CUtlSymbolLarge
            public const nint m_nHeightFogType = 0x640; // int32
            public const nint m_nFogHeightBlendMode = 0x644; // int32
            public const nint m_nFogHeightCoordinateSpace = 0x648; // int32
            public const nint m_nDistanceFogType = 0x64C; // int32
            public const nint m_DistanceFogCurveString = 0x650; // CUtlSymbolLarge
            public const nint m_HeightFogCurveString = 0x658; // CUtlSymbolLarge
            public const nint m_hFogCubemapTexture = 0x6F0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_bHasHeightFogEnd = 0x6F8; // bool
            public const nint m_bFirstTime = 0x6F9; // bool
        }
        // Parent: C_CSGO_TeamSelectCharacterPosition
        // Field count: 0
        public static class C_CSGO_TeamSelectTerroristPosition {
        }
        // Parent: C_ParticleSystem
        // Field count: 5
        public static class C_EnvParticleGlow {
            public const nint m_flAlphaScale = 0x1558; // float32
            public const nint m_flRadiusScale = 0x155C; // float32
            public const nint m_flSelfIllumScale = 0x1560; // float32
            public const nint m_ColorTint = 0x1564; // Color
            public const nint m_hTextureOverride = 0x1568; // CStrongHandle<InfoForResourceTypeCTextureBase>
        }
        // Parent: C_BaseEntity
        // Field count: 0
        public static class CCS_PortraitWorldCallbackHandler {
        }
        // Parent: CPlayerControllerComponent
        // Field count: 9
        public static class CCSPlayerController_InventoryServices {
            public const nint m_vecNetworkableLoadout = 0x40; // CUtlVector<CCSPlayerController_InventoryServices::NetworkedLoadoutSlot_t>
            public const nint m_unMusicID = 0x58; // uint16
            public const nint m_rank = 0x5C; // MedalRank_t[6]
            public const nint m_nPersonaDataPublicLevel = 0x74; // int32
            public const nint m_nPersonaDataPublicCommendsLeader = 0x78; // int32
            public const nint m_nPersonaDataPublicCommendsTeacher = 0x7C; // int32
            public const nint m_nPersonaDataPublicCommendsFriendly = 0x80; // int32
            public const nint m_nPersonaDataXpTrailLevel = 0x84; // int32
            public const nint m_vecServerAuthoritativeWeaponSlots = 0x88; // C_UtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
        }
        // Parent: None
        // Field count: 9
        public static class CCSPlayerModernJump {
            public const nint m_nLastActualJumpPressTick = 0x10; // GameTick_t
            public const nint m_flLastActualJumpPressFrac = 0x14; // float32
            public const nint m_nLastUsableJumpPressTick = 0x18; // GameTick_t
            public const nint m_flLastUsableJumpPressFrac = 0x1C; // float32
            public const nint m_nLastLandedTick = 0x20; // GameTick_t
            public const nint m_flLastLandedFrac = 0x24; // float32
            public const nint m_flLastLandedVelocityX = 0x28; // float32
            public const nint m_flLastLandedVelocityY = 0x2C; // float32
            public const nint m_flLastLandedVelocityZ = 0x30; // float32
        }
        // Parent: None
        // Field count: 1
        public static class C_EconEntity__AttachedModelData_t {
            public const nint m_iModelDisplayFlags = 0x0; // int32
        }
        // Parent: None
        // Field count: 0
        public static class CPulse_ResumePoint {
        }
        // Parent: C_BaseTrigger
        // Field count: 9
        public static class CTriggerFan {
            public const nint m_vFanOriginOffset = 0x1078; // Vector
            public const nint m_vDirection = 0x1084; // Vector
            public const nint m_bPushTowardsInfoTarget = 0x1090; // bool
            public const nint m_bPushAwayFromInfoTarget = 0x1091; // bool
            public const nint m_qNoiseDelta = 0x10A0; // Quaternion
            public const nint m_hInfoFan = 0x10B0; // CHandle<CInfoFan>
            public const nint m_flForce = 0x10B4; // float32
            public const nint m_bFalloff = 0x10B8; // bool
            public const nint m_RampTimer = 0x10C0; // CountdownTimer
        }
        // Parent: CBaseAnimGraph
        // Field count: 0
        public static class C_HostageCarriableProp {
        }
        // Parent: None
        // Field count: 6
        public static class C_BulletHitModel {
            public const nint m_matLocal = 0x1158; // matrix3x4_t
            public const nint m_iBoneIndex = 0x1188; // int32
            public const nint m_hPlayerParent = 0x118C; // CHandle<C_BaseEntity>
            public const nint m_bIsHit = 0x1190; // bool
            public const nint m_flTimeCreated = 0x1194; // float32
            public const nint m_vecStartPos = 0x1198; // Vector
        }
        // Parent: C_FuncBrush
        // Field count: 3
        public static class C_FuncElectrifiedVolume {
            public const nint m_nAmbientEffect = 0xFA8; // ParticleIndex_t
            public const nint m_EffectName = 0xFB0; // CUtlSymbolLarge
            public const nint m_bState = 0xFB8; // bool
        }
        // Parent: C_BaseEntity
        // Field count: 17
        public static class C_MapVetoPickController {
            public const nint m_nDraftType = 0x610; // int32
            public const nint m_nTeamWinningCoinToss = 0x614; // int32
            public const nint m_nTeamWithFirstChoice = 0x618; // int32[64]
            public const nint m_nVoteMapIdsList = 0x718; // int32[7]
            public const nint m_nAccountIDs = 0x734; // int32[64]
            public const nint m_nMapId0 = 0x834; // int32[64]
            public const nint m_nMapId1 = 0x934; // int32[64]
            public const nint m_nMapId2 = 0xA34; // int32[64]
            public const nint m_nMapId3 = 0xB34; // int32[64]
            public const nint m_nMapId4 = 0xC34; // int32[64]
            public const nint m_nMapId5 = 0xD34; // int32[64]
            public const nint m_nStartingSide0 = 0xE34; // int32[64]
            public const nint m_nCurrentPhase = 0xF34; // int32
            public const nint m_nPhaseStartTick = 0xF38; // int32
            public const nint m_nPhaseDurationTicks = 0xF3C; // int32
            public const nint m_nPostDataUpdateTick = 0xF40; // int32
            public const nint m_bDisabledHud = 0xF44; // bool
        }
        // Parent: C_BaseEntity
        // Field count: 18
        public static class C_EnvVolumetricFogVolume {
            public const nint m_bActive = 0x600; // bool
            public const nint m_vBoxMins = 0x604; // Vector
            public const nint m_vBoxMaxs = 0x610; // Vector
            public const nint m_bStartDisabled = 0x61C; // bool
            public const nint m_bIndirectUseLPVs = 0x61D; // bool
            public const nint m_flStrength = 0x620; // float32
            public const nint m_nFalloffShape = 0x624; // int32
            public const nint m_flFalloffExponent = 0x628; // float32
            public const nint m_flHeightFogDepth = 0x62C; // float32
            public const nint m_fHeightFogEdgeWidth = 0x630; // float32
            public const nint m_fIndirectLightStrength = 0x634; // float32
            public const nint m_fSunLightStrength = 0x638; // float32
            public const nint m_fNoiseStrength = 0x63C; // float32
            public const nint m_TintColor = 0x640; // Color
            public const nint m_bOverrideTintColor = 0x644; // bool
            public const nint m_bOverrideIndirectLightStrength = 0x645; // bool
            public const nint m_bOverrideSunLightStrength = 0x646; // bool
            public const nint m_bOverrideNoiseStrength = 0x647; // bool
        }
        // Parent: C_CSGO_TeamPreviewCharacterPosition
        // Field count: 0
        public static class C_CSGO_EndOfMatchCharacterPosition {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseCell_PlaySequence {
            public const nint m_SequenceName = 0x48; // CUtlString
            public const nint m_PulseAnimEvents = 0x50; // PulseNodeDynamicOutflows_t
            public const nint m_OnFinished = 0x68; // CPulse_ResumePoint
            public const nint m_OnCanceled = 0xB0; // CPulse_ResumePoint
        }
        // Parent: None
        // Field count: 0
        public static class C_BaseEntityAPI {
        }
        // Parent: C_BaseModelEntity
        // Field count: 76
        public static class C_BarnLight {
            public const nint m_bEnabled = 0xFA8; // bool
            public const nint m_nColorMode = 0xFAC; // int32
            public const nint m_Color = 0xFB0; // Color
            public const nint m_flColorTemperature = 0xFB4; // float32
            public const nint m_flBrightness = 0xFB8; // float32
            public const nint m_flBrightnessScale = 0xFBC; // float32
            public const nint m_nDirectLight = 0xFC0; // int32
            public const nint m_nBakedShadowIndex = 0xFC4; // int32
            public const nint m_nLightPathUniqueId = 0xFC8; // int32
            public const nint m_nLightMapUniqueId = 0xFCC; // int32
            public const nint m_nLuminaireShape = 0xFD0; // int32
            public const nint m_flLuminaireSize = 0xFD4; // float32
            public const nint m_flLuminaireAnisotropy = 0xFD8; // float32
            public const nint m_LightStyleString = 0xFE0; // CUtlString
            public const nint m_flLightStyleStartTime = 0xFE8; // GameTime_t
            public const nint m_QueuedLightStyleStrings = 0xFF0; // C_NetworkUtlVectorBase<CUtlString>
            public const nint m_LightStyleEvents = 0x1008; // C_NetworkUtlVectorBase<CUtlString>
            public const nint m_LightStyleTargets = 0x1020; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
            public const nint m_StyleEvent = 0x1038; // CEntityIOOutput[4]
            public const nint m_hLightCookie = 0x1098; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_flShape = 0x10A0; // float32
            public const nint m_flSoftX = 0x10A4; // float32
            public const nint m_flSoftY = 0x10A8; // float32
            public const nint m_flSkirt = 0x10AC; // float32
            public const nint m_flSkirtNear = 0x10B0; // float32
            public const nint m_vSizeParams = 0x10B4; // Vector
            public const nint m_flRange = 0x10C0; // float32
            public const nint m_vShear = 0x10C4; // Vector
            public const nint m_nBakeSpecularToCubemaps = 0x10D0; // int32
            public const nint m_vBakeSpecularToCubemapsSize = 0x10D4; // Vector
            public const nint m_flBakeSpecularToCubemapsScale = 0x10E0; // float32
            public const nint m_nCastShadows = 0x10E4; // int32
            public const nint m_nShadowMapSize = 0x10E8; // int32
            public const nint m_nShadowPriority = 0x10EC; // int32
            public const nint m_bContactShadow = 0x10F0; // bool
            public const nint m_bForceShadowsEnabled = 0x10F1; // bool
            public const nint m_nBounceLight = 0x10F4; // int32
            public const nint m_flBounceScale = 0x10F8; // float32
            public const nint m_flMinRoughness = 0x10FC; // float32
            public const nint m_vAlternateColor = 0x1100; // Vector
            public const nint m_fAlternateColorBrightness = 0x110C; // float32
            public const nint m_nFog = 0x1110; // int32
            public const nint m_flFogStrength = 0x1114; // float32
            public const nint m_nFogShadows = 0x1118; // int32
            public const nint m_flFogScale = 0x111C; // float32
            public const nint m_flFadeSizeStart = 0x1120; // float32
            public const nint m_flFadeSizeEnd = 0x1124; // float32
            public const nint m_flShadowFadeSizeStart = 0x1128; // float32
            public const nint m_flShadowFadeSizeEnd = 0x112C; // float32
            public const nint m_bPrecomputedFieldsValid = 0x1130; // bool
            public const nint m_vPrecomputedBoundsMins = 0x1134; // Vector
            public const nint m_vPrecomputedBoundsMaxs = 0x1140; // Vector
            public const nint m_vPrecomputedOBBOrigin = 0x114C; // Vector
            public const nint m_vPrecomputedOBBAngles = 0x1158; // QAngle
            public const nint m_vPrecomputedOBBExtent = 0x1164; // Vector
            public const nint m_nPrecomputedSubFrusta = 0x1170; // int32
            public const nint m_vPrecomputedOBBOrigin0 = 0x1174; // Vector
            public const nint m_vPrecomputedOBBAngles0 = 0x1180; // QAngle
            public const nint m_vPrecomputedOBBExtent0 = 0x118C; // Vector
            public const nint m_vPrecomputedOBBOrigin1 = 0x1198; // Vector
            public const nint m_vPrecomputedOBBAngles1 = 0x11A4; // QAngle
            public const nint m_vPrecomputedOBBExtent1 = 0x11B0; // Vector
            public const nint m_vPrecomputedOBBOrigin2 = 0x11BC; // Vector
            public const nint m_vPrecomputedOBBAngles2 = 0x11C8; // QAngle
            public const nint m_vPrecomputedOBBExtent2 = 0x11D4; // Vector
            public const nint m_vPrecomputedOBBOrigin3 = 0x11E0; // Vector
            public const nint m_vPrecomputedOBBAngles3 = 0x11EC; // QAngle
            public const nint m_vPrecomputedOBBExtent3 = 0x11F8; // Vector
            public const nint m_vPrecomputedOBBOrigin4 = 0x1204; // Vector
            public const nint m_vPrecomputedOBBAngles4 = 0x1210; // QAngle
            public const nint m_vPrecomputedOBBExtent4 = 0x121C; // Vector
            public const nint m_vPrecomputedOBBOrigin5 = 0x1228; // Vector
            public const nint m_vPrecomputedOBBAngles5 = 0x1234; // QAngle
            public const nint m_vPrecomputedOBBExtent5 = 0x1240; // Vector
            public const nint m_bInitialBoneSetup = 0x1290; // bool
            public const nint m_VisClusters = 0x1298; // C_NetworkUtlVectorBase<uint16>
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_LerpCameraSettings {
            public const nint m_flSeconds = 0x90; // float32
            public const nint m_Start = 0x94; // PointCameraSettings_t
            public const nint m_End = 0xA4; // PointCameraSettings_t
        }
        // Parent: C_PointClientUIWorldPanel
        // Field count: 4
        public static class CPointOffScreenIndicatorUi {
            public const nint m_bBeenEnabled = 0x1200; // bool
            public const nint m_bHide = 0x1201; // bool
            public const nint m_flSeenTargetTime = 0x1204; // float32
            public const nint m_pTargetPanel = 0x1208; // C_PointClientUIWorldPanel*
        }
        // Parent: CPlayer_UseServices
        // Field count: 0
        public static class CCSObserver_UseServices {
        }
        // Parent: C_BaseTrigger
        // Field count: 12
        public static class C_PostProcessingVolume {
            public const nint m_hPostSettings = 0x1088; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
            public const nint m_flFadeDuration = 0x1090; // float32
            public const nint m_flMinLogExposure = 0x1094; // float32
            public const nint m_flMaxLogExposure = 0x1098; // float32
            public const nint m_flMinExposure = 0x109C; // float32
            public const nint m_flMaxExposure = 0x10A0; // float32
            public const nint m_flExposureCompensation = 0x10A4; // float32
            public const nint m_flExposureFadeSpeedUp = 0x10A8; // float32
            public const nint m_flExposureFadeSpeedDown = 0x10AC; // float32
            public const nint m_flTonemapEVSmoothingRange = 0x10B0; // float32
            public const nint m_bMaster = 0x10B4; // bool
            public const nint m_bExposureControl = 0x10B5; // bool
        }
        // Parent: CPlayer_UseServices
        // Field count: 0
        public static class CCSPlayer_UseServices {
        }
        // Parent: None
        // Field count: 5
        public static class C_BaseModelEntity__Emphasized_Phoneme {
            public const nint m_sClassName = 0x0; // CUtlString
            public const nint m_flAmount = 0x18; // float32
            public const nint m_bRequired = 0x1C; // bool
            public const nint m_bBasechecked = 0x1D; // bool
            public const nint m_bValid = 0x1E; // bool
        }
        // Parent: C_CSGO_TeamPreviewCamera
        // Field count: 0
        public static class C_CSGO_CounterTerroristWingmanIntroCamera {
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
        public static class CPulseCell_PickBestOutflowSelector {
            public const nint m_nCheckType = 0x48; // PulseBestOutflowRules_t
            public const nint m_OutflowList = 0x50; // PulseSelectorOutflowList_t
        }
        // Parent: C_PointEntity
        // Field count: 4
        public static class CInfoFan {
            public const nint m_fFanForceMaxRadius = 0x640; // float32
            public const nint m_fFanForceMinRadius = 0x644; // float32
            public const nint m_flCurveDistRange = 0x648; // float32
            public const nint m_FanForceCurveString = 0x650; // CUtlSymbolLarge
        }
        // Parent: C_BaseEntity
        // Field count: 7
        public static class C_VoteController {
            public const nint m_iActiveIssueIndex = 0x610; // int32
            public const nint m_iOnlyTeamToVote = 0x614; // int32
            public const nint m_nVoteOptionCount = 0x618; // int32[5]
            public const nint m_nPotentialVotes = 0x62C; // int32
            public const nint m_bVotesDirty = 0x630; // bool
            public const nint m_bTypeDirty = 0x631; // bool
            public const nint m_bIsYesNoVote = 0x632; // bool
        }
        // Parent: C_CSWeaponBase
        // Field count: 10
        public static class C_C4 {
            public const nint m_activeLightParticleIndex = 0x1CB0; // ParticleIndex_t
            public const nint m_eActiveLightEffect = 0x1CB4; // C4LightEffect_t
            public const nint m_bStartedArming = 0x1CB8; // bool
            public const nint m_fArmedTime = 0x1CBC; // GameTime_t
            public const nint m_bBombPlacedAnimation = 0x1CC0; // bool
            public const nint m_bIsPlantingViaUse = 0x1CC1; // bool
            public const nint m_entitySpottedState = 0x1CC8; // EntitySpottedState_t
            public const nint m_nSpotRules = 0x1CE0; // int32
            public const nint m_bPlayedArmingBeeps = 0x1CE4; // bool[7]
            public const nint m_bBombPlanted = 0x1CEB; // bool
        }
        // Parent: C_BasePlayerPawn
        // Field count: 26
        public static class C_CSPlayerPawnBase {
            public const nint m_pPingServices = 0x13C8; // CCSPlayer_PingServices*
            public const nint m_previousPlayerState = 0x13D0; // CSPlayerState
            public const nint m_iPlayerState = 0x13D4; // CSPlayerState
            public const nint m_bHasMovedSinceSpawn = 0x13D8; // bool
            public const nint m_flLastSpawnTimeIndex = 0x13DC; // GameTime_t
            public const nint m_iProgressBarDuration = 0x13E0; // int32
            public const nint m_flProgressBarStartTime = 0x13E4; // float32
            public const nint m_flClientDeathTime = 0x13E8; // GameTime_t
            public const nint m_flFlashBangTime = 0x13EC; // float32
            public const nint m_flFlashScreenshotAlpha = 0x13F0; // float32
            public const nint m_flFlashOverlayAlpha = 0x13F4; // float32
            public const nint m_bFlashBuildUp = 0x13F8; // bool
            public const nint m_bFlashDspHasBeenCleared = 0x13F9; // bool
            public const nint m_bFlashScreenshotHasBeenGrabbed = 0x13FA; // bool
            public const nint m_flFlashMaxAlpha = 0x13FC; // float32
            public const nint m_flFlashDuration = 0x1400; // float32
            public const nint m_flClientHealthFadeChangeTimestamp = 0x1404; // GameTime_t
            public const nint m_nClientHealthFadeParityValue = 0x1408; // int32
            public const nint m_fNextThinkPushAway = 0x140C; // float32
            public const nint m_flCurrentMusicStartTime = 0x1414; // float32
            public const nint m_flMusicRoundStartTime = 0x1418; // float32
            public const nint m_bDeferStartMusicOnWarmup = 0x141C; // bool
            public const nint m_flLastSmokeOverlayAlpha = 0x1420; // float32
            public const nint m_flLastSmokeAge = 0x1424; // float32
            public const nint m_vLastSmokeOverlayColor = 0x1428; // Vector
            public const nint m_hOriginalController = 0x1450; // CHandle<CCSPlayerController>
        }
        // Parent: CBaseProp
        // Field count: 29
        public static class C_BreakableProp {
            public const nint m_CPropDataComponent = 0x1190; // CPropDataComponent
            public const nint m_OnStartDeath = 0x11D0; // CEntityIOOutput
            public const nint m_OnBreak = 0x11E8; // CEntityIOOutput
            public const nint m_OnHealthChanged = 0x1200; // CEntityOutputTemplate<float32>
            public const nint m_OnTakeDamage = 0x1220; // CEntityIOOutput
            public const nint m_impactEnergyScale = 0x1238; // float32
            public const nint m_iMinHealthDmg = 0x123C; // int32
            public const nint m_flPressureDelay = 0x1240; // float32
            public const nint m_flDefBurstScale = 0x1244; // float32
            public const nint m_vDefBurstOffset = 0x1248; // Vector
            public const nint m_hBreaker = 0x1254; // CHandle<C_BaseEntity>
            public const nint m_PerformanceMode = 0x1258; // PerformanceMode_t
            public const nint m_flPreventDamageBeforeTime = 0x125C; // GameTime_t
            public const nint m_BreakableContentsType = 0x1260; // BreakableContentsType_t
            public const nint m_strBreakableContentsPropGroupOverride = 0x1268; // CUtlString
            public const nint m_strBreakableContentsParticleOverride = 0x1270; // CUtlString
            public const nint m_bHasBreakPiecesOrCommands = 0x1278; // bool
            public const nint m_explodeDamage = 0x127C; // float32
            public const nint m_explodeRadius = 0x1280; // float32
            public const nint m_sExplosionType = 0x1288; // CGlobalSymbol
            public const nint m_explosionDelay = 0x1290; // float32
            public const nint m_explosionBuildupSound = 0x1298; // CUtlSymbolLarge
            public const nint m_explosionCustomEffect = 0x12A0; // CUtlSymbolLarge
            public const nint m_explosionCustomSound = 0x12A8; // CUtlSymbolLarge
            public const nint m_explosionModifier = 0x12B0; // CUtlSymbolLarge
            public const nint m_hPhysicsAttacker = 0x12B8; // CHandle<C_BasePlayerPawn>
            public const nint m_flLastPhysicsInfluenceTime = 0x12BC; // GameTime_t
            public const nint m_flDefaultFadeScale = 0x12C0; // float32
            public const nint m_hLastAttacker = 0x12C4; // CHandle<C_BaseEntity>
        }
        // Parent: CCSGO_WingmanIntroCharacterPosition
        // Field count: 0
        public static class CCSGO_WingmanIntroTerroristPosition {
        }
        // Parent: None
        // Field count: 9
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
            public const nint m_nUseSnapshotFromSurfaceGraph = 0x128; // int32
            public const nint m_snapshotFilter = 0x12C; // PrecipitationFilter_t
        }
        // Parent: None
        // Field count: 6
        public static class C_RetakeGameRules {
            public const nint m_nMatchSeed = 0x138; // int32
            public const nint m_bBlockersPresent = 0x13C; // bool
            public const nint m_bRoundInProgress = 0x13D; // bool
            public const nint m_iFirstSecondHalfRound = 0x140; // int32
            public const nint m_iBombSite = 0x144; // int32
            public const nint m_hBombPlanter = 0x148; // CHandle<C_CSPlayerPawn>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPulseEditorHeaderIcon
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseCell_WaitForObservable {
            public const nint m_Condition = 0x48; // PulseObservableBoolExpression_t
            public const nint m_OnTrue = 0xC0; // CPulse_ResumePoint
        }
        // Parent: C_SoundAreaEntityBase
        // Field count: 1
        public static class C_SoundAreaEntitySphere {
            public const nint m_flRadius = 0x628; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Step_EntFire {
            public const nint m_Input = 0x48; // CUtlString
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponAWP {
        }
        // Parent: C_BaseToggle
        // Field count: 3
        public static class C_BaseButton {
            public const nint m_glowEntity = 0xFA8; // CHandle<C_BaseModelEntity>
            public const nint m_usable = 0xFAC; // bool
            public const nint m_szDisplayText = 0xFB0; // CUtlSymbolLarge
        }
        // Parent: CPlayer_ObserverServices
        // Field count: 1
        public static class CCSObserver_ObserverServices {
            public const nint m_obsInterpState = 0x64; // ObserverInterpState_t
        }
        // Parent: CEntityComponent
        // Field count: 1
        public static class CHitboxComponent {
            public const nint m_flBoundsExpandRadius = 0x14; // float32
        }
        // Parent: None
        // Field count: 3
        public static class ServerAuthoritativeWeaponSlot_t {
            public const nint unClass = 0x30; // uint16
            public const nint unSlot = 0x32; // uint16
            public const nint unItemDefIdx = 0x34; // uint16
        }
        // Parent: C_BaseEntity
        // Field count: 0
        public static class C_CSMinimapBoundary {
        }
        // Parent: CEntityComponent
        // Field count: 0
        public static class CPathQueryComponent {
        }
        // Parent: C_BaseTrigger
        // Field count: 8
        public static class C_Precipitation {
            public const nint m_flDensity = 0x1078; // float32
            public const nint m_flParticleInnerDist = 0x1088; // float32
            public const nint m_pParticleDef = 0x1090; // char*
            public const nint m_tParticlePrecipTraceTimer = 0x109C; // TimedEvent[1]
            public const nint m_bActiveParticlePrecipEmitter = 0x10A4; // bool[1]
            public const nint m_bParticlePrecipInitialized = 0x10A5; // bool
            public const nint m_bHasSimulatedSinceLastSceneObjectUpdate = 0x10A6; // bool
            public const nint m_nAvailableSheetSequencesMaxIndex = 0x10A8; // int32
        }
        // Parent: CLogicalEntity
        // Field count: 7
        public static class CLogicRelay {
            public const nint m_OnSpawn = 0x600; // CEntityIOOutput
            public const nint m_OnTrigger = 0x618; // CEntityIOOutput
            public const nint m_bDisabled = 0x630; // bool
            public const nint m_bWaitForRefire = 0x631; // bool
            public const nint m_bTriggerOnce = 0x632; // bool
            public const nint m_bFastRetrigger = 0x633; // bool
            public const nint m_bPassthoughCaller = 0x634; // bool
        }
        // Parent: None
        // Field count: 6
        public static class SequenceHistory_t {
            public const nint m_hSequence = 0x0; // HSequence
            public const nint m_flSeqStartTime = 0x4; // GameTime_t
            public const nint m_flSeqFixedCycle = 0x8; // float32
            public const nint m_nSeqLoopMode = 0xC; // AnimLoopMode_t
            public const nint m_flPlaybackRate = 0x10; // float32
            public const nint m_flCyclesPerSecond = 0x14; // float32
        }
        // Parent: CPlayerPawnComponent
        // Field count: 0
        public static class CPlayer_ItemServices {
        }
        // Parent: None
        // Field count: 4
        public static class CPulse_OutflowConnection {
            public const nint m_SourceOutflowName = 0x0; // PulseSymbol_t
            public const nint m_nDestChunk = 0x10; // PulseRuntimeChunkIndex_t
            public const nint m_nInstruction = 0x14; // int32
            public const nint m_OutflowRegisterMap = 0x18; // PulseRegisterMap_t
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponUMP45 {
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponG3SG1 {
        }
        // Parent: C_BaseModelEntity
        // Field count: 2
        public static class C_SpotlightEnd {
            public const nint m_flLightScale = 0xFA8; // float32
            public const nint m_Radius = 0xFAC; // float32
        }
        // Parent: CBaseAnimGraph
        // Field count: 23
        public static class C_Fish {
            public const nint m_pos = 0x1158; // Vector
            public const nint m_vel = 0x1164; // Vector
            public const nint m_angles = 0x1170; // QAngle
            public const nint m_localLifeState = 0x117C; // int32
            public const nint m_deathDepth = 0x1180; // float32
            public const nint m_deathAngle = 0x1184; // float32
            public const nint m_buoyancy = 0x1188; // float32
            public const nint m_wiggleTimer = 0x1190; // CountdownTimer
            public const nint m_wigglePhase = 0x11A8; // float32
            public const nint m_wiggleRate = 0x11AC; // float32
            public const nint m_actualPos = 0x11B0; // Vector
            public const nint m_actualAngles = 0x11BC; // QAngle
            public const nint m_poolOrigin = 0x11C8; // Vector
            public const nint m_waterLevel = 0x11D4; // float32
            public const nint m_gotUpdate = 0x11D8; // bool
            public const nint m_x = 0x11DC; // float32
            public const nint m_y = 0x11E0; // float32
            public const nint m_z = 0x11E4; // float32
            public const nint m_angle = 0x11E8; // float32
            public const nint m_errorHistory = 0x11EC; // float32[20]
            public const nint m_errorHistoryIndex = 0x123C; // int32
            public const nint m_errorHistoryCount = 0x1240; // int32
            public const nint m_averageError = 0x1244; // float32
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponFamas {
        }
        // Parent: C_BaseEntity
        // Field count: 36
        public static class C_EnvVolumetricFogController {
            public const nint m_flScattering = 0x600; // float32
            public const nint m_TintColor = 0x604; // Color
            public const nint m_flAnisotropy = 0x608; // float32
            public const nint m_flFadeSpeed = 0x60C; // float32
            public const nint m_flDrawDistance = 0x610; // float32
            public const nint m_flFadeInStart = 0x614; // float32
            public const nint m_flFadeInEnd = 0x618; // float32
            public const nint m_flIndirectStrength = 0x61C; // float32
            public const nint m_nVolumeDepth = 0x620; // int32
            public const nint m_fFirstVolumeSliceThickness = 0x624; // float32
            public const nint m_nIndirectTextureDimX = 0x628; // int32
            public const nint m_nIndirectTextureDimY = 0x62C; // int32
            public const nint m_nIndirectTextureDimZ = 0x630; // int32
            public const nint m_vBoxMins = 0x634; // Vector
            public const nint m_vBoxMaxs = 0x640; // Vector
            public const nint m_bActive = 0x64C; // bool
            public const nint m_flStartAnisoTime = 0x650; // GameTime_t
            public const nint m_flStartScatterTime = 0x654; // GameTime_t
            public const nint m_flStartDrawDistanceTime = 0x658; // GameTime_t
            public const nint m_flStartAnisotropy = 0x65C; // float32
            public const nint m_flStartScattering = 0x660; // float32
            public const nint m_flStartDrawDistance = 0x664; // float32
            public const nint m_flDefaultAnisotropy = 0x668; // float32
            public const nint m_flDefaultScattering = 0x66C; // float32
            public const nint m_flDefaultDrawDistance = 0x670; // float32
            public const nint m_bStartDisabled = 0x674; // bool
            public const nint m_bEnableIndirect = 0x675; // bool
            public const nint m_bIsMaster = 0x676; // bool
            public const nint m_hFogIndirectTexture = 0x678; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_nForceRefreshCount = 0x680; // int32
            public const nint m_fNoiseSpeed = 0x684; // float32
            public const nint m_fNoiseStrength = 0x688; // float32
            public const nint m_vNoiseScale = 0x68C; // Vector
            public const nint m_fWindSpeed = 0x698; // float32
            public const nint m_vWindDirection = 0x69C; // Vector
            public const nint m_bFirstTime = 0x6A8; // bool
        }
        // Parent: None
        // Field count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseGraphDef {
            public const nint m_DomainIdentifier = 0x8; // PulseSymbol_t
            public const nint m_DomainSubType = 0x18; // CPulseValueFullType
            public const nint m_ParentMapName = 0x30; // PulseSymbol_t
            public const nint m_ParentXmlName = 0x40; // PulseSymbol_t
            public const nint m_Chunks = 0x50; // CUtlVector<CPulse_Chunk*>
            public const nint m_Cells = 0x68; // CUtlVector<CPulseCell_Base*>
            public const nint m_Vars = 0x80; // CUtlVector<CPulse_Variable>
            public const nint m_PublicOutputs = 0x98; // CUtlVector<CPulse_PublicOutput>
            public const nint m_InvokeBindings = 0xB0; // CUtlVector<CPulse_InvokeBinding*>
            public const nint m_CallInfos = 0xC8; // CUtlVector<CPulse_CallInfo*>
            public const nint m_Constants = 0xE0; // CUtlVector<CPulse_Constant>
            public const nint m_DomainValues = 0xF8; // CUtlVector<CPulse_DomainValue>
            public const nint m_BlackboardReferences = 0x110; // CUtlVector<CPulse_BlackboardReference>
            public const nint m_OutputConnections = 0x128; // CUtlVector<CPulse_OutputConnection*>
        }
        // Parent: C_BaseEntity
        // Field count: 2
        public static class C_EnvDetailController {
            public const nint m_flFadeStartDist = 0x600; // float32
            public const nint m_flFadeEndDist = 0x604; // float32
        }
        // Parent: C_BaseEntity
        // Field count: 9
        public static class C_EnvWindVolume {
            public const nint m_bActive = 0x600; // bool
            public const nint m_vBoxMins = 0x604; // Vector
            public const nint m_vBoxMaxs = 0x610; // Vector
            public const nint m_bStartDisabled = 0x61C; // bool
            public const nint m_nShape = 0x620; // int32
            public const nint m_fWindSpeedMultiplier = 0x624; // float32
            public const nint m_fWindTurbulenceMultiplier = 0x628; // float32
            public const nint m_fWindSpeedVariationMultiplier = 0x62C; // float32
            public const nint m_fWindDirectionVariationMultiplier = 0x630; // float32
        }
        // Parent: None
        // Field count: 0
        public static class CBasePlayerControllerAPI {
        }
        // Parent: C_BaseTrigger
        // Field count: 0
        public static class CHostageRescueZoneShim {
        }
        // Parent: CEnvSoundscape
        // Field count: 0
        public static class CEnvSoundscapeAlias_snd_soundscape {
        }
        // Parent: CPlayerPawnComponent
        // Field count: 2
        public static class CCSPlayer_HostageServices {
            public const nint m_hCarriedHostage = 0x48; // CHandle<C_BaseEntity>
            public const nint m_hCarriedHostageProp = 0x4C; // CHandle<C_BaseEntity>
        }
        // Parent: C_BaseEntity
        // Field count: 0
        public static class C_GameRulesProxy {
        }
        // Parent: CEntityComponent
        // Field count: 5
        public static class CRenderComponent {
            public const nint __m_pChainEntity = 0x10; // CNetworkVarChainer
            public const nint m_bIsRenderingWithViewModels = 0x50; // bool
            public const nint m_nSplitscreenFlags = 0x54; // uint32
            public const nint m_bEnableRendering = 0x58; // bool
            public const nint m_bInterpolationReadyToDraw = 0xA8; // bool
        }
        // Parent: C_BaseEntity
        // Field count: 4
        public static class C_Team {
            public const nint m_aPlayerControllers = 0x600; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
            public const nint m_aPlayers = 0x618; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
            public const nint m_iScore = 0x630; // int32
            public const nint m_szTeamname = 0x634; // char[129]
        }
        // Parent: C_PathParticleRope
        // Field count: 0
        public static class C_PathParticleRopeAlias_path_particle_rope_clientside {
        }
        // Parent: C_PointEntity
        // Field count: 1
        public static class CPointChildModifier {
            public const nint m_bOrphanInsteadOfDeletingChildrenOnRemove = 0x600; // bool
        }
        // Parent: None
        // Field count: 2
        public static class CCSPlayerLegacyJump {
            public const nint m_bOldJumpPressed = 0x10; // bool
            public const nint m_flJumpPressedTime = 0x14; // float32
        }
        // Parent: C_CSWeaponBaseShotgun
        // Field count: 0
        public static class C_WeaponNOVA {
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_DEagle {
        }
        // Parent: C_LateUpdatedAnimating
        // Field count: 0
        public static class C_CS2HudModelAddon {
        }
        // Parent: C_BaseTrigger
        // Field count: 0
        public static class C_TriggerMultiple {
        }
        // Parent: C_CSGO_MapPreviewCameraPath
        // Field count: 1
        public static class C_CSGO_TeamPreviewCamera {
            public const nint m_nVariant = 0x688; // int32
        }
        // Parent: C_BaseTrigger
        // Field count: 9
        public static class C_ColorCorrectionVolume {
            public const nint m_LastEnterWeight = 0x1078; // float32
            public const nint m_LastEnterTime = 0x107C; // GameTime_t
            public const nint m_LastExitWeight = 0x1080; // float32
            public const nint m_LastExitTime = 0x1084; // GameTime_t
            public const nint m_bEnabled = 0x1088; // bool
            public const nint m_MaxWeight = 0x108C; // float32
            public const nint m_FadeDuration = 0x1090; // float32
            public const nint m_Weight = 0x1094; // float32
            public const nint m_lookupFilename = 0x1098; // char[512]
        }
        // Parent: CPlayerPawnComponent
        // Field count: 18
        public static class CPlayer_MovementServices {
            public const nint m_nImpulse = 0x48; // int32
            public const nint m_nButtons = 0x50; // CInButtonState
            public const nint m_nQueuedButtonDownMask = 0x70; // uint64
            public const nint m_nQueuedButtonChangeMask = 0x78; // uint64
            public const nint m_nButtonDoublePressed = 0x80; // uint64
            public const nint m_pButtonPressedCmdNumber = 0x88; // uint32[64]
            public const nint m_nLastCommandNumberProcessed = 0x188; // uint32
            public const nint m_nToggleButtonDownMask = 0x190; // uint64
            public const nint m_flCmdForwardMove = 0x1A0; // float32
            public const nint m_flCmdLeftMove = 0x1A4; // float32
            public const nint m_flCmdUpMove = 0x1A8; // float32
            public const nint m_flMaxspeed = 0x1AC; // float32
            public const nint m_arrForceSubtickMoveWhen = 0x1B0; // float32[4]
            public const nint m_flForwardMove = 0x1C0; // float32
            public const nint m_flLeftMove = 0x1C4; // float32
            public const nint m_flUpMove = 0x1C8; // float32
            public const nint m_vecLastMovementImpulses = 0x1CC; // Vector
            public const nint m_vecOldViewAngles = 0x240; // QAngle
        }
        // Parent: CInfoDynamicShadowHint
        // Field count: 2
        public static class CInfoDynamicShadowHintBox {
            public const nint m_vBoxMins = 0x618; // Vector
            public const nint m_vBoxMaxs = 0x624; // Vector
        }
        // Parent: CSkeletonAnimationController
        // Field count: 32
        public static class CBaseAnimGraphController {
            public const nint m_nAnimationAlgorithm = 0x18; // AnimationAlgorithm_t
            public const nint m_nNextExternalGraphHandle = 0x1C; // ExternalAnimGraphHandle_t
            public const nint m_vecSecondarySkeletonSlotIDs = 0x20; // C_NetworkUtlVectorBase<CGlobalSymbol>
            public const nint m_vecSecondarySkeletons = 0x38; // C_NetworkUtlVectorBase<CHandle<CBaseAnimGraph>>
            public const nint m_nSecondarySkeletonMasterCount = 0x50; // int32
            public const nint m_flSoundSyncTime = 0x58; // float32
            public const nint m_nActiveIKChainMask = 0x5C; // uint32
            public const nint m_hSequence = 0xB0; // HSequence
            public const nint m_flSeqStartTime = 0xB4; // GameTime_t
            public const nint m_flSeqFixedCycle = 0xB8; // float32
            public const nint m_nAnimLoopMode = 0xBC; // AnimLoopMode_t
            public const nint m_flPlaybackRate = 0xC0; // CNetworkedQuantizedFloat
            public const nint m_nNotifyState = 0xCC; // SequenceFinishNotifyState_t
            public const nint m_bNetworkedAnimationInputsChanged = 0xCD; // bool
            public const nint m_bNetworkedSequenceChanged = 0xCE; // bool
            public const nint m_bLastUpdateSkipped = 0xCF; // bool
            public const nint m_bSequenceFinished = 0xD0; // bool
            public const nint m_nPrevAnimUpdateTick = 0xD4; // GameTick_t
            public const nint m_hGraphDefinitionAG2 = 0x370; // CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
            public const nint m_SerializePoseRecipeAG2Slots = 0x378; // C_UtlVectorEmbeddedNetworkVar<AnimGraph2SerializedPoseRecipeSlot_t>
            public const nint m_SerializePoseRecipeAG2Dynamic = 0x3E0; // C_NetworkUtlVectorBase<uint8>
            public const nint m_nSerializePoseRecipeAG2ActiveSlot = 0x3F8; // uint32
            public const nint m_nSerializePoseRecipeVersionAG2 = 0x3FC; // int32
            public const nint m_nServerGraphInstanceIteration = 0x400; // int32
            public const nint m_nServerSerializationContextIteration = 0x404; // int32
            public const nint m_primaryGraphId = 0x408; // ResourceId_t
            public const nint m_vecExternalGraphIds = 0x410; // C_NetworkUtlVectorBase<ResourceId_t>
            public const nint m_vecExternalClipIds = 0x428; // C_NetworkUtlVectorBase<ResourceId_t>
            public const nint m_sAnimGraph2Identifier = 0x440; // CGlobalSymbol
            public const nint m_pGraphInstanceAG2 = 0x448; // CNmGraphInstance*
            public const nint m_vecExternalGraphs = 0x660; // CUtlVector<ExternalAnimGraph_t>
            public const nint m_nPrevAnimationAlgorithm = 0x689; // AnimationAlgorithm_t
        }
        // Parent: C_BaseEntity
        // Field count: 18
        public static class C_ColorCorrection {
            public const nint m_vecOrigin = 0x600; // Vector
            public const nint m_MinFalloff = 0x60C; // float32
            public const nint m_MaxFalloff = 0x610; // float32
            public const nint m_flFadeInDuration = 0x614; // float32
            public const nint m_flFadeOutDuration = 0x618; // float32
            public const nint m_flMaxWeight = 0x61C; // float32
            public const nint m_flCurWeight = 0x620; // float32
            public const nint m_netlookupFilename = 0x624; // char[512]
            public const nint m_bEnabled = 0x824; // bool
            public const nint m_bMaster = 0x825; // bool
            public const nint m_bClientSide = 0x826; // bool
            public const nint m_bExclusive = 0x827; // bool
            public const nint m_bEnabledOnClient = 0x828; // bool[1]
            public const nint m_flCurWeightOnClient = 0x82C; // float32[1]
            public const nint m_bFadingIn = 0x830; // bool[1]
            public const nint m_flFadeStartWeight = 0x834; // float32[1]
            public const nint m_flFadeStartTime = 0x838; // float32[1]
            public const nint m_flFadeDuration = 0x83C; // float32[1]
        }
        // Parent: None
        // Field count: 1
        public static class AnimGraph2SerializedPoseRecipeSlot_t {
            public const nint m_topology = 0x30; // CUtlBinaryBlock
        }
        // Parent: None
        // Field count: 11
        public static class CBuoyancyHelper {
            public const nint m_pController = 0x8; // IPhysicsMotionController*
            public const nint m_nFluidType = 0x18; // CUtlStringToken
            public const nint m_flFluidDensity = 0x1C; // float32
            public const nint m_flNeutrallyBuoyantGravity = 0x20; // float32
            public const nint m_flNeutrallyBuoyantLinearDamping = 0x24; // float32
            public const nint m_flNeutrallyBuoyantAngularDamping = 0x28; // float32
            public const nint m_bNeutrallyBuoyant = 0x2C; // bool
            public const nint m_vecFractionOfWheelSubmergedForWheelFriction = 0x30; // CUtlVector<float32>
            public const nint m_vecWheelFrictionScales = 0x48; // CUtlVector<float32>
            public const nint m_vecFractionOfWheelSubmergedForWheelDrag = 0x60; // CUtlVector<float32>
            public const nint m_vecWheelDrag = 0x78; // CUtlVector<float32>
        }
        // Parent: C_Breakable
        // Field count: 0
        public static class C_PhysBox {
        }
        // Parent: CCSPlayerBase_CameraServices
        // Field count: 2
        public static class CCSPlayer_CameraServices {
            public const nint m_flDeathCamTilt = 0x2A8; // float32
            public const nint m_vClientScopeInaccuracy = 0x2B0; // Vector
        }
        // Parent: CBaseFilter
        // Field count: 3
        public static class CFilterMultiple {
            public const nint m_nFilterType = 0x638; // filter_t
            public const nint m_iFilterName = 0x640; // CUtlSymbolLarge[10]
            public const nint m_hFilter = 0x690; // CHandle<C_BaseEntity>[10]
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_FireCursors {
            public const nint m_Outflows = 0x48; // CUtlVector<CPulse_OutflowConnection>
            public const nint m_bWaitForChildOutflows = 0x60; // bool
            public const nint m_OnFinished = 0x68; // CPulse_ResumePoint
            public const nint m_OnCanceled = 0xB0; // CPulse_ResumePoint
        }
        // Parent: C_BaseEntity
        // Field count: 11
        public static class CEnvSoundscape {
            public const nint m_OnPlay = 0x600; // CEntityIOOutput
            public const nint m_flRadius = 0x618; // float32
            public const nint m_soundEventName = 0x620; // CUtlSymbolLarge
            public const nint m_bOverrideWithEvent = 0x628; // bool
            public const nint m_soundscapeIndex = 0x62C; // int32
            public const nint m_soundscapeEntityListId = 0x630; // int32
            public const nint m_positionNames = 0x638; // CUtlSymbolLarge[8]
            public const nint m_hProxySoundscape = 0x678; // CHandle<CEnvSoundscape>
            public const nint m_bDisabled = 0x67C; // bool
            public const nint m_soundscapeName = 0x680; // CUtlSymbolLarge
            public const nint m_soundEventHash = 0x688; // uint32
        }
        // Parent: C_SoundEventEntity
        // Field count: 0
        public static class C_SoundEventEntityAlias_snd_event_point {
        }
        // Parent: C_BaseEntity
        // Field count: 3
        public static class C_FogController {
            public const nint m_fog = 0x600; // fogparams_t
            public const nint m_bUseAngles = 0x668; // bool
            public const nint m_iChangedVariables = 0x66C; // int32
        }
        // Parent: C_SoundOpvarSetPointBase
        // Field count: 0
        public static class C_SoundOpvarSetOBBWindEntity {
        }
        // Parent: C_BaseCSGrenade
        // Field count: 0
        public static class C_MolotovGrenade {
        }
        // Parent: C_BaseCombatCharacter
        // Field count: 0
        public static class C_NetTestBaseCombatCharacter {
        }
        // Parent: CBodyComponent
        // Field count: 1
        public static class CBodyComponentPoint {
            public const nint m_sceneNode = 0x80; // CGameSceneNode
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponM4A1Silencer {
        }
        // Parent: None
        // Field count: 29
        public static class C_EconItemView {
            public const nint m_bInventoryImageRgbaRequested = 0x60; // bool
            public const nint m_bInventoryImageTriedCache = 0x61; // bool
            public const nint m_nInventoryImageRgbaWidth = 0x80; // int32
            public const nint m_nInventoryImageRgbaHeight = 0x84; // int32
            public const nint m_szCurrentLoadCachedFileName = 0x88; // char[260]
            public const nint m_bRestoreCustomMaterialAfterPrecache = 0x1B8; // bool
            public const nint m_iItemDefinitionIndex = 0x1BA; // uint16
            public const nint m_iEntityQuality = 0x1BC; // int32
            public const nint m_iEntityLevel = 0x1C0; // uint32
            public const nint m_iItemID = 0x1C8; // uint64
            public const nint m_iItemIDHigh = 0x1D0; // uint32
            public const nint m_iItemIDLow = 0x1D4; // uint32
            public const nint m_iAccountID = 0x1D8; // uint32
            public const nint m_iInventoryPosition = 0x1DC; // uint32
            public const nint m_bInitialized = 0x1E8; // bool
            public const nint m_bDisallowSOC = 0x1E9; // bool
            public const nint m_bIsStoreItem = 0x1EA; // bool
            public const nint m_bIsTradeItem = 0x1EB; // bool
            public const nint m_iEntityQuantity = 0x1EC; // int32
            public const nint m_iRarityOverride = 0x1F0; // int32
            public const nint m_iQualityOverride = 0x1F4; // int32
            public const nint m_iOriginOverride = 0x1F8; // int32
            public const nint m_ubStyleOverride = 0x1FC; // uint8
            public const nint m_unClientFlags = 0x1FD; // uint8
            public const nint m_AttributeList = 0x208; // CAttributeList
            public const nint m_NetworkedDynamicAttributes = 0x280; // CAttributeList
            public const nint m_szCustomName = 0x2F8; // char[161]
            public const nint m_szCustomNameOverride = 0x399; // char[161]
            public const nint m_bInitializedTags = 0x468; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Timeline__TimelineEvent_t {
            public const nint m_flTimeFromPrevious = 0x0; // float32
            public const nint m_EventOutflow = 0x8; // CPulse_OutflowConnection
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_IntervalTimer__CursorState_t {
            public const nint m_StartTime = 0x0; // GameTime_t
            public const nint m_EndTime = 0x4; // GameTime_t
            public const nint m_flWaitInterval = 0x8; // float32
            public const nint m_flWaitIntervalHigh = 0xC; // float32
            public const nint m_bCompleteOnNextWake = 0x10; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseRequirement {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPulseEditorHeaderIcon
        public static class CPulseCell_BaseState {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class OutflowWithRequirements_t {
            public const nint m_Connection = 0x0; // CPulse_OutflowConnection
            public const nint m_DestinationFlowNodeID = 0x48; // PulseDocNodeID_t
            public const nint m_RequirementNodeIDs = 0x50; // CUtlVector<PulseDocNodeID_t>
            public const nint m_nCursorStateBlockIndex = 0x68; // CUtlVector<int32>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_IsRequirementValid {
        }
        // Parent: C_SoundEventEntity
        // Field count: 1
        public static class C_SoundEventPathCornerEntity {
            public const nint m_vecCornerPairsNetworked = 0x6C0; // C_NetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
        }
        // Parent: C_BaseEntity
        // Field count: 3
        public static class C_InfoVisibilityBox {
            public const nint m_nMode = 0x604; // int32
            public const nint m_vBoxSize = 0x608; // Vector
            public const nint m_bEnabled = 0x614; // bool
        }
        // Parent: CPlayer_ItemServices
        // Field count: 2
        public static class CCSPlayer_ItemServices {
            public const nint m_bHasDefuser = 0x48; // bool
            public const nint m_bHasHelmet = 0x49; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CPulseCell_Value_Gradient {
            public const nint m_Gradient = 0x48; // CColorGradient
        }
        // Parent: None
        // Field count: 2
        public static class IntervalTimer {
            public const nint m_timestamp = 0x8; // GameTime_t
            public const nint m_nWorldGroupId = 0xC; // WorldGroupId_t
        }
        // Parent: None
        // Field count: 5
        public static class audioparams_t {
            public const nint localSound = 0x8; // Vector[8]
            public const nint soundscapeIndex = 0x68; // int32
            public const nint localBits = 0x6C; // uint8
            public const nint soundscapeEntityListIndex = 0x70; // int32
            public const nint soundEventHash = 0x74; // uint32
        }
        // Parent: C_BaseEntity
        // Field count: 16
        public static class C_PathParticleRope {
            public const nint m_bStartActive = 0x608; // bool
            public const nint m_flMaxSimulationTime = 0x60C; // float32
            public const nint m_iszEffectName = 0x610; // CUtlSymbolLarge
            public const nint m_PathNodes_Name = 0x618; // CUtlVector<CUtlSymbolLarge>
            public const nint m_flParticleSpacing = 0x630; // float32
            public const nint m_flSlack = 0x634; // float32
            public const nint m_flRadius = 0x638; // float32
            public const nint m_ColorTint = 0x63C; // Color
            public const nint m_nEffectState = 0x640; // int32
            public const nint m_iEffectIndex = 0x648; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_PathNodes_Position = 0x650; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_TangentIn = 0x668; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_TangentOut = 0x680; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_Color = 0x698; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_PinEnabled = 0x6B0; // C_NetworkUtlVectorBase<bool>
            public const nint m_PathNodes_RadiusScale = 0x6C8; // C_NetworkUtlVectorBase<float32>
        }
        // Parent: C_BaseCSGrenadeProjectile
        // Field count: 3
        public static class C_DecoyProjectile {
            public const nint m_nDecoyShotTick = 0x1238; // int32
            public const nint m_nClientLastKnownDecoyShotTick = 0x123C; // int32
            public const nint m_flTimeParticleEffectSpawn = 0x1260; // GameTime_t
        }
        // Parent: CAttributeManager
        // Field count: 3
        public static class C_AttributeContainer {
            public const nint m_Item = 0x50; // C_EconItemView
            public const nint m_iExternalItemProviderRegisteredToken = 0x4C0; // int32
            public const nint m_ullRegisteredAsItemID = 0x4C8; // uint64
        }
        // Parent: C_BasePlayerWeapon
        // Field count: 53
        public static class C_CSWeaponBase {
            public const nint m_iWeaponGameplayAnimState = 0x1758; // WeaponGameplayAnimState
            public const nint m_flWeaponGameplayAnimStateTimestamp = 0x175C; // GameTime_t
            public const nint m_flInspectCancelCompleteTime = 0x1760; // GameTime_t
            public const nint m_bInspectPending = 0x1764; // bool
            public const nint m_bInspectShouldLoop = 0x1765; // bool
            public const nint m_flCrosshairDistance = 0x1790; // float32
            public const nint m_iAmmoLastCheck = 0x1794; // int32
            public const nint m_nLastEmptySoundCmdNum = 0x1798; // int32
            public const nint m_bFireOnEmpty = 0x179C; // bool
            public const nint m_OnPlayerPickup = 0x17A0; // CEntityIOOutput
            public const nint m_weaponMode = 0x17B8; // CSWeaponMode
            public const nint m_flTurningInaccuracyDelta = 0x17BC; // float32
            public const nint m_vecTurningInaccuracyEyeDirLast = 0x17C0; // Vector
            public const nint m_flTurningInaccuracy = 0x17CC; // float32
            public const nint m_fAccuracyPenalty = 0x17D0; // float32
            public const nint m_flLastAccuracyUpdateTime = 0x17D4; // GameTime_t
            public const nint m_fAccuracySmoothedForZoom = 0x17D8; // float32
            public const nint m_iRecoilIndex = 0x17DC; // int32
            public const nint m_flRecoilIndex = 0x17E0; // float32
            public const nint m_bBurstMode = 0x17E4; // bool
            public const nint m_flLastBurstModeChangeTime = 0x17E8; // GameTime_t
            public const nint m_nPostponeFireReadyTicks = 0x17EC; // GameTick_t
            public const nint m_flPostponeFireReadyFrac = 0x17F0; // float32
            public const nint m_bInReload = 0x17F4; // bool
            public const nint m_nDeployTick = 0x17F8; // GameTick_t
            public const nint m_flDroppedAtTime = 0x17FC; // GameTime_t
            public const nint m_bIsHauledBack = 0x1804; // bool
            public const nint m_bSilencerOn = 0x1805; // bool
            public const nint m_flTimeSilencerSwitchComplete = 0x1808; // GameTime_t
            public const nint m_flWeaponActionPlaybackRate = 0x180C; // float32
            public const nint m_iOriginalTeamNumber = 0x1810; // int32
            public const nint m_iMostRecentTeamNumber = 0x1814; // int32
            public const nint m_bDroppedNearBuyZone = 0x1818; // bool
            public const nint m_flNextAttackRenderTimeOffset = 0x181C; // float32
            public const nint m_bClearWeaponIdentifyingUGC = 0x18B8; // bool
            public const nint m_bVisualsDataSet = 0x18B9; // bool
            public const nint m_bUIWeapon = 0x18BA; // bool
            public const nint m_nCustomEconReloadEventId = 0x18BC; // int32
            public const nint m_nextPrevOwnerUseTime = 0x18C8; // GameTime_t
            public const nint m_hPrevOwner = 0x18CC; // CHandle<C_CSPlayerPawn>
            public const nint m_nDropTick = 0x18D0; // GameTick_t
            public const nint m_bWasActiveWeaponWhenDropped = 0x18D4; // bool
            public const nint m_donated = 0x18F4; // bool
            public const nint m_fLastShotTime = 0x18F8; // GameTime_t
            public const nint m_bWasOwnedByCT = 0x18FC; // bool
            public const nint m_bWasOwnedByTerrorist = 0x18FD; // bool
            public const nint m_flNextClientFireBulletTime = 0x1900; // float32
            public const nint m_flNextClientFireBulletTime_Repredict = 0x1904; // float32
            public const nint m_IronSightController = 0x1960; // C_IronSightController
            public const nint m_iIronSightMode = 0x1A10; // int32
            public const nint m_flLastLOSTraceFailureTime = 0x1A88; // GameTime_t
            public const nint m_flWatTickOffset = 0x1AE8; // float32
            public const nint m_flLastShakeTime = 0x1AFC; // GameTime_t
        }
        // Parent: None
        // Field count: 7
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
        // Field count: 0
        //
        // Metadata:
        // MPropertyDescription
        public static class CPulseCursorFuncs {
        }
        // Parent: C_BaseEntity
        // Field count: 5
        public static class C_TonemapController2 {
            public const nint m_flAutoExposureMin = 0x600; // float32
            public const nint m_flAutoExposureMax = 0x604; // float32
            public const nint m_flExposureAdaptationSpeedUp = 0x608; // float32
            public const nint m_flExposureAdaptationSpeedDown = 0x60C; // float32
            public const nint m_flTonemapEVSmoothingRange = 0x610; // float32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CountdownTimer {
            public const nint m_duration = 0x8; // float32
            public const nint m_timestamp = 0xC; // GameTime_t
            public const nint m_timescale = 0x10; // float32
            public const nint m_nWorldGroupId = 0x14; // WorldGroupId_t
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PulseNodeDynamicOutflows_t__DynamicOutflow_t {
            public const nint m_OutflowID = 0x0; // CGlobalSymbol
            public const nint m_Connection = 0x8; // CPulse_OutflowConnection
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponMag7 {
        }
        // Parent: None
        // Field count: 2
        public static class WeaponPurchaseCount_t {
            public const nint m_nItemDefIndex = 0x30; // uint16
            public const nint m_nCount = 0x32; // uint16
        }
        // Parent: None
        // Field count: 0
        public static class CBasePulseGraphInstance {
        }
        // Parent: CBaseFilter
        // Field count: 3
        public static class FilterHealth {
            public const nint m_bAdrenalineActive = 0x638; // bool
            public const nint m_iHealthMin = 0x63C; // int32
            public const nint m_iHealthMax = 0x640; // int32
        }
        // Parent: C_BaseClientUIEntity
        // Field count: 13
        public static class C_PointClientUIHUD {
            public const nint m_bCheckCSSClasses = 0xFE0; // bool
            public const nint m_bIgnoreInput = 0x1158; // bool
            public const nint m_flWidth = 0x115C; // float32
            public const nint m_flHeight = 0x1160; // float32
            public const nint m_flDPI = 0x1164; // float32
            public const nint m_flInteractDistance = 0x1168; // float32
            public const nint m_flDepthOffset = 0x116C; // float32
            public const nint m_unOwnerContext = 0x1170; // uint32
            public const nint m_unHorizontalAlign = 0x1174; // uint32
            public const nint m_unVerticalAlign = 0x1178; // uint32
            public const nint m_unOrientation = 0x117C; // uint32
            public const nint m_bAllowInteractionFromAllSceneWorlds = 0x1180; // bool
            public const nint m_vecCSSClasses = 0x1188; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_GraphHook {
            public const nint m_HookName = 0x80; // PulseSymbol_t
        }
        // Parent: None
        // Field count: 0
        public static class SignatureOutflow_Resume {
        }
        // Parent: None
        // Field count: 0
        public static class CPathSimpleAPI {
        }
        // Parent: C_BaseEntity
        // Field count: 0
        public static class C_InfoLadderDismount {
        }
        // Parent: CBaseAnimGraph
        // Field count: 14
        public static class C_PointCommentaryNode {
            public const nint m_bActive = 0x1170; // bool
            public const nint m_bWasActive = 0x1171; // bool
            public const nint m_flEndTime = 0x1174; // GameTime_t
            public const nint m_flStartTime = 0x1178; // GameTime_t
            public const nint m_flStartTimeInCommentary = 0x117C; // float32
            public const nint m_iszCommentaryFile = 0x1180; // CUtlSymbolLarge
            public const nint m_iszTitle = 0x1188; // CUtlSymbolLarge
            public const nint m_iszSpeakers = 0x1190; // CUtlSymbolLarge
            public const nint m_iNodeNumber = 0x1198; // int32
            public const nint m_iNodeNumberMax = 0x119C; // int32
            public const nint m_bListenedTo = 0x11A0; // bool
            public const nint m_sndCommentary = 0x11A8; // CSoundPatch*
            public const nint m_hViewPosition = 0x11B0; // CHandle<C_BaseEntity>
            public const nint m_bRestartAfterRestore = 0x11B4; // bool
        }
        // Parent: C_Sprite
        // Field count: 0
        public static class CSpriteOriented {
        }
        // Parent: None
        // Field count: 13
        public static class shard_model_desc_t {
            public const nint m_nModelID = 0x8; // int32
            public const nint m_hMaterialBase = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_hMaterialDamageOverlay = 0x18; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_solid = 0x20; // ShardSolid_t
            public const nint m_vecPanelSize = 0x24; // Vector2D
            public const nint m_vecStressPositionA = 0x2C; // Vector2D
            public const nint m_vecStressPositionB = 0x34; // Vector2D
            public const nint m_vecPanelVertices = 0x40; // C_NetworkUtlVectorBase<Vector2D>
            public const nint m_vInitialPanelVertices = 0x58; // C_NetworkUtlVectorBase<Vector4D>
            public const nint m_flGlassHalfThickness = 0x70; // float32
            public const nint m_bHasParent = 0x74; // bool
            public const nint m_bParentFrozen = 0x75; // bool
            public const nint m_SurfacePropStringToken = 0x78; // CUtlStringToken
        }
        // Parent: C_CS2WeaponModuleBase
        // Field count: 2
        public static class C_KeychainModule {
            public const nint m_nKeychainDefID = 0x1160; // uint32
            public const nint m_nKeychainSeed = 0x1164; // uint32
        }
        // Parent: C_BaseModelEntity
        // Field count: 1
        public static class CFuncWater {
            public const nint m_BuoyancyHelper = 0xFA8; // CBuoyancyHelper
        }
        // Parent: CPlayerPawnComponent
        // Field count: 0
        public static class CCSPlayer_GlowServices {
        }
        // Parent: None
        // Field count: 1
        public static class CCSGameModeRules {
            public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
        }
        // Parent: C_BaseCSGrenade
        // Field count: 0
        public static class C_Flashbang {
        }
        // Parent: C_PointClientUIWorldPanel
        // Field count: 1
        public static class C_PointClientUIWorldTextPanel {
            public const nint m_messageText = 0x1200; // char[512]
        }
        // Parent: CPlayer_WaterServices
        // Field count: 3
        public static class CCSPlayer_WaterServices {
            public const nint m_flWaterJumpTime = 0x48; // float32
            public const nint m_vecWaterJumpVel = 0x4C; // Vector
            public const nint m_flSwimSoundTime = 0x58; // float32
        }
        // Parent: C_CSPlayerPawnBase
        // Field count: 1
        public static class C_CSObserverPawn {
            public const nint m_hDetectParentChange = 0x1458; // CEntityHandle
        }
        // Parent: None
        // Field count: 3
        public static class ViewAngleServerChange_t {
            public const nint nType = 0x30; // FixAngleSet_t
            public const nint qAngle = 0x34; // QAngle
            public const nint nIndex = 0x40; // uint32
        }
        // Parent: C_BaseModelEntity
        // Field count: 9
        public static class C_FuncLadder {
            public const nint m_vecLadderDir = 0xFA8; // Vector
            public const nint m_Dismounts = 0xFB8; // CUtlVector<CHandle<C_InfoLadderDismount>>
            public const nint m_vecLocalTop = 0xFD0; // Vector
            public const nint m_vecPlayerMountPositionTop = 0xFDC; // VectorWS
            public const nint m_vecPlayerMountPositionBottom = 0xFE8; // VectorWS
            public const nint m_flAutoRideSpeed = 0xFF4; // float32
            public const nint m_bDisabled = 0xFF8; // bool
            public const nint m_bFakeLadder = 0xFF9; // bool
            public const nint m_bHasSlack = 0xFFA; // bool
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponMP5SD {
        }
        // Parent: C_BaseModelEntity
        // Field count: 0
        public static class C_World {
        }
        // Parent: C_CSGO_TeamSelectCharacterPosition
        // Field count: 0
        public static class C_CSGO_TeamSelectCounterTerroristPosition {
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponGalilAR {
        }
        // Parent: CPlayer_CameraServices
        // Field count: 6
        public static class CCSPlayerBase_CameraServices {
            public const nint m_iFOV = 0x290; // uint32
            public const nint m_iFOVStart = 0x294; // uint32
            public const nint m_flFOVTime = 0x298; // GameTime_t
            public const nint m_flFOVRate = 0x29C; // float32
            public const nint m_hZoomOwner = 0x2A0; // CHandle<C_BaseEntity>
            public const nint m_flLastShotFOV = 0x2A4; // float32
        }
        // Parent: None
        // Field count: 0
        public static class C_TeamplayRules {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_BaseEntrypoint {
            public const nint m_EntryChunk = 0x48; // PulseRuntimeChunkIndex_t
            public const nint m_RegisterMap = 0x50; // PulseRegisterMap_t
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponSG556 {
        }
        // Parent: C_CSPlayerPawnBase
        // Field count: 109
        public static class C_CSPlayerPawn {
            public const nint m_pBulletServices = 0x1468; // CCSPlayer_BulletServices*
            public const nint m_pHostageServices = 0x1470; // CCSPlayer_HostageServices*
            public const nint m_pBuyServices = 0x1478; // CCSPlayer_BuyServices*
            public const nint m_pGlowServices = 0x1480; // CCSPlayer_GlowServices*
            public const nint m_pActionTrackingServices = 0x1488; // CCSPlayer_ActionTrackingServices*
            public const nint m_pDamageReactServices = 0x1490; // CCSPlayer_DamageReactServices*
            public const nint m_flHealthShotBoostExpirationTime = 0x1498; // GameTime_t
            public const nint m_flLastFiredWeaponTime = 0x149C; // GameTime_t
            public const nint m_bHasFemaleVoice = 0x14A0; // bool
            public const nint m_flLandingTimeSeconds = 0x14A4; // float32
            public const nint m_flOldFallVelocity = 0x14A8; // float32
            public const nint m_szLastPlaceName = 0x14AC; // char[18]
            public const nint m_bPrevDefuser = 0x14BE; // bool
            public const nint m_bPrevHelmet = 0x14BF; // bool
            public const nint m_nPrevArmorVal = 0x14C0; // int32
            public const nint m_nPrevGrenadeAmmoCount = 0x14C4; // int32
            public const nint m_unPreviousWeaponHash = 0x14C8; // uint32
            public const nint m_unWeaponHash = 0x14CC; // uint32
            public const nint m_bInBuyZone = 0x14D0; // bool
            public const nint m_bPreviouslyInBuyZone = 0x14D1; // bool
            public const nint m_aimPunchAngle = 0x14D4; // QAngle
            public const nint m_aimPunchAngleVel = 0x14E0; // QAngle
            public const nint m_aimPunchTickBase = 0x14EC; // GameTick_t
            public const nint m_aimPunchTickFraction = 0x14F0; // float32
            public const nint m_bInLanding = 0x1518; // bool
            public const nint m_flLandingStartTime = 0x151C; // float32
            public const nint m_bInHostageRescueZone = 0x1520; // bool
            public const nint m_bInBombZone = 0x1521; // bool
            public const nint m_bIsBuyMenuOpen = 0x1522; // bool
            public const nint m_flTimeOfLastInjury = 0x1524; // GameTime_t
            public const nint m_flNextSprayDecalTime = 0x1528; // GameTime_t
            public const nint m_iRetakesOffering = 0x1680; // int32
            public const nint m_iRetakesOfferingCard = 0x1684; // int32
            public const nint m_bRetakesHasDefuseKit = 0x1688; // bool
            public const nint m_bRetakesMVPLastRound = 0x1689; // bool
            public const nint m_iRetakesMVPBoostItem = 0x168C; // int32
            public const nint m_RetakesMVPBoostExtraUtility = 0x1690; // loadout_slot_t
            public const nint m_bNeedToReApplyGloves = 0x1695; // bool
            public const nint m_EconGloves = 0x1698; // C_EconItemView
            public const nint m_nEconGlovesChanged = 0x1B08; // uint8
            public const nint m_bMustSyncRagdollState = 0x1B09; // bool
            public const nint m_nRagdollDamageBone = 0x1B0C; // int32
            public const nint m_vRagdollDamageForce = 0x1B10; // Vector
            public const nint m_vRagdollDamagePosition = 0x1B1C; // Vector
            public const nint m_szRagdollDamageWeaponName = 0x1B28; // char[64]
            public const nint m_bRagdollDamageHeadshot = 0x1B68; // bool
            public const nint m_vRagdollServerOrigin = 0x1B6C; // Vector
            public const nint m_lastLandTime = 0x1B78; // GameTime_t
            public const nint m_bOnGroundLastTick = 0x1B7C; // bool
            public const nint m_hHudModelArms = 0x1B98; // CHandle<C_CS2HudModelArms>
            public const nint m_qDeathEyeAngles = 0x1B9C; // QAngle
            public const nint m_bLeftHanded = 0x1BA8; // bool
            public const nint m_fSwitchedHandednessTime = 0x1BAC; // GameTime_t
            public const nint m_flViewmodelOffsetX = 0x1BB0; // float32
            public const nint m_flViewmodelOffsetY = 0x1BB4; // float32
            public const nint m_flViewmodelOffsetZ = 0x1BB8; // float32
            public const nint m_flViewmodelFOV = 0x1BBC; // float32
            public const nint m_vecPlayerPatchEconIndices = 0x1BC0; // uint32[5]
            public const nint m_GunGameImmunityColor = 0x1C00; // Color
            public const nint m_vecBulletHitModels = 0x1C50; // CUtlVector<C_BulletHitModel*>
            public const nint m_bIsWalking = 0x1C68; // bool
            public const nint m_entitySpottedState = 0x1C70; // EntitySpottedState_t
            public const nint m_bIsScoped = 0x1C88; // bool
            public const nint m_bResumeZoom = 0x1C89; // bool
            public const nint m_bIsDefusing = 0x1C8A; // bool
            public const nint m_bIsGrabbingHostage = 0x1C8B; // bool
            public const nint m_iBlockingUseActionInProgress = 0x1C8C; // CSPlayerBlockingUseAction_t
            public const nint m_flEmitSoundTime = 0x1C90; // GameTime_t
            public const nint m_bInNoDefuseArea = 0x1C94; // bool
            public const nint m_nWhichBombZone = 0x1C98; // int32
            public const nint m_iShotsFired = 0x1C9C; // int32
            public const nint m_flFlinchStack = 0x1CA0; // float32
            public const nint m_flVelocityModifier = 0x1CA4; // float32
            public const nint m_bWaitForNoAttack = 0x1CA8; // bool
            public const nint m_ignoreLadderJumpTime = 0x1CAC; // float32
            public const nint m_bKilledByHeadshot = 0x1CB1; // bool
            public const nint m_ArmorValue = 0x1CB4; // int32
            public const nint m_unCurrentEquipmentValue = 0x1CB8; // uint16
            public const nint m_unRoundStartEquipmentValue = 0x1CBA; // uint16
            public const nint m_unFreezetimeEndEquipmentValue = 0x1CBC; // uint16
            public const nint m_nLastKillerIndex = 0x1CC0; // CEntityIndex
            public const nint m_bOldIsScoped = 0x1CC4; // bool
            public const nint m_bHasDeathInfo = 0x1CC5; // bool
            public const nint m_flDeathInfoTime = 0x1CC8; // float32
            public const nint m_vecDeathInfoOrigin = 0x1CCC; // Vector
            public const nint m_grenadeParameterStashTime = 0x1D08; // GameTime_t
            public const nint m_bGrenadeParametersStashed = 0x1D0C; // bool
            public const nint m_angStashedShootAngles = 0x1D10; // QAngle
            public const nint m_vecStashedGrenadeThrowPosition = 0x1D1C; // Vector
            public const nint m_vecStashedVelocity = 0x1D28; // Vector
            public const nint m_angShootAngleHistory = 0x1D34; // QAngle[2]
            public const nint m_vecThrowPositionHistory = 0x1D4C; // Vector[2]
            public const nint m_vecVelocityHistory = 0x1D64; // Vector[2]
            public const nint m_bShouldAutobuyDMWeapons = 0x32B0; // bool
            public const nint m_fImmuneToGunGameDamageTime = 0x32B4; // GameTime_t
            public const nint m_bGunGameImmunity = 0x32B8; // bool
            public const nint m_fImmuneToGunGameDamageTimeLast = 0x32BC; // GameTime_t
            public const nint m_fMolotovDamageTime = 0x32C0; // float32
            public const nint m_bThirdpersonActiveWeaponCanSafelyOcclude = 0x32C8; // bool
            public const nint m_nPlayerInfernoBodyFx = 0x32CC; // ParticleIndex_t
            public const nint m_angEyeAngles = 0x3340; // QAngle
            public const nint m_arrOldEyeAnglesTimes = 0x33D0; // GameTime_t[4]
            public const nint m_arrOldEyeAngles = 0x33E0; // QAngle[4]
            public const nint m_angEyeAnglesVelocity = 0x3410; // QAngle
            public const nint m_iIDEntIndex = 0x341C; // CEntityIndex
            public const nint m_delayTargetIDTimer = 0x3420; // CountdownTimer
            public const nint m_iTargetItemEntIdx = 0x3438; // CEntityIndex
            public const nint m_iOldIDEntIndex = 0x343C; // CEntityIndex
            public const nint m_holdTargetIDTimer = 0x3440; // CountdownTimer
        }
        // Parent: C_CSGO_TeamIntroCharacterPosition
        // Field count: 0
        public static class C_CSGO_TeamIntroTerroristPosition {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPulseEditorCanvasItemSpecKV3
        public static class CPulseCell_WaitForCursorsWithTagBase {
            public const nint m_nCursorsAllowedToWait = 0x48; // int32
            public const nint m_WaitComplete = 0x50; // CPulse_ResumePoint
        }
        // Parent: C_BaseCombatCharacter
        // Field count: 23
        public static class C_Hostage {
            public const nint m_entitySpottedState = 0x11E0; // EntitySpottedState_t
            public const nint m_leader = 0x11F8; // CHandle<C_BaseEntity>
            public const nint m_reuseTimer = 0x1200; // CountdownTimer
            public const nint m_vel = 0x1218; // Vector
            public const nint m_isRescued = 0x1224; // bool
            public const nint m_jumpedThisFrame = 0x1225; // bool
            public const nint m_nHostageState = 0x1228; // int32
            public const nint m_bHandsHaveBeenCut = 0x122C; // bool
            public const nint m_hHostageGrabber = 0x1230; // CHandle<C_CSPlayerPawn>
            public const nint m_fLastGrabTime = 0x1234; // GameTime_t
            public const nint m_vecGrabbedPos = 0x1238; // Vector
            public const nint m_flRescueStartTime = 0x1244; // GameTime_t
            public const nint m_flGrabSuccessTime = 0x1248; // GameTime_t
            public const nint m_flDropStartTime = 0x124C; // GameTime_t
            public const nint m_flDeadOrRescuedTime = 0x1250; // GameTime_t
            public const nint m_blinkTimer = 0x1258; // CountdownTimer
            public const nint m_lookAt = 0x1270; // Vector
            public const nint m_lookAroundTimer = 0x1280; // CountdownTimer
            public const nint m_isInit = 0x1298; // bool
            public const nint m_eyeAttachment = 0x1299; // AttachmentHandle_t
            public const nint m_chestAttachment = 0x129A; // AttachmentHandle_t
            public const nint m_pPredictionOwner = 0x12A0; // CBasePlayerController*
            public const nint m_fNewestAlphaThinkTime = 0x12A8; // GameTime_t
        }
        // Parent: None
        // Field count: 14
        public static class C_fogplayerparams_t {
            public const nint m_hCtrl = 0x8; // CHandle<C_FogController>
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
        // Field count: 35
        public static class CGameSceneNode {
            public const nint m_nodeToWorld = 0x10; // CTransformWS
            public const nint m_pOwner = 0x30; // CEntityInstance*
            public const nint m_pParent = 0x38; // CGameSceneNode*
            public const nint m_pChild = 0x40; // CGameSceneNode*
            public const nint m_pNextSibling = 0x48; // CGameSceneNode*
            public const nint m_hParent = 0x70; // CGameSceneNodeHandle
            public const nint m_vecOrigin = 0x80; // CNetworkOriginCellCoordQuantizedVector
            public const nint m_angRotation = 0xB8; // QAngle
            public const nint m_flScale = 0xC4; // float32
            public const nint m_vecAbsOrigin = 0xC8; // VectorWS
            public const nint m_angAbsRotation = 0xD4; // QAngle
            public const nint m_flAbsScale = 0xE0; // float32
            public const nint m_vecWrappedLocalOrigin = 0xE4; // Vector
            public const nint m_angWrappedLocalRotation = 0xF0; // QAngle
            public const nint m_flWrappedScale = 0xFC; // float32
            public const nint m_nParentAttachmentOrBone = 0x100; // int16
            public const nint m_bDebugAbsOriginChanges = 0x102; // bool
            public const nint m_bDormant = 0x103; // bool
            public const nint m_bForceParentToBeNetworked = 0x104; // bool
            public const nint m_bDirtyHierarchy = 0x0; // bitfield:1
            public const nint m_bDirtyBoneMergeInfo = 0x0; // bitfield:1
            public const nint m_bNetworkedPositionChanged = 0x0; // bitfield:1
            public const nint m_bNetworkedAnglesChanged = 0x0; // bitfield:1
            public const nint m_bNetworkedScaleChanged = 0x0; // bitfield:1
            public const nint m_bWillBeCallingPostDataUpdate = 0x0; // bitfield:1
            public const nint m_bBoneMergeFlex = 0x0; // bitfield:1
            public const nint m_nLatchAbsOrigin = 0x0; // bitfield:2
            public const nint m_bDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
            public const nint m_nHierarchicalDepth = 0x107; // uint8
            public const nint m_nHierarchyType = 0x108; // uint8
            public const nint m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0x109; // uint8
            public const nint m_name = 0x10C; // CUtlStringToken
            public const nint m_hierarchyAttachName = 0x120; // CUtlStringToken
            public const nint m_flClientLocalScale = 0x124; // float32
            public const nint m_vRenderOrigin = 0x128; // Vector
        }
        // Parent: CPlayerPawnComponent
        // Field count: 6
        public static class CPlayer_ObserverServices {
            public const nint m_iObserverMode = 0x48; // uint8
            public const nint m_hObserverTarget = 0x4C; // CHandle<C_BaseEntity>
            public const nint m_iObserverLastMode = 0x50; // ObserverMode_t
            public const nint m_bForcedObserverMode = 0x54; // bool
            public const nint m_flObserverChaseDistance = 0x58; // float32
            public const nint m_flObserverChaseDistanceCalcTime = 0x5C; // GameTime_t
        }
        // Parent: C_BaseModelEntity
        // Field count: 1
        public static class CCashStack {
            public const nint m_nCashStackValue = 0xFA8; // int32
        }
        // Parent: C_BaseEntity
        // Field count: 4
        public static class C_SoundAreaEntityBase {
            public const nint m_bDisabled = 0x600; // bool
            public const nint m_bWasEnabled = 0x608; // bool
            public const nint m_iszSoundAreaType = 0x610; // CUtlSymbolLarge
            public const nint m_vPos = 0x618; // Vector
        }
        // Parent: C_BaseEntity
        // Field count: 6
        public static class C_PlayerVisibility {
            public const nint m_flVisibilityStrength = 0x600; // float32
            public const nint m_flFogDistanceMultiplier = 0x604; // float32
            public const nint m_flFogMaxDensityMultiplier = 0x608; // float32
            public const nint m_flFadeTime = 0x60C; // float32
            public const nint m_bStartDisabled = 0x610; // bool
            public const nint m_bIsEnabled = 0x611; // bool
        }
        // Parent: None
        // Field count: 3
        public static class CAttributeManager__cached_attribute_float_t {
            public const nint flIn = 0x0; // float32
            public const nint iAttribHook = 0x8; // CUtlSymbolLarge
            public const nint flOut = 0x10; // float32
        }
        // Parent: C_EconEntity
        // Field count: 7
        public static class C_BasePlayerWeapon {
            public const nint m_nNextPrimaryAttackTick = 0x16C8; // GameTick_t
            public const nint m_flNextPrimaryAttackTickRatio = 0x16CC; // float32
            public const nint m_nNextSecondaryAttackTick = 0x16D0; // GameTick_t
            public const nint m_flNextSecondaryAttackTickRatio = 0x16D4; // float32
            public const nint m_iClip1 = 0x16D8; // int32
            public const nint m_iClip2 = 0x16DC; // int32
            public const nint m_pReserveAmmo = 0x16E0; // int32[2]
        }
        // Parent: C_BaseEntity
        // Field count: 1
        public static class CRagdollManager {
            public const nint m_iCurrentMaxRagdollCount = 0x600; // int8
        }
        // Parent: C_BaseCSGrenade
        // Field count: 0
        public static class C_HEGrenade {
        }
        // Parent: C_BaseModelEntity
        // Field count: 12
        public static class C_EnvSky {
            public const nint m_hSkyMaterial = 0xFA8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_hSkyMaterialLightingOnly = 0xFB0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_bStartDisabled = 0xFB8; // bool
            public const nint m_vTintColor = 0xFB9; // Color
            public const nint m_vTintColorLightingOnly = 0xFBD; // Color
            public const nint m_flBrightnessScale = 0xFC4; // float32
            public const nint m_nFogType = 0xFC8; // int32
            public const nint m_flFogMinStart = 0xFCC; // float32
            public const nint m_flFogMinEnd = 0xFD0; // float32
            public const nint m_flFogMaxStart = 0xFD4; // float32
            public const nint m_flFogMaxEnd = 0xFD8; // float32
            public const nint m_bEnabled = 0xFDC; // bool
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_InvokeBinding {
            public const nint m_RegisterMap = 0x0; // PulseRegisterMap_t
            public const nint m_FuncName = 0x30; // PulseSymbol_t
            public const nint m_nCellIndex = 0x40; // PulseRuntimeCellIndex_t
            public const nint m_nSrcChunk = 0x44; // PulseRuntimeChunkIndex_t
            public const nint m_nSrcInstruction = 0x48; // int32
        }
        // Parent: C_BaseEntity
        // Field count: 11
        public static class C_EnvWindController {
            public const nint m_EnvWindShared = 0x600; // C_EnvWindShared
            public const nint m_fDirectionVariation = 0x6F8; // float32
            public const nint m_fSpeedVariation = 0x6FC; // float32
            public const nint m_fTurbulence = 0x700; // float32
            public const nint m_fVolumeHalfExtentXY = 0x704; // float32
            public const nint m_fVolumeHalfExtentZ = 0x708; // float32
            public const nint m_nVolumeResolutionXY = 0x70C; // int32
            public const nint m_nVolumeResolutionZ = 0x710; // int32
            public const nint m_nClipmapLevels = 0x714; // int32
            public const nint m_bIsMaster = 0x718; // bool
            public const nint m_bFirstTime = 0x719; // bool
        }
        // Parent: None
        // Field count: 4
        public static class C_GameRules {
            public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
            public const nint m_nTotalPausedTicks = 0x30; // int32
            public const nint m_nPauseStartTick = 0x34; // int32
            public const nint m_bGamePaused = 0x38; // bool
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponMAC10 {
        }
        // Parent: C_BaseEntity
        // Field count: 14
        public static class C_CSGO_MapPreviewCameraPath {
            public const nint m_flZFar = 0x600; // float32
            public const nint m_flZNear = 0x604; // float32
            public const nint m_bLoop = 0x608; // bool
            public const nint m_bVerticalFOV = 0x609; // bool
            public const nint m_bConstantSpeed = 0x60A; // bool
            public const nint m_flDuration = 0x60C; // float32
            public const nint m_flPathLength = 0x650; // float32
            public const nint m_flPathDuration = 0x654; // float32
            public const nint m_bDofEnabled = 0x66C; // bool
            public const nint m_flDofNearBlurry = 0x670; // float32
            public const nint m_flDofNearCrisp = 0x674; // float32
            public const nint m_flDofFarCrisp = 0x678; // float32
            public const nint m_flDofFarBlurry = 0x67C; // float32
            public const nint m_flDofTiltToGround = 0x680; // float32
        }
        // Parent: C_ModelPointEntity
        // Field count: 19
        public static class C_PointWorldText {
            public const nint m_bForceRecreateNextUpdate = 0xFB0; // bool
            public const nint m_nTextWidthPx = 0xFC8; // int32
            public const nint m_nTextHeightPx = 0xFCC; // int32
            public const nint m_messageText = 0xFD0; // char[512]
            public const nint m_FontName = 0x11D0; // char[64]
            public const nint m_BackgroundMaterialName = 0x1210; // char[64]
            public const nint m_bEnabled = 0x1250; // bool
            public const nint m_bFullbright = 0x1251; // bool
            public const nint m_flWorldUnitsPerPx = 0x1254; // float32
            public const nint m_flFontSize = 0x1258; // float32
            public const nint m_flDepthOffset = 0x125C; // float32
            public const nint m_bDrawBackground = 0x1260; // bool
            public const nint m_flBackgroundBorderWidth = 0x1264; // float32
            public const nint m_flBackgroundBorderHeight = 0x1268; // float32
            public const nint m_flBackgroundWorldToUV = 0x126C; // float32
            public const nint m_Color = 0x1270; // Color
            public const nint m_nJustifyHorizontal = 0x1274; // PointWorldTextJustifyHorizontal_t
            public const nint m_nJustifyVertical = 0x1278; // PointWorldTextJustifyVertical_t
            public const nint m_nReorientMode = 0x127C; // PointWorldTextReorientMode_t
        }
        // Parent: C_BaseModelEntity
        // Field count: 40
        public static class C_RopeKeyframe {
            public const nint m_LinksTouchingSomething = 0xFB0; // CBitVec<10>
            public const nint m_nLinksTouchingSomething = 0xFB4; // int32
            public const nint m_bApplyWind = 0xFB8; // bool
            public const nint m_fPrevLockedPoints = 0xFBC; // int32
            public const nint m_iForcePointMoveCounter = 0xFC0; // int32
            public const nint m_bPrevEndPointPos = 0xFC4; // bool[2]
            public const nint m_vPrevEndPointPos = 0xFC8; // VectorWS[2]
            public const nint m_flCurScroll = 0xFE0; // float32
            public const nint m_flScrollSpeed = 0xFE4; // float32
            public const nint m_RopeFlags = 0xFE8; // uint16
            public const nint m_iRopeMaterialModelIndex = 0xFF0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_nSegments = 0x1268; // uint8
            public const nint m_hStartPoint = 0x126C; // CHandle<C_BaseEntity>
            public const nint m_hEndPoint = 0x1270; // CHandle<C_BaseEntity>
            public const nint m_iStartAttachment = 0x1274; // AttachmentHandle_t
            public const nint m_iEndAttachment = 0x1275; // AttachmentHandle_t
            public const nint m_Subdiv = 0x1276; // uint8
            public const nint m_RopeLength = 0x1278; // int16
            public const nint m_Slack = 0x127A; // int16
            public const nint m_TextureScale = 0x127C; // float32
            public const nint m_fLockedPoints = 0x1280; // uint8
            public const nint m_nChangeCount = 0x1281; // uint8
            public const nint m_Width = 0x1284; // float32
            public const nint m_PhysicsDelegate = 0x1288; // C_RopeKeyframe::CPhysicsDelegate
            public const nint m_hMaterial = 0x1298; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_TextureHeight = 0x12A0; // int32
            public const nint m_vecImpulse = 0x12A4; // Vector
            public const nint m_vecPreviousImpulse = 0x12B0; // Vector
            public const nint m_flCurrentGustTimer = 0x12BC; // float32
            public const nint m_flCurrentGustLifetime = 0x12C0; // float32
            public const nint m_flTimeToNextGust = 0x12C4; // float32
            public const nint m_vWindDir = 0x12C8; // Vector
            public const nint m_vColorMod = 0x12D4; // Vector
            public const nint m_vCachedEndPointAttachmentPos = 0x12E0; // VectorWS[2]
            public const nint m_vCachedEndPointAttachmentAngle = 0x12F8; // QAngle[2]
            public const nint m_bConstrainBetweenEndpoints = 0x1310; // bool
            public const nint m_bEndPointAttachmentPositionsDirty = 0x0; // bitfield:1
            public const nint m_bEndPointAttachmentAnglesDirty = 0x0; // bitfield:1
            public const nint m_bNewDataThisFrame = 0x0; // bitfield:1
            public const nint m_bPhysicsInitted = 0x0; // bitfield:1
        }
        // Parent: C_BaseModelEntity
        // Field count: 0
        public static class C_BaseToggle {
        }
        // Parent: C_EnvCubemap
        // Field count: 0
        public static class C_EnvCubemapBox {
        }
        // Parent: C_EnvCombinedLightProbeVolume
        // Field count: 0
        public static class C_EnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume {
        }
        // Parent: None
        // Field count: 1
        public static class C_RopeKeyframe__CPhysicsDelegate {
            public const nint m_pKeyframe = 0x8; // C_RopeKeyframe*
        }
        // Parent: C_PointEntity
        // Field count: 5
        public static class CInfoDynamicShadowHint {
            public const nint m_bDisabled = 0x600; // bool
            public const nint m_flRange = 0x604; // float32
            public const nint m_nImportance = 0x608; // int32
            public const nint m_nLightChoice = 0x60C; // int32
            public const nint m_hLight = 0x610; // CHandle<C_BaseEntity>
        }
        // Parent: C_PointEntity
        // Field count: 6
        public static class CPathNode {
            public const nint m_vInTangentLocal = 0x600; // Vector
            public const nint m_vOutTangentLocal = 0x60C; // Vector
            public const nint m_strParentPathUniqueID = 0x618; // CUtlString
            public const nint m_strPathNodeParameter = 0x620; // CUtlString
            public const nint m_xWSPrevParent = 0x630; // CTransform
            public const nint m_hPath = 0x650; // CHandle<CPathWithDynamicNodes>
        }
        // Parent: C_BaseToggle
        // Field count: 0
        public static class C_FuncMoveLinear {
        }
        // Parent: C_BaseModelEntity
        // Field count: 0
        public static class CServerOnlyModelEntity {
        }
        // Parent: C_CSGO_TeamPreviewCamera
        // Field count: 0
        public static class C_CSGO_TeamSelectCamera {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_IntervalTimer {
            public const nint m_Completed = 0x48; // CPulse_ResumePoint
            public const nint m_OnInterval = 0x90; // SignatureOutflow_Continue
        }
        // Parent: C_CSWeaponBaseShotgun
        // Field count: 0
        public static class C_WeaponXM1014 {
        }
        // Parent: CBaseAnimGraph
        // Field count: 0
        public static class C_WorldModelGloves {
        }
        // Parent: C_PhysicsProp
        // Field count: 0
        public static class C_PhysicsPropMultiplayer {
        }
        // Parent: C_SoundEventEntity
        // Field count: 2
        public static class C_SoundEventOBBEntity {
            public const nint m_vMins = 0x6C0; // Vector
            public const nint m_vMaxs = 0x6CC; // Vector
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyDescription
        public static class CPulseTestScriptLib {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseLerp {
            public const nint m_WakeResume = 0x48; // CPulse_ResumePoint
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponAug {
        }
        // Parent: C_DynamicProp
        // Field count: 8
        public static class C_BasePropDoor {
            public const nint m_eDoorState = 0x13B0; // DoorState_t
            public const nint m_modelChanged = 0x13B4; // bool
            public const nint m_bLocked = 0x13B5; // bool
            public const nint m_bNoNPCs = 0x13B6; // bool
            public const nint m_closedPosition = 0x13B8; // Vector
            public const nint m_closedAngles = 0x13C4; // QAngle
            public const nint m_hMaster = 0x13D0; // CHandle<C_BasePropDoor>
            public const nint m_vWhereToSetLightingOrigin = 0x13D4; // Vector
        }
        // Parent: C_PointEntity
        // Field count: 0
        public static class CChoreoInfoTarget {
        }
        // Parent: None
        // Field count: 0
        public static class CTakeDamageResultAPI {
        }
        // Parent: None
        // Field count: 8
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
        // Parent: C_WeaponBaseItem
        // Field count: 0
        public static class C_Item_Healthshot {
        }
        // Parent: None
        // Field count: 3
        public static class CEntityInstance {
            public const nint m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
            public const nint m_pEntity = 0x10; // CEntityIdentity*
            public const nint m_CScriptComponent = 0x28; // CScriptComponent*
        }
        // Parent: C_BaseEntity
        // Field count: 44
        public static class C_BaseModelEntity {
            public const nint m_CRenderComponent = 0xAF0; // CRenderComponent*
            public const nint m_CHitboxComponent = 0xAF8; // CHitboxComponent
            public const nint m_pChoreoComponent = 0xB10; // CChoreoComponent*
            public const nint m_nDestructiblePartInitialStateDestructed0 = 0xB18; // HitGroup_t
            public const nint m_nDestructiblePartInitialStateDestructed1 = 0xB1C; // HitGroup_t
            public const nint m_nDestructiblePartInitialStateDestructed2 = 0xB20; // HitGroup_t
            public const nint m_nDestructiblePartInitialStateDestructed3 = 0xB24; // HitGroup_t
            public const nint m_nDestructiblePartInitialStateDestructed4 = 0xB28; // HitGroup_t
            public const nint m_nDestructiblePartInitialStateDestructed0_PartIndex = 0xB2C; // int32
            public const nint m_nDestructiblePartInitialStateDestructed1_PartIndex = 0xB30; // int32
            public const nint m_nDestructiblePartInitialStateDestructed2_PartIndex = 0xB34; // int32
            public const nint m_nDestructiblePartInitialStateDestructed3_PartIndex = 0xB38; // int32
            public const nint m_nDestructiblePartInitialStateDestructed4_PartIndex = 0xB3C; // int32
            public const nint m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces = 0xB40; // bool
            public const nint m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces = 0xB41; // bool
            public const nint m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces = 0xB42; // bool
            public const nint m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces = 0xB43; // bool
            public const nint m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces = 0xB44; // bool
            public const nint m_pDestructiblePartsSystemComponent = 0xB48; // CDestructiblePartsComponent*
            public const nint m_bInitModelEffects = 0xC70; // bool
            public const nint m_bDoingModelEffects = 0xC71; // bool
            public const nint m_iOldHealth = 0xC74; // int32
            public const nint m_nRenderMode = 0xC78; // RenderMode_t
            public const nint m_nRenderFX = 0xC79; // RenderFx_t
            public const nint m_bAllowFadeInView = 0xC7A; // bool
            public const nint m_clrRender = 0xC98; // Color
            public const nint m_vecRenderAttributes = 0xCA0; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
            public const nint m_bRenderToCubemaps = 0xD20; // bool
            public const nint m_bNoInterpolate = 0xD21; // bool
            public const nint m_Collision = 0xD28; // CCollisionProperty
            public const nint m_Glow = 0xDD8; // CGlowProperty
            public const nint m_flGlowBackfaceMult = 0xE30; // float32
            public const nint m_fadeMinDist = 0xE34; // float32
            public const nint m_fadeMaxDist = 0xE38; // float32
            public const nint m_flFadeScale = 0xE3C; // float32
            public const nint m_flShadowStrength = 0xE40; // float32
            public const nint m_nObjectCulling = 0xE44; // uint8
            public const nint m_nRequiredDecalRtEncoding = 0xE45; // DecalRtEncoding_t
            public const nint m_bodyGroupChoices = 0xE48; // CUtlOrderedMap<CGlobalSymbol,int32>
            public const nint m_vecViewOffset = 0xE70; // CNetworkViewOffsetVector
            public const nint m_pClientAlphaProperty = 0xF50; // CClientAlphaProperty*
            public const nint m_ClientOverrideTint = 0xF58; // Color
            public const nint m_bUseClientOverrideTint = 0xF5C; // bool
            public const nint m_bvDisabledHitGroups = 0xF98; // uint32[1]
        }
        // Parent: CPlayerPawnComponent
        // Field count: 1
        public static class CCSPlayer_BulletServices {
            public const nint m_totalHitsOnServer = 0x48; // int32
        }
        // Parent: C_SoundOpvarSetPointEntity
        // Field count: 0
        public static class C_SoundOpvarSetAutoRoomEntity {
        }
        // Parent: C_BaseEntity
        // Field count: 29
        public static class C_EnvCombinedLightProbeVolume {
            public const nint m_Entity_Color = 0x1678; // Color
            public const nint m_Entity_flBrightness = 0x167C; // float32
            public const nint m_Entity_hCubemapTexture = 0x1680; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_bCustomCubemapTexture = 0x1688; // bool
            public const nint m_Entity_hLightProbeTexture_AmbientCube = 0x1690; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SDF = 0x1698; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SH2_DC = 0x16A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SH2_R = 0x16A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SH2_G = 0x16B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SH2_B = 0x16B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightIndicesTexture = 0x16C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightScalarsTexture = 0x16C8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightShadowsTexture = 0x16D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_vBoxMins = 0x16D8; // Vector
            public const nint m_Entity_vBoxMaxs = 0x16E4; // Vector
            public const nint m_Entity_bMoveable = 0x16F0; // bool
            public const nint m_Entity_nHandshake = 0x16F4; // int32
            public const nint m_Entity_nEnvCubeMapArrayIndex = 0x16F8; // int32
            public const nint m_Entity_nPriority = 0x16FC; // int32
            public const nint m_Entity_bStartDisabled = 0x1700; // bool
            public const nint m_Entity_flEdgeFadeDist = 0x1704; // float32
            public const nint m_Entity_vEdgeFadeDists = 0x1708; // Vector
            public const nint m_Entity_nLightProbeSizeX = 0x1714; // int32
            public const nint m_Entity_nLightProbeSizeY = 0x1718; // int32
            public const nint m_Entity_nLightProbeSizeZ = 0x171C; // int32
            public const nint m_Entity_nLightProbeAtlasX = 0x1720; // int32
            public const nint m_Entity_nLightProbeAtlasY = 0x1724; // int32
            public const nint m_Entity_nLightProbeAtlasZ = 0x1728; // int32
            public const nint m_Entity_bEnabled = 0x1741; // bool
        }
        // Parent: C_CSGO_EndOfMatchLineupEndpoint
        // Field count: 0
        public static class CCSGO_EndOfMatchLineupEnd {
        }
        // Parent: None
        // Field count: 0
        public static class C_MultiplayRules {
        }
        // Parent: CPlayerPawnComponent
        // Field count: 0
        public static class CPlayer_AutoaimServices {
        }
        // Parent: C_LightEntity
        // Field count: 0
        public static class C_LightDirectionalEntity {
        }
        // Parent: None
        // Field count: 83
        public static class C_BaseEntity {
            public const nint m_CBodyComponent = 0x30; // CBodyComponent*
            public const nint m_NetworkTransmitComponent = 0x38; // CNetworkTransmitComponent
            public const nint m_nLastThinkTick = 0x328; // GameTick_t
            public const nint m_pGameSceneNode = 0x330; // CGameSceneNode*
            public const nint m_pRenderComponent = 0x338; // CRenderComponent*
            public const nint m_pCollision = 0x340; // CCollisionProperty*
            public const nint m_iMaxHealth = 0x348; // int32
            public const nint m_iHealth = 0x34C; // int32
            public const nint m_flDamageAccumulator = 0x350; // float32
            public const nint m_lifeState = 0x354; // uint8
            public const nint m_bTakesDamage = 0x355; // bool
            public const nint m_nTakeDamageFlags = 0x358; // TakeDamageFlags_t
            public const nint m_nPlatformType = 0x360; // EntityPlatformTypes_t
            public const nint m_ubInterpolationFrame = 0x361; // uint8
            public const nint m_hSceneObjectController = 0x364; // CHandle<C_BaseEntity>
            public const nint m_nNoInterpolationTick = 0x368; // int32
            public const nint m_nVisibilityNoInterpolationTick = 0x36C; // int32
            public const nint m_flProxyRandomValue = 0x370; // float32
            public const nint m_iEFlags = 0x374; // int32
            public const nint m_nWaterType = 0x378; // uint8
            public const nint m_bInterpolateEvenWithNoModel = 0x379; // bool
            public const nint m_bPredictionEligible = 0x37A; // bool
            public const nint m_bApplyLayerMatchIDToModel = 0x37B; // bool
            public const nint m_tokLayerMatchID = 0x37C; // CUtlStringToken
            public const nint m_nSubclassID = 0x380; // CUtlStringToken
            public const nint m_nSimulationTick = 0x390; // int32
            public const nint m_iCurrentThinkContext = 0x394; // int32
            public const nint m_aThinkFunctions = 0x398; // CUtlVector<thinkfunc_t>
            public const nint m_bDisabledContextThinks = 0x3B0; // bool
            public const nint m_flAnimTime = 0x3B4; // float32
            public const nint m_flSimulationTime = 0x3B8; // float32
            public const nint m_nSceneObjectOverrideFlags = 0x3BC; // uint8
            public const nint m_bHasSuccessfullyInterpolated = 0x3BD; // bool
            public const nint m_bHasAddedVarsToInterpolation = 0x3BE; // bool
            public const nint m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x3BF; // bool
            public const nint m_nInterpolationLatchDirtyFlags = 0x3C0; // int32[2]
            public const nint m_ListEntry = 0x3C8; // uint16[11]
            public const nint m_flCreateTime = 0x3E0; // GameTime_t
            public const nint m_flSpeed = 0x3E4; // float32
            public const nint m_EntClientFlags = 0x3E8; // uint16
            public const nint m_bClientSideRagdoll = 0x3EA; // bool
            public const nint m_iTeamNum = 0x3EB; // uint8
            public const nint m_spawnflags = 0x3EC; // uint32
            public const nint m_nNextThinkTick = 0x3F0; // GameTick_t
            public const nint m_fFlags = 0x3F8; // uint32
            public const nint m_vecAbsVelocity = 0x3FC; // Vector
            public const nint m_vecServerVelocity = 0x408; // CNetworkVelocityVector
            public const nint m_vecVelocity = 0x430; // CNetworkVelocityVector
            public const nint m_vecBaseVelocity = 0x510; // Vector
            public const nint m_hEffectEntity = 0x51C; // CHandle<C_BaseEntity>
            public const nint m_hOwnerEntity = 0x520; // CHandle<C_BaseEntity>
            public const nint m_MoveCollide = 0x524; // MoveCollide_t
            public const nint m_MoveType = 0x525; // MoveType_t
            public const nint m_nActualMoveType = 0x526; // MoveType_t
            public const nint m_flWaterLevel = 0x528; // float32
            public const nint m_fEffects = 0x52C; // uint32
            public const nint m_hGroundEntity = 0x530; // CHandle<C_BaseEntity>
            public const nint m_nGroundBodyIndex = 0x534; // int32
            public const nint m_flFriction = 0x538; // float32
            public const nint m_flElasticity = 0x53C; // float32
            public const nint m_flGravityScale = 0x540; // float32
            public const nint m_flTimeScale = 0x544; // float32
            public const nint m_bAnimatedEveryTick = 0x548; // bool
            public const nint m_bGravityDisabled = 0x549; // bool
            public const nint m_flNavIgnoreUntilTime = 0x54C; // GameTime_t
            public const nint m_hThink = 0x550; // uint16
            public const nint m_fBBoxVisFlags = 0x560; // uint8
            public const nint m_flActualGravityScale = 0x564; // float32
            public const nint m_bGravityActuallyDisabled = 0x568; // bool
            public const nint m_bPredictable = 0x569; // bool
            public const nint m_bRenderWithViewModels = 0x56A; // bool
            public const nint m_nFirstPredictableCommand = 0x56C; // int32
            public const nint m_nLastPredictableCommand = 0x570; // int32
            public const nint m_hOldMoveParent = 0x574; // CHandle<C_BaseEntity>
            public const nint m_Particles = 0x578; // CParticleProperty
            public const nint m_vecAngVelocity = 0x5A8; // QAngle
            public const nint m_DataChangeEventRef = 0x5B4; // int32
            public const nint m_dependencies = 0x5B8; // CUtlVector<CEntityHandle>
            public const nint m_nCreationTick = 0x5D0; // int32
            public const nint m_bAnimTimeChanged = 0x5E1; // bool
            public const nint m_bSimulationTimeChanged = 0x5E2; // bool
            public const nint m_sUniqueHammerID = 0x5F0; // CUtlString
            public const nint m_nBloodType = 0x5F8; // BloodType
        }
        // Parent: None
        // Field count: 4
        public static class ActiveModelConfig_t {
            public const nint m_Handle = 0x30; // ModelConfigHandle_t
            public const nint m_Name = 0x38; // CUtlSymbolLarge
            public const nint m_AssociatedEntities = 0x40; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
            public const nint m_AssociatedEntityNames = 0x58; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponSSG08 {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CPulseCell_Value_Curve {
            public const nint m_Curve = 0x48; // CPiecewiseCurve
        }
        // Parent: C_DynamicProp
        // Field count: 7
        public static class C_Chicken {
            public const nint m_hHolidayHatAddon = 0x13A8; // CHandle<CBaseAnimGraph>
            public const nint m_jumpedThisFrame = 0x13AC; // bool
            public const nint m_leader = 0x13B0; // CHandle<C_CSPlayerPawn>
            public const nint m_AttributeManager = 0x13B8; // C_AttributeContainer
            public const nint m_bAttributesInitialized = 0x1888; // bool
            public const nint m_hWaterWakeParticles = 0x188C; // ParticleIndex_t
            public const nint m_bIsPreviewModel = 0x1890; // bool
        }
        // Parent: C_BaseCombatCharacter
        // Field count: 28
        public static class C_BasePlayerPawn {
            public const nint m_pWeaponServices = 0x11E0; // CPlayer_WeaponServices*
            public const nint m_pItemServices = 0x11E8; // CPlayer_ItemServices*
            public const nint m_pAutoaimServices = 0x11F0; // CPlayer_AutoaimServices*
            public const nint m_pObserverServices = 0x11F8; // CPlayer_ObserverServices*
            public const nint m_pWaterServices = 0x1200; // CPlayer_WaterServices*
            public const nint m_pUseServices = 0x1208; // CPlayer_UseServices*
            public const nint m_pFlashlightServices = 0x1210; // CPlayer_FlashlightServices*
            public const nint m_pCameraServices = 0x1218; // CPlayer_CameraServices*
            public const nint m_pMovementServices = 0x1220; // CPlayer_MovementServices*
            public const nint m_ServerViewAngleChanges = 0x1230; // C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
            public const nint v_angle = 0x1298; // QAngle
            public const nint v_anglePrevious = 0x12A4; // QAngle
            public const nint m_iHideHUD = 0x12B0; // uint32
            public const nint m_skybox3d = 0x12B8; // sky3dparams_t
            public const nint m_flDeathTime = 0x1348; // GameTime_t
            public const nint m_vecPredictionError = 0x134C; // Vector
            public const nint m_flPredictionErrorTime = 0x1358; // GameTime_t
            public const nint m_vecLastCameraSetupLocalOrigin = 0x1378; // Vector
            public const nint m_flLastCameraSetupTime = 0x1384; // GameTime_t
            public const nint m_flFOVSensitivityAdjust = 0x1388; // float32
            public const nint m_flMouseSensitivity = 0x138C; // float32
            public const nint m_vOldOrigin = 0x1390; // Vector
            public const nint m_flOldSimulationTime = 0x139C; // float32
            public const nint m_nLastExecutedCommandNumber = 0x13A0; // int32
            public const nint m_nLastExecutedCommandTick = 0x13A4; // int32
            public const nint m_hController = 0x13A8; // CHandle<CBasePlayerController>
            public const nint m_hDefaultController = 0x13AC; // CHandle<CBasePlayerController>
            public const nint m_bIsSwappingToPredictableController = 0x13B0; // bool
        }
        // Parent: C_SoundOpvarSetPointEntity
        // Field count: 0
        public static class C_SoundOpvarSetAABBEntity {
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponBizon {
        }
        // Parent: C_CS2WeaponModuleBase
        // Field count: 1
        public static class C_StattrakModule {
            public const nint m_bKnife = 0x1160; // bool
        }
        // Parent: CCSPlayerBase_CameraServices
        // Field count: 0
        public static class CCSObserver_CameraServices {
        }
        // Parent: CEnvSoundscape
        // Field count: 1
        public static class CEnvSoundscapeProxy {
            public const nint m_MainSoundscapeName = 0x690; // CUtlSymbolLarge
        }
        // Parent: C_BaseEntity
        // Field count: 15
        public static class C_SoundEventEntity {
            public const nint m_bStartOnSpawn = 0x600; // bool
            public const nint m_bToLocalPlayer = 0x601; // bool
            public const nint m_bStopOnNew = 0x602; // bool
            public const nint m_bSaveRestore = 0x603; // bool
            public const nint m_bSavedIsPlaying = 0x604; // bool
            public const nint m_flSavedElapsedTime = 0x608; // float32
            public const nint m_iszSourceEntityName = 0x610; // CUtlSymbolLarge
            public const nint m_iszAttachmentName = 0x618; // CUtlSymbolLarge
            public const nint m_onGUIDChanged = 0x620; // CEntityOutputTemplate<SndOpEventGuid_t>
            public const nint m_onSoundFinished = 0x650; // CEntityIOOutput
            public const nint m_flClientCullRadius = 0x668; // float32
            public const nint m_iszSoundName = 0x698; // CUtlSymbolLarge
            public const nint m_hSource = 0x6B4; // CEntityHandle
            public const nint m_nEntityIndexSelection = 0x6B8; // int32
            public const nint m_bClientSideOnly = 0x0; // bitfield:1
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_EventHandler {
            public const nint m_EventName = 0x80; // PulseSymbol_t
        }
        // Parent: C_LightEntity
        // Field count: 0
        public static class C_LightOrthoEntity {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseFlow {
        }
        // Parent: C_BaseTrigger
        // Field count: 1
        public static class CBombTarget {
            public const nint m_bBombPlantedHere = 0x1078; // bool
        }
        // Parent: C_CSWeaponBase
        // Field count: 1
        public static class C_Knife {
            public const nint m_bFirstAttack = 0x1CB0; // bool
        }
        // Parent: C_CSGO_TeamPreviewCamera
        // Field count: 0
        public static class C_CSGO_TerroristWingmanIntroCamera {
        }
        // Parent: CGameSceneNode
        // Field count: 7
        public static class CSkeletonInstance {
            public const nint m_modelState = 0x150; // CModelState
            public const nint m_bUseParentRenderBounds = 0x3C0; // bool
            public const nint m_bDisableSolidCollisionsForHierarchy = 0x3C1; // bool
            public const nint m_bDirtyMotionType = 0x0; // bitfield:1
            public const nint m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
            public const nint m_materialGroup = 0x3C4; // CUtlStringToken
            public const nint m_nHitboxSet = 0x3C8; // uint8
        }
        // Parent: None
        // Field count: 0
        public static class CEntityComponent {
        }
        // Parent: C_Item
        // Field count: 2
        public static class C_ItemDogtags {
            public const nint m_OwningPlayer = 0x17C8; // CHandle<C_CSPlayerPawn>
            public const nint m_KillingPlayer = 0x17CC; // CHandle<C_CSPlayerPawn>
        }
        // Parent: CBaseAnimGraph
        // Field count: 0
        public static class C_LateUpdatedAnimating {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_CycleShuffled__InstanceState_t {
            public const nint m_Shuffle = 0x0; // CUtlVectorFixedGrowable<uint8,8>
            public const nint m_nNextShuffle = 0x20; // int32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseLerp__CursorState_t {
            public const nint m_StartTime = 0x0; // GameTime_t
            public const nint m_EndTime = 0x4; // GameTime_t
        }
        // Parent: None
        // Field count: 0
        public static class CPulseAnimFuncs {
        }
        // Parent: C_BaseModelEntity
        // Field count: 4
        public static class C_BaseClientUIEntity {
            public const nint m_bEnabled = 0xFB0; // bool
            public const nint m_DialogXMLName = 0xFB8; // CUtlSymbolLarge
            public const nint m_PanelClassName = 0xFC0; // CUtlSymbolLarge
            public const nint m_PanelID = 0xFC8; // CUtlSymbolLarge
        }
        // Parent: None
        // Field count: 1
        public static class CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
            public const nint m_TagName = 0x0; // PulseSymbol_t
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyDescription
        public static class CPulseArraylib {
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponUSPSilencer {
        }
        // Parent: C_BaseCSGrenadeProjectile
        // Field count: 1
        public static class C_MolotovProjectile {
            public const nint m_bIsIncGrenade = 0x1238; // bool
        }
        // Parent: C_BaseTrigger
        // Field count: 0
        public static class C_TriggerLerpObject {
        }
        // Parent: None
        // Field count: 0
        public static class CPointTemplateAPI {
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponRevolver {
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponElite {
        }
        // Parent: C_DynamicProp
        // Field count: 0
        public static class C_DynamicPropAlias_cable_dynamic {
        }
        // Parent: CBaseAnimGraph
        // Field count: 4
        public static class CBaseProp {
            public const nint m_bModelOverrodeBlockLOS = 0x1158; // bool
            public const nint m_iShapeType = 0x115C; // int32
            public const nint m_bConformToCollisionBounds = 0x1160; // bool
            public const nint m_mPreferredCatchTransform = 0x1170; // CTransform
        }
        // Parent: C_PointEntity
        // Field count: 12
        public static class CInfoOffscreenPanoramaTexture {
            public const nint m_bDisabled = 0x600; // bool
            public const nint m_nResolutionX = 0x604; // int32
            public const nint m_nResolutionY = 0x608; // int32
            public const nint m_szPanelType = 0x610; // CUtlSymbolLarge
            public const nint m_szLayoutFileName = 0x618; // CUtlSymbolLarge
            public const nint m_RenderAttrName = 0x620; // CUtlSymbolLarge
            public const nint m_TargetEntities = 0x628; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
            public const nint m_nTargetChangeCount = 0x640; // int32
            public const nint m_vecCSSClasses = 0x648; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            public const nint m_szTargetsName = 0x660; // CUtlSymbolLarge
            public const nint m_AdditionalTargetEntities = 0x668; // CUtlVector<CHandle<C_BaseModelEntity>>
            public const nint m_bCheckCSSClasses = 0x7E0; // bool
        }
        // Parent: None
        // Field count: 84
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertySuppressBaseClassField
        // MPropertySuppressBaseClassField
        public static class CCSWeaponBaseVData {
            public const nint m_WeaponType = 0x520; // CSWeaponType
            public const nint m_WeaponCategory = 0x524; // CSWeaponCategory
            public const nint m_szAnimSkeleton = 0x528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCNmSkeleton>>
            public const nint m_vecMuzzlePos0 = 0x608; // Vector
            public const nint m_vecMuzzlePos1 = 0x614; // Vector
            public const nint m_szTracerParticle = 0x620; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            public const nint m_GearSlot = 0x700; // gear_slot_t
            public const nint m_GearSlotPosition = 0x704; // int32
            public const nint m_DefaultLoadoutSlot = 0x708; // loadout_slot_t
            public const nint m_nPrice = 0x70C; // int32
            public const nint m_nKillAward = 0x710; // int32
            public const nint m_nPrimaryReserveAmmoMax = 0x714; // int32
            public const nint m_nSecondaryReserveAmmoMax = 0x718; // int32
            public const nint m_bMeleeWeapon = 0x71C; // bool
            public const nint m_bHasBurstMode = 0x71D; // bool
            public const nint m_bIsRevolver = 0x71E; // bool
            public const nint m_bCannotShootUnderwater = 0x71F; // bool
            public const nint m_szName = 0x720; // CGlobalSymbol
            public const nint m_eSilencerType = 0x728; // CSWeaponSilencerType
            public const nint m_nCrosshairMinDistance = 0x72C; // int32
            public const nint m_nCrosshairDeltaDistance = 0x730; // int32
            public const nint m_bIsFullAuto = 0x734; // bool
            public const nint m_nNumBullets = 0x738; // int32
            public const nint m_bReloadsSingleShells = 0x73C; // bool
            public const nint m_flCycleTime = 0x740; // CFiringModeFloat
            public const nint m_flCycleTimeWhenInBurstMode = 0x748; // float32
            public const nint m_flTimeBetweenBurstShots = 0x74C; // float32
            public const nint m_flMaxSpeed = 0x750; // CFiringModeFloat
            public const nint m_flSpread = 0x758; // CFiringModeFloat
            public const nint m_flInaccuracyCrouch = 0x760; // CFiringModeFloat
            public const nint m_flInaccuracyStand = 0x768; // CFiringModeFloat
            public const nint m_flInaccuracyJump = 0x770; // CFiringModeFloat
            public const nint m_flInaccuracyLand = 0x778; // CFiringModeFloat
            public const nint m_flInaccuracyLadder = 0x780; // CFiringModeFloat
            public const nint m_flInaccuracyFire = 0x788; // CFiringModeFloat
            public const nint m_flInaccuracyMove = 0x790; // CFiringModeFloat
            public const nint m_flRecoilAngle = 0x798; // CFiringModeFloat
            public const nint m_flRecoilAngleVariance = 0x7A0; // CFiringModeFloat
            public const nint m_flRecoilMagnitude = 0x7A8; // CFiringModeFloat
            public const nint m_flRecoilMagnitudeVariance = 0x7B0; // CFiringModeFloat
            public const nint m_nTracerFrequency = 0x7B8; // CFiringModeInt
            public const nint m_flInaccuracyJumpInitial = 0x7C0; // float32
            public const nint m_flInaccuracyJumpApex = 0x7C4; // float32
            public const nint m_flInaccuracyReload = 0x7C8; // float32
            public const nint m_flDeployDuration = 0x7CC; // float32
            public const nint m_flDisallowAttackAfterReloadStartDuration = 0x7D0; // float32
            public const nint m_nBurstShotCount = 0x7D4; // int32
            public const nint m_bAllowBurstHolster = 0x7D8; // bool
            public const nint m_nRecoilSeed = 0x7DC; // int32
            public const nint m_nSpreadSeed = 0x7E0; // int32
            public const nint m_flAttackMovespeedFactor = 0x7E4; // float32
            public const nint m_flInaccuracyPitchShift = 0x7E8; // float32
            public const nint m_flInaccuracyAltSoundThreshold = 0x7EC; // float32
            public const nint m_szUseRadioSubtitle = 0x7F0; // CUtlString
            public const nint m_bUnzoomsAfterShot = 0x7F8; // bool
            public const nint m_bHideViewModelWhenZoomed = 0x7F9; // bool
            public const nint m_nZoomLevels = 0x7FC; // int32
            public const nint m_nZoomFOV1 = 0x800; // int32
            public const nint m_nZoomFOV2 = 0x804; // int32
            public const nint m_flZoomTime0 = 0x808; // float32
            public const nint m_flZoomTime1 = 0x80C; // float32
            public const nint m_flZoomTime2 = 0x810; // float32
            public const nint m_flIronSightPullUpSpeed = 0x814; // float32
            public const nint m_flIronSightPutDownSpeed = 0x818; // float32
            public const nint m_flIronSightFOV = 0x81C; // float32
            public const nint m_flIronSightPivotForward = 0x820; // float32
            public const nint m_flIronSightLooseness = 0x824; // float32
            public const nint m_nDamage = 0x828; // int32
            public const nint m_flHeadshotMultiplier = 0x82C; // float32
            public const nint m_flArmorRatio = 0x830; // float32
            public const nint m_flPenetration = 0x834; // float32
            public const nint m_flRange = 0x838; // float32
            public const nint m_flRangeModifier = 0x83C; // float32
            public const nint m_flFlinchVelocityModifierLarge = 0x840; // float32
            public const nint m_flFlinchVelocityModifierSmall = 0x844; // float32
            public const nint m_flRecoveryTimeCrouch = 0x848; // float32
            public const nint m_flRecoveryTimeStand = 0x84C; // float32
            public const nint m_flRecoveryTimeCrouchFinal = 0x850; // float32
            public const nint m_flRecoveryTimeStandFinal = 0x854; // float32
            public const nint m_nRecoveryTransitionStartBullet = 0x858; // int32
            public const nint m_nRecoveryTransitionEndBullet = 0x85C; // int32
            public const nint m_flThrowVelocity = 0x860; // float32
            public const nint m_vSmokeColor = 0x864; // Vector
            public const nint m_szAnimClass = 0x870; // CGlobalSymbol
        }
        // Parent: None
        // Field count: 6
        public static class CAttributeManager {
            public const nint m_Providers = 0x8; // CUtlVector<CHandle<C_BaseEntity>>
            public const nint m_iReapplyProvisionParity = 0x20; // int32
            public const nint m_hOuter = 0x24; // CHandle<C_BaseEntity>
            public const nint m_bPreventLoopback = 0x28; // bool
            public const nint m_ProviderType = 0x2C; // attributeprovidertypes_t
            public const nint m_CachedResults = 0x30; // CUtlVector<CAttributeManager::cached_attribute_float_t>
        }
        // Parent: None
        // Field count: 0
        public static class SignatureOutflow_Continue {
        }
        // Parent: C_PointEntity
        // Field count: 0
        public static class CInfoTarget {
        }
        // Parent: CPlayerPawnComponent
        // Field count: 20
        public static class CPlayer_CameraServices {
            public const nint m_vecCsViewPunchAngle = 0x48; // QAngle
            public const nint m_nCsViewPunchAngleTick = 0x54; // GameTick_t
            public const nint m_flCsViewPunchAngleTickRatio = 0x58; // float32
            public const nint m_PlayerFog = 0x60; // C_fogplayerparams_t
            public const nint m_hColorCorrectionCtrl = 0xA0; // CHandle<C_ColorCorrection>
            public const nint m_hViewEntity = 0xA4; // CHandle<C_BaseEntity>
            public const nint m_hTonemapController = 0xA8; // CHandle<C_TonemapController2>
            public const nint m_audio = 0xB0; // audioparams_t
            public const nint m_PostProcessingVolumes = 0x128; // C_NetworkUtlVectorBase<CHandle<C_PostProcessingVolume>>
            public const nint m_flOldPlayerZ = 0x140; // float32
            public const nint m_flOldPlayerViewOffsetZ = 0x144; // float32
            public const nint m_CurrentFog = 0x148; // fogparams_t
            public const nint m_hOldFogController = 0x1B0; // CHandle<C_FogController>
            public const nint m_bOverrideFogColor = 0x1B4; // bool[5]
            public const nint m_OverrideFogColor = 0x1B9; // Color[5]
            public const nint m_bOverrideFogStartEnd = 0x1CD; // bool[5]
            public const nint m_fOverrideFogStart = 0x1D4; // float32[5]
            public const nint m_fOverrideFogEnd = 0x1E8; // float32[5]
            public const nint m_hActivePostProcessingVolume = 0x1FC; // CHandle<C_PostProcessingVolume>
            public const nint m_angDemoViewAngles = 0x200; // QAngle
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Timeline {
            public const nint m_TimelineEvents = 0x48; // CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
            public const nint m_bWaitForChildOutflows = 0x60; // bool
            public const nint m_OnFinished = 0x68; // CPulse_ResumePoint
            public const nint m_OnCanceled = 0xB0; // CPulse_ResumePoint
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_EntOutputHandler {
            public const nint m_SourceEntity = 0x80; // PulseSymbol_t
            public const nint m_SourceOutput = 0x90; // PulseSymbol_t
            public const nint m_ExpectedParamType = 0xA0; // CPulseValueFullType
        }
        // Parent: C_CSWeaponBase
        // Field count: 14
        public static class C_BaseCSGrenade {
            public const nint m_bClientPredictDelete = 0x1CB0; // bool
            public const nint m_bRedraw = 0x1CB1; // bool
            public const nint m_bIsHeldByPlayer = 0x1CB2; // bool
            public const nint m_bPinPulled = 0x1CB3; // bool
            public const nint m_bJumpThrow = 0x1CB4; // bool
            public const nint m_bThrowAnimating = 0x1CB5; // bool
            public const nint m_fThrowTime = 0x1CB8; // GameTime_t
            public const nint m_flThrowStrength = 0x1CC0; // float32
            public const nint m_fDropTime = 0x1D38; // GameTime_t
            public const nint m_fPinPullTime = 0x1D3C; // GameTime_t
            public const nint m_bJustPulledPin = 0x1D40; // bool
            public const nint m_nNextHoldTick = 0x1D44; // GameTick_t
            public const nint m_flNextHoldFrac = 0x1D48; // float32
            public const nint m_hSwitchToWeaponAfterThrow = 0x1D4C; // CHandle<C_CSWeaponBase>
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataOverlayType
        // MVDataAssociatedFile
        public static class CScenePayloadVData {
            public const nint m_eNPCBehavior = 0x0; // ENPCBehaviorOverride_t
            public const nint m_sPulseFile = 0x8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIPulseGraphDef>>
            public const nint m_sSceneFile = 0xE8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCChoreoSceneResource>>
            public const nint m_ePriority = 0x1C8; // InteractionPriority_t
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterAttributeInt {
            public const nint m_sAttributeName = 0x638; // CUtlSymbolLarge
        }
        // Parent: CLogicalEntity
        // Field count: 12
        public static class CPointTemplate {
            public const nint m_iszWorldName = 0x600; // CUtlSymbolLarge
            public const nint m_iszSource2EntityLumpName = 0x608; // CUtlSymbolLarge
            public const nint m_iszEntityFilterName = 0x610; // CUtlSymbolLarge
            public const nint m_flTimeoutInterval = 0x618; // float32
            public const nint m_bAsynchronouslySpawnEntities = 0x61C; // bool
            public const nint m_clientOnlyEntityBehavior = 0x620; // PointTemplateClientOnlyEntityBehavior_t
            public const nint m_ownerSpawnGroupType = 0x624; // PointTemplateOwnerSpawnGroupType_t
            public const nint m_createdSpawnGroupHandles = 0x628; // CUtlVector<uint32>
            public const nint m_SpawnedEntityHandles = 0x640; // CUtlVector<CEntityHandle>
            public const nint m_ScriptSpawnCallback = 0x658; // HSCRIPT
            public const nint m_ScriptCallbackScope = 0x660; // HSCRIPT
            public const nint m_OnEntitySpawned = 0x668; // CEntityOutputTemplate<CUtlVector<CEntityHandle>>
        }
        // Parent: CPlayerPawnComponent
        // Field count: 0
        public static class CPlayer_FlashlightServices {
        }
        // Parent: CBasePlayerController
        // Field count: 68
        public static class CCSPlayerController {
            public const nint m_pInGameMoneyServices = 0x800; // CCSPlayerController_InGameMoneyServices*
            public const nint m_pInventoryServices = 0x808; // CCSPlayerController_InventoryServices*
            public const nint m_pActionTrackingServices = 0x810; // CCSPlayerController_ActionTrackingServices*
            public const nint m_pDamageServices = 0x818; // CCSPlayerController_DamageServices*
            public const nint m_iPing = 0x820; // uint32
            public const nint m_bHasCommunicationAbuseMute = 0x824; // bool
            public const nint m_uiCommunicationMuteFlags = 0x828; // uint32
            public const nint m_szCrosshairCodes = 0x830; // CUtlSymbolLarge
            public const nint m_iPendingTeamNum = 0x838; // uint8
            public const nint m_flForceTeamTime = 0x83C; // GameTime_t
            public const nint m_iCompTeammateColor = 0x840; // int32
            public const nint m_bEverPlayedOnTeam = 0x844; // bool
            public const nint m_flPreviousForceJoinTeamTime = 0x848; // GameTime_t
            public const nint m_szClan = 0x850; // CUtlSymbolLarge
            public const nint m_sSanitizedPlayerName = 0x858; // CUtlString
            public const nint m_iCoachingTeam = 0x860; // int32
            public const nint m_nPlayerDominated = 0x868; // uint64
            public const nint m_nPlayerDominatingMe = 0x870; // uint64
            public const nint m_iCompetitiveRanking = 0x878; // int32
            public const nint m_iCompetitiveWins = 0x87C; // int32
            public const nint m_iCompetitiveRankType = 0x880; // int8
            public const nint m_iCompetitiveRankingPredicted_Win = 0x884; // int32
            public const nint m_iCompetitiveRankingPredicted_Loss = 0x888; // int32
            public const nint m_iCompetitiveRankingPredicted_Tie = 0x88C; // int32
            public const nint m_nEndMatchNextMapVote = 0x890; // int32
            public const nint m_unActiveQuestId = 0x894; // uint16
            public const nint m_rtActiveMissionPeriod = 0x898; // uint32
            public const nint m_nQuestProgressReason = 0x89C; // QuestProgress::Reason
            public const nint m_unPlayerTvControlFlags = 0x8A0; // uint32
            public const nint m_iDraftIndex = 0x8D0; // int32
            public const nint m_msQueuedModeDisconnectionTimestamp = 0x8D4; // uint32
            public const nint m_uiAbandonRecordedReason = 0x8D8; // uint32
            public const nint m_eNetworkDisconnectionReason = 0x8DC; // uint32
            public const nint m_bCannotBeKicked = 0x8E0; // bool
            public const nint m_bEverFullyConnected = 0x8E1; // bool
            public const nint m_bAbandonAllowsSurrender = 0x8E2; // bool
            public const nint m_bAbandonOffersInstantSurrender = 0x8E3; // bool
            public const nint m_bDisconnection1MinWarningPrinted = 0x8E4; // bool
            public const nint m_bScoreReported = 0x8E5; // bool
            public const nint m_nDisconnectionTick = 0x8E8; // int32
            public const nint m_bControllingBot = 0x8F8; // bool
            public const nint m_bHasControlledBotThisRound = 0x8F9; // bool
            public const nint m_bHasBeenControlledByPlayerThisRound = 0x8FA; // bool
            public const nint m_nBotsControlledThisRound = 0x8FC; // int32
            public const nint m_bCanControlObservedBot = 0x900; // bool
            public const nint m_hPlayerPawn = 0x904; // CHandle<C_CSPlayerPawn>
            public const nint m_hObserverPawn = 0x908; // CHandle<C_CSObserverPawn>
            public const nint m_bPawnIsAlive = 0x90C; // bool
            public const nint m_iPawnHealth = 0x910; // uint32
            public const nint m_iPawnArmor = 0x914; // int32
            public const nint m_bPawnHasDefuser = 0x918; // bool
            public const nint m_bPawnHasHelmet = 0x919; // bool
            public const nint m_nPawnCharacterDefIndex = 0x91A; // uint16
            public const nint m_iPawnLifetimeStart = 0x91C; // int32
            public const nint m_iPawnLifetimeEnd = 0x920; // int32
            public const nint m_iPawnBotDifficulty = 0x924; // int32
            public const nint m_hOriginalControllerOfCurrentPawn = 0x928; // CHandle<CCSPlayerController>
            public const nint m_iScore = 0x92C; // int32
            public const nint m_recentKillQueue = 0x930; // uint8[8]
            public const nint m_nFirstKill = 0x938; // uint8
            public const nint m_nKillCount = 0x939; // uint8
            public const nint m_bMvpNoMusic = 0x93A; // bool
            public const nint m_eMvpReason = 0x93C; // int32
            public const nint m_iMusicKitID = 0x940; // int32
            public const nint m_iMusicKitMVPs = 0x944; // int32
            public const nint m_iMVPs = 0x948; // int32
            public const nint m_bIsPlayerNameDirty = 0x94C; // bool
            public const nint m_bFireBulletsSeedSynchronized = 0x94D; // bool
        }
        // Parent: C_CSGO_TeamIntroCharacterPosition
        // Field count: 0
        public static class C_CSGO_TeamIntroCounterTerroristPosition {
        }
        // Parent: CBaseAnimGraph
        // Field count: 4
        public static class C_CSGO_PreviewModel {
            public const nint m_defaultAnim = 0x1158; // CUtlString
            public const nint m_nDefaultAnimLoopMode = 0x1160; // AnimLoopMode_t
            public const nint m_flInitialModelScale = 0x1164; // float32
            public const nint m_sInitialWeaponState = 0x1168; // CUtlString
        }
        // Parent: C_CSGO_TeamPreviewCharacterPosition
        // Field count: 0
        public static class C_CSGO_TeamSelectCharacterPosition {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_CycleOrdered__InstanceState_t {
            public const nint m_nNextIndex = 0x0; // int32
        }
        // Parent: C_SoundEventEntity
        // Field count: 2
        public static class C_SoundEventAABBEntity {
            public const nint m_vMins = 0x6C0; // Vector
            public const nint m_vMaxs = 0x6CC; // Vector
        }
        // Parent: CPlayer_MovementServices_Humanoid
        // Field count: 50
        public static class CCSPlayer_MovementServices {
            public const nint m_AnimationState = 0x2E0; // CCSPlayerAnimationState
            public const nint m_vecLadderNormal = 0x3D0; // Vector
            public const nint m_nLadderSurfacePropIndex = 0x3DC; // int32
            public const nint m_bDucked = 0x3E0; // bool
            public const nint m_flDuckAmount = 0x3E4; // float32
            public const nint m_flDuckSpeed = 0x3E8; // float32
            public const nint m_bDuckOverride = 0x3EC; // bool
            public const nint m_bDesiresDuck = 0x3ED; // bool
            public const nint m_bDucking = 0x3EE; // bool
            public const nint m_flDuckRootOffset = 0x3F0; // float32
            public const nint m_flDuckViewOffset = 0x3F4; // float32
            public const nint m_flLastDuckTime = 0x3F8; // float32
            public const nint m_flBombPlantViewOffset = 0x3FC; // float32
            public const nint m_vecLastPositionAtFullCrouchSpeed = 0x408; // Vector2D
            public const nint m_duckUntilOnGround = 0x410; // bool
            public const nint m_bHasWalkMovedSinceLastJump = 0x411; // bool
            public const nint m_bInStuckTest = 0x412; // bool
            public const nint m_nTraceCount = 0x620; // int32
            public const nint m_StuckLast = 0x624; // int32
            public const nint m_bSpeedCropped = 0x628; // bool
            public const nint m_nOldWaterLevel = 0x62C; // int32
            public const nint m_flWaterEntryTime = 0x630; // float32
            public const nint m_vecForward = 0x634; // Vector
            public const nint m_vecLeft = 0x640; // Vector
            public const nint m_vecUp = 0x64C; // Vector
            public const nint m_nGameCodeHasMovedPlayerAfterCommand = 0x658; // int32
            public const nint m_fStashGrenadeParameterWhen = 0x65C; // GameTime_t
            public const nint m_nButtonDownMaskPrev = 0x660; // uint64
            public const nint m_bUseFrictionStashedSpeed = 0x668; // bool
            public const nint m_flUseFrictionStashedSpeedUntilFrac = 0x66C; // float32
            public const nint m_flFrictionStashedSpeed = 0x670; // float32
            public const nint m_flStamina = 0x674; // float32
            public const nint m_flHeightAtJumpStart = 0x678; // float32
            public const nint m_flMaxJumpHeightThisJump = 0x67C; // float32
            public const nint m_flMaxJumpHeightLastJump = 0x680; // float32
            public const nint m_flStaminaAtJumpStart = 0x684; // float32
            public const nint m_flVelMulAtJumpStart = 0x688; // float32
            public const nint m_flAccumulatedJumpError = 0x68C; // float32
            public const nint m_LegacyJump = 0x690; // CCSPlayerLegacyJump
            public const nint m_ModernJump = 0x6A8; // CCSPlayerModernJump
            public const nint m_nLastJumpTick = 0x6E0; // GameTick_t
            public const nint m_flLastJumpFrac = 0x6E4; // float32
            public const nint m_flLastJumpVelocityZ = 0x6E8; // float32
            public const nint m_bJumpApexPending = 0x6EC; // bool
            public const nint m_flTicksSinceLastSurfingDetected = 0x6F0; // float32
            public const nint m_bWasSurfing = 0x6F4; // bool
            public const nint m_vecWalkWishVel = 0x784; // Vector2D
            public const nint m_gtLastTimeOnStaticWorldGround = 0xFB0; // GameTime_t
            public const nint m_gtLastTimeInAir = 0xFB4; // GameTime_t
            public const nint m_bHasEverProcessedCommand = 0xFB8; // bool
        }
        // Parent: None
        // Field count: 5
        public static class SellbackPurchaseEntry_t {
            public const nint m_unDefIdx = 0x30; // uint16
            public const nint m_nCost = 0x34; // int32
            public const nint m_nPrevArmor = 0x38; // int32
            public const nint m_bPrevHelmet = 0x3C; // bool
            public const nint m_hItem = 0x40; // CEntityHandle
        }
        // Parent: C_BaseEntity
        // Field count: 0
        public static class C_TintController {
        }
        // Parent: C_CSWeaponBase
        // Field count: 2
        public static class C_WeaponBaseItem {
            public const nint m_bSequenceInProgress = 0x1CB0; // bool
            public const nint m_bRedraw = 0x1CB1; // bool
        }
        // Parent: C_BaseModelEntity
        // Field count: 0
        public static class CWaterSplasher {
        }
        // Parent: C_BaseModelEntity
        // Field count: 0
        public static class C_FuncBrush {
        }
        // Parent: None
        // Field count: 3
        public static class PhysicsRagdollPose_t {
            public const nint m_Transforms = 0x8; // C_NetworkUtlVectorBase<CTransform>
            public const nint m_hOwner = 0x20; // CHandle<C_BaseEntity>
            public const nint m_bSetFromDebugHistory = 0x24; // bool
        }
        // Parent: CEntityComponent
        // Field count: 10
        public static class CPropDataComponent {
            public const nint m_flDmgModBullet = 0x10; // float32
            public const nint m_flDmgModClub = 0x14; // float32
            public const nint m_flDmgModExplosive = 0x18; // float32
            public const nint m_flDmgModFire = 0x1C; // float32
            public const nint m_iszPhysicsDamageTableName = 0x20; // CUtlSymbolLarge
            public const nint m_iszBasePropData = 0x28; // CUtlSymbolLarge
            public const nint m_nInteractions = 0x30; // int32
            public const nint m_bSpawnMotionDisabled = 0x34; // bool
            public const nint m_nDisableTakePhysicsDamageSpawnFlag = 0x38; // int32
            public const nint m_nMotionDisabledSpawnFlag = 0x3C; // int32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_LimitCount__InstanceState_t {
            public const nint m_nCurrentCount = 0x0; // int32
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 1
        public static class C_WeaponCZ75a {
            public const nint m_bMagazineRemoved = 0x1CE0; // bool
        }
        // Parent: C_BaseModelEntity
        // Field count: 7
        public static class C_DynamicLight {
            public const nint m_Flags = 0xFA8; // uint8
            public const nint m_LightStyle = 0xFA9; // uint8
            public const nint m_Radius = 0xFAC; // float32
            public const nint m_Exponent = 0xFB0; // int32
            public const nint m_InnerAngle = 0xFB4; // float32
            public const nint m_OuterAngle = 0xFB8; // float32
            public const nint m_SpotRadius = 0xFBC; // float32
        }
        // Parent: None
        // Field count: 29
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CCS2PawnGraphController {
            public const nint m_bIsDefusing = 0x2A0; // CAnimGraph2ParamOptionalRef<bool>
            public const nint m_moveType = 0x2B8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_moveDirectionID = 0x2D0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_flMoveSpeedX = 0x2E8; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flMoveSpeedY = 0x300; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flMoveSpeedHorizontal = 0x318; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flPreviousMoveSpeedHorizontal = 0x330; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flCrouchAmount = 0x348; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_bIsWalking = 0x360; // CAnimGraph2ParamOptionalRef<bool>
            public const nint m_bIsStutterStep = 0x378; // CAnimGraph2ParamOptionalRef<bool>
            public const nint m_flWeaponDropAmount = 0x390; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_groundAction = 0x3A8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_groundActionDirectionID = 0x3C0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_flGroundTurnAngleOrVelocity = 0x3D8; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flLadderCycle = 0x3F0; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flLadderYaw = 0x408; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flLadderYawBackwards = 0x420; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_airAction = 0x438; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_flAirHeightAboveGround = 0x450; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_leftFootTarget = 0x468; // CAnimGraph2ParamOptionalRef<CNmTarget>
            public const nint m_rightFootTarget = 0x480; // CAnimGraph2ParamOptionalRef<CNmTarget>
            public const nint m_flFlashedAmount = 0x498; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flAimPitchAngle = 0x4B0; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flAimYawAngle = 0x4C8; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flinchHead = 0x4E0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_flinchHeadRestart = 0x4F8; // CAnimGraph2ParamOptionalRef<bool>
            public const nint m_flinchBody = 0x510; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_flinchBodyRestart = 0x528; // CAnimGraph2ParamOptionalRef<bool>
            public const nint m_flinchIsOnFire = 0x540; // CAnimGraph2ParamOptionalRef<bool>
        }
        // Parent: None
        // Field count: 3
        public static class EngineCountdownTimer {
            public const nint m_duration = 0x8; // float32
            public const nint m_timestamp = 0xC; // float32
            public const nint m_timescale = 0x10; // float32
        }
        // Parent: C_SoundEventEntity
        // Field count: 1
        public static class C_SoundEventSphereEntity {
            public const nint m_flRadius = 0x6C0; // float32
        }
        // Parent: CPlayerControllerComponent
        // Field count: 2
        public static class CCSPlayerController_DamageServices {
            public const nint m_nSendUpdate = 0x40; // int32
            public const nint m_DamageList = 0x48; // C_UtlVectorEmbeddedNetworkVar<CDamageRecord>
        }
        // Parent: C_CSGO_PreviewPlayer
        // Field count: 0
        public static class C_CSGO_TeamPreviewModel {
        }
        // Parent: C_TonemapController2
        // Field count: 0
        public static class C_TonemapController2Alias_env_tonemap_controller2 {
        }
        // Parent: C_BaseModelEntity
        // Field count: 24
        public static class C_Inferno {
            public const nint m_nfxFireDamageEffect = 0xFE8; // ParticleIndex_t
            public const nint m_hInfernoPointsSnapshot = 0xFF0; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_hInfernoFillerPointsSnapshot = 0xFF8; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_hInfernoOutlinePointsSnapshot = 0x1000; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_hInfernoClimbingOutlinePointsSnapshot = 0x1008; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_hInfernoDecalsSnapshot = 0x1010; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_firePositions = 0x1018; // Vector[64]
            public const nint m_fireParentPositions = 0x1318; // Vector[64]
            public const nint m_bFireIsBurning = 0x1618; // bool[64]
            public const nint m_BurnNormal = 0x1658; // Vector[64]
            public const nint m_fireCount = 0x1958; // int32
            public const nint m_nInfernoType = 0x195C; // int32
            public const nint m_nFireLifetime = 0x1960; // float32
            public const nint m_bInPostEffectTime = 0x1964; // bool
            public const nint m_lastFireCount = 0x1968; // int32
            public const nint m_nFireEffectTickBegin = 0x196C; // int32
            public const nint m_drawableCount = 0x8570; // int32
            public const nint m_blosCheck = 0x8574; // bool
            public const nint m_nlosperiod = 0x8578; // int32
            public const nint m_maxFireHalfWidth = 0x857C; // float32
            public const nint m_maxFireHeight = 0x8580; // float32
            public const nint m_minBounds = 0x8584; // Vector
            public const nint m_maxBounds = 0x8590; // Vector
            public const nint m_flLastGrassBurnThink = 0x859C; // float32
        }
        // Parent: CBaseFilter
        // Field count: 0
        public static class CFilterLOS {
        }
        // Parent: C_BaseEntity
        // Field count: 7
        public static class CPointOrient {
            public const nint m_iszSpawnTargetName = 0x600; // CUtlSymbolLarge
            public const nint m_hTarget = 0x608; // CHandle<C_BaseEntity>
            public const nint m_bActive = 0x60C; // bool
            public const nint m_nGoalDirection = 0x610; // PointOrientGoalDirectionType_t
            public const nint m_nConstraint = 0x614; // PointOrientConstraint_t
            public const nint m_flMaxTurnRate = 0x618; // float32
            public const nint m_flLastGameTime = 0x61C; // GameTime_t
        }
        // Parent: C_BaseEntity
        // Field count: 1
        public static class C_GlobalLight {
            public const nint m_WindClothForceHandle = 0xAC0; // uint16
        }
        // Parent: C_BaseEntity
        // Field count: 1
        public static class C_EnvWindClientside {
            public const nint m_EnvWindShared = 0x600; // C_EnvWindShared
        }
        // Parent: None
        // Field count: 6
        public static class sky3dparams_t {
            public const nint scale = 0x8; // int16
            public const nint origin = 0xC; // Vector
            public const nint bClip3DSkyBoxNearToWorldFar = 0x18; // bool
            public const nint flClip3DSkyBoxNearToWorldFarOffset = 0x1C; // float32
            public const nint fog = 0x20; // fogparams_t
            public const nint m_nWorldGroupID = 0x88; // WorldGroupId_t
        }
        // Parent: C_BaseCSGrenadeProjectile
        // Field count: 0
        public static class C_FlashbangProjectile {
        }
        // Parent: C_SoundEventEntity
        // Field count: 5
        public static class C_SoundEventConeEntity {
            public const nint m_flEmitterAngle = 0x6C0; // float32
            public const nint m_flSweetSpotAngle = 0x6C4; // float32
            public const nint m_flAttenMin = 0x6C8; // float32
            public const nint m_flAttenMax = 0x6CC; // float32
            public const nint m_iszParameterName = 0x6D0; // CUtlSymbolLarge
        }
        // Parent: None
        // Field count: 4
        public static class CDestructiblePartsComponent {
            public const nint __m_pChainEntity = 0x0; // CNetworkVarChainer
            public const nint m_vecDamageTakenByHitGroup = 0x48; // CUtlVector<uint16>
            public const nint m_hOwner = 0x60; // CHandle<C_BaseModelEntity>
            public const nint m_pAnimGraphDestructibleGraphController = 0x68; // CBaseAnimGraphDestructibleParts_GraphController*
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponP90 {
        }
        // Parent: C_BaseEntity
        // Field count: 1
        public static class C_EnvWind {
            public const nint m_EnvWindShared = 0x600; // C_EnvWindShared
        }
        // Parent: C_CSGO_TeamPreviewCamera
        // Field count: 0
        public static class C_CSGO_TerroristTeamIntroCamera {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Step_DebugLog {
        }
        // Parent: CPlayerControllerComponent
        // Field count: 5
        public static class CCSPlayerController_ActionTrackingServices {
            public const nint m_perRoundStats = 0x40; // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
            public const nint m_matchStats = 0xA8; // CSMatchStats_t
            public const nint m_iNumRoundKills = 0x128; // int32
            public const nint m_iNumRoundKillsHeadshots = 0x12C; // int32
            public const nint m_flTotalRoundDamageDealt = 0x130; // float32
        }
        // Parent: CBodyComponentSkeletonInstance
        // Field count: 1
        public static class CBodyComponentBaseAnimGraph {
            public const nint m_animationController = 0x4E0; // CBaseAnimGraphController
        }
        // Parent: C_CSGO_PreviewModel
        // Field count: 0
        public static class C_CSGO_PreviewModelAlias_csgo_item_previewmodel {
        }
        // Parent: C_PointEntity
        // Field count: 0
        public static class C_InfoInstructorHintHostageRescueZone {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseYieldingInflow {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PulseNodeDynamicOutflows_t {
            public const nint m_Outflows = 0x0; // CUtlVector<PulseNodeDynamicOutflows_t::DynamicOutflow_t>
        }
        // Parent: C_BaseTrigger
        // Field count: 2
        public static class C_TriggerBuoyancy {
            public const nint m_BuoyancyHelper = 0x1078; // CBuoyancyHelper
            public const nint m_flFluidDensity = 0x1190; // float32
        }
        // Parent: CPlayer_MovementServices
        // Field count: 6
        public static class CPlayer_MovementServices_Humanoid {
            public const nint m_flStepSoundTime = 0x258; // float32
            public const nint m_flFallVelocity = 0x25C; // float32
            public const nint m_groundNormal = 0x260; // Vector
            public const nint m_flSurfaceFriction = 0x26C; // float32
            public const nint m_surfaceProps = 0x270; // CUtlStringToken
            public const nint m_nStepside = 0x280; // int32
        }
        // Parent: None
        // Field count: 1
        public static class CPulseCell_IsRequirementValid__Criteria_t {
            public const nint m_bIsValid = 0x0; // bool
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponTec9 {
        }
        // Parent: C_BreakableProp
        // Field count: 5
        public static class C_PhysPropClientside {
            public const nint m_flTouchDelta = 0x12D0; // GameTime_t
            public const nint m_fDeathTime = 0x12D4; // GameTime_t
            public const nint m_vecDamagePosition = 0x12D8; // VectorWS
            public const nint m_vecDamageDirection = 0x12E4; // Vector
            public const nint m_nDamageType = 0x12F0; // DamageTypes_t
        }
        // Parent: C_BaseToggle
        // Field count: 1
        public static class C_BaseDoor {
            public const nint m_bIsUsable = 0xFA8; // bool
        }
        // Parent: None
        // Field count: 5
        public static class CSMatchStats_t {
            public const nint m_iEnemy5Ks = 0x68; // int32
            public const nint m_iEnemy4Ks = 0x6C; // int32
            public const nint m_iEnemy3Ks = 0x70; // int32
            public const nint m_iEnemyKnifeKills = 0x74; // int32
            public const nint m_iEnemyTaserKills = 0x78; // int32
        }
        // Parent: None
        // Field count: 2
        public static class EntityRenderAttribute_t {
            public const nint m_ID = 0x30; // CUtlStringToken
            public const nint m_Values = 0x34; // Vector4D
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_ObservableVariableListener {
            public const nint m_nBlackboardReference = 0x80; // PulseRuntimeBlackboardReferenceIndex_t
            public const nint m_bSelfReference = 0x82; // bool
        }
        // Parent: None
        // Field count: 0
        public static class CFilterMultipleAPI {
        }
        // Parent: CHostageRescueZoneShim
        // Field count: 0
        public static class CHostageRescueZone {
        }
        // Parent: None
        // Field count: 14
        public static class CModelState {
            public const nint m_hModel = 0xA0; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_ModelName = 0xA8; // CUtlSymbolLarge
            public const nint m_pVPhysicsAggregate = 0xE0; // IPhysAggregateInstance*
            public const nint m_flRootBoneOffset_x = 0xE8; // float32
            public const nint m_flRootBoneOffset_y = 0xEC; // float32
            public const nint m_flRootBoneOffset_z = 0xF0; // float32
            public const nint m_nRootBoneOffsetResetSerialNumber = 0xF4; // uint8
            public const nint m_bClientClothCreationSuppressed = 0x110; // bool
            public const nint m_nAnimStateNoInterpSerialNumber = 0x1C0; // uint8
            public const nint m_MeshGroupMask = 0x1C8; // uint64
            public const nint m_nBodyGroupChoices = 0x218; // C_NetworkUtlVectorBase<int32>
            public const nint m_nIdealMotionType = 0x262; // int8
            public const nint m_nForceLOD = 0x263; // int8
            public const nint m_nClothUpdateFlags = 0x264; // int8
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_LerpCameraSettings__CursorState_t {
            public const nint m_hCamera = 0x8; // CHandle<C_PointCamera>
            public const nint m_OverlaidStart = 0xC; // PointCameraSettings_t
            public const nint m_OverlaidEnd = 0x1C; // PointCameraSettings_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_CycleOrdered {
            public const nint m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
        }
        // Parent: C_CSWeaponBase
        // Field count: 7
        public static class C_CSWeaponBaseGun {
            public const nint m_zoomLevel = 0x1CB0; // int32
            public const nint m_iBurstShotsRemaining = 0x1CB4; // int32
            public const nint m_iSilencerBodygroup = 0x1CB8; // int32
            public const nint m_silencedModelIndex = 0x1CC8; // int32
            public const nint m_inPrecache = 0x1CCC; // bool
            public const nint m_bNeedsBoltAction = 0x1CCD; // bool
            public const nint m_nRevolverCylinderIdx = 0x1CD0; // int32
        }
        // Parent: C_GameRulesProxy
        // Field count: 1
        public static class C_CSGameRulesProxy {
            public const nint m_pGameRules = 0x600; // C_CSGameRules*
        }
        // Parent: None
        // Field count: 17
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
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponP250 {
        }
        // Parent: C_PhysicsProp
        // Field count: 1
        public static class C_ShatterGlassShardPhysics {
            public const nint m_ShardDesc = 0x12E8; // shard_model_desc_t
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterMassGreater {
            public const nint m_fFilterMass = 0x638; // float32
        }
        // Parent: C_BaseModelEntity
        // Field count: 13
        public static class C_EntityDissolve {
            public const nint m_flStartTime = 0xFB0; // GameTime_t
            public const nint m_flFadeInStart = 0xFB4; // float32
            public const nint m_flFadeInLength = 0xFB8; // float32
            public const nint m_flFadeOutModelStart = 0xFBC; // float32
            public const nint m_flFadeOutModelLength = 0xFC0; // float32
            public const nint m_flFadeOutStart = 0xFC4; // float32
            public const nint m_flFadeOutLength = 0xFC8; // float32
            public const nint m_flNextSparkTime = 0xFCC; // GameTime_t
            public const nint m_nDissolveType = 0xFD0; // EntityDisolveType_t
            public const nint m_vDissolverOrigin = 0xFD4; // Vector
            public const nint m_nMagnitude = 0xFE0; // uint32
            public const nint m_bCoreExplode = 0xFE4; // bool
            public const nint m_bLinkedToServerEnt = 0xFE5; // bool
        }
        // Parent: C_SoundOpvarSetAABBEntity
        // Field count: 0
        public static class C_SoundOpvarSetOBBEntity {
        }
        // Parent: None
        // Field count: 1
        public static class CCSGameModeRules_ArmsRace {
            public const nint m_WeaponSequence = 0x30; // C_NetworkUtlVectorBase<CUtlString>
        }
        // Parent: C_FuncBrush
        // Field count: 8
        public static class C_FuncMonitor {
            public const nint m_targetCamera = 0xFA8; // CUtlString
            public const nint m_nResolutionEnum = 0xFB0; // int32
            public const nint m_bRenderShadows = 0xFB4; // bool
            public const nint m_bUseUniqueColorTarget = 0xFB5; // bool
            public const nint m_brushModelName = 0xFB8; // CUtlString
            public const nint m_hTargetCamera = 0xFC0; // CHandle<C_BaseEntity>
            public const nint m_bEnabled = 0xFC4; // bool
            public const nint m_bDraw3DSkybox = 0xFC5; // bool
        }
        // Parent: CBaseAnimGraph
        // Field count: 14
        public static class C_ClientRagdoll {
            public const nint m_bFadeOut = 0x1158; // bool
            public const nint m_bImportant = 0x1159; // bool
            public const nint m_flEffectTime = 0x115C; // GameTime_t
            public const nint m_gibDespawnTime = 0x1160; // GameTime_t
            public const nint m_iCurrentFriction = 0x1164; // int32
            public const nint m_iMinFriction = 0x1168; // int32
            public const nint m_iMaxFriction = 0x116C; // int32
            public const nint m_iFrictionAnimState = 0x1170; // int32
            public const nint m_bReleaseRagdoll = 0x1174; // bool
            public const nint m_iEyeAttachment = 0x1175; // AttachmentHandle_t
            public const nint m_bFadingOut = 0x1176; // bool
            public const nint m_flScaleEnd = 0x1178; // float32[10]
            public const nint m_flScaleTimeStart = 0x11A0; // GameTime_t[10]
            public const nint m_flScaleTimeEnd = 0x11C8; // GameTime_t[10]
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PulseSelectorOutflowList_t {
            public const nint m_Outflows = 0x0; // CUtlVector<OutflowWithRequirements_t>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_PlaySequence__CursorState_t {
            public const nint m_hTarget = 0x0; // CHandle<CBaseAnimGraph>
        }
        // Parent: CBodyComponent
        // Field count: 1
        public static class CBodyComponentSkeletonInstance {
            public const nint m_skeletonInstance = 0x80; // CSkeletonInstance
        }
        // Parent: CBaseAnimGraph
        // Field count: 0
        public static class C_CS2WeaponModuleBase {
        }
        // Parent: C_BaseEntity
        // Field count: 8
        public static class C_CSGO_TeamPreviewCharacterPosition {
            public const nint m_nVariant = 0x600; // int32
            public const nint m_nRandom = 0x604; // int32
            public const nint m_nOrdinal = 0x608; // int32
            public const nint m_sWeaponName = 0x610; // CUtlString
            public const nint m_xuid = 0x618; // uint64
            public const nint m_agentItem = 0x620; // C_EconItemView
            public const nint m_glovesItem = 0xA90; // C_EconItemView
            public const nint m_weaponItem = 0xF00; // C_EconItemView
        }
        // Parent: C_BaseCSGrenadeProjectile
        // Field count: 10
        public static class C_SmokeGrenadeProjectile {
            public const nint m_nSmokeEffectTickBegin = 0x1250; // int32
            public const nint m_bDidSmokeEffect = 0x1254; // bool
            public const nint m_nRandomSeed = 0x1258; // int32
            public const nint m_vSmokeColor = 0x125C; // Vector
            public const nint m_vSmokeDetonationPos = 0x1268; // Vector
            public const nint m_VoxelFrameData = 0x1278; // C_NetworkUtlVectorBase<uint8>
            public const nint m_nVoxelFrameDataSize = 0x1290; // int32
            public const nint m_nVoxelUpdate = 0x1294; // int32
            public const nint m_bSmokeVolumeDataReceived = 0x1298; // bool
            public const nint m_bSmokeEffectSpawned = 0x1299; // bool
        }
        // Parent: CEntityComponent
        // Field count: 1
        public static class CScriptComponent {
            public const nint m_scriptClassName = 0x30; // CUtlSymbolLarge
        }
        // Parent: CPlayerPawnComponent
        // Field count: 1
        public static class CCSPlayer_BuyServices {
            public const nint m_vecSellbackPurchaseEntries = 0x48; // C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
        }
        // Parent: C_BaseEntity
        // Field count: 0
        public static class C_PortraitWorldCallbackHandler {
        }
        // Parent: C_BreakableProp
        // Field count: 23
        public static class C_DynamicProp {
            public const nint m_bUseHitboxesForRenderBox = 0x12D0; // bool
            public const nint m_bUseAnimGraph = 0x12D1; // bool
            public const nint m_pOutputAnimBegun = 0x12D8; // CEntityIOOutput
            public const nint m_pOutputAnimOver = 0x12F0; // CEntityIOOutput
            public const nint m_pOutputAnimLoopCycleOver = 0x1308; // CEntityIOOutput
            public const nint m_OnAnimReachedStart = 0x1320; // CEntityIOOutput
            public const nint m_OnAnimReachedEnd = 0x1338; // CEntityIOOutput
            public const nint m_iszIdleAnim = 0x1350; // CUtlSymbolLarge
            public const nint m_nIdleAnimLoopMode = 0x1358; // AnimLoopMode_t
            public const nint m_bRandomizeCycle = 0x135C; // bool
            public const nint m_bStartDisabled = 0x135D; // bool
            public const nint m_bFiredStartEndOutput = 0x135E; // bool
            public const nint m_bForceNpcExclude = 0x135F; // bool
            public const nint m_bCreateNonSolid = 0x1360; // bool
            public const nint m_bIsOverrideProp = 0x1361; // bool
            public const nint m_iInitialGlowState = 0x1364; // int32
            public const nint m_nGlowRange = 0x1368; // int32
            public const nint m_nGlowRangeMin = 0x136C; // int32
            public const nint m_glowColor = 0x1370; // Color
            public const nint m_nGlowTeam = 0x1374; // int32
            public const nint m_iCachedFrameCount = 0x1378; // int32
            public const nint m_vecCachedRenderMins = 0x137C; // Vector
            public const nint m_vecCachedRenderMaxs = 0x1388; // Vector
        }
        // Parent: C_Team
        // Field count: 10
        public static class C_CSTeam {
            public const nint m_szTeamMatchStat = 0x6B8; // char[512]
            public const nint m_numMapVictories = 0x8B8; // int32
            public const nint m_bSurrendered = 0x8BC; // bool
            public const nint m_scoreFirstHalf = 0x8C0; // int32
            public const nint m_scoreSecondHalf = 0x8C4; // int32
            public const nint m_scoreOvertime = 0x8C8; // int32
            public const nint m_szClanTeamname = 0x8CC; // char[129]
            public const nint m_iClanID = 0x950; // uint32
            public const nint m_szTeamFlagImage = 0x954; // char[8]
            public const nint m_szTeamLogoImage = 0x95C; // char[8]
        }
        // Parent: C_CS2HudModelBase
        // Field count: 0
        public static class C_CS2HudModelWeapon {
        }
        // Parent: C_BaseModelEntity
        // Field count: 8
        public static class C_TextureBasedAnimatable {
            public const nint m_bLoop = 0xFA8; // bool
            public const nint m_flFPS = 0xFAC; // float32
            public const nint m_hPositionKeys = 0xFB0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hRotationKeys = 0xFB8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_vAnimationBoundsMin = 0xFC0; // Vector
            public const nint m_vAnimationBoundsMax = 0xFCC; // Vector
            public const nint m_flStartTime = 0xFD8; // float32
            public const nint m_flStartFrame = 0xFDC; // float32
        }
        // Parent: C_LightDirectionalEntity
        // Field count: 0
        public static class C_LightEnvironmentEntity {
        }
        // Parent: None
        // Field count: 0
        public static class DestructiblePartDamageRequestAPI {
        }
        // Parent: None
        // Field count: 0
        public static class CLogicRelayAPI {
        }
        // Parent: C_BaseTrigger
        // Field count: 13
        public static class C_TriggerPhysics {
            public const nint m_gravityScale = 0x1078; // float32
            public const nint m_linearLimit = 0x107C; // float32
            public const nint m_linearDamping = 0x1080; // float32
            public const nint m_angularLimit = 0x1084; // float32
            public const nint m_angularDamping = 0x1088; // float32
            public const nint m_linearForce = 0x108C; // float32
            public const nint m_flFrequency = 0x1090; // float32
            public const nint m_flDampingRatio = 0x1094; // float32
            public const nint m_vecLinearForcePointAt = 0x1098; // Vector
            public const nint m_bCollapseToForcePoint = 0x10A4; // bool
            public const nint m_vecLinearForcePointAtWorld = 0x10A8; // Vector
            public const nint m_vecLinearForceDirection = 0x10B4; // Vector
            public const nint m_bConvertToDebrisWhenPossible = 0x10C0; // bool
        }
        // Parent: C_BasePropDoor
        // Field count: 0
        public static class C_PropDoorRotating {
        }
        // Parent: C_BaseEntity
        // Field count: 2
        public static class C_HandleTest {
            public const nint m_Handle = 0x600; // CHandle<C_BaseEntity>
            public const nint m_bSendHandle = 0x604; // bool
        }
        // Parent: C_BaseEntity
        // Field count: 8
        public static class CInfoWorldLayer {
            public const nint m_pOutputOnEntitiesSpawned = 0x600; // CEntityIOOutput
            public const nint m_worldName = 0x618; // CUtlSymbolLarge
            public const nint m_layerName = 0x620; // CUtlSymbolLarge
            public const nint m_bWorldLayerVisible = 0x628; // bool
            public const nint m_bEntitiesSpawned = 0x629; // bool
            public const nint m_bCreateAsChildSpawnGroup = 0x62A; // bool
            public const nint m_hLayerSpawnGroup = 0x62C; // uint32
            public const nint m_bWorldLayerActuallyVisible = 0x630; // bool
        }
        // Parent: CBodyComponentSkeletonInstance
        // Field count: 0
        public static class CBodyComponentBaseModelEntity {
        }
        // Parent: CBaseAnimGraph
        // Field count: 1
        public static class C_Multimeter {
            public const nint m_hTargetC4 = 0x1158; // CHandle<C_PlantedC4>
        }
        // Parent: C_BaseToggle
        // Field count: 11
        public static class C_BaseTrigger {
            public const nint m_OnStartTouch = 0xFA8; // CEntityIOOutput
            public const nint m_OnStartTouchAll = 0xFC0; // CEntityIOOutput
            public const nint m_OnEndTouch = 0xFD8; // CEntityIOOutput
            public const nint m_OnEndTouchAll = 0xFF0; // CEntityIOOutput
            public const nint m_OnTouching = 0x1008; // CEntityIOOutput
            public const nint m_OnTouchingEachEntity = 0x1020; // CEntityIOOutput
            public const nint m_OnNotTouching = 0x1038; // CEntityIOOutput
            public const nint m_hTouchingEntities = 0x1050; // CUtlVector<CHandle<C_BaseEntity>>
            public const nint m_iFilterName = 0x1068; // CUtlSymbolLarge
            public const nint m_hFilter = 0x1070; // CHandle<CBaseFilter>
            public const nint m_bDisabled = 0x1074; // bool
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class FilterDamageType {
            public const nint m_iDamageType = 0x638; // int32
        }
        // Parent: None
        // Field count: 2
        public static class CAttributeList {
            public const nint m_Attributes = 0x8; // C_UtlVectorEmbeddedNetworkVar<CEconItemAttribute>
            public const nint m_pManager = 0x70; // CAttributeManager*
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
        public static class CPulseCell_Inflow_Wait {
            public const nint m_WakeResume = 0x48; // CPulse_ResumePoint
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterProximity {
            public const nint m_flRadius = 0x638; // float32
        }
        // Parent: None
        // Field count: 20
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CCS2WeaponGraphController {
            public const nint m_action = 0x88; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_bActionReset = 0xA0; // CAnimGraph2ParamOptionalRef<bool>
            public const nint m_flWeaponActionSpeedScale = 0xB8; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_weaponCategory = 0xD0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_weaponType = 0xE8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_weaponExtraInfo = 0x100; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_flWeaponAmmo = 0x118; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flWeaponAmmoMax = 0x130; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flWeaponAmmoReserve = 0x148; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_bWeaponIsSilenced = 0x160; // CAnimGraph2ParamOptionalRef<bool>
            public const nint m_flWeaponIronsightAmount = 0x178; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_bIsUsingLegacyModel = 0x190; // CAnimGraph2ParamOptionalRef<bool>
            public const nint m_idleVariation = 0x1A8; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_deployVariation = 0x1C0; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_attackType = 0x1D8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_attackThrowStrength = 0x1F0; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_flAttackVariation = 0x208; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_inspectVariation = 0x220; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_inspectExtraInfo = 0x238; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_reloadStage = 0x250; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
        }
        // Parent: None
        // Field count: 20
        public static class CEffectData {
            public const nint m_vOrigin = 0x8; // VectorWS
            public const nint m_vStart = 0x14; // VectorWS
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
            public const nint m_nHitBox = 0x60; // int16
            public const nint m_nColor = 0x62; // uint8
            public const nint m_fFlags = 0x63; // uint8
            public const nint m_nAttachmentIndex = 0x64; // AttachmentHandle_t
            public const nint m_nAttachmentName = 0x68; // CUtlStringToken
            public const nint m_iEffectName = 0x6C; // uint16
        }
        // Parent: C_BaseModelEntity
        // Field count: 24
        public static class C_ParticleSystem {
            public const nint m_szSnapshotFileName = 0xFA8; // char[512]
            public const nint m_bActive = 0x11A8; // bool
            public const nint m_bFrozen = 0x11A9; // bool
            public const nint m_flFreezeTransitionDuration = 0x11AC; // float32
            public const nint m_nStopType = 0x11B0; // int32
            public const nint m_bAnimateDuringGameplayPause = 0x11B4; // bool
            public const nint m_iEffectIndex = 0x11B8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_flStartTime = 0x11C0; // GameTime_t
            public const nint m_flPreSimTime = 0x11C4; // float32
            public const nint m_vServerControlPoints = 0x11C8; // Vector[4]
            public const nint m_iServerControlPointAssignments = 0x11F8; // uint8[4]
            public const nint m_hControlPointEnts = 0x11FC; // CHandle<C_BaseEntity>[64]
            public const nint m_bNoSave = 0x12FC; // bool
            public const nint m_bNoFreeze = 0x12FD; // bool
            public const nint m_bNoRamp = 0x12FE; // bool
            public const nint m_bStartActive = 0x12FF; // bool
            public const nint m_iszEffectName = 0x1300; // CUtlSymbolLarge
            public const nint m_iszControlPointNames = 0x1308; // CUtlSymbolLarge[64]
            public const nint m_nDataCP = 0x1508; // int32
            public const nint m_vecDataCPValue = 0x150C; // Vector
            public const nint m_nTintCP = 0x1518; // int32
            public const nint m_clrTint = 0x151C; // Color
            public const nint m_bOldActive = 0x1540; // bool
            public const nint m_bOldFrozen = 0x1541; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_CycleShuffled {
            public const nint m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponSCAR20 {
        }
        // Parent: C_BaseToggle
        // Field count: 0
        public static class C_FuncMover {
        }
        // Parent: None
        // Field count: 3
        public static class CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
            public const nint pItem = 0x0; // C_EconItemView*
            public const nint team = 0x8; // uint16
            public const nint slot = 0xA; // uint16
        }
        // Parent: CEntityComponent
        // Field count: 70
        public static class CLightComponent {
            public const nint __m_pChainEntity = 0x38; // CNetworkVarChainer
            public const nint m_Color = 0x75; // Color
            public const nint m_SecondaryColor = 0x79; // Color
            public const nint m_flBrightness = 0x80; // float32
            public const nint m_flBrightnessScale = 0x84; // float32
            public const nint m_flBrightnessMult = 0x88; // float32
            public const nint m_flRange = 0x8C; // float32
            public const nint m_flFalloff = 0x90; // float32
            public const nint m_flAttenuation0 = 0x94; // float32
            public const nint m_flAttenuation1 = 0x98; // float32
            public const nint m_flAttenuation2 = 0x9C; // float32
            public const nint m_flTheta = 0xA0; // float32
            public const nint m_flPhi = 0xA4; // float32
            public const nint m_hLightCookie = 0xA8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_nCascades = 0xB0; // int32
            public const nint m_nCastShadows = 0xB4; // int32
            public const nint m_nShadowWidth = 0xB8; // int32
            public const nint m_nShadowHeight = 0xBC; // int32
            public const nint m_bRenderDiffuse = 0xC0; // bool
            public const nint m_nRenderSpecular = 0xC4; // int32
            public const nint m_bRenderTransmissive = 0xC8; // bool
            public const nint m_flOrthoLightWidth = 0xCC; // float32
            public const nint m_flOrthoLightHeight = 0xD0; // float32
            public const nint m_nStyle = 0xD4; // int32
            public const nint m_Pattern = 0xD8; // CUtlString
            public const nint m_nCascadeRenderStaticObjects = 0xE0; // int32
            public const nint m_flShadowCascadeCrossFade = 0xE4; // float32
            public const nint m_flShadowCascadeDistanceFade = 0xE8; // float32
            public const nint m_flShadowCascadeDistance0 = 0xEC; // float32
            public const nint m_flShadowCascadeDistance1 = 0xF0; // float32
            public const nint m_flShadowCascadeDistance2 = 0xF4; // float32
            public const nint m_flShadowCascadeDistance3 = 0xF8; // float32
            public const nint m_nShadowCascadeResolution0 = 0xFC; // int32
            public const nint m_nShadowCascadeResolution1 = 0x100; // int32
            public const nint m_nShadowCascadeResolution2 = 0x104; // int32
            public const nint m_nShadowCascadeResolution3 = 0x108; // int32
            public const nint m_bUsesBakedShadowing = 0x10C; // bool
            public const nint m_nShadowPriority = 0x110; // int32
            public const nint m_nBakedShadowIndex = 0x114; // int32
            public const nint m_nLightPathUniqueId = 0x118; // int32
            public const nint m_nLightMapUniqueId = 0x11C; // int32
            public const nint m_bRenderToCubemaps = 0x120; // bool
            public const nint m_bAllowSSTGeneration = 0x121; // bool
            public const nint m_nDirectLight = 0x124; // int32
            public const nint m_nBounceLight = 0x128; // int32
            public const nint m_flBounceScale = 0x12C; // float32
            public const nint m_flFadeMinDist = 0x130; // float32
            public const nint m_flFadeMaxDist = 0x134; // float32
            public const nint m_flShadowFadeMinDist = 0x138; // float32
            public const nint m_flShadowFadeMaxDist = 0x13C; // float32
            public const nint m_bEnabled = 0x140; // bool
            public const nint m_bFlicker = 0x141; // bool
            public const nint m_bPrecomputedFieldsValid = 0x142; // bool
            public const nint m_vPrecomputedBoundsMins = 0x144; // Vector
            public const nint m_vPrecomputedBoundsMaxs = 0x150; // Vector
            public const nint m_vPrecomputedOBBOrigin = 0x15C; // Vector
            public const nint m_vPrecomputedOBBAngles = 0x168; // QAngle
            public const nint m_vPrecomputedOBBExtent = 0x174; // Vector
            public const nint m_flPrecomputedMaxRange = 0x180; // float32
            public const nint m_nFogLightingMode = 0x184; // int32
            public const nint m_flFogContributionStength = 0x188; // float32
            public const nint m_flNearClipPlane = 0x18C; // float32
            public const nint m_SkyColor = 0x190; // Color
            public const nint m_flSkyIntensity = 0x194; // float32
            public const nint m_SkyAmbientBounce = 0x198; // Color
            public const nint m_bUseSecondaryColor = 0x19C; // bool
            public const nint m_bMixedShadows = 0x19D; // bool
            public const nint m_flLightStyleStartTime = 0x1A0; // GameTime_t
            public const nint m_flCapsuleLength = 0x1A4; // float32
            public const nint m_flMinRoughness = 0x1A8; // float32
        }
        // Parent: C_BaseCSGrenade
        // Field count: 0
        public static class C_DecoyGrenade {
        }
        // Parent: CBaseAnimGraph
        // Field count: 0
        public static class C_WaterBullet {
        }
        // Parent: CPlayerPawnComponent
        // Field count: 4
        public static class CCSPlayer_ActionTrackingServices {
            public const nint m_hLastWeaponBeforeC4AutoSwitch = 0x48; // CHandle<C_BasePlayerWeapon>
            public const nint m_bIsRescuing = 0x4C; // bool
            public const nint m_weaponPurchasesThisMatch = 0x50; // WeaponPurchaseTracker_t
            public const nint m_weaponPurchasesThisRound = 0xC0; // WeaponPurchaseTracker_t
        }
        // Parent: C_BaseEntity
        // Field count: 18
        public static class C_EnvCubemap {
            public const nint m_Entity_hCubemapTexture = 0x680; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_bCustomCubemapTexture = 0x688; // bool
            public const nint m_Entity_flInfluenceRadius = 0x68C; // float32
            public const nint m_Entity_vBoxProjectMins = 0x690; // Vector
            public const nint m_Entity_vBoxProjectMaxs = 0x69C; // Vector
            public const nint m_Entity_bMoveable = 0x6A8; // bool
            public const nint m_Entity_nHandshake = 0x6AC; // int32
            public const nint m_Entity_nEnvCubeMapArrayIndex = 0x6B0; // int32
            public const nint m_Entity_nPriority = 0x6B4; // int32
            public const nint m_Entity_flEdgeFadeDist = 0x6B8; // float32
            public const nint m_Entity_vEdgeFadeDists = 0x6BC; // Vector
            public const nint m_Entity_flDiffuseScale = 0x6C8; // float32
            public const nint m_Entity_bStartDisabled = 0x6CC; // bool
            public const nint m_Entity_bDefaultEnvMap = 0x6CD; // bool
            public const nint m_Entity_bDefaultSpecEnvMap = 0x6CE; // bool
            public const nint m_Entity_bIndoorCubeMap = 0x6CF; // bool
            public const nint m_Entity_bCopyDiffuseFromDefaultCubemap = 0x6D0; // bool
            public const nint m_Entity_bEnabled = 0x6E0; // bool
        }
        // Parent: CPlayer_MovementServices
        // Field count: 0
        public static class CCSObserver_MovementServices {
        }
        // Parent: CEntityComponent
        // Field count: 2
        public static class CBodyComponent {
            public const nint m_pSceneNode = 0x8; // CGameSceneNode*
            public const nint __m_pChainEntity = 0x48; // CNetworkVarChainer
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_Method {
            public const nint m_MethodName = 0x80; // PulseSymbol_t
            public const nint m_Description = 0x90; // CUtlString
            public const nint m_bIsPublic = 0x98; // bool
            public const nint m_ReturnType = 0xA0; // CPulseValueFullType
            public const nint m_Args = 0xB8; // CUtlLeanVector<CPulseRuntimeMethodArg>
        }
        // Parent: CBaseAnimGraph
        // Field count: 6
        public static class C_BaseCombatCharacter {
            public const nint m_hMyWearables = 0x1158; // C_NetworkUtlVectorBase<CHandle<C_EconWearable>>
            public const nint m_leftFootAttachment = 0x1170; // AttachmentHandle_t
            public const nint m_rightFootAttachment = 0x1171; // AttachmentHandle_t
            public const nint m_nWaterWakeMode = 0x1174; // C_BaseCombatCharacter::WaterWakeMode_t
            public const nint m_flWaterWorldZ = 0x1178; // float32
            public const nint m_flWaterNextTraceTime = 0x117C; // float32
        }
        // Parent: None
        // Field count: 11
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
        // Parent: C_BaseClientUIEntity
        // Field count: 2
        public static class C_PointClientUIDialog {
            public const nint m_hActivator = 0xFD8; // CHandle<C_BaseEntity>
            public const nint m_bStartEnabled = 0xFDC; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseValue {
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponHKP2000 {
        }
        // Parent: C_BaseTrigger
        // Field count: 2
        public static class C_FootstepControl {
            public const nint m_source = 0x1078; // CUtlSymbolLarge
            public const nint m_destination = 0x1080; // CUtlSymbolLarge
        }
        // Parent: C_BaseEntity
        // Field count: 8
        public static class CCitadelSoundOpvarSetOBB {
            public const nint m_iszStackName = 0x618; // CUtlSymbolLarge
            public const nint m_iszOperatorName = 0x620; // CUtlSymbolLarge
            public const nint m_iszOpvarName = 0x628; // CUtlSymbolLarge
            public const nint m_vDistanceInnerMins = 0x630; // Vector
            public const nint m_vDistanceInnerMaxs = 0x63C; // Vector
            public const nint m_vDistanceOuterMins = 0x648; // Vector
            public const nint m_vDistanceOuterMaxs = 0x654; // Vector
            public const nint m_nAABBDirection = 0x660; // int32
        }
        // Parent: C_CSGO_EndOfMatchLineupEndpoint
        // Field count: 0
        public static class C_CSGO_EndOfMatchLineupStart {
        }
        // Parent: CPlayerPawnComponent
        // Field count: 0
        public static class CPlayer_WaterServices {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorCanvasItemSpecKV3
        public static class CPulseCell_BooleanSwitchState {
            public const nint m_Condition = 0x48; // PulseObservableBoolExpression_t
            public const nint m_Always = 0xC0; // CPulse_OutflowConnection
            public const nint m_WhenTrue = 0x108; // CPulse_OutflowConnection
            public const nint m_WhenFalse = 0x150; // CPulse_OutflowConnection
        }
        // Parent: None
        // Field count: 15
        public static class CDamageRecord {
            public const nint m_PlayerDamager = 0x30; // CHandle<C_CSPlayerPawn>
            public const nint m_PlayerRecipient = 0x34; // CHandle<C_CSPlayerPawn>
            public const nint m_hPlayerControllerDamager = 0x38; // CHandle<CCSPlayerController>
            public const nint m_hPlayerControllerRecipient = 0x3C; // CHandle<CCSPlayerController>
            public const nint m_szPlayerDamagerName = 0x40; // CUtlString
            public const nint m_szPlayerRecipientName = 0x48; // CUtlString
            public const nint m_DamagerXuid = 0x50; // uint64
            public const nint m_RecipientXuid = 0x58; // uint64
            public const nint m_flBulletsDamage = 0x60; // float32
            public const nint m_flDamage = 0x64; // float32
            public const nint m_flActualHealthRemoved = 0x68; // float32
            public const nint m_iNumHits = 0x6C; // int32
            public const nint m_iLastBulletUpdate = 0x70; // int32
            public const nint m_bIsOtherEnemy = 0x74; // bool
            public const nint m_killType = 0x75; // EKillTypes_t
        }
        // Parent: None
        // Field count: 11
        public static class VPhysicsCollisionAttribute_t {
            public const nint m_nInteractsAs = 0x8; // uint64
            public const nint m_nInteractsWith = 0x10; // uint64
            public const nint m_nInteractsExclude = 0x18; // uint64
            public const nint m_nEntityId = 0x20; // uint32
            public const nint m_nOwnerId = 0x24; // uint32
            public const nint m_nHierarchyId = 0x28; // uint16
            public const nint m_nDetailLayerMask = 0x2A; // uint16
            public const nint m_nDetailLayerMaskType = 0x2C; // uint8
            public const nint m_nTargetDetailLayer = 0x2D; // uint8
            public const nint m_nCollisionGroup = 0x2E; // uint8
            public const nint m_nCollisionFunctionMask = 0x2F; // uint8
        }
        // Parent: C_DynamicProp
        // Field count: 0
        public static class C_DynamicPropAlias_dynamic_prop {
        }
        // Parent: CEnvSoundscapeProxy
        // Field count: 0
        public static class CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
        }
        // Parent: C_BarnLight
        // Field count: 3
        public static class C_OmniLight {
            public const nint m_flInnerAngle = 0x12B8; // float32
            public const nint m_flOuterAngle = 0x12BC; // float32
            public const nint m_bShowLight = 0x12C0; // bool
        }
        // Parent: C_PointEntity
        // Field count: 13
        public static class C_SceneEntity {
            public const nint m_bIsPlayingBack = 0x608; // bool
            public const nint m_bPaused = 0x609; // bool
            public const nint m_bMultiplayer = 0x60A; // bool
            public const nint m_bAutogenerated = 0x60B; // bool
            public const nint m_bAllRequirementsComplete = 0x60C; // bool
            public const nint m_flForceClientTime = 0x610; // float32
            public const nint m_nSceneStringIndex = 0x614; // uint16
            public const nint m_bClientOnly = 0x616; // bool
            public const nint m_hOwner = 0x618; // CHandle<C_BaseModelEntity>
            public const nint m_hActorList = 0x620; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
            public const nint m_bWasPlaying = 0x638; // bool
            public const nint m_QueuedEvents = 0x648; // CUtlVector<C_SceneEntity::QueuedEvents_t>
            public const nint m_flCurrentTime = 0x660; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_Yield {
            public const nint m_UnyieldResume = 0x48; // CPulse_ResumePoint
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyDescription
        public static class CPulseMathlib {
        }
        // Parent: C_CS2WeaponModuleBase
        // Field count: 1
        public static class C_NametagModule {
            public const nint m_strNametagString = 0x1160; // CUtlString
        }
        // Parent: CBaseAnimGraph
        // Field count: 20
        public static class C_EconEntity {
            public const nint m_flFlexDelayTime = 0x1168; // float32
            public const nint m_flFlexDelayedWeight = 0x1170; // float32*
            public const nint m_bAttributesInitialized = 0x1178; // bool
            public const nint m_AttributeManager = 0x1180; // C_AttributeContainer
            public const nint m_OriginalOwnerXuidLow = 0x1650; // uint32
            public const nint m_OriginalOwnerXuidHigh = 0x1654; // uint32
            public const nint m_nFallbackPaintKit = 0x1658; // int32
            public const nint m_nFallbackSeed = 0x165C; // int32
            public const nint m_flFallbackWear = 0x1660; // float32
            public const nint m_nFallbackStatTrak = 0x1664; // int32
            public const nint m_bClientside = 0x1668; // bool
            public const nint m_bParticleSystemsCreated = 0x1669; // bool
            public const nint m_vecAttachedParticles = 0x1670; // CUtlVector<int32>
            public const nint m_hViewmodelAttachment = 0x1688; // CHandle<CBaseAnimGraph>
            public const nint m_iOldTeam = 0x168C; // int32
            public const nint m_bAttachmentDirty = 0x1690; // bool
            public const nint m_nUnloadedModelIndex = 0x1694; // int32
            public const nint m_iNumOwnerValidationRetries = 0x1698; // int32
            public const nint m_hOldProvidee = 0x16A8; // CHandle<C_BaseEntity>
            public const nint m_vecAttachedModels = 0x16B0; // CUtlVector<C_EconEntity::AttachedModelData_t>
        }
        // Parent: CPlayerPawnComponent
        // Field count: 0
        public static class CPlayer_UseServices {
        }
        // Parent: C_BaseEntity
        // Field count: 25
        public static class C_PointValueRemapper {
            public const nint m_bDisabled = 0x600; // bool
            public const nint m_bDisabledOld = 0x601; // bool
            public const nint m_bUpdateOnClient = 0x602; // bool
            public const nint m_nInputType = 0x604; // ValueRemapperInputType_t
            public const nint m_hRemapLineStart = 0x608; // CHandle<C_BaseEntity>
            public const nint m_hRemapLineEnd = 0x60C; // CHandle<C_BaseEntity>
            public const nint m_flMaximumChangePerSecond = 0x610; // float32
            public const nint m_flDisengageDistance = 0x614; // float32
            public const nint m_flEngageDistance = 0x618; // float32
            public const nint m_bRequiresUseKey = 0x61C; // bool
            public const nint m_nOutputType = 0x620; // ValueRemapperOutputType_t
            public const nint m_hOutputEntities = 0x628; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
            public const nint m_nHapticsType = 0x640; // ValueRemapperHapticsType_t
            public const nint m_nMomentumType = 0x644; // ValueRemapperMomentumType_t
            public const nint m_flMomentumModifier = 0x648; // float32
            public const nint m_flSnapValue = 0x64C; // float32
            public const nint m_flCurrentMomentum = 0x650; // float32
            public const nint m_nRatchetType = 0x654; // ValueRemapperRatchetType_t
            public const nint m_flRatchetOffset = 0x658; // float32
            public const nint m_flInputOffset = 0x65C; // float32
            public const nint m_bEngaged = 0x660; // bool
            public const nint m_bFirstUpdate = 0x661; // bool
            public const nint m_flPreviousValue = 0x664; // float32
            public const nint m_flPreviousUpdateTickTime = 0x668; // GameTime_t
            public const nint m_vecPreviousTestPoint = 0x66C; // Vector
        }
        // Parent: None
        // Field count: 2
        public static class CGameSceneNodeHandle {
            public const nint m_hOwner = 0x8; // CEntityHandle
            public const nint m_name = 0xC; // CUtlStringToken
        }
        // Parent: None
        // Field count: 1
        public static class CPulseCell_Unknown {
            public const nint m_UnknownKeys = 0x48; // KeyValues3
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponMP7 {
        }
        // Parent: None
        // Field count: 13
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
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_CycleRandom {
            public const nint m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Step_PublicOutput {
            public const nint m_OutputIndex = 0x48; // PulseRuntimeOutputIndex_t
        }
        // Parent: C_LateUpdatedAnimating
        // Field count: 0
        public static class C_CS2HudModelBase {
        }
        // Parent: None
        // Field count: 98
        public static class C_CSGameRules {
            public const nint m_bFreezePeriod = 0x40; // bool
            public const nint m_bWarmupPeriod = 0x41; // bool
            public const nint m_fWarmupPeriodEnd = 0x44; // GameTime_t
            public const nint m_fWarmupPeriodStart = 0x48; // GameTime_t
            public const nint m_bTerroristTimeOutActive = 0x4C; // bool
            public const nint m_bCTTimeOutActive = 0x4D; // bool
            public const nint m_flTerroristTimeOutRemaining = 0x50; // float32
            public const nint m_flCTTimeOutRemaining = 0x54; // float32
            public const nint m_nTerroristTimeOuts = 0x58; // int32
            public const nint m_nCTTimeOuts = 0x5C; // int32
            public const nint m_bTechnicalTimeOut = 0x60; // bool
            public const nint m_bMatchWaitingForResume = 0x61; // bool
            public const nint m_iFreezeTime = 0x64; // int32
            public const nint m_iRoundTime = 0x68; // int32
            public const nint m_fMatchStartTime = 0x6C; // float32
            public const nint m_fRoundStartTime = 0x70; // GameTime_t
            public const nint m_flRestartRoundTime = 0x74; // GameTime_t
            public const nint m_bGameRestart = 0x78; // bool
            public const nint m_flGameStartTime = 0x7C; // float32
            public const nint m_timeUntilNextPhaseStarts = 0x80; // float32
            public const nint m_gamePhase = 0x84; // int32
            public const nint m_totalRoundsPlayed = 0x88; // int32
            public const nint m_nRoundsPlayedThisPhase = 0x8C; // int32
            public const nint m_nOvertimePlaying = 0x90; // int32
            public const nint m_iHostagesRemaining = 0x94; // int32
            public const nint m_bAnyHostageReached = 0x98; // bool
            public const nint m_bMapHasBombTarget = 0x99; // bool
            public const nint m_bMapHasRescueZone = 0x9A; // bool
            public const nint m_bMapHasBuyZone = 0x9B; // bool
            public const nint m_bIsQueuedMatchmaking = 0x9C; // bool
            public const nint m_nQueuedMatchmakingMode = 0xA0; // int32
            public const nint m_bIsValveDS = 0xA4; // bool
            public const nint m_bLogoMap = 0xA5; // bool
            public const nint m_bPlayAllStepSoundsOnServer = 0xA6; // bool
            public const nint m_iSpectatorSlotCount = 0xA8; // int32
            public const nint m_MatchDevice = 0xAC; // int32
            public const nint m_bHasMatchStarted = 0xB0; // bool
            public const nint m_nNextMapInMapgroup = 0xB4; // int32
            public const nint m_szTournamentEventName = 0xB8; // char[512]
            public const nint m_szTournamentEventStage = 0x2B8; // char[512]
            public const nint m_szMatchStatTxt = 0x4B8; // char[512]
            public const nint m_szTournamentPredictionsTxt = 0x6B8; // char[512]
            public const nint m_nTournamentPredictionsPct = 0x8B8; // int32
            public const nint m_flCMMItemDropRevealStartTime = 0x8BC; // GameTime_t
            public const nint m_flCMMItemDropRevealEndTime = 0x8C0; // GameTime_t
            public const nint m_bIsDroppingItems = 0x8C4; // bool
            public const nint m_bIsQuestEligible = 0x8C5; // bool
            public const nint m_bIsHltvActive = 0x8C6; // bool
            public const nint m_bBombPlanted = 0x8C7; // bool
            public const nint m_arrProhibitedItemIndices = 0x8C8; // uint16[100]
            public const nint m_arrTournamentActiveCasterAccounts = 0x990; // uint32[4]
            public const nint m_numBestOfMaps = 0x9A0; // int32
            public const nint m_nHalloweenMaskListSeed = 0x9A4; // int32
            public const nint m_bBombDropped = 0x9A8; // bool
            public const nint m_iRoundWinStatus = 0x9AC; // int32
            public const nint m_eRoundWinReason = 0x9B0; // int32
            public const nint m_bTCantBuy = 0x9B4; // bool
            public const nint m_bCTCantBuy = 0x9B5; // bool
            public const nint m_iMatchStats_RoundResults = 0x9B8; // int32[30]
            public const nint m_iMatchStats_PlayersAlive_CT = 0xA30; // int32[30]
            public const nint m_iMatchStats_PlayersAlive_T = 0xAA8; // int32[30]
            public const nint m_TeamRespawnWaveTimes = 0xB20; // float32[32]
            public const nint m_flNextRespawnWave = 0xBA0; // GameTime_t[32]
            public const nint m_vMinimapMins = 0xC20; // Vector
            public const nint m_vMinimapMaxs = 0xC2C; // Vector
            public const nint m_MinimapVerticalSectionHeights = 0xC38; // float32[8]
            public const nint m_ullLocalMatchID = 0xC58; // uint64
            public const nint m_nEndMatchMapGroupVoteTypes = 0xC60; // int32[10]
            public const nint m_nEndMatchMapGroupVoteOptions = 0xC88; // int32[10]
            public const nint m_nEndMatchMapVoteWinner = 0xCB0; // int32
            public const nint m_iNumConsecutiveCTLoses = 0xCB4; // int32
            public const nint m_iNumConsecutiveTerroristLoses = 0xCB8; // int32
            public const nint m_nMatchAbortedEarlyReason = 0xD78; // int32
            public const nint m_bHasTriggeredRoundStartMusic = 0xD7C; // bool
            public const nint m_bSwitchingTeamsAtRoundReset = 0xD7D; // bool
            public const nint m_pGameModeRules = 0xD98; // CCSGameModeRules*
            public const nint m_RetakeRules = 0xDA0; // C_RetakeGameRules
            public const nint m_nMatchEndCount = 0xEF8; // uint8
            public const nint m_nTTeamIntroVariant = 0xEFC; // int32
            public const nint m_nCTTeamIntroVariant = 0xF00; // int32
            public const nint m_bTeamIntroPeriod = 0xF04; // bool
            public const nint m_iRoundEndWinnerTeam = 0xF08; // int32
            public const nint m_eRoundEndReason = 0xF0C; // int32
            public const nint m_bRoundEndShowTimerDefend = 0xF10; // bool
            public const nint m_iRoundEndTimerTime = 0xF14; // int32
            public const nint m_sRoundEndFunFactToken = 0xF18; // CUtlString
            public const nint m_iRoundEndFunFactPlayerSlot = 0xF20; // CPlayerSlot
            public const nint m_iRoundEndFunFactData1 = 0xF24; // int32
            public const nint m_iRoundEndFunFactData2 = 0xF28; // int32
            public const nint m_iRoundEndFunFactData3 = 0xF2C; // int32
            public const nint m_sRoundEndMessage = 0xF30; // CUtlString
            public const nint m_iRoundEndPlayerCount = 0xF38; // int32
            public const nint m_bRoundEndNoMusic = 0xF3C; // bool
            public const nint m_iRoundEndLegacy = 0xF40; // int32
            public const nint m_nRoundEndCount = 0xF44; // uint8
            public const nint m_iRoundStartRoundNumber = 0xF48; // int32
            public const nint m_nRoundStartCount = 0xF4C; // uint8
            public const nint m_flLastPerfSampleTime = 0x4F58; // float64
        }
        // Parent: C_BaseModelEntity
        // Field count: 2
        public static class CGrenadeTracer {
            public const nint m_flTracerDuration = 0xFC0; // float32
            public const nint m_nType = 0xFC4; // GrenadeType_t
        }
        // Parent: None
        // Field count: 0
        public static class CCSGameModeRules_Noop {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_BlackboardReference {
            public const nint m_hBlackboardResource = 0x0; // CStrongHandle<InfoForResourceTypeIPulseGraphDef>
            public const nint m_BlackboardResource = 0x8; // PulseSymbol_t
            public const nint m_nNodeID = 0x18; // PulseDocNodeID_t
            public const nint m_NodeName = 0x20; // CGlobalSymbol
        }
        // Parent: C_BaseGrenade
        // Field count: 16
        public static class C_BaseCSGrenadeProjectile {
            public const nint m_vInitialPosition = 0x11A0; // Vector
            public const nint m_vInitialVelocity = 0x11AC; // Vector
            public const nint m_nBounces = 0x11B8; // int32
            public const nint m_nExplodeEffectIndex = 0x11C0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_nExplodeEffectTickBegin = 0x11C8; // int32
            public const nint m_vecExplodeEffectOrigin = 0x11CC; // Vector
            public const nint m_flSpawnTime = 0x11D8; // GameTime_t
            public const nint vecLastTrailLinePos = 0x11DC; // Vector
            public const nint flNextTrailLineTime = 0x11E8; // GameTime_t
            public const nint m_bExplodeEffectBegan = 0x11EC; // bool
            public const nint m_bCanCreateGrenadeTrail = 0x11ED; // bool
            public const nint m_nSnapshotTrajectoryEffectIndex = 0x11F0; // ParticleIndex_t
            public const nint m_hSnapshotTrajectoryParticleSnapshot = 0x11F8; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_arrTrajectoryTrailPoints = 0x1200; // CUtlVector<Vector>
            public const nint m_arrTrajectoryTrailPointCreationTimes = 0x1218; // CUtlVector<float32>
            public const nint m_flTrajectoryTrailEffectCreationTime = 0x1230; // float32
        }
        // Parent: C_BaseEntity
        // Field count: 16
        public static class C_GradientFog {
            public const nint m_hGradientFogTexture = 0x600; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_flFogStartDistance = 0x608; // float32
            public const nint m_flFogEndDistance = 0x60C; // float32
            public const nint m_bHeightFogEnabled = 0x610; // bool
            public const nint m_flFogStartHeight = 0x614; // float32
            public const nint m_flFogEndHeight = 0x618; // float32
            public const nint m_flFarZ = 0x61C; // float32
            public const nint m_flFogMaxOpacity = 0x620; // float32
            public const nint m_flFogFalloffExponent = 0x624; // float32
            public const nint m_flFogVerticalExponent = 0x628; // float32
            public const nint m_fogColor = 0x62C; // Color
            public const nint m_flFogStrength = 0x630; // float32
            public const nint m_flFadeTime = 0x634; // float32
            public const nint m_bStartDisabled = 0x638; // bool
            public const nint m_bIsEnabled = 0x639; // bool
            public const nint m_bGradientFogNeedsTextures = 0x63A; // bool
        }
        // Parent: CPlayerControllerComponent
        // Field count: 4
        public static class CCSPlayerController_InGameMoneyServices {
            public const nint m_iAccount = 0x40; // int32
            public const nint m_iStartAccount = 0x44; // int32
            public const nint m_iTotalCashSpent = 0x48; // int32
            public const nint m_iCashSpentThisRound = 0x4C; // int32
        }
        // Parent: C_BaseCSGrenadeProjectile
        // Field count: 0
        public static class C_HEGrenadeProjectile {
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterModel {
            public const nint m_iFilterModel = 0x638; // CUtlSymbolLarge
        }
        // Parent: C_SoundAreaEntityBase
        // Field count: 2
        public static class C_SoundAreaEntityOrientedBox {
            public const nint m_vMin = 0x628; // Vector
            public const nint m_vMax = 0x634; // Vector
        }
        // Parent: C_SoundOpvarSetPointBase
        // Field count: 0
        public static class C_SoundOpvarSetPointEntity {
        }
        // Parent: C_BaseEntity
        // Field count: 2
        public static class CPulseGameBlackboard {
            public const nint m_strGraphName = 0x608; // CUtlString
            public const nint m_strStateBlob = 0x610; // CUtlString
        }
        // Parent: None
        // Field count: 4
        public static class CChoreoComponent {
            public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
            public const nint m_hOwner = 0x30; // CHandle<C_BaseModelEntity>
            public const nint m_nNextSceneEventId = 0x68; // SceneEventId_t
            public const nint m_flAllowResponsesEndTime = 0x6C; // GameTime_t
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_Value_RandomInt {
        }
        // Parent: C_CSWeaponBase
        // Field count: 0
        public static class C_CSWeaponBaseShotgun {
        }
        // Parent: C_RagdollProp
        // Field count: 7
        public static class C_RagdollPropAttached {
            public const nint m_boneIndexAttached = 0x11E0; // uint32
            public const nint m_ragdollAttachedObjectIndex = 0x11E4; // uint32
            public const nint m_attachmentPointBoneSpace = 0x11E8; // Vector
            public const nint m_attachmentPointRagdollSpace = 0x11F4; // Vector
            public const nint m_vecOffset = 0x1200; // Vector
            public const nint m_parentTime = 0x120C; // float32
            public const nint m_bHasParent = 0x1210; // bool
        }
        // Parent: C_BaseModelEntity
        // Field count: 0
        public static class C_ModelPointEntity {
        }
        // Parent: C_CSPlayerPawn
        // Field count: 2
        public static class C_CSGO_PreviewPlayer {
            public const nint m_animgraphCharacterModeString = 0x3460; // CGlobalSymbol
            public const nint m_flInitialModelScale = 0x3468; // float32
        }
        // Parent: C_BarnLight
        // Field count: 1
        public static class C_RectLight {
            public const nint m_bShowLight = 0x12B8; // bool
        }
        // Parent: C_BaseEntity
        // Field count: 3
        public static class CPathSimple {
            public const nint m_CPathQueryComponent = 0x610; // CPathQueryComponent
            public const nint m_pathString = 0x700; // CUtlString
            public const nint m_bClosedLoop = 0x708; // bool
        }
        // Parent: C_BaseModelEntity
        // Field count: 3
        public static class C_FuncTrackTrain {
            public const nint m_nLongAxis = 0xFA8; // int32
            public const nint m_flRadius = 0xFAC; // float32
            public const nint m_flLineLength = 0xFB0; // float32
        }
        // Parent: C_EconEntity
        // Field count: 2
        public static class C_EconWearable {
            public const nint m_nForceSkin = 0x16C8; // int32
            public const nint m_bAlwaysAllow = 0x16CC; // bool
        }
        // Parent: C_BaseModelEntity
        // Field count: 9
        public static class C_EnvDecal {
            public const nint m_hDecalMaterial = 0xFA8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_flWidth = 0xFB0; // float32
            public const nint m_flHeight = 0xFB4; // float32
            public const nint m_flDepth = 0xFB8; // float32
            public const nint m_nRenderOrder = 0xFBC; // uint32
            public const nint m_bProjectOnWorld = 0xFC0; // bool
            public const nint m_bProjectOnCharacters = 0xFC1; // bool
            public const nint m_bProjectOnWater = 0xFC2; // bool
            public const nint m_flDepthSortBias = 0xFC4; // float32
        }
        // Parent: None
        // Field count: 2
        public static class EntitySpottedState_t {
            public const nint m_bSpotted = 0x8; // bool
            public const nint m_bSpottedByMask = 0xC; // uint32[2]
        }
        // Parent: None
        // Field count: 25
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
            public const nint m_bPadding2 = 0x66; // bool
            public const nint m_bPadding = 0x67; // bool
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponM4A1 {
        }
        // Parent: C_EconEntity
        // Field count: 1
        public static class C_Item {
            public const nint m_pReticleHintTextName = 0x16C8; // char[256]
        }
        // Parent: C_BaseEntity
        // Field count: 0
        public static class C_CSPetPlacement {
        }
        // Parent: C_BaseModelEntity
        // Field count: 24
        public static class C_Beam {
            public const nint m_flFrameRate = 0xFA8; // float32
            public const nint m_flHDRColorScale = 0xFAC; // float32
            public const nint m_flFireTime = 0xFB0; // GameTime_t
            public const nint m_flDamage = 0xFB4; // float32
            public const nint m_nNumBeamEnts = 0xFB8; // uint8
            public const nint m_queryHandleHalo = 0xFBC; // int32
            public const nint m_hBaseMaterial = 0xFE0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_nHaloIndex = 0xFE8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_nBeamType = 0xFF0; // BeamType_t
            public const nint m_nBeamFlags = 0xFF4; // uint32
            public const nint m_hAttachEntity = 0xFF8; // CHandle<C_BaseEntity>[10]
            public const nint m_nAttachIndex = 0x1020; // AttachmentHandle_t[10]
            public const nint m_fWidth = 0x102C; // float32
            public const nint m_fEndWidth = 0x1030; // float32
            public const nint m_fFadeLength = 0x1034; // float32
            public const nint m_fHaloScale = 0x1038; // float32
            public const nint m_fAmplitude = 0x103C; // float32
            public const nint m_fStartFrame = 0x1040; // float32
            public const nint m_fSpeed = 0x1044; // float32
            public const nint m_flFrame = 0x1048; // float32
            public const nint m_nClipStyle = 0x104C; // BeamClipStyle_t
            public const nint m_bTurnedOff = 0x1050; // bool
            public const nint m_vecEndPos = 0x1054; // VectorWS
            public const nint m_hEndEntity = 0x1060; // CHandle<C_BaseEntity>
        }
        // Parent: C_BaseEntity
        // Field count: 22
        public static class C_EnvLightProbeVolume {
            public const nint m_Entity_hLightProbeTexture_AmbientCube = 0x15F8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SDF = 0x1600; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SH2_DC = 0x1608; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SH2_R = 0x1610; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SH2_G = 0x1618; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SH2_B = 0x1620; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightIndicesTexture = 0x1628; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightScalarsTexture = 0x1630; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightShadowsTexture = 0x1638; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_vBoxMins = 0x1640; // Vector
            public const nint m_Entity_vBoxMaxs = 0x164C; // Vector
            public const nint m_Entity_bMoveable = 0x1658; // bool
            public const nint m_Entity_nHandshake = 0x165C; // int32
            public const nint m_Entity_nPriority = 0x1660; // int32
            public const nint m_Entity_bStartDisabled = 0x1664; // bool
            public const nint m_Entity_nLightProbeSizeX = 0x1668; // int32
            public const nint m_Entity_nLightProbeSizeY = 0x166C; // int32
            public const nint m_Entity_nLightProbeSizeZ = 0x1670; // int32
            public const nint m_Entity_nLightProbeAtlasX = 0x1674; // int32
            public const nint m_Entity_nLightProbeAtlasY = 0x1678; // int32
            public const nint m_Entity_nLightProbeAtlasZ = 0x167C; // int32
            public const nint m_Entity_bEnabled = 0x1689; // bool
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataOverlayType
        // MVDataAssociatedFile
        public static class CExplosionTypeData {
            public const nint m_SoundName = 0x0; // CSoundEventName
            public const nint m_ParticleEffect = 0x10; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            public const nint m_bIsIncindiary = 0xF0; // bool
            public const nint m_bHasForces = 0xF1; // bool
            public const nint m_DecalType = 0xF8; // CGlobalSymbol
        }
        // Parent: C_BaseModelEntity
        // Field count: 8
        public static class C_FuncConveyor {
            public const nint m_vecMoveDirEntitySpace = 0xFB0; // Vector
            public const nint m_flTargetSpeed = 0xFBC; // float32
            public const nint m_nTransitionStartTick = 0xFC0; // GameTick_t
            public const nint m_nTransitionDurationTicks = 0xFC4; // int32
            public const nint m_flTransitionStartSpeed = 0xFC8; // float32
            public const nint m_hConveyorModels = 0xFD0; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
            public const nint m_flCurrentConveyorOffset = 0xFE8; // float32
            public const nint m_flCurrentConveyorSpeed = 0xFEC; // float32
        }
        // Parent: CPlayer_WeaponServices
        // Field count: 5
        public static class CCSPlayer_WeaponServices {
            public const nint m_flNextAttack = 0xD0; // GameTime_t
            public const nint m_nOldTotalShootPositionHistoryCount = 0xD4; // uint32
            public const nint m_nOldTotalInputHistoryCount = 0x370; // uint32
            public const nint m_networkAnimTiming = 0x1588; // C_NetworkUtlVectorBase<uint8>
            public const nint m_bBlockInspectUntilNextGraphUpdate = 0x15A0; // bool
        }
        // Parent: CBaseAnimGraph
        // Field count: 2
        public static class C_PhysMagnet {
            public const nint m_aAttachedObjectsFromServer = 0x1158; // CUtlVector<int32>
            public const nint m_aAttachedObjects = 0x1170; // CUtlVector<CHandle<C_BaseEntity>>
        }
        // Parent: CEnvSoundscapeTriggerable
        // Field count: 0
        public static class CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
        }
        // Parent: C_BaseModelEntity
        // Field count: 0
        public static class C_Breakable {
        }
        // Parent: CBaseAnimGraph
        // Field count: 29
        public static class C_PlantedC4 {
            public const nint m_bBombTicking = 0x1160; // bool
            public const nint m_nBombSite = 0x1164; // int32
            public const nint m_nSourceSoundscapeHash = 0x1168; // int32
            public const nint m_entitySpottedState = 0x1170; // EntitySpottedState_t
            public const nint m_flNextGlow = 0x1188; // GameTime_t
            public const nint m_flNextBeep = 0x118C; // GameTime_t
            public const nint m_flC4Blow = 0x1190; // GameTime_t
            public const nint m_bCannotBeDefused = 0x1194; // bool
            public const nint m_bHasExploded = 0x1195; // bool
            public const nint m_flTimerLength = 0x1198; // float32
            public const nint m_bBeingDefused = 0x119C; // bool
            public const nint m_bTriggerWarning = 0x11A0; // float32
            public const nint m_bExplodeWarning = 0x11A4; // float32
            public const nint m_bC4Activated = 0x11A8; // bool
            public const nint m_bTenSecWarning = 0x11A9; // bool
            public const nint m_flDefuseLength = 0x11AC; // float32
            public const nint m_flDefuseCountDown = 0x11B0; // GameTime_t
            public const nint m_bBombDefused = 0x11B4; // bool
            public const nint m_hBombDefuser = 0x11B8; // CHandle<C_CSPlayerPawn>
            public const nint m_AttributeManager = 0x11C0; // C_AttributeContainer
            public const nint m_hDefuserMultimeter = 0x1690; // CHandle<C_Multimeter>
            public const nint m_flNextRadarFlashTime = 0x1694; // GameTime_t
            public const nint m_bRadarFlash = 0x1698; // bool
            public const nint m_pBombDefuser = 0x169C; // CHandle<C_CSPlayerPawn>
            public const nint m_fLastDefuseTime = 0x16A0; // GameTime_t
            public const nint m_pPredictionOwner = 0x16A8; // CBasePlayerController*
            public const nint m_vecC4ExplodeSpectatePos = 0x16B0; // Vector
            public const nint m_vecC4ExplodeSpectateAng = 0x16BC; // QAngle
            public const nint m_flC4ExplodeSpectateDuration = 0x16C8; // float32
        }
        // Parent: C_CSGO_TeamIntroCharacterPosition
        // Field count: 0
        public static class CCSGO_WingmanIntroCharacterPosition {
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterName {
            public const nint m_iFilterName = 0x638; // CUtlSymbolLarge
        }
        // Parent: CBaseAnimGraph
        // Field count: 9
        public static class C_RagdollProp {
            public const nint m_ragEnabled = 0x1158; // C_NetworkUtlVectorBase<bool>
            public const nint m_ragPos = 0x1170; // C_NetworkUtlVectorBase<Vector>
            public const nint m_ragAngles = 0x1188; // C_NetworkUtlVectorBase<QAngle>
            public const nint m_flBlendWeight = 0x11A0; // float32
            public const nint m_hRagdollSource = 0x11A4; // CHandle<C_BaseEntity>
            public const nint m_iEyeAttachment = 0x11A8; // AttachmentHandle_t
            public const nint m_flBlendWeightCurrent = 0x11AC; // float32
            public const nint m_parentPhysicsBoneIndices = 0x11B0; // CUtlVector<int32>
            public const nint m_worldSpaceBoneComputationOrder = 0x11C8; // CUtlVector<int32>
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_CallInfo {
            public const nint m_PortName = 0x0; // PulseSymbol_t
            public const nint m_nEditorNodeID = 0x10; // PulseDocNodeID_t
            public const nint m_RegisterMap = 0x18; // PulseRegisterMap_t
            public const nint m_CallMethodID = 0x48; // PulseDocNodeID_t
            public const nint m_nSrcChunk = 0x4C; // PulseRuntimeChunkIndex_t
            public const nint m_nSrcInstruction = 0x50; // int32
        }
        // Parent: C_ParticleSystem
        // Field count: 0
        public static class C_MapPreviewParticleSystem {
        }
        // Parent: C_BaseModelEntity
        // Field count: 15
        public static class CBaseAnimGraph {
            public const nint m_graphControllerManager = 0xFA8; // CAnimGraphControllerManager
            public const nint m_pMainGraphController = 0x1058; // CAnimGraphControllerBase*
            public const nint m_bInitiallyPopulateInterpHistory = 0x1060; // bool
            public const nint m_bSuppressAnimEventSounds = 0x1062; // bool
            public const nint m_bAnimGraphUpdateEnabled = 0x1070; // bool
            public const nint m_bAnimationUpdateScheduled = 0x1071; // bool
            public const nint m_vecForce = 0x1074; // Vector
            public const nint m_nForceBone = 0x1080; // int32
            public const nint m_pClientsideRagdoll = 0x1088; // CBaseAnimGraph*
            public const nint m_bBuiltRagdoll = 0x1090; // bool
            public const nint m_pRagdollControl = 0x10A0; // IPhysicsRagdollControl*
            public const nint m_RagdollPose = 0x10A8; // PhysicsRagdollPose_t
            public const nint m_bRagdollEnabled = 0x10F0; // bool
            public const nint m_bRagdollClientSide = 0x10F1; // bool
            public const nint m_bHasAnimatedMaterialAttributes = 0x1100; // bool
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_InlineNodeSkipSelector {
            public const nint m_nFlowNodeID = 0x48; // PulseDocNodeID_t
            public const nint m_bAnd = 0x4C; // bool
            public const nint m_PassOutflow = 0x50; // PulseSelectorOutflowList_t
            public const nint m_FailOutflow = 0x68; // CPulse_OutflowConnection
        }
        // Parent: C_BaseModelEntity
        // Field count: 1
        public static class C_LightEntity {
            public const nint m_CLightComponent = 0xFA8; // CLightComponent*
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponM249 {
        }
        // Parent: CBaseAnimGraph
        // Field count: 25
        public static class C_LocalTempEntity {
            public const nint flags = 0x1158; // int32
            public const nint die = 0x115C; // GameTime_t
            public const nint m_flFrameMax = 0x1160; // float32
            public const nint x = 0x1164; // float32
            public const nint y = 0x1168; // float32
            public const nint fadeSpeed = 0x116C; // float32
            public const nint bounceFactor = 0x1170; // float32
            public const nint hitSound = 0x1174; // int32
            public const nint priority = 0x1178; // int32
            public const nint tentOffset = 0x117C; // Vector
            public const nint m_vecTempEntAngVelocity = 0x1188; // QAngle
            public const nint tempent_renderamt = 0x1194; // int32
            public const nint m_vecNormal = 0x1198; // Vector
            public const nint m_flSpriteScale = 0x11A4; // float32
            public const nint m_nFlickerFrame = 0x11A8; // int32
            public const nint m_flFrameRate = 0x11AC; // float32
            public const nint m_flFrame = 0x11B0; // float32
            public const nint m_pszImpactEffect = 0x11B8; // char*
            public const nint m_pszParticleEffect = 0x11C0; // char*
            public const nint m_bParticleCollision = 0x11C8; // bool
            public const nint m_iLastCollisionFrame = 0x11CC; // int32
            public const nint m_vLastCollisionOrigin = 0x11D0; // Vector
            public const nint m_vecTempEntVelocity = 0x11DC; // Vector
            public const nint m_vecPrevAbsOrigin = 0x11E8; // Vector
            public const nint m_vecTempEntAcceleration = 0x11F4; // Vector
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 2
        public static class C_WeaponTaser {
            public const nint m_fFireTime = 0x1CE0; // GameTime_t
            public const nint m_nLastAttackTick = 0x1CE4; // int32
        }
        // Parent: C_BaseEntity
        // Field count: 0
        public static class C_PointEntity {
        }
        // Parent: None
        // Field count: 0
        public static class C_SingleplayRules {
        }
        // Parent: C_BaseEntity
        // Field count: 0
        public static class CLogicalEntity {
        }
        // Parent: C_BaseModelEntity
        // Field count: 0
        public static class C_PrecipitationBlocker {
        }
        // Parent: C_CSGO_TeamPreviewCamera
        // Field count: 0
        public static class C_CSGO_CounterTerroristTeamIntroCamera {
        }
        // Parent: C_SoundOpvarSetPointEntity
        // Field count: 0
        public static class C_SoundOpvarSetPathCornerEntity {
        }
        // Parent: CPlayerPawnComponent
        // Field count: 4
        public static class CPlayer_WeaponServices {
            public const nint m_hMyWeapons = 0x48; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
            public const nint m_hActiveWeapon = 0x60; // CHandle<C_BasePlayerWeapon>
            public const nint m_hLastWeapon = 0x64; // CHandle<C_BasePlayerWeapon>
            public const nint m_iAmmo = 0x68; // uint16[32]
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponNegev {
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponFiveSeven {
        }
        // Parent: C_CSWeaponBaseShotgun
        // Field count: 0
        public static class C_WeaponSawedoff {
        }
        // Parent: C_BaseModelEntity
        // Field count: 0
        public static class C_TriggerVolume {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseCell_LimitCount {
            public const nint m_nLimitCount = 0x48; // int32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Step_CallExternalMethod {
            public const nint m_MethodName = 0x48; // PulseSymbol_t
            public const nint m_nBlackboardIndex = 0x58; // PulseRuntimeBlackboardReferenceIndex_t
            public const nint m_ExpectedArgs = 0x60; // CUtlLeanVector<CPulseRuntimeMethodArg>
            public const nint m_nAsyncCallMode = 0x70; // PulseMethodCallMode_t
            public const nint m_OnFinished = 0x78; // CPulse_ResumePoint
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponMP9 {
        }
        // Parent: C_DynamicProp
        // Field count: 0
        public static class C_DynamicPropAlias_prop_dynamic_override {
        }
        // Parent: CEnvSoundscape
        // Field count: 0
        public static class CEnvSoundscapeTriggerable {
        }
        // Parent: C_BaseEntity
        // Field count: 5
        public static class C_PlayerPing {
            public const nint m_hPlayer = 0x630; // CHandle<C_CSPlayerPawn>
            public const nint m_hPingedEntity = 0x634; // CHandle<C_BaseEntity>
            public const nint m_iType = 0x638; // int32
            public const nint m_bUrgent = 0x63C; // bool
            public const nint m_szPlaceName = 0x63D; // char[18]
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_AK47 {
        }
        // Parent: C_BaseEntity
        // Field count: 10
        public static class C_CSGO_MapPreviewCameraPathNode {
            public const nint m_szParentPathUniqueID = 0x600; // CUtlSymbolLarge
            public const nint m_nPathIndex = 0x608; // int32
            public const nint m_vInTangentLocal = 0x60C; // Vector
            public const nint m_vOutTangentLocal = 0x618; // Vector
            public const nint m_flFOV = 0x624; // float32
            public const nint m_flCameraSpeed = 0x628; // float32
            public const nint m_flEaseIn = 0x62C; // float32
            public const nint m_flEaseOut = 0x630; // float32
            public const nint m_vInTangentWorld = 0x634; // Vector
            public const nint m_vOutTangentWorld = 0x640; // Vector
        }
        // Parent: C_BaseEntity
        // Field count: 10
        public static class C_CSPlayerResource {
            public const nint m_bHostageAlive = 0x600; // bool[12]
            public const nint m_isHostageFollowingSomeone = 0x60C; // bool[12]
            public const nint m_iHostageEntityIDs = 0x618; // CEntityIndex[12]
            public const nint m_bombsiteCenterA = 0x648; // Vector
            public const nint m_bombsiteCenterB = 0x654; // Vector
            public const nint m_hostageRescueX = 0x660; // int32[4]
            public const nint m_hostageRescueY = 0x670; // int32[4]
            public const nint m_hostageRescueZ = 0x680; // int32[4]
            public const nint m_bEndMatchNextMapAllVoted = 0x690; // bool
            public const nint m_foundGoalPositions = 0x691; // bool
        }
        // Parent: C_BaseEntity
        // Field count: 2
        public static class CSkyboxReference {
            public const nint m_worldGroupId = 0x600; // WorldGroupId_t
            public const nint m_hSkyCamera = 0x604; // CHandle<C_SkyCamera>
        }
        // Parent: C_MolotovGrenade
        // Field count: 0
        public static class C_IncendiaryGrenade {
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterClass {
            public const nint m_iFilterClass = 0x638; // CUtlSymbolLarge
        }
        // Parent: C_PointCamera
        // Field count: 1
        public static class C_PointCameraVFOV {
            public const nint m_flVerticalFOV = 0x660; // float32
        }
        // Parent: C_BaseEntity
        // Field count: 26
        public static class C_PointCamera {
            public const nint m_FOV = 0x600; // float32
            public const nint m_Resolution = 0x604; // float32
            public const nint m_bFogEnable = 0x608; // bool
            public const nint m_FogColor = 0x609; // Color
            public const nint m_flFogStart = 0x610; // float32
            public const nint m_flFogEnd = 0x614; // float32
            public const nint m_flFogMaxDensity = 0x618; // float32
            public const nint m_bActive = 0x61C; // bool
            public const nint m_bUseScreenAspectRatio = 0x61D; // bool
            public const nint m_flAspectRatio = 0x620; // float32
            public const nint m_bNoSky = 0x624; // bool
            public const nint m_fBrightness = 0x628; // float32
            public const nint m_flZFar = 0x62C; // float32
            public const nint m_flZNear = 0x630; // float32
            public const nint m_bCanHLTVUse = 0x634; // bool
            public const nint m_bAlignWithParent = 0x635; // bool
            public const nint m_bDofEnabled = 0x636; // bool
            public const nint m_flDofNearBlurry = 0x638; // float32
            public const nint m_flDofNearCrisp = 0x63C; // float32
            public const nint m_flDofFarCrisp = 0x640; // float32
            public const nint m_flDofFarBlurry = 0x644; // float32
            public const nint m_flDofTiltToGround = 0x648; // float32
            public const nint m_TargetFOV = 0x64C; // float32
            public const nint m_DegreesPerSecond = 0x650; // float32
            public const nint m_bIsOn = 0x654; // bool
            public const nint m_pNext = 0x658; // C_PointCamera*
        }
        // Parent: CPathSimple
        // Field count: 2
        public static class CPathWithDynamicNodes {
            public const nint m_vecPathNodes = 0x710; // C_NetworkUtlVectorBase<CHandle<CPathNode>>
            public const nint m_xInitialPathWorldToLocal = 0x730; // CTransform
        }
        // Parent: CLogicalEntity
        // Field count: 3
        public static class CBaseFilter {
            public const nint m_bNegated = 0x600; // bool
            public const nint m_OnPass = 0x608; // CEntityIOOutput
            public const nint m_OnFail = 0x620; // CEntityIOOutput
        }
        // Parent: None
        // Field count: 1
        public static class WeaponPurchaseTracker_t {
            public const nint m_weaponPurchases = 0x8; // C_UtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PulseObservableBoolExpression_t {
            public const nint m_EvaluateConnection = 0x0; // CPulse_OutflowConnection
            public const nint m_DependentObservableVars = 0x48; // CUtlVector<PulseRuntimeVarIndex_t>
            public const nint m_DependentObservableBlackboardReferences = 0x60; // CUtlVector<PulseRuntimeBlackboardReferenceIndex_t>
        }
        // Parent: C_PointEntity
        // Field count: 14
        public static class CMapInfo {
            public const nint m_iBuyingStatus = 0x600; // int32
            public const nint m_flBombRadius = 0x604; // float32
            public const nint m_iPetPopulation = 0x608; // int32
            public const nint m_bUseNormalSpawnsForDM = 0x60C; // bool
            public const nint m_bDisableAutoGeneratedDMSpawns = 0x60D; // bool
            public const nint m_flBotMaxVisionDistance = 0x610; // float32
            public const nint m_iHostageCount = 0x614; // int32
            public const nint m_bFadePlayerVisibilityFarZ = 0x618; // bool
            public const nint m_bRainTraceToSkyEnabled = 0x619; // bool
            public const nint m_flEnvRainStrength = 0x61C; // float32
            public const nint m_flEnvPuddleRippleStrength = 0x620; // float32
            public const nint m_flEnvPuddleRippleDirection = 0x624; // float32
            public const nint m_flEnvWetnessCoverage = 0x628; // float32
            public const nint m_flEnvWetnessDryingAmount = 0x62C; // float32
        }
        // Parent: C_CSGO_TeamPreviewCamera
        // Field count: 0
        public static class C_CSGO_EndOfMatchCamera {
        }
        // Parent: CBaseAnimGraph
        // Field count: 12
        public static class C_BaseGrenade {
            public const nint m_bHasWarnedAI = 0x1158; // bool
            public const nint m_bIsSmokeGrenade = 0x1159; // bool
            public const nint m_bIsLive = 0x115A; // bool
            public const nint m_DmgRadius = 0x115C; // float32
            public const nint m_flDetonateTime = 0x1160; // GameTime_t
            public const nint m_flWarnAITime = 0x1164; // float32
            public const nint m_flDamage = 0x1168; // float32
            public const nint m_iszBounceSound = 0x1170; // CUtlSymbolLarge
            public const nint m_ExplosionSound = 0x1178; // CUtlString
            public const nint m_hThrower = 0x1180; // CHandle<C_CSPlayerPawn>
            public const nint m_flNextAttack = 0x1198; // GameTime_t
            public const nint m_hOriginalThrower = 0x119C; // CHandle<C_CSPlayerPawn>
        }
        // Parent: C_ModelPointEntity
        // Field count: 16
        public static class C_PlayerSprayDecal {
            public const nint m_nUniqueID = 0xFA8; // int32
            public const nint m_unAccountID = 0xFAC; // uint32
            public const nint m_unTraceID = 0xFB0; // uint32
            public const nint m_rtGcTime = 0xFB4; // uint32
            public const nint m_vecEndPos = 0xFB8; // Vector
            public const nint m_vecStart = 0xFC4; // Vector
            public const nint m_vecLeft = 0xFD0; // Vector
            public const nint m_vecNormal = 0xFDC; // Vector
            public const nint m_nPlayer = 0xFE8; // int32
            public const nint m_nEntity = 0xFEC; // int32
            public const nint m_nHitbox = 0xFF0; // int32
            public const nint m_flCreationTime = 0xFF4; // float32
            public const nint m_nTintID = 0xFF8; // int32
            public const nint m_nVersion = 0xFFC; // uint8
            public const nint m_ubSignature = 0xFFD; // uint8[128]
            public const nint m_SprayRenderHelper = 0x1088; // CPlayerSprayDecalRenderHelper
        }
        // Parent: None
        // Field count: 12
        public static class CEntityIdentity {
            public const nint m_nameStringTableIndex = 0x14; // int32
            public const nint m_name = 0x18; // CUtlSymbolLarge
            public const nint m_designerName = 0x20; // CUtlSymbolLarge
            public const nint m_flags = 0x30; // uint32
            public const nint m_worldGroupId = 0x38; // WorldGroupId_t
            public const nint m_fDataObjectTypes = 0x3C; // uint32
            public const nint m_PathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
            public const nint m_pAttributes = 0x48; // CEntityAttributeTable*
            public const nint m_pPrev = 0x50; // CEntityIdentity*
            public const nint m_pNext = 0x58; // CEntityIdentity*
            public const nint m_pPrevByClass = 0x60; // CEntityIdentity*
            public const nint m_pNextByClass = 0x68; // CEntityIdentity*
        }
        // Parent: None
        // Field count: 1
        public static class CPulseCell_LimitCount__Criteria_t {
            public const nint m_bLimitCountPasses = 0x0; // bool
        }
        // Parent: C_CS2HudModelBase
        // Field count: 0
        public static class C_CS2HudModelArms {
        }
        // Parent: None
        // Field count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBasePlayerVData {
            public const nint m_sModelName = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_sModelNameAg2Override = 0x108; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_flHeadDamageMultiplier = 0x1E8; // CSkillFloat
            public const nint m_flChestDamageMultiplier = 0x1F8; // CSkillFloat
            public const nint m_flStomachDamageMultiplier = 0x208; // CSkillFloat
            public const nint m_flArmDamageMultiplier = 0x218; // CSkillFloat
            public const nint m_flLegDamageMultiplier = 0x228; // CSkillFloat
            public const nint m_flHoldBreathTime = 0x238; // float32
            public const nint m_flDrowningDamageInterval = 0x23C; // float32
            public const nint m_nDrowningDamageInitial = 0x240; // int32
            public const nint m_nDrowningDamageMax = 0x244; // int32
            public const nint m_nWaterSpeed = 0x248; // int32
            public const nint m_flUseRange = 0x24C; // float32
            public const nint m_flUseAngleTolerance = 0x250; // float32
            public const nint m_flCrouchTime = 0x254; // float32
        }
        // Parent: C_LightEntity
        // Field count: 0
        public static class C_LightSpotEntity {
        }
        // Parent: None
        // Field count: 3
        public static class CCSGameModeRules_Deathmatch {
            public const nint m_flDMBonusStartTime = 0x30; // GameTime_t
            public const nint m_flDMBonusTimeLength = 0x34; // float32
            public const nint m_sDMBonusWeapon = 0x38; // CUtlString
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_CursorQueue {
            public const nint m_nCursorsAllowedToRunParallel = 0x98; // int32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_Value_RandomFloat {
        }
        // Parent: None
        // Field count: 0
        public static class CPulseExecCursor {
        }
        // Parent: C_BaseModelEntity
        // Field count: 23
        public static class C_Sprite {
            public const nint m_hSpriteMaterial = 0xFA8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_hAttachedToEntity = 0xFB0; // CHandle<C_BaseEntity>
            public const nint m_nAttachment = 0xFB4; // AttachmentHandle_t
            public const nint m_flSpriteFramerate = 0xFB8; // float32
            public const nint m_flFrame = 0xFBC; // float32
            public const nint m_flDieTime = 0xFC0; // GameTime_t
            public const nint m_nBrightness = 0xFD0; // uint32
            public const nint m_flBrightnessDuration = 0xFD4; // float32
            public const nint m_flSpriteScale = 0xFD8; // float32
            public const nint m_flScaleDuration = 0xFDC; // float32
            public const nint m_bWorldSpaceScale = 0xFE0; // bool
            public const nint m_flGlowProxySize = 0xFE4; // float32
            public const nint m_flHDRColorScale = 0xFE8; // float32
            public const nint m_flLastTime = 0xFEC; // GameTime_t
            public const nint m_flMaxFrame = 0xFF0; // float32
            public const nint m_flStartScale = 0xFF4; // float32
            public const nint m_flDestScale = 0xFF8; // float32
            public const nint m_flScaleTimeStart = 0xFFC; // GameTime_t
            public const nint m_nStartBrightness = 0x1000; // int32
            public const nint m_nDestBrightness = 0x1004; // int32
            public const nint m_flBrightnessTimeStart = 0x1008; // GameTime_t
            public const nint m_nSpriteWidth = 0x1018; // int32
            public const nint m_nSpriteHeight = 0x101C; // int32
        }
        // Parent: C_BaseEntity
        // Field count: 2
        public static class C_CsmFovOverride {
            public const nint m_cameraName = 0x600; // CUtlString
            public const nint m_flCsmFovOverrideValue = 0x608; // float32
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponGlock {
        }
        // Parent: C_BreakableProp
        // Field count: 1
        public static class C_PhysicsProp {
            public const nint m_bAwake = 0x12D0; // bool
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterTeam {
            public const nint m_iFilterTeam = 0x638; // int32
        }
        // Parent: None
        // Field count: 32
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBasePlayerWeaponVData {
            public const nint m_szWorldModel = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_szWorldModelAg2Override = 0x108; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_sToolsOnlyOwnerModelName = 0x1E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_bBuiltRightHanded = 0x2C8; // bool
            public const nint m_bAllowFlipping = 0x2C9; // bool
            public const nint m_sMuzzleAttachment = 0x2D0; // CAttachmentNameSymbolWithStorage
            public const nint m_szMuzzleFlashParticle = 0x2F0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            public const nint m_szMuzzleFlashParticleConfig = 0x3D0; // CUtlString
            public const nint m_szBarrelSmokeParticle = 0x3D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            public const nint m_nMuzzleSmokeShotThreshold = 0x4B8; // uint8
            public const nint m_flMuzzleSmokeTimeout = 0x4BC; // float32
            public const nint m_flMuzzleSmokeDecrementRate = 0x4C0; // float32
            public const nint m_bGenerateMuzzleLight = 0x4C4; // bool
            public const nint m_bLinkedCooldowns = 0x4C5; // bool
            public const nint m_iFlags = 0x4C6; // ItemFlagTypes_t
            public const nint m_iWeight = 0x4C8; // int32
            public const nint m_bAutoSwitchTo = 0x4CC; // bool
            public const nint m_bAutoSwitchFrom = 0x4CD; // bool
            public const nint m_nPrimaryAmmoType = 0x4CE; // AmmoIndex_t
            public const nint m_nSecondaryAmmoType = 0x4CF; // AmmoIndex_t
            public const nint m_iMaxClip1 = 0x4D0; // int32
            public const nint m_iMaxClip2 = 0x4D4; // int32
            public const nint m_iDefaultClip1 = 0x4D8; // int32
            public const nint m_iDefaultClip2 = 0x4DC; // int32
            public const nint m_bReserveAmmoAsClips = 0x4E0; // bool
            public const nint m_bTreatAsSingleClip = 0x4E1; // bool
            public const nint m_bKeepLoadedAmmo = 0x4E2; // bool
            public const nint m_iRumbleEffect = 0x4E4; // RumbleEffect_t
            public const nint m_flDropSpeed = 0x4E8; // float32
            public const nint m_iSlot = 0x4EC; // int32
            public const nint m_iPosition = 0x4F0; // int32
            public const nint m_aShootSounds = 0x4F8; // CUtlOrderedMap<WeaponSound_t,CSoundEventName>
        }
        // Parent: C_PointEntity
        // Field count: 15
        public static class CInfoInteraction {
            public const nint m_hSceneRequest = 0x600; // SceneRequestHandle_t
            public const nint m_hSceneOpportunity = 0x604; // SceneOpportunityHandle_t
            public const nint m_bEnabled = 0x608; // bool
            public const nint m_bStartDisabled = 0x609; // bool
            public const nint m_strSceneVDataName = 0x610; // CUtlSymbolLarge
            public const nint m_strPulseVDataName = 0x618; // CUtlSymbolLarge
            public const nint m_flRadius = 0x640; // float32
            public const nint m_flOwnerFOV = 0x644; // float32
            public const nint m_strLocalInterestReqTags = 0x648; // CUtlSymbolLarge
            public const nint m_strLocalInterestOptTags = 0x650; // CUtlSymbolLarge
            public const nint m_strLookTarget = 0x658; // CUtlSymbolLarge
            public const nint m_flDuration = 0x660; // float32
            public const nint m_flCooldown = 0x664; // float32
            public const nint m_nRepeatCount = 0x668; // int32
            public const nint m_bDisableOnExit = 0x66C; // bool
        }
        // Parent: C_BaseCSGrenade
        // Field count: 0
        public static class C_SmokeGrenade {
        }
        // Parent: C_CSGO_PreviewPlayer
        // Field count: 0
        public static class C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel {
        }
        // Parent: C_PointEntity
        // Field count: 0
        public static class CInfoParticleTarget {
        }
        // Parent: CPlayerPawnComponent
        // Field count: 0
        public static class CCSPlayer_DamageReactServices {
        }
        // Parent: C_BaseClientUIEntity
        // Field count: 29
        public static class C_PointClientUIWorldPanel {
            public const nint m_bForceRecreateNextUpdate = 0xFE0; // bool
            public const nint m_bMoveViewToPlayerNextThink = 0xFE1; // bool
            public const nint m_bCheckCSSClasses = 0xFE2; // bool
            public const nint m_anchorDeltaTransform = 0xFF0; // CTransform
            public const nint m_pOffScreenIndicator = 0x1180; // CPointOffScreenIndicatorUi*
            public const nint m_bIgnoreInput = 0x11A8; // bool
            public const nint m_bLit = 0x11A9; // bool
            public const nint m_bFollowPlayerAcrossTeleport = 0x11AA; // bool
            public const nint m_flWidth = 0x11AC; // float32
            public const nint m_flHeight = 0x11B0; // float32
            public const nint m_flDPI = 0x11B4; // float32
            public const nint m_flInteractDistance = 0x11B8; // float32
            public const nint m_flDepthOffset = 0x11BC; // float32
            public const nint m_unOwnerContext = 0x11C0; // uint32
            public const nint m_unHorizontalAlign = 0x11C4; // uint32
            public const nint m_unVerticalAlign = 0x11C8; // uint32
            public const nint m_unOrientation = 0x11CC; // uint32
            public const nint m_bAllowInteractionFromAllSceneWorlds = 0x11D0; // bool
            public const nint m_vecCSSClasses = 0x11D8; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            public const nint m_bOpaque = 0x11F0; // bool
            public const nint m_bNoDepth = 0x11F1; // bool
            public const nint m_bVisibleWhenParentNoDraw = 0x11F2; // bool
            public const nint m_bRenderBackface = 0x11F3; // bool
            public const nint m_bUseOffScreenIndicator = 0x11F4; // bool
            public const nint m_bExcludeFromSaveGames = 0x11F5; // bool
            public const nint m_bGrabbable = 0x11F6; // bool
            public const nint m_bOnlyRenderToTexture = 0x11F7; // bool
            public const nint m_bDisableMipGen = 0x11F8; // bool
            public const nint m_nExplicitImageLayout = 0x11FC; // int32
        }
        // Parent: C_BaseEntity
        // Field count: 3
        public static class C_EntityFlame {
            public const nint m_hEntAttached = 0x600; // CHandle<C_BaseEntity>
            public const nint m_hOldAttached = 0x628; // CHandle<C_BaseEntity>
            public const nint m_bCheapEffect = 0x62C; // bool
        }
        // Parent: C_BaseEntity
        // Field count: 16
        public static class CBasePlayerController {
            public const nint m_CommandContext = 0x608; // C_CommandContext
            public const nint m_nInButtonsWhichAreToggles = 0x6B0; // uint64
            public const nint m_nTickBase = 0x6B8; // uint32
            public const nint m_hPawn = 0x6BC; // CHandle<C_BasePlayerPawn>
            public const nint m_bKnownTeamMismatch = 0x6C0; // bool
            public const nint m_hPredictedPawn = 0x6C4; // CHandle<C_BasePlayerPawn>
            public const nint m_nSplitScreenSlot = 0x6C8; // CSplitScreenSlot
            public const nint m_hSplitOwner = 0x6CC; // CHandle<CBasePlayerController>
            public const nint m_hSplitScreenPlayers = 0x6D0; // CUtlVector<CHandle<CBasePlayerController>>
            public const nint m_bIsHLTV = 0x6E8; // bool
            public const nint m_iConnected = 0x6EC; // PlayerConnectedState
            public const nint m_iszPlayerName = 0x6F0; // char[128]
            public const nint m_steamID = 0x778; // uint64
            public const nint m_bIsLocalPlayerController = 0x780; // bool
            public const nint m_bNoClipEnabled = 0x781; // bool
            public const nint m_iDesiredFOV = 0x784; // uint32
        }
        // Parent: C_BaseEntity
        // Field count: 0
        public static class C_CSGO_EndOfMatchLineupEndpoint {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MPropertyElementNameFn
        public static class GeneratedTextureHandle_t {
            public const nint m_strBitmapName = 0x0; // CUtlString
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CompositeMaterialInputContainer_t {
            public const nint m_bEnabled = 0x0; // bool
            public const nint m_nCompositeMaterialInputContainerSourceType = 0x4; // CompositeMaterialInputContainerSourceType_t
            public const nint m_strSpecificContainerMaterial = 0x8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIMaterial2>>
            public const nint m_strAttrName = 0xE8; // CUtlString
            public const nint m_strAlias = 0xF0; // CUtlString
            public const nint m_vecLooseVariables = 0xF8; // CUtlVector<CompositeMaterialInputLooseVariable_t>
            public const nint m_strAttrNameForVar = 0x110; // CUtlString
            public const nint m_bExposeExternally = 0x118; // bool
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CompositeMaterialAssemblyProcedure_t {
            public const nint m_vecCompMatIncludes = 0x0; // CUtlVector<CResourceNameTyped<CWeakHandle<InfoForResourceTypeCCompositeMaterialKit>>>
            public const nint m_vecMatchFilters = 0x18; // CUtlVector<CompositeMaterialMatchFilter_t>
            public const nint m_vecCompositeInputContainers = 0x30; // CUtlVector<CompositeMaterialInputContainer_t>
            public const nint m_vecPropertyMutators = 0x48; // CUtlVector<CompMatPropertyMutator_t>
        }
        // Parent: None
        // Field count: 37
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CompositeMaterialInputLooseVariable_t {
            public const nint m_strName = 0x0; // CUtlString
            public const nint m_bExposeExternally = 0x8; // bool
            public const nint m_strExposedFriendlyName = 0x10; // CUtlString
            public const nint m_strExposedFriendlyGroupName = 0x18; // CUtlString
            public const nint m_bExposedVariableIsFixedRange = 0x20; // bool
            public const nint m_strExposedVisibleWhenTrue = 0x28; // CUtlString
            public const nint m_strExposedHiddenWhenTrue = 0x30; // CUtlString
            public const nint m_strExposedValueList = 0x38; // CUtlString
            public const nint m_nVariableType = 0x40; // CompositeMaterialInputLooseVariableType_t
            public const nint m_bValueBoolean = 0x44; // bool
            public const nint m_nValueIntX = 0x48; // int32
            public const nint m_nValueIntY = 0x4C; // int32
            public const nint m_nValueIntZ = 0x50; // int32
            public const nint m_nValueIntW = 0x54; // int32
            public const nint m_bHasFloatBounds = 0x58; // bool
            public const nint m_flValueFloatX = 0x5C; // float32
            public const nint m_flValueFloatX_Min = 0x60; // float32
            public const nint m_flValueFloatX_Max = 0x64; // float32
            public const nint m_flValueFloatY = 0x68; // float32
            public const nint m_flValueFloatY_Min = 0x6C; // float32
            public const nint m_flValueFloatY_Max = 0x70; // float32
            public const nint m_flValueFloatZ = 0x74; // float32
            public const nint m_flValueFloatZ_Min = 0x78; // float32
            public const nint m_flValueFloatZ_Max = 0x7C; // float32
            public const nint m_flValueFloatW = 0x80; // float32
            public const nint m_flValueFloatW_Min = 0x84; // float32
            public const nint m_flValueFloatW_Max = 0x88; // float32
            public const nint m_cValueColor4 = 0x8C; // Color
            public const nint m_nValueSystemVar = 0x90; // CompositeMaterialVarSystemVar_t
            public const nint m_strResourceMaterial = 0x98; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIMaterial2>>
            public const nint m_strTextureContentAssetPath = 0x178; // CUtlString
            public const nint m_strTextureRuntimeResourcePath = 0x180; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCTextureBase>>
            public const nint m_strTextureCompilationVtexTemplate = 0x260; // CUtlString
            public const nint m_nTextureType = 0x268; // CompositeMaterialInputTextureType_t
            public const nint m_strString = 0x270; // CUtlString
            public const nint m_strPanoramaPanelPath = 0x278; // CUtlString
            public const nint m_nPanoramaRenderRes = 0x280; // int32
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class screenshake_t {
            public const nint endtime = 0x0; // GameTime_t
            public const nint duration = 0x4; // float32
            public const nint amplitude = 0x8; // float32
            public const nint frequency = 0xC; // float32
            public const nint nextShake = 0x10; // GameTime_t
            public const nint offset = 0x14; // Vector
            public const nint angle = 0x20; // float32
            public const nint direction = 0x28; // Vector
            public const nint nShakeType = 0x34; // uint8
        }
        // Parent: None
        // Field count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CCS2UIPawnGraphController {
            public const nint m_nAnimationSeed = 0x88; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_characterMode = 0xA0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_nTeamPreviewVariant = 0xB8; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_nTeamPreviewRandom = 0xD0; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_nTeamPreviewPosition = 0xE8; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_endOfMatchCelebration = 0x100; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_action = 0x118; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_bannerAnimation = 0x130; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_weaponCategory = 0x148; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_weaponType = 0x160; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_weaponState = 0x178; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            public const nint m_inspectTurnAngle = 0x190; // CAnimGraph2ParamOptionalRef<float32>
            public const nint m_bCT = 0x1A8; // CAnimGraph2ParamOptionalRef<bool>
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class inv_image_light_barn_t {
            public const nint color = 0x0; // Vector
            public const nint angle = 0xC; // QAngle
            public const nint brightness = 0x18; // float32
            public const nint orbit_distance = 0x1C; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class inv_image_map_t {
            public const nint map_name = 0x0; // CUtlString
            public const nint map_rotation = 0x8; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class inv_image_light_fill_t {
            public const nint color = 0x0; // Vector
            public const nint angle = 0xC; // QAngle
            public const nint brightness = 0x18; // float32
        }
        // Parent: None
        // Field count: 5
        public static class CInterpolatedValue {
            public const nint m_flStartTime = 0x0; // float32
            public const nint m_flEndTime = 0x4; // float32
            public const nint m_flStartValue = 0x8; // float32
            public const nint m_flEndValue = 0xC; // float32
            public const nint m_nInterpType = 0x10; // int32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class inv_image_item_t {
            public const nint position = 0x0; // Vector
            public const nint angle = 0xC; // QAngle
            public const nint pose_sequence = 0x18; // CUtlString
        }
        // Parent: None
        // Field count: 2
        public static class TimedEvent {
            public const nint m_TimeBetweenEvents = 0x0; // float32
            public const nint m_fNextEvent = 0x4; // float32
        }
        // Parent: None
        // Field count: 13
        public static class CFlashlightEffect {
            public const nint m_bIsOn = 0x10; // bool
            public const nint m_bMuzzleFlashEnabled = 0x20; // bool
            public const nint m_flMuzzleFlashBrightness = 0x24; // float32
            public const nint m_quatMuzzleFlashOrientation = 0x30; // Quaternion
            public const nint m_vecMuzzleFlashOrigin = 0x40; // Vector
            public const nint m_flFov = 0x4C; // float32
            public const nint m_flFarZ = 0x50; // float32
            public const nint m_flLinearAtten = 0x54; // float32
            public const nint m_bCastsShadows = 0x58; // bool
            public const nint m_flCurrentPullBackDist = 0x5C; // float32
            public const nint m_FlashlightTexture = 0x60; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_MuzzleFlashTexture = 0x68; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_textureName = 0x70; // char[64]
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class inv_image_camera_t {
            public const nint angle = 0x0; // QAngle
            public const nint fov = 0xC; // float32
            public const nint znear = 0x10; // float32
            public const nint zfar = 0x14; // float32
            public const nint target = 0x18; // Vector
            public const nint target_nudge = 0x24; // Vector
            public const nint orbit_distance = 0x30; // float32
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
        public static class CInventoryImageData {
            public const nint m_nNodeType = 0x0; // InventoryNodeType_t
            public const nint name = 0x8; // CUtlString
            public const nint inventory_image_data = 0x10; // inv_image_data_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class inv_image_clearcolor_t {
            public const nint color = 0x0; // Vector
        }
        // Parent: None
        // Field count: 2
        public static class C_CommandContext {
            public const nint needsprocessing = 0x0; // bool
            public const nint command_number = 0xA0; // int32
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CompositeMaterialEditorPoint_t {
            public const nint m_ModelName = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_nSequenceIndex = 0xE0; // int32
            public const nint m_flCycle = 0xE4; // float32
            public const nint m_KVModelStateChoices = 0xE8; // KeyValues3
            public const nint m_bEnableChildModel = 0xF8; // bool
            public const nint m_ChildModelName = 0x100; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_vecCompositeMaterialAssemblyProcedures = 0x1E0; // CUtlVector<CompositeMaterialAssemblyProcedure_t>
            public const nint m_vecCompositeMaterials = 0x1F8; // CUtlVector<CompositeMaterial_t>
        }
        // Parent: None
        // Field count: 0
        public static class CPlayerSprayDecalRenderHelper {
        }
        // Parent: None
        // Field count: 13
        public static class C_IronSightController {
            public const nint m_bIronSightAvailable = 0x10; // bool
            public const nint m_flIronSightAmount = 0x14; // float32
            public const nint m_flIronSightAmountGained = 0x18; // float32
            public const nint m_flIronSightAmountBiased = 0x1C; // float32
            public const nint m_flIronSightAmount_Interpolated = 0x20; // float32
            public const nint m_flIronSightAmountGained_Interpolated = 0x24; // float32
            public const nint m_flIronSightAmountBiased_Interpolated = 0x28; // float32
            public const nint m_flInterpolationLastUpdated = 0x2C; // float32
            public const nint m_angDeltaAverage = 0x30; // QAngle[8]
            public const nint m_angViewLast = 0x90; // QAngle
            public const nint m_vecDotCoords = 0x9C; // Vector2D
            public const nint m_flFiringInaccuracyExtraWidthMultiplier = 0xA4; // float32
            public const nint m_flSpeedRatio = 0xA8; // float32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CompMatMutatorCondition_t {
            public const nint m_nMutatorCondition = 0x0; // CompMatPropertyMutatorConditionType_t
            public const nint m_strMutatorConditionContainerName = 0x8; // CUtlString
            public const nint m_strMutatorConditionContainerVarName = 0x10; // CUtlString
            public const nint m_strMutatorConditionContainerVarValue = 0x18; // CUtlString
            public const nint m_bPassWhenTrue = 0x20; // bool
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class inv_image_data_t {
            public const nint map = 0x0; // inv_image_map_t
            public const nint item = 0x10; // inv_image_item_t
            public const nint camera = 0x30; // inv_image_camera_t
            public const nint lightsun = 0x64; // inv_image_light_sun_t
            public const nint lightfill = 0x80; // inv_image_light_fill_t
            public const nint light0 = 0x9C; // inv_image_light_barn_t
            public const nint light1 = 0xBC; // inv_image_light_barn_t
            public const nint clearcolor = 0xDC; // inv_image_clearcolor_t
        }
        // Parent: None
        // Field count: 29
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CompMatPropertyMutator_t {
            public const nint m_bEnabled = 0x0; // bool
            public const nint m_nMutatorCommandType = 0x4; // CompMatPropertyMutatorType_t
            public const nint m_strInitWith_Container = 0x8; // CUtlString
            public const nint m_strCopyProperty_InputContainerSrc = 0x10; // CUtlString
            public const nint m_strCopyProperty_InputContainerProperty = 0x18; // CUtlString
            public const nint m_strCopyProperty_TargetProperty = 0x20; // CUtlString
            public const nint m_strRandomRollInputVars_SeedInputVar = 0x28; // CUtlString
            public const nint m_vecRandomRollInputVars_InputVarsToRoll = 0x30; // CUtlVector<CUtlString>
            public const nint m_strCopyMatchingKeys_InputContainerSrc = 0x48; // CUtlString
            public const nint m_strCopyKeysWithSuffix_InputContainerSrc = 0x50; // CUtlString
            public const nint m_strCopyKeysWithSuffix_FindSuffix = 0x58; // CUtlString
            public const nint m_strCopyKeysWithSuffix_ReplaceSuffix = 0x60; // CUtlString
            public const nint m_nSetValue_Value = 0x68; // CompositeMaterialInputLooseVariable_t
            public const nint m_strGenerateTexture_TargetParam = 0x2F0; // CUtlString
            public const nint m_strGenerateTexture_InitialContainer = 0x2F8; // CUtlString
            public const nint m_nResolution = 0x300; // int32
            public const nint m_bIsScratchTarget = 0x304; // bool
            public const nint m_strCompressionFormat = 0x308; // CUtlString
            public const nint m_bSplatDebugInfo = 0x310; // bool
            public const nint m_bCaptureInRenderDoc = 0x311; // bool
            public const nint m_vecTexGenInstructions = 0x318; // CUtlVector<CompMatPropertyMutator_t>
            public const nint m_vecConditionalMutators = 0x330; // CUtlVector<CompMatPropertyMutator_t>
            public const nint m_strPopInputQueue_Container = 0x348; // CUtlString
            public const nint m_strDrawText_InputContainerSrc = 0x350; // CUtlString
            public const nint m_strDrawText_InputContainerProperty = 0x358; // CUtlString
            public const nint m_vecDrawText_Position = 0x360; // Vector2D
            public const nint m_colDrawText_Color = 0x368; // Color
            public const nint m_strDrawText_Font = 0x370; // CUtlString
            public const nint m_vecConditions = 0x378; // CUtlVector<CompMatMutatorCondition_t>
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CCompositeMaterialEditorDoc {
            public const nint m_nVersion = 0x8; // int32
            public const nint m_Points = 0x10; // CUtlVector<CompositeMaterialEditorPoint_t>
            public const nint m_KVthumbnail = 0x28; // KeyValues3
        }
        // Parent: None
        // Field count: 11
        public static class CClientAlphaProperty {
            public const nint m_nDistFadeStart = 0x10; // uint16
            public const nint m_nDistFadeEnd = 0x12; // uint16
            public const nint m_nDesyncOffset = 0x0; // bitfield:14
            public const nint m_bAlphaOverride = 0x0; // bitfield:1
            public const nint m_bShadowAlphaOverride = 0x0; // bitfield:1
            public const nint m_nRenderMode = 0x0; // bitfield:3
            public const nint m_nRenderFX = 0x0; // bitfield:5
            public const nint m_nAlpha = 0x17; // uint8
            public const nint m_flFadeScale = 0x18; // float32
            public const nint m_flRenderFxStartTime = 0x1C; // GameTime_t
            public const nint m_flRenderFxDuration = 0x20; // float32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class screenfade_t {
            public const nint Speed = 0x0; // float32
            public const nint End = 0x4; // float32
            public const nint Reset = 0x8; // float32
            public const nint m_Color = 0xC; // Color
            public const nint Flags = 0x10; // int32
        }
        // Parent: None
        // Field count: 43
        public static class CGlobalLightBase {
            public const nint m_bSpotLight = 0x10; // bool
            public const nint m_SpotLightOrigin = 0x14; // Vector
            public const nint m_SpotLightAngles = 0x20; // QAngle
            public const nint m_ShadowDirection = 0x2C; // Vector
            public const nint m_AmbientDirection = 0x38; // Vector
            public const nint m_SpecularDirection = 0x44; // Vector
            public const nint m_InspectorSpecularDirection = 0x50; // Vector
            public const nint m_flSpecularPower = 0x5C; // float32
            public const nint m_flSpecularIndependence = 0x60; // float32
            public const nint m_SpecularColor = 0x64; // Color
            public const nint m_bStartDisabled = 0x68; // bool
            public const nint m_bEnabled = 0x69; // bool
            public const nint m_LightColor = 0x6A; // Color
            public const nint m_AmbientColor1 = 0x6E; // Color
            public const nint m_AmbientColor2 = 0x72; // Color
            public const nint m_AmbientColor3 = 0x76; // Color
            public const nint m_flSunDistance = 0x7C; // float32
            public const nint m_flFOV = 0x80; // float32
            public const nint m_flNearZ = 0x84; // float32
            public const nint m_flFarZ = 0x88; // float32
            public const nint m_bEnableShadows = 0x8C; // bool
            public const nint m_bOldEnableShadows = 0x8D; // bool
            public const nint m_bBackgroundClearNotRequired = 0x8E; // bool
            public const nint m_flCloudScale = 0x90; // float32
            public const nint m_flCloud1Speed = 0x94; // float32
            public const nint m_flCloud1Direction = 0x98; // float32
            public const nint m_flCloud2Speed = 0x9C; // float32
            public const nint m_flCloud2Direction = 0xA0; // float32
            public const nint m_flAmbientScale1 = 0xB0; // float32
            public const nint m_flAmbientScale2 = 0xB4; // float32
            public const nint m_flGroundScale = 0xB8; // float32
            public const nint m_flLightScale = 0xBC; // float32
            public const nint m_flFoWDarkness = 0xC0; // float32
            public const nint m_bEnableSeparateSkyboxFog = 0xC4; // bool
            public const nint m_vFowColor = 0xC8; // Vector
            public const nint m_ViewOrigin = 0xD4; // Vector
            public const nint m_ViewAngles = 0xE0; // QAngle
            public const nint m_flViewFoV = 0xEC; // float32
            public const nint m_WorldPoints = 0xF0; // Vector[8]
            public const nint m_vFogOffsetLayer0 = 0x4A8; // Vector2D
            public const nint m_vFogOffsetLayer1 = 0x4B0; // Vector2D
            public const nint m_hEnvWind = 0x4B8; // CHandle<C_BaseEntity>
            public const nint m_hEnvSky = 0x4BC; // CHandle<C_BaseEntity>
        }
        // Parent: None
        // Field count: 0
        public static class IClientAlphaProperty {
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class inv_image_light_sun_t {
            public const nint color = 0x0; // Vector
            public const nint angle = 0xC; // QAngle
            public const nint brightness = 0x18; // float32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CompositeMaterialMatchFilter_t {
            public const nint m_nCompositeMaterialMatchFilterType = 0x0; // CompositeMaterialMatchFilterType_t
            public const nint m_strMatchFilter = 0x8; // CUtlString
            public const nint m_strMatchValue = 0x10; // CUtlString
            public const nint m_bPassWhenTrue = 0x18; // bool
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MPropertyElementNameFn
        public static class CompositeMaterial_t {
            public const nint m_TargetKVs = 0x8; // KeyValues3
            public const nint m_PreGenerationKVs = 0x18; // KeyValues3
            public const nint m_FinalKVs = 0x58; // KeyValues3
            public const nint m_vecGeneratedTextures = 0x80; // CUtlVector<GeneratedTextureHandle_t>
        }
    }
}
