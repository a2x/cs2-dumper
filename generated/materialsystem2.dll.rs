/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 23 Mar 2024 05:02:03 +0000
 */

#![allow(non_snake_case, non_upper_case_globals)]

pub mod MaterialParamBuffer_t { // MaterialParam_t
    pub const m_value: usize = 0x8; // CUtlBinaryBlock
}

pub mod MaterialParamFloat_t { // MaterialParam_t
    pub const m_flValue: usize = 0x8; // float
}

pub mod MaterialParamInt_t { // MaterialParam_t
    pub const m_nValue: usize = 0x8; // int32_t
}

pub mod MaterialParamString_t { // MaterialParam_t
    pub const m_value: usize = 0x8; // CUtlString
}

pub mod MaterialParamTexture_t { // MaterialParam_t
    pub const m_pValue: usize = 0x8; // CStrongHandle<InfoForResourceTypeCTextureBase>
}

pub mod MaterialParamVector_t { // MaterialParam_t
    pub const m_value: usize = 0x8; // Vector4D
}

pub mod MaterialParam_t {
    pub const m_name: usize = 0x0; // CUtlString
}

pub mod MaterialResourceData_t {
    pub const m_materialName: usize = 0x0; // CUtlString
    pub const m_shaderName: usize = 0x8; // CUtlString
    pub const m_intParams: usize = 0x10; // CUtlVector<MaterialParamInt_t>
    pub const m_floatParams: usize = 0x28; // CUtlVector<MaterialParamFloat_t>
    pub const m_vectorParams: usize = 0x40; // CUtlVector<MaterialParamVector_t>
    pub const m_textureParams: usize = 0x58; // CUtlVector<MaterialParamTexture_t>
    pub const m_dynamicParams: usize = 0x70; // CUtlVector<MaterialParamBuffer_t>
    pub const m_dynamicTextureParams: usize = 0x88; // CUtlVector<MaterialParamBuffer_t>
    pub const m_intAttributes: usize = 0xA0; // CUtlVector<MaterialParamInt_t>
    pub const m_floatAttributes: usize = 0xB8; // CUtlVector<MaterialParamFloat_t>
    pub const m_vectorAttributes: usize = 0xD0; // CUtlVector<MaterialParamVector_t>
    pub const m_textureAttributes: usize = 0xE8; // CUtlVector<MaterialParamTexture_t>
    pub const m_stringAttributes: usize = 0x100; // CUtlVector<MaterialParamString_t>
    pub const m_renderAttributesUsed: usize = 0x118; // CUtlVector<CUtlString>
}

pub mod PostProcessingBloomParameters_t {
    pub const m_blendMode: usize = 0x0; // BloomBlendMode_t
    pub const m_flBloomStrength: usize = 0x4; // float
    pub const m_flScreenBloomStrength: usize = 0x8; // float
    pub const m_flBlurBloomStrength: usize = 0xC; // float
    pub const m_flBloomThreshold: usize = 0x10; // float
    pub const m_flBloomThresholdWidth: usize = 0x14; // float
    pub const m_flSkyboxBloomStrength: usize = 0x18; // float
    pub const m_flBloomStartValue: usize = 0x1C; // float
    pub const m_flBlurWeight: usize = 0x20; // float[5]
    pub const m_vBlurTint: usize = 0x34; // Vector[5]
}

pub mod PostProcessingLocalContrastParameters_t {
    pub const m_flLocalContrastStrength: usize = 0x0; // float
    pub const m_flLocalContrastEdgeStrength: usize = 0x4; // float
    pub const m_flLocalContrastVignetteStart: usize = 0x8; // float
    pub const m_flLocalContrastVignetteEnd: usize = 0xC; // float
    pub const m_flLocalContrastVignetteBlur: usize = 0x10; // float
}

pub mod PostProcessingResource_t {
    pub const m_bHasTonemapParams: usize = 0x0; // bool
    pub const m_toneMapParams: usize = 0x4; // PostProcessingTonemapParameters_t
    pub const m_bHasBloomParams: usize = 0x40; // bool
    pub const m_bloomParams: usize = 0x44; // PostProcessingBloomParameters_t
    pub const m_bHasVignetteParams: usize = 0xB4; // bool
    pub const m_vignetteParams: usize = 0xB8; // PostProcessingVignetteParameters_t
    pub const m_bHasLocalContrastParams: usize = 0xDC; // bool
    pub const m_localConstrastParams: usize = 0xE0; // PostProcessingLocalContrastParameters_t
    pub const m_nColorCorrectionVolumeDim: usize = 0xF4; // int32_t
    pub const m_colorCorrectionVolumeData: usize = 0xF8; // CUtlBinaryBlock
    pub const m_bHasColorCorrection: usize = 0x110; // bool
}

pub mod PostProcessingTonemapParameters_t {
    pub const m_flExposureBias: usize = 0x0; // float
    pub const m_flShoulderStrength: usize = 0x4; // float
    pub const m_flLinearStrength: usize = 0x8; // float
    pub const m_flLinearAngle: usize = 0xC; // float
    pub const m_flToeStrength: usize = 0x10; // float
    pub const m_flToeNum: usize = 0x14; // float
    pub const m_flToeDenom: usize = 0x18; // float
    pub const m_flWhitePoint: usize = 0x1C; // float
    pub const m_flLuminanceSource: usize = 0x20; // float
    pub const m_flExposureBiasShadows: usize = 0x24; // float
    pub const m_flExposureBiasHighlights: usize = 0x28; // float
    pub const m_flMinShadowLum: usize = 0x2C; // float
    pub const m_flMaxShadowLum: usize = 0x30; // float
    pub const m_flMinHighlightLum: usize = 0x34; // float
    pub const m_flMaxHighlightLum: usize = 0x38; // float
}

pub mod PostProcessingVignetteParameters_t {
    pub const m_flVignetteStrength: usize = 0x0; // float
    pub const m_vCenter: usize = 0x4; // Vector2D
    pub const m_flRadius: usize = 0xC; // float
    pub const m_flRoundness: usize = 0x10; // float
    pub const m_flFeather: usize = 0x14; // float
    pub const m_vColorTint: usize = 0x18; // Vector
}