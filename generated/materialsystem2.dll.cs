public static class MaterialParamBuffer_t {
    public const ulong m_value = 0x8;
}

public static class MaterialParamFloat_t {
    public const ulong m_flValue = 0x8;
}

public static class MaterialParamInt_t {
    public const ulong m_nValue = 0x8;
}

public static class MaterialParamString_t {
    public const ulong m_value = 0x8;
}

public static class MaterialParamTexture_t {
    public const ulong m_pValue = 0x8;
}

public static class MaterialParamVector_t {
    public const ulong m_value = 0x8;
}

public static class MaterialParam_t {
    public const ulong m_name = 0x0;
}

public static class MaterialResourceData_t {
    public const ulong m_materialName = 0x0;
    public const ulong m_shaderName = 0x8;
    public const ulong m_intParams = 0x10;
    public const ulong m_floatParams = 0x28;
    public const ulong m_vectorParams = 0x40;
    public const ulong m_textureParams = 0x58;
    public const ulong m_dynamicParams = 0x70;
    public const ulong m_dynamicTextureParams = 0x88;
    public const ulong m_intAttributes = 0xa0;
    public const ulong m_floatAttributes = 0xb8;
    public const ulong m_vectorAttributes = 0xd0;
    public const ulong m_textureAttributes = 0xe8;
    public const ulong m_stringAttributes = 0x100;
    public const ulong m_renderAttributesUsed = 0x118;
}

public static class PostProcessingBloomParameters_t {
    public const ulong m_blendMode = 0x0;
    public const ulong m_flBloomStrength = 0x4;
    public const ulong m_flScreenBloomStrength = 0x8;
    public const ulong m_flBlurBloomStrength = 0xc;
    public const ulong m_flBloomThreshold = 0x10;
    public const ulong m_flBloomThresholdWidth = 0x14;
    public const ulong m_flSkyboxBloomStrength = 0x18;
    public const ulong m_flBloomStartValue = 0x1c;
    public const ulong m_flBlurWeight = 0x20;
    public const ulong m_vBlurTint = 0x34;
}

public static class PostProcessingLocalContrastParameters_t {
    public const ulong m_flLocalContrastStrength = 0x0;
    public const ulong m_flLocalContrastEdgeStrength = 0x4;
    public const ulong m_flLocalContrastVignetteStart = 0x8;
    public const ulong m_flLocalContrastVignetteEnd = 0xc;
    public const ulong m_flLocalContrastVignetteBlur = 0x10;
}

public static class PostProcessingResource_t {
    public const ulong m_bHasTonemapParams = 0x0;
    public const ulong m_toneMapParams = 0x4;
    public const ulong m_bHasBloomParams = 0x40;
    public const ulong m_bloomParams = 0x44;
    public const ulong m_bHasVignetteParams = 0xb4;
    public const ulong m_vignetteParams = 0xb8;
    public const ulong m_bHasLocalContrastParams = 0xdc;
    public const ulong m_localConstrastParams = 0xe0;
    public const ulong m_nColorCorrectionVolumeDim = 0xf4;
    public const ulong m_colorCorrectionVolumeData = 0xf8;
    public const ulong m_bHasColorCorrection = 0x110;
}

public static class PostProcessingTonemapParameters_t {
    public const ulong m_flExposureBias = 0x0;
    public const ulong m_flShoulderStrength = 0x4;
    public const ulong m_flLinearStrength = 0x8;
    public const ulong m_flLinearAngle = 0xc;
    public const ulong m_flToeStrength = 0x10;
    public const ulong m_flToeNum = 0x14;
    public const ulong m_flToeDenom = 0x18;
    public const ulong m_flWhitePoint = 0x1c;
    public const ulong m_flLuminanceSource = 0x20;
    public const ulong m_flExposureBiasShadows = 0x24;
    public const ulong m_flExposureBiasHighlights = 0x28;
    public const ulong m_flMinShadowLum = 0x2c;
    public const ulong m_flMaxShadowLum = 0x30;
    public const ulong m_flMinHighlightLum = 0x34;
    public const ulong m_flMaxHighlightLum = 0x38;
}

public static class PostProcessingVignetteParameters_t {
    public const ulong m_flVignetteStrength = 0x0;
    public const ulong m_vCenter = 0x4;
    public const ulong m_flRadius = 0xc;
    public const ulong m_flRoundness = 0x10;
    public const ulong m_flFeather = 0x14;
    public const ulong m_vColorTint = 0x18;
}