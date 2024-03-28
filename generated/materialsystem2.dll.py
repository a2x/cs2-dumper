'''
Generated using https://github.com/a2x/cs2-dumper
Sat, 23 Mar 2024 05:02:03 +0000
'''

class MaterialParamBuffer_t: # MaterialParam_t
    m_value = 0x8 # CUtlBinaryBlock

class MaterialParamFloat_t: # MaterialParam_t
    m_flValue = 0x8 # float

class MaterialParamInt_t: # MaterialParam_t
    m_nValue = 0x8 # int32_t

class MaterialParamString_t: # MaterialParam_t
    m_value = 0x8 # CUtlString

class MaterialParamTexture_t: # MaterialParam_t
    m_pValue = 0x8 # CStrongHandle<InfoForResourceTypeCTextureBase>

class MaterialParamVector_t: # MaterialParam_t
    m_value = 0x8 # Vector4D

class MaterialParam_t:
    m_name = 0x0 # CUtlString

class MaterialResourceData_t:
    m_materialName = 0x0 # CUtlString
    m_shaderName = 0x8 # CUtlString
    m_intParams = 0x10 # CUtlVector<MaterialParamInt_t>
    m_floatParams = 0x28 # CUtlVector<MaterialParamFloat_t>
    m_vectorParams = 0x40 # CUtlVector<MaterialParamVector_t>
    m_textureParams = 0x58 # CUtlVector<MaterialParamTexture_t>
    m_dynamicParams = 0x70 # CUtlVector<MaterialParamBuffer_t>
    m_dynamicTextureParams = 0x88 # CUtlVector<MaterialParamBuffer_t>
    m_intAttributes = 0xA0 # CUtlVector<MaterialParamInt_t>
    m_floatAttributes = 0xB8 # CUtlVector<MaterialParamFloat_t>
    m_vectorAttributes = 0xD0 # CUtlVector<MaterialParamVector_t>
    m_textureAttributes = 0xE8 # CUtlVector<MaterialParamTexture_t>
    m_stringAttributes = 0x100 # CUtlVector<MaterialParamString_t>
    m_renderAttributesUsed = 0x118 # CUtlVector<CUtlString>

class PostProcessingBloomParameters_t:
    m_blendMode = 0x0 # BloomBlendMode_t
    m_flBloomStrength = 0x4 # float
    m_flScreenBloomStrength = 0x8 # float
    m_flBlurBloomStrength = 0xC # float
    m_flBloomThreshold = 0x10 # float
    m_flBloomThresholdWidth = 0x14 # float
    m_flSkyboxBloomStrength = 0x18 # float
    m_flBloomStartValue = 0x1C # float
    m_flBlurWeight = 0x20 # float[5]
    m_vBlurTint = 0x34 # Vector[5]

class PostProcessingLocalContrastParameters_t:
    m_flLocalContrastStrength = 0x0 # float
    m_flLocalContrastEdgeStrength = 0x4 # float
    m_flLocalContrastVignetteStart = 0x8 # float
    m_flLocalContrastVignetteEnd = 0xC # float
    m_flLocalContrastVignetteBlur = 0x10 # float

class PostProcessingResource_t:
    m_bHasTonemapParams = 0x0 # bool
    m_toneMapParams = 0x4 # PostProcessingTonemapParameters_t
    m_bHasBloomParams = 0x40 # bool
    m_bloomParams = 0x44 # PostProcessingBloomParameters_t
    m_bHasVignetteParams = 0xB4 # bool
    m_vignetteParams = 0xB8 # PostProcessingVignetteParameters_t
    m_bHasLocalContrastParams = 0xDC # bool
    m_localConstrastParams = 0xE0 # PostProcessingLocalContrastParameters_t
    m_nColorCorrectionVolumeDim = 0xF4 # int32_t
    m_colorCorrectionVolumeData = 0xF8 # CUtlBinaryBlock
    m_bHasColorCorrection = 0x110 # bool

class PostProcessingTonemapParameters_t:
    m_flExposureBias = 0x0 # float
    m_flShoulderStrength = 0x4 # float
    m_flLinearStrength = 0x8 # float
    m_flLinearAngle = 0xC # float
    m_flToeStrength = 0x10 # float
    m_flToeNum = 0x14 # float
    m_flToeDenom = 0x18 # float
    m_flWhitePoint = 0x1C # float
    m_flLuminanceSource = 0x20 # float
    m_flExposureBiasShadows = 0x24 # float
    m_flExposureBiasHighlights = 0x28 # float
    m_flMinShadowLum = 0x2C # float
    m_flMaxShadowLum = 0x30 # float
    m_flMinHighlightLum = 0x34 # float
    m_flMaxHighlightLum = 0x38 # float

class PostProcessingVignetteParameters_t:
    m_flVignetteStrength = 0x0 # float
    m_vCenter = 0x4 # Vector2D
    m_flRadius = 0xC # float
    m_flRoundness = 0x10 # float
    m_flFeather = 0x14 # float
    m_vColorTint = 0x18 # Vector
