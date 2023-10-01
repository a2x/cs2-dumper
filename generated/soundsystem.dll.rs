#![allow(non_snake_case, non_upper_case_globals)]

pub mod CDSPMixgroupModifier {
    pub const m_mixgroup: usize = 0x0; // CUtlString
    pub const m_flModifier: usize = 0x8; // float32
    pub const m_flModifierMin: usize = 0xC; // float32
    pub const m_flSourceModifier: usize = 0x10; // float32
    pub const m_flSourceModifierMin: usize = 0x14; // float32
    pub const m_flListenerReverbModifierWhenSourceReverbIsActive: usize = 0x18; // float32
}

pub mod CDSPPresetMixgroupModifierTable {
    pub const m_table: usize = 0x0; // CUtlVector< CDspPresetModifierList >
}

pub mod CDspPresetModifierList {
    pub const m_dspName: usize = 0x0; // CUtlString
    pub const m_modifiers: usize = 0x8; // CUtlVector< CDSPMixgroupModifier >
}

pub mod CSosGroupActionLimitSchema {
    pub const m_nMaxCount: usize = 0x18; // int32
    pub const m_nStopType: usize = 0x1C; // SosActionStopType_t
    pub const m_nSortType: usize = 0x20; // SosActionSortType_t
}

pub mod CSosGroupActionSchema {
    pub const m_name: usize = 0x8; // CUtlString
    pub const m_actionType: usize = 0x10; // ActionType_t
    pub const m_actionInstanceType: usize = 0x14; // ActionType_t
}

pub mod CSosGroupActionSetSoundeventParameterSchema {
    pub const m_nMaxCount: usize = 0x18; // int32
    pub const m_flMinValue: usize = 0x1C; // float32
    pub const m_flMaxValue: usize = 0x20; // float32
    pub const m_opvarName: usize = 0x28; // CUtlString
    pub const m_nSortType: usize = 0x30; // SosActionSortType_t
}

pub mod CSosGroupActionTimeLimitSchema {
    pub const m_flMaxDuration: usize = 0x18; // float32
}

pub mod CSosGroupBranchPattern {
    pub const m_bMatchEventName: usize = 0x8; // bool
    pub const m_bMatchEventSubString: usize = 0x9; // bool
    pub const m_bMatchEntIndex: usize = 0xA; // bool
    pub const m_bMatchOpvar: usize = 0xB; // bool
}

pub mod CSosGroupMatchPattern {
    pub const m_matchSoundEventName: usize = 0x10; // CUtlString
    pub const m_matchSoundEventSubString: usize = 0x18; // CUtlString
    pub const m_flEntIndex: usize = 0x20; // float32
    pub const m_flOpvar: usize = 0x24; // float32
}

pub mod CSosSoundEventGroupListSchema {
    pub const m_groupList: usize = 0x0; // CUtlVector< CSosSoundEventGroupSchema >
}

pub mod CSosSoundEventGroupSchema {
    pub const m_name: usize = 0x0; // CUtlString
    pub const m_nType: usize = 0x8; // SosGroupType_t
    pub const m_bIsBlocking: usize = 0xC; // bool
    pub const m_nBlockMaxCount: usize = 0x10; // int32
    pub const m_bInvertMatch: usize = 0x14; // bool
    pub const m_matchPattern: usize = 0x18; // CSosGroupMatchPattern
    pub const m_branchPattern: usize = 0x40; // CSosGroupBranchPattern
    pub const m_vActions: usize = 0xB0; // CSosGroupActionSchema*[4]
}

pub mod CSoundEventMetaData {
    pub const m_soundEventVMix: usize = 0x0; // CStrongHandle< InfoForResourceTypeCVMixListResource >
}

pub mod SelectedEditItemInfo_t {
    pub const m_EditItems: usize = 0x0; // CUtlVector< SosEditItemInfo_t >
}

pub mod SosEditItemInfo_t {
    pub const itemType: usize = 0x0; // SosEditItemType_t
    pub const itemName: usize = 0x8; // CUtlString
    pub const itemTypeName: usize = 0x10; // CUtlString
    pub const itemKVString: usize = 0x20; // CUtlString
    pub const itemPos: usize = 0x28; // Vector2D
}

pub mod VMixAutoFilterDesc_t {
    pub const m_flEnvelopeAmount: usize = 0x0; // float32
    pub const m_flAttackTimeMS: usize = 0x4; // float32
    pub const m_flReleaseTimeMS: usize = 0x8; // float32
    pub const m_filter: usize = 0xC; // VMixFilterDesc_t
    pub const m_flLFOAmount: usize = 0x1C; // float32
    pub const m_flLFORate: usize = 0x20; // float32
    pub const m_flPhase: usize = 0x24; // float32
    pub const m_nLFOShape: usize = 0x28; // VMixLFOShape_t
}

pub mod VMixBoxverbDesc_t {
    pub const m_flSizeMax: usize = 0x0; // float32
    pub const m_flSizeMin: usize = 0x4; // float32
    pub const m_flComplexity: usize = 0x8; // float32
    pub const m_flDiffusion: usize = 0xC; // float32
    pub const m_flModDepth: usize = 0x10; // float32
    pub const m_flModRate: usize = 0x14; // float32
    pub const m_bParallel: usize = 0x18; // bool
    pub const m_filterType: usize = 0x1C; // VMixFilterDesc_t
    pub const m_flWidth: usize = 0x2C; // float32
    pub const m_flHeight: usize = 0x30; // float32
    pub const m_flDepth: usize = 0x34; // float32
    pub const m_flFeedbackScale: usize = 0x38; // float32
    pub const m_flFeedbackWidth: usize = 0x3C; // float32
    pub const m_flFeedbackHeight: usize = 0x40; // float32
    pub const m_flFeedbackDepth: usize = 0x44; // float32
    pub const m_flOutputGain: usize = 0x48; // float32
    pub const m_flTaps: usize = 0x4C; // float32
}

pub mod VMixConvolutionDesc_t {
    pub const m_fldbGain: usize = 0x0; // float32
    pub const m_flPreDelayMS: usize = 0x4; // float32
    pub const m_flWetMix: usize = 0x8; // float32
    pub const m_fldbLow: usize = 0xC; // float32
    pub const m_fldbMid: usize = 0x10; // float32
    pub const m_fldbHigh: usize = 0x14; // float32
    pub const m_flLowCutoffFreq: usize = 0x18; // float32
    pub const m_flHighCutoffFreq: usize = 0x1C; // float32
}

pub mod VMixDelayDesc_t {
    pub const m_feedbackFilter: usize = 0x0; // VMixFilterDesc_t
    pub const m_bEnableFilter: usize = 0x10; // bool
    pub const m_flDelay: usize = 0x14; // float32
    pub const m_flDirectGain: usize = 0x18; // float32
    pub const m_flDelayGain: usize = 0x1C; // float32
    pub const m_flFeedbackGain: usize = 0x20; // float32
    pub const m_flWidth: usize = 0x24; // float32
}

pub mod VMixDiffusorDesc_t {
    pub const m_flSize: usize = 0x0; // float32
    pub const m_flComplexity: usize = 0x4; // float32
    pub const m_flFeedback: usize = 0x8; // float32
    pub const m_flOutputGain: usize = 0xC; // float32
}

pub mod VMixDynamics3BandDesc_t {
    pub const m_fldbGainOutput: usize = 0x0; // float32
    pub const m_flRMSTimeMS: usize = 0x4; // float32
    pub const m_fldbKneeWidth: usize = 0x8; // float32
    pub const m_flDepth: usize = 0xC; // float32
    pub const m_flWetMix: usize = 0x10; // float32
    pub const m_flTimeScale: usize = 0x14; // float32
    pub const m_flLowCutoffFreq: usize = 0x18; // float32
    pub const m_flHighCutoffFreq: usize = 0x1C; // float32
    pub const m_bPeakMode: usize = 0x20; // bool
    pub const m_bandDesc: usize = 0x24; // VMixDynamicsBand_t[3]
}

pub mod VMixDynamicsBand_t {
    pub const m_fldbGainInput: usize = 0x0; // float32
    pub const m_fldbGainOutput: usize = 0x4; // float32
    pub const m_fldbThresholdBelow: usize = 0x8; // float32
    pub const m_fldbThresholdAbove: usize = 0xC; // float32
    pub const m_flRatioBelow: usize = 0x10; // float32
    pub const m_flRatioAbove: usize = 0x14; // float32
    pub const m_flAttackTimeMS: usize = 0x18; // float32
    pub const m_flReleaseTimeMS: usize = 0x1C; // float32
    pub const m_bEnable: usize = 0x20; // bool
    pub const m_bSolo: usize = 0x21; // bool
}

pub mod VMixDynamicsCompressorDesc_t {
    pub const m_fldbOutputGain: usize = 0x0; // float32
    pub const m_fldbCompressionThreshold: usize = 0x4; // float32
    pub const m_fldbKneeWidth: usize = 0x8; // float32
    pub const m_flCompressionRatio: usize = 0xC; // float32
    pub const m_flAttackTimeMS: usize = 0x10; // float32
    pub const m_flReleaseTimeMS: usize = 0x14; // float32
    pub const m_flRMSTimeMS: usize = 0x18; // float32
    pub const m_flWetMix: usize = 0x1C; // float32
    pub const m_bPeakMode: usize = 0x20; // bool
}

pub mod VMixDynamicsDesc_t {
    pub const m_fldbGain: usize = 0x0; // float32
    pub const m_fldbNoiseGateThreshold: usize = 0x4; // float32
    pub const m_fldbCompressionThreshold: usize = 0x8; // float32
    pub const m_fldbLimiterThreshold: usize = 0xC; // float32
    pub const m_fldbKneeWidth: usize = 0x10; // float32
    pub const m_flRatio: usize = 0x14; // float32
    pub const m_flLimiterRatio: usize = 0x18; // float32
    pub const m_flAttackTimeMS: usize = 0x1C; // float32
    pub const m_flReleaseTimeMS: usize = 0x20; // float32
    pub const m_flRMSTimeMS: usize = 0x24; // float32
    pub const m_flWetMix: usize = 0x28; // float32
    pub const m_bPeakMode: usize = 0x2C; // bool
}

pub mod VMixEQ8Desc_t {
    pub const m_stages: usize = 0x0; // VMixFilterDesc_t[8]
}

pub mod VMixEffectChainDesc_t {
    pub const m_flCrossfadeTime: usize = 0x0; // float32
}

pub mod VMixEnvelopeDesc_t {
    pub const m_flAttackTimeMS: usize = 0x0; // float32
    pub const m_flHoldTimeMS: usize = 0x4; // float32
    pub const m_flReleaseTimeMS: usize = 0x8; // float32
}

pub mod VMixFilterDesc_t {
    pub const m_nFilterType: usize = 0x0; // VMixFilterType_t
    pub const m_nFilterSlope: usize = 0x2; // VMixFilterSlope_t
    pub const m_bEnabled: usize = 0x3; // bool
    pub const m_fldbGain: usize = 0x4; // float32
    pub const m_flCutoffFreq: usize = 0x8; // float32
    pub const m_flQ: usize = 0xC; // float32
}

pub mod VMixFreeverbDesc_t {
    pub const m_flRoomSize: usize = 0x0; // float32
    pub const m_flDamp: usize = 0x4; // float32
    pub const m_flWidth: usize = 0x8; // float32
    pub const m_flLateReflections: usize = 0xC; // float32
}

pub mod VMixModDelayDesc_t {
    pub const m_feedbackFilter: usize = 0x0; // VMixFilterDesc_t
    pub const m_bPhaseInvert: usize = 0x10; // bool
    pub const m_flGlideTime: usize = 0x14; // float32
    pub const m_flDelay: usize = 0x18; // float32
    pub const m_flOutputGain: usize = 0x1C; // float32
    pub const m_flFeedbackGain: usize = 0x20; // float32
    pub const m_flModRate: usize = 0x24; // float32
    pub const m_flModDepth: usize = 0x28; // float32
    pub const m_bApplyAntialiasing: usize = 0x2C; // bool
}

pub mod VMixOscDesc_t {
    pub const oscType: usize = 0x0; // VMixLFOShape_t
    pub const m_freq: usize = 0x4; // float32
    pub const m_flPhase: usize = 0x8; // float32
}

pub mod VMixPannerDesc_t {
    pub const m_type: usize = 0x0; // VMixPannerType_t
    pub const m_flStrength: usize = 0x4; // float32
}

pub mod VMixPitchShiftDesc_t {
    pub const m_nGrainSampleCount: usize = 0x0; // int32
    pub const m_flPitchShift: usize = 0x4; // float32
    pub const m_nQuality: usize = 0x8; // int32
    pub const m_nProcType: usize = 0xC; // int32
}

pub mod VMixPlateverbDesc_t {
    pub const m_flPrefilter: usize = 0x0; // float32
    pub const m_flInputDiffusion1: usize = 0x4; // float32
    pub const m_flInputDiffusion2: usize = 0x8; // float32
    pub const m_flDecay: usize = 0xC; // float32
    pub const m_flDamp: usize = 0x10; // float32
    pub const m_flFeedbackDiffusion1: usize = 0x14; // float32
    pub const m_flFeedbackDiffusion2: usize = 0x18; // float32
}

pub mod VMixShaperDesc_t {
    pub const m_nShape: usize = 0x0; // int32
    pub const m_fldbDrive: usize = 0x4; // float32
    pub const m_fldbOutputGain: usize = 0x8; // float32
    pub const m_flWetMix: usize = 0xC; // float32
    pub const m_nOversampleFactor: usize = 0x10; // int32
}

pub mod VMixSubgraphSwitchDesc_t {
    pub const m_interpolationMode: usize = 0x0; // VMixSubgraphSwitchInterpolationType_t
    pub const m_bOnlyTailsOnFadeOut: usize = 0x4; // bool
    pub const m_flInterpolationTime: usize = 0x8; // float32
}

pub mod VMixUtilityDesc_t {
    pub const m_nOp: usize = 0x0; // VMixChannelOperation_t
    pub const m_flInputPan: usize = 0x4; // float32
    pub const m_flOutputBalance: usize = 0x8; // float32
    pub const m_fldbOutputGain: usize = 0xC; // float32
    pub const m_bBassMono: usize = 0x10; // bool
    pub const m_flBassFreq: usize = 0x14; // float32
}

pub mod VMixVocoderDesc_t {
    pub const m_nBandCount: usize = 0x0; // int32
    pub const m_flBandwidth: usize = 0x4; // float32
    pub const m_fldBModGain: usize = 0x8; // float32
    pub const m_flFreqRangeStart: usize = 0xC; // float32
    pub const m_flFreqRangeEnd: usize = 0x10; // float32
    pub const m_fldBUnvoicedGain: usize = 0x14; // float32
    pub const m_flAttackTimeMS: usize = 0x18; // float32
    pub const m_flReleaseTimeMS: usize = 0x1C; // float32
    pub const m_nDebugBand: usize = 0x20; // int32
    pub const m_bPeakMode: usize = 0x24; // bool
}