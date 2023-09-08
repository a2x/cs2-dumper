#[allow(non_snake_case, non_upper_case_globals)]
pub mod MaterialParamBuffer_t {
    pub const m_value: usize = 0x8;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod MaterialParamFloat_t {
    pub const m_flValue: usize = 0x8;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod MaterialParamInt_t {
    pub const m_nValue: usize = 0x8;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod MaterialParamString_t {
    pub const m_value: usize = 0x8;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod MaterialParamTexture_t {
    pub const m_pValue: usize = 0x8;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod MaterialParamVector_t {
    pub const m_value: usize = 0x8;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod MaterialParam_t {
    pub const m_name: usize = 0x0;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod MaterialResourceData_t {
    pub const m_materialName: usize = 0x0;
    pub const m_shaderName: usize = 0x8;
    pub const m_intParams: usize = 0x10;
    pub const m_floatParams: usize = 0x28;
    pub const m_vectorParams: usize = 0x40;
    pub const m_textureParams: usize = 0x58;
    pub const m_dynamicParams: usize = 0x70;
    pub const m_dynamicTextureParams: usize = 0x88;
    pub const m_intAttributes: usize = 0xa0;
    pub const m_floatAttributes: usize = 0xb8;
    pub const m_vectorAttributes: usize = 0xd0;
    pub const m_textureAttributes: usize = 0xe8;
    pub const m_stringAttributes: usize = 0x100;
    pub const m_renderAttributesUsed: usize = 0x118;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod PostProcessingBloomParameters_t {
    pub const m_blendMode: usize = 0x0;
    pub const m_flBloomStrength: usize = 0x4;
    pub const m_flScreenBloomStrength: usize = 0x8;
    pub const m_flBlurBloomStrength: usize = 0xc;
    pub const m_flBloomThreshold: usize = 0x10;
    pub const m_flBloomThresholdWidth: usize = 0x14;
    pub const m_flSkyboxBloomStrength: usize = 0x18;
    pub const m_flBloomStartValue: usize = 0x1c;
    pub const m_flBlurWeight: usize = 0x20;
    pub const m_vBlurTint: usize = 0x34;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod PostProcessingLocalContrastParameters_t {
    pub const m_flLocalContrastStrength: usize = 0x0;
    pub const m_flLocalContrastEdgeStrength: usize = 0x4;
    pub const m_flLocalContrastVignetteStart: usize = 0x8;
    pub const m_flLocalContrastVignetteEnd: usize = 0xc;
    pub const m_flLocalContrastVignetteBlur: usize = 0x10;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod PostProcessingResource_t {
    pub const m_bHasTonemapParams: usize = 0x0;
    pub const m_toneMapParams: usize = 0x4;
    pub const m_bHasBloomParams: usize = 0x40;
    pub const m_bloomParams: usize = 0x44;
    pub const m_bHasVignetteParams: usize = 0xb4;
    pub const m_vignetteParams: usize = 0xb8;
    pub const m_bHasLocalContrastParams: usize = 0xdc;
    pub const m_localConstrastParams: usize = 0xe0;
    pub const m_nColorCorrectionVolumeDim: usize = 0xf4;
    pub const m_colorCorrectionVolumeData: usize = 0xf8;
    pub const m_bHasColorCorrection: usize = 0x110;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod PostProcessingTonemapParameters_t {
    pub const m_flExposureBias: usize = 0x0;
    pub const m_flShoulderStrength: usize = 0x4;
    pub const m_flLinearStrength: usize = 0x8;
    pub const m_flLinearAngle: usize = 0xc;
    pub const m_flToeStrength: usize = 0x10;
    pub const m_flToeNum: usize = 0x14;
    pub const m_flToeDenom: usize = 0x18;
    pub const m_flWhitePoint: usize = 0x1c;
    pub const m_flLuminanceSource: usize = 0x20;
    pub const m_flExposureBiasShadows: usize = 0x24;
    pub const m_flExposureBiasHighlights: usize = 0x28;
    pub const m_flMinShadowLum: usize = 0x2c;
    pub const m_flMaxShadowLum: usize = 0x30;
    pub const m_flMinHighlightLum: usize = 0x34;
    pub const m_flMaxHighlightLum: usize = 0x38;
}

#[allow(non_snake_case, non_upper_case_globals)]
pub mod PostProcessingVignetteParameters_t {
    pub const m_flVignetteStrength: usize = 0x0;
    pub const m_vCenter: usize = 0x4;
    pub const m_flRadius: usize = 0xc;
    pub const m_flRoundness: usize = 0x10;
    pub const m_flFeather: usize = 0x14;
    pub const m_vColorTint: usize = 0x18;
}