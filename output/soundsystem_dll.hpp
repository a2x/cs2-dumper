// Generated using https://github.com/a2x/cs2-dumper
// 2026-07-09 09:08:48.606860700 UTC

#pragma once

#include <cstddef>
#include <cstdint>

namespace cs2_dumper {
    namespace schemas {
        // Module: soundsystem.dll
        // Class count: 150
        // Enum count: 27
        namespace soundsystem_dll {
            // Alignment: 4
            // Member count: 3
            enum class SndSeqInstrumentType_t : uint32_t {
                eSndSeqInstNull = 0x0,
                eSndSeqInstSndEvt = 0x1,
                eSndSeqInstMidiSampler = 0x2
            };
            // Alignment: 4
            // Member count: 2
            enum class EMode_t : uint32_t {
                Peak = 0x0,
                RMS = 0x1
            };
            // Alignment: 4
            // Member count: 7
            enum class SndBeatMidiStatusType_t : uint32_t {
                SndSeqMidiStatusNoteOff = 0x8,
                SndSeqMidiStatusNoteOn = 0x9,
                SndSeqMidiStatusKeyPressure = 0xA,
                SndSeqMidiStatusCtrlChange = 0xB,
                SndSeqMidiStatusProgramChange = 0xC,
                SndSeqMidiStatusChannelPressure = 0xD,
                SndSeqMidiStatusPitchBend = 0xE
            };
            // Alignment: 4
            // Member count: 40
            enum class VMixGraphCommandID_t : uint32_t {
                CMD_INVALID = 0xFFFFFFFF,
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
                CMD_SUBMIX_EXTRACTCONTAINER = 0x19,
                CMD_SUBMIX_DEBUG = 0x1A,
                CMD_SUBMIX_MIX2x1 = 0x1B,
                CMD_SUBMIX_OUTPUT = 0x1C,
                CMD_SUBMIX_OUTPUTx2 = 0x1D,
                CMD_SUBMIX_COPY = 0x1E,
                CMD_SUBMIX_ACCUMULATE = 0x1F,
                CMD_SUBMIX_METER = 0x20,
                CMD_SUBMIX_METER_SPECTRUM = 0x21,
                CMD_IMPULSERESPONSE_INPUT_STORE = 0x22,
                CMD_PROCESSOR_SET_IMPULSERESPONSE_VALUE = 0x23,
                CMD_REMAP_VSND_TO_IMPULSERESPONSE = 0x24,
                CMD_IMPULSERESPONSE_RESET = 0x25,
                CMD_BLEND_VSNDS_TO_IMPULSERESPONSE = 0x26,
                CMD_IMPULSERESPONSE_DELAY = 0x27
            };
            // Alignment: 1
            // Member count: 5
            enum class EWaveform : uint8_t {
                Sine = 0x0,
                Square = 0x1,
                Saw = 0x2,
                Triangle = 0x3,
                Noise = 0x4
            };
            // Alignment: 4
            // Member count: 5
            enum class VMixLFOShape_t : uint32_t {
                LFO_SHAPE_SINE = 0x0,
                LFO_SHAPE_SQUARE = 0x1,
                LFO_SHAPE_TRI = 0x2,
                LFO_SHAPE_SAW = 0x3,
                LFO_SHAPE_NOISE = 0x4
            };
            // Alignment: 2
            // Member count: 10
            enum class VMixFilterType_t : uint16_t {
                FILTER_UNKNOWN = 0xFFFF,
                FILTER_LOWPASS = 0x0,
                FILTER_HIGHPASS = 0x1,
                FILTER_BANDPASS = 0x2,
                FILTER_NOTCH = 0x3,
                FILTER_PEAKING_EQ = 0x4,
                FILTER_LOW_SHELF = 0x5,
                FILTER_HIGH_SHELF = 0x6,
                FILTER_ALLPASS = 0x7,
                FILTER_PASSTHROUGH = 0x8
            };
            // Alignment: 4
            // Member count: 2
            enum class SndBeatTrackPlaybackType_t : uint32_t {
                eSndBeatTrackPlaybackTypeStep = 0x0,
                eSndBeatTrackPlaybackTypeFwd = 0x1
            };
            // Alignment: 4
            // Member count: 6
            enum class SndBeatEventType_t : uint32_t {
                eSndBeatEventTypeInvalid = 0x0,
                eSndBeatEventTypeBeat = 0x1,
                eSndBeatEventTypeBar = 0x2,
                eSndBeatEventTypePhrase = 0x3,
                eSndBeatEventTypeLength = 0x4,
                eSndBeatEventTypeKeys = 0x5
            };
            // Alignment: 4
            // Member count: 3
            enum class SosActionStopType_t : uint32_t {
                SOS_STOPTYPE_NONE = 0x0,
                SOS_STOPTYPE_TIME = 0x1,
                SOS_STOPTYPE_OPVAR = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class SndBeatLaunchSyncType_t : uint32_t {
                eSndBeatLaunchSyncTypeInvalid = 0x0,
                eSndBeatLaunchSyncTypeQueue = 0x1,
                eSndBeatLaunchSyncTypeSeek = 0x2,
                eSndBeatLaunchSyncTypeReset = 0x3
            };
            // Alignment: 4
            // Member count: 5
            enum class SndBeatKeyType_t : uint32_t {
                eSndBeatPatternTypeNone = 0x0,
                eSndBeatPatternTypeKeys = 0x1,
                eSndBeatPatternTypeKeyedFloats = 0x2,
                eSndBeatPatternTypeKeyedSndEvts = 0x3,
                eSndBeatPatternTypeKeyedMidi = 0x4
            };
            // Alignment: 4
            // Member count: 6
            enum class SosEditItemType_t : uint32_t {
                SOS_EDIT_ITEM_TYPE_SOUNDEVENTS = 0x0,
                SOS_EDIT_ITEM_TYPE_SOUNDEVENT = 0x1,
                SOS_EDIT_ITEM_TYPE_LIBRARYSTACKS = 0x2,
                SOS_EDIT_ITEM_TYPE_STACK = 0x3,
                SOS_EDIT_ITEM_TYPE_OPERATOR = 0x4,
                SOS_EDIT_ITEM_TYPE_FIELD = 0x5
            };
            // Alignment: 4
            // Member count: 5
            enum class PlayBackMode_t : uint32_t {
                Random = 0x0,
                RandomNoRepeats = 0x1,
                RandomAvoidLast = 0x2,
                Sequential = 0x3,
                RandomWeights = 0x4
            };
            // Alignment: 4
            // Member count: 2
            enum class EVsndTriggerMode : uint32_t {
                Trigger = 0x0,
                Gate = 0x1
            };
            // Alignment: 4
            // Member count: 3
            enum class SosGroupFieldBehavior_t : uint32_t {
                kIgnore = 0x0,
                kBranch = 0x1,
                kMatch = 0x2
            };
            // Alignment: 4
            // Member count: 30
            enum class soundlevel_t : uint32_t {
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
            };
            // Alignment: 4
            // Member count: 2
            enum class VMixPannerType_t : uint32_t {
                PANNER_TYPE_LINEAR = 0x0,
                PANNER_TYPE_EQUAL_POWER = 0x1
            };
            // Alignment: 4
            // Member count: 6
            enum class VMixChannelOperation_t : uint32_t {
                VMIX_CHAN_STEREO = 0x0,
                VMIX_CHAN_LEFT = 0x1,
                VMIX_CHAN_RIGHT = 0x2,
                VMIX_CHAN_SWAP = 0x3,
                VMIX_CHAN_MONO = 0x4,
                VMIX_CHAN_MID_SIDE = 0x5
            };
            // Alignment: 1
            // Member count: 13
            enum class EMidiNote : uint8_t {
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
            };
            // Alignment: 1
            // Member count: 4
            enum class CVSoundFormat_t : uint8_t {
                PCM16 = 0x0,
                PCM8 = 0x1,
                MP3 = 0x2,
                ADPCM = 0x3
            };
            // Alignment: 1
            // Member count: 9
            enum class VMixFilterSlope_t : uint8_t {
                FILTER_SLOPE_1POLE_6dB = 0x0,
                FILTER_SLOPE_1POLE_12dB = 0x1,
                FILTER_SLOPE_1POLE_18dB = 0x2,
                FILTER_SLOPE_1POLE_24dB = 0x3,
                FILTER_SLOPE_12dB = 0x4,
                FILTER_SLOPE_24dB = 0x5,
                FILTER_SLOPE_36dB = 0x6,
                FILTER_SLOPE_48dB = 0x7,
                FILTER_SLOPE_MAX = 0x7
            };
            // Alignment: 4
            // Member count: 2
            enum class SosActionLimitSortType_t : uint32_t {
                SOS_LIMIT_SORTTYPE_HIGHEST = 0x0,
                SOS_LIMIT_SORTTYPE_LOWEST = 0x1
            };
            // Alignment: 4
            // Member count: 3
            enum class VMixSubgraphSwitchInterpolationType_t : uint32_t {
                SUBGRAPH_INTERPOLATION_TEMPORAL_CROSSFADE = 0x0,
                SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT = 0x1,
                SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING = 0x2
            };
            // Alignment: 4
            // Member count: 2
            enum class SosGroupType_t : uint32_t {
                SOS_GROUPTYPE_DYNAMIC = 0x0,
                SOS_GROUPTYPE_STATIC = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class SosActionSetParamSortType_t : uint32_t {
                SOS_SETPARAM_SORTTYPE_HIGHEST = 0x0,
                SOS_SETPARAM_SORTTYPE_LOWEST = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class EVsndPlaybackMode : uint32_t {
                Trigger = 0x0,
                Gate = 0x1
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixInputBase {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerBlender {
                constexpr std::ptrdiff_t m_firstSound = 0x70; // CSoundContainerReference
                constexpr std::ptrdiff_t m_secondSound = 0x90; // CSoundContainerReference
                constexpr std::ptrdiff_t m_flBlendFactor = 0xB0; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixPitchShiftProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixPitchShiftDesc_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixFreeverbDesc_t {
                constexpr std::ptrdiff_t m_flRoomSize = 0x0; // float32
                constexpr std::ptrdiff_t m_flDamp = 0x4; // float32
                constexpr std::ptrdiff_t m_flWidth = 0x8; // float32
                constexpr std::ptrdiff_t m_flLateReflections = 0xC; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerStaticAdditiveSynth__CHarmonic {
                constexpr std::ptrdiff_t m_nWaveform = 0x0; // EWaveform
                constexpr std::ptrdiff_t m_nFundamental = 0x1; // EMidiNote
                constexpr std::ptrdiff_t m_nOctave = 0x4; // int32
                constexpr std::ptrdiff_t m_flCents = 0x8; // float32
                constexpr std::ptrdiff_t m_flPhase = 0xC; // float32
                constexpr std::ptrdiff_t m_curve = 0x10; // CPiecewiseCurve
                constexpr std::ptrdiff_t m_volumeScaling = 0x50; // CVoiceContainerStaticAdditiveSynth::CGainScalePerInstance
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVsndTriggerSlot {
                constexpr std::ptrdiff_t m_bEnableVsnd = 0x0; // bool
                constexpr std::ptrdiff_t m_vsnd = 0x8; // CSoundContainerReference
                constexpr std::ptrdiff_t m_bEnableEndcap = 0x28; // bool
                constexpr std::ptrdiff_t m_endcapVsnd = 0x30; // CSoundContainerReference
                constexpr std::ptrdiff_t m_bEnableLoopcap = 0x50; // bool
                constexpr std::ptrdiff_t m_loopcapVsnd = 0x58; // CSoundContainerReference
                constexpr std::ptrdiff_t m_volume = 0x78; // float32
                constexpr std::ptrdiff_t m_fadeOut = 0x7C; // float32
                constexpr std::ptrdiff_t m_mode = 0x80; // EVsndTriggerMode
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerStaticAdditiveSynth__CTone {
                constexpr std::ptrdiff_t m_harmonics = 0x0; // CUtlVector<CVoiceContainerStaticAdditiveSynth::CHarmonic>
                constexpr std::ptrdiff_t m_curve = 0x18; // CPiecewiseCurve
                constexpr std::ptrdiff_t m_bSyncInstances = 0x58; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CSosGroupActionOcclusionSchema {
                constexpr std::ptrdiff_t m_flCalculationInterval = 0x8; // float32
                constexpr std::ptrdiff_t m_flRadius = 0xC; // float32
                constexpr std::ptrdiff_t m_flOcclusionScale = 0x10; // float32
                constexpr std::ptrdiff_t m_flOcclusionMin = 0x14; // float32
                constexpr std::ptrdiff_t m_flOcclusionMax = 0x18; // float32
                constexpr std::ptrdiff_t m_flTestDepth = 0x1C; // float32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerRandomSampler {
                constexpr std::ptrdiff_t m_flAmplitude = 0x80; // float32
                constexpr std::ptrdiff_t m_flAmplitudeJitter = 0x84; // float32
                constexpr std::ptrdiff_t m_flTimeJitter = 0x88; // float32
                constexpr std::ptrdiff_t m_flMaxLength = 0x8C; // float32
                constexpr std::ptrdiff_t m_nNumDelayVariations = 0x90; // int32
                constexpr std::ptrdiff_t m_grainResources = 0x98; // CUtlVector<CStrongHandle<InfoForResourceTypeCVoiceContainerBase>>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixSteamAudioDirectProcessorDesc {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixSteamAudioHRTFProcessorDesc {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerDefault {
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVSound {
                constexpr std::ptrdiff_t m_Sentences = 0x0; // CUtlLeanVector<CAudioSentence>
                constexpr std::ptrdiff_t m_nRate = 0x10; // int32
                constexpr std::ptrdiff_t m_nFormat = 0x14; // CVSoundFormat_t
                constexpr std::ptrdiff_t m_nChannels = 0x18; // uint32
                constexpr std::ptrdiff_t m_nLoopStart = 0x1C; // int32
                constexpr std::ptrdiff_t m_nSampleCount = 0x20; // uint32
                constexpr std::ptrdiff_t m_flDuration = 0x24; // float32
                constexpr std::ptrdiff_t m_nStreamingSize = 0x28; // uint32
                constexpr std::ptrdiff_t m_nLoopEnd = 0x2C; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeType
            namespace CDSPPresetMixgroupModifierTable {
                constexpr std::ptrdiff_t m_table = 0x0; // CUtlVector<CDspPresetModifierList>
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CSosGroupActionSoundeventClusterSchema {
                constexpr std::ptrdiff_t m_nMinNearby = 0x8; // int32
                constexpr std::ptrdiff_t m_flClusterEpsilon = 0xC; // float32
                constexpr std::ptrdiff_t m_shouldPlayOpvar = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_shouldPlayClusterChild = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_clusterSizeOpvar = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_groupBoundingBoxMinsOpvar = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_groupBoundingBoxMaxsOpvar = 0x30; // CUtlString
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CSosGroupActionSetSoundeventParameterSchema {
                constexpr std::ptrdiff_t m_nMaxCount = 0x8; // int32
                constexpr std::ptrdiff_t m_flMinValue = 0xC; // float32
                constexpr std::ptrdiff_t m_flMaxValue = 0x10; // float32
                constexpr std::ptrdiff_t m_opvarName = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_nSortType = 0x20; // SosActionSetParamSortType_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSoundContainerReference {
                constexpr std::ptrdiff_t m_namespace = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_bUseReference = 0x8; // bool
                constexpr std::ptrdiff_t m_sound = 0x10; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
                constexpr std::ptrdiff_t m_pSound = 0x18; // CVoiceContainerBase*
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerNull {
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixSubgraphSwitchDesc_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_effectName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_subgraphs = 0x10; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_interpolationMode = 0x28; // VMixSubgraphSwitchInterpolationType_t
                constexpr std::ptrdiff_t m_bOnlyTailsOnFadeOut = 0x2C; // bool
                constexpr std::ptrdiff_t m_flInterpolationTime = 0x30; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeType
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerAnalysisBase {
                constexpr std::ptrdiff_t m_curve = 0x8; // CPiecewiseCurve
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CSosGroupActionSoundeventMinMaxValuesSchema {
                constexpr std::ptrdiff_t m_strQueryPublicFieldName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_strDelayPublicFieldName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_bExcludeStoppedSounds = 0x18; // bool
                constexpr std::ptrdiff_t m_bExcludeDelayedSounds = 0x19; // bool
                constexpr std::ptrdiff_t m_bExcludeSoundsBelowThreshold = 0x1A; // bool
                constexpr std::ptrdiff_t m_flExcludeSoundsMinThresholdValue = 0x1C; // float32
                constexpr std::ptrdiff_t m_bExcludSoundsAboveThreshold = 0x20; // bool
                constexpr std::ptrdiff_t m_flExcludeSoundsMaxThresholdValue = 0x24; // float32
                constexpr std::ptrdiff_t m_strMinValueName = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_strMaxValueName = 0x30; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixEnvelopeProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixEnvelopeDesc_t
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixCommand {
                constexpr std::ptrdiff_t m_nCommand = 0x0; // VMixGraphCommandID_t
                constexpr std::ptrdiff_t m_nParameterNameHash = 0x4; // uint32
                constexpr std::ptrdiff_t m_nOutputSubmix = 0x8; // int32
                constexpr std::ptrdiff_t m_nInputSubmix0 = 0xC; // int32
                constexpr std::ptrdiff_t m_nInputSubmix1 = 0x10; // int32
                constexpr std::ptrdiff_t m_nProcessor = 0x14; // int32
                constexpr std::ptrdiff_t m_nInputValue0 = 0x18; // int32
                constexpr std::ptrdiff_t m_nInputValue1 = 0x1C; // int32
            }
            // Parent: None
            // Field count: 1
            namespace SamplerVoice_t {
                constexpr std::ptrdiff_t nNoteNum = 0x0; // uint8
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixControlInput {
                constexpr std::ptrdiff_t m_flDefaultValue = 0x10; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixBoxverbProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixBoxverbDesc_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixDynamicsCompressorProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixDynamicsCompressorDesc_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixPannerDesc_t {
                constexpr std::ptrdiff_t m_type = 0x0; // VMixPannerType_t
                constexpr std::ptrdiff_t m_flStrength = 0x4; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CSosGroupActionSoundeventPrioritySchema {
                constexpr std::ptrdiff_t m_priorityValue = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_priorityVolumeScalar = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_priorityContributeButDontRead = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_bPriorityReadButDontContribute = 0x20; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerRealtimeFMSineWave {
                constexpr std::ptrdiff_t m_flCarrierFrequency = 0x70; // float32
                constexpr std::ptrdiff_t m_flModulatorFrequency = 0x74; // float32
                constexpr std::ptrdiff_t m_flModulatorAmount = 0x78; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SelectedEditItemInfo_t {
                constexpr std::ptrdiff_t m_EditItems = 0x0; // CUtlVector<SosEditItemInfo_t>
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixModDelayDesc_t {
                constexpr std::ptrdiff_t m_feedbackFilter = 0x0; // VMixFilterDesc_t
                constexpr std::ptrdiff_t m_bPhaseInvert = 0x10; // bool
                constexpr std::ptrdiff_t m_flGlideTime = 0x14; // float32
                constexpr std::ptrdiff_t m_flDelay = 0x18; // float32
                constexpr std::ptrdiff_t m_flOutputGain = 0x1C; // float32
                constexpr std::ptrdiff_t m_flFeedbackGain = 0x20; // float32
                constexpr std::ptrdiff_t m_flModRate = 0x24; // float32
                constexpr std::ptrdiff_t m_flModDepth = 0x28; // float32
                constexpr std::ptrdiff_t m_bApplyAntialiasing = 0x2C; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CSndSeqInstSndEvtSchema {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixNameInputMeter {
                constexpr std::ptrdiff_t m_nValueIndex = 0x10; // int32
            }
            // Parent: None
            // Field count: 0
            namespace CSndSeqInstruments {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixDynamics3BandProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixDynamics3BandDesc_t
            }
            // Parent: None
            // Field count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixBoxverbDesc_t {
                constexpr std::ptrdiff_t m_flSizeMax = 0x0; // float32
                constexpr std::ptrdiff_t m_flSizeMin = 0x4; // float32
                constexpr std::ptrdiff_t m_flComplexity = 0x8; // float32
                constexpr std::ptrdiff_t m_flDiffusion = 0xC; // float32
                constexpr std::ptrdiff_t m_flModDepth = 0x10; // float32
                constexpr std::ptrdiff_t m_flModRate = 0x14; // float32
                constexpr std::ptrdiff_t m_bParallel = 0x18; // bool
                constexpr std::ptrdiff_t m_filterType = 0x1C; // VMixFilterDesc_t
                constexpr std::ptrdiff_t m_flWidth = 0x2C; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x30; // float32
                constexpr std::ptrdiff_t m_flDepth = 0x34; // float32
                constexpr std::ptrdiff_t m_flFeedbackScale = 0x38; // float32
                constexpr std::ptrdiff_t m_flFeedbackWidth = 0x3C; // float32
                constexpr std::ptrdiff_t m_flFeedbackHeight = 0x40; // float32
                constexpr std::ptrdiff_t m_flFeedbackDepth = 0x44; // float32
                constexpr std::ptrdiff_t m_flOutputGain = 0x48; // float32
                constexpr std::ptrdiff_t m_flTaps = 0x4C; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSosGroupActionSchema {
            }
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSosSoundEventGroupSchema {
                constexpr std::ptrdiff_t m_nGroupType = 0x8; // SosGroupType_t
                constexpr std::ptrdiff_t m_bBlocksEvents = 0xC; // bool
                constexpr std::ptrdiff_t m_nBlockMaxCount = 0x10; // int32
                constexpr std::ptrdiff_t m_flMemberLifespanTime = 0x14; // float32
                constexpr std::ptrdiff_t m_bInvertMatch = 0x18; // bool
                constexpr std::ptrdiff_t m_Behavior_EventName = 0x1C; // SosGroupFieldBehavior_t
                constexpr std::ptrdiff_t m_matchSoundEventName = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_bMatchEventSubString = 0x28; // bool
                constexpr std::ptrdiff_t m_matchSoundEventSubString = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_Behavior_EntIndex = 0x38; // SosGroupFieldBehavior_t
                constexpr std::ptrdiff_t m_flEntIndex = 0x3C; // float32
                constexpr std::ptrdiff_t m_Behavior_Opvar = 0x40; // SosGroupFieldBehavior_t
                constexpr std::ptrdiff_t m_flOpvar = 0x44; // float32
                constexpr std::ptrdiff_t m_Behavior_String = 0x48; // SosGroupFieldBehavior_t
                constexpr std::ptrdiff_t m_opvarString = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_vActions = 0x58; // CUtlVector<CSosGroupActionSchema*>
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CSndSeqInstMidiSampler {
                constexpr std::ptrdiff_t m_bIsSoundEvent = 0x20; // bool
                constexpr std::ptrdiff_t m_bStopPrevious = 0x21; // bool
                constexpr std::ptrdiff_t m_nMinNote = 0x22; // uint8
                constexpr std::ptrdiff_t m_nMaxNote = 0x23; // uint8
                constexpr std::ptrdiff_t m_flMinVelocityAtten = 0x24; // float32
                constexpr std::ptrdiff_t m_flMaxVelocityAtten = 0x28; // float32
                constexpr std::ptrdiff_t m_flAttack = 0x2C; // float32
                constexpr std::ptrdiff_t m_flRelease = 0x30; // float32
                constexpr std::ptrdiff_t m_bBeatEnvelopes = 0x34; // bool
                constexpr std::ptrdiff_t m_nNextVoiceSlot = 0xD4; // uint8
                constexpr std::ptrdiff_t m_hSoundEventHash = 0xD8; // uint32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSndSeqInstBaseSchema {
                constexpr std::ptrdiff_t m_nType = 0x8; // SndSeqInstrumentType_t
                constexpr std::ptrdiff_t m_bStopCurrentEvents = 0xE; // bool
                constexpr std::ptrdiff_t m_flBPM = 0x10; // float32
                constexpr std::ptrdiff_t m_flBPMFactor = 0x14; // float32
                constexpr std::ptrdiff_t m_flBPMInvFactor = 0x18; // float32
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixDynamics3BandDesc_t {
                constexpr std::ptrdiff_t m_fldbGainOutput = 0x0; // float32
                constexpr std::ptrdiff_t m_flRMSTimeMS = 0x4; // float32
                constexpr std::ptrdiff_t m_fldbKneeWidth = 0x8; // float32
                constexpr std::ptrdiff_t m_flDepth = 0xC; // float32
                constexpr std::ptrdiff_t m_flWetMix = 0x10; // float32
                constexpr std::ptrdiff_t m_flTimeScale = 0x14; // float32
                constexpr std::ptrdiff_t m_flLowCutoffFreq = 0x18; // float32
                constexpr std::ptrdiff_t m_flHighCutoffFreq = 0x1C; // float32
                constexpr std::ptrdiff_t m_bPeakMode = 0x20; // bool
                constexpr std::ptrdiff_t m_bandDesc = 0x24; // VMixDynamicsBand_t[3]
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixEQ8ProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixEQ8Desc_t
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDSPMixgroupModifier {
                constexpr std::ptrdiff_t m_mixgroup = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_flModifier = 0x8; // float32
                constexpr std::ptrdiff_t m_flModifierMin = 0xC; // float32
                constexpr std::ptrdiff_t m_flSourceModifier = 0x10; // float32
                constexpr std::ptrdiff_t m_flSourceModifierMin = 0x14; // float32
                constexpr std::ptrdiff_t m_flListenerReverbModifierWhenSourceReverbIsActive = 0x18; // float32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAudioMorphData {
                constexpr std::ptrdiff_t m_times = 0x0; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_nameHashCodes = 0x18; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_nameStrings = 0x30; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_samples = 0x48; // CUtlVector<CUtlVector<float32>>
                constexpr std::ptrdiff_t m_flEaseIn = 0x60; // float32
                constexpr std::ptrdiff_t m_flEaseOut = 0x64; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SndBeatEventKeyedFloats_t {
                constexpr std::ptrdiff_t m_flFloat = 0x10; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixDualCompressorDesc_t {
                constexpr std::ptrdiff_t m_flRMSTimeMS = 0x0; // float32
                constexpr std::ptrdiff_t m_fldbKneeWidth = 0x4; // float32
                constexpr std::ptrdiff_t m_flWetMix = 0x8; // float32
                constexpr std::ptrdiff_t m_bPeakMode = 0xC; // bool
                constexpr std::ptrdiff_t m_bandDesc = 0x10; // VMixDynamicsBand_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerStaticAdditiveSynth {
                constexpr std::ptrdiff_t m_tones = 0x80; // CUtlVector<CVoiceContainerStaticAdditiveSynth::CTone>
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerShapedNoise {
                constexpr std::ptrdiff_t m_bUseCurveForFrequency = 0x70; // bool
                constexpr std::ptrdiff_t m_flFrequency = 0x74; // float32
                constexpr std::ptrdiff_t m_frequencySweep = 0x78; // CPiecewiseCurve
                constexpr std::ptrdiff_t m_bUseCurveForResonance = 0xB8; // bool
                constexpr std::ptrdiff_t m_flResonance = 0xBC; // float32
                constexpr std::ptrdiff_t m_resonanceSweep = 0xC0; // CPiecewiseCurve
                constexpr std::ptrdiff_t m_bUseCurveForAmplitude = 0x100; // bool
                constexpr std::ptrdiff_t m_flGainInDecibels = 0x104; // float32
                constexpr std::ptrdiff_t m_gainSweep = 0x108; // CPiecewiseCurve
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDspPresetModifierList {
                constexpr std::ptrdiff_t m_dspName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_modifiers = 0x8; // CUtlVector<CDSPMixgroupModifier>
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
            namespace CVoiceContainerBase {
                constexpr std::ptrdiff_t m_vSound = 0x28; // CVSound
                constexpr std::ptrdiff_t m_pEnvelopeAnalyzer = 0x68; // CVoiceContainerAnalysisBase*
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixDiffusorProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixDiffusorDesc_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixUtilityProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixUtilityDesc_t
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CRandomPannerControls {
                constexpr std::ptrdiff_t m_panningControlInputName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_volumeControlInputName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_flMinVolume = 0x10; // float32
                constexpr std::ptrdiff_t m_flMaxVolume = 0x14; // float32
                constexpr std::ptrdiff_t m_strVectorStackParam = 0x18; // CUtlString
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CVoiceContainerGranulator {
                constexpr std::ptrdiff_t m_flGrainLength = 0x80; // float32
                constexpr std::ptrdiff_t m_flGrainCrossfadeAmount = 0x84; // float32
                constexpr std::ptrdiff_t m_flStartJitter = 0x88; // float32
                constexpr std::ptrdiff_t m_flPlaybackJitter = 0x8C; // float32
                constexpr std::ptrdiff_t m_bShouldWraparound = 0x90; // bool
                constexpr std::ptrdiff_t m_sourceAudio = 0x98; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixPresetDSPProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixPresetDSPDesc_t
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixDelayDesc_t {
                constexpr std::ptrdiff_t m_feedbackFilter = 0x0; // VMixFilterDesc_t
                constexpr std::ptrdiff_t m_bEnableFilter = 0x10; // bool
                constexpr std::ptrdiff_t m_flDelay = 0x14; // float32
                constexpr std::ptrdiff_t m_flDirectGain = 0x18; // float32
                constexpr std::ptrdiff_t m_flDelayGain = 0x1C; // float32
                constexpr std::ptrdiff_t m_flFeedbackGain = 0x20; // float32
                constexpr std::ptrdiff_t m_flWidth = 0x24; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixEQ8Desc_t {
                constexpr std::ptrdiff_t m_stages = 0x0; // VMixFilterDesc_t[8]
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixDynamicsProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixDynamicsDesc_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixGraphDescData {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nGraphOutputChannels = 0x8; // int32
                constexpr std::ptrdiff_t m_bIsMainGraph = 0xC; // bool
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerLoopXFade {
                constexpr std::ptrdiff_t m_sound = 0x70; // CSoundContainerReference
                constexpr std::ptrdiff_t m_flLoopEnd = 0x90; // float32
                constexpr std::ptrdiff_t m_flLoopStart = 0x94; // float32
                constexpr std::ptrdiff_t m_flFadeOut = 0x98; // float32
                constexpr std::ptrdiff_t m_flFadeIn = 0x9C; // float32
                constexpr std::ptrdiff_t m_bPlayHead = 0xA0; // bool
                constexpr std::ptrdiff_t m_bPlayTail = 0xA1; // bool
                constexpr std::ptrdiff_t m_bEqualPow = 0xA2; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixPresetDSPDesc_t {
                constexpr std::ptrdiff_t m_effectName = 0x0; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAudioPhonemeTag {
                constexpr std::ptrdiff_t m_flStartTime = 0x0; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x4; // float32
                constexpr std::ptrdiff_t m_nPhonemeCode = 0x8; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixControlInputArray {
                constexpr std::ptrdiff_t m_nArrayIndex = 0x10; // int32
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVsndRadioButtonSlot {
                constexpr std::ptrdiff_t m_bEnableVsnd = 0x0; // bool
                constexpr std::ptrdiff_t m_vsnd = 0x8; // CSoundContainerReference
                constexpr std::ptrdiff_t m_bEnableEndcap = 0x28; // bool
                constexpr std::ptrdiff_t m_endcapVsnd = 0x30; // CSoundContainerReference
                constexpr std::ptrdiff_t m_bEnableLoopcap = 0x50; // bool
                constexpr std::ptrdiff_t m_loopcapVsnd = 0x58; // CSoundContainerReference
                constexpr std::ptrdiff_t m_group = 0x78; // int32
                constexpr std::ptrdiff_t m_volume = 0x7C; // float32
                constexpr std::ptrdiff_t m_fadeOut = 0x80; // float32
                constexpr std::ptrdiff_t m_mode = 0x84; // EVsndPlaybackMode
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixNameInput {
                constexpr std::ptrdiff_t m_defaultValue = 0x10; // CUtlString
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CSosGroupActionSoundeventCountSchema {
                constexpr std::ptrdiff_t m_bExcludeStoppedSounds = 0x8; // bool
                constexpr std::ptrdiff_t m_strCountKeyName = 0x10; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerEnvelopeAnalyzer {
                constexpr std::ptrdiff_t m_mode = 0x48; // EMode_t
                constexpr std::ptrdiff_t m_fAnalysisWindowMs = 0x4C; // float32
                constexpr std::ptrdiff_t m_flThreshold = 0x50; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixBaseProcessorDesc {
                constexpr std::ptrdiff_t m_name = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_nChannels = 0x14; // int32
                constexpr std::ptrdiff_t m_flxfade = 0x18; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixImpulseResponseInput {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixSteamAudioHybridReverbProcessorDesc {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSoundEventMetaData {
                constexpr std::ptrdiff_t m_soundEventVMix = 0x0; // CStrongHandle<InfoForResourceTypeCVMixListResource>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixPitchShiftDesc_t {
                constexpr std::ptrdiff_t m_nGrainSampleCount = 0x0; // int32
                constexpr std::ptrdiff_t m_flPitchShift = 0x4; // float32
                constexpr std::ptrdiff_t m_nQuality = 0x8; // int32
                constexpr std::ptrdiff_t m_nProcType = 0xC; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixControlOutput {
                constexpr std::ptrdiff_t m_flDefaultValue = 0x10; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixModDelayProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixModDelayDesc_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixShaperProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixShaperDesc_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixAutomaticControlInput {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nControlInputIndex = 0x8; // int32
                constexpr std::ptrdiff_t m_bIsTrackSend = 0xC; // bool
                constexpr std::ptrdiff_t m_bIsStackVar = 0xD; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MPropertyArrayElementNameKey
            // MVDataOutlinerNameExpr
            // MGetKV3ClassDefaults
            namespace CSndBeatTrack {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_playbackType = 0x20; // SndBeatTrackPlaybackType_t
                constexpr std::ptrdiff_t m_nTranspose = 0x24; // int32
                constexpr std::ptrdiff_t m_bSyncToVoice = 0x28; // bool
                constexpr std::ptrdiff_t m_flBPM = 0x2C; // float32
            }
            // Parent: None
            // Field count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerVsndRadioButton {
                constexpr std::ptrdiff_t m_namespace = 0x70; // CUtlString
                constexpr std::ptrdiff_t m_slot1 = 0x78; // CVsndRadioButtonSlot
                constexpr std::ptrdiff_t m_slot2 = 0x100; // CVsndRadioButtonSlot
                constexpr std::ptrdiff_t m_slot3 = 0x188; // CVsndRadioButtonSlot
                constexpr std::ptrdiff_t m_slot4 = 0x210; // CVsndRadioButtonSlot
                constexpr std::ptrdiff_t m_slot5 = 0x298; // CVsndRadioButtonSlot
                constexpr std::ptrdiff_t m_slot6 = 0x320; // CVsndRadioButtonSlot
                constexpr std::ptrdiff_t m_slot7 = 0x3A8; // CVsndRadioButtonSlot
                constexpr std::ptrdiff_t m_slot8 = 0x430; // CVsndRadioButtonSlot
                constexpr std::ptrdiff_t m_slot9 = 0x4B8; // CVsndRadioButtonSlot
                constexpr std::ptrdiff_t m_slot10 = 0x540; // CVsndRadioButtonSlot
                constexpr std::ptrdiff_t m_slot11 = 0x5C8; // CVsndRadioButtonSlot
                constexpr std::ptrdiff_t m_slot12 = 0x650; // CVsndRadioButtonSlot
                constexpr std::ptrdiff_t m_slot13 = 0x6D8; // CVsndRadioButtonSlot
                constexpr std::ptrdiff_t m_slot14 = 0x760; // CVsndRadioButtonSlot
                constexpr std::ptrdiff_t m_slot15 = 0x7E8; // CVsndRadioButtonSlot
                constexpr std::ptrdiff_t m_slot16 = 0x870; // CVsndRadioButtonSlot
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAudioEmphasisSample {
                constexpr std::ptrdiff_t m_flTime = 0x0; // float32
                constexpr std::ptrdiff_t m_flValue = 0x4; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixOscProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixOscDesc_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixCurveHeader {
                constexpr std::ptrdiff_t m_nControlPointCount = 0x0; // uint32
                constexpr std::ptrdiff_t m_nControlPointStart = 0x4; // uint32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerLoopTriggerWithRandomPanner {
                constexpr std::ptrdiff_t m_randomPannerControls = 0xA0; // CRandomPannerControls
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerGenerator {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerSet {
                constexpr std::ptrdiff_t m_soundsToPlay = 0x70; // CUtlVector<CVoiceContainerSetElement>
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixConvolutionDesc_t {
                constexpr std::ptrdiff_t m_fldbGain = 0x0; // float32
                constexpr std::ptrdiff_t m_flPreDelayMS = 0x4; // float32
                constexpr std::ptrdiff_t m_flWetMix = 0x8; // float32
                constexpr std::ptrdiff_t m_fldbLow = 0xC; // float32
                constexpr std::ptrdiff_t m_fldbMid = 0x10; // float32
                constexpr std::ptrdiff_t m_fldbHigh = 0x14; // float32
                constexpr std::ptrdiff_t m_flLowCutoffFreq = 0x18; // float32
                constexpr std::ptrdiff_t m_flHighCutoffFreq = 0x1C; // float32
            }
            // Parent: None
            // Field count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerVsndTrigger {
                constexpr std::ptrdiff_t m_namespace = 0x70; // CUtlString
                constexpr std::ptrdiff_t m_slot1 = 0x78; // CVsndTriggerSlot
                constexpr std::ptrdiff_t m_slot2 = 0x100; // CVsndTriggerSlot
                constexpr std::ptrdiff_t m_slot3 = 0x188; // CVsndTriggerSlot
                constexpr std::ptrdiff_t m_slot4 = 0x210; // CVsndTriggerSlot
                constexpr std::ptrdiff_t m_slot5 = 0x298; // CVsndTriggerSlot
                constexpr std::ptrdiff_t m_slot6 = 0x320; // CVsndTriggerSlot
                constexpr std::ptrdiff_t m_slot7 = 0x3A8; // CVsndTriggerSlot
                constexpr std::ptrdiff_t m_slot8 = 0x430; // CVsndTriggerSlot
                constexpr std::ptrdiff_t m_slot9 = 0x4B8; // CVsndTriggerSlot
                constexpr std::ptrdiff_t m_slot10 = 0x540; // CVsndTriggerSlot
                constexpr std::ptrdiff_t m_slot11 = 0x5C8; // CVsndTriggerSlot
                constexpr std::ptrdiff_t m_slot12 = 0x650; // CVsndTriggerSlot
                constexpr std::ptrdiff_t m_slot13 = 0x6D8; // CVsndTriggerSlot
                constexpr std::ptrdiff_t m_slot14 = 0x760; // CVsndTriggerSlot
                constexpr std::ptrdiff_t m_slot15 = 0x7E8; // CVsndTriggerSlot
                constexpr std::ptrdiff_t m_slot16 = 0x870; // CVsndTriggerSlot
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerSetElement {
                constexpr std::ptrdiff_t m_sound = 0x0; // CSoundContainerReference
                constexpr std::ptrdiff_t m_flVolumeDB = 0x20; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            namespace CSndBeatPatternManager {
                constexpr std::ptrdiff_t m_vecPatterns = 0x38; // CUtlVector<CSndBeatPattern>
                constexpr std::ptrdiff_t m_vecActiveTracks = 0x70; // CUtlVector<CSndBeatTrack>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerAsyncGenerator {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSoundInfoHeader {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SosEditItemInfo_t {
                constexpr std::ptrdiff_t itemType = 0x0; // SosEditItemType_t
                constexpr std::ptrdiff_t itemName = 0x8; // CUtlString
                constexpr std::ptrdiff_t itemTypeName = 0x10; // CUtlString
                constexpr std::ptrdiff_t itemKVString = 0x20; // CUtlString
                constexpr std::ptrdiff_t itemPos = 0x28; // Vector2D
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixFlangerProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixFlangerDesc_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixEffectChainProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixEffectChainDesc_t
            }
            // Parent: None
            // Field count: 5
            namespace KeyGroup_t {
                constexpr std::ptrdiff_t nCenterNote = 0x0; // uint8
                constexpr std::ptrdiff_t nMinNote = 0x1; // uint8
                constexpr std::ptrdiff_t nMaxNote = 0x2; // uint8
                constexpr std::ptrdiff_t nNumVelocityZones = 0x3; // uint8
                constexpr std::ptrdiff_t pVelocityZones = 0x8; // VelocityZone_t*
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixFreeverbProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixFreeverbDesc_t
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixPlateverbDesc_t {
                constexpr std::ptrdiff_t m_flPrefilter = 0x0; // float32
                constexpr std::ptrdiff_t m_flInputDiffusion1 = 0x4; // float32
                constexpr std::ptrdiff_t m_flInputDiffusion2 = 0x8; // float32
                constexpr std::ptrdiff_t m_flDecay = 0xC; // float32
                constexpr std::ptrdiff_t m_flDamp = 0x10; // float32
                constexpr std::ptrdiff_t m_flFeedbackDiffusion1 = 0x14; // float32
                constexpr std::ptrdiff_t m_flFeedbackDiffusion2 = 0x18; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixConvolutionProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixConvolutionDesc_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSoundContainerReferenceArray {
                constexpr std::ptrdiff_t m_bUseReference = 0x0; // bool
                constexpr std::ptrdiff_t m_sounds = 0x8; // CUtlVector<CStrongHandle<InfoForResourceTypeCVoiceContainerBase>>
                constexpr std::ptrdiff_t m_pSounds = 0x20; // CUtlVector<CVoiceContainerBase*>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixFilterProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixFilterDesc_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixAdditionalOutput {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CVoiceContainerTapePlayer {
                constexpr std::ptrdiff_t m_bShouldWraparound = 0x80; // bool
                constexpr std::ptrdiff_t m_sourceAudio = 0x88; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
                constexpr std::ptrdiff_t m_flTapeSpeedAttackTime = 0x90; // float32
                constexpr std::ptrdiff_t m_flTapeSpeedReleaseTime = 0x94; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixSubgraphSwitchProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixSubgraphSwitchDesc_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixDiffusorDesc_t {
                constexpr std::ptrdiff_t m_flSize = 0x0; // float32
                constexpr std::ptrdiff_t m_flComplexity = 0x4; // float32
                constexpr std::ptrdiff_t m_flFeedback = 0x8; // float32
                constexpr std::ptrdiff_t m_flOutputGain = 0xC; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixSteamAudioPathingProcessorDesc {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixPannerProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixPannerDesc_t
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixDynamicsCompressorDesc_t {
                constexpr std::ptrdiff_t m_fldbOutputGain = 0x0; // float32
                constexpr std::ptrdiff_t m_fldbCompressionThreshold = 0x4; // float32
                constexpr std::ptrdiff_t m_fldbKneeWidth = 0x8; // float32
                constexpr std::ptrdiff_t m_flCompressionRatio = 0xC; // float32
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x10; // float32
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x14; // float32
                constexpr std::ptrdiff_t m_flRMSTimeMS = 0x18; // float32
                constexpr std::ptrdiff_t m_flWetMix = 0x1C; // float32
                constexpr std::ptrdiff_t m_bPeakMode = 0x20; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerVMixSnd {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixStereoDelayProcessorDesc {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixShaperDesc_t {
                constexpr std::ptrdiff_t m_nShape = 0x0; // int32
                constexpr std::ptrdiff_t m_fldbDrive = 0x4; // float32
                constexpr std::ptrdiff_t m_fldbOutputGain = 0x8; // float32
                constexpr std::ptrdiff_t m_flWetMix = 0xC; // float32
                constexpr std::ptrdiff_t m_nOversampleFactor = 0x10; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixEnvelopeDesc_t {
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x0; // float32
                constexpr std::ptrdiff_t m_flHoldTimeMS = 0x4; // float32
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x8; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAudioSentence {
                constexpr std::ptrdiff_t m_bShouldVoiceDuck = 0x0; // bool
                constexpr std::ptrdiff_t m_RunTimePhonemes = 0x8; // CUtlVector<CAudioPhonemeTag>
                constexpr std::ptrdiff_t m_EmphasisSamples = 0x20; // CUtlVector<CAudioEmphasisSample>
                constexpr std::ptrdiff_t m_morphData = 0x38; // CAudioMorphData
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerParameterBlender {
                constexpr std::ptrdiff_t m_firstSound = 0x70; // CSoundContainerReference
                constexpr std::ptrdiff_t m_secondSound = 0x90; // CSoundContainerReference
                constexpr std::ptrdiff_t m_bEnableOcclusionBlend = 0xB0; // bool
                constexpr std::ptrdiff_t m_curve1 = 0xB8; // CPiecewiseCurve
                constexpr std::ptrdiff_t m_curve2 = 0xF8; // CPiecewiseCurve
                constexpr std::ptrdiff_t m_bEnableDistanceBlend = 0x138; // bool
                constexpr std::ptrdiff_t m_curve3 = 0x140; // CPiecewiseCurve
                constexpr std::ptrdiff_t m_curve4 = 0x180; // CPiecewiseCurve
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixAudioMeter {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_displayName = 0x8; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixVocoderProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixVocoderDesc_t
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CSosGroupActionLimitSchema {
                constexpr std::ptrdiff_t m_nMaxCount = 0x8; // int32
                constexpr std::ptrdiff_t m_nStopType = 0xC; // SosActionStopType_t
                constexpr std::ptrdiff_t m_nSortType = 0x10; // SosActionLimitSortType_t
                constexpr std::ptrdiff_t m_bStopImmediate = 0x14; // bool
                constexpr std::ptrdiff_t m_bCountStopped = 0x15; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerAmpedDecayingSineWave {
                constexpr std::ptrdiff_t m_flGainAmount = 0x78; // float32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixAutoFilterDesc_t {
                constexpr std::ptrdiff_t m_flEnvelopeAmount = 0x0; // float32
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x4; // float32
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x8; // float32
                constexpr std::ptrdiff_t m_filter = 0xC; // VMixFilterDesc_t
                constexpr std::ptrdiff_t m_flLFOAmount = 0x1C; // float32
                constexpr std::ptrdiff_t m_flLFORate = 0x20; // float32
                constexpr std::ptrdiff_t m_flPhase = 0x24; // float32
                constexpr std::ptrdiff_t m_nLFOShape = 0x28; // VMixLFOShape_t
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixDynamicsBand_t {
                constexpr std::ptrdiff_t m_fldbGainInput = 0x0; // float32
                constexpr std::ptrdiff_t m_fldbGainOutput = 0x4; // float32
                constexpr std::ptrdiff_t m_fldbThresholdBelow = 0x8; // float32
                constexpr std::ptrdiff_t m_fldbThresholdAbove = 0xC; // float32
                constexpr std::ptrdiff_t m_flRatioBelow = 0x10; // float32
                constexpr std::ptrdiff_t m_flRatioAbove = 0x14; // float32
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x18; // float32
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x1C; // float32
                constexpr std::ptrdiff_t m_bEnable = 0x20; // bool
                constexpr std::ptrdiff_t m_bSolo = 0x21; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixEffectChainDesc_t {
                constexpr std::ptrdiff_t m_effectName = 0x0; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixPlateReverbProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixPlateverbDesc_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerMultiBlender {
                constexpr std::ptrdiff_t m_soundsToPlay = 0x70; // CSoundContainerReferenceArray
                constexpr std::ptrdiff_t m_flBlendFactor = 0xA8; // float32
                constexpr std::ptrdiff_t m_flCrossover = 0xAC; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixVsndInput {
                constexpr std::ptrdiff_t m_defaultValue = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_nProcessor = 0x18; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerStaticAdditiveSynth__CGainScalePerInstance {
                constexpr std::ptrdiff_t m_flMinVolume = 0x0; // float32
                constexpr std::ptrdiff_t m_nInstancesAtMinVolume = 0x4; // int32
                constexpr std::ptrdiff_t m_flMaxVolume = 0x8; // float32
                constexpr std::ptrdiff_t m_nInstancesAtMaxVolume = 0xC; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SndBeatTimeSignature_t {
                constexpr std::ptrdiff_t nNumerator = 0x0; // uint8
                constexpr std::ptrdiff_t nDenominator = 0x1; // uint8
            }
            // Parent: None
            // Field count: 4
            namespace VelocityZone_t {
                constexpr std::ptrdiff_t nMaxVel = 0x0; // uint8
                constexpr std::ptrdiff_t nNextSelection = 0x1; // uint8
                constexpr std::ptrdiff_t nNumSamples = 0x2; // uint8
                constexpr std::ptrdiff_t pSamples = 0x4; // uint32[4]
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerSelector {
                constexpr std::ptrdiff_t m_mode = 0x70; // PlayBackMode_t
                constexpr std::ptrdiff_t m_soundsToPlay = 0x78; // CSoundContainerReferenceArray
                constexpr std::ptrdiff_t m_fProbabilityWeights = 0xB0; // CUtlVector<float32>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SndBeatEventKeyedSndEvts_t {
                constexpr std::ptrdiff_t m_strSoundEventName = 0x10; // CUtlString
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CSosGroupActionTimeBlockLimitSchema {
                constexpr std::ptrdiff_t m_nMaxCount = 0x8; // int32
                constexpr std::ptrdiff_t m_flMaxDuration = 0xC; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SndBeatEventKeyedMidiNotes_t {
                constexpr std::ptrdiff_t m_nStatus = 0x10; // uint8
                constexpr std::ptrdiff_t m_nNote = 0x11; // uint8
                constexpr std::ptrdiff_t m_nVelocity = 0x12; // uint8
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CSosGroupActionMemberCountEnvelopeSchema {
                constexpr std::ptrdiff_t m_nBaseCount = 0x8; // int32
                constexpr std::ptrdiff_t m_nTargetCount = 0xC; // int32
                constexpr std::ptrdiff_t m_flBaseValue = 0x10; // float32
                constexpr std::ptrdiff_t m_flTargetValue = 0x14; // float32
                constexpr std::ptrdiff_t m_flAttack = 0x18; // float32
                constexpr std::ptrdiff_t m_flDecay = 0x1C; // float32
                constexpr std::ptrdiff_t m_resultVarName = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_bSaveToGroup = 0x28; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixDualCompressorProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixDualCompressorDesc_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerSwitch {
                constexpr std::ptrdiff_t m_soundsToPlay = 0x70; // CUtlVector<CSoundContainerReference>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixControlMeter {
                constexpr std::ptrdiff_t m_nValueIndex = 0x10; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerEnum {
                constexpr std::ptrdiff_t m_soundsToPlay = 0x70; // CSoundContainerReferenceArray
                constexpr std::ptrdiff_t m_iSelection = 0xA8; // int32
                constexpr std::ptrdiff_t m_flCrossfadeTime = 0xAC; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CSosGroupActionTimeLimitSchema {
                constexpr std::ptrdiff_t m_flMaxDuration = 0x8; // float32
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixVocoderDesc_t {
                constexpr std::ptrdiff_t m_nBandCount = 0x0; // int32
                constexpr std::ptrdiff_t m_flBandwidth = 0x4; // float32
                constexpr std::ptrdiff_t m_fldBModGain = 0x8; // float32
                constexpr std::ptrdiff_t m_flFreqRangeStart = 0xC; // float32
                constexpr std::ptrdiff_t m_flFreqRangeEnd = 0x10; // float32
                constexpr std::ptrdiff_t m_fldBUnvoicedGain = 0x14; // float32
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x18; // float32
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x1C; // float32
                constexpr std::ptrdiff_t m_nDebugBand = 0x20; // int32
                constexpr std::ptrdiff_t m_bPeakMode = 0x24; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixUtilityDesc_t {
                constexpr std::ptrdiff_t m_nOp = 0x0; // VMixChannelOperation_t
                constexpr std::ptrdiff_t m_flInputPan = 0x4; // float32
                constexpr std::ptrdiff_t m_flOutputBalance = 0x8; // float32
                constexpr std::ptrdiff_t m_fldbOutputGain = 0xC; // float32
                constexpr std::ptrdiff_t m_bBassMono = 0x10; // bool
                constexpr std::ptrdiff_t m_flBassFreq = 0x14; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerLoopTrigger {
                constexpr std::ptrdiff_t m_flRetriggerTimeMin = 0x70; // float32
                constexpr std::ptrdiff_t m_flRetriggerTimeMax = 0x74; // float32
                constexpr std::ptrdiff_t m_flFadeTime = 0x78; // float32
                constexpr std::ptrdiff_t m_bCrossFade = 0x7C; // bool
                constexpr std::ptrdiff_t m_sound = 0x80; // CSoundContainerReference
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeType
            namespace SndBeatEventKeys_t {
                constexpr std::ptrdiff_t m_flKey = 0x8; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerDecayingSineWave {
                constexpr std::ptrdiff_t m_flFrequency = 0x70; // float32
                constexpr std::ptrdiff_t m_flDecayTime = 0x74; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixDelayProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixDelayDesc_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixBoxverb2ProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixBoxverbDesc_t
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixFilterDesc_t {
                constexpr std::ptrdiff_t m_nFilterType = 0x0; // VMixFilterType_t
                constexpr std::ptrdiff_t m_nFilterSlope = 0x2; // VMixFilterSlope_t
                constexpr std::ptrdiff_t m_bEnabled = 0x3; // bool
                constexpr std::ptrdiff_t m_fldbGain = 0x4; // float32
                constexpr std::ptrdiff_t m_flCutoffFreq = 0x8; // float32
                constexpr std::ptrdiff_t m_flQ = 0xC; // float32
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MPropertyArrayElementNameKey
            // MVDataOutlinerNameExpr
            // MGetKV3ClassDefaults
            namespace CSndBeatPattern {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_launchSyncType = 0xC; // SndBeatLaunchSyncType_t
                constexpr std::ptrdiff_t m_flSyncPriority = 0x10; // float32
                constexpr std::ptrdiff_t m_timeSignature = 0x14; // SndBeatTimeSignature_t
                constexpr std::ptrdiff_t m_flLength = 0x1C; // float32
                constexpr std::ptrdiff_t m_bLooping = 0x20; // bool
                constexpr std::ptrdiff_t m_launchSyncEventType = 0x24; // SndBeatEventType_t
                constexpr std::ptrdiff_t m_flSyncBeatMult = 0x28; // float32
                constexpr std::ptrdiff_t m_playEventType = 0x2C; // SndBeatEventType_t
                constexpr std::ptrdiff_t m_flPlayBeatMult = 0x30; // float32
                constexpr std::ptrdiff_t m_keyType = 0x34; // SndBeatKeyType_t
                constexpr std::ptrdiff_t m_vecPatternKeys = 0x38; // CUtlVector<SndBeatEventKeys_t>
                constexpr std::ptrdiff_t m_vecPatternFloats = 0x50; // CUtlVector<SndBeatEventKeyedFloats_t>
                constexpr std::ptrdiff_t m_vecPatternSndEvts = 0x68; // CUtlVector<SndBeatEventKeyedSndEvts_t>
                constexpr std::ptrdiff_t m_vecPatternMidi = 0x80; // CUtlVector<SndBeatEventKeyedMidiNotes_t>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixOscDesc_t {
                constexpr std::ptrdiff_t oscType = 0x0; // VMixLFOShape_t
                constexpr std::ptrdiff_t m_freq = 0x4; // float32
                constexpr std::ptrdiff_t m_flPhase = 0x8; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixAutoFilterProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixAutoFilterDesc_t
            }
            // Parent: None
            // Field count: 0
            namespace ISndSeqInstruments {
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixFlangerDesc_t {
                constexpr std::ptrdiff_t m_bPhaseInvert = 0x0; // bool
                constexpr std::ptrdiff_t m_flGlideTime = 0x4; // float32
                constexpr std::ptrdiff_t m_flDelay = 0x8; // float32
                constexpr std::ptrdiff_t m_flOutputGain = 0xC; // float32
                constexpr std::ptrdiff_t m_flFeedbackGain = 0x10; // float32
                constexpr std::ptrdiff_t m_flFeedforwardGain = 0x14; // float32
                constexpr std::ptrdiff_t m_flModRate = 0x18; // float32
                constexpr std::ptrdiff_t m_flModDepth = 0x1C; // float32
                constexpr std::ptrdiff_t m_bApplyAntialiasing = 0x20; // bool
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixDynamicsDesc_t {
                constexpr std::ptrdiff_t m_fldbGain = 0x0; // float32
                constexpr std::ptrdiff_t m_fldbNoiseGateThreshold = 0x4; // float32
                constexpr std::ptrdiff_t m_fldbCompressionThreshold = 0x8; // float32
                constexpr std::ptrdiff_t m_fldbLimiterThreshold = 0xC; // float32
                constexpr std::ptrdiff_t m_fldbKneeWidth = 0x10; // float32
                constexpr std::ptrdiff_t m_flRatio = 0x14; // float32
                constexpr std::ptrdiff_t m_flLimiterRatio = 0x18; // float32
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x1C; // float32
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x20; // float32
                constexpr std::ptrdiff_t m_flRMSTimeMS = 0x24; // float32
                constexpr std::ptrdiff_t m_flWetMix = 0x28; // float32
                constexpr std::ptrdiff_t m_bPeakMode = 0x2C; // bool
            }
        }
    }
}
