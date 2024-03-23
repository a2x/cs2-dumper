'''
Generated using https://github.com/a2x/cs2-dumper
Sat, 23 Mar 2024 05:02:03 +0000
'''

class CDSPMixgroupModifier:
    m_mixgroup = 0x0 # CUtlString
    m_flModifier = 0x8 # float
    m_flModifierMin = 0xC # float
    m_flSourceModifier = 0x10 # float
    m_flSourceModifierMin = 0x14 # float
    m_flListenerReverbModifierWhenSourceReverbIsActive = 0x18 # float

class CDSPPresetMixgroupModifierTable:
    m_table = 0x0 # CUtlVector<CDspPresetModifierList>

class CDspPresetModifierList:
    m_dspName = 0x0 # CUtlString
    m_modifiers = 0x8 # CUtlVector<CDSPMixgroupModifier>

class CSosGroupActionLimitSchema: # CSosGroupActionSchema
    m_nMaxCount = 0x18 # int32_t
    m_nStopType = 0x1C # SosActionStopType_t
    m_nSortType = 0x20 # SosActionSortType_t

class CSosGroupActionSchema:
    m_name = 0x8 # CUtlString
    m_actionType = 0x10 # ActionType_t
    m_actionInstanceType = 0x14 # ActionType_t

class CSosGroupActionSetSoundeventParameterSchema: # CSosGroupActionSchema
    m_nMaxCount = 0x18 # int32_t
    m_flMinValue = 0x1C # float
    m_flMaxValue = 0x20 # float
    m_opvarName = 0x28 # CUtlString
    m_nSortType = 0x30 # SosActionSortType_t

class CSosGroupActionSoundeventClusterSchema: # CSosGroupActionSchema
    m_nMinNearby = 0x18 # int32_t
    m_flClusterEpsilon = 0x1C # float
    m_shouldPlayOpvar = 0x20 # CUtlString
    m_shouldPlayClusterChild = 0x28 # CUtlString
    m_clusterSizeOpvar = 0x30 # CUtlString
    m_groupBoundingBoxMinsOpvar = 0x38 # CUtlString
    m_groupBoundingBoxMaxsOpvar = 0x40 # CUtlString

class CSosGroupActionTimeBlockLimitSchema: # CSosGroupActionSchema
    m_nMaxCount = 0x18 # int32_t
    m_flMaxDuration = 0x1C # float

class CSosGroupActionTimeLimitSchema: # CSosGroupActionSchema
    m_flMaxDuration = 0x18 # float

class CSosGroupBranchPattern:
    m_bMatchEventName = 0x8 # bool
    m_bMatchEventSubString = 0x9 # bool
    m_bMatchEntIndex = 0xA # bool
    m_bMatchOpvar = 0xB # bool

class CSosGroupMatchPattern: # CSosGroupBranchPattern
    m_matchSoundEventName = 0x10 # CUtlString
    m_matchSoundEventSubString = 0x18 # CUtlString
    m_flEntIndex = 0x20 # float
    m_flOpvar = 0x24 # float

class CSosSoundEventGroupListSchema:
    m_groupList = 0x0 # CUtlVector<CSosSoundEventGroupSchema>

class CSosSoundEventGroupSchema:
    m_name = 0x0 # CUtlString
    m_nType = 0x8 # SosGroupType_t
    m_bIsBlocking = 0xC # bool
    m_nBlockMaxCount = 0x10 # int32_t
    m_bInvertMatch = 0x14 # bool
    m_matchPattern = 0x18 # CSosGroupMatchPattern
    m_branchPattern = 0x40 # CSosGroupBranchPattern
    m_vActions = 0xB0 # CSosGroupActionSchema*[4]

class CSoundEventMetaData:
    m_soundEventVMix = 0x0 # CStrongHandle<InfoForResourceTypeCVMixListResource>

class CVoiceContainerAmpedDecayingSineWave: # CVoiceContainerDecayingSineWave
    m_flGainAmount = 0x68 # float

class CVoiceContainerBase:
    m_curves = 0x20 # CUtlDict<CPiecewiseCurve,F(size=1)>

class CVoiceContainerBlend: # CVoiceContainerBase
    m_hSoundOne = 0x60 # CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
    m_hSoundTwo = 0x68 # CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
    m_flBlendAmount = 0x70 # float

class CVoiceContainerDecayingSineWave: # CVoiceContainerBase
    m_flFrequency = 0x60 # float
    m_flDecayTime = 0x64 # float

class CVoiceContainerDefault: # CVoiceContainerBase

class CVoiceContainerEngineSound: # CVoiceContainerBase
    m_SoundToPlay = 0x60 # CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
    m_flTestConstantParam = 0x68 # float
    m_flTestSoundEventBoundParam = 0x6C # float
    m_flEngineRPM = 0x70 # float

class CVoiceContainerEnvelopeAnalyzer: # CVoiceContainerWavFileReader
    m_envBuffer = 0x68 # CUtlVector<float>

class CVoiceContainerRandomSampler: # CVoiceContainerBase
    m_flLoudAmplitude = 0x60 # float
    m_flLoudAmplitudeJitter = 0x64 # float
    m_flSoftAmplitude = 0x68 # float
    m_flSoftAmplitudeJitter = 0x6C # float
    m_flLoudTimeJitter = 0x70 # float
    m_flSoftTimeJitter = 0x74 # float
    m_grainResources = 0x78 # CUtlVector<CStrongHandle<InfoForResourceTypeCVoiceContainerBase>>

class CVoiceContainerRealtimeFMSineWave: # CVoiceContainerBase
    m_flCarrierFrequency = 0x60 # float
    m_flModulatorFrequency = 0x64 # float
    m_flModulatorAmount = 0x68 # float

class CVoiceContainerTestConstant: # CVoiceContainerWavFileReader
    m_flTestConstantParam = 0x68 # bool

class CVoiceContainerTestNestedDynamic: # CVoiceContainerBase
    m_SoundToPlay = 0x60 # CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
    m_flTestConstantParam = 0x68 # float

class CVoiceContainerWavFileReader: # CVoiceContainerBase
    m_wavFilePath = 0x60 # CUtlString

class SelectedEditItemInfo_t:
    m_EditItems = 0x0 # CUtlVector<SosEditItemInfo_t>

class SosEditItemInfo_t:
    itemType = 0x0 # SosEditItemType_t
    itemName = 0x8 # CUtlString
    itemTypeName = 0x10 # CUtlString
    itemKVString = 0x20 # CUtlString
    itemPos = 0x28 # Vector2D

class VMixAutoFilterDesc_t:
    m_flEnvelopeAmount = 0x0 # float
    m_flAttackTimeMS = 0x4 # float
    m_flReleaseTimeMS = 0x8 # float
    m_filter = 0xC # VMixFilterDesc_t
    m_flLFOAmount = 0x1C # float
    m_flLFORate = 0x20 # float
    m_flPhase = 0x24 # float
    m_nLFOShape = 0x28 # VMixLFOShape_t

class VMixBoxverbDesc_t:
    m_flSizeMax = 0x0 # float
    m_flSizeMin = 0x4 # float
    m_flComplexity = 0x8 # float
    m_flDiffusion = 0xC # float
    m_flModDepth = 0x10 # float
    m_flModRate = 0x14 # float
    m_bParallel = 0x18 # bool
    m_filterType = 0x1C # VMixFilterDesc_t
    m_flWidth = 0x2C # float
    m_flHeight = 0x30 # float
    m_flDepth = 0x34 # float
    m_flFeedbackScale = 0x38 # float
    m_flFeedbackWidth = 0x3C # float
    m_flFeedbackHeight = 0x40 # float
    m_flFeedbackDepth = 0x44 # float
    m_flOutputGain = 0x48 # float
    m_flTaps = 0x4C # float

class VMixConvolutionDesc_t:
    m_fldbGain = 0x0 # float
    m_flPreDelayMS = 0x4 # float
    m_flWetMix = 0x8 # float
    m_fldbLow = 0xC # float
    m_fldbMid = 0x10 # float
    m_fldbHigh = 0x14 # float
    m_flLowCutoffFreq = 0x18 # float
    m_flHighCutoffFreq = 0x1C # float

class VMixDelayDesc_t:
    m_feedbackFilter = 0x0 # VMixFilterDesc_t
    m_bEnableFilter = 0x10 # bool
    m_flDelay = 0x14 # float
    m_flDirectGain = 0x18 # float
    m_flDelayGain = 0x1C # float
    m_flFeedbackGain = 0x20 # float
    m_flWidth = 0x24 # float

class VMixDiffusorDesc_t:
    m_flSize = 0x0 # float
    m_flComplexity = 0x4 # float
    m_flFeedback = 0x8 # float
    m_flOutputGain = 0xC # float

class VMixDynamics3BandDesc_t:
    m_fldbGainOutput = 0x0 # float
    m_flRMSTimeMS = 0x4 # float
    m_fldbKneeWidth = 0x8 # float
    m_flDepth = 0xC # float
    m_flWetMix = 0x10 # float
    m_flTimeScale = 0x14 # float
    m_flLowCutoffFreq = 0x18 # float
    m_flHighCutoffFreq = 0x1C # float
    m_bPeakMode = 0x20 # bool
    m_bandDesc = 0x24 # VMixDynamicsBand_t[3]

class VMixDynamicsBand_t:
    m_fldbGainInput = 0x0 # float
    m_fldbGainOutput = 0x4 # float
    m_fldbThresholdBelow = 0x8 # float
    m_fldbThresholdAbove = 0xC # float
    m_flRatioBelow = 0x10 # float
    m_flRatioAbove = 0x14 # float
    m_flAttackTimeMS = 0x18 # float
    m_flReleaseTimeMS = 0x1C # float
    m_bEnable = 0x20 # bool
    m_bSolo = 0x21 # bool

class VMixDynamicsCompressorDesc_t:
    m_fldbOutputGain = 0x0 # float
    m_fldbCompressionThreshold = 0x4 # float
    m_fldbKneeWidth = 0x8 # float
    m_flCompressionRatio = 0xC # float
    m_flAttackTimeMS = 0x10 # float
    m_flReleaseTimeMS = 0x14 # float
    m_flRMSTimeMS = 0x18 # float
    m_flWetMix = 0x1C # float
    m_bPeakMode = 0x20 # bool

class VMixDynamicsDesc_t:
    m_fldbGain = 0x0 # float
    m_fldbNoiseGateThreshold = 0x4 # float
    m_fldbCompressionThreshold = 0x8 # float
    m_fldbLimiterThreshold = 0xC # float
    m_fldbKneeWidth = 0x10 # float
    m_flRatio = 0x14 # float
    m_flLimiterRatio = 0x18 # float
    m_flAttackTimeMS = 0x1C # float
    m_flReleaseTimeMS = 0x20 # float
    m_flRMSTimeMS = 0x24 # float
    m_flWetMix = 0x28 # float
    m_bPeakMode = 0x2C # bool

class VMixEQ8Desc_t:
    m_stages = 0x0 # VMixFilterDesc_t[8]

class VMixEffectChainDesc_t:
    m_flCrossfadeTime = 0x0 # float

class VMixEnvelopeDesc_t:
    m_flAttackTimeMS = 0x0 # float
    m_flHoldTimeMS = 0x4 # float
    m_flReleaseTimeMS = 0x8 # float

class VMixFilterDesc_t:
    m_nFilterType = 0x0 # VMixFilterType_t
    m_nFilterSlope = 0x2 # VMixFilterSlope_t
    m_bEnabled = 0x3 # bool
    m_fldbGain = 0x4 # float
    m_flCutoffFreq = 0x8 # float
    m_flQ = 0xC # float

class VMixFreeverbDesc_t:
    m_flRoomSize = 0x0 # float
    m_flDamp = 0x4 # float
    m_flWidth = 0x8 # float
    m_flLateReflections = 0xC # float

class VMixModDelayDesc_t:
    m_feedbackFilter = 0x0 # VMixFilterDesc_t
    m_bPhaseInvert = 0x10 # bool
    m_flGlideTime = 0x14 # float
    m_flDelay = 0x18 # float
    m_flOutputGain = 0x1C # float
    m_flFeedbackGain = 0x20 # float
    m_flModRate = 0x24 # float
    m_flModDepth = 0x28 # float
    m_bApplyAntialiasing = 0x2C # bool

class VMixOscDesc_t:
    oscType = 0x0 # VMixLFOShape_t
    m_freq = 0x4 # float
    m_flPhase = 0x8 # float

class VMixPannerDesc_t:
    m_type = 0x0 # VMixPannerType_t
    m_flStrength = 0x4 # float

class VMixPitchShiftDesc_t:
    m_nGrainSampleCount = 0x0 # int32_t
    m_flPitchShift = 0x4 # float
    m_nQuality = 0x8 # int32_t
    m_nProcType = 0xC # int32_t

class VMixPlateverbDesc_t:
    m_flPrefilter = 0x0 # float
    m_flInputDiffusion1 = 0x4 # float
    m_flInputDiffusion2 = 0x8 # float
    m_flDecay = 0xC # float
    m_flDamp = 0x10 # float
    m_flFeedbackDiffusion1 = 0x14 # float
    m_flFeedbackDiffusion2 = 0x18 # float

class VMixShaperDesc_t:
    m_nShape = 0x0 # int32_t
    m_fldbDrive = 0x4 # float
    m_fldbOutputGain = 0x8 # float
    m_flWetMix = 0xC # float
    m_nOversampleFactor = 0x10 # int32_t

class VMixSubgraphSwitchDesc_t:
    m_interpolationMode = 0x0 # VMixSubgraphSwitchInterpolationType_t
    m_bOnlyTailsOnFadeOut = 0x4 # bool
    m_flInterpolationTime = 0x8 # float

class VMixUtilityDesc_t:
    m_nOp = 0x0 # VMixChannelOperation_t
    m_flInputPan = 0x4 # float
    m_flOutputBalance = 0x8 # float
    m_fldbOutputGain = 0xC # float
    m_bBassMono = 0x10 # bool
    m_flBassFreq = 0x14 # float

class VMixVocoderDesc_t:
    m_nBandCount = 0x0 # int32_t
    m_flBandwidth = 0x4 # float
    m_fldBModGain = 0x8 # float
    m_flFreqRangeStart = 0xC # float
    m_flFreqRangeEnd = 0x10 # float
    m_fldBUnvoicedGain = 0x14 # float
    m_flAttackTimeMS = 0x18 # float
    m_flReleaseTimeMS = 0x1C # float
    m_nDebugBand = 0x20 # int32_t
    m_bPeakMode = 0x24 # bool
