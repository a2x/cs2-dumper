/*
 * Generated using https://github.com/a2x/cs2-dumper
 * Sat, 23 Mar 2024 05:02:03 +0000
 */

public static class MaterialParamBuffer_t { // MaterialParam_t
    public const nint m_value = 0x8; // CUtlBinaryBlock
}

public static class MaterialParamFloat_t { // MaterialParam_t
    public const nint m_flValue = 0x8; // float
}

public static class MaterialParamInt_t { // MaterialParam_t
    public const nint m_nValue = 0x8; // int32_t
}

public static class MaterialParamString_t { // MaterialParam_t
    public const nint m_value = 0x8; // CUtlString
}

public static class MaterialParamTexture_t { // MaterialParam_t
    public const nint m_pValue = 0x8; // CStrongHandle<InfoForResourceTypeCTextureBase>
}

public static class MaterialParamVector_t { // MaterialParam_t
    public const nint m_value = 0x8; // Vector4D
}

public static class MaterialParam_t {
    public const nint m_name = 0x0; // CUtlString
}

public static class MaterialResourceData_t {
    public const nint m_materialName = 0x0; // CUtlString
    public const nint m_shaderName = 0x8; // CUtlString
    public const nint m_intParams = 0x10; // CUtlVector<MaterialParamInt_t>
    public const nint m_floatParams = 0x28; // CUtlVector<MaterialParamFloat_t>
    public const nint m_vectorParams = 0x40; // CUtlVector<MaterialParamVector_t>
    public const nint m_textureParams = 0x58; // CUtlVector<MaterialParamTexture_t>
    public const nint m_dynamicParams = 0x70; // CUtlVector<MaterialParamBuffer_t>
    public const nint m_dynamicTextureParams = 0x88; // CUtlVector<MaterialParamBuffer_t>
    public const nint m_intAttributes = 0xA0; // CUtlVector<MaterialParamInt_t>
    public const nint m_floatAttributes = 0xB8; // CUtlVector<MaterialParamFloat_t>
    public const nint m_vectorAttributes = 0xD0; // CUtlVector<MaterialParamVector_t>
    public const nint m_textureAttributes = 0xE8; // CUtlVector<MaterialParamTexture_t>
    public const nint m_stringAttributes = 0x100; // CUtlVector<MaterialParamString_t>
    public const nint m_renderAttributesUsed = 0x118; // CUtlVector<CUtlString>
}

public static class PostProcessingBloomParameters_t {
    public const nint m_blendMode = 0x0; // BloomBlendMode_t
    public const nint m_flBloomStrength = 0x4; // float
    public const nint m_flScreenBloomStrength = 0x8; // float
    public const nint m_flBlurBloomStrength = 0xC; // float
    public const nint m_flBloomThreshold = 0x10; // float
    public const nint m_flBloomThresholdWidth = 0x14; // float
    public const nint m_flSkyboxBloomStrength = 0x18; // float
    public const nint m_flBloomStartValue = 0x1C; // float
    public const nint m_flBlurWeight = 0x20; // float[5]
    public const nint m_vBlurTint = 0x34; // Vector[5]
}

public static class PostProcessingLocalContrastParameters_t {
    public const nint m_flLocalContrastStrength = 0x0; // float
    public const nint m_flLocalContrastEdgeStrength = 0x4; // float
    public const nint m_flLocalContrastVignetteStart = 0x8; // float
    public const nint m_flLocalContrastVignetteEnd = 0xC; // float
    public const nint m_flLocalContrastVignetteBlur = 0x10; // float
}

public static class PostProcessingResource_t {
    public const nint m_bHasTonemapParams = 0x0; // bool
    public const nint m_toneMapParams = 0x4; // PostProcessingTonemapParameters_t
    public const nint m_bHasBloomParams = 0x40; // bool
    public const nint m_bloomParams = 0x44; // PostProcessingBloomParameters_t
    public const nint m_bHasVignetteParams = 0xB4; // bool
    public const nint m_vignetteParams = 0xB8; // PostProcessingVignetteParameters_t
    public const nint m_bHasLocalContrastParams = 0xDC; // bool
    public const nint m_localConstrastParams = 0xE0; // PostProcessingLocalContrastParameters_t
    public const nint m_nColorCorrectionVolumeDim = 0xF4; // int32_t
    public const nint m_colorCorrectionVolumeData = 0xF8; // CUtlBinaryBlock
    public const nint m_bHasColorCorrection = 0x110; // bool
}

public static class PostProcessingTonemapParameters_t {
    public const nint m_flExposureBias = 0x0; // float
    public const nint m_flShoulderStrength = 0x4; // float
    public const nint m_flLinearStrength = 0x8; // float
    public const nint m_flLinearAngle = 0xC; // float
    public const nint m_flToeStrength = 0x10; // float
    public const nint m_flToeNum = 0x14; // float
    public const nint m_flToeDenom = 0x18; // float
    public const nint m_flWhitePoint = 0x1C; // float
    public const nint m_flLuminanceSource = 0x20; // float
    public const nint m_flExposureBiasShadows = 0x24; // float
    public const nint m_flExposureBiasHighlights = 0x28; // float
    public const nint m_flMinShadowLum = 0x2C; // float
    public const nint m_flMaxShadowLum = 0x30; // float
    public const nint m_flMinHighlightLum = 0x34; // float
    public const nint m_flMaxHighlightLum = 0x38; // float
}

public static class PostProcessingVignetteParameters_t {
    public const nint m_flVignetteStrength = 0x0; // float
    public const nint m_vCenter = 0x4; // Vector2D
    public const nint m_flRadius = 0xC; // float
    public const nint m_flRoundness = 0x10; // float
    public const nint m_flFeather = 0x14; // float
    public const nint m_vColorTint = 0x18; // Vector
}