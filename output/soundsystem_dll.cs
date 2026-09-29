// Generated using https://github.com/a2x/cs2-dumper
// 2026-09-29 08:54:33.699279 UTC

namespace CS2Dumper.Schemas {
    // Module: soundsystem.dll
    // Class count: 158
    // Enum count: 34
    public static class SoundsystemDll {
        // Alignment: 4
        // Member count: 3
        public enum SndSeqInstrumentType_t : uint {
            eSndSeqInstNull = 0x0,
            eSndSeqInstSndEvt = 0x1,
            eSndSeqInstMidiSampler = 0x2
        }
        // Alignment: 4
        // Member count: 2
        public enum EMode_t : uint {
            Peak = 0x0,
            RMS = 0x1
        }
        // Alignment: 4
        // Member count: 7
        public enum SndBeatMidiStatusType_t : uint {
            SndSeqMidiStatusNoteOff = 0x8,
            SndSeqMidiStatusNoteOn = 0x9,
            SndSeqMidiStatusKeyPressure = 0xA,
            SndSeqMidiStatusCtrlChange = 0xB,
            SndSeqMidiStatusProgramChange = 0xC,
            SndSeqMidiStatusChannelPressure = 0xD,
            SndSeqMidiStatusPitchBend = 0xE
        }
        // Alignment: 4
        // Member count: 34
        public enum VMixGraphCommandID_t : uint {
            CMD_INVALID = unchecked((uint)-1),
            CMD_CONTROL_CONVERT_DB_TO_GAIN = 0x1,
            CMD_CONTROL_TRANSIENT_INPUT_STORE = 0x2,
            CMD_CONTROL_TRANSIENT_INPUT_RESET = 0x3,
            CMD_CONTROL_OUTPUT_STORE = 0x4,
            CMD_CONTROL_EVALUATE_CURVE = 0x5,
            CMD_CONTROL_COPY = 0x6,
            CMD_CONTROL_COND_COPY_IF_NEGATIVE = 0x7,
            CMD_CONTROL_REMAP_LINEAR = 0x8,
            CMD_CONTROL_REMAP_SINE = 0x9,
            CMD_CONTROL_REMAP_LOGLINEAR = 0xA,
            CMD_CONTROL_MAX = 0xB,
            CMD_CONTROL_RESET_TIMER = 0xC,
            CMD_CONTROL_INCREMENT_TIMER = 0xD,
            CMD_CONTROL_EVAL_ENVELOPE = 0xE,
            CMD_CONTROL_SINE_BLEND = 0xF,
            CMD_SUBMIX_PROCESS = 0x10,
            CMD_SUBMIX_GENERATE = 0x11,
            CMD_SUBMIX_GENERATE_SIDECHAIN = 0x12,
            CMD_SUBMIX_EXTRACTCONTAINER = 0x13,
            CMD_SUBMIX_DEBUG = 0x14,
            CMD_SUBMIX_MIX2x1 = 0x15,
            CMD_SUBMIX_OUTPUT = 0x16,
            CMD_SUBMIX_OUTPUTx2 = 0x17,
            CMD_SUBMIX_COPY = 0x18,
            CMD_SUBMIX_ACCUMULATE = 0x19,
            CMD_SUBMIX_METER = 0x1A,
            CMD_SUBMIX_METER_SPECTRUM = 0x1B,
            CMD_IMPULSERESPONSE_INPUT_STORE = 0x1C,
            CMD_PROCESSOR_SET_IMPULSERESPONSE_VALUE = 0x1D,
            CMD_REMAP_VSND_TO_IMPULSERESPONSE = 0x1E,
            CMD_IMPULSERESPONSE_RESET = 0x1F,
            CMD_BLEND_VSNDS_TO_IMPULSERESPONSE = 0x20,
            CMD_IMPULSERESPONSE_DELAY = 0x21
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
        // Alignment: 1
        // Member count: 6
        public enum VMixFilterChannelSet_t : byte {
            FILTER_ALL_CHANNELS = 0x0,
            FILTER_LEFT_ONLY = 0x1,
            FILTER_RIGHT_ONLY = 0x2,
            FILTER_MID_ONLY = 0x3,
            FILTER_SIDE_ONLY = 0x4,
            FILTER_CHANNEL_SET_MAX = 0x5
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
        // Alignment: 4
        // Member count: 13
        public enum VMixOffsetType_t : uint {
            VO_CHAR = 0x0,
            VO_ARRAY = 0x1,
            VO_BOOL = 0x2,
            VO_FLOAT = 0x3,
            VO_UINT32 = 0x4,
            VO_INT32 = 0x5,
            VO_VECTOR = 0x6,
            VO_QUATERNION = 0x7,
            VO_CUBIC_SPLINE = 0x8,
            VO_VSND_INPUT = 0x9,
            VO_FLOAT_UTLVECTOR = 0xA,
            VO_SHAREDPTR_IR = 0xB,
            VO_TYPE_COUNT = 0xC
        }
        // Alignment: 1
        // Member count: 5
        public enum VMixMixDownRule_t : byte {
            SUM = 0x0,
            LEFT = 0x1,
            RIGHT = 0x2,
            MID = 0x3,
            SIDE = 0x4
        }
        // Alignment: 1
        // Member count: 10
        public enum VMixFilterType_t : byte {
            FILTER_UNKNOWN = unchecked((byte)-1),
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
        // Member count: 2
        public enum SndBeatTrackPlaybackType_t : uint {
            eSndBeatTrackPlaybackTypeStep = 0x0,
            eSndBeatTrackPlaybackTypeFwd = 0x1
        }
        // Alignment: 2
        // Member count: 10
        public enum VMixSendOperator_t : ushort {
            NO_VOICES = unchecked((ushort)-1),
            ALL_VOICES = 0x0,
            ROOM_VOICES = 0x1,
            FACING_VOICES = 0x2,
            MIXGROUP_VOICES = 0x3,
            NAMED_SEND = 0x4,
            INVERSE_NAMED_SENDS = 0x5,
            INVERSE_TOTAL_SEND = 0x6,
            ALL_MAX_SEND = 0x7,
            TRACK = 0x8
        }
        // Alignment: 4
        // Member count: 6
        public enum SndBeatEventType_t : uint {
            eSndBeatEventTypeInvalid = 0x0,
            eSndBeatEventTypeBeat = 0x1,
            eSndBeatEventTypeBar = 0x2,
            eSndBeatEventTypePhrase = 0x3,
            eSndBeatEventTypeLength = 0x4,
            eSndBeatEventTypeKeys = 0x5
        }
        // Alignment: 4
        // Member count: 3
        public enum SosActionStopType_t : uint {
            SOS_STOPTYPE_NONE = 0x0,
            SOS_STOPTYPE_TIME = 0x1,
            SOS_STOPTYPE_OPVAR = 0x2
        }
        // Alignment: 4
        // Member count: 5
        public enum SndBeatKeyType_t : uint {
            eSndBeatPatternTypeNone = 0x0,
            eSndBeatPatternTypeKeys = 0x1,
            eSndBeatPatternTypeKeyedFloats = 0x2,
            eSndBeatPatternTypeKeyedSndEvts = 0x3,
            eSndBeatPatternTypeKeyedMidi = 0x4
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
        // Member count: 3
        public enum SndBeatSyncType_t : uint {
            eSndBeatSyncTypeInvalid = 0x0,
            eSndBeatSyncTypeReset = 0x1,
            eSndBeatSyncTypeSeekImmediate = 0x2
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
        // Alignment: 4
        // Member count: 2
        public enum EVsndTriggerMode : uint {
            Trigger = 0x0,
            Gate = 0x1
        }
        // Alignment: 4
        // Member count: 3
        public enum SosGroupFieldBehavior_t : uint {
            kIgnore = 0x0,
            kBranch = 0x1,
            kMatch = 0x2
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
        // Member count: 14
        public enum VMixAutoControlType_t : byte {
            VMIX_AUTO_SEND_LEVEL = 0x0,
            VMIX_AUTO_STACK_VAR = 0x1,
            VMIX_AUTO_PLAYTIME = 0x2,
            VMIX_AUTO_DISTANCE = 0x3,
            VMIX_AUTO_POSITION_X = 0x4,
            VMIX_AUTO_POSITION_Y = 0x5,
            VMIX_AUTO_POSITION_Z = 0x6,
            VMIX_AUTO_POSITION_VECTOR = 0x7,
            VMIX_AUTO_LISTENER_YAW_SIN = 0x8,
            VMIX_AUTO_LISTENER_YAW_COS = 0x9,
            VMIX_AUTO_LISTENER_PITCH_SIN = 0xA,
            VMIX_AUTO_LISTENER_PITCH_COS = 0xB,
            VMIX_AUTO_LISTENER_ROLL_SIN = 0xC,
            VMIX_AUTO_LISTENER_ROLL_COS = 0xD
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
        // Member count: 2
        public enum SosActionLimitSortType_t : uint {
            SOS_LIMIT_SORTTYPE_HIGHEST = 0x0,
            SOS_LIMIT_SORTTYPE_LOWEST = 0x1
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
        // Alignment: 4
        // Member count: 4
        public enum VMixOffsetCategory_t : uint {
            NULL_POINTER = 0x0,
            HEAP_OFFSET = 0x1,
            INPUT_INDEX = 0x2,
            SUBMIX_INDEX = 0x3
        }
        // Alignment: 4
        // Member count: 3
        public enum SndBeatSyncStartType_t : uint {
            eSndBeatSyncStartTypeInvalid = 0x0,
            eSndBeatSyncStartTypeImmediate = 0x1,
            eSndBeatSyncStartTypeQueue = 0x2
        }
        // Alignment: 4
        // Member count: 2
        public enum SosActionSetParamSortType_t : uint {
            SOS_SETPARAM_SORTTYPE_HIGHEST = 0x0,
            SOS_SETPARAM_SORTTYPE_LOWEST = 0x1
        }
        // Alignment: 4
        // Member count: 2
        public enum EVsndPlaybackMode : uint {
            Trigger = 0x0,
            Gate = 0x1
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixInputBase {
            public const nint m_name = 0x0; // CUtlString
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerBlender {
            public const nint m_firstSound = 0x70; // CSoundContainerReference
            public const nint m_secondSound = 0x90; // CSoundContainerReference
            public const nint m_flBlendFactor = 0xB0; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixPitchShiftProcessorDesc {
            public const nint m_desc = 0x28; // VMixPitchShiftDesc_t
            public const nint m_paramPitchScale = 0x38; // CVMixParameterFloat
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
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVsndTriggerSlot {
            public const nint m_bEnableVsnd = 0x0; // bool
            public const nint m_vsnd = 0x8; // CSoundContainerReference
            public const nint m_bEnableEndcap = 0x28; // bool
            public const nint m_endcapVsnd = 0x30; // CSoundContainerReference
            public const nint m_bEnableLoopcap = 0x50; // bool
            public const nint m_loopcapVsnd = 0x58; // CSoundContainerReference
            public const nint m_volume = 0x78; // float32
            public const nint m_fadeOut = 0x7C; // float32
            public const nint m_mode = 0x80; // EVsndTriggerMode
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
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CSosGroupActionOcclusionSchema {
            public const nint m_flCalculationInterval = 0x8; // float32
            public const nint m_flRadius = 0xC; // float32
            public const nint m_flOcclusionScale = 0x10; // float32
            public const nint m_flOcclusionMin = 0x14; // float32
            public const nint m_flOcclusionMax = 0x18; // float32
            public const nint m_flTestDepth = 0x1C; // float32
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerRandomSampler {
            public const nint m_flAmplitude = 0x80; // float32
            public const nint m_flAmplitudeJitter = 0x84; // float32
            public const nint m_flTimeJitter = 0x88; // float32
            public const nint m_flMaxLength = 0x8C; // float32
            public const nint m_nNumDelayVariations = 0x90; // int32
            public const nint m_grainResources = 0x98; // CUtlVector<CStrongHandle<InfoForResourceTypeCVoiceContainerBase>>
        }
        // Parent: None
        // Field count: 25
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixSteamAudioDirectProcessorDesc {
            public const nint m_paramPositionX = 0x28; // CVMixParameterFloat
            public const nint m_paramPositionY = 0x2C; // CVMixParameterFloat
            public const nint m_paramPositionZ = 0x30; // CVMixParameterFloat
            public const nint m_paramRightX = 0x34; // CVMixParameterFloat
            public const nint m_paramRightY = 0x38; // CVMixParameterFloat
            public const nint m_paramRightZ = 0x3C; // CVMixParameterFloat
            public const nint m_paramUpX = 0x40; // CVMixParameterFloat
            public const nint m_paramUpY = 0x44; // CVMixParameterFloat
            public const nint m_paramUpZ = 0x48; // CVMixParameterFloat
            public const nint m_paramAheadX = 0x4C; // CVMixParameterFloat
            public const nint m_paramAheadY = 0x50; // CVMixParameterFloat
            public const nint m_paramAheadZ = 0x54; // CVMixParameterFloat
            public const nint m_paramApplyDistanceAttenuation = 0x58; // CVMixParameterFloat
            public const nint m_paramApplyAirAbsorption = 0x5C; // CVMixParameterFloat
            public const nint m_paramApplyDirectivity = 0x60; // CVMixParameterFloat
            public const nint m_paramApplyOcclusion = 0x64; // CVMixParameterFloat
            public const nint m_paramApplyTransmission = 0x68; // CVMixParameterFloat
            public const nint m_paramDipoleWeight = 0x6C; // CVMixParameterFloat
            public const nint m_paramDipolePower = 0x70; // CVMixParameterFloat
            public const nint m_paramOcclusion = 0x74; // CVMixParameterFloat
            public const nint m_paramTransmissionLow = 0x78; // CVMixParameterFloat
            public const nint m_paramTransmissionMid = 0x7C; // CVMixParameterFloat
            public const nint m_paramTransmissionHigh = 0x80; // CVMixParameterFloat
            public const nint m_paramBand = 0x84; // CVMixParameterFloat
            public const nint m_paramTransmission = 0x88; // CVMixDataOffset
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixSteamAudioHRTFProcessorDesc {
            public const nint m_paramPositionX = 0x28; // CVMixParameterFloat
            public const nint m_paramPositionY = 0x2C; // CVMixParameterFloat
            public const nint m_paramPositionZ = 0x30; // CVMixParameterFloat
            public const nint m_paramInterpolation = 0x34; // CVMixParameterFloat
            public const nint m_paramDirectMixLevel = 0x38; // CVMixParameterFloat
            public const nint m_paramPerspectiveCorrection = 0x3C; // CVMixParameterFloat
            public const nint m_paramRelativePosition = 0x40; // CVMixParameterFloat
            public const nint m_paramDelayLeft = 0x44; // CVMixParameterFloat
            public const nint m_paramDelayRight = 0x48; // CVMixParameterFloat
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerDefault {
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVSound {
            public const nint m_Sentences = 0x0; // CUtlLeanVector<CAudioSentence>
            public const nint m_nRate = 0x10; // int32
            public const nint m_nFormat = 0x14; // CVSoundFormat_t
            public const nint m_nChannels = 0x18; // uint32
            public const nint m_nLoopStart = 0x1C; // int32
            public const nint m_nSampleCount = 0x20; // uint32
            public const nint m_flDuration = 0x24; // float32
            public const nint m_nStreamingSize = 0x28; // uint32
            public const nint m_nLoopEnd = 0x2C; // int32
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
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CSosGroupActionSoundeventClusterSchema {
            public const nint m_nMinNearby = 0x8; // int32
            public const nint m_flClusterEpsilon = 0xC; // float32
            public const nint m_shouldPlayOpvar = 0x10; // CUtlString
            public const nint m_shouldPlayClusterChild = 0x18; // CUtlString
            public const nint m_clusterSizeOpvar = 0x20; // CUtlString
            public const nint m_groupBoundingBoxMinsOpvar = 0x28; // CUtlString
            public const nint m_groupBoundingBoxMaxsOpvar = 0x30; // CUtlString
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CSosGroupActionSetSoundeventParameterSchema {
            public const nint m_nMaxCount = 0x8; // int32
            public const nint m_flMinValue = 0xC; // float32
            public const nint m_flMaxValue = 0x10; // float32
            public const nint m_opvarName = 0x18; // CUtlString
            public const nint m_nSortType = 0x20; // SosActionSetParamSortType_t
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSoundContainerReference {
            public const nint m_namespace = 0x0; // CUtlString
            public const nint m_bUseReference = 0x8; // bool
            public const nint m_sound = 0x10; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
            public const nint m_pSound = 0x18; // CVoiceContainerBase*
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerNull {
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixSubgraphSwitchDesc_t {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_effectName = 0x8; // CUtlString
            public const nint m_subgraphs = 0x10; // CUtlVector<CUtlString>
            public const nint m_interpolationMode = 0x28; // VMixSubgraphSwitchInterpolationType_t
            public const nint m_bOnlyTailsOnFadeOut = 0x2C; // bool
            public const nint m_flInterpolationTime = 0x30; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataNodeType
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerAnalysisBase {
            public const nint m_curve = 0x8; // CPiecewiseCurve
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CSosGroupActionSoundeventMinMaxValuesSchema {
            public const nint m_strQueryPublicFieldName = 0x8; // CUtlString
            public const nint m_strDelayPublicFieldName = 0x10; // CUtlString
            public const nint m_bExcludeStoppedSounds = 0x18; // bool
            public const nint m_bExcludeDelayedSounds = 0x19; // bool
            public const nint m_bExcludeSoundsBelowThreshold = 0x1A; // bool
            public const nint m_flExcludeSoundsMinThresholdValue = 0x1C; // float32
            public const nint m_bExcludSoundsAboveThreshold = 0x20; // bool
            public const nint m_flExcludeSoundsMaxThresholdValue = 0x24; // float32
            public const nint m_strMinValueName = 0x28; // CUtlString
            public const nint m_strMaxValueName = 0x30; // CUtlString
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixEnvelopeProcessorDesc {
            public const nint m_desc = 0x28; // VMixEnvelopeDesc_t
            public const nint m_outParamLevel = 0x34; // CVMixParameterFloat
            public const nint m_outParamdBLevel = 0x38; // CVMixParameterFloat
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixCommand {
            public const nint m_nCommand = 0x0; // VMixGraphCommandID_t
            public const nint m_nParameterNameHash = 0x4; // uint32
            public const nint m_nOutputSubmix = 0x8; // CVMixDataOffset
            public const nint m_nInputSubmix0 = 0xC; // CVMixDataOffset
            public const nint m_nInputSubmix1 = 0x10; // CVMixDataOffset
            public const nint m_nProcessor = 0x14; // int32
            public const nint m_nInputValue0 = 0x18; // CVMixDataOffset
            public const nint m_nInputValue1 = 0x1C; // CVMixDataOffset
        }
        // Parent: None
        // Field count: 1
        public static class SamplerVoice_t {
            public const nint nNoteNum = 0x0; // uint8
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixControlInput {
            public const nint m_flDefaultValue = 0x10; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixBoxverbProcessorDesc {
            public const nint m_desc = 0x28; // VMixBoxverbDesc_t
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixDynamicsCompressorProcessorDesc {
            public const nint m_desc = 0x28; // VMixDynamicsCompressorDesc_t
            public const nint m_outParamLevel = 0x50; // CVMixParameterFloat
            public const nint m_outParamdBLevel = 0x54; // CVMixParameterFloat
            public const nint m_outParamReduction = 0x58; // CVMixParameterFloat
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
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CSosGroupActionSoundeventPrioritySchema {
            public const nint m_priorityValue = 0x8; // CUtlString
            public const nint m_priorityVolumeScalar = 0x10; // CUtlString
            public const nint m_priorityContributeButDontRead = 0x18; // CUtlString
            public const nint m_bPriorityReadButDontContribute = 0x20; // CUtlString
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerRealtimeFMSineWave {
            public const nint m_flCarrierFrequency = 0x70; // float32
            public const nint m_flModulatorFrequency = 0x74; // float32
            public const nint m_flModulatorAmount = 0x78; // float32
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
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CSndSeqInstSndEvtSchema {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixNameInputMeter {
            public const nint m_nValueIndex = 0x10; // CVMixDataOffset
        }
        // Parent: None
        // Field count: 0
        public static class CSndSeqInstruments {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixDynamics3BandProcessorDesc {
            public const nint m_desc = 0x28; // VMixDynamics3BandDesc_t
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
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSosGroupActionSchema {
        }
        // Parent: None
        // Field count: 16
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSosSoundEventGroupSchema {
            public const nint m_nGroupType = 0x8; // SosGroupType_t
            public const nint m_bBlocksEvents = 0xC; // bool
            public const nint m_nBlockMaxCount = 0x10; // int32
            public const nint m_flMemberLifespanTime = 0x14; // float32
            public const nint m_bInvertMatch = 0x18; // bool
            public const nint m_Behavior_EventName = 0x1C; // SosGroupFieldBehavior_t
            public const nint m_matchSoundEventName = 0x20; // CUtlString
            public const nint m_bMatchEventSubString = 0x28; // bool
            public const nint m_matchSoundEventSubString = 0x30; // CUtlString
            public const nint m_Behavior_EntIndex = 0x38; // SosGroupFieldBehavior_t
            public const nint m_flEntIndex = 0x3C; // float32
            public const nint m_Behavior_Opvar = 0x40; // SosGroupFieldBehavior_t
            public const nint m_flOpvar = 0x44; // float32
            public const nint m_Behavior_String = 0x48; // SosGroupFieldBehavior_t
            public const nint m_opvarString = 0x50; // CUtlString
            public const nint m_vActions = 0x58; // CUtlVector<CSosGroupActionSchema*>
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CSndSeqInstMidiSampler {
            public const nint m_bIsSoundEvent = 0x20; // bool
            public const nint m_bStopPrevious = 0x21; // bool
            public const nint m_nMinNote = 0x22; // uint8
            public const nint m_nMaxNote = 0x23; // uint8
            public const nint m_flMinVelocityAtten = 0x24; // float32
            public const nint m_flMaxVelocityAtten = 0x28; // float32
            public const nint m_flAttack = 0x2C; // float32
            public const nint m_flRelease = 0x30; // float32
            public const nint m_bBeatEnvelopes = 0x34; // bool
            public const nint m_nNextVoiceSlot = 0xD4; // uint8
            public const nint m_hSoundEventHash = 0xD8; // uint32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixPointerFixupEntry_t {
            public const nint m_nIndex = 0x0; // uint32
            public const nint m_offset = 0x4; // CVMixDataOffset
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSndSeqInstBaseSchema {
            public const nint m_nType = 0x8; // SndSeqInstrumentType_t
            public const nint m_bStopCurrentEvents = 0xE; // bool
            public const nint m_flBPM = 0x10; // float32
            public const nint m_flBPMFactor = 0x14; // float32
            public const nint m_flBPMInvFactor = 0x18; // float32
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
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixEQ8ProcessorDesc {
            public const nint m_desc = 0x28; // VMixEQ8Desc_t
            public const nint m_paramEQScale = 0xC8; // CVMixParameterFloat
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
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SndBeatEventKeyedFloats_t {
            public const nint m_flFloat = 0x10; // float32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixDualCompressorDesc_t {
            public const nint m_flRMSTimeMS = 0x0; // float32
            public const nint m_fldbKneeWidth = 0x4; // float32
            public const nint m_flWetMix = 0x8; // float32
            public const nint m_bPeakMode = 0xC; // bool
            public const nint m_bandDesc = 0x10; // VMixDynamicsBand_t
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixRuntimeGraph {
            public const nint m_submixes = 0xD0; // CUtlLeanVector<CVMixSubmix>
            public const nint m_impulseResponseValues = 0xE0; // CUtlLeanVector<uint64>
            public const nint m_inputDefaultValues = 0xF0; // KeyValues3
            public const nint m_sources = 0x100; // KeyValues3
            public const nint m_fixups = 0x110; // CUtlVector<VMixPointerFixupEntry_t>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerStaticAdditiveSynth {
            public const nint m_tones = 0x80; // CUtlVector<CVoiceContainerStaticAdditiveSynth::CTone>
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerShapedNoise {
            public const nint m_bUseCurveForFrequency = 0x70; // bool
            public const nint m_flFrequency = 0x74; // float32
            public const nint m_frequencySweep = 0x78; // CPiecewiseCurve
            public const nint m_bUseCurveForResonance = 0xB8; // bool
            public const nint m_flResonance = 0xBC; // float32
            public const nint m_resonanceSweep = 0xC0; // CPiecewiseCurve
            public const nint m_bUseCurveForAmplitude = 0x100; // bool
            public const nint m_flGainInDecibels = 0x104; // float32
            public const nint m_gainSweep = 0x108; // CPiecewiseCurve
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
            public const nint m_vSound = 0x28; // CVSound
            public const nint m_pEnvelopeAnalyzer = 0x68; // CVoiceContainerAnalysisBase*
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixDiffusorProcessorDesc {
            public const nint m_desc = 0x28; // VMixDiffusorDesc_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixUtilityProcessorDesc {
            public const nint m_desc = 0x28; // VMixUtilityDesc_t
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CRandomPannerControls {
            public const nint m_panningControlInputName = 0x0; // CUtlString
            public const nint m_volumeControlInputName = 0x8; // CUtlString
            public const nint m_flMinVolume = 0x10; // float32
            public const nint m_flMaxVolume = 0x14; // float32
            public const nint m_strVectorStackParam = 0x18; // CUtlString
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CVoiceContainerGranulator {
            public const nint m_flGrainLength = 0x80; // float32
            public const nint m_flGrainCrossfadeAmount = 0x84; // float32
            public const nint m_flStartJitter = 0x88; // float32
            public const nint m_flPlaybackJitter = 0x8C; // float32
            public const nint m_bShouldWraparound = 0x90; // bool
            public const nint m_sourceAudio = 0x98; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
            public const nint m_bDoubleBufferSourceAudio = 0xA0; // bool
            public const nint m_flMaxSourceLength = 0xA4; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixPresetDSPProcessorDesc {
            public const nint m_desc = 0x28; // VMixPresetDSPDesc_t
            public const nint m_paramEffectName = 0x38; // CVMixParameterEffectName
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
            public const nint m_stages = 0x0; // VMixEQFilterDesc_t[8]
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixDynamicsProcessorDesc {
            public const nint m_desc = 0x28; // VMixDynamicsDesc_t
            public const nint m_outParamLevel = 0x58; // CVMixParameterFloat
            public const nint m_outParamdBLevel = 0x5C; // CVMixParameterFloat
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixEQFilterDesc_t {
            public const nint m_nChannelSet = 0x10; // VMixFilterChannelSet_t
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerLoopXFade {
            public const nint m_sound = 0x70; // CSoundContainerReference
            public const nint m_flLoopEnd = 0x90; // float32
            public const nint m_flLoopStart = 0x94; // float32
            public const nint m_flFadeOut = 0x98; // float32
            public const nint m_flFadeIn = 0x9C; // float32
            public const nint m_bPlayHead = 0xA0; // bool
            public const nint m_bPlayTail = 0xA1; // bool
            public const nint m_bEqualPow = 0xA2; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixPresetDSPDesc_t {
            public const nint m_effectName = 0x0; // CUtlString
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
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVsndRadioButtonSlot {
            public const nint m_bEnableVsnd = 0x0; // bool
            public const nint m_vsnd = 0x8; // CSoundContainerReference
            public const nint m_bEnableEndcap = 0x28; // bool
            public const nint m_endcapVsnd = 0x30; // CSoundContainerReference
            public const nint m_bEnableLoopcap = 0x50; // bool
            public const nint m_loopcapVsnd = 0x58; // CSoundContainerReference
            public const nint m_group = 0x78; // int32
            public const nint m_volume = 0x7C; // float32
            public const nint m_fadeOut = 0x80; // float32
            public const nint m_mode = 0x84; // EVsndPlaybackMode
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CSosGroupActionSoundeventCountSchema {
            public const nint m_bExcludeStoppedSounds = 0x8; // bool
            public const nint m_strCountKeyName = 0x10; // CUtlString
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerEnvelopeAnalyzer {
            public const nint m_mode = 0x48; // EMode_t
            public const nint m_fAnalysisWindowMs = 0x4C; // float32
            public const nint m_flThreshold = 0x50; // float32
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixBaseProcessorDesc {
            public const nint m_name = 0x8; // CUtlString
            public const nint m_nDebugId = 0x10; // uint32
            public const nint m_flxfade = 0x14; // float32
            public const nint m_nChannels = 0x18; // int32
            public const nint m_bDebugBypass = 0x1C; // bool
            public const nint m_paramEnable = 0x20; // CVMixParameterFloat
            public const nint m_paramMix = 0x24; // CVMixParameterFloat
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixImpulseResponseInput {
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixSteamAudioHybridReverbProcessorDesc {
            public const nint m_paramReverbTimeLow = 0x28; // CVMixParameterFloat
            public const nint m_paramReverbTimeMid = 0x2C; // CVMixParameterFloat
            public const nint m_paramReverbTimeHigh = 0x30; // CVMixParameterFloat
            public const nint m_paramBand = 0x34; // CVMixParameterFloat
            public const nint m_paramReverbTime = 0x38; // CVMixDataOffset
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
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixControlOutput {
            public const nint m_flDefaultValue = 0x10; // float32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixModDelayProcessorDesc {
            public const nint m_desc = 0x28; // VMixModDelayDesc_t
            public const nint m_paramCutoffFrequency = 0x58; // CVMixParameterFloat
            public const nint m_paramDelay = 0x5C; // CVMixParameterFloat
            public const nint m_paramModRate = 0x60; // CVMixParameterFloat
            public const nint m_paramModDepth = 0x64; // CVMixParameterFloat
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixShaperProcessorDesc {
            public const nint m_desc = 0x28; // VMixShaperDesc_t
            public const nint m_paramDrive = 0x3C; // CVMixParameterFloat
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixParameterFloat {
            public const nint m_offset = 0x0; // CVMixDataOffset
        }
        // Parent: None
        // Field count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixBaseGraphDescription {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_nGraphOutputChannels = 0x8; // int32
            public const nint m_bIsMainGraph = 0xC; // bool
            public const nint m_processorNodes = 0x10; // CUtlLeanVector<std::unique_ptr<CVMixBaseProcessorDesc>>
            public const nint m_graphInputs = 0x20; // CUtlLeanVector<CVMixGraphInput>
            public const nint m_controlTransientInputs = 0x30; // CUtlLeanVector<CVMixControlInput>
            public const nint m_controlOutputs = 0x40; // CUtlLeanVector<CVMixControlOutput>
            public const nint m_impulseResponseInputs = 0x50; // CUtlLeanVector<CVMixImpulseResponseInput>
            public const nint m_mixCommands = 0x60; // CUtlLeanVector<CVMixCommand>
            public const nint m_heap = 0x70; // CVMixHeap
            public const nint m_audioMeters = 0x80; // CUtlLeanVector<CVMixAudioMeter>
            public const nint m_controlMeters = 0x90; // CUtlLeanVector<CVMixControlMeter>
            public const nint m_nameInputMeters = 0xA0; // CUtlLeanVector<CVMixNameInputMeter>
            public const nint m_additionalOutputs = 0xB0; // CUtlLeanVector<CVMixAdditionalOutput>
            public const nint m_automaticControlInputs = 0xC0; // CUtlLeanVector<CVMixAutomaticControlInput>
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixAutomaticControlInput {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_nGraphInputIndex = 0xC; // int32
            public const nint m_nControlType = 0x10; // VMixAutoControlType_t
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MPropertyArrayElementNameKey
        // MVDataOutlinerNameExpr
        // MGetKV3ClassDefaults
        public static class CSndBeatTrack {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_playbackType = 0x20; // SndBeatTrackPlaybackType_t
            public const nint m_nTranspose = 0x24; // int32
            public const nint m_bSyncToVoice = 0x28; // bool
            public const nint m_flBPM = 0x2C; // float32
        }
        // Parent: None
        // Field count: 17
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerVsndRadioButton {
            public const nint m_namespace = 0x70; // CUtlString
            public const nint m_slot1 = 0x78; // CVsndRadioButtonSlot
            public const nint m_slot2 = 0x100; // CVsndRadioButtonSlot
            public const nint m_slot3 = 0x188; // CVsndRadioButtonSlot
            public const nint m_slot4 = 0x210; // CVsndRadioButtonSlot
            public const nint m_slot5 = 0x298; // CVsndRadioButtonSlot
            public const nint m_slot6 = 0x320; // CVsndRadioButtonSlot
            public const nint m_slot7 = 0x3A8; // CVsndRadioButtonSlot
            public const nint m_slot8 = 0x430; // CVsndRadioButtonSlot
            public const nint m_slot9 = 0x4B8; // CVsndRadioButtonSlot
            public const nint m_slot10 = 0x540; // CVsndRadioButtonSlot
            public const nint m_slot11 = 0x5C8; // CVsndRadioButtonSlot
            public const nint m_slot12 = 0x650; // CVsndRadioButtonSlot
            public const nint m_slot13 = 0x6D8; // CVsndRadioButtonSlot
            public const nint m_slot14 = 0x760; // CVsndRadioButtonSlot
            public const nint m_slot15 = 0x7E8; // CVsndRadioButtonSlot
            public const nint m_slot16 = 0x870; // CVsndRadioButtonSlot
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
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixOscProcessorDesc {
            public const nint m_desc = 0x28; // VMixOscDesc_t
            public const nint m_paramFrequency = 0x34; // CVMixParameterFloat
            public const nint m_paramPhase = 0x38; // CVMixParameterFloat
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerLoopTriggerWithRandomPanner {
            public const nint m_randomPannerControls = 0xA0; // CRandomPannerControls
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoiceContainerGenerator {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerSet {
            public const nint m_soundsToPlay = 0x70; // CUtlVector<CVoiceContainerSetElement>
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
        // Field count: 17
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerVsndTrigger {
            public const nint m_namespace = 0x70; // CUtlString
            public const nint m_slot1 = 0x78; // CVsndTriggerSlot
            public const nint m_slot2 = 0x100; // CVsndTriggerSlot
            public const nint m_slot3 = 0x188; // CVsndTriggerSlot
            public const nint m_slot4 = 0x210; // CVsndTriggerSlot
            public const nint m_slot5 = 0x298; // CVsndTriggerSlot
            public const nint m_slot6 = 0x320; // CVsndTriggerSlot
            public const nint m_slot7 = 0x3A8; // CVsndTriggerSlot
            public const nint m_slot8 = 0x430; // CVsndTriggerSlot
            public const nint m_slot9 = 0x4B8; // CVsndTriggerSlot
            public const nint m_slot10 = 0x540; // CVsndTriggerSlot
            public const nint m_slot11 = 0x5C8; // CVsndTriggerSlot
            public const nint m_slot12 = 0x650; // CVsndTriggerSlot
            public const nint m_slot13 = 0x6D8; // CVsndTriggerSlot
            public const nint m_slot14 = 0x760; // CVsndTriggerSlot
            public const nint m_slot15 = 0x7E8; // CVsndTriggerSlot
            public const nint m_slot16 = 0x870; // CVsndTriggerSlot
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoiceContainerSetElement {
            public const nint m_sound = 0x0; // CSoundContainerReference
            public const nint m_flVolumeDB = 0x20; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MPropertyFriendlyName
        // MGetKV3ClassDefaults
        public static class CSndBeatPatternManager {
            public const nint m_vecPatterns = 0x38; // CUtlVector<CSndBeatPattern>
            public const nint m_vecActiveTracks = 0x70; // CUtlVector<CSndBeatTrack>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVoiceContainerAsyncGenerator {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSoundInfoHeader {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixDescription {
            public const nint m_submixList = 0xD0; // CUtlLeanVector<CSubmix>
            public const nint m_sources = 0xE0; // CUtlLeanVector<std::unique_ptr<CVoiceContainerBase>>
            public const nint m_impulseResponseValues = 0xF0; // CUtlLeanVector<uint64>
            public const nint m_nNameHashCode = 0x100; // uint32
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
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixSubmix {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_SendNames = 0x8; // CUtlString[4]
            public const nint m_nSoloNameHash = 0x2C; // uint32
            public const nint m_nChannels = 0x30; // int32
            public const nint m_nSendOperator = 0x34; // VMixSendOperator_t
            public const nint m_nMixDownRule = 0x36; // VMixMixDownRule_t
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixFlangerProcessorDesc {
            public const nint m_desc = 0x28; // VMixFlangerDesc_t
            public const nint m_paramDelay = 0x4C; // CVMixParameterFloat
            public const nint m_paramModRate = 0x50; // CVMixParameterFloat
            public const nint m_paramModDepth = 0x54; // CVMixParameterFloat
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixEffectChainProcessorDesc {
            public const nint m_desc = 0x28; // VMixEffectChainDesc_t
            public const nint m_paramEffectName = 0x30; // CVMixParameterEffectName
        }
        // Parent: None
        // Field count: 5
        public static class KeyGroup_t {
            public const nint nCenterNote = 0x0; // uint8
            public const nint nMinNote = 0x1; // uint8
            public const nint nMaxNote = 0x2; // uint8
            public const nint nNumVelocityZones = 0x3; // uint8
            public const nint pVelocityZones = 0x8; // VelocityZone_t*
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixFreeverbProcessorDesc {
            public const nint m_desc = 0x28; // VMixFreeverbDesc_t
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
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixConvolutionProcessorDesc {
            public const nint m_desc = 0x28; // VMixConvolutionDesc_t
            public const nint m_paramImpulseResponse = 0x48; // CVMixDataOffset
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixParameterBool {
            public const nint m_offset = 0x0; // CVMixDataOffset
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
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixFilterProcessorDesc {
            public const nint m_desc = 0x28; // VMixFilterDesc_t
            public const nint m_paramCutoffFreq = 0x38; // CVMixParameterFloat
            public const nint m_paramQ = 0x3C; // CVMixParameterFloat
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixAdditionalOutput {
            public const nint m_name = 0x0; // CUtlString
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CVoiceContainerTapePlayer {
            public const nint m_bShouldWraparound = 0x80; // bool
            public const nint m_sourceAudio = 0x88; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
            public const nint m_flTapeSpeedAttackTime = 0x90; // float32
            public const nint m_flTapeSpeedReleaseTime = 0x94; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixSubgraphSwitchProcessorDesc {
            public const nint m_desc = 0x28; // VMixSubgraphSwitchDesc_t
            public const nint m_paramEffectName = 0x60; // CVMixParameterEffectName
            public const nint m_paramSelectionIndex = 0x64; // CVMixParameterFloat
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
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixSteamAudioPathingProcessorDesc {
            public const nint m_paramPositionX = 0x28; // CVMixParameterFloat
            public const nint m_paramPositionY = 0x2C; // CVMixParameterFloat
            public const nint m_paramPositionZ = 0x30; // CVMixParameterFloat
            public const nint m_paramPathingMixLevel = 0x34; // CVMixParameterFloat
            public const nint m_paramBand = 0x38; // CVMixParameterFloat
            public const nint m_paramArrayPathingEQ = 0x3C; // CVMixDataOffset
            public const nint m_paramArrayPathingCoefficients = 0x40; // CVMixDataOffset
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixPannerProcessorDesc {
            public const nint m_desc = 0x28; // VMixPannerDesc_t
            public const nint m_paramPan = 0x30; // CVMixParameterFloat
        }
        // Parent: None
        // Field count: 11
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
            public const nint m_flSCHighPassFreq = 0x20; // float32
            public const nint m_bPeakMode = 0x24; // bool
            public const nint m_bAutoMakeupGain = 0x25; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixHeap {
            public const nint m_storage = 0x0; // CUtlLeanVector<uint32>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerVMixSnd {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixStereoDelayProcessorDesc {
            public const nint m_paramDelayLeft = 0x28; // CVMixParameterFloat
            public const nint m_paramDelayRight = 0x2C; // CVMixParameterFloat
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
        // Field count: 1
        public static class CVMixDataOffset {
            public const nint m_nOffset = 0x0; // uint32
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
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerParameterBlender {
            public const nint m_firstSound = 0x70; // CSoundContainerReference
            public const nint m_secondSound = 0x90; // CSoundContainerReference
            public const nint m_bEnableOcclusionBlend = 0xB0; // bool
            public const nint m_curve1 = 0xB8; // CPiecewiseCurve
            public const nint m_curve2 = 0xF8; // CPiecewiseCurve
            public const nint m_bEnableDistanceBlend = 0x138; // bool
            public const nint m_curve3 = 0x140; // CPiecewiseCurve
            public const nint m_curve4 = 0x180; // CPiecewiseCurve
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixAudioMeter {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_displayName = 0x8; // CUtlString
            public const nint m_nDebugId = 0x10; // uint32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixVocoderProcessorDesc {
            public const nint m_desc = 0x28; // VMixVocoderDesc_t
            public const nint m_paramBandwidth = 0x50; // CVMixParameterFloat
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CSosGroupActionLimitSchema {
            public const nint m_nMaxCount = 0x8; // int32
            public const nint m_nStopType = 0xC; // SosActionStopType_t
            public const nint m_nSortType = 0x10; // SosActionLimitSortType_t
            public const nint m_bStopImmediate = 0x14; // bool
            public const nint m_bCountStopped = 0x15; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerAmpedDecayingSineWave {
            public const nint m_flGainAmount = 0x78; // float32
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
            public const nint m_effectName = 0x0; // CUtlString
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixPlateReverbProcessorDesc {
            public const nint m_desc = 0x28; // VMixPlateverbDesc_t
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerMultiBlender {
            public const nint m_soundsToPlay = 0x70; // CSoundContainerReferenceArray
            public const nint m_flBlendFactor = 0xA8; // float32
            public const nint m_flCrossover = 0xAC; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixVsndInput {
            public const nint m_defaultValue = 0x0; // CUtlString
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
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixParameterEffectName {
            public const nint m_offset = 0x0; // CVMixDataOffset
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SndBeatTimeSignature_t {
            public const nint nNumerator = 0x0; // uint8
            public const nint nDenominator = 0x1; // uint8
        }
        // Parent: None
        // Field count: 4
        public static class VelocityZone_t {
            public const nint nMaxVel = 0x0; // uint8
            public const nint nNextSelection = 0x1; // uint8
            public const nint nNumSamples = 0x2; // uint8
            public const nint pSamples = 0x4; // uint32[4]
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerSelector {
            public const nint m_mode = 0x70; // PlayBackMode_t
            public const nint m_soundsToPlay = 0x78; // CSoundContainerReferenceArray
            public const nint m_fProbabilityWeights = 0xB0; // CUtlVector<float32>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SndBeatEventKeyedSndEvts_t {
            public const nint m_strSoundEventName = 0x10; // CUtlString
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixGraphInput {
            public const nint m_nOffset = 0x10; // CVMixDataOffset
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CSosGroupActionTimeBlockLimitSchema {
            public const nint m_nMaxCount = 0x8; // int32
            public const nint m_flMaxDuration = 0xC; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SndBeatEventKeyedMidiNotes_t {
            public const nint m_nStatus = 0x10; // uint8
            public const nint m_nNote = 0x11; // uint8
            public const nint m_nVelocity = 0x12; // uint8
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CSosGroupActionMemberCountEnvelopeSchema {
            public const nint m_nBaseCount = 0x8; // int32
            public const nint m_nTargetCount = 0xC; // int32
            public const nint m_flBaseValue = 0x10; // float32
            public const nint m_flTargetValue = 0x14; // float32
            public const nint m_flAttack = 0x18; // float32
            public const nint m_flDecay = 0x1C; // float32
            public const nint m_resultVarName = 0x20; // CUtlString
            public const nint m_bSaveToGroup = 0x28; // bool
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixDualCompressorProcessorDesc {
            public const nint m_desc = 0x28; // VMixDualCompressorDesc_t
            public const nint m_outParamLevel = 0x5C; // CVMixParameterFloat
            public const nint m_outParamdBLevel = 0x60; // CVMixParameterFloat
            public const nint m_outParamReduction = 0x64; // CVMixParameterFloat
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerSwitch {
            public const nint m_soundsToPlay = 0x70; // CUtlVector<CSoundContainerReference>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixControlMeter {
            public const nint m_nValueIndex = 0x10; // CVMixDataOffset
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerEnum {
            public const nint m_soundsToPlay = 0x70; // CSoundContainerReferenceArray
            public const nint m_iSelection = 0xA8; // int32
            public const nint m_flCrossfadeTime = 0xAC; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CSosGroupActionTimeLimitSchema {
            public const nint m_flMaxDuration = 0x8; // float32
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
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerLoopTrigger {
            public const nint m_flRetriggerTimeMin = 0x70; // float32
            public const nint m_flRetriggerTimeMax = 0x74; // float32
            public const nint m_flFadeTime = 0x78; // float32
            public const nint m_bCrossFade = 0x7C; // bool
            public const nint m_sound = 0x80; // CSoundContainerReference
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataNodeType
        public static class SndBeatEventKeys_t {
            public const nint m_flKey = 0x8; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CVoiceContainerDecayingSineWave {
            public const nint m_flFrequency = 0x70; // float32
            public const nint m_flDecayTime = 0x74; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixDelayProcessorDesc {
            public const nint m_desc = 0x28; // VMixDelayDesc_t
            public const nint m_paramCutoffFrequency = 0x50; // CVMixParameterFloat
            public const nint m_paramDelay = 0x54; // CVMixParameterFloat
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixBoxverb2ProcessorDesc {
            public const nint m_desc = 0x28; // VMixBoxverbDesc_t
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixFilterDesc_t {
            public const nint m_fldbGain = 0x0; // float32
            public const nint m_flCutoffFreq = 0x4; // float32
            public const nint m_flQ = 0x8; // float32
            public const nint m_nFilterType = 0xC; // VMixFilterType_t
            public const nint m_nFilterSlope = 0xD; // VMixFilterSlope_t
            public const nint m_bEnabled = 0xE; // bool
        }
        // Parent: None
        // Field count: 17
        //
        // Metadata:
        // MPropertyArrayElementNameKey
        // MVDataOutlinerNameExpr
        // MGetKV3ClassDefaults
        public static class CSndBeatPattern {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_flSyncPriority = 0xC; // float32
            public const nint m_syncStartType = 0x10; // SndBeatSyncStartType_t
            public const nint m_syncType = 0x14; // SndBeatSyncType_t
            public const nint m_timeSignature = 0x18; // SndBeatTimeSignature_t
            public const nint m_flLength = 0x20; // float32
            public const nint m_bLooping = 0x24; // bool
            public const nint m_playEventType = 0x28; // SndBeatEventType_t
            public const nint m_flPlayBeatMult = 0x2C; // float32
            public const nint m_playKeyType = 0x30; // SndBeatKeyType_t
            public const nint m_vecPatternKeys = 0x38; // CUtlVector<SndBeatEventKeys_t>
            public const nint m_vecPatternFloats = 0x50; // CUtlVector<SndBeatEventKeyedFloats_t>
            public const nint m_vecPatternSndEvts = 0x68; // CUtlVector<SndBeatEventKeyedSndEvts_t>
            public const nint m_vecPatternMidi = 0x80; // CUtlVector<SndBeatEventKeyedMidiNotes_t>
            public const nint m_syncEventType = 0x98; // SndBeatEventType_t
            public const nint m_flSyncBeatMult = 0x9C; // float32
            public const nint m_vecSyncPatternKeys = 0xA0; // CUtlVector<SndBeatEventKeys_t>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSubmix {
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
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixAutoFilterProcessorDesc {
            public const nint m_desc = 0x28; // VMixAutoFilterDesc_t
        }
        // Parent: None
        // Field count: 0
        public static class ISndSeqInstruments {
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class VMixFlangerDesc_t {
            public const nint m_bPhaseInvert = 0x0; // bool
            public const nint m_flGlideTime = 0x4; // float32
            public const nint m_flDelay = 0x8; // float32
            public const nint m_flOutputGain = 0xC; // float32
            public const nint m_flFeedbackGain = 0x10; // float32
            public const nint m_flFeedforwardGain = 0x14; // float32
            public const nint m_flModRate = 0x18; // float32
            public const nint m_flModDepth = 0x1C; // float32
            public const nint m_bApplyAntialiasing = 0x20; // bool
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
