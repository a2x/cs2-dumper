// Generated using https://github.com/a2x/cs2-dumper
// 2025-02-05 01:24:08.259372 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: soundsystem.dll
        // Class count: 74
        // Enum count: 18
        pub mod soundsystem_dll {
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum EMode_t {
                Peak = 0x0,
                RMS = 0x1
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
            // Member count: 2
            #[repr(u32)]
            pub enum SosActionSortType_t {
                SOS_SORTTYPE_HIGHEST = 0x0,
                SOS_SORTTYPE_LOWEST = 0x1
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
            // Alignment: 2
            // Member count: 30
            #[repr(u16)]
            pub enum VMixProcessorType_t {
                VPROCESSOR_UNKNOWN = 0x0,
                VPROCESSOR_RT_PITCH = 0x1,
                VPROCESSOR_STEAMAUDIO_HRTF = 0x2,
                VPROCESSOR_DYNAMICS = 0x3,
                VPROCESSOR_PRESETDSP = 0x4,
                VPROCESSOR_DELAY = 0x5,
                VPROCESSOR_MOD_DELAY = 0x6,
                VPROCESSOR_DIFFUSOR = 0x7,
                VPROCESSOR_BOXVERB = 0x8,
                VPROCESSOR_FREEVERB = 0x9,
                VPROCESSOR_PLATEVERB = 0xA,
                VPROCESSOR_FULLWAVE_INTEGRATOR = 0xB,
                VPROCESSOR_FILTER = 0xC,
                VPROCESSOR_STEAMAUDIO_PATHING = 0xD,
                VPROCESSOR_EQ8 = 0xE,
                VPROCESSOR_ENVELOPE = 0xF,
                VPROCESSOR_VOCODER = 0x10,
                VPROCESSOR_CONVOLUTION = 0x11,
                VPROCESSOR_DYNAMICS_3BAND = 0x12,
                VPROCESSOR_DYNAMICS_COMPRESSOR = 0x13,
                VPROCESSOR_SHAPER = 0x14,
                VPROCESSOR_PANNER = 0x15,
                VPROCESSOR_UTILITY = 0x16,
                VPROCESSOR_AUTOFILTER = 0x17,
                VPROCESSOR_OSC = 0x18,
                VPROCESSOR_STEREODELAY = 0x19,
                VPROCESSOR_EFFECT_CHAIN = 0x1A,
                VPROCESSOR_SUBGRAPH_SWITCH = 0x1B,
                VPROCESSOR_STEAMAUDIO_DIRECT = 0x1C,
                VPROCESSOR_STEAMAUDIO_HYBRIDREVERB = 0x1D
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
            // Member count: 10
            #[repr(u32)]
            pub enum ActionType_t {
                SOS_ACTION_NONE = 0x0,
                SOS_ACTION_LIMITER = 0x1,
                SOS_ACTION_TIME_LIMIT = 0x2,
                SOS_ACTION_TIME_BLOCK_LIMITER = 0x3,
                SOS_ACTION_SET_SOUNDEVENT_PARAM = 0x4,
                SOS_ACTION_SOUNDEVENT_CLUSTER = 0x5,
                SOS_ACTION_SOUNDEVENT_PRIORITY = 0x6,
                SOS_ACTION_COUNT_ENVELOPE = 0x7,
                SOS_ACTION_SOUNDEVENT_COUNT = 0x8,
                SOS_ACTION_SOUNDEVENT_MIN_MAX_VALUES = 0x9
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
            // Parent: CVoiceContainerBase
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerBlender {
                pub const m_firstSound: usize = 0xC0; // CSoundContainerReference
                pub const m_secondSound: usize = 0xD8; // CSoundContainerReference
                pub const m_flBlendFactor: usize = 0xF0; // float32
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
            // Parent: CVoiceContainerBase
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerRandomSampler {
                pub const m_flAmplitude: usize = 0xC0; // float32
                pub const m_flAmplitudeJitter: usize = 0xC4; // float32
                pub const m_flTimeJitter: usize = 0xC8; // float32
                pub const m_flMaxLength: usize = 0xCC; // float32
                pub const m_nNumDelayVariations: usize = 0xD0; // int32
                pub const m_grainResources: usize = 0xD8; // CUtlVector<CStrongHandle<InfoForResourceTypeCVoiceContainerBase>>
            }
            // Parent: CVoiceContainerBase
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
            // Parent: CSosGroupActionSchema
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSosGroupActionSoundeventClusterSchema {
                pub const m_nMinNearby: usize = 0x18; // int32
                pub const m_flClusterEpsilon: usize = 0x1C; // float32
                pub const m_shouldPlayOpvar: usize = 0x20; // CUtlString
                pub const m_shouldPlayClusterChild: usize = 0x28; // CUtlString
                pub const m_clusterSizeOpvar: usize = 0x30; // CUtlString
                pub const m_groupBoundingBoxMinsOpvar: usize = 0x38; // CUtlString
                pub const m_groupBoundingBoxMaxsOpvar: usize = 0x40; // CUtlString
            }
            // Parent: CSosGroupActionSchema
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSosGroupActionSetSoundeventParameterSchema {
                pub const m_nMaxCount: usize = 0x18; // int32
                pub const m_flMinValue: usize = 0x1C; // float32
                pub const m_flMaxValue: usize = 0x20; // float32
                pub const m_opvarName: usize = 0x28; // CUtlString
                pub const m_nSortType: usize = 0x30; // SosActionSortType_t
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
            // Parent: CVoiceContainerBase
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerNull {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod VMixSubgraphSwitchDesc_t {
                pub const m_interpolationMode: usize = 0x0; // VMixSubgraphSwitchInterpolationType_t
                pub const m_bOnlyTailsOnFadeOut: usize = 0x4; // bool
                pub const m_flInterpolationTime: usize = 0x8; // float32
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
            // Parent: CSosGroupActionSchema
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSosGroupActionSoundeventMinMaxValuesSchema {
                pub const m_strQueryPublicFieldName: usize = 0x18; // CUtlString
                pub const m_strDelayPublicFieldName: usize = 0x20; // CUtlString
                pub const m_bExcludeStoppedSounds: usize = 0x28; // bool
                pub const m_bExcludeDelayedSounds: usize = 0x29; // bool
                pub const m_bExcludeSoundsBelowThreshold: usize = 0x2A; // bool
                pub const m_flExcludeSoundsMinThresholdValue: usize = 0x2C; // float32
                pub const m_bExcludSoundsAboveThreshold: usize = 0x30; // bool
                pub const m_flExcludeSoundsMaxThresholdValue: usize = 0x34; // float32
                pub const m_strMinValueName: usize = 0x38; // CUtlString
                pub const m_strMaxValueName: usize = 0x40; // CUtlString
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
            // Parent: CSosGroupActionSchema
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSosGroupActionSoundeventPrioritySchema {
                pub const m_priorityValue: usize = 0x18; // CUtlString
                pub const m_priorityVolumeScalar: usize = 0x20; // CUtlString
                pub const m_priorityContributeButDontRead: usize = 0x28; // CUtlString
                pub const m_bPriorityReadButDontContribute: usize = 0x30; // CUtlString
            }
            // Parent: CVoiceContainerBase
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerRealtimeFMSineWave {
                pub const m_flCarrierFrequency: usize = 0xC0; // float32
                pub const m_flModulatorFrequency: usize = 0xC4; // float32
                pub const m_flModulatorAmount: usize = 0xC8; // float32
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
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub mod CSosGroupActionSchema {
                pub const m_name: usize = 0x8; // CUtlString
                pub const m_actionType: usize = 0x10; // ActionType_t
                pub const m_actionInstanceType: usize = 0x14; // ActionType_t
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub mod CSosSoundEventGroupSchema {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_nType: usize = 0x8; // SosGroupType_t
                pub const m_bIsBlocking: usize = 0xC; // bool
                pub const m_nBlockMaxCount: usize = 0x10; // int32
                pub const m_bInvertMatch: usize = 0x14; // bool
                pub const m_matchPattern: usize = 0x18; // CSosGroupMatchPattern
                pub const m_branchPattern: usize = 0x48; // CSosGroupBranchPattern
                pub const m_flLifeSpanTime: usize = 0x58; // float32
                pub const m_vActions: usize = 0xC0; // CSosGroupActionSchema*[4]
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSosGroupBranchPattern {
                pub const m_bMatchEventName: usize = 0x8; // bool
                pub const m_bMatchEventSubString: usize = 0x9; // bool
                pub const m_bMatchEntIndex: usize = 0xA; // bool
                pub const m_bMatchOpvar: usize = 0xB; // bool
                pub const m_bMatchString: usize = 0xC; // bool
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
            // Parent: CVoiceContainerBase
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerStaticAdditiveSynth {
                pub const m_tones: usize = 0xC0; // CUtlVector<CVoiceContainerStaticAdditiveSynth::CTone>
            }
            // Parent: CVoiceContainerBase
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerShapedNoise {
                pub const m_bUseCurveForFrequency: usize = 0xC0; // bool
                pub const m_flFrequency: usize = 0xC4; // float32
                pub const m_frequencySweep: usize = 0xC8; // CPiecewiseCurve
                pub const m_bUseCurveForResonance: usize = 0x108; // bool
                pub const m_flResonance: usize = 0x10C; // float32
                pub const m_resonanceSweep: usize = 0x110; // CPiecewiseCurve
                pub const m_bUseCurveForAmplitude: usize = 0x150; // bool
                pub const m_flGainInDecibels: usize = 0x154; // float32
                pub const m_gainSweep: usize = 0x158; // CPiecewiseCurve
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
                pub const m_vSound: usize = 0x38; // CVSound
                pub const m_pEnvelopeAnalyzer: usize = 0xB8; // CVoiceContainerAnalysisBase*
            }
            // Parent: CVoiceContainerBase
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CVoiceContainerGranulator {
                pub const m_flGrainLength: usize = 0xC0; // float32
                pub const m_flGrainCrossfadeAmount: usize = 0xC4; // float32
                pub const m_flStartJitter: usize = 0xC8; // float32
                pub const m_flPlaybackJitter: usize = 0xCC; // float32
                pub const m_sourceAudio: usize = 0xD0; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
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
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAudioPhonemeTag {
                pub const m_flStartTime: usize = 0x0; // float32
                pub const m_flEndTime: usize = 0x4; // float32
                pub const m_nPhonemeCode: usize = 0x8; // int32
            }
            // Parent: CSosGroupActionSchema
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSosGroupActionSoundeventCountSchema {
                pub const m_bExcludeStoppedSounds: usize = 0x18; // bool
                pub const m_strCountKeyName: usize = 0x20; // CUtlString
            }
            // Parent: CVoiceContainerAnalysisBase
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerEnvelopeAnalyzer {
                pub const m_mode: usize = 0x50; // EMode_t
                pub const m_nSamples: usize = 0x54; // int32
                pub const m_flThreshold: usize = 0x58; // float32
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
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAudioEmphasisSample {
                pub const m_flTime: usize = 0x0; // float32
                pub const m_flValue: usize = 0x4; // float32
            }
            // Parent: CVoiceContainerBase
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerSet {
                pub const m_soundsToPlay: usize = 0xC0; // CUtlVector<CVoiceContainerSetElement>
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
            pub mod CSoundInfoHeader {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSosSoundEventGroupListSchema {
                pub const m_groupList: usize = 0x0; // CUtlVector<CSosSoundEventGroupSchema>
            }
            // Parent: CSosGroupBranchPattern
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSosGroupMatchPattern {
                pub const m_matchSoundEventName: usize = 0x10; // CUtlString
                pub const m_matchSoundEventSubString: usize = 0x18; // CUtlString
                pub const m_flEntIndex: usize = 0x20; // float32
                pub const m_flOpvar: usize = 0x24; // float32
                pub const m_opvarString: usize = 0x28; // CUtlString
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
            // Parent: CSosGroupActionSchema
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSosGroupActionLimitSchema {
                pub const m_nMaxCount: usize = 0x18; // int32
                pub const m_nStopType: usize = 0x1C; // SosActionStopType_t
                pub const m_nSortType: usize = 0x20; // SosActionSortType_t
            }
            // Parent: CVoiceContainerDecayingSineWave
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerAmpedDecayingSineWave {
                pub const m_flGainAmount: usize = 0xC8; // float32
            }
            // Parent: CVoiceContainerBase
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerEnvelope {
                pub const m_sound: usize = 0xC0; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
                pub const m_analysisContainer: usize = 0xC8; // CVoiceContainerAnalysisBase*
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
                pub const m_flCrossfadeTime: usize = 0x0; // float32
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
            // Parent: CVoiceContainerBase
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerSelector {
                pub const m_mode: usize = 0xC0; // PlayBackMode_t
                pub const m_soundsToPlay: usize = 0xC8; // CSoundContainerReferenceArray
                pub const m_fProbabilityWeights: usize = 0x100; // CUtlVector<float32>
            }
            // Parent: CSosGroupActionSchema
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSosGroupActionTimeBlockLimitSchema {
                pub const m_nMaxCount: usize = 0x18; // int32
                pub const m_flMaxDuration: usize = 0x1C; // float32
            }
            // Parent: CVoiceContainerBase
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CTestBlendContainer {
                pub const m_firstSound: usize = 0xC0; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
                pub const m_secondSound: usize = 0xC8; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
            }
            // Parent: CSosGroupActionSchema
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSosGroupActionMemberCountEnvelopeSchema {
                pub const m_nBaseCount: usize = 0x18; // int32
                pub const m_nTargetCount: usize = 0x1C; // int32
                pub const m_flBaseValue: usize = 0x20; // float32
                pub const m_flTargetValue: usize = 0x24; // float32
                pub const m_flAttack: usize = 0x28; // float32
                pub const m_flDecay: usize = 0x2C; // float32
                pub const m_resultVarName: usize = 0x30; // CUtlString
                pub const m_bSaveToGroup: usize = 0x38; // bool
            }
            // Parent: CVoiceContainerBase
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerSwitch {
                pub const m_soundsToPlay: usize = 0xC0; // CUtlVector<CSoundContainerReference>
            }
            // Parent: CSosGroupActionSchema
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSosGroupActionTimeLimitSchema {
                pub const m_flMaxDuration: usize = 0x18; // float32
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
            // Parent: CVoiceContainerBase
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerLoopTrigger {
                pub const m_sound: usize = 0xC0; // CSoundContainerReference
                pub const m_flRetriggerTimeMin: usize = 0xD8; // float32
                pub const m_flRetriggerTimeMax: usize = 0xDC; // float32
                pub const m_flFadeTime: usize = 0xE0; // float32
                pub const m_bCrossFade: usize = 0xE4; // bool
            }
            // Parent: CVoiceContainerBase
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CVoiceContainerDecayingSineWave {
                pub const m_flFrequency: usize = 0xC0; // float32
                pub const m_flDecayTime: usize = 0xC4; // float32
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
