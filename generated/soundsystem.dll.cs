public static class CDSPMixgroupModifier {
    public const ulong m_mixgroup = 0x0;
    public const ulong m_flModifier = 0x8;
    public const ulong m_flModifierMin = 0xc;
    public const ulong m_flSourceModifier = 0x10;
    public const ulong m_flSourceModifierMin = 0x14;
    public const ulong m_flListenerReverbModifierWhenSourceReverbIsActive = 0x18;
}

public static class CDSPPresetMixgroupModifierTable {
    public const ulong m_table = 0x0;
}

public static class CDspPresetModifierList {
    public const ulong m_dspName = 0x0;
    public const ulong m_modifiers = 0x8;
}

public static class CSosGroupActionLimitSchema {
    public const ulong m_nMaxCount = 0x18;
    public const ulong m_nStopType = 0x1c;
    public const ulong m_nSortType = 0x20;
}

public static class CSosGroupActionSchema {
    public const ulong m_name = 0x8;
    public const ulong m_actionType = 0x10;
    public const ulong m_actionInstanceType = 0x14;
}

public static class CSosGroupActionSetSoundeventParameterSchema {
    public const ulong m_nMaxCount = 0x18;
    public const ulong m_flMinValue = 0x1c;
    public const ulong m_flMaxValue = 0x20;
    public const ulong m_opvarName = 0x28;
    public const ulong m_nSortType = 0x30;
}

public static class CSosGroupActionTimeLimitSchema {
    public const ulong m_flMaxDuration = 0x18;
}

public static class CSosGroupBranchPattern {
    public const ulong m_bMatchEventName = 0x8;
    public const ulong m_bMatchEventSubString = 0x9;
    public const ulong m_bMatchEntIndex = 0xa;
    public const ulong m_bMatchOpvar = 0xb;
}

public static class CSosGroupMatchPattern {
    public const ulong m_matchSoundEventName = 0x10;
    public const ulong m_matchSoundEventSubString = 0x18;
    public const ulong m_flEntIndex = 0x20;
    public const ulong m_flOpvar = 0x24;
}

public static class CSosSoundEventGroupListSchema {
    public const ulong m_groupList = 0x0;
}

public static class CSosSoundEventGroupSchema {
    public const ulong m_name = 0x0;
    public const ulong m_nType = 0x8;
    public const ulong m_bIsBlocking = 0xc;
    public const ulong m_nBlockMaxCount = 0x10;
    public const ulong m_bInvertMatch = 0x14;
    public const ulong m_matchPattern = 0x18;
    public const ulong m_branchPattern = 0x40;
    public const ulong m_vActions = 0xb0;
}

public static class CSoundEventMetaData {
    public const ulong m_soundEventVMix = 0x0;
}

public static class SelectedEditItemInfo_t {
    public const ulong m_EditItems = 0x0;
}

public static class SosEditItemInfo_t {
    public const ulong itemType = 0x0;
    public const ulong itemName = 0x8;
    public const ulong itemTypeName = 0x10;
    public const ulong itemKVString = 0x20;
    public const ulong itemPos = 0x28;
}

public static class VMixAutoFilterDesc_t {
    public const ulong m_flEnvelopeAmount = 0x0;
    public const ulong m_flAttackTimeMS = 0x4;
    public const ulong m_flReleaseTimeMS = 0x8;
    public const ulong m_filter = 0xc;
    public const ulong m_flLFOAmount = 0x1c;
    public const ulong m_flLFORate = 0x20;
    public const ulong m_flPhase = 0x24;
    public const ulong m_nLFOShape = 0x28;
}

public static class VMixBoxverbDesc_t {
    public const ulong m_flSizeMax = 0x0;
    public const ulong m_flSizeMin = 0x4;
    public const ulong m_flComplexity = 0x8;
    public const ulong m_flDiffusion = 0xc;
    public const ulong m_flModDepth = 0x10;
    public const ulong m_flModRate = 0x14;
    public const ulong m_bParallel = 0x18;
    public const ulong m_filterType = 0x1c;
    public const ulong m_flWidth = 0x2c;
    public const ulong m_flHeight = 0x30;
    public const ulong m_flDepth = 0x34;
    public const ulong m_flFeedbackScale = 0x38;
    public const ulong m_flFeedbackWidth = 0x3c;
    public const ulong m_flFeedbackHeight = 0x40;
    public const ulong m_flFeedbackDepth = 0x44;
    public const ulong m_flOutputGain = 0x48;
    public const ulong m_flTaps = 0x4c;
}

public static class VMixConvolutionDesc_t {
    public const ulong m_fldbGain = 0x0;
    public const ulong m_flPreDelayMS = 0x4;
    public const ulong m_flWetMix = 0x8;
    public const ulong m_fldbLow = 0xc;
    public const ulong m_fldbMid = 0x10;
    public const ulong m_fldbHigh = 0x14;
    public const ulong m_flLowCutoffFreq = 0x18;
    public const ulong m_flHighCutoffFreq = 0x1c;
}

public static class VMixDelayDesc_t {
    public const ulong m_feedbackFilter = 0x0;
    public const ulong m_bEnableFilter = 0x10;
    public const ulong m_flDelay = 0x14;
    public const ulong m_flDirectGain = 0x18;
    public const ulong m_flDelayGain = 0x1c;
    public const ulong m_flFeedbackGain = 0x20;
    public const ulong m_flWidth = 0x24;
}

public static class VMixDiffusorDesc_t {
    public const ulong m_flSize = 0x0;
    public const ulong m_flComplexity = 0x4;
    public const ulong m_flFeedback = 0x8;
    public const ulong m_flOutputGain = 0xc;
}

public static class VMixDynamics3BandDesc_t {
    public const ulong m_fldbGainOutput = 0x0;
    public const ulong m_flRMSTimeMS = 0x4;
    public const ulong m_fldbKneeWidth = 0x8;
    public const ulong m_flDepth = 0xc;
    public const ulong m_flWetMix = 0x10;
    public const ulong m_flTimeScale = 0x14;
    public const ulong m_flLowCutoffFreq = 0x18;
    public const ulong m_flHighCutoffFreq = 0x1c;
    public const ulong m_bPeakMode = 0x20;
    public const ulong m_bandDesc = 0x24;
}

public static class VMixDynamicsBand_t {
    public const ulong m_fldbGainInput = 0x0;
    public const ulong m_fldbGainOutput = 0x4;
    public const ulong m_fldbThresholdBelow = 0x8;
    public const ulong m_fldbThresholdAbove = 0xc;
    public const ulong m_flRatioBelow = 0x10;
    public const ulong m_flRatioAbove = 0x14;
    public const ulong m_flAttackTimeMS = 0x18;
    public const ulong m_flReleaseTimeMS = 0x1c;
    public const ulong m_bEnable = 0x20;
    public const ulong m_bSolo = 0x21;
}

public static class VMixDynamicsCompressorDesc_t {
    public const ulong m_fldbOutputGain = 0x0;
    public const ulong m_fldbCompressionThreshold = 0x4;
    public const ulong m_fldbKneeWidth = 0x8;
    public const ulong m_flCompressionRatio = 0xc;
    public const ulong m_flAttackTimeMS = 0x10;
    public const ulong m_flReleaseTimeMS = 0x14;
    public const ulong m_flRMSTimeMS = 0x18;
    public const ulong m_flWetMix = 0x1c;
    public const ulong m_bPeakMode = 0x20;
}

public static class VMixDynamicsDesc_t {
    public const ulong m_fldbGain = 0x0;
    public const ulong m_fldbNoiseGateThreshold = 0x4;
    public const ulong m_fldbCompressionThreshold = 0x8;
    public const ulong m_fldbLimiterThreshold = 0xc;
    public const ulong m_fldbKneeWidth = 0x10;
    public const ulong m_flRatio = 0x14;
    public const ulong m_flLimiterRatio = 0x18;
    public const ulong m_flAttackTimeMS = 0x1c;
    public const ulong m_flReleaseTimeMS = 0x20;
    public const ulong m_flRMSTimeMS = 0x24;
    public const ulong m_flWetMix = 0x28;
    public const ulong m_bPeakMode = 0x2c;
}

public static class VMixEQ8Desc_t {
    public const ulong m_stages = 0x0;
}

public static class VMixEffectChainDesc_t {
    public const ulong m_flCrossfadeTime = 0x0;
}

public static class VMixEnvelopeDesc_t {
    public const ulong m_flAttackTimeMS = 0x0;
    public const ulong m_flHoldTimeMS = 0x4;
    public const ulong m_flReleaseTimeMS = 0x8;
}

public static class VMixFilterDesc_t {
    public const ulong m_nFilterType = 0x0;
    public const ulong m_nFilterSlope = 0x2;
    public const ulong m_bEnabled = 0x3;
    public const ulong m_fldbGain = 0x4;
    public const ulong m_flCutoffFreq = 0x8;
    public const ulong m_flQ = 0xc;
}

public static class VMixFreeverbDesc_t {
    public const ulong m_flRoomSize = 0x0;
    public const ulong m_flDamp = 0x4;
    public const ulong m_flWidth = 0x8;
    public const ulong m_flLateReflections = 0xc;
}

public static class VMixModDelayDesc_t {
    public const ulong m_feedbackFilter = 0x0;
    public const ulong m_bPhaseInvert = 0x10;
    public const ulong m_flGlideTime = 0x14;
    public const ulong m_flDelay = 0x18;
    public const ulong m_flOutputGain = 0x1c;
    public const ulong m_flFeedbackGain = 0x20;
    public const ulong m_flModRate = 0x24;
    public const ulong m_flModDepth = 0x28;
    public const ulong m_bApplyAntialiasing = 0x2c;
}

public static class VMixOscDesc_t {
    public const ulong oscType = 0x0;
    public const ulong m_freq = 0x4;
    public const ulong m_flPhase = 0x8;
}

public static class VMixPannerDesc_t {
    public const ulong m_type = 0x0;
    public const ulong m_flStrength = 0x4;
}

public static class VMixPitchShiftDesc_t {
    public const ulong m_nGrainSampleCount = 0x0;
    public const ulong m_flPitchShift = 0x4;
    public const ulong m_nQuality = 0x8;
    public const ulong m_nProcType = 0xc;
}

public static class VMixPlateverbDesc_t {
    public const ulong m_flPrefilter = 0x0;
    public const ulong m_flInputDiffusion1 = 0x4;
    public const ulong m_flInputDiffusion2 = 0x8;
    public const ulong m_flDecay = 0xc;
    public const ulong m_flDamp = 0x10;
    public const ulong m_flFeedbackDiffusion1 = 0x14;
    public const ulong m_flFeedbackDiffusion2 = 0x18;
}

public static class VMixShaperDesc_t {
    public const ulong m_nShape = 0x0;
    public const ulong m_fldbDrive = 0x4;
    public const ulong m_fldbOutputGain = 0x8;
    public const ulong m_flWetMix = 0xc;
    public const ulong m_nOversampleFactor = 0x10;
}

public static class VMixSubgraphSwitchDesc_t {
    public const ulong m_interpolationMode = 0x0;
    public const ulong m_bOnlyTailsOnFadeOut = 0x4;
    public const ulong m_flInterpolationTime = 0x8;
}

public static class VMixUtilityDesc_t {
    public const ulong m_nOp = 0x0;
    public const ulong m_flInputPan = 0x4;
    public const ulong m_flOutputBalance = 0x8;
    public const ulong m_fldbOutputGain = 0xc;
    public const ulong m_bBassMono = 0x10;
    public const ulong m_flBassFreq = 0x14;
}

public static class VMixVocoderDesc_t {
    public const ulong m_nBandCount = 0x0;
    public const ulong m_flBandwidth = 0x4;
    public const ulong m_fldBModGain = 0x8;
    public const ulong m_flFreqRangeStart = 0xc;
    public const ulong m_flFreqRangeEnd = 0x10;
    public const ulong m_fldBUnvoicedGain = 0x14;
    public const ulong m_flAttackTimeMS = 0x18;
    public const ulong m_flReleaseTimeMS = 0x1c;
    public const ulong m_nDebugBand = 0x20;
    public const ulong m_bPeakMode = 0x24;
}