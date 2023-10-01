#pragma once

#include <cstddef>

namespace CDSPMixgroupModifier {
    constexpr std::ptrdiff_t m_mixgroup = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_flModifier = 0x8; // float32
    constexpr std::ptrdiff_t m_flModifierMin = 0xC; // float32
    constexpr std::ptrdiff_t m_flSourceModifier = 0x10; // float32
    constexpr std::ptrdiff_t m_flSourceModifierMin = 0x14; // float32
    constexpr std::ptrdiff_t m_flListenerReverbModifierWhenSourceReverbIsActive = 0x18; // float32
}

namespace CDSPPresetMixgroupModifierTable {
    constexpr std::ptrdiff_t m_table = 0x0; // CUtlVector< CDspPresetModifierList >
}

namespace CDspPresetModifierList {
    constexpr std::ptrdiff_t m_dspName = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_modifiers = 0x8; // CUtlVector< CDSPMixgroupModifier >
}

namespace CSosGroupActionLimitSchema {
    constexpr std::ptrdiff_t m_nMaxCount = 0x18; // int32
    constexpr std::ptrdiff_t m_nStopType = 0x1C; // SosActionStopType_t
    constexpr std::ptrdiff_t m_nSortType = 0x20; // SosActionSortType_t
}

namespace CSosGroupActionSchema {
    constexpr std::ptrdiff_t m_name = 0x8; // CUtlString
    constexpr std::ptrdiff_t m_actionType = 0x10; // ActionType_t
    constexpr std::ptrdiff_t m_actionInstanceType = 0x14; // ActionType_t
}

namespace CSosGroupActionSetSoundeventParameterSchema {
    constexpr std::ptrdiff_t m_nMaxCount = 0x18; // int32
    constexpr std::ptrdiff_t m_flMinValue = 0x1C; // float32
    constexpr std::ptrdiff_t m_flMaxValue = 0x20; // float32
    constexpr std::ptrdiff_t m_opvarName = 0x28; // CUtlString
    constexpr std::ptrdiff_t m_nSortType = 0x30; // SosActionSortType_t
}

namespace CSosGroupActionTimeLimitSchema {
    constexpr std::ptrdiff_t m_flMaxDuration = 0x18; // float32
}

namespace CSosGroupBranchPattern {
    constexpr std::ptrdiff_t m_bMatchEventName = 0x8; // bool
    constexpr std::ptrdiff_t m_bMatchEventSubString = 0x9; // bool
    constexpr std::ptrdiff_t m_bMatchEntIndex = 0xA; // bool
    constexpr std::ptrdiff_t m_bMatchOpvar = 0xB; // bool
}

namespace CSosGroupMatchPattern {
    constexpr std::ptrdiff_t m_matchSoundEventName = 0x10; // CUtlString
    constexpr std::ptrdiff_t m_matchSoundEventSubString = 0x18; // CUtlString
    constexpr std::ptrdiff_t m_flEntIndex = 0x20; // float32
    constexpr std::ptrdiff_t m_flOpvar = 0x24; // float32
}

namespace CSosSoundEventGroupListSchema {
    constexpr std::ptrdiff_t m_groupList = 0x0; // CUtlVector< CSosSoundEventGroupSchema >
}

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

namespace CSoundEventMetaData {
    constexpr std::ptrdiff_t m_soundEventVMix = 0x0; // CStrongHandle< InfoForResourceTypeCVMixListResource >
}

namespace SelectedEditItemInfo_t {
    constexpr std::ptrdiff_t m_EditItems = 0x0; // CUtlVector< SosEditItemInfo_t >
}

namespace SosEditItemInfo_t {
    constexpr std::ptrdiff_t itemType = 0x0; // SosEditItemType_t
    constexpr std::ptrdiff_t itemName = 0x8; // CUtlString
    constexpr std::ptrdiff_t itemTypeName = 0x10; // CUtlString
    constexpr std::ptrdiff_t itemKVString = 0x20; // CUtlString
    constexpr std::ptrdiff_t itemPos = 0x28; // Vector2D
}

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

namespace VMixDelayDesc_t {
    constexpr std::ptrdiff_t m_feedbackFilter = 0x0; // VMixFilterDesc_t
    constexpr std::ptrdiff_t m_bEnableFilter = 0x10; // bool
    constexpr std::ptrdiff_t m_flDelay = 0x14; // float32
    constexpr std::ptrdiff_t m_flDirectGain = 0x18; // float32
    constexpr std::ptrdiff_t m_flDelayGain = 0x1C; // float32
    constexpr std::ptrdiff_t m_flFeedbackGain = 0x20; // float32
    constexpr std::ptrdiff_t m_flWidth = 0x24; // float32
}

namespace VMixDiffusorDesc_t {
    constexpr std::ptrdiff_t m_flSize = 0x0; // float32
    constexpr std::ptrdiff_t m_flComplexity = 0x4; // float32
    constexpr std::ptrdiff_t m_flFeedback = 0x8; // float32
    constexpr std::ptrdiff_t m_flOutputGain = 0xC; // float32
}

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

namespace VMixEQ8Desc_t {
    constexpr std::ptrdiff_t m_stages = 0x0; // VMixFilterDesc_t[8]
}

namespace VMixEffectChainDesc_t {
    constexpr std::ptrdiff_t m_flCrossfadeTime = 0x0; // float32
}

namespace VMixEnvelopeDesc_t {
    constexpr std::ptrdiff_t m_flAttackTimeMS = 0x0; // float32
    constexpr std::ptrdiff_t m_flHoldTimeMS = 0x4; // float32
    constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x8; // float32
}

namespace VMixFilterDesc_t {
    constexpr std::ptrdiff_t m_nFilterType = 0x0; // VMixFilterType_t
    constexpr std::ptrdiff_t m_nFilterSlope = 0x2; // VMixFilterSlope_t
    constexpr std::ptrdiff_t m_bEnabled = 0x3; // bool
    constexpr std::ptrdiff_t m_fldbGain = 0x4; // float32
    constexpr std::ptrdiff_t m_flCutoffFreq = 0x8; // float32
    constexpr std::ptrdiff_t m_flQ = 0xC; // float32
}

namespace VMixFreeverbDesc_t {
    constexpr std::ptrdiff_t m_flRoomSize = 0x0; // float32
    constexpr std::ptrdiff_t m_flDamp = 0x4; // float32
    constexpr std::ptrdiff_t m_flWidth = 0x8; // float32
    constexpr std::ptrdiff_t m_flLateReflections = 0xC; // float32
}

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

namespace VMixOscDesc_t {
    constexpr std::ptrdiff_t oscType = 0x0; // VMixLFOShape_t
    constexpr std::ptrdiff_t m_freq = 0x4; // float32
    constexpr std::ptrdiff_t m_flPhase = 0x8; // float32
}

namespace VMixPannerDesc_t {
    constexpr std::ptrdiff_t m_type = 0x0; // VMixPannerType_t
    constexpr std::ptrdiff_t m_flStrength = 0x4; // float32
}

namespace VMixPitchShiftDesc_t {
    constexpr std::ptrdiff_t m_nGrainSampleCount = 0x0; // int32
    constexpr std::ptrdiff_t m_flPitchShift = 0x4; // float32
    constexpr std::ptrdiff_t m_nQuality = 0x8; // int32
    constexpr std::ptrdiff_t m_nProcType = 0xC; // int32
}

namespace VMixPlateverbDesc_t {
    constexpr std::ptrdiff_t m_flPrefilter = 0x0; // float32
    constexpr std::ptrdiff_t m_flInputDiffusion1 = 0x4; // float32
    constexpr std::ptrdiff_t m_flInputDiffusion2 = 0x8; // float32
    constexpr std::ptrdiff_t m_flDecay = 0xC; // float32
    constexpr std::ptrdiff_t m_flDamp = 0x10; // float32
    constexpr std::ptrdiff_t m_flFeedbackDiffusion1 = 0x14; // float32
    constexpr std::ptrdiff_t m_flFeedbackDiffusion2 = 0x18; // float32
}

namespace VMixShaperDesc_t {
    constexpr std::ptrdiff_t m_nShape = 0x0; // int32
    constexpr std::ptrdiff_t m_fldbDrive = 0x4; // float32
    constexpr std::ptrdiff_t m_fldbOutputGain = 0x8; // float32
    constexpr std::ptrdiff_t m_flWetMix = 0xC; // float32
    constexpr std::ptrdiff_t m_nOversampleFactor = 0x10; // int32
}

namespace VMixSubgraphSwitchDesc_t {
    constexpr std::ptrdiff_t m_interpolationMode = 0x0; // VMixSubgraphSwitchInterpolationType_t
    constexpr std::ptrdiff_t m_bOnlyTailsOnFadeOut = 0x4; // bool
    constexpr std::ptrdiff_t m_flInterpolationTime = 0x8; // float32
}

namespace VMixUtilityDesc_t {
    constexpr std::ptrdiff_t m_nOp = 0x0; // VMixChannelOperation_t
    constexpr std::ptrdiff_t m_flInputPan = 0x4; // float32
    constexpr std::ptrdiff_t m_flOutputBalance = 0x8; // float32
    constexpr std::ptrdiff_t m_fldbOutputGain = 0xC; // float32
    constexpr std::ptrdiff_t m_bBassMono = 0x10; // bool
    constexpr std::ptrdiff_t m_flBassFreq = 0x14; // float32
}

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