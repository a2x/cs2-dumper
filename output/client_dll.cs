// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-14 23:58:25.486779500 UTC

namespace CS2Dumper.Schemas {
    // Module: client.dll
    // Class count: 489
    // Enum count: 8
    public static class ClientDll {
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
        //
        // Metadata:
        // NetworkVarNames: m_hPlayerPing (CHandle<CBaseEntity>)
        public static class CCSPlayer_PingServices {
            public const nint m_hPlayerPing = 0x40; // CHandle<C_BaseEntity>
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
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: nTagTick (GameTick_t)
        // NetworkVarNames: flFlinchModSmall (float)
        // NetworkVarNames: flFlinchModLarge (float)
        // NetworkVarNames: flFriendlyFireDamageReductionRatio (float)
        public static class PredictedDamageTag_t {
            public const nint nTagTick = 0x30; // GameTick_t
            public const nint flFlinchModSmall = 0x34; // float32
            public const nint flFlinchModLarge = 0x38; // float32
            public const nint flFriendlyFireDamageReductionRatio = 0x3C; // float32
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
            public const nint m_location = 0x30; // Vector
            public const nint m_hEntOwner = 0x3C; // CHandle<C_BaseEntity>
        }
        // Parent: C_BaseEntity
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_skyboxData (sky3dparams_t)
        // NetworkVarNames: m_skyboxSlotToken (CUtlStringToken)
        public static class C_SkyCamera {
            public const nint m_skyboxData = 0x5F8; // sky3dparams_t
            public const nint m_skyboxSlotToken = 0x688; // CUtlStringToken
            public const nint m_bUseAngles = 0x68C; // bool
            public const nint m_pNext = 0x690; // C_SkyCamera*
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
        //
        // Metadata:
        // MNetworkOverride
        // MNetworkOverride
        public static class C_FuncRotating {
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
        public static class C_SoundOpvarSetPointBase {
            public const nint m_iszStackName = 0x5F8; // CUtlSymbolLarge
            public const nint m_iszOperatorName = 0x600; // CUtlSymbolLarge
            public const nint m_iszOpvarName = 0x608; // CUtlSymbolLarge
            public const nint m_iOpvarIndex = 0x610; // int32
            public const nint m_bUseAutoCompare = 0x614; // bool
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
        public static class C_EnvCubemapFog {
            public const nint m_flEndDistance = 0x5F8; // float32
            public const nint m_flStartDistance = 0x5FC; // float32
            public const nint m_flFogFalloffExponent = 0x600; // float32
            public const nint m_bHeightFogEnabled = 0x604; // bool
            public const nint m_flFogHeightWidth = 0x608; // float32
            public const nint m_flFogHeightEnd = 0x60C; // float32
            public const nint m_flFogHeightStart = 0x610; // float32
            public const nint m_flFogHeightExponent = 0x614; // float32
            public const nint m_flLODBias = 0x618; // float32
            public const nint m_bActive = 0x61C; // bool
            public const nint m_bStartDisabled = 0x61D; // bool
            public const nint m_flFogMaxOpacity = 0x620; // float32
            public const nint m_nCubemapSourceType = 0x624; // int32
            public const nint m_hSkyMaterial = 0x628; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_iszSkyEntity = 0x630; // CUtlSymbolLarge
            public const nint m_hFogCubemapTexture = 0x638; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_bHasHeightFogEnd = 0x640; // bool
            public const nint m_bFirstTime = 0x641; // bool
        }
        // Parent: C_CSGO_TeamSelectCharacterPosition
        // Field count: 0
        public static class C_CSGO_TeamSelectTerroristPosition {
        }
        // Parent: None
        // Field count: 5
        public static class C_BaseFlex__Emphasized_Phoneme {
            public const nint m_sClassName = 0x0; // CUtlString
            public const nint m_flAmount = 0x18; // float32
            public const nint m_bRequired = 0x1C; // bool
            public const nint m_bBasechecked = 0x1D; // bool
            public const nint m_bValid = 0x1E; // bool
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
        public static class C_EnvParticleGlow {
            public const nint m_flAlphaScale = 0x1460; // float32
            public const nint m_flRadiusScale = 0x1464; // float32
            public const nint m_flSelfIllumScale = 0x1468; // float32
            public const nint m_ColorTint = 0x146C; // Color
            public const nint m_hTextureOverride = 0x1470; // CStrongHandle<InfoForResourceTypeCTextureBase>
        }
        // Parent: C_BaseEntity
        // Field count: 0
        public static class CCS_PortraitWorldCallbackHandler {
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
        public static class CTriggerFan {
            public const nint m_vFanOriginOffset = 0xFF0; // Vector
            public const nint m_vDirection = 0xFFC; // Vector
            public const nint m_bPushTowardsInfoTarget = 0x1008; // bool
            public const nint m_bPushAwayFromInfoTarget = 0x1009; // bool
            public const nint m_qNoiseDelta = 0x1010; // Quaternion
            public const nint m_hInfoFan = 0x1020; // CHandle<CInfoFan>
            public const nint m_flForce = 0x1024; // float32
            public const nint m_bFalloff = 0x1028; // bool
            public const nint m_RampTimer = 0x1030; // CountdownTimer
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
        //
        // Metadata:
        // NetworkVarNames: m_EffectName (string_t)
        // NetworkVarNames: m_bState (bool)
        public static class C_FuncElectrifiedVolume {
            public const nint m_nAmbientEffect = 0xEB0; // ParticleIndex_t
            public const nint m_EffectName = 0xEB8; // CUtlSymbolLarge
            public const nint m_bState = 0xEC0; // bool
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
        public static class C_MapVetoPickController {
            public const nint m_nDraftType = 0x608; // int32
            public const nint m_nTeamWinningCoinToss = 0x60C; // int32
            public const nint m_nTeamWithFirstChoice = 0x610; // int32[64]
            public const nint m_nVoteMapIdsList = 0x710; // int32[7]
            public const nint m_nAccountIDs = 0x72C; // int32[64]
            public const nint m_nMapId0 = 0x82C; // int32[64]
            public const nint m_nMapId1 = 0x92C; // int32[64]
            public const nint m_nMapId2 = 0xA2C; // int32[64]
            public const nint m_nMapId3 = 0xB2C; // int32[64]
            public const nint m_nMapId4 = 0xC2C; // int32[64]
            public const nint m_nMapId5 = 0xD2C; // int32[64]
            public const nint m_nStartingSide0 = 0xE2C; // int32[64]
            public const nint m_nCurrentPhase = 0xF2C; // int32
            public const nint m_nPhaseStartTick = 0xF30; // int32
            public const nint m_nPhaseDurationTicks = 0xF34; // int32
            public const nint m_nPostDataUpdateTick = 0xF38; // int32
            public const nint m_bDisabledHud = 0xF3C; // bool
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
        public static class C_EnvVolumetricFogVolume {
            public const nint m_bActive = 0x5F8; // bool
            public const nint m_vBoxMins = 0x5FC; // Vector
            public const nint m_vBoxMaxs = 0x608; // Vector
            public const nint m_bStartDisabled = 0x614; // bool
            public const nint m_bIndirectUseLPVs = 0x615; // bool
            public const nint m_flStrength = 0x618; // float32
            public const nint m_nFalloffShape = 0x61C; // int32
            public const nint m_flFalloffExponent = 0x620; // float32
            public const nint m_flHeightFogDepth = 0x624; // float32
            public const nint m_fHeightFogEdgeWidth = 0x628; // float32
            public const nint m_fIndirectLightStrength = 0x62C; // float32
            public const nint m_fSunLightStrength = 0x630; // float32
            public const nint m_fNoiseStrength = 0x634; // float32
            public const nint m_TintColor = 0x638; // Color
            public const nint m_bOverrideTintColor = 0x63C; // bool
            public const nint m_bOverrideIndirectLightStrength = 0x63D; // bool
            public const nint m_bOverrideSunLightStrength = 0x63E; // bool
            public const nint m_bOverrideNoiseStrength = 0x63F; // bool
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
        public static class C_BarnLight {
            public const nint m_bEnabled = 0xEB0; // bool
            public const nint m_nColorMode = 0xEB4; // int32
            public const nint m_Color = 0xEB8; // Color
            public const nint m_flColorTemperature = 0xEBC; // float32
            public const nint m_flBrightness = 0xEC0; // float32
            public const nint m_flBrightnessScale = 0xEC4; // float32
            public const nint m_nDirectLight = 0xEC8; // int32
            public const nint m_nBakedShadowIndex = 0xECC; // int32
            public const nint m_nLightPathUniqueId = 0xED0; // int32
            public const nint m_nLightMapUniqueId = 0xED4; // int32
            public const nint m_nLuminaireShape = 0xED8; // int32
            public const nint m_flLuminaireSize = 0xEDC; // float32
            public const nint m_flLuminaireAnisotropy = 0xEE0; // float32
            public const nint m_LightStyleString = 0xEE8; // CUtlString
            public const nint m_flLightStyleStartTime = 0xEF0; // GameTime_t
            public const nint m_QueuedLightStyleStrings = 0xEF8; // C_NetworkUtlVectorBase<CUtlString>
            public const nint m_LightStyleEvents = 0xF10; // C_NetworkUtlVectorBase<CUtlString>
            public const nint m_LightStyleTargets = 0xF28; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
            public const nint m_StyleEvent = 0xF40; // CEntityIOOutput[4]
            public const nint m_hLightCookie = 0xFE0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_flShape = 0xFE8; // float32
            public const nint m_flSoftX = 0xFEC; // float32
            public const nint m_flSoftY = 0xFF0; // float32
            public const nint m_flSkirt = 0xFF4; // float32
            public const nint m_flSkirtNear = 0xFF8; // float32
            public const nint m_vSizeParams = 0xFFC; // Vector
            public const nint m_flRange = 0x1008; // float32
            public const nint m_vShear = 0x100C; // Vector
            public const nint m_nBakeSpecularToCubemaps = 0x1018; // int32
            public const nint m_vBakeSpecularToCubemapsSize = 0x101C; // Vector
            public const nint m_nCastShadows = 0x1028; // int32
            public const nint m_nShadowMapSize = 0x102C; // int32
            public const nint m_nShadowPriority = 0x1030; // int32
            public const nint m_bContactShadow = 0x1034; // bool
            public const nint m_bForceShadowsEnabled = 0x1035; // bool
            public const nint m_nBounceLight = 0x1038; // int32
            public const nint m_flBounceScale = 0x103C; // float32
            public const nint m_flMinRoughness = 0x1040; // float32
            public const nint m_vAlternateColor = 0x1044; // Vector
            public const nint m_fAlternateColorBrightness = 0x1050; // float32
            public const nint m_nFog = 0x1054; // int32
            public const nint m_flFogStrength = 0x1058; // float32
            public const nint m_nFogShadows = 0x105C; // int32
            public const nint m_flFogScale = 0x1060; // float32
            public const nint m_bFogMixedShadows = 0x1064; // bool
            public const nint m_flFadeSizeStart = 0x1068; // float32
            public const nint m_flFadeSizeEnd = 0x106C; // float32
            public const nint m_flShadowFadeSizeStart = 0x1070; // float32
            public const nint m_flShadowFadeSizeEnd = 0x1074; // float32
            public const nint m_bPrecomputedFieldsValid = 0x1078; // bool
            public const nint m_vPrecomputedBoundsMins = 0x107C; // Vector
            public const nint m_vPrecomputedBoundsMaxs = 0x1088; // Vector
            public const nint m_vPrecomputedOBBOrigin = 0x1094; // Vector
            public const nint m_vPrecomputedOBBAngles = 0x10A0; // QAngle
            public const nint m_vPrecomputedOBBExtent = 0x10AC; // Vector
            public const nint m_nPrecomputedSubFrusta = 0x10B8; // int32
            public const nint m_vPrecomputedOBBOrigin0 = 0x10BC; // Vector
            public const nint m_vPrecomputedOBBAngles0 = 0x10C8; // QAngle
            public const nint m_vPrecomputedOBBExtent0 = 0x10D4; // Vector
            public const nint m_vPrecomputedOBBOrigin1 = 0x10E0; // Vector
            public const nint m_vPrecomputedOBBAngles1 = 0x10EC; // QAngle
            public const nint m_vPrecomputedOBBExtent1 = 0x10F8; // Vector
            public const nint m_vPrecomputedOBBOrigin2 = 0x1104; // Vector
            public const nint m_vPrecomputedOBBAngles2 = 0x1110; // QAngle
            public const nint m_vPrecomputedOBBExtent2 = 0x111C; // Vector
            public const nint m_vPrecomputedOBBOrigin3 = 0x1128; // Vector
            public const nint m_vPrecomputedOBBAngles3 = 0x1134; // QAngle
            public const nint m_vPrecomputedOBBExtent3 = 0x1140; // Vector
            public const nint m_vPrecomputedOBBOrigin4 = 0x114C; // Vector
            public const nint m_vPrecomputedOBBAngles4 = 0x1158; // QAngle
            public const nint m_vPrecomputedOBBExtent4 = 0x1164; // Vector
            public const nint m_vPrecomputedOBBOrigin5 = 0x1170; // Vector
            public const nint m_vPrecomputedOBBAngles5 = 0x117C; // QAngle
            public const nint m_vPrecomputedOBBExtent5 = 0x1188; // Vector
            public const nint m_bInitialBoneSetup = 0x11D8; // bool
            public const nint m_VisClusters = 0x11E0; // C_NetworkUtlVectorBase<uint16>
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
            public const nint m_bBeenEnabled = 0x1100; // bool
            public const nint m_bHide = 0x1101; // bool
            public const nint m_flSeenTargetTime = 0x1104; // float32
            public const nint m_pTargetPanel = 0x1108; // C_PointClientUIWorldPanel*
        }
        // Parent: CPlayer_UseServices
        // Field count: 0
        public static class CCSObserver_UseServices {
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
        public static class C_PostProcessingVolume {
            public const nint m_hPostSettings = 0x1000; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
            public const nint m_flFadeDuration = 0x1008; // float32
            public const nint m_flMinLogExposure = 0x100C; // float32
            public const nint m_flMaxLogExposure = 0x1010; // float32
            public const nint m_flMinExposure = 0x1014; // float32
            public const nint m_flMaxExposure = 0x1018; // float32
            public const nint m_flExposureCompensation = 0x101C; // float32
            public const nint m_flExposureFadeSpeedUp = 0x1020; // float32
            public const nint m_flExposureFadeSpeedDown = 0x1024; // float32
            public const nint m_flTonemapEVSmoothingRange = 0x1028; // float32
            public const nint m_bMaster = 0x102C; // bool
            public const nint m_bExposureControl = 0x102D; // bool
        }
        // Parent: CPlayer_UseServices
        // Field count: 0
        public static class CCSPlayer_UseServices {
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
        //
        // Metadata:
        // NetworkVarNames: m_fFanForceMaxRadius (float)
        // NetworkVarNames: m_fFanForceMinRadius (float)
        // NetworkVarNames: m_flCurveDistRange (float)
        // NetworkVarNames: m_FanForceCurveString (string_t)
        public static class CInfoFan {
            public const nint m_fFanForceMaxRadius = 0x638; // float32
            public const nint m_fFanForceMinRadius = 0x63C; // float32
            public const nint m_flCurveDistRange = 0x640; // float32
            public const nint m_FanForceCurveString = 0x648; // CUtlSymbolLarge
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
        public static class C_VoteController {
            public const nint m_iActiveIssueIndex = 0x608; // int32
            public const nint m_iOnlyTeamToVote = 0x60C; // int32
            public const nint m_nVoteOptionCount = 0x610; // int32[5]
            public const nint m_nPotentialVotes = 0x624; // int32
            public const nint m_bVotesDirty = 0x628; // bool
            public const nint m_bTypeDirty = 0x629; // bool
            public const nint m_bIsYesNoVote = 0x62A; // bool
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
        public static class C_CSPlayerPawnBase {
            public const nint m_pPingServices = 0x15D8; // CCSPlayer_PingServices*
            public const nint m_previousPlayerState = 0x15E0; // CSPlayerState
            public const nint m_iPlayerState = 0x15E4; // CSPlayerState
            public const nint m_bHasMovedSinceSpawn = 0x15E8; // bool
            public const nint m_flLastSpawnTimeIndex = 0x15EC; // GameTime_t
            public const nint m_iProgressBarDuration = 0x15F0; // int32
            public const nint m_flProgressBarStartTime = 0x15F4; // float32
            public const nint m_flClientDeathTime = 0x15F8; // GameTime_t
            public const nint m_flFlashBangTime = 0x15FC; // float32
            public const nint m_flFlashScreenshotAlpha = 0x1600; // float32
            public const nint m_flFlashOverlayAlpha = 0x1604; // float32
            public const nint m_bFlashBuildUp = 0x1608; // bool
            public const nint m_bFlashDspHasBeenCleared = 0x1609; // bool
            public const nint m_bFlashScreenshotHasBeenGrabbed = 0x160A; // bool
            public const nint m_flFlashMaxAlpha = 0x160C; // float32
            public const nint m_flFlashDuration = 0x1610; // float32
            public const nint m_flClientHealthFadeChangeTimestamp = 0x1614; // GameTime_t
            public const nint m_nClientHealthFadeParityValue = 0x1618; // int32
            public const nint m_fNextThinkPushAway = 0x161C; // float32
            public const nint m_flCurrentMusicStartTime = 0x1624; // float32
            public const nint m_flMusicRoundStartTime = 0x1628; // float32
            public const nint m_bDeferStartMusicOnWarmup = 0x162C; // bool
            public const nint m_flLastSmokeOverlayAlpha = 0x1630; // float32
            public const nint m_flLastSmokeAge = 0x1634; // float32
            public const nint m_vLastSmokeOverlayColor = 0x1638; // Vector
            public const nint m_hOriginalController = 0x1660; // CHandle<CCSPlayerController>
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
        public static class C_C4 {
            public const nint m_activeLightParticleIndex = 0x1F80; // ParticleIndex_t
            public const nint m_eActiveLightEffect = 0x1F84; // C4LightEffect_t
            public const nint m_bStartedArming = 0x1F88; // bool
            public const nint m_fArmedTime = 0x1F8C; // GameTime_t
            public const nint m_bBombPlacedAnimation = 0x1F90; // bool
            public const nint m_bIsPlantingViaUse = 0x1F91; // bool
            public const nint m_entitySpottedState = 0x1F98; // EntitySpottedState_t
            public const nint m_nSpotRules = 0x1FB0; // int32
            public const nint m_bPlayedArmingBeeps = 0x1FB4; // bool[7]
            public const nint m_bBombPlanted = 0x1FBB; // bool
        }
        // Parent: CBaseProp
        // Field count: 28
        //
        // Metadata:
        // NetworkVarNames: m_CPropDataComponent (CPropDataComponent::Storage_t)
        public static class C_BreakableProp {
            public const nint m_CPropDataComponent = 0x1190; // CPropDataComponent
            public const nint m_OnStartDeath = 0x11D0; // CEntityIOOutput
            public const nint m_OnBreak = 0x11F8; // CEntityIOOutput
            public const nint m_OnHealthChanged = 0x1220; // CEntityOutputTemplate<float32>
            public const nint m_OnTakeDamage = 0x1248; // CEntityIOOutput
            public const nint m_impactEnergyScale = 0x1270; // float32
            public const nint m_iMinHealthDmg = 0x1274; // int32
            public const nint m_flPressureDelay = 0x1278; // float32
            public const nint m_flDefBurstScale = 0x127C; // float32
            public const nint m_vDefBurstOffset = 0x1280; // Vector
            public const nint m_hBreaker = 0x128C; // CHandle<C_BaseEntity>
            public const nint m_PerformanceMode = 0x1290; // PerformanceMode_t
            public const nint m_flPreventDamageBeforeTime = 0x1294; // GameTime_t
            public const nint m_BreakableContentsType = 0x1298; // BreakableContentsType_t
            public const nint m_strBreakableContentsPropGroupOverride = 0x12A0; // CUtlString
            public const nint m_strBreakableContentsParticleOverride = 0x12A8; // CUtlString
            public const nint m_bHasBreakPiecesOrCommands = 0x12B0; // bool
            public const nint m_explodeDamage = 0x12B4; // float32
            public const nint m_explodeRadius = 0x12B8; // float32
            public const nint m_explosionDelay = 0x12C0; // float32
            public const nint m_explosionBuildupSound = 0x12C8; // CUtlSymbolLarge
            public const nint m_explosionCustomEffect = 0x12D0; // CUtlSymbolLarge
            public const nint m_explosionCustomSound = 0x12D8; // CUtlSymbolLarge
            public const nint m_explosionModifier = 0x12E0; // CUtlSymbolLarge
            public const nint m_hPhysicsAttacker = 0x12E8; // CHandle<C_BasePlayerPawn>
            public const nint m_flLastPhysicsInfluenceTime = 0x12EC; // GameTime_t
            public const nint m_flDefaultFadeScale = 0x12F0; // float32
            public const nint m_hLastAttacker = 0x12F4; // CHandle<C_BaseEntity>
        }
        // Parent: CCSGO_WingmanIntroCharacterPosition
        // Field count: 0
        public static class CCSGO_WingmanIntroTerroristPosition {
        }
        // Parent: None
        // Field count: 7
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
        // Parent: None
        // Field count: 5
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
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPulseEditorHeaderIcon
        // MPropertyFriendlyName
        public static class CPulseCell_WaitForObservable {
            public const nint m_Condition = 0x48; // PulseObservableBoolExpression_t
            public const nint m_OnTrue = 0xC0; // CPulse_ResumePoint
        }
        // Parent: C_SoundAreaEntityBase
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_flRadius (float)
        public static class C_SoundAreaEntitySphere {
            public const nint m_flRadius = 0x620; // float32
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
        //
        // Metadata:
        // NetworkVarNames: m_glowEntity (CHandle<C_BaseModelEntity>)
        // NetworkVarNames: m_usable (bool)
        // NetworkVarNames: m_szDisplayText (string_t)
        public static class C_BaseButton {
            public const nint m_glowEntity = 0xEB0; // CHandle<C_BaseModelEntity>
            public const nint m_usable = 0xEB4; // bool
            public const nint m_szDisplayText = 0xEB8; // CUtlSymbolLarge
        }
        // Parent: CPlayer_ObserverServices
        // Field count: 1
        public static class CCSObserver_ObserverServices {
            public const nint m_obsInterpState = 0x5C; // ObserverInterpState_t
        }
        // Parent: CEntityComponent
        // Field count: 1
        public static class CHitboxComponent {
            public const nint m_flBoundsExpandRadius = 0x14; // float32
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
            public const nint m_flDensity = 0xFF0; // float32
            public const nint m_flParticleInnerDist = 0x1000; // float32
            public const nint m_pParticleDef = 0x1008; // char*
            public const nint m_tParticlePrecipTraceTimer = 0x1030; // TimedEvent[1]
            public const nint m_bActiveParticlePrecipEmitter = 0x1038; // bool[1]
            public const nint m_bParticlePrecipInitialized = 0x1039; // bool
            public const nint m_bHasSimulatedSinceLastSceneObjectUpdate = 0x103A; // bool
            public const nint m_nAvailableSheetSequencesMaxIndex = 0x103C; // int32
        }
        // Parent: CLogicalEntity
        // Field count: 5
        public static class CLogicRelay {
            public const nint m_bDisabled = 0x5F8; // bool
            public const nint m_bWaitForRefire = 0x5F9; // bool
            public const nint m_bTriggerOnce = 0x5FA; // bool
            public const nint m_bFastRetrigger = 0x5FB; // bool
            public const nint m_bPassthoughCaller = 0x5FC; // bool
        }
        // Parent: 
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
        //
        // Metadata:
        // NetworkVarNames: m_flLightScale (float32)
        // NetworkVarNames: m_Radius (float32)
        public static class C_SpotlightEnd {
            public const nint m_flLightScale = 0xEB0; // float32
            public const nint m_Radius = 0xEB4; // float32
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
        public static class C_EnvVolumetricFogController {
            public const nint m_flScattering = 0x5F8; // float32
            public const nint m_TintColor = 0x5FC; // Color
            public const nint m_flAnisotropy = 0x600; // float32
            public const nint m_flFadeSpeed = 0x604; // float32
            public const nint m_flDrawDistance = 0x608; // float32
            public const nint m_flFadeInStart = 0x60C; // float32
            public const nint m_flFadeInEnd = 0x610; // float32
            public const nint m_flIndirectStrength = 0x614; // float32
            public const nint m_nVolumeDepth = 0x618; // int32
            public const nint m_fFirstVolumeSliceThickness = 0x61C; // float32
            public const nint m_nIndirectTextureDimX = 0x620; // int32
            public const nint m_nIndirectTextureDimY = 0x624; // int32
            public const nint m_nIndirectTextureDimZ = 0x628; // int32
            public const nint m_vBoxMins = 0x62C; // Vector
            public const nint m_vBoxMaxs = 0x638; // Vector
            public const nint m_bActive = 0x644; // bool
            public const nint m_flStartAnisoTime = 0x648; // GameTime_t
            public const nint m_flStartScatterTime = 0x64C; // GameTime_t
            public const nint m_flStartDrawDistanceTime = 0x650; // GameTime_t
            public const nint m_flStartAnisotropy = 0x654; // float32
            public const nint m_flStartScattering = 0x658; // float32
            public const nint m_flStartDrawDistance = 0x65C; // float32
            public const nint m_flDefaultAnisotropy = 0x660; // float32
            public const nint m_flDefaultScattering = 0x664; // float32
            public const nint m_flDefaultDrawDistance = 0x668; // float32
            public const nint m_bStartDisabled = 0x66C; // bool
            public const nint m_bEnableIndirect = 0x66D; // bool
            public const nint m_bIsMaster = 0x66E; // bool
            public const nint m_hFogIndirectTexture = 0x670; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_nForceRefreshCount = 0x678; // int32
            public const nint m_fNoiseSpeed = 0x67C; // float32
            public const nint m_fNoiseStrength = 0x680; // float32
            public const nint m_vNoiseScale = 0x684; // Vector
            public const nint m_fWindSpeed = 0x690; // float32
            public const nint m_vWindDirection = 0x694; // Vector
            public const nint m_bFirstTime = 0x6A0; // bool
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
        //
        // Metadata:
        // NetworkVarNames: m_flFadeStartDist (float32)
        // NetworkVarNames: m_flFadeEndDist (float32)
        public static class C_EnvDetailController {
            public const nint m_flFadeStartDist = 0x5F8; // float32
            public const nint m_flFadeEndDist = 0x5FC; // float32
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
        public static class C_EnvWindVolume {
            public const nint m_bActive = 0x5F8; // bool
            public const nint m_vBoxMins = 0x5FC; // Vector
            public const nint m_vBoxMaxs = 0x608; // Vector
            public const nint m_bStartDisabled = 0x614; // bool
            public const nint m_nShape = 0x618; // int32
            public const nint m_fWindSpeedMultiplier = 0x61C; // float32
            public const nint m_fWindTurbulenceMultiplier = 0x620; // float32
            public const nint m_fWindSpeedVariationMultiplier = 0x624; // float32
            public const nint m_fWindDirectionVariationMultiplier = 0x628; // float32
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
        //
        // Metadata:
        // NetworkVarNames: m_hCarriedHostage (CHandle<CBaseEntity>)
        // NetworkVarNames: m_hCarriedHostageProp (CHandle<CBaseEntity>)
        public static class CCSPlayer_HostageServices {
            public const nint m_hCarriedHostage = 0x40; // CHandle<C_BaseEntity>
            public const nint m_hCarriedHostageProp = 0x44; // CHandle<C_BaseEntity>
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
        //
        // Metadata:
        // MNetworkIncludeByName
        // NetworkVarNames: m_aPlayerControllers (CHandle<CBasePlayerController>)
        // NetworkVarNames: m_aPlayers (CHandle<C_BasePlayerPawn>)
        // NetworkVarNames: m_iScore (int32)
        // NetworkVarNames: m_szTeamname (char)
        public static class C_Team {
            public const nint m_aPlayerControllers = 0x5F8; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
            public const nint m_aPlayers = 0x610; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
            public const nint m_iScore = 0x628; // int32
            public const nint m_szTeamname = 0x62C; // char[129]
        }
        // Parent: C_PathParticleRope
        // Field count: 0
        public static class C_PathParticleRopeAlias_path_particle_rope_clientside {
        }
        // Parent: C_PointEntity
        // Field count: 1
        public static class CPointChildModifier {
            public const nint m_bOrphanInsteadOfDeletingChildrenOnRemove = 0x5F8; // bool
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
            public const nint m_nVariant = 0x680; // int32
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
        public static class C_ColorCorrectionVolume {
            public const nint m_LastEnterWeight = 0xFF0; // float32
            public const nint m_LastEnterTime = 0xFF4; // GameTime_t
            public const nint m_LastExitWeight = 0xFF8; // float32
            public const nint m_LastExitTime = 0xFFC; // GameTime_t
            public const nint m_bEnabled = 0x1000; // bool
            public const nint m_MaxWeight = 0x1004; // float32
            public const nint m_FadeDuration = 0x1008; // float32
            public const nint m_Weight = 0x100C; // float32
            public const nint m_lookupFilename = 0x1010; // char[512]
        }
        // Parent: CPlayerPawnComponent
        // Field count: 15
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
            public const nint m_vecOldViewAngles = 0x220; // QAngle
        }
        // Parent: CInfoDynamicShadowHint
        // Field count: 2
        public static class CInfoDynamicShadowHintBox {
            public const nint m_vBoxMins = 0x610; // Vector
            public const nint m_vBoxMaxs = 0x61C; // Vector
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
        public static class CBaseAnimGraphController {
            public const nint m_animGraphNetworkedVars = 0x18; // CAnimGraphNetworkedVariables
            public const nint m_bSequenceFinished = 0x14A8; // bool
            public const nint m_flSoundSyncTime = 0x14AC; // float32
            public const nint m_nActiveIKChainMask = 0x14B0; // uint32
            public const nint m_hSequence = 0x14B4; // HSequence
            public const nint m_flSeqStartTime = 0x14B8; // GameTime_t
            public const nint m_flSeqFixedCycle = 0x14BC; // float32
            public const nint m_nAnimLoopMode = 0x14C0; // AnimLoopMode_t
            public const nint m_flPlaybackRate = 0x14C4; // CNetworkedQuantizedFloat
            public const nint m_nNotifyState = 0x14D0; // SequenceFinishNotifyState_t
            public const nint m_bNetworkedAnimationInputsChanged = 0x14D2; // bool
            public const nint m_bNetworkedSequenceChanged = 0x14D3; // bool
            public const nint m_bLastUpdateSkipped = 0x14D4; // bool
            public const nint m_flPrevAnimUpdateTime = 0x14D8; // GameTime_t
            public const nint m_hGraphDefinitionAG2 = 0x1860; // CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
            public const nint m_bIsUsingAG2 = 0x1868; // bool
            public const nint m_serializedPoseRecipeAG2 = 0x1870; // C_NetworkUtlVectorBase<uint8>
            public const nint m_nSerializePoseRecipeSizeAG2 = 0x1888; // int32
            public const nint m_nSerializePoseRecipeVersionAG2 = 0x188C; // int32
            public const nint m_nGraphCreationFlagsAG2 = 0x1890; // uint8
            public const nint m_nServerGraphDefReloadCountAG2 = 0x1A7C; // int32
            public const nint m_nServerSerializationContextIteration = 0x1A84; // int32
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
        public static class C_ColorCorrection {
            public const nint m_vecOrigin = 0x5F8; // Vector
            public const nint m_MinFalloff = 0x604; // float32
            public const nint m_MaxFalloff = 0x608; // float32
            public const nint m_flFadeInDuration = 0x60C; // float32
            public const nint m_flFadeOutDuration = 0x610; // float32
            public const nint m_flMaxWeight = 0x614; // float32
            public const nint m_flCurWeight = 0x618; // float32
            public const nint m_netlookupFilename = 0x61C; // char[512]
            public const nint m_bEnabled = 0x81C; // bool
            public const nint m_bMaster = 0x81D; // bool
            public const nint m_bClientSide = 0x81E; // bool
            public const nint m_bExclusive = 0x81F; // bool
            public const nint m_bEnabledOnClient = 0x820; // bool[1]
            public const nint m_flCurWeightOnClient = 0x824; // float32[1]
            public const nint m_bFadingIn = 0x828; // bool[1]
            public const nint m_flFadeStartWeight = 0x82C; // float32[1]
            public const nint m_flFadeStartTime = 0x830; // float32[1]
            public const nint m_flFadeDuration = 0x834; // float32[1]
        }
        // Parent: 
        // Field count: 10
        public static class CBuoyancyHelper {
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
            public const nint m_flDeathCamTilt = 0x2A0; // float32
            public const nint m_vClientScopeInaccuracy = 0x2A8; // Vector
        }
        // Parent: CBaseFilter
        // Field count: 3
        public static class CFilterMultiple {
            public const nint m_nFilterType = 0x650; // filter_t
            public const nint m_iFilterName = 0x658; // CUtlSymbolLarge[10]
            public const nint m_hFilter = 0x6A8; // CHandle<C_BaseEntity>[10]
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
            public const nint m_OnPlay = 0x5F8; // CEntityIOOutput
            public const nint m_flRadius = 0x620; // float32
            public const nint m_soundEventName = 0x628; // CUtlSymbolLarge
            public const nint m_bOverrideWithEvent = 0x630; // bool
            public const nint m_soundscapeIndex = 0x634; // int32
            public const nint m_soundscapeEntityListId = 0x638; // int32
            public const nint m_positionNames = 0x640; // CUtlSymbolLarge[8]
            public const nint m_hProxySoundscape = 0x680; // CHandle<CEnvSoundscape>
            public const nint m_bDisabled = 0x684; // bool
            public const nint m_soundscapeName = 0x688; // CUtlSymbolLarge
            public const nint m_soundEventHash = 0x690; // uint32
        }
        // Parent: C_SoundEventEntity
        // Field count: 0
        public static class C_SoundEventEntityAlias_snd_event_point {
        }
        // Parent: C_BaseEntity
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_fog (fogparams_t)
        public static class C_FogController {
            public const nint m_fog = 0x5F8; // fogparams_t
            public const nint m_bUseAngles = 0x660; // bool
            public const nint m_iChangedVariables = 0x664; // int32
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
        //
        // Metadata:
        // NetworkVarNames: m_sceneNode (CGameSceneNode)
        public static class CBodyComponentPoint {
            public const nint m_sceneNode = 0x80; // CGameSceneNode
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponM4A1Silencer {
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
            public const nint m_AttributeList = 0x210; // CAttributeList
            public const nint m_NetworkedDynamicAttributes = 0x288; // CAttributeList
            public const nint m_szCustomName = 0x300; // char[161]
            public const nint m_szCustomNameOverride = 0x3A1; // char[161]
            public const nint m_bInitializedTags = 0x470; // bool
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
        //
        // Metadata:
        // NetworkVarNames: m_vecCornerPairsNetworked (SoundeventPathCornerPairNetworked_t)
        public static class C_SoundEventPathCornerEntity {
            public const nint m_vecCornerPairsNetworked = 0x6C0; // C_NetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
        }
        // Parent: C_BaseEntity
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_nMode (int)
        // NetworkVarNames: m_vBoxSize (Vector)
        // NetworkVarNames: m_bEnabled (bool)
        public static class C_InfoVisibilityBox {
            public const nint m_nMode = 0x5FC; // int32
            public const nint m_vBoxSize = 0x600; // Vector
            public const nint m_bEnabled = 0x60C; // bool
        }
        // Parent: CPlayer_ItemServices
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_bHasDefuser (bool)
        // NetworkVarNames: m_bHasHelmet (bool)
        public static class CCSPlayer_ItemServices {
            public const nint m_bHasDefuser = 0x40; // bool
            public const nint m_bHasHelmet = 0x41; // bool
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
        // Parent: 
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_timestamp (GameTime_t)
        // NetworkVarNames: m_nWorldGroupId (WorldGroupId_t)
        public static class IntervalTimer {
            public const nint m_timestamp = 0x8; // GameTime_t
            public const nint m_nWorldGroupId = 0xC; // WorldGroupId_t
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
        public static class audioparams_t {
            public const nint localSound = 0x8; // Vector[8]
            public const nint soundscapeIndex = 0x68; // int32
            public const nint localBits = 0x6C; // uint8
            public const nint soundscapeEntityListIndex = 0x70; // int32
            public const nint soundEventHash = 0x74; // uint32
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
        public static class C_PathParticleRope {
            public const nint m_bStartActive = 0x600; // bool
            public const nint m_flMaxSimulationTime = 0x604; // float32
            public const nint m_iszEffectName = 0x608; // CUtlSymbolLarge
            public const nint m_PathNodes_Name = 0x610; // CUtlVector<CUtlSymbolLarge>
            public const nint m_flParticleSpacing = 0x628; // float32
            public const nint m_flSlack = 0x62C; // float32
            public const nint m_flRadius = 0x630; // float32
            public const nint m_ColorTint = 0x634; // Color
            public const nint m_nEffectState = 0x638; // int32
            public const nint m_iEffectIndex = 0x640; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_PathNodes_Position = 0x648; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_TangentIn = 0x660; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_TangentOut = 0x678; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_Color = 0x690; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_PinEnabled = 0x6A8; // C_NetworkUtlVectorBase<bool>
            public const nint m_PathNodes_RadiusScale = 0x6C0; // C_NetworkUtlVectorBase<float32>
        }
        // Parent: C_BaseCSGrenadeProjectile
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_nDecoyShotTick (int)
        public static class C_DecoyProjectile {
            public const nint m_nDecoyShotTick = 0x1450; // int32
            public const nint m_nClientLastKnownDecoyShotTick = 0x1454; // int32
            public const nint m_flTimeParticleEffectSpawn = 0x1478; // GameTime_t
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
        public static class C_AttributeContainer {
            public const nint m_Item = 0x50; // C_EconItemView
            public const nint m_iExternalItemProviderRegisteredToken = 0x4C8; // int32
            public const nint m_ullRegisteredAsItemID = 0x4D0; // uint64
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
        public static class C_CSWeaponBase {
            public const nint m_iWeaponGameplayAnimState = 0x1970; // WeaponGameplayAnimState
            public const nint m_flWeaponGameplayAnimStateTimestamp = 0x1974; // GameTime_t
            public const nint m_flInspectCancelCompleteTime = 0x1978; // GameTime_t
            public const nint m_bInspectPending = 0x197C; // bool
            public const nint m_bInspectShouldLoop = 0x197D; // bool
            public const nint m_flCrosshairDistance = 0x19A8; // float32
            public const nint m_iAmmoLastCheck = 0x19AC; // int32
            public const nint m_nLastEmptySoundCmdNum = 0x19B0; // int32
            public const nint m_bFireOnEmpty = 0x19B4; // bool
            public const nint m_OnPlayerPickup = 0x19B8; // CEntityIOOutput
            public const nint m_weaponMode = 0x19E0; // CSWeaponMode
            public const nint m_flTurningInaccuracyDelta = 0x19E4; // float32
            public const nint m_vecTurningInaccuracyEyeDirLast = 0x19E8; // Vector
            public const nint m_flTurningInaccuracy = 0x19F4; // float32
            public const nint m_fAccuracyPenalty = 0x19F8; // float32
            public const nint m_flLastAccuracyUpdateTime = 0x19FC; // GameTime_t
            public const nint m_fAccuracySmoothedForZoom = 0x1A00; // float32
            public const nint m_iRecoilIndex = 0x1A04; // int32
            public const nint m_flRecoilIndex = 0x1A08; // float32
            public const nint m_bBurstMode = 0x1A0C; // bool
            public const nint m_flLastBurstModeChangeTime = 0x1A10; // GameTime_t
            public const nint m_nPostponeFireReadyTicks = 0x1A14; // GameTick_t
            public const nint m_flPostponeFireReadyFrac = 0x1A18; // float32
            public const nint m_bInReload = 0x1A1C; // bool
            public const nint m_flDroppedAtTime = 0x1A20; // GameTime_t
            public const nint m_bIsHauledBack = 0x1A24; // bool
            public const nint m_bSilencerOn = 0x1A25; // bool
            public const nint m_flTimeSilencerSwitchComplete = 0x1A28; // GameTime_t
            public const nint m_iOriginalTeamNumber = 0x1A2C; // int32
            public const nint m_iMostRecentTeamNumber = 0x1A30; // int32
            public const nint m_bDroppedNearBuyZone = 0x1A34; // bool
            public const nint m_flNextAttackRenderTimeOffset = 0x1A38; // float32
            public const nint m_bClearWeaponIdentifyingUGC = 0x1AD8; // bool
            public const nint m_bVisualsDataSet = 0x1AD9; // bool
            public const nint m_bUIWeapon = 0x1ADA; // bool
            public const nint m_nCustomEconReloadEventId = 0x1ADC; // int32
            public const nint m_nextPrevOwnerUseTime = 0x1AE8; // GameTime_t
            public const nint m_hPrevOwner = 0x1AEC; // CHandle<C_CSPlayerPawn>
            public const nint m_nDropTick = 0x1AF0; // GameTick_t
            public const nint m_bWasActiveWeaponWhenDropped = 0x1AF4; // bool
            public const nint m_donated = 0x1B14; // bool
            public const nint m_fLastShotTime = 0x1B18; // GameTime_t
            public const nint m_bWasOwnedByCT = 0x1B1C; // bool
            public const nint m_bWasOwnedByTerrorist = 0x1B1D; // bool
            public const nint m_flNextClientFireBulletTime = 0x1B20; // float32
            public const nint m_flNextClientFireBulletTime_Repredict = 0x1B24; // float32
            public const nint m_IronSightController = 0x1C90; // C_IronSightController
            public const nint m_iIronSightMode = 0x1D40; // int32
            public const nint m_flLastLOSTraceFailureTime = 0x1D58; // GameTime_t
            public const nint m_flWatTickOffset = 0x1DB8; // float32
            public const nint m_flLastShakeTime = 0x1DCC; // GameTime_t
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
        //
        // Metadata:
        // NetworkVarNames: m_flAutoExposureMin (float)
        // NetworkVarNames: m_flAutoExposureMax (float)
        // NetworkVarNames: m_flExposureAdaptationSpeedUp (float)
        // NetworkVarNames: m_flExposureAdaptationSpeedDown (float)
        // NetworkVarNames: m_flTonemapEVSmoothingRange (float)
        public static class C_TonemapController2 {
            public const nint m_flAutoExposureMin = 0x5F8; // float32
            public const nint m_flAutoExposureMax = 0x5FC; // float32
            public const nint m_flExposureAdaptationSpeedUp = 0x600; // float32
            public const nint m_flExposureAdaptationSpeedDown = 0x604; // float32
            public const nint m_flTonemapEVSmoothingRange = 0x608; // float32
        }
        // Parent: 
        // Field count: 4
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
        // Parent: 
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_nItemDefIndex (uint16)
        // NetworkVarNames: m_nCount (uint16)
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
            public const nint m_bAdrenalineActive = 0x650; // bool
            public const nint m_iHealthMin = 0x654; // int32
            public const nint m_iHealthMax = 0x658; // int32
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
        public static class C_PointClientUIHUD {
            public const nint m_bCheckCSSClasses = 0xEE8; // bool
            public const nint m_bIgnoreInput = 0x1060; // bool
            public const nint m_flWidth = 0x1064; // float32
            public const nint m_flHeight = 0x1068; // float32
            public const nint m_flDPI = 0x106C; // float32
            public const nint m_flInteractDistance = 0x1070; // float32
            public const nint m_flDepthOffset = 0x1074; // float32
            public const nint m_unOwnerContext = 0x1078; // uint32
            public const nint m_unHorizontalAlign = 0x107C; // uint32
            public const nint m_unVerticalAlign = 0x1080; // uint32
            public const nint m_unOrientation = 0x1084; // uint32
            public const nint m_bAllowInteractionFromAllSceneWorlds = 0x1088; // bool
            public const nint m_vecCSSClasses = 0x1090; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
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
            public const nint m_hViewPosition = 0x11B0; // CHandle<C_BaseEntity>
            public const nint m_bRestartAfterRestore = 0x11B4; // bool
        }
        // Parent: C_Sprite
        // Field count: 0
        public static class CSpriteOriented {
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
            public const nint m_BuoyancyHelper = 0xEB0; // CBuoyancyHelper
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
        //
        // Metadata:
        // NetworkVarNames: m_messageText (char)
        public static class C_PointClientUIWorldTextPanel {
            public const nint m_messageText = 0x1100; // char[512]
        }
        // Parent: CPlayer_WaterServices
        // Field count: 3
        public static class CCSPlayer_WaterServices {
            public const nint m_flWaterJumpTime = 0x40; // float32
            public const nint m_vecWaterJumpVel = 0x44; // Vector
            public const nint m_flSwimSoundTime = 0x50; // float32
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
        public static class C_CSObserverPawn {
            public const nint m_hDetectParentChange = 0x1668; // CEntityHandle
        }
        // Parent: None
        // Field count: 3
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
        // Parent: C_BaseModelEntity
        // Field count: 9
        //
        // Metadata:
        // NetworkVarNames: m_vecLadderDir (Vector)
        // NetworkVarNames: m_vecPlayerMountPositionTop (VectorWS)
        // NetworkVarNames: m_vecPlayerMountPositionBottom (VectorWS)
        // NetworkVarNames: m_flAutoRideSpeed (float)
        // NetworkVarNames: m_bFakeLadder (bool)
        public static class C_FuncLadder {
            public const nint m_vecLadderDir = 0xEB0; // Vector
            public const nint m_Dismounts = 0xEC0; // CUtlVector<CHandle<C_InfoLadderDismount>>
            public const nint m_vecLocalTop = 0xED8; // Vector
            public const nint m_vecPlayerMountPositionTop = 0xEE4; // VectorWS
            public const nint m_vecPlayerMountPositionBottom = 0xEF0; // VectorWS
            public const nint m_flAutoRideSpeed = 0xEFC; // float32
            public const nint m_bDisabled = 0xF00; // bool
            public const nint m_bFakeLadder = 0xF01; // bool
            public const nint m_bHasSlack = 0xF02; // bool
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
        //
        // Metadata:
        // NetworkVarNames: m_iFOV (uint32)
        // NetworkVarNames: m_iFOVStart (uint32)
        // NetworkVarNames: m_flFOVTime (GameTime_t)
        // NetworkVarNames: m_flFOVRate (float32)
        // NetworkVarNames: m_hZoomOwner (CHandle<CBaseEntity>)
        public static class CCSPlayerBase_CameraServices {
            public const nint m_iFOV = 0x288; // uint32
            public const nint m_iFOVStart = 0x28C; // uint32
            public const nint m_flFOVTime = 0x290; // GameTime_t
            public const nint m_flFOVRate = 0x294; // float32
            public const nint m_hZoomOwner = 0x298; // CHandle<C_BaseEntity>
            public const nint m_flLastShotFOV = 0x29C; // float32
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
        public static class C_CSPlayerPawn {
            public const nint m_pBulletServices = 0x1678; // CCSPlayer_BulletServices*
            public const nint m_pHostageServices = 0x1680; // CCSPlayer_HostageServices*
            public const nint m_pBuyServices = 0x1688; // CCSPlayer_BuyServices*
            public const nint m_pGlowServices = 0x1690; // CCSPlayer_GlowServices*
            public const nint m_pActionTrackingServices = 0x1698; // CCSPlayer_ActionTrackingServices*
            public const nint m_pDamageReactServices = 0x16A0; // CCSPlayer_DamageReactServices*
            public const nint m_flHealthShotBoostExpirationTime = 0x16A8; // GameTime_t
            public const nint m_flLastFiredWeaponTime = 0x16AC; // GameTime_t
            public const nint m_bHasFemaleVoice = 0x16B0; // bool
            public const nint m_flLandingTimeSeconds = 0x16B4; // float32
            public const nint m_flOldFallVelocity = 0x16B8; // float32
            public const nint m_szLastPlaceName = 0x16BC; // char[18]
            public const nint m_bPrevDefuser = 0x16CE; // bool
            public const nint m_bPrevHelmet = 0x16CF; // bool
            public const nint m_nPrevArmorVal = 0x16D0; // int32
            public const nint m_nPrevGrenadeAmmoCount = 0x16D4; // int32
            public const nint m_unPreviousWeaponHash = 0x16D8; // uint32
            public const nint m_unWeaponHash = 0x16DC; // uint32
            public const nint m_bInBuyZone = 0x16E0; // bool
            public const nint m_bPreviouslyInBuyZone = 0x16E1; // bool
            public const nint m_aimPunchAngle = 0x16E4; // QAngle
            public const nint m_aimPunchAngleVel = 0x16F0; // QAngle
            public const nint m_aimPunchTickBase = 0x16FC; // GameTick_t
            public const nint m_aimPunchTickFraction = 0x1700; // float32
            public const nint m_aimPunchCache = 0x1708; // CUtlVector<QAngle>
            public const nint m_bInLanding = 0x1728; // bool
            public const nint m_flLandingStartTime = 0x172C; // float32
            public const nint m_bInHostageRescueZone = 0x1730; // bool
            public const nint m_bInBombZone = 0x1731; // bool
            public const nint m_bIsBuyMenuOpen = 0x1732; // bool
            public const nint m_flTimeOfLastInjury = 0x1734; // GameTime_t
            public const nint m_flNextSprayDecalTime = 0x1738; // GameTime_t
            public const nint m_iRetakesOffering = 0x1890; // int32
            public const nint m_iRetakesOfferingCard = 0x1894; // int32
            public const nint m_bRetakesHasDefuseKit = 0x1898; // bool
            public const nint m_bRetakesMVPLastRound = 0x1899; // bool
            public const nint m_iRetakesMVPBoostItem = 0x189C; // int32
            public const nint m_RetakesMVPBoostExtraUtility = 0x18A0; // loadout_slot_t
            public const nint m_bNeedToReApplyGloves = 0x18A5; // bool
            public const nint m_EconGloves = 0x18A8; // C_EconItemView
            public const nint m_nEconGlovesChanged = 0x1D20; // uint8
            public const nint m_bMustSyncRagdollState = 0x1D21; // bool
            public const nint m_nRagdollDamageBone = 0x1D24; // int32
            public const nint m_vRagdollDamageForce = 0x1D28; // Vector
            public const nint m_vRagdollDamagePosition = 0x1D34; // Vector
            public const nint m_szRagdollDamageWeaponName = 0x1D40; // char[64]
            public const nint m_bRagdollDamageHeadshot = 0x1D80; // bool
            public const nint m_vRagdollServerOrigin = 0x1D84; // Vector
            public const nint m_lastLandTime = 0x2400; // GameTime_t
            public const nint m_bOnGroundLastTick = 0x2404; // bool
            public const nint m_hHudModelArms = 0x2420; // CHandle<C_CS2HudModelArms>
            public const nint m_qDeathEyeAngles = 0x2424; // QAngle
            public const nint m_bSkipOneHeadConstraintUpdate = 0x2430; // bool
            public const nint m_bLeftHanded = 0x2431; // bool
            public const nint m_fSwitchedHandednessTime = 0x2434; // GameTime_t
            public const nint m_flViewmodelOffsetX = 0x2438; // float32
            public const nint m_flViewmodelOffsetY = 0x243C; // float32
            public const nint m_flViewmodelOffsetZ = 0x2440; // float32
            public const nint m_flViewmodelFOV = 0x2444; // float32
            public const nint m_vecPlayerPatchEconIndices = 0x2448; // uint32[5]
            public const nint m_GunGameImmunityColor = 0x2480; // Color
            public const nint m_vecBulletHitModels = 0x24D0; // CUtlVector<C_BulletHitModel*>
            public const nint m_bIsWalking = 0x24E8; // bool
            public const nint m_thirdPersonHeading = 0x24F0; // QAngle
            public const nint m_flSlopeDropOffset = 0x2580; // float32
            public const nint m_flSlopeDropHeight = 0x25F8; // float32
            public const nint m_vHeadConstraintOffset = 0x2670; // Vector
            public const nint m_entitySpottedState = 0x2700; // EntitySpottedState_t
            public const nint m_bIsScoped = 0x2718; // bool
            public const nint m_bResumeZoom = 0x2719; // bool
            public const nint m_bIsDefusing = 0x271A; // bool
            public const nint m_bIsGrabbingHostage = 0x271B; // bool
            public const nint m_iBlockingUseActionInProgress = 0x271C; // CSPlayerBlockingUseAction_t
            public const nint m_flEmitSoundTime = 0x2720; // GameTime_t
            public const nint m_bInNoDefuseArea = 0x2724; // bool
            public const nint m_nWhichBombZone = 0x2728; // int32
            public const nint m_iShotsFired = 0x272C; // int32
            public const nint m_flFlinchStack = 0x2730; // float32
            public const nint m_flVelocityModifier = 0x2734; // float32
            public const nint m_flHitHeading = 0x2738; // float32
            public const nint m_nHitBodyPart = 0x273C; // int32
            public const nint m_bWaitForNoAttack = 0x2740; // bool
            public const nint m_ignoreLadderJumpTime = 0x2744; // float32
            public const nint m_bKilledByHeadshot = 0x2749; // bool
            public const nint m_ArmorValue = 0x274C; // int32
            public const nint m_unCurrentEquipmentValue = 0x2750; // uint16
            public const nint m_unRoundStartEquipmentValue = 0x2752; // uint16
            public const nint m_unFreezetimeEndEquipmentValue = 0x2754; // uint16
            public const nint m_nLastKillerIndex = 0x2758; // CEntityIndex
            public const nint m_bOldIsScoped = 0x275C; // bool
            public const nint m_bHasDeathInfo = 0x275D; // bool
            public const nint m_flDeathInfoTime = 0x2760; // float32
            public const nint m_vecDeathInfoOrigin = 0x2764; // Vector
            public const nint m_grenadeParameterStashTime = 0x2774; // GameTime_t
            public const nint m_bGrenadeParametersStashed = 0x2778; // bool
            public const nint m_angStashedShootAngles = 0x277C; // QAngle
            public const nint m_vecStashedGrenadeThrowPosition = 0x2788; // Vector
            public const nint m_vecStashedVelocity = 0x2794; // Vector
            public const nint m_angShootAngleHistory = 0x27A0; // QAngle[2]
            public const nint m_vecThrowPositionHistory = 0x27B8; // Vector[2]
            public const nint m_vecVelocityHistory = 0x27D0; // Vector[2]
            public const nint m_PredictedDamageTags = 0x27E8; // C_UtlVectorEmbeddedNetworkVar<PredictedDamageTag_t>
            public const nint m_nPrevHighestReceivedDamageTagTick = 0x2850; // GameTick_t
            public const nint m_nHighestAppliedDamageTagTick = 0x2854; // int32
            public const nint m_bShouldAutobuyDMWeapons = 0x3D8C; // bool
            public const nint m_fImmuneToGunGameDamageTime = 0x3D90; // GameTime_t
            public const nint m_bGunGameImmunity = 0x3D94; // bool
            public const nint m_fImmuneToGunGameDamageTimeLast = 0x3D98; // GameTime_t
            public const nint m_fMolotovDamageTime = 0x3D9C; // float32
            public const nint m_vecLastAliveLocalVelocity = 0x3DA4; // Vector
            public const nint m_fRenderingClipPlane = 0x3DB0; // float32[4]
            public const nint m_nLastClipPlaneSetupFrame = 0x3DC0; // int32
            public const nint m_vecLastClipCameraPos = 0x3DC4; // Vector
            public const nint m_vecLastClipCameraForward = 0x3DD0; // Vector
            public const nint m_bClipHitStaticWorld = 0x3DDC; // bool
            public const nint m_bCachedPlaneIsValid = 0x3DDD; // bool
            public const nint m_pClippingWeapon = 0x3DE0; // C_CSWeaponBase*
            public const nint m_nPlayerInfernoBodyFx = 0x3DE8; // ParticleIndex_t
            public const nint m_angEyeAngles = 0x3DF0; // QAngle
            public const nint m_arrOldEyeAnglesTimes = 0x3E80; // GameTime_t[4]
            public const nint m_arrOldEyeAngles = 0x3E90; // QAngle[4]
            public const nint m_angEyeAnglesVelocity = 0x3EC0; // QAngle
            public const nint m_iIDEntIndex = 0x3ECC; // CEntityIndex
            public const nint m_delayTargetIDTimer = 0x3ED0; // CountdownTimer
            public const nint m_iTargetItemEntIdx = 0x3EE8; // CEntityIndex
            public const nint m_iOldIDEntIndex = 0x3EEC; // CEntityIndex
            public const nint m_holdTargetIDTimer = 0x3EF0; // CountdownTimer
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
        public static class C_Hostage {
            public const nint m_entitySpottedState = 0x13F0; // EntitySpottedState_t
            public const nint m_leader = 0x1408; // CHandle<C_BaseEntity>
            public const nint m_reuseTimer = 0x1410; // CountdownTimer
            public const nint m_vel = 0x1428; // Vector
            public const nint m_isRescued = 0x1434; // bool
            public const nint m_jumpedThisFrame = 0x1435; // bool
            public const nint m_nHostageState = 0x1438; // int32
            public const nint m_bHandsHaveBeenCut = 0x143C; // bool
            public const nint m_hHostageGrabber = 0x1440; // CHandle<C_CSPlayerPawn>
            public const nint m_fLastGrabTime = 0x1444; // GameTime_t
            public const nint m_vecGrabbedPos = 0x1448; // Vector
            public const nint m_flRescueStartTime = 0x1454; // GameTime_t
            public const nint m_flGrabSuccessTime = 0x1458; // GameTime_t
            public const nint m_flDropStartTime = 0x145C; // GameTime_t
            public const nint m_flDeadOrRescuedTime = 0x1460; // GameTime_t
            public const nint m_blinkTimer = 0x1468; // CountdownTimer
            public const nint m_lookAt = 0x1480; // Vector
            public const nint m_lookAroundTimer = 0x1490; // CountdownTimer
            public const nint m_isInit = 0x14A8; // bool
            public const nint m_eyeAttachment = 0x14A9; // AttachmentHandle_t
            public const nint m_chestAttachment = 0x14AA; // AttachmentHandle_t
            public const nint m_pPredictionOwner = 0x14B0; // CBasePlayerController*
            public const nint m_fNewestAlphaThinkTime = 0x14B8; // GameTime_t
        }
        // Parent: 
        // Field count: 14
        //
        // Metadata:
        // NetworkVarNames: m_hCtrl (CHandle<CFogController>)
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
        public static class CGameSceneNode {
            public const nint m_nodeToWorld = 0x10; // CTransformWS
            public const nint m_pOwner = 0x30; // CEntityInstance*
            public const nint m_pParent = 0x38; // CGameSceneNode*
            public const nint m_pChild = 0x40; // CGameSceneNode*
            public const nint m_pNextSibling = 0x48; // CGameSceneNode*
            public const nint m_hParent = 0x78; // CGameSceneNodeHandle
            public const nint m_vecOrigin = 0x88; // CNetworkOriginCellCoordQuantizedVector
            public const nint m_angRotation = 0xC0; // QAngle
            public const nint m_flScale = 0xCC; // float32
            public const nint m_vecAbsOrigin = 0xD0; // VectorWS
            public const nint m_angAbsRotation = 0xDC; // QAngle
            public const nint m_flAbsScale = 0xE8; // float32
            public const nint m_vecWrappedLocalOrigin = 0xEC; // Vector
            public const nint m_angWrappedLocalRotation = 0xF8; // QAngle
            public const nint m_flWrappedScale = 0x104; // float32
            public const nint m_nParentAttachmentOrBone = 0x108; // int16
            public const nint m_bDebugAbsOriginChanges = 0x10A; // bool
            public const nint m_bDormant = 0x10B; // bool
            public const nint m_bForceParentToBeNetworked = 0x10C; // bool
            public const nint m_bDirtyHierarchy = 0x0; // bitfield:1
            public const nint m_bDirtyBoneMergeInfo = 0x0; // bitfield:1
            public const nint m_bNetworkedPositionChanged = 0x0; // bitfield:1
            public const nint m_bNetworkedAnglesChanged = 0x0; // bitfield:1
            public const nint m_bNetworkedScaleChanged = 0x0; // bitfield:1
            public const nint m_bWillBeCallingPostDataUpdate = 0x0; // bitfield:1
            public const nint m_bBoneMergeFlex = 0x0; // bitfield:1
            public const nint m_nLatchAbsOrigin = 0x0; // bitfield:2
            public const nint m_bDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
            public const nint m_nHierarchicalDepth = 0x10F; // uint8
            public const nint m_nHierarchyType = 0x110; // uint8
            public const nint m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0x111; // uint8
            public const nint m_name = 0x114; // CUtlStringToken
            public const nint m_hierarchyAttachName = 0x158; // CUtlStringToken
            public const nint m_flZOffset = 0x15C; // float32
            public const nint m_flClientLocalScale = 0x160; // float32
            public const nint m_vRenderOrigin = 0x164; // Vector
        }
        // Parent: CPlayerPawnComponent
        // Field count: 6
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
        // Parent: C_BaseEntity
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_bDisabled (bool)
        // NetworkVarNames: m_iszSoundAreaType (string_t)
        // NetworkVarNames: m_vPos (Vector)
        public static class C_SoundAreaEntityBase {
            public const nint m_bDisabled = 0x5F8; // bool
            public const nint m_bWasEnabled = 0x600; // bool
            public const nint m_iszSoundAreaType = 0x608; // CUtlSymbolLarge
            public const nint m_vPos = 0x610; // Vector
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
        public static class C_PlayerVisibility {
            public const nint m_flVisibilityStrength = 0x5F8; // float32
            public const nint m_flFogDistanceMultiplier = 0x5FC; // float32
            public const nint m_flFogMaxDensityMultiplier = 0x600; // float32
            public const nint m_flFadeTime = 0x604; // float32
            public const nint m_bStartDisabled = 0x608; // bool
            public const nint m_bIsEnabled = 0x609; // bool
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
            public const nint m_nNextPrimaryAttackTick = 0x18E0; // GameTick_t
            public const nint m_flNextPrimaryAttackTickRatio = 0x18E4; // float32
            public const nint m_nNextSecondaryAttackTick = 0x18E8; // GameTick_t
            public const nint m_flNextSecondaryAttackTickRatio = 0x18EC; // float32
            public const nint m_iClip1 = 0x18F0; // int32
            public const nint m_iClip2 = 0x18F4; // int32
            public const nint m_pReserveAmmo = 0x18F8; // int32[2]
        }
        // Parent: C_BaseEntity
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_iCurrentMaxRagdollCount (int8)
        public static class CRagdollManager {
            public const nint m_iCurrentMaxRagdollCount = 0x5F8; // int8
        }
        // Parent: C_BaseCSGrenade
        // Field count: 0
        public static class C_HEGrenade {
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
        public static class C_EnvSky {
            public const nint m_hSkyMaterial = 0xEB0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_hSkyMaterialLightingOnly = 0xEB8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_bStartDisabled = 0xEC0; // bool
            public const nint m_vTintColor = 0xEC1; // Color
            public const nint m_vTintColorLightingOnly = 0xEC5; // Color
            public const nint m_flBrightnessScale = 0xECC; // float32
            public const nint m_nFogType = 0xED0; // int32
            public const nint m_flFogMinStart = 0xED4; // float32
            public const nint m_flFogMinEnd = 0xED8; // float32
            public const nint m_flFogMaxStart = 0xEDC; // float32
            public const nint m_flFogMaxEnd = 0xEE0; // float32
            public const nint m_bEnabled = 0xEE4; // bool
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
        public static class C_EnvWindController {
            public const nint m_EnvWindShared = 0x5F8; // C_EnvWindShared
            public const nint m_fDirectionVariation = 0x6F0; // float32
            public const nint m_fSpeedVariation = 0x6F4; // float32
            public const nint m_fTurbulence = 0x6F8; // float32
            public const nint m_fVolumeHalfExtentXY = 0x6FC; // float32
            public const nint m_fVolumeHalfExtentZ = 0x700; // float32
            public const nint m_nVolumeResolutionXY = 0x704; // int32
            public const nint m_nVolumeResolutionZ = 0x708; // int32
            public const nint m_nClipmapLevels = 0x70C; // int32
            public const nint m_bIsMaster = 0x710; // bool
            public const nint m_bFirstTime = 0x711; // bool
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_nTotalPausedTicks (int)
        // NetworkVarNames: m_nPauseStartTick (int)
        // NetworkVarNames: m_bGamePaused (bool)
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
            public const nint m_flZFar = 0x5F8; // float32
            public const nint m_flZNear = 0x5FC; // float32
            public const nint m_bLoop = 0x600; // bool
            public const nint m_bVerticalFOV = 0x601; // bool
            public const nint m_bConstantSpeed = 0x602; // bool
            public const nint m_flDuration = 0x604; // float32
            public const nint m_flPathLength = 0x648; // float32
            public const nint m_flPathDuration = 0x64C; // float32
            public const nint m_bDofEnabled = 0x664; // bool
            public const nint m_flDofNearBlurry = 0x668; // float32
            public const nint m_flDofNearCrisp = 0x66C; // float32
            public const nint m_flDofFarCrisp = 0x670; // float32
            public const nint m_flDofFarBlurry = 0x674; // float32
            public const nint m_flDofTiltToGround = 0x678; // float32
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
        public static class C_PointWorldText {
            public const nint m_bForceRecreateNextUpdate = 0xEB8; // bool
            public const nint m_messageText = 0xED0; // char[512]
            public const nint m_FontName = 0x10D0; // char[64]
            public const nint m_BackgroundMaterialName = 0x1110; // char[64]
            public const nint m_bEnabled = 0x1150; // bool
            public const nint m_bFullbright = 0x1151; // bool
            public const nint m_flWorldUnitsPerPx = 0x1154; // float32
            public const nint m_flFontSize = 0x1158; // float32
            public const nint m_flDepthOffset = 0x115C; // float32
            public const nint m_bDrawBackground = 0x1160; // bool
            public const nint m_flBackgroundBorderWidth = 0x1164; // float32
            public const nint m_flBackgroundBorderHeight = 0x1168; // float32
            public const nint m_flBackgroundWorldToUV = 0x116C; // float32
            public const nint m_Color = 0x1170; // Color
            public const nint m_nJustifyHorizontal = 0x1174; // PointWorldTextJustifyHorizontal_t
            public const nint m_nJustifyVertical = 0x1178; // PointWorldTextJustifyVertical_t
            public const nint m_nReorientMode = 0x117C; // PointWorldTextReorientMode_t
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
        public static class C_RopeKeyframe {
            public const nint m_LinksTouchingSomething = 0xEB8; // CBitVec<10>
            public const nint m_nLinksTouchingSomething = 0xEBC; // int32
            public const nint m_bApplyWind = 0xEC0; // bool
            public const nint m_fPrevLockedPoints = 0xEC4; // int32
            public const nint m_iForcePointMoveCounter = 0xEC8; // int32
            public const nint m_bPrevEndPointPos = 0xECC; // bool[2]
            public const nint m_vPrevEndPointPos = 0xED0; // Vector[2]
            public const nint m_flCurScroll = 0xEE8; // float32
            public const nint m_flScrollSpeed = 0xEEC; // float32
            public const nint m_RopeFlags = 0xEF0; // uint16
            public const nint m_iRopeMaterialModelIndex = 0xEF8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_nSegments = 0x1170; // uint8
            public const nint m_hStartPoint = 0x1174; // CHandle<C_BaseEntity>
            public const nint m_hEndPoint = 0x1178; // CHandle<C_BaseEntity>
            public const nint m_iStartAttachment = 0x117C; // AttachmentHandle_t
            public const nint m_iEndAttachment = 0x117D; // AttachmentHandle_t
            public const nint m_Subdiv = 0x117E; // uint8
            public const nint m_RopeLength = 0x1180; // int16
            public const nint m_Slack = 0x1182; // int16
            public const nint m_TextureScale = 0x1184; // float32
            public const nint m_fLockedPoints = 0x1188; // uint8
            public const nint m_nChangeCount = 0x1189; // uint8
            public const nint m_Width = 0x118C; // float32
            public const nint m_PhysicsDelegate = 0x1190; // C_RopeKeyframe::CPhysicsDelegate
            public const nint m_hMaterial = 0x11A0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_TextureHeight = 0x11A8; // int32
            public const nint m_vecImpulse = 0x11AC; // Vector
            public const nint m_vecPreviousImpulse = 0x11B8; // Vector
            public const nint m_flCurrentGustTimer = 0x11C4; // float32
            public const nint m_flCurrentGustLifetime = 0x11C8; // float32
            public const nint m_flTimeToNextGust = 0x11CC; // float32
            public const nint m_vWindDir = 0x11D0; // Vector
            public const nint m_vColorMod = 0x11DC; // Vector
            public const nint m_vCachedEndPointAttachmentPos = 0x11E8; // Vector[2]
            public const nint m_vCachedEndPointAttachmentAngle = 0x1200; // QAngle[2]
            public const nint m_bConstrainBetweenEndpoints = 0x1218; // bool
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
            public const nint m_bDisabled = 0x5F8; // bool
            public const nint m_flRange = 0x5FC; // float32
            public const nint m_nImportance = 0x600; // int32
            public const nint m_nLightChoice = 0x604; // int32
            public const nint m_hLight = 0x608; // CHandle<C_BaseEntity>
        }
        // Parent: C_BaseToggle
        // Field count: 0
        //
        // Metadata:
        // MNetworkIncludeByName
        // MNetworkIncludeByName
        // MNetworkOverride
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
        //
        // Metadata:
        // NetworkVarNames: m_vMins (Vector)
        // NetworkVarNames: m_vMaxs (Vector)
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
        public static class C_BasePropDoor {
            public const nint m_eDoorState = 0x1430; // DoorState_t
            public const nint m_modelChanged = 0x1434; // bool
            public const nint m_bLocked = 0x1435; // bool
            public const nint m_bNoNPCs = 0x1436; // bool
            public const nint m_closedPosition = 0x1438; // Vector
            public const nint m_closedAngles = 0x1444; // QAngle
            public const nint m_hMaster = 0x1450; // CHandle<C_BasePropDoor>
            public const nint m_vWhereToSetLightingOrigin = 0x1454; // Vector
        }
        // Parent: 
        // Field count: 8
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
        // Parent: C_WeaponBaseItem
        // Field count: 0
        public static class C_Item_Healthshot {
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_pEntity (CEntityIdentity*)
        // NetworkVarNames: m_CScriptComponent (CScriptComponent::Storage_t)
        public static class CEntityInstance {
            public const nint m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
            public const nint m_pEntity = 0x10; // CEntityIdentity*
            public const nint m_CScriptComponent = 0x30; // CScriptComponent*
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
        public static class C_BaseModelEntity {
            public const nint m_CRenderComponent = 0xAE0; // CRenderComponent*
            public const nint m_CHitboxComponent = 0xAE8; // CHitboxComponent
            public const nint m_pDestructiblePartsSystemComponent = 0xB00; // CDestructiblePartsComponent*
            public const nint m_LastHitGroup = 0xB08; // HitGroup_t
            public const nint m_sLastDamageSourceName = 0xB10; // CGlobalSymbol
            public const nint m_vLastDamagePosition = 0xB18; // VectorWS
            public const nint m_bInitModelEffects = 0xB40; // bool
            public const nint m_bIsStaticProp = 0xB41; // bool
            public const nint m_nLastAddDecal = 0xB44; // int32
            public const nint m_nDecalsAdded = 0xB48; // int32
            public const nint m_iOldHealth = 0xB4C; // int32
            public const nint m_nRenderMode = 0xB50; // RenderMode_t
            public const nint m_nRenderFX = 0xB51; // RenderFx_t
            public const nint m_bAllowFadeInView = 0xB52; // bool
            public const nint m_clrRender = 0xB70; // Color
            public const nint m_vecRenderAttributes = 0xB78; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
            public const nint m_bRenderToCubemaps = 0xBF8; // bool
            public const nint m_bNoInterpolate = 0xBF9; // bool
            public const nint m_Collision = 0xC00; // CCollisionProperty
            public const nint m_Glow = 0xCB0; // CGlowProperty
            public const nint m_flGlowBackfaceMult = 0xD08; // float32
            public const nint m_fadeMinDist = 0xD0C; // float32
            public const nint m_fadeMaxDist = 0xD10; // float32
            public const nint m_flFadeScale = 0xD14; // float32
            public const nint m_flShadowStrength = 0xD18; // float32
            public const nint m_nObjectCulling = 0xD1C; // uint8
            public const nint m_nAddDecal = 0xD20; // int32
            public const nint m_vDecalPosition = 0xD24; // Vector
            public const nint m_vDecalForwardAxis = 0xD30; // Vector
            public const nint m_nDecalMode = 0xD3C; // DecalMode_t
            public const nint m_nRequiredDecalMode = 0xD3D; // DecalMode_t
            public const nint m_ConfigEntitiesToPropagateMaterialDecalsTo = 0xD40; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
            public const nint m_vecViewOffset = 0xD80; // CNetworkViewOffsetVector
            public const nint m_pClientAlphaProperty = 0xE60; // CClientAlphaProperty*
            public const nint m_ClientOverrideTint = 0xE68; // Color
            public const nint m_bUseClientOverrideTint = 0xE6C; // bool
            public const nint m_bvDisabledHitGroups = 0xEA8; // uint32[1]
        }
        // Parent: CPlayerPawnComponent
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_totalHitsOnServer (int32)
        public static class CCSPlayer_BulletServices {
            public const nint m_totalHitsOnServer = 0x40; // int32
        }
        // Parent: C_SoundOpvarSetPointEntity
        // Field count: 0
        public static class C_SoundOpvarSetAutoRoomEntity {
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
        public static class C_EnvCombinedLightProbeVolume {
            public const nint m_Entity_Color = 0x1670; // Color
            public const nint m_Entity_flBrightness = 0x1674; // float32
            public const nint m_Entity_hCubemapTexture = 0x1678; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_bCustomCubemapTexture = 0x1680; // bool
            public const nint m_Entity_hLightProbeTexture_AmbientCube = 0x1688; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SDF = 0x1690; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SH2_DC = 0x1698; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SH2_R = 0x16A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SH2_G = 0x16A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SH2_B = 0x16B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightIndicesTexture = 0x16B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightScalarsTexture = 0x16C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightShadowsTexture = 0x16C8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_vBoxMins = 0x16D0; // Vector
            public const nint m_Entity_vBoxMaxs = 0x16DC; // Vector
            public const nint m_Entity_bMoveable = 0x16E8; // bool
            public const nint m_Entity_nHandshake = 0x16EC; // int32
            public const nint m_Entity_nEnvCubeMapArrayIndex = 0x16F0; // int32
            public const nint m_Entity_nPriority = 0x16F4; // int32
            public const nint m_Entity_bStartDisabled = 0x16F8; // bool
            public const nint m_Entity_flEdgeFadeDist = 0x16FC; // float32
            public const nint m_Entity_vEdgeFadeDists = 0x1700; // Vector
            public const nint m_Entity_nLightProbeSizeX = 0x170C; // int32
            public const nint m_Entity_nLightProbeSizeY = 0x1710; // int32
            public const nint m_Entity_nLightProbeSizeZ = 0x1714; // int32
            public const nint m_Entity_nLightProbeAtlasX = 0x1718; // int32
            public const nint m_Entity_nLightProbeAtlasY = 0x171C; // int32
            public const nint m_Entity_nLightProbeAtlasZ = 0x1720; // int32
            public const nint m_Entity_bEnabled = 0x1739; // bool
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
        public static class C_BaseEntity {
            public const nint m_CBodyComponent = 0x38; // CBodyComponent*
            public const nint m_NetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
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
            public const nint m_bAnimTimeChanged = 0x5DD; // bool
            public const nint m_bSimulationTimeChanged = 0x5DE; // bool
            public const nint m_sUniqueHammerID = 0x5E8; // CUtlString
            public const nint m_nBloodType = 0x5F0; // BloodType
        }
        // Parent: 
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_Handle (ModelConfigHandle_t)
        // NetworkVarNames: m_Name (string_t)
        // NetworkVarNames: m_AssociatedEntities (CHandle<C_BaseModelEntity>)
        // NetworkVarNames: m_AssociatedEntityNames (string_t)
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
        public static class C_BasePlayerPawn {
            public const nint m_pWeaponServices = 0x13F0; // CPlayer_WeaponServices*
            public const nint m_pItemServices = 0x13F8; // CPlayer_ItemServices*
            public const nint m_pAutoaimServices = 0x1400; // CPlayer_AutoaimServices*
            public const nint m_pObserverServices = 0x1408; // CPlayer_ObserverServices*
            public const nint m_pWaterServices = 0x1410; // CPlayer_WaterServices*
            public const nint m_pUseServices = 0x1418; // CPlayer_UseServices*
            public const nint m_pFlashlightServices = 0x1420; // CPlayer_FlashlightServices*
            public const nint m_pCameraServices = 0x1428; // CPlayer_CameraServices*
            public const nint m_pMovementServices = 0x1430; // CPlayer_MovementServices*
            public const nint m_ServerViewAngleChanges = 0x1440; // C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
            public const nint v_angle = 0x14A8; // QAngle
            public const nint v_anglePrevious = 0x14B4; // QAngle
            public const nint m_iHideHUD = 0x14C0; // uint32
            public const nint m_skybox3d = 0x14C8; // sky3dparams_t
            public const nint m_flDeathTime = 0x1558; // GameTime_t
            public const nint m_vecPredictionError = 0x155C; // Vector
            public const nint m_flPredictionErrorTime = 0x1568; // GameTime_t
            public const nint m_vecLastCameraSetupLocalOrigin = 0x1588; // Vector
            public const nint m_flLastCameraSetupTime = 0x1594; // GameTime_t
            public const nint m_flFOVSensitivityAdjust = 0x1598; // float32
            public const nint m_flMouseSensitivity = 0x159C; // float32
            public const nint m_vOldOrigin = 0x15A0; // Vector
            public const nint m_flOldSimulationTime = 0x15AC; // float32
            public const nint m_nLastExecutedCommandNumber = 0x15B0; // int32
            public const nint m_nLastExecutedCommandTick = 0x15B4; // int32
            public const nint m_hController = 0x15B8; // CHandle<CBasePlayerController>
            public const nint m_hDefaultController = 0x15BC; // CHandle<CBasePlayerController>
            public const nint m_bIsSwappingToPredictableController = 0x15C0; // bool
        }
        // Parent: C_DynamicProp
        // Field count: 7
        //
        // Metadata:
        // NetworkVarNames: m_jumpedThisFrame (bool)
        // NetworkVarNames: m_leader (CHandle<CCSPlayerPawn>)
        // NetworkVarNames: m_AttributeManager (CAttributeContainer)
        public static class C_Chicken {
            public const nint m_hHolidayHatAddon = 0x1428; // CHandle<CBaseAnimGraph>
            public const nint m_jumpedThisFrame = 0x142C; // bool
            public const nint m_leader = 0x1430; // CHandle<C_CSPlayerPawn>
            public const nint m_AttributeManager = 0x1438; // C_AttributeContainer
            public const nint m_bAttributesInitialized = 0x1910; // bool
            public const nint m_hWaterWakeParticles = 0x1914; // ParticleIndex_t
            public const nint m_bIsPreviewModel = 0x1918; // bool
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
        // Parent: None
        // Field count: 0
        public static class CTakeDamageInfoAPI {
        }
        // Parent: CEnvSoundscape
        // Field count: 1
        public static class CEnvSoundscapeProxy {
            public const nint m_MainSoundscapeName = 0x698; // CUtlSymbolLarge
        }
        // Parent: C_BaseEntity
        // Field count: 15
        public static class C_SoundEventEntity {
            public const nint m_bStartOnSpawn = 0x5F8; // bool
            public const nint m_bToLocalPlayer = 0x5F9; // bool
            public const nint m_bStopOnNew = 0x5FA; // bool
            public const nint m_bSaveRestore = 0x5FB; // bool
            public const nint m_bSavedIsPlaying = 0x5FC; // bool
            public const nint m_flSavedElapsedTime = 0x600; // float32
            public const nint m_iszSourceEntityName = 0x608; // CUtlSymbolLarge
            public const nint m_iszAttachmentName = 0x610; // CUtlSymbolLarge
            public const nint m_onGUIDChanged = 0x618; // CEntityOutputTemplate<uint64>
            public const nint m_onSoundFinished = 0x640; // CEntityIOOutput
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
        //
        // Metadata:
        // NetworkVarNames: m_bBombPlantedHere (bool)
        public static class CBombTarget {
            public const nint m_bBombPlantedHere = 0xFF0; // bool
        }
        // Parent: C_CSWeaponBase
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bFirstAttack (bool)
        public static class C_Knife {
            public const nint m_bFirstAttack = 0x1F80; // bool
        }
        // Parent: C_CSGO_TeamPreviewCamera
        // Field count: 0
        public static class C_CSGO_TerroristWingmanIntroCamera {
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
        public static class CSkeletonInstance {
            public const nint m_modelState = 0x190; // CModelState
            public const nint m_bIsAnimationEnabled = 0x490; // bool
            public const nint m_bUseParentRenderBounds = 0x491; // bool
            public const nint m_bDisableSolidCollisionsForHierarchy = 0x492; // bool
            public const nint m_bDirtyMotionType = 0x0; // bitfield:1
            public const nint m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
            public const nint m_materialGroup = 0x494; // CUtlStringToken
            public const nint m_nHitboxSet = 0x498; // uint8
        }
        // Parent: 
        // Field count: 0
        public static class CEntityComponent {
        }
        // Parent: C_Item
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_OwningPlayer (CHandle<CCSPlayerPawn>)
        // NetworkVarNames: m_KillingPlayer (CHandle<CCSPlayerPawn>)
        public static class C_ItemDogtags {
            public const nint m_OwningPlayer = 0x19E0; // CHandle<C_CSPlayerPawn>
            public const nint m_KillingPlayer = 0x19E4; // CHandle<C_CSPlayerPawn>
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
        //
        // Metadata:
        // NetworkVarNames: m_bEnabled (bool)
        // NetworkVarNames: m_DialogXMLName (string_t)
        // NetworkVarNames: m_PanelClassName (string_t)
        // NetworkVarNames: m_PanelID (string_t)
        public static class C_BaseClientUIEntity {
            public const nint m_bEnabled = 0xEB8; // bool
            public const nint m_DialogXMLName = 0xEC0; // CUtlSymbolLarge
            public const nint m_PanelClassName = 0xEC8; // CUtlSymbolLarge
            public const nint m_PanelID = 0xED0; // CUtlSymbolLarge
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
        //
        // Metadata:
        // NetworkVarNames: m_bIsIncGrenade (bool)
        public static class C_MolotovProjectile {
            public const nint m_bIsIncGrenade = 0x1450; // bool
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
        public static class CInfoOffscreenPanoramaTexture {
            public const nint m_bDisabled = 0x5F8; // bool
            public const nint m_nResolutionX = 0x5FC; // int32
            public const nint m_nResolutionY = 0x600; // int32
            public const nint m_szLayoutFileName = 0x608; // CUtlSymbolLarge
            public const nint m_RenderAttrName = 0x610; // CUtlSymbolLarge
            public const nint m_TargetEntities = 0x618; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
            public const nint m_nTargetChangeCount = 0x630; // int32
            public const nint m_vecCSSClasses = 0x638; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            public const nint m_bCheckCSSClasses = 0x7B0; // bool
        }
        // Parent: None
        // Field count: 83
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertySuppressBaseClassField
        // MPropertySuppressBaseClassField
        public static class CCSWeaponBaseVData {
            public const nint m_WeaponType = 0x440; // CSWeaponType
            public const nint m_WeaponCategory = 0x444; // CSWeaponCategory
            public const nint m_szModel_AG2 = 0x448; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
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
            public const nint m_flMaxSpeed = 0x748; // CFiringModeFloat
            public const nint m_flSpread = 0x750; // CFiringModeFloat
            public const nint m_flInaccuracyCrouch = 0x758; // CFiringModeFloat
            public const nint m_flInaccuracyStand = 0x760; // CFiringModeFloat
            public const nint m_flInaccuracyJump = 0x768; // CFiringModeFloat
            public const nint m_flInaccuracyLand = 0x770; // CFiringModeFloat
            public const nint m_flInaccuracyLadder = 0x778; // CFiringModeFloat
            public const nint m_flInaccuracyFire = 0x780; // CFiringModeFloat
            public const nint m_flInaccuracyMove = 0x788; // CFiringModeFloat
            public const nint m_flRecoilAngle = 0x790; // CFiringModeFloat
            public const nint m_flRecoilAngleVariance = 0x798; // CFiringModeFloat
            public const nint m_flRecoilMagnitude = 0x7A0; // CFiringModeFloat
            public const nint m_flRecoilMagnitudeVariance = 0x7A8; // CFiringModeFloat
            public const nint m_nTracerFrequency = 0x7B0; // CFiringModeInt
            public const nint m_flInaccuracyJumpInitial = 0x7B8; // float32
            public const nint m_flInaccuracyJumpApex = 0x7BC; // float32
            public const nint m_flInaccuracyReload = 0x7C0; // float32
            public const nint m_flDeployDuration = 0x7C4; // float32
            public const nint m_flDisallowAttackAfterReloadStartDuration = 0x7C8; // float32
            public const nint m_nBurstShotCount = 0x7CC; // int32
            public const nint m_bAllowBurstHolster = 0x7D0; // bool
            public const nint m_nRecoilSeed = 0x7D4; // int32
            public const nint m_nSpreadSeed = 0x7D8; // int32
            public const nint m_flAttackMovespeedFactor = 0x7DC; // float32
            public const nint m_flInaccuracyPitchShift = 0x7E0; // float32
            public const nint m_flInaccuracyAltSoundThreshold = 0x7E4; // float32
            public const nint m_szUseRadioSubtitle = 0x7E8; // CUtlString
            public const nint m_bUnzoomsAfterShot = 0x7F0; // bool
            public const nint m_bHideViewModelWhenZoomed = 0x7F1; // bool
            public const nint m_nZoomLevels = 0x7F4; // int32
            public const nint m_nZoomFOV1 = 0x7F8; // int32
            public const nint m_nZoomFOV2 = 0x7FC; // int32
            public const nint m_flZoomTime0 = 0x800; // float32
            public const nint m_flZoomTime1 = 0x804; // float32
            public const nint m_flZoomTime2 = 0x808; // float32
            public const nint m_flIronSightPullUpSpeed = 0x80C; // float32
            public const nint m_flIronSightPutDownSpeed = 0x810; // float32
            public const nint m_flIronSightFOV = 0x814; // float32
            public const nint m_flIronSightPivotForward = 0x818; // float32
            public const nint m_flIronSightLooseness = 0x81C; // float32
            public const nint m_nDamage = 0x820; // int32
            public const nint m_flHeadshotMultiplier = 0x824; // float32
            public const nint m_flArmorRatio = 0x828; // float32
            public const nint m_flPenetration = 0x82C; // float32
            public const nint m_flRange = 0x830; // float32
            public const nint m_flRangeModifier = 0x834; // float32
            public const nint m_flFlinchVelocityModifierLarge = 0x838; // float32
            public const nint m_flFlinchVelocityModifierSmall = 0x83C; // float32
            public const nint m_flRecoveryTimeCrouch = 0x840; // float32
            public const nint m_flRecoveryTimeStand = 0x844; // float32
            public const nint m_flRecoveryTimeCrouchFinal = 0x848; // float32
            public const nint m_flRecoveryTimeStandFinal = 0x84C; // float32
            public const nint m_nRecoveryTransitionStartBullet = 0x850; // int32
            public const nint m_nRecoveryTransitionEndBullet = 0x854; // int32
            public const nint m_flThrowVelocity = 0x858; // float32
            public const nint m_vSmokeColor = 0x85C; // Vector
            public const nint m_szAnimClass = 0x868; // CGlobalSymbol
        }
        // Parent: 
        // Field count: 6
        //
        // Metadata:
        // NetworkVarNames: m_iReapplyProvisionParity (int)
        // NetworkVarNames: m_hOuter (EHANDLE)
        // NetworkVarNames: m_ProviderType (attributeprovidertypes_t)
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
        public static class C_BaseCSGrenade {
            public const nint m_bClientPredictDelete = 0x1F80; // bool
            public const nint m_bRedraw = 0x1F81; // bool
            public const nint m_bIsHeldByPlayer = 0x1F82; // bool
            public const nint m_bPinPulled = 0x1F83; // bool
            public const nint m_bJumpThrow = 0x1F84; // bool
            public const nint m_bThrowAnimating = 0x1F85; // bool
            public const nint m_fThrowTime = 0x1F88; // GameTime_t
            public const nint m_flThrowStrength = 0x1F90; // float32
            public const nint m_fDropTime = 0x2008; // GameTime_t
            public const nint m_fPinPullTime = 0x200C; // GameTime_t
            public const nint m_bJustPulledPin = 0x2010; // bool
            public const nint m_nNextHoldTick = 0x2014; // GameTick_t
            public const nint m_flNextHoldFrac = 0x2018; // float32
            public const nint m_hSwitchToWeaponAfterThrow = 0x201C; // CHandle<C_CSWeaponBase>
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterAttributeInt {
            public const nint m_sAttributeName = 0x650; // CUtlSymbolLarge
        }
        // Parent: CLogicalEntity
        // Field count: 11
        public static class CPointTemplate {
            public const nint m_iszWorldName = 0x5F8; // CUtlSymbolLarge
            public const nint m_iszSource2EntityLumpName = 0x600; // CUtlSymbolLarge
            public const nint m_iszEntityFilterName = 0x608; // CUtlSymbolLarge
            public const nint m_flTimeoutInterval = 0x610; // float32
            public const nint m_bAsynchronouslySpawnEntities = 0x614; // bool
            public const nint m_clientOnlyEntityBehavior = 0x618; // PointTemplateClientOnlyEntityBehavior_t
            public const nint m_ownerSpawnGroupType = 0x61C; // PointTemplateOwnerSpawnGroupType_t
            public const nint m_createdSpawnGroupHandles = 0x620; // CUtlVector<uint32>
            public const nint m_SpawnedEntityHandles = 0x638; // CUtlVector<CEntityHandle>
            public const nint m_ScriptSpawnCallback = 0x650; // HSCRIPT
            public const nint m_ScriptCallbackScope = 0x658; // HSCRIPT
        }
        // Parent: CPlayerPawnComponent
        // Field count: 0
        public static class CPlayer_FlashlightServices {
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
        public static class CCSPlayerController {
            public const nint m_pInGameMoneyServices = 0x7F8; // CCSPlayerController_InGameMoneyServices*
            public const nint m_pInventoryServices = 0x800; // CCSPlayerController_InventoryServices*
            public const nint m_pActionTrackingServices = 0x808; // CCSPlayerController_ActionTrackingServices*
            public const nint m_pDamageServices = 0x810; // CCSPlayerController_DamageServices*
            public const nint m_iPing = 0x818; // uint32
            public const nint m_bHasCommunicationAbuseMute = 0x81C; // bool
            public const nint m_uiCommunicationMuteFlags = 0x820; // uint32
            public const nint m_szCrosshairCodes = 0x828; // CUtlSymbolLarge
            public const nint m_iPendingTeamNum = 0x830; // uint8
            public const nint m_flForceTeamTime = 0x834; // GameTime_t
            public const nint m_iCompTeammateColor = 0x838; // int32
            public const nint m_bEverPlayedOnTeam = 0x83C; // bool
            public const nint m_flPreviousForceJoinTeamTime = 0x840; // GameTime_t
            public const nint m_szClan = 0x848; // CUtlSymbolLarge
            public const nint m_sSanitizedPlayerName = 0x850; // CUtlString
            public const nint m_iCoachingTeam = 0x858; // int32
            public const nint m_nPlayerDominated = 0x860; // uint64
            public const nint m_nPlayerDominatingMe = 0x868; // uint64
            public const nint m_iCompetitiveRanking = 0x870; // int32
            public const nint m_iCompetitiveWins = 0x874; // int32
            public const nint m_iCompetitiveRankType = 0x878; // int8
            public const nint m_iCompetitiveRankingPredicted_Win = 0x87C; // int32
            public const nint m_iCompetitiveRankingPredicted_Loss = 0x880; // int32
            public const nint m_iCompetitiveRankingPredicted_Tie = 0x884; // int32
            public const nint m_nEndMatchNextMapVote = 0x888; // int32
            public const nint m_unActiveQuestId = 0x88C; // uint16
            public const nint m_rtActiveMissionPeriod = 0x890; // uint32
            public const nint m_nQuestProgressReason = 0x894; // QuestProgress::Reason
            public const nint m_unPlayerTvControlFlags = 0x898; // uint32
            public const nint m_iDraftIndex = 0x8C8; // int32
            public const nint m_msQueuedModeDisconnectionTimestamp = 0x8CC; // uint32
            public const nint m_uiAbandonRecordedReason = 0x8D0; // uint32
            public const nint m_eNetworkDisconnectionReason = 0x8D4; // uint32
            public const nint m_bCannotBeKicked = 0x8D8; // bool
            public const nint m_bEverFullyConnected = 0x8D9; // bool
            public const nint m_bAbandonAllowsSurrender = 0x8DA; // bool
            public const nint m_bAbandonOffersInstantSurrender = 0x8DB; // bool
            public const nint m_bDisconnection1MinWarningPrinted = 0x8DC; // bool
            public const nint m_bScoreReported = 0x8DD; // bool
            public const nint m_nDisconnectionTick = 0x8E0; // int32
            public const nint m_bControllingBot = 0x8F0; // bool
            public const nint m_bHasControlledBotThisRound = 0x8F1; // bool
            public const nint m_bHasBeenControlledByPlayerThisRound = 0x8F2; // bool
            public const nint m_nBotsControlledThisRound = 0x8F4; // int32
            public const nint m_bCanControlObservedBot = 0x8F8; // bool
            public const nint m_hPlayerPawn = 0x8FC; // CHandle<C_CSPlayerPawn>
            public const nint m_hObserverPawn = 0x900; // CHandle<C_CSObserverPawn>
            public const nint m_bPawnIsAlive = 0x904; // bool
            public const nint m_iPawnHealth = 0x908; // uint32
            public const nint m_iPawnArmor = 0x90C; // int32
            public const nint m_bPawnHasDefuser = 0x910; // bool
            public const nint m_bPawnHasHelmet = 0x911; // bool
            public const nint m_nPawnCharacterDefIndex = 0x912; // uint16
            public const nint m_iPawnLifetimeStart = 0x914; // int32
            public const nint m_iPawnLifetimeEnd = 0x918; // int32
            public const nint m_iPawnBotDifficulty = 0x91C; // int32
            public const nint m_hOriginalControllerOfCurrentPawn = 0x920; // CHandle<CCSPlayerController>
            public const nint m_iScore = 0x924; // int32
            public const nint m_recentKillQueue = 0x928; // uint8[8]
            public const nint m_nFirstKill = 0x930; // uint8
            public const nint m_nKillCount = 0x931; // uint8
            public const nint m_bMvpNoMusic = 0x932; // bool
            public const nint m_eMvpReason = 0x934; // int32
            public const nint m_iMusicKitID = 0x938; // int32
            public const nint m_iMusicKitMVPs = 0x93C; // int32
            public const nint m_iMVPs = 0x940; // int32
            public const nint m_bIsPlayerNameDirty = 0x944; // bool
            public const nint m_bFireBulletsSeedSynchronized = 0x945; // bool
        }
        // Parent: C_CSGO_TeamIntroCharacterPosition
        // Field count: 0
        public static class C_CSGO_TeamIntroCounterTerroristPosition {
        }
        // Parent: C_BaseFlex
        // Field count: 4
        public static class C_CSGO_PreviewModel {
            public const nint m_defaultAnim = 0x1368; // CUtlString
            public const nint m_nDefaultAnimLoopMode = 0x1370; // AnimLoopMode_t
            public const nint m_flInitialModelScale = 0x1374; // float32
            public const nint m_sInitialWeaponState = 0x1378; // CUtlString
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
        //
        // Metadata:
        // NetworkVarNames: m_vMins (Vector)
        // NetworkVarNames: m_vMaxs (Vector)
        public static class C_SoundEventAABBEntity {
            public const nint m_vMins = 0x6C0; // Vector
            public const nint m_vMaxs = 0x6CC; // Vector
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
        public static class CCSPlayer_MovementServices {
            public const nint m_vecLadderNormal = 0x278; // Vector
            public const nint m_nLadderSurfacePropIndex = 0x284; // int32
            public const nint m_flDuckAmount = 0x288; // float32
            public const nint m_flDuckSpeed = 0x28C; // float32
            public const nint m_bDuckOverride = 0x290; // bool
            public const nint m_bDesiresDuck = 0x291; // bool
            public const nint m_flDuckOffset = 0x294; // float32
            public const nint m_nDuckTimeMsecs = 0x298; // uint32
            public const nint m_nDuckJumpTimeMsecs = 0x29C; // uint32
            public const nint m_nJumpTimeMsecs = 0x2A0; // uint32
            public const nint m_flLastDuckTime = 0x2A4; // float32
            public const nint m_vecLastPositionAtFullCrouchSpeed = 0x2B0; // Vector2D
            public const nint m_duckUntilOnGround = 0x2B8; // bool
            public const nint m_bHasWalkMovedSinceLastJump = 0x2B9; // bool
            public const nint m_bInStuckTest = 0x2BA; // bool
            public const nint m_nTraceCount = 0x4C8; // int32
            public const nint m_StuckLast = 0x4CC; // int32
            public const nint m_bSpeedCropped = 0x4D0; // bool
            public const nint m_nOldWaterLevel = 0x4D4; // int32
            public const nint m_flWaterEntryTime = 0x4D8; // float32
            public const nint m_vecForward = 0x4DC; // Vector
            public const nint m_vecLeft = 0x4E8; // Vector
            public const nint m_vecUp = 0x4F4; // Vector
            public const nint m_nGameCodeHasMovedPlayerAfterCommand = 0x500; // int32
            public const nint m_bOldJumpPressed = 0x504; // bool
            public const nint m_flJumpPressedTime = 0x508; // float32
            public const nint m_fStashGrenadeParameterWhen = 0x50C; // GameTime_t
            public const nint m_nButtonDownMaskPrev = 0x510; // uint64
            public const nint m_flOffsetTickCompleteTime = 0x518; // float32
            public const nint m_flOffsetTickStashedSpeed = 0x51C; // float32
            public const nint m_flStamina = 0x520; // float32
            public const nint m_flHeightAtJumpStart = 0x524; // float32
            public const nint m_flMaxJumpHeightThisJump = 0x528; // float32
            public const nint m_flMaxJumpHeightLastJump = 0x52C; // float32
            public const nint m_flStaminaAtJumpStart = 0x530; // float32
            public const nint m_flAccumulatedJumpError = 0x534; // float32
            public const nint m_flTicksSinceLastSurfingDetected = 0x538; // float32
            public const nint m_bWasSurfing = 0x53C; // bool
            public const nint m_vecInputRotated = 0x5CC; // Vector
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
        //
        // Metadata:
        // NetworkVarNames: m_bSequenceInProgress (bool)
        // NetworkVarNames: m_bRedraw (bool)
        public static class C_WeaponBaseItem {
            public const nint m_bSequenceInProgress = 0x1F80; // bool
            public const nint m_bRedraw = 0x1F81; // bool
        }
        // Parent: C_BaseModelEntity
        // Field count: 0
        public static class CWaterSplasher {
        }
        // Parent: C_BaseModelEntity
        // Field count: 0
        public static class C_FuncBrush {
        }
        // Parent: 
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_Transforms (CTransform)
        // NetworkVarNames: m_hOwner (EHANDLE)
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
        //
        // Metadata:
        // NetworkVarNames: m_bMagazineRemoved (bool)
        public static class C_WeaponCZ75a {
            public const nint m_bMagazineRemoved = 0x1FB0; // bool
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
        public static class C_DynamicLight {
            public const nint m_Flags = 0xEB0; // uint8
            public const nint m_LightStyle = 0xEB1; // uint8
            public const nint m_Radius = 0xEB4; // float32
            public const nint m_Exponent = 0xEB8; // int32
            public const nint m_InnerAngle = 0xEBC; // float32
            public const nint m_OuterAngle = 0xEC0; // float32
            public const nint m_SpotRadius = 0xEC4; // float32
        }
        // Parent: 
        // Field count: 3
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
        // Parent: C_SoundEventEntity
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_flRadius (float)
        public static class C_SoundEventSphereEntity {
            public const nint m_flRadius = 0x6C0; // float32
        }
        // Parent: CPlayerControllerComponent
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_nSendUpdate (int)
        // NetworkVarNames: m_DamageList (CDamageRecord)
        // MNetworkReplayCompatField
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
            public const nint m_nfxFireDamageEffect = 0xEF0; // ParticleIndex_t
            public const nint m_hInfernoPointsSnapshot = 0xEF8; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_hInfernoFillerPointsSnapshot = 0xF00; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_hInfernoOutlinePointsSnapshot = 0xF08; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_hInfernoClimbingOutlinePointsSnapshot = 0xF10; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_hInfernoDecalsSnapshot = 0xF18; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_firePositions = 0xF20; // Vector[64]
            public const nint m_fireParentPositions = 0x1220; // Vector[64]
            public const nint m_bFireIsBurning = 0x1520; // bool[64]
            public const nint m_BurnNormal = 0x1560; // Vector[64]
            public const nint m_fireCount = 0x1860; // int32
            public const nint m_nInfernoType = 0x1864; // int32
            public const nint m_nFireLifetime = 0x1868; // float32
            public const nint m_bInPostEffectTime = 0x186C; // bool
            public const nint m_lastFireCount = 0x1870; // int32
            public const nint m_nFireEffectTickBegin = 0x1874; // int32
            public const nint m_drawableCount = 0x8480; // int32
            public const nint m_blosCheck = 0x8484; // bool
            public const nint m_nlosperiod = 0x8488; // int32
            public const nint m_maxFireHalfWidth = 0x848C; // float32
            public const nint m_maxFireHeight = 0x8490; // float32
            public const nint m_minBounds = 0x8494; // Vector
            public const nint m_maxBounds = 0x84A0; // Vector
            public const nint m_flLastGrassBurnThink = 0x84AC; // float32
        }
        // Parent: CBaseFilter
        // Field count: 0
        public static class CFilterLOS {
        }
        // Parent: C_BaseEntity
        // Field count: 7
        public static class CPointOrient {
            public const nint m_iszSpawnTargetName = 0x5F8; // CUtlSymbolLarge
            public const nint m_hTarget = 0x600; // CHandle<C_BaseEntity>
            public const nint m_bActive = 0x604; // bool
            public const nint m_nGoalDirection = 0x608; // PointOrientGoalDirectionType_t
            public const nint m_nConstraint = 0x60C; // PointOrientConstraint_t
            public const nint m_flMaxTurnRate = 0x610; // float32
            public const nint m_flLastGameTime = 0x614; // GameTime_t
        }
        // Parent: C_BaseEntity
        // Field count: 1
        public static class C_GlobalLight {
            public const nint m_WindClothForceHandle = 0xAC0; // uint16
        }
        // Parent: C_BaseEntity
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
        public static class C_EnvWindClientside {
            public const nint m_EnvWindShared = 0x5F8; // C_EnvWindShared
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
        // Parent: 
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_hOwner (CHandle<CBaseModelEntity>)
        // NetworkVarNames: m_nLastHitDamageLevel (int)
        public static class CDestructiblePartsComponent {
            public const nint __m_pChainEntity = 0x0; // CNetworkVarChainer
            public const nint m_vecDamageTakenByHitGroup = 0x48; // CUtlVector<uint16>
            public const nint m_hOwner = 0x60; // CHandle<C_BaseModelEntity>
            public const nint m_nLastHitDamageLevel = 0x64; // int32
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponP90 {
        }
        // Parent: C_BaseEntity
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_EnvWindShared (CEnvWindShared)
        public static class C_EnvWind {
            public const nint m_EnvWindShared = 0x5F8; // C_EnvWindShared
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
        //
        // Metadata:
        // NetworkVarNames: m_perRoundStats (CSPerRoundStats_t)
        // NetworkVarNames: m_matchStats (CSMatchStats_t)
        // NetworkVarNames: m_iNumRoundKills (int)
        // NetworkVarNames: m_iNumRoundKillsHeadshots (int)
        // NetworkVarNames: m_flTotalRoundDamageDealt (float)
        public static class CCSPlayerController_ActionTrackingServices {
            public const nint m_perRoundStats = 0x40; // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
            public const nint m_matchStats = 0xA8; // CSMatchStats_t
            public const nint m_iNumRoundKills = 0x128; // int32
            public const nint m_iNumRoundKillsHeadshots = 0x12C; // int32
            public const nint m_flTotalRoundDamageDealt = 0x130; // float32
        }
        // Parent: CBodyComponentSkeletonInstance
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_animationController (CBaseAnimGraphController)
        public static class CBodyComponentBaseAnimGraph {
            public const nint m_animationController = 0x5B0; // CBaseAnimGraphController
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
        //
        // Metadata:
        // NetworkVarNames: m_flFluidDensity (float)
        public static class C_TriggerBuoyancy {
            public const nint m_BuoyancyHelper = 0xFF0; // CBuoyancyHelper
            public const nint m_flFluidDensity = 0x1108; // float32
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
        public static class CPlayer_MovementServices_Humanoid {
            public const nint m_flStepSoundTime = 0x238; // float32
            public const nint m_flFallVelocity = 0x23C; // float32
            public const nint m_bInCrouch = 0x240; // bool
            public const nint m_nCrouchState = 0x244; // uint32
            public const nint m_flCrouchTransitionStartTime = 0x248; // GameTime_t
            public const nint m_bDucked = 0x24C; // bool
            public const nint m_bDucking = 0x24D; // bool
            public const nint m_bInDuckJump = 0x24E; // bool
            public const nint m_groundNormal = 0x250; // Vector
            public const nint m_flSurfaceFriction = 0x25C; // float32
            public const nint m_surfaceProps = 0x260; // CUtlStringToken
            public const nint m_nStepside = 0x270; // int32
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
            public const nint m_flTouchDelta = 0x1300; // GameTime_t
            public const nint m_fDeathTime = 0x1304; // GameTime_t
            public const nint m_vecDamagePosition = 0x1308; // Vector
            public const nint m_vecDamageDirection = 0x1314; // Vector
            public const nint m_nDamageType = 0x1320; // DamageTypes_t
        }
        // Parent: C_BaseToggle
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bIsUsable (bool)
        public static class C_BaseDoor {
            public const nint m_bIsUsable = 0xEB0; // bool
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
        public static class CSMatchStats_t {
            public const nint m_iEnemy5Ks = 0x68; // int32
            public const nint m_iEnemy4Ks = 0x6C; // int32
            public const nint m_iEnemy3Ks = 0x70; // int32
            public const nint m_iEnemyKnifeKills = 0x74; // int32
            public const nint m_iEnemyTaserKills = 0x78; // int32
        }
        // Parent: 
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_ID (CUtlStringToken)
        // NetworkVarNames: m_Values (Vector4D)
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
        // Parent: 
        // Field count: 8
        //
        // Metadata:
        // NetworkVarNames: m_hModel (HModelStrong)
        // NetworkVarNames: m_bClientClothCreationSuppressed (bool)
        // NetworkVarNames: m_MeshGroupMask (MeshGroupMask_t)
        // NetworkVarNames: m_nBodyGroupChoices (int32)
        // NetworkVarNames: m_nIdealMotionType (int8)
        public static class CModelState {
            public const nint m_hModel = 0xD0; // CStrongHandle<InfoForResourceTypeCModel>
            public const nint m_ModelName = 0xD8; // CUtlSymbolLarge
            public const nint m_bClientClothCreationSuppressed = 0x1A9; // bool
            public const nint m_MeshGroupMask = 0x250; // uint64
            public const nint m_nBodyGroupChoices = 0x2A0; // C_NetworkUtlVectorBase<int32>
            public const nint m_nIdealMotionType = 0x2EA; // int8
            public const nint m_nForceLOD = 0x2EB; // int8
            public const nint m_nClothUpdateFlags = 0x2EC; // int8
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
        //
        // Metadata:
        // NetworkVarNames: m_zoomLevel (int)
        // NetworkVarNames: m_iBurstShotsRemaining (int)
        // NetworkVarNames: m_bNeedsBoltAction (bool)
        // NetworkVarNames: m_nRevolverCylinderIdx (int32)
        public static class C_CSWeaponBaseGun {
            public const nint m_zoomLevel = 0x1F80; // int32
            public const nint m_iBurstShotsRemaining = 0x1F84; // int32
            public const nint m_iSilencerBodygroup = 0x1F88; // int32
            public const nint m_silencedModelIndex = 0x1F98; // int32
            public const nint m_inPrecache = 0x1F9C; // bool
            public const nint m_bNeedsBoltAction = 0x1F9D; // bool
            public const nint m_nRevolverCylinderIdx = 0x1FA0; // int32
        }
        // Parent: C_GameRulesProxy
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_pGameRules (C_CSGameRules*)
        public static class C_CSGameRulesProxy {
            public const nint m_pGameRules = 0x5F8; // C_CSGameRules*
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
        //
        // Metadata:
        // MNetworkExcludeByName
        // NetworkVarNames: m_ShardDesc (shard_model_desc_t)
        public static class C_ShatterGlassShardPhysics {
            public const nint m_ShardDesc = 0x1318; // shard_model_desc_t
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterMassGreater {
            public const nint m_fFilterMass = 0x650; // float32
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
        public static class C_EntityDissolve {
            public const nint m_flStartTime = 0xEB8; // GameTime_t
            public const nint m_flFadeInStart = 0xEBC; // float32
            public const nint m_flFadeInLength = 0xEC0; // float32
            public const nint m_flFadeOutModelStart = 0xEC4; // float32
            public const nint m_flFadeOutModelLength = 0xEC8; // float32
            public const nint m_flFadeOutStart = 0xECC; // float32
            public const nint m_flFadeOutLength = 0xED0; // float32
            public const nint m_flNextSparkTime = 0xED4; // GameTime_t
            public const nint m_nDissolveType = 0xED8; // EntityDisolveType_t
            public const nint m_vDissolverOrigin = 0xEDC; // Vector
            public const nint m_nMagnitude = 0xEE8; // uint32
            public const nint m_bCoreExplode = 0xEEC; // bool
            public const nint m_bLinkedToServerEnt = 0xEED; // bool
        }
        // Parent: C_SoundOpvarSetAABBEntity
        // Field count: 0
        public static class C_SoundOpvarSetOBBEntity {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_WeaponSequence (CUtlString)
        public static class CCSGameModeRules_ArmsRace {
            public const nint m_WeaponSequence = 0x30; // C_NetworkUtlVectorBase<CUtlString>
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
        public static class C_FuncMonitor {
            public const nint m_targetCamera = 0xEB0; // CUtlString
            public const nint m_nResolutionEnum = 0xEB8; // int32
            public const nint m_bRenderShadows = 0xEBC; // bool
            public const nint m_bUseUniqueColorTarget = 0xEBD; // bool
            public const nint m_brushModelName = 0xEC0; // CUtlString
            public const nint m_hTargetCamera = 0xEC8; // CHandle<C_BaseEntity>
            public const nint m_bEnabled = 0xECC; // bool
            public const nint m_bDraw3DSkybox = 0xECD; // bool
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
        //
        // Metadata:
        // NetworkVarNames: m_skeletonInstance (CSkeletonInstance)
        public static class CBodyComponentSkeletonInstance {
            public const nint m_skeletonInstance = 0x80; // CSkeletonInstance
        }
        // Parent: CBaseAnimGraph
        // Field count: 0
        public static class C_CS2WeaponModuleBase {
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
        public static class C_CSGO_TeamPreviewCharacterPosition {
            public const nint m_nVariant = 0x5F8; // int32
            public const nint m_nRandom = 0x5FC; // int32
            public const nint m_nOrdinal = 0x600; // int32
            public const nint m_sWeaponName = 0x608; // CUtlString
            public const nint m_xuid = 0x610; // uint64
            public const nint m_agentItem = 0x618; // C_EconItemView
            public const nint m_glovesItem = 0xA90; // C_EconItemView
            public const nint m_weaponItem = 0xF08; // C_EconItemView
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
        public static class C_SmokeGrenadeProjectile {
            public const nint m_nSmokeEffectTickBegin = 0x1468; // int32
            public const nint m_bDidSmokeEffect = 0x146C; // bool
            public const nint m_nRandomSeed = 0x1470; // int32
            public const nint m_vSmokeColor = 0x1474; // Vector
            public const nint m_vSmokeDetonationPos = 0x1480; // Vector
            public const nint m_VoxelFrameData = 0x1490; // C_NetworkUtlVectorBase<uint8>
            public const nint m_nVoxelFrameDataSize = 0x14A8; // int32
            public const nint m_nVoxelUpdate = 0x14AC; // int32
            public const nint m_bSmokeVolumeDataReceived = 0x14B0; // bool
            public const nint m_bSmokeEffectSpawned = 0x14B1; // bool
        }
        // Parent: CEntityComponent
        // Field count: 1
        public static class CScriptComponent {
            public const nint m_scriptClassName = 0x30; // CUtlSymbolLarge
        }
        // Parent: CPlayerPawnComponent
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_vecSellbackPurchaseEntries (SellbackPurchaseEntry_t)
        public static class CCSPlayer_BuyServices {
            public const nint m_vecSellbackPurchaseEntries = 0x40; // C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
        }
        // Parent: C_BaseEntity
        // Field count: 0
        public static class C_PortraitWorldCallbackHandler {
        }
        // Parent: C_BreakableProp
        // Field count: 23
        //
        // Metadata:
        // NetworkVarNames: m_bUseHitboxesForRenderBox (bool)
        // NetworkVarNames: m_bUseAnimGraph (bool)
        public static class C_DynamicProp {
            public const nint m_bUseHitboxesForRenderBox = 0x1300; // bool
            public const nint m_bUseAnimGraph = 0x1301; // bool
            public const nint m_pOutputAnimBegun = 0x1308; // CEntityIOOutput
            public const nint m_pOutputAnimOver = 0x1330; // CEntityIOOutput
            public const nint m_pOutputAnimLoopCycleOver = 0x1358; // CEntityIOOutput
            public const nint m_OnAnimReachedStart = 0x1380; // CEntityIOOutput
            public const nint m_OnAnimReachedEnd = 0x13A8; // CEntityIOOutput
            public const nint m_iszIdleAnim = 0x13D0; // CUtlSymbolLarge
            public const nint m_nIdleAnimLoopMode = 0x13D8; // AnimLoopMode_t
            public const nint m_bRandomizeCycle = 0x13DC; // bool
            public const nint m_bStartDisabled = 0x13DD; // bool
            public const nint m_bFiredStartEndOutput = 0x13DE; // bool
            public const nint m_bForceNpcExclude = 0x13DF; // bool
            public const nint m_bCreateNonSolid = 0x13E0; // bool
            public const nint m_bIsOverrideProp = 0x13E1; // bool
            public const nint m_iInitialGlowState = 0x13E4; // int32
            public const nint m_nGlowRange = 0x13E8; // int32
            public const nint m_nGlowRangeMin = 0x13EC; // int32
            public const nint m_glowColor = 0x13F0; // Color
            public const nint m_nGlowTeam = 0x13F4; // int32
            public const nint m_iCachedFrameCount = 0x13F8; // int32
            public const nint m_vecCachedRenderMins = 0x13FC; // Vector
            public const nint m_vecCachedRenderMaxs = 0x1408; // Vector
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
        public static class C_CSTeam {
            public const nint m_szTeamMatchStat = 0x6B0; // char[512]
            public const nint m_numMapVictories = 0x8B0; // int32
            public const nint m_bSurrendered = 0x8B4; // bool
            public const nint m_scoreFirstHalf = 0x8B8; // int32
            public const nint m_scoreSecondHalf = 0x8BC; // int32
            public const nint m_scoreOvertime = 0x8C0; // int32
            public const nint m_szClanTeamname = 0x8C4; // char[129]
            public const nint m_iClanID = 0x948; // uint32
            public const nint m_szTeamFlagImage = 0x94C; // char[8]
            public const nint m_szTeamLogoImage = 0x954; // char[8]
        }
        // Parent: C_CS2HudModelBase
        // Field count: 0
        public static class C_CS2HudModelWeapon {
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
        public static class C_TextureBasedAnimatable {
            public const nint m_bLoop = 0xEB0; // bool
            public const nint m_flFPS = 0xEB4; // float32
            public const nint m_hPositionKeys = 0xEB8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hRotationKeys = 0xEC0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_vAnimationBoundsMin = 0xEC8; // Vector
            public const nint m_vAnimationBoundsMax = 0xED4; // Vector
            public const nint m_flStartTime = 0xEE0; // float32
            public const nint m_flStartFrame = 0xEE4; // float32
        }
        // Parent: C_LightDirectionalEntity
        // Field count: 0
        public static class C_LightEnvironmentEntity {
        }
        // Parent: None
        // Field count: 0
        public static class CLogicRelayAPI {
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
        public static class C_TriggerPhysics {
            public const nint m_gravityScale = 0xFF0; // float32
            public const nint m_linearLimit = 0xFF4; // float32
            public const nint m_linearDamping = 0xFF8; // float32
            public const nint m_angularLimit = 0xFFC; // float32
            public const nint m_angularDamping = 0x1000; // float32
            public const nint m_linearForce = 0x1004; // float32
            public const nint m_flFrequency = 0x1008; // float32
            public const nint m_flDampingRatio = 0x100C; // float32
            public const nint m_vecLinearForcePointAt = 0x1010; // Vector
            public const nint m_bCollapseToForcePoint = 0x101C; // bool
            public const nint m_vecLinearForcePointAtWorld = 0x1020; // Vector
            public const nint m_vecLinearForceDirection = 0x102C; // Vector
            public const nint m_bConvertToDebrisWhenPossible = 0x1038; // bool
        }
        // Parent: C_BasePropDoor
        // Field count: 0
        public static class C_PropDoorRotating {
        }
        // Parent: C_BaseEntity
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_Handle (CHandle<CBaseEntity>)
        // NetworkVarNames: m_bSendHandle (bool)
        public static class C_HandleTest {
            public const nint m_Handle = 0x5F8; // CHandle<C_BaseEntity>
            public const nint m_bSendHandle = 0x5FC; // bool
        }
        // Parent: C_BaseEntity
        // Field count: 8
        //
        // Metadata:
        // NetworkVarNames: m_worldName (string_t)
        // NetworkVarNames: m_layerName (string_t)
        // NetworkVarNames: m_bWorldLayerVisible (bool)
        // NetworkVarNames: m_bEntitiesSpawned (bool)
        public static class CInfoWorldLayer {
            public const nint m_pOutputOnEntitiesSpawned = 0x5F8; // CEntityIOOutput
            public const nint m_worldName = 0x620; // CUtlSymbolLarge
            public const nint m_layerName = 0x628; // CUtlSymbolLarge
            public const nint m_bWorldLayerVisible = 0x630; // bool
            public const nint m_bEntitiesSpawned = 0x631; // bool
            public const nint m_bCreateAsChildSpawnGroup = 0x632; // bool
            public const nint m_hLayerSpawnGroup = 0x634; // uint32
            public const nint m_bWorldLayerActuallyVisible = 0x638; // bool
        }
        // Parent: CBodyComponentSkeletonInstance
        // Field count: 0
        public static class CBodyComponentBaseModelEntity {
        }
        // Parent: CBaseAnimGraph
        // Field count: 1
        public static class C_Multimeter {
            public const nint m_hTargetC4 = 0x1160; // CHandle<C_PlantedC4>
        }
        // Parent: C_BaseToggle
        // Field count: 11
        //
        // Metadata:
        // MNetworkIncludeByName
        // NetworkVarNames: m_bDisabled (bool)
        public static class C_BaseTrigger {
            public const nint m_OnStartTouch = 0xEB0; // CEntityIOOutput
            public const nint m_OnStartTouchAll = 0xED8; // CEntityIOOutput
            public const nint m_OnEndTouch = 0xF00; // CEntityIOOutput
            public const nint m_OnEndTouchAll = 0xF28; // CEntityIOOutput
            public const nint m_OnTouching = 0xF50; // CEntityIOOutput
            public const nint m_OnTouchingEachEntity = 0xF78; // CEntityIOOutput
            public const nint m_OnNotTouching = 0xFA0; // CEntityIOOutput
            public const nint m_hTouchingEntities = 0xFC8; // CUtlVector<CHandle<C_BaseEntity>>
            public const nint m_iFilterName = 0xFE0; // CUtlSymbolLarge
            public const nint m_hFilter = 0xFE8; // CHandle<CBaseFilter>
            public const nint m_bDisabled = 0xFEC; // bool
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class FilterDamageType {
            public const nint m_iDamageType = 0x650; // int32
        }
        // Parent: 
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_Attributes (CEconItemAttribute)
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
            public const nint m_flRadius = 0x650; // float32
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
            public const nint m_nExplosionType = 0x6E; // uint8
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
        public static class C_ParticleSystem {
            public const nint m_szSnapshotFileName = 0xEB0; // char[512]
            public const nint m_bActive = 0x10B0; // bool
            public const nint m_bFrozen = 0x10B1; // bool
            public const nint m_flFreezeTransitionDuration = 0x10B4; // float32
            public const nint m_nStopType = 0x10B8; // int32
            public const nint m_bAnimateDuringGameplayPause = 0x10BC; // bool
            public const nint m_iEffectIndex = 0x10C0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_flStartTime = 0x10C8; // GameTime_t
            public const nint m_flPreSimTime = 0x10CC; // float32
            public const nint m_vServerControlPoints = 0x10D0; // Vector[4]
            public const nint m_iServerControlPointAssignments = 0x1100; // uint8[4]
            public const nint m_hControlPointEnts = 0x1104; // CHandle<C_BaseEntity>[64]
            public const nint m_bNoSave = 0x1204; // bool
            public const nint m_bNoFreeze = 0x1205; // bool
            public const nint m_bNoRamp = 0x1206; // bool
            public const nint m_bStartActive = 0x1207; // bool
            public const nint m_iszEffectName = 0x1208; // CUtlSymbolLarge
            public const nint m_iszControlPointNames = 0x1210; // CUtlSymbolLarge[64]
            public const nint m_nDataCP = 0x1410; // int32
            public const nint m_vecDataCPValue = 0x1414; // Vector
            public const nint m_nTintCP = 0x1420; // int32
            public const nint m_clrTint = 0x1424; // Color
            public const nint m_bOldActive = 0x1448; // bool
            public const nint m_bOldFrozen = 0x1449; // bool
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
        // Parent: CBaseAnimGraph
        // Field count: 19
        //
        // Metadata:
        // NetworkVarNames: m_flexWeight (float32)
        // NetworkVarNames: m_blinktoggle (bool)
        public static class C_BaseFlex {
            public const nint m_flexWeight = 0x1168; // C_NetworkUtlVectorBase<float32>
            public const nint m_vLookTargetPosition = 0x1180; // VectorWS
            public const nint m_blinktoggle = 0x1210; // bool
            public const nint m_nLastFlexUpdateFrameCount = 0x1270; // int32
            public const nint m_CachedViewTarget = 0x1274; // Vector
            public const nint m_nNextSceneEventId = 0x1280; // SceneEventId_t
            public const nint m_iBlink = 0x1284; // int32
            public const nint m_blinktime = 0x1288; // float32
            public const nint m_prevblinktoggle = 0x128C; // bool
            public const nint m_iJawOpen = 0x1290; // int32
            public const nint m_flJawOpenAmount = 0x1294; // float32
            public const nint m_flBlinkAmount = 0x1298; // float32
            public const nint m_iMouthAttachment = 0x129C; // AttachmentHandle_t
            public const nint m_iEyeAttachment = 0x129D; // AttachmentHandle_t
            public const nint m_bResetFlexWeightsOnModelChange = 0x129E; // bool
            public const nint m_nEyeOcclusionRendererBone = 0x12B8; // int32
            public const nint m_mEyeOcclusionRendererCameraToBoneTransform = 0x12BC; // matrix3x4_t
            public const nint m_vEyeOcclusionRendererHalfExtent = 0x12EC; // Vector
            public const nint m_PhonemeClasses = 0x1308; // C_BaseFlex::Emphasized_Phoneme[3]
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
        public static class CLightComponent {
            public const nint __m_pChainEntity = 0x30; // CNetworkVarChainer
            public const nint m_Color = 0x6D; // Color
            public const nint m_SecondaryColor = 0x71; // Color
            public const nint m_flBrightness = 0x78; // float32
            public const nint m_flBrightnessScale = 0x7C; // float32
            public const nint m_flBrightnessMult = 0x80; // float32
            public const nint m_flRange = 0x84; // float32
            public const nint m_flFalloff = 0x88; // float32
            public const nint m_flAttenuation0 = 0x8C; // float32
            public const nint m_flAttenuation1 = 0x90; // float32
            public const nint m_flAttenuation2 = 0x94; // float32
            public const nint m_flTheta = 0x98; // float32
            public const nint m_flPhi = 0x9C; // float32
            public const nint m_hLightCookie = 0xA0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_nCascades = 0xA8; // int32
            public const nint m_nCastShadows = 0xAC; // int32
            public const nint m_nShadowWidth = 0xB0; // int32
            public const nint m_nShadowHeight = 0xB4; // int32
            public const nint m_bRenderDiffuse = 0xB8; // bool
            public const nint m_nRenderSpecular = 0xBC; // int32
            public const nint m_bRenderTransmissive = 0xC0; // bool
            public const nint m_flOrthoLightWidth = 0xC4; // float32
            public const nint m_flOrthoLightHeight = 0xC8; // float32
            public const nint m_nStyle = 0xCC; // int32
            public const nint m_Pattern = 0xD0; // CUtlString
            public const nint m_nCascadeRenderStaticObjects = 0xD8; // int32
            public const nint m_flShadowCascadeCrossFade = 0xDC; // float32
            public const nint m_flShadowCascadeDistanceFade = 0xE0; // float32
            public const nint m_flShadowCascadeDistance0 = 0xE4; // float32
            public const nint m_flShadowCascadeDistance1 = 0xE8; // float32
            public const nint m_flShadowCascadeDistance2 = 0xEC; // float32
            public const nint m_flShadowCascadeDistance3 = 0xF0; // float32
            public const nint m_nShadowCascadeResolution0 = 0xF4; // int32
            public const nint m_nShadowCascadeResolution1 = 0xF8; // int32
            public const nint m_nShadowCascadeResolution2 = 0xFC; // int32
            public const nint m_nShadowCascadeResolution3 = 0x100; // int32
            public const nint m_bUsesBakedShadowing = 0x104; // bool
            public const nint m_nShadowPriority = 0x108; // int32
            public const nint m_nBakedShadowIndex = 0x10C; // int32
            public const nint m_nLightPathUniqueId = 0x110; // int32
            public const nint m_nLightMapUniqueId = 0x114; // int32
            public const nint m_bRenderToCubemaps = 0x118; // bool
            public const nint m_bAllowSSTGeneration = 0x119; // bool
            public const nint m_nDirectLight = 0x11C; // int32
            public const nint m_nIndirectLight = 0x120; // int32
            public const nint m_flFadeMinDist = 0x124; // float32
            public const nint m_flFadeMaxDist = 0x128; // float32
            public const nint m_flShadowFadeMinDist = 0x12C; // float32
            public const nint m_flShadowFadeMaxDist = 0x130; // float32
            public const nint m_bEnabled = 0x134; // bool
            public const nint m_bFlicker = 0x135; // bool
            public const nint m_bPrecomputedFieldsValid = 0x136; // bool
            public const nint m_vPrecomputedBoundsMins = 0x138; // Vector
            public const nint m_vPrecomputedBoundsMaxs = 0x144; // Vector
            public const nint m_vPrecomputedOBBOrigin = 0x150; // Vector
            public const nint m_vPrecomputedOBBAngles = 0x15C; // QAngle
            public const nint m_vPrecomputedOBBExtent = 0x168; // Vector
            public const nint m_flPrecomputedMaxRange = 0x174; // float32
            public const nint m_nFogLightingMode = 0x178; // int32
            public const nint m_flFogContributionStength = 0x17C; // float32
            public const nint m_flNearClipPlane = 0x180; // float32
            public const nint m_SkyColor = 0x184; // Color
            public const nint m_flSkyIntensity = 0x188; // float32
            public const nint m_SkyAmbientBounce = 0x18C; // Color
            public const nint m_bUseSecondaryColor = 0x190; // bool
            public const nint m_bMixedShadows = 0x191; // bool
            public const nint m_flLightStyleStartTime = 0x194; // GameTime_t
            public const nint m_flCapsuleLength = 0x198; // float32
            public const nint m_flMinRoughness = 0x19C; // float32
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
        //
        // Metadata:
        // NetworkVarNames: m_bIsRescuing (bool)
        // NetworkVarNames: m_weaponPurchasesThisMatch (WeaponPurchaseTracker_t)
        // NetworkVarNames: m_weaponPurchasesThisRound (WeaponPurchaseTracker_t)
        public static class CCSPlayer_ActionTrackingServices {
            public const nint m_hLastWeaponBeforeC4AutoSwitch = 0x40; // CHandle<C_BasePlayerWeapon>
            public const nint m_bIsRescuing = 0x44; // bool
            public const nint m_weaponPurchasesThisMatch = 0x48; // WeaponPurchaseTracker_t
            public const nint m_weaponPurchasesThisRound = 0xB8; // WeaponPurchaseTracker_t
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
        public static class C_EnvCubemap {
            public const nint m_Entity_hCubemapTexture = 0x678; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_bCustomCubemapTexture = 0x680; // bool
            public const nint m_Entity_flInfluenceRadius = 0x684; // float32
            public const nint m_Entity_vBoxProjectMins = 0x688; // Vector
            public const nint m_Entity_vBoxProjectMaxs = 0x694; // Vector
            public const nint m_Entity_bMoveable = 0x6A0; // bool
            public const nint m_Entity_nHandshake = 0x6A4; // int32
            public const nint m_Entity_nEnvCubeMapArrayIndex = 0x6A8; // int32
            public const nint m_Entity_nPriority = 0x6AC; // int32
            public const nint m_Entity_flEdgeFadeDist = 0x6B0; // float32
            public const nint m_Entity_vEdgeFadeDists = 0x6B4; // Vector
            public const nint m_Entity_flDiffuseScale = 0x6C0; // float32
            public const nint m_Entity_bStartDisabled = 0x6C4; // bool
            public const nint m_Entity_bDefaultEnvMap = 0x6C5; // bool
            public const nint m_Entity_bDefaultSpecEnvMap = 0x6C6; // bool
            public const nint m_Entity_bIndoorCubeMap = 0x6C7; // bool
            public const nint m_Entity_bCopyDiffuseFromDefaultCubemap = 0x6C8; // bool
            public const nint m_Entity_bEnabled = 0x6D8; // bool
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
        // Parent: C_BaseFlex
        // Field count: 6
        //
        // Metadata:
        // MNetworkExcludeByUserGroup
        // NetworkVarNames: m_hMyWearables (CHandle<C_EconWearable>)
        public static class C_BaseCombatCharacter {
            public const nint m_hMyWearables = 0x1368; // C_NetworkUtlVectorBase<CHandle<C_EconWearable>>
            public const nint m_leftFootAttachment = 0x1380; // AttachmentHandle_t
            public const nint m_rightFootAttachment = 0x1381; // AttachmentHandle_t
            public const nint m_nWaterWakeMode = 0x1384; // C_BaseCombatCharacter::WaterWakeMode_t
            public const nint m_flWaterWorldZ = 0x1388; // float32
            public const nint m_flWaterNextTraceTime = 0x138C; // float32
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
        //
        // Metadata:
        // NetworkVarNames: m_hActivator (EHANDLE)
        public static class C_PointClientUIDialog {
            public const nint m_hActivator = 0xEE0; // CHandle<C_BaseEntity>
            public const nint m_bStartEnabled = 0xEE4; // bool
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
        //
        // Metadata:
        // NetworkVarNames: m_source (string_t)
        // NetworkVarNames: m_destination (string_t)
        public static class C_FootstepControl {
            public const nint m_source = 0xFF0; // CUtlSymbolLarge
            public const nint m_destination = 0xFF8; // CUtlSymbolLarge
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
        public static class CCitadelSoundOpvarSetOBB {
            public const nint m_iszStackName = 0x610; // CUtlSymbolLarge
            public const nint m_iszOperatorName = 0x618; // CUtlSymbolLarge
            public const nint m_iszOpvarName = 0x620; // CUtlSymbolLarge
            public const nint m_vDistanceInnerMins = 0x628; // Vector
            public const nint m_vDistanceInnerMaxs = 0x634; // Vector
            public const nint m_vDistanceOuterMins = 0x640; // Vector
            public const nint m_vDistanceOuterMaxs = 0x64C; // Vector
            public const nint m_nAABBDirection = 0x658; // int32
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
            public const nint m_SubGraph = 0xC0; // CPulse_OutflowConnection
            public const nint m_WhenTrue = 0x108; // CPulse_OutflowConnection
            public const nint m_WhenFalse = 0x150; // CPulse_OutflowConnection
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
        //
        // Metadata:
        // NetworkVarNames: m_flInnerAngle (float)
        // NetworkVarNames: m_flOuterAngle (float)
        // NetworkVarNames: m_bShowLight (bool)
        public static class C_OmniLight {
            public const nint m_flInnerAngle = 0x1200; // float32
            public const nint m_flOuterAngle = 0x1204; // float32
            public const nint m_bShowLight = 0x1208; // bool
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
        public static class C_SceneEntity {
            public const nint m_bIsPlayingBack = 0x600; // bool
            public const nint m_bPaused = 0x601; // bool
            public const nint m_bMultiplayer = 0x602; // bool
            public const nint m_bAutogenerated = 0x603; // bool
            public const nint m_flForceClientTime = 0x604; // float32
            public const nint m_nSceneStringIndex = 0x608; // uint16
            public const nint m_bClientOnly = 0x60A; // bool
            public const nint m_hOwner = 0x60C; // CHandle<C_BaseFlex>
            public const nint m_hActorList = 0x610; // C_NetworkUtlVectorBase<CHandle<C_BaseFlex>>
            public const nint m_bWasPlaying = 0x628; // bool
            public const nint m_QueuedEvents = 0x638; // CUtlVector<C_SceneEntity::QueuedEvents_t>
            public const nint m_flCurrentTime = 0x650; // float32
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
        public static class C_EconEntity {
            public const nint m_flFlexDelayTime = 0x1378; // float32
            public const nint m_flFlexDelayedWeight = 0x1380; // float32*
            public const nint m_bAttributesInitialized = 0x1388; // bool
            public const nint m_AttributeManager = 0x1390; // C_AttributeContainer
            public const nint m_OriginalOwnerXuidLow = 0x1868; // uint32
            public const nint m_OriginalOwnerXuidHigh = 0x186C; // uint32
            public const nint m_nFallbackPaintKit = 0x1870; // int32
            public const nint m_nFallbackSeed = 0x1874; // int32
            public const nint m_flFallbackWear = 0x1878; // float32
            public const nint m_nFallbackStatTrak = 0x187C; // int32
            public const nint m_bClientside = 0x1880; // bool
            public const nint m_bParticleSystemsCreated = 0x1881; // bool
            public const nint m_vecAttachedParticles = 0x1888; // CUtlVector<int32>
            public const nint m_hViewmodelAttachment = 0x18A0; // CHandle<CBaseAnimGraph>
            public const nint m_iOldTeam = 0x18A4; // int32
            public const nint m_bAttachmentDirty = 0x18A8; // bool
            public const nint m_nUnloadedModelIndex = 0x18AC; // int32
            public const nint m_iNumOwnerValidationRetries = 0x18B0; // int32
            public const nint m_hOldProvidee = 0x18C0; // CHandle<C_BaseEntity>
            public const nint m_vecAttachedModels = 0x18C8; // CUtlVector<C_EconEntity::AttachedModelData_t>
        }
        // Parent: CPlayerPawnComponent
        // Field count: 0
        public static class CPlayer_UseServices {
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
        public static class C_PointValueRemapper {
            public const nint m_bDisabled = 0x5F8; // bool
            public const nint m_bDisabledOld = 0x5F9; // bool
            public const nint m_bUpdateOnClient = 0x5FA; // bool
            public const nint m_nInputType = 0x5FC; // ValueRemapperInputType_t
            public const nint m_hRemapLineStart = 0x600; // CHandle<C_BaseEntity>
            public const nint m_hRemapLineEnd = 0x604; // CHandle<C_BaseEntity>
            public const nint m_flMaximumChangePerSecond = 0x608; // float32
            public const nint m_flDisengageDistance = 0x60C; // float32
            public const nint m_flEngageDistance = 0x610; // float32
            public const nint m_bRequiresUseKey = 0x614; // bool
            public const nint m_nOutputType = 0x618; // ValueRemapperOutputType_t
            public const nint m_hOutputEntities = 0x620; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
            public const nint m_nHapticsType = 0x638; // ValueRemapperHapticsType_t
            public const nint m_nMomentumType = 0x63C; // ValueRemapperMomentumType_t
            public const nint m_flMomentumModifier = 0x640; // float32
            public const nint m_flSnapValue = 0x644; // float32
            public const nint m_flCurrentMomentum = 0x648; // float32
            public const nint m_nRatchetType = 0x64C; // ValueRemapperRatchetType_t
            public const nint m_flRatchetOffset = 0x650; // float32
            public const nint m_flInputOffset = 0x654; // float32
            public const nint m_bEngaged = 0x658; // bool
            public const nint m_bFirstUpdate = 0x659; // bool
            public const nint m_flPreviousValue = 0x65C; // float32
            public const nint m_flPreviousUpdateTickTime = 0x660; // GameTime_t
            public const nint m_vecPreviousTestPoint = 0x664; // Vector
        }
        // Parent: 
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_hOwner (CEntityHandle)
        // NetworkVarNames: m_name (CUtlStringToken)
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
            public const nint m_iRoundTime = 0x64; // int32
            public const nint m_fMatchStartTime = 0x68; // float32
            public const nint m_fRoundStartTime = 0x6C; // GameTime_t
            public const nint m_flRestartRoundTime = 0x70; // GameTime_t
            public const nint m_bGameRestart = 0x74; // bool
            public const nint m_flGameStartTime = 0x78; // float32
            public const nint m_timeUntilNextPhaseStarts = 0x7C; // float32
            public const nint m_gamePhase = 0x80; // int32
            public const nint m_totalRoundsPlayed = 0x84; // int32
            public const nint m_nRoundsPlayedThisPhase = 0x88; // int32
            public const nint m_nOvertimePlaying = 0x8C; // int32
            public const nint m_iHostagesRemaining = 0x90; // int32
            public const nint m_bAnyHostageReached = 0x94; // bool
            public const nint m_bMapHasBombTarget = 0x95; // bool
            public const nint m_bMapHasRescueZone = 0x96; // bool
            public const nint m_bMapHasBuyZone = 0x97; // bool
            public const nint m_bIsQueuedMatchmaking = 0x98; // bool
            public const nint m_nQueuedMatchmakingMode = 0x9C; // int32
            public const nint m_bIsValveDS = 0xA0; // bool
            public const nint m_bLogoMap = 0xA1; // bool
            public const nint m_bPlayAllStepSoundsOnServer = 0xA2; // bool
            public const nint m_iSpectatorSlotCount = 0xA4; // int32
            public const nint m_MatchDevice = 0xA8; // int32
            public const nint m_bHasMatchStarted = 0xAC; // bool
            public const nint m_nNextMapInMapgroup = 0xB0; // int32
            public const nint m_szTournamentEventName = 0xB4; // char[512]
            public const nint m_szTournamentEventStage = 0x2B4; // char[512]
            public const nint m_szMatchStatTxt = 0x4B4; // char[512]
            public const nint m_szTournamentPredictionsTxt = 0x6B4; // char[512]
            public const nint m_nTournamentPredictionsPct = 0x8B4; // int32
            public const nint m_flCMMItemDropRevealStartTime = 0x8B8; // GameTime_t
            public const nint m_flCMMItemDropRevealEndTime = 0x8BC; // GameTime_t
            public const nint m_bIsDroppingItems = 0x8C0; // bool
            public const nint m_bIsQuestEligible = 0x8C1; // bool
            public const nint m_bIsHltvActive = 0x8C2; // bool
            public const nint m_arrProhibitedItemIndices = 0x8C4; // uint16[100]
            public const nint m_arrTournamentActiveCasterAccounts = 0x98C; // uint32[4]
            public const nint m_numBestOfMaps = 0x99C; // int32
            public const nint m_nHalloweenMaskListSeed = 0x9A0; // int32
            public const nint m_bBombDropped = 0x9A4; // bool
            public const nint m_bBombPlanted = 0x9A5; // bool
            public const nint m_iRoundWinStatus = 0x9A8; // int32
            public const nint m_eRoundWinReason = 0x9AC; // int32
            public const nint m_bTCantBuy = 0x9B0; // bool
            public const nint m_bCTCantBuy = 0x9B1; // bool
            public const nint m_iMatchStats_RoundResults = 0x9B4; // int32[30]
            public const nint m_iMatchStats_PlayersAlive_CT = 0xA2C; // int32[30]
            public const nint m_iMatchStats_PlayersAlive_T = 0xAA4; // int32[30]
            public const nint m_TeamRespawnWaveTimes = 0xB1C; // float32[32]
            public const nint m_flNextRespawnWave = 0xB9C; // GameTime_t[32]
            public const nint m_vMinimapMins = 0xC1C; // Vector
            public const nint m_vMinimapMaxs = 0xC28; // Vector
            public const nint m_MinimapVerticalSectionHeights = 0xC34; // float32[8]
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
            public const nint m_nMatchEndCount = 0xEB8; // uint8
            public const nint m_nTTeamIntroVariant = 0xEBC; // int32
            public const nint m_nCTTeamIntroVariant = 0xEC0; // int32
            public const nint m_bTeamIntroPeriod = 0xEC4; // bool
            public const nint m_iRoundEndWinnerTeam = 0xEC8; // int32
            public const nint m_eRoundEndReason = 0xECC; // int32
            public const nint m_bRoundEndShowTimerDefend = 0xED0; // bool
            public const nint m_iRoundEndTimerTime = 0xED4; // int32
            public const nint m_sRoundEndFunFactToken = 0xED8; // CUtlString
            public const nint m_iRoundEndFunFactPlayerSlot = 0xEE0; // CPlayerSlot
            public const nint m_iRoundEndFunFactData1 = 0xEE4; // int32
            public const nint m_iRoundEndFunFactData2 = 0xEE8; // int32
            public const nint m_iRoundEndFunFactData3 = 0xEEC; // int32
            public const nint m_sRoundEndMessage = 0xEF0; // CUtlString
            public const nint m_iRoundEndPlayerCount = 0xEF8; // int32
            public const nint m_bRoundEndNoMusic = 0xEFC; // bool
            public const nint m_iRoundEndLegacy = 0xF00; // int32
            public const nint m_nRoundEndCount = 0xF04; // uint8
            public const nint m_iRoundStartRoundNumber = 0xF08; // int32
            public const nint m_nRoundStartCount = 0xF0C; // uint8
            public const nint m_flLastPerfSampleTime = 0x4F18; // float64
        }
        // Parent: C_BaseModelEntity
        // Field count: 2
        public static class CGrenadeTracer {
            public const nint m_flTracerDuration = 0xEC8; // float32
            public const nint m_nType = 0xECC; // GrenadeType_t
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
        //
        // Metadata:
        // NetworkVarNames: m_vInitialPosition (Vector)
        // NetworkVarNames: m_vInitialVelocity (Vector)
        // NetworkVarNames: m_nBounces (int)
        // NetworkVarNames: m_nExplodeEffectIndex (HParticleSystemDefinitionStrong)
        // NetworkVarNames: m_nExplodeEffectTickBegin (int)
        // NetworkVarNames: m_vecExplodeEffectOrigin (Vector)
        public static class C_BaseCSGrenadeProjectile {
            public const nint m_vInitialPosition = 0x13B8; // Vector
            public const nint m_vInitialVelocity = 0x13C4; // Vector
            public const nint m_nBounces = 0x13D0; // int32
            public const nint m_nExplodeEffectIndex = 0x13D8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_nExplodeEffectTickBegin = 0x13E0; // int32
            public const nint m_vecExplodeEffectOrigin = 0x13E4; // Vector
            public const nint m_flSpawnTime = 0x13F0; // GameTime_t
            public const nint vecLastTrailLinePos = 0x13F4; // Vector
            public const nint flNextTrailLineTime = 0x1400; // GameTime_t
            public const nint m_bExplodeEffectBegan = 0x1404; // bool
            public const nint m_bCanCreateGrenadeTrail = 0x1405; // bool
            public const nint m_nSnapshotTrajectoryEffectIndex = 0x1408; // ParticleIndex_t
            public const nint m_hSnapshotTrajectoryParticleSnapshot = 0x1410; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_arrTrajectoryTrailPoints = 0x1418; // CUtlVector<Vector>
            public const nint m_arrTrajectoryTrailPointCreationTimes = 0x1430; // CUtlVector<float32>
            public const nint m_flTrajectoryTrailEffectCreationTime = 0x1448; // float32
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
        public static class C_GradientFog {
            public const nint m_hGradientFogTexture = 0x5F8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_flFogStartDistance = 0x600; // float32
            public const nint m_flFogEndDistance = 0x604; // float32
            public const nint m_bHeightFogEnabled = 0x608; // bool
            public const nint m_flFogStartHeight = 0x60C; // float32
            public const nint m_flFogEndHeight = 0x610; // float32
            public const nint m_flFarZ = 0x614; // float32
            public const nint m_flFogMaxOpacity = 0x618; // float32
            public const nint m_flFogFalloffExponent = 0x61C; // float32
            public const nint m_flFogVerticalExponent = 0x620; // float32
            public const nint m_fogColor = 0x624; // Color
            public const nint m_flFogStrength = 0x628; // float32
            public const nint m_flFadeTime = 0x62C; // float32
            public const nint m_bStartDisabled = 0x630; // bool
            public const nint m_bIsEnabled = 0x631; // bool
            public const nint m_bGradientFogNeedsTextures = 0x632; // bool
        }
        // Parent: CPlayerControllerComponent
        // Field count: 4
        //
        // Metadata:
        // NetworkVarNames: m_iAccount (int)
        // NetworkVarNames: m_iStartAccount (int)
        // NetworkVarNames: m_iTotalCashSpent (int)
        // NetworkVarNames: m_iCashSpentThisRound (int)
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
        public static class CAnimGraphNetworkedVariables {
            public const nint m_PredNetBoolVariables = 0x8; // C_NetworkUtlVectorBase<uint32>
            public const nint m_PredNetByteVariables = 0x20; // C_NetworkUtlVectorBase<uint8>
            public const nint m_PredNetUInt16Variables = 0x38; // C_NetworkUtlVectorBase<uint16>
            public const nint m_PredNetIntVariables = 0x50; // C_NetworkUtlVectorBase<int32>
            public const nint m_PredNetUInt32Variables = 0x68; // C_NetworkUtlVectorBase<uint32>
            public const nint m_PredNetUInt64Variables = 0x80; // C_NetworkUtlVectorBase<uint64>
            public const nint m_PredNetFloatVariables = 0x98; // C_NetworkUtlVectorBase<float32>
            public const nint m_PredNetVectorVariables = 0xB0; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PredNetQuaternionVariables = 0xC8; // C_NetworkUtlVectorBase<Quaternion>
            public const nint m_PredNetGlobalSymbolVariables = 0xE0; // C_NetworkUtlVectorBase<CGlobalSymbol>
            public const nint m_OwnerOnlyPredNetBoolVariables = 0xF8; // C_NetworkUtlVectorBase<uint32>
            public const nint m_OwnerOnlyPredNetByteVariables = 0x110; // C_NetworkUtlVectorBase<uint8>
            public const nint m_OwnerOnlyPredNetUInt16Variables = 0x128; // C_NetworkUtlVectorBase<uint16>
            public const nint m_OwnerOnlyPredNetIntVariables = 0x140; // C_NetworkUtlVectorBase<int32>
            public const nint m_OwnerOnlyPredNetUInt32Variables = 0x158; // C_NetworkUtlVectorBase<uint32>
            public const nint m_OwnerOnlyPredNetUInt64Variables = 0x170; // C_NetworkUtlVectorBase<uint64>
            public const nint m_OwnerOnlyPredNetFloatVariables = 0x188; // C_NetworkUtlVectorBase<float32>
            public const nint m_OwnerOnlyPredNetVectorVariables = 0x1A0; // C_NetworkUtlVectorBase<Vector>
            public const nint m_OwnerOnlyPredNetQuaternionVariables = 0x1B8; // C_NetworkUtlVectorBase<Quaternion>
            public const nint m_OwnerOnlyPredNetGlobalSymbolVariables = 0x1D0; // C_NetworkUtlVectorBase<CGlobalSymbol>
            public const nint m_nBoolVariablesCount = 0x1E8; // int32
            public const nint m_nOwnerOnlyBoolVariablesCount = 0x1EC; // int32
            public const nint m_nRandomSeedOffset = 0x1F0; // int32
            public const nint m_flLastTeleportTime = 0x1F4; // float32
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterModel {
            public const nint m_iFilterModel = 0x650; // CUtlSymbolLarge
        }
        // Parent: C_SoundAreaEntityBase
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_vMin (Vector)
        // NetworkVarNames: m_vMax (Vector)
        public static class C_SoundAreaEntityOrientedBox {
            public const nint m_vMin = 0x620; // Vector
            public const nint m_vMax = 0x62C; // Vector
        }
        // Parent: C_SoundOpvarSetPointBase
        // Field count: 0
        public static class C_SoundOpvarSetPointEntity {
        }
        // Parent: C_BaseEntity
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_strGraphName (CUtlString)
        // NetworkVarNames: m_strStateBlob (CUtlString)
        public static class CPulseGameBlackboard {
            public const nint m_strGraphName = 0x600; // CUtlString
            public const nint m_strStateBlob = 0x608; // CUtlString
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
        //
        // Metadata:
        // NetworkVarNames: m_boneIndexAttached (uint32)
        // NetworkVarNames: m_ragdollAttachedObjectIndex (uint32)
        // NetworkVarNames: m_attachmentPointBoneSpace (Vector)
        // NetworkVarNames: m_attachmentPointRagdollSpace (Vector)
        public static class C_RagdollPropAttached {
            public const nint m_boneIndexAttached = 0x11E8; // uint32
            public const nint m_ragdollAttachedObjectIndex = 0x11EC; // uint32
            public const nint m_attachmentPointBoneSpace = 0x11F0; // Vector
            public const nint m_attachmentPointRagdollSpace = 0x11FC; // Vector
            public const nint m_vecOffset = 0x1208; // Vector
            public const nint m_parentTime = 0x1214; // float32
            public const nint m_bHasParent = 0x1218; // bool
        }
        // Parent: C_BaseModelEntity
        // Field count: 0
        public static class C_ModelPointEntity {
        }
        // Parent: C_CSPlayerPawn
        // Field count: 2
        public static class C_CSGO_PreviewPlayer {
            public const nint m_animgraphCharacterModeString = 0x3F10; // CGlobalSymbol
            public const nint m_flInitialModelScale = 0x3F18; // float32
        }
        // Parent: C_BarnLight
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_bShowLight (bool)
        public static class C_RectLight {
            public const nint m_bShowLight = 0x1200; // bool
        }
        // Parent: C_BaseEntity
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_CPathQueryComponent (CPathQueryComponent::Storage_t)
        // NetworkVarNames: m_pathString (CUtlString)
        public static class CPathSimple {
            public const nint m_CPathQueryComponent = 0x600; // CPathQueryComponent
            public const nint m_pathString = 0x6F0; // CUtlString
            public const nint m_bClosedLoop = 0x6F8; // bool
        }
        // Parent: C_BaseModelEntity
        // Field count: 3
        public static class C_FuncTrackTrain {
            public const nint m_nLongAxis = 0xEB0; // int32
            public const nint m_flRadius = 0xEB4; // float32
            public const nint m_flLineLength = 0xEB8; // float32
        }
        // Parent: C_EconEntity
        // Field count: 2
        public static class C_EconWearable {
            public const nint m_nForceSkin = 0x18E0; // int32
            public const nint m_bAlwaysAllow = 0x18E4; // bool
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
        public static class C_EnvDecal {
            public const nint m_hDecalMaterial = 0xEB0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_flWidth = 0xEB8; // float32
            public const nint m_flHeight = 0xEBC; // float32
            public const nint m_flDepth = 0xEC0; // float32
            public const nint m_nRenderOrder = 0xEC4; // uint32
            public const nint m_bProjectOnWorld = 0xEC8; // bool
            public const nint m_bProjectOnCharacters = 0xEC9; // bool
            public const nint m_bProjectOnWater = 0xECA; // bool
            public const nint m_flDepthSortBias = 0xECC; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // NetworkVarNames: m_bSpotted (bool)
        // NetworkVarNames: m_bSpottedByMask (uint32)
        public static class EntitySpottedState_t {
            public const nint m_bSpotted = 0x8; // bool
            public const nint m_bSpottedByMask = 0xC; // uint32[2]
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
            public const nint m_pReticleHintTextName = 0x18E0; // char[256]
        }
        // Parent: C_BaseEntity
        // Field count: 0
        public static class C_CSPetPlacement {
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
        public static class C_Beam {
            public const nint m_flFrameRate = 0xEB0; // float32
            public const nint m_flHDRColorScale = 0xEB4; // float32
            public const nint m_flFireTime = 0xEB8; // GameTime_t
            public const nint m_flDamage = 0xEBC; // float32
            public const nint m_nNumBeamEnts = 0xEC0; // uint8
            public const nint m_queryHandleHalo = 0xEC4; // int32
            public const nint m_hBaseMaterial = 0xEE8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_nHaloIndex = 0xEF0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_nBeamType = 0xEF8; // BeamType_t
            public const nint m_nBeamFlags = 0xEFC; // uint32
            public const nint m_hAttachEntity = 0xF00; // CHandle<C_BaseEntity>[10]
            public const nint m_nAttachIndex = 0xF28; // AttachmentHandle_t[10]
            public const nint m_fWidth = 0xF34; // float32
            public const nint m_fEndWidth = 0xF38; // float32
            public const nint m_fFadeLength = 0xF3C; // float32
            public const nint m_fHaloScale = 0xF40; // float32
            public const nint m_fAmplitude = 0xF44; // float32
            public const nint m_fStartFrame = 0xF48; // float32
            public const nint m_fSpeed = 0xF4C; // float32
            public const nint m_flFrame = 0xF50; // float32
            public const nint m_nClipStyle = 0xF54; // BeamClipStyle_t
            public const nint m_bTurnedOff = 0xF58; // bool
            public const nint m_vecEndPos = 0xF5C; // VectorWS
            public const nint m_hEndEntity = 0xF68; // CHandle<C_BaseEntity>
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
        public static class C_EnvLightProbeVolume {
            public const nint m_Entity_hLightProbeTexture_AmbientCube = 0x15F0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SDF = 0x15F8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SH2_DC = 0x1600; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SH2_R = 0x1608; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SH2_G = 0x1610; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SH2_B = 0x1618; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightIndicesTexture = 0x1620; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightScalarsTexture = 0x1628; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightShadowsTexture = 0x1630; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_vBoxMins = 0x1638; // Vector
            public const nint m_Entity_vBoxMaxs = 0x1644; // Vector
            public const nint m_Entity_bMoveable = 0x1650; // bool
            public const nint m_Entity_nHandshake = 0x1654; // int32
            public const nint m_Entity_nPriority = 0x1658; // int32
            public const nint m_Entity_bStartDisabled = 0x165C; // bool
            public const nint m_Entity_nLightProbeSizeX = 0x1660; // int32
            public const nint m_Entity_nLightProbeSizeY = 0x1664; // int32
            public const nint m_Entity_nLightProbeSizeZ = 0x1668; // int32
            public const nint m_Entity_nLightProbeAtlasX = 0x166C; // int32
            public const nint m_Entity_nLightProbeAtlasY = 0x1670; // int32
            public const nint m_Entity_nLightProbeAtlasZ = 0x1674; // int32
            public const nint m_Entity_bEnabled = 0x1681; // bool
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
        public static class C_FuncConveyor {
            public const nint m_vecMoveDirEntitySpace = 0xEB8; // Vector
            public const nint m_flTargetSpeed = 0xEC4; // float32
            public const nint m_nTransitionStartTick = 0xEC8; // GameTick_t
            public const nint m_nTransitionDurationTicks = 0xECC; // int32
            public const nint m_flTransitionStartSpeed = 0xED0; // float32
            public const nint m_hConveyorModels = 0xED8; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
            public const nint m_flCurrentConveyorOffset = 0xEF0; // float32
            public const nint m_flCurrentConveyorSpeed = 0xEF4; // float32
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
        public static class CCSPlayer_WeaponServices {
            public const nint m_flNextAttack = 0xC8; // GameTime_t
            public const nint m_bIsLookingAtWeapon = 0xCC; // bool
            public const nint m_bIsHoldingLookAtWeapon = 0xCD; // bool
            public const nint m_nOldTotalShootPositionHistoryCount = 0xD0; // uint32
            public const nint m_nOldTotalInputHistoryCount = 0x368; // uint32
            public const nint m_networkAnimTiming = 0x18C8; // C_NetworkUtlVectorBase<uint8>
            public const nint m_bBlockInspectUntilNextGraphUpdate = 0x18E0; // bool
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
            public const nint m_hDefuserMultimeter = 0x1698; // CHandle<C_Multimeter>
            public const nint m_flNextRadarFlashTime = 0x169C; // GameTime_t
            public const nint m_bRadarFlash = 0x16A0; // bool
            public const nint m_pBombDefuser = 0x16A4; // CHandle<C_CSPlayerPawn>
            public const nint m_fLastDefuseTime = 0x16A8; // GameTime_t
            public const nint m_pPredictionOwner = 0x16B0; // CBasePlayerController*
            public const nint m_vecC4ExplodeSpectatePos = 0x16B8; // Vector
            public const nint m_vecC4ExplodeSpectateAng = 0x16C4; // QAngle
            public const nint m_flC4ExplodeSpectateDuration = 0x16D0; // float32
        }
        // Parent: C_CSGO_TeamIntroCharacterPosition
        // Field count: 0
        public static class CCSGO_WingmanIntroCharacterPosition {
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterName {
            public const nint m_iFilterName = 0x650; // CUtlSymbolLarge
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
        public static class C_RagdollProp {
            public const nint m_ragEnabled = 0x1160; // C_NetworkUtlVectorBase<bool>
            public const nint m_ragPos = 0x1178; // C_NetworkUtlVectorBase<Vector>
            public const nint m_ragAngles = 0x1190; // C_NetworkUtlVectorBase<QAngle>
            public const nint m_flBlendWeight = 0x11A8; // float32
            public const nint m_hRagdollSource = 0x11AC; // CHandle<C_BaseEntity>
            public const nint m_iEyeAttachment = 0x11B0; // AttachmentHandle_t
            public const nint m_flBlendWeightCurrent = 0x11B4; // float32
            public const nint m_parentPhysicsBoneIndices = 0x11B8; // CUtlVector<int32>
            public const nint m_worldSpaceBoneComputationOrder = 0x11D0; // CUtlVector<int32>
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
        public static class CBaseAnimGraph {
            public const nint m_bInitiallyPopulateInterpHistory = 0xF30; // bool
            public const nint m_bSuppressAnimEventSounds = 0xF32; // bool
            public const nint m_bAnimGraphUpdateEnabled = 0xF40; // bool
            public const nint m_flMaxSlopeDistance = 0xF44; // float32
            public const nint m_vLastSlopeCheckPos = 0xF48; // VectorWS
            public const nint m_bAnimationUpdateScheduled = 0xF54; // bool
            public const nint m_vecForce = 0xF58; // Vector
            public const nint m_nForceBone = 0xF64; // int32
            public const nint m_pClientsideRagdoll = 0xF68; // CBaseAnimGraph*
            public const nint m_bBuiltRagdoll = 0xF70; // bool
            public const nint m_RagdollPose = 0xF88; // PhysicsRagdollPose_t
            public const nint m_bRagdollEnabled = 0xFD0; // bool
            public const nint m_bRagdollClientSide = 0xFD1; // bool
            public const nint m_bHasAnimatedMaterialAttributes = 0xFE0; // bool
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
        //
        // Metadata:
        // NetworkVarNames: m_CLightComponent (CLightComponent::Storage_t)
        public static class C_LightEntity {
            public const nint m_CLightComponent = 0xEB0; // CLightComponent*
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
        //
        // Metadata:
        // NetworkVarNames: m_fFireTime (GameTime_t)
        public static class C_WeaponTaser {
            public const nint m_fFireTime = 0x1FB0; // GameTime_t
            public const nint m_nLastAttackTick = 0x1FB4; // int32
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
        //
        // Metadata:
        // NetworkVarNames: m_hMyWeapons (CHandle<C_BasePlayerWeapon>)
        // NetworkVarNames: m_hActiveWeapon (CHandle<CBasePlayerWeapon>)
        // NetworkVarNames: m_hLastWeapon (CHandle<CBasePlayerWeapon>)
        // NetworkVarNames: m_iAmmo (uint16)
        public static class CPlayer_WeaponServices {
            public const nint m_hMyWeapons = 0x40; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
            public const nint m_hActiveWeapon = 0x58; // CHandle<C_BasePlayerWeapon>
            public const nint m_hLastWeapon = 0x5C; // CHandle<C_BasePlayerWeapon>
            public const nint m_iAmmo = 0x60; // uint16[32]
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
            public const nint m_GameBlackboard = 0x58; // PulseSymbol_t
            public const nint m_ExpectedArgs = 0x68; // CUtlLeanVector<CPulseRuntimeMethodArg>
            public const nint m_nAsyncCallMode = 0x78; // PulseMethodCallMode_t
            public const nint m_OnFinished = 0x80; // CPulse_ResumePoint
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
        //
        // Metadata:
        // NetworkVarNames: m_hPlayer (CHandle<CCSPlayerPawn>)
        // NetworkVarNames: m_hPingedEntity (CHandle<CBaseEntity>)
        // NetworkVarNames: m_iType (int)
        // NetworkVarNames: m_bUrgent (bool)
        // NetworkVarNames: m_szPlaceName (char)
        public static class C_PlayerPing {
            public const nint m_hPlayer = 0x628; // CHandle<C_CSPlayerPawn>
            public const nint m_hPingedEntity = 0x62C; // CHandle<C_BaseEntity>
            public const nint m_iType = 0x630; // int32
            public const nint m_bUrgent = 0x634; // bool
            public const nint m_szPlaceName = 0x635; // char[18]
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_AK47 {
        }
        // Parent: C_BaseEntity
        // Field count: 10
        public static class C_CSGO_MapPreviewCameraPathNode {
            public const nint m_szParentPathUniqueID = 0x5F8; // CUtlSymbolLarge
            public const nint m_nPathIndex = 0x600; // int32
            public const nint m_vInTangentLocal = 0x604; // Vector
            public const nint m_vOutTangentLocal = 0x610; // Vector
            public const nint m_flFOV = 0x61C; // float32
            public const nint m_flCameraSpeed = 0x620; // float32
            public const nint m_flEaseIn = 0x624; // float32
            public const nint m_flEaseOut = 0x628; // float32
            public const nint m_vInTangentWorld = 0x62C; // Vector
            public const nint m_vOutTangentWorld = 0x638; // Vector
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
        public static class C_CSPlayerResource {
            public const nint m_bHostageAlive = 0x5F8; // bool[12]
            public const nint m_isHostageFollowingSomeone = 0x604; // bool[12]
            public const nint m_iHostageEntityIDs = 0x610; // CEntityIndex[12]
            public const nint m_bombsiteCenterA = 0x640; // Vector
            public const nint m_bombsiteCenterB = 0x64C; // Vector
            public const nint m_hostageRescueX = 0x658; // int32[4]
            public const nint m_hostageRescueY = 0x668; // int32[4]
            public const nint m_hostageRescueZ = 0x678; // int32[4]
            public const nint m_bEndMatchNextMapAllVoted = 0x688; // bool
            public const nint m_foundGoalPositions = 0x689; // bool
        }
        // Parent: C_BaseEntity
        // Field count: 2
        public static class CSkyboxReference {
            public const nint m_worldGroupId = 0x5F8; // WorldGroupId_t
            public const nint m_hSkyCamera = 0x5FC; // CHandle<C_SkyCamera>
        }
        // Parent: C_MolotovGrenade
        // Field count: 0
        public static class C_IncendiaryGrenade {
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterClass {
            public const nint m_iFilterClass = 0x650; // CUtlSymbolLarge
        }
        // Parent: C_PointCamera
        // Field count: 1
        public static class C_PointCameraVFOV {
            public const nint m_flVerticalFOV = 0x658; // float32
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
        public static class C_PointCamera {
            public const nint m_FOV = 0x5F8; // float32
            public const nint m_Resolution = 0x5FC; // float32
            public const nint m_bFogEnable = 0x600; // bool
            public const nint m_FogColor = 0x601; // Color
            public const nint m_flFogStart = 0x608; // float32
            public const nint m_flFogEnd = 0x60C; // float32
            public const nint m_flFogMaxDensity = 0x610; // float32
            public const nint m_bActive = 0x614; // bool
            public const nint m_bUseScreenAspectRatio = 0x615; // bool
            public const nint m_flAspectRatio = 0x618; // float32
            public const nint m_bNoSky = 0x61C; // bool
            public const nint m_fBrightness = 0x620; // float32
            public const nint m_flZFar = 0x624; // float32
            public const nint m_flZNear = 0x628; // float32
            public const nint m_bCanHLTVUse = 0x62C; // bool
            public const nint m_bAlignWithParent = 0x62D; // bool
            public const nint m_bDofEnabled = 0x62E; // bool
            public const nint m_flDofNearBlurry = 0x630; // float32
            public const nint m_flDofNearCrisp = 0x634; // float32
            public const nint m_flDofFarCrisp = 0x638; // float32
            public const nint m_flDofFarBlurry = 0x63C; // float32
            public const nint m_flDofTiltToGround = 0x640; // float32
            public const nint m_TargetFOV = 0x644; // float32
            public const nint m_DegreesPerSecond = 0x648; // float32
            public const nint m_bIsOn = 0x64C; // bool
            public const nint m_pNext = 0x650; // C_PointCamera*
        }
        // Parent: CLogicalEntity
        // Field count: 3
        public static class CBaseFilter {
            public const nint m_bNegated = 0x5F8; // bool
            public const nint m_OnPass = 0x600; // CEntityIOOutput
            public const nint m_OnFail = 0x628; // CEntityIOOutput
        }
        // Parent: 
        // Field count: 1
        //
        // Metadata:
        // NetworkVarNames: m_weaponPurchases (WeaponPurchaseCount_t)
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
            public const nint m_iBuyingStatus = 0x5F8; // int32
            public const nint m_flBombRadius = 0x5FC; // float32
            public const nint m_iPetPopulation = 0x600; // int32
            public const nint m_bUseNormalSpawnsForDM = 0x604; // bool
            public const nint m_bDisableAutoGeneratedDMSpawns = 0x605; // bool
            public const nint m_flBotMaxVisionDistance = 0x608; // float32
            public const nint m_iHostageCount = 0x60C; // int32
            public const nint m_bFadePlayerVisibilityFarZ = 0x610; // bool
            public const nint m_bRainTraceToSkyEnabled = 0x611; // bool
            public const nint m_flEnvRainStrength = 0x614; // float32
            public const nint m_flEnvPuddleRippleStrength = 0x618; // float32
            public const nint m_flEnvPuddleRippleDirection = 0x61C; // float32
            public const nint m_flEnvWetnessCoverage = 0x620; // float32
            public const nint m_flEnvWetnessDryingAmount = 0x624; // float32
        }
        // Parent: C_CSGO_TeamPreviewCamera
        // Field count: 0
        public static class C_CSGO_EndOfMatchCamera {
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
        public static class C_BaseGrenade {
            public const nint m_bHasWarnedAI = 0x1368; // bool
            public const nint m_bIsSmokeGrenade = 0x1369; // bool
            public const nint m_bIsLive = 0x136A; // bool
            public const nint m_DmgRadius = 0x136C; // float32
            public const nint m_flDetonateTime = 0x1370; // GameTime_t
            public const nint m_flWarnAITime = 0x1374; // float32
            public const nint m_flDamage = 0x1378; // float32
            public const nint m_iszBounceSound = 0x1380; // CUtlSymbolLarge
            public const nint m_ExplosionSound = 0x1388; // CUtlString
            public const nint m_hThrower = 0x1394; // CHandle<C_CSPlayerPawn>
            public const nint m_flNextAttack = 0x13AC; // GameTime_t
            public const nint m_hOriginalThrower = 0x13B0; // CHandle<C_CSPlayerPawn>
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
        public static class C_PlayerSprayDecal {
            public const nint m_nUniqueID = 0xEB0; // int32
            public const nint m_unAccountID = 0xEB4; // uint32
            public const nint m_unTraceID = 0xEB8; // uint32
            public const nint m_rtGcTime = 0xEBC; // uint32
            public const nint m_vecEndPos = 0xEC0; // Vector
            public const nint m_vecStart = 0xECC; // Vector
            public const nint m_vecLeft = 0xED8; // Vector
            public const nint m_vecNormal = 0xEE4; // Vector
            public const nint m_nPlayer = 0xEF0; // int32
            public const nint m_nEntity = 0xEF4; // int32
            public const nint m_nHitbox = 0xEF8; // int32
            public const nint m_flCreationTime = 0xEFC; // float32
            public const nint m_nTintID = 0xF00; // int32
            public const nint m_nVersion = 0xF04; // uint8
            public const nint m_ubSignature = 0xF05; // uint8[128]
            public const nint m_SprayRenderHelper = 0xF90; // CPlayerSprayDecalRenderHelper
        }
        // Parent: 
        // Field count: 11
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
        // Field count: 14
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
        // Parent: C_LightEntity
        // Field count: 0
        public static class C_LightSpotEntity {
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_flDMBonusStartTime (GameTime_t)
        // NetworkVarNames: m_flDMBonusTimeLength (float)
        // NetworkVarNames: m_sDMBonusWeapon (CUtlString)
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
        public static class C_Sprite {
            public const nint m_hSpriteMaterial = 0xEB0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_hAttachedToEntity = 0xEB8; // CHandle<C_BaseEntity>
            public const nint m_nAttachment = 0xEBC; // AttachmentHandle_t
            public const nint m_flSpriteFramerate = 0xEC0; // float32
            public const nint m_flFrame = 0xEC4; // float32
            public const nint m_flDieTime = 0xEC8; // GameTime_t
            public const nint m_nBrightness = 0xED8; // uint32
            public const nint m_flBrightnessDuration = 0xEDC; // float32
            public const nint m_flSpriteScale = 0xEE0; // float32
            public const nint m_flScaleDuration = 0xEE4; // float32
            public const nint m_bWorldSpaceScale = 0xEE8; // bool
            public const nint m_flGlowProxySize = 0xEEC; // float32
            public const nint m_flHDRColorScale = 0xEF0; // float32
            public const nint m_flLastTime = 0xEF4; // GameTime_t
            public const nint m_flMaxFrame = 0xEF8; // float32
            public const nint m_flStartScale = 0xEFC; // float32
            public const nint m_flDestScale = 0xF00; // float32
            public const nint m_flScaleTimeStart = 0xF04; // GameTime_t
            public const nint m_nStartBrightness = 0xF08; // int32
            public const nint m_nDestBrightness = 0xF0C; // int32
            public const nint m_flBrightnessTimeStart = 0xF10; // GameTime_t
            public const nint m_nSpriteWidth = 0xF20; // int32
            public const nint m_nSpriteHeight = 0xF24; // int32
        }
        // Parent: C_BaseEntity
        // Field count: 2
        public static class C_CsmFovOverride {
            public const nint m_cameraName = 0x5F8; // CUtlString
            public const nint m_flCsmFovOverrideValue = 0x600; // float32
        }
        // Parent: C_CSWeaponBaseGun
        // Field count: 0
        public static class C_WeaponGlock {
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
        public static class C_PhysicsProp {
            public const nint m_bAwake = 0x1300; // bool
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterTeam {
            public const nint m_iFilterTeam = 0x650; // int32
        }
        // Parent: None
        // Field count: 30
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBasePlayerWeaponVData {
            public const nint m_szWorldModel = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_sToolsOnlyOwnerModelName = 0x108; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_bBuiltRightHanded = 0x1E8; // bool
            public const nint m_bAllowFlipping = 0x1E9; // bool
            public const nint m_sMuzzleAttachment = 0x1F0; // CAttachmentNameSymbolWithStorage
            public const nint m_szMuzzleFlashParticle = 0x210; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            public const nint m_szMuzzleFlashParticleConfig = 0x2F0; // CUtlString
            public const nint m_szBarrelSmokeParticle = 0x2F8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            public const nint m_nMuzzleSmokeShotThreshold = 0x3D8; // uint8
            public const nint m_flMuzzleSmokeTimeout = 0x3DC; // float32
            public const nint m_flMuzzleSmokeDecrementRate = 0x3E0; // float32
            public const nint m_bLinkedCooldowns = 0x3E4; // bool
            public const nint m_iFlags = 0x3E5; // ItemFlagTypes_t
            public const nint m_nPrimaryAmmoType = 0x3E6; // AmmoIndex_t
            public const nint m_nSecondaryAmmoType = 0x3E7; // AmmoIndex_t
            public const nint m_iMaxClip1 = 0x3E8; // int32
            public const nint m_iMaxClip2 = 0x3EC; // int32
            public const nint m_iDefaultClip1 = 0x3F0; // int32
            public const nint m_iDefaultClip2 = 0x3F4; // int32
            public const nint m_bReserveAmmoAsClips = 0x3F8; // bool
            public const nint m_bTreatAsSingleClip = 0x3F9; // bool
            public const nint m_bKeepLoadedAmmo = 0x3FA; // bool
            public const nint m_iWeight = 0x3FC; // int32
            public const nint m_bAutoSwitchTo = 0x400; // bool
            public const nint m_bAutoSwitchFrom = 0x401; // bool
            public const nint m_iRumbleEffect = 0x404; // RumbleEffect_t
            public const nint m_flDropSpeed = 0x408; // float32
            public const nint m_iSlot = 0x40C; // int32
            public const nint m_iPosition = 0x410; // int32
            public const nint m_aShootSounds = 0x418; // CUtlOrderedMap<WeaponSound_t,CSoundEventName>
        }
        // Parent: C_CSGO_EndOfMatchLineupEndpoint
        // Field count: 0
        public static class C_CSGO_EndOfMatchLineupEnd {
        }
        // Parent: C_CSGO_PreviewPlayer
        // Field count: 0
        public static class C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel {
        }
        // Parent: C_BaseCSGrenade
        // Field count: 0
        public static class C_SmokeGrenade {
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
        public static class C_PointClientUIWorldPanel {
            public const nint m_bForceRecreateNextUpdate = 0xEE8; // bool
            public const nint m_bMoveViewToPlayerNextThink = 0xEE9; // bool
            public const nint m_bCheckCSSClasses = 0xEEA; // bool
            public const nint m_anchorDeltaTransform = 0xEF0; // CTransform
            public const nint m_pOffScreenIndicator = 0x1080; // CPointOffScreenIndicatorUi*
            public const nint m_bIgnoreInput = 0x10A8; // bool
            public const nint m_bLit = 0x10A9; // bool
            public const nint m_bFollowPlayerAcrossTeleport = 0x10AA; // bool
            public const nint m_flWidth = 0x10AC; // float32
            public const nint m_flHeight = 0x10B0; // float32
            public const nint m_flDPI = 0x10B4; // float32
            public const nint m_flInteractDistance = 0x10B8; // float32
            public const nint m_flDepthOffset = 0x10BC; // float32
            public const nint m_unOwnerContext = 0x10C0; // uint32
            public const nint m_unHorizontalAlign = 0x10C4; // uint32
            public const nint m_unVerticalAlign = 0x10C8; // uint32
            public const nint m_unOrientation = 0x10CC; // uint32
            public const nint m_bAllowInteractionFromAllSceneWorlds = 0x10D0; // bool
            public const nint m_vecCSSClasses = 0x10D8; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            public const nint m_bOpaque = 0x10F0; // bool
            public const nint m_bNoDepth = 0x10F1; // bool
            public const nint m_bVisibleWhenParentNoDraw = 0x10F2; // bool
            public const nint m_bRenderBackface = 0x10F3; // bool
            public const nint m_bUseOffScreenIndicator = 0x10F4; // bool
            public const nint m_bExcludeFromSaveGames = 0x10F5; // bool
            public const nint m_bGrabbable = 0x10F6; // bool
            public const nint m_bOnlyRenderToTexture = 0x10F7; // bool
            public const nint m_bDisableMipGen = 0x10F8; // bool
            public const nint m_nExplicitImageLayout = 0x10FC; // int32
        }
        // Parent: C_BaseEntity
        // Field count: 3
        //
        // Metadata:
        // NetworkVarNames: m_hEntAttached (CHandle<C_BaseEntity>)
        // NetworkVarNames: m_bCheapEffect (bool)
        public static class C_EntityFlame {
            public const nint m_hEntAttached = 0x5F8; // CHandle<C_BaseEntity>
            public const nint m_hOldAttached = 0x620; // CHandle<C_BaseEntity>
            public const nint m_bCheapEffect = 0x624; // bool
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
        public static class CBasePlayerController {
            public const nint m_CommandContext = 0x600; // C_CommandContext
            public const nint m_nInButtonsWhichAreToggles = 0x6A8; // uint64
            public const nint m_nTickBase = 0x6B0; // uint32
            public const nint m_hPawn = 0x6B4; // CHandle<C_BasePlayerPawn>
            public const nint m_bKnownTeamMismatch = 0x6B8; // bool
            public const nint m_hPredictedPawn = 0x6BC; // CHandle<C_BasePlayerPawn>
            public const nint m_nSplitScreenSlot = 0x6C0; // CSplitScreenSlot
            public const nint m_hSplitOwner = 0x6C4; // CHandle<CBasePlayerController>
            public const nint m_hSplitScreenPlayers = 0x6C8; // CUtlVector<CHandle<CBasePlayerController>>
            public const nint m_bIsHLTV = 0x6E0; // bool
            public const nint m_iConnected = 0x6E4; // PlayerConnectedState
            public const nint m_iszPlayerName = 0x6E8; // char[128]
            public const nint m_steamID = 0x770; // uint64
            public const nint m_bIsLocalPlayerController = 0x778; // bool
            public const nint m_bNoClipEnabled = 0x779; // bool
            public const nint m_iDesiredFOV = 0x77C; // uint32
        }
        // Parent: C_BaseEntity
        // Field count: 0
        public static class C_CSGO_EndOfMatchLineupEndpoint {
        }
    }
}
