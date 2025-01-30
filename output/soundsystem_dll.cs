// Generated using https://github.com/a2x/cs2-dumper
// 2025-01-30 15:41:34.124155800 UTC

namespace CS2Dumper.Schemas {
    // Module: soundsystem.dll
    // Class count: 74
    // Enum count: 18
    public static class SoundsystemDll {
        // Alignment: 4
        // Member count: 2
        public enum EMode_t : uint {
            Peak = 0x0,
            RMS = 0x1
        }
        // Alignment: 1
        // Member count: 5
        public enum EWaveform : byte {
            Sine = 0x0,
            Square = 0x1,
            Saw = 0x2,
            Triangle = 0x3,
            Noise = 0x4
        }
        // Alignment: 4
        // Member count: 5
        public enum VMixLFOShape_t : uint {
            LFO_SHAPE_SINE = 0x0,
            LFO_SHAPE_SQUARE = 0x1,
            LFO_SHAPE_TRI = 0x2,
            LFO_SHAPE_SAW = 0x3,
            LFO_SHAPE_NOISE = 0x4
        }
        // Alignment: 2
        // Member count: 10
        public enum VMixFilterType_t : ushort {
            FILTER_UNKNOWN = 0xFFFFFFFFFFFFFFFF,
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
        public enum SosActionStopType_t : uint {
            SOS_STOPTYPE_NONE = 0x0,
            SOS_STOPTYPE_TIME = 0x1,
            SOS_STOPTYPE_OPVAR = 0x2
        }
        // Alignment: 4
        // Member count: 6
        public enum SosEditItemType_t : uint {
            SOS_EDIT_ITEM_TYPE_SOUNDEVENTS = 0x0,
            SOS_EDIT_ITEM_TYPE_SOUNDEVENT = 0x1,
            SOS_EDIT_ITEM_TYPE_LIBRARYSTACKS = 0x2,
            SOS_EDIT_ITEM_TYPE_STACK = 0x3,
            SOS_EDIT_ITEM_TYPE_OPERATOR = 0x4,
            SOS_EDIT_ITEM_TYPE_FIELD = 0x5
        }
        // Alignment: 4
        // Member count: 2
        public enum SosActionSortType_t : uint {
            SOS_SORTTYPE_HIGHEST = 0x0,
            SOS_SORTTYPE_LOWEST = 0x1
        }
        // Alignment: 4
        // Member count: 5
        public enum PlayBackMode_t : uint {
            Random = 0x0,
            RandomNoRepeats = 0x1,
            RandomAvoidLast = 0x2,
            Sequential = 0x3,
            RandomWeights = 0x4
        }
        // Alignment: 2
        // Member count: 30
        public enum VMixProcessorType_t : ushort {
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
        public enum soundlevel_t : uint {
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
            SNDLVL_60dB = 0x3C,
            SNDLVL_65dB = 0x41,
            SNDLVL_STATIC = 0x42,
            SNDLVL_70dB = 0x46,
            SNDLVL_NORM = 0x4B,
            SNDLVL_75dB = 0x4B,
            SNDLVL_80dB = 0x50,
            SNDLVL_TALKING = 0x50,
            SNDLVL_85dB = 0x55,
            SNDLVL_90dB = 0x5A,
            SNDLVL_95dB = 0x5F,
            SNDLVL_100dB = 0x64,
            SNDLVL_105dB = 0x69,
            SNDLVL_110dB = 0x6E,
            SNDLVL_120dB = 0x78,
            SNDLVL_130dB = 0x82,
            SNDLVL_GUNFIRE = 0x8C,
            SNDLVL_140dB = 0x8C,
            SNDLVL_150dB = 0x96,
            SNDLVL_180dB = 0xB4
        }
        // Alignment: 4
        // Member count: 2
        public enum VMixPannerType_t : uint {
            PANNER_TYPE_LINEAR = 0x0,
            PANNER_TYPE_EQUAL_POWER = 0x1
        }
        // Alignment: 4
        // Member count: 6
        public enum VMixChannelOperation_t : uint {
            VMIX_CHAN_STEREO = 0x0,
            VMIX_CHAN_LEFT = 0x1,
            VMIX_CHAN_RIGHT = 0x2,
            VMIX_CHAN_SWAP = 0x3,
            VMIX_CHAN_MONO = 0x4,
            VMIX_CHAN_MID_SIDE = 0x5
        }
        // Alignment: 1
        // Member count: 13
        public enum EMidiNote : byte {
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
        public enum CVSoundFormat_t : byte {
            PCM16 = 0x0,
            PCM8 = 0x1,
            MP3 = 0x2,
            ADPCM = 0x3
        }
        // Alignment: 1
        // Member count: 9
        public enum VMixFilterSlope_t : byte {
            FILTER_SLOPE_1POLE_6dB = 0x0,
            FILTER_SLOPE_1POLE_12dB = 0x1,
            FILTER_SLOPE_1POLE_18dB = 0x2,
            FILTER_SLOPE_1POLE_24dB = 0x3,
            FILTER_SLOPE_12dB = 0x4,
            FILTER_SLOPE_24dB = 0x5,
            FILTER_SLOPE_36dB = 0x6,
            FILTER_SLOPE_48dB = 0x7,
            FILTER_SLOPE_MAX = 0x7
        }
        // Alignment: 4
        // Member count: 10
        public enum ActionType_t : uint {
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
        public enum VMixSubgraphSwitchInterpolationType_t : uint {
            SUBGRAPH_INTERPOLATION_TEMPORAL_CROSSFADE = 0x0,
            SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT = 0x1,
            SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING = 0x2
        }
        // Alignment: 4
        // Member count: 2
        public enum SosGroupType_t : uint {
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
        public static class CVoiceContainerBlender {
            public const nint m_firstSound = 0xC0; // CSoundContainerReference
            public const nint m_secondSound = 0xD8; // CSoundContainerReference
            public const nint m_flBlendFactor = 0xF0; // float32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixFreeverbDesc_t {
            public const nint m_flRoomSize = 0x0; // float32
            public const nint m_flDamp = 0x4; // float32
            public const nint m_flWidth = 0x8; // float32
            public const nint m_flLateReflections = 0xC; // float32
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoiceContainerStaticAdditiveSynth__CHarmonic {
            public const nint m_nWaveform = 0x0; // EWaveform
            public const nint m_nFundamental = 0x1; // EMidiNote
            public const nint m_nOctave = 0x4; // int32
            public const nint m_flCents = 0x8; // float32
            public const nint m_flPhase = 0xC; // float32
            public const nint m_curve = 0x10; // CPiecewiseCurve
            public const nint m_volumeScaling = 0x50; // CVoiceContainerStaticAdditiveSynth::CGainScalePerInstance
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoiceContainerStaticAdditiveSynth__CTone {
            public const nint m_harmonics = 0x0; // CUtlVector<CVoiceContainerStaticAdditiveSynth::CHarmonic>
            public const nint m_curve = 0x18; // CPiecewiseCurve
            public const nint m_bSyncInstances = 0x58; // bool
        }
        // Parent: CVoiceContainerBase
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerRandomSampler {
            public const nint m_flAmplitude = 0xC0; // float32
            public const nint m_flAmplitudeJitter = 0xC4; // float32
            public const nint m_flTimeJitter = 0xC8; // float32
            public const nint m_flMaxLength = 0xCC; // float32
            public const nint m_nNumDelayVariations = 0xD0; // int32
            public const nint m_grainResources = 0xD8; // CUtlVector<CStrongHandle<InfoForResourceTypeCVoiceContainerBase>>
        }
        // Parent: CVoiceContainerBase
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerDefault {
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVSound {
            public const nint m_nRate = 0x0; // int32
            public const nint m_nFormat = 0x4; // CVSoundFormat_t
            public const nint m_nChannels = 0x8; // uint32
            public const nint m_nLoopStart = 0xC; // int32
            public const nint m_nSampleCount = 0x10; // uint32
            public const nint m_flDuration = 0x14; // float32
            public const nint m_Sentences = 0x18; // CUtlVector<CAudioSentence>
            public const nint m_nStreamingSize = 0x30; // uint32
            public const nint m_nSeekTable = 0x38; // CUtlVector<int32>
            public const nint m_nLoopEnd = 0x50; // int32
            public const nint m_encodedHeader = 0x58; // CUtlBinaryBlock
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataNodeType
        public static class CDSPPresetMixgroupModifierTable {
            public const nint m_table = 0x0; // CUtlVector<CDspPresetModifierList>
        }
        // Parent: CSosGroupActionSchema
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSosGroupActionSoundeventClusterSchema {
            public const nint m_nMinNearby = 0x18; // int32
            public const nint m_flClusterEpsilon = 0x1C; // float32
            public const nint m_shouldPlayOpvar = 0x20; // CUtlString
            public const nint m_shouldPlayClusterChild = 0x28; // CUtlString
            public const nint m_clusterSizeOpvar = 0x30; // CUtlString
            public const nint m_groupBoundingBoxMinsOpvar = 0x38; // CUtlString
            public const nint m_groupBoundingBoxMaxsOpvar = 0x40; // CUtlString
        }
        // Parent: CSosGroupActionSchema
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSosGroupActionSetSoundeventParameterSchema {
            public const nint m_nMaxCount = 0x18; // int32
            public const nint m_flMinValue = 0x1C; // float32
            public const nint m_flMaxValue = 0x20; // float32
            public const nint m_opvarName = 0x28; // CUtlString
            public const nint m_nSortType = 0x30; // SosActionSortType_t
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSoundContainerReference {
            public const nint m_bUseReference = 0x0; // bool
            public const nint m_sound = 0x8; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
            public const nint m_pSound = 0x10; // CVoiceContainerBase*
        }
        // Parent: CVoiceContainerBase
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerNull {
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixSubgraphSwitchDesc_t {
            public const nint m_interpolationMode = 0x0; // VMixSubgraphSwitchInterpolationType_t
            public const nint m_bOnlyTailsOnFadeOut = 0x4; // bool
            public const nint m_flInterpolationTime = 0x8; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataNodeType
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerAnalysisBase {
            public const nint m_bRegenerateCurveOnCompile = 0x8; // bool
            public const nint m_curve = 0x10; // CPiecewiseCurve
        }
        // Parent: CSosGroupActionSchema
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSosGroupActionSoundeventMinMaxValuesSchema {
            public const nint m_strQueryPublicFieldName = 0x18; // CUtlString
            public const nint m_strDelayPublicFieldName = 0x20; // CUtlString
            public const nint m_bExcludeStoppedSounds = 0x28; // bool
            public const nint m_bExcludeDelayedSounds = 0x29; // bool
            public const nint m_bExcludeSoundsBelowThreshold = 0x2A; // bool
            public const nint m_flExcludeSoundsMinThresholdValue = 0x2C; // float32
            public const nint m_bExcludSoundsAboveThreshold = 0x30; // bool
            public const nint m_flExcludeSoundsMaxThresholdValue = 0x34; // float32
            public const nint m_strMinValueName = 0x38; // CUtlString
            public const nint m_strMaxValueName = 0x40; // CUtlString
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixPannerDesc_t {
            public const nint m_type = 0x0; // VMixPannerType_t
            public const nint m_flStrength = 0x4; // float32
        }
        // Parent: CSosGroupActionSchema
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSosGroupActionSoundeventPrioritySchema {
            public const nint m_priorityValue = 0x18; // CUtlString
            public const nint m_priorityVolumeScalar = 0x20; // CUtlString
            public const nint m_priorityContributeButDontRead = 0x28; // CUtlString
            public const nint m_bPriorityReadButDontContribute = 0x30; // CUtlString
        }
        // Parent: CVoiceContainerBase
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerRealtimeFMSineWave {
            public const nint m_flCarrierFrequency = 0xC0; // float32
            public const nint m_flModulatorFrequency = 0xC4; // float32
            public const nint m_flModulatorAmount = 0xC8; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SelectedEditItemInfo_t {
            public const nint m_EditItems = 0x0; // CUtlVector<SosEditItemInfo_t>
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixModDelayDesc_t {
            public const nint m_feedbackFilter = 0x0; // VMixFilterDesc_t
            public const nint m_bPhaseInvert = 0x10; // bool
            public const nint m_flGlideTime = 0x14; // float32
            public const nint m_flDelay = 0x18; // float32
            public const nint m_flOutputGain = 0x1C; // float32
            public const nint m_flFeedbackGain = 0x20; // float32
            public const nint m_flModRate = 0x24; // float32
            public const nint m_flModDepth = 0x28; // float32
            public const nint m_bApplyAntialiasing = 0x2C; // bool
        }
        // Parent: None
        // Field count: 17
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixBoxverbDesc_t {
            public const nint m_flSizeMax = 0x0; // float32
            public const nint m_flSizeMin = 0x4; // float32
            public const nint m_flComplexity = 0x8; // float32
            public const nint m_flDiffusion = 0xC; // float32
            public const nint m_flModDepth = 0x10; // float32
            public const nint m_flModRate = 0x14; // float32
            public const nint m_bParallel = 0x18; // bool
            public const nint m_filterType = 0x1C; // VMixFilterDesc_t
            public const nint m_flWidth = 0x2C; // float32
            public const nint m_flHeight = 0x30; // float32
            public const nint m_flDepth = 0x34; // float32
            public const nint m_flFeedbackScale = 0x38; // float32
            public const nint m_flFeedbackWidth = 0x3C; // float32
            public const nint m_flFeedbackHeight = 0x40; // float32
            public const nint m_flFeedbackDepth = 0x44; // float32
            public const nint m_flOutputGain = 0x48; // float32
            public const nint m_flTaps = 0x4C; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CSosGroupActionSchema {
            public const nint m_name = 0x8; // CUtlString
            public const nint m_actionType = 0x10; // ActionType_t
            public const nint m_actionInstanceType = 0x14; // ActionType_t
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CSosSoundEventGroupSchema {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_nType = 0x8; // SosGroupType_t
            public const nint m_bIsBlocking = 0xC; // bool
            public const nint m_nBlockMaxCount = 0x10; // int32
            public const nint m_bInvertMatch = 0x14; // bool
            public const nint m_matchPattern = 0x18; // CSosGroupMatchPattern
            public const nint m_branchPattern = 0x48; // CSosGroupBranchPattern
            public const nint m_flLifeSpanTime = 0x58; // float32
            public const nint m_vActions = 0xC0; // CSosGroupActionSchema*[4]
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSosGroupBranchPattern {
            public const nint m_bMatchEventName = 0x8; // bool
            public const nint m_bMatchEventSubString = 0x9; // bool
            public const nint m_bMatchEntIndex = 0xA; // bool
            public const nint m_bMatchOpvar = 0xB; // bool
            public const nint m_bMatchString = 0xC; // bool
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixDynamics3BandDesc_t {
            public const nint m_fldbGainOutput = 0x0; // float32
            public const nint m_flRMSTimeMS = 0x4; // float32
            public const nint m_fldbKneeWidth = 0x8; // float32
            public const nint m_flDepth = 0xC; // float32
            public const nint m_flWetMix = 0x10; // float32
            public const nint m_flTimeScale = 0x14; // float32
            public const nint m_flLowCutoffFreq = 0x18; // float32
            public const nint m_flHighCutoffFreq = 0x1C; // float32
            public const nint m_bPeakMode = 0x20; // bool
            public const nint m_bandDesc = 0x24; // VMixDynamicsBand_t[3]
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDSPMixgroupModifier {
            public const nint m_mixgroup = 0x0; // CUtlString
            public const nint m_flModifier = 0x8; // float32
            public const nint m_flModifierMin = 0xC; // float32
            public const nint m_flSourceModifier = 0x10; // float32
            public const nint m_flSourceModifierMin = 0x14; // float32
            public const nint m_flListenerReverbModifierWhenSourceReverbIsActive = 0x18; // float32
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAudioMorphData {
            public const nint m_times = 0x0; // CUtlVector<float32>
            public const nint m_nameHashCodes = 0x18; // CUtlVector<uint32>
            public const nint m_nameStrings = 0x30; // CUtlVector<CUtlString>
            public const nint m_samples = 0x48; // CUtlVector<CUtlVector<float32>>
            public const nint m_flEaseIn = 0x60; // float32
            public const nint m_flEaseOut = 0x64; // float32
        }
        // Parent: CVoiceContainerBase
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerStaticAdditiveSynth {
            public const nint m_tones = 0xC0; // CUtlVector<CVoiceContainerStaticAdditiveSynth::CTone>
        }
        // Parent: CVoiceContainerBase
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerShapedNoise {
            public const nint m_bUseCurveForFrequency = 0xC0; // bool
            public const nint m_flFrequency = 0xC4; // float32
            public const nint m_frequencySweep = 0xC8; // CPiecewiseCurve
            public const nint m_bUseCurveForResonance = 0x108; // bool
            public const nint m_flResonance = 0x10C; // float32
            public const nint m_resonanceSweep = 0x110; // CPiecewiseCurve
            public const nint m_bUseCurveForAmplitude = 0x150; // bool
            public const nint m_flGainInDecibels = 0x154; // float32
            public const nint m_gainSweep = 0x158; // CPiecewiseCurve
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDspPresetModifierList {
            public const nint m_dspName = 0x0; // CUtlString
            public const nint m_modifiers = 0x8; // CUtlVector<CDSPMixgroupModifier>
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
        public static class CVoiceContainerBase {
            public const nint m_vSound = 0x38; // CVSound
            public const nint m_pEnvelopeAnalyzer = 0xB8; // CVoiceContainerAnalysisBase*
        }
        // Parent: CVoiceContainerBase
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CVoiceContainerGranulator {
            public const nint m_flGrainLength = 0xC0; // float32
            public const nint m_flGrainCrossfadeAmount = 0xC4; // float32
            public const nint m_flStartJitter = 0xC8; // float32
            public const nint m_flPlaybackJitter = 0xCC; // float32
            public const nint m_sourceAudio = 0xD0; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixDelayDesc_t {
            public const nint m_feedbackFilter = 0x0; // VMixFilterDesc_t
            public const nint m_bEnableFilter = 0x10; // bool
            public const nint m_flDelay = 0x14; // float32
            public const nint m_flDirectGain = 0x18; // float32
            public const nint m_flDelayGain = 0x1C; // float32
            public const nint m_flFeedbackGain = 0x20; // float32
            public const nint m_flWidth = 0x24; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixEQ8Desc_t {
            public const nint m_stages = 0x0; // VMixFilterDesc_t[8]
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAudioPhonemeTag {
            public const nint m_flStartTime = 0x0; // float32
            public const nint m_flEndTime = 0x4; // float32
            public const nint m_nPhonemeCode = 0x8; // int32
        }
        // Parent: CSosGroupActionSchema
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSosGroupActionSoundeventCountSchema {
            public const nint m_bExcludeStoppedSounds = 0x18; // bool
            public const nint m_strCountKeyName = 0x20; // CUtlString
        }
        // Parent: CVoiceContainerAnalysisBase
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerEnvelopeAnalyzer {
            public const nint m_mode = 0x50; // EMode_t
            public const nint m_nSamples = 0x54; // int32
            public const nint m_flThreshold = 0x58; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSoundEventMetaData {
            public const nint m_soundEventVMix = 0x0; // CStrongHandle<InfoForResourceTypeCVMixListResource>
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixPitchShiftDesc_t {
            public const nint m_nGrainSampleCount = 0x0; // int32
            public const nint m_flPitchShift = 0x4; // float32
            public const nint m_nQuality = 0x8; // int32
            public const nint m_nProcType = 0xC; // int32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAudioEmphasisSample {
            public const nint m_flTime = 0x0; // float32
            public const nint m_flValue = 0x4; // float32
        }
        // Parent: CVoiceContainerBase
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerSet {
            public const nint m_soundsToPlay = 0xC0; // CUtlVector<CVoiceContainerSetElement>
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixConvolutionDesc_t {
            public const nint m_fldbGain = 0x0; // float32
            public const nint m_flPreDelayMS = 0x4; // float32
            public const nint m_flWetMix = 0x8; // float32
            public const nint m_fldbLow = 0xC; // float32
            public const nint m_fldbMid = 0x10; // float32
            public const nint m_fldbHigh = 0x14; // float32
            public const nint m_flLowCutoffFreq = 0x18; // float32
            public const nint m_flHighCutoffFreq = 0x1C; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoiceContainerSetElement {
            public const nint m_sound = 0x0; // CSoundContainerReference
            public const nint m_flVolumeDB = 0x18; // float32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSoundInfoHeader {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSosSoundEventGroupListSchema {
            public const nint m_groupList = 0x0; // CUtlVector<CSosSoundEventGroupSchema>
        }
        // Parent: CSosGroupBranchPattern
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSosGroupMatchPattern {
            public const nint m_matchSoundEventName = 0x10; // CUtlString
            public const nint m_matchSoundEventSubString = 0x18; // CUtlString
            public const nint m_flEntIndex = 0x20; // float32
            public const nint m_flOpvar = 0x24; // float32
            public const nint m_opvarString = 0x28; // CUtlString
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SosEditItemInfo_t {
            public const nint itemType = 0x0; // SosEditItemType_t
            public const nint itemName = 0x8; // CUtlString
            public const nint itemTypeName = 0x10; // CUtlString
            public const nint itemKVString = 0x20; // CUtlString
            public const nint itemPos = 0x28; // Vector2D
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixPlateverbDesc_t {
            public const nint m_flPrefilter = 0x0; // float32
            public const nint m_flInputDiffusion1 = 0x4; // float32
            public const nint m_flInputDiffusion2 = 0x8; // float32
            public const nint m_flDecay = 0xC; // float32
            public const nint m_flDamp = 0x10; // float32
            public const nint m_flFeedbackDiffusion1 = 0x14; // float32
            public const nint m_flFeedbackDiffusion2 = 0x18; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSoundContainerReferenceArray {
            public const nint m_bUseReference = 0x0; // bool
            public const nint m_sounds = 0x8; // CUtlVector<CStrongHandle<InfoForResourceTypeCVoiceContainerBase>>
            public const nint m_pSounds = 0x20; // CUtlVector<CVoiceContainerBase*>
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixDiffusorDesc_t {
            public const nint m_flSize = 0x0; // float32
            public const nint m_flComplexity = 0x4; // float32
            public const nint m_flFeedback = 0x8; // float32
            public const nint m_flOutputGain = 0xC; // float32
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixDynamicsCompressorDesc_t {
            public const nint m_fldbOutputGain = 0x0; // float32
            public const nint m_fldbCompressionThreshold = 0x4; // float32
            public const nint m_fldbKneeWidth = 0x8; // float32
            public const nint m_flCompressionRatio = 0xC; // float32
            public const nint m_flAttackTimeMS = 0x10; // float32
            public const nint m_flReleaseTimeMS = 0x14; // float32
            public const nint m_flRMSTimeMS = 0x18; // float32
            public const nint m_flWetMix = 0x1C; // float32
            public const nint m_bPeakMode = 0x20; // bool
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixShaperDesc_t {
            public const nint m_nShape = 0x0; // int32
            public const nint m_fldbDrive = 0x4; // float32
            public const nint m_fldbOutputGain = 0x8; // float32
            public const nint m_flWetMix = 0xC; // float32
            public const nint m_nOversampleFactor = 0x10; // int32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixEnvelopeDesc_t {
            public const nint m_flAttackTimeMS = 0x0; // float32
            public const nint m_flHoldTimeMS = 0x4; // float32
            public const nint m_flReleaseTimeMS = 0x8; // float32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAudioSentence {
            public const nint m_bShouldVoiceDuck = 0x0; // bool
            public const nint m_RunTimePhonemes = 0x8; // CUtlVector<CAudioPhonemeTag>
            public const nint m_EmphasisSamples = 0x20; // CUtlVector<CAudioEmphasisSample>
            public const nint m_morphData = 0x38; // CAudioMorphData
        }
        // Parent: CSosGroupActionSchema
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSosGroupActionLimitSchema {
            public const nint m_nMaxCount = 0x18; // int32
            public const nint m_nStopType = 0x1C; // SosActionStopType_t
            public const nint m_nSortType = 0x20; // SosActionSortType_t
        }
        // Parent: CVoiceContainerDecayingSineWave
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerAmpedDecayingSineWave {
            public const nint m_flGainAmount = 0xC8; // float32
        }
        // Parent: CVoiceContainerBase
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerEnvelope {
            public const nint m_sound = 0xC0; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
            public const nint m_analysisContainer = 0xC8; // CVoiceContainerAnalysisBase*
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixAutoFilterDesc_t {
            public const nint m_flEnvelopeAmount = 0x0; // float32
            public const nint m_flAttackTimeMS = 0x4; // float32
            public const nint m_flReleaseTimeMS = 0x8; // float32
            public const nint m_filter = 0xC; // VMixFilterDesc_t
            public const nint m_flLFOAmount = 0x1C; // float32
            public const nint m_flLFORate = 0x20; // float32
            public const nint m_flPhase = 0x24; // float32
            public const nint m_nLFOShape = 0x28; // VMixLFOShape_t
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixDynamicsBand_t {
            public const nint m_fldbGainInput = 0x0; // float32
            public const nint m_fldbGainOutput = 0x4; // float32
            public const nint m_fldbThresholdBelow = 0x8; // float32
            public const nint m_fldbThresholdAbove = 0xC; // float32
            public const nint m_flRatioBelow = 0x10; // float32
            public const nint m_flRatioAbove = 0x14; // float32
            public const nint m_flAttackTimeMS = 0x18; // float32
            public const nint m_flReleaseTimeMS = 0x1C; // float32
            public const nint m_bEnable = 0x20; // bool
            public const nint m_bSolo = 0x21; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixEffectChainDesc_t {
            public const nint m_flCrossfadeTime = 0x0; // float32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoiceContainerStaticAdditiveSynth__CGainScalePerInstance {
            public const nint m_flMinVolume = 0x0; // float32
            public const nint m_nInstancesAtMinVolume = 0x4; // int32
            public const nint m_flMaxVolume = 0x8; // float32
            public const nint m_nInstancesAtMaxVolume = 0xC; // int32
        }
        // Parent: CVoiceContainerBase
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerSelector {
            public const nint m_mode = 0xC0; // PlayBackMode_t
            public const nint m_soundsToPlay = 0xC8; // CSoundContainerReferenceArray
            public const nint m_fProbabilityWeights = 0x100; // CUtlVector<float32>
        }
        // Parent: CSosGroupActionSchema
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSosGroupActionTimeBlockLimitSchema {
            public const nint m_nMaxCount = 0x18; // int32
            public const nint m_flMaxDuration = 0x1C; // float32
        }
        // Parent: CVoiceContainerBase
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CTestBlendContainer {
            public const nint m_firstSound = 0xC0; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
            public const nint m_secondSound = 0xC8; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
        }
        // Parent: CSosGroupActionSchema
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSosGroupActionMemberCountEnvelopeSchema {
            public const nint m_nBaseCount = 0x18; // int32
            public const nint m_nTargetCount = 0x1C; // int32
            public const nint m_flBaseValue = 0x20; // float32
            public const nint m_flTargetValue = 0x24; // float32
            public const nint m_flAttack = 0x28; // float32
            public const nint m_flDecay = 0x2C; // float32
            public const nint m_resultVarName = 0x30; // CUtlString
            public const nint m_bSaveToGroup = 0x38; // bool
        }
        // Parent: CVoiceContainerBase
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerSwitch {
            public const nint m_soundsToPlay = 0xC0; // CUtlVector<CSoundContainerReference>
        }
        // Parent: CSosGroupActionSchema
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSosGroupActionTimeLimitSchema {
            public const nint m_flMaxDuration = 0x18; // float32
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixVocoderDesc_t {
            public const nint m_nBandCount = 0x0; // int32
            public const nint m_flBandwidth = 0x4; // float32
            public const nint m_fldBModGain = 0x8; // float32
            public const nint m_flFreqRangeStart = 0xC; // float32
            public const nint m_flFreqRangeEnd = 0x10; // float32
            public const nint m_fldBUnvoicedGain = 0x14; // float32
            public const nint m_flAttackTimeMS = 0x18; // float32
            public const nint m_flReleaseTimeMS = 0x1C; // float32
            public const nint m_nDebugBand = 0x20; // int32
            public const nint m_bPeakMode = 0x24; // bool
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixUtilityDesc_t {
            public const nint m_nOp = 0x0; // VMixChannelOperation_t
            public const nint m_flInputPan = 0x4; // float32
            public const nint m_flOutputBalance = 0x8; // float32
            public const nint m_fldbOutputGain = 0xC; // float32
            public const nint m_bBassMono = 0x10; // bool
            public const nint m_flBassFreq = 0x14; // float32
        }
        // Parent: CVoiceContainerBase
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerLoopTrigger {
            public const nint m_sound = 0xC0; // CSoundContainerReference
            public const nint m_flRetriggerTimeMin = 0xD8; // float32
            public const nint m_flRetriggerTimeMax = 0xDC; // float32
            public const nint m_flFadeTime = 0xE0; // float32
            public const nint m_bCrossFade = 0xE4; // bool
        }
        // Parent: CVoiceContainerBase
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerDecayingSineWave {
            public const nint m_flFrequency = 0xC0; // float32
            public const nint m_flDecayTime = 0xC4; // float32
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixFilterDesc_t {
            public const nint m_nFilterType = 0x0; // VMixFilterType_t
            public const nint m_nFilterSlope = 0x2; // VMixFilterSlope_t
            public const nint m_bEnabled = 0x3; // bool
            public const nint m_fldbGain = 0x4; // float32
            public const nint m_flCutoffFreq = 0x8; // float32
            public const nint m_flQ = 0xC; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixOscDesc_t {
            public const nint oscType = 0x0; // VMixLFOShape_t
            public const nint m_freq = 0x4; // float32
            public const nint m_flPhase = 0x8; // float32
        }
        // Parent: None
        // Field count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixDynamicsDesc_t {
            public const nint m_fldbGain = 0x0; // float32
            public const nint m_fldbNoiseGateThreshold = 0x4; // float32
            public const nint m_fldbCompressionThreshold = 0x8; // float32
            public const nint m_fldbLimiterThreshold = 0xC; // float32
            public const nint m_fldbKneeWidth = 0x10; // float32
            public const nint m_flRatio = 0x14; // float32
            public const nint m_flLimiterRatio = 0x18; // float32
            public const nint m_flAttackTimeMS = 0x1C; // float32
            public const nint m_flReleaseTimeMS = 0x20; // float32
            public const nint m_flRMSTimeMS = 0x24; // float32
            public const nint m_flWetMix = 0x28; // float32
            public const nint m_bPeakMode = 0x2C; // bool
        }
    }
}
