// Generated using https://github.com/a2x/cs2-dumper
// 2026-04-22 02:40:55.168485600 UTC

pub const cs2_dumper = struct {
    pub const schemas = struct {
        // Module: client.dll
        // Class count: 535
        // Enum count: 12
        pub const client_dll = struct {
            // Alignment: 4
            // Member count: 5
            pub const C_BaseCombatCharacter__WaterWakeMode_t = enum(u32) {
                WATER_WAKE_NONE = 0x0,
                WATER_WAKE_IDLE = 0x1,
                WATER_WAKE_WALKING = 0x2,
                WATER_WAKE_RUNNING = 0x3,
                WATER_WAKE_WATER_OVERHEAD = 0x4
            };
            // Alignment: 4
            // Member count: 2
            pub const PulseBestOutflowRules_t = enum(u32) {
                SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
                SORT_BY_OUTFLOW_INDEX = 0x1
            };
            // Alignment: 4
            // Member count: 4
            pub const PulseCursorCancelPriority_t = enum(u32) {
                None = 0x0,
                CancelOnSucceeded = 0x1,
                SoftCancel = 0x2,
                HardCancel = 0x3
            };
            // Alignment: 4
            // Member count: 2
            pub const PulseMethodCallMode_t = enum(u32) {
                SYNC_WAIT_FOR_COMPLETION = 0x0,
                ASYNC_FIRE_AND_FORGET = 0x1
            };
            // Alignment: 4
            // Member count: 15
            pub const CompositeMaterialInputLooseVariableType_t = enum(u32) {
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
            pub const CompositeMaterialInputTextureType_t = enum(u32) {
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
            pub const InventoryNodeType_t = enum(u32) {
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
            pub const CompositeMaterialInputContainerSourceType_t = enum(u32) {
                CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0x0,
                CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 0x1,
                CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 0x2,
                CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 0x3,
                CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 0x4,
                CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 0x5
            };
            // Alignment: 4
            // Member count: 10
            pub const CompMatPropertyMutatorType_t = enum(u32) {
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
            pub const CompositeMaterialVarSystemVar_t = enum(u32) {
                COMPMATSYSVAR_COMPOSITETIME = 0x0,
                COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 0x1
            };
            // Alignment: 4
            // Member count: 6
            pub const CompositeMaterialMatchFilterType_t = enum(u32) {
                MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0x0,
                MATCH_FILTER_MATERIAL_SHADER = 0x1,
                MATCH_FILTER_MATERIAL_NAME_SUBSTR = 0x2,
                MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 0x3,
                MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 0x4,
                MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 0x5
            };
            // Alignment: 4
            // Member count: 3
            pub const CompMatPropertyMutatorConditionType_t = enum(u32) {
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0x0,
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 0x1,
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 0x2
            };
            // Parent: C_CSGO_TeamPreviewCharacterPosition
            // Field count: 0
            pub const C_CSGO_TeamIntroCharacterPosition = struct {
            };
            // Parent: C_Inferno
            // Field count: 0
            pub const C_FireCrackerBlast = struct {
            };
            // Parent: CCSGO_WingmanIntroCharacterPosition
            // Field count: 0
            pub const CCSGO_WingmanIntroCounterTerroristPosition = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            pub const CPulseCell_WaitForCursorsWithTag = struct {
                pub const m_bTagSelfWhenComplete: usize = 0x98; // bool
                pub const m_nDesiredKillPriority: usize = 0x9C; // PulseCursorCancelPriority_t
            };
            // Parent: None
            // Field count: 1
            pub const C_SceneEntity__QueuedEvents_t = struct {
                pub const starttime: usize = 0x0; // float32
            };
            // Parent: CPlayerPawnComponent
            // Field count: 1
            pub const CCSPlayer_PingServices = struct {
                pub const m_hPlayerPing: usize = 0x48; // CHandle<C_PlayerPing>
            };
            // Parent: None
            // Field count: 5
            pub const CEconItemAttribute = struct {
                pub const m_iAttributeDefinitionIndex: usize = 0x30; // uint16
                pub const m_flValue: usize = 0x34; // float32
                pub const m_flInitialValue: usize = 0x38; // float32
                pub const m_nRefundableCurrency: usize = 0x3C; // int32
                pub const m_bSetBonus: usize = 0x40; // bool
            };
            // Parent: None
            // Field count: 0
            pub const CBaseTriggerAPI = struct {
            };
            // Parent: C_DynamicProp
            // Field count: 0
            pub const CFuncRetakeBarrier = struct {
            };
            // Parent: None
            // Field count: 15
            pub const C_EnvWindShared = struct {
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
                pub const m_iInitialWindDir: usize = 0x2A; // uint16
                pub const m_flInitialWindSpeed: usize = 0x2C; // float32
                pub const m_location: usize = 0x30; // VectorWS
                pub const m_hEntOwner: usize = 0x3C; // CHandle<C_BaseEntity>
            };
            // Parent: C_BaseEntity
            // Field count: 4
            pub const C_SkyCamera = struct {
                pub const m_skyboxData: usize = 0x600; // sky3dparams_t
                pub const m_skyboxSlotToken: usize = 0x690; // CUtlStringToken
                pub const m_bUseAngles: usize = 0x694; // bool
                pub const m_pNext: usize = 0x698; // C_SkyCamera*
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Base = struct {
                pub const m_nEditorNodeID: usize = 0x8; // PulseDocNodeID_t
            };
            // Parent: C_BaseModelEntity
            // Field count: 0
            pub const C_FuncRotating = struct {
            };
            // Parent: C_BaseEntity
            // Field count: 6
            pub const C_SoundOpvarSetPointBase = struct {
                pub const m_iszStackName: usize = 0x600; // CUtlSymbolLarge
                pub const m_iszOperatorName: usize = 0x608; // CUtlSymbolLarge
                pub const m_iszOpvarName: usize = 0x610; // CUtlSymbolLarge
                pub const m_iOpvarIndex: usize = 0x618; // int32
                pub const m_bUseAutoCompare: usize = 0x61C; // bool
                pub const m_bFastRefresh: usize = 0x61D; // bool
            };
            // Parent: C_BaseEntity
            // Field count: 24
            pub const C_EnvCubemapFog = struct {
                pub const m_flEndDistance: usize = 0x600; // float32
                pub const m_flStartDistance: usize = 0x604; // float32
                pub const m_flFogFalloffExponent: usize = 0x608; // float32
                pub const m_bHeightFogEnabled: usize = 0x60C; // bool
                pub const m_flFogHeightWidth: usize = 0x610; // float32
                pub const m_flFogHeightEnd: usize = 0x614; // float32
                pub const m_flFogHeightStart: usize = 0x618; // float32
                pub const m_flFogHeightExponent: usize = 0x61C; // float32
                pub const m_flLODBias: usize = 0x620; // float32
                pub const m_bActive: usize = 0x624; // bool
                pub const m_bStartDisabled: usize = 0x625; // bool
                pub const m_flFogMaxOpacity: usize = 0x628; // float32
                pub const m_nCubemapSourceType: usize = 0x62C; // int32
                pub const m_hSkyMaterial: usize = 0x630; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_iszSkyEntity: usize = 0x638; // CUtlSymbolLarge
                pub const m_nHeightFogType: usize = 0x640; // int32
                pub const m_nFogHeightBlendMode: usize = 0x644; // int32
                pub const m_nFogHeightCoordinateSpace: usize = 0x648; // int32
                pub const m_nDistanceFogType: usize = 0x64C; // int32
                pub const m_DistanceFogCurveString: usize = 0x650; // CUtlSymbolLarge
                pub const m_HeightFogCurveString: usize = 0x658; // CUtlSymbolLarge
                pub const m_hFogCubemapTexture: usize = 0x6F0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_bHasHeightFogEnd: usize = 0x6F8; // bool
                pub const m_bFirstTime: usize = 0x6F9; // bool
            };
            // Parent: C_CSGO_TeamSelectCharacterPosition
            // Field count: 0
            pub const C_CSGO_TeamSelectTerroristPosition = struct {
            };
            // Parent: C_ParticleSystem
            // Field count: 5
            pub const C_EnvParticleGlow = struct {
                pub const m_flAlphaScale: usize = 0x1558; // float32
                pub const m_flRadiusScale: usize = 0x155C; // float32
                pub const m_flSelfIllumScale: usize = 0x1560; // float32
                pub const m_ColorTint: usize = 0x1564; // Color
                pub const m_hTextureOverride: usize = 0x1568; // CStrongHandle<InfoForResourceTypeCTextureBase>
            };
            // Parent: C_BaseEntity
            // Field count: 0
            pub const CCS_PortraitWorldCallbackHandler = struct {
            };
            // Parent: CPlayerControllerComponent
            // Field count: 9
            pub const CCSPlayerController_InventoryServices = struct {
                pub const m_vecNetworkableLoadout: usize = 0x40; // CUtlVector<CCSPlayerController_InventoryServices::NetworkedLoadoutSlot_t>
                pub const m_unMusicID: usize = 0x58; // uint16
                pub const m_rank: usize = 0x5C; // MedalRank_t[6]
                pub const m_nPersonaDataPublicLevel: usize = 0x74; // int32
                pub const m_nPersonaDataPublicCommendsLeader: usize = 0x78; // int32
                pub const m_nPersonaDataPublicCommendsTeacher: usize = 0x7C; // int32
                pub const m_nPersonaDataPublicCommendsFriendly: usize = 0x80; // int32
                pub const m_nPersonaDataXpTrailLevel: usize = 0x84; // int32
                pub const m_vecServerAuthoritativeWeaponSlots: usize = 0x88; // C_UtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
            };
            // Parent: None
            // Field count: 9
            pub const CCSPlayerModernJump = struct {
                pub const m_nLastActualJumpPressTick: usize = 0x10; // GameTick_t
                pub const m_flLastActualJumpPressFrac: usize = 0x14; // float32
                pub const m_nLastUsableJumpPressTick: usize = 0x18; // GameTick_t
                pub const m_flLastUsableJumpPressFrac: usize = 0x1C; // float32
                pub const m_nLastLandedTick: usize = 0x20; // GameTick_t
                pub const m_flLastLandedFrac: usize = 0x24; // float32
                pub const m_flLastLandedVelocityX: usize = 0x28; // float32
                pub const m_flLastLandedVelocityY: usize = 0x2C; // float32
                pub const m_flLastLandedVelocityZ: usize = 0x30; // float32
            };
            // Parent: None
            // Field count: 1
            pub const C_EconEntity__AttachedModelData_t = struct {
                pub const m_iModelDisplayFlags: usize = 0x0; // int32
            };
            // Parent: None
            // Field count: 0
            pub const CPulse_ResumePoint = struct {
            };
            // Parent: C_BaseTrigger
            // Field count: 9
            pub const CTriggerFan = struct {
                pub const m_vFanOriginOffset: usize = 0x1078; // Vector
                pub const m_vDirection: usize = 0x1084; // Vector
                pub const m_bPushTowardsInfoTarget: usize = 0x1090; // bool
                pub const m_bPushAwayFromInfoTarget: usize = 0x1091; // bool
                pub const m_qNoiseDelta: usize = 0x10A0; // Quaternion
                pub const m_hInfoFan: usize = 0x10B0; // CHandle<CInfoFan>
                pub const m_flForce: usize = 0x10B4; // float32
                pub const m_bFalloff: usize = 0x10B8; // bool
                pub const m_RampTimer: usize = 0x10C0; // CountdownTimer
            };
            // Parent: CBaseAnimGraph
            // Field count: 0
            pub const C_HostageCarriableProp = struct {
            };
            // Parent: None
            // Field count: 6
            pub const C_BulletHitModel = struct {
                pub const m_matLocal: usize = 0x1158; // matrix3x4_t
                pub const m_iBoneIndex: usize = 0x1188; // int32
                pub const m_hPlayerParent: usize = 0x118C; // CHandle<C_BaseEntity>
                pub const m_bIsHit: usize = 0x1190; // bool
                pub const m_flTimeCreated: usize = 0x1194; // float32
                pub const m_vecStartPos: usize = 0x1198; // Vector
            };
            // Parent: C_FuncBrush
            // Field count: 3
            pub const C_FuncElectrifiedVolume = struct {
                pub const m_nAmbientEffect: usize = 0xFA8; // ParticleIndex_t
                pub const m_EffectName: usize = 0xFB0; // CUtlSymbolLarge
                pub const m_bState: usize = 0xFB8; // bool
            };
            // Parent: C_BaseEntity
            // Field count: 17
            pub const C_MapVetoPickController = struct {
                pub const m_nDraftType: usize = 0x610; // int32
                pub const m_nTeamWinningCoinToss: usize = 0x614; // int32
                pub const m_nTeamWithFirstChoice: usize = 0x618; // int32[64]
                pub const m_nVoteMapIdsList: usize = 0x718; // int32[7]
                pub const m_nAccountIDs: usize = 0x734; // int32[64]
                pub const m_nMapId0: usize = 0x834; // int32[64]
                pub const m_nMapId1: usize = 0x934; // int32[64]
                pub const m_nMapId2: usize = 0xA34; // int32[64]
                pub const m_nMapId3: usize = 0xB34; // int32[64]
                pub const m_nMapId4: usize = 0xC34; // int32[64]
                pub const m_nMapId5: usize = 0xD34; // int32[64]
                pub const m_nStartingSide0: usize = 0xE34; // int32[64]
                pub const m_nCurrentPhase: usize = 0xF34; // int32
                pub const m_nPhaseStartTick: usize = 0xF38; // int32
                pub const m_nPhaseDurationTicks: usize = 0xF3C; // int32
                pub const m_nPostDataUpdateTick: usize = 0xF40; // int32
                pub const m_bDisabledHud: usize = 0xF44; // bool
            };
            // Parent: C_BaseEntity
            // Field count: 18
            pub const C_EnvVolumetricFogVolume = struct {
                pub const m_bActive: usize = 0x600; // bool
                pub const m_vBoxMins: usize = 0x604; // Vector
                pub const m_vBoxMaxs: usize = 0x610; // Vector
                pub const m_bStartDisabled: usize = 0x61C; // bool
                pub const m_bIndirectUseLPVs: usize = 0x61D; // bool
                pub const m_flStrength: usize = 0x620; // float32
                pub const m_nFalloffShape: usize = 0x624; // int32
                pub const m_flFalloffExponent: usize = 0x628; // float32
                pub const m_flHeightFogDepth: usize = 0x62C; // float32
                pub const m_fHeightFogEdgeWidth: usize = 0x630; // float32
                pub const m_fIndirectLightStrength: usize = 0x634; // float32
                pub const m_fSunLightStrength: usize = 0x638; // float32
                pub const m_fNoiseStrength: usize = 0x63C; // float32
                pub const m_TintColor: usize = 0x640; // Color
                pub const m_bOverrideTintColor: usize = 0x644; // bool
                pub const m_bOverrideIndirectLightStrength: usize = 0x645; // bool
                pub const m_bOverrideSunLightStrength: usize = 0x646; // bool
                pub const m_bOverrideNoiseStrength: usize = 0x647; // bool
            };
            // Parent: C_CSGO_TeamPreviewCharacterPosition
            // Field count: 0
            pub const C_CSGO_EndOfMatchCharacterPosition = struct {
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub const CPulseCell_PlaySequence = struct {
                pub const m_SequenceName: usize = 0x48; // CUtlString
                pub const m_PulseAnimEvents: usize = 0x50; // PulseNodeDynamicOutflows_t
                pub const m_OnFinished: usize = 0x68; // CPulse_ResumePoint
                pub const m_OnCanceled: usize = 0xB0; // CPulse_ResumePoint
            };
            // Parent: None
            // Field count: 0
            pub const C_BaseEntityAPI = struct {
            };
            // Parent: C_BaseModelEntity
            // Field count: 76
            pub const C_BarnLight = struct {
                pub const m_bEnabled: usize = 0xFA8; // bool
                pub const m_nColorMode: usize = 0xFAC; // int32
                pub const m_Color: usize = 0xFB0; // Color
                pub const m_flColorTemperature: usize = 0xFB4; // float32
                pub const m_flBrightness: usize = 0xFB8; // float32
                pub const m_flBrightnessScale: usize = 0xFBC; // float32
                pub const m_nDirectLight: usize = 0xFC0; // int32
                pub const m_nBakedShadowIndex: usize = 0xFC4; // int32
                pub const m_nLightPathUniqueId: usize = 0xFC8; // int32
                pub const m_nLightMapUniqueId: usize = 0xFCC; // int32
                pub const m_nLuminaireShape: usize = 0xFD0; // int32
                pub const m_flLuminaireSize: usize = 0xFD4; // float32
                pub const m_flLuminaireAnisotropy: usize = 0xFD8; // float32
                pub const m_LightStyleString: usize = 0xFE0; // CUtlString
                pub const m_flLightStyleStartTime: usize = 0xFE8; // GameTime_t
                pub const m_QueuedLightStyleStrings: usize = 0xFF0; // C_NetworkUtlVectorBase<CUtlString>
                pub const m_LightStyleEvents: usize = 0x1008; // C_NetworkUtlVectorBase<CUtlString>
                pub const m_LightStyleTargets: usize = 0x1020; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                pub const m_StyleEvent: usize = 0x1038; // CEntityIOOutput[4]
                pub const m_hLightCookie: usize = 0x1098; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_flShape: usize = 0x10A0; // float32
                pub const m_flSoftX: usize = 0x10A4; // float32
                pub const m_flSoftY: usize = 0x10A8; // float32
                pub const m_flSkirt: usize = 0x10AC; // float32
                pub const m_flSkirtNear: usize = 0x10B0; // float32
                pub const m_vSizeParams: usize = 0x10B4; // Vector
                pub const m_flRange: usize = 0x10C0; // float32
                pub const m_vShear: usize = 0x10C4; // Vector
                pub const m_nBakeSpecularToCubemaps: usize = 0x10D0; // int32
                pub const m_vBakeSpecularToCubemapsSize: usize = 0x10D4; // Vector
                pub const m_flBakeSpecularToCubemapsScale: usize = 0x10E0; // float32
                pub const m_nCastShadows: usize = 0x10E4; // int32
                pub const m_nShadowMapSize: usize = 0x10E8; // int32
                pub const m_nShadowPriority: usize = 0x10EC; // int32
                pub const m_bContactShadow: usize = 0x10F0; // bool
                pub const m_bForceShadowsEnabled: usize = 0x10F1; // bool
                pub const m_nBounceLight: usize = 0x10F4; // int32
                pub const m_flBounceScale: usize = 0x10F8; // float32
                pub const m_flMinRoughness: usize = 0x10FC; // float32
                pub const m_vAlternateColor: usize = 0x1100; // Vector
                pub const m_fAlternateColorBrightness: usize = 0x110C; // float32
                pub const m_nFog: usize = 0x1110; // int32
                pub const m_flFogStrength: usize = 0x1114; // float32
                pub const m_nFogShadows: usize = 0x1118; // int32
                pub const m_flFogScale: usize = 0x111C; // float32
                pub const m_flFadeSizeStart: usize = 0x1120; // float32
                pub const m_flFadeSizeEnd: usize = 0x1124; // float32
                pub const m_flShadowFadeSizeStart: usize = 0x1128; // float32
                pub const m_flShadowFadeSizeEnd: usize = 0x112C; // float32
                pub const m_bPrecomputedFieldsValid: usize = 0x1130; // bool
                pub const m_vPrecomputedBoundsMins: usize = 0x1134; // Vector
                pub const m_vPrecomputedBoundsMaxs: usize = 0x1140; // Vector
                pub const m_vPrecomputedOBBOrigin: usize = 0x114C; // Vector
                pub const m_vPrecomputedOBBAngles: usize = 0x1158; // QAngle
                pub const m_vPrecomputedOBBExtent: usize = 0x1164; // Vector
                pub const m_nPrecomputedSubFrusta: usize = 0x1170; // int32
                pub const m_vPrecomputedOBBOrigin0: usize = 0x1174; // Vector
                pub const m_vPrecomputedOBBAngles0: usize = 0x1180; // QAngle
                pub const m_vPrecomputedOBBExtent0: usize = 0x118C; // Vector
                pub const m_vPrecomputedOBBOrigin1: usize = 0x1198; // Vector
                pub const m_vPrecomputedOBBAngles1: usize = 0x11A4; // QAngle
                pub const m_vPrecomputedOBBExtent1: usize = 0x11B0; // Vector
                pub const m_vPrecomputedOBBOrigin2: usize = 0x11BC; // Vector
                pub const m_vPrecomputedOBBAngles2: usize = 0x11C8; // QAngle
                pub const m_vPrecomputedOBBExtent2: usize = 0x11D4; // Vector
                pub const m_vPrecomputedOBBOrigin3: usize = 0x11E0; // Vector
                pub const m_vPrecomputedOBBAngles3: usize = 0x11EC; // QAngle
                pub const m_vPrecomputedOBBExtent3: usize = 0x11F8; // Vector
                pub const m_vPrecomputedOBBOrigin4: usize = 0x1204; // Vector
                pub const m_vPrecomputedOBBAngles4: usize = 0x1210; // QAngle
                pub const m_vPrecomputedOBBExtent4: usize = 0x121C; // Vector
                pub const m_vPrecomputedOBBOrigin5: usize = 0x1228; // Vector
                pub const m_vPrecomputedOBBAngles5: usize = 0x1234; // QAngle
                pub const m_vPrecomputedOBBExtent5: usize = 0x1240; // Vector
                pub const m_bInitialBoneSetup: usize = 0x1290; // bool
                pub const m_VisClusters: usize = 0x1298; // C_NetworkUtlVectorBase<uint16>
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_LerpCameraSettings = struct {
                pub const m_flSeconds: usize = 0x90; // float32
                pub const m_Start: usize = 0x94; // PointCameraSettings_t
                pub const m_End: usize = 0xA4; // PointCameraSettings_t
            };
            // Parent: C_PointClientUIWorldPanel
            // Field count: 4
            pub const CPointOffScreenIndicatorUi = struct {
                pub const m_bBeenEnabled: usize = 0x1200; // bool
                pub const m_bHide: usize = 0x1201; // bool
                pub const m_flSeenTargetTime: usize = 0x1204; // float32
                pub const m_pTargetPanel: usize = 0x1208; // C_PointClientUIWorldPanel*
            };
            // Parent: CPlayer_UseServices
            // Field count: 0
            pub const CCSObserver_UseServices = struct {
            };
            // Parent: C_BaseTrigger
            // Field count: 12
            pub const C_PostProcessingVolume = struct {
                pub const m_hPostSettings: usize = 0x1088; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
                pub const m_flFadeDuration: usize = 0x1090; // float32
                pub const m_flMinLogExposure: usize = 0x1094; // float32
                pub const m_flMaxLogExposure: usize = 0x1098; // float32
                pub const m_flMinExposure: usize = 0x109C; // float32
                pub const m_flMaxExposure: usize = 0x10A0; // float32
                pub const m_flExposureCompensation: usize = 0x10A4; // float32
                pub const m_flExposureFadeSpeedUp: usize = 0x10A8; // float32
                pub const m_flExposureFadeSpeedDown: usize = 0x10AC; // float32
                pub const m_flTonemapEVSmoothingRange: usize = 0x10B0; // float32
                pub const m_bMaster: usize = 0x10B4; // bool
                pub const m_bExposureControl: usize = 0x10B5; // bool
            };
            // Parent: CPlayer_UseServices
            // Field count: 0
            pub const CCSPlayer_UseServices = struct {
            };
            // Parent: None
            // Field count: 5
            pub const C_BaseModelEntity__Emphasized_Phoneme = struct {
                pub const m_sClassName: usize = 0x0; // CUtlString
                pub const m_flAmount: usize = 0x18; // float32
                pub const m_bRequired: usize = 0x1C; // bool
                pub const m_bBasechecked: usize = 0x1D; // bool
                pub const m_bValid: usize = 0x1E; // bool
            };
            // Parent: C_CSGO_TeamPreviewCamera
            // Field count: 0
            pub const C_CSGO_CounterTerroristWingmanIntroCamera = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            pub const CPulseCell_PickBestOutflowSelector = struct {
                pub const m_nCheckType: usize = 0x48; // PulseBestOutflowRules_t
                pub const m_OutflowList: usize = 0x50; // PulseSelectorOutflowList_t
            };
            // Parent: C_PointEntity
            // Field count: 4
            pub const CInfoFan = struct {
                pub const m_fFanForceMaxRadius: usize = 0x640; // float32
                pub const m_fFanForceMinRadius: usize = 0x644; // float32
                pub const m_flCurveDistRange: usize = 0x648; // float32
                pub const m_FanForceCurveString: usize = 0x650; // CUtlSymbolLarge
            };
            // Parent: C_BaseEntity
            // Field count: 7
            pub const C_VoteController = struct {
                pub const m_iActiveIssueIndex: usize = 0x610; // int32
                pub const m_iOnlyTeamToVote: usize = 0x614; // int32
                pub const m_nVoteOptionCount: usize = 0x618; // int32[5]
                pub const m_nPotentialVotes: usize = 0x62C; // int32
                pub const m_bVotesDirty: usize = 0x630; // bool
                pub const m_bTypeDirty: usize = 0x631; // bool
                pub const m_bIsYesNoVote: usize = 0x632; // bool
            };
            // Parent: C_CSWeaponBase
            // Field count: 10
            pub const C_C4 = struct {
                pub const m_activeLightParticleIndex: usize = 0x1CB0; // ParticleIndex_t
                pub const m_eActiveLightEffect: usize = 0x1CB4; // C4LightEffect_t
                pub const m_bStartedArming: usize = 0x1CB8; // bool
                pub const m_fArmedTime: usize = 0x1CBC; // GameTime_t
                pub const m_bBombPlacedAnimation: usize = 0x1CC0; // bool
                pub const m_bIsPlantingViaUse: usize = 0x1CC1; // bool
                pub const m_entitySpottedState: usize = 0x1CC8; // EntitySpottedState_t
                pub const m_nSpotRules: usize = 0x1CE0; // int32
                pub const m_bPlayedArmingBeeps: usize = 0x1CE4; // bool[7]
                pub const m_bBombPlanted: usize = 0x1CEB; // bool
            };
            // Parent: C_BasePlayerPawn
            // Field count: 26
            pub const C_CSPlayerPawnBase = struct {
                pub const m_pPingServices: usize = 0x13C8; // CCSPlayer_PingServices*
                pub const m_previousPlayerState: usize = 0x13D0; // CSPlayerState
                pub const m_iPlayerState: usize = 0x13D4; // CSPlayerState
                pub const m_bHasMovedSinceSpawn: usize = 0x13D8; // bool
                pub const m_flLastSpawnTimeIndex: usize = 0x13DC; // GameTime_t
                pub const m_iProgressBarDuration: usize = 0x13E0; // int32
                pub const m_flProgressBarStartTime: usize = 0x13E4; // float32
                pub const m_flClientDeathTime: usize = 0x13E8; // GameTime_t
                pub const m_flFlashBangTime: usize = 0x13EC; // float32
                pub const m_flFlashScreenshotAlpha: usize = 0x13F0; // float32
                pub const m_flFlashOverlayAlpha: usize = 0x13F4; // float32
                pub const m_bFlashBuildUp: usize = 0x13F8; // bool
                pub const m_bFlashDspHasBeenCleared: usize = 0x13F9; // bool
                pub const m_bFlashScreenshotHasBeenGrabbed: usize = 0x13FA; // bool
                pub const m_flFlashMaxAlpha: usize = 0x13FC; // float32
                pub const m_flFlashDuration: usize = 0x1400; // float32
                pub const m_flClientHealthFadeChangeTimestamp: usize = 0x1404; // GameTime_t
                pub const m_nClientHealthFadeParityValue: usize = 0x1408; // int32
                pub const m_fNextThinkPushAway: usize = 0x140C; // float32
                pub const m_flCurrentMusicStartTime: usize = 0x1414; // float32
                pub const m_flMusicRoundStartTime: usize = 0x1418; // float32
                pub const m_bDeferStartMusicOnWarmup: usize = 0x141C; // bool
                pub const m_flLastSmokeOverlayAlpha: usize = 0x1420; // float32
                pub const m_flLastSmokeAge: usize = 0x1424; // float32
                pub const m_vLastSmokeOverlayColor: usize = 0x1428; // Vector
                pub const m_hOriginalController: usize = 0x1450; // CHandle<CCSPlayerController>
            };
            // Parent: CBaseProp
            // Field count: 29
            pub const C_BreakableProp = struct {
                pub const m_CPropDataComponent: usize = 0x1190; // CPropDataComponent
                pub const m_OnStartDeath: usize = 0x11D0; // CEntityIOOutput
                pub const m_OnBreak: usize = 0x11E8; // CEntityIOOutput
                pub const m_OnHealthChanged: usize = 0x1200; // CEntityOutputTemplate<float32>
                pub const m_OnTakeDamage: usize = 0x1220; // CEntityIOOutput
                pub const m_impactEnergyScale: usize = 0x1238; // float32
                pub const m_iMinHealthDmg: usize = 0x123C; // int32
                pub const m_flPressureDelay: usize = 0x1240; // float32
                pub const m_flDefBurstScale: usize = 0x1244; // float32
                pub const m_vDefBurstOffset: usize = 0x1248; // Vector
                pub const m_hBreaker: usize = 0x1254; // CHandle<C_BaseEntity>
                pub const m_PerformanceMode: usize = 0x1258; // PerformanceMode_t
                pub const m_flPreventDamageBeforeTime: usize = 0x125C; // GameTime_t
                pub const m_BreakableContentsType: usize = 0x1260; // BreakableContentsType_t
                pub const m_strBreakableContentsPropGroupOverride: usize = 0x1268; // CUtlString
                pub const m_strBreakableContentsParticleOverride: usize = 0x1270; // CUtlString
                pub const m_bHasBreakPiecesOrCommands: usize = 0x1278; // bool
                pub const m_explodeDamage: usize = 0x127C; // float32
                pub const m_explodeRadius: usize = 0x1280; // float32
                pub const m_sExplosionType: usize = 0x1288; // CGlobalSymbol
                pub const m_explosionDelay: usize = 0x1290; // float32
                pub const m_explosionBuildupSound: usize = 0x1298; // CUtlSymbolLarge
                pub const m_explosionCustomEffect: usize = 0x12A0; // CUtlSymbolLarge
                pub const m_explosionCustomSound: usize = 0x12A8; // CUtlSymbolLarge
                pub const m_explosionModifier: usize = 0x12B0; // CUtlSymbolLarge
                pub const m_hPhysicsAttacker: usize = 0x12B8; // CHandle<C_BasePlayerPawn>
                pub const m_flLastPhysicsInfluenceTime: usize = 0x12BC; // GameTime_t
                pub const m_flDefaultFadeScale: usize = 0x12C0; // float32
                pub const m_hLastAttacker: usize = 0x12C4; // CHandle<C_BaseEntity>
            };
            // Parent: CCSGO_WingmanIntroCharacterPosition
            // Field count: 0
            pub const CCSGO_WingmanIntroTerroristPosition = struct {
            };
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPrecipitationVData = struct {
                pub const m_szParticlePrecipitationEffect: usize = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                pub const m_flInnerDistance: usize = 0x108; // float32
                pub const m_nAttachType: usize = 0x10C; // ParticleAttachment_t
                pub const m_bBatchSameVolumeType: usize = 0x110; // bool
                pub const m_nRTEnvCP: usize = 0x114; // int32
                pub const m_nRTEnvCPComponent: usize = 0x118; // int32
                pub const m_szModifier: usize = 0x120; // CUtlString
                pub const m_nUseSnapshotFromSurfaceGraph: usize = 0x128; // int32
                pub const m_snapshotFilter: usize = 0x12C; // PrecipitationFilter_t
            };
            // Parent: None
            // Field count: 6
            pub const C_RetakeGameRules = struct {
                pub const m_nMatchSeed: usize = 0x138; // int32
                pub const m_bBlockersPresent: usize = 0x13C; // bool
                pub const m_bRoundInProgress: usize = 0x13D; // bool
                pub const m_iFirstSecondHalfRound: usize = 0x140; // int32
                pub const m_iBombSite: usize = 0x144; // int32
                pub const m_hBombPlanter: usize = 0x148; // CHandle<C_CSPlayerPawn>
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            // MPropertyFriendlyName
            // MPropertyDescription
            pub const CPulseCell_WaitForObservable = struct {
                pub const m_Condition: usize = 0x48; // PulseObservableBoolExpression_t
                pub const m_OnTrue: usize = 0xC0; // CPulse_ResumePoint
            };
            // Parent: C_SoundAreaEntityBase
            // Field count: 1
            pub const C_SoundAreaEntitySphere = struct {
                pub const m_flRadius: usize = 0x628; // float32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Step_EntFire = struct {
                pub const m_Input: usize = 0x48; // CUtlString
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub const C_WeaponAWP = struct {
            };
            // Parent: C_BaseToggle
            // Field count: 3
            pub const C_BaseButton = struct {
                pub const m_glowEntity: usize = 0xFA8; // CHandle<C_BaseModelEntity>
                pub const m_usable: usize = 0xFAC; // bool
                pub const m_szDisplayText: usize = 0xFB0; // CUtlSymbolLarge
            };
            // Parent: CPlayer_ObserverServices
            // Field count: 1
            pub const CCSObserver_ObserverServices = struct {
                pub const m_obsInterpState: usize = 0x64; // ObserverInterpState_t
            };
            // Parent: CEntityComponent
            // Field count: 1
            pub const CHitboxComponent = struct {
                pub const m_flBoundsExpandRadius: usize = 0x14; // float32
            };
            // Parent: None
            // Field count: 3
            pub const ServerAuthoritativeWeaponSlot_t = struct {
                pub const unClass: usize = 0x30; // uint16
                pub const unSlot: usize = 0x32; // uint16
                pub const unItemDefIdx: usize = 0x34; // uint16
            };
            // Parent: C_BaseEntity
            // Field count: 0
            pub const C_CSMinimapBoundary = struct {
            };
            // Parent: CEntityComponent
            // Field count: 0
            pub const CPathQueryComponent = struct {
            };
            // Parent: C_BaseTrigger
            // Field count: 8
            pub const C_Precipitation = struct {
                pub const m_flDensity: usize = 0x1078; // float32
                pub const m_flParticleInnerDist: usize = 0x1088; // float32
                pub const m_pParticleDef: usize = 0x1090; // char*
                pub const m_tParticlePrecipTraceTimer: usize = 0x109C; // TimedEvent[1]
                pub const m_bActiveParticlePrecipEmitter: usize = 0x10A4; // bool[1]
                pub const m_bParticlePrecipInitialized: usize = 0x10A5; // bool
                pub const m_bHasSimulatedSinceLastSceneObjectUpdate: usize = 0x10A6; // bool
                pub const m_nAvailableSheetSequencesMaxIndex: usize = 0x10A8; // int32
            };
            // Parent: CLogicalEntity
            // Field count: 7
            pub const CLogicRelay = struct {
                pub const m_OnSpawn: usize = 0x600; // CEntityIOOutput
                pub const m_OnTrigger: usize = 0x618; // CEntityIOOutput
                pub const m_bDisabled: usize = 0x630; // bool
                pub const m_bWaitForRefire: usize = 0x631; // bool
                pub const m_bTriggerOnce: usize = 0x632; // bool
                pub const m_bFastRetrigger: usize = 0x633; // bool
                pub const m_bPassthoughCaller: usize = 0x634; // bool
            };
            // Parent: None
            // Field count: 6
            pub const SequenceHistory_t = struct {
                pub const m_hSequence: usize = 0x0; // HSequence
                pub const m_flSeqStartTime: usize = 0x4; // GameTime_t
                pub const m_flSeqFixedCycle: usize = 0x8; // float32
                pub const m_nSeqLoopMode: usize = 0xC; // AnimLoopMode_t
                pub const m_flPlaybackRate: usize = 0x10; // float32
                pub const m_flCyclesPerSecond: usize = 0x14; // float32
            };
            // Parent: CPlayerPawnComponent
            // Field count: 0
            pub const CPlayer_ItemServices = struct {
            };
            // Parent: None
            // Field count: 4
            pub const CPulse_OutflowConnection = struct {
                pub const m_SourceOutflowName: usize = 0x0; // PulseSymbol_t
                pub const m_nDestChunk: usize = 0x10; // PulseRuntimeChunkIndex_t
                pub const m_nInstruction: usize = 0x14; // int32
                pub const m_OutflowRegisterMap: usize = 0x18; // PulseRegisterMap_t
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub const C_WeaponUMP45 = struct {
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub const C_WeaponG3SG1 = struct {
            };
            // Parent: C_BaseModelEntity
            // Field count: 2
            pub const C_SpotlightEnd = struct {
                pub const m_flLightScale: usize = 0xFA8; // float32
                pub const m_Radius: usize = 0xFAC; // float32
            };
            // Parent: CBaseAnimGraph
            // Field count: 23
            pub const C_Fish = struct {
                pub const m_pos: usize = 0x1158; // Vector
                pub const m_vel: usize = 0x1164; // Vector
                pub const m_angles: usize = 0x1170; // QAngle
                pub const m_localLifeState: usize = 0x117C; // int32
                pub const m_deathDepth: usize = 0x1180; // float32
                pub const m_deathAngle: usize = 0x1184; // float32
                pub const m_buoyancy: usize = 0x1188; // float32
                pub const m_wiggleTimer: usize = 0x1190; // CountdownTimer
                pub const m_wigglePhase: usize = 0x11A8; // float32
                pub const m_wiggleRate: usize = 0x11AC; // float32
                pub const m_actualPos: usize = 0x11B0; // Vector
                pub const m_actualAngles: usize = 0x11BC; // QAngle
                pub const m_poolOrigin: usize = 0x11C8; // Vector
                pub const m_waterLevel: usize = 0x11D4; // float32
                pub const m_gotUpdate: usize = 0x11D8; // bool
                pub const m_x: usize = 0x11DC; // float32
                pub const m_y: usize = 0x11E0; // float32
                pub const m_z: usize = 0x11E4; // float32
                pub const m_angle: usize = 0x11E8; // float32
                pub const m_errorHistory: usize = 0x11EC; // float32[20]
                pub const m_errorHistoryIndex: usize = 0x123C; // int32
                pub const m_errorHistoryCount: usize = 0x1240; // int32
                pub const m_averageError: usize = 0x1244; // float32
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub const C_WeaponFamas = struct {
            };
            // Parent: C_BaseEntity
            // Field count: 36
            pub const C_EnvVolumetricFogController = struct {
                pub const m_flScattering: usize = 0x600; // float32
                pub const m_TintColor: usize = 0x604; // Color
                pub const m_flAnisotropy: usize = 0x608; // float32
                pub const m_flFadeSpeed: usize = 0x60C; // float32
                pub const m_flDrawDistance: usize = 0x610; // float32
                pub const m_flFadeInStart: usize = 0x614; // float32
                pub const m_flFadeInEnd: usize = 0x618; // float32
                pub const m_flIndirectStrength: usize = 0x61C; // float32
                pub const m_nVolumeDepth: usize = 0x620; // int32
                pub const m_fFirstVolumeSliceThickness: usize = 0x624; // float32
                pub const m_nIndirectTextureDimX: usize = 0x628; // int32
                pub const m_nIndirectTextureDimY: usize = 0x62C; // int32
                pub const m_nIndirectTextureDimZ: usize = 0x630; // int32
                pub const m_vBoxMins: usize = 0x634; // Vector
                pub const m_vBoxMaxs: usize = 0x640; // Vector
                pub const m_bActive: usize = 0x64C; // bool
                pub const m_flStartAnisoTime: usize = 0x650; // GameTime_t
                pub const m_flStartScatterTime: usize = 0x654; // GameTime_t
                pub const m_flStartDrawDistanceTime: usize = 0x658; // GameTime_t
                pub const m_flStartAnisotropy: usize = 0x65C; // float32
                pub const m_flStartScattering: usize = 0x660; // float32
                pub const m_flStartDrawDistance: usize = 0x664; // float32
                pub const m_flDefaultAnisotropy: usize = 0x668; // float32
                pub const m_flDefaultScattering: usize = 0x66C; // float32
                pub const m_flDefaultDrawDistance: usize = 0x670; // float32
                pub const m_bStartDisabled: usize = 0x674; // bool
                pub const m_bEnableIndirect: usize = 0x675; // bool
                pub const m_bIsMaster: usize = 0x676; // bool
                pub const m_hFogIndirectTexture: usize = 0x678; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_nForceRefreshCount: usize = 0x680; // int32
                pub const m_fNoiseSpeed: usize = 0x684; // float32
                pub const m_fNoiseStrength: usize = 0x688; // float32
                pub const m_vNoiseScale: usize = 0x68C; // Vector
                pub const m_fWindSpeed: usize = 0x698; // float32
                pub const m_vWindDirection: usize = 0x69C; // Vector
                pub const m_bFirstTime: usize = 0x6A8; // bool
            };
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseGraphDef = struct {
                pub const m_DomainIdentifier: usize = 0x8; // PulseSymbol_t
                pub const m_DomainSubType: usize = 0x18; // CPulseValueFullType
                pub const m_ParentMapName: usize = 0x30; // PulseSymbol_t
                pub const m_ParentXmlName: usize = 0x40; // PulseSymbol_t
                pub const m_Chunks: usize = 0x50; // CUtlVector<CPulse_Chunk*>
                pub const m_Cells: usize = 0x68; // CUtlVector<CPulseCell_Base*>
                pub const m_Vars: usize = 0x80; // CUtlVector<CPulse_Variable>
                pub const m_PublicOutputs: usize = 0x98; // CUtlVector<CPulse_PublicOutput>
                pub const m_InvokeBindings: usize = 0xB0; // CUtlVector<CPulse_InvokeBinding*>
                pub const m_CallInfos: usize = 0xC8; // CUtlVector<CPulse_CallInfo*>
                pub const m_Constants: usize = 0xE0; // CUtlVector<CPulse_Constant>
                pub const m_DomainValues: usize = 0xF8; // CUtlVector<CPulse_DomainValue>
                pub const m_BlackboardReferences: usize = 0x110; // CUtlVector<CPulse_BlackboardReference>
                pub const m_OutputConnections: usize = 0x128; // CUtlVector<CPulse_OutputConnection*>
            };
            // Parent: C_BaseEntity
            // Field count: 2
            pub const C_EnvDetailController = struct {
                pub const m_flFadeStartDist: usize = 0x600; // float32
                pub const m_flFadeEndDist: usize = 0x604; // float32
            };
            // Parent: C_BaseEntity
            // Field count: 9
            pub const C_EnvWindVolume = struct {
                pub const m_bActive: usize = 0x600; // bool
                pub const m_vBoxMins: usize = 0x604; // Vector
                pub const m_vBoxMaxs: usize = 0x610; // Vector
                pub const m_bStartDisabled: usize = 0x61C; // bool
                pub const m_nShape: usize = 0x620; // int32
                pub const m_fWindSpeedMultiplier: usize = 0x624; // float32
                pub const m_fWindTurbulenceMultiplier: usize = 0x628; // float32
                pub const m_fWindSpeedVariationMultiplier: usize = 0x62C; // float32
                pub const m_fWindDirectionVariationMultiplier: usize = 0x630; // float32
            };
            // Parent: None
            // Field count: 0
            pub const CBasePlayerControllerAPI = struct {
            };
            // Parent: C_BaseTrigger
            // Field count: 0
            pub const CHostageRescueZoneShim = struct {
            };
            // Parent: CEnvSoundscape
            // Field count: 0
            pub const CEnvSoundscapeAlias_snd_soundscape = struct {
            };
            // Parent: CPlayerPawnComponent
            // Field count: 2
            pub const CCSPlayer_HostageServices = struct {
                pub const m_hCarriedHostage: usize = 0x48; // CHandle<C_BaseEntity>
                pub const m_hCarriedHostageProp: usize = 0x4C; // CHandle<C_BaseEntity>
            };
            // Parent: C_BaseEntity
            // Field count: 0
            pub const C_GameRulesProxy = struct {
            };
            // Parent: CEntityComponent
            // Field count: 5
            pub const CRenderComponent = struct {
                pub const __m_pChainEntity: usize = 0x10; // CNetworkVarChainer
                pub const m_bIsRenderingWithViewModels: usize = 0x50; // bool
                pub const m_nSplitscreenFlags: usize = 0x54; // uint32
                pub const m_bEnableRendering: usize = 0x58; // bool
                pub const m_bInterpolationReadyToDraw: usize = 0xA8; // bool
            };
            // Parent: C_BaseEntity
            // Field count: 4
            pub const C_Team = struct {
                pub const m_aPlayerControllers: usize = 0x600; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
                pub const m_aPlayers: usize = 0x618; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
                pub const m_iScore: usize = 0x630; // int32
                pub const m_szTeamname: usize = 0x634; // char[129]
            };
            // Parent: C_PathParticleRope
            // Field count: 0
            pub const C_PathParticleRopeAlias_path_particle_rope_clientside = struct {
            };
            // Parent: C_PointEntity
            // Field count: 1
            pub const CPointChildModifier = struct {
                pub const m_bOrphanInsteadOfDeletingChildrenOnRemove: usize = 0x600; // bool
            };
            // Parent: None
            // Field count: 2
            pub const CCSPlayerLegacyJump = struct {
                pub const m_bOldJumpPressed: usize = 0x10; // bool
                pub const m_flJumpPressedTime: usize = 0x14; // float32
            };
            // Parent: C_CSWeaponBaseShotgun
            // Field count: 0
            pub const C_WeaponNOVA = struct {
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub const C_DEagle = struct {
            };
            // Parent: C_LateUpdatedAnimating
            // Field count: 0
            pub const C_CS2HudModelAddon = struct {
            };
            // Parent: C_BaseTrigger
            // Field count: 0
            pub const C_TriggerMultiple = struct {
            };
            // Parent: C_CSGO_MapPreviewCameraPath
            // Field count: 1
            pub const C_CSGO_TeamPreviewCamera = struct {
                pub const m_nVariant: usize = 0x688; // int32
            };
            // Parent: C_BaseTrigger
            // Field count: 9
            pub const C_ColorCorrectionVolume = struct {
                pub const m_LastEnterWeight: usize = 0x1078; // float32
                pub const m_LastEnterTime: usize = 0x107C; // GameTime_t
                pub const m_LastExitWeight: usize = 0x1080; // float32
                pub const m_LastExitTime: usize = 0x1084; // GameTime_t
                pub const m_bEnabled: usize = 0x1088; // bool
                pub const m_MaxWeight: usize = 0x108C; // float32
                pub const m_FadeDuration: usize = 0x1090; // float32
                pub const m_Weight: usize = 0x1094; // float32
                pub const m_lookupFilename: usize = 0x1098; // char[512]
            };
            // Parent: CPlayerPawnComponent
            // Field count: 18
            pub const CPlayer_MovementServices = struct {
                pub const m_nImpulse: usize = 0x48; // int32
                pub const m_nButtons: usize = 0x50; // CInButtonState
                pub const m_nQueuedButtonDownMask: usize = 0x70; // uint64
                pub const m_nQueuedButtonChangeMask: usize = 0x78; // uint64
                pub const m_nButtonDoublePressed: usize = 0x80; // uint64
                pub const m_pButtonPressedCmdNumber: usize = 0x88; // uint32[64]
                pub const m_nLastCommandNumberProcessed: usize = 0x188; // uint32
                pub const m_nToggleButtonDownMask: usize = 0x190; // uint64
                pub const m_flCmdForwardMove: usize = 0x1A0; // float32
                pub const m_flCmdLeftMove: usize = 0x1A4; // float32
                pub const m_flCmdUpMove: usize = 0x1A8; // float32
                pub const m_flMaxspeed: usize = 0x1AC; // float32
                pub const m_arrForceSubtickMoveWhen: usize = 0x1B0; // float32[4]
                pub const m_flForwardMove: usize = 0x1C0; // float32
                pub const m_flLeftMove: usize = 0x1C4; // float32
                pub const m_flUpMove: usize = 0x1C8; // float32
                pub const m_vecLastMovementImpulses: usize = 0x1CC; // Vector
                pub const m_vecOldViewAngles: usize = 0x240; // QAngle
            };
            // Parent: CInfoDynamicShadowHint
            // Field count: 2
            pub const CInfoDynamicShadowHintBox = struct {
                pub const m_vBoxMins: usize = 0x618; // Vector
                pub const m_vBoxMaxs: usize = 0x624; // Vector
            };
            // Parent: CSkeletonAnimationController
            // Field count: 32
            pub const CBaseAnimGraphController = struct {
                pub const m_nAnimationAlgorithm: usize = 0x18; // AnimationAlgorithm_t
                pub const m_nNextExternalGraphHandle: usize = 0x1C; // ExternalAnimGraphHandle_t
                pub const m_vecSecondarySkeletonSlotIDs: usize = 0x20; // C_NetworkUtlVectorBase<CGlobalSymbol>
                pub const m_vecSecondarySkeletons: usize = 0x38; // C_NetworkUtlVectorBase<CHandle<CBaseAnimGraph>>
                pub const m_nSecondarySkeletonMasterCount: usize = 0x50; // int32
                pub const m_flSoundSyncTime: usize = 0x58; // float32
                pub const m_nActiveIKChainMask: usize = 0x5C; // uint32
                pub const m_hSequence: usize = 0xB0; // HSequence
                pub const m_flSeqStartTime: usize = 0xB4; // GameTime_t
                pub const m_flSeqFixedCycle: usize = 0xB8; // float32
                pub const m_nAnimLoopMode: usize = 0xBC; // AnimLoopMode_t
                pub const m_flPlaybackRate: usize = 0xC0; // CNetworkedQuantizedFloat
                pub const m_nNotifyState: usize = 0xCC; // SequenceFinishNotifyState_t
                pub const m_bNetworkedAnimationInputsChanged: usize = 0xCD; // bool
                pub const m_bNetworkedSequenceChanged: usize = 0xCE; // bool
                pub const m_bLastUpdateSkipped: usize = 0xCF; // bool
                pub const m_bSequenceFinished: usize = 0xD0; // bool
                pub const m_nPrevAnimUpdateTick: usize = 0xD4; // GameTick_t
                pub const m_hGraphDefinitionAG2: usize = 0x370; // CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
                pub const m_SerializePoseRecipeAG2Slots: usize = 0x378; // C_UtlVectorEmbeddedNetworkVar<AnimGraph2SerializedPoseRecipeSlot_t>
                pub const m_SerializePoseRecipeAG2Dynamic: usize = 0x3E0; // C_NetworkUtlVectorBase<uint8>
                pub const m_nSerializePoseRecipeAG2ActiveSlot: usize = 0x3F8; // uint32
                pub const m_nSerializePoseRecipeVersionAG2: usize = 0x3FC; // int32
                pub const m_nServerGraphInstanceIteration: usize = 0x400; // int32
                pub const m_nServerSerializationContextIteration: usize = 0x404; // int32
                pub const m_primaryGraphId: usize = 0x408; // ResourceId_t
                pub const m_vecExternalGraphIds: usize = 0x410; // C_NetworkUtlVectorBase<ResourceId_t>
                pub const m_vecExternalClipIds: usize = 0x428; // C_NetworkUtlVectorBase<ResourceId_t>
                pub const m_sAnimGraph2Identifier: usize = 0x440; // CGlobalSymbol
                pub const m_pGraphInstanceAG2: usize = 0x448; // CNmGraphInstance*
                pub const m_vecExternalGraphs: usize = 0x660; // CUtlVector<ExternalAnimGraph_t>
                pub const m_nPrevAnimationAlgorithm: usize = 0x689; // AnimationAlgorithm_t
            };
            // Parent: C_BaseEntity
            // Field count: 18
            pub const C_ColorCorrection = struct {
                pub const m_vecOrigin: usize = 0x600; // Vector
                pub const m_MinFalloff: usize = 0x60C; // float32
                pub const m_MaxFalloff: usize = 0x610; // float32
                pub const m_flFadeInDuration: usize = 0x614; // float32
                pub const m_flFadeOutDuration: usize = 0x618; // float32
                pub const m_flMaxWeight: usize = 0x61C; // float32
                pub const m_flCurWeight: usize = 0x620; // float32
                pub const m_netlookupFilename: usize = 0x624; // char[512]
                pub const m_bEnabled: usize = 0x824; // bool
                pub const m_bMaster: usize = 0x825; // bool
                pub const m_bClientSide: usize = 0x826; // bool
                pub const m_bExclusive: usize = 0x827; // bool
                pub const m_bEnabledOnClient: usize = 0x828; // bool[1]
                pub const m_flCurWeightOnClient: usize = 0x82C; // float32[1]
                pub const m_bFadingIn: usize = 0x830; // bool[1]
                pub const m_flFadeStartWeight: usize = 0x834; // float32[1]
                pub const m_flFadeStartTime: usize = 0x838; // float32[1]
                pub const m_flFadeDuration: usize = 0x83C; // float32[1]
            };
            // Parent: None
            // Field count: 1
            pub const AnimGraph2SerializedPoseRecipeSlot_t = struct {
                pub const m_topology: usize = 0x30; // CUtlBinaryBlock
            };
            // Parent: None
            // Field count: 11
            pub const CBuoyancyHelper = struct {
                pub const m_pController: usize = 0x8; // IPhysicsMotionController*
                pub const m_nFluidType: usize = 0x18; // CUtlStringToken
                pub const m_flFluidDensity: usize = 0x1C; // float32
                pub const m_flNeutrallyBuoyantGravity: usize = 0x20; // float32
                pub const m_flNeutrallyBuoyantLinearDamping: usize = 0x24; // float32
                pub const m_flNeutrallyBuoyantAngularDamping: usize = 0x28; // float32
                pub const m_bNeutrallyBuoyant: usize = 0x2C; // bool
                pub const m_vecFractionOfWheelSubmergedForWheelFriction: usize = 0x30; // CUtlVector<float32>
                pub const m_vecWheelFrictionScales: usize = 0x48; // CUtlVector<float32>
                pub const m_vecFractionOfWheelSubmergedForWheelDrag: usize = 0x60; // CUtlVector<float32>
                pub const m_vecWheelDrag: usize = 0x78; // CUtlVector<float32>
            };
            // Parent: C_Breakable
            // Field count: 0
            pub const C_PhysBox = struct {
            };
            // Parent: CCSPlayerBase_CameraServices
            // Field count: 2
            pub const CCSPlayer_CameraServices = struct {
                pub const m_flDeathCamTilt: usize = 0x2A8; // float32
                pub const m_vClientScopeInaccuracy: usize = 0x2B0; // Vector
            };
            // Parent: CBaseFilter
            // Field count: 3
            pub const CFilterMultiple = struct {
                pub const m_nFilterType: usize = 0x638; // filter_t
                pub const m_iFilterName: usize = 0x640; // CUtlSymbolLarge[10]
                pub const m_hFilter: usize = 0x690; // CHandle<C_BaseEntity>[10]
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_FireCursors = struct {
                pub const m_Outflows: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
                pub const m_bWaitForChildOutflows: usize = 0x60; // bool
                pub const m_OnFinished: usize = 0x68; // CPulse_ResumePoint
                pub const m_OnCanceled: usize = 0xB0; // CPulse_ResumePoint
            };
            // Parent: C_BaseEntity
            // Field count: 11
            pub const CEnvSoundscape = struct {
                pub const m_OnPlay: usize = 0x600; // CEntityIOOutput
                pub const m_flRadius: usize = 0x618; // float32
                pub const m_soundEventName: usize = 0x620; // CUtlSymbolLarge
                pub const m_bOverrideWithEvent: usize = 0x628; // bool
                pub const m_soundscapeIndex: usize = 0x62C; // int32
                pub const m_soundscapeEntityListId: usize = 0x630; // int32
                pub const m_positionNames: usize = 0x638; // CUtlSymbolLarge[8]
                pub const m_hProxySoundscape: usize = 0x678; // CHandle<CEnvSoundscape>
                pub const m_bDisabled: usize = 0x67C; // bool
                pub const m_soundscapeName: usize = 0x680; // CUtlSymbolLarge
                pub const m_soundEventHash: usize = 0x688; // uint32
            };
            // Parent: C_SoundEventEntity
            // Field count: 0
            pub const C_SoundEventEntityAlias_snd_event_point = struct {
            };
            // Parent: C_BaseEntity
            // Field count: 3
            pub const C_FogController = struct {
                pub const m_fog: usize = 0x600; // fogparams_t
                pub const m_bUseAngles: usize = 0x668; // bool
                pub const m_iChangedVariables: usize = 0x66C; // int32
            };
            // Parent: C_SoundOpvarSetPointBase
            // Field count: 0
            pub const C_SoundOpvarSetOBBWindEntity = struct {
            };
            // Parent: C_BaseCSGrenade
            // Field count: 0
            pub const C_MolotovGrenade = struct {
            };
            // Parent: C_BaseCombatCharacter
            // Field count: 0
            pub const C_NetTestBaseCombatCharacter = struct {
            };
            // Parent: CBodyComponent
            // Field count: 1
            pub const CBodyComponentPoint = struct {
                pub const m_sceneNode: usize = 0x80; // CGameSceneNode
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub const C_WeaponM4A1Silencer = struct {
            };
            // Parent: None
            // Field count: 29
            pub const C_EconItemView = struct {
                pub const m_bInventoryImageRgbaRequested: usize = 0x60; // bool
                pub const m_bInventoryImageTriedCache: usize = 0x61; // bool
                pub const m_nInventoryImageRgbaWidth: usize = 0x80; // int32
                pub const m_nInventoryImageRgbaHeight: usize = 0x84; // int32
                pub const m_szCurrentLoadCachedFileName: usize = 0x88; // char[260]
                pub const m_bRestoreCustomMaterialAfterPrecache: usize = 0x1B8; // bool
                pub const m_iItemDefinitionIndex: usize = 0x1BA; // uint16
                pub const m_iEntityQuality: usize = 0x1BC; // int32
                pub const m_iEntityLevel: usize = 0x1C0; // uint32
                pub const m_iItemID: usize = 0x1C8; // uint64
                pub const m_iItemIDHigh: usize = 0x1D0; // uint32
                pub const m_iItemIDLow: usize = 0x1D4; // uint32
                pub const m_iAccountID: usize = 0x1D8; // uint32
                pub const m_iInventoryPosition: usize = 0x1DC; // uint32
                pub const m_bInitialized: usize = 0x1E8; // bool
                pub const m_bDisallowSOC: usize = 0x1E9; // bool
                pub const m_bIsStoreItem: usize = 0x1EA; // bool
                pub const m_bIsTradeItem: usize = 0x1EB; // bool
                pub const m_iEntityQuantity: usize = 0x1EC; // int32
                pub const m_iRarityOverride: usize = 0x1F0; // int32
                pub const m_iQualityOverride: usize = 0x1F4; // int32
                pub const m_iOriginOverride: usize = 0x1F8; // int32
                pub const m_ubStyleOverride: usize = 0x1FC; // uint8
                pub const m_unClientFlags: usize = 0x1FD; // uint8
                pub const m_AttributeList: usize = 0x208; // CAttributeList
                pub const m_NetworkedDynamicAttributes: usize = 0x280; // CAttributeList
                pub const m_szCustomName: usize = 0x2F8; // char[161]
                pub const m_szCustomNameOverride: usize = 0x399; // char[161]
                pub const m_bInitializedTags: usize = 0x468; // bool
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Timeline__TimelineEvent_t = struct {
                pub const m_flTimeFromPrevious: usize = 0x0; // float32
                pub const m_EventOutflow: usize = 0x8; // CPulse_OutflowConnection
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_IntervalTimer__CursorState_t = struct {
                pub const m_StartTime: usize = 0x0; // GameTime_t
                pub const m_EndTime: usize = 0x4; // GameTime_t
                pub const m_flWaitInterval: usize = 0x8; // float32
                pub const m_flWaitIntervalHigh: usize = 0xC; // float32
                pub const m_bCompleteOnNextWake: usize = 0x10; // bool
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_BaseRequirement = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            pub const CPulseCell_BaseState = struct {
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const OutflowWithRequirements_t = struct {
                pub const m_Connection: usize = 0x0; // CPulse_OutflowConnection
                pub const m_DestinationFlowNodeID: usize = 0x48; // PulseDocNodeID_t
                pub const m_RequirementNodeIDs: usize = 0x50; // CUtlVector<PulseDocNodeID_t>
                pub const m_nCursorStateBlockIndex: usize = 0x68; // CUtlVector<int32>
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_IsRequirementValid = struct {
            };
            // Parent: C_SoundEventEntity
            // Field count: 1
            pub const C_SoundEventPathCornerEntity = struct {
                pub const m_vecCornerPairsNetworked: usize = 0x6C0; // C_NetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
            };
            // Parent: C_BaseEntity
            // Field count: 3
            pub const C_InfoVisibilityBox = struct {
                pub const m_nMode: usize = 0x604; // int32
                pub const m_vBoxSize: usize = 0x608; // Vector
                pub const m_bEnabled: usize = 0x614; // bool
            };
            // Parent: CPlayer_ItemServices
            // Field count: 2
            pub const CCSPlayer_ItemServices = struct {
                pub const m_bHasDefuser: usize = 0x48; // bool
                pub const m_bHasHelmet: usize = 0x49; // bool
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CPulseCell_Value_Gradient = struct {
                pub const m_Gradient: usize = 0x48; // CColorGradient
            };
            // Parent: None
            // Field count: 2
            pub const IntervalTimer = struct {
                pub const m_timestamp: usize = 0x8; // GameTime_t
                pub const m_nWorldGroupId: usize = 0xC; // WorldGroupId_t
            };
            // Parent: None
            // Field count: 5
            pub const audioparams_t = struct {
                pub const localSound: usize = 0x8; // Vector[8]
                pub const soundscapeIndex: usize = 0x68; // int32
                pub const localBits: usize = 0x6C; // uint8
                pub const soundscapeEntityListIndex: usize = 0x70; // int32
                pub const soundEventHash: usize = 0x74; // uint32
            };
            // Parent: C_BaseEntity
            // Field count: 16
            pub const C_PathParticleRope = struct {
                pub const m_bStartActive: usize = 0x608; // bool
                pub const m_flMaxSimulationTime: usize = 0x60C; // float32
                pub const m_iszEffectName: usize = 0x610; // CUtlSymbolLarge
                pub const m_PathNodes_Name: usize = 0x618; // CUtlVector<CUtlSymbolLarge>
                pub const m_flParticleSpacing: usize = 0x630; // float32
                pub const m_flSlack: usize = 0x634; // float32
                pub const m_flRadius: usize = 0x638; // float32
                pub const m_ColorTint: usize = 0x63C; // Color
                pub const m_nEffectState: usize = 0x640; // int32
                pub const m_iEffectIndex: usize = 0x648; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_PathNodes_Position: usize = 0x650; // C_NetworkUtlVectorBase<Vector>
                pub const m_PathNodes_TangentIn: usize = 0x668; // C_NetworkUtlVectorBase<Vector>
                pub const m_PathNodes_TangentOut: usize = 0x680; // C_NetworkUtlVectorBase<Vector>
                pub const m_PathNodes_Color: usize = 0x698; // C_NetworkUtlVectorBase<Vector>
                pub const m_PathNodes_PinEnabled: usize = 0x6B0; // C_NetworkUtlVectorBase<bool>
                pub const m_PathNodes_RadiusScale: usize = 0x6C8; // C_NetworkUtlVectorBase<float32>
            };
            // Parent: C_BaseCSGrenadeProjectile
            // Field count: 3
            pub const C_DecoyProjectile = struct {
                pub const m_nDecoyShotTick: usize = 0x1238; // int32
                pub const m_nClientLastKnownDecoyShotTick: usize = 0x123C; // int32
                pub const m_flTimeParticleEffectSpawn: usize = 0x1260; // GameTime_t
            };
            // Parent: CAttributeManager
            // Field count: 3
            pub const C_AttributeContainer = struct {
                pub const m_Item: usize = 0x50; // C_EconItemView
                pub const m_iExternalItemProviderRegisteredToken: usize = 0x4C0; // int32
                pub const m_ullRegisteredAsItemID: usize = 0x4C8; // uint64
            };
            // Parent: C_BasePlayerWeapon
            // Field count: 53
            pub const C_CSWeaponBase = struct {
                pub const m_iWeaponGameplayAnimState: usize = 0x1758; // WeaponGameplayAnimState
                pub const m_flWeaponGameplayAnimStateTimestamp: usize = 0x175C; // GameTime_t
                pub const m_flInspectCancelCompleteTime: usize = 0x1760; // GameTime_t
                pub const m_bInspectPending: usize = 0x1764; // bool
                pub const m_bInspectShouldLoop: usize = 0x1765; // bool
                pub const m_flCrosshairDistance: usize = 0x1790; // float32
                pub const m_iAmmoLastCheck: usize = 0x1794; // int32
                pub const m_nLastEmptySoundCmdNum: usize = 0x1798; // int32
                pub const m_bFireOnEmpty: usize = 0x179C; // bool
                pub const m_OnPlayerPickup: usize = 0x17A0; // CEntityIOOutput
                pub const m_weaponMode: usize = 0x17B8; // CSWeaponMode
                pub const m_flTurningInaccuracyDelta: usize = 0x17BC; // float32
                pub const m_vecTurningInaccuracyEyeDirLast: usize = 0x17C0; // Vector
                pub const m_flTurningInaccuracy: usize = 0x17CC; // float32
                pub const m_fAccuracyPenalty: usize = 0x17D0; // float32
                pub const m_flLastAccuracyUpdateTime: usize = 0x17D4; // GameTime_t
                pub const m_fAccuracySmoothedForZoom: usize = 0x17D8; // float32
                pub const m_iRecoilIndex: usize = 0x17DC; // int32
                pub const m_flRecoilIndex: usize = 0x17E0; // float32
                pub const m_bBurstMode: usize = 0x17E4; // bool
                pub const m_flLastBurstModeChangeTime: usize = 0x17E8; // GameTime_t
                pub const m_nPostponeFireReadyTicks: usize = 0x17EC; // GameTick_t
                pub const m_flPostponeFireReadyFrac: usize = 0x17F0; // float32
                pub const m_bInReload: usize = 0x17F4; // bool
                pub const m_nDeployTick: usize = 0x17F8; // GameTick_t
                pub const m_flDroppedAtTime: usize = 0x17FC; // GameTime_t
                pub const m_bIsHauledBack: usize = 0x1804; // bool
                pub const m_bSilencerOn: usize = 0x1805; // bool
                pub const m_flTimeSilencerSwitchComplete: usize = 0x1808; // GameTime_t
                pub const m_flWeaponActionPlaybackRate: usize = 0x180C; // float32
                pub const m_iOriginalTeamNumber: usize = 0x1810; // int32
                pub const m_iMostRecentTeamNumber: usize = 0x1814; // int32
                pub const m_bDroppedNearBuyZone: usize = 0x1818; // bool
                pub const m_flNextAttackRenderTimeOffset: usize = 0x181C; // float32
                pub const m_bClearWeaponIdentifyingUGC: usize = 0x18B8; // bool
                pub const m_bVisualsDataSet: usize = 0x18B9; // bool
                pub const m_bUIWeapon: usize = 0x18BA; // bool
                pub const m_nCustomEconReloadEventId: usize = 0x18BC; // int32
                pub const m_nextPrevOwnerUseTime: usize = 0x18C8; // GameTime_t
                pub const m_hPrevOwner: usize = 0x18CC; // CHandle<C_CSPlayerPawn>
                pub const m_nDropTick: usize = 0x18D0; // GameTick_t
                pub const m_bWasActiveWeaponWhenDropped: usize = 0x18D4; // bool
                pub const m_donated: usize = 0x18F4; // bool
                pub const m_fLastShotTime: usize = 0x18F8; // GameTime_t
                pub const m_bWasOwnedByCT: usize = 0x18FC; // bool
                pub const m_bWasOwnedByTerrorist: usize = 0x18FD; // bool
                pub const m_flNextClientFireBulletTime: usize = 0x1900; // float32
                pub const m_flNextClientFireBulletTime_Repredict: usize = 0x1904; // float32
                pub const m_IronSightController: usize = 0x1960; // C_IronSightController
                pub const m_iIronSightMode: usize = 0x1A10; // int32
                pub const m_flLastLOSTraceFailureTime: usize = 0x1A88; // GameTime_t
                pub const m_flWatTickOffset: usize = 0x1AE8; // float32
                pub const m_flLastShakeTime: usize = 0x1AFC; // GameTime_t
            };
            // Parent: None
            // Field count: 7
            pub const CTimeline = struct {
                pub const m_flValues: usize = 0x10; // float32[64]
                pub const m_nValueCounts: usize = 0x110; // int32[64]
                pub const m_nBucketCount: usize = 0x210; // int32
                pub const m_flInterval: usize = 0x214; // float32
                pub const m_flFinalValue: usize = 0x218; // float32
                pub const m_nCompressionType: usize = 0x21C; // TimelineCompression_t
                pub const m_bStopped: usize = 0x220; // bool
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            pub const CPulseCursorFuncs = struct {
            };
            // Parent: C_BaseEntity
            // Field count: 5
            pub const C_TonemapController2 = struct {
                pub const m_flAutoExposureMin: usize = 0x600; // float32
                pub const m_flAutoExposureMax: usize = 0x604; // float32
                pub const m_flExposureAdaptationSpeedUp: usize = 0x608; // float32
                pub const m_flExposureAdaptationSpeedDown: usize = 0x60C; // float32
                pub const m_flTonemapEVSmoothingRange: usize = 0x610; // float32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CountdownTimer = struct {
                pub const m_duration: usize = 0x8; // float32
                pub const m_timestamp: usize = 0xC; // GameTime_t
                pub const m_timescale: usize = 0x10; // float32
                pub const m_nWorldGroupId: usize = 0x14; // WorldGroupId_t
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const PulseNodeDynamicOutflows_t__DynamicOutflow_t = struct {
                pub const m_OutflowID: usize = 0x0; // CGlobalSymbol
                pub const m_Connection: usize = 0x8; // CPulse_OutflowConnection
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub const C_WeaponMag7 = struct {
            };
            // Parent: None
            // Field count: 2
            pub const WeaponPurchaseCount_t = struct {
                pub const m_nItemDefIndex: usize = 0x30; // uint16
                pub const m_nCount: usize = 0x32; // uint16
            };
            // Parent: None
            // Field count: 0
            pub const CBasePulseGraphInstance = struct {
            };
            // Parent: CBaseFilter
            // Field count: 3
            pub const FilterHealth = struct {
                pub const m_bAdrenalineActive: usize = 0x638; // bool
                pub const m_iHealthMin: usize = 0x63C; // int32
                pub const m_iHealthMax: usize = 0x640; // int32
            };
            // Parent: C_BaseClientUIEntity
            // Field count: 13
            pub const C_PointClientUIHUD = struct {
                pub const m_bCheckCSSClasses: usize = 0xFE0; // bool
                pub const m_bIgnoreInput: usize = 0x1158; // bool
                pub const m_flWidth: usize = 0x115C; // float32
                pub const m_flHeight: usize = 0x1160; // float32
                pub const m_flDPI: usize = 0x1164; // float32
                pub const m_flInteractDistance: usize = 0x1168; // float32
                pub const m_flDepthOffset: usize = 0x116C; // float32
                pub const m_unOwnerContext: usize = 0x1170; // uint32
                pub const m_unHorizontalAlign: usize = 0x1174; // uint32
                pub const m_unVerticalAlign: usize = 0x1178; // uint32
                pub const m_unOrientation: usize = 0x117C; // uint32
                pub const m_bAllowInteractionFromAllSceneWorlds: usize = 0x1180; // bool
                pub const m_vecCSSClasses: usize = 0x1188; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Inflow_GraphHook = struct {
                pub const m_HookName: usize = 0x80; // PulseSymbol_t
            };
            // Parent: None
            // Field count: 0
            pub const SignatureOutflow_Resume = struct {
            };
            // Parent: None
            // Field count: 0
            pub const CPathSimpleAPI = struct {
            };
            // Parent: C_BaseEntity
            // Field count: 0
            pub const C_InfoLadderDismount = struct {
            };
            // Parent: CBaseAnimGraph
            // Field count: 14
            pub const C_PointCommentaryNode = struct {
                pub const m_bActive: usize = 0x1170; // bool
                pub const m_bWasActive: usize = 0x1171; // bool
                pub const m_flEndTime: usize = 0x1174; // GameTime_t
                pub const m_flStartTime: usize = 0x1178; // GameTime_t
                pub const m_flStartTimeInCommentary: usize = 0x117C; // float32
                pub const m_iszCommentaryFile: usize = 0x1180; // CUtlSymbolLarge
                pub const m_iszTitle: usize = 0x1188; // CUtlSymbolLarge
                pub const m_iszSpeakers: usize = 0x1190; // CUtlSymbolLarge
                pub const m_iNodeNumber: usize = 0x1198; // int32
                pub const m_iNodeNumberMax: usize = 0x119C; // int32
                pub const m_bListenedTo: usize = 0x11A0; // bool
                pub const m_sndCommentary: usize = 0x11A8; // CSoundPatch*
                pub const m_hViewPosition: usize = 0x11B0; // CHandle<C_BaseEntity>
                pub const m_bRestartAfterRestore: usize = 0x11B4; // bool
            };
            // Parent: C_Sprite
            // Field count: 0
            pub const CSpriteOriented = struct {
            };
            // Parent: None
            // Field count: 13
            pub const shard_model_desc_t = struct {
                pub const m_nModelID: usize = 0x8; // int32
                pub const m_hMaterialBase: usize = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_hMaterialDamageOverlay: usize = 0x18; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_solid: usize = 0x20; // ShardSolid_t
                pub const m_vecPanelSize: usize = 0x24; // Vector2D
                pub const m_vecStressPositionA: usize = 0x2C; // Vector2D
                pub const m_vecStressPositionB: usize = 0x34; // Vector2D
                pub const m_vecPanelVertices: usize = 0x40; // C_NetworkUtlVectorBase<Vector2D>
                pub const m_vInitialPanelVertices: usize = 0x58; // C_NetworkUtlVectorBase<Vector4D>
                pub const m_flGlassHalfThickness: usize = 0x70; // float32
                pub const m_bHasParent: usize = 0x74; // bool
                pub const m_bParentFrozen: usize = 0x75; // bool
                pub const m_SurfacePropStringToken: usize = 0x78; // CUtlStringToken
            };
            // Parent: C_CS2WeaponModuleBase
            // Field count: 2
            pub const C_KeychainModule = struct {
                pub const m_nKeychainDefID: usize = 0x1160; // uint32
                pub const m_nKeychainSeed: usize = 0x1164; // uint32
            };
            // Parent: C_BaseModelEntity
            // Field count: 1
            pub const CFuncWater = struct {
                pub const m_BuoyancyHelper: usize = 0xFA8; // CBuoyancyHelper
            };
            // Parent: CPlayerPawnComponent
            // Field count: 0
            pub const CCSPlayer_GlowServices = struct {
            };
            // Parent: None
            // Field count: 1
            pub const CCSGameModeRules = struct {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
            };
            // Parent: C_BaseCSGrenade
            // Field count: 0
            pub const C_Flashbang = struct {
            };
            // Parent: C_PointClientUIWorldPanel
            // Field count: 1
            pub const C_PointClientUIWorldTextPanel = struct {
                pub const m_messageText: usize = 0x1200; // char[512]
            };
            // Parent: CPlayer_WaterServices
            // Field count: 3
            pub const CCSPlayer_WaterServices = struct {
                pub const m_flWaterJumpTime: usize = 0x48; // float32
                pub const m_vecWaterJumpVel: usize = 0x4C; // Vector
                pub const m_flSwimSoundTime: usize = 0x58; // float32
            };
            // Parent: C_CSPlayerPawnBase
            // Field count: 1
            pub const C_CSObserverPawn = struct {
                pub const m_hDetectParentChange: usize = 0x1458; // CEntityHandle
            };
            // Parent: None
            // Field count: 3
            pub const ViewAngleServerChange_t = struct {
                pub const nType: usize = 0x30; // FixAngleSet_t
                pub const qAngle: usize = 0x34; // QAngle
                pub const nIndex: usize = 0x40; // uint32
            };
            // Parent: C_BaseModelEntity
            // Field count: 9
            pub const C_FuncLadder = struct {
                pub const m_vecLadderDir: usize = 0xFA8; // Vector
                pub const m_Dismounts: usize = 0xFB8; // CUtlVector<CHandle<C_InfoLadderDismount>>
                pub const m_vecLocalTop: usize = 0xFD0; // Vector
                pub const m_vecPlayerMountPositionTop: usize = 0xFDC; // VectorWS
                pub const m_vecPlayerMountPositionBottom: usize = 0xFE8; // VectorWS
                pub const m_flAutoRideSpeed: usize = 0xFF4; // float32
                pub const m_bDisabled: usize = 0xFF8; // bool
                pub const m_bFakeLadder: usize = 0xFF9; // bool
                pub const m_bHasSlack: usize = 0xFFA; // bool
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub const C_WeaponMP5SD = struct {
            };
            // Parent: C_BaseModelEntity
            // Field count: 0
            pub const C_World = struct {
            };
            // Parent: C_CSGO_TeamSelectCharacterPosition
            // Field count: 0
            pub const C_CSGO_TeamSelectCounterTerroristPosition = struct {
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub const C_WeaponGalilAR = struct {
            };
            // Parent: CPlayer_CameraServices
            // Field count: 6
            pub const CCSPlayerBase_CameraServices = struct {
                pub const m_iFOV: usize = 0x290; // uint32
                pub const m_iFOVStart: usize = 0x294; // uint32
                pub const m_flFOVTime: usize = 0x298; // GameTime_t
                pub const m_flFOVRate: usize = 0x29C; // float32
                pub const m_hZoomOwner: usize = 0x2A0; // CHandle<C_BaseEntity>
                pub const m_flLastShotFOV: usize = 0x2A4; // float32
            };
            // Parent: None
            // Field count: 0
            pub const C_TeamplayRules = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Inflow_BaseEntrypoint = struct {
                pub const m_EntryChunk: usize = 0x48; // PulseRuntimeChunkIndex_t
                pub const m_RegisterMap: usize = 0x50; // PulseRegisterMap_t
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub const C_WeaponSG556 = struct {
            };
            // Parent: C_CSPlayerPawnBase
            // Field count: 106
            pub const C_CSPlayerPawn = struct {
                pub const m_pBulletServices: usize = 0x1468; // CCSPlayer_BulletServices*
                pub const m_pHostageServices: usize = 0x1470; // CCSPlayer_HostageServices*
                pub const m_pBuyServices: usize = 0x1478; // CCSPlayer_BuyServices*
                pub const m_pGlowServices: usize = 0x1480; // CCSPlayer_GlowServices*
                pub const m_pActionTrackingServices: usize = 0x1488; // CCSPlayer_ActionTrackingServices*
                pub const m_pAimPunchServices: usize = 0x1490; // CCSPlayer_AimPunchServices*
                pub const m_pDamageReactServices: usize = 0x1498; // CCSPlayer_DamageReactServices*
                pub const m_flHealthShotBoostExpirationTime: usize = 0x14A0; // GameTime_t
                pub const m_flLastFiredWeaponTime: usize = 0x14A4; // GameTime_t
                pub const m_bHasFemaleVoice: usize = 0x14A8; // bool
                pub const m_flLandingTimeSeconds: usize = 0x14AC; // float32
                pub const m_flOldFallVelocity: usize = 0x14B0; // float32
                pub const m_szLastPlaceName: usize = 0x14B4; // char[18]
                pub const m_bPrevDefuser: usize = 0x14C6; // bool
                pub const m_bPrevHelmet: usize = 0x14C7; // bool
                pub const m_nPrevArmorVal: usize = 0x14C8; // int32
                pub const m_nPrevGrenadeAmmoCount: usize = 0x14CC; // int32
                pub const m_unPreviousWeaponHash: usize = 0x14D0; // uint32
                pub const m_unWeaponHash: usize = 0x14D4; // uint32
                pub const m_bInBuyZone: usize = 0x14D8; // bool
                pub const m_bPreviouslyInBuyZone: usize = 0x14D9; // bool
                pub const m_bInLanding: usize = 0x14DA; // bool
                pub const m_flLandingStartTime: usize = 0x14DC; // float32
                pub const m_bInHostageRescueZone: usize = 0x14E0; // bool
                pub const m_bInBombZone: usize = 0x14E1; // bool
                pub const m_bIsBuyMenuOpen: usize = 0x14E2; // bool
                pub const m_flTimeOfLastInjury: usize = 0x14E4; // GameTime_t
                pub const m_flNextSprayDecalTime: usize = 0x14E8; // GameTime_t
                pub const m_iRetakesOffering: usize = 0x1640; // int32
                pub const m_iRetakesOfferingCard: usize = 0x1644; // int32
                pub const m_bRetakesHasDefuseKit: usize = 0x1648; // bool
                pub const m_bRetakesMVPLastRound: usize = 0x1649; // bool
                pub const m_iRetakesMVPBoostItem: usize = 0x164C; // int32
                pub const m_RetakesMVPBoostExtraUtility: usize = 0x1650; // loadout_slot_t
                pub const m_bNeedToReApplyGloves: usize = 0x1655; // bool
                pub const m_EconGloves: usize = 0x1658; // C_EconItemView
                pub const m_nEconGlovesChanged: usize = 0x1AC8; // uint8
                pub const m_bMustSyncRagdollState: usize = 0x1AC9; // bool
                pub const m_nRagdollDamageBone: usize = 0x1ACC; // int32
                pub const m_vRagdollDamageForce: usize = 0x1AD0; // Vector
                pub const m_vRagdollDamagePosition: usize = 0x1ADC; // Vector
                pub const m_szRagdollDamageWeaponName: usize = 0x1AE8; // char[64]
                pub const m_bRagdollDamageHeadshot: usize = 0x1B28; // bool
                pub const m_vRagdollServerOrigin: usize = 0x1B2C; // Vector
                pub const m_lastLandTime: usize = 0x1B38; // GameTime_t
                pub const m_bOnGroundLastTick: usize = 0x1B3C; // bool
                pub const m_hHudModelArms: usize = 0x1B58; // CHandle<C_CS2HudModelArms>
                pub const m_qDeathEyeAngles: usize = 0x1B5C; // QAngle
                pub const m_bLeftHanded: usize = 0x1B68; // bool
                pub const m_fSwitchedHandednessTime: usize = 0x1B6C; // GameTime_t
                pub const m_flViewmodelOffsetX: usize = 0x1B70; // float32
                pub const m_flViewmodelOffsetY: usize = 0x1B74; // float32
                pub const m_flViewmodelOffsetZ: usize = 0x1B78; // float32
                pub const m_flViewmodelFOV: usize = 0x1B7C; // float32
                pub const m_vecPlayerPatchEconIndices: usize = 0x1B80; // uint32[5]
                pub const m_GunGameImmunityColor: usize = 0x1BC0; // Color
                pub const m_vecBulletHitModels: usize = 0x1C10; // CUtlVector<C_BulletHitModel*>
                pub const m_bIsWalking: usize = 0x1C28; // bool
                pub const m_entitySpottedState: usize = 0x1C30; // EntitySpottedState_t
                pub const m_bIsScoped: usize = 0x1C48; // bool
                pub const m_bResumeZoom: usize = 0x1C49; // bool
                pub const m_bIsDefusing: usize = 0x1C4A; // bool
                pub const m_bIsGrabbingHostage: usize = 0x1C4B; // bool
                pub const m_iBlockingUseActionInProgress: usize = 0x1C4C; // CSPlayerBlockingUseAction_t
                pub const m_flEmitSoundTime: usize = 0x1C50; // GameTime_t
                pub const m_bInNoDefuseArea: usize = 0x1C54; // bool
                pub const m_nWhichBombZone: usize = 0x1C58; // int32
                pub const m_iShotsFired: usize = 0x1C5C; // int32
                pub const m_flFlinchStack: usize = 0x1C60; // float32
                pub const m_flVelocityModifier: usize = 0x1C64; // float32
                pub const m_bWaitForNoAttack: usize = 0x1C68; // bool
                pub const m_ignoreLadderJumpTime: usize = 0x1C6C; // float32
                pub const m_bKilledByHeadshot: usize = 0x1C71; // bool
                pub const m_ArmorValue: usize = 0x1C74; // int32
                pub const m_unCurrentEquipmentValue: usize = 0x1C78; // uint16
                pub const m_unRoundStartEquipmentValue: usize = 0x1C7A; // uint16
                pub const m_unFreezetimeEndEquipmentValue: usize = 0x1C7C; // uint16
                pub const m_nLastKillerIndex: usize = 0x1C80; // CEntityIndex
                pub const m_bOldIsScoped: usize = 0x1C84; // bool
                pub const m_bHasDeathInfo: usize = 0x1C85; // bool
                pub const m_flDeathInfoTime: usize = 0x1C88; // float32
                pub const m_vecDeathInfoOrigin: usize = 0x1C8C; // Vector
                pub const m_grenadeParameterStashTime: usize = 0x1CC8; // GameTime_t
                pub const m_bGrenadeParametersStashed: usize = 0x1CCC; // bool
                pub const m_angStashedShootAngles: usize = 0x1CD0; // QAngle
                pub const m_vecStashedGrenadeThrowPosition: usize = 0x1CDC; // Vector
                pub const m_vecStashedVelocity: usize = 0x1CE8; // Vector
                pub const m_angShootAngleHistory: usize = 0x1CF4; // QAngle[2]
                pub const m_vecThrowPositionHistory: usize = 0x1D0C; // Vector[2]
                pub const m_vecVelocityHistory: usize = 0x1D24; // Vector[2]
                pub const m_bShouldAutobuyDMWeapons: usize = 0x3270; // bool
                pub const m_fImmuneToGunGameDamageTime: usize = 0x3274; // GameTime_t
                pub const m_bGunGameImmunity: usize = 0x3278; // bool
                pub const m_fImmuneToGunGameDamageTimeLast: usize = 0x327C; // GameTime_t
                pub const m_fMolotovDamageTime: usize = 0x3280; // float32
                pub const m_bThirdpersonActiveWeaponCanSafelyOcclude: usize = 0x3288; // bool
                pub const m_nPlayerInfernoBodyFx: usize = 0x328C; // ParticleIndex_t
                pub const m_angEyeAngles: usize = 0x3300; // QAngle
                pub const m_arrOldEyeAnglesTimes: usize = 0x3390; // GameTime_t[4]
                pub const m_arrOldEyeAngles: usize = 0x33A0; // QAngle[4]
                pub const m_angEyeAnglesVelocity: usize = 0x33D0; // QAngle
                pub const m_iIDEntIndex: usize = 0x33DC; // CEntityIndex
                pub const m_delayTargetIDTimer: usize = 0x33E0; // CountdownTimer
                pub const m_iTargetItemEntIdx: usize = 0x33F8; // CEntityIndex
                pub const m_iOldIDEntIndex: usize = 0x33FC; // CEntityIndex
                pub const m_holdTargetIDTimer: usize = 0x3400; // CountdownTimer
            };
            // Parent: C_CSGO_TeamIntroCharacterPosition
            // Field count: 0
            pub const C_CSGO_TeamIntroTerroristPosition = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorCanvasItemSpecKV3
            pub const CPulseCell_WaitForCursorsWithTagBase = struct {
                pub const m_nCursorsAllowedToWait: usize = 0x48; // int32
                pub const m_WaitComplete: usize = 0x50; // CPulse_ResumePoint
            };
            // Parent: C_BaseCombatCharacter
            // Field count: 23
            pub const C_Hostage = struct {
                pub const m_entitySpottedState: usize = 0x11E0; // EntitySpottedState_t
                pub const m_leader: usize = 0x11F8; // CHandle<C_BaseEntity>
                pub const m_reuseTimer: usize = 0x1200; // CountdownTimer
                pub const m_vel: usize = 0x1218; // Vector
                pub const m_isRescued: usize = 0x1224; // bool
                pub const m_jumpedThisFrame: usize = 0x1225; // bool
                pub const m_nHostageState: usize = 0x1228; // int32
                pub const m_bHandsHaveBeenCut: usize = 0x122C; // bool
                pub const m_hHostageGrabber: usize = 0x1230; // CHandle<C_CSPlayerPawn>
                pub const m_fLastGrabTime: usize = 0x1234; // GameTime_t
                pub const m_vecGrabbedPos: usize = 0x1238; // Vector
                pub const m_flRescueStartTime: usize = 0x1244; // GameTime_t
                pub const m_flGrabSuccessTime: usize = 0x1248; // GameTime_t
                pub const m_flDropStartTime: usize = 0x124C; // GameTime_t
                pub const m_flDeadOrRescuedTime: usize = 0x1250; // GameTime_t
                pub const m_blinkTimer: usize = 0x1258; // CountdownTimer
                pub const m_lookAt: usize = 0x1270; // Vector
                pub const m_lookAroundTimer: usize = 0x1280; // CountdownTimer
                pub const m_isInit: usize = 0x1298; // bool
                pub const m_eyeAttachment: usize = 0x1299; // AttachmentHandle_t
                pub const m_chestAttachment: usize = 0x129A; // AttachmentHandle_t
                pub const m_pPredictionOwner: usize = 0x12A0; // CBasePlayerController*
                pub const m_fNewestAlphaThinkTime: usize = 0x12A8; // GameTime_t
            };
            // Parent: None
            // Field count: 14
            pub const C_fogplayerparams_t = struct {
                pub const m_hCtrl: usize = 0x8; // CHandle<C_FogController>
                pub const m_flTransitionTime: usize = 0xC; // float32
                pub const m_OldColor: usize = 0x10; // Color
                pub const m_flOldStart: usize = 0x14; // float32
                pub const m_flOldEnd: usize = 0x18; // float32
                pub const m_flOldMaxDensity: usize = 0x1C; // float32
                pub const m_flOldHDRColorScale: usize = 0x20; // float32
                pub const m_flOldFarZ: usize = 0x24; // float32
                pub const m_NewColor: usize = 0x28; // Color
                pub const m_flNewStart: usize = 0x2C; // float32
                pub const m_flNewEnd: usize = 0x30; // float32
                pub const m_flNewMaxDensity: usize = 0x34; // float32
                pub const m_flNewHDRColorScale: usize = 0x38; // float32
                pub const m_flNewFarZ: usize = 0x3C; // float32
            };
            // Parent: None
            // Field count: 35
            pub const CGameSceneNode = struct {
                pub const m_nodeToWorld: usize = 0x10; // CTransformWS
                pub const m_pOwner: usize = 0x30; // CEntityInstance*
                pub const m_pParent: usize = 0x38; // CGameSceneNode*
                pub const m_pChild: usize = 0x40; // CGameSceneNode*
                pub const m_pNextSibling: usize = 0x48; // CGameSceneNode*
                pub const m_hParent: usize = 0x70; // CGameSceneNodeHandle
                pub const m_vecOrigin: usize = 0x80; // CNetworkOriginCellCoordQuantizedVector
                pub const m_angRotation: usize = 0xB8; // QAngle
                pub const m_flScale: usize = 0xC4; // float32
                pub const m_vecAbsOrigin: usize = 0xC8; // VectorWS
                pub const m_angAbsRotation: usize = 0xD4; // QAngle
                pub const m_flAbsScale: usize = 0xE0; // float32
                pub const m_vecWrappedLocalOrigin: usize = 0xE4; // Vector
                pub const m_angWrappedLocalRotation: usize = 0xF0; // QAngle
                pub const m_flWrappedScale: usize = 0xFC; // float32
                pub const m_nParentAttachmentOrBone: usize = 0x100; // int16
                pub const m_bDebugAbsOriginChanges: usize = 0x102; // bool
                pub const m_bDormant: usize = 0x103; // bool
                pub const m_bForceParentToBeNetworked: usize = 0x104; // bool
                pub const m_bDirtyHierarchy: usize = 0x0; // bitfield:1
                pub const m_bDirtyBoneMergeInfo: usize = 0x0; // bitfield:1
                pub const m_bNetworkedPositionChanged: usize = 0x0; // bitfield:1
                pub const m_bNetworkedAnglesChanged: usize = 0x0; // bitfield:1
                pub const m_bNetworkedScaleChanged: usize = 0x0; // bitfield:1
                pub const m_bWillBeCallingPostDataUpdate: usize = 0x0; // bitfield:1
                pub const m_bBoneMergeFlex: usize = 0x0; // bitfield:1
                pub const m_nLatchAbsOrigin: usize = 0x0; // bitfield:2
                pub const m_bDirtyBoneMergeBoneToRoot: usize = 0x0; // bitfield:1
                pub const m_nHierarchicalDepth: usize = 0x107; // uint8
                pub const m_nHierarchyType: usize = 0x108; // uint8
                pub const m_nDoNotSetAnimTimeInInvalidatePhysicsCount: usize = 0x109; // uint8
                pub const m_name: usize = 0x10C; // CUtlStringToken
                pub const m_hierarchyAttachName: usize = 0x120; // CUtlStringToken
                pub const m_flClientLocalScale: usize = 0x124; // float32
                pub const m_vRenderOrigin: usize = 0x128; // Vector
            };
            // Parent: CPlayerPawnComponent
            // Field count: 6
            pub const CPlayer_ObserverServices = struct {
                pub const m_iObserverMode: usize = 0x48; // uint8
                pub const m_hObserverTarget: usize = 0x4C; // CHandle<C_BaseEntity>
                pub const m_iObserverLastMode: usize = 0x50; // ObserverMode_t
                pub const m_bForcedObserverMode: usize = 0x54; // bool
                pub const m_flObserverChaseDistance: usize = 0x58; // float32
                pub const m_flObserverChaseDistanceCalcTime: usize = 0x5C; // GameTime_t
            };
            // Parent: C_BaseModelEntity
            // Field count: 1
            pub const CCashStack = struct {
                pub const m_nCashStackValue: usize = 0xFA8; // int32
            };
            // Parent: C_BaseEntity
            // Field count: 4
            pub const C_SoundAreaEntityBase = struct {
                pub const m_bDisabled: usize = 0x600; // bool
                pub const m_bWasEnabled: usize = 0x608; // bool
                pub const m_iszSoundAreaType: usize = 0x610; // CUtlSymbolLarge
                pub const m_vPos: usize = 0x618; // Vector
            };
            // Parent: C_BaseEntity
            // Field count: 6
            pub const C_PlayerVisibility = struct {
                pub const m_flVisibilityStrength: usize = 0x600; // float32
                pub const m_flFogDistanceMultiplier: usize = 0x604; // float32
                pub const m_flFogMaxDensityMultiplier: usize = 0x608; // float32
                pub const m_flFadeTime: usize = 0x60C; // float32
                pub const m_bStartDisabled: usize = 0x610; // bool
                pub const m_bIsEnabled: usize = 0x611; // bool
            };
            // Parent: None
            // Field count: 3
            pub const CAttributeManager__cached_attribute_float_t = struct {
                pub const flIn: usize = 0x0; // float32
                pub const iAttribHook: usize = 0x8; // CUtlSymbolLarge
                pub const flOut: usize = 0x10; // float32
            };
            // Parent: C_EconEntity
            // Field count: 7
            pub const C_BasePlayerWeapon = struct {
                pub const m_nNextPrimaryAttackTick: usize = 0x16C8; // GameTick_t
                pub const m_flNextPrimaryAttackTickRatio: usize = 0x16CC; // float32
                pub const m_nNextSecondaryAttackTick: usize = 0x16D0; // GameTick_t
                pub const m_flNextSecondaryAttackTickRatio: usize = 0x16D4; // float32
                pub const m_iClip1: usize = 0x16D8; // int32
                pub const m_iClip2: usize = 0x16DC; // int32
                pub const m_pReserveAmmo: usize = 0x16E0; // int32[2]
            };
            // Parent: C_BaseEntity
            // Field count: 1
            pub const CRagdollManager = struct {
                pub const m_iCurrentMaxRagdollCount: usize = 0x600; // int8
            };
            // Parent: C_BaseCSGrenade
            // Field count: 0
            pub const C_HEGrenade = struct {
            };
            // Parent: C_BaseModelEntity
            // Field count: 12
            pub const C_EnvSky = struct {
                pub const m_hSkyMaterial: usize = 0xFA8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_hSkyMaterialLightingOnly: usize = 0xFB0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_bStartDisabled: usize = 0xFB8; // bool
                pub const m_vTintColor: usize = 0xFB9; // Color
                pub const m_vTintColorLightingOnly: usize = 0xFBD; // Color
                pub const m_flBrightnessScale: usize = 0xFC4; // float32
                pub const m_nFogType: usize = 0xFC8; // int32
                pub const m_flFogMinStart: usize = 0xFCC; // float32
                pub const m_flFogMinEnd: usize = 0xFD0; // float32
                pub const m_flFogMaxStart: usize = 0xFD4; // float32
                pub const m_flFogMaxEnd: usize = 0xFD8; // float32
                pub const m_bEnabled: usize = 0xFDC; // bool
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulse_InvokeBinding = struct {
                pub const m_RegisterMap: usize = 0x0; // PulseRegisterMap_t
                pub const m_FuncName: usize = 0x30; // PulseSymbol_t
                pub const m_nCellIndex: usize = 0x40; // PulseRuntimeCellIndex_t
                pub const m_nSrcChunk: usize = 0x44; // PulseRuntimeChunkIndex_t
                pub const m_nSrcInstruction: usize = 0x48; // int32
            };
            // Parent: C_BaseEntity
            // Field count: 11
            pub const C_EnvWindController = struct {
                pub const m_EnvWindShared: usize = 0x600; // C_EnvWindShared
                pub const m_fDirectionVariation: usize = 0x6F8; // float32
                pub const m_fSpeedVariation: usize = 0x6FC; // float32
                pub const m_fTurbulence: usize = 0x700; // float32
                pub const m_fVolumeHalfExtentXY: usize = 0x704; // float32
                pub const m_fVolumeHalfExtentZ: usize = 0x708; // float32
                pub const m_nVolumeResolutionXY: usize = 0x70C; // int32
                pub const m_nVolumeResolutionZ: usize = 0x710; // int32
                pub const m_nClipmapLevels: usize = 0x714; // int32
                pub const m_bIsMaster: usize = 0x718; // bool
                pub const m_bFirstTime: usize = 0x719; // bool
            };
            // Parent: None
            // Field count: 4
            pub const C_GameRules = struct {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
                pub const m_nTotalPausedTicks: usize = 0x30; // int32
                pub const m_nPauseStartTick: usize = 0x34; // int32
                pub const m_bGamePaused: usize = 0x38; // bool
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub const C_WeaponMAC10 = struct {
            };
            // Parent: C_BaseEntity
            // Field count: 14
            pub const C_CSGO_MapPreviewCameraPath = struct {
                pub const m_flZFar: usize = 0x600; // float32
                pub const m_flZNear: usize = 0x604; // float32
                pub const m_bLoop: usize = 0x608; // bool
                pub const m_bVerticalFOV: usize = 0x609; // bool
                pub const m_bConstantSpeed: usize = 0x60A; // bool
                pub const m_flDuration: usize = 0x60C; // float32
                pub const m_flPathLength: usize = 0x650; // float32
                pub const m_flPathDuration: usize = 0x654; // float32
                pub const m_bDofEnabled: usize = 0x66C; // bool
                pub const m_flDofNearBlurry: usize = 0x670; // float32
                pub const m_flDofNearCrisp: usize = 0x674; // float32
                pub const m_flDofFarCrisp: usize = 0x678; // float32
                pub const m_flDofFarBlurry: usize = 0x67C; // float32
                pub const m_flDofTiltToGround: usize = 0x680; // float32
            };
            // Parent: C_ModelPointEntity
            // Field count: 19
            pub const C_PointWorldText = struct {
                pub const m_bForceRecreateNextUpdate: usize = 0xFB0; // bool
                pub const m_nTextWidthPx: usize = 0xFC8; // int32
                pub const m_nTextHeightPx: usize = 0xFCC; // int32
                pub const m_messageText: usize = 0xFD0; // char[512]
                pub const m_FontName: usize = 0x11D0; // char[64]
                pub const m_BackgroundMaterialName: usize = 0x1210; // char[64]
                pub const m_bEnabled: usize = 0x1250; // bool
                pub const m_bFullbright: usize = 0x1251; // bool
                pub const m_flWorldUnitsPerPx: usize = 0x1254; // float32
                pub const m_flFontSize: usize = 0x1258; // float32
                pub const m_flDepthOffset: usize = 0x125C; // float32
                pub const m_bDrawBackground: usize = 0x1260; // bool
                pub const m_flBackgroundBorderWidth: usize = 0x1264; // float32
                pub const m_flBackgroundBorderHeight: usize = 0x1268; // float32
                pub const m_flBackgroundWorldToUV: usize = 0x126C; // float32
                pub const m_Color: usize = 0x1270; // Color
                pub const m_nJustifyHorizontal: usize = 0x1274; // PointWorldTextJustifyHorizontal_t
                pub const m_nJustifyVertical: usize = 0x1278; // PointWorldTextJustifyVertical_t
                pub const m_nReorientMode: usize = 0x127C; // PointWorldTextReorientMode_t
            };
            // Parent: C_BaseModelEntity
            // Field count: 40
            pub const C_RopeKeyframe = struct {
                pub const m_LinksTouchingSomething: usize = 0xFB0; // CBitVec<10>
                pub const m_nLinksTouchingSomething: usize = 0xFB4; // int32
                pub const m_bApplyWind: usize = 0xFB8; // bool
                pub const m_fPrevLockedPoints: usize = 0xFBC; // int32
                pub const m_iForcePointMoveCounter: usize = 0xFC0; // int32
                pub const m_bPrevEndPointPos: usize = 0xFC4; // bool[2]
                pub const m_vPrevEndPointPos: usize = 0xFC8; // VectorWS[2]
                pub const m_flCurScroll: usize = 0xFE0; // float32
                pub const m_flScrollSpeed: usize = 0xFE4; // float32
                pub const m_RopeFlags: usize = 0xFE8; // uint16
                pub const m_iRopeMaterialModelIndex: usize = 0xFF0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_nSegments: usize = 0x1268; // uint8
                pub const m_hStartPoint: usize = 0x126C; // CHandle<C_BaseEntity>
                pub const m_hEndPoint: usize = 0x1270; // CHandle<C_BaseEntity>
                pub const m_iStartAttachment: usize = 0x1274; // AttachmentHandle_t
                pub const m_iEndAttachment: usize = 0x1275; // AttachmentHandle_t
                pub const m_Subdiv: usize = 0x1276; // uint8
                pub const m_RopeLength: usize = 0x1278; // int16
                pub const m_Slack: usize = 0x127A; // int16
                pub const m_TextureScale: usize = 0x127C; // float32
                pub const m_fLockedPoints: usize = 0x1280; // uint8
                pub const m_nChangeCount: usize = 0x1281; // uint8
                pub const m_Width: usize = 0x1284; // float32
                pub const m_PhysicsDelegate: usize = 0x1288; // C_RopeKeyframe::CPhysicsDelegate
                pub const m_hMaterial: usize = 0x1298; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_TextureHeight: usize = 0x12A0; // int32
                pub const m_vecImpulse: usize = 0x12A4; // Vector
                pub const m_vecPreviousImpulse: usize = 0x12B0; // Vector
                pub const m_flCurrentGustTimer: usize = 0x12BC; // float32
                pub const m_flCurrentGustLifetime: usize = 0x12C0; // float32
                pub const m_flTimeToNextGust: usize = 0x12C4; // float32
                pub const m_vWindDir: usize = 0x12C8; // Vector
                pub const m_vColorMod: usize = 0x12D4; // Vector
                pub const m_vCachedEndPointAttachmentPos: usize = 0x12E0; // VectorWS[2]
                pub const m_vCachedEndPointAttachmentAngle: usize = 0x12F8; // QAngle[2]
                pub const m_bConstrainBetweenEndpoints: usize = 0x1310; // bool
                pub const m_bEndPointAttachmentPositionsDirty: usize = 0x0; // bitfield:1
                pub const m_bEndPointAttachmentAnglesDirty: usize = 0x0; // bitfield:1
                pub const m_bNewDataThisFrame: usize = 0x0; // bitfield:1
                pub const m_bPhysicsInitted: usize = 0x0; // bitfield:1
            };
            // Parent: C_BaseModelEntity
            // Field count: 0
            pub const C_BaseToggle = struct {
            };
            // Parent: C_EnvCubemap
            // Field count: 0
            pub const C_EnvCubemapBox = struct {
            };
            // Parent: C_EnvCombinedLightProbeVolume
            // Field count: 0
            pub const C_EnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume = struct {
            };
            // Parent: None
            // Field count: 1
            pub const C_RopeKeyframe__CPhysicsDelegate = struct {
                pub const m_pKeyframe: usize = 0x8; // C_RopeKeyframe*
            };
            // Parent: C_PointEntity
            // Field count: 5
            pub const CInfoDynamicShadowHint = struct {
                pub const m_bDisabled: usize = 0x600; // bool
                pub const m_flRange: usize = 0x604; // float32
                pub const m_nImportance: usize = 0x608; // int32
                pub const m_nLightChoice: usize = 0x60C; // int32
                pub const m_hLight: usize = 0x610; // CHandle<C_BaseEntity>
            };
            // Parent: C_PointEntity
            // Field count: 6
            pub const CPathNode = struct {
                pub const m_vInTangentLocal: usize = 0x600; // Vector
                pub const m_vOutTangentLocal: usize = 0x60C; // Vector
                pub const m_strParentPathUniqueID: usize = 0x618; // CUtlString
                pub const m_strPathNodeParameter: usize = 0x620; // CUtlString
                pub const m_xWSPrevParent: usize = 0x630; // CTransform
                pub const m_hPath: usize = 0x650; // CHandle<CPathWithDynamicNodes>
            };
            // Parent: C_BaseToggle
            // Field count: 0
            pub const C_FuncMoveLinear = struct {
            };
            // Parent: C_BaseModelEntity
            // Field count: 0
            pub const CServerOnlyModelEntity = struct {
            };
            // Parent: C_CSGO_TeamPreviewCamera
            // Field count: 0
            pub const C_CSGO_TeamSelectCamera = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            pub const CPulseCell_IntervalTimer = struct {
                pub const m_Completed: usize = 0x48; // CPulse_ResumePoint
                pub const m_OnInterval: usize = 0x90; // SignatureOutflow_Continue
            };
            // Parent: C_CSWeaponBaseShotgun
            // Field count: 0
            pub const C_WeaponXM1014 = struct {
            };
            // Parent: CBaseAnimGraph
            // Field count: 0
            pub const C_WorldModelGloves = struct {
            };
            // Parent: C_PhysicsProp
            // Field count: 0
            pub const C_PhysicsPropMultiplayer = struct {
            };
            // Parent: C_SoundEventEntity
            // Field count: 2
            pub const C_SoundEventOBBEntity = struct {
                pub const m_vMins: usize = 0x6C0; // Vector
                pub const m_vMaxs: usize = 0x6CC; // Vector
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            pub const CPulseTestScriptLib = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_BaseLerp = struct {
                pub const m_WakeResume: usize = 0x48; // CPulse_ResumePoint
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub const C_WeaponAug = struct {
            };
            // Parent: C_DynamicProp
            // Field count: 8
            pub const C_BasePropDoor = struct {
                pub const m_eDoorState: usize = 0x13B0; // DoorState_t
                pub const m_modelChanged: usize = 0x13B4; // bool
                pub const m_bLocked: usize = 0x13B5; // bool
                pub const m_bNoNPCs: usize = 0x13B6; // bool
                pub const m_closedPosition: usize = 0x13B8; // Vector
                pub const m_closedAngles: usize = 0x13C4; // QAngle
                pub const m_hMaster: usize = 0x13D0; // CHandle<C_BasePropDoor>
                pub const m_vWhereToSetLightingOrigin: usize = 0x13D4; // Vector
            };
            // Parent: C_PointEntity
            // Field count: 0
            pub const CChoreoInfoTarget = struct {
            };
            // Parent: None
            // Field count: 0
            pub const CTakeDamageResultAPI = struct {
            };
            // Parent: None
            // Field count: 8
            pub const CNetworkedSequenceOperation = struct {
                pub const m_hSequence: usize = 0x8; // HSequence
                pub const m_flPrevCycle: usize = 0xC; // float32
                pub const m_flCycle: usize = 0x10; // float32
                pub const m_flWeight: usize = 0x14; // CNetworkedQuantizedFloat
                pub const m_bSequenceChangeNetworked: usize = 0x1C; // bool
                pub const m_bDiscontinuity: usize = 0x1D; // bool
                pub const m_flPrevCycleFromDiscontinuity: usize = 0x20; // float32
                pub const m_flPrevCycleForAnimEventDetection: usize = 0x24; // float32
            };
            // Parent: C_WeaponBaseItem
            // Field count: 0
            pub const C_Item_Healthshot = struct {
            };
            // Parent: None
            // Field count: 3
            pub const CEntityInstance = struct {
                pub const m_iszPrivateVScripts: usize = 0x8; // CUtlSymbolLarge
                pub const m_pEntity: usize = 0x10; // CEntityIdentity*
                pub const m_CScriptComponent: usize = 0x28; // CScriptComponent*
            };
            // Parent: C_BaseEntity
            // Field count: 44
            pub const C_BaseModelEntity = struct {
                pub const m_CRenderComponent: usize = 0xAF0; // CRenderComponent*
                pub const m_CHitboxComponent: usize = 0xAF8; // CHitboxComponent
                pub const m_pChoreoComponent: usize = 0xB10; // CChoreoComponent*
                pub const m_nDestructiblePartInitialStateDestructed0: usize = 0xB18; // HitGroup_t
                pub const m_nDestructiblePartInitialStateDestructed1: usize = 0xB1C; // HitGroup_t
                pub const m_nDestructiblePartInitialStateDestructed2: usize = 0xB20; // HitGroup_t
                pub const m_nDestructiblePartInitialStateDestructed3: usize = 0xB24; // HitGroup_t
                pub const m_nDestructiblePartInitialStateDestructed4: usize = 0xB28; // HitGroup_t
                pub const m_nDestructiblePartInitialStateDestructed0_PartIndex: usize = 0xB2C; // int32
                pub const m_nDestructiblePartInitialStateDestructed1_PartIndex: usize = 0xB30; // int32
                pub const m_nDestructiblePartInitialStateDestructed2_PartIndex: usize = 0xB34; // int32
                pub const m_nDestructiblePartInitialStateDestructed3_PartIndex: usize = 0xB38; // int32
                pub const m_nDestructiblePartInitialStateDestructed4_PartIndex: usize = 0xB3C; // int32
                pub const m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces: usize = 0xB40; // bool
                pub const m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces: usize = 0xB41; // bool
                pub const m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces: usize = 0xB42; // bool
                pub const m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces: usize = 0xB43; // bool
                pub const m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces: usize = 0xB44; // bool
                pub const m_pDestructiblePartsSystemComponent: usize = 0xB48; // CDestructiblePartsComponent*
                pub const m_bInitModelEffects: usize = 0xC70; // bool
                pub const m_bDoingModelEffects: usize = 0xC71; // bool
                pub const m_iOldHealth: usize = 0xC74; // int32
                pub const m_nRenderMode: usize = 0xC78; // RenderMode_t
                pub const m_nRenderFX: usize = 0xC79; // RenderFx_t
                pub const m_bAllowFadeInView: usize = 0xC7A; // bool
                pub const m_clrRender: usize = 0xC98; // Color
                pub const m_vecRenderAttributes: usize = 0xCA0; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
                pub const m_bRenderToCubemaps: usize = 0xD20; // bool
                pub const m_bNoInterpolate: usize = 0xD21; // bool
                pub const m_Collision: usize = 0xD28; // CCollisionProperty
                pub const m_Glow: usize = 0xDD8; // CGlowProperty
                pub const m_flGlowBackfaceMult: usize = 0xE30; // float32
                pub const m_fadeMinDist: usize = 0xE34; // float32
                pub const m_fadeMaxDist: usize = 0xE38; // float32
                pub const m_flFadeScale: usize = 0xE3C; // float32
                pub const m_flShadowStrength: usize = 0xE40; // float32
                pub const m_nObjectCulling: usize = 0xE44; // uint8
                pub const m_nRequiredDecalRtEncoding: usize = 0xE45; // DecalRtEncoding_t
                pub const m_bodyGroupChoices: usize = 0xE48; // CUtlOrderedMap<CGlobalSymbol,int32>
                pub const m_vecViewOffset: usize = 0xE70; // CNetworkViewOffsetVector
                pub const m_pClientAlphaProperty: usize = 0xF50; // CClientAlphaProperty*
                pub const m_ClientOverrideTint: usize = 0xF58; // Color
                pub const m_bUseClientOverrideTint: usize = 0xF5C; // bool
                pub const m_bvDisabledHitGroups: usize = 0xF98; // uint32[1]
            };
            // Parent: CPlayerPawnComponent
            // Field count: 1
            pub const CCSPlayer_BulletServices = struct {
                pub const m_totalHitsOnServer: usize = 0x48; // int32
            };
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            pub const C_SoundOpvarSetAutoRoomEntity = struct {
            };
            // Parent: C_BaseEntity
            // Field count: 29
            pub const C_EnvCombinedLightProbeVolume = struct {
                pub const m_Entity_Color: usize = 0x1678; // Color
                pub const m_Entity_flBrightness: usize = 0x167C; // float32
                pub const m_Entity_hCubemapTexture: usize = 0x1680; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_bCustomCubemapTexture: usize = 0x1688; // bool
                pub const m_Entity_hLightProbeTexture_AmbientCube: usize = 0x1690; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SDF: usize = 0x1698; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_DC: usize = 0x16A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_R: usize = 0x16A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_G: usize = 0x16B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_B: usize = 0x16B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightIndicesTexture: usize = 0x16C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightScalarsTexture: usize = 0x16C8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightShadowsTexture: usize = 0x16D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_vBoxMins: usize = 0x16D8; // Vector
                pub const m_Entity_vBoxMaxs: usize = 0x16E4; // Vector
                pub const m_Entity_bMoveable: usize = 0x16F0; // bool
                pub const m_Entity_nHandshake: usize = 0x16F4; // int32
                pub const m_Entity_nEnvCubeMapArrayIndex: usize = 0x16F8; // int32
                pub const m_Entity_nPriority: usize = 0x16FC; // int32
                pub const m_Entity_bStartDisabled: usize = 0x1700; // bool
                pub const m_Entity_flEdgeFadeDist: usize = 0x1704; // float32
                pub const m_Entity_vEdgeFadeDists: usize = 0x1708; // Vector
                pub const m_Entity_nLightProbeSizeX: usize = 0x1714; // int32
                pub const m_Entity_nLightProbeSizeY: usize = 0x1718; // int32
                pub const m_Entity_nLightProbeSizeZ: usize = 0x171C; // int32
                pub const m_Entity_nLightProbeAtlasX: usize = 0x1720; // int32
                pub const m_Entity_nLightProbeAtlasY: usize = 0x1724; // int32
                pub const m_Entity_nLightProbeAtlasZ: usize = 0x1728; // int32
                pub const m_Entity_bEnabled: usize = 0x1741; // bool
            };
            // Parent: C_CSGO_EndOfMatchLineupEndpoint
            // Field count: 0
            pub const CCSGO_EndOfMatchLineupEnd = struct {
            };
            // Parent: None
            // Field count: 0
            pub const C_MultiplayRules = struct {
            };
            // Parent: CPlayerPawnComponent
            // Field count: 0
            pub const CPlayer_AutoaimServices = struct {
            };
            // Parent: C_LightEntity
            // Field count: 0
            pub const C_LightDirectionalEntity = struct {
            };
            // Parent: None
            // Field count: 83
            pub const C_BaseEntity = struct {
                pub const m_CBodyComponent: usize = 0x30; // CBodyComponent*
                pub const m_NetworkTransmitComponent: usize = 0x38; // CNetworkTransmitComponent
                pub const m_nLastThinkTick: usize = 0x328; // GameTick_t
                pub const m_pGameSceneNode: usize = 0x330; // CGameSceneNode*
                pub const m_pRenderComponent: usize = 0x338; // CRenderComponent*
                pub const m_pCollision: usize = 0x340; // CCollisionProperty*
                pub const m_iMaxHealth: usize = 0x348; // int32
                pub const m_iHealth: usize = 0x34C; // int32
                pub const m_flDamageAccumulator: usize = 0x350; // float32
                pub const m_lifeState: usize = 0x354; // uint8
                pub const m_bTakesDamage: usize = 0x355; // bool
                pub const m_nTakeDamageFlags: usize = 0x358; // TakeDamageFlags_t
                pub const m_nPlatformType: usize = 0x360; // EntityPlatformTypes_t
                pub const m_ubInterpolationFrame: usize = 0x361; // uint8
                pub const m_hSceneObjectController: usize = 0x364; // CHandle<C_BaseEntity>
                pub const m_nNoInterpolationTick: usize = 0x368; // int32
                pub const m_nVisibilityNoInterpolationTick: usize = 0x36C; // int32
                pub const m_flProxyRandomValue: usize = 0x370; // float32
                pub const m_iEFlags: usize = 0x374; // int32
                pub const m_nWaterType: usize = 0x378; // uint8
                pub const m_bInterpolateEvenWithNoModel: usize = 0x379; // bool
                pub const m_bPredictionEligible: usize = 0x37A; // bool
                pub const m_bApplyLayerMatchIDToModel: usize = 0x37B; // bool
                pub const m_tokLayerMatchID: usize = 0x37C; // CUtlStringToken
                pub const m_nSubclassID: usize = 0x380; // CUtlStringToken
                pub const m_nSimulationTick: usize = 0x390; // int32
                pub const m_iCurrentThinkContext: usize = 0x394; // int32
                pub const m_aThinkFunctions: usize = 0x398; // CUtlVector<thinkfunc_t>
                pub const m_bDisabledContextThinks: usize = 0x3B0; // bool
                pub const m_flAnimTime: usize = 0x3B4; // float32
                pub const m_flSimulationTime: usize = 0x3B8; // float32
                pub const m_nSceneObjectOverrideFlags: usize = 0x3BC; // uint8
                pub const m_bHasSuccessfullyInterpolated: usize = 0x3BD; // bool
                pub const m_bHasAddedVarsToInterpolation: usize = 0x3BE; // bool
                pub const m_bRenderEvenWhenNotSuccessfullyInterpolated: usize = 0x3BF; // bool
                pub const m_nInterpolationLatchDirtyFlags: usize = 0x3C0; // int32[2]
                pub const m_ListEntry: usize = 0x3C8; // uint16[11]
                pub const m_flCreateTime: usize = 0x3E0; // GameTime_t
                pub const m_flSpeed: usize = 0x3E4; // float32
                pub const m_EntClientFlags: usize = 0x3E8; // uint16
                pub const m_bClientSideRagdoll: usize = 0x3EA; // bool
                pub const m_iTeamNum: usize = 0x3EB; // uint8
                pub const m_spawnflags: usize = 0x3EC; // uint32
                pub const m_nNextThinkTick: usize = 0x3F0; // GameTick_t
                pub const m_fFlags: usize = 0x3F8; // uint32
                pub const m_vecAbsVelocity: usize = 0x3FC; // Vector
                pub const m_vecServerVelocity: usize = 0x408; // CNetworkVelocityVector
                pub const m_vecVelocity: usize = 0x430; // CNetworkVelocityVector
                pub const m_vecBaseVelocity: usize = 0x510; // Vector
                pub const m_hEffectEntity: usize = 0x51C; // CHandle<C_BaseEntity>
                pub const m_hOwnerEntity: usize = 0x520; // CHandle<C_BaseEntity>
                pub const m_MoveCollide: usize = 0x524; // MoveCollide_t
                pub const m_MoveType: usize = 0x525; // MoveType_t
                pub const m_nActualMoveType: usize = 0x526; // MoveType_t
                pub const m_flWaterLevel: usize = 0x528; // float32
                pub const m_fEffects: usize = 0x52C; // uint32
                pub const m_hGroundEntity: usize = 0x530; // CHandle<C_BaseEntity>
                pub const m_nGroundBodyIndex: usize = 0x534; // int32
                pub const m_flFriction: usize = 0x538; // float32
                pub const m_flElasticity: usize = 0x53C; // float32
                pub const m_flGravityScale: usize = 0x540; // float32
                pub const m_flTimeScale: usize = 0x544; // float32
                pub const m_bAnimatedEveryTick: usize = 0x548; // bool
                pub const m_bGravityDisabled: usize = 0x549; // bool
                pub const m_flNavIgnoreUntilTime: usize = 0x54C; // GameTime_t
                pub const m_hThink: usize = 0x550; // uint16
                pub const m_fBBoxVisFlags: usize = 0x560; // uint8
                pub const m_flActualGravityScale: usize = 0x564; // float32
                pub const m_bGravityActuallyDisabled: usize = 0x568; // bool
                pub const m_bPredictable: usize = 0x569; // bool
                pub const m_bRenderWithViewModels: usize = 0x56A; // bool
                pub const m_nFirstPredictableCommand: usize = 0x56C; // int32
                pub const m_nLastPredictableCommand: usize = 0x570; // int32
                pub const m_hOldMoveParent: usize = 0x574; // CHandle<C_BaseEntity>
                pub const m_Particles: usize = 0x578; // CParticleProperty
                pub const m_vecAngVelocity: usize = 0x5A8; // QAngle
                pub const m_DataChangeEventRef: usize = 0x5B4; // int32
                pub const m_dependencies: usize = 0x5B8; // CUtlVector<CEntityHandle>
                pub const m_nCreationTick: usize = 0x5D0; // int32
                pub const m_bAnimTimeChanged: usize = 0x5E1; // bool
                pub const m_bSimulationTimeChanged: usize = 0x5E2; // bool
                pub const m_sUniqueHammerID: usize = 0x5F0; // CUtlString
                pub const m_nBloodType: usize = 0x5F8; // BloodType
            };
            // Parent: None
            // Field count: 4
            pub const ActiveModelConfig_t = struct {
                pub const m_Handle: usize = 0x30; // ModelConfigHandle_t
                pub const m_Name: usize = 0x38; // CUtlSymbolLarge
                pub const m_AssociatedEntities: usize = 0x40; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                pub const m_AssociatedEntityNames: usize = 0x58; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub const C_WeaponSSG08 = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CPulseCell_Value_Curve = struct {
                pub const m_Curve: usize = 0x48; // CPiecewiseCurve
            };
            // Parent: C_DynamicProp
            // Field count: 7
            pub const C_Chicken = struct {
                pub const m_hHolidayHatAddon: usize = 0x13A8; // CHandle<CBaseAnimGraph>
                pub const m_jumpedThisFrame: usize = 0x13AC; // bool
                pub const m_leader: usize = 0x13B0; // CHandle<C_CSPlayerPawn>
                pub const m_AttributeManager: usize = 0x13B8; // C_AttributeContainer
                pub const m_bAttributesInitialized: usize = 0x1888; // bool
                pub const m_hWaterWakeParticles: usize = 0x188C; // ParticleIndex_t
                pub const m_bIsPreviewModel: usize = 0x1890; // bool
            };
            // Parent: C_BaseCombatCharacter
            // Field count: 28
            pub const C_BasePlayerPawn = struct {
                pub const m_pWeaponServices: usize = 0x11E0; // CPlayer_WeaponServices*
                pub const m_pItemServices: usize = 0x11E8; // CPlayer_ItemServices*
                pub const m_pAutoaimServices: usize = 0x11F0; // CPlayer_AutoaimServices*
                pub const m_pObserverServices: usize = 0x11F8; // CPlayer_ObserverServices*
                pub const m_pWaterServices: usize = 0x1200; // CPlayer_WaterServices*
                pub const m_pUseServices: usize = 0x1208; // CPlayer_UseServices*
                pub const m_pFlashlightServices: usize = 0x1210; // CPlayer_FlashlightServices*
                pub const m_pCameraServices: usize = 0x1218; // CPlayer_CameraServices*
                pub const m_pMovementServices: usize = 0x1220; // CPlayer_MovementServices*
                pub const m_ServerViewAngleChanges: usize = 0x1230; // C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
                pub const v_angle: usize = 0x1298; // QAngle
                pub const v_anglePrevious: usize = 0x12A4; // QAngle
                pub const m_iHideHUD: usize = 0x12B0; // uint32
                pub const m_skybox3d: usize = 0x12B8; // sky3dparams_t
                pub const m_flDeathTime: usize = 0x1348; // GameTime_t
                pub const m_vecPredictionError: usize = 0x134C; // Vector
                pub const m_flPredictionErrorTime: usize = 0x1358; // GameTime_t
                pub const m_vecLastCameraSetupLocalOrigin: usize = 0x1378; // Vector
                pub const m_flLastCameraSetupTime: usize = 0x1384; // GameTime_t
                pub const m_flFOVSensitivityAdjust: usize = 0x1388; // float32
                pub const m_flMouseSensitivity: usize = 0x138C; // float32
                pub const m_vOldOrigin: usize = 0x1390; // Vector
                pub const m_flOldSimulationTime: usize = 0x139C; // float32
                pub const m_nLastExecutedCommandNumber: usize = 0x13A0; // int32
                pub const m_nLastExecutedCommandTick: usize = 0x13A4; // int32
                pub const m_hController: usize = 0x13A8; // CHandle<CBasePlayerController>
                pub const m_hDefaultController: usize = 0x13AC; // CHandle<CBasePlayerController>
                pub const m_bIsSwappingToPredictableController: usize = 0x13B0; // bool
            };
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            pub const C_SoundOpvarSetAABBEntity = struct {
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub const C_WeaponBizon = struct {
            };
            // Parent: C_CS2WeaponModuleBase
            // Field count: 1
            pub const C_StattrakModule = struct {
                pub const m_bKnife: usize = 0x1160; // bool
            };
            // Parent: CCSPlayerBase_CameraServices
            // Field count: 0
            pub const CCSObserver_CameraServices = struct {
            };
            // Parent: CEnvSoundscape
            // Field count: 1
            pub const CEnvSoundscapeProxy = struct {
                pub const m_MainSoundscapeName: usize = 0x690; // CUtlSymbolLarge
            };
            // Parent: C_BaseEntity
            // Field count: 15
            pub const C_SoundEventEntity = struct {
                pub const m_bStartOnSpawn: usize = 0x600; // bool
                pub const m_bToLocalPlayer: usize = 0x601; // bool
                pub const m_bStopOnNew: usize = 0x602; // bool
                pub const m_bSaveRestore: usize = 0x603; // bool
                pub const m_bSavedIsPlaying: usize = 0x604; // bool
                pub const m_flSavedElapsedTime: usize = 0x608; // float32
                pub const m_iszSourceEntityName: usize = 0x610; // CUtlSymbolLarge
                pub const m_iszAttachmentName: usize = 0x618; // CUtlSymbolLarge
                pub const m_onGUIDChanged: usize = 0x620; // CEntityOutputTemplate<SndOpEventGuid_t>
                pub const m_onSoundFinished: usize = 0x650; // CEntityIOOutput
                pub const m_flClientCullRadius: usize = 0x668; // float32
                pub const m_iszSoundName: usize = 0x698; // CUtlSymbolLarge
                pub const m_hSource: usize = 0x6B4; // CEntityHandle
                pub const m_nEntityIndexSelection: usize = 0x6B8; // int32
                pub const m_bClientSideOnly: usize = 0x0; // bitfield:1
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Inflow_EventHandler = struct {
                pub const m_EventName: usize = 0x80; // PulseSymbol_t
            };
            // Parent: C_LightEntity
            // Field count: 0
            pub const C_LightOrthoEntity = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_BaseFlow = struct {
            };
            // Parent: C_BaseTrigger
            // Field count: 1
            pub const CBombTarget = struct {
                pub const m_bBombPlantedHere: usize = 0x1078; // bool
            };
            // Parent: C_CSWeaponBase
            // Field count: 1
            pub const C_Knife = struct {
                pub const m_bFirstAttack: usize = 0x1CB0; // bool
            };
            // Parent: C_CSGO_TeamPreviewCamera
            // Field count: 0
            pub const C_CSGO_TerroristWingmanIntroCamera = struct {
            };
            // Parent: CGameSceneNode
            // Field count: 7
            pub const CSkeletonInstance = struct {
                pub const m_modelState: usize = 0x150; // CModelState
                pub const m_bUseParentRenderBounds: usize = 0x3C0; // bool
                pub const m_bDisableSolidCollisionsForHierarchy: usize = 0x3C1; // bool
                pub const m_bDirtyMotionType: usize = 0x0; // bitfield:1
                pub const m_bIsGeneratingLatchedParentSpaceState: usize = 0x0; // bitfield:1
                pub const m_materialGroup: usize = 0x3C4; // CUtlStringToken
                pub const m_nHitboxSet: usize = 0x3C8; // uint8
            };
            // Parent: None
            // Field count: 0
            pub const CEntityComponent = struct {
            };
            // Parent: C_Item
            // Field count: 2
            pub const C_ItemDogtags = struct {
                pub const m_OwningPlayer: usize = 0x17C8; // CHandle<C_CSPlayerPawn>
                pub const m_KillingPlayer: usize = 0x17CC; // CHandle<C_CSPlayerPawn>
            };
            // Parent: CBaseAnimGraph
            // Field count: 0
            pub const C_LateUpdatedAnimating = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Outflow_CycleShuffled__InstanceState_t = struct {
                pub const m_Shuffle: usize = 0x0; // CUtlVectorFixedGrowable<uint8,8>
                pub const m_nNextShuffle: usize = 0x20; // int32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_BaseLerp__CursorState_t = struct {
                pub const m_StartTime: usize = 0x0; // GameTime_t
                pub const m_EndTime: usize = 0x4; // GameTime_t
            };
            // Parent: None
            // Field count: 0
            pub const CPulseAnimFuncs = struct {
            };
            // Parent: C_BaseModelEntity
            // Field count: 4
            pub const C_BaseClientUIEntity = struct {
                pub const m_bEnabled: usize = 0xFB0; // bool
                pub const m_DialogXMLName: usize = 0xFB8; // CUtlSymbolLarge
                pub const m_PanelClassName: usize = 0xFC0; // CUtlSymbolLarge
                pub const m_PanelID: usize = 0xFC8; // CUtlSymbolLarge
            };
            // Parent: None
            // Field count: 1
            pub const CPulseCell_WaitForCursorsWithTagBase__CursorState_t = struct {
                pub const m_TagName: usize = 0x0; // PulseSymbol_t
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            pub const CPulseArraylib = struct {
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub const C_WeaponUSPSilencer = struct {
            };
            // Parent: C_BaseCSGrenadeProjectile
            // Field count: 1
            pub const C_MolotovProjectile = struct {
                pub const m_bIsIncGrenade: usize = 0x1238; // bool
            };
            // Parent: C_BaseTrigger
            // Field count: 0
            pub const C_TriggerLerpObject = struct {
            };
            // Parent: None
            // Field count: 0
            pub const CPointTemplateAPI = struct {
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub const C_WeaponRevolver = struct {
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub const C_WeaponElite = struct {
            };
            // Parent: C_DynamicProp
            // Field count: 0
            pub const C_DynamicPropAlias_cable_dynamic = struct {
            };
            // Parent: CBaseAnimGraph
            // Field count: 4
            pub const CBaseProp = struct {
                pub const m_bModelOverrodeBlockLOS: usize = 0x1158; // bool
                pub const m_iShapeType: usize = 0x115C; // int32
                pub const m_bConformToCollisionBounds: usize = 0x1160; // bool
                pub const m_mPreferredCatchTransform: usize = 0x1170; // CTransform
            };
            // Parent: C_PointEntity
            // Field count: 12
            pub const CInfoOffscreenPanoramaTexture = struct {
                pub const m_bDisabled: usize = 0x600; // bool
                pub const m_nResolutionX: usize = 0x604; // int32
                pub const m_nResolutionY: usize = 0x608; // int32
                pub const m_szPanelType: usize = 0x610; // CUtlSymbolLarge
                pub const m_szLayoutFileName: usize = 0x618; // CUtlSymbolLarge
                pub const m_RenderAttrName: usize = 0x620; // CUtlSymbolLarge
                pub const m_TargetEntities: usize = 0x628; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                pub const m_nTargetChangeCount: usize = 0x640; // int32
                pub const m_vecCSSClasses: usize = 0x648; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
                pub const m_szTargetsName: usize = 0x660; // CUtlSymbolLarge
                pub const m_AdditionalTargetEntities: usize = 0x668; // CUtlVector<CHandle<C_BaseModelEntity>>
                pub const m_bCheckCSSClasses: usize = 0x7E0; // bool
            };
            // Parent: None
            // Field count: 84
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertySuppressBaseClassField
            // MPropertySuppressBaseClassField
            pub const CCSWeaponBaseVData = struct {
                pub const m_WeaponType: usize = 0x520; // CSWeaponType
                pub const m_WeaponCategory: usize = 0x524; // CSWeaponCategory
                pub const m_szAnimSkeleton: usize = 0x528; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCNmSkeleton>>
                pub const m_vecMuzzlePos0: usize = 0x608; // Vector
                pub const m_vecMuzzlePos1: usize = 0x614; // Vector
                pub const m_szTracerParticle: usize = 0x620; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                pub const m_GearSlot: usize = 0x700; // gear_slot_t
                pub const m_GearSlotPosition: usize = 0x704; // int32
                pub const m_DefaultLoadoutSlot: usize = 0x708; // loadout_slot_t
                pub const m_nPrice: usize = 0x70C; // int32
                pub const m_nKillAward: usize = 0x710; // int32
                pub const m_nPrimaryReserveAmmoMax: usize = 0x714; // int32
                pub const m_nSecondaryReserveAmmoMax: usize = 0x718; // int32
                pub const m_bMeleeWeapon: usize = 0x71C; // bool
                pub const m_bHasBurstMode: usize = 0x71D; // bool
                pub const m_bIsRevolver: usize = 0x71E; // bool
                pub const m_bCannotShootUnderwater: usize = 0x71F; // bool
                pub const m_szName: usize = 0x720; // CGlobalSymbol
                pub const m_eSilencerType: usize = 0x728; // CSWeaponSilencerType
                pub const m_nCrosshairMinDistance: usize = 0x72C; // int32
                pub const m_nCrosshairDeltaDistance: usize = 0x730; // int32
                pub const m_bIsFullAuto: usize = 0x734; // bool
                pub const m_nNumBullets: usize = 0x738; // int32
                pub const m_bReloadsSingleShells: usize = 0x73C; // bool
                pub const m_flCycleTime: usize = 0x740; // CFiringModeFloat
                pub const m_flCycleTimeWhenInBurstMode: usize = 0x748; // float32
                pub const m_flTimeBetweenBurstShots: usize = 0x74C; // float32
                pub const m_flMaxSpeed: usize = 0x750; // CFiringModeFloat
                pub const m_flSpread: usize = 0x758; // CFiringModeFloat
                pub const m_flInaccuracyCrouch: usize = 0x760; // CFiringModeFloat
                pub const m_flInaccuracyStand: usize = 0x768; // CFiringModeFloat
                pub const m_flInaccuracyJump: usize = 0x770; // CFiringModeFloat
                pub const m_flInaccuracyLand: usize = 0x778; // CFiringModeFloat
                pub const m_flInaccuracyLadder: usize = 0x780; // CFiringModeFloat
                pub const m_flInaccuracyFire: usize = 0x788; // CFiringModeFloat
                pub const m_flInaccuracyMove: usize = 0x790; // CFiringModeFloat
                pub const m_flRecoilAngle: usize = 0x798; // CFiringModeFloat
                pub const m_flRecoilAngleVariance: usize = 0x7A0; // CFiringModeFloat
                pub const m_flRecoilMagnitude: usize = 0x7A8; // CFiringModeFloat
                pub const m_flRecoilMagnitudeVariance: usize = 0x7B0; // CFiringModeFloat
                pub const m_nTracerFrequency: usize = 0x7B8; // CFiringModeInt
                pub const m_flInaccuracyJumpInitial: usize = 0x7C0; // float32
                pub const m_flInaccuracyJumpApex: usize = 0x7C4; // float32
                pub const m_flInaccuracyReload: usize = 0x7C8; // float32
                pub const m_flDeployDuration: usize = 0x7CC; // float32
                pub const m_flDisallowAttackAfterReloadStartDuration: usize = 0x7D0; // float32
                pub const m_nBurstShotCount: usize = 0x7D4; // int32
                pub const m_bAllowBurstHolster: usize = 0x7D8; // bool
                pub const m_nRecoilSeed: usize = 0x7DC; // int32
                pub const m_nSpreadSeed: usize = 0x7E0; // int32
                pub const m_flAttackMovespeedFactor: usize = 0x7E4; // float32
                pub const m_flInaccuracyPitchShift: usize = 0x7E8; // float32
                pub const m_flInaccuracyAltSoundThreshold: usize = 0x7EC; // float32
                pub const m_szUseRadioSubtitle: usize = 0x7F0; // CUtlString
                pub const m_bUnzoomsAfterShot: usize = 0x7F8; // bool
                pub const m_bHideViewModelWhenZoomed: usize = 0x7F9; // bool
                pub const m_nZoomLevels: usize = 0x7FC; // int32
                pub const m_nZoomFOV1: usize = 0x800; // int32
                pub const m_nZoomFOV2: usize = 0x804; // int32
                pub const m_flZoomTime0: usize = 0x808; // float32
                pub const m_flZoomTime1: usize = 0x80C; // float32
                pub const m_flZoomTime2: usize = 0x810; // float32
                pub const m_flIronSightPullUpSpeed: usize = 0x814; // float32
                pub const m_flIronSightPutDownSpeed: usize = 0x818; // float32
                pub const m_flIronSightFOV: usize = 0x81C; // float32
                pub const m_flIronSightPivotForward: usize = 0x820; // float32
                pub const m_flIronSightLooseness: usize = 0x824; // float32
                pub const m_nDamage: usize = 0x828; // int32
                pub const m_flHeadshotMultiplier: usize = 0x82C; // float32
                pub const m_flArmorRatio: usize = 0x830; // float32
                pub const m_flPenetration: usize = 0x834; // float32
                pub const m_flRange: usize = 0x838; // float32
                pub const m_flRangeModifier: usize = 0x83C; // float32
                pub const m_flFlinchVelocityModifierLarge: usize = 0x840; // float32
                pub const m_flFlinchVelocityModifierSmall: usize = 0x844; // float32
                pub const m_flRecoveryTimeCrouch: usize = 0x848; // float32
                pub const m_flRecoveryTimeStand: usize = 0x84C; // float32
                pub const m_flRecoveryTimeCrouchFinal: usize = 0x850; // float32
                pub const m_flRecoveryTimeStandFinal: usize = 0x854; // float32
                pub const m_nRecoveryTransitionStartBullet: usize = 0x858; // int32
                pub const m_nRecoveryTransitionEndBullet: usize = 0x85C; // int32
                pub const m_flThrowVelocity: usize = 0x860; // float32
                pub const m_vSmokeColor: usize = 0x864; // Vector
                pub const m_szAnimClass: usize = 0x870; // CGlobalSymbol
            };
            // Parent: None
            // Field count: 6
            pub const CAttributeManager = struct {
                pub const m_Providers: usize = 0x8; // CUtlVector<CHandle<C_BaseEntity>>
                pub const m_iReapplyProvisionParity: usize = 0x20; // int32
                pub const m_hOuter: usize = 0x24; // CHandle<C_BaseEntity>
                pub const m_bPreventLoopback: usize = 0x28; // bool
                pub const m_ProviderType: usize = 0x2C; // attributeprovidertypes_t
                pub const m_CachedResults: usize = 0x30; // CUtlVector<CAttributeManager::cached_attribute_float_t>
            };
            // Parent: None
            // Field count: 0
            pub const SignatureOutflow_Continue = struct {
            };
            // Parent: C_PointEntity
            // Field count: 0
            pub const CInfoTarget = struct {
            };
            // Parent: CPlayerPawnComponent
            // Field count: 20
            pub const CPlayer_CameraServices = struct {
                pub const m_vecCsViewPunchAngle: usize = 0x48; // QAngle
                pub const m_nCsViewPunchAngleTick: usize = 0x54; // GameTick_t
                pub const m_flCsViewPunchAngleTickRatio: usize = 0x58; // float32
                pub const m_PlayerFog: usize = 0x60; // C_fogplayerparams_t
                pub const m_hColorCorrectionCtrl: usize = 0xA0; // CHandle<C_ColorCorrection>
                pub const m_hViewEntity: usize = 0xA4; // CHandle<C_BaseEntity>
                pub const m_hTonemapController: usize = 0xA8; // CHandle<C_TonemapController2>
                pub const m_audio: usize = 0xB0; // audioparams_t
                pub const m_PostProcessingVolumes: usize = 0x128; // C_NetworkUtlVectorBase<CHandle<C_PostProcessingVolume>>
                pub const m_flOldPlayerZ: usize = 0x140; // float32
                pub const m_flOldPlayerViewOffsetZ: usize = 0x144; // float32
                pub const m_CurrentFog: usize = 0x148; // fogparams_t
                pub const m_hOldFogController: usize = 0x1B0; // CHandle<C_FogController>
                pub const m_bOverrideFogColor: usize = 0x1B4; // bool[5]
                pub const m_OverrideFogColor: usize = 0x1B9; // Color[5]
                pub const m_bOverrideFogStartEnd: usize = 0x1CD; // bool[5]
                pub const m_fOverrideFogStart: usize = 0x1D4; // float32[5]
                pub const m_fOverrideFogEnd: usize = 0x1E8; // float32[5]
                pub const m_hActivePostProcessingVolume: usize = 0x1FC; // CHandle<C_PostProcessingVolume>
                pub const m_angDemoViewAngles: usize = 0x200; // QAngle
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Timeline = struct {
                pub const m_TimelineEvents: usize = 0x48; // CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
                pub const m_bWaitForChildOutflows: usize = 0x60; // bool
                pub const m_OnFinished: usize = 0x68; // CPulse_ResumePoint
                pub const m_OnCanceled: usize = 0xB0; // CPulse_ResumePoint
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Inflow_EntOutputHandler = struct {
                pub const m_SourceEntity: usize = 0x80; // PulseSymbol_t
                pub const m_SourceOutput: usize = 0x90; // PulseSymbol_t
                pub const m_ExpectedParamType: usize = 0xA0; // CPulseValueFullType
            };
            // Parent: C_CSWeaponBase
            // Field count: 14
            pub const C_BaseCSGrenade = struct {
                pub const m_bClientPredictDelete: usize = 0x1CB0; // bool
                pub const m_bRedraw: usize = 0x1CB1; // bool
                pub const m_bIsHeldByPlayer: usize = 0x1CB2; // bool
                pub const m_bPinPulled: usize = 0x1CB3; // bool
                pub const m_bJumpThrow: usize = 0x1CB4; // bool
                pub const m_bThrowAnimating: usize = 0x1CB5; // bool
                pub const m_fThrowTime: usize = 0x1CB8; // GameTime_t
                pub const m_flThrowStrength: usize = 0x1CC0; // float32
                pub const m_fDropTime: usize = 0x1D38; // GameTime_t
                pub const m_fPinPullTime: usize = 0x1D3C; // GameTime_t
                pub const m_bJustPulledPin: usize = 0x1D40; // bool
                pub const m_nNextHoldTick: usize = 0x1D44; // GameTick_t
                pub const m_flNextHoldFrac: usize = 0x1D48; // float32
                pub const m_hSwitchToWeaponAfterThrow: usize = 0x1D4C; // CHandle<C_CSWeaponBase>
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataOverlayType
            // MVDataAssociatedFile
            pub const CScenePayloadVData = struct {
                pub const m_eNPCBehavior: usize = 0x0; // ENPCBehaviorOverride_t
                pub const m_sPulseFile: usize = 0x8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIPulseGraphDef>>
                pub const m_sSceneFile: usize = 0xE8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCChoreoSceneResource>>
                pub const m_ePriority: usize = 0x1C8; // InteractionPriority_t
            };
            // Parent: CBaseFilter
            // Field count: 1
            pub const CFilterAttributeInt = struct {
                pub const m_sAttributeName: usize = 0x638; // CUtlSymbolLarge
            };
            // Parent: CLogicalEntity
            // Field count: 12
            pub const CPointTemplate = struct {
                pub const m_iszWorldName: usize = 0x600; // CUtlSymbolLarge
                pub const m_iszSource2EntityLumpName: usize = 0x608; // CUtlSymbolLarge
                pub const m_iszEntityFilterName: usize = 0x610; // CUtlSymbolLarge
                pub const m_flTimeoutInterval: usize = 0x618; // float32
                pub const m_bAsynchronouslySpawnEntities: usize = 0x61C; // bool
                pub const m_clientOnlyEntityBehavior: usize = 0x620; // PointTemplateClientOnlyEntityBehavior_t
                pub const m_ownerSpawnGroupType: usize = 0x624; // PointTemplateOwnerSpawnGroupType_t
                pub const m_createdSpawnGroupHandles: usize = 0x628; // CUtlVector<uint32>
                pub const m_SpawnedEntityHandles: usize = 0x640; // CUtlVector<CEntityHandle>
                pub const m_ScriptSpawnCallback: usize = 0x658; // HSCRIPT
                pub const m_ScriptCallbackScope: usize = 0x660; // HSCRIPT
                pub const m_OnEntitySpawned: usize = 0x668; // CEntityOutputTemplate<CUtlVector<CEntityHandle>>
            };
            // Parent: CPlayerPawnComponent
            // Field count: 0
            pub const CPlayer_FlashlightServices = struct {
            };
            // Parent: CBasePlayerController
            // Field count: 68
            pub const CCSPlayerController = struct {
                pub const m_pInGameMoneyServices: usize = 0x800; // CCSPlayerController_InGameMoneyServices*
                pub const m_pInventoryServices: usize = 0x808; // CCSPlayerController_InventoryServices*
                pub const m_pActionTrackingServices: usize = 0x810; // CCSPlayerController_ActionTrackingServices*
                pub const m_pDamageServices: usize = 0x818; // CCSPlayerController_DamageServices*
                pub const m_iPing: usize = 0x820; // uint32
                pub const m_bHasCommunicationAbuseMute: usize = 0x824; // bool
                pub const m_uiCommunicationMuteFlags: usize = 0x828; // uint32
                pub const m_szCrosshairCodes: usize = 0x830; // CUtlSymbolLarge
                pub const m_iPendingTeamNum: usize = 0x838; // uint8
                pub const m_flForceTeamTime: usize = 0x83C; // GameTime_t
                pub const m_iCompTeammateColor: usize = 0x840; // int32
                pub const m_bEverPlayedOnTeam: usize = 0x844; // bool
                pub const m_flPreviousForceJoinTeamTime: usize = 0x848; // GameTime_t
                pub const m_szClan: usize = 0x850; // CUtlSymbolLarge
                pub const m_sSanitizedPlayerName: usize = 0x858; // CUtlString
                pub const m_iCoachingTeam: usize = 0x860; // int32
                pub const m_nPlayerDominated: usize = 0x868; // uint64
                pub const m_nPlayerDominatingMe: usize = 0x870; // uint64
                pub const m_iCompetitiveRanking: usize = 0x878; // int32
                pub const m_iCompetitiveWins: usize = 0x87C; // int32
                pub const m_iCompetitiveRankType: usize = 0x880; // int8
                pub const m_iCompetitiveRankingPredicted_Win: usize = 0x884; // int32
                pub const m_iCompetitiveRankingPredicted_Loss: usize = 0x888; // int32
                pub const m_iCompetitiveRankingPredicted_Tie: usize = 0x88C; // int32
                pub const m_nEndMatchNextMapVote: usize = 0x890; // int32
                pub const m_unActiveQuestId: usize = 0x894; // uint16
                pub const m_rtActiveMissionPeriod: usize = 0x898; // uint32
                pub const m_nQuestProgressReason: usize = 0x89C; // QuestProgress::Reason
                pub const m_unPlayerTvControlFlags: usize = 0x8A0; // uint32
                pub const m_iDraftIndex: usize = 0x8D0; // int32
                pub const m_msQueuedModeDisconnectionTimestamp: usize = 0x8D4; // uint32
                pub const m_uiAbandonRecordedReason: usize = 0x8D8; // uint32
                pub const m_eNetworkDisconnectionReason: usize = 0x8DC; // uint32
                pub const m_bCannotBeKicked: usize = 0x8E0; // bool
                pub const m_bEverFullyConnected: usize = 0x8E1; // bool
                pub const m_bAbandonAllowsSurrender: usize = 0x8E2; // bool
                pub const m_bAbandonOffersInstantSurrender: usize = 0x8E3; // bool
                pub const m_bDisconnection1MinWarningPrinted: usize = 0x8E4; // bool
                pub const m_bScoreReported: usize = 0x8E5; // bool
                pub const m_nDisconnectionTick: usize = 0x8E8; // int32
                pub const m_bControllingBot: usize = 0x8F8; // bool
                pub const m_bHasControlledBotThisRound: usize = 0x8F9; // bool
                pub const m_bHasBeenControlledByPlayerThisRound: usize = 0x8FA; // bool
                pub const m_nBotsControlledThisRound: usize = 0x8FC; // int32
                pub const m_bCanControlObservedBot: usize = 0x900; // bool
                pub const m_hPlayerPawn: usize = 0x904; // CHandle<C_CSPlayerPawn>
                pub const m_hObserverPawn: usize = 0x908; // CHandle<C_CSObserverPawn>
                pub const m_bPawnIsAlive: usize = 0x90C; // bool
                pub const m_iPawnHealth: usize = 0x910; // uint32
                pub const m_iPawnArmor: usize = 0x914; // int32
                pub const m_bPawnHasDefuser: usize = 0x918; // bool
                pub const m_bPawnHasHelmet: usize = 0x919; // bool
                pub const m_nPawnCharacterDefIndex: usize = 0x91A; // uint16
                pub const m_iPawnLifetimeStart: usize = 0x91C; // int32
                pub const m_iPawnLifetimeEnd: usize = 0x920; // int32
                pub const m_iPawnBotDifficulty: usize = 0x924; // int32
                pub const m_hOriginalControllerOfCurrentPawn: usize = 0x928; // CHandle<CCSPlayerController>
                pub const m_iScore: usize = 0x92C; // int32
                pub const m_recentKillQueue: usize = 0x930; // uint8[8]
                pub const m_nFirstKill: usize = 0x938; // uint8
                pub const m_nKillCount: usize = 0x939; // uint8
                pub const m_bMvpNoMusic: usize = 0x93A; // bool
                pub const m_eMvpReason: usize = 0x93C; // int32
                pub const m_iMusicKitID: usize = 0x940; // int32
                pub const m_iMusicKitMVPs: usize = 0x944; // int32
                pub const m_iMVPs: usize = 0x948; // int32
                pub const m_bIsPlayerNameDirty: usize = 0x94C; // bool
                pub const m_bFireBulletsSeedSynchronized: usize = 0x94D; // bool
            };
            // Parent: C_CSGO_TeamIntroCharacterPosition
            // Field count: 0
            pub const C_CSGO_TeamIntroCounterTerroristPosition = struct {
            };
            // Parent: CBaseAnimGraph
            // Field count: 4
            pub const C_CSGO_PreviewModel = struct {
                pub const m_defaultAnim: usize = 0x1158; // CUtlString
                pub const m_nDefaultAnimLoopMode: usize = 0x1160; // AnimLoopMode_t
                pub const m_flInitialModelScale: usize = 0x1164; // float32
                pub const m_sInitialWeaponState: usize = 0x1168; // CUtlString
            };
            // Parent: C_CSGO_TeamPreviewCharacterPosition
            // Field count: 0
            pub const C_CSGO_TeamSelectCharacterPosition = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Outflow_CycleOrdered__InstanceState_t = struct {
                pub const m_nNextIndex: usize = 0x0; // int32
            };
            // Parent: C_SoundEventEntity
            // Field count: 2
            pub const C_SoundEventAABBEntity = struct {
                pub const m_vMins: usize = 0x6C0; // Vector
                pub const m_vMaxs: usize = 0x6CC; // Vector
            };
            // Parent: CPlayer_MovementServices_Humanoid
            // Field count: 50
            pub const CCSPlayer_MovementServices = struct {
                pub const m_AnimationState: usize = 0x2E0; // CCSPlayerAnimationState
                pub const m_vecLadderNormal: usize = 0x3D0; // Vector
                pub const m_nLadderSurfacePropIndex: usize = 0x3DC; // int32
                pub const m_bDucked: usize = 0x3E0; // bool
                pub const m_flDuckAmount: usize = 0x3E4; // float32
                pub const m_flDuckSpeed: usize = 0x3E8; // float32
                pub const m_bDuckOverride: usize = 0x3EC; // bool
                pub const m_bDesiresDuck: usize = 0x3ED; // bool
                pub const m_bDucking: usize = 0x3EE; // bool
                pub const m_flDuckRootOffset: usize = 0x3F0; // float32
                pub const m_flDuckViewOffset: usize = 0x3F4; // float32
                pub const m_flLastDuckTime: usize = 0x3F8; // float32
                pub const m_flBombPlantViewOffset: usize = 0x3FC; // float32
                pub const m_vecLastPositionAtFullCrouchSpeed: usize = 0x408; // Vector2D
                pub const m_duckUntilOnGround: usize = 0x410; // bool
                pub const m_bHasWalkMovedSinceLastJump: usize = 0x411; // bool
                pub const m_bInStuckTest: usize = 0x412; // bool
                pub const m_nTraceCount: usize = 0x620; // int32
                pub const m_StuckLast: usize = 0x624; // int32
                pub const m_bSpeedCropped: usize = 0x628; // bool
                pub const m_nOldWaterLevel: usize = 0x62C; // int32
                pub const m_flWaterEntryTime: usize = 0x630; // float32
                pub const m_vecForward: usize = 0x634; // Vector
                pub const m_vecLeft: usize = 0x640; // Vector
                pub const m_vecUp: usize = 0x64C; // Vector
                pub const m_nGameCodeHasMovedPlayerAfterCommand: usize = 0x658; // int32
                pub const m_fStashGrenadeParameterWhen: usize = 0x65C; // GameTime_t
                pub const m_nButtonDownMaskPrev: usize = 0x660; // uint64
                pub const m_bUseFrictionStashedSpeed: usize = 0x668; // bool
                pub const m_flUseFrictionStashedSpeedUntilFrac: usize = 0x66C; // float32
                pub const m_flFrictionStashedSpeed: usize = 0x670; // float32
                pub const m_flStamina: usize = 0x674; // float32
                pub const m_flHeightAtJumpStart: usize = 0x678; // float32
                pub const m_flMaxJumpHeightThisJump: usize = 0x67C; // float32
                pub const m_flMaxJumpHeightLastJump: usize = 0x680; // float32
                pub const m_flStaminaAtJumpStart: usize = 0x684; // float32
                pub const m_flVelMulAtJumpStart: usize = 0x688; // float32
                pub const m_flAccumulatedJumpError: usize = 0x68C; // float32
                pub const m_LegacyJump: usize = 0x690; // CCSPlayerLegacyJump
                pub const m_ModernJump: usize = 0x6A8; // CCSPlayerModernJump
                pub const m_nLastJumpTick: usize = 0x6E0; // GameTick_t
                pub const m_flLastJumpFrac: usize = 0x6E4; // float32
                pub const m_flLastJumpVelocityZ: usize = 0x6E8; // float32
                pub const m_bJumpApexPending: usize = 0x6EC; // bool
                pub const m_flTicksSinceLastSurfingDetected: usize = 0x6F0; // float32
                pub const m_bWasSurfing: usize = 0x6F4; // bool
                pub const m_vecWalkWishVel: usize = 0x784; // Vector2D
                pub const m_gtLastTimeOnStaticWorldGround: usize = 0xFB0; // GameTime_t
                pub const m_gtLastTimeInAir: usize = 0xFB4; // GameTime_t
                pub const m_bHasEverProcessedCommand: usize = 0xFB8; // bool
            };
            // Parent: None
            // Field count: 5
            pub const SellbackPurchaseEntry_t = struct {
                pub const m_unDefIdx: usize = 0x30; // uint16
                pub const m_nCost: usize = 0x34; // int32
                pub const m_nPrevArmor: usize = 0x38; // int32
                pub const m_bPrevHelmet: usize = 0x3C; // bool
                pub const m_hItem: usize = 0x40; // CEntityHandle
            };
            // Parent: C_BaseEntity
            // Field count: 0
            pub const C_TintController = struct {
            };
            // Parent: C_CSWeaponBase
            // Field count: 2
            pub const C_WeaponBaseItem = struct {
                pub const m_bSequenceInProgress: usize = 0x1CB0; // bool
                pub const m_bRedraw: usize = 0x1CB1; // bool
            };
            // Parent: C_BaseModelEntity
            // Field count: 0
            pub const CWaterSplasher = struct {
            };
            // Parent: C_BaseModelEntity
            // Field count: 0
            pub const C_FuncBrush = struct {
            };
            // Parent: None
            // Field count: 3
            pub const PhysicsRagdollPose_t = struct {
                pub const m_Transforms: usize = 0x8; // C_NetworkUtlVectorBase<CTransform>
                pub const m_hOwner: usize = 0x20; // CHandle<C_BaseEntity>
                pub const m_bSetFromDebugHistory: usize = 0x24; // bool
            };
            // Parent: CEntityComponent
            // Field count: 10
            pub const CPropDataComponent = struct {
                pub const m_flDmgModBullet: usize = 0x10; // float32
                pub const m_flDmgModClub: usize = 0x14; // float32
                pub const m_flDmgModExplosive: usize = 0x18; // float32
                pub const m_flDmgModFire: usize = 0x1C; // float32
                pub const m_iszPhysicsDamageTableName: usize = 0x20; // CUtlSymbolLarge
                pub const m_iszBasePropData: usize = 0x28; // CUtlSymbolLarge
                pub const m_nInteractions: usize = 0x30; // int32
                pub const m_bSpawnMotionDisabled: usize = 0x34; // bool
                pub const m_nDisableTakePhysicsDamageSpawnFlag: usize = 0x38; // int32
                pub const m_nMotionDisabledSpawnFlag: usize = 0x3C; // int32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_LimitCount__InstanceState_t = struct {
                pub const m_nCurrentCount: usize = 0x0; // int32
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 1
            pub const C_WeaponCZ75a = struct {
                pub const m_bMagazineRemoved: usize = 0x1CE0; // bool
            };
            // Parent: C_BaseModelEntity
            // Field count: 7
            pub const C_DynamicLight = struct {
                pub const m_Flags: usize = 0xFA8; // uint8
                pub const m_LightStyle: usize = 0xFA9; // uint8
                pub const m_Radius: usize = 0xFAC; // float32
                pub const m_Exponent: usize = 0xFB0; // int32
                pub const m_InnerAngle: usize = 0xFB4; // float32
                pub const m_OuterAngle: usize = 0xFB8; // float32
                pub const m_SpotRadius: usize = 0xFBC; // float32
            };
            // Parent: None
            // Field count: 29
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CCS2PawnGraphController = struct {
                pub const m_bIsDefusing: usize = 0x2A0; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_moveType: usize = 0x2B8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_moveDirectionID: usize = 0x2D0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_flMoveSpeedX: usize = 0x2E8; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flMoveSpeedY: usize = 0x300; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flMoveSpeedHorizontal: usize = 0x318; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flPreviousMoveSpeedHorizontal: usize = 0x330; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flCrouchAmount: usize = 0x348; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_bIsWalking: usize = 0x360; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_bIsStutterStep: usize = 0x378; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_flWeaponDropAmount: usize = 0x390; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_groundAction: usize = 0x3A8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_groundActionDirectionID: usize = 0x3C0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_flGroundTurnAngleOrVelocity: usize = 0x3D8; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flLadderCycle: usize = 0x3F0; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flLadderYaw: usize = 0x408; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flLadderYawBackwards: usize = 0x420; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_airAction: usize = 0x438; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_flAirHeightAboveGround: usize = 0x450; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_leftFootTarget: usize = 0x468; // CAnimGraph2ParamOptionalRef<CNmTarget>
                pub const m_rightFootTarget: usize = 0x480; // CAnimGraph2ParamOptionalRef<CNmTarget>
                pub const m_flFlashedAmount: usize = 0x498; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flAimPitchAngle: usize = 0x4B0; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flAimYawAngle: usize = 0x4C8; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flinchHead: usize = 0x4E0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_flinchHeadRestart: usize = 0x4F8; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_flinchBody: usize = 0x510; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_flinchBodyRestart: usize = 0x528; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_flinchIsOnFire: usize = 0x540; // CAnimGraph2ParamOptionalRef<bool>
            };
            // Parent: None
            // Field count: 3
            pub const EngineCountdownTimer = struct {
                pub const m_duration: usize = 0x8; // float32
                pub const m_timestamp: usize = 0xC; // float32
                pub const m_timescale: usize = 0x10; // float32
            };
            // Parent: C_SoundEventEntity
            // Field count: 1
            pub const C_SoundEventSphereEntity = struct {
                pub const m_flRadius: usize = 0x6C0; // float32
            };
            // Parent: CPlayerControllerComponent
            // Field count: 2
            pub const CCSPlayerController_DamageServices = struct {
                pub const m_nSendUpdate: usize = 0x40; // int32
                pub const m_DamageList: usize = 0x48; // C_UtlVectorEmbeddedNetworkVar<CDamageRecord>
            };
            // Parent: C_CSGO_PreviewPlayer
            // Field count: 0
            pub const C_CSGO_TeamPreviewModel = struct {
            };
            // Parent: C_TonemapController2
            // Field count: 0
            pub const C_TonemapController2Alias_env_tonemap_controller2 = struct {
            };
            // Parent: C_BaseModelEntity
            // Field count: 24
            pub const C_Inferno = struct {
                pub const m_nfxFireDamageEffect: usize = 0xFE8; // ParticleIndex_t
                pub const m_hInfernoPointsSnapshot: usize = 0xFF0; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                pub const m_hInfernoFillerPointsSnapshot: usize = 0xFF8; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                pub const m_hInfernoOutlinePointsSnapshot: usize = 0x1000; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                pub const m_hInfernoClimbingOutlinePointsSnapshot: usize = 0x1008; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                pub const m_hInfernoDecalsSnapshot: usize = 0x1010; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                pub const m_firePositions: usize = 0x1018; // Vector[64]
                pub const m_fireParentPositions: usize = 0x1318; // Vector[64]
                pub const m_bFireIsBurning: usize = 0x1618; // bool[64]
                pub const m_BurnNormal: usize = 0x1658; // Vector[64]
                pub const m_fireCount: usize = 0x1958; // int32
                pub const m_nInfernoType: usize = 0x195C; // int32
                pub const m_nFireLifetime: usize = 0x1960; // float32
                pub const m_bInPostEffectTime: usize = 0x1964; // bool
                pub const m_lastFireCount: usize = 0x1968; // int32
                pub const m_nFireEffectTickBegin: usize = 0x196C; // int32
                pub const m_drawableCount: usize = 0x8570; // int32
                pub const m_blosCheck: usize = 0x8574; // bool
                pub const m_nlosperiod: usize = 0x8578; // int32
                pub const m_maxFireHalfWidth: usize = 0x857C; // float32
                pub const m_maxFireHeight: usize = 0x8580; // float32
                pub const m_minBounds: usize = 0x8584; // Vector
                pub const m_maxBounds: usize = 0x8590; // Vector
                pub const m_flLastGrassBurnThink: usize = 0x859C; // float32
            };
            // Parent: CBaseFilter
            // Field count: 0
            pub const CFilterLOS = struct {
            };
            // Parent: C_BaseEntity
            // Field count: 7
            pub const CPointOrient = struct {
                pub const m_iszSpawnTargetName: usize = 0x600; // CUtlSymbolLarge
                pub const m_hTarget: usize = 0x608; // CHandle<C_BaseEntity>
                pub const m_bActive: usize = 0x60C; // bool
                pub const m_nGoalDirection: usize = 0x610; // PointOrientGoalDirectionType_t
                pub const m_nConstraint: usize = 0x614; // PointOrientConstraint_t
                pub const m_flMaxTurnRate: usize = 0x618; // float32
                pub const m_flLastGameTime: usize = 0x61C; // GameTime_t
            };
            // Parent: C_BaseEntity
            // Field count: 1
            pub const C_GlobalLight = struct {
                pub const m_WindClothForceHandle: usize = 0xAC0; // uint16
            };
            // Parent: C_BaseEntity
            // Field count: 1
            pub const C_EnvWindClientside = struct {
                pub const m_EnvWindShared: usize = 0x600; // C_EnvWindShared
            };
            // Parent: None
            // Field count: 6
            pub const sky3dparams_t = struct {
                pub const scale: usize = 0x8; // int16
                pub const origin: usize = 0xC; // Vector
                pub const bClip3DSkyBoxNearToWorldFar: usize = 0x18; // bool
                pub const flClip3DSkyBoxNearToWorldFarOffset: usize = 0x1C; // float32
                pub const fog: usize = 0x20; // fogparams_t
                pub const m_nWorldGroupID: usize = 0x88; // WorldGroupId_t
            };
            // Parent: C_BaseCSGrenadeProjectile
            // Field count: 0
            pub const C_FlashbangProjectile = struct {
            };
            // Parent: C_SoundEventEntity
            // Field count: 5
            pub const C_SoundEventConeEntity = struct {
                pub const m_flEmitterAngle: usize = 0x6C0; // float32
                pub const m_flSweetSpotAngle: usize = 0x6C4; // float32
                pub const m_flAttenMin: usize = 0x6C8; // float32
                pub const m_flAttenMax: usize = 0x6CC; // float32
                pub const m_iszParameterName: usize = 0x6D0; // CUtlSymbolLarge
            };
            // Parent: None
            // Field count: 4
            pub const CDestructiblePartsComponent = struct {
                pub const __m_pChainEntity: usize = 0x0; // CNetworkVarChainer
                pub const m_vecDamageTakenByHitGroup: usize = 0x48; // CUtlVector<uint16>
                pub const m_hOwner: usize = 0x60; // CHandle<C_BaseModelEntity>
                pub const m_pAnimGraphDestructibleGraphController: usize = 0x68; // CBaseAnimGraphDestructibleParts_GraphController*
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub const C_WeaponP90 = struct {
            };
            // Parent: C_BaseEntity
            // Field count: 1
            pub const C_EnvWind = struct {
                pub const m_EnvWindShared: usize = 0x600; // C_EnvWindShared
            };
            // Parent: C_CSGO_TeamPreviewCamera
            // Field count: 0
            pub const C_CSGO_TerroristTeamIntroCamera = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Step_DebugLog = struct {
            };
            // Parent: CPlayerControllerComponent
            // Field count: 5
            pub const CCSPlayerController_ActionTrackingServices = struct {
                pub const m_perRoundStats: usize = 0x40; // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
                pub const m_matchStats: usize = 0xA8; // CSMatchStats_t
                pub const m_iNumRoundKills: usize = 0x128; // int32
                pub const m_iNumRoundKillsHeadshots: usize = 0x12C; // int32
                pub const m_flTotalRoundDamageDealt: usize = 0x130; // float32
            };
            // Parent: CBodyComponentSkeletonInstance
            // Field count: 1
            pub const CBodyComponentBaseAnimGraph = struct {
                pub const m_animationController: usize = 0x4E0; // CBaseAnimGraphController
            };
            // Parent: C_CSGO_PreviewModel
            // Field count: 0
            pub const C_CSGO_PreviewModelAlias_csgo_item_previewmodel = struct {
            };
            // Parent: C_PointEntity
            // Field count: 0
            pub const C_InfoInstructorHintHostageRescueZone = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_BaseYieldingInflow = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const PulseNodeDynamicOutflows_t = struct {
                pub const m_Outflows: usize = 0x0; // CUtlVector<PulseNodeDynamicOutflows_t::DynamicOutflow_t>
            };
            // Parent: C_BaseTrigger
            // Field count: 2
            pub const C_TriggerBuoyancy = struct {
                pub const m_BuoyancyHelper: usize = 0x1078; // CBuoyancyHelper
                pub const m_flFluidDensity: usize = 0x1190; // float32
            };
            // Parent: CPlayer_MovementServices
            // Field count: 6
            pub const CPlayer_MovementServices_Humanoid = struct {
                pub const m_flStepSoundTime: usize = 0x258; // float32
                pub const m_flFallVelocity: usize = 0x25C; // float32
                pub const m_groundNormal: usize = 0x260; // Vector
                pub const m_flSurfaceFriction: usize = 0x26C; // float32
                pub const m_surfaceProps: usize = 0x270; // CUtlStringToken
                pub const m_nStepside: usize = 0x280; // int32
            };
            // Parent: None
            // Field count: 1
            pub const CPulseCell_IsRequirementValid__Criteria_t = struct {
                pub const m_bIsValid: usize = 0x0; // bool
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub const C_WeaponTec9 = struct {
            };
            // Parent: C_BreakableProp
            // Field count: 5
            pub const C_PhysPropClientside = struct {
                pub const m_flTouchDelta: usize = 0x12D0; // GameTime_t
                pub const m_fDeathTime: usize = 0x12D4; // GameTime_t
                pub const m_vecDamagePosition: usize = 0x12D8; // VectorWS
                pub const m_vecDamageDirection: usize = 0x12E4; // Vector
                pub const m_nDamageType: usize = 0x12F0; // DamageTypes_t
            };
            // Parent: C_BaseToggle
            // Field count: 1
            pub const C_BaseDoor = struct {
                pub const m_bIsUsable: usize = 0xFA8; // bool
            };
            // Parent: None
            // Field count: 5
            pub const CSMatchStats_t = struct {
                pub const m_iEnemy5Ks: usize = 0x68; // int32
                pub const m_iEnemy4Ks: usize = 0x6C; // int32
                pub const m_iEnemy3Ks: usize = 0x70; // int32
                pub const m_iEnemyKnifeKills: usize = 0x74; // int32
                pub const m_iEnemyTaserKills: usize = 0x78; // int32
            };
            // Parent: None
            // Field count: 2
            pub const EntityRenderAttribute_t = struct {
                pub const m_ID: usize = 0x30; // CUtlStringToken
                pub const m_Values: usize = 0x34; // Vector4D
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Inflow_ObservableVariableListener = struct {
                pub const m_nBlackboardReference: usize = 0x80; // PulseRuntimeBlackboardReferenceIndex_t
                pub const m_bSelfReference: usize = 0x82; // bool
            };
            // Parent: None
            // Field count: 0
            pub const CFilterMultipleAPI = struct {
            };
            // Parent: CHostageRescueZoneShim
            // Field count: 0
            pub const CHostageRescueZone = struct {
            };
            // Parent: None
            // Field count: 14
            pub const CModelState = struct {
                pub const m_hModel: usize = 0xA0; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_ModelName: usize = 0xA8; // CUtlSymbolLarge
                pub const m_pVPhysicsAggregate: usize = 0xE0; // IPhysAggregateInstance*
                pub const m_flRootBoneOffset_x: usize = 0xE8; // float32
                pub const m_flRootBoneOffset_y: usize = 0xEC; // float32
                pub const m_flRootBoneOffset_z: usize = 0xF0; // float32
                pub const m_nRootBoneOffsetResetSerialNumber: usize = 0xF4; // uint8
                pub const m_bClientClothCreationSuppressed: usize = 0x110; // bool
                pub const m_nAnimStateNoInterpSerialNumber: usize = 0x1C0; // uint8
                pub const m_MeshGroupMask: usize = 0x1C8; // uint64
                pub const m_nBodyGroupChoices: usize = 0x218; // C_NetworkUtlVectorBase<int32>
                pub const m_nIdealMotionType: usize = 0x262; // int8
                pub const m_nForceLOD: usize = 0x263; // int8
                pub const m_nClothUpdateFlags: usize = 0x264; // int8
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_LerpCameraSettings__CursorState_t = struct {
                pub const m_hCamera: usize = 0x8; // CHandle<C_PointCamera>
                pub const m_OverlaidStart: usize = 0xC; // PointCameraSettings_t
                pub const m_OverlaidEnd: usize = 0x1C; // PointCameraSettings_t
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Outflow_CycleOrdered = struct {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            };
            // Parent: C_CSWeaponBase
            // Field count: 7
            pub const C_CSWeaponBaseGun = struct {
                pub const m_zoomLevel: usize = 0x1CB0; // int32
                pub const m_iBurstShotsRemaining: usize = 0x1CB4; // int32
                pub const m_iSilencerBodygroup: usize = 0x1CB8; // int32
                pub const m_silencedModelIndex: usize = 0x1CC8; // int32
                pub const m_inPrecache: usize = 0x1CCC; // bool
                pub const m_bNeedsBoltAction: usize = 0x1CCD; // bool
                pub const m_nRevolverCylinderIdx: usize = 0x1CD0; // int32
            };
            // Parent: C_GameRulesProxy
            // Field count: 1
            pub const C_CSGameRulesProxy = struct {
                pub const m_pGameRules: usize = 0x600; // C_CSGameRules*
            };
            // Parent: None
            // Field count: 17
            pub const CCollisionProperty = struct {
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
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub const C_WeaponP250 = struct {
            };
            // Parent: C_PhysicsProp
            // Field count: 1
            pub const C_ShatterGlassShardPhysics = struct {
                pub const m_ShardDesc: usize = 0x12E8; // shard_model_desc_t
            };
            // Parent: CBaseFilter
            // Field count: 1
            pub const CFilterMassGreater = struct {
                pub const m_fFilterMass: usize = 0x638; // float32
            };
            // Parent: C_BaseModelEntity
            // Field count: 13
            pub const C_EntityDissolve = struct {
                pub const m_flStartTime: usize = 0xFB0; // GameTime_t
                pub const m_flFadeInStart: usize = 0xFB4; // float32
                pub const m_flFadeInLength: usize = 0xFB8; // float32
                pub const m_flFadeOutModelStart: usize = 0xFBC; // float32
                pub const m_flFadeOutModelLength: usize = 0xFC0; // float32
                pub const m_flFadeOutStart: usize = 0xFC4; // float32
                pub const m_flFadeOutLength: usize = 0xFC8; // float32
                pub const m_flNextSparkTime: usize = 0xFCC; // GameTime_t
                pub const m_nDissolveType: usize = 0xFD0; // EntityDisolveType_t
                pub const m_vDissolverOrigin: usize = 0xFD4; // Vector
                pub const m_nMagnitude: usize = 0xFE0; // uint32
                pub const m_bCoreExplode: usize = 0xFE4; // bool
                pub const m_bLinkedToServerEnt: usize = 0xFE5; // bool
            };
            // Parent: C_SoundOpvarSetAABBEntity
            // Field count: 0
            pub const C_SoundOpvarSetOBBEntity = struct {
            };
            // Parent: None
            // Field count: 1
            pub const CCSGameModeRules_ArmsRace = struct {
                pub const m_WeaponSequence: usize = 0x30; // C_NetworkUtlVectorBase<CUtlString>
            };
            // Parent: C_FuncBrush
            // Field count: 8
            pub const C_FuncMonitor = struct {
                pub const m_targetCamera: usize = 0xFA8; // CUtlString
                pub const m_nResolutionEnum: usize = 0xFB0; // int32
                pub const m_bRenderShadows: usize = 0xFB4; // bool
                pub const m_bUseUniqueColorTarget: usize = 0xFB5; // bool
                pub const m_brushModelName: usize = 0xFB8; // CUtlString
                pub const m_hTargetCamera: usize = 0xFC0; // CHandle<C_BaseEntity>
                pub const m_bEnabled: usize = 0xFC4; // bool
                pub const m_bDraw3DSkybox: usize = 0xFC5; // bool
            };
            // Parent: CBaseAnimGraph
            // Field count: 14
            pub const C_ClientRagdoll = struct {
                pub const m_bFadeOut: usize = 0x1158; // bool
                pub const m_bImportant: usize = 0x1159; // bool
                pub const m_flEffectTime: usize = 0x115C; // GameTime_t
                pub const m_gibDespawnTime: usize = 0x1160; // GameTime_t
                pub const m_iCurrentFriction: usize = 0x1164; // int32
                pub const m_iMinFriction: usize = 0x1168; // int32
                pub const m_iMaxFriction: usize = 0x116C; // int32
                pub const m_iFrictionAnimState: usize = 0x1170; // int32
                pub const m_bReleaseRagdoll: usize = 0x1174; // bool
                pub const m_iEyeAttachment: usize = 0x1175; // AttachmentHandle_t
                pub const m_bFadingOut: usize = 0x1176; // bool
                pub const m_flScaleEnd: usize = 0x1178; // float32[10]
                pub const m_flScaleTimeStart: usize = 0x11A0; // GameTime_t[10]
                pub const m_flScaleTimeEnd: usize = 0x11C8; // GameTime_t[10]
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const PulseSelectorOutflowList_t = struct {
                pub const m_Outflows: usize = 0x0; // CUtlVector<OutflowWithRequirements_t>
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_PlaySequence__CursorState_t = struct {
                pub const m_hTarget: usize = 0x0; // CHandle<CBaseAnimGraph>
            };
            // Parent: CBodyComponent
            // Field count: 1
            pub const CBodyComponentSkeletonInstance = struct {
                pub const m_skeletonInstance: usize = 0x80; // CSkeletonInstance
            };
            // Parent: CBaseAnimGraph
            // Field count: 0
            pub const C_CS2WeaponModuleBase = struct {
            };
            // Parent: C_BaseEntity
            // Field count: 8
            pub const C_CSGO_TeamPreviewCharacterPosition = struct {
                pub const m_nVariant: usize = 0x600; // int32
                pub const m_nRandom: usize = 0x604; // int32
                pub const m_nOrdinal: usize = 0x608; // int32
                pub const m_sWeaponName: usize = 0x610; // CUtlString
                pub const m_xuid: usize = 0x618; // uint64
                pub const m_agentItem: usize = 0x620; // C_EconItemView
                pub const m_glovesItem: usize = 0xA90; // C_EconItemView
                pub const m_weaponItem: usize = 0xF00; // C_EconItemView
            };
            // Parent: C_BaseCSGrenadeProjectile
            // Field count: 10
            pub const C_SmokeGrenadeProjectile = struct {
                pub const m_nSmokeEffectTickBegin: usize = 0x1250; // int32
                pub const m_bDidSmokeEffect: usize = 0x1254; // bool
                pub const m_nRandomSeed: usize = 0x1258; // int32
                pub const m_vSmokeColor: usize = 0x125C; // Vector
                pub const m_vSmokeDetonationPos: usize = 0x1268; // Vector
                pub const m_VoxelFrameData: usize = 0x1278; // C_NetworkUtlVectorBase<uint8>
                pub const m_nVoxelFrameDataSize: usize = 0x1290; // int32
                pub const m_nVoxelUpdate: usize = 0x1294; // int32
                pub const m_bSmokeVolumeDataReceived: usize = 0x1298; // bool
                pub const m_bSmokeEffectSpawned: usize = 0x1299; // bool
            };
            // Parent: CEntityComponent
            // Field count: 1
            pub const CScriptComponent = struct {
                pub const m_scriptClassName: usize = 0x30; // CUtlSymbolLarge
            };
            // Parent: CPlayerPawnComponent
            // Field count: 1
            pub const CCSPlayer_BuyServices = struct {
                pub const m_vecSellbackPurchaseEntries: usize = 0x48; // C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
            };
            // Parent: C_BaseEntity
            // Field count: 0
            pub const C_PortraitWorldCallbackHandler = struct {
            };
            // Parent: C_BreakableProp
            // Field count: 23
            pub const C_DynamicProp = struct {
                pub const m_bUseHitboxesForRenderBox: usize = 0x12D0; // bool
                pub const m_bUseAnimGraph: usize = 0x12D1; // bool
                pub const m_pOutputAnimBegun: usize = 0x12D8; // CEntityIOOutput
                pub const m_pOutputAnimOver: usize = 0x12F0; // CEntityIOOutput
                pub const m_pOutputAnimLoopCycleOver: usize = 0x1308; // CEntityIOOutput
                pub const m_OnAnimReachedStart: usize = 0x1320; // CEntityIOOutput
                pub const m_OnAnimReachedEnd: usize = 0x1338; // CEntityIOOutput
                pub const m_iszIdleAnim: usize = 0x1350; // CUtlSymbolLarge
                pub const m_nIdleAnimLoopMode: usize = 0x1358; // AnimLoopMode_t
                pub const m_bRandomizeCycle: usize = 0x135C; // bool
                pub const m_bStartDisabled: usize = 0x135D; // bool
                pub const m_bFiredStartEndOutput: usize = 0x135E; // bool
                pub const m_bForceNpcExclude: usize = 0x135F; // bool
                pub const m_bCreateNonSolid: usize = 0x1360; // bool
                pub const m_bIsOverrideProp: usize = 0x1361; // bool
                pub const m_iInitialGlowState: usize = 0x1364; // int32
                pub const m_nGlowRange: usize = 0x1368; // int32
                pub const m_nGlowRangeMin: usize = 0x136C; // int32
                pub const m_glowColor: usize = 0x1370; // Color
                pub const m_nGlowTeam: usize = 0x1374; // int32
                pub const m_iCachedFrameCount: usize = 0x1378; // int32
                pub const m_vecCachedRenderMins: usize = 0x137C; // Vector
                pub const m_vecCachedRenderMaxs: usize = 0x1388; // Vector
            };
            // Parent: C_Team
            // Field count: 10
            pub const C_CSTeam = struct {
                pub const m_szTeamMatchStat: usize = 0x6B8; // char[512]
                pub const m_numMapVictories: usize = 0x8B8; // int32
                pub const m_bSurrendered: usize = 0x8BC; // bool
                pub const m_scoreFirstHalf: usize = 0x8C0; // int32
                pub const m_scoreSecondHalf: usize = 0x8C4; // int32
                pub const m_scoreOvertime: usize = 0x8C8; // int32
                pub const m_szClanTeamname: usize = 0x8CC; // char[129]
                pub const m_iClanID: usize = 0x950; // uint32
                pub const m_szTeamFlagImage: usize = 0x954; // char[8]
                pub const m_szTeamLogoImage: usize = 0x95C; // char[8]
            };
            // Parent: C_CS2HudModelBase
            // Field count: 0
            pub const C_CS2HudModelWeapon = struct {
            };
            // Parent: C_BaseModelEntity
            // Field count: 8
            pub const C_TextureBasedAnimatable = struct {
                pub const m_bLoop: usize = 0xFA8; // bool
                pub const m_flFPS: usize = 0xFAC; // float32
                pub const m_hPositionKeys: usize = 0xFB0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_hRotationKeys: usize = 0xFB8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_vAnimationBoundsMin: usize = 0xFC0; // Vector
                pub const m_vAnimationBoundsMax: usize = 0xFCC; // Vector
                pub const m_flStartTime: usize = 0xFD8; // float32
                pub const m_flStartFrame: usize = 0xFDC; // float32
            };
            // Parent: C_LightDirectionalEntity
            // Field count: 0
            pub const C_LightEnvironmentEntity = struct {
            };
            // Parent: None
            // Field count: 0
            pub const DestructiblePartDamageRequestAPI = struct {
            };
            // Parent: None
            // Field count: 0
            pub const CLogicRelayAPI = struct {
            };
            // Parent: C_BaseTrigger
            // Field count: 13
            pub const C_TriggerPhysics = struct {
                pub const m_gravityScale: usize = 0x1078; // float32
                pub const m_linearLimit: usize = 0x107C; // float32
                pub const m_linearDamping: usize = 0x1080; // float32
                pub const m_angularLimit: usize = 0x1084; // float32
                pub const m_angularDamping: usize = 0x1088; // float32
                pub const m_linearForce: usize = 0x108C; // float32
                pub const m_flFrequency: usize = 0x1090; // float32
                pub const m_flDampingRatio: usize = 0x1094; // float32
                pub const m_vecLinearForcePointAt: usize = 0x1098; // Vector
                pub const m_bCollapseToForcePoint: usize = 0x10A4; // bool
                pub const m_vecLinearForcePointAtWorld: usize = 0x10A8; // Vector
                pub const m_vecLinearForceDirection: usize = 0x10B4; // Vector
                pub const m_bConvertToDebrisWhenPossible: usize = 0x10C0; // bool
            };
            // Parent: C_BasePropDoor
            // Field count: 0
            pub const C_PropDoorRotating = struct {
            };
            // Parent: C_BaseEntity
            // Field count: 2
            pub const C_HandleTest = struct {
                pub const m_Handle: usize = 0x600; // CHandle<C_BaseEntity>
                pub const m_bSendHandle: usize = 0x604; // bool
            };
            // Parent: C_BaseEntity
            // Field count: 8
            pub const CInfoWorldLayer = struct {
                pub const m_pOutputOnEntitiesSpawned: usize = 0x600; // CEntityIOOutput
                pub const m_worldName: usize = 0x618; // CUtlSymbolLarge
                pub const m_layerName: usize = 0x620; // CUtlSymbolLarge
                pub const m_bWorldLayerVisible: usize = 0x628; // bool
                pub const m_bEntitiesSpawned: usize = 0x629; // bool
                pub const m_bCreateAsChildSpawnGroup: usize = 0x62A; // bool
                pub const m_hLayerSpawnGroup: usize = 0x62C; // uint32
                pub const m_bWorldLayerActuallyVisible: usize = 0x630; // bool
            };
            // Parent: CBodyComponentSkeletonInstance
            // Field count: 0
            pub const CBodyComponentBaseModelEntity = struct {
            };
            // Parent: CBaseAnimGraph
            // Field count: 1
            pub const C_Multimeter = struct {
                pub const m_hTargetC4: usize = 0x1158; // CHandle<C_PlantedC4>
            };
            // Parent: C_BaseToggle
            // Field count: 11
            pub const C_BaseTrigger = struct {
                pub const m_OnStartTouch: usize = 0xFA8; // CEntityIOOutput
                pub const m_OnStartTouchAll: usize = 0xFC0; // CEntityIOOutput
                pub const m_OnEndTouch: usize = 0xFD8; // CEntityIOOutput
                pub const m_OnEndTouchAll: usize = 0xFF0; // CEntityIOOutput
                pub const m_OnTouching: usize = 0x1008; // CEntityIOOutput
                pub const m_OnTouchingEachEntity: usize = 0x1020; // CEntityIOOutput
                pub const m_OnNotTouching: usize = 0x1038; // CEntityIOOutput
                pub const m_hTouchingEntities: usize = 0x1050; // CUtlVector<CHandle<C_BaseEntity>>
                pub const m_iFilterName: usize = 0x1068; // CUtlSymbolLarge
                pub const m_hFilter: usize = 0x1070; // CHandle<CBaseFilter>
                pub const m_bDisabled: usize = 0x1074; // bool
            };
            // Parent: CBaseFilter
            // Field count: 1
            pub const FilterDamageType = struct {
                pub const m_iDamageType: usize = 0x638; // int32
            };
            // Parent: None
            // Field count: 2
            pub const CAttributeList = struct {
                pub const m_Attributes: usize = 0x8; // C_UtlVectorEmbeddedNetworkVar<CEconItemAttribute>
                pub const m_pManager: usize = 0x70; // CAttributeManager*
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            pub const CPulseCell_Inflow_Wait = struct {
                pub const m_WakeResume: usize = 0x48; // CPulse_ResumePoint
            };
            // Parent: CBaseFilter
            // Field count: 1
            pub const CFilterProximity = struct {
                pub const m_flRadius: usize = 0x638; // float32
            };
            // Parent: None
            // Field count: 20
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CCS2WeaponGraphController = struct {
                pub const m_action: usize = 0x88; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_bActionReset: usize = 0xA0; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_flWeaponActionSpeedScale: usize = 0xB8; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_weaponCategory: usize = 0xD0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_weaponType: usize = 0xE8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_weaponExtraInfo: usize = 0x100; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_flWeaponAmmo: usize = 0x118; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flWeaponAmmoMax: usize = 0x130; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flWeaponAmmoReserve: usize = 0x148; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_bWeaponIsSilenced: usize = 0x160; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_flWeaponIronsightAmount: usize = 0x178; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_bIsUsingLegacyModel: usize = 0x190; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_idleVariation: usize = 0x1A8; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_deployVariation: usize = 0x1C0; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_attackType: usize = 0x1D8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_attackThrowStrength: usize = 0x1F0; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flAttackVariation: usize = 0x208; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_inspectVariation: usize = 0x220; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_inspectExtraInfo: usize = 0x238; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_reloadStage: usize = 0x250; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            };
            // Parent: None
            // Field count: 20
            pub const CEffectData = struct {
                pub const m_vOrigin: usize = 0x8; // VectorWS
                pub const m_vStart: usize = 0x14; // VectorWS
                pub const m_vNormal: usize = 0x20; // Vector
                pub const m_vAngles: usize = 0x2C; // QAngle
                pub const m_hEntity: usize = 0x38; // CEntityHandle
                pub const m_hOtherEntity: usize = 0x3C; // CEntityHandle
                pub const m_flScale: usize = 0x40; // float32
                pub const m_flMagnitude: usize = 0x44; // float32
                pub const m_flRadius: usize = 0x48; // float32
                pub const m_nSurfaceProp: usize = 0x4C; // CUtlStringToken
                pub const m_nEffectIndex: usize = 0x50; // CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_nDamageType: usize = 0x58; // uint32
                pub const m_nPenetrate: usize = 0x5C; // uint8
                pub const m_nMaterial: usize = 0x5E; // uint16
                pub const m_nHitBox: usize = 0x60; // int16
                pub const m_nColor: usize = 0x62; // uint8
                pub const m_fFlags: usize = 0x63; // uint8
                pub const m_nAttachmentIndex: usize = 0x64; // AttachmentHandle_t
                pub const m_nAttachmentName: usize = 0x68; // CUtlStringToken
                pub const m_iEffectName: usize = 0x6C; // uint16
            };
            // Parent: C_BaseModelEntity
            // Field count: 24
            pub const C_ParticleSystem = struct {
                pub const m_szSnapshotFileName: usize = 0xFA8; // char[512]
                pub const m_bActive: usize = 0x11A8; // bool
                pub const m_bFrozen: usize = 0x11A9; // bool
                pub const m_flFreezeTransitionDuration: usize = 0x11AC; // float32
                pub const m_nStopType: usize = 0x11B0; // int32
                pub const m_bAnimateDuringGameplayPause: usize = 0x11B4; // bool
                pub const m_iEffectIndex: usize = 0x11B8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_flStartTime: usize = 0x11C0; // GameTime_t
                pub const m_flPreSimTime: usize = 0x11C4; // float32
                pub const m_vServerControlPoints: usize = 0x11C8; // Vector[4]
                pub const m_iServerControlPointAssignments: usize = 0x11F8; // uint8[4]
                pub const m_hControlPointEnts: usize = 0x11FC; // CHandle<C_BaseEntity>[64]
                pub const m_bNoSave: usize = 0x12FC; // bool
                pub const m_bNoFreeze: usize = 0x12FD; // bool
                pub const m_bNoRamp: usize = 0x12FE; // bool
                pub const m_bStartActive: usize = 0x12FF; // bool
                pub const m_iszEffectName: usize = 0x1300; // CUtlSymbolLarge
                pub const m_iszControlPointNames: usize = 0x1308; // CUtlSymbolLarge[64]
                pub const m_nDataCP: usize = 0x1508; // int32
                pub const m_vecDataCPValue: usize = 0x150C; // Vector
                pub const m_nTintCP: usize = 0x1518; // int32
                pub const m_clrTint: usize = 0x151C; // Color
                pub const m_bOldActive: usize = 0x1540; // bool
                pub const m_bOldFrozen: usize = 0x1541; // bool
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Outflow_CycleShuffled = struct {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub const C_WeaponSCAR20 = struct {
            };
            // Parent: C_BaseToggle
            // Field count: 0
            pub const C_FuncMover = struct {
            };
            // Parent: None
            // Field count: 3
            pub const CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t = struct {
                pub const pItem: usize = 0x0; // C_EconItemView*
                pub const team: usize = 0x8; // uint16
                pub const slot: usize = 0xA; // uint16
            };
            // Parent: CEntityComponent
            // Field count: 70
            pub const CLightComponent = struct {
                pub const __m_pChainEntity: usize = 0x38; // CNetworkVarChainer
                pub const m_Color: usize = 0x75; // Color
                pub const m_SecondaryColor: usize = 0x79; // Color
                pub const m_flBrightness: usize = 0x80; // float32
                pub const m_flBrightnessScale: usize = 0x84; // float32
                pub const m_flBrightnessMult: usize = 0x88; // float32
                pub const m_flRange: usize = 0x8C; // float32
                pub const m_flFalloff: usize = 0x90; // float32
                pub const m_flAttenuation0: usize = 0x94; // float32
                pub const m_flAttenuation1: usize = 0x98; // float32
                pub const m_flAttenuation2: usize = 0x9C; // float32
                pub const m_flTheta: usize = 0xA0; // float32
                pub const m_flPhi: usize = 0xA4; // float32
                pub const m_hLightCookie: usize = 0xA8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_nCascades: usize = 0xB0; // int32
                pub const m_nCastShadows: usize = 0xB4; // int32
                pub const m_nShadowWidth: usize = 0xB8; // int32
                pub const m_nShadowHeight: usize = 0xBC; // int32
                pub const m_bRenderDiffuse: usize = 0xC0; // bool
                pub const m_nRenderSpecular: usize = 0xC4; // int32
                pub const m_bRenderTransmissive: usize = 0xC8; // bool
                pub const m_flOrthoLightWidth: usize = 0xCC; // float32
                pub const m_flOrthoLightHeight: usize = 0xD0; // float32
                pub const m_nStyle: usize = 0xD4; // int32
                pub const m_Pattern: usize = 0xD8; // CUtlString
                pub const m_nCascadeRenderStaticObjects: usize = 0xE0; // int32
                pub const m_flShadowCascadeCrossFade: usize = 0xE4; // float32
                pub const m_flShadowCascadeDistanceFade: usize = 0xE8; // float32
                pub const m_flShadowCascadeDistance0: usize = 0xEC; // float32
                pub const m_flShadowCascadeDistance1: usize = 0xF0; // float32
                pub const m_flShadowCascadeDistance2: usize = 0xF4; // float32
                pub const m_flShadowCascadeDistance3: usize = 0xF8; // float32
                pub const m_nShadowCascadeResolution0: usize = 0xFC; // int32
                pub const m_nShadowCascadeResolution1: usize = 0x100; // int32
                pub const m_nShadowCascadeResolution2: usize = 0x104; // int32
                pub const m_nShadowCascadeResolution3: usize = 0x108; // int32
                pub const m_bUsesBakedShadowing: usize = 0x10C; // bool
                pub const m_nShadowPriority: usize = 0x110; // int32
                pub const m_nBakedShadowIndex: usize = 0x114; // int32
                pub const m_nLightPathUniqueId: usize = 0x118; // int32
                pub const m_nLightMapUniqueId: usize = 0x11C; // int32
                pub const m_bRenderToCubemaps: usize = 0x120; // bool
                pub const m_bAllowSSTGeneration: usize = 0x121; // bool
                pub const m_nDirectLight: usize = 0x124; // int32
                pub const m_nBounceLight: usize = 0x128; // int32
                pub const m_flBounceScale: usize = 0x12C; // float32
                pub const m_flFadeMinDist: usize = 0x130; // float32
                pub const m_flFadeMaxDist: usize = 0x134; // float32
                pub const m_flShadowFadeMinDist: usize = 0x138; // float32
                pub const m_flShadowFadeMaxDist: usize = 0x13C; // float32
                pub const m_bEnabled: usize = 0x140; // bool
                pub const m_bFlicker: usize = 0x141; // bool
                pub const m_bPrecomputedFieldsValid: usize = 0x142; // bool
                pub const m_vPrecomputedBoundsMins: usize = 0x144; // Vector
                pub const m_vPrecomputedBoundsMaxs: usize = 0x150; // Vector
                pub const m_vPrecomputedOBBOrigin: usize = 0x15C; // Vector
                pub const m_vPrecomputedOBBAngles: usize = 0x168; // QAngle
                pub const m_vPrecomputedOBBExtent: usize = 0x174; // Vector
                pub const m_flPrecomputedMaxRange: usize = 0x180; // float32
                pub const m_nFogLightingMode: usize = 0x184; // int32
                pub const m_flFogContributionStength: usize = 0x188; // float32
                pub const m_flNearClipPlane: usize = 0x18C; // float32
                pub const m_SkyColor: usize = 0x190; // Color
                pub const m_flSkyIntensity: usize = 0x194; // float32
                pub const m_SkyAmbientBounce: usize = 0x198; // Color
                pub const m_bUseSecondaryColor: usize = 0x19C; // bool
                pub const m_bMixedShadows: usize = 0x19D; // bool
                pub const m_flLightStyleStartTime: usize = 0x1A0; // GameTime_t
                pub const m_flCapsuleLength: usize = 0x1A4; // float32
                pub const m_flMinRoughness: usize = 0x1A8; // float32
            };
            // Parent: C_BaseCSGrenade
            // Field count: 0
            pub const C_DecoyGrenade = struct {
            };
            // Parent: CBaseAnimGraph
            // Field count: 0
            pub const C_WaterBullet = struct {
            };
            // Parent: CPlayerPawnComponent
            // Field count: 4
            pub const CCSPlayer_ActionTrackingServices = struct {
                pub const m_hLastWeaponBeforeC4AutoSwitch: usize = 0x48; // CHandle<C_BasePlayerWeapon>
                pub const m_bIsRescuing: usize = 0x4C; // bool
                pub const m_weaponPurchasesThisMatch: usize = 0x50; // WeaponPurchaseTracker_t
                pub const m_weaponPurchasesThisRound: usize = 0xC0; // WeaponPurchaseTracker_t
            };
            // Parent: C_BaseEntity
            // Field count: 18
            pub const C_EnvCubemap = struct {
                pub const m_Entity_hCubemapTexture: usize = 0x680; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_bCustomCubemapTexture: usize = 0x688; // bool
                pub const m_Entity_flInfluenceRadius: usize = 0x68C; // float32
                pub const m_Entity_vBoxProjectMins: usize = 0x690; // Vector
                pub const m_Entity_vBoxProjectMaxs: usize = 0x69C; // Vector
                pub const m_Entity_bMoveable: usize = 0x6A8; // bool
                pub const m_Entity_nHandshake: usize = 0x6AC; // int32
                pub const m_Entity_nEnvCubeMapArrayIndex: usize = 0x6B0; // int32
                pub const m_Entity_nPriority: usize = 0x6B4; // int32
                pub const m_Entity_flEdgeFadeDist: usize = 0x6B8; // float32
                pub const m_Entity_vEdgeFadeDists: usize = 0x6BC; // Vector
                pub const m_Entity_flDiffuseScale: usize = 0x6C8; // float32
                pub const m_Entity_bStartDisabled: usize = 0x6CC; // bool
                pub const m_Entity_bDefaultEnvMap: usize = 0x6CD; // bool
                pub const m_Entity_bDefaultSpecEnvMap: usize = 0x6CE; // bool
                pub const m_Entity_bIndoorCubeMap: usize = 0x6CF; // bool
                pub const m_Entity_bCopyDiffuseFromDefaultCubemap: usize = 0x6D0; // bool
                pub const m_Entity_bEnabled: usize = 0x6E0; // bool
            };
            // Parent: CPlayer_MovementServices
            // Field count: 0
            pub const CCSObserver_MovementServices = struct {
            };
            // Parent: CEntityComponent
            // Field count: 2
            pub const CBodyComponent = struct {
                pub const m_pSceneNode: usize = 0x8; // CGameSceneNode*
                pub const __m_pChainEntity: usize = 0x48; // CNetworkVarChainer
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Inflow_Method = struct {
                pub const m_MethodName: usize = 0x80; // PulseSymbol_t
                pub const m_Description: usize = 0x90; // CUtlString
                pub const m_bIsPublic: usize = 0x98; // bool
                pub const m_ReturnType: usize = 0xA0; // CPulseValueFullType
                pub const m_Args: usize = 0xB8; // CUtlLeanVector<CPulseRuntimeMethodArg>
            };
            // Parent: CBaseAnimGraph
            // Field count: 6
            pub const C_BaseCombatCharacter = struct {
                pub const m_hMyWearables: usize = 0x1158; // C_NetworkUtlVectorBase<CHandle<C_EconWearable>>
                pub const m_leftFootAttachment: usize = 0x1170; // AttachmentHandle_t
                pub const m_rightFootAttachment: usize = 0x1171; // AttachmentHandle_t
                pub const m_nWaterWakeMode: usize = 0x1174; // C_BaseCombatCharacter::WaterWakeMode_t
                pub const m_flWaterWorldZ: usize = 0x1178; // float32
                pub const m_flWaterNextTraceTime: usize = 0x117C; // float32
            };
            // Parent: None
            // Field count: 11
            pub const CGlowProperty = struct {
                pub const m_fGlowColor: usize = 0x8; // Vector
                pub const m_iGlowType: usize = 0x30; // int32
                pub const m_iGlowTeam: usize = 0x34; // int32
                pub const m_nGlowRange: usize = 0x38; // int32
                pub const m_nGlowRangeMin: usize = 0x3C; // int32
                pub const m_glowColorOverride: usize = 0x40; // Color
                pub const m_bFlashing: usize = 0x44; // bool
                pub const m_flGlowTime: usize = 0x48; // float32
                pub const m_flGlowStartTime: usize = 0x4C; // float32
                pub const m_bEligibleForScreenHighlight: usize = 0x50; // bool
                pub const m_bGlowing: usize = 0x51; // bool
            };
            // Parent: C_BaseClientUIEntity
            // Field count: 2
            pub const C_PointClientUIDialog = struct {
                pub const m_hActivator: usize = 0xFD8; // CHandle<C_BaseEntity>
                pub const m_bStartEnabled: usize = 0xFDC; // bool
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_BaseValue = struct {
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub const C_WeaponHKP2000 = struct {
            };
            // Parent: C_BaseTrigger
            // Field count: 2
            pub const C_FootstepControl = struct {
                pub const m_source: usize = 0x1078; // CUtlSymbolLarge
                pub const m_destination: usize = 0x1080; // CUtlSymbolLarge
            };
            // Parent: C_BaseEntity
            // Field count: 8
            pub const CCitadelSoundOpvarSetOBB = struct {
                pub const m_iszStackName: usize = 0x618; // CUtlSymbolLarge
                pub const m_iszOperatorName: usize = 0x620; // CUtlSymbolLarge
                pub const m_iszOpvarName: usize = 0x628; // CUtlSymbolLarge
                pub const m_vDistanceInnerMins: usize = 0x630; // Vector
                pub const m_vDistanceInnerMaxs: usize = 0x63C; // Vector
                pub const m_vDistanceOuterMins: usize = 0x648; // Vector
                pub const m_vDistanceOuterMaxs: usize = 0x654; // Vector
                pub const m_nAABBDirection: usize = 0x660; // int32
            };
            // Parent: C_CSGO_EndOfMatchLineupEndpoint
            // Field count: 0
            pub const C_CSGO_EndOfMatchLineupStart = struct {
            };
            // Parent: CPlayerPawnComponent
            // Field count: 0
            pub const CPlayer_WaterServices = struct {
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorCanvasItemSpecKV3
            pub const CPulseCell_BooleanSwitchState = struct {
                pub const m_Condition: usize = 0x48; // PulseObservableBoolExpression_t
                pub const m_Always: usize = 0xC0; // CPulse_OutflowConnection
                pub const m_WhenTrue: usize = 0x108; // CPulse_OutflowConnection
                pub const m_WhenFalse: usize = 0x150; // CPulse_OutflowConnection
            };
            // Parent: None
            // Field count: 15
            pub const CDamageRecord = struct {
                pub const m_PlayerDamager: usize = 0x30; // CHandle<C_CSPlayerPawn>
                pub const m_PlayerRecipient: usize = 0x34; // CHandle<C_CSPlayerPawn>
                pub const m_hPlayerControllerDamager: usize = 0x38; // CHandle<CCSPlayerController>
                pub const m_hPlayerControllerRecipient: usize = 0x3C; // CHandle<CCSPlayerController>
                pub const m_szPlayerDamagerName: usize = 0x40; // CUtlString
                pub const m_szPlayerRecipientName: usize = 0x48; // CUtlString
                pub const m_DamagerXuid: usize = 0x50; // uint64
                pub const m_RecipientXuid: usize = 0x58; // uint64
                pub const m_flBulletsDamage: usize = 0x60; // float32
                pub const m_flDamage: usize = 0x64; // float32
                pub const m_flActualHealthRemoved: usize = 0x68; // float32
                pub const m_iNumHits: usize = 0x6C; // int32
                pub const m_iLastBulletUpdate: usize = 0x70; // int32
                pub const m_bIsOtherEnemy: usize = 0x74; // bool
                pub const m_killType: usize = 0x75; // EKillTypes_t
            };
            // Parent: None
            // Field count: 11
            pub const VPhysicsCollisionAttribute_t = struct {
                pub const m_nInteractsAs: usize = 0x8; // uint64
                pub const m_nInteractsWith: usize = 0x10; // uint64
                pub const m_nInteractsExclude: usize = 0x18; // uint64
                pub const m_nEntityId: usize = 0x20; // uint32
                pub const m_nOwnerId: usize = 0x24; // uint32
                pub const m_nHierarchyId: usize = 0x28; // uint16
                pub const m_nDetailLayerMask: usize = 0x2A; // uint16
                pub const m_nDetailLayerMaskType: usize = 0x2C; // uint8
                pub const m_nTargetDetailLayer: usize = 0x2D; // uint8
                pub const m_nCollisionGroup: usize = 0x2E; // uint8
                pub const m_nCollisionFunctionMask: usize = 0x2F; // uint8
            };
            // Parent: C_DynamicProp
            // Field count: 0
            pub const C_DynamicPropAlias_dynamic_prop = struct {
            };
            // Parent: CEnvSoundscapeProxy
            // Field count: 0
            pub const CEnvSoundscapeProxyAlias_snd_soundscape_proxy = struct {
            };
            // Parent: C_BarnLight
            // Field count: 3
            pub const C_OmniLight = struct {
                pub const m_flInnerAngle: usize = 0x12B8; // float32
                pub const m_flOuterAngle: usize = 0x12BC; // float32
                pub const m_bShowLight: usize = 0x12C0; // bool
            };
            // Parent: C_PointEntity
            // Field count: 13
            pub const C_SceneEntity = struct {
                pub const m_bIsPlayingBack: usize = 0x608; // bool
                pub const m_bPaused: usize = 0x609; // bool
                pub const m_bMultiplayer: usize = 0x60A; // bool
                pub const m_bAutogenerated: usize = 0x60B; // bool
                pub const m_bAllRequirementsComplete: usize = 0x60C; // bool
                pub const m_flForceClientTime: usize = 0x610; // float32
                pub const m_nSceneStringIndex: usize = 0x614; // uint16
                pub const m_bClientOnly: usize = 0x616; // bool
                pub const m_hOwner: usize = 0x618; // CHandle<C_BaseModelEntity>
                pub const m_hActorList: usize = 0x620; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                pub const m_bWasPlaying: usize = 0x638; // bool
                pub const m_QueuedEvents: usize = 0x648; // CUtlVector<C_SceneEntity::QueuedEvents_t>
                pub const m_flCurrentTime: usize = 0x660; // float32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Inflow_Yield = struct {
                pub const m_UnyieldResume: usize = 0x48; // CPulse_ResumePoint
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            pub const CPulseMathlib = struct {
            };
            // Parent: C_CS2WeaponModuleBase
            // Field count: 1
            pub const C_NametagModule = struct {
                pub const m_strNametagString: usize = 0x1160; // CUtlString
            };
            // Parent: CBaseAnimGraph
            // Field count: 20
            pub const C_EconEntity = struct {
                pub const m_flFlexDelayTime: usize = 0x1168; // float32
                pub const m_flFlexDelayedWeight: usize = 0x1170; // float32*
                pub const m_bAttributesInitialized: usize = 0x1178; // bool
                pub const m_AttributeManager: usize = 0x1180; // C_AttributeContainer
                pub const m_OriginalOwnerXuidLow: usize = 0x1650; // uint32
                pub const m_OriginalOwnerXuidHigh: usize = 0x1654; // uint32
                pub const m_nFallbackPaintKit: usize = 0x1658; // int32
                pub const m_nFallbackSeed: usize = 0x165C; // int32
                pub const m_flFallbackWear: usize = 0x1660; // float32
                pub const m_nFallbackStatTrak: usize = 0x1664; // int32
                pub const m_bClientside: usize = 0x1668; // bool
                pub const m_bParticleSystemsCreated: usize = 0x1669; // bool
                pub const m_vecAttachedParticles: usize = 0x1670; // CUtlVector<int32>
                pub const m_hViewmodelAttachment: usize = 0x1688; // CHandle<CBaseAnimGraph>
                pub const m_iOldTeam: usize = 0x168C; // int32
                pub const m_bAttachmentDirty: usize = 0x1690; // bool
                pub const m_nUnloadedModelIndex: usize = 0x1694; // int32
                pub const m_iNumOwnerValidationRetries: usize = 0x1698; // int32
                pub const m_hOldProvidee: usize = 0x16A8; // CHandle<C_BaseEntity>
                pub const m_vecAttachedModels: usize = 0x16B0; // CUtlVector<C_EconEntity::AttachedModelData_t>
            };
            // Parent: CPlayerPawnComponent
            // Field count: 0
            pub const CPlayer_UseServices = struct {
            };
            // Parent: C_BaseEntity
            // Field count: 25
            pub const C_PointValueRemapper = struct {
                pub const m_bDisabled: usize = 0x600; // bool
                pub const m_bDisabledOld: usize = 0x601; // bool
                pub const m_bUpdateOnClient: usize = 0x602; // bool
                pub const m_nInputType: usize = 0x604; // ValueRemapperInputType_t
                pub const m_hRemapLineStart: usize = 0x608; // CHandle<C_BaseEntity>
                pub const m_hRemapLineEnd: usize = 0x60C; // CHandle<C_BaseEntity>
                pub const m_flMaximumChangePerSecond: usize = 0x610; // float32
                pub const m_flDisengageDistance: usize = 0x614; // float32
                pub const m_flEngageDistance: usize = 0x618; // float32
                pub const m_bRequiresUseKey: usize = 0x61C; // bool
                pub const m_nOutputType: usize = 0x620; // ValueRemapperOutputType_t
                pub const m_hOutputEntities: usize = 0x628; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                pub const m_nHapticsType: usize = 0x640; // ValueRemapperHapticsType_t
                pub const m_nMomentumType: usize = 0x644; // ValueRemapperMomentumType_t
                pub const m_flMomentumModifier: usize = 0x648; // float32
                pub const m_flSnapValue: usize = 0x64C; // float32
                pub const m_flCurrentMomentum: usize = 0x650; // float32
                pub const m_nRatchetType: usize = 0x654; // ValueRemapperRatchetType_t
                pub const m_flRatchetOffset: usize = 0x658; // float32
                pub const m_flInputOffset: usize = 0x65C; // float32
                pub const m_bEngaged: usize = 0x660; // bool
                pub const m_bFirstUpdate: usize = 0x661; // bool
                pub const m_flPreviousValue: usize = 0x664; // float32
                pub const m_flPreviousUpdateTickTime: usize = 0x668; // GameTime_t
                pub const m_vecPreviousTestPoint: usize = 0x66C; // Vector
            };
            // Parent: None
            // Field count: 2
            pub const CGameSceneNodeHandle = struct {
                pub const m_hOwner: usize = 0x8; // CEntityHandle
                pub const m_name: usize = 0xC; // CUtlStringToken
            };
            // Parent: None
            // Field count: 1
            pub const CPulseCell_Unknown = struct {
                pub const m_UnknownKeys: usize = 0x48; // KeyValues3
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub const C_WeaponMP7 = struct {
            };
            // Parent: None
            // Field count: 13
            pub const CSPerRoundStats_t = struct {
                pub const m_iKills: usize = 0x30; // int32
                pub const m_iDeaths: usize = 0x34; // int32
                pub const m_iAssists: usize = 0x38; // int32
                pub const m_iDamage: usize = 0x3C; // int32
                pub const m_iEquipmentValue: usize = 0x40; // int32
                pub const m_iMoneySaved: usize = 0x44; // int32
                pub const m_iKillReward: usize = 0x48; // int32
                pub const m_iLiveTime: usize = 0x4C; // int32
                pub const m_iHeadShotKills: usize = 0x50; // int32
                pub const m_iObjective: usize = 0x54; // int32
                pub const m_iCashEarned: usize = 0x58; // int32
                pub const m_iUtilityDamage: usize = 0x5C; // int32
                pub const m_iEnemiesFlashed: usize = 0x60; // int32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Outflow_CycleRandom = struct {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Step_PublicOutput = struct {
                pub const m_OutputIndex: usize = 0x48; // PulseRuntimeOutputIndex_t
            };
            // Parent: C_LateUpdatedAnimating
            // Field count: 0
            pub const C_CS2HudModelBase = struct {
            };
            // Parent: None
            // Field count: 98
            pub const C_CSGameRules = struct {
                pub const m_bFreezePeriod: usize = 0x40; // bool
                pub const m_bWarmupPeriod: usize = 0x41; // bool
                pub const m_fWarmupPeriodEnd: usize = 0x44; // GameTime_t
                pub const m_fWarmupPeriodStart: usize = 0x48; // GameTime_t
                pub const m_bTerroristTimeOutActive: usize = 0x4C; // bool
                pub const m_bCTTimeOutActive: usize = 0x4D; // bool
                pub const m_flTerroristTimeOutRemaining: usize = 0x50; // float32
                pub const m_flCTTimeOutRemaining: usize = 0x54; // float32
                pub const m_nTerroristTimeOuts: usize = 0x58; // int32
                pub const m_nCTTimeOuts: usize = 0x5C; // int32
                pub const m_bTechnicalTimeOut: usize = 0x60; // bool
                pub const m_bMatchWaitingForResume: usize = 0x61; // bool
                pub const m_iFreezeTime: usize = 0x64; // int32
                pub const m_iRoundTime: usize = 0x68; // int32
                pub const m_fMatchStartTime: usize = 0x6C; // float32
                pub const m_fRoundStartTime: usize = 0x70; // GameTime_t
                pub const m_flRestartRoundTime: usize = 0x74; // GameTime_t
                pub const m_bGameRestart: usize = 0x78; // bool
                pub const m_flGameStartTime: usize = 0x7C; // float32
                pub const m_timeUntilNextPhaseStarts: usize = 0x80; // float32
                pub const m_gamePhase: usize = 0x84; // int32
                pub const m_totalRoundsPlayed: usize = 0x88; // int32
                pub const m_nRoundsPlayedThisPhase: usize = 0x8C; // int32
                pub const m_nOvertimePlaying: usize = 0x90; // int32
                pub const m_iHostagesRemaining: usize = 0x94; // int32
                pub const m_bAnyHostageReached: usize = 0x98; // bool
                pub const m_bMapHasBombTarget: usize = 0x99; // bool
                pub const m_bMapHasRescueZone: usize = 0x9A; // bool
                pub const m_bMapHasBuyZone: usize = 0x9B; // bool
                pub const m_bIsQueuedMatchmaking: usize = 0x9C; // bool
                pub const m_nQueuedMatchmakingMode: usize = 0xA0; // int32
                pub const m_bIsValveDS: usize = 0xA4; // bool
                pub const m_bLogoMap: usize = 0xA5; // bool
                pub const m_bPlayAllStepSoundsOnServer: usize = 0xA6; // bool
                pub const m_iSpectatorSlotCount: usize = 0xA8; // int32
                pub const m_MatchDevice: usize = 0xAC; // int32
                pub const m_bHasMatchStarted: usize = 0xB0; // bool
                pub const m_nNextMapInMapgroup: usize = 0xB4; // int32
                pub const m_szTournamentEventName: usize = 0xB8; // char[512]
                pub const m_szTournamentEventStage: usize = 0x2B8; // char[512]
                pub const m_szMatchStatTxt: usize = 0x4B8; // char[512]
                pub const m_szTournamentPredictionsTxt: usize = 0x6B8; // char[512]
                pub const m_nTournamentPredictionsPct: usize = 0x8B8; // int32
                pub const m_flCMMItemDropRevealStartTime: usize = 0x8BC; // GameTime_t
                pub const m_flCMMItemDropRevealEndTime: usize = 0x8C0; // GameTime_t
                pub const m_bIsDroppingItems: usize = 0x8C4; // bool
                pub const m_bIsQuestEligible: usize = 0x8C5; // bool
                pub const m_bIsHltvActive: usize = 0x8C6; // bool
                pub const m_bBombPlanted: usize = 0x8C7; // bool
                pub const m_arrProhibitedItemIndices: usize = 0x8C8; // uint16[100]
                pub const m_arrTournamentActiveCasterAccounts: usize = 0x990; // uint32[4]
                pub const m_numBestOfMaps: usize = 0x9A0; // int32
                pub const m_nHalloweenMaskListSeed: usize = 0x9A4; // int32
                pub const m_bBombDropped: usize = 0x9A8; // bool
                pub const m_iRoundWinStatus: usize = 0x9AC; // int32
                pub const m_eRoundWinReason: usize = 0x9B0; // int32
                pub const m_bTCantBuy: usize = 0x9B4; // bool
                pub const m_bCTCantBuy: usize = 0x9B5; // bool
                pub const m_iMatchStats_RoundResults: usize = 0x9B8; // int32[30]
                pub const m_iMatchStats_PlayersAlive_CT: usize = 0xA30; // int32[30]
                pub const m_iMatchStats_PlayersAlive_T: usize = 0xAA8; // int32[30]
                pub const m_TeamRespawnWaveTimes: usize = 0xB20; // float32[32]
                pub const m_flNextRespawnWave: usize = 0xBA0; // GameTime_t[32]
                pub const m_vMinimapMins: usize = 0xC20; // Vector
                pub const m_vMinimapMaxs: usize = 0xC2C; // Vector
                pub const m_MinimapVerticalSectionHeights: usize = 0xC38; // float32[8]
                pub const m_ullLocalMatchID: usize = 0xC58; // uint64
                pub const m_nEndMatchMapGroupVoteTypes: usize = 0xC60; // int32[10]
                pub const m_nEndMatchMapGroupVoteOptions: usize = 0xC88; // int32[10]
                pub const m_nEndMatchMapVoteWinner: usize = 0xCB0; // int32
                pub const m_iNumConsecutiveCTLoses: usize = 0xCB4; // int32
                pub const m_iNumConsecutiveTerroristLoses: usize = 0xCB8; // int32
                pub const m_nMatchAbortedEarlyReason: usize = 0xD78; // int32
                pub const m_bHasTriggeredRoundStartMusic: usize = 0xD7C; // bool
                pub const m_bSwitchingTeamsAtRoundReset: usize = 0xD7D; // bool
                pub const m_pGameModeRules: usize = 0xD98; // CCSGameModeRules*
                pub const m_RetakeRules: usize = 0xDA0; // C_RetakeGameRules
                pub const m_nMatchEndCount: usize = 0xEF8; // uint8
                pub const m_nTTeamIntroVariant: usize = 0xEFC; // int32
                pub const m_nCTTeamIntroVariant: usize = 0xF00; // int32
                pub const m_bTeamIntroPeriod: usize = 0xF04; // bool
                pub const m_iRoundEndWinnerTeam: usize = 0xF08; // int32
                pub const m_eRoundEndReason: usize = 0xF0C; // int32
                pub const m_bRoundEndShowTimerDefend: usize = 0xF10; // bool
                pub const m_iRoundEndTimerTime: usize = 0xF14; // int32
                pub const m_sRoundEndFunFactToken: usize = 0xF18; // CUtlString
                pub const m_iRoundEndFunFactPlayerSlot: usize = 0xF20; // CPlayerSlot
                pub const m_iRoundEndFunFactData1: usize = 0xF24; // int32
                pub const m_iRoundEndFunFactData2: usize = 0xF28; // int32
                pub const m_iRoundEndFunFactData3: usize = 0xF2C; // int32
                pub const m_sRoundEndMessage: usize = 0xF30; // CUtlString
                pub const m_iRoundEndPlayerCount: usize = 0xF38; // int32
                pub const m_bRoundEndNoMusic: usize = 0xF3C; // bool
                pub const m_iRoundEndLegacy: usize = 0xF40; // int32
                pub const m_nRoundEndCount: usize = 0xF44; // uint8
                pub const m_iRoundStartRoundNumber: usize = 0xF48; // int32
                pub const m_nRoundStartCount: usize = 0xF4C; // uint8
                pub const m_flLastPerfSampleTime: usize = 0x4F58; // float64
            };
            // Parent: C_BaseModelEntity
            // Field count: 2
            pub const CGrenadeTracer = struct {
                pub const m_flTracerDuration: usize = 0xFC0; // float32
                pub const m_nType: usize = 0xFC4; // GrenadeType_t
            };
            // Parent: None
            // Field count: 0
            pub const CCSGameModeRules_Noop = struct {
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulse_BlackboardReference = struct {
                pub const m_hBlackboardResource: usize = 0x0; // CStrongHandle<InfoForResourceTypeIPulseGraphDef>
                pub const m_BlackboardResource: usize = 0x8; // PulseSymbol_t
                pub const m_nNodeID: usize = 0x18; // PulseDocNodeID_t
                pub const m_NodeName: usize = 0x20; // CGlobalSymbol
            };
            // Parent: C_BaseGrenade
            // Field count: 16
            pub const C_BaseCSGrenadeProjectile = struct {
                pub const m_vInitialPosition: usize = 0x11A0; // Vector
                pub const m_vInitialVelocity: usize = 0x11AC; // Vector
                pub const m_nBounces: usize = 0x11B8; // int32
                pub const m_nExplodeEffectIndex: usize = 0x11C0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_nExplodeEffectTickBegin: usize = 0x11C8; // int32
                pub const m_vecExplodeEffectOrigin: usize = 0x11CC; // Vector
                pub const m_flSpawnTime: usize = 0x11D8; // GameTime_t
                pub const vecLastTrailLinePos: usize = 0x11DC; // Vector
                pub const flNextTrailLineTime: usize = 0x11E8; // GameTime_t
                pub const m_bExplodeEffectBegan: usize = 0x11EC; // bool
                pub const m_bCanCreateGrenadeTrail: usize = 0x11ED; // bool
                pub const m_nSnapshotTrajectoryEffectIndex: usize = 0x11F0; // ParticleIndex_t
                pub const m_hSnapshotTrajectoryParticleSnapshot: usize = 0x11F8; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                pub const m_arrTrajectoryTrailPoints: usize = 0x1200; // CUtlVector<Vector>
                pub const m_arrTrajectoryTrailPointCreationTimes: usize = 0x1218; // CUtlVector<float32>
                pub const m_flTrajectoryTrailEffectCreationTime: usize = 0x1230; // float32
            };
            // Parent: C_BaseEntity
            // Field count: 16
            pub const C_GradientFog = struct {
                pub const m_hGradientFogTexture: usize = 0x600; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_flFogStartDistance: usize = 0x608; // float32
                pub const m_flFogEndDistance: usize = 0x60C; // float32
                pub const m_bHeightFogEnabled: usize = 0x610; // bool
                pub const m_flFogStartHeight: usize = 0x614; // float32
                pub const m_flFogEndHeight: usize = 0x618; // float32
                pub const m_flFarZ: usize = 0x61C; // float32
                pub const m_flFogMaxOpacity: usize = 0x620; // float32
                pub const m_flFogFalloffExponent: usize = 0x624; // float32
                pub const m_flFogVerticalExponent: usize = 0x628; // float32
                pub const m_fogColor: usize = 0x62C; // Color
                pub const m_flFogStrength: usize = 0x630; // float32
                pub const m_flFadeTime: usize = 0x634; // float32
                pub const m_bStartDisabled: usize = 0x638; // bool
                pub const m_bIsEnabled: usize = 0x639; // bool
                pub const m_bGradientFogNeedsTextures: usize = 0x63A; // bool
            };
            // Parent: CPlayerControllerComponent
            // Field count: 4
            pub const CCSPlayerController_InGameMoneyServices = struct {
                pub const m_iAccount: usize = 0x40; // int32
                pub const m_iStartAccount: usize = 0x44; // int32
                pub const m_iTotalCashSpent: usize = 0x48; // int32
                pub const m_iCashSpentThisRound: usize = 0x4C; // int32
            };
            // Parent: CPlayerPawnComponent
            // Field count: 6
            pub const CCSPlayer_AimPunchServices = struct {
                pub const m_predictableBaseTick: usize = 0x48; // GameTick_t
                pub const m_predictableBaseTickInterpAmount: usize = 0x4C; // float32
                pub const m_predictableBaseAngle: usize = 0x50; // QAngle
                pub const m_predictableBaseAngleVel: usize = 0x5C; // QAngle
                pub const m_unpredictableBaseTick: usize = 0xA0; // GameTick_t
                pub const m_unpredictableBaseAngle: usize = 0xA4; // QAngle
            };
            // Parent: C_BaseCSGrenadeProjectile
            // Field count: 0
            pub const C_HEGrenadeProjectile = struct {
            };
            // Parent: CBaseFilter
            // Field count: 1
            pub const CFilterModel = struct {
                pub const m_iFilterModel: usize = 0x638; // CUtlSymbolLarge
            };
            // Parent: C_SoundAreaEntityBase
            // Field count: 2
            pub const C_SoundAreaEntityOrientedBox = struct {
                pub const m_vMin: usize = 0x628; // Vector
                pub const m_vMax: usize = 0x634; // Vector
            };
            // Parent: C_SoundOpvarSetPointBase
            // Field count: 0
            pub const C_SoundOpvarSetPointEntity = struct {
            };
            // Parent: C_BaseEntity
            // Field count: 2
            pub const CPulseGameBlackboard = struct {
                pub const m_strGraphName: usize = 0x608; // CUtlString
                pub const m_strStateBlob: usize = 0x610; // CUtlString
            };
            // Parent: None
            // Field count: 4
            pub const CChoreoComponent = struct {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
                pub const m_hOwner: usize = 0x30; // CHandle<C_BaseModelEntity>
                pub const m_nNextSceneEventId: usize = 0x68; // SceneEventId_t
                pub const m_flAllowResponsesEndTime: usize = 0x6C; // GameTime_t
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            pub const CPulseCell_Value_RandomInt = struct {
            };
            // Parent: C_CSWeaponBase
            // Field count: 0
            pub const C_CSWeaponBaseShotgun = struct {
            };
            // Parent: C_RagdollProp
            // Field count: 7
            pub const C_RagdollPropAttached = struct {
                pub const m_boneIndexAttached: usize = 0x11E0; // uint32
                pub const m_ragdollAttachedObjectIndex: usize = 0x11E4; // uint32
                pub const m_attachmentPointBoneSpace: usize = 0x11E8; // Vector
                pub const m_attachmentPointRagdollSpace: usize = 0x11F4; // Vector
                pub const m_vecOffset: usize = 0x1200; // Vector
                pub const m_parentTime: usize = 0x120C; // float32
                pub const m_bHasParent: usize = 0x1210; // bool
            };
            // Parent: C_BaseModelEntity
            // Field count: 0
            pub const C_ModelPointEntity = struct {
            };
            // Parent: C_CSPlayerPawn
            // Field count: 2
            pub const C_CSGO_PreviewPlayer = struct {
                pub const m_animgraphCharacterModeString: usize = 0x3420; // CGlobalSymbol
                pub const m_flInitialModelScale: usize = 0x3428; // float32
            };
            // Parent: C_BarnLight
            // Field count: 1
            pub const C_RectLight = struct {
                pub const m_bShowLight: usize = 0x12B8; // bool
            };
            // Parent: C_BaseEntity
            // Field count: 3
            pub const CPathSimple = struct {
                pub const m_CPathQueryComponent: usize = 0x610; // CPathQueryComponent
                pub const m_pathString: usize = 0x700; // CUtlString
                pub const m_bClosedLoop: usize = 0x708; // bool
            };
            // Parent: C_BaseModelEntity
            // Field count: 3
            pub const C_FuncTrackTrain = struct {
                pub const m_nLongAxis: usize = 0xFA8; // int32
                pub const m_flRadius: usize = 0xFAC; // float32
                pub const m_flLineLength: usize = 0xFB0; // float32
            };
            // Parent: C_EconEntity
            // Field count: 2
            pub const C_EconWearable = struct {
                pub const m_nForceSkin: usize = 0x16C8; // int32
                pub const m_bAlwaysAllow: usize = 0x16CC; // bool
            };
            // Parent: C_BaseModelEntity
            // Field count: 9
            pub const C_EnvDecal = struct {
                pub const m_hDecalMaterial: usize = 0xFA8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_flWidth: usize = 0xFB0; // float32
                pub const m_flHeight: usize = 0xFB4; // float32
                pub const m_flDepth: usize = 0xFB8; // float32
                pub const m_nRenderOrder: usize = 0xFBC; // uint32
                pub const m_bProjectOnWorld: usize = 0xFC0; // bool
                pub const m_bProjectOnCharacters: usize = 0xFC1; // bool
                pub const m_bProjectOnWater: usize = 0xFC2; // bool
                pub const m_flDepthSortBias: usize = 0xFC4; // float32
            };
            // Parent: None
            // Field count: 2
            pub const EntitySpottedState_t = struct {
                pub const m_bSpotted: usize = 0x8; // bool
                pub const m_bSpottedByMask: usize = 0xC; // uint32[2]
            };
            // Parent: None
            // Field count: 25
            pub const fogparams_t = struct {
                pub const dirPrimary: usize = 0x8; // Vector
                pub const colorPrimary: usize = 0x14; // Color
                pub const colorSecondary: usize = 0x18; // Color
                pub const colorPrimaryLerpTo: usize = 0x1C; // Color
                pub const colorSecondaryLerpTo: usize = 0x20; // Color
                pub const start: usize = 0x24; // float32
                pub const end: usize = 0x28; // float32
                pub const farz: usize = 0x2C; // float32
                pub const maxdensity: usize = 0x30; // float32
                pub const exponent: usize = 0x34; // float32
                pub const HDRColorScale: usize = 0x38; // float32
                pub const skyboxFogFactor: usize = 0x3C; // float32
                pub const skyboxFogFactorLerpTo: usize = 0x40; // float32
                pub const startLerpTo: usize = 0x44; // float32
                pub const endLerpTo: usize = 0x48; // float32
                pub const maxdensityLerpTo: usize = 0x4C; // float32
                pub const lerptime: usize = 0x50; // GameTime_t
                pub const duration: usize = 0x54; // float32
                pub const blendtobackground: usize = 0x58; // float32
                pub const scattering: usize = 0x5C; // float32
                pub const locallightscale: usize = 0x60; // float32
                pub const enable: usize = 0x64; // bool
                pub const blend: usize = 0x65; // bool
                pub const m_bPadding2: usize = 0x66; // bool
                pub const m_bPadding: usize = 0x67; // bool
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub const C_WeaponM4A1 = struct {
            };
            // Parent: C_EconEntity
            // Field count: 1
            pub const C_Item = struct {
                pub const m_pReticleHintTextName: usize = 0x16C8; // char[256]
            };
            // Parent: C_BaseEntity
            // Field count: 0
            pub const C_CSPetPlacement = struct {
            };
            // Parent: C_BaseModelEntity
            // Field count: 24
            pub const C_Beam = struct {
                pub const m_flFrameRate: usize = 0xFA8; // float32
                pub const m_flHDRColorScale: usize = 0xFAC; // float32
                pub const m_flFireTime: usize = 0xFB0; // GameTime_t
                pub const m_flDamage: usize = 0xFB4; // float32
                pub const m_nNumBeamEnts: usize = 0xFB8; // uint8
                pub const m_queryHandleHalo: usize = 0xFBC; // int32
                pub const m_hBaseMaterial: usize = 0xFE0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_nHaloIndex: usize = 0xFE8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_nBeamType: usize = 0xFF0; // BeamType_t
                pub const m_nBeamFlags: usize = 0xFF4; // uint32
                pub const m_hAttachEntity: usize = 0xFF8; // CHandle<C_BaseEntity>[10]
                pub const m_nAttachIndex: usize = 0x1020; // AttachmentHandle_t[10]
                pub const m_fWidth: usize = 0x102C; // float32
                pub const m_fEndWidth: usize = 0x1030; // float32
                pub const m_fFadeLength: usize = 0x1034; // float32
                pub const m_fHaloScale: usize = 0x1038; // float32
                pub const m_fAmplitude: usize = 0x103C; // float32
                pub const m_fStartFrame: usize = 0x1040; // float32
                pub const m_fSpeed: usize = 0x1044; // float32
                pub const m_flFrame: usize = 0x1048; // float32
                pub const m_nClipStyle: usize = 0x104C; // BeamClipStyle_t
                pub const m_bTurnedOff: usize = 0x1050; // bool
                pub const m_vecEndPos: usize = 0x1054; // VectorWS
                pub const m_hEndEntity: usize = 0x1060; // CHandle<C_BaseEntity>
            };
            // Parent: C_BaseEntity
            // Field count: 22
            pub const C_EnvLightProbeVolume = struct {
                pub const m_Entity_hLightProbeTexture_AmbientCube: usize = 0x15F8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SDF: usize = 0x1600; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_DC: usize = 0x1608; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_R: usize = 0x1610; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_G: usize = 0x1618; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_B: usize = 0x1620; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightIndicesTexture: usize = 0x1628; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightScalarsTexture: usize = 0x1630; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightShadowsTexture: usize = 0x1638; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_vBoxMins: usize = 0x1640; // Vector
                pub const m_Entity_vBoxMaxs: usize = 0x164C; // Vector
                pub const m_Entity_bMoveable: usize = 0x1658; // bool
                pub const m_Entity_nHandshake: usize = 0x165C; // int32
                pub const m_Entity_nPriority: usize = 0x1660; // int32
                pub const m_Entity_bStartDisabled: usize = 0x1664; // bool
                pub const m_Entity_nLightProbeSizeX: usize = 0x1668; // int32
                pub const m_Entity_nLightProbeSizeY: usize = 0x166C; // int32
                pub const m_Entity_nLightProbeSizeZ: usize = 0x1670; // int32
                pub const m_Entity_nLightProbeAtlasX: usize = 0x1674; // int32
                pub const m_Entity_nLightProbeAtlasY: usize = 0x1678; // int32
                pub const m_Entity_nLightProbeAtlasZ: usize = 0x167C; // int32
                pub const m_Entity_bEnabled: usize = 0x1689; // bool
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataOverlayType
            // MVDataAssociatedFile
            pub const CExplosionTypeData = struct {
                pub const m_SoundName: usize = 0x0; // CSoundEventName
                pub const m_ParticleEffect: usize = 0x10; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                pub const m_bIsIncindiary: usize = 0xF0; // bool
                pub const m_bHasForces: usize = 0xF1; // bool
                pub const m_DecalType: usize = 0xF8; // CGlobalSymbol
            };
            // Parent: C_BaseModelEntity
            // Field count: 8
            pub const C_FuncConveyor = struct {
                pub const m_vecMoveDirEntitySpace: usize = 0xFB0; // Vector
                pub const m_flTargetSpeed: usize = 0xFBC; // float32
                pub const m_nTransitionStartTick: usize = 0xFC0; // GameTick_t
                pub const m_nTransitionDurationTicks: usize = 0xFC4; // int32
                pub const m_flTransitionStartSpeed: usize = 0xFC8; // float32
                pub const m_hConveyorModels: usize = 0xFD0; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                pub const m_flCurrentConveyorOffset: usize = 0xFE8; // float32
                pub const m_flCurrentConveyorSpeed: usize = 0xFEC; // float32
            };
            // Parent: CPlayer_WeaponServices
            // Field count: 5
            pub const CCSPlayer_WeaponServices = struct {
                pub const m_flNextAttack: usize = 0xD0; // GameTime_t
                pub const m_nOldTotalShootPositionHistoryCount: usize = 0xD4; // uint32
                pub const m_nOldTotalInputHistoryCount: usize = 0x370; // uint32
                pub const m_networkAnimTiming: usize = 0x1588; // C_NetworkUtlVectorBase<uint8>
                pub const m_bBlockInspectUntilNextGraphUpdate: usize = 0x15A0; // bool
            };
            // Parent: CBaseAnimGraph
            // Field count: 2
            pub const C_PhysMagnet = struct {
                pub const m_aAttachedObjectsFromServer: usize = 0x1158; // CUtlVector<int32>
                pub const m_aAttachedObjects: usize = 0x1170; // CUtlVector<CHandle<C_BaseEntity>>
            };
            // Parent: CEnvSoundscapeTriggerable
            // Field count: 0
            pub const CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable = struct {
            };
            // Parent: C_BaseModelEntity
            // Field count: 0
            pub const C_Breakable = struct {
            };
            // Parent: CBaseAnimGraph
            // Field count: 29
            pub const C_PlantedC4 = struct {
                pub const m_bBombTicking: usize = 0x1160; // bool
                pub const m_nBombSite: usize = 0x1164; // int32
                pub const m_nSourceSoundscapeHash: usize = 0x1168; // int32
                pub const m_entitySpottedState: usize = 0x1170; // EntitySpottedState_t
                pub const m_flNextGlow: usize = 0x1188; // GameTime_t
                pub const m_flNextBeep: usize = 0x118C; // GameTime_t
                pub const m_flC4Blow: usize = 0x1190; // GameTime_t
                pub const m_bCannotBeDefused: usize = 0x1194; // bool
                pub const m_bHasExploded: usize = 0x1195; // bool
                pub const m_flTimerLength: usize = 0x1198; // float32
                pub const m_bBeingDefused: usize = 0x119C; // bool
                pub const m_bTriggerWarning: usize = 0x11A0; // float32
                pub const m_bExplodeWarning: usize = 0x11A4; // float32
                pub const m_bC4Activated: usize = 0x11A8; // bool
                pub const m_bTenSecWarning: usize = 0x11A9; // bool
                pub const m_flDefuseLength: usize = 0x11AC; // float32
                pub const m_flDefuseCountDown: usize = 0x11B0; // GameTime_t
                pub const m_bBombDefused: usize = 0x11B4; // bool
                pub const m_hBombDefuser: usize = 0x11B8; // CHandle<C_CSPlayerPawn>
                pub const m_AttributeManager: usize = 0x11C0; // C_AttributeContainer
                pub const m_hDefuserMultimeter: usize = 0x1690; // CHandle<C_Multimeter>
                pub const m_flNextRadarFlashTime: usize = 0x1694; // GameTime_t
                pub const m_bRadarFlash: usize = 0x1698; // bool
                pub const m_pBombDefuser: usize = 0x169C; // CHandle<C_CSPlayerPawn>
                pub const m_fLastDefuseTime: usize = 0x16A0; // GameTime_t
                pub const m_pPredictionOwner: usize = 0x16A8; // CBasePlayerController*
                pub const m_vecC4ExplodeSpectatePos: usize = 0x16B0; // Vector
                pub const m_vecC4ExplodeSpectateAng: usize = 0x16BC; // QAngle
                pub const m_flC4ExplodeSpectateDuration: usize = 0x16C8; // float32
            };
            // Parent: C_CSGO_TeamIntroCharacterPosition
            // Field count: 0
            pub const CCSGO_WingmanIntroCharacterPosition = struct {
            };
            // Parent: CBaseFilter
            // Field count: 1
            pub const CFilterName = struct {
                pub const m_iFilterName: usize = 0x638; // CUtlSymbolLarge
            };
            // Parent: CBaseAnimGraph
            // Field count: 9
            pub const C_RagdollProp = struct {
                pub const m_ragEnabled: usize = 0x1158; // C_NetworkUtlVectorBase<bool>
                pub const m_ragPos: usize = 0x1170; // C_NetworkUtlVectorBase<Vector>
                pub const m_ragAngles: usize = 0x1188; // C_NetworkUtlVectorBase<QAngle>
                pub const m_flBlendWeight: usize = 0x11A0; // float32
                pub const m_hRagdollSource: usize = 0x11A4; // CHandle<C_BaseEntity>
                pub const m_iEyeAttachment: usize = 0x11A8; // AttachmentHandle_t
                pub const m_flBlendWeightCurrent: usize = 0x11AC; // float32
                pub const m_parentPhysicsBoneIndices: usize = 0x11B0; // CUtlVector<int32>
                pub const m_worldSpaceBoneComputationOrder: usize = 0x11C8; // CUtlVector<int32>
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulse_CallInfo = struct {
                pub const m_PortName: usize = 0x0; // PulseSymbol_t
                pub const m_nEditorNodeID: usize = 0x10; // PulseDocNodeID_t
                pub const m_RegisterMap: usize = 0x18; // PulseRegisterMap_t
                pub const m_CallMethodID: usize = 0x48; // PulseDocNodeID_t
                pub const m_nSrcChunk: usize = 0x4C; // PulseRuntimeChunkIndex_t
                pub const m_nSrcInstruction: usize = 0x50; // int32
            };
            // Parent: C_ParticleSystem
            // Field count: 0
            pub const C_MapPreviewParticleSystem = struct {
            };
            // Parent: C_BaseModelEntity
            // Field count: 15
            pub const CBaseAnimGraph = struct {
                pub const m_graphControllerManager: usize = 0xFA8; // CAnimGraphControllerManager
                pub const m_pMainGraphController: usize = 0x1058; // CAnimGraphControllerBase*
                pub const m_bInitiallyPopulateInterpHistory: usize = 0x1060; // bool
                pub const m_bSuppressAnimEventSounds: usize = 0x1062; // bool
                pub const m_bAnimGraphUpdateEnabled: usize = 0x1070; // bool
                pub const m_bAnimationUpdateScheduled: usize = 0x1071; // bool
                pub const m_vecForce: usize = 0x1074; // Vector
                pub const m_nForceBone: usize = 0x1080; // int32
                pub const m_pClientsideRagdoll: usize = 0x1088; // CBaseAnimGraph*
                pub const m_bBuiltRagdoll: usize = 0x1090; // bool
                pub const m_pRagdollControl: usize = 0x10A0; // IPhysicsRagdollControl*
                pub const m_RagdollPose: usize = 0x10A8; // PhysicsRagdollPose_t
                pub const m_bRagdollEnabled: usize = 0x10F0; // bool
                pub const m_bRagdollClientSide: usize = 0x10F1; // bool
                pub const m_bHasAnimatedMaterialAttributes: usize = 0x1100; // bool
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_InlineNodeSkipSelector = struct {
                pub const m_nFlowNodeID: usize = 0x48; // PulseDocNodeID_t
                pub const m_bAnd: usize = 0x4C; // bool
                pub const m_PassOutflow: usize = 0x50; // PulseSelectorOutflowList_t
                pub const m_FailOutflow: usize = 0x68; // CPulse_OutflowConnection
            };
            // Parent: C_BaseModelEntity
            // Field count: 1
            pub const C_LightEntity = struct {
                pub const m_CLightComponent: usize = 0xFA8; // CLightComponent*
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub const C_WeaponM249 = struct {
            };
            // Parent: CBaseAnimGraph
            // Field count: 25
            pub const C_LocalTempEntity = struct {
                pub const flags: usize = 0x1158; // int32
                pub const die: usize = 0x115C; // GameTime_t
                pub const m_flFrameMax: usize = 0x1160; // float32
                pub const x: usize = 0x1164; // float32
                pub const y: usize = 0x1168; // float32
                pub const fadeSpeed: usize = 0x116C; // float32
                pub const bounceFactor: usize = 0x1170; // float32
                pub const hitSound: usize = 0x1174; // int32
                pub const priority: usize = 0x1178; // int32
                pub const tentOffset: usize = 0x117C; // Vector
                pub const m_vecTempEntAngVelocity: usize = 0x1188; // QAngle
                pub const tempent_renderamt: usize = 0x1194; // int32
                pub const m_vecNormal: usize = 0x1198; // Vector
                pub const m_flSpriteScale: usize = 0x11A4; // float32
                pub const m_nFlickerFrame: usize = 0x11A8; // int32
                pub const m_flFrameRate: usize = 0x11AC; // float32
                pub const m_flFrame: usize = 0x11B0; // float32
                pub const m_pszImpactEffect: usize = 0x11B8; // char*
                pub const m_pszParticleEffect: usize = 0x11C0; // char*
                pub const m_bParticleCollision: usize = 0x11C8; // bool
                pub const m_iLastCollisionFrame: usize = 0x11CC; // int32
                pub const m_vLastCollisionOrigin: usize = 0x11D0; // Vector
                pub const m_vecTempEntVelocity: usize = 0x11DC; // Vector
                pub const m_vecPrevAbsOrigin: usize = 0x11E8; // Vector
                pub const m_vecTempEntAcceleration: usize = 0x11F4; // Vector
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 2
            pub const C_WeaponTaser = struct {
                pub const m_fFireTime: usize = 0x1CE0; // GameTime_t
                pub const m_nLastAttackTick: usize = 0x1CE4; // int32
            };
            // Parent: C_BaseEntity
            // Field count: 0
            pub const C_PointEntity = struct {
            };
            // Parent: None
            // Field count: 0
            pub const C_SingleplayRules = struct {
            };
            // Parent: C_BaseEntity
            // Field count: 0
            pub const CLogicalEntity = struct {
            };
            // Parent: C_BaseModelEntity
            // Field count: 0
            pub const C_PrecipitationBlocker = struct {
            };
            // Parent: C_CSGO_TeamPreviewCamera
            // Field count: 0
            pub const C_CSGO_CounterTerroristTeamIntroCamera = struct {
            };
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            pub const C_SoundOpvarSetPathCornerEntity = struct {
            };
            // Parent: CPlayerPawnComponent
            // Field count: 4
            pub const CPlayer_WeaponServices = struct {
                pub const m_hMyWeapons: usize = 0x48; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
                pub const m_hActiveWeapon: usize = 0x60; // CHandle<C_BasePlayerWeapon>
                pub const m_hLastWeapon: usize = 0x64; // CHandle<C_BasePlayerWeapon>
                pub const m_iAmmo: usize = 0x68; // uint16[32]
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub const C_WeaponNegev = struct {
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub const C_WeaponFiveSeven = struct {
            };
            // Parent: C_CSWeaponBaseShotgun
            // Field count: 0
            pub const C_WeaponSawedoff = struct {
            };
            // Parent: C_BaseModelEntity
            // Field count: 0
            pub const C_TriggerVolume = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub const CPulseCell_LimitCount = struct {
                pub const m_nLimitCount: usize = 0x48; // int32
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Step_CallExternalMethod = struct {
                pub const m_MethodName: usize = 0x48; // PulseSymbol_t
                pub const m_nBlackboardIndex: usize = 0x58; // PulseRuntimeBlackboardReferenceIndex_t
                pub const m_ExpectedArgs: usize = 0x60; // CUtlLeanVector<CPulseRuntimeMethodArg>
                pub const m_nAsyncCallMode: usize = 0x70; // PulseMethodCallMode_t
                pub const m_OnFinished: usize = 0x78; // CPulse_ResumePoint
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub const C_WeaponMP9 = struct {
            };
            // Parent: C_DynamicProp
            // Field count: 0
            pub const C_DynamicPropAlias_prop_dynamic_override = struct {
            };
            // Parent: CEnvSoundscape
            // Field count: 0
            pub const CEnvSoundscapeTriggerable = struct {
            };
            // Parent: C_BaseEntity
            // Field count: 5
            pub const C_PlayerPing = struct {
                pub const m_hPlayer: usize = 0x630; // CHandle<C_CSPlayerPawn>
                pub const m_hPingedEntity: usize = 0x634; // CHandle<C_BaseEntity>
                pub const m_iType: usize = 0x638; // int32
                pub const m_bUrgent: usize = 0x63C; // bool
                pub const m_szPlaceName: usize = 0x63D; // char[18]
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub const C_AK47 = struct {
            };
            // Parent: C_BaseEntity
            // Field count: 10
            pub const C_CSGO_MapPreviewCameraPathNode = struct {
                pub const m_szParentPathUniqueID: usize = 0x600; // CUtlSymbolLarge
                pub const m_nPathIndex: usize = 0x608; // int32
                pub const m_vInTangentLocal: usize = 0x60C; // Vector
                pub const m_vOutTangentLocal: usize = 0x618; // Vector
                pub const m_flFOV: usize = 0x624; // float32
                pub const m_flCameraSpeed: usize = 0x628; // float32
                pub const m_flEaseIn: usize = 0x62C; // float32
                pub const m_flEaseOut: usize = 0x630; // float32
                pub const m_vInTangentWorld: usize = 0x634; // Vector
                pub const m_vOutTangentWorld: usize = 0x640; // Vector
            };
            // Parent: C_BaseEntity
            // Field count: 10
            pub const C_CSPlayerResource = struct {
                pub const m_bHostageAlive: usize = 0x600; // bool[12]
                pub const m_isHostageFollowingSomeone: usize = 0x60C; // bool[12]
                pub const m_iHostageEntityIDs: usize = 0x618; // CEntityIndex[12]
                pub const m_bombsiteCenterA: usize = 0x648; // Vector
                pub const m_bombsiteCenterB: usize = 0x654; // Vector
                pub const m_hostageRescueX: usize = 0x660; // int32[4]
                pub const m_hostageRescueY: usize = 0x670; // int32[4]
                pub const m_hostageRescueZ: usize = 0x680; // int32[4]
                pub const m_bEndMatchNextMapAllVoted: usize = 0x690; // bool
                pub const m_foundGoalPositions: usize = 0x691; // bool
            };
            // Parent: C_BaseEntity
            // Field count: 2
            pub const CSkyboxReference = struct {
                pub const m_worldGroupId: usize = 0x600; // WorldGroupId_t
                pub const m_hSkyCamera: usize = 0x604; // CHandle<C_SkyCamera>
            };
            // Parent: C_MolotovGrenade
            // Field count: 0
            pub const C_IncendiaryGrenade = struct {
            };
            // Parent: CBaseFilter
            // Field count: 1
            pub const CFilterClass = struct {
                pub const m_iFilterClass: usize = 0x638; // CUtlSymbolLarge
            };
            // Parent: C_PointCamera
            // Field count: 1
            pub const C_PointCameraVFOV = struct {
                pub const m_flVerticalFOV: usize = 0x660; // float32
            };
            // Parent: C_BaseEntity
            // Field count: 26
            pub const C_PointCamera = struct {
                pub const m_FOV: usize = 0x600; // float32
                pub const m_Resolution: usize = 0x604; // float32
                pub const m_bFogEnable: usize = 0x608; // bool
                pub const m_FogColor: usize = 0x609; // Color
                pub const m_flFogStart: usize = 0x610; // float32
                pub const m_flFogEnd: usize = 0x614; // float32
                pub const m_flFogMaxDensity: usize = 0x618; // float32
                pub const m_bActive: usize = 0x61C; // bool
                pub const m_bUseScreenAspectRatio: usize = 0x61D; // bool
                pub const m_flAspectRatio: usize = 0x620; // float32
                pub const m_bNoSky: usize = 0x624; // bool
                pub const m_fBrightness: usize = 0x628; // float32
                pub const m_flZFar: usize = 0x62C; // float32
                pub const m_flZNear: usize = 0x630; // float32
                pub const m_bCanHLTVUse: usize = 0x634; // bool
                pub const m_bAlignWithParent: usize = 0x635; // bool
                pub const m_bDofEnabled: usize = 0x636; // bool
                pub const m_flDofNearBlurry: usize = 0x638; // float32
                pub const m_flDofNearCrisp: usize = 0x63C; // float32
                pub const m_flDofFarCrisp: usize = 0x640; // float32
                pub const m_flDofFarBlurry: usize = 0x644; // float32
                pub const m_flDofTiltToGround: usize = 0x648; // float32
                pub const m_TargetFOV: usize = 0x64C; // float32
                pub const m_DegreesPerSecond: usize = 0x650; // float32
                pub const m_bIsOn: usize = 0x654; // bool
                pub const m_pNext: usize = 0x658; // C_PointCamera*
            };
            // Parent: CPathSimple
            // Field count: 2
            pub const CPathWithDynamicNodes = struct {
                pub const m_vecPathNodes: usize = 0x710; // C_NetworkUtlVectorBase<CHandle<CPathNode>>
                pub const m_xInitialPathWorldToLocal: usize = 0x730; // CTransform
            };
            // Parent: CLogicalEntity
            // Field count: 3
            pub const CBaseFilter = struct {
                pub const m_bNegated: usize = 0x600; // bool
                pub const m_OnPass: usize = 0x608; // CEntityIOOutput
                pub const m_OnFail: usize = 0x620; // CEntityIOOutput
            };
            // Parent: None
            // Field count: 1
            pub const WeaponPurchaseTracker_t = struct {
                pub const m_weaponPurchases: usize = 0x8; // C_UtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const PulseObservableBoolExpression_t = struct {
                pub const m_EvaluateConnection: usize = 0x0; // CPulse_OutflowConnection
                pub const m_DependentObservableVars: usize = 0x48; // CUtlVector<PulseRuntimeVarIndex_t>
                pub const m_DependentObservableBlackboardReferences: usize = 0x60; // CUtlVector<PulseRuntimeBlackboardReferenceIndex_t>
            };
            // Parent: C_PointEntity
            // Field count: 14
            pub const CMapInfo = struct {
                pub const m_iBuyingStatus: usize = 0x600; // int32
                pub const m_flBombRadius: usize = 0x604; // float32
                pub const m_iPetPopulation: usize = 0x608; // int32
                pub const m_bUseNormalSpawnsForDM: usize = 0x60C; // bool
                pub const m_bDisableAutoGeneratedDMSpawns: usize = 0x60D; // bool
                pub const m_flBotMaxVisionDistance: usize = 0x610; // float32
                pub const m_iHostageCount: usize = 0x614; // int32
                pub const m_bFadePlayerVisibilityFarZ: usize = 0x618; // bool
                pub const m_bRainTraceToSkyEnabled: usize = 0x619; // bool
                pub const m_flEnvRainStrength: usize = 0x61C; // float32
                pub const m_flEnvPuddleRippleStrength: usize = 0x620; // float32
                pub const m_flEnvPuddleRippleDirection: usize = 0x624; // float32
                pub const m_flEnvWetnessCoverage: usize = 0x628; // float32
                pub const m_flEnvWetnessDryingAmount: usize = 0x62C; // float32
            };
            // Parent: C_CSGO_TeamPreviewCamera
            // Field count: 0
            pub const C_CSGO_EndOfMatchCamera = struct {
            };
            // Parent: CBaseAnimGraph
            // Field count: 12
            pub const C_BaseGrenade = struct {
                pub const m_bHasWarnedAI: usize = 0x1158; // bool
                pub const m_bIsSmokeGrenade: usize = 0x1159; // bool
                pub const m_bIsLive: usize = 0x115A; // bool
                pub const m_DmgRadius: usize = 0x115C; // float32
                pub const m_flDetonateTime: usize = 0x1160; // GameTime_t
                pub const m_flWarnAITime: usize = 0x1164; // float32
                pub const m_flDamage: usize = 0x1168; // float32
                pub const m_iszBounceSound: usize = 0x1170; // CUtlSymbolLarge
                pub const m_ExplosionSound: usize = 0x1178; // CUtlString
                pub const m_hThrower: usize = 0x1180; // CHandle<C_CSPlayerPawn>
                pub const m_flNextAttack: usize = 0x1198; // GameTime_t
                pub const m_hOriginalThrower: usize = 0x119C; // CHandle<C_CSPlayerPawn>
            };
            // Parent: C_ModelPointEntity
            // Field count: 16
            pub const C_PlayerSprayDecal = struct {
                pub const m_nUniqueID: usize = 0xFA8; // int32
                pub const m_unAccountID: usize = 0xFAC; // uint32
                pub const m_unTraceID: usize = 0xFB0; // uint32
                pub const m_rtGcTime: usize = 0xFB4; // uint32
                pub const m_vecEndPos: usize = 0xFB8; // Vector
                pub const m_vecStart: usize = 0xFC4; // Vector
                pub const m_vecLeft: usize = 0xFD0; // Vector
                pub const m_vecNormal: usize = 0xFDC; // Vector
                pub const m_nPlayer: usize = 0xFE8; // int32
                pub const m_nEntity: usize = 0xFEC; // int32
                pub const m_nHitbox: usize = 0xFF0; // int32
                pub const m_flCreationTime: usize = 0xFF4; // float32
                pub const m_nTintID: usize = 0xFF8; // int32
                pub const m_nVersion: usize = 0xFFC; // uint8
                pub const m_ubSignature: usize = 0xFFD; // uint8[128]
                pub const m_SprayRenderHelper: usize = 0x1088; // CPlayerSprayDecalRenderHelper
            };
            // Parent: None
            // Field count: 12
            pub const CEntityIdentity = struct {
                pub const m_nameStringTableIndex: usize = 0x14; // int32
                pub const m_name: usize = 0x18; // CUtlSymbolLarge
                pub const m_designerName: usize = 0x20; // CUtlSymbolLarge
                pub const m_flags: usize = 0x30; // uint32
                pub const m_worldGroupId: usize = 0x38; // WorldGroupId_t
                pub const m_fDataObjectTypes: usize = 0x3C; // uint32
                pub const m_PathIndex: usize = 0x40; // ChangeAccessorFieldPathIndex_t
                pub const m_pAttributes: usize = 0x48; // CEntityAttributeTable*
                pub const m_pPrev: usize = 0x50; // CEntityIdentity*
                pub const m_pNext: usize = 0x58; // CEntityIdentity*
                pub const m_pPrevByClass: usize = 0x60; // CEntityIdentity*
                pub const m_pNextByClass: usize = 0x68; // CEntityIdentity*
            };
            // Parent: None
            // Field count: 1
            pub const CPulseCell_LimitCount__Criteria_t = struct {
                pub const m_bLimitCountPasses: usize = 0x0; // bool
            };
            // Parent: C_CS2HudModelBase
            // Field count: 0
            pub const C_CS2HudModelArms = struct {
            };
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CBasePlayerVData = struct {
                pub const m_sModelName: usize = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_sModelNameAg2Override: usize = 0x108; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_flHeadDamageMultiplier: usize = 0x1E8; // CSkillFloat
                pub const m_flChestDamageMultiplier: usize = 0x1F8; // CSkillFloat
                pub const m_flStomachDamageMultiplier: usize = 0x208; // CSkillFloat
                pub const m_flArmDamageMultiplier: usize = 0x218; // CSkillFloat
                pub const m_flLegDamageMultiplier: usize = 0x228; // CSkillFloat
                pub const m_flHoldBreathTime: usize = 0x238; // float32
                pub const m_flDrowningDamageInterval: usize = 0x23C; // float32
                pub const m_nDrowningDamageInitial: usize = 0x240; // int32
                pub const m_nDrowningDamageMax: usize = 0x244; // int32
                pub const m_nWaterSpeed: usize = 0x248; // int32
                pub const m_flUseRange: usize = 0x24C; // float32
                pub const m_flUseAngleTolerance: usize = 0x250; // float32
                pub const m_flCrouchTime: usize = 0x254; // float32
            };
            // Parent: C_LightEntity
            // Field count: 0
            pub const C_LightSpotEntity = struct {
            };
            // Parent: None
            // Field count: 3
            pub const CCSGameModeRules_Deathmatch = struct {
                pub const m_flDMBonusStartTime: usize = 0x30; // GameTime_t
                pub const m_flDMBonusTimeLength: usize = 0x34; // float32
                pub const m_sDMBonusWeapon: usize = 0x38; // CUtlString
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            pub const CPulseCell_CursorQueue = struct {
                pub const m_nCursorsAllowedToRunParallel: usize = 0x98; // int32
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            pub const CPulseCell_Value_RandomFloat = struct {
            };
            // Parent: None
            // Field count: 0
            pub const CPulseExecCursor = struct {
            };
            // Parent: C_BaseModelEntity
            // Field count: 23
            pub const C_Sprite = struct {
                pub const m_hSpriteMaterial: usize = 0xFA8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_hAttachedToEntity: usize = 0xFB0; // CHandle<C_BaseEntity>
                pub const m_nAttachment: usize = 0xFB4; // AttachmentHandle_t
                pub const m_flSpriteFramerate: usize = 0xFB8; // float32
                pub const m_flFrame: usize = 0xFBC; // float32
                pub const m_flDieTime: usize = 0xFC0; // GameTime_t
                pub const m_nBrightness: usize = 0xFD0; // uint32
                pub const m_flBrightnessDuration: usize = 0xFD4; // float32
                pub const m_flSpriteScale: usize = 0xFD8; // float32
                pub const m_flScaleDuration: usize = 0xFDC; // float32
                pub const m_bWorldSpaceScale: usize = 0xFE0; // bool
                pub const m_flGlowProxySize: usize = 0xFE4; // float32
                pub const m_flHDRColorScale: usize = 0xFE8; // float32
                pub const m_flLastTime: usize = 0xFEC; // GameTime_t
                pub const m_flMaxFrame: usize = 0xFF0; // float32
                pub const m_flStartScale: usize = 0xFF4; // float32
                pub const m_flDestScale: usize = 0xFF8; // float32
                pub const m_flScaleTimeStart: usize = 0xFFC; // GameTime_t
                pub const m_nStartBrightness: usize = 0x1000; // int32
                pub const m_nDestBrightness: usize = 0x1004; // int32
                pub const m_flBrightnessTimeStart: usize = 0x1008; // GameTime_t
                pub const m_nSpriteWidth: usize = 0x1018; // int32
                pub const m_nSpriteHeight: usize = 0x101C; // int32
            };
            // Parent: C_BaseEntity
            // Field count: 2
            pub const C_CsmFovOverride = struct {
                pub const m_cameraName: usize = 0x600; // CUtlString
                pub const m_flCsmFovOverrideValue: usize = 0x608; // float32
            };
            // Parent: C_CSWeaponBaseGun
            // Field count: 0
            pub const C_WeaponGlock = struct {
            };
            // Parent: C_BreakableProp
            // Field count: 1
            pub const C_PhysicsProp = struct {
                pub const m_bAwake: usize = 0x12D0; // bool
            };
            // Parent: CBaseFilter
            // Field count: 1
            pub const CFilterTeam = struct {
                pub const m_iFilterTeam: usize = 0x638; // int32
            };
            // Parent: None
            // Field count: 32
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CBasePlayerWeaponVData = struct {
                pub const m_szWorldModel: usize = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_szWorldModelAg2Override: usize = 0x108; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_sToolsOnlyOwnerModelName: usize = 0x1E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_bBuiltRightHanded: usize = 0x2C8; // bool
                pub const m_bAllowFlipping: usize = 0x2C9; // bool
                pub const m_sMuzzleAttachment: usize = 0x2D0; // CAttachmentNameSymbolWithStorage
                pub const m_szMuzzleFlashParticle: usize = 0x2F0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                pub const m_szMuzzleFlashParticleConfig: usize = 0x3D0; // CUtlString
                pub const m_szBarrelSmokeParticle: usize = 0x3D8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                pub const m_nMuzzleSmokeShotThreshold: usize = 0x4B8; // uint8
                pub const m_flMuzzleSmokeTimeout: usize = 0x4BC; // float32
                pub const m_flMuzzleSmokeDecrementRate: usize = 0x4C0; // float32
                pub const m_bGenerateMuzzleLight: usize = 0x4C4; // bool
                pub const m_bLinkedCooldowns: usize = 0x4C5; // bool
                pub const m_iFlags: usize = 0x4C6; // ItemFlagTypes_t
                pub const m_iWeight: usize = 0x4C8; // int32
                pub const m_bAutoSwitchTo: usize = 0x4CC; // bool
                pub const m_bAutoSwitchFrom: usize = 0x4CD; // bool
                pub const m_nPrimaryAmmoType: usize = 0x4CE; // AmmoIndex_t
                pub const m_nSecondaryAmmoType: usize = 0x4CF; // AmmoIndex_t
                pub const m_iMaxClip1: usize = 0x4D0; // int32
                pub const m_iMaxClip2: usize = 0x4D4; // int32
                pub const m_iDefaultClip1: usize = 0x4D8; // int32
                pub const m_iDefaultClip2: usize = 0x4DC; // int32
                pub const m_bReserveAmmoAsClips: usize = 0x4E0; // bool
                pub const m_bTreatAsSingleClip: usize = 0x4E1; // bool
                pub const m_bKeepLoadedAmmo: usize = 0x4E2; // bool
                pub const m_iRumbleEffect: usize = 0x4E4; // RumbleEffect_t
                pub const m_flDropSpeed: usize = 0x4E8; // float32
                pub const m_iSlot: usize = 0x4EC; // int32
                pub const m_iPosition: usize = 0x4F0; // int32
                pub const m_aShootSounds: usize = 0x4F8; // CUtlOrderedMap<WeaponSound_t,CSoundEventName>
            };
            // Parent: C_PointEntity
            // Field count: 15
            pub const CInfoInteraction = struct {
                pub const m_hSceneRequest: usize = 0x600; // SceneRequestHandle_t
                pub const m_hSceneOpportunity: usize = 0x604; // SceneOpportunityHandle_t
                pub const m_bEnabled: usize = 0x608; // bool
                pub const m_bStartDisabled: usize = 0x609; // bool
                pub const m_strSceneVDataName: usize = 0x610; // CUtlSymbolLarge
                pub const m_strPulseVDataName: usize = 0x618; // CUtlSymbolLarge
                pub const m_flRadius: usize = 0x640; // float32
                pub const m_flOwnerFOV: usize = 0x644; // float32
                pub const m_strLocalInterestReqTags: usize = 0x648; // CUtlSymbolLarge
                pub const m_strLocalInterestOptTags: usize = 0x650; // CUtlSymbolLarge
                pub const m_strLookTarget: usize = 0x658; // CUtlSymbolLarge
                pub const m_flDuration: usize = 0x660; // float32
                pub const m_flCooldown: usize = 0x664; // float32
                pub const m_nRepeatCount: usize = 0x668; // int32
                pub const m_bDisableOnExit: usize = 0x66C; // bool
            };
            // Parent: C_BaseCSGrenade
            // Field count: 0
            pub const C_SmokeGrenade = struct {
            };
            // Parent: C_CSGO_PreviewPlayer
            // Field count: 0
            pub const C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel = struct {
            };
            // Parent: C_PointEntity
            // Field count: 0
            pub const CInfoParticleTarget = struct {
            };
            // Parent: CPlayerPawnComponent
            // Field count: 0
            pub const CCSPlayer_DamageReactServices = struct {
            };
            // Parent: C_BaseClientUIEntity
            // Field count: 29
            pub const C_PointClientUIWorldPanel = struct {
                pub const m_bForceRecreateNextUpdate: usize = 0xFE0; // bool
                pub const m_bMoveViewToPlayerNextThink: usize = 0xFE1; // bool
                pub const m_bCheckCSSClasses: usize = 0xFE2; // bool
                pub const m_anchorDeltaTransform: usize = 0xFF0; // CTransform
                pub const m_pOffScreenIndicator: usize = 0x1180; // CPointOffScreenIndicatorUi*
                pub const m_bIgnoreInput: usize = 0x11A8; // bool
                pub const m_bLit: usize = 0x11A9; // bool
                pub const m_bFollowPlayerAcrossTeleport: usize = 0x11AA; // bool
                pub const m_flWidth: usize = 0x11AC; // float32
                pub const m_flHeight: usize = 0x11B0; // float32
                pub const m_flDPI: usize = 0x11B4; // float32
                pub const m_flInteractDistance: usize = 0x11B8; // float32
                pub const m_flDepthOffset: usize = 0x11BC; // float32
                pub const m_unOwnerContext: usize = 0x11C0; // uint32
                pub const m_unHorizontalAlign: usize = 0x11C4; // uint32
                pub const m_unVerticalAlign: usize = 0x11C8; // uint32
                pub const m_unOrientation: usize = 0x11CC; // uint32
                pub const m_bAllowInteractionFromAllSceneWorlds: usize = 0x11D0; // bool
                pub const m_vecCSSClasses: usize = 0x11D8; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
                pub const m_bOpaque: usize = 0x11F0; // bool
                pub const m_bNoDepth: usize = 0x11F1; // bool
                pub const m_bVisibleWhenParentNoDraw: usize = 0x11F2; // bool
                pub const m_bRenderBackface: usize = 0x11F3; // bool
                pub const m_bUseOffScreenIndicator: usize = 0x11F4; // bool
                pub const m_bExcludeFromSaveGames: usize = 0x11F5; // bool
                pub const m_bGrabbable: usize = 0x11F6; // bool
                pub const m_bOnlyRenderToTexture: usize = 0x11F7; // bool
                pub const m_bDisableMipGen: usize = 0x11F8; // bool
                pub const m_nExplicitImageLayout: usize = 0x11FC; // int32
            };
            // Parent: C_BaseEntity
            // Field count: 3
            pub const C_EntityFlame = struct {
                pub const m_hEntAttached: usize = 0x600; // CHandle<C_BaseEntity>
                pub const m_hOldAttached: usize = 0x628; // CHandle<C_BaseEntity>
                pub const m_bCheapEffect: usize = 0x62C; // bool
            };
            // Parent: C_BaseEntity
            // Field count: 16
            pub const CBasePlayerController = struct {
                pub const m_CommandContext: usize = 0x608; // C_CommandContext
                pub const m_nInButtonsWhichAreToggles: usize = 0x6B0; // uint64
                pub const m_nTickBase: usize = 0x6B8; // uint32
                pub const m_hPawn: usize = 0x6BC; // CHandle<C_BasePlayerPawn>
                pub const m_bKnownTeamMismatch: usize = 0x6C0; // bool
                pub const m_hPredictedPawn: usize = 0x6C4; // CHandle<C_BasePlayerPawn>
                pub const m_nSplitScreenSlot: usize = 0x6C8; // CSplitScreenSlot
                pub const m_hSplitOwner: usize = 0x6CC; // CHandle<CBasePlayerController>
                pub const m_hSplitScreenPlayers: usize = 0x6D0; // CUtlVector<CHandle<CBasePlayerController>>
                pub const m_bIsHLTV: usize = 0x6E8; // bool
                pub const m_iConnected: usize = 0x6EC; // PlayerConnectedState
                pub const m_iszPlayerName: usize = 0x6F0; // char[128]
                pub const m_steamID: usize = 0x778; // uint64
                pub const m_bIsLocalPlayerController: usize = 0x780; // bool
                pub const m_bNoClipEnabled: usize = 0x781; // bool
                pub const m_iDesiredFOV: usize = 0x784; // uint32
            };
            // Parent: C_BaseEntity
            // Field count: 0
            pub const C_CSGO_EndOfMatchLineupEndpoint = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyElementNameFn
            pub const GeneratedTextureHandle_t = struct {
                pub const m_strBitmapName: usize = 0x0; // CUtlString
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub const CompositeMaterialInputContainer_t = struct {
                pub const m_bEnabled: usize = 0x0; // bool
                pub const m_nCompositeMaterialInputContainerSourceType: usize = 0x4; // CompositeMaterialInputContainerSourceType_t
                pub const m_strSpecificContainerMaterial: usize = 0x8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIMaterial2>>
                pub const m_strAttrName: usize = 0xE8; // CUtlString
                pub const m_strAlias: usize = 0xF0; // CUtlString
                pub const m_vecLooseVariables: usize = 0xF8; // CUtlVector<CompositeMaterialInputLooseVariable_t>
                pub const m_strAttrNameForVar: usize = 0x110; // CUtlString
                pub const m_bExposeExternally: usize = 0x118; // bool
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub const CompositeMaterialAssemblyProcedure_t = struct {
                pub const m_vecCompMatIncludes: usize = 0x0; // CUtlVector<CResourceNameTyped<CWeakHandle<InfoForResourceTypeCCompositeMaterialKit>>>
                pub const m_vecMatchFilters: usize = 0x18; // CUtlVector<CompositeMaterialMatchFilter_t>
                pub const m_vecCompositeInputContainers: usize = 0x30; // CUtlVector<CompositeMaterialInputContainer_t>
                pub const m_vecPropertyMutators: usize = 0x48; // CUtlVector<CompMatPropertyMutator_t>
            };
            // Parent: None
            // Field count: 37
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub const CompositeMaterialInputLooseVariable_t = struct {
                pub const m_strName: usize = 0x0; // CUtlString
                pub const m_bExposeExternally: usize = 0x8; // bool
                pub const m_strExposedFriendlyName: usize = 0x10; // CUtlString
                pub const m_strExposedFriendlyGroupName: usize = 0x18; // CUtlString
                pub const m_bExposedVariableIsFixedRange: usize = 0x20; // bool
                pub const m_strExposedVisibleWhenTrue: usize = 0x28; // CUtlString
                pub const m_strExposedHiddenWhenTrue: usize = 0x30; // CUtlString
                pub const m_strExposedValueList: usize = 0x38; // CUtlString
                pub const m_nVariableType: usize = 0x40; // CompositeMaterialInputLooseVariableType_t
                pub const m_bValueBoolean: usize = 0x44; // bool
                pub const m_nValueIntX: usize = 0x48; // int32
                pub const m_nValueIntY: usize = 0x4C; // int32
                pub const m_nValueIntZ: usize = 0x50; // int32
                pub const m_nValueIntW: usize = 0x54; // int32
                pub const m_bHasFloatBounds: usize = 0x58; // bool
                pub const m_flValueFloatX: usize = 0x5C; // float32
                pub const m_flValueFloatX_Min: usize = 0x60; // float32
                pub const m_flValueFloatX_Max: usize = 0x64; // float32
                pub const m_flValueFloatY: usize = 0x68; // float32
                pub const m_flValueFloatY_Min: usize = 0x6C; // float32
                pub const m_flValueFloatY_Max: usize = 0x70; // float32
                pub const m_flValueFloatZ: usize = 0x74; // float32
                pub const m_flValueFloatZ_Min: usize = 0x78; // float32
                pub const m_flValueFloatZ_Max: usize = 0x7C; // float32
                pub const m_flValueFloatW: usize = 0x80; // float32
                pub const m_flValueFloatW_Min: usize = 0x84; // float32
                pub const m_flValueFloatW_Max: usize = 0x88; // float32
                pub const m_cValueColor4: usize = 0x8C; // Color
                pub const m_nValueSystemVar: usize = 0x90; // CompositeMaterialVarSystemVar_t
                pub const m_strResourceMaterial: usize = 0x98; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIMaterial2>>
                pub const m_strTextureContentAssetPath: usize = 0x178; // CUtlString
                pub const m_strTextureRuntimeResourcePath: usize = 0x180; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCTextureBase>>
                pub const m_strTextureCompilationVtexTemplate: usize = 0x260; // CUtlString
                pub const m_nTextureType: usize = 0x268; // CompositeMaterialInputTextureType_t
                pub const m_strString: usize = 0x270; // CUtlString
                pub const m_strPanoramaPanelPath: usize = 0x278; // CUtlString
                pub const m_nPanoramaRenderRes: usize = 0x280; // int32
            };
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const screenshake_t = struct {
                pub const endtime: usize = 0x0; // GameTime_t
                pub const duration: usize = 0x4; // float32
                pub const amplitude: usize = 0x8; // float32
                pub const frequency: usize = 0xC; // float32
                pub const nextShake: usize = 0x10; // GameTime_t
                pub const offset: usize = 0x14; // Vector
                pub const angle: usize = 0x20; // float32
                pub const direction: usize = 0x28; // Vector
                pub const nShakeType: usize = 0x34; // uint8
            };
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CCS2UIPawnGraphController = struct {
                pub const m_nAnimationSeed: usize = 0x88; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_characterMode: usize = 0xA0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_nTeamPreviewVariant: usize = 0xB8; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_nTeamPreviewRandom: usize = 0xD0; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_nTeamPreviewPosition: usize = 0xE8; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_endOfMatchCelebration: usize = 0x100; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_action: usize = 0x118; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_bannerAnimation: usize = 0x130; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_weaponCategory: usize = 0x148; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_weaponType: usize = 0x160; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_weaponState: usize = 0x178; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_inspectTurnAngle: usize = 0x190; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_bCT: usize = 0x1A8; // CAnimGraph2ParamOptionalRef<bool>
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const inv_image_light_barn_t = struct {
                pub const color: usize = 0x0; // Vector
                pub const angle: usize = 0xC; // QAngle
                pub const brightness: usize = 0x18; // float32
                pub const orbit_distance: usize = 0x1C; // float32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const inv_image_map_t = struct {
                pub const map_name: usize = 0x0; // CUtlString
                pub const map_rotation: usize = 0x8; // float32
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const inv_image_light_fill_t = struct {
                pub const color: usize = 0x0; // Vector
                pub const angle: usize = 0xC; // QAngle
                pub const brightness: usize = 0x18; // float32
            };
            // Parent: None
            // Field count: 5
            pub const CInterpolatedValue = struct {
                pub const m_flStartTime: usize = 0x0; // float32
                pub const m_flEndTime: usize = 0x4; // float32
                pub const m_flStartValue: usize = 0x8; // float32
                pub const m_flEndValue: usize = 0xC; // float32
                pub const m_nInterpType: usize = 0x10; // int32
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const inv_image_item_t = struct {
                pub const position: usize = 0x0; // Vector
                pub const angle: usize = 0xC; // QAngle
                pub const pose_sequence: usize = 0x18; // CUtlString
            };
            // Parent: None
            // Field count: 2
            pub const TimedEvent = struct {
                pub const m_TimeBetweenEvents: usize = 0x0; // float32
                pub const m_fNextEvent: usize = 0x4; // float32
            };
            // Parent: None
            // Field count: 13
            pub const CFlashlightEffect = struct {
                pub const m_bIsOn: usize = 0x10; // bool
                pub const m_bMuzzleFlashEnabled: usize = 0x20; // bool
                pub const m_flMuzzleFlashBrightness: usize = 0x24; // float32
                pub const m_quatMuzzleFlashOrientation: usize = 0x30; // Quaternion
                pub const m_vecMuzzleFlashOrigin: usize = 0x40; // Vector
                pub const m_flFov: usize = 0x4C; // float32
                pub const m_flFarZ: usize = 0x50; // float32
                pub const m_flLinearAtten: usize = 0x54; // float32
                pub const m_bCastsShadows: usize = 0x58; // bool
                pub const m_flCurrentPullBackDist: usize = 0x5C; // float32
                pub const m_FlashlightTexture: usize = 0x60; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_MuzzleFlashTexture: usize = 0x68; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_textureName: usize = 0x70; // char[64]
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const inv_image_camera_t = struct {
                pub const angle: usize = 0x0; // QAngle
                pub const fov: usize = 0xC; // float32
                pub const znear: usize = 0x10; // float32
                pub const zfar: usize = 0x14; // float32
                pub const target: usize = 0x18; // Vector
                pub const target_nudge: usize = 0x24; // Vector
                pub const orbit_distance: usize = 0x30; // float32
            };
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
            pub const CInventoryImageData = struct {
                pub const m_nNodeType: usize = 0x0; // InventoryNodeType_t
                pub const name: usize = 0x8; // CUtlString
                pub const inventory_image_data: usize = 0x10; // inv_image_data_t
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const inv_image_clearcolor_t = struct {
                pub const color: usize = 0x0; // Vector
            };
            // Parent: None
            // Field count: 2
            pub const C_CommandContext = struct {
                pub const needsprocessing: usize = 0x0; // bool
                pub const command_number: usize = 0xA0; // int32
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CompositeMaterialEditorPoint_t = struct {
                pub const m_ModelName: usize = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_nSequenceIndex: usize = 0xE0; // int32
                pub const m_flCycle: usize = 0xE4; // float32
                pub const m_KVModelStateChoices: usize = 0xE8; // KeyValues3
                pub const m_bEnableChildModel: usize = 0xF8; // bool
                pub const m_ChildModelName: usize = 0x100; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_vecCompositeMaterialAssemblyProcedures: usize = 0x1E0; // CUtlVector<CompositeMaterialAssemblyProcedure_t>
                pub const m_vecCompositeMaterials: usize = 0x1F8; // CUtlVector<CompositeMaterial_t>
            };
            // Parent: None
            // Field count: 0
            pub const CPlayerSprayDecalRenderHelper = struct {
            };
            // Parent: None
            // Field count: 13
            pub const C_IronSightController = struct {
                pub const m_bIronSightAvailable: usize = 0x10; // bool
                pub const m_flIronSightAmount: usize = 0x14; // float32
                pub const m_flIronSightAmountGained: usize = 0x18; // float32
                pub const m_flIronSightAmountBiased: usize = 0x1C; // float32
                pub const m_flIronSightAmount_Interpolated: usize = 0x20; // float32
                pub const m_flIronSightAmountGained_Interpolated: usize = 0x24; // float32
                pub const m_flIronSightAmountBiased_Interpolated: usize = 0x28; // float32
                pub const m_flInterpolationLastUpdated: usize = 0x2C; // float32
                pub const m_angDeltaAverage: usize = 0x30; // QAngle[8]
                pub const m_angViewLast: usize = 0x90; // QAngle
                pub const m_vecDotCoords: usize = 0x9C; // Vector2D
                pub const m_flFiringInaccuracyExtraWidthMultiplier: usize = 0xA4; // float32
                pub const m_flSpeedRatio: usize = 0xA8; // float32
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub const CompMatMutatorCondition_t = struct {
                pub const m_nMutatorCondition: usize = 0x0; // CompMatPropertyMutatorConditionType_t
                pub const m_strMutatorConditionContainerName: usize = 0x8; // CUtlString
                pub const m_strMutatorConditionContainerVarName: usize = 0x10; // CUtlString
                pub const m_strMutatorConditionContainerVarValue: usize = 0x18; // CUtlString
                pub const m_bPassWhenTrue: usize = 0x20; // bool
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const inv_image_data_t = struct {
                pub const map: usize = 0x0; // inv_image_map_t
                pub const item: usize = 0x10; // inv_image_item_t
                pub const camera: usize = 0x30; // inv_image_camera_t
                pub const lightsun: usize = 0x64; // inv_image_light_sun_t
                pub const lightfill: usize = 0x80; // inv_image_light_fill_t
                pub const light0: usize = 0x9C; // inv_image_light_barn_t
                pub const light1: usize = 0xBC; // inv_image_light_barn_t
                pub const clearcolor: usize = 0xDC; // inv_image_clearcolor_t
            };
            // Parent: None
            // Field count: 29
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub const CompMatPropertyMutator_t = struct {
                pub const m_bEnabled: usize = 0x0; // bool
                pub const m_nMutatorCommandType: usize = 0x4; // CompMatPropertyMutatorType_t
                pub const m_strInitWith_Container: usize = 0x8; // CUtlString
                pub const m_strCopyProperty_InputContainerSrc: usize = 0x10; // CUtlString
                pub const m_strCopyProperty_InputContainerProperty: usize = 0x18; // CUtlString
                pub const m_strCopyProperty_TargetProperty: usize = 0x20; // CUtlString
                pub const m_strRandomRollInputVars_SeedInputVar: usize = 0x28; // CUtlString
                pub const m_vecRandomRollInputVars_InputVarsToRoll: usize = 0x30; // CUtlVector<CUtlString>
                pub const m_strCopyMatchingKeys_InputContainerSrc: usize = 0x48; // CUtlString
                pub const m_strCopyKeysWithSuffix_InputContainerSrc: usize = 0x50; // CUtlString
                pub const m_strCopyKeysWithSuffix_FindSuffix: usize = 0x58; // CUtlString
                pub const m_strCopyKeysWithSuffix_ReplaceSuffix: usize = 0x60; // CUtlString
                pub const m_nSetValue_Value: usize = 0x68; // CompositeMaterialInputLooseVariable_t
                pub const m_strGenerateTexture_TargetParam: usize = 0x2F0; // CUtlString
                pub const m_strGenerateTexture_InitialContainer: usize = 0x2F8; // CUtlString
                pub const m_nResolution: usize = 0x300; // int32
                pub const m_bIsScratchTarget: usize = 0x304; // bool
                pub const m_strCompressionFormat: usize = 0x308; // CUtlString
                pub const m_bSplatDebugInfo: usize = 0x310; // bool
                pub const m_bCaptureInRenderDoc: usize = 0x311; // bool
                pub const m_vecTexGenInstructions: usize = 0x318; // CUtlVector<CompMatPropertyMutator_t>
                pub const m_vecConditionalMutators: usize = 0x330; // CUtlVector<CompMatPropertyMutator_t>
                pub const m_strPopInputQueue_Container: usize = 0x348; // CUtlString
                pub const m_strDrawText_InputContainerSrc: usize = 0x350; // CUtlString
                pub const m_strDrawText_InputContainerProperty: usize = 0x358; // CUtlString
                pub const m_vecDrawText_Position: usize = 0x360; // Vector2D
                pub const m_colDrawText_Color: usize = 0x368; // Color
                pub const m_strDrawText_Font: usize = 0x370; // CUtlString
                pub const m_vecConditions: usize = 0x378; // CUtlVector<CompMatMutatorCondition_t>
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CCompositeMaterialEditorDoc = struct {
                pub const m_nVersion: usize = 0x8; // int32
                pub const m_Points: usize = 0x10; // CUtlVector<CompositeMaterialEditorPoint_t>
                pub const m_KVthumbnail: usize = 0x28; // KeyValues3
            };
            // Parent: None
            // Field count: 11
            pub const CClientAlphaProperty = struct {
                pub const m_nDistFadeStart: usize = 0x10; // uint16
                pub const m_nDistFadeEnd: usize = 0x12; // uint16
                pub const m_nDesyncOffset: usize = 0x0; // bitfield:14
                pub const m_bAlphaOverride: usize = 0x0; // bitfield:1
                pub const m_bShadowAlphaOverride: usize = 0x0; // bitfield:1
                pub const m_nRenderMode: usize = 0x0; // bitfield:3
                pub const m_nRenderFX: usize = 0x0; // bitfield:5
                pub const m_nAlpha: usize = 0x17; // uint8
                pub const m_flFadeScale: usize = 0x18; // float32
                pub const m_flRenderFxStartTime: usize = 0x1C; // GameTime_t
                pub const m_flRenderFxDuration: usize = 0x20; // float32
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const screenfade_t = struct {
                pub const Speed: usize = 0x0; // float32
                pub const End: usize = 0x4; // float32
                pub const Reset: usize = 0x8; // float32
                pub const m_Color: usize = 0xC; // Color
                pub const Flags: usize = 0x10; // int32
            };
            // Parent: None
            // Field count: 43
            pub const CGlobalLightBase = struct {
                pub const m_bSpotLight: usize = 0x10; // bool
                pub const m_SpotLightOrigin: usize = 0x14; // Vector
                pub const m_SpotLightAngles: usize = 0x20; // QAngle
                pub const m_ShadowDirection: usize = 0x2C; // Vector
                pub const m_AmbientDirection: usize = 0x38; // Vector
                pub const m_SpecularDirection: usize = 0x44; // Vector
                pub const m_InspectorSpecularDirection: usize = 0x50; // Vector
                pub const m_flSpecularPower: usize = 0x5C; // float32
                pub const m_flSpecularIndependence: usize = 0x60; // float32
                pub const m_SpecularColor: usize = 0x64; // Color
                pub const m_bStartDisabled: usize = 0x68; // bool
                pub const m_bEnabled: usize = 0x69; // bool
                pub const m_LightColor: usize = 0x6A; // Color
                pub const m_AmbientColor1: usize = 0x6E; // Color
                pub const m_AmbientColor2: usize = 0x72; // Color
                pub const m_AmbientColor3: usize = 0x76; // Color
                pub const m_flSunDistance: usize = 0x7C; // float32
                pub const m_flFOV: usize = 0x80; // float32
                pub const m_flNearZ: usize = 0x84; // float32
                pub const m_flFarZ: usize = 0x88; // float32
                pub const m_bEnableShadows: usize = 0x8C; // bool
                pub const m_bOldEnableShadows: usize = 0x8D; // bool
                pub const m_bBackgroundClearNotRequired: usize = 0x8E; // bool
                pub const m_flCloudScale: usize = 0x90; // float32
                pub const m_flCloud1Speed: usize = 0x94; // float32
                pub const m_flCloud1Direction: usize = 0x98; // float32
                pub const m_flCloud2Speed: usize = 0x9C; // float32
                pub const m_flCloud2Direction: usize = 0xA0; // float32
                pub const m_flAmbientScale1: usize = 0xB0; // float32
                pub const m_flAmbientScale2: usize = 0xB4; // float32
                pub const m_flGroundScale: usize = 0xB8; // float32
                pub const m_flLightScale: usize = 0xBC; // float32
                pub const m_flFoWDarkness: usize = 0xC0; // float32
                pub const m_bEnableSeparateSkyboxFog: usize = 0xC4; // bool
                pub const m_vFowColor: usize = 0xC8; // Vector
                pub const m_ViewOrigin: usize = 0xD4; // Vector
                pub const m_ViewAngles: usize = 0xE0; // QAngle
                pub const m_flViewFoV: usize = 0xEC; // float32
                pub const m_WorldPoints: usize = 0xF0; // Vector[8]
                pub const m_vFogOffsetLayer0: usize = 0x4A8; // Vector2D
                pub const m_vFogOffsetLayer1: usize = 0x4B0; // Vector2D
                pub const m_hEnvWind: usize = 0x4B8; // CHandle<C_BaseEntity>
                pub const m_hEnvSky: usize = 0x4BC; // CHandle<C_BaseEntity>
            };
            // Parent: None
            // Field count: 0
            pub const IClientAlphaProperty = struct {
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const inv_image_light_sun_t = struct {
                pub const color: usize = 0x0; // Vector
                pub const angle: usize = 0xC; // QAngle
                pub const brightness: usize = 0x18; // float32
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub const CompositeMaterialMatchFilter_t = struct {
                pub const m_nCompositeMaterialMatchFilterType: usize = 0x0; // CompositeMaterialMatchFilterType_t
                pub const m_strMatchFilter: usize = 0x8; // CUtlString
                pub const m_strMatchValue: usize = 0x10; // CUtlString
                pub const m_bPassWhenTrue: usize = 0x18; // bool
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MPropertyElementNameFn
            pub const CompositeMaterial_t = struct {
                pub const m_TargetKVs: usize = 0x8; // KeyValues3
                pub const m_PreGenerationKVs: usize = 0x18; // KeyValues3
                pub const m_FinalKVs: usize = 0x58; // KeyValues3
                pub const m_vecGeneratedTextures: usize = 0x80; // CUtlVector<GeneratedTextureHandle_t>
            };
        };
    };
};
