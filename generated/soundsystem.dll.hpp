/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 23 Mar 2024 05:02:03 +0000
 */

#pragma once

#include <cstddef>

namespace CDSPMixgroupModifier {
    constexpr std::ptrdiff_t m_mixgroup = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_flModifier = 0x8; // float
    constexpr std::ptrdiff_t m_flModifierMin = 0xC; // float
    constexpr std::ptrdiff_t m_flSourceModifier = 0x10; // float
    constexpr std::ptrdiff_t m_flSourceModifierMin = 0x14; // float
    constexpr std::ptrdiff_t m_flListenerReverbModifierWhenSourceReverbIsActive = 0x18; // float
}

namespace CDSPPresetMixgroupModifierTable {
    constexpr std::ptrdiff_t m_table = 0x0; // CUtlVector<CDspPresetModifierList>
}

namespace CDspPresetModifierList {
    constexpr std::ptrdiff_t m_dspName = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_modifiers = 0x8; // CUtlVector<CDSPMixgroupModifier>
}

namespace CSosGroupActionLimitSchema { // CSosGroupActionSchema
    constexpr std::ptrdiff_t m_nMaxCount = 0x18; // int32_t
    constexpr std::ptrdiff_t m_nStopType = 0x1C; // SosActionStopType_t
    constexpr std::ptrdiff_t m_nSortType = 0x20; // SosActionSortType_t
}

namespace CSosGroupActionSchema {
    constexpr std::ptrdiff_t m_name = 0x8; // CUtlString
    constexpr std::ptrdiff_t m_actionType = 0x10; // ActionType_t
    constexpr std::ptrdiff_t m_actionInstanceType = 0x14; // ActionType_t
}

namespace CSosGroupActionSetSoundeventParameterSchema { // CSosGroupActionSchema
    constexpr std::ptrdiff_t m_nMaxCount = 0x18; // int32_t
    constexpr std::ptrdiff_t m_flMinValue = 0x1C; // float
    constexpr std::ptrdiff_t m_flMaxValue = 0x20; // float
    constexpr std::ptrdiff_t m_opvarName = 0x28; // CUtlString
    constexpr std::ptrdiff_t m_nSortType = 0x30; // SosActionSortType_t
}

namespace CSosGroupActionSoundeventClusterSchema { // CSosGroupActionSchema
    constexpr std::ptrdiff_t m_nMinNearby = 0x18; // int32_t
    constexpr std::ptrdiff_t m_flClusterEpsilon = 0x1C; // float
    constexpr std::ptrdiff_t m_shouldPlayOpvar = 0x20; // CUtlString
    constexpr std::ptrdiff_t m_shouldPlayClusterChild = 0x28; // CUtlString
    constexpr std::ptrdiff_t m_clusterSizeOpvar = 0x30; // CUtlString
    constexpr std::ptrdiff_t m_groupBoundingBoxMinsOpvar = 0x38; // CUtlString
    constexpr std::ptrdiff_t m_groupBoundingBoxMaxsOpvar = 0x40; // CUtlString
}

namespace CSosGroupActionTimeBlockLimitSchema { // CSosGroupActionSchema
    constexpr std::ptrdiff_t m_nMaxCount = 0x18; // int32_t
    constexpr std::ptrdiff_t m_flMaxDuration = 0x1C; // float
}

namespace CSosGroupActionTimeLimitSchema { // CSosGroupActionSchema
    constexpr std::ptrdiff_t m_flMaxDuration = 0x18; // float
}

namespace CSosGroupBranchPattern {
    constexpr std::ptrdiff_t m_bMatchEventName = 0x8; // bool
    constexpr std::ptrdiff_t m_bMatchEventSubString = 0x9; // bool
    constexpr std::ptrdiff_t m_bMatchEntIndex = 0xA; // bool
    constexpr std::ptrdiff_t m_bMatchOpvar = 0xB; // bool
}

namespace CSosGroupMatchPattern { // CSosGroupBranchPattern
    constexpr std::ptrdiff_t m_matchSoundEventName = 0x10; // CUtlString
    constexpr std::ptrdiff_t m_matchSoundEventSubString = 0x18; // CUtlString
    constexpr std::ptrdiff_t m_flEntIndex = 0x20; // float
    constexpr std::ptrdiff_t m_flOpvar = 0x24; // float
}

namespace CSosSoundEventGroupListSchema {
    constexpr std::ptrdiff_t m_groupList = 0x0; // CUtlVector<CSosSoundEventGroupSchema>
}

namespace CSosSoundEventGroupSchema {
    constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_nType = 0x8; // SosGroupType_t
    constexpr std::ptrdiff_t m_bIsBlocking = 0xC; // bool
    constexpr std::ptrdiff_t m_nBlockMaxCount = 0x10; // int32_t
    constexpr std::ptrdiff_t m_bInvertMatch = 0x14; // bool
    constexpr std::ptrdiff_t m_matchPattern = 0x18; // CSosGroupMatchPattern
    constexpr std::ptrdiff_t m_branchPattern = 0x40; // CSosGroupBranchPattern
    constexpr std::ptrdiff_t m_vActions = 0xB0; // CSosGroupActionSchema*[4]
}

namespace CSoundEventMetaData {
    constexpr std::ptrdiff_t m_soundEventVMix = 0x0; // CStrongHandle<InfoForResourceTypeCVMixListResource>
}

namespace CVoiceContainerAmpedDecayingSineWave { // CVoiceContainerDecayingSineWave
    constexpr std::ptrdiff_t m_flGainAmount = 0x68; // float
}

namespace CVoiceContainerBase {
    constexpr std::ptrdiff_t m_curves = 0x20; // CUtlDict<CPiecewiseCurve,F(size=1)>
}

namespace CVoiceContainerBlend { // CVoiceContainerBase
    constexpr std::ptrdiff_t m_hSoundOne = 0x60; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
    constexpr std::ptrdiff_t m_hSoundTwo = 0x68; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
    constexpr std::ptrdiff_t m_flBlendAmount = 0x70; // float
}

namespace CVoiceContainerDecayingSineWave { // CVoiceContainerBase
    constexpr std::ptrdiff_t m_flFrequency = 0x60; // float
    constexpr std::ptrdiff_t m_flDecayTime = 0x64; // float
}

namespace CVoiceContainerDefault { // CVoiceContainerBase
}

namespace CVoiceContainerEngineSound { // CVoiceContainerBase
    constexpr std::ptrdiff_t m_SoundToPlay = 0x60; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
    constexpr std::ptrdiff_t m_flTestConstantParam = 0x68; // float
    constexpr std::ptrdiff_t m_flTestSoundEventBoundParam = 0x6C; // float
    constexpr std::ptrdiff_t m_flEngineRPM = 0x70; // float
}

namespace CVoiceContainerEnvelopeAnalyzer { // CVoiceContainerWavFileReader
    constexpr std::ptrdiff_t m_envBuffer = 0x68; // CUtlVector<float>
}

namespace CVoiceContainerRandomSampler { // CVoiceContainerBase
    constexpr std::ptrdiff_t m_flLoudAmplitude = 0x60; // float
    constexpr std::ptrdiff_t m_flLoudAmplitudeJitter = 0x64; // float
    constexpr std::ptrdiff_t m_flSoftAmplitude = 0x68; // float
    constexpr std::ptrdiff_t m_flSoftAmplitudeJitter = 0x6C; // float
    constexpr std::ptrdiff_t m_flLoudTimeJitter = 0x70; // float
    constexpr std::ptrdiff_t m_flSoftTimeJitter = 0x74; // float
    constexpr std::ptrdiff_t m_grainResources = 0x78; // CUtlVector<CStrongHandle<InfoForResourceTypeCVoiceContainerBase>>
}

namespace CVoiceContainerRealtimeFMSineWave { // CVoiceContainerBase
    constexpr std::ptrdiff_t m_flCarrierFrequency = 0x60; // float
    constexpr std::ptrdiff_t m_flModulatorFrequency = 0x64; // float
    constexpr std::ptrdiff_t m_flModulatorAmount = 0x68; // float
}

namespace CVoiceContainerTestConstant { // CVoiceContainerWavFileReader
    constexpr std::ptrdiff_t m_flTestConstantParam = 0x68; // bool
}

namespace CVoiceContainerTestNestedDynamic { // CVoiceContainerBase
    constexpr std::ptrdiff_t m_SoundToPlay = 0x60; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
    constexpr std::ptrdiff_t m_flTestConstantParam = 0x68; // float
}

namespace CVoiceContainerWavFileReader { // CVoiceContainerBase
    constexpr std::ptrdiff_t m_wavFilePath = 0x60; // CUtlString
}

namespace SelectedEditItemInfo_t {
    constexpr std::ptrdiff_t m_EditItems = 0x0; // CUtlVector<SosEditItemInfo_t>
}

namespace SosEditItemInfo_t {
    constexpr std::ptrdiff_t itemType = 0x0; // SosEditItemType_t
    constexpr std::ptrdiff_t itemName = 0x8; // CUtlString
    constexpr std::ptrdiff_t itemTypeName = 0x10; // CUtlString
    constexpr std::ptrdiff_t itemKVString = 0x20; // CUtlString
    constexpr std::ptrdiff_t itemPos = 0x28; // Vector2D
}

namespace VMixAutoFilterDesc_t {
    constexpr std::ptrdiff_t m_flEnvelopeAmount = 0x0; // float
    constexpr std::ptrdiff_t m_flAttackTimeMS = 0x4; // float
    constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x8; // float
    constexpr std::ptrdiff_t m_filter = 0xC; // VMixFilterDesc_t
    constexpr std::ptrdiff_t m_flLFOAmount = 0x1C; // float
    constexpr std::ptrdiff_t m_flLFORate = 0x20; // float
    constexpr std::ptrdiff_t m_flPhase = 0x24; // float
    constexpr std::ptrdiff_t m_nLFOShape = 0x28; // VMixLFOShape_t
}

namespace VMixBoxverbDesc_t {
    constexpr std::ptrdiff_t m_flSizeMax = 0x0; // float
    constexpr std::ptrdiff_t m_flSizeMin = 0x4; // float
    constexpr std::ptrdiff_t m_flComplexity = 0x8; // float
    constexpr std::ptrdiff_t m_flDiffusion = 0xC; // float
    constexpr std::ptrdiff_t m_flModDepth = 0x10; // float
    constexpr std::ptrdiff_t m_flModRate = 0x14; // float
    constexpr std::ptrdiff_t m_bParallel = 0x18; // bool
    constexpr std::ptrdiff_t m_filterType = 0x1C; // VMixFilterDesc_t
    constexpr std::ptrdiff_t m_flWidth = 0x2C; // float
    constexpr std::ptrdiff_t m_flHeight = 0x30; // float
    constexpr std::ptrdiff_t m_flDepth = 0x34; // float
    constexpr std::ptrdiff_t m_flFeedbackScale = 0x38; // float
    constexpr std::ptrdiff_t m_flFeedbackWidth = 0x3C; // float
    constexpr std::ptrdiff_t m_flFeedbackHeight = 0x40; // float
    constexpr std::ptrdiff_t m_flFeedbackDepth = 0x44; // float
    constexpr std::ptrdiff_t m_flOutputGain = 0x48; // float
    constexpr std::ptrdiff_t m_flTaps = 0x4C; // float
}

namespace VMixConvolutionDesc_t {
    constexpr std::ptrdiff_t m_fldbGain = 0x0; // float
    constexpr std::ptrdiff_t m_flPreDelayMS = 0x4; // float
    constexpr std::ptrdiff_t m_flWetMix = 0x8; // float
    constexpr std::ptrdiff_t m_fldbLow = 0xC; // float
    constexpr std::ptrdiff_t m_fldbMid = 0x10; // float
    constexpr std::ptrdiff_t m_fldbHigh = 0x14; // float
    constexpr std::ptrdiff_t m_flLowCutoffFreq = 0x18; // float
    constexpr std::ptrdiff_t m_flHighCutoffFreq = 0x1C; // float
}

namespace VMixDelayDesc_t {
    constexpr std::ptrdiff_t m_feedbackFilter = 0x0; // VMixFilterDesc_t
    constexpr std::ptrdiff_t m_bEnableFilter = 0x10; // bool
    constexpr std::ptrdiff_t m_flDelay = 0x14; // float
    constexpr std::ptrdiff_t m_flDirectGain = 0x18; // float
    constexpr std::ptrdiff_t m_flDelayGain = 0x1C; // float
    constexpr std::ptrdiff_t m_flFeedbackGain = 0x20; // float
    constexpr std::ptrdiff_t m_flWidth = 0x24; // float
}

namespace VMixDiffusorDesc_t {
    constexpr std::ptrdiff_t m_flSize = 0x0; // float
    constexpr std::ptrdiff_t m_flComplexity = 0x4; // float
    constexpr std::ptrdiff_t m_flFeedback = 0x8; // float
    constexpr std::ptrdiff_t m_flOutputGain = 0xC; // float
}

namespace VMixDynamics3BandDesc_t {
    constexpr std::ptrdiff_t m_fldbGainOutput = 0x0; // float
    constexpr std::ptrdiff_t m_flRMSTimeMS = 0x4; // float
    constexpr std::ptrdiff_t m_fldbKneeWidth = 0x8; // float
    constexpr std::ptrdiff_t m_flDepth = 0xC; // float
    constexpr std::ptrdiff_t m_flWetMix = 0x10; // float
    constexpr std::ptrdiff_t m_flTimeScale = 0x14; // float
    constexpr std::ptrdiff_t m_flLowCutoffFreq = 0x18; // float
    constexpr std::ptrdiff_t m_flHighCutoffFreq = 0x1C; // float
    constexpr std::ptrdiff_t m_bPeakMode = 0x20; // bool
    constexpr std::ptrdiff_t m_bandDesc = 0x24; // VMixDynamicsBand_t[3]
}

namespace VMixDynamicsBand_t {
    constexpr std::ptrdiff_t m_fldbGainInput = 0x0; // float
    constexpr std::ptrdiff_t m_fldbGainOutput = 0x4; // float
    constexpr std::ptrdiff_t m_fldbThresholdBelow = 0x8; // float
    constexpr std::ptrdiff_t m_fldbThresholdAbove = 0xC; // float
    constexpr std::ptrdiff_t m_flRatioBelow = 0x10; // float
    constexpr std::ptrdiff_t m_flRatioAbove = 0x14; // float
    constexpr std::ptrdiff_t m_flAttackTimeMS = 0x18; // float
    constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x1C; // float
    constexpr std::ptrdiff_t m_bEnable = 0x20; // bool
    constexpr std::ptrdiff_t m_bSolo = 0x21; // bool
}

namespace VMixDynamicsCompressorDesc_t {
    constexpr std::ptrdiff_t m_fldbOutputGain = 0x0; // float
    constexpr std::ptrdiff_t m_fldbCompressionThreshold = 0x4; // float
    constexpr std::ptrdiff_t m_fldbKneeWidth = 0x8; // float
    constexpr std::ptrdiff_t m_flCompressionRatio = 0xC; // float
    constexpr std::ptrdiff_t m_flAttackTimeMS = 0x10; // float
    constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x14; // float
    constexpr std::ptrdiff_t m_flRMSTimeMS = 0x18; // float
    constexpr std::ptrdiff_t m_flWetMix = 0x1C; // float
    constexpr std::ptrdiff_t m_bPeakMode = 0x20; // bool
}

namespace VMixDynamicsDesc_t {
    constexpr std::ptrdiff_t m_fldbGain = 0x0; // float
    constexpr std::ptrdiff_t m_fldbNoiseGateThreshold = 0x4; // float
    constexpr std::ptrdiff_t m_fldbCompressionThreshold = 0x8; // float
    constexpr std::ptrdiff_t m_fldbLimiterThreshold = 0xC; // float
    constexpr std::ptrdiff_t m_fldbKneeWidth = 0x10; // float
    constexpr std::ptrdiff_t m_flRatio = 0x14; // float
    constexpr std::ptrdiff_t m_flLimiterRatio = 0x18; // float
    constexpr std::ptrdiff_t m_flAttackTimeMS = 0x1C; // float
    constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x20; // float
    constexpr std::ptrdiff_t m_flRMSTimeMS = 0x24; // float
    constexpr std::ptrdiff_t m_flWetMix = 0x28; // float
    constexpr std::ptrdiff_t m_bPeakMode = 0x2C; // bool
}

namespace VMixEQ8Desc_t {
    constexpr std::ptrdiff_t m_stages = 0x0; // VMixFilterDesc_t[8]
}

namespace VMixEffectChainDesc_t {
    constexpr std::ptrdiff_t m_flCrossfadeTime = 0x0; // float
}

namespace VMixEnvelopeDesc_t {
    constexpr std::ptrdiff_t m_flAttackTimeMS = 0x0; // float
    constexpr std::ptrdiff_t m_flHoldTimeMS = 0x4; // float
    constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x8; // float
}

namespace VMixFilterDesc_t {
    constexpr std::ptrdiff_t m_nFilterType = 0x0; // VMixFilterType_t
    constexpr std::ptrdiff_t m_nFilterSlope = 0x2; // VMixFilterSlope_t
    constexpr std::ptrdiff_t m_bEnabled = 0x3; // bool
    constexpr std::ptrdiff_t m_fldbGain = 0x4; // float
    constexpr std::ptrdiff_t m_flCutoffFreq = 0x8; // float
    constexpr std::ptrdiff_t m_flQ = 0xC; // float
}

namespace VMixFreeverbDesc_t {
    constexpr std::ptrdiff_t m_flRoomSize = 0x0; // float
    constexpr std::ptrdiff_t m_flDamp = 0x4; // float
    constexpr std::ptrdiff_t m_flWidth = 0x8; // float
    constexpr std::ptrdiff_t m_flLateReflections = 0xC; // float
}

namespace VMixModDelayDesc_t {
    constexpr std::ptrdiff_t m_feedbackFilter = 0x0; // VMixFilterDesc_t
    constexpr std::ptrdiff_t m_bPhaseInvert = 0x10; // bool
    constexpr std::ptrdiff_t m_flGlideTime = 0x14; // float
    constexpr std::ptrdiff_t m_flDelay = 0x18; // float
    constexpr std::ptrdiff_t m_flOutputGain = 0x1C; // float
    constexpr std::ptrdiff_t m_flFeedbackGain = 0x20; // float
    constexpr std::ptrdiff_t m_flModRate = 0x24; // float
    constexpr std::ptrdiff_t m_flModDepth = 0x28; // float
    constexpr std::ptrdiff_t m_bApplyAntialiasing = 0x2C; // bool
}

namespace VMixOscDesc_t {
    constexpr std::ptrdiff_t oscType = 0x0; // VMixLFOShape_t
    constexpr std::ptrdiff_t m_freq = 0x4; // float
    constexpr std::ptrdiff_t m_flPhase = 0x8; // float
}

namespace VMixPannerDesc_t {
    constexpr std::ptrdiff_t m_type = 0x0; // VMixPannerType_t
    constexpr std::ptrdiff_t m_flStrength = 0x4; // float
}

namespace VMixPitchShiftDesc_t {
    constexpr std::ptrdiff_t m_nGrainSampleCount = 0x0; // int32_t
    constexpr std::ptrdiff_t m_flPitchShift = 0x4; // float
    constexpr std::ptrdiff_t m_nQuality = 0x8; // int32_t
    constexpr std::ptrdiff_t m_nProcType = 0xC; // int32_t
}

namespace VMixPlateverbDesc_t {
    constexpr std::ptrdiff_t m_flPrefilter = 0x0; // float
    constexpr std::ptrdiff_t m_flInputDiffusion1 = 0x4; // float
    constexpr std::ptrdiff_t m_flInputDiffusion2 = 0x8; // float
    constexpr std::ptrdiff_t m_flDecay = 0xC; // float
    constexpr std::ptrdiff_t m_flDamp = 0x10; // float
    constexpr std::ptrdiff_t m_flFeedbackDiffusion1 = 0x14; // float
    constexpr std::ptrdiff_t m_flFeedbackDiffusion2 = 0x18; // float
}

namespace VMixShaperDesc_t {
    constexpr std::ptrdiff_t m_nShape = 0x0; // int32_t
    constexpr std::ptrdiff_t m_fldbDrive = 0x4; // float
    constexpr std::ptrdiff_t m_fldbOutputGain = 0x8; // float
    constexpr std::ptrdiff_t m_flWetMix = 0xC; // float
    constexpr std::ptrdiff_t m_nOversampleFactor = 0x10; // int32_t
}

namespace VMixSubgraphSwitchDesc_t {
    constexpr std::ptrdiff_t m_interpolationMode = 0x0; // VMixSubgraphSwitchInterpolationType_t
    constexpr std::ptrdiff_t m_bOnlyTailsOnFadeOut = 0x4; // bool
    constexpr std::ptrdiff_t m_flInterpolationTime = 0x8; // float
}

namespace VMixUtilityDesc_t {
    constexpr std::ptrdiff_t m_nOp = 0x0; // VMixChannelOperation_t
    constexpr std::ptrdiff_t m_flInputPan = 0x4; // float
    constexpr std::ptrdiff_t m_flOutputBalance = 0x8; // float
    constexpr std::ptrdiff_t m_fldbOutputGain = 0xC; // float
    constexpr std::ptrdiff_t m_bBassMono = 0x10; // bool
    constexpr std::ptrdiff_t m_flBassFreq = 0x14; // float
}

namespace VMixVocoderDesc_t {
    constexpr std::ptrdiff_t m_nBandCount = 0x0; // int32_t
    constexpr std::ptrdiff_t m_flBandwidth = 0x4; // float
    constexpr std::ptrdiff_t m_fldBModGain = 0x8; // float
    constexpr std::ptrdiff_t m_flFreqRangeStart = 0xC; // float
    constexpr std::ptrdiff_t m_flFreqRangeEnd = 0x10; // float
    constexpr std::ptrdiff_t m_fldBUnvoicedGain = 0x14; // float
    constexpr std::ptrdiff_t m_flAttackTimeMS = 0x18; // float
    constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x1C; // float
    constexpr std::ptrdiff_t m_nDebugBand = 0x20; // int32_t
    constexpr std::ptrdiff_t m_bPeakMode = 0x24; // bool
}