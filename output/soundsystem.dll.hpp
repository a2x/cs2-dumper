// Generated using https://github.com/a2x/cs2-dumper
// 2024-04-02 16:10:48.961749300 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: soundsystem.dll
        // Classes count: 50
        // Enums count: 13
        namespace soundsystem_dll {
            // Alignment: 4
            // Members count: 30
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
            // Members count: 6
            enum class ActionType_t : uint32_t {
                SOS_ACTION_NONE = 0x0,
                SOS_ACTION_LIMITER = 0x1,
                SOS_ACTION_TIME_LIMIT = 0x2,
                SOS_ACTION_TIME_BLOCK_LIMITER = 0x3,
                SOS_ACTION_SET_SOUNDEVENT_PARAM = 0x4,
                SOS_ACTION_SOUNDEVENT_CLUSTER = 0x5
            };
            // Alignment: 4
            // Members count: 3
            enum class SosActionStopType_t : uint32_t {
                SOS_STOPTYPE_NONE = 0x0,
                SOS_STOPTYPE_TIME = 0x1,
                SOS_STOPTYPE_OPVAR = 0x2
            };
            // Alignment: 4
            // Members count: 2
            enum class SosActionSortType_t : uint32_t {
                SOS_SORTTYPE_HIGHEST = 0x0,
                SOS_SORTTYPE_LOWEST = 0x1
            };
            // Alignment: 4
            // Members count: 2
            enum class SosGroupType_t : uint32_t {
                SOS_GROUPTYPE_DYNAMIC = 0x0,
                SOS_GROUPTYPE_STATIC = 0x1
            };
            // Alignment: 4
            // Members count: 6
            enum class SosEditItemType_t : uint32_t {
                SOS_EDIT_ITEM_TYPE_SOUNDEVENTS = 0x0,
                SOS_EDIT_ITEM_TYPE_SOUNDEVENT = 0x1,
                SOS_EDIT_ITEM_TYPE_LIBRARYSTACKS = 0x2,
                SOS_EDIT_ITEM_TYPE_STACK = 0x3,
                SOS_EDIT_ITEM_TYPE_OPERATOR = 0x4,
                SOS_EDIT_ITEM_TYPE_FIELD = 0x5
            };
            // Alignment: 2
            // Members count: 10
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
            // Alignment: 1
            // Members count: 9
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
            // Alignment: 2
            // Members count: 30
            enum class VMixProcessorType_t : uint16_t {
                VPROCESSOR_UNKNOWN = 0x0,
                VPROCESSOR_STEAMAUDIO_REVERB = 0x1,
                VPROCESSOR_RT_PITCH = 0x2,
                VPROCESSOR_STEAMAUDIO_HRTF = 0x3,
                VPROCESSOR_DYNAMICS = 0x4,
                VPROCESSOR_PRESETDSP = 0x5,
                VPROCESSOR_DELAY = 0x6,
                VPROCESSOR_MOD_DELAY = 0x7,
                VPROCESSOR_DIFFUSOR = 0x8,
                VPROCESSOR_BOXVERB = 0x9,
                VPROCESSOR_FREEVERB = 0xA,
                VPROCESSOR_PLATEVERB = 0xB,
                VPROCESSOR_FULLWAVE_INTEGRATOR = 0xC,
                VPROCESSOR_FILTER = 0xD,
                VPROCESSOR_STEAMAUDIO_PATHING = 0xE,
                VPROCESSOR_EQ8 = 0xF,
                VPROCESSOR_ENVELOPE = 0x10,
                VPROCESSOR_VOCODER = 0x11,
                VPROCESSOR_CONVOLUTION = 0x12,
                VPROCESSOR_DYNAMICS_3BAND = 0x13,
                VPROCESSOR_DYNAMICS_COMPRESSOR = 0x14,
                VPROCESSOR_SHAPER = 0x15,
                VPROCESSOR_PANNER = 0x16,
                VPROCESSOR_UTILITY = 0x17,
                VPROCESSOR_AUTOFILTER = 0x18,
                VPROCESSOR_OSC = 0x19,
                VPROCESSOR_STEREODELAY = 0x1A,
                VPROCESSOR_EFFECT_CHAIN = 0x1B,
                VPROCESSOR_SUBGRAPH_SWITCH = 0x1C,
                VPROCESSOR_STEAMAUDIO_DIRECT = 0x1D
            };
            // Alignment: 4
            // Members count: 5
            enum class VMixLFOShape_t : uint32_t {
                LFO_SHAPE_SINE = 0x0,
                LFO_SHAPE_SQUARE = 0x1,
                LFO_SHAPE_TRI = 0x2,
                LFO_SHAPE_SAW = 0x3,
                LFO_SHAPE_NOISE = 0x4
            };
            // Alignment: 4
            // Members count: 2
            enum class VMixPannerType_t : uint32_t {
                PANNER_TYPE_LINEAR = 0x0,
                PANNER_TYPE_EQUAL_POWER = 0x1
            };
            // Alignment: 4
            // Members count: 3
            enum class VMixSubgraphSwitchInterpolationType_t : uint32_t {
                SUBGRAPH_INTERPOLATION_TEMPORAL_CROSSFADE = 0x0,
                SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT = 0x1,
                SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING = 0x2
            };
            // Alignment: 4
            // Members count: 6
            enum class VMixChannelOperation_t : uint32_t {
                VMIX_CHAN_STEREO = 0x0,
                VMIX_CHAN_LEFT = 0x1,
                VMIX_CHAN_RIGHT = 0x2,
                VMIX_CHAN_SWAP = 0x3,
                VMIX_CHAN_MONO = 0x4,
                VMIX_CHAN_MID_SIDE = 0x5
            };
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CSosGroupActionSchema {
                constexpr std::ptrdiff_t m_name = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_actionType = 0x10; // ActionType_t
                constexpr std::ptrdiff_t m_actionInstanceType = 0x14; // ActionType_t
            }
            // Parent: CSosGroupActionSchema
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSosGroupActionLimitSchema {
                constexpr std::ptrdiff_t m_nMaxCount = 0x18; // int32
                constexpr std::ptrdiff_t m_nStopType = 0x1C; // SosActionStopType_t
                constexpr std::ptrdiff_t m_nSortType = 0x20; // SosActionSortType_t
            }
            // Parent: CSosGroupActionSchema
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSosGroupActionTimeLimitSchema {
                constexpr std::ptrdiff_t m_flMaxDuration = 0x18; // float32
            }
            // Parent: CSosGroupActionSchema
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSosGroupActionTimeBlockLimitSchema {
                constexpr std::ptrdiff_t m_nMaxCount = 0x18; // int32
                constexpr std::ptrdiff_t m_flMaxDuration = 0x1C; // float32
            }
            // Parent: CSosGroupActionSchema
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSosGroupActionSetSoundeventParameterSchema {
                constexpr std::ptrdiff_t m_nMaxCount = 0x18; // int32
                constexpr std::ptrdiff_t m_flMinValue = 0x1C; // float32
                constexpr std::ptrdiff_t m_flMaxValue = 0x20; // float32
                constexpr std::ptrdiff_t m_opvarName = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_nSortType = 0x30; // SosActionSortType_t
            }
            // Parent: CSosGroupActionSchema
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSosGroupActionSoundeventClusterSchema {
                constexpr std::ptrdiff_t m_nMinNearby = 0x18; // int32
                constexpr std::ptrdiff_t m_flClusterEpsilon = 0x1C; // float32
                constexpr std::ptrdiff_t m_shouldPlayOpvar = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_shouldPlayClusterChild = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_clusterSizeOpvar = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_groupBoundingBoxMinsOpvar = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_groupBoundingBoxMaxsOpvar = 0x40; // CUtlString
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSosGroupBranchPattern {
                constexpr std::ptrdiff_t m_bMatchEventName = 0x8; // bool
                constexpr std::ptrdiff_t m_bMatchEventSubString = 0x9; // bool
                constexpr std::ptrdiff_t m_bMatchEntIndex = 0xA; // bool
                constexpr std::ptrdiff_t m_bMatchOpvar = 0xB; // bool
            }
            // Parent: CSosGroupBranchPattern
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSosGroupMatchPattern {
                constexpr std::ptrdiff_t m_matchSoundEventName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_matchSoundEventSubString = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_flEntIndex = 0x20; // float32
                constexpr std::ptrdiff_t m_flOpvar = 0x24; // float32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CSosSoundEventGroupSchema {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nType = 0x8; // SosGroupType_t
                constexpr std::ptrdiff_t m_bIsBlocking = 0xC; // bool
                constexpr std::ptrdiff_t m_nBlockMaxCount = 0x10; // int32
                constexpr std::ptrdiff_t m_bInvertMatch = 0x14; // bool
                constexpr std::ptrdiff_t m_matchPattern = 0x18; // CSosGroupMatchPattern
                constexpr std::ptrdiff_t m_branchPattern = 0x40; // CSosGroupBranchPattern
                constexpr std::ptrdiff_t m_vActions = 0xB0; // CSosGroupActionSchema*[4]
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSosSoundEventGroupListSchema {
                constexpr std::ptrdiff_t m_groupList = 0x0; // CUtlVector<CSosSoundEventGroupSchema>
            }
            // Parent: None
            // Fields count: 5
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
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SelectedEditItemInfo_t {
                constexpr std::ptrdiff_t m_EditItems = 0x0; // CUtlVector<SosEditItemInfo_t>
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSoundEventMetaData {
                constexpr std::ptrdiff_t m_soundEventVMix = 0x0; // CStrongHandle<InfoForResourceTypeCVMixListResource>
            }
            // Parent: None
            // Fields count: 6
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
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDspPresetModifierList {
                constexpr std::ptrdiff_t m_dspName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_modifiers = 0x8; // CUtlVector<CDSPMixgroupModifier>
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerBase {
                constexpr std::ptrdiff_t m_curves = 0x20; // CUtlDict<CPiecewiseCurve,F(size=1)>
            }
            // Parent: CVoiceContainerBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerDefault {
            }
            // Parent: CVoiceContainerBase
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerWavFileReader {
                constexpr std::ptrdiff_t m_wavFilePath = 0x60; // CUtlString
            }
            // Parent: CVoiceContainerWavFileReader
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerTestConstant {
                constexpr std::ptrdiff_t m_flTestConstantParam = 0x68; // bool
            }
            // Parent: CVoiceContainerBase
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerTestNestedDynamic {
                constexpr std::ptrdiff_t m_SoundToPlay = 0x60; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
                constexpr std::ptrdiff_t m_flTestConstantParam = 0x68; // float32
            }
            // Parent: CVoiceContainerBase
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerDecayingSineWave {
                constexpr std::ptrdiff_t m_flFrequency = 0x60; // float32
                constexpr std::ptrdiff_t m_flDecayTime = 0x64; // float32
            }
            // Parent: CVoiceContainerDecayingSineWave
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerAmpedDecayingSineWave {
                constexpr std::ptrdiff_t m_flGainAmount = 0x68; // float32
            }
            // Parent: CVoiceContainerBase
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerRealtimeFMSineWave {
                constexpr std::ptrdiff_t m_flCarrierFrequency = 0x60; // float32
                constexpr std::ptrdiff_t m_flModulatorFrequency = 0x64; // float32
                constexpr std::ptrdiff_t m_flModulatorAmount = 0x68; // float32
            }
            // Parent: CVoiceContainerBase
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerBlend {
                constexpr std::ptrdiff_t m_hSoundOne = 0x60; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
                constexpr std::ptrdiff_t m_hSoundTwo = 0x68; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
                constexpr std::ptrdiff_t m_flBlendAmount = 0x70; // float32
            }
            // Parent: CVoiceContainerBase
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerEngineSound {
                constexpr std::ptrdiff_t m_SoundToPlay = 0x60; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
                constexpr std::ptrdiff_t m_flTestConstantParam = 0x68; // float32
                constexpr std::ptrdiff_t m_flTestSoundEventBoundParam = 0x6C; // float32
                constexpr std::ptrdiff_t m_flEngineRPM = 0x70; // float32
            }
            // Parent: CVoiceContainerWavFileReader
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerEnvelopeAnalyzer {
                constexpr std::ptrdiff_t m_envBuffer = 0x68; // CUtlVector<float32>
            }
            // Parent: CVoiceContainerBase
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVoiceContainerRandomSampler {
                constexpr std::ptrdiff_t m_flLoudAmplitude = 0x60; // float32
                constexpr std::ptrdiff_t m_flLoudAmplitudeJitter = 0x64; // float32
                constexpr std::ptrdiff_t m_flSoftAmplitude = 0x68; // float32
                constexpr std::ptrdiff_t m_flSoftAmplitudeJitter = 0x6C; // float32
                constexpr std::ptrdiff_t m_flLoudTimeJitter = 0x70; // float32
                constexpr std::ptrdiff_t m_flSoftTimeJitter = 0x74; // float32
                constexpr std::ptrdiff_t m_grainResources = 0x78; // CUtlVector<CStrongHandle<InfoForResourceTypeCVoiceContainerBase>>
            }
            // Parent: None
            // Fields count: 6
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
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixEQ8Desc_t {
                constexpr std::ptrdiff_t m_stages = 0x0; // VMixFilterDesc_t[8]
            }
            // Parent: None
            // Fields count: 7
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
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixPannerDesc_t {
                constexpr std::ptrdiff_t m_type = 0x0; // VMixPannerType_t
                constexpr std::ptrdiff_t m_flStrength = 0x4; // float32
            }
            // Parent: None
            // Fields count: 9
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
            // Fields count: 4
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
            // Fields count: 17
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
            // Fields count: 4
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
            // Fields count: 7
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
            // Fields count: 12
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
            // Parent: None
            // Fields count: 9
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
            // Fields count: 10
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
            // Fields count: 10
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
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixEnvelopeDesc_t {
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x0; // float32
                constexpr std::ptrdiff_t m_flHoldTimeMS = 0x4; // float32
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x8; // float32
            }
            // Parent: None
            // Fields count: 4
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
            // Fields count: 8
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
            // Fields count: 10
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
            // Fields count: 5
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
            // Fields count: 6
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
            // Fields count: 8
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
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixOscDesc_t {
                constexpr std::ptrdiff_t oscType = 0x0; // VMixLFOShape_t
                constexpr std::ptrdiff_t m_freq = 0x4; // float32
                constexpr std::ptrdiff_t m_flPhase = 0x8; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixEffectChainDesc_t {
                constexpr std::ptrdiff_t m_flCrossfadeTime = 0x0; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VMixSubgraphSwitchDesc_t {
                constexpr std::ptrdiff_t m_interpolationMode = 0x0; // VMixSubgraphSwitchInterpolationType_t
                constexpr std::ptrdiff_t m_bOnlyTailsOnFadeOut = 0x4; // bool
                constexpr std::ptrdiff_t m_flInterpolationTime = 0x8; // float32
            }
        }
    }
}
