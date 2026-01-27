// Generated using https://github.com/a2x/cs2-dumper
// 2026-01-27 02:36:48.265997500 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: soundsystem.dll
        // Class count: 127
        // Enum count: 19
        pub mod soundsystem_dll {
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum EMode_t {
                Peak = 0x0,
                RMS = 0x1
            }
            // Alignment: 4
            // Member count: 39
            #[repr(u32)]
            pub enum VMixGraphCommandID_t {
                CMD_INVALID = u32::MAX,
                CMD_CONTROL_INPUT_STORE = 0x1,
                CMD_CONTROL_INPUT_STORE_DB = 0x2,
                CMD_CONTROL_TRANSIENT_INPUT_STORE = 0x3,
                CMD_CONTROL_TRANSIENT_INPUT_RESET = 0x4,
                CMD_CONTROL_OUTPUT_STORE = 0x5,
                CMD_CONTROL_EVALUATE_CURVE = 0x6,
                CMD_CONTROL_COPY = 0x7,
                CMD_CONTROL_COND_COPY_IF_NEGATIVE = 0x8,
                CMD_CONTROL_REMAP_LINEAR = 0x9,
                CMD_CONTROL_REMAP_SINE = 0xA,
                CMD_CONTROL_REMAP_LOGLINEAR = 0xB,
                CMD_CONTROL_MAX = 0xC,
                CMD_CONTROL_RESET_TIMER = 0xD,
                CMD_CONTROL_INCREMENT_TIMER = 0xE,
                CMD_CONTROL_EVAL_ENVELOPE = 0xF,
                CMD_CONTROL_SINE_BLEND = 0x10,
                CMD_PROCESSOR_SET_CONTROL_VALUE = 0x11,
                CMD_PROCESSOR_SET_NAME_INPUT = 0x12,
                CMD_PROCESSOR_SET_CONTROL_ARRAYVALUE = 0x13,
                CMD_PROCESSOR_STORE_CONTROL_VALUE = 0x14,
                CMD_PROCESSOR_SET_VSND_VALUE = 0x15,
                CMD_SUBMIX_PROCESS = 0x16,
                CMD_SUBMIX_GENERATE = 0x17,
                CMD_SUBMIX_GENERATE_SIDECHAIN = 0x18,
                CMD_SUBMIX_DEBUG = 0x19,
                CMD_SUBMIX_MIX2x1 = 0x1A,
                CMD_SUBMIX_OUTPUT = 0x1B,
                CMD_SUBMIX_OUTPUTx2 = 0x1C,
                CMD_SUBMIX_COPY = 0x1D,
                CMD_SUBMIX_ACCUMULATE = 0x1E,
                CMD_SUBMIX_METER = 0x1F,
                CMD_SUBMIX_METER_SPECTRUM = 0x20,
                CMD_IMPULSERESPONSE_INPUT_STORE = 0x21,
                CMD_PROCESSOR_SET_IMPULSERESPONSE_VALUE = 0x22,
                CMD_REMAP_VSND_TO_IMPULSERESPONSE = 0x23,
                CMD_IMPULSERESPONSE_RESET = 0x24,
                CMD_BLEND_VSNDS_TO_IMPULSERESPONSE = 0x25,
                CMD_IMPULSERESPONSE_DELAY = 0x26
            }
            // Alignment: 1
            // Member count: 5
            #[repr(u8)]
            pub enum EWaveform {
                Sine = 0x0,
                Square = 0x1,
                Saw = 0x2,
                Triangle = 0x3,
                Noise = 0x4
            }
            // Alignment: 4
            // Member count: 5
            #[repr(u32)]
            pub enum VMixLFOShape_t {
                LFO_SHAPE_SINE = 0x0,
                LFO_SHAPE_SQUARE = 0x1,
                LFO_SHAPE_TRI = 0x2,
                LFO_SHAPE_SAW = 0x3,
                LFO_SHAPE_NOISE = 0x4
            }
            // Alignment: 2
            // Member count: 10
            #[repr(u16)]
            pub enum VMixFilterType_t {
                FILTER_UNKNOWN = u16::MAX,
                FILTER_LOWPASS = 0x0,
                FILTER_HIGHPASS = 0x1,
                FILTER_BANDPASS = 0x2,
                FILTER_NOTCH = 0x3,
                FILTER_PEAKING_EQ = 0x4,
                FILTER_LOW_SHELF = 0x5,
                FILTER_HIGH_SHELF = 0x6,
                FILTER_ALLPASS = 0x7,
                FILTER_PASSTHROUGH = 0x8
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum SosActionStopType_t {
                SOS_STOPTYPE_NONE = 0x0,
                SOS_STOPTYPE_TIME = 0x1,
                SOS_STOPTYPE_OPVAR = 0x2
            }
            // Alignment: 4
            // Member count: 6
            #[repr(u32)]
            pub enum SosEditItemType_t {
                SOS_EDIT_ITEM_TYPE_SOUNDEVENTS = 0x0,
                SOS_EDIT_ITEM_TYPE_SOUNDEVENT = 0x1,
                SOS_EDIT_ITEM_TYPE_LIBRARYSTACKS = 0x2,
                SOS_EDIT_ITEM_TYPE_STACK = 0x3,
                SOS_EDIT_ITEM_TYPE_OPERATOR = 0x4,
                SOS_EDIT_ITEM_TYPE_FIELD = 0x5
            }
            // Alignment: 4
            // Member count: 5
            #[repr(u32)]
            pub enum PlayBackMode_t {
                Random = 0x0,
                RandomNoRepeats = 0x1,
                RandomAvoidLast = 0x2,
                Sequential = 0x3,
                RandomWeights = 0x4
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum SosGroupFieldBehavior_t {
                kIgnore = 0x0,
                kBranch = 0x1,
                kMatch = 0x2
            }
            // Alignment: 4
            // Member count: 30
            #[repr(u32)]
            pub enum soundlevel_t {
                SNDLVL_NONE = 0x0,
                SNDLVL_20dB = 0x14,
                SNDLVL_25dB = 0x19,
                SNDLVL_30dB = 0x1E,
                SNDLVL_35dB = 0x23,
                SNDLVL_40dB = 0x28,
                SNDLVL_45dB = 0x2D,
                SNDLVL_50dB = 0x32,
                SNDLVL_55dB = 0x37,
                SNDLVL_IDLE = 0x3C,
                SNDLVL_65dB = 0x41,
                SNDLVL_STATIC = 0x42,
                SNDLVL_70dB = 0x46,
                SNDLVL_NORM = 0x4B,
                SNDLVL_80dB = 0x50,
                SNDLVL_85dB = 0x55,
                SNDLVL_90dB = 0x5A,
                SNDLVL_95dB = 0x5F,
                SNDLVL_100dB = 0x64,
                SNDLVL_105dB = 0x69,
                SNDLVL_110dB = 0x6E,
                SNDLVL_120dB = 0x78,
                SNDLVL_130dB = 0x82,
                SNDLVL_GUNFIRE = 0x8C,
                SNDLVL_150dB = 0x96,
                SNDLVL_180dB = 0xB4
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum VMixPannerType_t {
                PANNER_TYPE_LINEAR = 0x0,
                PANNER_TYPE_EQUAL_POWER = 0x1
            }
            // Alignment: 4
            // Member count: 6
            #[repr(u32)]
            pub enum VMixChannelOperation_t {
                VMIX_CHAN_STEREO = 0x0,
                VMIX_CHAN_LEFT = 0x1,
                VMIX_CHAN_RIGHT = 0x2,
                VMIX_CHAN_SWAP = 0x3,
                VMIX_CHAN_MONO = 0x4,
                VMIX_CHAN_MID_SIDE = 0x5
            }
            // Alignment: 1
            // Member count: 13
            #[repr(u8)]
            pub enum EMidiNote {
                C = 0x0,
                C_Sharp = 0x1,
                D = 0x2,
                D_Sharp = 0x3,
                E = 0x4,
                F = 0x5,
                F_Sharp = 0x6,
                G = 0x7,
                G_Sharp = 0x8,
                A = 0x9,
                A_Sharp = 0xA,
                B = 0xB,
                Count = 0xC
            }
            // Alignment: 1
            // Member count: 4
            #[repr(u8)]
            pub enum CVSoundFormat_t {
                PCM16 = 0x0,
                PCM8 = 0x1,
                MP3 = 0x2,
                ADPCM = 0x3
            }
            // Alignment: 1
            // Member count: 9
            #[repr(u8)]
            pub enum VMixFilterSlope_t {
                FILTER_SLOPE_1POLE_6dB = 0x0,
                FILTER_SLOPE_1POLE_12dB = 0x1,
                FILTER_SLOPE_1POLE_18dB = 0x2,
                FILTER_SLOPE_1POLE_24dB = 0x3,
                FILTER_SLOPE_12dB = 0x4,
                FILTER_SLOPE_24dB = 0x5,
                FILTER_SLOPE_36dB = 0x6,
                FILTER_SLOPE_48dB = 0x7
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum SosActionLimitSortType_t {
                SOS_LIMIT_SORTTYPE_HIGHEST = 0x0,
                SOS_LIMIT_SORTTYPE_LOWEST = 0x1
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum VMixSubgraphSwitchInterpolationType_t {
                SUBGRAPH_INTERPOLATION_TEMPORAL_CROSSFADE = 0x0,
                SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT = 0x1,
                SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING = 0x2
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum SosGroupType_t {
                SOS_GROUPTYPE_DYNAMIC = 0x0,
                SOS_GROUPTYPE_STATIC = 0x1
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum SosActionSetParamSortType_t {
                SOS_SETPARAM_SORTTYPE_HIGHEST = 0x0,
                SOS_SETPARAM_SORTTYPE_LOWEST = 0x1
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixInputBase {
                pub const m_name: usize = 0x0; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerBlender {
                pub const m_firstSound: usize = 0xA8; // CSoundContainerReference
                pub const m_secondSound: usize = 0xC0; // CSoundContainerReference
                pub const m_flBlendFactor: usize = 0xD8; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixPitchShiftProcessorDesc {
                pub const m_desc: usize = 0x20; // VMixPitchShiftDesc_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixFreeverbDesc_t {
                pub const m_flRoomSize: usize = 0x0; // float32
                pub const m_flDamp: usize = 0x4; // float32
                pub const m_flWidth: usize = 0x8; // float32
                pub const m_flLateReflections: usize = 0xC; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVoiceContainerStaticAdditiveSynth__CHarmonic {
                pub const m_nWaveform: usize = 0x0; // EWaveform
                pub const m_nFundamental: usize = 0x1; // EMidiNote
                pub const m_nOctave: usize = 0x4; // int32
                pub const m_flCents: usize = 0x8; // float32
                pub const m_flPhase: usize = 0xC; // float32
                pub const m_curve: usize = 0x10; // CPiecewiseCurve
                pub const m_volumeScaling: usize = 0x50; // CVoiceContainerStaticAdditiveSynth::CGainScalePerInstance
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVoiceContainerStaticAdditiveSynth__CTone {
                pub const m_harmonics: usize = 0x0; // CUtlVector<CVoiceContainerStaticAdditiveSynth::CHarmonic>
                pub const m_curve: usize = 0x18; // CPiecewiseCurve
                pub const m_bSyncInstances: usize = 0x58; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerRandomSampler {
                pub const m_flAmplitude: usize = 0xB8; // float32
                pub const m_flAmplitudeJitter: usize = 0xBC; // float32
                pub const m_flTimeJitter: usize = 0xC0; // float32
                pub const m_flMaxLength: usize = 0xC4; // float32
                pub const m_nNumDelayVariations: usize = 0xC8; // int32
                pub const m_grainResources: usize = 0xD0; // CUtlVector<CStrongHandle<InfoForResourceTypeCVoiceContainerBase>>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixSteamAudioDirectProcessorDesc {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixSteamAudioHRTFProcessorDesc {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerDefault {
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVSound {
                pub const m_nRate: usize = 0x0; // int32
                pub const m_nFormat: usize = 0x4; // CVSoundFormat_t
                pub const m_nChannels: usize = 0x8; // uint32
                pub const m_nLoopStart: usize = 0xC; // int32
                pub const m_nSampleCount: usize = 0x10; // uint32
                pub const m_flDuration: usize = 0x14; // float32
                pub const m_Sentences: usize = 0x18; // CUtlVector<CAudioSentence>
                pub const m_nStreamingSize: usize = 0x30; // uint32
                pub const m_nSeekTable: usize = 0x38; // CUtlVector<int32>
                pub const m_nLoopEnd: usize = 0x50; // int32
                pub const m_encodedHeader: usize = 0x58; // CUtlBinaryBlock
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeType
            pub mod CDSPPresetMixgroupModifierTable {
                pub const m_table: usize = 0x0; // CUtlVector<CDspPresetModifierList>
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CSosGroupActionSoundeventClusterSchema {
                pub const m_nMinNearby: usize = 0x8; // int32
                pub const m_flClusterEpsilon: usize = 0xC; // float32
                pub const m_shouldPlayOpvar: usize = 0x10; // CUtlString
                pub const m_shouldPlayClusterChild: usize = 0x18; // CUtlString
                pub const m_clusterSizeOpvar: usize = 0x20; // CUtlString
                pub const m_groupBoundingBoxMinsOpvar: usize = 0x28; // CUtlString
                pub const m_groupBoundingBoxMaxsOpvar: usize = 0x30; // CUtlString
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CSosGroupActionSetSoundeventParameterSchema {
                pub const m_nMaxCount: usize = 0x8; // int32
                pub const m_flMinValue: usize = 0xC; // float32
                pub const m_flMaxValue: usize = 0x10; // float32
                pub const m_opvarName: usize = 0x18; // CUtlString
                pub const m_nSortType: usize = 0x20; // SosActionSetParamSortType_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CSoundContainerReference {
                pub const m_bUseReference: usize = 0x0; // bool
                pub const m_sound: usize = 0x8; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
                pub const m_pSound: usize = 0x10; // CVoiceContainerBase*
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerNull {
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixSubgraphSwitchDesc_t {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_effectName: usize = 0x8; // CUtlString
                pub const m_subgraphs: usize = 0x10; // CUtlVector<CUtlString>
                pub const m_interpolationMode: usize = 0x28; // VMixSubgraphSwitchInterpolationType_t
                pub const m_bOnlyTailsOnFadeOut: usize = 0x2C; // bool
                pub const m_flInterpolationTime: usize = 0x30; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeType
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerAnalysisBase {
                pub const m_bRegenerateCurveOnCompile: usize = 0x8; // bool
                pub const m_curve: usize = 0x10; // CPiecewiseCurve
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CSosGroupActionSoundeventMinMaxValuesSchema {
                pub const m_strQueryPublicFieldName: usize = 0x8; // CUtlString
                pub const m_strDelayPublicFieldName: usize = 0x10; // CUtlString
                pub const m_bExcludeStoppedSounds: usize = 0x18; // bool
                pub const m_bExcludeDelayedSounds: usize = 0x19; // bool
                pub const m_bExcludeSoundsBelowThreshold: usize = 0x1A; // bool
                pub const m_flExcludeSoundsMinThresholdValue: usize = 0x1C; // float32
                pub const m_bExcludSoundsAboveThreshold: usize = 0x20; // bool
                pub const m_flExcludeSoundsMaxThresholdValue: usize = 0x24; // float32
                pub const m_strMinValueName: usize = 0x28; // CUtlString
                pub const m_strMaxValueName: usize = 0x30; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixEnvelopeProcessorDesc {
                pub const m_desc: usize = 0x20; // VMixEnvelopeDesc_t
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixCommand {
                pub const m_nCommand: usize = 0x0; // VMixGraphCommandID_t
                pub const m_nParameterNameHash: usize = 0x4; // uint32
                pub const m_nOutputSubmix: usize = 0x8; // int32
                pub const m_nInputSubmix0: usize = 0xC; // int32
                pub const m_nInputSubmix1: usize = 0x10; // int32
                pub const m_nProcessor: usize = 0x14; // int32
                pub const m_nInputValue0: usize = 0x18; // int32
                pub const m_nInputValue1: usize = 0x1C; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixControlInput {
                pub const m_flDefaultValue: usize = 0x10; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixBoxverbProcessorDesc {
                pub const m_desc: usize = 0x20; // VMixBoxverbDesc_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixDynamicsCompressorProcessorDesc {
                pub const m_desc: usize = 0x20; // VMixDynamicsCompressorDesc_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixPannerDesc_t {
                pub const m_type: usize = 0x0; // VMixPannerType_t
                pub const m_flStrength: usize = 0x4; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CSosGroupActionSoundeventPrioritySchema {
                pub const m_priorityValue: usize = 0x8; // CUtlString
                pub const m_priorityVolumeScalar: usize = 0x10; // CUtlString
                pub const m_priorityContributeButDontRead: usize = 0x18; // CUtlString
                pub const m_bPriorityReadButDontContribute: usize = 0x20; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerRealtimeFMSineWave {
                pub const m_flCarrierFrequency: usize = 0xA8; // float32
                pub const m_flModulatorFrequency: usize = 0xAC; // float32
                pub const m_flModulatorAmount: usize = 0xB0; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SelectedEditItemInfo_t {
                pub const m_EditItems: usize = 0x0; // CUtlVector<SosEditItemInfo_t>
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixModDelayDesc_t {
                pub const m_feedbackFilter: usize = 0x0; // VMixFilterDesc_t
                pub const m_bPhaseInvert: usize = 0x10; // bool
                pub const m_flGlideTime: usize = 0x14; // float32
                pub const m_flDelay: usize = 0x18; // float32
                pub const m_flOutputGain: usize = 0x1C; // float32
                pub const m_flFeedbackGain: usize = 0x20; // float32
                pub const m_flModRate: usize = 0x24; // float32
                pub const m_flModDepth: usize = 0x28; // float32
                pub const m_bApplyAntialiasing: usize = 0x2C; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixNameInputMeter {
                pub const m_nValueIndex: usize = 0x10; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixDynamics3BandProcessorDesc {
                pub const m_desc: usize = 0x20; // VMixDynamics3BandDesc_t
            }
            // Parent: None
            // Field count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixBoxverbDesc_t {
                pub const m_flSizeMax: usize = 0x0; // float32
                pub const m_flSizeMin: usize = 0x4; // float32
                pub const m_flComplexity: usize = 0x8; // float32
                pub const m_flDiffusion: usize = 0xC; // float32
                pub const m_flModDepth: usize = 0x10; // float32
                pub const m_flModRate: usize = 0x14; // float32
                pub const m_bParallel: usize = 0x18; // bool
                pub const m_filterType: usize = 0x1C; // VMixFilterDesc_t
                pub const m_flWidth: usize = 0x2C; // float32
                pub const m_flHeight: usize = 0x30; // float32
                pub const m_flDepth: usize = 0x34; // float32
                pub const m_flFeedbackScale: usize = 0x38; // float32
                pub const m_flFeedbackWidth: usize = 0x3C; // float32
                pub const m_flFeedbackHeight: usize = 0x40; // float32
                pub const m_flFeedbackDepth: usize = 0x44; // float32
                pub const m_flOutputGain: usize = 0x48; // float32
                pub const m_flTaps: usize = 0x4C; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSosGroupActionSchema {
            }
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSosSoundEventGroupSchema {
                pub const m_nGroupType: usize = 0x8; // SosGroupType_t
                pub const m_bBlocksEvents: usize = 0xC; // bool
                pub const m_nBlockMaxCount: usize = 0x10; // int32
                pub const m_flMemberLifespanTime: usize = 0x14; // float32
                pub const m_bInvertMatch: usize = 0x18; // bool
                pub const m_Behavior_EventName: usize = 0x1C; // SosGroupFieldBehavior_t
                pub const m_matchSoundEventName: usize = 0x20; // CUtlString
                pub const m_bMatchEventSubString: usize = 0x28; // bool
                pub const m_matchSoundEventSubString: usize = 0x30; // CUtlString
                pub const m_Behavior_EntIndex: usize = 0x38; // SosGroupFieldBehavior_t
                pub const m_flEntIndex: usize = 0x3C; // float32
                pub const m_Behavior_Opvar: usize = 0x40; // SosGroupFieldBehavior_t
                pub const m_flOpvar: usize = 0x44; // float32
                pub const m_Behavior_String: usize = 0x48; // SosGroupFieldBehavior_t
                pub const m_opvarString: usize = 0x50; // CUtlString
                pub const m_vActions: usize = 0x58; // CUtlVector<CSosGroupActionSchema*>
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixDynamics3BandDesc_t {
                pub const m_fldbGainOutput: usize = 0x0; // float32
                pub const m_flRMSTimeMS: usize = 0x4; // float32
                pub const m_fldbKneeWidth: usize = 0x8; // float32
                pub const m_flDepth: usize = 0xC; // float32
                pub const m_flWetMix: usize = 0x10; // float32
                pub const m_flTimeScale: usize = 0x14; // float32
                pub const m_flLowCutoffFreq: usize = 0x18; // float32
                pub const m_flHighCutoffFreq: usize = 0x1C; // float32
                pub const m_bPeakMode: usize = 0x20; // bool
                pub const m_bandDesc: usize = 0x24; // VMixDynamicsBand_t[3]
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixEQ8ProcessorDesc {
                pub const m_desc: usize = 0x20; // VMixEQ8Desc_t
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CDSPMixgroupModifier {
                pub const m_mixgroup: usize = 0x0; // CUtlString
                pub const m_flModifier: usize = 0x8; // float32
                pub const m_flModifierMin: usize = 0xC; // float32
                pub const m_flSourceModifier: usize = 0x10; // float32
                pub const m_flSourceModifierMin: usize = 0x14; // float32
                pub const m_flListenerReverbModifierWhenSourceReverbIsActive: usize = 0x18; // float32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAudioMorphData {
                pub const m_times: usize = 0x0; // CUtlVector<float32>
                pub const m_nameHashCodes: usize = 0x18; // CUtlVector<uint32>
                pub const m_nameStrings: usize = 0x30; // CUtlVector<CUtlString>
                pub const m_samples: usize = 0x48; // CUtlVector<CUtlVector<float32>>
                pub const m_flEaseIn: usize = 0x60; // float32
                pub const m_flEaseOut: usize = 0x64; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixDualCompressorDesc_t {
                pub const m_flRMSTimeMS: usize = 0x0; // float32
                pub const m_fldbKneeWidth: usize = 0x4; // float32
                pub const m_flWetMix: usize = 0x8; // float32
                pub const m_bPeakMode: usize = 0xC; // bool
                pub const m_bandDesc: usize = 0x10; // VMixDynamicsBand_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerStaticAdditiveSynth {
                pub const m_tones: usize = 0xB8; // CUtlVector<CVoiceContainerStaticAdditiveSynth::CTone>
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerShapedNoise {
                pub const m_bUseCurveForFrequency: usize = 0xA8; // bool
                pub const m_flFrequency: usize = 0xAC; // float32
                pub const m_frequencySweep: usize = 0xB0; // CPiecewiseCurve
                pub const m_bUseCurveForResonance: usize = 0xF0; // bool
                pub const m_flResonance: usize = 0xF4; // float32
                pub const m_resonanceSweep: usize = 0xF8; // CPiecewiseCurve
                pub const m_bUseCurveForAmplitude: usize = 0x138; // bool
                pub const m_flGainInDecibels: usize = 0x13C; // float32
                pub const m_gainSweep: usize = 0x140; // CPiecewiseCurve
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CDspPresetModifierList {
                pub const m_dspName: usize = 0x0; // CUtlString
                pub const m_modifiers: usize = 0x8; // CUtlVector<CDSPMixgroupModifier>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeType
            // MVDataFileExtension
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerBase {
                pub const m_vSound: usize = 0x28; // CVSound
                pub const m_pEnvelopeAnalyzer: usize = 0xA0; // CVoiceContainerAnalysisBase*
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixDiffusorProcessorDesc {
                pub const m_desc: usize = 0x20; // VMixDiffusorDesc_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixUtilityProcessorDesc {
                pub const m_desc: usize = 0x20; // VMixUtilityDesc_t
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CVoiceContainerGranulator {
                pub const m_flGrainLength: usize = 0xB8; // float32
                pub const m_flGrainCrossfadeAmount: usize = 0xBC; // float32
                pub const m_flStartJitter: usize = 0xC0; // float32
                pub const m_flPlaybackJitter: usize = 0xC4; // float32
                pub const m_bShouldWraparound: usize = 0xC8; // bool
                pub const m_sourceAudio: usize = 0xD0; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixPresetDSPProcessorDesc {
                pub const m_desc: usize = 0x20; // VMixPresetDSPDesc_t
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixDelayDesc_t {
                pub const m_feedbackFilter: usize = 0x0; // VMixFilterDesc_t
                pub const m_bEnableFilter: usize = 0x10; // bool
                pub const m_flDelay: usize = 0x14; // float32
                pub const m_flDirectGain: usize = 0x18; // float32
                pub const m_flDelayGain: usize = 0x1C; // float32
                pub const m_flFeedbackGain: usize = 0x20; // float32
                pub const m_flWidth: usize = 0x24; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixEQ8Desc_t {
                pub const m_stages: usize = 0x0; // VMixFilterDesc_t[8]
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixDynamicsProcessorDesc {
                pub const m_desc: usize = 0x20; // VMixDynamicsDesc_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixGraphDescData {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_nGraphOutputChannels: usize = 0x8; // int32
                pub const m_bIsMainGraph: usize = 0xC; // bool
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerLoopXFade {
                pub const m_sound: usize = 0xA8; // CSoundContainerReference
                pub const m_flLoopEnd: usize = 0xC0; // float32
                pub const m_flLoopStart: usize = 0xC4; // float32
                pub const m_flFadeOut: usize = 0xC8; // float32
                pub const m_flFadeIn: usize = 0xCC; // float32
                pub const m_bPlayHead: usize = 0xD0; // bool
                pub const m_bPlayTail: usize = 0xD1; // bool
                pub const m_bEqualPow: usize = 0xD2; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixPresetDSPDesc_t {
                pub const m_effectName: usize = 0x0; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAudioPhonemeTag {
                pub const m_flStartTime: usize = 0x0; // float32
                pub const m_flEndTime: usize = 0x4; // float32
                pub const m_nPhonemeCode: usize = 0x8; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixControlInputArray {
                pub const m_nArrayIndex: usize = 0x10; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixNameInput {
                pub const m_defaultValue: usize = 0x10; // CUtlString
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CSosGroupActionSoundeventCountSchema {
                pub const m_bExcludeStoppedSounds: usize = 0x8; // bool
                pub const m_strCountKeyName: usize = 0x10; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerEnvelopeAnalyzer {
                pub const m_mode: usize = 0x50; // EMode_t
                pub const m_fAnalysisWindowMs: usize = 0x54; // float32
                pub const m_flThreshold: usize = 0x58; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixBaseProcessorDesc {
                pub const m_name: usize = 0x8; // CUtlString
                pub const m_nChannels: usize = 0x14; // int32
                pub const m_flxfade: usize = 0x18; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixImpulseResponseInput {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixSteamAudioHybridReverbProcessorDesc {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSoundEventMetaData {
                pub const m_soundEventVMix: usize = 0x0; // CStrongHandle<InfoForResourceTypeCVMixListResource>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixPitchShiftDesc_t {
                pub const m_nGrainSampleCount: usize = 0x0; // int32
                pub const m_flPitchShift: usize = 0x4; // float32
                pub const m_nQuality: usize = 0x8; // int32
                pub const m_nProcType: usize = 0xC; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixControlOutput {
                pub const m_flDefaultValue: usize = 0x10; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixModDelayProcessorDesc {
                pub const m_desc: usize = 0x20; // VMixModDelayDesc_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixShaperProcessorDesc {
                pub const m_desc: usize = 0x20; // VMixShaperDesc_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixAutomaticControlInput {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_nControlInputIndex: usize = 0x8; // int32
                pub const m_bIsTrackSend: usize = 0xC; // bool
                pub const m_bIsStackVar: usize = 0xD; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAudioEmphasisSample {
                pub const m_flTime: usize = 0x0; // float32
                pub const m_flValue: usize = 0x4; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixOscProcessorDesc {
                pub const m_desc: usize = 0x20; // VMixOscDesc_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixCurveHeader {
                pub const m_nControlPointCount: usize = 0x0; // uint32
                pub const m_nControlPointStart: usize = 0x4; // uint32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVoiceContainerGenerator {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerSet {
                pub const m_soundsToPlay: usize = 0xA8; // CUtlVector<CVoiceContainerSetElement>
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixConvolutionDesc_t {
                pub const m_fldbGain: usize = 0x0; // float32
                pub const m_flPreDelayMS: usize = 0x4; // float32
                pub const m_flWetMix: usize = 0x8; // float32
                pub const m_fldbLow: usize = 0xC; // float32
                pub const m_fldbMid: usize = 0x10; // float32
                pub const m_fldbHigh: usize = 0x14; // float32
                pub const m_flLowCutoffFreq: usize = 0x18; // float32
                pub const m_flHighCutoffFreq: usize = 0x1C; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVoiceContainerSetElement {
                pub const m_sound: usize = 0x0; // CSoundContainerReference
                pub const m_flVolumeDB: usize = 0x18; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVoiceContainerAsyncGenerator {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSoundInfoHeader {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SosEditItemInfo_t {
                pub const itemType: usize = 0x0; // SosEditItemType_t
                pub const itemName: usize = 0x8; // CUtlString
                pub const itemTypeName: usize = 0x10; // CUtlString
                pub const itemKVString: usize = 0x20; // CUtlString
                pub const itemPos: usize = 0x28; // Vector2D
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixFlangerProcessorDesc {
                pub const m_desc: usize = 0x20; // VMixFlangerDesc_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixEffectChainProcessorDesc {
                pub const m_desc: usize = 0x20; // VMixEffectChainDesc_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixFreeverbProcessorDesc {
                pub const m_desc: usize = 0x20; // VMixFreeverbDesc_t
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixPlateverbDesc_t {
                pub const m_flPrefilter: usize = 0x0; // float32
                pub const m_flInputDiffusion1: usize = 0x4; // float32
                pub const m_flInputDiffusion2: usize = 0x8; // float32
                pub const m_flDecay: usize = 0xC; // float32
                pub const m_flDamp: usize = 0x10; // float32
                pub const m_flFeedbackDiffusion1: usize = 0x14; // float32
                pub const m_flFeedbackDiffusion2: usize = 0x18; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixConvolutionProcessorDesc {
                pub const m_desc: usize = 0x20; // VMixConvolutionDesc_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CSoundContainerReferenceArray {
                pub const m_bUseReference: usize = 0x0; // bool
                pub const m_sounds: usize = 0x8; // CUtlVector<CStrongHandle<InfoForResourceTypeCVoiceContainerBase>>
                pub const m_pSounds: usize = 0x20; // CUtlVector<CVoiceContainerBase*>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixFilterProcessorDesc {
                pub const m_desc: usize = 0x20; // VMixFilterDesc_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixAdditionalOutput {
                pub const m_name: usize = 0x0; // CUtlString
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CVoiceContainerTapePlayer {
                pub const m_bShouldWraparound: usize = 0xB8; // bool
                pub const m_sourceAudio: usize = 0xC0; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
                pub const m_flTapeSpeedAttackTime: usize = 0xC8; // float32
                pub const m_flTapeSpeedReleaseTime: usize = 0xCC; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixSubgraphSwitchProcessorDesc {
                pub const m_desc: usize = 0x20; // VMixSubgraphSwitchDesc_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixDiffusorDesc_t {
                pub const m_flSize: usize = 0x0; // float32
                pub const m_flComplexity: usize = 0x4; // float32
                pub const m_flFeedback: usize = 0x8; // float32
                pub const m_flOutputGain: usize = 0xC; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixSteamAudioPathingProcessorDesc {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixPannerProcessorDesc {
                pub const m_desc: usize = 0x20; // VMixPannerDesc_t
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixDynamicsCompressorDesc_t {
                pub const m_fldbOutputGain: usize = 0x0; // float32
                pub const m_fldbCompressionThreshold: usize = 0x4; // float32
                pub const m_fldbKneeWidth: usize = 0x8; // float32
                pub const m_flCompressionRatio: usize = 0xC; // float32
                pub const m_flAttackTimeMS: usize = 0x10; // float32
                pub const m_flReleaseTimeMS: usize = 0x14; // float32
                pub const m_flRMSTimeMS: usize = 0x18; // float32
                pub const m_flWetMix: usize = 0x1C; // float32
                pub const m_bPeakMode: usize = 0x20; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixStereoDelayProcessorDesc {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixShaperDesc_t {
                pub const m_nShape: usize = 0x0; // int32
                pub const m_fldbDrive: usize = 0x4; // float32
                pub const m_fldbOutputGain: usize = 0x8; // float32
                pub const m_flWetMix: usize = 0xC; // float32
                pub const m_nOversampleFactor: usize = 0x10; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixEnvelopeDesc_t {
                pub const m_flAttackTimeMS: usize = 0x0; // float32
                pub const m_flHoldTimeMS: usize = 0x4; // float32
                pub const m_flReleaseTimeMS: usize = 0x8; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAudioSentence {
                pub const m_bShouldVoiceDuck: usize = 0x0; // bool
                pub const m_RunTimePhonemes: usize = 0x8; // CUtlVector<CAudioPhonemeTag>
                pub const m_EmphasisSamples: usize = 0x20; // CUtlVector<CAudioEmphasisSample>
                pub const m_morphData: usize = 0x38; // CAudioMorphData
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerParameterBlender {
                pub const m_firstSound: usize = 0xA8; // CSoundContainerReference
                pub const m_secondSound: usize = 0xC0; // CSoundContainerReference
                pub const m_bEnableOcclusionBlend: usize = 0xD8; // bool
                pub const m_curve1: usize = 0xE0; // CPiecewiseCurve
                pub const m_curve2: usize = 0x120; // CPiecewiseCurve
                pub const m_bEnableDistanceBlend: usize = 0x160; // bool
                pub const m_curve3: usize = 0x168; // CPiecewiseCurve
                pub const m_curve4: usize = 0x1A8; // CPiecewiseCurve
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixAudioMeter {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_displayName: usize = 0x8; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixVocoderProcessorDesc {
                pub const m_desc: usize = 0x20; // VMixVocoderDesc_t
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CSosGroupActionLimitSchema {
                pub const m_nMaxCount: usize = 0x8; // int32
                pub const m_nStopType: usize = 0xC; // SosActionStopType_t
                pub const m_nSortType: usize = 0x10; // SosActionLimitSortType_t
                pub const m_bStopImmediate: usize = 0x14; // bool
                pub const m_bCountStopped: usize = 0x15; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerAmpedDecayingSineWave {
                pub const m_flGainAmount: usize = 0xB0; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerEnvelope {
                pub const m_sound: usize = 0xA8; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
                pub const m_analysisContainer: usize = 0xB0; // CVoiceContainerAnalysisBase*
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixAutoFilterDesc_t {
                pub const m_flEnvelopeAmount: usize = 0x0; // float32
                pub const m_flAttackTimeMS: usize = 0x4; // float32
                pub const m_flReleaseTimeMS: usize = 0x8; // float32
                pub const m_filter: usize = 0xC; // VMixFilterDesc_t
                pub const m_flLFOAmount: usize = 0x1C; // float32
                pub const m_flLFORate: usize = 0x20; // float32
                pub const m_flPhase: usize = 0x24; // float32
                pub const m_nLFOShape: usize = 0x28; // VMixLFOShape_t
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixDynamicsBand_t {
                pub const m_fldbGainInput: usize = 0x0; // float32
                pub const m_fldbGainOutput: usize = 0x4; // float32
                pub const m_fldbThresholdBelow: usize = 0x8; // float32
                pub const m_fldbThresholdAbove: usize = 0xC; // float32
                pub const m_flRatioBelow: usize = 0x10; // float32
                pub const m_flRatioAbove: usize = 0x14; // float32
                pub const m_flAttackTimeMS: usize = 0x18; // float32
                pub const m_flReleaseTimeMS: usize = 0x1C; // float32
                pub const m_bEnable: usize = 0x20; // bool
                pub const m_bSolo: usize = 0x21; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixEffectChainDesc_t {
                pub const m_effectName: usize = 0x0; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixPlateReverbProcessorDesc {
                pub const m_desc: usize = 0x20; // VMixPlateverbDesc_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerMultiBlender {
                pub const m_soundsToPlay: usize = 0xA8; // CSoundContainerReferenceArray
                pub const m_flBlendFactor: usize = 0xE0; // float32
                pub const m_flCrossover: usize = 0xE4; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixVsndInput {
                pub const m_defaultValue: usize = 0x10; // CUtlString
                pub const m_nProcessor: usize = 0x18; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVoiceContainerStaticAdditiveSynth__CGainScalePerInstance {
                pub const m_flMinVolume: usize = 0x0; // float32
                pub const m_nInstancesAtMinVolume: usize = 0x4; // int32
                pub const m_flMaxVolume: usize = 0x8; // float32
                pub const m_nInstancesAtMaxVolume: usize = 0xC; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerSelector {
                pub const m_mode: usize = 0xA8; // PlayBackMode_t
                pub const m_soundsToPlay: usize = 0xB0; // CSoundContainerReferenceArray
                pub const m_fProbabilityWeights: usize = 0xE8; // CUtlVector<float32>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CSosGroupActionTimeBlockLimitSchema {
                pub const m_nMaxCount: usize = 0x8; // int32
                pub const m_flMaxDuration: usize = 0xC; // float32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CSosGroupActionMemberCountEnvelopeSchema {
                pub const m_nBaseCount: usize = 0x8; // int32
                pub const m_nTargetCount: usize = 0xC; // int32
                pub const m_flBaseValue: usize = 0x10; // float32
                pub const m_flTargetValue: usize = 0x14; // float32
                pub const m_flAttack: usize = 0x18; // float32
                pub const m_flDecay: usize = 0x1C; // float32
                pub const m_resultVarName: usize = 0x20; // CUtlString
                pub const m_bSaveToGroup: usize = 0x28; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixDualCompressorProcessorDesc {
                pub const m_desc: usize = 0x20; // VMixDualCompressorDesc_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerSwitch {
                pub const m_soundsToPlay: usize = 0xA8; // CUtlVector<CSoundContainerReference>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixControlMeter {
                pub const m_nValueIndex: usize = 0x10; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerEnum {
                pub const m_soundsToPlay: usize = 0xA8; // CSoundContainerReferenceArray
                pub const m_iSelection: usize = 0xE0; // int32
                pub const m_flCrossfadeTime: usize = 0xE4; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CSosGroupActionTimeLimitSchema {
                pub const m_flMaxDuration: usize = 0x8; // float32
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixVocoderDesc_t {
                pub const m_nBandCount: usize = 0x0; // int32
                pub const m_flBandwidth: usize = 0x4; // float32
                pub const m_fldBModGain: usize = 0x8; // float32
                pub const m_flFreqRangeStart: usize = 0xC; // float32
                pub const m_flFreqRangeEnd: usize = 0x10; // float32
                pub const m_fldBUnvoicedGain: usize = 0x14; // float32
                pub const m_flAttackTimeMS: usize = 0x18; // float32
                pub const m_flReleaseTimeMS: usize = 0x1C; // float32
                pub const m_nDebugBand: usize = 0x20; // int32
                pub const m_bPeakMode: usize = 0x24; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixUtilityDesc_t {
                pub const m_nOp: usize = 0x0; // VMixChannelOperation_t
                pub const m_flInputPan: usize = 0x4; // float32
                pub const m_flOutputBalance: usize = 0x8; // float32
                pub const m_fldbOutputGain: usize = 0xC; // float32
                pub const m_bBassMono: usize = 0x10; // bool
                pub const m_flBassFreq: usize = 0x14; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerLoopTrigger {
                pub const m_sound: usize = 0xA8; // CSoundContainerReference
                pub const m_flRetriggerTimeMin: usize = 0xC0; // float32
                pub const m_flRetriggerTimeMax: usize = 0xC4; // float32
                pub const m_flFadeTime: usize = 0xC8; // float32
                pub const m_bCrossFade: usize = 0xCC; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerDecayingSineWave {
                pub const m_flFrequency: usize = 0xA8; // float32
                pub const m_flDecayTime: usize = 0xAC; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixDelayProcessorDesc {
                pub const m_desc: usize = 0x20; // VMixDelayDesc_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixBoxverb2ProcessorDesc {
                pub const m_desc: usize = 0x20; // VMixBoxverbDesc_t
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixFilterDesc_t {
                pub const m_nFilterType: usize = 0x0; // VMixFilterType_t
                pub const m_nFilterSlope: usize = 0x2; // VMixFilterSlope_t
                pub const m_bEnabled: usize = 0x3; // bool
                pub const m_fldbGain: usize = 0x4; // float32
                pub const m_flCutoffFreq: usize = 0x8; // float32
                pub const m_flQ: usize = 0xC; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixOscDesc_t {
                pub const oscType: usize = 0x0; // VMixLFOShape_t
                pub const m_freq: usize = 0x4; // float32
                pub const m_flPhase: usize = 0x8; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixAutoFilterProcessorDesc {
                pub const m_desc: usize = 0x20; // VMixAutoFilterDesc_t
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixFlangerDesc_t {
                pub const m_bPhaseInvert: usize = 0x0; // bool
                pub const m_flGlideTime: usize = 0x4; // float32
                pub const m_flDelay: usize = 0x8; // float32
                pub const m_flOutputGain: usize = 0xC; // float32
                pub const m_flFeedbackGain: usize = 0x10; // float32
                pub const m_flFeedforwardGain: usize = 0x14; // float32
                pub const m_flModRate: usize = 0x18; // float32
                pub const m_flModDepth: usize = 0x1C; // float32
                pub const m_bApplyAntialiasing: usize = 0x20; // bool
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixDynamicsDesc_t {
                pub const m_fldbGain: usize = 0x0; // float32
                pub const m_fldbNoiseGateThreshold: usize = 0x4; // float32
                pub const m_fldbCompressionThreshold: usize = 0x8; // float32
                pub const m_fldbLimiterThreshold: usize = 0xC; // float32
                pub const m_fldbKneeWidth: usize = 0x10; // float32
                pub const m_flRatio: usize = 0x14; // float32
                pub const m_flLimiterRatio: usize = 0x18; // float32
                pub const m_flAttackTimeMS: usize = 0x1C; // float32
                pub const m_flReleaseTimeMS: usize = 0x20; // float32
                pub const m_flRMSTimeMS: usize = 0x24; // float32
                pub const m_flWetMix: usize = 0x28; // float32
                pub const m_bPeakMode: usize = 0x2C; // bool
            }
        }
    }
}
