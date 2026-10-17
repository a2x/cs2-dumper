// Generated using https://github.com/a2x/cs2-dumper
// 2026-10-15 20:28:01.381534584 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: libclient.so
        // Class count: 542
        // Enum count: 14
        pub mod libclient_so {
            // Alignment: 4
            // Member count: 5
            #[repr(u32)]
            pub enum C_BaseCombatCharacter__WaterWakeMode_t {
                WATER_WAKE_NONE = 0x0,
                WATER_WAKE_IDLE = 0x1,
                WATER_WAKE_WALKING = 0x2,
                WATER_WAKE_RUNNING = 0x3,
                WATER_WAKE_WATER_OVERHEAD = 0x4
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum PulseBestOutflowRules_t {
                SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
                SORT_BY_OUTFLOW_INDEX = 0x1
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum PulseCursorCancelPriority_t {
                None = 0x0,
                CancelOnSucceeded = 0x1,
                SoftCancel = 0x2,
                HardCancel = 0x3
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum PulseMethodCallMode_t {
                SYNC_WAIT_FOR_COMPLETION = 0x0,
                ASYNC_FIRE_AND_FORGET = 0x1
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum PulseCursorWakePriority_t {
                WakeElegantly = 0x0,
                WakeImmediate = 0x1
            }
            // Alignment: 4
            // Member count: 15
            #[repr(u32)]
            pub enum CompositeMaterialInputLooseVariableType_t {
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
            #[repr(u32)]
            pub enum CompositeMaterialInputTextureType_t {
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
            #[repr(u32)]
            pub enum InventoryNodeType_t {
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
            #[repr(u32)]
            pub enum CompositeMaterialInputContainerSourceType_t {
                CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0x0,
                CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 0x1,
                CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 0x2,
                CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 0x3,
                CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 0x4,
                CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 0x5
            }
            // Alignment: 4
            // Member count: 10
            #[repr(u32)]
            pub enum CompMatPropertyMutatorType_t {
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
            #[repr(u32)]
            pub enum CompositeMaterialVarSystemVar_t {
                COMPMATSYSVAR_COMPOSITETIME = 0x0,
                COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 0x1
            }
            // Alignment: 4
            // Member count: 7
            #[repr(u32)]
            pub enum P2P_Messages {
                p2p_TextMessage = 0x100,
                p2p_Voice = 0x101,
                p2p_Ping = 0x102,
                p2p_VRAvatarPosition = 0x103,
                p2p_WatchSynchronization = 0x104,
                p2p_FightingGame_GameData = 0x105,
                p2p_FightingGame_Connection = 0x106
            }
            // Alignment: 4
            // Member count: 6
            #[repr(u32)]
            pub enum CompositeMaterialMatchFilterType_t {
                MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0x0,
                MATCH_FILTER_MATERIAL_SHADER = 0x1,
                MATCH_FILTER_MATERIAL_NAME_SUBSTR = 0x2,
                MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 0x3,
                MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 0x4,
                MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 0x5
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum CompMatPropertyMutatorConditionType_t {
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0x0,
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 0x1,
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 0x2
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_TeamIntroCharacterPosition {
            }
            // Parent: None
            // Field count: 0
            pub mod C_FireCrackerBlast {
            }
            // Parent: None
            // Field count: 0
            pub mod CCSGO_WingmanIntroCounterTerroristPosition {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            pub mod CPulseCell_WaitForCursorsWithTag {
                pub const m_bTagSelfWhenComplete: usize = 0x128; // bool
                pub const m_nDesiredKillPriority: usize = 0x12C; // PulseCursorCancelPriority_t
            }
            // Parent: None
            // Field count: 1
            pub mod C_SceneEntity__QueuedEvents_t {
                pub const starttime: usize = 0x0; // float32
            }
            // Parent: None
            // Field count: 1
            pub mod CCSPlayer_PingServices {
                pub const m_hPlayerPing: usize = 0x48; // CHandle<C_PlayerPing>
            }
            // Parent: None
            // Field count: 5
            pub mod CEconItemAttribute {
                pub const m_iAttributeDefinitionIndex: usize = 0x30; // uint16
                pub const m_flValue: usize = 0x34; // float32
                pub const m_flInitialValue: usize = 0x38; // float32
                pub const m_nRefundableCurrency: usize = 0x3C; // int32
                pub const m_bSetBonus: usize = 0x40; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_RaceCursors {
                pub const m_Outflows: usize = 0xD8; // CUtlVector<CPulse_OutflowConnection>
                pub const m_OnFinished: usize = 0xF0; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 0
            pub mod CFuncRetakeBarrier {
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_EnvWindShared {
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
            }
            // Parent: C_BaseEntity
            // Field count: 4
            pub mod C_SkyCamera {
                pub const m_skyboxData: usize = 0x780; // sky3dparams_t
                pub const m_skyboxSlotToken: usize = 0x810; // CUtlStringToken
                pub const m_bUseAngles: usize = 0x814; // bool
                pub const m_pNext: usize = 0x818; // C_SkyCamera*
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Base {
                pub const m_nEditorNodeID: usize = 0x8; // PulseDocNodeID_t
            }
            // Parent: None
            // Field count: 0
            pub mod C_FuncRotating {
            }
            // Parent: C_BaseEntity
            // Field count: 6
            pub mod C_SoundOpvarSetPointBase {
                pub const m_iszStackName: usize = 0x780; // CUtlSymbolLarge
                pub const m_iszOperatorName: usize = 0x788; // CUtlSymbolLarge
                pub const m_iszOpvarName: usize = 0x790; // CUtlSymbolLarge
                pub const m_iOpvarIndex: usize = 0x798; // int32
                pub const m_bUseAutoCompare: usize = 0x79C; // bool
                pub const m_bFastRefresh: usize = 0x79D; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 24
            pub mod C_EnvCubemapFog {
                pub const m_flEndDistance: usize = 0x77C; // float32
                pub const m_flStartDistance: usize = 0x780; // float32
                pub const m_flFogFalloffExponent: usize = 0x784; // float32
                pub const m_bHeightFogEnabled: usize = 0x788; // bool
                pub const m_flFogHeightWidth: usize = 0x78C; // float32
                pub const m_flFogHeightEnd: usize = 0x790; // float32
                pub const m_flFogHeightStart: usize = 0x794; // float32
                pub const m_flFogHeightExponent: usize = 0x798; // float32
                pub const m_flLODBias: usize = 0x79C; // float32
                pub const m_bActive: usize = 0x7A0; // bool
                pub const m_bStartDisabled: usize = 0x7A1; // bool
                pub const m_flFogMaxOpacity: usize = 0x7A4; // float32
                pub const m_nCubemapSourceType: usize = 0x7A8; // int32
                pub const m_hSkyMaterial: usize = 0x7B0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_iszSkyEntity: usize = 0x7B8; // CUtlSymbolLarge
                pub const m_nHeightFogType: usize = 0x7C0; // int32
                pub const m_nFogHeightBlendMode: usize = 0x7C4; // int32
                pub const m_nFogHeightCoordinateSpace: usize = 0x7C8; // int32
                pub const m_nDistanceFogType: usize = 0x7CC; // int32
                pub const m_DistanceFogCurveString: usize = 0x7D0; // CUtlSymbolLarge
                pub const m_HeightFogCurveString: usize = 0x7D8; // CUtlSymbolLarge
                pub const m_hFogCubemapTexture: usize = 0x870; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_bHasHeightFogEnd: usize = 0x878; // bool
                pub const m_bFirstTime: usize = 0x879; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_TeamSelectTerroristPosition {
            }
            // Parent: C_ParticleSystem
            // Field count: 5
            pub mod C_EnvParticleGlow {
                pub const m_flAlphaScale: usize = 0x15F0; // float32
                pub const m_flRadiusScale: usize = 0x15F4; // float32
                pub const m_flSelfIllumScale: usize = 0x15F8; // float32
                pub const m_ColorTint: usize = 0x15FC; // Color
                pub const m_hTextureOverride: usize = 0x1600; // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
            // Parent: None
            // Field count: 0
            pub mod CCS_PortraitWorldCallbackHandler {
            }
            // Parent: None
            // Field count: 9
            pub mod CCSPlayerController_InventoryServices {
                pub const m_vecNetworkableLoadout: usize = 0x40; // CUtlVector<CCSPlayerController_InventoryServices::NetworkedLoadoutSlot_t>
                pub const m_unMusicID: usize = 0x58; // uint16
                pub const m_rank: usize = 0x5C; // MedalRank_t[6]
                pub const m_nPersonaDataPublicLevel: usize = 0x74; // int32
                pub const m_nPersonaDataPublicCommendsLeader: usize = 0x78; // int32
                pub const m_nPersonaDataPublicCommendsTeacher: usize = 0x7C; // int32
                pub const m_nPersonaDataPublicCommendsFriendly: usize = 0x80; // int32
                pub const m_nPersonaDataXpTrailLevel: usize = 0x84; // int32
                pub const m_vecServerAuthoritativeWeaponSlots: usize = 0x88; // C_UtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
            }
            // Parent: None
            // Field count: 9
            pub mod CCSPlayerModernJump {
                pub const m_nLastActualJumpPressTick: usize = 0x10; // GameTick_t
                pub const m_flLastActualJumpPressFrac: usize = 0x14; // float32
                pub const m_nLastUsableJumpPressTick: usize = 0x18; // GameTick_t
                pub const m_flLastUsableJumpPressFrac: usize = 0x1C; // float32
                pub const m_nLastLandedTick: usize = 0x20; // GameTick_t
                pub const m_flLastLandedFrac: usize = 0x24; // float32
                pub const m_flLastLandedVelocityX: usize = 0x28; // float32
                pub const m_flLastLandedVelocityY: usize = 0x2C; // float32
                pub const m_flLastLandedVelocityZ: usize = 0x30; // float32
            }
            // Parent: None
            // Field count: 1
            pub mod C_EconEntity__AttachedModelData_t {
                pub const m_iModelDisplayFlags: usize = 0x0; // int32
            }
            // Parent: None
            // Field count: 0
            pub mod CPulse_ResumePoint {
            }
            // Parent: C_BaseTrigger
            // Field count: 9
            pub mod CTriggerFan {
                pub const m_vFanOriginOffset: usize = 0x1108; // Vector
                pub const m_vDirection: usize = 0x1114; // Vector
                pub const m_bPushTowardsInfoTarget: usize = 0x1120; // bool
                pub const m_bPushAwayFromInfoTarget: usize = 0x1121; // bool
                pub const m_qNoiseDelta: usize = 0x1130; // Quaternion
                pub const m_hInfoFan: usize = 0x1140; // CHandle<CInfoFan>
                pub const m_flForce: usize = 0x1144; // float32
                pub const m_bFalloff: usize = 0x1148; // bool
                pub const m_RampTimer: usize = 0x1150; // CountdownTimer
            }
            // Parent: None
            // Field count: 0
            pub mod C_HostageCarriableProp {
            }
            // Parent: None
            // Field count: 6
            pub mod C_BulletHitModel {
                pub const m_matLocal: usize = 0x11F0; // matrix3x4_t
                pub const m_iBoneIndex: usize = 0x1220; // int32
                pub const m_hPlayerParent: usize = 0x1224; // CHandle<C_BaseEntity>
                pub const m_bIsHit: usize = 0x1228; // bool
                pub const m_flTimeCreated: usize = 0x122C; // float32
                pub const m_vecStartPos: usize = 0x1230; // VectorWS
            }
            // Parent: None
            // Field count: 3
            pub mod C_FuncElectrifiedVolume {
                pub const m_nAmbientEffect: usize = 0x1020; // ParticleIndex_t
                pub const m_EffectName: usize = 0x1028; // CUtlSymbolLarge
                pub const m_bState: usize = 0x1030; // bool
            }
            // Parent: None
            // Field count: 17
            pub mod C_MapVetoPickController {
                pub const m_nDraftType: usize = 0x78C; // int32
                pub const m_nTeamWinningCoinToss: usize = 0x790; // int32
                pub const m_nTeamWithFirstChoice: usize = 0x794; // int32[64]
                pub const m_nVoteMapIdsList: usize = 0x894; // int32[7]
                pub const m_nAccountIDs: usize = 0x8B0; // int32[64]
                pub const m_nMapId0: usize = 0x9B0; // int32[64]
                pub const m_nMapId1: usize = 0xAB0; // int32[64]
                pub const m_nMapId2: usize = 0xBB0; // int32[64]
                pub const m_nMapId3: usize = 0xCB0; // int32[64]
                pub const m_nMapId4: usize = 0xDB0; // int32[64]
                pub const m_nMapId5: usize = 0xEB0; // int32[64]
                pub const m_nStartingSide0: usize = 0xFB0; // int32[64]
                pub const m_nCurrentPhase: usize = 0x10B0; // int32
                pub const m_nPhaseStartTick: usize = 0x10B4; // int32
                pub const m_nPhaseDurationTicks: usize = 0x10B8; // int32
                pub const m_nPostDataUpdateTick: usize = 0x10BC; // int32
                pub const m_bDisabledHud: usize = 0x10C0; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 18
            pub mod C_EnvVolumetricFogVolume {
                pub const m_bActive: usize = 0x77C; // bool
                pub const m_vBoxMins: usize = 0x780; // Vector
                pub const m_vBoxMaxs: usize = 0x78C; // Vector
                pub const m_bStartDisabled: usize = 0x798; // bool
                pub const m_bIndirectUseLPVs: usize = 0x799; // bool
                pub const m_flStrength: usize = 0x79C; // float32
                pub const m_nFalloffShape: usize = 0x7A0; // int32
                pub const m_flFalloffExponent: usize = 0x7A4; // float32
                pub const m_flHeightFogDepth: usize = 0x7A8; // float32
                pub const m_fHeightFogEdgeWidth: usize = 0x7AC; // float32
                pub const m_fIndirectLightStrength: usize = 0x7B0; // float32
                pub const m_fSunLightStrength: usize = 0x7B4; // float32
                pub const m_fNoiseStrength: usize = 0x7B8; // float32
                pub const m_TintColor: usize = 0x7BC; // Color
                pub const m_bOverrideTintColor: usize = 0x7C0; // bool
                pub const m_bOverrideIndirectLightStrength: usize = 0x7C1; // bool
                pub const m_bOverrideSunLightStrength: usize = 0x7C2; // bool
                pub const m_bOverrideNoiseStrength: usize = 0x7C3; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_EndOfMatchCharacterPosition {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CPulseCell_PlaySequence {
                pub const m_SequenceName: usize = 0xD8; // CUtlString
                pub const m_PulseAnimEvents: usize = 0xE0; // PulseNodeDynamicOutflows_t
                pub const m_OnFinished: usize = 0xF8; // CPulse_ResumePoint
            }
            // Parent: C_BaseModelEntity
            // Field count: 76
            pub mod C_BarnLight {
                pub const m_bEnabled: usize = 0x1020; // bool
                pub const m_nColorMode: usize = 0x1024; // int32
                pub const m_Color: usize = 0x1028; // Color
                pub const m_flColorTemperature: usize = 0x102C; // float32
                pub const m_flBrightness: usize = 0x1030; // float32
                pub const m_flBrightnessScale: usize = 0x1034; // float32
                pub const m_nDirectLight: usize = 0x1038; // int32
                pub const m_nBakedShadowIndex: usize = 0x103C; // int32
                pub const m_nLightPathUniqueId: usize = 0x1040; // int32
                pub const m_nLightMapUniqueId: usize = 0x1044; // int32
                pub const m_nLuminaireShape: usize = 0x1048; // int32
                pub const m_flLuminaireSize: usize = 0x104C; // float32
                pub const m_flLuminaireAnisotropy: usize = 0x1050; // float32
                pub const m_LightStyleString: usize = 0x1058; // CUtlString
                pub const m_flLightStyleStartTime: usize = 0x1060; // GameTime_t
                pub const m_QueuedLightStyleStrings: usize = 0x1068; // C_NetworkUtlVectorBase<CUtlString>
                pub const m_LightStyleEvents: usize = 0x1080; // C_NetworkUtlVectorBase<CUtlString>
                pub const m_LightStyleTargets: usize = 0x1098; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                pub const m_StyleEvent: usize = 0x10B0; // CEntityIOOutput[4]
                pub const m_hLightCookie: usize = 0x1110; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_flShape: usize = 0x1118; // float32
                pub const m_flSoftX: usize = 0x111C; // float32
                pub const m_flSoftY: usize = 0x1120; // float32
                pub const m_flSkirt: usize = 0x1124; // float32
                pub const m_flSkirtNear: usize = 0x1128; // float32
                pub const m_vSizeParams: usize = 0x112C; // Vector
                pub const m_flRange: usize = 0x1138; // float32
                pub const m_vShear: usize = 0x113C; // Vector
                pub const m_nBakeSpecularToCubemaps: usize = 0x1148; // int32
                pub const m_vBakeSpecularToCubemapsSize: usize = 0x114C; // Vector
                pub const m_flBakeSpecularToCubemapsScale: usize = 0x1158; // float32
                pub const m_nCastShadows: usize = 0x115C; // int32
                pub const m_nShadowMapSize: usize = 0x1160; // int32
                pub const m_nShadowPriority: usize = 0x1164; // int32
                pub const m_bContactShadow: usize = 0x1168; // bool
                pub const m_bForceShadowsEnabled: usize = 0x1169; // bool
                pub const m_nBounceLight: usize = 0x116C; // int32
                pub const m_flBounceScale: usize = 0x1170; // float32
                pub const m_flMinRoughness: usize = 0x1174; // float32
                pub const m_vAlternateColor: usize = 0x1178; // Vector
                pub const m_fAlternateColorBrightness: usize = 0x1184; // float32
                pub const m_nFog: usize = 0x1188; // int32
                pub const m_flFogStrength: usize = 0x118C; // float32
                pub const m_nFogShadows: usize = 0x1190; // int32
                pub const m_flFogScale: usize = 0x1194; // float32
                pub const m_flFadeSizeStart: usize = 0x1198; // float32
                pub const m_flFadeSizeEnd: usize = 0x119C; // float32
                pub const m_flShadowFadeSizeStart: usize = 0x11A0; // float32
                pub const m_flShadowFadeSizeEnd: usize = 0x11A4; // float32
                pub const m_bPrecomputedFieldsValid: usize = 0x11A8; // bool
                pub const m_vPrecomputedBoundsMins: usize = 0x11AC; // Vector
                pub const m_vPrecomputedBoundsMaxs: usize = 0x11B8; // Vector
                pub const m_vPrecomputedOBBOrigin: usize = 0x11C4; // Vector
                pub const m_vPrecomputedOBBAngles: usize = 0x11D0; // QAngle
                pub const m_vPrecomputedOBBExtent: usize = 0x11DC; // Vector
                pub const m_nPrecomputedSubFrusta: usize = 0x11E8; // int32
                pub const m_vPrecomputedOBBOrigin0: usize = 0x11EC; // Vector
                pub const m_vPrecomputedOBBAngles0: usize = 0x11F8; // QAngle
                pub const m_vPrecomputedOBBExtent0: usize = 0x1204; // Vector
                pub const m_vPrecomputedOBBOrigin1: usize = 0x1210; // Vector
                pub const m_vPrecomputedOBBAngles1: usize = 0x121C; // QAngle
                pub const m_vPrecomputedOBBExtent1: usize = 0x1228; // Vector
                pub const m_vPrecomputedOBBOrigin2: usize = 0x1234; // Vector
                pub const m_vPrecomputedOBBAngles2: usize = 0x1240; // QAngle
                pub const m_vPrecomputedOBBExtent2: usize = 0x124C; // Vector
                pub const m_vPrecomputedOBBOrigin3: usize = 0x1258; // Vector
                pub const m_vPrecomputedOBBAngles3: usize = 0x1264; // QAngle
                pub const m_vPrecomputedOBBExtent3: usize = 0x1270; // Vector
                pub const m_vPrecomputedOBBOrigin4: usize = 0x127C; // Vector
                pub const m_vPrecomputedOBBAngles4: usize = 0x1288; // QAngle
                pub const m_vPrecomputedOBBExtent4: usize = 0x1294; // Vector
                pub const m_vPrecomputedOBBOrigin5: usize = 0x12A0; // Vector
                pub const m_vPrecomputedOBBAngles5: usize = 0x12AC; // QAngle
                pub const m_vPrecomputedOBBExtent5: usize = 0x12B8; // Vector
                pub const m_bInitialBoneSetup: usize = 0x1308; // bool
                pub const m_VisClusters: usize = 0x1310; // C_NetworkUtlVectorBase<uint16>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_LerpCameraSettings {
                pub const m_flSeconds: usize = 0x120; // float32
                pub const m_Start: usize = 0x124; // PointCameraSettings_t
                pub const m_End: usize = 0x134; // PointCameraSettings_t
            }
            // Parent: None
            // Field count: 4
            pub mod CPointOffScreenIndicatorUi {
                pub const m_bBeenEnabled: usize = 0x1269; // bool
                pub const m_bHide: usize = 0x126A; // bool
                pub const m_flSeenTargetTime: usize = 0x126C; // float32
                pub const m_pTargetPanel: usize = 0x1270; // C_PointClientUIWorldPanel*
            }
            // Parent: None
            // Field count: 0
            pub mod CCSObserver_UseServices {
            }
            // Parent: C_BaseTrigger
            // Field count: 12
            pub mod C_PostProcessingVolume {
                pub const m_hPostSettings: usize = 0x1118; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
                pub const m_flFadeDuration: usize = 0x1120; // float32
                pub const m_flMinLogExposure: usize = 0x1124; // float32
                pub const m_flMaxLogExposure: usize = 0x1128; // float32
                pub const m_flMinExposure: usize = 0x112C; // float32
                pub const m_flMaxExposure: usize = 0x1130; // float32
                pub const m_flExposureCompensation: usize = 0x1134; // float32
                pub const m_flExposureFadeSpeedUp: usize = 0x1138; // float32
                pub const m_flExposureFadeSpeedDown: usize = 0x113C; // float32
                pub const m_flTonemapEVSmoothingRange: usize = 0x1140; // float32
                pub const m_bMaster: usize = 0x1144; // bool
                pub const m_bExposureControl: usize = 0x1145; // bool
            }
            // Parent: C_BaseTrigger
            // Field count: 1
            pub mod CCSMinimapVolume {
                pub const m_strMinimapName: usize = 0x1120; // CUtlString
            }
            // Parent: None
            // Field count: 0
            pub mod CCSPlayer_UseServices {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_BaseModelEntity__Emphasized_Phoneme {
                pub const m_sClassName: usize = 0x0; // CUtlString
                pub const m_flAmount: usize = 0x18; // float32
                pub const m_bRequired: usize = 0x1C; // bool
                pub const m_bBasechecked: usize = 0x1D; // bool
                pub const m_bValid: usize = 0x1E; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_CounterTerroristWingmanIntroCamera {
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
            pub mod CPulseCell_PickBestOutflowSelector {
                pub const m_nCheckType: usize = 0x48; // PulseBestOutflowRules_t
                pub const m_OutflowList: usize = 0x50; // PulseSelectorOutflowList_t
            }
            // Parent: C_PointEntity
            // Field count: 4
            pub mod CInfoFan {
                pub const m_fFanForceMaxRadius: usize = 0x7C0; // float32
                pub const m_fFanForceMinRadius: usize = 0x7C4; // float32
                pub const m_flCurveDistRange: usize = 0x7C8; // float32
                pub const m_FanForceCurveString: usize = 0x7D0; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 7
            pub mod C_VoteController {
                pub const m_iActiveIssueIndex: usize = 0x78C; // int32
                pub const m_iOnlyTeamToVote: usize = 0x790; // int32
                pub const m_nVoteOptionCount: usize = 0x794; // int32[5]
                pub const m_nPotentialVotes: usize = 0x7A8; // int32
                pub const m_bVotesDirty: usize = 0x7AC; // bool
                pub const m_bTypeDirty: usize = 0x7AD; // bool
                pub const m_bIsYesNoVote: usize = 0x7AE; // bool
            }
            // Parent: None
            // Field count: 10
            pub mod C_C4 {
                pub const m_activeLightParticleIndex: usize = 0x2DA8; // ParticleIndex_t
                pub const m_eActiveLightEffect: usize = 0x2DAC; // C4LightEffect_t
                pub const m_bStartedArming: usize = 0x2DB0; // bool
                pub const m_fArmedTime: usize = 0x2DB4; // GameTime_t
                pub const m_bBombPlacedAnimation: usize = 0x2DB8; // bool
                pub const m_bIsPlantingViaUse: usize = 0x2DB9; // bool
                pub const m_entitySpottedState: usize = 0x2DC0; // EntitySpottedState_t
                pub const m_nSpotRules: usize = 0x2DD8; // int32
                pub const m_bPlayedArmingBeeps: usize = 0x2DDC; // bool[7]
                pub const m_bBombPlanted: usize = 0x2DE3; // bool
            }
            // Parent: C_BasePlayerPawn
            // Field count: 26
            pub mod C_CSPlayerPawnBase {
                pub const m_pPingServices: usize = 0x1460; // CCSPlayer_PingServices*
                pub const m_previousPlayerState: usize = 0x1468; // CSPlayerState
                pub const m_iPlayerState: usize = 0x146C; // CSPlayerState
                pub const m_bHasMovedSinceSpawn: usize = 0x1470; // bool
                pub const m_flLastSpawnTimeIndex: usize = 0x1474; // GameTime_t
                pub const m_iProgressBarDuration: usize = 0x1478; // int32
                pub const m_flProgressBarStartTime: usize = 0x147C; // float32
                pub const m_flClientDeathTime: usize = 0x1480; // GameTime_t
                pub const m_flFlashBangTime: usize = 0x1484; // float32
                pub const m_flFlashScreenshotAlpha: usize = 0x1488; // float32
                pub const m_flFlashOverlayAlpha: usize = 0x148C; // float32
                pub const m_bFlashBuildUp: usize = 0x1490; // bool
                pub const m_bFlashDspHasBeenCleared: usize = 0x1491; // bool
                pub const m_bFlashScreenshotHasBeenGrabbed: usize = 0x1492; // bool
                pub const m_flFlashMaxAlpha: usize = 0x1494; // float32
                pub const m_flFlashDuration: usize = 0x1498; // float32
                pub const m_flClientHealthFadeChangeTimestamp: usize = 0x149C; // GameTime_t
                pub const m_nClientHealthFadeParityValue: usize = 0x14A0; // int32
                pub const m_fNextThinkPushAway: usize = 0x14A4; // float32
                pub const m_flCurrentMusicStartTime: usize = 0x14AC; // float32
                pub const m_flMusicRoundStartTime: usize = 0x14B0; // float32
                pub const m_bDeferStartMusicOnWarmup: usize = 0x14B4; // bool
                pub const m_flLastSmokeOverlayAlpha: usize = 0x14B8; // float32
                pub const m_flLastSmokeAge: usize = 0x14BC; // float32
                pub const m_vLastSmokeOverlayColor: usize = 0x14C0; // Vector
                pub const m_hOriginalController: usize = 0x14E8; // CHandle<CCSPlayerController>
            }
            // Parent: CBaseProp
            // Field count: 29
            pub mod C_BreakableProp {
                pub const m_CPropDataComponent: usize = 0x1220; // CPropDataComponent
                pub const m_OnStartDeath: usize = 0x1260; // CEntityIOOutput
                pub const m_OnBreak: usize = 0x1278; // CEntityIOOutput
                pub const m_OnHealthChanged: usize = 0x1290; // CEntityOutputTemplate<float32>
                pub const m_OnTakeDamage: usize = 0x12B0; // CEntityIOOutput
                pub const m_impactEnergyScale: usize = 0x12C8; // float32
                pub const m_iMinHealthDmg: usize = 0x12CC; // int32
                pub const m_flPressureDelay: usize = 0x12D0; // float32
                pub const m_flDefBurstScale: usize = 0x12D4; // float32
                pub const m_vDefBurstOffset: usize = 0x12D8; // Vector
                pub const m_hBreaker: usize = 0x12E4; // CHandle<C_BaseEntity>
                pub const m_PerformanceMode: usize = 0x12E8; // PerformanceMode_t
                pub const m_flPreventDamageBeforeTime: usize = 0x12EC; // GameTime_t
                pub const m_BreakableContentsType: usize = 0x12F0; // BreakableContentsType_t
                pub const m_strBreakableContentsPropGroupOverride: usize = 0x12F8; // CUtlString
                pub const m_strBreakableContentsParticleOverride: usize = 0x1300; // CUtlString
                pub const m_bHasBreakPiecesOrCommands: usize = 0x1308; // bool
                pub const m_explodeDamage: usize = 0x130C; // float32
                pub const m_explodeRadius: usize = 0x1310; // float32
                pub const m_sExplosionType: usize = 0x1318; // CGlobalSymbol
                pub const m_explosionDelay: usize = 0x1320; // float32
                pub const m_explosionBuildupSound: usize = 0x1328; // CUtlSymbolLarge
                pub const m_explosionCustomEffect: usize = 0x1330; // CUtlSymbolLarge
                pub const m_explosionCustomSound: usize = 0x1338; // CUtlSymbolLarge
                pub const m_explosionModifier: usize = 0x1340; // CUtlSymbolLarge
                pub const m_hPhysicsAttacker: usize = 0x1348; // CHandle<C_BasePlayerPawn>
                pub const m_flLastPhysicsInfluenceTime: usize = 0x134C; // GameTime_t
                pub const m_flDefaultFadeScale: usize = 0x1350; // float32
                pub const m_hLastAttacker: usize = 0x1354; // CHandle<C_BaseEntity>
            }
            // Parent: None
            // Field count: 0
            pub mod CCSGO_WingmanIntroTerroristPosition {
            }
            // Parent: None
            // Field count: 6
            pub mod C_RetakeGameRules {
                pub const m_nMatchSeed: usize = 0x138; // int32
                pub const m_bBlockersPresent: usize = 0x13C; // bool
                pub const m_bRoundInProgress: usize = 0x13D; // bool
                pub const m_iFirstSecondHalfRound: usize = 0x140; // int32
                pub const m_iBombSite: usize = 0x144; // int32
                pub const m_hBombPlanter: usize = 0x148; // CHandle<C_CSPlayerPawn>
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            pub mod C_SoundOpvarSetDomeEntity {
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPrecipitationVData {
                pub const m_szParticlePrecipitationEffect: usize = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                pub const m_szParticlePrecipitationPuddleEffect: usize = 0x108; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                pub const m_szParticlePrecipitationPostEffect: usize = 0x1E8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                pub const m_flInnerDistance: usize = 0x2C8; // float32
                pub const m_nAttachType: usize = 0x2CC; // ParticleAttachment_t
                pub const m_bBatchSameVolumeType: usize = 0x2D0; // bool
                pub const m_nRTEnvCP: usize = 0x2D4; // int32
                pub const m_nRTEnvCPComponent: usize = 0x2D8; // int32
                pub const m_szModifier: usize = 0x2E0; // CUtlString
                pub const m_nUseSnapshotFromSurfaceGraph: usize = 0x2E8; // int32
                pub const m_snapshotFilter: usize = 0x2EC; // PrecipitationFilter_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CPulseCell_WaitForObservable {
                pub const m_Condition: usize = 0xD8; // CPulseObservableExpression<bool>
                pub const m_OnTrue: usize = 0x168; // CPulse_ResumePoint
            }
            // Parent: C_SoundAreaEntityBase
            // Field count: 1
            pub mod C_SoundAreaEntitySphere {
                pub const m_flRadius: usize = 0x79C; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Step_EntFire {
                pub const m_Input: usize = 0x48; // CUtlString
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponAWP {
            }
            // Parent: C_BaseModelEntity
            // Field count: 3
            pub mod C_BaseButton {
                pub const m_glowEntity: usize = 0x1020; // CHandle<C_BaseModelEntity>
                pub const m_usable: usize = 0x1024; // bool
                pub const m_szDisplayText: usize = 0x1028; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 1
            pub mod CCSObserver_ObserverServices {
                pub const m_obsInterpState: usize = 0x70; // ObserverInterpState_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CHitboxComponent {
                pub const m_flBoundsExpandRadius: usize = 0x14; // float32
            }
            // Parent: C_BaseEntity
            // Field count: 2
            pub mod C_SoundEventBoxHelper {
                pub const m_vMins: usize = 0x77C; // Vector
                pub const m_vMaxs: usize = 0x788; // Vector
            }
            // Parent: C_SoundEventMultiPointEntity
            // Field count: 1
            pub mod C_SoundEventBoxEntity {
                pub const m_vecBoxHelpersNetworked: usize = 0x838; // C_NetworkUtlVectorBase<SoundeventBoxHelperNetworked_t>
            }
            // Parent: None
            // Field count: 3
            pub mod ServerAuthoritativeWeaponSlot_t {
                pub const unClass: usize = 0x30; // uint16
                pub const unSlot: usize = 0x32; // uint16
                pub const unItemDefIdx: usize = 0x34; // uint16
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSMinimapBoundary {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPathQueryComponent {
            }
            // Parent: None
            // Field count: 8
            pub mod C_Precipitation {
                pub const m_flDensity: usize = 0x1108; // float32
                pub const m_flParticleInnerDist: usize = 0x1118; // float32
                pub const m_pParticleDef: usize = 0x1120; // char*
                pub const m_tParticlePrecipTraceTimer: usize = 0x1134; // TimedEvent[1]
                pub const m_bActiveParticlePrecipEmitter: usize = 0x113C; // bool[1]
                pub const m_bParticlePrecipInitialized: usize = 0x113D; // bool
                pub const m_bHasSimulatedSinceLastSceneObjectUpdate: usize = 0x113E; // bool
                pub const m_nAvailableSheetSequencesMaxIndex: usize = 0x1140; // int32
            }
            // Parent: C_BaseEntity
            // Field count: 7
            pub mod CLogicRelay {
                pub const m_OnSpawn: usize = 0x780; // CEntityIOOutput
                pub const m_OnTrigger: usize = 0x798; // CEntityIOOutput
                pub const m_bDisabled: usize = 0x7B0; // bool
                pub const m_bWaitForRefire: usize = 0x7B1; // bool
                pub const m_bTriggerOnce: usize = 0x7B2; // bool
                pub const m_bFastRetrigger: usize = 0x7B3; // bool
                pub const m_bPassthoughCaller: usize = 0x7B4; // bool
            }
            // Parent: None
            // Field count: 6
            pub mod SequenceHistory_t {
                pub const m_hSequence: usize = 0x0; // HSequence
                pub const m_flSeqStartTime: usize = 0x4; // GameTime_t
                pub const m_flSeqFixedCycle: usize = 0x8; // float32
                pub const m_nSeqLoopMode: usize = 0xC; // AnimLoopMode_t
                pub const m_flPlaybackRate: usize = 0x10; // float32
                pub const m_flCyclesPerSecond: usize = 0x14; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CPlayer_ItemServices {
            }
            // Parent: None
            // Field count: 4
            pub mod CPulse_OutflowConnection {
                pub const m_SourceOutflowName: usize = 0x0; // PulseSymbol_t
                pub const m_nDestChunk: usize = 0x10; // PulseRuntimeChunkIndex_t
                pub const m_nInstruction: usize = 0x14; // int32
                pub const m_OutflowRegisterMap: usize = 0x18; // PulseRegisterMap_t
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponUMP45 {
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponG3SG1 {
            }
            // Parent: None
            // Field count: 2
            pub mod C_SpotlightEnd {
                pub const m_flLightScale: usize = 0x1020; // float32
                pub const m_Radius: usize = 0x1024; // float32
            }
            // Parent: None
            // Field count: 23
            pub mod C_Fish {
                pub const m_pos: usize = 0x11F0; // VectorWS
                pub const m_vel: usize = 0x11FC; // Vector
                pub const m_angles: usize = 0x1208; // QAngle
                pub const m_localLifeState: usize = 0x1214; // int32
                pub const m_deathDepth: usize = 0x1218; // float32
                pub const m_deathAngle: usize = 0x121C; // float32
                pub const m_buoyancy: usize = 0x1220; // float32
                pub const m_wiggleTimer: usize = 0x1228; // CountdownTimer
                pub const m_wigglePhase: usize = 0x1240; // float32
                pub const m_wiggleRate: usize = 0x1244; // float32
                pub const m_actualPos: usize = 0x1248; // VectorWS
                pub const m_actualAngles: usize = 0x1254; // QAngle
                pub const m_poolOrigin: usize = 0x1260; // VectorWS
                pub const m_waterLevel: usize = 0x126C; // float32
                pub const m_gotUpdate: usize = 0x1270; // bool
                pub const m_x: usize = 0x1274; // float32
                pub const m_y: usize = 0x1278; // float32
                pub const m_z: usize = 0x127C; // float32
                pub const m_angle: usize = 0x1280; // float32
                pub const m_errorHistory: usize = 0x1284; // float32[20]
                pub const m_errorHistoryIndex: usize = 0x12D4; // int32
                pub const m_errorHistoryCount: usize = 0x12D8; // int32
                pub const m_averageError: usize = 0x12DC; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponFamas {
            }
            // Parent: C_BaseEntity
            // Field count: 36
            pub mod C_EnvVolumetricFogController {
                pub const m_flScattering: usize = 0x77C; // float32
                pub const m_TintColor: usize = 0x780; // Color
                pub const m_flAnisotropy: usize = 0x784; // float32
                pub const m_flFadeSpeed: usize = 0x788; // float32
                pub const m_flDrawDistance: usize = 0x78C; // float32
                pub const m_flFadeInStart: usize = 0x790; // float32
                pub const m_flFadeInEnd: usize = 0x794; // float32
                pub const m_flIndirectStrength: usize = 0x798; // float32
                pub const m_nVolumeDepth: usize = 0x79C; // int32
                pub const m_fFirstVolumeSliceThickness: usize = 0x7A0; // float32
                pub const m_nIndirectTextureDimX: usize = 0x7A4; // int32
                pub const m_nIndirectTextureDimY: usize = 0x7A8; // int32
                pub const m_nIndirectTextureDimZ: usize = 0x7AC; // int32
                pub const m_vBoxMins: usize = 0x7B0; // Vector
                pub const m_vBoxMaxs: usize = 0x7BC; // Vector
                pub const m_bActive: usize = 0x7C8; // bool
                pub const m_flStartAnisoTime: usize = 0x7CC; // GameTime_t
                pub const m_flStartScatterTime: usize = 0x7D0; // GameTime_t
                pub const m_flStartDrawDistanceTime: usize = 0x7D4; // GameTime_t
                pub const m_flStartAnisotropy: usize = 0x7D8; // float32
                pub const m_flStartScattering: usize = 0x7DC; // float32
                pub const m_flStartDrawDistance: usize = 0x7E0; // float32
                pub const m_flDefaultAnisotropy: usize = 0x7E4; // float32
                pub const m_flDefaultScattering: usize = 0x7E8; // float32
                pub const m_flDefaultDrawDistance: usize = 0x7EC; // float32
                pub const m_bStartDisabled: usize = 0x7F0; // bool
                pub const m_bEnableIndirect: usize = 0x7F1; // bool
                pub const m_bIsMaster: usize = 0x7F2; // bool
                pub const m_hFogIndirectTexture: usize = 0x7F8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_nForceRefreshCount: usize = 0x800; // int32
                pub const m_fNoiseSpeed: usize = 0x804; // float32
                pub const m_fNoiseStrength: usize = 0x808; // float32
                pub const m_vNoiseScale: usize = 0x80C; // Vector
                pub const m_fWindSpeed: usize = 0x818; // float32
                pub const m_vWindDirection: usize = 0x81C; // Vector
                pub const m_bFirstTime: usize = 0x828; // bool
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseGraphDef {
                pub const m_DomainIdentifier: usize = 0x8; // PulseSymbol_t
                pub const m_DomainSubType: usize = 0x18; // CPulseValueFullType
                pub const m_ParentMapName: usize = 0x30; // PulseSymbol_t
                pub const m_ParentXmlName: usize = 0x40; // PulseSymbol_t
                pub const m_Chunks: usize = 0x50; // CUtlVector<CPulse_Chunk*>
                pub const m_Cells: usize = 0x68; // CUtlVector<CPulseCell_Base*>
                pub const m_Vars: usize = 0x80; // CUtlVector<CPulse_Variable>
                pub const m_TempVarBanks: usize = 0x98; // CUtlVector<CPulse_TempVarBankDefinition*>
                pub const m_PublicOutputs: usize = 0xB0; // CUtlVector<CPulse_PublicOutput>
                pub const m_InvokeBindings: usize = 0xC8; // CUtlVector<CPulse_InvokeBinding*>
                pub const m_CallInfos: usize = 0xE0; // CUtlVector<CPulse_CallInfo*>
                pub const m_Constants: usize = 0xF8; // CUtlVector<CPulse_Constant>
                pub const m_DomainValues: usize = 0x110; // CUtlVector<CPulse_DomainValue>
                pub const m_BlackboardReferences: usize = 0x128; // CUtlVector<CPulse_BlackboardReference>
                pub const m_OutputConnections: usize = 0x140; // CUtlVector<CPulse_OutputConnection*>
            }
            // Parent: C_BaseEntity
            // Field count: 2
            pub mod C_EnvDetailController {
                pub const m_flFadeStartDist: usize = 0x77C; // float32
                pub const m_flFadeEndDist: usize = 0x780; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CHostageRescueZoneShim {
            }
            // Parent: None
            // Field count: 0
            pub mod CEnvSoundscapeAlias_snd_soundscape {
            }
            // Parent: None
            // Field count: 2
            pub mod CCSPlayer_HostageServices {
                pub const m_hCarriedHostage: usize = 0x48; // CHandle<C_BaseEntity>
                pub const m_hCarriedHostageProp: usize = 0x4C; // CHandle<C_BaseEntity>
            }
            // Parent: None
            // Field count: 0
            pub mod C_GameRulesProxy {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CRenderComponent {
                pub const __m_pChainEntity: usize = 0x10; // CNetworkVarChainer
                pub const m_bIsRenderingWithViewModels: usize = 0x50; // bool
                pub const m_nSplitscreenFlags: usize = 0x54; // uint32
                pub const m_bEnableRendering: usize = 0x58; // bool
                pub const m_bInterpolationReadyToDraw: usize = 0xB8; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 4
            pub mod C_Team {
                pub const m_aPlayerControllers: usize = 0x780; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
                pub const m_aPlayers: usize = 0x798; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
                pub const m_iScore: usize = 0x7B0; // int32
                pub const m_szTeamname: usize = 0x7B4; // char[129]
            }
            // Parent: None
            // Field count: 0
            pub mod C_PathParticleRopeAlias_path_particle_rope_clientside {
            }
            // Parent: C_PointEntity
            // Field count: 1
            pub mod CPointChildModifier {
                pub const m_bOrphanInsteadOfDeletingChildrenOnRemove: usize = 0x77C; // bool
            }
            // Parent: None
            // Field count: 2
            pub mod CCSPlayerLegacyJump {
                pub const m_bOldJumpPressed: usize = 0x10; // bool
                pub const m_flJumpPressedTime: usize = 0x14; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponNOVA {
            }
            // Parent: None
            // Field count: 0
            pub mod C_CS2HudModelAddon {
            }
            // Parent: None
            // Field count: 0
            pub mod C_DEagle {
            }
            // Parent: None
            // Field count: 0
            pub mod C_TriggerMultiple {
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_TerroristRushIntroCamera {
            }
            // Parent: C_CSGO_MapPreviewCameraPath
            // Field count: 1
            pub mod C_CSGO_TeamPreviewCamera {
                pub const m_nVariant: usize = 0x804; // int32
            }
            // Parent: None
            // Field count: 9
            pub mod C_ColorCorrectionVolume {
                pub const m_LastEnterWeight: usize = 0x1108; // float32
                pub const m_LastEnterTime: usize = 0x110C; // GameTime_t
                pub const m_LastExitWeight: usize = 0x1110; // float32
                pub const m_LastExitTime: usize = 0x1114; // GameTime_t
                pub const m_bEnabled: usize = 0x1118; // bool
                pub const m_MaxWeight: usize = 0x111C; // float32
                pub const m_FadeDuration: usize = 0x1120; // float32
                pub const m_Weight: usize = 0x1124; // float32
                pub const m_lookupFilename: usize = 0x1128; // char[512]
            }
            // Parent: None
            // Field count: 18
            pub mod CPlayer_MovementServices {
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
            }
            // Parent: CInfoDynamicShadowHint
            // Field count: 2
            pub mod CInfoDynamicShadowHintBox {
                pub const m_vBoxMins: usize = 0x790; // Vector
                pub const m_vBoxMaxs: usize = 0x79C; // Vector
            }
            // Parent: CSkeletonAnimationController
            // Field count: 32
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBaseAnimGraphController {
                pub const m_nAnimationAlgorithm: usize = 0x18; // AnimationAlgorithm_t
                pub const m_nNextExternalGraphHandle: usize = 0x1C; // ExternalAnimGraphHandle_t
                pub const m_vecSecondarySkeletonSlotIDs: usize = 0x20; // C_NetworkUtlVectorBase<CGlobalSymbol>
                pub const m_vecSecondarySkeletons: usize = 0x38; // C_NetworkUtlVectorBase<CHandle<CBaseAnimGraph>>
                pub const m_nSecondarySkeletonMasterCount: usize = 0x50; // int32
                pub const m_flSoundSyncTime: usize = 0x58; // float32
                pub const m_nActiveIKChainMask: usize = 0x5C; // uint32
                pub const m_hSequence: usize = 0xC0; // HSequence
                pub const m_flSeqStartTime: usize = 0xC4; // GameTime_t
                pub const m_flSeqFixedCycle: usize = 0xC8; // float32
                pub const m_nAnimLoopMode: usize = 0xCC; // AnimLoopMode_t
                pub const m_flPlaybackRate: usize = 0xD0; // CNetworkedQuantizedFloat
                pub const m_nNotifyState: usize = 0xDC; // SequenceFinishNotifyState_t
                pub const m_bNetworkedAnimationInputsChanged: usize = 0xDD; // bool
                pub const m_bNetworkedSequenceChanged: usize = 0xDE; // bool
                pub const m_bLastUpdateSkipped: usize = 0xDF; // bool
                pub const m_bSequenceFinished: usize = 0xE0; // bool
                pub const m_nPrevAnimUpdateTick: usize = 0xE4; // GameTick_t
                pub const m_hGraphDefinitionAG2: usize = 0x380; // CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
                pub const m_SerializePoseRecipeAG2Slots: usize = 0x388; // C_UtlVectorEmbeddedNetworkVar<AnimGraph2SerializedPoseRecipeSlot_t>
                pub const m_SerializePoseRecipeAG2Dynamic: usize = 0x3F0; // C_NetworkUtlVectorBase<uint8>
                pub const m_nSerializePoseRecipeAG2ActiveSlot: usize = 0x408; // uint32
                pub const m_nSerializePoseRecipeVersionAG2: usize = 0x40C; // int32
                pub const m_nServerGraphInstanceIteration: usize = 0x410; // int32
                pub const m_nServerSerializationContextIteration: usize = 0x414; // int32
                pub const m_primaryGraphId: usize = 0x418; // ResourceId_t
                pub const m_vecExternalGraphIds: usize = 0x420; // C_NetworkUtlVectorBase<ResourceId_t>
                pub const m_vecExternalClipIds: usize = 0x438; // C_NetworkUtlVectorBase<ResourceId_t>
                pub const m_sAnimGraph2Identifier: usize = 0x450; // CGlobalSymbol
                pub const m_pGraphInstanceAG2: usize = 0x458; // CAnimGraph2InstancePtr
                pub const m_vecExternalGraphs: usize = 0x678; // CExternalAnimGraphList
                pub const m_nPrevAnimationAlgorithm: usize = 0x6A9; // AnimationAlgorithm_t
            }
            // Parent: None
            // Field count: 18
            pub mod C_ColorCorrection {
                pub const m_vecOrigin: usize = 0x77C; // VectorWS
                pub const m_MinFalloff: usize = 0x788; // float32
                pub const m_MaxFalloff: usize = 0x78C; // float32
                pub const m_flFadeInDuration: usize = 0x790; // float32
                pub const m_flFadeOutDuration: usize = 0x794; // float32
                pub const m_flMaxWeight: usize = 0x798; // float32
                pub const m_flCurWeight: usize = 0x79C; // float32
                pub const m_netlookupFilename: usize = 0x7A0; // char[512]
                pub const m_bEnabled: usize = 0x9A0; // bool
                pub const m_bMaster: usize = 0x9A1; // bool
                pub const m_bClientSide: usize = 0x9A2; // bool
                pub const m_bExclusive: usize = 0x9A3; // bool
                pub const m_bEnabledOnClient: usize = 0x9A4; // bool[1]
                pub const m_flCurWeightOnClient: usize = 0x9A8; // float32[1]
                pub const m_bFadingIn: usize = 0x9AC; // bool[1]
                pub const m_flFadeStartWeight: usize = 0x9B0; // float32[1]
                pub const m_flFadeStartTime: usize = 0x9B4; // float32[1]
                pub const m_flFadeDuration: usize = 0x9B8; // float32[1]
            }
            // Parent: None
            // Field count: 1
            pub mod AnimGraph2SerializedPoseRecipeSlot_t {
                pub const m_topology: usize = 0x30; // CUtlBinaryBlock
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBuoyancyHelper {
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
            }
            // Parent: None
            // Field count: 0
            pub mod C_PhysBox {
            }
            // Parent: None
            // Field count: 4
            pub mod CCSPlayer_CameraServices {
                pub const m_flDeathCamTilt: usize = 0x2B8; // float32
                pub const m_hDeathCamBounds: usize = 0x2BC; // CHandle<C_PointDeathcamBounds>
                pub const m_bDeathCamBoundsSearched: usize = 0x2C0; // bool
                pub const m_vClientScopeInaccuracy: usize = 0x2C8; // Vector
            }
            // Parent: CBaseFilter
            // Field count: 3
            pub mod CFilterMultiple {
                pub const m_nFilterType: usize = 0x7B0; // filter_t
                pub const m_iFilterName: usize = 0x7B8; // CUtlSymbolLarge[10]
                pub const m_hFilter: usize = 0x808; // CHandle<C_BaseEntity>[10]
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_FireCursors {
                pub const m_Outflows: usize = 0xD8; // CUtlVector<CPulse_OutflowConnection>
                pub const m_bWaitForChildOutflows: usize = 0xF0; // bool
                pub const m_OnFinished: usize = 0xF8; // CPulse_ResumePoint
            }
            // Parent: C_BaseEntity
            // Field count: 11
            pub mod CEnvSoundscape {
                pub const m_OnPlay: usize = 0x780; // CEntityIOOutput
                pub const m_flRadius: usize = 0x798; // float32
                pub const m_soundEventName: usize = 0x7A0; // CGameSoundEventName
                pub const m_bOverrideWithEvent: usize = 0x7A8; // bool
                pub const m_soundscapeIndex: usize = 0x7AC; // int32
                pub const m_soundscapeEntityListId: usize = 0x7B0; // int32
                pub const m_positionNames: usize = 0x7B8; // CUtlSymbolLarge[8]
                pub const m_hProxySoundscape: usize = 0x7F8; // CHandle<CEnvSoundscape>
                pub const m_bDisabled: usize = 0x7FC; // bool
                pub const m_soundscapeName: usize = 0x800; // CUtlSymbolLarge
                pub const m_soundEventHash: usize = 0x808; // uint32
            }
            // Parent: None
            // Field count: 0
            pub mod C_SoundEventEntityAlias_snd_event_point {
            }
            // Parent: C_BaseEntity
            // Field count: 3
            pub mod C_FogController {
                pub const m_fog: usize = 0x780; // fogparams_t
                pub const m_bUseAngles: usize = 0x7E8; // bool
                pub const m_iChangedVariables: usize = 0x7EC; // int32
            }
            // Parent: C_SoundOpvarSetPointBase
            // Field count: 0
            pub mod C_SoundOpvarSetOBBWindEntity {
            }
            // Parent: None
            // Field count: 0
            pub mod C_MolotovGrenade {
            }
            // Parent: None
            // Field count: 0
            pub mod C_NetTestBaseCombatCharacter {
            }
            // Parent: CBodyComponent
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBodyComponentPoint {
                pub const m_sceneNode: usize = 0x80; // CGameSceneNode
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponM4A1Silencer {
            }
            // Parent: C_BaseEntity
            // Field count: 11
            pub mod C_SkyCameraVolume {
                pub const m_vBoxMins: usize = 0x798; // Vector
                pub const m_vBoxMaxs: usize = 0x7A4; // Vector
                pub const m_hTarget: usize = 0x7B0; // CHandle<C_SkyCameraVolumeTarget>
                pub const m_nPriority: usize = 0x7B4; // int32
                pub const m_bIsEnabled: usize = 0x7B8; // bool
                pub const m_bSkyboxBlurEffect: usize = 0x7B9; // bool
                pub const m_vBlurOrigin: usize = 0x7BC; // Vector
                pub const m_bSkyboxReceivesWorldCsm: usize = 0x7C8; // bool
                pub const m_bWorldReceivesSkyboxCsm: usize = 0x7C9; // bool
                pub const m_bStartDisabled: usize = 0x7CA; // bool
                pub const m_iszTargetName: usize = 0x7D0; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 31
            pub mod C_EconItemView {
                pub const m_bInventoryImageRgbaRequested: usize = 0x70; // bool
                pub const m_bInventoryImageTriedCache: usize = 0x71; // bool
                pub const m_nInventoryImageRgbaWidth: usize = 0x90; // int32
                pub const m_nInventoryImageRgbaHeight: usize = 0x94; // int32
                pub const m_szCurrentLoadCachedFileName: usize = 0x98; // char[4096]
                pub const m_bRestoreCustomMaterialAfterPrecache: usize = 0x10C0; // bool
                pub const m_iItemDefinitionIndex: usize = 0x10C2; // uint16
                pub const m_iEntityQuality: usize = 0x10C4; // int32
                pub const m_iEntityLevel: usize = 0x10C8; // uint32
                pub const m_iItemID: usize = 0x10D0; // uint64
                pub const m_iItemIDHigh: usize = 0x10D8; // uint32
                pub const m_iItemIDLow: usize = 0x10DC; // uint32
                pub const m_iAccountID: usize = 0x10E0; // uint32
                pub const m_iInventoryPosition: usize = 0x10E4; // uint32
                pub const m_bInitialized: usize = 0x10F0; // bool
                pub const m_bDisallowSOC: usize = 0x10F1; // bool
                pub const m_bIsStoreItem: usize = 0x10F2; // bool
                pub const m_bIsTradeItem: usize = 0x10F3; // bool
                pub const m_iEntityQuantity: usize = 0x10F4; // int32
                pub const m_iRarityOverride: usize = 0x10F8; // int32
                pub const m_iQualityOverride: usize = 0x10FC; // int32
                pub const m_iOriginOverride: usize = 0x1100; // int32
                pub const m_ubStyleOverride: usize = 0x1104; // uint8
                pub const m_unClientFlags: usize = 0x1105; // uint8
                pub const m_AttributeList: usize = 0x1110; // CAttributeList
                pub const m_NetworkedDynamicAttributes: usize = 0x1188; // CAttributeList
                pub const m_szCustomName: usize = 0x1200; // char[161]
                pub const m_szCustomNameOverride: usize = 0x12A1; // char[161]
                pub const m_szCustomNameOverride2: usize = 0x1342; // char[161]
                pub const m_szCustomNameOverride3: usize = 0x13E3; // char[161]
                pub const m_bInitializedTags: usize = 0x14B0; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Timeline__TimelineEvent_t {
                pub const m_flTimeFromPrevious: usize = 0x0; // float32
                pub const m_EventOutflow: usize = 0x8; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_IntervalTimer__CursorState_t {
                pub const m_StartTime: usize = 0x0; // GameTime_t
                pub const m_EndTime: usize = 0x4; // GameTime_t
                pub const m_flWaitInterval: usize = 0x8; // float32
                pub const m_flWaitIntervalHigh: usize = 0xC; // float32
                pub const m_bCompleteOnNextWake: usize = 0x10; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseRequirement {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            pub mod CPulseCell_BaseState {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod OutflowWithRequirements_t {
                pub const m_Connection: usize = 0x0; // CPulse_OutflowConnection
                pub const m_DestinationFlowNodeID: usize = 0x48; // PulseDocNodeID_t
                pub const m_RequirementNodeIDs: usize = 0x50; // CUtlVector<PulseDocNodeID_t>
                pub const m_nCursorStateBlockIndex: usize = 0x68; // CUtlVector<int32>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_IsRequirementValid {
            }
            // Parent: C_SoundEventMultiPointEntity
            // Field count: 1
            pub mod C_SoundEventPathCornerEntity {
                pub const m_vecCornerPairsNetworked: usize = 0x838; // C_NetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
            }
            // Parent: C_BaseEntity
            // Field count: 3
            pub mod C_InfoVisibilityBox {
                pub const m_nMode: usize = 0x780; // int32
                pub const m_vBoxSize: usize = 0x784; // Vector
                pub const m_bEnabled: usize = 0x790; // bool
            }
            // Parent: None
            // Field count: 2
            pub mod CCSPlayer_ItemServices {
                pub const m_bHasDefuser: usize = 0x48; // bool
                pub const m_bHasHelmet: usize = 0x49; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CPulseCell_Value_Gradient {
                pub const m_Gradient: usize = 0x48; // CColorGradient
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod IntervalTimer {
                pub const m_timestamp: usize = 0x8; // GameTime_t
                pub const m_nWorldGroupId: usize = 0xC; // WorldGroupId_t
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod audioparams_t {
                pub const localSound: usize = 0x8; // VectorWS[8]
                pub const soundscapeIndex: usize = 0x68; // int32
                pub const localBits: usize = 0x6C; // uint8
                pub const soundscapeEntityListIndex: usize = 0x70; // int32
                pub const soundEventHash: usize = 0x74; // uint32
            }
            // Parent: C_BaseEntity
            // Field count: 16
            pub mod C_PathParticleRope {
                pub const m_bStartActive: usize = 0x788; // bool
                pub const m_flMaxSimulationTime: usize = 0x78C; // float32
                pub const m_iszEffectName: usize = 0x790; // CUtlSymbolLarge
                pub const m_PathNodes_Name: usize = 0x798; // CUtlVector<CUtlSymbolLarge>
                pub const m_flParticleSpacing: usize = 0x7B0; // float32
                pub const m_flSlack: usize = 0x7B4; // float32
                pub const m_flRadius: usize = 0x7B8; // float32
                pub const m_ColorTint: usize = 0x7BC; // Color
                pub const m_nEffectState: usize = 0x7C0; // int32
                pub const m_iEffectIndex: usize = 0x7C8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_PathNodes_Position: usize = 0x7D0; // C_NetworkUtlVectorBase<Vector>
                pub const m_PathNodes_TangentIn: usize = 0x7E8; // C_NetworkUtlVectorBase<Vector>
                pub const m_PathNodes_TangentOut: usize = 0x800; // C_NetworkUtlVectorBase<Vector>
                pub const m_PathNodes_Color: usize = 0x818; // C_NetworkUtlVectorBase<Vector>
                pub const m_PathNodes_PinEnabled: usize = 0x830; // C_NetworkUtlVectorBase<bool>
                pub const m_PathNodes_RadiusScale: usize = 0x848; // C_NetworkUtlVectorBase<float32>
            }
            // Parent: None
            // Field count: 3
            pub mod C_DecoyProjectile {
                pub const m_nDecoyShotTick: usize = 0x12CC; // int32
                pub const m_nClientLastKnownDecoyShotTick: usize = 0x12D0; // int32
                pub const m_flTimeParticleEffectSpawn: usize = 0x12F8; // GameTime_t
            }
            // Parent: None
            // Field count: 3
            pub mod C_AttributeContainer {
                pub const m_Item: usize = 0x50; // C_EconItemView
                pub const m_iExternalItemProviderRegisteredToken: usize = 0x1508; // int32
                pub const m_ullRegisteredAsItemID: usize = 0x1510; // uint64
            }
            // Parent: C_BasePlayerWeapon
            // Field count: 57
            pub mod C_CSWeaponBase {
                pub const m_iWeaponGameplayAnimState: usize = 0x2838; // WeaponGameplayAnimState
                pub const m_flWeaponGameplayAnimStateTimestamp: usize = 0x283C; // GameTime_t
                pub const m_flInspectCancelCompleteTime: usize = 0x2840; // GameTime_t
                pub const m_bInspectPending: usize = 0x2844; // bool
                pub const m_bInspectShouldLoop: usize = 0x2845; // bool
                pub const m_nLastEmptySoundCmdNum: usize = 0x2870; // int32
                pub const m_bFireOnEmpty: usize = 0x2874; // bool
                pub const m_OnPlayerPickup: usize = 0x2878; // CEntityIOOutput
                pub const m_weaponMode: usize = 0x2890; // CSWeaponMode
                pub const m_flTurningInaccuracyDelta: usize = 0x2894; // float32
                pub const m_vecTurningInaccuracyEyeDirLast: usize = 0x2898; // Vector
                pub const m_flTurningInaccuracy: usize = 0x28A4; // float32
                pub const m_fAccuracyPenalty: usize = 0x28A8; // float32
                pub const m_flLastAccuracyUpdateTime: usize = 0x28AC; // GameTime_t
                pub const m_fAccuracySmoothedForZoom: usize = 0x28B0; // float32
                pub const m_iRecoilIndex: usize = 0x28B4; // int32
                pub const m_flRecoilIndex: usize = 0x28B8; // float32
                pub const m_bBurstMode: usize = 0x28BC; // bool
                pub const m_flLastBurstModeChangeTime: usize = 0x28C0; // GameTime_t
                pub const m_nPostponeFireReadyTicks: usize = 0x28C4; // GameTick_t
                pub const m_flPostponeFireReadyFrac: usize = 0x28C8; // float32
                pub const m_bInReload: usize = 0x28CC; // bool
                pub const m_nDeployTick: usize = 0x28D0; // GameTick_t
                pub const m_flAttackHoldStartTime: usize = 0x28D4; // GameTime_t
                pub const m_flDroppedAtTime: usize = 0x28D8; // GameTime_t
                pub const m_bIsHauledBack: usize = 0x28E0; // bool
                pub const m_bSilencerOn: usize = 0x28E1; // bool
                pub const m_flTimeSilencerSwitchComplete: usize = 0x28E4; // GameTime_t
                pub const m_bStealthy: usize = 0x28E8; // bool
                pub const m_bInSilentReloadSection: usize = 0x28E9; // bool
                pub const m_flStealthHoldStartTime: usize = 0x28EC; // GameTime_t
                pub const m_bReloadHeldSinceStart: usize = 0x28F0; // bool
                pub const m_flWeaponActionPlaybackRate: usize = 0x28F4; // float32
                pub const m_iOriginalTeamNumber: usize = 0x28F8; // int32
                pub const m_iMostRecentTeamNumber: usize = 0x28FC; // int32
                pub const m_bDroppedNearBuyZone: usize = 0x2900; // bool
                pub const m_flNextAttackRenderTimeOffset: usize = 0x2904; // float32
                pub const m_bClearWeaponIdentifyingUGC: usize = 0x29B0; // bool
                pub const m_bVisualsDataSet: usize = 0x29B1; // bool
                pub const m_bUIWeapon: usize = 0x29B2; // bool
                pub const m_nCustomEconReloadEventId: usize = 0x29B4; // int32
                pub const m_bCanBePickedUp: usize = 0x29C0; // bool
                pub const m_nextPrevOwnerUseTime: usize = 0x29C4; // GameTime_t
                pub const m_hPrevOwner: usize = 0x29C8; // CHandle<C_CSPlayerPawn>
                pub const m_nDropTick: usize = 0x29CC; // GameTick_t
                pub const m_bWasActiveWeaponWhenDropped: usize = 0x29D0; // bool
                pub const m_donated: usize = 0x29F4; // bool
                pub const m_fLastShotTime: usize = 0x29F8; // GameTime_t
                pub const m_bWasOwnedByCT: usize = 0x29FC; // bool
                pub const m_bWasOwnedByTerrorist: usize = 0x29FD; // bool
                pub const m_flNextClientFireBulletTime: usize = 0x2A00; // float32
                pub const m_flNextClientFireBulletTime_Repredict: usize = 0x2A04; // float32
                pub const m_IronSightController: usize = 0x2A60; // C_IronSightController
                pub const m_iIronSightMode: usize = 0x2B10; // int32
                pub const m_flLastLOSTraceFailureTime: usize = 0x2B88; // GameTime_t
                pub const m_flWatTickOffset: usize = 0x2BE8; // float32
                pub const m_flLastShakeTime: usize = 0x2BFC; // GameTime_t
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CTimeline {
                pub const m_flValues: usize = 0x10; // float32[64]
                pub const m_nValueCounts: usize = 0x110; // int32[64]
                pub const m_nBucketCount: usize = 0x210; // int32
                pub const m_flInterval: usize = 0x214; // float32
                pub const m_flFinalValue: usize = 0x218; // float32
                pub const m_nCompressionType: usize = 0x21C; // TimelineCompression_t
                pub const m_bStopped: usize = 0x220; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 5
            pub mod C_TonemapController2 {
                pub const m_flAutoExposureMin: usize = 0x77C; // float32
                pub const m_flAutoExposureMax: usize = 0x780; // float32
                pub const m_flExposureAdaptationSpeedUp: usize = 0x784; // float32
                pub const m_flExposureAdaptationSpeedDown: usize = 0x788; // float32
                pub const m_flTonemapEVSmoothingRange: usize = 0x78C; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CountdownTimer {
                pub const m_duration: usize = 0x8; // float32
                pub const m_timestamp: usize = 0xC; // GameTime_t
                pub const m_timescale: usize = 0x10; // float32
                pub const m_nWorldGroupId: usize = 0x14; // WorldGroupId_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataOverlayType
            // MVDataAssociatedFile
            // MVDataPreviewWidget
            pub mod CNoiseStreamData {
                pub const m_Stream: usize = 0x0; // NoiseStreamDef_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PulseNodeDynamicOutflows_t__DynamicOutflow_t {
                pub const m_OutflowID: usize = 0x0; // CGlobalSymbol
                pub const m_Connection: usize = 0x8; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponMag7 {
            }
            // Parent: None
            // Field count: 2
            pub mod WeaponPurchaseCount_t {
                pub const m_nItemDefIndex: usize = 0x30; // uint16
                pub const m_nCount: usize = 0x32; // uint16
            }
            // Parent: None
            // Field count: 0
            pub mod CBasePulseGraphInstance {
            }
            // Parent: CBaseFilter
            // Field count: 3
            pub mod FilterHealth {
                pub const m_bAdrenalineActive: usize = 0x7B0; // bool
                pub const m_iHealthMin: usize = 0x7B4; // int32
                pub const m_iHealthMax: usize = 0x7B8; // int32
            }
            // Parent: C_BaseClientUIEntity
            // Field count: 13
            pub mod C_PointClientUIHUD {
                pub const m_bCheckCSSClasses: usize = 0x1058; // bool
                pub const m_bIgnoreInput: usize = 0x11C8; // bool
                pub const m_flWidth: usize = 0x11CC; // float32
                pub const m_flHeight: usize = 0x11D0; // float32
                pub const m_flDPI: usize = 0x11D4; // float32
                pub const m_flInteractDistance: usize = 0x11D8; // float32
                pub const m_flDepthOffset: usize = 0x11DC; // float32
                pub const m_unOwnerContext: usize = 0x11E0; // uint32
                pub const m_unHorizontalAlign: usize = 0x11E4; // uint32
                pub const m_unVerticalAlign: usize = 0x11E8; // uint32
                pub const m_unOrientation: usize = 0x11EC; // uint32
                pub const m_bAllowInteractionFromAllSceneWorlds: usize = 0x11F0; // bool
                pub const m_vecCSSClasses: usize = 0x11F8; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_GraphHook {
                pub const m_HookName: usize = 0x80; // PulseSymbol_t
            }
            // Parent: None
            // Field count: 0
            pub mod SignatureOutflow_Resume {
            }
            // Parent: None
            // Field count: 0
            pub mod C_InfoLadderDismount {
            }
            // Parent: None
            // Field count: 14
            pub mod C_PointCommentaryNode {
                pub const m_bActive: usize = 0x1208; // bool
                pub const m_bWasActive: usize = 0x1209; // bool
                pub const m_flEndTime: usize = 0x120C; // GameTime_t
                pub const m_flStartTime: usize = 0x1210; // GameTime_t
                pub const m_flStartTimeInCommentary: usize = 0x1214; // float32
                pub const m_iszCommentaryFile: usize = 0x1218; // CUtlSymbolLarge
                pub const m_iszTitle: usize = 0x1220; // CUtlSymbolLarge
                pub const m_iszSpeakers: usize = 0x1228; // CUtlSymbolLarge
                pub const m_iNodeNumber: usize = 0x1230; // int32
                pub const m_iNodeNumberMax: usize = 0x1234; // int32
                pub const m_bListenedTo: usize = 0x1238; // bool
                pub const m_sndCommentary: usize = 0x1240; // CSoundPatch*
                pub const m_hViewPosition: usize = 0x1248; // CHandle<C_BaseEntity>
                pub const m_bRestartAfterRestore: usize = 0x124C; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod CSpriteOriented {
            }
            // Parent: None
            // Field count: 13
            pub mod shard_model_desc_t {
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
            }
            // Parent: None
            // Field count: 2
            pub mod C_KeychainModule {
                pub const m_nKeychainDefID: usize = 0x11F8; // uint32
                pub const m_nKeychainSeed: usize = 0x11FC; // uint32
            }
            // Parent: None
            // Field count: 1
            pub mod CFuncWater {
                pub const m_BuoyancyHelper: usize = 0x1020; // CBuoyancyHelper
            }
            // Parent: None
            // Field count: 0
            pub mod CCSPlayer_GlowServices {
            }
            // Parent: None
            // Field count: 1
            pub mod CCSGameModeRules {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
            }
            // Parent: None
            // Field count: 0
            pub mod C_Flashbang {
            }
            // Parent: C_PointClientUIWorldPanel
            // Field count: 1
            pub mod C_PointClientUIWorldTextPanel {
                pub const m_messageText: usize = 0x1269; // char[512]
            }
            // Parent: None
            // Field count: 3
            pub mod CCSPlayer_WaterServices {
                pub const m_flWaterJumpTime: usize = 0x48; // float32
                pub const m_vecWaterJumpVel: usize = 0x4C; // Vector
                pub const m_flSwimSoundTime: usize = 0x58; // float32
            }
            // Parent: C_CSPlayerPawnBase
            // Field count: 1
            pub mod C_CSObserverPawn {
                pub const m_hDetectParentChange: usize = 0x14EC; // CEntityHandle
            }
            // Parent: None
            // Field count: 3
            pub mod ViewAngleServerChange_t {
                pub const nType: usize = 0x30; // FixAngleSet_t
                pub const qAngle: usize = 0x34; // QAngle
                pub const nIndex: usize = 0x40; // uint32
            }
            // Parent: C_BaseModelEntity
            // Field count: 9
            pub mod C_FuncLadder {
                pub const m_vecLadderDir: usize = 0x1020; // Vector
                pub const m_Dismounts: usize = 0x1030; // CUtlVector<CHandle<C_InfoLadderDismount>>
                pub const m_vecLocalTop: usize = 0x1048; // Vector
                pub const m_vecPlayerMountPositionTop: usize = 0x1054; // VectorWS
                pub const m_vecPlayerMountPositionBottom: usize = 0x1060; // VectorWS
                pub const m_flAutoRideSpeed: usize = 0x106C; // float32
                pub const m_bDisabled: usize = 0x1070; // bool
                pub const m_bFakeLadder: usize = 0x1071; // bool
                pub const m_bHasSlack: usize = 0x1072; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponMP5SD {
            }
            // Parent: None
            // Field count: 0
            pub mod C_World {
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_TeamSelectCounterTerroristPosition {
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponGalilAR {
            }
            // Parent: None
            // Field count: 6
            pub mod CCSPlayerBase_CameraServices {
                pub const m_iFOV: usize = 0x2A0; // uint32
                pub const m_iFOVStart: usize = 0x2A4; // uint32
                pub const m_flFOVTime: usize = 0x2A8; // GameTime_t
                pub const m_flFOVRate: usize = 0x2AC; // float32
                pub const m_hZoomOwner: usize = 0x2B0; // CHandle<C_BaseEntity>
                pub const m_flLastShotFOV: usize = 0x2B4; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod C_TeamplayRules {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_BaseEntrypoint {
                pub const m_EntryChunk: usize = 0x48; // PulseRuntimeChunkIndex_t
                pub const m_RegisterMap: usize = 0x50; // PulseRegisterMap_t
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponSG556 {
            }
            // Parent: C_CSPlayerPawnBase
            // Field count: 105
            pub mod C_CSPlayerPawn {
                pub const m_pBulletServices: usize = 0x14F8; // CCSPlayer_BulletServices*
                pub const m_pHostageServices: usize = 0x1500; // CCSPlayer_HostageServices*
                pub const m_pBuyServices: usize = 0x1508; // CCSPlayer_BuyServices*
                pub const m_pGlowServices: usize = 0x1510; // CCSPlayer_GlowServices*
                pub const m_pActionTrackingServices: usize = 0x1518; // CCSPlayer_ActionTrackingServices*
                pub const m_pAimPunchServices: usize = 0x1520; // CCSPlayer_AimPunchServices*
                pub const m_pDamageReactServices: usize = 0x1528; // CCSPlayer_DamageReactServices*
                pub const m_flHealthShotBoostExpirationTime: usize = 0x1530; // GameTime_t
                pub const m_flLastFiredWeaponTime: usize = 0x1534; // GameTime_t
                pub const m_bHasFemaleVoice: usize = 0x1538; // bool
                pub const m_flLandingTimeSeconds: usize = 0x153C; // float32
                pub const m_flOldFallVelocity: usize = 0x1540; // float32
                pub const m_szLastPlaceName: usize = 0x1544; // char[18]
                pub const m_bPrevDefuser: usize = 0x1556; // bool
                pub const m_bPrevHelmet: usize = 0x1557; // bool
                pub const m_nPrevArmorVal: usize = 0x1558; // int32
                pub const m_nPrevGrenadeAmmoCount: usize = 0x155C; // int32
                pub const m_unPreviousWeaponHash: usize = 0x1560; // uint32
                pub const m_unWeaponHash: usize = 0x1564; // uint32
                pub const m_bInBuyZone: usize = 0x1568; // bool
                pub const m_bPreviouslyInBuyZone: usize = 0x1569; // bool
                pub const m_bInLanding: usize = 0x156A; // bool
                pub const m_flLandingStartTime: usize = 0x156C; // float32
                pub const m_bInHostageRescueZone: usize = 0x1570; // bool
                pub const m_bInBombZone: usize = 0x1571; // bool
                pub const m_bIsBuyMenuOpen: usize = 0x1572; // bool
                pub const m_flTimeOfLastInjury: usize = 0x1574; // GameTime_t
                pub const m_flNextSprayDecalTime: usize = 0x1578; // GameTime_t
                pub const m_iRetakesOffering: usize = 0x16E0; // int32
                pub const m_iRetakesOfferingCard: usize = 0x16E4; // int32
                pub const m_bRetakesHasDefuseKit: usize = 0x16E8; // bool
                pub const m_bRetakesMVPLastRound: usize = 0x16E9; // bool
                pub const m_iRetakesMVPBoostItem: usize = 0x16EC; // int32
                pub const m_RetakesMVPBoostExtraUtility: usize = 0x16F0; // loadout_slot_t
                pub const m_bNeedToReApplyGloves: usize = 0x16F5; // bool
                pub const m_EconGloves: usize = 0x16F8; // C_EconItemView
                pub const m_nEconGlovesChanged: usize = 0x2BB0; // uint8
                pub const m_bMustSyncRagdollState: usize = 0x2BB1; // bool
                pub const m_nRagdollDamageBone: usize = 0x2BB4; // int32
                pub const m_vRagdollDamageForce: usize = 0x2BB8; // Vector
                pub const m_szRagdollDamageWeaponName: usize = 0x2BC4; // char[64]
                pub const m_bRagdollDamageHeadshot: usize = 0x2C04; // bool
                pub const m_vRagdollServerOrigin: usize = 0x2C08; // VectorWS
                pub const m_lastLandTime: usize = 0x2C14; // GameTime_t
                pub const m_bOnGroundLastTick: usize = 0x2C18; // bool
                pub const m_hHudModelArms: usize = 0x2C34; // CHandle<C_CS2HudModelArms>
                pub const m_qDeathEyeAngles: usize = 0x2C38; // QAngle
                pub const m_bLeftHanded: usize = 0x2C44; // bool
                pub const m_fSwitchedHandednessTime: usize = 0x2C48; // GameTime_t
                pub const m_flViewmodelOffsetX: usize = 0x2C4C; // float32
                pub const m_flViewmodelOffsetY: usize = 0x2C50; // float32
                pub const m_flViewmodelOffsetZ: usize = 0x2C54; // float32
                pub const m_flViewmodelFOV: usize = 0x2C58; // float32
                pub const m_vecPlayerPatchEconIndices: usize = 0x2C5C; // uint32[5]
                pub const m_GunGameImmunityColor: usize = 0x2CA0; // Color
                pub const m_vecBulletHitModels: usize = 0x2CF0; // CUtlVector<C_BulletHitModel*>
                pub const m_bIsWalking: usize = 0x2D08; // bool
                pub const m_entitySpottedState: usize = 0x2D10; // EntitySpottedState_t
                pub const m_bIsScoped: usize = 0x2D28; // bool
                pub const m_bResumeZoom: usize = 0x2D29; // bool
                pub const m_bIsDefusing: usize = 0x2D2A; // bool
                pub const m_bIsGrabbingHostage: usize = 0x2D2B; // bool
                pub const m_iBlockingUseActionInProgress: usize = 0x2D2C; // CSPlayerBlockingUseAction_t
                pub const m_flEmitSoundTime: usize = 0x2D30; // GameTime_t
                pub const m_flEmitSoundTime_Client: usize = 0x2D34; // GameTime_t
                pub const m_bInNoDefuseArea: usize = 0x2D38; // bool
                pub const m_nWhichBombZone: usize = 0x2D3C; // int32
                pub const m_iShotsFired: usize = 0x2D40; // int32
                pub const m_flFlinchStack: usize = 0x2D44; // float32
                pub const m_flVelocityModifier: usize = 0x2D48; // float32
                pub const m_bWaitForNoAttack: usize = 0x2D4C; // bool
                pub const m_ignoreLadderJumpTime: usize = 0x2D50; // float32
                pub const m_bKilledByHeadshot: usize = 0x2D55; // bool
                pub const m_ArmorValue: usize = 0x2D58; // int32
                pub const m_unCurrentEquipmentValue: usize = 0x2D5C; // uint16
                pub const m_unRoundStartEquipmentValue: usize = 0x2D5E; // uint16
                pub const m_unFreezetimeEndEquipmentValue: usize = 0x2D60; // uint16
                pub const m_nLastKillerIndex: usize = 0x2D64; // CEntityIndex
                pub const m_bOldIsScoped: usize = 0x2D68; // bool
                pub const m_bHasDeathInfo: usize = 0x2D69; // bool
                pub const m_flDeathInfoTime: usize = 0x2D6C; // float32
                pub const m_vecDeathInfoOrigin: usize = 0x2D70; // VectorWS
                pub const m_grenadeParameterStashTime: usize = 0x2DA8; // GameTime_t
                pub const m_bGrenadeParametersStashed: usize = 0x2DAC; // bool
                pub const m_angStashedShootAngles: usize = 0x2DB0; // QAngle
                pub const m_vecStashedGrenadeThrowPosition: usize = 0x2DBC; // VectorWS
                pub const m_vecStashedGrenadeThrowPawnCenter: usize = 0x2DC8; // VectorWS
                pub const m_vecStashedVelocity: usize = 0x2DD4; // Vector
                pub const m_flInterpolatedInaccuracy: usize = 0x2DE0; // float32
                pub const m_bShouldAutobuyDMWeapons: usize = 0x4390; // bool
                pub const m_fImmuneToGunGameDamageTime: usize = 0x4394; // GameTime_t
                pub const m_bGunGameImmunity: usize = 0x4398; // bool
                pub const m_fImmuneToGunGameDamageTimeLast: usize = 0x439C; // GameTime_t
                pub const m_flModifier0: usize = 0x43A0; // float32
                pub const m_fMolotovDamageTime: usize = 0x43A4; // float32
                pub const m_nPlayerInfernoBodyFx: usize = 0x4410; // ParticleIndex_t
                pub const m_angEyeAngles: usize = 0x4490; // QAngle
                pub const m_arrOldEyeAnglesTimes: usize = 0x4528; // GameTime_t[4]
                pub const m_arrOldEyeAngles: usize = 0x4538; // QAngle[4]
                pub const m_angEyeAnglesVelocity: usize = 0x4568; // QAngle
                pub const m_iIDEntIndex: usize = 0x4574; // CEntityIndex
                pub const m_delayTargetIDTimer: usize = 0x4578; // CountdownTimer
                pub const m_iTargetItemEntIdx: usize = 0x4590; // CEntityIndex
                pub const m_iOldIDEntIndex: usize = 0x4594; // CEntityIndex
                pub const m_holdTargetIDTimer: usize = 0x4598; // CountdownTimer
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_TeamIntroTerroristPosition {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorCanvasItemSpecKV3
            pub mod CPulseCell_WaitForCursorsWithTagBase {
                pub const m_nCursorsAllowedToWait: usize = 0xD8; // int32
                pub const m_WaitComplete: usize = 0xE0; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 23
            pub mod C_Hostage {
                pub const m_entitySpottedState: usize = 0x1278; // EntitySpottedState_t
                pub const m_leader: usize = 0x1290; // CHandle<C_BaseEntity>
                pub const m_reuseTimer: usize = 0x1298; // CountdownTimer
                pub const m_vel: usize = 0x12B0; // Vector
                pub const m_isRescued: usize = 0x12BC; // bool
                pub const m_jumpedThisFrame: usize = 0x12BD; // bool
                pub const m_nHostageState: usize = 0x12C0; // int32
                pub const m_bHandsHaveBeenCut: usize = 0x12C4; // bool
                pub const m_hHostageGrabber: usize = 0x12C8; // CHandle<C_CSPlayerPawn>
                pub const m_fLastGrabTime: usize = 0x12CC; // GameTime_t
                pub const m_vecGrabbedPos: usize = 0x12D0; // VectorWS
                pub const m_flRescueStartTime: usize = 0x12DC; // GameTime_t
                pub const m_flGrabSuccessTime: usize = 0x12E0; // GameTime_t
                pub const m_flDropStartTime: usize = 0x12E4; // GameTime_t
                pub const m_flDeadOrRescuedTime: usize = 0x12E8; // GameTime_t
                pub const m_blinkTimer: usize = 0x12F0; // CountdownTimer
                pub const m_lookAt: usize = 0x1308; // VectorWS
                pub const m_lookAroundTimer: usize = 0x1318; // CountdownTimer
                pub const m_isInit: usize = 0x1330; // bool
                pub const m_eyeAttachment: usize = 0x1331; // AttachmentHandle_t
                pub const m_chestAttachment: usize = 0x1332; // AttachmentHandle_t
                pub const m_pPredictionOwner: usize = 0x1338; // CBasePlayerController*
                pub const m_fNewestAlphaThinkTime: usize = 0x1340; // GameTime_t
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_fogplayerparams_t {
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
            }
            // Parent: None
            // Field count: 34
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CGameSceneNode {
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
                pub const m_hierarchyAttachName: usize = 0x128; // CUtlStringToken
                pub const m_flClientLocalScale: usize = 0x12C; // float32
            }
            // Parent: None
            // Field count: 6
            pub mod CPlayer_ObserverServices {
                pub const m_iObserverMode: usize = 0x48; // uint8
                pub const m_hObserverTarget: usize = 0x4C; // CHandle<C_BaseEntity>
                pub const m_iObserverLastMode: usize = 0x50; // ObserverMode_t
                pub const m_bForcedObserverMode: usize = 0x54; // bool
                pub const m_flObserverChaseDistance: usize = 0x58; // float32
                pub const m_flObserverChaseDistanceCalcTime: usize = 0x5C; // GameTime_t
            }
            // Parent: None
            // Field count: 1
            pub mod CCashStack {
                pub const m_nCashStackValue: usize = 0x1020; // int32
            }
            // Parent: C_BaseEntity
            // Field count: 4
            pub mod C_SoundAreaEntityBase {
                pub const m_bDisabled: usize = 0x77C; // bool
                pub const m_bWasEnabled: usize = 0x784; // bool
                pub const m_iszSoundAreaType: usize = 0x788; // CUtlSymbolLarge
                pub const m_vPos: usize = 0x790; // Vector
            }
            // Parent: C_BaseEntity
            // Field count: 6
            pub mod C_PlayerVisibility {
                pub const m_flVisibilityStrength: usize = 0x77C; // float32
                pub const m_flFogDistanceMultiplier: usize = 0x780; // float32
                pub const m_flFogMaxDensityMultiplier: usize = 0x784; // float32
                pub const m_flFadeTime: usize = 0x788; // float32
                pub const m_bStartDisabled: usize = 0x78C; // bool
                pub const m_bIsEnabled: usize = 0x78D; // bool
            }
            // Parent: None
            // Field count: 3
            pub mod CAttributeManager__cached_attribute_float_t {
                pub const flIn: usize = 0x0; // float32
                pub const iAttribHook: usize = 0x8; // CUtlSymbolLarge
                pub const flOut: usize = 0x10; // float32
            }
            // Parent: CBaseAnimGraph
            // Field count: 7
            pub mod C_BasePlayerWeapon {
                pub const m_nNextPrimaryAttackTick: usize = 0x27A8; // GameTick_t
                pub const m_flNextPrimaryAttackTickRatio: usize = 0x27AC; // float32
                pub const m_nNextSecondaryAttackTick: usize = 0x27B0; // GameTick_t
                pub const m_flNextSecondaryAttackTickRatio: usize = 0x27B4; // float32
                pub const m_iClip1: usize = 0x27B8; // int32
                pub const m_iClip2: usize = 0x27BC; // int32
                pub const m_pReserveAmmo: usize = 0x27C0; // int32[2]
            }
            // Parent: C_BaseEntity
            // Field count: 1
            pub mod CRagdollManager {
                pub const m_iCurrentMaxRagdollCount: usize = 0x77C; // int8
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            pub mod CSoundOpvarSetBoxEntity {
            }
            // Parent: None
            // Field count: 0
            pub mod C_HEGrenade {
            }
            // Parent: C_BaseModelEntity
            // Field count: 12
            pub mod C_EnvSky {
                pub const m_hSkyMaterial: usize = 0x1020; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_hSkyMaterialLightingOnly: usize = 0x1028; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_bStartDisabled: usize = 0x1030; // bool
                pub const m_vTintColor: usize = 0x1034; // Color
                pub const m_vTintColorLightingOnly: usize = 0x1038; // Color
                pub const m_flBrightnessScale: usize = 0x103C; // float32
                pub const m_nFogType: usize = 0x1040; // int32
                pub const m_flFogMinStart: usize = 0x1044; // float32
                pub const m_flFogMinEnd: usize = 0x1048; // float32
                pub const m_flFogMaxStart: usize = 0x104C; // float32
                pub const m_flFogMaxEnd: usize = 0x1050; // float32
                pub const m_bEnabled: usize = 0x1054; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_InvokeBinding {
                pub const m_RegisterMap: usize = 0x0; // PulseRegisterMap_t
                pub const m_FuncName: usize = 0x30; // PulseSymbol_t
                pub const m_nCellIndex: usize = 0x40; // PulseRuntimeCellIndex_t
                pub const m_nSrcChunk: usize = 0x44; // PulseRuntimeChunkIndex_t
                pub const m_nSrcInstruction: usize = 0x48; // int32
            }
            // Parent: None
            // Field count: 4
            pub mod C_GameRules {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
                pub const m_nTotalPausedTicks: usize = 0x30; // int32
                pub const m_nPauseStartTick: usize = 0x34; // int32
                pub const m_bGamePaused: usize = 0x38; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponMAC10 {
            }
            // Parent: C_BaseEntity
            // Field count: 14
            pub mod C_CSGO_MapPreviewCameraPath {
                pub const m_flZFar: usize = 0x77C; // float32
                pub const m_flZNear: usize = 0x780; // float32
                pub const m_bLoop: usize = 0x784; // bool
                pub const m_bVerticalFOV: usize = 0x785; // bool
                pub const m_bConstantSpeed: usize = 0x786; // bool
                pub const m_flDuration: usize = 0x788; // float32
                pub const m_flPathLength: usize = 0x7D0; // float32
                pub const m_flPathDuration: usize = 0x7D4; // float32
                pub const m_bDofEnabled: usize = 0x7EC; // bool
                pub const m_flDofNearBlurry: usize = 0x7F0; // float32
                pub const m_flDofNearCrisp: usize = 0x7F4; // float32
                pub const m_flDofFarCrisp: usize = 0x7F8; // float32
                pub const m_flDofFarBlurry: usize = 0x7FC; // float32
                pub const m_flDofTiltToGround: usize = 0x800; // float32
            }
            // Parent: C_BaseModelEntity
            // Field count: 19
            pub mod C_PointWorldText {
                pub const m_bForceRecreateNextUpdate: usize = 0x1028; // bool
                pub const m_nTextWidthPx: usize = 0x1040; // int32
                pub const m_nTextHeightPx: usize = 0x1044; // int32
                pub const m_messageText: usize = 0x1048; // char[512]
                pub const m_FontName: usize = 0x1248; // char[64]
                pub const m_BackgroundMaterialName: usize = 0x1288; // char[64]
                pub const m_bEnabled: usize = 0x12C8; // bool
                pub const m_bFullbright: usize = 0x12C9; // bool
                pub const m_flWorldUnitsPerPx: usize = 0x12CC; // float32
                pub const m_flFontSize: usize = 0x12D0; // float32
                pub const m_flDepthOffset: usize = 0x12D4; // float32
                pub const m_bDrawBackground: usize = 0x12D8; // bool
                pub const m_flBackgroundBorderWidth: usize = 0x12DC; // float32
                pub const m_flBackgroundBorderHeight: usize = 0x12E0; // float32
                pub const m_flBackgroundWorldToUV: usize = 0x12E4; // float32
                pub const m_Color: usize = 0x12E8; // Color
                pub const m_nJustifyHorizontal: usize = 0x12EC; // PointWorldTextJustifyHorizontal_t
                pub const m_nJustifyVertical: usize = 0x12F0; // PointWorldTextJustifyVertical_t
                pub const m_nReorientMode: usize = 0x12F4; // PointWorldTextReorientMode_t
            }
            // Parent: None
            // Field count: 40
            pub mod C_RopeKeyframe {
                pub const m_LinksTouchingSomething: usize = 0x1028; // CBitVec<10>
                pub const m_nLinksTouchingSomething: usize = 0x102C; // int32
                pub const m_bApplyWind: usize = 0x1030; // bool
                pub const m_fPrevLockedPoints: usize = 0x1034; // int32
                pub const m_iForcePointMoveCounter: usize = 0x1038; // int32
                pub const m_bPrevEndPointPos: usize = 0x103C; // bool[2]
                pub const m_vPrevEndPointPos: usize = 0x1040; // VectorWS[2]
                pub const m_flCurScroll: usize = 0x1058; // float32
                pub const m_flScrollSpeed: usize = 0x105C; // float32
                pub const m_RopeFlags: usize = 0x1060; // uint16
                pub const m_iRopeMaterialModelIndex: usize = 0x1068; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_nSegments: usize = 0x12E0; // uint8
                pub const m_hStartPoint: usize = 0x12E4; // CHandle<C_BaseEntity>
                pub const m_hEndPoint: usize = 0x12E8; // CHandle<C_BaseEntity>
                pub const m_iStartAttachment: usize = 0x12EC; // AttachmentHandle_t
                pub const m_iEndAttachment: usize = 0x12ED; // AttachmentHandle_t
                pub const m_Subdiv: usize = 0x12EE; // uint8
                pub const m_RopeLength: usize = 0x12F0; // int16
                pub const m_Slack: usize = 0x12F2; // int16
                pub const m_TextureScale: usize = 0x12F4; // float32
                pub const m_fLockedPoints: usize = 0x12F8; // uint8
                pub const m_nChangeCount: usize = 0x12F9; // uint8
                pub const m_Width: usize = 0x12FC; // float32
                pub const m_PhysicsDelegate: usize = 0x1300; // C_RopeKeyframe::CPhysicsDelegate
                pub const m_hMaterial: usize = 0x1310; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_TextureHeight: usize = 0x1318; // int32
                pub const m_vecImpulse: usize = 0x131C; // Vector
                pub const m_vecPreviousImpulse: usize = 0x1328; // Vector
                pub const m_flCurrentGustTimer: usize = 0x1334; // float32
                pub const m_flCurrentGustLifetime: usize = 0x1338; // float32
                pub const m_flTimeToNextGust: usize = 0x133C; // float32
                pub const m_vWindDir: usize = 0x1340; // Vector
                pub const m_vColorMod: usize = 0x134C; // Vector
                pub const m_vCachedEndPointAttachmentPos: usize = 0x1358; // VectorWS[2]
                pub const m_vCachedEndPointAttachmentAngle: usize = 0x1370; // QAngle[2]
                pub const m_bConstrainBetweenEndpoints: usize = 0x1388; // bool
                pub const m_bEndPointAttachmentPositionsDirty: usize = 0x0; // bitfield:1
                pub const m_bEndPointAttachmentAnglesDirty: usize = 0x0; // bitfield:1
                pub const m_bNewDataThisFrame: usize = 0x0; // bitfield:1
                pub const m_bPhysicsInitted: usize = 0x0; // bitfield:1
            }
            // Parent: None
            // Field count: 0
            pub mod C_BaseToggle {
            }
            // Parent: None
            // Field count: 0
            pub mod C_EnvCubemapBox {
            }
            // Parent: None
            // Field count: 0
            pub mod C_EnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume {
            }
            // Parent: None
            // Field count: 1
            pub mod C_RopeKeyframe__CPhysicsDelegate {
                pub const m_pKeyframe: usize = 0x8; // C_RopeKeyframe*
            }
            // Parent: C_PointEntity
            // Field count: 5
            pub mod CInfoDynamicShadowHint {
                pub const m_bDisabled: usize = 0x77C; // bool
                pub const m_flRange: usize = 0x780; // float32
                pub const m_nImportance: usize = 0x784; // int32
                pub const m_nLightChoice: usize = 0x788; // int32
                pub const m_hLight: usize = 0x78C; // CHandle<C_BaseEntity>
            }
            // Parent: C_PointEntity
            // Field count: 6
            pub mod CPathNode {
                pub const m_vInTangentLocal: usize = 0x77C; // Vector
                pub const m_vOutTangentLocal: usize = 0x788; // Vector
                pub const m_strParentPathUniqueID: usize = 0x798; // CUtlString
                pub const m_strPathNodeParameter: usize = 0x7A0; // CUtlString
                pub const m_xWSPrevParent: usize = 0x7B0; // CTransformWS
                pub const m_hPath: usize = 0x7D0; // CHandle<CPathWithDynamicNodes>
            }
            // Parent: None
            // Field count: 0
            pub mod C_FuncMoveLinear {
            }
            // Parent: C_BaseEntity
            // Field count: 6
            pub mod C_EnvShakeVolume {
                pub const m_vBoxMins: usize = 0x798; // Vector
                pub const m_vBoxMaxs: usize = 0x7A4; // Vector
                pub const m_flAmplitude: usize = 0x7B0; // float32
                pub const m_flFrequency: usize = 0x7B4; // float32
                pub const m_flFalloffDistance: usize = 0x7B8; // float32
                pub const m_flRollScale: usize = 0x7BC; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CServerOnlyModelEntity {
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_TeamSelectCamera {
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
            pub mod CPulseCell_IntervalTimer {
                pub const m_Completed: usize = 0xD8; // CPulse_ResumePoint
                pub const m_OnInterval: usize = 0x120; // SignatureOutflow_Continue
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponXM1014 {
            }
            // Parent: None
            // Field count: 0
            pub mod C_WorldModelGloves {
            }
            // Parent: None
            // Field count: 0
            pub mod C_PhysicsPropMultiplayer {
            }
            // Parent: C_SoundEventEntity
            // Field count: 2
            pub mod C_SoundEventOBBEntity {
                pub const m_vMins: usize = 0x838; // Vector
                pub const m_vMaxs: usize = 0x844; // Vector
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseLerp {
                pub const m_WakeResume: usize = 0xD8; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponAug {
            }
            // Parent: None
            // Field count: 8
            pub mod C_BasePropDoor {
                pub const m_eDoorState: usize = 0x142C; // DoorState_t
                pub const m_modelChanged: usize = 0x1430; // bool
                pub const m_bLocked: usize = 0x1431; // bool
                pub const m_bNoNPCs: usize = 0x1432; // bool
                pub const m_closedPosition: usize = 0x1434; // VectorWS
                pub const m_closedAngles: usize = 0x1440; // QAngle
                pub const m_hMaster: usize = 0x144C; // CHandle<C_BasePropDoor>
                pub const m_vWhereToSetLightingOrigin: usize = 0x1450; // VectorWS
            }
            // Parent: None
            // Field count: 0
            pub mod CChoreoInfoTarget {
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNetworkedSequenceOperation {
                pub const m_hSequence: usize = 0x8; // HSequence
                pub const m_flPrevCycle: usize = 0xC; // float32
                pub const m_flCycle: usize = 0x10; // float32
                pub const m_flWeight: usize = 0x14; // CNetworkedQuantizedFloat
                pub const m_bSequenceChangeNetworked: usize = 0x1C; // bool
                pub const m_bDiscontinuity: usize = 0x1D; // bool
                pub const m_flPrevCycleFromDiscontinuity: usize = 0x20; // float32
                pub const m_flPrevCycleForAnimEventDetection: usize = 0x24; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod C_Item_Healthshot {
            }
            // Parent: C_BaseEntity
            // Field count: 7
            pub mod CCSCustomHudLayout {
                pub const m_strLayout: usize = 0x798; // CUtlSymbolLarge
                pub const m_bObservable: usize = 0x7A0; // bool
                pub const m_vecPlayerLayoutStates: usize = 0x7A8; // C_UtlVectorEmbeddedNetworkVar<CCSCustomHudLayoutState>
                pub const m_globalLayoutState: usize = 0x810; // CCSCustomHudLayoutState
                pub const m_vecPanelIds: usize = 0x918; // C_NetworkUtlVectorBase<CUtlString>
                pub const m_vecClassNames: usize = 0x930; // C_NetworkUtlVectorBase<CUtlString>
                pub const m_vecDialogVariableNames: usize = 0x948; // C_NetworkUtlVectorBase<CUtlString>
            }
            // Parent: None
            // Field count: 3
            pub mod CEntityInstance {
                pub const m_iszPrivateVScripts: usize = 0x8; // CUtlSymbolLarge
                pub const m_pEntity: usize = 0x10; // CEntityIdentity*
                pub const m_CScriptComponent: usize = 0x28; // CScriptComponent*
            }
            // Parent: C_BaseEntity
            // Field count: 47
            pub mod C_BaseModelEntity {
                pub const m_CRenderComponent: usize = 0xA78; // CRenderComponent*
                pub const m_CHitboxComponent: usize = 0xA80; // CHitboxComponent
                pub const m_pChoreoComponent: usize = 0xA98; // CChoreoComponent*
                pub const m_nDestructiblePartInitialStateDestructed0: usize = 0xAA0; // HitGroup_t
                pub const m_nDestructiblePartInitialStateDestructed1: usize = 0xAA4; // HitGroup_t
                pub const m_nDestructiblePartInitialStateDestructed2: usize = 0xAA8; // HitGroup_t
                pub const m_nDestructiblePartInitialStateDestructed3: usize = 0xAAC; // HitGroup_t
                pub const m_nDestructiblePartInitialStateDestructed4: usize = 0xAB0; // HitGroup_t
                pub const m_nDestructiblePartInitialStateDestructed0_PartIndex: usize = 0xAB4; // int32
                pub const m_nDestructiblePartInitialStateDestructed1_PartIndex: usize = 0xAB8; // int32
                pub const m_nDestructiblePartInitialStateDestructed2_PartIndex: usize = 0xABC; // int32
                pub const m_nDestructiblePartInitialStateDestructed3_PartIndex: usize = 0xAC0; // int32
                pub const m_nDestructiblePartInitialStateDestructed4_PartIndex: usize = 0xAC4; // int32
                pub const m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces: usize = 0xAC8; // bool
                pub const m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces: usize = 0xAC9; // bool
                pub const m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces: usize = 0xACA; // bool
                pub const m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces: usize = 0xACB; // bool
                pub const m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces: usize = 0xACC; // bool
                pub const m_pDestructiblePartsSystemComponent: usize = 0xAD0; // CDestructiblePartsComponent*
                pub const m_bInitModelEffects: usize = 0xBF8; // bool
                pub const m_bDoingModelEffects: usize = 0xBF9; // bool
                pub const m_iOldHealth: usize = 0xBFC; // int32
                pub const m_nRenderMode: usize = 0xC00; // RenderMode_t
                pub const m_nRenderFX: usize = 0xC01; // RenderFx_t
                pub const m_bAllowFadeInView: usize = 0xC02; // bool
                pub const m_clrRender: usize = 0xC20; // Color
                pub const m_vecRenderAttributes: usize = 0xC28; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
                pub const m_bRenderToCubemaps: usize = 0xCA8; // bool
                pub const m_bExpandRenderBoundsToIncludeCloth: usize = 0xCA9; // bool
                pub const m_bNoInterpolate: usize = 0xCAA; // bool
                pub const m_Collision: usize = 0xCB0; // CCollisionProperty
                pub const m_Glow: usize = 0xD68; // CGlowProperty
                pub const m_flGlowBackfaceMult: usize = 0xDC0; // float32
                pub const m_fadeMinDist: usize = 0xDC4; // float32
                pub const m_fadeMaxDist: usize = 0xDC8; // float32
                pub const m_flFadeScale: usize = 0xDCC; // float32
                pub const m_flShadowStrength: usize = 0xDD0; // float32
                pub const m_nObjectCulling: usize = 0xDD4; // uint8
                pub const m_nRequiredDecalRtEncoding: usize = 0xDD5; // DecalRtEncoding_t
                pub const m_bodyGroupTotalRequestCount: usize = 0xDD8; // uint32
                pub const m_bodyGroupRequests: usize = 0xDE0; // CUtlVectorFixedGrowable<C_BaseModelEntity::BodyGroupRequest_t,8>
                pub const m_bodyGroupChoices: usize = 0xEB8; // CUtlOrderedMap<CGlobalSymbol,int32>
                pub const m_vecViewOffset: usize = 0xEE0; // CNetworkViewOffsetVector
                pub const m_pClientAlphaProperty: usize = 0xFC8; // CClientAlphaProperty*
                pub const m_ClientOverrideTint: usize = 0xFD0; // Color
                pub const m_bUseClientOverrideTint: usize = 0xFD4; // bool
                pub const m_bvDisabledHitGroups: usize = 0x1010; // uint32[1]
            }
            // Parent: None
            // Field count: 1
            pub mod CCSPlayer_BulletServices {
                pub const m_totalHitsOnServer: usize = 0x48; // int32
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            pub mod C_SoundOpvarSetAutoRoomEntity {
            }
            // Parent: C_BaseEntity
            // Field count: 27
            pub mod C_EnvCombinedLightProbeVolume {
                pub const m_Entity_Color: usize = 0x898; // Color
                pub const m_Entity_flBrightness: usize = 0x89C; // float32
                pub const m_Entity_hCubemapTexture: usize = 0x8A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_bCustomCubemapTexture: usize = 0x8A8; // bool
                pub const m_Entity_hLightProbeTexture_AmbientCube: usize = 0x8B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SDF: usize = 0x8B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_DC: usize = 0x8C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_L1: usize = 0x8C8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightIndicesTexture: usize = 0x8D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightScalarsTexture: usize = 0x8D8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightShadowsTexture: usize = 0x8E0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_vBoxMins: usize = 0x8E8; // Vector
                pub const m_Entity_vBoxMaxs: usize = 0x8F4; // Vector
                pub const m_Entity_bMoveable: usize = 0x900; // bool
                pub const m_Entity_nHandshake: usize = 0x904; // int32
                pub const m_Entity_nEnvCubeMapArrayIndex: usize = 0x908; // int32
                pub const m_Entity_nPriority: usize = 0x90C; // int32
                pub const m_Entity_bStartDisabled: usize = 0x910; // bool
                pub const m_Entity_flEdgeFadeDist: usize = 0x914; // float32
                pub const m_Entity_vEdgeFadeDists: usize = 0x918; // Vector
                pub const m_Entity_nLightProbeSizeX: usize = 0x924; // int32
                pub const m_Entity_nLightProbeSizeY: usize = 0x928; // int32
                pub const m_Entity_nLightProbeSizeZ: usize = 0x92C; // int32
                pub const m_Entity_nLightProbeAtlasX: usize = 0x930; // int32
                pub const m_Entity_nLightProbeAtlasY: usize = 0x934; // int32
                pub const m_Entity_nLightProbeAtlasZ: usize = 0x938; // int32
                pub const m_Entity_bEnabled: usize = 0x951; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod CCSGO_EndOfMatchLineupEnd {
            }
            // Parent: None
            // Field count: 0
            pub mod C_MultiplayRules {
            }
            // Parent: None
            // Field count: 0
            pub mod CPlayer_AutoaimServices {
            }
            // Parent: None
            // Field count: 0
            pub mod C_LightDirectionalEntity {
            }
            // Parent: None
            // Field count: 82
            pub mod C_BaseEntity {
                pub const m_CBodyComponent: usize = 0x30; // CBodyComponent*
                pub const m_NetworkTransmitComponent: usize = 0x38; // CNetworkTransmitComponent
                pub const m_nLastThinkTick: usize = 0x498; // GameTick_t
                pub const m_pGameSceneNode: usize = 0x4A0; // CGameSceneNode*
                pub const m_pRenderComponent: usize = 0x4A8; // CRenderComponent*
                pub const m_pCollision: usize = 0x4B0; // CCollisionProperty*
                pub const m_iMaxHealth: usize = 0x4B8; // int32
                pub const m_iHealth: usize = 0x4BC; // int32
                pub const m_flDamageAccumulator: usize = 0x4C0; // float32
                pub const m_lifeState: usize = 0x4C4; // uint8
                pub const m_bTakesDamage: usize = 0x4C5; // bool
                pub const m_nTakeDamageFlags: usize = 0x4C8; // TakeDamageFlags_t
                pub const m_nPlatformType: usize = 0x4D0; // EntityPlatformTypes_t
                pub const m_ubInterpolationFrame: usize = 0x4D1; // uint8
                pub const m_hSceneObjectController: usize = 0x4D4; // CHandle<C_BaseEntity>
                pub const m_nNoInterpolationTick: usize = 0x4D8; // int32
                pub const m_nVisibilityNoInterpolationTick: usize = 0x4DC; // int32
                pub const m_flProxyRandomValue: usize = 0x4E0; // float32
                pub const m_iEFlags: usize = 0x4E4; // int32
                pub const m_nWaterType: usize = 0x4E8; // uint8
                pub const m_bInterpolateEvenWithNoModel: usize = 0x4E9; // bool
                pub const m_bPredictionEligible: usize = 0x4EA; // bool
                pub const m_bApplyLayerMatchIDToModel: usize = 0x4EB; // bool
                pub const m_tokLayerMatchID: usize = 0x4EC; // CUtlStringToken
                pub const m_nSubclassID: usize = 0x4F0; // CUtlStringToken
                pub const m_nSimulationTick: usize = 0x500; // int32
                pub const m_iCurrentThinkContext: usize = 0x504; // int32
                pub const m_aThinkFunctions: usize = 0x508; // CUtlVector<thinkfunc_t>
                pub const m_bDisabledContextThinks: usize = 0x520; // bool
                pub const m_flAnimTime: usize = 0x524; // float32
                pub const m_flSimulationTime: usize = 0x528; // float32
                pub const m_nSceneObjectOverrideFlags: usize = 0x52C; // uint8
                pub const m_bHasSuccessfullyInterpolated: usize = 0x52D; // bool
                pub const m_bHasAddedVarsToInterpolation: usize = 0x52E; // bool
                pub const m_bRenderEvenWhenNotSuccessfullyInterpolated: usize = 0x52F; // bool
                pub const m_nInterpolationLatchDirtyFlags: usize = 0x530; // int32[2]
                pub const m_ListEntry: usize = 0x538; // uint16[11]
                pub const m_flCreateTime: usize = 0x550; // GameTime_t
                pub const m_EntClientFlags: usize = 0x554; // uint16
                pub const m_bClientSideRagdoll: usize = 0x556; // bool
                pub const m_iTeamNum: usize = 0x557; // uint8
                pub const m_spawnflags: usize = 0x558; // uint32
                pub const m_nNextThinkTick: usize = 0x55C; // GameTick_t
                pub const m_fFlags: usize = 0x564; // uint32
                pub const m_vecAbsVelocity: usize = 0x568; // Vector
                pub const m_vecServerVelocity: usize = 0x574; // CNetworkVelocityVector
                pub const m_vecVelocity: usize = 0x5A0; // CNetworkVelocityVector
                pub const m_vecBaseVelocity: usize = 0x688; // Vector
                pub const m_hEffectEntity: usize = 0x694; // CHandle<C_BaseEntity>
                pub const m_hOwnerEntity: usize = 0x698; // CHandle<C_BaseEntity>
                pub const m_MoveCollide: usize = 0x69C; // MoveCollide_t
                pub const m_MoveType: usize = 0x69D; // MoveType_t
                pub const m_nActualMoveType: usize = 0x69E; // MoveType_t
                pub const m_flWaterLevel: usize = 0x6A0; // float32
                pub const m_fEffects: usize = 0x6A4; // uint32
                pub const m_hGroundEntity: usize = 0x6A8; // CHandle<C_BaseEntity>
                pub const m_nGroundBodyIndex: usize = 0x6AC; // int32
                pub const m_flFriction: usize = 0x6B0; // float32
                pub const m_flElasticity: usize = 0x6B4; // float32
                pub const m_flGravityScale: usize = 0x6B8; // float32
                pub const m_flTimeScale: usize = 0x6BC; // float32
                pub const m_bAnimatedEveryTick: usize = 0x6C0; // bool
                pub const m_bGravityDisabled: usize = 0x6C1; // bool
                pub const m_flNavIgnoreUntilTime: usize = 0x6C4; // GameTime_t
                pub const m_hThink: usize = 0x6C8; // uint16
                pub const m_fBBoxVisFlags: usize = 0x6D8; // uint8
                pub const m_flActualGravityScale: usize = 0x6DC; // float32
                pub const m_bGravityActuallyDisabled: usize = 0x6E0; // bool
                pub const m_bPredictable: usize = 0x6E1; // bool
                pub const m_bRenderWithViewModels: usize = 0x6E2; // bool
                pub const m_nFirstPredictableCommand: usize = 0x6E4; // int32
                pub const m_nLastPredictableCommand: usize = 0x6E8; // int32
                pub const m_hOldMoveParent: usize = 0x6EC; // CHandle<C_BaseEntity>
                pub const m_Particles: usize = 0x6F0; // CParticleProperty
                pub const m_vecAngVelocity: usize = 0x720; // QAngle
                pub const m_DataChangeEventRef: usize = 0x72C; // int32
                pub const m_dependencies: usize = 0x730; // CUtlVector<CEntityHandle>
                pub const m_nCreationTick: usize = 0x748; // int32
                pub const m_bAnimTimeChanged: usize = 0x761; // bool
                pub const m_bSimulationTimeChanged: usize = 0x762; // bool
                pub const m_sUniqueHammerID: usize = 0x770; // CUtlString
                pub const m_nBloodType: usize = 0x778; // BloodType
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ActiveModelConfig_t {
                pub const m_Handle: usize = 0x30; // ModelConfigHandle_t
                pub const m_Name: usize = 0x38; // CUtlSymbolLarge
                pub const m_AssociatedEntities: usize = 0x40; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                pub const m_AssociatedEntityNames: usize = 0x58; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponSSG08 {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CPulseCell_Value_Curve {
                pub const m_Curve: usize = 0x48; // CPiecewiseCurve
            }
            // Parent: None
            // Field count: 7
            pub mod C_Chicken {
                pub const m_leader: usize = 0x1430; // CHandle<C_CSPlayerPawn>
                pub const m_owner: usize = 0x1434; // CHandle<CCSPlayerController>
                pub const m_AttributeManager: usize = 0x1438; // C_AttributeContainer
                pub const m_bAttributesInitialized: usize = 0x2950; // bool
                pub const m_hWaterWakeParticles: usize = 0x2954; // ParticleIndex_t
                pub const m_bIsPreviewModel: usize = 0x2958; // bool
                pub const m_bSpawnDyingParticles: usize = 0x29E0; // bool
            }
            // Parent: CBaseAnimGraph
            // Field count: 28
            pub mod C_BasePlayerPawn {
                pub const m_pWeaponServices: usize = 0x1278; // CPlayer_WeaponServices*
                pub const m_pItemServices: usize = 0x1280; // CPlayer_ItemServices*
                pub const m_pAutoaimServices: usize = 0x1288; // CPlayer_AutoaimServices*
                pub const m_pObserverServices: usize = 0x1290; // CPlayer_ObserverServices*
                pub const m_pWaterServices: usize = 0x1298; // CPlayer_WaterServices*
                pub const m_pUseServices: usize = 0x12A0; // CPlayer_UseServices*
                pub const m_pFlashlightServices: usize = 0x12A8; // CPlayer_FlashlightServices*
                pub const m_pCameraServices: usize = 0x12B0; // CPlayer_CameraServices*
                pub const m_pMovementServices: usize = 0x12B8; // CPlayer_MovementServices*
                pub const m_ServerViewAngleChanges: usize = 0x12C8; // C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
                pub const v_angle: usize = 0x1330; // QAngle
                pub const v_anglePrevious: usize = 0x133C; // QAngle
                pub const m_iHideHUD: usize = 0x1348; // uint32
                pub const m_skybox3d: usize = 0x1350; // sky3dparams_t
                pub const m_flDeathTime: usize = 0x13E0; // GameTime_t
                pub const m_vecPredictionError: usize = 0x13E8; // Vector
                pub const m_flPredictionErrorTime: usize = 0x13F4; // GameTime_t
                pub const m_vecLastCameraSetupLocalOrigin: usize = 0x1414; // Vector
                pub const m_flLastCameraSetupTime: usize = 0x1420; // GameTime_t
                pub const m_flFOVSensitivityAdjust: usize = 0x1424; // float32
                pub const m_flMouseSensitivity: usize = 0x1428; // float32
                pub const m_vOldOrigin: usize = 0x142C; // Vector
                pub const m_flOldSimulationTime: usize = 0x1438; // float32
                pub const m_nLastExecutedCommandNumber: usize = 0x143C; // int32
                pub const m_nLastExecutedCommandTick: usize = 0x1440; // int32
                pub const m_hController: usize = 0x1444; // CHandle<CBasePlayerController>
                pub const m_hDefaultController: usize = 0x1448; // CHandle<CBasePlayerController>
                pub const m_bIsSwappingToPredictableController: usize = 0x144C; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod C_SoundOpvarSetAABBEntity {
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponBizon {
            }
            // Parent: None
            // Field count: 1
            pub mod C_StattrakModule {
                pub const m_bKnife: usize = 0x11F8; // bool
            }
            // Parent: None
            // Field count: 1
            pub mod CCSObserver_CameraServices {
                pub const m_hPrevPostProcessingVolume: usize = 0x2B8; // CHandle<C_PostProcessingVolume>
            }
            // Parent: CEnvSoundscape
            // Field count: 1
            pub mod CEnvSoundscapeProxy {
                pub const m_MainSoundscapeName: usize = 0x810; // CUtlSymbolLarge
            }
            // Parent: C_BaseEntity
            // Field count: 15
            pub mod C_SoundEventEntity {
                pub const m_bStartOnSpawn: usize = 0x77C; // bool
                pub const m_bToLocalPlayer: usize = 0x77D; // bool
                pub const m_bStopOnNew: usize = 0x77E; // bool
                pub const m_bSaveRestore: usize = 0x77F; // bool
                pub const m_bSavedIsPlaying: usize = 0x780; // bool
                pub const m_flSavedElapsedTime: usize = 0x784; // float32
                pub const m_iszSourceEntityName: usize = 0x788; // CUtlSymbolLarge
                pub const m_iszAttachmentName: usize = 0x790; // CUtlSymbolLarge
                pub const m_onGUIDChanged: usize = 0x798; // CEntityOutputTemplate<SndOpEventGuid_t>
                pub const m_onSoundFinished: usize = 0x7C8; // CEntityIOOutput
                pub const m_flClientCullRadius: usize = 0x7E0; // float32
                pub const m_iszSoundName: usize = 0x810; // CUtlSymbolLarge
                pub const m_hSource: usize = 0x82C; // CEntityHandle
                pub const m_nEntityIndexSelection: usize = 0x830; // int32
                pub const m_bClientSideOnly: usize = 0x0; // bitfield:1
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_EventHandler {
                pub const m_EventName: usize = 0x80; // PulseSymbol_t
            }
            // Parent: None
            // Field count: 0
            pub mod C_LightOrthoEntity {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseFlow {
            }
            // Parent: C_BaseTrigger
            // Field count: 1
            pub mod CBombTarget {
                pub const m_bBombPlantedHere: usize = 0x1105; // bool
            }
            // Parent: None
            // Field count: 1
            pub mod C_Knife {
                pub const m_bFirstAttack: usize = 0x2DA5; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_TerroristWingmanIntroCamera {
            }
            // Parent: CGameSceneNode
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSkeletonInstance {
                pub const m_modelState: usize = 0x140; // CModelState
                pub const m_bUseParentRenderBounds: usize = 0x400; // bool
                pub const m_bDisableSolidCollisionsForHierarchy: usize = 0x401; // bool
                pub const m_bDirtyMotionType: usize = 0x402; // bool
                pub const m_bIsGeneratingLatchedParentSpaceState: usize = 0x403; // bool
                pub const m_materialGroup: usize = 0x408; // CUtlStringToken
                pub const m_nHitboxSet: usize = 0x40C; // uint8
            }
            // Parent: None
            // Field count: 0
            pub mod CEntityComponent {
            }
            // Parent: None
            // Field count: 2
            pub mod C_ItemDogtags {
                pub const m_OwningPlayer: usize = 0x28A8; // CHandle<C_CSPlayerPawn>
                pub const m_KillingPlayer: usize = 0x28AC; // CHandle<C_CSPlayerPawn>
            }
            // Parent: None
            // Field count: 0
            pub mod C_LateUpdatedAnimating {
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_TeamPreviewCameraBone {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_CycleShuffled__InstanceState_t {
                pub const m_Shuffle: usize = 0x0; // CUtlVectorFixedGrowable<uint8,8>
                pub const m_nNextShuffle: usize = 0x20; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseLerp__CursorState_t {
                pub const m_StartTime: usize = 0x0; // GameTime_t
                pub const m_EndTime: usize = 0x4; // GameTime_t
            }
            // Parent: C_BaseModelEntity
            // Field count: 4
            pub mod C_BaseClientUIEntity {
                pub const m_bEnabled: usize = 0x1028; // bool
                pub const m_DialogXMLName: usize = 0x1030; // CUtlSymbolLarge
                pub const m_PanelClassName: usize = 0x1038; // CUtlSymbolLarge
                pub const m_PanelID: usize = 0x1040; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponUSPSilencer {
            }
            // Parent: None
            // Field count: 1
            pub mod C_MolotovProjectile {
                pub const m_bIsIncGrenade: usize = 0x12CC; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod C_TriggerLerpObject {
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponRevolver {
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponElite {
            }
            // Parent: None
            // Field count: 0
            pub mod C_DynamicPropAlias_cable_dynamic {
            }
            // Parent: CBaseAnimGraph
            // Field count: 4
            pub mod CBaseProp {
                pub const m_bModelOverrodeBlockLOS: usize = 0x11F0; // bool
                pub const m_iShapeType: usize = 0x11F4; // int32
                pub const m_bConformToCollisionBounds: usize = 0x11F8; // bool
                pub const m_mPreferredCatchTransform: usize = 0x1200; // CTransform
            }
            // Parent: C_PointEntity
            // Field count: 13
            pub mod CInfoOffscreenPanoramaTexture {
                pub const m_bDisabled: usize = 0x77C; // bool
                pub const m_bEnableMipGen: usize = 0x77D; // bool
                pub const m_nResolutionX: usize = 0x780; // int32
                pub const m_nResolutionY: usize = 0x784; // int32
                pub const m_szPanelType: usize = 0x788; // CUtlSymbolLarge
                pub const m_szLayoutFileName: usize = 0x790; // CUtlSymbolLarge
                pub const m_RenderAttrName: usize = 0x798; // CUtlSymbolLarge
                pub const m_TargetEntities: usize = 0x7A0; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                pub const m_nTargetChangeCount: usize = 0x7B8; // int32
                pub const m_vecCSSClasses: usize = 0x7C0; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
                pub const m_szTargetsName: usize = 0x7D8; // CUtlSymbolLarge
                pub const m_AdditionalTargetEntities: usize = 0x7E0; // CUtlVector<CHandle<C_BaseModelEntity>>
                pub const m_bCheckCSSClasses: usize = 0x950; // bool
            }
            // Parent: None
            // Field count: 83
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertySuppressBaseClassField
            // MPropertySuppressBaseClassField
            pub mod CCSWeaponBaseVData {
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
                pub const m_bShowCrosshair: usize = 0x72C; // bool
                pub const m_bIsFullAuto: usize = 0x72D; // bool
                pub const m_nNumBullets: usize = 0x730; // int32
                pub const m_bReloadsSingleShells: usize = 0x734; // bool
                pub const m_flCycleTime: usize = 0x738; // CFiringModeFloat
                pub const m_flCycleTimeWhenInBurstMode: usize = 0x740; // float32
                pub const m_flTimeBetweenBurstShots: usize = 0x744; // float32
                pub const m_flMaxSpeed: usize = 0x748; // CFiringModeFloat
                pub const m_flSpread: usize = 0x750; // CFiringModeFloat
                pub const m_flInaccuracyCrouch: usize = 0x758; // CFiringModeFloat
                pub const m_flInaccuracyStand: usize = 0x760; // CFiringModeFloat
                pub const m_flInaccuracyJump: usize = 0x768; // CFiringModeFloat
                pub const m_flInaccuracyLand: usize = 0x770; // CFiringModeFloat
                pub const m_flInaccuracyLadder: usize = 0x778; // CFiringModeFloat
                pub const m_flInaccuracyFire: usize = 0x780; // CFiringModeFloat
                pub const m_flInaccuracyMove: usize = 0x788; // CFiringModeFloat
                pub const m_flRecoilAngle: usize = 0x790; // CFiringModeFloat
                pub const m_flRecoilAngleVariance: usize = 0x798; // CFiringModeFloat
                pub const m_flRecoilMagnitude: usize = 0x7A0; // CFiringModeFloat
                pub const m_flRecoilMagnitudeVariance: usize = 0x7A8; // CFiringModeFloat
                pub const m_nTracerFrequency: usize = 0x7B0; // CFiringModeInt
                pub const m_flInaccuracyJumpInitial: usize = 0x7B8; // float32
                pub const m_flInaccuracyJumpApex: usize = 0x7BC; // float32
                pub const m_flInaccuracyReload: usize = 0x7C0; // float32
                pub const m_flDeployDuration: usize = 0x7C4; // float32
                pub const m_flDisallowAttackAfterReloadStartDuration: usize = 0x7C8; // float32
                pub const m_nBurstShotCount: usize = 0x7CC; // int32
                pub const m_bAllowBurstHolster: usize = 0x7D0; // bool
                pub const m_nRecoilSeed: usize = 0x7D4; // int32
                pub const m_nSpreadSeed: usize = 0x7D8; // int32
                pub const m_flAttackMovespeedFactor: usize = 0x7DC; // float32
                pub const m_flInaccuracyPitchShift: usize = 0x7E0; // float32
                pub const m_flInaccuracyAltSoundThreshold: usize = 0x7E4; // float32
                pub const m_szUseRadioSubtitle: usize = 0x7E8; // CUtlString
                pub const m_bUnzoomsAfterShot: usize = 0x7F0; // bool
                pub const m_bHideViewModelWhenZoomed: usize = 0x7F1; // bool
                pub const m_nZoomLevels: usize = 0x7F4; // int32
                pub const m_nZoomFOV1: usize = 0x7F8; // int32
                pub const m_nZoomFOV2: usize = 0x7FC; // int32
                pub const m_flZoomTime0: usize = 0x800; // float32
                pub const m_flZoomTime1: usize = 0x804; // float32
                pub const m_flZoomTime2: usize = 0x808; // float32
                pub const m_flIronSightPullUpSpeed: usize = 0x80C; // float32
                pub const m_flIronSightPutDownSpeed: usize = 0x810; // float32
                pub const m_flIronSightFOV: usize = 0x814; // float32
                pub const m_flIronSightPivotForward: usize = 0x818; // float32
                pub const m_flIronSightLooseness: usize = 0x81C; // float32
                pub const m_nDamage: usize = 0x820; // int32
                pub const m_flHeadshotMultiplier: usize = 0x824; // float32
                pub const m_flArmorRatio: usize = 0x828; // float32
                pub const m_flPenetration: usize = 0x82C; // float32
                pub const m_flRange: usize = 0x830; // float32
                pub const m_flRangeModifier: usize = 0x834; // float32
                pub const m_flFlinchVelocityModifierLarge: usize = 0x838; // float32
                pub const m_flFlinchVelocityModifierSmall: usize = 0x83C; // float32
                pub const m_flRecoveryTimeCrouch: usize = 0x840; // float32
                pub const m_flRecoveryTimeStand: usize = 0x844; // float32
                pub const m_flRecoveryTimeCrouchFinal: usize = 0x848; // float32
                pub const m_flRecoveryTimeStandFinal: usize = 0x84C; // float32
                pub const m_nRecoveryTransitionStartBullet: usize = 0x850; // int32
                pub const m_nRecoveryTransitionEndBullet: usize = 0x854; // int32
                pub const m_flThrowVelocity: usize = 0x858; // float32
                pub const m_vSmokeColor: usize = 0x85C; // Vector
                pub const m_szAnimClass: usize = 0x868; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 6
            pub mod CAttributeManager {
                pub const m_Providers: usize = 0x8; // CUtlVector<CHandle<C_BaseEntity>>
                pub const m_iReapplyProvisionParity: usize = 0x20; // int32
                pub const m_hOuter: usize = 0x24; // CHandle<C_BaseEntity>
                pub const m_bPreventLoopback: usize = 0x28; // bool
                pub const m_ProviderType: usize = 0x2C; // attributeprovidertypes_t
                pub const m_CachedResults: usize = 0x30; // CUtlVector<CAttributeManager::cached_attribute_float_t>
            }
            // Parent: None
            // Field count: 0
            pub mod SignatureOutflow_Continue {
            }
            // Parent: None
            // Field count: 0
            pub mod CInfoTarget {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 20
            pub mod CPlayer_CameraServices {
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
                pub const m_OverrideFogColor: usize = 0x1BC; // Color[5]
                pub const m_bOverrideFogStartEnd: usize = 0x1D0; // bool[5]
                pub const m_fOverrideFogStart: usize = 0x1D8; // float32[5]
                pub const m_fOverrideFogEnd: usize = 0x1EC; // float32[5]
                pub const m_hActivePostProcessingVolume: usize = 0x200; // CHandle<C_PostProcessingVolume>
                pub const m_angDemoViewAngles: usize = 0x208; // QAngle
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Timeline {
                pub const m_TimelineEvents: usize = 0xD8; // CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
                pub const m_bWaitForChildOutflows: usize = 0xF0; // bool
                pub const m_OnFinished: usize = 0xF8; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_EntOutputHandler {
                pub const m_SourceEntity: usize = 0x80; // PulseSymbol_t
                pub const m_SourceOutput: usize = 0x90; // PulseSymbol_t
                pub const m_ExpectedParamType: usize = 0xA0; // CPulseValueFullType
            }
            // Parent: None
            // Field count: 14
            pub mod C_BaseCSGrenade {
                pub const m_bClientPredictDelete: usize = 0x2DA5; // bool
                pub const m_bRedraw: usize = 0x2DA6; // bool
                pub const m_bIsHeldByPlayer: usize = 0x2DA7; // bool
                pub const m_bPinPulled: usize = 0x2DA8; // bool
                pub const m_bJumpThrow: usize = 0x2DA9; // bool
                pub const m_bThrowAnimating: usize = 0x2DAA; // bool
                pub const m_fThrowTime: usize = 0x2DAC; // GameTime_t
                pub const m_flThrowStrength: usize = 0x2DB0; // float32
                pub const m_fDropTime: usize = 0x2E30; // GameTime_t
                pub const m_fPinPullTime: usize = 0x2E34; // GameTime_t
                pub const m_bJustPulledPin: usize = 0x2E38; // bool
                pub const m_nNextHoldTick: usize = 0x2E3C; // GameTick_t
                pub const m_flNextHoldFrac: usize = 0x2E40; // float32
                pub const m_hSwitchToWeaponAfterThrow: usize = 0x2E44; // CHandle<C_CSWeaponBase>
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterAttributeInt {
                pub const m_sAttributeName: usize = 0x7B0; // CUtlSymbolLarge
            }
            // Parent: C_BaseEntity
            // Field count: 12
            pub mod CPointTemplate {
                pub const m_iszWorldName: usize = 0x780; // CUtlSymbolLarge
                pub const m_iszSource2EntityLumpName: usize = 0x788; // CUtlSymbolLarge
                pub const m_iszEntityFilterName: usize = 0x790; // CUtlSymbolLarge
                pub const m_flTimeoutInterval: usize = 0x798; // float32
                pub const m_bAsynchronouslySpawnEntities: usize = 0x79C; // bool
                pub const m_clientOnlyEntityBehavior: usize = 0x7A0; // PointTemplateClientOnlyEntityBehavior_t
                pub const m_ownerSpawnGroupType: usize = 0x7A4; // PointTemplateOwnerSpawnGroupType_t
                pub const m_createdSpawnGroupHandles: usize = 0x7A8; // CUtlVector<uint32>
                pub const m_SpawnedEntityHandles: usize = 0x7C0; // CUtlVector<CEntityHandle>
                pub const m_ScriptSpawnCallback: usize = 0x7D8; // HSCRIPT
                pub const m_ScriptCallbackScope: usize = 0x7E0; // HSCRIPT
                pub const m_OnEntitySpawned: usize = 0x7E8; // CEntityOutputTemplate<CUtlVector<CEntityHandle>>
            }
            // Parent: None
            // Field count: 0
            pub mod CPlayer_FlashlightServices {
            }
            // Parent: CBasePlayerController
            // Field count: 70
            pub mod CCSPlayerController {
                pub const m_pInGameMoneyServices: usize = 0x998; // CCSPlayerController_InGameMoneyServices*
                pub const m_pInventoryServices: usize = 0x9A0; // CCSPlayerController_InventoryServices*
                pub const m_pActionTrackingServices: usize = 0x9A8; // CCSPlayerController_ActionTrackingServices*
                pub const m_pDamageServices: usize = 0x9B0; // CCSPlayerController_DamageServices*
                pub const m_iPing: usize = 0x9B8; // uint32
                pub const m_bHasCommunicationAbuseMute: usize = 0x9BC; // bool
                pub const m_uiCommunicationMuteFlags: usize = 0x9C0; // uint32
                pub const m_szCrosshairCodes: usize = 0x9C8; // CUtlSymbolLarge
                pub const m_iPendingTeamNum: usize = 0x9D0; // uint8
                pub const m_flForceTeamTime: usize = 0x9D4; // GameTime_t
                pub const m_iCompTeammateColor: usize = 0x9D8; // int32
                pub const m_bEverPlayedOnTeam: usize = 0x9DC; // bool
                pub const m_flPreviousForceJoinTeamTime: usize = 0x9E0; // GameTime_t
                pub const m_szClan: usize = 0x9E8; // CUtlSymbolLarge
                pub const m_unClanId32bit: usize = 0x9F0; // uint32
                pub const m_sSanitizedPlayerName: usize = 0x9F8; // CUtlString
                pub const m_sSanitizedClanTag: usize = 0xA00; // CUtlString
                pub const m_iCoachingTeam: usize = 0xA08; // int32
                pub const m_nPlayerDominated: usize = 0xA10; // uint64
                pub const m_nPlayerDominatingMe: usize = 0xA18; // uint64
                pub const m_iCompetitiveRanking: usize = 0xA20; // int32
                pub const m_iCompetitiveWins: usize = 0xA24; // int32
                pub const m_iCompetitiveRankType: usize = 0xA28; // int8
                pub const m_iCompetitiveRankingPredicted_Win: usize = 0xA2C; // int32
                pub const m_iCompetitiveRankingPredicted_Loss: usize = 0xA30; // int32
                pub const m_iCompetitiveRankingPredicted_Tie: usize = 0xA34; // int32
                pub const m_nEndMatchNextMapVote: usize = 0xA38; // int32
                pub const m_unActiveQuestId: usize = 0xA3C; // uint16
                pub const m_rtActiveMissionPeriod: usize = 0xA40; // uint32
                pub const m_nQuestProgressReason: usize = 0xA44; // QuestProgress::Reason
                pub const m_unPlayerTvControlFlags: usize = 0xA48; // uint32
                pub const m_iDraftIndex: usize = 0xA78; // int32
                pub const m_msQueuedModeDisconnectionTimestamp: usize = 0xA7C; // uint32
                pub const m_uiAbandonRecordedReason: usize = 0xA80; // uint32
                pub const m_eNetworkDisconnectionReason: usize = 0xA84; // uint32
                pub const m_bCannotBeKicked: usize = 0xA88; // bool
                pub const m_bEverFullyConnected: usize = 0xA89; // bool
                pub const m_bAbandonAllowsSurrender: usize = 0xA8A; // bool
                pub const m_bAbandonOffersInstantSurrender: usize = 0xA8B; // bool
                pub const m_bDisconnection1MinWarningPrinted: usize = 0xA8C; // bool
                pub const m_bScoreReported: usize = 0xA8D; // bool
                pub const m_nDisconnectionTick: usize = 0xA90; // int32
                pub const m_bControllingBot: usize = 0xAA0; // bool
                pub const m_bHasControlledBotThisRound: usize = 0xAA1; // bool
                pub const m_bHasBeenControlledByPlayerThisRound: usize = 0xAA2; // bool
                pub const m_nBotsControlledThisRound: usize = 0xAA4; // int32
                pub const m_bCanControlObservedBot: usize = 0xAA8; // bool
                pub const m_hPlayerPawn: usize = 0xAAC; // CHandle<C_CSPlayerPawn>
                pub const m_hObserverPawn: usize = 0xAB0; // CHandle<C_CSObserverPawn>
                pub const m_bPawnIsAlive: usize = 0xAB4; // bool
                pub const m_iPawnHealth: usize = 0xAB8; // uint32
                pub const m_iPawnArmor: usize = 0xABC; // int32
                pub const m_bPawnHasDefuser: usize = 0xAC0; // bool
                pub const m_bPawnHasHelmet: usize = 0xAC1; // bool
                pub const m_nPawnCharacterDefIndex: usize = 0xAC2; // uint16
                pub const m_iPawnLifetimeStart: usize = 0xAC4; // int32
                pub const m_iPawnLifetimeEnd: usize = 0xAC8; // int32
                pub const m_iPawnBotDifficulty: usize = 0xACC; // int32
                pub const m_hOriginalControllerOfCurrentPawn: usize = 0xAD0; // CHandle<CCSPlayerController>
                pub const m_iScore: usize = 0xAD4; // int32
                pub const m_recentKillQueue: usize = 0xAD8; // uint8[8]
                pub const m_nFirstKill: usize = 0xAE0; // uint8
                pub const m_nKillCount: usize = 0xAE1; // uint8
                pub const m_bMvpNoMusic: usize = 0xAE2; // bool
                pub const m_eMvpReason: usize = 0xAE4; // int32
                pub const m_iMusicKitID: usize = 0xAE8; // int32
                pub const m_iMusicKitMVPs: usize = 0xAEC; // int32
                pub const m_iMVPs: usize = 0xAF0; // int32
                pub const m_bIsPlayerNameDirty: usize = 0xAF4; // bool
                pub const m_bFireBulletsSeedSynchronized: usize = 0xAFC; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_CounterTerroristRushIntroCamera {
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_TeamIntroCounterTerroristPosition {
            }
            // Parent: CBaseAnimGraph
            // Field count: 4
            pub mod C_CSGO_PreviewModel {
                pub const m_defaultAnim: usize = 0x11F0; // CUtlString
                pub const m_nDefaultAnimLoopMode: usize = 0x11F8; // AnimLoopMode_t
                pub const m_flInitialModelScale: usize = 0x11FC; // float32
                pub const m_sInitialWeaponState: usize = 0x1200; // CUtlString
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_TeamSelectCharacterPosition {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_CycleOrdered__InstanceState_t {
                pub const m_nNextIndex: usize = 0x0; // int32
            }
            // Parent: C_BaseEntity
            // Field count: 4
            pub mod CCSObservableElement {
                pub const m_iszObservableModelEntity: usize = 0x798; // CUtlSymbolLarge
                pub const m_hObservableModelEntity: usize = 0x7A0; // CHandle<C_BaseEntity>
                pub const m_hObservableModelEntity2: usize = 0x7A4; // CHandle<C_BaseEntity>
                pub const m_nTeamFilter: usize = 0x7A8; // uint32
            }
            // Parent: C_SoundEventEntity
            // Field count: 2
            pub mod C_SoundEventAABBEntity {
                pub const m_vMins: usize = 0x838; // Vector
                pub const m_vMaxs: usize = 0x844; // Vector
            }
            // Parent: None
            // Field count: 49
            pub mod CCSPlayer_MovementServices {
                pub const m_AnimationState: usize = 0x310; // CCSPlayerAnimationState
                pub const m_bUsingGroundTopologyOffset: usize = 0x3F0; // bool
                pub const m_flUsingGroundTopologyOffsetTransitionSmoothing: usize = 0x3F4; // float32
                pub const m_vecLadderNormal: usize = 0x3F8; // Vector
                pub const m_nLadderSurfacePropIndex: usize = 0x404; // int32
                pub const m_bDucked: usize = 0x408; // bool
                pub const m_flDuckAmount: usize = 0x40C; // float32
                pub const m_flDuckSpeed: usize = 0x410; // float32
                pub const m_bDuckOverride: usize = 0x414; // bool
                pub const m_bDesiresDuck: usize = 0x415; // bool
                pub const m_bDucking: usize = 0x416; // bool
                pub const m_flDuckRootOffset: usize = 0x418; // float32
                pub const m_flDuckViewOffset: usize = 0x41C; // float32
                pub const m_flLastDuckTime: usize = 0x420; // float32
                pub const m_flBombPlantViewOffset: usize = 0x424; // float32
                pub const m_vecLastPositionAtFullCrouchSpeed: usize = 0x430; // Vector2D
                pub const m_duckUntilOnGround: usize = 0x438; // bool
                pub const m_bHasWalkMovedSinceLastJump: usize = 0x439; // bool
                pub const m_bInStuckTest: usize = 0x43A; // bool
                pub const m_nTraceCount: usize = 0x648; // int32
                pub const m_StuckLast: usize = 0x64C; // int32
                pub const m_bSpeedCropped: usize = 0x650; // bool
                pub const m_nOldWaterLevel: usize = 0x654; // int32
                pub const m_flWaterEntryTime: usize = 0x658; // float32
                pub const m_vecForward: usize = 0x65C; // Vector
                pub const m_vecLeft: usize = 0x668; // Vector
                pub const m_vecUp: usize = 0x674; // Vector
                pub const m_nGameCodeHasMovedPlayerAfterCommand: usize = 0x680; // int32
                pub const m_fStashGrenadeParameterWhen: usize = 0x684; // GameTime_t
                pub const m_bUseFrictionStashedSpeed: usize = 0x688; // bool
                pub const m_flUseFrictionStashedSpeedUntilFrac: usize = 0x68C; // float32
                pub const m_flFrictionStashedSpeed: usize = 0x690; // float32
                pub const m_flStamina: usize = 0x694; // float32
                pub const m_flHeightAtJumpStart: usize = 0x698; // float32
                pub const m_flMaxJumpHeightThisJump: usize = 0x69C; // float32
                pub const m_flMaxJumpHeightLastJump: usize = 0x6A0; // float32
                pub const m_flStaminaAtJumpStart: usize = 0x6A4; // float32
                pub const m_flVelMulAtJumpStart: usize = 0x6A8; // float32
                pub const m_flAccumulatedJumpError: usize = 0x6AC; // float32
                pub const m_LegacyJump: usize = 0x6B0; // CCSPlayerLegacyJump
                pub const m_ModernJump: usize = 0x6C8; // CCSPlayerModernJump
                pub const m_nLastJumpTick: usize = 0x700; // GameTick_t
                pub const m_flLastJumpFrac: usize = 0x704; // float32
                pub const m_flLastJumpVelocityZ: usize = 0x708; // float32
                pub const m_bJumpApexPending: usize = 0x70C; // bool
                pub const m_flTicksSinceLastSurfingDetected: usize = 0x710; // float32
                pub const m_bWasSurfing: usize = 0x714; // bool
                pub const m_vecWalkWishVel: usize = 0x7A4; // Vector2D
                pub const m_bHasEverProcessedCommand: usize = 0xFD0; // bool
            }
            // Parent: None
            // Field count: 5
            pub mod SellbackPurchaseEntry_t {
                pub const m_unDefIdx: usize = 0x30; // uint16
                pub const m_nCost: usize = 0x34; // int32
                pub const m_nPrevArmor: usize = 0x38; // int32
                pub const m_bPrevHelmet: usize = 0x3C; // bool
                pub const m_hItem: usize = 0x40; // CEntityHandle
            }
            // Parent: None
            // Field count: 0
            pub mod C_TintController {
            }
            // Parent: None
            // Field count: 2
            pub mod C_WeaponBaseItem {
                pub const m_bSequenceInProgress: usize = 0x2DA5; // bool
                pub const m_bRedraw: usize = 0x2DA6; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod CWaterSplasher {
            }
            // Parent: None
            // Field count: 0
            pub mod C_FuncBrush {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PhysicsRagdollPose_t {
                pub const m_RelativeTransforms: usize = 0x8; // C_NetworkUtlVectorBase<CTransform>
                pub const m_hOwner: usize = 0x20; // CHandle<C_BaseEntity>
                pub const m_bSetFromDebugHistory: usize = 0x24; // bool
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPropDataComponent {
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
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_LimitCount__InstanceState_t {
                pub const m_nCurrentCount: usize = 0x0; // int32
            }
            // Parent: None
            // Field count: 1
            pub mod C_WeaponCZ75a {
                pub const m_bMagazineRemoved: usize = 0x2DCC; // bool
            }
            // Parent: None
            // Field count: 7
            pub mod C_DynamicLight {
                pub const m_Flags: usize = 0x1020; // uint8
                pub const m_LightStyle: usize = 0x1021; // uint8
                pub const m_Radius: usize = 0x1024; // float32
                pub const m_Exponent: usize = 0x1028; // int32
                pub const m_InnerAngle: usize = 0x102C; // float32
                pub const m_OuterAngle: usize = 0x1030; // float32
                pub const m_SpotRadius: usize = 0x1034; // float32
            }
            // Parent: None
            // Field count: 28
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CCS2PawnGraphController {
                pub const m_bIsDefusing: usize = 0x2D8; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_moveType: usize = 0x2F0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_moveDirectionID: usize = 0x308; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_flMoveSpeedX: usize = 0x320; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flMoveSpeedY: usize = 0x338; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flMoveSpeedHorizontal: usize = 0x350; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flPreviousMoveSpeedHorizontal: usize = 0x368; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flCrouchAmount: usize = 0x380; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_bIsWalking: usize = 0x398; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_flWeaponDropAmount: usize = 0x3B0; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_groundAction: usize = 0x3C8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_groundActionDirectionID: usize = 0x3E0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_flGroundTurnAngleOrVelocity: usize = 0x3F8; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flLadderCycle: usize = 0x410; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flLadderYaw: usize = 0x428; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flLadderYawBackwards: usize = 0x440; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_airAction: usize = 0x458; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_flAirHeightAboveGround: usize = 0x470; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_leftFootTarget: usize = 0x488; // CAnimGraph2ParamOptionalRef<CNmTarget>
                pub const m_rightFootTarget: usize = 0x4A0; // CAnimGraph2ParamOptionalRef<CNmTarget>
                pub const m_flFlashedAmount: usize = 0x4B8; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flAimPitchAngle: usize = 0x4D0; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flAimYawAngle: usize = 0x4E8; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flinchHead: usize = 0x500; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_flinchHeadRestart: usize = 0x518; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_flinchBody: usize = 0x530; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_flinchBodyRestart: usize = 0x548; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_flinchIsOnFire: usize = 0x560; // CAnimGraph2ParamOptionalRef<bool>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod EngineCountdownTimer {
                pub const m_duration: usize = 0x8; // float32
                pub const m_timestamp: usize = 0xC; // float32
                pub const m_timescale: usize = 0x10; // float32
            }
            // Parent: C_SoundEventEntity
            // Field count: 1
            pub mod C_SoundEventSphereEntity {
                pub const m_flRadius: usize = 0x838; // float32
            }
            // Parent: None
            // Field count: 2
            pub mod CCSPlayerController_DamageServices {
                pub const m_nSendUpdate: usize = 0x40; // int32
                pub const m_DamageList: usize = 0x48; // C_UtlVectorEmbeddedNetworkVar<CDamageRecord>
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_TeamPreviewModel {
            }
            // Parent: None
            // Field count: 0
            pub mod C_TonemapController2Alias_env_tonemap_controller2 {
            }
            // Parent: None
            // Field count: 24
            pub mod C_Inferno {
                pub const m_nfxFireDamageEffect: usize = 0x1060; // ParticleIndex_t
                pub const m_hInfernoPointsSnapshot: usize = 0x1068; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                pub const m_hInfernoFillerPointsSnapshot: usize = 0x1070; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                pub const m_hInfernoOutlinePointsSnapshot: usize = 0x1078; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                pub const m_hInfernoClimbingOutlinePointsSnapshot: usize = 0x1080; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                pub const m_hInfernoDecalsSnapshot: usize = 0x1088; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                pub const m_firePositions: usize = 0x1090; // VectorWS[64]
                pub const m_fireParentPositions: usize = 0x1390; // VectorWS[64]
                pub const m_bFireIsBurning: usize = 0x1690; // bool[64]
                pub const m_BurnNormal: usize = 0x16D0; // Vector[64]
                pub const m_fireCount: usize = 0x19D0; // int32
                pub const m_nInfernoType: usize = 0x19D4; // int32
                pub const m_nFireLifetime: usize = 0x19D8; // float32
                pub const m_bInPostEffectTime: usize = 0x19DC; // bool
                pub const m_lastFireCount: usize = 0x19E0; // int32
                pub const m_nFireEffectTickBegin: usize = 0x19E4; // int32
                pub const m_drawableCount: usize = 0x85F0; // int32
                pub const m_blosCheck: usize = 0x85F4; // bool
                pub const m_nlosperiod: usize = 0x85F8; // int32
                pub const m_maxFireHalfWidth: usize = 0x85FC; // float32
                pub const m_maxFireHeight: usize = 0x8600; // float32
                pub const m_minBounds: usize = 0x8604; // VectorWS
                pub const m_maxBounds: usize = 0x8610; // VectorWS
                pub const m_flLastGrassBurnThink: usize = 0x861C; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CFilterLOS {
            }
            // Parent: C_BaseEntity
            // Field count: 7
            pub mod CPointOrient {
                pub const m_iszSpawnTargetName: usize = 0x780; // CUtlSymbolLarge
                pub const m_hTarget: usize = 0x788; // CHandle<C_BaseEntity>
                pub const m_bActive: usize = 0x78C; // bool
                pub const m_nGoalDirection: usize = 0x790; // PointOrientGoalDirectionType_t
                pub const m_nConstraint: usize = 0x794; // PointOrientConstraint_t
                pub const m_flMaxTurnRate: usize = 0x798; // float32
                pub const m_flLastGameTime: usize = 0x79C; // GameTime_t
            }
            // Parent: C_BaseEntity
            // Field count: 1
            pub mod C_GlobalLight {
                pub const m_WindClothForceHandle: usize = 0xC40; // uint16
            }
            // Parent: C_BaseEntity
            // Field count: 1
            pub mod C_EnvWindClientside {
                pub const m_EnvWindShared: usize = 0x780; // C_EnvWindShared
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod sky3dparams_t {
                pub const scale: usize = 0x8; // int16
                pub const origin: usize = 0xC; // VectorWS
                pub const bClip3DSkyBoxNearToWorldFar: usize = 0x18; // bool
                pub const flClip3DSkyBoxNearToWorldFarOffset: usize = 0x1C; // float32
                pub const fog: usize = 0x20; // fogparams_t
                pub const m_nWorldGroupID: usize = 0x88; // WorldGroupId_t
            }
            // Parent: C_BaseGrenade
            // Field count: 0
            pub mod C_FlashbangProjectile {
            }
            // Parent: C_SoundEventEntity
            // Field count: 5
            pub mod C_SoundEventConeEntity {
                pub const m_flEmitterAngle: usize = 0x838; // float32
                pub const m_flSweetSpotAngle: usize = 0x83C; // float32
                pub const m_flAttenMin: usize = 0x840; // float32
                pub const m_flAttenMax: usize = 0x844; // float32
                pub const m_iszParameterName: usize = 0x848; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CDestructiblePartsComponent {
                pub const __m_pChainEntity: usize = 0x0; // CNetworkVarChainer
                pub const m_vecDamageTakenByHitGroup: usize = 0x48; // CUtlVector<uint16>
                pub const m_hOwner: usize = 0x60; // CHandle<C_BaseModelEntity>
                pub const m_pAnimGraphDestructibleGraphController: usize = 0x68; // CAnimGraphControllerPtr
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponP90 {
            }
            // Parent: C_BaseEntity
            // Field count: 1
            pub mod C_EnvWind {
                pub const m_EnvWindShared: usize = 0x780; // C_EnvWindShared
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_TerroristTeamIntroCamera {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Step_DebugLog {
            }
            // Parent: C_BaseEntity
            // Field count: 3
            pub mod C_PointDeathcamBounds {
                pub const m_vBoxMins: usize = 0x77C; // Vector
                pub const m_vBoxMaxs: usize = 0x788; // Vector
                pub const m_flLerpDistance: usize = 0x794; // float32
            }
            // Parent: None
            // Field count: 5
            pub mod CCSPlayerController_ActionTrackingServices {
                pub const m_perRoundStats: usize = 0x40; // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
                pub const m_matchStats: usize = 0xA8; // CSMatchStats_t
                pub const m_iNumRoundKills: usize = 0x120; // int32
                pub const m_iNumRoundKillsHeadshots: usize = 0x124; // int32
                pub const m_flTotalRoundDamageDealt: usize = 0x128; // float32
            }
            // Parent: CBodyComponentSkeletonInstance
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBodyComponentBaseAnimGraph {
                pub const m_animationController: usize = 0x520; // CBaseAnimGraphController
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_PreviewModelAlias_csgo_item_previewmodel {
            }
            // Parent: None
            // Field count: 0
            pub mod C_InfoInstructorHintHostageRescueZone {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCustomFGDMetadata
            pub mod CPulseCell_BaseYieldingInflow {
                pub const m_BaseFlow_OnAfterCancel: usize = 0x48; // CPulse_ResumePoint
                pub const m_BaseFlow_WhileActive: usize = 0x90; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PulseNodeDynamicOutflows_t {
                pub const m_Outflows: usize = 0x0; // CUtlVector<PulseNodeDynamicOutflows_t::DynamicOutflow_t>
            }
            // Parent: C_BaseTrigger
            // Field count: 2
            pub mod C_TriggerBuoyancy {
                pub const m_BuoyancyHelper: usize = 0x1108; // CBuoyancyHelper
                pub const m_flFluidDensity: usize = 0x1220; // float32
            }
            // Parent: None
            // Field count: 6
            pub mod CPlayer_MovementServices_Humanoid {
                pub const m_flStepSoundTime: usize = 0x258; // float32
                pub const m_flFallVelocity: usize = 0x25C; // float32
                pub const m_groundNormal: usize = 0x260; // Vector
                pub const m_flSurfaceFriction: usize = 0x26C; // float32
                pub const m_surfaceProps: usize = 0x270; // CUtlStringToken
                pub const m_nStepside: usize = 0x280; // int32
            }
            // Parent: None
            // Field count: 1
            pub mod CPulseCell_IsRequirementValid__Criteria_t {
                pub const m_bIsValid: usize = 0x0; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponTec9 {
            }
            // Parent: C_BreakableProp
            // Field count: 5
            pub mod C_PhysPropClientside {
                pub const m_flTouchDelta: usize = 0x1358; // GameTime_t
                pub const m_fDeathTime: usize = 0x135C; // GameTime_t
                pub const m_vecDamagePosition: usize = 0x1360; // VectorWS
                pub const m_vecDamageDirection: usize = 0x136C; // Vector
                pub const m_nDamageType: usize = 0x1378; // DamageTypes_t
            }
            // Parent: None
            // Field count: 1
            pub mod C_BaseDoor {
                pub const m_bIsUsable: usize = 0x1020; // bool
            }
            // Parent: None
            // Field count: 5
            pub mod CSMatchStats_t {
                pub const m_iEnemy5Ks: usize = 0x64; // int32
                pub const m_iEnemy4Ks: usize = 0x68; // int32
                pub const m_iEnemy3Ks: usize = 0x6C; // int32
                pub const m_iEnemyKnifeKills: usize = 0x70; // int32
                pub const m_iEnemyTaserKills: usize = 0x74; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod EntityRenderAttribute_t {
                pub const m_ID: usize = 0x30; // CUtlStringToken
                pub const m_Values: usize = 0x34; // Vector4D
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_ObservableVariableListener {
                pub const m_nBlackboardReference: usize = 0x80; // PulseRuntimeBlackboardReferenceIndex_t
                pub const m_bSelfReference: usize = 0x82; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod CCSGO_RushIntroTerroristPosition {
            }
            // Parent: None
            // Field count: 0
            pub mod CHostageRescueZone {
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CModelState {
                pub const m_hModel: usize = 0xA0; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_ModelName: usize = 0xA8; // CUtlSymbolLarge
                pub const m_pVPhysicsAggregate: usize = 0xE0; // IPhysAggregateInstance*
                pub const m_flRootBoneOffset_x: usize = 0xE8; // float32
                pub const m_flRootBoneOffset_y: usize = 0xEC; // float32
                pub const m_flRootBoneOffset_z: usize = 0xF0; // float32
                pub const m_nRootBoneOffsetResetSerialNumber: usize = 0xF4; // uint8
                pub const m_bClientClothCreationSuppressed: usize = 0x110; // bool
                pub const m_nAnimStateNoInterpSerialNumber: usize = 0x200; // uint8
                pub const m_MeshGroupMask: usize = 0x208; // uint64
                pub const m_nBodyGroupChoices: usize = 0x268; // C_NetworkUtlVectorBase<int32>
                pub const m_nIdealMotionType: usize = 0x2B2; // int8
                pub const m_nForceLOD: usize = 0x2B3; // int8
                pub const m_nClothUpdateFlags: usize = 0x2B4; // int8
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_LerpCameraSettings__CursorState_t {
                pub const m_hCamera: usize = 0x8; // CHandle<C_PointCamera>
                pub const m_OverlaidStart: usize = 0xC; // PointCameraSettings_t
                pub const m_OverlaidEnd: usize = 0x1C; // PointCameraSettings_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_CycleOrdered {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Field count: 7
            pub mod C_CSWeaponBaseGun {
                pub const m_zoomLevel: usize = 0x2DA8; // int32
                pub const m_iBurstShotsRemaining: usize = 0x2DAC; // int32
                pub const m_iSilencerBodygroup: usize = 0x2DB0; // int32
                pub const m_silencedModelIndex: usize = 0x2DC0; // int32
                pub const m_inPrecache: usize = 0x2DC4; // bool
                pub const m_bNeedsBoltAction: usize = 0x2DC5; // bool
                pub const m_nRevolverCylinderIdx: usize = 0x2DC8; // int32
            }
            // Parent: None
            // Field count: 1
            pub mod C_CSGameRulesProxy {
                pub const m_pGameRules: usize = 0x780; // C_CSGameRules*
            }
            // Parent: None
            // Field count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CCollisionProperty {
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
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponP250 {
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterMassGreater {
                pub const m_fFilterMass: usize = 0x7B0; // float32
            }
            // Parent: None
            // Field count: 1
            pub mod C_ShatterGlassShardPhysics {
                pub const m_ShardDesc: usize = 0x1028; // shard_model_desc_t
            }
            // Parent: None
            // Field count: 13
            pub mod C_EntityDissolve {
                pub const m_flStartTime: usize = 0x1028; // GameTime_t
                pub const m_flFadeInStart: usize = 0x102C; // float32
                pub const m_flFadeInLength: usize = 0x1030; // float32
                pub const m_flFadeOutModelStart: usize = 0x1034; // float32
                pub const m_flFadeOutModelLength: usize = 0x1038; // float32
                pub const m_flFadeOutStart: usize = 0x103C; // float32
                pub const m_flFadeOutLength: usize = 0x1040; // float32
                pub const m_nDissolveType: usize = 0x1044; // EntityDissolveType_t
                pub const m_nMagnitude: usize = 0x1048; // uint32
                pub const m_vDissolverOrigin: usize = 0x104C; // VectorWS
                pub const m_flNextSparkTime: usize = 0x1058; // GameTime_t
                pub const m_bCoreExplode: usize = 0x105C; // bool
                pub const m_bLinkedToServerEnt: usize = 0x105D; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod C_SoundOpvarSetOBBEntity {
            }
            // Parent: None
            // Field count: 8
            pub mod CCSCustomPlayerCamera {
                pub const m_hPawn: usize = 0x77C; // CHandle<C_CSPlayerPawnBase>
                pub const m_nCameraMode: usize = 0x780; // CustomCameraMode_t
                pub const m_hFollowEntity: usize = 0x784; // CHandle<C_BaseEntity>
                pub const m_bFollowEyes: usize = 0x788; // bool
                pub const m_vecFollowOffset: usize = 0x78C; // Vector
                pub const m_vecCameraOffset: usize = 0x798; // Vector
                pub const m_bClipCameraOffset: usize = 0x7A4; // bool
                pub const m_flCameraOffsetReturnStrength: usize = 0x7A8; // float32
            }
            // Parent: None
            // Field count: 1
            pub mod CCSGameModeRules_ArmsRace {
                pub const m_WeaponSequence: usize = 0x30; // C_NetworkUtlVectorBase<CUtlString>
            }
            // Parent: C_BaseModelEntity
            // Field count: 8
            pub mod C_FuncMonitor {
                pub const m_targetCamera: usize = 0x1020; // CUtlString
                pub const m_nResolutionEnum: usize = 0x1028; // int32
                pub const m_bRenderShadows: usize = 0x102C; // bool
                pub const m_bUseUniqueColorTarget: usize = 0x102D; // bool
                pub const m_brushModelName: usize = 0x1030; // CUtlString
                pub const m_hTargetCamera: usize = 0x1038; // CHandle<C_BaseEntity>
                pub const m_bEnabled: usize = 0x103C; // bool
                pub const m_bDraw3DSkybox: usize = 0x103D; // bool
            }
            // Parent: None
            // Field count: 14
            pub mod C_ClientRagdoll {
                pub const m_bFadeOut: usize = 0x11F0; // bool
                pub const m_bImportant: usize = 0x11F1; // bool
                pub const m_flEffectTime: usize = 0x11F4; // GameTime_t
                pub const m_gibDespawnTime: usize = 0x11F8; // GameTime_t
                pub const m_iCurrentFriction: usize = 0x11FC; // int32
                pub const m_iMinFriction: usize = 0x1200; // int32
                pub const m_iMaxFriction: usize = 0x1204; // int32
                pub const m_iFrictionAnimState: usize = 0x1208; // int32
                pub const m_bReleaseRagdoll: usize = 0x120C; // bool
                pub const m_iEyeAttachment: usize = 0x120D; // AttachmentHandle_t
                pub const m_bFadingOut: usize = 0x120E; // bool
                pub const m_flScaleEnd: usize = 0x1210; // float32[10]
                pub const m_flScaleTimeStart: usize = 0x1238; // GameTime_t[10]
                pub const m_flScaleTimeEnd: usize = 0x1260; // GameTime_t[10]
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PulseSelectorOutflowList_t {
                pub const m_Outflows: usize = 0x0; // CUtlVector<OutflowWithRequirements_t>
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_BaseModelEntity__BodyGroupRequest_t {
                pub const m_uRequestID: usize = 0x0; // uint32
                pub const m_nGroupName: usize = 0x4; // CUtlStringToken
                pub const m_sChoiceName: usize = 0x8; // CGlobalSymbol
                pub const m_nGroup: usize = 0x10; // int32
                pub const m_uChoice: usize = 0x14; // uint16
                pub const m_uRefCount: usize = 0x16; // uint16
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_PlaySequence__CursorState_t {
                pub const m_hTarget: usize = 0x0; // CHandle<CBaseAnimGraph>
            }
            // Parent: CBodyComponent
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBodyComponentSkeletonInstance {
                pub const m_skeletonInstance: usize = 0x80; // CSkeletonInstance
            }
            // Parent: None
            // Field count: 0
            pub mod C_CS2WeaponModuleBase {
            }
            // Parent: C_BaseEntity
            // Field count: 9
            pub mod C_CSGO_TeamPreviewCharacterPosition {
                pub const m_nVariant: usize = 0x77C; // int32
                pub const m_nRandom: usize = 0x780; // int32
                pub const m_nOrdinal: usize = 0x784; // int32
                pub const m_sWeaponName: usize = 0x788; // CUtlString
                pub const m_xuid: usize = 0x790; // uint64
                pub const m_agentItem: usize = 0x798; // C_EconItemView
                pub const m_glovesItem: usize = 0x1C50; // C_EconItemView
                pub const m_weaponItem: usize = 0x3108; // C_EconItemView
                pub const m_petItem: usize = 0x45C0; // C_EconItemView
            }
            // Parent: None
            // Field count: 11
            pub mod C_SmokeGrenadeProjectile {
                pub const m_nSmokeEffectTickBegin: usize = 0x12E8; // int32
                pub const m_bDidSmokeEffect: usize = 0x12EC; // bool
                pub const m_nRandomSeed: usize = 0x12F0; // int32
                pub const m_vSmokeColor: usize = 0x12F4; // Vector
                pub const m_vSmokeDetonationPos: usize = 0x1300; // VectorWS
                pub const m_VoxelFrameData: usize = 0x1310; // C_NetworkUtlVectorBase<uint8>
                pub const m_nVoxelFrameDataSize: usize = 0x1328; // int32
                pub const m_nVoxelUpdate: usize = 0x132C; // int32
                pub const m_nSmokeLightProbeRegen: usize = 0x1330; // uint8
                pub const m_bSmokeVolumeDataReceived: usize = 0x1331; // bool
                pub const m_bSmokeEffectSpawned: usize = 0x1332; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CScriptComponent {
                pub const m_scriptClassName: usize = 0x30; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 1
            pub mod CCSPlayer_BuyServices {
                pub const m_vecSellbackPurchaseEntries: usize = 0x48; // C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
            }
            // Parent: C_BaseEntity
            // Field count: 2
            pub mod C_SkyCameraVolumeTarget {
                pub const m_nSkyboxScale: usize = 0x77C; // int16
                pub const m_hSkyMaterial: usize = 0x780; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Field count: 0
            pub mod C_PortraitWorldCallbackHandler {
            }
            // Parent: C_BreakableProp
            // Field count: 25
            pub mod C_DynamicProp {
                pub const m_bGraphControllerEnabled: usize = 0x1358; // bool
                pub const m_bUseHitboxesForRenderBox: usize = 0x1359; // bool
                pub const m_bUseAnimGraph: usize = 0x135A; // bool
                pub const m_pOutputAnimBegun: usize = 0x1360; // CEntityIOOutput
                pub const m_pOutputAnimOver: usize = 0x1378; // CEntityIOOutput
                pub const m_pOutputAnimLoopCycleOver: usize = 0x1390; // CEntityIOOutput
                pub const m_OnAnimReachedStart: usize = 0x13A8; // CEntityIOOutput
                pub const m_OnAnimReachedEnd: usize = 0x13C0; // CEntityIOOutput
                pub const m_iszIdleAnim: usize = 0x13D8; // CUtlSymbolLarge
                pub const m_nIdleAnimLoopMode: usize = 0x13E0; // AnimLoopMode_t
                pub const m_bRandomizeCycle: usize = 0x13E4; // bool
                pub const m_bStartDisabled: usize = 0x13E5; // bool
                pub const m_bFiredStartEndOutput: usize = 0x13E6; // bool
                pub const m_bForceNpcExclude: usize = 0x13E7; // bool
                pub const m_bCreateMovableSurfaceGraph: usize = 0x13E8; // bool
                pub const m_bCreateNonSolid: usize = 0x13E9; // bool
                pub const m_bIsOverrideProp: usize = 0x13EA; // bool
                pub const m_iInitialGlowState: usize = 0x13EC; // int32
                pub const m_nGlowRange: usize = 0x13F0; // int32
                pub const m_nGlowRangeMin: usize = 0x13F4; // int32
                pub const m_glowColor: usize = 0x13F8; // Color
                pub const m_nGlowTeam: usize = 0x13FC; // int32
                pub const m_iCachedFrameCount: usize = 0x1400; // int32
                pub const m_vecCachedRenderMins: usize = 0x1404; // Vector
                pub const m_vecCachedRenderMaxs: usize = 0x1410; // Vector
            }
            // Parent: None
            // Field count: 10
            pub mod C_CSTeam {
                pub const m_szTeamMatchStat: usize = 0x835; // char[512]
                pub const m_numMapVictories: usize = 0xA38; // int32
                pub const m_bSurrendered: usize = 0xA3C; // bool
                pub const m_scoreFirstHalf: usize = 0xA40; // int32
                pub const m_scoreSecondHalf: usize = 0xA44; // int32
                pub const m_scoreOvertime: usize = 0xA48; // int32
                pub const m_szClanTeamname: usize = 0xA4C; // char[129]
                pub const m_iClanID: usize = 0xAD0; // uint32
                pub const m_szTeamFlagImage: usize = 0xAD4; // char[8]
                pub const m_szTeamLogoImage: usize = 0xADC; // char[8]
            }
            // Parent: None
            // Field count: 0
            pub mod C_CS2HudModelWeapon {
            }
            // Parent: C_BaseModelEntity
            // Field count: 8
            pub mod C_TextureBasedAnimatable {
                pub const m_bLoop: usize = 0x1020; // bool
                pub const m_flFPS: usize = 0x1024; // float32
                pub const m_hPositionKeys: usize = 0x1028; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_hRotationKeys: usize = 0x1030; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_vAnimationBoundsMin: usize = 0x1038; // Vector
                pub const m_vAnimationBoundsMax: usize = 0x1044; // Vector
                pub const m_flStartTime: usize = 0x1050; // float32
                pub const m_flStartFrame: usize = 0x1054; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod C_LightEnvironmentEntity {
            }
            // Parent: C_BaseTrigger
            // Field count: 14
            pub mod C_TriggerPhysics {
                pub const m_gravityScale: usize = 0x1108; // float32
                pub const m_linearLimit: usize = 0x110C; // float32
                pub const m_linearDamping: usize = 0x1110; // float32
                pub const m_angularLimit: usize = 0x1114; // float32
                pub const m_angularDamping: usize = 0x1118; // float32
                pub const m_linearForce: usize = 0x111C; // float32
                pub const m_flFrequency: usize = 0x1120; // float32
                pub const m_flDampingRatio: usize = 0x1124; // float32
                pub const m_vecLinearForcePointAt: usize = 0x1128; // Vector
                pub const m_bCollapseToForcePoint: usize = 0x1134; // bool
                pub const m_vecLinearForcePointAtWorld: usize = 0x1138; // VectorWS
                pub const m_vecLinearForceDirection: usize = 0x1144; // Vector
                pub const m_bForceDirectionIsInLocalSpace: usize = 0x1150; // bool
                pub const m_bConvertToDebrisWhenPossible: usize = 0x1151; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod C_PropDoorRotating {
            }
            // Parent: None
            // Field count: 2
            pub mod C_HandleTest {
                pub const m_Handle: usize = 0x77C; // CHandle<C_BaseEntity>
                pub const m_bSendHandle: usize = 0x780; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 8
            pub mod CInfoWorldLayer {
                pub const m_pOutputOnEntitiesSpawned: usize = 0x780; // CEntityIOOutput
                pub const m_worldName: usize = 0x798; // CUtlSymbolLarge
                pub const m_layerName: usize = 0x7A0; // CUtlSymbolLarge
                pub const m_bWorldLayerVisible: usize = 0x7A8; // bool
                pub const m_bEntitiesSpawned: usize = 0x7A9; // bool
                pub const m_bCreateAsChildSpawnGroup: usize = 0x7AA; // bool
                pub const m_hLayerSpawnGroup: usize = 0x7AC; // uint32
                pub const m_bWorldLayerActuallyVisible: usize = 0x7B0; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod CBodyComponentBaseModelEntity {
            }
            // Parent: None
            // Field count: 1
            pub mod C_Multimeter {
                pub const m_hTargetC4: usize = 0x11F0; // CHandle<C_PlantedC4>
            }
            // Parent: C_BaseModelEntity
            // Field count: 12
            pub mod C_BaseTrigger {
                pub const m_OnStartTouch: usize = 0x1020; // CEntityIOOutput
                pub const m_OnStartTouchAll: usize = 0x1038; // CEntityIOOutput
                pub const m_OnEndTouch: usize = 0x1050; // CEntityIOOutput
                pub const m_OnEndTouchAll: usize = 0x1068; // CEntityIOOutput
                pub const m_OnTouching: usize = 0x1080; // CEntityIOOutput
                pub const m_OnTouchingEachEntity: usize = 0x1098; // CEntityIOOutput
                pub const m_OnNotTouching: usize = 0x10B0; // CEntityIOOutput
                pub const m_OnTouchingChanged: usize = 0x10C8; // CEntityIOOutput
                pub const m_hTouchingEntities: usize = 0x10E0; // CUtlVector<CHandle<C_BaseEntity>>
                pub const m_iFilterName: usize = 0x10F8; // CUtlSymbolLarge
                pub const m_hFilter: usize = 0x1100; // CHandle<CBaseFilter>
                pub const m_bDisabled: usize = 0x1104; // bool
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod FilterDamageType {
                pub const m_iDamageType: usize = 0x7B0; // int32
            }
            // Parent: None
            // Field count: 2
            pub mod CAttributeList {
                pub const m_Attributes: usize = 0x8; // C_UtlVectorEmbeddedNetworkVar<CEconItemAttribute>
                pub const m_pManager: usize = 0x70; // CAttributeManager*
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
            pub mod CPulseCell_Inflow_Wait {
                pub const m_WakeResume: usize = 0xD8; // CPulse_ResumePoint
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterProximity {
                pub const m_flRadius: usize = 0x7B0; // float32
            }
            // Parent: None
            // Field count: 20
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CCS2WeaponGraphController {
                pub const m_action: usize = 0xC0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_bActionReset: usize = 0xD8; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_flWeaponActionSpeedScale: usize = 0xF0; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_weaponCategory: usize = 0x108; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_weaponType: usize = 0x120; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_weaponExtraInfo: usize = 0x138; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_flWeaponAmmo: usize = 0x150; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flWeaponAmmoMax: usize = 0x168; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flWeaponAmmoReserve: usize = 0x180; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_bWeaponIsSilenced: usize = 0x198; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_flWeaponIronsightAmount: usize = 0x1B0; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_bIsUsingLegacyModel: usize = 0x1C8; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_idleVariation: usize = 0x1E0; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_deployVariation: usize = 0x1F8; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_attackType: usize = 0x210; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_attackThrowStrength: usize = 0x228; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_flAttackVariation: usize = 0x240; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_inspectVariation: usize = 0x258; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_inspectExtraInfo: usize = 0x270; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_reloadStage: usize = 0x288; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            }
            // Parent: None
            // Field count: 20
            pub mod CEffectData {
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
            }
            // Parent: C_BaseModelEntity
            // Field count: 26
            pub mod C_ParticleSystem {
                pub const m_szSnapshotFileName: usize = 0x1020; // char[512]
                pub const m_bActive: usize = 0x1220; // bool
                pub const m_bFrozen: usize = 0x1221; // bool
                pub const m_flFreezeTransitionDuration: usize = 0x1224; // float32
                pub const m_nStopType: usize = 0x1228; // int32
                pub const m_bAnimateDuringGameplayPause: usize = 0x122C; // bool
                pub const m_iEffectIndex: usize = 0x1230; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_flStartTime: usize = 0x1238; // GameTime_t
                pub const m_flPreSimTime: usize = 0x123C; // float32
                pub const m_vServerControlPoints: usize = 0x1240; // Vector[4]
                pub const m_iServerControlPointAssignments: usize = 0x1270; // uint8[4]
                pub const m_hControlPointEnts: usize = 0x1274; // CHandle<C_BaseEntity>[64]
                pub const m_bDataStringLocalized: usize = 0x1374; // bool
                pub const m_strDataString: usize = 0x1378; // CUtlString
                pub const m_bNoSave: usize = 0x1380; // bool
                pub const m_bNoFreeze: usize = 0x1381; // bool
                pub const m_bNoRamp: usize = 0x1382; // bool
                pub const m_bStartActive: usize = 0x1383; // bool
                pub const m_iszEffectName: usize = 0x1388; // CUtlSymbolLarge
                pub const m_iszControlPointNames: usize = 0x1390; // CUtlSymbolLarge[64]
                pub const m_nDataCP: usize = 0x1590; // int32
                pub const m_vecDataCPValue: usize = 0x1594; // Vector
                pub const m_nTintCP: usize = 0x15A0; // int32
                pub const m_clrTint: usize = 0x15A4; // Color
                pub const m_bOldActive: usize = 0x15C8; // bool
                pub const m_bOldFrozen: usize = 0x15C9; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_CycleShuffled {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponSCAR20 {
            }
            // Parent: None
            // Field count: 0
            pub mod C_FuncMover {
            }
            // Parent: None
            // Field count: 3
            pub mod CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
                pub const pItem: usize = 0x0; // C_EconItemView*
                pub const team: usize = 0x8; // uint16
                pub const slot: usize = 0xA; // uint16
            }
            // Parent: CEntityComponent
            // Field count: 84
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CLightComponent {
                pub const __m_pChainEntity: usize = 0x38; // CNetworkVarChainer
                pub const m_Color: usize = 0x78; // Color
                pub const m_SecondaryColor: usize = 0x7C; // Color
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
                pub const m_bAmbientOcclusionProxyOverride: usize = 0x1AC; // bool
                pub const m_hAmbientOcclusionProxyPosition0: usize = 0x1B0; // CHandle<C_BaseEntity>
                pub const m_hAmbientOcclusionProxyPosition1: usize = 0x1B4; // CHandle<C_BaseEntity>
                pub const m_hAmbientOcclusionProxyPosition2: usize = 0x1B8; // CHandle<C_BaseEntity>
                pub const m_hAmbientOcclusionProxyPosition3: usize = 0x1BC; // CHandle<C_BaseEntity>
                pub const m_flAmbientOcclusionProxyStrength0: usize = 0x1C0; // float32
                pub const m_flAmbientOcclusionProxyStrength1: usize = 0x1C4; // float32
                pub const m_flAmbientOcclusionProxyStrength2: usize = 0x1C8; // float32
                pub const m_flAmbientOcclusionProxyStrength3: usize = 0x1CC; // float32
                pub const m_flAmbientOcclusionProxyAmbientStrength: usize = 0x1D0; // float32
                pub const m_flAmbientOcclusionProxyConeAngle0: usize = 0x1D4; // float32
                pub const m_flAmbientOcclusionProxyConeAngle1: usize = 0x1D8; // float32
                pub const m_flAmbientOcclusionProxyConeAngle2: usize = 0x1DC; // float32
                pub const m_flAmbientOcclusionProxyConeAngle3: usize = 0x1E0; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod C_DecoyGrenade {
            }
            // Parent: None
            // Field count: 0
            pub mod C_WaterBullet {
            }
            // Parent: None
            // Field count: 5
            pub mod CCSPlayer_ActionTrackingServices {
                pub const m_hLastWeaponBeforeC4AutoSwitch: usize = 0x48; // CHandle<C_BasePlayerWeapon>
                pub const m_bIsRescuing: usize = 0x4C; // bool
                pub const m_weaponPurchasesThisMatch: usize = 0x50; // WeaponPurchaseTracker_t
                pub const m_weaponPurchasesThisRound: usize = 0xC0; // WeaponPurchaseTracker_t
                pub const m_weaponCarryOverIntoThisRound: usize = 0x130; // WeaponPurchaseTracker_t
            }
            // Parent: None
            // Field count: 0
            pub mod CBrokenGlassTrap {
            }
            // Parent: C_BaseEntity
            // Field count: 18
            pub mod C_EnvCubemap {
                pub const m_Entity_hCubemapTexture: usize = 0x800; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_bCustomCubemapTexture: usize = 0x808; // bool
                pub const m_Entity_flInfluenceRadius: usize = 0x80C; // float32
                pub const m_Entity_vBoxProjectMins: usize = 0x810; // Vector
                pub const m_Entity_vBoxProjectMaxs: usize = 0x81C; // Vector
                pub const m_Entity_bMoveable: usize = 0x828; // bool
                pub const m_Entity_nHandshake: usize = 0x82C; // int32
                pub const m_Entity_nEnvCubeMapArrayIndex: usize = 0x830; // int32
                pub const m_Entity_nPriority: usize = 0x834; // int32
                pub const m_Entity_flEdgeFadeDist: usize = 0x838; // float32
                pub const m_Entity_vEdgeFadeDists: usize = 0x83C; // Vector
                pub const m_Entity_flDiffuseScale: usize = 0x848; // float32
                pub const m_Entity_bStartDisabled: usize = 0x84C; // bool
                pub const m_Entity_bDefaultEnvMap: usize = 0x84D; // bool
                pub const m_Entity_bDefaultSpecEnvMap: usize = 0x84E; // bool
                pub const m_Entity_bIndoorCubeMap: usize = 0x84F; // bool
                pub const m_Entity_bCopyDiffuseFromDefaultCubemap: usize = 0x850; // bool
                pub const m_Entity_bEnabled: usize = 0x860; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod CCSObserver_MovementServices {
            }
            // Parent: CEntityComponent
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBodyComponent {
                pub const m_pSceneNode: usize = 0x8; // CGameSceneNode*
                pub const __m_pChainEntity: usize = 0x48; // CNetworkVarChainer
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_Method {
                pub const m_MethodName: usize = 0x80; // PulseSymbol_t
                pub const m_Description: usize = 0x90; // CUtlString
                pub const m_bIsPublic: usize = 0x98; // bool
                pub const m_Args: usize = 0xA0; // CUtlLeanVector<CPulseRuntimeMethodArg>
                pub const m_ReturnValues: usize = 0xB0; // CUtlLeanVector<CPulseRuntimeMethodArg>
            }
            // Parent: None
            // Field count: 6
            pub mod C_BaseCombatCharacter {
                pub const m_hMyWearables: usize = 0x11F0; // C_NetworkUtlVectorBase<CHandle<C_EconWearable>>
                pub const m_leftFootAttachment: usize = 0x1208; // AttachmentHandle_t
                pub const m_rightFootAttachment: usize = 0x1209; // AttachmentHandle_t
                pub const m_nWaterWakeMode: usize = 0x120C; // C_BaseCombatCharacter::WaterWakeMode_t
                pub const m_flWaterWorldZ: usize = 0x1210; // float32
                pub const m_flWaterNextTraceTime: usize = 0x1214; // float32
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CGlowProperty {
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
            }
            // Parent: C_BaseClientUIEntity
            // Field count: 2
            pub mod C_PointClientUIDialog {
                pub const m_hActivator: usize = 0x1050; // CHandle<C_BaseEntity>
                pub const m_bStartEnabled: usize = 0x1054; // bool
            }
            // Parent: C_SoundEventEntity
            // Field count: 0
            pub mod C_SoundEventMultiPointEntity {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseValue {
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponHKP2000 {
            }
            // Parent: C_BaseTrigger
            // Field count: 2
            pub mod C_FootstepControl {
                pub const m_source: usize = 0x1108; // CUtlSymbolLarge
                pub const m_destination: usize = 0x1110; // CUtlSymbolLarge
            }
            // Parent: C_BaseEntity
            // Field count: 8
            pub mod CCitadelSoundOpvarSetOBB {
                pub const m_iszStackName: usize = 0x798; // CUtlSymbolLarge
                pub const m_iszOperatorName: usize = 0x7A0; // CUtlSymbolLarge
                pub const m_iszOpvarName: usize = 0x7A8; // CUtlSymbolLarge
                pub const m_vDistanceInnerMins: usize = 0x7B0; // Vector
                pub const m_vDistanceInnerMaxs: usize = 0x7BC; // Vector
                pub const m_vDistanceOuterMins: usize = 0x7C8; // Vector
                pub const m_vDistanceOuterMaxs: usize = 0x7D4; // Vector
                pub const m_nAABBDirection: usize = 0x7E0; // int32
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_EndOfMatchLineupStart {
            }
            // Parent: None
            // Field count: 0
            pub mod CPlayer_WaterServices {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorCanvasItemSpecKV3
            pub mod CPulseCell_BooleanSwitchState {
                pub const m_Condition: usize = 0xD8; // CPulseObservableExpression<bool>
                pub const m_WhenTrue: usize = 0x168; // CPulse_OutflowConnection
                pub const m_WhenFalse: usize = 0x1B0; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 15
            pub mod CDamageRecord {
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
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VPhysicsCollisionAttribute_t {
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
            }
            // Parent: None
            // Field count: 0
            pub mod C_DynamicPropAlias_dynamic_prop {
            }
            // Parent: None
            // Field count: 0
            pub mod CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
            }
            // Parent: C_BarnLight
            // Field count: 3
            pub mod C_OmniLight {
                pub const m_flInnerAngle: usize = 0x1330; // float32
                pub const m_flOuterAngle: usize = 0x1334; // float32
                pub const m_bShowLight: usize = 0x1338; // bool
            }
            // Parent: None
            // Field count: 13
            pub mod C_SceneEntity {
                pub const m_bIsPlayingBack: usize = 0x788; // bool
                pub const m_bPaused: usize = 0x789; // bool
                pub const m_bMultiplayer: usize = 0x78A; // bool
                pub const m_bAutogenerated: usize = 0x78B; // bool
                pub const m_bAllRequirementsComplete: usize = 0x78C; // bool
                pub const m_flForceClientTime: usize = 0x790; // float32
                pub const m_nSceneStringIndex: usize = 0x794; // uint16
                pub const m_bClientOnly: usize = 0x796; // bool
                pub const m_hOwner: usize = 0x798; // CHandle<C_BaseModelEntity>
                pub const m_hActorList: usize = 0x7A0; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                pub const m_bWasPlaying: usize = 0x7B8; // bool
                pub const m_QueuedEvents: usize = 0x7C8; // CUtlVector<C_SceneEntity::QueuedEvents_t>
                pub const m_flCurrentTime: usize = 0x7E0; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_Yield {
                pub const m_UnyieldResume: usize = 0xD8; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 1
            pub mod C_NametagModule {
                pub const m_strNametagString: usize = 0x11F8; // CUtlString
            }
            // Parent: None
            // Field count: 20
            pub mod C_EconEntity {
                pub const m_flFlexDelayTime: usize = 0x1200; // float32
                pub const m_flFlexDelayedWeight: usize = 0x1208; // float32*
                pub const m_bAttributesInitialized: usize = 0x1210; // bool
                pub const m_AttributeManager: usize = 0x1218; // C_AttributeContainer
                pub const m_OriginalOwnerXuidLow: usize = 0x2730; // uint32
                pub const m_OriginalOwnerXuidHigh: usize = 0x2734; // uint32
                pub const m_nFallbackPaintKit: usize = 0x2738; // int32
                pub const m_nFallbackSeed: usize = 0x273C; // int32
                pub const m_flFallbackWear: usize = 0x2740; // float32
                pub const m_nFallbackStatTrak: usize = 0x2744; // int32
                pub const m_bClientside: usize = 0x2748; // bool
                pub const m_bParticleSystemsCreated: usize = 0x2749; // bool
                pub const m_vecAttachedParticles: usize = 0x2750; // CUtlVector<int32>
                pub const m_hViewmodelAttachment: usize = 0x2768; // CHandle<CBaseAnimGraph>
                pub const m_iOldTeam: usize = 0x276C; // int32
                pub const m_bAttachmentDirty: usize = 0x2770; // bool
                pub const m_nUnloadedModelIndex: usize = 0x2774; // int32
                pub const m_iNumOwnerValidationRetries: usize = 0x2778; // int32
                pub const m_hOldProvidee: usize = 0x2788; // CHandle<C_BaseEntity>
                pub const m_vecAttachedModels: usize = 0x2790; // CUtlVector<C_EconEntity::AttachedModelData_t>
            }
            // Parent: None
            // Field count: 0
            pub mod CPlayer_UseServices {
            }
            // Parent: C_BaseEntity
            // Field count: 25
            pub mod C_PointValueRemapper {
                pub const m_bDisabled: usize = 0x77C; // bool
                pub const m_bDisabledOld: usize = 0x77D; // bool
                pub const m_bUpdateOnClient: usize = 0x77E; // bool
                pub const m_nInputType: usize = 0x780; // ValueRemapperInputType_t
                pub const m_hRemapLineStart: usize = 0x784; // CHandle<C_BaseEntity>
                pub const m_hRemapLineEnd: usize = 0x788; // CHandle<C_BaseEntity>
                pub const m_flMaximumChangePerSecond: usize = 0x78C; // float32
                pub const m_flDisengageDistance: usize = 0x790; // float32
                pub const m_flEngageDistance: usize = 0x794; // float32
                pub const m_bRequiresUseKey: usize = 0x798; // bool
                pub const m_nOutputType: usize = 0x79C; // ValueRemapperOutputType_t
                pub const m_hOutputEntities: usize = 0x7A0; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                pub const m_nHapticsType: usize = 0x7B8; // ValueRemapperHapticsType_t
                pub const m_nMomentumType: usize = 0x7BC; // ValueRemapperMomentumType_t
                pub const m_flMomentumModifier: usize = 0x7C0; // float32
                pub const m_flSnapValue: usize = 0x7C4; // float32
                pub const m_flCurrentMomentum: usize = 0x7C8; // float32
                pub const m_nRatchetType: usize = 0x7CC; // ValueRemapperRatchetType_t
                pub const m_flRatchetOffset: usize = 0x7D0; // float32
                pub const m_flInputOffset: usize = 0x7D4; // float32
                pub const m_bEngaged: usize = 0x7D8; // bool
                pub const m_bFirstUpdate: usize = 0x7D9; // bool
                pub const m_flPreviousValue: usize = 0x7DC; // float32
                pub const m_flPreviousUpdateTickTime: usize = 0x7E0; // GameTime_t
                pub const m_vecPreviousTestPoint: usize = 0x7E4; // VectorWS
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CGameSceneNodeHandle {
                pub const m_hOwner: usize = 0x8; // CEntityHandle
                pub const m_name: usize = 0xC; // CUtlStringToken
            }
            // Parent: None
            // Field count: 1
            pub mod CPulseCell_Unknown {
                pub const m_UnknownKeys: usize = 0x48; // KeyValues3
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponMP7 {
            }
            // Parent: None
            // Field count: 13
            pub mod CSPerRoundStats_t {
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
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_CycleRandom {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Step_PublicOutput {
                pub const m_OutputIndex: usize = 0x48; // PulseRuntimeOutputIndex_t
            }
            // Parent: None
            // Field count: 0
            pub mod C_CS2HudModelBase {
            }
            // Parent: None
            // Field count: 98
            pub mod C_CSGameRules {
                pub const m_bFreezePeriod: usize = 0x39; // bool
                pub const m_bWarmupPeriod: usize = 0x3A; // bool
                pub const m_fWarmupPeriodEnd: usize = 0x3C; // GameTime_t
                pub const m_fWarmupPeriodStart: usize = 0x40; // GameTime_t
                pub const m_bTerroristTimeOutActive: usize = 0x44; // bool
                pub const m_bCTTimeOutActive: usize = 0x45; // bool
                pub const m_flTerroristTimeOutRemaining: usize = 0x48; // float32
                pub const m_flCTTimeOutRemaining: usize = 0x4C; // float32
                pub const m_nTerroristTimeOuts: usize = 0x50; // int32
                pub const m_nCTTimeOuts: usize = 0x54; // int32
                pub const m_bTechnicalTimeOut: usize = 0x58; // bool
                pub const m_bMatchWaitingForResume: usize = 0x59; // bool
                pub const m_iFreezeTime: usize = 0x5C; // int32
                pub const m_iRoundTime: usize = 0x60; // int32
                pub const m_fMatchStartTime: usize = 0x64; // float32
                pub const m_fRoundStartTime: usize = 0x68; // GameTime_t
                pub const m_flRestartRoundTime: usize = 0x6C; // GameTime_t
                pub const m_bGameRestart: usize = 0x70; // bool
                pub const m_flGameStartTime: usize = 0x74; // float32
                pub const m_timeUntilNextPhaseStarts: usize = 0x78; // float32
                pub const m_gamePhase: usize = 0x7C; // int32
                pub const m_totalRoundsPlayed: usize = 0x80; // int32
                pub const m_nRoundsPlayedThisPhase: usize = 0x84; // int32
                pub const m_nOvertimePlaying: usize = 0x88; // int32
                pub const m_iHostagesRemaining: usize = 0x8C; // int32
                pub const m_bAnyHostageReached: usize = 0x90; // bool
                pub const m_bMapHasBombTarget: usize = 0x91; // bool
                pub const m_bMapHasRescueZone: usize = 0x92; // bool
                pub const m_bMapHasBuyZone: usize = 0x93; // bool
                pub const m_bIsQueuedMatchmaking: usize = 0x94; // bool
                pub const m_nQueuedMatchmakingMode: usize = 0x98; // int32
                pub const m_bIsValveDS: usize = 0x9C; // bool
                pub const m_bLogoMap: usize = 0x9D; // bool
                pub const m_bPlayAllStepSoundsOnServer: usize = 0x9E; // bool
                pub const m_iSpectatorSlotCount: usize = 0xA0; // int32
                pub const m_MatchDevice: usize = 0xA4; // int32
                pub const m_bHasMatchStarted: usize = 0xA8; // bool
                pub const m_nNextMapInMapgroup: usize = 0xAC; // int32
                pub const m_szTournamentEventName: usize = 0xB0; // char[512]
                pub const m_szTournamentEventStage: usize = 0x2B0; // char[512]
                pub const m_szMatchStatTxt: usize = 0x4B0; // char[512]
                pub const m_szTournamentPredictionsTxt: usize = 0x6B0; // char[512]
                pub const m_nTournamentPredictionsPct: usize = 0x8B0; // int32
                pub const m_flCMMItemDropRevealStartTime: usize = 0x8B4; // GameTime_t
                pub const m_flCMMItemDropRevealEndTime: usize = 0x8B8; // GameTime_t
                pub const m_bIsDroppingItems: usize = 0x8BC; // bool
                pub const m_bIsQuestEligible: usize = 0x8BD; // bool
                pub const m_bIsHltvActive: usize = 0x8BE; // bool
                pub const m_bBombPlanted: usize = 0x8BF; // bool
                pub const m_arrProhibitedItemIndices: usize = 0x8C0; // uint16[100]
                pub const m_arrTournamentActiveCasterAccounts: usize = 0x988; // uint32[4]
                pub const m_numBestOfMaps: usize = 0x998; // int32
                pub const m_nHalloweenMaskListSeed: usize = 0x99C; // int32
                pub const m_bBombDropped: usize = 0x9A0; // bool
                pub const m_iRoundWinStatus: usize = 0x9A4; // int32
                pub const m_eRoundWinReason: usize = 0x9A8; // int32
                pub const m_bTCantBuy: usize = 0x9AC; // bool
                pub const m_bCTCantBuy: usize = 0x9AD; // bool
                pub const m_iMatchStats_RoundResults: usize = 0x9B0; // int32[30]
                pub const m_iMatchStats_PlayersAlive_CT: usize = 0xA28; // int32[30]
                pub const m_iMatchStats_PlayersAlive_T: usize = 0xAA0; // int32[30]
                pub const m_TeamRespawnWaveTimes: usize = 0xB18; // float32[32]
                pub const m_flNextRespawnWave: usize = 0xB98; // GameTime_t[32]
                pub const m_vMinimapMins: usize = 0xC18; // VectorWS
                pub const m_vMinimapMaxs: usize = 0xC24; // VectorWS
                pub const m_MinimapVerticalSectionHeights: usize = 0xC30; // float32[8]
                pub const m_ullLocalMatchID: usize = 0xC50; // uint64
                pub const m_nEndMatchMapGroupVoteTypes: usize = 0xC58; // int32[10]
                pub const m_nEndMatchMapGroupVoteOptions: usize = 0xC80; // int32[10]
                pub const m_nEndMatchMapVoteWinner: usize = 0xCA8; // int32
                pub const m_iNumConsecutiveCTLoses: usize = 0xCAC; // int32
                pub const m_iNumConsecutiveTerroristLoses: usize = 0xCB0; // int32
                pub const m_nMatchAbortedEarlyReason: usize = 0xD70; // int32
                pub const m_bHasTriggeredRoundStartMusic: usize = 0xD74; // bool
                pub const m_bSwitchingTeamsAtRoundReset: usize = 0xD75; // bool
                pub const m_pGameModeRules: usize = 0xD90; // CCSGameModeRules*
                pub const m_RetakeRules: usize = 0xD98; // C_RetakeGameRules
                pub const m_nMatchEndCount: usize = 0xEF0; // uint8
                pub const m_nTTeamIntroVariant: usize = 0xEF4; // int32
                pub const m_nCTTeamIntroVariant: usize = 0xEF8; // int32
                pub const m_bTeamIntroPeriod: usize = 0xEFC; // bool
                pub const m_iRoundEndWinnerTeam: usize = 0xF00; // int32
                pub const m_eRoundEndReason: usize = 0xF04; // int32
                pub const m_bRoundEndShowTimerDefend: usize = 0xF08; // bool
                pub const m_iRoundEndTimerTime: usize = 0xF0C; // int32
                pub const m_sRoundEndFunFactToken: usize = 0xF10; // CUtlString
                pub const m_iRoundEndFunFactPlayerSlot: usize = 0xF18; // CPlayerSlot
                pub const m_iRoundEndFunFactData1: usize = 0xF1C; // int32
                pub const m_iRoundEndFunFactData2: usize = 0xF20; // int32
                pub const m_iRoundEndFunFactData3: usize = 0xF24; // int32
                pub const m_sRoundEndMessage: usize = 0xF28; // CUtlString
                pub const m_iRoundEndPlayerCount: usize = 0xF30; // int32
                pub const m_bRoundEndNoMusic: usize = 0xF34; // bool
                pub const m_iRoundEndLegacy: usize = 0xF38; // int32
                pub const m_nRoundEndCount: usize = 0xF3C; // uint8
                pub const m_iRoundStartRoundNumber: usize = 0xF40; // int32
                pub const m_nRoundStartCount: usize = 0xF44; // uint8
                pub const m_flLastPerfSampleTime: usize = 0x4F50; // float64
            }
            // Parent: C_BaseModelEntity
            // Field count: 2
            pub mod CGrenadeTracer {
                pub const m_flTracerDuration: usize = 0x1038; // float32
                pub const m_nType: usize = 0x103C; // GrenadeType_t
            }
            // Parent: None
            // Field count: 0
            pub mod CCSGameModeRules_Noop {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_BlackboardReference {
                pub const m_hBlackboardResource: usize = 0x0; // CStrongHandle<InfoForResourceTypeIPulseGraphDef>
                pub const m_BlackboardResource: usize = 0x8; // PulseSymbol_t
                pub const m_nNodeID: usize = 0x18; // PulseDocNodeID_t
                pub const m_NodeName: usize = 0x20; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 16
            pub mod C_BaseCSGrenadeProjectile {
                pub const m_vInitialPosition: usize = 0x1238; // VectorWS
                pub const m_vInitialVelocity: usize = 0x1244; // Vector
                pub const m_nBounces: usize = 0x1250; // int32
                pub const m_nExplodeEffectIndex: usize = 0x1258; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_nExplodeEffectTickBegin: usize = 0x1260; // int32
                pub const m_vecExplodeEffectOrigin: usize = 0x1264; // VectorWS
                pub const m_flSpawnTime: usize = 0x1270; // GameTime_t
                pub const vecLastTrailLinePos: usize = 0x1274; // Vector
                pub const flNextTrailLineTime: usize = 0x1280; // GameTime_t
                pub const m_bExplodeEffectBegan: usize = 0x1284; // bool
                pub const m_bCanCreateGrenadeTrail: usize = 0x1285; // bool
                pub const m_nSnapshotTrajectoryEffectIndex: usize = 0x1288; // ParticleIndex_t
                pub const m_hSnapshotTrajectoryParticleSnapshot: usize = 0x1290; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                pub const m_arrTrajectoryTrailPoints: usize = 0x1298; // CUtlVector<Vector>
                pub const m_arrTrajectoryTrailPointCreationTimes: usize = 0x12B0; // CUtlVector<float32>
                pub const m_flTrajectoryTrailEffectCreationTime: usize = 0x12C8; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CCSGO_RushIntroCounterTerroristPosition {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_ReturnValues {
            }
            // Parent: C_BaseEntity
            // Field count: 16
            pub mod C_GradientFog {
                pub const m_hGradientFogTexture: usize = 0x780; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_flFogStartDistance: usize = 0x788; // float32
                pub const m_flFogEndDistance: usize = 0x78C; // float32
                pub const m_bHeightFogEnabled: usize = 0x790; // bool
                pub const m_flFogStartHeight: usize = 0x794; // float32
                pub const m_flFogEndHeight: usize = 0x798; // float32
                pub const m_flFarZ: usize = 0x79C; // float32
                pub const m_flFogMaxOpacity: usize = 0x7A0; // float32
                pub const m_flFogFalloffExponent: usize = 0x7A4; // float32
                pub const m_flFogVerticalExponent: usize = 0x7A8; // float32
                pub const m_fogColor: usize = 0x7AC; // Color
                pub const m_flFogStrength: usize = 0x7B0; // float32
                pub const m_flFadeTime: usize = 0x7B4; // float32
                pub const m_bStartDisabled: usize = 0x7B8; // bool
                pub const m_bIsEnabled: usize = 0x7B9; // bool
                pub const m_bGradientFogNeedsTextures: usize = 0x7BA; // bool
            }
            // Parent: None
            // Field count: 4
            pub mod CCSPlayerController_InGameMoneyServices {
                pub const m_iAccount: usize = 0x40; // int32
                pub const m_iStartAccount: usize = 0x44; // int32
                pub const m_iTotalCashSpent: usize = 0x48; // int32
                pub const m_iCashSpentThisRound: usize = 0x4C; // int32
            }
            // Parent: None
            // Field count: 6
            pub mod CCSPlayer_AimPunchServices {
                pub const m_predictableBaseTick: usize = 0x48; // GameTick_t
                pub const m_predictableBaseTickInterpAmount: usize = 0x4C; // float32
                pub const m_predictableBaseAngle: usize = 0x50; // QAngle
                pub const m_predictableBaseAngleVel: usize = 0x5C; // QAngle
                pub const m_unpredictableBaseTick: usize = 0xA0; // GameTick_t
                pub const m_unpredictableBaseAngle: usize = 0xA4; // QAngle
            }
            // Parent: None
            // Field count: 0
            pub mod C_HEGrenadeProjectile {
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterModel {
                pub const m_iFilterModel: usize = 0x7B0; // CUtlSymbolLarge
            }
            // Parent: C_SoundAreaEntityBase
            // Field count: 2
            pub mod C_SoundAreaEntityOrientedBox {
                pub const m_vMin: usize = 0x79C; // Vector
                pub const m_vMax: usize = 0x7A8; // Vector
            }
            // Parent: C_SoundOpvarSetPointBase
            // Field count: 0
            pub mod C_SoundOpvarSetPointEntity {
            }
            // Parent: C_BaseEntity
            // Field count: 2
            pub mod CPulseGameBlackboard {
                pub const m_strGraphName: usize = 0x788; // CUtlString
                pub const m_strStateBlob: usize = 0x790; // CUtlString
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CChoreoComponent {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
                pub const m_hOwner: usize = 0x30; // CHandle<C_BaseModelEntity>
                pub const m_nExernalChoreoGraphCount: usize = 0x34; // int32
                pub const m_sActiveExternalChoreoGraphSlotID: usize = 0x38; // CGlobalSymbol
                pub const m_nNextSceneEventId: usize = 0x70; // SceneEventId_t
                pub const m_flAllowResponsesEndTime: usize = 0x74; // GameTime_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            pub mod CPulseCell_Value_RandomInt {
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSWeaponBaseShotgun {
            }
            // Parent: None
            // Field count: 7
            pub mod C_RagdollPropAttached {
                pub const m_boneIndexAttached: usize = 0x1278; // uint32
                pub const m_ragdollAttachedObjectIndex: usize = 0x127C; // uint32
                pub const m_attachmentPointBoneSpace: usize = 0x1280; // Vector
                pub const m_attachmentPointRagdollSpace: usize = 0x128C; // Vector
                pub const m_vecOffset: usize = 0x1298; // Vector
                pub const m_parentTime: usize = 0x12A4; // float32
                pub const m_bHasParent: usize = 0x12A8; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod C_ModelPointEntity {
            }
            // Parent: C_CSPlayerPawn
            // Field count: 2
            pub mod C_CSGO_PreviewPlayer {
                pub const m_animgraphCharacterModeString: usize = 0x45B8; // CGlobalSymbol
                pub const m_flInitialModelScale: usize = 0x45C0; // float32
            }
            // Parent: C_BarnLight
            // Field count: 1
            pub mod C_RectLight {
                pub const m_bShowLight: usize = 0x1330; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 3
            pub mod CCSRadarElement {
                pub const m_nElementType: usize = 0x798; // uint32
                pub const m_nElementColor: usize = 0x79C; // uint32
                pub const m_nTeamFilter: usize = 0x7A0; // uint32
            }
            // Parent: C_BaseEntity
            // Field count: 3
            pub mod CPathSimple {
                pub const m_CPathQueryComponent: usize = 0x790; // CPathQueryComponent
                pub const m_pathString: usize = 0x880; // CUtlString
                pub const m_bClosedLoop: usize = 0x888; // bool
            }
            // Parent: None
            // Field count: 3
            pub mod C_FuncTrackTrain {
                pub const m_nLongAxis: usize = 0x1020; // int32
                pub const m_flRadius: usize = 0x1024; // float32
                pub const m_flLineLength: usize = 0x1028; // float32
            }
            // Parent: None
            // Field count: 2
            pub mod C_EconWearable {
                pub const m_nForceSkin: usize = 0x27A8; // int32
                pub const m_bAlwaysAllow: usize = 0x27AC; // bool
            }
            // Parent: C_BaseModelEntity
            // Field count: 9
            pub mod C_EnvDecal {
                pub const m_hDecalMaterial: usize = 0x1020; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_flWidth: usize = 0x1028; // float32
                pub const m_flHeight: usize = 0x102C; // float32
                pub const m_flDepth: usize = 0x1030; // float32
                pub const m_nRenderOrder: usize = 0x1034; // uint32
                pub const m_bProjectOnWorld: usize = 0x1038; // bool
                pub const m_bProjectOnCharacters: usize = 0x1039; // bool
                pub const m_bProjectOnWater: usize = 0x103A; // bool
                pub const m_flDepthSortBias: usize = 0x103C; // float32
            }
            // Parent: None
            // Field count: 2
            pub mod EntitySpottedState_t {
                pub const m_bSpotted: usize = 0x8; // bool
                pub const m_bSpottedByMask: usize = 0xC; // uint32[2]
            }
            // Parent: None
            // Field count: 25
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod fogparams_t {
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
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponM4A1 {
            }
            // Parent: None
            // Field count: 1
            pub mod C_Item {
                pub const m_pReticleHintTextName: usize = 0x27A8; // char[256]
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSPetPlacement {
            }
            // Parent: C_BaseModelEntity
            // Field count: 23
            pub mod C_Beam {
                pub const m_flFrameRate: usize = 0x1020; // float32
                pub const m_flHDRColorScale: usize = 0x1024; // float32
                pub const m_flFireTime: usize = 0x1028; // GameTime_t
                pub const m_flDamage: usize = 0x102C; // float32
                pub const m_nNumBeamEnts: usize = 0x1030; // uint8
                pub const m_queryHandleHalo: usize = 0x1034; // int32
                pub const m_hBaseMaterial: usize = 0x1058; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_nHaloIndex: usize = 0x1060; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_nBeamType: usize = 0x1068; // BeamType_t
                pub const m_nBeamFlags: usize = 0x106C; // uint32
                pub const m_hAttachEntity: usize = 0x1070; // CHandle<C_BaseEntity>[10]
                pub const m_nAttachIndex: usize = 0x1098; // AttachmentHandle_t[10]
                pub const m_fWidth: usize = 0x10A4; // float32
                pub const m_fEndWidth: usize = 0x10A8; // float32
                pub const m_fFadeLength: usize = 0x10AC; // float32
                pub const m_fHaloScale: usize = 0x10B0; // float32
                pub const m_fAmplitude: usize = 0x10B4; // float32
                pub const m_fStartFrame: usize = 0x10B8; // float32
                pub const m_fSpeed: usize = 0x10BC; // float32
                pub const m_flFrame: usize = 0x10C0; // float32
                pub const m_bTurnedOff: usize = 0x10C4; // bool
                pub const m_vecEndPos: usize = 0x10C8; // VectorWS
                pub const m_hEndEntity: usize = 0x10D4; // CHandle<C_BaseEntity>
            }
            // Parent: C_BaseEntity
            // Field count: 20
            pub mod C_EnvLightProbeVolume {
                pub const m_Entity_hLightProbeTexture_AmbientCube: usize = 0x818; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SDF: usize = 0x820; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_DC: usize = 0x828; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_L1: usize = 0x830; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightIndicesTexture: usize = 0x838; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightScalarsTexture: usize = 0x840; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightShadowsTexture: usize = 0x848; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_vBoxMins: usize = 0x850; // Vector
                pub const m_Entity_vBoxMaxs: usize = 0x85C; // Vector
                pub const m_Entity_bMoveable: usize = 0x868; // bool
                pub const m_Entity_nHandshake: usize = 0x86C; // int32
                pub const m_Entity_nPriority: usize = 0x870; // int32
                pub const m_Entity_bStartDisabled: usize = 0x874; // bool
                pub const m_Entity_nLightProbeSizeX: usize = 0x878; // int32
                pub const m_Entity_nLightProbeSizeY: usize = 0x87C; // int32
                pub const m_Entity_nLightProbeSizeZ: usize = 0x880; // int32
                pub const m_Entity_nLightProbeAtlasX: usize = 0x884; // int32
                pub const m_Entity_nLightProbeAtlasY: usize = 0x888; // int32
                pub const m_Entity_nLightProbeAtlasZ: usize = 0x88C; // int32
                pub const m_Entity_bEnabled: usize = 0x899; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataOverlayType
            // MVDataAssociatedFile
            pub mod CExplosionTypeData {
                pub const m_SoundName: usize = 0x0; // CSoundEventName
                pub const m_ParticleEffect: usize = 0x10; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                pub const m_bIsIncindiary: usize = 0xF0; // bool
                pub const m_bHasForces: usize = 0xF1; // bool
                pub const m_DecalType: usize = 0xF8; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 9
            pub mod C_FuncConveyor {
                pub const m_vecMoveDirEntitySpace: usize = 0x1028; // Vector
                pub const m_flTargetSpeed: usize = 0x1034; // float32
                pub const m_nTransitionStartTick: usize = 0x1038; // GameTick_t
                pub const m_nTransitionDurationTicks: usize = 0x103C; // int32
                pub const m_flTransitionStartSpeed: usize = 0x1040; // float32
                pub const m_flFrictionScale: usize = 0x1044; // float32
                pub const m_hConveyorModels: usize = 0x1048; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                pub const m_flCurrentConveyorOffset: usize = 0x1060; // float32
                pub const m_flCurrentConveyorSpeed: usize = 0x1064; // float32
            }
            // Parent: None
            // Field count: 5
            pub mod CCSPlayer_WeaponServices {
                pub const m_flNextAttack: usize = 0xD0; // GameTime_t
                pub const m_nOldTotalShootPositionHistoryCount: usize = 0xD4; // uint32
                pub const m_nOldTotalInputHistoryCount: usize = 0x370; // uint32
                pub const m_networkAnimTiming: usize = 0x15C0; // C_NetworkUtlVectorBase<uint8>
                pub const m_bBlockInspectUntilNextGraphUpdate: usize = 0x15D8; // bool
            }
            // Parent: None
            // Field count: 2
            pub mod C_PhysMagnet {
                pub const m_aAttachedObjectsFromServer: usize = 0x11F0; // CUtlVector<int32>
                pub const m_aAttachedObjects: usize = 0x1208; // CUtlVector<CHandle<C_BaseEntity>>
            }
            // Parent: None
            // Field count: 0
            pub mod CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
            }
            // Parent: None
            // Field count: 0
            pub mod C_Breakable {
            }
            // Parent: None
            // Field count: 29
            pub mod C_PlantedC4 {
                pub const m_bBombTicking: usize = 0x1210; // bool
                pub const m_nBombSite: usize = 0x1214; // int32
                pub const m_nSourceSoundscapeHash: usize = 0x1218; // int32
                pub const m_entitySpottedState: usize = 0x1220; // EntitySpottedState_t
                pub const m_flNextGlow: usize = 0x1238; // GameTime_t
                pub const m_flNextBeep: usize = 0x123C; // GameTime_t
                pub const m_flC4Blow: usize = 0x1240; // GameTime_t
                pub const m_bCannotBeDefused: usize = 0x1244; // bool
                pub const m_bHasExploded: usize = 0x1245; // bool
                pub const m_flTimerLength: usize = 0x1248; // float32
                pub const m_bBeingDefused: usize = 0x124C; // bool
                pub const m_bTriggerWarning: usize = 0x1250; // float32
                pub const m_bExplodeWarning: usize = 0x1254; // float32
                pub const m_bC4Activated: usize = 0x1258; // bool
                pub const m_bTenSecWarning: usize = 0x1259; // bool
                pub const m_flDefuseLength: usize = 0x125C; // float32
                pub const m_flDefuseCountDown: usize = 0x1260; // GameTime_t
                pub const m_bBombDefused: usize = 0x1264; // bool
                pub const m_hBombDefuser: usize = 0x1268; // CHandle<C_CSPlayerPawn>
                pub const m_AttributeManager: usize = 0x1270; // C_AttributeContainer
                pub const m_hDefuserMultimeter: usize = 0x2788; // CHandle<C_Multimeter>
                pub const m_flNextRadarFlashTime: usize = 0x278C; // GameTime_t
                pub const m_bRadarFlash: usize = 0x2790; // bool
                pub const m_pBombDefuser: usize = 0x2794; // CHandle<C_CSPlayerPawn>
                pub const m_fLastDefuseTime: usize = 0x2798; // GameTime_t
                pub const m_pPredictionOwner: usize = 0x27A0; // CBasePlayerController*
                pub const m_vecC4ExplodeSpectatePos: usize = 0x27A8; // VectorWS
                pub const m_vecC4ExplodeSpectateAng: usize = 0x27B4; // QAngle
                pub const m_flC4ExplodeSpectateDuration: usize = 0x27C0; // float32
            }
            // Parent: None
            // Field count: 4
            pub mod CCSCustomHudLayoutState {
                pub const m_playerSlot: usize = 0x30; // CPlayerSlot
                pub const m_bInputCaptureEnabled: usize = 0x34; // bool
                pub const m_vecHasClasses: usize = 0x38; // C_NetworkUtlVectorBase<HUDPanelHasClass_t>
                pub const m_vecDialogVariableStrings: usize = 0x50; // C_NetworkUtlVectorBase<HUDPanelDialogVariableString_t>
            }
            // Parent: None
            // Field count: 0
            pub mod CCSGO_WingmanIntroCharacterPosition {
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterName {
                pub const m_iFilterName: usize = 0x7B0; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 9
            pub mod C_RagdollProp {
                pub const m_ragEnabled: usize = 0x11F0; // C_NetworkUtlVectorBase<bool>
                pub const m_ragPos: usize = 0x1208; // C_NetworkUtlVectorBase<Vector>
                pub const m_ragAngles: usize = 0x1220; // C_NetworkUtlVectorBase<QAngle>
                pub const m_flBlendWeight: usize = 0x1238; // float32
                pub const m_hRagdollSource: usize = 0x123C; // CHandle<C_BaseEntity>
                pub const m_iEyeAttachment: usize = 0x1240; // AttachmentHandle_t
                pub const m_flBlendWeightCurrent: usize = 0x1244; // float32
                pub const m_parentPhysicsBoneIndices: usize = 0x1248; // CUtlVector<int32>
                pub const m_worldSpaceBoneComputationOrder: usize = 0x1260; // CUtlVector<int32>
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_CallInfo {
                pub const m_PortName: usize = 0x0; // PulseSymbol_t
                pub const m_nEditorNodeID: usize = 0x10; // PulseDocNodeID_t
                pub const m_RegisterMap: usize = 0x18; // PulseRegisterMap_t
                pub const m_CallMethodID: usize = 0x48; // PulseDocNodeID_t
                pub const m_nSrcChunk: usize = 0x4C; // PulseRuntimeChunkIndex_t
                pub const m_nSrcInstruction: usize = 0x50; // int32
                pub const m_nBreakDestChunk: usize = 0x54; // PulseRuntimeChunkIndex_t
                pub const m_nBreakDestInstruction: usize = 0x58; // int32
            }
            // Parent: None
            // Field count: 0
            pub mod C_MapPreviewParticleSystem {
            }
            // Parent: C_BaseModelEntity
            // Field count: 18
            pub mod CBaseAnimGraph {
                pub const m_graphControllerManager: usize = 0x1020; // CAnimGraphControllerManager
                pub const m_pMainGraphController: usize = 0x10B8; // CAnimGraphControllerPtr
                pub const m_bInitiallyPopulateInterpHistory: usize = 0x10C0; // bool
                pub const m_bSuppressAnimEventSounds: usize = 0x10C2; // bool
                pub const m_OnLayerCycleUpdated: usize = 0x10C8; // CEntityOutputTemplate<float32>
                pub const m_OnExternalChoreoGraphChanged: usize = 0x10E8; // CEntityIOOutput
                pub const m_bAnimGraphUpdateEnabled: usize = 0x1108; // bool
                pub const m_bAnimationUpdateScheduled: usize = 0x1109; // bool
                pub const m_vecForce: usize = 0x110C; // Vector
                pub const m_nForceBone: usize = 0x1118; // int32
                pub const m_pClientsideRagdoll: usize = 0x1120; // CBaseAnimGraph*
                pub const m_bBuiltRagdoll: usize = 0x1128; // bool
                pub const m_pRagdollControl: usize = 0x1138; // IPhysicsRagdollControl*
                pub const m_RagdollPose: usize = 0x1140; // PhysicsRagdollPose_t
                pub const m_bRagdollEnabled: usize = 0x1188; // bool
                pub const m_bRagdollClientSide: usize = 0x1189; // bool
                pub const m_bShouldUpdateTransformations: usize = 0x118A; // bool
                pub const m_bHasAnimatedMaterialAttributes: usize = 0x1198; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_InlineNodeSkipSelector {
                pub const m_nFlowNodeID: usize = 0x48; // PulseDocNodeID_t
                pub const m_bAnd: usize = 0x4C; // bool
                pub const m_PassOutflow: usize = 0x50; // PulseSelectorOutflowList_t
                pub const m_FailOutflow: usize = 0x68; // CPulse_OutflowConnection
            }
            // Parent: C_BaseModelEntity
            // Field count: 1
            pub mod C_LightEntity {
                pub const m_CLightComponent: usize = 0x1020; // CLightComponent*
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponM249 {
            }
            // Parent: None
            // Field count: 25
            pub mod C_LocalTempEntity {
                pub const flags: usize = 0x11F0; // int32
                pub const die: usize = 0x11F4; // GameTime_t
                pub const m_flFrameMax: usize = 0x11F8; // float32
                pub const x: usize = 0x11FC; // float32
                pub const y: usize = 0x1200; // float32
                pub const fadeSpeed: usize = 0x1204; // float32
                pub const bounceFactor: usize = 0x1208; // float32
                pub const hitSound: usize = 0x120C; // int32
                pub const priority: usize = 0x1210; // int32
                pub const tentOffset: usize = 0x1214; // Vector
                pub const m_vecTempEntAngVelocity: usize = 0x1220; // QAngle
                pub const tempent_renderamt: usize = 0x122C; // int32
                pub const m_vecNormal: usize = 0x1230; // Vector
                pub const m_flSpriteScale: usize = 0x123C; // float32
                pub const m_nFlickerFrame: usize = 0x1240; // int32
                pub const m_flFrameRate: usize = 0x1244; // float32
                pub const m_flFrame: usize = 0x1248; // float32
                pub const m_pszImpactEffect: usize = 0x1250; // char*
                pub const m_pszParticleEffect: usize = 0x1258; // char*
                pub const m_bParticleCollision: usize = 0x1260; // bool
                pub const m_iLastCollisionFrame: usize = 0x1264; // int32
                pub const m_vLastCollisionOrigin: usize = 0x1268; // VectorWS
                pub const m_vecTempEntVelocity: usize = 0x1274; // Vector
                pub const m_vecPrevAbsOrigin: usize = 0x1280; // VectorWS
                pub const m_vecTempEntAcceleration: usize = 0x128C; // Vector
            }
            // Parent: None
            // Field count: 2
            pub mod C_WeaponTaser {
                pub const m_fFireTime: usize = 0x2DCC; // GameTime_t
                pub const m_nLastAttackTick: usize = 0x2DD0; // int32
            }
            // Parent: C_BaseEntity
            // Field count: 0
            pub mod C_PointEntity {
            }
            // Parent: None
            // Field count: 0
            pub mod C_SingleplayRules {
            }
            // Parent: None
            // Field count: 0
            pub mod CLogicalEntity {
            }
            // Parent: None
            // Field count: 0
            pub mod C_PrecipitationBlocker {
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_CounterTerroristTeamIntroCamera {
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            pub mod C_SoundOpvarSetPathCornerEntity {
            }
            // Parent: None
            // Field count: 4
            pub mod CPlayer_WeaponServices {
                pub const m_hMyWeapons: usize = 0x48; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
                pub const m_hActiveWeapon: usize = 0x60; // CHandle<C_BasePlayerWeapon>
                pub const m_hLastWeapon: usize = 0x64; // CHandle<C_BasePlayerWeapon>
                pub const m_iAmmo: usize = 0x68; // uint16[32]
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponNegev {
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponFiveSeven {
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponSawedoff {
            }
            // Parent: None
            // Field count: 0
            pub mod C_TriggerVolume {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CPulseCell_LimitCount {
                pub const m_nLimitCount: usize = 0x48; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Step_CallExternalMethod {
                pub const m_MethodName: usize = 0xD8; // PulseSymbol_t
                pub const m_nBlackboardIndex: usize = 0xE8; // PulseRuntimeBlackboardReferenceIndex_t
                pub const m_ExpectedArgs: usize = 0xF0; // CUtlLeanVector<CPulseRuntimeMethodArg>
                pub const m_nAsyncCallMode: usize = 0x100; // PulseMethodCallMode_t
                pub const m_OnFinished: usize = 0x108; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponMP9 {
            }
            // Parent: None
            // Field count: 0
            pub mod C_DynamicPropAlias_prop_dynamic_override {
            }
            // Parent: None
            // Field count: 0
            pub mod CEnvSoundscapeTriggerable {
            }
            // Parent: None
            // Field count: 5
            pub mod C_PlayerPing {
                pub const m_hPlayer: usize = 0x7B0; // CHandle<C_CSPlayerPawn>
                pub const m_hPingedEntity: usize = 0x7B4; // CHandle<C_BaseEntity>
                pub const m_iType: usize = 0x7B8; // int32
                pub const m_bUrgent: usize = 0x7BC; // bool
                pub const m_szPlaceName: usize = 0x7BD; // char[18]
            }
            // Parent: None
            // Field count: 0
            pub mod C_AK47 {
            }
            // Parent: C_BaseEntity
            // Field count: 10
            pub mod C_CSGO_MapPreviewCameraPathNode {
                pub const m_szParentPathUniqueID: usize = 0x780; // CUtlSymbolLarge
                pub const m_nPathIndex: usize = 0x788; // int32
                pub const m_vInTangentLocal: usize = 0x78C; // Vector
                pub const m_vOutTangentLocal: usize = 0x798; // Vector
                pub const m_flFOV: usize = 0x7A4; // float32
                pub const m_flCameraSpeed: usize = 0x7A8; // float32
                pub const m_flEaseIn: usize = 0x7AC; // float32
                pub const m_flEaseOut: usize = 0x7B0; // float32
                pub const m_vInTangentWorld: usize = 0x7B4; // Vector
                pub const m_vOutTangentWorld: usize = 0x7C0; // Vector
            }
            // Parent: None
            // Field count: 10
            pub mod C_CSPlayerResource {
                pub const m_bHostageAlive: usize = 0x77C; // bool[12]
                pub const m_isHostageFollowingSomeone: usize = 0x788; // bool[12]
                pub const m_iHostageEntityIDs: usize = 0x794; // CEntityIndex[12]
                pub const m_bombsiteCenterA: usize = 0x7C4; // VectorWS
                pub const m_bombsiteCenterB: usize = 0x7D0; // VectorWS
                pub const m_hostageRescueX: usize = 0x7DC; // int32[4]
                pub const m_hostageRescueY: usize = 0x7EC; // int32[4]
                pub const m_hostageRescueZ: usize = 0x7FC; // int32[4]
                pub const m_bEndMatchNextMapAllVoted: usize = 0x80C; // bool
                pub const m_foundGoalPositions: usize = 0x80D; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 2
            pub mod CSkyboxReference {
                pub const m_worldGroupId: usize = 0x77C; // WorldGroupId_t
                pub const m_hSkyCamera: usize = 0x780; // CHandle<C_SkyCamera>
            }
            // Parent: None
            // Field count: 0
            pub mod C_IncendiaryGrenade {
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterClass {
                pub const m_iFilterClass: usize = 0x7B0; // CUtlSymbolLarge
            }
            // Parent: C_PointCamera
            // Field count: 1
            pub mod C_PointCameraVFOV {
                pub const m_flVerticalFOV: usize = 0x7E0; // float32
            }
            // Parent: C_BaseEntity
            // Field count: 26
            pub mod C_PointCamera {
                pub const m_FOV: usize = 0x77C; // float32
                pub const m_Resolution: usize = 0x780; // float32
                pub const m_bFogEnable: usize = 0x784; // bool
                pub const m_FogColor: usize = 0x788; // Color
                pub const m_flFogStart: usize = 0x78C; // float32
                pub const m_flFogEnd: usize = 0x790; // float32
                pub const m_flFogMaxDensity: usize = 0x794; // float32
                pub const m_bActive: usize = 0x798; // bool
                pub const m_bUseScreenAspectRatio: usize = 0x799; // bool
                pub const m_flAspectRatio: usize = 0x79C; // float32
                pub const m_bNoSky: usize = 0x7A0; // bool
                pub const m_fBrightness: usize = 0x7A4; // float32
                pub const m_flZFar: usize = 0x7A8; // float32
                pub const m_flZNear: usize = 0x7AC; // float32
                pub const m_bCanHLTVUse: usize = 0x7B0; // bool
                pub const m_bAlignWithParent: usize = 0x7B1; // bool
                pub const m_bDofEnabled: usize = 0x7B2; // bool
                pub const m_flDofNearBlurry: usize = 0x7B4; // float32
                pub const m_flDofNearCrisp: usize = 0x7B8; // float32
                pub const m_flDofFarCrisp: usize = 0x7BC; // float32
                pub const m_flDofFarBlurry: usize = 0x7C0; // float32
                pub const m_flDofTiltToGround: usize = 0x7C4; // float32
                pub const m_TargetFOV: usize = 0x7C8; // float32
                pub const m_DegreesPerSecond: usize = 0x7CC; // float32
                pub const m_bIsOn: usize = 0x7D0; // bool
                pub const m_pNext: usize = 0x7D8; // C_PointCamera*
            }
            // Parent: CPathSimple
            // Field count: 4
            pub mod CPathWithDynamicNodes {
                pub const m_vecPathNodes: usize = 0x890; // C_NetworkUtlVectorBase<CHandle<CPathNode>>
                pub const m_xInitialPathWorldToLocal: usize = 0x8B0; // CTransform
                pub const m_eDesiredDirection: usize = 0x8D0; // DirectionAlongSimplePath_t
                pub const m_bIgnoreParentRotation: usize = 0x8D4; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 3
            pub mod CBaseFilter {
                pub const m_bNegated: usize = 0x77C; // bool
                pub const m_OnPass: usize = 0x780; // CEntityIOOutput
                pub const m_OnFail: usize = 0x798; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 1
            pub mod WeaponPurchaseTracker_t {
                pub const m_weaponPurchases: usize = 0x8; // C_UtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
            }
            // Parent: C_PointEntity
            // Field count: 15
            pub mod CMapInfo {
                pub const m_iBuyingStatus: usize = 0x77C; // int32
                pub const m_flBombRadius: usize = 0x780; // float32
                pub const m_iPetPopulation: usize = 0x784; // int32
                pub const m_bUseNormalSpawnsForDM: usize = 0x788; // bool
                pub const m_bDisableAutoGeneratedDMSpawns: usize = 0x789; // bool
                pub const m_flBotMaxVisionDistance: usize = 0x78C; // float32
                pub const m_iHostageCount: usize = 0x790; // int32
                pub const m_bFadePlayerVisibilityFarZ: usize = 0x794; // bool
                pub const m_bRainTraceToSkyEnabled: usize = 0x795; // bool
                pub const m_bGPUCullSkybox: usize = 0x796; // bool
                pub const m_flEnvRainStrength: usize = 0x798; // float32
                pub const m_flEnvPuddleRippleStrength: usize = 0x79C; // float32
                pub const m_flEnvPuddleRippleDirection: usize = 0x7A0; // float32
                pub const m_flEnvWetnessCoverage: usize = 0x7A4; // float32
                pub const m_flEnvWetnessDryingAmount: usize = 0x7A8; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_EndOfMatchCamera {
            }
            // Parent: CBaseAnimGraph
            // Field count: 12
            pub mod C_BaseGrenade {
                pub const m_bHasWarnedAI: usize = 0x11F0; // bool
                pub const m_bIsSmokeGrenade: usize = 0x11F1; // bool
                pub const m_bIsLive: usize = 0x11F2; // bool
                pub const m_DmgRadius: usize = 0x11F4; // float32
                pub const m_flDetonateTime: usize = 0x11F8; // GameTime_t
                pub const m_flWarnAITime: usize = 0x11FC; // float32
                pub const m_flDamage: usize = 0x1200; // float32
                pub const m_iszBounceSound: usize = 0x1208; // CUtlSymbolLarge
                pub const m_ExplosionSound: usize = 0x1210; // CUtlString
                pub const m_hThrower: usize = 0x1218; // CHandle<C_CSPlayerPawn>
                pub const m_flNextAttack: usize = 0x1230; // GameTime_t
                pub const m_hOriginalThrower: usize = 0x1234; // CHandle<C_CSPlayerPawn>
            }
            // Parent: None
            // Field count: 16
            pub mod C_PlayerSprayDecal {
                pub const m_nUniqueID: usize = 0x1020; // int32
                pub const m_unAccountID: usize = 0x1024; // uint32
                pub const m_unTraceID: usize = 0x1028; // uint32
                pub const m_rtGcTime: usize = 0x102C; // uint32
                pub const m_vecEndPos: usize = 0x1030; // VectorWS
                pub const m_vecStart: usize = 0x103C; // VectorWS
                pub const m_vecLeft: usize = 0x1048; // Vector
                pub const m_vecNormal: usize = 0x1054; // Vector
                pub const m_nPlayer: usize = 0x1060; // int32
                pub const m_nEntity: usize = 0x1064; // int32
                pub const m_nHitbox: usize = 0x1068; // int32
                pub const m_flCreationTime: usize = 0x106C; // float32
                pub const m_nTintID: usize = 0x1070; // int32
                pub const m_nVersion: usize = 0x1074; // uint8
                pub const m_ubSignature: usize = 0x1075; // uint8[128]
                pub const m_SprayRenderHelper: usize = 0x1100; // CPlayerSprayDecalRenderHelper
            }
            // Parent: None
            // Field count: 1
            pub mod CPulseCell_LimitCount__Criteria_t {
                pub const m_bLimitCountPasses: usize = 0x0; // bool
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CEntityIdentity {
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
            }
            // Parent: None
            // Field count: 0
            pub mod C_CS2HudModelArms {
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBasePlayerVData {
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
            }
            // Parent: None
            // Field count: 0
            pub mod C_LightSpotEntity {
            }
            // Parent: None
            // Field count: 3
            pub mod CCSGameModeRules_Deathmatch {
                pub const m_flDMBonusStartTime: usize = 0x30; // GameTime_t
                pub const m_flDMBonusTimeLength: usize = 0x34; // float32
                pub const m_sDMBonusWeapon: usize = 0x38; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            pub mod CPulseCell_CursorQueue {
                pub const m_nCursorsAllowedToRunParallel: usize = 0x128; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            pub mod CPulseCell_Value_RandomFloat {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseExecCursor {
            }
            // Parent: C_BaseModelEntity
            // Field count: 24
            pub mod C_Sprite {
                pub const m_hSpriteMaterial: usize = 0x1020; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_hAttachedToEntity: usize = 0x1028; // CHandle<C_BaseEntity>
                pub const m_nAttachment: usize = 0x102C; // AttachmentHandle_t
                pub const m_flSpriteFramerate: usize = 0x1030; // float32
                pub const m_flFrame: usize = 0x1034; // float32
                pub const m_flDieTime: usize = 0x1038; // GameTime_t
                pub const m_nBrightness: usize = 0x1048; // uint32
                pub const m_flBrightnessDuration: usize = 0x104C; // float32
                pub const m_flSpriteScale: usize = 0x1050; // float32
                pub const m_flScaleDuration: usize = 0x1054; // float32
                pub const m_bWorldSpaceScale: usize = 0x1058; // bool
                pub const m_flGlowProxySize: usize = 0x105C; // float32
                pub const m_flHDRColorScale: usize = 0x1060; // float32
                pub const m_flLastTime: usize = 0x1064; // GameTime_t
                pub const m_flMaxFrame: usize = 0x1068; // float32
                pub const m_flStartScale: usize = 0x106C; // float32
                pub const m_flDestScale: usize = 0x1070; // float32
                pub const m_flScaleTimeStart: usize = 0x1074; // GameTime_t
                pub const m_nStartBrightness: usize = 0x1078; // int32
                pub const m_nDestBrightness: usize = 0x107C; // int32
                pub const m_flBrightnessTimeStart: usize = 0x1080; // GameTime_t
                pub const m_nSpriteWidth: usize = 0x1090; // int32
                pub const m_nSpriteHeight: usize = 0x1094; // int32
                pub const m_flSpeed: usize = 0x1098; // float32
            }
            // Parent: C_BaseEntity
            // Field count: 2
            pub mod C_CsmFovOverride {
                pub const m_cameraName: usize = 0x780; // CUtlString
                pub const m_flCsmFovOverrideValue: usize = 0x788; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponGlock {
            }
            // Parent: None
            // Field count: 1
            pub mod C_PhysicsProp {
                pub const m_bAwake: usize = 0x1358; // bool
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterTeam {
                pub const m_iFilterTeam: usize = 0x7B0; // int32
            }
            // Parent: None
            // Field count: 33
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBasePlayerWeaponVData {
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
                pub const m_bShouldAnimateInWorld: usize = 0x4C5; // bool
                pub const m_bLinkedCooldowns: usize = 0x4C6; // bool
                pub const m_iFlags: usize = 0x4C7; // ItemFlagTypes_t
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
            }
            // Parent: None
            // Field count: 0
            pub mod C_SmokeGrenade {
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel {
            }
            // Parent: None
            // Field count: 0
            pub mod CCSGO_RushIntroCharacterPosition {
            }
            // Parent: None
            // Field count: 0
            pub mod CInfoParticleTarget {
            }
            // Parent: None
            // Field count: 0
            pub mod CCSPlayer_DamageReactServices {
            }
            // Parent: C_BaseClientUIEntity
            // Field count: 31
            pub mod C_PointClientUIWorldPanel {
                pub const m_bForceRecreateNextUpdate: usize = 0x1058; // bool
                pub const m_bMoveViewToPlayerNextThink: usize = 0x1059; // bool
                pub const m_bCheckCSSClasses: usize = 0x105A; // bool
                pub const m_anchorDeltaTransform: usize = 0x1060; // CTransform
                pub const m_pOffScreenIndicator: usize = 0x11E8; // CPointOffScreenIndicatorUi*
                pub const m_bIgnoreInput: usize = 0x1210; // bool
                pub const m_bLit: usize = 0x1211; // bool
                pub const m_bFollowPlayerAcrossTeleport: usize = 0x1212; // bool
                pub const m_flWidth: usize = 0x1214; // float32
                pub const m_flHeight: usize = 0x1218; // float32
                pub const m_flDPI: usize = 0x121C; // float32
                pub const m_flWindowUIScale: usize = 0x1220; // float32
                pub const m_flInteractDistance: usize = 0x1224; // float32
                pub const m_flDepthOffset: usize = 0x1228; // float32
                pub const m_unOwnerContext: usize = 0x122C; // uint32
                pub const m_unHorizontalAlign: usize = 0x1230; // uint32
                pub const m_unVerticalAlign: usize = 0x1234; // uint32
                pub const m_unOrientation: usize = 0x1238; // uint32
                pub const m_bAllowInteractionFromAllSceneWorlds: usize = 0x123C; // bool
                pub const m_vecCSSClasses: usize = 0x1240; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
                pub const m_bOpaque: usize = 0x1258; // bool
                pub const m_bNoDepth: usize = 0x1259; // bool
                pub const m_bVisibleWhenParentNoDraw: usize = 0x125A; // bool
                pub const m_bRenderBackface: usize = 0x125B; // bool
                pub const m_bUseOffScreenIndicator: usize = 0x125C; // bool
                pub const m_bExcludeFromSaveGames: usize = 0x125D; // bool
                pub const m_bGrabbable: usize = 0x125E; // bool
                pub const m_bOnlyRenderToTexture: usize = 0x125F; // bool
                pub const m_bDisableMipGen: usize = 0x1260; // bool
                pub const m_nExplicitImageLayout: usize = 0x1264; // int32
                pub const m_bIgnoreParentOrientation: usize = 0x1268; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 3
            pub mod C_EntityFlame {
                pub const m_hEntAttached: usize = 0x77C; // CHandle<C_BaseEntity>
                pub const m_hOldAttached: usize = 0x7A0; // CHandle<C_BaseEntity>
                pub const m_bCheapEffect: usize = 0x7A4; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod CBaseAnimGraphAlias_baseanimating {
            }
            // Parent: C_BaseEntity
            // Field count: 17
            pub mod CBasePlayerController {
                pub const m_CommandContext: usize = 0x788; // C_CommandContext
                pub const m_nInButtonsWhichAreToggles: usize = 0x830; // uint64
                pub const m_nTickBase: usize = 0x838; // uint32
                pub const m_hPawn: usize = 0x83C; // CHandle<C_BasePlayerPawn>
                pub const m_bKnownTeamMismatch: usize = 0x840; // bool
                pub const m_hPredictedPawn: usize = 0x844; // CHandle<C_BasePlayerPawn>
                pub const m_nSplitScreenSlot: usize = 0x84C; // CSplitScreenSlot
                pub const m_hSplitOwner: usize = 0x850; // CHandle<CBasePlayerController>
                pub const m_hSplitScreenPlayers: usize = 0x858; // CUtlVector<CHandle<CBasePlayerController>>
                pub const m_bIsHLTV: usize = 0x870; // bool
                pub const m_iConnected: usize = 0x874; // PlayerConnectedState
                pub const m_iMostConnected: usize = 0x878; // PlayerConnectedState
                pub const m_iszPlayerName: usize = 0x87C; // char[128]
                pub const m_steamID: usize = 0x908; // uint64
                pub const m_bIsLocalPlayerController: usize = 0x910; // bool
                pub const m_bNoClipEnabled: usize = 0x911; // bool
                pub const m_iDesiredFOV: usize = 0x914; // uint32
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_EndOfMatchLineupEndpoint {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyElementNameFn
            pub mod GeneratedTextureHandle_t {
                pub const m_strBitmapName: usize = 0x0; // CUtlString
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub mod CompositeMaterialInputContainer_t {
                pub const m_bEnabled: usize = 0x0; // bool
                pub const m_nCompositeMaterialInputContainerSourceType: usize = 0x4; // CompositeMaterialInputContainerSourceType_t
                pub const m_strSpecificContainerMaterial: usize = 0x8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIMaterial2>>
                pub const m_strAttrName: usize = 0xE8; // CUtlString
                pub const m_strAlias: usize = 0xF0; // CUtlString
                pub const m_vecLooseVariables: usize = 0xF8; // CUtlVector<CompositeMaterialInputLooseVariable_t>
                pub const m_strAttrNameForVar: usize = 0x110; // CUtlString
                pub const m_bExposeExternally: usize = 0x118; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub mod CompositeMaterialAssemblyProcedure_t {
                pub const m_vecCompMatIncludes: usize = 0x0; // CUtlVector<CResourceNameTyped<CWeakHandle<InfoForResourceTypeCCompositeMaterialKit>>>
                pub const m_vecMatchFilters: usize = 0x18; // CUtlVector<CompositeMaterialMatchFilter_t>
                pub const m_vecCompositeInputContainers: usize = 0x30; // CUtlVector<CompositeMaterialInputContainer_t>
                pub const m_vecPropertyMutators: usize = 0x48; // CUtlVector<CompMatPropertyMutator_t>
            }
            // Parent: None
            // Field count: 37
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub mod CompositeMaterialInputLooseVariable_t {
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
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod screenshake_t {
                pub const endtime: usize = 0x0; // GameTime_t
                pub const duration: usize = 0x4; // float32
                pub const amplitude: usize = 0x8; // float32
                pub const frequency: usize = 0xC; // float32
                pub const nextShake: usize = 0x10; // GameTime_t
                pub const offset: usize = 0x14; // Vector
                pub const angle: usize = 0x20; // float32
                pub const direction: usize = 0x28; // Vector
                pub const nShakeType: usize = 0x34; // uint8
            }
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CCS2UIPawnGraphController {
                pub const m_nAnimationSeed: usize = 0xC0; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_characterMode: usize = 0xD8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_bCharacterModeReset: usize = 0xF0; // CAnimGraph2ParamOptionalRef<bool>
                pub const m_nTeamPreviewVariant: usize = 0x108; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_nTeamPreviewRandom: usize = 0x120; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_nTeamPreviewPosition: usize = 0x138; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_endOfMatchCelebration: usize = 0x150; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_action: usize = 0x168; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_bannerAnimation: usize = 0x180; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_weaponCategory: usize = 0x198; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_weaponType: usize = 0x1B0; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_weaponState: usize = 0x1C8; // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                pub const m_inspectTurnAngle: usize = 0x1E0; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_nChickSnapshotVariant: usize = 0x1F8; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_nChickLifeStage: usize = 0x210; // CAnimGraph2ParamOptionalRef<float32>
                pub const m_bCT: usize = 0x228; // CAnimGraph2ParamOptionalRef<bool>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod inv_image_light_barn_t {
                pub const color: usize = 0x0; // Vector
                pub const angle: usize = 0xC; // QAngle
                pub const brightness: usize = 0x18; // float32
                pub const orbit_distance: usize = 0x1C; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod inv_image_map_t {
                pub const map_name: usize = 0x0; // CUtlString
                pub const map_rotation: usize = 0x8; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod inv_image_light_fill_t {
                pub const color: usize = 0x0; // Vector
                pub const angle: usize = 0xC; // QAngle
                pub const brightness: usize = 0x18; // float32
            }
            // Parent: None
            // Field count: 5
            pub mod CInterpolatedValue {
                pub const m_flStartTime: usize = 0x0; // float32
                pub const m_flEndTime: usize = 0x4; // float32
                pub const m_flStartValue: usize = 0x8; // float32
                pub const m_flEndValue: usize = 0xC; // float32
                pub const m_nInterpType: usize = 0x10; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod inv_image_item_t {
                pub const position: usize = 0x0; // Vector
                pub const angle: usize = 0xC; // QAngle
                pub const pose_sequence: usize = 0x18; // CUtlString
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod TimedEvent {
                pub const m_TimeBetweenEvents: usize = 0x0; // float32
                pub const m_fNextEvent: usize = 0x4; // float32
            }
            // Parent: None
            // Field count: 13
            pub mod CFlashlightEffect {
                pub const m_bIsOn: usize = 0x8; // bool
                pub const m_bMuzzleFlashEnabled: usize = 0x18; // bool
                pub const m_flMuzzleFlashBrightness: usize = 0x1C; // float32
                pub const m_quatMuzzleFlashOrientation: usize = 0x20; // Quaternion
                pub const m_vecMuzzleFlashOrigin: usize = 0x30; // VectorWS
                pub const m_flFov: usize = 0x3C; // float32
                pub const m_flFarZ: usize = 0x40; // float32
                pub const m_flLinearAtten: usize = 0x44; // float32
                pub const m_bCastsShadows: usize = 0x48; // bool
                pub const m_flCurrentPullBackDist: usize = 0x4C; // float32
                pub const m_FlashlightTexture: usize = 0x50; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_MuzzleFlashTexture: usize = 0x58; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_textureName: usize = 0x60; // char[64]
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod inv_image_camera_t {
                pub const angle: usize = 0x0; // QAngle
                pub const fov_h: usize = 0xC; // float32
                pub const fov_v: usize = 0x10; // float32
                pub const znear: usize = 0x14; // float32
                pub const zfar: usize = 0x18; // float32
                pub const target: usize = 0x1C; // Vector
                pub const target_nudge: usize = 0x28; // Vector
                pub const orbit_distance: usize = 0x34; // float32
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
            pub mod CInventoryImageData {
                pub const m_nNodeType: usize = 0x0; // InventoryNodeType_t
                pub const name: usize = 0x8; // CUtlString
                pub const inventory_image_data: usize = 0x10; // inv_image_data_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod inv_image_clearcolor_t {
                pub const color: usize = 0x0; // Vector
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod C_CommandContext {
                pub const needsprocessing: usize = 0x0; // bool
                pub const command_number: usize = 0xA0; // int32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CompositeMaterialEditorPoint_t {
                pub const m_ModelName: usize = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_nSequenceIndex: usize = 0xE0; // int32
                pub const m_flCycle: usize = 0xE4; // float32
                pub const m_KVModelStateChoices: usize = 0xE8; // KeyValues3
                pub const m_bEnableChildModel: usize = 0xF8; // bool
                pub const m_ChildModelName: usize = 0x100; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_vecCompositeMaterialAssemblyProcedures: usize = 0x1E0; // CUtlVector<CompositeMaterialAssemblyProcedure_t>
                pub const m_vecCompositeMaterials: usize = 0x1F8; // CUtlVector<CompositeMaterial_t>
            }
            // Parent: None
            // Field count: 0
            pub mod CPlayerSprayDecalRenderHelper {
            }
            // Parent: None
            // Field count: 13
            pub mod C_IronSightController {
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
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub mod CompMatMutatorCondition_t {
                pub const m_nMutatorCondition: usize = 0x0; // CompMatPropertyMutatorConditionType_t
                pub const m_strMutatorConditionContainerName: usize = 0x8; // CUtlString
                pub const m_strMutatorConditionContainerVarName: usize = 0x10; // CUtlString
                pub const m_strMutatorConditionContainerVarValue: usize = 0x18; // CUtlString
                pub const m_bPassWhenTrue: usize = 0x20; // bool
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod inv_image_data_t {
                pub const map: usize = 0x0; // inv_image_map_t
                pub const item: usize = 0x10; // inv_image_item_t
                pub const camera: usize = 0x30; // inv_image_camera_t
                pub const lightsun: usize = 0x68; // inv_image_light_sun_t
                pub const lightfill: usize = 0x84; // inv_image_light_fill_t
                pub const light0: usize = 0xA0; // inv_image_light_barn_t
                pub const light1: usize = 0xC0; // inv_image_light_barn_t
                pub const clearcolor: usize = 0xE0; // inv_image_clearcolor_t
            }
            // Parent: None
            // Field count: 29
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub mod CompMatPropertyMutator_t {
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
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CCompositeMaterialEditorDoc {
                pub const m_nVersion: usize = 0x8; // int32
                pub const m_Points: usize = 0x10; // CUtlVector<CompositeMaterialEditorPoint_t>
                pub const m_KVthumbnail: usize = 0x28; // KeyValues3
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CClientAlphaProperty {
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
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod screenfade_t {
                pub const Speed: usize = 0x0; // float32
                pub const End: usize = 0x4; // float32
                pub const Reset: usize = 0x8; // float32
                pub const m_Color: usize = 0xC; // Color
                pub const Flags: usize = 0x10; // int32
            }
            // Parent: None
            // Field count: 43
            pub mod CGlobalLightBase {
                pub const m_bSpotLight: usize = 0x10; // bool
                pub const m_SpotLightOrigin: usize = 0x14; // VectorWS
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
                pub const m_LightColor: usize = 0x6C; // Color
                pub const m_AmbientColor1: usize = 0x70; // Color
                pub const m_AmbientColor2: usize = 0x74; // Color
                pub const m_AmbientColor3: usize = 0x78; // Color
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
                pub const m_ViewOrigin: usize = 0xD4; // VectorWS
                pub const m_ViewAngles: usize = 0xE0; // QAngle
                pub const m_flViewFoV: usize = 0xEC; // float32
                pub const m_WorldPoints: usize = 0xF0; // VectorWS[8]
                pub const m_vFogOffsetLayer0: usize = 0x4A8; // Vector2D
                pub const m_vFogOffsetLayer1: usize = 0x4B0; // Vector2D
                pub const m_hEnvWind: usize = 0x4B8; // CHandle<C_BaseEntity>
                pub const m_hEnvSky: usize = 0x4BC; // CHandle<C_BaseEntity>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod IClientAlphaProperty {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod inv_image_light_sun_t {
                pub const color: usize = 0x0; // Vector
                pub const angle: usize = 0xC; // QAngle
                pub const brightness: usize = 0x18; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub mod CompositeMaterialMatchFilter_t {
                pub const m_nCompositeMaterialMatchFilterType: usize = 0x0; // CompositeMaterialMatchFilterType_t
                pub const m_strMatchFilter: usize = 0x8; // CUtlString
                pub const m_strMatchValue: usize = 0x10; // CUtlString
                pub const m_bPassWhenTrue: usize = 0x18; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MPropertyElementNameFn
            pub mod CompositeMaterial_t {
                pub const m_TargetKVs: usize = 0x8; // KeyValues3
                pub const m_PreGenerationKVs: usize = 0x18; // KeyValues3
                pub const m_FinalKVs: usize = 0x58; // KeyValues3
                pub const m_vecGeneratedTextures: usize = 0x80; // CUtlVector<GeneratedTextureHandle_t>
            }
        }
    }
}
