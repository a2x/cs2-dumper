// Generated using https://github.com/a2x/cs2-dumper
// 2024-08-08 22:44:32.016601800 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: soundsystem.dll
        // Classes count: 63
        // Enums count: 18
        namespace soundsystem_dll {
            // Alignment: 4
            // Member count: 2
            enum class EMode_t : uint32_t {
                Peak = 0x0,
                RMS = 0x1
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
            };
            // Alignment: 4
            // Member count: 3
            enum class SosActionStopType_t : uint32_t {
                SOS_STOPTYPE_NONE = 0x0,
                SOS_STOPTYPE_TIME = 0x1,
                SOS_STOPTYPE_OPVAR = 0x2
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
            // Member count: 2
            enum class SosActionSortType_t : uint32_t {
                SOS_SORTTYPE_HIGHEST = 0x0,
                SOS_SORTTYPE_LOWEST = 0x1
            };
            // Alignment: 4
            // Member count: 4
            enum class PlayBackMode_t : uint32_t {
                Random = 0x0,
                RandomNoRepeats = 0x1,
                RandomAvoidLast = 0x2,
                Sequential = 0x3
            };
            // Alignment: 2
            // Member count: 30
            enum class VMixProcessorType_t : uint16_t {
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
            // Member count: 8
            enum class ActionType_t : uint32_t {
                SOS_ACTION_NONE = 0x0,
                SOS_ACTION_LIMITER = 0x1,
                SOS_ACTION_TIME_LIMIT = 0x2,
                SOS_ACTION_TIME_BLOCK_LIMITER = 0x3,
                SOS_ACTION_SET_SOUNDEVENT_PARAM = 0x4,
                SOS_ACTION_SOUNDEVENT_CLUSTER = 0x5,
                SOS_ACTION_SOUNDEVENT_PRIORITY = 0x6,
                SOS_ACTION_COUNT_ENVELOPE = 0x7
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
            // Parent: CVoiceContainerBase
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerBlender {
                constexpr std::ptrdiff_t m_firstSound = 0xF0; // 
                constexpr std::ptrdiff_t m_secondSound = 0xF8; // 
                constexpr std::ptrdiff_t m_flBlendFactor = 0x100; // 
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixFreeverbDesc_t {
                constexpr std::ptrdiff_t m_flRoomSize = 0x0; // 
                constexpr std::ptrdiff_t m_flDamp = 0x4; // 
                constexpr std::ptrdiff_t m_flWidth = 0x8; // 
                constexpr std::ptrdiff_t m_flLateReflections = 0xC; // 
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerStaticAdditiveSynth__CHarmonic {
                constexpr std::ptrdiff_t m_nWaveform = 0x0; // 
                constexpr std::ptrdiff_t m_nFundamental = 0x1; // 
                constexpr std::ptrdiff_t m_nOctave = 0x4; // 
                constexpr std::ptrdiff_t m_flCents = 0x8; // 
                constexpr std::ptrdiff_t m_flPhase = 0xC; // 
                constexpr std::ptrdiff_t m_curve = 0x10; // 
                constexpr std::ptrdiff_t m_volumeScaling = 0x50; // 
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerStaticAdditiveSynth__CTone {
                constexpr std::ptrdiff_t m_harmonics = 0x0; // 
                constexpr std::ptrdiff_t m_curve = 0x18; // 
                constexpr std::ptrdiff_t m_bSyncInstances = 0x58; // 
            }
            // Parent: CVoiceContainerBase
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerRandomSampler {
                constexpr std::ptrdiff_t m_flAmplitude = 0xF0; // 
                constexpr std::ptrdiff_t m_flAmplitudeJitter = 0xF4; // 
                constexpr std::ptrdiff_t m_flTimeJitter = 0xF8; // 
                constexpr std::ptrdiff_t m_flMaxLength = 0xFC; // 
                constexpr std::ptrdiff_t m_nNumDelayVariations = 0x100; // 
                constexpr std::ptrdiff_t m_grainResources = 0x108; // CUtlVector<CStrongHandle<InfoForResourceTypeCVoiceContainerBase>>
            }
            // Parent: CVoiceContainerBase
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerDefault {
                constexpr std::ptrdiff_t m_vsndReference = 0xF0; // 
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVSound {
                constexpr std::ptrdiff_t m_nRate = 0x0; // 
                constexpr std::ptrdiff_t m_nFormat = 0x4; // 
                constexpr std::ptrdiff_t m_nChannels = 0x8; // 
                constexpr std::ptrdiff_t m_nLoopStart = 0xC; // 
                constexpr std::ptrdiff_t m_nSampleCount = 0x10; // 
                constexpr std::ptrdiff_t m_flDuration = 0x14; // 
                constexpr std::ptrdiff_t m_Sentences = 0x18; // 
                constexpr std::ptrdiff_t m_nStreamingSize = 0x30; // 
                constexpr std::ptrdiff_t m_nSeekTable = 0x38; // 
                constexpr std::ptrdiff_t m_nLoopEnd = 0x50; // 
                constexpr std::ptrdiff_t m_encodedHeader = 0x58; // 
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeType
            namespace CDSPPresetMixgroupModifierTable {
                constexpr std::ptrdiff_t m_table = 0x0; // 
            }
            // Parent: CSosGroupActionSchema
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSosGroupActionSoundeventClusterSchema {
                constexpr std::ptrdiff_t m_nMinNearby = 0x18; // 
                constexpr std::ptrdiff_t m_flClusterEpsilon = 0x1C; // 
                constexpr std::ptrdiff_t m_shouldPlayOpvar = 0x20; // 
                constexpr std::ptrdiff_t m_shouldPlayClusterChild = 0x28; // 
                constexpr std::ptrdiff_t m_clusterSizeOpvar = 0x30; // 
                constexpr std::ptrdiff_t m_groupBoundingBoxMinsOpvar = 0x38; // 
                constexpr std::ptrdiff_t m_groupBoundingBoxMaxsOpvar = 0x40; // 
            }
            // Parent: CSosGroupActionSchema
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSosGroupActionSetSoundeventParameterSchema {
                constexpr std::ptrdiff_t m_nMaxCount = 0x18; // 
                constexpr std::ptrdiff_t m_flMinValue = 0x1C; // 
                constexpr std::ptrdiff_t m_flMaxValue = 0x20; // 
                constexpr std::ptrdiff_t m_opvarName = 0x28; // 
                constexpr std::ptrdiff_t m_nSortType = 0x30; // 
            }
            // Parent: CVoiceContainerBase
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerNull {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixSubgraphSwitchDesc_t {
                constexpr std::ptrdiff_t m_interpolationMode = 0x0; // VMixSubgraphSwitchInterpolationType_t
                constexpr std::ptrdiff_t m_bOnlyTailsOnFadeOut = 0x4; // 
                constexpr std::ptrdiff_t m_flInterpolationTime = 0x8; // 
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeType
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerAnalysisBase {
                constexpr std::ptrdiff_t m_bRegenerateCurveOnCompile = 0x8; // 
                constexpr std::ptrdiff_t m_curve = 0x10; // 
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixPannerDesc_t {
                constexpr std::ptrdiff_t m_type = 0x0; // 
                constexpr std::ptrdiff_t m_flStrength = 0x4; // 
            }
            // Parent: CSosGroupActionSchema
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSosGroupActionSoundeventPrioritySchema {
                constexpr std::ptrdiff_t m_priorityValue = 0x18; // 
                constexpr std::ptrdiff_t m_priorityVolumeScalar = 0x20; // 
                constexpr std::ptrdiff_t m_priorityContributeButDontRead = 0x28; // 
                constexpr std::ptrdiff_t m_bPriorityReadButDontContribute = 0x30; // 
            }
            // Parent: CVoiceContainerBase
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerRealtimeFMSineWave {
                constexpr std::ptrdiff_t m_flCarrierFrequency = 0xF0; // 
                constexpr std::ptrdiff_t m_flModulatorFrequency = 0xF4; // 
                constexpr std::ptrdiff_t m_flModulatorAmount = 0xF8; // 
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SelectedEditItemInfo_t {
                constexpr std::ptrdiff_t m_EditItems = 0x0; // 
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixModDelayDesc_t {
                constexpr std::ptrdiff_t m_feedbackFilter = 0x0; // 
                constexpr std::ptrdiff_t m_bPhaseInvert = 0x10; // 
                constexpr std::ptrdiff_t m_flGlideTime = 0x14; // 
                constexpr std::ptrdiff_t m_flDelay = 0x18; // 
                constexpr std::ptrdiff_t m_flOutputGain = 0x1C; // 
                constexpr std::ptrdiff_t m_flFeedbackGain = 0x20; // 
                constexpr std::ptrdiff_t m_flModRate = 0x24; // 
                constexpr std::ptrdiff_t m_flModDepth = 0x28; // 
                constexpr std::ptrdiff_t m_bApplyAntialiasing = 0x2C; // 
            }
            // Parent: None
            // Field count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixBoxverbDesc_t {
                constexpr std::ptrdiff_t m_flSizeMax = 0x0; // 
                constexpr std::ptrdiff_t m_flSizeMin = 0x4; // 
                constexpr std::ptrdiff_t m_flComplexity = 0x8; // 
                constexpr std::ptrdiff_t m_flDiffusion = 0xC; // 
                constexpr std::ptrdiff_t m_flModDepth = 0x10; // 
                constexpr std::ptrdiff_t m_flModRate = 0x14; // 
                constexpr std::ptrdiff_t m_bParallel = 0x18; // 
                constexpr std::ptrdiff_t m_filterType = 0x1C; // 
                constexpr std::ptrdiff_t m_flWidth = 0x2C; // 
                constexpr std::ptrdiff_t m_flHeight = 0x30; // 
                constexpr std::ptrdiff_t m_flDepth = 0x34; // 
                constexpr std::ptrdiff_t m_flFeedbackScale = 0x38; // 
                constexpr std::ptrdiff_t m_flFeedbackWidth = 0x3C; // 
                constexpr std::ptrdiff_t m_flFeedbackHeight = 0x40; // 
                constexpr std::ptrdiff_t m_flFeedbackDepth = 0x44; // 
                constexpr std::ptrdiff_t m_flOutputGain = 0x48; // 
                constexpr std::ptrdiff_t m_flTaps = 0x4C; // 
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CSosGroupActionSchema {
                constexpr std::ptrdiff_t m_name = 0x8; // 
                constexpr std::ptrdiff_t m_actionType = 0x10; // 
                constexpr std::ptrdiff_t m_actionInstanceType = 0x14; // 
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CSosSoundEventGroupSchema {
                constexpr std::ptrdiff_t m_name = 0x0; // 
                constexpr std::ptrdiff_t m_nType = 0x8; // 
                constexpr std::ptrdiff_t m_bIsBlocking = 0xC; // 
                constexpr std::ptrdiff_t m_nBlockMaxCount = 0x10; // 
                constexpr std::ptrdiff_t m_bInvertMatch = 0x14; // 
                constexpr std::ptrdiff_t m_matchPattern = 0x18; // 
                constexpr std::ptrdiff_t m_branchPattern = 0x48; // 
                constexpr std::ptrdiff_t m_flLifeSpanTime = 0x58; // 
                constexpr std::ptrdiff_t m_vActions = 0xC0; // 
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSosGroupBranchPattern {
                constexpr std::ptrdiff_t m_bMatchEventName = 0x8; // 
                constexpr std::ptrdiff_t m_bMatchEventSubString = 0x9; // 
                constexpr std::ptrdiff_t m_bMatchEntIndex = 0xA; // 
                constexpr std::ptrdiff_t m_bMatchOpvar = 0xB; // 
                constexpr std::ptrdiff_t m_bMatchString = 0xC; // 
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixDynamics3BandDesc_t {
                constexpr std::ptrdiff_t m_fldbGainOutput = 0x0; // 
                constexpr std::ptrdiff_t m_flRMSTimeMS = 0x4; // 
                constexpr std::ptrdiff_t m_fldbKneeWidth = 0x8; // 
                constexpr std::ptrdiff_t m_flDepth = 0xC; // 
                constexpr std::ptrdiff_t m_flWetMix = 0x10; // 
                constexpr std::ptrdiff_t m_flTimeScale = 0x14; // 
                constexpr std::ptrdiff_t m_flLowCutoffFreq = 0x18; // 
                constexpr std::ptrdiff_t m_flHighCutoffFreq = 0x1C; // 
                constexpr std::ptrdiff_t m_bPeakMode = 0x20; // 
                constexpr std::ptrdiff_t m_bandDesc = 0x24; // 
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDSPMixgroupModifier {
                constexpr std::ptrdiff_t m_mixgroup = 0x0; // 
                constexpr std::ptrdiff_t m_flModifier = 0x8; // 
                constexpr std::ptrdiff_t m_flModifierMin = 0xC; // 
                constexpr std::ptrdiff_t m_flSourceModifier = 0x10; // 
                constexpr std::ptrdiff_t m_flSourceModifierMin = 0x14; // 
                constexpr std::ptrdiff_t m_flListenerReverbModifierWhenSourceReverbIsActive = 0x18; // 
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAudioMorphData {
                constexpr std::ptrdiff_t m_times = 0x0; // 
                constexpr std::ptrdiff_t m_nameHashCodes = 0x18; // 
                constexpr std::ptrdiff_t m_nameStrings = 0x30; // 
                constexpr std::ptrdiff_t m_samples = 0x48; // 
                constexpr std::ptrdiff_t m_flEaseIn = 0x60; // 
                constexpr std::ptrdiff_t m_flEaseOut = 0x64; // 
            }
            // Parent: CVoiceContainerBase
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerStaticAdditiveSynth {
                constexpr std::ptrdiff_t m_tones = 0xF0; // 
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDspPresetModifierList {
                constexpr std::ptrdiff_t m_dspName = 0x0; // 
                constexpr std::ptrdiff_t m_modifiers = 0x8; // 
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeType
            // MVDataFileExtension
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerBase {
                constexpr std::ptrdiff_t m_vSound = 0x20; // 
                constexpr std::ptrdiff_t m_bHideAnalyzers = 0xD0; // 
                constexpr std::ptrdiff_t m_analysisContainers = 0xD8; // 
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixDelayDesc_t {
                constexpr std::ptrdiff_t m_feedbackFilter = 0x0; // 
                constexpr std::ptrdiff_t m_bEnableFilter = 0x10; // 
                constexpr std::ptrdiff_t m_flDelay = 0x14; // 
                constexpr std::ptrdiff_t m_flDirectGain = 0x18; // 
                constexpr std::ptrdiff_t m_flDelayGain = 0x1C; // 
                constexpr std::ptrdiff_t m_flFeedbackGain = 0x20; // 
                constexpr std::ptrdiff_t m_flWidth = 0x24; // 
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixEQ8Desc_t {
                constexpr std::ptrdiff_t m_stages = 0x0; // 
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAudioPhonemeTag {
                constexpr std::ptrdiff_t m_flStartTime = 0x0; // 
                constexpr std::ptrdiff_t m_flEndTime = 0x4; // 
                constexpr std::ptrdiff_t m_nPhonemeCode = 0x8; // 
            }
            // Parent: CVoiceContainerAnalysisBase
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerEnvelopeAnalyzer {
                constexpr std::ptrdiff_t m_mode = 0x50; // 
                constexpr std::ptrdiff_t m_nSamples = 0x54; // 
                constexpr std::ptrdiff_t m_flThreshold = 0x58; // 
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSoundEventMetaData {
                constexpr std::ptrdiff_t m_soundEventVMix = 0x0; // 
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixPitchShiftDesc_t {
                constexpr std::ptrdiff_t m_nGrainSampleCount = 0x0; // 
                constexpr std::ptrdiff_t m_flPitchShift = 0x4; // 
                constexpr std::ptrdiff_t m_nQuality = 0x8; // 
                constexpr std::ptrdiff_t m_nProcType = 0xC; // 
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAudioEmphasisSample {
                constexpr std::ptrdiff_t m_flTime = 0x0; // 
                constexpr std::ptrdiff_t m_flValue = 0x4; // 
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixConvolutionDesc_t {
                constexpr std::ptrdiff_t m_fldbGain = 0x0; // 
                constexpr std::ptrdiff_t m_flPreDelayMS = 0x4; // 
                constexpr std::ptrdiff_t m_flWetMix = 0x8; // 
                constexpr std::ptrdiff_t m_fldbLow = 0xC; // 
                constexpr std::ptrdiff_t m_fldbMid = 0x10; // 
                constexpr std::ptrdiff_t m_fldbHigh = 0x14; // 
                constexpr std::ptrdiff_t m_flLowCutoffFreq = 0x18; // 
                constexpr std::ptrdiff_t m_flHighCutoffFreq = 0x1C; // 
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSoundInfoHeader {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSosSoundEventGroupListSchema {
                constexpr std::ptrdiff_t m_groupList = 0x0; // 
            }
            // Parent: CSosGroupBranchPattern
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSosGroupMatchPattern {
                constexpr std::ptrdiff_t m_matchSoundEventName = 0x10; // 
                constexpr std::ptrdiff_t m_matchSoundEventSubString = 0x18; // 
                constexpr std::ptrdiff_t m_flEntIndex = 0x20; // 
                constexpr std::ptrdiff_t m_flOpvar = 0x24; // 
                constexpr std::ptrdiff_t m_opvarString = 0x28; // 
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SosEditItemInfo_t {
                constexpr std::ptrdiff_t itemType = 0x0; // 
                constexpr std::ptrdiff_t itemName = 0x8; // 
                constexpr std::ptrdiff_t itemTypeName = 0x10; // 
                constexpr std::ptrdiff_t itemKVString = 0x20; // 
                constexpr std::ptrdiff_t itemPos = 0x28; // 
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixPlateverbDesc_t {
                constexpr std::ptrdiff_t m_flPrefilter = 0x0; // 
                constexpr std::ptrdiff_t m_flInputDiffusion1 = 0x4; // 
                constexpr std::ptrdiff_t m_flInputDiffusion2 = 0x8; // 
                constexpr std::ptrdiff_t m_flDecay = 0xC; // 
                constexpr std::ptrdiff_t m_flDamp = 0x10; // 
                constexpr std::ptrdiff_t m_flFeedbackDiffusion1 = 0x14; // 
                constexpr std::ptrdiff_t m_flFeedbackDiffusion2 = 0x18; // 
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixDiffusorDesc_t {
                constexpr std::ptrdiff_t m_flSize = 0x0; // 
                constexpr std::ptrdiff_t m_flComplexity = 0x4; // 
                constexpr std::ptrdiff_t m_flFeedback = 0x8; // 
                constexpr std::ptrdiff_t m_flOutputGain = 0xC; // 
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixDynamicsCompressorDesc_t {
                constexpr std::ptrdiff_t m_fldbOutputGain = 0x0; // 
                constexpr std::ptrdiff_t m_fldbCompressionThreshold = 0x4; // 
                constexpr std::ptrdiff_t m_fldbKneeWidth = 0x8; // 
                constexpr std::ptrdiff_t m_flCompressionRatio = 0xC; // 
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x10; // 
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x14; // 
                constexpr std::ptrdiff_t m_flRMSTimeMS = 0x18; // 
                constexpr std::ptrdiff_t m_flWetMix = 0x1C; // 
                constexpr std::ptrdiff_t m_bPeakMode = 0x20; // 
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixShaperDesc_t {
                constexpr std::ptrdiff_t m_nShape = 0x0; // 
                constexpr std::ptrdiff_t m_fldbDrive = 0x4; // 
                constexpr std::ptrdiff_t m_fldbOutputGain = 0x8; // 
                constexpr std::ptrdiff_t m_flWetMix = 0xC; // 
                constexpr std::ptrdiff_t m_nOversampleFactor = 0x10; // 
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixEnvelopeDesc_t {
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x0; // 
                constexpr std::ptrdiff_t m_flHoldTimeMS = 0x4; // 
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x8; // 
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAudioSentence {
                constexpr std::ptrdiff_t m_bShouldVoiceDuck = 0x0; // 
                constexpr std::ptrdiff_t m_RunTimePhonemes = 0x8; // 
                constexpr std::ptrdiff_t m_EmphasisSamples = 0x20; // 
                constexpr std::ptrdiff_t m_morphData = 0x38; // 
            }
            // Parent: CSosGroupActionSchema
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSosGroupActionLimitSchema {
                constexpr std::ptrdiff_t m_nMaxCount = 0x18; // 
                constexpr std::ptrdiff_t m_nStopType = 0x1C; // 
                constexpr std::ptrdiff_t m_nSortType = 0x20; // 
            }
            // Parent: CVoiceContainerDecayingSineWave
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerAmpedDecayingSineWave {
                constexpr std::ptrdiff_t m_flGainAmount = 0xF8; // 
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixAutoFilterDesc_t {
                constexpr std::ptrdiff_t m_flEnvelopeAmount = 0x0; // 
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x4; // 
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x8; // 
                constexpr std::ptrdiff_t m_filter = 0xC; // 
                constexpr std::ptrdiff_t m_flLFOAmount = 0x1C; // 
                constexpr std::ptrdiff_t m_flLFORate = 0x20; // 
                constexpr std::ptrdiff_t m_flPhase = 0x24; // 
                constexpr std::ptrdiff_t m_nLFOShape = 0x28; // 
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixDynamicsBand_t {
                constexpr std::ptrdiff_t m_fldbGainInput = 0x0; // 
                constexpr std::ptrdiff_t m_fldbGainOutput = 0x4; // 
                constexpr std::ptrdiff_t m_fldbThresholdBelow = 0x8; // 
                constexpr std::ptrdiff_t m_fldbThresholdAbove = 0xC; // 
                constexpr std::ptrdiff_t m_flRatioBelow = 0x10; // 
                constexpr std::ptrdiff_t m_flRatioAbove = 0x14; // 
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x18; // 
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x1C; // 
                constexpr std::ptrdiff_t m_bEnable = 0x20; // 
                constexpr std::ptrdiff_t m_bSolo = 0x21; // 
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixEffectChainDesc_t {
                constexpr std::ptrdiff_t m_flCrossfadeTime = 0x0; // 
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerStaticAdditiveSynth__CGainScalePerInstance {
                constexpr std::ptrdiff_t m_flMinVolume = 0x0; // 
                constexpr std::ptrdiff_t m_nInstancesAtMinVolume = 0x4; // 
                constexpr std::ptrdiff_t m_flMaxVolume = 0x8; // 
                constexpr std::ptrdiff_t m_nInstancesAtMaxVolume = 0xC; // 
            }
            // Parent: CVoiceContainerBase
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerSelector {
                constexpr std::ptrdiff_t m_mode = 0xF0; // 
                constexpr std::ptrdiff_t m_bRetrigger = 0xF4; // 
                constexpr std::ptrdiff_t m_soundsToPlay = 0xF8; // CUtlVector<CStrongHandle<InfoForResourceTypeCVoiceContainerBase>>
            }
            // Parent: CSosGroupActionSchema
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSosGroupActionTimeBlockLimitSchema {
                constexpr std::ptrdiff_t m_nMaxCount = 0x18; // 
                constexpr std::ptrdiff_t m_flMaxDuration = 0x1C; // 
            }
            // Parent: CSosGroupActionSchema
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSosGroupActionMemberCountEnvelopeSchema {
                constexpr std::ptrdiff_t m_nBaseCount = 0x18; // 
                constexpr std::ptrdiff_t m_nTargetCount = 0x1C; // 
                constexpr std::ptrdiff_t m_flBaseValue = 0x20; // 
                constexpr std::ptrdiff_t m_flTargetValue = 0x24; // 
                constexpr std::ptrdiff_t m_flAttack = 0x28; // 
                constexpr std::ptrdiff_t m_flDecay = 0x2C; // 
                constexpr std::ptrdiff_t m_resultVarName = 0x30; // 
                constexpr std::ptrdiff_t m_bSaveToGroup = 0x38; // 
            }
            // Parent: CVoiceContainerBase
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerSwitch {
                constexpr std::ptrdiff_t m_soundsToPlay = 0xF0; // 
            }
            // Parent: CSosGroupActionSchema
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSosGroupActionTimeLimitSchema {
                constexpr std::ptrdiff_t m_flMaxDuration = 0x18; // 
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixVocoderDesc_t {
                constexpr std::ptrdiff_t m_nBandCount = 0x0; // 
                constexpr std::ptrdiff_t m_flBandwidth = 0x4; // 
                constexpr std::ptrdiff_t m_fldBModGain = 0x8; // 
                constexpr std::ptrdiff_t m_flFreqRangeStart = 0xC; // 
                constexpr std::ptrdiff_t m_flFreqRangeEnd = 0x10; // 
                constexpr std::ptrdiff_t m_fldBUnvoicedGain = 0x14; // 
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x18; // 
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x1C; // 
                constexpr std::ptrdiff_t m_nDebugBand = 0x20; // 
                constexpr std::ptrdiff_t m_bPeakMode = 0x24; // 
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixUtilityDesc_t {
                constexpr std::ptrdiff_t m_nOp = 0x0; // 
                constexpr std::ptrdiff_t m_flInputPan = 0x4; // 
                constexpr std::ptrdiff_t m_flOutputBalance = 0x8; // 
                constexpr std::ptrdiff_t m_fldbOutputGain = 0xC; // 
                constexpr std::ptrdiff_t m_bBassMono = 0x10; // 
                constexpr std::ptrdiff_t m_flBassFreq = 0x14; // 
            }
            // Parent: CVoiceContainerBase
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CVoiceContainerDecayingSineWave {
                constexpr std::ptrdiff_t m_flFrequency = 0xF0; // 
                constexpr std::ptrdiff_t m_flDecayTime = 0xF4; // 
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixFilterDesc_t {
                constexpr std::ptrdiff_t m_nFilterType = 0x0; // 
                constexpr std::ptrdiff_t m_nFilterSlope = 0x2; // 
                constexpr std::ptrdiff_t m_bEnabled = 0x3; // 
                constexpr std::ptrdiff_t m_fldbGain = 0x4; // 
                constexpr std::ptrdiff_t m_flCutoffFreq = 0x8; // 
                constexpr std::ptrdiff_t m_flQ = 0xC; // 
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixOscDesc_t {
                constexpr std::ptrdiff_t oscType = 0x0; // 
                constexpr std::ptrdiff_t m_freq = 0x4; // 
                constexpr std::ptrdiff_t m_flPhase = 0x8; // 
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixDynamicsDesc_t {
                constexpr std::ptrdiff_t m_fldbGain = 0x0; // 
                constexpr std::ptrdiff_t m_fldbNoiseGateThreshold = 0x4; // 
                constexpr std::ptrdiff_t m_fldbCompressionThreshold = 0x8; // 
                constexpr std::ptrdiff_t m_fldbLimiterThreshold = 0xC; // 
                constexpr std::ptrdiff_t m_fldbKneeWidth = 0x10; // 
                constexpr std::ptrdiff_t m_flRatio = 0x14; // 
                constexpr std::ptrdiff_t m_flLimiterRatio = 0x18; // 
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x1C; // 
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x20; // 
                constexpr std::ptrdiff_t m_flRMSTimeMS = 0x24; // 
                constexpr std::ptrdiff_t m_flWetMix = 0x28; // 
                constexpr std::ptrdiff_t m_bPeakMode = 0x2C; // 
            }
        }
    }
}
