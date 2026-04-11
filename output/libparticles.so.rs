// Generated using https://github.com/a2x/cs2-dumper
// 2026-04-11 10:20:28.886370999 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: libparticles.so
        // Classes count: 430
        // Enums count: 8
        pub mod libparticles_so {
            // Alignment: 1
            // Members count: 4
            #[repr(u8)]
            pub enum CPulseCell_BooleanSwitchState {
                 = 0x0
            }
            // Alignment: 4
            // Members count: 2
            #[repr(u32)]
            pub enum PulseBestOutflowRules_t {
                SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
                SORT_BY_OUTFLOW_INDEX = 0x1
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod IParticleCollection {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod ParticleAttributeIndex_t {
                pub const m_Value: usize = 0x0; // int32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapGravityToVector {
                pub const m_vInput1: usize = 0x1C8; // CPerParticleVecInput
                pub const m_nOutputField: usize = 0x858; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x85C; // ParticleSetMethod_t
                pub const m_bNormalizedOutput: usize = 0x860; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_Decay {
                pub const m_bRopeDecay: usize = 0x1C8; // bool
                pub const m_bForcePreserveParticleOrder: usize = 0x1C9; // bool
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RenderDeferredLight {
                pub const m_bUseAlphaTestWindow: usize = 0x212; // bool
                pub const m_bUseTexture: usize = 0x213; // bool
                pub const m_flRadiusScale: usize = 0x214; // float32
                pub const m_flAlphaScale: usize = 0x218; // float32
                pub const m_nAlpha2Field: usize = 0x21C; // ParticleAttributeIndex_t
                pub const m_vecColorScale: usize = 0x220; // CParticleCollectionVecInput
                pub const m_nColorBlendType: usize = 0x8B0; // ParticleColorBlendType_t
                pub const m_flLightDistance: usize = 0x8B4; // float32
                pub const m_flStartFalloff: usize = 0x8B8; // float32
                pub const m_flDistanceFalloff: usize = 0x8BC; // float32
                pub const m_flSpotFoV: usize = 0x8C0; // float32
                pub const m_nAlphaTestPointField: usize = 0x8C4; // ParticleAttributeIndex_t
                pub const m_nAlphaTestRangeField: usize = 0x8C8; // ParticleAttributeIndex_t
                pub const m_nAlphaTestSharpnessField: usize = 0x8CC; // ParticleAttributeIndex_t
                pub const m_hTexture: usize = 0x8D0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_nHSVShiftControlPoint: usize = 0x8D8; // int32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapSpeedtoCP {
                pub const m_nInControlPointNumber: usize = 0x1CC; // int32
                pub const m_nOutControlPointNumber: usize = 0x1D0; // int32
                pub const m_nField: usize = 0x1D4; // int32
                pub const m_flInputMin: usize = 0x1D8; // float32
                pub const m_flInputMax: usize = 0x1DC; // float32
                pub const m_flOutputMin: usize = 0x1E0; // float32
                pub const m_flOutputMax: usize = 0x1E4; // float32
                pub const m_bUseDeltaV: usize = 0x1E8; // bool
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapTransformToVelocity {
                pub const m_TransformInput: usize = 0x1C8; // CParticleTransformInput
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            pub mod CollisionGroupContext_t {
                pub const m_nCollisionGroupNumber: usize = 0x0; // int32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod CParticleFunctionPreEmission {
                pub const m_bRunOnce: usize = 0x1C8; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_FadeOutSimple {
                pub const m_flFadeOutTime: usize = 0x1C8; // float32
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SpringToVectorConstraint {
                pub const m_flRestLength: usize = 0x1C8; // CPerParticleFloatInput
                pub const m_flMinDistance: usize = 0x330; // CPerParticleFloatInput
                pub const m_flMaxDistance: usize = 0x498; // CPerParticleFloatInput
                pub const m_flRestingLength: usize = 0x600; // CPerParticleFloatInput
                pub const m_vecAnchorVector: usize = 0x768; // CPerParticleVecInput
            }
            // Parent: None
            // Fields count: 32
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RenderRopes {
                pub const m_bEnableFadingAndClamping: usize = 0x2CF8; // bool
                pub const m_flMinSize: usize = 0x2CFC; // float32
                pub const m_flMaxSize: usize = 0x2D00; // float32
                pub const m_flStartFadeSize: usize = 0x2D04; // float32
                pub const m_flEndFadeSize: usize = 0x2D08; // float32
                pub const m_flStartFadeDot: usize = 0x2D0C; // float32
                pub const m_flEndFadeDot: usize = 0x2D10; // float32
                pub const m_flRadiusTaper: usize = 0x2D14; // float32
                pub const m_nMinTesselation: usize = 0x2D18; // int32
                pub const m_nMaxTesselation: usize = 0x2D1C; // int32
                pub const m_flTessScale: usize = 0x2D20; // float32
                pub const m_flTextureVWorldSize: usize = 0x2D28; // CParticleCollectionRendererFloatInput
                pub const m_flTextureVScrollRate: usize = 0x2E90; // CParticleCollectionRendererFloatInput
                pub const m_flTextureVOffset: usize = 0x2FF8; // CParticleCollectionRendererFloatInput
                pub const m_nTextureVParamsCP: usize = 0x3160; // int32
                pub const m_bClampV: usize = 0x3164; // bool
                pub const m_nScaleCP1: usize = 0x3168; // int32
                pub const m_nScaleCP2: usize = 0x316C; // int32
                pub const m_flScaleVSizeByControlPointDistance: usize = 0x3170; // float32
                pub const m_flScaleVScrollByControlPointDistance: usize = 0x3174; // float32
                pub const m_flScaleVOffsetByControlPointDistance: usize = 0x3178; // float32
                pub const m_bUseScalarForTextureCoordinate: usize = 0x317D; // bool
                pub const m_nScalarFieldForTextureCoordinate: usize = 0x3180; // ParticleAttributeIndex_t
                pub const m_flScalarAttributeTextureCoordScale: usize = 0x3184; // float32
                pub const m_bReverseOrder: usize = 0x3188; // bool
                pub const m_bClosedLoop: usize = 0x3189; // bool
                pub const m_nSplitField: usize = 0x318C; // ParticleAttributeIndex_t
                pub const m_bSortBySegmentID: usize = 0x3190; // bool
                pub const m_nOrientationType: usize = 0x3194; // ParticleOrientationChoiceList_t
                pub const m_nVectorFieldForOrientation: usize = 0x3198; // ParticleAttributeIndex_t
                pub const m_bDrawAsOpaque: usize = 0x319C; // bool
                pub const m_bGenerateNormals: usize = 0x319D; // bool
            }
            // Parent: None
            // Fields count: 19
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_StatusEffectCitadel {
                pub const m_flSFXColorWarpAmount: usize = 0x1CC; // float32
                pub const m_flSFXNormalAmount: usize = 0x1D0; // float32
                pub const m_flSFXMetalnessAmount: usize = 0x1D4; // float32
                pub const m_flSFXRoughnessAmount: usize = 0x1D8; // float32
                pub const m_flSFXSelfIllumAmount: usize = 0x1DC; // float32
                pub const m_flSFXSScale: usize = 0x1E0; // float32
                pub const m_flSFXSScrollX: usize = 0x1E4; // float32
                pub const m_flSFXSScrollY: usize = 0x1E8; // float32
                pub const m_flSFXSScrollZ: usize = 0x1EC; // float32
                pub const m_flSFXSOffsetX: usize = 0x1F0; // float32
                pub const m_flSFXSOffsetY: usize = 0x1F4; // float32
                pub const m_flSFXSOffsetZ: usize = 0x1F8; // float32
                pub const m_nDetailCombo: usize = 0x1FC; // DetailCombo_t
                pub const m_flSFXSDetailAmount: usize = 0x200; // float32
                pub const m_flSFXSDetailScale: usize = 0x204; // float32
                pub const m_flSFXSDetailScrollX: usize = 0x208; // float32
                pub const m_flSFXSDetailScrollY: usize = 0x20C; // float32
                pub const m_flSFXSDetailScrollZ: usize = 0x210; // float32
                pub const m_flSFXSUseModelUVs: usize = 0x214; // float32
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RenderSound {
                pub const m_flDurationScale: usize = 0x214; // float32
                pub const m_flSndLvlScale: usize = 0x218; // float32
                pub const m_flPitchScale: usize = 0x21C; // float32
                pub const m_flVolumeScale: usize = 0x220; // float32
                pub const m_nSndLvlField: usize = 0x224; // ParticleAttributeIndex_t
                pub const m_nDurationField: usize = 0x228; // ParticleAttributeIndex_t
                pub const m_nPitchField: usize = 0x22C; // ParticleAttributeIndex_t
                pub const m_nVolumeField: usize = 0x230; // ParticleAttributeIndex_t
                pub const m_nChannel: usize = 0x234; // int32
                pub const m_nCPReference: usize = 0x238; // int32
                pub const m_pszSoundName: usize = 0x23C; // char[256]
                pub const m_bSuppressStopSoundEvent: usize = 0x33C; // bool
            }
            // Parent: None
            // Fields count: 19
            //
            // Metadata:
            // ���x.
            pub mod CParticleVisibilityInputs {
                pub const m_flCameraBias: usize = 0x0; // float32
                pub const m_nCPin: usize = 0x4; // int32
                pub const m_flProxyRadius: usize = 0x8; // float32
                pub const m_flInputMin: usize = 0xC; // float32
                pub const m_flInputMax: usize = 0x10; // float32
                pub const m_flInputPixelVisFade: usize = 0x14; // float32
                pub const m_flNoPixelVisibilityFallback: usize = 0x18; // float32
                pub const m_flDistanceInputMin: usize = 0x1C; // float32
                pub const m_flDistanceInputMax: usize = 0x20; // float32
                pub const m_flDotInputMin: usize = 0x24; // float32
                pub const m_flDotInputMax: usize = 0x28; // float32
                pub const m_bDotCPAngles: usize = 0x2C; // bool
                pub const m_bDotCameraAngles: usize = 0x2D; // bool
                pub const m_flAlphaScaleMin: usize = 0x30; // float32
                pub const m_flAlphaScaleMax: usize = 0x34; // float32
                pub const m_flRadiusScaleMin: usize = 0x38; // float32
                pub const m_flRadiusScaleMax: usize = 0x3C; // float32
                pub const m_flRadiusScaleFOVBase: usize = 0x40; // float32
                pub const m_bRightEye: usize = 0x44; // bool
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetControlPointsToParticle {
                pub const m_nChildGroupID: usize = 0x1C8; // int32
                pub const m_nFirstControlPoint: usize = 0x1CC; // int32
                pub const m_nNumControlPoints: usize = 0x1D0; // int32
                pub const m_nFirstSourcePoint: usize = 0x1D4; // int32
                pub const m_bReverse: usize = 0x1D8; // bool
                pub const m_bSetOrientation: usize = 0x1D9; // bool
                pub const m_nOrientationMode: usize = 0x1DC; // ParticleOrientationSetMode_t
                pub const m_nSetParent: usize = 0x1E0; // ParticleParentSetMode_t
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapCPVelocityToVector {
                pub const m_nControlPoint: usize = 0x1C8; // int32
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_flScale: usize = 0x1D0; // float32
                pub const m_bNormalize: usize = 0x1D4; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_PointVectorAtNextParticle {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_flInterpolation: usize = 0x1D0; // CPerParticleFloatInput
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            pub mod ParticlePreviewBodyGroup_t {
                pub const m_bodyGroupName: usize = 0x0; // CUtlString
                pub const m_nValue: usize = 0x8; // int32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_OscillateScalarSimple {
                pub const m_Rate: usize = 0x1C8; // float32
                pub const m_Frequency: usize = 0x1CC; // float32
                pub const m_nField: usize = 0x1D0; // ParticleAttributeIndex_t
                pub const m_flOscMult: usize = 0x1D4; // float32
                pub const m_flOscAdd: usize = 0x1D8; // float32
            }
            // Parent: None
            // Fields count: 18
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_StatusEffect {
                pub const m_nDetail2Combo: usize = 0x1CC; // Detail2Combo_t
                pub const m_flDetail2Rotation: usize = 0x1D0; // float32
                pub const m_flDetail2Scale: usize = 0x1D4; // float32
                pub const m_flDetail2BlendFactor: usize = 0x1D8; // float32
                pub const m_flColorWarpIntensity: usize = 0x1DC; // float32
                pub const m_flDiffuseWarpBlendToFull: usize = 0x1E0; // float32
                pub const m_flEnvMapIntensity: usize = 0x1E4; // float32
                pub const m_flAmbientScale: usize = 0x1E8; // float32
                pub const m_specularColor: usize = 0x1EC; // Color
                pub const m_flSpecularScale: usize = 0x1F0; // float32
                pub const m_flSpecularExponent: usize = 0x1F4; // float32
                pub const m_flSpecularExponentBlendToFull: usize = 0x1F8; // float32
                pub const m_flSpecularBlendToFull: usize = 0x1FC; // float32
                pub const m_rimLightColor: usize = 0x200; // Color
                pub const m_flRimLightScale: usize = 0x204; // float32
                pub const m_flReflectionsTintByBaseBlendToNone: usize = 0x208; // float32
                pub const m_flMetalnessBlendToFull: usize = 0x20C; // float32
                pub const m_flSelfIllumBlendToFull: usize = 0x210; // float32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RtEnvCull {
                pub const m_vecTestDir: usize = 0x1CC; // Vector
                pub const m_vecTestNormal: usize = 0x1D8; // Vector
                pub const m_bUseVelocity: usize = 0x1E4; // bool
                pub const m_bCullOnMiss: usize = 0x1E5; // bool
                pub const m_bLifeAdjust: usize = 0x1E6; // bool
                pub const m_RtEnvName: usize = 0x1E7; // char[128]
                pub const m_nRTEnvCP: usize = 0x268; // int32
                pub const m_nComponent: usize = 0x26C; // int32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_ConstrainDistance {
                pub const m_fMinDistance: usize = 0x1C8; // CParticleCollectionFloatInput
                pub const m_fMaxDistance: usize = 0x330; // CParticleCollectionFloatInput
                pub const m_nControlPointNumber: usize = 0x498; // int32
                pub const m_CenterOffset: usize = 0x49C; // Vector
                pub const m_bGlobalCenter: usize = 0x4A8; // bool
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RandomVector {
                pub const m_vecMin: usize = 0x1CC; // Vector
                pub const m_vecMax: usize = 0x1D8; // Vector
                pub const m_nFieldOutput: usize = 0x1E4; // ParticleAttributeIndex_t
                pub const m_randomnessParameters: usize = 0x1E8; // CRandomNumberGeneratorParameters
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_InitialVelocityNoise {
                pub const m_vecAbsVal: usize = 0x1CC; // Vector
                pub const m_vecAbsValInv: usize = 0x1D8; // Vector
                pub const m_vecOffsetLoc: usize = 0x1E8; // CPerParticleVecInput
                pub const m_flOffset: usize = 0x878; // CPerParticleFloatInput
                pub const m_vecOutputMin: usize = 0x9E0; // CPerParticleVecInput
                pub const m_vecOutputMax: usize = 0x1070; // CPerParticleVecInput
                pub const m_flNoiseScale: usize = 0x1700; // CPerParticleFloatInput
                pub const m_flNoiseScaleLoc: usize = 0x1868; // CPerParticleFloatInput
                pub const m_TransformInput: usize = 0x19D0; // CParticleTransformInput
                pub const m_bIgnoreDt: usize = 0x1A30; // bool
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            pub mod ParticleChildrenInfo_t {
                pub const m_ChildRef: usize = 0x0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_flDelay: usize = 0x8; // float32
                pub const m_bEndCap: usize = 0xC; // bool
                pub const m_bDisableChild: usize = 0xD; // bool
                pub const m_nDetailLevel: usize = 0x10; // ParticleDetailLevel_t
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapScalarOnceTimed {
                pub const m_bProportional: usize = 0x1C8; // bool
                pub const m_nFieldInput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1D0; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1D4; // float32
                pub const m_flInputMax: usize = 0x1D8; // float32
                pub const m_flOutputMin: usize = 0x1DC; // float32
                pub const m_flOutputMax: usize = 0x1E0; // float32
                pub const m_flRemapTime: usize = 0x1E4; // float32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RandomNamedModelSequence {
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_PlaneCull {
                pub const m_nPlaneControlPoint: usize = 0x1C8; // int32
                pub const m_vecPlaneDirection: usize = 0x1D0; // CParticleCollectionVecInput
                pub const m_bLocalSpace: usize = 0x860; // bool
                pub const m_flPlaneOffset: usize = 0x864; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_VelocityRandom {
                pub const m_nControlPointNumber: usize = 0x1CC; // int32
                pub const m_fSpeedMin: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_fSpeedMax: usize = 0x338; // CPerParticleFloatInput
                pub const m_LocalCoordinateSystemSpeedMin: usize = 0x4A0; // CPerParticleVecInput
                pub const m_LocalCoordinateSystemSpeedMax: usize = 0xB30; // CPerParticleVecInput
                pub const m_bIgnoreDT: usize = 0x11C0; // bool
                pub const m_randomnessParameters: usize = 0x11C4; // CRandomNumberGeneratorParameters
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_ModelDampenMovement {
                pub const m_nControlPointNumber: usize = 0x1C8; // int32
                pub const m_bBoundBox: usize = 0x1CC; // bool
                pub const m_bOutside: usize = 0x1CD; // bool
                pub const m_bUseBones: usize = 0x1CE; // bool
                pub const m_HitboxSetName: usize = 0x1CF; // char[128]
                pub const m_vecPosOffset: usize = 0x250; // CPerParticleVecInput
                pub const m_fDrag: usize = 0x8E0; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_TwistAroundAxis {
                pub const m_fForceAmount: usize = 0x1D4; // float32
                pub const m_TwistAxis: usize = 0x1D8; // Vector
                pub const m_bLocalSpace: usize = 0x1E4; // bool
                pub const m_nControlPointNumber: usize = 0x1E8; // int32
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_TeleportBeam {
                pub const m_nCPPosition: usize = 0x1C8; // int32
                pub const m_nCPVelocity: usize = 0x1CC; // int32
                pub const m_nCPMisc: usize = 0x1D0; // int32
                pub const m_nCPColor: usize = 0x1D4; // int32
                pub const m_nCPInvalidColor: usize = 0x1D8; // int32
                pub const m_nCPExtraArcData: usize = 0x1DC; // int32
                pub const m_vGravity: usize = 0x1E0; // Vector
                pub const m_flArcMaxDuration: usize = 0x1EC; // float32
                pub const m_flSegmentBreak: usize = 0x1F0; // float32
                pub const m_flArcSpeed: usize = 0x1F4; // float32
                pub const m_flAlpha: usize = 0x1F8; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapExternalWindToCP {
                pub const m_nCP: usize = 0x1CC; // int32
                pub const m_nCPOutput: usize = 0x1D0; // int32
                pub const m_vecScale: usize = 0x1D8; // CParticleCollectionVecInput
                pub const m_bSetMagnitude: usize = 0x868; // bool
                pub const m_nOutVectorField: usize = 0x86C; // int32
            }
            // Parent: None
            // Fields count: 64
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod CBaseRendererSource2 {
                pub const m_flRadiusScale: usize = 0x218; // CParticleCollectionRendererFloatInput
                pub const m_flAlphaScale: usize = 0x380; // CParticleCollectionRendererFloatInput
                pub const m_flRollScale: usize = 0x4E8; // CParticleCollectionRendererFloatInput
                pub const m_nAlpha2Field: usize = 0x650; // ParticleAttributeIndex_t
                pub const m_vecColorScale: usize = 0x658; // CParticleCollectionRendererVecInput
                pub const m_nColorBlendType: usize = 0xCE8; // ParticleColorBlendType_t
                pub const m_nShaderType: usize = 0xCEC; // SpriteCardShaderType_t
                pub const m_strShaderOverride: usize = 0xCF0; // CUtlString
                pub const m_flCenterXOffset: usize = 0xCF8; // CParticleCollectionRendererFloatInput
                pub const m_flCenterYOffset: usize = 0xE60; // CParticleCollectionRendererFloatInput
                pub const m_flBumpStrength: usize = 0xFC8; // float32
                pub const m_nCropTextureOverride: usize = 0xFCC; // ParticleSequenceCropOverride_t
                pub const m_vecTexturesInput: usize = 0xFD0; // CUtlLeanVector<TextureGroup_t>
                pub const m_flAnimationRate: usize = 0xFE0; // float32
                pub const m_nAnimationType: usize = 0xFE4; // AnimationType_t
                pub const m_bAnimateInFPS: usize = 0xFE8; // bool
                pub const m_flMotionVectorScaleU: usize = 0xFF0; // CParticleCollectionRendererFloatInput
                pub const m_flMotionVectorScaleV: usize = 0x1158; // CParticleCollectionRendererFloatInput
                pub const m_flSelfIllumAmount: usize = 0x12C0; // CParticleCollectionRendererFloatInput
                pub const m_flDiffuseAmount: usize = 0x1428; // CParticleCollectionRendererFloatInput
                pub const m_flDiffuseClamp: usize = 0x1590; // CParticleCollectionRendererFloatInput
                pub const m_nLightingControlPoint: usize = 0x16F8; // int32
                pub const m_nOutputBlendMode: usize = 0x16FC; // ParticleOutputBlendMode_t
                pub const m_bGammaCorrectVertexColors: usize = 0x1700; // bool
                pub const m_bSaturateColorPreAlphaBlend: usize = 0x1701; // bool
                pub const m_flAddSelfAmount: usize = 0x1708; // CParticleCollectionRendererFloatInput
                pub const m_flDesaturation: usize = 0x1870; // CParticleCollectionRendererFloatInput
                pub const m_flOverbrightFactor: usize = 0x19D8; // CParticleCollectionRendererFloatInput
                pub const m_nHSVShiftControlPoint: usize = 0x1B40; // int32
                pub const m_nFogType: usize = 0x1B44; // ParticleFogType_t
                pub const m_flFogAmount: usize = 0x1B48; // CParticleCollectionRendererFloatInput
                pub const m_bTintByFOW: usize = 0x1CB0; // bool
                pub const m_bTintByGlobalLight: usize = 0x1CB1; // bool
                pub const m_nPerParticleAlphaReference: usize = 0x1CB4; // SpriteCardPerParticleScale_t
                pub const m_nPerParticleAlphaRefWindow: usize = 0x1CB8; // SpriteCardPerParticleScale_t
                pub const m_nAlphaReferenceType: usize = 0x1CBC; // ParticleAlphaReferenceType_t
                pub const m_flAlphaReferenceSoftness: usize = 0x1CC0; // CParticleCollectionRendererFloatInput
                pub const m_flSourceAlphaValueToMapToZero: usize = 0x1E28; // CParticleCollectionRendererFloatInput
                pub const m_flSourceAlphaValueToMapToOne: usize = 0x1F90; // CParticleCollectionRendererFloatInput
                pub const m_bRefract: usize = 0x20F8; // bool
                pub const m_bRefractSolid: usize = 0x20F9; // bool
                pub const m_flRefractAmount: usize = 0x2100; // CParticleCollectionRendererFloatInput
                pub const m_nRefractBlurRadius: usize = 0x2268; // int32
                pub const m_nRefractBlurType: usize = 0x226C; // BlurFilterType_t
                pub const m_bOnlyRenderInEffectsBloomPass: usize = 0x2270; // bool
                pub const m_bOnlyRenderInEffectsWaterPass: usize = 0x2271; // bool
                pub const m_bUseMixedResolutionRendering: usize = 0x2272; // bool
                pub const m_bOnlyRenderInEffecsGameOverlay: usize = 0x2273; // bool
                pub const m_stencilTestID: usize = 0x2274; // char[128]
                pub const m_bStencilTestExclude: usize = 0x22F4; // bool
                pub const m_stencilWriteID: usize = 0x22F5; // char[128]
                pub const m_bWriteStencilOnDepthPass: usize = 0x2375; // bool
                pub const m_bWriteStencilOnDepthFail: usize = 0x2376; // bool
                pub const m_bReverseZBuffering: usize = 0x2377; // bool
                pub const m_bDisableZBuffering: usize = 0x2378; // bool
                pub const m_nFeatheringMode: usize = 0x237C; // ParticleDepthFeatheringMode_t
                pub const m_flFeatheringMinDist: usize = 0x2380; // CParticleCollectionRendererFloatInput
                pub const m_flFeatheringMaxDist: usize = 0x24E8; // CParticleCollectionRendererFloatInput
                pub const m_flFeatheringFilter: usize = 0x2650; // CParticleCollectionRendererFloatInput
                pub const m_flFeatheringDepthMapFilter: usize = 0x27B8; // CParticleCollectionRendererFloatInput
                pub const m_flDepthBias: usize = 0x2920; // CParticleCollectionRendererFloatInput
                pub const m_nSortMethod: usize = 0x2A88; // ParticleSortingChoiceList_t
                pub const m_bBlendFramesSeq0: usize = 0x2A8C; // bool
                pub const m_bMaxLuminanceBlendingSequence0: usize = 0x2A8D; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod CSpinUpdateBase {
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_OrientTo2dDirection {
                pub const m_flRotOffset: usize = 0x1C8; // float32
                pub const m_flSpinStrength: usize = 0x1CC; // float32
                pub const m_nFieldOutput: usize = 0x1D0; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapDotProductToCP {
                pub const m_nInputCP1: usize = 0x1CC; // int32
                pub const m_nInputCP2: usize = 0x1D0; // int32
                pub const m_nOutputCP: usize = 0x1D4; // int32
                pub const m_nOutVectorField: usize = 0x1D8; // int32
                pub const m_flInputMin: usize = 0x1E0; // CParticleCollectionFloatInput
                pub const m_flInputMax: usize = 0x348; // CParticleCollectionFloatInput
                pub const m_flOutputMin: usize = 0x4B0; // CParticleCollectionFloatInput
                pub const m_flOutputMax: usize = 0x618; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RemapParticleCountToNamedModelElementScalar {
                pub const m_hModel: usize = 0x1F8; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_outputMinName: usize = 0x200; // CUtlString
                pub const m_outputMaxName: usize = 0x208; // CUtlString
                pub const m_bModelFromRenderer: usize = 0x210; // bool
            }
            // Parent: None
            // Fields count: 20
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RenderTrails {
                pub const m_bEnableFadingAndClamping: usize = 0x2FD9; // bool
                pub const m_flStartFadeDot: usize = 0x2FDC; // float32
                pub const m_flEndFadeDot: usize = 0x2FE0; // float32
                pub const m_nPrevPntSource: usize = 0x2FE4; // ParticleAttributeIndex_t
                pub const m_flMaxLength: usize = 0x2FE8; // float32
                pub const m_flMinLength: usize = 0x2FEC; // float32
                pub const m_bIgnoreDT: usize = 0x2FF0; // bool
                pub const m_flConstrainRadiusToLengthRatio: usize = 0x2FF4; // float32
                pub const m_flLengthScale: usize = 0x2FF8; // float32
                pub const m_flLengthFadeInTime: usize = 0x2FFC; // float32
                pub const m_flRadiusHeadTaper: usize = 0x3000; // CPerParticleFloatInput
                pub const m_vecHeadColorScale: usize = 0x3168; // CParticleCollectionVecInput
                pub const m_flHeadAlphaScale: usize = 0x37F8; // CPerParticleFloatInput
                pub const m_flRadiusTaper: usize = 0x3960; // CPerParticleFloatInput
                pub const m_vecTailColorScale: usize = 0x3AC8; // CParticleCollectionVecInput
                pub const m_flTailAlphaScale: usize = 0x4158; // CPerParticleFloatInput
                pub const m_nHorizCropField: usize = 0x42C0; // ParticleAttributeIndex_t
                pub const m_nVertCropField: usize = 0x42C4; // ParticleAttributeIndex_t
                pub const m_flForwardShift: usize = 0x42C8; // float32
                pub const m_bFlipUVBasedOnPitchYaw: usize = 0x42CC; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetControlPointPositionToTimeOfDayValue {
                pub const m_nControlPointNumber: usize = 0x1CC; // int32
                pub const m_pszTimeOfDayParameter: usize = 0x1D0; // char[128]
                pub const m_vecDefaultValue: usize = 0x250; // Vector
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_DecayMaintainCount {
                pub const m_nParticlesToMaintain: usize = 0x1C8; // int32
                pub const m_flDecayDelay: usize = 0x1CC; // float32
                pub const m_nSnapshotControlPoint: usize = 0x1D0; // int32
                pub const m_strSnapshotSubset: usize = 0x1D8; // CUtlString
                pub const m_bLifespanDecay: usize = 0x1E0; // bool
                pub const m_flScale: usize = 0x1E8; // CParticleCollectionFloatInput
                pub const m_bKillNewest: usize = 0x350; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RandomModelSequence {
                pub const m_ActivityName: usize = 0x1CC; // char[256]
                pub const m_SequenceName: usize = 0x2CC; // char[256]
                pub const m_hModel: usize = 0x3D0; // CStrongHandle<InfoForResourceTypeCModel>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_ExternalGameImpulseForce {
                pub const m_flForceScale: usize = 0x1D8; // CPerParticleFloatInput
                pub const m_bRopes: usize = 0x340; // bool
                pub const m_bRopesZOnly: usize = 0x341; // bool
                pub const m_bExplosions: usize = 0x342; // bool
                pub const m_bParticles: usize = 0x343; // bool
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapAverageHitboxSpeedtoCP {
                pub const m_nInControlPointNumber: usize = 0x1CC; // int32
                pub const m_nOutControlPointNumber: usize = 0x1D0; // int32
                pub const m_nField: usize = 0x1D4; // int32
                pub const m_nHitboxDataType: usize = 0x1D8; // ParticleHitboxDataSelection_t
                pub const m_flInputMin: usize = 0x1E0; // CParticleCollectionFloatInput
                pub const m_flInputMax: usize = 0x348; // CParticleCollectionFloatInput
                pub const m_flOutputMin: usize = 0x4B0; // CParticleCollectionFloatInput
                pub const m_flOutputMax: usize = 0x618; // CParticleCollectionFloatInput
                pub const m_nHeightControlPointNumber: usize = 0x780; // int32
                pub const m_vecComparisonVelocity: usize = 0x788; // CParticleCollectionVecInput
                pub const m_HitboxSetName: usize = 0xE18; // char[128]
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RandomAlpha {
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_nAlphaMin: usize = 0x1D0; // int32
                pub const m_nAlphaMax: usize = 0x1D4; // int32
                pub const m_flAlphaRandExponent: usize = 0x1E0; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_NormalizeVector {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_flScale: usize = 0x1CC; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_FadeInSimple {
                pub const m_flFadeInTime: usize = 0x1C8; // float32
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RepeatedTriggerChildGroup {
                pub const m_nChildGroupID: usize = 0x1CC; // int32
                pub const m_flClusterRefireTime: usize = 0x1D0; // CParticleCollectionFloatInput
                pub const m_flClusterSize: usize = 0x338; // CParticleCollectionFloatInput
                pub const m_flClusterCooldown: usize = 0x4A0; // CParticleCollectionFloatInput
                pub const m_bLimitChildCount: usize = 0x608; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapVelocityToVector {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_flScale: usize = 0x1CC; // float32
                pub const m_bNormalize: usize = 0x1D0; // bool
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_SetHitboxToClosest {
                pub const m_nControlPointNumber: usize = 0x1CC; // int32
                pub const m_nDesiredHitbox: usize = 0x1D0; // int32
                pub const m_vecHitBoxScale: usize = 0x1D8; // CParticleCollectionVecInput
                pub const m_HitboxSetName: usize = 0x868; // char[128]
                pub const m_bUseBones: usize = 0x8E8; // bool
                pub const m_bUseClosestPointOnHitbox: usize = 0x8E9; // bool
                pub const m_nTestType: usize = 0x8EC; // ClosestPointTestType_t
                pub const m_flHybridRatio: usize = 0x8F0; // CParticleCollectionFloatInput
                pub const m_bUpdatePosition: usize = 0xA58; // bool
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RingWave {
                pub const m_TransformInput: usize = 0x1D0; // CParticleTransformInput
                pub const m_flParticlesPerOrbit: usize = 0x230; // CParticleCollectionFloatInput
                pub const m_flInitialRadius: usize = 0x398; // CPerParticleFloatInput
                pub const m_flThickness: usize = 0x500; // CPerParticleFloatInput
                pub const m_flInitialSpeedMin: usize = 0x668; // CPerParticleFloatInput
                pub const m_flInitialSpeedMax: usize = 0x7D0; // CPerParticleFloatInput
                pub const m_flRoll: usize = 0x938; // CPerParticleFloatInput
                pub const m_flPitch: usize = 0xAA0; // CPerParticleFloatInput
                pub const m_flYaw: usize = 0xC08; // CPerParticleFloatInput
                pub const m_bEvenDistribution: usize = 0xD70; // bool
                pub const m_bXYVelocityOnly: usize = 0xD71; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RandomTrailLength {
                pub const m_flMinLength: usize = 0x1CC; // float32
                pub const m_flMaxLength: usize = 0x1D0; // float32
                pub const m_flLengthRandExponent: usize = 0x1D4; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapScalar {
                pub const m_nFieldInput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1D0; // float32
                pub const m_flInputMax: usize = 0x1D4; // float32
                pub const m_flOutputMin: usize = 0x1D8; // float32
                pub const m_flOutputMax: usize = 0x1DC; // float32
                pub const m_bOldCode: usize = 0x1E0; // bool
            }
            // Parent: None
            // Fields count: 13
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_DistanceBetweenTransforms {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_TransformStart: usize = 0x1D0; // CParticleTransformInput
                pub const m_TransformEnd: usize = 0x230; // CParticleTransformInput
                pub const m_flInputMin: usize = 0x290; // CPerParticleFloatInput
                pub const m_flInputMax: usize = 0x3F8; // CPerParticleFloatInput
                pub const m_flOutputMin: usize = 0x560; // CPerParticleFloatInput
                pub const m_flOutputMax: usize = 0x6C8; // CPerParticleFloatInput
                pub const m_flMaxTraceLength: usize = 0x830; // float32
                pub const m_flLOSScale: usize = 0x834; // float32
                pub const m_CollisionGroupName: usize = 0x838; // char[128]
                pub const m_nTraceSet: usize = 0x8B8; // ParticleTraceSet_t
                pub const m_bLOS: usize = 0x8BC; // bool
                pub const m_nSetMethod: usize = 0x8C0; // ParticleSetMethod_t
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_DecayOffscreen {
                pub const m_flOffscreenTime: usize = 0x1C8; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_CreateSequentialPath {
                pub const m_fMaxDistance: usize = 0x1CC; // float32
                pub const m_flNumToAssign: usize = 0x1D0; // float32
                pub const m_bLoop: usize = 0x1D4; // bool
                pub const m_bCPPairs: usize = 0x1D5; // bool
                pub const m_bSaveOffset: usize = 0x1D6; // bool
                pub const m_PathParams: usize = 0x1E0; // CPathParameters
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_EndCapTimedDecay {
                pub const m_flDecayTime: usize = 0x1C8; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapDistanceToLineSegmentBase {
                pub const m_nCP0: usize = 0x1C8; // int32
                pub const m_nCP1: usize = 0x1CC; // int32
                pub const m_flMinInputValue: usize = 0x1D0; // float32
                pub const m_flMaxInputValue: usize = 0x1D4; // float32
                pub const m_bInfiniteLine: usize = 0x1D8; // bool
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_ContinuousEmitter {
                pub const m_flEmissionDuration: usize = 0x1D0; // CParticleCollectionFloatInput
                pub const m_flStartTime: usize = 0x338; // CParticleCollectionFloatInput
                pub const m_flEmitRate: usize = 0x4A0; // CParticleCollectionFloatInput
                pub const m_flEmissionScale: usize = 0x608; // float32
                pub const m_flScalePerParentParticle: usize = 0x60C; // float32
                pub const m_bInitFromKilledParentParticles: usize = 0x610; // bool
                pub const m_nEventType: usize = 0x614; // EventTypeSelection_t
                pub const m_nSnapshotControlPoint: usize = 0x618; // int32
                pub const m_strSnapshotSubset: usize = 0x620; // CUtlString
                pub const m_nLimitPerUpdate: usize = 0x628; // int32
                pub const m_bForceEmitOnFirstUpdate: usize = 0x62C; // bool
                pub const m_bForceEmitOnLastUpdate: usize = 0x62D; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_OscillateVectorSimple {
                pub const m_Rate: usize = 0x1C8; // Vector
                pub const m_Frequency: usize = 0x1D4; // Vector
                pub const m_nField: usize = 0x1E0; // ParticleAttributeIndex_t
                pub const m_flOscMult: usize = 0x1E4; // float32
                pub const m_flOscAdd: usize = 0x1E8; // float32
                pub const m_bOffset: usize = 0x1EC; // bool
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_SequenceLifeTime {
                pub const m_flFramerate: usize = 0x1CC; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_MoveBetweenPoints {
                pub const m_flSpeedMin: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_flSpeedMax: usize = 0x338; // CPerParticleFloatInput
                pub const m_flEndSpread: usize = 0x4A0; // CPerParticleFloatInput
                pub const m_flStartOffset: usize = 0x608; // CPerParticleFloatInput
                pub const m_flEndOffset: usize = 0x770; // CPerParticleFloatInput
                pub const m_nEndControlPointNumber: usize = 0x8D8; // int32
                pub const m_bTrailBias: usize = 0x8DC; // bool
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetUserEvent {
                pub const m_flInput: usize = 0x1C8; // CPerParticleFloatInput
                pub const m_flRisingEdge: usize = 0x330; // CPerParticleFloatInput
                pub const m_nRisingEventType: usize = 0x498; // EventTypeSelection_t
                pub const m_flFallingEdge: usize = 0x4A0; // CPerParticleFloatInput
                pub const m_nFallingEventType: usize = 0x608; // EventTypeSelection_t
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_QuantizeFloat {
                pub const m_InputValue: usize = 0x1C8; // CPerParticleFloatInput
                pub const m_nOutputField: usize = 0x330; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_BasicMovement {
                pub const m_Gravity: usize = 0x1C8; // CParticleCollectionVecInput
                pub const m_fDrag: usize = 0x858; // CParticleCollectionFloatInput
                pub const m_massControls: usize = 0x9C0; // CParticleMassCalculationParameters
                pub const m_nMaxConstraintPasses: usize = 0xE00; // int32
                pub const m_bUseNewCode: usize = 0xE04; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RandomNamedModelElement {
                pub const m_hModel: usize = 0x1D0; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_names: usize = 0x1D8; // CUtlVector<CUtlString>
                pub const m_bShuffle: usize = 0x1F0; // bool
                pub const m_bLinear: usize = 0x1F1; // bool
                pub const m_bModelFromRenderer: usize = 0x1F2; // bool
                pub const m_nFieldOutput: usize = 0x1F4; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_InitFromParentKilled {
                pub const m_nAttributeToCopy: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_nEventType: usize = 0x1D0; // EventTypeSelection_t
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_Callback {
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod CParticleFunction {
                pub const m_flOpStrength: usize = 0x8; // CParticleCollectionFloatInput
                pub const m_nOpEndCapState: usize = 0x170; // ParticleEndcapMode_t
                pub const m_flOpStartFadeInTime: usize = 0x174; // float32
                pub const m_flOpEndFadeInTime: usize = 0x178; // float32
                pub const m_flOpStartFadeOutTime: usize = 0x17C; // float32
                pub const m_flOpEndFadeOutTime: usize = 0x180; // float32
                pub const m_flOpFadeOscillatePeriod: usize = 0x184; // float32
                pub const m_bNormalizeToStopTime: usize = 0x188; // bool
                pub const m_flOpTimeOffsetMin: usize = 0x18C; // float32
                pub const m_flOpTimeOffsetMax: usize = 0x190; // float32
                pub const m_nOpTimeOffsetSeed: usize = 0x194; // int32
                pub const m_nOpTimeScaleSeed: usize = 0x198; // int32
                pub const m_flOpTimeScaleMin: usize = 0x19C; // float32
                pub const m_flOpTimeScaleMax: usize = 0x1A0; // float32
                pub const m_bDisableOperator: usize = 0x1A6; // bool
                pub const m_Notes: usize = 0x1A8; // CUtlString
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_GlobalLight {
                pub const m_flScale: usize = 0x1C8; // float32
                pub const m_bClampLowerRange: usize = 0x1CC; // bool
                pub const m_bClampUpperRange: usize = 0x1CD; // bool
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_OffsetVectorToVector {
                pub const m_nFieldInput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1D0; // ParticleAttributeIndex_t
                pub const m_vecOutputMin: usize = 0x1D4; // Vector
                pub const m_vecOutputMax: usize = 0x1E0; // Vector
                pub const m_randomnessParameters: usize = 0x1EC; // CRandomNumberGeneratorParameters
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetPerChildControlPointFromAttribute {
                pub const m_nChildGroupID: usize = 0x1C8; // int32
                pub const m_nFirstControlPoint: usize = 0x1CC; // int32
                pub const m_nNumControlPoints: usize = 0x1D0; // int32
                pub const m_nParticleIncrement: usize = 0x1D4; // int32
                pub const m_nFirstSourcePoint: usize = 0x1D8; // int32
                pub const m_bNumBasedOnParticleCount: usize = 0x1DC; // bool
                pub const m_nAttributeToRead: usize = 0x1E0; // ParticleAttributeIndex_t
                pub const m_nCPField: usize = 0x1E4; // int32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetParentControlPointsToChildCP {
                pub const m_nChildGroupID: usize = 0x1CC; // int32
                pub const m_nChildControlPoint: usize = 0x1D0; // int32
                pub const m_nNumControlPoints: usize = 0x1D4; // int32
                pub const m_nFirstSourcePoint: usize = 0x1D8; // int32
                pub const m_bSetOrientation: usize = 0x1DC; // bool
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_BoxConstraint {
                pub const m_vecMin: usize = 0x1C8; // CParticleCollectionVecInput
                pub const m_vecMax: usize = 0x858; // CParticleCollectionVecInput
                pub const m_nCP: usize = 0xEE8; // int32
                pub const m_bLocalSpace: usize = 0xEEC; // bool
                pub const m_bAccountForRadius: usize = 0xEED; // bool
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_CreatePhyllotaxis {
                pub const m_nControlPointNumber: usize = 0x1CC; // int32
                pub const m_nScaleCP: usize = 0x1D0; // int32
                pub const m_nComponent: usize = 0x1D4; // int32
                pub const m_fRadCentCore: usize = 0x1D8; // float32
                pub const m_fRadPerPoint: usize = 0x1DC; // float32
                pub const m_fRadPerPointTo: usize = 0x1E0; // float32
                pub const m_fpointAngle: usize = 0x1E4; // float32
                pub const m_fsizeOverall: usize = 0x1E8; // float32
                pub const m_fRadBias: usize = 0x1EC; // float32
                pub const m_fMinRad: usize = 0x1F0; // float32
                pub const m_fDistBias: usize = 0x1F4; // float32
                pub const m_bUseLocalCoords: usize = 0x1F8; // bool
                pub const m_bUseWithContEmit: usize = 0x1F9; // bool
                pub const m_bUseOrigRadius: usize = 0x1FA; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_AttractToControlPoint {
                pub const m_vecComponentScale: usize = 0x1D4; // Vector
                pub const m_fForceAmount: usize = 0x1E0; // CPerParticleFloatInput
                pub const m_fFalloffPower: usize = 0x348; // float32
                pub const m_TransformInput: usize = 0x350; // CParticleTransformInput
                pub const m_fForceAmountMin: usize = 0x3B0; // CPerParticleFloatInput
                pub const m_bApplyMinForce: usize = 0x518; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RandomLifeTime {
                pub const m_fLifetimeMin: usize = 0x1CC; // float32
                pub const m_fLifetimeMax: usize = 0x1D0; // float32
                pub const m_fLifetimeRandExponent: usize = 0x1D4; // float32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RemapParticleCountToNamedModelSequenceScalar {
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_VelocityRadialRandom {
                pub const m_bPerParticleCenter: usize = 0x1CC; // bool
                pub const m_nControlPointNumber: usize = 0x1D0; // int32
                pub const m_vecPosition: usize = 0x1D8; // CPerParticleVecInput
                pub const m_vecFwd: usize = 0x868; // CPerParticleVecInput
                pub const m_fSpeedMin: usize = 0xEF8; // CPerParticleFloatInput
                pub const m_fSpeedMax: usize = 0x1060; // CPerParticleFloatInput
                pub const m_vecLocalCoordinateSystemSpeedScale: usize = 0x11C8; // Vector
                pub const m_bIgnoreDelta: usize = 0x11D5; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RandomRadius {
                pub const m_flRadiusMin: usize = 0x1CC; // float32
                pub const m_flRadiusMax: usize = 0x1D0; // float32
                pub const m_flRadiusRandExponent: usize = 0x1D4; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_Orient2DRelToCP {
                pub const m_flRotOffset: usize = 0x1C8; // float32
                pub const m_flSpinStrength: usize = 0x1CC; // float32
                pub const m_nCP: usize = 0x1D0; // int32
                pub const m_nFieldOutput: usize = 0x1D4; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // ���x.
            pub mod TextureControls_t {
                pub const m_flFinalTextureScaleU: usize = 0x0; // CParticleCollectionRendererFloatInput
                pub const m_flFinalTextureScaleV: usize = 0x168; // CParticleCollectionRendererFloatInput
                pub const m_flFinalTextureOffsetU: usize = 0x2D0; // CParticleCollectionRendererFloatInput
                pub const m_flFinalTextureOffsetV: usize = 0x438; // CParticleCollectionRendererFloatInput
                pub const m_flFinalTextureUVRotation: usize = 0x5A0; // CParticleCollectionRendererFloatInput
                pub const m_flZoomScale: usize = 0x708; // CParticleCollectionRendererFloatInput
                pub const m_flDistortion: usize = 0x870; // CParticleCollectionRendererFloatInput
                pub const m_bRandomizeOffsets: usize = 0x9D8; // bool
                pub const m_bClampUVs: usize = 0x9D9; // bool
                pub const m_nPerParticleBlend: usize = 0x9DC; // SpriteCardPerParticleScale_t
                pub const m_nPerParticleScale: usize = 0x9E0; // SpriteCardPerParticleScale_t
                pub const m_nPerParticleOffsetU: usize = 0x9E4; // SpriteCardPerParticleScale_t
                pub const m_nPerParticleOffsetV: usize = 0x9E8; // SpriteCardPerParticleScale_t
                pub const m_nPerParticleRotation: usize = 0x9EC; // SpriteCardPerParticleScale_t
                pub const m_nPerParticleZoom: usize = 0x9F0; // SpriteCardPerParticleScale_t
                pub const m_nPerParticleDistortion: usize = 0x9F4; // SpriteCardPerParticleScale_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            pub mod ControlPointReference_t {
                pub const m_controlPointNameString: usize = 0x0; // int32
                pub const m_vOffsetFromControlPoint: usize = 0x4; // Vector
                pub const m_bOffsetInLocalSpace: usize = 0x10; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetControlPointToVectorExpression {
                pub const m_nExpression: usize = 0x1CC; // VectorExpressionType_t
                pub const m_nOutputCP: usize = 0x1D0; // int32
                pub const m_vInput1: usize = 0x1D8; // CParticleCollectionVecInput
                pub const m_vInput2: usize = 0x868; // CParticleCollectionVecInput
                pub const m_flLerp: usize = 0xEF8; // CPerParticleFloatInput
                pub const m_bNormalizedOutput: usize = 0x1060; // bool
            }
            // Parent: None
            // Fields count: 15
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_LightningSnapshotGenerator {
                pub const m_nCPSnapshot: usize = 0x1CC; // int32
                pub const m_nCPStartPnt: usize = 0x1D0; // int32
                pub const m_nCPEndPnt: usize = 0x1D4; // int32
                pub const m_flSegments: usize = 0x1D8; // CParticleCollectionFloatInput
                pub const m_flOffset: usize = 0x340; // CParticleCollectionFloatInput
                pub const m_flOffsetDecay: usize = 0x4A8; // CParticleCollectionFloatInput
                pub const m_flRecalcRate: usize = 0x610; // CParticleCollectionFloatInput
                pub const m_flUVScale: usize = 0x778; // CParticleCollectionFloatInput
                pub const m_flUVOffset: usize = 0x8E0; // CParticleCollectionFloatInput
                pub const m_flSplitRate: usize = 0xA48; // CParticleCollectionFloatInput
                pub const m_flBranchTwist: usize = 0xBB0; // CParticleCollectionFloatInput
                pub const m_nBranchBehavior: usize = 0xD18; // ParticleLightnintBranchBehavior_t
                pub const m_flRadiusStart: usize = 0xD20; // CParticleCollectionFloatInput
                pub const m_flRadiusEnd: usize = 0xE88; // CParticleCollectionFloatInput
                pub const m_flDedicatedPool: usize = 0xFF0; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapNamedModelMeshGroupOnceTimed {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RemapQAnglesToRotation {
                pub const m_TransformInput: usize = 0x1D0; // CParticleTransformInput
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_PositionWarp {
                pub const m_vecWarpMin: usize = 0x1D0; // CParticleCollectionVecInput
                pub const m_vecWarpMax: usize = 0x860; // CParticleCollectionVecInput
                pub const m_nScaleControlPointNumber: usize = 0xEF0; // int32
                pub const m_nControlPointNumber: usize = 0xEF4; // int32
                pub const m_nRadiusComponent: usize = 0xEF8; // int32
                pub const m_flWarpTime: usize = 0xEFC; // float32
                pub const m_flWarpStartTime: usize = 0xF00; // float32
                pub const m_flPrevPosScale: usize = 0xF04; // float32
                pub const m_bInvertWarp: usize = 0xF08; // bool
                pub const m_bUseCount: usize = 0xF09; // bool
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetControlPointFieldToScalarExpression {
                pub const m_nExpression: usize = 0x1CC; // ScalarExpressionType_t
                pub const m_flInput1: usize = 0x1D0; // CParticleCollectionFloatInput
                pub const m_flInput2: usize = 0x338; // CParticleCollectionFloatInput
                pub const m_flOutputRemap: usize = 0x4A0; // CParticleRemapFloatInput
                pub const m_nOutputCP: usize = 0x608; // int32
                pub const m_nOutVectorField: usize = 0x60C; // int32
                pub const m_flInterpolation: usize = 0x610; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_CreateParticleSystemRenderer {
                pub const m_hEffect: usize = 0x218; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_nEventType: usize = 0x220; // EventTypeSelection_t
                pub const m_vecCPs: usize = 0x228; // CUtlLeanVector<CPAssignment_t>
                pub const m_szParticleConfig: usize = 0x238; // CUtlString
                pub const m_AggregationPos: usize = 0x240; // CPerParticleVecInput
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod CParticleFunctionForce {
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RandomVectorComponent {
                pub const m_flMin: usize = 0x1CC; // float32
                pub const m_flMax: usize = 0x1D0; // float32
                pub const m_nFieldOutput: usize = 0x1D4; // ParticleAttributeIndex_t
                pub const m_nComponent: usize = 0x1D8; // int32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_InheritFromParentParticles {
                pub const m_flScale: usize = 0x1C8; // float32
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_nIncrement: usize = 0x1D0; // int32
                pub const m_bRandomDistribution: usize = 0x1D4; // bool
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_SetVectorAttributeToVectorExpression {
                pub const m_nExpression: usize = 0x1CC; // VectorExpressionType_t
                pub const m_vInput1: usize = 0x1D0; // CPerParticleVecInput
                pub const m_vInput2: usize = 0x860; // CPerParticleVecInput
                pub const m_flLerp: usize = 0xEF0; // CPerParticleFloatInput
                pub const m_nOutputField: usize = 0x1058; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x105C; // ParticleSetMethod_t
                pub const m_bNormalizedOutput: usize = 0x1060; // bool
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapTransformVisibilityToVector {
                pub const m_nSetMethod: usize = 0x1C8; // ParticleSetMethod_t
                pub const m_TransformInput: usize = 0x1D0; // CParticleTransformInput
                pub const m_nFieldOutput: usize = 0x230; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x234; // float32
                pub const m_flInputMax: usize = 0x238; // float32
                pub const m_vecOutputMin: usize = 0x23C; // Vector
                pub const m_vecOutputMax: usize = 0x248; // Vector
                pub const m_flRadius: usize = 0x254; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_DirectionBetweenVecsToVec {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_vecPoint1: usize = 0x1D0; // CPerParticleVecInput
                pub const m_vecPoint2: usize = 0x860; // CPerParticleVecInput
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_MovementLoopInsideSphere {
                pub const m_nCP: usize = 0x1C8; // int32
                pub const m_flDistance: usize = 0x1D0; // CParticleCollectionFloatInput
                pub const m_vecScale: usize = 0x338; // CParticleCollectionVecInput
                pub const m_nDistSqrAttr: usize = 0x9C8; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RenderSimpleModelCollection {
                pub const m_bCenterOffset: usize = 0x212; // bool
                pub const m_hModel: usize = 0x218; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_modelInput: usize = 0x220; // CParticleModelInput
                pub const m_fSizeCullScale: usize = 0x278; // CParticleCollectionFloatInput
                pub const m_bDisableShadows: usize = 0x3E0; // bool
                pub const m_bDisableMotionBlur: usize = 0x3E1; // bool
                pub const m_bAcceptsDecals: usize = 0x3E2; // bool
                pub const m_fDrawFilter: usize = 0x3E8; // CPerParticleFloatInput
                pub const m_nAngularVelocityField: usize = 0x550; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_QuantizeCPComponent {
                pub const m_flInputValue: usize = 0x1D0; // CParticleCollectionFloatInput
                pub const m_nCPOutput: usize = 0x338; // int32
                pub const m_nOutVectorField: usize = 0x33C; // int32
                pub const m_flQuantizeValue: usize = 0x340; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_PlayEndCapWhenFinished {
                pub const m_bFireOnEmissionEnd: usize = 0x1C9; // bool
                pub const m_bIncludeChildren: usize = 0x1CA; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_InitFloatCollection {
                pub const m_InputValue: usize = 0x1D0; // CParticleCollectionFloatInput
                pub const m_nOutputField: usize = 0x338; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            pub mod CPathParameters {
                pub const m_nStartControlPointNumber: usize = 0x0; // int32
                pub const m_nEndControlPointNumber: usize = 0x4; // int32
                pub const m_nBulgeControl: usize = 0x8; // int32
                pub const m_flBulge: usize = 0xC; // float32
                pub const m_flMidPoint: usize = 0x10; // float32
                pub const m_vStartPointOffset: usize = 0x14; // Vector
                pub const m_vMidPointOffset: usize = 0x20; // Vector
                pub const m_vEndOffset: usize = 0x2C; // Vector
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapScalarEndCap {
                pub const m_nFieldInput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1D0; // float32
                pub const m_flInputMax: usize = 0x1D4; // float32
                pub const m_flOutputMin: usize = 0x1D8; // float32
                pub const m_flOutputMax: usize = 0x1DC; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_CreateFromPlaneCache {
                pub const m_vecOffsetMin: usize = 0x1CC; // Vector
                pub const m_vecOffsetMax: usize = 0x1D8; // Vector
                pub const m_bUseNormal: usize = 0x1E5; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_LazyCullCompareFloat {
                pub const m_flComparsion1: usize = 0x1C8; // CPerParticleFloatInput
                pub const m_flComparsion2: usize = 0x330; // CPerParticleFloatInput
                pub const m_flCullTime: usize = 0x498; // CPerParticleFloatInput
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_ControlPointToRadialScreenSpace {
                pub const m_nCPIn: usize = 0x1CC; // int32
                pub const m_vecCP1Pos: usize = 0x1D0; // Vector
                pub const m_nCPOut: usize = 0x1DC; // int32
                pub const m_nCPOutField: usize = 0x1E0; // int32
                pub const m_nCPSSPosOut: usize = 0x1E4; // int32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SpinUpdate {
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_NormalOffset {
                pub const m_OffsetMin: usize = 0x1CC; // Vector
                pub const m_OffsetMax: usize = 0x1D8; // Vector
                pub const m_nControlPointNumber: usize = 0x1E4; // int32
                pub const m_bLocalCoords: usize = 0x1E8; // bool
                pub const m_bNormalize: usize = 0x1E9; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapDistanceToLineSegmentToVector {
                pub const m_nFieldOutput: usize = 0x1DC; // ParticleAttributeIndex_t
                pub const m_vMinOutputValue: usize = 0x1E0; // Vector
                pub const m_vMaxOutputValue: usize = 0x1EC; // Vector
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RenderAsModels {
                pub const m_ModelList: usize = 0x218; // CUtlVector<ModelReference_t>
                pub const m_flModelScale: usize = 0x234; // float32
                pub const m_bFitToModelSize: usize = 0x238; // bool
                pub const m_bNonUniformScaling: usize = 0x239; // bool
                pub const m_nXAxisScalingAttribute: usize = 0x23C; // ParticleAttributeIndex_t
                pub const m_nYAxisScalingAttribute: usize = 0x240; // ParticleAttributeIndex_t
                pub const m_nZAxisScalingAttribute: usize = 0x244; // ParticleAttributeIndex_t
                pub const m_nSizeCullBloat: usize = 0x248; // int32
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_CreationNoise {
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_bAbsVal: usize = 0x1D0; // bool
                pub const m_bAbsValInv: usize = 0x1D1; // bool
                pub const m_flOffset: usize = 0x1D4; // float32
                pub const m_flOutputMin: usize = 0x1D8; // float32
                pub const m_flOutputMax: usize = 0x1DC; // float32
                pub const m_flNoiseScale: usize = 0x1E0; // float32
                pub const m_flNoiseScaleLoc: usize = 0x1E4; // float32
                pub const m_vecOffsetLoc: usize = 0x1E8; // Vector
                pub const m_flWorldTimeScale: usize = 0x1F4; // float32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_Spin {
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_GameLiquidSpill {
                pub const m_flLiquidContentsField: usize = 0x218; // CParticleCollectionFloatInput
                pub const m_flExpirationTime: usize = 0x380; // CParticleCollectionFloatInput
                pub const m_nAmountAttribute: usize = 0x4E8; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_InstantaneousEmitter {
                pub const m_nParticlesToEmit: usize = 0x1D0; // CParticleCollectionFloatInput
                pub const m_flStartTime: usize = 0x338; // CParticleCollectionFloatInput
                pub const m_flInitFromKilledParentParticles: usize = 0x4A0; // float32
                pub const m_nEventType: usize = 0x4A4; // EventTypeSelection_t
                pub const m_flParentParticleScale: usize = 0x4A8; // CParticleCollectionFloatInput
                pub const m_nMaxEmittedPerFrame: usize = 0x610; // int32
                pub const m_nSnapshotControlPoint: usize = 0x614; // int32
                pub const m_strSnapshotSubset: usize = 0x618; // CUtlString
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_ConstrainLineLength {
                pub const m_flMinDistance: usize = 0x1C8; // float32
                pub const m_flMaxDistance: usize = 0x1CC; // float32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_LifespanFromVelocity {
                pub const m_vecComponentScale: usize = 0x1CC; // Vector
                pub const m_flTraceOffset: usize = 0x1D8; // float32
                pub const m_flMaxTraceLength: usize = 0x1DC; // float32
                pub const m_flTraceTolerance: usize = 0x1E0; // float32
                pub const m_nMaxPlanes: usize = 0x1E4; // int32
                pub const m_CollisionGroupName: usize = 0x1EC; // char[128]
                pub const m_nTraceSet: usize = 0x26C; // ParticleTraceSet_t
                pub const m_bIncludeWater: usize = 0x278; // bool
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod CBaseTrailRenderer {
                pub const m_nOrientationType: usize = 0x2CF8; // ParticleOrientationChoiceList_t
                pub const m_nOrientationControlPoint: usize = 0x2CFC; // int32
                pub const m_flMinSize: usize = 0x2D00; // float32
                pub const m_flMaxSize: usize = 0x2D04; // float32
                pub const m_flStartFadeSize: usize = 0x2D08; // CParticleCollectionRendererFloatInput
                pub const m_flEndFadeSize: usize = 0x2E70; // CParticleCollectionRendererFloatInput
                pub const m_bClampV: usize = 0x2FD8; // bool
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_VelocityFromCP {
                pub const m_velocityInput: usize = 0x1D0; // CParticleCollectionVecInput
                pub const m_transformInput: usize = 0x860; // CParticleTransformInput
                pub const m_flVelocityScale: usize = 0x8C0; // float32
                pub const m_bDirectionOnly: usize = 0x8C4; // bool
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetControlPointOrientation {
                pub const m_bUseWorldLocation: usize = 0x1C9; // bool
                pub const m_bRandomize: usize = 0x1CB; // bool
                pub const m_bSetOnce: usize = 0x1CC; // bool
                pub const m_nCP: usize = 0x1D0; // int32
                pub const m_nHeadLocation: usize = 0x1D4; // int32
                pub const m_vecRotation: usize = 0x1D8; // QAngle
                pub const m_vecRotationB: usize = 0x1E4; // QAngle
                pub const m_flInterpolation: usize = 0x1F0; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_MovementSkinnedPositionFromCPSnapshot {
                pub const m_nSnapshotControlPointNumber: usize = 0x1C8; // int32
                pub const m_nControlPointNumber: usize = 0x1CC; // int32
                pub const m_bRandom: usize = 0x1D0; // bool
                pub const m_nRandomSeed: usize = 0x1D4; // int32
                pub const m_bSetNormal: usize = 0x1D8; // bool
                pub const m_bSetRadius: usize = 0x1D9; // bool
                pub const m_nIndexType: usize = 0x1DC; // SnapshotIndexType_t
                pub const m_flReadIndex: usize = 0x1E0; // CPerParticleFloatInput
                pub const m_flIncrement: usize = 0x348; // CParticleCollectionFloatInput
                pub const m_nFullLoopIncrement: usize = 0x4B0; // CParticleCollectionFloatInput
                pub const m_nSnapShotStartPoint: usize = 0x618; // CParticleCollectionFloatInput
                pub const m_flInterpolation: usize = 0x780; // CPerParticleFloatInput
            }
            // Parent: None
            // Fields count: 15
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_OscillateVector {
                pub const m_RateMin: usize = 0x1C8; // Vector
                pub const m_RateMax: usize = 0x1D4; // Vector
                pub const m_FrequencyMin: usize = 0x1E0; // Vector
                pub const m_FrequencyMax: usize = 0x1EC; // Vector
                pub const m_nField: usize = 0x1F8; // ParticleAttributeIndex_t
                pub const m_bProportional: usize = 0x1FC; // bool
                pub const m_bProportionalOp: usize = 0x1FD; // bool
                pub const m_bOffset: usize = 0x1FE; // bool
                pub const m_flStartTime_min: usize = 0x200; // float32
                pub const m_flStartTime_max: usize = 0x204; // float32
                pub const m_flEndTime_min: usize = 0x208; // float32
                pub const m_flEndTime_max: usize = 0x20C; // float32
                pub const m_flOscMult: usize = 0x210; // CPerParticleFloatInput
                pub const m_flOscAdd: usize = 0x378; // CPerParticleFloatInput
                pub const m_flRateScale: usize = 0x4E0; // CPerParticleFloatInput
            }
            // Parent: None
            // Fields count: 15
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_PositionLock {
                pub const m_TransformInput: usize = 0x1C8; // CParticleTransformInput
                pub const m_flStartTime_min: usize = 0x228; // float32
                pub const m_flStartTime_max: usize = 0x22C; // float32
                pub const m_flStartTime_exp: usize = 0x230; // float32
                pub const m_flEndTime_min: usize = 0x234; // float32
                pub const m_flEndTime_max: usize = 0x238; // float32
                pub const m_flEndTime_exp: usize = 0x23C; // float32
                pub const m_flRange: usize = 0x240; // float32
                pub const m_flRangeBias: usize = 0x248; // CParticleCollectionFloatInput
                pub const m_flJumpThreshold: usize = 0x3B0; // float32
                pub const m_flPrevPosScale: usize = 0x3B4; // float32
                pub const m_bLockRot: usize = 0x3B8; // bool
                pub const m_vecScale: usize = 0x3C0; // CParticleCollectionVecInput
                pub const m_nFieldOutput: usize = 0xA50; // ParticleAttributeIndex_t
                pub const m_nFieldOutputPrev: usize = 0xA54; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RenderVRHapticEvent {
                pub const m_nHand: usize = 0x214; // ParticleVRHandChoiceList_t
                pub const m_nOutputHandCP: usize = 0x218; // int32
                pub const m_nOutputField: usize = 0x21C; // int32
                pub const m_flAmplitude: usize = 0x220; // CPerParticleFloatInput
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetControlPointToImpactPoint {
                pub const m_nCPOut: usize = 0x1CC; // int32
                pub const m_nCPIn: usize = 0x1D0; // int32
                pub const m_flUpdateRate: usize = 0x1D4; // float32
                pub const m_flTraceLength: usize = 0x1D8; // CParticleCollectionFloatInput
                pub const m_flStartOffset: usize = 0x340; // float32
                pub const m_flOffset: usize = 0x344; // float32
                pub const m_vecTraceDir: usize = 0x348; // Vector
                pub const m_CollisionGroupName: usize = 0x354; // char[128]
                pub const m_nTraceSet: usize = 0x3D4; // ParticleTraceSet_t
                pub const m_bSetToEndpoint: usize = 0x3D8; // bool
                pub const m_bTraceToClosestSurface: usize = 0x3D9; // bool
                pub const m_bIncludeWater: usize = 0x3DA; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_InterpolateRadius {
                pub const m_flStartTime: usize = 0x1C8; // float32
                pub const m_flEndTime: usize = 0x1CC; // float32
                pub const m_flStartScale: usize = 0x1D0; // float32
                pub const m_flEndScale: usize = 0x1D4; // float32
                pub const m_bEaseInAndOut: usize = 0x1D8; // bool
                pub const m_flBias: usize = 0x1DC; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_ReinitializeScalarEndCap {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_flOutputMin: usize = 0x1CC; // float32
                pub const m_flOutputMax: usize = 0x1D0; // float32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_TurbulenceForce {
                pub const m_flNoiseCoordScale0: usize = 0x1D4; // float32
                pub const m_flNoiseCoordScale1: usize = 0x1D8; // float32
                pub const m_flNoiseCoordScale2: usize = 0x1DC; // float32
                pub const m_flNoiseCoordScale3: usize = 0x1E0; // float32
                pub const m_vecNoiseAmount0: usize = 0x1E4; // Vector
                pub const m_vecNoiseAmount1: usize = 0x1F0; // Vector
                pub const m_vecNoiseAmount2: usize = 0x1FC; // Vector
                pub const m_vecNoiseAmount3: usize = 0x208; // Vector
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapNamedModelElementOnceTimed {
                pub const m_hModel: usize = 0x1C8; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_inNames: usize = 0x1D0; // CUtlVector<CUtlString>
                pub const m_outNames: usize = 0x1E8; // CUtlVector<CUtlString>
                pub const m_fallbackNames: usize = 0x200; // CUtlVector<CUtlString>
                pub const m_bModelFromRenderer: usize = 0x218; // bool
                pub const m_bProportional: usize = 0x219; // bool
                pub const m_nFieldInput: usize = 0x21C; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x220; // ParticleAttributeIndex_t
                pub const m_flRemapTime: usize = 0x224; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetControlPointToPlayer {
                pub const m_nCP1: usize = 0x1CC; // int32
                pub const m_vecCP1Pos: usize = 0x1D0; // Vector
                pub const m_bOrientToEyes: usize = 0x1DC; // bool
                pub const m_nPosition: usize = 0x1E0; // ParticleEntityPos_t
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_EndCapTimedFreeze {
                pub const m_flFreezeTime: usize = 0x1C8; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RenderGpuImplicit {
                pub const m_bUsePerParticleRadius: usize = 0x212; // bool
                pub const m_nVertexCountKb: usize = 0x214; // uint32
                pub const m_nIndexCountKb: usize = 0x218; // uint32
                pub const m_fGridSize: usize = 0x220; // CParticleCollectionRendererFloatInput
                pub const m_fRadiusScale: usize = 0x388; // CParticleCollectionRendererFloatInput
                pub const m_fIsosurfaceThreshold: usize = 0x4F0; // CParticleCollectionRendererFloatInput
                pub const m_nScaleCP: usize = 0x658; // int32
                pub const m_hMaterial: usize = 0x660; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetRandomControlPointPosition {
                pub const m_bUseWorldLocation: usize = 0x1C9; // bool
                pub const m_bOrient: usize = 0x1CA; // bool
                pub const m_nCP1: usize = 0x1CC; // int32
                pub const m_nHeadLocation: usize = 0x1D0; // int32
                pub const m_flReRandomRate: usize = 0x1D8; // CParticleCollectionFloatInput
                pub const m_vecCPMinPos: usize = 0x340; // Vector
                pub const m_vecCPMaxPos: usize = 0x34C; // Vector
                pub const m_flInterpolation: usize = 0x358; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapTransformVisibilityToScalar {
                pub const m_nSetMethod: usize = 0x1C8; // ParticleSetMethod_t
                pub const m_TransformInput: usize = 0x1D0; // CParticleTransformInput
                pub const m_nFieldOutput: usize = 0x230; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x234; // float32
                pub const m_flInputMax: usize = 0x238; // float32
                pub const m_flOutputMin: usize = 0x23C; // float32
                pub const m_flOutputMax: usize = 0x240; // float32
                pub const m_flRadius: usize = 0x244; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapControlPointDirectionToVector {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_flScale: usize = 0x1CC; // float32
                pub const m_nControlPointNumber: usize = 0x1D0; // int32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_ScreenSpacePositionOfTarget {
                pub const m_vecTargetPosition: usize = 0x1C8; // CPerParticleVecInput
                pub const m_bOututBehindness: usize = 0x858; // bool
                pub const m_nBehindFieldOutput: usize = 0x85C; // ParticleAttributeIndex_t
                pub const m_flBehindOutputRemap: usize = 0x860; // CParticleRemapFloatInput
                pub const m_nBehindSetMethod: usize = 0x9C8; // ParticleSetMethod_t
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod CParticleFunctionOperator {
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_DragRelativeToPlane {
                pub const m_flDragAtPlane: usize = 0x1C8; // CParticleCollectionFloatInput
                pub const m_flFalloff: usize = 0x330; // CParticleCollectionFloatInput
                pub const m_bDirectional: usize = 0x498; // bool
                pub const m_vecPlaneNormal: usize = 0x4A0; // CParticleCollectionVecInput
                pub const m_nControlPointNumber: usize = 0xB30; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetCPtoVector {
                pub const m_nCPInput: usize = 0x1C8; // int32
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RandomYaw {
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SnapshotRigidSkinToBones {
                pub const m_bTransformNormals: usize = 0x1C8; // bool
                pub const m_bTransformRadii: usize = 0x1C9; // bool
                pub const m_nControlPointNumber: usize = 0x1CC; // int32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetSingleControlPointPosition {
                pub const m_bSetOnce: usize = 0x1C9; // bool
                pub const m_nCP1: usize = 0x1CC; // int32
                pub const m_vecCP1Pos: usize = 0x1D0; // CParticleCollectionVecInput
                pub const m_transformInput: usize = 0x860; // CParticleTransformInput
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_DistanceToNeighborCull {
                pub const m_flDistance: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_bIncludeRadii: usize = 0x338; // bool
                pub const m_flLifespanOverlap: usize = 0x340; // CPerParticleFloatInput
                pub const m_nFieldModify: usize = 0x4A8; // ParticleAttributeIndex_t
                pub const m_flModify: usize = 0x4B0; // CPerParticleFloatInput
                pub const m_nSetMethod: usize = 0x618; // ParticleSetMethod_t
                pub const m_bUseNeighbor: usize = 0x61C; // bool
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapCPtoScalar {
                pub const m_nCPInput: usize = 0x1C8; // int32
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_nField: usize = 0x1D0; // int32
                pub const m_flInputMin: usize = 0x1D4; // float32
                pub const m_flInputMax: usize = 0x1D8; // float32
                pub const m_flOutputMin: usize = 0x1DC; // float32
                pub const m_flOutputMax: usize = 0x1E0; // float32
                pub const m_flStartTime: usize = 0x1E4; // float32
                pub const m_flEndTime: usize = 0x1E8; // float32
                pub const m_flInterpRate: usize = 0x1EC; // float32
                pub const m_nSetMethod: usize = 0x1F0; // ParticleSetMethod_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod CParticleFunctionRenderer {
                pub const VisibilityInputs: usize = 0x1C8; // CParticleVisibilityInputs
                pub const m_bCannotBeRefracted: usize = 0x210; // bool
                pub const m_bSkipRenderingOnMobile: usize = 0x211; // bool
            }
            // Parent: None
            // Fields count: 65
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod CParticleSystemDefinition {
                pub const m_nBehaviorVersion: usize = 0x8; // int32
                pub const m_PreEmissionOperators: usize = 0x10; // CUtlVector<CParticleFunctionPreEmission*>
                pub const m_Emitters: usize = 0x28; // CUtlVector<CParticleFunctionEmitter*>
                pub const m_Initializers: usize = 0x40; // CUtlVector<CParticleFunctionInitializer*>
                pub const m_Operators: usize = 0x58; // CUtlVector<CParticleFunctionOperator*>
                pub const m_ForceGenerators: usize = 0x70; // CUtlVector<CParticleFunctionForce*>
                pub const m_Constraints: usize = 0x88; // CUtlVector<CParticleFunctionConstraint*>
                pub const m_Renderers: usize = 0xA0; // CUtlVector<CParticleFunctionRenderer*>
                pub const m_Children: usize = 0xB8; // CUtlVector<ParticleChildrenInfo_t>
                pub const m_nFirstMultipleOverride_BackwardCompat: usize = 0x178; // int32
                pub const m_nInitialParticles: usize = 0x258; // int32
                pub const m_nMaxParticles: usize = 0x25C; // int32
                pub const m_nGroupID: usize = 0x260; // int32
                pub const m_BoundingBoxMin: usize = 0x264; // Vector
                pub const m_BoundingBoxMax: usize = 0x270; // Vector
                pub const m_flDepthSortBias: usize = 0x27C; // float32
                pub const m_nSortOverridePositionCP: usize = 0x280; // int32
                pub const m_bInfiniteBounds: usize = 0x284; // bool
                pub const m_bEnableNamedValues: usize = 0x285; // bool
                pub const m_NamedValueDomain: usize = 0x288; // CUtlString
                pub const m_NamedValueLocals: usize = 0x290; // CUtlVector<ParticleNamedValueSource_t*>
                pub const m_ConstantColor: usize = 0x2A8; // Color
                pub const m_ConstantNormal: usize = 0x2AC; // Vector
                pub const m_flConstantRadius: usize = 0x2B8; // float32
                pub const m_flConstantRotation: usize = 0x2BC; // float32
                pub const m_flConstantRotationSpeed: usize = 0x2C0; // float32
                pub const m_flConstantLifespan: usize = 0x2C4; // float32
                pub const m_nConstantSequenceNumber: usize = 0x2C8; // int32
                pub const m_nConstantSequenceNumber1: usize = 0x2CC; // int32
                pub const m_nSnapshotControlPoint: usize = 0x2D0; // int32
                pub const m_hSnapshot: usize = 0x2D8; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                pub const m_pszCullReplacementName: usize = 0x2E0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_flCullRadius: usize = 0x2E8; // float32
                pub const m_flCullFillCost: usize = 0x2EC; // float32
                pub const m_nCullControlPoint: usize = 0x2F0; // int32
                pub const m_hFallback: usize = 0x2F8; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_nFallbackMaxCount: usize = 0x300; // int32
                pub const m_hLowViolenceDef: usize = 0x308; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_hReferenceReplacement: usize = 0x310; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_flPreSimulationTime: usize = 0x318; // float32
                pub const m_flStopSimulationAfterTime: usize = 0x31C; // float32
                pub const m_flMaximumTimeStep: usize = 0x320; // float32
                pub const m_flMaximumSimTime: usize = 0x324; // float32
                pub const m_flMinimumSimTime: usize = 0x328; // float32
                pub const m_flMinimumTimeStep: usize = 0x32C; // float32
                pub const m_nMinimumFrames: usize = 0x330; // int32
                pub const m_nMinCPULevel: usize = 0x334; // int32
                pub const m_nMinGPULevel: usize = 0x338; // int32
                pub const m_flNoDrawTimeToGoToSleep: usize = 0x33C; // float32
                pub const m_flMaxDrawDistance: usize = 0x340; // float32
                pub const m_flStartFadeDistance: usize = 0x344; // float32
                pub const m_flMaxCreationDistance: usize = 0x348; // float32
                pub const m_nAggregationMinAvailableParticles: usize = 0x34C; // int32
                pub const m_flAggregateRadius: usize = 0x350; // float32
                pub const m_bShouldBatch: usize = 0x354; // bool
                pub const m_bShouldHitboxesFallbackToRenderBounds: usize = 0x355; // bool
                pub const m_bShouldHitboxesFallbackToSnapshot: usize = 0x356; // bool
                pub const m_bShouldHitboxesFallbackToCollisionHulls: usize = 0x357; // bool
                pub const m_nViewModelEffect: usize = 0x358; // InheritableBoolType_t
                pub const m_bScreenSpaceEffect: usize = 0x35C; // bool
                pub const m_pszTargetLayerID: usize = 0x360; // CUtlSymbolLarge
                pub const m_nSkipRenderControlPoint: usize = 0x368; // int32
                pub const m_nAllowRenderControlPoint: usize = 0x36C; // int32
                pub const m_bShouldSort: usize = 0x370; // bool
                pub const m_controlPointConfigurations: usize = 0x3B8; // CUtlVector<ParticleControlPointConfiguration_t>
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapNamedModelMeshGroupEndCap {
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_PercentageBetweenTransformsVector {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1CC; // float32
                pub const m_flInputMax: usize = 0x1D0; // float32
                pub const m_vecOutputMin: usize = 0x1D4; // Vector
                pub const m_vecOutputMax: usize = 0x1E0; // Vector
                pub const m_TransformStart: usize = 0x1F0; // CParticleTransformInput
                pub const m_TransformEnd: usize = 0x250; // CParticleTransformInput
                pub const m_nSetMethod: usize = 0x2B0; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x2B4; // bool
                pub const m_bRadialCheck: usize = 0x2B5; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RenderScreenVelocityRotate {
                pub const m_flRotateRateDegrees: usize = 0x214; // float32
                pub const m_flForwardDegrees: usize = 0x218; // float32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_UpdateLightSource {
                pub const m_vColorTint: usize = 0x1C8; // Color
                pub const m_flBrightnessScale: usize = 0x1CC; // float32
                pub const m_flRadiusScale: usize = 0x1D0; // float32
                pub const m_flMinimumLightingRadius: usize = 0x1D4; // float32
                pub const m_flMaximumLightingRadius: usize = 0x1D8; // float32
                pub const m_flPositionDampingConstant: usize = 0x1DC; // float32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_CreateWithinBox {
                pub const m_vecMin: usize = 0x1D0; // CPerParticleVecInput
                pub const m_vecMax: usize = 0x860; // CPerParticleVecInput
                pub const m_nControlPointNumber: usize = 0xEF0; // int32
                pub const m_bLocalSpace: usize = 0xEF4; // bool
                pub const m_randomnessParameters: usize = 0xEF8; // CRandomNumberGeneratorParameters
                pub const m_bUseNewCode: usize = 0xF00; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_ChooseRandomChildrenInGroup {
                pub const m_nChildGroupID: usize = 0x1CC; // int32
                pub const m_flNumberOfChildren: usize = 0x1D0; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Fields count: 33
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_ControlpointLight {
                pub const m_flScale: usize = 0x1C8; // float32
                pub const m_nControlPoint1: usize = 0x650; // int32
                pub const m_nControlPoint2: usize = 0x654; // int32
                pub const m_nControlPoint3: usize = 0x658; // int32
                pub const m_nControlPoint4: usize = 0x65C; // int32
                pub const m_vecCPOffset1: usize = 0x660; // Vector
                pub const m_vecCPOffset2: usize = 0x66C; // Vector
                pub const m_vecCPOffset3: usize = 0x678; // Vector
                pub const m_vecCPOffset4: usize = 0x684; // Vector
                pub const m_LightFiftyDist1: usize = 0x690; // float32
                pub const m_LightZeroDist1: usize = 0x694; // float32
                pub const m_LightFiftyDist2: usize = 0x698; // float32
                pub const m_LightZeroDist2: usize = 0x69C; // float32
                pub const m_LightFiftyDist3: usize = 0x6A0; // float32
                pub const m_LightZeroDist3: usize = 0x6A4; // float32
                pub const m_LightFiftyDist4: usize = 0x6A8; // float32
                pub const m_LightZeroDist4: usize = 0x6AC; // float32
                pub const m_LightColor1: usize = 0x6B0; // Color
                pub const m_LightColor2: usize = 0x6B4; // Color
                pub const m_LightColor3: usize = 0x6B8; // Color
                pub const m_LightColor4: usize = 0x6BC; // Color
                pub const m_bLightType1: usize = 0x6C0; // bool
                pub const m_bLightType2: usize = 0x6C1; // bool
                pub const m_bLightType3: usize = 0x6C2; // bool
                pub const m_bLightType4: usize = 0x6C3; // bool
                pub const m_bLightDynamic1: usize = 0x6C4; // bool
                pub const m_bLightDynamic2: usize = 0x6C5; // bool
                pub const m_bLightDynamic3: usize = 0x6C6; // bool
                pub const m_bLightDynamic4: usize = 0x6C7; // bool
                pub const m_bUseNormal: usize = 0x6C8; // bool
                pub const m_bUseHLambert: usize = 0x6C9; // bool
                pub const m_bClampLowerRange: usize = 0x6CE; // bool
                pub const m_bClampUpperRange: usize = 0x6CF; // bool
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_VectorFieldSnapshot {
                pub const m_nControlPointNumber: usize = 0x1C8; // int32
                pub const m_nAttributeToWrite: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_nLocalSpaceCP: usize = 0x1D0; // int32
                pub const m_flInterpolation: usize = 0x1D8; // CPerParticleFloatInput
                pub const m_vecScale: usize = 0x340; // CPerParticleVecInput
                pub const m_flBoundaryDampening: usize = 0x9D0; // float32
                pub const m_bSetVelocity: usize = 0x9D4; // bool
                pub const m_bLockToSurface: usize = 0x9D5; // bool
                pub const m_flGridSpacing: usize = 0x9D8; // float32
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_CylindricalDistanceToTransform {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_flInputMax: usize = 0x338; // CPerParticleFloatInput
                pub const m_flOutputMin: usize = 0x4A0; // CPerParticleFloatInput
                pub const m_flOutputMax: usize = 0x608; // CPerParticleFloatInput
                pub const m_TransformStart: usize = 0x770; // CParticleTransformInput
                pub const m_TransformEnd: usize = 0x7D0; // CParticleTransformInput
                pub const m_nSetMethod: usize = 0x830; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x834; // bool
                pub const m_bAdditive: usize = 0x835; // bool
                pub const m_bCapsule: usize = 0x836; // bool
            }
            // Parent: None
            // Fields count: 15
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_PositionPlaceOnGround {
                pub const m_flOffset: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_flMaxTraceLength: usize = 0x338; // CPerParticleFloatInput
                pub const m_CollisionGroupName: usize = 0x4A0; // char[128]
                pub const m_nTraceSet: usize = 0x520; // ParticleTraceSet_t
                pub const m_nTraceMissBehavior: usize = 0x530; // ParticleTraceMissBehavior_t
                pub const m_bIncludeWater: usize = 0x534; // bool
                pub const m_bSetNormal: usize = 0x535; // bool
                pub const m_nAttribute: usize = 0x538; // ParticleAttributeIndex_t
                pub const m_bSetPXYZOnly: usize = 0x53C; // bool
                pub const m_bTraceAlongNormal: usize = 0x53D; // bool
                pub const m_nTraceDirectionAttribute: usize = 0x540; // ParticleAttributeIndex_t
                pub const m_bOffsetonColOnly: usize = 0x544; // bool
                pub const m_flOffsetByRadiusFactor: usize = 0x548; // float32
                pub const m_nPreserveOffsetCP: usize = 0x54C; // int32
                pub const m_nIgnoreCP: usize = 0x550; // int32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RandomScalar {
                pub const m_flMin: usize = 0x1CC; // float32
                pub const m_flMax: usize = 0x1D0; // float32
                pub const m_flExponent: usize = 0x1D4; // float32
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RenderPostProcessing {
                pub const m_flPostProcessStrength: usize = 0x218; // CPerParticleFloatInput
                pub const m_hPostTexture: usize = 0x380; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
                pub const m_nPriority: usize = 0x388; // ParticlePostProcessPriorityGroup_t
            }
            // Parent: None
            // Fields count: 27
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_WorldTraceConstraint {
                pub const m_nCP: usize = 0x1C8; // int32
                pub const m_vecCpOffset: usize = 0x1CC; // Vector
                pub const m_nCollisionMode: usize = 0x1D8; // ParticleCollisionMode_t
                pub const m_nCollisionModeMin: usize = 0x1DC; // ParticleCollisionMode_t
                pub const m_nTraceSet: usize = 0x1E0; // ParticleTraceSet_t
                pub const m_CollisionGroupName: usize = 0x1E4; // char[128]
                pub const m_bWorldOnly: usize = 0x264; // bool
                pub const m_bBrushOnly: usize = 0x265; // bool
                pub const m_bIncludeWater: usize = 0x266; // bool
                pub const m_nIgnoreCP: usize = 0x268; // int32
                pub const m_flCpMovementTolerance: usize = 0x26C; // float32
                pub const m_flRetestRate: usize = 0x270; // float32
                pub const m_flTraceTolerance: usize = 0x274; // float32
                pub const m_flCollisionConfirmationSpeed: usize = 0x278; // float32
                pub const m_nMaxTracesPerFrame: usize = 0x27C; // float32
                pub const m_flRadiusScale: usize = 0x280; // CPerParticleFloatInput
                pub const m_flBounceAmount: usize = 0x3E8; // CPerParticleFloatInput
                pub const m_flSlideAmount: usize = 0x550; // CPerParticleFloatInput
                pub const m_flRandomDirScale: usize = 0x6B8; // CPerParticleFloatInput
                pub const m_bDecayBounce: usize = 0x820; // bool
                pub const m_bKillonContact: usize = 0x821; // bool
                pub const m_flMinSpeed: usize = 0x824; // float32
                pub const m_bSetNormal: usize = 0x828; // bool
                pub const m_nStickOnCollisionField: usize = 0x82C; // ParticleAttributeIndex_t
                pub const m_flStopSpeed: usize = 0x830; // CPerParticleFloatInput
                pub const m_nEntityStickDataField: usize = 0x998; // ParticleAttributeIndex_t
                pub const m_nEntityStickNormalField: usize = 0x99C; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RenderBlobs {
                pub const m_cubeWidth: usize = 0x218; // CParticleCollectionRendererFloatInput
                pub const m_cutoffRadius: usize = 0x380; // CParticleCollectionRendererFloatInput
                pub const m_renderRadius: usize = 0x4E8; // CParticleCollectionRendererFloatInput
                pub const m_nVertexCountKb: usize = 0x650; // uint32
                pub const m_nIndexCountKb: usize = 0x654; // uint32
                pub const m_nScaleCP: usize = 0x658; // int32
                pub const m_MaterialVars: usize = 0x660; // CUtlVector<MaterialVariable_t>
                pub const m_hMaterial: usize = 0x690; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Fields count: 13
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_OscillateScalar {
                pub const m_RateMin: usize = 0x1C8; // float32
                pub const m_RateMax: usize = 0x1CC; // float32
                pub const m_FrequencyMin: usize = 0x1D0; // float32
                pub const m_FrequencyMax: usize = 0x1D4; // float32
                pub const m_nField: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_bProportional: usize = 0x1DC; // bool
                pub const m_bProportionalOp: usize = 0x1DD; // bool
                pub const m_flStartTime_min: usize = 0x1E0; // float32
                pub const m_flStartTime_max: usize = 0x1E4; // float32
                pub const m_flEndTime_min: usize = 0x1E8; // float32
                pub const m_flEndTime_max: usize = 0x1EC; // float32
                pub const m_flOscMult: usize = 0x1F0; // float32
                pub const m_flOscAdd: usize = 0x1F4; // float32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_FadeOut {
                pub const m_flFadeOutTimeMin: usize = 0x1C8; // float32
                pub const m_flFadeOutTimeMax: usize = 0x1CC; // float32
                pub const m_flFadeOutTimeExp: usize = 0x1D0; // float32
                pub const m_flFadeBias: usize = 0x1D4; // float32
                pub const m_bProportional: usize = 0x210; // bool
                pub const m_bEaseInAndOut: usize = 0x211; // bool
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_WaterImpulseRenderer {
                pub const m_vecPos: usize = 0x218; // CPerParticleVecInput
                pub const m_flRadius: usize = 0x8A8; // CPerParticleFloatInput
                pub const m_flMagnitude: usize = 0xA10; // CPerParticleFloatInput
                pub const m_flShape: usize = 0xB78; // CPerParticleFloatInput
                pub const m_flWindSpeed: usize = 0xCE0; // CPerParticleFloatInput
                pub const m_flWobble: usize = 0xE48; // CPerParticleFloatInput
                pub const m_bIsRadialWind: usize = 0xFB0; // bool
                pub const m_nEventType: usize = 0xFB4; // EventTypeSelection_t
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RandomSequence {
                pub const m_nSequenceMin: usize = 0x1CC; // int32
                pub const m_nSequenceMax: usize = 0x1D0; // int32
                pub const m_bShuffle: usize = 0x1D4; // bool
                pub const m_bLinear: usize = 0x1D5; // bool
                pub const m_WeightedList: usize = 0x1D8; // CUtlVector<SequenceWeightedList_t>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RampScalarSplineSimple {
                pub const m_Rate: usize = 0x1C8; // float32
                pub const m_flStartTime: usize = 0x1CC; // float32
                pub const m_flEndTime: usize = 0x1D0; // float32
                pub const m_nField: usize = 0x200; // ParticleAttributeIndex_t
                pub const m_bEaseOut: usize = 0x204; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_DistanceCull {
                pub const m_nControlPoint: usize = 0x1CC; // int32
                pub const m_flDistance: usize = 0x1D0; // CParticleCollectionFloatInput
                pub const m_bCullInside: usize = 0x338; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_CollideWithParentParticles {
                pub const m_flParentRadiusScale: usize = 0x1C8; // CPerParticleFloatInput
                pub const m_flRadiusScale: usize = 0x330; // CPerParticleFloatInput
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_InitFromVectorFieldSnapshot {
                pub const m_nControlPointNumber: usize = 0x1CC; // int32
                pub const m_nLocalSpaceCP: usize = 0x1D0; // int32
                pub const m_nWeightUpdateCP: usize = 0x1D4; // int32
                pub const m_bUseVerticalVelocity: usize = 0x1D8; // bool
                pub const m_vecScale: usize = 0x1E0; // CPerParticleVecInput
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetVectorAttributeToVectorExpression {
                pub const m_nExpression: usize = 0x1C8; // VectorExpressionType_t
                pub const m_vInput1: usize = 0x1D0; // CPerParticleVecInput
                pub const m_vInput2: usize = 0x860; // CPerParticleVecInput
                pub const m_flLerp: usize = 0xEF0; // CPerParticleFloatInput
                pub const m_nOutputField: usize = 0x1058; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x105C; // ParticleSetMethod_t
                pub const m_bNormalizedOutput: usize = 0x1060; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_AddVectorToVector {
                pub const m_vecScale: usize = 0x1CC; // Vector
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_nFieldInput: usize = 0x1DC; // ParticleAttributeIndex_t
                pub const m_vOffsetMin: usize = 0x1E0; // Vector
                pub const m_vOffsetMax: usize = 0x1EC; // Vector
                pub const m_randomnessParameters: usize = 0x1F8; // CRandomNumberGeneratorParameters
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RemapInitialVisibilityScalar {
                pub const m_nFieldOutput: usize = 0x1D0; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1D4; // float32
                pub const m_flInputMax: usize = 0x1D8; // float32
                pub const m_flOutputMin: usize = 0x1DC; // float32
                pub const m_flOutputMax: usize = 0x1E0; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapTransformOrientationToYaw {
                pub const m_TransformInput: usize = 0x1C8; // CParticleTransformInput
                pub const m_nFieldOutput: usize = 0x228; // ParticleAttributeIndex_t
                pub const m_flRotOffset: usize = 0x22C; // float32
                pub const m_flSpinStrength: usize = 0x230; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RenderStatusEffect {
                pub const m_pTextureColorWarp: usize = 0x218; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureDetail2: usize = 0x220; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureDiffuseWarp: usize = 0x228; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureFresnelColorWarp: usize = 0x230; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureFresnelWarp: usize = 0x238; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureSpecularWarp: usize = 0x240; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureEnvMap: usize = 0x248; // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RandomForce {
                pub const m_MinForce: usize = 0x1D4; // Vector
                pub const m_MaxForce: usize = 0x1E0; // Vector
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapParticleCountOnScalarEndCap {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_nInputMin: usize = 0x1CC; // int32
                pub const m_nInputMax: usize = 0x1D0; // int32
                pub const m_flOutputMin: usize = 0x1D4; // float32
                pub const m_flOutputMax: usize = 0x1D8; // float32
                pub const m_bBackwards: usize = 0x1DC; // bool
                pub const m_nSetMethod: usize = 0x1E0; // ParticleSetMethod_t
            }
            // Parent: None
            // Fields count: 17
            //
            // Metadata:
            // ���x.
            pub mod ParticlePreviewState_t {
                pub const m_previewModel: usize = 0x0; // CUtlString
                pub const m_nModSpecificData: usize = 0x8; // uint32
                pub const m_groundType: usize = 0xC; // PetGroundType_t
                pub const m_sequenceName: usize = 0x10; // CUtlString
                pub const m_nFireParticleOnSequenceFrame: usize = 0x18; // int32
                pub const m_hitboxSetName: usize = 0x20; // CUtlString
                pub const m_materialGroupName: usize = 0x28; // CUtlString
                pub const m_vecBodyGroups: usize = 0x30; // CUtlVector<ParticlePreviewBodyGroup_t>
                pub const m_flPlaybackSpeed: usize = 0x48; // float32
                pub const m_flParticleSimulationRate: usize = 0x4C; // float32
                pub const m_bShouldDrawHitboxes: usize = 0x50; // bool
                pub const m_bShouldDrawAttachments: usize = 0x51; // bool
                pub const m_bShouldDrawAttachmentNames: usize = 0x52; // bool
                pub const m_bShouldDrawControlPointAxes: usize = 0x53; // bool
                pub const m_bAnimationNonLooping: usize = 0x54; // bool
                pub const m_bSequenceNameIsAnimClipPath: usize = 0x55; // bool
                pub const m_vecPreviewGravity: usize = 0x58; // Vector
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_LocalAccelerationForce {
                pub const m_nCP: usize = 0x1D4; // int32
                pub const m_nScaleCP: usize = 0x1D8; // int32
                pub const m_vecAccel: usize = 0x1E0; // CParticleCollectionVecInput
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_ModelCull {
                pub const m_nControlPointNumber: usize = 0x1C8; // int32
                pub const m_bBoundBox: usize = 0x1CC; // bool
                pub const m_bCullOutside: usize = 0x1CD; // bool
                pub const m_bUseBones: usize = 0x1CE; // bool
                pub const m_HitboxSetName: usize = 0x1CF; // char[128]
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetFloat {
                pub const m_InputValue: usize = 0x1C8; // CPerParticleFloatInput
                pub const m_nOutputField: usize = 0x330; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x334; // ParticleSetMethod_t
                pub const m_Lerp: usize = 0x338; // CPerParticleFloatInput
            }
            // Parent: None
            // Fields count: 13
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RemapTransformToVector {
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_vInputMin: usize = 0x1D0; // Vector
                pub const m_vInputMax: usize = 0x1DC; // Vector
                pub const m_vOutputMin: usize = 0x1E8; // Vector
                pub const m_vOutputMax: usize = 0x1F4; // Vector
                pub const m_TransformInput: usize = 0x200; // CParticleTransformInput
                pub const m_LocalSpaceTransform: usize = 0x260; // CParticleTransformInput
                pub const m_flStartTime: usize = 0x2C0; // float32
                pub const m_flEndTime: usize = 0x2C4; // float32
                pub const m_nSetMethod: usize = 0x2C8; // ParticleSetMethod_t
                pub const m_bOffset: usize = 0x2CC; // bool
                pub const m_bAccelerate: usize = 0x2CD; // bool
                pub const m_flRemapBias: usize = 0x2D0; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_ScreenSpaceDistanceToEdge {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_flMaxDistFromEdge: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_flOutputRemap: usize = 0x338; // CParticleRemapFloatInput
                pub const m_nSetMethod: usize = 0x4A0; // ParticleSetMethod_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapDistanceToLineSegmentToScalar {
                pub const m_nFieldOutput: usize = 0x1DC; // ParticleAttributeIndex_t
                pub const m_flMinOutputValue: usize = 0x1E0; // float32
                pub const m_flMaxOutputValue: usize = 0x1E4; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapVectortoCP {
                pub const m_nOutControlPointNumber: usize = 0x1C8; // int32
                pub const m_nFieldInput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_nParticleNumber: usize = 0x1D0; // int32
            }
            // Parent: None
            // Fields count: 13
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetFromCPSnapshot {
                pub const m_nControlPointNumber: usize = 0x1C8; // int32
                pub const m_strSnapshotSubset: usize = 0x1D0; // CUtlString
                pub const m_nAttributeToRead: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_nAttributeToWrite: usize = 0x1DC; // ParticleAttributeIndex_t
                pub const m_nLocalSpaceCP: usize = 0x1E0; // int32
                pub const m_bRandom: usize = 0x1E4; // bool
                pub const m_bReverse: usize = 0x1E5; // bool
                pub const m_nRandomSeed: usize = 0x1E8; // int32
                pub const m_nSnapShotStartPoint: usize = 0x1F0; // CParticleCollectionFloatInput
                pub const m_nSnapShotIncrement: usize = 0x358; // CParticleCollectionFloatInput
                pub const m_flInterpolation: usize = 0x4C0; // CPerParticleFloatInput
                pub const m_bSubSample: usize = 0x628; // bool
                pub const m_bPrev: usize = 0x629; // bool
            }
            // Parent: None
            // Fields count: 15
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_DistanceBetweenCPsToCP {
                pub const m_nStartCP: usize = 0x1CC; // int32
                pub const m_nEndCP: usize = 0x1D0; // int32
                pub const m_nOutputCP: usize = 0x1D4; // int32
                pub const m_nOutputCPField: usize = 0x1D8; // int32
                pub const m_bSetOnce: usize = 0x1DC; // bool
                pub const m_flInputMin: usize = 0x1E0; // float32
                pub const m_flInputMax: usize = 0x1E4; // float32
                pub const m_flOutputMin: usize = 0x1E8; // float32
                pub const m_flOutputMax: usize = 0x1EC; // float32
                pub const m_flMaxTraceLength: usize = 0x1F0; // float32
                pub const m_flLOSScale: usize = 0x1F4; // float32
                pub const m_bLOS: usize = 0x1F8; // bool
                pub const m_CollisionGroupName: usize = 0x1F9; // char[128]
                pub const m_nTraceSet: usize = 0x27C; // ParticleTraceSet_t
                pub const m_nSetParent: usize = 0x280; // ParticleParentSetMode_t
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetControlPointToHand {
                pub const m_nCP1: usize = 0x1CC; // int32
                pub const m_nHand: usize = 0x1D0; // int32
                pub const m_vecCP1Pos: usize = 0x1D4; // Vector
                pub const m_bOrientToHand: usize = 0x1E0; // bool
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_ConstrainDistanceToPath {
                pub const m_fMinDistance: usize = 0x1C8; // float32
                pub const m_flMaxDistance0: usize = 0x1CC; // float32
                pub const m_flMaxDistanceMid: usize = 0x1D0; // float32
                pub const m_flMaxDistance1: usize = 0x1D4; // float32
                pub const m_PathParameters: usize = 0x1E0; // CPathParameters
                pub const m_flTravelTime: usize = 0x220; // float32
                pub const m_nFieldScale: usize = 0x224; // ParticleAttributeIndex_t
                pub const m_nManualTField: usize = 0x228; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_DistanceCull {
                pub const m_nControlPoint: usize = 0x1C8; // int32
                pub const m_vecPointOffset: usize = 0x1CC; // Vector
                pub const m_flDistance: usize = 0x1D8; // CParticleCollectionFloatInput
                pub const m_bCullInside: usize = 0x340; // bool
                pub const m_nAttribute: usize = 0x344; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_CreateAlongPath {
                pub const m_fMaxDistance: usize = 0x1CC; // float32
                pub const m_PathParams: usize = 0x1D0; // CPathParameters
                pub const m_bUseRandomCPs: usize = 0x210; // bool
                pub const m_vEndOffset: usize = 0x214; // Vector
                pub const m_bSaveOffset: usize = 0x220; // bool
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_GameDecalRenderer {
                pub const m_sDecalGroupName: usize = 0x218; // CGlobalSymbol
                pub const m_nEventType: usize = 0x220; // EventTypeSelection_t
                pub const m_nInteractionMask: usize = 0x228; // ParticleCollisionMask_t
                pub const m_nCollisionGroup: usize = 0x230; // ParticleCollisionGroup_t
                pub const m_vecStartPos: usize = 0x238; // CPerParticleVecInput
                pub const m_vecEndPos: usize = 0x8C8; // CPerParticleVecInput
                pub const m_flTraceBloat: usize = 0xF58; // CPerParticleFloatInput
                pub const m_flDecalSize: usize = 0x10C0; // CPerParticleFloatInput
                pub const m_nDecalGroupIndex: usize = 0x1228; // CPerParticleFloatInput
                pub const m_flDecalRotation: usize = 0x1390; // CPerParticleFloatInput
                pub const m_vModulationColor: usize = 0x14F8; // CPerParticleVecInput
                pub const m_bUseGameDefaultDecalSize: usize = 0x1B88; // bool
                pub const m_bRandomDecalRotation: usize = 0x1B89; // bool
                pub const m_bRandomlySelectDecalInGroup: usize = 0x1B8A; // bool
                pub const m_bNoDecalsOnOwner: usize = 0x1B8B; // bool
                pub const m_bVisualizeTraces: usize = 0x1B8C; // bool
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetControlPointsToModelParticles {
                pub const m_HitboxSetName: usize = 0x1C8; // char[128]
                pub const m_AttachmentName: usize = 0x248; // char[128]
                pub const m_nFirstControlPoint: usize = 0x2C8; // int32
                pub const m_nNumControlPoints: usize = 0x2CC; // int32
                pub const m_nFirstSourcePoint: usize = 0x2D0; // int32
                pub const m_bSkin: usize = 0x2D4; // bool
                pub const m_bAttachment: usize = 0x2D5; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_ColorInterpolateRandom {
                pub const m_ColorFadeMin: usize = 0x1C8; // Color
                pub const m_ColorFadeMax: usize = 0x1E4; // Color
                pub const m_flFadeStartTime: usize = 0x1F4; // float32
                pub const m_flFadeEndTime: usize = 0x1F8; // float32
                pub const m_nFieldOutput: usize = 0x1FC; // ParticleAttributeIndex_t
                pub const m_bEaseInOut: usize = 0x200; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RemapNamedModelSequenceToScalar {
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RenderLights {
                pub const m_flAnimationRate: usize = 0x220; // float32
                pub const m_nAnimationType: usize = 0x224; // AnimationType_t
                pub const m_bAnimateInFPS: usize = 0x228; // bool
                pub const m_flMinSize: usize = 0x22C; // float32
                pub const m_flMaxSize: usize = 0x230; // float32
                pub const m_flStartFadeSize: usize = 0x234; // float32
                pub const m_flEndFadeSize: usize = 0x238; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_DecayClampCount {
                pub const m_nCount: usize = 0x1C8; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            pub mod CRandomNumberGeneratorParameters {
                pub const m_bDistributeEvenly: usize = 0x0; // bool
                pub const m_nSeed: usize = 0x4; // int32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_ColorLitPerParticle {
                pub const m_ColorMin: usize = 0x1E4; // Color
                pub const m_ColorMax: usize = 0x1E8; // Color
                pub const m_TintMin: usize = 0x1EC; // Color
                pub const m_TintMax: usize = 0x1F0; // Color
                pub const m_flTintPerc: usize = 0x1F4; // float32
                pub const m_nTintBlendMode: usize = 0x1F8; // ParticleColorBlendMode_t
                pub const m_flLightAmplification: usize = 0x1FC; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RenderPoints {
                pub const m_hMaterial: usize = 0x218; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_SetAttributeToScalarExpression {
                pub const m_nExpression: usize = 0x1CC; // ScalarExpressionType_t
                pub const m_flInput1: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_flInput2: usize = 0x338; // CPerParticleFloatInput
                pub const m_flOutputRemap: usize = 0x4A0; // CParticleRemapFloatInput
                pub const m_nOutputField: usize = 0x608; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x60C; // ParticleSetMethod_t
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_CreateOnGrid {
                pub const m_nXCount: usize = 0x1D0; // CParticleCollectionFloatInput
                pub const m_nYCount: usize = 0x338; // CParticleCollectionFloatInput
                pub const m_nZCount: usize = 0x4A0; // CParticleCollectionFloatInput
                pub const m_nXSpacing: usize = 0x608; // CParticleCollectionFloatInput
                pub const m_nYSpacing: usize = 0x770; // CParticleCollectionFloatInput
                pub const m_nZSpacing: usize = 0x8D8; // CParticleCollectionFloatInput
                pub const m_nControlPointNumber: usize = 0xA40; // int32
                pub const m_bLocalSpace: usize = 0xA44; // bool
                pub const m_bCenter: usize = 0xA45; // bool
                pub const m_bHollow: usize = 0xA46; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RampCPLinearRandom {
                pub const m_nOutControlPointNumber: usize = 0x1CC; // int32
                pub const m_vecRateMin: usize = 0x1D0; // Vector
                pub const m_vecRateMax: usize = 0x1DC; // Vector
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_VelocityMatchingForce {
                pub const m_flDirScale: usize = 0x1C8; // float32
                pub const m_flSpdScale: usize = 0x1CC; // float32
                pub const m_flNeighborDistance: usize = 0x1D0; // float32
                pub const m_flFacingStrength: usize = 0x1D4; // float32
                pub const m_bUseAABB: usize = 0x1D8; // bool
                pub const m_nCPBroadcast: usize = 0x1DC; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RandomAlphaWindowThreshold {
                pub const m_flMin: usize = 0x1CC; // float32
                pub const m_flMax: usize = 0x1D0; // float32
                pub const m_flExponent: usize = 0x1D4; // float32
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_CreateOnModelAtHeight {
                pub const m_bUseBones: usize = 0x1CC; // bool
                pub const m_bForceZ: usize = 0x1CD; // bool
                pub const m_nControlPointNumber: usize = 0x1D0; // int32
                pub const m_nHeightCP: usize = 0x1D4; // int32
                pub const m_bUseWaterHeight: usize = 0x1D8; // bool
                pub const m_flDesiredHeight: usize = 0x1E0; // CParticleCollectionFloatInput
                pub const m_vecHitBoxScale: usize = 0x348; // CParticleCollectionVecInput
                pub const m_vecDirectionBias: usize = 0x9D8; // CParticleCollectionVecInput
                pub const m_nBiasType: usize = 0x1068; // ParticleHitboxBiasType_t
                pub const m_bLocalCoords: usize = 0x106C; // bool
                pub const m_bPreferMovingBoxes: usize = 0x106D; // bool
                pub const m_HitboxSetName: usize = 0x106E; // char[128]
                pub const m_flHitboxVelocityScale: usize = 0x10F0; // CParticleCollectionFloatInput
                pub const m_flMaxBoneVelocity: usize = 0x1258; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_ModelSurfaceSnapshotGenerator {
                pub const m_nCPSnapshot: usize = 0x1CC; // int32
                pub const m_modelInput: usize = 0x1D0; // CParticleModelInput
                pub const m_flRecalcRate: usize = 0x228; // CParticleCollectionFloatInput
                pub const m_flUSpacing: usize = 0x390; // CParticleCollectionFloatInput
                pub const m_flVSpacing: usize = 0x4F8; // CParticleCollectionFloatInput
                pub const m_flSurfaceOffset: usize = 0x660; // CParticleCollectionFloatInput
                pub const m_bSetNormal: usize = 0x7C8; // bool
                pub const m_bSetUp: usize = 0x7C9; // bool
                pub const m_bSetGravity: usize = 0x7CA; // bool
                pub const m_bSetUV: usize = 0x7CB; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RestartAfterDuration {
                pub const m_flDurationMin: usize = 0x1C8; // float32
                pub const m_flDurationMax: usize = 0x1CC; // float32
                pub const m_nCP: usize = 0x1D0; // int32
                pub const m_nCPField: usize = 0x1D4; // int32
                pub const m_nChildGroupID: usize = 0x1D8; // int32
                pub const m_bOnlyChildren: usize = 0x1DC; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RenderClothForce {
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapVisibilityScalar {
                pub const m_nFieldInput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1D0; // float32
                pub const m_flInputMax: usize = 0x1D4; // float32
                pub const m_flOutputMin: usize = 0x1D8; // float32
                pub const m_flOutputMax: usize = 0x1DC; // float32
                pub const m_flRadiusScale: usize = 0x1E0; // float32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_CreateSequentialPathV2 {
                pub const m_fMaxDistance: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_flNumToAssign: usize = 0x338; // CParticleCollectionFloatInput
                pub const m_bLoop: usize = 0x4A0; // bool
                pub const m_bCPPairs: usize = 0x4A1; // bool
                pub const m_bSaveOffset: usize = 0x4A2; // bool
                pub const m_PathParams: usize = 0x4B0; // CPathParameters
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            pub mod VecInputMaterialVariable_t {
                pub const m_strVariable: usize = 0x0; // CUtlString
                pub const m_vecInput: usize = 0x8; // CParticleCollectionVecInput
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RemapInitialDirectionToTransformToVector {
                pub const m_TransformInput: usize = 0x1D0; // CParticleTransformInput
                pub const m_nFieldOutput: usize = 0x230; // ParticleAttributeIndex_t
                pub const m_flScale: usize = 0x234; // float32
                pub const m_flOffsetRot: usize = 0x238; // float32
                pub const m_vecOffsetAxis: usize = 0x23C; // Vector
                pub const m_bNormalize: usize = 0x248; // bool
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_LockToSavedSequentialPathV2 {
                pub const m_flFadeStart: usize = 0x1C8; // float32
                pub const m_flFadeEnd: usize = 0x1CC; // float32
                pub const m_bCPPairs: usize = 0x1D0; // bool
                pub const m_PathParams: usize = 0x1E0; // CPathParameters
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_NormalLock {
                pub const m_nControlPointNumber: usize = 0x1C8; // int32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RemapTransformOrientationToRotations {
                pub const m_TransformInput: usize = 0x1D0; // CParticleTransformInput
                pub const m_vecRotation: usize = 0x230; // Vector
                pub const m_bUseQuat: usize = 0x23C; // bool
                pub const m_bWriteNormal: usize = 0x23D; // bool
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_Cull {
                pub const m_flCullPerc: usize = 0x1C8; // float32
                pub const m_flCullStart: usize = 0x1CC; // float32
                pub const m_flCullEnd: usize = 0x1D0; // float32
                pub const m_flCullExp: usize = 0x1D4; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RandomYawFlip {
                pub const m_flPercent: usize = 0x1CC; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            pub mod SequenceWeightedList_t {
                pub const m_nSequence: usize = 0x0; // int32
                pub const m_flRelativeWeight: usize = 0x4; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_ReadFromNeighboringParticle {
                pub const m_nFieldInput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_nIncrement: usize = 0x1D0; // int32
                pub const m_DistanceCheck: usize = 0x1D8; // CPerParticleFloatInput
                pub const m_flInterpolation: usize = 0x340; // CPerParticleFloatInput
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RenderText {
                pub const m_OutlineColor: usize = 0x212; // Color
                pub const m_DefaultText: usize = 0x218; // CUtlString
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_LerpToInitialPosition {
                pub const m_nControlPointNumber: usize = 0x1C8; // int32
                pub const m_flInterpolation: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_nCacheField: usize = 0x338; // ParticleAttributeIndex_t
                pub const m_flScale: usize = 0x340; // CParticleCollectionFloatInput
                pub const m_vecScale: usize = 0x4A8; // CParticleCollectionVecInput
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RandomRotation {
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_LerpEndCapVector {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_vecOutput: usize = 0x1CC; // Vector
                pub const m_flLerpTime: usize = 0x1D8; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_VelocityDecay {
                pub const m_flMinVelocity: usize = 0x1C8; // float32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetCPOrientationToPointAtCP {
                pub const m_nInputCP: usize = 0x1CC; // int32
                pub const m_nOutputCP: usize = 0x1D0; // int32
                pub const m_flInterpolation: usize = 0x1D8; // CParticleCollectionFloatInput
                pub const m_b2DOrientation: usize = 0x340; // bool
                pub const m_bAvoidSingularity: usize = 0x341; // bool
                pub const m_bPointAway: usize = 0x342; // bool
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_LockToPointList {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_pointList: usize = 0x1D0; // CUtlVector<PointDefinition_t>
                pub const m_bPlaceAlongPath: usize = 0x1E8; // bool
                pub const m_bClosedLoop: usize = 0x1E9; // bool
                pub const m_nNumPointsAlongPath: usize = 0x1EC; // int32
            }
            // Parent: None
            // Fields count: 17
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_MovementPlaceOnGround {
                pub const m_flOffset: usize = 0x1C8; // CPerParticleFloatInput
                pub const m_flMaxTraceLength: usize = 0x330; // float32
                pub const m_flTolerance: usize = 0x334; // float32
                pub const m_flTraceOffset: usize = 0x338; // float32
                pub const m_flLerpRate: usize = 0x33C; // float32
                pub const m_CollisionGroupName: usize = 0x340; // char[128]
                pub const m_nTraceSet: usize = 0x3C0; // ParticleTraceSet_t
                pub const m_nRefCP1: usize = 0x3C4; // int32
                pub const m_nRefCP2: usize = 0x3C8; // int32
                pub const m_nLerpCP: usize = 0x3CC; // int32
                pub const m_nTraceMissBehavior: usize = 0x3D8; // ParticleTraceMissBehavior_t
                pub const m_bIncludeShotHull: usize = 0x3DC; // bool
                pub const m_bIncludeWater: usize = 0x3DD; // bool
                pub const m_bSetNormal: usize = 0x3E0; // bool
                pub const m_bScaleOffset: usize = 0x3E1; // bool
                pub const m_nPreserveOffsetCP: usize = 0x3E4; // int32
                pub const m_nIgnoreCP: usize = 0x3E8; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetCPOrientationToDirection {
                pub const m_nInputControlPoint: usize = 0x1C8; // int32
                pub const m_nOutputControlPoint: usize = 0x1CC; // int32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapCrossProductOfTwoVectorsToVector {
                pub const m_InputVec1: usize = 0x1C8; // CPerParticleVecInput
                pub const m_InputVec2: usize = 0x858; // CPerParticleVecInput
                pub const m_nFieldOutput: usize = 0xEE8; // ParticleAttributeIndex_t
                pub const m_bNormalize: usize = 0xEEC; // bool
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapTransformOrientationToRotations {
                pub const m_TransformInput: usize = 0x1C8; // CParticleTransformInput
                pub const m_vecRotation: usize = 0x228; // Vector
                pub const m_bUseQuat: usize = 0x234; // bool
                pub const m_bWriteNormal: usize = 0x235; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RandomRotationSpeed {
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_InheritFromParentParticlesV2 {
                pub const m_flScale: usize = 0x1C8; // CPerParticleFloatInput
                pub const m_nFieldOutput: usize = 0x330; // ParticleAttributeIndex_t
                pub const m_nIncrement: usize = 0x338; // CPerParticleFloatInput
                pub const m_bRandomDistribution: usize = 0x4A0; // bool
                pub const m_bReverse: usize = 0x4A1; // bool
                pub const m_nMissingParentBehavior: usize = 0x4A4; // MissingParentInheritBehavior_t
                pub const m_flInterpolation: usize = 0x4A8; // CPerParticleFloatInput
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RandomSecondSequence {
                pub const m_nSequenceMin: usize = 0x1CC; // int32
                pub const m_nSequenceMax: usize = 0x1D0; // int32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetFloatCollection {
                pub const m_InputValue: usize = 0x1C8; // CParticleCollectionFloatInput
                pub const m_nOutputField: usize = 0x330; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x334; // ParticleSetMethod_t
                pub const m_Lerp: usize = 0x338; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            pub mod PointDefinition_t {
                pub const m_nControlPoint: usize = 0x0; // int32
                pub const m_bLocalCoords: usize = 0x4; // bool
                pub const m_vOffset: usize = 0x8; // Vector
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetControlPointPositionToRandomActiveCP {
                pub const m_nCP1: usize = 0x1CC; // int32
                pub const m_nHeadLocationMin: usize = 0x1D0; // int32
                pub const m_nHeadLocationMax: usize = 0x1D4; // int32
                pub const m_flResetRate: usize = 0x1D8; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_Diffusion {
                pub const m_flRadiusScale: usize = 0x1C8; // float32
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_nVoxelGridResolution: usize = 0x1D0; // int32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_AgeNoise {
                pub const m_bAbsVal: usize = 0x1CC; // bool
                pub const m_bAbsValInv: usize = 0x1CD; // bool
                pub const m_flOffset: usize = 0x1D0; // float32
                pub const m_flAgeMin: usize = 0x1D4; // float32
                pub const m_flAgeMax: usize = 0x1D8; // float32
                pub const m_flNoiseScale: usize = 0x1DC; // float32
                pub const m_flNoiseScaleLoc: usize = 0x1E0; // float32
                pub const m_vecOffsetLoc: usize = 0x1E4; // Vector
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapVectorComponentToScalar {
                pub const m_nFieldInput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_nComponent: usize = 0x1D0; // int32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod CGeneralRandomRotation {
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_flDegrees: usize = 0x1D0; // float32
                pub const m_flDegreesMin: usize = 0x1D4; // float32
                pub const m_flDegreesMax: usize = 0x1D8; // float32
                pub const m_flRotationRandExponent: usize = 0x1DC; // float32
                pub const m_bRandomlyFlipDirection: usize = 0x1E0; // bool
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_DistanceBetweenVecs {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_vecPoint1: usize = 0x1D0; // CPerParticleVecInput
                pub const m_vecPoint2: usize = 0x860; // CPerParticleVecInput
                pub const m_flInputMin: usize = 0xEF0; // CPerParticleFloatInput
                pub const m_flInputMax: usize = 0x1058; // CPerParticleFloatInput
                pub const m_flOutputMin: usize = 0x11C0; // CPerParticleFloatInput
                pub const m_flOutputMax: usize = 0x1328; // CPerParticleFloatInput
                pub const m_nSetMethod: usize = 0x1490; // ParticleSetMethod_t
                pub const m_bDeltaTime: usize = 0x1494; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_DampenToCP {
                pub const m_nControlPointNumber: usize = 0x1C8; // int32
                pub const m_flRange: usize = 0x1CC; // float32
                pub const m_flScale: usize = 0x1D0; // float32
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_CalculateVectorAttribute {
                pub const m_vStartValue: usize = 0x1C8; // Vector
                pub const m_nFieldInput1: usize = 0x1D4; // ParticleAttributeIndex_t
                pub const m_flInputScale1: usize = 0x1D8; // float32
                pub const m_nFieldInput2: usize = 0x1DC; // ParticleAttributeIndex_t
                pub const m_flInputScale2: usize = 0x1E0; // float32
                pub const m_nControlPointInput1: usize = 0x1E4; // ControlPointReference_t
                pub const m_flControlPointScale1: usize = 0x1F8; // float32
                pub const m_nControlPointInput2: usize = 0x1FC; // ControlPointReference_t
                pub const m_flControlPointScale2: usize = 0x210; // float32
                pub const m_nFieldOutput: usize = 0x214; // ParticleAttributeIndex_t
                pub const m_vFinalOutputScale: usize = 0x218; // Vector
            }
            // Parent: None
            // Fields count: 15
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_LockToBone {
                pub const m_modelInput: usize = 0x1C8; // CParticleModelInput
                pub const m_transformInput: usize = 0x220; // CParticleTransformInput
                pub const m_flLifeTimeFadeStart: usize = 0x280; // float32
                pub const m_flLifeTimeFadeEnd: usize = 0x284; // float32
                pub const m_flJumpThreshold: usize = 0x288; // float32
                pub const m_flPrevPosScale: usize = 0x28C; // float32
                pub const m_HitboxSetName: usize = 0x290; // char[128]
                pub const m_bRigid: usize = 0x310; // bool
                pub const m_bUseBones: usize = 0x311; // bool
                pub const m_nFieldOutput: usize = 0x314; // ParticleAttributeIndex_t
                pub const m_nFieldOutputPrev: usize = 0x318; // ParticleAttributeIndex_t
                pub const m_nRotationSetType: usize = 0x31C; // ParticleRotationLockType_t
                pub const m_bRigidRotationLock: usize = 0x320; // bool
                pub const m_vecRotation: usize = 0x328; // CPerParticleVecInput
                pub const m_flRotLerp: usize = 0x9B8; // CPerParticleFloatInput
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapNamedModelBodyPartOnceTimed {
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_ScreenSpaceRotateTowardTarget {
                pub const m_vecTargetPosition: usize = 0x1C8; // CPerParticleVecInput
                pub const m_flOutputRemap: usize = 0x858; // CParticleRemapFloatInput
                pub const m_nSetMethod: usize = 0x9C0; // ParticleSetMethod_t
                pub const m_flScreenEdgeAlignmentDistance: usize = 0x9C8; // CPerParticleFloatInput
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_MovementMaintainOffset {
                pub const m_vecOffset: usize = 0x1C8; // Vector
                pub const m_nCP: usize = 0x1D4; // int32
                pub const m_bRadiusScale: usize = 0x1D8; // bool
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_CreateWithinCapsuleTransform {
                pub const m_fRadiusMin: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_fRadiusMax: usize = 0x338; // CPerParticleFloatInput
                pub const m_fHeight: usize = 0x4A0; // CPerParticleFloatInput
                pub const m_TransformInput: usize = 0x608; // CParticleTransformInput
                pub const m_fSpeedMin: usize = 0x668; // CPerParticleFloatInput
                pub const m_fSpeedMax: usize = 0x7D0; // CPerParticleFloatInput
                pub const m_fSpeedRandExp: usize = 0x938; // float32
                pub const m_LocalCoordinateSystemSpeedMin: usize = 0x940; // CPerParticleVecInput
                pub const m_LocalCoordinateSystemSpeedMax: usize = 0xFD0; // CPerParticleVecInput
                pub const m_nFieldOutput: usize = 0x1660; // ParticleAttributeIndex_t
                pub const m_nFieldVelocity: usize = 0x1664; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetVec {
                pub const m_InputValue: usize = 0x1C8; // CPerParticleVecInput
                pub const m_nOutputField: usize = 0x858; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x85C; // ParticleSetMethod_t
                pub const m_Lerp: usize = 0x860; // CPerParticleFloatInput
                pub const m_bNormalizedOutput: usize = 0x9C8; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_CreateFromParentParticles {
                pub const m_flVelocityScale: usize = 0x1CC; // float32
                pub const m_flIncrement: usize = 0x1D0; // float32
                pub const m_bRandomDistribution: usize = 0x1D4; // bool
                pub const m_nRandomSeed: usize = 0x1D8; // int32
                pub const m_bSubFrame: usize = 0x1DC; // bool
                pub const m_bSetRopeSegmentID: usize = 0x1DD; // bool
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_CheckParticleForWater {
                pub const m_flRadius: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_nFieldOutput: usize = 0x338; // ParticleAttributeIndex_t
                pub const m_flOutputRemap: usize = 0x340; // CParticleRemapFloatInput
                pub const m_nSetMethod: usize = 0x4A8; // ParticleSetMethod_t
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RandomNamedModelBodyPart {
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RenderOmni2Light {
                pub const m_nLightType: usize = 0x214; // ParticleOmni2LightTypeChoiceList_t
                pub const m_vColorBlend: usize = 0x218; // CParticleCollectionVecInput
                pub const m_nColorBlendType: usize = 0x8A8; // ParticleColorBlendType_t
                pub const m_nBrightnessUnit: usize = 0x8AC; // ParticleLightUnitChoiceList_t
                pub const m_flBrightnessLumens: usize = 0x8B0; // CPerParticleFloatInput
                pub const m_flBrightnessCandelas: usize = 0xA18; // CPerParticleFloatInput
                pub const m_bCastShadows: usize = 0xB80; // bool
                pub const m_bFog: usize = 0xB81; // bool
                pub const m_flFogScale: usize = 0xB88; // CPerParticleFloatInput
                pub const m_flLuminaireRadius: usize = 0xCF0; // CPerParticleFloatInput
                pub const m_flSkirt: usize = 0xE58; // CPerParticleFloatInput
                pub const m_flRange: usize = 0xFC0; // CPerParticleFloatInput
                pub const m_flInnerConeAngle: usize = 0x1128; // CPerParticleFloatInput
                pub const m_flOuterConeAngle: usize = 0x1290; // CPerParticleFloatInput
                pub const m_hLightCookie: usize = 0x13F8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_bSphericalCookie: usize = 0x1400; // bool
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_ConnectParentParticleToNearest {
                pub const m_nFirstControlPoint: usize = 0x1C8; // int32
                pub const m_nSecondControlPoint: usize = 0x1CC; // int32
                pub const m_bUseRadius: usize = 0x1D0; // bool
                pub const m_flRadiusScale: usize = 0x1D8; // CParticleCollectionFloatInput
                pub const m_flParentRadiusScale: usize = 0x340; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            pub mod CPAssignment_t {
                pub const m_nCPNumber: usize = 0x0; // int32
                pub const m_Pos: usize = 0x8; // CPerParticleVecInput
                pub const m_nOrientationMode: usize = 0x698; // ParticleOrientationSetMode_t
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RemapParticleCountToNamedModelBodyPartScalar {
            }
            // Parent: None
            // Fields count: 19
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_InitSkinnedPositionFromCPSnapshot {
                pub const m_nSnapshotControlPointNumber: usize = 0x1CC; // int32
                pub const m_nControlPointNumber: usize = 0x1D0; // int32
                pub const m_bRandom: usize = 0x1D4; // bool
                pub const m_nRandomSeed: usize = 0x1D8; // int32
                pub const m_bRigid: usize = 0x1DC; // bool
                pub const m_bSetNormal: usize = 0x1DD; // bool
                pub const m_bIgnoreDt: usize = 0x1DE; // bool
                pub const m_flMinNormalVelocity: usize = 0x1E0; // float32
                pub const m_flMaxNormalVelocity: usize = 0x1E4; // float32
                pub const m_nIndexType: usize = 0x1E8; // SnapshotIndexType_t
                pub const m_flReadIndex: usize = 0x1F0; // CPerParticleFloatInput
                pub const m_flIncrement: usize = 0x358; // float32
                pub const m_nFullLoopIncrement: usize = 0x35C; // int32
                pub const m_nSnapShotStartPoint: usize = 0x360; // int32
                pub const m_flBoneVelocity: usize = 0x364; // float32
                pub const m_flBoneVelocityMax: usize = 0x368; // float32
                pub const m_bCopyColor: usize = 0x36C; // bool
                pub const m_bCopyAlpha: usize = 0x36D; // bool
                pub const m_bSetRadius: usize = 0x36E; // bool
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_LagCompensation {
                pub const m_nDesiredVelocityCP: usize = 0x1C8; // int32
                pub const m_nLatencyCP: usize = 0x1CC; // int32
                pub const m_nLatencyCPField: usize = 0x1D0; // int32
                pub const m_nDesiredVelocityCPField: usize = 0x1D4; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_CollideWithSelf {
                pub const m_flRadiusScale: usize = 0x1C8; // CPerParticleFloatInput
                pub const m_flMinimumSpeed: usize = 0x330; // CPerParticleFloatInput
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_Noise {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_flOutputMin: usize = 0x1CC; // float32
                pub const m_flOutputMax: usize = 0x1D0; // float32
                pub const m_fl4NoiseScale: usize = 0x1D4; // float32
                pub const m_bAdditive: usize = 0x1D8; // bool
                pub const m_flNoiseAnimationTimeScale: usize = 0x1DC; // float32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_FadeAndKillForTracers {
                pub const m_flStartFadeInTime: usize = 0x1C8; // float32
                pub const m_flEndFadeInTime: usize = 0x1CC; // float32
                pub const m_flStartFadeOutTime: usize = 0x1D0; // float32
                pub const m_flEndFadeOutTime: usize = 0x1D4; // float32
                pub const m_flStartAlpha: usize = 0x1D8; // float32
                pub const m_flEndAlpha: usize = 0x1DC; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_ColorAdjustHSL {
                pub const m_flHueAdjust: usize = 0x1C8; // CPerParticleFloatInput
                pub const m_flSaturationAdjust: usize = 0x330; // CPerParticleFloatInput
                pub const m_flLightnessAdjust: usize = 0x498; // CPerParticleFloatInput
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            pub mod CParticleMassCalculationParameters {
                pub const m_nMassMode: usize = 0x0; // ParticleMassMode_t
                pub const m_flRadius: usize = 0x8; // CPerParticleFloatInput
                pub const m_flNominalRadius: usize = 0x170; // CPerParticleFloatInput
                pub const m_flScale: usize = 0x2D8; // CPerParticleFloatInput
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SequenceFromModel {
                pub const m_nControlPointNumber: usize = 0x1C8; // int32
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_nFieldOutputAnim: usize = 0x1D0; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1D4; // float32
                pub const m_flInputMax: usize = 0x1D8; // float32
                pub const m_flOutputMin: usize = 0x1DC; // float32
                pub const m_flOutputMax: usize = 0x1E0; // float32
                pub const m_nSetMethod: usize = 0x1E4; // ParticleSetMethod_t
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_AlphaDecay {
                pub const m_flMinAlpha: usize = 0x1C8; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapDensityGradientToVectorAttribute {
                pub const m_flRadiusScale: usize = 0x1C8; // float32
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_InitVec {
                pub const m_InputValue: usize = 0x1D0; // CPerParticleVecInput
                pub const m_nOutputField: usize = 0x860; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x864; // ParticleSetMethod_t
                pub const m_bNormalizedOutput: usize = 0x868; // bool
                pub const m_bWritePreviousPosition: usize = 0x869; // bool
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_SetHitboxToModel {
                pub const m_nControlPointNumber: usize = 0x1CC; // int32
                pub const m_nForceInModel: usize = 0x1D0; // int32
                pub const m_bEvenDistribution: usize = 0x1D4; // bool
                pub const m_nDesiredHitbox: usize = 0x1D8; // int32
                pub const m_vecHitBoxScale: usize = 0x1E0; // CParticleCollectionVecInput
                pub const m_vecDirectionBias: usize = 0x870; // Vector
                pub const m_bMaintainHitbox: usize = 0x87C; // bool
                pub const m_bUseBones: usize = 0x87D; // bool
                pub const m_HitboxSetName: usize = 0x87E; // char[128]
                pub const m_flShellSize: usize = 0x900; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_MovementMoveAlongSkinnedCPSnapshot {
                pub const m_nControlPointNumber: usize = 0x1C8; // int32
                pub const m_nSnapshotControlPointNumber: usize = 0x1CC; // int32
                pub const m_bSetNormal: usize = 0x1D0; // bool
                pub const m_bSetRadius: usize = 0x1D1; // bool
                pub const m_flInterpolation: usize = 0x1D8; // CPerParticleFloatInput
                pub const m_flTValue: usize = 0x340; // CPerParticleFloatInput
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_LerpScalar {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_flOutput: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_flStartTime: usize = 0x338; // float32
                pub const m_flEndTime: usize = 0x33C; // float32
            }
            // Parent: None
            // Fields count: 13
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_InitialRepulsionVelocity {
                pub const m_CollisionGroupName: usize = 0x1CC; // char[128]
                pub const m_nTraceSet: usize = 0x24C; // ParticleTraceSet_t
                pub const m_vecOutputMin: usize = 0x250; // Vector
                pub const m_vecOutputMax: usize = 0x25C; // Vector
                pub const m_nControlPointNumber: usize = 0x268; // int32
                pub const m_bPerParticle: usize = 0x26C; // bool
                pub const m_bTranslate: usize = 0x26D; // bool
                pub const m_bProportional: usize = 0x26E; // bool
                pub const m_flTraceLength: usize = 0x270; // float32
                pub const m_bPerParticleTR: usize = 0x274; // bool
                pub const m_bInherit: usize = 0x275; // bool
                pub const m_nChildCP: usize = 0x278; // int32
                pub const m_nChildGroupID: usize = 0x27C; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_ClampScalar {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_flOutputMin: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_flOutputMax: usize = 0x338; // CPerParticleFloatInput
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetControlPointToHMD {
                pub const m_nCP1: usize = 0x1CC; // int32
                pub const m_vecCP1Pos: usize = 0x1D0; // Vector
                pub const m_bOrientToHMD: usize = 0x1DC; // bool
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_DifferencePreviousParticle {
                pub const m_nFieldInput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1D0; // float32
                pub const m_flInputMax: usize = 0x1D4; // float32
                pub const m_flOutputMin: usize = 0x1D8; // float32
                pub const m_flOutputMax: usize = 0x1DC; // float32
                pub const m_nSetMethod: usize = 0x1E0; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x1E4; // bool
                pub const m_bSetPreviousParticle: usize = 0x1E5; // bool
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetControlPointFieldFromVectorExpression {
                pub const m_nExpression: usize = 0x1CC; // VectorFloatExpressionType_t
                pub const m_vecInput1: usize = 0x1D0; // CParticleCollectionVecInput
                pub const m_vecInput2: usize = 0x860; // CParticleCollectionVecInput
                pub const m_flLerp: usize = 0xEF0; // CPerParticleFloatInput
                pub const m_flOutputRemap: usize = 0x1058; // CParticleRemapFloatInput
                pub const m_nOutputCP: usize = 0x11C0; // int32
                pub const m_nOutVectorField: usize = 0x11C4; // int32
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_PercentageBetweenTransforms {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1CC; // float32
                pub const m_flInputMax: usize = 0x1D0; // float32
                pub const m_flOutputMin: usize = 0x1D4; // float32
                pub const m_flOutputMax: usize = 0x1D8; // float32
                pub const m_TransformStart: usize = 0x1E0; // CParticleTransformInput
                pub const m_TransformEnd: usize = 0x240; // CParticleTransformInput
                pub const m_nSetMethod: usize = 0x2A0; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x2A4; // bool
                pub const m_bRadialCheck: usize = 0x2A5; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_PlaneCull {
                pub const m_nControlPoint: usize = 0x1CC; // int32
                pub const m_flDistance: usize = 0x1D0; // CParticleCollectionFloatInput
                pub const m_bCullInside: usize = 0x338; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapNamedModelSequenceEndCap {
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_InitFromCPSnapshot {
                pub const m_nControlPointNumber: usize = 0x1CC; // int32
                pub const m_strSnapshotSubset: usize = 0x1D0; // CUtlString
                pub const m_nAttributeToRead: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_nAttributeToWrite: usize = 0x1DC; // ParticleAttributeIndex_t
                pub const m_nLocalSpaceCP: usize = 0x1E0; // int32
                pub const m_bRandom: usize = 0x1E4; // bool
                pub const m_bReverse: usize = 0x1E5; // bool
                pub const m_nSnapShotIncrement: usize = 0x1E8; // CParticleCollectionFloatInput
                pub const m_nManualSnapshotIndex: usize = 0x350; // CPerParticleFloatInput
                pub const m_nRandomSeed: usize = 0x4B8; // int32
                pub const m_bLocalSpaceAngles: usize = 0x4BC; // bool
            }
            // Parent: None
            // Fields count: 23
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RenderCables {
                pub const m_flRadiusScale: usize = 0x218; // CParticleCollectionFloatInput
                pub const m_flAlphaScale: usize = 0x380; // CParticleCollectionFloatInput
                pub const m_vecColorScale: usize = 0x4E8; // CParticleCollectionVecInput
                pub const m_nColorBlendType: usize = 0xB78; // ParticleColorBlendType_t
                pub const m_hMaterial: usize = 0xB80; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_nTextureRepetitionMode: usize = 0xB88; // TextureRepetitionMode_t
                pub const m_flTextureRepeatsPerSegment: usize = 0xB90; // CParticleCollectionFloatInput
                pub const m_flTextureRepeatsCircumference: usize = 0xCF8; // CParticleCollectionFloatInput
                pub const m_flColorMapOffsetV: usize = 0xE60; // CParticleCollectionFloatInput
                pub const m_flColorMapOffsetU: usize = 0xFC8; // CParticleCollectionFloatInput
                pub const m_flNormalMapOffsetV: usize = 0x1130; // CParticleCollectionFloatInput
                pub const m_flNormalMapOffsetU: usize = 0x1298; // CParticleCollectionFloatInput
                pub const m_bDrawCableCaps: usize = 0x1400; // bool
                pub const m_flCapRoundness: usize = 0x1404; // float32
                pub const m_flCapOffsetAmount: usize = 0x1408; // float32
                pub const m_flTessScale: usize = 0x140C; // float32
                pub const m_nMinTesselation: usize = 0x1410; // int32
                pub const m_nMaxTesselation: usize = 0x1414; // int32
                pub const m_nRoundness: usize = 0x1418; // int32
                pub const m_nForceRoundnessFixed: usize = 0x141C; // bool
                pub const m_LightingTransform: usize = 0x1420; // CParticleTransformInput
                pub const m_MaterialFloatVars: usize = 0x1480; // CUtlLeanVector<FloatInputMaterialVariable_t>
                pub const m_MaterialVecVars: usize = 0x14A0; // CUtlLeanVector<VecInputMaterialVariable_t>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_InheritVelocity {
                pub const m_nControlPointNumber: usize = 0x1CC; // int32
                pub const m_flVelocityScale: usize = 0x1D0; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetControlPointToWaterSurface {
                pub const m_nSourceCP: usize = 0x1CC; // int32
                pub const m_nDestCP: usize = 0x1D0; // int32
                pub const m_nFlowCP: usize = 0x1D4; // int32
                pub const m_nActiveCP: usize = 0x1D8; // int32
                pub const m_nActiveCPField: usize = 0x1DC; // int32
                pub const m_flRetestRate: usize = 0x1E0; // CParticleCollectionFloatInput
                pub const m_bAdaptiveThreshold: usize = 0x348; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_PositionOffset {
                pub const m_OffsetMin: usize = 0x1D0; // CPerParticleVecInput
                pub const m_OffsetMax: usize = 0x860; // CPerParticleVecInput
                pub const m_TransformInput: usize = 0xEF0; // CParticleTransformInput
                pub const m_bLocalCoords: usize = 0xF50; // bool
                pub const m_bProportional: usize = 0xF51; // bool
                pub const m_randomnessParameters: usize = 0xF54; // CRandomNumberGeneratorParameters
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_NormalAlignToCP {
                pub const m_transformInput: usize = 0x1D0; // CParticleTransformInput
                pub const m_nControlPointAxis: usize = 0x230; // ParticleControlPointAxis_t
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_ShapeMatchingConstraint {
                pub const m_flShapeRestorationTime: usize = 0x1C8; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetChildControlPoints {
                pub const m_nChildGroupID: usize = 0x1C8; // int32
                pub const m_nFirstControlPoint: usize = 0x1CC; // int32
                pub const m_nNumControlPoints: usize = 0x1D0; // int32
                pub const m_nFirstSourcePoint: usize = 0x1D8; // CParticleCollectionFloatInput
                pub const m_bReverse: usize = 0x340; // bool
                pub const m_bSetOrientation: usize = 0x341; // bool
                pub const m_nOrientation: usize = 0x344; // ParticleOrientationType_t
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_ChladniWave {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_flInputMax: usize = 0x338; // CPerParticleFloatInput
                pub const m_flOutputMin: usize = 0x4A0; // CPerParticleFloatInput
                pub const m_flOutputMax: usize = 0x608; // CPerParticleFloatInput
                pub const m_vecWaveLength: usize = 0x770; // CPerParticleVecInput
                pub const m_vecHarmonics: usize = 0xE00; // CPerParticleVecInput
                pub const m_nSetMethod: usize = 0x1490; // ParticleSetMethod_t
                pub const m_nLocalSpaceControlPoint: usize = 0x1494; // int32
                pub const m_b3D: usize = 0x1498; // bool
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapDirectionToCPToVector {
                pub const m_nCP: usize = 0x1C8; // int32
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_flScale: usize = 0x1D0; // float32
                pub const m_flOffsetRot: usize = 0x1D4; // float32
                pub const m_vecOffsetAxis: usize = 0x1D8; // Vector
                pub const m_bNormalize: usize = 0x1E4; // bool
                pub const m_nFieldStrength: usize = 0x1E8; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_DriveCPFromGlobalSoundFloat {
                pub const m_nOutputControlPoint: usize = 0x1CC; // int32
                pub const m_nOutputField: usize = 0x1D0; // int32
                pub const m_flInputMin: usize = 0x1D4; // float32
                pub const m_flInputMax: usize = 0x1D8; // float32
                pub const m_flOutputMin: usize = 0x1DC; // float32
                pub const m_flOutputMax: usize = 0x1E0; // float32
                pub const m_StackName: usize = 0x1E8; // CUtlString
                pub const m_OperatorName: usize = 0x1F0; // CUtlString
                pub const m_FieldName: usize = 0x1F8; // CUtlString
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_ScreenSpacePositionOfTarget {
                pub const m_vecTargetPosition: usize = 0x1D0; // CPerParticleVecInput
                pub const m_bOututBehindness: usize = 0x860; // bool
                pub const m_nBehindFieldOutput: usize = 0x864; // ParticleAttributeIndex_t
                pub const m_flBehindOutputRemap: usize = 0x868; // CParticleRemapFloatInput
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RtEnvCull {
                pub const m_vecTestDir: usize = 0x1C8; // Vector
                pub const m_vecTestNormal: usize = 0x1D4; // Vector
                pub const m_bCullOnMiss: usize = 0x1E0; // bool
                pub const m_bStickInsteadOfCull: usize = 0x1E1; // bool
                pub const m_RtEnvName: usize = 0x1E2; // char[128]
                pub const m_nRTEnvCP: usize = 0x264; // int32
                pub const m_nComponent: usize = 0x268; // int32
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_PinParticleToCP {
                pub const m_nControlPointNumber: usize = 0x1C8; // int32
                pub const m_vecOffset: usize = 0x1D0; // CParticleCollectionVecInput
                pub const m_bOffsetLocal: usize = 0x860; // bool
                pub const m_nParticleSelection: usize = 0x864; // ParticleSelection_t
                pub const m_nParticleNumber: usize = 0x868; // CParticleCollectionFloatInput
                pub const m_nPinBreakType: usize = 0x9D0; // ParticlePinDistance_t
                pub const m_flBreakDistance: usize = 0x9D8; // CParticleCollectionFloatInput
                pub const m_flBreakSpeed: usize = 0xB40; // CParticleCollectionFloatInput
                pub const m_flAge: usize = 0xCA8; // CParticleCollectionFloatInput
                pub const m_nBreakControlPointNumber: usize = 0xE10; // int32
                pub const m_nBreakControlPointNumber2: usize = 0xE14; // int32
                pub const m_flBreakValue: usize = 0xE18; // CParticleCollectionFloatInput
                pub const m_flInterpolation: usize = 0xF80; // CPerParticleFloatInput
                pub const m_bRetainInitialVelocity: usize = 0x10E8; // bool
            }
            // Parent: None
            // Fields count: 13
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapCPtoVector {
                pub const m_nCPInput: usize = 0x1C8; // int32
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_nLocalSpaceCP: usize = 0x1D0; // int32
                pub const m_vInputMin: usize = 0x1D4; // Vector
                pub const m_vInputMax: usize = 0x1E0; // Vector
                pub const m_vOutputMin: usize = 0x1EC; // Vector
                pub const m_vOutputMax: usize = 0x1F8; // Vector
                pub const m_flStartTime: usize = 0x204; // float32
                pub const m_flEndTime: usize = 0x208; // float32
                pub const m_flInterpRate: usize = 0x20C; // float32
                pub const m_nSetMethod: usize = 0x210; // ParticleSetMethod_t
                pub const m_bOffset: usize = 0x214; // bool
                pub const m_bAccelerate: usize = 0x215; // bool
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_CreateParticleImpulse {
                pub const m_InputRadius: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_InputMagnitude: usize = 0x338; // CPerParticleFloatInput
                pub const m_nFalloffFunction: usize = 0x4A0; // ParticleFalloffFunction_t
                pub const m_InputFalloffExp: usize = 0x4A8; // CPerParticleFloatInput
                pub const m_nImpulseType: usize = 0x610; // ParticleImpulseType_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_DensityForce {
                pub const m_flRadiusScale: usize = 0x1D4; // float32
                pub const m_flForceScale: usize = 0x1D8; // float32
                pub const m_flTargetDensity: usize = 0x1DC; // float32
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_CreateInEpitrochoid {
                pub const m_nComponent1: usize = 0x1CC; // int32
                pub const m_nComponent2: usize = 0x1D0; // int32
                pub const m_TransformInput: usize = 0x1D8; // CParticleTransformInput
                pub const m_flParticleDensity: usize = 0x238; // CPerParticleFloatInput
                pub const m_flOffset: usize = 0x3A0; // CPerParticleFloatInput
                pub const m_flRadius1: usize = 0x508; // CPerParticleFloatInput
                pub const m_flRadius2: usize = 0x670; // CPerParticleFloatInput
                pub const m_bUseCount: usize = 0x7D8; // bool
                pub const m_bUseLocalCoords: usize = 0x7D9; // bool
                pub const m_bOffsetExistingPos: usize = 0x7DA; // bool
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_ConstrainDistanceToUserSpecifiedPath {
                pub const m_fMinDistance: usize = 0x1C8; // float32
                pub const m_flMaxDistance: usize = 0x1CC; // float32
                pub const m_flTimeScale: usize = 0x1D0; // float32
                pub const m_bLoopedPath: usize = 0x1D4; // bool
                pub const m_pointList: usize = 0x1D8; // CUtlVector<PointDefinitionWithTimeValues_t>
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetControlPointPositions {
                pub const m_bUseWorldLocation: usize = 0x1C9; // bool
                pub const m_bOrient: usize = 0x1CA; // bool
                pub const m_bSetOnce: usize = 0x1CB; // bool
                pub const m_nCP1: usize = 0x1CC; // int32
                pub const m_nCP2: usize = 0x1D0; // int32
                pub const m_nCP3: usize = 0x1D4; // int32
                pub const m_nCP4: usize = 0x1D8; // int32
                pub const m_vecCP1Pos: usize = 0x1DC; // Vector
                pub const m_vecCP2Pos: usize = 0x1E8; // Vector
                pub const m_vecCP3Pos: usize = 0x1F4; // Vector
                pub const m_vecCP4Pos: usize = 0x200; // Vector
                pub const m_nHeadLocation: usize = 0x20C; // int32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetFloatAttributeToVectorExpression {
                pub const m_nExpression: usize = 0x1C8; // VectorFloatExpressionType_t
                pub const m_vInput1: usize = 0x1D0; // CPerParticleVecInput
                pub const m_vInput2: usize = 0x860; // CPerParticleVecInput
                pub const m_flOutputRemap: usize = 0xEF0; // CParticleRemapFloatInput
                pub const m_nOutputField: usize = 0x1058; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x105C; // ParticleSetMethod_t
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_MovementRotateParticleAroundAxis {
                pub const m_vecRotAxis: usize = 0x1C8; // CParticleCollectionVecInput
                pub const m_flRotRate: usize = 0x858; // CParticleCollectionFloatInput
                pub const m_TransformInput: usize = 0x9C0; // CParticleTransformInput
                pub const m_bLocalSpace: usize = 0xA20; // bool
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_IntraParticleForce {
                pub const m_flAttractionMinDistance: usize = 0x1D4; // float32
                pub const m_flAttractionMaxDistance: usize = 0x1D8; // float32
                pub const m_flAttractionMaxStrength: usize = 0x1DC; // float32
                pub const m_flRepulsionMinDistance: usize = 0x1E0; // float32
                pub const m_flRepulsionMaxDistance: usize = 0x1E4; // float32
                pub const m_flRepulsionMaxStrength: usize = 0x1E8; // float32
                pub const m_bUseAABB: usize = 0x1EC; // bool
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_InitFloat {
                pub const m_InputValue: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_nOutputField: usize = 0x338; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x33C; // ParticleSetMethod_t
                pub const m_InputStrength: usize = 0x340; // CPerParticleFloatInput
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_CreateOnModel {
                pub const m_modelInput: usize = 0x1D0; // CParticleModelInput
                pub const m_transformInput: usize = 0x228; // CParticleTransformInput
                pub const m_nForceInModel: usize = 0x288; // int32
                pub const m_bScaleToVolume: usize = 0x28C; // bool
                pub const m_bEvenDistribution: usize = 0x28D; // bool
                pub const m_nDesiredHitbox: usize = 0x290; // CParticleCollectionFloatInput
                pub const m_nHitboxValueFromControlPointIndex: usize = 0x3F8; // int32
                pub const m_vecHitBoxScale: usize = 0x400; // CParticleCollectionVecInput
                pub const m_flBoneVelocity: usize = 0xA90; // float32
                pub const m_flMaxBoneVelocity: usize = 0xA94; // float32
                pub const m_vecDirectionBias: usize = 0xA98; // CParticleCollectionVecInput
                pub const m_HitboxSetName: usize = 0x1128; // char[128]
                pub const m_bLocalCoords: usize = 0x11A8; // bool
                pub const m_bUseBones: usize = 0x11A9; // bool
                pub const m_bUseMesh: usize = 0x11AA; // bool
                pub const m_flShellSize: usize = 0x11B0; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_InheritFromPeerSystem {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_nFieldInput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_nIncrement: usize = 0x1D0; // int32
                pub const m_nGroupID: usize = 0x1D4; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_PerParticleForce {
                pub const m_flForceScale: usize = 0x1D8; // CPerParticleFloatInput
                pub const m_vForce: usize = 0x340; // CPerParticleVecInput
                pub const m_nCP: usize = 0x9D0; // int32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RandomNamedModelMeshGroup {
            }
            // Parent: None
            // Fields count: 18
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RenderProjected {
                pub const m_bProjectCharacter: usize = 0x212; // bool
                pub const m_bProjectWorld: usize = 0x213; // bool
                pub const m_bProjectWater: usize = 0x214; // bool
                pub const m_bFlipHorizontal: usize = 0x215; // bool
                pub const m_bEnableProjectedDepthControls: usize = 0x216; // bool
                pub const m_flMinProjectionDepth: usize = 0x218; // float32
                pub const m_flMaxProjectionDepth: usize = 0x21C; // float32
                pub const m_vecProjectedMaterials: usize = 0x220; // CUtlVector<RenderProjectedMaterial_t>
                pub const m_flMaterialSelection: usize = 0x238; // CPerParticleFloatInput
                pub const m_flAnimationTimeScale: usize = 0x3A0; // float32
                pub const m_bOrientToNormal: usize = 0x3A4; // bool
                pub const m_MaterialVars: usize = 0x3A8; // CUtlVector<MaterialVariable_t>
                pub const m_flRadiusScale: usize = 0x3C0; // CParticleCollectionFloatInput
                pub const m_flAlphaScale: usize = 0x528; // CParticleCollectionFloatInput
                pub const m_flRollScale: usize = 0x690; // CParticleCollectionFloatInput
                pub const m_nAlpha2Field: usize = 0x7F8; // ParticleAttributeIndex_t
                pub const m_vecColorScale: usize = 0x800; // CParticleCollectionVecInput
                pub const m_nColorBlendType: usize = 0xE90; // ParticleColorBlendType_t
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_MaxVelocity {
                pub const m_flMaxVelocity: usize = 0x1C8; // float32
                pub const m_flMinVelocity: usize = 0x1CC; // float32
                pub const m_nOverrideCP: usize = 0x1D0; // int32
                pub const m_nOverrideCPField: usize = 0x1D4; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_VelocityFromNormal {
                pub const m_fSpeedMin: usize = 0x1CC; // float32
                pub const m_fSpeedMax: usize = 0x1D0; // float32
                pub const m_bIgnoreDt: usize = 0x1D4; // bool
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_MaintainEmitter {
                pub const m_nParticlesToMaintain: usize = 0x1D0; // CParticleCollectionFloatInput
                pub const m_flStartTime: usize = 0x338; // float32
                pub const m_flEmissionDuration: usize = 0x340; // CParticleCollectionFloatInput
                pub const m_flEmissionRate: usize = 0x4A8; // float32
                pub const m_nSnapshotControlPoint: usize = 0x4AC; // int32
                pub const m_strSnapshotSubset: usize = 0x4B0; // CUtlString
                pub const m_bEmitInstantaneously: usize = 0x4B8; // bool
                pub const m_bFinalEmitOnStop: usize = 0x4B9; // bool
                pub const m_flScale: usize = 0x4C0; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_PositionOffsetToCP {
                pub const m_nControlPointNumberStart: usize = 0x1CC; // int32
                pub const m_nControlPointNumberEnd: usize = 0x1D0; // int32
                pub const m_bLocalCoords: usize = 0x1D4; // bool
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RemapInitialTransformDirectionToRotation {
                pub const m_TransformInput: usize = 0x1D0; // CParticleTransformInput
                pub const m_nFieldOutput: usize = 0x230; // ParticleAttributeIndex_t
                pub const m_flOffsetRot: usize = 0x234; // float32
                pub const m_nComponent: usize = 0x238; // int32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_FadeAndKill {
                pub const m_flStartFadeInTime: usize = 0x1C8; // float32
                pub const m_flEndFadeInTime: usize = 0x1CC; // float32
                pub const m_flStartFadeOutTime: usize = 0x1D0; // float32
                pub const m_flEndFadeOutTime: usize = 0x1D4; // float32
                pub const m_flStartAlpha: usize = 0x1D8; // float32
                pub const m_flEndAlpha: usize = 0x1DC; // float32
                pub const m_bForcePreserveParticleOrder: usize = 0x1E0; // bool
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_ColorInterpolate {
                pub const m_ColorFade: usize = 0x1C8; // Color
                pub const m_flFadeStartTime: usize = 0x1D8; // float32
                pub const m_flFadeEndTime: usize = 0x1DC; // float32
                pub const m_nFieldOutput: usize = 0x1E0; // ParticleAttributeIndex_t
                pub const m_bEaseInOut: usize = 0x1E4; // bool
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RampScalarSpline {
                pub const m_RateMin: usize = 0x1C8; // float32
                pub const m_RateMax: usize = 0x1CC; // float32
                pub const m_flStartTime_min: usize = 0x1D0; // float32
                pub const m_flStartTime_max: usize = 0x1D4; // float32
                pub const m_flEndTime_min: usize = 0x1D8; // float32
                pub const m_flEndTime_max: usize = 0x1DC; // float32
                pub const m_flBias: usize = 0x1E0; // float32
                pub const m_nField: usize = 0x210; // ParticleAttributeIndex_t
                pub const m_bProportionalOp: usize = 0x214; // bool
                pub const m_bEaseOut: usize = 0x215; // bool
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapNamedModelSequenceOnceTimed {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetControlPointFromObjectScale {
                pub const m_nCPInput: usize = 0x1CC; // int32
                pub const m_nCPOutput: usize = 0x1D0; // int32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_MaintainSequentialPath {
                pub const m_fMaxDistance: usize = 0x1C8; // float32
                pub const m_flNumToAssign: usize = 0x1CC; // float32
                pub const m_flCohesionStrength: usize = 0x1D0; // float32
                pub const m_flTolerance: usize = 0x1D4; // float32
                pub const m_bLoop: usize = 0x1D8; // bool
                pub const m_bUseParticleCount: usize = 0x1D9; // bool
                pub const m_PathParams: usize = 0x1E0; // CPathParameters
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapNamedModelBodyPartEndCap {
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_StopAfterCPDuration {
                pub const m_flDuration: usize = 0x1D0; // CParticleCollectionFloatInput
                pub const m_bDestroyImmediately: usize = 0x338; // bool
                pub const m_bPlayEndCap: usize = 0x339; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod CGeneralSpin {
                pub const m_nSpinRateDegrees: usize = 0x1C8; // int32
                pub const m_nSpinRateMinDegrees: usize = 0x1CC; // int32
                pub const m_fSpinRateStopTime: usize = 0x1D4; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_LockToSavedSequentialPath {
                pub const m_flFadeStart: usize = 0x1CC; // float32
                pub const m_flFadeEnd: usize = 0x1D0; // float32
                pub const m_bCPPairs: usize = 0x1D4; // bool
                pub const m_PathParams: usize = 0x1E0; // CPathParameters
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RemapNamedModelElementToScalar {
                pub const m_hModel: usize = 0x1D0; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_names: usize = 0x1D8; // CUtlVector<CUtlString>
                pub const m_values: usize = 0x1F0; // CUtlVector<float32>
                pub const m_nFieldInput: usize = 0x208; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x20C; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x210; // ParticleSetMethod_t
                pub const m_bModelFromRenderer: usize = 0x214; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_ClampVector {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_vecOutputMin: usize = 0x1D0; // CPerParticleVecInput
                pub const m_vecOutputMax: usize = 0x860; // CPerParticleVecInput
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RenderStatusEffectCitadel {
                pub const m_pTextureColorWarp: usize = 0x218; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureNormal: usize = 0x220; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureMetalness: usize = 0x228; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureRoughness: usize = 0x230; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureSelfIllum: usize = 0x238; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_pTextureDetail: usize = 0x240; // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod IParticleSystemDefinition {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_WindForce {
                pub const m_vForce: usize = 0x1D4; // Vector
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetVariable {
                pub const m_variableReference: usize = 0x1D0; // CParticleVariableRef
                pub const m_transformInput: usize = 0x220; // CParticleTransformInput
                pub const m_positionOffset: usize = 0x280; // Vector
                pub const m_rotationOffset: usize = 0x28C; // QAngle
                pub const m_vecInput: usize = 0x298; // CParticleCollectionVecInput
                pub const m_floatInput: usize = 0x928; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Fields count: 29
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RenderStandardLight {
                pub const m_nLightType: usize = 0x214; // ParticleLightTypeChoiceList_t
                pub const m_vecColorScale: usize = 0x218; // CParticleCollectionVecInput
                pub const m_nColorBlendType: usize = 0x8A8; // ParticleColorBlendType_t
                pub const m_flIntensity: usize = 0x8B0; // CPerParticleFloatInput
                pub const m_bCastShadows: usize = 0xA18; // bool
                pub const m_flTheta: usize = 0xA20; // CParticleCollectionFloatInput
                pub const m_flPhi: usize = 0xB88; // CParticleCollectionFloatInput
                pub const m_flRadiusMultiplier: usize = 0xCF0; // CParticleCollectionFloatInput
                pub const m_nAttenuationStyle: usize = 0xE58; // StandardLightingAttenuationStyle_t
                pub const m_flFalloffLinearity: usize = 0xE60; // CParticleCollectionFloatInput
                pub const m_flFiftyPercentFalloff: usize = 0xFC8; // CParticleCollectionFloatInput
                pub const m_flZeroPercentFalloff: usize = 0x1130; // CParticleCollectionFloatInput
                pub const m_bRenderDiffuse: usize = 0x1298; // bool
                pub const m_bRenderSpecular: usize = 0x1299; // bool
                pub const m_lightCookie: usize = 0x12A0; // CUtlString
                pub const m_nPriority: usize = 0x12A8; // int32
                pub const m_nFogLightingMode: usize = 0x12AC; // ParticleLightFogLightingMode_t
                pub const m_flFogContribution: usize = 0x12B0; // CParticleCollectionRendererFloatInput
                pub const m_nCapsuleLightBehavior: usize = 0x1418; // ParticleLightBehaviorChoiceList_t
                pub const m_flCapsuleLength: usize = 0x141C; // float32
                pub const m_bReverseOrder: usize = 0x1420; // bool
                pub const m_bClosedLoop: usize = 0x1421; // bool
                pub const m_nPrevPntSource: usize = 0x1424; // ParticleAttributeIndex_t
                pub const m_flMaxLength: usize = 0x1428; // float32
                pub const m_flMinLength: usize = 0x142C; // float32
                pub const m_bIgnoreDT: usize = 0x1430; // bool
                pub const m_flConstrainRadiusToLengthRatio: usize = 0x1434; // float32
                pub const m_flLengthScale: usize = 0x1438; // float32
                pub const m_flLengthFadeInTime: usize = 0x143C; // float32
            }
            // Parent: None
            // Fields count: 15
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_DistanceToTransform {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_flInputMax: usize = 0x338; // CPerParticleFloatInput
                pub const m_flOutputMin: usize = 0x4A0; // CPerParticleFloatInput
                pub const m_flOutputMax: usize = 0x608; // CPerParticleFloatInput
                pub const m_TransformStart: usize = 0x770; // CParticleTransformInput
                pub const m_bLOS: usize = 0x7D0; // bool
                pub const m_CollisionGroupName: usize = 0x7D1; // char[128]
                pub const m_nTraceSet: usize = 0x854; // ParticleTraceSet_t
                pub const m_flMaxTraceLength: usize = 0x858; // float32
                pub const m_flLOSScale: usize = 0x85C; // float32
                pub const m_nSetMethod: usize = 0x860; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x864; // bool
                pub const m_bAdditive: usize = 0x865; // bool
                pub const m_vecComponentScale: usize = 0x868; // CPerParticleVecInput
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapControlPointOrientationToRotation {
                pub const m_nCP: usize = 0x1C8; // int32
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_flOffsetRot: usize = 0x1D0; // float32
                pub const m_nComponent: usize = 0x1D4; // int32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetControlPointToCenter {
                pub const m_nCP1: usize = 0x1CC; // int32
                pub const m_vecCP1Pos: usize = 0x1D0; // Vector
                pub const m_bUseAvgParticlePos: usize = 0x1DC; // bool
                pub const m_nSetParent: usize = 0x1E0; // ParticleParentSetMode_t
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapAverageScalarValuetoCP {
                pub const m_nExpression: usize = 0x1CC; // SetStatisticExpressionType_t
                pub const m_flDecimalPlaces: usize = 0x1D0; // CParticleCollectionFloatInput
                pub const m_nOutControlPointNumber: usize = 0x338; // int32
                pub const m_nOutVectorField: usize = 0x33C; // int32
                pub const m_nField: usize = 0x340; // ParticleAttributeIndex_t
                pub const m_flOutputRemap: usize = 0x348; // CParticleRemapFloatInput
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapDotProductToScalar {
                pub const m_nInputCP1: usize = 0x1C8; // int32
                pub const m_nInputCP2: usize = 0x1CC; // int32
                pub const m_nFieldOutput: usize = 0x1D0; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1D4; // float32
                pub const m_flInputMax: usize = 0x1D8; // float32
                pub const m_flOutputMin: usize = 0x1DC; // float32
                pub const m_flOutputMax: usize = 0x1E0; // float32
                pub const m_bUseParticleVelocity: usize = 0x1E4; // bool
                pub const m_nSetMethod: usize = 0x1E8; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x1EC; // bool
                pub const m_bUseParticleNormal: usize = 0x1ED; // bool
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapCPtoCP {
                pub const m_nInputControlPoint: usize = 0x1CC; // int32
                pub const m_nOutputControlPoint: usize = 0x1D0; // int32
                pub const m_nInputField: usize = 0x1D4; // int32
                pub const m_nOutputField: usize = 0x1D8; // int32
                pub const m_flInputMin: usize = 0x1DC; // float32
                pub const m_flInputMax: usize = 0x1E0; // float32
                pub const m_flOutputMin: usize = 0x1E4; // float32
                pub const m_flOutputMax: usize = 0x1E8; // float32
                pub const m_bDerivative: usize = 0x1EC; // bool
                pub const m_flInterpRate: usize = 0x1F0; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetControlPointRotation {
                pub const m_vecRotAxis: usize = 0x1D0; // CParticleCollectionVecInput
                pub const m_flRotRate: usize = 0x860; // CParticleCollectionFloatInput
                pub const m_nCP: usize = 0x9C8; // int32
                pub const m_nLocalCP: usize = 0x9CC; // int32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_CurlNoiseForce {
                pub const m_nNoiseType: usize = 0x1D4; // ParticleDirectionNoiseType_t
                pub const m_vecNoiseFreq: usize = 0x1D8; // CPerParticleVecInput
                pub const m_vecNoiseScale: usize = 0x868; // CPerParticleVecInput
                pub const m_vecOffset: usize = 0xEF8; // CPerParticleVecInput
                pub const m_vecOffsetRate: usize = 0x1588; // CPerParticleVecInput
                pub const m_flWorleySeed: usize = 0x1C18; // CPerParticleFloatInput
                pub const m_flWorleyJitter: usize = 0x1D80; // CPerParticleFloatInput
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_Orient2DRelToCP {
                pub const m_nCP: usize = 0x1CC; // int32
                pub const m_nFieldOutput: usize = 0x1D0; // ParticleAttributeIndex_t
                pub const m_flRotOffset: usize = 0x1D4; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetSimulationRate {
                pub const m_flSimulationScale: usize = 0x1D0; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_FadeIn {
                pub const m_flFadeInTimeMin: usize = 0x1C8; // float32
                pub const m_flFadeInTimeMax: usize = 0x1CC; // float32
                pub const m_flFadeInTimeExp: usize = 0x1D0; // float32
                pub const m_bProportional: usize = 0x1D4; // bool
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RenderScreenShake {
                pub const m_flDurationScale: usize = 0x214; // float32
                pub const m_flRadiusScale: usize = 0x218; // float32
                pub const m_flFrequencyScale: usize = 0x21C; // float32
                pub const m_flAmplitudeScale: usize = 0x220; // float32
                pub const m_nRadiusField: usize = 0x224; // ParticleAttributeIndex_t
                pub const m_nDurationField: usize = 0x228; // ParticleAttributeIndex_t
                pub const m_nFrequencyField: usize = 0x22C; // ParticleAttributeIndex_t
                pub const m_nAmplitudeField: usize = 0x230; // ParticleAttributeIndex_t
                pub const m_nFilterCP: usize = 0x234; // int32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapBoundingVolumetoCP {
                pub const m_nOutControlPointNumber: usize = 0x1CC; // int32
                pub const m_flInputMin: usize = 0x1D0; // float32
                pub const m_flInputMax: usize = 0x1D4; // float32
                pub const m_flOutputMin: usize = 0x1D8; // float32
                pub const m_flOutputMax: usize = 0x1DC; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_HSVShiftToCP {
                pub const m_nColorCP: usize = 0x1CC; // int32
                pub const m_nColorGemEnableCP: usize = 0x1D0; // int32
                pub const m_nOutputCP: usize = 0x1D4; // int32
                pub const m_DefaultHSVColor: usize = 0x1D8; // Color
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_GlobalScale {
                pub const m_flScale: usize = 0x1CC; // float32
                pub const m_nScaleControlPointNumber: usize = 0x1D0; // int32
                pub const m_nControlPointNumber: usize = 0x1D4; // int32
                pub const m_bScaleRadius: usize = 0x1D8; // bool
                pub const m_bScalePosition: usize = 0x1D9; // bool
                pub const m_bScaleVelocity: usize = 0x1DA; // bool
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RadiusFromCPObject {
                pub const m_nControlPoint: usize = 0x1CC; // int32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_InitialVelocityFromHitbox {
                pub const m_flVelocityMin: usize = 0x1CC; // float32
                pub const m_flVelocityMax: usize = 0x1D0; // float32
                pub const m_nControlPointNumber: usize = 0x1D4; // int32
                pub const m_HitboxSetName: usize = 0x1D8; // char[128]
                pub const m_bUseBones: usize = 0x258; // bool
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_LerpVector {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_vecOutput: usize = 0x1CC; // Vector
                pub const m_flStartTime: usize = 0x1D8; // float32
                pub const m_flEndTime: usize = 0x1DC; // float32
                pub const m_nSetMethod: usize = 0x1E0; // ParticleSetMethod_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetControlPointFieldToWater {
                pub const m_nSourceCP: usize = 0x1CC; // int32
                pub const m_nDestCP: usize = 0x1D0; // int32
                pub const m_nCPField: usize = 0x1D4; // int32
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // ���x.
            pub mod TextureGroup_t {
                pub const m_bEnabled: usize = 0x0; // bool
                pub const m_bReplaceTextureWithGradient: usize = 0x1; // bool
                pub const m_hTexture: usize = 0x8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Gradient: usize = 0x10; // CColorGradient
                pub const m_nTextureType: usize = 0x28; // SpriteCardTextureType_t
                pub const m_nTextureChannels: usize = 0x2C; // SpriteCardTextureChannel_t
                pub const m_nTextureBlendMode: usize = 0x30; // ParticleTextureLayerBlendType_t
                pub const m_flTextureBlend: usize = 0x38; // CParticleCollectionRendererFloatInput
                pub const m_TextureControls: usize = 0x1A0; // TextureControls_t
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_TimeVaryingForce {
                pub const m_flStartLerpTime: usize = 0x1D4; // float32
                pub const m_StartingForce: usize = 0x1D8; // Vector
                pub const m_flEndLerpTime: usize = 0x1E4; // float32
                pub const m_EndingForce: usize = 0x1E8; // Vector
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetCPOrientationToGroundNormal {
                pub const m_flInterpRate: usize = 0x1C8; // float32
                pub const m_flMaxTraceLength: usize = 0x1CC; // float32
                pub const m_flTolerance: usize = 0x1D0; // float32
                pub const m_flTraceOffset: usize = 0x1D4; // float32
                pub const m_CollisionGroupName: usize = 0x1D8; // char[128]
                pub const m_nTraceSet: usize = 0x258; // ParticleTraceSet_t
                pub const m_nInputCP: usize = 0x25C; // int32
                pub const m_nOutputCP: usize = 0x260; // int32
                pub const m_bIncludeWater: usize = 0x270; // bool
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SnapshotSkinToBones {
                pub const m_bTransformNormals: usize = 0x1C8; // bool
                pub const m_bTransformRadii: usize = 0x1C9; // bool
                pub const m_nControlPointNumber: usize = 0x1CC; // int32
                pub const m_flLifeTimeFadeStart: usize = 0x1D0; // float32
                pub const m_flLifeTimeFadeEnd: usize = 0x1D4; // float32
                pub const m_flJumpThreshold: usize = 0x1D8; // float32
                pub const m_flPrevPosScale: usize = 0x1DC; // float32
            }
            // Parent: None
            // Fields count: 13
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_CreateWithinSphereTransform {
                pub const m_fRadiusMin: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_fRadiusMax: usize = 0x338; // CPerParticleFloatInput
                pub const m_vecDistanceBias: usize = 0x4A0; // CPerParticleVecInput
                pub const m_vecDistanceBiasAbs: usize = 0xB30; // Vector
                pub const m_TransformInput: usize = 0xB40; // CParticleTransformInput
                pub const m_fSpeedMin: usize = 0xBA0; // CPerParticleFloatInput
                pub const m_fSpeedMax: usize = 0xD08; // CPerParticleFloatInput
                pub const m_fSpeedRandExp: usize = 0xE70; // float32
                pub const m_bLocalCoords: usize = 0xE74; // bool
                pub const m_LocalCoordinateSystemSpeedMin: usize = 0xE78; // CPerParticleVecInput
                pub const m_LocalCoordinateSystemSpeedMax: usize = 0x1508; // CPerParticleVecInput
                pub const m_nFieldOutput: usize = 0x1B98; // ParticleAttributeIndex_t
                pub const m_nFieldVelocity: usize = 0x1B9C; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RadiusDecay {
                pub const m_flMinRadius: usize = 0x1C8; // float32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RemapNamedModelBodyPartToScalar {
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RemapScalarToVector {
                pub const m_nFieldInput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1D0; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1D4; // float32
                pub const m_flInputMax: usize = 0x1D8; // float32
                pub const m_vecOutputMin: usize = 0x1DC; // Vector
                pub const m_vecOutputMax: usize = 0x1E8; // Vector
                pub const m_flStartTime: usize = 0x1F4; // float32
                pub const m_flEndTime: usize = 0x1F8; // float32
                pub const m_nSetMethod: usize = 0x1FC; // ParticleSetMethod_t
                pub const m_nControlPointNumber: usize = 0x200; // int32
                pub const m_bLocalCoords: usize = 0x204; // bool
                pub const m_flRemapBias: usize = 0x208; // float32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_InitialSequenceFromModel {
                pub const m_nControlPointNumber: usize = 0x1CC; // int32
                pub const m_nFieldOutput: usize = 0x1D0; // ParticleAttributeIndex_t
                pub const m_nFieldOutputAnim: usize = 0x1D4; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1D8; // float32
                pub const m_flInputMax: usize = 0x1DC; // float32
                pub const m_flOutputMin: usize = 0x1E0; // float32
                pub const m_flOutputMax: usize = 0x1E4; // float32
                pub const m_nSetMethod: usize = 0x1E8; // ParticleSetMethod_t
            }
            // Parent: None
            // Fields count: 15
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_NoiseEmitter {
                pub const m_flEmissionDuration: usize = 0x1CC; // float32
                pub const m_flStartTime: usize = 0x1D0; // float32
                pub const m_flEmissionScale: usize = 0x1D4; // float32
                pub const m_nScaleControlPoint: usize = 0x1D8; // int32
                pub const m_nScaleControlPointField: usize = 0x1DC; // int32
                pub const m_nWorldNoisePoint: usize = 0x1E0; // int32
                pub const m_bAbsVal: usize = 0x1E4; // bool
                pub const m_bAbsValInv: usize = 0x1E5; // bool
                pub const m_flOffset: usize = 0x1E8; // float32
                pub const m_flOutputMin: usize = 0x1EC; // float32
                pub const m_flOutputMax: usize = 0x1F0; // float32
                pub const m_flNoiseScale: usize = 0x1F4; // float32
                pub const m_flWorldNoiseScale: usize = 0x1F8; // float32
                pub const m_vecOffsetLoc: usize = 0x1FC; // Vector
                pub const m_flWorldTimeScale: usize = 0x208; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod CParticleFunctionInitializer {
                pub const m_nAssociatedEmitterIndex: usize = 0x1C8; // int32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SelectivelyEnableChildren {
                pub const m_nChildGroupID: usize = 0x1D0; // CParticleCollectionFloatInput
                pub const m_nFirstChild: usize = 0x338; // CParticleCollectionFloatInput
                pub const m_nNumChildrenToEnable: usize = 0x4A0; // CParticleCollectionFloatInput
                pub const m_bPlayEndcapOnStop: usize = 0x608; // bool
                pub const m_bDestroyImmediately: usize = 0x609; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            pub mod ModelReference_t {
                pub const m_model: usize = 0x0; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_flRelativeProbabilityOfSpawn: usize = 0x8; // float32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_PlanarConstraint {
                pub const m_PointOnPlane: usize = 0x1C8; // Vector
                pub const m_PlaneNormal: usize = 0x1D4; // Vector
                pub const m_nControlPointNumber: usize = 0x1E0; // int32
                pub const m_bGlobalOrigin: usize = 0x1E4; // bool
                pub const m_bGlobalNormal: usize = 0x1E5; // bool
                pub const m_flRadiusScale: usize = 0x1E8; // CPerParticleFloatInput
                pub const m_flMaximumDistanceToCP: usize = 0x350; // CParticleCollectionFloatInput
                pub const m_bUseOldCode: usize = 0x4B8; // bool
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_CreateFromCPs {
                pub const m_nIncrement: usize = 0x1CC; // int32
                pub const m_nMinCP: usize = 0x1D0; // int32
                pub const m_nMaxCP: usize = 0x1D4; // int32
                pub const m_nDynamicCPCount: usize = 0x1D8; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_LockPoints {
                pub const m_nMinCol: usize = 0x1C8; // int32
                pub const m_nMaxCol: usize = 0x1CC; // int32
                pub const m_nMinRow: usize = 0x1D0; // int32
                pub const m_nMaxRow: usize = 0x1D4; // int32
                pub const m_nControlPoint: usize = 0x1D8; // int32
                pub const m_flBlendValue: usize = 0x1DC; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_CreateSpiralSphere {
                pub const m_nControlPointNumber: usize = 0x1CC; // int32
                pub const m_nOverrideCP: usize = 0x1D0; // int32
                pub const m_nDensity: usize = 0x1D4; // int32
                pub const m_flInitialRadius: usize = 0x1D8; // float32
                pub const m_flInitialSpeedMin: usize = 0x1DC; // float32
                pub const m_flInitialSpeedMax: usize = 0x1E0; // float32
                pub const m_bUseParticleCount: usize = 0x1E4; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_CPVelocityForce {
                pub const m_nControlPointNumber: usize = 0x1D4; // int32
                pub const m_flScale: usize = 0x1D8; // CPerParticleFloatInput
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapNamedModelElementEndCap {
                pub const m_hModel: usize = 0x1C8; // CStrongHandle<InfoForResourceTypeCModel>
                pub const m_inNames: usize = 0x1D0; // CUtlVector<CUtlString>
                pub const m_outNames: usize = 0x1E8; // CUtlVector<CUtlString>
                pub const m_fallbackNames: usize = 0x200; // CUtlVector<CUtlString>
                pub const m_bModelFromRenderer: usize = 0x218; // bool
                pub const m_nFieldInput: usize = 0x21C; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x220; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_ScaleVelocity {
                pub const m_vecScale: usize = 0x1D0; // CParticleCollectionVecInput
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_MoveToHitbox {
                pub const m_modelInput: usize = 0x1C8; // CParticleModelInput
                pub const m_transformInput: usize = 0x220; // CParticleTransformInput
                pub const m_flLifeTimeLerpStart: usize = 0x284; // float32
                pub const m_flLifeTimeLerpEnd: usize = 0x288; // float32
                pub const m_flPrevPosScale: usize = 0x28C; // float32
                pub const m_HitboxSetName: usize = 0x290; // char[128]
                pub const m_bUseBones: usize = 0x310; // bool
                pub const m_nLerpType: usize = 0x314; // HitboxLerpType_t
                pub const m_flInterpolation: usize = 0x318; // CPerParticleFloatInput
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_PinRopeSegmentParticleToParent {
                pub const m_nParticleSelection: usize = 0x1C8; // ParticleSelection_t
                pub const m_nParticleNumber: usize = 0x1D0; // CParticleCollectionFloatInput
                pub const m_flInterpolation: usize = 0x338; // CPerParticleFloatInput
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_PointList {
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_pointList: usize = 0x1D0; // CUtlVector<PointDefinition_t>
                pub const m_bPlaceAlongPath: usize = 0x1E8; // bool
                pub const m_bClosedLoop: usize = 0x1E9; // bool
                pub const m_nNumPointsAlongPath: usize = 0x1EC; // int32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_LerpToOtherAttribute {
                pub const m_flInterpolation: usize = 0x1C8; // CPerParticleFloatInput
                pub const m_nFieldInputFrom: usize = 0x330; // ParticleAttributeIndex_t
                pub const m_nFieldInput: usize = 0x334; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x338; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RandomColor {
                pub const m_ColorMin: usize = 0x1E8; // Color
                pub const m_ColorMax: usize = 0x1EC; // Color
                pub const m_TintMin: usize = 0x1F0; // Color
                pub const m_TintMax: usize = 0x1F4; // Color
                pub const m_flTintPerc: usize = 0x1F8; // float32
                pub const m_flUpdateThreshold: usize = 0x1FC; // float32
                pub const m_nTintCP: usize = 0x200; // int32
                pub const m_nFieldOutput: usize = 0x204; // ParticleAttributeIndex_t
                pub const m_nTintBlendMode: usize = 0x208; // ParticleColorBlendMode_t
                pub const m_flLightAmplification: usize = 0x20C; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetGravityToCP {
                pub const m_nCPInput: usize = 0x1CC; // int32
                pub const m_nCPOutput: usize = 0x1D0; // int32
                pub const m_flScale: usize = 0x1D8; // CParticleCollectionFloatInput
                pub const m_bSetOrientation: usize = 0x340; // bool
                pub const m_bSetZDown: usize = 0x341; // bool
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RemapParticleCountToScalar {
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_nInputMin: usize = 0x1D0; // int32
                pub const m_nInputMax: usize = 0x1D4; // int32
                pub const m_nScaleControlPoint: usize = 0x1D8; // int32
                pub const m_nScaleControlPointField: usize = 0x1DC; // int32
                pub const m_flOutputMin: usize = 0x1E0; // float32
                pub const m_flOutputMax: usize = 0x1E4; // float32
                pub const m_nSetMethod: usize = 0x1E8; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x1EC; // bool
                pub const m_bInvert: usize = 0x1ED; // bool
                pub const m_bWrap: usize = 0x1EE; // bool
                pub const m_flRemapBias: usize = 0x1F0; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_InheritFromParentParticles {
                pub const m_flScale: usize = 0x1CC; // float32
                pub const m_nFieldOutput: usize = 0x1D0; // ParticleAttributeIndex_t
                pub const m_nIncrement: usize = 0x1D4; // int32
                pub const m_bRandomDistribution: usize = 0x1D8; // bool
                pub const m_nRandomSeed: usize = 0x1DC; // int32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RampScalarLinearSimple {
                pub const m_Rate: usize = 0x1C8; // float32
                pub const m_flStartTime: usize = 0x1CC; // float32
                pub const m_flEndTime: usize = 0x1D0; // float32
                pub const m_nField: usize = 0x200; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_ChaoticAttractor {
                pub const m_flAParm: usize = 0x1CC; // float32
                pub const m_flBParm: usize = 0x1D0; // float32
                pub const m_flCParm: usize = 0x1D4; // float32
                pub const m_flDParm: usize = 0x1D8; // float32
                pub const m_flScale: usize = 0x1DC; // float32
                pub const m_flSpeedMin: usize = 0x1E0; // float32
                pub const m_flSpeedMax: usize = 0x1E4; // float32
                pub const m_nBaseCP: usize = 0x1E8; // int32
                pub const m_bUniformSpeed: usize = 0x1EC; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_MovementRigidAttachToCP {
                pub const m_nControlPointNumber: usize = 0x1C8; // int32
                pub const m_nScaleControlPoint: usize = 0x1CC; // int32
                pub const m_nScaleCPField: usize = 0x1D0; // int32
                pub const m_nFieldInput: usize = 0x1D4; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1D8; // ParticleAttributeIndex_t
                pub const m_bOffsetLocal: usize = 0x1DC; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RenderFlattenGrass {
                pub const m_flFlattenStrength: usize = 0x214; // float32
                pub const m_nStrengthFieldOverride: usize = 0x218; // ParticleAttributeIndex_t
                pub const m_flRadiusScale: usize = 0x21C; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RenderLightBeam {
                pub const m_vColorBlend: usize = 0x218; // CParticleCollectionVecInput
                pub const m_nColorBlendType: usize = 0x8A8; // ParticleColorBlendType_t
                pub const m_flBrightnessLumensPerMeter: usize = 0x8B0; // CParticleCollectionFloatInput
                pub const m_bCastShadows: usize = 0xA18; // bool
                pub const m_flSkirt: usize = 0xA20; // CParticleCollectionFloatInput
                pub const m_flRange: usize = 0xB88; // CParticleCollectionFloatInput
                pub const m_flThickness: usize = 0xCF0; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_EnableChildrenFromParentParticleCount {
                pub const m_nChildGroupID: usize = 0x1CC; // int32
                pub const m_nFirstChild: usize = 0x1D0; // int32
                pub const m_nNumChildrenToEnable: usize = 0x1D8; // CParticleCollectionFloatInput
                pub const m_bDisableChildren: usize = 0x340; // bool
                pub const m_bPlayEndcapOnStop: usize = 0x341; // bool
                pub const m_bDestroyImmediately: usize = 0x342; // bool
            }
            // Parent: None
            // Fields count: 15
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_DistanceToCPInit {
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_flInputMax: usize = 0x338; // CPerParticleFloatInput
                pub const m_flOutputMin: usize = 0x4A0; // CPerParticleFloatInput
                pub const m_flOutputMax: usize = 0x608; // CPerParticleFloatInput
                pub const m_nStartCP: usize = 0x770; // int32
                pub const m_bLOS: usize = 0x774; // bool
                pub const m_CollisionGroupName: usize = 0x775; // char[128]
                pub const m_nTraceSet: usize = 0x7F8; // ParticleTraceSet_t
                pub const m_flMaxTraceLength: usize = 0x800; // CPerParticleFloatInput
                pub const m_flLOSScale: usize = 0x968; // float32
                pub const m_nSetMethod: usize = 0x96C; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x970; // bool
                pub const m_vecDistanceScale: usize = 0x974; // Vector
                pub const m_flRemapBias: usize = 0x980; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            pub mod CReplicationParameters {
                pub const m_nReplicationMode: usize = 0x0; // ParticleReplicationMode_t
                pub const m_bScaleChildParticleRadii: usize = 0x4; // bool
                pub const m_flMinRandomRadiusScale: usize = 0x8; // CParticleCollectionFloatInput
                pub const m_flMaxRandomRadiusScale: usize = 0x170; // CParticleCollectionFloatInput
                pub const m_vMinRandomDisplacement: usize = 0x2D8; // CParticleCollectionVecInput
                pub const m_vMaxRandomDisplacement: usize = 0x968; // CParticleCollectionVecInput
                pub const m_flModellingScale: usize = 0xFF8; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_EndCapDecay {
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_ForceBasedOnDistanceToPlane {
                pub const m_flMinDist: usize = 0x1D4; // float32
                pub const m_vecForceAtMinDist: usize = 0x1D8; // Vector
                pub const m_flMaxDist: usize = 0x1E4; // float32
                pub const m_vecForceAtMaxDist: usize = 0x1E8; // Vector
                pub const m_vecPlaneNormal: usize = 0x1F4; // Vector
                pub const m_nControlPointNumber: usize = 0x200; // int32
                pub const m_flExponent: usize = 0x204; // float32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapDensityToVector {
                pub const m_flRadiusScale: usize = 0x1C8; // float32
                pub const m_nFieldOutput: usize = 0x1CC; // ParticleAttributeIndex_t
                pub const m_flDensityMin: usize = 0x1D0; // float32
                pub const m_flDensityMax: usize = 0x1D4; // float32
                pub const m_vecOutputMin: usize = 0x1D8; // Vector
                pub const m_vecOutputMax: usize = 0x1E4; // Vector
                pub const m_bUseParentDensity: usize = 0x1F0; // bool
                pub const m_nVoxelGridResolution: usize = 0x1F4; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            pub mod ParticleControlPointConfiguration_t {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_drivers: usize = 0x8; // CUtlVector<ParticleControlPointDriver_t>
                pub const m_previewState: usize = 0x20; // ParticlePreviewState_t
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_SetRigidAttachment {
                pub const m_nControlPointNumber: usize = 0x1CC; // int32
                pub const m_nFieldInput: usize = 0x1D0; // ParticleAttributeIndex_t
                pub const m_nFieldOutput: usize = 0x1D4; // ParticleAttributeIndex_t
                pub const m_bLocalSpace: usize = 0x1D8; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            pub mod MaterialVariable_t {
                pub const m_strVariable: usize = 0x0; // CUtlString
                pub const m_nVariableField: usize = 0x8; // ParticleAttributeIndex_t
                pub const m_flScale: usize = 0xC; // float32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod CParticleFunctionConstraint {
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapSpeed {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1CC; // float32
                pub const m_flInputMax: usize = 0x1D0; // float32
                pub const m_flOutputMin: usize = 0x1D4; // float32
                pub const m_flOutputMax: usize = 0x1D8; // float32
                pub const m_nSetMethod: usize = 0x1DC; // ParticleSetMethod_t
                pub const m_bIgnoreDelta: usize = 0x1E0; // bool
            }
            // Parent: None
            // Fields count: 55
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RenderModels {
                pub const m_bOnlyRenderInEffectsBloomPass: usize = 0x212; // bool
                pub const m_bOnlyRenderInEffectsWaterPass: usize = 0x213; // bool
                pub const m_bUseMixedResolutionRendering: usize = 0x214; // bool
                pub const m_bOnlyRenderInEffecsGameOverlay: usize = 0x215; // bool
                pub const m_ModelList: usize = 0x218; // CUtlVector<ModelReference_t>
                pub const m_nBodyGroupField: usize = 0x230; // ParticleAttributeIndex_t
                pub const m_nSubModelField: usize = 0x234; // ParticleAttributeIndex_t
                pub const m_bIgnoreNormal: usize = 0x238; // bool
                pub const m_bOrientZ: usize = 0x239; // bool
                pub const m_bCenterOffset: usize = 0x23A; // bool
                pub const m_vecLocalOffset: usize = 0x240; // CPerParticleVecInput
                pub const m_vecLocalRotation: usize = 0x8D0; // CPerParticleVecInput
                pub const m_bIgnoreRadius: usize = 0xF60; // bool
                pub const m_nModelScaleCP: usize = 0xF64; // int32
                pub const m_vecComponentScale: usize = 0xF68; // CPerParticleVecInput
                pub const m_bLocalScale: usize = 0x15F8; // bool
                pub const m_nSizeCullBloat: usize = 0x15FC; // int32
                pub const m_bAnimated: usize = 0x1600; // bool
                pub const m_flAnimationRate: usize = 0x1608; // CPerParticleFloatInput
                pub const m_bScaleAnimationRate: usize = 0x1770; // bool
                pub const m_bForceLoopingAnimation: usize = 0x1771; // bool
                pub const m_bResetAnimOnStop: usize = 0x1772; // bool
                pub const m_bManualAnimFrame: usize = 0x1773; // bool
                pub const m_nAnimationScaleField: usize = 0x1774; // ParticleAttributeIndex_t
                pub const m_nAnimationField: usize = 0x1778; // ParticleAttributeIndex_t
                pub const m_nManualFrameField: usize = 0x177C; // ParticleAttributeIndex_t
                pub const m_ActivityName: usize = 0x1780; // char[256]
                pub const m_SequenceName: usize = 0x1880; // char[256]
                pub const m_bEnableClothSimulation: usize = 0x1980; // bool
                pub const m_ClothEffectName: usize = 0x1981; // char[64]
                pub const m_hOverrideMaterial: usize = 0x19C8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_bOverrideTranslucentMaterials: usize = 0x19D0; // bool
                pub const m_nSkin: usize = 0x19D8; // CPerParticleFloatInput
                pub const m_MaterialVars: usize = 0x1B40; // CUtlVector<MaterialVariable_t>
                pub const m_flRenderFilter: usize = 0x1B58; // CPerParticleFloatInput
                pub const m_flManualModelSelection: usize = 0x1CC0; // CPerParticleFloatInput
                pub const m_modelInput: usize = 0x1E28; // CParticleModelInput
                pub const m_nLOD: usize = 0x1E80; // int32
                pub const m_EconSlotName: usize = 0x1E84; // char[256]
                pub const m_bOriginalModel: usize = 0x1F84; // bool
                pub const m_bSuppressTint: usize = 0x1F85; // bool
                pub const m_nSubModelFieldType: usize = 0x1F88; // RenderModelSubModelFieldType_t
                pub const m_bDisableShadows: usize = 0x1F8C; // bool
                pub const m_bDisableDepthPrepass: usize = 0x1F8D; // bool
                pub const m_bAcceptsDecals: usize = 0x1F8E; // bool
                pub const m_bForceDrawInterlevedWithSiblings: usize = 0x1F8F; // bool
                pub const m_bDoNotDrawInParticlePass: usize = 0x1F90; // bool
                pub const m_bAllowApproximateTransforms: usize = 0x1F91; // bool
                pub const m_szRenderAttribute: usize = 0x1F92; // char[4096]
                pub const m_flRadiusScale: usize = 0x2F98; // CParticleCollectionFloatInput
                pub const m_flAlphaScale: usize = 0x3100; // CParticleCollectionFloatInput
                pub const m_flRollScale: usize = 0x3268; // CParticleCollectionFloatInput
                pub const m_nAlpha2Field: usize = 0x33D0; // ParticleAttributeIndex_t
                pub const m_vecColorScale: usize = 0x33D8; // CParticleCollectionVecInput
                pub const m_nColorBlendType: usize = 0x3A68; // ParticleColorBlendType_t
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RenderClientPhysicsImpulse {
                pub const m_flRadius: usize = 0x218; // CPerParticleFloatInput
                pub const m_flMagnitude: usize = 0x380; // CPerParticleFloatInput
                pub const m_nSimIdFilter: usize = 0x4E8; // int32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod CParticleFunctionEmitter {
                pub const m_nEmitterIndex: usize = 0x1C8; // int32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RemapNamedModelMeshGroupToScalar {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetControlPointOrientationToCPVelocity {
                pub const m_nCPInput: usize = 0x1CC; // int32
                pub const m_nCPOutput: usize = 0x1D0; // int32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RopeSpringConstraint {
                pub const m_flRestLength: usize = 0x1C8; // CParticleCollectionFloatInput
                pub const m_flMinDistance: usize = 0x330; // CParticleCollectionFloatInput
                pub const m_flMaxDistance: usize = 0x498; // CParticleCollectionFloatInput
                pub const m_flAdjustmentScale: usize = 0x600; // float32
                pub const m_flInitialRestingLength: usize = 0x608; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_PositionWarpScalar {
                pub const m_vecWarpMin: usize = 0x1CC; // Vector
                pub const m_vecWarpMax: usize = 0x1D8; // Vector
                pub const m_InputValue: usize = 0x1E8; // CPerParticleFloatInput
                pub const m_flPrevPosScale: usize = 0x350; // float32
                pub const m_nScaleControlPointNumber: usize = 0x354; // int32
                pub const m_nControlPointNumber: usize = 0x358; // int32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_ForceControlPointStub {
                pub const m_ControlPoint: usize = 0x1CC; // int32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_VectorNoise {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_vecOutputMin: usize = 0x1CC; // Vector
                pub const m_vecOutputMax: usize = 0x1D8; // Vector
                pub const m_fl4NoiseScale: usize = 0x1E4; // float32
                pub const m_bAdditive: usize = 0x1E8; // bool
                pub const m_bOffset: usize = 0x1E9; // bool
                pub const m_flNoiseAnimationTimeScale: usize = 0x1EC; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapParticleCountToScalar {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_nInputMin: usize = 0x1D0; // CParticleCollectionFloatInput
                pub const m_nInputMax: usize = 0x338; // CParticleCollectionFloatInput
                pub const m_flOutputMin: usize = 0x4A0; // CParticleCollectionFloatInput
                pub const m_flOutputMax: usize = 0x608; // CParticleCollectionFloatInput
                pub const m_bActiveRange: usize = 0x770; // bool
                pub const m_nSetMethod: usize = 0x774; // ParticleSetMethod_t
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_QuantizeFloat {
                pub const m_InputValue: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_nOutputField: usize = 0x338; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RemapModelVolumetoCP {
                pub const m_nBBoxType: usize = 0x1CC; // BBoxVolumeType_t
                pub const m_nInControlPointNumber: usize = 0x1D0; // int32
                pub const m_nOutControlPointNumber: usize = 0x1D4; // int32
                pub const m_nOutControlPointMaxNumber: usize = 0x1D8; // int32
                pub const m_nField: usize = 0x1DC; // int32
                pub const m_flInputMin: usize = 0x1E0; // float32
                pub const m_flInputMax: usize = 0x1E4; // float32
                pub const m_flOutputMin: usize = 0x1E8; // float32
                pub const m_flOutputMax: usize = 0x1EC; // float32
                pub const m_bBBoxOnly: usize = 0x1F0; // bool
                pub const m_bCubeRoot: usize = 0x1F1; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetToCP {
                pub const m_nControlPointNumber: usize = 0x1C8; // int32
                pub const m_vecOffset: usize = 0x1CC; // Vector
                pub const m_bOffsetLocal: usize = 0x1D8; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            pub mod ParticleControlPointDriver_t {
                pub const m_iControlPoint: usize = 0x0; // ParticleParamID_t
                pub const m_iAttachType: usize = 0x10; // ParticleAttachment_t
                pub const m_attachmentName: usize = 0x18; // CUtlString
                pub const m_vecOffset: usize = 0x20; // Vector
                pub const m_angOffset: usize = 0x2C; // QAngle
                pub const m_entityName: usize = 0x38; // CUtlString
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_ParentVortices {
                pub const m_flForceScale: usize = 0x1D4; // float32
                pub const m_vecTwistAxis: usize = 0x1D8; // Vector
                pub const m_bFlipBasedOnYaw: usize = 0x1E4; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetControlPointToCPVelocity {
                pub const m_nCPInput: usize = 0x1CC; // int32
                pub const m_nCPOutputVel: usize = 0x1D0; // int32
                pub const m_bNormalize: usize = 0x1D4; // bool
                pub const m_nCPOutputMag: usize = 0x1D8; // int32
                pub const m_nCPField: usize = 0x1DC; // int32
                pub const m_vecComparisonVelocity: usize = 0x1E0; // CParticleCollectionVecInput
            }
            // Parent: None
            // Fields count: 13
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_ClientPhysics {
                pub const m_strPhysicsType: usize = 0x218; // CUtlString
                pub const m_bStartAsleep: usize = 0x220; // bool
                pub const m_flPlayerWakeRadius: usize = 0x228; // CParticleCollectionFloatInput
                pub const m_flVehicleWakeRadius: usize = 0x390; // CParticleCollectionFloatInput
                pub const m_bUseHighQualitySimulation: usize = 0x4F8; // bool
                pub const m_nMaxParticleCount: usize = 0x4FC; // int32
                pub const m_bRespectExclusionVolumes: usize = 0x500; // bool
                pub const m_bKillParticles: usize = 0x501; // bool
                pub const m_bDeleteSim: usize = 0x502; // bool
                pub const m_nControlPoint: usize = 0x504; // int32
                pub const m_nForcedSimId: usize = 0x508; // int32
                pub const m_nColorBlendType: usize = 0x50C; // ParticleColorBlendType_t
                pub const m_nForcedStatusEffects: usize = 0x510; // ParticleAttrBoxFlags_t
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SpinYaw {
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod PointDefinitionWithTimeValues_t {
                pub const m_flTimeDuration: usize = 0x14; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // ���x.
            pub mod RenderProjectedMaterial_t {
                pub const m_hMaterial: usize = 0x0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_SetFloatAttributeToVectorExpression {
                pub const m_nExpression: usize = 0x1CC; // VectorFloatExpressionType_t
                pub const m_vInput1: usize = 0x1D0; // CPerParticleVecInput
                pub const m_vInput2: usize = 0x860; // CPerParticleVecInput
                pub const m_flOutputRemap: usize = 0xEF0; // CParticleRemapFloatInput
                pub const m_nOutputField: usize = 0x1058; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x105C; // ParticleSetMethod_t
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_ExternalWindForce {
                pub const m_vecSamplePosition: usize = 0x1D8; // CPerParticleVecInput
                pub const m_vecScale: usize = 0x868; // CPerParticleVecInput
                pub const m_bSampleWind: usize = 0xEF8; // bool
                pub const m_bSampleWater: usize = 0xEF9; // bool
                pub const m_bDampenNearWaterPlane: usize = 0xEFA; // bool
                pub const m_bSampleGravity: usize = 0xEFB; // bool
                pub const m_vecGravityForce: usize = 0xF00; // CPerParticleVecInput
                pub const m_bUseBasicMovementGravity: usize = 0x1590; // bool
                pub const m_flLocalGravityScale: usize = 0x1598; // CPerParticleFloatInput
                pub const m_flLocalBuoyancyScale: usize = 0x1700; // CPerParticleFloatInput
                pub const m_vecBuoyancyForce: usize = 0x1868; // CPerParticleVecInput
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_ModelCull {
                pub const m_nControlPointNumber: usize = 0x1CC; // int32
                pub const m_bBoundBox: usize = 0x1D0; // bool
                pub const m_bCullOutside: usize = 0x1D1; // bool
                pub const m_bUseBones: usize = 0x1D2; // bool
                pub const m_HitboxSetName: usize = 0x1D3; // char[128]
            }
            // Parent: None
            // Fields count: 30
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RenderSprites {
                pub const m_nSequenceOverride: usize = 0x2CF8; // CParticleCollectionRendererFloatInput
                pub const m_bSequenceNumbersAreRawSequenceIndices: usize = 0x2E60; // bool
                pub const m_nOrientationType: usize = 0x2E64; // ParticleOrientationChoiceList_t
                pub const m_nOrientationControlPoint: usize = 0x2E68; // int32
                pub const m_bUseYawWithNormalAligned: usize = 0x2E6C; // bool
                pub const m_flMinSize: usize = 0x2E70; // CParticleCollectionRendererFloatInput
                pub const m_flMaxSize: usize = 0x2FD8; // CParticleCollectionRendererFloatInput
                pub const m_flAlphaAdjustWithSizeAdjust: usize = 0x3140; // CParticleCollectionRendererFloatInput
                pub const m_flStartFadeSize: usize = 0x32A8; // CParticleCollectionRendererFloatInput
                pub const m_flEndFadeSize: usize = 0x3410; // CParticleCollectionRendererFloatInput
                pub const m_flStartFadeDot: usize = 0x3578; // float32
                pub const m_flEndFadeDot: usize = 0x357C; // float32
                pub const m_bDistanceAlpha: usize = 0x3580; // bool
                pub const m_bSoftEdges: usize = 0x3581; // bool
                pub const m_flEdgeSoftnessStart: usize = 0x3584; // float32
                pub const m_flEdgeSoftnessEnd: usize = 0x3588; // float32
                pub const m_bOutline: usize = 0x358C; // bool
                pub const m_OutlineColor: usize = 0x358D; // Color
                pub const m_nOutlineAlpha: usize = 0x3594; // int32
                pub const m_flOutlineStart0: usize = 0x3598; // float32
                pub const m_flOutlineStart1: usize = 0x359C; // float32
                pub const m_flOutlineEnd0: usize = 0x35A0; // float32
                pub const m_flOutlineEnd1: usize = 0x35A4; // float32
                pub const m_nLightingMode: usize = 0x35A8; // ParticleLightingQuality_t
                pub const m_vecLightingOverride: usize = 0x35B0; // CParticleCollectionRendererVecInput
                pub const m_flLightingTessellation: usize = 0x3C40; // CParticleCollectionRendererFloatInput
                pub const m_flLightingDirectionality: usize = 0x3DA8; // CParticleCollectionRendererFloatInput
                pub const m_bParticleShadows: usize = 0x3F10; // bool
                pub const m_flShadowDensity: usize = 0x3F14; // float32
                pub const m_replicationParameters: usize = 0x3F18; // CReplicationParameters
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_PercentageBetweenTransformLerpCPs {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_flInputMin: usize = 0x1CC; // float32
                pub const m_flInputMax: usize = 0x1D0; // float32
                pub const m_TransformStart: usize = 0x1D8; // CParticleTransformInput
                pub const m_TransformEnd: usize = 0x238; // CParticleTransformInput
                pub const m_nOutputStartCP: usize = 0x298; // int32
                pub const m_nOutputStartField: usize = 0x29C; // int32
                pub const m_nOutputEndCP: usize = 0x2A0; // int32
                pub const m_nOutputEndField: usize = 0x2A4; // int32
                pub const m_nSetMethod: usize = 0x2A8; // ParticleSetMethod_t
                pub const m_bActiveRange: usize = 0x2AC; // bool
                pub const m_bRadialCheck: usize = 0x2AD; // bool
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetPerChildControlPoint {
                pub const m_nChildGroupID: usize = 0x1C8; // int32
                pub const m_nFirstControlPoint: usize = 0x1CC; // int32
                pub const m_nNumControlPoints: usize = 0x1D0; // int32
                pub const m_nParticleIncrement: usize = 0x1D8; // CParticleCollectionFloatInput
                pub const m_nFirstSourcePoint: usize = 0x340; // CParticleCollectionFloatInput
                pub const m_bSetOrientation: usize = 0x4A8; // bool
                pub const m_nOrientationField: usize = 0x4AC; // ParticleAttributeIndex_t
                pub const m_bNumBasedOnParticleCount: usize = 0x4B0; // bool
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RenderTreeShake {
                pub const m_flPeakStrength: usize = 0x214; // float32
                pub const m_nPeakStrengthFieldOverride: usize = 0x218; // ParticleAttributeIndex_t
                pub const m_flRadius: usize = 0x21C; // float32
                pub const m_nRadiusFieldOverride: usize = 0x220; // ParticleAttributeIndex_t
                pub const m_flShakeDuration: usize = 0x224; // float32
                pub const m_flTransitionTime: usize = 0x228; // float32
                pub const m_flTwistAmount: usize = 0x22C; // float32
                pub const m_flRadialAmount: usize = 0x230; // float32
                pub const m_flControlPointOrientationAmount: usize = 0x234; // float32
                pub const m_nControlPointForLinearDirection: usize = 0x238; // int32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_WorldCollideConstraint {
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_SetAttributeToScalarExpression {
                pub const m_nExpression: usize = 0x1C8; // ScalarExpressionType_t
                pub const m_flInput1: usize = 0x1D0; // CPerParticleFloatInput
                pub const m_flInput2: usize = 0x338; // CPerParticleFloatInput
                pub const m_flOutputRemap: usize = 0x4A0; // CParticleRemapFloatInput
                pub const m_nOutputField: usize = 0x608; // ParticleAttributeIndex_t
                pub const m_nSetMethod: usize = 0x60C; // ParticleSetMethod_t
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_CycleScalar {
                pub const m_nDestField: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_flStartValue: usize = 0x1CC; // float32
                pub const m_flEndValue: usize = 0x1D0; // float32
                pub const m_flCycleTime: usize = 0x1D4; // float32
                pub const m_bDoNotRepeatCycle: usize = 0x1D8; // bool
                pub const m_bSynchronizeParticles: usize = 0x1D9; // bool
                pub const m_nCPScale: usize = 0x1DC; // int32
                pub const m_nCPFieldMin: usize = 0x1E0; // int32
                pub const m_nCPFieldMax: usize = 0x1E4; // int32
                pub const m_nSetMethod: usize = 0x1E8; // ParticleSetMethod_t
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RenderMaterialProxy {
                pub const m_nMaterialControlPoint: usize = 0x214; // int32
                pub const m_nProxyType: usize = 0x218; // MaterialProxyType_t
                pub const m_MaterialVars: usize = 0x220; // CUtlVector<MaterialVariable_t>
                pub const m_hOverrideMaterial: usize = 0x238; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_flMaterialOverrideEnabled: usize = 0x240; // CParticleCollectionFloatInput
                pub const m_vecColorScale: usize = 0x3A8; // CParticleCollectionVecInput
                pub const m_flAlpha: usize = 0xA38; // CPerParticleFloatInput
                pub const m_nColorBlendType: usize = 0xBA0; // ParticleColorBlendType_t
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            pub mod FloatInputMaterialVariable_t {
                pub const m_strVariable: usize = 0x0; // CUtlString
                pub const m_flInput: usize = 0x8; // CParticleCollectionFloatInput
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RampScalarLinear {
                pub const m_RateMin: usize = 0x1C8; // float32
                pub const m_RateMax: usize = 0x1CC; // float32
                pub const m_flStartTime_min: usize = 0x1D0; // float32
                pub const m_flStartTime_max: usize = 0x1D4; // float32
                pub const m_flEndTime_min: usize = 0x1D8; // float32
                pub const m_flEndTime_max: usize = 0x1DC; // float32
                pub const m_nField: usize = 0x200; // ParticleAttributeIndex_t
                pub const m_bProportionalOp: usize = 0x204; // bool
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_RotateVector {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_vecRotAxisMin: usize = 0x1CC; // Vector
                pub const m_vecRotAxisMax: usize = 0x1D8; // Vector
                pub const m_flRotRateMin: usize = 0x1E4; // float32
                pub const m_flRotRateMax: usize = 0x1E8; // float32
                pub const m_bNormalize: usize = 0x1EC; // bool
                pub const m_flScale: usize = 0x1F0; // CPerParticleFloatInput
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_InitVecCollection {
                pub const m_InputValue: usize = 0x1D0; // CParticleCollectionVecInput
                pub const m_nOutputField: usize = 0x860; // ParticleAttributeIndex_t
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_RemapParticleCountToNamedModelMeshGroupScalar {
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_INIT_SequenceFromCP {
                pub const m_bKillUnused: usize = 0x1CC; // bool
                pub const m_bRadiusScale: usize = 0x1CD; // bool
                pub const m_nCP: usize = 0x1D0; // int32
                pub const m_vecOffset: usize = 0x1D4; // Vector
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_CPOffsetToPercentageBetweenCPs {
                pub const m_flInputMin: usize = 0x1C8; // float32
                pub const m_flInputMax: usize = 0x1CC; // float32
                pub const m_flInputBias: usize = 0x1D0; // float32
                pub const m_nStartCP: usize = 0x1D4; // int32
                pub const m_nEndCP: usize = 0x1D8; // int32
                pub const m_nOffsetCP: usize = 0x1DC; // int32
                pub const m_nOuputCP: usize = 0x1E0; // int32
                pub const m_nInputCP: usize = 0x1E4; // int32
                pub const m_bRadialCheck: usize = 0x1E8; // bool
                pub const m_bScaleOffset: usize = 0x1E9; // bool
                pub const m_vecOffset: usize = 0x1EC; // Vector
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // ���x.
            // 
            // Invalid
            // 
            // p4�x.
            // @��x.
            // 
            // char
            // 
            // p4�x.
            // @��x.
            // 
            // uint8
            // 
            // p4�x.
            // @��x.
            // 
            // uint16
            // 
            // p4�x.
            // @��x.
            // 
            // uint32
            // 
            // p4�x.
            // @��x.
            // 
            // uint64
            // 
            // p4�x.
            // @��x.
            // 
            // float64
            // 
            // p4�x.
            // @��x.
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P�k�+
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            pub mod C_OP_LerpEndCapScalar {
                pub const m_nFieldOutput: usize = 0x1C8; // ParticleAttributeIndex_t
                pub const m_flOutput: usize = 0x1CC; // float32
                pub const m_flLerpTime: usize = 0x1D0; // float32
            }
        }
    }
}
