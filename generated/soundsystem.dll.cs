/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 23 Mar 2024 05:02:03 +0000
 */

public static class CDSPMixgroupModifier {
    public const nint m_mixgroup = 0x0; // CUtlString
    public const nint m_flModifier = 0x8; // float
    public const nint m_flModifierMin = 0xC; // float
    public const nint m_flSourceModifier = 0x10; // float
    public const nint m_flSourceModifierMin = 0x14; // float
    public const nint m_flListenerReverbModifierWhenSourceReverbIsActive = 0x18; // float
}

public static class CDSPPresetMixgroupModifierTable {
    public const nint m_table = 0x0; // CUtlVector<CDspPresetModifierList>
}

public static class CDspPresetModifierList {
    public const nint m_dspName = 0x0; // CUtlString
    public const nint m_modifiers = 0x8; // CUtlVector<CDSPMixgroupModifier>
}

public static class CSosGroupActionLimitSchema { // CSosGroupActionSchema
    public const nint m_nMaxCount = 0x18; // int32_t
    public const nint m_nStopType = 0x1C; // SosActionStopType_t
    public const nint m_nSortType = 0x20; // SosActionSortType_t
}

public static class CSosGroupActionSchema {
    public const nint m_name = 0x8; // CUtlString
    public const nint m_actionType = 0x10; // ActionType_t
    public const nint m_actionInstanceType = 0x14; // ActionType_t
}

public static class CSosGroupActionSetSoundeventParameterSchema { // CSosGroupActionSchema
    public const nint m_nMaxCount = 0x18; // int32_t
    public const nint m_flMinValue = 0x1C; // float
    public const nint m_flMaxValue = 0x20; // float
    public const nint m_opvarName = 0x28; // CUtlString
    public const nint m_nSortType = 0x30; // SosActionSortType_t
}

public static class CSosGroupActionSoundeventClusterSchema { // CSosGroupActionSchema
    public const nint m_nMinNearby = 0x18; // int32_t
    public const nint m_flClusterEpsilon = 0x1C; // float
    public const nint m_shouldPlayOpvar = 0x20; // CUtlString
    public const nint m_shouldPlayClusterChild = 0x28; // CUtlString
    public const nint m_clusterSizeOpvar = 0x30; // CUtlString
    public const nint m_groupBoundingBoxMinsOpvar = 0x38; // CUtlString
    public const nint m_groupBoundingBoxMaxsOpvar = 0x40; // CUtlString
}

public static class CSosGroupActionTimeBlockLimitSchema { // CSosGroupActionSchema
    public const nint m_nMaxCount = 0x18; // int32_t
    public const nint m_flMaxDuration = 0x1C; // float
}

public static class CSosGroupActionTimeLimitSchema { // CSosGroupActionSchema
    public const nint m_flMaxDuration = 0x18; // float
}

public static class CSosGroupBranchPattern {
    public const nint m_bMatchEventName = 0x8; // bool
    public const nint m_bMatchEventSubString = 0x9; // bool
    public const nint m_bMatchEntIndex = 0xA; // bool
    public const nint m_bMatchOpvar = 0xB; // bool
}

public static class CSosGroupMatchPattern { // CSosGroupBranchPattern
    public const nint m_matchSoundEventName = 0x10; // CUtlString
    public const nint m_matchSoundEventSubString = 0x18; // CUtlString
    public const nint m_flEntIndex = 0x20; // float
    public const nint m_flOpvar = 0x24; // float
}

public static class CSosSoundEventGroupListSchema {
    public const nint m_groupList = 0x0; // CUtlVector<CSosSoundEventGroupSchema>
}

public static class CSosSoundEventGroupSchema {
    public const nint m_name = 0x0; // CUtlString
    public const nint m_nType = 0x8; // SosGroupType_t
    public const nint m_bIsBlocking = 0xC; // bool
    public const nint m_nBlockMaxCount = 0x10; // int32_t
    public const nint m_bInvertMatch = 0x14; // bool
    public const nint m_matchPattern = 0x18; // CSosGroupMatchPattern
    public const nint m_branchPattern = 0x40; // CSosGroupBranchPattern
    public const nint m_vActions = 0xB0; // CSosGroupActionSchema*[4]
}

public static class CSoundEventMetaData {
    public const nint m_soundEventVMix = 0x0; // CStrongHandle<InfoForResourceTypeCVMixListResource>
}

public static class CVoiceContainerAmpedDecayingSineWave { // CVoiceContainerDecayingSineWave
    public const nint m_flGainAmount = 0x68; // float
}

public static class CVoiceContainerBase {
    public const nint m_curves = 0x20; // CUtlDict<CPiecewiseCurve,F(size=1)>
}

public static class CVoiceContainerBlend { // CVoiceContainerBase
    public const nint m_hSoundOne = 0x60; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
    public const nint m_hSoundTwo = 0x68; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
    public const nint m_flBlendAmount = 0x70; // float
}

public static class CVoiceContainerDecayingSineWave { // CVoiceContainerBase
    public const nint m_flFrequency = 0x60; // float
    public const nint m_flDecayTime = 0x64; // float
}

public static class CVoiceContainerDefault { // CVoiceContainerBase
}

public static class CVoiceContainerEngineSound { // CVoiceContainerBase
    public const nint m_SoundToPlay = 0x60; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
    public const nint m_flTestConstantParam = 0x68; // float
    public const nint m_flTestSoundEventBoundParam = 0x6C; // float
    public const nint m_flEngineRPM = 0x70; // float
}

public static class CVoiceContainerEnvelopeAnalyzer { // CVoiceContainerWavFileReader
    public const nint m_envBuffer = 0x68; // CUtlVector<float>
}

public static class CVoiceContainerRandomSampler { // CVoiceContainerBase
    public const nint m_flLoudAmplitude = 0x60; // float
    public const nint m_flLoudAmplitudeJitter = 0x64; // float
    public const nint m_flSoftAmplitude = 0x68; // float
    public const nint m_flSoftAmplitudeJitter = 0x6C; // float
    public const nint m_flLoudTimeJitter = 0x70; // float
    public const nint m_flSoftTimeJitter = 0x74; // float
    public const nint m_grainResources = 0x78; // CUtlVector<CStrongHandle<InfoForResourceTypeCVoiceContainerBase>>
}

public static class CVoiceContainerRealtimeFMSineWave { // CVoiceContainerBase
    public const nint m_flCarrierFrequency = 0x60; // float
    public const nint m_flModulatorFrequency = 0x64; // float
    public const nint m_flModulatorAmount = 0x68; // float
}

public static class CVoiceContainerTestConstant { // CVoiceContainerWavFileReader
    public const nint m_flTestConstantParam = 0x68; // bool
}

public static class CVoiceContainerTestNestedDynamic { // CVoiceContainerBase
    public const nint m_SoundToPlay = 0x60; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
    public const nint m_flTestConstantParam = 0x68; // float
}

public static class CVoiceContainerWavFileReader { // CVoiceContainerBase
    public const nint m_wavFilePath = 0x60; // CUtlString
}

public static class SelectedEditItemInfo_t {
    public const nint m_EditItems = 0x0; // CUtlVector<SosEditItemInfo_t>
}

public static class SosEditItemInfo_t {
    public const nint itemType = 0x0; // SosEditItemType_t
    public const nint itemName = 0x8; // CUtlString
    public const nint itemTypeName = 0x10; // CUtlString
    public const nint itemKVString = 0x20; // CUtlString
    public const nint itemPos = 0x28; // Vector2D
}

public static class VMixAutoFilterDesc_t {
    public const nint m_flEnvelopeAmount = 0x0; // float
    public const nint m_flAttackTimeMS = 0x4; // float
    public const nint m_flReleaseTimeMS = 0x8; // float
    public const nint m_filter = 0xC; // VMixFilterDesc_t
    public const nint m_flLFOAmount = 0x1C; // float
    public const nint m_flLFORate = 0x20; // float
    public const nint m_flPhase = 0x24; // float
    public const nint m_nLFOShape = 0x28; // VMixLFOShape_t
}

public static class VMixBoxverbDesc_t {
    public const nint m_flSizeMax = 0x0; // float
    public const nint m_flSizeMin = 0x4; // float
    public const nint m_flComplexity = 0x8; // float
    public const nint m_flDiffusion = 0xC; // float
    public const nint m_flModDepth = 0x10; // float
    public const nint m_flModRate = 0x14; // float
    public const nint m_bParallel = 0x18; // bool
    public const nint m_filterType = 0x1C; // VMixFilterDesc_t
    public const nint m_flWidth = 0x2C; // float
    public const nint m_flHeight = 0x30; // float
    public const nint m_flDepth = 0x34; // float
    public const nint m_flFeedbackScale = 0x38; // float
    public const nint m_flFeedbackWidth = 0x3C; // float
    public const nint m_flFeedbackHeight = 0x40; // float
    public const nint m_flFeedbackDepth = 0x44; // float
    public const nint m_flOutputGain = 0x48; // float
    public const nint m_flTaps = 0x4C; // float
}

public static class VMixConvolutionDesc_t {
    public const nint m_fldbGain = 0x0; // float
    public const nint m_flPreDelayMS = 0x4; // float
    public const nint m_flWetMix = 0x8; // float
    public const nint m_fldbLow = 0xC; // float
    public const nint m_fldbMid = 0x10; // float
    public const nint m_fldbHigh = 0x14; // float
    public const nint m_flLowCutoffFreq = 0x18; // float
    public const nint m_flHighCutoffFreq = 0x1C; // float
}

public static class VMixDelayDesc_t {
    public const nint m_feedbackFilter = 0x0; // VMixFilterDesc_t
    public const nint m_bEnableFilter = 0x10; // bool
    public const nint m_flDelay = 0x14; // float
    public const nint m_flDirectGain = 0x18; // float
    public const nint m_flDelayGain = 0x1C; // float
    public const nint m_flFeedbackGain = 0x20; // float
    public const nint m_flWidth = 0x24; // float
}

public static class VMixDiffusorDesc_t {
    public const nint m_flSize = 0x0; // float
    public const nint m_flComplexity = 0x4; // float
    public const nint m_flFeedback = 0x8; // float
    public const nint m_flOutputGain = 0xC; // float
}

public static class VMixDynamics3BandDesc_t {
    public const nint m_fldbGainOutput = 0x0; // float
    public const nint m_flRMSTimeMS = 0x4; // float
    public const nint m_fldbKneeWidth = 0x8; // float
    public const nint m_flDepth = 0xC; // float
    public const nint m_flWetMix = 0x10; // float
    public const nint m_flTimeScale = 0x14; // float
    public const nint m_flLowCutoffFreq = 0x18; // float
    public const nint m_flHighCutoffFreq = 0x1C; // float
    public const nint m_bPeakMode = 0x20; // bool
    public const nint m_bandDesc = 0x24; // VMixDynamicsBand_t[3]
}

public static class VMixDynamicsBand_t {
    public const nint m_fldbGainInput = 0x0; // float
    public const nint m_fldbGainOutput = 0x4; // float
    public const nint m_fldbThresholdBelow = 0x8; // float
    public const nint m_fldbThresholdAbove = 0xC; // float
    public const nint m_flRatioBelow = 0x10; // float
    public const nint m_flRatioAbove = 0x14; // float
    public const nint m_flAttackTimeMS = 0x18; // float
    public const nint m_flReleaseTimeMS = 0x1C; // float
    public const nint m_bEnable = 0x20; // bool
    public const nint m_bSolo = 0x21; // bool
}

public static class VMixDynamicsCompressorDesc_t {
    public const nint m_fldbOutputGain = 0x0; // float
    public const nint m_fldbCompressionThreshold = 0x4; // float
    public const nint m_fldbKneeWidth = 0x8; // float
    public const nint m_flCompressionRatio = 0xC; // float
    public const nint m_flAttackTimeMS = 0x10; // float
    public const nint m_flReleaseTimeMS = 0x14; // float
    public const nint m_flRMSTimeMS = 0x18; // float
    public const nint m_flWetMix = 0x1C; // float
    public const nint m_bPeakMode = 0x20; // bool
}

public static class VMixDynamicsDesc_t {
    public const nint m_fldbGain = 0x0; // float
    public const nint m_fldbNoiseGateThreshold = 0x4; // float
    public const nint m_fldbCompressionThreshold = 0x8; // float
    public const nint m_fldbLimiterThreshold = 0xC; // float
    public const nint m_fldbKneeWidth = 0x10; // float
    public const nint m_flRatio = 0x14; // float
    public const nint m_flLimiterRatio = 0x18; // float
    public const nint m_flAttackTimeMS = 0x1C; // float
    public const nint m_flReleaseTimeMS = 0x20; // float
    public const nint m_flRMSTimeMS = 0x24; // float
    public const nint m_flWetMix = 0x28; // float
    public const nint m_bPeakMode = 0x2C; // bool
}

public static class VMixEQ8Desc_t {
    public const nint m_stages = 0x0; // VMixFilterDesc_t[8]
}

public static class VMixEffectChainDesc_t {
    public const nint m_flCrossfadeTime = 0x0; // float
}

public static class VMixEnvelopeDesc_t {
    public const nint m_flAttackTimeMS = 0x0; // float
    public const nint m_flHoldTimeMS = 0x4; // float
    public const nint m_flReleaseTimeMS = 0x8; // float
}

public static class VMixFilterDesc_t {
    public const nint m_nFilterType = 0x0; // VMixFilterType_t
    public const nint m_nFilterSlope = 0x2; // VMixFilterSlope_t
    public const nint m_bEnabled = 0x3; // bool
    public const nint m_fldbGain = 0x4; // float
    public const nint m_flCutoffFreq = 0x8; // float
    public const nint m_flQ = 0xC; // float
}

public static class VMixFreeverbDesc_t {
    public const nint m_flRoomSize = 0x0; // float
    public const nint m_flDamp = 0x4; // float
    public const nint m_flWidth = 0x8; // float
    public const nint m_flLateReflections = 0xC; // float
}

public static class VMixModDelayDesc_t {
    public const nint m_feedbackFilter = 0x0; // VMixFilterDesc_t
    public const nint m_bPhaseInvert = 0x10; // bool
    public const nint m_flGlideTime = 0x14; // float
    public const nint m_flDelay = 0x18; // float
    public const nint m_flOutputGain = 0x1C; // float
    public const nint m_flFeedbackGain = 0x20; // float
    public const nint m_flModRate = 0x24; // float
    public const nint m_flModDepth = 0x28; // float
    public const nint m_bApplyAntialiasing = 0x2C; // bool
}

public static class VMixOscDesc_t {
    public const nint oscType = 0x0; // VMixLFOShape_t
    public const nint m_freq = 0x4; // float
    public const nint m_flPhase = 0x8; // float
}

public static class VMixPannerDesc_t {
    public const nint m_type = 0x0; // VMixPannerType_t
    public const nint m_flStrength = 0x4; // float
}

public static class VMixPitchShiftDesc_t {
    public const nint m_nGrainSampleCount = 0x0; // int32_t
    public const nint m_flPitchShift = 0x4; // float
    public const nint m_nQuality = 0x8; // int32_t
    public const nint m_nProcType = 0xC; // int32_t
}

public static class VMixPlateverbDesc_t {
    public const nint m_flPrefilter = 0x0; // float
    public const nint m_flInputDiffusion1 = 0x4; // float
    public const nint m_flInputDiffusion2 = 0x8; // float
    public const nint m_flDecay = 0xC; // float
    public const nint m_flDamp = 0x10; // float
    public const nint m_flFeedbackDiffusion1 = 0x14; // float
    public const nint m_flFeedbackDiffusion2 = 0x18; // float
}

public static class VMixShaperDesc_t {
    public const nint m_nShape = 0x0; // int32_t
    public const nint m_fldbDrive = 0x4; // float
    public const nint m_fldbOutputGain = 0x8; // float
    public const nint m_flWetMix = 0xC; // float
    public const nint m_nOversampleFactor = 0x10; // int32_t
}

public static class VMixSubgraphSwitchDesc_t {
    public const nint m_interpolationMode = 0x0; // VMixSubgraphSwitchInterpolationType_t
    public const nint m_bOnlyTailsOnFadeOut = 0x4; // bool
    public const nint m_flInterpolationTime = 0x8; // float
}

public static class VMixUtilityDesc_t {
    public const nint m_nOp = 0x0; // VMixChannelOperation_t
    public const nint m_flInputPan = 0x4; // float
    public const nint m_flOutputBalance = 0x8; // float
    public const nint m_fldbOutputGain = 0xC; // float
    public const nint m_bBassMono = 0x10; // bool
    public const nint m_flBassFreq = 0x14; // float
}

public static class VMixVocoderDesc_t {
    public const nint m_nBandCount = 0x0; // int32_t
    public const nint m_flBandwidth = 0x4; // float
    public const nint m_fldBModGain = 0x8; // float
    public const nint m_flFreqRangeStart = 0xC; // float
    public const nint m_flFreqRangeEnd = 0x10; // float
    public const nint m_fldBUnvoicedGain = 0x14; // float
    public const nint m_flAttackTimeMS = 0x18; // float
    public const nint m_flReleaseTimeMS = 0x1C; // float
    public const nint m_nDebugBand = 0x20; // int32_t
    public const nint m_bPeakMode = 0x24; // bool
}