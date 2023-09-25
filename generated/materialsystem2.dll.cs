public static class MaterialParamBuffer_t {
    public const nint m_value = 0x8;
}

public static class MaterialParamFloat_t {
    public const nint m_flValue = 0x8;
}

public static class MaterialParamInt_t {
    public const nint m_nValue = 0x8;
}

public static class MaterialParamString_t {
    public const nint m_value = 0x8;
}

public static class MaterialParamTexture_t {
    public const nint m_pValue = 0x8;
}

public static class MaterialParamVector_t {
    public const nint m_value = 0x8;
}

public static class MaterialParam_t {
    public const nint m_name = 0x0;
}

public static class MaterialResourceData_t {
    public const nint m_materialName = 0x0;
    public const nint m_shaderName = 0x8;
    public const nint m_intParams = 0x10;
    public const nint m_floatParams = 0x28;
    public const nint m_vectorParams = 0x40;
    public const nint m_textureParams = 0x58;
    public const nint m_dynamicParams = 0x70;
    public const nint m_dynamicTextureParams = 0x88;
    public const nint m_intAttributes = 0xA0;
    public const nint m_floatAttributes = 0xB8;
    public const nint m_vectorAttributes = 0xD0;
    public const nint m_textureAttributes = 0xE8;
    public const nint m_stringAttributes = 0x100;
    public const nint m_renderAttributesUsed = 0x118;
}

public static class PostProcessingBloomParameters_t {
    public const nint m_blendMode = 0x0;
    public const nint m_flBloomStrength = 0x4;
    public const nint m_flScreenBloomStrength = 0x8;
    public const nint m_flBlurBloomStrength = 0xC;
    public const nint m_flBloomThreshold = 0x10;
    public const nint m_flBloomThresholdWidth = 0x14;
    public const nint m_flSkyboxBloomStrength = 0x18;
    public const nint m_flBloomStartValue = 0x1C;
    public const nint m_flBlurWeight = 0x20;
    public const nint m_vBlurTint = 0x34;
}

public static class PostProcessingLocalContrastParameters_t {
    public const nint m_flLocalContrastStrength = 0x0;
    public const nint m_flLocalContrastEdgeStrength = 0x4;
    public const nint m_flLocalContrastVignetteStart = 0x8;
    public const nint m_flLocalContrastVignetteEnd = 0xC;
    public const nint m_flLocalContrastVignetteBlur = 0x10;
}

public static class PostProcessingResource_t {
    public const nint m_bHasTonemapParams = 0x0;
    public const nint m_toneMapParams = 0x4;
    public const nint m_bHasBloomParams = 0x40;
    public const nint m_bloomParams = 0x44;
    public const nint m_bHasVignetteParams = 0xB4;
    public const nint m_vignetteParams = 0xB8;
    public const nint m_bHasLocalContrastParams = 0xDC;
    public const nint m_localConstrastParams = 0xE0;
    public const nint m_nColorCorrectionVolumeDim = 0xF4;
    public const nint m_colorCorrectionVolumeData = 0xF8;
    public const nint m_bHasColorCorrection = 0x110;
}

public static class PostProcessingTonemapParameters_t {
    public const nint m_flExposureBias = 0x0;
    public const nint m_flShoulderStrength = 0x4;
    public const nint m_flLinearStrength = 0x8;
    public const nint m_flLinearAngle = 0xC;
    public const nint m_flToeStrength = 0x10;
    public const nint m_flToeNum = 0x14;
    public const nint m_flToeDenom = 0x18;
    public const nint m_flWhitePoint = 0x1C;
    public const nint m_flLuminanceSource = 0x20;
    public const nint m_flExposureBiasShadows = 0x24;
    public const nint m_flExposureBiasHighlights = 0x28;
    public const nint m_flMinShadowLum = 0x2C;
    public const nint m_flMaxShadowLum = 0x30;
    public const nint m_flMinHighlightLum = 0x34;
    public const nint m_flMaxHighlightLum = 0x38;
}

public static class PostProcessingVignetteParameters_t {
    public const nint m_flVignetteStrength = 0x0;
    public const nint m_vCenter = 0x4;
    public const nint m_flRadius = 0xC;
    public const nint m_flRoundness = 0x10;
    public const nint m_flFeather = 0x14;
    public const nint m_vColorTint = 0x18;
}