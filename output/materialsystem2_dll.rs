// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-14 23:58:25.486779500 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: materialsystem2.dll
        // Class count: 14
        // Enum count: 5
        pub mod materialsystem2_dll {
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum VertJustification_e {
                VERT_JUSTIFICATION_TOP = 0x0,
                VERT_JUSTIFICATION_CENTER = 0x1,
                VERT_JUSTIFICATION_BOTTOM = 0x2,
                VERT_JUSTIFICATION_NONE = 0x3
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum LayoutPositionType_e {
                LAYOUTPOSITIONTYPE_VIEWPORT_RELATIVE = 0x0,
                LAYOUTPOSITIONTYPE_FRACTIONAL = 0x1,
                LAYOUTPOSITIONTYPE_NONE = 0x2
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum ViewFadeMode_t {
                VIEW_FADE_CONSTANT_COLOR = 0x0,
                VIEW_FADE_MODULATE = 0x1,
                VIEW_FADE_MOD2X = 0x2
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum BloomBlendMode_t {
                BLOOM_BLEND_ADD = 0x0,
                BLOOM_BLEND_SCREEN = 0x1,
                BLOOM_BLEND_BLUR = 0x2
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum HorizJustification_e {
                HORIZ_JUSTIFICATION_LEFT = 0x0,
                HORIZ_JUSTIFICATION_CENTER = 0x1,
                HORIZ_JUSTIFICATION_RIGHT = 0x2,
                HORIZ_JUSTIFICATION_NONE = 0x3
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod MaterialParam_t {
                pub const m_name: usize = 0x0; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod MaterialParamVector_t {
                pub const m_value: usize = 0x8; // Vector4D
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod MaterialParamString_t {
                pub const m_value: usize = 0x8; // CUtlString
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PostProcessingResource_t {
                pub const m_bHasTonemapParams: usize = 0x0; // bool
                pub const m_toneMapParams: usize = 0x4; // PostProcessingTonemapParameters_t
                pub const m_bHasBloomParams: usize = 0x40; // bool
                pub const m_bloomParams: usize = 0x44; // PostProcessingBloomParameters_t
                pub const m_bHasVignetteParams: usize = 0xCC; // bool
                pub const m_vignetteParams: usize = 0xD0; // PostProcessingVignetteParameters_t
                pub const m_bHasLocalContrastParams: usize = 0xF4; // bool
                pub const m_localConstrastParams: usize = 0xF8; // PostProcessingLocalContrastParameters_t
                pub const m_nColorCorrectionVolumeDim: usize = 0x10C; // int32
                pub const m_colorCorrectionVolumeData: usize = 0x110; // CUtlBinaryBlock
                pub const m_bHasColorCorrection: usize = 0x120; // bool
                pub const m_bHasFogScatteringParams: usize = 0x121; // bool
                pub const m_fogScatteringParams: usize = 0x124; // PostProcessingFogScatteringParameters_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod MaterialParamInt_t {
                pub const m_nValue: usize = 0x8; // int32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PostProcessingVignetteParameters_t {
                pub const m_flVignetteStrength: usize = 0x0; // float32
                pub const m_vCenter: usize = 0x4; // Vector2D
                pub const m_flRadius: usize = 0xC; // float32
                pub const m_flRoundness: usize = 0x10; // float32
                pub const m_flFeather: usize = 0x14; // float32
                pub const m_vColorTint: usize = 0x18; // Vector
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PostProcessingLocalContrastParameters_t {
                pub const m_flLocalContrastStrength: usize = 0x0; // float32
                pub const m_flLocalContrastEdgeStrength: usize = 0x4; // float32
                pub const m_flLocalContrastVignetteStart: usize = 0x8; // float32
                pub const m_flLocalContrastVignetteEnd: usize = 0xC; // float32
                pub const m_flLocalContrastVignetteBlur: usize = 0x10; // float32
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PostProcessingTonemapParameters_t {
                pub const m_flExposureBias: usize = 0x0; // float32
                pub const m_flShoulderStrength: usize = 0x4; // float32
                pub const m_flLinearStrength: usize = 0x8; // float32
                pub const m_flLinearAngle: usize = 0xC; // float32
                pub const m_flToeStrength: usize = 0x10; // float32
                pub const m_flToeNum: usize = 0x14; // float32
                pub const m_flToeDenom: usize = 0x18; // float32
                pub const m_flWhitePoint: usize = 0x1C; // float32
                pub const m_flLuminanceSource: usize = 0x20; // float32
                pub const m_flExposureBiasShadows: usize = 0x24; // float32
                pub const m_flExposureBiasHighlights: usize = 0x28; // float32
                pub const m_flMinShadowLum: usize = 0x2C; // float32
                pub const m_flMaxShadowLum: usize = 0x30; // float32
                pub const m_flMinHighlightLum: usize = 0x34; // float32
                pub const m_flMaxHighlightLum: usize = 0x38; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PostProcessingFogScatteringParameters_t {
                pub const m_fRadius: usize = 0x0; // float32
                pub const m_fScale: usize = 0x4; // float32
                pub const m_fCubemapScale: usize = 0x8; // float32
                pub const m_fVolumetricScale: usize = 0xC; // float32
                pub const m_fGradientScale: usize = 0x10; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod MaterialParamBuffer_t {
                pub const m_value: usize = 0x8; // CUtlBinaryBlock
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
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
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PostProcessingBloomParameters_t {
                pub const m_blendMode: usize = 0x0; // BloomBlendMode_t
                pub const m_flBloomStrength: usize = 0x4; // float32
                pub const m_flScreenBloomStrength: usize = 0x8; // float32
                pub const m_flBlurBloomStrength: usize = 0xC; // float32
                pub const m_flBloomThreshold: usize = 0x10; // float32
                pub const m_flBloomThresholdWidth: usize = 0x14; // float32
                pub const m_flSkyboxBloomStrength: usize = 0x18; // float32
                pub const m_flBloomStartValue: usize = 0x1C; // float32
                pub const m_flComputeBloomStrength: usize = 0x20; // float32
                pub const m_flComputeBloomThreshold: usize = 0x24; // float32
                pub const m_flComputeBloomRadius: usize = 0x28; // float32
                pub const m_flComputeBloomEffectsScale: usize = 0x2C; // float32
                pub const m_flComputeBloomLensDirtStrength: usize = 0x30; // float32
                pub const m_flComputeBloomLensDirtBlackLevel: usize = 0x34; // float32
                pub const m_flBlurWeight: usize = 0x38; // float32[5]
                pub const m_vBlurTint: usize = 0x4C; // Vector[5]
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod MaterialParamFloat_t {
                pub const m_flValue: usize = 0x8; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod MaterialParamTexture_t {
                pub const m_pValue: usize = 0x8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
        }
    }
}
